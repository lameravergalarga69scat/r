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
	struct<102> Local_14 = { 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8 } ;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 1;
	var uLocal_126 = 0;
	int iLocal_127 = 0;
	struct<97> Local_128 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_225[4] = { 0, 0, 0, 0 };
	int iLocal_230[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	vector3 vLocal_243[60] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	struct<8> Local_424[101];
	int iLocal_1233[31] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<13> Local_1265[14];
	int iLocal_1448[3] = { 0, 0, 0 };
	int iLocal_1452[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<7> Local_1465[4];
	int iLocal_1494[3] = { 0, 0, 0 };
	struct<8> Local_1498[3];
	struct<5> Local_1523[9];
	vector3 vLocal_1569[43] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	var uLocal_1699 = 0;
	struct<404> Local_1700 = { 0, 0, 0, 11, 0, 0, 0, 0, 1092616192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1082130432, 0, 0, 0, 0, 1092616192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1082130432, 0, 0, 0, 0, 1092616192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1082130432, 0, 0, 0, 0, 1092616192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1082130432, 0, 0, 0, 0, 1092616192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1082130432, 0, 0, 0, 0, 1092616192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1082130432, 0, 0, 0, 0, 1092616192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1082130432, 0, 0, 0, 0, 1092616192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1082130432, 0, 0, 0, 0, 1092616192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1082130432, 0, 0, 0, 0, 1092616192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1082130432, 0, 0, 0, 0, 1092616192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1082130432, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1103626240, 1109393408, 1117126656, 1119092736, 1120403456, 0, 0, 0, 1065353216, 0, 0 } ;
	vector3 vLocal_2104 = { 0f, 0f, 0f };
	var uLocal_2107 = 0;
	var uLocal_2108 = 0;
	var uLocal_2109 = 0;
	var uLocal_2110 = -1;
	int iLocal_2111 = 0;
	int iLocal_2112 = 0;
	int iLocal_2113 = 0;
	int iLocal_2114 = 0;
	int iLocal_2115 = 0;
	int iLocal_2116 = 0;
	int iLocal_2117 = 0;
	int iLocal_2118 = 0;
	int iLocal_2119 = 0;
	int iLocal_2120 = 0;
	int iLocal_2121 = 0;
	int iLocal_2122 = 0;
	int iLocal_2123 = 0;
	var uLocal_2124[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2135 = 0;
	vector3 vLocal_2136 = { 0f, 0f, 0f };
	vector3 vLocal_2139 = { 0f, 0f, 0f };
	int iLocal_2142 = 0;
	int iLocal_2143 = 0;
	float fLocal_2144 = 0f;
	int iLocal_2145 = 0;
	int iLocal_2146 = 0;
	vector3 vLocal_2147 = { 0f, 0f, 0f };
	vector3 vLocal_2150 = { 0f, 0f, 0f };
	int iLocal_2153 = 0;
	int iLocal_2154 = 0;
	vector3 vLocal_2155 = { 0f, 0f, 0f };
	vector3 vLocal_2158 = { 0f, 0f, 0f };
	int iLocal_2161 = 0;
	int iLocal_2162 = 0;
	vector3 vLocal_2163 = { 0f, 0f, 0f };
	int iLocal_2166[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_2182 = 15;
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
	int iLocal_2258 = 0;
	int iLocal_2259 = 0;
	int iLocal_2260 = 0;
	int iLocal_2261 = 0;
	struct<17> Local_2262 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1069547520, 0, 0, 0, 0 } ;
	var uLocal_2279 = 0;
	var uLocal_2280 = 0;
	var uLocal_2281 = 0;
	int iLocal_2282 = 0;
	int iLocal_2283 = 0;
	int iLocal_2284 = 0;
	int iLocal_2285 = 0;
	float fLocal_2286 = 0f;
	int iLocal_2287 = 0;
	var uLocal_2288 = 0;
	var uLocal_2289 = 0;
	var uLocal_2290 = 0;
	var uLocal_2291 = 0;
	var uLocal_2292 = 0;
	var uLocal_2293 = 0;
	var uLocal_2294 = 0;
	var uLocal_2295 = 21;
	var uLocal_2296 = 6;
	var uLocal_2297 = 0;
	var uLocal_2298 = 0;
	var uLocal_2299 = 0;
	float fLocal_2300 = 0f;
	int iLocal_2301 = 0;
	int iLocal_2302 = 0;
	int iLocal_2303 = 0;
	int iLocal_2304 = 0;
	int iLocal_2305 = 0;
	int iLocal_2306 = 0;
	int iLocal_2307 = 0;
	int iLocal_2308 = 0;
	int iLocal_2309 = 0;
	int iLocal_2310 = 0;
	int iLocal_2311 = 0;
	int iLocal_2312 = 0;
	int iLocal_2313 = 0;
	vector3 vLocal_2314 = { 0f, 0f, 0f };
	vector3 vLocal_2317 = { 0f, 0f, 0f };
	int iLocal_2320 = 0;
	int iLocal_2321 = 0;
	float fLocal_2322 = 0f;
	int iLocal_2323 = 0;
	int iLocal_2324 = 0;
	int iLocal_2325 = 0;
	int iLocal_2326 = 0;
	int iLocal_2327 = 0;
	struct<5> Local_2328[8];
	int iLocal_2369[5] = { 0, 0, 0, 0, 0 };
	int iLocal_2375 = 0;
	int iLocal_2376 = 0;
	int iLocal_2377 = 0;
	var uLocal_2378 = 0;
	var uLocal_2379 = 27;
	var uLocal_2380 = 8;
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
	var uLocal_2401 = -1;
	var uLocal_2402 = 8;
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
	var uLocal_2423 = -1;
	var uLocal_2424 = 8;
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
	var uLocal_2445 = -1;
	var uLocal_2446 = 8;
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
	var uLocal_2467 = -1;
	var uLocal_2468 = 8;
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
	var uLocal_2489 = -1;
	var uLocal_2490 = 8;
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
	var uLocal_2511 = -1;
	var uLocal_2512 = 8;
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
	var uLocal_2533 = -1;
	var uLocal_2534 = 8;
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
	var uLocal_2555 = -1;
	var uLocal_2556 = 8;
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
	var uLocal_2577 = -1;
	var uLocal_2578 = 8;
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
	var uLocal_2599 = -1;
	var uLocal_2600 = 8;
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
	var uLocal_2621 = -1;
	var uLocal_2622 = 8;
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
	var uLocal_2643 = -1;
	var uLocal_2644 = 8;
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
	var uLocal_2665 = -1;
	var uLocal_2666 = 8;
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
	var uLocal_2687 = -1;
	var uLocal_2688 = 8;
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
	var uLocal_2709 = -1;
	var uLocal_2710 = 8;
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
	var uLocal_2731 = -1;
	var uLocal_2732 = 8;
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
	var uLocal_2753 = -1;
	var uLocal_2754 = 8;
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
	var uLocal_2775 = -1;
	var uLocal_2776 = 8;
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
	var uLocal_2797 = -1;
	var uLocal_2798 = 8;
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
	var uLocal_2819 = -1;
	var uLocal_2820 = 8;
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
	var uLocal_2841 = -1;
	var uLocal_2842 = 8;
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
	var uLocal_2863 = -1;
	var uLocal_2864 = 8;
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
	var uLocal_2885 = -1;
	var uLocal_2886 = 8;
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
	var uLocal_2907 = -1;
	var uLocal_2908 = 8;
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
	var uLocal_2929 = -1;
	var uLocal_2930 = 8;
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
	var uLocal_2951 = -1;
	var uLocal_2952 = 8;
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
	var uLocal_2973 = -1;
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
	var uLocal_3012 = 2;
	var uLocal_3013 = 0;
	var uLocal_3014 = 0;
	var uLocal_3015 = 0;
	var uLocal_3016 = 60;
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
	var uLocal_3197 = 40;
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
	var uLocal_3398 = 20;
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
	var uLocal_3459 = 14;
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
	var uLocal_3504 = 60;
	var uLocal_3505 = 0;
	var uLocal_3506 = 0;
	var uLocal_3507 = 0;
	var uLocal_3508 = 0;
	var uLocal_3509 = 20;
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
	var uLocal_3576 = 20;
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
	var uLocal_3643 = 20;
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
	var uLocal_3710 = 20;
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
	var uLocal_3777 = 20;
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
	var uLocal_3844 = 20;
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
	var uLocal_3911 = 20;
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
	var uLocal_3978 = 20;
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
	var uLocal_4045 = 20;
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
	var uLocal_4112 = 20;
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
	var uLocal_4179 = 20;
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
	var uLocal_4246 = 20;
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
	var uLocal_4313 = 20;
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
	var uLocal_4380 = 20;
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
	var uLocal_4447 = 20;
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
	var uLocal_4514 = 20;
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
	var uLocal_4581 = 20;
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
	var uLocal_4648 = 20;
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
	var uLocal_4715 = 20;
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
	var uLocal_4782 = 20;
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
	var uLocal_4849 = 20;
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
	var uLocal_4916 = 20;
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
	var uLocal_4983 = 20;
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
	var uLocal_5050 = 20;
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
	var uLocal_5117 = 20;
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
	var uLocal_5184 = 20;
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
	var uLocal_5251 = 20;
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
	var uLocal_5318 = 20;
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
	var uLocal_5385 = 20;
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
	var uLocal_5452 = 20;
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
	var uLocal_5519 = 20;
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
	var uLocal_5586 = 20;
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
	var uLocal_5653 = 20;
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
	var uLocal_5720 = 20;
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
	var uLocal_5787 = 20;
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
	var uLocal_5854 = 20;
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
	var uLocal_5921 = 20;
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
	var uLocal_5988 = 20;
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
	var uLocal_6055 = 20;
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
	var uLocal_6122 = 20;
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
	var uLocal_6189 = 20;
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
	var uLocal_6256 = 20;
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
	var uLocal_6323 = 20;
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
	var uLocal_6390 = 20;
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
	var uLocal_6457 = 20;
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
	var uLocal_6524 = 20;
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
	var uLocal_6591 = 20;
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
	var uLocal_6658 = 20;
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
	var uLocal_6725 = 20;
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
	var uLocal_6792 = 20;
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
	var uLocal_6859 = 20;
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
	var uLocal_6926 = 20;
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
	var uLocal_6984 = 0;
	var uLocal_6985 = 0;
	var uLocal_6986 = 0;
	var uLocal_6987 = 0;
	var uLocal_6988 = 0;
	var uLocal_6989 = 0;
	var uLocal_6990 = 0;
	var uLocal_6991 = 0;
	var uLocal_6992 = 0;
	var uLocal_6993 = 20;
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
	var uLocal_7055 = 0;
	var uLocal_7056 = 0;
	var uLocal_7057 = 0;
	var uLocal_7058 = 0;
	var uLocal_7059 = 0;
	var uLocal_7060 = 20;
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
	var uLocal_7127 = 20;
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
	var uLocal_7171 = 0;
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
	var uLocal_7194 = 20;
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
	var uLocal_7212 = 0;
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
	var uLocal_7261 = 20;
	var uLocal_7262 = 0;
	var uLocal_7263 = 0;
	var uLocal_7264 = 0;
	var uLocal_7265 = 0;
	var uLocal_7266 = 0;
	var uLocal_7267 = 0;
	var uLocal_7268 = 0;
	var uLocal_7269 = 0;
	var uLocal_7270 = 0;
	var uLocal_7271 = 0;
	var uLocal_7272 = 0;
	var uLocal_7273 = 0;
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
	var uLocal_7289 = 0;
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
	var uLocal_7310 = 0;
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
	var uLocal_7328 = 20;
	var uLocal_7329 = 0;
	var uLocal_7330 = 0;
	var uLocal_7331 = 0;
	var uLocal_7332 = 0;
	var uLocal_7333 = 0;
	var uLocal_7334 = 0;
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
	var uLocal_7395 = 20;
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
	var uLocal_7457 = 0;
	var uLocal_7458 = 0;
	var uLocal_7459 = 0;
	var uLocal_7460 = 0;
	var uLocal_7461 = 0;
	var uLocal_7462 = 20;
	var uLocal_7463 = 0;
	var uLocal_7464 = 0;
	var uLocal_7465 = 0;
	var uLocal_7466 = 0;
	var uLocal_7467 = 0;
	var uLocal_7468 = 0;
	var uLocal_7469 = 0;
	var uLocal_7470 = 0;
	var uLocal_7471 = 0;
	var uLocal_7472 = 0;
	var uLocal_7473 = 0;
	var uLocal_7474 = 0;
	var uLocal_7475 = 0;
	var uLocal_7476 = 0;
	var uLocal_7477 = 0;
	var uLocal_7478 = 0;
	var uLocal_7479 = 0;
	var uLocal_7480 = 0;
	var uLocal_7481 = 0;
	var uLocal_7482 = 0;
	var uLocal_7483 = 0;
	var uLocal_7484 = 0;
	var uLocal_7485 = 0;
	var uLocal_7486 = 0;
	var uLocal_7487 = 0;
	var uLocal_7488 = 0;
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
	var uLocal_7499 = 0;
	var uLocal_7500 = 0;
	var uLocal_7501 = 0;
	var uLocal_7502 = 0;
	var uLocal_7503 = 0;
	var uLocal_7504 = 0;
	var uLocal_7505 = 0;
	var uLocal_7506 = 0;
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
	var uLocal_7517 = 0;
	var uLocal_7518 = 0;
	var uLocal_7519 = 0;
	var uLocal_7520 = 0;
	var uLocal_7521 = 0;
	var uLocal_7522 = 0;
	var uLocal_7523 = 0;
	var uLocal_7524 = 0;
	var uLocal_7525 = 10;
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
	var uLocal_7536 = 0;
	var uLocal_7537 = 0;
	var uLocal_7538 = 0;
	var uLocal_7539 = 0;
	var uLocal_7540 = 0;
	var uLocal_7541 = 0;
	var uLocal_7542 = 0;
	var uLocal_7543 = 0;
	var uLocal_7544 = 0;
	var uLocal_7545 = 0;
	var uLocal_7546 = 0;
	var uLocal_7547 = 0;
	var uLocal_7548 = 0;
	var uLocal_7549 = 0;
	var uLocal_7550 = 0;
	var uLocal_7551 = 0;
	var uLocal_7552 = 0;
	var uLocal_7553 = 0;
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
	var uLocal_7564 = 0;
	var uLocal_7565 = 0;
	var uLocal_7566 = 10;
	var uLocal_7567 = 0;
	var uLocal_7568 = 0;
	var uLocal_7569 = 0;
	var uLocal_7570 = 0;
	var uLocal_7571 = 0;
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
	var uLocal_7582 = 0;
	var uLocal_7583 = 0;
	var uLocal_7584 = 0;
	var uLocal_7585 = 0;
	var uLocal_7586 = 0;
	var uLocal_7587 = 0;
	var uLocal_7588 = 0;
	var uLocal_7589 = 0;
	var uLocal_7590 = 0;
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
	var uLocal_7601 = 0;
	var uLocal_7602 = 0;
	var uLocal_7603 = 0;
	var uLocal_7604 = 0;
	var uLocal_7605 = 0;
	var uLocal_7606 = 0;
	var uLocal_7607 = 0;
	var uLocal_7608 = 0;
	var uLocal_7609 = 0;
	var uLocal_7610 = 0;
	var uLocal_7611 = 0;
	var uLocal_7612 = 0;
	var uLocal_7613 = 0;
	var uLocal_7614 = 0;
	var uLocal_7615 = 0;
	var uLocal_7616 = 0;
	var uLocal_7617 = 3;
	var uLocal_7618 = 0;
	var uLocal_7619 = 0;
	var uLocal_7620 = 0;
	var uLocal_7621 = 0;
	var uLocal_7622 = 0;
	var uLocal_7623 = 0;
	var uLocal_7624 = 0;
	var uLocal_7625 = 0;
	var uLocal_7626 = 0;
	var uLocal_7627 = 5;
	var uLocal_7628 = 0;
	var uLocal_7629 = 0;
	var uLocal_7630 = 0;
	var uLocal_7631 = 0;
	var uLocal_7632 = 0;
	var uLocal_7633 = 0;
	var uLocal_7634 = 0;
	var uLocal_7635 = 0;
	var uLocal_7636 = 0;
	var uLocal_7637 = 0;
	var uLocal_7638 = 0;
	var uLocal_7639 = 0;
	var uLocal_7640 = 0;
	var uLocal_7641 = 0;
	var uLocal_7642 = 0;
	var uLocal_7643 = 5;
	var uLocal_7644 = 0;
	var uLocal_7645 = 0;
	var uLocal_7646 = 0;
	var uLocal_7647 = 0;
	var uLocal_7648 = 0;
	var uLocal_7649 = 0;
	var uLocal_7650 = 0;
	var uLocal_7651 = 0;
	var uLocal_7652 = 0;
	var uLocal_7653 = 0;
	var uLocal_7654 = 0;
	var uLocal_7655 = 0;
	var uLocal_7656 = 0;
	var uLocal_7657 = 0;
	var uLocal_7658 = 0;
	var uLocal_7659 = 0;
	var uLocal_7660 = 0;
	var uLocal_7661 = 0;
	var uLocal_7662 = 0;
	var uLocal_7663 = 0;
	var uLocal_7664 = 5;
	var uLocal_7665 = 0;
	var uLocal_7666 = 0;
	var uLocal_7667 = 0;
	var uLocal_7668 = 0;
	var uLocal_7669 = 0;
	var uLocal_7670 = 0;
	var uLocal_7671 = 0;
	var uLocal_7672 = 0;
	var uLocal_7673 = 0;
	var uLocal_7674 = 0;
	var uLocal_7675 = 0;
	var uLocal_7676 = 0;
	var uLocal_7677 = 0;
	var uLocal_7678 = 0;
	var uLocal_7679 = 0;
	var uLocal_7680 = 0;
	var uLocal_7681 = 0;
	var uLocal_7682 = 0;
	var uLocal_7683 = 0;
	var uLocal_7684 = 0;
	var uLocal_7685 = 0;
	var uLocal_7686 = 0;
	var uLocal_7687 = 0;
	var uLocal_7688 = 24;
	var uLocal_7689 = 0;
	var uLocal_7690 = 0;
	var uLocal_7691 = 0;
	var uLocal_7692 = 0;
	var uLocal_7693 = 0;
	var uLocal_7694 = 0;
	var uLocal_7695 = 0;
	var uLocal_7696 = 0;
	var uLocal_7697 = 0;
	var uLocal_7698 = 0;
	var uLocal_7699 = 0;
	var uLocal_7700 = 0;
	var uLocal_7701 = 0;
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
	var uLocal_7712 = 0;
	var uLocal_7713 = 0;
	var uLocal_7714 = 0;
	var uLocal_7715 = 0;
	var uLocal_7716 = 0;
	var uLocal_7717 = 0;
	var uLocal_7718 = 0;
	var uLocal_7719 = 0;
	var uLocal_7720 = 0;
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
	var uLocal_7731 = 0;
	var uLocal_7732 = 0;
	var uLocal_7733 = 0;
	var uLocal_7734 = 0;
	var uLocal_7735 = 0;
	var uLocal_7736 = 0;
	var uLocal_7737 = 0;
	var uLocal_7738 = 0;
	var uLocal_7739 = 0;
	var uLocal_7740 = 0;
	var uLocal_7741 = 0;
	var uLocal_7742 = 0;
	var uLocal_7743 = 0;
	var uLocal_7744 = 0;
	var uLocal_7745 = 0;
	var uLocal_7746 = 0;
	var uLocal_7747 = 0;
	var uLocal_7748 = 0;
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
	var uLocal_7759 = 0;
	var uLocal_7760 = 0;
	var uLocal_7761 = 0;
	var uLocal_7762 = 0;
	var uLocal_7763 = 0;
	var uLocal_7764 = 0;
	var uLocal_7765 = 0;
	var uLocal_7766 = 0;
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
	var uLocal_7777 = 0;
	var uLocal_7778 = 0;
	var uLocal_7779 = 0;
	var uLocal_7780 = 0;
	var uLocal_7781 = 0;
	var uLocal_7782 = 0;
	var uLocal_7783 = 0;
	var uLocal_7784 = 0;
	var uLocal_7785 = 0;
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
	var uLocal_7796 = 0;
	var uLocal_7797 = 0;
	var uLocal_7798 = 0;
	var uLocal_7799 = 0;
	var uLocal_7800 = 0;
	var uLocal_7801 = 30;
	var uLocal_7802 = 0;
	var uLocal_7803 = 0;
	var uLocal_7804 = 0;
	var uLocal_7805 = 0;
	var uLocal_7806 = 0;
	var uLocal_7807 = 3;
	var uLocal_7808 = 0;
	var uLocal_7809 = 0;
	var uLocal_7810 = 0;
	var uLocal_7811 = 0;
	var uLocal_7812 = -1;
	var uLocal_7813 = 0;
	var uLocal_7814 = 5;
	var uLocal_7815 = 0;
	var uLocal_7816 = 0;
	var uLocal_7817 = 0;
	var uLocal_7818 = 0;
	var uLocal_7819 = 0;
	var uLocal_7820 = 0;
	var uLocal_7821 = 0;
	var uLocal_7822 = 0;
	var uLocal_7823 = 0;
	var uLocal_7824 = 0;
	var uLocal_7825 = 10;
	var uLocal_7826 = 3;
	var uLocal_7827 = 500;
	var uLocal_7828 = 10000;
	var uLocal_7829 = 0;
	var uLocal_7830 = 3;
	var uLocal_7831 = 500;
	var uLocal_7832 = 10000;
	var uLocal_7833 = 0;
	var uLocal_7834 = 3;
	var uLocal_7835 = 500;
	var uLocal_7836 = 10000;
	var uLocal_7837 = 0;
	var uLocal_7838 = 3;
	var uLocal_7839 = 500;
	var uLocal_7840 = 10000;
	var uLocal_7841 = 0;
	var uLocal_7842 = 3;
	var uLocal_7843 = 500;
	var uLocal_7844 = 10000;
	var uLocal_7845 = 0;
	var uLocal_7846 = 3;
	var uLocal_7847 = 500;
	var uLocal_7848 = 10000;
	var uLocal_7849 = 0;
	var uLocal_7850 = 3;
	var uLocal_7851 = 500;
	var uLocal_7852 = 10000;
	var uLocal_7853 = 0;
	var uLocal_7854 = 3;
	var uLocal_7855 = 500;
	var uLocal_7856 = 10000;
	var uLocal_7857 = 0;
	var uLocal_7858 = 3;
	var uLocal_7859 = 500;
	var uLocal_7860 = 10000;
	var uLocal_7861 = 0;
	var uLocal_7862 = 3;
	var uLocal_7863 = 500;
	var uLocal_7864 = 10000;
	var uLocal_7865 = 0;
	var uLocal_7866 = 0;
	var uLocal_7867 = 0;
	var uLocal_7868 = 0;
	var uLocal_7869 = 0;
	var uLocal_7870 = 0;
	var uLocal_7871 = 0;
	var uLocal_7872 = 3;
	var uLocal_7873 = 0;
	var uLocal_7874 = 0;
	var uLocal_7875 = 0;
	var uLocal_7876 = 0;
	var uLocal_7877 = -1;
	var uLocal_7878 = 0;
	var uLocal_7879 = 5;
	var uLocal_7880 = 0;
	var uLocal_7881 = 0;
	var uLocal_7882 = 0;
	var uLocal_7883 = 0;
	var uLocal_7884 = 0;
	var uLocal_7885 = 0;
	var uLocal_7886 = 0;
	var uLocal_7887 = 0;
	var uLocal_7888 = 0;
	var uLocal_7889 = 0;
	var uLocal_7890 = 10;
	var uLocal_7891 = 3;
	var uLocal_7892 = 500;
	var uLocal_7893 = 10000;
	var uLocal_7894 = 0;
	var uLocal_7895 = 3;
	var uLocal_7896 = 500;
	var uLocal_7897 = 10000;
	var uLocal_7898 = 0;
	var uLocal_7899 = 3;
	var uLocal_7900 = 500;
	var uLocal_7901 = 10000;
	var uLocal_7902 = 0;
	var uLocal_7903 = 3;
	var uLocal_7904 = 500;
	var uLocal_7905 = 10000;
	var uLocal_7906 = 0;
	var uLocal_7907 = 3;
	var uLocal_7908 = 500;
	var uLocal_7909 = 10000;
	var uLocal_7910 = 0;
	var uLocal_7911 = 3;
	var uLocal_7912 = 500;
	var uLocal_7913 = 10000;
	var uLocal_7914 = 0;
	var uLocal_7915 = 3;
	var uLocal_7916 = 500;
	var uLocal_7917 = 10000;
	var uLocal_7918 = 0;
	var uLocal_7919 = 3;
	var uLocal_7920 = 500;
	var uLocal_7921 = 10000;
	var uLocal_7922 = 0;
	var uLocal_7923 = 3;
	var uLocal_7924 = 500;
	var uLocal_7925 = 10000;
	var uLocal_7926 = 0;
	var uLocal_7927 = 3;
	var uLocal_7928 = 500;
	var uLocal_7929 = 10000;
	var uLocal_7930 = 0;
	var uLocal_7931 = 0;
	var uLocal_7932 = 0;
	var uLocal_7933 = 0;
	var uLocal_7934 = 0;
	var uLocal_7935 = 0;
	var uLocal_7936 = 0;
	var uLocal_7937 = 3;
	var uLocal_7938 = 0;
	var uLocal_7939 = 0;
	var uLocal_7940 = 0;
	var uLocal_7941 = 0;
	var uLocal_7942 = -1;
	var uLocal_7943 = 0;
	var uLocal_7944 = 5;
	var uLocal_7945 = 0;
	var uLocal_7946 = 0;
	var uLocal_7947 = 0;
	var uLocal_7948 = 0;
	var uLocal_7949 = 0;
	var uLocal_7950 = 0;
	var uLocal_7951 = 0;
	var uLocal_7952 = 0;
	var uLocal_7953 = 0;
	var uLocal_7954 = 0;
	var uLocal_7955 = 10;
	var uLocal_7956 = 3;
	var uLocal_7957 = 500;
	var uLocal_7958 = 10000;
	var uLocal_7959 = 0;
	var uLocal_7960 = 3;
	var uLocal_7961 = 500;
	var uLocal_7962 = 10000;
	var uLocal_7963 = 0;
	var uLocal_7964 = 3;
	var uLocal_7965 = 500;
	var uLocal_7966 = 10000;
	var uLocal_7967 = 0;
	var uLocal_7968 = 3;
	var uLocal_7969 = 500;
	var uLocal_7970 = 10000;
	var uLocal_7971 = 0;
	var uLocal_7972 = 3;
	var uLocal_7973 = 500;
	var uLocal_7974 = 10000;
	var uLocal_7975 = 0;
	var uLocal_7976 = 3;
	var uLocal_7977 = 500;
	var uLocal_7978 = 10000;
	var uLocal_7979 = 0;
	var uLocal_7980 = 3;
	var uLocal_7981 = 500;
	var uLocal_7982 = 10000;
	var uLocal_7983 = 0;
	var uLocal_7984 = 3;
	var uLocal_7985 = 500;
	var uLocal_7986 = 10000;
	var uLocal_7987 = 0;
	var uLocal_7988 = 3;
	var uLocal_7989 = 500;
	var uLocal_7990 = 10000;
	var uLocal_7991 = 0;
	var uLocal_7992 = 3;
	var uLocal_7993 = 500;
	var uLocal_7994 = 10000;
	var uLocal_7995 = 0;
	var uLocal_7996 = 0;
	var uLocal_7997 = 0;
	var uLocal_7998 = 0;
	var uLocal_7999 = 0;
	var uLocal_8000 = 0;
	var uLocal_8001 = 0;
	var uLocal_8002 = 3;
	var uLocal_8003 = 0;
	var uLocal_8004 = 0;
	var uLocal_8005 = 0;
	var uLocal_8006 = 0;
	var uLocal_8007 = -1;
	var uLocal_8008 = 0;
	var uLocal_8009 = 5;
	var uLocal_8010 = 0;
	var uLocal_8011 = 0;
	var uLocal_8012 = 0;
	var uLocal_8013 = 0;
	var uLocal_8014 = 0;
	var uLocal_8015 = 0;
	var uLocal_8016 = 0;
	var uLocal_8017 = 0;
	var uLocal_8018 = 0;
	var uLocal_8019 = 0;
	var uLocal_8020 = 10;
	var uLocal_8021 = 3;
	var uLocal_8022 = 500;
	var uLocal_8023 = 10000;
	var uLocal_8024 = 0;
	var uLocal_8025 = 3;
	var uLocal_8026 = 500;
	var uLocal_8027 = 10000;
	var uLocal_8028 = 0;
	var uLocal_8029 = 3;
	var uLocal_8030 = 500;
	var uLocal_8031 = 10000;
	var uLocal_8032 = 0;
	var uLocal_8033 = 3;
	var uLocal_8034 = 500;
	var uLocal_8035 = 10000;
	var uLocal_8036 = 0;
	var uLocal_8037 = 3;
	var uLocal_8038 = 500;
	var uLocal_8039 = 10000;
	var uLocal_8040 = 0;
	var uLocal_8041 = 3;
	var uLocal_8042 = 500;
	var uLocal_8043 = 10000;
	var uLocal_8044 = 0;
	var uLocal_8045 = 3;
	var uLocal_8046 = 500;
	var uLocal_8047 = 10000;
	var uLocal_8048 = 0;
	var uLocal_8049 = 3;
	var uLocal_8050 = 500;
	var uLocal_8051 = 10000;
	var uLocal_8052 = 0;
	var uLocal_8053 = 3;
	var uLocal_8054 = 500;
	var uLocal_8055 = 10000;
	var uLocal_8056 = 0;
	var uLocal_8057 = 3;
	var uLocal_8058 = 500;
	var uLocal_8059 = 10000;
	var uLocal_8060 = 0;
	var uLocal_8061 = 0;
	var uLocal_8062 = 0;
	var uLocal_8063 = 0;
	var uLocal_8064 = 0;
	var uLocal_8065 = 0;
	var uLocal_8066 = 0;
	var uLocal_8067 = 3;
	var uLocal_8068 = 0;
	var uLocal_8069 = 0;
	var uLocal_8070 = 0;
	var uLocal_8071 = 0;
	var uLocal_8072 = -1;
	var uLocal_8073 = 0;
	var uLocal_8074 = 5;
	var uLocal_8075 = 0;
	var uLocal_8076 = 0;
	var uLocal_8077 = 0;
	var uLocal_8078 = 0;
	var uLocal_8079 = 0;
	var uLocal_8080 = 0;
	var uLocal_8081 = 0;
	var uLocal_8082 = 0;
	var uLocal_8083 = 0;
	var uLocal_8084 = 0;
	var uLocal_8085 = 10;
	var uLocal_8086 = 3;
	var uLocal_8087 = 500;
	var uLocal_8088 = 10000;
	var uLocal_8089 = 0;
	var uLocal_8090 = 3;
	var uLocal_8091 = 500;
	var uLocal_8092 = 10000;
	var uLocal_8093 = 0;
	var uLocal_8094 = 3;
	var uLocal_8095 = 500;
	var uLocal_8096 = 10000;
	var uLocal_8097 = 0;
	var uLocal_8098 = 3;
	var uLocal_8099 = 500;
	var uLocal_8100 = 10000;
	var uLocal_8101 = 0;
	var uLocal_8102 = 3;
	var uLocal_8103 = 500;
	var uLocal_8104 = 10000;
	var uLocal_8105 = 0;
	var uLocal_8106 = 3;
	var uLocal_8107 = 500;
	var uLocal_8108 = 10000;
	var uLocal_8109 = 0;
	var uLocal_8110 = 3;
	var uLocal_8111 = 500;
	var uLocal_8112 = 10000;
	var uLocal_8113 = 0;
	var uLocal_8114 = 3;
	var uLocal_8115 = 500;
	var uLocal_8116 = 10000;
	var uLocal_8117 = 0;
	var uLocal_8118 = 3;
	var uLocal_8119 = 500;
	var uLocal_8120 = 10000;
	var uLocal_8121 = 0;
	var uLocal_8122 = 3;
	var uLocal_8123 = 500;
	var uLocal_8124 = 10000;
	var uLocal_8125 = 0;
	var uLocal_8126 = 0;
	var uLocal_8127 = 0;
	var uLocal_8128 = 0;
	var uLocal_8129 = 0;
	var uLocal_8130 = 0;
	var uLocal_8131 = 0;
	var uLocal_8132 = 3;
	var uLocal_8133 = 0;
	var uLocal_8134 = 0;
	var uLocal_8135 = 0;
	var uLocal_8136 = 0;
	var uLocal_8137 = -1;
	var uLocal_8138 = 0;
	var uLocal_8139 = 5;
	var uLocal_8140 = 0;
	var uLocal_8141 = 0;
	var uLocal_8142 = 0;
	var uLocal_8143 = 0;
	var uLocal_8144 = 0;
	var uLocal_8145 = 0;
	var uLocal_8146 = 0;
	var uLocal_8147 = 0;
	var uLocal_8148 = 0;
	var uLocal_8149 = 0;
	var uLocal_8150 = 10;
	var uLocal_8151 = 3;
	var uLocal_8152 = 500;
	var uLocal_8153 = 10000;
	var uLocal_8154 = 0;
	var uLocal_8155 = 3;
	var uLocal_8156 = 500;
	var uLocal_8157 = 10000;
	var uLocal_8158 = 0;
	var uLocal_8159 = 3;
	var uLocal_8160 = 500;
	var uLocal_8161 = 10000;
	var uLocal_8162 = 0;
	var uLocal_8163 = 3;
	var uLocal_8164 = 500;
	var uLocal_8165 = 10000;
	var uLocal_8166 = 0;
	var uLocal_8167 = 3;
	var uLocal_8168 = 500;
	var uLocal_8169 = 10000;
	var uLocal_8170 = 0;
	var uLocal_8171 = 3;
	var uLocal_8172 = 500;
	var uLocal_8173 = 10000;
	var uLocal_8174 = 0;
	var uLocal_8175 = 3;
	var uLocal_8176 = 500;
	var uLocal_8177 = 10000;
	var uLocal_8178 = 0;
	var uLocal_8179 = 3;
	var uLocal_8180 = 500;
	var uLocal_8181 = 10000;
	var uLocal_8182 = 0;
	var uLocal_8183 = 3;
	var uLocal_8184 = 500;
	var uLocal_8185 = 10000;
	var uLocal_8186 = 0;
	var uLocal_8187 = 3;
	var uLocal_8188 = 500;
	var uLocal_8189 = 10000;
	var uLocal_8190 = 0;
	var uLocal_8191 = 0;
	var uLocal_8192 = 0;
	var uLocal_8193 = 0;
	var uLocal_8194 = 0;
	var uLocal_8195 = 0;
	var uLocal_8196 = 0;
	var uLocal_8197 = 3;
	var uLocal_8198 = 0;
	var uLocal_8199 = 0;
	var uLocal_8200 = 0;
	var uLocal_8201 = 0;
	var uLocal_8202 = -1;
	var uLocal_8203 = 0;
	var uLocal_8204 = 5;
	var uLocal_8205 = 0;
	var uLocal_8206 = 0;
	var uLocal_8207 = 0;
	var uLocal_8208 = 0;
	var uLocal_8209 = 0;
	var uLocal_8210 = 0;
	var uLocal_8211 = 0;
	var uLocal_8212 = 0;
	var uLocal_8213 = 0;
	var uLocal_8214 = 0;
	var uLocal_8215 = 10;
	var uLocal_8216 = 3;
	var uLocal_8217 = 500;
	var uLocal_8218 = 10000;
	var uLocal_8219 = 0;
	var uLocal_8220 = 3;
	var uLocal_8221 = 500;
	var uLocal_8222 = 10000;
	var uLocal_8223 = 0;
	var uLocal_8224 = 3;
	var uLocal_8225 = 500;
	var uLocal_8226 = 10000;
	var uLocal_8227 = 0;
	var uLocal_8228 = 3;
	var uLocal_8229 = 500;
	var uLocal_8230 = 10000;
	var uLocal_8231 = 0;
	var uLocal_8232 = 3;
	var uLocal_8233 = 500;
	var uLocal_8234 = 10000;
	var uLocal_8235 = 0;
	var uLocal_8236 = 3;
	var uLocal_8237 = 500;
	var uLocal_8238 = 10000;
	var uLocal_8239 = 0;
	var uLocal_8240 = 3;
	var uLocal_8241 = 500;
	var uLocal_8242 = 10000;
	var uLocal_8243 = 0;
	var uLocal_8244 = 3;
	var uLocal_8245 = 500;
	var uLocal_8246 = 10000;
	var uLocal_8247 = 0;
	var uLocal_8248 = 3;
	var uLocal_8249 = 500;
	var uLocal_8250 = 10000;
	var uLocal_8251 = 0;
	var uLocal_8252 = 3;
	var uLocal_8253 = 500;
	var uLocal_8254 = 10000;
	var uLocal_8255 = 0;
	var uLocal_8256 = 0;
	var uLocal_8257 = 0;
	var uLocal_8258 = 0;
	var uLocal_8259 = 0;
	var uLocal_8260 = 0;
	var uLocal_8261 = 0;
	var uLocal_8262 = 3;
	var uLocal_8263 = 0;
	var uLocal_8264 = 0;
	var uLocal_8265 = 0;
	var uLocal_8266 = 0;
	var uLocal_8267 = -1;
	var uLocal_8268 = 0;
	var uLocal_8269 = 5;
	var uLocal_8270 = 0;
	var uLocal_8271 = 0;
	var uLocal_8272 = 0;
	var uLocal_8273 = 0;
	var uLocal_8274 = 0;
	var uLocal_8275 = 0;
	var uLocal_8276 = 0;
	var uLocal_8277 = 0;
	var uLocal_8278 = 0;
	var uLocal_8279 = 0;
	var uLocal_8280 = 10;
	var uLocal_8281 = 3;
	var uLocal_8282 = 500;
	var uLocal_8283 = 10000;
	var uLocal_8284 = 0;
	var uLocal_8285 = 3;
	var uLocal_8286 = 500;
	var uLocal_8287 = 10000;
	var uLocal_8288 = 0;
	var uLocal_8289 = 3;
	var uLocal_8290 = 500;
	var uLocal_8291 = 10000;
	var uLocal_8292 = 0;
	var uLocal_8293 = 3;
	var uLocal_8294 = 500;
	var uLocal_8295 = 10000;
	var uLocal_8296 = 0;
	var uLocal_8297 = 3;
	var uLocal_8298 = 500;
	var uLocal_8299 = 10000;
	var uLocal_8300 = 0;
	var uLocal_8301 = 3;
	var uLocal_8302 = 500;
	var uLocal_8303 = 10000;
	var uLocal_8304 = 0;
	var uLocal_8305 = 3;
	var uLocal_8306 = 500;
	var uLocal_8307 = 10000;
	var uLocal_8308 = 0;
	var uLocal_8309 = 3;
	var uLocal_8310 = 500;
	var uLocal_8311 = 10000;
	var uLocal_8312 = 0;
	var uLocal_8313 = 3;
	var uLocal_8314 = 500;
	var uLocal_8315 = 10000;
	var uLocal_8316 = 0;
	var uLocal_8317 = 3;
	var uLocal_8318 = 500;
	var uLocal_8319 = 10000;
	var uLocal_8320 = 0;
	var uLocal_8321 = 0;
	var uLocal_8322 = 0;
	var uLocal_8323 = 0;
	var uLocal_8324 = 0;
	var uLocal_8325 = 0;
	var uLocal_8326 = 0;
	var uLocal_8327 = 3;
	var uLocal_8328 = 0;
	var uLocal_8329 = 0;
	var uLocal_8330 = 0;
	var uLocal_8331 = 0;
	var uLocal_8332 = -1;
	var uLocal_8333 = 0;
	var uLocal_8334 = 5;
	var uLocal_8335 = 0;
	var uLocal_8336 = 0;
	var uLocal_8337 = 0;
	var uLocal_8338 = 0;
	var uLocal_8339 = 0;
	var uLocal_8340 = 0;
	var uLocal_8341 = 0;
	var uLocal_8342 = 0;
	var uLocal_8343 = 0;
	var uLocal_8344 = 0;
	var uLocal_8345 = 10;
	var uLocal_8346 = 3;
	var uLocal_8347 = 500;
	var uLocal_8348 = 10000;
	var uLocal_8349 = 0;
	var uLocal_8350 = 3;
	var uLocal_8351 = 500;
	var uLocal_8352 = 10000;
	var uLocal_8353 = 0;
	var uLocal_8354 = 3;
	var uLocal_8355 = 500;
	var uLocal_8356 = 10000;
	var uLocal_8357 = 0;
	var uLocal_8358 = 3;
	var uLocal_8359 = 500;
	var uLocal_8360 = 10000;
	var uLocal_8361 = 0;
	var uLocal_8362 = 3;
	var uLocal_8363 = 500;
	var uLocal_8364 = 10000;
	var uLocal_8365 = 0;
	var uLocal_8366 = 3;
	var uLocal_8367 = 500;
	var uLocal_8368 = 10000;
	var uLocal_8369 = 0;
	var uLocal_8370 = 3;
	var uLocal_8371 = 500;
	var uLocal_8372 = 10000;
	var uLocal_8373 = 0;
	var uLocal_8374 = 3;
	var uLocal_8375 = 500;
	var uLocal_8376 = 10000;
	var uLocal_8377 = 0;
	var uLocal_8378 = 3;
	var uLocal_8379 = 500;
	var uLocal_8380 = 10000;
	var uLocal_8381 = 0;
	var uLocal_8382 = 3;
	var uLocal_8383 = 500;
	var uLocal_8384 = 10000;
	var uLocal_8385 = 0;
	var uLocal_8386 = 0;
	var uLocal_8387 = 0;
	var uLocal_8388 = 0;
	var uLocal_8389 = 0;
	var uLocal_8390 = 0;
	var uLocal_8391 = 0;
	var uLocal_8392 = 3;
	var uLocal_8393 = 0;
	var uLocal_8394 = 0;
	var uLocal_8395 = 0;
	var uLocal_8396 = 0;
	var uLocal_8397 = -1;
	var uLocal_8398 = 0;
	var uLocal_8399 = 5;
	var uLocal_8400 = 0;
	var uLocal_8401 = 0;
	var uLocal_8402 = 0;
	var uLocal_8403 = 0;
	var uLocal_8404 = 0;
	var uLocal_8405 = 0;
	var uLocal_8406 = 0;
	var uLocal_8407 = 0;
	var uLocal_8408 = 0;
	var uLocal_8409 = 0;
	var uLocal_8410 = 10;
	var uLocal_8411 = 3;
	var uLocal_8412 = 500;
	var uLocal_8413 = 10000;
	var uLocal_8414 = 0;
	var uLocal_8415 = 3;
	var uLocal_8416 = 500;
	var uLocal_8417 = 10000;
	var uLocal_8418 = 0;
	var uLocal_8419 = 3;
	var uLocal_8420 = 500;
	var uLocal_8421 = 10000;
	var uLocal_8422 = 0;
	var uLocal_8423 = 3;
	var uLocal_8424 = 500;
	var uLocal_8425 = 10000;
	var uLocal_8426 = 0;
	var uLocal_8427 = 3;
	var uLocal_8428 = 500;
	var uLocal_8429 = 10000;
	var uLocal_8430 = 0;
	var uLocal_8431 = 3;
	var uLocal_8432 = 500;
	var uLocal_8433 = 10000;
	var uLocal_8434 = 0;
	var uLocal_8435 = 3;
	var uLocal_8436 = 500;
	var uLocal_8437 = 10000;
	var uLocal_8438 = 0;
	var uLocal_8439 = 3;
	var uLocal_8440 = 500;
	var uLocal_8441 = 10000;
	var uLocal_8442 = 0;
	var uLocal_8443 = 3;
	var uLocal_8444 = 500;
	var uLocal_8445 = 10000;
	var uLocal_8446 = 0;
	var uLocal_8447 = 3;
	var uLocal_8448 = 500;
	var uLocal_8449 = 10000;
	var uLocal_8450 = 0;
	var uLocal_8451 = 0;
	var uLocal_8452 = 0;
	var uLocal_8453 = 0;
	var uLocal_8454 = 0;
	var uLocal_8455 = 0;
	var uLocal_8456 = 0;
	var uLocal_8457 = 3;
	var uLocal_8458 = 0;
	var uLocal_8459 = 0;
	var uLocal_8460 = 0;
	var uLocal_8461 = 0;
	var uLocal_8462 = -1;
	var uLocal_8463 = 0;
	var uLocal_8464 = 5;
	var uLocal_8465 = 0;
	var uLocal_8466 = 0;
	var uLocal_8467 = 0;
	var uLocal_8468 = 0;
	var uLocal_8469 = 0;
	var uLocal_8470 = 0;
	var uLocal_8471 = 0;
	var uLocal_8472 = 0;
	var uLocal_8473 = 0;
	var uLocal_8474 = 0;
	var uLocal_8475 = 10;
	var uLocal_8476 = 3;
	var uLocal_8477 = 500;
	var uLocal_8478 = 10000;
	var uLocal_8479 = 0;
	var uLocal_8480 = 3;
	var uLocal_8481 = 500;
	var uLocal_8482 = 10000;
	var uLocal_8483 = 0;
	var uLocal_8484 = 3;
	var uLocal_8485 = 500;
	var uLocal_8486 = 10000;
	var uLocal_8487 = 0;
	var uLocal_8488 = 3;
	var uLocal_8489 = 500;
	var uLocal_8490 = 10000;
	var uLocal_8491 = 0;
	var uLocal_8492 = 3;
	var uLocal_8493 = 500;
	var uLocal_8494 = 10000;
	var uLocal_8495 = 0;
	var uLocal_8496 = 3;
	var uLocal_8497 = 500;
	var uLocal_8498 = 10000;
	var uLocal_8499 = 0;
	var uLocal_8500 = 3;
	var uLocal_8501 = 500;
	var uLocal_8502 = 10000;
	var uLocal_8503 = 0;
	var uLocal_8504 = 3;
	var uLocal_8505 = 500;
	var uLocal_8506 = 10000;
	var uLocal_8507 = 0;
	var uLocal_8508 = 3;
	var uLocal_8509 = 500;
	var uLocal_8510 = 10000;
	var uLocal_8511 = 0;
	var uLocal_8512 = 3;
	var uLocal_8513 = 500;
	var uLocal_8514 = 10000;
	var uLocal_8515 = 0;
	var uLocal_8516 = 0;
	var uLocal_8517 = 0;
	var uLocal_8518 = 0;
	var uLocal_8519 = 0;
	var uLocal_8520 = 0;
	var uLocal_8521 = 0;
	var uLocal_8522 = 3;
	var uLocal_8523 = 0;
	var uLocal_8524 = 0;
	var uLocal_8525 = 0;
	var uLocal_8526 = 0;
	var uLocal_8527 = -1;
	var uLocal_8528 = 0;
	var uLocal_8529 = 5;
	var uLocal_8530 = 0;
	var uLocal_8531 = 0;
	var uLocal_8532 = 0;
	var uLocal_8533 = 0;
	var uLocal_8534 = 0;
	var uLocal_8535 = 0;
	var uLocal_8536 = 0;
	var uLocal_8537 = 0;
	var uLocal_8538 = 0;
	var uLocal_8539 = 0;
	var uLocal_8540 = 10;
	var uLocal_8541 = 3;
	var uLocal_8542 = 500;
	var uLocal_8543 = 10000;
	var uLocal_8544 = 0;
	var uLocal_8545 = 3;
	var uLocal_8546 = 500;
	var uLocal_8547 = 10000;
	var uLocal_8548 = 0;
	var uLocal_8549 = 3;
	var uLocal_8550 = 500;
	var uLocal_8551 = 10000;
	var uLocal_8552 = 0;
	var uLocal_8553 = 3;
	var uLocal_8554 = 500;
	var uLocal_8555 = 10000;
	var uLocal_8556 = 0;
	var uLocal_8557 = 3;
	var uLocal_8558 = 500;
	var uLocal_8559 = 10000;
	var uLocal_8560 = 0;
	var uLocal_8561 = 3;
	var uLocal_8562 = 500;
	var uLocal_8563 = 10000;
	var uLocal_8564 = 0;
	var uLocal_8565 = 3;
	var uLocal_8566 = 500;
	var uLocal_8567 = 10000;
	var uLocal_8568 = 0;
	var uLocal_8569 = 3;
	var uLocal_8570 = 500;
	var uLocal_8571 = 10000;
	var uLocal_8572 = 0;
	var uLocal_8573 = 3;
	var uLocal_8574 = 500;
	var uLocal_8575 = 10000;
	var uLocal_8576 = 0;
	var uLocal_8577 = 3;
	var uLocal_8578 = 500;
	var uLocal_8579 = 10000;
	var uLocal_8580 = 0;
	var uLocal_8581 = 0;
	var uLocal_8582 = 0;
	var uLocal_8583 = 0;
	var uLocal_8584 = 0;
	var uLocal_8585 = 0;
	var uLocal_8586 = 0;
	var uLocal_8587 = 3;
	var uLocal_8588 = 0;
	var uLocal_8589 = 0;
	var uLocal_8590 = 0;
	var uLocal_8591 = 0;
	var uLocal_8592 = -1;
	var uLocal_8593 = 0;
	var uLocal_8594 = 5;
	var uLocal_8595 = 0;
	var uLocal_8596 = 0;
	var uLocal_8597 = 0;
	var uLocal_8598 = 0;
	var uLocal_8599 = 0;
	var uLocal_8600 = 0;
	var uLocal_8601 = 0;
	var uLocal_8602 = 0;
	var uLocal_8603 = 0;
	var uLocal_8604 = 0;
	var uLocal_8605 = 10;
	var uLocal_8606 = 3;
	var uLocal_8607 = 500;
	var uLocal_8608 = 10000;
	var uLocal_8609 = 0;
	var uLocal_8610 = 3;
	var uLocal_8611 = 500;
	var uLocal_8612 = 10000;
	var uLocal_8613 = 0;
	var uLocal_8614 = 3;
	var uLocal_8615 = 500;
	var uLocal_8616 = 10000;
	var uLocal_8617 = 0;
	var uLocal_8618 = 3;
	var uLocal_8619 = 500;
	var uLocal_8620 = 10000;
	var uLocal_8621 = 0;
	var uLocal_8622 = 3;
	var uLocal_8623 = 500;
	var uLocal_8624 = 10000;
	var uLocal_8625 = 0;
	var uLocal_8626 = 3;
	var uLocal_8627 = 500;
	var uLocal_8628 = 10000;
	var uLocal_8629 = 0;
	var uLocal_8630 = 3;
	var uLocal_8631 = 500;
	var uLocal_8632 = 10000;
	var uLocal_8633 = 0;
	var uLocal_8634 = 3;
	var uLocal_8635 = 500;
	var uLocal_8636 = 10000;
	var uLocal_8637 = 0;
	var uLocal_8638 = 3;
	var uLocal_8639 = 500;
	var uLocal_8640 = 10000;
	var uLocal_8641 = 0;
	var uLocal_8642 = 3;
	var uLocal_8643 = 500;
	var uLocal_8644 = 10000;
	var uLocal_8645 = 0;
	var uLocal_8646 = 0;
	var uLocal_8647 = 0;
	var uLocal_8648 = 0;
	var uLocal_8649 = 0;
	var uLocal_8650 = 0;
	var uLocal_8651 = 0;
	var uLocal_8652 = 3;
	var uLocal_8653 = 0;
	var uLocal_8654 = 0;
	var uLocal_8655 = 0;
	var uLocal_8656 = 0;
	var uLocal_8657 = -1;
	var uLocal_8658 = 0;
	var uLocal_8659 = 5;
	var uLocal_8660 = 0;
	var uLocal_8661 = 0;
	var uLocal_8662 = 0;
	var uLocal_8663 = 0;
	var uLocal_8664 = 0;
	var uLocal_8665 = 0;
	var uLocal_8666 = 0;
	var uLocal_8667 = 0;
	var uLocal_8668 = 0;
	var uLocal_8669 = 0;
	var uLocal_8670 = 10;
	var uLocal_8671 = 3;
	var uLocal_8672 = 500;
	var uLocal_8673 = 10000;
	var uLocal_8674 = 0;
	var uLocal_8675 = 3;
	var uLocal_8676 = 500;
	var uLocal_8677 = 10000;
	var uLocal_8678 = 0;
	var uLocal_8679 = 3;
	var uLocal_8680 = 500;
	var uLocal_8681 = 10000;
	var uLocal_8682 = 0;
	var uLocal_8683 = 3;
	var uLocal_8684 = 500;
	var uLocal_8685 = 10000;
	var uLocal_8686 = 0;
	var uLocal_8687 = 3;
	var uLocal_8688 = 500;
	var uLocal_8689 = 10000;
	var uLocal_8690 = 0;
	var uLocal_8691 = 3;
	var uLocal_8692 = 500;
	var uLocal_8693 = 10000;
	var uLocal_8694 = 0;
	var uLocal_8695 = 3;
	var uLocal_8696 = 500;
	var uLocal_8697 = 10000;
	var uLocal_8698 = 0;
	var uLocal_8699 = 3;
	var uLocal_8700 = 500;
	var uLocal_8701 = 10000;
	var uLocal_8702 = 0;
	var uLocal_8703 = 3;
	var uLocal_8704 = 500;
	var uLocal_8705 = 10000;
	var uLocal_8706 = 0;
	var uLocal_8707 = 3;
	var uLocal_8708 = 500;
	var uLocal_8709 = 10000;
	var uLocal_8710 = 0;
	var uLocal_8711 = 0;
	var uLocal_8712 = 0;
	var uLocal_8713 = 0;
	var uLocal_8714 = 0;
	var uLocal_8715 = 0;
	var uLocal_8716 = 0;
	var uLocal_8717 = 3;
	var uLocal_8718 = 0;
	var uLocal_8719 = 0;
	var uLocal_8720 = 0;
	var uLocal_8721 = 0;
	var uLocal_8722 = -1;
	var uLocal_8723 = 0;
	var uLocal_8724 = 5;
	var uLocal_8725 = 0;
	var uLocal_8726 = 0;
	var uLocal_8727 = 0;
	var uLocal_8728 = 0;
	var uLocal_8729 = 0;
	var uLocal_8730 = 0;
	var uLocal_8731 = 0;
	var uLocal_8732 = 0;
	var uLocal_8733 = 0;
	var uLocal_8734 = 0;
	var uLocal_8735 = 10;
	var uLocal_8736 = 3;
	var uLocal_8737 = 500;
	var uLocal_8738 = 10000;
	var uLocal_8739 = 0;
	var uLocal_8740 = 3;
	var uLocal_8741 = 500;
	var uLocal_8742 = 10000;
	var uLocal_8743 = 0;
	var uLocal_8744 = 3;
	var uLocal_8745 = 500;
	var uLocal_8746 = 10000;
	var uLocal_8747 = 0;
	var uLocal_8748 = 3;
	var uLocal_8749 = 500;
	var uLocal_8750 = 10000;
	var uLocal_8751 = 0;
	var uLocal_8752 = 3;
	var uLocal_8753 = 500;
	var uLocal_8754 = 10000;
	var uLocal_8755 = 0;
	var uLocal_8756 = 3;
	var uLocal_8757 = 500;
	var uLocal_8758 = 10000;
	var uLocal_8759 = 0;
	var uLocal_8760 = 3;
	var uLocal_8761 = 500;
	var uLocal_8762 = 10000;
	var uLocal_8763 = 0;
	var uLocal_8764 = 3;
	var uLocal_8765 = 500;
	var uLocal_8766 = 10000;
	var uLocal_8767 = 0;
	var uLocal_8768 = 3;
	var uLocal_8769 = 500;
	var uLocal_8770 = 10000;
	var uLocal_8771 = 0;
	var uLocal_8772 = 3;
	var uLocal_8773 = 500;
	var uLocal_8774 = 10000;
	var uLocal_8775 = 0;
	var uLocal_8776 = 0;
	var uLocal_8777 = 0;
	var uLocal_8778 = 0;
	var uLocal_8779 = 0;
	var uLocal_8780 = 0;
	var uLocal_8781 = 0;
	var uLocal_8782 = 3;
	var uLocal_8783 = 0;
	var uLocal_8784 = 0;
	var uLocal_8785 = 0;
	var uLocal_8786 = 0;
	var uLocal_8787 = -1;
	var uLocal_8788 = 0;
	var uLocal_8789 = 5;
	var uLocal_8790 = 0;
	var uLocal_8791 = 0;
	var uLocal_8792 = 0;
	var uLocal_8793 = 0;
	var uLocal_8794 = 0;
	var uLocal_8795 = 0;
	var uLocal_8796 = 0;
	var uLocal_8797 = 0;
	var uLocal_8798 = 0;
	var uLocal_8799 = 0;
	var uLocal_8800 = 10;
	var uLocal_8801 = 3;
	var uLocal_8802 = 500;
	var uLocal_8803 = 10000;
	var uLocal_8804 = 0;
	var uLocal_8805 = 3;
	var uLocal_8806 = 500;
	var uLocal_8807 = 10000;
	var uLocal_8808 = 0;
	var uLocal_8809 = 3;
	var uLocal_8810 = 500;
	var uLocal_8811 = 10000;
	var uLocal_8812 = 0;
	var uLocal_8813 = 3;
	var uLocal_8814 = 500;
	var uLocal_8815 = 10000;
	var uLocal_8816 = 0;
	var uLocal_8817 = 3;
	var uLocal_8818 = 500;
	var uLocal_8819 = 10000;
	var uLocal_8820 = 0;
	var uLocal_8821 = 3;
	var uLocal_8822 = 500;
	var uLocal_8823 = 10000;
	var uLocal_8824 = 0;
	var uLocal_8825 = 3;
	var uLocal_8826 = 500;
	var uLocal_8827 = 10000;
	var uLocal_8828 = 0;
	var uLocal_8829 = 3;
	var uLocal_8830 = 500;
	var uLocal_8831 = 10000;
	var uLocal_8832 = 0;
	var uLocal_8833 = 3;
	var uLocal_8834 = 500;
	var uLocal_8835 = 10000;
	var uLocal_8836 = 0;
	var uLocal_8837 = 3;
	var uLocal_8838 = 500;
	var uLocal_8839 = 10000;
	var uLocal_8840 = 0;
	var uLocal_8841 = 0;
	var uLocal_8842 = 0;
	var uLocal_8843 = 0;
	var uLocal_8844 = 0;
	var uLocal_8845 = 0;
	var uLocal_8846 = 0;
	var uLocal_8847 = 3;
	var uLocal_8848 = 0;
	var uLocal_8849 = 0;
	var uLocal_8850 = 0;
	var uLocal_8851 = 0;
	var uLocal_8852 = -1;
	var uLocal_8853 = 0;
	var uLocal_8854 = 5;
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
	var uLocal_8865 = 10;
	var uLocal_8866 = 3;
	var uLocal_8867 = 500;
	var uLocal_8868 = 10000;
	var uLocal_8869 = 0;
	var uLocal_8870 = 3;
	var uLocal_8871 = 500;
	var uLocal_8872 = 10000;
	var uLocal_8873 = 0;
	var uLocal_8874 = 3;
	var uLocal_8875 = 500;
	var uLocal_8876 = 10000;
	var uLocal_8877 = 0;
	var uLocal_8878 = 3;
	var uLocal_8879 = 500;
	var uLocal_8880 = 10000;
	var uLocal_8881 = 0;
	var uLocal_8882 = 3;
	var uLocal_8883 = 500;
	var uLocal_8884 = 10000;
	var uLocal_8885 = 0;
	var uLocal_8886 = 3;
	var uLocal_8887 = 500;
	var uLocal_8888 = 10000;
	var uLocal_8889 = 0;
	var uLocal_8890 = 3;
	var uLocal_8891 = 500;
	var uLocal_8892 = 10000;
	var uLocal_8893 = 0;
	var uLocal_8894 = 3;
	var uLocal_8895 = 500;
	var uLocal_8896 = 10000;
	var uLocal_8897 = 0;
	var uLocal_8898 = 3;
	var uLocal_8899 = 500;
	var uLocal_8900 = 10000;
	var uLocal_8901 = 0;
	var uLocal_8902 = 3;
	var uLocal_8903 = 500;
	var uLocal_8904 = 10000;
	var uLocal_8905 = 0;
	var uLocal_8906 = 0;
	var uLocal_8907 = 0;
	var uLocal_8908 = 0;
	var uLocal_8909 = 0;
	var uLocal_8910 = 0;
	var uLocal_8911 = 0;
	var uLocal_8912 = 3;
	var uLocal_8913 = 0;
	var uLocal_8914 = 0;
	var uLocal_8915 = 0;
	var uLocal_8916 = 0;
	var uLocal_8917 = -1;
	var uLocal_8918 = 0;
	var uLocal_8919 = 5;
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
	var uLocal_8930 = 10;
	var uLocal_8931 = 3;
	var uLocal_8932 = 500;
	var uLocal_8933 = 10000;
	var uLocal_8934 = 0;
	var uLocal_8935 = 3;
	var uLocal_8936 = 500;
	var uLocal_8937 = 10000;
	var uLocal_8938 = 0;
	var uLocal_8939 = 3;
	var uLocal_8940 = 500;
	var uLocal_8941 = 10000;
	var uLocal_8942 = 0;
	var uLocal_8943 = 3;
	var uLocal_8944 = 500;
	var uLocal_8945 = 10000;
	var uLocal_8946 = 0;
	var uLocal_8947 = 3;
	var uLocal_8948 = 500;
	var uLocal_8949 = 10000;
	var uLocal_8950 = 0;
	var uLocal_8951 = 3;
	var uLocal_8952 = 500;
	var uLocal_8953 = 10000;
	var uLocal_8954 = 0;
	var uLocal_8955 = 3;
	var uLocal_8956 = 500;
	var uLocal_8957 = 10000;
	var uLocal_8958 = 0;
	var uLocal_8959 = 3;
	var uLocal_8960 = 500;
	var uLocal_8961 = 10000;
	var uLocal_8962 = 0;
	var uLocal_8963 = 3;
	var uLocal_8964 = 500;
	var uLocal_8965 = 10000;
	var uLocal_8966 = 0;
	var uLocal_8967 = 3;
	var uLocal_8968 = 500;
	var uLocal_8969 = 10000;
	var uLocal_8970 = 0;
	var uLocal_8971 = 0;
	var uLocal_8972 = 0;
	var uLocal_8973 = 0;
	var uLocal_8974 = 0;
	var uLocal_8975 = 0;
	var uLocal_8976 = 0;
	var uLocal_8977 = 3;
	var uLocal_8978 = 0;
	var uLocal_8979 = 0;
	var uLocal_8980 = 0;
	var uLocal_8981 = 0;
	var uLocal_8982 = -1;
	var uLocal_8983 = 0;
	var uLocal_8984 = 5;
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
	var uLocal_8995 = 10;
	var uLocal_8996 = 3;
	var uLocal_8997 = 500;
	var uLocal_8998 = 10000;
	var uLocal_8999 = 0;
	var uLocal_9000 = 3;
	var uLocal_9001 = 500;
	var uLocal_9002 = 10000;
	var uLocal_9003 = 0;
	var uLocal_9004 = 3;
	var uLocal_9005 = 500;
	var uLocal_9006 = 10000;
	var uLocal_9007 = 0;
	var uLocal_9008 = 3;
	var uLocal_9009 = 500;
	var uLocal_9010 = 10000;
	var uLocal_9011 = 0;
	var uLocal_9012 = 3;
	var uLocal_9013 = 500;
	var uLocal_9014 = 10000;
	var uLocal_9015 = 0;
	var uLocal_9016 = 3;
	var uLocal_9017 = 500;
	var uLocal_9018 = 10000;
	var uLocal_9019 = 0;
	var uLocal_9020 = 3;
	var uLocal_9021 = 500;
	var uLocal_9022 = 10000;
	var uLocal_9023 = 0;
	var uLocal_9024 = 3;
	var uLocal_9025 = 500;
	var uLocal_9026 = 10000;
	var uLocal_9027 = 0;
	var uLocal_9028 = 3;
	var uLocal_9029 = 500;
	var uLocal_9030 = 10000;
	var uLocal_9031 = 0;
	var uLocal_9032 = 3;
	var uLocal_9033 = 500;
	var uLocal_9034 = 10000;
	var uLocal_9035 = 0;
	var uLocal_9036 = 0;
	var uLocal_9037 = 0;
	var uLocal_9038 = 0;
	var uLocal_9039 = 0;
	var uLocal_9040 = 0;
	var uLocal_9041 = 0;
	var uLocal_9042 = 3;
	var uLocal_9043 = 0;
	var uLocal_9044 = 0;
	var uLocal_9045 = 0;
	var uLocal_9046 = 0;
	var uLocal_9047 = -1;
	var uLocal_9048 = 0;
	var uLocal_9049 = 5;
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
	var uLocal_9060 = 10;
	var uLocal_9061 = 3;
	var uLocal_9062 = 500;
	var uLocal_9063 = 10000;
	var uLocal_9064 = 0;
	var uLocal_9065 = 3;
	var uLocal_9066 = 500;
	var uLocal_9067 = 10000;
	var uLocal_9068 = 0;
	var uLocal_9069 = 3;
	var uLocal_9070 = 500;
	var uLocal_9071 = 10000;
	var uLocal_9072 = 0;
	var uLocal_9073 = 3;
	var uLocal_9074 = 500;
	var uLocal_9075 = 10000;
	var uLocal_9076 = 0;
	var uLocal_9077 = 3;
	var uLocal_9078 = 500;
	var uLocal_9079 = 10000;
	var uLocal_9080 = 0;
	var uLocal_9081 = 3;
	var uLocal_9082 = 500;
	var uLocal_9083 = 10000;
	var uLocal_9084 = 0;
	var uLocal_9085 = 3;
	var uLocal_9086 = 500;
	var uLocal_9087 = 10000;
	var uLocal_9088 = 0;
	var uLocal_9089 = 3;
	var uLocal_9090 = 500;
	var uLocal_9091 = 10000;
	var uLocal_9092 = 0;
	var uLocal_9093 = 3;
	var uLocal_9094 = 500;
	var uLocal_9095 = 10000;
	var uLocal_9096 = 0;
	var uLocal_9097 = 3;
	var uLocal_9098 = 500;
	var uLocal_9099 = 10000;
	var uLocal_9100 = 0;
	var uLocal_9101 = 0;
	var uLocal_9102 = 0;
	var uLocal_9103 = 0;
	var uLocal_9104 = 0;
	var uLocal_9105 = 0;
	var uLocal_9106 = 0;
	var uLocal_9107 = 3;
	var uLocal_9108 = 0;
	var uLocal_9109 = 0;
	var uLocal_9110 = 0;
	var uLocal_9111 = 0;
	var uLocal_9112 = -1;
	var uLocal_9113 = 0;
	var uLocal_9114 = 5;
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
	var uLocal_9125 = 10;
	var uLocal_9126 = 3;
	var uLocal_9127 = 500;
	var uLocal_9128 = 10000;
	var uLocal_9129 = 0;
	var uLocal_9130 = 3;
	var uLocal_9131 = 500;
	var uLocal_9132 = 10000;
	var uLocal_9133 = 0;
	var uLocal_9134 = 3;
	var uLocal_9135 = 500;
	var uLocal_9136 = 10000;
	var uLocal_9137 = 0;
	var uLocal_9138 = 3;
	var uLocal_9139 = 500;
	var uLocal_9140 = 10000;
	var uLocal_9141 = 0;
	var uLocal_9142 = 3;
	var uLocal_9143 = 500;
	var uLocal_9144 = 10000;
	var uLocal_9145 = 0;
	var uLocal_9146 = 3;
	var uLocal_9147 = 500;
	var uLocal_9148 = 10000;
	var uLocal_9149 = 0;
	var uLocal_9150 = 3;
	var uLocal_9151 = 500;
	var uLocal_9152 = 10000;
	var uLocal_9153 = 0;
	var uLocal_9154 = 3;
	var uLocal_9155 = 500;
	var uLocal_9156 = 10000;
	var uLocal_9157 = 0;
	var uLocal_9158 = 3;
	var uLocal_9159 = 500;
	var uLocal_9160 = 10000;
	var uLocal_9161 = 0;
	var uLocal_9162 = 3;
	var uLocal_9163 = 500;
	var uLocal_9164 = 10000;
	var uLocal_9165 = 0;
	var uLocal_9166 = 0;
	var uLocal_9167 = 0;
	var uLocal_9168 = 0;
	var uLocal_9169 = 0;
	var uLocal_9170 = 0;
	var uLocal_9171 = 0;
	var uLocal_9172 = 3;
	var uLocal_9173 = 0;
	var uLocal_9174 = 0;
	var uLocal_9175 = 0;
	var uLocal_9176 = 0;
	var uLocal_9177 = -1;
	var uLocal_9178 = 0;
	var uLocal_9179 = 5;
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
	var uLocal_9190 = 10;
	var uLocal_9191 = 3;
	var uLocal_9192 = 500;
	var uLocal_9193 = 10000;
	var uLocal_9194 = 0;
	var uLocal_9195 = 3;
	var uLocal_9196 = 500;
	var uLocal_9197 = 10000;
	var uLocal_9198 = 0;
	var uLocal_9199 = 3;
	var uLocal_9200 = 500;
	var uLocal_9201 = 10000;
	var uLocal_9202 = 0;
	var uLocal_9203 = 3;
	var uLocal_9204 = 500;
	var uLocal_9205 = 10000;
	var uLocal_9206 = 0;
	var uLocal_9207 = 3;
	var uLocal_9208 = 500;
	var uLocal_9209 = 10000;
	var uLocal_9210 = 0;
	var uLocal_9211 = 3;
	var uLocal_9212 = 500;
	var uLocal_9213 = 10000;
	var uLocal_9214 = 0;
	var uLocal_9215 = 3;
	var uLocal_9216 = 500;
	var uLocal_9217 = 10000;
	var uLocal_9218 = 0;
	var uLocal_9219 = 3;
	var uLocal_9220 = 500;
	var uLocal_9221 = 10000;
	var uLocal_9222 = 0;
	var uLocal_9223 = 3;
	var uLocal_9224 = 500;
	var uLocal_9225 = 10000;
	var uLocal_9226 = 0;
	var uLocal_9227 = 3;
	var uLocal_9228 = 500;
	var uLocal_9229 = 10000;
	var uLocal_9230 = 0;
	var uLocal_9231 = 0;
	var uLocal_9232 = 0;
	var uLocal_9233 = 0;
	var uLocal_9234 = 0;
	var uLocal_9235 = 0;
	var uLocal_9236 = 0;
	var uLocal_9237 = 3;
	var uLocal_9238 = 0;
	var uLocal_9239 = 0;
	var uLocal_9240 = 0;
	var uLocal_9241 = 0;
	var uLocal_9242 = -1;
	var uLocal_9243 = 0;
	var uLocal_9244 = 5;
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
	var uLocal_9255 = 10;
	var uLocal_9256 = 3;
	var uLocal_9257 = 500;
	var uLocal_9258 = 10000;
	var uLocal_9259 = 0;
	var uLocal_9260 = 3;
	var uLocal_9261 = 500;
	var uLocal_9262 = 10000;
	var uLocal_9263 = 0;
	var uLocal_9264 = 3;
	var uLocal_9265 = 500;
	var uLocal_9266 = 10000;
	var uLocal_9267 = 0;
	var uLocal_9268 = 3;
	var uLocal_9269 = 500;
	var uLocal_9270 = 10000;
	var uLocal_9271 = 0;
	var uLocal_9272 = 3;
	var uLocal_9273 = 500;
	var uLocal_9274 = 10000;
	var uLocal_9275 = 0;
	var uLocal_9276 = 3;
	var uLocal_9277 = 500;
	var uLocal_9278 = 10000;
	var uLocal_9279 = 0;
	var uLocal_9280 = 3;
	var uLocal_9281 = 500;
	var uLocal_9282 = 10000;
	var uLocal_9283 = 0;
	var uLocal_9284 = 3;
	var uLocal_9285 = 500;
	var uLocal_9286 = 10000;
	var uLocal_9287 = 0;
	var uLocal_9288 = 3;
	var uLocal_9289 = 500;
	var uLocal_9290 = 10000;
	var uLocal_9291 = 0;
	var uLocal_9292 = 3;
	var uLocal_9293 = 500;
	var uLocal_9294 = 10000;
	var uLocal_9295 = 0;
	var uLocal_9296 = 0;
	var uLocal_9297 = 0;
	var uLocal_9298 = 0;
	var uLocal_9299 = 0;
	var uLocal_9300 = 0;
	var uLocal_9301 = 0;
	var uLocal_9302 = 3;
	var uLocal_9303 = 0;
	var uLocal_9304 = 0;
	var uLocal_9305 = 0;
	var uLocal_9306 = 0;
	var uLocal_9307 = -1;
	var uLocal_9308 = 0;
	var uLocal_9309 = 5;
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
	var uLocal_9320 = 10;
	var uLocal_9321 = 3;
	var uLocal_9322 = 500;
	var uLocal_9323 = 10000;
	var uLocal_9324 = 0;
	var uLocal_9325 = 3;
	var uLocal_9326 = 500;
	var uLocal_9327 = 10000;
	var uLocal_9328 = 0;
	var uLocal_9329 = 3;
	var uLocal_9330 = 500;
	var uLocal_9331 = 10000;
	var uLocal_9332 = 0;
	var uLocal_9333 = 3;
	var uLocal_9334 = 500;
	var uLocal_9335 = 10000;
	var uLocal_9336 = 0;
	var uLocal_9337 = 3;
	var uLocal_9338 = 500;
	var uLocal_9339 = 10000;
	var uLocal_9340 = 0;
	var uLocal_9341 = 3;
	var uLocal_9342 = 500;
	var uLocal_9343 = 10000;
	var uLocal_9344 = 0;
	var uLocal_9345 = 3;
	var uLocal_9346 = 500;
	var uLocal_9347 = 10000;
	var uLocal_9348 = 0;
	var uLocal_9349 = 3;
	var uLocal_9350 = 500;
	var uLocal_9351 = 10000;
	var uLocal_9352 = 0;
	var uLocal_9353 = 3;
	var uLocal_9354 = 500;
	var uLocal_9355 = 10000;
	var uLocal_9356 = 0;
	var uLocal_9357 = 3;
	var uLocal_9358 = 500;
	var uLocal_9359 = 10000;
	var uLocal_9360 = 0;
	var uLocal_9361 = 0;
	var uLocal_9362 = 0;
	var uLocal_9363 = 0;
	var uLocal_9364 = 0;
	var uLocal_9365 = 0;
	var uLocal_9366 = 0;
	var uLocal_9367 = 3;
	var uLocal_9368 = 0;
	var uLocal_9369 = 0;
	var uLocal_9370 = 0;
	var uLocal_9371 = 0;
	var uLocal_9372 = -1;
	var uLocal_9373 = 0;
	var uLocal_9374 = 5;
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
	var uLocal_9385 = 10;
	var uLocal_9386 = 3;
	var uLocal_9387 = 500;
	var uLocal_9388 = 10000;
	var uLocal_9389 = 0;
	var uLocal_9390 = 3;
	var uLocal_9391 = 500;
	var uLocal_9392 = 10000;
	var uLocal_9393 = 0;
	var uLocal_9394 = 3;
	var uLocal_9395 = 500;
	var uLocal_9396 = 10000;
	var uLocal_9397 = 0;
	var uLocal_9398 = 3;
	var uLocal_9399 = 500;
	var uLocal_9400 = 10000;
	var uLocal_9401 = 0;
	var uLocal_9402 = 3;
	var uLocal_9403 = 500;
	var uLocal_9404 = 10000;
	var uLocal_9405 = 0;
	var uLocal_9406 = 3;
	var uLocal_9407 = 500;
	var uLocal_9408 = 10000;
	var uLocal_9409 = 0;
	var uLocal_9410 = 3;
	var uLocal_9411 = 500;
	var uLocal_9412 = 10000;
	var uLocal_9413 = 0;
	var uLocal_9414 = 3;
	var uLocal_9415 = 500;
	var uLocal_9416 = 10000;
	var uLocal_9417 = 0;
	var uLocal_9418 = 3;
	var uLocal_9419 = 500;
	var uLocal_9420 = 10000;
	var uLocal_9421 = 0;
	var uLocal_9422 = 3;
	var uLocal_9423 = 500;
	var uLocal_9424 = 10000;
	var uLocal_9425 = 0;
	var uLocal_9426 = 0;
	var uLocal_9427 = 0;
	var uLocal_9428 = 0;
	var uLocal_9429 = 0;
	var uLocal_9430 = 0;
	var uLocal_9431 = 0;
	var uLocal_9432 = 3;
	var uLocal_9433 = 0;
	var uLocal_9434 = 0;
	var uLocal_9435 = 0;
	var uLocal_9436 = 0;
	var uLocal_9437 = -1;
	var uLocal_9438 = 0;
	var uLocal_9439 = 5;
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
	var uLocal_9450 = 10;
	var uLocal_9451 = 3;
	var uLocal_9452 = 500;
	var uLocal_9453 = 10000;
	var uLocal_9454 = 0;
	var uLocal_9455 = 3;
	var uLocal_9456 = 500;
	var uLocal_9457 = 10000;
	var uLocal_9458 = 0;
	var uLocal_9459 = 3;
	var uLocal_9460 = 500;
	var uLocal_9461 = 10000;
	var uLocal_9462 = 0;
	var uLocal_9463 = 3;
	var uLocal_9464 = 500;
	var uLocal_9465 = 10000;
	var uLocal_9466 = 0;
	var uLocal_9467 = 3;
	var uLocal_9468 = 500;
	var uLocal_9469 = 10000;
	var uLocal_9470 = 0;
	var uLocal_9471 = 3;
	var uLocal_9472 = 500;
	var uLocal_9473 = 10000;
	var uLocal_9474 = 0;
	var uLocal_9475 = 3;
	var uLocal_9476 = 500;
	var uLocal_9477 = 10000;
	var uLocal_9478 = 0;
	var uLocal_9479 = 3;
	var uLocal_9480 = 500;
	var uLocal_9481 = 10000;
	var uLocal_9482 = 0;
	var uLocal_9483 = 3;
	var uLocal_9484 = 500;
	var uLocal_9485 = 10000;
	var uLocal_9486 = 0;
	var uLocal_9487 = 3;
	var uLocal_9488 = 500;
	var uLocal_9489 = 10000;
	var uLocal_9490 = 0;
	var uLocal_9491 = 0;
	var uLocal_9492 = 0;
	var uLocal_9493 = 0;
	var uLocal_9494 = 0;
	var uLocal_9495 = 0;
	var uLocal_9496 = 0;
	var uLocal_9497 = 3;
	var uLocal_9498 = 0;
	var uLocal_9499 = 0;
	var uLocal_9500 = 0;
	var uLocal_9501 = 0;
	var uLocal_9502 = -1;
	var uLocal_9503 = 0;
	var uLocal_9504 = 5;
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
	var uLocal_9515 = 10;
	var uLocal_9516 = 3;
	var uLocal_9517 = 500;
	var uLocal_9518 = 10000;
	var uLocal_9519 = 0;
	var uLocal_9520 = 3;
	var uLocal_9521 = 500;
	var uLocal_9522 = 10000;
	var uLocal_9523 = 0;
	var uLocal_9524 = 3;
	var uLocal_9525 = 500;
	var uLocal_9526 = 10000;
	var uLocal_9527 = 0;
	var uLocal_9528 = 3;
	var uLocal_9529 = 500;
	var uLocal_9530 = 10000;
	var uLocal_9531 = 0;
	var uLocal_9532 = 3;
	var uLocal_9533 = 500;
	var uLocal_9534 = 10000;
	var uLocal_9535 = 0;
	var uLocal_9536 = 3;
	var uLocal_9537 = 500;
	var uLocal_9538 = 10000;
	var uLocal_9539 = 0;
	var uLocal_9540 = 3;
	var uLocal_9541 = 500;
	var uLocal_9542 = 10000;
	var uLocal_9543 = 0;
	var uLocal_9544 = 3;
	var uLocal_9545 = 500;
	var uLocal_9546 = 10000;
	var uLocal_9547 = 0;
	var uLocal_9548 = 3;
	var uLocal_9549 = 500;
	var uLocal_9550 = 10000;
	var uLocal_9551 = 0;
	var uLocal_9552 = 3;
	var uLocal_9553 = 500;
	var uLocal_9554 = 10000;
	var uLocal_9555 = 0;
	var uLocal_9556 = 0;
	var uLocal_9557 = 0;
	var uLocal_9558 = 0;
	var uLocal_9559 = 0;
	var uLocal_9560 = 0;
	var uLocal_9561 = 0;
	var uLocal_9562 = 3;
	var uLocal_9563 = 0;
	var uLocal_9564 = 0;
	var uLocal_9565 = 0;
	var uLocal_9566 = 0;
	var uLocal_9567 = -1;
	var uLocal_9568 = 0;
	var uLocal_9569 = 5;
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
	var uLocal_9580 = 10;
	var uLocal_9581 = 3;
	var uLocal_9582 = 500;
	var uLocal_9583 = 10000;
	var uLocal_9584 = 0;
	var uLocal_9585 = 3;
	var uLocal_9586 = 500;
	var uLocal_9587 = 10000;
	var uLocal_9588 = 0;
	var uLocal_9589 = 3;
	var uLocal_9590 = 500;
	var uLocal_9591 = 10000;
	var uLocal_9592 = 0;
	var uLocal_9593 = 3;
	var uLocal_9594 = 500;
	var uLocal_9595 = 10000;
	var uLocal_9596 = 0;
	var uLocal_9597 = 3;
	var uLocal_9598 = 500;
	var uLocal_9599 = 10000;
	var uLocal_9600 = 0;
	var uLocal_9601 = 3;
	var uLocal_9602 = 500;
	var uLocal_9603 = 10000;
	var uLocal_9604 = 0;
	var uLocal_9605 = 3;
	var uLocal_9606 = 500;
	var uLocal_9607 = 10000;
	var uLocal_9608 = 0;
	var uLocal_9609 = 3;
	var uLocal_9610 = 500;
	var uLocal_9611 = 10000;
	var uLocal_9612 = 0;
	var uLocal_9613 = 3;
	var uLocal_9614 = 500;
	var uLocal_9615 = 10000;
	var uLocal_9616 = 0;
	var uLocal_9617 = 3;
	var uLocal_9618 = 500;
	var uLocal_9619 = 10000;
	var uLocal_9620 = 0;
	var uLocal_9621 = 0;
	var uLocal_9622 = 0;
	var uLocal_9623 = 0;
	var uLocal_9624 = 0;
	var uLocal_9625 = 0;
	var uLocal_9626 = 0;
	var uLocal_9627 = 3;
	var uLocal_9628 = 0;
	var uLocal_9629 = 0;
	var uLocal_9630 = 0;
	var uLocal_9631 = 0;
	var uLocal_9632 = -1;
	var uLocal_9633 = 0;
	var uLocal_9634 = 5;
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
	var uLocal_9645 = 10;
	var uLocal_9646 = 3;
	var uLocal_9647 = 500;
	var uLocal_9648 = 10000;
	var uLocal_9649 = 0;
	var uLocal_9650 = 3;
	var uLocal_9651 = 500;
	var uLocal_9652 = 10000;
	var uLocal_9653 = 0;
	var uLocal_9654 = 3;
	var uLocal_9655 = 500;
	var uLocal_9656 = 10000;
	var uLocal_9657 = 0;
	var uLocal_9658 = 3;
	var uLocal_9659 = 500;
	var uLocal_9660 = 10000;
	var uLocal_9661 = 0;
	var uLocal_9662 = 3;
	var uLocal_9663 = 500;
	var uLocal_9664 = 10000;
	var uLocal_9665 = 0;
	var uLocal_9666 = 3;
	var uLocal_9667 = 500;
	var uLocal_9668 = 10000;
	var uLocal_9669 = 0;
	var uLocal_9670 = 3;
	var uLocal_9671 = 500;
	var uLocal_9672 = 10000;
	var uLocal_9673 = 0;
	var uLocal_9674 = 3;
	var uLocal_9675 = 500;
	var uLocal_9676 = 10000;
	var uLocal_9677 = 0;
	var uLocal_9678 = 3;
	var uLocal_9679 = 500;
	var uLocal_9680 = 10000;
	var uLocal_9681 = 0;
	var uLocal_9682 = 3;
	var uLocal_9683 = 500;
	var uLocal_9684 = 10000;
	var uLocal_9685 = 0;
	var uLocal_9686 = 0;
	var uLocal_9687 = 0;
	var uLocal_9688 = 0;
	var uLocal_9689 = 0;
	var uLocal_9690 = 0;
	var uLocal_9691 = 0;
	var uLocal_9692 = 3;
	var uLocal_9693 = 0;
	var uLocal_9694 = 0;
	var uLocal_9695 = 0;
	var uLocal_9696 = 0;
	var uLocal_9697 = -1;
	var uLocal_9698 = 0;
	var uLocal_9699 = 5;
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
	var uLocal_9710 = 10;
	var uLocal_9711 = 3;
	var uLocal_9712 = 500;
	var uLocal_9713 = 10000;
	var uLocal_9714 = 0;
	var uLocal_9715 = 3;
	var uLocal_9716 = 500;
	var uLocal_9717 = 10000;
	var uLocal_9718 = 0;
	var uLocal_9719 = 3;
	var uLocal_9720 = 500;
	var uLocal_9721 = 10000;
	var uLocal_9722 = 0;
	var uLocal_9723 = 3;
	var uLocal_9724 = 500;
	var uLocal_9725 = 10000;
	var uLocal_9726 = 0;
	var uLocal_9727 = 3;
	var uLocal_9728 = 500;
	var uLocal_9729 = 10000;
	var uLocal_9730 = 0;
	var uLocal_9731 = 3;
	var uLocal_9732 = 500;
	var uLocal_9733 = 10000;
	var uLocal_9734 = 0;
	var uLocal_9735 = 3;
	var uLocal_9736 = 500;
	var uLocal_9737 = 10000;
	var uLocal_9738 = 0;
	var uLocal_9739 = 3;
	var uLocal_9740 = 500;
	var uLocal_9741 = 10000;
	var uLocal_9742 = 0;
	var uLocal_9743 = 3;
	var uLocal_9744 = 500;
	var uLocal_9745 = 10000;
	var uLocal_9746 = 0;
	var uLocal_9747 = 3;
	var uLocal_9748 = 500;
	var uLocal_9749 = 10000;
	var uLocal_9750 = 0;
	var uLocal_9751 = 0;
	var uLocal_9752 = 0;
	var uLocal_9753 = 1;
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
	var uLocal_9766 = 65;
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
	var uLocal_10547 = 1097859072;
	var uLocal_10548 = 1101004800;
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
	var uLocal_10575 = 4;
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
	var uLocal_10647 = 40;
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
	var uLocal_11288 = 40;
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
	var uLocal_11929 = 60;
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
	var uLocal_12777 = 0;
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
	var uLocal_12829 = 0;
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
	var uLocal_12842 = 0;
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
	var uLocal_12855 = 0;
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
	var uLocal_12868 = 0;
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
	var uLocal_12881 = 0;
	var uLocal_12882 = 0;
	var uLocal_12883 = 0;
	var uLocal_12884 = 0;
	var uLocal_12885 = 0;
	var uLocal_12886 = 0;
	var uLocal_12887 = 0;
	var uLocal_12888 = 0;
	var uLocal_12889 = 0;
	var uLocal_12890 = 15;
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
	var uLocal_12902 = 0;
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
	var uLocal_12915 = 0;
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
	var uLocal_12928 = 0;
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
	var uLocal_12941 = 0;
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
	var uLocal_12954 = 0;
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
	var uLocal_12967 = 0;
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
	var uLocal_12980 = 0;
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
	var uLocal_12993 = 0;
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
	var uLocal_13006 = 0;
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
	var uLocal_13019 = 0;
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
	var uLocal_13032 = 0;
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
	var uLocal_13058 = 0;
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
	var uLocal_13071 = 0;
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
	var uLocal_13084 = 0;
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
	var uLocal_13097 = 0;
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
	var uLocal_13110 = 0;
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
	var uLocal_13123 = 0;
	var uLocal_13124 = 0;
	var uLocal_13125 = 0;
	var uLocal_13126 = 0;
	var uLocal_13127 = 0;
	var uLocal_13128 = 0;
	var uLocal_13129 = 0;
	var uLocal_13130 = 0;
	var uLocal_13131 = 10;
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
	var uLocal_13146 = 0;
	var uLocal_13147 = 0;
	var uLocal_13148 = 0;
	var uLocal_13149 = 0;
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
	var uLocal_13161 = -1;
	var uLocal_13162 = 0;
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
	var uLocal_13173 = 65;
	var uLocal_13174 = 0;
	var uLocal_13175 = 0;
	var uLocal_13176 = 0;
	var uLocal_13177 = 0;
	var uLocal_13178 = 0;
	var uLocal_13179 = 0;
	var uLocal_13180 = 0;
	var uLocal_13181 = 0;
	var uLocal_13182 = 0;
	var uLocal_13183 = 0;
	var uLocal_13184 = -1569615261;
	var uLocal_13185 = 0;
	var uLocal_13186 = 0;
	var uLocal_13187 = 0;
	var uLocal_13188 = 0;
	var uLocal_13189 = 0;
	var uLocal_13190 = 0;
	var uLocal_13191 = 0;
	var uLocal_13192 = 0;
	var uLocal_13193 = 0;
	var uLocal_13194 = 0;
	var uLocal_13195 = 0;
	var uLocal_13196 = 0;
	var uLocal_13197 = -1569615261;
	var uLocal_13198 = 0;
	var uLocal_13199 = 0;
	var uLocal_13200 = 0;
	var uLocal_13201 = 0;
	var uLocal_13202 = 0;
	var uLocal_13203 = 0;
	var uLocal_13204 = 0;
	var uLocal_13205 = 0;
	var uLocal_13206 = 0;
	var uLocal_13207 = 0;
	var uLocal_13208 = 0;
	var uLocal_13209 = 0;
	var uLocal_13210 = -1569615261;
	var uLocal_13211 = 0;
	var uLocal_13212 = 0;
	var uLocal_13213 = 0;
	var uLocal_13214 = 0;
	var uLocal_13215 = 0;
	var uLocal_13216 = 0;
	var uLocal_13217 = 0;
	var uLocal_13218 = 0;
	var uLocal_13219 = 0;
	var uLocal_13220 = 0;
	var uLocal_13221 = 0;
	var uLocal_13222 = 0;
	var uLocal_13223 = -1569615261;
	var uLocal_13224 = 0;
	var uLocal_13225 = 0;
	var uLocal_13226 = 0;
	var uLocal_13227 = 0;
	var uLocal_13228 = 0;
	var uLocal_13229 = 0;
	var uLocal_13230 = 0;
	var uLocal_13231 = 0;
	var uLocal_13232 = 0;
	var uLocal_13233 = 0;
	var uLocal_13234 = 0;
	var uLocal_13235 = 0;
	var uLocal_13236 = -1569615261;
	var uLocal_13237 = 0;
	var uLocal_13238 = 0;
	var uLocal_13239 = 0;
	var uLocal_13240 = 0;
	var uLocal_13241 = 0;
	var uLocal_13242 = 0;
	var uLocal_13243 = 0;
	var uLocal_13244 = 0;
	var uLocal_13245 = 0;
	var uLocal_13246 = 0;
	var uLocal_13247 = 0;
	var uLocal_13248 = 0;
	var uLocal_13249 = -1569615261;
	var uLocal_13250 = 0;
	var uLocal_13251 = 0;
	var uLocal_13252 = 0;
	var uLocal_13253 = 0;
	var uLocal_13254 = 0;
	var uLocal_13255 = 0;
	var uLocal_13256 = 0;
	var uLocal_13257 = 0;
	var uLocal_13258 = 0;
	var uLocal_13259 = 0;
	var uLocal_13260 = 0;
	var uLocal_13261 = 0;
	var uLocal_13262 = -1569615261;
	var uLocal_13263 = 0;
	var uLocal_13264 = 0;
	var uLocal_13265 = 0;
	var uLocal_13266 = 0;
	var uLocal_13267 = 0;
	var uLocal_13268 = 0;
	var uLocal_13269 = 0;
	var uLocal_13270 = 0;
	var uLocal_13271 = 0;
	var uLocal_13272 = 0;
	var uLocal_13273 = 0;
	var uLocal_13274 = 0;
	var uLocal_13275 = -1569615261;
	var uLocal_13276 = 0;
	var uLocal_13277 = 0;
	var uLocal_13278 = 0;
	var uLocal_13279 = 0;
	var uLocal_13280 = 0;
	var uLocal_13281 = 0;
	var uLocal_13282 = 0;
	var uLocal_13283 = 0;
	var uLocal_13284 = 0;
	var uLocal_13285 = 0;
	var uLocal_13286 = 0;
	var uLocal_13287 = 0;
	var uLocal_13288 = -1569615261;
	var uLocal_13289 = 0;
	var uLocal_13290 = 0;
	var uLocal_13291 = 0;
	var uLocal_13292 = 0;
	var uLocal_13293 = 0;
	var uLocal_13294 = 0;
	var uLocal_13295 = 0;
	var uLocal_13296 = 0;
	var uLocal_13297 = 0;
	var uLocal_13298 = 0;
	var uLocal_13299 = 0;
	var uLocal_13300 = 0;
	var uLocal_13301 = -1569615261;
	var uLocal_13302 = 0;
	var uLocal_13303 = 0;
	var uLocal_13304 = 0;
	var uLocal_13305 = 0;
	var uLocal_13306 = 0;
	var uLocal_13307 = 0;
	var uLocal_13308 = 0;
	var uLocal_13309 = 0;
	var uLocal_13310 = 0;
	var uLocal_13311 = 0;
	var uLocal_13312 = 0;
	var uLocal_13313 = 0;
	var uLocal_13314 = -1569615261;
	var uLocal_13315 = 0;
	var uLocal_13316 = 0;
	var uLocal_13317 = 0;
	var uLocal_13318 = 0;
	var uLocal_13319 = 0;
	var uLocal_13320 = 0;
	var uLocal_13321 = 0;
	var uLocal_13322 = 0;
	var uLocal_13323 = 0;
	var uLocal_13324 = 0;
	var uLocal_13325 = 0;
	var uLocal_13326 = 0;
	var uLocal_13327 = -1569615261;
	var uLocal_13328 = 0;
	var uLocal_13329 = 0;
	var uLocal_13330 = 0;
	var uLocal_13331 = 0;
	var uLocal_13332 = 0;
	var uLocal_13333 = 0;
	var uLocal_13334 = 0;
	var uLocal_13335 = 0;
	var uLocal_13336 = 0;
	var uLocal_13337 = 0;
	var uLocal_13338 = 0;
	var uLocal_13339 = 0;
	var uLocal_13340 = -1569615261;
	var uLocal_13341 = 0;
	var uLocal_13342 = 0;
	var uLocal_13343 = 0;
	var uLocal_13344 = 0;
	var uLocal_13345 = 0;
	var uLocal_13346 = 0;
	var uLocal_13347 = 0;
	var uLocal_13348 = 0;
	var uLocal_13349 = 0;
	var uLocal_13350 = 0;
	var uLocal_13351 = 0;
	var uLocal_13352 = 0;
	var uLocal_13353 = -1569615261;
	var uLocal_13354 = 0;
	var uLocal_13355 = 0;
	var uLocal_13356 = 0;
	var uLocal_13357 = 0;
	var uLocal_13358 = 0;
	var uLocal_13359 = 0;
	var uLocal_13360 = 0;
	var uLocal_13361 = 0;
	var uLocal_13362 = 0;
	var uLocal_13363 = 0;
	var uLocal_13364 = 0;
	var uLocal_13365 = 0;
	var uLocal_13366 = -1569615261;
	var uLocal_13367 = 0;
	var uLocal_13368 = 0;
	var uLocal_13369 = 0;
	var uLocal_13370 = 0;
	var uLocal_13371 = 0;
	var uLocal_13372 = 0;
	var uLocal_13373 = 0;
	var uLocal_13374 = 0;
	var uLocal_13375 = 0;
	var uLocal_13376 = 0;
	var uLocal_13377 = 0;
	var uLocal_13378 = 0;
	var uLocal_13379 = -1569615261;
	var uLocal_13380 = 0;
	var uLocal_13381 = 0;
	var uLocal_13382 = 0;
	var uLocal_13383 = 0;
	var uLocal_13384 = 0;
	var uLocal_13385 = 0;
	var uLocal_13386 = 0;
	var uLocal_13387 = 0;
	var uLocal_13388 = 0;
	var uLocal_13389 = 0;
	var uLocal_13390 = 0;
	var uLocal_13391 = 0;
	var uLocal_13392 = -1569615261;
	var uLocal_13393 = 0;
	var uLocal_13394 = 0;
	var uLocal_13395 = 0;
	var uLocal_13396 = 0;
	var uLocal_13397 = 0;
	var uLocal_13398 = 0;
	var uLocal_13399 = 0;
	var uLocal_13400 = 0;
	var uLocal_13401 = 0;
	var uLocal_13402 = 0;
	var uLocal_13403 = 0;
	var uLocal_13404 = 0;
	var uLocal_13405 = -1569615261;
	var uLocal_13406 = 0;
	var uLocal_13407 = 0;
	var uLocal_13408 = 0;
	var uLocal_13409 = 0;
	var uLocal_13410 = 0;
	var uLocal_13411 = 0;
	var uLocal_13412 = 0;
	var uLocal_13413 = 0;
	var uLocal_13414 = 0;
	var uLocal_13415 = 0;
	var uLocal_13416 = 0;
	var uLocal_13417 = 0;
	var uLocal_13418 = -1569615261;
	var uLocal_13419 = 0;
	var uLocal_13420 = 0;
	var uLocal_13421 = 0;
	var uLocal_13422 = 0;
	var uLocal_13423 = 0;
	var uLocal_13424 = 0;
	var uLocal_13425 = 0;
	var uLocal_13426 = 0;
	var uLocal_13427 = 0;
	var uLocal_13428 = 0;
	var uLocal_13429 = 0;
	var uLocal_13430 = 0;
	var uLocal_13431 = -1569615261;
	var uLocal_13432 = 0;
	var uLocal_13433 = 0;
	var uLocal_13434 = 0;
	var uLocal_13435 = 0;
	var uLocal_13436 = 0;
	var uLocal_13437 = 0;
	var uLocal_13438 = 0;
	var uLocal_13439 = 0;
	var uLocal_13440 = 0;
	var uLocal_13441 = 0;
	var uLocal_13442 = 0;
	var uLocal_13443 = 0;
	var uLocal_13444 = -1569615261;
	var uLocal_13445 = 0;
	var uLocal_13446 = 0;
	var uLocal_13447 = 0;
	var uLocal_13448 = 0;
	var uLocal_13449 = 0;
	var uLocal_13450 = 0;
	var uLocal_13451 = 0;
	var uLocal_13452 = 0;
	var uLocal_13453 = 0;
	var uLocal_13454 = 0;
	var uLocal_13455 = 0;
	var uLocal_13456 = 0;
	var uLocal_13457 = -1569615261;
	var uLocal_13458 = 0;
	var uLocal_13459 = 0;
	var uLocal_13460 = 0;
	var uLocal_13461 = 0;
	var uLocal_13462 = 0;
	var uLocal_13463 = 0;
	var uLocal_13464 = 0;
	var uLocal_13465 = 0;
	var uLocal_13466 = 0;
	var uLocal_13467 = 0;
	var uLocal_13468 = 0;
	var uLocal_13469 = 0;
	var uLocal_13470 = -1569615261;
	var uLocal_13471 = 0;
	var uLocal_13472 = 0;
	var uLocal_13473 = 0;
	var uLocal_13474 = 0;
	var uLocal_13475 = 0;
	var uLocal_13476 = 0;
	var uLocal_13477 = 0;
	var uLocal_13478 = 0;
	var uLocal_13479 = 0;
	var uLocal_13480 = 0;
	var uLocal_13481 = 0;
	var uLocal_13482 = 0;
	var uLocal_13483 = -1569615261;
	var uLocal_13484 = 0;
	var uLocal_13485 = 0;
	var uLocal_13486 = 0;
	var uLocal_13487 = 0;
	var uLocal_13488 = 0;
	var uLocal_13489 = 0;
	var uLocal_13490 = 0;
	var uLocal_13491 = 0;
	var uLocal_13492 = 0;
	var uLocal_13493 = 0;
	var uLocal_13494 = 0;
	var uLocal_13495 = 0;
	var uLocal_13496 = -1569615261;
	var uLocal_13497 = 0;
	var uLocal_13498 = 0;
	var uLocal_13499 = 0;
	var uLocal_13500 = 0;
	var uLocal_13501 = 0;
	var uLocal_13502 = 0;
	var uLocal_13503 = 0;
	var uLocal_13504 = 0;
	var uLocal_13505 = 0;
	var uLocal_13506 = 0;
	var uLocal_13507 = 0;
	var uLocal_13508 = 0;
	var uLocal_13509 = -1569615261;
	var uLocal_13510 = 0;
	var uLocal_13511 = 0;
	var uLocal_13512 = 0;
	var uLocal_13513 = 0;
	var uLocal_13514 = 0;
	var uLocal_13515 = 0;
	var uLocal_13516 = 0;
	var uLocal_13517 = 0;
	var uLocal_13518 = 0;
	var uLocal_13519 = 0;
	var uLocal_13520 = 0;
	var uLocal_13521 = 0;
	var uLocal_13522 = -1569615261;
	var uLocal_13523 = 0;
	var uLocal_13524 = 0;
	var uLocal_13525 = 0;
	var uLocal_13526 = 0;
	var uLocal_13527 = 0;
	var uLocal_13528 = 0;
	var uLocal_13529 = 0;
	var uLocal_13530 = 0;
	var uLocal_13531 = 0;
	var uLocal_13532 = 0;
	var uLocal_13533 = 0;
	var uLocal_13534 = 0;
	var uLocal_13535 = -1569615261;
	var uLocal_13536 = 0;
	var uLocal_13537 = 0;
	var uLocal_13538 = 0;
	var uLocal_13539 = 0;
	var uLocal_13540 = 0;
	var uLocal_13541 = 0;
	var uLocal_13542 = 0;
	var uLocal_13543 = 0;
	var uLocal_13544 = 0;
	var uLocal_13545 = 0;
	var uLocal_13546 = 0;
	var uLocal_13547 = 0;
	var uLocal_13548 = -1569615261;
	var uLocal_13549 = 0;
	var uLocal_13550 = 0;
	var uLocal_13551 = 0;
	var uLocal_13552 = 0;
	var uLocal_13553 = 0;
	var uLocal_13554 = 0;
	var uLocal_13555 = 0;
	var uLocal_13556 = 0;
	var uLocal_13557 = 0;
	var uLocal_13558 = 0;
	var uLocal_13559 = 0;
	var uLocal_13560 = 0;
	var uLocal_13561 = -1569615261;
	var uLocal_13562 = 0;
	var uLocal_13563 = 0;
	var uLocal_13564 = 0;
	var uLocal_13565 = 0;
	var uLocal_13566 = 0;
	var uLocal_13567 = 0;
	var uLocal_13568 = 0;
	var uLocal_13569 = 0;
	var uLocal_13570 = 0;
	var uLocal_13571 = 0;
	var uLocal_13572 = 0;
	var uLocal_13573 = 0;
	var uLocal_13574 = -1569615261;
	var uLocal_13575 = 0;
	var uLocal_13576 = 0;
	var uLocal_13577 = 0;
	var uLocal_13578 = 0;
	var uLocal_13579 = 0;
	var uLocal_13580 = 0;
	var uLocal_13581 = 0;
	var uLocal_13582 = 0;
	var uLocal_13583 = 0;
	var uLocal_13584 = 0;
	var uLocal_13585 = 0;
	var uLocal_13586 = 0;
	var uLocal_13587 = -1569615261;
	var uLocal_13588 = 0;
	var uLocal_13589 = 0;
	var uLocal_13590 = 0;
	var uLocal_13591 = 0;
	var uLocal_13592 = 0;
	var uLocal_13593 = 0;
	var uLocal_13594 = 0;
	var uLocal_13595 = 0;
	var uLocal_13596 = 0;
	var uLocal_13597 = 0;
	var uLocal_13598 = 0;
	var uLocal_13599 = 0;
	var uLocal_13600 = -1569615261;
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
	var uLocal_13613 = -1569615261;
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
	var uLocal_13626 = -1569615261;
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
	var uLocal_13639 = -1569615261;
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
	var uLocal_13652 = -1569615261;
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
	var uLocal_13665 = -1569615261;
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
	var uLocal_13678 = -1569615261;
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
	var uLocal_13691 = -1569615261;
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
	var uLocal_13704 = -1569615261;
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
	var uLocal_13717 = -1569615261;
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
	var uLocal_13730 = -1569615261;
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
	var uLocal_13743 = -1569615261;
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
	var uLocal_13756 = -1569615261;
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
	var uLocal_13769 = -1569615261;
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
	var uLocal_13782 = -1569615261;
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
	var uLocal_13795 = -1569615261;
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
	var uLocal_13808 = -1569615261;
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
	var uLocal_13821 = -1569615261;
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
	var uLocal_13834 = -1569615261;
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
	var uLocal_13847 = -1569615261;
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
	var uLocal_13860 = -1569615261;
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
	var uLocal_13873 = -1569615261;
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
	var uLocal_13886 = -1569615261;
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
	var uLocal_13899 = -1569615261;
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
	var uLocal_13912 = -1569615261;
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
	var uLocal_13925 = -1569615261;
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
	var uLocal_13938 = -1569615261;
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
	var uLocal_13951 = -1569615261;
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
	var uLocal_13964 = -1569615261;
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
	var uLocal_13977 = -1569615261;
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
	var uLocal_13990 = -1569615261;
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
	var uLocal_14003 = -1569615261;
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
	var uLocal_14016 = -1569615261;
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
	var uLocal_14034 = 1;
	var uLocal_14035 = 30;
	var uLocal_14036 = -1;
	var uLocal_14037 = 0;
	var uLocal_14038 = 1;
	var uLocal_14039 = 0;
	var uLocal_14040 = 0;
	var uLocal_14041 = 0;
	var uLocal_14042 = 0;
	var uLocal_14043 = 0;
	var uLocal_14044 = 0;
	var uLocal_14045 = 0;
	var uLocal_14046 = 0;
	var uLocal_14047 = 0;
	var uLocal_14048 = 1065353216;
	var uLocal_14049 = 0;
	var uLocal_14050 = 0;
	var uLocal_14051 = 1065353216;
	var uLocal_14052 = 1;
	var uLocal_14053 = 0;
	var uLocal_14054 = -1;
	var uLocal_14055 = 0;
	var uLocal_14056 = 1;
	var uLocal_14057 = 0;
	var uLocal_14058 = 0;
	var uLocal_14059 = 0;
	var uLocal_14060 = 0;
	var uLocal_14061 = 0;
	var uLocal_14062 = 0;
	var uLocal_14063 = 0;
	var uLocal_14064 = 0;
	var uLocal_14065 = 0;
	var uLocal_14066 = 1065353216;
	var uLocal_14067 = 0;
	var uLocal_14068 = 0;
	var uLocal_14069 = 1065353216;
	var uLocal_14070 = 1;
	var uLocal_14071 = 0;
	var uLocal_14072 = -1;
	var uLocal_14073 = 0;
	var uLocal_14074 = 1;
	var uLocal_14075 = 0;
	var uLocal_14076 = 0;
	var uLocal_14077 = 0;
	var uLocal_14078 = 0;
	var uLocal_14079 = 0;
	var uLocal_14080 = 0;
	var uLocal_14081 = 0;
	var uLocal_14082 = 0;
	var uLocal_14083 = 0;
	var uLocal_14084 = 1065353216;
	var uLocal_14085 = 0;
	var uLocal_14086 = 0;
	var uLocal_14087 = 1065353216;
	var uLocal_14088 = 1;
	var uLocal_14089 = 0;
	var uLocal_14090 = -1;
	var uLocal_14091 = 0;
	var uLocal_14092 = 1;
	var uLocal_14093 = 0;
	var uLocal_14094 = 0;
	var uLocal_14095 = 0;
	var uLocal_14096 = 0;
	var uLocal_14097 = 0;
	var uLocal_14098 = 0;
	var uLocal_14099 = 0;
	var uLocal_14100 = 0;
	var uLocal_14101 = 0;
	var uLocal_14102 = 1065353216;
	var uLocal_14103 = 0;
	var uLocal_14104 = 0;
	var uLocal_14105 = 1065353216;
	var uLocal_14106 = 1;
	var uLocal_14107 = 0;
	var uLocal_14108 = -1;
	var uLocal_14109 = 0;
	var uLocal_14110 = 1;
	var uLocal_14111 = 0;
	var uLocal_14112 = 0;
	var uLocal_14113 = 0;
	var uLocal_14114 = 0;
	var uLocal_14115 = 0;
	var uLocal_14116 = 0;
	var uLocal_14117 = 0;
	var uLocal_14118 = 0;
	var uLocal_14119 = 0;
	var uLocal_14120 = 1065353216;
	var uLocal_14121 = 0;
	var uLocal_14122 = 0;
	var uLocal_14123 = 1065353216;
	var uLocal_14124 = 1;
	var uLocal_14125 = 0;
	var uLocal_14126 = -1;
	var uLocal_14127 = 0;
	var uLocal_14128 = 1;
	var uLocal_14129 = 0;
	var uLocal_14130 = 0;
	var uLocal_14131 = 0;
	var uLocal_14132 = 0;
	var uLocal_14133 = 0;
	var uLocal_14134 = 0;
	var uLocal_14135 = 0;
	var uLocal_14136 = 0;
	var uLocal_14137 = 0;
	var uLocal_14138 = 1065353216;
	var uLocal_14139 = 0;
	var uLocal_14140 = 0;
	var uLocal_14141 = 1065353216;
	var uLocal_14142 = 1;
	var uLocal_14143 = 0;
	var uLocal_14144 = -1;
	var uLocal_14145 = 0;
	var uLocal_14146 = 1;
	var uLocal_14147 = 0;
	var uLocal_14148 = 0;
	var uLocal_14149 = 0;
	var uLocal_14150 = 0;
	var uLocal_14151 = 0;
	var uLocal_14152 = 0;
	var uLocal_14153 = 0;
	var uLocal_14154 = 0;
	var uLocal_14155 = 0;
	var uLocal_14156 = 1065353216;
	var uLocal_14157 = 0;
	var uLocal_14158 = 0;
	var uLocal_14159 = 1065353216;
	var uLocal_14160 = 1;
	var uLocal_14161 = 0;
	var uLocal_14162 = -1;
	var uLocal_14163 = 0;
	var uLocal_14164 = 1;
	var uLocal_14165 = 0;
	var uLocal_14166 = 0;
	var uLocal_14167 = 0;
	var uLocal_14168 = 0;
	var uLocal_14169 = 0;
	var uLocal_14170 = 0;
	var uLocal_14171 = 0;
	var uLocal_14172 = 0;
	var uLocal_14173 = 0;
	var uLocal_14174 = 1065353216;
	var uLocal_14175 = 0;
	var uLocal_14176 = 0;
	var uLocal_14177 = 1065353216;
	var uLocal_14178 = 1;
	var uLocal_14179 = 0;
	var uLocal_14180 = -1;
	var uLocal_14181 = 0;
	var uLocal_14182 = 1;
	var uLocal_14183 = 0;
	var uLocal_14184 = 0;
	var uLocal_14185 = 0;
	var uLocal_14186 = 0;
	var uLocal_14187 = 0;
	var uLocal_14188 = 0;
	var uLocal_14189 = 0;
	var uLocal_14190 = 0;
	var uLocal_14191 = 0;
	var uLocal_14192 = 1065353216;
	var uLocal_14193 = 0;
	var uLocal_14194 = 0;
	var uLocal_14195 = 1065353216;
	var uLocal_14196 = 1;
	var uLocal_14197 = 0;
	var uLocal_14198 = -1;
	var uLocal_14199 = 0;
	var uLocal_14200 = 1;
	var uLocal_14201 = 0;
	var uLocal_14202 = 0;
	var uLocal_14203 = 0;
	var uLocal_14204 = 0;
	var uLocal_14205 = 0;
	var uLocal_14206 = 0;
	var uLocal_14207 = 0;
	var uLocal_14208 = 0;
	var uLocal_14209 = 0;
	var uLocal_14210 = 1065353216;
	var uLocal_14211 = 0;
	var uLocal_14212 = 0;
	var uLocal_14213 = 1065353216;
	var uLocal_14214 = 1;
	var uLocal_14215 = 0;
	var uLocal_14216 = -1;
	var uLocal_14217 = 0;
	var uLocal_14218 = 1;
	var uLocal_14219 = 0;
	var uLocal_14220 = 0;
	var uLocal_14221 = 0;
	var uLocal_14222 = 0;
	var uLocal_14223 = 0;
	var uLocal_14224 = 0;
	var uLocal_14225 = 0;
	var uLocal_14226 = 0;
	var uLocal_14227 = 0;
	var uLocal_14228 = 1065353216;
	var uLocal_14229 = 0;
	var uLocal_14230 = 0;
	var uLocal_14231 = 1065353216;
	var uLocal_14232 = 1;
	var uLocal_14233 = 0;
	var uLocal_14234 = -1;
	var uLocal_14235 = 0;
	var uLocal_14236 = 1;
	var uLocal_14237 = 0;
	var uLocal_14238 = 0;
	var uLocal_14239 = 0;
	var uLocal_14240 = 0;
	var uLocal_14241 = 0;
	var uLocal_14242 = 0;
	var uLocal_14243 = 0;
	var uLocal_14244 = 0;
	var uLocal_14245 = 0;
	var uLocal_14246 = 1065353216;
	var uLocal_14247 = 0;
	var uLocal_14248 = 0;
	var uLocal_14249 = 1065353216;
	var uLocal_14250 = 1;
	var uLocal_14251 = 0;
	var uLocal_14252 = -1;
	var uLocal_14253 = 0;
	var uLocal_14254 = 1;
	var uLocal_14255 = 0;
	var uLocal_14256 = 0;
	var uLocal_14257 = 0;
	var uLocal_14258 = 0;
	var uLocal_14259 = 0;
	var uLocal_14260 = 0;
	var uLocal_14261 = 0;
	var uLocal_14262 = 0;
	var uLocal_14263 = 0;
	var uLocal_14264 = 1065353216;
	var uLocal_14265 = 0;
	var uLocal_14266 = 0;
	var uLocal_14267 = 1065353216;
	var uLocal_14268 = 1;
	var uLocal_14269 = 0;
	var uLocal_14270 = -1;
	var uLocal_14271 = 0;
	var uLocal_14272 = 1;
	var uLocal_14273 = 0;
	var uLocal_14274 = 0;
	var uLocal_14275 = 0;
	var uLocal_14276 = 0;
	var uLocal_14277 = 0;
	var uLocal_14278 = 0;
	var uLocal_14279 = 0;
	var uLocal_14280 = 0;
	var uLocal_14281 = 0;
	var uLocal_14282 = 1065353216;
	var uLocal_14283 = 0;
	var uLocal_14284 = 0;
	var uLocal_14285 = 1065353216;
	var uLocal_14286 = 1;
	var uLocal_14287 = 0;
	var uLocal_14288 = -1;
	var uLocal_14289 = 0;
	var uLocal_14290 = 1;
	var uLocal_14291 = 0;
	var uLocal_14292 = 0;
	var uLocal_14293 = 0;
	var uLocal_14294 = 0;
	var uLocal_14295 = 0;
	var uLocal_14296 = 0;
	var uLocal_14297 = 0;
	var uLocal_14298 = 0;
	var uLocal_14299 = 0;
	var uLocal_14300 = 1065353216;
	var uLocal_14301 = 0;
	var uLocal_14302 = 0;
	var uLocal_14303 = 1065353216;
	var uLocal_14304 = 1;
	var uLocal_14305 = 0;
	var uLocal_14306 = -1;
	var uLocal_14307 = 0;
	var uLocal_14308 = 1;
	var uLocal_14309 = 0;
	var uLocal_14310 = 0;
	var uLocal_14311 = 0;
	var uLocal_14312 = 0;
	var uLocal_14313 = 0;
	var uLocal_14314 = 0;
	var uLocal_14315 = 0;
	var uLocal_14316 = 0;
	var uLocal_14317 = 0;
	var uLocal_14318 = 1065353216;
	var uLocal_14319 = 0;
	var uLocal_14320 = 0;
	var uLocal_14321 = 1065353216;
	var uLocal_14322 = 1;
	var uLocal_14323 = 0;
	var uLocal_14324 = -1;
	var uLocal_14325 = 0;
	var uLocal_14326 = 1;
	var uLocal_14327 = 0;
	var uLocal_14328 = 0;
	var uLocal_14329 = 0;
	var uLocal_14330 = 0;
	var uLocal_14331 = 0;
	var uLocal_14332 = 0;
	var uLocal_14333 = 0;
	var uLocal_14334 = 0;
	var uLocal_14335 = 0;
	var uLocal_14336 = 1065353216;
	var uLocal_14337 = 0;
	var uLocal_14338 = 0;
	var uLocal_14339 = 1065353216;
	var uLocal_14340 = 1;
	var uLocal_14341 = 0;
	var uLocal_14342 = -1;
	var uLocal_14343 = 0;
	var uLocal_14344 = 1;
	var uLocal_14345 = 0;
	var uLocal_14346 = 0;
	var uLocal_14347 = 0;
	var uLocal_14348 = 0;
	var uLocal_14349 = 0;
	var uLocal_14350 = 0;
	var uLocal_14351 = 0;
	var uLocal_14352 = 0;
	var uLocal_14353 = 0;
	var uLocal_14354 = 1065353216;
	var uLocal_14355 = 0;
	var uLocal_14356 = 0;
	var uLocal_14357 = 1065353216;
	var uLocal_14358 = 1;
	var uLocal_14359 = 0;
	var uLocal_14360 = -1;
	var uLocal_14361 = 0;
	var uLocal_14362 = 1;
	var uLocal_14363 = 0;
	var uLocal_14364 = 0;
	var uLocal_14365 = 0;
	var uLocal_14366 = 0;
	var uLocal_14367 = 0;
	var uLocal_14368 = 0;
	var uLocal_14369 = 0;
	var uLocal_14370 = 0;
	var uLocal_14371 = 0;
	var uLocal_14372 = 1065353216;
	var uLocal_14373 = 0;
	var uLocal_14374 = 0;
	var uLocal_14375 = 1065353216;
	var uLocal_14376 = 1;
	var uLocal_14377 = 0;
	var uLocal_14378 = -1;
	var uLocal_14379 = 0;
	var uLocal_14380 = 1;
	var uLocal_14381 = 0;
	var uLocal_14382 = 0;
	var uLocal_14383 = 0;
	var uLocal_14384 = 0;
	var uLocal_14385 = 0;
	var uLocal_14386 = 0;
	var uLocal_14387 = 0;
	var uLocal_14388 = 0;
	var uLocal_14389 = 0;
	var uLocal_14390 = 1065353216;
	var uLocal_14391 = 0;
	var uLocal_14392 = 0;
	var uLocal_14393 = 1065353216;
	var uLocal_14394 = 1;
	var uLocal_14395 = 0;
	var uLocal_14396 = -1;
	var uLocal_14397 = 0;
	var uLocal_14398 = 1;
	var uLocal_14399 = 0;
	var uLocal_14400 = 0;
	var uLocal_14401 = 0;
	var uLocal_14402 = 0;
	var uLocal_14403 = 0;
	var uLocal_14404 = 0;
	var uLocal_14405 = 0;
	var uLocal_14406 = 0;
	var uLocal_14407 = 0;
	var uLocal_14408 = 1065353216;
	var uLocal_14409 = 0;
	var uLocal_14410 = 0;
	var uLocal_14411 = 1065353216;
	var uLocal_14412 = 1;
	var uLocal_14413 = 0;
	var uLocal_14414 = -1;
	var uLocal_14415 = 0;
	var uLocal_14416 = 1;
	var uLocal_14417 = 0;
	var uLocal_14418 = 0;
	var uLocal_14419 = 0;
	var uLocal_14420 = 0;
	var uLocal_14421 = 0;
	var uLocal_14422 = 0;
	var uLocal_14423 = 0;
	var uLocal_14424 = 0;
	var uLocal_14425 = 0;
	var uLocal_14426 = 1065353216;
	var uLocal_14427 = 0;
	var uLocal_14428 = 0;
	var uLocal_14429 = 1065353216;
	var uLocal_14430 = 1;
	var uLocal_14431 = 0;
	var uLocal_14432 = -1;
	var uLocal_14433 = 0;
	var uLocal_14434 = 1;
	var uLocal_14435 = 0;
	var uLocal_14436 = 0;
	var uLocal_14437 = 0;
	var uLocal_14438 = 0;
	var uLocal_14439 = 0;
	var uLocal_14440 = 0;
	var uLocal_14441 = 0;
	var uLocal_14442 = 0;
	var uLocal_14443 = 0;
	var uLocal_14444 = 1065353216;
	var uLocal_14445 = 0;
	var uLocal_14446 = 0;
	var uLocal_14447 = 1065353216;
	var uLocal_14448 = 1;
	var uLocal_14449 = 0;
	var uLocal_14450 = -1;
	var uLocal_14451 = 0;
	var uLocal_14452 = 1;
	var uLocal_14453 = 0;
	var uLocal_14454 = 0;
	var uLocal_14455 = 0;
	var uLocal_14456 = 0;
	var uLocal_14457 = 0;
	var uLocal_14458 = 0;
	var uLocal_14459 = 0;
	var uLocal_14460 = 0;
	var uLocal_14461 = 0;
	var uLocal_14462 = 1065353216;
	var uLocal_14463 = 0;
	var uLocal_14464 = 0;
	var uLocal_14465 = 1065353216;
	var uLocal_14466 = 1;
	var uLocal_14467 = 0;
	var uLocal_14468 = -1;
	var uLocal_14469 = 0;
	var uLocal_14470 = 1;
	var uLocal_14471 = 0;
	var uLocal_14472 = 0;
	var uLocal_14473 = 0;
	var uLocal_14474 = 0;
	var uLocal_14475 = 0;
	var uLocal_14476 = 0;
	var uLocal_14477 = 0;
	var uLocal_14478 = 0;
	var uLocal_14479 = 0;
	var uLocal_14480 = 1065353216;
	var uLocal_14481 = 0;
	var uLocal_14482 = 0;
	var uLocal_14483 = 1065353216;
	var uLocal_14484 = 1;
	var uLocal_14485 = 0;
	var uLocal_14486 = -1;
	var uLocal_14487 = 0;
	var uLocal_14488 = 1;
	var uLocal_14489 = 0;
	var uLocal_14490 = 0;
	var uLocal_14491 = 0;
	var uLocal_14492 = 0;
	var uLocal_14493 = 0;
	var uLocal_14494 = 0;
	var uLocal_14495 = 0;
	var uLocal_14496 = 0;
	var uLocal_14497 = 0;
	var uLocal_14498 = 1065353216;
	var uLocal_14499 = 0;
	var uLocal_14500 = 0;
	var uLocal_14501 = 1065353216;
	var uLocal_14502 = 1;
	var uLocal_14503 = 0;
	var uLocal_14504 = -1;
	var uLocal_14505 = 0;
	var uLocal_14506 = 1;
	var uLocal_14507 = 0;
	var uLocal_14508 = 0;
	var uLocal_14509 = 0;
	var uLocal_14510 = 0;
	var uLocal_14511 = 0;
	var uLocal_14512 = 0;
	var uLocal_14513 = 0;
	var uLocal_14514 = 0;
	var uLocal_14515 = 0;
	var uLocal_14516 = 1065353216;
	var uLocal_14517 = 0;
	var uLocal_14518 = 0;
	var uLocal_14519 = 1065353216;
	var uLocal_14520 = 1;
	var uLocal_14521 = 0;
	var uLocal_14522 = -1;
	var uLocal_14523 = 0;
	var uLocal_14524 = 1;
	var uLocal_14525 = 0;
	var uLocal_14526 = 0;
	var uLocal_14527 = 0;
	var uLocal_14528 = 0;
	var uLocal_14529 = 0;
	var uLocal_14530 = 0;
	var uLocal_14531 = 0;
	var uLocal_14532 = 0;
	var uLocal_14533 = 0;
	var uLocal_14534 = 1065353216;
	var uLocal_14535 = 0;
	var uLocal_14536 = 0;
	var uLocal_14537 = 1065353216;
	var uLocal_14538 = 1;
	var uLocal_14539 = 0;
	var uLocal_14540 = -1;
	var uLocal_14541 = 0;
	var uLocal_14542 = 1;
	var uLocal_14543 = 0;
	var uLocal_14544 = 0;
	var uLocal_14545 = 0;
	var uLocal_14546 = 0;
	var uLocal_14547 = 0;
	var uLocal_14548 = 0;
	var uLocal_14549 = 0;
	var uLocal_14550 = 0;
	var uLocal_14551 = 0;
	var uLocal_14552 = 1065353216;
	var uLocal_14553 = 0;
	var uLocal_14554 = 0;
	var uLocal_14555 = 1065353216;
	var uLocal_14556 = 1;
	var uLocal_14557 = 0;
	var uLocal_14558 = -1;
	var uLocal_14559 = 0;
	var uLocal_14560 = 1;
	var uLocal_14561 = 0;
	var uLocal_14562 = 0;
	var uLocal_14563 = 0;
	var uLocal_14564 = 0;
	var uLocal_14565 = 0;
	var uLocal_14566 = 0;
	var uLocal_14567 = 0;
	var uLocal_14568 = 0;
	var uLocal_14569 = 0;
	var uLocal_14570 = 1065353216;
	var uLocal_14571 = 0;
	var uLocal_14572 = 0;
	var uLocal_14573 = 1065353216;
	var uLocal_14574 = 1;
	var uLocal_14575 = 0;
	var uLocal_14576 = 8;
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
	var uLocal_14616 = 0;
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
	var uLocal_14698 = 0;
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
	var uLocal_14874 = 0;
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
	var uLocal_14905 = 8;
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
	var uLocal_14926 = -1;
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
	var uLocal_14948 = -1;
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
	var uLocal_14970 = -1;
	var uLocal_14971 = 0;
	var uLocal_14972 = 0;
	var uLocal_14973 = 0;
	var uLocal_14974 = 0;
	var uLocal_14975 = 0;
	var uLocal_14976 = 0;
	var uLocal_14977 = 0;
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
	var uLocal_14992 = -1;
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
	var uLocal_15014 = -1;
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
	var uLocal_15036 = -1;
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
	var uLocal_15058 = -1;
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
	var uLocal_15080 = -1;
	var uLocal_15081 = 0;
	var uLocal_15082 = 11;
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
	var uLocal_15101 = 0;
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
	var uLocal_15128 = 0;
	var uLocal_15129 = 0;
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
	var uLocal_15157 = 0;
	var uLocal_15158 = 0;
	var uLocal_15159 = 0;
	var uLocal_15160 = 0;
	var uLocal_15161 = 0;
	var uLocal_15162 = 0;
	var uLocal_15163 = 0;
	var uLocal_15164 = 0;
	var uLocal_15165 = 0;
	var uLocal_15166 = 0;
	var uLocal_15167 = 0;
	var uLocal_15168 = 0;
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
	var uLocal_15193 = 2;
	var uLocal_15194 = 0;
	var uLocal_15195 = 0;
	var uLocal_15196 = 0;
	var uLocal_15197 = 0;
	var uLocal_15198 = 0;
	var uLocal_15199 = 0;
	var uLocal_15200 = 0;
	var uLocal_15201 = 0;
	var uLocal_15202 = 0;
	var uLocal_15203 = 0;
	var uLocal_15204 = 0;
	var uLocal_15205 = 0;
	var uLocal_15206 = 0;
	var uLocal_15207 = 0;
	var uLocal_15208 = 0;
	var uLocal_15209 = 0;
	var uLocal_15210 = 0;
	var uLocal_15211 = 0;
	var uLocal_15212 = 0;
	var uLocal_15213 = 0;
	var uLocal_15214 = 0;
	var uLocal_15215 = 0;
	var uLocal_15216 = 0;
	var uLocal_15217 = 0;
	var uLocal_15218 = 0;
	var uLocal_15219 = 0;
	var uLocal_15220 = 0;
	var uLocal_15221 = 0;
	var uLocal_15222 = 0;
	var uLocal_15223 = 0;
	var uLocal_15224 = 0;
	var uLocal_15225 = 0;
	var uLocal_15226 = 0;
	var uLocal_15227 = 0;
	var uLocal_15228 = 2;
	var uLocal_15229 = 0;
	var uLocal_15230 = 0;
	var uLocal_15231 = 0;
	var uLocal_15232 = 0;
	var uLocal_15233 = 0;
	var uLocal_15234 = 0;
	var uLocal_15235 = 0;
	var uLocal_15236 = 0;
	var uLocal_15237 = 0;
	var uLocal_15238 = 0;
	var uLocal_15239 = 0;
	var uLocal_15240 = 0;
	var uLocal_15241 = 0;
	var uLocal_15242 = 0;
	var uLocal_15243 = 0;
	var uLocal_15244 = 0;
	var uLocal_15245 = -1;
	var uLocal_15246 = 0;
	var uLocal_15247 = 0;
	var uLocal_15248 = -1;
	var uLocal_15249 = -1082130432;
	var uLocal_15250 = 0;
	var uLocal_15251 = 0;
	var uLocal_15252 = 0;
	var uLocal_15253 = 0;
	var uLocal_15254 = 0;
	var uLocal_15255 = 0;
	var uLocal_15256 = 0;
	var uLocal_15257 = 0;
	var uLocal_15258 = 0;
	var uLocal_15259 = 0;
	var uLocal_15260 = 0;
	var uLocal_15261 = 0;
	var uLocal_15262 = 0;
	var uLocal_15263 = 0;
	var uLocal_15264 = 0;
	var uLocal_15265 = 0;
	var uLocal_15266 = 0;
	var uLocal_15267 = 0;
	var uLocal_15268 = 0;
	var uLocal_15269 = 0;
	var uLocal_15270 = 0;
	var uLocal_15271 = 0;
	var uLocal_15272 = 0;
	var uLocal_15273 = 0;
	var uLocal_15274 = 0;
	var uLocal_15275 = 0;
	var uLocal_15276 = 0;
	var uLocal_15277 = 0;
	var uLocal_15278 = 0;
	var uLocal_15279 = 0;
	var uLocal_15280 = 0;
	var uLocal_15281 = 0;
	var uLocal_15282 = 0;
	var uLocal_15283 = 0;
	var uLocal_15284 = 0;
	var uLocal_15285 = 0;
	var uLocal_15286 = 0;
	var uLocal_15287 = 0;
	var uLocal_15288 = 0;
	var uLocal_15289 = 0;
	var uLocal_15290 = 0;
	var uLocal_15291 = 0;
	var uLocal_15292 = 0;
	var uLocal_15293 = 0;
	var uLocal_15294 = 0;
	var uLocal_15295 = 0;
	var uLocal_15296 = 0;
	var uLocal_15297 = 0;
	var uLocal_15298 = 0;
	var uLocal_15299 = 0;
	var uLocal_15300 = 0;
	var uLocal_15301 = 0;
	var uLocal_15302 = 0;
	var uLocal_15303 = 0;
	var uLocal_15304 = 0;
	var uLocal_15305 = 0;
	var uLocal_15306 = 0;
	var uLocal_15307 = 0;
	var uLocal_15308 = 0;
	var uLocal_15309 = 0;
	var uLocal_15310 = 0;
	var uLocal_15311 = 0;
	var uLocal_15312 = 0;
	var uLocal_15313 = 0;
	var uLocal_15314 = 0;
	var uLocal_15315 = 0;
	var uLocal_15316 = 0;
	var uLocal_15317 = 0;
	var uLocal_15318 = 0;
	var uLocal_15319 = 0;
	var uLocal_15320 = 0;
	var uLocal_15321 = 0;
	var uLocal_15322 = 0;
	var uLocal_15323 = 0;
	var uLocal_15324 = 0;
	var uLocal_15325 = 0;
	var uLocal_15326 = 0;
	var uLocal_15327 = 0;
	var uLocal_15328 = 0;
	var uLocal_15329 = 0;
	var uLocal_15330 = 0;
	var uLocal_15331 = 24;
	var uLocal_15332 = 0;
	var uLocal_15333 = 0;
	var uLocal_15334 = 0;
	var uLocal_15335 = 0;
	var uLocal_15336 = 0;
	var uLocal_15337 = 0;
	var uLocal_15338 = 0;
	var uLocal_15339 = 0;
	var uLocal_15340 = 0;
	var uLocal_15341 = 0;
	var uLocal_15342 = 0;
	var uLocal_15343 = 0;
	var uLocal_15344 = 0;
	var uLocal_15345 = 0;
	var uLocal_15346 = 0;
	var uLocal_15347 = 0;
	var uLocal_15348 = 0;
	var uLocal_15349 = 0;
	var uLocal_15350 = 0;
	var uLocal_15351 = 0;
	var uLocal_15352 = 0;
	var uLocal_15353 = 0;
	var uLocal_15354 = 0;
	var uLocal_15355 = 0;
	var uLocal_15356 = 0;
	var uLocal_15357 = 0;
	var uLocal_15358 = 0;
	var uLocal_15359 = 0;
	var uLocal_15360 = 0;
	var uLocal_15361 = 0;
	var uLocal_15362 = 0;
	var uLocal_15363 = 0;
	var uLocal_15364 = 0;
	var uLocal_15365 = 0;
	var uLocal_15366 = 0;
	var uLocal_15367 = 0;
	var uLocal_15368 = 0;
	var uLocal_15369 = 0;
	var uLocal_15370 = 0;
	var uLocal_15371 = 0;
	var uLocal_15372 = 0;
	var uLocal_15373 = 0;
	var uLocal_15374 = 0;
	var uLocal_15375 = 0;
	var uLocal_15376 = 0;
	var uLocal_15377 = 0;
	var uLocal_15378 = 0;
	var uLocal_15379 = 0;
	var uLocal_15380 = 0;
	var uLocal_15381 = 0;
	var uLocal_15382 = 0;
	var uLocal_15383 = 0;
	var uLocal_15384 = 0;
	var uLocal_15385 = 0;
	var uLocal_15386 = 0;
	var uLocal_15387 = 0;
	var uLocal_15388 = 0;
	var uLocal_15389 = 0;
	var uLocal_15390 = 0;
	var uLocal_15391 = 0;
	var uLocal_15392 = 0;
	var uLocal_15393 = 0;
	var uLocal_15394 = 0;
	var uLocal_15395 = 0;
	var uLocal_15396 = 0;
	var uLocal_15397 = 0;
	var uLocal_15398 = 0;
	var uLocal_15399 = 0;
	var uLocal_15400 = 0;
	var uLocal_15401 = 0;
	var uLocal_15402 = 0;
	var uLocal_15403 = 0;
	var uLocal_15404 = 0;
	var uLocal_15405 = 0;
	var uLocal_15406 = 0;
	var uLocal_15407 = 0;
	var uLocal_15408 = 0;
	var uLocal_15409 = 0;
	var uLocal_15410 = 0;
	var uLocal_15411 = 0;
	var uLocal_15412 = 0;
	var uLocal_15413 = 0;
	var uLocal_15414 = 0;
	var uLocal_15415 = 0;
	var uLocal_15416 = 0;
	var uLocal_15417 = 0;
	var uLocal_15418 = 0;
	var uLocal_15419 = 0;
	var uLocal_15420 = 0;
	var uLocal_15421 = 0;
	var uLocal_15422 = 0;
	var uLocal_15423 = 0;
	var uLocal_15424 = 0;
	var uLocal_15425 = 0;
	var uLocal_15426 = 0;
	var uLocal_15427 = 0;
	var uLocal_15428 = 0;
	var uLocal_15429 = 0;
	var uLocal_15430 = 0;
	var uLocal_15431 = 0;
	var uLocal_15432 = 0;
	var uLocal_15433 = 0;
	var uLocal_15434 = 0;
	var uLocal_15435 = 0;
	var uLocal_15436 = 0;
	var uLocal_15437 = 0;
	var uLocal_15438 = 0;
	var uLocal_15439 = 0;
	var uLocal_15440 = 0;
	var uLocal_15441 = 0;
	var uLocal_15442 = 0;
	var uLocal_15443 = 0;
	var uLocal_15444 = 0;
	var uLocal_15445 = 0;
	var uLocal_15446 = 0;
	var uLocal_15447 = 0;
	var uLocal_15448 = 0;
	var uLocal_15449 = 0;
	var uLocal_15450 = 0;
	var uLocal_15451 = 0;
	var uLocal_15452 = 0;
	var uLocal_15453 = 0;
	var uLocal_15454 = 0;
	var uLocal_15455 = -1;
	var uLocal_15456 = 0;
	var uLocal_15457 = 0;
	var uLocal_15458 = 0;
	var uLocal_15459 = 0;
	var uLocal_15460 = 0;
	var uLocal_15461 = 0;
	var uLocal_15462 = 0;
	var uLocal_15463 = 0;
	var uLocal_15464 = 0;
	var uLocal_15465 = 0;
	var uLocal_15466 = 0;
	var uLocal_15467 = 0;
	var uLocal_15468 = 0;
	var uLocal_15469 = 0;
	var uLocal_15470 = 0;
	var uLocal_15471 = 0;
	var uLocal_15472 = 0;
	var uLocal_15473 = 0;
	var uLocal_15474 = 0;
	var uLocal_15475 = 0;
	var uLocal_15476 = 0;
	var uLocal_15477 = 0;
	var uLocal_15478 = 0;
	var uLocal_15479 = 0;
	var uLocal_15480 = 0;
	var uLocal_15481 = 0;
	var uLocal_15482 = -1;
	var uLocal_15483 = 20;
	var uLocal_15484 = 0;
	var uLocal_15485 = 0;
	var uLocal_15486 = 0;
	var uLocal_15487 = 0;
	var uLocal_15488 = 0;
	var uLocal_15489 = 0;
	var uLocal_15490 = 0;
	var uLocal_15491 = 0;
	var uLocal_15492 = 0;
	var uLocal_15493 = 0;
	var uLocal_15494 = 0;
	var uLocal_15495 = 0;
	var uLocal_15496 = 0;
	var uLocal_15497 = 0;
	var uLocal_15498 = 0;
	var uLocal_15499 = 0;
	var uLocal_15500 = 0;
	var uLocal_15501 = 0;
	var uLocal_15502 = 0;
	var uLocal_15503 = 0;
	var uLocal_15504 = 0;
	var uLocal_15505 = 0;
	var uLocal_15506 = 0;
	var uLocal_15507 = 0;
	var uLocal_15508 = 0;
	var uLocal_15509 = 0;
	var uLocal_15510 = 0;
	var uLocal_15511 = 1028443341;
	var uLocal_15512 = 1038174126;
	var uLocal_15513 = 1065353216;
	var uLocal_15514 = 1065353216;
	var uLocal_15515 = 1086324736;
	var uLocal_15516 = 1082130432;
	var uLocal_15517 = 1073741824;
	var uLocal_15518 = 1065353216;
	var uLocal_15519 = 1108082688;
	var uLocal_15520 = 1108082688;
	var uLocal_15521 = 3000;
	var uLocal_15522 = 1092616192;
	var uLocal_15523 = 0;
	var uLocal_15524 = 0;
	var uLocal_15525 = 0;
	var uLocal_15526 = 0;
	var uLocal_15527 = 0;
	var uLocal_15528 = 0;
	var uLocal_15529 = 0;
	var uLocal_15530 = 0;
	var uLocal_15531 = 0;
	var uLocal_15532 = 0;
	var uLocal_15533 = 0;
	var uLocal_15534 = 0;
	var uLocal_15535 = 0;
	var uLocal_15536 = 0;
	var uLocal_15537 = 0;
	var uLocal_15538 = 0;
	var uLocal_15539 = 0;
	var uLocal_15540 = 0;
	var uLocal_15541 = 0;
	var uLocal_15542 = 0;
	var uLocal_15543 = 0;
	var uLocal_15544 = 0;
	var uLocal_15545 = 0;
	var uLocal_15546 = 0;
	var uLocal_15547 = 0;
	var uLocal_15548 = 0;
	var uLocal_15549 = 0;
	var uLocal_15550 = 0;
	var uLocal_15551 = 0;
	var uLocal_15552 = 0;
	var uLocal_15553 = 0;
	var uLocal_15554 = 0;
	var uLocal_15555 = 0;
	var uLocal_15556 = 0;
	var uLocal_15557 = -1;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_2116 = -1679307491;
	vLocal_2136 = { 987.621f, -6742.848f, 62.154f };
	vLocal_2139 = { 270f, 0f, -166f };
	iLocal_2143 = -1;
	iLocal_2146 = joaat("PICKUP_WEAPON_SHOTGUN_DOUBLEBARREL");
	vLocal_2147 = { 1000.635f, -6740.55f, 58.142f };
	vLocal_2150 = { -90f, 0f, -219f };
	iLocal_2154 = joaat("PICKUP_WEAPON_RIFLE_SPRINGFIELD");
	vLocal_2155 = { 987.678f, -6773.369f, 48.896f };
	vLocal_2158 = { -90f, 0f, -161f };
	iLocal_2162 = -1;
	vLocal_2163 = { 969.4f, -6789.1f, 42.3f };
	iLocal_2260 = -1;
	iLocal_2283 = -1;
	iLocal_2301 = 63;
	iLocal_2303 = -1;
	iLocal_2306 = -1;
	vLocal_2314 = { 986.58f, -6747.51f, 62.1432f };
	vLocal_2317 = { 87.2195f, 164.362f, -18.6157f };
	iLocal_2324 = 72;
	iLocal_2325 = 23;
	iLocal_2326 = 22;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4642))
	{
		__LIB_4__::func_935(&uLocal_2378, 1073741824 /* Float: 2f */);
		func_2(&uLocal_2378, 1);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	while (!__LIB_0__::func_382(64))
	{
		BUILTIN::WAIT(0);
	}
	func_4(&uScriptParam_0, &uLocal_2378);
	func_5(&uLocal_2378);
	while (!__LIB_4__::func_936(&uLocal_2378, -2147483648))
	{
		func_7(&uLocal_2378);
		BUILTIN::WAIT(0);
	}
	while (!func_2(&uLocal_2378, 0))
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
					if (!__LIB_0__::func_75(&(uParam0->f_13118)))
					{
						__LIB_1__::func_283(&(uParam0->f_13118), 0);
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
						if (((!bVar0 && !__LIB_5__::func_474(uParam0, bVar1)) && !__LIB_0__::func_91()) && !__LIB_4__::func_936(uParam0, 80))
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
							if (__LIB_5__::func_474(uParam0, bVar1))
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
				func_36(uParam0, func_34(__LIB_4__::func_939(uParam0)), func_34(__LIB_5__::func_475(uParam0)), __LIB_4__::func_939(uParam0), __LIB_5__::func_475(uParam0));
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
	__LIB_8__::func_945(uParam0, 0, !bVar2, bVar2);
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
	iLocal_127 = __LIB_4__::func_950(uParam0);
	iLocal_127 = iLocal_127;
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
				__LIB_5__::func_497(uParam0, __LIB_1__::func_469(uParam0->f_607), 0);
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
	__LIB_5__::func_372(uParam0, 0);
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
	__LIB_16__::func_778(uParam0);
	__LIB_8__::func_935(uParam0, __LIB_4__::func_939(uParam0));
	__LIB_5__::func_105(__LIB_4__::func_941(uParam0));
	if (!__LIB_4__::func_948(uParam0, 65536))
	{
		__LIB_5__::func_178(__LIB_4__::func_941(uParam0));
	}
	__LIB_5__::func_106(uParam0, PLAYER::PLAYER_PED_ID(), "ARTHUR", 0);
	__LIB_5__::func_25(uParam0);
	__LIB_5__::func_373(uParam0);
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
	if (__LIB_4__::func_938(uParam0) == 0)
	{
		CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME_2();
	}
	MISC::CLEAR_BIT(&(Global_1956580.f_1), 6);
	UIFEED::_0x6035E8FBCA32AC5E();
	POPULATION::_0xBC90BDF4E5228EA1();
	func_163();
	func_165(uParam0, func_164(6), 1);
	func_166(0);
	func_167(uParam0, func_164(6));
	func_168(uParam0, func_164(6));
	func_169();
	func_170(uParam0, 1);
	func_171(0, 11);
	func_172();
	func_173();
	func_174();
	func_175();
	__LIB_8__::func_760();
	CLOCK::PAUSE_CLOCK(false, 0);
	func_176(25);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(455.4888f, -7358.837f, -170.5122f, 1558.742f, -6413.559f, 117.7062f, 0, 1);
	func_177(1);
	HUD::_DISPLAY_HUD_COMPONENT(iLocal_2116);
	MISC::CLEAR_BIT(&(Global_1956580.f_1), 4);
	if (func_164(126) && !iLocal_2306 == -1)
	{
		if (AUDIO::IS_STREAM_PLAYING(iLocal_2306))
		{
			AUDIO::STOP_STREAM(iLocal_2306);
		}
		iLocal_2306 = -1;
	}
	if (func_164(68))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 308, false);
		func_178(68);
	}
	if (func_164(1))
	{
		__LIB_4__::func_737();
		func_178(1);
	}
	if (!func_164(6))
	{
		MISC::CLEAR_AREA(__LIB_1__::func_469(42), 500f, 1065787);
	}
	CAM::_0xE296208C273BD7F0(0, 0, 0, 17, 1, 0);
	func_180(func_164(127));
	return true;
}

struct<4> func_34(int iParam0)
{
	struct<4> Var0;
	__LIB_4__::func_954(&Var0, func_217(1, 0, iParam0));
	return Var0;
}

void func_36(var uParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	struct<4> Var0;
	struct<4> Var4;
	Var0 = { Param1 };
	Var0.f_3 = Param1.f_3;
	Var4 = { Param5 };
	Var4.f_3 = Param5.f_3;
	__LIB_0__::func_304(0);
	func_220(__LIB_3__::func_918(uParam0->f_607), Var0, Var4, __LIB_5__::func_24(iParam9), __LIB_5__::func_24(iParam10));
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
		func_275(uParam0);
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
						func_312(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_312(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_312(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_312(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_312(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_312(joaat("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_312(joaat("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_312(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_312(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_312(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_312(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_312(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_312(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_312(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_312(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_312(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_312(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_312(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_312(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_312(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_312(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_312(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_312(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_312(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_312(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_314();
						func_315(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
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
						func_312(joaat("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
						func_312(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_312(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
		func_353();
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
							func_312(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
	func_377(uParam0);
	uParam0->f_634[0] = 62131;
	uParam0->f_634[1] = 62131;
	uParam0->f_637 = 0;
	__LIB_4__::func_960(uParam0, *uParam1);
	func_380(uParam0);
}

void func_109(var uParam0)
{
	func_381();
	func_382();
	func_383();
	if (!func_384(uParam0) == 0)
	{
		func_385(2, 1);
	}
}

void func_123(var uParam0)
{
	if (__LIB_0__::func_91())
	{
		func_388(&(uParam0->f_7375));
	}
}

bool func_127(struct<4> Param0)
{
	if (__LIB_0__::func_13(32768))
	{
		return true;
	}
	return func_390(Param0, Param0.f_3);
}

void func_138(var uParam0)
{
	if (!ITEMSET::IS_ITEMSET_VALID(Local_14))
	{
		Local_14 = ITEMSET::CREATE_ITEMSET(true);
	}
	__LIB_5__::func_338(uParam0, joaat("P_CRATECONF01X"), 512);
	__LIB_5__::func_338(uParam0, joaat("PLAYER_ZERO"), 262144);
	__LIB_5__::func_338(uParam0, joaat("CS_DUTCH"), 262144);
	__LIB_5__::func_338(uParam0, joaat("CS_MICAHBELL"), 262144);
	__LIB_5__::func_338(uParam0, joaat("CS_BILLWILLIAMSON"), 262144);
	__LIB_5__::func_338(uParam0, joaat("CS_HERCULE"), 262144);
	__LIB_5__::func_338(uParam0, joaat("CS_FRENCHMAN_01"), 262144);
	__LIB_5__::func_338(uParam0, joaat("SMUGGLER02"), 262144);
	__LIB_5__::func_338(uParam0, joaat("HOTCHKISS_CANNON"), 262144);
	__LIB_5__::func_338(uParam0, joaat("ROWBOAT"), 262144);
	__LIB_5__::func_338(uParam0, joaat("P_CRATECONF01X"), 512);
}

void func_139(var uParam0)
{
	vLocal_243[0 /*3*/].f_2 = 67108863;
	vLocal_243[1 /*3*/].f_2 = 67108863;
	vLocal_243[2 /*3*/].f_2 = 67108863;
	vLocal_243[3 /*3*/].f_2 = 67108863;
	vLocal_243[4 /*3*/].f_2 = 67108863;
	vLocal_243[7 /*3*/].f_2 = 67108863;
	vLocal_243[6 /*3*/].f_2 = 524320;
	vLocal_243[8 /*3*/].f_2 = 67108863;
	vLocal_243[9 /*3*/].f_2 = 67108863;
	vLocal_243[10 /*3*/].f_2 = 67108863;
	vLocal_243[11 /*3*/].f_2 = 1;
	vLocal_243[12 /*3*/].f_2 = 1;
	vLocal_243[14 /*3*/].f_2 = 4;
	vLocal_243[13 /*3*/].f_2 = 67108863;
	vLocal_243[15 /*3*/].f_2 = 67108863;
	vLocal_243[21 /*3*/].f_2 = 67108863;
	vLocal_243[22 /*3*/].f_2 = 1;
	vLocal_243[23 /*3*/].f_2 = 67108863;
	vLocal_243[24 /*3*/].f_2 = 4;
	vLocal_243[27 /*3*/].f_2 = 0;
	vLocal_243[28 /*3*/].f_2 = 0;
	vLocal_243[29 /*3*/].f_2 = 0;
	vLocal_243[30 /*3*/].f_2 = 0;
	vLocal_243[31 /*3*/].f_2 = 0;
	vLocal_243[32 /*3*/].f_2 = 0;
	vLocal_243[33 /*3*/].f_2 = 67108863;
	vLocal_243[35 /*3*/].f_2 = 67108863;
	vLocal_243[44 /*3*/].f_2 = 4;
	vLocal_243[45 /*3*/].f_2 = 0;
	vLocal_243[46 /*3*/].f_2 = 0;
	vLocal_243[47 /*3*/].f_2 = 0;
	vLocal_243[48 /*3*/].f_2 = 16;
	vLocal_243[49 /*3*/].f_2 = 16;
	vLocal_243[52 /*3*/].f_2 = 0;
	vLocal_243[53 /*3*/].f_2 = 0;
	vLocal_243[54 /*3*/].f_2 = 32;
	vLocal_243[55 /*3*/].f_2 = 32;
	vLocal_243[56 /*3*/].f_2 = 32;
	vLocal_243[57 /*3*/].f_2 = 32;
	vLocal_243[54 /*3*/].f_2 = 32;
	vLocal_243[58 /*3*/].f_2 = 32;
	vLocal_243[59 /*3*/].f_2 = 32;
	__LIB_5__::func_254(uParam0, 67108863);
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
	POPULATION::_0xF45E46DEECF7DF6E(14336, 0, 0, -1, -1);
	PED::_0xAB0D553FE20A6E25(0f);
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
}

bool func_158(var uParam0)
{
	if (__LIB_4__::func_962(uParam0) < 1)
	{
		func_419(uParam0, __LIB_4__::func_951(uParam0, 3), !__LIB_4__::func_937(uParam0, 2097152), uParam0->f_5410, !__LIB_4__::func_937(uParam0, 32), 0);
		func_420(uParam0, 1, uParam0->f_5413, uParam0->f_5413.f_1, uParam0->f_5413.f_2, uParam0->f_5416, 1, 1, 1);
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
				func_421(uParam0);
			}
		}
		if (__LIB_4__::func_948(uParam0, 32))
		{
			func_422(uParam0);
		}
	}
	switch (__LIB_4__::func_962(uParam0))
	{
		case -1:
		case 0:
			__LIB_4__::func_963(uParam0, 1);
			break;
		case 1:
			if (func_424(uParam0))
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
			if (__LIB_5__::func_504(uParam0))
			{
				__LIB_4__::func_963(uParam0, 3);
			}
			break;
		case 3:
			if (func_426(uParam0))
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
	if (func_428(uParam0))
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
			func_428(uParam0);
		}
	}
	return false;
}

void func_163()
{
	if (OBJECT::DOES_PICKUP_EXIST(iLocal_2135))
	{
		OBJECT::REMOVE_PICKUP(iLocal_2135);
	}
	if (OBJECT::DOES_PICKUP_EXIST(iLocal_2145))
	{
		OBJECT::REMOVE_PICKUP(iLocal_2145);
	}
	if (OBJECT::DOES_PICKUP_EXIST(iLocal_2153))
	{
		OBJECT::REMOVE_PICKUP(iLocal_2153);
	}
	if (OBJECT::DOES_PICKUP_EXIST(iLocal_2320))
	{
		OBJECT::REMOVE_PICKUP(iLocal_2320);
	}
}

bool func_164(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam0;
	while (iVar0 >= 32)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	return __LIB_0__::func_1(uLocal_225[iVar1], __LIB_0__::func_470(iVar0));
}

void func_165(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	if (bParam2)
	{
		__LIB_5__::func_335(uParam0, iLocal_1233[iVar0]);
		__LIB_6__::func_908(&(uParam0->f_7375), iLocal_1233[iVar0], 0);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_1233)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iLocal_1233[iVar0]) && ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_1233[iVar0])) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_1233[iVar0], false))
		{
			OBJECT::DELETE_OBJECT(&(iLocal_1233[iVar0]));
		}
		iVar0++;
	}
}

void func_166(bool bParam0)
{
	int iVar0;
	iVar0 = 2;
	while (iVar0 <= 6)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_424[iVar0 /*8*/]) || ENTITY::IS_ENTITY_DEAD(Local_424[iVar0 /*8*/]))
		{
		}
		else if (func_433(iVar0) == -1)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(Local_424[iVar0 /*8*/], bParam0);
		}
		else
		{
			__LIB_1__::func_296(func_433(iVar0), bParam0, 0, 1);
		}
		iVar0++;
	}
}

void func_167(var uParam0, bool bParam1)
{
	func_435(uParam0, 1, 100);
	if (!bParam1)
	{
		PED::_0x9851DE7AEC10B4E1(__LIB_1__::func_469(42), 500f, 1, 0);
	}
}

void func_168(var uParam0, bool bParam1)
{
	if (!bParam1)
	{
	}
}

void func_169()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		func_385(iVar0, 0);
		iVar0++;
	}
}

void func_170(var uParam0, bool bParam1)
{
	int iVar0;
	if (!func_164(6))
	{
		if ((ENTITY::DOES_ENTITY_EXIST(Local_1700.f_1) && ENTITY::IS_ENTITY_A_MISSION_ENTITY(Local_1700.f_1)) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_1700.f_1, false))
		{
			if (bParam1)
			{
				__LIB_5__::func_335(uParam0, Local_1700.f_1);
				__LIB_6__::func_908(&(uParam0->f_7375), Local_1700.f_1, 0);
			}
			VEHICLE::DELETE_VEHICLE(&(Local_1700.f_1));
		}
	}
	func_436(9);
	iVar0 = 0;
	while (iVar0 < Local_1700.f_3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_1700.f_3[iVar0 /*33*/].f_13.f_9))
		{
			OBJECT::DELETE_OBJECT(&(Local_1700.f_3[iVar0 /*33*/].f_13.f_9));
		}
		iVar0++;
	}
	if ((ENTITY::DOES_ENTITY_EXIST(vLocal_2104.x) && ENTITY::IS_ENTITY_A_MISSION_ENTITY(vLocal_2104.x)) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(vLocal_2104.x, false))
	{
		if (bParam1)
		{
			__LIB_5__::func_335(uParam0, vLocal_2104.x);
			__LIB_6__::func_908(&(uParam0->f_7375), vLocal_2104.x, 0);
		}
		if (!ENTITY::IS_ENTITY_DEAD(Global_35) && !ENTITY::IS_ENTITY_DEAD(vLocal_2104.x))
		{
			if (PED::IS_PED_IN_VEHICLE(Global_35, vLocal_2104.x, false))
			{
				PED::_0xE0B61ED8BB37712F(Global_35);
			}
		}
		VEHICLE::DELETE_VEHICLE(&vLocal_2104);
		VEHICLE::REMOVE_VEHICLE_ASSET(joaat("HOTCHKISS_CANNON"));
		func_436(8);
	}
}

void func_171(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = iParam0;
	while (iVar0 <= iParam1)
	{
		if (AICOVERPOINT::_0xC276FE69DDA22BAD(iLocal_230[iVar0]))
		{
			TASK::REMOVE_COVER_POINT(iLocal_230[iVar0]);
		}
		iVar0++;
	}
}

void func_172()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < vLocal_243.x)
	{
		func_436(iVar0);
		iVar0++;
	}
}

void func_173()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < vLocal_243.x)
	{
		iVar1 = iVar0;
		switch (vLocal_243[iVar1 /*3*/])
		{
			case 0:
				break;
			case 1:
				if (vLocal_243[iVar1 /*3*/].f_1 == 1)
				{
					STREAMING::REQUEST_MODEL(func_437(iVar1), false);
				}
				else if (vLocal_243[iVar1 /*3*/].f_1 == 2)
				{
					TASK::REQUEST_WAYPOINT_RECORDING(func_438(iVar1));
				}
				else if (vLocal_243[iVar1 /*3*/].f_1 == 3)
				{
					WEAPON::_0x72D4CB5DB927009C(func_439(iVar1), -1, 0);
				}
				else if (vLocal_243[iVar1 /*3*/].f_1 == 4)
				{
					STREAMING::REQUEST_ANIM_DICT(func_440(iVar1, 1));
				}
				vLocal_243[iVar1 /*3*/] = 2;
				break;
			case 2:
				if ((((vLocal_243[iVar1 /*3*/].f_1 == 1 && STREAMING::HAS_MODEL_LOADED(func_437(iVar1))) || (vLocal_243[iVar1 /*3*/].f_1 == 2 && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(func_438(iVar1)))) || (vLocal_243[iVar1 /*3*/].f_1 == 3 && WEAPON::_0xFF07CF465F48B830(func_439(iVar1)))) || (vLocal_243[iVar1 /*3*/].f_1 == 4 && STREAMING::HAS_ANIM_DICT_LOADED(func_440(iVar1, 1))))
				{
					vLocal_243[iVar1 /*3*/] = 3;
				}
				break;
			case 3:
				break;
			case 4:
				if (vLocal_243[iVar1 /*3*/].f_1 == 1)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_437(iVar1));
				}
				else if (vLocal_243[iVar1 /*3*/].f_1 == 2)
				{
					TASK::REMOVE_WAYPOINT_RECORDING(func_438(iVar1));
				}
				else if (vLocal_243[iVar1 /*3*/].f_1 == 3)
				{
					WEAPON::_0xC3896D03E2852236(func_439(iVar1));
				}
				else if (vLocal_243[iVar1 /*3*/].f_1 == 4)
				{
					STREAMING::REMOVE_ANIM_DICT(func_440(iVar1, 1));
				}
				vLocal_243[iVar1 /*3*/] = 0;
				break;
		}
		iVar0++;
	}
}

void func_174()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iLocal_1494)
	{
		if (CAM::DOES_CAM_EXIST(iLocal_1494[iVar0]))
		{
			func_441(iVar0);
		}
		iVar0++;
	}
}

void func_175()
{
	VOLUME::_DELETE_VOLUME(Local_128);
	VOLUME::_DELETE_VOLUME(Local_128.f_1);
	VOLUME::_DELETE_VOLUME(Local_128.f_2);
	VOLUME::_DELETE_VOLUME(Local_128.f_3);
	VOLUME::_DELETE_VOLUME(Local_128.f_4);
	VOLUME::_DELETE_VOLUME(Local_128.f_5);
	VOLUME::_DELETE_VOLUME(Local_128.f_6);
	VOLUME::_DELETE_VOLUME(Local_128.f_7);
	VOLUME::_DELETE_VOLUME(Local_128.f_8);
	VOLUME::_DELETE_VOLUME(Local_128.f_9);
	VOLUME::_DELETE_VOLUME(Local_128.f_10);
	VOLUME::_DELETE_VOLUME(Local_128.f_11);
	VOLUME::_DELETE_VOLUME(Local_128.f_12);
	VOLUME::_DELETE_VOLUME(Local_128.f_13);
	VOLUME::_DELETE_VOLUME(Local_128.f_14);
	VOLUME::_DELETE_VOLUME(Local_128.f_15);
	VOLUME::_DELETE_VOLUME(Local_128.f_16);
	VOLUME::_DELETE_VOLUME(Local_128.f_17);
	VOLUME::_DELETE_VOLUME(Local_128.f_18);
	VOLUME::_DELETE_VOLUME(Local_128.f_19);
	VOLUME::_DELETE_VOLUME(Local_128.f_20);
	VOLUME::_DELETE_VOLUME(Local_128.f_21);
	VOLUME::_DELETE_VOLUME(Local_128.f_22);
	VOLUME::_DELETE_VOLUME(Local_128.f_23);
	VOLUME::_DELETE_VOLUME(Local_128.f_24);
	VOLUME::_DELETE_VOLUME(Local_128.f_25);
	VOLUME::_DELETE_VOLUME(Local_128.f_26);
	VOLUME::_DELETE_VOLUME(Local_128.f_27);
	VOLUME::_DELETE_VOLUME(Local_128.f_28);
	VOLUME::_DELETE_VOLUME(Local_128.f_29);
	VOLUME::_DELETE_VOLUME(Local_128.f_30);
	VOLUME::_DELETE_VOLUME(Local_128.f_31);
	VOLUME::_DELETE_VOLUME(Local_128.f_32);
	VOLUME::_DELETE_VOLUME(Local_128.f_33);
	VOLUME::_DELETE_VOLUME(Local_128.f_34);
	VOLUME::_DELETE_VOLUME(Local_128.f_35);
	VOLUME::_DELETE_VOLUME(Local_128.f_36);
	VOLUME::_DELETE_VOLUME(Local_128.f_37);
	VOLUME::_DELETE_VOLUME(Local_128.f_38);
	VOLUME::_DELETE_VOLUME(Local_128.f_39);
	VOLUME::_DELETE_VOLUME(Local_128.f_40);
	VOLUME::_DELETE_VOLUME(Local_128.f_41);
	VOLUME::_DELETE_VOLUME(Local_128.f_42);
	VOLUME::_DELETE_VOLUME(Local_128.f_43);
	VOLUME::_DELETE_VOLUME(Local_128.f_44);
	VOLUME::_DELETE_VOLUME(Local_128.f_45);
	VOLUME::_DELETE_VOLUME(Local_128.f_46);
	VOLUME::_DELETE_VOLUME(Local_128.f_47);
	VOLUME::_DELETE_VOLUME(Local_128.f_48);
	VOLUME::_DELETE_VOLUME(Local_128.f_49);
	VOLUME::_DELETE_VOLUME(Local_128.f_50);
	VOLUME::_DELETE_VOLUME(Local_128.f_51);
	VOLUME::_DELETE_VOLUME(Local_128.f_52);
	VOLUME::_DELETE_VOLUME(Local_128.f_53);
	VOLUME::_DELETE_VOLUME(Local_128.f_54);
	VOLUME::_DELETE_VOLUME(Local_128.f_55);
	VOLUME::_DELETE_VOLUME(Local_128.f_56);
	VOLUME::_DELETE_VOLUME(Local_128.f_57);
	VOLUME::_DELETE_VOLUME(Local_128.f_58);
	VOLUME::_DELETE_VOLUME(Local_128.f_59);
	VOLUME::_DELETE_VOLUME(Local_128.f_60);
	VOLUME::_DELETE_VOLUME(Local_128.f_61);
	VOLUME::_DELETE_VOLUME(Local_128.f_62);
	VOLUME::_DELETE_VOLUME(Local_128.f_63);
	VOLUME::_DELETE_VOLUME(Local_128.f_64);
	VOLUME::_DELETE_VOLUME(Local_128.f_65);
	VOLUME::_DELETE_VOLUME(Local_128.f_66);
	VOLUME::_DELETE_VOLUME(Local_128.f_67);
	VOLUME::_DELETE_VOLUME(Local_128.f_68);
	VOLUME::_DELETE_VOLUME(Local_128.f_69);
	VOLUME::_DELETE_VOLUME(Local_128.f_70);
	VOLUME::_DELETE_VOLUME(Local_128.f_71);
	VOLUME::_DELETE_VOLUME(Local_128.f_72);
	VOLUME::_DELETE_VOLUME(Local_128.f_73);
	VOLUME::_DELETE_VOLUME(Local_128.f_74);
	VOLUME::_DELETE_VOLUME(Local_128.f_75);
	VOLUME::_DELETE_VOLUME(Local_128.f_76);
	VOLUME::_DELETE_VOLUME(Local_128.f_77);
	VOLUME::_DELETE_VOLUME(Local_128.f_78);
	VOLUME::_DELETE_VOLUME(Local_128.f_79);
	VOLUME::_DELETE_VOLUME(Local_128.f_80);
	VOLUME::_DELETE_VOLUME(Local_128.f_81);
	VOLUME::_DELETE_VOLUME(Local_128.f_82);
	VOLUME::_DELETE_VOLUME(Local_128.f_83);
	VOLUME::_DELETE_VOLUME(Local_128.f_84);
	VOLUME::_DELETE_VOLUME(Local_128.f_85);
	VOLUME::_DELETE_VOLUME(Local_128.f_86);
	VOLUME::_DELETE_VOLUME(Local_128.f_87);
	VOLUME::_DELETE_VOLUME(Local_128.f_88);
	VOLUME::_DELETE_VOLUME(Local_128.f_89);
	VOLUME::_DELETE_VOLUME(Local_128.f_90);
	VOLUME::_DELETE_VOLUME(Local_128.f_91);
	VOLUME::_DELETE_VOLUME(Local_128.f_92);
	VOLUME::_DELETE_VOLUME(Local_128.f_93);
	VOLUME::_DELETE_VOLUME(Local_128.f_94);
	VOLUME::_DELETE_VOLUME(Local_128.f_95);
	VOLUME::_DELETE_VOLUME(Local_128.f_96);
}

void func_176(int iParam0)
{
	if ((((iParam0 == 0 || iParam0 == 1) || iParam0 == 2) || iParam0 == 3) || iParam0 == 4)
	{
		STREAMING::_REQUEST_IMAP(1694736240);
		STREAMING::_REMOVE_IMAP(-313831898);
		if (PATHFIND::_0x5AC0944C156E5F44("CIN_NAV_DOOR_BROKEN"))
		{
			PATHFIND::_0x527B97C203BB8606("CIN_NAV_DOOR_BROKEN");
		}
		if (!PATHFIND::_0x5AC0944C156E5F44("CIN_NAV_DOOR_INTACT"))
		{
			PATHFIND::_0x7C334FF4D9215912("CIN_NAV_DOOR_INTACT");
		}
	}
	else if (iParam0 == 5 || iParam0 == 25)
	{
		STREAMING::_REMOVE_IMAP(1694736240);
		STREAMING::_REQUEST_IMAP(-313831898);
		if (PATHFIND::_0x5AC0944C156E5F44("CIN_NAV_DOOR_INTACT"))
		{
			PATHFIND::_0x527B97C203BB8606("CIN_NAV_DOOR_INTACT");
		}
	}
}

void func_177(int iParam0)
{
	WEAPON::_0xA3716A77DCF17424(Global_35, iLocal_1452[0], iParam0);
}

void func_178(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam0;
	while (iVar0 >= 32)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	__LIB_0__::func_516(&(uLocal_225[iVar1]), __LIB_0__::func_470(iVar0));
}

void func_180(bool bParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_2328)
	{
		if (bParam0 && iVar0 == 7)
		{
		}
		else
		{
			func_443(iVar0);
		}
		iVar0++;
	}
}

struct<4> func_217(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	switch (iParam0)
	{
		case 1:
			if (iParam1 == 0)
			{
				switch (iParam2)
				{
					case 0:
						return func_470(0, 0);
					case 1:
						return func_470(1, 0);
					case 2:
						return func_470(2, 0);
					case 3:
						return func_470(3, 0);
					case 4:
						return func_470(4, 0);
					case 5:
						return func_470(5, 0);
					case 25:
						return func_470(6, 0);
					case 26:
						return func_470(6, 0);
				}
			}
			else if (iParam1 == 5)
			{
				Var0 = { 0.536f, -1.28f, 0.548f };
				return Var0;
			}
			break;
		case 2:
			if (iParam1 == 0)
			{
				switch (iParam2)
				{
					case 0:
						return func_470(0, 1);
					case 1:
						return func_470(1, 1);
					case 2:
						return func_470(2, 1);
					case 3:
						return func_470(3, 1);
					case 4:
						return func_470(4, 1);
					case 5:
						return func_470(5, 1);
					case 25:
						return func_470(6, 1);
				}
			}
			else if (iParam1 == 3)
			{
				if (iParam2 == 1)
				{
					Var0 = { -0.152f, 0.2f, -0.312f };
					return Var0;
				}
			}
			else if (iParam1 == 4)
			{
				if (iParam2 == 1)
				{
					Var0 = { 64.8f, 148.32f, -144f };
					return Var0;
				}
			}
			break;
		case 4:
			if (iParam1 == 0)
			{
				switch (iParam2)
				{
					case 0:
						return func_470(0, 2);
					case 1:
						return func_470(1, 2);
					case 2:
						return func_470(2, 2);
					case 3:
						return func_470(3, 2);
					case 4:
						return func_470(4, 2);
					case 5:
						return func_470(5, 2);
					case 25:
						return func_470(6, 2);
				}
			}
			else if (iParam1 == 1)
			{
				switch (iParam2)
				{
					case 1:
						return func_471(5, 0);
				}
			}
			else if (iParam1 == 2)
			{
				if (iParam2 == 1)
				{
					Var0 = { 986.8386f, -6747.514f, 66.5186f };
					Var0.f_3 = 0.75f;
					return Var0;
				}
				else
				{
					Jump @1490; //curOff = 728
					if (iParam1 == 0)
					{
						switch (iParam2)
						{
							case 0:
								return func_470(0, 3);
							case 1:
								return func_470(1, 3);
							case 2:
								return func_470(2, 3);
							case 3:
								return func_470(3, 3);
							case 4:
								return func_470(4, 3);
							case 5:
								return func_470(5, 3);
							case 25:
								return func_470(6, 3);
						}
					}
					else if (iParam1 == 2)
					{
						if (iParam2 == 1)
						{
							Var0 = { 987.1789f, -6749.318f, 66.2502f };
							Var0.f_3 = 0.75f;
							return Var0;
						}
						else
						{
							Jump @1490; //curOff = 924
							if (iParam1 == 0)
							{
								switch (iParam2)
								{
									case 0:
										return func_470(0, 4);
									case 1:
										return func_470(1, 4);
									case 2:
										return func_470(2, 4);
									case 3:
										return func_470(3, 4);
									case 4:
										return func_470(4, 4);
									case 5:
										return func_470(5, 4);
									case 25:
										return func_470(6, 4);
								}
							}
							else if (iParam1 == 1)
							{
								if (iParam2 == 4)
								{
									Var0 = { 983.0035f, -6752.285f, 58.2287f };
									Var0.f_3 = 160f;
									return Var0;
								}
							}
							Jump @1490; //curOff = 1117
							if (iParam1 == 0)
							{
								switch (iParam2)
								{
									case 0:
										return func_470(0, 5);
									case 1:
										return func_470(1, 5);
									case 2:
										return func_470(2, 5);
									case 3:
										return func_470(3, 5);
									case 4:
										return func_470(4, 5);
									case 5:
										return func_470(5, 5);
									case 25:
										return func_470(6, 5);
								}
							}
							else if (iParam1 == 1)
							{
								switch (iParam2)
								{
									case 1:
										return func_471(5, 1);
								}
							}
							Jump @1490; //curOff = 1295
							if (iParam1 == 0)
							{
								Var0 = { 997.4346f, -6753.405f, 63.098f };
								Var0.f_3 = 0f;
								return Var0;
							}
							else if (iParam1 == 1)
							{
								Var0 = { 991.7f, -6784.3f, 41.1f };
								Var0.f_3 = 0f;
								return Var0;
							}
							Jump @1490; //curOff = 1375
							if (iParam1 == 0)
							{
								Var0 = { 997.5873f, -6753.46f, 63.097f };
								Var0.f_3 = 0f;
								return Var0;
							}
							else if (iParam1 == 1)
							{
								Var0 = { 991.3f, -6784.3f, 41.1f };
								Var0.f_3 = 0f;
								return Var0;
							}
							Jump @1490; //curOff = 1455
							Var0 = { 973.4623f, -6762.983f, 42.8681f };
							return Var0;
						}
						if (iParam1 == 0)
						{
							switch (iParam0)
							{
								case 12:
									return func_470(7, 0);
								case 13:
								case 14:
								case 15:
								case 19:
								case 20:
								case 21:
									Var0 = { 964.6f, -6845.1f, 48.7f };
									Var0.f_3 = 8f;
									return Var0;
								case 16:
								case 17:
								case 18:
								case 22:
								case 23:
								case 24:
								case 25:
								case 26:
									Var0 = { 929.6f, -6835.8f, 42.1f };
									Var0.f_3 = -8.4f;
									return Var0;
								case 27:
									if (iParam2 == 4)
									{
										Var0 = { 988.4f, -6725f, 53.8f };
										Var0.f_3 = 0f;
										return Var0;
									}
									else
									{
										return func_471(1, 0);
									}
									break;
								case 28:
									if (iParam2 == 4)
									{
										Var0 = { 995.7f, -6719.8f, 57.4f };
										Var0.f_3 = 0f;
										return Var0;
									}
									else
									{
										return func_471(1, 1);
									}
									break;
								case 29:
									if (iParam2 == 4)
									{
										Var0 = { 997.8f, -6721.5f, 58.2f };
										Var0.f_3 = 0f;
										return Var0;
									}
									else
									{
										return func_471(1, 2);
									}
									break;
								case 30:
									if (iParam2 == 4)
									{
										Var0 = { 994.6f, -6726.7f, 57.6f };
										Var0.f_3 = 0f;
										return Var0;
									}
									else
									{
										return func_471(1, 3);
									}
									break;
								case 31:
									return func_471(1, 4);
								case 32:
									return func_471(1, 5);
								case 33:
									return func_471(1, 6);
								case 34:
									return func_471(1, 7);
								case 35:
									return func_471(1, 8);
								case 36:
									return func_471(1, 9);
								case 37:
									return func_471(1, 10);
								case 38:
									return func_471(1, 11);
								case 39:
									Var0 = { 979.8356f, -6800.87f, 49.0452f };
									Var0.f_3 = 1f;
									return Var0;
								case 40:
									Var0 = { 975.1305f, -6797.565f, 49.0234f };
									Var0.f_3 = 1f;
									return Var0;
								case 41:
									Var0 = { 979.5542f, -6804.867f, 49.1594f };
									Var0.f_3 = 1f;
									return Var0;
								case 42:
									return func_471(2, 0);
								case 43:
									return func_471(2, 1);
								case 44:
									return func_471(2, 2);
								case 45:
									return func_471(2, 3);
								case 46:
									return func_471(2, 4);
								case 47:
									return func_471(2, 5);
								case 48:
									return func_471(2, 6);
								case 49:
									return func_471(2, 7);
								case 50:
									return func_471(2, 8);
								case 51:
									return func_471(2, 9);
								case 52:
									return func_471(2, 10);
								case 53:
									return func_471(2, 11);
								case 54:
									return func_471(2, 12);
								case 55:
									return func_471(2, 13);
								case 56:
									return func_471(2, 14);
								case 63:
									Var0 = { 964.6403f, -6817.615f, 49.6181f };
									Var0.f_3 = 340f;
									return Var0;
								case 64:
									Var0 = { 931.0511f, -6830.742f, 41.3929f };
									Var0.f_3 = 322f;
									return Var0;
								case 65:
									Var0 = { 929.4081f, -6835.325f, 40.6164f };
									Var0.f_3 = 322f;
									return Var0;
								case 66:
									Var0 = { 986.6166f, -6794.934f, 42.4165f };
									Var0.f_3 = 8.5f;
									return Var0;
								case 67:
									Var0 = { 964.6956f, -6847.298f, 46.623f };
									Var0.f_3 = 358.8f;
									return Var0;
								case 68:
									Var0 = { 931.9405f, -6794.167f, 39.9855f };
									Var0.f_3 = 242.5f;
									return Var0;
								case 69:
									Var0 = { 964.5f, -6845.1f, 48.9f };
									Var0.f_3 = -2.2f;
									return Var0;
								case 70:
									Var0 = { 982f, -6806f, 50.1f };
									Var0.f_3 = 65.1f;
									return Var0;
								case 71:
									Var0 = { 967.9f, -6783.2f, 42.1f };
									Var0.f_3 = -8.2f;
									return Var0;
								case 72:
									Var0 = { 2.9f, 11.125f, 4.125f };
									Var0.f_3 = -101.52f;
									return Var0;
								case 73:
									Var0 = { 1.65f, 11.125f, 4.15f };
									Var0.f_3 = -101.52f;
									return Var0;
								case 74:
									Var0 = { 2.65f, 8.55f, 4.15f };
									Var0.f_3 = 91.44f;
									return Var0;
								case 75:
									Var0 = { 3.325f, 10.525f, 1.725f };
									Var0.f_3 = -5.04f;
									return Var0;
								case 76:
									Var0 = { 4.175f, 11.075f, 2.825f };
									Var0.f_3 = 85.68f;
									return Var0;
								case 77:
									Var0 = { 0.725f, -15.7f, 6.99f };
									Var0.f_3 = -101f;
									return Var0;
								case 78:
									Var0 = { -0.1f, -4.025f, 6.99f };
									Var0.f_3 = -101f;
									return Var0;
								case 79:
									Var0 = { 0.425f, 3.45f, 6.99f };
									Var0.f_3 = -101f;
									return Var0;
								case 80:
									Var0 = { 0.425f, 7.85f, 6.99f };
									Var0.f_3 = -101f;
									return Var0;
								case 81:
									Var0 = { 3.7f, -27.775f, 1.475f };
									Var0.f_3 = -76.32f;
									return Var0;
								case 82:
									Var0 = { 1.075f, -37f, 1.475f };
									Var0.f_3 = -51.12f;
									return Var0;
								case 83:
									Var0 = { 3.8f, -4.4f, 5.5f };
									Var0.f_3 = -44.28f;
									return Var0;
								case 84:
									Var0 = { 2.425f, 24.85f, 7.425f };
									Var0.f_3 = -63.72f;
									return Var0;
								case 85:
									Var0 = { 0.65f, 19.975f, 7.025f };
									Var0.f_3 = -70.56f;
									return Var0;
								case 86:
									Var0 = { -0.925f, 16.225f, 7.025f };
									Var0.f_3 = -49.68f;
									return Var0;
								case 87:
									Var0 = { 1.225f, 31.675f, 2.45f };
									Var0.f_3 = -79.2f;
									return Var0;
								case 88:
								case 89:
								case 90:
								case 91:
								case 92:
								case 93:
								case 94:
								case 95:
								case 96:
								case 97:
								case 98:
								case 99:
								case 100:
									Var0 = { func_472(7, 4) };
									return Var0;
								case 60:
									Var0 = { 974.6616f, -6786.675f, 42.3786f };
									Var0.f_3 = 302f;
									return Var0;
								case 61:
									Var0 = { 976.4645f, -6784.712f, 42.2079f };
									Var0.f_3 = 254f;
									return Var0;
								case 62:
									Var0 = { 981.3385f, -6774.654f, 43.4416f };
									Var0.f_3 = 182f;
									return Var0;
								case 57:
								case 58:
								case 59:
									return func_470(9, 8);
							}
						}
						else if (iParam1 == 1)
						{
							switch (iParam0)
							{
								case 27:
									Var0 = { 999.3292f, -6723.043f, 57.3195f };
									Var0.f_3 = 124f;
									return Var0;
								case 28:
									Var0 = { 996.3114f, -6720.552f, 57.0979f };
									Var0.f_3 = 124f;
									return Var0;
								case 29:
									Var0 = { 995.7366f, -6721.829f, 56.3041f };
									Var0.f_3 = 124f;
									return Var0;
								case 30:
									Var0 = { 994.1955f, -6721.881f, 55.4527f };
									Var0.f_3 = 124f;
									return Var0;
								case 31:
									Var0 = { 993.3441f, -6724.098f, 55.0104f };
									Var0.f_3 = 224f;
									return Var0;
								case 32:
									Var0 = { 992.5523f, -6723f, 55.2f };
									Var0.f_3 = 294.5f;
									return Var0;
								case 33:
									Var0 = { 992f, -6724.5f, 55.1f };
									Var0.f_3 = 294.5f;
									return Var0;
								case 34:
									Var0 = { 988.5f, -6761.3f, 53.7f };
									Var0.f_3 = 15.1f;
									return Var0;
								case 35:
									Var0 = { 989f, -6762.8f, 52.8f };
									Var0.f_3 = 15.1f;
									return Var0;
								case 36:
									Var0 = { 975.5f, -6797.8f, 49.8f };
									Var0.f_3 = 1f;
									return Var0;
								case 37:
									Var0 = { 980.1f, -6801.3f, 49.7f };
									Var0.f_3 = 1f;
									return Var0;
								case 38:
									Var0 = { 978.5f, -6804.8f, 49.9f };
									Var0.f_3 = 1f;
									return Var0;
								case 39:
								case 40:
								case 41:
									return func_217(iParam0, 0, iParam2);
								case 63:
									Var0 = { 960f, -6813.2f, 49.1f };
									Var0.f_3 = 5f;
									return Var0;
								case 64:
									Var0 = { 960.4f, -6796.4f, 41.7f };
									Var0.f_3 = 5f;
									return Var0;
								case 65:
									Var0 = { 952.4f, -6799.9f, 41.8f };
									Var0.f_3 = 5f;
									return Var0;
								case 66:
									Var0 = { 971.4f, -6786f, 42.5f };
									Var0.f_3 = 2f;
									return Var0;
								case 67:
									Var0 = { 971.6f, -6801.7f, 49.9f };
									Var0.f_3 = 5f;
									return Var0;
								case 68:
									Var0 = { 957.6f, -6785.7f, 42.1f };
									Var0.f_3 = 5f;
									return Var0;
								case 69:
									Var0 = { 976.5f, -6797.094f, 48.998f };
									Var0.f_3 = 5f;
									return Var0;
								case 70:
									Var0 = { 979.3f, -6800.582f, 49.0485f };
									Var0.f_3 = 5f;
									return Var0;
								case 71:
									Var0 = { 969.202f, -6766.499f, 42.83f };
									Var0.f_3 = -8.2f;
									return Var0;
								case 60:
									Var0 = { 980.5952f, -6780.62f, 42.1988f };
									Var0.f_3 = 2f;
									return Var0;
								case 61:
									Var0 = { 979.6703f, -6783.491f, 42.141f };
									Var0.f_3 = 1f;
									return Var0;
								case 62:
									Var0 = { 979.1167f, -6786.359f, 42.5014f };
									Var0.f_3 = 2f;
									return Var0;
							}
						}
						else if (iParam1 == 2)
						{
							switch (iParam0)
							{
								case 34:
									Var0 = { 985.7f, -6756.5f, 55.4f };
									Var0.f_3 = 0.75f;
									return Var0;
								case 35:
									Var0 = { 987.4f, -6755f, 55.4f };
									Var0.f_3 = 0.75f;
									return Var0;
								case 36:
									Var0 = { 984.1f, -6777.4f, 49.6f };
									Var0.f_3 = 1f;
									return Var0;
								case 37:
									Var0 = { 984.4f, -6785.3f, 49.9f };
									Var0.f_3 = 1f;
									return Var0;
								case 38:
									Var0 = { 980.8f, -6789.3f, 49.6f };
									Var0.f_3 = 1f;
									return Var0;
								case 39:
									Var0 = { 986f, -6779.7f, 49.4f };
									return Var0;
								case 40:
									Var0 = { 983.8f, -6778.2f, 49.4f };
									return Var0;
								case 41:
									Var0 = { 985.2f, -6777.8f, 49.4f };
									return Var0;
							}
						}
						return func_470(0, 0);
					}
				}
			}
			default:
				break;
	}
}

void func_220(int iParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	char[] cVar0[8];
	Global_1572864.f_8 = iParam0;
	Global_1572864.f_9 = iParam9;
	Global_1572864.f_10 = iParam10;
	StringCopy(&cVar0, "INVALID", 8);
	if (__LIB_0__::func_700(iParam0) == 1)
	{
		cVar0 = __LIB_0__::func_631(__LIB_0__::func_909(iParam0));
		TELEMETRY::_TELEMETRY_MISSION_CHECKPOINT(&cVar0, 0, Global_1572864.f_9);
	}
	else if (__LIB_0__::func_700(iParam0) == 8)
	{
		cVar0 = __LIB_0__::func_632(__LIB_0__::func_957(iParam0));
		TELEMETRY::_TELEMETRY_MISSION_CHECKPOINT(&cVar0, 0, Global_1572864.f_9);
	}
	func_476(1, 1);
	__LIB_5__::func_119(1, Param1, Param1.f_3);
	Global_1347394 = { Param5 };
	__LIB_0__::func_868(0);
	__LIB_0__::func_869(0);
	__LIB_0__::func_303(1f);
}

void func_275(var uParam0)
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
		if (func_420(uParam0, 0, uParam0->f_5413, uParam0->f_5413.f_1, uParam0->f_5413.f_2, uParam0->f_5416, 1, 1, 1))
		{
		}
	}
}

bool func_312(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
				func_312(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
						func_312(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_312(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_312(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_312(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_312(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_312(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_312(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
					func_312(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_312(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_312(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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

void func_314()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_637();
	func_638();
	func_639();
	func_640();
	func_641();
	__LIB_1__::func_848();
	__LIB_0__::func_376();
}

void func_315(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	func_644(iParam0, 1, 1, -142743235, 1);
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

void func_353()
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
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_685(&uVar4, &iVar1, &iVar2, &iVar3)))
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

void func_377(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < __LIB_4__::func_525())
	{
		func_724(uParam0, iVar0);
		iVar0++;
	}
}

void func_380(var uParam0)
{
	__LIB_5__::func_476(uParam0, 0, 1, 115111, 115183, 115220, 115517, 116357, "SMG2_INT", 4162, 9);
	__LIB_5__::func_476(uParam0, 1, 2, 116600, 116982, 117088, 117293, 118322, "", 65, 22);
	__LIB_5__::func_476(uParam0, 2, 3, 118734, 118854, 118991, 119372, 120133, "SMG2_MCS2", 67, 22);
	__LIB_5__::func_476(uParam0, 3, 4, 120258, 120706, 121501, 121627, 123673, "", 1048641, 33);
	__LIB_5__::func_476(uParam0, 4, 5, 123863, 124029, 124124, 124306, 125643, "SMG2_MCS3", 4163, 14);
	__LIB_5__::func_476(uParam0, 5, 25, 125725, 125787, 125991, 126302, 127771, "SMG2_MCS4", 4163, 36);
	__LIB_5__::func_476(uParam0, 25, 26, 127857, 128066, 128106, 128147, 128171, "SMG2_EXT", 6210, 36);
}

void func_381()
{
	Local_128 = VOLUME::_CREATE_VOLUME_CYLINDER(986.8812f, -6747.955f, 63.088f, 0f, 0f, 0f, 6f, 6f, 1f);
	Local_128.f_1 = VOLUME::_CREATE_VOLUME_BOX(1010.312f, -6743.349f, 61.092f, 0f, 0f, 0f, 70f, 70f, 1f);
	Local_128.f_2 = VOLUME::_CREATE_VOLUME_BOX(1005.621f, -6747.078f, 61.092f, 0f, 0f, 0f, 14f, 14f, 2f);
	Local_128.f_3 = VOLUME::_CREATE_VOLUME_BOX(998.1667f, -6741.533f, 58.806f, 0f, 0f, 24f, 8f, 1f, 3f);
	Local_128.f_4 = VOLUME::_CREATE_VOLUME_CYLINDER(1003.999f, -6745.454f, 65.666f, 0f, 0f, 0f, 30f, 30f, 4f);
	Local_128.f_5 = VOLUME::_CREATE_VOLUME_CYLINDER(1003.999f, -6745.454f, 48.515f, 0f, 0f, 0f, 30f, 30f, 24.5f);
	Local_128.f_6 = VOLUME::_CREATE_VOLUME_CYLINDER(995.0401f, -6744.83f, 63.252f, 0f, 0f, 0f, 1f, 1f, 1f);
	Local_128.f_7 = VOLUME::_CREATE_VOLUME_BOX(995.5923f, -6734.085f, 58.353f, 0f, 0f, 28.00001f, 2f, 1f, 2f);
	Local_128.f_8 = VOLUME::_CREATE_VOLUME_CYLINDER(970.6483f, -6762.404f, 44.62514f, 0f, 0f, 0f, 10f, 10f, 4f);
	Local_128.f_9 = VOLUME::_CREATE_VOLUME_BOX(995.0776f, -6734.198f, 58.338f, 0f, 0f, 26.5f, 6f, 4f, 2f);
	Local_128.f_10 = VOLUME::_CREATE_VOLUME_BOX(987.7475f, -6772.153f, 50.90979f, 0f, 0f, -20f, 175.75f, 1f, 26f);
	Local_128.f_11 = VOLUME::_CREATE_VOLUME_BOX(978.6783f, -6737.511f, 49.96436f, 0f, 0f, 0f, 5f, 2f, 2f);
	Local_128.f_12 = VOLUME::_CREATE_VOLUME_BOX(995.0936f, -6725.802f, 58.37745f, 0f, 0f, -53f, 4f, 2f, 2f);
	Local_128.f_13 = VOLUME::_CREATE_VOLUME_BOX(982.2286f, -6747.604f, 55.88655f, 0f, 0f, 17f, 4f, 2f, 2f);
	Local_128.f_14 = VOLUME::_CREATE_VOLUME_BOX(1005.221f, -6758.105f, 63.006f, 0f, 0f, 27f, 7f, 2f, 2f);
	Local_128.f_15 = VOLUME::_CREATE_VOLUME_BOX(997.0908f, -6725.229f, 59.3432f, 0f, 0f, -55.00005f, 5f, 4f, 4f);
	Local_128.f_16 = VOLUME::_CREATE_VOLUME_BOX(997.559f, -6724.488f, 58.66211f, 0f, 0f, -53.00008f, 5f, 4f, 2f);
	Local_128.f_17 = VOLUME::_CREATE_VOLUME_BOX(953.977f, -6803.308f, 44.564f, 0f, 0f, -14f, 134.5f, 75f, 15f);
	Local_128.f_18 = VOLUME::_CREATE_VOLUME_BOX(953.977f, -6803.308f, 44.564f, 0f, 0f, -14f, 134.5f, 79.5f, 15f);
	Local_128.f_19 = VOLUME::_CREATE_VOLUME_BOX(987.8828f, -6747.916f, 63.094f, 0f, 0f, 26f, 2f, 10f, 2f);
	Local_128.f_20 = VOLUME::_CREATE_VOLUME_BOX(988.9905f, -6747.474f, 62.967f, 0f, 0f, -7.499989f, 4f, 2.5f, 2f);
	Local_128.f_21 = VOLUME::_CREATE_VOLUME_BOX(989.6013f, -6743.229f, 62.967f, 0f, 0f, -7.499989f, 4f, 2.5f, 2f);
	Local_128.f_22 = VOLUME::_CREATE_VOLUME_BOX(993.3568f, -6745.939f, 62.967f, 0f, 0f, -7.499989f, 4f, 7.5f, 1f);
	Local_128.f_23 = VOLUME::_CREATE_VOLUME_BOX(1004.574f, -6743.108f, 58.861f, 0f, 0f, 0f, 1.5f, 1.5f, 3f);
	Local_128.f_24 = VOLUME::_CREATE_VOLUME_CYLINDER(977.0435f, -6796.52f, 52.85955f, 0f, 0f, 0f, 8f, 8f, 4f);
	Local_128.f_25 = VOLUME::_CREATE_VOLUME_CYLINDER(988.6901f, -6751.754f, 66.86861f, 0f, 0f, 0f, 2f, 2f, 2f);
	Local_128.f_26 = VOLUME::_CREATE_VOLUME_CYLINDER(988.6901f, -6751.754f, 66.86861f, 0f, 0f, 0f, 4f, 4f, 2f);
	Local_128.f_27 = VOLUME::_CREATE_VOLUME_BOX(995.8846f, -6745.344f, 63.275f, 0f, 0f, 27.50001f, 23f, 21.75f, 2f);
	Local_128.f_28 = VOLUME::_CREATE_VOLUME_BOX(984.6072f, -6809.112f, 50.629f, 0f, 0f, -20f, 50f, 50f, 4f);
	Local_128.f_29 = VOLUME::_CREATE_VOLUME_BOX(946.6935f, -6804.974f, 40.5917f, 0f, 0f, -20f, 50f, 50f, 10f);
	Local_128.f_30 = VOLUME::_CREATE_VOLUME_BOX(991.4042f, -6762.391f, 50.62873f, 0f, 0f, -20f, 16f, 45f, 4f);
	Local_128.f_31 = VOLUME::_CREATE_VOLUME_BOX(956.6206f, -6768.686f, 40.5917f, 0f, 0f, -20f, 50f, 25f, 10f);
	Local_128.f_32 = VOLUME::_CREATE_VOLUME_BOX(958.5898f, -6731.294f, 42.67224f, 0f, 0f, 0f, 10f, 10f, 10f);
	Local_128.f_33 = VOLUME::_CREATE_VOLUME_BOX(928.7875f, -6780.352f, 42.67224f, 0f, 0f, 0f, 10f, 10f, 10f);
	Local_128.f_34 = VOLUME::_CREATE_VOLUME_BOX(990.6649f, -6745.383f, 63.03f, 0f, 0f, 0f, 14f, 2f, 2f);
	Local_128.f_35 = VOLUME::_CREATE_VOLUME_CYLINDER(995.494f, -6733.289f, 58.816f, 0f, 0f, 0f, 3f, 3f, 2f);
	Local_128.f_36 = VOLUME::_CREATE_VOLUME_CYLINDER(984.5244f, -6752.03f, 56.74602f, 0f, 0f, 0f, 3f, 3f, 2f);
	Local_128.f_37 = VOLUME::_CREATE_VOLUME_BOX(995.7336f, -6747.45f, 63.116f, 0f, 0f, 26f, 14.5f, 25.25f, 2f);
	Local_128.f_38 = VOLUME::_CREATE_VOLUME_BOX(986.647f, -6748.595f, 63.169f, 0f, 0f, 25f, 5f, 10f, 2f);
	Local_128.f_39 = VOLUME::_CREATE_VOLUME_BOX(988.8219f, -6751.059f, 63.082f, 0f, 0f, 114.25f, 1.75f, 2f, 2f);
	Local_128.f_40 = VOLUME::_CREATE_VOLUME_BOX(994.0447f, -6750.739f, 63.082f, 0f, 0f, 65.24999f, 2f, 3f, 2f);
	Local_128.f_41 = VOLUME::_CREATE_VOLUME_BOX(987.0921f, -6747.217f, 63.082f, 0f, 0f, 114.25f, 3f, 2f, 2f);
	Local_128.f_42 = VOLUME::_CREATE_VOLUME_BOX(970.7692f, -6762.384f, 43.55224f, 0f, 0f, 46.75002f, 4f, 7.25f, 1.5f);
	Local_128.f_43 = VOLUME::_CREATE_VOLUME_BOX(957.0116f, -6741.078f, 38.28756f, 0f, 0f, -35.5f, 111f, 220f, 5f);
	Local_128.f_44 = VOLUME::_CREATE_VOLUME_BOX(869.7146f, -6702.047f, 49.07345f, 5E-06f, 90f, -35.5f, 111f, 220f, 5f);
	Local_128.f_45 = VOLUME::_CREATE_VOLUME_BOX(984.9738f, -6740.556f, 56.41362f, 0f, 0f, -28.00001f, 4.25f, 1f, 3f);
	Local_128.f_46 = VOLUME::_CREATE_VOLUME_CYLINDER(977.0435f, -6795.712f, 52.85955f, 0f, 0f, 0f, 6f, 6f, 4f);
	Local_128.f_47 = VOLUME::_CREATE_VOLUME_BOX(988.6495f, -6750.676f, 63.082f, 0f, 0f, 114.25f, 3f, 2f, 2f);
	Local_128.f_48 = VOLUME::_CREATE_VOLUME_BOX(987.3775f, -6747.852f, 63.082f, 0f, 0f, 114.25f, 3f, 2f, 2f);
	Local_128.f_49 = VOLUME::_CREATE_VOLUME_BOX(983.5524f, -6750.572f, 55.73298f, 0f, 0f, 25.49999f, 9.25f, 1f, 4f);
	Local_128.f_50 = VOLUME::_CREATE_VOLUME_BOX(984.3046f, -6801.109f, 49.63131f, 0f, 0f, -21f, 2f, 3f, 2f);
	Local_128.f_51 = VOLUME::_CREATE_VOLUME_BOX(983.4421f, -6806.827f, 49.63131f, 0f, 0f, -21f, 3f, 2f, 2f);
	Local_128.f_52 = VOLUME::_CREATE_VOLUME_BOX(964.8551f, -6799.691f, 51.21522f, 0f, 0f, -21f, 2f, 3f, 2f);
	Local_128.f_53 = VOLUME::_CREATE_VOLUME_BOX(972.8647f, -6797.473f, 51.21522f, 0f, 0f, -21f, 2f, 3f, 2f);
	Local_128.f_54 = VOLUME::_CREATE_VOLUME_BOX(989.2771f, -6799.855f, 44.66362f, 0f, 0f, -21f, 17.75f, 1f, 10f);
	Local_128.f_55 = VOLUME::_CREATE_VOLUME_BOX(968.2204f, -6793.197f, 41.24944f, 0f, 0f, 0f, 80f, 80f, 4f);
	Local_128.f_56 = VOLUME::_CREATE_VOLUME_BOX(999.7899f, -6723.339f, 59.3432f, 0f, 0f, -55.00005f, 5f, 4f, 4f);
	Local_128.f_57 = VOLUME::_CREATE_VOLUME_BOX(995.594f, -6726.319f, 58.7739f, 0f, 0f, 35.75f, 2f, 5.75f, 3f);
	Local_128.f_58 = VOLUME::_CREATE_VOLUME_BOX(990.9879f, -6746.572f, 63.35064f, 0f, 0f, 25f, 7f, 13.75f, 2f);
	Local_128.f_59 = VOLUME::_CREATE_VOLUME_BOX(998.923f, -6722.519f, 57.61636f, 0f, 0f, 35f, 2f, 2.5f, 2f);
	Local_128.f_60 = VOLUME::_CREATE_VOLUME_BOX(1000.719f, -6721.626f, 57.61636f, 0f, 0f, 35f, 2f, 2f, 2f);
	Local_128.f_61 = VOLUME::_CREATE_VOLUME_BOX(1002.365f, -6720.474f, 57.61636f, 0f, 0f, 35f, 2f, 2f, 2f);
	Local_128.f_62 = VOLUME::_CREATE_VOLUME_BOX(1001.765f, -6718.512f, 57.61636f, 0f, 0f, 35f, 2f, 2f, 2f);
	Local_128.f_63 = VOLUME::_CREATE_VOLUME_BOX(999.7093f, -6719.952f, 57.61636f, 0f, 0f, 35f, 2f, 2f, 2f);
	Local_128.f_64 = VOLUME::_CREATE_VOLUME_BOX(998.4943f, -6717.555f, 57.61636f, 0f, 0f, 35f, 2f, 2f, 2f);
	Local_128.f_65 = VOLUME::_CREATE_VOLUME_BOX(980.5853f, -6794.063f, 49.42836f, 0f, 0f, -20f, 2f, 2f, 2f);
	Local_128.f_66 = VOLUME::_CREATE_VOLUME_BOX(986.0196f, -6779.313f, 49.42836f, 0f, 0f, -19.99999f, 2f, 2f, 2f);
	Local_128.f_67 = VOLUME::_CREATE_VOLUME_BOX(983.0923f, -6787.347f, 49.42836f, 0f, 0f, -19.99999f, 2f, 2f, 2f);
	Local_128.f_68 = VOLUME::_CREATE_VOLUME_BOX(987.3464f, -6775.799f, 49.42836f, 0f, 0f, -20f, 2f, 2f, 2f);
	Local_128.f_69 = VOLUME::_CREATE_VOLUME_BOX(982.0007f, -6783.822f, 49.42836f, 0f, 0f, -20f, 2f, 2f, 2f);
	Local_128.f_70 = VOLUME::_CREATE_VOLUME_BOX(991.1345f, -6769.915f, 50.70554f, 0f, 0f, -20f, 2f, 2f, 2f);
	Local_128.f_71 = VOLUME::_CREATE_VOLUME_BOX(957.3954f, -6789.382f, 41.36537f, 0f, 0f, -19.99999f, 6f, 6f, 2f);
	Local_128.f_72 = VOLUME::_CREATE_VOLUME_BOX(972.5629f, -6774.739f, 42.12775f, 0f, 0f, -19.99999f, 6f, 6f, 2f);
	Local_128.f_73 = VOLUME::_CREATE_VOLUME_BOX(970.187f, -6785.585f, 42.12775f, 0f, 0f, -19.99999f, 6f, 6f, 2f);
	Local_128.f_74 = VOLUME::_CREATE_VOLUME_BOX(972.2425f, -6764.342f, 43.31744f, 0f, 0f, -19.99999f, 4f, 4f, 2f);
	Local_128.f_75 = VOLUME::_CREATE_VOLUME_BOX(959.3632f, -6777.973f, 42.12775f, 0f, 0f, -19.99999f, 6f, 6f, 2f);
	Local_128.f_76 = VOLUME::_CREATE_VOLUME_BOX(965.9501f, -6766.709f, 42.12775f, 0f, 0f, -19.99999f, 6f, 6f, 4f);
	Local_128.f_77 = VOLUME::_CREATE_VOLUME_BOX(993.1594f, -6784.04f, 42.00488f, 0f, 0f, -20.75f, 4f, 4f, 3f);
	Local_128.f_78 = VOLUME::_CREATE_VOLUME_BOX(985.8779f, -6788.389f, 42.00488f, 0f, 0f, -20.75f, 4f, 4f, 3f);
	Local_128.f_79 = VOLUME::_CREATE_VOLUME_BOX(987.8315f, -6783.186f, 42.00488f, 0f, 0f, -20.75f, 4f, 4f, 3f);
	Local_128.f_80 = VOLUME::_CREATE_VOLUME_BOX(989.6481f, -6790.066f, 42.00488f, 0f, 0f, -20.75f, 4f, 4f, 3f);
	Local_128.f_81 = VOLUME::_CREATE_VOLUME_BOX(967.4157f, -6781.643f, 42.67744f, 0f, 0f, -20.75f, 4f, 4f, 3f);
	Local_128.f_82 = VOLUME::_CREATE_VOLUME_BOX(968.7173f, -6766.482f, 43.19542f, 0f, 0f, -42.75f, 4f, 4f, 3f);
	Local_128.f_83 = VOLUME::_CREATE_VOLUME_BOX(970.8581f, -6762.545f, 43.19542f, 0f, 0f, -42.75f, 4f, 4f, 3f);
	Local_128.f_84 = VOLUME::_CREATE_VOLUME_BOX(972.1317f, -6768.456f, 43.19542f, 0f, 0f, -42.75f, 4f, 4f, 3f);
	Local_128.f_85 = VOLUME::_CREATE_VOLUME_BOX(998.0346f, -6752.573f, 63.00247f, 0f, 0f, 66.74998f, 2f, 3f, 2f);
	Local_128.f_86 = VOLUME::_CREATE_VOLUME_BOX(990.487f, -6750.782f, 63.082f, 0f, 0f, 114.25f, 1.75f, 2f, 2f);
	Local_128.f_87 = VOLUME::_CREATE_VOLUME_BOX(987.1265f, -6747.957f, 63.082f, 0f, 0f, 25.74999f, 2f, 3f, 2f);
	Local_128.f_88 = VOLUME::_CREATE_VOLUME_BOX(997.8356f, -6752.792f, 63.082f, 0f, 0f, 65.49998f, 2f, 3f, 2f);
	Local_128.f_89 = VOLUME::_CREATE_VOLUME_BOX(982.9453f, -6781.433f, 49.88049f, 0f, 0f, -19.25f, 2f, 4f, 2f);
	Local_128.f_90 = VOLUME::_CREATE_VOLUME_BOX(987.1163f, -6776.57f, 49.88049f, 0f, 0f, -19.25f, 2f, 4f, 2f);
	Local_128.f_91 = VOLUME::_CREATE_VOLUME_BOX(985.471f, -6780.917f, 49.88049f, 0f, 0f, -20f, 2.2f, 5f, 2f);
	Local_128.f_92 = VOLUME::_CREATE_VOLUME_BOX(984.604f, -6777.458f, 49.88049f, 0f, 0f, -19.25f, 2.5f, 4f, 2f);
	Local_128.f_93 = VOLUME::_CREATE_VOLUME_BOX(978.9535f, -6795.317f, 49.90951f, 0f, 0f, -46.50001f, 5f, 1f, 2f);
	Local_128.f_94 = VOLUME::_CREATE_VOLUME_BOX(965.3969f, -6774.836f, 42.29731f, 0f, 0f, -18.75f, 21.25f, 21f, 4f);
	Local_128.f_95 = VOLUME::_CREATE_VOLUME_BOX(992.2004f, -6747.912f, 63.14833f, 0f, 0f, 0f, 7.75f, 1f, 2f);
	Local_128.f_96 = VOLUME::_CREATE_VOLUME_BOX(992.0494f, -6785.894f, 42.29731f, 0f, 0f, -18.75f, 8.5f, 9f, 4f);
}

void func_382()
{
	int iVar0;
	Local_2262.f_5 = { 995.3375f, -6733.4f, 61.592f };
	Local_424[1 /*8*/] = Global_35;
	iVar0 = 0;
	while (iVar0 <= 21)
	{
		vLocal_243[iVar0 /*3*/].f_1 = 1;
		iVar0++;
	}
	iVar0 = 22;
	while (iVar0 <= 32)
	{
		vLocal_243[iVar0 /*3*/].f_1 = 2;
		iVar0++;
	}
	iVar0 = 40;
	while (iVar0 <= 59)
	{
		vLocal_243[iVar0 /*3*/].f_1 = 4;
		iVar0++;
	}
	iVar0 = 33;
	while (iVar0 <= 39)
	{
		vLocal_243[iVar0 /*3*/].f_1 = 3;
		iVar0++;
	}
	Local_1700.f_3[0 /*33*/].f_5 = { 6.32f, 17.16f, 3.88f };
	Local_1700.f_3[0 /*33*/].f_8 = { 0f, 0f, 90f };
	Local_1700.f_3[1 /*33*/].f_5 = { 6.32f, 11.24f, 3.88f };
	Local_1700.f_3[1 /*33*/].f_8 = { 0f, 0f, 90f };
	Local_1700.f_3[2 /*33*/].f_5 = { 6.32f, 5.74f, 3.88f };
	Local_1700.f_3[2 /*33*/].f_8 = { 0f, 0f, 90f };
	Local_1700.f_3[3 /*33*/].f_5 = { -6.32f, 17.16f, 3.88f };
	Local_1700.f_3[3 /*33*/].f_8 = { 0f, 0f, 270f };
	Local_1700.f_3[4 /*33*/].f_5 = { -6.32f, 11.24f, 3.88f };
	Local_1700.f_3[4 /*33*/].f_8 = { 0f, 0f, 270f };
	Local_1700.f_3[5 /*33*/].f_5 = { -6.32f, 5.56f, 3.88f };
	Local_1700.f_3[5 /*33*/].f_8 = { 0f, 0f, 270f };
	Local_1700.f_3[6 /*33*/].f_5 = { -6.32f, -0.04f, 3.88f };
	Local_1700.f_3[6 /*33*/].f_8 = { 0f, 0f, 270f };
	Local_1700.f_3[7 /*33*/].f_5 = { -6.32f, -5.56f, 3.88f };
	Local_1700.f_3[7 /*33*/].f_8 = { 0f, 0f, 270f };
	Local_1700.f_3[8 /*33*/].f_5 = { -6.32f, -5.76f, 3.88f };
	Local_1700.f_3[8 /*33*/].f_8 = { 0f, 0f, 270f };
	Local_1700.f_3[9 /*33*/].f_5 = { -6.32f, -11.36f, 3.88f };
	Local_1700.f_3[9 /*33*/].f_8 = { 0f, 0f, 270f };
	Local_1700.f_3[10 /*33*/].f_5 = { -6.32f, -16.92f, 3.88f };
	Local_1700.f_3[10 /*33*/].f_8 = { 0f, 0f, 270f };
	Local_1498[0 /*8*/].f_1 = 0.05f;
	Local_1498[1 /*8*/].f_1 = 0.05f;
	Local_1498[2 /*8*/].f_1 = 0.05f;
	Local_1498[2 /*8*/].f_7 = 1f;
	Local_1465[0 /*7*/] = 14;
	Local_1465[0 /*7*/].f_6 = 35;
	Local_1465[1 /*7*/] = 15;
	Local_1465[1 /*7*/].f_6 = 8;
	Local_1465[3 /*7*/] = 16;
	Local_1465[3 /*7*/].f_6 = 4;
	Local_1265[0 /*13*/] = 4;
	Local_1265[0 /*13*/].f_5 = 0f;
	Local_1265[0 /*13*/].f_11 = 18;
	Local_1265[0 /*13*/].f_12 = 35;
	Local_1265[1 /*13*/] = 5;
	Local_1265[1 /*13*/].f_5 = 30f;
	Local_1265[1 /*13*/].f_8 = { func_761(1, 0, 1) };
	Local_1265[1 /*13*/].f_6 = 30f;
	Local_1265[1 /*13*/].f_11 = 20;
	Local_1265[1 /*13*/].f_12 = 1;
	Local_1265[2 /*13*/] = 4;
	Local_1265[2 /*13*/].f_5 = 30f;
	Local_1265[2 /*13*/].f_11 = 37;
	Local_1265[2 /*13*/].f_12 = 2;
	Local_1265[3 /*13*/] = 6;
	Local_1265[3 /*13*/].f_5 = 0f;
	Local_1265[3 /*13*/].f_6 = 20f;
	Local_1265[3 /*13*/].f_11 = 38;
	Local_1265[3 /*13*/].f_12 = 2;
	Local_1265[4 /*13*/] = 2;
	Local_1265[4 /*13*/].f_6 = 20f;
	Local_1265[4 /*13*/].f_11 = 55;
	Local_1265[4 /*13*/].f_12 = 4;
	Local_1265[5 /*13*/] = 4;
	Local_1265[5 /*13*/].f_5 = 20f;
	Local_1265[5 /*13*/].f_11 = 57;
	Local_1265[5 /*13*/].f_12 = 4;
	Local_1265[6 /*13*/] = 4;
	Local_1265[6 /*13*/].f_5 = 60f;
	Local_1265[6 /*13*/].f_11 = 74;
	Local_1265[6 /*13*/].f_12 = 8;
	Local_1265[7 /*13*/] = 4;
	Local_1265[7 /*13*/].f_5 = 0f;
	Local_1265[7 /*13*/].f_11 = 75;
	Local_1265[7 /*13*/].f_12 = 8;
	Local_1265[8 /*13*/] = 4;
	Local_1265[8 /*13*/].f_5 = 0f;
	Local_1265[8 /*13*/].f_11 = 76;
	Local_1265[8 /*13*/].f_12 = 8;
	Local_1265[10 /*13*/] = 4;
	Local_1265[10 /*13*/].f_5 = 0f;
	Local_1265[10 /*13*/].f_11 = 91;
	Local_1265[10 /*13*/].f_12 = 8;
	Local_1265[9 /*13*/] = 4;
	Local_1265[9 /*13*/].f_5 = 0f;
	Local_1265[9 /*13*/].f_11 = 92;
	Local_1265[9 /*13*/].f_12 = 8;
	Local_1265[11 /*13*/] = 2;
	Local_1265[11 /*13*/].f_6 = 20f;
	Local_1265[11 /*13*/].f_11 = 105;
	Local_1265[11 /*13*/].f_12 = 16;
	Local_1265[12 /*13*/] = 4;
	Local_1265[12 /*13*/].f_6 = 0f;
	Local_1265[12 /*13*/].f_11 = 106;
	Local_1265[12 /*13*/].f_12 = 16;
	Local_1265[13 /*13*/] = 4;
	Local_1265[13 /*13*/].f_5 = 0f;
	Local_1265[13 /*13*/].f_11 = 122;
	Local_1265[13 /*13*/].f_12 = 32;
}

void func_383()
{
	Local_2328[2 /*5*/].f_2 = 1;
	Local_2328[3 /*5*/].f_2 = 1;
}

int func_384(var uParam0)
{
	if (__LIB_4__::func_937(uParam0, 8) && !__LIB_4__::func_948(uParam0, 4))
	{
		return 0;
	}
	if (((__LIB_4__::func_939(uParam0) == 0 && !__LIB_4__::func_948(uParam0, 4)) && !__LIB_4__::func_951(uParam0, 1)) && !__LIB_4__::func_951(uParam0, 2))
	{
		return 0;
	}
	if (__LIB_4__::func_948(uParam0, 4) && !__LIB_4__::func_951(uParam0, 2))
	{
		return 1;
	}
	return 2;
}

void func_385(int iParam0, bool bParam1)
{
	struct<4> Var0;
	if ((bParam1 && __LIB_0__::func_1(uLocal_1699, __LIB_0__::func_470(iParam0))) || (!bParam1 && !__LIB_0__::func_1(uLocal_1699, __LIB_0__::func_470(iParam0))))
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			Var0 = { 1000.131f, -6745.501f, 65.8722f };
			Var0.f_3 = 1f;
			if (bParam1)
			{
				ENTITY::CREATE_MODEL_HIDE(Var0, Var0.f_3, joaat("P_PALLET02X"), true);
				ENTITY::CREATE_MODEL_HIDE(985.2634f, -6751.113f, 54.809f, 1f, joaat("P_BARREL05B"), true);
			}
			else
			{
				ENTITY::REMOVE_MODEL_HIDE(Var0, Var0.f_3, joaat("P_PALLET02X"), 0);
				ENTITY::REMOVE_MODEL_HIDE(985.2634f, -6751.113f, 54.809f, 1f, joaat("P_BARREL05B"), 0);
			}
			Var0 = { 999.7872f, -6744.081f, 57.3144f };
			Var0.f_3 = 0.2f;
			if (bParam1)
			{
				ENTITY::CREATE_MODEL_HIDE(Var0, Var0.f_3, joaat("P_CHAIR02X"), true);
			}
			else
			{
				ENTITY::REMOVE_MODEL_HIDE(Var0, Var0.f_3, joaat("P_CHAIR02X"), 1);
			}
			break;
		case 1:
			Var0 = { 1000.359f, -6740.462f, 58.1143f };
			Var0.f_3 = 1f;
			if (bParam1)
			{
				ENTITY::CREATE_MODEL_HIDE(Var0, Var0.f_3, joaat("S_INV_HIGHVLCTY_RIFLEAMMO01X"), true);
			}
			else
			{
				ENTITY::REMOVE_MODEL_HIDE(Var0, Var0.f_3, joaat("S_INV_HIGHVLCTY_RIFLEAMMO01X"), 0);
			}
			break;
		case 2:
			Var0 = { 999.8f, -6745.6f, 62.5f };
			Var0.f_3 = 5f;
			if (bParam1)
			{
				ENTITY::CREATE_MODEL_HIDE(Var0, Var0.f_3, func_437(11), true);
				ENTITY::CREATE_MODEL_HIDE(Var0, Var0.f_3, func_437(12), true);
			}
			else
			{
				ENTITY::REMOVE_MODEL_HIDE(Var0, Var0.f_3, func_437(11), 1);
				ENTITY::REMOVE_MODEL_HIDE(Var0, Var0.f_3, func_437(12), 1);
			}
			break;
	}
	if (bParam1)
	{
		__LIB_1__::func_336(&uLocal_1699, __LIB_0__::func_470(iParam0));
	}
	else
	{
		__LIB_0__::func_516(&uLocal_1699, __LIB_0__::func_470(iParam0));
	}
}

void func_388(var uParam0)
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
		func_767(&(uParam0->f_860), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_4__::func_535(uParam0, 0f, 0f, 0f);
		func_769(uParam0);
		func_770(uParam0);
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

int func_390(vector3 vParam0, var uParam3)
{
	int iVar0;
	if (MISC::_0x1B065A2BF7953815(0) != 1)
	{
		func_476(0, 1);
	}
	else
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_399(Global_35, 0, 2, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		iVar0 = func_778(0, 0);
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

bool func_419(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5)
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
	if (func_828(uParam0, iVar0, &uVar1, bParam1, vVar2.x, vVar2.y, vVar2.z, 0, bParam2, iParam3, bParam4, iParam5, 1, 0))
	{
		uParam0->f_5408 = uVar1;
		return true;
	}
	return false;
}

bool func_420(var uParam0, bool bParam1, var uParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, int iParam8)
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
						func_836(iVar13, vVar14, fParam5, 2, 1073741824 /* Float: 2f */);
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

void func_421(var uParam0)
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
		if (func_838(&(uParam0->f_609), uParam0->f_607))
		{
			__LIB_4__::func_945(uParam0, 32);
		}
	}
}

void func_422(var uParam0)
{
	struct<4> Var0;
	if (!__LIB_4__::func_948(uParam0, 128))
	{
		if (__LIB_4__::func_948(uParam0, 16384))
		{
			__LIB_5__::func_284(uParam0);
			if (__LIB_16__::func_779(uParam0))
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
			if (func_842(uParam0, Var0))
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

bool func_424(var uParam0)
{
	int iVar0;
	char[] cVar1[8];
	iVar0 = 1;
	if (!__LIB_9__::func_447(uParam0))
	{
		iVar0 = 0;
	}
	if (!func_419(uParam0, __LIB_4__::func_951(uParam0, 3), !__LIB_4__::func_937(uParam0, 2097152), uParam0->f_5410, !__LIB_4__::func_937(uParam0, 32), 0))
	{
		iVar0 = 0;
	}
	if (!func_420(uParam0, 1, uParam0->f_5413, uParam0->f_5413.f_1, uParam0->f_5413.f_2, uParam0->f_5416, 1, 1, 1))
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
		if (!__LIB_0__::func_75(&(uParam0->f_13115)))
		{
			__LIB_1__::func_283(&(uParam0->f_13115), 0);
		}
		if (__LIB_0__::func_265(&(uParam0->f_13115)) < 30f)
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

bool func_426(var uParam0)
{
	if (func_164(0))
	{
		func_178(0);
	}
	if (!func_164(1))
	{
		if (!__LIB_4__::func_545())
		{
			__LIB_4__::func_736();
			func_849(1);
		}
		else
		{
			return false;
		}
	}
	if (!func_164(4))
	{
		func_850();
		func_849(4);
	}
	if (!func_164(3))
	{
		if (func_851(__LIB_4__::func_939(uParam0)))
		{
			func_849(3);
		}
		else
		{
			return false;
		}
	}
	if (!func_852(uParam0))
	{
		return false;
	}
	if (__LIB_4__::func_939(uParam0) == 0 && !Local_2328[0 /*5*/].f_1 == 8)
	{
		func_853(0);
		if (!Local_2328[0 /*5*/].f_1 == 8)
		{
			return false;
		}
	}
	func_854(uParam0);
	if (func_855(uParam0) && func_856(uParam0, 12, 12, 3))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_424[12 /*8*/]) && !ENTITY::IS_ENTITY_DEAD(Local_1700.f_1))
		{
			if (!PED::IS_PED_IN_VEHICLE(Local_424[12 /*8*/], Local_1700.f_1, false))
			{
				PED::SET_PED_INTO_VEHICLE(Local_424[12 /*8*/], Local_1700.f_1, -1);
			}
		}
	}
	else
	{
		return false;
	}
	if (!func_857(uParam0))
	{
		return false;
	}
	func_385(0, 1);
	PATHFIND::SET_ROADS_IN_AREA(455.4888f, -7358.837f, -170.5122f, 1558.742f, -6413.559f, 117.7062f, 0, 0, 0);
	func_166(1);
	STREAMING::REQUEST_PTFX_ASSET();
	func_176(__LIB_4__::func_939(uParam0));
	MISC::WATER_OVERRIDE_SET_SHOREWAVEAMPLITUDE(0f);
	MISC::WATER_OVERRIDE_SET_OCEANWAVEMAXAMPLITUDE(0f);
	func_858(0, 0);
	func_858(1, 0);
	func_858(2, 0);
	func_858(3, 0);
	__LIB_5__::func_256(uParam0, 144110);
	__LIB_5__::func_257(uParam0, 144317);
	func_863(3);
	if (!__LIB_4__::func_939(uParam0) == 0)
	{
		func_864(uParam0);
	}
	if (func_384(uParam0) == 1)
	{
		__LIB_0__::func_489(0, 0);
	}
	if (__LIB_0__::func_13(32768))
	{
		__LIB_4__::func_7(Global_35, __LIB_3__::func_672(6291456, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
	}
	func_312(joaat("CONSUMABLE_MEDICINE"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
	func_312(joaat("CONSUMABLE_POTENT_SNAKE_OIL"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
	return true;
}

bool func_428(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	func_867(uParam0);
	__LIB_10__::func_929(uParam0);
	iVar0 = __LIB_4__::func_939(uParam0);
	iVar1 = __LIB_5__::func_475(uParam0);
	iVar2 = __LIB_5__::func_279(uParam0, iVar0);
	if (__LIB_4__::func_937(uParam0, 2097152))
	{
		if (iVar2 == 7 || iVar2 < 3)
		{
			__LIB_16__::func_779(uParam0);
		}
	}
	__LIB_5__::func_477(uParam0);
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
		func_422(uParam0);
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
					__LIB_5__::func_342(uParam0);
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
				if (__LIB_9__::func_98(uParam0))
				{
					if (__LIB_4__::func_937(uParam0, 4))
					{
						__LIB_4__::func_969(uParam0, 4);
					}
					__LIB_5__::func_286(uParam0, iVar0, 2);
				}
			}
			else if (__LIB_5__::func_287(uParam0) >= uParam0->f_13144)
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
					if (func_884(uParam0, iVar0, iVar1))
					{
						__LIB_5__::func_286(uParam0, iVar0, 5);
					}
				}
				else
				{
					__LIB_5__::func_482(uParam0);
					__LIB_5__::func_286(uParam0, iVar0, 3);
					if (func_886(uParam0, iVar0))
					{
						__LIB_5__::func_286(uParam0, iVar0, 4);
						if (func_884(uParam0, iVar0, iVar1))
						{
							__LIB_5__::func_286(uParam0, iVar0, 5);
						}
					}
				}
			}
			else if (__LIB_5__::func_52(uParam0))
			{
				func_886(uParam0, iVar0);
			}
			break;
		case 3:
			if (func_886(uParam0, iVar0))
			{
				__LIB_5__::func_286(uParam0, iVar0, 4);
				if (func_884(uParam0, iVar0, iVar1))
				{
					__LIB_5__::func_286(uParam0, iVar0, 5);
				}
			}
			break;
		case 4:
			if (func_884(uParam0, iVar0, iVar1))
			{
				__LIB_5__::func_286(uParam0, iVar0, 5);
			}
			break;
		case 5:
			if (!__LIB_0__::func_2() == 0)
			{
				__LIB_5__::func_288(uParam0);
				__LIB_10__::func_969(uParam0, iVar0);
				__LIB_5__::func_289(uParam0);
				__LIB_9__::func_456(uParam0);
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
					__LIB_5__::func_582(uParam0, iVar1);
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
						func_36(uParam0, func_34(iVar0), func_34(iVar1), iVar0, iVar1);
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
				__LIB_10__::func_969(uParam0, iVar0);
				__LIB_5__::func_289(uParam0);
				__LIB_9__::func_456(uParam0);
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
					__LIB_9__::func_305(uParam0, __LIB_4__::func_939(uParam0));
				}
				__LIB_5__::func_582(uParam0, iVar1);
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

int func_433(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 0;
		case 4:
			return 6;
		case 5:
			return 3;
	}
	return -1;
}

void func_435(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	iVar0 = iParam1;
	while (iVar0 <= iParam2)
	{
		func_910(uParam0, iVar0, 0);
		iVar0++;
	}
}

void func_436(int iParam0)
{
	if (!vLocal_243[iParam0 /*3*/] == 3)
	{
		return;
	}
	if (iParam0 == -1)
	{
		return;
	}
	vLocal_243[iParam0 /*3*/] = 4;
}

int func_437(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("CS_DUTCH");
		case 1:
			return joaat("CS_MICAHBELL");
		case 2:
			return joaat("CS_BILLWILLIAMSON");
		case 3:
			return joaat("CS_HERCULE");
		case 4:
			return joaat("CS_FRENCHMAN_01");
		case 5:
			return joaat("A_C_SONGBIRD_01");
		case 6:
			return joaat("MSP_SMUGGLER2_MALES_01");
		case 7:
			return joaat("S_M_M_FUSSARHENCHMAN_01");
		case 8:
			return joaat("HOTCHKISS_CANNON");
		case 9:
			return joaat("SMUGGLER02");
		case 10:
			return joaat("ROWBOAT");
		case 11:
			return joaat("P_BARSTOOL01X");
		case 12:
			return joaat("P_CHAIR02X");
		case 13:
			return joaat("S_SHELL_RIFLE");
		case 14:
			return joaat("P_LANTERN09XINT");
		case 15:
			return joaat("P_CANNONBALL01X");
		case 16:
			return joaat("P_AMMO_BOX_001");
		case 18:
			return joaat("S_INV_USED_RIFLEAMMO01X");
		case 19:
			return joaat("P_AMMOBOXLANCASTER02X");
		case 20:
			return joaat("P_CRATE012AX");
		case 17:
			return joaat("P_BOXSMLAMMO01X");
		case 21:
			return joaat("P_CRATECONF01X");
	}
	return 0;
}

char* func_438(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return "smg2_s1_asstline";
		case 23:
			return "smg2_fussars_ship";
		case 24:
			return "smg2_s3_through_fort";
		case 25:
			return "smg2_cme3";
		case 26:
			return "smg2_s4_down_stairs";
		case 27:
			return "smg2_s3_wave2_rowboat0";
		case 28:
			return "smg2_s3_wave2_rowboat1";
		case 29:
			return "smg2_s3_wave2_rowboat2";
		case 30:
			return "smg2_s3_wave2_rowboat3";
		case 31:
			return "smg2_s3_wave2_rowboat4";
		case 32:
			return "smg2_s5_up_fort";
	}
	return "";
}

int func_439(int iParam0)
{
	switch (iParam0)
	{
		case 33:
			return iLocal_1452[0];
		case 35:
			return iLocal_1452[1];
		case 34:
			return iLocal_1452[2];
		case 36:
			return iLocal_1452[5];
		case 37:
			return iLocal_1452[6];
		case 38:
			return iLocal_1452[3];
		case 39:
			return iLocal_1452[4];
	}
	return 0;
}

char* func_440(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 40:
			if (bParam1)
			{
				return "AI_COMBAT@GESTURES@BILL@OVERTHERE@2H";
			}
			else
			{
				return "0";
			}
			break;
		case 41:
			if (bParam1)
			{
				return "AI_COMBAT@GESTURES@COWBOY@GENERIC@OVERTHERE@2H";
			}
			else
			{
				return "0";
			}
			break;
		case 42:
			if (bParam1)
			{
				return "ai_combat@gestures@military@generic@overthere@2h";
			}
			else
			{
				return "0";
			}
			break;
		case 43:
			if (bParam1)
			{
				return "AI_COMBAT@REPOSITION@COWBOY@GENERIC@HIGH_INTENSITY@RELOAD@STATIC@2H";
			}
			else
			{
				return "static_01";
			}
			break;
		case 44:
			if (bParam1)
			{
				return "AI_COMBAT@GESTURES@COWBOY@GENERIC@BECKON@2H";
			}
			else
			{
				return "-180";
			}
			break;
		case 45:
			if (bParam1)
			{
				return "ai_gestures@gen_male@standing@SPEAKER";
			}
			else
			{
				return "neutral_get_attention_r_003";
			}
			break;
		case 46:
			if (bParam1)
			{
				return "AI_COMBAT@AIM_SWEEPS@COWBOY@GENERIC@BASE@DUAL";
			}
			else
			{
				return "aim_med_0";
			}
			break;
		case 47:
			if (bParam1)
			{
				return "AI_COMBAT@GESTURES@COWBOY@GENERIC@BECKON@DUAL";
			}
			else
			{
				return "180";
			}
			break;
		case 48:
			if (bParam1)
			{
				return "AI_COMBAT@GESTURES@AMBIENT@GENERIC@BECKON@2H";
			}
			else
			{
				return "0";
			}
			break;
		case 49:
			if (bParam1)
			{
				return "ai_combat@gestures@military_crouched@beckon@2h";
			}
			else
			{
				return "0";
			}
			break;
		case 50:
			if (bParam1)
			{
				return "ai_combat@gestures@military_crouched@generic@overthere@2h";
			}
			else
			{
				return "-180";
			}
			break;
		case 51:
			if (bParam1)
			{
				return "ai_combat@gestures@military@overthere@2h";
			}
			else
			{
				return "-180";
			}
			break;
		case 52:
			if (bParam1)
			{
				return "ai_react@breakouts@gen_male@stand@feet_together@generic@quick";
			}
			else
			{
				return "breakout_quick_left";
			}
			break;
		case 53:
			if (bParam1)
			{
				return "ai_react@male_stand@BIG_INTRO@FORWARD";
			}
			else
			{
				return "reaction_forward_big_intro_a";
			}
			break;
		case 54:
			if (bParam1)
			{
				return "AI_COMBAT@AIM_SWEEPS_UNDER_FIRE@AMBIENT@GENERIC@BASE@2H";
			}
			else
			{
				return "aim_med_0";
			}
			break;
		case 55:
			if (bParam1)
			{
				return "ai_combat@bullet_flinches@military@generic@base@2h";
			}
			else
			{
				return "frontleft1";
			}
			break;
		case 56:
			if (bParam1)
			{
				return "ai_combat@bullet_flinches@military@generic@base@2h";
			}
			else
			{
				return "frontright1";
			}
			break;
		case 57:
			if (bParam1)
			{
				return "ai_combat@bullet_flinches@military@generic@base@2h";
			}
			else
			{
				return "overhead1";
			}
			break;
		case 58:
			if (bParam1)
			{
				return "AI_DAMAGE@DEAD@BASE";
			}
			else
			{
				return "dead_a";
			}
			break;
		case 59:
			if (bParam1)
			{
				return "AI_DAMAGE@DEAD@BASE";
			}
			else
			{
				return "dead_d";
			}
			break;
	}
	return "";
}

void func_441(int iParam0)
{
	if (!CAM::DOES_CAM_EXIST(iLocal_1494[iParam0]))
	{
		return;
	}
	if (CAM::IS_CAM_ACTIVE(iLocal_1494[iParam0]))
	{
		CAM::SET_CAM_ACTIVE(iLocal_1494[iParam0], false);
	}
	if (CAM::IS_CAM_SHAKING(iLocal_1494[iParam0]))
	{
		CAM::STOP_CAM_SHAKING(iLocal_1494[iParam0], true);
	}
	CAM::DESTROY_CAM(iLocal_1494[iParam0], false);
}

void func_443(int iParam0)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_2328[iParam0 /*5*/]) && ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(Local_2328[iParam0 /*5*/]))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(Local_2328[iParam0 /*5*/]);
	}
	Local_2328[iParam0 /*5*/].f_1 = 0;
}

struct<4> func_470(int iParam0, int iParam1)
{
	return func_927(iParam0, iParam1);
}

struct<4> func_471(int iParam0, int iParam1)
{
	return func_928(iParam0, iParam1);
}

Vector3 func_472(int iParam0, int iParam1)
{
	return func_929(iParam0, iParam1);
}

void func_476(int iParam0, bool bParam1)
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	if (iParam0 == 0 && __LIB_0__::func_13(32768))
	{
		return;
	}
	if (!__LIB_0__::func_13(32768))
	{
		func_930(1, bParam1);
	}
	MISC::_QUEUE_SAVEGAME_OPERATION(iParam0);
	MISC::_COPY_MEMORY(&(Global_2621440[iParam0 /*12066*/]), &Global_40, 12066);
	MISC::_COPY_MEMORY(&(Global_2645573[iParam0 /*5398*/]), &Global_12106, 5398);
	MISC::_COPY_MEMORY(&(Global_2656370[iParam0 /*3206*/]), &Global_17504, 3206);
	MISC::_COPY_MEMORY(&(Global_2662783[iParam0 /*2408*/]), &Global_20710, 2408);
	MISC::_COPY_MEMORY(&(Global_2667600[iParam0 /*1769*/]), &Global_23118, 1769);
	MISC::_COPY_MEMORY(&(Global_2671139[iParam0 /*1909*/]), &Global_24887, 1909);
	MISC::_COPY_MEMORY(&(Global_2674958[iParam0 /*777*/]), &Global_26796, 777);
	MISC::_COPY_MEMORY(&(Global_2676513[iParam0 /*4501*/]), &Global_27573, 4501);
	MISC::_COPY_MEMORY(&(Global_2685516[iParam0 /*4234*/]), &Global_32074, 4234);
	if (__LIB_0__::func_13(32768))
	{
		Global_2621440[iParam0 /*12066*/].f_9.f_14 = __LIB_0__::func_23();
	}
}

void func_637()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_1095(0);
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
	func_1095(1);
}

void func_638()
{
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_312(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_639()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_1098(0);
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
	func_1098(1);
}

void func_640()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_2__::func_522(15000, 0, 0, 0, 1);
			func_1098(0);
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
	func_1098(1);
}

void func_641()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_312(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_312(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_644(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_644(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
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

int func_644(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			func_644(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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

int func_685(var uParam0, int iParam1, int iParam2, int iParam3)
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
	iVar11 = (func_1142(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_952(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_312(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	__LIB_2__::func_522(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

void func_724(var uParam0, int iParam1)
{
	func_1168(uParam0, iParam1);
	__LIB_5__::func_292(uParam0, iParam1, 26);
}

int func_725(var uParam0)
{
	if (func_384(uParam0) == 2)
	{
		__LIB_5__::func_298(uParam0, "MultiStart");
		if (!iLocal_2369[0] == 2)
		{
			if (!func_1171(uParam0))
			{
				return 0;
			}
		}
	}
	if (func_384(uParam0) == 1)
	{
		func_861(uParam0);
	}
	return 1;
}

int func_726(var uParam0)
{
	__LIB_5__::func_33(uParam0, 131072);
	func_864(uParam0);
	ENTITY::SET_ENTITY_LOD_DIST(Local_1700.f_1, 900);
	return 1;
}

int func_727(var uParam0)
{
	struct<4> Var0;
	struct<4> Var4;
	func_178(5);
	__LIB_4__::func_992(uParam0, 131072);
	TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(func_438(22), 1, 0.75f, 0.5f, 1);
	VOLUME::_SET_VOLUME_SCALE(Local_128.f_25, 0.5f, 0.5f, 2f);
	__LIB_11__::func_824(&(Local_128.f_25), joaat("VOLCYLINDER"));
	PED::_0x7C00CFC48A782DC0(Local_128.f_25, Local_424[5 /*8*/], 0f, 0f, 0f, 0f, 0f, 0f, 2, 0);
	func_849(21);
	func_1175(1, 0);
	func_177(0);
	__LIB_11__::func_824(&(Local_128.f_38), joaat("VOLBOX"));
	Var0 = { func_470(7, 0) };
	WATER::GET_WATER_HEIGHT(Var0, &(Var0.f_2));
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_1700.f_1, Var0, Var0.f_3, true, false, true);
	ENTITY::FREEZE_ENTITY_POSITION(Local_1700.f_1, false);
	ENTITY::SET_ENTITY_COLLISION(Local_1700.f_1, true, false);
	ENTITY::SET_ENTITY_VISIBLE(Local_1700.f_1, true);
	CAM::_0xE296208C273BD7F0(0, -1, 0, 17, 1, 0);
	Var4 = { func_1176(9) };
	iLocal_1233[9] = WEAPON::_CREATE_WEAPON_OBJECT(joaat("WEAPON_RIFLE_BOLTACTION"), 1, Var4, true, 1f);
	ENTITY::SET_ENTITY_ROTATION(iLocal_1233[9], Var4.f_3, 2, true);
	ENTITY::SET_ENTITY_COLLISION(iLocal_1233[9], false, false);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_1233[9], true);
	return 1;
}

int func_728(var uParam0)
{
	vector3 vVar0;
	func_1177(uParam0);
	func_1178(uParam0);
	func_1179();
	if (func_1180(15, 46))
	{
		if (func_164(21))
		{
			if (__LIB_0__::func_94(Global_35, VOLUME::_GET_VOLUME_COORDS(Local_128.f_4), 1) >= 25f)
			{
				func_1182(uParam0, 0);
				func_178(21);
			}
		}
		else if (__LIB_0__::func_94(Global_35, VOLUME::_GET_VOLUME_COORDS(Local_128.f_4), 1) >= 40f)
		{
			Local_1465[0 /*7*/].f_5 = 4;
		}
		else if (__LIB_0__::func_94(Global_35, VOLUME::_GET_VOLUME_COORDS(Local_128.f_4), 1) < 15f)
		{
			func_1182(uParam0, 1);
			func_849(21);
		}
	}
	switch (__LIB_4__::func_971(uParam0))
	{
		case 0:
			CAM::_0xE296208C273BD7F0(0, -1, 0, 17, 1, 0);
			if (ANIMSCENE::_0x005E6F28DD7ED58D(Local_2328[0 /*5*/], "ARTHUR"))
			{
				func_1184(19);
				func_1182(uParam0, 1);
				func_1185(0);
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 1000, 0f, true, true);
				__LIB_4__::func_952(uParam0, 1);
			}
			break;
		case 1:
			func_856(uParam0, 7, 8, 3);
			func_853(1);
			if (!func_164(17))
			{
				if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_128.f_37, true, 0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_424[7 /*8*/]))
					{
						vVar0 = { func_217(7, 1, 0) };
						TASK::TASK_FLY_TO_COORD(Local_424[7 /*8*/], 2f, vVar0, 1, 0);
					}
					if (!ENTITY::IS_ENTITY_DEAD(Local_424[8 /*8*/]))
					{
						vVar0 = { func_217(8, 1, 0) };
						TASK::TASK_FLY_TO_COORD(Local_424[8 /*8*/], 2f, vVar0, 1, 0);
					}
					__LIB_5__::func_372(uParam0, 1);
					__LIB_1__::func_283(&(vLocal_1569[4 /*3*/]), 0);
					func_1175(0, 0);
					func_1186();
					Local_1700 = 2;
					CAM::SET_GAMEPLAY_COORD_HINT(595.5224f, -7030.593f, 42.7124f, 2000, 2000, 2000, 0);
					func_849(17);
				}
				else if (!__LIB_0__::func_75(&(vLocal_1569[0 /*3*/])))
				{
					if (ANIMSCENE::_0x8D81E7824B7753F7(Local_2328[0 /*5*/], "s_loop", 1))
					{
						__LIB_2__::func_462(&(vLocal_1569[0 /*3*/]), 10f, 0);
					}
				}
				else if (__LIB_0__::func_265(&(vLocal_1569[0 /*3*/])) >= 10f)
				{
					if ((iLocal_2113 == 0 && !__LIB_5__::func_236(1)) && !__LIB_0__::func_481(1))
					{
						func_1184(21);
						__LIB_1__::func_148(&(vLocal_1569[0 /*3*/]));
					}
				}
			}
			else if (!func_164(19))
			{
				func_1184(22);
				func_849(19);
			}
			else if (!func_164(20))
			{
				if ((!__LIB_5__::func_259(func_1190(22)) && !__LIB_1__::func_322(func_1190(22))) && !iLocal_2113 == 22)
				{
					__LIB_1__::func_283(&(vLocal_1569[0 /*3*/]), 1);
					func_849(20);
				}
			}
			else if (__LIB_0__::func_265(&(vLocal_1569[0 /*3*/])) >= 10f)
			{
				if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_128.f_58, true, 0))
				{
					if (iLocal_2113 == 0)
					{
						func_1184(23);
					}
					__LIB_1__::func_148(&(vLocal_1569[0 /*3*/]));
				}
			}
			if (ANIMSCENE::_0x8D81E7824B7753F7(Local_2328[0 /*5*/], "s_loop", 1))
			{
				if (!func_164(18))
				{
					if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_128, true, 0))
					{
						func_849(18);
					}
				}
				else if (!__LIB_5__::func_236(1) && !__LIB_0__::func_481(1))
				{
					func_910(uParam0, 7, 0);
					__LIB_4__::func_952(uParam0, 29);
				}
			}
			break;
		case 29:
			func_910(uParam0, 8, 0);
			return 1;
	}
	return 0;
}

int func_729(var uParam0)
{
	PED::_0x19C975B81BE53C28(Local_128.f_25, Local_424[5 /*8*/]);
	VOLUME::_DELETE_VOLUME(Local_128.f_25);
	func_1193(0);
	TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(func_438(22), 0, 0.75f, 0.5f, 1);
	func_436(22);
	ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iLocal_1233[4]));
	ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iLocal_1233[5]));
	ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iLocal_1233[6]));
	ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iLocal_1233[7]));
	ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iLocal_1233[8]));
	return 1;
}

int func_731(var uParam0)
{
	struct<4> Var0;
	func_853(1);
	if (!Local_2328[1 /*5*/].f_1 == 8)
	{
		return 0;
	}
	if (func_384(uParam0) == 1)
	{
		func_861(uParam0);
	}
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_424[2 /*8*/], 987.566f, -6749.43f, 63.1221f, 141.687f, true, false, true);
	ENTITY::_0x9587913B9E772D29(Local_424[2 /*8*/], 0);
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_424[4 /*8*/], 988.453f, -6750.72f, 63.1241f, 115.21f, true, false, true);
	ENTITY::_0x9587913B9E772D29(Local_424[4 /*8*/], 0);
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_424[5 /*8*/], 988.813f, -6751.99f, 63.1265f, 66.097f, true, false, true);
	ENTITY::_0x9587913B9E772D29(Local_424[5 /*8*/], 0);
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_424[3 /*8*/], 987.14f, -6748.61f, 63.128f, 114.45f, true, false, true);
	ENTITY::_0x9587913B9E772D29(Local_424[3 /*8*/], 0);
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_424[6 /*8*/], 986.525f, -6747.68f, 63.1429f, 172.6f, true, false, true);
	ENTITY::_0x9587913B9E772D29(Local_424[6 /*8*/], 0);
	func_177(0);
	Local_1700 = 2;
	__LIB_11__::func_824(&(Local_128.f_38), joaat("VOLBOX"));
	func_1186();
	Var0 = { func_1176(9) };
	iLocal_1233[9] = WEAPON::_CREATE_WEAPON_OBJECT(joaat("WEAPON_RIFLE_BOLTACTION"), 1, Var0, true, 1f);
	ENTITY::SET_ENTITY_ROTATION(iLocal_1233[9], Var0.f_3, 2, true);
	ENTITY::SET_ENTITY_COLLISION(iLocal_1233[9], false, false);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_1233[9], true);
	return 1;
}

int func_732(var uParam0)
{
	func_1198(34);
	func_1198(36);
	func_1198(37);
	func_1198(38);
	func_1198(39);
	if (Local_2328[1 /*5*/].f_1 == 8)
	{
		func_1199(1, 1);
		if (func_384(uParam0) == 0)
		{
			func_443(0);
		}
	}
	else
	{
		return 0;
	}
	func_1200(942.4749f, -6787.859f, 52.3272f, 26f);
	return 1;
}

int func_733(var uParam0)
{
	func_178(5);
	__LIB_5__::func_494(&(uParam0->f_7375), "MultiStart", 0);
	__LIB_4__::func_568(&(uParam0->f_7375), "MultiStart");
	func_1203(2, 6, 1);
	func_1204(0);
	func_1204(1);
	func_1204(2);
	func_1204(5);
	__LIB_11__::func_824(&(Local_128.f_19), joaat("VOLBOX"));
	__LIB_11__::func_824(&(Local_128.f_95), joaat("VOLBOX"));
	func_1200(1010.4f, -6758.4f, 68.1f, 18f);
	Local_1700.f_3[0 /*33*/] = 1;
	Local_1700.f_3[1 /*33*/] = 1;
	vLocal_2104.f_2.f_1 = 0.2f;
	vLocal_2104.f_2.f_2 = 0.2f;
	TASK::TASK_LOOK_AT_ENTITY(Global_35, Local_424[2 /*8*/], BUILTIN::FLOOR((ANIMSCENE::_GET_ANIM_SCENE_DURATION(Local_2328[1 /*5*/]) * 1000f)), 48, 51, 1);
	__LIB_5__::func_372(uParam0, 2);
	return 1;
}

int func_734(var uParam0)
{
	int iVar0;
	struct<15> Var1;
	if (func_164(10))
	{
		__LIB_1__::func_26(1);
		__LIB_4__::func_614();
	}
	func_1206();
	func_1177(uParam0);
	func_1207(uParam0);
	func_1178(uParam0);
	func_1208();
	func_1209();
	func_1210();
	func_1211();
	func_1212(uParam0);
	if (vLocal_2104.z == 1)
	{
		func_1213(uParam0, 2);
	}
	else
	{
		func_1213(uParam0, 3);
	}
	if (func_164(38))
	{
		func_1214();
	}
	if (func_1180(30, 46))
	{
		if (__LIB_0__::func_94(Global_35, VOLUME::_GET_VOLUME_COORDS(Local_128.f_4), 1) >= 40f)
		{
			Local_1465[0 /*7*/].f_5 = 4;
		}
	}
	func_853(1);
	func_853(2);
	if (__LIB_0__::func_75(&(vLocal_1569[9 /*3*/])))
	{
		if (PED::IS_PED_SHOOTING(Global_35))
		{
			__LIB_1__::func_148(&(vLocal_1569[9 /*3*/]));
		}
		if (__LIB_0__::func_265(&(vLocal_1569[9 /*3*/])) >= 15f)
		{
			if ((iLocal_2113 == 0 && !__LIB_6__::func_904()) && !__LIB_5__::func_463())
			{
				func_1184(__LIB_0__::func_55(__LIB_1__::func_985(), 25, 26));
				__LIB_1__::func_148(&(vLocal_1569[9 /*3*/]));
			}
		}
	}
	switch (__LIB_4__::func_971(uParam0))
	{
		case 0:
			if (ANIMSCENE::_0x8D81E7824B7753F7(Local_2328[1 /*5*/], "s_action_p2", 1))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_1233[9]))
				{
					OBJECT::DELETE_OBJECT(&(iLocal_1233[9]));
				}
				func_1182(uParam0, 2);
				VOLUME::_DELETE_VOLUME(Local_128.f_38);
				__LIB_4__::func_952(uParam0, 1);
			}
			break;
		case 1:
			if (!func_856(uParam0, 13, 18, 9))
			{
				__LIB_1__::func_283(&(vLocal_1569[12 /*3*/]), 1);
				return 0;
			}
			else
			{
				__LIB_5__::func_372(uParam0, 3);
				__LIB_1__::func_283(&(vLocal_1569[9 /*3*/]), 0);
				__LIB_4__::func_952(uParam0, 2);
			}
			break;
		case 2:
			func_1219(uParam0, 0, 1114636288 /* Float: 60f */);
			if (func_1220(13, 18, 18) <= 2)
			{
				func_1219(uParam0, 1, 30f);
				__LIB_4__::func_952(uParam0, 3);
			}
			break;
		case 3:
			if (func_856(uParam0, 19, 24, 9))
			{
				__LIB_5__::func_372(uParam0, 4);
				func_1221(5, 8);
				func_1221(4, 8);
				__LIB_1__::func_283(&(vLocal_1569[12 /*3*/]), 1);
				func_1184(30);
				__LIB_4__::func_952(uParam0, 4);
			}
			break;
		case 4:
			func_1219(uParam0, 0, 1114636288 /* Float: 60f */);
			if (__LIB_0__::func_75(&(vLocal_1569[12 /*3*/])))
			{
				if (__LIB_0__::func_265(&(vLocal_1569[12 /*3*/])) >= 20f)
				{
					iVar0 = 19;
					while (iVar0 <= 24)
					{
						if (Local_424[iVar0 /*8*/].f_2 == 9)
						{
							func_1221(iVar0, 10);
						}
						iVar0++;
					}
					func_1184(31);
					__LIB_0__::func_37(&(vLocal_1569[12 /*3*/]));
				}
			}
			if (func_1220(13, 24, 18) <= 2)
			{
				if (func_856(uParam0, 25, 26, 1))
				{
					__LIB_5__::func_372(uParam0, 5);
					func_1219(uParam0, 1, 1114636288 /* Float: 60f */);
					func_849(37);
					__LIB_0__::func_37(&(vLocal_1569[9 /*3*/]));
					__LIB_0__::func_37(&(vLocal_1569[12 /*3*/]));
					__LIB_0__::func_37(&(vLocal_1569[0 /*3*/]));
					__LIB_4__::func_952(uParam0, 5);
				}
			}
			break;
		case 5:
			if (func_1220(13, 26, 18) <= 2)
			{
				__LIB_1__::func_283(&(vLocal_1569[0 /*3*/]), 0);
				if (!func_164(27))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_2328[2 /*5*/], "pbl_Hercule_Callover", true);
					func_849(27);
				}
				if (__LIB_0__::func_265(&(vLocal_1569[0 /*3*/])) >= 2.5f)
				{
					func_1222(3, vLocal_2104.x);
					func_1182(uParam0, 3);
					func_1223(2);
					__LIB_4__::func_952(uParam0, 6);
				}
			}
			break;
		case 6:
			if (vLocal_2104.z == 8)
			{
				__LIB_4__::func_952(uParam0, 7);
			}
			break;
		case 7:
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			Var1.f_6 = 1108082688;
			Var1.f_14 = 1108082688;
			Var1 = { func_1224(1) };
			if (!iLocal_2369[1] == 2)
			{
				func_1225(uParam0);
			}
			else if (__LIB_0__::func_265(&(vLocal_1569[0 /*3*/])) >= (Var1.f_7 + 1f) && !__LIB_1__::func_322(func_1190(36)))
			{
				__LIB_4__::func_952(uParam0, 29);
			}
			break;
		case 29:
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			return 1;
	}
	return 0;
}

int func_735(var uParam0)
{
	int iVar0;
	CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
	func_436(40);
	func_436(41);
	func_436(42);
	func_436(43);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_424[2 /*8*/], 30, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_424[4 /*8*/], 54, true);
	if (WEAPON::HAS_PED_GOT_WEAPON(Local_424[4 /*8*/], iLocal_1452[2], 0, false))
	{
		WEAPON::REMOVE_WEAPON_FROM_PED(Local_424[4 /*8*/], iLocal_1452[2], true, -142743235);
	}
	func_436(32);
	if (!iLocal_2369[1] == 2)
	{
		if (!func_1225(uParam0))
		{
			return 0;
		}
	}
	MISC::CLEAR_BIT(&(Global_1956580.f_1), 4);
	func_171(0, 5);
	PATHFIND::_0x2C87C3E1C7B96EE2(Local_128.f_34);
	VOLUME::_DELETE_VOLUME(Local_128.f_34);
	iVar0 = 0;
	while (iVar0 < 65)
	{
		__LIB_0__::func_143(&(uParam0->f_7375.f_13[iVar0 /*12*/]), 8);
		iVar0++;
	}
	func_1227(2, 6, 0);
	func_1227(3, 3, 1);
	PED::_0x9851DE7AEC10B4E1(func_472(4, 0), 200f, 0, 0);
	func_443(2);
	func_177(1);
	func_178(10);
	INVENTORY::_0x6A564540FAC12211(__LIB_0__::func_162(0), joaat("WEAPON_KIT_CAMERA"));
	VOLUME::_DELETE_VOLUME(Local_128.f_65);
	VOLUME::_DELETE_VOLUME(Local_128.f_67);
	VOLUME::_DELETE_VOLUME(Local_128.f_69);
	VOLUME::_DELETE_VOLUME(Local_128.f_66);
	VOLUME::_DELETE_VOLUME(Local_128.f_68);
	VOLUME::_DELETE_VOLUME(Local_128.f_70);
	VOLUME::_DELETE_VOLUME(Local_128.f_71);
	VOLUME::_DELETE_VOLUME(Local_128.f_73);
	VOLUME::_DELETE_VOLUME(Local_128.f_75);
	VOLUME::_DELETE_VOLUME(Local_128.f_72);
	VOLUME::_DELETE_VOLUME(Local_128.f_74);
	VOLUME::_DELETE_VOLUME(Local_128.f_76);
	__LIB_0__::func_172(Local_128.f_25);
	__LIB_0__::func_37(&(vLocal_1569[15 /*3*/]));
	ENTITY::FREEZE_ENTITY_POSITION(Local_1523[0 /*5*/], false);
	ENTITY::FREEZE_ENTITY_POSITION(Local_1523[1 /*5*/], false);
	return 1;
}

int func_736(var uParam0)
{
	if (!func_856(uParam0, 27, 41, 121))
	{
		return 0;
	}
	__LIB_10__::func_925(uParam0, "NormalStart");
	__LIB_5__::func_298(uParam0, "NormalStart");
	if (func_384(uParam0) == 2)
	{
		__LIB_5__::func_33(uParam0, 8388608);
		if (!iLocal_2369[1] == 2)
		{
			if (!func_1225(uParam0))
			{
				return 0;
			}
		}
	}
	Local_1700 = 2;
	if (func_384(uParam0) == 1)
	{
		func_861(uParam0);
	}
	__LIB_0__::func_489(0, 0);
	return 1;
}

int func_737(var uParam0)
{
	func_1198(24);
	func_1198(44);
	func_1198(24);
	func_1198(14);
	func_1230(1);
	WEAPON::SET_CURRENT_PED_WEAPON(Local_424[3 /*8*/], iLocal_1452[7], false, 0, false, false);
	CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
	__LIB_5__::func_571(uParam0, Local_424[5 /*8*/], 128);
	__LIB_5__::func_571(uParam0, Local_424[4 /*8*/], 128);
	__LIB_10__::func_935(uParam0, Local_424[5 /*8*/], 0);
	__LIB_10__::func_935(uParam0, Local_424[4 /*8*/], 0);
	__LIB_10__::func_935(uParam0, Local_424[6 /*8*/], 0);
	return 1;
}

int func_738(var uParam0)
{
	bool bVar0;
	bVar0 = true;
	if (!func_1233(24) || !func_1233(func_1234(10)))
	{
		bVar0 = false;
	}
	if (!func_1230(0))
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
		return 0;
	}
	func_178(5);
	TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(func_438(24), 1, 0.75f, 0.5f, 1);
	func_385(1, 1);
	func_1235();
	func_858(10, 8);
	ENTITY::_0xEBDC12861D079ABA(iLocal_1233[10], 1);
	ENTITY::SET_ENTITY_INVINCIBLE(iLocal_1233[10], true);
	ENTITY::SET_ENTITY_COLLISION(iLocal_1233[10], false, false);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_1233[10], true);
	func_858(11, 8);
	ENTITY::_0xEBDC12861D079ABA(iLocal_1233[11], 1);
	ENTITY::SET_ENTITY_INVINCIBLE(iLocal_1233[11], true);
	func_1227(27, 41, 1);
	func_1221(4, 1);
	func_1221(5, 1);
	func_1221(6, 1);
	func_1203(27, 41, 1);
	func_1204(6);
	func_1204(7);
	func_1236(3);
	func_166(1);
	func_1227(2, 6, 1);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1233[12]))
	{
		OBJECT::DELETE_OBJECT(&(iLocal_1233[12]));
	}
	Local_1700.f_3[0 /*33*/] = 1;
	Local_1700.f_3[1 /*33*/] = 1;
	__LIB_1__::func_283(&(vLocal_1569[3 /*3*/]), 1);
	WEAPON::SET_CURRENT_PED_WEAPON(Local_424[2 /*8*/], iLocal_1452[5], true, 0, false, false);
	WEAPON::SET_CURRENT_PED_WEAPON(Local_424[2 /*8*/], iLocal_1452[6], true, 1, false, false);
	__LIB_5__::func_372(uParam0, 8);
	func_176(__LIB_4__::func_939(uParam0));
	__LIB_11__::func_824(&(Local_128.f_93), joaat("VOLBOX"));
	GRAPHICS::_0x94B261F1F35293E1(0);
	return 1;
}

int func_739(var uParam0)
{
	int iVar0;
	func_1177(uParam0);
	func_1178(uParam0);
	func_1237(uParam0);
	if (__LIB_0__::func_75(&(vLocal_1569[18 /*3*/])))
	{
		if (__LIB_0__::func_265(&(vLocal_1569[18 /*3*/])) >= 1.5f)
		{
			__LIB_5__::func_20(0, 0);
			iLocal_2113 = 0;
			func_1184(54);
			__LIB_0__::func_37(&(vLocal_1569[18 /*3*/]));
		}
	}
	if (Local_2328[4 /*5*/].f_1 < 9)
	{
		if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_128.f_4, true, 0))
		{
			if (__LIB_0__::func_265(&(vLocal_1569[3 /*3*/])) >= 15f)
			{
				if (!ANIMSCENE::_0x8D81E7824B7753F7(Local_2328[3 /*5*/], "s_Get_This_Working_Properly_RIGHT", 1) && !ANIMSCENE::_0x8D81E7824B7753F7(Local_2328[3 /*5*/], "s_Get_This_Working_Properly_LEFT", 1))
				{
					func_1184(46);
					TASK::TASK_LOOK_AT_ENTITY(Local_424[5 /*8*/], Global_35, 3000, 48, 51, 0);
					__LIB_1__::func_148(&(vLocal_1569[3 /*3*/]));
				}
			}
		}
	}
	if (!func_164(55))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iLocal_1452[9], 0, true))
		{
			if (MAP::DOES_BLIP_EXIST(iLocal_1448[1]))
			{
				MAP::REMOVE_BLIP(&(iLocal_1448[1]));
			}
			func_849(55);
		}
		if (func_164(54))
		{
			func_849(55);
		}
	}
	func_1238(uParam0);
	func_1239();
	func_1240();
	func_1241(uParam0);
	func_1242(uParam0);
	if (func_164(52))
	{
		if (iLocal_2377 == 0)
		{
			iLocal_2377 = 1;
		}
		else if (!iLocal_2377 == 5)
		{
			func_1243(uParam0);
		}
	}
	switch (__LIB_4__::func_971(uParam0))
	{
		case 0:
			func_1222(4, Local_424[3 /*8*/]);
			func_1182(uParam0, 4);
			if (func_164(15))
			{
				Local_1265[4 /*13*/].f_1 = 4;
			}
			iVar0 = 27;
			while (iVar0 <= 41)
			{
				func_1244(iVar0, 0);
				iVar0++;
			}
			__LIB_1__::func_283(&(vLocal_1569[0 /*3*/]), 1);
			__LIB_4__::func_952(uParam0, 1);
			break;
		case 1:
			if (!func_164(46))
			{
				if (__LIB_0__::func_265(&(vLocal_1569[0 /*3*/])) >= 1f)
				{
					func_1247(0, func_1245(6, 1), func_1246(6, 1));
					func_849(46);
				}
			}
			if (!func_164(47))
			{
				if (__LIB_0__::func_265(&(vLocal_1569[0 /*3*/])) >= 1.5f)
				{
					func_1247(0, func_1245(6, 2), func_1246(6, 2));
					func_849(47);
					__LIB_0__::func_37(&(vLocal_1569[0 /*3*/]));
					__LIB_1__::func_948(917663984, 0, 1f, 1, 0, 0f, 1, 0);
					__LIB_1__::func_948(600328988, 0, -1f, 1, 0, 0f, 1, 0);
					__LIB_4__::func_952(uParam0, 2);
				}
			}
			break;
		case 2:
			if (!func_164(54))
			{
				func_1249();
				if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_128.f_3, true, 0))
				{
					TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(func_438(24), 0, 1f, 0.5f, 1);
					func_436(24);
					func_1250(4);
					func_849(54);
					__LIB_4__::func_952(uParam0, 3);
				}
			}
			break;
		case 3:
			func_1219(uParam0, 0, 30f);
			func_1249();
			if (func_164(53))
			{
				__LIB_4__::func_952(uParam0, 29);
			}
			break;
		case 29:
			func_1219(uParam0, 1, 1114636288 /* Float: 60f */);
			return 1;
	}
	return 0;
}

int func_740(var uParam0)
{
	int iVar0;
	func_1251(10, 0);
	func_1251(11, 0);
	func_171(6, 7);
	iVar0 = 27;
	while (iVar0 <= 41)
	{
		if (Local_424[iVar0 /*8*/].f_2 == 18)
		{
			if (__LIB_0__::func_665(Global_35, Local_424[iVar0 /*8*/], 1, 1) >= 20f)
			{
				if (!CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(Local_424[iVar0 /*8*/], true, false), 1f))
				{
					func_910(uParam0, iVar0, 0);
				}
			}
		}
		iVar0++;
	}
	func_436(25);
	return 1;
}

int func_741(var uParam0)
{
	bool bVar0;
	struct<10> Var1;
	bVar0 = true;
	func_1198(14);
	AICOVERPOINT::_0x140B3CB1D424A945(Local_424[3 /*8*/], joaat("WEAPON_RIFLE_BOLTACTION"));
	if (!func_856(uParam0, 42, 56, 81))
	{
		bVar0 = false;
	}
	if (!func_1230(0))
	{
		bVar0 = false;
	}
	if (!func_1233(14))
	{
		bVar0 = false;
	}
	if (!AICOVERPOINT::_0x8CBE916CFC64AD5C(Local_424[3 /*8*/]))
	{
		bVar0 = false;
	}
	if (PED::_0x290B2E6CCDE532E1(Local_424[2 /*8*/]) && !PED::_0x0EEF7A81C17679DB(Local_424[2 /*8*/]))
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
		return 0;
	}
	func_1252(uParam0, 6, 0);
	func_1253(1, 1, 0);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-20f, 1f);
	Local_1700 = 2;
	if (func_384(uParam0) == 1)
	{
		func_861(uParam0);
	}
	if (func_384(uParam0) == 2)
	{
		if (__LIB_0__::func_214(joaat("WEAPON_RIFLE_BOLTACTION")))
		{
			__LIB_1__::func_766(Global_35, joaat("WEAPON_RIFLE_BOLTACTION"), 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		}
		else if (__LIB_0__::func_214(joaat("WEAPON_RIFLE_SPRINGFIELD")))
		{
			__LIB_1__::func_766(Global_35, joaat("WEAPON_RIFLE_SPRINGFIELD"), 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		}
	}
	func_1204(8);
	func_1204(9);
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_424[2 /*8*/], func_472(3, 1), func_1255(3, 1), true, false, true);
	ENTITY::_0x9587913B9E772D29(Local_424[2 /*8*/], 0);
	PED::_0x2208438012482A1A(Local_424[2 /*8*/], false, false);
	Var1 = { func_1256(9) };
	func_836(Local_424[3 /*8*/], Var1, Var1.f_3, 2, 1073741824 /* Float: 2f */);
	TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Local_424[3 /*8*/], Var1, -1, 0, 0f, Var1.f_8, Var1.f_9, iLocal_230[9], 0, 1, 0);
	PED::_0x2208438012482A1A(Local_424[3 /*8*/], false, false);
	func_1257(0, 1);
	__LIB_11__::func_824(&(Local_128.f_93), joaat("VOLBOX"));
	return 1;
}

int func_742(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<4> Var4;
	bool bVar11;
	int iVar12;
	func_1198(26);
	func_1198(14);
	func_853(6);
	Var4.f_6 = -1;
	iVar1 = 3;
	while (iVar1 <= 8)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_1523[iVar1 /*5*/]))
		{
			if (func_164(0))
			{
				return 0;
			}
			if (iVar1 == 3)
			{
				iVar0 = 3;
				Local_1523[iVar1 /*5*/].f_2 = 42;
				Local_1523[iVar1 /*5*/].f_3 = Local_1523[iVar1 /*5*/].f_2;
				iVar2 = 19;
				iVar3 = 20;
			}
			else if (iVar1 == 4)
			{
				iVar0 = 4;
				Local_1523[iVar1 /*5*/].f_2 = 45;
				Local_1523[iVar1 /*5*/].f_3 = Local_1523[iVar1 /*5*/].f_2;
				iVar2 = 21;
				iVar3 = 22;
			}
			else if (iVar1 == 5)
			{
				iVar0 = 5;
				Local_1523[iVar1 /*5*/].f_2 = 48;
				Local_1523[iVar1 /*5*/].f_3 = Local_1523[iVar1 /*5*/].f_2;
				iVar2 = 23;
				iVar3 = 24;
			}
			else if (iVar1 == 6)
			{
				iVar0 = 6;
				Local_1523[iVar1 /*5*/].f_2 = 51;
				Local_1523[iVar1 /*5*/].f_3 = Local_1523[iVar1 /*5*/].f_2;
				iVar2 = 25;
				iVar3 = 26;
			}
			else if (iVar1 == 7)
			{
				iVar0 = 7;
				Local_1523[iVar1 /*5*/].f_2 = 54;
				Local_1523[iVar1 /*5*/].f_3 = Local_1523[iVar1 /*5*/].f_2;
				iVar2 = 27;
				iVar3 = 28;
			}
			else if (iVar1 == 8)
			{
				iVar0 = 8;
				Local_1523[iVar1 /*5*/].f_2 = 57;
				Local_1523[iVar1 /*5*/].f_3 = Local_1523[iVar1 /*5*/].f_2;
				iVar2 = 29;
				iVar3 = 30;
			}
			Local_1523[iVar1 /*5*/] = VEHICLE::CREATE_VEHICLE(func_437(10), func_472(9, iVar0), func_1255(9, iVar0), true, true, false, false);
			ENTITY::_0x7A49D40DE437BC8D(Local_1523[iVar1 /*5*/], 0);
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_1523[iVar1 /*5*/], false);
			ENTITY::SET_ENTITY_INVINCIBLE(Local_1523[iVar1 /*5*/], true);
			VEHICLE::SET_BOAT_ANCHOR(Local_1523[iVar1 /*5*/], false);
			ENTITY::FREEZE_ENTITY_POSITION(Local_1523[iVar1 /*5*/], false);
			func_858(iVar2, 2);
			Var4 = { func_1176(iVar2) };
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_1233[iVar2], Local_1523[iVar1 /*5*/], 0, Var4, Var4.f_3, false, false, false, false, 2, true, false, false);
			ENTITY::_0xEBDC12861D079ABA(iLocal_1233[iVar2], 1);
			GRAPHICS::_SET_LIGHTS_INTENSITY_FOR_ENTITY(iLocal_1233[iVar2], 30000f);
			func_858(iVar3, 2);
			Var4 = { func_1176(iVar3) };
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_1233[iVar3], Local_1523[iVar1 /*5*/], 0, Var4, Var4.f_3, false, false, false, false, 2, true, false, false);
			ENTITY::_0xEBDC12861D079ABA(iLocal_1233[iVar3], 1);
			GRAPHICS::_SET_LIGHTS_INTENSITY_FOR_ENTITY(iLocal_1233[iVar3], 30000f);
			func_849(0);
		}
		iVar1++;
	}
	bVar11 = true;
	if (!func_856(uParam0, 42, 56, 65))
	{
		bVar11 = false;
	}
	if (!func_856(uParam0, 57, 59, 1))
	{
		bVar11 = false;
	}
	if (!func_1233(14))
	{
		bVar11 = false;
	}
	if (!bVar11)
	{
		return 0;
	}
	func_1203(2, 6, 1);
	iVar12 = 27;
	while (iVar12 <= 41)
	{
		if (!Local_424[iVar12 /*8*/].f_2 == 0)
		{
			func_1221(iVar12, 1);
		}
		iVar12++;
	}
	Local_1700.f_3[0 /*33*/] = 1;
	Local_1700.f_3[2 /*33*/] = 1;
	__LIB_10__::func_935(uParam0, Local_424[5 /*8*/], 0);
	__LIB_10__::func_935(uParam0, Local_424[4 /*8*/], 0);
	return 1;
}

int func_743(var uParam0)
{
	func_853(6);
	func_178(5);
	func_849(81);
	WEAPON::_0xA769D753922B031B(Local_424[2 /*8*/], 999f, 999f);
	WEAPON::_0xA769D753922B031B(Local_424[3 /*8*/], 999f, 999f);
	__LIB_5__::func_26(uParam0, 80f);
	__LIB_5__::func_27(uParam0, 100f);
	if (!__LIB_4__::func_937(uParam0, 8))
	{
		AICOVERPOINT::_0x1A7A802B2301EDC0(Local_424[3 /*8*/]);
	}
	__LIB_2__::func_462(&(vLocal_1569[22 /*3*/]), 999.9f, 0);
	return 1;
}

int func_744(var uParam0)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	func_1258(uParam0);
	func_1259(uParam0);
	func_1177(uParam0);
	func_1178(uParam0);
	func_1260();
	func_1261(uParam0);
	func_1262();
	func_1241(uParam0);
	func_1263(uParam0);
	func_1264();
	func_853(6);
	if (!func_164(60))
	{
		func_1265(uParam0);
	}
	if (!func_164(88))
	{
		if (func_1180(30, 5))
		{
			if (__LIB_0__::func_94(Global_35, vLocal_2163, 1) >= 55f)
			{
				iLocal_2115 = func_1266();
				if (iLocal_2115 == 10)
				{
					func_1182(uParam0, 9);
				}
				else
				{
					func_1182(uParam0, 7);
				}
				func_849(88);
			}
		}
	}
	else if (func_1180(30, 11))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
		if (__LIB_0__::func_94(Global_35, vLocal_2163, 1) <= 45f)
		{
			if (func_1267())
			{
				iLocal_2115 = 10;
			}
			func_1182(uParam0, iLocal_2115);
			func_178(88);
		}
		else if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vLocal_2163, true) >= 80f || vVar0.z > 63.2f)
		{
			if (iLocal_2115 == 10)
			{
				__LIB_5__::func_505(uParam0, func_1190(17), "", 1, 0);
			}
			else
			{
				Local_1465[1 /*7*/].f_5 = 4;
			}
		}
	}
	iVar3 = 51;
	iVar4 = 56;
	iVar5 = 42;
	iVar6 = 50;
	switch (__LIB_4__::func_971(uParam0))
	{
		case 0:
			if (Local_2328[6 /*5*/].f_1 == 8)
			{
				if (func_1199(6, 1))
				{
					__LIB_4__::func_952(uParam0, 1);
				}
			}
			break;
		case 1:
			if (func_164(61))
			{
				if ((iLocal_2113 == 0 && !__LIB_5__::func_259(func_1190(84))) && !__LIB_1__::func_322(func_1190(84)))
				{
					__LIB_1__::func_422(func_1190(61), 7500, 1, 1, 0, 0, -1, -1, 0);
					func_178(61);
				}
			}
			if (!func_164(96))
			{
				if (ENTITY::IS_ENTITY_IN_AREA(Global_35, 980.528f, -6788.214f, 41.125f, 985.658f, -6783.269f, 44.423f, false, true, 0))
				{
					func_1200(981.6f, -6781.4f, 43.4f, -1082130432 /* Float: -1f */);
					func_1200(1015.6f, -6798.7f, 40.8f, -1082130432 /* Float: -1f */);
					func_849(96);
				}
			}
			func_1219(uParam0, 0, 60f);
			if (!func_164(89))
			{
				if (func_1180(2, 0))
				{
					if (func_1220(48, 56, 18) == 1)
					{
						iVar7 = 48;
						while (iVar7 <= 56)
						{
							if (!Local_424[iVar7 /*8*/].f_2 == 18)
							{
								if (!ENTITY::IS_ENTITY_DEAD(Local_424[iVar7 /*8*/]))
								{
									ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_424[iVar7 /*8*/], true);
									func_1269(iVar7, 1);
								}
								else
								{
									iVar7++;
								}
								func_849(89);
								if (!func_164(90))
								{
									if (func_1180(2, 1))
									{
										if (func_1220(42, 47, 18) == 1)
										{
											iVar7 = 42;
											while (iVar7 <= 47)
											{
												if (!Local_424[iVar7 /*8*/].f_2 == 18)
												{
													if (!ENTITY::IS_ENTITY_DEAD(Local_424[iVar7 /*8*/]))
													{
														ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_424[iVar7 /*8*/], true);
														func_1269(iVar7, 1);
													}
													else
													{
														iVar7++;
													}
													func_849(90);
													if (!func_164(77))
													{
														if (func_1270())
														{
															func_1184(81);
															__LIB_5__::func_372(uParam0, 18);
															func_1182(uParam0, 8);
															if (func_1271())
															{
																func_1221(2, 54);
																func_1221(3, 54);
															}
															else
															{
																func_1221(2, 58);
																func_1221(3, 58);
															}
															func_849(77);
														}
													}
													else if (!func_164(78))
													{
														if ((!__LIB_5__::func_236(1) && !__LIB_0__::func_481(1)) && iLocal_2113 == 0)
														{
															func_1184(77);
															func_849(78);
														}
													}
													if (!func_164(84))
													{
														if (func_1180(5, 70))
														{
															func_849(84);
															iVar7 = iVar5;
															while (iVar7 <= iVar6)
															{
																if (!Local_424[iVar7 /*8*/].f_2 == 18)
																{
																	func_178(84);
																}
																else
																{
																	iVar7++;
																}
															}
														}
													}
													if (!func_164(83))
													{
														if (func_1180(5, 81))
														{
															func_849(83);
															iVar7 = iVar3;
															while (iVar7 <= iVar4)
															{
																if (!Local_424[iVar7 /*8*/].f_2 == 18)
																{
																	func_178(83);
																}
																else
																{
																	iVar7++;
																}
															}
														}
													}
													if (!func_164(62))
													{
														iVar7 = 42;
														while (iVar7 <= 62)
														{
															if (ENTITY::DOES_ENTITY_EXIST(Local_424[iVar7 /*8*/]) && !ENTITY::IS_ENTITY_DEAD(Local_424[iVar7 /*8*/]))
															{
																iVar8++;
															}
															iVar7++;
														}
														if (iVar8 == 1)
														{
															func_1184(82);
															func_849(62);
														}
													}
													if (func_1267())
													{
														if ((iLocal_2261 == 0 || iLocal_2261 == 1) || iLocal_2261 == 2)
														{
															iLocal_2261 = 4;
														}
														func_1221(2, 16);
														func_1221(3, 16);
														if (func_1272(2, 32))
														{
															PED::SET_PED_SEEING_RANGE(Local_424[2 /*8*/], 60f);
														}
														if (func_1272(3, 32))
														{
															PED::SET_PED_SEEING_RANGE(Local_424[3 /*8*/], 60f);
														}
														iLocal_2113 = 0;
														if (__LIB_5__::func_463())
														{
															__LIB_5__::func_20(0, 0);
														}
														func_1184(83);
														iLocal_1448[2] = __LIB_4__::func_983(408396114, 973.7072f, -6762.934f, 42.8675f, 1);
														__LIB_5__::func_372(uParam0, 19);
														__LIB_1__::func_283(&(vLocal_1569[20 /*3*/]), 1);
														__LIB_1__::func_283(&(vLocal_1569[23 /*3*/]), 0);
														func_1219(uParam0, 1, 1114636288 /* Float: 60f */);
														__LIB_4__::func_952(uParam0, 2);
													}
													Jump @2042; //curOff = 1396
													if (Local_1265[10 /*13*/].f_1 == 0)
													{
														if ((iLocal_2113 == 0 && !__LIB_5__::func_259(func_1190(83))) && !__LIB_1__::func_322(func_1190(83)))
														{
															func_1182(uParam0, 10);
														}
													}
													if (__LIB_0__::func_75(&(vLocal_1569[20 /*3*/])))
													{
														if (__LIB_0__::func_265(&(vLocal_1569[20 /*3*/])) >= 15f)
														{
															if (!func_164(91))
															{
																func_1184(93);
																func_849(91);
																__LIB_1__::func_148(&(vLocal_1569[20 /*3*/]));
															}
															else if (!func_164(92))
															{
																func_1184(94);
																func_849(92);
																__LIB_1__::func_148(&(vLocal_1569[20 /*3*/]));
															}
															else if (!func_164(93))
															{
																func_1184(95);
																func_849(93);
																__LIB_0__::func_37(&(vLocal_1569[20 /*3*/]));
															}
														}
													}
													if (__LIB_0__::func_75(&(vLocal_1569[23 /*3*/])) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), VOLUME::_GET_VOLUME_COORDS(Local_128.f_8), true) < (__LIB_8__::func_150(Local_128.f_8) * 2f))
													{
														__LIB_1__::func_265(Global_35, "COUGH_SICK_SMALL", joaat("SPEECH_PARAMS_FORCE_NORMAL_CRITICAL"), 0, 1, 0, 0, 1);
														__LIB_0__::func_37(&(vLocal_1569[23 /*3*/]));
													}
													if (!iLocal_2369[2] == 2)
													{
														func_1276(uParam0);
													}
													else if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_128.f_8, true, 0))
													{
														func_1250(10);
														UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
														func_1221(2, 12);
														func_1221(3, 12);
														PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 2f, 2000, __LIB_2__::func_916(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), VOLUME::_GET_VOLUME_COORDS(Local_128.f_8)), false, false);
														if (!ENTITY::IS_ENTITY_DEAD(Local_424[2 /*8*/]))
														{
															TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_424[2 /*8*/], 969f, -6761.2f, 43.1f, 3f, 20000, 0.25f, 0, 40000f);
														}
														__LIB_1__::func_283(&(vLocal_1569[0 /*3*/]), 1);
														CAM::_0xE296208C273BD7F0(1000, -1, 0, 17, 1, 0);
														__LIB_4__::func_952(uParam0, 3);
													}
													Jump @2042; //curOff = 1869
													CAM::_0xE296208C273BD7F0(1000, -1, 0, 17, 1, 0);
													if (!func_164(97))
													{
														if (__LIB_0__::func_265(&(vLocal_1569[0 /*3*/])) >= 0.1f)
														{
															func_1247(-1, 965.8f, -6760.5f, 45.5f, 1.5f);
															func_849(97);
														}
													}
													if (!func_164(98))
													{
														if (__LIB_0__::func_265(&(vLocal_1569[0 /*3*/])) >= 0.5f)
														{
															func_1247(-1, 968.6f, -6757.1f, 46f, 1f);
															func_849(98);
														}
													}
													if (__LIB_0__::func_265(&(vLocal_1569[0 /*3*/])) >= 0.75f)
													{
														__LIB_4__::func_952(uParam0, 29);
														return 1;
													}
													Jump @2042; //curOff = 2032
													return 1;
													return 0;
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
			default:
				break;
	}
}

int func_745(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = 3;
	while (iVar1 <= 8)
	{
		if (Local_1523[iVar1 /*5*/].f_4 == 1)
		{
			iVar0++;
		}
		iVar1++;
	}
	if (iVar0 <= 1)
	{
		__LIB_9__::func_101(uParam0, joaat("SMG2_STOPROWBOATSSHORE"));
	}
	func_171(8, 10);
	func_436(26);
	func_436(27);
	func_436(28);
	func_436(29);
	func_436(30);
	func_436(31);
	VOLUME::_DELETE_VOLUME(Local_128.f_77);
	VOLUME::_DELETE_VOLUME(Local_128.f_78);
	VOLUME::_DELETE_VOLUME(Local_128.f_81);
	VOLUME::_DELETE_VOLUME(Local_128.f_82);
	VOLUME::_DELETE_VOLUME(Local_128.f_79);
	VOLUME::_DELETE_VOLUME(Local_128.f_80);
	VOLUME::_DELETE_VOLUME(Local_128.f_83);
	VOLUME::_DELETE_VOLUME(Local_128.f_84);
	func_435(uParam0, 42, 62);
	MAP::REMOVE_BLIP(&(iLocal_1448[2]));
	return 1;
}

int func_746(var uParam0)
{
	bool bVar0;
	bVar0 = true;
	if (func_384(uParam0) == 2)
	{
		if (!iLocal_2369[2] == 2)
		{
			if (!func_1276(uParam0))
			{
				bVar0 = false;
			}
		}
	}
	if (!func_1230(0))
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
		return 0;
	}
	__LIB_10__::func_935(uParam0, Local_424[5 /*8*/], 0);
	__LIB_10__::func_935(uParam0, Local_424[4 /*8*/], 0);
	func_1252(uParam0, 6, 0);
	Local_1700 = 0;
	if (func_384(uParam0) == 1)
	{
		iLocal_2287 = 100;
		func_861(uParam0);
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_424[2 /*8*/], func_472(4, 1), func_1255(4, 1), true, false, true);
		ENTITY::_0x9587913B9E772D29(Local_424[2 /*8*/], 0);
	}
	return 1;
}

int func_747(var uParam0)
{
	Local_1700 = 0;
	CAM::_0xE296208C273BD7F0(1000, -1, 0, 17, 1, 0);
	func_1198(32);
	if (!func_1233(32))
	{
		return 0;
	}
	func_166(1);
	func_1203(2, 6, 1);
	func_1198(48);
	func_1198(49);
	func_1198(50);
	func_1198(51);
	WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Local_424[3 /*8*/], 10, false);
	return 1;
}

int func_748(var uParam0)
{
	func_1221(3, 1);
	func_178(5);
	func_1203(2, 6, 1);
	Local_1700.f_3[0 /*33*/] = 1;
	Local_1700.f_3[1 /*33*/] = 1;
	Local_1700.f_3[2 /*33*/] = 1;
	func_849(112);
	func_1198(57);
	func_1198(56);
	func_1198(55);
	__LIB_5__::func_372(uParam0, 21);
	__LIB_0__::func_172(Local_128.f_25);
	Local_128.f_25 = VOLUME::_CREATE_VOLUME_CYLINDER(100f, 100f, 100f, 0f, 0f, 0f, 0.5f, 0.5f, 2f);
	__LIB_11__::func_824(&(Local_128.f_25), joaat("VOLCYLINDER"));
	PED::_0x7C00CFC48A782DC0(Local_128.f_25, Local_424[3 /*8*/], 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
	if (func_384(uParam0) == 1)
	{
		__LIB_0__::func_489(0, 0);
	}
	return 1;
}

int func_749(var uParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	if (!iLocal_2305 == -1)
	{
		func_1279(uParam0);
	}
	fLocal_2286 = func_1280();
	iLocal_2284 = func_1281(1);
	iLocal_2285 = func_1281(3);
	func_1282(uParam0);
	func_1283();
	func_1177(uParam0);
	func_1178(uParam0);
	func_1284(uParam0);
	func_1285(uParam0);
	func_1286(uParam0);
	func_853(6);
	func_1287(uParam0);
	func_1288(uParam0);
	if (!func_164(109))
	{
		func_1289(uParam0);
	}
	if (func_1180(30, 0))
	{
		if (func_1233(32))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_35) && !ENTITY::IS_ENTITY_DEAD(Local_424[3 /*8*/]))
			{
				if (TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(func_438(32), ENTITY::GET_ENTITY_COORDS(Global_35, true, false), &iVar0) && TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(func_438(32), ENTITY::GET_ENTITY_COORDS(Local_424[3 /*8*/], true, false), &iVar1))
				{
					fVar2 = TASK::GET_WAYPOINT_DISTANCE_ALONG_ROUTE(func_438(32), iVar0);
					fVar3 = TASK::GET_WAYPOINT_DISTANCE_ALONG_ROUTE(func_438(32), iVar1);
					fVar4 = MISC::ABSF((fVar2 - fVar3));
					if (fVar4 < 7f && fVar4 > 4f)
					{
						func_849(105);
						func_178(106);
					}
					else if (fVar4 <= 4f)
					{
						func_178(105);
						func_849(106);
					}
					else
					{
						func_178(105);
						func_178(106);
					}
					if (iVar0 >= 54 && !Local_424[71 /*8*/].f_2 == 18)
					{
						if (!func_164(108))
						{
							func_849(108);
						}
					}
				}
			}
		}
	}
	if (func_164(105))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 2f);
			__LIB_9__::func_224(Local_424[3 /*8*/], 3f);
		}
	}
	else if (func_164(106))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			__LIB_9__::func_224(Local_424[3 /*8*/], 3f);
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
		}
	}
	if (func_164(108))
	{
	}
	if (Local_2328[6 /*5*/].f_1 == 8)
	{
		func_1199(6, 1);
	}
	if (!func_164(103))
	{
		if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_128.f_14, true, 0))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 1, false, false);
			WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
			func_849(103);
			func_178(112);
		}
	}
	if (!func_164(117))
	{
		if (func_1180(30, 24))
		{
			if (__LIB_0__::func_665(Global_35, Local_424[3 /*8*/], 1, 1) >= 40f)
			{
				func_1182(uParam0, 12);
				func_849(117);
			}
		}
	}
	else if (func_1180(30, 30))
	{
		if (__LIB_0__::func_665(Global_35, Local_424[3 /*8*/], 1, 1) <= 20f)
		{
			func_1182(uParam0, 11);
			func_178(117);
		}
		else if (__LIB_0__::func_665(Global_35, Local_424[3 /*8*/], 1, 1) >= 60f)
		{
			__LIB_5__::func_505(uParam0, func_1190(15), "", 1, 0);
		}
	}
	switch (__LIB_4__::func_971(uParam0))
	{
		case 0:
			func_1222(11, Local_424[3 /*8*/]);
			func_1182(uParam0, 11);
			func_1252(uParam0, 3, 1);
			MAP::_BLIP_SET_MODIFIER(Local_424[3 /*8*/].f_1, -401963276);
			MAP::_BLIP_SET_MODIFIER(Local_424[3 /*8*/].f_1, 231194138);
			__LIB_4__::func_952(uParam0, 1);
			break;
		case 1:
			if (!func_164(114))
			{
				if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_128.f_10, true, 0))
				{
					func_1200(976.9f, -6794f, 50f, -1082130432 /* Float: -1f */);
					func_1200(982.5f, -6791.3f, 50f, -1082130432 /* Float: -1f */);
					func_1200(983.1f, -6776.9f, 49.8f, -1082130432 /* Float: -1f */);
					func_849(114);
				}
			}
			if (iLocal_2284 >= 151)
			{
				if (!func_164(115))
				{
					if (PED::IS_PED_CLIMBING(Global_35))
					{
						WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
						WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 1, false, false);
						WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
						func_1200(1006.4f, -6752.6f, 65.4f, -1082130432 /* Float: -1f */);
						MAP::_BLIP_REMOVE_MODIFIER(Local_424[3 /*8*/].f_1, -546708623);
						vLocal_2104.f_1 = __LIB_8__::func_778(408396114, vLocal_2104.x, 1);
						MAP::SET_BLIP_NAME_FROM_TEXT_FILE(vLocal_2104.y, func_1190(1));
						func_849(115);
					}
				}
			}
			if (func_164(103) && iLocal_2284 >= (iLocal_2285 - 1))
			{
				if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_128.f_14, true, 0))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_2328[6 /*5*/], "pl_leadin_after_nowait", true);
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 1, false, false);
					WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
					Local_424[3 /*8*/].f_2 = 88;
				}
			}
			if (Local_424[3 /*8*/].f_2 == 88)
			{
				__LIB_4__::func_952(uParam0, 29);
			}
			if (func_164(112))
			{
				if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_128.f_27, true, 0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(vLocal_2104.x))
					{
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(vLocal_2104.x, true);
						TASK::TASK_ENTER_VEHICLE(Global_35, vLocal_2104.x, 20000, -1, 3f, 1, 0);
					}
					func_849(121);
					__LIB_4__::func_952(uParam0, 2);
				}
			}
			break;
		case 2:
			if (__LIB_0__::func_665(Global_35, vLocal_2104.x, 1, 1) <= 5f)
			{
				if (MAP::DOES_BLIP_EXIST(vLocal_2104.y))
				{
					MAP::REMOVE_BLIP(&(vLocal_2104.f_1));
				}
				__LIB_4__::func_952(uParam0, 29);
			}
			break;
		case 29:
			return 1;
	}
	return 0;
}

int func_750(var uParam0)
{
	func_910(uParam0, 27, 0);
	func_910(uParam0, 28, 0);
	func_910(uParam0, 29, 0);
	func_910(uParam0, 30, 0);
	func_1292();
	if (func_164(110) && !iLocal_2283 == -1)
	{
		AUDIO::STOP_STREAM(iLocal_2283);
	}
	func_436(32);
	return 1;
}

int func_751(var uParam0)
{
	if (func_384(uParam0) == 2)
	{
		if (!iLocal_2369[3] == 2)
		{
			if (!func_1287(uParam0))
			{
				return 0;
			}
		}
	}
	if (func_384(uParam0) == 1)
	{
		func_861(uParam0);
	}
	return 1;
}

int func_752(var uParam0)
{
	int iVar0;
	iVar0 = 1;
	CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
	CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
	VEHICLE::REQUEST_VEHICLE_ASSET(joaat("HOTCHKISS_CANNON"), 47);
	if (!VEHICLE::HAS_VEHICLE_ASSET_LOADED(joaat("HOTCHKISS_CANNON")))
	{
		iVar0 = 0;
		return 0;
	}
	if (!func_164(121))
	{
		if (func_384(uParam0) == 0)
		{
			if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_2328[6 /*5*/]) && !ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(Local_2328[6 /*5*/])) && !ANIMSCENE::_0xF94692EB9DC15D74(Local_2328[6 /*5*/], 0))
			{
				iVar0 = 0;
			}
		}
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	WEAPON::SET_CURRENT_PED_WEAPON(Local_424[3 /*8*/], joaat("WEAPON_UNARMED"), true, 0, false, false);
	func_435(uParam0, 63, 71);
	Local_1700 = 0;
	func_1198(func_1293(9));
	func_1198(func_1293(10));
	func_1198(func_1293(11));
	func_178(5);
	return 1;
}

int func_753(var uParam0)
{
	CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
	func_178(5);
	Local_1700.f_3[0 /*33*/] = 1;
	Local_1700.f_3[1 /*33*/] = 1;
	Local_1700.f_3[2 /*33*/] = 1;
	Local_1700 = 0;
	Local_1700.f_2 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_1700.f_1);
	MAP::_BLIP_SET_MODIFIER(Local_1700.f_2, -948075745);
	MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_1700.f_2, func_1190(4));
	__LIB_4__::func_944(uParam0, 4194304);
	__LIB_5__::func_298(uParam0, "MultiStart");
	Local_1700.f_3[0 /*33*/] = 1;
	Local_1700.f_3[0 /*33*/].f_4 = 1f;
	Local_1700.f_3[1 /*33*/] = 1;
	Local_1700.f_3[1 /*33*/].f_4 = 3f;
	Local_1700.f_3[2 /*33*/] = 1;
	Local_1700.f_3[2 /*33*/].f_4 = 8f;
	ENTITY::SET_ENTITY_MAX_HEALTH(Local_1700.f_1, 1000000);
	ENTITY::_SET_ENTITY_HEALTH(Local_1700.f_1, 1000000, 0);
	ENTITY::SET_ENTITY_INVINCIBLE(Local_1700.f_1, true);
	VEHICLE::SET_BOAT_SINKS_WHEN_WRECKED(Local_1700.f_1, true);
	VEHICLE::SET_DISABLE_VEHICLE_PETROL_TANK_DAMAGE(Local_1700.f_1, true);
	VEHICLE::SET_DISABLE_VEHICLE_ENGINE_FIRES(Local_1700.f_1, true);
	VEHICLE::SET_DISABLE_VEHICLE_PETROL_TANK_FIRES(Local_1700.f_1, true);
	WEAPON::_0x8A779706DA5CA3DD(vLocal_2104.x, 0, -1);
	__LIB_1__::func_283(&(vLocal_1569[35 /*3*/]), 0);
	__LIB_5__::func_372(uParam0, 26);
	func_849(127);
	__LIB_2__::func_462(&(vLocal_1569[41 /*3*/]), 6f, 0);
	func_443(6);
	return 1;
}

int func_754(var uParam0)
{
	int iVar0;
	bool bVar1;
	func_178(122);
	func_178(123);
	if (!func_164(126))
	{
		if (AUDIO::LOAD_STREAM(func_1294(14), func_1294(9)))
		{
			func_849(126);
		}
	}
	else if (iLocal_2306 == -1)
	{
		iLocal_2306 = AUDIO::_0x0556C784FA056628(func_1294(14), func_1294(9));
	}
	if (!__LIB_0__::func_75(&(vLocal_1569[42 /*3*/])))
	{
		if (FIRE::IS_EXPLOSION_IN_SPHERE(iLocal_2326, ENTITY::GET_ENTITY_COORDS(Local_1700.f_1, true, false), 75f))
		{
			__LIB_1__::func_283(&(vLocal_1569[42 /*3*/]), 0);
			func_849(122);
		}
		else if (FIRE::IS_EXPLOSION_IN_SPHERE(iLocal_2325, ENTITY::GET_ENTITY_COORDS(Local_1700.f_1, true, false), 75f))
		{
			iLocal_2311++;
			__LIB_1__::func_283(&(vLocal_1569[42 /*3*/]), 0);
			func_849(123);
		}
	}
	else if (__LIB_0__::func_265(&(vLocal_1569[42 /*3*/])) >= 0.25f)
	{
		__LIB_0__::func_37(&(vLocal_1569[42 /*3*/]));
	}
	func_853(7);
	CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
	func_1295();
	if (!func_164(125))
	{
		if (func_856(uParam0, 88, 100, 11))
		{
			iVar0 = 88;
			while (iVar0 <= 100)
			{
				ENTITY::SET_ENTITY_VISIBLE(Local_424[iVar0 /*8*/], false);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_424[iVar0 /*8*/], Local_1700.f_1, 0, 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
				iVar0++;
			}
			func_849(125);
		}
	}
	func_1296(uParam0);
	func_1297(uParam0);
	func_1298();
	func_1178(uParam0);
	func_1299();
	bVar1 = true;
	switch (__LIB_4__::func_971(uParam0))
	{
		case 0:
			bVar1 = true;
			if (func_384(uParam0) == 0)
			{
				func_910(uParam0, iLocal_2301, 0);
				iLocal_2301++;
				if (!iLocal_2301 > 71)
				{
					bVar1 = false;
				}
			}
			if (bVar1)
			{
				func_1182(uParam0, 13);
				__LIB_4__::func_952(uParam0, 1);
			}
			break;
		case 1:
			if (func_164(122))
			{
				iLocal_2310++;
				func_1300();
				if (!Local_1700.f_403 == 8)
				{
					func_1301(uParam0, Local_1700.f_403 + 1);
					switch (Local_1700.f_403)
					{
						case 1:
							GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD(func_1294(7), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1700.f_1, 7.16f, 10.1f, -1f), 0f, 0f, 0f, 1.5f, false, false, false);
							break;
						case 3:
							GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD(func_1294(7), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1700.f_1, 7.16f, 2.8f, -1f), 0f, 0f, 0f, 3f, false, false, false);
							break;
						case 4:
							GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD(func_1294(7), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1700.f_1, 4.37f, 19.04f, 3.46f), 0f, 0f, 0f, 3f, false, false, false);
							break;
						case 5:
							GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD(func_1294(7), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1700.f_1, 3.55f, 10.525f, 3.325f), 0f, 0f, 0f, 4f, false, false, false);
							break;
						case 6:
							GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD(func_1294(7), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1700.f_1, 3.56f, 0.2f, 2.88f), 0f, 0f, 0f, 3f, false, false, false);
							break;
						case 7:
							GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD(func_1294(7), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1700.f_1, 3.56f, 0.2f, 2.88f), 0f, 0f, 0f, 3f, false, false, false);
							break;
						case 8:
							GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD(func_1294(7), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1700.f_1, 1.61f, 9.18f, 9.76f), 0f, 0f, 0f, 3f, false, false, false);
							break;
					}
				}
			}
			if (PED::IS_PED_SHOOTING(Global_35))
			{
				__LIB_1__::func_148(&(vLocal_1569[34 /*3*/]));
			}
			if (func_164(124))
			{
				if (__LIB_0__::func_265(&(vLocal_1569[34 /*3*/])) >= 30f)
				{
					func_178(124);
					__LIB_4__::func_952(uParam0, 9);
				}
				else
				{
					if (iLocal_2310 >= 7)
					{
						func_1184(114);
						func_435(uParam0, 72, 87);
						func_436(58);
						func_436(59);
						__LIB_5__::func_372(uParam0, 29);
						__LIB_1__::func_283(&(vLocal_1569[33 /*3*/]), 0);
						func_1302();
						func_849(127);
						func_1303();
						func_1304(2, 0, 0f);
						func_1305(2, 1, 1, 1.9f);
						CAM::SHAKE_CAM(iLocal_1494[2], func_1294(15), 0.3f);
						UIFEED::_0xDD1232B332CBB9E7(1, 1, 0);
						UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
						func_849(118);
						func_1306();
						TASK::TASK_STAND_STILL(0, -1);
						func_1307(Local_424[4 /*8*/], 0f);
						func_1306();
						TASK::TASK_STAND_STILL(0, -1);
						func_1307(Local_424[5 /*8*/], 1f);
						func_1306();
						TASK::TASK_STAND_STILL(0, -1);
						func_1307(Local_424[6 /*8*/], 1.5f);
						func_910(uParam0, 12, 0);
						VEHICLE::SET_BOAT_ANCHOR(Local_1700.f_1, false);
						TASK::TASK_LEAVE_VEHICLE(Global_35, vLocal_2104.x, 0, 0);
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(vLocal_2104.x, false);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
						__LIB_4__::func_952(uParam0, 2);
					}
					Jump @1465; //curOff = 1197
					if (!CAM::IS_CAM_SHAKING(iLocal_1494[2]))
					{
						CAM::SHAKE_CAM(iLocal_1494[2], func_1294(16), 0.26f);
					}
					func_1303();
					func_1308();
					bVar1 = true;
					if (!func_856(uParam0, 9, 11, 7))
					{
						bVar1 = false;
					}
					if (!bVar1)
					{
					}
					else
					{
						if (!iLocal_2369[4] == 2)
						{
							func_1309(uParam0);
							bVar1 = false;
						}
						else
						{
							if (__LIB_4__::func_937(uParam0, 4194304))
							{
								__LIB_4__::func_969(uParam0, 4194304);
							}
							__LIB_4__::func_944(uParam0, 33554432);
							if (!__LIB_9__::func_307(uParam0, "SMG2_EXT"))
							{
								bVar1 = false;
							}
						}
						if ((!__LIB_0__::func_265(&(vLocal_1569[33 /*3*/])) >= 6f || __LIB_5__::func_236(1)) || __LIB_0__::func_481(1))
						{
							if (!iLocal_2324 == 0)
							{
								func_910(uParam0, iLocal_2324, 0);
								iLocal_2324++;
								if (iLocal_2324 > 87)
								{
									iLocal_2324 = 0;
								}
							}
							bVar1 = false;
						}
						if (bVar1)
						{
							__LIB_4__::func_952(uParam0, 29);
						}
						Jump @1465; //curOff = 1442
						func_1303();
						return 1;
						Jump @1465; //curOff = 1453
						func_1311(uParam0);
					}
				}
				return 0;
			}
			default:
				break;
	}
}

int func_755(var uParam0)
{
	if (MAP::DOES_BLIP_EXIST(Local_1700.f_2))
	{
		MAP::REMOVE_BLIP(&(Local_1700.f_2));
	}
	func_1303();
	HUD::_DISPLAY_HUD_COMPONENT(iLocal_2116);
	if (OBJECT::DOES_PICKUP_EXIST(iLocal_2320))
	{
		OBJECT::REMOVE_PICKUP(iLocal_2320);
	}
	if (iLocal_2311 == 0)
	{
		__LIB_9__::func_101(uParam0, joaat("SMG2_DESTROYSHIPNOMISS"));
	}
	ENTITY::FREEZE_ENTITY_POSITION(Local_1700.f_1, false);
	return 1;
}

bool func_756(var uParam0)
{
	bool bVar0;
	func_1198(func_1293(9));
	func_1198(func_1293(10));
	__LIB_5__::func_298(uParam0, "MultiStart");
	bVar0 = true;
	func_1198(func_1293(9));
	func_1198(func_1293(10));
	if (!func_1233(func_1293(9)) || !func_1233(func_1293(10)))
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
		return false;
	}
	if (!func_856(uParam0, 9, 10, 23))
	{
		bVar0 = false;
	}
	func_853(7);
	if (!Local_2328[7 /*5*/].f_1 == 8)
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
		return false;
	}
	if (func_384(uParam0) == 2)
	{
		if (!iLocal_2369[4] == 2)
		{
			if (!func_1309(uParam0))
			{
				bVar0 = false;
			}
		}
	}
	if (func_384(uParam0) == 1)
	{
		func_861(uParam0);
	}
	return bVar0;
}

int func_757(var uParam0)
{
	__LIB_0__::func_7(&Global_1935630, 1048576);
	__LIB_11__::func_417(uParam0, Local_2328[7 /*5*/], 0);
	func_849(127);
	return 1;
}

int func_758(var uParam0)
{
	func_178(5);
	func_174();
	CAM::_0xE296208C273BD7F0(0, 2147483647, 0, 17, 1, 0);
	CLOCK::SET_CLOCK_TIME(19, 20, 0);
	return 1;
}

int func_759(var uParam0)
{
	CAM::_0xE296208C273BD7F0(0, 2147483647, 0, 17, 1, 0);
	return 1;
}

int func_760(var uParam0)
{
	func_849(6);
	CAM::_0xE296208C273BD7F0(0, 2147483647, 0, 17, 1, 0);
	return 1;
}

Vector3 func_761(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	vVar0 = { func_217(iParam0, iParam1, iParam2) };
	return vVar0;
}

void func_767(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
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
		func_1316();
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

void func_769(var uParam0)
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
			func_836(iVar1, __LIB_4__::func_548(uParam0), __LIB_4__::func_549(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_836(iVar3, __LIB_4__::func_548(uParam0), __LIB_4__::func_549(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_770(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if ((__LIB_0__::func_84(uParam0, 268435456) && !__LIB_0__::func_86(__LIB_4__::func_548(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { __LIB_4__::func_548(uParam0) };
			func_836(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

int func_778(int iParam0, int iParam1)
{
	var uVar0;
	return func_1339(&uVar0, iParam0, iParam1);
}

bool func_828(var uParam0, int iParam1, var uParam2, bool bParam3, int iParam4, int iParam5, int iParam6, float fParam7, bool bParam8, int iParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13)
{
	if (!__LIB_0__::func_31(iParam1))
	{
		return false;
	}
	if ((!ENTITY::IS_ENTITY_DEAD(*uParam2) && __LIB_1__::func_22(iParam1)) && __LIB_0__::func_167(iParam1) == *uParam2)
	{
		return true;
	}
	*uParam2 = func_1369(iParam1, 1, 0, iParam4, iParam5, iParam6, fParam7, bParam8, 1, 0, 0, bParam10, 0, iParam9, 0, 0, 0, iParam11, 1, 1, bParam13, 0, 1, 0, 1);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam2))
	{
		func_1370(uParam0, *uParam2, iParam1, bParam3, (bParam8 && bParam12), bParam10, bParam13);
		__LIB_4__::func_703(iParam1);
		return true;
	}
	return false;
}

void func_836(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_836(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_836(iVar2, vParam1, fParam4, iParam5, iParam6);
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

bool func_838(var uParam0, int iParam1)
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
			func_767(&iVar0, 0, 2, 0, 0, 0, 0);
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

bool func_842(var uParam0, struct<4> Param1)
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
	if (func_1411(Param1, &(uParam0->f_7375), uParam0))
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

void func_849(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam0;
	while (iVar0 >= 32)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	__LIB_1__::func_336(&(uLocal_225[iVar1]), __LIB_0__::func_470(iVar0));
}

void func_850()
{
	iLocal_1452[5] = joaat("WEAPON_REVOLVER_CATTLEMAN");
	iLocal_1452[6] = joaat("WEAPON_REVOLVER_CATTLEMAN_DUALWIELD");
	iLocal_1452[3] = joaat("WEAPON_REVOLVER_DOUBLEACTION");
	iLocal_1452[4] = joaat("WEAPON_REVOLVER_DOUBLEACTION_DUALWIELD");
	iLocal_1452[2] = joaat("WEAPON_RIFLE_BOLTACTION");
	iLocal_1452[9] = joaat("WEAPON_SHOTGUN_DOUBLEBARREL");
	iLocal_1452[10] = joaat("WEAPON_REVOLVER_CATTLEMAN");
	iLocal_1452[11] = joaat("WEAPON_REVOLVER_CATTLEMAN_DUALWIELD");
	if (__LIB_0__::func_214(joaat("WEAPON_SNIPERRIFLE_ROLLINGBLOCK")) && WEAPON::HAS_PED_GOT_WEAPON(Global_35, joaat("WEAPON_SNIPERRIFLE_ROLLINGBLOCK"), 0, true))
	{
		iLocal_1452[0] = joaat("WEAPON_SNIPERRIFLE_ROLLINGBLOCK");
	}
	else if (__LIB_0__::func_214(joaat("WEAPON_SNIPERRIFLE_CARCANO")) && WEAPON::HAS_PED_GOT_WEAPON(Global_35, joaat("WEAPON_SNIPERRIFLE_CARCANO"), 0, true))
	{
		iLocal_1452[0] = joaat("WEAPON_SNIPERRIFLE_CARCANO");
	}
	else if (__LIB_0__::func_214(joaat("WEAPON_SNIPERRIFLE_ROLLINGBLOCK")))
	{
		iLocal_1452[0] = joaat("WEAPON_SNIPERRIFLE_ROLLINGBLOCK");
	}
	else if (__LIB_0__::func_214(joaat("WEAPON_SNIPERRIFLE_CARCANO")))
	{
		iLocal_1452[0] = joaat("WEAPON_SNIPERRIFLE_CARCANO");
	}
	else
	{
		iLocal_1452[0] = joaat("WEAPON_SNIPERRIFLE_ROLLINGBLOCK");
	}
	if (__LIB_0__::func_214(joaat("WEAPON_RIFLE_BOLTACTION")))
	{
		iLocal_1452[1] = joaat("WEAPON_RIFLE_BOLTACTION");
	}
	else if (__LIB_0__::func_214(joaat("WEAPON_RIFLE_SPRINGFIELD")))
	{
		iLocal_1452[1] = joaat("WEAPON_RIFLE_SPRINGFIELD");
	}
	else
	{
		iLocal_1452[1] = joaat("WEAPON_RIFLE_BOLTACTION");
	}
	iLocal_1452[7] = iLocal_1452[1];
	iLocal_1452[8] = iLocal_1452[1];
}

bool func_851(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bVar2 = true;
	iVar0 = 0;
	while (iVar0 < vLocal_243.x)
	{
		iVar1 = iVar0;
		if (__LIB_4__::func_688(vLocal_243[iVar1 /*3*/].f_2, iParam0))
		{
			if (vLocal_243[iVar1 /*3*/] == 0)
			{
				func_1198(iVar1);
				bVar2 = false;
			}
			else if (vLocal_243[iVar1 /*3*/] == 2)
			{
				bVar2 = false;
			}
		}
		iVar0++;
	}
	func_173();
	if (bVar2)
	{
		func_849(3);
	}
	return bVar2;
}

bool func_852(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;
	vector3 vVar8;
	if (func_164(7))
	{
		return true;
	}
	__LIB_4__::func_958(uParam0, 2);
	iVar0 = __LIB_4__::func_939(uParam0);
	iVar1 = func_384(uParam0);
	bVar2 = (iVar0 == 0 && iVar1 == 0);
	iVar3 = 1;
	iVar4 = 2;
	while (iVar4 <= 6)
	{
		if (!Local_424[iVar4 /*8*/].f_3 == 7)
		{
			if (iVar4 == 2)
			{
				vVar5 = { func_761(iVar4, 0, iVar0) };
			}
			if (!func_1418(uParam0, iVar4, bVar2, !func_433(iVar4) == -1, 1, func_217(iVar4, 0, iVar0)))
			{
				iVar3 = 0;
			}
		}
		iVar4++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_424[2 /*8*/]))
	{
		vVar8 = { ENTITY::GET_ENTITY_COORDS(Local_424[2 /*8*/], true, false) };
	}
	if (iVar3 == 0)
	{
		return false;
	}
	Local_424[1 /*8*/] = Global_35;
	__LIB_5__::func_106(uParam0, Local_424[2 /*8*/], "DUTCH", 0);
	__LIB_5__::func_106(uParam0, Local_424[4 /*8*/], "MICAH_BELL", 0);
	__LIB_5__::func_106(uParam0, Local_424[5 /*8*/], "BILL", 0);
	__LIB_5__::func_106(uParam0, Local_424[3 /*8*/], "HERCULE", 0);
	__LIB_5__::func_106(uParam0, Local_424[6 /*8*/], "SMG2_MAN", 0);
	if (!ENTITY::IS_ENTITY_DEAD(Local_424[3 /*8*/]))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_424[3 /*8*/], joaat("REL_GANG_DUTCHS"));
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_424[6 /*8*/]))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_424[6 /*8*/], joaat("REL_GANG_DUTCHS"));
	}
	__LIB_4__::func_945(uParam0, 2);
	func_849(7);
	return true;
}

void func_853(int iParam0)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	switch (Local_2328[iParam0 /*5*/].f_1)
	{
		case 0:
			Local_2328[iParam0 /*5*/].f_1 = 1;
		case 1:
			func_1419(iParam0);
			break;
		case 2:
			func_1419(iParam0);
			break;
		case 3:
			func_1419(iParam0);
			break;
		case 4:
			Local_2328[iParam0 /*5*/] = ANIMSCENE::_CREATE_ANIM_SCENE(func_1420(iParam0, 0), 0, func_1420(iParam0, 1), false, true);
			Local_2328[iParam0 /*5*/].f_1 = 5;
			break;
		case 5:
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_2328[iParam0 /*5*/], true, false))
			{
				iVar0 = 2;
				while (iVar0 <= 16)
				{
					sVar1 = func_1420(iParam0, iVar0);
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(Local_2328[iParam0 /*5*/], sVar1);
					}
					iVar0++;
				}
				Local_2328[iParam0 /*5*/].f_1 = 6;
			}
			else if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(Local_2328[iParam0 /*5*/], true))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(Local_2328[iParam0 /*5*/]);
			}
			break;
		case 6:
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_2328[iParam0 /*5*/], true, false))
			{
				iVar2 = 2;
				while (iVar2 <= 16)
				{
					sVar3 = func_1420(iParam0, iVar2);
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar3))
					{
						if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_2328[iParam0 /*5*/], sVar3))
						{
						}
						else
						{
							iVar2++;
							Local_2328[iParam0 /*5*/].f_1 = 7;
							Jump @754; //curOff = 379
							func_1419(iParam0);
							Local_2328[iParam0 /*5*/].f_1 = 8;
							Jump @754; //curOff = 399
							Jump @754; //curOff = 402
							if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_2328[iParam0 /*5*/]))
							{
							}
							if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_2328[iParam0 /*5*/], true, false))
							{
							}
							if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_2328[iParam0 /*5*/], false))
							{
								func_1419(iParam0);
								ANIMSCENE::START_ANIM_SCENE(Local_2328[iParam0 /*5*/]);
							}
							else
							{
								Local_2328[iParam0 /*5*/].f_1 = 10;
							}
							Jump @754; //curOff = 484
							if (Local_2328[iParam0 /*5*/].f_2)
							{
								iVar4 = 1;
								while (iVar4 <= 16)
								{
									sVar5 = func_1420(iParam0, iVar4);
									if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar5))
									{
										if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_2328[iParam0 /*5*/], sVar5))
										{
											if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_2328[iParam0 /*5*/], sVar5))
											{
												ANIMSCENE::_0xDF7B5144E25CD3FE(Local_2328[iParam0 /*5*/], sVar5);
											}
										}
									}
									iVar4++;
								}
							}
							if (ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(Local_2328[iParam0 /*5*/]) || ANIMSCENE::_0xF94692EB9DC15D74(Local_2328[iParam0 /*5*/], 0))
							{
								Local_2328[iParam0 /*5*/].f_1 = 11;
							}
							Jump @754; //curOff = 632
							if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_2328[iParam0 /*5*/], false))
							{
								Local_2328[iParam0 /*5*/].f_1 = 12;
							}
							Jump @754; //curOff = 661
							if (Local_2328[iParam0 /*5*/].f_4)
							{
								ANIMSCENE::RESET_ANIM_SCENE(Local_2328[iParam0 /*5*/], 0);
								Local_2328[iParam0 /*5*/].f_1 = 0;
							}
							else
							{
								Local_2328[iParam0 /*5*/].f_1 = 13;
							}
							Jump @754; //curOff = 712
							if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_2328[iParam0 /*5*/]))
							{
								ANIMSCENE::_DELETE_ANIM_SCENE(Local_2328[iParam0 /*5*/]);
							}
							Local_2328[iParam0 /*5*/].f_1 = 14;
						}
					}
				}
			}
			default:
				break;
	}
}

void func_854(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_4__::func_939(uParam0);
	switch (iVar0)
	{
		case 0:
		case 1:
		case 24:
			func_1421(-1, 1);
			break;
		case 2:
		case 3:
		case 4:
		case 5:
			iVar1 = 0;
			while (iVar1 < Local_14.f_91)
			{
				if ((ENTITY::DOES_ENTITY_EXIST(Local_14.f_91[iVar1]) && ENTITY::IS_ENTITY_A_MISSION_ENTITY(Local_14.f_91[iVar1])) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_14.f_91[iVar1], false))
				{
					OBJECT::DELETE_OBJECT(&(Local_14.f_91[iVar1]));
				}
				ITEMSET::_CLEAR_ITEMSET(Local_14.f_90);
				ITEMSET::DESTROY_ITEMSET(Local_14.f_90);
				iVar1++;
			}
			func_1422(-1, 1);
			break;
	}
}

bool func_855(var uParam0)
{
	struct<4> Var0;
	if (!ENTITY::IS_ENTITY_DEAD(Local_1700.f_1))
	{
		return true;
	}
	func_1198(9);
	if (!func_1233(9))
	{
		return false;
	}
	switch (__LIB_4__::func_939(uParam0))
	{
		case 0:
			Var0 = { 322.343f, -7287.216f, 46.497f };
			Var0.f_3 = -15.846f;
			break;
		case 1:
			Var0 = { func_470(7, 0) };
			break;
		case 2:
			Var0 = { func_470(7, 1) };
			break;
		case 3:
			Var0 = { func_470(7, 2) };
			break;
		case 4:
			Var0 = { func_470(7, 3) };
			break;
		case 5:
			Var0 = { func_470(7, 4) };
			break;
		case 25:
			Var0 = { func_470(7, 4) };
			break;
	}
	Local_1700.f_1 = VEHICLE::CREATE_VEHICLE(func_437(9), Var0, Var0.f_3, true, true, false, false);
	func_1301(uParam0, 0);
	ENTITY::_0x7A49D40DE437BC8D(Local_1700.f_1, 0);
	Local_1700.f_367 = MISC::GET_DISTANCE_BETWEEN_COORDS(func_1423(0), func_1423(5), true);
	if (__LIB_4__::func_939(uParam0) == 0)
	{
		ENTITY::SET_ENTITY_VISIBLE(Local_1700.f_1, false);
	}
	return true;
}

bool func_856(var uParam0, int iParam1, int iParam2, int iParam3)
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
	if (func_164(0))
	{
		return false;
	}
	iVar0 = __LIB_11__::func_825(iParam1, iParam2);
	iVar1 = func_1425(iParam1, iParam2);
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
		iVar1 = func_1425(iParam1, iParam2);
		iVar5 = (iParam1 + iVar1);
		iVar6 = iVar5;
		if (iVar1 == iVar0)
		{
			if (iParam3 & 4 != 0)
			{
				iVar7 = iParam1;
				while (iVar7 <= iParam2)
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_424[iVar7 /*8*/]))
					{
						if (!PED::_0xA0BC8FAED8CFEB3C(Local_424[iVar7 /*8*/]))
						{
							return false;
						}
						else if (func_1426(iVar7, &iVar3) && !func_1272(iVar7, 64))
						{
							PED::_SET_PED_BODY_COMPONENT(Local_424[iVar7 /*8*/], iVar3);
							PED::_UPDATE_PED_VARIATION(Local_424[iVar7 /*8*/], false, true, true, true, false);
							func_1269(iVar7, 64);
						}
					}
					iVar7++;
				}
			}
			return true;
		}
		func_1198(func_1293(iVar6));
		if (!func_1233(func_1293(iVar6)))
		{
			return false;
		}
		Var8 = { func_217(iVar6, 0, __LIB_4__::func_939(uParam0)) };
		Local_424[iVar6 /*8*/] = __LIB_8__::func_931(func_437(func_1293(iVar6)), Var8, Var8.f_3, 1, 1, func_1427(iVar6), 1, 1, !func_1426(iVar6, &iVar3), iParam3 & 8 == 0, func_1426(iVar6, &iVar3), 0, 0);
		func_849(0);
		if (iParam3 & 256 != 0)
		{
			ENTITY::SET_ENTITY_VISIBLE(Local_424[iVar6 /*8*/], false);
		}
		if (iParam3 & 256 != 512)
		{
			ENTITY::_0x9587913B9E772D29(Local_424[iVar6 /*8*/], 0);
		}
		if (iParam3 & 128 != 0)
		{
			func_1244(iVar6, 0);
		}
		if (iParam3 & 1 != 0)
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_424[iVar6 /*8*/], true);
		}
		if (iParam3 & 2 != 0)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(Local_424[iVar6 /*8*/], true);
		}
		if (iParam3 & 32 != 0)
		{
			__LIB_2__::func_930(Local_424[iVar6 /*8*/], 0);
		}
		if (iParam3 & 64 != 0)
		{
			ENTITY::_0x18FF3110CF47115D(Local_424[iVar6 /*8*/], 2, 0);
			ENTITY::_0x18FF3110CF47115D(Local_424[iVar6 /*8*/], 3, 0);
			ENTITY::_0x18FF3110CF47115D(Local_424[iVar6 /*8*/], 7, 0);
		}
		func_1221(iVar6, 1);
		iVar4++;
	}
	return false;
}

bool func_857(var uParam0)
{
	struct<4> Var0;
	if (!ENTITY::IS_ENTITY_DEAD(vLocal_2104.x))
	{
		return true;
	}
	func_1198(8);
	if (!func_1233(8))
	{
		return false;
	}
	switch (__LIB_4__::func_939(uParam0))
	{
		case 0:
		case 1:
			Var0 = { func_470(8, 0) };
			break;
		case 2:
		case 3:
			Var0 = { func_470(8, 1) };
			break;
		case 4:
		case 5:
		case 25:
			Var0 = { func_470(8, 2) };
			break;
	}
	vLocal_2104.x = VEHICLE::CREATE_VEHICLE(func_437(8), Var0, Var0.f_3, true, true, false, false);
	ENTITY::SET_ENTITY_INVINCIBLE(vLocal_2104.x, true);
	VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(vLocal_2104.x, false);
	return true;
}

int func_858(int iParam0, int iParam1)
{
	vector3 vVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1233[iParam0]))
	{
		return 1;
	}
	vVar0 = { func_1176(iParam0) };
	if (vVar0.f_6 == -1)
	{
		return 0;
	}
	func_1198(vVar0.f_6);
	if (!func_1233(vVar0.f_6))
	{
		return 0;
	}
	iLocal_1233[iParam0] = OBJECT::CREATE_OBJECT(func_437(vVar0.f_6), vVar0, true, true, false, false, true);
	if (!__LIB_0__::func_86(vVar0.f_3))
	{
		ENTITY::SET_ENTITY_ROTATION(iLocal_1233[iParam0], vVar0.f_3, 2, true);
	}
	if (iParam1 & 2 != 0)
	{
		ENTITY::SET_ENTITY_INVINCIBLE(iLocal_1233[iParam0], true);
	}
	if (iParam1 & 4 != 0)
	{
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_1233[iParam0], true);
	}
	if (iParam1 & 8 != 0)
	{
		ENTITY::SET_ENTITY_COORDS(iLocal_1233[iParam0], vVar0, true, false, true, true);
	}
	return 1;
}

int func_859(var uParam0)
{
	int iVar0;
	iVar0 = __LIB_4__::func_939(uParam0);
	if ((((iVar0 == 0 || iVar0 == 2) || iVar0 == 4) || iVar0 == 5) || iVar0 == 25)
	{
		if (!func_164(5))
		{
			func_1430(uParam0);
			func_849(5);
		}
	}
	switch (iVar0)
	{
		case 0:
			return func_1431(uParam0);
		case 2:
			return func_1432(uParam0);
		case 4:
			return func_1433(uParam0);
		case 5:
			return func_1434(uParam0);
		case 25:
			return func_1435(uParam0);
	}
	return 1;
}

int func_861(var uParam0)
{
	func_849(15);
	switch (__LIB_4__::func_939(uParam0))
	{
		case 0:
			Local_1265[1 /*13*/].f_5 = 0f;
			break;
		case 2:
			__LIB_5__::func_335(uParam0, Global_35);
			__LIB_6__::func_908(&(uParam0->f_7375), Global_35, "ARTHUR");
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_7375.f_804))
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_7375.f_804, "ARTHUR", Global_35);
			}
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, func_472(2, 0), func_1255(2, 0), true, false, true);
			ENTITY::_0x9587913B9E772D29(Global_35, 0);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_424[3 /*8*/], func_472(2, 4), func_1255(2, 4), true, false, true);
			ENTITY::_0x9587913B9E772D29(Local_424[3 /*8*/], 0);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_424[2 /*8*/], func_472(2, 1), func_1255(2, 1), true, false, true);
			ENTITY::_0x9587913B9E772D29(Local_424[2 /*8*/], 0);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_424[4 /*8*/], func_472(2, 2), func_1255(2, 2), true, false, true);
			ENTITY::_0x9587913B9E772D29(Local_424[4 /*8*/], 0);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_424[5 /*8*/], func_472(2, 3), func_1255(2, 3), true, false, true);
			ENTITY::_0x9587913B9E772D29(Local_424[5 /*8*/], 0);
			Local_1265[4 /*13*/].f_5 = 0f;
			break;
		case 4:
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, func_472(4, 0), func_1255(4, 0), true, false, true);
			ENTITY::_0x9587913B9E772D29(Global_35, 0);
			Local_1265[11 /*13*/].f_5 = 0f;
			break;
		case 5:
			PED::SET_PED_INTO_VEHICLE(Global_35, vLocal_2104.x, -1);
			Local_1265[13 /*13*/].f_5 = 0f;
			break;
	}
	return 1;
}

void func_863(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = PLAYER::_0x0139637A3BFF8B6D(Local_424[iParam0 /*8*/], &iVar0);
	if (!PLAYER::_0x0772F87D7B07719A(PLAYER::PLAYER_ID(), iVar0, iVar1))
	{
		PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), iVar0, iVar1);
	}
}

void func_864(var uParam0)
{
	int iVar0;
	int iVar1;
	switch (__LIB_4__::func_939(uParam0))
	{
		case 0:
			iVar0 = 16;
			break;
		case 1:
			iVar0 = 16;
			iVar1 = 30;
			break;
		case 2:
			iVar0 = 17;
			break;
		case 3:
			iVar0 = 17;
			iVar1 = 30;
			break;
		case 4:
			iVar0 = 18;
			break;
		case 5:
		case 25:
			iVar0 = 19;
			break;
	}
	CLOCK::SET_CLOCK_TIME(iVar0, iVar1, 0);
	MISC::_0x3373779BAF7CAF48("fog", "FOG_guama");
	MISC::_SET_WEATHER_TYPE(joaat("FOG"), true, true, false, 0f, false);
}

void func_867(var uParam0)
{
	if (!__LIB_0__::func_75(&(vLocal_1569[2 /*3*/])) || __LIB_0__::func_265(&(vLocal_1569[2 /*3*/])) >= 30f)
	{
		__LIB_1__::func_283(&(vLocal_1569[2 /*3*/]), 1);
		__LIB_5__::func_521(0.9f);
	}
	__LIB_0__::func_573();
	if (func_164(0))
	{
		func_178(0);
	}
	if (!func_164(16))
	{
		POPULATION::_0xC6DCC2A3A8825C85(1);
		func_849(16);
	}
	POPULATION::_0xF45E46DEECF7DF6E(14336, 0, 0, -1, -1);
	PED::_0xAB0D553FE20A6E25(0f);
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PATHFIND::_0xCF213A5FC3ABFC08(968f, -6782.1f, 200f);
	func_173();
	func_1441(uParam0);
	func_178(0);
	func_178(11);
	func_1442(uParam0);
	func_1241(uParam0);
}

bool func_884(var uParam0, int iParam1, int iParam2)
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
				func_36(uParam0, func_34(iParam1), func_34(iParam2), iParam1, iParam2);
			}
			else
			{
				Var0 = { func_34(iParam2) };
				Global_1347394 = { Var0 };
				Global_1347394.f_3 = Var0.f_3;
				Global_1572864.f_10 = __LIB_5__::func_24(iParam2);
			}
		}
		func_1453(uParam0);
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

bool func_886(var uParam0, int iParam1)
{
	struct<4> Var0;
	if (__LIB_4__::func_948(uParam0, 16384))
	{
		if (__LIB_16__::func_779(uParam0))
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
			if (__LIB_16__::func_779(uParam0))
			{
				__LIB_4__::func_969(uParam0, 2097152);
				func_842(uParam0, Var0);
			}
			return false;
		}
		else
		{
			return func_842(uParam0, Var0);
		}
	}
	else if (__LIB_4__::func_937(uParam0, 2097152))
	{
		if (__LIB_16__::func_779(uParam0))
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
		return func_842(uParam0, Var0);
	}
	return true;
}

void func_910(var uParam0, int iParam1, char* sParam2)
{
	if (iParam1 == 1)
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_424[iParam1 /*8*/]))
	{
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(Local_424[iParam1 /*8*/]))
		{
			if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_424[iParam1 /*8*/], false))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_424[iParam1 /*8*/]))
				{
					PED::SET_PED_CONFIG_FLAG(Local_424[iParam1 /*8*/], 77, false);
				}
				__LIB_5__::func_335(uParam0, Local_424[iParam1 /*8*/]);
				__LIB_6__::func_908(&(uParam0->f_7375), Local_424[iParam1 /*8*/], 0);
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_7375.f_804))
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
					{
						if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_7375.f_804, sParam2))
						{
							ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_7375.f_804, sParam2, Local_424[iParam1 /*8*/]);
						}
					}
				}
				if (func_433(iParam1) == -1)
				{
					PED::DELETE_PED(&(Local_424[iParam1 /*8*/]));
				}
				else
				{
					if (func_1272(iParam1, 32))
					{
						PED::SET_PED_SEEING_RANGE(Local_424[iParam1 /*8*/], 60f);
						func_1483(iParam1, 32);
					}
					if (iParam1 == 2)
					{
						PED::SET_PED_ACCURACY(Local_424[iParam1 /*8*/], 99);
					}
					else if (iParam1 == 4)
					{
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_424[4 /*8*/], 54, true);
						if (WEAPON::HAS_PED_GOT_WEAPON(Local_424[4 /*8*/], iLocal_1452[2], 0, false))
						{
							WEAPON::REMOVE_WEAPON_FROM_PED(Local_424[4 /*8*/], iLocal_1452[2], true, -142743235);
						}
					}
					__LIB_8__::func_824(uParam0, func_433(iParam1), Local_424[iParam1 /*8*/], 0, 1, 1, 0);
				}
			}
		}
	}
	func_1221(iParam1, 0);
}

struct<4> func_927(int iParam0, int iParam1)
{
	struct<4> Var0;
	Var0 = { func_929(iParam0, iParam1) };
	Var0.f_3 = func_1489(iParam0, iParam1);
	return Var0;
}

struct<4> func_928(int iParam0, int iParam1)
{
	struct<4> Var0;
	Var0 = { func_1490(iParam0, iParam1) };
	Var0.f_3 = func_1491(iParam0, iParam1);
	return Var0;
}

Vector3 func_929(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 999.871f, -6743.7f, 58.3177f;
				case 1:
					return 998.168f, -6745.41f, 58.3149f;
				case 2:
					return 999.273f, -6744.66f, 58.4902f;
				case 3:
					return 999.59f, -6747f, 58.3149f;
				case 4:
					return 998.064f, -6744.26f, 58.3149f;
				case 5:
					return 1002.54f, -6741.31f, 58.3151f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 988.0571f, -6745.314f, 63.1256f;
				case 1:
					return 986.8673f, -6747.034f, 63.1254f;
				case 2:
					return 989.9901f, -6751.226f, 63.1256f;
				case 3:
					return 988.3527f, -6750.646f, 63.1256f;
				case 4:
					return 987.6984f, -6749.496f, 63.1256f;
				case 5:
					return 987.1736f, -6748.573f, 63.1254f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 988.4625f, -6744.667f, 63.1256f;
				case 1:
					return 1000.754f, -6748.746f, 63.1236f;
				case 2:
					return 988.707f, -6751.3f, 62.639f;
				case 3:
					return 987.472f, -6748.64f, 62.6728f;
				case 4:
					return 993.7016f, -6746.649f, 63.1256f;
				case 5:
					return 992.0757f, -6737.284f, 63.1304f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 979.799f, -6791.117f, 49.9541f;
				case 1:
					return 978.6192f, -6794.664f, 49.9591f;
				case 2:
					return 987.3079f, -6748.836f, 63.1255f;
				case 3:
					return 988.5287f, -6751.548f, 63.1256f;
				case 4:
					return 980.4997f, -6794.222f, 49.971f;
				case 5:
					return 992.1332f, -6736.974f, 63.1285f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 972.592f, -6762.62f, 43.7952f;
				case 1:
					return 969.378f, -6762.99f, 43.8877f;
				case 2:
					return 987.3424f, -6748.801f, 66.8674f;
				case 3:
					return 988.798f, -6751.403f, 66.8677f;
				case 4:
					return 976.4438f, -6758.357f, 45.5177f;
				case 5:
					return 991.9814f, -6737.028f, 66.8717f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 988.4233f, -6746.622f, 63.1256f;
				case 1:
					return 969.0587f, -6762.982f, 43.8756f;
				case 2:
					return 987.3687f, -6748.817f, 63.1255f;
				case 3:
					return 988.6848f, -6751.418f, 63.1256f;
				case 4:
					return 987.81f, -6747.4f, 63.1256f;
				case 5:
					return 992.1605f, -6736.916f, 63.1281f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 968.7292f, -6762.623f, 43.8779f;
				case 1:
					return 970.9854f, -6764.909f, 43.9193f;
				case 2:
					return 973.0638f, -6765.11f, 43.8143f;
				case 3:
					return 974.5992f, -6764.864f, 43.9399f;
				case 4:
					return 970.048f, -6761.37f, 43.8845f;
				case 5:
					return 974.511f, -6763.205f, 43.8699f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 625.3817f, -7018.664f, 40.5366f;
				case 1:
					return 676.0899f, -6919.074f, 40.5366f;
				case 2:
					return 726.7546f, -6846.882f, 40.5366f;
				case 3:
					return 847.7308f, -6739.971f, 40.5366f;
				case 4:
					return 887.1172f, -6703.393f, 40.5366f;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return 997.3595f, -6745.451f, 62.7142f;
				case 1:
					return 985.9912f, -6744.869f, 62.715f;
				case 2:
					return 986.5625f, -6744.296f, 62.7164f;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 954.5724f, -6777.002f, 40.6879f;
				case 1:
					return 954.3553f, -6772.725f, 40.5835f;
				case 2:
					return 945.8754f, -6764.131f, 40.8204f;
				case 3:
					return 966.3506f, -6703.276f, 40.4444f;
				case 4:
					return 981.6458f, -6710.837f, 40.5734f;
				case 5:
					return 888.4033f, -6779.275f, 40.4485f;
				case 6:
					return 1080.364f, -6769.396f, 40.4499f;
				case 7:
					return 999.421f, -6876.28f, 40.482f;
				case 8:
					return 1078.488f, -6802.413f, 40.5208f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_930(bool bParam0, bool bParam1)
{
	vector3 vVar0;
	var uVar3;
	var uVar4;
	if (__LIB_0__::func_2() == -1)
	{
		func_1492();
	}
	else
	{
		return;
	}
	__LIB_0__::func_591();
	Global_40.f_9.f_14 = __LIB_0__::func_23();
	Global_40.f_9.f_20 = LAW::_GET_BOUNTY_FOR_PLAYER(PLAYER::GET_PLAYER_INDEX());
	Global_40.f_11999 = SAVE::_0xB00CE33465B5406D(1, "startup");
	if (bParam0 && !bParam1)
	{
		if (__LIB_0__::func_826())
		{
			__LIB_0__::func_322(Global_1310720.f_1);
		}
		else if (__LIB_0__::func_61() == __LIB_1__::func_447(Global_36, 1) && __LIB_0__::func_592() != 2)
		{
			__LIB_0__::func_322(Global_40.f_6);
			Global_40.f_9 = 1;
		}
		else
		{
			__LIB_0__::func_322(Global_36);
		}
		__LIB_1__::func_627(Global_36, &vVar0, &uVar4);
		if (!__LIB_0__::func_826())
		{
			if (__LIB_0__::func_62(vVar0, Global_36) < __LIB_0__::func_62(Global_40.f_9.f_7, Global_36))
			{
				__LIB_0__::func_322(vVar0);
				Global_40.f_9 = uVar4;
			}
			else
			{
				Global_40.f_9 = 0;
			}
		}
		Global_40.f_9.f_15 = __LIB_1__::func_447(Global_40.f_9.f_7, 1);
	}
	else if (!bParam0)
	{
		__LIB_1__::func_627(Global_36, &(Global_40.f_9.f_7), &(Global_40.f_9));
		MISC::OVERRIDE_SAVE_HOUSE(true, Global_40.f_9.f_7, 0f, true, &vVar0, &uVar3);
	}
	if (!bParam1)
	{
		__LIB_0__::func_7(&Global_1935630, 8192);
	}
	__LIB_1__::func_780();
}

void func_1095(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (bParam0)
	{
		func_312(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_312(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_312(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_1624(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_315(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_644(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_1629(Var0);
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

void func_1098(bool bParam0)
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
		func_312(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_312(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_312(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_312(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_312(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_312(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_312(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_312(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_312(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_312(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_312(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_644(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_644(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_644(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_644(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_644(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_644(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_644(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_644(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_644(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_644(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_644(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
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

int func_1142(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
							iVar49 = (iVar49 + func_1142(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1142(iVar63, -915411861, 1, 0, 0));
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

void func_1168(var uParam0, int iParam1)
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
		uParam0->f_1[iVar0 /*22*/][iVar1] = 62131;
		MISC::CLEAR_BIT(&(uParam0->f_1[iVar0 /*22*/].f_17), iVar1);
		iVar1++;
	}
}

bool func_1171(var uParam0)
{
	switch (iLocal_2369[0])
	{
		case 0:
			if (!func_384(uParam0) == 0)
			{
				func_858(4, 0);
				func_858(5, 0);
				func_858(6, 0);
				func_858(7, 0);
				func_858(8, 0);
			}
			iLocal_2369[0] = 1;
			break;
		case 1:
			__LIB_5__::func_262(&(uParam0->f_7375));
			__LIB_5__::func_580(uParam0, Global_35, "ARTHUR", 0, 0, 0, 0);
			__LIB_5__::func_580(uParam0, Local_424[2 /*8*/], "Dutch", 0, 0, 0, 0);
			__LIB_5__::func_580(uParam0, Local_424[4 /*8*/], "MicahBell", 0, 0, 0, 0);
			__LIB_5__::func_580(uParam0, Local_424[5 /*8*/], "BillWilliamson", 0, 0, 0, 0);
			__LIB_5__::func_580(uParam0, Local_424[3 /*8*/], "Hercule", 0, 0, 0, 0);
			__LIB_5__::func_580(uParam0, Local_424[6 /*8*/], "Leon", 0, 0, 0, 0);
			if (func_384(uParam0) == 2)
			{
				__LIB_5__::func_580(uParam0, iLocal_1233[4], "p_barstool01x", 0, 0, 0, 0);
				__LIB_5__::func_580(uParam0, iLocal_1233[5], "p_chair02x", 0, 0, 0, 0);
				__LIB_5__::func_580(uParam0, iLocal_1233[6], "p_chair02x^1", 0, 0, 0, 0);
				__LIB_5__::func_580(uParam0, iLocal_1233[7], "p_chair02x^2", 0, 0, 0, 0);
				__LIB_5__::func_580(uParam0, iLocal_1233[8], "p_chair02x^3", 0, 0, 0, 0);
			}
			iLocal_2369[0] = 2;
			return true;
	}
	return false;
}

void func_1175(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		__LIB_1__::func_948(600328988, 1, 0f, 0, 0, 0, 0, 0);
		__LIB_1__::func_948(917663984, 1, 0f, 0, 0, 0, 0, 0);
	}
	else if (bParam1)
	{
		__LIB_1__::func_948(600328988, 0, -1f, 0, 0, 0, 0, 0);
		__LIB_1__::func_948(917663984, 0, 1f, 0, 0, 0, 0, 0);
	}
	else
	{
		__LIB_1__::func_948(600328988, 0, 0f, 0, 0, 0, 0, 0);
		__LIB_1__::func_948(917663984, 0, 0f, 0, 0, 0, 0, 0);
	}
}

struct<7> func_1176(int iParam0)
{
	struct<7> Var0;
	Var0.f_6 = -1;
	switch (iParam0)
	{
		case 0:
			Var0 = { 987.09f, -6742.96f, 62.148f };
			Var0.f_3 = { -90.53f, 1.94f, 12f };
			Var0.f_6 = 13;
			break;
		case 1:
			Var0 = { 987.32f, -6742.9f, 62.148f };
			Var0.f_3 = { -90.53f, 1.94f, 160f };
			Var0.f_6 = 13;
			break;
		case 2:
			Var0 = { 987.61f, -6742.79f, 62.148f };
			Var0.f_3 = { -90.53f, 1.94f, -120f };
			Var0.f_6 = 13;
			break;
		case 3:
			Var0 = { 987.61f, -6742.71f, 62.148f };
			Var0.f_3 = { -90.53f, 1.94f, -160f };
			Var0.f_6 = 13;
			break;
		case 4:
			Var0 = { 999.8f, -6745.6f, 62.8f };
			Var0.f_3 = { 0f, 0f, 0f };
			Var0.f_6 = 11;
			break;
		case 5:
			Var0 = { 999.8f, -6745.6f, 62.8f };
			Var0.f_3 = { 0f, 0f, 0f };
			Var0.f_6 = 12;
			break;
		case 6:
			Var0 = { 999.8f, -6745.6f, 62.8f };
			Var0.f_3 = { 0f, 0f, 0f };
			Var0.f_6 = 12;
			break;
		case 7:
			Var0 = { 999.8f, -6745.6f, 62.8f };
			Var0.f_3 = { 0f, 0f, 0f };
			Var0.f_6 = 12;
			break;
		case 8:
			Var0 = { 999.8f, -6745.6f, 62.8f };
			Var0.f_3 = { 0f, 0f, 0f };
			Var0.f_6 = 12;
			break;
		case 9:
			Var0 = { 988.202f, -6751.43f, 62.45f };
			Var0.f_3 = { -3.81206f, -103.293f, 53.6641f };
			break;
		case 11:
			Var0 = { 994.3016f, -6736.557f, 58.3216f };
			Var0.f_3 = { 0f, 0f, 0f };
			Var0.f_6 = 14;
			break;
		case 10:
			Var0 = { 1000.47f, -6740.11f, 58.113f };
			Var0.f_3 = { 0f, 0f, 90f };
			Var0.f_6 = 14;
			break;
		case 13:
			Var0 = { 926f, -6794.8f, 55.6f };
			Var0.f_3 = { 982.1f, -6792.7f, 50f };
			Var0.f_6 = 15;
			break;
		case 14:
			Var0 = { 988.0254f, -6775.195f, 48.95f };
			Var0.f_3 = { 0f, 0f, -23f };
			Var0.f_6 = 19;
			break;
		case 15:
			Var0 = { 988.9224f, -6773.737f, 48.96f };
			Var0.f_3 = { 0f, 0f, -37f };
			Var0.f_6 = 16;
			break;
		case 16:
			Var0 = { 988.7167f, -6773.537f, 48.861f };
			Var0.f_3 = { 0f, 0f, -73f };
			Var0.f_6 = 17;
			break;
		case 17:
			Var0 = { 988.5262f, -6773.706f, 48.901f };
			Var0.f_3 = { -90f, 0f, -136f };
			Var0.f_6 = 18;
			break;
		case 18:
			Var0 = { 988.5623f, -6773.542f, 48.875f };
			Var0.f_3 = { -36f, 0f, -71f };
			Var0.f_6 = 18;
			break;
		case 19:
		case 21:
		case 23:
		case 25:
		case 27:
		case 29:
			Var0 = { 0f, 2.675f, 0.425f };
			Var0.f_3 = { 0f, 0f, 54.72f };
			Var0.f_6 = 14;
			break;
		case 20:
		case 22:
		case 24:
		case 26:
		case 28:
		case 30:
			Var0 = { -0.475f, -2.75f, 0.125f };
			Var0.f_3 = { 0f, 0f, 54.72f };
			Var0.f_6 = 14;
			break;
	}
	return Var0;
}

void func_1177(var uParam0)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	switch (__LIB_4__::func_939(uParam0))
	{
		case 0:
		case 1:
		case 2:
		case 3:
			if (!func_164(12))
			{
				if (CLOCK::GET_CLOCK_HOURS() == 18)
				{
					CLOCK::PAUSE_CLOCK(true, 0);
					func_849(12);
				}
			}
			break;
		case 4:
			if (TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(func_438(32), ENTITY::GET_ENTITY_COORDS(Global_35, true, false), &iVar0))
			{
				if (TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(func_438(32), &iVar3))
				{
					fVar1 = TASK::GET_WAYPOINT_DISTANCE_ALONG_ROUTE(func_438(32), (iVar3 - 1));
					fVar2 = TASK::GET_WAYPOINT_DISTANCE_ALONG_ROUTE(func_438(32), iVar0);
				}
				fLocal_2300 = __LIB_0__::func_251((fVar2 / fVar1), 0f, 1f);
				__LIB_5__::func_375(19, 0, fLocal_2300, &uLocal_2288);
			}
			break;
		case 5:
			break;
	}
}

void func_1178(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_1265)
	{
		if ((Local_1265[iVar0 /*13*/].f_12 && __LIB_0__::func_178(__LIB_4__::func_939(uParam0))) != 0)
		{
			switch (Local_1265[iVar0 /*13*/].f_1)
			{
				case 1:
					if (__LIB_5__::func_468(uParam0))
					{
						__LIB_0__::func_37(&(Local_1265[iVar0 /*13*/].f_2));
						Local_1265[iVar0 /*13*/].f_1 = 3;
					}
					else
					{
						if (Local_1265[iVar0 /*13*/] & 2 != 0)
						{
							if (!ENTITY::DOES_ENTITY_EXIST(Local_1265[iVar0 /*13*/].f_7))
							{
								return;
							}
						}
						if (Local_1265[iVar0 /*13*/] & 4 != 0)
						{
							if (!__LIB_0__::func_75(&(Local_1265[iVar0 /*13*/].f_2)))
							{
								__LIB_1__::func_283(&(Local_1265[iVar0 /*13*/].f_2), 0);
							}
							if (__LIB_0__::func_265(&(Local_1265[iVar0 /*13*/].f_2)) >= Local_1265[iVar0 /*13*/].f_5)
							{
								__LIB_0__::func_37(&(Local_1265[iVar0 /*13*/].f_2));
								Local_1265[iVar0 /*13*/].f_1 = 4;
							}
						}
						if (Local_1265[iVar0 /*13*/] & 1 != 0)
						{
							if (__LIB_0__::func_94(Global_35, Local_1265[iVar0 /*13*/].f_8, 1) >= Local_1265[iVar0 /*13*/].f_6)
							{
								Local_1265[iVar0 /*13*/].f_1 = 4;
							}
						}
						if (Local_1265[iVar0 /*13*/] & 2 != 0)
						{
							if (__LIB_0__::func_665(Global_35, Local_1265[iVar0 /*13*/].f_7, 1, 1) >= Local_1265[iVar0 /*13*/].f_6)
							{
								Local_1265[iVar0 /*13*/].f_1 = 4;
							}
						}
						Jump @385; //curOff = 337
						if (iLocal_2111 == 0)
						{
							__LIB_0__::func_37(&(Local_1265[iVar0 /*13*/].f_2));
							iLocal_2111 = Local_1265[iVar0 /*13*/].f_11;
							Local_1265[iVar0 /*13*/].f_1 = 5;
						}
					}
					iVar0++;
					default:
						break;
			}
		}
	}
}

void func_1179()
{
	if (__LIB_0__::func_75(&(vLocal_1569[4 /*3*/])))
	{
		switch (iLocal_2142)
		{
			case 0:
				func_1200(1021.8f, -6743.7f, 68.2f, 36f);
				PED::_0x09E378C52B1433B5(Global_35, 1000.3f, -6749.5f, 62.9f, 10f);
				iLocal_2142++;
				break;
			case 1:
				if (__LIB_0__::func_265(&(vLocal_1569[4 /*3*/])) >= 0.2f)
				{
					func_1200(1003.1f, -6745.4f, 66.8f, 36f);
					iLocal_2142++;
				}
				break;
			case 2:
				if (__LIB_0__::func_265(&(vLocal_1569[4 /*3*/])) >= 0.6f)
				{
					func_1200(1001.1f, -6725f, 65.3f, 36f);
					iLocal_2142++;
				}
				break;
			case 3:
				if (__LIB_0__::func_265(&(vLocal_1569[4 /*3*/])) >= 1.2f)
				{
					func_1200(994.9f, -6755.5f, 56.1f, 42f);
					iLocal_2142++;
				}
				break;
		}
	}
}

bool func_1180(int iParam0, int iParam1)
{
	return ((MISC::GET_FRAME_COUNT() + iParam1) % iParam0) == 0;
}

void func_1182(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_1265)
	{
		Local_1265[iVar0 /*13*/].f_1 = 0;
		__LIB_0__::func_37(&(Local_1265[iVar0 /*13*/].f_2));
		iVar0++;
	}
	UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
	__LIB_5__::func_486(uParam0, func_1190(Local_1265[iParam1 /*13*/].f_11), -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
	__LIB_0__::func_37(&(Local_1265[iParam1 /*13*/].f_2));
	Local_1265[iParam1 /*13*/].f_1 = 1;
}

void func_1184(int iParam0)
{
	iLocal_2113 = iParam0;
}

void func_1185(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			iLocal_1448[iParam0] = __LIB_4__::func_983(408396114, 988.9269f, -6747.51f, 65.8677f, 1);
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_1448[iParam0], func_1190(6));
			break;
		default:
			break;
	}
}

void func_1186()
{
	int iVar0;
	if (OBJECT::DOES_PICKUP_EXIST(iLocal_2135))
	{
		OBJECT::REMOVE_PICKUP(iLocal_2135);
	}
	if (iLocal_1452[0] == joaat("WEAPON_SNIPERRIFLE_ROLLINGBLOCK"))
	{
		iVar0 = joaat("PICKUP_WEAPON_SNIPERRIFLE_ROLLINGBLOCK");
	}
	else if (iLocal_1452[0] == joaat("WEAPON_SNIPERRIFLE_CARCANO"))
	{
		iVar0 = joaat("PICKUP_WEAPON_SNIPERRIFLE_CARCANO");
	}
	iLocal_2135 = OBJECT::CREATE_PICKUP_ROTATE(iVar0, vLocal_2136, vLocal_2139, 2 | 524288, 60, 2, true, 0, 0, 0f, 0);
}

char* func_1190(int iParam0)
{
	struct<2> Var0;
	Var0 = { func_1685(iParam0) };
	return Var0;
}

void func_1193(int iParam0)
{
	MAP::REMOVE_BLIP(&(iLocal_1448[iParam0]));
}

void func_1198(int iParam0)
{
	if (!vLocal_243[iParam0 /*3*/] == 0)
	{
		return;
	}
	if (iParam0 == -1)
	{
		return;
	}
	vLocal_243[iParam0 /*3*/] = 1;
}

bool func_1199(int iParam0, bool bParam1)
{
	if (!Local_2328[iParam0 /*5*/].f_1 == 8)
	{
		if (bParam1)
		{
		}
		return false;
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_2328[iParam0 /*5*/]))
	{
		return false;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_2328[iParam0 /*5*/], true, false))
	{
		return false;
	}
	Local_2328[iParam0 /*5*/].f_1 = 9;
	func_853(iParam0);
	return true;
}

int func_1200(vector3 vParam0, float fParam3)
{
	int iVar0;
	int iVar1;
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 10)
	{
		if (Local_1700.f_3[iVar1 /*33*/].f_11 == 0)
		{
			iVar0 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	if (iVar0 == -1)
	{
		return -1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_1700.f_3[iVar0 /*33*/].f_13.f_9))
	{
		OBJECT::DELETE_OBJECT(&(Local_1700.f_3[iVar0 /*33*/].f_13.f_9));
		Local_1700.f_3[iVar0 /*33*/].f_12 = 0;
	}
	Local_1700.f_3[iVar0 /*33*/].f_13.f_19 = fParam3;
	Local_1700.f_3[iVar0 /*33*/].f_13.f_10 = { vParam0 };
	Local_1700.f_3[iVar0 /*33*/].f_11 = 2;
	return iVar0;
}

void func_1203(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	iVar0 = iParam0;
	while (iVar0 <= iParam1)
	{
		if (!Local_424[iVar0 /*8*/].f_2 == 0 && !Local_424[iVar0 /*8*/].f_2 == 18)
		{
			func_1221(iVar0, iParam2);
		}
		iVar0++;
	}
}

void func_1204(int iParam0)
{
	struct<8> Var0;
	if (AICOVERPOINT::_0xC276FE69DDA22BAD(iLocal_230[iParam0]))
	{
		return;
	}
	Var0 = { func_1256(iParam0) };
	iLocal_230[iParam0] = TASK::ADD_COVER_POINT(Var0, Var0.f_3, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7);
}

void func_1206()
{
	vector3 vVar0;
	switch (iLocal_2376)
	{
		case 0:
			if (__LIB_0__::func_75(&(vLocal_1569[13 /*3*/])))
			{
				iLocal_2376 = 1;
			}
			break;
		case 1:
			if (__LIB_0__::func_265(&(vLocal_1569[13 /*3*/])) >= 40f)
			{
				iLocal_2376 = 2;
			}
			break;
		case 2:
			iLocal_2143 = func_1200(ENTITY::GET_ENTITY_COORDS(Local_424[5 /*8*/], true, false), -1082130432 /* Float: -1f */);
			__LIB_1__::func_296(func_433(5), 1, 1, 1);
			iLocal_2376 = 3;
			break;
		case 3:
			if (Local_1700.f_3[iLocal_2143 /*33*/].f_11 == 4)
			{
				FIRE::START_ENTITY_FIRE(Local_424[5 /*8*/], 100f, 0, 4);
				ENTITY::SET_ENTITY_DYNAMIC(Local_424[5 /*8*/], true);
				PHYSICS::ACTIVATE_PHYSICS(Local_424[5 /*8*/]);
				PED::SET_PED_TO_RAGDOLL_WITH_FALL(Local_424[5 /*8*/], 5000, 10000, 1, __LIB_0__::func_173(1f, 1f, 0f), 0f, 0f, 0f, 0f, 0f, 0f, 0f);
				vVar0 = { __LIB_1__::func_868(ENTITY::GET_ENTITY_COORDS(Local_424[5 /*8*/], true, false), ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 1f) };
				vVar0.x = (vVar0.x * 10f);
				vVar0.f_1 = (vVar0.y * 10f);
				vVar0.f_2 = (vVar0.z * 10f);
				vVar0.f_2 = (vVar0.z + 5f);
				ENTITY::APPLY_FORCE_TO_ENTITY(Local_424[5 /*8*/], 1, vVar0, 0f, 0f, 0f, 0, false, false, true, true, true);
				ENTITY::_SET_ENTITY_HEALTH(Local_424[5 /*8*/], 0, 0);
				iLocal_2376 = 4;
			}
			break;
		case 4:
			break;
	}
}

void func_1207(var uParam0)
{
	int iVar0;
	iVar0 = 13;
	while (iVar0 <= 26)
	{
		if (Local_424[iVar0 /*8*/].f_2 == 0 || Local_424[iVar0 /*8*/].f_2 == 18)
		{
		}
		else if (ENTITY::IS_ENTITY_DEAD(Local_424[iVar0 /*8*/]))
		{
			Local_1700.f_386++;
			func_1250(2);
			func_1221(iVar0, 18);
		}
		else if (func_1180(60, iVar0))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_424[iVar0 /*8*/], true, false), ENTITY::GET_ENTITY_COORDS(vLocal_2104.x, true, false), true) >= 190f)
			{
				ENTITY::_SET_ENTITY_HEALTH(Local_424[iVar0 /*8*/], 0, 0);
			}
			else
			{
				switch (Local_424[iVar0 /*8*/].f_2)
				{
					case 1:
						__LIB_1__::func_991(Local_424[iVar0 /*8*/], 0);
						if (((((iVar0 == 13 || iVar0 == 17) || iVar0 == 18) || iVar0 == 19) || iVar0 == 20) || iVar0 == 22)
						{
							PED::SET_PED_CONFIG_FLAG(Local_424[iVar0 /*8*/], 138, true);
						}
						if (iVar0 == 25 || iVar0 == 26)
						{
							func_1691(5, iVar0);
							func_1691(4, iVar0);
						}
						ENTITY::SET_ENTITY_LOD_DIST(Local_424[iVar0 /*8*/], 500);
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_424[iVar0 /*8*/], 1);
						ENTITY::_0x9587913B9E772D29(Local_424[iVar0 /*8*/], 0);
						PED::SET_PED_COMBAT_RANGE(Local_424[iVar0 /*8*/], 3);
						PED::SET_PED_SEEING_RANGE(Local_424[iVar0 /*8*/], 140f);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_424[iVar0 /*8*/], 111, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_424[iVar0 /*8*/], 30, true);
						func_1221(iVar0, 2);
						break;
					case 2:
						if (func_164(0))
						{
						}
						else
						{
							WEAPON::REMOVE_ALL_PED_WEAPONS(Local_424[iVar0 /*8*/], true, true);
							func_849(0);
							func_1221(iVar0, 3);
							Jump @1174; //curOff = 490
							if (func_164(0))
							{
							}
							else
							{
								__LIB_4__::func_7(Local_424[iVar0 /*8*/], iLocal_1452[1], -1, 3, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
								func_849(0);
								func_1221(iVar0, 8);
								Jump @1174; //curOff = 549
								func_1252(uParam0, iVar0, 1);
								switch (iVar0)
								{
									case 13:
									case 19:
										PED::_0xFC3DB99C8144CD81(Local_424[iVar0 /*8*/], Local_128.f_65, 0, 0, 0);
										break;
									case 14:
									case 20:
										PED::_0xFC3DB99C8144CD81(Local_424[iVar0 /*8*/], Local_128.f_67, 0, 0, 0);
										break;
									case 15:
									case 21:
										PED::_0xFC3DB99C8144CD81(Local_424[iVar0 /*8*/], Local_128.f_69, 0, 0, 0);
										break;
									case 16:
									case 22:
										PED::_0xFC3DB99C8144CD81(Local_424[iVar0 /*8*/], Local_128.f_71, 0, 0, 0);
										break;
									case 17:
									case 23:
									case 25:
										PED::_0xFC3DB99C8144CD81(Local_424[iVar0 /*8*/], Local_128.f_73, 0, 0, 0);
										break;
									case 18:
									case 24:
									case 26:
										PED::_0xFC3DB99C8144CD81(Local_424[iVar0 /*8*/], Local_128.f_75, 0, 0, 0);
										break;
									default:
										break;
								}
								PED::_0x9238A3D970BBB0A9(Local_424[iVar0 /*8*/], 1963457635);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_424[iVar0 /*8*/], 46, true);
								func_1306();
								TASK::_TASK_COMBAT_PED_3(0, VOLUME::_GET_VOLUME_COORDS(Local_128), 0, 0);
								func_1307(Local_424[iVar0 /*8*/], 0);
								func_1221(iVar0, 9);
								Jump @1174; //curOff = 849
								switch (iVar0)
								{
									case 13:
									case 19:
										PED::_0xFC3DB99C8144CD81(Local_424[iVar0 /*8*/], Local_128.f_66, 0, 0, 0);
										break;
									case 14:
									case 20:
										PED::_0xFC3DB99C8144CD81(Local_424[iVar0 /*8*/], Local_128.f_68, 0, 0, 0);
										break;
									case 15:
									case 21:
										PED::_0xFC3DB99C8144CD81(Local_424[iVar0 /*8*/], Local_128.f_70, 0, 0, 0);
										break;
									case 16:
									case 22:
										PED::_0xFC3DB99C8144CD81(Local_424[iVar0 /*8*/], Local_128.f_72, 0, 0, 0);
										break;
									case 17:
									case 23:
										PED::_0xFC3DB99C8144CD81(Local_424[iVar0 /*8*/], Local_128.f_74, 0, 0, 0);
										break;
									case 18:
									case 24:
										PED::_0xFC3DB99C8144CD81(Local_424[iVar0 /*8*/], Local_128.f_76, 0, 0, 0);
										break;
									default:
										break;
								}
								func_1306();
								TASK::_TASK_COMBAT_PED_3(0, VOLUME::_GET_VOLUME_COORDS(Local_128), 0, 0);
								func_1307(Local_424[iVar0 /*8*/], 0);
								func_1221(iVar0, 11);
								Jump @1174; //curOff = 1098
								if (func_164(9))
								{
									func_1221(iVar0, 16);
								}
								Jump @1174; //curOff = 1118
								TASK::TASK_COMBAT_PED(Local_424[iVar0 /*8*/], Global_35, 16777216, 16);
								func_1221(iVar0, 17);
								Jump @1174; //curOff = 1150
								if (!func_164(9))
								{
									func_1221(iVar0, 8);
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

void func_1208()
{
	vector3 vVar0;
	switch (Local_424[2 /*8*/].f_2)
	{
		case 1:
			func_1221(2, 13);
		case 13:
			if (ANIMSCENE::_0x005E6F28DD7ED58D(Local_2328[1 /*5*/], "Dutch") || ANIMSCENE::_0xF94692EB9DC15D74(Local_2328[1 /*5*/], 0))
			{
				vVar0 = { func_1256(0) };
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_424[2 /*8*/], 30, true);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_424[2 /*8*/], vVar0, 1f, 0, 0, 0);
				func_1306();
				TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, vVar0, 3000, 0, 1f, 1, 0, iLocal_230[0], 0, 0, 0);
				TASK::TASK_COMBAT_PED_TIMED(0, Local_424[12 /*8*/], 10000, 117440512);
				func_1307(Local_424[2 /*8*/], 0);
				PED::_0x2208438012482A1A(Local_424[2 /*8*/], true, false);
				func_1221(2, 17);
			}
			break;
		case 17:
			if (!func_1692(Local_424[2 /*8*/]))
			{
				func_1184(32);
				TASK::REMOVE_COVER_POINT(iLocal_230[0]);
				PATHFIND::_0x19C7567D2F2287D6(Local_128.f_34, 7);
				func_1221(2, 8);
			}
			break;
		case 8:
			PED::_0xFC3DB99C8144CD81(Local_424[2 /*8*/], Local_128.f_85, 1, 0, 0);
			PED::_0xFC3DB99C8144CD81(Local_424[2 /*8*/], Local_128.f_88, 1, 1, 0);
			PED::_0x4EC4EA2F72B36358(Local_424[2 /*8*/], 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_424[2 /*8*/], 30, true);
			TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(Local_424[2 /*8*/], vLocal_2163, 150f, 100663296, 84);
			__LIB_1__::func_283(&(vLocal_1569[25 /*3*/]), 1);
			func_1221(2, 9);
			break;
		case 9:
			if (!__LIB_16__::func_776(Local_424[2 /*8*/], 1120685857))
			{
				func_1221(2, 8);
			}
			break;
	}
}

void func_1209()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	int iVar12;
	iVar0 = 4;
	while (iVar0 <= 5)
	{
		if (ENTITY::IS_ENTITY_DEAD(Local_424[iVar0 /*8*/]))
		{
		}
		else
		{
			switch (Local_424[iVar0 /*8*/].f_2)
			{
				case 1:
					PED::SET_PED_SEEING_RANGE(Local_424[iVar0 /*8*/], 140f);
					func_1221(iVar0, 13);
				case 13:
					if ((iVar0 == 5 && ANIMSCENE::_0x005E6F28DD7ED58D(Local_2328[1 /*5*/], "BillWilliamson")) || (iVar0 == 4 && ANIMSCENE::_0x005E6F28DD7ED58D(Local_2328[1 /*5*/], "MicahBell")))
					{
						if (iVar0 == 5)
						{
							func_1184(29);
							iVar12 = 1;
						}
						else if (iVar0 == 4)
						{
							iVar12 = 2;
						}
						vVar2 = { func_1256(iVar12) };
						TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Local_424[iVar0 /*8*/], vVar2, 20000, 0, 0f, 1, 0, iLocal_230[iVar12], 0, 0, 0);
						PED::_0x2208438012482A1A(Local_424[iVar0 /*8*/], true, false);
						if (iVar0 == 5)
						{
							__LIB_1__::func_283(&(vLocal_1569[7 /*3*/]), 0);
						}
						else if (iVar0 == 4)
						{
							__LIB_1__::func_283(&(vLocal_1569[8 /*3*/]), 0);
						}
						func_1221(iVar0, 8);
					}
					break;
				case 8:
					if (iVar0 == 5)
					{
						if (__LIB_0__::func_75(&(vLocal_1569[7 /*3*/])) && !__LIB_0__::func_265(&(vLocal_1569[7 /*3*/])) >= 2.5f)
						{
						}
						else
						{
							Jump @387; //curOff = 342
							if (iVar0 == 4)
							{
								if (__LIB_0__::func_75(&(vLocal_1569[8 /*3*/])) && !__LIB_0__::func_265(&(vLocal_1569[8 /*3*/])) >= 4f)
								{
								}
								else
								{
									if (iVar0 == 5)
									{
										__LIB_1__::func_283(&(vLocal_1569[3 /*3*/]), 0);
										if (AICOVERPOINT::_0xC276FE69DDA22BAD(iLocal_230[1]))
										{
											TASK::REMOVE_COVER_POINT(iLocal_230[1]);
										}
										PED::_0xFC3DB99C8144CD81(Local_424[iVar0 /*8*/], Local_128.f_39, 1, 0, 0);
										PED::_0xFC3DB99C8144CD81(Local_424[iVar0 /*8*/], Local_128.f_86, 1, 1, 0);
										PED::_0x4EC4EA2F72B36358(Local_424[iVar0 /*8*/], 1);
										vVar2 = { func_1256(1) };
									}
									else if (iVar0 == 4)
									{
										if (AICOVERPOINT::_0xC276FE69DDA22BAD(iLocal_230[2]))
										{
											TASK::REMOVE_COVER_POINT(iLocal_230[2]);
										}
										if (!__LIB_0__::func_75(&(vLocal_1569[27 /*3*/])))
										{
											__LIB_1__::func_283(&(vLocal_1569[27 /*3*/]), 0);
										}
										vVar2 = { func_1256(2) };
										PED::_0xFC3DB99C8144CD81(Local_424[iVar0 /*8*/], Local_128.f_40, 1, 0, 0);
										PED::_0xFC3DB99C8144CD81(Local_424[iVar0 /*8*/], Local_128.f_87, 1, 1, 0);
										PED::_0x4EC4EA2F72B36358(Local_424[iVar0 /*8*/], 1);
									}
									PED::SET_PED_COMBAT_MOVEMENT(Local_424[iVar0 /*8*/], 1);
									iVar1 = 13;
									while (iVar1 <= 26)
									{
										func_1691(iVar0, iVar1);
										iVar1++;
									}
									TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(Local_424[iVar0 /*8*/], vLocal_2163, 150f, 100663296, 84);
									func_1221(iVar0, 9);
									Jump @1516; //curOff = 674
									if (iVar0 == 5)
									{
										if (func_1694())
										{
											if (__LIB_0__::func_265(&(vLocal_1569[3 /*3*/])) >= 12f)
											{
												if (iLocal_2113 == 0)
												{
													iVar1 = 13;
													while (iVar1 <= 26)
													{
														if (Local_424[iVar1 /*8*/].f_2 == 9 || Local_424[iVar1 /*8*/].f_2 == 11)
														{
															if (((!ENTITY::IS_ENTITY_DEAD(Local_424[iVar1 /*8*/]) && !__LIB_6__::func_904()) && !__LIB_5__::func_463()) && iLocal_2113 == 0)
															{
																if (ENTITY::IS_ENTITY_IN_VOLUME(Local_424[iVar1 /*8*/], Local_128.f_28, true, 0))
																{
																	func_1184(39);
																	Jump @939; //curOff = 831
																}
																else if (ENTITY::IS_ENTITY_IN_VOLUME(Local_424[iVar1 /*8*/], Local_128.f_29, true, 0))
																{
																	func_1184(40);
																	Jump @939; //curOff = 863
																}
																else if (ENTITY::IS_ENTITY_IN_VOLUME(Local_424[iVar1 /*8*/], Local_128.f_30, true, 0))
																{
																	func_1184(41);
																	Jump @939; //curOff = 895
																}
																else if (ENTITY::IS_ENTITY_IN_VOLUME(Local_424[iVar1 /*8*/], Local_128.f_31, true, 0))
																{
																	func_1184(42);
																}
																else
																{
																	iVar1++;
																}
																__LIB_1__::func_148(&(vLocal_1569[3 /*3*/]));
																if (func_1220(13, 24, 18) == 0)
																{
																	func_1221(5, 6);
																	func_1221(4, 6);
																}
																if (!__LIB_16__::func_776(Local_424[5 /*8*/], 1120685857))
																{
																	func_1221(5, 8);
																}
																Jump @1516; //curOff = 999
																if (iVar0 == 5)
																{
																	iVar12 = 1;
																}
																else if (iVar0 == 4)
																{
																	iVar12 = 3;
																}
																if (!AICOVERPOINT::_0xC276FE69DDA22BAD(iLocal_230[iVar12]))
																{
																	func_1204(iVar12);
																}
																vVar2 = { func_1256(iVar12) };
																func_1306();
																TASK::TASK_AIM_AT_ENTITY(0, Local_1700.f_1, MISC::GET_RANDOM_INT_IN_RANGE(4000, 8000), 1, 0);
																TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, vVar2, ENTITY::GET_ENTITY_COORDS(Local_1700.f_1, true, false), 1.5f, 0, 1f, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 0);
																TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, vVar2, MISC::GET_RANDOM_INT_IN_RANGE(5000, 12000), 0, 0f, 1, 0, iLocal_230[iVar12], 0, 0, 0);
																TASK::SET_SEQUENCE_TO_REPEAT(iLocal_2114, true);
																func_1307(Local_424[iVar0 /*8*/], __LIB_5__::func_439(iVar0 == 5, 0f, 0.3f));
																func_1221(iVar0, 7);
																Jump @1516; //curOff = 1193
																if (iVar0 == 5)
																{
																	if (vLocal_2104.z >= 4)
																	{
																		func_1221(5, 10);
																		func_1221(4, 10);
																	}
																	else
																	{
																		Jump @1516; //curOff = 1228
																		if (func_164(38))
																		{
																			if (iVar0 == 5)
																			{
																				PED::_0xFC3DB99C8144CD81(Local_424[iVar0 /*8*/], Local_128.f_41, 1, 0, 0);
																			}
																			else if (iVar0 == 4)
																			{
																				PED::_0xFC3DB99C8144CD81(Local_424[iVar0 /*8*/], Local_128.f_39, 1, 0, 0);
																			}
																			func_1691(iVar0, 36);
																			if (iVar0 == 4)
																			{
																				if (iVar0 == 4)
																				{
																					WEAPON::SET_CURRENT_PED_WEAPON(Local_424[iVar0 /*8*/], iLocal_1452[3], false, 0, false, false);
																					WEAPON::SET_CURRENT_PED_WEAPON(Local_424[iVar0 /*8*/], iLocal_1452[4], false, 1, false, false);
																					TASK::TASK_SWAP_WEAPON(Local_424[iVar0 /*8*/], 1, 1, 0, 0);
																					PED::SET_PED_COMBAT_ATTRIBUTES(Local_424[iVar0 /*8*/], 54, false);
																				}
																			}
																			func_1306();
																			TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, PED::GET_PED_DEFENSIVE_AREA_POSITION(Local_424[iVar0 /*8*/], false), 950.5f, -6768.7f, 41.2f, 1.5f, 0, 0.5f, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 0);
																			if (!ENTITY::IS_ENTITY_DEAD(Local_424[36 /*8*/]))
																			{
																				TASK::TASK_COMBAT_PED(0, Local_424[36 /*8*/], 0, 0);
																			}
																			if (iVar0 == 4)
																			{
																				func_1307(Local_424[iVar0 /*8*/], 2f);
																			}
																			else
																			{
																				func_1307(Local_424[iVar0 /*8*/], 0);
																			}
																			func_1221(iVar0, 11);
																		}
																		iVar0++;
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
							}
						}
					}
					default:
						break;
			}
		}
	}
}

void func_1210()
{
	switch (Local_424[3 /*8*/].f_2)
	{
		case 1:
			func_1221(3, 13);
		case 13:
			if (!func_164(31))
			{
				if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_128.f_95, true, 0))
				{
					if (ANIMSCENE::_GET_ANIM_SCENE_TIME(Local_2328[1 /*5*/]) >= 14.5f)
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Global_35, 989.9581f, -6744.795f, 63.1255f, 1f, 20000, 0.25f, 0, 109f);
						func_849(31);
					}
				}
			}
			if (ANIMSCENE::_0x005E6F28DD7ED58D(Local_2328[1 /*5*/], "Hercule"))
			{
				VOLUME::_DELETE_VOLUME(Local_128.f_19);
				VOLUME::_DELETE_VOLUME(Local_128.f_95);
				TASK::TASK_ENTER_ANIM_SCENE(Local_424[3 /*8*/], Local_2328[2 /*5*/], "HERCULE", "pbl_hercule_push_intro", 3f, 1, 3, 20000, -1082130432 /* Float: -1f */);
				PED::_0x2208438012482A1A(Local_424[3 /*8*/], true, false);
				PED::FORCE_PED_MOTION_STATE(Local_424[3 /*8*/], joaat("MOTIONSTATE_SPRINT"), false, 0, false);
				__LIB_1__::func_283(&(vLocal_1569[6 /*3*/]), 0);
				func_1221(3, 14);
			}
			break;
		case 14:
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_2328[2 /*5*/], false))
			{
				func_1221(3, 5);
			}
			break;
		case 5:
			if (__LIB_0__::func_265(&(vLocal_1569[6 /*3*/])) >= 10f)
			{
				if ((iLocal_2113 == 0 && !__LIB_5__::func_236(1)) && !__LIB_0__::func_481(1))
				{
					func_1184(24);
					func_849(28);
					__LIB_0__::func_37(&(vLocal_1569[6 /*3*/]));
					func_1221(3, 15);
				}
			}
			break;
		case 15:
			break;
		case 16:
			break;
	}
}

void func_1211()
{
	vector3 vVar0;
	int iVar10;
	switch (Local_424[6 /*8*/].f_2)
	{
		case 1:
			func_1198(40);
			func_1198(41);
			func_1198(42);
			func_1198(43);
			func_1221(6, 13);
		case 13:
			if (ANIMSCENE::_0x005E6F28DD7ED58D(Local_2328[1 /*5*/], "Frenchman"))
			{
				vVar0 = { func_1256(5) };
				__LIB_4__::func_7(Local_424[6 /*8*/], iLocal_1452[2], -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
				func_849(0);
				if (!WEAPON::_0xFF07CF465F48B830(iLocal_1452[2]))
				{
				}
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_424[6 /*8*/], vVar0, 1.5f, 1, 0, 0);
				func_1306();
				TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, vVar0, -1, 1, 0f, 1, 1, iLocal_230[5], 0, 0, 0);
				func_1307(Local_424[6 /*8*/], 0);
				PED::_0x2208438012482A1A(Local_424[6 /*8*/], true, false);
				__LIB_1__::func_283(&(vLocal_1569[15 /*3*/]), 0);
				func_1221(6, 9);
			}
			break;
		case 9:
			if (__LIB_0__::func_265(&(vLocal_1569[15 /*3*/])) >= 3f)
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Local_424[6 /*8*/], iLocal_1452[8], true, 0, false, false);
				__LIB_0__::func_172(Local_128.f_25);
				Local_128.f_25 = VOLUME::_CREATE_VOLUME_CYLINDER(ENTITY::GET_ENTITY_COORDS(Local_424[6 /*8*/], true, false), 0f, 0f, 0f, 0.75f, 0.75f, 2f);
				__LIB_11__::func_824(&(Local_128.f_25), joaat("VOLCYLINDER"));
				PED::_0x7C00CFC48A782DC0(Local_128.f_25, Local_424[6 /*8*/], 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
				func_1221(6, 6);
			}
			break;
		case 6:
			iVar10 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			func_1306();
			TASK::TASK_SHOOT_AT_ENTITY(0, Local_1700.f_1, MISC::GET_RANDOM_INT_IN_RANGE(3000, 12000), joaat("FIRING_PATTERN_BURST_FIRE"), 0);
			if (iVar10 == 0)
			{
				if (func_1233(40))
				{
					func_1695(0, 40, 1.5f, -1.5f, -1, 16516, 0);
				}
			}
			else if (iVar10 == 1)
			{
				if (func_1233(41))
				{
					func_1695(0, 41, 1.5f, -1.5f, -1, 16516, 0);
				}
			}
			else if (iVar10 == 2)
			{
				if (func_1233(42))
				{
					func_1695(0, 42, 1.5f, -1.5f, -1, 16516, 0);
				}
			}
			func_1307(Local_424[6 /*8*/], 0);
			__LIB_1__::func_283(&(vLocal_1569[15 /*3*/]), 1);
			func_1221(6, 7);
			break;
		case 7:
			if (!func_1692(Local_424[6 /*8*/]))
			{
				func_1221(6, 6);
			}
			break;
	}
}

int func_1212(var uParam0)
{
	int iVar0;
	float fVar1;
	bool bVar2;
	int iVar3;
	float fVar4;
	if (func_164(35))
	{
		func_1696();
	}
	if (vLocal_2104.z == 1 || vLocal_2104.z == 2)
	{
		__LIB_1__::func_283(&(vLocal_1569[10 /*3*/]), 0);
		if (vLocal_2104.z == 2)
		{
			__LIB_1__::func_283(&(vLocal_1569[11 /*3*/]), 0);
		}
		if (func_164(11))
		{
			if (ANIMSCENE::_0x8D81E7824B7753F7(Local_2328[2 /*5*/], "s_Base_Push", 1))
			{
				if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_2328[2 /*5*/], "pbl_Flinch_Left") && ANIMSCENE::_0x23E33CB9F4A3F547(Local_2328[2 /*5*/], "pbl_Flinch_Right"))
				{
					if (__LIB_1__::func_985())
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_2328[2 /*5*/], "pbl_Flinch_Left", true);
					}
					else
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_2328[2 /*5*/], "pbl_Flinch_Right", true);
					}
				}
				else if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_2328[2 /*5*/], "pbl_Flinch_Left"))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_2328[2 /*5*/], "pbl_Flinch_Left", true);
				}
				else if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_2328[2 /*5*/], "pbl_Flinch_Right"))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_2328[2 /*5*/], "pbl_Flinch_Right", true);
				}
			}
		}
		if (__LIB_0__::func_265(&(vLocal_1569[10 /*3*/])) >= 30f)
		{
			if (ANIMSCENE::_0x8D81E7824B7753F7(Local_2328[2 /*5*/], "s_base_push", 1))
			{
				if (vLocal_2104.z == 2)
				{
					if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_2328[2 /*5*/], "pbl_hercule_callover"))
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_2328[2 /*5*/], "pbl_hercule_callover", true);
						__LIB_1__::func_148(&(vLocal_1569[10 /*3*/]));
					}
				}
				else
				{
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
					if (iVar0 == 0 && ANIMSCENE::_0x23E33CB9F4A3F547(Local_2328[2 /*5*/], "pbl_Push_idle_v01"))
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_2328[2 /*5*/], "pbl_Push_idle_v01", true);
					}
					else if (iVar0 == 1 && ANIMSCENE::_0x23E33CB9F4A3F547(Local_2328[2 /*5*/], "pbl_Push_idle_v02"))
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_2328[2 /*5*/], "pbl_Push_idle_v02", true);
					}
					else if (iVar0 == 2 && ANIMSCENE::_0x23E33CB9F4A3F547(Local_2328[2 /*5*/], "pbl_Push_idle_v03"))
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_2328[2 /*5*/], "pbl_Push_idle_v03", true);
					}
					else if (iVar0 == 3 && ANIMSCENE::_0x23E33CB9F4A3F547(Local_2328[2 /*5*/], "pbl_Push_idle_v04"))
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_2328[2 /*5*/], "pbl_Push_idle_v04", true);
					}
					__LIB_1__::func_148(&(vLocal_1569[10 /*3*/]));
				}
			}
		}
	}
	if (vLocal_2104.z >= 3)
	{
		HUD::_0xC9CAEAEEC1256E54(iLocal_2116);
		if (!MISC::IS_BIT_SET(Global_1956580.f_1, 4))
		{
			MISC::SET_BIT(&(Global_1956580.f_1), 4);
		}
	}
	switch (vLocal_2104.z)
	{
		case 0:
			if (vLocal_2104.f_2.f_4 == -1)
			{
				vLocal_2104.f_2.f_4 = AUDIO::GET_SOUND_ID();
			}
			else if (!ENTITY::IS_ENTITY_DEAD(vLocal_2104.x) && AUDIO::_0x4AD019591E94C064("CANNON_PUSH", vLocal_2104.x, "SMG2_Sounds", vLocal_2104.f_2.f_4))
			{
				func_1223(1);
			}
			break;
		case 1:
			break;
		case 2:
			func_849(10);
			if (__LIB_0__::func_265(&(vLocal_1569[11 /*3*/])) >= 10f)
			{
				if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_128.f_4, true, 0))
				{
					func_1184(35);
					__LIB_1__::func_148(&(vLocal_1569[11 /*3*/]));
				}
			}
			fVar1 = __LIB_0__::func_94(Global_35, VOLUME::_GET_VOLUME_COORDS(Local_128.f_6), 1);
			if (fVar1 < 4f && fVar1 > 2f)
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
			}
			else if (fVar1 <= 2f)
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
			}
			if (!MAP::DOES_BLIP_EXIST(vLocal_2104.y))
			{
				if (vLocal_2104.z == 2)
				{
					vLocal_2104.f_1 = __LIB_4__::func_983(408396114, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(vLocal_2104.x, func_761(1, 5, 1)), 1);
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(vLocal_2104.y, func_1190(1));
				}
			}
			VOLUME::_SET_VOLUME_COORDS(Local_128.f_6, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(vLocal_2104.x, func_761(1, 5, 1)));
			if (MAP::DOES_BLIP_EXIST(vLocal_2104.y))
			{
				MAP::SET_BLIP_COORDS(vLocal_2104.y, VOLUME::_GET_VOLUME_COORDS(Local_128.f_6));
			}
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_128.f_6, true, 0) && !ENTITY::IS_ENTITY_DEAD(vLocal_2104.x))
			{
				MAP::REMOVE_BLIP(&(vLocal_2104.f_1));
				func_435(uParam0, 13, 26);
				func_1250(3);
				func_1198(32);
				WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 1, false, false);
				TASK::TASK_SWAP_WEAPON(Global_35, 1, 1, 0, 0);
				func_1697();
				TASK::TASK_ENTER_ANIM_SCENE(Global_35, Local_2328[2 /*5*/], "ARTHUR", "pbl_Both_Push_Cannon", 1.48f, 0, 164, 20000, -1082130432 /* Float: -1f */);
				PED::_0x2208438012482A1A(Global_35, true, false);
				func_910(uParam0, 25, 0);
				func_910(uParam0, 26, 0);
				func_1223(3);
			}
			if (!func_164(22))
			{
				if (CAM::IS_SPHERE_VISIBLE(func_1245(6, 0), 1f))
				{
					func_1247(0, func_1245(6, 0), 0.75f);
					func_849(22);
				}
			}
			break;
		case 3:
			func_1698();
			if (ANIMSCENE::_0x337F1CC8EE895601(Local_2328[2 /*5*/], "ARTHUR"))
			{
				if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_2328[2 /*5*/], "pbl_Both_Push_Cannon"))
				{
					__LIB_5__::func_372(uParam0, 6);
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_2328[2 /*5*/], "pbl_Both_Push_Cannon", true);
					func_1223(4);
				}
				else if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_2328[2 /*5*/], "pbl_Both_Push_Cannon"))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_2328[2 /*5*/], "pbl_Both_Push_Cannon");
				}
			}
			break;
		case 4:
			func_1698();
			if (ANIMSCENE::_0x8D81E7824B7753F7(Local_2328[2 /*5*/], "s_Both_Push_Cannon", 1) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_2328[2 /*5*/]) >= 0.10366f)
			{
				func_1223(5);
			}
			break;
		case 5:
			func_1698();
			if (!ENTITY::IS_ENTITY_DEAD(vLocal_2104.x))
			{
				AUDIO::_0xF1C5310FEAA36B48(vLocal_2104.f_2.f_4, "CANNON_PUSH", vLocal_2104.x, "SMG2_Sounds", 0, 0);
			}
			func_849(35);
			__LIB_1__::func_283(&(vLocal_1569[13 /*3*/]), 0);
			__LIB_1__::func_283(&(vLocal_1569[14 /*3*/]), 0);
			func_1223(6);
			break;
		case 6:
			func_1698();
			if (!func_164(33))
			{
				if (iLocal_2113 == 0)
				{
					func_1184(44);
					func_849(33);
				}
			}
			else if (!func_164(34))
			{
				func_1184(43);
				func_849(34);
			}
			if (!__LIB_0__::func_139(iLocal_2117))
			{
				iLocal_2117 = __LIB_1__::func_877(func_1190(7), func_1699(0), 3, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
				__LIB_1__::func_522(iLocal_2117, 14, 1, 1);
				__LIB_1__::func_522(iLocal_2117, 10, 1, 1);
			}
			else
			{
				PAD::ENABLE_CONTROL_ACTION(0, func_1699(0), true);
				__LIB_1__::func_522(iLocal_2117, 0, 1, 1);
			}
			if (__LIB_1__::func_530(iLocal_2117, 1))
			{
				if (!__LIB_0__::func_139(iLocal_2118))
				{
					iLocal_2118 = __LIB_1__::func_877(func_1190(8), func_1699(1), 13, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
					__LIB_1__::func_522(iLocal_2118, 14, 1, 1);
					__LIB_1__::func_522(iLocal_2118, 10, 1, 1);
				}
				else
				{
					PAD::ENABLE_CONTROL_ACTION(0, func_1699(1), true);
					__LIB_1__::func_522(iLocal_2118, 0, 1, 1);
				}
			}
			else if (__LIB_0__::func_139(iLocal_2118))
			{
				__LIB_1__::func_281(&iLocal_2118, 1, 1);
			}
			if (__LIB_0__::func_139(iLocal_2118))
			{
				if (__LIB_4__::func_442(iLocal_2118, 1))
				{
					__LIB_1__::func_515(iLocal_2118, 1);
				}
			}
			if (!func_164(23))
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_TIME(Local_2328[2 /*5*/]) >= 4.82f)
				{
					func_1200(979.9f, -6750.4f, 69.8f, -1082130432 /* Float: -1f */);
					func_849(23);
				}
			}
			if (!func_164(24))
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_TIME(Local_2328[2 /*5*/]) >= 8.15f)
				{
					func_1200(984.6f, -6744.9f, 66.2f, -1082130432 /* Float: -1f */);
					func_849(24);
				}
			}
			if (!func_164(25))
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_TIME(Local_2328[2 /*5*/]) >= 10.15f)
				{
					func_1200(998.7f, -6736.5f, 68.9f, -1082130432 /* Float: -1f */);
					func_849(25);
				}
			}
			if (!func_164(26))
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_TIME(Local_2328[2 /*5*/]) >= 11f)
				{
					func_1184(36);
					func_849(26);
				}
			}
			vLocal_2104.f_2.f_1 = 0.2f;
			vLocal_2104.f_2.f_1 = (vLocal_2104.f_2.f_1 + __LIB_0__::func_667(0f, 0.4f, PAD::GET_CONTROL_NORMAL(0, func_1699(0))));
			if (__LIB_0__::func_139(iLocal_2118) && __LIB_4__::func_443(iLocal_2118, 1))
			{
				bVar2 = true;
				vLocal_2104.f_2.f_1 = (vLocal_2104.f_2.f_1 + 1.4f);
			}
			if (bVar2)
			{
				__LIB_1__::func_148(&(vLocal_1569[14 /*3*/]));
				__LIB_1__::func_148(&(vLocal_1569[13 /*3*/]));
			}
			if (__LIB_0__::func_265(&(vLocal_1569[14 /*3*/])) >= 10f)
			{
				func_1184(45);
				__LIB_1__::func_148(&(vLocal_1569[14 /*3*/]));
			}
			vLocal_2104.f_2.f_2 = func_1706(2, vLocal_2104.f_2.f_1);
			if (!func_164(38))
			{
				if (ENTITY::IS_ENTITY_DEAD(Local_1523[0 /*5*/]))
				{
					Local_1523[0 /*5*/] = VEHICLE::CREATE_VEHICLE(func_437(10), func_472(9, 0), func_1255(9, 0), true, true, false, false);
					ENTITY::FREEZE_ENTITY_POSITION(Local_1523[0 /*5*/], true);
				}
				if (ENTITY::IS_ENTITY_DEAD(Local_1523[1 /*5*/]))
				{
					Local_1523[1 /*5*/] = VEHICLE::CREATE_VEHICLE(func_437(10), func_472(9, 1), func_1255(9, 1), true, true, false, false);
					ENTITY::FREEZE_ENTITY_POSITION(Local_1523[1 /*5*/], true);
				}
				if (ENTITY::IS_ENTITY_DEAD(Local_1523[2 /*5*/]))
				{
					Local_1523[2 /*5*/] = VEHICLE::CREATE_VEHICLE(func_437(10), func_472(9, 2), func_1255(9, 2), true, true, false, false);
				}
				if (func_856(uParam0, 27, 41, 107))
				{
					PED::SET_PED_INTO_VEHICLE(Local_424[33 /*8*/], Local_1523[0 /*5*/], -1);
					PED::SET_PED_INTO_VEHICLE(Local_424[34 /*8*/], Local_1523[1 /*5*/], -1);
					PED::SET_PED_INTO_VEHICLE(Local_424[35 /*8*/], Local_1523[1 /*5*/], -2);
					PED::SET_PED_INTO_VEHICLE(Local_424[36 /*8*/], Local_1523[1 /*5*/], -2);
					PED::SET_PED_INTO_VEHICLE(Local_424[37 /*8*/], Local_1523[2 /*5*/], -1);
					PED::SET_PED_INTO_VEHICLE(Local_424[38 /*8*/], Local_1523[2 /*5*/], -2);
					func_849(38);
				}
			}
			vLocal_2104.f_2.f_3 = func_1707();
			if (func_164(35))
			{
				if (vLocal_2104.f_2.f_3 > 1f)
				{
					if (!func_164(36))
					{
						vLocal_2104.f_2.f_3 = 1f;
						func_1223(7);
						__LIB_5__::func_372(uParam0, 7);
						if (__LIB_0__::func_139(iLocal_2117))
						{
							__LIB_1__::func_281(&iLocal_2117, 1, 1);
						}
						if (__LIB_0__::func_139(iLocal_2118))
						{
							__LIB_1__::func_281(&iLocal_2118, 1, 1);
						}
						func_849(36);
					}
				}
			}
			fVar4 = __LIB_16__::func_777(vLocal_2104.f_2.f_2, 0.2f, 0.5f);
			if (fVar4 > 0f)
			{
				iVar3 = BUILTIN::FLOOR(__LIB_0__::func_667(32f, 96f, fVar4));
				PAD::SET_PAD_SHAKE(0, BUILTIN::FLOOR((MISC::GET_FRAME_TIME() * 1000f)), iVar3);
			}
			ANIMSCENE::SET_ANIM_SCENE_RATE(Local_2328[2 /*5*/], vLocal_2104.f_2.f_2);
			break;
		case 7:
			func_1698();
			if (!func_164(38))
			{
			}
			else
			{
				__LIB_1__::func_283(&(vLocal_1569[0 /*3*/]), 1);
				func_178(35);
				func_1709(1, 0, 0f);
				Local_1700.f_3[0 /*33*/] = 0;
				Local_1700.f_3[1 /*33*/] = 0;
				func_1203(27, 41, 10);
				AUDIO::_0x3210BCB36AF7621B(vLocal_2104.f_2.f_4);
				AUDIO::RELEASE_SOUND_ID(vLocal_2104.f_2.f_4);
				vLocal_2104.f_2.f_4 = -1;
				__LIB_0__::func_105(1);
				ANIMSCENE::SET_ANIM_SCENE_RATE(Local_2328[2 /*5*/], 1f);
				func_1223(8);
				Jump @2773; //curOff = 2763
				return 1;
			}
			return 0;
			default:
				break;
	}
}

void func_1213(var uParam0, int iParam1)
{
	int iVar0;
	if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_128.f_4, true, 0))
	{
		if (!func_164(9))
		{
			UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
			TASK::TASK_CLEAR_LOOK_AT(Global_35);
			func_1182(uParam0, 0);
			if (__LIB_4__::func_939(uParam0) == 1)
			{
				func_1184(27);
			}
			func_849(9);
		}
	}
	else if (func_164(9))
	{
		UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
		iVar0 = Local_1265[iParam1 /*13*/].f_1;
		func_1182(uParam0, iParam1);
		if (__LIB_4__::func_939(uParam0) == 1)
		{
			if (!func_164(32))
			{
				func_1184(28);
				func_849(32);
			}
		}
		if (iVar0 == 3 || iVar0 == 2)
		{
			Local_1265[iParam1 /*13*/].f_1 = iVar0;
		}
		func_178(9);
	}
}

void func_1214()
{
	int iVar0;
	var uVar1;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	iVar0 = 27;
	while (iVar0 <= 38)
	{
		if (ENTITY::IS_ENTITY_DEAD(Local_424[iVar0 /*8*/]))
		{
			func_1221(iVar0, 18);
		}
		else
		{
			switch (Local_424[iVar0 /*8*/].f_2)
			{
				case 1:
					func_1221(iVar0, 2);
				case 2:
					if (func_164(0))
					{
					}
					else
					{
						WEAPON::REMOVE_ALL_PED_WEAPONS(Local_424[iVar0 /*8*/], true, true);
						func_849(0);
						func_1221(iVar0, 3);
						Jump @866; //curOff = 129
						if (func_164(0))
						{
						}
						else
						{
							__LIB_4__::func_7(Local_424[iVar0 /*8*/], iLocal_1452[1], -1, 3, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
							func_849(0);
							func_1221(iVar0, 8);
							Jump @866; //curOff = 188
							if (!PED::IS_PED_IN_ANY_VEHICLE(Local_424[iVar0 /*8*/], false))
							{
								TASK::TASK_SHOOT_AT_COORD(Local_424[iVar0 /*8*/], func_1710(func_472(8, 1), 5f), -1, joaat("FIRING_PATTERN_BURST_FIRE"), 0);
							}
							func_1221(iVar0, 9);
							Jump @866; //curOff = 245
							if (!TASK::WAYPOINT_RECORDING_GET_COORD(func_438(32), 0, &uVar1))
							{
								return;
							}
							fVar5 = 0f;
							switch (iVar0)
							{
								case 29:
									fVar6 = 0.2f;
									break;
								case 31:
									fVar6 = 0.7f;
									break;
								case 34:
									fVar6 = 0.3f;
									break;
							}
							fVar4 = (fVar5 + fVar6);
							fVar7 = -1f;
							if ((iVar0 == 27 || iVar0 == 28) || iVar0 == 29)
							{
								fVar7 = 1f;
							}
							else if ((iVar0 == 30 || iVar0 == 31) || iVar0 == 32)
							{
								fVar7 = 1.5f;
							}
							func_1691(iVar0, 1);
							if (!fVar7 == -1f)
							{
								func_1306();
								TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, 974.4f, -6760.7f, 43.1f, func_1710(985.9f, -6748.9f, 63.8f, 5f), fVar7, 1, 0.5f, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 0);
								func_1307(Local_424[iVar0 /*8*/], fVar4);
							}
							else if (iVar0 == 33)
							{
								func_1306();
								TASK::_TASK_DISEMBARK_VEHICLE(0, Local_1523[0 /*5*/], 20000, 0, 1073741824 /* Float: 2f */, 1);
								TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, 974.4f, -6760.7f, 43.1f, func_1710(985.9f, -6748.9f, 63.8f, 5f), 3f, 1, 0.5f, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 0);
								func_1307(Local_424[iVar0 /*8*/], fVar4);
							}
							else if ((iVar0 == 34 || iVar0 == 35) || iVar0 == 36)
							{
								func_1306();
								TASK::_TASK_DISEMBARK_VEHICLE(0, Local_1523[1 /*5*/], 20000, 0, 1073741824 /* Float: 2f */, 1);
								TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, func_438(32), 0, 2, -1, 0, 1, -1);
								func_1307(Local_424[iVar0 /*8*/], fVar4);
							}
							else if (iVar0 == 37)
							{
								func_1306();
								TASK::_TASK_VEHICLE_DRIVE_TO_DESTINATION(0, Local_1523[2 /*5*/], 952.113f, -6766.375f, 40.588f, 3f, 0, 3, 2f, 1f, 0);
								TASK::_TASK_DISEMBARK_VEHICLE(0, Local_1523[0 /*5*/], 20000, 0, 1073741824 /* Float: 2f */, 1);
								TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, 974.4f, -6760.7f, 43.1f, func_1710(985.9f, -6748.9f, 63.8f, 5f), 3f, 1, 0.5f, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 0);
								func_1307(Local_424[iVar0 /*8*/], fVar4);
							}
							else if (iVar0 == 38)
							{
							}
							func_1221(iVar0, 11);
						}
					}
					iVar0++;
					default:
						break;
			}
		}
	}
}

void func_1219(var uParam0, bool bParam1, float fParam2)
{
	int iVar0;
	if (func_164(14))
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = 2;
		while (iVar0 <= 6)
		{
			if (func_433(iVar0) == -1)
			{
				ENTITY::SET_ENTITY_INVINCIBLE(Local_424[iVar0 /*8*/], true);
			}
			else
			{
				__LIB_1__::func_296(func_433(iVar0), 1, 1, 1);
			}
			__LIB_8__::func_795(uParam0, Local_424[iVar0 /*8*/], 1, 1);
			iVar0++;
		}
		func_178(13);
		__LIB_0__::func_37(&(vLocal_1569[1 /*3*/]));
		return;
	}
	if (!func_164(13))
	{
		if (__LIB_5__::func_484(&(vLocal_1569[1 /*3*/]), fParam2))
		{
			iVar0 = 2;
			while (iVar0 <= 6)
			{
				if (func_433(iVar0) == -1)
				{
					ENTITY::SET_ENTITY_INVINCIBLE(Local_424[iVar0 /*8*/], false);
				}
				else
				{
					__LIB_1__::func_296(func_433(iVar0), 0, 1, 1);
				}
				__LIB_8__::func_795(uParam0, Local_424[iVar0 /*8*/], 1, 1);
				iVar0++;
			}
			func_849(13);
		}
	}
	else if (!__LIB_5__::func_484(&(vLocal_1569[1 /*3*/]), fParam2))
	{
		iVar0 = 2;
		while (iVar0 <= 6)
		{
			if (func_433(iVar0) == -1)
			{
				ENTITY::SET_ENTITY_INVINCIBLE(Local_424[iVar0 /*8*/], true);
			}
			else
			{
				__LIB_1__::func_296(func_433(iVar0), 1, 1, 1);
			}
			__LIB_8__::func_795(uParam0, Local_424[iVar0 /*8*/], 1, 1);
			__LIB_8__::func_795(uParam0, Local_424[iVar0 /*8*/], 0, 1);
			iVar0++;
		}
		func_178(13);
	}
}

int func_1220(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam0;
	while (iVar0 <= iParam1)
	{
		if (!Local_424[iVar0 /*8*/].f_2 == iParam2)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_1221(int iParam0, int iParam1)
{
	Local_424[iParam0 /*8*/].f_2 = iParam1;
}

void func_1222(int iParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (!Local_1265[iParam0 /*13*/] & 2 != 0)
	{
		return;
	}
	Local_1265[iParam0 /*13*/].f_7 = iParam1;
}

void func_1223(int iParam0)
{
	vLocal_2104.f_2 = iParam0;
}

struct<15> func_1224(int iParam0)
{
	struct<15> Var0;
	Var0.f_6 = 1108082688;
	Var0.f_14 = 1108082688;
	switch (iParam0)
	{
		case 0:
			Var0 = { 998.1f, -6744.4f, 63.858f };
			Var0.f_3 = { -3.3f, 0f, 115.6f };
			Var0.f_6 = 30f;
			Var0.f_8 = { 990.2f, -6743.6f, 63.858f };
			Var0.f_11 = { -4.791f, -0.115f, 117.755f };
			break;
		case 1:
			if (!CAM::DOES_CAM_EXIST(iLocal_1494[0]))
			{
			}
			Var0 = { CAM::GET_CAM_COORD(iLocal_1494[0]) };
			Var0.f_3 = { CAM::GET_CAM_ROT(iLocal_1494[0], 2) };
			Var0.f_6 = CAM::GET_CAM_FOV(iLocal_1494[0]);
			Var0.f_7 = 3.5f;
			Var0.f_8 = { 984.9001f, -6741.919f, 67.9128f };
			Var0.f_11 = { -35.1563f, 0.0226f, 139.0511f };
			break;
		case 2:
			Var0 = { 990.3372f, -6744.721f, 64.3725f };
			Var0.f_3 = { -10.861f, 0.0558f, 77.2379f };
			Var0.f_6 = 31.1f;
			break;
		default:
			break;
	}
	return Var0;
}

bool func_1225(var uParam0)
{
	switch (iLocal_2369[1])
	{
		case 0:
			iLocal_2369[1] = 1;
			break;
		case 1:
			iLocal_1233[12] = WEAPON::_CREATE_WEAPON_OBJECT(joaat("WEAPON_RIFLE_BOLTACTION"), 1, 972.6f, 6735.2f, 45.1f, true, 1f);
			__LIB_5__::func_262(&(uParam0->f_7375));
			__LIB_5__::func_580(uParam0, iLocal_1233[12], "w_rifle_boltAction01^14", 0, 0, 0, 0);
			__LIB_5__::func_580(uParam0, Global_35, "ARTHUR", 0, 0, 0, 0);
			__LIB_5__::func_580(uParam0, Local_424[2 /*8*/], "Dutch", 0, 0, 0, 0);
			__LIB_5__::func_580(uParam0, Local_424[5 /*8*/], "BillWilliamson", 0, 0, 0, 0);
			__LIB_5__::func_580(uParam0, Local_424[4 /*8*/], "MicahBell", 0, 0, 0, 0);
			__LIB_5__::func_580(uParam0, Local_424[3 /*8*/], "Hercule", 0, 0, 0, 0);
			__LIB_5__::func_580(uParam0, Local_424[6 /*8*/], "GenStoryMale", 0, 0, 0, 0);
			__LIB_5__::func_580(uParam0, vLocal_2104.x, "HOTCHKISS_CANNON", 0, 0, 0, 0);
			__LIB_5__::func_580(uParam0, Local_424[27 /*8*/], "S_M_M_FussarHenchman_01", 0, 0, 0, 0);
			__LIB_5__::func_580(uParam0, Local_424[28 /*8*/], "S_M_M_FussarHenchman_01^1", 0, 0, 0, 0);
			__LIB_5__::func_580(uParam0, Local_424[29 /*8*/], "S_M_M_FussarHenchman_01^2", 0, 0, 0, 0);
			__LIB_5__::func_580(uParam0, Local_424[30 /*8*/], "S_M_M_FussarHenchman_01^3", 0, 0, 0, 0);
			__LIB_5__::func_580(uParam0, Local_424[31 /*8*/], "S_M_M_FussarHenchman_01^4", 0, 0, 0, 0);
			__LIB_5__::func_580(uParam0, Local_424[32 /*8*/], "S_M_M_FussarHenchman_01^5", 0, 0, 0, 0);
			__LIB_5__::func_580(uParam0, Local_424[33 /*8*/], "S_M_M_FussarHenchman_01^6", 0, 0, 0, 0);
			__LIB_5__::func_580(uParam0, Local_424[34 /*8*/], "S_M_M_FussarHenchman_01^7", 0, 0, 0, 0);
			__LIB_5__::func_580(uParam0, Local_424[35 /*8*/], "S_M_M_FussarHenchman_01^8", 0, 0, 0, 0);
			__LIB_5__::func_580(uParam0, Local_424[36 /*8*/], "S_M_M_FussarHenchman_01^9", 0, 0, 0, 0);
			__LIB_5__::func_580(uParam0, Local_424[37 /*8*/], "S_M_M_FussarHenchman_01^10", 0, 0, 0, 0);
			__LIB_5__::func_580(uParam0, Local_424[38 /*8*/], "S_M_M_FussarHenchman_01^11", 0, 0, 0, 0);
			func_1227(27, 41, 0);
			iLocal_2369[1] = 2;
			break;
		case 2:
			return true;
	}
	return false;
}

void func_1227(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	iVar0 = iParam0;
	while (iVar0 <= iParam1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_424[iVar0 /*8*/]) && !ENTITY::IS_ENTITY_DEAD(Local_424[iVar0 /*8*/]))
		{
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Local_424[iVar0 /*8*/], 0, bParam2);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Local_424[iVar0 /*8*/], 1, bParam2);
		}
		iVar0++;
	}
}

bool func_1230(bool bParam0)
{
	int iVar0;
	struct<4> Var1;
	if (OBJECT::DOES_PICKUP_EXIST(iLocal_2153))
	{
		return true;
	}
	iVar0 = 14;
	while (iVar0 <= 18)
	{
		func_1198(func_1234(iVar0));
		iVar0++;
	}
	iVar0 = 14;
	while (iVar0 <= 18)
	{
		if (!func_1233(func_1234(iVar0)))
		{
			return false;
		}
		iVar0++;
	}
	if (bParam0)
	{
		return true;
	}
	Var1.f_6 = -1;
	iVar0 = 14;
	while (iVar0 <= 18)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1233[iVar0]))
		{
			func_858(iVar0, 0);
			ENTITY::SET_ENTITY_PROOFS(iLocal_1233[iVar0], 4, false);
			Var1 = { func_1176(iVar0) };
			ENTITY::SET_ENTITY_COORDS(iLocal_1233[iVar0], Var1, true, false, true, true);
			ENTITY::SET_ENTITY_ROTATION(iLocal_1233[iVar0], Var1.f_3, 2, true);
		}
		iVar0++;
	}
	if (__LIB_0__::func_214(joaat("WEAPON_RIFLE_BOLTACTION")))
	{
		iLocal_2154 = joaat("PICKUP_WEAPON_RIFLE_BOLTACTION");
	}
	else if (__LIB_0__::func_214(joaat("WEAPON_RIFLE_SPRINGFIELD")))
	{
		iLocal_2154 = joaat("PICKUP_WEAPON_RIFLE_SPRINGFIELD");
	}
	iLocal_2153 = OBJECT::CREATE_PICKUP_ROTATE(iLocal_2154, vLocal_2155, vLocal_2158, 2 | 524288, 60, 2, true, 0, 0, 0f, 0);
	return true;
}

bool func_1233(int iParam0)
{
	if (iParam0 == -1)
	{
		return true;
	}
	return vLocal_243[iParam0 /*3*/] == 3;
}

int func_1234(int iParam0)
{
	struct<7> Var0;
	Var0 = { func_1176(iParam0) };
	return Var0.f_6;
}

void func_1235()
{
	if (OBJECT::DOES_PICKUP_EXIST(iLocal_2145))
	{
		OBJECT::REMOVE_PICKUP(iLocal_2145);
	}
	iLocal_2145 = OBJECT::CREATE_PICKUP_ROTATE(iLocal_2146, vLocal_2147, vLocal_2150, 2 | 524288, 60, 2, true, 0, 0, 0f, 0);
}

void func_1236(int iParam0)
{
	if (Local_1465[iParam0 /*7*/].f_5 == 0)
	{
		Local_1465[iParam0 /*7*/].f_5 = 1;
	}
}

void func_1237(var uParam0)
{
	float fVar0;
	fVar0 = __LIB_0__::func_665(Global_35, Local_424[3 /*8*/], 1, 1);
	if (func_164(43))
	{
		if (fVar0 < 25f)
		{
			__LIB_1__::func_422(func_1190(iLocal_2161), 7500, 0, 1, 0, 0, -1, -1, 0);
			func_178(43);
			if (iLocal_2161 == 57)
			{
				__LIB_10__::func_935(uParam0, Local_424[2 /*8*/], 1);
				MAP::_BLIP_REMOVE_MODIFIER(Local_424[3 /*8*/].f_1, -401963276);
			}
			else if (iLocal_2161 == 55)
			{
				MAP::_BLIP_SET_MODIFIER(Local_424[3 /*8*/].f_1, -401963276);
				__LIB_10__::func_930(uParam0, Local_424[2 /*8*/], joaat("COLOR_NEUTRAL"), joaat("BLIP_STYLE_COMPANION"), 1, 1);
			}
		}
		else if (fVar0 >= 45f)
		{
			__LIB_9__::func_308(uParam0, func_1721(17), 1, 0);
		}
	}
	else if (fVar0 >= 30f)
	{
		__LIB_1__::func_422(func_1190(56), 7500, 0, 1, 0, 0, -1, -1, 0);
		MAP::_BLIP_SET_MODIFIER(Local_424[3 /*8*/].f_1, -401963276);
		__LIB_10__::func_930(uParam0, Local_424[2 /*8*/], joaat("COLOR_NEUTRAL"), joaat("BLIP_STYLE_COMPANION"), 1, 1);
		func_849(43);
	}
}

void func_1238(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	int iVar13;
	vector3 vVar14;
	int iVar17;
	int iVar18;
	int iVar19;
	struct<10> Var20;
	if (!func_164(57))
	{
		if (!func_164(59))
		{
			if (!func_164(55))
			{
				if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_128.f_23, true, 0))
				{
					iLocal_1448[1] = MAP::_BLIP_ADD_FOR_COORD(1664425300, OBJECT::GET_PICKUP_COORDS(iLocal_2145));
					func_1184(47);
					if (PED::IS_PED_IN_COVER(Local_424[2 /*8*/], false, false) && PED::IS_PED_IN_COVER(Local_424[3 /*8*/], false, false))
					{
						func_849(40);
					}
					func_849(57);
				}
			}
		}
	}
	iVar0 = 2;
	while (iVar0 <= 3)
	{
		if (ENTITY::IS_ENTITY_DEAD(Local_424[iVar0 /*8*/]))
		{
			return;
		}
		PED::SET_PED_RESET_FLAG(Local_424[iVar0 /*8*/], 201, true);
		switch (Local_424[iVar0 /*8*/].f_2)
		{
			case 1:
			case 26:
				if (iVar0 == 2)
				{
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
					func_853(4);
				}
				if ((TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_424[iVar0 /*8*/], func_438(24)) && TASK::GET_PED_WAYPOINT_PROGRESS(Local_424[iVar0 /*8*/]) >= 12) || !TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_424[iVar0 /*8*/], func_438(24)))
				{
					TASK::SET_PED_PATH_AVOID_FIRE(Local_424[iVar0 /*8*/], false);
					ENTITY::SET_ENTITY_PROOFS(Local_424[iVar0 /*8*/], 2, false);
					if (iVar0 == 2)
					{
						func_436(44);
						vVar3 = { func_1256(6) };
						func_1306();
						TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, vVar3, -1, 0, 0f, 1, 0, iLocal_230[6], 1, 0, 0);
						func_1307(Local_424[iVar0 /*8*/], 0);
					}
					else if (iVar0 == 3)
					{
						vVar3 = { func_1256(7) };
						TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Local_424[iVar0 /*8*/], vVar3, -1, 0, 0f, 1, 0, iLocal_230[7], 1, 0, 0);
					}
					iVar13 = 27;
					while (iVar13 <= 41)
					{
						func_1722(iVar0, iVar13);
						iVar13++;
					}
					func_1244(27, 1);
					func_1221(iVar0, 27);
				}
				break;
			case 27:
				func_1723();
				if (iVar0 == 2)
				{
					func_853(4);
					if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_128.f_3, true, 0))
					{
						if (func_1199(4, 1))
						{
							if (func_164(40))
							{
								vVar14 = { func_1724(48) };
							}
							else
							{
								vVar14 = { func_1724(49) };
							}
							__LIB_1__::func_104(&(uParam0->f_5310), vVar14, 0, -1, 0, 0);
							if (CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(Local_424[2 /*8*/], true, false), 1f))
							{
								CAM::SET_GAMEPLAY_ENTITY_HINT(Local_424[2 /*8*/], 0f, 0f, 0f, true, 2000, 2000, 2000, 0);
							}
							__LIB_5__::func_372(uParam0, 9);
							iVar17 = 27;
							while (iVar17 <= 41)
							{
								func_1244(iVar17, 1);
								iVar17++;
							}
							iVar18 = 0;
							while (iVar18 <= 2)
							{
								if (ENTITY::DOES_ENTITY_EXIST(Local_1523[iVar18 /*5*/]))
								{
									VEHICLE::DELETE_VEHICLE(&(Local_1523[iVar18 /*5*/]));
								}
								iVar18++;
							}
							MISC::SET_BIT(&(Global_1956580.f_1), 6);
							__LIB_11__::func_824(&(Local_128.f_9), joaat("VOLBOX"));
							func_1221(2, 28);
							func_1221(3, 28);
						}
					}
				}
				break;
			case 28:
				if (iVar0 == 2)
				{
					CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
					func_1723();
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DUCK"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_BEHIND"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY_ACTION"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY_PC"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY_SECONDARY"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_CRAFTING_MENU"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DUCK"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), false);
					if (!PED::IS_PED_IN_COVER(Global_35, false, false))
					{
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER"), false);
					}
					PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
					if (!func_164(56))
					{
						if (ANIMSCENE::_GET_ANIM_SCENE_TIME(Local_2328[4 /*5*/]) >= 6.5f)
						{
							func_1252(uParam0, 27, 1);
							func_849(56);
						}
					}
					if (ANIMSCENE::_0x005E6F28DD7ED58D(Local_2328[4 /*5*/], "Dutch"))
					{
						ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_2328[4 /*5*/], "Shooter", Local_424[27 /*8*/]);
						ENTITY::_SET_ENTITY_HEALTH(Local_424[27 /*8*/], 0, Local_424[2 /*8*/]);
						func_1221(28, 8);
						func_1221(29, 8);
						func_1200(988.8073f, -6729.377f, 61.8652f, -1082130432 /* Float: -1f */);
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_424[2 /*8*/], 990.5f, -6733.3f, 57.9f, 1.5f, 1, 0, 0);
						func_1691(iVar0, 28);
						func_1691(iVar0, 29);
						func_1691(iVar0, 30);
						func_1691(iVar0, 31);
						func_1691(iVar0, 32);
						func_1691(iVar0, 33);
						PED::_0xD05AD61F242C626B(Local_424[2 /*8*/], 0.1f);
						__LIB_1__::func_283(&(vLocal_1569[25 /*3*/]), 1);
						func_1306();
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, PED::GET_PED_DEFENSIVE_AREA_POSITION(Local_424[2 /*8*/], false), 994.8f, -6723.9f, 58.2f, 2f, 1, 1f, 1082130432 /* Float: 4f */, 1, 2048, 1, joaat("FIRING_PATTERN_BURST_FIRE"), 0);
						TASK::TASK_COMBAT_HATED_TARGETS(0, -1f);
						func_1307(Local_424[iVar0 /*8*/], 0);
						PED::_0x2208438012482A1A(Local_424[iVar0 /*8*/], true, false);
						PED::FORCE_PED_MOTION_STATE(Local_424[2 /*8*/], joaat("MOTIONSTATE_RUN"), false, 0, false);
						VOLUME::_DELETE_VOLUME(Local_128.f_9);
						if (!ENTITY::IS_ENTITY_DEAD(Local_424[27 /*8*/]))
						{
							ENTITY::_SET_ENTITY_HEALTH(Local_424[27 /*8*/], 0, 0);
						}
						MISC::CLEAR_BIT(&(Global_1956580.f_1), 6);
						func_1726(3);
						__LIB_5__::func_372(uParam0, 10);
						func_1182(uParam0, 5);
						MAP::_BLIP_REMOVE_MODIFIER(Local_424[3 /*8*/].f_1, -401963276);
						__LIB_10__::func_935(uParam0, Local_424[2 /*8*/], 1);
						if (MAP::DOES_BLIP_EXIST(iLocal_1448[1]))
						{
							MAP::REMOVE_BLIP(&(iLocal_1448[1]));
						}
						func_1221(2, 32);
						func_1221(3, 30);
					}
					else
					{
						Jump @4613; //curOff = 1523
						if (!__LIB_0__::func_266(Global_35, 995.7f, -6734.5f, 59.2f, 2.5f, 1, 1) && !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35)))
						{
							func_1221(3, 31);
						}
						Jump @4613; //curOff = 1586
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_424[3 /*8*/], 992.7f, -6733.2f, 58.1f, 1.5f, 1, 0, 0);
						PED::SET_PED_CONFIG_FLAG(Local_424[iVar0 /*8*/], 252, false);
						func_1728(1);
						func_1691(iVar0, 28);
						func_1691(iVar0, 29);
						func_1691(iVar0, 30);
						func_1691(iVar0, 31);
						func_1691(iVar0, 32);
						func_1691(iVar0, 33);
						PED::_0xD05AD61F242C626B(Local_424[iVar0 /*8*/], 0.1f);
						func_1306();
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, PED::GET_PED_DEFENSIVE_AREA_POSITION(Local_424[iVar0 /*8*/], false), 1000.1f, -6720.2f, 58.1f, 2f, 1, 1f, 1082130432 /* Float: 4f */, 1, 2048, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 0);
						TASK::TASK_COMBAT_HATED_TARGETS(0, -1f);
						func_1307(Local_424[iVar0 /*8*/], 0);
						func_1221(iVar0, 32);
						Jump @4613; //curOff = 1790
						if (iVar0 == 2)
						{
							if (!func_164(41))
							{
								if (ENTITY::IS_ENTITY_DEAD(Local_424[28 /*8*/]) || ENTITY::IS_ENTITY_DEAD(Local_424[29 /*8*/]))
								{
									if (Local_424[30 /*8*/].f_2 == 7)
									{
										func_1221(30, 8);
									}
									if (Local_424[31 /*8*/].f_2 == 7)
									{
										func_1221(31, 8);
									}
									func_849(41);
								}
							}
							else if (!func_164(42))
							{
								iVar1 = 28;
								while (iVar1 <= 31)
								{
									if (ENTITY::IS_ENTITY_DEAD(Local_424[iVar1 /*8*/]))
									{
										iVar2++;
									}
									iVar1++;
								}
								if (iVar2 >= 2)
								{
									if (Local_424[32 /*8*/].f_2 == 7)
									{
										func_1221(32, 8);
									}
									if (Local_424[33 /*8*/].f_2 == 7)
									{
										func_1221(33, 8);
									}
									func_849(42);
								}
							}
							else if (!ENTITY::IS_ENTITY_DEAD(Local_424[33 /*8*/]))
							{
								if (__LIB_0__::func_665(Local_424[33 /*8*/], Global_35, 1, 1) <= 1f)
								{
									ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_424[33 /*8*/], false);
									__LIB_14__::func_337(Local_424[3 /*8*/], PED::GET_PED_BONE_COORDS(Local_424[33 /*8*/], 21030, 0f, 0f, 0f), Global_35, 0, 0, 1, 1);
									CAM::_0xE3639DB78B3B5400(Local_424[33 /*8*/]);
									CAM::_0x986F7A51EE3E1F92(Local_424[33 /*8*/], 1);
									ENTITY::SET_ENTITY_DYNAMIC(Local_424[33 /*8*/], true);
									PHYSICS::ACTIVATE_PHYSICS(Local_424[33 /*8*/]);
									PED::SET_PED_TO_RAGDOLL_WITH_FALL(Local_424[33 /*8*/], 5000, 10000, 1, __LIB_0__::func_173(1f, 1f, 1f), 0f, 0f, 0f, 0f, 0f, 0f, 0f);
									ENTITY::_SET_ENTITY_HEALTH(Local_424[33 /*8*/], 0, Global_35);
									ENTITY::APPLY_FORCE_TO_ENTITY(Local_424[33 /*8*/], 1, __LIB_1__::func_868(ENTITY::GET_ENTITY_COORDS(Local_424[2 /*8*/], true, false), ENTITY::GET_ENTITY_COORDS(Local_424[33 /*8*/], true, false), 15f), 0f, 0f, 0f, 0, false, false, true, true, true);
									ENTITY::_SET_ENTITY_HEALTH(Local_424[33 /*8*/], 0, 0);
								}
							}
							if (__LIB_0__::func_75(&(vLocal_1569[25 /*3*/])))
							{
								if (__LIB_0__::func_265(&(vLocal_1569[25 /*3*/])) >= 20f)
								{
									func_1728(0);
									__LIB_0__::func_37(&(vLocal_1569[25 /*3*/]));
								}
							}
							func_1730(uParam0);
							if (((((ENTITY::IS_ENTITY_DEAD(Local_424[28 /*8*/]) && ENTITY::IS_ENTITY_DEAD(Local_424[29 /*8*/])) && ENTITY::IS_ENTITY_DEAD(Local_424[30 /*8*/])) && ENTITY::IS_ENTITY_DEAD(Local_424[31 /*8*/])) && ENTITY::IS_ENTITY_DEAD(Local_424[32 /*8*/])) && ENTITY::IS_ENTITY_DEAD(Local_424[33 /*8*/]))
							{
								PED::_0xD05AD61F242C626B(Local_424[iVar0 /*8*/], 1f);
								if (func_1731())
								{
									func_1184(52);
								}
								__LIB_5__::func_372(uParam0, 11);
								func_1221(2, 33);
								func_1221(3, 33);
							}
							else
							{
								Jump @4613; //curOff = 2439
								if (iVar0 == 2)
								{
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_424[2 /*8*/], 981.1f, -6745f, 55.3f, 1f, 0, 0, 0);
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_424[3 /*8*/], 982.5f, -6744f, 55.2f, 1f, 0, 0, 0);
									if (!ENTITY::IS_ENTITY_DEAD(Local_424[34 /*8*/]))
									{
										ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_424[34 /*8*/], true);
									}
									if (!ENTITY::IS_ENTITY_DEAD(Local_424[35 /*8*/]))
									{
										ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_424[35 /*8*/], true);
									}
									func_1221(34, 8);
									func_1200(983.7f, -6743.8f, 58.3f, -1082130432 /* Float: -1f */);
									func_1250(5);
									func_1182(uParam0, 4);
									Local_1265[4 /*13*/].f_1 = 2;
									iLocal_2161 = 55;
									if (func_1731())
									{
										func_1184(50);
									}
									__LIB_10__::func_930(uParam0, Local_424[2 /*8*/], joaat("COLOR_NEUTRAL"), joaat("BLIP_STYLE_COMPANION"), 1, 1);
									MAP::_BLIP_SET_MODIFIER(Local_424[3 /*8*/].f_1, -401963276);
								}
								func_1691(iVar0, 34);
								func_1691(iVar0, 35);
								func_1306();
								TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, PED::GET_PED_DEFENSIVE_AREA_POSITION(Local_424[iVar0 /*8*/], false), 986.4f, -6754.8f, 55.7f, 2f, 0, 0.5f, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 0);
								TASK::TASK_COMBAT_HATED_TARGETS(0, -1f);
								func_1307(Local_424[iVar0 /*8*/], 0);
								func_1221(iVar0, 34);
								Jump @4613; //curOff = 2777
								if (iVar0 == 2)
								{
									func_1730(uParam0);
									if (func_164(50))
									{
										func_1221(35, 8);
										__LIB_1__::func_422(func_1190(57), 7500, 1, 1, 0, 0, -1, -1, 0);
										iLocal_2161 = 57;
										__LIB_10__::func_935(uParam0, Local_424[2 /*8*/], 1);
										MAP::_BLIP_REMOVE_MODIFIER(Local_424[3 /*8*/].f_1, -401963276);
										if (!ENTITY::IS_ENTITY_DEAD(Local_424[34 /*8*/]))
										{
											ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_424[34 /*8*/], false);
										}
										if (!ENTITY::IS_ENTITY_DEAD(Local_424[35 /*8*/]))
										{
											ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_424[35 /*8*/], false);
										}
										func_1221(2, 35);
										func_1221(3, 35);
									}
									else
									{
										Jump @4613; //curOff = 2936
										if (iVar0 == 2)
										{
											PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_424[2 /*8*/], 983.6692f, -6751.28f, 54.8169f, 0.75f, 1, 0, 0);
											PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_424[3 /*8*/], 983.4894f, -6747.397f, 54.8171f, 0.75f, 1, 0, 0);
										}
										func_1691(iVar0, 34);
										func_1691(iVar0, 35);
										func_1728(1);
										__LIB_1__::func_283(&(vLocal_1569[25 /*3*/]), 1);
										func_1306();
										TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, PED::GET_PED_DEFENSIVE_AREA_POSITION(Local_424[iVar0 /*8*/], false), 987f, -6756.1f, 55.6f, 2f, 1, 4f, 1082130432 /* Float: 4f */, 1, 2048, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 0);
										TASK::TASK_COMBAT_HATED_TARGETS(0, -1f);
										func_1307(Local_424[iVar0 /*8*/], __LIB_5__::func_439(iVar0 == 2, 0f, 2.5f));
										func_1198(25);
										func_1221(iVar0, 36);
										Jump @4613; //curOff = 3148
										if (iVar0 == 2)
										{
											if (__LIB_0__::func_75(&(vLocal_1569[25 /*3*/])))
											{
												if (__LIB_0__::func_265(&(vLocal_1569[25 /*3*/])) >= 4f)
												{
													func_1728(2);
													__LIB_0__::func_37(&(vLocal_1569[25 /*3*/]));
												}
											}
											if (ENTITY::IS_ENTITY_DEAD(Local_424[34 /*8*/]) && ENTITY::IS_ENTITY_DEAD(Local_424[35 /*8*/]))
											{
												if (func_1731())
												{
													func_1184(53);
												}
												__LIB_5__::func_372(uParam0, 12);
												func_1221(2, 37);
												func_1221(3, 37);
											}
											else
											{
												func_1730(uParam0);
												Jump @4613; //curOff = 3277
												if (iVar0 == 2)
												{
													func_1221(36, 8);
													func_1221(37, 8);
													func_1221(38, 8);
													PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_424[2 /*8*/], 985.7438f, -6757.455f, 54.8167f, 1f, 1, 0, 0);
													PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_424[3 /*8*/], 989.0342f, -6756.615f, 54.8173f, 1f, 1, 0, 0);
													func_1200(974.1275f, -6737.229f, 48.7166f, -1082130432 /* Float: -1f */);
													if (!ENTITY::IS_ENTITY_DEAD(Local_424[36 /*8*/]))
													{
														ENTITY::SET_ENTITY_INVINCIBLE(Local_424[36 /*8*/], true);
													}
													if (!ENTITY::IS_ENTITY_DEAD(Local_424[37 /*8*/]))
													{
														ENTITY::SET_ENTITY_INVINCIBLE(Local_424[37 /*8*/], true);
													}
													if (!ENTITY::IS_ENTITY_DEAD(Local_424[38 /*8*/]))
													{
														ENTITY::SET_ENTITY_INVINCIBLE(Local_424[38 /*8*/], true);
													}
													func_1306();
													TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, PED::GET_PED_DEFENSIVE_AREA_POSITION(Local_424[iVar0 /*8*/], false), 989.5f, -6766.8f, 51.6f, 2f, 1, 4f, 1082130432 /* Float: 4f */, 1, 2048, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 0);
													TASK::TASK_COMBAT_HATED_TARGETS(0, -1f);
													func_1307(Local_424[iVar0 /*8*/], __LIB_5__::func_439(iVar0 == 2, 0f, 0.4f));
												}
												func_1691(iVar0, 36);
												func_1691(iVar0, 37);
												func_1691(iVar0, 38);
												func_1691(iVar0, 39);
												func_1691(iVar0, 40);
												func_1691(iVar0, 41);
												func_1221(iVar0, 38);
												Jump @4613; //curOff = 3617
												if (iVar0 == 2)
												{
													func_1730(uParam0);
													if (func_164(51))
													{
														func_1221(2, 39);
														func_1221(3, 39);
													}
													else
													{
														Jump @4613; //curOff = 3658
														if (iVar0 == 2)
														{
															if (!ENTITY::IS_ENTITY_DEAD(Local_424[36 /*8*/]))
															{
																ENTITY::SET_ENTITY_INVINCIBLE(Local_424[36 /*8*/], false);
															}
															if (!ENTITY::IS_ENTITY_DEAD(Local_424[37 /*8*/]))
															{
																ENTITY::SET_ENTITY_INVINCIBLE(Local_424[37 /*8*/], false);
															}
															if (!ENTITY::IS_ENTITY_DEAD(Local_424[38 /*8*/]))
															{
																ENTITY::SET_ENTITY_INVINCIBLE(Local_424[38 /*8*/], false);
															}
															func_1728(1);
															__LIB_1__::func_283(&(vLocal_1569[25 /*3*/]), 1);
															__LIB_1__::func_733(Local_424[2 /*8*/]);
															PED::_0xFC3DB99C8144CD81(Local_424[2 /*8*/], Local_128.f_91, 1, 0, 0);
															__LIB_1__::func_733(Local_424[3 /*8*/]);
															PED::_0xFC3DB99C8144CD81(Local_424[3 /*8*/], Local_128.f_89, 1, 0, 0);
														}
														PED::SET_PED_COMBAT_ATTRIBUTES(Local_424[iVar0 /*8*/], 0, true);
														func_1306();
														TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, PED::GET_PED_DEFENSIVE_AREA_POSITION(Local_424[iVar0 /*8*/], false), 982.9f, -6785.2f, 49.4f, 2f, 1, 1f, 1082130432 /* Float: 4f */, 1, 2048, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 0);
														TASK::TASK_COMBAT_HATED_TARGETS(0, -1f);
														func_1307(Local_424[iVar0 /*8*/], __LIB_5__::func_439(iVar0 == 2, 0f, 0.5f));
														func_1221(iVar0, 40);
														Jump @4613; //curOff = 3930
														if (iVar0 == 2)
														{
															if (!ENTITY::IS_ENTITY_DEAD(Local_424[36 /*8*/]))
															{
																if (ENTITY::IS_ENTITY_IN_VOLUME(Local_424[2 /*8*/], Local_128.f_10, true, 0))
																{
																	__LIB_14__::func_337(Local_424[2 /*8*/], PED::GET_PED_BONE_COORDS(Local_424[36 /*8*/], 21030, 0f, 0f, 0f), 0, 0, 0, 0, 1);
																	PED::SET_PED_TO_RAGDOLL_WITH_FALL(Local_424[36 /*8*/], 5000, 10000, 1, __LIB_0__::func_173(-5f, -15f, 5f), 0f, 0f, 0f, 0f, 0f, 0f, 0f);
																	ENTITY::APPLY_FORCE_TO_ENTITY(Local_424[36 /*8*/], 1, -5f, -15f, 5f, 0f, 0f, 0f, 0, false, false, true, true, true);
																	ENTITY::_SET_ENTITY_HEALTH(Local_424[36 /*8*/], 0, Local_424[2 /*8*/]);
																}
															}
															if (__LIB_0__::func_75(&(vLocal_1569[25 /*3*/])))
															{
																if (__LIB_0__::func_265(&(vLocal_1569[25 /*3*/])) >= 20f)
																{
																	func_1728(0);
																	__LIB_0__::func_37(&(vLocal_1569[25 /*3*/]));
																}
															}
															func_1730(uParam0);
															if (((((ENTITY::IS_ENTITY_DEAD(Local_424[36 /*8*/]) && ENTITY::IS_ENTITY_DEAD(Local_424[37 /*8*/])) && ENTITY::IS_ENTITY_DEAD(Local_424[38 /*8*/])) && ENTITY::IS_ENTITY_DEAD(Local_424[39 /*8*/])) && ENTITY::IS_ENTITY_DEAD(Local_424[40 /*8*/])) && ENTITY::IS_ENTITY_DEAD(Local_424[41 /*8*/]))
															{
																func_1221(2, 41);
																func_1221(3, 41);
															}
															else
															{
																Jump @4613; //curOff = 4264
																if (iVar0 == 2)
																{
																	func_1200(974.4f, -6794.4f, 49.9f, -1082130432 /* Float: -1f */);
																	func_1182(uParam0, 4);
																	iLocal_2161 = 55;
																	__LIB_5__::func_486(uParam0, func_1190(55), -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
																	__LIB_10__::func_930(uParam0, Local_424[2 /*8*/], joaat("COLOR_NEUTRAL"), joaat("BLIP_STYLE_COMPANION"), 1, 1);
																	MAP::_BLIP_SET_MODIFIER(Local_424[3 /*8*/].f_1, -401963276);
																	func_1257(0, 1);
																}
																func_1306();
																TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, func_438(25), 0, 0, -1, 0, 0, -1);
																func_1307(Local_424[iVar0 /*8*/], __LIB_5__::func_439(iVar0 == 2, 0f, 0.8f));
																func_1221(iVar0, 42);
																Jump @4613; //curOff = 4435
																if (func_1692(Local_424[iVar0 /*8*/]))
																{
																	if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_424[iVar0 /*8*/], func_438(25)))
																	{
																		TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_424[iVar0 /*8*/], 2f, 1, 0.4f, 0);
																		if (!TASK::GET_PED_WAYPOINT_PROGRESS(Local_424[iVar0 /*8*/]) < 23)
																		{
																			Jump @4613; //curOff = 4509
																		}
																	}
																else
																{
																	}
																	else
																	{
																		if (iVar0 == 2)
																		{
																			iVar19 = 8;
																		}
																		else if (iVar0 == 3)
																		{
																			iVar19 = 9;
																		}
																		Var20 = { func_1256(iVar19) };
																		func_1204(iVar19);
																		TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Local_424[iVar0 /*8*/], Var20, -1, 0, 0f, Var20.f_8, Var20.f_9, iLocal_230[iVar19], 1, 0, 0);
																		func_1221(iVar0, 43);
																	}
																	iVar0++;
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
						}
					}
				}
				default:
					break;
		}
	}
}

void func_1239()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	iVar0 = 4;
	while (iVar0 <= 5)
	{
		if (ENTITY::IS_ENTITY_DEAD(Local_424[iVar0 /*8*/]))
		{
		}
		else
		{
			switch (Local_424[iVar0 /*8*/].f_2)
			{
				case 1:
					iVar1 = 27;
					while (iVar1 <= 41)
					{
						func_1722(iVar0, iVar1);
						iVar1++;
					}
					func_1221(iVar0, 8);
					break;
				case 8:
					if (iVar0 == 5)
					{
						PED::_0xFC3DB99C8144CD81(Local_424[iVar0 /*8*/], Local_128.f_48, 1, 0, 0);
					}
					else if (iVar0 == 4)
					{
						PED::_0xFC3DB99C8144CD81(Local_424[iVar0 /*8*/], Local_128.f_47, 1, 0, 0);
					}
					if (!ENTITY::IS_ENTITY_DEAD(Local_424[12 /*8*/]))
					{
						func_1306();
						TASK::TASK_COMBAT_PED(0, Local_424[12 /*8*/], 16777216, 0);
						func_1307(Local_424[iVar0 /*8*/], 0);
					}
					func_1221(iVar0, 9);
					break;
				case 9:
					if (func_1180(30, (52 + iVar0)))
					{
						if (!func_1692(Local_424[iVar0 /*8*/]))
						{
							func_1221(iVar0, 8);
						}
						vVar2 = { ENTITY::GET_ENTITY_COORDS(Local_424[iVar0 /*8*/], true, false) };
						if (vVar2.z < 61.6f)
						{
							if (iVar0 == 5)
							{
								ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_424[iVar0 /*8*/], func_472(2, 3), func_1255(2, 3), true, false, true);
							}
							else if (iVar0 == 4)
							{
								ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_424[iVar0 /*8*/], func_472(2, 2), func_1255(2, 2), true, false, true);
							}
							ENTITY::_0x9587913B9E772D29(Local_424[iVar0 /*8*/], 0);
							func_1221(iVar0, 8);
						}
					}
					break;
			}
		}
		iVar0++;
	}
}

void func_1240()
{
	if (ENTITY::IS_ENTITY_DEAD(Local_424[6 /*8*/]))
	{
		return;
	}
	func_853(3);
	switch (Local_424[6 /*8*/].f_2)
	{
		case 1:
			if (Local_2328[3 /*5*/].f_1 == 8)
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_424[6 /*8*/], 987.5f, -6744.7f, 62.9f, 2f, 20000, 2f, 0, 40000f);
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_424[6 /*8*/], false);
				func_1221(6, 17);
			}
			break;
		case 17:
			if (!__LIB_16__::func_776(Local_424[6 /*8*/], 713668775))
			{
				func_1199(3, 1);
				func_1221(6, 12);
			}
			break;
		case 12:
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_2328[3 /*5*/], false))
			{
			}
			else
			{
				if (!__LIB_0__::func_75(&(vLocal_1569[15 /*3*/])))
				{
					__LIB_1__::func_283(&(vLocal_1569[15 /*3*/]), 0);
					fLocal_2144 = MISC::GET_RANDOM_FLOAT_IN_RANGE(10f, 15f);
				}
				if (func_164(11) && ANIMSCENE::_0x8D81E7824B7753F7(Local_2328[3 /*5*/], "s_base", 1))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_2328[3 /*5*/], "pbl_Flinch_01", true);
					func_1221(6, 13);
				}
				if (ANIMSCENE::_0x8D81E7824B7753F7(Local_2328[3 /*5*/], "s_base", 1))
				{
					if (!func_164(45))
					{
						if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
						{
							if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_128.f_20, true, 0))
							{
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_2328[3 /*5*/], "pbl_Get_This_Working_Properly_LEFT", true);
								func_849(45);
								func_1221(6, 13);
								Jump @581; //curOff = 373
							}
							else if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_128.f_21, true, 0))
							{
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_2328[3 /*5*/], "pbl_Get_This_Working_Properly_RIGHT", true);
								func_849(45);
								func_1221(6, 13);
							}
							else
							{
								if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_128.f_22, true, 0))
								{
									ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_2328[3 /*5*/], "pbl_Idle_v02", true);
									func_1221(6, 13);
								}
								else if (__LIB_0__::func_265(&(vLocal_1569[15 /*3*/])) >= fLocal_2144)
								{
									if (__LIB_1__::func_985())
									{
										ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_2328[3 /*5*/], "pbl_Idle_v01", true);
										func_1221(6, 13);
									}
									else
									{
										ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_2328[3 /*5*/], "pbl_Idle_v03", true);
										func_1221(6, 13);
									}
								}
								Jump @581; //curOff = 539
								if (ANIMSCENE::_0x8D81E7824B7753F7(Local_2328[3 /*5*/], "s_BASE", 1))
								{
									__LIB_0__::func_37(&(vLocal_1569[15 /*3*/]));
									func_1221(6, 12);
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

void func_1241(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_1465)
	{
		if (!__LIB_4__::func_688(Local_1465[iVar0 /*7*/].f_6, __LIB_4__::func_939(uParam0)))
		{
		}
		else
		{
			switch (Local_1465[iVar0 /*7*/].f_5)
			{
				case 1:
					if (iVar0 == 3)
					{
						if (!ENTITY::IS_ENTITY_DEAD(Global_35))
						{
							if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_128.f_1, true, 0) && !ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_128.f_2, true, 0))
							{
								Local_1465[iVar0 /*7*/].f_5 = 2;
							}
						}
					}
					else if (iVar0 == 0)
					{
						if (func_164(9) && !ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_128.f_5, true, 0))
						{
							Local_1465[iVar0 /*7*/].f_5 = 2;
						}
					}
					break;
				case 2:
					if (Local_1465[iVar0 /*7*/].f_1 > 0f)
					{
						__LIB_1__::func_283(&(Local_1465[iVar0 /*7*/].f_2), 1);
						Local_1465[iVar0 /*7*/].f_5 = 3;
					}
					else
					{
						Local_1465[iVar0 /*7*/].f_5 = 4;
					}
					break;
				case 3:
					if (__LIB_0__::func_265(&(Local_1465[iVar0 /*7*/].f_2)) >= Local_1465[iVar0 /*7*/].f_1)
					{
						Local_1465[iVar0 /*7*/].f_5 = 4;
					}
					break;
				case 4:
					__LIB_5__::func_505(uParam0, func_1190(Local_1465[iVar0 /*7*/]), "", 1, 0);
					Local_1465[iVar0 /*7*/].f_5 = 5;
					break;
			}
		}
		iVar0++;
	}
}

void func_1242(var uParam0)
{
	int iVar0;
	struct<4> Var1;
	float fVar5;
	iVar0 = 27;
	while (iVar0 <= 41)
	{
		if (Local_424[iVar0 /*8*/].f_2 == 18)
		{
		}
		else if (ENTITY::IS_ENTITY_DEAD(Local_424[iVar0 /*8*/]))
		{
			Local_1700.f_387++;
			if (Local_1265[5 /*13*/].f_1 == 1)
			{
				func_1250(5);
			}
			func_1221(iVar0, 18);
		}
		else
		{
			if (!Local_424[iVar0 /*8*/].f_2 == 8 && !Local_424[iVar0 /*8*/].f_2 == 9)
			{
				if (func_1732(iVar0))
				{
					func_1221(iVar0, 8);
				}
			}
			switch (Local_424[iVar0 /*8*/].f_2)
			{
				case 1:
					if (!iVar0 == 27)
					{
						func_1252(uParam0, iVar0, 1);
						MAP::_BLIP_SET_MODIFIER(Local_424[iVar0 /*8*/].f_1, -1186550032);
					}
					if (iVar0 == 37 || iVar0 == 38)
					{
						PED::_0x6569F31A01B4C097(Local_424[iVar0 /*8*/], 0, 0);
						PED::_0x6569F31A01B4C097(Local_424[iVar0 /*8*/], 1, 0);
						ENTITY::_0x18FF3110CF47115D(Local_424[iVar0 /*8*/], 2, 0);
						ENTITY::_0x18FF3110CF47115D(Local_424[iVar0 /*8*/], 7, 0);
					}
					switch (iVar0)
					{
						case 28:
						case 29:
						case 30:
						case 31:
						case 34:
						case 35:
							PED::SET_PED_CONFIG_FLAG(Local_424[iVar0 /*8*/], 138, true);
							break;
					}
					PED::SET_PED_CONFIG_FLAG(Local_424[iVar0 /*8*/], 301, true);
					__LIB_1__::func_991(Local_424[iVar0 /*8*/], 0);
					ENTITY::SET_ENTITY_INVINCIBLE(Local_424[iVar0 /*8*/], false);
					func_1221(iVar0, 2);
					break;
				case 2:
					if (func_164(0))
					{
					}
					else
					{
						WEAPON::REMOVE_ALL_PED_WEAPONS(Local_424[iVar0 /*8*/], true, true);
						func_849(0);
						func_1221(iVar0, 3);
						Jump @1565; //curOff = 457
						if (func_164(0))
						{
						}
						else
						{
							__LIB_4__::func_7(Local_424[iVar0 /*8*/], func_1733(iVar0, 0), -1, 2, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
							func_849(0);
							if (!func_1733(iVar0, 1) == 0)
							{
								func_1221(iVar0, 4);
							}
							else
							{
								func_1221(iVar0, 6);
							}
							Jump @1565; //curOff = 539
							if (func_164(0))
							{
							}
							else
							{
								__LIB_4__::func_7(Local_424[iVar0 /*8*/], func_1733(iVar0, 1), -1, 2, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
								func_849(0);
								func_1221(iVar0, 6);
								Jump @1565; //curOff = 598
								WEAPON::SET_CURRENT_PED_WEAPON(Local_424[iVar0 /*8*/], func_1733(iVar0, 0), true, 0, false, false);
								if (!func_1733(iVar0, 1) == 0)
								{
									WEAPON::SET_CURRENT_PED_WEAPON(Local_424[iVar0 /*8*/], func_1733(iVar0, 1), true, 1, false, false);
								}
								PED::SET_PED_USING_ACTION_MODE(Local_424[iVar0 /*8*/], true, -1, 0);
								TASK::TASK_AIM_AT_COORD(Local_424[iVar0 /*8*/], VOLUME::_GET_VOLUME_COORDS(Local_128.f_7), -1, 0, 0);
								func_1221(iVar0, 7);
								Jump @1565; //curOff = 701
								Jump @1565; //curOff = 704
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_424[iVar0 /*8*/], 46, true);
								MAP::_BLIP_REMOVE_MODIFIER(Local_424[iVar0 /*8*/].f_1, -1186550032);
								PED::REGISTER_TARGET(Local_424[iVar0 /*8*/], Global_35, 1);
								func_1691(iVar0, 2);
								func_1691(iVar0, 3);
								if (((((iVar0 == 28 || iVar0 == 29) || iVar0 == 30) || iVar0 == 31) || iVar0 == 32) || iVar0 == 33)
								{
									switch (iVar0)
									{
										case 28:
											fVar5 = 0f;
											PED::_0xFC3DB99C8144CD81(Local_424[iVar0 /*8*/], Local_128.f_59, 0, 0, 0);
											break;
										case 29:
											fVar5 = 0.4f;
											PED::_0xFC3DB99C8144CD81(Local_424[iVar0 /*8*/], Local_128.f_60, 0, 0, 0);
											break;
										case 30:
											fVar5 = 0f;
											PED::_0xFC3DB99C8144CD81(Local_424[iVar0 /*8*/], Local_128.f_61, 0, 0, 0);
											break;
										case 31:
											fVar5 = 0.6f;
											PED::_0xFC3DB99C8144CD81(Local_424[iVar0 /*8*/], Local_128.f_62, 0, 0, 0);
											break;
										case 32:
											fVar5 = 0f;
											PED::_0xFC3DB99C8144CD81(Local_424[iVar0 /*8*/], Local_128.f_63, 0, 0, 0);
											break;
									}
									if (iVar0 == 33)
									{
										WEAPON::REMOVE_ALL_PED_WEAPONS(Local_424[iVar0 /*8*/], true, true);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_424[iVar0 /*8*/], 93, true);
										PED::SET_PED_COMBAT_MOVEMENT(Local_424[iVar0 /*8*/], 2);
										PED::_0x815C0074A1BC0D93(Local_424[iVar0 /*8*/], 2);
										__LIB_4__::func_7(Local_424[iVar0 /*8*/], joaat("WEAPON_MELEE_KNIFE"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
										func_1306();
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 998.3f, -6719.9f, 57.7f, 3f, 20000, (0.25f * 4f), 1, 40000f);
										TASK::TASK_COMBAT_PED(0, Global_35, 16777216, 4112);
										func_1307(Local_424[iVar0 /*8*/], 0);
										ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_424[iVar0 /*8*/], true);
									}
									else
									{
										func_1306();
										TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, PED::GET_PED_DEFENSIVE_AREA_POSITION(Local_424[iVar0 /*8*/], false), Local_424[2 /*8*/], 2f, 1, 1f, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
										TASK::TASK_COMBAT_HATED_TARGETS(0, -1f);
										func_1307(Local_424[iVar0 /*8*/], fVar5);
									}
								}
								else if (iVar0 == 34 || iVar0 == 35)
								{
									if (iVar0 == 35)
									{
										fVar5 = 1f;
									}
									func_1722(iVar0, 5);
									func_1722(iVar0, 4);
									func_1722(iVar0, 6);
									Var1 = { func_217(iVar0, 2, 2) };
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_424[iVar0 /*8*/], Var1, Var1.f_3, 1, 0, 0);
									func_1306();
									TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, PED::GET_PED_DEFENSIVE_AREA_POSITION(Local_424[iVar0 /*8*/], false), Global_35, 2f, 1, 0.5f, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
									TASK::TASK_COMBAT_HATED_TARGETS(0, -1f);
									func_1307(Local_424[iVar0 /*8*/], fVar5);
								}
								else if ((iVar0 == 36 || iVar0 == 37) || iVar0 == 38)
								{
									Var1 = { func_217(iVar0, 2, 2) };
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_424[iVar0 /*8*/], Var1, 1f, 1, 0, 0);
									TASK::TASK_COMBAT_HATED_TARGETS(Local_424[iVar0 /*8*/], -1f);
								}
								else
								{
									Var1 = { func_217(iVar0, 1, 2) };
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_424[iVar0 /*8*/], Var1, Var1.f_3, 1, 0, 0);
									TASK::TASK_COMBAT_HATED_TARGETS(Local_424[iVar0 /*8*/], -1f);
								}
								func_1221(iVar0, 9);
								Jump @1565; //curOff = 1540
								if (iVar0 == 33)
								{
									PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_424[iVar0 /*8*/], 2f);
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

void func_1243(var uParam0)
{
	vector3 vVar0;
	int iVar7;
	int iVar8;
	int iVar9;
	vector3 vVar10;
	float fVar14;
	vector3 vVar15;
	vVar0.f_6 = -1;
	iVar8 = 39;
	iVar9 = 41;
	switch (iLocal_2377)
	{
		case 0:
			break;
		case 1:
			iLocal_2162 = AUDIO::GET_SOUND_ID();
			iVar7 = iVar8;
			while (iVar7 <= iVar9)
			{
				vVar10 = { func_217(iVar7, 2, 2) };
				func_1306();
				TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, vVar10, Global_35, 3f, 1, 0.5f, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
				TASK::TASK_COMBAT_HATED_TARGETS(0, -1f);
				func_1307(Local_424[iVar7 /*8*/], 0);
				PED::FORCE_PED_MOTION_STATE(Local_424[iVar7 /*8*/], joaat("MOTIONSTATE_SPRINT"), false, 0, false);
				iVar7++;
			}
			__LIB_5__::func_372(uParam0, 13);
			iLocal_2377 = 2;
			break;
		case 2:
			func_858(13, 0);
			iLocal_2120 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD(func_1294(6), ENTITY::GET_ENTITY_COORDS(iLocal_1233[13], true, false), 0f, 0f, 0f, 6f, false, false, false, false);
			if (!iLocal_2162 == -1)
			{
				AUDIO::_0xF1C5310FEAA36B48(iLocal_2162, func_1294(10), iLocal_1233[13], func_1294(9), 0, 0);
			}
			ENTITY::SET_ENTITY_LOD_DIST(iLocal_1233[13], 200);
			ENTITY::SET_ENTITY_COLLISION(iLocal_1233[13], false, false);
			func_1200(977.5f, -6792f, 49.9f, -1082130432 /* Float: -1f */);
			__LIB_1__::func_283(&(vLocal_1569[16 /*3*/]), 1);
			func_1734(0);
			iLocal_2377 = 3;
			break;
		case 3:
			vVar0 = { func_1176(13) };
			fVar14 = (__LIB_0__::func_265(&(vLocal_1569[16 /*3*/])) / 2f);
			if (fVar14 > 1f)
			{
				fVar14 = 1f;
			}
			ENTITY::SET_ENTITY_COORDS(iLocal_1233[13], __LIB_1__::func_367(vVar0, vVar0.f_3, fVar14), true, false, true, true);
			GRAPHICS::SET_PARTICLE_FX_LOOPED_OFFSETS(iLocal_2120, ENTITY::GET_ENTITY_COORDS(iLocal_1233[13], true, false), 0f, 0f, 0f);
			if (fVar14 == 1f)
			{
				__LIB_1__::func_283(&(vLocal_1569[18 /*3*/]), 0);
				iLocal_2377 = 4;
			}
			break;
		case 4:
			vVar0 = { func_1176(13) };
			func_1247(0, vVar0.f_3, 3f);
			AUDIO::_PLAY_SOUND_FROM_POSITION(func_1294(12), 980f, -6792.5f, 49.6f, func_1294(9), false, 0, true, 0);
			iVar7 = 27;
			while (iVar7 <= 41)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_424[iVar7 /*8*/]))
				{
					if (iVar7 < 36)
					{
						ENTITY::_SET_ENTITY_HEALTH(Local_424[iVar7 /*8*/], 0, 0);
					}
					else
					{
						FIRE::START_ENTITY_FIRE(Local_424[iVar7 /*8*/], 100f, 0, 4);
						ENTITY::SET_ENTITY_DYNAMIC(Local_424[iVar7 /*8*/], true);
						PHYSICS::ACTIVATE_PHYSICS(Local_424[iVar7 /*8*/]);
						PED::SET_PED_TO_RAGDOLL_WITH_FALL(Local_424[iVar7 /*8*/], 5000, 10000, 1, __LIB_0__::func_173(__LIB_1__::func_868(ENTITY::GET_ENTITY_COORDS(Local_424[iVar7 /*8*/], true, false), vVar0, 1065353216 /* Float: 1f */)), 0f, 0f, 0f, 0f, 0f, 0f, 0f);
						vVar15 = { (-5f + MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f)), (18f + MISC::GET_RANDOM_FLOAT_IN_RANGE(-2f, 2f)), (10f + MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f)) };
						ENTITY::APPLY_FORCE_TO_ENTITY(Local_424[iVar7 /*8*/], 1, vVar15, 0f, 0f, 0f, 0, false, false, true, true, true);
						ENTITY::_SET_ENTITY_HEALTH(Local_424[iVar7 /*8*/], 0, 0);
					}
				}
				iVar7++;
			}
			func_1736(Local_424[39 /*8*/]);
			AUDIO::_0x3210BCB36AF7621B(iLocal_2162);
			AUDIO::RELEASE_SOUND_ID(iLocal_2162);
			iLocal_2162 = -1;
			__LIB_5__::func_372(uParam0, 14);
			GRAPHICS::REMOVE_PARTICLE_FX(iLocal_2120, false);
			OBJECT::DELETE_OBJECT(&(iLocal_1233[13]));
			iLocal_2377 = 5;
			break;
	}
}

void func_1244(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1483(iParam0, 128);
	}
	else
	{
		func_1269(iParam0, 128);
	}
	ENTITY::SET_ENTITY_VISIBLE(Local_424[iParam0 /*8*/], bParam1);
	ENTITY::SET_ENTITY_INVINCIBLE(Local_424[iParam0 /*8*/], !bParam1);
	ENTITY::FREEZE_ENTITY_POSITION(Local_424[iParam0 /*8*/], !bParam1);
	if (bParam1)
	{
		ENTITY::SET_ENTITY_PROOFS(Local_424[iParam0 /*8*/], 0, false);
	}
	else
	{
		ENTITY::SET_ENTITY_PROOFS(Local_424[iParam0 /*8*/], 5, false);
	}
}

Vector3 func_1245(int iParam0, int iParam1)
{
	return func_1490(iParam0, iParam1);
}

float func_1246(int iParam0, int iParam1)
{
	return func_1491(iParam0, iParam1);
}

void func_1247(int iParam0, vector3 vParam1, float fParam4)
{
	func_849(11);
	if (iParam0 == -1)
	{
		GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD(func_1294(5), vParam1, 0f, 0f, 0f, fParam4, false, false, false);
	}
	else
	{
		GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD(func_1294(5), vParam1, __LIB_4__::func_335(__LIB_1__::func_868(Local_1700.f_3[iParam0 /*33*/].f_13.f_13, vParam1, 1f)), fParam4, false, false, false);
	}
	FIRE::ADD_EXPLOSION(vParam1, 25, 0.1f, true, true, 0f);
	if (CAM::DOES_CAM_EXIST(iLocal_1494[0]))
	{
		CAM::SHAKE_CAM(iLocal_1494[0], func_1294(15), func_1738(vParam1));
	}
	else
	{
		CAM::SHAKE_GAMEPLAY_CAM(func_1294(15), func_1738(vParam1));
	}
	PED::_0x09E378C52B1433B5(Global_35, vParam1, fParam4);
	PED::_0x09E378C52B1433B5(Local_424[2 /*8*/], vParam1, fParam4);
	PED::_0x09E378C52B1433B5(Local_424[3 /*8*/], vParam1, fParam4);
}

void func_1249()
{
	if (!func_164(49))
	{
		if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_128.f_7, true, 0))
		{
			func_849(49);
		}
	}
	if (!func_164(50))
	{
		if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_128.f_45, true, 0))
		{
			func_849(50);
		}
	}
	if (!func_164(51))
	{
		if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_128.f_49, true, 0))
		{
			func_849(51);
		}
	}
	if (!func_164(52))
	{
		if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_128.f_10, true, 0))
		{
			func_849(52);
		}
	}
	if (!func_164(53))
	{
		if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_128.f_46, true, 0))
		{
			func_849(53);
		}
	}
}

void func_1250(int iParam0)
{
	UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
	if (Local_1265[iParam0 /*13*/].f_1 == 1)
	{
		__LIB_0__::func_37(&(Local_1265[iParam0 /*13*/].f_2));
		Local_1265[iParam0 /*13*/].f_1 = 2;
	}
	if (iLocal_2111 == Local_1265[iParam0 /*13*/].f_11)
	{
		iLocal_2111 = 0;
	}
}

void func_1251(int iParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1233[iParam0]))
	{
		return;
	}
	OBJECT::DELETE_OBJECT(&(iLocal_1233[iParam0]));
}

void func_1252(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == 3 || iParam1 == 6)
	{
		if (bParam2)
		{
			if (!MAP::DOES_BLIP_EXIST(Local_424[iParam1 /*8*/].f_1))
			{
				Local_424[iParam1 /*8*/].f_1 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_COMPANION"), Local_424[iParam1 /*8*/]);
			}
			if (iParam1 == 3)
			{
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_424[iParam1 /*8*/].f_1, func_1190(2));
			}
			else if (iParam1 == 6)
			{
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_424[iParam1 /*8*/].f_1, func_1190(3));
			}
		}
		else if (MAP::DOES_BLIP_EXIST(Local_424[iParam1 /*8*/].f_1))
		{
			MAP::REMOVE_BLIP(&(Local_424[iParam1 /*8*/].f_1));
		}
		return;
	}
	if (iParam1 >= 12 && iParam1 <= 100)
	{
		if (bParam2)
		{
			if (!MAP::DOES_BLIP_EXIST(Local_424[iParam1 /*8*/].f_1))
			{
				Local_424[iParam1 /*8*/].f_1 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_424[iParam1 /*8*/]);
			}
			if (iParam1 == 71 || iParam1 == 27)
			{
				MAP::_BLIP_SET_MODIFIER(Local_424[iParam1 /*8*/].f_1, -948075745);
			}
			if ((!iParam1 >= 13 && !iParam1 <= 26) && !iParam1 == 27)
			{
				MAP::_BLIP_SET_MODIFIER(Local_424[iParam1 /*8*/].f_1, -1034486097);
			}
		}
		else
		{
			MAP::REMOVE_BLIP(&(Local_424[iParam1 /*8*/].f_1));
		}
		return;
	}
}

void func_1253(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, WEAPON::GET_BEST_PED_WEAPON(Global_35, false, false), bParam0, 0, false, false);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_424[2 /*8*/]))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Local_424[2 /*8*/], iLocal_1452[5], bParam0, 0, false, false);
		WEAPON::SET_CURRENT_PED_WEAPON(Local_424[2 /*8*/], iLocal_1452[6], bParam0, 1, false, false);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_424[5 /*8*/]))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Local_424[5 /*8*/], iLocal_1452[2], bParam0, 0, false, false);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_424[4 /*8*/]))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Local_424[4 /*8*/], iLocal_1452[3], bParam0, 0, false, false);
		WEAPON::SET_CURRENT_PED_WEAPON(Local_424[4 /*8*/], iLocal_1452[4], bParam0, 1, false, false);
	}
	if (!bParam2)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_424[3 /*8*/]))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Local_424[3 /*8*/], iLocal_1452[7], bParam0, 0, false, false);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_424[6 /*8*/]))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Local_424[6 /*8*/], iLocal_1452[8], bParam0, 0, false, false);
	}
}

float func_1255(int iParam0, int iParam1)
{
	return func_1489(iParam0, iParam1);
}

struct<10> func_1256(int iParam0)
{
	struct<10> Var0;
	switch (iParam0)
	{
		case 0:
			Var0 = { 986.5427f, -6747.713f, 62.1253f };
			Var0.f_3 = 120f;
			Var0.f_4 = 0;
			Var0.f_5 = 0;
			Var0.f_6 = 0;
			Var0.f_7 = 0;
			break;
		case 1:
			Var0 = { 988.301f, -6751.28f, 63.1315f };
			Var0.f_3 = 120f;
			Var0.f_4 = 0;
			Var0.f_5 = 0;
			Var0.f_6 = 1;
			Var0.f_7 = 0;
			break;
		case 2:
			Var0 = { 992.035f, -6750.471f, 63.12f };
			Var0.f_3 = 210.0082f;
			Var0.f_4 = 0;
			Var0.f_5 = 0;
			Var0.f_6 = 0;
			Var0.f_7 = 0;
			break;
		case 3:
			Var0 = { 991.19f, -6750.875f, 62.126f };
			Var0.f_3 = 160f;
			Var0.f_4 = 0;
			Var0.f_5 = 0;
			Var0.f_6 = 1;
			Var0.f_7 = 0;
			break;
		case 4:
			Var0 = { 987.6437f, -6750.386f, 62.4674f };
			Var0.f_3 = 120f;
			Var0.f_4 = 0;
			Var0.f_5 = 0;
			Var0.f_6 = 1;
			Var0.f_7 = 0;
			break;
		case 5:
			Var0 = { 990.7047f, -6740.652f, 62.1373f };
			Var0.f_3 = 100f;
			Var0.f_4 = 1;
			Var0.f_5 = 0;
			Var0.f_6 = 0;
			Var0.f_7 = 0;
			break;
		case 6:
			Var0 = { 994.8373f, -6735.514f, 57.3151f };
			Var0.f_3 = 20f;
			Var0.f_4 = 0;
			Var0.f_5 = 2;
			Var0.f_6 = 4;
			Var0.f_7 = 0;
			break;
		case 7:
			Var0 = { 996.1276f, -6739.941f, 57.3149f };
			Var0.f_3 = 20f;
			Var0.f_4 = 0;
			Var0.f_5 = 0;
			Var0.f_6 = 4;
			Var0.f_7 = 0;
			break;
		case 8:
			Var0 = { 978.73f, -6794.318f, 49.498f };
			Var0.f_3 = 110f;
			Var0.f_4 = 1;
			Var0.f_5 = 0;
			Var0.f_6 = 0;
			Var0.f_8 = 1;
			Var0.f_9 = 1;
			break;
		case 9:
			Var0 = { 980.246f, -6796.583f, 48.916f };
			Var0.f_3 = 253.5987f;
			Var0.f_4 = 2;
			Var0.f_5 = 0;
			Var0.f_6 = 1;
			Var0.f_8 = 1;
			Var0.f_9 = 0;
			break;
		case 10:
			Var0 = { 966.985f, -6761.077f, 43.839f };
			Var0.f_3 = 40f;
			Var0.f_4 = 1;
			Var0.f_5 = 2;
			Var0.f_6 = 4;
			Var0.f_7 = 0;
			break;
		case 11:
			Var0 = { 968.785f, -6762.936f, 43.879f };
			Var0.f_3 = 135f;
			Var0.f_4 = 1;
			Var0.f_5 = 0;
			Var0.f_6 = 1;
			Var0.f_7 = 0;
			break;
		default:
			break;
	}
	return Var0;
}

void func_1257(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_178(14);
	}
	else
	{
		func_849(14);
	}
	if (bParam1)
	{
		__LIB_0__::func_37(&(vLocal_1569[1 /*3*/]));
	}
}

void func_1258(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	bool bVar4;
	if (MAP::DOES_BLIP_EXIST(Local_1523[8 /*5*/].f_1))
	{
		if (ENTITY::IS_ENTITY_DEAD(Local_1523[8 /*5*/]) || ((ENTITY::IS_ENTITY_DEAD(Local_424[57 /*8*/]) && ENTITY::IS_ENTITY_DEAD(Local_424[58 /*8*/])) && ENTITY::IS_ENTITY_DEAD(Local_424[59 /*8*/])))
		{
			MAP::REMOVE_BLIP(&(Local_1523[8 /*5*/].f_1));
		}
	}
	iVar0 = 57;
	while (iVar0 <= 59)
	{
		if (Local_424[iVar0 /*8*/].f_2 == 18)
		{
		}
		else
		{
			if (ENTITY::IS_ENTITY_DEAD(Local_1523[8 /*5*/]))
			{
				ENTITY::_SET_ENTITY_HEALTH(Local_424[iVar0 /*8*/], 0, 0);
			}
			if (ENTITY::IS_ENTITY_DEAD(Local_424[iVar0 /*8*/]))
			{
				Local_1700.f_388++;
				func_1221(iVar0, 18);
			}
			else
			{
				switch (Local_424[iVar0 /*8*/].f_2)
				{
					case 1:
						if (iVar0 == 57)
						{
							PED::SET_PED_INTO_VEHICLE(Local_424[iVar0 /*8*/], Local_1523[8 /*5*/], -1);
						}
						else
						{
							PED::SET_PED_INTO_VEHICLE(Local_424[iVar0 /*8*/], Local_1523[8 /*5*/], -2);
						}
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_424[iVar0 /*8*/], 3, false);
						func_1722(iVar0, 5);
						func_1722(iVar0, 3);
						func_1722(iVar0, 6);
						func_1691(iVar0, 1);
						func_1691(iVar0, 2);
						func_1691(iVar0, 3);
						ENTITY::SET_ENTITY_INVINCIBLE(Local_424[iVar0 /*8*/], true);
						func_1722(2, iVar0);
						func_1722(3, iVar0);
						func_1221(iVar0, 5);
						break;
					case 5:
						__LIB_1__::func_283(&(vLocal_1569[24 /*3*/]), 0);
						if (__LIB_0__::func_265(&(vLocal_1569[24 /*3*/])) >= 20f)
						{
							func_1221(iVar0, 21);
						}
						break;
					case 21:
						PED::SET_PED_SEEING_RANGE(Local_424[iVar0 /*8*/], 180f);
						if (iVar0 == 57)
						{
							TASK::_TASK_VEHICLE_DRIVE_TO_DESTINATION_2(Local_1523[8 /*5*/], 1018.4f, -6808.2f, 40.6f, 3f, 0, 3, 1f, 1f);
							func_1747(8);
							__LIB_1__::func_283(&(vLocal_1569[21 /*3*/]), 0);
						}
						else
						{
							func_1691(iVar0, 1);
							func_1691(iVar0, 2);
							func_1691(iVar0, 3);
							TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(Local_424[iVar0 /*8*/], VOLUME::_GET_VOLUME_COORDS(Local_128.f_8), 200f, 0, 1);
						}
						func_1221(iVar0, 22);
						break;
					case 22:
						if (!bVar4)
						{
							bVar4 = true;
							if (iVar0 == 57)
							{
								if ((__LIB_0__::func_265(&(vLocal_1569[21 /*3*/])) >= 10f && !ENTITY::IS_ENTITY_OCCLUDED(Local_1523[8 /*5*/])) && ((func_1748(Local_424[57 /*8*/], 1, 1, 1, 0, 1) || func_1748(Local_424[58 /*8*/], 1, 1, 1, 0, 1)) || func_1748(Local_424[59 /*8*/], 1, 1, 1, 0, 1)))
								{
									iLocal_2260 = func_1200(ENTITY::GET_ENTITY_COORDS(Local_1523[8 /*5*/], true, false), 30f);
									if (!iLocal_2260 == -1)
									{
										ENTITY::SET_ENTITY_INVINCIBLE(Local_424[57 /*8*/], false);
										ENTITY::SET_ENTITY_INVINCIBLE(Local_424[58 /*8*/], false);
										ENTITY::SET_ENTITY_INVINCIBLE(Local_424[59 /*8*/], false);
										func_1221(57, 16);
										func_1221(58, 16);
										func_1221(59, 16);
									}
									else
									{
										Jump @1175; //curOff = 765
										if (Local_1700.f_3[iLocal_2260 /*33*/].f_11 == 3)
										{
											if (!bVar4)
											{
												Local_1700.f_3[iLocal_2260 /*33*/].f_13.f_10 = { ENTITY::GET_ENTITY_COORDS(Local_1523[8 /*5*/], true, false) };
												bVar4 = true;
											}
										}
										else if (Local_1700.f_3[iLocal_2260 /*33*/].f_11 == 0)
										{
											ENTITY::SET_ENTITY_INVINCIBLE(Local_424[iVar0 /*8*/], false);
											vVar1 = { ENTITY::GET_ENTITY_COORDS(Local_424[iVar0 /*8*/], true, true) };
											PED::_0xE0B61ED8BB37712F(Local_424[iVar0 /*8*/]);
											ENTITY::SET_ENTITY_COORDS(Local_424[iVar0 /*8*/], vVar1, true, false, true, true);
											FIRE::START_ENTITY_FIRE(Local_424[iVar0 /*8*/], 100f, 0, 4);
											ENTITY::SET_ENTITY_DYNAMIC(Local_424[iVar0 /*8*/], true);
											PHYSICS::ACTIVATE_PHYSICS(Local_424[iVar0 /*8*/]);
											PED::SET_PED_TO_RAGDOLL_WITH_FALL(Local_424[iVar0 /*8*/], 5000, 10000, 1, __LIB_0__::func_173(1f, 1f, 1f), 0f, 0f, 0f, 0f, 0f, 0f, 0f);
											ENTITY::_SET_ENTITY_HEALTH(Local_424[iVar0 /*8*/], 0, 0);
											ENTITY::APPLY_FORCE_TO_ENTITY(Local_424[iVar0 /*8*/], 1, (-20f + MISC::GET_RANDOM_FLOAT_IN_RANGE(-3f, 3f)), (1f + MISC::GET_RANDOM_FLOAT_IN_RANGE(-3f, 3f)), (20f + MISC::GET_RANDOM_FLOAT_IN_RANGE(-3f, 3f)), 0f, 0f, 0f, 0, false, false, true, true, true);
											if (iVar0 == 59)
											{
												VEHICLE::SET_BOAT_SINKS_WHEN_WRECKED(Local_1523[8 /*5*/], true);
												func_1247(iLocal_2260, ENTITY::GET_ENTITY_COORDS(Local_1523[8 /*5*/], true, false), 4f);
												ENTITY::SET_ENTITY_COLLISION(Local_1523[8 /*5*/], false, false);
												PHYSICS::ACTIVATE_PHYSICS(Local_1523[8 /*5*/]);
												ENTITY::SET_ENTITY_DYNAMIC(Local_1523[8 /*5*/], true);
												FIRE::ADD_EXPLOSION(ENTITY::GET_ENTITY_COORDS(Local_1523[8 /*5*/], true, false), 22, 4f, true, false, 4f);
												ENTITY::_SET_ENTITY_HEALTH(Local_1523[8 /*5*/], 0, 0);
											}
											func_1221(iVar0, 17);
										}
										iVar0++;
									}
								}
							}
						}
						default:
							break;
				}
			}
		}
	}
}

void func_1259(var uParam0)
{
	int iVar0;
	bool bVar1;
	struct<4> Var2;
	bVar1 = true;
	switch (iLocal_2261)
	{
		case 0:
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_128.f_55, true, 0))
			{
				func_1749(4);
			}
			else if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_128.f_54, true, 0))
			{
				func_1749(1);
			}
			break;
		case 1:
			if (func_856(uParam0, 60, 62, 517))
			{
				iVar0 = 60;
				while (iVar0 <= 62)
				{
					func_1722(iVar0, 5);
					func_1722(iVar0, 4);
					func_1722(iVar0, 6);
					func_1691(iVar0, 2);
					func_1691(iVar0, 3);
					func_1691(iVar0, 1);
					Var2 = { func_217(iVar0, 1, 3) };
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_424[iVar0 /*8*/], Var2, Var2.f_3, 1, 0, 0);
					PED::SET_PED_COMBAT_MOVEMENT(Local_424[iVar0 /*8*/], 1);
					if (iVar0 == 61)
					{
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_424[iVar0 /*8*/], 0, false);
					}
					PED::SET_PED_CONFIG_FLAG(Local_424[iVar0 /*8*/], 138, true);
					PED::SET_PED_ACCURACY(Local_424[iVar0 /*8*/], 10);
					func_1306();
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, PED::GET_PED_DEFENSIVE_AREA_POSITION(Local_424[iVar0 /*8*/], false), Global_35, 2f, 1, 0.5f, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
					TASK::TASK_COMBAT_PED(0, Global_35, 16777216, 16);
					func_1307(Local_424[iVar0 /*8*/], 0);
					Local_424[iVar0 /*8*/].f_1 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_424[iVar0 /*8*/]);
					MAP::_BLIP_SET_MODIFIER(Local_424[iVar0 /*8*/].f_1, -1034486097);
					iVar0++;
				}
				func_1749(2);
			}
			break;
		case 2:
			iVar0 = 60;
			while (iVar0 <= 62)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_424[iVar0 /*8*/]))
				{
					bVar1 = false;
					Jump @462; //curOff = 409
				}
				else if (!Local_424[iVar0 /*8*/].f_2 == 18)
				{
					Local_1700.f_388++;
					func_1221(iVar0, 18);
				}
				iVar0++;
			}
			if (bVar1)
			{
				func_1749(3);
			}
			break;
	}
}

void func_1260()
{
	if (!func_164(53))
	{
		if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_128.f_46, true, 0))
		{
			func_849(53);
		}
	}
}

void func_1261(var uParam0)
{
	int iVar0;
	struct<10> Var1;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	int iVar19;
	int iVar20;
	vector3 vVar21;
	int iVar25;
	bool bVar26;
	bool bVar27;
	int iVar28;
	vector3 vVar29;
	if (!func_164(75))
	{
		if (Local_424[3 /*8*/].f_2 == 62 || Local_424[3 /*8*/].f_2 == 50)
		{
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1523[7 /*5*/], func_438(func_1750(7))))
			{
				if (TASK::GET_VEHICLE_WAYPOINT_PROGRESS(Local_1523[7 /*5*/]) >= 1)
				{
					func_1184(78);
					func_849(75);
				}
			}
		}
	}
	if (!func_164(74))
	{
		iVar0 = 0;
		if (Local_424[3 /*8*/].f_2 == 44)
		{
			if (!func_164(94) && !func_164(95))
			{
				TASK::TASK_LOOK_AT_ENTITY(Global_35, Local_424[3 /*8*/], -1, 48, 51, 1);
				func_849(94);
			}
			iVar0 = 3;
		}
		else if (Local_424[2 /*8*/].f_2 == 44)
		{
			if (func_164(94))
			{
				func_178(94);
			}
			if (!func_164(95))
			{
				TASK::TASK_LOOK_AT_ENTITY(Global_35, Local_424[2 /*8*/], -1, 48, 51, 1);
				func_849(95);
			}
			iVar0 = 2;
		}
		if (!iVar0 == 0)
		{
		}
		else if (func_164(95) || func_164(94))
		{
			func_178(95);
			func_178(94);
			TASK::TASK_CLEAR_LOOK_AT(Global_35);
		}
	}
	iVar13 = 0;
	iVar14 = 0;
	if (Local_424[2 /*8*/].f_2 == 44 || Local_424[3 /*8*/].f_2 == 44)
	{
		func_1751(&iVar13, &iVar14);
	}
	if (Local_424[2 /*8*/].f_2 > 44)
	{
		if (!func_164(64))
		{
			if (!iLocal_2258 == 0)
			{
				if ((iLocal_2113 == 0 && !__LIB_6__::func_904()) && !__LIB_5__::func_463())
				{
					func_1184(iLocal_2258);
					func_849(64);
				}
			}
		}
	}
	if (Local_424[3 /*8*/].f_2 > 44)
	{
		if (!func_164(65))
		{
			if (!iLocal_2259 == 0)
			{
				if ((iLocal_2113 == 0 && !__LIB_6__::func_904()) && !__LIB_5__::func_463())
				{
					func_1184(iLocal_2259);
					func_849(65);
				}
			}
		}
	}
	iVar12 = 2;
	while (iVar12 <= 3)
	{
		if (ENTITY::IS_ENTITY_DEAD(Local_424[iVar12 /*8*/]))
		{
			func_1221(iVar12, 18);
		}
		else
		{
			switch (Local_424[iVar12 /*8*/].f_2)
			{
				case 1:
					func_1221(iVar12, 42);
				case 42:
					if (iVar12 == 2)
					{
						iVar11 = 8;
					}
					else if (iVar12 == 3)
					{
						iVar11 = 9;
					}
					if (!AICOVERPOINT::_0xC276FE69DDA22BAD(iLocal_230[iVar11]))
					{
						func_1204(iVar11);
					}
					Var1 = { func_1256(iVar11) };
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_424[iVar12 /*8*/], Var1, 1f, 1, 0, 0);
					if (func_384(uParam0) == 0)
					{
						if (!__LIB_11__::func_307(Local_424[iVar12 /*8*/], iLocal_230[iVar11], 0, 1077936128 /* Float: 3f */))
						{
							func_1306();
							TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, Var1, -1, 0, 0f, Var1.f_8, Var1.f_9, iLocal_230[iVar11], 1, 0, 0);
							func_1307(Local_424[iVar12 /*8*/], __LIB_5__::func_439(iVar12 == 2, 0f, 1.2f));
							PED::_0x2208438012482A1A(Local_424[iVar12 /*8*/], true, false);
						}
					}
					func_1221(iVar12, 43);
					break;
				case 43:
					if (func_164(53))
					{
						__LIB_5__::func_372(uParam0, 15);
						TASK::TASK_LOOK_AT_ENTITY(Local_424[iVar12 /*8*/], Global_35, -1, 48, 41, 0);
						if (iVar12 == 2)
						{
							func_1753(90);
							iLocal_2113 = 0;
							__LIB_5__::func_20(0, 0);
							func_1184(84);
							func_849(61);
							__LIB_10__::func_930(uParam0, Local_424[2 /*8*/], joaat("COLOR_NEUTRAL"), joaat("BLIP_STYLE_COMPANION"), 1, 1);
							__LIB_1__::func_283(&(vLocal_1569[19 /*3*/]), 1);
						}
						else
						{
							MAP::_BLIP_SET_MODIFIER(Local_424[3 /*8*/].f_1, -401963276);
						}
						func_1221(iVar12, 44);
					}
					break;
				case 44:
					if (iVar12 == 2)
					{
						if (!func_164(79))
						{
							if (__LIB_0__::func_265(&(vLocal_1569[19 /*3*/])) >= 20f)
							{
								func_1184(85);
								func_849(79);
							}
						}
					}
					if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_128.f_24, true, 0) || __LIB_0__::func_265(&(vLocal_1569[19 /*3*/])) >= 35f)
					{
						if (iVar12 == 2)
						{
							func_1221(iVar12, 47);
							bVar15 = true;
						}
						else if (iVar12 == 3)
						{
							func_1221(iVar12, 47);
							bVar16 = true;
						}
						func_1269(iVar12, 16);
					}
					if (iVar14 == 2 || iVar14 == 3)
					{
						if (iVar13 == 2)
						{
							bVar15 = true;
						}
						else if (iVar13 == 3)
						{
							bVar16 = true;
						}
						if (iVar13 == iVar12)
						{
							bVar17 = true;
						}
					}
					if (bVar17)
					{
						if (__LIB_11__::func_8(func_1190(84)))
						{
							__LIB_5__::func_239(func_1190(84), 0, 0);
						}
						__LIB_8__::func_771(Local_424[iVar12 /*8*/], 0, 1, 0);
						TASK::TASK_CLEAR_LOOK_AT(Local_424[iVar12 /*8*/]);
						if (iVar14 == 2)
						{
							func_1269(iVar12, 2);
							func_1221(iVar12, 45);
						}
						else if (iVar14 == 3)
						{
							func_1221(iVar12, 46);
							func_1269(iVar12, 8);
						}
						PED::SET_PED_SEEING_RANGE(Local_424[iVar12 /*8*/], 180f);
						func_1269(iVar12, 32);
						PED::SET_PED_ACCURACY(Local_424[iVar12 /*8*/], 100);
					}
					if (bVar15 && iVar12 == 2)
					{
						__LIB_10__::func_935(uParam0, Local_424[iVar12 /*8*/], 1);
					}
					else if (bVar16 && iVar12 == 3)
					{
						MAP::_BLIP_REMOVE_MODIFIER(Local_424[iVar12 /*8*/].f_1, -401963276);
					}
					if ((bVar15 && !Local_424[3 /*8*/].f_2 == 44) || (bVar16 && !Local_424[2 /*8*/].f_2 == 44))
					{
						bVar18 = true;
					}
					if (bVar18)
					{
						__LIB_5__::func_301(uParam0, __LIB_4__::func_939(uParam0), 1048576);
						__LIB_5__::func_372(uParam0, 16);
						TASK::TASK_CLEAR_LOOK_AT(Global_35);
						func_849(74);
						func_178(81);
						UIFEED::_0x6035E8FBCA32AC5E();
						func_1257(1, 1);
						func_1182(uParam0, 6);
						VOLUME::_DELETE_VOLUME(Local_128.f_93);
					}
					bVar17 = false;
					bVar15 = false;
					bVar16 = false;
					break;
				case 45:
				case 46:
				case 47:
					iVar25 = 0;
					if (Local_424[iVar12 /*8*/].f_2 == 47)
					{
						if (func_1272(__LIB_0__::func_55(iVar12 == 2, 3, 2), 16))
						{
							if (!func_164(63))
							{
								iVar25 = 58;
								func_849(63);
							}
						}
						else
						{
							iVar25 = __LIB_0__::func_55(iVar12 == 2, 59, 60);
						}
					}
					else
					{
						iVar25 = func_1758(iVar12);
					}
					if (iVar12 == 2)
					{
						iLocal_2258 = iVar25;
						if (iLocal_2258 == 0)
						{
							func_849(64);
						}
					}
					else if (iVar12 == 3)
					{
						iLocal_2259 = iVar25;
						if (iLocal_2259 == 0)
						{
							func_849(65);
						}
					}
					if (Local_424[iVar12 /*8*/].f_2 == 45)
					{
						func_1221(iVar12, 48);
					}
					else if (Local_424[iVar12 /*8*/].f_2 == 47)
					{
						if (iVar12 == 2)
						{
							func_1221(iVar12, 48);
						}
						else if (iVar12 == 3)
						{
							func_1221(iVar12, 51);
						}
					}
					else if (Local_424[iVar12 /*8*/].f_2 == 46)
					{
						func_1221(iVar12, 51);
					}
					break;
				case 48:
					if (iVar12 == 2)
					{
						iVar20 = 3;
						__LIB_1__::func_283(&(vLocal_1569[25 /*3*/]), 1);
					}
					else if (iVar12 == 3)
					{
						iVar20 = 2;
						__LIB_1__::func_283(&(vLocal_1569[26 /*3*/]), 1);
					}
					if (!func_1272(iVar20, 512))
					{
						PED::_0xFC3DB99C8144CD81(Local_424[iVar12 /*8*/], Local_128.f_50, 0, 0, 0);
						func_1269(iVar12, 512);
					}
					else
					{
						PED::_0xFC3DB99C8144CD81(Local_424[iVar12 /*8*/], Local_128.f_51, 0, 0, 0);
						func_1269(iVar12, 1024);
					}
					iVar19 = 51;
					while (iVar19 <= 56)
					{
						func_1691(iVar12, iVar19);
						iVar19++;
					}
					func_1306();
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, PED::GET_PED_DEFENSIVE_AREA_POSITION(Local_424[iVar12 /*8*/], false), 1054.4f, -6796.9f, 41.7f, 2f, 0, 0.5f, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 0);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0, 23);
					func_1307(Local_424[iVar12 /*8*/], 1.5f);
					func_1221(iVar12, 50);
					break;
				case 49:
					iVar19 = 51;
					while (iVar19 <= 56)
					{
						func_1691(iVar12, iVar19);
						iVar19++;
					}
					if (iVar12 == 3)
					{
						__LIB_1__::func_148(&(vLocal_1569[26 /*3*/]));
					}
					else if (iVar12 == 2)
					{
						__LIB_1__::func_148(&(vLocal_1569[25 /*3*/]));
					}
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_424[iVar12 /*8*/], 200f, 0, 23);
					func_1221(iVar12, 50);
					break;
				case 50:
					if (func_1759(iVar12))
					{
						func_1221(iVar12, 49);
					}
					if (func_164(83))
					{
						if (!func_164(84))
						{
							if (!iLocal_2113 == 81)
							{
								if (iVar12 == 2)
								{
									func_1184(86);
								}
								else if (iVar12 == 3)
								{
									func_1184(87);
								}
							}
						}
						func_1221(iVar12, 51);
					}
					break;
				case 51:
					if (iVar12 == 2)
					{
						iVar20 = 3;
						__LIB_1__::func_283(&(vLocal_1569[25 /*3*/]), 1);
					}
					else if (iVar12 == 3)
					{
						iVar20 = 2;
						__LIB_1__::func_283(&(vLocal_1569[26 /*3*/]), 1);
					}
					if (!func_1272(iVar20, 2048))
					{
						PED::_0xFC3DB99C8144CD81(Local_424[iVar12 /*8*/], Local_128.f_53, 0, 0, 0);
						func_1269(iVar12, 2048);
					}
					else
					{
						PED::_0xFC3DB99C8144CD81(Local_424[iVar12 /*8*/], Local_128.f_52, 0, 0, 0);
						func_1269(iVar12, 4096);
					}
					iVar19 = 42;
					while (iVar19 <= 50)
					{
						func_1691(iVar12, iVar19);
						iVar19++;
					}
					func_1306();
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, PED::GET_PED_DEFENSIVE_AREA_POSITION(Local_424[iVar12 /*8*/], false), 928.9f, -6745.1f, 41.7f, 2f, 0, 0.5f, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 0);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0, 23);
					func_1307(Local_424[iVar12 /*8*/], 1.5f);
					func_1221(iVar12, 53);
					break;
				case 52:
					iVar19 = 42;
					while (iVar19 <= 50)
					{
						func_1691(iVar12, iVar19);
						iVar19++;
					}
					if (iVar12 == 3)
					{
						__LIB_1__::func_148(&(vLocal_1569[26 /*3*/]));
					}
					else if (iVar12 == 2)
					{
						__LIB_1__::func_148(&(vLocal_1569[25 /*3*/]));
					}
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_424[iVar12 /*8*/], 200f, 0, 23);
					func_1221(iVar12, 53);
					break;
				case 53:
					if (func_1759(iVar12))
					{
						func_1221(iVar12, 52);
					}
					if (func_164(84))
					{
						if (!func_164(83))
						{
							if (Local_424[2 /*8*/].f_2 == 53 && Local_424[2 /*8*/].f_2 == 53)
							{
								if (__LIB_1__::func_985())
								{
									func_1184(88);
								}
								else
								{
									func_1184(89);
								}
							}
							else if (iVar12 == 2)
							{
								func_1184(88);
							}
							else if (iVar12 == 3)
							{
								func_1184(89);
							}
						}
						func_1221(iVar12, 48);
					}
					break;
				case 54:
					if (iVar12 == 2)
					{
						func_849(86);
						func_1182(uParam0, 4);
						__LIB_1__::func_422(func_1190(55), 7500, 0, 1, 0, 0, -1, -1, 0);
						__LIB_10__::func_930(uParam0, Local_424[2 /*8*/], joaat("COLOR_WHITE"), joaat("BLIP_STYLE_COMPANION"), 1, 1);
						MAP::_BLIP_SET_MODIFIER(Local_424[3 /*8*/].f_1, -401963276);
						func_1306();
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, 980.093f, -6802.242f, 50.1905f, 985.4f, -6791.1f, 45.5f, 2f, 0, 0.5f, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 0);
						TASK::TASK_AIM_AT_COORD(0, 985.4f, -6791.1f, 45.5f, -1, 0, 0);
						func_1307(Local_424[2 /*8*/], 0);
					}
					else if (iVar12 == 3)
					{
						func_1306();
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, 981.0486f, -6799.366f, 50.0743f, 984.1f, -6796.8f, 48.8f, 2f, 0, 0.5f, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 0);
						TASK::TASK_AIM_AT_COORD(0, 984.1f, -6796.8f, 48.8f, -1, 0, 0);
						func_1307(Local_424[3 /*8*/], 0);
					}
					func_1221(iVar12, 55);
					break;
				case 55:
					if (iVar12 == 2)
					{
						if (!func_1271())
						{
							bVar26 = true;
						}
						if (func_1760())
						{
							bVar26 = true;
						}
						if (!bVar26)
						{
							if (__LIB_0__::func_266(Global_35, 980.4f, -6801.1f, 49.5f, 70f, 1, 1))
							{
								if (!ENTITY::IS_ENTITY_OCCLUDED(Local_424[2 /*8*/]) || !ENTITY::IS_ENTITY_OCCLUDED(Local_424[3 /*8*/]))
								{
									bVar26 = true;
								}
							}
						}
						if (bVar26)
						{
							if (func_164(83))
							{
								func_1221(2, 58);
								func_1221(3, 58);
							}
							else
							{
								func_1221(2, 56);
								func_1221(3, 56);
							}
						}
						else
						{
							Jump @5256; //curOff = 3115
							if (iVar12 == 2)
							{
								vVar21 = { 983.9597f, -6794.029f, 46.44f };
							}
							else if (iVar12 == 3)
							{
								vVar21 = { 983.6724f, -6790.941f, 45.3747f };
							}
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_424[iVar12 /*8*/], vVar21, 0.75f, 1, 0, 0);
							func_1306();
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, PED::GET_PED_DEFENSIVE_AREA_POSITION(Local_424[iVar12 /*8*/], false), 995.5f, -6787.4f, 40.9f, 2f, 0, 0.5f, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 0);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0, 4);
							func_1307(Local_424[iVar12 /*8*/], 0);
							iVar19 = 51;
							while (iVar19 <= 56)
							{
								__LIB_5__::func_553(Local_424[iVar19 /*8*/], 1);
								iVar19++;
							}
							func_1221(iVar12, 57);
							Jump @5256; //curOff = 3315
							if (func_164(83))
							{
								func_1221(2, 58);
								func_1221(3, 58);
							}
							Jump @5256; //curOff = 3341
							if (iVar12 == 2)
							{
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_424[iVar12 /*8*/], 986.6882f, -6783.608f, 42.0208f, 2f, 0, 0, 0);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_424[iVar12 /*8*/], 990.5f, -6785.9f, 41.5f, 2f, 0, 1, 0);
								PED::_0x4EC4EA2F72B36358(Local_424[iVar12 /*8*/], 1);
							}
							else if (iVar12 == 3)
							{
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_424[iVar12 /*8*/], 984.3762f, -6788.539f, 42.5049f, 2f, 0, 0, 0);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_424[iVar12 /*8*/], 988.1f, -6788.8f, 41.5f, 2f, 0, 1, 0);
								PED::_0x4EC4EA2F72B36358(Local_424[iVar12 /*8*/], 1);
							}
							func_1306();
							func_1762();
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, PED::GET_PED_DEFENSIVE_AREA_POSITION(Local_424[iVar12 /*8*/], false), 965.4f, -6776.7f, 43f, 2f, 1, 4f, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 0);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0, 23);
							func_1307(Local_424[iVar12 /*8*/], 0);
							func_1221(iVar12, 59);
							Jump @5256; //curOff = 3593
							if (iVar12 == 2)
							{
								if (!Local_424[3 /*8*/].f_2 == 66 && !Local_424[3 /*8*/].f_2 == 67)
								{
									if (TASK::GET_SEQUENCE_PROGRESS(Local_424[3 /*8*/]) == 1 || TASK::GET_SEQUENCE_PROGRESS(Local_424[3 /*8*/]) == 2)
									{
										if (func_1760())
										{
											func_1221(3, 66);
										}
									}
								}
								if (iLocal_2261 == 3 || iLocal_2261 == 4)
								{
									bVar27 = true;
									if (func_164(83))
									{
										func_1221(2, 63);
										if (Local_424[3 /*8*/].f_2 == 59)
										{
											func_1221(3, 63);
										}
									}
									else if (func_164(84))
									{
										func_1221(2, 60);
										if (Local_424[3 /*8*/].f_2 == 59)
										{
											func_1221(3, 60);
										}
									}
									else
									{
										func_1221(2, 60);
										if (Local_424[3 /*8*/].f_2 == 59)
										{
											func_1221(3, 63);
										}
									}
								}
								if (func_164(86) && !func_164(87))
								{
									if (func_1692(Local_424[2 /*8*/]))
									{
										if (TASK::GET_SEQUENCE_PROGRESS(Local_424[2 /*8*/]) == 1)
										{
											bVar27 = true;
										}
									}
									else
									{
										bVar27 = true;
									}
									if (bVar27)
									{
										__LIB_10__::func_935(uParam0, Local_424[2 /*8*/], 1);
										MAP::_BLIP_REMOVE_MODIFIER(Local_424[3 /*8*/].f_1, -401963276);
										UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
										func_1182(uParam0, 8);
										func_849(87);
									}
								}
							}
							Jump @5256; //curOff = 3922
							if (iVar12 == 2)
							{
								__LIB_1__::func_283(&(vLocal_1569[25 /*3*/]), 1);
							}
							else if (iVar12 == 3)
							{
								__LIB_1__::func_283(&(vLocal_1569[26 /*3*/]), 1);
							}
							func_1763(iVar12, 1);
							iVar19 = 48;
							while (iVar19 <= 56)
							{
								func_1691(iVar12, iVar19);
								iVar19++;
							}
							func_1306();
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, PED::GET_PED_DEFENSIVE_AREA_POSITION(Local_424[iVar12 /*8*/], false), 928f, -6780.4f, 42.4f, 2f, 1, 2f, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 0);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0, 23);
							func_1307(Local_424[iVar12 /*8*/], 0);
							func_1221(iVar12, 62);
							Jump @5256; //curOff = 4085
							if (iVar12 == 2)
							{
								__LIB_1__::func_283(&(vLocal_1569[25 /*3*/]), 1);
							}
							else if (iVar12 == 3)
							{
								__LIB_1__::func_283(&(vLocal_1569[26 /*3*/]), 1);
							}
							func_1763(iVar12, 1);
							iVar19 = 48;
							while (iVar19 <= 56)
							{
								func_1691(iVar12, iVar19);
								iVar19++;
							}
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_424[iVar12 /*8*/], 200f, 0, 23);
							func_1221(iVar12, 62);
							Jump @5256; //curOff = 4189
							if (func_1760())
							{
								func_1221(3, 66);
							}
							if (func_1764(iVar12))
							{
								func_1221(iVar12, 61);
							}
							if (func_164(83) && !func_164(84))
							{
								if (iVar12 == 2)
								{
									func_1184(86);
								}
								else if (iVar12 == 3)
								{
									func_1184(87);
								}
								__LIB_5__::func_372(uParam0, 17);
								func_1221(iVar12, 63);
							}
							Jump @5256; //curOff = 4287
							if (iVar12 == 2)
							{
								__LIB_1__::func_283(&(vLocal_1569[25 /*3*/]), 1);
							}
							else if (iVar12 == 3)
							{
								__LIB_1__::func_283(&(vLocal_1569[26 /*3*/]), 1);
							}
							func_1763(iVar12, 0);
							iVar19 = 42;
							while (iVar19 <= 47)
							{
								func_1691(iVar12, iVar19);
								iVar19++;
							}
							func_1306();
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, PED::GET_PED_DEFENSIVE_AREA_POSITION(Local_424[iVar12 /*8*/], false), 928f, -6780.4f, 42.4f, 2f, 1, 2f, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 0);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0, 23);
							func_1307(Local_424[iVar12 /*8*/], 0);
							func_1221(iVar12, 65);
							Jump @5256; //curOff = 4450
							if (iVar12 == 2)
							{
								__LIB_1__::func_283(&(vLocal_1569[25 /*3*/]), 1);
							}
							else if (iVar12 == 3)
							{
								__LIB_1__::func_283(&(vLocal_1569[26 /*3*/]), 1);
							}
							func_1763(iVar12, 0);
							iVar19 = 48;
							while (iVar19 <= 56)
							{
								func_1691(iVar12, iVar19);
								iVar19++;
							}
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_424[iVar12 /*8*/], 200f, 0, 23);
							func_1221(iVar12, 65);
							Jump @5256; //curOff = 4554
							if (func_1760())
							{
								func_1221(3, 66);
							}
							if (func_1764(iVar12))
							{
								func_1221(iVar12, 64);
							}
							if (func_164(84) && !func_164(83))
							{
								if (iVar12 == 2)
								{
									func_1184(88);
								}
								else if (iVar12 == 3)
								{
									func_1184(89);
								}
								__LIB_5__::func_372(uParam0, 17);
								func_1221(iVar12, 60);
							}
							Jump @5256; //curOff = 4652
							if (PED::IS_PED_IN_GROUP(Local_424[iVar12 /*8*/]))
							{
								PED::REMOVE_PED_FROM_GROUP(Local_424[iVar12 /*8*/]);
							}
							PED::_0xFC3DB99C8144CD81(Local_424[iVar12 /*8*/], Local_128.f_42, 1, 0, 0);
							iVar28 = func_1765(42, 62);
							func_1306();
							if (!ENTITY::IS_ENTITY_IN_VOLUME(Local_424[3 /*8*/], Local_128.f_55, true, 0))
							{
								func_1762();
							}
							if (iVar28 == 0)
							{
								TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, VOLUME::_GET_VOLUME_COORDS(Local_128.f_42), 943.5f, -6764.3f, 41.5f, 2f, 0, 0.5f, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 0);
							}
							else
							{
								TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, VOLUME::_GET_VOLUME_COORDS(Local_128.f_42), Local_424[iVar28 /*8*/], 2f, 1, 0.5f, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
							}
							TASK::TASK_COMBAT_HATED_TARGETS(0, -1f);
							func_1307(Local_424[iVar12 /*8*/], 0);
							func_1221(iVar12, 67);
							Jump @5256; //curOff = 4867
							Jump @5256; //curOff = 4870
							if (PED::IS_PED_IN_GROUP(Local_424[iVar12 /*8*/]))
							{
								if (!func_433(iVar12) == -1)
								{
									__LIB_4__::func_719(func_433(iVar12), 0, 1, 1, 1, 0);
								}
								if (PED::IS_PED_IN_GROUP(Local_424[iVar12 /*8*/]))
								{
									PED::REMOVE_PED_FROM_GROUP(Local_424[iVar12 /*8*/]);
								}
							}
							if (iVar12 == 2)
							{
								func_1198(47);
								func_1198(46);
								if (!func_1233(47) || !func_1233(46))
								{
								}
								else
								{
									func_1306();
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 973.8617f, -6765.986f, 42.637f, 2f, 20000, 0.25f, 512, 45f);
									func_1695(0, 46, 1090519040 /* Float: 8f */, -1056964608 /* Float: -8f */, -1, 1, 0);
									func_1307(Local_424[iVar12 /*8*/], 0);
									__LIB_1__::func_283(&(vLocal_1569[0 /*3*/]), 1);
									Jump @5152; //curOff = 5067
									if (iVar12 == 3)
									{
										func_1204(10);
										vVar29 = { func_1256(10) };
										func_1306();
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar29, 2f, 20000, 2f, 0, 40000f);
										TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, vVar29, -1, 0, 0f, 1, 0, iLocal_230[10], 1, 0, 0);
										func_1307(Local_424[iVar12 /*8*/], 0);
									}
									func_1221(iVar12, 17);
									Jump @5256; //curOff = 5160
									if (iVar12 == 2)
									{
										if (__LIB_0__::func_265(&(vLocal_1569[0 /*3*/])) >= 10f)
										{
											func_1306();
											func_1695(0, 47, 1090519040 /* Float: 8f */, -1056964608 /* Float: -8f */, -1, 0, 0);
											func_1695(0, 46, 1090519040 /* Float: 8f */, -1056964608 /* Float: -8f */, -1, 1, 0);
											func_1307(Local_424[2 /*8*/], 0);
											__LIB_1__::func_148(&(vLocal_1569[0 /*3*/]));
										}
									}
								}
								iVar12++;
							}
						}
					}
					default:
						break;
			}
		}
	}
}

void func_1262()
{
	int iVar0;
	int iVar1;
	switch (Local_424[4 /*8*/].f_2)
	{
		case 1:
			iVar0 = 4;
			while (iVar0 <= 6)
			{
				iVar1 = 42;
				while (iVar1 <= 62)
				{
					func_1722(iVar0, iVar1);
					iVar1++;
				}
				func_1221(4, 8);
				iVar0++;
			}
		case 8:
			break;
	}
}

void func_1263(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	float fVar5;
	int iVar6;
	float fVar7;
	int iVar8;
	iVar0 = 42;
	while (iVar0 <= 56)
	{
		if (Local_424[iVar0 /*8*/].f_2 == 18)
		{
		}
		else if (ENTITY::DOES_ENTITY_EXIST(Local_424[iVar0 /*8*/]))
		{
			vVar1 = { ENTITY::GET_ENTITY_COORDS(Local_424[iVar0 /*8*/], true, false) };
			if (vVar1.z >= 48f)
			{
				__LIB_14__::func_337(Local_424[5 /*8*/], PED::GET_PED_BONE_COORDS(Local_424[iVar0 /*8*/], 21030, 0f, 0f, 0f), 0, 0, 0, 0, 0);
				ENTITY::_SET_ENTITY_HEALTH(Local_424[iVar0 /*8*/], 0, Local_424[5 /*8*/]);
			}
			if (ENTITY::IS_ENTITY_DEAD(Local_424[iVar0 /*8*/]))
			{
				Local_1700.f_388++;
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_424[iVar0 /*8*/], Global_35, 1, 1))
				{
					if (Local_1265[6 /*13*/].f_1 == 1)
					{
						Local_1265[6 /*13*/].f_1 = 2;
					}
				}
				iLocal_2166[func_1767(42, iVar0)] = 0;
				func_1221(iVar0, 18);
			}
			else
			{
				if (func_1180(10, iVar0))
				{
					if (!__LIB_0__::func_75(&(Local_424[iVar0 /*8*/].f_5)))
					{
						if (ENTITY::IS_ENTITY_IN_WATER(Local_424[iVar0 /*8*/]) && ENTITY::GET_ENTITY_SUBMERGED_LEVEL(Local_424[iVar0 /*8*/]) >= 0.5f)
						{
							__LIB_1__::func_283(&(Local_424[iVar0 /*8*/].f_5), 0);
						}
					}
					else if (!ENTITY::IS_ENTITY_IN_WATER(Local_424[iVar0 /*8*/]) || ENTITY::GET_ENTITY_SUBMERGED_LEVEL(Local_424[iVar0 /*8*/]) < 0.4f)
					{
						__LIB_0__::func_37(&(Local_424[iVar0 /*8*/].f_5));
					}
					else if (__LIB_0__::func_265(&(Local_424[iVar0 /*8*/].f_5)) >= 10f)
					{
						__LIB_14__::func_337(Local_424[2 /*8*/], PED::GET_PED_BONE_COORDS(Local_424[iVar0 /*8*/], 21030, 0f, 0f, 0f), Global_35, 0, 0, 0, 0);
						ENTITY::_SET_ENTITY_HEALTH(Local_424[iVar0 /*8*/], 0, 0);
					}
				}
				switch (Local_424[iVar0 /*8*/].f_2)
				{
					case 1:
						PED::SET_PED_SEEING_RANGE(Local_424[iVar0 /*8*/], 180f);
						__LIB_1__::func_991(Local_424[iVar0 /*8*/], 0);
						PED::SET_PED_CONFIG_FLAG(Local_424[iVar0 /*8*/], 301, true);
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_424[iVar0 /*8*/], true);
						if (func_1768(iVar0))
						{
							iVar4 = -1;
						}
						else
						{
							iVar4 = -2;
						}
						if (!ENTITY::IS_ENTITY_DEAD(Local_1523[func_1769(iVar0) /*5*/]))
						{
							if (!PED::IS_PED_IN_VEHICLE(Local_424[iVar0 /*8*/], Local_1523[func_1769(iVar0) /*5*/], false))
							{
								PED::SET_PED_INTO_VEHICLE(Local_424[iVar0 /*8*/], Local_1523[func_1769(iVar0) /*5*/], iVar4);
							}
						}
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_424[iVar0 /*8*/], 3, false);
						WEAPON::REMOVE_ALL_PED_WEAPONS(Local_424[iVar0 /*8*/], true, true);
						func_1221(iVar0, 3);
						break;
					case 3:
						if (func_164(0))
						{
						}
						else
						{
							__LIB_4__::func_7(Local_424[iVar0 /*8*/], func_1733(iVar0, 0), -1, 3, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
							func_849(0);
							func_1221(iVar0, 4);
							Jump @2485; //curOff = 738
							if (func_164(0))
							{
							}
							else
							{
								if (!func_1733(iVar0, 1) == 0)
								{
									__LIB_4__::func_7(Local_424[iVar0 /*8*/], func_1733(iVar0, 1), -1, 3, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
									func_849(0);
								}
								func_1221(iVar0, 21);
								Jump @2485; //curOff = 811
								if (ENTITY::IS_ENTITY_DEAD(Local_1523[func_1769(iVar0) /*5*/]))
								{
								}
								else
								{
									func_1198(func_1750(func_1769(iVar0)));
									if (!func_1233(func_1750(func_1769(iVar0))))
									{
									}
									else
									{
										func_1747(func_1769(iVar0));
										func_1722(iVar0, 5);
										func_1722(iVar0, 4);
										func_1722(iVar0, 6);
										if (func_1768(iVar0))
										{
											ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_424[iVar0 /*8*/], true);
											func_1306();
											if (!Local_1523[func_1769(iVar0) /*5*/].f_2 == Local_1523[func_1769(iVar0) /*5*/].f_3)
											{
												TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(0, Local_1523[func_1769(iVar0) /*5*/]);
											}
											TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(0, Local_1523[func_1769(iVar0) /*5*/], func_438(func_1750(func_1769(iVar0))), 0, 0, 0, -1, -1082130432 /* Float: -1f */, 0, 1073741824 /* Float: 2f */, 0);
											func_1307(Local_424[iVar0 /*8*/], 0);
										}
										else
										{
											if (!func_1272(iVar0, 1))
											{
												ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_424[iVar0 /*8*/], false);
											}
											PED::REGISTER_TARGET(Local_424[iVar0 /*8*/], Global_35, 1);
											func_1691(iVar0, 2);
											func_1691(iVar0, 3);
											TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(Local_424[iVar0 /*8*/], VOLUME::_GET_VOLUME_COORDS(Local_128.f_8), 200f, 0, 1);
										}
										func_1221(iVar0, 22);
										Jump @2485; //curOff = 1120
										if (func_1768(iVar0))
										{
											fVar5 = func_1770(iVar0);
											if (!func_1692(Local_424[iVar0 /*8*/]) || (fVar5 < 3f && !fVar5 == -1f))
											{
												iVar6 = 42;
												while (iVar6 <= 56)
												{
													if (func_1769(iVar6) == func_1769(iVar0))
													{
														func_1221(iVar6, 8);
													}
													iVar6++;
												}
												func_436(func_1750(func_1769(iVar0)));
												if (!Local_1523[func_1769(iVar0) /*5*/].f_4)
												{
													Local_1523[func_1769(iVar0) /*5*/].f_4 = 1;
												}
												func_1221(iVar0, 8);
											}
											else if (func_164(81))
											{
												if (!ENTITY::IS_ENTITY_DEAD(Local_1523[func_1769(iVar0) /*5*/]))
												{
													TASK::VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_1523[func_1769(iVar0) /*5*/], 0f);
													func_849(82);
												}
											}
											else if (!ENTITY::IS_ENTITY_DEAD(Local_1523[func_1769(iVar0) /*5*/]))
											{
												if (func_1769(iVar0) == 6 || func_1769(iVar0) == 7)
												{
													TASK::VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_1523[func_1769(iVar0) /*5*/], 1.8f);
												}
												else
												{
													TASK::VEHICLE_WAYPOINT_PLAYBACK_USE_DEFAULT_SPEED(Local_1523[func_1769(iVar0) /*5*/]);
												}
												func_178(82);
											}
										}
										if (func_1180(30, iVar0))
										{
											if (__LIB_0__::func_665(Global_35, Local_1523[func_1769(iVar0) /*5*/], 1, 1) <= 5f)
											{
												func_1306();
												TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 67108864);
												TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
												func_1307(Local_424[iVar0 /*8*/], 0);
												func_1221(iVar0, 9);
											}
											else if (!func_1771(iVar0) && !func_1768(iVar0))
											{
												if (Local_424[Local_1523[func_1769(iVar0) /*5*/].f_3 /*8*/].f_2 == 18)
												{
													if (func_1772(iVar0))
													{
														if (MAP::DOES_BLIP_EXIST(Local_424[iVar0 /*8*/].f_1))
														{
															MAP::REMOVE_BLIP(&(Local_424[iVar0 /*8*/].f_1));
														}
														if (MAP::DOES_BLIP_EXIST(Local_1523[func_1769(iVar0) /*5*/].f_1))
														{
															MAP::REMOVE_BLIP(&(Local_1523[func_1769(iVar0) /*5*/].f_1));
														}
														func_1221(iVar0, 19);
														Jump @2485; //curOff = 1629
													}
													else
													{
														Local_1523[func_1769(iVar0) /*5*/].f_3 = iVar0;
														func_1221(iVar0, 21);
													}
													else
													{
														if (func_1180(10, iVar0))
														{
															if (func_1768(iVar0))
															{
																fVar7 = func_1770(iVar0);
																if (fVar7 > 99940f)
																{
																	if (func_1773(iVar0))
																	{
																		func_1221(iVar0, 19);
																	}
																}
															}
														}
														Jump @2485; //curOff = 1717
														PED::REGISTER_TARGET(Local_424[iVar0 /*8*/], Global_35, 1);
														func_1691(iVar0, 2);
														func_1691(iVar0, 3);
														if (MAP::DOES_BLIP_EXIST(Local_424[iVar0 /*8*/].f_1))
														{
															MAP::REMOVE_BLIP(&(Local_424[iVar0 /*8*/].f_1));
														}
														func_1252(uParam0, iVar0, 1);
														if (!func_1272(iVar0, 1))
														{
															ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_424[iVar0 /*8*/], false);
														}
														if ((iLocal_2113 == 0 && !__LIB_5__::func_236(1)) && !__LIB_0__::func_481(1))
														{
															if (!func_164(76))
															{
																iVar8 = func_1769(iVar0);
																if ((iVar8 == 3 || iVar8 == 4) || iVar8 == 5)
																{
																	if (__LIB_0__::func_265(&(vLocal_1569[22 /*3*/])) >= 5f)
																	{
																		func_1184(79);
																		func_849(76);
																		__LIB_1__::func_148(&(vLocal_1569[22 /*3*/]));
																	}
																}
															}
														}
														if (iLocal_2113 == 0)
														{
															if (__LIB_0__::func_265(&(vLocal_1569[22 /*3*/])) >= 8f)
															{
																func_1184(80);
																__LIB_1__::func_148(&(vLocal_1569[22 /*3*/]));
															}
														}
														func_1722(iVar0, 5);
														func_1722(iVar0, 4);
														func_1722(iVar0, 6);
														WEAPON::SET_CURRENT_PED_WEAPON(Local_424[iVar0 /*8*/], WEAPON::GET_BEST_PED_WEAPON(Local_424[iVar0 /*8*/], false, false), false, 0, false, false);
														TASK::TASK_SWAP_WEAPON(Local_424[iVar0 /*8*/], 1, 1, 0, 1);
														func_1306();
														TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 32);
														TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0, 69);
														func_1307(Local_424[iVar0 /*8*/], 0);
														PED::SET_PED_ACCURACY(Local_424[iVar0 /*8*/], 15);
														if (iVar0 >= 51 && iVar0 <= 56)
														{
															PED::_0xFC3DB99C8144CD81(Local_424[iVar0 /*8*/], Local_128.f_96, 0, 0, 0);
														}
														else
														{
															PED::_0xFC3DB99C8144CD81(Local_424[iVar0 /*8*/], Local_128.f_94, 0, 0, 0);
														}
														func_1221(iVar0, 9);
														Jump @2485; //curOff = 2147
														if (!func_1692(Local_424[iVar0 /*8*/]))
														{
															func_1221(iVar0, 10);
														}
														Jump @2485; //curOff = 2173
														func_1722(iVar0, 5);
														func_1722(iVar0, 4);
														func_1722(iVar0, 6);
														func_1691(iVar0, 2);
														func_1691(iVar0, 3);
														func_1691(iVar0, 1);
														if (iVar0 >= 51 && iVar0 <= 56)
														{
															PED::_0xFC3DB99C8144CD81(Local_424[iVar0 /*8*/], Local_128.f_96, 0, 0, 0);
														}
														else
														{
															PED::_0xFC3DB99C8144CD81(Local_424[iVar0 /*8*/], Local_128.f_94, 0, 0, 0);
														}
														func_1306();
														TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0, 69);
														func_1307(Local_424[iVar0 /*8*/], 0);
														func_1221(iVar0, 11);
														Jump @2485; //curOff = 2312
														Jump @2485; //curOff = 2315
														PED::SET_PED_CONFIG_FLAG(Local_424[iVar0 /*8*/], 230, true);
														PED::SET_PED_KEEP_TASK(Local_424[iVar0 /*8*/], true);
														PED::SET_PED_CONFIG_FLAG(Local_424[iVar0 /*8*/], 266, true);
														if (MAP::DOES_BLIP_EXIST(Local_424[iVar0 /*8*/].f_1))
														{
															MAP::REMOVE_BLIP(&(Local_424[iVar0 /*8*/].f_1));
														}
														func_1306();
														TASK::TASK_LEAVE_VEHICLE(0, PED::GET_VEHICLE_PED_IS_IN(Local_424[iVar0 /*8*/], false), 0, 0);
														TASK::TASK_SMART_FLEE_PED(0, Global_35, -1f, -1, 0, 1077936128 /* Float: 3f */, 0);
														TASK::_TASK_FLEE_FROM_PED(0, Global_35, 1291f, -6847.7f, 42.8f, -1f, -1, 1024, 1077936128 /* Float: 3f */, 0);
														func_1307(Local_424[iVar0 /*8*/], 0);
														func_1221(iVar0, 20);
													}
													iVar0++;
												}
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
		}
	}
}

void func_1264()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	iVar4 = 0;
	while (iVar4 < Local_1523)
	{
		if (iVar4 == 8)
		{
		}
		else if (!MAP::DOES_BLIP_EXIST(Local_1523[iVar4 /*5*/].f_1))
		{
		}
		else
		{
			switch (iVar4)
			{
				case 3:
					iVar1 = 42;
					iVar2 = 44;
					break;
				case 4:
					iVar1 = 45;
					iVar2 = 47;
					break;
				case 5:
					iVar1 = 48;
					iVar2 = 50;
					break;
				case 6:
					iVar1 = 51;
					iVar2 = 53;
					break;
				case 7:
					iVar1 = 54;
					iVar2 = 56;
					break;
			}
			bVar3 = true;
			iVar0 = iVar1;
			while (iVar0 <= iVar2)
			{
				if (((!Local_424[iVar0 /*8*/].f_2 == 18 && ENTITY::DOES_ENTITY_EXIST(Local_424[iVar0 /*8*/])) && !ENTITY::IS_ENTITY_DEAD(Local_424[iVar0 /*8*/])) && PED::IS_PED_IN_VEHICLE(Local_424[iVar0 /*8*/], Local_1523[func_1769(iVar0) /*5*/], false))
				{
					bVar3 = false;
				}
				iVar0++;
			}
			if (bVar3)
			{
				MAP::REMOVE_BLIP(&(Local_1523[iVar4 /*5*/].f_1));
			}
		}
		iVar4++;
	}
}

void func_1265(var uParam0)
{
	int iVar0;
	if (func_1774(27, 41, 18) == __LIB_11__::func_825(27, 41))
	{
		func_849(60);
		return;
	}
	iVar0 = 27;
	while (iVar0 <= 41)
	{
		if (Local_424[iVar0 /*8*/].f_2 == 18 || Local_424[iVar0 /*8*/].f_2 == 0)
		{
		}
		else if (ENTITY::IS_ENTITY_DEAD(Local_424[iVar0 /*8*/]))
		{
			func_1221(iVar0, 18);
		}
		else
		{
			switch (Local_424[iVar0 /*8*/].f_2)
			{
				case 1:
					func_1221(iVar0, 8);
				case 8:
					PED::REGISTER_TARGET(Local_424[iVar0 /*8*/], Global_35, 1);
					PED::REGISTER_TARGET(Local_424[iVar0 /*8*/], Local_424[2 /*8*/], 1);
					PED::REGISTER_TARGET(Local_424[iVar0 /*8*/], Local_424[3 /*8*/], 1);
					TASK::TASK_COMBAT_HATED_TARGETS(Local_424[iVar0 /*8*/], -1f);
					func_1221(iVar0, 9);
					break;
			}
		}
		iVar0++;
	}
}

int func_1266()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_1265)
	{
		if (!Local_1265[iVar0 /*13*/].f_1 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_1267()
{
	int iVar0;
	int iVar1;
	iVar1 = 42;
	while (iVar1 <= 62)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_424[iVar1 /*8*/]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_424[iVar1 /*8*/]) && !Local_424[iVar1 /*8*/].f_2 == 20)
			{
				iVar0++;
			}
		}
		iVar1++;
	}
	if (iVar0 == 0)
	{
		return true;
	}
	return false;
}

void func_1269(int iParam0, int iParam1)
{
	__LIB_0__::func_7(&(Local_424[iParam0 /*8*/].f_4), iParam1);
}

bool func_1270()
{
	int iVar0;
	int iVar1;
	iVar1 = 42;
	while (iVar1 <= 62)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_424[iVar1 /*8*/]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_424[iVar1 /*8*/]))
			{
				iVar0++;
			}
		}
		iVar1++;
	}
	if (iVar0 <= 8)
	{
		return true;
	}
	return false;
}

bool func_1271()
{
	vector3 vVar0;
	vVar0 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
	return vVar0.z >= 49f;
}

bool func_1272(int iParam0, int iParam1)
{
	return __LIB_0__::func_27(Local_424[iParam0 /*8*/].f_4, iParam1);
}

bool func_1276(var uParam0)
{
	switch (iLocal_2369[2])
	{
		case 0:
			iLocal_2369[2] = 1;
		case 1:
			__LIB_5__::func_262(&(uParam0->f_7375));
			__LIB_5__::func_580(uParam0, Global_35, "ARTHUR", 0, 0, 0, 0);
			__LIB_5__::func_580(uParam0, Local_424[2 /*8*/], "Dutch", 0, 0, 0, 0);
			__LIB_5__::func_580(uParam0, Local_424[3 /*8*/], "Hercule", 0, 0, 0, 0);
			__LIB_5__::func_580(uParam0, Local_1700.f_1, "SMUGGLER02", 0, 0, 0, 0);
			iLocal_2369[2] = 2;
			return true;
	}
	return false;
}

void func_1279(var uParam0)
{
	switch (iLocal_2305)
	{
		case 0:
			func_1253(1, 0, 1);
			iLocal_2305++;
			break;
		case 1:
			if (PATHFIND::_0x5AC0944C156E5F44("CIN_NAV_DOOR_INTACT"))
			{
				PATHFIND::_0x527B97C203BB8606("CIN_NAV_DOOR_INTACT");
			}
			iLocal_2305++;
			break;
		case 2:
			func_1175(1, 0);
			iLocal_2305++;
			break;
		case 3:
			__LIB_10__::func_935(uParam0, Local_424[2 /*8*/], 0);
			iLocal_2305 = -1;
			break;
	}
}

float func_1280()
{
	int iVar0;
	int iVar1;
	if (ENTITY::IS_ENTITY_DEAD(Local_424[3 /*8*/]))
	{
		return 0f;
	}
	if (TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(func_438(32), ENTITY::GET_ENTITY_COORDS(Global_35, true, false), &iVar0))
	{
		if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_424[3 /*8*/], func_438(32)))
		{
			iVar1 = TASK::GET_PED_WAYPOINT_PROGRESS(Local_424[3 /*8*/]);
			return MISC::ABSF((TASK::GET_WAYPOINT_DISTANCE_ALONG_ROUTE(func_438(32), iVar0) - TASK::GET_WAYPOINT_DISTANCE_ALONG_ROUTE(func_438(32), iVar1)));
		}
		else if (TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(func_438(32), ENTITY::GET_ENTITY_COORDS(Local_424[3 /*8*/], true, false), &iVar1))
		{
			return MISC::ABSF((TASK::GET_WAYPOINT_DISTANCE_ALONG_ROUTE(func_438(32), iVar0) - TASK::GET_WAYPOINT_DISTANCE_ALONG_ROUTE(func_438(32), iVar1)));
		}
	}
	return 0f;
}

int func_1281(int iParam0)
{
	int iVar0;
	int iVar1;
	if (iParam0 == 1)
	{
		iVar0 = Global_35;
	}
	else
	{
		iVar0 = Local_424[iParam0 /*8*/];
	}
	iVar1 = -1;
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		if (TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(func_438(32), ENTITY::GET_ENTITY_COORDS(iVar0, true, false), &iVar1))
		{
			return iVar1;
		}
	}
	return iVar1;
}

void func_1282(var uParam0)
{
	int iVar0;
	if (iLocal_2304 == 3)
	{
		return;
	}
	switch (iLocal_2304)
	{
		case 0:
			func_1198(59);
			func_1198(58);
			func_1198(7);
			if ((func_1233(59) && func_1233(58)) && func_1233(7))
			{
				func_1778(1);
			}
			break;
		case 1:
			if (func_856(uParam0, 27, 30, 256))
			{
				iVar0 = 27;
				while (iVar0 <= 30)
				{
					AUDIO::STOP_PED_SPEAKING(Local_424[iVar0 /*8*/], true);
					WEAPON::REMOVE_ALL_PED_WEAPONS(Local_424[iVar0 /*8*/], true, true);
					ENTITY::_SET_ENTITY_HEALTH(Local_424[iVar0 /*8*/], 0, 0);
					ENTITY::SET_ENTITY_VISIBLE(Local_424[iVar0 /*8*/], true);
					GRAPHICS::_ADD_BLOOD_POOL(ENTITY::GET_ENTITY_COORDS(Local_424[iVar0 /*8*/], false, false), true);
					GRAPHICS::_ADD_BLOOD_POOL(ENTITY::GET_ENTITY_COORDS(Local_424[iVar0 /*8*/], false, false) + Vector(0f, 0f, 1f), true);
					GRAPHICS::_ADD_BLOOD_POOL(ENTITY::GET_ENTITY_COORDS(Local_424[iVar0 /*8*/], false, false) + Vector(0f, 1f, 0f), true);
					GRAPHICS::_ADD_BLOOD_POOL(ENTITY::GET_ENTITY_COORDS(Local_424[iVar0 /*8*/], false, false) + Vector(0f, -0.5f, -0.5f), true);
					ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_424[iVar0 /*8*/], Global_35, false);
					ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_424[iVar0 /*8*/], Local_424[3 /*8*/], false);
					iVar0++;
				}
				func_1778(2);
			}
			break;
		case 2:
			func_1778(3);
			break;
	}
}

void func_1283()
{
	switch (iLocal_2302)
	{
		case 0:
			if (fLocal_2286 >= 20f)
			{
				__LIB_1__::func_283(&(vLocal_1569[31 /*3*/]), 0);
				func_1779(1);
			}
			break;
		case 1:
			if (fLocal_2286 < 20f)
			{
				__LIB_0__::func_37(&(vLocal_1569[31 /*3*/]));
				func_1779(0);
			}
			else if (__LIB_0__::func_265(&(vLocal_1569[31 /*3*/])) >= 20f)
			{
				func_1779(2);
			}
			break;
		case 2:
			iLocal_2303 = func_1200(ENTITY::GET_ENTITY_COORDS(Local_424[3 /*8*/], true, false), -1082130432 /* Float: -1f */);
			func_1200(ENTITY::GET_ENTITY_COORDS(vLocal_2104.x, true, false), -1082130432 /* Float: -1f */);
			func_1779(3);
			break;
		case 3:
			if (Local_1700.f_3[iLocal_2303 /*33*/].f_11 == 0)
			{
				PED::SET_PED_TO_RAGDOLL_WITH_FALL(Local_424[3 /*8*/], 5000, 10000, 1, 0f, 0f, 1f, 0f, 0f, 0f, 0f, 0f, 0f, 0f);
				ENTITY::APPLY_FORCE_TO_ENTITY(Local_424[3 /*8*/], 1, 15f, -15f, 15f, 0f, 0f, 0f, 0, false, false, true, true, true);
				ENTITY::_SET_ENTITY_HEALTH(Local_424[3 /*8*/], 0, 0);
				func_1779(4);
			}
			break;
	}
}

void func_1284(var uParam0)
{
	bool bVar0;
	if (Local_2262.f_3 == 5)
	{
		func_849(102);
		return;
	}
	if (!func_164(110))
	{
		if (AUDIO::LOAD_STREAM(func_1294(11), func_1294(9)))
		{
			iLocal_2283 = AUDIO::_0x0556C784FA056628(func_1294(11), func_1294(9));
			func_849(110);
		}
	}
	if (Local_2262)
	{
		Local_2262.f_11 = (__LIB_0__::func_265(&(Local_2262.f_13)) / Local_2262.f_12);
		if (Local_2262.f_11 > 1f)
		{
			Local_2262.f_11 = 1f;
		}
		ENTITY::SET_ENTITY_COORDS(Local_2262.f_4, __LIB_1__::func_367(Local_2262.f_8, Local_2262.f_5, Local_2262.f_11), true, false, true, true);
		GRAPHICS::SET_PARTICLE_FX_LOOPED_OFFSETS(iLocal_2120, ENTITY::GET_ENTITY_COORDS(Local_2262.f_4, true, false), 0f, 0f, 0f);
	}
	if (Local_2262.f_11 == 1f && Local_2262)
	{
		CAM::SHAKE_GAMEPLAY_CAM("LARGE_EXPLOSION_SHAKE", 0.5f);
		__LIB_1__::func_283(&(vLocal_1569[28 /*3*/]), 0);
		if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_2282) == 5)
		{
			if (func_164(110))
			{
				AUDIO::PLAY_STREAM_FROM_POSITION(995.1714f, -6732.951f, 59.7461f, iLocal_2283);
			}
			OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_2282, 6);
		}
		GRAPHICS::REMOVE_PARTICLE_FX(iLocal_2120, false);
		OBJECT::DELETE_OBJECT(&(Local_2262.f_4));
		func_1247(0, Local_2262.f_5, 1065353216 /* Float: 1f */);
		Local_2262.f_1 = 1;
		Local_2262 = false;
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
		Local_2262.f_3 = 5;
	}
	switch (Local_2262.f_3)
	{
		case 0:
			Local_2262.f_3 = 1;
			break;
		case 1:
			if (!OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_2282))
			{
				iLocal_2282 = OBJECT::GET_RAYFIRE_MAP_OBJECT(995.5924f, -6734.043f, 62.5f, 20f, "des_smg2_fortwall");
			}
			else
			{
				OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_2282, 4);
				Local_2262.f_3 = 2;
			}
			break;
		case 2:
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_128.f_15, true, 0))
			{
				bVar0 = true;
			}
			else if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_128.f_56, true, 0) && CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(Local_424[3 /*8*/], true, false), 1f))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				__LIB_11__::func_824(&(Local_128.f_57), joaat("VOLBOX"));
				__LIB_5__::func_372(uParam0, 22);
				__LIB_1__::func_283(&(Local_2262.f_16), 0);
				Local_2262.f_3 = 3;
			}
			break;
		case 3:
			func_1184(100);
			Local_2262.f_8 = { 952.1f, -6721.5f, 54f };
			func_1734(0);
			Local_2262.f_4 = OBJECT::CREATE_OBJECT(func_437(15), Local_2262.f_8, true, true, false, false, true);
			iLocal_2120 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD(func_1294(6), ENTITY::GET_ENTITY_COORDS(Local_2262.f_4, true, false), 0f, 0f, 0f, 6f, false, false, false, false);
			__LIB_1__::func_283(&(Local_2262.f_13), 0);
			Local_2262 = true;
			Local_2262.f_3 = 4;
			break;
	}
}

void func_1285(var uParam0)
{
	bool bVar0;
	struct<7> Var1;
	vector3 vVar21;
	if (ENTITY::IS_ENTITY_DEAD(Local_424[3 /*8*/]))
	{
		return;
	}
	if (__LIB_0__::func_75(&(vLocal_1569[28 /*3*/])))
	{
		if (__LIB_0__::func_265(&(vLocal_1569[28 /*3*/])) >= 1f)
		{
			if (iLocal_2113 == 0)
			{
				func_1184(101);
				__LIB_0__::func_37(&(vLocal_1569[28 /*3*/]));
			}
		}
	}
	switch (Local_424[3 /*8*/].f_2)
	{
		case 1:
			func_1198(44);
			func_1198(45);
			func_1198(52);
			func_1198(53);
			TASK::_0x098CAA6DBE7D8D82(Local_424[3 /*8*/], 1);
			func_1221(3, 68);
		case 68:
			func_1184(98);
			func_1221(3, 69);
		case 69:
			if (ENTITY::IS_ENTITY_IN_VOLUME(Local_424[3 /*8*/], Local_128.f_11, true, 0))
			{
				if (__LIB_0__::func_665(Local_424[3 /*8*/], Global_35, 1, 1) > 10f)
				{
					func_1221(3, 70);
				}
				else
				{
					func_1184(99);
					func_1221(3, 73);
				}
			}
			break;
		case 70:
			if ((iLocal_2113 == 0 && !__LIB_5__::func_236(1)) && !__LIB_0__::func_481(1))
			{
				func_1184(97);
			}
			func_849(99);
			func_1306();
			TASK::TASK_LOOK_AT_ENTITY(0, Global_35, -1, 48, 41, 0);
			func_1695(0, 45, 1090519040 /* Float: 8f */, -1056964608 /* Float: -8f */, -1, 25, 0);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
			func_1307(Local_424[3 /*8*/], 0);
			func_1221(3, 71);
			break;
		case 71:
			if (__LIB_0__::func_665(Local_424[3 /*8*/], Global_35, 1, 1) <= 8f)
			{
				func_1184(99);
				UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
				func_1221(3, 72);
			}
			break;
		case 72:
			func_1306();
			if (func_164(99))
			{
				func_1780();
			}
			TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, func_438(32), 0, 9, -1, 0, 0, -1);
			func_1307(Local_424[3 /*8*/], 0);
			__LIB_1__::func_283(&(vLocal_1569[30 /*3*/]), 0);
			func_1221(3, 73);
			break;
		case 73:
			func_853(5);
			if (ENTITY::IS_ENTITY_IN_VOLUME(Local_424[3 /*8*/], Local_128.f_12, true, 0))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Local_424[3 /*8*/], iLocal_1452[7], true, 0, false, false);
				func_1221(3, 74);
			}
			break;
		case 74:
			func_853(5);
			if (func_1199(5, 1))
			{
				__LIB_11__::func_824(&(Local_128.f_35), joaat("VOLCYLINDER"));
				__LIB_11__::func_824(&(Local_128.f_36), joaat("VOLCYLINDER"));
				func_1221(3, 75);
			}
			break;
		case 75:
			if (Local_2262.f_11 >= 0.3f)
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_2328[5 /*5*/], func_1420(5, 2), true);
				func_1221(3, 76);
			}
			break;
		case 76:
			if (ANIMSCENE::_0x005E6F28DD7ED58D(Local_2328[5 /*5*/], "CS_Hercule") || ANIMSCENE::_0xF94692EB9DC15D74(Local_2328[5 /*5*/], 0))
			{
				if (VOLUME::_DOES_VOLUME_EXIST(Local_128.f_57))
				{
					VOLUME::_DELETE_VOLUME(Local_128.f_57);
				}
				func_1306();
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, func_438(32), 0, 9, -1, 0, 0, -1);
				func_1307(Local_424[3 /*8*/], 0);
				__LIB_1__::func_283(&(vLocal_1569[30 /*3*/]), 0);
				func_1221(3, 77);
			}
			break;
		case 77:
			if (!func_164(100))
			{
				if (!func_856(uParam0, 71, 71, 15))
				{
				}
				else if (func_164(0))
				{
				}
				else
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_424[71 /*8*/]))
					{
						__LIB_4__::func_7(Local_424[71 /*8*/], func_1733(71, 0), -1, 3, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
						func_849(0);
						WEAPON::SET_CURRENT_PED_WEAPON(Local_424[3 /*8*/], iLocal_1452[7], true, 0, false, false);
						__LIB_1__::func_991(Local_424[71 /*8*/], 0);
						PED::SET_PED_CONFIG_FLAG(Local_424[71 /*8*/], 277, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_424[71 /*8*/], 46, true);
						PED::SET_PED_CONFIG_FLAG(Local_424[71 /*8*/], 168, false);
						PED::SET_PED_CONFIG_FLAG(Local_424[71 /*8*/], 113, true);
						ENTITY::SET_ENTITY_INVINCIBLE(Local_424[71 /*8*/], false);
						WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(Local_424[71 /*8*/], false);
						if (!ENTITY::IS_ENTITY_DEAD(Local_424[2 /*8*/]))
						{
							TASK::TASK_AIM_AT_ENTITY(Local_424[71 /*8*/], Local_424[2 /*8*/], -1, 1, 0);
						}
					}
					func_849(100);
					if (iLocal_2285 >= 104)
					{
						func_443(5);
						func_1306();
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, 983.1f, -6750.3f, 56.2f, Local_424[71 /*8*/], 2f, 0, 0.5f, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
						TASK::TASK_AIM_AT_ENTITY(0, Local_424[71 /*8*/], -1, 1, 1);
						func_1307(Local_424[3 /*8*/], 0);
						func_1184(102);
						__LIB_5__::func_372(uParam0, 23);
						func_1221(3, 78);
					}
					Jump @2661; //curOff = 1197
					if (ENTITY::IS_ENTITY_DEAD(Local_424[71 /*8*/]))
					{
						func_1221(3, 79);
					}
					else if (((func_1692(Local_424[3 /*8*/]) && TASK::GET_SEQUENCE_PROGRESS(Local_424[3 /*8*/]) == 1) && __LIB_0__::func_665(Global_35, Local_424[3 /*8*/], 1, 1) <= 5f) || !func_1692(Local_424[3 /*8*/]))
					{
						func_1252(uParam0, 71, 1);
						if (!ENTITY::IS_ENTITY_DEAD(Local_424[2 /*8*/]))
						{
							func_1306();
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, func_761(71, 1, 4), Local_424[2 /*8*/], 1.5f, 1, 0.5f, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
							TASK::TASK_AIM_AT_ENTITY(0, Local_424[2 /*8*/], -1, 1, 0);
							func_1307(Local_424[71 /*8*/], 0);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_424[3 /*8*/], 30, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_424[3 /*8*/], 111, true);
							PED::SET_PED_SEEING_RANGE(Local_424[3 /*8*/], (__LIB_0__::func_665(Local_424[3 /*8*/], Local_424[71 /*8*/], 1, 1) * 1.5f));
							TASK::TASK_SHOOT_AT_ENTITY(Local_424[3 /*8*/], Local_424[71 /*8*/], -1, joaat("FIRING_PATTERN_FULL_AUTO"), 0);
						}
						__LIB_1__::func_283(&(vLocal_1569[32 /*3*/]), 0);
						func_1221(3, 79);
					}
					Jump @2661; //curOff = 1497
					if (PED::IS_PED_SHOOTING(Local_424[3 /*8*/]))
					{
						bVar0 = true;
					}
					if (__LIB_0__::func_265(&(vLocal_1569[32 /*3*/])) > 2f)
					{
						bVar0 = true;
					}
					if (bVar0)
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_424[71 /*8*/]))
						{
							Var1.f_8 = -1082130432;
							Var1.f_13 = 1;
							Var1.f_12 = 1;
							Var1.f_7 = 999.9f;
							Var1 = { __LIB_5__::func_270(WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Local_424[3 /*8*/], 0)) };
							Var1.f_3 = { PED::GET_PED_BONE_COORDS(Local_424[71 /*8*/], 21030, 0f, 0f, 0f) };
							Var1.f_6 = iLocal_1452[7];
							MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Var1);
							PED::SET_PED_TO_RAGDOLL_WITH_FALL(Local_424[71 /*8*/], 5000, 10000, 1, __LIB_0__::func_173(__LIB_1__::func_868(func_761(71, 0, 4), ENTITY::GET_ENTITY_COORDS(Local_424[3 /*8*/], true, false), 1065353216 /* Float: 1f */)), 0f, 0f, 0f, 0f, 0f, 0f, 0f);
							ENTITY::APPLY_FORCE_TO_ENTITY(Local_424[71 /*8*/], 1, -3f, -10f, 0f, 0f, 0f, 0f, 0, false, false, true, true, true);
							ENTITY::_SET_ENTITY_HEALTH(Local_424[71 /*8*/], 0, Local_424[3 /*8*/]);
							func_1184(103);
						}
						__LIB_5__::func_372(uParam0, 24);
						if (func_164(108))
						{
							func_178(108);
						}
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_424[3 /*8*/], 30, false);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_424[3 /*8*/], 111, false);
						func_1221(3, 80);
					}
					Jump @2661; //curOff = 1816
					func_1782(0);
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_424[3 /*8*/], func_438(32), 0, 9, -1, 0, 0, -1);
					__LIB_1__::func_283(&(vLocal_1569[30 /*3*/]), 0);
					VOLUME::_DELETE_VOLUME(Local_128.f_36);
					func_1221(3, 81);
					Jump @2661; //curOff = 1874
					if (iLocal_2285 >= 128)
					{
						if (fLocal_2286 > 10f)
						{
							func_1221(3, 82);
						}
						else
						{
							func_1221(3, 85);
						}
					}
					Jump @2661; //curOff = 1914
					if ((iLocal_2113 == 0 && !__LIB_5__::func_236(1)) && !__LIB_0__::func_481(1))
					{
						func_1184(97);
					}
					func_849(113);
					func_1306();
					TASK::TASK_LOOK_AT_ENTITY(0, Global_35, -1, 48, 41, 0);
					func_1695(0, 45, 1.5f, -1.5f, -1, 25, 0);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
					func_1307(Local_424[3 /*8*/], 0);
					func_1221(3, 83);
					Jump @2661; //curOff = 2039
					if (fLocal_2286 < 7f || iLocal_2284 >= 125)
					{
						func_1221(3, 84);
					}
					Jump @2661; //curOff = 2069
					func_1306();
					if (func_164(113))
					{
						func_1780();
					}
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, func_438(32), 0, 9, -1, 0, 0, -1);
					func_1307(Local_424[3 /*8*/], 0);
					__LIB_1__::func_283(&(vLocal_1569[30 /*3*/]), 0);
					func_1221(3, 85);
					Jump @2661; //curOff = 2137
					if (!func_164(107))
					{
						if (PED::IS_PED_CLIMBING(Local_424[3 /*8*/]))
						{
							func_1184(104);
							func_849(107);
						}
					}
					vVar21 = { ENTITY::GET_ENTITY_COORDS(Local_424[3 /*8*/], true, false) };
					if (vVar21.z >= 62.8f)
					{
						__LIB_0__::func_172(Local_128.f_25);
					}
					if (ENTITY::IS_ENTITY_IN_VOLUME(Local_424[3 /*8*/], Local_128.f_14, true, 0))
					{
						if (!func_164(103) && fLocal_2286 >= 5f)
						{
							func_849(104);
						}
						else
						{
							func_178(104);
						}
						func_1782(1);
						func_1306();
						TASK::TASK_GO_STRAIGHT_TO_COORD(0, 999.3069f, -6753.54f, 66.1674f, 2f, 20000, __LIB_2__::func_916(ENTITY::GET_ENTITY_COORDS(Local_424[3 /*8*/], true, false), ENTITY::GET_ENTITY_COORDS(Global_35, true, false)), 1056964608 /* Float: 0.5f */, 0);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
						func_1307(Local_424[3 /*8*/], 0);
						func_1221(3, 86);
					}
					Jump @2661; //curOff = 2372
					if (func_164(104))
					{
						if (func_1692(Local_424[3 /*8*/]) && TASK::GET_SEQUENCE_PROGRESS(Local_424[3 /*8*/]) == 1)
						{
							ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_2328[6 /*5*/], "Hercule", Local_424[3 /*8*/], 0);
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_2328[6 /*5*/], "pl_leadin_Wait", true);
							func_1221(3, 87);
						}
					}
					else
					{
						func_1221(3, 87);
					}
					Jump @2661; //curOff = 2467
					if (func_164(103))
					{
						__LIB_5__::func_372(uParam0, 25);
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_2328[6 /*5*/], "Hercule", Local_424[3 /*8*/], 0);
						if (func_164(104))
						{
							ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_2328[6 /*5*/], "Loop_HerculeWaits", true, false);
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_2328[6 /*5*/], "pl_leadin_after_nowait", true);
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 1, false, false);
							WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
						}
						else
						{
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_2328[6 /*5*/], "pl_leadin_NoWait", true);
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 1, false, false);
							WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
						}
						func_1221(3, 88);
					}
				}
			}
			default:
				break;
	}
}

void func_1286(var uParam0)
{
	vector3 vVar0;
	if (ENTITY::IS_ENTITY_DEAD(Local_424[2 /*8*/]))
	{
		return;
	}
	switch (Local_424[2 /*8*/].f_2)
	{
		case 1:
			func_1221(2, 8);
		case 8:
			func_1204(11);
			vVar0 = { func_1256(11) };
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_424[2 /*8*/], vVar0, 1.5f, 0, 0, 0);
			PED::SET_PED_CONFIG_FLAG(Local_424[2 /*8*/], 268, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_424[2 /*8*/], 30, false);
			PED::_0x8B1E8E35A6E814EA(Local_424[2 /*8*/], joaat("GETUPCLOSE"), -1082130432 /* Float: -1f */);
			PED::_0x8B1E8E35A6E814EA(Local_424[2 /*8*/], joaat("CLOSECOVERALLOWUNPROTECTED"), -1082130432 /* Float: -1f */);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_424[2 /*8*/], false);
			PED::SET_PED_COMBAT_MOVEMENT(Local_424[2 /*8*/], 1);
			func_1306();
			TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, vVar0, 6000, 1, 0f, 0, 0, iLocal_230[11], 1, 0, 0);
			TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0, 19);
			func_1307(Local_424[2 /*8*/], 0);
			__LIB_1__::func_283(&(vLocal_1569[0 /*3*/]), 1);
			func_1221(2, 9);
			break;
		case 9:
			if (func_1180(15, 83))
			{
				if (__LIB_0__::func_265(&(vLocal_1569[0 /*3*/])) >= 10f)
				{
					if (__LIB_0__::func_665(Global_35, Local_424[2 /*8*/], 1, 1) <= 10f)
					{
						func_1184(96);
						__LIB_1__::func_148(&(vLocal_1569[0 /*3*/]));
					}
				}
			}
			break;
	}
}

bool func_1287(var uParam0)
{
	switch (iLocal_2369[3])
	{
		case 0:
			iLocal_2369[3] = 1;
		case 1:
			__LIB_5__::func_262(&(uParam0->f_7375));
			__LIB_5__::func_580(uParam0, Global_35, "ARTHUR", 0, 0, 0, 0);
			__LIB_5__::func_580(uParam0, Local_424[2 /*8*/], "Dutch", 0, 0, 0, 0);
			__LIB_5__::func_580(uParam0, Local_424[4 /*8*/], "MicahBell", 0, 0, 0, 0);
			__LIB_5__::func_580(uParam0, Local_424[5 /*8*/], "BillWilliamson", 0, 0, 0, 0);
			__LIB_5__::func_580(uParam0, Local_424[3 /*8*/], "Hercule", 0, 0, 0, 0);
			__LIB_5__::func_580(uParam0, Local_424[6 /*8*/], "CS_Frenchman", 0, 0, 0, 0);
			__LIB_5__::func_580(uParam0, Local_14.f_101[0], "p_crateconf01x", 0, 0, 0, 0);
			__LIB_5__::func_580(uParam0, vLocal_2104.x, "HOTCHKISS_CANNON", 0, 0, 0, 0);
			iLocal_2369[3] = 2;
			return true;
	}
	return false;
}

void func_1288(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	bool bVar5;
	struct<4> Var6;
	iVar0 = 63;
	while (iVar0 <= 70)
	{
		if (ENTITY::IS_ENTITY_DEAD(Local_424[iVar0 /*8*/]))
		{
			func_1221(iVar0, 0);
		}
		switch (Local_424[iVar0 /*8*/].f_2)
		{
			case 0:
				if (func_1180(10, (64 + iVar0)))
				{
					vVar1 = { func_217(iVar0, 0, 4) };
					if (ENTITY::WOULD_ENTITY_BE_OCCLUDED(func_437(func_1293(iVar0)), vVar1, true))
					{
						if (func_856(uParam0, iVar0, iVar0, 5))
						{
							func_1221(iVar0, 1);
						}
					}
				}
				break;
			case 1:
				PED::SET_PED_CONFIG_FLAG(Local_424[iVar0 /*8*/], 277, true);
				ENTITY::SET_ENTITY_MAX_HEALTH(Local_424[iVar0 /*8*/], ENTITY::GET_ENTITY_MAX_HEALTH(Local_424[iVar0 /*8*/], false) * 2);
				ENTITY::_SET_ENTITY_HEALTH(Local_424[iVar0 /*8*/], ENTITY::GET_ENTITY_MAX_HEALTH(Local_424[iVar0 /*8*/], false), 0);
				func_1221(iVar0, 2);
			case 2:
				if (func_164(0))
				{
				}
				else
				{
					WEAPON::REMOVE_ALL_PED_WEAPONS(Local_424[iVar0 /*8*/], true, true);
					func_849(0);
					func_1221(iVar0, 3);
					Jump @762; //curOff = 284
					if (func_164(0))
					{
					}
					else
					{
						__LIB_4__::func_7(Local_424[iVar0 /*8*/], func_1733(iVar0, 0), -1, 3, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
						func_849(0);
						if (!func_1733(iVar0, 1) == 0)
						{
							func_1221(iVar0, 4);
						}
						else
						{
							func_1221(iVar0, 8);
						}
						Jump @762; //curOff = 367
						if (func_164(0))
						{
						}
						else
						{
							__LIB_4__::func_7(Local_424[iVar0 /*8*/], func_1733(iVar0, 1), -1, 3, 1, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
							func_849(0);
							func_1221(iVar0, 8);
							Jump @762; //curOff = 427
							PED::_0x4707E9C23D8CA3FE(Local_424[iVar0 /*8*/], Global_35);
							func_1691(iVar0, 2);
							Var6 = { func_217(iVar0, 1, 4) };
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_424[iVar0 /*8*/], Var6, Var6.f_3, 1, 0, 0);
							PED::SET_PED_ACCURACY(Local_424[iVar0 /*8*/], 0);
							PED::SET_PED_COMBAT_ABILITY(Local_424[iVar0 /*8*/], 0);
							PED::SET_PED_COMBAT_MOVEMENT(Local_424[iVar0 /*8*/], 1);
							func_1306();
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, PED::GET_PED_DEFENSIVE_AREA_POSITION(Local_424[iVar0 /*8*/], false), Local_424[2 /*8*/], 2f, 1, 4f, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 40000, 0);
							TASK::TASK_COMBAT_PED(0, Local_424[2 /*8*/], 0, 0);
							func_1307(Local_424[iVar0 /*8*/], 0);
							func_1221(iVar0, 9);
							Jump @762; //curOff = 602
							if (!bVar5)
							{
								bVar5 = true;
								if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_128.f_17, true, 0))
								{
									func_1203(63, 70, 16);
								}
								else
								{
									Jump @762; //curOff = 641
									func_1722(iVar0, 2);
									PED::REGISTER_TARGET(Local_424[iVar0 /*8*/], Global_35, 1);
									PED::SET_PED_ACCURACY(Local_424[iVar0 /*8*/], 100);
									PED::SET_PED_COMBAT_ABILITY(Local_424[iVar0 /*8*/], 2);
									TASK::TASK_COMBAT_PED(Local_424[iVar0 /*8*/], Global_35, 16777216, 0);
									func_1221(iVar0, 17);
									Jump @762; //curOff = 719
									if (!bVar5)
									{
										bVar5 = true;
										if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_128.f_18, true, 0))
										{
											func_1203(63, 70, 8);
										}
										else
										{
											iVar0++;
										}
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
}

void func_1289(var uParam0)
{
	struct<15> Var0;
	Var0.f_8 = -1082130432;
	if (__LIB_5__::func_279(uParam0, 4) == 3)
	{
		Var0 = { 963f, -6765.7f, 45f };
	}
	else if (__LIB_5__::func_279(uParam0, 4) == 5)
	{
		Var0 = { 958.317f, -6798.35f, 44.0076f };
	}
	Var0.f_6 = iLocal_1452[1];
	Var0.f_7 = 0f;
	Var0.f_12 = 1;
	Var0.f_13 = 1;
	Var0.f_14 = 1;
	if (iLocal_2287 < 100 && !ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_7375.f_804))
	{
		iLocal_2287 = 100;
	}
	switch (iLocal_2287)
	{
		case 0:
			func_1200(979.7f, -6786.6f, 45.4f, -1082130432 /* Float: -1f */);
			iLocal_2287++;
			break;
		case 1:
			if (ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_7375.f_804) >= 0.2f)
			{
				func_1200(971.1f, -6797.8f, 47.3f, -1082130432 /* Float: -1f */);
				iLocal_2287++;
			}
			break;
		case 2:
			if (ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_7375.f_804) >= 1f)
			{
				func_1200(979.2f, -6760.6f, 46.3f, -1082130432 /* Float: -1f */);
				iLocal_2287++;
			}
			break;
		case 3:
			if (ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_7375.f_804) >= 6.988f)
			{
				Var0.f_3 = { 971.5f, 6760.3f, 44.2f };
				MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Var0);
				iLocal_2287++;
			}
			break;
		case 4:
			if (ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_7375.f_804) >= 7.516f)
			{
				Var0.f_3 = { 972f, -6760.7f, 44.8f };
				MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Var0);
				iLocal_2287++;
			}
			break;
		case 5:
			if (ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_7375.f_804) >= 8.241f)
			{
				Var0.f_3 = { 968.5f, -6763.7f, 43.8f };
				MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Var0);
				iLocal_2287++;
			}
			break;
		case 6:
			if (ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_7375.f_804) >= 8.4f)
			{
				Var0.f_3 = { 971.9f, -6760.6f, 43.9f };
				MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Var0);
				iLocal_2287++;
			}
			break;
		case 100:
			__LIB_1__::func_283(&(vLocal_1569[29 /*3*/]), 0);
			if (__LIB_0__::func_265(&(vLocal_1569[29 /*3*/])) >= 0.2f)
			{
				Var0.f_3 = { 980.7891f, -6755.223f, 46.9797f };
				func_1200(978.692f, -6745.334f, 51.021f, -1082130432 /* Float: -1f */);
				MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Var0);
				__LIB_1__::func_148(&(vLocal_1569[29 /*3*/]));
				iLocal_2287++;
			}
			break;
		case 101:
			if (__LIB_0__::func_265(&(vLocal_1569[29 /*3*/])) >= 0.2f)
			{
				Var0.f_3 = { 980.7891f, -6755.223f, 47.2797f };
				func_1200(981.9523f, -6738.218f, 53.1919f, -1082130432 /* Float: -1f */);
				MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Var0);
				__LIB_1__::func_148(&(vLocal_1569[29 /*3*/]));
				iLocal_2287++;
			}
			break;
		case 102:
			if (__LIB_0__::func_265(&(vLocal_1569[29 /*3*/])) >= 0.25f)
			{
				Var0.f_3 = { 980.7891f, -6754.223f, 46.9797f };
				func_1200(977.902f, -6750.199f, 48.724f, -1082130432 /* Float: -1f */);
				MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Var0);
				__LIB_1__::func_148(&(vLocal_1569[29 /*3*/]));
				func_1247(0, 978.022f, -6750.848f, 49.338f, 1065353216 /* Float: 1f */);
				iLocal_2287++;
			}
			break;
		case 103:
			if (iLocal_2284 >= 6)
			{
				func_1200(983.658f, -6725.155f, 54.091f, -1082130432 /* Float: -1f */);
				__LIB_1__::func_148(&(vLocal_1569[29 /*3*/]));
				iLocal_2287++;
			}
			break;
		case 104:
			if (iLocal_2284 >= 10)
			{
				func_1200(984.405f, -6724.326f, 58.027f, -1082130432 /* Float: -1f */);
				__LIB_1__::func_148(&(vLocal_1569[29 /*3*/]));
				iLocal_2287++;
			}
			break;
		case 105:
			if (iLocal_2284 >= 18)
			{
				func_1200(990.141f, -6726.701f, 58.075f, -1082130432 /* Float: -1f */);
				__LIB_1__::func_148(&(vLocal_1569[29 /*3*/]));
				iLocal_2287++;
			}
			break;
		case 106:
			if (iLocal_2284 >= 63)
			{
				func_1200(997.488f, -6728.616f, 65.1241f, -1082130432 /* Float: -1f */);
				__LIB_1__::func_148(&(vLocal_1569[29 /*3*/]));
				iLocal_2287++;
			}
			break;
		case 107:
			if (iLocal_2284 >= 112)
			{
				func_1200(989.3f, -6773f, 50.7f, -1082130432 /* Float: -1f */);
				iLocal_2287++;
			}
			break;
		case 108:
			if (iLocal_2284 >= 118)
			{
				func_1200(986.4f, -6780.7f, 50f, -1082130432 /* Float: -1f */);
				iLocal_2287++;
			}
			break;
		case 109:
			if (iLocal_2284 >= 133)
			{
				func_1200(1001.513f, -6760.079f, 60.674f, -1082130432 /* Float: -1f */);
				iLocal_2287++;
			}
			break;
	}
}

void func_1292()
{
	int iVar0;
	iVar0 = 14;
	while (iVar0 <= 18)
	{
		func_1251(iVar0, 1);
		func_436(func_1234(iVar0));
		iVar0++;
	}
	if (OBJECT::DOES_PICKUP_EXIST(iLocal_2153))
	{
		OBJECT::REMOVE_PICKUP(iLocal_2153);
	}
}

int func_1293(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 0;
		case 4:
			return 1;
		case 5:
			return 2;
		case 3:
			return 3;
		case 6:
			return 4;
		case 7:
			return 5;
		case 8:
			return 5;
		case 9:
			return 6;
		case 10:
			return 6;
		case 11:
			return 6;
	}
	if (iParam0 >= 12 && iParam0 <= 100)
	{
		return 7;
	}
	return -1;
}

char* func_1294(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "muz_cannon_warship";
		case 1:
			return "scr_smg2_fort_exp";
		case 2:
			return "scr_smg2_fort_exp_debris";
		case 3:
			return "ent_amb_falling_debris";
		case 4:
			return "exp_grd_smoke_post_small";
		case 5:
			return "scr_smg2_fort_exp_cannon";
		case 6:
			return "proj_cannon_trail";
		case 7:
			return "scr_smg2_boat_impact";
		case 8:
			return "scr_smg2_boat_exp";
		case 9:
			return "smg2_sounds";
		case 10:
			return "Cannon_Ball";
		case 11:
			return "SMG2_Des";
		case 12:
			return "explosion_falling_debris";
		case 13:
			return "WarShip_Cannon";
		case 14:
			return "Boat_Explosion";
		case 15:
			return "SMALL_EXPLOSION_SHAKE";
		case 16:
			return "HAND_SHAKE";
		case 17:
			return "SCREAM_TERROR";
	}
	return "";
}

void func_1295()
{
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_EXIT"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_CRAFTING_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_EQUIP_ITEM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_USE_ITEM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_WHISTLE"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_BEHIND"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY_ACTION"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY_PC"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY_SECONDARY"), false);
}

void func_1296(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	int iVar5;
	int iVar6;
	switch (iLocal_2313)
	{
		case 0:
			func_1198(54);
			func_1198(58);
			func_1198(59);
			iLocal_2313 = 1;
			break;
		case 1:
			if ((func_1233(54) && func_1233(58)) && func_1233(59))
			{
				iLocal_2313 = 2;
			}
			break;
		case 2:
			if (func_856(uParam0, 72, 87, 11))
			{
				iLocal_2313 = 3;
			}
			break;
		case 3:
			if (!func_164(0))
			{
				iVar0 = 77;
				while (iVar0 <= 80)
				{
					if (!WEAPON::HAS_PED_GOT_WEAPON(Local_424[iVar0 /*8*/], iLocal_1452[1], 0, false))
					{
						__LIB_4__::func_7(Local_424[iVar0 /*8*/], iLocal_1452[1], -1, 3, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
						func_849(0);
						if (iVar0 == 80)
						{
							__LIB_1__::func_283(&(vLocal_1569[39 /*3*/]), 0);
							iLocal_2313 = 4;
						}
					}
					iVar0++;
				}
			}
			break;
		case 4:
			iVar0 = 72;
			while (iVar0 <= 87)
			{
				vVar1 = { func_217(iVar0, 0, 5) };
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_424[iVar0 /*8*/], Local_1700.f_1, 0, vVar1, __LIB_5__::func_439(iVar0 == 76, -28.8f, 0f), 0f, (__LIB_2__::func_916(ENTITY::GET_ENTITY_COORDS(Local_424[iVar0 /*8*/], true, false), ENTITY::GET_ENTITY_COORDS(Global_35, true, false)) + 90f), false, false, false, false, 2, true, false, false);
				iVar0++;
			}
			func_1695(Local_424[74 /*8*/], 58, 1000f, -1000f, -1, 5, 0);
			func_1695(Local_424[75 /*8*/], 58, 1000f, -1000f, -1, 5, 0);
			func_1695(Local_424[76 /*8*/], 59, 1000f, -1000f, -1, 5, 0);
			func_1695(Local_424[73 /*8*/], 58, 1000f, -1000f, -1, 5, 0);
			iLocal_2313 = 5;
			break;
		case 5:
			iVar0 = 77;
			while (iVar0 <= 87)
			{
				iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
				func_1306();
				if (iVar5 == 0)
				{
					func_1695(0, 55, 4f, -4f, -1, 0, 0);
				}
				else if (iVar5 == 1)
				{
					func_1695(0, 56, 4f, -4f, -1, 0, 0);
				}
				else if (iVar5 == 2)
				{
					func_1695(0, 57, 4f, -4f, -1, 0, 0);
				}
				func_1695(0, 54, 4f, -4f, -1, 1, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f));
				func_1307(Local_424[iVar0 /*8*/], MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 5f));
				iVar0++;
			}
			__LIB_1__::func_283(&(vLocal_1569[38 /*3*/]), 1);
			iLocal_2313 = 6;
			break;
		case 6:
			if (__LIB_0__::func_265(&(vLocal_1569[38 /*3*/])) >= 10f)
			{
				iLocal_2313 = 5;
			}
			if (__LIB_0__::func_265(&(vLocal_1569[39 /*3*/])) >= fLocal_2322)
			{
				iVar6 = func_1783(77, 87);
				if (!iVar6 == 0)
				{
					__LIB_14__::func_337(Local_424[iVar6 /*8*/], ENTITY::GET_ENTITY_COORDS(Global_35, true, false) + Vector(MISC::GET_RANDOM_FLOAT_IN_RANGE(-2f, 2f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-2f, 2f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-2f, 2f)), Global_35, 0, 0, 0, 1);
				}
				fLocal_2322 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.5f, 4f);
				__LIB_1__::func_148(&(vLocal_1569[39 /*3*/]));
			}
			break;
	}
}

void func_1297(var uParam0)
{
	int iVar0;
	bool bVar1;
	if (PED::IS_PED_SHOOTING(Global_35))
	{
		__LIB_1__::func_148(&(vLocal_1569[35 /*3*/]));
	}
	iVar0 = 0;
	if (__LIB_0__::func_265(&(vLocal_1569[35 /*3*/])) >= 10f)
	{
		if (iLocal_2310 == 0)
		{
			iVar0 = 107;
		}
		else if (iLocal_2310 > 0 && iLocal_2310 <= 2)
		{
			iVar0 = 108;
		}
		else if (iLocal_2310 > 2 && iLocal_2310 <= 4)
		{
			iVar0 = 109;
		}
		else if (iLocal_2310 > 5 && iLocal_2310 < 7)
		{
			iVar0 = 110;
		}
		if (!iVar0 == 0)
		{
			func_1184(iVar0);
		}
		__LIB_1__::func_148(&(vLocal_1569[35 /*3*/]));
	}
	else if (func_164(122))
	{
		if (iLocal_2310 > 0 && iLocal_2310 <= 3)
		{
			iVar0 = 111;
		}
		else if (iLocal_2310 > 3 && iLocal_2310 <= 7)
		{
			iVar0 = 112;
		}
		else if (iLocal_2310 >= 8 && iLocal_2310 < 10)
		{
			iVar0 = 113;
		}
		if (!iVar0 == 0)
		{
			if (__LIB_0__::func_265(&(vLocal_1569[41 /*3*/])) >= 6f && !iLocal_2310 == 6)
			{
				bVar1 = true;
			}
			if (iLocal_2310 == 7)
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				if (!__LIB_5__::func_236(1) && !__LIB_0__::func_481(1))
				{
					__LIB_1__::func_148(&(vLocal_1569[41 /*3*/]));
					__LIB_1__::func_104(&(uParam0->f_5310), func_1724(iVar0), 0, -1, 0, 0);
				}
			}
		}
	}
	else if (func_164(123))
	{
		if (!__LIB_5__::func_236(1) && !__LIB_0__::func_481(1))
		{
			if (iLocal_2310 >= 0 && iLocal_2310 <= 2)
			{
				__LIB_1__::func_104(&(uParam0->f_5310), func_1724(115), 0, -1, 0, 0);
			}
			else if (iLocal_2310 >= 3 && iLocal_2310 <= 6)
			{
				__LIB_1__::func_104(&(uParam0->f_5310), func_1724(116), 0, -1, 0, 0);
			}
			else if (iLocal_2310 >= 7 && iLocal_2310 <= 9)
			{
				__LIB_1__::func_104(&(uParam0->f_5310), func_1724(117), 0, -1, 0, 0);
			}
			else
			{
				__LIB_1__::func_104(&(uParam0->f_5310), func_1724(118), 0, -1, 0, 0);
			}
		}
	}
}

void func_1298()
{
	switch (Local_424[3 /*8*/].f_2)
	{
		case 1:
			func_1221(3, 8);
		case 8:
			WEAPON::SET_CURRENT_PED_WEAPON(Local_424[3 /*8*/], iLocal_1452[10], false, 0, false, false);
			TASK::TASK_SWAP_WEAPON(Local_424[3 /*8*/], 1, 1, 0, 0);
			PED::_SET_PED_CROUCH_MOVEMENT(Local_424[3 /*8*/], true, 0, false);
			PED::FORCE_PED_MOTION_STATE(Local_424[3 /*8*/], joaat("MOTIONSTATE_CROUCH_IDLE"), false, 0, false);
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_424[3 /*8*/], func_472(5, 4), 0.75f, 1, 0, 0);
			func_1306();
			TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, func_472(5, 4), Local_1700.f_1, 1.5f, 1, 0.5f, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
			TASK::TASK_SHOOT_AT_ENTITY(0, Local_1700.f_1, -1, joaat("FIRING_PATTERN_BURST_FIRE"), 0);
			func_1307(Local_424[3 /*8*/], 0);
			func_1221(3, 9);
			break;
		case 9:
			if (PED::IS_PED_RELOADING(Global_35))
			{
				if (!func_164(119))
				{
					func_849(119);
					func_849(120);
				}
				else
				{
					func_178(120);
				}
			}
			else
			{
				func_178(119);
				func_178(120);
			}
			if (func_164(120))
			{
				if (iLocal_2312 == 0 || iLocal_2312 > 2)
				{
					func_1184(119);
				}
				else if (iLocal_2312 == 1)
				{
					func_1184(120);
				}
				else if (iLocal_2312 == 2)
				{
					func_1184(121);
				}
				iLocal_2312++;
			}
			break;
	}
}

void func_1299()
{
	switch (iLocal_2308)
	{
		case 0:
			__LIB_1__::func_283(&(vLocal_1569[34 /*3*/]), 0);
			func_849(124);
			iLocal_2308 = 1;
			break;
		case 1:
			Local_1700.f_3[0 /*33*/] = 1;
			VEHICLE::SET_BOAT_ANCHOR(Local_1700.f_1, true);
			iLocal_2308 = 2;
			break;
		case 2:
			break;
		case 5:
			Local_1700.f_3[0 /*33*/] = 1;
			Local_1700.f_3[1 /*33*/] = 1;
			Local_1700.f_3[2 /*33*/] = 1;
			Local_1700.f_3[0 /*33*/].f_13.f_10 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
			Local_1700.f_3[1 /*33*/].f_13.f_10 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, func_1784(2f)) };
			Local_1700.f_3[2 /*33*/].f_13.f_10 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, func_1784(3f)) };
			Local_1700.f_3[0 /*33*/].f_11 = 2;
			Local_1700.f_3[1 /*33*/].f_11 = 2;
			Local_1700.f_3[2 /*33*/].f_11 = 2;
			__LIB_1__::func_283(&(vLocal_1569[36 /*3*/]), 0);
			ENTITY::SET_ENTITY_INVINCIBLE(Global_35, false);
			ENTITY::SET_ENTITY_PROOFS(Global_35, 0, false);
			iLocal_2308 = 6;
			break;
		case 6:
			if ((Local_1700.f_3[0 /*33*/].f_11 == 4 || Local_1700.f_3[1 /*33*/].f_11 == 4) || Local_1700.f_3[2 /*33*/].f_11 == 4)
			{
				FIRE::ADD_EXPLOSION(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 26, 0.5f, true, false, 1f);
				ENTITY::_SET_ENTITY_HEALTH(Global_35, 0, Local_1700.f_1);
			}
			break;
	}
}

void func_1300()
{
	int iVar0;
	vector3 vVar1;
	if (iLocal_2321 == 0)
	{
		iVar0 = 77;
	}
	else
	{
		iVar0 = iLocal_2321 + 1;
	}
	if (iVar0 < 77 || iVar0 > 87)
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_424[iVar0 /*8*/]) && !ENTITY::IS_ENTITY_DEAD(Local_424[iVar0 /*8*/]))
	{
		ENTITY::DETACH_ENTITY(Local_424[iVar0 /*8*/], false, false);
		ENTITY::SET_ENTITY_DYNAMIC(Local_424[iVar0 /*8*/], true);
		PHYSICS::ACTIVATE_PHYSICS(Local_424[iVar0 /*8*/]);
		PED::SET_PED_TO_RAGDOLL_WITH_FALL(Local_424[iVar0 /*8*/], 5000, 10000, 1, __LIB_0__::func_173(__LIB_1__::func_868(ENTITY::GET_ENTITY_COORDS(Local_424[iVar0 /*8*/], true, false), ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 1065353216 /* Float: 1f */)), 0f, 0f, 0f, 0f, 0f, 0f, 0f);
		ENTITY::_SET_ENTITY_HEALTH(Local_424[iVar0 /*8*/], 0, 0);
		vVar1 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-8f, 8f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-8f, 8f), MISC::GET_RANDOM_FLOAT_IN_RANGE(10f, 15f) };
		ENTITY::APPLY_FORCE_TO_ENTITY(Local_424[iVar0 /*8*/], 1, vVar1, 0f, 0f, 0f, 0, false, false, true, true, true);
	}
	iLocal_2321 = iVar0;
}

void func_1301(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (iParam1 == 3)
	{
		__LIB_5__::func_372(uParam0, 27);
	}
	else if (iParam1 == 6)
	{
		__LIB_5__::func_372(uParam0, 28);
	}
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			iVar1 = 7;
			iVar2 = iVar0;
			while (iVar2 <= iVar1)
			{
				func_1785(iVar2, 0);
				iVar2++;
			}
			break;
		case 1:
			func_1785(0, 1);
			break;
		case 2:
			func_1785(1, 1);
			break;
		case 3:
			func_1785(2, 1);
			break;
		case 4:
			func_1785(3, 1);
			break;
		case 5:
			func_1785(4, 1);
			break;
		case 6:
			func_1785(5, 1);
			break;
		case 7:
			func_1785(6, 1);
			break;
		case 8:
			func_1785(7, 1);
			break;
		default:
			break;
	}
	Local_1700.f_403 = iParam1;
}

void func_1302()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 10)
	{
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_1700.f_3[iVar0 /*33*/].f_13.f_17))
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(Local_1700.f_3[iVar0 /*33*/].f_13.f_17, false);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_1700.f_3[iVar0 /*33*/].f_13.f_9))
		{
			OBJECT::DELETE_OBJECT(&(Local_1700.f_3[iVar0 /*33*/].f_13.f_9));
		}
		Local_1700.f_3[iVar0 /*33*/] = 0;
		Local_1700.f_3[iVar0 /*33*/].f_11 = 0;
		iVar0++;
	}
}

void func_1303()
{
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_ATTACK2"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_RELOAD"), false);
}

void func_1304(int iParam0, bool bParam1, float fParam2)
{
	struct<7> Var0;
	Var0 = { func_1224(iParam0) };
	iLocal_1494[iParam0] = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), Var0, Var0.f_3, Var0.f_6, false, 2);
	if (fParam2 > 0f)
	{
		CAM::SHAKE_CAM(iLocal_1494[iParam0], "HAND_SHAKE", fParam2);
	}
	if (bParam1)
	{
		func_1305(iParam0, 1, 0, 0);
	}
}

void func_1305(int iParam0, bool bParam1, bool bParam2, float fParam3)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iLocal_1494)
	{
		if (iVar0 == iParam0)
		{
		}
		else if (CAM::DOES_CAM_EXIST(iLocal_1494[iVar0]) && CAM::IS_CAM_ACTIVE(iLocal_1494[iVar0]))
		{
			CAM::SET_CAM_ACTIVE(iLocal_1494[iVar0], false);
		}
		iVar0++;
	}
	if (bParam1)
	{
		if (CAM::DOES_CAM_EXIST(iLocal_1494[iParam0]))
		{
			CAM::SET_CAM_ACTIVE(iLocal_1494[iParam0], true);
			CAM::RENDER_SCRIPT_CAMS(true, bParam2, BUILTIN::FLOOR((fParam3 * 1000f)), true, false, 0);
		}
	}
	else if (!bParam1)
	{
		CAM::RENDER_SCRIPT_CAMS(false, bParam2, BUILTIN::FLOOR((fParam3 * 1000f)), true, false, 0);
		CAM::SET_CAM_ACTIVE(iLocal_1494[iParam0], false);
	}
}

void func_1306()
{
	if (func_164(8))
	{
		TASK::CLOSE_SEQUENCE_TASK(iLocal_2114);
		func_178(8);
	}
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_2114);
	TASK::OPEN_SEQUENCE_TASK(&iLocal_2114);
	func_849(8);
}

void func_1307(int iParam0, float fParam1)
{
	if (!func_164(8))
	{
		return;
	}
	TASK::CLOSE_SEQUENCE_TASK(iLocal_2114);
	if (__LIB_0__::func_272(iParam0, 0))
	{
		if (fParam1 == 0f)
		{
			TASK::TASK_PERFORM_SEQUENCE(iParam0, iLocal_2114);
		}
		else
		{
			TASK::_TASK_PERFORM_SEQUENCE_2(iParam0, iLocal_2114, fParam1, fParam1);
		}
	}
	func_178(8);
}

void func_1308()
{
	float fVar0;
	fVar0 = (BUILTIN::TO_FLOAT((MISC::_GET_SYSTEM_TIME() - iLocal_2307)) / 1000f);
	switch (iLocal_2309)
	{
		case 0:
			if (func_164(126) && !iLocal_2306 == -1)
			{
				AUDIO::PLAY_STREAM_FRONTEND(iLocal_2306);
			}
			func_1786(7.32f, -20f, 1.04f, 1f);
			iLocal_2307 = MISC::_GET_SYSTEM_TIME();
			iLocal_2309++;
			break;
		case 1:
			if (fVar0 > 0.4f)
			{
				func_1786(1.58f, -12.68f, 4.6f, 1f);
				iLocal_2309++;
			}
			break;
		case 2:
			if (fVar0 > 0.6f)
			{
				func_1786(5.37f, 0.13f, -0.45f, 1f);
				iLocal_2309++;
			}
			break;
		case 3:
			if (fVar0 > 0.7f)
			{
				func_1786(3.82f, -4.36f, 5.24f, 1f);
				iLocal_2309++;
			}
			break;
		case 4:
			if (fVar0 > 1.2f)
			{
				func_1786(3.82f, -4.36f, 5.24f, 1f);
				iLocal_2309++;
			}
			break;
		case 5:
			if (fVar0 > 1.4f)
			{
				func_1786(3.82f, 10.17f, 3.18f, 2f);
				iLocal_2309++;
			}
			break;
		case 6:
			if (fVar0 > 2.4f)
			{
				func_1786(3.82f, 10.17f, 3.18f, 2f);
				iLocal_2309++;
			}
			break;
		case 7:
			if (fVar0 > 2.8f)
			{
				func_1786(3.82f, 14.84f, 3.18f, 1f);
				iLocal_2309++;
			}
			break;
		case 8:
			if (fVar0 > 3f)
			{
				func_1786(0.42f, 18.3f, 5.41f, 1f);
				iLocal_2309++;
			}
			break;
		case 9:
			if (fVar0 > 3.5f)
			{
				func_1786(0.42f, 4.61f, 5.41f, 1f);
				iLocal_2309++;
			}
			break;
		case 10:
			if (fVar0 > 3.7f)
			{
				func_1786(-2.32f, 9.77f, 9.45f, 1f);
				iLocal_2309++;
			}
			break;
		case 11:
			if (fVar0 > 3.9f)
			{
				func_1786(0.17f, 5.91f, 13.8f, 1f);
				iLocal_2309++;
			}
			break;
		case 12:
			if (fVar0 > 4.4f)
			{
				func_1786(7.14f, -5.61f, 0f, 1f);
				iLocal_2309++;
			}
			break;
		case 13:
			if (fVar0 > 4.8f)
			{
				func_1786(-2.41f, 1.35f, 4.91f, 1f);
				iLocal_2309++;
			}
			break;
		case 14:
			if (fVar0 > 5.2f)
			{
				func_1786(-2.41f, 20f, 4.91f, 1f);
				iLocal_2309++;
			}
			break;
		case 15:
			if (fVar0 > 5.3f)
			{
				func_1786(7.21f, 20f, -0.67f, 1f);
				iLocal_2309++;
			}
			break;
		case 16:
			if (fVar0 > 5.6f)
			{
				func_1786(2.59f, -10f, 5.68f, 1f);
				iLocal_2309++;
			}
			break;
		case 17:
			if (fVar0 > 5.7f)
			{
				func_1786(2.59f, 5.92f, 5.68f, 3f);
				iLocal_2309++;
			}
			break;
		case 18:
			if (fVar0 > 5.8f)
			{
				func_1786(2.47f, 10.39f, 10.23f, 3f);
				iLocal_2309++;
			}
			break;
		case 19:
			if (fVar0 > 5.85f)
			{
				func_1786(2.47f, 7.96f, 12.7f, 3f);
				iLocal_2309++;
			}
			break;
	}
}

bool func_1309(var uParam0)
{
	switch (iLocal_2369[4])
	{
		case 0:
			iLocal_2369[4] = 1;
		case 1:
			__LIB_5__::func_262(&(uParam0->f_7375));
			__LIB_5__::func_580(uParam0, Global_35, "ARTHUR", 0, 0, 0, 0);
			__LIB_5__::func_580(uParam0, Local_424[2 /*8*/], "Dutch", 0, 0, 0, 0);
			__LIB_5__::func_580(uParam0, Local_424[4 /*8*/], "MicahBell", 0, 0, 0, 0);
			__LIB_5__::func_580(uParam0, Local_424[5 /*8*/], "BillWilliamson", 0, 0, 0, 0);
			__LIB_5__::func_580(uParam0, Local_424[3 /*8*/], "Hercule", 0, 0, 0, 0);
			__LIB_5__::func_580(uParam0, Local_424[6 /*8*/], "CS_Frenchman", 0, 0, 0, 0);
			__LIB_5__::func_111(&(uParam0->f_7375), Local_424[9 /*8*/], "MSP_SMUGGLER2_MALES_01", 0, 0, 0);
			__LIB_5__::func_111(&(uParam0->f_7375), Local_424[10 /*8*/], "MSP_SMUGGLER2_MALES_01^1", 0, 0, 0);
			__LIB_5__::func_111(&(uParam0->f_7375), Local_424[11 /*8*/], "MSP_SMUGGLER2_MALES_01^2", 0, 0, 0);
			__LIB_5__::func_580(uParam0, vLocal_2104.x, "HOTCHKISS_CANNON", 0, 0, 0, 0);
			__LIB_5__::func_580(uParam0, Local_1700.f_1, "SMUGGLER02", 0, 0, 0, 0);
			iLocal_2369[4] = 2;
			return true;
	}
	return false;
}

void func_1311(var uParam0)
{
	vector3 vVar0;
	switch (iLocal_2327)
	{
		case 0:
			iLocal_2327 = 1;
		case 1:
			__LIB_1__::func_296(func_433(2), 1, 0, 1);
			__LIB_1__::func_296(func_433(5), 1, 0, 1);
			__LIB_1__::func_296(func_433(4), 1, 0, 1);
			ENTITY::SET_ENTITY_INVINCIBLE(Local_424[3 /*8*/], true);
			ENTITY::SET_ENTITY_INVINCIBLE(Local_424[6 /*8*/], true);
			iLocal_2327 = 2;
		case 2:
			func_1200(986.8f, -6743.1f, 62.4f, -1082130432 /* Float: -1f */);
			__LIB_1__::func_283(&(vLocal_1569[40 /*3*/]), 1);
			iLocal_2327 = 3;
			break;
		case 3:
			if (__LIB_0__::func_265(&(vLocal_1569[40 /*3*/])) >= 0.1f)
			{
				func_1200(986f, -6745.3f, 62.6f, -1082130432 /* Float: -1f */);
				iLocal_2327 = 4;
			}
			break;
		case 4:
			if (__LIB_0__::func_265(&(vLocal_1569[40 /*3*/])) >= 0.3f)
			{
				func_1200(986f, -6747.3f, 62.7f, -1082130432 /* Float: -1f */);
				iLocal_2327 = 5;
			}
			break;
		case 5:
			if (__LIB_0__::func_265(&(vLocal_1569[40 /*3*/])) >= 0.35f)
			{
				func_1200(987.1f, -6742.8f, 63f, -1082130432 /* Float: -1f */);
				iLocal_2327 = 6;
			}
			break;
		case 6:
			if (__LIB_0__::func_265(&(vLocal_1569[40 /*3*/])) >= (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_1700.f_1, true, false), ENTITY::GET_ENTITY_COORDS(vLocal_2104.x, true, false), true) / 80f))
			{
				FIRE::START_ENTITY_FIRE(Local_424[3 /*8*/], 100f, 0, 4);
				ENTITY::SET_ENTITY_DYNAMIC(Local_424[3 /*8*/], true);
				PHYSICS::ACTIVATE_PHYSICS(Local_424[3 /*8*/]);
				PED::SET_PED_TO_RAGDOLL_WITH_FALL(Local_424[3 /*8*/], 5000, 10000, 1, __LIB_0__::func_173(0f, 5f, 0f), 0f, 0f, 0f, 0f, 0f, 0f, 0f);
				vVar0 = { -5f, 10f, 10f };
				ENTITY::APPLY_FORCE_TO_ENTITY(Local_424[3 /*8*/], 1, vVar0, 0f, 0f, 0f, 0, false, false, true, true, true);
				__LIB_1__::func_283(&(vLocal_1569[40 /*3*/]), 0);
				iLocal_2327 = 7;
			}
			break;
		case 7:
			if (__LIB_0__::func_265(&(vLocal_1569[40 /*3*/])) >= 0.3f)
			{
				FIRE::START_ENTITY_FIRE(Local_424[5 /*8*/], 100f, 0, 4);
				ENTITY::SET_ENTITY_DYNAMIC(Local_424[5 /*8*/], true);
				PHYSICS::ACTIVATE_PHYSICS(Local_424[5 /*8*/]);
				PED::SET_PED_TO_RAGDOLL_WITH_FALL(Local_424[5 /*8*/], 5000, 10000, 1, __LIB_0__::func_173(0f, 5f, 0f), 0f, 0f, 0f, 0f, 0f, 0f, 0f);
				vVar0 = { 5f, 10f, 10f };
				ENTITY::APPLY_FORCE_TO_ENTITY(Local_424[5 /*8*/], 1, vVar0, 0f, 0f, 0f, 0, false, false, true, true, true);
				__LIB_1__::func_283(&(vLocal_1569[40 /*3*/]), 0);
				iLocal_2327 = 8;
			}
			break;
		case 8:
			if (__LIB_0__::func_265(&(vLocal_1569[40 /*3*/])) >= 0.5f)
			{
				FIRE::START_ENTITY_FIRE(Local_424[5 /*8*/], 100f, 0, 4);
				ENTITY::SET_ENTITY_DYNAMIC(Local_424[5 /*8*/], true);
				PHYSICS::ACTIVATE_PHYSICS(Local_424[5 /*8*/]);
				PED::SET_PED_TO_RAGDOLL_WITH_FALL(Local_424[5 /*8*/], 5000, 10000, 1, __LIB_0__::func_173(0f, 5f, 0f), 0f, 0f, 0f, 0f, 0f, 0f, 0f);
				vVar0 = { 5f, 10f, 10f };
				ENTITY::APPLY_FORCE_TO_ENTITY(Local_424[5 /*8*/], 1, vVar0, 0f, 0f, 0f, 0, false, false, true, true, true);
				__LIB_1__::func_283(&(vLocal_1569[40 /*3*/]), 0);
				iLocal_2327 = 9;
			}
			break;
		case 9:
			ENTITY::_SET_ENTITY_HEALTH(Global_35, 0, 0);
			__LIB_1__::func_296(func_433(2), 0, 0, 1);
			__LIB_1__::func_296(func_433(5), 0, 0, 1);
			__LIB_1__::func_296(func_433(4), 0, 0, 1);
			ENTITY::SET_ENTITY_INVINCIBLE(Local_424[3 /*8*/], false);
			ENTITY::SET_ENTITY_INVINCIBLE(Local_424[6 /*8*/], false);
			iLocal_2327 = 10;
			break;
		case 10:
			break;
	}
}

void func_1316()
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
	iVar0 = func_1794(6291456, 0);
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

int func_1339(var uParam0, int iParam1, int iParam2)
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
		return func_1339(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

int func_1369(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
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
				func_836(Global_1360165[iParam0 /*1157*/], vVar0, fParam6, 2, 1073741824 /* Float: 2f */);
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

void func_1370(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
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
	func_1815(uParam0, iParam1, iParam2, __LIB_1__::func_464(iParam2, 0));
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

bool func_1411(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
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
					__LIB_5__::func_265(uParam5);
				}
				__LIB_1__::func_747(uParam4, 3);
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
				if (__LIB_8__::func_930(uParam4, &uParam0, 1, 1))
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
				if (__LIB_5__::func_253(uParam5) != 0 || (__LIB_0__::func_81(uParam5) == 1 && __LIB_5__::func_279(uParam5, __LIB_4__::func_939(uParam5)) >= 3))
				{
					if (!DLC::GET_IS_LOADING_SCREEN_ACTIVE())
					{
						MISC::_0xA565FAC215CBC77D();
						__LIB_0__::func_722(1, 0);
						__LIB_8__::func_938(uParam4, &uParam0, uParam5);
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
			func_388(uParam4);
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
				if (__LIB_0__::func_81(uParam5) == 1 && __LIB_5__::func_279(uParam5, __LIB_4__::func_939(uParam5)) >= 3)
				{
					if (__LIB_5__::func_266(uParam5))
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

bool func_1418(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, struct<4> Param5)
{
	int iVar0;
	struct<4> Var1;
	int iVar5;
	switch (Local_424[iParam1 /*8*/].f_3)
	{
		case 0:
			if (bParam2)
			{
				Local_424[iParam1 /*8*/].f_3 = 1;
			}
			else if (bParam3)
			{
				Local_424[iParam1 /*8*/].f_3 = 3;
			}
			else if (bParam4)
			{
				Local_424[iParam1 /*8*/].f_3 = 5;
			}
			else
			{
				Local_424[iParam1 /*8*/].f_3 = 8;
			}
			break;
		case 1:
			iVar0 = __LIB_5__::func_34(uParam0, func_437(func_1293(iParam1)), 1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				Local_424[iParam1 /*8*/] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_424[iParam1 /*8*/]))
			{
				if (!func_433(iParam1) == -1)
				{
					Local_424[iParam1 /*8*/].f_3 = 2;
				}
				else
				{
					Local_424[iParam1 /*8*/].f_3 = 6;
				}
			}
			else if (bParam3)
			{
				Local_424[iParam1 /*8*/].f_3 = 3;
			}
			else if (bParam4)
			{
				Local_424[iParam1 /*8*/].f_3 = 5;
			}
			else
			{
				Local_424[iParam1 /*8*/].f_3 = 8;
			}
			break;
		case 2:
			if (func_828(uParam0, func_433(iParam1), &(Local_424[iParam1 /*8*/]), 0, 0, 0, 0, 0, 0, 1593315648, 1, 0, 1, 0))
			{
				Local_424[iParam1 /*8*/].f_3 = 6;
			}
			break;
		case 3:
			if (func_433(iParam1) == -1)
			{
				if (bParam4)
				{
					Local_424[iParam1 /*8*/].f_3 = 5;
				}
				else
				{
					Local_424[iParam1 /*8*/].f_3 = 8;
				}
				return false;
			}
			if (func_828(uParam0, func_433(iParam1), &(Local_424[iParam1 /*8*/]), 0, Param5, Param5.f_1, Param5.f_2, Param5.f_3, 1, 1593315648, 1, 0, 1, 0))
			{
				Local_424[iParam1 /*8*/].f_3 = 6;
			}
			else
			{
				return false;
			}
			break;
		case 5:
			if (func_164(0))
			{
				return false;
			}
			if (__LIB_0__::func_86(Param5))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
				Var1.f_3 = ENTITY::GET_ENTITY_HEADING(Global_35);
			}
			else
			{
				Var1 = { Param5 };
			}
			Local_424[iParam1 /*8*/] = __LIB_8__::func_931(func_437(func_1293(iParam1)), Var1, Var1.f_3, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			func_849(0);
			Local_424[iParam1 /*8*/].f_3 = 6;
			break;
		case 6:
			if (!ENTITY::IS_ENTITY_DEAD(Local_424[iParam1 /*8*/]))
			{
				if (!PED::_0xA0BC8FAED8CFEB3C(Local_424[iParam1 /*8*/]))
				{
					return false;
				}
				WEAPON::REMOVE_ALL_PED_WEAPONS(Local_424[iParam1 /*8*/], true, true);
				if (iParam1 == 2)
				{
					iLocal_1452[5] = __LIB_4__::func_7(Local_424[iParam1 /*8*/], iLocal_1452[5], -1, 2, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					iLocal_1452[6] = __LIB_4__::func_7(Local_424[iParam1 /*8*/], iLocal_1452[6], -1, 2, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					iLocal_2121 = PED::GET_PED_ACCURACY(Local_424[iParam1 /*8*/]);
					if (__LIB_4__::func_939(uParam0) == 0)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_7375.f_804))
						{
							ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_7375.f_804, "Dutch", Local_424[iParam1 /*8*/], 0);
						}
					}
				}
				else if (iParam1 == 4)
				{
					iLocal_1452[3] = __LIB_4__::func_7(Local_424[iParam1 /*8*/], iLocal_1452[3], -1, 2, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					iLocal_1452[4] = __LIB_4__::func_7(Local_424[iParam1 /*8*/], iLocal_1452[4], -1, 2, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					if (__LIB_4__::func_939(uParam0) == 0)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_7375.f_804))
						{
							ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_7375.f_804, "MicahBell", Local_424[iParam1 /*8*/], 0);
						}
					}
				}
				else if (iParam1 == 5)
				{
					if (!__LIB_4__::func_939(uParam0) == 0 && !__LIB_4__::func_939(uParam0) == 1)
					{
						iLocal_1452[2] = __LIB_4__::func_7(Local_424[iParam1 /*8*/], iLocal_1452[2], -1, 2, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					}
					if (__LIB_4__::func_939(uParam0) == 0)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_7375.f_804))
						{
							ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_7375.f_804, "BillWilliamson", Local_424[iParam1 /*8*/], 0);
						}
					}
				}
				else if (iParam1 == 3)
				{
					iLocal_1452[7] = __LIB_4__::func_7(Local_424[iParam1 /*8*/], iLocal_1452[7], -1, 2, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					iLocal_2122 = PED::GET_PED_ACCURACY(Local_424[iParam1 /*8*/]);
					PED::_SET_PED_BODY_COMPONENT(Local_424[iParam1 /*8*/], joaat("META_OUTFIT_DEFAULT"));
					PED::_UPDATE_PED_VARIATION(Local_424[iParam1 /*8*/], false, true, true, true, false);
					__LIB_1__::func_991(Local_424[iParam1 /*8*/], 0);
					func_1921(uParam0, Local_424[iParam1 /*8*/], 374347, 0, "ALLY_HERCULE", 67108863, 1, 3, 28);
				}
				else if (iParam1 == 6)
				{
					iLocal_1452[8] = __LIB_4__::func_7(Local_424[iParam1 /*8*/], iLocal_1452[8], -1, 2, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					PED::_SET_PED_BODY_COMPONENT(Local_424[iParam1 /*8*/], joaat("META_OUTFIT_DEFAULT"));
					PED::_UPDATE_PED_VARIATION(Local_424[iParam1 /*8*/], false, true, true, true, false);
					__LIB_1__::func_991(Local_424[iParam1 /*8*/], 0);
					ENTITY::SET_ENTITY_INVINCIBLE(Local_424[iParam1 /*8*/], true);
				}
				PED::SET_PED_CONFIG_FLAG(Local_424[iParam1 /*8*/], 229, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_424[iParam1 /*8*/], true);
				if (iParam1 == 3 || iParam1 == 6)
				{
					func_1252(uParam0, iParam1, 1);
				}
				if (__LIB_5__::func_281(uParam0, Local_424[iParam1 /*8*/], &iVar5))
				{
					__LIB_5__::func_72(&(uParam0->f_5423[iVar5 /*65*/]), 256);
				}
				func_1221(iParam1, 1);
				Local_424[iParam1 /*8*/].f_3 = 7;
			}
			break;
		case 7:
			return true;
		case 8:
			return false;
	}
	return false;
}

void func_1419(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_1923(iParam0);
			break;
		case 1:
			func_1924(iParam0);
			break;
		case 2:
			func_1925(iParam0);
			break;
		case 3:
			func_1926(iParam0);
			break;
		case 4:
			func_1927(iParam0);
			break;
		case 5:
			func_1928(iParam0);
			break;
		case 6:
			func_1929(iParam0);
			break;
		case 7:
			func_1930(iParam0);
			break;
			break;
		default:
			break;
	}
}

char* func_1420(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				return "script@story@SMG2@LEADOUT@INT@leadout";
			}
			else if (iParam1 == 1)
			{
				return "pl_leadout";
			}
			break;
		case 1:
			if (iParam1 == 0)
			{
				return "script@story@SMG2@IG@IG2_Bill_Sees_Incoming_Men@IG2_Bill_Sees_Incoming_Men";
			}
			else if (iParam1 == 1)
			{
				return "pbl_Bill_Sees_Incoming_Men";
			}
			break;
		case 2:
			if (iParam1 == 0)
			{
				return "script@story@smg2@ig@ig3_cannon@ig3_cannon_p1_hercule";
			}
			else if (iParam1 == 1)
			{
				return "pbl_hercule_push_intro";
			}
			else if (iParam1 == 2)
			{
				return "pbl_Both_Push_Cannon";
			}
			else if (iParam1 == 3)
			{
				return "pbl_flinch_left";
			}
			else if (iParam1 == 4)
			{
				return "pbl_flinch_right";
			}
			else if (iParam1 == 5)
			{
				return "pbl_hercule_callover";
			}
			else if (iParam1 == 6)
			{
				return "pbl_push_idle_v01";
			}
			else if (iParam1 == 7)
			{
				return "pbl_push_idle_v02";
			}
			else if (iParam1 == 8)
			{
				return "pbl_push_idle_v03";
			}
			else if (iParam1 == 9)
			{
				return "pbl_push_idle_v04";
			}
			break;
		case 3:
			if (iParam1 == 0)
			{
				return "script@story@smg2@ig@ig3_cannon@ig3_cannon_p2_frenchman";
			}
			else if (iParam1 == 1)
			{
				return "pbl_idle_v01";
			}
			else if (iParam1 == 2)
			{
				return "pbl_idle_v02";
			}
			else if (iParam1 == 3)
			{
				return "pbl_idle_v03";
			}
			else if (iParam1 == 4)
			{
				return "pbl_Get_This_Working_Properly_LEFT";
			}
			else if (iParam1 == 5)
			{
				return "pbl_Get_This_Working_Properly_RIGHT";
			}
			else if (iParam1 == 6)
			{
				return "pbl_Flinch_01";
			}
			break;
		case 4:
			if (iParam1 == 0)
			{
				return "script@story@smg2@ig@ig4_dutch_holds_off_at_door@ig4_dutch_holds_off_at_door";
			}
			else if (iParam1 == 1)
			{
				return "pbl_dutch_holds_off_at_door";
			}
			break;
		case 5:
			if (iParam1 == 0)
			{
				return "script@story@smg2@ig@ig_hercule_react_to_destruction@ig_hercule_react_to_destruction";
			}
			else if (iParam1 == 1)
			{
				return "pbl_loopWait";
			}
			else if (iParam1 == 2)
			{
				return "pbl_react";
			}
			break;
		case 6:
			if (iParam1 == 0)
			{
				return "script@story@smg2@leadin@mcs_4@leadin_playlist";
			}
			else if (iParam1 == 1)
			{
				return "pl_gangAtWall";
			}
			else if (iParam1 == 2)
			{
				return "pl_leadin_Wait";
			}
			else if (iParam1 == 3)
			{
				return "pl_leadin_NoWait";
			}
			else if (iParam1 == 4)
			{
				return "pl_leadin_after_nowait";
			}
			break;
		case 7:
			if (iParam1 == 0)
			{
				return "script@story@SMG2@IG@IG_CME_Start@smuggler2_cme";
			}
			else if (iParam1 == 1)
			{
				return "";
			}
			break;
	}
	if (iParam1 == 0 || iParam1 == 1)
	{
	}
	return "";
}

void func_1421(int iParam0, bool bParam1)
{
	if (!ITEMSET::IS_ITEMSET_VALID(Local_14.f_90))
	{
		Local_14.f_90 = ITEMSET::CREATE_ITEMSET(true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_91[0]) && (iParam0 == -1 || iParam0 == 0))
	{
		Local_14.f_91[0] = OBJECT::CREATE_OBJECT(joaat("P_CRATECONF01X"), 1003.448f, -6750.794f, 62.108f, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(Local_14.f_91[0], 0f, 0f, 3.224f, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_14.f_91[0], bParam1);
	}
	__LIB_5__::func_510(Local_14.f_91[0], Local_14);
	__LIB_5__::func_510(Local_14.f_91[0], Local_14.f_90);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_91[1]) && (iParam0 == -1 || iParam0 == 1))
	{
		Local_14.f_91[1] = OBJECT::CREATE_OBJECT(joaat("P_CRATECONF01X"), 1003.812f, -6752.185f, 62.1264f, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(Local_14.f_91[1], 0f, 0f, 36.724f, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_14.f_91[1], bParam1);
	}
	__LIB_5__::func_510(Local_14.f_91[1], Local_14);
	__LIB_5__::func_510(Local_14.f_91[1], Local_14.f_90);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_91[2]) && (iParam0 == -1 || iParam0 == 2))
	{
		Local_14.f_91[2] = OBJECT::CREATE_OBJECT(joaat("P_CRATECONF01X"), 1004.617f, -6753.162f, 62.1264f, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(Local_14.f_91[2], 0f, 0f, 13.724f, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_14.f_91[2], bParam1);
	}
	__LIB_5__::func_510(Local_14.f_91[2], Local_14);
	__LIB_5__::func_510(Local_14.f_91[2], Local_14.f_90);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_91[3]) && (iParam0 == -1 || iParam0 == 3))
	{
		Local_14.f_91[3] = OBJECT::CREATE_OBJECT(joaat("P_CRATECONF01X"), 1002.309f, -6747.31f, 62.1264f, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(Local_14.f_91[3], 0f, 0f, 36.2246f, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_14.f_91[3], bParam1);
	}
	__LIB_5__::func_510(Local_14.f_91[3], Local_14);
	__LIB_5__::func_510(Local_14.f_91[3], Local_14.f_90);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_91[4]) && (iParam0 == -1 || iParam0 == 4))
	{
		Local_14.f_91[4] = OBJECT::CREATE_OBJECT(joaat("P_CRATECONF01X"), 1004.622f, -6757.693f, 62.1065f, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(Local_14.f_91[4], 0f, 0f, -98.7563f, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_14.f_91[4], bParam1);
	}
	__LIB_5__::func_510(Local_14.f_91[4], Local_14);
	__LIB_5__::func_510(Local_14.f_91[4], Local_14.f_90);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_91[5]) && (iParam0 == -1 || iParam0 == 5))
	{
		Local_14.f_91[5] = OBJECT::CREATE_OBJECT(joaat("P_CRATECONF01X"), 1007.181f, -6746.436f, 60.3264f, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(Local_14.f_91[5], 0f, 0f, 25.2243f, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_14.f_91[5], bParam1);
	}
	__LIB_5__::func_510(Local_14.f_91[5], Local_14);
	__LIB_5__::func_510(Local_14.f_91[5], Local_14.f_90);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_91[6]) && (iParam0 == -1 || iParam0 == 6))
	{
		Local_14.f_91[6] = OBJECT::CREATE_OBJECT(joaat("P_CRATECONF01X"), 1002.735f, -6740.326f, 57.3157f, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(Local_14.f_91[6], 0f, 0f, 117.224f, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_14.f_91[6], bParam1);
	}
	__LIB_5__::func_510(Local_14.f_91[6], Local_14);
	__LIB_5__::func_510(Local_14.f_91[6], Local_14.f_90);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_91[7]) && (iParam0 == -1 || iParam0 == 7))
	{
		Local_14.f_91[7] = OBJECT::CREATE_OBJECT(joaat("P_CRATECONF01X"), 1005.908f, -6754.802f, 62.0777f, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(Local_14.f_91[7], 0f, 0f, -18.7755f, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_14.f_91[7], bParam1);
	}
	__LIB_5__::func_510(Local_14.f_91[7], Local_14);
	__LIB_5__::func_510(Local_14.f_91[7], Local_14.f_90);
}

void func_1422(int iParam0, bool bParam1)
{
	if (!ITEMSET::IS_ITEMSET_VALID(Local_14.f_100))
	{
		Local_14.f_100 = ITEMSET::CREATE_ITEMSET(true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_101[0]) && (iParam0 == -1 || iParam0 == 0))
	{
		Local_14.f_101[0] = OBJECT::CREATE_OBJECT(joaat("P_CRATECONF01X"), 992.2631f, -6740.058f, 62.1353f, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(Local_14.f_101[0], 0f, 0f, -35.7954f, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_14.f_101[0], bParam1);
	}
	__LIB_5__::func_510(Local_14.f_101[0], Local_14);
	__LIB_5__::func_510(Local_14.f_101[0], Local_14.f_100);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_101[1]) && (iParam0 == -1 || iParam0 == 1))
	{
		Local_14.f_101[1] = OBJECT::CREATE_OBJECT(joaat("P_CRATECONF01X"), 991.5002f, -6740.151f, 62.1378f, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(Local_14.f_101[1], 0f, 0f, 140.2235f, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_14.f_101[1], bParam1);
	}
	__LIB_5__::func_510(Local_14.f_101[1], Local_14);
	__LIB_5__::func_510(Local_14.f_101[1], Local_14.f_100);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_101[2]) && (iParam0 == -1 || iParam0 == 2))
	{
		Local_14.f_101[2] = OBJECT::CREATE_OBJECT(joaat("P_CRATECONF01X"), 988.436f, -6742.339f, 62.1348f, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(Local_14.f_101[2], 0f, 0f, 125.2238f, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_14.f_101[2], bParam1);
	}
	__LIB_5__::func_510(Local_14.f_101[2], Local_14);
	__LIB_5__::func_510(Local_14.f_101[2], Local_14.f_100);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_101[3]) && (iParam0 == -1 || iParam0 == 3))
	{
		Local_14.f_101[3] = OBJECT::CREATE_OBJECT(joaat("P_CRATECONF01X"), 989.223f, -6741.794f, 62.1374f, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(Local_14.f_101[3], 0f, 0f, 129.2239f, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_14.f_101[3], bParam1);
	}
	__LIB_5__::func_510(Local_14.f_101[3], Local_14);
	__LIB_5__::func_510(Local_14.f_101[3], Local_14.f_100);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_101[4]) && (iParam0 == -1 || iParam0 == 4))
	{
		Local_14.f_101[4] = OBJECT::CREATE_OBJECT(joaat("P_CRATECONF01X"), 992.7148f, -6739.218f, 62.1411f, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(Local_14.f_101[4], 0f, 0f, 163.2036f, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_14.f_101[4], bParam1);
	}
	__LIB_5__::func_510(Local_14.f_101[4], Local_14);
	__LIB_5__::func_510(Local_14.f_101[4], Local_14.f_100);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_101[5]) && (iParam0 == -1 || iParam0 == 5))
	{
		Local_14.f_101[5] = OBJECT::CREATE_OBJECT(joaat("P_CRATECONF01X"), 991.9713f, -6739.394f, 62.1362f, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(Local_14.f_101[5], 0f, 0f, 158.4994f, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_14.f_101[5], bParam1);
	}
	__LIB_5__::func_510(Local_14.f_101[5], Local_14);
	__LIB_5__::func_510(Local_14.f_101[5], Local_14.f_100);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_101[6]) && (iParam0 == -1 || iParam0 == 6))
	{
		Local_14.f_101[6] = OBJECT::CREATE_OBJECT(joaat("P_CRATECONF01X"), 992.0002f, -6739.835f, 62.3361f, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(Local_14.f_101[6], 0f, 0f, 133.2234f, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_14.f_101[6], bParam1);
	}
	__LIB_5__::func_510(Local_14.f_101[6], Local_14);
	__LIB_5__::func_510(Local_14.f_101[6], Local_14.f_100);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_101[7]) && (iParam0 == -1 || iParam0 == 7))
	{
		Local_14.f_101[7] = OBJECT::CREATE_OBJECT(joaat("P_CRATECONF01X"), 988.8374f, -6742.037f, 62.3379f, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(Local_14.f_101[7], 0f, 0f, 117.2235f, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_14.f_101[7], bParam1);
	}
	__LIB_5__::func_510(Local_14.f_101[7], Local_14);
	__LIB_5__::func_510(Local_14.f_101[7], Local_14.f_100);
}

Vector3 func_1423(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return Local_1700.f_370[0 /*3*/];
		case 2:
			return Local_1700.f_370[1 /*3*/];
		case 3:
			return Local_1700.f_370[2 /*3*/];
		case 4:
			return Local_1700.f_370[3 /*3*/];
		case 5:
		case 25:
			return Local_1700.f_370[4 /*3*/];
	}
	return 0f, 0f, 0f;
}

int func_1425(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam0;
	while (iVar0 <= iParam1)
	{
		if (!Local_424[iVar0 /*8*/].f_2 == 0)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_1426(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 9:
		case 10:
			*iParam1 = 603720014;
			break;
		case 11:
			*iParam1 = 1255364348;
			break;
		default:
			return false;
	}
	return true;
}

bool func_1427(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			return true;
		case 8:
			return 2;
	}
	return false;
}

void func_1430(var uParam0)
{
	var uVar0;
	vector3 vVar1;
	vector3 vVar4;
	func_178(15);
	switch (__LIB_4__::func_939(uParam0))
	{
		case 0:
			ENTITY::SET_ENTITY_VISIBLE(Local_424[6 /*8*/], true);
			ENTITY::SET_ENTITY_COLLISION(Local_424[6 /*8*/], true, false);
			ENTITY::FREEZE_ENTITY_POSITION(Local_424[6 /*8*/], false);
			AUDIO::STOP_PED_SPEAKING(Local_424[6 /*8*/], false);
			break;
		case 2:
			if (func_384(uParam0) == 0)
			{
				func_1933();
			}
			func_1934(0, 1);
			func_174();
			func_854(uParam0);
			TASK::CLEAR_PED_TASKS(Local_424[2 /*8*/], true, false);
			TASK::CLEAR_PED_SECONDARY_TASK(Local_424[2 /*8*/]);
			func_1935(vLocal_2104.x, func_470(8, 1), 2, 1073741824 /* Float: 2f */);
			break;
		case 4:
			CLOCK::SET_CLOCK_TIME(18, 0, 0);
			func_435(uParam0, 27, 41);
			func_435(uParam0, 42, 62);
			vVar1 = { func_472(7, 3) };
			if (WATER::GET_WATER_HEIGHT(vVar1, &uVar0))
			{
				vVar1.f_2 = uVar0;
			}
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_1700.f_1, vVar1, func_1255(7, 3), true, false, true);
			PED::_0x9851DE7AEC10B4E1(func_472(4, 0), 200f, 0, 0);
			break;
		case 5:
			CLOCK::SET_CLOCK_TIME(19, 0, 0);
			CLOCK::PAUSE_CLOCK(true, 0);
			func_849(12);
			WEAPON::REMOVE_ALL_PED_WEAPONS(Local_424[3 /*8*/], true, true);
			if (MAP::DOES_BLIP_EXIST(vLocal_2104.y))
			{
				MAP::REMOVE_BLIP(&(vLocal_2104.f_1));
			}
			func_1302();
			vVar4 = { 887.6f, -6720.7f, 40.9f };
			WATER::GET_WATER_HEIGHT(ENTITY::GET_ENTITY_COORDS(Local_1700.f_1, true, false), &(vVar4.f_2));
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_1700.f_1, vVar4, -21.5f, true, false, true);
			ENTITY::FREEZE_ENTITY_POSITION(Local_1700.f_1, true);
			break;
		case 25:
			if (CAM::DOES_CAM_EXIST(iLocal_1494[2]))
			{
				func_441(2);
			}
			CLOCK::SET_CLOCK_TIME(19, 0, 0);
			CLOCK::PAUSE_CLOCK(true, 0);
			func_849(12);
			if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
			{
				PED::_0xE0B61ED8BB37712F(Global_35);
			}
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 1, false, false);
			WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
			break;
		default:
			break;
	}
}

int func_1431(var uParam0)
{
	int iVar0;
	bool bVar1;
	iVar0 = 4;
	while (iVar0 <= 8)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1233[iVar0]))
		{
			if (!func_1937(uParam0, func_1936(iVar0, 0), &(iLocal_1233[iVar0])))
			{
				func_858(4, 0);
			}
		}
		iVar0++;
	}
	if (__LIB_10__::func_965(uParam0, Global_35, "ARTHUR", 0, 1, 1))
	{
		if (Local_2328[0 /*5*/].f_1 == 8)
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_2328[0 /*5*/], "p_barstool01x", iLocal_1233[4], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_2328[0 /*5*/], "p_chair02x", iLocal_1233[5], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_2328[0 /*5*/], "p_chair02x^1", iLocal_1233[6], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_2328[0 /*5*/], "p_chair02x^2", iLocal_1233[7], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_2328[0 /*5*/], "p_chair02x^3", iLocal_1233[8], 0);
		}
		if (func_384(uParam0) == 1)
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, func_472(0, 0), func_1255(0, 0), true, false, true);
			ENTITY::_0x9587913B9E772D29(Global_35, 0);
		}
		func_1199(0, 1);
	}
	if (__LIB_10__::func_965(uParam0, iLocal_1233[4], "p_barstool01x", 0, 1, 1))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iLocal_1233[4]));
		func_436(func_1234(4));
	}
	if (__LIB_10__::func_965(uParam0, iLocal_1233[5], "p_chair02x", 0, 1, 1))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iLocal_1233[5]));
		func_436(func_1234(5));
	}
	if (__LIB_10__::func_965(uParam0, iLocal_1233[6], "p_chair02x^1", 0, 1, 1))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iLocal_1233[6]));
		func_436(func_1234(6));
	}
	if (__LIB_10__::func_965(uParam0, iLocal_1233[7], "p_chair02x^2", 0, 1, 1))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iLocal_1233[7]));
		func_436(func_1234(7));
	}
	if (__LIB_10__::func_965(uParam0, iLocal_1233[8], "p_chair02x^3", 0, 1, 1))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iLocal_1233[8]));
		func_436(func_1234(8));
	}
	bVar1 = false;
	if (bVar1)
	{
		func_853(0);
	}
	return 1;
}

int func_1432(var uParam0)
{
	int iVar0;
	if (!func_164(39))
	{
		if (__LIB_4__::func_586(&(uParam0->f_7375)) >= 10113)
		{
			func_1200(986.9f, -6752.3f, 62.1f, -1082130432 /* Float: -1f */);
			func_849(39);
		}
	}
	if (!func_164(44))
	{
		if (__LIB_10__::func_965(uParam0, Global_35, "ARTHUR", 0, 1, 1))
		{
			PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 2f, 2000, -100f, false, false);
			__LIB_10__::func_930(uParam0, Local_424[2 /*8*/], joaat("COLOR_NEUTRAL"), joaat("BLIP_STYLE_COMPANION"), 1, 1);
			MAP::_BLIP_SET_MODIFIER(Local_424[3 /*8*/].f_1, -401963276);
			func_849(44);
		}
	}
	if (__LIB_10__::func_965(uParam0, Local_424[2 /*8*/], "Dutch", 0, 1, 1))
	{
		TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_424[2 /*8*/], func_438(24), 0, 4194336, -1, 0, 0, -1);
		PED::_0x2208438012482A1A(Local_424[2 /*8*/], true, false);
		PED::FORCE_PED_MOTION_STATE(Local_424[2 /*8*/], joaat("MOTIONSTATE_RUN"), false, 0, false);
		func_1221(2, 26);
	}
	if (__LIB_10__::func_965(uParam0, Local_424[3 /*8*/], "Hercule", 0, 1, 1))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Local_424[3 /*8*/], iLocal_1452[7], true, 0, false, false);
		func_1695(Local_424[3 /*8*/], 44, 1090519040 /* Float: 8f */, -1056964608 /* Float: -8f */, -1, 24, 0);
		TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_424[3 /*8*/], func_438(24), 0, 0, -1, 0, 0, -1);
		PED::_0x2208438012482A1A(Local_424[3 /*8*/], true, false);
		PED::FORCE_PED_MOTION_STATE(Local_424[3 /*8*/], joaat("MOTIONSTATE_RUN"), false, 0, false);
		func_1221(3, 26);
	}
	if (__LIB_10__::func_965(uParam0, Local_424[27 /*8*/], "S_M_M_FussarHenchman_01", 0, 1, 1))
	{
		iVar0 = 27;
		while (iVar0 <= 41)
		{
			func_1935(Local_424[iVar0 /*8*/], func_217(iVar0, 1, 2), 2, 1073741824 /* Float: 2f */);
			iVar0++;
		}
	}
	return 1;
}

int func_1433(var uParam0)
{
	func_1289(uParam0);
	if (__LIB_10__::func_965(uParam0, Global_35, "ARTHUR", 0, 1, 1))
	{
		PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 2f, 1500, 0f, true, false);
	}
	if (__LIB_10__::func_965(uParam0, Local_424[3 /*8*/], "Hercule", 0, 1, 1))
	{
		WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Local_424[3 /*8*/], 10, true);
		WEAPON::SET_CURRENT_PED_WEAPON(Local_424[3 /*8*/], iLocal_1452[7], true, 0, false, false);
		TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_424[3 /*8*/], func_438(32), 0, 0, -1, 0, 0, -1);
	}
	if (__LIB_10__::func_965(uParam0, Local_1700.f_1, "SMUGGLER02", 0, 1, 1))
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_1700.f_1, func_472(7, 3), func_1255(7, 3), true, false, true);
	}
	return 1;
}

int func_1434(var uParam0)
{
	CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
	CAM::_0xE296208C273BD7F0(0, -1, 0, 17, 1, 0);
	func_1296(uParam0);
	if (__LIB_10__::func_965(uParam0, Global_35, "ARTHUR", 0, 1, 1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(vLocal_2104.x))
		{
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(vLocal_2104.x, true);
			if (!PED::IS_PED_IN_VEHICLE(Global_35, vLocal_2104.x, false))
			{
				PED::SET_PED_INTO_VEHICLE(Global_35, vLocal_2104.x, -1);
			}
			WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(Global_35, joaat("WEAPON_TURRET_REVOLVING_CANNON"));
		}
	}
	if (__LIB_10__::func_965(uParam0, Local_424[5 /*8*/], "BillWilliamson", 0, 1, 1))
	{
		func_1939(5);
		func_1221(5, 9);
	}
	if (__LIB_10__::func_965(uParam0, Local_424[6 /*8*/], "CS_Frenchman", 0, 1, 1))
	{
		func_1939(6);
		func_1221(6, 9);
	}
	if (__LIB_10__::func_965(uParam0, Local_424[3 /*8*/], "Hercule", 0, 1, 1))
	{
		func_1939(3);
		func_1221(3, 9);
		func_1940();
	}
	if (__LIB_10__::func_965(uParam0, Local_424[4 /*8*/], "MicahBell", 0, 1, 1))
	{
		func_1939(4);
		func_1221(4, 9);
	}
	if (__LIB_5__::func_448(&(uParam0->f_7375), 1))
	{
		__LIB_3__::func_595(ENTITY::GET_ENTITY_COORDS(Local_1700.f_1, true, false));
	}
	if (!ENTITY::GET_ENTITY_COLLISION_DISABLED(Local_14.f_101[0]))
	{
		if (__LIB_10__::func_965(uParam0, Local_14.f_101[0], "p_crateconf01x", 0, 1, 1))
		{
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_7375.f_804))
			{
				if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_7375.f_804, "p_crateconf01x"))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_7375.f_804, "p_crateconf01x", Local_14.f_101[0]);
				}
			}
			OBJECT::DELETE_OBJECT(&(Local_14.f_101[0]));
		}
	}
	return 1;
}

int func_1435(var uParam0)
{
	CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME_2();
	func_853(7);
	if (__LIB_10__::func_965(uParam0, Global_35, 0, 0, 1, 1))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_2328[7 /*5*/], "Warship", Local_1700.f_1, 0);
		func_1199(7, 1);
	}
	return 1;
}

void func_1441(var uParam0)
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	if ((iLocal_2111 == 0 && iLocal_2113 == 0) && iLocal_2112 == 0)
	{
		return;
	}
	if (iLocal_2111 != 0)
	{
		Var0 = { func_1685(iLocal_2111) };
		if (__LIB_11__::func_365(uParam0, Var0, Var0.f_1, 0, 0))
		{
			iLocal_2111 = 0;
		}
	}
	if (iLocal_2113 != 0)
	{
		Var2 = { func_1685(iLocal_2113) };
		if (__LIB_11__::func_365(uParam0, Var2, Var2.f_1, 0, 0))
		{
			iLocal_2113 = 0;
		}
	}
	if (iLocal_2112 != 0)
	{
		Var4 = { func_1685(iLocal_2112) };
		if (__LIB_11__::func_365(uParam0, Var4, Var4.f_1, 0, 0))
		{
			iLocal_2112 = 0;
		}
	}
}

void func_1442(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (func_164(118))
	{
		return;
	}
	if (__LIB_4__::func_939(uParam0) == 25)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Local_1700.f_1) || ENTITY::IS_ENTITY_DEAD(Local_424[12 /*8*/]))
	{
		return;
	}
	if (!func_164(2))
	{
		if ((((TASK::WAYPOINT_RECORDING_GET_COORD(func_438(23), 0, &(Local_1700.f_370[0 /*3*/])) && TASK::WAYPOINT_RECORDING_GET_COORD(func_438(23), 1, &(Local_1700.f_370[1 /*3*/]))) && TASK::WAYPOINT_RECORDING_GET_COORD(func_438(23), 2, &(Local_1700.f_370[2 /*3*/]))) && TASK::WAYPOINT_RECORDING_GET_COORD(func_438(23), 3, &(Local_1700.f_370[3 /*3*/]))) && TASK::WAYPOINT_RECORDING_GET_COORD(func_438(23), 4, &(Local_1700.f_370[4 /*3*/])))
		{
			Local_1700.f_367 = (TASK::GET_WAYPOINT_DISTANCE_ALONG_ROUTE(func_438(23), 4) - TASK::GET_WAYPOINT_DISTANCE_ALONG_ROUTE(func_438(23), 0));
			func_849(2);
		}
		else
		{
			return;
		}
	}
	Local_1700.f_367.f_1 = __LIB_0__::func_94(Local_1700.f_1, func_1423(5), 1);
	Local_1700.f_402 = (Local_1700.f_367 - Local_1700.f_367.f_1);
	Local_1700.f_367.f_2 = ((Local_1700.f_402 / Local_1700.f_367) * 100f);
	switch (__LIB_4__::func_939(uParam0))
	{
		case 0:
			Local_1700.f_399 = Local_1700.f_393;
			break;
		case 1:
			iVar0 = __LIB_11__::func_825(13, 26);
			iVar1 = Local_1700.f_386;
			Local_1700.f_389 = ((BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT(iVar0)) * 100f);
			Local_1700.f_399 = (Local_1700.f_393 + ((Local_1700.f_394 - Local_1700.f_393) * (Local_1700.f_389 / 100f)));
			break;
		case 2:
			iVar0 = __LIB_11__::func_825(27, 41);
			iVar1 = Local_1700.f_387;
			Local_1700.f_390 = ((BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT(iVar0)) * 100f);
			Local_1700.f_399 = (Local_1700.f_394 + ((Local_1700.f_395 - Local_1700.f_394) * (Local_1700.f_390 / 100f)));
			break;
		case 3:
			iVar0 = __LIB_11__::func_825(42, 62);
			iVar1 = func_1774(42, 62, 18);
			Local_1700.f_391 = ((BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT(iVar0)) * 100f);
			Local_1700.f_399 = (Local_1700.f_395 + ((Local_1700.f_396 - Local_1700.f_395) * (Local_1700.f_391 / 100f)));
			break;
		case 4:
			if (!ENTITY::IS_ENTITY_DEAD(Global_35) && func_1233(32))
			{
				if (TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(func_438(32), ENTITY::GET_ENTITY_COORDS(Global_35, true, false), &iVar2) && TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(func_438(32), &iVar3))
				{
					Local_1700.f_392 = ((BUILTIN::TO_FLOAT(iVar2) / BUILTIN::TO_FLOAT(iVar3)) * 100f);
					if (func_1180(30, 0))
					{
					}
				}
			}
			break;
	}
	Local_1700.f_398 = ((Local_1700.f_399 - Local_1700.f_367.f_2) * -1f);
	Local_1700.f_401 = ((Local_1700.f_398 * -1f) / 2f);
	Local_1700.f_401 = __LIB_0__::func_251(Local_1700.f_401, 0.25f, 5f);
	if (Local_1700.f_398 > 5f)
	{
		Local_1700.f_401 = 0f;
	}
	Local_1700.f_400 = (1f * Local_1700.f_401);
	switch (Local_1700)
	{
		case 2:
			if (!PED::IS_PED_IN_VEHICLE(Local_424[12 /*8*/], Local_1700.f_1, false))
			{
				PED::SET_PED_INTO_VEHICLE(Local_424[12 /*8*/], Local_1700.f_1, -1);
			}
			VEHICLE::SET_BOAT_ANCHOR(Local_1700.f_1, false);
			PED::SET_PED_CONFIG_FLAG(Local_424[12 /*8*/], 168, false);
			PED::SET_PED_CONFIG_FLAG(Local_424[12 /*8*/], 113, true);
			TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_424[12 /*8*/], Local_1700.f_1, func_438(23), 0, 0, 6680, -1, -1082130432 /* Float: -1f */, 0, 1073741824 /* Float: 2f */, 0);
			Local_1700 = 3;
			break;
		case 3:
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1700.f_1, 0))
			{
				TASK::VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_1700.f_1, Local_1700.f_400);
				TASK::SET_DRIVE_TASK_CRUISE_SPEED(Local_424[12 /*8*/], Local_1700.f_400);
			}
			break;
		case 0:
			if (!PED::IS_PED_IN_VEHICLE(Local_424[12 /*8*/], Local_1700.f_1, false))
			{
				PED::SET_PED_INTO_VEHICLE(Local_424[12 /*8*/], Local_1700.f_1, -1);
			}
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1700.f_1, 0))
			{
				TASK::VEHICLE_WAYPOINT_PLAYBACK_PAUSE(Local_1700.f_1);
			}
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_1700.f_1, 1);
			ENTITY::SET_ENTITY_LOD_DIST(Local_1700.f_1, 500);
			VEHICLE::SET_BOAT_ANCHOR(Local_1700.f_1, true);
			Local_1700 = 1;
			break;
		case 1:
			break;
	}
	iVar4 = 0;
	while (iVar4 < Local_1700.f_3)
	{
		func_1944(iVar4, uParam0);
		iVar4++;
	}
}

void func_1453(var uParam0)
{
	struct<8> Var0;
	func_1956(uParam0);
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
	__LIB_0__::func_37(&(uParam0->f_13106));
	__LIB_1__::func_148(&(uParam0->f_13112));
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

void func_1483(int iParam0, int iParam1)
{
	__LIB_0__::func_8(&(Local_424[iParam0 /*8*/].f_4), iParam1);
}

float func_1489(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 82.9502f;
				case 1:
					return 359.6805f;
				case 2:
					return 293.4573f;
				case 3:
					return 61.234f;
				case 4:
					return 336.998f;
				case 5:
					return 136.516f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 124f;
				case 1:
					return 119.6804f;
				case 2:
					return 129.4574f;
				case 3:
					return 119.2339f;
				case 4:
					return 114.9979f;
				case 5:
					return 122.516f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 254.6873f;
				case 1:
					return 265.6806f;
				case 2:
					return 105.4573f;
				case 3:
					return 87.234f;
				case 4:
					return 248.9981f;
				case 5:
					return 104.5159f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 172.6863f;
				case 1:
					return 161.6801f;
				case 2:
					return 111.4573f;
				case 3:
					return 111.2339f;
				case 4:
					return 162.9975f;
				case 5:
					return 78.5159f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 319.5178f;
				case 1:
					return 110.3637f;
				case 2:
					return 109.4573f;
				case 3:
					return 101.234f;
				case 4:
					return 314.8305f;
				case 5:
					return 78.5159f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 54.6872f;
				case 1:
					return 139.6803f;
				case 2:
					return 113.4573f;
				case 3:
					return 115.2339f;
				case 4:
					return 50.2205f;
				case 5:
					return 86.5159f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 142.6873f;
				case 1:
					return 325.6805f;
				case 2:
					return 13.4574f;
				case 3:
					return 45.234f;
				case 4:
					return 218.9983f;
				case 5:
					return 98.5159f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 334.1541f;
				case 1:
					return 330.1022f;
				case 2:
					return 318.0379f;
				case 3:
					return 305.9057f;
				case 4:
					return 322.0194f;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return 88.3755f;
				case 1:
					return 82.1039f;
				case 2:
					return 77.0304f;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 251.3266f;
				case 1:
					return 279.2639f;
				case 2:
					return 244.6508f;
				case 3:
					return 124.0942f;
				case 4:
					return 103.5374f;
				case 5:
					return 279.8314f;
				case 6:
					return 164.5602f;
				case 7:
					return 331.5936f;
				case 8:
					return 141.1564f;
			}
			break;
	}
	return 0f;
}

Vector3 func_1490(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 979.9342f, -6797.02f, 49.2271f;
				case 1:
					return 978.0778f, -6794.162f, 49.2271f;
				case 2:
					return 979.1184f, -6798.959f, 49.2271f;
				case 3:
					return 977.6172f, -6795.315f, 49.2271f;
				case 4:
					return 978.3862f, -6801.007f, 49.2271f;
				case 5:
					return 980.8785f, -6795.274f, 49.2271f;
				case 6:
					return 953.9827f, -6795.396f, 40.96f;
				case 7:
					return 965.7714f, -6793.176f, 41.71f;
				case 8:
					return 958.0261f, -6788.554f, 41.21f;
				case 9:
					return 959.0781f, -6784.94f, 41.21f;
				case 10:
					return 962.9297f, -6791.29f, 41.46f;
				case 11:
					return 960.134f, -6794.783f, 41.21f;
				case 12:
					return 990.1394f, -6771.525f, 49.8f;
				case 13:
					return 987.1892f, -6768.902f, 50.05f;
				case 14:
					return 987.6424f, -6776.18f, 49.55f;
				case 15:
					return 982.8115f, -6781.656f, 49.3f;
				case 16:
					return 986.1832f, -6780.537f, 49.8f;
				case 17:
					return 984.7793f, -6780.304f, 49.8f;
				case 18:
					return 967.0449f, -6765.259f, 42.4f;
				case 19:
					return 972.6996f, -6771.863f, 41.9f;
				case 20:
					return 960.6893f, -6767.938f, 41.4f;
				case 21:
					return 960.5604f, -6774.538f, 41.15f;
				case 22:
					return 963.3939f, -6770.552f, 41.4f;
				case 23:
					return 971.4908f, -6776.846f, 41.65f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 968.3439f, -6767.657f, 42.6124f;
				case 1:
					return 968.1219f, -6770.484f, 42.1124f;
				case 2:
					return 966.7755f, -6770.073f, 41.8624f;
				case 3:
					return 962.8395f, -6771.678f, 41.3624f;
				case 4:
					return 961.2583f, -6774.834f, 41.3624f;
				case 5:
					return 957.0259f, -6775.328f, 41.1124f;
				case 6:
					return 952.4851f, -6776.123f, 41.6124f;
				case 7:
					return 954.2078f, -6772.358f, 41.3624f;
				case 8:
					return 953.0194f, -6771.213f, 41.1124f;
				case 9:
					return 951.3905f, -6770.249f, 41.1124f;
				case 10:
					return 943.9454f, -6763.614f, 40.6124f;
				case 11:
					return 942.2866f, -6762.99f, 40.6124f;
				case 12:
					return 1000.033f, -6721.517f, 57.3624f;
				case 13:
					return 997.9953f, -6717.712f, 57.3624f;
				case 14:
					return 1000.033f, -6721.517f, 57.3624f;
				case 15:
					return 992.138f, -6721.535f, 54.3624f;
				case 16:
					return 989.3882f, -6726.119f, 54.1124f;
				case 17:
					return 987.9489f, -6722.666f, 54.3624f;
				case 18:
					return 978.8874f, -6733.195f, 49.3624f;
				case 19:
					return 980.4993f, -6735.761f, 49.1124f;
				case 20:
					return 977.7455f, -6747.26f, 46.3624f;
				case 21:
					return 977.4634f, -6747.317f, 46.1124f;
				case 22:
					return 977.4072f, -6756.425f, 45.6124f;
				case 23:
					return 979.8043f, -6755.226f, 45.6124f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 930.6068f, -6834.091f, 41.3624f;
				case 1:
					return 928.4884f, -6838.558f, 41.3624f;
				case 2:
					return 942.1075f, -6917.005f, 41.3624f;
				case 3:
					return 957.0643f, -6904.512f, 42.8624f;
				case 4:
					return 957.0643f, -6904.512f, 42.8624f;
				case 5:
					return 957.0643f, -6904.512f, 42.8624f;
				case 6:
					return 957.0643f, -6904.512f, 42.8624f;
				case 7:
					return 957.0643f, -6904.512f, 42.8624f;
				case 8:
					return 957.0643f, -6904.512f, 42.8624f;
				case 9:
					return 957.0643f, -6904.512f, 42.8624f;
				case 10:
					return 957.0643f, -6904.512f, 42.8624f;
				case 11:
					return 957.0643f, -6904.512f, 42.8624f;
				case 12:
					return 957.0643f, -6904.512f, 42.8624f;
				case 13:
					return 957.0643f, -6904.512f, 42.8624f;
				case 14:
					return 957.0643f, -6904.512f, 42.8624f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 961.8215f, -6761.292f, 41.1124f;
				case 1:
					return 959.7289f, -6763.207f, 41.1124f;
				case 2:
					return 961.3148f, -6774.035f, 41.1124f;
				case 3:
					return 960.0334f, -6775.755f, 41.1124f;
				case 4:
					return 958.1709f, -6779.125f, 41.1124f;
				case 5:
					return 957.0889f, -6781.806f, 40.8624f;
				case 6:
					return 965.538f, -6806.653f, 41.3624f;
				case 7:
					return 971.5276f, -6807.861f, 41.1124f;
				case 8:
					return 969.7952f, -6805.122f, 41.1124f;
				case 9:
					return 974.2216f, -6801.227f, 41.1124f;
				case 10:
					return 976.3091f, -6801.104f, 40.8624f;
				case 11:
					return 983.4248f, -6794.812f, 41.6124f;
				case 12:
					return 984.7457f, -6793.303f, 41.3624f;
				case 13:
					return 990.048f, -6787.197f, 41.1124f;
				case 14:
					return 991.009f, -6785.365f, 40.8624f;
				case 15:
					return 989.7423f, -6781.651f, 40.8624f;
				case 16:
					return 977.8362f, -6795.236f, 41.3624f;
				case 17:
					return 982.6619f, -6800.549f, 40.8624f;
				case 18:
					return 959.316f, -6798.509f, 41.1124f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 930.6068f, -6834.091f, 41.3624f;
				case 1:
					return 928.4884f, -6838.558f, 41.3624f;
				case 2:
					return 942.1075f, -6917.005f, 49.1124f;
				case 3:
					return 957.0643f, -6904.512f, 42.8624f;
				case 4:
					return 957.0643f, -6904.512f, 42.8624f;
				case 5:
					return 957.0643f, -6904.512f, 42.8624f;
				case 6:
					return 957.0643f, -6904.512f, 42.8624f;
				case 7:
					return 957.0643f, -6904.512f, 42.8624f;
				case 8:
					return 958.0806f, -6798.446f, 41.1124f;
				case 9:
					return 969.0887f, -6785.112f, 41.6124f;
				case 10:
					return 952.7899f, -6826.181f, 41.8624f;
				case 11:
					return 968.6645f, -6809.079f, 41.3624f;
				case 12:
					return 968.6645f, -6809.079f, 41.3624f;
				case 13:
					return 968.6645f, -6809.079f, 41.3624f;
				case 14:
					return 968.6645f, -6809.079f, 41.3624f;
				case 15:
					return 968.6645f, -6809.079f, 41.3624f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 995.367f, -6752.046f, 66.1124f;
				case 1:
					return 991.9081f, -6737.273f, 66.1124f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 1003.656f, -6748.544f, 66.6124f;
				case 1:
					return 1002.62f, -6744.626f, 65.1124f;
				case 2:
					return 1005.715f, -6751.4f, 66.3624f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 981.1745f, -6742.346f, 55.6565f;
				case 1:
					return 984.9858f, -6743.176f, 61.3271f;
				case 2:
					return 984.7648f, -6724.485f, 58.5271f;
				case 3:
					return 1009.639f, -6759.126f, 69.9771f;
				case 4:
					return 987.625f, -6741.455f, 62.4771f;
				case 5:
					return 996.8562f, -6730.639f, 66.7271f;
				case 6:
					return 1003.543f, -6746.453f, 67.0271f;
				case 7:
					return 998.1399f, -6748.148f, 66.7271f;
				case 8:
					return 996.58f, -6759.724f, 71.2271f;
				case 9:
					return 997.4036f, -6762.875f, 66.7271f;
				case 10:
					return 998.3972f, -6741.904f, 68.7271f;
				case 11:
					return 976.0752f, -6733.741f, 49.5771f;
				case 12:
					return 986.0823f, -6769.837f, 59.4771f;
				case 13:
					return 984.0613f, -6744.946f, 61.7271f;
				case 14:
					return 984.9922f, -6748.718f, 57.9771f;
				case 15:
					return 986.9342f, -6741.808f, 61.7271f;
				case 16:
					return 1002.17f, -6742.437f, 66.0271f;
				case 17:
					return 990.7627f, -6736.177f, 61.2271f;
				case 18:
					return 997.0049f, -6732.445f, 65.7271f;
				case 19:
					return 986.9201f, -6735.861f, 55.9771f;
				case 20:
					return 983.5436f, -6744.352f, 57.7271f;
				case 21:
					return 1000.657f, -6725.629f, 68.7271f;
				case 22:
					return 989.8856f, -6758.161f, 66.7271f;
				case 23:
					return 1006.435f, -6754.318f, 72.2271f;
				case 24:
					return 1002.856f, -6767.867f, 70.9771f;
				case 25:
					return 1001.087f, -6752.032f, 72.7271f;
				case 26:
					return 996.6595f, -6756.058f, 70.4771f;
				case 27:
					return 1004.881f, -6753.726f, 70.2271f;
				case 28:
					return 986.0368f, -6765.239f, 62.2271f;
				case 29:
					return 996.0692f, -6764.859f, 73.7271f;
				case 30:
					return 996.9907f, -6754.632f, 69.2271f;
				case 31:
					return 998.3292f, -6754.251f, 68.2271f;
				case 32:
					return 994.1089f, -6762.476f, 70.2271f;
				case 33:
					return 990.4796f, -6745.347f, 64.7271f;
				case 34:
					return 986.9807f, -6750.979f, 64.9065f;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return 988.741f, -6727.572f, 54.2271f;
				case 1:
					return 987.5684f, -6729.061f, 53.1565f;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 1005.023f, -6749.637f, 66.5565f;
				case 1:
					return 1002.633f, -6744.56f, 66.4771f;
				case 2:
					return 1009.205f, -6760.542f, 69.6771f;
				case 3:
					return 990.6274f, -6736.645f, 61.9771f;
				case 4:
					return 984.5542f, -6746.428f, 61.7271f;
				case 5:
					return 1017.325f, -6732.244f, 68.8771f;
				case 6:
					return 1006.87f, -6740.922f, 69.1771f;
				case 7:
					return 1005.659f, -6750.995f, 66.8271f;
				case 8:
					return 1008.362f, -6756.816f, 66.9771f;
				case 9:
					return 1004.332f, -6737.304f, 66.6771f;
				case 10:
					return 1016.506f, -6764.165f, 67.1271f;
				case 11:
					return 998.3524f, -6735.376f, 65.6271f;
				case 12:
					return 996.8091f, -6730.754f, 64.1271f;
				case 13:
					return 1001.039f, -6725.118f, 65.5771f;
				case 14:
					return 1003.136f, -6746.786f, 65.6271f;
				case 15:
					return 1003.888f, -6747.225f, 67.0771f;
				case 16:
					return 984.7379f, -6755.754f, 55.3771f;
				case 17:
					return 1006.152f, -6730.983f, 68.3771f;
				case 18:
					return 1000.664f, -6725.815f, 69.0771f;
				case 19:
					return 986.0991f, -6742.389f, 61.6271f;
				case 20:
					return 1007.267f, -6754.476f, 66.0271f;
				case 21:
					return 1000.248f, -6759.772f, 57.4271f;
				case 22:
					return 987.507f, -6753.003f, 60.3771f;
				case 23:
					return 990.5414f, -6737.795f, 60.1271f;
				case 24:
					return 1000.771f, -6758.737f, 60.7271f;
				case 25:
					return 985.8252f, -6748.891f, 62.3771f;
				case 26:
					return 979.7799f, -6751.198f, 53.3771f;
				case 27:
					return 1001.38f, -6741.681f, 65.3771f;
				case 28:
					return 1000.659f, -6725.91f, 67.6771f;
				case 29:
					return 984.2259f, -6745.538f, 62.0271f;
				case 30:
					return 984.9335f, -6748.605f, 57.8771f;
				case 31:
					return 997.7167f, -6734f, 65.3771f;
				case 32:
					return 1009.287f, -6753.708f, 68.2271f;
				case 33:
					return 1009.438f, -6760.39f, 68.6271f;
				case 34:
					return 987.8018f, -6752.872f, 62.6565f;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return 974.8098f, -6757.376f, 46.9565f;
				case 1:
					return 981.356f, -6782.383f, 47.8271f;
				case 2:
					return 979.5864f, -6750.119f, 54.2271f;
				case 3:
					return 964.8f, -6759.144f, 44.7271f;
				case 4:
					return 946.3812f, -6778.938f, 48.0271f;
				case 5:
					return 984.8751f, -6757.693f, 52.7271f;
				case 6:
					return 980.9712f, -6753.048f, 53.1771f;
				case 7:
					return 980.5829f, -6771.402f, 49.7271f;
				case 8:
					return 983.2156f, -6769.565f, 52.7271f;
				case 9:
					return 978.7982f, -6752.359f, 49.7271f;
				case 10:
					return 974.1444f, -6794.752f, 49.4771f;
				case 11:
					return 978.6753f, -6789.555f, 48.7271f;
				case 12:
					return 982.8271f, -6778.055f, 49.5271f;
				case 13:
					return 972.7173f, -6794.995f, 46.7271f;
				case 14:
					return 982.2469f, -6766.666f, 47.4771f;
				case 15:
					return 978.3984f, -6750.688f, 51.7271f;
				case 16:
					return 979.9792f, -6759.925f, 47.9771f;
				case 17:
					return 944.5923f, -6771.106f, 40.5771f;
				case 18:
					return 982.3551f, -6787.465f, 45.7271f;
				case 19:
					return 973.1231f, -6758.965f, 46.6271f;
				case 20:
					return 967.6175f, -6755.637f, 46.3771f;
				case 21:
					return 948.6316f, -6778.875f, 43.4771f;
				case 22:
					return 963.8168f, -6753.02f, 42.1771f;
				case 23:
					return 967.3315f, -6744.829f, 44.9771f;
				case 24:
					return 978.8637f, -6745.038f, 52.4771f;
				case 25:
					return 972.0146f, -6751.098f, 46.3771f;
				case 26:
					return 987.568f, -6753.132f, 60.2271f;
				case 27:
					return 985.0831f, -6764.6f, 49.9771f;
				case 28:
					return 983.1939f, -6776.999f, 47.2271f;
				case 29:
					return 1000.547f, -6759.802f, 58.2271f;
				case 30:
					return 981.5336f, -6781.785f, 43.2271f;
				case 31:
					return 1003.2f, -6803.27f, 55.4771f;
				case 32:
					return 948.5501f, -6757.207f, 40.5271f;
				case 33:
					return 1002.707f, -6776.038f, 59.4771f;
				case 34:
					return 965.9474f, -6812.221f, 50.9065f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_1491(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0.75f;
				case 1:
					return 0.75f;
				case 2:
					return 0.75f;
				case 3:
					return 0.75f;
				case 4:
					return 0.75f;
				case 5:
					return 0.75f;
				case 6:
					return 0.75f;
				case 7:
					return 0.75f;
				case 8:
					return 0.75f;
				case 9:
					return 0.75f;
				case 10:
					return 0.75f;
				case 11:
					return 0.75f;
				case 12:
					return 0.75f;
				case 13:
					return 0.75f;
				case 14:
					return 0.75f;
				case 15:
					return 0.75f;
				case 16:
					return 0.75f;
				case 17:
					return 0.75f;
				case 18:
					return 0.75f;
				case 19:
					return 0.75f;
				case 20:
					return 0.75f;
				case 21:
					return 0.75f;
				case 22:
					return 0.75f;
				case 23:
					return 0.75f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return -39.0304f;
				case 1:
					return -35.0304f;
				case 2:
					return -35.0304f;
				case 3:
					return -75.0304f;
				case 4:
					return -59.0304f;
				case 5:
					return -85.0304f;
				case 6:
					return -35.0304f;
				case 7:
					return -37.0304f;
				case 8:
					return -45.0304f;
				case 9:
					return -47.0304f;
				case 10:
					return -59.0304f;
				case 11:
					return -39.0304f;
				case 12:
					return 1f;
				case 13:
					return 1f;
				case 14:
					return 1f;
				case 15:
					return 1f;
				case 16:
					return 1f;
				case 17:
					return 1f;
				case 18:
					return 1f;
				case 19:
					return 1f;
				case 20:
					return 1f;
				case 21:
					return 1f;
				case 22:
					return 1f;
				case 23:
					return 1f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 30.9696f;
				case 1:
					return 30.9696f;
				case 2:
					return -15.0304f;
				case 3:
					return 30.9696f;
				case 4:
					return 30.9696f;
				case 5:
					return 30.9696f;
				case 6:
					return 30.9696f;
				case 7:
					return 30.9696f;
				case 8:
					return 30.9696f;
				case 9:
					return 30.9696f;
				case 10:
					return 30.9696f;
				case 11:
					return 30.9696f;
				case 12:
					return 30.9696f;
				case 13:
					return 30.9696f;
				case 14:
					return 30.9696f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1f;
				case 1:
					return 1f;
				case 2:
					return 1f;
				case 3:
					return 1f;
				case 4:
					return 1f;
				case 5:
					return 1f;
				case 6:
					return 1f;
				case 7:
					return 1f;
				case 8:
					return 1f;
				case 9:
					return 1f;
				case 10:
					return 1f;
				case 11:
					return 1f;
				case 12:
					return 1f;
				case 13:
					return 1f;
				case 14:
					return 1f;
				case 15:
					return 1f;
				case 16:
					return 1f;
				case 17:
					return 1f;
				case 18:
					return 1f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 30.9696f;
				case 1:
					return 30.9696f;
				case 2:
					return -15.0304f;
				case 3:
					return 30.9696f;
				case 4:
					return 30.9696f;
				case 5:
					return 30.9696f;
				case 6:
					return 30.9696f;
				case 7:
					return 30.9696f;
				case 8:
					return 5f;
				case 9:
					return 5f;
				case 10:
					return 5f;
				case 11:
					return 5f;
				case 12:
					return 5f;
				case 13:
					return 5f;
				case 14:
					return 5f;
				case 15:
					return 5f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 1f;
				case 1:
					return 1f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 1f;
				case 1:
					return 0.5f;
				case 2:
					return 1f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 0.75f;
				case 1:
					return 0.75f;
				case 2:
					return 0.75f;
				case 3:
					return 0.75f;
				case 4:
					return 0.75f;
				case 5:
					return 0.75f;
				case 6:
					return 0.75f;
				case 7:
					return 0.75f;
				case 8:
					return 0.75f;
				case 9:
					return 0.75f;
				case 10:
					return 0.75f;
				case 11:
					return 0.75f;
				case 12:
					return 0.75f;
				case 13:
					return 0.75f;
				case 14:
					return 0.75f;
				case 15:
					return 0.75f;
				case 16:
					return 0.75f;
				case 17:
					return 0.75f;
				case 18:
					return 0.75f;
				case 19:
					return 0.75f;
				case 20:
					return 0.75f;
				case 21:
					return 0.75f;
				case 22:
					return 0.75f;
				case 23:
					return 0.75f;
				case 24:
					return 0.75f;
				case 25:
					return 0.75f;
				case 26:
					return 0.75f;
				case 27:
					return 0.75f;
				case 28:
					return 0.75f;
				case 29:
					return 0.75f;
				case 30:
					return 0.75f;
				case 31:
					return 0.75f;
				case 32:
					return 0.75f;
				case 33:
					return 0.75f;
				case 34:
					return 0.75f;
			}
			Jump @3644; //curOff = 2384
			switch (iParam1)
			{
				case 0:
					return 0.75f;
				case 1:
					return 0.75f;
			}
			Jump @3644; //curOff = 2429
			switch (iParam1)
			{
				case 0:
					return 0.75f;
				case 1:
					return 0.75f;
				case 2:
					return 0.75f;
				case 3:
					return 0.75f;
				case 4:
					return 0.75f;
				case 5:
					return 0.75f;
				case 6:
					return 0.75f;
				case 7:
					return 0.75f;
				case 8:
					return 0.75f;
				case 9:
					return 0.75f;
				case 10:
					return 0.75f;
				case 11:
					return 0.75f;
				case 12:
					return 0.75f;
				case 13:
					return 0.75f;
				case 14:
					return 0.75f;
				case 15:
					return 0.75f;
				case 16:
					return 0.75f;
				case 17:
					return 0.75f;
				case 18:
					return 0.75f;
				case 19:
					return 0.75f;
				case 20:
					return 0.75f;
				case 21:
					return 0.75f;
				case 22:
					return 0.75f;
				case 23:
					return 0.75f;
				case 24:
					return 0.75f;
				case 25:
					return 0.75f;
				case 26:
					return 0.75f;
				case 27:
					return 0.75f;
				case 28:
					return 0.75f;
				case 29:
					return 0.75f;
				case 30:
					return 0.75f;
				case 31:
					return 0.75f;
				case 32:
					return 0.75f;
				case 33:
					return 0.75f;
				case 34:
					return 0.75f;
			}
			Jump @3644; //curOff = 3035
			switch (iParam1)
			{
				case 0:
					return 0.75f;
				case 1:
					return 0.75f;
				case 2:
					return 0.75f;
				case 3:
					return 0.75f;
				case 4:
					return 0.75f;
				case 5:
					return 0.75f;
				case 6:
					return 0.75f;
				case 7:
					return 0.75f;
				case 8:
					return 0.75f;
				case 9:
					return 0.75f;
				case 10:
					return 0.75f;
				case 11:
					return 0.75f;
				case 12:
					return 0.75f;
				case 13:
					return 0.75f;
				case 14:
					return 0.75f;
				case 15:
					return 0.75f;
				case 16:
					return 0.75f;
				case 17:
					return 0.75f;
				case 18:
					return 0.75f;
				case 19:
					return 0.75f;
				case 20:
					return 0.75f;
				case 21:
					return 0.75f;
				case 22:
					return 0.75f;
				case 23:
					return 0.75f;
				case 24:
					return 0.75f;
				case 25:
					return 0.75f;
				case 26:
					return 0.75f;
				case 27:
					return 0.75f;
				case 28:
					return 0.75f;
				case 29:
					return 0.75f;
				case 30:
					return 0.75f;
				case 31:
					return 0.75f;
				case 32:
					return 0.75f;
				case 33:
					return 0.75f;
				case 34:
					return 0.75f;
			}
			return 0f;
		}
void func_1492()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	if (!__LIB_0__::func_28())
	{
		return;
	}
	__LIB_0__::func_643(&(Global_40.f_40));
}

void func_1624(int iParam0)
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
	func_644(iParam0, 1, 1, -142743235, 1);
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
		func_644(uVar18[iVar36], 1, 1, -142743235, 1);
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

void func_1629(struct<6> Param0)
{
	if (!func_2083(Param0.f_4, 1))
	{
	}
	if (!func_2083(Param0, 1))
	{
	}
	if (!func_2083(Param0.f_2, 1))
	{
	}
	if (!func_2083(Param0.f_5, 1))
	{
	}
	if (!func_2083(Param0.f_3, 1))
	{
	}
	if (!func_2083(Param0.f_1, 1))
	{
	}
}

struct<2> func_1685(int iParam0)
{
	struct<2> Var0;
	switch (iParam0)
	{
		case 0:
			return Var0;
		case 1:
			Var0 = "SMG2_B_CANNON";
			Var0.f_1 = 4;
			break;
		case 2:
			Var0 = "ALLY_HERCULE";
			Var0.f_1 = 4;
			break;
		case 3:
			Var0 = "SMG2_B_GENSMUG";
			Var0.f_1 = 4;
			break;
		case 4:
			Var0 = "SMG2_B_FUSBOAT";
			Var0.f_1 = 4;
			break;
		case 5:
			Var0 = "SMG2_B_FUSSOLD";
			Var0.f_1 = 4;
			break;
		case 6:
			Var0 = "SMG2_B_FORTROOF";
			Var0.f_1 = 4;
			break;
		case 7:
			Var0 = "SMG2_UC_PUSHST";
			Var0.f_1 = 4;
			break;
		case 8:
			Var0 = "SMG2_UC_PUSHTP";
			Var0.f_1 = 4;
			break;
		case 9:
			Var0 = "SMG2_UC_VIEW_SH";
			Var0.f_1 = 4;
			break;
		case 10:
			Var0 = "SMG2_UC_VIEW_DU";
			Var0.f_1 = 4;
			break;
		case 11:
			Var0 = "SMG2_S4_ILO_LFT";
			Var0.f_1 = 4;
			break;
		case 12:
			Var0 = "SMG2_S4_ILO_RGT";
			Var0.f_1 = 4;
			break;
		case 14:
			Var0 = "GANG_FAIL";
			Var0.f_1 = 4;
			break;
		case 15:
			Var0 = "SMG2_F_ABNDFGHT";
			Var0.f_1 = 4;
			break;
		case 16:
			Var0 = "SMG2_F_EXNLEGIT";
			Var0.f_1 = 4;
			break;
		case 17:
			Var0 = "SMG2_F_EXNLEGIT";
			Var0.f_1 = 4;
			break;
		case 21:
			Var0 = "SMG2_S1_ROOFDWD";
			Var0.f_1 = 0;
			break;
		case 22:
			Var0 = "SMG2_S1_SEESHIP";
			Var0.f_1 = 0;
			break;
		case 23:
			Var0 = "SMG2_S1_REMINDR";
			Var0.f_1 = 0;
			break;
		case 18:
			Var0 = "SMG2_RETURNROOF";
			Var0.f_1 = 5;
			break;
		case 19:
			Var0 = "SMG2_INT_LO";
			Var0.f_1 = 0;
			break;
		case 20:
			Var0 = "SMG2_S1_GOROOF";
			Var0.f_1 = 5;
			break;
		case 24:
			Var0 = "SMG2_WELCOMING";
			Var0.f_1 = 0;
			break;
		case 25:
			Var0 = "SMG2_S2_BBULLET";
			Var0.f_1 = 0;
			break;
		case 26:
			Var0 = "SMG2_S2_MBULLET";
			Var0.f_1 = 0;
			break;
		case 27:
			Var0 = "SMG2_S2_STAY";
			Var0.f_1 = 0;
			break;
		case 28:
			Var0 = "SMG2_S2_RETURND";
			Var0.f_1 = 0;
			break;
		case 29:
			Var0 = "SMG2_S2_MORRGHT";
			Var0.f_1 = 0;
			break;
		case 30:
			Var0 = "SMG2_S2_MORLFT";
			Var0.f_1 = 0;
			break;
		case 31:
			Var0 = "SMG2_S2_2CLOSE";
			Var0.f_1 = 0;
			break;
		case 32:
			Var0 = "SMG2_S2_DTCHAMO";
			Var0.f_1 = 0;
			break;
		case 33:
			Var0 = "SMG2_S4_SOBANT1";
			Var0.f_1 = 1;
			break;
		case 34:
			Var0 = "SMG2_S4_SOBANT2";
			Var0.f_1 = 1;
			break;
		case 35:
			Var0 = "SMG2_S2_CANREM";
			Var0.f_1 = 0;
			break;
		case 36:
			Var0 = "SMG2_S2_SEEBOAT";
			Var0.f_1 = 0;
			break;
		case 37:
			Var0 = "SMG2_S2_KILLW1";
			Var0.f_1 = 5;
			break;
		case 38:
			Var0 = "SMG2_S2_HLPHERC";
			Var0.f_1 = 5;
			break;
		case 39:
			Var0 = "SMG2_S2_BCKLEFT";
			Var0.f_1 = 1;
			break;
		case 40:
			Var0 = "SMG2_S2_BCKRGHT";
			Var0.f_1 = 1;
			break;
		case 41:
			Var0 = "SMG2_S2_NRLEFT";
			Var0.f_1 = 1;
			break;
		case 42:
			Var0 = "SMG2_S2_NRRGHT";
			Var0.f_1 = 1;
			break;
		case 43:
			Var0 = "SMG3_IG3_PUSH";
			Var0.f_1 = 1;
			break;
		case 44:
			Var0 = "SMG2_S2_CANHEVY";
			Var0.f_1 = 1;
			break;
		case 45:
			Var0 = "SMG2_S2_CANPUSH";
			Var0.f_1 = 1;
			break;
		case 46:
			Var0 = "SMG2_S3_GOREMND";
			Var0.f_1 = 0;
			break;
		case 47:
			Var0 = "SMG2_S3_GRABSHT";
			Var0.f_1 = 0;
			break;
		case 48:
			Var0 = "SMG2_IG4";
			Var0.f_1 = 0;
			break;
		case 49:
			Var0 = "SMG2_ALT_IG4";
			Var0.f_1 = 0;
			break;
		case 50:
			Var0 = "SMG2_S3_CLOSE_D";
			Var0.f_1 = 1;
			break;
		case 51:
			Var0 = "SMG2_S3_CLOSE_H";
			Var0.f_1 = 1;
			break;
		case 52:
			Var0 = "SMG2_S3_DWNSTR0";
			Var0.f_1 = 0;
			break;
		case 53:
			Var0 = "SMG2_S3_DWNSTR1";
			Var0.f_1 = 0;
			break;
		case 54:
			Var0 = "SMG2_S3_SHOTOWN";
			Var0.f_1 = 1;
			break;
		case 55:
			Var0 = "SMG2_S3_FOLHERC";
			Var0.f_1 = 5;
			break;
		case 56:
			Var0 = "SMG2_S3_RET2DNH";
			Var0.f_1 = 5;
			break;
		case 57:
			Var0 = "SMG2_S3_KILLEN";
			Var0.f_1 = 5;
			break;
		case 74:
			Var0 = "SMG2_S4_KILLEN";
			Var0.f_1 = 5;
			break;
		case 75:
			Var0 = "SMG2_RETURNBATL";
			Var0.f_1 = 5;
			break;
		case 76:
			Var0 = "SMG2_S4_FINSHEN";
			Var0.f_1 = 5;
			break;
		case 78:
			Var0 = "SMG2_S4_BOATLFT";
			Var0.f_1 = 0;
			break;
		case 79:
			Var0 = "SMG2_S4_BOATRGT";
			Var0.f_1 = 0;
			break;
		case 80:
			Var0 = "SMG2_S4_BOATLND";
			Var0.f_1 = 0;
			break;
		case 77:
			Var0 = "SMG2_S3_GET2BCH";
			Var0.f_1 = 1;
			break;
		case 81:
			Var0 = "SMG2_S4_FEWLEFT";
			Var0.f_1 = 0;
			break;
		case 82:
			Var0 = "SMG2_S4_ONELEFT";
			Var0.f_1 = 0;
			break;
		case 83:
			Var0 = "SMG2_S4_REGROUP";
			Var0.f_1 = 0;
			break;
		case 90:
			Var0 = "SMG2_S4_HLP_ILO";
			Var0.f_1 = 9;
			break;
		case 91:
			Var0 = "SMG2_S4_REGROUP";
			Var0.f_1 = 5;
			break;
		case 92:
			Var0 = "SMG2_S4_RET2REG";
			Var0.f_1 = 5;
			break;
		case 84:
			Var0 = "SMG2_S4_ILO_PRE";
			Var0.f_1 = 1;
			break;
		case 85:
			Var0 = "SMG2_S4_ILO_REM";
			Var0.f_1 = 0;
			break;
		case 58:
			Var0 = "SMG2_S4_D_NOILO";
			Var0.f_1 = 1;
			break;
		case 59:
			Var0 = "SMG2_S4_D_NO_H";
			Var0.f_1 = 1;
			break;
		case 60:
			Var0 = "SMG2_S4_H_NOILO";
			Var0.f_1 = 1;
			break;
		case 61:
			Var0 = "SMG2_S4_OBJ_ILO";
			Var0.f_1 = 5;
			break;
		case 62:
			Var0 = "SMG2_S4_DL";
			Var0.f_1 = 1;
			break;
		case 63:
			Var0 = "SMG2_S4_DR";
			Var0.f_1 = 1;
			break;
		case 64:
			Var0 = "SMG2_S4_HL";
			Var0.f_1 = 1;
			break;
		case 65:
			Var0 = "SMG2_S4_HR";
			Var0.f_1 = 1;
			break;
		case 66:
			Var0 = "SMG2_S4_D2L";
			Var0.f_1 = 1;
			break;
		case 67:
			Var0 = "SMG2_S4_D2L_HL";
			Var0.f_1 = 1;
			break;
		case 68:
			Var0 = "SMG2_S4_D2R";
			Var0.f_1 = 1;
			break;
		case 69:
			Var0 = "SMG2_S4_D2R_HR";
			Var0.f_1 = 1;
			break;
		case 70:
			Var0 = "SMG2_S4_H2L";
			Var0.f_1 = 1;
			break;
		case 71:
			Var0 = "SMG2_S4_H2L_DL";
			Var0.f_1 = 1;
			break;
		case 72:
			Var0 = "SMG2_S4_H2R";
			Var0.f_1 = 1;
			break;
		case 73:
			Var0 = "SMG2_S4_H2R_DR";
			Var0.f_1 = 1;
			break;
		case 86:
			Var0 = "SMG2_S4_DLFTDED";
			Var0.f_1 = 0;
			break;
		case 87:
			Var0 = "SMG2_S4_HLFTDED";
			Var0.f_1 = 0;
			break;
		case 88:
			Var0 = "SMG2_S4_DRGTDED";
			Var0.f_1 = 0;
			break;
		case 89:
			Var0 = "SMG2_S4_HRGTDED";
			Var0.f_1 = 0;
			break;
		case 93:
			Var0 = "SMG2_S4_NOREGP1";
			Var0.f_1 = 0;
			break;
		case 94:
			Var0 = "SMG2_S4_NOREGP2";
			Var0.f_1 = 0;
			break;
		case 95:
			Var0 = "SMG2_S4_NOREGP3";
			Var0.f_1 = 0;
			break;
		case 96:
			Var0 = "SMG2_S5_GO_AWAY";
			Var0.f_1 = 0;
			break;
		case 97:
			Var0 = "SMG2_S5_HERCFOL";
			Var0.f_1 = 0;
			break;
		case 98:
			Var0 = "SMG2_S5_HBANT0";
			Var0.f_1 = 0;
			break;
		case 99:
			Var0 = "SMG2_S5_HBANT1";
			Var0.f_1 = 0;
			break;
		case 100:
			Var0 = "SMG2_S5_DESTMID";
			Var0.f_1 = 0;
			break;
		case 101:
			Var0 = "SMG2_S5_DESTPST";
			Var0.f_1 = 1;
			break;
		case 102:
			Var0 = "SMG2_S5_SAVEPRE";
			Var0.f_1 = 1;
			break;
		case 103:
			Var0 = "SMG2_S5_SAVEPST";
			Var0.f_1 = 1;
			break;
		case 104:
			Var0 = "SMG2_S5_HBANT2";
			Var0.f_1 = 0;
			break;
		case 105:
			Var0 = "SMG2_S5_FOLHERC";
			Var0.f_1 = 5;
			break;
		case 106:
			Var0 = "SMG2_S5_RETHERC";
			Var0.f_1 = 5;
			break;
		case 107:
			Var0 = "SMG2_S6_SHOOT_0";
			Var0.f_1 = 0;
			break;
		case 108:
			Var0 = "SMG2_S6_SHOOT_1";
			Var0.f_1 = 0;
			break;
		case 109:
			Var0 = "SMG2_S6_SHOOT_2";
			Var0.f_1 = 0;
			break;
		case 110:
			Var0 = "SMG2_S6_SHOOT_3";
			Var0.f_1 = 0;
			break;
		case 111:
			Var0 = "SMG2_S6_HIT_0";
			Var0.f_1 = 0;
			break;
		case 112:
			Var0 = "SMG2_S6_HIT_1";
			Var0.f_1 = 0;
			break;
		case 113:
			Var0 = "SMG2_S6_HIT_2";
			Var0.f_1 = 0;
			break;
		case 114:
			Var0 = "SMG2_S6_HIT_3";
			Var0.f_1 = 0;
			break;
		case 115:
			Var0 = "SMG2_S6_MISS_0";
			Var0.f_1 = 0;
			break;
		case 116:
			Var0 = "SMG2_S6_MISS_1";
			Var0.f_1 = 0;
			break;
		case 117:
			Var0 = "SMG2_S6_MISS_2";
			Var0.f_1 = 0;
			break;
		case 118:
			Var0 = "SMG2_S6_MISS_3";
			Var0.f_1 = 0;
			break;
		case 119:
			Var0 = "SMG2_S6_RLDFUL";
			Var0.f_1 = 0;
			break;
		case 120:
			Var0 = "SMG2_S6_RLD_0";
			Var0.f_1 = 0;
			break;
		case 121:
			Var0 = "SMG2_S6_RLD_1";
			Var0.f_1 = 0;
			break;
		case 122:
			Var0 = "SMG2_S6_DESTSHP";
			Var0.f_1 = 5;
			break;
		default:
			break;
	}
	return Var0;
}

void func_1691(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_424[iParam0 /*8*/]) && !ENTITY::IS_ENTITY_DEAD(Local_424[iParam1 /*8*/]))
	{
		PED::REGISTER_TARGET(Local_424[iParam0 /*8*/], Local_424[iParam1 /*8*/], 1);
		if (iParam0 >= 2 && iParam0 <= 6)
		{
			if (iParam1 >= 12 && iParam1 <= 100)
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_424[iParam1 /*8*/], joaat("REL_PLAYER_ENEMY"));
			}
		}
	}
}

bool func_1692(int iParam0)
{
	return __LIB_16__::func_776(iParam0, 242628503);
}

bool func_1694()
{
	switch (iLocal_2375)
	{
		case 0:
			if (func_164(28))
			{
				if (func_2125())
				{
					func_1184(33);
					iLocal_2375 = 1;
				}
			}
			break;
		case 1:
			if (func_2125())
			{
				__LIB_1__::func_283(&(vLocal_1569[5 /*3*/]), 0);
				if (__LIB_0__::func_265(&(vLocal_1569[5 /*3*/])) >= 4f)
				{
					func_1184(34);
					iLocal_2375 = 2;
				}
			}
			break;
		case 2:
			return true;
	}
	return false;
}

void func_1695(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4, int iParam5, float fParam6)
{
	TASK::TASK_PLAY_ANIM(iParam0, func_440(iParam1, 1), func_440(iParam1, 0), fParam2, fParam3, iParam4, iParam5, fParam6, false, 0, false, 0, false);
}

void func_1696()
{
	struct<15> Var0;
	float fVar15;
	vector3 vVar16;
	vector3 vVar19;
	float fVar22;
	vector3 vVar23;
	if (!CAM::DOES_CAM_EXIST(iLocal_1494[0]))
	{
		func_1304(0, 1, 1f);
		vLocal_2104.f_2.f_3 = func_1707();
	}
	Var0 = { func_1224(0) };
	fVar15 = vLocal_2104.f_2.f_3;
	vVar16 = { __LIB_1__::func_367(Var0, Var0.f_8, fVar15) };
	vVar19 = { Var0.f_3 };
	fVar22 = __LIB_0__::func_667(Var0.f_6, Var0.f_14, fVar15);
	CAM::SET_CAM_PARAMS(iLocal_1494[0], vVar16, vVar19, fVar22, 0, 1, 1, 2, 0, 0);
	vVar23 = { 633f, -6918f, 45f };
	vVar23.f_1 = (vVar23.y + (func_1706(0, PAD::GET_CONTROL_NORMAL(0, func_1699(2))) * 100f));
	vVar23.f_2 = (vVar23.z - (func_1706(1, PAD::GET_CONTROL_NORMAL(0, func_1699(3))) * 100f));
	CAM::POINT_CAM_AT_COORD(iLocal_1494[0], vVar23);
}

int func_1697()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		iVar1 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			Jump @57; //curOff = 34
		}
		else
		{
			PED::_0xED00D72F81CF7278(iVar1, 0, 0);
		}
		iVar0++;
	}
	return 1;
}

void func_1698()
{
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_EQUIP_ITEM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_USE_ITEM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY_SECONDARY"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_BEHIND"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_BEHIND"), false);
}

int func_1699(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("INPUT_MOVE_UP_ONLY");
		case 1:
			return joaat("INPUT_CONTEXT_ACTION");
		case 2:
			return joaat("INPUT_LOOK_LR");
		case 3:
			return joaat("INPUT_LOOK_UD");
		case 4:
			return joaat("INPUT_INTERACT_LOCKON_POS");
		case 5:
			return joaat("INPUT_INTERACT_LOCKON_NEG");
	}
	return joaat("INPUT_SPRINT");
}

float func_1706(int iParam0, float fParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	Local_1498[iParam0 /*8*/].f_2 = fParam1;
	Local_1498[iParam0 /*8*/].f_3 = (Local_1498[iParam0 /*8*/].f_4 - Local_1498[iParam0 /*8*/].f_5);
	Local_1498[iParam0 /*8*/].f_5 = Local_1498[iParam0 /*8*/].f_4;
	fVar0 = (MISC::GET_FRAME_TIME() * 25f);
	fVar1 = (fParam1 - Local_1498[iParam0 /*8*/].f_4);
	fVar2 = (fVar1 * Local_1498[iParam0 /*8*/].f_1);
	fVar3 = ((-Local_1498[iParam0 /*8*/].f_3 * 2f) * BUILTIN::SQRT(Local_1498[iParam0 /*8*/].f_1));
	fVar4 = (fVar2 + fVar3);
	Local_1498[iParam0 /*8*/].f_3 = (Local_1498[iParam0 /*8*/].f_3 + (fVar4 * fVar0));
	fVar5 = (Local_1498[iParam0 /*8*/].f_3 * fVar0);
	Local_1498[iParam0 /*8*/].f_4 = (Local_1498[iParam0 /*8*/].f_4 + fVar5);
	if (!Local_1498[iParam0 /*8*/].f_6 == Local_1498[iParam0 /*8*/].f_7)
	{
		if (Local_1498[iParam0 /*8*/].f_4 < Local_1498[iParam0 /*8*/].f_6)
		{
			Local_1498[iParam0 /*8*/].f_4 = Local_1498[iParam0 /*8*/].f_6;
		}
		else if (Local_1498[iParam0 /*8*/].f_4 > Local_1498[iParam0 /*8*/].f_7)
		{
			Local_1498[iParam0 /*8*/].f_4 = Local_1498[iParam0 /*8*/].f_7;
		}
	}
	return Local_1498[iParam0 /*8*/].f_4;
}

float func_1707()
{
	float fVar0;
	fVar0 = (0.80285f - 0.10366f);
	return ((ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_2328[2 /*5*/]) / fVar0) - 0.10366f);
}

void func_1709(int iParam0, int iParam1, float fParam2)
{
	func_1304(iParam0, 1, fParam2);
	func_2127(iParam0, iParam1);
}

Vector3 func_1710(vector3 vParam0, float fParam3)
{
	return vParam0 + Vector(MISC::GET_RANDOM_FLOAT_IN_RANGE(-fParam3, fParam3), MISC::GET_RANDOM_FLOAT_IN_RANGE(-fParam3, fParam3), MISC::GET_RANDOM_FLOAT_IN_RANGE(-fParam3, fParam3));
}

struct<8> func_1721(int iParam0)
{
	return __LIB_0__::func_482(func_1190(iParam0));
}

void func_1722(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_424[iParam0 /*8*/]) && !ENTITY::IS_ENTITY_DEAD(Local_424[iParam1 /*8*/]))
	{
		PED::_0x4707E9C23D8CA3FE(Local_424[iParam0 /*8*/], Local_424[iParam1 /*8*/]);
	}
}

void func_1723()
{
	int iVar0;
	int iVar1;
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return;
	}
	iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(998.6f, -6740.6f, 63.1f);
	iVar1 = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35);
	if (INTERIOR::IS_VALID_INTERIOR(iVar0) && INTERIOR::IS_VALID_INTERIOR(iVar1))
	{
		if (iVar0 == iVar1)
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
		}
	}
}

Vector3 func_1724(int iParam0)
{
	return __LIB_1__::func_344(func_1190(iParam0));
}

void func_1726(int iParam0)
{
	if (Local_1465[iParam0 /*7*/].f_5 == 1)
	{
		Local_1465[iParam0 /*7*/].f_5 = 0;
	}
}

void func_1728(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_424[2 /*8*/], 27, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_424[3 /*8*/], 27, false);
			PED::SET_PED_ACCURACY(Local_424[2 /*8*/], iLocal_2121);
			PED::SET_PED_ACCURACY(Local_424[3 /*8*/], iLocal_2122);
			func_1483(2, 256);
			func_1483(3, 256);
			break;
		case 1:
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_424[2 /*8*/], 27, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_424[3 /*8*/], 27, false);
			PED::SET_PED_ACCURACY(Local_424[2 /*8*/], 0);
			PED::SET_PED_ACCURACY(Local_424[3 /*8*/], 0);
			func_1269(2, 256);
			func_1269(3, 256);
			break;
		case 2:
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_424[2 /*8*/], 27, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_424[3 /*8*/], 27, true);
			PED::SET_PED_ACCURACY(Local_424[2 /*8*/], 100);
			PED::SET_PED_ACCURACY(Local_424[3 /*8*/], 100);
			func_1483(2, 256);
			func_1483(3, 256);
			break;
	}
}

void func_1730(var uParam0)
{
	if (!func_1180(10, 80))
	{
		return;
	}
	if (!func_1731())
	{
		return;
	}
	__LIB_1__::func_283(&(vLocal_1569[17 /*3*/]), 0);
	if (__LIB_0__::func_265(&(vLocal_1569[17 /*3*/])) <= 10f)
	{
		return;
	}
	if (!__LIB_0__::func_665(Local_424[2 /*8*/], Local_424[3 /*8*/], 1, 1) < 10f)
	{
		return;
	}
	if (__LIB_0__::func_665(Global_35, Local_424[2 /*8*/], 1, 1) < 15f && __LIB_0__::func_665(Global_35, Local_424[3 /*8*/], 1, 1) < 15f)
	{
		return;
	}
	if (func_164(48))
	{
		TASK::TASK_LOOK_AT_ENTITY(Local_424[2 /*8*/], Global_35, 2000, 48, 41, 1);
		func_1184(50);
		func_178(48);
	}
	else
	{
		TASK::TASK_LOOK_AT_ENTITY(Local_424[3 /*8*/], Global_35, 2000, 48, 41, 1);
		func_1184(51);
		func_849(48);
	}
	__LIB_1__::func_148(&(vLocal_1569[17 /*3*/]));
}

bool func_1731()
{
	if ((!__LIB_5__::func_236(1) && !__LIB_0__::func_481(1)) && iLocal_2113 == 0)
	{
		return true;
	}
	return false;
}

bool func_1732(int iParam0)
{
	int iVar0;
	float fVar1;
	if (func_1272(iParam0, 128))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return false;
	}
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_424[iParam0 /*8*/], Global_35, 1, 1))
	{
		return true;
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_424[iParam0 /*8*/], false))
	{
		return true;
	}
	if (PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iVar0))
		{
			if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0) == Local_424[iParam0 /*8*/])
			{
				return true;
			}
		}
	}
	if (func_1180(30, (2 + iParam0)))
	{
		switch (iParam0)
		{
			case 30:
			case 31:
			case 32:
			case 33:
				fVar1 = 3f;
				break;
			default:
				fVar1 = 10f;
				break;
		}
		if (__LIB_0__::func_665(Global_35, Local_424[iParam0 /*8*/], 1, 1) <= fVar1)
		{
			return true;
		}
	}
	return false;
}

int func_1733(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 27:
		case 29:
		case 30:
		case 32:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
			if (iParam1 == 0)
			{
				return iLocal_1452[1];
			}
			else if (iParam1 == 1)
			{
				return 0;
			}
			break;
		case 28:
		case 31:
		case 33:
		case 40:
		case 41:
			if (iParam1 == 0)
			{
				return iLocal_1452[10];
			}
			else if (iParam1 == 1)
			{
				return iLocal_1452[11];
			}
			break;
		case 42:
		case 45:
		case 48:
		case 51:
		case 54:
			if (iParam1 == 0)
			{
				return iLocal_1452[1];
			}
			else if (iParam1 == 1)
			{
				return 0;
			}
			break;
		case 43:
		case 44:
		case 46:
		case 47:
		case 49:
		case 50:
		case 52:
		case 53:
		case 55:
		case 56:
			if (iParam1 == 0)
			{
				return iLocal_1452[10];
			}
			else if (iParam1 == 1)
			{
				return iLocal_1452[11];
			}
			break;
		case 63:
		case 65:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
			if (iParam1 == 0)
			{
				return iLocal_1452[1];
			}
			else if (iParam1 == 1)
			{
				return 0;
			}
			break;
		case 64:
		case 66:
			if (iParam1 == 0)
			{
				return iLocal_1452[10];
			}
			else if (iParam1 == 1)
			{
				return iLocal_1452[11];
			}
			break;
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return iLocal_1452[1];
	}
	return 0;
}

void func_1734(int iParam0)
{
	vector3 vVar0;
	Local_1700.f_3[iParam0 /*33*/].f_13.f_13 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1700.f_1, Local_1700.f_3[iParam0 /*33*/].f_5) };
	vVar0 = { __LIB_4__::func_335(__LIB_1__::func_868(Local_1700.f_3[iParam0 /*33*/].f_13.f_13, Local_1700.f_3[iParam0 /*33*/].f_13.f_10, 1065353216 /* Float: 1f */)) };
	vVar0.f_2 = (vVar0.z + 90f);
	GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD(func_1294(0), Local_1700.f_3[iParam0 /*33*/].f_13.f_13, vVar0, 1f, false, false, false);
	CAM::SHAKE_GAMEPLAY_CAM("SMALL_EXPLOSION_SHAKE", 0.05f);
	AUDIO::_0xF1C5310FEAA36B48(uLocal_2124[iLocal_2123], func_1294(13), Local_1700.f_1, func_1294(9), 0, 0);
	iLocal_2123++;
	if (iLocal_2123 >= 10)
	{
		iLocal_2123 = 0;
	}
}

bool func_1736(int iParam0)
{
	struct<8> Var0;
	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = func_1294(17);
	Var0.f_1 = 0;
	Var0.f_2 = 0;
	Var0.f_3 = joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR_ALLOWPLAYAFTERDEATH");
	Var0.f_4 = 0;
	Var0.f_5 = 1;
	Var0.f_6 = 1;
	MISC::SET_BIT(&(Var0.f_7), 2);
	return __LIB_1__::func_208(iParam0, &Var0);
}

float func_1738(vector3 vParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), vParam0, true);
	if (fVar1 > 50f)
	{
		fVar0 = 0.05f;
	}
	else if (fVar1 < 5f)
	{
		fVar0 = 0.3f;
	}
	else
	{
		fVar2 = (50f - 5f);
		fVar3 = (fVar1 / fVar2);
		fVar0 = __LIB_0__::func_667(0.3f, 0.05f, fVar3);
	}
	return fVar0;
}

void func_1747(int iParam0)
{
	if (!MAP::DOES_BLIP_EXIST(Local_1523[iParam0 /*5*/].f_1))
	{
		if (MAP::DOES_BLIP_EXIST(MAP::GET_BLIP_FROM_ENTITY(Local_1523[iParam0 /*5*/])))
		{
			Local_1523[iParam0 /*5*/].f_1 = MAP::GET_BLIP_FROM_ENTITY(Local_1523[iParam0 /*5*/]);
		}
		else
		{
			Local_1523[iParam0 /*5*/].f_1 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_1523[iParam0 /*5*/]);
		}
	}
	MAP::_BLIP_SET_MODIFIER(Local_1523[iParam0 /*5*/].f_1, -948075745);
}

int func_1748(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	iVar1 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar1))
	{
		return 0;
	}
	if (Global_1935630.f_44 == joaat("WEAPON_LASSO") && Global_1935630.f_27)
	{
	}
	else if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar2, 0, 0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iVar2) && iParam0 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2))
		{
			return 0;
		}
	}
	if (Global_1935630.f_40 != 0)
	{
		if (PED::_GET_RIDER_OF_MOUNT(Global_1935630.f_40, true) == iParam0)
		{
			return 0;
		}
	}
	if (bParam3)
	{
		if (((WEAPON::_0xCB690F680A3EA971(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, bParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && __LIB_0__::func_665(iVar0, iParam0, 1, 1) <= 4f)
		{
			return 1;
		}
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, bParam5) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0))
	{
		if ((bParam1 && WEAPON::_0xCB690F680A3EA971(iVar0, 4)) || (bParam2 && WEAPON::_0xCB690F680A3EA971(iVar0, 2)))
		{
			return 1;
		}
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING(iVar1))
	{
		if (WEAPON::_IS_WEAPON_SNIPER(__LIB_1__::func_372(iVar0, 0)))
		{
			if (__LIB_2__::func_0(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_1749(int iParam0)
{
	iLocal_2261 = iParam0;
}

int func_1750(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 27;
		case 4:
			return 28;
		case 5:
			return 29;
		case 6:
			return 30;
		case 7:
			return 31;
	}
	return 27;
}

void func_1751(int iParam0, int iParam1)
{
	bool bVar0;
	if (!func_164(70))
	{
		__LIB_10__::func_979(Local_424[2 /*8*/], "", 5f, 1, 5f, 0);
		func_849(70);
	}
	if (!func_164(69))
	{
		__LIB_10__::func_979(Local_424[3 /*8*/], "", 5f, 1, 5f, 0);
		func_849(69);
	}
	if (__LIB_9__::func_331(PLAYER::PLAYER_ID(), Local_424[2 /*8*/]))
	{
		*iParam0 = 2;
	}
	else if (__LIB_9__::func_331(PLAYER::PLAYER_ID(), Local_424[3 /*8*/]))
	{
		*iParam0 = 3;
	}
	else
	{
		if (__LIB_0__::func_139(iLocal_2117))
		{
			__LIB_1__::func_281(&iLocal_2117, 1, 1);
		}
		if (__LIB_0__::func_139(iLocal_2118))
		{
			__LIB_1__::func_281(&iLocal_2118, 1, 1);
		}
		if (__LIB_0__::func_139(iLocal_2119))
		{
			__LIB_1__::func_281(&iLocal_2119, 1, 1);
		}
		*iParam0 = 0;
		*iParam1 = 0;
		return;
	}
	PAD::ENABLE_CONTROL_ACTION(0, func_1699(4), true);
	PAD::ENABLE_CONTROL_ACTION(0, func_1699(5), true);
	if (!__LIB_0__::func_139(iLocal_2117))
	{
		iLocal_2117 = __LIB_1__::func_877(func_1190(11), func_1699(4), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
		__LIB_1__::func_574(&iLocal_2117, Local_424[*iParam0 /*8*/]);
	}
	else
	{
		__LIB_1__::func_522(iLocal_2117, 0, 1, 1);
	}
	if (!__LIB_0__::func_139(iLocal_2119))
	{
		iLocal_2119 = __LIB_1__::func_877(func_1190(12), func_1699(5), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
		__LIB_1__::func_574(&iLocal_2119, Local_424[*iParam0 /*8*/]);
	}
	else
	{
		__LIB_1__::func_522(iLocal_2119, 0, 1, 1);
	}
	if (__LIB_1__::func_514(iLocal_2117, 1) || PAD::IS_CONTROL_JUST_PRESSED(0, func_1699(4)))
	{
		bVar0 = true;
		*iParam1 = 2;
	}
	else if (__LIB_1__::func_514(iLocal_2119, 1) || PAD::IS_CONTROL_JUST_PRESSED(0, func_1699(5)))
	{
		bVar0 = true;
		*iParam1 = 3;
	}
	else
	{
		bVar0 = false;
		*iParam1 = 1;
	}
	if (bVar0)
	{
		if (__LIB_0__::func_139(iLocal_2117))
		{
			__LIB_1__::func_281(&iLocal_2117, 1, 1);
		}
		if (__LIB_0__::func_139(iLocal_2118))
		{
			__LIB_1__::func_281(&iLocal_2118, 1, 1);
		}
		if (__LIB_0__::func_139(iLocal_2119))
		{
			__LIB_1__::func_281(&iLocal_2119, 1, 1);
		}
	}
}

void func_1753(int iParam0)
{
	if (!iLocal_2112 == 0)
	{
	}
	iLocal_2112 = iParam0;
}

int func_1758(int iParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	bVar0 = func_1272(__LIB_0__::func_55(iParam0 == 2, 3, 2), 2);
	bVar1 = func_1272(__LIB_0__::func_55(iParam0 == 2, 3, 2), 8);
	bVar2 = func_1272(iParam0, 2);
	bVar3 = func_1272(iParam0, 8);
	iVar4 = 0;
	if (bVar0)
	{
		if (bVar2)
		{
			iVar4 = __LIB_0__::func_55(iParam0 == 2, 67, 71);
		}
		else if (bVar3)
		{
			iVar4 = __LIB_0__::func_55(iParam0 == 2, 68, 72);
		}
	}
	else if (bVar1)
	{
		if (bVar2)
		{
			iVar4 = __LIB_0__::func_55(iParam0 == 2, 66, 70);
		}
		else if (bVar3)
		{
			iVar4 = __LIB_0__::func_55(iParam0 == 2, 69, 73);
		}
	}
	else if (bVar2)
	{
		iVar4 = __LIB_0__::func_55(iParam0 == 2, 62, 64);
	}
	else if (bVar3)
	{
		iVar4 = __LIB_0__::func_55(iParam0 == 2, 63, 65);
	}
	return iVar4;
}

bool func_1759(int iParam0)
{
	if ((iParam0 == 2 && __LIB_0__::func_265(&(vLocal_1569[25 /*3*/])) >= 10f) || (iParam0 == 3 && __LIB_0__::func_265(&(vLocal_1569[26 /*3*/])) >= 10f))
	{
		if (!func_1692(Local_424[iParam0 /*8*/]) || (func_1692(Local_424[iParam0 /*8*/]) && TASK::GET_SEQUENCE_PROGRESS(Local_424[iParam0 /*8*/]) == 1))
		{
			return true;
		}
	}
	return false;
}

bool func_1760()
{
	int iVar0;
	int iVar1;
	if (Local_424[3 /*8*/].f_2 == 67 || Local_424[3 /*8*/].f_2 == 66)
	{
		return false;
	}
	iVar1 = 42;
	while (iVar1 <= 62)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_424[iVar1 /*8*/]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_424[iVar1 /*8*/]))
			{
				iVar0++;
			}
		}
		iVar1++;
	}
	if (iVar0 <= 3)
	{
		return true;
	}
	return false;
}

void func_1762()
{
	TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, func_438(26), 0, 71305256, -1, 0, 0, -1);
}

void func_1763(int iParam0, bool bParam1)
{
	if (iParam0 == 2)
	{
		if (bParam1)
		{
			PED::_0xFC3DB99C8144CD81(Local_424[iParam0 /*8*/], Local_128.f_77, 0, 0, 0);
			PED::_0xFC3DB99C8144CD81(Local_424[iParam0 /*8*/], Local_128.f_78, 0, 0, 0);
		}
		else
		{
			PED::_0xFC3DB99C8144CD81(Local_424[iParam0 /*8*/], Local_128.f_81, 0, 0, 0);
			PED::_0xFC3DB99C8144CD81(Local_424[iParam0 /*8*/], Local_128.f_82, 0, 0, 0);
		}
	}
	else if (iParam0 == 3)
	{
		if (bParam1)
		{
			PED::_0xFC3DB99C8144CD81(Local_424[iParam0 /*8*/], Local_128.f_79, 0, 0, 0);
			PED::_0xFC3DB99C8144CD81(Local_424[iParam0 /*8*/], Local_128.f_80, 0, 0, 0);
		}
		else
		{
			PED::_0xFC3DB99C8144CD81(Local_424[iParam0 /*8*/], Local_128.f_83, 0, 0, 0);
			PED::_0xFC3DB99C8144CD81(Local_424[iParam0 /*8*/], Local_128.f_84, 0, 0, 0);
		}
	}
}

bool func_1764(int iParam0)
{
	if ((iParam0 == 2 && __LIB_0__::func_265(&(vLocal_1569[25 /*3*/])) >= 10f) || (iParam0 == 3 && __LIB_0__::func_265(&(vLocal_1569[26 /*3*/])) >= 10f))
	{
		if (!func_1692(Local_424[iParam0 /*8*/]) || (func_1692(Local_424[iParam0 /*8*/]) && TASK::GET_SEQUENCE_PROGRESS(Local_424[iParam0 /*8*/]) == 2))
		{
			return true;
		}
	}
	return false;
}

int func_1765(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = iParam0;
	while (iVar0 <= iParam1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_424[iVar0 /*8*/]) && !ENTITY::IS_ENTITY_DEAD(Local_424[iVar0 /*8*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0;
}

int func_1767(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam0;
	iVar1 = (iParam1 - iVar0);
	return iVar1;
}

bool func_1768(int iParam0)
{
	int iVar0;
	iVar0 = 3;
	while (iVar0 <= 7)
	{
		if (iParam0 == Local_1523[iVar0 /*5*/].f_3)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_1769(int iParam0)
{
	switch (iParam0)
	{
		case 42:
		case 43:
		case 44:
			return 3;
		case 45:
		case 46:
		case 47:
			return 4;
		case 48:
		case 49:
		case 50:
			return 5;
		case 51:
		case 52:
		case 53:
			return 6;
		case 54:
		case 55:
		case 56:
			return 7;
	}
	return 3;
}

float func_1770(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	if (TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(func_438(func_1750(func_1769(iParam0))), &iVar0))
	{
		iVar0 = (iVar0 - 1);
		if (TASK::WAYPOINT_RECORDING_GET_COORD(func_438(func_1750(func_1769(iParam0))), iVar0, &vVar1))
		{
			return __LIB_0__::func_94(Local_1523[func_1769(iParam0) /*5*/], vVar1, 1);
		}
	}
	return -1f;
}

bool func_1771(int iParam0)
{
	int iVar0;
	iVar0 = 3;
	while (iVar0 <= 7)
	{
		if (iParam0 == Local_1523[iVar0 /*5*/].f_2)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1772(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_424[iParam0 /*8*/]))
	{
		iVar1 = __LIB_3__::func_640(Local_424[iParam0 /*8*/], PED::GET_VEHICLE_PED_IS_IN(Local_424[iParam0 /*8*/], false));
		iVar3 = 0;
		while (iVar3 <= 2)
		{
			if (iVar3 == 0)
			{
				iVar0 = -1;
			}
			else if (iVar3 == 1)
			{
				iVar0 = 0;
			}
			else if (iVar3 == 2)
			{
				iVar0 = 1;
			}
			if (iVar1 == iVar0)
			{
			}
			else
			{
				iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(Local_424[iParam0 /*8*/], false), iVar0);
				if (!ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					return false;
				}
			}
			iVar3++;
		}
		return true;
	}
	return false;
}

bool func_1773(int iParam0)
{
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_424[iParam0 /*8*/]))
	{
		if (__LIB_3__::func_640(Local_424[iParam0 /*8*/], PED::GET_VEHICLE_PED_IS_IN(Local_424[iParam0 /*8*/], false)) == -1)
		{
			if (ENTITY::IS_ENTITY_DEAD(VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(Local_424[iParam0 /*8*/], false), 0)) && ENTITY::IS_ENTITY_DEAD(VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(Local_424[iParam0 /*8*/], false), 1)))
			{
				return true;
			}
		}
	}
	return false;
}

int func_1774(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam0;
	while (iVar0 <= iParam1)
	{
		if (Local_424[iVar0 /*8*/].f_2 == iParam2)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_1778(int iParam0)
{
	iLocal_2304 = iParam0;
}

void func_1779(int iParam0)
{
	iLocal_2302 = iParam0;
}

void func_1780()
{
	if (func_2150(Local_424[3 /*8*/], 45))
	{
		TASK::STOP_ANIM_PLAYBACK(Local_424[3 /*8*/], 0, true);
	}
	TASK::TASK_CLEAR_LOOK_AT(0);
}

void func_1782(bool bParam0)
{
	if (bParam0)
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Local_424[3 /*8*/], iLocal_1452[7], false, 0, false, false);
		TASK::TASK_SWAP_WEAPON(Local_424[3 /*8*/], 1, 1, 0, 0);
	}
	else
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Local_424[3 /*8*/], joaat("WEAPON_UNARMED"), false, 0, false, false);
		TASK::TASK_SWAP_WEAPON(Local_424[3 /*8*/], 1, 1, 0, 0);
	}
}

int func_1783(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	if (!MISC::_DOES_ITEM_HAVE_VALID_BASE(iLocal_2323))
	{
		iLocal_2323 = ITEMSET::CREATE_ITEMSET(true);
	}
	ITEMSET::_CLEAR_ITEMSET(iLocal_2323);
	iVar1 = iParam0;
	while (iVar1 <= iParam1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_424[iVar1 /*8*/]))
		{
			ITEMSET::ADD_TO_ITEMSET(Local_424[iVar1 /*8*/], iLocal_2323);
		}
		iVar1++;
	}
	if (!ITEMSET::GET_ITEMSET_SIZE(iLocal_2323) == 0)
	{
		iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, ITEMSET::GET_ITEMSET_SIZE(iLocal_2323));
		iVar1 = iParam0;
		while (iVar1 <= iParam1)
		{
			if (MISC::_GET_PED_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iLocal_2323)) == Local_424[iVar1 /*8*/])
			{
				iVar0 = iVar1;
			}
			else
			{
				iVar1++;
			}
		}
	}
	ITEMSET::DESTROY_ITEMSET(iLocal_2323);
	return iVar0;
}

Vector3 func_1784(float fParam0)
{
	return MISC::GET_RANDOM_FLOAT_IN_RANGE(fParam0, fParam0), MISC::GET_RANDOM_FLOAT_IN_RANGE(fParam0, fParam0), MISC::GET_RANDOM_FLOAT_IN_RANGE(fParam0, fParam0);
}

void func_1785(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 1;
			iVar1 = 2;
			break;
		case 1:
			iVar0 = 3;
			iVar1 = 4;
			break;
		case 2:
			iVar0 = 5;
			iVar1 = 6;
			break;
		case 3:
			iVar0 = 7;
			iVar1 = 8;
			break;
		case 4:
			iVar0 = 9;
			iVar1 = 10;
			break;
		case 5:
			iVar0 = 11;
			iVar1 = 12;
			break;
		case 6:
			iVar0 = 13;
			iVar1 = 14;
			break;
		case 7:
			iVar0 = 15;
			iVar1 = 16;
			break;
		default:
			break;
	}
	VEHICLE::SET_VEHICLE_EXTRA(Local_1700.f_1, iVar0, bParam1);
	VEHICLE::SET_VEHICLE_EXTRA(Local_1700.f_1, iVar1, !bParam1);
}

void func_1786(vector3 vParam0, float fParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_1700.f_1))
	{
		return;
	}
	GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD(func_1294(8), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1700.f_1, vParam0), 0f, 0f, 0f, fParam3, false, false, false);
}

int func_1794(int iParam0, int iParam1)
{
	var uVar0;
	return func_2160(&uVar0, iParam0, iParam1);
}

void func_1815(var uParam0, int iParam1, int iParam2, char* sParam3)
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
		func_1921(uParam0, iParam1, 374347, 0, sParam3, 67108863, 1023, 3, iParam2);
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

void func_1921(var uParam0, int iParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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
			uParam0->f_5423[iVar0 /*65*/].f_23[iVar1 /*4*/].f_3 = 374347;
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

void func_1923(int iParam0)
{
	switch (Local_2328[iParam0 /*5*/].f_1)
	{
		case 1:
			Local_2328[iParam0 /*5*/].f_1 = 2;
			break;
		case 2:
			Local_2328[iParam0 /*5*/].f_1 = 3;
			break;
		case 3:
			Local_2328[iParam0 /*5*/].f_1 = 4;
			break;
		case 7:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_2328[iParam0 /*5*/], "ARTHUR", Global_35, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_2328[iParam0 /*5*/], "Dutch", Local_424[2 /*8*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_2328[iParam0 /*5*/], "MicahBell", Local_424[4 /*8*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_2328[iParam0 /*5*/], "BillWilliamson", Local_424[5 /*8*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_2328[iParam0 /*5*/], "Hercule", Local_424[3 /*8*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_2328[iParam0 /*5*/], "Leon", Local_424[6 /*8*/], 0);
			break;
	}
}

void func_1924(int iParam0)
{
	switch (Local_2328[iParam0 /*5*/].f_1)
	{
		case 1:
			Local_2328[iParam0 /*5*/].f_1 = 2;
			break;
		case 2:
			Local_2328[iParam0 /*5*/].f_1 = 3;
			break;
		case 3:
			Local_2328[iParam0 /*5*/].f_1 = 4;
			break;
		case 7:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_2328[iParam0 /*5*/], "ARTHUR", Global_35, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_2328[iParam0 /*5*/], "BillWilliamson", Local_424[5 /*8*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_2328[iParam0 /*5*/], "Dutch", Local_424[2 /*8*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_2328[iParam0 /*5*/], "Frenchman", Local_424[6 /*8*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_2328[iParam0 /*5*/], "Hercule", Local_424[3 /*8*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_2328[iParam0 /*5*/], "MicahBell", Local_424[4 /*8*/], 0);
			break;
	}
}

void func_1925(int iParam0)
{
	switch (Local_2328[iParam0 /*5*/].f_1)
	{
		case 1:
			Local_2328[iParam0 /*5*/].f_1 = 2;
			break;
		case 2:
			Local_2328[iParam0 /*5*/].f_1 = 3;
			break;
		case 3:
			Local_2328[iParam0 /*5*/].f_1 = 4;
			break;
		case 7:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_2328[iParam0 /*5*/], "ARTHUR", Global_35, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_2328[iParam0 /*5*/], "Cannon", vLocal_2104.x, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_2328[iParam0 /*5*/], "Hercule", Local_424[3 /*8*/], 0);
			break;
	}
}

void func_1926(int iParam0)
{
	switch (Local_2328[iParam0 /*5*/].f_1)
	{
		case 1:
			Local_2328[iParam0 /*5*/].f_1 = 2;
			break;
		case 2:
			Local_2328[iParam0 /*5*/].f_1 = 3;
			break;
		case 3:
			Local_2328[iParam0 /*5*/].f_1 = 4;
			break;
		case 7:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_2328[iParam0 /*5*/], "Cannon", vLocal_2104.x, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_2328[iParam0 /*5*/], "Frenchman", Local_424[6 /*8*/], 0);
			break;
	}
}

void func_1927(int iParam0)
{
	switch (Local_2328[iParam0 /*5*/].f_1)
	{
		case 1:
			Local_2328[iParam0 /*5*/].f_1 = 2;
			break;
		case 2:
			Local_2328[iParam0 /*5*/].f_1 = 3;
			break;
		case 3:
			Local_2328[iParam0 /*5*/].f_1 = 4;
			break;
		case 7:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_2328[iParam0 /*5*/], "ARTHUR", Global_35, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_2328[iParam0 /*5*/], "Dutch", Local_424[2 /*8*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_2328[iParam0 /*5*/], "SHOOTER", Local_424[27 /*8*/], 0);
			break;
	}
}

void func_1928(int iParam0)
{
	switch (Local_2328[iParam0 /*5*/].f_1)
	{
		case 1:
			Local_2328[iParam0 /*5*/].f_1 = 2;
			break;
		case 2:
			Local_2328[iParam0 /*5*/].f_1 = 3;
			break;
		case 3:
			Local_2328[iParam0 /*5*/].f_1 = 4;
			break;
		case 7:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_2328[iParam0 /*5*/], "CS_Hercule", Local_424[3 /*8*/], 0);
			break;
	}
}

void func_1929(int iParam0)
{
	switch (Local_2328[iParam0 /*5*/].f_1)
	{
		case 1:
			Local_2328[iParam0 /*5*/].f_1 = 2;
			break;
		case 2:
			Local_2328[iParam0 /*5*/].f_1 = 3;
			break;
		case 3:
			Local_2328[iParam0 /*5*/].f_1 = 4;
			break;
		case 7:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_2328[iParam0 /*5*/], "ARTHUR", Global_35, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_2328[iParam0 /*5*/], "BillWilliamson", Local_424[5 /*8*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_2328[iParam0 /*5*/], "Frenchman_01", Local_424[6 /*8*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_2328[iParam0 /*5*/], "HOTCHISS_CANNON", vLocal_2104.x, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_2328[iParam0 /*5*/], "MicahBell", Local_424[4 /*8*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_2328[iParam0 /*5*/], "p_crateconf01x", Local_14.f_101[0], 0);
			break;
	}
}

void func_1930(int iParam0)
{
	switch (Local_2328[iParam0 /*5*/].f_1)
	{
		case 1:
			Local_2328[iParam0 /*5*/].f_1 = 2;
			break;
		case 2:
			Local_2328[iParam0 /*5*/].f_1 = 3;
			break;
		case 3:
			Local_2328[iParam0 /*5*/].f_1 = 4;
			break;
		case 7:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_2328[iParam0 /*5*/], "ARTHUR", Global_35, 0);
			break;
	}
}

void func_1933()
{
	int iVar0;
	int iVar1;
	iVar0 = 2099200;
	iVar1 = 27;
	while (iVar1 <= 38)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(Local_424[iVar1 /*8*/], false))
		{
			PED::_0xE0B61ED8BB37712F(Local_424[iVar1 /*8*/]);
		}
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_424[iVar1 /*8*/], func_2276(iVar1, 1), -45f, true, false, true);
		ENTITY::_0x9587913B9E772D29(Local_424[iVar1 /*8*/], 0);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_424[iVar1 /*8*/], func_2276(iVar1, 0), 1.75f, 20000, 0.25f, iVar0, 40000f);
		iVar1++;
	}
}

void func_1934(int iParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	switch (iParam0)
	{
		case 0:
			fVar0 = -0.162f;
			fVar1 = -0.012f;
			fVar2 = 0.138f;
			fVar3 = -0.012f;
			fVar4 = -0.039f;
			fVar5 = 0f;
			fVar6 = -1301.679f;
			fVar7 = -370.234f;
			fVar8 = -1560.731f;
			fVar9 = -1301.679f;
			fVar10 = -370.234f;
			fVar11 = -1560.731f;
			fVar12 = -0.106f;
			fVar13 = -0.03f;
			break;
	}
	GRAPHICS::_0xB8C984C0D47F4F07(fVar0, fVar1, 0);
	GRAPHICS::_0xB8C984C0D47F4F07(fVar2, fVar3, 1);
	GRAPHICS::_0x085C5B61A0114F32(fVar4, fVar5);
	GRAPHICS::_0xFE7966DF01452F32(fVar6, fVar7, fVar8);
	GRAPHICS::_0x10C1767B93257480(fVar9, fVar10, fVar11);
	GRAPHICS::_0x1FF8731BE1DFC0C0(fVar12, fVar13);
	if (bParam1)
	{
		GRAPHICS::_0x94B261F1F35293E1(1);
	}
}

void func_1935(int iParam0, struct<4> Param1, int iParam5, float fParam6)
{
	func_836(iParam0, Param1, Param1.f_3, iParam5, fParam6);
}

char* func_1936(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 4:
					return "p_barstool01x";
				case 5:
					return "p_chair02x";
				case 6:
					return "p_chair02x^1";
				case 7:
					return "p_chair02x^2";
				case 8:
					return "p_chair02x^3";
			}
			break;
	}
	return "";
}

bool func_1937(var uParam0, char[4] cParam1, var uParam2)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_7375.f_804))
	{
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam2))
	{
		return true;
	}
	else
	{
		*uParam2 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(__LIB_4__::func_553(&(uParam0->f_7375), cParam1));
		if (ENTITY::DOES_ENTITY_EXIST(*uParam2))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*uParam2, true, true);
			return true;
		}
	}
	return false;
}

void func_1939(int iParam0)
{
	PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_424[iParam0 /*8*/], ENTITY::GET_ENTITY_COORDS(Local_424[iParam0 /*8*/], true, false), 0.75f, 0, 0, 0);
	PED::SET_PED_COMBAT_MOVEMENT(Local_424[iParam0 /*8*/], 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_424[iParam0 /*8*/], 111, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_424[iParam0 /*8*/], 30, true);
	if (iParam0 == 3)
	{
		__LIB_4__::func_7(Local_424[iParam0 /*8*/], iLocal_1452[10], -1, 3, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
		WEAPON::SET_CURRENT_PED_WEAPON(Local_424[iParam0 /*8*/], iLocal_1452[10], true, 0, false, false);
	}
	TASK::TASK_SHOOT_AT_COORD(Local_424[iParam0 /*8*/], ENTITY::GET_ENTITY_COORDS(Local_1700.f_1, true, false), -1, joaat("FIRING_PATTERN_FULL_AUTO"), 0);
	func_1221(iParam0, 9);
}

void func_1940()
{
	int iVar0;
	if (OBJECT::DOES_PICKUP_EXIST(iLocal_2135))
	{
		OBJECT::REMOVE_PICKUP(iLocal_2135);
	}
	if (iLocal_1452[7] == joaat("WEAPON_RIFLE_BOLTACTION"))
	{
		iVar0 = joaat("PICKUP_WEAPON_RIFLE_BOLTACTION");
	}
	else if (iLocal_1452[7] == joaat("WEAPON_RIFLE_SPRINGFIELD"))
	{
		iVar0 = joaat("PICKUP_WEAPON_RIFLE_SPRINGFIELD");
	}
	iLocal_2320 = OBJECT::CREATE_PICKUP_ROTATE(iVar0, vLocal_2314, vLocal_2317, 2 | 524288, -1, 2, true, 0, 0, 0f, 0);
}

void func_1944(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	vector3 vVar8;
	vector3 vVar11;
	float fVar14;
	if (ENTITY::IS_ENTITY_DEAD(Local_1700.f_1))
	{
		return;
	}
	if (__LIB_0__::func_75(&(Local_1700.f_3[iParam0 /*33*/].f_13)))
	{
		if (__LIB_0__::func_265(&(Local_1700.f_3[iParam0 /*33*/].f_13)) >= Local_1700.f_3[iParam0 /*33*/].f_13.f_6)
		{
			__LIB_0__::func_37(&(Local_1700.f_3[iParam0 /*33*/].f_13));
		}
	}
	switch (Local_1700.f_3[iParam0 /*33*/].f_11)
	{
		case 0:
			if (!Local_1700.f_3[iParam0 /*33*/])
			{
				return;
			}
			__LIB_1__::func_283(&(Local_1700.f_3[iParam0 /*33*/].f_1), 0);
			if (__LIB_0__::func_75(&(Local_1700.f_3[iParam0 /*33*/].f_1)))
			{
				if (__LIB_0__::func_265(&(Local_1700.f_3[iParam0 /*33*/].f_1)) >= Local_1700.f_3[iParam0 /*33*/].f_4)
				{
					__LIB_0__::func_37(&(Local_1700.f_3[iParam0 /*33*/].f_1));
					Local_1700.f_3[iParam0 /*33*/].f_11 = 1;
				}
			}
			break;
		case 1:
			if (__LIB_4__::func_939(uParam1) == 3)
			{
				iVar3 = 10;
				iVar0 = 0;
				iVar1 = 34;
			}
			else if (__LIB_4__::func_939(uParam1) == 5)
			{
				iVar3 = 7;
				iVar0 = 0;
				iVar1 = 34;
			}
			else
			{
				iVar3 = 9;
				iVar0 = 0;
				iVar1 = 34;
			}
			iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(iVar0, iVar1 + 1);
			Local_1700.f_3[iParam0 /*33*/].f_13.f_10 = { func_1490(iVar3, iVar2) };
			Local_1700.f_3[iParam0 /*33*/].f_11 = 2;
			break;
		case 2:
			__LIB_1__::func_283(&(Local_1700.f_3[iParam0 /*33*/].f_13), 0);
			Local_1700.f_3[iParam0 /*33*/].f_13.f_13 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_1700.f_1, Local_1700.f_3[iParam0 /*33*/].f_5) };
			__LIB_1__::func_283(&(Local_1700.f_3[iParam0 /*33*/].f_13.f_3), 1);
			Local_1700.f_3[iParam0 /*33*/].f_13.f_9 = OBJECT::CREATE_OBJECT(func_437(15), Local_1700.f_3[iParam0 /*33*/].f_13.f_13, true, true, false, false, true);
			func_1734(iParam0);
			fVar4 = __LIB_5__::func_439(Local_1700.f_3[iParam0 /*33*/].f_13.f_19 == -1f, MISC::GET_RANDOM_FLOAT_IN_RANGE(2f, 6f), Local_1700.f_3[iParam0 /*33*/].f_13.f_19);
			fVar4 = __LIB_0__::func_251(fVar4, 2f, 6f);
			Local_1700.f_3[iParam0 /*33*/].f_13.f_17 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD(func_1294(6), ENTITY::GET_ENTITY_COORDS(Local_1700.f_3[iParam0 /*33*/].f_13.f_9, true, false), 0f, 0f, 0f, fVar4, false, false, false, false);
			if (Local_1700.f_3[iParam0 /*33*/].f_13.f_19 > 6f)
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(Local_1700.f_3[iParam0 /*33*/].f_13.f_17, "size", 1f, false);
			}
			ENTITY::SET_ENTITY_LOD_DIST(Local_1700.f_3[iParam0 /*33*/].f_13.f_9, 2000);
			ENTITY::SET_ENTITY_COLLISION(Local_1700.f_3[iParam0 /*33*/].f_13.f_9, false, false);
			Local_1700.f_3[iParam0 /*33*/].f_13.f_18 = -1;
			Local_1700.f_3[iParam0 /*33*/].f_13.f_18 = AUDIO::GET_SOUND_ID();
			if (!Local_1700.f_3[iParam0 /*33*/].f_13.f_18 == -1)
			{
				AUDIO::_0xF1C5310FEAA36B48(Local_1700.f_3[iParam0 /*33*/].f_13.f_18, func_1294(10), Local_1700.f_3[iParam0 /*33*/].f_13.f_9, func_1294(9), 0, 0);
			}
			Local_1700.f_3[iParam0 /*33*/].f_13.f_7 = (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_1700.f_3[iParam0 /*33*/].f_13.f_13, Local_1700.f_3[iParam0 /*33*/].f_13.f_10, true) / 80f);
			Local_1700.f_3[iParam0 /*33*/].f_13.f_6 = (Local_1700.f_3[iParam0 /*33*/].f_13.f_7 - 1f);
			Local_1700.f_3[iParam0 /*33*/].f_11 = 3;
			break;
		case 3:
			fVar6 = __LIB_0__::func_251(MISC::GET_DISTANCE_BETWEEN_COORDS(Local_1700.f_3[iParam0 /*33*/].f_13.f_13, Local_1700.f_3[iParam0 /*33*/].f_13.f_10, true), 100f, 500f);
			fVar7 = ((fVar6 - 100f) / (500f - 100f));
			fVar5 = __LIB_0__::func_667(8f, 100f, fVar7);
			vVar8 = { Local_1700.f_3[iParam0 /*33*/].f_13.f_10 + Vector(fVar5, 0f, 0f) };
			fVar14 = MISC::_0xEF50E344A8F93784(Local_1700.f_3[iParam0 /*33*/].f_13.f_8, 0f, 1f, 1);
			vVar11 = { __LIB_1__::func_367(vVar8, Local_1700.f_3[iParam0 /*33*/].f_13.f_10, fVar14) };
			Local_1700.f_3[iParam0 /*33*/].f_13.f_8 = __LIB_0__::func_667(0f, 1f, (__LIB_0__::func_265(&(Local_1700.f_3[iParam0 /*33*/].f_13.f_3)) / Local_1700.f_3[iParam0 /*33*/].f_13.f_7));
			if (Local_1700.f_3[iParam0 /*33*/].f_13.f_8 > 1f)
			{
				Local_1700.f_3[iParam0 /*33*/].f_13.f_8 = 1f;
			}
			ENTITY::SET_ENTITY_COORDS(Local_1700.f_3[iParam0 /*33*/].f_13.f_9, __LIB_1__::func_367(Local_1700.f_3[iParam0 /*33*/].f_13.f_13, vVar11, Local_1700.f_3[iParam0 /*33*/].f_13.f_8), true, false, true, true);
			GRAPHICS::SET_PARTICLE_FX_LOOPED_OFFSETS(Local_1700.f_3[iParam0 /*33*/].f_13.f_17, ENTITY::GET_ENTITY_COORDS(Local_1700.f_3[iParam0 /*33*/].f_13.f_9, true, false) + Vector(0f, 0f, 0f), 0f, 0f, 0f);
			if (Local_1700.f_3[iParam0 /*33*/].f_13.f_8 == 1f)
			{
				Local_1700.f_3[iParam0 /*33*/].f_11 = 4;
			}
			break;
		case 4:
			func_1247(iParam0, Local_1700.f_3[iParam0 /*33*/].f_13.f_10, 0.75f);
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_1700.f_3[iParam0 /*33*/].f_13.f_17))
			{
				GRAPHICS::STOP_PARTICLE_FX_LOOPED(Local_1700.f_3[iParam0 /*33*/].f_13.f_17, false);
			}
			Local_1700.f_3[iParam0 /*33*/].f_13.f_19 = -1f;
			OBJECT::DELETE_OBJECT(&(Local_1700.f_3[iParam0 /*33*/].f_13.f_9));
			__LIB_0__::func_37(&(Local_1700.f_3[iParam0 /*33*/].f_13.f_3));
			Local_1700.f_3[iParam0 /*33*/].f_13.f_7 = -1f;
			if (!Local_1700.f_3[iParam0 /*33*/].f_13.f_18 == -1)
			{
				AUDIO::_0x3210BCB36AF7621B(Local_1700.f_3[iParam0 /*33*/].f_13.f_18);
				AUDIO::RELEASE_SOUND_ID(Local_1700.f_3[iParam0 /*33*/].f_13.f_18);
				Local_1700.f_3[iParam0 /*33*/].f_13.f_18 = -1;
			}
			Local_1700.f_3[iParam0 /*33*/].f_11 = 0;
			break;
	}
}

void func_1956(var uParam0)
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
							iVar1 = func_2296(128);
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
			func_2297(uParam0);
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

bool func_2083(int iParam0, int iParam1)
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
				if (func_2083(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_2083(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_2083(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_2083(iVar21, 1))
				{
				}
			}
		}
		__LIB_1__::func_712();
		return true;
	}
	return false;
}

bool func_2125()
{
	return ((iLocal_2113 == 0 && !__LIB_5__::func_236(1)) && !__LIB_0__::func_481(1));
}

void func_2127(int iParam0, int iParam1)
{
	struct<15> Var0;
	if (!CAM::DOES_CAM_EXIST(iLocal_1494[iParam0]))
	{
		return;
	}
	Var0 = { func_1224(iParam0) };
	CAM::SET_CAM_PARAMS(iLocal_1494[iParam0], Var0.f_8, Var0.f_11, Var0.f_14, BUILTIN::FLOOR((Var0.f_7 * 1000f)), 1, 1, 2, iParam1, 0);
}

bool func_2150(int iParam0, int iParam1)
{
	return ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, func_440(iParam1, 1), func_440(iParam1, 0), 1);
}

int func_2160(var uParam0, int iParam1, int iParam2)
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
		return func_2160(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

Vector3 func_2276(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(func_2276(iParam0, 0), -42f, 0f, -7f, 0f);
	}
	switch (iParam0)
	{
		case 27:
			if (bParam1)
			{
			}
			else
			{
				return 975.103f, -6759.08f, 44.7416f;
			}
			break;
		case 28:
			if (bParam1)
			{
			}
			else
			{
				return 970.823f, -6765.24f, 43.7823f;
			}
			break;
		case 29:
			if (bParam1)
			{
			}
			else
			{
				return 972.619f, -6762.78f, 43.6828f;
			}
			break;
		case 30:
			if (bParam1)
			{
			}
			else
			{
				return 972.211f, -6765.48f, 43.8681f;
			}
			break;
		case 31:
			if (bParam1)
			{
			}
			else
			{
				return 971.897f, -6762.51f, 43.7248f;
			}
			break;
		case 32:
			if (bParam1)
			{
			}
			else
			{
				return 967.26f, -6767.62f, 42.786f;
			}
			break;
		case 33:
			if (bParam1)
			{
			}
			else
			{
				return 968.034f, -6769f, 42.792f;
			}
			break;
		case 34:
			if (bParam1)
			{
			}
			else
			{
				return 969.053f, -6769.51f, 42.8752f;
			}
			break;
		case 35:
			if (bParam1)
			{
			}
			else
			{
				return 967.645f, -6769.95f, 42.5136f;
			}
			break;
		case 36:
			if (bParam1)
			{
			}
			else
			{
				return 965.827f, -6767.9f, 42.3977f;
			}
			break;
		case 37:
			if (bParam1)
			{
			}
			else
			{
				return 966.611f, -6768.83f, 42.5063f;
			}
			break;
		case 38:
			if (bParam1)
			{
			}
			else
			{
				return 968.915f, -6770.97f, 42.6132f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_2296(int iParam0)
{
	var uVar0;
	var uVar4;
	int iVar8;
	int iVar9;
	iVar8 = func_1339(&uVar0, iParam0, 0);
	iVar9 = func_2160(&uVar4, iParam0, 0);
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

void func_2297(var uParam0)
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
					iVar2 = func_2296(128);
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
				iVar3 = func_2296(128);
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

