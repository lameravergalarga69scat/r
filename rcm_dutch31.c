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
	vector3 vLocal_14 = { 0f, 0f, 0f };
	vector3 vLocal_17 = { 0f, 0f, 0f };
	vector3 vLocal_20 = { 0f, 0f, 0f };
	vector3 vLocal_23 = { 0f, 0f, 0f };
	vector3 vLocal_26 = { 0f, 0f, 0f };
	vector3 vLocal_29 = { 0f, 0f, 0f };
	vector3 vLocal_32 = { 0f, 0f, 0f };
	float fLocal_35 = 0f;
	vector3 vLocal_36 = { 0f, 0f, 0f };
	float fLocal_39 = 0f;
	vector3 vLocal_40 = { 0f, 0f, 0f };
	float fLocal_43 = 0f;
	vector3 vLocal_44 = { 0f, 0f, 0f };
	float fLocal_47 = 0f;
	vector3 vLocal_48 = { 0f, 0f, 0f };
	float fLocal_51 = 0f;
	vector3 vLocal_52 = { 0f, 0f, 0f };
	float fLocal_55 = 0f;
	vector3 vLocal_56 = { 0f, 0f, 0f };
	float fLocal_59 = 0f;
	vector3 vLocal_60 = { 0f, 0f, 0f };
	float fLocal_63 = 0f;
	vector3 vLocal_64 = { 0f, 0f, 0f };
	float fLocal_67 = 0f;
	vector3 vLocal_68 = { 0f, 0f, 0f };
	float fLocal_71 = 0f;
	vector3 vLocal_72 = { 0f, 0f, 0f };
	float fLocal_75 = 0f;
	vector3 vLocal_76 = { 0f, 0f, 0f };
	float fLocal_79 = 0f;
	vector3 vLocal_80 = { 0f, 0f, 0f };
	float fLocal_83 = 0f;
	vector3 vLocal_84 = { 0f, 0f, 0f };
	float fLocal_87 = 0f;
	vector3 vLocal_88 = { 0f, 0f, 0f };
	float fLocal_91 = 0f;
	vector3 vLocal_92 = { 0f, 0f, 0f };
	float fLocal_95 = 0f;
	vector3 vLocal_96 = { 0f, 0f, 0f };
	float fLocal_99 = 0f;
	vector3 vLocal_100 = { 0f, 0f, 0f };
	float fLocal_103 = 0f;
	vector3 vLocal_104 = { 0f, 0f, 0f };
	float fLocal_107 = 0f;
	vector3 vLocal_108 = { 0f, 0f, 0f };
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	var uLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	var uLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	struct<13> Local_122 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	struct<19> Local_142 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_161 = 0;
	struct<20> Local_162 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	int iLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	int iLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	int iLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	int iLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	int iLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	int iLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	int iLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	int iLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	int iLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
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
	int iLocal_382 = 0;
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
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	int iLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	int iLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	struct<20> Local_442[3];
	struct<20> Local_503[8];
	struct<20> Local_664[4];
	struct<20> Local_745[5];
	struct<20> Local_846[1];
	struct<20> Local_867[5];
	struct<20> Local_968[6];
	struct<20> Local_1089[2];
	struct<10> Local_1130 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	int iLocal_1150 = 0;
	int iLocal_1151 = 0;
	var uLocal_1152[2] = { 0, 0 };
	int iLocal_1155 = 0;
	var uLocal_1156 = 2;
	var uLocal_1157 = 0;
	var uLocal_1158 = 0;
	int iLocal_1159 = 0;
	int iLocal_1160 = 0;
	int iLocal_1161 = 0;
	int iLocal_1162 = 0;
	bool bLocal_1163 = false;
	int iLocal_1164 = 0;
	bool bLocal_1165 = false;
	int iLocal_1166 = 0;
	int iLocal_1167 = 0;
	int iLocal_1168 = 0;
	float fLocal_1169 = 0f;
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
	var uLocal_1202 = 0;
	var uLocal_1203 = 0;
	var uLocal_1204 = 0;
	var uLocal_1205 = 0;
	var uLocal_1206 = 0;
	var uLocal_1207 = 0;
	var uLocal_1208 = -1;
	var uLocal_1209 = 0;
	var uLocal_1210 = 0;
	var uLocal_1211 = 0;
	var uLocal_1212 = 0;
	var uLocal_1213 = 0;
	var uLocal_1214 = 0;
	var uLocal_1215 = 0;
	var uLocal_1216 = 0;
	var uLocal_1217 = 1097859072;
	var uLocal_1218 = 1000;
	var uLocal_1219 = 1067450368;
	var uLocal_1220 = 5000;
	var uLocal_1221 = 42;
	var uLocal_1222 = 1103626240;
	var uLocal_1223 = 1077936128;
	var uLocal_1224 = 1106247680;
	var uLocal_1225 = 1103101952;
	var uLocal_1226 = 1097859072;
	var uLocal_1227 = 1103626240;
	var uLocal_1228 = 0;
	int iLocal_1229 = 0;
	int iLocal_1230 = 0;
	int iLocal_1231 = 0;
	int iLocal_1232[3] = { 0, 0, 0 };
	int iLocal_1236[3] = { 0, 0, 0 };
	int iLocal_1240[41] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	vector3 vLocal_1282[3] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_1292[105] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_1398 = false;
	var uLocal_1399 = 4;
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
	struct<5> Local_1412[17];
	var uLocal_1498 = 1;
	var uLocal_1499 = 0;
	var uLocal_1500 = 0;
	var uLocal_1501 = 0;
	var uLocal_1502 = 0;
	var uLocal_1503 = 0;
	int iLocal_1504[3] = { 0, 0, 0 };
	int iLocal_1508[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<9> Local_1518 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1527 = 0;
	var uLocal_1528 = 0;
	var uLocal_1529 = 0;
	var uLocal_1530 = 0;
	var uLocal_1531 = 0;
	var uLocal_1532 = 0;
	var uLocal_1533 = 0;
	var uLocal_1534 = 0;
	var uLocal_1535 = 0;
	var uLocal_1536 = 0;
	var uLocal_1537 = 0;
	var uLocal_1538 = 0;
	var uLocal_1539 = 0;
	var uLocal_1540 = 0;
	var uLocal_1541 = 21;
	var uLocal_1542 = 6;
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
	var uLocal_1557 = 0;
	var uLocal_1558 = 0;
	var uLocal_1559 = 0;
	var uLocal_1560 = 0;
	var uLocal_1561 = 0;
	struct<17> Local_1562[1];
	int iLocal_1580 = 0;
	var uLocal_1581 = -1;
	var uLocal_1582 = 0;
	var uLocal_1583 = -1;
	var uLocal_1584 = 0;
	var uLocal_1585 = 0;
	var uLocal_1586 = -1;
	var uLocal_1587 = 0;
	var uLocal_1588 = 0;
	var uLocal_1589 = 0;
	var uLocal_1590 = 0;
	var uLocal_1591 = 0;
	var uLocal_1592 = 1073741824;
	var uLocal_1593 = 0;
	var uLocal_1594 = 0;
	var uLocal_1595 = 0;
	var uLocal_1596 = 1;
	var uLocal_1597 = 0;
	var uLocal_1598 = 0;
	var uLocal_1599 = 0;
	var uLocal_1600 = 0;
	var uLocal_1601 = 0;
	var uLocal_1602 = 0;
	var uLocal_1603 = 0;
	var uLocal_1604 = 0;
	var uLocal_1605 = 0;
	var uLocal_1606 = 1106247680;
	var uLocal_1607 = 1067450368;
	var uLocal_1608 = 0;
	var uLocal_1609 = 1092616192;
	var uLocal_1610 = 1112014848;
	var uLocal_1611 = 1106247680;
	var uLocal_1612 = 1101529088;
	var uLocal_1613 = 1101004800;
	var uLocal_1614 = 1084227584;
	var uLocal_1615 = 0;
	var uLocal_1616 = 0;
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
	var uLocal_1645 = 0;
	var uLocal_1646 = 0;
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
	int iLocal_1659[1] = { 0 };
	int iLocal_1661[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1669 = 0;
	int iLocal_1670 = 0;
	int iLocal_1671 = 0;
	int iLocal_1672 = 0;
	int iLocal_1673 = 0;
	int iLocal_1674 = 0;
	int iLocal_1675 = 0;
	var uLocal_1676 = 0;
	int iLocal_1677 = 0;
	vector3 vLocal_1678 = { 0f, 0f, 0f };
	int iLocal_1681 = 0;
	int iLocal_1682 = 0;
	int iLocal_1683 = 0;
	int iLocal_1684 = 0;
	int iLocal_1685 = 0;
	int iLocal_1686 = 0;
	int iLocal_1687 = 0;
	int iLocal_1688 = 0;
	int iLocal_1689 = 0;
	int iLocal_1690 = 0;
	int iLocal_1691 = 0;
	int iLocal_1692 = 0;
	int iLocal_1693 = 0;
	int iLocal_1694 = 0;
	int iLocal_1695 = 0;
	int iLocal_1696 = 0;
	int iLocal_1697 = 0;
	var uLocal_1698 = 0;
	var uLocal_1699 = 0;
	var uLocal_1700 = 0;
	int iLocal_1701 = 0;
	int iLocal_1702 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion
void __EntryFunction__()
{
	struct<2606> Var0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	vLocal_14 = { 2363.1f, -48.35f, 40.8f };
	vLocal_17 = { 2483.793f, 783.699f, 66.1927f };
	vLocal_20 = { 2358.781f, 1311.519f, 110.2402f };
	vLocal_23 = { 2934.861f, 1320.046f, 43.2061f };
	vLocal_26 = { 2361.696f, -52.7913f, 40.9818f };
	vLocal_29 = { 0f, 0f, 63f };
	vLocal_32 = { 2422.179f, 722.9842f, 66.3667f };
	fLocal_35 = 329.4033f;
	vLocal_36 = { 2537.544f, 833.2025f, 77.0539f };
	fLocal_39 = 174.3617f;
	vLocal_40 = { 2535.038f, 832.637f, 76.7719f };
	fLocal_43 = 218.324f;
	vLocal_44 = { 2363.752f, 1303.518f, 110.3878f };
	fLocal_47 = 53.6121f;
	vLocal_48 = { 2364.149f, 1306.002f, 110.3847f };
	fLocal_51 = 94.8336f;
	vLocal_52 = { 2372.903f, 1289.927f, 110.2699f };
	fLocal_55 = 63.2161f;
	vLocal_56 = { 2309.654f, 1454.77f, 82.2361f };
	fLocal_59 = 105.5255f;
	vLocal_60 = { 2860.089f, 1359.135f, 63.8118f };
	fLocal_63 = 341.3174f;
	vLocal_64 = { 2248.368f, -799.1768f, 43.1252f };
	fLocal_67 = -37.12f;
	vLocal_68 = { 2241.465f, -773.5107f, 42.3029f };
	fLocal_71 = 286.4857f;
	vLocal_72 = { 2279.278f, -753.1235f, 41.0072f };
	fLocal_75 = 66.7128f;
	vLocal_76 = { 2282.914f, -760.7125f, 40.7294f };
	fLocal_79 = 97.9132f;
	vLocal_80 = { 2384.048f, -59.4108f, 42.2483f };
	fLocal_83 = 42.6819f;
	vLocal_84 = { 2386.811f, 1199.838f, 97.3488f };
	fLocal_87 = 38.5809f;
	vLocal_88 = { 2385.912f, 1196.593f, 97.2074f };
	fLocal_91 = 46.6995f;
	vLocal_92 = { 2387.092f, 1202.776f, 97.4055f };
	fLocal_95 = 43.7635f;
	vLocal_96 = { 2289.49f, 1463.46f, 82.116f };
	fLocal_99 = 256.6008f;
	vLocal_100 = { 2854.712f, 1366.416f, 64.8465f };
	fLocal_103 = 252.6244f;
	vLocal_104 = { 2355.266f, 1364.019f, 104.9586f };
	fLocal_107 = 9.2324f;
	vLocal_108 = { 2357.208f, 1389.164f, 105.95f };
	iLocal_111 = 4100;
	iLocal_1681 = -1;
	iLocal_1682 = -1;
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
		func_3(&Var0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	func_4(&Var0);
	while (true)
	{
		func_5(&Var0);
		if (__LIB_0__::func_1(Var0.f_172, 50331648))
		{
			func_7(&Var0);
		}
		else
		{
			switch (Var0.f_177)
			{
				case 0:
					__LIB_12__::func_906(&Var0);
					break;
				case 1:
					func_9(&Var0);
					break;
				case 3:
					func_10(&Var0);
					break;
				case 4:
					func_11(&Var0);
					break;
				case 2:
					func_12(&Var0);
					break;
				case 5:
					func_13(&Var0);
					break;
				case 6:
					func_14(&Var0);
					break;
				case 7:
					func_15(&Var0);
					break;
				case 8:
					func_16(&Var0);
					break;
				case 9:
					func_17(&Var0, 0);
					break;
				case 10:
					func_18(&Var0);
					break;
				case 11:
					if (Var0.f_174 != __LIB_10__::func_698())
					{
					}
					else
					{
						__LIB_0__::func_297();
						__LIB_1__::func_140();
					}
					func_22(&Var0);
					break;
			}
		}
		BUILTIN::WAIT(0);
	}
}

void func_3(var uParam0)
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
			func_16(uParam0);
		}
		else
		{
			func_17(uParam0, 1);
			return;
		}
	}
	if (uParam0->f_177 == 10)
	{
		__LIB_0__::func_11(uParam0);
	}
	__LIB_12__::func_836(&(uParam0->f_753));
	func_22(uParam0);
}

void func_4(var uParam0)
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
	func_36(uParam0);
	__LIB_12__::func_642(uParam0);
	__LIB_12__::func_781(uParam0, 0, 0, 0, -1, -1, 0);
	__LIB_12__::func_782(uParam0, 0, 0, 0, -1, -1, 0);
	__LIB_12__::func_894(&(uParam0->f_178));
	if (Global_1347702[uParam0->f_174 /*49*/].f_28 != 0)
	{
		__LIB_12__::func_867(uParam0, Global_1347702[uParam0->f_174 /*49*/].f_28, 7);
	}
	func_42(uParam0);
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

void func_5(var uParam0)
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
	if (func_53(uParam0))
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
						Var1 = { func_61(0) };
						if (func_62(&Var1))
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
			if (func_64(uParam0))
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
			func_68(uParam0);
		}
		else if (!__LIB_12__::func_639(uParam0, 64) && !__LIB_12__::func_738(uParam0))
		{
			uParam0->f_743 = BUILTIN::VDIST2(__LIB_1__::func_440(uParam0->f_174), Global_36);
			if (func_70(uParam0))
			{
				if (__LIB_12__::func_644(uParam0) == 2 || __LIB_12__::func_644(uParam0) == 12)
				{
					func_22(uParam0);
					return;
				}
				func_72(uParam0);
				__LIB_12__::func_837(uParam0, 10);
				return;
			}
			else
			{
				__LIB_12__::func_996(uParam0);
			}
			func_74(uParam0);
		}
	}
	func_75(uParam0);
	if (__LIB_0__::func_1(uParam0->f_172, 32))
	{
		__LIB_12__::func_954(uParam0, func_76(uParam0));
	}
	else if (__LIB_0__::func_1(uParam0->f_172, 8))
	{
		if (__LIB_12__::func_964(uParam0))
		{
		}
	}
}

void func_7(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_172, 8))
	{
		func_17(uParam0, 0);
	}
	else
	{
		if (!__LIB_0__::func_899(&(uParam0->f_2597)))
		{
			__LIB_4__::func_89(&(uParam0->f_2597), 0);
		}
		__LIB_0__::func_11(uParam0);
		if (__LIB_1__::func_592(&(uParam0->f_2597)) >= 2500 || CAM::IS_SCREEN_FADED_OUT())
		{
			if (uParam0->f_177 == 10)
			{
				__LIB_0__::func_11(uParam0);
			}
			else
			{
				func_72(uParam0);
			}
			func_22(uParam0);
		}
	}
}

void func_9(var uParam0)
{
	if (func_85(uParam0))
	{
		if (__LIB_12__::func_639(uParam0, 64))
		{
			func_86(uParam0);
			__LIB_12__::func_837(uParam0, 2);
			__LIB_12__::func_964(uParam0);
		}
		else if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_12, 4096))
		{
			__LIB_12__::func_837(uParam0, 3);
		}
		else
		{
			func_87(uParam0);
			__LIB_12__::func_837(uParam0, 4);
		}
	}
}

void func_10(var uParam0)
{
	int iVar0;
	if (!__LIB_0__::func_899(&(uParam0->f_2585)) || IntToFloat(__LIB_1__::func_592(&(uParam0->f_2585))) > __LIB_10__::func_381(uParam0))
	{
		__LIB_4__::func_89(&(uParam0->f_2585), 1);
		iVar0 = __LIB_9__::func_762(uParam0);
		if (iVar0 != 3)
		{
			if ((iVar0 == 7 || iVar0 == 5) || iVar0 == 6)
			{
				func_86(uParam0);
				__LIB_12__::func_964(uParam0);
			}
			__LIB_12__::func_837(uParam0, iVar0);
		}
	}
}

void func_11(var uParam0)
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
	__LIB_0__::func_11(uParam0);
	if (func_92(uParam0))
	{
		func_86(uParam0);
		iVar0 = func_93(uParam0);
		if (iVar0 == 5)
		{
			__LIB_12__::func_646(uParam0, 4);
			func_13(uParam0);
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
			func_14(uParam0);
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

void func_12(var uParam0)
{
	if (!__LIB_0__::func_1(uParam0->f_172, 8192))
	{
		return;
	}
	__LIB_12__::func_837(uParam0, func_96(uParam0, __LIB_12__::func_767(uParam0)));
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

void func_13(var uParam0)
{
	if (func_98(uParam0))
	{
		func_14(uParam0);
		__LIB_12__::func_837(uParam0, 6);
	}
}

void func_14(var uParam0)
{
	int iVar0;
	func_99(uParam0);
	if (__LIB_12__::func_647(&(uParam0->f_2575)))
	{
		if (func_101(uParam0))
		{
			__LIB_12__::func_966(uParam0, 1);
			iVar0 = func_103(uParam0);
			__LIB_12__::func_837(uParam0, iVar0);
		}
	}
	else
	{
		__LIB_0__::func_8(&(uParam0->f_172), 16);
		__LIB_12__::func_966(uParam0, 0);
		iVar0 = func_103(uParam0);
		__LIB_12__::func_837(uParam0, iVar0);
	}
}

void func_15(var uParam0)
{
	int iVar0;
	if (func_104(uParam0))
	{
		return;
	}
	if (__LIB_0__::func_1(uParam0->f_172, 262144))
	{
		func_106(uParam0, __LIB_0__::func_58(uParam0));
	}
	iVar0 = func_107(uParam0);
	if (iVar0 == 5)
	{
		__LIB_12__::func_646(uParam0, 7);
		func_13(uParam0);
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
		func_14(uParam0);
	}
	__LIB_12__::func_837(uParam0, iVar0);
}

void func_16(var uParam0)
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
			func_128(uParam0->f_174, 1, 1, 0, 1, 1, bVar3);
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
			func_131();
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
	func_72(uParam0);
	if (__LIB_0__::func_1(uParam0->f_172, 32768) || __LIB_12__::func_738(uParam0))
	{
		func_22(uParam0);
	}
	__LIB_12__::func_837(uParam0, 10);
}

void func_17(var uParam0, bool bParam1)
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
			else if (__LIB_1__::func_592(&(uParam0->f_2597)) >= 2500)
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
		func_72(uParam0);
	}
	if (bParam1)
	{
		func_22(uParam0);
	}
	else
	{
		__LIB_12__::func_837(uParam0, 10);
	}
}

void func_18(var uParam0)
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
			func_22(uParam0);
			return;
		}
	}
	if (__LIB_0__::func_0(uParam0) && __LIB_10__::func_265())
	{
		__LIB_0__::func_11(uParam0);
		func_22(uParam0);
	}
	else if (!__LIB_0__::func_899(&(uParam0->f_2585)) || IntToFloat(__LIB_1__::func_592(&(uParam0->f_2585))) > __LIB_10__::func_381(uParam0))
	{
		__LIB_4__::func_89(&(uParam0->f_2585), 1);
		if (__LIB_0__::func_0(uParam0))
		{
			__LIB_12__::func_837(uParam0, 11);
		}
	}
}

void func_22(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	func_159(uParam0);
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
	__LIB_1__::func_721(0);
	__LIB_1__::func_721(1);
	__LIB_4__::func_509(0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_36(var uParam0)
{
	iLocal_1164 = 1;
	func_185();
	__LIB_12__::func_25(79, 1, 0);
	__LIB_12__::func_659(uParam0, 22);
	__LIB_12__::func_656(uParam0, 16f);
	__LIB_12__::func_657(uParam0, 16f);
	StringCopy(&Local_1518, "camera_treatments", 64);
	StringCopy(&(Local_1518.f_8), "GENERIC_CME_PULL_OUT_TREATMENT_REQUEST", 64);
	__LIB_4__::func_228(&uLocal_1200);
	__LIB_6__::func_905(&uLocal_1200);
	__LIB_9__::func_261(&uLocal_1200);
	__LIB_2__::func_595(&uLocal_1200, 30f);
	__LIB_1__::func_393(&uLocal_1200, 0);
	__LIB_9__::func_714(&uLocal_1200, 1);
	__LIB_1__::func_400(&uLocal_1200, 1);
	__LIB_9__::func_262(&uLocal_1200, 1);
	__LIB_17__::func_315(&uLocal_1200, 1);
}

void func_42(var uParam0)
{
	STREAMING::REQUEST_ANIM_DICT("script_common@dead@male");
	__LIB_12__::func_908(uParam0, 0);
}

bool func_53(var uParam0)
{
	int iVar0;
	bool bVar1;
	switch (__LIB_5__::func_381(&iVar0))
	{
		case 1:
			StringCopy(&(uParam0->f_2578), "", 24);
			func_17(uParam0, 0);
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

struct<4> func_61(int iParam0)
{
	int iVar0;
	struct<4> Var1;
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 0:
			Var1 = { 2248.298f, -796.2435f, 43.1481f };
			Var1.f_3 = 5.616f;
			break;
		case 1:
			Var1 = { 2368.635f, -58.8718f, 41.9655f };
			Var1.f_3 = 30.5154f;
			break;
		case 2:
			Var1 = { 2415.917f, 738.8943f, 67.05f };
			Var1.f_3 = 313.9334f;
			break;
		case 3:
			Var1 = { 2387.131f, 1186.174f, 97.2688f };
			Var1.f_3 = 0f;
			break;
		case 4:
		case 5:
			Var1 = { 2358.917f, 1313.295f, 109.8719f };
			Var1.f_3 = 10.658f;
			break;
		case 6:
			Var1 = { 2292.69f, 1461.333f, 82.1279f };
			Var1.f_3 = 75.3061f;
			break;
		case 7:
			Var1 = { 2354.227f, 1370.98f, 105.1311f };
			Var1.f_3 = 177.7892f;
			break;
		case 8:
			Var1 = { vLocal_23 };
			Var1.f_3 = 72.5608f;
			break;
		case 9:
			Var1 = { 2920.162f, 1299.116f, 43.2276f };
			Var1.f_3 = 161.4241f;
			break;
		case 10:
		case 11:
			Var1 = { 2341.359f, 1359.426f, 105.3715f };
			Var1.f_3 = 313.5294f;
			break;
	}
	return Var1;
}

bool func_62(var uParam0)
{
	return func_212(*uParam0, uParam0->f_3);
}

bool func_64(var uParam0)
{
	if (__LIB_0__::func_27(iLocal_1670, 2048))
	{
		return false;
	}
	if (__LIB_0__::func_27(iLocal_1671, 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_122))
		{
			if (func_214(Local_122))
			{
				StringCopy(&(uParam0->f_2578), "ALLY_DEAD_DUTCH", 24);
				return true;
			}
		}
	}
	if (__LIB_0__::func_27(iLocal_1671, 2))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_142))
		{
			if (func_214(Local_142))
			{
				StringCopy(&(uParam0->f_2578), "ALLY_DEAD_CHARLES", 24);
				return true;
			}
		}
	}
	if (__LIB_0__::func_27(iLocal_1671, 32))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1151))
		{
			if (func_214(iLocal_1151))
			{
				StringCopy(&(uParam0->f_2578), "ALLY_MOUNT_DEAD_CHARLES", 24);
				return true;
			}
		}
	}
	if (__LIB_0__::func_27(iLocal_1671, 16))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1150))
		{
			if (func_214(iLocal_1150))
			{
				StringCopy(&(uParam0->f_2578), "ALLY_DEAD_HORSE_PLAYER", 24);
				return true;
			}
		}
	}
	if (__LIB_0__::func_27(iLocal_1671, 64))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_142) && !PED::IS_PED_INJURED(Local_142))
		{
			if (Local_142.f_18 > (300f / 2f))
			{
				StringCopy(&(uParam0->f_2578), "CHARLES_ABANDON", 24);
				return true;
			}
		}
	}
	if (__LIB_0__::func_27(iLocal_1671, 4))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_162))
		{
			if (func_214(Local_162))
			{
				StringCopy(&(uParam0->f_2578), "RDCH31_F_WOMD", 24);
				return true;
			}
		}
	}
	if (__LIB_0__::func_27(iLocal_1671, 128))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_162) && !PED::IS_PED_INJURED(Local_162))
		{
			if (Local_162.f_18 > (300f / 2f))
			{
				StringCopy(&(uParam0->f_2578), "RDCH31_F_WOMA", 24);
				return true;
			}
		}
	}
	if (__LIB_0__::func_27(iLocal_1671, 256))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1161))
		{
			if (((ENTITY::IS_ENTITY_DEAD(iLocal_1161) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1161, false, false)) || FIRE::IS_ENTITY_ON_FIRE(iLocal_1161)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_1161, Global_35, 1, 1))
			{
				StringCopy(&(uParam0->f_2578), "RDCH31_F_CAND", 24);
				return true;
			}
		}
	}
	if (__LIB_0__::func_27(iLocal_1671, 512))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1161))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_1161))
			{
				if (__LIB_13__::func_559(&iLocal_1161))
				{
					StringCopy(&(uParam0->f_2578), "RDCH31_F_CANS", 24);
					return true;
				}
			}
		}
	}
	if (__LIB_0__::func_27(iLocal_1671, 2048))
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && __LIB_2__::func_173(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			StringCopy(&(uParam0->f_2578), "LAW_FAIL", 24);
			return true;
		}
	}
	if (__LIB_0__::func_27(iLocal_1671, 4096))
	{
		if ((__LIB_0__::func_27(Local_1130.f_9, 134217728) || __LIB_0__::func_27(Local_1089[0 /*20*/].f_9, 134217728)) || __LIB_0__::func_27(Local_1089[1 /*20*/].f_9, 134217728))
		{
			StringCopy(&(uParam0->f_2578), "LAW_FAIL", 24);
			return true;
		}
	}
	if ((__LIB_0__::func_27(iLocal_1671, 8192) && __LIB_0__::func_394(Global_35, uLocal_1152[0], 0)) || __LIB_0__::func_394(Global_35, uLocal_1152[1], 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1160))
		{
			if (ENTITY::IS_ENTITY_DEAD(iLocal_1160))
			{
				StringCopy(&(uParam0->f_2578), "ALLY_MOUNT_DEAD_", 24);
				return true;
			}
		}
	}
	return false;
}

void func_68(var uParam0)
{
	func_218(uParam0);
	if (__LIB_0__::func_899(&uLocal_1194))
	{
		STREAMING::SET_SRL_TIME(BUILTIN::TO_FLOAT(__LIB_1__::func_592(&uLocal_1194)));
	}
	if (bLocal_1398)
	{
		HUD::_0xC9CAEAEEC1256E54(-1679307491);
		CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	}
	POPULATION::_0xF45E46DEECF7DF6E(iLocal_111, 0, 0, -1, -1);
	switch (iLocal_116)
	{
		case 2:
		case 3:
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
			VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
			__LIB_5__::func_521(0.9f);
			break;
		case 4:
			PED::_0xAB0D553FE20A6E25(0f);
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
			VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
			__LIB_5__::func_521(0.9f);
			break;
		case 5:
			__LIB_5__::func_521(0.5f);
			break;
		case 6:
			__LIB_5__::func_521(0.6f);
			break;
		default:
			__LIB_6__::func_357();
			break;
	}
	if (iLocal_1164 == 1)
	{
		switch (iLocal_116)
		{
			case 0:
			case 1:
				break;
			case 2:
			case 3:
			case 4:
			case 5:
			case 6:
			case 7:
				break;
		}
	}
	if (iLocal_112 == 0)
	{
		switch (iLocal_116)
		{
			case 2:
			case 3:
			case 4:
			case 5:
				__LIB_1__::func_538(1);
				break;
		}
	}
	if (!__LIB_0__::func_27(iLocal_1670, 1))
	{
		if (func_222(&iLocal_1236))
		{
			__LIB_1__::func_683(&iLocal_1670, 1);
		}
	}
}

bool func_70(var uParam0)
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
	if (func_226(uParam0->f_174))
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
	if (__LIB_18__::func_615(uParam0) || __LIB_12__::func_663(uParam0->f_174, uParam0->f_743))
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

void func_72(var uParam0)
{
	bool bVar0;
	__LIB_12__::func_955();
	func_240(uParam0);
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

void func_74(var uParam0)
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
			func_255(uParam0);
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

void func_75(var uParam0)
{
	bool bVar0;
	bool bVar1;
	if (!__LIB_0__::func_1(uParam0->f_172, 16))
	{
		return;
	}
	if (__LIB_0__::func_86(uParam0->f_206.f_5))
	{
		uParam0->f_206.f_5 = { __LIB_1__::func_440(uParam0->f_174) };
	}
	bVar0 = func_262(uParam0);
	if (!bVar0)
	{
		if (__LIB_0__::func_1(uParam0->f_172, 8))
		{
			if (uParam0->f_206.f_338 == 15f)
			{
				uParam0->f_206.f_338 = 50f;
			}
			if (uParam0->f_206.f_339 == 20f)
			{
				uParam0->f_206.f_339 = 75f;
			}
		}
		else
		{
			if (uParam0->f_206.f_338 > 15f)
			{
				uParam0->f_206.f_338 = 15f;
			}
			if (uParam0->f_206.f_339 > 20f)
			{
				uParam0->f_206.f_339 = 20f;
			}
		}
		if (uParam0->f_206.f_338 <= 0f)
		{
		}
		else if (uParam0->f_206.f_339 <= 0f)
		{
		}
		else if (uParam0->f_206.f_339 <= uParam0->f_206.f_338)
		{
		}
	}
	if (__LIB_12__::func_647(&(uParam0->f_2575)))
	{
		bVar1 = true;
		if (uParam0->f_177 == 4 || uParam0->f_176 == 4)
		{
			if (__LIB_12__::func_738(uParam0))
			{
				bVar1 = false;
			}
			else if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_13, 1024))
			{
				bVar1 = false;
			}
		}
		if (__LIB_13__::func_4(&(uParam0->f_206), &(uParam0->f_2575), bVar0, bVar1))
		{
			if (!__LIB_0__::func_1(uParam0->f_172, 1))
			{
				__LIB_0__::func_11(uParam0);
				__LIB_0__::func_7(&(uParam0->f_172), 1);
			}
		}
		else if (__LIB_0__::func_1(uParam0->f_172, 1))
		{
			__LIB_0__::func_8(&(uParam0->f_172), 1);
		}
	}
	else if (!__LIB_0__::func_1(uParam0->f_172, 1))
	{
		__LIB_0__::func_7(&(uParam0->f_172), 1);
	}
}

int func_76(var uParam0)
{
	return uLocal_115;
}

bool func_85(var uParam0)
{
	if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_13, 64))
	{
		return true;
	}
	if (__LIB_12__::func_924(uParam0) && func_280(uParam0))
	{
		__LIB_0__::func_7(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 64);
		return true;
	}
	return false;
}

void func_86(var uParam0)
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
	__LIB_12__::func_898(uParam0);
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
	func_296(uParam0);
	if (uParam0->f_174 != __LIB_10__::func_698())
	{
		if (!__LIB_0__::func_13(32768))
		{
			Var1 = { func_61(0) };
			if (!func_62(&Var1))
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
		__LIB_12__::func_997(uParam0, func_61(0), func_61(1), 0, 1, 0);
	}
}

void func_87(var uParam0)
{
	func_299(uParam0, 1, 0);
}

bool func_92(var uParam0)
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
		func_106(uParam0, bVar0);
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
		if (uParam0->f_171 != 0 || func_300(uParam0))
		{
			if (__LIB_13__::func_40(uParam0))
			{
				return true;
			}
		}
	}
	return false;
}

int func_93(var uParam0)
{
	__LIB_13__::func_520(&iLocal_1232);
	PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "rdch31_ilo_dutch");
	__LIB_8__::func_771(Local_122, 0, 1, 0);
	return 6;
}

int func_96(var uParam0, int iParam1)
{
	int iVar0;
	struct<4> Var1;
	iLocal_1675 = __LIB_0__::func_895(__LIB_12__::func_609(68));
	iVar0 = iParam1;
	Var1 = { func_61(iParam1) };
	if (!__LIB_0__::func_27(iLocal_1670, 1))
	{
		if (func_222(&iLocal_1236))
		{
			__LIB_1__::func_683(&iLocal_1670, 1);
		}
	}
	if (!__LIB_0__::func_27(iLocal_1675, 2))
	{
		iLocal_112 = 0;
	}
	else
	{
		iLocal_112 = 1;
	}
	if ((((iVar0 == 4 || iVar0 == 0) || iVar0 == 1) || iVar0 == 2) || iVar0 == 3)
	{
		__LIB_1__::func_681(&iLocal_1672, 32);
		__LIB_1__::func_681(&iLocal_1672, 16);
	}
	else if (__LIB_0__::func_27(iLocal_1675, 4))
	{
		__LIB_1__::func_683(&iLocal_1672, 32);
	}
	else
	{
		__LIB_0__::func_27(iLocal_1675, 8);
		__LIB_1__::func_683(&iLocal_1672, 16);
	}
	switch (iVar0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
			if (__LIB_0__::func_27(iLocal_1675, 1024))
			{
				func_307();
				func_308(&iLocal_1675, 1024);
			}
			break;
		case 11:
			if (!__LIB_0__::func_27(iLocal_1675, 1024))
			{
				func_309();
				func_310(&iLocal_1675, 1024);
			}
			break;
	}
	switch (iVar0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
			VEHICLE::SET_RANDOM_TRAINS(true);
			__LIB_1__::func_600(1);
			break;
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
			VEHICLE::SET_RANDOM_TRAINS(false);
			__LIB_1__::func_600(0);
			break;
	}
	switch (iVar0)
	{
		case 0:
			if (!__LIB_0__::func_899(&uLocal_1170))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, Var1, Var1.f_3, false, false, true);
				func_312();
				STREAMING::_REQUEST_SCENARIO_TYPE(joaat("WORLD_HUMAN_STERNGUY_IDLES"), 15, 0, 0);
				MISC::_SET_WEATHER_TYPE(joaat("MISTY"), true, true, false, 0f, false);
				if (func_313(&Local_122, 0, vLocal_64.x, vLocal_64.y, vLocal_64.z, fLocal_67, 1, 0, 0, 0) && func_313(&Local_142, 7, vLocal_68.x, vLocal_68.y, vLocal_68.z, fLocal_71, 1, 0, 1, 0))
				{
					if (func_314(&iLocal_1150, uParam0, 1, 1, vLocal_72.x, vLocal_72.y, vLocal_72.z, fLocal_75) && func_315(&iLocal_1151, 7, 1, 1, vLocal_76.x, vLocal_76.y, vLocal_76.z, fLocal_79))
					{
						if ((((__LIB_0__::func_272(Global_35, 256) && __LIB_0__::func_272(iLocal_1150, 256)) && __LIB_0__::func_272(iLocal_1151, 256)) && __LIB_0__::func_272(Local_122, 256)) && __LIB_0__::func_272(Local_142, 256))
						{
							if (__LIB_12__::func_936(uParam0))
							{
								func_299(uParam0, 1, 1);
							}
							if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1691) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_1691, true, false)) && func_318())
							{
								func_319(uParam0);
								if (!PED::IS_PED_INJURED(Local_122))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_122, true);
									ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_122, 2249.504f, -799.0526f, 43.1095f, 14.5419f, true, false, true);
									TASK::_TASK_START_SCENARIO_IN_PLACE(Local_122, joaat("WORLD_HUMAN_STERNGUY_IDLES"), 0, true, 0, -1f, false);
								}
								func_320(&Local_122, 9, 0, 0);
								func_320(&Local_142, 1, 0, 0);
								__LIB_2__::func_259(&uLocal_1170);
							}
							else
							{
								return 2;
							}
						}
						else
						{
							return 2;
						}
					}
					else
					{
						return 2;
					}
				}
				else
				{
					return 2;
				}
			}
			else if (__LIB_1__::func_592(&uLocal_1170) >= 100)
			{
				iLocal_116 = 0;
				iLocal_114 = 0;
				iLocal_117 = 0;
				func_321(&uLocal_115, 1);
				__LIB_12__::func_997(uParam0, func_61(0), func_61(1), 0, 1, 0);
				__LIB_13__::func_105(1, 1);
				if (__LIB_12__::func_936(uParam0))
				{
					return 5;
				}
				else
				{
					func_323();
					return 7;
				}
			}
			return 2;
		case 1:
			if (!__LIB_0__::func_899(&uLocal_1170))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, Var1, Var1.f_3, false, false, true);
				if (!__LIB_0__::func_27(iLocal_1670, 1024))
				{
					if (iLocal_112 == 1)
					{
						CAM::_0x6A4D224FC7643941(&Local_1518);
						CAM::_0x1B3C2D961F5FC0E1("script@story@dutch3@horse_ride");
						TASK::REQUEST_WAYPOINT_RECORDING("rdtc3_horse_ride_cme");
						STREAMING::PREFETCH_SRL("script@cme@dutch3_cme_01_rideaway");
						STREAMING::_0xEF1A8A484118735E();
						STREAMING::_0xAE00387E53B1E9FC();
						__LIB_1__::func_683(&iLocal_1670, 1024);
					}
				}
				if (func_313(&Local_142, 7, 2368.662f, -54.691f, 41.6871f, 29.0961f, 1, 0, 1, 1))
				{
					if (iLocal_112 == 1 || (iLocal_112 == 0 && func_324(&iLocal_1161, joaat("CANOE"), vLocal_26, vLocal_29, 0, 1)))
					{
						if (func_314(&iLocal_1150, uParam0, 1, 1, vLocal_80.x, vLocal_80.y, vLocal_80.z, fLocal_83) && func_315(&iLocal_1151, 7, 1, 1, vLocal_84.x, vLocal_84.y, vLocal_84.z, fLocal_87))
						{
							if (__LIB_0__::func_272(Global_35, 256) && __LIB_0__::func_272(Local_142, 256))
							{
								func_319(uParam0);
								switch (iLocal_112)
								{
									case 0:
										func_320(&Local_142, 6, 0, 0);
										break;
									case 1:
										CAM::_0xE296208C273BD7F0(0, -1, 0, 17, 1, 0);
										if (CAM::_0xDD0B7C5AE58F721D(&Local_1518))
										{
											if (!CAM::_0x927B810E43E99932(&Local_1518))
											{
												CAM::_0xB8B207C34285E978(&Local_1518);
											}
										}
										if (!__LIB_0__::func_394(Global_35, iLocal_1150, 0))
										{
											PED::_SET_PED_ON_MOUNT(Global_35, iLocal_1150, -1, true);
										}
										if (!__LIB_0__::func_394(Local_142, iLocal_1151, 0))
										{
											PED::_SET_PED_ON_MOUNT(Local_142, iLocal_1151, -1, true);
										}
										func_320(&Local_142, 0, 0, 0);
										break;
								}
								MISC::CLEAR_AREA(Var1, 500f, 2442122);
								MISC::_SET_WEATHER_TYPE(joaat("SHOWER"), true, true, false, 0f, false);
								__LIB_2__::func_259(&uLocal_1170);
							}
							else
							{
								return 2;
							}
						}
						else
						{
							return 2;
						}
					}
					else
					{
						return 2;
					}
				}
				else
				{
					return 2;
				}
			}
			else if (__LIB_1__::func_592(&uLocal_1170) >= 500)
			{
				iLocal_116 = 1;
				iLocal_114 = 0;
				iLocal_117 = 0;
				func_321(&uLocal_115, 3);
				__LIB_12__::func_997(uParam0, func_61(1), func_61(2), 1, 2, 0);
				if (iLocal_112 == 0)
				{
					__LIB_13__::func_105(1, 1);
				}
				else if (iLocal_112 == 1)
				{
					__LIB_13__::func_105(1, 0);
				}
				return 7;
			}
			return 2;
		case 2:
			CLOCK::SET_CLOCK_TIME(22, 0, 0);
			if (!__LIB_0__::func_899(&uLocal_1170))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, Var1, Var1.f_3, false, false, true);
				if (func_313(&Local_142, 7, 2415.917f, 738.8943f, 67.05f, 313.9334f, 1, 0, 1, 1))
				{
					if (iLocal_112 == 1 || (iLocal_112 == 0 && func_324(&iLocal_1161, joaat("CANOE"), vLocal_26, vLocal_29, 0, 0)))
					{
						if (iLocal_112 == 1 || (iLocal_112 == 0 && func_325(uParam0)))
						{
							if (func_326(iVar0, uParam0))
							{
								TASK::REQUEST_WAYPOINT_RECORDING("rdtc3_canoe_ride_cme");
								TASK::REQUEST_WAYPOINT_RECORDING("rdtc3_horse_ride_cme");
								TASK::REQUEST_WAYPOINT_RECORDING("rdtc3_charles_patrol_sneak");
								TASK::REQUEST_WAYPOINT_RECORDING("rdtc3_charles_butcher_creek_to_beaver_hollow");
								if ((TASK::GET_IS_WAYPOINT_RECORDING_LOADED("rdtc3_canoe_ride_cme") && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("rdtc3_horse_ride_cme")) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("rdtc3_charles_butcher_creek_to_beaver_hollow"))
								{
									if (__LIB_0__::func_272(Global_35, 256) && __LIB_0__::func_272(Local_142, 256))
									{
										func_319(uParam0);
										if (ENTITY::DOES_ENTITY_EXIST(uLocal_1152[0]) && !ENTITY::IS_ENTITY_DEAD(uLocal_1152[0]))
										{
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_1152[0], true);
											TASK::TASK_START_SCENARIO_AT_POSITION(uLocal_1152[0], joaat("WORLD_ANIMAL_HORSE_GRAZING"), vLocal_36, fLocal_39, 0, false, true, 0, -1f, false);
										}
										if (ENTITY::DOES_ENTITY_EXIST(uLocal_1152[1]) && !ENTITY::IS_ENTITY_DEAD(uLocal_1152[1]))
										{
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_1152[1], true);
											TASK::TASK_START_SCENARIO_AT_POSITION(uLocal_1152[1], joaat("WORLD_ANIMAL_HORSE_GRAZING"), vLocal_40, fLocal_43, 0, false, true, 0, -1f, false);
										}
										switch (iLocal_112)
										{
											case 0:
												AUDIO::_0x0D7FD6A55FD63AEF(6, 3, 1);
												func_327(vLocal_32, fLocal_35, "rdtc3_canoe_ride_cme", 2.5f, 2.5f);
												func_320(&Local_142, 7, 0, 0);
												PED::_0xFD6943B6DF77E449(uLocal_1152[0], false);
												PED::_0xFD6943B6DF77E449(uLocal_1152[1], false);
												break;
											case 1:
												if (!__LIB_0__::func_394(Global_35, iLocal_1150, 0))
												{
													PED::_SET_PED_ON_MOUNT(Global_35, iLocal_1150, -1, true);
												}
												if (!__LIB_0__::func_394(Local_142, iLocal_1151, 0))
												{
													PED::_SET_PED_ON_MOUNT(Local_142, iLocal_1151, -1, true);
												}
												__LIB_1__::func_683(&(Local_142.f_9), 262144);
												__LIB_1__::func_683(&(Local_142.f_9), 32);
												func_320(&Local_142, 12, 0, 0);
												break;
										}
										MISC::_SET_WEATHER_TYPE(joaat("MISTY"), true, true, false, 0f, false);
										MISC::CLEAR_AREA(Var1, 500f, 2442122);
										__LIB_2__::func_259(&uLocal_1170);
									}
									else
									{
										return 2;
									}
								}
								else
								{
									return 2;
								}
							}
							else
							{
								return 2;
							}
						}
						else
						{
							return 2;
						}
					}
					else
					{
						return 2;
					}
				}
				else
				{
					return 2;
				}
			}
			else if (__LIB_1__::func_592(&uLocal_1170) >= 100)
			{
				iLocal_116 = 2;
				iLocal_114 = 1;
				iLocal_117 = 2;
				func_321(&uLocal_115, 5);
				__LIB_1__::func_683(&iLocal_1670, 4096);
				__LIB_1__::func_683(&iLocal_1670, 256);
				__LIB_2__::func_259(&uLocal_1182);
				__LIB_12__::func_997(uParam0, func_61(2), func_61(3), 2, 3, 0);
				__LIB_13__::func_105(1, 1);
				return 7;
			}
			return 2;
		case 3:
			CLOCK::SET_CLOCK_TIME(22, 0, 0);
			if (!__LIB_0__::func_899(&uLocal_1170))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, Var1, Var1.f_3, false, false, true);
				func_328(1);
				func_329();
				if (func_313(&Local_142, 7, 2388.292f, 1189.051f, 97.5778f, 0.5f, 1, 0, 1, 1))
				{
					if (func_330(&Local_162, joaat("CS_MEREDITH"), vLocal_96, fLocal_99, joaat("PLAYER"), 0, 0, 0, -2, 0, joaat("WEAPON_UNARMED"), joaat("META_OUTFIT_DEFAULT")))
					{
						if (func_331(&Local_867, joaat("REL_NO_RELATIONSHIP"), 0, 0, 1, 0, 0, 2086038695, -1168906910, 1310068775, -266874643))
						{
							if (func_332())
							{
								if (func_333(uParam0, 1, 1, 1, 1, 1, 1))
								{
									if (func_326(iVar0, uParam0))
									{
										if (((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1693) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_1693, true, false)) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1692)) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_1692, true, false))
										{
											TASK::REQUEST_WAYPOINT_RECORDING("rdtc3_charles_patrol_sneak");
											TASK::REQUEST_WAYPOINT_RECORDING("rdtc3_charles_butcher_creek_to_beaver_hollow");
											if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("rdtc3_charles_patrol_sneak") && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("rdtc3_charles_butcher_creek_to_beaver_hollow"))
											{
												if (__LIB_0__::func_272(Global_35, 256) && __LIB_0__::func_272(Local_142, 256))
												{
													func_319(uParam0);
													if (!PED::IS_PED_INJURED(Global_35))
													{
														PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "Stealth", 1f, -1);
														PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "Cautious", 1f, -1);
													}
													if (!PED::IS_PED_INJURED(Local_142))
													{
														PED::_SET_PED_BLACKBOARD_FLOAT(Local_142, "Stealth", 1f, -1);
														PED::_SET_PED_BLACKBOARD_FLOAT(Local_142, "Cautious", 1f, -1);
													}
													func_320(&Local_142, 30, 0, 0);
													func_334(1);
													func_320(&Local_162, 13, 0, 0);
													func_320(&(Local_867[0 /*20*/]), 15, 0, 0);
													func_320(&(Local_867[1 /*20*/]), 19, 0, 0);
													func_320(&(Local_867[2 /*20*/]), 39, 0, 0);
													func_320(&(Local_867[3 /*20*/]), 39, 0, 0);
													func_320(&(Local_867[4 /*20*/]), 39, 0, 0);
													MISC::_SET_WEATHER_TYPE(joaat("MISTY"), true, true, false, 0f, false);
													MISC::CLEAR_AREA(Var1, 500f, 2442122);
													__LIB_2__::func_259(&uLocal_1170);
												}
												else
												{
													return 2;
												}
											}
											else
											{
												return 2;
											}
										}
										else
										{
											return 2;
										}
									}
									else
									{
										return 2;
									}
								}
								else
								{
									return 2;
								}
							}
							else
							{
								return 2;
							}
						}
						else
						{
							return 2;
						}
					}
					else
					{
						return 2;
					}
				}
				else
				{
					return 2;
				}
			}
			else if (__LIB_1__::func_592(&uLocal_1170) >= 100)
			{
				iLocal_116 = 3;
				iLocal_118 = 2;
				iLocal_114 = 5;
				iLocal_117 = 0;
				func_321(&uLocal_115, 6);
				__LIB_1__::func_683(&iLocal_1670, 4096);
				__LIB_1__::func_683(&iLocal_1670, 8192);
				__LIB_2__::func_259(&uLocal_1182);
				__LIB_12__::func_997(uParam0, func_61(3), func_61(4), 3, 4, 0);
				__LIB_13__::func_105(1, 1);
				return 7;
			}
			return 2;
		case 4:
			GRAPHICS::SET_TIMECYCLE_MODIFIER("Dutch_moonPos");
			CLOCK::SET_CLOCK_TIME(22, 0, 0);
			if (!__LIB_0__::func_899(&uLocal_1170))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, Var1, Var1.f_3, false, false, true);
				func_328(1);
				func_329();
				if (func_313(&Local_142, 7, 2359.914f, 1313.768f, 109.8383f, 22.0115f, 1, 0, 1, 1))
				{
					if (func_330(&Local_162, joaat("CS_MEREDITH"), vLocal_96, fLocal_99, joaat("PLAYER"), 0, 0, 0, -2, 0, joaat("WEAPON_UNARMED"), joaat("META_OUTFIT_DEFAULT")))
					{
						if (func_331(&Local_867, joaat("REL_NO_RELATIONSHIP"), 0, 0, 1, 0, 0, 2086038695, -1168906910, 1310068775, -266874643))
						{
							if (func_332())
							{
								if (func_333(uParam0, 0, 1, 1, 1, 1, 1))
								{
									if (func_326(iVar0, uParam0))
									{
										if (((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1693) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_1693, true, false)) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1692)) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_1692, true, false))
										{
											if (__LIB_0__::func_272(Global_35, 256) && __LIB_0__::func_272(Local_142, 256))
											{
												func_319(uParam0);
												func_334(1);
												func_320(&Local_162, 13, 0, 0);
												func_320(&(Local_867[0 /*20*/]), 15, 0, 0);
												func_320(&(Local_867[1 /*20*/]), 19, 0, 0);
												func_320(&(Local_867[2 /*20*/]), 39, 0, 0);
												func_320(&(Local_867[3 /*20*/]), 39, 0, 0);
												func_320(&(Local_867[4 /*20*/]), 39, 0, 0);
												MISC::_SET_WEATHER_TYPE(joaat("MISTY"), true, true, false, 0f, false);
												__LIB_2__::func_259(&uLocal_1170);
											}
											else
											{
												return 2;
											}
										}
										else
										{
											return 2;
										}
									}
									else
									{
										return 2;
									}
								}
								else
								{
									return 2;
								}
							}
							else
							{
								return 2;
							}
						}
						else
						{
							return 2;
						}
					}
					else
					{
						return 2;
					}
				}
				else
				{
					return 2;
				}
			}
			else if (__LIB_1__::func_592(&uLocal_1170) >= 100)
			{
				func_299(uParam0, 2, 1);
				iLocal_114 = 5;
				iLocal_117 = 0;
				func_321(&uLocal_115, 7);
				__LIB_12__::func_997(uParam0, func_61(5), func_61(6), 5, 6, 0);
				__LIB_13__::func_105(1, 0);
				return 5;
			}
			return 2;
		case 5:
			GRAPHICS::SET_TIMECYCLE_MODIFIER("Dutch_moonPos");
			CLOCK::SET_CLOCK_TIME(22, 0, 0);
			if (!__LIB_0__::func_899(&uLocal_1170))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, Var1, Var1.f_3, false, false, true);
				func_328(1);
				func_329();
				if (func_313(&Local_142, 7, 2359.914f, 1313.768f, 109.8383f, 22.0115f, 1, 0, 1, 1))
				{
					if (func_330(&Local_162, joaat("CS_MEREDITH"), vLocal_96, fLocal_99, joaat("PLAYER"), 0, 0, 0, -2, 0, joaat("WEAPON_UNARMED"), joaat("META_OUTFIT_DEFAULT")))
					{
						if (func_331(&Local_867, joaat("REL_NO_RELATIONSHIP"), 0, 0, 1, 0, 0, 2086038695, -1168906910, 1310068775, -266874643))
						{
							if (func_332())
							{
								if (func_333(uParam0, 0, 1, 1, 1, 1, 1))
								{
									if (func_326(iVar0, uParam0))
									{
										if (((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1693) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_1693, true, false)) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1692)) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_1692, true, false))
										{
											if (__LIB_0__::func_272(Global_35, 256) && __LIB_0__::func_272(Local_142, 256))
											{
												func_319(uParam0);
												func_334(1);
												if (!PED::IS_PED_INJURED(Global_35))
												{
													PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "Stealth", 1f, -1);
													PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "Cautious", 1f, -1);
												}
												if (!PED::IS_PED_INJURED(Local_142))
												{
													PED::_SET_PED_BLACKBOARD_FLOAT(Local_142, "Stealth", 1f, -1);
													PED::_SET_PED_BLACKBOARD_FLOAT(Local_142, "Cautious", 1f, -1);
												}
												func_320(&Local_142, 34, 0, 0);
												func_320(&Local_162, 13, 0, 0);
												func_320(&(Local_867[0 /*20*/]), 15, 0, 0);
												func_320(&(Local_867[1 /*20*/]), 19, 0, 0);
												func_320(&(Local_867[2 /*20*/]), 39, 0, 0);
												func_320(&(Local_867[3 /*20*/]), 39, 0, 0);
												func_320(&(Local_867[4 /*20*/]), 39, 0, 0);
												MISC::_SET_WEATHER_TYPE(joaat("MISTY"), true, true, false, 0f, false);
												__LIB_2__::func_259(&uLocal_1170);
											}
											else
											{
												return 2;
											}
										}
										else
										{
											return 2;
										}
									}
									else
									{
										return 2;
									}
								}
								else
								{
									return 2;
								}
							}
							else
							{
								return 2;
							}
						}
						else
						{
							return 2;
						}
					}
					else
					{
						return 2;
					}
				}
				else
				{
					return 2;
				}
			}
			else if (__LIB_1__::func_592(&uLocal_1170) >= 100)
			{
				iLocal_116 = 4;
				iLocal_114 = 5;
				iLocal_117 = 0;
				func_321(&uLocal_115, 8);
				__LIB_12__::func_997(uParam0, func_61(5), func_61(6), 5, 6, 0);
				__LIB_13__::func_105(1, 0);
				return 7;
			}
			return 2;
		case 6:
			CLOCK::SET_CLOCK_TIME(22, 0, 0);
			if (!__LIB_0__::func_899(&uLocal_1170))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, Var1, Var1.f_3, false, false, true);
				if (func_313(&Local_142, 7, 2291.878f, 1459.335f, 82.1793f, 40.4231f, 1, 0, 1, 1))
				{
					if (func_326(iVar0, uParam0))
					{
						if (func_330(&Local_162, joaat("CS_MEREDITH"), vLocal_96, fLocal_99, joaat("PLAYER"), 0, 0, 0, -2, 0, joaat("WEAPON_UNARMED"), joaat("META_OUTFIT_DEFAULT")))
						{
							if (func_332())
							{
								if ((__LIB_0__::func_272(Global_35, 256) && __LIB_0__::func_272(Local_142, 256)) && __LIB_0__::func_272(Local_162, 256))
								{
									func_319(uParam0);
									MISC::_SET_WEATHER_TYPE(joaat("MISTY"), true, true, false, 0f, false);
									__LIB_2__::func_259(&uLocal_1170);
								}
								else
								{
									return 2;
								}
							}
							else
							{
								return 2;
							}
						}
						else
						{
							return 2;
						}
					}
					else
					{
						return 2;
					}
				}
				else
				{
					return 2;
				}
			}
			else if (__LIB_1__::func_592(&uLocal_1170) >= 100)
			{
				func_299(uParam0, 3, 1);
				iLocal_114 = 0;
				iLocal_117 = 0;
				func_321(&uLocal_115, 10);
				__LIB_12__::func_997(uParam0, func_61(7), func_61(8), 7, 8, 0);
				__LIB_13__::func_105(1, 0);
				return 5;
			}
			return 2;
		case 7:
			CLOCK::SET_CLOCK_TIME(5, 30, 0);
			if (!__LIB_0__::func_899(&uLocal_1170))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, Var1, Var1.f_3, false, false, true);
				func_328(0);
				if (func_326(iVar0, uParam0))
				{
					if (func_330(&Local_162, joaat("CS_MEREDITH"), 2355.752f, 1377.195f, 105.4118f, 177.8969f, joaat("PLAYER"), 0, 0, 0, -2, 0, joaat("WEAPON_UNARMED"), joaat("META_OUTFIT_DEFAULT")) && func_330(&(Local_867[3 /*20*/]), Local_867[3 /*20*/].f_4, Local_867[3 /*20*/].f_14, Local_867[3 /*20*/].f_17, joaat("REL_NO_RELATIONSHIP"), 0, 0, 0, -2, 0, joaat("WEAPON_UNARMED"), joaat("META_OUTFIT_DEFAULT")))
					{
						if (func_332())
						{
							if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1693) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_1693, true, false))
							{
								if (__LIB_0__::func_272(Global_35, 256) && __LIB_0__::func_272(Local_162, 256))
								{
									func_319(uParam0);
									func_334(0);
									if (iLocal_112 == 0)
									{
										if (!__LIB_0__::func_394(Global_35, uLocal_1152[0], 0))
										{
											PED::_SET_PED_ON_MOUNT(Global_35, uLocal_1152[0], -1, true);
										}
										if (!__LIB_0__::func_394(Local_162, uLocal_1152[0], 0))
										{
											PED::_SET_PED_ON_MOUNT(Local_162, uLocal_1152[0], 0, true);
										}
									}
									else
									{
										if (!__LIB_0__::func_394(Global_35, iLocal_1150, 0))
										{
											PED::_SET_PED_ON_MOUNT(Global_35, iLocal_1150, -1, true);
										}
										if (!__LIB_0__::func_394(Local_162, iLocal_1150, 0))
										{
											PED::_SET_PED_ON_MOUNT(Local_162, iLocal_1150, 0, true);
										}
									}
									func_320(&Local_162, 8, 0, 0);
									MISC::_SET_WEATHER_TYPE(joaat("MISTY"), true, true, false, 0f, false);
									PED::_SET_PED_BLACKBOARD_BOOL(Local_162, "SadPassenger", true, -1);
									__LIB_2__::func_259(&uLocal_1170);
								}
								else
								{
									return 2;
								}
							}
							else
							{
								return 2;
							}
						}
						else
						{
							return 2;
						}
					}
					else
					{
						return 2;
					}
				}
				else
				{
					return 2;
				}
			}
			else if (__LIB_1__::func_592(&uLocal_1170) >= 3000)
			{
				iLocal_116 = 5;
				iLocal_114 = 0;
				iLocal_117 = 0;
				func_321(&uLocal_115, 11);
				__LIB_12__::func_997(uParam0, func_61(7), func_61(8), 7, 8, 0);
				__LIB_13__::func_105(1, 0);
				return 7;
			}
			return 2;
		case 8:
			CLOCK::SET_CLOCK_TIME(8, 19, 0);
			MISC::_SET_WEATHER_TYPE(joaat("MISTY"), true, true, false, 0f, false);
			if (!__LIB_0__::func_899(&uLocal_1170))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, Var1, Var1.f_3, false, false, true);
				if ((func_330(&Local_162, joaat("CS_MEREDITH"), vLocal_100, fLocal_103, joaat("PLAYER"), 0, 0, 0, -2, 0, joaat("WEAPON_UNARMED"), joaat("META_OUTFIT_DEFAULT")) && func_330(&iLocal_182, joaat("CS_MEREDITHSMOTHER"), vLocal_100, fLocal_103, joaat("REL_NO_RELATIONSHIP"), 0, 0, 0, -2, 0, joaat("WEAPON_UNARMED"), joaat("META_OUTFIT_DEFAULT"))) && func_326(iVar0, uParam0))
				{
					if ((__LIB_0__::func_272(Global_35, 256) && __LIB_0__::func_272(Local_162, 256)) && __LIB_0__::func_272(iLocal_182, 256))
					{
						if (iLocal_112 == 0)
						{
							PED::_0xED1C764997A86D5A(Global_35, uLocal_1152[0]);
						}
						else
						{
							PED::_0xED1C764997A86D5A(Global_35, iLocal_1150);
						}
						func_319(uParam0);
						__LIB_2__::func_259(&uLocal_1170);
					}
					else
					{
						return 2;
					}
				}
				else
				{
					return 2;
				}
			}
			else if (__LIB_1__::func_592(&uLocal_1170) >= 100)
			{
				func_299(uParam0, 4, 1);
				iLocal_114 = 0;
				iLocal_117 = 0;
				func_321(&uLocal_115, 12);
				__LIB_12__::func_997(uParam0, func_61(8), func_61(9), 8, 9, 0);
				__LIB_13__::func_105(1, 0);
				GRAPHICS::_0x5199405EABFBD7F0("MissionChoice");
				return 5;
			}
			return 2;
		case 9:
			if (!__LIB_0__::func_27(iLocal_1670, 1024))
			{
				CAM::_0x1B3C2D961F5FC0E1("script@story@dutch3@returntobeavers");
				TASK::REQUEST_WAYPOINT_RECORDING("dutch3_cme_river");
				TASK::REQUEST_WAYPOINT_RECORDING("dutch3_cme_annesburg");
				STREAMING::PREFETCH_SRL("script@cme@dutch3_cme_annesburg_shot");
				STREAMING::_0xEF1A8A484118735E();
				STREAMING::_0xAE00387E53B1E9FC();
				MISC::_SET_WEATHER_TYPE(joaat("MISTY"), true, true, false, 0f, false);
				bLocal_1398 = true;
				if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1240[32]))
				{
					PATHFIND::_0xC1799FAFD2FDF52B(iLocal_1240[32], 0, 0, 0);
					PATHFIND::_0xE5EF9DE716FF737E(iLocal_1240[32], 0, 1);
					POPULATION::_0x18262CAFEBB5FBE1(iLocal_1240[32], 0, 0, 0, -1, -1, 0);
					POPULATION::_0xB56D41A694E42E86(iLocal_1240[32], 0, 0, 0, -1, -1, 0);
					MISC::_0x2FCD528A397E5C88(iLocal_1240[32], 2442122);
				}
				__LIB_1__::func_683(&iLocal_1670, 1024);
			}
			if (!__LIB_0__::func_899(&uLocal_1170))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, Var1, Var1.f_3, false, false, true);
				if (func_326(iVar0, uParam0))
				{
					if (iLocal_112 == 0)
					{
						PED::_0xED1C764997A86D5A(Global_35, uLocal_1152[0]);
					}
					else
					{
						PED::_0xED1C764997A86D5A(Global_35, iLocal_1150);
					}
					if (__LIB_0__::func_272(Global_35, 256) && __LIB_0__::func_272(PED::_GET_LAST_MOUNT(Global_35), 256))
					{
						func_319(uParam0);
						__LIB_2__::func_259(&uLocal_1170);
					}
					else
					{
						return 2;
					}
				}
				else
				{
					return 2;
				}
			}
			else if (__LIB_1__::func_592(&uLocal_1170) >= 100)
			{
				iLocal_116 = 6;
				iLocal_114 = 0;
				iLocal_117 = 0;
				func_335(Global_35, PED::_GET_LAST_MOUNT(Global_35));
				__LIB_12__::func_997(uParam0, func_61(9), func_61(10), 9, 10, 0);
				__LIB_13__::func_105(1, 1);
				return 7;
			}
			return 2;
		case 10:
			MISC::_SET_WEATHER_TYPE(joaat("MISTY"), true, true, false, 0f, false);
			CLOCK::SET_CLOCK_TIME(15, 0, 0);
			if (!STREAMING::_IS_IMAP_ACTIVE(1122583474))
			{
				STREAMING::_REQUEST_IMAP(1122583474);
			}
			if (!__LIB_0__::func_899(&uLocal_1170))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, Var1, Var1.f_3, false, false, true);
				if (((((((((((((func_313(&Local_122, 0, vLocal_104.x, vLocal_104.y, vLocal_104.z, fLocal_107, 1, 0, 0, 1) && func_313(&Local_142, 7, vLocal_104.x, vLocal_104.y, vLocal_104.z, fLocal_107, 1, 0, 0, 1)) && func_313(&iLocal_202, 13, vLocal_104.x, vLocal_104.y, vLocal_104.z, fLocal_107, 1, 0, 0, 1)) && func_313(&iLocal_222, 3, vLocal_104.x, vLocal_104.y, vLocal_104.z, fLocal_107, 1, 0, 0, 1)) && func_313(&iLocal_242, 2, vLocal_104.x, vLocal_104.y, vLocal_104.z, fLocal_107, 1, 0, 0, 1)) && func_313(&iLocal_262, 15, vLocal_104.x, vLocal_104.y, vLocal_104.z, fLocal_107, 1, 0, 0, 1)) && func_313(&iLocal_282, 6, vLocal_104.x, vLocal_104.y, vLocal_104.z, fLocal_107, 1, 0, 0, 1)) && func_313(&iLocal_302, 16, vLocal_104.x, vLocal_104.y, vLocal_104.z, fLocal_107, 1, 0, 0, 1)) && func_313(&iLocal_322, 17, vLocal_104.x, vLocal_104.y, vLocal_104.z, fLocal_107, 1, 0, 0, 1)) && func_313(&iLocal_342, 11, vLocal_104.x, vLocal_104.y, vLocal_104.z, fLocal_107, 1, 0, 0, 1)) && func_313(&iLocal_362, 19, vLocal_104.x, vLocal_104.y, vLocal_104.z, fLocal_107, 1, 0, 0, 1)) && func_313(&iLocal_382, 22, vLocal_104.x, vLocal_104.y, vLocal_104.z, fLocal_107, 1, 0, 0, 1)) && func_313(&iLocal_402, 20, vLocal_104.x, vLocal_104.y, vLocal_104.z, fLocal_107, 1, 0, 0, 1)) && func_313(&iLocal_422, 4, vLocal_104.x, vLocal_104.y, vLocal_104.z, fLocal_107, 1, 0, 0, 1))
				{
					if ((((((((((((((__LIB_0__::func_272(Global_35, 256) && __LIB_0__::func_272(Local_122, 256)) && __LIB_0__::func_272(Local_142, 256)) && __LIB_0__::func_272(iLocal_202, 256)) && __LIB_0__::func_272(iLocal_222, 256)) && __LIB_0__::func_272(iLocal_242, 256)) && __LIB_0__::func_272(iLocal_262, 256)) && __LIB_0__::func_272(iLocal_282, 256)) && __LIB_0__::func_272(iLocal_302, 256)) && __LIB_0__::func_272(iLocal_322, 256)) && __LIB_0__::func_272(iLocal_342, 256)) && __LIB_0__::func_272(iLocal_362, 256)) && __LIB_0__::func_272(iLocal_382, 256)) && __LIB_0__::func_272(iLocal_402, 256)) && __LIB_0__::func_272(iLocal_422, 256))
					{
						func_319(uParam0);
						__LIB_2__::func_259(&uLocal_1170);
					}
					else
					{
						return 2;
					}
				}
				else
				{
					return 2;
				}
			}
			else if (__LIB_1__::func_592(&uLocal_1170) >= 100)
			{
				func_299(uParam0, 6, 1);
				bLocal_1398 = true;
				iLocal_114 = 0;
				iLocal_117 = 0;
				__LIB_12__::func_997(uParam0, func_61(10), func_61(11), 10, 11, 0);
				__LIB_13__::func_105(1, 0);
				return 5;
			}
			return 2;
		case 11:
			MISC::_SET_WEATHER_TYPE(joaat("MISTY"), true, true, false, 0f, false);
			CLOCK::SET_CLOCK_TIME(19, 0, 0);
			if (!__LIB_0__::func_27(iLocal_1675, 1024))
			{
				func_309();
				func_310(&iLocal_1675, 1024);
			}
			if (!__LIB_0__::func_899(&uLocal_1170))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, Var1, Var1.f_3, false, false, true);
				if (__LIB_0__::func_272(Global_35, 256))
				{
					func_319(uParam0);
					__LIB_2__::func_259(&uLocal_1170);
				}
				else
				{
					return 2;
				}
			}
			else if (__LIB_1__::func_592(&uLocal_1170) >= 100)
			{
				__LIB_13__::func_105(1, 1);
				return 8;
			}
			return 2;
		default:
			break;
	}
	return 2;
}

bool func_98(var uParam0)
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
				if (__LIB_0__::func_1(uParam0->f_172, 8388608) || func_85(uParam0))
				{
					__LIB_12__::func_918(uParam0, 2);
					if (!__LIB_0__::func_1(uParam0->f_172, 16))
					{
						func_87(uParam0);
					}
				}
			}
			return false;
		}
	}
	else if (__LIB_0__::func_1(uParam0->f_172, 262144) && !__LIB_0__::func_1(uParam0->f_172, 256))
	{
		func_106(uParam0, 0);
		if (!__LIB_0__::func_1(uParam0->f_172, 1048576))
		{
			return false;
		}
	}
	else
	{
		__LIB_12__::func_668();
		__LIB_12__::func_669(uParam0);
		if (!__LIB_0__::func_0(uParam0))
		{
			return false;
		}
	}
	if (!__LIB_0__::func_1(uParam0->f_172, 1))
	{
	}
	return true;
}

void func_99(var uParam0)
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
		__LIB_12__::func_997(uParam0, func_61(0), func_61(1), 0, 1, 1);
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

int func_101(var uParam0)
{
	struct<4> Var0;
	MemCopy(&Var0, {uParam0->f_2575}, 4);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		return 1;
	}
	return func_348(Var0, &(uParam0->f_206), uParam0);
}

int func_103(var uParam0)
{
	switch (iLocal_113)
	{
		case 1:
			func_319(uParam0);
			func_352(Global_35, joaat("WEAPON_BOW"), 0, 12, iLocal_1150, 1, 1);
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1690))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_1690);
			}
			iLocal_116 = 0;
			__LIB_12__::func_997(uParam0, func_61(0), func_61(1), 0, 1, 1);
			return 7;
		case 2:
			func_353(&Local_142);
			func_320(&Local_142, 34, 0, 0);
			func_320(&Local_162, 13, 0, 0);
			func_320(&(Local_867[0 /*20*/]), 15, 0, 0);
			func_320(&(Local_867[1 /*20*/]), 19, 0, 0);
			func_320(&(Local_867[2 /*20*/]), 39, 0, 0);
			func_320(&(Local_867[3 /*20*/]), 39, 0, 0);
			iLocal_116 = 4;
			iLocal_114 = 5;
			__LIB_12__::func_997(uParam0, func_61(5), func_61(6), 5, 6, 1);
			return 7;
		case 3:
			if (!PED::IS_PED_INJURED(Global_35))
			{
				PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "Stealth", 0f, -1);
				PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "Cautious", 0f, -1);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_142))
			{
				if (!PED::IS_PED_INJURED(Local_142))
				{
					PED::_SET_PED_BLACKBOARD_FLOAT(Local_142, "Stealth", 0f, -1);
					PED::_SET_PED_BLACKBOARD_FLOAT(Local_142, "Cautious", 0f, -1);
				}
				__LIB_9__::func_203(7, 1, 1, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
			}
			VEHICLE::SET_RANDOM_TRAINS(false);
			__LIB_1__::func_600(0);
			iLocal_116 = 5;
			iLocal_114 = 0;
			return 7;
		case 4:
			iLocal_116 = 6;
			iLocal_114 = 0;
			return 7;
		case 6:
			__LIB_10__::func_672(8, 1);
			iLocal_116 = 7;
			iLocal_114 = 0;
			HUD::_HIDE_HUD_COMPONENT(-1679307491);
			return 7;
		case 7:
			HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
			return 8;
	}
	return 7;
}

bool func_104(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_172, 256) && !__LIB_0__::func_1(uParam0->f_172, 1024))
	{
		if (!__LIB_13__::func_281(uParam0))
		{
			if (__LIB_0__::func_1(uParam0->f_172, 512) && __LIB_0__::func_1(uParam0->f_172, 8192))
			{
				if (func_85(uParam0))
				{
					if (!__LIB_0__::func_1(uParam0->f_172, 16))
					{
						func_87(uParam0);
					}
				}
			}
			return true;
		}
		else
		{
			if (__LIB_0__::func_1(uParam0->f_172, 1024) && uParam0->f_176 == 4)
			{
				__LIB_12__::func_997(uParam0, func_61(0), func_61(1), 0, 1, 1);
			}
			return false;
		}
	}
	return false;
}

void func_106(var uParam0, bool bParam1)
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
		if (func_356(&(uParam0->f_753), uParam0->f_2581, uParam0->f_2571, bParam1))
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

int func_107(var uParam0)
{
	func_358(uParam0);
	func_359(uParam0);
	func_360(uParam0);
	switch (iLocal_116)
	{
		case 0:
			if (func_361(uParam0, &iLocal_118))
			{
				func_362();
				iLocal_116 = 1;
			}
			break;
		case 1:
			if (func_363(uParam0, &iLocal_118))
			{
				func_362();
				iLocal_116 = 2;
			}
			break;
		case 2:
		case 3:
			if (func_364(uParam0, &iLocal_118))
			{
				func_362();
				if (!__LIB_0__::func_27(iLocal_1670, 16384))
				{
					return 5;
				}
				else
				{
					iLocal_116 = 4;
				}
			}
			break;
		case 4:
			if (func_365(uParam0, &iLocal_118))
			{
				func_362();
				return 5;
			}
			break;
		case 5:
			if (func_366(uParam0, &iLocal_118))
			{
				func_362();
				UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
				if (SCRIPTS::_0x7409669C5ED50144(joaat("CHAL_CTX_CUSTOM_1")))
				{
					SCRIPTS::_0x50B72A754EE64A71(joaat("CHAL_CTX_CUSTOM_1"));
				}
				return 6;
			}
			break;
		case 6:
			if (func_367(uParam0, &iLocal_118))
			{
				func_362();
				MISC::SET_BIT(&(Global_1956580.f_1), 5);
				return 5;
			}
			break;
		case 7:
			HUD::_0xC9CAEAEEC1256E54(-1679307491);
			if (func_368(uParam0, &iLocal_118))
			{
				func_362();
				return 5;
			}
			break;
	}
	return 7;
}

void func_128(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
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
		func_404(Global_1347702[iParam0 /*49*/].f_15, bParam4, bParam2, bParam6, bParam5);
	}
	else
	{
		__LIB_1__::func_809(Global_1347702[iParam0 /*49*/].f_15, bParam6);
	}
	__LIB_10__::func_833(iParam0);
}

void func_131()
{
	var uVar0;
	var uVar1;
	vector3 vVar2;
	__LIB_0__::func_319(4112);
	__LIB_0__::func_320(6);
	vVar2 = { func_408(Global_2621440[0 /*12066*/].f_9.f_7, &uVar0, &uVar1, 0, 1, 1, 0, 0, 0) };
	__LIB_0__::func_321(vVar2, uVar1, uVar0, 0);
	__LIB_0__::func_322(vVar2);
	Global_40.f_9.f_15 = __LIB_1__::func_447(vVar2, 0);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	MISC::SET_RANDOM_WEATHER_TYPE(false, true);
}

void func_159(var uParam0)
{
	int iVar0;
	__LIB_10__::func_515(&uLocal_1641);
	GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_35, false);
	STREAMING::_0x9F348DE670423460("CLIPSET@MECH_GRAPPLE@MACHETE@_MALE@_AMBIENT@_HEALTHY@MOUNTED@LOCO@VICTIM");
	STREAMING::_0x9F348DE670423460("CLIPSET@MECH_GRAPPLE@MACHETE@_MALE@_AMBIENT@_HEALTHY@MOUNTED@LOCO@ATTACKER");
	GRAPHICS::_0x37D7BDBA89F13959("MissionChoice");
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "rdch31_ilo_dutch");
		PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "rdch31_ilo_charles");
	}
	__LIB_12__::func_991(&iLocal_1580, Local_122);
	if (iLocal_1229 != 0)
	{
		if (ENTITY::_0x1FF441D7954F8709(iLocal_1229))
		{
			ENTITY::_0xD2B9C78537ED5759(iLocal_1229);
		}
	}
	if (!PED::IS_PED_INJURED(Global_35))
	{
		WEAPON::_0xA3716A77DCF17424(Global_35, joaat("WEAPON_BOW"), 1);
		PED::SET_PED_CONFIG_FLAG(Global_35, 387, false);
		PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "Stealth", 0f, -1);
		PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "Cautious", 0f, -1);
	}
	if (!PED::IS_PED_INJURED(Local_142))
	{
		PED::_0x2B4CE170DE09F346(Local_142, joaat("RDTC3_RIDE1"));
		TASK::_0x9DE63896B176EA94(Local_142, 0);
		PED::SET_PED_CONFIG_FLAG(Local_142, 265, true);
		PED::_SET_PED_BLACKBOARD_FLOAT(Local_142, "Stealth", 0f, -1);
		PED::_SET_PED_BLACKBOARD_FLOAT(Local_142, "Cautious", 0f, -1);
	}
	if (!PED::IS_PED_INJURED(iLocal_1150))
	{
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_1150, 48, false);
	}
	if (!PED::IS_PED_INJURED(iLocal_1151))
	{
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_1151, 48, false);
	}
	if (__LIB_12__::func_644(uParam0) == 0)
	{
		func_434(79, 0, 0);
		__LIB_12__::func_25(79, 0, 0);
	}
	else
	{
		__LIB_12__::func_25(79, 1, 0);
	}
	__LIB_0__::func_745(0);
	__LIB_0__::func_745(7);
	__LIB_9__::func_203(0, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
	__LIB_9__::func_203(7, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
	__LIB_9__::func_203(16, 0, 1, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
	__LIB_13__::func_569(16, 1);
	__LIB_1__::func_463(iLocal_1151, 7, 1, 0, 1);
	func_438(&Local_1089, 0, 1);
	func_438(&Local_503, 0, 1);
	func_438(&Local_664, 0, 1);
	func_438(&Local_442, 0, 1);
	func_438(&Local_846, 0, 1);
	func_438(&Local_745, 0, 1);
	func_438(&Local_968, 0, 1);
	func_438(&Local_867, 0, 1);
	__LIB_0__::func_490(&Local_162, 0);
	__LIB_0__::func_490(&iLocal_182, 0);
	__LIB_0__::func_490(&Local_1130, 0);
	__LIB_9__::func_123(&uLocal_1152, 1);
	__LIB_9__::func_123(&uLocal_1156, 1);
	STREAMING::_REMOVE_IMAP(-2117963426);
	STREAMING::_REMOVE_IMAP(1537844205);
	STREAMING::_REMOVE_IMAP(1122583474);
	STREAMING::_REMOVE_IMAP(-1766409506);
	STREAMING::_REMOVE_IMAP(883152450);
	if (PATHFIND::_0x5AC0944C156E5F44("nav_dutch3"))
	{
		PATHFIND::_0x527B97C203BB8606("nav_dutch3");
	}
	iVar0 = 0;
	while (iVar0 < iLocal_1504)
	{
		__LIB_8__::func_863(&(iLocal_1504[iVar0]), 1, 1, 1);
		iVar0++;
	}
	func_442(&iLocal_1161, 0);
	func_442(&iLocal_1162, 0);
	func_443();
	func_444();
	func_445();
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("CS_MEREDITH"), false);
	if (iLocal_1681 != -1)
	{
		GRAPHICS::DESTROY_TRACKED_POINT(iLocal_1681);
	}
	if (iLocal_1682 != -1)
	{
		GRAPHICS::DESTROY_TRACKED_POINT(iLocal_1682);
	}
	STREAMING::END_SRL();
	AUDIO::_0x43037ABFE214A851();
	STREAMING::_0x5A8B01199C3E79C3();
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
	__LIB_1__::func_721(7);
	VEHICLE::SET_RANDOM_TRAINS(true);
	__LIB_1__::func_600(1);
	CAM::_0x0A5A4F1979ABB40E(&Local_1518);
	CAM::_0x798BE43C9393632B(&Local_1518);
	AUDIO::_0x9428447DED71FC7E("Chapter_Screen_Scenes");
	GRAPHICS::_0x37D7BDBA89F13959("ChapterTitle_IntroCh06");
}

void func_185()
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1240[0]))
	{
		iLocal_1240[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2248.93f, -797.5231f, 44.40715f, 0f, 0f, 0f, 4.75f, 6f, 3f, "RDCH31_VOLUME_CAMP_DUTCH_ILO_VOLUME");
	}
}

int func_212(vector3 vParam0, var uParam3)
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
		iVar0 = func_504(0, 0);
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

bool func_214(int iParam0)
{
	if ((ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_FATALLY_INJURED(iParam0)) || WEAPON::_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iParam0, joaat("WEAPON_THROWN_DYNAMITE"), 0))
	{
		return true;
	}
	return false;
}

void func_218(var uParam0)
{
	if (__LIB_13__::func_23(&(uParam0->f_206), "RDTC3_RSC1"))
	{
		if (!__LIB_0__::func_27(iLocal_1677, 1))
		{
			MISC::_SET_WEATHER_TYPE(joaat("MISTY"), true, true, true, 30f, false);
			__LIB_1__::func_683(&iLocal_1677, 1);
		}
	}
	switch (iLocal_116)
	{
		case 0:
			if (!__LIB_0__::func_27(iLocal_1677, 2))
			{
				if (__LIB_0__::func_266(Local_142, 2350.111f, -699.8608f, 40.4235f, 5f, 0, 0))
				{
					MISC::_SET_WEATHER_TYPE(joaat("SHOWER"), true, true, true, 60f, false);
					__LIB_1__::func_683(&iLocal_1677, 2);
				}
			}
			break;
		case 1:
			break;
		case 2:
		case 3:
			break;
		case 4:
			break;
		case 5:
			if (CAM::_0xA2B1C7EF759A63CE() <= 0f)
			{
				func_511();
			}
			break;
		case 6:
			break;
		case 7:
			break;
	}
}

bool func_222(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (PED::_0x91A5F9CBEBB9D936((*iParam0)[iVar0]))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 == *iParam0)
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (iVar0 == iVar1)
		{
			switch (iVar0)
			{
				case 0:
					if (!PED::_0x91A5F9CBEBB9D936((*iParam0)[iVar0]))
					{
						if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1240[17]))
						{
							MISC::_0x2FCD528A397E5C88(iLocal_1240[17], 2442122);
							POPULATION::_0x18262CAFEBB5FBE1(iLocal_1240[17], 0, 0, 0, -1, -1, 0);
							POPULATION::_0xB56D41A694E42E86(iLocal_1240[17], 0, 2048, 0, -1, -1, 2);
							(*iParam0)[iVar0] = PED::_0x4C39C95AE5DB1329(iLocal_1240[17], 0, 15);
						}
					}
					break;
				case 1:
					if (!PED::_0x91A5F9CBEBB9D936((*iParam0)[iVar0]))
					{
						if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1240[18]))
						{
							MISC::_0x2FCD528A397E5C88(iLocal_1240[18], 2442122);
							POPULATION::_0x18262CAFEBB5FBE1(iLocal_1240[18], 0, 0, 0, -1, -1, 0);
							POPULATION::_0xB56D41A694E42E86(iLocal_1240[18], 0, 2048, 0, -1, -1, 2);
							PATHFIND::_0x19C7567D2F2287D6(iLocal_1240[18], 7);
							(*iParam0)[iVar0] = PED::_0x4C39C95AE5DB1329(iLocal_1240[18], 0, 15);
						}
					}
					break;
				case 2:
					if (!PED::_0x91A5F9CBEBB9D936((*iParam0)[iVar0]))
					{
						if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1240[7]))
						{
							MISC::_0x2FCD528A397E5C88(iLocal_1240[7], 2442122);
							POPULATION::_0x18262CAFEBB5FBE1(iLocal_1240[7], 8192, 0, 0, -1, -1, 0);
							POPULATION::_0xB56D41A694E42E86(iLocal_1240[7], 8192, 2048, 0, -1, -1, 2);
							(*iParam0)[iVar0] = PED::_0x4C39C95AE5DB1329(iLocal_1240[7], 0, 15);
						}
					}
					break;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_226(int iParam0)
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
				func_128(113, 1, 0, 1, 1, 1, 0);
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

void func_240(var uParam0)
{
	if (__LIB_12__::func_644(uParam0) == 0)
	{
		__LIB_13__::func_484(Global_1347702[uParam0->f_174 /*49*/].f_15, 1);
		func_542();
		__LIB_1__::func_698(joaat("DOCUMENT_POSTER_SB_DUEL"), 1, -142743235, 0, 0);
		__LIB_1__::func_698(-120239629 /* GXTEntry: "Bounty Poster - Mark Johnson" */, 1, -142743235, 0, 0);
		__LIB_1__::func_698(-1129500286 /* GXTEntry: "Bounty Poster - Lindsey Wofford" */, 1, -142743235, 0, 0);
		__LIB_1__::func_698(-1490222567 /* GXTEntry: "Bounty Poster - Ellie Anne Swan" */, 1, -142743235, 0, 0);
		__LIB_1__::func_698(joaat("DOCUMENT_POSTER_SHACK_ESCAPE"), 1, -142743235, 0, 0);
		__LIB_1__::func_698(joaat("DOCUMENT_POSTER_BANDITO_SHACK"), 1, -142743235, 0, 0);
		__LIB_1__::func_698(joaat("DOCUMENT_POSTER_BANDITO_MINE"), 1, -142743235, 0, 0);
		__LIB_1__::func_698(joaat("DOCUMENT_TEST_BOUNTY_POSTER"), 1, -142743235, 0, 0);
	}
	else
	{
		__LIB_13__::func_484(Global_1347702[uParam0->f_174 /*49*/].f_15, 0);
	}
}

void func_255(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_172, 16))
	{
		__LIB_12__::func_966(uParam0, 0);
		func_87(uParam0);
	}
}

int func_262(var uParam0)
{
	if (uParam0->f_177 == 6)
	{
		return 1;
	}
	else if (uParam0->f_177 == 2)
	{
		return 1;
	}
	else if (func_566(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_280(var uParam0)
{
	if (__LIB_12__::func_871(uParam0))
	{
		iLocal_1675 = __LIB_0__::func_895(__LIB_12__::func_609(68));
		return 1;
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1690))
	{
		iLocal_1690 = ANIMSCENE::_CREATE_ANIM_SCENE("script@rcm@dtc3@leadin@rsc_1@ilo", 0, "pl_base", false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(iLocal_1690);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_122))
	{
		func_313(&Local_122, 0, 2249.033f, -799.0133f, 43.1178f, 153.6975f, 1, 0, 0, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_122) && !ENTITY::IS_ENTITY_DEAD(Local_122))
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1690) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_1690, true, false))
		{
			if (!PED::IS_PED_INJURED(Global_35) && !PED::IS_PED_INJURED(Local_122))
			{
				MISC::CLEAR_AREA(2247.937f, -798.272f, 43.2145f, 4f, 2442122);
				func_319(uParam0);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_122, true, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_122, true);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_122, 2249.033f, -799.0133f, 43.1178f, 153.6975f, true, false, true);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1690, "Arthur", Global_35, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1690, "Dutch", Local_122, 0);
				ANIMSCENE::START_ANIM_SCENE(iLocal_1690);
				ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_1690, "pl_greet");
				ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_1690, "pl_idle_1");
				ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_1690, "pl_idle_2");
				ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_1690, "pl_idle_3");
				iLocal_1675 = 0;
				__LIB_1__::func_532(__LIB_12__::func_609(68), iLocal_1675);
				return 1;
			}
		}
	}
	return 0;
}

void func_296(var uParam0)
{
	func_616();
	func_617();
	func_618();
	func_619();
	if (!PED::IS_PED_INJURED(Global_35))
	{
		WEAPON::_0xA3716A77DCF17424(Global_35, joaat("WEAPON_BOW"), 0);
	}
	__LIB_8__::func_771(Local_122, 0, 1, 0);
	__LIB_12__::func_991(&iLocal_1580, Local_122);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("CS_MEREDITH"), true);
}

void func_299(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	iLocal_113 = iParam1;
	switch (iLocal_113)
	{
		case 1:
			StringCopy(&(uParam0->f_2575), "RDTC3_RSC1", 24);
			__LIB_12__::func_957(uParam0, Global_35, "ARTHUR", 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_122, "Dutch", 0, 0, 0);
			__LIB_12__::func_779(uParam0, 2248.446f, -798.1074f, 43.1282f);
			__LIB_13__::func_17(&(uParam0->f_206), "1-HighHonor-NormalStart", 0);
			__LIB_13__::func_17(&(uParam0->f_206), "1-HighHonor-MultiStart", 0);
			__LIB_13__::func_17(&(uParam0->f_206), "2-LowHonor-NormalStart", 0);
			__LIB_13__::func_17(&(uParam0->f_206), "2-LowHonor-MultiStart", 0);
			if (!__LIB_0__::func_871())
			{
				if (__LIB_12__::func_936(uParam0))
				{
					__LIB_13__::func_560(&(uParam0->f_206), __LIB_0__::func_482("2-LowHonor-MultiStart"));
				}
				else
				{
					__LIB_12__::func_676(&(uParam0->f_206), "2-LowHonor-NormalStart");
				}
			}
			else if (__LIB_12__::func_936(uParam0))
			{
				__LIB_13__::func_560(&(uParam0->f_206), __LIB_0__::func_482("1-HighHonor-MultiStart"));
			}
			else
			{
				__LIB_12__::func_676(&(uParam0->f_206), "1-HighHonor-NormalStart");
			}
			__LIB_13__::func_487(uParam0, 116562);
			__LIB_13__::func_16(uParam0, 116916);
			__LIB_13__::func_264(uParam0, 117717);
			break;
		case 2:
			StringCopy(&(uParam0->f_2575), "RDTC3_RSC2", 24);
			__LIB_12__::func_676(&(uParam0->f_206), "PL_Player_Choice_Loop");
			__LIB_0__::func_88(&(uParam0->f_206), 8388608);
			__LIB_0__::func_88(&(uParam0->f_206), 33554432);
			__LIB_0__::func_88(&(uParam0->f_206), 134217728);
			__LIB_12__::func_957(uParam0, Global_35, "ARTHUR", 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_142, "CHARLESSMITH", 0, 0, 0);
			__LIB_12__::func_779(uParam0, 2358.917f, 1313.295f, 109.8719f);
			__LIB_13__::func_487(uParam0, 116562);
			__LIB_13__::func_16(uParam0, 116916);
			__LIB_13__::func_264(uParam0, 117717);
			break;
		case 3:
			StringCopy(&(uParam0->f_2575), "RDTC3_RSC3", 24);
			switch (iLocal_112)
			{
				case 0:
					if (ENTITY::DOES_ENTITY_EXIST(PED::_GET_LAST_MOUNT(Global_35)) && !ENTITY::IS_ENTITY_DEAD(PED::_GET_LAST_MOUNT(Global_35)))
					{
						iLocal_1155 = PED::_GET_LAST_MOUNT(Global_35);
					}
					else
					{
						PED::DELETE_PED(&(uLocal_1152[0]));
						if (func_330(&(uLocal_1152[0]), joaat("A_C_HORSE_MURFREEBROOD_MANGE_01"), vLocal_36, fLocal_39, joaat("REL_NO_RELATIONSHIP"), 0, 0, 0, -2, 0, joaat("WEAPON_UNARMED"), joaat("META_OUTFIT_DEFAULT")))
						{
							iLocal_1155 = uLocal_1152[0];
							PED::_0xED1C764997A86D5A(Global_35, uLocal_1152[0]);
						}
					}
					break;
				case 1:
					if (ENTITY::DOES_ENTITY_EXIST(PED::_GET_LAST_MOUNT(Global_35)) && !ENTITY::IS_ENTITY_DEAD(PED::_GET_LAST_MOUNT(Global_35)))
					{
						iLocal_1155 = iLocal_1150;
					}
					else if (func_314(&iLocal_1150, uParam0, 1, 1, 2354.187f, 1370.214f, 105.1151f, 134.584f))
					{
						iLocal_1155 = iLocal_1150;
						PED::_0xED1C764997A86D5A(Global_35, iLocal_1150);
					}
					break;
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_1155) && !ENTITY::IS_ENTITY_DEAD(iLocal_1155))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_1155, 2354.213f, 1370.24f, 105.1166f, 128.7562f, true, false, true);
				ENTITY::_0x9587913B9E772D29(iLocal_1155, 0);
			}
			__LIB_12__::func_957(uParam0, Global_35, "ARTHUR", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_1155, "HORSE_01", 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_162, "MEREDITH", 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_142, "CHARLESSMITH", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_1504[0], "P_PRISONCAGE02X", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_1504[1], "P_CS_ROPEHANDSSPLIT", 0, 0, 0);
			func_637(iLocal_1155, 4, 0f, 0f, 0f, 1);
			if (iParam2 == 1)
			{
				__LIB_12__::func_909(&(uParam0->f_206));
			}
			else
			{
				__LIB_12__::func_846(&(uParam0->f_206));
			}
			__LIB_12__::func_779(uParam0, vLocal_96);
			__LIB_13__::func_487(uParam0, 116562);
			__LIB_13__::func_16(uParam0, 116916);
			__LIB_13__::func_264(uParam0, 117717);
			break;
		case 4:
			StringCopy(&(uParam0->f_2575), "RDTC3_RSC4", 24);
			__LIB_0__::func_136(&(uParam0->f_206));
			__LIB_0__::func_88(&(uParam0->f_206), 16);
			__LIB_12__::func_676(&(uParam0->f_206), "RDTC3_RSC4_BEFORE_CHOICE");
			__LIB_0__::func_88(&(uParam0->f_206), 8388608);
			__LIB_0__::func_88(&(uParam0->f_206), 33554432);
			__LIB_0__::func_88(&(uParam0->f_206), 134217728);
			__LIB_12__::func_957(uParam0, Global_35, "ARTHUR", 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_162, "MEREDITH", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_182, "MEREDITHSMOTHER", 0, 0, 0);
			__LIB_12__::func_779(uParam0, vLocal_23);
			__LIB_13__::func_487(uParam0, 116562);
			__LIB_13__::func_16(uParam0, 116916);
			__LIB_13__::func_264(uParam0, 117717);
			break;
		case 6:
			StringCopy(&(uParam0->f_2575), "RDTC3_RSC5", 24);
			__LIB_12__::func_957(uParam0, Global_35, "ARTHUR", 0, 0, 0);
			if (iLocal_112 == 0)
			{
				iVar0 = PED::_GET_LAST_MOUNT(Global_35);
			}
			else
			{
				iVar0 = iLocal_1150;
			}
			__LIB_12__::func_957(uParam0, iVar0, "Horse_01", 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_122, "Dutch", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_382, "Tilly", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_402, "Karen", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_422, "Uncle", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_342, "MrsAdler", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_282, "MicahBell", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_302, "MollyOshea", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_262, "Marybeth", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_322, "MrPearson", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_222, "BillWilliamson", 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_142, "CharlesSmith", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_242, "JavierEscuella", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_202, "AbigailRoberts", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_362, "SusanGrimshaw", 0, 0, 0);
			if (iParam2 == 1)
			{
				__LIB_12__::func_909(&(uParam0->f_206));
			}
			else
			{
				__LIB_12__::func_846(&(uParam0->f_206));
			}
			__LIB_0__::func_7(&(uParam0->f_206.f_405), 7);
			__LIB_12__::func_779(uParam0, vLocal_104);
			__LIB_13__::func_487(uParam0, 116562);
			__LIB_13__::func_16(uParam0, 116916);
			__LIB_13__::func_264(uParam0, 117717);
			break;
		case 7:
			StringCopy(&(uParam0->f_2575), "RDTC3_RSC5B", 24);
			__LIB_12__::func_957(uParam0, Global_35, "ARTHUR", 0, 0, 0);
			if (iParam2 == 1)
			{
				__LIB_12__::func_909(&(uParam0->f_206));
			}
			else
			{
				__LIB_12__::func_846(&(uParam0->f_206));
			}
			__LIB_12__::func_779(uParam0, vLocal_104);
			__LIB_13__::func_487(uParam0, 116562);
			__LIB_13__::func_16(uParam0, 116916);
			__LIB_13__::func_264(uParam0, 117717);
			break;
		default:
			break;
	}
	__LIB_0__::func_7(&(uParam0->f_172), 16);
}

bool func_300(var uParam0)
{
	int iVar0;
	iVar0 = -1;
	if (__LIB_0__::func_27(iLocal_1669, 1))
	{
		if (!__LIB_0__::func_27(iLocal_1669, 2))
		{
			iVar0 = func_640(&Local_122, &iLocal_1580, 3.5f, &Local_1562, 0f, 3, 0, 0, 8209, 0, 0, 2, -1082130432 /* Float: -1f */);
		}
		else
		{
			__LIB_13__::func_282(&Local_122, &iLocal_1580, &Local_1562, 3f, -1082130432 /* Float: -1f */, 0);
		}
	}
	if ((!PED::IS_PED_INJURED(Local_122) && !PED::IS_PED_INJURED(Global_35)) && PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PED::SET_PED_RESET_FLAG(Local_122, 53, true);
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1690))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_1690, false))
			{
				if (!__LIB_0__::func_27(iLocal_1669, 1))
				{
					if (__LIB_1__::func_205(Global_35, iLocal_1240[0], 1, 0))
					{
						__LIB_12__::func_953(&iLocal_1580, 0);
						__LIB_3__::func_157(&(Local_1562[0 /*17*/]), "INTERACT_GREET", 0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
						__LIB_12__::func_980(&iLocal_1580, &Local_1562, 0, Global_1347702[68 /*49*/].f_37, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
						__LIB_1__::func_471(&iLocal_1580, 18);
						__LIB_1__::func_683(&iLocal_1669, 1);
					}
				}
				else if (!__LIB_0__::func_27(iLocal_1669, 2))
				{
					if (!__LIB_1__::func_205(Global_35, iLocal_1240[0], 1, 0))
					{
						__LIB_8__::func_771(Local_122, 0, 1, 0);
						__LIB_1__::func_681(&iLocal_1669, 1);
					}
					else if (!__LIB_8__::func_684("DCH3_CHESS"))
					{
						__LIB_12__::func_876(uParam0, "DCH3_CHESS", 0);
					}
				}
				if (!__LIB_0__::func_27(iLocal_1669, 2))
				{
					if (__LIB_0__::func_27(iLocal_1669, 1))
					{
						if (iVar0 != -1)
						{
							__LIB_6__::func_900("DCH3_CHESS", 1, 0);
							__LIB_12__::func_876(uParam0, "DCH3_RSC1_LI_GT", 0);
							__LIB_1__::func_683(&iLocal_1669, 2);
						}
					}
				}
				else if (!__LIB_0__::func_27(iLocal_1669, 4))
				{
					if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_1690, "pl_greet", true);
						__LIB_1__::func_683(&iLocal_1669, 4);
					}
				}
			}
			if (__LIB_0__::func_27(iLocal_1669, 4))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iLocal_1690, false))
				{
					return true;
				}
				else if (ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(iLocal_1690) || ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_1690, "Dutch"))
				{
					return true;
				}
			}
		}
	}
	return false;
}

void func_307()
{
	__LIB_12__::func_86(5);
	__LIB_11__::func_381(1);
	__LIB_10__::func_795(1, 16);
	__LIB_6__::func_261();
}

void func_308(int iParam0, int iParam1)
{
	__LIB_1__::func_681(iParam0, iParam1);
	__LIB_1__::func_532(__LIB_12__::func_609(68), *iParam0);
}

void func_309()
{
	if (STREAMING::_IS_IMAP_ACTIVE(1122583474))
	{
		STREAMING::_REMOVE_IMAP(1122583474);
	}
	__LIB_12__::func_86(6);
	__LIB_11__::func_381(1);
	__LIB_10__::func_795(1, 16);
	__LIB_6__::func_261();
	__LIB_4__::func_845(1, 0);
}

void func_310(int iParam0, int iParam1)
{
	__LIB_1__::func_683(iParam0, iParam1);
	__LIB_1__::func_532(__LIB_12__::func_609(68), *iParam0);
}

void func_312()
{
	WEAPON::_0x72D4CB5DB927009C(joaat("WEAPON_SHOTGUN_SAWEDOFF_CHARLES"), -1, 0);
	WEAPON::_0x72D4CB5DB927009C(joaat("WEAPON_REVOLVER_CATTLEMAN"), -1, 0);
	WEAPON::_0x72D4CB5DB927009C(joaat("WEAPON_REPEATER_CARBINE"), -1, 0);
	WEAPON::_0x72D4CB5DB927009C(joaat("WEAPON_THROWN_DYNAMITE"), -1, 0);
	WEAPON::_0x72D4CB5DB927009C(joaat("WEAPON_THROWN_TOMAHAWK"), -1, 0);
	WEAPON::_0x72D4CB5DB927009C(joaat("WEAPON_MELEE_KNIFE"), -1, 0);
	STREAMING::REQUEST_MODEL(joaat("P_SHARPENINGSTONE01X"), false);
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1691))
	{
		iLocal_1691 = ANIMSCENE::_CREATE_ANIM_SCENE("script@rcm@dtc3@ig@ig1_fetch_dutch@ig1_fetch_dutch", 0, "pl_Idle_Base", false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(iLocal_1691);
	}
}

bool func_313(int iParam0, int iParam1, float fParam2, float fParam3, float fParam4, float fParam5, bool bParam6, int iParam7, bool bParam8, int iParam9)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (iParam7 == 0)
		{
			iParam7 = func_664(iParam1, __LIB_0__::func_317(), 1, 1);
		}
		*iParam0 = func_665(iParam1, 1, 1, fParam2, fParam3, fParam4, fParam5, bParam6, 1, 0, 0, 0, 0, iParam7, 1, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
			{
			}
			else
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, true);
			}
			if (bParam6 == 1 && !__LIB_0__::func_86(fParam2, fParam3, fParam4))
			{
				TASK::CLEAR_PED_TASKS(*iParam0, true, false);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(*iParam0, fParam2, fParam3, fParam4, fParam5, true, false, true);
			}
			PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 512, true);
			PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 1024, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 17, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 5, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 58, true);
			PED::SET_COMBAT_FLOAT(*iParam0, 12, 2f);
			WEAPON::SET_PED_INFINITE_AMMO(*iParam0, true, 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, true);
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(*iParam0, false);
			PED::SET_RAGDOLL_BLOCKING_FLAGS(*iParam0, 24593);
			switch (iParam1)
			{
				case 7:
					WEAPON::_0x1B83C0DEEBCBB214(*iParam0);
					WEAPON::REMOVE_ALL_PED_WEAPONS(*iParam0, true, true);
					PED::SET_PED_CONFIG_FLAG(*iParam0, 512, true);
					__LIB_8__::func_771(Local_142, 1, 1, 1);
					if (iParam9 == 1)
					{
						func_353(iParam0);
					}
					break;
				case 11:
					WEAPON::_0x1B83C0DEEBCBB214(*iParam0);
					WEAPON::REMOVE_ALL_PED_WEAPONS(*iParam0, true, true);
					break;
				case 3:
					WEAPON::_0x1B83C0DEEBCBB214(*iParam0);
					WEAPON::REMOVE_ALL_PED_WEAPONS(*iParam0, true, true);
					break;
			}
			PED::CLEAR_PED_ENV_DIRT(*iParam0);
			PED::CLEAR_PED_BLOOD_DAMAGE(*iParam0);
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(*iParam0, 10, "ALL");
			__LIB_0__::func_904(iParam1, bParam8);
			return true;
		}
	}
	else
	{
		return true;
	}
	return false;
}

bool func_314(int iParam0, var uParam1, int iParam2, int iParam3, float fParam4, float fParam5, float fParam6, float fParam7)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		__LIB_13__::func_574(uParam1, iParam0, fParam4, fParam5, fParam6, fParam7, 1, 1, 1, 1, 1);
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
			{
			}
			else
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, true);
			}
			if (!PED::IS_PED_INJURED(*iParam0))
			{
				FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(*iParam0, 48, true);
				ENTITY::FREEZE_ENTITY_POSITION(*iParam0, false);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(*iParam0, fParam4, fParam5, fParam6, fParam7, true, false, true);
				TASK::TASK_STAND_STILL(*iParam0, -1);
			}
			return true;
		}
	}
	else
	{
		return true;
	}
	return false;
}

bool func_315(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, float fParam5, float fParam6, float fParam7)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		*iParam0 = func_667(iParam1, bParam2, bParam3, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
			{
			}
			else
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, true);
			}
			if (!PED::IS_PED_INJURED(*iParam0))
			{
				FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(*iParam0, 48, true);
				AITRANSPORT::_0xBA8818212633500A(*iParam0, 0, 1);
				ENTITY::FREEZE_ENTITY_POSITION(*iParam0, false);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(*iParam0, fParam4, fParam5, fParam6, fParam7, true, false, true);
				TASK::TASK_STAND_STILL(*iParam0, -1);
			}
			if (!PED::IS_PED_INJURED(*iParam0))
			{
				if (!PED::_IS_MOUNT_SEAT_FREE(*iParam0, -1))
				{
					if (ENTITY::DOES_ENTITY_EXIST(PED::_GET_RIDER_OF_MOUNT(*iParam0, false)))
					{
						if (!ENTITY::IS_ENTITY_DEAD(PED::_GET_RIDER_OF_MOUNT(*iParam0, false)))
						{
							TASK::TASK_DISMOUNT_ANIMAL(PED::_GET_RIDER_OF_MOUNT(*iParam0, false), 0, 0, 0, 0, 0);
						}
					}
				}
			}
			return true;
		}
	}
	else
	{
		return true;
	}
	return false;
}

bool func_318()
{
	return ((((((WEAPON::_0xFF07CF465F48B830(joaat("WEAPON_SHOTGUN_SAWEDOFF_CHARLES")) && WEAPON::_0xFF07CF465F48B830(joaat("WEAPON_REVOLVER_CATTLEMAN"))) && WEAPON::_0xFF07CF465F48B830(joaat("WEAPON_REPEATER_CARBINE"))) && WEAPON::_0xFF07CF465F48B830(joaat("WEAPON_THROWN_DYNAMITE"))) && WEAPON::_0xFF07CF465F48B830(joaat("WEAPON_THROWN_TOMAHAWK"))) && WEAPON::_0xFF07CF465F48B830(joaat("WEAPON_MELEE_KNIFE"))) && STREAMING::HAS_MODEL_LOADED(joaat("P_SHARPENINGSTONE01X")));
}

void func_319(var uParam0)
{
	if (!PED::IS_PED_INJURED(Global_35))
	{
		__LIB_12__::func_875(uParam0, Global_35, "ARTHUR", 1);
	}
	if (!PED::IS_PED_INJURED(Local_122))
	{
		__LIB_12__::func_875(uParam0, Local_122, "DUTCH", 1);
	}
	if (!PED::IS_PED_INJURED(Local_142))
	{
		__LIB_12__::func_875(uParam0, Local_142, "CHARLES_SMITH", 1);
	}
	if (!PED::IS_PED_INJURED(Local_162))
	{
		__LIB_12__::func_875(uParam0, Local_162, "DTC3_HOSTAGE", 1);
	}
	if (!PED::IS_PED_INJURED(iLocal_182))
	{
		__LIB_12__::func_875(uParam0, iLocal_182, "DCH3_MOTHER", 1);
	}
}

void func_320(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iParam0->f_5 = iParam2;
	iParam0->f_3 = iParam1;
	if (iParam3 != -1)
	{
		iParam0->f_7 = iParam3;
	}
}

void func_321(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
	switch (iParam1)
	{
		case 1:
			break;
		case 2:
			__LIB_1__::func_683(&iLocal_1673, 1);
			__LIB_1__::func_683(&iLocal_1673, 2);
			break;
		case 3:
			__LIB_1__::func_683(&iLocal_1673, 1);
			__LIB_1__::func_683(&iLocal_1673, 2);
			__LIB_1__::func_683(&iLocal_1673, 4);
			break;
		case 4:
			__LIB_1__::func_683(&iLocal_1673, 1);
			__LIB_1__::func_683(&iLocal_1673, 2);
			__LIB_1__::func_683(&iLocal_1673, 4);
			__LIB_1__::func_683(&iLocal_1673, 8);
			break;
		case 5:
			__LIB_1__::func_683(&iLocal_1673, 1);
			__LIB_1__::func_683(&iLocal_1673, 2);
			__LIB_1__::func_683(&iLocal_1673, 4);
			__LIB_1__::func_683(&iLocal_1673, 8);
			__LIB_1__::func_683(&iLocal_1673, 16);
			break;
		case 7:
			__LIB_1__::func_683(&iLocal_1673, 1);
			__LIB_1__::func_683(&iLocal_1673, 2);
			__LIB_1__::func_683(&iLocal_1673, 4);
			__LIB_1__::func_683(&iLocal_1673, 8);
			__LIB_1__::func_683(&iLocal_1673, 16);
			__LIB_1__::func_683(&iLocal_1673, 32);
			break;
		case 8:
			__LIB_1__::func_683(&iLocal_1673, 1);
			__LIB_1__::func_683(&iLocal_1673, 2);
			__LIB_1__::func_683(&iLocal_1673, 4);
			__LIB_1__::func_683(&iLocal_1673, 8);
			__LIB_1__::func_683(&iLocal_1673, 16);
			__LIB_1__::func_683(&iLocal_1673, 32);
			__LIB_1__::func_683(&iLocal_1673, 64);
			break;
		case 9:
			__LIB_1__::func_683(&iLocal_1673, 1);
			__LIB_1__::func_683(&iLocal_1673, 2);
			__LIB_1__::func_683(&iLocal_1673, 4);
			__LIB_1__::func_683(&iLocal_1673, 8);
			__LIB_1__::func_683(&iLocal_1673, 16);
			__LIB_1__::func_683(&iLocal_1673, 32);
			__LIB_1__::func_683(&iLocal_1673, 64);
			__LIB_1__::func_683(&iLocal_1673, 128);
			break;
		case 10:
			__LIB_1__::func_683(&iLocal_1673, 1);
			__LIB_1__::func_683(&iLocal_1673, 2);
			__LIB_1__::func_683(&iLocal_1673, 4);
			__LIB_1__::func_683(&iLocal_1673, 8);
			__LIB_1__::func_683(&iLocal_1673, 16);
			__LIB_1__::func_683(&iLocal_1673, 32);
			__LIB_1__::func_683(&iLocal_1673, 64);
			__LIB_1__::func_683(&iLocal_1673, 128);
			__LIB_1__::func_683(&iLocal_1673, 256);
			break;
		case 11:
			__LIB_1__::func_683(&iLocal_1673, 1);
			__LIB_1__::func_683(&iLocal_1673, 2);
			__LIB_1__::func_683(&iLocal_1673, 4);
			__LIB_1__::func_683(&iLocal_1673, 8);
			__LIB_1__::func_683(&iLocal_1673, 16);
			__LIB_1__::func_683(&iLocal_1673, 32);
			__LIB_1__::func_683(&iLocal_1673, 64);
			__LIB_1__::func_683(&iLocal_1673, 128);
			__LIB_1__::func_683(&iLocal_1673, 256);
			__LIB_1__::func_683(&iLocal_1673, 512);
			break;
	}
}

void func_323()
{
	vector3 vVar0;
	var uVar3;
	if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1691) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_1691, true, false)) && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_1691, "pl_Idle_Base"))
	{
		if (func_318())
		{
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_1691, false))
			{
				if (!PED::IS_PED_INJURED(Local_142) && !PED::IS_PED_INJURED(Global_35))
				{
					ANIMSCENE::_GET_ANIM_SCENE_ORIGIN(iLocal_1691, &vVar0, &uVar3, 2);
					iLocal_1661[0] = WEAPON::_CREATE_WEAPON_OBJECT(joaat("WEAPON_SHOTGUN_SAWEDOFF_CHARLES"), WEAPON::_GET_WEAPON_CLIP_SIZE(joaat("WEAPON_SHOTGUN_SAWEDOFF_CHARLES")), vVar0, true, 1f);
					iLocal_1661[1] = WEAPON::_CREATE_WEAPON_OBJECT(joaat("WEAPON_REVOLVER_CATTLEMAN"), WEAPON::_GET_WEAPON_CLIP_SIZE(joaat("WEAPON_REVOLVER_CATTLEMAN")), vVar0, true, 1f);
					iLocal_1661[2] = WEAPON::_CREATE_WEAPON_OBJECT(joaat("WEAPON_REPEATER_CARBINE"), WEAPON::_GET_WEAPON_CLIP_SIZE(joaat("WEAPON_REPEATER_CARBINE")), vVar0, true, 1f);
					iLocal_1661[3] = WEAPON::_CREATE_WEAPON_OBJECT(joaat("WEAPON_THROWN_DYNAMITE"), 1, vVar0, true, 1f);
					iLocal_1661[4] = WEAPON::_CREATE_WEAPON_OBJECT(joaat("WEAPON_MELEE_KNIFE"), 1, vVar0, true, 1f);
					iLocal_1661[5] = OBJECT::CREATE_OBJECT(joaat("P_SHARPENINGSTONE01X"), vVar0, true, true, false, false, true);
					iLocal_1661[6] = WEAPON::_CREATE_WEAPON_OBJECT(joaat("WEAPON_THROWN_TOMAHAWK"), 1, vVar0, true, 1f);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_142, true);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1691, "ARTHUR", Global_35, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1691, "CharlesSmith", Local_142, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1691, "Shotgun_Sawed01", iLocal_1661[0], 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1691, "w_revolver_cattleman01", iLocal_1661[1], 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1691, "Repeater_Carbine01", iLocal_1661[2], 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1691, "Stick_Dynamite01", iLocal_1661[3], 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1691, "Melee_Knife02", iLocal_1661[4], 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1691, "SharpeningStone01x", iLocal_1661[5], 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1691, "w_melee_tomahawk01", iLocal_1661[6], 0);
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_1691, "pl_Idle_Base", true);
					ANIMSCENE::START_ANIM_SCENE(iLocal_1691);
					ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_1691, "pl_Idle_01");
					ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_1691, "pl_Idle_02");
					ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_1691, "pl_Idle_03");
					ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_1691, "pl_Idle_04");
					ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_1691, "pl_Enter_Left");
					ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_1691, "pl_Enter_Right");
					ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_1691, "pl_Enter_Front");
					WEAPON::_0xC3896D03E2852236(joaat("WEAPON_SHOTGUN_SAWEDOFF_CHARLES"));
					WEAPON::_0xC3896D03E2852236(joaat("WEAPON_REVOLVER_CATTLEMAN"));
					WEAPON::_0xC3896D03E2852236(joaat("WEAPON_REPEATER_CARBINE"));
					WEAPON::_0xC3896D03E2852236(joaat("WEAPON_THROWN_DYNAMITE"));
					WEAPON::_0xC3896D03E2852236(joaat("WEAPON_THROWN_TOMAHAWK"));
					WEAPON::_0xC3896D03E2852236(joaat("WEAPON_MELEE_KNIFE"));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_SHARPENINGSTONE01X"));
				}
			}
		}
	}
}

bool func_324(int iParam0, int iParam1, vector3 vParam2, vector3 vParam5, bool bParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
		{
			if (VEHICLE::_IS_DRAFT_VEHICLE(*iParam0))
			{
				if (__LIB_4__::func_475(iParam0))
				{
					iVar0 = 0;
					while (iVar0 < 6)
					{
						iVar1 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(*iParam0, iVar0);
						if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1))
						{
							PED::SET_PED_CONFIG_FLAG(iVar1, 186, false);
						}
						iVar0++;
					}
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(*iParam0, false);
					VEHICLE::SET_VEHICLE_WHEELS_CAN_BREAK(*iParam0, false);
					VEHICLE::_0x850CE59DEC2028F3(*iParam0, 0);
					VEHICLE::_0xBC4735F48CD983EF(*iParam0, 1);
					return true;
				}
				else
				{
					return false;
				}
			}
		}
		return true;
	}
	else
	{
		STREAMING::REQUEST_MODEL(iParam1, false);
		if (STREAMING::HAS_MODEL_LOADED(iParam1))
		{
			*iParam0 = VEHICLE::CREATE_VEHICLE(iParam1, vParam2, vParam5.z, true, true, bParam8, false);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 0f);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam1);
			switch (iParam1)
			{
				case joaat("CANOE"):
					AITRANSPORT::_0xBA8818212633500A(*iParam0, 11, 1);
					VEHICLE::_0x6835AFEA10E186F4(iLocal_1161, 2);
					TASK::_0x4BA972D0E5AD8122(*iParam0, 1);
					AITRANSPORT::_0xB7079F4C72896756(Global_35, *iParam0, 0, 16, 1);
					break;
			}
			if (bParam9 == 1)
			{
				ENTITY::SET_ENTITY_COORDS(*iParam0, vParam2, true, false, true, true);
				ENTITY::SET_ENTITY_ROTATION(*iParam0, vParam5, 2, true);
				if (VEHICLE::IS_THIS_MODEL_A_BOAT(iParam1))
				{
					VEHICLE::SET_BOAT_ANCHOR(*iParam0, bParam9);
				}
				else
				{
					ENTITY::FREEZE_ENTITY_POSITION(*iParam0, bParam9);
				}
			}
			if (!VEHICLE::_IS_DRAFT_VEHICLE(*iParam0) || bParam8 == 1)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_325(var uParam0)
{
	func_670(&(Local_968[0 /*20*/]), 661, 82, 2489.665f, 776.5205f, 67.38f, 49.2f, 0, 0);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_968[0 /*20*/]))
	{
		return false;
	}
	func_670(&(Local_968[1 /*20*/]), 662, 82, 2491.213f, 795.4955f, 66.2686f, 64.5379f, 0, 0);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_968[1 /*20*/]))
	{
		return false;
	}
	func_670(&(Local_968[2 /*20*/]), 660, 82, 2496.743f, 781.865f, 66.8606f, 66.2335f, 0, 0);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_968[2 /*20*/]))
	{
		return false;
	}
	func_670(&(Local_968[3 /*20*/]), 667, 82, 2480.689f, 776.2622f, 66.3465f, 209.6414f, 0, 0);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_968[3 /*20*/]))
	{
		return false;
	}
	func_670(&(Local_968[4 /*20*/]), 664, 82, 2483.735f, 771.999f, 66.2811f, 33.4198f, 0, 0);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_968[4 /*20*/]))
	{
		return false;
	}
	func_670(&(Local_968[5 /*20*/]), 663, 82, 2513.878f, 809.3778f, 71.4611f, 243.1597f, 0, 0);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_968[4 /*20*/]))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1659[0]))
	{
		STREAMING::REQUEST_MODEL(WEAPON::_GET_WEAPONTYPE_MODEL(joaat("WEAPON_MELEE_LANTERN")), false);
		if (STREAMING::HAS_MODEL_LOADED(WEAPON::_GET_WEAPONTYPE_MODEL(joaat("WEAPON_MELEE_LANTERN"))))
		{
			iLocal_1659[0] = WEAPON::_CREATE_WEAPON_OBJECT(joaat("WEAPON_MELEE_LANTERN"), 1, 2489.78f, 776.03f, 67.21f, true, 1f);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1659[0]))
	{
		return false;
	}
	return (((((ENTITY::DOES_ENTITY_EXIST(Local_968[0 /*20*/]) && ENTITY::DOES_ENTITY_EXIST(Local_968[1 /*20*/])) && ENTITY::DOES_ENTITY_EXIST(Local_968[2 /*20*/])) && ENTITY::DOES_ENTITY_EXIST(Local_968[3 /*20*/])) && ENTITY::DOES_ENTITY_EXIST(Local_968[4 /*20*/])) && ENTITY::DOES_ENTITY_EXIST(Local_968[5 /*20*/]));
}

bool func_326(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 2:
			if (((iLocal_112 == 0 && func_330(&(uLocal_1152[0]), joaat("A_C_HORSE_MURFREEBROOD_MANGE_01"), vLocal_36, fLocal_39, joaat("REL_NO_RELATIONSHIP"), 0, 0, 0, -2, 0, joaat("WEAPON_UNARMED"), joaat("META_OUTFIT_DEFAULT"))) && func_330(&(uLocal_1152[1]), joaat("A_C_HORSE_MURFREEBROOD_MANGE_03"), vLocal_40, fLocal_43, joaat("REL_NO_RELATIONSHIP"), 0, 0, 0, -2, 0, joaat("WEAPON_UNARMED"), joaat("META_OUTFIT_DEFAULT"))) || ((iLocal_112 == 1 && func_314(&iLocal_1150, uParam1, 1, 1, vLocal_36.x, vLocal_36.y, vLocal_36.z, fLocal_39)) && func_315(&iLocal_1151, 7, 1, 1, vLocal_40.x, vLocal_40.y, vLocal_40.z, fLocal_43)))
			{
				return true;
			}
			break;
		case 3:
		case 4:
		case 5:
			if (((iLocal_112 == 0 && func_330(&(uLocal_1152[0]), joaat("A_C_HORSE_MURFREEBROOD_MANGE_01"), vLocal_92, fLocal_95, joaat("REL_NO_RELATIONSHIP"), 0, 0, 0, -2, 0, joaat("WEAPON_UNARMED"), joaat("META_OUTFIT_DEFAULT"))) && func_330(&(uLocal_1152[1]), joaat("A_C_HORSE_MURFREEBROOD_MANGE_03"), vLocal_88, fLocal_91, joaat("REL_NO_RELATIONSHIP"), 0, 0, 0, -2, 0, joaat("WEAPON_UNARMED"), joaat("META_OUTFIT_DEFAULT"))) || ((iLocal_112 == 1 && func_314(&iLocal_1150, uParam1, 1, 1, vLocal_88.x, vLocal_88.y, vLocal_88.z, fLocal_91)) && func_315(&iLocal_1151, 7, 1, 1, vLocal_92.x, vLocal_92.y, vLocal_92.z, fLocal_95)))
			{
				return true;
			}
			break;
		case 6:
			if ((iLocal_112 == 0 && func_330(&(uLocal_1152[0]), joaat("A_C_HORSE_MURFREEBROOD_MANGE_01"), vLocal_92, fLocal_95, joaat("REL_NO_RELATIONSHIP"), 0, 0, 0, -2, 0, joaat("WEAPON_UNARMED"), joaat("META_OUTFIT_DEFAULT"))) || (iLocal_112 == 1 && func_314(&iLocal_1150, uParam1, 1, 1, vLocal_88.x, vLocal_88.y, vLocal_88.z, fLocal_91)))
			{
				return true;
			}
			break;
		case 7:
			if ((iLocal_112 == 0 && func_330(&(uLocal_1152[0]), joaat("A_C_HORSE_MURFREEBROOD_MANGE_01"), 2354.213f, 1370.24f, 105.1166f, 128.7562f, joaat("REL_NO_RELATIONSHIP"), 0, 0, 0, -2, 0, joaat("WEAPON_UNARMED"), joaat("META_OUTFIT_DEFAULT"))) || (iLocal_112 == 1 && func_314(&iLocal_1150, uParam1, 1, 1, 2354.213f, 1370.24f, 105.1166f, 128.7562f)))
			{
				return true;
			}
			break;
		case 8:
		case 9:
			if ((iLocal_112 == 0 && func_330(&(uLocal_1152[0]), joaat("A_C_HORSE_MURFREEBROOD_MANGE_01"), 2939.3f, 1342.3f, 44.3f, 160.8f, joaat("REL_NO_RELATIONSHIP"), 0, 0, 0, -2, 0, joaat("WEAPON_UNARMED"), joaat("META_OUTFIT_DEFAULT"))) || (iLocal_112 == 1 && func_314(&iLocal_1150, uParam1, 1, 1, 2939.3f, 1342.3f, 44.3f, 160.8f)))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_327(vector3 vParam0, float fParam3, char* sParam4, float fParam5, float fParam6)
{
	if (((!PED::IS_PED_INJURED(Global_35) && !PED::IS_PED_INJURED(Local_142)) && ENTITY::DOES_ENTITY_EXIST(iLocal_1161)) && !ENTITY::IS_ENTITY_DEAD(iLocal_1161))
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_142, vParam0, fParam3, true, false, true);
		if (!__LIB_14__::func_11(Global_35, iLocal_1161))
		{
			PED::SET_PED_INTO_VEHICLE(Global_35, iLocal_1161, 1);
		}
		if (!__LIB_14__::func_11(Local_142, iLocal_1161))
		{
			PED::SET_PED_INTO_VEHICLE(Local_142, iLocal_1161, 0);
		}
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_1161, vParam0, fParam3, true, false, true);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_1161, 0f);
		TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Global_35, iLocal_1161, sParam4, 0, 0, 4194312, -1, fParam6, 0, 1073741824 /* Float: 2f */, 0);
		VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_1161, fParam5);
	}
}

void func_328(bool bParam0)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1693))
	{
		iLocal_1693 = ANIMSCENE::_CREATE_ANIM_SCENE("script@rcm@dtc3@leadin@rsc3@cage_placement", 0, __LIB_0__::func_196(bParam0, "pl_cage_placement", "pl_cage_placement"), false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(iLocal_1693);
	}
}

void func_329()
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1692))
	{
		iLocal_1692 = ANIMSCENE::_CREATE_ANIM_SCENE("script@rcm@dtc3@ig@ig2_murfees_emerge@ig2_murfees_emerge", 0, "pl_Action", false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(iLocal_1692);
	}
}

bool func_330(int iParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	bool bVar0;
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return true;
	}
	else
	{
		STREAMING::REQUEST_MODEL(iParam1, false);
		if (STREAMING::HAS_MODEL_LOADED(iParam1))
		{
			bVar0 = true;
			if (iParam13 != joaat("META_OUTFIT_DEFAULT"))
			{
				bVar0 = false;
			}
			if (iParam1 == joaat("CS_MEREDITH") || iParam1 == joaat("CS_MEREDITHSMOTHER"))
			{
				bVar0 = false;
				iParam13 = joaat("META_OUTFIT_DEFAULT");
			}
			if ((iParam1 == joaat("A_C_HORSE_MURFREEBROOD_MANGE_01") || iParam1 == joaat("A_C_HORSE_MURFREEBROOD_MANGE_02")) || iParam1 == joaat("A_C_HORSE_MURFREEBROOD_MANGE_03"))
			{
				bVar0 = false;
				iParam13 = -2045421226;
			}
			*iParam0 = __LIB_8__::func_931(iParam1, vParam2, fParam5, 1, 1, 0, 1, 1, bVar0, 0, 0, 0, 0);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam1);
			if (iParam11 == 1)
			{
				WEAPON::REMOVE_ALL_PED_WEAPONS(*iParam0, false, true);
			}
			if (iParam6 != joaat("REL_NO_RELATIONSHIP"))
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(*iParam0, iParam6);
			}
			if (PED::IS_PED_HUMAN(*iParam0))
			{
				if (iParam12 != joaat("WEAPON_UNARMED"))
				{
					__LIB_4__::func_7(*iParam0, iParam12, 24, 5, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
				}
			}
			if (iParam13 != joaat("META_OUTFIT_DEFAULT"))
			{
				PED::_SET_PED_BODY_COMPONENT(*iParam0, iParam13);
				PED::_UPDATE_PED_VARIATION(*iParam0, false, true, true, true, false);
			}
			if (iParam1 == joaat("CS_MEREDITH") || iParam1 == joaat("CS_MEREDITHSMOTHER"))
			{
				PED::_SET_PED_BODY_COMPONENT(*iParam0, iParam13);
				PED::_UPDATE_PED_VARIATION(*iParam0, false, true, true, true, false);
			}
			PED::SET_PED_CONFIG_FLAG(*iParam0, 233, bParam8);
			PED::SET_PED_CAN_BE_TARGETTED(*iParam0, bParam7);
			if (bParam8 == 1)
			{
				PED::SET_PED_CONFIG_FLAG(*iParam0, 103, true);
				PED::SET_PED_CONFIG_FLAG(*iParam0, 146, true);
				PED::SET_PED_CONFIG_FLAG(*iParam0, 143, false);
				PED::SET_PED_CONFIG_FLAG(*iParam0, 148, true);
				PED::SET_PED_CONFIG_FLAG(*iParam0, 168, true);
				PED::SET_PED_CONFIG_FLAG(*iParam0, 250, true);
				PED::SET_PED_CONFIG_FLAG(*iParam0, 96, true);
				PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 512, true);
				PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 1024, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 17, false);
				PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 5, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 58, true);
				ENTITY::SET_ENTITY_LOD_DIST(*iParam0, 150);
				PED::SET_PED_LOD_MULTIPLIER(*iParam0, 5f);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, 1);
			}
			PED::SET_PED_CONFIG_FLAG(*iParam0, 6, true);
			PED::SET_PED_CONFIG_FLAG(*iParam0, 186, false);
			PED::SET_PED_CONFIG_FLAG(*iParam0, 35, true);
			WEAPON::SET_PED_INFINITE_AMMO(*iParam0, true, 0);
			PED::SET_PED_KEEP_TASK(*iParam0, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, true);
			if (ENTITY::DOES_ENTITY_EXIST(iParam9) && !ENTITY::IS_ENTITY_DEAD(iParam9))
			{
				if (ENTITY::IS_ENTITY_A_VEHICLE(iParam9))
				{
					PED::SET_PED_INTO_VEHICLE(*iParam0, ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam9), iParam10);
				}
				else if (ENTITY::IS_ENTITY_A_PED(iParam9) && PED::_0x2D64376CF437363E(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam9)))
				{
					PED::_SET_PED_ON_MOUNT(*iParam0, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam9), iParam10, true);
				}
			}
			switch (iParam1)
			{
				case joaat("CS_MEREDITH"):
					PED::_0xAAB050DA48B57978(*iParam0, "Default_Scared", 0, -1, 4);
					break;
				case joaat("A_C_HORSE_MURFREEBROOD_MANGE_02"):
				case joaat("A_C_HORSE_MURFREEBROOD_MANGE_03"):
				case joaat("A_C_HORSE_MURFREEBROOD_MANGE_01"):
					ATTRIBUTE::SET_ATTRIBUTE_BASE_RANK(*iParam0, 13, 0);
					__LIB_7__::func_345(*iParam0, 1);
					break;
				case joaat("A_F_M_UNICORPSE_01"):
				case joaat("A_M_M_UNICORPSE_01"):
					__LIB_3__::func_459(*iParam0, 0);
					ENTITY::_0x18FF3110CF47115D(*iParam0, 7, 0);
					ENTITY::_0x18FF3110CF47115D(*iParam0, 12, 0);
					break;
			}
			return true;
		}
	}
	return false;
}

bool func_331(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = joaat("META_OUTFIT_DEFAULT");
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*iParam0)[iVar0 /*20*/]))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 == *iParam0)
	{
		if (iParam6 == 1)
		{
			iVar0 = 0;
			while (iVar0 < *iParam0)
			{
				if (!PED::IS_PED_INJURED((*iParam0)[iVar0 /*20*/]) && !PED::_0xA0BC8FAED8CFEB3C((*iParam0)[iVar0 /*20*/]))
				{
					return false;
				}
				iVar0++;
			}
		}
		return true;
	}
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		switch (iVar0)
		{
			case 0:
				if (iParam7 != joaat("META_OUTFIT_DEFAULT"))
				{
					iVar2 = iParam7;
				}
				break;
			case 1:
				if (iParam8 != joaat("META_OUTFIT_DEFAULT"))
				{
					iVar2 = iParam8;
				}
				break;
			case 2:
				if (iParam9 != joaat("META_OUTFIT_DEFAULT"))
				{
					iVar2 = iParam9;
				}
				break;
			case 3:
				if (iParam10 != joaat("META_OUTFIT_DEFAULT"))
				{
					iVar2 = iParam10;
				}
				break;
		}
		if (iVar0 == iVar1 && func_330(iParam0[iVar0 /*20*/], (iParam0[iVar0 /*20*/])->f_4, (iParam0[iVar0 /*20*/])->f_14, (iParam0[iVar0 /*20*/])->f_17, iParam1, fParam2, iParam3, 0, -2, iParam4, joaat("WEAPON_UNARMED"), iVar2))
		{
			if (!PED::IS_PED_INJURED((*iParam0)[iVar0 /*20*/]))
			{
				func_320(iParam0[iVar0 /*20*/], iParam5, 0, 0);
			}
		}
		iVar0++;
	}
	return false;
}

bool func_332()
{
	if (!STREAMING::_IS_IMAP_ACTIVE(-2117963426))
	{
		STREAMING::_REQUEST_IMAP(-2117963426);
	}
	if (!STREAMING::_IS_IMAP_ACTIVE(1537844205))
	{
		STREAMING::_REQUEST_IMAP(1537844205);
	}
	if (!STREAMING::_IS_IMAP_ACTIVE(-1766409506))
	{
		STREAMING::_REQUEST_IMAP(-1766409506);
	}
	if (!STREAMING::_IS_IMAP_ACTIVE(883152450))
	{
		STREAMING::_REQUEST_IMAP(883152450);
	}
	if (PATHFIND::_0x495CFAB2924237C7("nav_dutch3"))
	{
		if (!PATHFIND::_0x5AC0944C156E5F44("nav_dutch3"))
		{
			PATHFIND::_0x7C334FF4D9215912("nav_dutch3");
		}
	}
	if ((func_677(&(iLocal_1504[0]), joaat("P_PRISONCAGE02X"), 2289.473f, 1463.206f, 82.2243f, 0f, 0f, -107.34f, 1, 1, -1) && func_677(&(iLocal_1504[1]), joaat("P_CS_ROPEHANDSSPLIT"), 2290.665f, 1462.693f, 83.2402f, 0f, 0f, -3.04f, 1, 1, -1)) && func_677(&(iLocal_1504[2]), joaat("P_FENCE_LORGEPOST01X"), 2307.6f, 1453.5f, 82.75f, 0f, 0f, 0f, 1, 1, -1))
	{
		return true;
	}
	return false;
}

bool func_333(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (iParam1 == 1)
	{
		if (!__LIB_0__::func_27(iLocal_1674, 1))
		{
			TASK::_0xFF745B0346E19E2C(joaat("DEAD_CARRIABLE_HUMAN"));
			if (!__LIB_0__::func_27(iLocal_1674, 2))
			{
				__LIB_1__::func_683(&iLocal_1674, 2);
			}
			else if (func_331(&Local_442, joaat("REL_PLAYER_ENEMY"), 1, 1, 1, 0, iParam6, -1287424474, 154214852, 1788856634, joaat("META_OUTFIT_DEFAULT")))
			{
				if (!PED::IS_PED_INJURED(Local_442[0 /*20*/]))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(Local_442[0 /*20*/], joaat("WEAPON_MELEE_TORCH"), -1, true, false, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
					WEAPON::_GIVE_WEAPON_TO_PED_2(Local_442[0 /*20*/], joaat("WEAPON_MELEE_MACHETE"), -1, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
					PED::SET_PED_HEARING_RANGE(Local_442[0 /*20*/], 30f);
					PED::SET_PED_SEEING_RANGE(Local_442[0 /*20*/], 15f);
					PED::SET_PED_CONFIG_FLAG(Local_442[0 /*20*/], 394, true);
				}
				if (!PED::IS_PED_INJURED(Local_442[1 /*20*/]))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(Local_442[1 /*20*/], joaat("WEAPON_MELEE_MACHETE"), -1, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
					PED::SET_PED_HEARING_RANGE(Local_442[1 /*20*/], 30f);
					PED::SET_PED_SEEING_RANGE(Local_442[1 /*20*/], 15f);
					PED::SET_PED_CONFIG_FLAG(Local_442[1 /*20*/], 394, true);
				}
				if (!PED::IS_PED_INJURED(Local_442[2 /*20*/]))
				{
					WEAPON::REMOVE_ALL_PED_WEAPONS(Local_442[2 /*20*/], true, true);
					ENTITY::_0x18FF3110CF47115D(Local_442[2 /*20*/], 7, 1);
					ENTITY::_0x18FF3110CF47115D(Local_442[2 /*20*/], 12, 1);
					TASK::TASK_CARRIABLE(Local_442[2 /*20*/], joaat("DEAD_CARRIABLE_HUMAN"), Local_442[1 /*20*/], 1, 0);
					PED::_0x2208438012482A1A(Local_442[2 /*20*/], false, false);
				}
				func_320(&(Local_442[0 /*20*/]), 28, 0, 0);
				func_320(&(Local_442[1 /*20*/]), 28, 0, 0);
				__LIB_1__::func_683(&iLocal_1674, 1);
			}
		}
	}
	if (iParam2 == 1)
	{
		if (!__LIB_0__::func_27(iLocal_1674, 8))
		{
			if (!__LIB_0__::func_27(iLocal_1674, 16))
			{
				if (iParam1 == 0 || (iParam1 == 1 && __LIB_0__::func_27(iLocal_1674, 1)))
				{
					__LIB_1__::func_683(&iLocal_1674, 16);
				}
			}
			else if (func_331(&Local_503, joaat("REL_PLAYER_ENEMY"), 1, 1, 1, 0, iParam6, joaat("META_OUTFIT_DEFAULT"), joaat("META_OUTFIT_DEFAULT"), joaat("META_OUTFIT_DEFAULT"), joaat("META_OUTFIT_DEFAULT")))
			{
				if (!PED::IS_PED_INJURED(Local_503[0 /*20*/]))
				{
					__LIB_12__::func_875(uParam0, Local_503[0 /*20*/], "INB_PED4", 0);
					AUDIO::SET_AMBIENT_VOICE_NAME(Local_503[0 /*20*/], "0202_G_M_M_UNIINBRED_02_WHITE_02");
					PED::SET_PED_CONFIG_FLAG(Local_503[0 /*20*/], 138, true);
					WEAPON::_GIVE_WEAPON_TO_PED_2(Local_503[0 /*20*/], joaat("WEAPON_MELEE_MACHETE"), -1, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
					PED::_0xB8DE69D9473B7593(Local_503[0 /*20*/], 13);
				}
				if (!PED::IS_PED_INJURED(Local_503[1 /*20*/]))
				{
					__LIB_12__::func_875(uParam0, Local_503[1 /*20*/], "INB_PED1", 0);
					AUDIO::SET_AMBIENT_VOICE_NAME(Local_503[1 /*20*/], "0199_G_M_M_UNIINBRED_01_WHITE_01");
					PED::SET_PED_CONFIG_FLAG(Local_503[1 /*20*/], 138, true);
					WEAPON::_GIVE_WEAPON_TO_PED_2(Local_503[1 /*20*/], joaat("WEAPON_MELEE_MACHETE"), -1, true, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
					PED::_0xB8DE69D9473B7593(Local_503[1 /*20*/], 13);
				}
				if (!PED::IS_PED_INJURED(Local_503[2 /*20*/]))
				{
					__LIB_12__::func_875(uParam0, Local_503[2 /*20*/], "INB_PED2", 0);
					AUDIO::SET_AMBIENT_VOICE_NAME(Local_503[2 /*20*/], "0200_G_M_M_UNIINBRED_01_WHITE_02");
					WEAPON::_GIVE_WEAPON_TO_PED_2(Local_503[2 /*20*/], joaat("WEAPON_MELEE_TORCH"), -1, true, false, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
					WEAPON::_GIVE_WEAPON_TO_PED_2(Local_503[2 /*20*/], joaat("WEAPON_MELEE_MACHETE"), -1, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
					__LIB_13__::func_514(Local_503[2 /*20*/], 3);
					PED::_0xB8DE69D9473B7593(Local_503[2 /*20*/], 13);
				}
				if (!PED::IS_PED_INJURED(Local_503[3 /*20*/]))
				{
					__LIB_12__::func_875(uParam0, Local_503[3 /*20*/], "INB_PED3", 0);
					AUDIO::SET_AMBIENT_VOICE_NAME(Local_503[3 /*20*/], "0201_G_M_M_UNIINBRED_02_WHITE_01");
					WEAPON::_GIVE_WEAPON_TO_PED_2(Local_503[3 /*20*/], joaat("WEAPON_MELEE_MACHETE"), -1, true, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
					PED::_0xB8DE69D9473B7593(Local_503[3 /*20*/], 13);
				}
				if (!PED::IS_PED_INJURED(Local_503[4 /*20*/]))
				{
					__LIB_12__::func_875(uParam0, Local_503[5 /*20*/], "INB_PED5", 0);
					AUDIO::SET_AMBIENT_VOICE_NAME(Local_503[4 /*20*/], "0203_G_M_M_UNIINBRED_03_WHITE_01");
					PED::_0xB8DE69D9473B7593(Local_503[4 /*20*/], 13);
					WEAPON::_GIVE_WEAPON_TO_PED_2(Local_503[4 /*20*/], joaat("WEAPON_MELEE_MACHETE"), -1, true, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				}
				if (!PED::IS_PED_INJURED(Local_503[5 /*20*/]))
				{
					__LIB_12__::func_875(uParam0, Local_503[5 /*20*/], "INB_PED6", 0);
					AUDIO::SET_AMBIENT_VOICE_NAME(Local_503[5 /*20*/], "0204_G_M_M_UNIINBRED_03_WHITE_02");
					WEAPON::_GIVE_WEAPON_TO_PED_2(Local_503[5 /*20*/], joaat("WEAPON_MELEE_MACHETE"), -1, true, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
					__LIB_13__::func_514(Local_503[5 /*20*/], 3);
					PED::_0xB8DE69D9473B7593(Local_503[5 /*20*/], 13);
				}
				if (!PED::IS_PED_INJURED(Local_503[6 /*20*/]))
				{
					__LIB_12__::func_875(uParam0, Local_503[5 /*20*/], "INB_PED6", 0);
					AUDIO::SET_AMBIENT_VOICE_NAME(Local_503[6 /*20*/], "0204_G_M_M_UNIINBRED_03_WHITE_02");
					WEAPON::_GIVE_WEAPON_TO_PED_2(Local_503[6 /*20*/], joaat("WEAPON_MELEE_MACHETE"), -1, true, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
					PED::_0xB8DE69D9473B7593(Local_503[6 /*20*/], 13);
				}
				if (!PED::IS_PED_INJURED(Local_503[7 /*20*/]))
				{
					__LIB_12__::func_875(uParam0, Local_503[7 /*20*/], "INB_PED6", 0);
					AUDIO::SET_AMBIENT_VOICE_NAME(Local_503[7 /*20*/], "0202_G_M_M_UNIINBRED_02_WHITE_02");
					WEAPON::_GIVE_WEAPON_TO_PED_2(Local_503[7 /*20*/], joaat("WEAPON_MELEE_MACHETE"), -1, true, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
					PED::_0xB8DE69D9473B7593(Local_503[7 /*20*/], 13);
				}
				func_320(&(Local_503[0 /*20*/]), 21, 0, 0);
				func_320(&(Local_503[1 /*20*/]), 19, 0, 0);
				func_320(&(Local_503[2 /*20*/]), 18, 0, 0);
				func_320(&(Local_503[3 /*20*/]), 0, 0, 0);
				func_320(&(Local_503[4 /*20*/]), 0, 0, 0);
				func_320(&(Local_503[5 /*20*/]), 0, 0, 0);
				func_320(&(Local_503[6 /*20*/]), 0, 0, 0);
				func_320(&(Local_503[7 /*20*/]), 0, 0, 0);
				__LIB_1__::func_683(&iLocal_1674, 8);
			}
		}
	}
	if (iParam3 == 1)
	{
		if (!__LIB_0__::func_27(iLocal_1674, 64))
		{
			if (!__LIB_0__::func_27(iLocal_1674, 128))
			{
				if (iParam2 == 0 || (iParam2 == 1 && __LIB_0__::func_27(iLocal_1674, 8)))
				{
					__LIB_1__::func_683(&iLocal_1674, 128);
				}
			}
			else if (func_331(&Local_664, joaat("REL_PLAYER_ENEMY"), 1, 1, 1, 0, iParam6, joaat("META_OUTFIT_DEFAULT"), joaat("META_OUTFIT_DEFAULT"), joaat("META_OUTFIT_DEFAULT"), joaat("META_OUTFIT_DEFAULT")))
			{
				if (!PED::IS_PED_INJURED(Local_664[0 /*20*/]))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(Local_664[0 /*20*/], joaat("WEAPON_MELEE_TORCH"), -1, true, false, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
					__LIB_4__::func_7(Local_664[0 /*20*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
				}
				if (!PED::IS_PED_INJURED(Local_664[1 /*20*/]))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(Local_664[1 /*20*/], joaat("WEAPON_MELEE_MACHETE"), -1, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				}
				if (!PED::IS_PED_INJURED(Local_664[2 /*20*/]))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(Local_664[2 /*20*/], joaat("WEAPON_MELEE_TORCH"), -1, true, false, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
					__LIB_4__::func_7(Local_664[2 /*20*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
				}
				if (!PED::IS_PED_INJURED(Local_664[3 /*20*/]))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(Local_664[3 /*20*/], joaat("WEAPON_MELEE_MACHETE"), -1, true, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				}
				func_320(&(Local_664[0 /*20*/]), 15, 0, 0);
				func_320(&(Local_664[1 /*20*/]), 15, 0, 0);
				func_320(&(Local_664[2 /*20*/]), 15, 0, 0);
				func_320(&(Local_664[3 /*20*/]), 15, 0, 0);
				__LIB_1__::func_683(&iLocal_1674, 64);
			}
		}
	}
	if (iParam4 == 1)
	{
		if (!__LIB_0__::func_27(iLocal_1674, 512))
		{
			if (!__LIB_0__::func_27(iLocal_1674, 1024))
			{
				if (iParam3 == 0 || (iParam3 == 1 && __LIB_0__::func_27(iLocal_1674, 64)))
				{
					__LIB_1__::func_683(&iLocal_1674, 1024);
				}
			}
			else if (func_331(&Local_745, joaat("REL_PLAYER_ENEMY"), 1, 1, 1, 0, iParam6, joaat("META_OUTFIT_DEFAULT"), joaat("META_OUTFIT_DEFAULT"), joaat("META_OUTFIT_DEFAULT"), joaat("META_OUTFIT_DEFAULT")))
			{
				if (!PED::IS_PED_INJURED(Local_745[0 /*20*/]))
				{
					__LIB_4__::func_7(Local_745[0 /*20*/], joaat("WEAPON_SHOTGUN_DOUBLEBARREL"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					__LIB_13__::func_514(Local_745[0 /*20*/], 2);
				}
				if (!PED::IS_PED_INJURED(Local_745[1 /*20*/]))
				{
					__LIB_4__::func_7(Local_745[1 /*20*/], joaat("WEAPON_SHOTGUN_DOUBLEBARREL"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					__LIB_13__::func_514(Local_745[1 /*20*/], 2);
				}
				if (!PED::IS_PED_INJURED(Local_745[2 /*20*/]))
				{
					__LIB_4__::func_7(Local_745[2 /*20*/], joaat("WEAPON_SHOTGUN_DOUBLEBARREL"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					__LIB_13__::func_514(Local_745[2 /*20*/], 2);
				}
				if (!PED::IS_PED_INJURED(Local_745[3 /*20*/]))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(Local_745[3 /*20*/], joaat("WEAPON_MELEE_MACHETE"), -1, true, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
					__LIB_13__::func_514(Local_745[3 /*20*/], 1);
				}
				if (!PED::IS_PED_INJURED(Local_745[4 /*20*/]))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(Local_745[4 /*20*/], joaat("WEAPON_MELEE_MACHETE"), -1, true, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
					__LIB_13__::func_514(Local_745[4 /*20*/], 1);
				}
				func_320(&(Local_745[0 /*20*/]), 0, 0, 0);
				func_320(&(Local_745[1 /*20*/]), 0, 0, 0);
				func_320(&(Local_745[2 /*20*/]), 0, 0, 0);
				func_320(&(Local_745[3 /*20*/]), 0, 0, 0);
				func_320(&(Local_745[4 /*20*/]), 0, 0, 0);
				__LIB_1__::func_683(&iLocal_1674, 512);
			}
		}
	}
	if (iParam5 == 1)
	{
		if (!__LIB_0__::func_27(iLocal_1674, 4096))
		{
			if (!__LIB_0__::func_27(iLocal_1674, 8192))
			{
				if (iParam4 == 0 || (iParam4 == 1 && __LIB_0__::func_27(iLocal_1674, 512)))
				{
					__LIB_1__::func_683(&iLocal_1674, 8192);
				}
			}
			else if (func_331(&Local_846, joaat("REL_PLAYER_ENEMY"), 1, 1, 1, 0, 1, joaat("META_OUTFIT_DEFAULT"), joaat("META_OUTFIT_DEFAULT"), joaat("META_OUTFIT_DEFAULT"), joaat("META_OUTFIT_DEFAULT")))
			{
				if (!PED::IS_PED_INJURED(Local_846[0 /*20*/]))
				{
					__LIB_12__::func_875(uParam0, Local_846[0 /*20*/], "INB_PED6", 0);
					AUDIO::SET_AMBIENT_VOICE_NAME(Local_846[0 /*20*/], "0204_G_M_M_UNIINBRED_03_WHITE_02");
					WEAPON::_GIVE_WEAPON_TO_PED_2(Local_846[0 /*20*/], joaat("WEAPON_MELEE_MACHETE"), -1, true, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				}
				func_320(&(Local_846[0 /*20*/]), 0, 0, 0);
				__LIB_1__::func_683(&iLocal_1674, 4096);
			}
		}
	}
	return (((((iParam1 == 0 || (iParam1 == 1 && __LIB_0__::func_27(iLocal_1674, 1))) && (iParam2 == 0 || (iParam2 == 1 && __LIB_0__::func_27(iLocal_1674, 8)))) && (iParam3 == 0 || (iParam3 == 1 && __LIB_0__::func_27(iLocal_1674, 64)))) && (iParam4 == 0 || (iParam4 == 1 && __LIB_0__::func_27(iLocal_1674, 512)))) && (iParam5 == 0 || (iParam5 == 1 && __LIB_0__::func_27(iLocal_1674, 4096))));
}

void func_334(bool bParam0)
{
	if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1693) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_1693, true, false)) && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_1693, "pl_cage_placement"))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_1693, false))
		{
			if (((ENTITY::DOES_ENTITY_EXIST(iLocal_1504[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_1504[0])) && ENTITY::DOES_ENTITY_EXIST(iLocal_1504[1])) && !ENTITY::IS_ENTITY_DEAD(iLocal_1504[1]))
			{
				ENTITY::SET_CAN_CLIMB_ON_ENTITY(iLocal_1504[0], false);
				ENTITY::SET_CAN_AUTO_VAULT_ON_ENTITY(iLocal_1504[0], false);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1693, "re_nakedswimmer_males_01", Local_867[3 /*20*/], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1693, "p_prisoncage02x", iLocal_1504[0], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1693, "p_cs_ropehandssplit", iLocal_1504[1], 0);
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_1693, __LIB_0__::func_196(bParam0, "pl_cage_placement", "pl_cage_placement"), true);
				ANIMSCENE::START_ANIM_SCENE(iLocal_1693);
			}
		}
	}
}

void func_335(int iParam0, int iParam1)
{
	if (!PED::IS_PED_INJURED(iParam0) && !PED::IS_PED_INJURED(iParam1))
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
			if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1240[32]))
			{
				MISC::_0x2FCD528A397E5C88(iLocal_1240[32], 2442122);
			}
			PED::_SET_PED_ON_MOUNT(Global_35, iParam1, -1, true);
			CLOCK::SET_CLOCK_TIME(10, 0, 0);
			func_679(Global_35, iParam1, 2939.3f, 1342.3f, 44.3f, 160.8f, "dutch3_cme_annesburg", 0f, 0f, 1.501f, joaat("MOTIONSTATE_RUN"), 1, 0, 1);
			AUDIO::_0x5E3CCF03995388B5(292745074, 2907.135f, 1270.862f, 44.72908f);
			CAM::_0xBC016635D6A73B31("script@story@dutch3@returntobeavers", "1_Annesburg_1", 5);
			__LIB_1__::func_681(&iLocal_1670, 1024);
			CAM::_0x702B75DC9D3EDE56(true);
			__LIB_2__::func_259(&uLocal_1179);
			HUD::_HIDE_HUD_COMPONENT(-1679307491);
			CAM::_0xE296208C273BD7F0(0, -1, 0, 17, 1, 0);
			bLocal_1163 = false;
			__LIB_1__::func_683(&iLocal_1670, 2048);
			__LIB_1__::func_683(&iLocal_1670, 4096);
		}
	}
}

int func_348(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	int iVar0;
	__LIB_12__::func_750(uParam4, &uParam0);
	if (__LIB_0__::func_84(uParam4, 2) && !__LIB_0__::func_84(uParam4, 67108864))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SKIP_CUTSCENE"), false);
	}
	if (__LIB_0__::func_81(uParam4) != 1)
	{
		__LIB_13__::func_570(uParam4);
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
					__LIB_13__::func_18(uParam4, &uParam0, uParam5);
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
				if (__LIB_13__::func_4(uParam4, &uParam0, 1, 1))
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
					__LIB_13__::func_18(uParam4, &uParam0, uParam5);
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
			func_704(uParam4);
			if (__LIB_12__::func_688(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_341);
			}
			__LIB_12__::func_800(uParam5);
			if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_348) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam4->f_348, false)) && (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_348) || __LIB_0__::func_84(uParam4, 512)))
			{
				if (!__LIB_0__::func_84(uParam4, 1024) && __LIB_13__::func_14(uParam4, 1))
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
				__LIB_13__::func_570(uParam4);
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
				__LIB_13__::func_334(uParam4);
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
					__LIB_6__::func_726(&(uParam4->f_405), 0);
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
				__LIB_13__::func_334(uParam4);
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

void func_352(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	if (!PED::IS_PED_INJURED(iParam0) && WEAPON::IS_WEAPON_VALID(iParam1))
	{
		if (!WEAPON::HAS_PED_GOT_WEAPON(iParam0, iParam1, 0, !bParam5))
		{
			__LIB_4__::func_7(iParam0, iParam1, iParam3, iParam2, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			if (bParam5 == 1)
			{
				WEAPON::_0xE9BD19F8121ADE3E(iParam0, iParam1);
			}
		}
		else
		{
			func_716(joaat("AMMO_ARROW"), iParam3, 1, 0, 0, 752097756, 0, 0, 0, 0);
		}
		if (iParam6 == 1 && !PED::IS_PED_INJURED(iParam4))
		{
			WEAPON::_0x14FF0C2545527F9B(iParam4, iParam1, iParam0);
		}
	}
}

void func_353(int iParam0)
{
	if (!PED::IS_PED_INJURED(*iParam0))
	{
		WEAPON::_GIVE_WEAPON_TO_PED_2(*iParam0, joaat("WEAPON_SHOTGUN_SAWEDOFF_CHARLES"), -1, false, true, 2, false, 0.5f, 1f, 752097756, true, 0f, false);
		WEAPON::_GIVE_WEAPON_TO_PED_2(*iParam0, joaat("WEAPON_THROWN_TOMAHAWK"), -1, false, true, 6, false, 0.5f, 1f, 752097756, true, 0f, false);
	}
}

bool func_356(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
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
			__LIB_18__::func_618(uParam0, iParam5, bParam6);
		}
		else if (__LIB_0__::func_78(uParam0) > 3)
		{
			if (__LIB_0__::func_81(uParam0) == 0)
			{
				if (!__LIB_12__::func_655(uParam0, 524288))
				{
					func_735(uParam0);
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
				__LIB_13__::func_595(uParam0);
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

void func_358(var uParam0)
{
	if (!__LIB_0__::func_27(iLocal_1673, 1))
	{
		func_321(&uLocal_115, 1);
		__LIB_1__::func_683(&iLocal_1673, 1);
	}
	if (!__LIB_0__::func_27(iLocal_1673, 2))
	{
		if (!PED::IS_PED_INJURED(Local_142) && Local_142.f_3 == 11)
		{
			func_321(&uLocal_115, 2);
			__LIB_1__::func_683(&iLocal_1673, 2);
		}
	}
	if (!__LIB_0__::func_27(iLocal_1673, 4))
	{
		if (!PED::IS_PED_INJURED(Local_142) && (Local_142.f_3 == 6 || Local_142.f_3 == 7))
		{
			func_321(&uLocal_115, 3);
			__LIB_1__::func_683(&iLocal_1673, 4);
		}
	}
	if (!__LIB_0__::func_27(iLocal_1673, 8))
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1695) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_1695, false))
		{
			func_321(&uLocal_115, 4);
			__LIB_1__::func_683(&iLocal_1673, 8);
		}
	}
	if (!__LIB_0__::func_27(iLocal_1673, 16))
	{
		if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1695) && ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iLocal_1695, false)) || (iLocal_112 == 1 && iLocal_118 >= 5))
		{
			func_321(&uLocal_115, 5);
			__LIB_1__::func_683(&iLocal_1673, 16);
		}
	}
	if (!__LIB_0__::func_27(iLocal_1673, 2048))
	{
		if (iLocal_116 == 3 && iLocal_118 >= 1)
		{
			func_321(&uLocal_115, 6);
			__LIB_1__::func_683(&iLocal_1673, 2048);
		}
	}
	if (!__LIB_0__::func_27(iLocal_1673, 32))
	{
		if (iLocal_116 == 3 && iLocal_118 >= 4)
		{
			func_321(&uLocal_115, 7);
			__LIB_1__::func_683(&iLocal_1673, 32);
		}
	}
	if (!__LIB_0__::func_27(iLocal_1673, 64))
	{
		if (__LIB_0__::func_27(iLocal_1670, 16384))
		{
			func_321(&uLocal_115, 8);
			__LIB_1__::func_683(&iLocal_1673, 64);
		}
	}
	if (!__LIB_0__::func_27(iLocal_1673, 128))
	{
		if (__LIB_0__::func_27(iLocal_1670, 262144))
		{
			func_321(&uLocal_115, 9);
			__LIB_1__::func_683(&iLocal_1673, 128);
		}
	}
	if (!__LIB_0__::func_27(iLocal_1673, 256))
	{
		if (__LIB_0__::func_27(iLocal_1670, 524288))
		{
			func_321(&uLocal_115, 10);
			__LIB_1__::func_683(&iLocal_1673, 256);
		}
	}
	if (!__LIB_0__::func_27(iLocal_1673, 512))
	{
		if (iLocal_116 == 5)
		{
			func_321(&uLocal_115, 11);
			__LIB_1__::func_683(&iLocal_1673, 512);
		}
	}
	if (!__LIB_0__::func_27(iLocal_1673, 1024))
	{
		if ((__LIB_1__::func_205(Global_35, iLocal_1240[33], 1, 0) || (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1697) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_1697, false))) || (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1701) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_1701, false)))
		{
			func_321(&uLocal_115, 12);
			__LIB_1__::func_683(&iLocal_1673, 1024);
		}
	}
	if (!__LIB_0__::func_27(iLocal_1673, 32768))
	{
		if (iLocal_116 == 0)
		{
			if (!__LIB_13__::func_23(&(uParam0->f_206), "RDTC3_RSC1"))
			{
				AUDIO::_0x2B9C37C01BF25EDB("speak_to_charles");
				__LIB_1__::func_683(&iLocal_1673, 32768);
			}
		}
	}
	if (!__LIB_0__::func_27(iLocal_1673, 65536))
	{
		if (((iLocal_116 == 0 && Local_142.f_3 == 11) || (iLocal_116 == 1 && iLocal_112 == 1)) || (iLocal_116 == 2 && iLocal_112 == 1))
		{
			AUDIO::_0x2B9C37C01BF25EDB("ride_to_beaver_hollow");
			__LIB_1__::func_683(&iLocal_1673, 65536);
		}
	}
	if (!__LIB_0__::func_27(iLocal_1673, 131072))
	{
		if ((iLocal_116 == 1 && iLocal_112 == 0) && Local_142.f_3 == 6)
		{
			AUDIO::_0x2B9C37C01BF25EDB("enter_boat");
			__LIB_1__::func_683(&iLocal_1673, 131072);
		}
	}
	if (!__LIB_0__::func_27(iLocal_1673, 262144))
	{
		if ((iLocal_116 == 1 && iLocal_112 == 0) || (iLocal_116 == 2 && iLocal_112 == 0))
		{
			if (__LIB_3__::func_330(Global_35, iLocal_1161, 0) && __LIB_3__::func_330(Local_142, iLocal_1161, 0))
			{
				AUDIO::_0x2B9C37C01BF25EDB("row_to_beaver_hollow");
				__LIB_1__::func_683(&iLocal_1673, 262144);
			}
		}
	}
	if (!__LIB_0__::func_27(iLocal_1673, 524288))
	{
		if (iLocal_116 == 2 && iLocal_112 == 0)
		{
			if (__LIB_1__::func_205(Global_35, iLocal_1240[5], 1, 0))
			{
				AUDIO::_0x2B9C37C01BF25EDB("approach_bh_boat");
				__LIB_1__::func_683(&iLocal_1673, 524288);
			}
		}
	}
	if (!__LIB_0__::func_27(iLocal_1673, 1048576))
	{
		if (iLocal_116 == 2 && iLocal_112 == 1)
		{
			AUDIO::_0x2B9C37C01BF25EDB("approach_bh_horseback");
			__LIB_1__::func_683(&iLocal_1673, 1048576);
		}
	}
	if (!__LIB_0__::func_27(iLocal_1673, 4194304))
	{
		if (iLocal_116 == 2 && Local_142.f_3 == 12)
		{
			AUDIO::_0x2B9C37C01BF25EDB("walk_to_overlook");
			__LIB_1__::func_683(&iLocal_1673, 4194304);
		}
	}
	if (!__LIB_0__::func_27(iLocal_1673, 2097152))
	{
		if (iLocal_116 == 2 && Local_142.f_3 == 12)
		{
			if (!PED::IS_PED_INJURED(Global_35) && !PED::IS_PED_INJURED(Local_142))
			{
				if (PED::IS_PED_ON_MOUNT(Global_35) || PED::IS_PED_ON_MOUNT(Local_142))
				{
					AUDIO::_0x2B9C37C01BF25EDB("ride_to_overlook");
					__LIB_1__::func_683(&iLocal_1673, 2097152);
				}
			}
		}
	}
	if (!__LIB_0__::func_27(iLocal_1673, 8388608))
	{
		if (iLocal_116 == 3)
		{
			AUDIO::_0x2B9C37C01BF25EDB("stealth_to_overlook");
			__LIB_1__::func_683(&iLocal_1673, 8388608);
		}
	}
	if (!__LIB_0__::func_27(iLocal_1673, 16777216))
	{
		if (iLocal_116 == 4)
		{
			AUDIO::_0x2B9C37C01BF25EDB("enter_cave");
			__LIB_1__::func_683(&iLocal_1673, 16777216);
		}
	}
	if (!__LIB_0__::func_27(iLocal_1673, 33554432))
	{
		if ((iLocal_116 == 4 && __LIB_1__::func_205(Global_35, iLocal_1240[11], 1, 0)) && !__LIB_0__::func_27(iLocal_1670, 262144))
		{
			AUDIO::_0x2B9C37C01BF25EDB("stealth_kill_enemies");
			__LIB_1__::func_683(&iLocal_1673, 33554432);
		}
	}
	if (!__LIB_0__::func_27(iLocal_1673, 67108864))
	{
		if (iLocal_116 == 4 && __LIB_0__::func_27(iLocal_1670, 262144))
		{
			AUDIO::_0x2B9C37C01BF25EDB("shootout");
			__LIB_1__::func_683(&iLocal_1673, 67108864);
		}
	}
	if (!__LIB_0__::func_27(iLocal_1673, 134217728))
	{
		if (iLocal_116 == 4 && __LIB_0__::func_27(iLocal_1670, 524288))
		{
			AUDIO::_0x2B9C37C01BF25EDB("free_hostage");
			__LIB_1__::func_683(&iLocal_1673, 134217728);
		}
	}
	if (!__LIB_0__::func_27(iLocal_1673, 268435456))
	{
		if (iLocal_116 == 5)
		{
			AUDIO::_0x2B9C37C01BF25EDB("ride_to_annesburg");
			__LIB_1__::func_683(&iLocal_1673, 268435456);
		}
	}
}

void func_359(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	switch (iLocal_114)
	{
		case 0:
			break;
		case 1:
			if (iLocal_116 == 2 || iLocal_116 == 3)
			{
				if (__LIB_0__::func_266(Global_35, vLocal_20, 215f, 1, 1))
				{
					iLocal_114 = 2;
				}
			}
			break;
		case 2:
			func_329();
			func_328(1);
			if (((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1692) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_1692, true, false)) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1693)) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_1693, true, false))
			{
				iVar2 = 1;
			}
			if (func_332())
			{
				iVar1 = 1;
			}
			if ((func_333(uParam0, 1, 1, 1, 1, 1, 0) && iVar1 == 1) && iVar2 == 1)
			{
				iLocal_114 = 3;
			}
			break;
		case 3:
			if (func_330(&Local_162, joaat("CS_MEREDITH"), vLocal_96, fLocal_99, joaat("PLAYER"), 0, 0, 0, -2, 0, joaat("WEAPON_UNARMED"), joaat("META_OUTFIT_DEFAULT")))
			{
				__LIB_12__::func_875(uParam0, Local_162, "DTC3_HOSTAGE", 0);
				func_320(&Local_162, 13, 0, 0);
				iLocal_114 = 4;
			}
			break;
		case 4:
			if (func_331(&Local_867, joaat("REL_NO_RELATIONSHIP"), 0, 0, 1, 0, 0, 2086038695, -1168906910, 1310068775, -266874643))
			{
				func_320(&(Local_867[0 /*20*/]), 15, 0, 0);
				func_320(&(Local_867[1 /*20*/]), 19, 0, 0);
				func_320(&(Local_867[2 /*20*/]), 39, 0, 0);
				func_320(&(Local_867[3 /*20*/]), 39, 0, 0);
				func_320(&(Local_867[4 /*20*/]), 39, 0, 0);
				func_334(1);
				iLocal_114 = 5;
			}
			break;
		case 5:
			func_764();
			if (__LIB_0__::func_27(iLocal_1670, 4194304))
			{
				if (!__LIB_0__::func_27(iLocal_1670, 8388608))
				{
					func_765();
					__LIB_1__::func_683(&iLocal_1670, 8388608);
				}
				else if (!__LIB_0__::func_27(iLocal_1670, 16777216))
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1692) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_1692, false))
					{
						FIRE::ADD_EXPLOSION(vLocal_108, 25, 7.5f, false, true, 1f);
						__LIB_1__::func_683(&iLocal_1670, 16777216);
					}
				}
			}
			func_766(Local_162, 0f);
			iVar0 = 0;
			while (iVar0 < Local_442)
			{
				func_767(uParam0, &(Local_442[iVar0 /*20*/]), iVar0);
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < Local_503)
			{
				func_768(uParam0, &(Local_503[iVar0 /*20*/]), iVar0, &iLocal_1692, &uLocal_1699, &uLocal_1700);
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < Local_664)
			{
				func_769(uParam0, &(Local_664[iVar0 /*20*/]), iVar0, &uLocal_1698);
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < Local_745)
			{
				func_770(uParam0, &(Local_745[iVar0 /*20*/]), iVar0);
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < Local_846)
			{
				func_771(uParam0, &(Local_846[iVar0 /*20*/]), iVar0);
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < Local_867)
			{
				func_772(uParam0, &(Local_867[iVar0 /*20*/]), iVar0, &uLocal_1698);
				iVar0++;
			}
			if (!__LIB_0__::func_27(iLocal_1674, 4))
			{
				if (func_773(&Local_442))
				{
					__LIB_1__::func_683(&iLocal_1674, 4);
				}
			}
			if (!__LIB_0__::func_27(iLocal_1674, 32))
			{
				if (func_773(&Local_503) || func_774())
				{
					__LIB_1__::func_683(&iLocal_1674, 32);
				}
			}
			if (!__LIB_0__::func_27(iLocal_1674, 256))
			{
				if (func_773(&Local_664))
				{
					__LIB_1__::func_683(&iLocal_1674, 256);
				}
			}
			if (!__LIB_0__::func_27(iLocal_1674, 2048))
			{
				if (func_773(&Local_745))
				{
					__LIB_1__::func_683(&iLocal_1674, 2048);
				}
			}
			if (!__LIB_0__::func_27(iLocal_1674, 16384))
			{
				if (func_773(&Local_846))
				{
					__LIB_1__::func_683(&iLocal_1674, 16384);
				}
			}
			func_775(uParam0);
			break;
	}
}

void func_360(var uParam0)
{
	int iVar0;
	switch (iLocal_117)
	{
		case 0:
			break;
		case 1:
			if (__LIB_0__::func_27(iLocal_1670, 2048))
			{
				iLocal_117 = 2;
			}
			break;
		case 2:
			if (func_325(uParam0))
			{
				iVar0 = 0;
				while (iVar0 < Local_968)
				{
					if (!PED::IS_PED_INJURED(Local_968[iVar0 /*20*/]))
					{
						PED::SET_PED_COMBAT_RANGE(Local_968[iVar0 /*20*/], 2);
						PED::SET_PED_COMBAT_ABILITY(Local_968[iVar0 /*20*/], 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_968[iVar0 /*20*/], 17, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_968[iVar0 /*20*/], 5, false);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_968[iVar0 /*20*/], 4, true);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_968[iVar0 /*20*/], 1024, true);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_968[iVar0 /*20*/], 32768, false);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_968[iVar0 /*20*/], 2097152, false);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_968[iVar0 /*20*/], 65536, true);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_968[iVar0 /*20*/], 2, false);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_968[iVar0 /*20*/], 4194304, true);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_968[iVar0 /*20*/], 1048576, true);
					}
					iVar0++;
				}
				iLocal_117 = 3;
			}
			break;
		case 3:
			if (iLocal_112 == 0)
			{
				if (func_330(&(uLocal_1152[0]), joaat("A_C_HORSE_MURFREEBROOD_MANGE_01"), vLocal_36, fLocal_39, joaat("REL_NO_RELATIONSHIP"), 0, 0, 0, -2, 0, joaat("WEAPON_UNARMED"), joaat("META_OUTFIT_DEFAULT")))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_1152[0], true);
					TASK::TASK_START_SCENARIO_AT_POSITION(uLocal_1152[0], joaat("WORLD_ANIMAL_HORSE_GRAZING"), vLocal_36, fLocal_39, 0, false, true, 0, -1f, false);
					AITRANSPORT::_0xBA8818212633500A(uLocal_1152[0], 3, 1);
					PED::_0xFD6943B6DF77E449(uLocal_1152[0], false);
					iLocal_117 = 4;
				}
			}
			else
			{
				iLocal_117 = 4;
			}
			break;
		case 4:
			if (iLocal_112 == 0)
			{
				if (func_330(&(uLocal_1152[1]), joaat("A_C_HORSE_MURFREEBROOD_MANGE_03"), vLocal_40, fLocal_43, joaat("REL_NO_RELATIONSHIP"), 0, 0, 0, -2, 0, joaat("WEAPON_UNARMED"), joaat("META_OUTFIT_DEFAULT")))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_1152[1], true);
					TASK::TASK_START_SCENARIO_AT_POSITION(uLocal_1152[1], joaat("WORLD_ANIMAL_HORSE_GRAZING"), vLocal_40, fLocal_43, 0, false, true, 0, -1f, false);
					AITRANSPORT::_0xBA8818212633500A(uLocal_1152[1], 3, 1);
					PED::_0xFD6943B6DF77E449(uLocal_1152[1], false);
					iLocal_117 = 5;
				}
			}
			else
			{
				iLocal_117 = 5;
			}
			break;
		case 5:
			iVar0 = 0;
			while (iVar0 < Local_968)
			{
				func_776(uParam0, &(Local_968[iVar0 /*20*/]), iVar0);
				iVar0++;
			}
			break;
	}
}

bool func_361(var uParam0, int iParam1)
{
	Vector3 vVar0;
	if (!__LIB_0__::func_27(iLocal_1670, 1073741824 /* Float: 2f */))
	{
		func_777(0);
		__LIB_1__::func_683(&iLocal_1670, 1073741824 /* Float: 2f */);
	}
	func_778(uParam0, &Local_122);
	func_779(uParam0, iLocal_116, &Local_142, &iLocal_1691, iLocal_1151, iLocal_1161, &iLocal_1696, &iLocal_1695);
	if (iLocal_112 == 0)
	{
		if (!__LIB_0__::func_27(iLocal_1670, 128))
		{
			if (!__LIB_3__::func_330(Global_35, iLocal_1161, 0))
			{
				if ((PED::IS_PED_ON_MOUNT(Global_35) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, true)) || ENTITY::DOES_ENTITY_EXIST(PED::_GET_TRANSPORT_PED_IS_SEATED_ON(Global_35)))
				{
					__LIB_9__::func_204(Global_35, vLocal_14, &uLocal_1185, 40f, 18f, 10f, 8f, 1f, 0, 0, 1, 1, 1);
				}
			}
		}
	}
	if (CAM::_0x927B810E43E99932(&Local_1518))
	{
		CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
		PED::SET_PED_MIN_MOVE_BLEND_RATIO(iLocal_1150, 1.25f);
		PED::SET_PED_MIN_MOVE_BLEND_RATIO(Global_35, 1.25f);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
	}
	func_781(uParam0);
	switch (*iParam1)
	{
		case 0:
			if (__LIB_0__::func_27(iLocal_1672, 2))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1161))
				{
					if (__LIB_0__::func_266(Global_35, vLocal_26, 125f, 1, 1) || __LIB_0__::func_266(Local_142, vLocal_26, 125f, 1, 1))
					{
						if (func_324(&iLocal_1161, joaat("CANOE"), vLocal_26, vLocal_29, 0, 1))
						{
						}
					}
				}
				if ((!PED::IS_PED_INJURED(Global_35) && !PED::IS_PED_INJURED(Local_142)) && ENTITY::DOES_ENTITY_EXIST(iLocal_1161))
				{
					if (__LIB_1__::func_205(Global_35, iLocal_1240[2], 1, 0) || __LIB_1__::func_205(Local_142, iLocal_1240[2], 1, 0))
					{
						PED::_0x2B4CE170DE09F346(Local_142, joaat("RDTC3_RIDE1"));
						AUDIO::_0x660A8F876DF1D4F8(21);
						AUDIO::_0x660A8F876DF1D4F8(19);
						AUDIO::_0x660A8F876DF1D4F8(25);
						__LIB_1__::func_681(&(Local_142.f_9), 1073741824 /* Float: 2f */);
						*iParam1++;
					}
				}
			}
			else if (__LIB_0__::func_27(iLocal_1672, 4))
			{
				if (!__LIB_0__::func_27(iLocal_1670, 1024))
				{
					if (iLocal_112 == 1)
					{
						CAM::_0x6A4D224FC7643941(&Local_1518);
						CAM::_0x1B3C2D961F5FC0E1("script@story@dutch3@horse_ride");
						TASK::REQUEST_WAYPOINT_RECORDING("rdtc3_horse_ride_cme");
						STREAMING::PREFETCH_SRL("script@cme@dutch3_cme_01_rideaway");
						STREAMING::_0xEF1A8A484118735E();
						STREAMING::_0xAE00387E53B1E9FC();
						__LIB_1__::func_683(&iLocal_1670, 1024);
					}
				}
				if (((!PED::IS_PED_INJURED(Global_35) && !PED::IS_PED_INJURED(iLocal_1150)) && !PED::IS_PED_INJURED(iLocal_1151)) && !PED::IS_PED_INJURED(Local_142))
				{
					if (__LIB_0__::func_394(Local_142, iLocal_1151, 1))
					{
						if (CAM::_0xDD0B7C5AE58F721D(&Local_1518))
						{
							if (!CAM::_0x927B810E43E99932(&Local_1518))
							{
								if ((TASK::GET_IS_WAYPOINT_RECORDING_LOADED("rdtc3_horse_ride_cme") && TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_142, "rdtc3_horse_ride_cme")) && TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(Local_142) == 0)
								{
									if (__LIB_10__::func_397(Local_142, "rdtc3_horse_ride_cme", &vVar0) >= 45)
									{
										CAM::_0xB8B207C34285E978(&Local_1518);
									}
								}
							}
						}
						if ((TASK::GET_IS_WAYPOINT_RECORDING_LOADED("rdtc3_horse_ride_cme") && TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_142, "rdtc3_horse_ride_cme")) && TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(Local_142) == 0)
						{
							if (__LIB_10__::func_397(Local_142, "rdtc3_horse_ride_cme", &vVar0) > 54)
							{
								*iParam1++;
							}
						}
					}
				}
			}
			break;
		case 1:
			func_438(&Local_1089, 0, 1);
			__LIB_9__::func_123(&uLocal_1156, 0);
			__LIB_0__::func_490(&Local_1130, 0);
			func_442(&iLocal_1162, 0);
			__LIB_12__::func_997(uParam0, func_61(1), func_61(2), 1, 2, 0);
			return true;
	}
	return false;
}

void func_362()
{
	iLocal_118 = 0;
	__LIB_1__::func_561(&uLocal_1185);
	__LIB_1__::func_561(&uLocal_1173);
	__LIB_1__::func_561(&uLocal_1176);
	__LIB_1__::func_681(&iLocal_1670, 1073741824 /* Float: 2f */);
	__LIB_1__::func_681(&iLocal_1670, 33554432);
	__LIB_1__::func_681(&iLocal_1670, 67108864);
}

bool func_363(var uParam0, int iParam1)
{
	Vector3 vVar0;
	int iVar3;
	var uVar4;
	int iVar5;
	var uVar6;
	if (!__LIB_0__::func_27(iLocal_1670, 1073741824 /* Float: 2f */))
	{
		func_777(1);
		__LIB_1__::func_683(&iLocal_1670, 1073741824 /* Float: 2f */);
	}
	func_779(uParam0, iLocal_116, &Local_142, &iLocal_1691, iLocal_1151, iLocal_1161, &iLocal_1696, &iLocal_1695);
	if (!__LIB_0__::func_27(iLocal_1670, 128))
	{
		if (!__LIB_3__::func_330(Global_35, iLocal_1161, 0))
		{
			if ((PED::IS_PED_ON_MOUNT(Global_35) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, true)) || ENTITY::DOES_ENTITY_EXIST(PED::_GET_TRANSPORT_PED_IS_SEATED_ON(Global_35)))
			{
				__LIB_9__::func_204(Global_35, vLocal_14, &uLocal_1185, 40f, 18f, 10f, 8f, 1f, 0, 0, 1, 1, 1);
			}
		}
	}
	if (__LIB_0__::func_27(iLocal_1670, 2048))
	{
		HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CINEMATIC_CAM"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CINEMATIC_CAM_CHANGE_SHOT"), false);
	}
	func_783(uParam0);
	switch (iLocal_112)
	{
		case 0:
			if (CAM::_0x927B810E43E99932(&Local_1518))
			{
				CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			}
			switch (*iParam1)
			{
				case 0:
					AUDIO::_0x380A2E353AD30917(Local_142, 10f, 9f);
					AUDIO::_0x0D7FD6A55FD63AEF(22, 3, 1);
					__LIB_1__::func_561(&uLocal_1179);
					TASK::REQUEST_WAYPOINT_RECORDING("rdtc3_charles_lakay_to_boat");
					TASK::REQUEST_WAYPOINT_RECORDING("rdtc3_charles_patrol_sneak");
					TASK::REQUEST_WAYPOINT_RECORDING("rdtc3_charles_butcher_creek_to_beaver_hollow");
					TASK::REQUEST_WAYPOINT_RECORDING("rdtc3_canoe_ride_cme");
					VEHICLE::REQUEST_VEHICLE_RECORDING(1, "rdtc3_canoe_recording");
					CAM::_0x6A4D224FC7643941(&Local_1518);
					CAM::_0x1B3C2D961F5FC0E1("script@story@dutch3@mission_jump_cameras");
					VEHICLE::_0xCF9DA72002FC16BF(Global_35, iLocal_1161, 35);
					VEHICLE::_0xCF9DA72002FC16BF(Local_142, iLocal_1161, 35);
					if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1695))
					{
						iLocal_1695 = ANIMSCENE::_CREATE_ANIM_SCENE("script@rcm@dtc3@ig@ig4_canoe_cme@ig4_canoe_cme", 0, "pl_canoe_cme", false, true);
						ANIMSCENE::LOAD_ANIM_SCENE(iLocal_1695);
					}
					if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1696))
					{
						iLocal_1696 = ANIMSCENE::_CREATE_ANIM_SCENE("script@rcm@dtc3@ig@ig4_canoe_cme@ig4_canoe_cme_upon_arrival", 0, "pl_upon_arrival", false, true);
						ANIMSCENE::LOAD_ANIM_SCENE(iLocal_1696);
					}
					if (!__LIB_0__::func_27(iLocal_1670, 1024))
					{
						STREAMING::PREFETCH_SRL("script@cme@dutch3_cme_dutch3_1_shot1");
						STREAMING::_0xEF1A8A484118735E();
						STREAMING::_0xAE00387E53B1E9FC();
						__LIB_1__::func_683(&iLocal_1670, 1024);
					}
					*iParam1++;
					break;
				case 1:
					if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_1240[34], false, 0) || __LIB_1__::func_205(Global_35, iLocal_1240[3], 1, 0))
					{
						VEHICLE::_0x6835AFEA10E186F4(iLocal_1161, 2);
						*iParam1++;
					}
					break;
				case 2:
					if (((!PED::IS_PED_INJURED(Global_35) && !PED::IS_PED_INJURED(Local_142)) && ENTITY::DOES_ENTITY_EXIST(iLocal_1161)) && !ENTITY::IS_ENTITY_DEAD(iLocal_1161))
					{
						if (__LIB_14__::func_11(Global_35, iLocal_1161) && __LIB_14__::func_11(Local_142, iLocal_1161))
						{
							if (!__LIB_0__::func_899(&uLocal_1179))
							{
								if (CAM::_0xDD0B7C5AE58F721D(&Local_1518))
								{
									if (!CAM::_0x927B810E43E99932(&Local_1518))
									{
										if (__LIB_1__::func_205(Global_35, iLocal_1240[3], 1, 0))
										{
											CAM::_0xB8B207C34285E978(&Local_1518);
										}
									}
								}
							}
							if ((CAM::_0xA2B1C7EF759A63CE() == 1f && CAM::_0x927B810E43E99932(&Local_1518)) || __LIB_10__::func_397(Global_35, "rdtc3_canoe_ride_cme", &vVar0) >= 12)
							{
								TASK::REMOVE_WAYPOINT_RECORDING("rdtc3_charles_lakay_to_boat");
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
								ENTITY::SET_ENTITY_LOD_DIST(iLocal_1161, 150);
								ENTITY::SET_ENTITY_LOD_DIST(Global_35, 150);
								ENTITY::SET_ENTITY_LOD_DIST(Local_142, 150);
								PED::SET_PED_LOD_MULTIPLIER(Global_35, 5f);
								VEHICLE::SET_VEHICLE_LOD_MULTIPLIER(iLocal_1161, 5f);
								PED::SET_PED_LOD_MULTIPLIER(Local_142, 5f);
								func_327(2478.141f, 44.2938f, 40.9713f, 279.0848f, "rdtc3_canoe_ride_cme", 2.5f, 1072064102 /* Float: 1.8f */);
								AUDIO::_0x5E3CCF03995388B5(893844854, 2500.201f, 35.41962f, 42.40432f);
								AUDIO::PLAY_SOUND_FRONTEND("river_med", "rdch3_CME_SoundSet", true, 0);
								CAM::_0xBC016635D6A73B31("script@story@dutch3@mission_jump_cameras", "dutch3_1_shot1", 5);
								__LIB_1__::func_681(&iLocal_1670, 1024);
								CAM::_0x702B75DC9D3EDE56(true);
								__LIB_2__::func_259(&uLocal_1179);
								bLocal_1163 = false;
								iLocal_117 = 1;
								__LIB_1__::func_683(&iLocal_1670, 2048);
								__LIB_1__::func_683(&iLocal_1670, 4096);
								__LIB_8__::func_916(77);
								VEHICLE::_0x6835AFEA10E186F4(iLocal_1161, 1);
								*iParam1++;
							}
						}
					}
					break;
				case 3:
					CAM::_0x702B75DC9D3EDE56(true);
					if (!__LIB_0__::func_27(iLocal_1670, 1024))
					{
						STREAMING::END_SRL();
						STREAMING::PREFETCH_SRL("script@cme@dutch3_cme_dutch3_1_shot2");
						STREAMING::_0xEF1A8A484118735E();
						STREAMING::_0xAE00387E53B1E9FC();
						__LIB_1__::func_683(&iLocal_1670, 1024);
					}
					if (__LIB_0__::func_899(&uLocal_1179))
					{
						bLocal_1163 = STREAMING::IS_SRL_LOADED();
						iLocal_1166 = CAM::_0x465F04F68AD38197("script@story@dutch3@mission_jump_cameras", "dutch3_1_shot1", 5);
						iLocal_1167 = CAM::_0xEA113BF9B0C0C5D7("script@story@dutch3@mission_jump_cameras", "dutch3_1_shot1", 5);
						iLocal_1168 = (iLocal_1167 - __LIB_1__::func_592(&uLocal_1179));
						if (AUDIO::_0xFFE9C53DEEA3DB0B(iLocal_1168, -244282411, 2417.86f, 177.4606f, 42.52919f, bLocal_1163, iLocal_1166))
						{
							if (((!PED::IS_PED_INJURED(Global_35) && !PED::IS_PED_INJURED(Local_142)) && ENTITY::DOES_ENTITY_EXIST(iLocal_1161)) && !ENTITY::IS_ENTITY_DEAD(iLocal_1161))
							{
								func_327(2439.169f, 173.4633f, 40.3881f, 86.9845f, "rdtc3_canoe_ride_cme", 2.5f, 1072064102 /* Float: 1.8f */);
								CAM::_0xA54D643D0773EB65("script@story@dutch3@mission_jump_cameras", "dutch3_1_shot1", 5);
								CAM::_0xBC016635D6A73B31("script@story@dutch3@mission_jump_cameras", "dutch3_1_shot2", 5);
								__LIB_1__::func_681(&iLocal_1670, 1024);
								__LIB_2__::func_259(&uLocal_1179);
								bLocal_1163 = false;
								*iParam1++;
							}
						}
					}
					break;
				case 4:
					CAM::_0x702B75DC9D3EDE56(true);
					if (!__LIB_0__::func_27(iLocal_1670, 1024))
					{
						STREAMING::END_SRL();
						STREAMING::PREFETCH_SRL("script@cme@dutch3_cme_dutch3_canoe");
						STREAMING::_0xEF1A8A484118735E();
						STREAMING::_0xAE00387E53B1E9FC();
						__LIB_1__::func_683(&iLocal_1670, 1024);
					}
					if (__LIB_0__::func_899(&uLocal_1179))
					{
						bLocal_1163 = STREAMING::IS_SRL_LOADED();
						iLocal_1166 = CAM::_0x465F04F68AD38197("script@story@dutch3@mission_jump_cameras", "dutch3_1_shot2", 5);
						iLocal_1167 = CAM::_0xEA113BF9B0C0C5D7("script@story@dutch3@mission_jump_cameras", "dutch3_1_shot2", 5);
						iLocal_1168 = (iLocal_1167 - __LIB_1__::func_592(&uLocal_1179));
						if (AUDIO::_0xFFE9C53DEEA3DB0B(iLocal_1168, 2120352911, 2240.232f, 326.5939f, 44.12381f, bLocal_1163, iLocal_1166))
						{
							if (((!PED::IS_PED_INJURED(Global_35) && !PED::IS_PED_INJURED(Local_142)) && ENTITY::DOES_ENTITY_EXIST(iLocal_1161)) && !ENTITY::IS_ENTITY_DEAD(iLocal_1161))
							{
								if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1696) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_1696, true, false))
								{
									ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1696, "canoe", iLocal_1161, 0);
									ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1696, "Arthur", Global_35, 0);
									ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1696, "CharlesSmith", Local_142, 0);
									VEHICLE::_GET_ROWING_OARS(iLocal_1161, &iVar3, &uVar4);
									if (ENTITY::DOES_ENTITY_EXIST(iVar3) && !ENTITY::IS_ENTITY_DEAD(iVar3))
									{
									}
									ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(iLocal_1696, iLocal_1161, 0);
									ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iLocal_1696, 0f, 0f, 0f, 0f, 0f, 0f, 2);
									ANIMSCENE::START_ANIM_SCENE(iLocal_1696);
								}
								ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_1161, 2241.443f, 324.9401f, 42.6976f, 348.4761f, true, false, true);
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_1161, 0f);
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_1161, 1, "rdtc3_canoe_recording", false);
								VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_1161, 8850f);
								CAM::_0xA54D643D0773EB65("script@story@dutch3@mission_jump_cameras", "dutch3_1_shot2", 5);
								CAM::_0xBC016635D6A73B31("script@story@dutch3@mission_jump_cameras", "dutch3_1_shot3", 5);
								STREAMING::BEGIN_SRL();
								__LIB_2__::func_259(&uLocal_1194);
								AUDIO::_STOP_SOUND_WITH_NAME("river_med", "rdch3_CME_SoundSet");
								AUDIO::PLAY_SOUND_FRONTEND("river_fast", "rdch3_CME_SoundSet", true, 0);
								__LIB_1__::func_681(&iLocal_1670, 1024);
								__LIB_2__::func_259(&uLocal_1179);
								bLocal_1163 = false;
								*iParam1++;
							}
						}
					}
					break;
				case 5:
					CAM::_0x702B75DC9D3EDE56(true);
					if (!__LIB_0__::func_27(iLocal_1670, 1024))
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1696) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_1696, false))
						{
							PED::_0xE0B61ED8BB37712F(Global_35);
							PED::_0xE0B61ED8BB37712F(Local_142);
							WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
							__LIB_1__::func_683(&iLocal_1670, 1024);
						}
					}
					if (__LIB_0__::func_899(&uLocal_1179))
					{
						iLocal_1166 = (CAM::_0x465F04F68AD38197("script@story@dutch3@mission_jump_cameras", "dutch3_1_shot3", 5) - 100);
						iLocal_1167 = (CAM::_0xEA113BF9B0C0C5D7("script@story@dutch3@mission_jump_cameras", "dutch3_1_shot3", 5) - 100);
						iLocal_1168 = (iLocal_1167 - __LIB_1__::func_592(&uLocal_1179));
						if (AUDIO::_0xFFE9C53DEEA3DB0B(iLocal_1168, 0, 2441.421f, 350.3755f, 61.6373f, true, iLocal_1166))
						{
							if (((!PED::IS_PED_INJURED(Global_35) && !PED::IS_PED_INJURED(Local_142)) && ENTITY::DOES_ENTITY_EXIST(iLocal_1161)) && !ENTITY::IS_ENTITY_DEAD(iLocal_1161))
							{
								if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1695) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_1695, true, false))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_1161);
									if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1696))
									{
										ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_1696);
									}
									ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1695, "canoe", iLocal_1161, 0);
									ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1695, "Arthur", Global_35, 0);
									ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1695, "CharlesSmith", Local_142, 0);
									VEHICLE::_GET_ROWING_OARS(iLocal_1161, &iVar5, &uVar6);
									if (ENTITY::DOES_ENTITY_EXIST(iVar5) && !ENTITY::IS_ENTITY_DEAD(iVar5))
									{
									}
									ANIMSCENE::START_ANIM_SCENE(iLocal_1695);
									AUDIO::_0xA2B851605748AD0E();
									AUDIO::_STOP_SOUND_WITH_NAME("river_fast", "rdch3_CME_SoundSet");
									__LIB_1__::func_681(&iLocal_1670, 1024);
									__LIB_2__::func_259(&uLocal_1179);
									bLocal_1163 = false;
									*iParam1++;
								}
							}
						}
					}
					break;
				case 6:
					if (!__LIB_0__::func_27(iLocal_1670, 1024))
					{
						STREAMING::END_SRL();
						STREAMING::PREFETCH_SRL("script@cme@dutch3_cme_dutch3_1_shot5");
						STREAMING::_0xEF1A8A484118735E();
						STREAMING::_0xAE00387E53B1E9FC();
						__LIB_1__::func_683(&iLocal_1670, 1024);
					}
					bLocal_1163 = STREAMING::IS_SRL_LOADED();
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1695))
					{
						switch (iLocal_120)
						{
							case 0:
								if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_1695, "s_Shot_02", 1))
								{
									MISC::_SET_WEATHER_TYPE_TRANSITION(joaat("DRIZZLE"), joaat("MISTY"), 0.25f, 1);
									CLOCK::SET_CLOCK_TIME(19, 55, 0);
									iLocal_120++;
								}
								break;
							case 1:
								if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_1695, "s_Shot_01", 1))
								{
									MISC::_SET_WEATHER_TYPE_TRANSITION(joaat("DRIZZLE"), joaat("MISTY"), 0.3f, 1);
									CLOCK::SET_CLOCK_TIME(20, 5, 0);
									iLocal_120++;
								}
								break;
							case 2:
								break;
						}
						if (ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_1695, "Canoe"))
						{
							if (((!PED::IS_PED_INJURED(Global_35) && !PED::IS_PED_INJURED(Local_142)) && ENTITY::DOES_ENTITY_EXIST(iLocal_1161)) && !ENTITY::IS_ENTITY_DEAD(iLocal_1161))
							{
								CAM::_0xBC016635D6A73B31("script@story@dutch3@mission_jump_cameras", "dutch3_1_shot5", 5);
								__LIB_1__::func_681(&iLocal_1670, 1024);
								__LIB_2__::func_259(&uLocal_1179);
								AUDIO::PLAY_SOUND_FRONTEND("river_fast", "rdch3_CME_SoundSet", true, 0);
								AUDIO::_0xCFAD2C8CD1054523(420487249, 2569.208f, 443.784f, 68.77658f);
								MISC::_SET_WEATHER_TYPE(joaat("MISTY"), true, true, false, 0f, false);
								bLocal_1163 = false;
								*iParam1++;
							}
						}
					}
					break;
				case 7:
					CLOCK::SET_CLOCK_TIME(22, 0, 0);
					CAM::_0x702B75DC9D3EDE56(true);
					if (!__LIB_0__::func_27(iLocal_1670, 1024))
					{
						STREAMING::END_SRL();
						STREAMING::PREFETCH_SRL("script@cme@dutch3_cme_dutch3_1_shot6");
						STREAMING::_0xEF1A8A484118735E();
						STREAMING::_0xAE00387E53B1E9FC();
						func_327(2545.062f, 407.678f, 60.6366f, 314.907f, "rdtc3_canoe_ride_cme", 2.5f, 2.2f);
						__LIB_1__::func_683(&iLocal_1670, 1024);
					}
					if (__LIB_0__::func_899(&uLocal_1179))
					{
						bLocal_1163 = STREAMING::IS_SRL_LOADED();
						iLocal_1166 = CAM::_0x465F04F68AD38197("script@story@dutch3@mission_jump_cameras", "dutch3_1_shot5", 5);
						iLocal_1167 = CAM::_0xEA113BF9B0C0C5D7("script@story@dutch3@mission_jump_cameras", "dutch3_1_shot5", 5);
						iLocal_1168 = (iLocal_1167 - __LIB_1__::func_592(&uLocal_1179));
						if (AUDIO::_0xFFE9C53DEEA3DB0B(iLocal_1168, 0, 2419.748f, 719.123f, 67.59652f, bLocal_1163, iLocal_1166))
						{
							if (((!PED::IS_PED_INJURED(Global_35) && !PED::IS_PED_INJURED(Local_142)) && ENTITY::DOES_ENTITY_EXIST(iLocal_1161)) && !ENTITY::IS_ENTITY_DEAD(iLocal_1161))
							{
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
								func_327(vLocal_32, fLocal_35, "rdtc3_canoe_ride_cme", 2.5f, 2f);
								__LIB_1__::func_683(&iLocal_1670, 256);
								__LIB_2__::func_259(&uLocal_1182);
								CAM::_0xA54D643D0773EB65("script@story@dutch3@mission_jump_cameras", "dutch3_1_shot5", 5);
								CAM::_0x702B75DC9D3EDE56(false);
								if (CAM::_0x927B810E43E99932(&Local_1518))
								{
									CAM::_0x0A5A4F1979ABB40E(&Local_1518);
									CAM::_0x798BE43C9393632B(&Local_1518);
								}
								__LIB_1__::func_681(&iLocal_1670, 1024);
								__LIB_2__::func_259(&uLocal_1179);
								STREAMING::END_SRL();
								AUDIO::_0x43037ABFE214A851();
								if (__LIB_0__::func_899(&uLocal_1194))
								{
									__LIB_1__::func_561(&uLocal_1194);
								}
								AUDIO::_STOP_SOUND_WITH_NAME("river_fast", "rdch3_CME_SoundSet");
								bLocal_1163 = false;
								__LIB_1__::func_681(&iLocal_1670, 2048);
								VEHICLE::_0x6835AFEA10E186F4(iLocal_1161, 2);
								AUDIO::_0x380A2E353AD30917(Local_142, 0f, 0f);
								AUDIO::_0x660A8F876DF1D4F8(22);
								*iParam1++;
							}
						}
					}
					break;
				case 8:
					__LIB_12__::func_997(uParam0, func_61(2), func_61(3), 2, 3, 0);
					return true;
			}
			break;
		case 1:
			if (CAM::_0x927B810E43E99932(&Local_1518))
			{
				CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			}
			if (iLocal_1229 == 0)
			{
				iLocal_1229 = ENTITY::_0x6F3068258A499E52(joaat("P_DIS_ROPEBRIDGE2"), 2488.98f, 813.6221f, 72.5777f, 9);
			}
			if (ENTITY::_0x1FF441D7954F8709(iLocal_1229))
			{
			}
			switch (*iParam1)
			{
				case 0:
					if (((!PED::IS_PED_INJURED(Global_35) && !PED::IS_PED_INJURED(iLocal_1150)) && !PED::IS_PED_INJURED(iLocal_1151)) && !PED::IS_PED_INJURED(Local_142))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
						ENTITY::SET_ENTITY_LOD_DIST(Global_35, 150);
						ENTITY::SET_ENTITY_LOD_DIST(iLocal_1150, 150);
						ENTITY::SET_ENTITY_LOD_DIST(iLocal_1151, 150);
						ENTITY::SET_ENTITY_LOD_DIST(Local_142, 150);
						PED::SET_PED_LOD_MULTIPLIER(Global_35, 5f);
						PED::SET_PED_LOD_MULTIPLIER(iLocal_1150, 5f);
						PED::SET_PED_LOD_MULTIPLIER(iLocal_1151, 5f);
						PED::SET_PED_LOD_MULTIPLIER(Local_142, 5f);
						func_320(&Local_142, 0, 0, 0);
						func_679(Local_142, iLocal_1151, 2326.508f, -56.3682f, 42.8297f, 48.2228f, "rdtc3_horse_ride_cme", 0f, 0f, 1.501f, joaat("MOTIONSTATE_RUN"), 1, 0, 0);
						func_679(Global_35, iLocal_1150, 2333.14f, -60.9431f, 42.4515f, 71.9852f, "rdtc3_horse_ride_cme", 0f, 0f, 1.501f, joaat("MOTIONSTATE_RUN"), 1, 0, 0);
						AUDIO::_0x5E3CCF03995388B5(-1138899387, 2285.889f, -67.40797f, 47.25887f);
						CAM::_0xBC016635D6A73B31("script@story@dutch3@horse_ride", "01_rideaway", 5);
						__LIB_1__::func_681(&iLocal_1670, 1024);
						CAM::_0x702B75DC9D3EDE56(true);
						__LIB_2__::func_259(&uLocal_1179);
						bLocal_1163 = false;
						__LIB_1__::func_683(&iLocal_1670, 2048);
						__LIB_1__::func_683(&iLocal_1670, 4096);
						*iParam1 = 2;
					}
					break;
				case 1:
					CAM::_0x702B75DC9D3EDE56(true);
					if (!__LIB_0__::func_27(iLocal_1670, 1024))
					{
						STREAMING::END_SRL();
						STREAMING::PREFETCH_SRL("script@cme@dutch3_cme_03_riverrapids");
						STREAMING::_0xEF1A8A484118735E();
						STREAMING::_0xAE00387E53B1E9FC();
						if (CAM::IS_SCREEN_FADED_OUT())
						{
						}
						__LIB_1__::func_683(&iLocal_1670, 1024);
					}
					if (__LIB_0__::func_899(&uLocal_1179))
					{
						bLocal_1163 = STREAMING::IS_SRL_LOADED();
						iLocal_1166 = CAM::_0x465F04F68AD38197("script@story@dutch3@horse_ride", "01_rideaway", 5);
						iLocal_1167 = CAM::_0xEA113BF9B0C0C5D7("script@story@dutch3@horse_ride", "01_rideaway", 5);
						iLocal_1168 = (iLocal_1167 - __LIB_1__::func_592(&uLocal_1179));
						if (AUDIO::_0xFFE9C53DEEA3DB0B(iLocal_1168, -1405183219, 2505.756f, 109.1378f, 43.93625f, bLocal_1163, iLocal_1166))
						{
							if (((!PED::IS_PED_INJURED(Global_35) && !PED::IS_PED_INJURED(iLocal_1150)) && !PED::IS_PED_INJURED(iLocal_1151)) && !PED::IS_PED_INJURED(Local_142))
							{
								func_679(Local_142, iLocal_1151, 2505.193f, 96.8399f, 42.241f, 346.536f, "rdtc3_horse_ride_cme", 0f, 0f, 1f, joaat("MOTIONSTATE_WALK"), 1, 0, 0);
								func_679(Global_35, iLocal_1150, 2503.854f, 93.1011f, 42.2812f, 346.6865f, "rdtc3_horse_ride_cme", -0.5f, 0f, 1f, joaat("MOTIONSTATE_WALK"), 1, 0, 0);
								CAM::_0xA54D643D0773EB65("script@story@dutch3@horse_ride", "01_rideaway", 5);
								CAM::_0xBC016635D6A73B31("script@story@dutch3@horse_ride", "03_riverrapids", 5);
								__LIB_1__::func_681(&iLocal_1670, 1024);
								__LIB_2__::func_259(&uLocal_1179);
								bLocal_1163 = false;
								*iParam1++;
							}
						}
					}
					break;
				case 2:
					CAM::_0x702B75DC9D3EDE56(true);
					if (!__LIB_0__::func_27(iLocal_1670, 1024))
					{
						STREAMING::END_SRL();
						STREAMING::PREFETCH_SRL("script@cme@dutch3_cme_02_rail");
						STREAMING::_0xEF1A8A484118735E();
						STREAMING::_0xAE00387E53B1E9FC();
						__LIB_1__::func_683(&iLocal_1670, 1024);
					}
					if (__LIB_0__::func_899(&uLocal_1179))
					{
						bLocal_1163 = STREAMING::IS_SRL_LOADED();
						iLocal_1166 = CAM::_0x465F04F68AD38197("script@story@dutch3@horse_ride", "03_riverrapids", 5);
						iLocal_1167 = CAM::_0xEA113BF9B0C0C5D7("script@story@dutch3@horse_ride", "03_riverrapids", 5);
						iLocal_1168 = (iLocal_1167 - __LIB_1__::func_592(&uLocal_1179));
						if (AUDIO::_0xFFE9C53DEEA3DB0B(iLocal_1168, 710310887, 2433.871f, 506.8251f, 81.93099f, bLocal_1163, iLocal_1166))
						{
							if (((!PED::IS_PED_INJURED(Global_35) && !PED::IS_PED_INJURED(iLocal_1150)) && !PED::IS_PED_INJURED(iLocal_1151)) && !PED::IS_PED_INJURED(Local_142))
							{
								func_679(Local_142, iLocal_1151, 2414.814f, 525.0239f, 73.4446f, 58.7718f, "rdtc3_horse_ride_cme", 0f, 0f, 1.501f, joaat("MOTIONSTATE_RUN"), 1, 0, 0);
								func_679(Global_35, iLocal_1150, 2418.26f, 523.2931f, 73.3004f, 66.0795f, "rdtc3_horse_ride_cme", 0.5f, 0f, 1.501f, joaat("MOTIONSTATE_RUN"), 1, 0, 0);
								CAM::_0xA54D643D0773EB65("script@story@dutch3@horse_ride", "03_riverrapids", 5);
								CAM::_0xBC016635D6A73B31("script@story@dutch3@horse_ride", "02_rail", 5);
								CLOCK::SET_CLOCK_TIME(18, 0, 0);
								__LIB_1__::func_681(&iLocal_1670, 1024);
								__LIB_2__::func_259(&uLocal_1179);
								bLocal_1163 = false;
								*iParam1++;
							}
						}
					}
					break;
				case 3:
					CLOCK::SET_CLOCK_TIME(18, 0, 0);
					CAM::_0x702B75DC9D3EDE56(true);
					if (!__LIB_0__::func_27(iLocal_1670, 1024))
					{
						STREAMING::END_SRL();
						STREAMING::PREFETCH_SRL("script@cme@dutch3_cme_04_bridge");
						STREAMING::_0xEF1A8A484118735E();
						STREAMING::_0xAE00387E53B1E9FC();
						TASK::REQUEST_WAYPOINT_RECORDING("rdtc3_charles_patrol_sneak");
						TASK::REQUEST_WAYPOINT_RECORDING("rdtc3_charles_butcher_creek_to_beaver_hollow");
						__LIB_1__::func_683(&iLocal_1670, 1024);
					}
					if (__LIB_0__::func_899(&uLocal_1179))
					{
						bLocal_1163 = STREAMING::IS_SRL_LOADED();
						iLocal_1166 = CAM::_0x465F04F68AD38197("script@story@dutch3@horse_ride", "02_rail", 5);
						iLocal_1167 = CAM::_0xEA113BF9B0C0C5D7("script@story@dutch3@horse_ride", "02_rail", 5);
						iLocal_1168 = (iLocal_1167 - __LIB_1__::func_592(&uLocal_1179));
						if (AUDIO::_0xFFE9C53DEEA3DB0B(iLocal_1168, 1206641916, 2498.073f, 828.0354f, 68.34985f, bLocal_1163, iLocal_1166) && ENTITY::_0x1FF441D7954F8709(iLocal_1229))
						{
							if (((!PED::IS_PED_INJURED(Global_35) && !PED::IS_PED_INJURED(iLocal_1150)) && !PED::IS_PED_INJURED(iLocal_1151)) && !PED::IS_PED_INJURED(Local_142))
							{
								GRAPHICS::SET_TIMECYCLE_MODIFIER("Dutch_moonPos");
								func_679(Local_142, iLocal_1151, 2489.856f, 813.3118f, 71.40344f, 249.3207f, "rdtc3_horse_ride_cme", 0f, 0f, 1f, joaat("MOTIONSTATE_WALK"), 1, 0, 0);
								func_679(Global_35, iLocal_1150, 2484.653f, 815.1907f, 72.01134f, 241.6145f, "rdtc3_horse_ride_cme", 0f, 0f, 1f, joaat("MOTIONSTATE_WALK"), 1, 0, 0);
								CAM::_0xA54D643D0773EB65("script@story@dutch3@horse_ride", "02_rail", 5);
								CAM::_0xBC016635D6A73B31("script@story@dutch3@horse_ride", "04_bridge", 5);
								CLOCK::SET_CLOCK_TIME(22, 0, 0);
								__LIB_1__::func_681(&iLocal_1670, 1024);
								__LIB_2__::func_259(&uLocal_1179);
								bLocal_1163 = false;
								MISC::_SET_WEATHER_TYPE(joaat("MISTY"), true, true, false, 0f, false);
								__LIB_0__::func_489(0, 0);
								*iParam1++;
							}
						}
					}
					break;
				case 4:
					CLOCK::SET_CLOCK_TIME(22, 0, 0);
					CAM::_0x702B75DC9D3EDE56(true);
					if (__LIB_0__::func_899(&uLocal_1179))
					{
						bLocal_1163 = STREAMING::IS_SRL_LOADED();
						iLocal_1166 = CAM::_0x465F04F68AD38197("script@story@dutch3@horse_ride", "04_bridge", 5);
						iLocal_1167 = CAM::_0xEA113BF9B0C0C5D7("script@story@dutch3@horse_ride", "04_bridge", 5);
						iLocal_1168 = (iLocal_1167 - __LIB_1__::func_592(&uLocal_1179));
						if (AUDIO::_0xFFE9C53DEEA3DB0B(iLocal_1168, 2, 2495.956f, 810.8811f, 74.81466f, true, iLocal_1166))
						{
							if (((!PED::IS_PED_INJURED(Global_35) && !PED::IS_PED_INJURED(iLocal_1150)) && !PED::IS_PED_INJURED(iLocal_1151)) && !PED::IS_PED_INJURED(Local_142))
							{
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
								TASK::CLEAR_PED_TASKS(Global_35, true, false);
								TASK::CLEAR_PED_TASKS(Local_142, true, false);
								ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_1151, 2509.69f, 807.4478f, 71.4052f, 277.9456f, true, false, true);
								ENTITY::_0x9587913B9E772D29(iLocal_1151, 0);
								ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_1150, 2501.005f, 809.635f, 71.5696f, 249.3931f, true, false, true);
								ENTITY::_0x9587913B9E772D29(iLocal_1150, 0);
								PED::FORCE_PED_MOTION_STATE(iLocal_1150, joaat("MOTIONSTATE_WALK"), false, 0, false);
								PED::_0x2208438012482A1A(iLocal_1150, true, true);
								PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0f, true, false);
								__LIB_1__::func_683(&iLocal_1670, 256);
								__LIB_2__::func_259(&uLocal_1182);
								CAM::_0xA54D643D0773EB65("script@story@dutch3@horse_ride", "04_bridge", 5);
								CAM::_0x702B75DC9D3EDE56(false);
								if (CAM::_0x927B810E43E99932(&Local_1518))
								{
									CAM::_0x0A5A4F1979ABB40E(&Local_1518);
									CAM::_0x798BE43C9393632B(&Local_1518);
								}
								__LIB_1__::func_681(&iLocal_1670, 1024);
								__LIB_1__::func_561(&uLocal_1179);
								STREAMING::END_SRL();
								AUDIO::_0x43037ABFE214A851();
								bLocal_1163 = false;
								__LIB_1__::func_681(&iLocal_1670, 2048);
								__LIB_1__::func_683(&(Local_142.f_9), 262144);
								__LIB_1__::func_683(&(Local_142.f_9), 32);
								func_320(&Local_142, 12, 0, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_35, false);
								*iParam1++;
							}
						}
					}
					break;
				case 5:
					__LIB_12__::func_997(uParam0, func_61(2), func_61(3), 2, 3, 0);
					return true;
			}
			break;
	}
	return false;
}

bool func_364(var uParam0, int iParam1)
{
	if (!__LIB_0__::func_27(iLocal_1670, 1073741824 /* Float: 2f */))
	{
		switch (iLocal_116)
		{
			case 2:
				func_777(2);
				break;
			case 3:
				func_777(3);
				break;
		}
		__LIB_1__::func_683(&iLocal_1670, 1073741824 /* Float: 2f */);
	}
	func_779(uParam0, iLocal_116, &Local_142, &iLocal_1691, iLocal_1151, iLocal_1161, &iLocal_1696, &iLocal_1695);
	func_786(uParam0, &Local_162, &iLocal_1694);
	CLOCK::SET_CLOCK_TIME(22, 0, 0);
	func_787("rdtc3_canoe_ride_cme");
	__LIB_9__::func_204(Global_35, vLocal_20, &uLocal_1185, 37.5f, 16f, 13.5f, 10f, 1f, 0, 0, 1, 1, 1);
	func_783(uParam0);
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_1152[0]) && !PED::IS_PED_DEAD_OR_DYING(uLocal_1152[0], true))
	{
		PED::SET_PED_RESET_FLAG(uLocal_1152[0], 317, true);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_1152[1]) && !PED::IS_PED_DEAD_OR_DYING(uLocal_1152[1], true))
	{
		PED::SET_PED_RESET_FLAG(uLocal_1152[1], 317, true);
	}
	switch (*iParam1)
	{
		case 0:
			switch (iLocal_112)
			{
				case 0:
					if (iLocal_1229 == 0)
					{
						iLocal_1229 = ENTITY::_0x6F3068258A499E52(joaat("P_DIS_ROPEBRIDGE2"), 2488.98f, 813.6221f, 72.5777f, 9);
					}
					if (((!PED::IS_PED_INJURED(Global_35) && !PED::IS_PED_INJURED(Local_142)) && ENTITY::DOES_ENTITY_EXIST(iLocal_1161)) && !ENTITY::IS_ENTITY_DEAD(iLocal_1161))
					{
						if (__LIB_1__::func_205(Global_35, iLocal_1240[6], 1, 0))
						{
							AUDIO::_0x660A8F876DF1D4F8(6);
							if (((!__LIB_3__::func_330(Global_35, iLocal_1161, 1) || !__LIB_3__::func_330(Local_142, iLocal_1161, 1)) || AITRANSPORT::_0x660639BC60157048(Global_35, iLocal_1161)) || AITRANSPORT::_0x660639BC60157048(Local_142, iLocal_1161))
							{
								__LIB_0__::func_325(&iLocal_1231);
								iLocal_114 = 1;
								__LIB_1__::func_681(&iLocal_1671, 256);
								__LIB_1__::func_681(&iLocal_1671, 512);
								__LIB_1__::func_683(&iLocal_1670, 8192);
								*iParam1++;
							}
						}
					}
					break;
				case 1:
					if (((!PED::IS_PED_INJURED(Global_35) && !PED::IS_PED_INJURED(iLocal_1150)) && !PED::IS_PED_INJURED(iLocal_1151)) && !PED::IS_PED_INJURED(Local_142))
					{
						iLocal_114 = 1;
						__LIB_1__::func_683(&iLocal_1670, 8192);
						*iParam1++;
					}
					break;
			}
			break;
		case 1:
			if (__LIB_0__::func_27(iLocal_1674, 536870912))
			{
				iLocal_116 = 3;
				__LIB_1__::func_681(&iLocal_1670, 1073741824 /* Float: 2f */);
				if (!PED::IS_PED_INJURED(Global_35))
				{
					PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "Stealth", 1f, -1);
					PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "Cautious", 1f, -1);
				}
				if (!PED::IS_PED_INJURED(Local_142))
				{
					PED::_SET_PED_BLACKBOARD_FLOAT(Local_142, "Stealth", 1f, -1);
					PED::_SET_PED_BLACKBOARD_FLOAT(Local_142, "Cautious", 1f, -1);
				}
				func_788(2, 0);
				__LIB_1__::func_681(&iLocal_1670, 33554432);
				__LIB_12__::func_997(uParam0, func_61(3), func_61(4), 3, 4, 0);
				*iParam1++;
			}
			break;
		case 2:
			if (__LIB_0__::func_266(Global_35, vLocal_20, 65f, 1, 1))
			{
				func_299(uParam0, 2, 1);
				*iParam1++;
			}
			break;
		case 3:
			if (!PED::IS_PED_INJURED(Global_35) && !PED::IS_PED_INJURED(Local_142))
			{
				if (__LIB_0__::func_27(iLocal_1674, 4))
				{
					if (__LIB_0__::func_266(Global_35, vLocal_20, 7.5f, 1, 1))
					{
						if ((!PED::IS_PED_ON_MOUNT(Global_35) && !PED::IS_PED_IN_ANY_VEHICLE(Global_35, false)) && !ENTITY::DOES_ENTITY_EXIST(PED::_GET_TRANSPORT_PED_IS_SEATED_ON(Global_35)))
						{
							PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
							WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
							*iParam1++;
						}
					}
				}
				if (__LIB_1__::func_205(Global_35, iLocal_1240[9], 1, 0))
				{
					__LIB_1__::func_683(&iLocal_1670, 16384);
					*iParam1++;
				}
			}
			break;
		case 4:
			func_442(&iLocal_1161, 0);
			__LIB_0__::func_325(&iLocal_1231);
			func_438(&Local_968, 1, 1);
			iLocal_117 = 0;
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				PLAYER::_0x908D4B72854C8F62(PLAYER::PLAYER_ID());
				PLAYER::_0x12E09E278C6C29B7(PLAYER::PLAYER_ID());
			}
			if (PED::DOES_GROUP_EXIST(iLocal_1230))
			{
				PED::REMOVE_GROUP(iLocal_1230);
			}
			if (__LIB_0__::func_27(iLocal_1670, 16384))
			{
				func_320(&Local_142, 34, 0, 0);
				__LIB_12__::func_966(uParam0, 0);
			}
			if (iLocal_1229 != 0)
			{
				if (ENTITY::_0x1FF441D7954F8709(iLocal_1229))
				{
					ENTITY::_0xD2B9C78537ED5759(iLocal_1229);
				}
			}
			AUDIO::_0x660A8F876DF1D4F8(19);
			AUDIO::_0x660A8F876DF1D4F8(14);
			__LIB_12__::func_997(uParam0, func_61(5), func_61(6), 5, 6, 0);
			return true;
	}
	return false;
}

bool func_365(var uParam0, int iParam1)
{
	if (!__LIB_0__::func_27(iLocal_1670, 1073741824 /* Float: 2f */))
	{
		func_777(4);
		__LIB_1__::func_683(&iLocal_1670, 1073741824 /* Float: 2f */);
	}
	func_779(uParam0, iLocal_116, &Local_142, &iLocal_1691, iLocal_1151, iLocal_1161, &iLocal_1696, &iLocal_1695);
	func_786(uParam0, &Local_162, &iLocal_1694);
	func_789();
	if (!__LIB_0__::func_27(iLocal_1670, 262144) && !__LIB_0__::func_27(iLocal_1670, 4194304))
	{
		PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 47, 1);
	}
	func_790(uParam0);
	CLOCK::SET_CLOCK_TIME(22, 0, 0);
	switch (*iParam1)
	{
		case 0:
			if (CAM::_0xA2B1C7EF759A63CE() <= 0f)
			{
				__LIB_9__::func_603(79);
				__LIB_12__::func_26(1, 1);
				*iParam1++;
			}
			break;
		case 1:
			if (!__LIB_0__::func_27(iLocal_1672, 512))
			{
				if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_1240[11], false, 0))
				{
					__LIB_1__::func_683(&iLocal_1672, 512);
				}
			}
			if (!__LIB_0__::func_27(iLocal_1670, 524288))
			{
				if ((((__LIB_0__::func_27(iLocal_1674, 4) && __LIB_0__::func_27(iLocal_1674, 32)) && __LIB_0__::func_27(iLocal_1674, 256)) && __LIB_0__::func_27(iLocal_1674, 2048)) && __LIB_0__::func_27(iLocal_1674, 16384))
				{
					__LIB_1__::func_683(&iLocal_1670, 524288);
				}
			}
			if (__LIB_0__::func_27(iLocal_1670, 524288))
			{
				__LIB_4__::func_719(7, 0, 0, 1, 1, 0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_142, 2293.498f, 1458.279f, 82.2062f, 1f, 20000, 0.25f, 0, 40000f);
				iLocal_1688 = 0;
				iLocal_1689 = MISC::GET_GAME_TIMER();
				VOLUME::_0xFD010A2154B40676(iLocal_1240[36], joaat("REL_GANG_DUTCHS"));
				*iParam1++;
			}
			break;
		case 2:
			if (__LIB_0__::func_27(iLocal_1670, 32768))
			{
				__LIB_1__::func_681(&iLocal_1670, 1024);
				func_299(uParam0, 3, 1);
				*iParam1++;
			}
			break;
		case 3:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1694))
			{
				if (ANIMSCENE::_0x1F0E401031E20146(iLocal_1694, "pl_leadin"))
				{
					if (!__LIB_0__::func_27(iLocal_1670, 1024))
					{
						if (iLocal_112 == 1)
						{
							if (ENTITY::DOES_ENTITY_EXIST(PED::_GET_LAST_MOUNT(Global_35)) && !ENTITY::IS_ENTITY_DEAD(PED::_GET_LAST_MOUNT(Global_35)))
							{
								__LIB_1__::func_683(&iLocal_1670, 1024);
							}
							else if (__LIB_12__::func_637(&iLocal_1150, vLocal_56, fLocal_59, 1, 1, 1, 1))
							{
								__LIB_1__::func_683(&iLocal_1670, 1024);
							}
						}
						else if (func_330(&(uLocal_1152[0]), joaat("A_C_HORSE_MURFREEBROOD_MANGE_01"), 2354.213f, 1370.24f, 105.1166f, 128.7562f, joaat("REL_NO_RELATIONSHIP"), 0, 0, 0, -2, 0, joaat("WEAPON_UNARMED"), joaat("META_OUTFIT_DEFAULT")))
						{
							__LIB_1__::func_683(&iLocal_1670, 1024);
						}
					}
					__LIB_0__::func_325(&iLocal_1231);
					if (ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(iLocal_1694) || ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_1694, "Meredith"))
					{
						__LIB_1__::func_681(&iLocal_1670, 1024);
						if (!PED::IS_PED_INJURED(Local_142))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_142, true);
							if (PED::IS_PED_IN_GROUP(Local_142))
							{
								PED::REMOVE_PED_FROM_GROUP(Local_142);
							}
						}
						GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
						__LIB_12__::func_997(uParam0, func_61(7), func_61(8), 7, 8, 0);
						return true;
					}
				}
			}
			break;
	}
	return false;
}

bool func_366(var uParam0, int iParam1)
{
	struct<7> Var0;
	int iVar8;
	int iVar9;
	if (!__LIB_0__::func_27(iLocal_1670, 1073741824 /* Float: 2f */))
	{
		func_777(5);
		__LIB_1__::func_683(&iLocal_1670, 1073741824 /* Float: 2f */);
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	}
	if (!SCRIPTS::_0x7409669C5ED50144(joaat("CHAL_CTX_CUSTOM_1")))
	{
		SCRIPTS::_0x7D654266025E921B(joaat("CHAL_CTX_CUSTOM_1"));
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLACE_CARRIABLE_ONTO_PARENT"), true);
	func_786(uParam0, &Local_162, &iLocal_1694);
	__LIB_9__::func_204(Global_35, vLocal_23, &uLocal_1185, 28f, 19f, 9f, 0.01f, 5f, 0, 0, 1, 1, 1);
	func_795(uParam0);
	switch (*iParam1)
	{
		case 0:
			AUDIO::_0x0D7FD6A55FD63AEF(14, 3, 1);
			AUDIO::_0x0D7FD6A55FD63AEF(6, 3, 1);
			*iParam1++;
			break;
		case 1:
			if (__LIB_0__::func_266(Global_35, vLocal_23, 45f, 1, 1))
			{
				if (func_330(&iLocal_182, joaat("CS_MEREDITHSMOTHER"), vLocal_100, fLocal_103, joaat("REL_NO_RELATIONSHIP"), 0, 0, 0, -2, 0, joaat("WEAPON_UNARMED"), joaat("META_OUTFIT_DEFAULT")))
				{
					func_320(&iLocal_182, 9, 0, 0);
					PED::_SET_PED_BLACKBOARD_BOOL(Local_162, "SadPassenger", false, -1);
					func_319(uParam0);
					func_299(uParam0, 4, 1);
					func_796();
					if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1240[19]))
					{
						PATHFIND::_0x19C7567D2F2287D6(iLocal_1240[33], 7);
					}
					STREAMING::_REQUEST_IMAP(1713454259);
					*iParam1++;
				}
			}
			break;
		case 2:
			if (!PED::IS_PED_INJURED(Global_35) && !PED::IS_PED_INJURED(Local_162))
			{
				if (MAP::DOES_BLIP_EXIST(iLocal_1231))
				{
					if (__LIB_1__::func_205(Global_35, iLocal_1240[33], 1, 0))
					{
						if (__LIB_5__::func_463())
						{
							__LIB_5__::func_20(1, 0);
						}
						if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true) && __LIB_13__::func_561(Global_35, Local_162))
						{
							iLocal_1159 = PED::GET_MOUNT(Global_35);
							*iParam1 = 10;
						}
						else
						{
							if (ENTITY::DOES_ENTITY_EXIST(PED::_GET_TRANSPORT_PED_IS_SEATED_ON(Global_35)))
							{
								Var0.f_5 = 1073741824;
								Var0.f_6 = 1;
								Var0.f_3 = Global_35;
								Var0.f_4 = PED::_GET_TRANSPORT_PED_IS_SEATED_ON(Global_35);
								Var0.f_5 = 1f;
								AITRANSPORT::TASK_EXIT_TRANSPORT(&Var0);
							}
							*iParam1 = 20;
						}
					}
				}
			}
			break;
		case 10:
			if ((!PED::IS_PED_INJURED(Global_35) && !PED::IS_PED_INJURED(Local_162)) && !PED::IS_PED_INJURED(iLocal_1159))
			{
				PED::SET_PED_RESET_FLAG(iLocal_1159, 105, true);
				WEAPON::_0xB832F1A686B9B810(Global_35, 0, 1);
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 1, false, false);
				WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
				if (PED::IS_PED_IN_GROUP(Local_162) || PED::IS_PED_GROUP_MEMBER(Local_162, __LIB_0__::func_110(), 0))
				{
					PED::REMOVE_PED_FROM_GROUP(Local_162);
				}
				__LIB_1__::func_681(&(Local_162.f_9), 16384);
				if (__LIB_3__::func_869(Global_35, &uLocal_1676, 1, 0, 0, 1084227584 /* Float: 5f */, 100, 0, 0))
				{
					TASK::TASK_STAND_STILL(iLocal_1159, -1);
					AUDIO::_0x660A8F876DF1D4F8(6);
					AUDIO::_0x660A8F876DF1D4F8(14);
					*iParam1++;
				}
			}
			break;
		case 11:
			if ((!PED::IS_PED_INJURED(Global_35) && !PED::IS_PED_INJURED(Local_162)) && !PED::IS_PED_INJURED(iLocal_1159))
			{
				PED::SET_PED_RESET_FLAG(iLocal_1159, 105, true);
				WEAPON::_0xB832F1A686B9B810(Global_35, 0, 1);
				PED::SET_PED_USING_ACTION_MODE(Global_35, false, -1, 0);
				PED::SET_PED_CONFIG_FLAG(Global_35, 387, true);
				TASK::TASK_DISMOUNT_ANIMAL(Global_35, 262144, 0, 0, 0, 0);
				TASK::TASK_LOOK_AT_ENTITY(Global_35, Local_162, 3000, 1038, 51, 1);
				TASK::TASK_STAND_STILL(iLocal_1159, -1);
				*iParam1++;
			}
			break;
		case 12:
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			if ((!PED::IS_PED_INJURED(Global_35) && !PED::IS_PED_INJURED(Local_162)) && !PED::IS_PED_INJURED(iLocal_1159))
			{
				PED::SET_PED_RESET_FLAG(iLocal_1159, 105, true);
				WEAPON::_0xB832F1A686B9B810(Global_35, 0, 1);
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 0f);
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_1159, 0f);
				if (!PED::IS_PED_ON_MOUNT(Global_35))
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1701) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_1701, true, false))
					{
						__LIB_5__::func_20(0, 0);
						PED::CLEAR_PED_ENV_DIRT(Local_162);
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1701, "Arthur", Global_35, 0);
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1701, "Horse", iLocal_1159, 0);
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1701, "Meredith", Local_162, 0);
						ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(iLocal_1701, iLocal_1159, -1);
						ANIMSCENE::START_ANIM_SCENE(iLocal_1701);
						*iParam1++;
					}
				}
			}
			break;
		case 13:
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1701))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_1701, false))
				{
					__LIB_0__::func_568(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 10f, 0);
					*iParam1++;
				}
			}
			break;
		case 14:
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			if ((!PED::IS_PED_INJURED(Global_35) && !PED::IS_PED_INJURED(Local_162)) && !PED::IS_PED_INJURED(iLocal_1159))
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1701))
				{
					if ((ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(iLocal_1701) || ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_1701, "Arthur")) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iLocal_1701, false))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_162, true, true);
						__LIB_0__::func_325(&iLocal_1231);
						__LIB_0__::func_325(&(Local_162.f_2));
						func_445();
						STREAMING::_REMOVE_IMAP(-2117963426);
						STREAMING::_REMOVE_IMAP(1537844205);
						STREAMING::_REMOVE_IMAP(-1766409506);
						STREAMING::_REMOVE_IMAP(1713454259);
						STREAMING::_REMOVE_IMAP(883152450);
						if (PATHFIND::_0x5AC0944C156E5F44("nav_dutch3"))
						{
							PATHFIND::_0x527B97C203BB8606("nav_dutch3");
						}
						iVar8 = 0;
						while (iVar8 < iLocal_1504)
						{
							__LIB_8__::func_863(&(iLocal_1504[iVar8]), 0, 1, 1);
							iVar8++;
						}
						return true;
					}
				}
			}
			break;
		case 20:
			if (!PED::IS_PED_INJURED(Global_35) && !PED::IS_PED_INJURED(Local_162))
			{
				if (!PED::IS_PED_ON_MOUNT(Global_35) && !PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_162, true, true);
					__LIB_0__::func_325(&iLocal_1231);
					__LIB_0__::func_325(&(Local_162.f_2));
					func_445();
					STREAMING::_REMOVE_IMAP(-2117963426);
					STREAMING::_REMOVE_IMAP(1537844205);
					STREAMING::_REMOVE_IMAP(-1766409506);
					STREAMING::_REMOVE_IMAP(1713454259);
					if (PATHFIND::_0x5AC0944C156E5F44("nav_dutch3"))
					{
						PATHFIND::_0x527B97C203BB8606("nav_dutch3");
					}
					iVar9 = 0;
					while (iVar9 < iLocal_1504)
					{
						__LIB_8__::func_863(&(iLocal_1504[iVar9]), 0, 1, 1);
						iVar9++;
					}
					GRAPHICS::_0x5199405EABFBD7F0("MissionChoice");
					return true;
				}
			}
			break;
	}
	return false;
}

bool func_367(var uParam0, int iParam1)
{
	int iVar0;
	if (!__LIB_0__::func_27(iLocal_1670, 268435456))
	{
		if (func_801(&uLocal_119))
		{
			if (*iParam1 == 1 && __LIB_0__::func_27(iLocal_1670, 1024))
			{
				func_319(uParam0);
				func_299(uParam0, 6, 1);
				__LIB_1__::func_683(&iLocal_1670, 268435456);
			}
		}
	}
	if (iLocal_112 == 0)
	{
		iVar0 = PED::_GET_LAST_MOUNT(Global_35);
	}
	else
	{
		iVar0 = iLocal_1150;
	}
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	switch (*iParam1)
	{
		case 0:
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
			CAM::_0x702B75DC9D3EDE56(true);
			if (!__LIB_0__::func_27(iLocal_1670, 1024))
			{
				STREAMING::END_SRL();
				STREAMING::PREFETCH_SRL("script@cme@dutch3_cme_river_shot");
				STREAMING::_0xEF1A8A484118735E();
				STREAMING::_0xAE00387E53B1E9FC();
				__LIB_1__::func_683(&iLocal_1670, 1024);
				CLOCK::SET_CLOCK_TIME(10, 0, 0);
			}
			if (__LIB_0__::func_899(&uLocal_1179))
			{
				bLocal_1163 = STREAMING::IS_SRL_LOADED();
				iLocal_1166 = (CAM::_0x465F04F68AD38197("script@story@dutch3@returntobeavers", "1_annesburg_1", 5) - __LIB_1__::func_592(&uLocal_1179));
				iLocal_1167 = CAM::_0xEA113BF9B0C0C5D7("script@story@dutch3@returntobeavers", "1_annesburg_1", 5);
				iLocal_1168 = (iLocal_1167 - __LIB_1__::func_592(&uLocal_1179));
				if (AUDIO::_0xFFE9C53DEEA3DB0B(iLocal_1168, -1270318475, 2527.091f, 1609.562f, 87.90473f, bLocal_1163, iLocal_1166))
				{
					if (!PED::IS_PED_INJURED(Global_35))
					{
						CLOCK::SET_CLOCK_TIME(11, 0, 0);
						func_679(Global_35, iVar0, 2534.1f, 1584.7f, 85.3307f, 103.8f, "dutch3_cme_river", 0f, 0f, 1.25f, joaat("MOTIONSTATE_RUN"), 1, 0, 0);
						CAM::_0xA54D643D0773EB65("script@story@dutch3@returntobeavers", "1_annesburg_1", 5);
						CAM::_0xBC016635D6A73B31("script@story@dutch3@returntobeavers", "4_river_1", 5);
						__LIB_1__::func_681(&iLocal_1670, 1024);
						__LIB_2__::func_259(&uLocal_1179);
						bLocal_1163 = false;
						*iParam1++;
					}
				}
			}
			break;
		case 1:
			CAM::_0x702B75DC9D3EDE56(true);
			if (!__LIB_0__::func_27(iLocal_1670, 1024))
			{
				STREAMING::END_SRL();
				__LIB_1__::func_683(&iLocal_1670, 1024);
			}
			if (__LIB_0__::func_899(&uLocal_1179))
			{
				bLocal_1163 = (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_206.f_348) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_206.f_348, true, false));
				iLocal_1166 = CAM::_0x465F04F68AD38197("script@story@dutch3@returntobeavers", "4_river_1", 5);
				iLocal_1167 = CAM::_0xEA113BF9B0C0C5D7("script@story@dutch3@returntobeavers", "4_river_1", 5);
				iLocal_1168 = (iLocal_1167 - __LIB_1__::func_592(&uLocal_1179));
				STREAMING::_0xEF1A8A484118735E();
				if (AUDIO::_0xFFE9C53DEEA3DB0B(iLocal_1168, 0, 2372.56f, 1319.967f, 110.9078f, bLocal_1163, (iLocal_1166 - __LIB_1__::func_592(&uLocal_1179))) || (__LIB_1__::func_592(&uLocal_1179) >= iLocal_1166 && func_801(&uLocal_119)))
				{
					if (!PED::IS_PED_INJURED(Global_35))
					{
						if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
						{
							HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
							TASK::CLEAR_PED_TASKS(Global_35, true, false);
							TASK::CLEAR_PED_TASKS(iLocal_1150, true, false);
							__LIB_1__::func_681(&iLocal_1670, 1024);
							__LIB_2__::func_259(&uLocal_1179);
							AUDIO::_0x43037ABFE214A851();
							bLocal_1163 = false;
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
							__LIB_12__::func_997(uParam0, func_61(10), func_61(11), 10, 11, 0);
							return true;
						}
					}
				}
			}
			break;
	}
	return false;
}

bool func_368(var uParam0, int iParam1)
{
	var uVar0;
	CAM::_0xE296208C273BD7F0(0, 0, 0, 17, 1, 0);
	switch (*iParam1)
	{
		case 0:
			GRAPHICS::REMOVE_DECALS_IN_RANGE(vLocal_104, 100f);
			*iParam1++;
			break;
		case 1:
			if (GRAPHICS::_0xFBF161FCFEC8589E("ChapterTitle_IntroCh06", 2, false, &uVar0) || GRAPHICS::_0xFBF161FCFEC8589E("ChapterTitle_IntroCh06", 1, false, &uVar0))
			{
				GRAPHICS::_0xA201A3D0AC087C37("ChapterTitle_IntroCh06");
				CAM::DO_SCREEN_FADE_OUT(0);
				func_309();
				func_310(&iLocal_1675, 1024);
				__LIB_1__::func_971(0);
				*iParam1++;
			}
			break;
		case 2:
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1702))
			{
				iLocal_1702 = ANIMSCENE::_CREATE_ANIM_SCENE("script@timelapse@buck_coyote@dutch3", 0, "pbl_1", false, true);
				ANIMSCENE::LOAD_ANIM_SCENE(iLocal_1702);
			}
			else if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_1702, true, false))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_1702, "pbl_1");
				ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_1702, "pbl_2");
			}
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1702) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_1702, true, false))
			{
				if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_1702, "pbl_1") && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_1702, "pbl_2"))
				{
					if (!__LIB_0__::func_871())
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_1702, "pbl_2", true);
					}
					else
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_1702, "pbl_1", true);
					}
					ANIMSCENE::START_ANIM_SCENE(iLocal_1702);
					AUDIO::_0x9428447DED71FC7E("Chapter_Screen_Scenes");
					func_299(uParam0, 7, 1);
					*iParam1++;
				}
			}
			break;
		case 3:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1702) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_1702, false))
			{
				CAM::DO_SCREEN_FADE_IN(1000);
				*iParam1++;
			}
			break;
		case 4:
			if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1702) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_1702, false)) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_1702) >= 0.99f)
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_206.f_348) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_206.f_348, true, false))
				{
					HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
					return true;
				}
			}
			break;
	}
	return false;
}

void func_404(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	struct<2> Var2;
	struct<2> Var4;
	int iVar6;
	int iVar7;
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
		iVar9 = __LIB_1__::func_145(iParam0, &iVar7, &iVar8);
		if (iVar9 != 176656832)
		{
			__LIB_4__::func_253(iVar9, iVar7, -469960592, iVar8, 1, 1, 0);
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
						func_716(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_716(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_716(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_716(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_716(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_716(joaat("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_716(joaat("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_716(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_716(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_716(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_716(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_716(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_716(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_716(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_716(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_716(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_716(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_716(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_716(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_716(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_716(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_716(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_716(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_716(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_716(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_839();
						func_840(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
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
						func_716(joaat("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
							func_404(Global_1347702[21 /*49*/].f_15, 0, 0, 0, 0);
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
							func_404(Global_1347702[82 /*49*/].f_15, 0, 0, 0, 0);
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
							func_404(Global_1347702[83 /*49*/].f_15, 0, 0, 0, 0);
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
						func_716(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_716(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
		func_875();
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
							func_716(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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

Vector3 func_408(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10)
{
	vector3 vVar0;
	vVar0 = { func_882(vParam0, iParam3, iParam4, iParam5, iParam6, 1, iParam7, bParam8, bParam9, bParam10, -1, 1103626240 /* Float: 25f */) };
	if (__LIB_0__::func_86(vVar0))
	{
		vVar0 = { func_882(vParam0, iParam3, iParam4, 0, 1, 1, iParam7, bParam8, 0, 0, -1, 1103626240 /* Float: 25f */) };
	}
	return vVar0;
}

void func_434(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	iVar0 = __LIB_4__::func_6(iParam0);
	if (!__LIB_0__::func_6(iVar0))
	{
		return;
	}
	func_404(iVar0, 1, bParam1, 0, 1);
	__LIB_9__::func_615(iParam0, -1);
	if (bParam2)
	{
		if (__LIB_1__::func_268(iVar0) >= 1)
		{
			__LIB_9__::func_616(iVar0, (__LIB_1__::func_268(iVar0) - 1));
		}
	}
	else
	{
		__LIB_0__::func_703(0, 12);
		iVar1 = __LIB_9__::func_602(iParam0);
		if (__LIB_1__::func_268(iVar0) <= 1)
		{
			__LIB_0__::func_15(__LIB_0__::func_14(joaat("GANG_HIDEOUT_COMPLETED")), 1);
		}
		if (iVar1 != -1)
		{
			iVar2 = Global_40.f_9571[iVar1 /*10*/].f_1;
			if (iVar2 == 2 || iVar2 == 1)
			{
				Global_1392050[iVar1 /*14*/].f_1 |= 2;
			}
			iVar3 = 0;
			iVar4 = 12;
			iVar5 = 0;
			if (iVar1 >= 0 && iVar1 < 6)
			{
				Global_1393237.f_192[iVar1] = (__LIB_0__::func_485() / 1000);
			}
			switch (iVar1)
			{
				case 2:
					iVar3 = 0;
					iVar4 = 25;
					iVar5 = 0;
					break;
				case 0:
					if (iParam0 == 36)
					{
						Global_1392050[iVar1 /*14*/].f_1 |= 4;
					}
					else if (iParam0 == 16)
					{
						Global_1392050[iVar1 /*14*/].f_1 |= 8;
					}
					Global_1393237.f_192[iVar1] = (Global_1393237.f_192[iVar1] + ((iVar5 + iVar4 * 60) + iVar3 * 3600));
					break;
				case 1:
					Global_1393237.f_192[iVar1] = (Global_1393237.f_192[iVar1] + ((iVar5 + iVar4 * 60) + iVar3 * 3600));
					break;
				case 4:
					break;
			}
			__LIB_9__::func_645(__LIB_2__::func_116(iParam0, 1), 350f, 0);
			__LIB_2__::func_304(0, iVar1, iVar5, iVar4, iVar3);
		}
	}
}

void func_438(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		__LIB_0__::func_325(&((iParam0[iVar0 /*20*/])->f_2));
		if (!PED::IS_PED_INJURED((*iParam0)[iVar0 /*20*/]))
		{
			PED::SET_PED_KEEP_TASK((*iParam0)[iVar0 /*20*/], bParam2);
		}
		__LIB_0__::func_490(iParam0[iVar0 /*20*/], bParam1);
		iVar0++;
	}
}

void func_442(int* iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, false);
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
	{
		return;
	}
	if (bParam1)
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
	}
	else
	{
		func_939(iParam0);
		VEHICLE::DELETE_VEHICLE(iParam0);
	}
}

void func_443()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iLocal_1240)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1240[iVar0]))
		{
			VOLUME::_DELETE_VOLUME(iLocal_1240[iVar0]);
		}
		iVar0++;
	}
}

void func_444()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iLocal_1236)
	{
		if (PED::_0x91A5F9CBEBB9D936(iLocal_1236[iVar0]))
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_1236[iVar0], false);
		}
		iVar0++;
	}
}

void func_445()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iLocal_1508)
	{
		if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_1508[iVar0]))
		{
			TASK::_DELETE_SCENARIO_POINT(iLocal_1508[iVar0]);
		}
		iVar0++;
	}
}

int func_504(int iParam0, int iParam1)
{
	var uVar0;
	return func_971(&uVar0, iParam0, iParam1);
}

void func_511()
{
	float fVar0;
	float fVar1;
	float fVar2;
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(2354.227f, 1370.98f, 105.1311f, vLocal_23, true);
	fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vLocal_23, true);
	fVar2 = __LIB_0__::func_251(((fVar0 - fVar1) / fVar0), 0f, 1f);
	if (!__LIB_0__::func_27(iLocal_1670, 134217728))
	{
		if (fVar1 < 250f)
		{
			MISC::_SET_WEATHER_TYPE(joaat("MISTY"), true, true, false, 0f, false);
			__LIB_1__::func_683(&iLocal_1670, 134217728);
		}
	}
	__LIB_5__::func_375(8, 19, fVar2, &uLocal_1534);
}

void func_542()
{
	if (__LIB_0__::func_627(11, 0))
	{
		func_1002(11);
	}
	if (__LIB_0__::func_627(12, 0))
	{
		func_1002(12);
	}
	if (__LIB_0__::func_627(13, 0))
	{
		func_1002(13);
	}
	if (__LIB_0__::func_627(153, 0))
	{
		func_1002(153);
	}
	if (__LIB_0__::func_627(14, 0))
	{
		func_1002(14);
	}
	if (__LIB_0__::func_627(154, 0))
	{
		func_1002(154);
	}
	if (__LIB_0__::func_627(15, 0))
	{
		func_1002(15);
	}
	if (__LIB_0__::func_627(16, 0))
	{
		func_1002(16);
	}
	if (__LIB_0__::func_627(17, 0))
	{
		func_1002(17);
	}
	if (__LIB_0__::func_627(18, 0))
	{
		func_1002(18);
	}
	if (__LIB_0__::func_627(155, 0))
	{
		func_1002(155);
	}
	if (__LIB_0__::func_627(19, 0))
	{
		func_1002(19);
	}
	if (__LIB_0__::func_627(20, 0))
	{
		func_1002(20);
	}
}

bool func_566(var uParam0)
{
	switch (iLocal_113)
	{
		case 6:
			return true;
	}
	return true;
}

void func_616()
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1240[2]))
	{
		iLocal_1240[2] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2367.285f, -49.68136f, 46.2296f, 0f, 0f, -7.249995f, 32f, 32f, 6f, "RDCH31_VOLUME_CANOE_ARRIVAL");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1240[34]))
	{
		iLocal_1240[34] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2352.826f, -41.86843f, 41.66734f, -0.422589f, -1.8226f, -4.438976f, 34.95718f, 1.826742f, 2.975093f, "RDCH31_VOLUME_CANOE_SPEED");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1240[3]))
	{
		iLocal_1240[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2452.705f, 46.45425f, 39.83205f, 0f, 0f, 6.643254f, 4.1016f, 48.23152f, 10f, "RDCH31_VOLUME_CANOE_CME_TRIGGER");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1240[4]))
	{
		iLocal_1240[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2339.975f, -62.94816f, 44.9886f, 0f, 0f, -15.74999f, 8f, 7.5f, 8f, "RDCH31_VOLUME_HORSE_CME_TRIGGER");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1240[5]))
	{
		iLocal_1240[5] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2458.984f, 774.4095f, 69.4f, 0f, 0f, -29.25f, 16f, 16f, 4f, "RDCH31_VOLUME_BUTCHER_CREEK_REVEAL");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1240[6]))
	{
		iLocal_1240[6] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2481.831f, 785.7011f, 69.4f, 0f, 0f, -12.5f, 20f, 23f, 4f, "RDCH31_VOLUME_BUTCHER_CREEK_ARRIVAL");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1240[7]))
	{
		iLocal_1240[7] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2484.764f, 780.4951f, 67.80097f, 0f, 0f, -42.5f, 16f, 40f, 4f, "RDCH31_VOLUME_BUTCHER_CREEK_SCENARIO_BLOCKING_1");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1240[8]))
	{
		iLocal_1240[8] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2401.912f, 1232.134f, 105.2181f, 0f, 0f, 28.75f, 20f, 20f, 8f, "RDCH31_VOLUME_BEAVER_HOLLOW_JUNCTION");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1240[9]))
	{
		iLocal_1240[9] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2356.109f, 1376.474f, 109.4747f, 0f, 0f, 11.75f, 32f, 32f, 8f, "RDCH31_VOLUME_BEAVER_HOLLOW_ARRIVAL");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1240[11]))
	{
		iLocal_1240[11] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2357.317f, 1392.955f, 107.6288f, 0f, 0f, -7f, 7f, 10.19254f, 3f, "RDCH31_VOLUME_HIDEOUT_CAVE_ENTRANCE");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1240[12]))
	{
		iLocal_1240[12] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2354.959f, 1376.34f, 105.2606f, 0f, 0f, -34.5f, 20f, 20f, 8f, "RDCH31_VOLUME_HIDEOUT_CAVE_FRONT_APPROACH");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1240[13]))
	{
		iLocal_1240[13] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2288.907f, 1466.377f, 81.69339f, 0f, 0f, -37f, 32f, 32f, 8f, "RDCH31_VOLUME_HIDEOUT_CAVE_DEFENSIVE_AREA");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1240[15]))
	{
		iLocal_1240[15] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2294.627f, 1469.151f, 87.81589f, 0f, 0f, -24f, 19f, 24f, 6f, "RDCH31_VOLUME_HIDEOUT_BRAWLER_TRIGGER");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1240[16]))
	{
		iLocal_1240[16] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2290.791f, 1462.834f, 83.0674f, 0f, 0f, -15f, 1.1f, 0.8f, 1f, "RDCH31_VOLUME_PRISON_CAGE_ILO_TRIGGER");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1240[17]))
	{
		iLocal_1240[17] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2859.078f, 1365.248f, 64.40958f, 0f, 0f, -14.99999f, 10f, 18f, 5f, "RDCH31_VOLUME_ANNESBURG_SCENARIO_BLOCKING_1");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1240[18]))
	{
		iLocal_1240[18] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2923.091f, 1354.895f, 46.56627f, 0f, 0f, -20f, 18f, 16f, 8f, "RDCH31_VOLUME_ANNESBURG_SCENARIO_BLOCKING_2");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1240[19]))
	{
		iLocal_1240[19] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2856.887f, 1365.703f, 65.48502f, 0f, 0f, -21f, 5.5f, 5f, 2f, "RDCH31_VOLUME_ANNESBURG_RSC4_LEADIN_TRIGGER");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1240[20]))
	{
		iLocal_1240[20] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2360.241f, 1341.094f, 102.0162f, 0f, 0f, 16.5f, 30f, 64f, 16f, "RDCH31_VOLUME_CUTSCENE_RSC2_TRANSPORT_CHECK");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1240[21]))
	{
		iLocal_1240[21] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2294.549f, 1461.957f, 83.86272f, 0f, 0f, -40.25f, 14f, 9f, 2f, "RDCH31_VOLUME_CUTSCENE_RSC3_TRANSPORT_CHECK");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1240[22]))
	{
		iLocal_1240[22] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2858.683f, 1364.206f, 64.41f, 0f, 0f, -14.99999f, 10f, 12f, 5f, "RDCH31_VOLUME_CUTSCENE_RSC4_TRANSPORT_CHECK");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1240[23]))
	{
		iLocal_1240[23] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2297.317f, 1458.422f, 82.98788f, 0f, 0f, -27.5f, 16f, 4.5f, 3f, "RDCH31_VOLUME_CUTSCENE_RSC3_CORPSE_CHECK_01");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1240[24]))
	{
		iLocal_1240[24] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2355.367f, 1377.659f, 105.7048f, 0f, 0f, -9.312934f, 5.426765f, 21.0246f, 3f, "RDCH31_VOLUME_CUTSCENE_RSC3_CORPSE_CHECK_02");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1240[25]))
	{
		iLocal_1240[25] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2290.963f, 1462.921f, 82.90656f, 0f, 0f, -15.25f, 2.15f, 1.75f, 1.5f, "RDCH31_VOLUME_CUTSCENE_RSC3_CARRIABLE_DROP_CHECK");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1240[26]))
	{
		iLocal_1240[26] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2290.963f, 1462.921f, 82.90656f, 0f, 0f, -15.25f, 3f, 3f, 1.5f, "RDCH31_VOLUME_CUTSCENE_RSC3_CARRIABLE_INPUT_CHECK");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1240[27]))
	{
		iLocal_1240[27] = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), 2856.939f, 1366.017f, 65.38184f, 0f, 0f, -20f, 3.25f, 3.25f, 2f);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1240[28]))
	{
		iLocal_1240[28] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2524.427f, -353.8014f, 42.82033f, 0f, 0f, 28.99999f, 10f, 10f, 8f, "RDCH31_VOLUME_ROAD_BLOCKING_RIDE_TO_CANOE_01");
		PATHFIND::_0xC1799FAFD2FDF52B(iLocal_1240[28], 0, 0, 0);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1240[29]))
	{
		iLocal_1240[29] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2551.652f, -195.5722f, 46.0518f, 0f, 0f, -49.25001f, 10f, 10f, 8f, "RDCH31_VOLUME_ROAD_BLOCKING_RIDE_TO_CANOE_02");
		PATHFIND::_0xC1799FAFD2FDF52B(iLocal_1240[29], 0, 0, 0);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1240[30]))
	{
		iLocal_1240[30] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2627.058f, -606.7322f, 44.11344f, 0f, 0f, -21.75f, 10f, 10f, 8f, "RDCH31_VOLUME_ROAD_BLOCKING_RIDE_TO_CANOE_03");
		PATHFIND::_0xB03944057FD735BA(iLocal_1240[30], 3, 0);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1240[31]))
	{
		iLocal_1240[31] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2403.043f, 1233.301f, 102.9832f, 0f, 0f, 21.99999f, 9f, 9f, 4f, "RDCH31_VOLUME_ROAD_BLOCKING_BEAVER_HOLLOW_01");
		PATHFIND::_0xC1799FAFD2FDF52B(iLocal_1240[31], 0, 0, 0);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1240[36]))
	{
		iLocal_1240[36] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2291.432f, 1462.564f, 83.08391f, 0f, 0f, 0f, 2.877521f, 2.786349f, 1.327561f, "RDCH31_VOLUME_MEREDITH_SHOOT_PREV");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1240[37]))
	{
		iLocal_1240[37] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2291.074f, 1462.928f, 83.04198f, 0f, 0f, -15.69564f, 1f, 2.047835f, 1.95712f, "RDCH31_VOLUME_OPEN_CAGE_PROMPT");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1240[32]))
	{
		iLocal_1240[32] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2921.631f, 1302.907f, 43.20494f, 0f, 0f, -19f, 12f, 196f, 4f, "RDCH31_VOLUME_ROAD_BLOCKING_ANNESBURG_01");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1240[33]))
	{
		iLocal_1240[33] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vLocal_23, 0f, 0f, -20f, 6f, 6f, 3f, "RDCH31_VOLUME_ANNESBURG_RDTC3_RSC4_LEADIN_TRIGGER");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1240[38]))
	{
		iLocal_1240[38] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2470.041f, 44.81602f, 41.07452f, 0f, 0f, 0f, 4.845882f, 3.915462f, 4.353146f, "RDCH31_VOLUME_RIVER_BLOCK_A");
		PATHFIND::_0xC1799FAFD2FDF52B(iLocal_1240[38], 0, 0, 0);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1240[39]))
	{
		iLocal_1240[39] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2337.682f, -107.5241f, 41.07452f, 0f, 0f, 0f, 4.845882f, 3.915462f, 4.353146f, "RDCH31_VOLUME_RIVER_BLOCK_B");
		PATHFIND::_0xC1799FAFD2FDF52B(iLocal_1240[39], 0, 0, 0);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1240[40]))
	{
		iLocal_1240[40] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2480.29f, 796.7026f, 67.05759f, 0f, 0f, 53.19389f, 7.04109f, 24.09182f, 6.33225f, "RDCH31_VOLUME_BUTCHER_CREEK_VEHICLE_FORCE_EXIT");
	}
}

void func_617()
{
	iLocal_1508[0] = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_HUMAN_WASH_DISHES_TABLE_LEFT"), 2480.7f, 776.15f, 66.35f, 209.6414f, 0, 0, 1);
	iLocal_1508[1] = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_HUMAN_PEE"), 2502.489f, 818.4045f, 71.2461f, 48.239f, 0, 0, 1);
	TASK::_SET_SCENARIO_POINT_FLAG(iLocal_1508[1], 8, true);
	TASK::_SET_SCENARIO_POINT_FLAG(iLocal_1508[1], 23, true);
	TASK::_SET_SCENARIO_POINT_FLAG(iLocal_1508[1], 25, true);
	iLocal_1508[2] = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_HUMAN_SMOKE"), 2514.583f, 809.5106f, 71.5254f, 235.875f, 0, 0, 1);
	TASK::_SET_SCENARIO_POINT_FLAG(iLocal_1508[2], 8, true);
	TASK::_SET_SCENARIO_POINT_FLAG(iLocal_1508[2], 23, true);
	TASK::_SET_SCENARIO_POINT_FLAG(iLocal_1508[2], 25, true);
	iLocal_1508[3] = TASK::CREATE_SCENARIO_POINT(joaat("PROP_HUMAN_SEAT_CHAIR_SMOKING"), 2555.06f, 806.47f, 75.72f, 185.75f, 0, 0, 1);
	TASK::_SET_SCENARIO_POINT_FLAG(iLocal_1508[3], 8, true);
	TASK::_SET_SCENARIO_POINT_FLAG(iLocal_1508[3], 23, true);
	TASK::_SET_SCENARIO_POINT_FLAG(iLocal_1508[3], 25, true);
	iLocal_1508[4] = TASK::CREATE_SCENARIO_POINT(joaat("SC_PROP_HUMAN_TORCH_TORCAP_A"), 2292.184f, 1461.853f, 82.1144f, 62.9546f, 0, 0, 1);
	iLocal_1508[5] = TASK::CREATE_SCENARIO_POINT(joaat("PROP_HUMAN_SEAT_CHAIR"), 2340.615f, 1403.818f, 102.857f, 0f, 0, 0, 1);
	iLocal_1508[6] = TASK::CREATE_SCENARIO_POINT(joaat("PROP_HUMAN_SEAT_CHAIR"), 2300.78f, 1453.68f, 83f, 250f, 0, 0, 1);
	iLocal_1508[7] = TASK::CREATE_SCENARIO_POINT(joaat("PROP_HUMAN_SEAT_CHAIR_CLEAN_RIFLE"), 2293.5f, 1464.59f, 82.65f, 173.4054f, 0, 0, 1);
	iLocal_1508[8] = TASK::CREATE_SCENARIO_POINT(joaat("PROP_HUMAN_SEAT_CHAIR_CLEAN_RIFLE"), 2278.08f, 1455.94f, 83.45f, 314.8428f, 0, 0, 1);
}

void func_618()
{
	Local_442[0 /*20*/].f_4 = joaat("G_M_M_UNIINBRED_01");
	Local_442[0 /*20*/].f_14 = { 2411.931f, 1241.544f, 104.3823f };
	Local_442[0 /*20*/].f_17 = 86.5784f;
	Local_442[1 /*20*/].f_4 = joaat("G_M_M_UNIINBRED_01");
	Local_442[1 /*20*/].f_14 = { 2414.286f, 1241.526f, 104.6392f };
	Local_442[1 /*20*/].f_17 = 85.7033f;
	Local_442[2 /*20*/].f_4 = joaat("A_M_M_UNICORPSE_01");
	Local_442[2 /*20*/].f_14 = { 2415.007f, 1241.459f, 104.7344f };
	Local_442[2 /*20*/].f_17 = 79.3536f;
	Local_503[0 /*20*/].f_4 = joaat("G_M_M_UNIINBRED_01");
	Local_503[0 /*20*/].f_14 = { 2352.919f, 1395.499f, 105.1887f };
	Local_503[0 /*20*/].f_17 = 64.6683f;
	Local_503[1 /*20*/].f_4 = joaat("G_M_M_UNIINBRED_01");
	Local_503[1 /*20*/].f_14 = { 2346.936f, 1411.364f, 100.0191f };
	Local_503[1 /*20*/].f_17 = 40.3002f;
	Local_503[2 /*20*/].f_4 = joaat("G_M_M_UNIINBRED_01");
	Local_503[2 /*20*/].f_14 = { 2292.27f, 1461.801f, 82.1166f };
	Local_503[2 /*20*/].f_17 = 60.936f;
	Local_503[3 /*20*/].f_4 = joaat("G_M_M_UNIINBRED_01");
	Local_503[3 /*20*/].f_14 = { 2331.63f, 1433.21f, 90.32f };
	Local_503[3 /*20*/].f_17 = 167.62f;
	Local_503[4 /*20*/].f_4 = joaat("G_M_M_UNIINBRED_01");
	Local_503[4 /*20*/].f_14 = { 2331.12f, 1427.45f, 91.76f };
	Local_503[4 /*20*/].f_17 = 157.86f;
	Local_503[5 /*20*/].f_4 = joaat("G_M_M_UNIINBRED_01");
	Local_503[5 /*20*/].f_14 = { 2302.386f, 1455.368f, 82.2026f };
	Local_503[5 /*20*/].f_17 = 247.8788f;
	Local_503[6 /*20*/].f_4 = joaat("G_M_M_UNIINBRED_01");
	Local_503[6 /*20*/].f_14 = { 2325.28f, 1446.87f, 88.15f };
	Local_503[6 /*20*/].f_17 = 84.98f;
	Local_503[7 /*20*/].f_4 = joaat("G_M_M_UNIINBRED_01");
	Local_503[7 /*20*/].f_14 = { 2323.62f, 1447.03f, 87.74f };
	Local_503[7 /*20*/].f_17 = -41.26f;
	Local_664[0 /*20*/].f_4 = joaat("G_M_M_UNIINBRED_01");
	Local_664[0 /*20*/].f_14 = { 2311.399f, 1452.935f, 82.2291f };
	Local_664[0 /*20*/].f_17 = 93.4735f;
	Local_664[1 /*20*/].f_4 = joaat("G_M_M_UNIINBRED_01");
	Local_664[1 /*20*/].f_14 = { 2307.582f, 1450.937f, 82.2367f };
	Local_664[1 /*20*/].f_17 = 340.8616f;
	Local_664[2 /*20*/].f_4 = joaat("G_M_M_UNIINBRED_01");
	Local_664[2 /*20*/].f_14 = { 2305.648f, 1452.138f, 82.1684f };
	Local_664[2 /*20*/].f_17 = 295.9396f;
	Local_664[3 /*20*/].f_4 = joaat("G_M_M_UNIINBRED_01");
	Local_664[3 /*20*/].f_14 = { 2309.356f, 1454.641f, 82.2389f };
	Local_664[3 /*20*/].f_17 = 160.5205f;
	Local_745[0 /*20*/].f_4 = joaat("G_M_M_UNIINBRED_01");
	Local_745[0 /*20*/].f_14 = { 2293.428f, 1464.033f, 82.1256f };
	Local_745[0 /*20*/].f_17 = 174.0958f;
	Local_745[1 /*20*/].f_4 = joaat("G_M_M_UNIINBRED_01");
	Local_745[1 /*20*/].f_14 = { 2276.483f, 1456.899f, 83.0075f };
	Local_745[1 /*20*/].f_17 = 226.5174f;
	Local_745[2 /*20*/].f_4 = joaat("G_M_M_UNIINBRED_01");
	Local_745[2 /*20*/].f_14 = { 2274.675f, 1470.939f, 82.2561f };
	Local_745[2 /*20*/].f_17 = 86.9581f;
	Local_745[3 /*20*/].f_4 = joaat("G_M_M_UNIINBRED_01");
	Local_745[3 /*20*/].f_14 = { 2302.826f, 1479.864f, 82.9046f };
	Local_745[3 /*20*/].f_17 = 306.4085f;
	Local_745[4 /*20*/].f_4 = joaat("G_M_M_UNIINBRED_01");
	Local_745[4 /*20*/].f_14 = { 2305.794f, 1479.577f, 83.0297f };
	Local_745[4 /*20*/].f_17 = 60.2308f;
	Local_846[0 /*20*/].f_4 = joaat("G_M_M_UNIINBRED_01");
	Local_846[0 /*20*/].f_14 = { 2278.443f, 1465.612f, 82.1616f };
	Local_846[0 /*20*/].f_17 = 98.9427f;
	Local_867[0 /*20*/].f_4 = joaat("A_M_M_UNICORPSE_01");
	Local_867[0 /*20*/].f_14 = { 2307.536f, 1453.663f, 82.2312f };
	Local_867[0 /*20*/].f_17 = 223.2283f;
	Local_867[1 /*20*/].f_4 = joaat("A_M_M_UNICORPSE_01");
	Local_867[1 /*20*/].f_14 = { 2346.222f, 1412.141f, 99.6575f };
	Local_867[1 /*20*/].f_17 = 221.0187f;
	Local_867[2 /*20*/].f_4 = joaat("A_M_M_UNICORPSE_01");
	Local_867[2 /*20*/].f_14 = { 2352.12f, 1396.563f, 104.9306f };
	Local_867[2 /*20*/].f_17 = 60.0125f;
	Local_867[3 /*20*/].f_4 = joaat("A_M_M_UNICORPSE_01");
	Local_867[3 /*20*/].f_14 = { 2290.704f, 1464.011f, 82.1152f };
	Local_867[3 /*20*/].f_17 = 68.04f;
	Local_867[4 /*20*/].f_4 = joaat("A_M_M_UNICORPSE_01");
	Local_867[4 /*20*/].f_14 = { 2331.56f, 1432.13f, 90.53f };
	Local_867[4 /*20*/].f_17 = 160.8f;
}

void func_619()
{
	__LIB_13__::func_491(&(Local_1412[0 /*5*/]), 2359.742f, 1358.458f, 105.1064f, 355.1529f, 3, 2, 0, 0);
	__LIB_13__::func_491(&(Local_1412[1 /*5*/]), 2349.57f, 1366.8f, 105.18f, 36.9937f, 0, 0, 0, 0);
	__LIB_13__::func_491(&(Local_1412[2 /*5*/]), 2357.65f, 1365.83f, 105.29f, 7.6048f, 3, 0, 0, 0);
	__LIB_13__::func_491(&(Local_1412[3 /*5*/]), 2357.296f, 1400.272f, 104.3284f, 84.757f, 0, 0, 0, 0);
	__LIB_13__::func_491(&(Local_1412[4 /*5*/]), 2352.917f, 1409.253f, 101.1422f, 76.7733f, 1, 0, 0, 0);
	__LIB_13__::func_491(&(Local_1412[5 /*5*/]), 2339.122f, 1426.573f, 94.0789f, 126.8303f, 0, 0, 0, 0);
	__LIB_13__::func_491(&(Local_1412[6 /*5*/]), 2341.415f, 1427.673f, 95.1689f, 126.8303f, 0, 0, 0, 0);
	__LIB_13__::func_491(&(Local_1412[7 /*5*/]), 2333.297f, 1421.931f, 93.4925f, 78.6741f, 0, 2, 0, 0);
	__LIB_13__::func_491(&(Local_1412[8 /*5*/]), 2329.528f, 1435.006f, 88.7611f, 76.4456f, 1, 0, 0, 0);
	__LIB_13__::func_491(&(Local_1412[9 /*5*/]), 2323.614f, 1432.512f, 87.4182f, 33.1339f, 0, 0, 0, 0);
	__LIB_13__::func_491(&(Local_1412[10 /*5*/]), 2317.394f, 1439.262f, 84.3799f, 30.082f, 2, 0, 0, 0);
	__LIB_13__::func_491(&(Local_1412[11 /*5*/]), 2320.19f, 1452.858f, 84.9118f, 65.5735f, 1, 0, 0, 0);
	__LIB_13__::func_491(&(Local_1412[12 /*5*/]), 2313.361f, 1453.649f, 82.2315f, 49.9881f, 1, 0, 0, 0);
	__LIB_13__::func_491(&(Local_1412[13 /*5*/]), 2301.204f, 1453.158f, 82.4111f, 57.2229f, 0, 0, 0, 0);
	__LIB_13__::func_491(&(Local_1412[14 /*5*/]), 2300.472f, 1464.237f, 82.1014f, 66.4704f, 1, 0, 0, 0);
	__LIB_13__::func_491(&(Local_1412[15 /*5*/]), 2402.64f, 1222.82f, 100.67f, 2.8122f, 1, 2, 0, 0);
	__LIB_13__::func_491(&(Local_1412[16 /*5*/]), 2385.924f, 1287.159f, 114.0231f, 62.8863f, 1, 2, 0, 0);
}

int func_631(var uParam0)
{
	if (__LIB_13__::func_23(&(uParam0->f_206), "RDTC3_RSC1"))
	{
		__LIB_1__::func_683(&iLocal_1670, -2147483648);
		if (func_313(&Local_142, 7, vLocal_68.x, vLocal_68.y, vLocal_68.z, fLocal_71, 1, 0, 1, 0))
		{
			if (func_314(&iLocal_1150, uParam0, 1, 1, vLocal_72.x, vLocal_72.y, vLocal_72.z, fLocal_75) && func_315(&iLocal_1151, 7, 1, 1, vLocal_76.x, vLocal_76.y, vLocal_76.z, fLocal_79))
			{
				func_312();
				if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1691) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_1691, true, false)) && func_318())
				{
					func_323();
					return 1;
				}
			}
		}
	}
	else if (__LIB_13__::func_23(&(uParam0->f_206), "RDTC3_RSC2"))
	{
		__LIB_1__::func_683(&iLocal_1670, -2147483648);
		return 1;
	}
	else if (__LIB_13__::func_23(&(uParam0->f_206), "RDTC3_RSC3"))
	{
		__LIB_1__::func_683(&iLocal_1670, -2147483648);
		return 1;
	}
	else if (__LIB_13__::func_23(&(uParam0->f_206), "RDTC3_RSC4"))
	{
		if (__LIB_0__::func_27(iLocal_1672, 64))
		{
			if (!func_801(&uLocal_119))
			{
				return 0;
			}
		}
		__LIB_1__::func_683(&iLocal_1670, -2147483648);
		return 1;
	}
	else if (__LIB_13__::func_23(&(uParam0->f_206), "RDTC3_RSC5"))
	{
		__LIB_1__::func_683(&iLocal_1670, -2147483648);
		return 1;
	}
	return 0;
}

void func_633(var uParam0)
{
	int iVar0;
	if (__LIB_13__::func_23(uParam0, "RDTC3_RSC1"))
	{
		if (!PED::IS_PED_INJURED(Global_35))
		{
			WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
		}
		__LIB_1__::func_681(&iLocal_1670, -2147483648);
	}
	else if (__LIB_13__::func_23(uParam0, "RDTC3_RSC2"))
	{
		if (!PED::IS_PED_INJURED(Global_35))
		{
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				PED::_REMOVE_PED_FROM_MOUNT(Global_35, true, false);
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
			{
				PED::_0xE0B61ED8BB37712F(Global_35);
			}
		}
		if (!PED::IS_PED_INJURED(Local_142))
		{
			if (PED::IS_PED_ON_MOUNT(Local_142))
			{
				PED::_REMOVE_PED_FROM_MOUNT(Local_142, true, false);
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(Local_142, false))
			{
				PED::_0xE0B61ED8BB37712F(Local_142);
			}
			if (PED::IS_PED_GROUP_MEMBER(Local_142, __LIB_0__::func_110(), 0))
			{
				PED::REMOVE_PED_FROM_GROUP(Local_142);
			}
		}
		__LIB_1__::func_681(&iLocal_1670, -2147483648);
		__LIB_1__::func_681(&iLocal_1670, 2);
	}
	else if (__LIB_13__::func_23(uParam0, "RDTC3_RSC3"))
	{
		if (!PED::IS_PED_INJURED(Global_35))
		{
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				PED::_REMOVE_PED_FROM_MOUNT(Global_35, true, false);
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
			{
				PED::_0xE0B61ED8BB37712F(Global_35);
			}
			PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "Stealth", 0f, -1);
			PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "Cautious", 0f, -1);
		}
		if (!PED::IS_PED_INJURED(Local_142))
		{
			if (PED::IS_PED_ON_MOUNT(Local_142))
			{
				PED::_REMOVE_PED_FROM_MOUNT(Local_142, true, false);
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(Local_142, false))
			{
				PED::_0xE0B61ED8BB37712F(Local_142);
			}
			PED::_SET_PED_BLACKBOARD_FLOAT(Local_142, "Stealth", 0f, -1);
			PED::_SET_PED_BLACKBOARD_FLOAT(Local_142, "Cautious", 0f, -1);
		}
		__LIB_1__::func_681(&iLocal_1670, -2147483648);
		__LIB_1__::func_681(&iLocal_1670, 2);
	}
	else if (__LIB_13__::func_23(uParam0, "RDTC3_RSC4"))
	{
		if (!PED::IS_PED_INJURED(Global_35))
		{
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				PED::_REMOVE_PED_FROM_MOUNT(Global_35, false, false);
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
			{
				PED::_0xE0B61ED8BB37712F(Global_35);
			}
		}
		STREAMING::_REMOVE_IMAP(-2117963426);
		STREAMING::_REMOVE_IMAP(1537844205);
		STREAMING::_REMOVE_IMAP(-1766409506);
		STREAMING::_REMOVE_IMAP(883152450);
		if (PATHFIND::_0x5AC0944C156E5F44("nav_dutch3"))
		{
			PATHFIND::_0x527B97C203BB8606("nav_dutch3");
		}
		iVar0 = 0;
		while (iVar0 < iLocal_1504)
		{
			__LIB_8__::func_863(&(iLocal_1504[iVar0]), 0, 1, 1);
			iVar0++;
		}
		STREAMING::_REQUEST_IMAP(1122583474);
		__LIB_1__::func_681(&iLocal_1670, 268435456);
		__LIB_1__::func_681(&iLocal_1670, -2147483648);
		__LIB_1__::func_681(&iLocal_1670, 2);
		__LIB_1__::func_681(&iLocal_1670, 4);
		__LIB_1__::func_681(&iLocal_1670, 2048);
		__LIB_1__::func_681(&iLocal_1670, 4096);
		__LIB_1__::func_681(&iLocal_1670, 1024);
	}
	else if (__LIB_13__::func_23(uParam0, "RDTC3_RSC5"))
	{
		MISC::_SET_WEATHER_TYPE(joaat("MISTY"), true, true, false, 0f, false);
		GRAPHICS::_0x5199405EABFBD7F0("ChapterTitle_IntroCh06");
		if (!PED::IS_PED_INJURED(Global_35))
		{
			WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
		}
		if (!PED::IS_PED_INJURED(Local_122))
		{
		}
		__LIB_1__::func_681(&iLocal_1670, 268435456);
		__LIB_1__::func_681(&iLocal_1670, -2147483648);
		__LIB_1__::func_681(&iLocal_1670, 2);
	}
	else if (__LIB_13__::func_23(uParam0, "RDTC3_RSC5B"))
	{
		if (!PED::IS_PED_INJURED(Global_35))
		{
			WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
		}
		__LIB_1__::func_971(0);
		__LIB_1__::func_681(&iLocal_1670, 268435456);
		__LIB_1__::func_681(&iLocal_1670, -2147483648);
		__LIB_1__::func_681(&iLocal_1670, 2);
	}
}

int func_635(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	if (__LIB_13__::func_23(&(uParam0->f_206), "RDTC3_RSC1"))
	{
		STREAMING::_REQUEST_SCENARIO_TYPE(joaat("WORLD_HUMAN_STERNGUY_IDLES"), 15, 0, 0);
		if (!__LIB_0__::func_27(iLocal_1670, 4))
		{
			if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_206.f_348) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_206.f_348, false)) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(uParam0->f_206.f_348) > 0.05f)
			{
				func_312();
				if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1691) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_1691, true, false)) && func_318())
				{
					if (func_313(&Local_142, 7, vLocal_68.x, vLocal_68.y, vLocal_68.z, fLocal_71, 1, 0, 1, 0))
					{
						func_323();
						func_320(&Local_142, 1, 0, 0);
						__LIB_1__::func_683(&iLocal_1670, 4);
					}
				}
			}
		}
		if (!__LIB_0__::func_27(iLocal_1670, 2))
		{
			if (__LIB_0__::func_27(iLocal_1670, 4))
			{
				if (func_314(&iLocal_1150, uParam0, 1, 1, vLocal_72.x, vLocal_72.y, vLocal_72.z, fLocal_75) && func_315(&iLocal_1151, 7, 1, 1, vLocal_76.x, vLocal_76.y, vLocal_76.z, fLocal_79))
				{
					__LIB_1__::func_683(&iLocal_1670, 2);
				}
			}
		}
		if (__LIB_13__::func_521(&(uParam0->f_206), Global_35, "ARTHUR", 0, 1, 1))
		{
			PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 17.5481f, false, false);
			if (!PED::IS_PED_INJURED(Global_35))
			{
				WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
			}
		}
		if (__LIB_13__::func_521(&(uParam0->f_206), Local_122, "Dutch", 0, 1, 1))
		{
			if (!PED::IS_PED_INJURED(Local_122))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_122, true);
				TASK::_TASK_START_SCENARIO_IN_PLACE(Local_122, joaat("WORLD_HUMAN_STERNGUY_IDLES"), 0, true, 0, -1f, false);
				func_320(&Local_122, 9, 0, 0);
			}
		}
		if (__LIB_13__::func_14(&(uParam0->f_206), 1))
		{
		}
	}
	else if (__LIB_13__::func_23(&(uParam0->f_206), "RDTC3_RSC2"))
	{
		CLOCK::SET_CLOCK_TIME(22, 0, 0);
		func_1072(&(uParam0->f_206));
		if (!__LIB_0__::func_27(iLocal_1670, 2))
		{
			iVar0 = PED::_GET_LAST_MOUNT(Global_35);
			iVar1 = PED::_GET_LAST_MOUNT(Local_142);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				if (__LIB_1__::func_205(iVar0, iLocal_1240[20], 1, 0))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar0, false, true);
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iVar0, vLocal_44, fLocal_47, true, false, true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
					TASK::TASK_STAND_STILL(iVar0, -1);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				if (__LIB_1__::func_205(iVar1, iLocal_1240[20], 1, 0))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar1, false, true);
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iVar1, vLocal_48, fLocal_51, true, false, true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, true);
					TASK::TASK_STAND_STILL(iVar1, -1);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				if (ENTITY::IS_ENTITY_IN_VOLUME(iVar2, iLocal_1240[20], true, 0))
				{
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iVar2, vLocal_52, fLocal_55, true, false, true);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar2, 0f);
				}
			}
			__LIB_1__::func_683(&iLocal_1670, 2);
		}
		if (__LIB_13__::func_521(&(uParam0->f_206), Global_35, "ARTHUR", 0, 1, 1))
		{
			if (!PED::IS_PED_INJURED(Global_35))
			{
				PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "Stealth", 1f, -1);
				PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "Cautious", 1f, -1);
				if (ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_206.f_348) || __LIB_0__::func_27(iLocal_1672, 32))
				{
					__LIB_4__::func_7(Global_35, joaat("WEAPON_THROWN_DYNAMITE"), 3, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 6000, 18.2501f, true, false);
				}
			}
		}
		if (ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_206.f_348, "ARTHUR"))
		{
			if (!__LIB_0__::func_27(iLocal_1672, 32))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, 2357.702f, 1314.142f, 109.4986f, 356.6348f, true, false, true);
				PED::FORCE_PED_MOTION_STATE(Global_35, -1202720456, false, 0, false);
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 3000, 0f, true, false);
				PED::_0x2208438012482A1A(Global_35, true, false);
				PED::FORCE_PED_MOTION_STATE(Local_142, -1202720456, false, 0, false);
				PED::_0x2208438012482A1A(Local_142, true, false);
			}
		}
		if (__LIB_13__::func_521(&(uParam0->f_206), Local_142, "CHARLESSMITH", 0, 1, 1))
		{
			if (!PED::IS_PED_INJURED(Local_142))
			{
				if (!__LIB_0__::func_27(iLocal_1672, 32))
				{
					PED::_SET_PED_BLACKBOARD_FLOAT(Local_142, "Stealth", 1f, -1);
					PED::_SET_PED_BLACKBOARD_FLOAT(Local_142, "Cautious", 1f, -1);
				}
				func_320(&Local_142, 34, 0, 0);
			}
		}
		if (__LIB_13__::func_14(&(uParam0->f_206), 1))
		{
		}
	}
	else if (__LIB_13__::func_23(&(uParam0->f_206), "RDTC3_RSC3"))
	{
		iLocal_116 = 5;
		if (bLocal_1398)
		{
			bLocal_1398 = false;
		}
		CLOCK::SET_CLOCK_TIME(5, 30, 0);
		if (!__LIB_0__::func_27(iLocal_1670, 2))
		{
			iVar4 = PED::_GET_LAST_MOUNT(Global_35);
			iVar5 = PED::_GET_LAST_MOUNT(Local_142);
			if (ENTITY::DOES_ENTITY_EXIST(iVar4) && !ENTITY::IS_ENTITY_DEAD(iVar4))
			{
				if (__LIB_1__::func_205(iVar4, iLocal_1240[21], 1, 0))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar4, false, true);
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iVar4, vLocal_56, fLocal_59, true, false, true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar4, true);
					TASK::TASK_STAND_STILL(iVar4, -1);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar5) && !ENTITY::IS_ENTITY_DEAD(iVar5))
			{
				PED::DELETE_PED(&iVar5);
			}
			iVar3 = 0;
			while (iVar3 < Local_846)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_846[iVar3 /*20*/]))
				{
					if (ENTITY::IS_ENTITY_IN_VOLUME(Local_846[iVar3 /*20*/], iLocal_1240[23], false, 0) || ENTITY::IS_ENTITY_IN_VOLUME(Local_846[iVar3 /*20*/], iLocal_1240[24], false, 0))
					{
						__LIB_0__::func_490(&(Local_846[iVar3 /*20*/]), 0);
					}
				}
				iVar3++;
			}
			iVar3 = 0;
			while (iVar3 < Local_745)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_745[iVar3 /*20*/]))
				{
					if (ENTITY::IS_ENTITY_IN_VOLUME(Local_745[iVar3 /*20*/], iLocal_1240[23], false, 0) || ENTITY::IS_ENTITY_IN_VOLUME(Local_745[iVar3 /*20*/], iLocal_1240[24], false, 0))
					{
						__LIB_0__::func_490(&(Local_745[iVar3 /*20*/]), 0);
					}
				}
				iVar3++;
			}
			iVar3 = 0;
			while (iVar3 < Local_503)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_503[iVar3 /*20*/]))
				{
					if (ENTITY::IS_ENTITY_IN_VOLUME(Local_503[iVar3 /*20*/], iLocal_1240[23], false, 0) || ENTITY::IS_ENTITY_IN_VOLUME(Local_503[iVar3 /*20*/], iLocal_1240[24], false, 0))
					{
						__LIB_0__::func_490(&(Local_503[iVar3 /*20*/]), 0);
					}
				}
				iVar3++;
			}
			iVar3 = 0;
			while (iVar3 < Local_664)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_664[iVar3 /*20*/]))
				{
					if (ENTITY::IS_ENTITY_IN_VOLUME(Local_664[iVar3 /*20*/], iLocal_1240[23], false, 0) || ENTITY::IS_ENTITY_IN_VOLUME(Local_664[iVar3 /*20*/], iLocal_1240[24], false, 0))
					{
						__LIB_0__::func_490(&(Local_664[iVar3 /*20*/]), 0);
					}
				}
				iVar3++;
			}
			MISC::_0x2FCD528A397E5C88(iLocal_1240[23], 3);
			MISC::_0x2FCD528A397E5C88(iLocal_1240[24], 3);
			__LIB_1__::func_683(&iLocal_1670, 2);
		}
		if (__LIB_13__::func_521(&(uParam0->f_206), Global_35, "ARTHUR", 0, 1, 1))
		{
			if (!PED::IS_PED_INJURED(Global_35))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_1155) && !ENTITY::IS_ENTITY_DEAD(iLocal_1155))
				{
					PED::_0x06D26A96CA1BCA75(iLocal_1155, 3, 0f, 0);
					PED::_0x1F8215D0E446F593(iLocal_1155, 0f, 1);
				}
			}
		}
		PED::_0x06D26A96CA1BCA75(iLocal_1155, 3, 0f, 0);
		PED::_0x06D26A96CA1BCA75(iLocal_1155, 1, 0f, 0);
		PED::_0x06D26A96CA1BCA75(iLocal_1155, 4, 0f, 0);
		PED::_0x1F8215D0E446F593(iLocal_1155, 0f, 1);
		if (__LIB_13__::func_521(&(uParam0->f_206), Local_162, "MEREDITH", 0, 1, 1))
		{
			if (!PED::IS_PED_INJURED(Local_162))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_162, true);
				PED::_SET_PED_BLACKBOARD_BOOL(Local_162, "SadPassenger", true, -1);
				if ((ENTITY::DOES_ENTITY_EXIST(iLocal_1155) && !ENTITY::IS_ENTITY_DEAD(iLocal_1155)) && !__LIB_0__::func_394(Local_162, iLocal_1155, 0))
				{
				}
				func_320(&Local_162, 8, 0, 0);
			}
		}
		if (__LIB_13__::func_521(&(uParam0->f_206), Local_142, "CHARLESSMITH", 0, 1, 1))
		{
			if (!PED::IS_PED_INJURED(Local_142))
			{
				PED::SET_PED_CONFIG_FLAG(Local_142, 512, false);
				__LIB_9__::func_203(7, 1, 1, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
			}
		}
		if (ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_206.f_348))
		{
			CLOCK::SET_CLOCK_TIME(5, 30, 0);
		}
	}
	else if (__LIB_13__::func_23(&(uParam0->f_206), "RDTC3_RSC4"))
	{
		if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(uParam0->f_206.f_348) < 0.9f)
		{
			CLOCK::SET_CLOCK_TIME(8, 19, 0);
		}
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		__LIB_5__::func_521(0.5f);
		if (__LIB_0__::func_27(iLocal_1675, 16384))
		{
			func_801(&uLocal_119);
		}
		if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_206.f_348) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_206.f_348, false)) && ANIMSCENE::_0x8D81E7824B7753F7(uParam0->f_206.f_348, "RDTC3_RSC4_P2A1_T02_Shot_1", 1))
		{
			if (!__LIB_0__::func_27(iLocal_1675, 16384))
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(uParam0->f_206.f_348) > 0.32f)
				{
					STREAMING::PREFETCH_SRL("script@cme@dutch3_cme_annesburg_shot");
					STREAMING::_0xEF1A8A484118735E();
					STREAMING::_0xAE00387E53B1E9FC();
					__LIB_1__::func_683(&iLocal_1675, 16384);
				}
			}
		}
		func_1072(&(uParam0->f_206));
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_206.f_348))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_206.f_348, false))
			{
				if (__LIB_0__::func_27(iLocal_1672, 128))
				{
					if (!__LIB_0__::func_27(iLocal_1675, 128))
					{
						__LIB_9__::func_952(joaat("RCM_DUTCH_3_REWARD"), 0, 1065353216 /* Float: 1f */, 1, 0, 0);
						func_310(&iLocal_1675, 128);
					}
				}
				else if (__LIB_0__::func_27(iLocal_1672, 256))
				{
					if (!__LIB_0__::func_27(iLocal_1675, 256))
					{
						__LIB_0__::func_105(1);
						__LIB_10__::func_525(12, 0, 0, 0, iLocal_182, 0, 1065353216 /* Float: 1f */, 0);
						func_310(&iLocal_1675, 256);
					}
				}
			}
		}
		if (!__LIB_0__::func_27(iLocal_1670, 2))
		{
			if (iLocal_112 == 1)
			{
				iVar6 = PED::_GET_LAST_MOUNT(Global_35);
			}
			else
			{
				iVar6 = iLocal_1150;
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar6) && !ENTITY::IS_ENTITY_DEAD(iVar6))
			{
				if (__LIB_1__::func_205(iVar6, iLocal_1240[22], 1, 0))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar6, false, true);
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iVar6, vLocal_60, fLocal_63, true, false, true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar6, true);
					TASK::TASK_STAND_STILL(iVar6, -1);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar7) && !ENTITY::IS_ENTITY_DEAD(iVar7))
			{
				if (ENTITY::IS_ENTITY_IN_VOLUME(iVar7, iLocal_1240[22], true, 0))
				{
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iVar7, vLocal_60, fLocal_63, true, false, true);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar7, 0f);
				}
			}
			__LIB_1__::func_683(&iLocal_1670, 2);
		}
		switch (iLocal_112)
		{
			case 0:
				if (ENTITY::DOES_ENTITY_EXIST(PED::_GET_LAST_MOUNT(Global_35)) && !ENTITY::IS_ENTITY_DEAD(PED::_GET_LAST_MOUNT(Global_35)))
				{
					iLocal_1155 = PED::_GET_LAST_MOUNT(Global_35);
				}
				else
				{
					PED::DELETE_PED(&(uLocal_1152[0]));
					if (func_330(&(uLocal_1152[0]), joaat("A_C_HORSE_MURFREEBROOD_MANGE_01"), 2928.064f, 1299.785f, 43.5356f, 214.0152f, joaat("REL_NO_RELATIONSHIP"), 0, 0, 0, -2, 0, joaat("WEAPON_UNARMED"), joaat("META_OUTFIT_DEFAULT")))
					{
						iLocal_1155 = uLocal_1152[0];
						PED::_0xED1C764997A86D5A(Global_35, uLocal_1152[0]);
						__LIB_1__::func_681(&iLocal_1670, 2);
					}
				}
				break;
			case 1:
				if (ENTITY::DOES_ENTITY_EXIST(PED::_GET_LAST_MOUNT(Global_35)) && !ENTITY::IS_ENTITY_DEAD(PED::_GET_LAST_MOUNT(Global_35)))
				{
					iLocal_1155 = iLocal_1150;
				}
				else if (func_314(&iLocal_1150, uParam0, 1, 1, 2928.064f, 1299.785f, 43.5356f, 214.0152f))
				{
					iLocal_1155 = iLocal_1150;
					PED::_0xED1C764997A86D5A(Global_35, iLocal_1150);
					__LIB_1__::func_681(&iLocal_1670, 2);
				}
				break;
		}
		if (__LIB_13__::func_521(&(uParam0->f_206), Global_35, "ARTHUR", 0, 1, 1))
		{
			bLocal_1398 = true;
			func_335(Global_35, PED::_GET_LAST_MOUNT(Global_35));
		}
	}
	else if (__LIB_13__::func_23(&(uParam0->f_206), "RDTC3_RSC5") && MISC::ARE_STRINGS_EQUAL(&(uParam0->f_206.f_344), "RDTC3_RSC5"))
	{
		if (!__LIB_0__::func_27(iLocal_1675, 8192))
		{
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1702))
			{
				iLocal_1702 = ANIMSCENE::_CREATE_ANIM_SCENE("script@timelapse@buck_coyote@dutch3", 0, "pbl_1", false, true);
				ANIMSCENE::LOAD_ANIM_SCENE(iLocal_1702);
				__LIB_1__::func_683(&iLocal_1675, 8192);
			}
		}
		if ((ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_1702, true, false) && !ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_1702, "pbl_1")) && !ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_1702, "pbl_2"))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_1702, "pbl_1");
			ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_1702, "pbl_2");
		}
		if (!__LIB_0__::func_27(iLocal_1675, 4096))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("VISIBLETOSCRIPT")) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 508284207))
			{
				AUDIO::_0x6339C1EA3979B5F7("Chapter_06", "Chapter_Screen_Scenes");
				GRAPHICS::_0xB958D97A0DFAA0C2("ChapterTitle_IntroCh06");
				GRAPHICS::ANIMPOSTFX_PLAY("ChapterTitle_IntroCh06");
				__LIB_1__::func_683(&iLocal_1675, 4096);
			}
		}
		if (__LIB_13__::func_521(&(uParam0->f_206), Global_35, "ARTHUR", 0, 1, 1))
		{
		}
		if (__LIB_13__::func_521(&(uParam0->f_206), iLocal_302, "MollyOshea", 0, 1, 1))
		{
			__LIB_9__::func_203(16, 0, 1, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
			__LIB_13__::func_569(16, 1);
		}
		if (__LIB_13__::func_521(&(uParam0->f_206), Local_122, "Dutch", 0, 1, 1))
		{
			if (!PED::IS_PED_INJURED(Local_122))
			{
				__LIB_9__::func_203(0, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
			}
		}
		if (__LIB_13__::func_521(&(uParam0->f_206), iLocal_382, "Tilly", 0, 1, 1))
		{
			if (!PED::IS_PED_INJURED(iLocal_382))
			{
				__LIB_9__::func_203(22, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
			}
		}
		if (__LIB_13__::func_521(&(uParam0->f_206), iLocal_402, "Karen", 0, 1, 1))
		{
			if (!PED::IS_PED_INJURED(iLocal_402))
			{
				__LIB_9__::func_203(20, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
			}
		}
		if (__LIB_13__::func_521(&(uParam0->f_206), iLocal_422, "Uncle", 0, 1, 1))
		{
			if (!PED::IS_PED_INJURED(iLocal_422))
			{
				__LIB_9__::func_203(4, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
			}
		}
		if (__LIB_13__::func_521(&(uParam0->f_206), iLocal_342, "MrsAdler", 0, 1, 1))
		{
			if (!PED::IS_PED_INJURED(iLocal_342))
			{
				__LIB_9__::func_203(11, 0, 1, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
			}
		}
		if (__LIB_13__::func_521(&(uParam0->f_206), iLocal_282, "MicahBell", 0, 1, 1))
		{
			if (!PED::IS_PED_INJURED(iLocal_282))
			{
				__LIB_9__::func_203(6, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
			}
		}
		if (__LIB_13__::func_521(&(uParam0->f_206), iLocal_262, "Marybeth", 0, 1, 1))
		{
			if (!PED::IS_PED_INJURED(iLocal_262))
			{
				__LIB_9__::func_203(15, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
			}
		}
		if (__LIB_13__::func_521(&(uParam0->f_206), iLocal_322, "MrPearson", 0, 1, 1))
		{
			if (!PED::IS_PED_INJURED(iLocal_322))
			{
				__LIB_9__::func_203(17, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
			}
		}
		if (__LIB_13__::func_521(&(uParam0->f_206), iLocal_222, "BillWilliamson", 0, 1, 1))
		{
			if (!PED::IS_PED_INJURED(iLocal_222))
			{
				__LIB_9__::func_203(3, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
			}
		}
		if (__LIB_13__::func_521(&(uParam0->f_206), Local_142, "CharlesSmith", 0, 1, 1))
		{
			if (!PED::IS_PED_INJURED(Local_142))
			{
				__LIB_9__::func_203(7, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
			}
		}
		if (__LIB_13__::func_521(&(uParam0->f_206), iLocal_242, "JavierEscuella", 0, 1, 1))
		{
			if (!PED::IS_PED_INJURED(iLocal_242))
			{
				__LIB_9__::func_203(2, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
			}
		}
		if (__LIB_13__::func_521(&(uParam0->f_206), iLocal_202, "AbigailRoberts", 0, 1, 1))
		{
			if (!PED::IS_PED_INJURED(iLocal_202))
			{
				__LIB_9__::func_203(13, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
			}
		}
		if (__LIB_13__::func_521(&(uParam0->f_206), iLocal_362, "SusanGrimshaw", 0, 1, 1))
		{
			if (!PED::IS_PED_INJURED(iLocal_362))
			{
				__LIB_9__::func_203(19, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
			}
		}
		if (__LIB_13__::func_14(&(uParam0->f_206), 1))
		{
		}
		__LIB_11__::func_15(Global_1347702[68 /*49*/].f_15);
		if (!__LIB_0__::func_27(iLocal_1670, 268435456))
		{
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_206.f_348))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(uParam0->f_206.f_348) || ((ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_206.f_348, false) && ANIMSCENE::_0x1F0E401031E20146(uParam0->f_206.f_348, "MultiStart")) && ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_206.f_348) >= 187f))
				{
					if (!bLocal_1165)
					{
						__LIB_10__::func_957();
						bLocal_1165 = true;
					}
					if (__LIB_13__::func_499(1, 0, 0))
					{
						__LIB_1__::func_683(&iLocal_1670, 268435456);
					}
				}
			}
		}
	}
	else if (__LIB_13__::func_23(&(uParam0->f_206), "RDTC3_RSC5B") && MISC::ARE_STRINGS_EQUAL(&(uParam0->f_206.f_344), "RDTC3_RSC5B"))
	{
		if (bLocal_1398)
		{
			bLocal_1398 = false;
		}
		CLOCK::SET_CLOCK_TIME(8, 30, 0);
		if (!__LIB_0__::func_27(iLocal_1670, 2))
		{
			if (func_314(&iLocal_1150, uParam0, 1, 1, 2373.675f, 1339.283f, 105.2327f, 134.6174f))
			{
				if (!PED::IS_PED_INJURED(iLocal_1150))
				{
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_1150, 2373.675f, 1339.283f, 105.2327f, 134.6174f, true, false, true);
					ENTITY::_0x9587913B9E772D29(iLocal_1150, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_1150, true);
					TASK::TASK_STAND_STILL(iLocal_1150, -1);
				}
				__LIB_1__::func_683(&iLocal_1670, 2);
			}
		}
		if (__LIB_13__::func_521(&(uParam0->f_206), Global_35, "ARTHUR", 0, 1, 1))
		{
			MISC::CLEAR_BIT(&(Global_1956580.f_1), 5);
			iVar8 = __LIB_0__::func_398(1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar8))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar8, true);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iVar8, 2365.167f, 1329.204f, 104.9604f, 33.2344f, true, false, true);
				TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(iVar8, 2365.167f, 1329.204f, 104.9604f, 3f, 0, false, false, false, false);
			}
		}
	}
	return 1;
}

void func_637(int iParam0, int iParam1, float fParam2, float fParam3, float fParam4, int iParam5)
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
					func_1080(&iParam0, iVar3, &iVar8, 1, -142743235);
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

int func_640(int iParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
					if (func_1083(iParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_640(iParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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
					__LIB_18__::func_616(iParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
					__LIB_12__::func_951(iParam1, uParam3);
					if (func_1090(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
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
					__LIB_18__::func_617(*iParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_1090(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					__LIB_18__::func_616(iParam0, __LIB_3__::func_598(iParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
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
					else if (!__LIB_13__::func_571(iParam1))
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
					__LIB_18__::func_617(*iParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_1090(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					__LIB_18__::func_616(iParam0, __LIB_3__::func_598(iParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
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

int func_664(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1[5];
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	if (!__LIB_0__::func_49(iParam0))
	{
		return 0;
	}
	iVar0 = CLOCK::GET_CLOCK_HOURS() + 1;
	if (iVar0 == 25)
	{
		iVar0 = 0;
	}
	iVar7 = 0;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 1:
					if (__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
					{
						iVar1[0] = -695701225;
					}
					else
					{
						iVar1[0] = 404503428;
					}
					break;
				default:
					iVar1[0] = 178615350;
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar1[3] = 1818898449;
					iVar7 = 4;
					break;
				case 1:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				case 2:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = 1818898449;
					iVar7 = 3;
					break;
				case 3:
					if (__LIB_0__::func_252(iVar0, 9, 11))
					{
						iVar1[0] = 283037683;
					}
					else
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar1[2] = -1862464078;
						iVar7 = 3;
					}
					if (!bParam2)
					{
						iVar1[0] = -268604689;
					}
					break;
				case 4:
					iVar1[0] = -268604689;
					break;
				case 5:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 6:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar1[3] = 1818898449;
					iVar7 = 4;
					break;
				case 7:
					iVar1[0] = -268604689;
					iVar1[0] = -1632589543;
					iVar1[1] = 1818898449;
					iVar7 = 3;
					break;
				case 8:
					iVar1[0] = -268604689;
					break;
				case 9:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 10:
					if (__LIB_1__::func_25(Global_1347702[63 /*49*/].f_15, 1) || __LIB_1__::func_44(Global_1347702[63 /*49*/].f_15))
					{
						iVar1[0] = -268604689;
					}
					else
					{
						iVar1[0] = -310473775;
					}
					break;
				case 11:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 13:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				case 14:
					iVar1[0] = -268604689;
					break;
				case 15:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 16:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 17:
					if (__LIB_0__::func_252(iVar0, 9, 12))
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar1[2] = -1862464078;
						iVar7 = 3;
					}
					else
					{
						iVar1[0] = -268604689;
					}
					break;
				case 18:
					if (!__LIB_1__::func_25(Global_1835011[14 /*74*/].f_1, 1))
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar7 = 2;
					}
					else if (__LIB_0__::func_273(18, 134217728, 1))
					{
						iVar1[0] = 961676983;
					}
					else
					{
						iVar1[0] = -1587546924;
					}
					break;
				case 19:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 20:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 21:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 22:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				case 23:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -23947011;
					iVar7 = 3;
					break;
				default:
					iVar1[0] = -268604689;
					break;
			}
			break;
		case 2:
		case 3:
			switch (iParam0)
			{
				case 0:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 1:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 2:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 3:
					if (__LIB_0__::func_252(iVar0, 9, 11))
					{
						iVar1[0] = 283037683;
					}
					else
					{
						iVar1[0] = -922193456;
						iVar1[1] = -2040275819;
						iVar1[2] = -1114682645;
						iVar1[3] = -1414977761;
						iVar7 = 4;
					}
					if (!bParam2)
					{
						iVar1[0] = -922193456;
					}
					break;
				case 4:
					iVar1[0] = -922193456;
					break;
				case 5:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 6:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 7:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 8:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 283037683;
					iVar1[3] = 1744281750;
					iVar7 = 4;
					break;
				case 9:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar1[4] = 1744281750;
					iVar7 = 5;
					break;
				case 10:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 11:
					if (__LIB_1__::func_25(Global_1347702[134 /*49*/].f_15, 1) || __LIB_1__::func_44(Global_1347702[134 /*49*/].f_15))
					{
						iVar1[0] = -2040275819;
						iVar1[1] = 1205492208;
						iVar7 = 2;
					}
					else
					{
						iVar1[0] = -922193456;
					}
					break;
				case 13:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 283037683;
					iVar1[3] = 1744281750;
					iVar7 = 4;
					break;
				case 14:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 15:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 16:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 17:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 18:
					iVar1[0] = -922193456;
					break;
				case 19:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 20:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 21:
					iVar1[0] = -922193456;
					iVar1[1] = 1744281750;
					iVar7 = 2;
					break;
				case 22:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 23:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 1744281750;
					iVar7 = 3;
					break;
				case 26:
					iVar1[0] = -268604689;
					break;
				default:
					iVar1[0] = -922193456;
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 2:
					if (__LIB_1__::func_25(Global_1835011[38 /*74*/].f_1, 1))
					{
						iVar1[0] = -1559986688;
					}
					else
					{
						iVar1[0] = -1874208704;
					}
					break;
				default:
					iVar1[0] = 1593315648;
					break;
			}
			break;
		case 5:
		case 6:
			switch (iParam0)
			{
				case 0:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 1:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 2:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 3:
					if (__LIB_0__::func_252(iVar0, 9, 11))
					{
						iVar1[0] = 283037683;
					}
					else
					{
						iVar1[0] = -922193456;
						iVar1[1] = -2040275819;
						iVar1[2] = -1114682645;
						iVar1[3] = -1414977761;
						iVar7 = 4;
					}
					if (!bParam2)
					{
						iVar1[0] = -922193456;
					}
					break;
				case 4:
					iVar1[0] = -922193456;
					break;
				case 6:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 7:
					iVar1[0] = 1295334688;
					iVar7 = 1;
					break;
				case 11:
					iVar1[0] = -2051275045;
					break;
				case 13:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 283037683;
					iVar1[3] = 1744281750;
					iVar7 = 4;
					break;
				case 14:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 15:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 16:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 17:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 18:
					iVar1[0] = -922193456;
					break;
				case 19:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 20:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 21:
					iVar1[0] = -922193456;
					iVar1[1] = 1744281750;
					iVar7 = 2;
					break;
				case 22:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					Jump @3088; //curOff = 3023
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 1744281750;
					iVar7 = 3;
					Jump @3088; //curOff = 3059
					iVar1[0] = -268604689;
					Jump @3088; //curOff = 3072
					iVar1[0] = -922193456;
					Jump @3416; //curOff = 3088
					switch (iParam0)
					{
						case 13:
							iVar1[0] = -1341683964;
							iVar1[1] = 876797088;
							iVar7 = 2;
							break;
						case 14:
							iVar1[0] = -426171916;
							iVar1[1] = 1484386316;
							iVar1[2] = 1254970547;
							iVar7 = 3;
							break;
						case 4:
							if (__LIB_1__::func_198(joaat("CSTAG_FLOW_MAR8_POST"), 1) && !__LIB_1__::func_25(Global_1347702[1 /*49*/].f_15, 1))
							{
								iVar1[0] = -1155031950;
							}
							else
							{
								iVar1[0] = -1341683964;
							}
							break;
						default:
							iVar1[0] = -1341683964;
							break;
					}
					Jump @3416; //curOff = 3251
					switch (iParam0)
					{
						case 13:
							iVar1[0] = -1341683964;
							iVar1[1] = 876797088;
							iVar1[2] = 1484386316;
							iVar7 = 3;
							break;
						case 14:
							iVar1[0] = -1092189504;
							iVar1[1] = 80515440;
							iVar7 = 2;
							break;
						case 4:
							iVar1[0] = -1341683964;
							iVar1[1] = 867156718;
							iVar7 = 2;
							break;
						case 7:
							iVar1[0] = -1341683964;
							iVar1[1] = 1484386316;
							iVar7 = 2;
							break;
						default:
							iVar1[0] = -1341683964;
							break;
					}
					if (bParam3 && ENTITY::DOES_ENTITY_EXIST(__LIB_0__::func_271(iParam0)))
					{
						iVar10 = 0;
						while (iVar10 < iVar7)
						{
							if (iVar1[iVar10] == Global_40.f_4942[iParam0 /*60*/].f_3)
							{
								bVar9 = true;
								iVar8 = Global_40.f_4942[iParam0 /*60*/].f_3;
							}
							iVar10++;
						}
					}
					if (!bVar9)
					{
						iVar11 = 0;
						if (iVar7 > 0 && bParam2)
						{
							iVar11 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar7);
						}
						iVar8 = iVar1[iVar11];
					}
					if (!__LIB_1__::func_201(iParam0, iVar8))
					{
						iVar8 = Global_40.f_4942[iParam0 /*60*/].f_3;
					}
					return iVar8;
				}
int func_665(int iParam0, bool bParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
{
	vector3 vVar0;
	bool bVar3;
	int iVar4;
	int iVar5;
	if (!__LIB_0__::func_31(iParam0))
	{
		return 0;
	}
	vVar0.x = fParam3;
	vVar0.f_1 = fParam4;
	vVar0.f_2 = fParam5;
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
			if (func_1161(iParam0, vVar0, iParam13, 0, 1, iParam17, bParam20, -1, 1, 0))
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
				func_1163(Global_1360165[iParam0 /*1157*/], vVar0, fParam6, 2, 1073741824 /* Float: 2f */);
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

int func_667(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, float fParam12, bool bParam13, bool bParam14, bool bParam15, int iParam16)
{
	var uVar0;
	int iVar1;
	if (!__LIB_0__::func_49(iParam0))
	{
		return 0;
	}
	iVar1 = func_1172(&uVar0, iParam0, bParam1, bParam2, iParam3, iParam4, iParam5, bParam7, bParam8, iParam9, iParam10, iParam11, fParam12, bParam13, bParam14, bParam15, bParam6, iParam16);
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

int func_670(var uParam0, int iParam1, int iParam2, vector3 vParam3, float fParam6, bool bParam7, bool bParam8)
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 1;
	}
	else if (func_1174(uParam0, iParam1, iParam2))
	{
		if (ENTITY::DOES_ENTITY_EXIST(*uParam0) && !ENTITY::IS_ENTITY_DEAD(*uParam0))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(*uParam0))
			{
				ENTITY::DETACH_ENTITY(*uParam0, false, true);
			}
			PED::SET_PED_CAN_BE_TARGETTED(*uParam0, bParam7);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 233, bParam8);
			PED::SET_PED_KEEP_TASK(*uParam0, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(*uParam0, vParam3, fParam6, true, false, true);
			return 1;
		}
	}
	return 0;
}

int func_677(var uParam0, int iParam1, vector3 vParam2, vector3 vParam5, bool bParam8, bool bParam9, int iParam10)
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 1;
	}
	else
	{
		STREAMING::REQUEST_MODEL(iParam1, false);
		if (STREAMING::HAS_MODEL_LOADED(iParam1))
		{
			*uParam0 = OBJECT::CREATE_OBJECT(iParam1, vParam2, true, true, false, false, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam1);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(*uParam0, vParam2, false, true, true);
			ENTITY::SET_ENTITY_ROTATION(*uParam0, vParam5, 2, true);
			ENTITY::FREEZE_ENTITY_POSITION(*uParam0, bParam8);
			ENTITY::SET_ENTITY_INVINCIBLE(*uParam0, bParam9);
			if (iParam10 != -1)
			{
				ENTITY::SET_ENTITY_LOD_DIST(*uParam0, iParam10);
			}
			return 1;
		}
	}
	return 0;
}

void func_679(int iParam0, int iParam1, vector3 vParam2, float fParam5, char* sParam6, float fParam7, float fParam8, float fParam9, int iParam10, bool bParam11, int iParam12, bool bParam13)
{
	struct<15> Var0;
	if (!PED::IS_PED_INJURED(iParam0) && !PED::IS_PED_INJURED(iParam1))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0, false, true);
		if (!__LIB_0__::func_394(iParam0, iParam1, 0))
		{
			PED::_SET_PED_ON_MOUNT(iParam0, iParam1, -1, true);
		}
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam1, vParam2, fParam5, true, false, true);
		if (bParam13)
		{
			ENTITY::_0x9587913B9E772D29(iParam1, 0);
		}
		Var0.f_2 = -1;
		Var0.f_7 = -1;
		Var0.f_8 = -1082130432;
		Var0.f_12 = -1082130432;
		Var0.f_13 = 1;
		Var0.f_14 = -1082130432;
		Var0 = sParam6;
		Var0.f_1 = 0;
		Var0.f_3 = 4194312;
		Var0.f_13 = 0;
		Var0.f_12 = fParam9;
		Var0.f_14 = -1f;
		Var0.f_10 = fParam7;
		Var0.f_11 = fParam8;
		Var0.f_5 = 1;
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam1, true);
		TASK::TASK_FOLLOW_WAYPOINT_RECORDING_ADVANCED(iParam0, &Var0);
		PED::FORCE_PED_MOTION_STATE(iParam1, iParam10, bParam11, iParam12, false);
		PED::_0x2208438012482A1A(iParam1, true, true);
	}
}

void func_704(var uParam0)
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
			__LIB_4__::func_717(&(uParam0->f_416));
		}
		func_1203(&(uParam0->f_404), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_12__::func_706(uParam0, 0f, 0f, 0f);
		func_1205(uParam0);
		func_1206(uParam0);
		__LIB_12__::func_901(uParam0, 0f, 0f, 0f, 0, 0);
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

bool func_716(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
				func_716(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
						__LIB_10__::func_706(38, COLLECTION::_0x13AAECDA43318BFE(-2076669067, iVar6), COLLECTION::_0xD52D20B0C76BB26D(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						__LIB_10__::func_706(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
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
		__LIB_13__::func_72(28);
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
			__LIB_13__::func_251(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1718133314))
		{
			__LIB_13__::func_252(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1738650224))
		{
			__LIB_13__::func_253(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, 949916894))
		{
			__LIB_13__::func_254(iParam0);
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
			__LIB_13__::func_255(iParam0, iParam1);
			__LIB_1__::func_759(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, -1697809989))
		{
			__LIB_13__::func_572(iParam0, 0, 0, 0);
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
						func_716(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_716(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_716(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_716(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_716(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_716(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_716(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				__LIB_13__::func_72(24);
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
					func_716(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_716(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
			__LIB_13__::func_116(iParam0);
		}
		if (__LIB_0__::func_192(iParam0, -1979000645))
		{
			__LIB_13__::func_157(iParam0);
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
				func_716(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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

void func_735(var uParam0)
{
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (__LIB_12__::func_655(uParam0, 512))
	{
		return;
	}
	if (__LIB_4__::func_118(&(uParam0->f_1768)) < 2f)
	{
		return;
	}
	if (__LIB_8__::func_356(1, 0))
	{
		CAM::DO_SCREEN_FADE_OUT(1000);
		__LIB_12__::func_693(uParam0, 524288);
	}
}

void func_764()
{
	int iVar0;
	if ((!__LIB_0__::func_27(iLocal_1670, 4194304) && !__LIB_0__::func_27(iLocal_1672, 512)) && __LIB_2__::func_1(Local_503[0 /*20*/], 0, 1))
	{
		if (MISC::_GET_PROJECTILE_NEAR_PED(Global_35, joaat("WEAPON_THROWN_DYNAMITE"), 100f, &vLocal_1678, &iVar0, 0, 1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (!__LIB_0__::func_27(iLocal_1670, 1048576))
				{
					if (VOLUME::_IS_POSITION_INSIDE_VOLUME(iLocal_1240[11], vLocal_1678))
					{
						if (func_1353(iVar0) || func_1354(vLocal_1678))
						{
							__LIB_1__::func_683(&iLocal_1670, 1048576);
							if (__LIB_8__::func_684("RDCH3_CTNTR"))
							{
								__LIB_6__::func_900("RDCH3_CTNTR", 0, 0);
							}
						}
					}
				}
			}
		}
		if (__LIB_0__::func_27(iLocal_1670, 1048576))
		{
			if (!__LIB_0__::func_27(iLocal_1670, 2097152))
			{
				if (!__LIB_0__::func_86(vLocal_1678))
				{
					if (FIRE::IS_EXPLOSION_IN_SPHERE(25, vLocal_1678, 10f))
					{
						__LIB_1__::func_683(&iLocal_1670, 2097152);
					}
				}
			}
		}
		if (__LIB_0__::func_27(iLocal_1670, 1048576) && __LIB_0__::func_27(iLocal_1670, 2097152))
		{
			__LIB_1__::func_683(&iLocal_1670, 4194304);
			AUDIO::TRIGGER_MUSIC_EVENT("RDTC31_CAVE_KILL");
		}
	}
}

void func_765()
{
	int iVar0;
	if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1692) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_1692, true, false)) && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_1692, "pl_Action"))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_1692, false))
		{
			if (__LIB_2__::func_1(Local_503[0 /*20*/], 0, 1))
			{
				func_320(&(Local_503[0 /*20*/]), 38, 0, 0);
			}
			if (!PED::IS_PED_INJURED(Local_503[1 /*20*/]))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_503[1 /*20*/], false, true);
				WEAPON::_GIVE_WEAPON_TO_PED_2(Local_503[1 /*20*/], joaat("WEAPON_MELEE_MACHETE"), -1, true, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1692, "G_M_M_UNIINBRED_01^1", Local_503[1 /*20*/], 0);
				func_320(&(Local_503[1 /*20*/]), 26, 0, 0);
			}
			if (!PED::IS_PED_INJURED(Local_503[2 /*20*/]))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_503[2 /*20*/], false, true);
				__LIB_5__::func_602(Local_503[2 /*20*/], joaat("WEAPON_MELEE_TORCH"));
				WEAPON::SET_CURRENT_PED_WEAPON(Local_503[2 /*20*/], joaat("WEAPON_MELEE_MACHETE"), false, 0, false, false);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1692, "G_M_M_UNIINBRED_01^2", Local_503[2 /*20*/], 0);
				func_320(&(Local_503[2 /*20*/]), 26, 0, 0);
			}
			if (!PED::IS_PED_INJURED(Local_503[3 /*20*/]))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1692, "G_M_M_UNIINBRED_01^3", Local_503[3 /*20*/], 0);
				WEAPON::_GIVE_WEAPON_TO_PED_2(Local_503[3 /*20*/], joaat("WEAPON_MELEE_MACHETE"), -1, true, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				func_320(&(Local_503[3 /*20*/]), 26, 0, 0);
			}
			if (!PED::IS_PED_INJURED(Local_503[4 /*20*/]))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1692, "G_M_M_UNIINBRED_01^4", Local_503[4 /*20*/], 0);
				WEAPON::_GIVE_WEAPON_TO_PED_2(Local_503[4 /*20*/], joaat("WEAPON_MELEE_MACHETE"), -1, true, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				func_320(&(Local_503[4 /*20*/]), 26, 0, 0);
			}
			if (!PED::IS_PED_INJURED(Local_503[5 /*20*/]))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_1692, "G_M_M_UNIINBRED_01", Local_503[5 /*20*/], 0);
				func_320(&(Local_503[5 /*20*/]), 26, 0, 0);
			}
			iVar0 = 1;
			while (iVar0 <= 5)
			{
				if (!PED::IS_PED_INJURED(Local_503[iVar0 /*20*/]))
				{
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_503[iVar0 /*20*/]);
				}
				iVar0++;
			}
			ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_1692, "pl_Action", true);
			ANIMSCENE::START_ANIM_SCENE(iLocal_1692);
		}
	}
}

void func_766(int iParam0, float fParam1)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		PED::_0xD05AD61F242C626B(iParam0, fParam1);
	}
}

void func_767(var uParam0, int iParam1, int iParam2)
{
	struct<15> Var0;
	struct<15> Var15;
	if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		if ((!ENTITY::IS_ENTITY_DEAD(*iParam1) && !PED::IS_PED_DEAD_OR_DYING(*iParam1, true)) && !PED::IS_PED_FATALLY_INJURED(*iParam1))
		{
			iParam1->f_18 = __LIB_0__::func_665(*iParam1, Global_35, 1, 1);
			iParam1->f_19 = __LIB_0__::func_665(*iParam1, Local_142, 1, 1);
			if (iParam1->f_18 < 70f)
			{
				if (!MAP::DOES_BLIP_EXIST(iParam1->f_2))
				{
					iParam1->f_2 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), *iParam1);
					MAP::_BLIP_SET_MODIFIER(iParam1->f_2, -662251075);
				}
			}
			if (!__LIB_0__::func_27(iParam1->f_9, 134217728))
			{
				if (((((func_1357(iParam1, Global_35) || __LIB_0__::func_27(iLocal_1670, 262144)) || __LIB_0__::func_27(Local_442[0 /*20*/].f_9, 1)) || __LIB_0__::func_27(Local_442[1 /*20*/].f_9, 1)) || __LIB_0__::func_27(Local_442[0 /*20*/].f_9, 134217728)) || __LIB_0__::func_27(Local_442[1 /*20*/].f_9, 134217728))
				{
					__LIB_1__::func_683(&(iParam1->f_9), 134217728);
				}
			}
			switch (iParam1->f_3)
			{
				case 28:
					switch (iParam2)
					{
						case 0:
							switch (iParam1->f_7)
							{
								case 0:
									if (iParam1->f_5 == 0)
									{
										TASK::REQUEST_WAYPOINT_RECORDING("rdtc3_enemy_patrol");
										if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("rdtc3_enemy_patrol"))
										{
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
											iParam1->f_5 = 1;
										}
									}
									else if (iParam1->f_18 < 85f || iParam1->f_19 < 85f)
									{
										func_320(iParam1, 28, 0, 1);
									}
									break;
								case 1:
									if (iParam1->f_5 == 0)
									{
										Var0.f_2 = -1;
										Var0.f_7 = -1;
										Var0.f_8 = -1082130432;
										Var0.f_12 = -1082130432;
										Var0.f_13 = 1;
										Var0.f_14 = -1082130432;
										Var0 = "rdtc3_enemy_patrol";
										Var0.f_1 = 0;
										Var0.f_2 = 106;
										Var0.f_3 = 4194316;
										Var0.f_12 = (1f * 0.75f);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
										TASK::TASK_FOLLOW_WAYPOINT_RECORDING_ADVANCED(*iParam1, &Var0);
										__LIB_1__::func_683(&iLocal_1674, 536870912);
										iParam1->f_5 = 1;
									}
									else if (TASK::GET_SCRIPT_TASK_STATUS(*iParam1, 658540077, true) == 1)
									{
										if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(*iParam1, "rdtc3_enemy_patrol"))
										{
											iParam1->f_10 = TASK::GET_PED_WAYPOINT_PROGRESS(*iParam1);
											if (iParam1->f_10 >= 40)
											{
												TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(*iParam1, 1f, 0, 0.4f, 0);
											}
											if (iParam1->f_10 >= 103)
											{
												func_320(iParam1, 28, 0, 2);
											}
										}
									}
									break;
								case 2:
									if (iParam1->f_5 == 0)
									{
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam1, 2376.853f, 1291.631f, 110.1862f, 1f, 20000, 0.25f, 5243396, 106.8678f);
										iParam1->f_5 = 1;
									}
									break;
							}
							break;
						case 1:
							switch (iParam1->f_7)
							{
								case 0:
									if (iParam1->f_5 == 0)
									{
										TASK::_0xFF745B0346E19E2C(joaat("DEAD_CARRIABLE_HUMAN"));
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
										iParam1->f_5 = 1;
									}
									else if (Local_442[0 /*20*/].f_3 == 28 && Local_442[0 /*20*/].f_7 == 1)
									{
										func_320(iParam1, 28, 0, 1);
									}
									break;
								case 1:
									if (iParam1->f_5 == 0)
									{
										ENTITY::_0x18FF3110CF47115D(Local_442[2 /*20*/], 7, 1);
										ENTITY::_0x18FF3110CF47115D(Local_442[2 /*20*/], 12, 1);
										TASK::TASK_CARRIABLE(Local_442[2 /*20*/], joaat("DEAD_CARRIABLE_HUMAN"), *iParam1, 1, 0);
										PED::_0x2208438012482A1A(Local_442[2 /*20*/], false, false);
										Var15.f_2 = -1;
										Var15.f_7 = -1;
										Var15.f_8 = -1082130432;
										Var15.f_12 = -1082130432;
										Var15.f_13 = 1;
										Var15.f_14 = -1082130432;
										Var15 = "rdtc3_enemy_patrol";
										Var15.f_1 = 0;
										Var15.f_9 = Local_442[0 /*20*/];
										Var15.f_10 = -1.25f;
										Var15.f_11 = -0.25f;
										Var15.f_3 = 4194316;
										Var15.f_12 = (1f * 0.75f);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
										TASK::TASK_FOLLOW_WAYPOINT_RECORDING_ADVANCED(*iParam1, &Var15);
										iParam1->f_5 = 1;
									}
									else if (TASK::GET_SCRIPT_TASK_STATUS(*iParam1, 658540077, true) == 1)
									{
										if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(*iParam1, "rdtc3_enemy_patrol"))
										{
											iParam1->f_10 = TASK::GET_PED_WAYPOINT_PROGRESS(*iParam1);
											if (iParam1->f_10 >= 102)
											{
												func_320(iParam1, 28, 0, 2);
											}
										}
									}
									break;
								case 2:
									if (iParam1->f_5 == 0)
									{
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam1, 2375.912f, 1290.567f, 110.2297f, 1f, 20000, 0.25f, 5243396, 20.655f);
										iParam1->f_5 = 1;
									}
									else if (TASK::GET_SCRIPT_TASK_STATUS(*iParam1, 713668775, true) == 8)
									{
										if (iParam1->f_18 < 35f)
										{
											func_320(iParam1, 28, 0, 3);
										}
									}
									break;
								case 3:
									if (iParam1->f_5 == 0)
									{
										if (__LIB_3__::func_649(*iParam1, Local_442[2 /*20*/]))
										{
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
											TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(*iParam1, Local_442[2 /*20*/], ENTITY::GET_ENTITY_COORDS(*iParam1, true, false), 0f, 1);
										}
										__LIB_1__::func_683(&(iParam1->f_9), 524288);
										iParam1->f_5 = 1;
									}
									break;
							}
							break;
					}
					if (__LIB_0__::func_27(iParam1->f_9, 134217728))
					{
						func_320(iParam1, 36, 0, 0);
					}
					break;
				case 36:
					if (iParam1->f_5 == 0)
					{
						__LIB_2__::func_122(*iParam1, "GENERIC_ANGRY_REACTION", joaat("SPEECH_PARAMS_FORCE_SHOUTED"), 0, 1, 0, 0, 1);
						if (__LIB_3__::func_649(*iParam1, Local_442[2 /*20*/]))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
							TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(*iParam1, Local_442[2 /*20*/], ENTITY::GET_ENTITY_COORDS(*iParam1, true, false), 0f, 9);
						}
						else
						{
							__LIB_2__::func_45(*iParam1, Global_35, -1);
						}
						__LIB_1__::func_683(&(Local_442[0 /*20*/].f_9), 134217728);
						__LIB_1__::func_683(&(Local_442[1 /*20*/].f_9), 134217728);
						iParam1->f_6 = MISC::GET_GAME_TIMER();
						iParam1->f_5 = 1;
					}
					else if ((MISC::GET_GAME_TIMER() - iParam1->f_6) > 2000)
					{
						if (!PED::_IS_PED_CARRYING(*iParam1))
						{
							func_320(iParam1, 38, 0, 0);
						}
					}
					break;
				case 38:
					if (iParam1->f_5 == 0)
					{
						__LIB_1__::func_683(&iLocal_1674, 1073741824 /* Float: 2f */);
						__LIB_2__::func_122(*iParam1, "CHALLENGE_THREATEN", joaat("SPEECH_PARAMS_FORCE_SHOUTED"), 0, 1, 0, 0, 1);
						WEAPON::SET_CURRENT_PED_WEAPON(*iParam1, joaat("WEAPON_MELEE_MACHETE"), false, 0, false, false);
						TASK::TASK_SWAP_WEAPON(*iParam1, 1, 1, 0, 0);
						PED::SET_PED_COMBAT_RANGE(*iParam1, 0);
						PED::SET_PED_COMBAT_ABILITY(*iParam1, 2);
						PED::SET_PED_COMBAT_MOVEMENT(*iParam1, 2);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 42, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 50, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 0, false);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 93, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 5, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 17, false);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 114, false);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 28, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 68, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 46, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 96, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 29, true);
						PED::SET_PED_CONFIG_FLAG(*iParam1, 249, true);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(*iParam1, 150f, 0, 0);
						iParam1->f_5 = 1;
					}
					break;
			}
		}
		else
		{
			__LIB_0__::func_325(&(iParam1->f_2));
			if (!__LIB_0__::func_27(iParam1->f_9, 1))
			{
				__LIB_1__::func_683(&(iParam1->f_9), 1);
			}
		}
	}
}

void func_768(var uParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		if ((!ENTITY::IS_ENTITY_DEAD(*iParam1) && !PED::IS_PED_DEAD_OR_DYING(*iParam1, true)) && !PED::IS_PED_FATALLY_INJURED(*iParam1))
		{
			iParam1->f_18 = __LIB_0__::func_665(*iParam1, Global_35, 1, 1);
			iParam1->f_19 = __LIB_0__::func_665(*iParam1, Local_142, 1, 1);
			if (iLocal_116 == 4)
			{
				if (!MAP::DOES_BLIP_EXIST(iParam1->f_2))
				{
					iParam1->f_2 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), *iParam1);
					MAP::_BLIP_SET_MODIFIER(iParam1->f_2, -662251075);
				}
			}
			if (!__LIB_0__::func_27(iParam1->f_9, 134217728))
			{
				if (func_1357(iParam1, Global_35) || __LIB_0__::func_27(iLocal_1670, 262144))
				{
					__LIB_1__::func_683(&(iParam1->f_9), 134217728);
				}
			}
			switch (iParam1->f_3)
			{
				case 26:
				case 27:
					if (!__LIB_0__::func_27(iParam1->f_9, 268435456))
					{
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*iParam1, Global_35, 1, 1))
						{
							__LIB_1__::func_683(&(iParam1->f_9), 268435456);
							__LIB_1__::func_683(&(iParam1->f_9), 536870912);
						}
					}
					if (!__LIB_0__::func_27(iParam1->f_9, 536870912))
					{
						if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(*iParam1, true, false), 3f, true))
						{
							__LIB_1__::func_683(&(iParam1->f_9), 536870912);
						}
					}
					break;
			}
			switch (iParam1->f_3)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
						case 1:
						case 2:
							break;
						case 3:
							if (iParam1->f_5 == 0)
							{
								WEAPON::SET_CURRENT_PED_WEAPON(*iParam1, joaat("WEAPON_UNARMED"), false, 0, false, false);
								TASK::TASK_SWAP_WEAPON(*iParam1, 1, 1, 0, 1);
								TASK::_TASK_START_SCENARIO_IN_PLACE(*iParam1, joaat("SC_WORLD_HUMAN_WILDERNESS_LOOTER"), 0, false, 0, -1f, false);
								PED::_0xF1C03A5352243A30(*iParam1);
								PED::SET_PED_HEARING_RANGE(*iParam1, 20f);
								PED::SET_PED_SEEING_RANGE(*iParam1, 10f);
								iParam1->f_5 = 1;
							}
							break;
						case 4:
							if (iParam1->f_5 == 0)
							{
								TASK::_TASK_START_SCENARIO_IN_PLACE(*iParam1, joaat("WORLD_HUMAN_SIT_GROUND_WHITTLE"), 0, false, 0, -1f, false);
								PED::_0xF1C03A5352243A30(*iParam1);
								PED::SET_PED_HEARING_RANGE(*iParam1, 20f);
								PED::SET_PED_SEEING_RANGE(*iParam1, 10f);
								iParam1->f_5 = 1;
							}
							break;
						case 5:
							if (iParam1->f_5 == 0)
							{
								iParam1->f_5 = 1;
							}
							break;
						case 6:
							if (iParam1->f_5 == 0)
							{
								TASK::_TASK_START_SCENARIO_IN_PLACE(*iParam1, joaat("WORLD_HUMAN_FIRE_TEND_KNEEL"), 0, false, 0, -1f, false);
								PED::_0xF1C03A5352243A30(*iParam1);
								PED::SET_PED_HEARING_RANGE(*iParam1, 20f);
								PED::SET_PED_SEEING_RANGE(*iParam1, 10f);
								iParam1->f_5 = 1;
							}
							break;
						case 7:
							if (iParam1->f_5 == 0)
							{
								TASK::_TASK_START_SCENARIO_IN_PLACE(*iParam1, joaat("WORLD_HUMAN_SIT_GROUND_DRINK_DRUNK"), 0, false, 0, -1f, false);
								PED::_0xF1C03A5352243A30(*iParam1);
								PED::SET_PED_HEARING_RANGE(*iParam1, 10f);
								PED::SET_PED_SEEING_RANGE(*iParam1, 10f);
								PED::SET_PED_VISUAL_FIELD_PERIPHERAL_RANGE(*iParam1, 10f);
								iParam1->f_5 = 1;
							}
							break;
					}
					if (__LIB_0__::func_27(iParam1->f_9, 134217728))
					{
						func_320(iParam1, 36, 0, 0);
					}
					break;
				case 21:
					if (iParam1->f_5 == 0)
					{
						if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam4))
						{
							*uParam4 = ANIMSCENE::_CREATE_ANIM_SCENE("script@rcm@dtc3@ig@ig5_dragcorpse@ig5_dragcorpse", 32, "pl_DragOut_MainActionComplete", false, true);
							ANIMSCENE::LOAD_ANIM_SCENE(*uParam4);
						}
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
						iParam1->f_5 = 1;
					}
					else if ((iParam1->f_19 < 55f || iParam1->f_18 < 60f) || (iParam1->f_18 < 70f && (TASK::IS_PED_RUNNING(Global_35) || TASK::IS_PED_SPRINTING(Global_35))))
					{
						func_320(iParam1, 22, 0, 0);
					}
					break;
				case 22:
					switch (iParam1->f_7)
					{
						case 0:
							if (iParam1->f_5 == 0)
							{
								if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam4) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(*uParam4, true, false))
								{
									PED::SET_PED_CONFIG_FLAG(*iParam1, 286, true);
									PED::SET_PED_CONFIG_FLAG(*iParam1, 24, false);
									__LIB_2__::func_698(*iParam1, 15f, 5f, 90f, -60f, 60f);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
									ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam4, "G_M_M_UNIINBRED_01", *iParam1, 0);
									ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam4, "A_M_M_UNICORPSE_01", Local_867[2 /*20*/], 0);
									ANIMSCENE::START_ANIM_SCENE(*uParam4);
									ANIMSCENE::_0xDF7B5144E25CD3FE(*uParam4, "pl_Breakout_01");
									ANIMSCENE::_0xDF7B5144E25CD3FE(*uParam4, "pl_Breakout_02");
									ANIMSCENE::_0xDF7B5144E25CD3FE(*uParam4, "pl_Breakout_03");
									ANIMSCENE::_0xDF7B5144E25CD3FE(*uParam4, "pl_Breakout_04");
									ANIMSCENE::_0xDF7B5144E25CD3FE(*uParam4, "pl_Breakout_05");
									ANIMSCENE::_0xDF7B5144E25CD3FE(*uParam4, "pl_Trans_Standing");
									iParam1->f_5 = 1;
								}
							}
							else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam4) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(*uParam4, false))
							{
								if (ANIMSCENE::_0x8D81E7824B7753F7(*uParam4, "s_Idle_KneelEat", 1))
								{
									if (iParam1->f_18 < 10f)
									{
										if (ANIMSCENE::_0x23E33CB9F4A3F547(*uParam4, "pl_Trans_Standing"))
										{
											func_320(iParam1, 22, 0, 1);
										}
									}
								}
							}
							break;
						case 1:
							if (iParam1->f_5 == 0)
							{
								if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam4) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(*uParam4, true, false))
								{
									ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*uParam4, "pl_Trans_Standing", true);
									iParam1->f_5 = 1;
								}
							}
							else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam4) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(*uParam4, false))
							{
							}
							break;
					}
					if (__LIB_0__::func_27(iParam1->f_9, 134217728))
					{
						func_320(iParam1, 24, 0, 0);
					}
					break;
				case 24:
					if (iParam1->f_5 == 0)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam4))
						{
							if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(*uParam4, false))
							{
								if (ANIMSCENE::_0x8D81E7824B7753F7(*uParam4, "s_DragOut_MainAction_P1", 1))
								{
									if (__LIB_0__::func_665(Global_35, *iParam1, 1, 1) < 4f)
									{
										TASK::CLEAR_PED_TASKS(*iParam1, true, false);
									}
									else
									{
										ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*uParam4, "pl_Breakout_01", true);
									}
								}
								else if (ANIMSCENE::_0x8D81E7824B7753F7(*uParam4, "s_DragOut_MainAction_P2", 1))
								{
									ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*uParam4, "pl_Breakout_02", true);
								}
								else if (ANIMSCENE::_0x8D81E7824B7753F7(*uParam4, "s_Idle_KneelEat", 1))
								{
									ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*uParam4, "pl_Breakout_03", true);
								}
								else if (ANIMSCENE::_0x8D81E7824B7753F7(*uParam4, "s_Idle_StandingEating", 1))
								{
									ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*uParam4, "pl_Breakout_05", true);
								}
								else
								{
									TASK::CLEAR_PED_TASKS(*iParam1, true, false);
								}
							}
							iParam1->f_6 = MISC::GET_GAME_TIMER();
							iParam1->f_5 = 1;
						}
					}
					else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam4))
					{
						if (ANIMSCENE::_0xB89FCFF19DAFFF28(*uParam4, "G_M_M_UNIINBRED_01") || ANIMSCENE::_0x005E6F28DD7ED58D(*uParam4, "G_M_M_UNIINBRED_01"))
						{
							if ((MISC::GET_GAME_TIMER() - iParam1->f_6) > 1500)
							{
								func_320(iParam1, 36, 0, 0);
							}
						}
					}
					break;
				case 19:
					switch (iParam2)
					{
						case 1:
							switch (iParam1->f_7)
							{
								case 0:
									if (iParam1->f_5 == 0)
									{
										STREAMING::_0x03DDBF2D73799F9E("CLIPSET@MECH_GRAPPLE@MACHETE@_MALE@_AMBIENT@_HEALTHY@MOUNTED@LOCO@VICTIM");
										STREAMING::_0x03DDBF2D73799F9E("CLIPSET@MECH_GRAPPLE@MACHETE@_MALE@_AMBIENT@_HEALTHY@MOUNTED@LOCO@ATTACKER");
										if (STREAMING::_0x85B8F04555AB49B8("CLIPSET@MECH_GRAPPLE@MACHETE@_MALE@_AMBIENT@_HEALTHY@MOUNTED@LOCO@VICTIM") && STREAMING::_0x85B8F04555AB49B8("CLIPSET@MECH_GRAPPLE@MACHETE@_MALE@_AMBIENT@_HEALTHY@MOUNTED@LOCO@ATTACKER"))
										{
											if (!PED::IS_PED_INJURED(*iParam1) && !PED::IS_PED_INJURED(Local_867[1 /*20*/]))
											{
												PED::SET_PED_CONFIG_FLAG(*iParam1, 213, true);
												PED::_0xB8DE69D9473B7593(*iParam1, 3);
												PED::SET_PED_CONFIG_FLAG(Local_867[1 /*20*/], 213, true);
												ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(*iParam1, false);
												ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_867[1 /*20*/], true);
												PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
												PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_867[1 /*20*/], true);
												PED::_0x630E7B01F091A197(*iParam1, joaat("GS_MOUNTED"));
												PED::_0x630E7B01F091A197(Local_867[1 /*20*/], joaat("GS_MOUNTED"));
												TASK::TASK_PUT_PED_DIRECTLY_INTO_GRAPPLE(*iParam1, Local_867[1 /*20*/], 0, 0, 0, 0, 0);
												PED::FORCE_PED_MOTION_STATE(*iParam1, 1926482157, false, 0, false);
												PED::FORCE_PED_MOTION_STATE(Local_867[1 /*20*/], 1926482157, false, 0, false);
												__LIB_1__::func_681(&(iParam1->f_9), 67108864);
												__LIB_1__::func_683(&(iParam1->f_9), 33554432);
												iLocal_1681 = GRAPHICS::CREATE_TRACKED_POINT();
												GRAPHICS::SET_TRACKED_POINT_INFO(iLocal_1681, iParam1->f_14, 1f);
												iParam1->f_5 = 1;
											}
										}
									}
									else
									{
										if (!__LIB_0__::func_27(iParam1->f_9, 67108864))
										{
											if (iLocal_1681 != -1)
											{
												if (GRAPHICS::IS_TRACKED_POINT_VISIBLE(iLocal_1681))
												{
													__LIB_1__::func_683(&(iParam1->f_9), 67108864);
												}
											}
										}
										if (((iParam1->f_18 < 12.5f || __LIB_0__::func_27(iParam1->f_9, 67108864)) || __LIB_0__::func_27(iParam1->f_9, 134217728)) || __LIB_0__::func_27(iLocal_1670, 262144))
										{
											func_320(iParam1, 19, 0, 1);
										}
									}
									break;
								case 1:
									if (iParam1->f_5 == 0)
									{
										iParam1->f_6 = MISC::GET_GAME_TIMER();
										iParam1->f_5 = 1;
									}
									else
									{
										if (!__LIB_0__::func_27(iParam1->f_9, 4096))
										{
											if ((MISC::GET_GAME_TIMER() - iParam1->f_6) > 5000 && iLocal_121 == 4)
											{
												__LIB_1__::func_683(&(iParam1->f_9), 4096);
											}
										}
										if (((((MISC::GET_GAME_TIMER() - iParam1->f_6) > 20500 && iLocal_121 == 4) || __LIB_0__::func_665(Global_35, *iParam1, 1, 1) < 4f) || __LIB_0__::func_27(iParam1->f_9, 134217728)) || __LIB_0__::func_27(iLocal_1670, 262144))
										{
											func_320(iParam1, 19, 0, 2);
										}
									}
									break;
								case 2:
									if (iParam1->f_5 == 0)
									{
										ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(*iParam1, false);
										ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_867[1 /*20*/], false);
										PED::SET_PED_CONFIG_FLAG(Local_867[1 /*20*/], 21, true);
										PED::SET_PED_CONFIG_FLAG(Local_867[1 /*20*/], 354, true);
										PED::SET_PED_CONFIG_FLAG(Local_867[1 /*20*/], 138, true);
										PED::_0x949B2F9ED2917F5D(*iParam1, 3);
										iParam1->f_5 = 1;
									}
									break;
							}
							if (((ENTITY::DOES_ENTITY_EXIST(Local_867[1 /*20*/]) && ENTITY::IS_ENTITY_DEAD(Local_867[1 /*20*/])) || __LIB_0__::func_27(Local_503[2 /*20*/].f_9, 1)) || __LIB_0__::func_27(iLocal_1670, 262144))
							{
								func_320(iParam1, 20, 0, 0);
							}
							break;
					}
					break;
				case 20:
					switch (iParam2)
					{
						case 1:
							switch (iParam1->f_7)
							{
								case 0:
									if (iParam1->f_5 == 0)
									{
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
										TASK::CLEAR_SEQUENCE_TASK(&iVar0);
										TASK::OPEN_SEQUENCE_TASK(&iVar0);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2350.589f, 1405.083f, 102.1389f, 1f, 20000, (0.25f * 2f), 1, 40000f);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2345.197f, 1402.538f, 103.1407f, 1f, 20000, (0.25f * 2f), 1, 40000f);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2340.684f, 1405.04f, 102.4085f, 1f, 20000, 0.25f, 0, 179f);
										TASK::CLOSE_SEQUENCE_TASK(iVar0);
										TASK::TASK_PERFORM_SEQUENCE(*iParam1, iVar0);
										TASK::CLEAR_SEQUENCE_TASK(&iVar0);
										iParam1->f_5 = 1;
									}
									else
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(*iParam1, 242628503, true) == 1)
										{
											__LIB_1__::func_681(&(iParam1->f_9), 33554432);
										}
										if (TASK::GET_SCRIPT_TASK_STATUS(*iParam1, 242628503, true) == 8)
										{
											func_320(iParam1, 20, 0, 1);
										}
									}
									break;
								case 1:
									if (iParam1->f_5 == 0)
									{
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
										TASK::_TASK_USE_SCENARIO_POINT(*iParam1, iLocal_1508[5], 0, 0, true, false, 0, false, -1f, false);
										iParam1->f_5 = 1;
									}
									break;
							}
							break;
					}
					if (__LIB_0__::func_27(iParam1->f_9, 134217728))
					{
						func_320(iParam1, 36, 0, 0);
					}
					break;
				case 18:
					switch (iParam2)
					{
						case 2:
							switch (iParam1->f_7)
							{
								case 0:
								case 1:
								case 2:
								case 3:
								case 4:
								case 5:
									if (iParam1->f_5 == 0)
									{
										STREAMING::_REQUEST_SCENARIO_TYPE(joaat("SC_PROP_HUMAN_TORCH_TORCAP_A"), 15, 0, 0);
										if (STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("SC_PROP_HUMAN_TORCH_TORCAP_A"), false))
										{
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
											if (!PED::_IS_PED_USING_SCENARIO_POINT(*iParam1, iLocal_1508[4]))
											{
												TASK::_TASK_USE_SCENARIO_POINT(*iParam1, iLocal_1508[4], "SCRIPT_COMMON_TORCAP_TORCH_MALE_A", 0, true, false, 0, false, -1f, false);
											}
											else
											{
												switch (iParam1->f_7)
												{
													case 1:
														PED::_0xD65FDC686A031C83(*iParam1, MISC::GET_HASH_KEY("RETORCAP_LINE01"), 1f);
														break;
													case 2:
														PED::_0xD65FDC686A031C83(*iParam1, MISC::GET_HASH_KEY("RETORCAP_LINE02"), 1f);
														break;
													case 3:
														PED::_0xD65FDC686A031C83(*iParam1, MISC::GET_HASH_KEY("RETORCAP_LINE03"), 1f);
														break;
													case 4:
														PED::_0xD65FDC686A031C83(*iParam1, MISC::GET_HASH_KEY("RETORCAP_LINE04"), 1f);
														break;
													case 5:
														PED::_0xD65FDC686A031C83(*iParam1, MISC::GET_HASH_KEY("RETORCAP_LINE05"), 1f);
														break;
												}
											}
											iParam1->f_6 = 0;
											iParam1->f_5 = 1;
										}
									}
									else if (TASK::_0x02EBBB3989B7E695(*iParam1))
									{
										if (iParam1->f_6 == 0)
										{
											iParam1->f_6 = MISC::GET_GAME_TIMER();
										}
										else if ((MISC::GET_GAME_TIMER() - iParam1->f_6) > 1000)
										{
											func_320(iParam1, 18, 0, MISC::GET_RANDOM_INT_IN_RANGE(1, 6));
										}
									}
									break;
							}
							break;
					}
					if (__LIB_0__::func_27(iParam1->f_9, 134217728))
					{
						func_320(iParam1, 38, 0, 0);
					}
					break;
				case 26:
					if (iParam1->f_5 == 0)
					{
						if (MAP::DOES_BLIP_EXIST(iParam1->f_2))
						{
							MAP::_BLIP_SET_MODIFIER(iParam1->f_2, -1034486097);
						}
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(*iParam1, false);
						switch (iParam2)
						{
							case 1:
								__LIB_2__::func_279(*iParam1, 1);
								break;
							case 3:
								__LIB_2__::func_279(*iParam1, 1);
								break;
						}
						iParam1->f_5 = 1;
					}
					else
					{
						switch (iParam2)
						{
							case 1:
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam1, "script_rc@dtc3@ig@ig2_merfees_emerge", "action_g_m_m_uniinbred_01^1", 1) && ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(*iParam1, "script_rc@dtc3@ig@ig2_merfees_emerge", "action_g_m_m_uniinbred_01^1") > 0.4f)
								{
									if (MAP::DOES_BLIP_EXIST(iParam1->f_2))
									{
										MAP::_BLIP_SET_MODIFIER(iParam1->f_2, 942020339);
									}
								}
								if (ANIMSCENE::_0x005E6F28DD7ED58D(*iParam3, "G_M_M_UNIINBRED_01^1") || ((ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam1, "script_rc@dtc3@ig@ig2_merfees_emerge", "action_g_m_m_uniinbred_01^1", 1) && ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(*iParam1, "script_rc@dtc3@ig@ig2_merfees_emerge", "action_g_m_m_uniinbred_01^1") > 0.625f) && (iParam1->f_18 < 4.5f || iParam1->f_19 < 4.5f)))
								{
									func_320(iParam1, 27, 0, 0);
								}
								break;
							case 2:
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam1, "script_rc@dtc3@ig@ig2_merfees_emerge", "action_g_m_m_uniinbred_01^2", 1) && ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(*iParam1, "script_rc@dtc3@ig@ig2_merfees_emerge", "action_g_m_m_uniinbred_01^2") > 0.4f)
								{
									if (MAP::DOES_BLIP_EXIST(iParam1->f_2))
									{
										MAP::_BLIP_SET_MODIFIER(iParam1->f_2, 942020339);
									}
								}
								if (ANIMSCENE::_0x005E6F28DD7ED58D(*iParam3, "G_M_M_UNIINBRED_01^2") || ((ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam1, "script_rc@dtc3@ig@ig2_merfees_emerge", "action_g_m_m_uniinbred_01^2", 1) && ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(*iParam1, "script_rc@dtc3@ig@ig2_merfees_emerge", "action_g_m_m_uniinbred_01^2") > 0.65f) && (iParam1->f_18 < 4.5f || iParam1->f_19 < 4.5f)))
								{
									func_320(iParam1, 27, 0, 0);
								}
								break;
							case 3:
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam1, "script_rc@dtc3@ig@ig2_merfees_emerge", "action_g_m_m_uniinbred_01^3", 1) && ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(*iParam1, "script_rc@dtc3@ig@ig2_merfees_emerge", "action_g_m_m_uniinbred_01^3") > 0.4f)
								{
									if (MAP::DOES_BLIP_EXIST(iParam1->f_2))
									{
										MAP::_BLIP_SET_MODIFIER(iParam1->f_2, 942020339);
									}
								}
								if (ANIMSCENE::_0x005E6F28DD7ED58D(*iParam3, "G_M_M_UNIINBRED_01^3") || ((ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam1, "script_rc@dtc3@ig@ig2_merfees_emerge", "action_g_m_m_uniinbred_01^3", 1) && ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(*iParam1, "script_rc@dtc3@ig@ig2_merfees_emerge", "action_g_m_m_uniinbred_01^3") > 0.615f) && (iParam1->f_18 < 4.5f || iParam1->f_19 < 4.5f)))
								{
									func_320(iParam1, 27, 0, 0);
								}
								break;
							case 4:
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam1, "script_rc@dtc3@ig@ig2_merfees_emerge", "action_g_m_m_uniinbred_01^4", 1) && ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(*iParam1, "script_rc@dtc3@ig@ig2_merfees_emerge", "action_g_m_m_uniinbred_01^4") > 0.4f)
								{
									if (MAP::DOES_BLIP_EXIST(iParam1->f_2))
									{
										MAP::_BLIP_SET_MODIFIER(iParam1->f_2, 942020339);
									}
								}
								if (ANIMSCENE::_0x005E6F28DD7ED58D(*iParam3, "G_M_M_UNIINBRED_01^4") || ((ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam1, "script_rc@dtc3@ig@ig2_merfees_emerge", "action_g_m_m_uniinbred_01^4", 1) && ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(*iParam1, "script_rc@dtc3@ig@ig2_merfees_emerge", "action_g_m_m_uniinbred_01^4") > 0.65f) && (iParam1->f_18 < 4.5f || iParam1->f_19 < 4.5f)))
								{
									func_320(iParam1, 27, 0, 0);
								}
								break;
							case 5:
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam1, "script_rc@dtc3@ig@ig2_merfees_emerge", "action_g_m_m_uniinbred_01", 1) && ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(*iParam1, "script_rc@dtc3@ig@ig2_merfees_emerge", "action_g_m_m_uniinbred_01") > 0.4f)
								{
									if (MAP::DOES_BLIP_EXIST(iParam1->f_2))
									{
										MAP::_BLIP_SET_MODIFIER(iParam1->f_2, 942020339);
									}
								}
								if (ANIMSCENE::_0x005E6F28DD7ED58D(*iParam3, "G_M_M_UNIINBRED_01") || ((ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam1, "script_rc@dtc3@ig@ig2_merfees_emerge", "action_g_m_m_uniinbred_01", 1) && ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(*iParam1, "script_rc@dtc3@ig@ig2_merfees_emerge", "action_g_m_m_uniinbred_01") > 0.625f) && (iParam1->f_18 < 4.5f || iParam1->f_19 < 4.5f)))
								{
									func_320(iParam1, 27, 0, 0);
								}
								break;
						}
					}
					break;
				case 27:
					if (iParam1->f_5 == 0)
					{
						__LIB_1__::func_683(&iLocal_1670, 262144);
						__LIB_2__::func_698(*iParam1, 1114636288 /* Float: 60f */, 1084227584 /* Float: 5f */, 1123024896 /* Float: 120f */, -1028390912 /* Float: -90f */, 1119092736 /* Float: 90f */);
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(*iParam1, false);
						PED::SET_PED_COMBAT_RANGE(*iParam1, 0);
						PED::SET_PED_COMBAT_ABILITY(*iParam1, 2);
						PED::SET_PED_COMBAT_MOVEMENT(*iParam1, 2);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 42, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 50, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 0, false);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 93, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 5, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 17, false);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 114, false);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 28, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 68, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 46, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 96, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 29, true);
						PED::SET_PED_CONFIG_FLAG(*iParam1, 249, true);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(*iParam1, 100f, 1048576, 1);
						iParam1->f_5 = 1;
					}
					break;
				case 36:
					switch (iParam2)
					{
						case 0:
							if (iParam1->f_5 == 0)
							{
								iParam1->f_5 = 1;
							}
							else if (!__LIB_0__::func_27(iLocal_1670, 1048576) && !__LIB_0__::func_27(iLocal_1670, 4194304))
							{
								func_320(iParam1, 38, 0, 0);
							}
							break;
						case 1:
							if (iParam1->f_5 == 0)
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
								TASK::CLEAR_PED_TASKS(*iParam1, true, false);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(*iParam1, Global_35, 1000, -1f, -1f, -1f);
								TASK::TASK_LOOK_AT_ENTITY(*iParam1, Global_35, 1000, 2048, 51, 0);
								iParam1->f_6 = MISC::GET_GAME_TIMER();
								iParam1->f_5 = 1;
							}
							else if ((MISC::GET_GAME_TIMER() - iParam1->f_6) > 1000)
							{
								func_320(iParam1, 38, 0, 0);
							}
							break;
						case 2:
							if (iParam1->f_5 == 0)
							{
								PED::_0x802092B07E3B1EEA(*iParam1, Global_36, 3);
								iParam1->f_5 = 1;
							}
							else
							{
								func_320(iParam1, 38, 0, 0);
							}
							break;
						case 3:
						case 4:
							if (iParam1->f_5 == 0)
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
								if (__LIB_2__::func_1(*iParam1, 0, 1))
								{
									TASK::CLEAR_SEQUENCE_TASK(&iVar0);
									TASK::OPEN_SEQUENCE_TASK(&iVar0);
									TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, Global_35, Global_35, 2f, 0, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 1, joaat("FIRING_PATTERN_BURST_FIRE"), 0);
									__LIB_1__::func_474(*iParam1, &iVar0, 0, 0, 1, 1);
									__LIB_13__::func_44(*iParam1, 0, "GENERIC_SHOCKED_HIGH", "", -1f, MISC::GET_RANDOM_INT_IN_RANGE(1, 3), 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								}
								iParam1->f_6 = MISC::GET_GAME_TIMER();
								iParam1->f_5 = 1;
							}
							else if ((MISC::GET_GAME_TIMER() - iParam1->f_6) > 5000 || __LIB_0__::func_665(Global_35, *iParam1, 0, 1) < 1.5f)
							{
								func_320(iParam1, 38, 0, 0);
							}
							break;
						case 5:
							if (iParam1->f_5 == 0)
							{
								iParam1->f_5 = 1;
							}
							else
							{
								func_320(iParam1, 38, 0, 0);
							}
							break;
						case 6:
							if (iParam1->f_5 == 0)
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(*iParam1, ENTITY::GET_ENTITY_COORDS(*iParam1, true, false), 3f, 0, 0, 0);
								iParam1->f_5 = 1;
							}
							else if (((!__LIB_2__::func_1(Local_503[4 /*20*/], 0, 1) && !__LIB_2__::func_1(Local_503[3 /*20*/], 0, 1)) || __LIB_0__::func_266(Global_35, 2329.76f, 1430.17f, 89.47f, 10f, 1, 1)) || __LIB_0__::func_665(Global_35, *iParam1, 1, 1) < 11f)
							{
								PED::REMOVE_PED_DEFENSIVE_AREA(*iParam1, false);
								func_320(iParam1, 38, 0, 0);
							}
							break;
						case 7:
							if (iParam1->f_5 == 0)
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(*iParam1, ENTITY::GET_ENTITY_COORDS(*iParam1, true, false), 3f, 0, 0, 0);
								iParam1->f_5 = 1;
							}
							else if (((!__LIB_2__::func_1(Local_503[4 /*20*/], 0, 1) && !__LIB_2__::func_1(Local_503[3 /*20*/], 0, 1)) || __LIB_0__::func_266(Global_35, 2329.76f, 1430.17f, 89.47f, 10f, 1, 1)) || __LIB_0__::func_665(Global_35, *iParam1, 1, 1) < 11f)
							{
								PED::REMOVE_PED_DEFENSIVE_AREA(*iParam1, false);
								func_320(iParam1, 38, 0, 0);
							}
							break;
					}
					break;
				case 38:
					if (iParam1->f_5 == 0)
					{
						__LIB_1__::func_683(&iLocal_1670, 262144);
						__LIB_2__::func_698(*iParam1, 1114636288 /* Float: 60f */, 1084227584 /* Float: 5f */, 1123024896 /* Float: 120f */, -1028390912 /* Float: -90f */, 1119092736 /* Float: 90f */);
						PED::SET_PED_COMBAT_RANGE(*iParam1, 0);
						PED::SET_PED_COMBAT_ABILITY(*iParam1, 2);
						PED::SET_PED_COMBAT_MOVEMENT(*iParam1, 2);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 42, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 50, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 0, false);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 93, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 5, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 17, false);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 114, false);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 28, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 68, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 46, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 96, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 29, true);
						PED::SET_PED_CONFIG_FLAG(*iParam1, 249, true);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(*iParam1, 150f, 0, 0);
						iParam1->f_5 = 1;
					}
					break;
			}
		}
		else
		{
			__LIB_0__::func_325(&(iParam1->f_2));
			if (!__LIB_0__::func_27(iParam1->f_9, 1))
			{
				__LIB_1__::func_683(&(iParam1->f_9), 1);
			}
		}
	}
}

void func_769(var uParam0, int iParam1, int iParam2, var uParam3)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		if ((!ENTITY::IS_ENTITY_DEAD(*iParam1) && !PED::IS_PED_DEAD_OR_DYING(*iParam1, true)) && !PED::IS_PED_FATALLY_INJURED(*iParam1))
		{
			iParam1->f_18 = __LIB_0__::func_665(*iParam1, Global_35, 1, 1);
			iParam1->f_19 = __LIB_0__::func_665(*iParam1, Local_142, 1, 1);
			if (iLocal_116 == 4)
			{
				if (!MAP::DOES_BLIP_EXIST(iParam1->f_2))
				{
					iParam1->f_2 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), *iParam1);
					MAP::_BLIP_SET_MODIFIER(iParam1->f_2, -662251075);
				}
			}
			if (!__LIB_0__::func_27(iParam1->f_9, 134217728))
			{
				if (func_1357(iParam1, Global_35) || __LIB_0__::func_27(iLocal_1670, 262144))
				{
					__LIB_1__::func_683(&(iParam1->f_9), 134217728);
				}
			}
			switch (iParam1->f_3)
			{
				case 15:
					if (iParam1->f_5 == 0)
					{
						switch (iParam2)
						{
							case 1:
							case 2:
								PED::SET_PED_HEARING_RANGE(*iParam1, 20f);
								PED::SET_PED_SEEING_RANGE(*iParam1, 20f);
								break;
						}
						iParam1->f_5 = 1;
					}
					else
					{
						switch (iParam2)
						{
							case 0:
							case 1:
							case 2:
							case 3:
								break;
						}
					}
					break;
				case 16:
					if (iParam1->f_5 == 0)
					{
						iParam1->f_5 = 1;
					}
					else
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam3))
						{
							switch (iParam2)
							{
								case 0:
									if (!__LIB_0__::func_27(iParam1->f_9, 4))
									{
										if (((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam3) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(*uParam3, false)) && ANIMSCENE::_0x1F0E401031E20146(*uParam3, "pl_mainaction_torture")) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(*uParam3) >= 0.65f)
										{
											__LIB_1__::func_683(&(iParam1->f_9), 4);
										}
									}
									if (ANIMSCENE::_0x005E6F28DD7ED58D(*uParam3, "g_m_m_uniinbred_01"))
									{
									}
									break;
								case 1:
									if (ANIMSCENE::_0x005E6F28DD7ED58D(*uParam3, "g_m_m_uniinbred_01^1"))
									{
										ENTITY::_SET_ENTITY_COORDS_AND_HEADING(*iParam1, 2311.18f, 1440.577f, 83.3918f, 203.3991f, true, false, true);
										ENTITY::_0x9587913B9E772D29(*iParam1, 0);
									}
									break;
								case 2:
									if (ANIMSCENE::_0x005E6F28DD7ED58D(*uParam3, "g_m_m_uniinbred_01^2"))
									{
										ENTITY::_SET_ENTITY_COORDS_AND_HEADING(*iParam1, 2309.088f, 1443.97f, 82.6348f, 209.5893f, true, false, true);
										ENTITY::_0x9587913B9E772D29(*iParam1, 0);
									}
									break;
								case 3:
									if (ANIMSCENE::_0x005E6F28DD7ED58D(*uParam3, "g_m_m_uniinbred_01^3"))
									{
									}
									break;
							}
						}
						if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(*uParam3, false))
						{
							if (((((((__LIB_0__::func_27(Local_664[0 /*20*/].f_9, 1) || __LIB_0__::func_27(Local_664[1 /*20*/].f_9, 1)) || __LIB_0__::func_27(Local_664[2 /*20*/].f_9, 1)) || __LIB_0__::func_27(Local_664[3 /*20*/].f_9, 1)) || __LIB_0__::func_27(Local_664[0 /*20*/].f_9, 134217728)) || __LIB_0__::func_27(Local_664[1 /*20*/].f_9, 134217728)) || __LIB_0__::func_27(Local_664[2 /*20*/].f_9, 134217728)) || __LIB_0__::func_27(Local_664[3 /*20*/].f_9, 134217728))
							{
								func_320(iParam1, 38, 0, 0);
							}
						}
					}
					break;
				case 17:
					if (iParam1->f_5 == 0)
					{
						iParam1->f_5 = 1;
					}
					else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam3))
					{
						if ((ANIMSCENE::_0x1F0E401031E20146(*uParam3, "pl_breakout_punch") || ANIMSCENE::_0x1F0E401031E20146(*uParam3, "pl_breakout_onfire")) || ANIMSCENE::_0x1F0E401031E20146(*uParam3, "pl_breakout_torture"))
						{
							switch (iParam2)
							{
								case 0:
									if (ANIMSCENE::_0x005E6F28DD7ED58D(*uParam3, "g_m_m_uniinbred_01"))
									{
										func_320(iParam1, 38, 0, 0);
									}
									break;
								case 1:
									if (ANIMSCENE::_0x005E6F28DD7ED58D(*uParam3, "g_m_m_uniinbred_01^1"))
									{
										func_320(iParam1, 38, 0, 0);
									}
									break;
								case 2:
									if (ANIMSCENE::_0x005E6F28DD7ED58D(*uParam3, "g_m_m_uniinbred_01^2"))
									{
										func_320(iParam1, 38, 0, 0);
									}
									break;
								case 3:
									if (ANIMSCENE::_0x005E6F28DD7ED58D(*uParam3, "g_m_m_uniinbred_01^3"))
									{
										func_320(iParam1, 38, 0, 0);
									}
									break;
							}
						}
						else
						{
							func_320(iParam1, 38, 0, 0);
						}
					}
					break;
				case 38:
					if (iParam1->f_5 == 0)
					{
						__LIB_1__::func_683(&iLocal_1670, 262144);
						TASK::TASK_CLEAR_LOOK_AT(*iParam1);
						PED::SET_PED_COMBAT_RANGE(*iParam1, 0);
						PED::SET_PED_COMBAT_MOVEMENT(*iParam1, 2);
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(*iParam1, ENTITY::GET_ENTITY_COORDS(*iParam1, true, false), 2f, 1, 0, 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 0, false);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 28, true);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(*iParam1, 150f, 0, 66);
						iParam1->f_5 = 1;
						iParam1->f_7 = 0;
					}
					else
					{
						switch (iParam1->f_7)
						{
							case 0:
								if (__LIB_0__::func_48(*iParam1, Global_35, 40f, 1))
								{
									PED::REMOVE_PED_DEFENSIVE_AREA(*iParam1, false);
									iParam1->f_7++;
								}
								break;
							case 1:
								break;
							case 2:
								break;
						}
					}
					break;
			}
		}
		else
		{
			__LIB_0__::func_325(&(iParam1->f_2));
			if (!__LIB_0__::func_27(iParam1->f_9, 1))
			{
				__LIB_1__::func_683(&(iParam1->f_9), 1);
			}
		}
	}
}

void func_770(var uParam0, int iParam1, int iParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		if ((!ENTITY::IS_ENTITY_DEAD(*iParam1) && !PED::IS_PED_DEAD_OR_DYING(*iParam1, true)) && !PED::IS_PED_FATALLY_INJURED(*iParam1))
		{
			iParam1->f_18 = __LIB_0__::func_665(*iParam1, Global_35, 1, 1);
			iParam1->f_19 = __LIB_0__::func_665(*iParam1, Local_142, 1, 1);
			if (iLocal_116 == 4)
			{
				if (!MAP::DOES_BLIP_EXIST(iParam1->f_2))
				{
					iParam1->f_2 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), *iParam1);
					MAP::_BLIP_SET_MODIFIER(iParam1->f_2, -662251075);
				}
			}
			if (!__LIB_0__::func_27(iParam1->f_9, 134217728))
			{
				if (func_1357(iParam1, Global_35) || __LIB_0__::func_27(iLocal_1670, 262144))
				{
					__LIB_1__::func_683(&(iParam1->f_9), 134217728);
				}
			}
			switch (iParam1->f_3)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							if (iParam1->f_5 == 0)
							{
								STREAMING::_REQUEST_SCENARIO_TYPE(joaat("PROP_HUMAN_SEAT_BENCH"), 15, 0, 0);
								if (STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("PROP_HUMAN_SEAT_BENCH"), false))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
									TASK::TASK_LOOK_AT_ENTITY(*iParam1, Local_162, -1, 2048, 51, 0);
									TASK::_TASK_USE_SCENARIO_POINT(*iParam1, iLocal_1508[7], 0, 0, false, true, 0, false, -1f, false);
									iParam1->f_5 = 1;
								}
							}
							break;
						case 1:
							if (iParam1->f_5 == 0)
							{
								STREAMING::_REQUEST_SCENARIO_TYPE(joaat("PROP_HUMAN_SEAT_CHAIR_CLEAN_RIFLE"), 15, 0, 0);
								if (STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("PROP_HUMAN_SEAT_CHAIR_CLEAN_RIFLE"), false))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
									TASK::_TASK_USE_SCENARIO_POINT(*iParam1, iLocal_1508[8], 0, 0, false, true, 0, false, -1f, false);
									iParam1->f_5 = 1;
								}
							}
							break;
						case 2:
							break;
						case 3:
							if (iParam1->f_5 == 0)
							{
								STREAMING::_REQUEST_SCENARIO_TYPE(joaat("WORLD_HUMAN_FIRE_STAND"), 15, 0, 0);
								if (STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("WORLD_HUMAN_FIRE_STAND"), false))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
									TASK::_TASK_START_SCENARIO_IN_PLACE(*iParam1, joaat("WORLD_HUMAN_FIRE_STAND"), 0, false, 0, -1f, false);
									iParam1->f_5 = 1;
								}
							}
							break;
						case 4:
							if (iParam1->f_5 == 0)
							{
								STREAMING::_REQUEST_SCENARIO_TYPE(joaat("WORLD_HUMAN_FIRE_STAND"), 15, 0, 0);
								if (STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("WORLD_HUMAN_FIRE_STAND"), false))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
									TASK::_TASK_START_SCENARIO_IN_PLACE(*iParam1, joaat("WORLD_HUMAN_FIRE_STAND"), 0, false, 0, -1f, false);
									iParam1->f_5 = 1;
								}
							}
							break;
					}
					if (__LIB_0__::func_27(iParam1->f_9, 134217728))
					{
						func_320(iParam1, 38, 0, 0);
					}
					break;
				case 38:
					if (iParam1->f_5 == 0)
					{
						__LIB_1__::func_683(&iLocal_1670, 262144);
						TASK::TASK_CLEAR_LOOK_AT(*iParam1);
						PED::_0x802092B07E3B1EEA(*iParam1, Global_36, 3);
						switch (iParam2)
						{
							case 0:
							case 1:
							case 2:
								PED::SET_PED_COMBAT_RANGE(*iParam1, 0);
								break;
							default:
								PED::SET_PED_COMBAT_RANGE(*iParam1, 1);
								break;
						}
						PED::SET_PED_COMBAT_MOVEMENT(*iParam1, 1);
						PED::_0xFC3DB99C8144CD81(*iParam1, iLocal_1240[13], 0, 0, 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 0, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 28, true);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(*iParam1, 150f, 0, 0);
						iParam1->f_5 = 1;
					}
					break;
			}
		}
		else
		{
			__LIB_0__::func_325(&(iParam1->f_2));
			if (!__LIB_0__::func_27(iParam1->f_9, 1))
			{
				__LIB_1__::func_683(&(iParam1->f_9), 1);
			}
		}
	}
}

void func_771(var uParam0, int iParam1, int iParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		if ((!ENTITY::IS_ENTITY_DEAD(*iParam1) && !PED::IS_PED_DEAD_OR_DYING(*iParam1, true)) && !PED::IS_PED_FATALLY_INJURED(*iParam1))
		{
			iParam1->f_18 = __LIB_0__::func_665(*iParam1, Global_35, 1, 1);
			iParam1->f_19 = __LIB_0__::func_665(*iParam1, Local_142, 1, 1);
			if (iLocal_116 == 4)
			{
				if (!MAP::DOES_BLIP_EXIST(iParam1->f_2))
				{
					if (!ENTITY::IS_ENTITY_DEAD(*iParam1) && !PED::IS_PED_DEAD_OR_DYING(*iParam1, true))
					{
						iParam1->f_2 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), *iParam1);
						MAP::_BLIP_SET_MODIFIER(iParam1->f_2, -662251075);
					}
				}
			}
			if (!__LIB_0__::func_27(iParam1->f_9, 134217728))
			{
				if (func_1357(iParam1, Global_35) || __LIB_0__::func_27(iLocal_1670, 262144))
				{
					__LIB_1__::func_683(&(iParam1->f_9), 134217728);
				}
			}
			switch (iParam1->f_3)
			{
				case 0:
					if (iParam1->f_5 == 0)
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
						TASK::TASK_STAND_STILL(*iParam1, -1);
						iParam1->f_5 = 1;
					}
					if (__LIB_0__::func_27(iParam1->f_9, 134217728))
					{
						if (__LIB_0__::func_27(iLocal_1670, 262144))
						{
							if (__LIB_1__::func_205(Global_35, iLocal_1240[15], 1, 0))
							{
								func_320(iParam1, 38, 0, 0);
							}
						}
					}
					break;
				case 38:
					if (iParam1->f_5 == 0)
					{
						__LIB_1__::func_683(&iLocal_1670, 262144);
						ENTITY::_SET_ENTITY_HEALTH(*iParam1, 200, 0);
						ENTITY::SET_ENTITY_MAX_HEALTH(*iParam1, 200);
						PED::SET_PED_COMBAT_RANGE(*iParam1, 0);
						PED::SET_PED_COMBAT_MOVEMENT(*iParam1, 2);
						PED::SET_PED_COMBAT_ABILITY(*iParam1, 2);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 42, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 50, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 0, false);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 93, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 5, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 17, false);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 114, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 28, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 68, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 46, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 96, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam1, 29, true);
						PED::SET_PED_CONFIG_FLAG(*iParam1, 112, true);
						PED::SET_PED_CONFIG_FLAG(*iParam1, 249, true);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(*iParam1, 150f, 1048576, 1);
						__LIB_1__::func_683(&(iParam1->f_9), 16777216);
						iParam1->f_5 = 1;
					}
					break;
			}
		}
		else
		{
			__LIB_0__::func_325(&(iParam1->f_2));
			if (!__LIB_0__::func_27(iParam1->f_9, 1))
			{
				__LIB_1__::func_683(&(iParam1->f_9), 1);
			}
		}
	}
}

void func_772(var uParam0, int iParam1, int iParam2, var uParam3)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*iParam1))
		{
			iParam1->f_18 = __LIB_0__::func_665(*iParam1, Global_35, 1, 1);
			switch (iParam1->f_3)
			{
				case 39:
					switch (iParam2)
					{
						case 2:
							if (iParam1->f_5 == 0)
							{
								STREAMING::REQUEST_ANIM_DICT("ai_damage@dead@base");
								if (STREAMING::HAS_ANIM_DICT_LOADED("ai_damage@dead@base"))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
									TASK::TASK_PLAY_ANIM(*iParam1, "ai_damage@dead@base", "dead_a", 1000f, -4f, -1, 131072, 0f, false, 0, false, 0, false);
									iParam1->f_5 = 1;
								}
							}
							break;
						case 4:
							if (iParam1->f_5 == 0)
							{
								switch (iParam1->f_7)
								{
									case 0:
										TASK::TASK_PLAY_ANIM_ADVANCED(*iParam1, "script_common@dead@male", "faceup_01", 2331.596f, 1432.824f, 90.3828f, 0f, 0f, 0.652f, 1000f, -4f, -1, 139268, 0.99f, 2, 0, 0);
										PED::_0x2208438012482A1A(*iParam1, true, false);
										iParam1->f_7++;
										break;
									case 1:
										if (ENTITY::IS_ENTITY_DEAD(*iParam1))
										{
											PHYSICS::ACTIVATE_PHYSICS(*iParam1);
											iParam1->f_5 = 1;
										}
										break;
								}
							}
							break;
					}
					break;
				case 19:
					if (iParam1->f_5 == 0)
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
						iParam1->f_5 = 1;
					}
					else if ((ENTITY::DOES_ENTITY_EXIST(Local_503[1 /*20*/]) && ENTITY::IS_ENTITY_DEAD(Local_503[1 /*20*/])) || __LIB_0__::func_27(Local_503[1 /*20*/].f_9, 1))
					{
						ENTITY::_SET_ENTITY_HEALTH(*iParam1, 0, 0);
					}
					break;
				case 20:
					if (iParam1->f_5 == 0)
					{
						iParam1->f_5 = 1;
					}
					else if ((ENTITY::DOES_ENTITY_EXIST(Local_503[1 /*20*/]) && ENTITY::IS_ENTITY_DEAD(Local_503[1 /*20*/])) || __LIB_0__::func_27(Local_503[1 /*20*/].f_9, 1))
					{
						ENTITY::_SET_ENTITY_HEALTH(*iParam1, 0, 0);
					}
					break;
				case 15:
					if (iParam1->f_5 == 0)
					{
						if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam3))
						{
							*uParam3 = ANIMSCENE::_CREATE_ANIM_SCENE("script@rcm@dtc3@ig@ig6_torture@ig6_torture", 0, "pl_loop_base", false, true);
							ANIMSCENE::LOAD_ANIM_SCENE(*uParam3);
						}
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam3) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(*uParam3, true, false))
						{
							if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(*uParam3, false))
							{
								if ((((!PED::IS_PED_INJURED(*iParam1) && !PED::IS_PED_INJURED(Local_664[0 /*20*/])) && !PED::IS_PED_INJURED(Local_664[1 /*20*/])) && !PED::IS_PED_INJURED(Local_664[2 /*20*/])) && !PED::IS_PED_INJURED(Local_664[3 /*20*/]))
								{
									ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(*iParam1, true);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_664[0 /*20*/], true);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_664[1 /*20*/], true);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_664[2 /*20*/], true);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_664[3 /*20*/], true);
									ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam3, "cs_genstorymale", *iParam1, 0);
									ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam3, "g_m_m_uniinbred_01", Local_664[0 /*20*/], 0);
									ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam3, "g_m_m_uniinbred_01^1", Local_664[1 /*20*/], 0);
									ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam3, "g_m_m_uniinbred_01^2", Local_664[2 /*20*/], 0);
									ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam3, "g_m_m_uniinbred_01^3", Local_664[3 /*20*/], 0);
									ANIMSCENE::START_ANIM_SCENE(*uParam3);
									ANIMSCENE::_0xDF7B5144E25CD3FE(*uParam3, "pl_bleadout");
									ANIMSCENE::_0xDF7B5144E25CD3FE(*uParam3, "pl_breakout_punch");
									ANIMSCENE::_0xDF7B5144E25CD3FE(*uParam3, "pl_breakout_onfire");
									ANIMSCENE::_0xDF7B5144E25CD3FE(*uParam3, "pl_breakout_torture");
									ANIMSCENE::_0xDF7B5144E25CD3FE(*uParam3, "pl_mainaction_torture");
									func_320(&(Local_664[0 /*20*/]), 15, 1, 0);
									func_320(&(Local_664[1 /*20*/]), 15, 1, 0);
									func_320(&(Local_664[2 /*20*/]), 15, 1, 0);
									func_320(&(Local_664[3 /*20*/]), 15, 1, 0);
									iLocal_1682 = GRAPHICS::CREATE_TRACKED_POINT();
									GRAPHICS::SET_TRACKED_POINT_INFO(iLocal_1682, 2307.536f, 1453.663f, 82.2312f, 1f);
									__LIB_1__::func_681(&(iParam1->f_9), 67108864);
								}
							}
							else
							{
								iParam1->f_5 = 1;
							}
						}
					}
					else
					{
						if (!__LIB_0__::func_27(iParam1->f_9, 67108864))
						{
							if (iLocal_1682 != -1)
							{
								if (GRAPHICS::IS_TRACKED_POINT_VISIBLE(iLocal_1682) || __LIB_0__::func_27(iLocal_1670, 4194304))
								{
									__LIB_1__::func_683(&(iParam1->f_9), 67108864);
								}
							}
						}
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam3) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(*uParam3, false))
						{
							if (ANIMSCENE::_0x23E33CB9F4A3F547(*uParam3, "pl_mainaction_torture"))
							{
								if ((((!PED::IS_PED_INJURED(*iParam1) && !PED::IS_PED_INJURED(Local_664[0 /*20*/])) && !PED::IS_PED_INJURED(Local_664[1 /*20*/])) && !PED::IS_PED_INJURED(Local_664[2 /*20*/])) && !PED::IS_PED_INJURED(Local_664[3 /*20*/]))
								{
									if (__LIB_0__::func_27(iParam1->f_9, 67108864))
									{
										func_320(iParam1, 16, 0, 0);
									}
								}
							}
						}
					}
					break;
				case 16:
					if (iParam1->f_5 == 0)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam3) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(*uParam3, false))
						{
							if ((((!PED::IS_PED_INJURED(*iParam1) && !PED::IS_PED_INJURED(Local_664[0 /*20*/])) && !PED::IS_PED_INJURED(Local_664[1 /*20*/])) && !PED::IS_PED_INJURED(Local_664[2 /*20*/])) && !PED::IS_PED_INJURED(Local_664[3 /*20*/]))
							{
								PED::SET_PED_CONFIG_FLAG(*iParam1, 18, true);
								PED::SET_RAGDOLL_BLOCKING_FLAGS(*iParam1, 4);
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(*iParam1, true);
								ENTITY::SET_ENTITY_PROOFS(*iParam1, 0, false);
								ENTITY::SET_ENTITY_MAX_HEALTH(*iParam1, 400);
								ENTITY::_SET_ENTITY_HEALTH(*iParam1, 400, 0);
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*uParam3, "pl_mainaction_torture", true);
								func_320(&(Local_664[0 /*20*/]), 16, 1, 0);
								func_320(&(Local_664[1 /*20*/]), 16, 1, 0);
								func_320(&(Local_664[2 /*20*/]), 16, 1, 0);
								func_320(&(Local_664[3 /*20*/]), 16, 1, 0);
								__LIB_1__::func_681(&(iParam1->f_9), 2);
								iParam1->f_5 = 1;
							}
						}
					}
					else
					{
						if (ENTITY::HAS_ANIM_EVENT_FIRED(*iParam1, 2065307137))
						{
							__LIB_1__::func_683(&(iParam1->f_9), 4);
						}
						else
						{
							__LIB_1__::func_681(&(iParam1->f_9), 4);
						}
						if (!__LIB_0__::func_27(iParam1->f_9, 2))
						{
							if (!PED::IS_PED_INJURED(*iParam1) && !PED::IS_PED_INJURED(Local_664[0 /*20*/]))
							{
								if (__LIB_0__::func_27(Local_664[0 /*20*/].f_9, 4) || (((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam3) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(*uParam3, false)) && ANIMSCENE::_0x1F0E401031E20146(*uParam3, "pl_mainaction_torture")) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(*uParam3) >= 0.65f))
								{
									WEAPON::_0xCEF4C65DE502D367(Local_664[0 /*20*/], 1, 0, 1, 0);
									AUDIO::PLAY_PAIN(*iParam1, 1, 0f, false, false);
									FIRE::START_ENTITY_FIRE(*iParam1, 0f, PED::GET_PED_BONE_INDEX(*iParam1, 33646), 0);
									ENTITY::SET_ENTITY_PROOFS(*iParam1, 2, false);
									__LIB_1__::func_683(&(iParam1->f_9), 2);
								}
							}
						}
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam3) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(*uParam3, false))
						{
							if (__LIB_0__::func_27(iParam1->f_9, 2))
							{
								if (ANIMSCENE::_0x1F0E401031E20146(*uParam3, "pl_mainaction_torture") && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(*uParam3) >= 0.775f)
								{
									ENTITY::SET_ENTITY_PROOFS(*iParam1, 0, false);
									ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(*iParam1, false);
									ENTITY::_SET_ENTITY_HEALTH(*iParam1, 0, 0);
									__LIB_1__::func_683(&(iParam1->f_9), 1);
								}
							}
						}
					}
					break;
			}
		}
		if (iParam2 == 0)
		{
			switch (iParam1->f_3)
			{
				case 15:
					break;
				case 16:
					if (iParam1->f_5 == 1)
					{
						if (((((((__LIB_0__::func_27(Local_664[0 /*20*/].f_9, 1) || __LIB_0__::func_27(Local_664[1 /*20*/].f_9, 1)) || __LIB_0__::func_27(Local_664[2 /*20*/].f_9, 1)) || __LIB_0__::func_27(Local_664[3 /*20*/].f_9, 1)) || __LIB_0__::func_27(Local_664[0 /*20*/].f_9, 134217728)) || __LIB_0__::func_27(Local_664[1 /*20*/].f_9, 134217728)) || __LIB_0__::func_27(Local_664[2 /*20*/].f_9, 134217728)) || __LIB_0__::func_27(Local_664[3 /*20*/].f_9, 134217728))
						{
							if ((ANIMSCENE::_0x23E33CB9F4A3F547(*uParam3, "pl_breakout_punch") && ANIMSCENE::_0x23E33CB9F4A3F547(*uParam3, "pl_breakout_onfire")) && ANIMSCENE::_0x23E33CB9F4A3F547(*uParam3, "pl_breakout_torture"))
							{
								func_320(iParam1, 17, 0, 0);
							}
						}
					}
					break;
				case 17:
					if (iParam1->f_5 == 0)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam3) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(*uParam3, false))
						{
							if (!PED::IS_PED_INJURED(*iParam1))
							{
								ENTITY::SET_ENTITY_PROOFS(*iParam1, 0, false);
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(*iParam1, false);
								ENTITY::_SET_ENTITY_HEALTH(*iParam1, 0, 0);
								__LIB_1__::func_683(&(iParam1->f_9), 1);
							}
							if (ANIMSCENE::_0x8D81E7824B7753F7(*uParam3, "s_mainaction_torture_p1", 1))
							{
								if (__LIB_0__::func_27(iParam1->f_9, 4))
								{
									ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*uParam3, "pl_breakout_punch", true);
								}
								else if (__LIB_0__::func_27(iParam1->f_9, 2))
								{
									ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*uParam3, "pl_breakout_onfire", true);
								}
								else
								{
									ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*uParam3, "pl_breakout_torture", true);
								}
							}
							else if (ANIMSCENE::_0x8D81E7824B7753F7(*uParam3, "s_mainaction_torture_p1", 1))
							{
							}
							func_320(&(Local_664[0 /*20*/]), 17, 1, 0);
							func_320(&(Local_664[1 /*20*/]), 17, 1, 0);
							func_320(&(Local_664[2 /*20*/]), 17, 1, 0);
							func_320(&(Local_664[3 /*20*/]), 17, 1, 0);
							iParam1->f_5 = 1;
						}
					}
					break;
			}
		}
		if (!__LIB_0__::func_27(iParam1->f_9, 1))
		{
			if (ENTITY::IS_ENTITY_DEAD(*iParam1))
			{
				if (iParam2 == 2)
				{
					STREAMING::REMOVE_ANIM_DICT("ai_damage@dead@base");
				}
				__LIB_1__::func_683(&(iParam1->f_9), 1);
			}
		}
	}
}

bool func_773(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (func_1365(iParam0[iVar0 /*20*/]))
		{
		}
		else
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_774()
{
	int iVar0;
	int iVar1;
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_1365(&(Local_503[iVar0 /*20*/])))
		{
		}
		else
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

void func_775(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	if (__LIB_0__::func_27(iLocal_1670, 8388608))
	{
		if (((((!func_1366(69) || !func_1366(70)) || !func_1366(71)) || !func_1366(72)) || !func_1366(73)) || !func_1366(74))
		{
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1692))
			{
				if (((((((ANIMSCENE::_0xF94692EB9DC15D74(iLocal_1692, 0) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iLocal_1692, false)) || ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(iLocal_1692)) || ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_1692, "G_M_M_UNIINBRED_01")) || ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_1692, "G_M_M_UNIINBRED_01^1")) || ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_1692, "G_M_M_UNIINBRED_01^2")) || ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_1692, "G_M_M_UNIINBRED_01^3")) || ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_1692, "G_M_M_UNIINBRED_01^4"))
				{
					if (!__LIB_5__::func_463())
					{
						iVar4 = __LIB_11__::func_672(Global_35, joaat("REL_PLAYER_ENEMY"), MISC::GET_RANDOM_INT_IN_RANGE(0, 6), 0, 28);
						if ((ENTITY::DOES_ENTITY_EXIST(iVar4) && !PED::IS_PED_DEAD_OR_DYING(iVar4, true)) && !FIRE::IS_ENTITY_ON_FIRE(iVar4))
						{
							if (iVar4 == Local_503[0 /*20*/] && !func_1366(72))
							{
								if (__LIB_12__::func_876(uParam0, "RDCH3_DYNA4", 0))
								{
									func_788(72, 1);
								}
							}
							else if (iVar4 == Local_503[1 /*20*/])
							{
								if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0 && !func_1366(69))
								{
									__LIB_12__::func_875(uParam0, Local_503[1 /*20*/], "INB_PED1", 0);
									if (__LIB_12__::func_876(uParam0, "RDCH3_DYNA1", 0))
									{
										func_788(69, 1);
									}
								}
								else if (!func_1366(72))
								{
									__LIB_12__::func_875(uParam0, Local_503[1 /*20*/], "INB_PED4", 0);
									if (__LIB_12__::func_876(uParam0, "RDCH3_DYNA4", 0))
									{
										func_788(72, 1);
									}
								}
							}
							else if (iVar4 == Local_503[2 /*20*/] && !func_1366(70))
							{
								__LIB_12__::func_875(uParam0, Local_503[2 /*20*/], "INB_PED2", 0);
								if (__LIB_12__::func_876(uParam0, "RDCH3_DYNA2", 0))
								{
									func_788(70, 1);
								}
							}
							else if (iVar4 == Local_503[3 /*20*/] && !func_1366(71))
							{
								__LIB_12__::func_875(uParam0, Local_503[3 /*20*/], "INB_PED3", 0);
								if (__LIB_12__::func_876(uParam0, "RDCH3_DYNA3", 0))
								{
									func_788(71, 1);
								}
							}
							else if (iVar4 == Local_503[4 /*20*/] && !func_1366(73))
							{
								__LIB_12__::func_875(uParam0, Local_503[4 /*20*/], "INB_PED5", 0);
								if (__LIB_12__::func_876(uParam0, "RDCH3_DYNA5", 0))
								{
									func_788(73, 1);
								}
							}
							else if (iVar4 == Local_503[5 /*20*/] && !func_1366(74))
							{
								__LIB_12__::func_875(uParam0, Local_503[5 /*20*/], "INB_PED6", 0);
								if (__LIB_12__::func_876(uParam0, "RDCH3_DYNA6", 0))
								{
									func_788(74, 1);
								}
							}
						}
					}
				}
			}
		}
	}
	if (!__LIB_0__::func_27(iLocal_1670, 262144))
	{
	}
	else if (((((!func_1366(75) && !func_1366(76)) && !func_1366(77)) && !func_1366(78)) && !func_1366(79)) && !func_1366(80))
	{
		if (!__LIB_0__::func_27(iLocal_1670, 8388608))
		{
			if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
			{
				iVar4 = __LIB_11__::func_672(Global_35, joaat("REL_PLAYER_ENEMY"), 0, 0, 28);
				if ((ENTITY::DOES_ENTITY_EXIST(iVar4) && !PED::IS_PED_DEAD_OR_DYING(iVar4, true)) && !FIRE::IS_ENTITY_ON_FIRE(iVar4))
				{
					if ((PED::IS_PED_IN_COMBAT(iVar4, 0) || PED::_0x77525BBF433F2CD6(iVar4)) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iVar4, true, false), ENTITY::GET_ENTITY_COORDS(Global_35, true, false), true) < 35f)
					{
						vVar1 = { __LIB_13__::func_515(&(uParam0->f_643), iVar4) };
						if (MISC::IS_STRING_NULL_OR_EMPTY(&vVar1))
						{
							switch (MISC::GET_RANDOM_INT_IN_RANGE(1, 7))
							{
								case 1:
									iVar0 = 1;
									__LIB_12__::func_875(uParam0, iVar4, "INB_PED1", 1);
									break;
								case 2:
									iVar0 = 2;
									__LIB_12__::func_875(uParam0, iVar4, "INB_PED2", 1);
									break;
								case 3:
									iVar0 = 3;
									__LIB_12__::func_875(uParam0, iVar4, "INB_PED3", 1);
									break;
								case 4:
									iVar0 = 4;
									__LIB_12__::func_875(uParam0, iVar4, "INB_PED4", 1);
									break;
								case 5:
									iVar0 = 5;
									__LIB_12__::func_875(uParam0, iVar4, "INB_PED5", 1);
									break;
								case 6:
									iVar0 = 6;
									__LIB_12__::func_875(uParam0, iVar4, "INB_PED6", 1);
									break;
							}
						}
						else if (MISC::ARE_STRINGS_EQUAL(&vVar1, "INB_PED1"))
						{
							iVar0 = 1;
						}
						else if (MISC::ARE_STRINGS_EQUAL(&vVar1, "INB_PED2"))
						{
							iVar0 = 2;
						}
						else if (MISC::ARE_STRINGS_EQUAL(&vVar1, "INB_PED3"))
						{
							iVar0 = 3;
						}
						else if (MISC::ARE_STRINGS_EQUAL(&vVar1, "INB_PED4"))
						{
							iVar0 = 4;
						}
						else if (MISC::ARE_STRINGS_EQUAL(&vVar1, "INB_PED5"))
						{
							iVar0 = 5;
						}
						else if (MISC::ARE_STRINGS_EQUAL(&vVar1, "INB_PED6"))
						{
							iVar0 = 6;
						}
						switch (iVar0)
						{
							case 1:
								if (__LIB_12__::func_876(uParam0, "RDCH3_SNEAK1", 0))
								{
									iLocal_1685 = MISC::GET_GAME_TIMER();
									func_788(75, 1);
								}
								break;
							case 2:
								if (__LIB_12__::func_876(uParam0, "RDCH3_SNEAK2", 0))
								{
									iLocal_1685 = MISC::GET_GAME_TIMER();
									func_788(76, 1);
								}
								break;
							case 3:
								if (__LIB_12__::func_876(uParam0, "RDCH3_SNEAK3", 0))
								{
									iLocal_1685 = MISC::GET_GAME_TIMER();
									func_788(77, 1);
								}
								break;
							case 4:
								if (__LIB_12__::func_876(uParam0, "RDCH3_SNEAK4", 0))
								{
									iLocal_1685 = MISC::GET_GAME_TIMER();
									func_788(78, 1);
								}
								break;
							case 5:
								if (__LIB_12__::func_876(uParam0, "RDCH3_SNEAK5", 0))
								{
									iLocal_1685 = MISC::GET_GAME_TIMER();
									func_788(79, 1);
								}
								break;
							case 6:
								if (__LIB_12__::func_876(uParam0, "RDCH3_SNEAK6", 0))
								{
									iLocal_1685 = MISC::GET_GAME_TIMER();
									func_788(80, 1);
								}
								break;
						}
					}
				}
			}
		}
		else
		{
			func_788(75, 1);
			func_788(76, 1);
			func_788(77, 1);
			func_788(78, 1);
			func_788(79, 1);
			func_788(80, 1);
			iLocal_1684 = 0;
			iLocal_1685 = MISC::GET_GAME_TIMER();
		}
	}
	else
	{
		if (!func_1366(68))
		{
			if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
			{
				if (__LIB_12__::func_876(uParam0, "RDCH3_STLH_KICK", 0))
				{
					func_788(68, 1);
				}
			}
		}
		if (((((!func_1366(81) && !func_1366(82)) && !func_1366(83)) && !func_1366(84)) && !func_1366(85)) && !func_1366(86))
		{
			if (MISC::GET_GAME_TIMER() - iLocal_1685) > (15000 + iLocal_1684 * 2500)
			{
				if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
				{
					iVar4 = __LIB_11__::func_672(Global_35, joaat("REL_PLAYER_ENEMY"), MISC::GET_RANDOM_INT_IN_RANGE(0, 3), 0, 28);
					if ((ENTITY::DOES_ENTITY_EXIST(iVar4) && !PED::IS_PED_DEAD_OR_DYING(iVar4, true)) && !FIRE::IS_ENTITY_ON_FIRE(iVar4))
					{
						if ((PED::IS_PED_IN_COMBAT(iVar4, 0) || PED::_0x77525BBF433F2CD6(iVar4)) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iVar4, true, false), ENTITY::GET_ENTITY_COORDS(Global_35, true, false), true) < 30f)
						{
							vVar1 = { __LIB_13__::func_515(&(uParam0->f_643), iVar4) };
							if (MISC::IS_STRING_NULL_OR_EMPTY(&vVar1))
							{
								switch (MISC::GET_RANDOM_INT_IN_RANGE(1, 7))
								{
									case 1:
										iVar0 = 1;
										__LIB_12__::func_875(uParam0, iVar4, "INB_PED1", 1);
										break;
									case 2:
										iVar0 = 2;
										__LIB_12__::func_875(uParam0, iVar4, "INB_PED2", 1);
										break;
									case 3:
										iVar0 = 3;
										__LIB_12__::func_875(uParam0, iVar4, "INB_PED3", 1);
										break;
									case 4:
										iVar0 = 4;
										__LIB_12__::func_875(uParam0, iVar4, "INB_PED4", 1);
										break;
									case 5:
										iVar0 = 5;
										__LIB_12__::func_875(uParam0, iVar4, "INB_PED5", 1);
										break;
									case 6:
										iVar0 = 6;
										__LIB_12__::func_875(uParam0, iVar4, "INB_PED6", 1);
										break;
								}
							}
							else if (MISC::ARE_STRINGS_EQUAL(&vVar1, "INB_PED1"))
							{
								iVar0 = 1;
							}
							else if (MISC::ARE_STRINGS_EQUAL(&vVar1, "INB_PED2"))
							{
								iVar0 = 2;
							}
							else if (MISC::ARE_STRINGS_EQUAL(&vVar1, "INB_PED3"))
							{
								iVar0 = 3;
							}
							else if (MISC::ARE_STRINGS_EQUAL(&vVar1, "INB_PED4"))
							{
								iVar0 = 4;
							}
							else if (MISC::ARE_STRINGS_EQUAL(&vVar1, "INB_PED5"))
							{
								iVar0 = 5;
							}
							else if (MISC::ARE_STRINGS_EQUAL(&vVar1, "INB_PED6"))
							{
								iVar0 = 6;
							}
							switch (iVar0)
							{
								case 1:
									if (__LIB_12__::func_876(uParam0, "RDCH3_2WAVE1", 0))
									{
										iLocal_1684++;
										iLocal_1685 = MISC::GET_GAME_TIMER();
										func_788(81, 1);
									}
									break;
								case 2:
									if (__LIB_12__::func_876(uParam0, "RDCH3_2WAVE2", 0))
									{
										iLocal_1684++;
										iLocal_1685 = MISC::GET_GAME_TIMER();
										func_788(82, 1);
									}
									break;
								case 3:
									if (__LIB_12__::func_876(uParam0, "RDCH3_2WAVE3", 0))
									{
										iLocal_1684++;
										iLocal_1685 = MISC::GET_GAME_TIMER();
										func_788(83, 1);
									}
									break;
								case 4:
									if (__LIB_12__::func_876(uParam0, "RDCH3_2WAVE4", 0))
									{
										iLocal_1684++;
										iLocal_1685 = MISC::GET_GAME_TIMER();
										func_788(84, 1);
									}
									break;
								case 5:
									if (__LIB_12__::func_876(uParam0, "RDCH3_2WAVE5", 0))
									{
										iLocal_1684++;
										iLocal_1685 = MISC::GET_GAME_TIMER();
										func_788(85, 1);
										func_788(86, 1);
									}
									break;
								case 6:
									break;
							}
						}
					}
				}
			}
		}
		else if (((((!func_1366(87) && !func_1366(88)) && !func_1366(89)) && !func_1366(90)) && !func_1366(91)) && !func_1366(92))
		{
			if (MISC::GET_GAME_TIMER() - iLocal_1685) > (15000 + iLocal_1684 * 2500)
			{
				if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
				{
					iVar4 = __LIB_11__::func_672(Global_35, joaat("REL_PLAYER_ENEMY"), MISC::GET_RANDOM_INT_IN_RANGE(0, 3), 0, 28);
					if ((ENTITY::DOES_ENTITY_EXIST(iVar4) && !PED::IS_PED_DEAD_OR_DYING(iVar4, true)) && !FIRE::IS_ENTITY_ON_FIRE(iVar4))
					{
						if ((PED::IS_PED_IN_COMBAT(iVar4, 0) || PED::_0x77525BBF433F2CD6(iVar4)) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iVar4, true, false), ENTITY::GET_ENTITY_COORDS(Global_35, true, false), true) < 30f)
						{
							vVar1 = { __LIB_13__::func_515(&(uParam0->f_643), iVar4) };
							if (MISC::IS_STRING_NULL_OR_EMPTY(&vVar1))
							{
								switch (MISC::GET_RANDOM_INT_IN_RANGE(1, 7))
								{
									case 1:
										iVar0 = 1;
										__LIB_12__::func_875(uParam0, iVar4, "INB_PED1", 1);
										break;
									case 2:
										iVar0 = 2;
										__LIB_12__::func_875(uParam0, iVar4, "INB_PED2", 1);
										break;
									case 3:
										iVar0 = 3;
										__LIB_12__::func_875(uParam0, iVar4, "INB_PED3", 1);
										break;
									case 4:
										iVar0 = 4;
										__LIB_12__::func_875(uParam0, iVar4, "INB_PED4", 1);
										break;
									case 5:
										iVar0 = 5;
										__LIB_12__::func_875(uParam0, iVar4, "INB_PED5", 1);
										break;
									case 6:
										iVar0 = 6;
										__LIB_12__::func_875(uParam0, iVar4, "INB_PED6", 1);
										break;
								}
							}
							else if (MISC::ARE_STRINGS_EQUAL(&vVar1, "INB_PED1"))
							{
								iVar0 = 1;
							}
							else if (MISC::ARE_STRINGS_EQUAL(&vVar1, "INB_PED2"))
							{
								iVar0 = 2;
							}
							else if (MISC::ARE_STRINGS_EQUAL(&vVar1, "INB_PED3"))
							{
								iVar0 = 3;
							}
							else if (MISC::ARE_STRINGS_EQUAL(&vVar1, "INB_PED4"))
							{
								iVar0 = 4;
							}
							else if (MISC::ARE_STRINGS_EQUAL(&vVar1, "INB_PED5"))
							{
								iVar0 = 5;
							}
							else if (MISC::ARE_STRINGS_EQUAL(&vVar1, "INB_PED6"))
							{
								iVar0 = 6;
							}
							switch (iVar0)
							{
								case 1:
									if (__LIB_12__::func_876(uParam0, "RDCH3_3WAVE1", 0))
									{
										iLocal_1684++;
										iLocal_1685 = MISC::GET_GAME_TIMER();
										func_788(87, 1);
									}
									break;
								case 2:
									if (__LIB_12__::func_876(uParam0, "RDCH3_3WAVE2", 0))
									{
										iLocal_1684++;
										iLocal_1685 = MISC::GET_GAME_TIMER();
										func_788(88, 1);
									}
									break;
								case 3:
									if (__LIB_12__::func_876(uParam0, "RDCH3_3WAVE3", 0))
									{
										iLocal_1684++;
										iLocal_1685 = MISC::GET_GAME_TIMER();
										func_788(89, 1);
									}
									break;
								case 4:
									if (__LIB_12__::func_876(uParam0, "RDCH3_3WAVE4", 0))
									{
										iLocal_1684++;
										iLocal_1685 = MISC::GET_GAME_TIMER();
										func_788(90, 1);
									}
									break;
								case 5:
									if (__LIB_12__::func_876(uParam0, "RDCH3_3WAVE5", 0))
									{
										iLocal_1684++;
										iLocal_1685 = MISC::GET_GAME_TIMER();
										func_788(91, 1);
									}
									break;
								case 6:
									if (__LIB_12__::func_876(uParam0, "RDCH3_3WAVE6", 0))
									{
										iLocal_1684++;
										iLocal_1685 = MISC::GET_GAME_TIMER();
										func_788(92, 1);
									}
									break;
							}
						}
					}
				}
			}
		}
		if (!func_1366(93))
		{
			if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_846[0 /*20*/]))
				{
					if ((!ENTITY::IS_ENTITY_DEAD(Local_846[0 /*20*/]) && !PED::IS_PED_DEAD_OR_DYING(Local_846[0 /*20*/], true)) && !FIRE::IS_ENTITY_ON_FIRE(Local_846[0 /*20*/]))
					{
						if (__LIB_0__::func_27(Local_846[0 /*20*/].f_9, 16777216))
						{
							if (PED::IS_PED_IN_COMBAT(Local_846[0 /*20*/], 0) || (PED::_0x77525BBF433F2CD6(Local_846[0 /*20*/]) && TASK::IS_PED_RUNNING(Local_846[0 /*20*/])))
							{
								if (Local_846[0 /*20*/].f_18 < 20f || Local_846[0 /*20*/].f_19 < 20f)
								{
									__LIB_12__::func_875(uParam0, Local_846[0 /*20*/], "INB_PED2", 0);
									AUDIO::SET_AMBIENT_VOICE_NAME(Local_846[0 /*20*/], "0204_G_M_M_UNIINBRED_03_WHITE_02");
									if (__LIB_12__::func_876(uParam0, "RDCH3_2WAVE2", 0))
									{
										func_788(93, 1);
									}
								}
							}
						}
					}
				}
			}
		}
		if (func_1366(68))
		{
			if ((MISC::GET_GAME_TIMER() - iLocal_1683) > 0)
			{
				iVar4 = __LIB_11__::func_672(Global_35, joaat("REL_PLAYER_ENEMY"), MISC::GET_RANDOM_INT_IN_RANGE(0, 4), 0, 28);
				if ((ENTITY::DOES_ENTITY_EXIST(iVar4) && !PED::IS_PED_DEAD_OR_DYING(iVar4, true)) && !FIRE::IS_ENTITY_ON_FIRE(iVar4))
				{
					if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iVar4) && !AUDIO::_0x54B187F111D9C6F8(iVar4, 1))
					{
						if (__LIB_2__::func_122(iVar4, "SCREAM_TERROR", joaat("SPEECH_PARAMS_FORCE_SHOUTED"), 0, 1, 0, 0, 1))
						{
							iLocal_1683 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3500, 5001));
						}
					}
				}
			}
		}
	}
}

void func_776(var uParam0, int iParam1, int iParam2)
{
	Vector3 vVar0;
	int iVar3;
	int iVar4;
	if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*iParam1))
		{
			iParam1->f_18 = __LIB_0__::func_665(*iParam1, Global_35, 1, 1);
			iParam1->f_19 = __LIB_0__::func_665(*iParam1, Local_142, 1, 1);
			PED::SET_PED_RESET_FLAG(*iParam1, 49, true);
			switch (iParam1->f_3)
			{
				case 0:
					if (!__LIB_0__::func_27(iParam1->f_9, 2097152))
					{
						switch (iParam2)
						{
							case 0:
								__LIB_10__::func_979(*iParam1, "", 5f, 0, 0, 0);
								break;
							case 1:
								PED::SET_PED_CONFIG_FLAG(*iParam1, 297, true);
								break;
							case 3:
							case 4:
								__LIB_10__::func_979(*iParam1, "", 5f, 0, 0, 0);
								break;
							case 5:
								__LIB_10__::func_979(*iParam1, "", 5f, 0, 0, 0);
								break;
						}
						PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), *iParam1, 15, 1, 1);
						PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), *iParam1, 8, 1, 1);
						__LIB_1__::func_683(&(iParam1->f_9), 2097152);
					}
					else if (!__LIB_0__::func_27(iParam1->f_9, 8388608) && !__LIB_5__::func_463())
					{
						if (!__LIB_0__::func_139(iLocal_1232[0]) && !__LIB_0__::func_139(iLocal_1232[1]))
						{
							if (__LIB_10__::func_896(PLAYER::PLAYER_ID(), *iParam1) && __LIB_0__::func_48(Global_35, *iParam1, 5f, 1))
							{
								iLocal_1232[0] = __LIB_4__::func_450("RDCH31_U_BHOLLOW", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
								if (__LIB_0__::func_139(iLocal_1232[0]))
								{
									__LIB_9__::func_332(&(iLocal_1232[0]), *iParam1);
									if (!__LIB_0__::func_27(iParam1->f_9, 4194304))
									{
										__LIB_1__::func_221(iLocal_1232[0], 1, 1);
									}
									else
									{
										__LIB_1__::func_221(iLocal_1232[0], 0, 1);
									}
								}
								__LIB_1__::func_683(&(iParam1->f_9), 8388608);
							}
						}
					}
					else
					{
						if (__LIB_0__::func_139(iLocal_1232[0]))
						{
							if (!__LIB_0__::func_27(iParam1->f_9, 4194304))
							{
								__LIB_1__::func_221(iLocal_1232[0], 1, 1);
							}
							else
							{
								__LIB_1__::func_221(iLocal_1232[0], 0, 1);
							}
						}
						if ((__LIB_0__::func_139(iLocal_1232[0]) && __LIB_0__::func_572(iLocal_1232[0], 0)) && !__LIB_5__::func_463())
						{
							if (__LIB_1__::func_732(iLocal_1232[0], 1))
							{
								if (!PED::IS_PED_INJURED(Global_35) && !PED::IS_PED_INJURED(*iParam1))
								{
									TASK::TASK_LOOK_AT_ENTITY(Global_35, *iParam1, 5000, 2048, 51, 0);
									TASK::TASK_LOOK_AT_ENTITY(*iParam1, Global_35, 5000, 2048, 51, 0);
									TASK::_0xE7FA07624574B79A(*iParam1, Global_35, 2, 2, 5f, 1, 0, 0, 0);
								}
								switch (iParam2)
								{
									case 0:
										__LIB_12__::func_875(uParam0, *iParam1, "RDCH3_RES3", 0);
										if (__LIB_12__::func_876(uParam0, "RDCH3_BCRES3A", 0))
										{
											func_788(55, 1);
										}
										break;
									case 1:
										__LIB_12__::func_875(uParam0, *iParam1, "RDCH3_RES4", 0);
										if (__LIB_12__::func_876(uParam0, "RDCH3_BCRES4A", 0))
										{
											func_788(56, 1);
										}
										break;
									case 3:
										__LIB_12__::func_875(uParam0, *iParam1, "RDCH3_RES2", 0);
										if (__LIB_12__::func_876(uParam0, "RDCH3_BCRES2A", 0))
										{
											func_788(54, 1);
										}
										break;
									case 4:
										__LIB_12__::func_875(uParam0, *iParam1, "RDCH3_RES1", 0);
										if (__LIB_12__::func_876(uParam0, "RDCH3_BCRES1A", 0))
										{
											func_788(53, 1);
										}
										break;
								}
								__LIB_1__::func_683(&(iParam1->f_9), 4194304);
							}
						}
					}
					if (__LIB_0__::func_139(iLocal_1232[0]) || __LIB_0__::func_139(iLocal_1232[1]))
					{
						if ((((!__LIB_10__::func_896(PLAYER::PLAYER_ID(), Local_968[0 /*20*/]) && !__LIB_10__::func_896(PLAYER::PLAYER_ID(), Local_968[1 /*20*/])) && !__LIB_10__::func_896(PLAYER::PLAYER_ID(), Local_968[2 /*20*/])) && !__LIB_10__::func_896(PLAYER::PLAYER_ID(), Local_968[3 /*20*/])) && !__LIB_10__::func_896(PLAYER::PLAYER_ID(), Local_968[4 /*20*/]))
						{
							__LIB_13__::func_520(&iLocal_1232);
						}
					}
					if (__LIB_0__::func_27(iParam1->f_9, 8388608))
					{
						if (!__LIB_10__::func_896(PLAYER::PLAYER_ID(), *iParam1))
						{
							__LIB_1__::func_681(&(iParam1->f_9), 8388608);
						}
					}
					switch (iParam2)
					{
						case 0:
							switch (iParam1->f_7)
							{
								case 0:
									if (iParam1->f_5 == 0)
									{
										STREAMING::_REQUEST_SCENARIO_TYPE(joaat("WORLD_HUMAN_DRINKING"), 15, 0, 0);
										if (STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("WORLD_HUMAN_DRINKING"), false))
										{
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, false);
											TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(*iParam1, 2489.665f, 776.5205f, 67.38f, 1f, -1, false, false, true, false);
											iParam1->f_5 = 1;
										}
									}
									else if (__LIB_1__::func_205(Global_35, iLocal_1240[6], 1, 0) || __LIB_0__::func_27(iLocal_1670, 8192))
									{
										func_320(iParam1, 0, 0, 1);
									}
									break;
								case 1:
									if (iParam1->f_5 == 0)
									{
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, false);
										TASK::_0xE7FA07624574B79A(*iParam1, Global_35, 3, 1, 5f, 1, Local_142, 0, 0);
										iParam1->f_6 = MISC::GET_GAME_TIMER();
										iParam1->f_5 = 1;
									}
									else if ((MISC::GET_GAME_TIMER() - iParam1->f_6) > 6000)
									{
										if (__LIB_1__::func_205(Global_35, iLocal_1240[6], 1, 0) || __LIB_0__::func_27(iLocal_1670, 8192))
										{
											func_320(iParam1, 0, 0, 2);
										}
									}
									break;
								case 2:
									if (iParam1->f_5 == 0)
									{
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, false);
										TASK::TASK_LOOK_AT_ENTITY(*iParam1, Global_35, 3000, 2048, 51, 0);
										TASK::_0xE7FA07624574B79A(*iParam1, Global_35, 3, 1, 3f, 1, Local_142, 0, 0);
										iParam1->f_5 = 1;
									}
									break;
							}
							break;
						case 1:
							switch (iParam1->f_7)
							{
								case 0:
									if (iParam1->f_5 == 0)
									{
										STREAMING::_REQUEST_SCENARIO_TYPE(joaat("WORLD_HUMAN_SIT_DRINK"), 15, 0, 0);
										if (STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("WORLD_HUMAN_SIT_DRINK"), false))
										{
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, false);
											TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(*iParam1, 2491.213f, 795.4955f, 66.2686f, 1f, -1, false, false, true, false);
											iParam1->f_5 = 1;
										}
									}
									else if (__LIB_1__::func_205(Global_35, iLocal_1240[6], 1, 0) || __LIB_0__::func_27(iLocal_1670, 8192))
									{
										func_320(iParam1, 0, 0, 1);
									}
									break;
								case 1:
									if (iParam1->f_5 == 0)
									{
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, false);
										TASK::_0xE7FA07624574B79A(*iParam1, Global_35, 3, 1, 3f, 1, Local_142, 0, 0);
										iParam1->f_6 = MISC::GET_GAME_TIMER();
										iParam1->f_5 = 1;
									}
									else if ((MISC::GET_GAME_TIMER() - iParam1->f_6) > 3000)
									{
										if (__LIB_1__::func_205(Global_35, iLocal_1240[6], 1, 0) || __LIB_0__::func_27(iLocal_1670, 8192))
										{
											func_320(iParam1, 0, 0, 2);
										}
									}
									break;
								case 2:
									if (iParam1->f_5 == 0)
									{
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, false);
										TASK::TASK_LOOK_AT_ENTITY(*iParam1, Global_35, 3500, 2048, 51, 0);
										TASK::_0xE7FA07624574B79A(*iParam1, Global_35, 3, 1, 3f, 1, Local_142, 0, 0);
										iParam1->f_5 = 1;
									}
									break;
							}
							break;
						case 2:
							if (iParam1->f_5 == 0)
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, false);
								ENTITY::_SET_ENTITY_COORDS_AND_HEADING(*iParam1, 2516.937f, 801.5667f, 70.2277f, 64.2476f, true, false, true);
								WEAPON::_GIVE_WEAPON_TO_PED_2(*iParam1, joaat("WEAPON_MELEE_TORCH"), -1, true, false, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
								iParam1->f_5 = 1;
							}
							else if (iParam1->f_18 < 110f || __LIB_1__::func_205(Global_35, iLocal_1240[5], 1, 0))
							{
								func_320(iParam1, 10, 0, 0);
							}
							break;
						case 3:
							switch (iParam1->f_7)
							{
								case 0:
									if (iParam1->f_5 == 0)
									{
										STREAMING::_REQUEST_SCENARIO_TYPE(joaat("WORLD_HUMAN_WASH_DISHES_TABLE_LEFT"), 15, 0, 0);
										if (STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("WORLD_HUMAN_WASH_DISHES_TABLE_LEFT"), false))
										{
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, false);
											TASK::_TASK_USE_SCENARIO_POINT(*iParam1, iLocal_1508[0], 0, 0, false, true, 0, false, -1f, false);
											iParam1->f_5 = 1;
										}
									}
									else if (__LIB_1__::func_205(Global_35, iLocal_1240[6], 1, 0) || __LIB_0__::func_27(iLocal_1670, 8192))
									{
										func_320(iParam1, 0, 0, 1);
									}
									break;
								case 1:
									if (iParam1->f_5 == 0)
									{
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, false);
										TASK::_0xE7FA07624574B79A(*iParam1, Global_35, 3, 1, 2.5f, 1, Local_142, 0, 0);
										iParam1->f_6 = MISC::GET_GAME_TIMER();
										iParam1->f_5 = 1;
									}
									else if ((MISC::GET_GAME_TIMER() - iParam1->f_6) > 3000)
									{
										if (__LIB_1__::func_205(Global_35, iLocal_1240[6], 1, 0) || __LIB_0__::func_27(iLocal_1670, 8192))
										{
											func_320(iParam1, 0, 0, 2);
										}
									}
									break;
								case 2:
									if (iParam1->f_5 == 0)
									{
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, false);
										TASK::TASK_LOOK_AT_ENTITY(*iParam1, Global_35, 3500, 2048, 51, 0);
										TASK::_0xE7FA07624574B79A(*iParam1, Global_35, 3, 1, 3f, 1, Local_142, 0, 0);
										iParam1->f_5 = 1;
									}
									break;
							}
							break;
						case 4:
							switch (iParam1->f_7)
							{
								case 0:
									if (iParam1->f_5 == 0)
									{
										STREAMING::_REQUEST_SCENARIO_TYPE(joaat("WORLD_HUMAN_WASHBOARD_BASIN"), 15, 0, 0);
										if (STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("WORLD_HUMAN_WASHBOARD_BASIN"), false))
										{
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, false);
											ENTITY::_SET_ENTITY_COORDS_AND_HEADING(*iParam1, 2483.735f, 771.999f, 66.2811f, 33.4198f, true, false, true);
											TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(*iParam1, 2483.735f, 771.999f, 66.2811f, 1f, -1, false, false, true, false);
											iParam1->f_5 = 1;
										}
									}
									else if (__LIB_1__::func_205(Global_35, iLocal_1240[6], 1, 0) || __LIB_0__::func_27(iLocal_1670, 8192))
									{
										func_320(iParam1, 0, 0, 1);
									}
									break;
								case 1:
									if (iParam1->f_5 == 0)
									{
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, false);
										TASK::_0xE7FA07624574B79A(*iParam1, Global_35, 3, 1, 2.5f, 1, Local_142, 0, 0);
										iParam1->f_6 = MISC::GET_GAME_TIMER();
										iParam1->f_5 = 1;
									}
									else if ((MISC::GET_GAME_TIMER() - iParam1->f_6) > 3000)
									{
										if (__LIB_1__::func_205(Global_35, iLocal_1240[6], 1, 0) || __LIB_0__::func_27(iLocal_1670, 8192))
										{
											func_320(iParam1, 0, 0, 2);
										}
									}
									break;
								case 2:
									if (iParam1->f_5 == 0)
									{
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, false);
										TASK::TASK_LOOK_AT_ENTITY(*iParam1, Global_35, 3500, 2048, 51, 0);
										TASK::_0xE7FA07624574B79A(*iParam1, Global_35, 3, 1, 3f, 1, Local_142, 0, 0);
										iParam1->f_5 = 1;
									}
									break;
							}
							break;
						case 5:
							func_320(iParam1, 29, 0, 0);
							break;
					}
					break;
				case 10:
					switch (iParam1->f_7)
					{
						case 0:
							if (iParam1->f_5 == 0)
							{
								ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam1, 1);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, false);
								TASK::CLEAR_SEQUENCE_TASK(&iVar3);
								TASK::OPEN_SEQUENCE_TASK(&iVar3);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2464.084f, 823.0726f, 73.6095f, 1f, 60000, (0.25f * 2f), 1048581, 40000f);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2438.713f, 834.4807f, 71.0464f, 1f, 60000, (0.25f * 6f), 1048581, 40000f);
								TASK::CLOSE_SEQUENCE_TASK(iVar3);
								TASK::TASK_PERFORM_SEQUENCE(*iParam1, iVar3);
								TASK::CLEAR_SEQUENCE_TASK(&iVar3);
								PED::FORCE_PED_MOTION_STATE(*iParam1, joaat("MOTIONSTATE_WALK"), true, 0, false);
								iParam1->f_5 = 1;
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(*iParam1, 242628503, true) == 8)
							{
								func_320(iParam1, 10, 0, 1);
							}
							break;
						case 1:
							if (iParam1->f_5 == 0)
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, false);
								TASK::TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS(*iParam1, 2354.287f, 740.7737f, 69.3439f, 1f, 0, false, 524311, -1f, 0, 1101004800 /* Float: 20f */, 192, 500f);
								iParam1->f_5 = 1;
							}
							break;
					}
					break;
				case 29:
					switch (iParam1->f_7)
					{
						case 0:
							if (iParam1->f_5 == 0)
							{
								if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_1508[1]))
								{
									STREAMING::_REQUEST_SCENARIO_TYPE(joaat("WORLD_HUMAN_PEE"), 15, 0, 0);
									if (STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("WORLD_HUMAN_PEE"), false))
									{
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
										iParam1->f_5 = 1;
									}
								}
							}
							else if (iParam1->f_18 < 20.5f || __LIB_10__::func_397(Global_35, "rdtc3_charles_butcher_creek_to_beaver_hollow", &vVar0) >= 15)
							{
								func_320(iParam1, 29, 0, 1);
							}
							break;
						case 1:
							if (iParam1->f_5 == 0)
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
								PED::_0xEC6935EBE0847B90(*iParam1, ENTITY::GET_ENTITY_COORDS(Global_35, true, false));
								TASK::_TASK_START_SCENARIO_IN_PLACE(*iParam1, joaat("WORLD_HUMAN_SIT_GROUND_WHITTLE"), 0, true, 0, -1f, false);
								iParam1->f_6 = 0;
								iParam1->f_5 = 1;
							}
							else
							{
								if (!__LIB_0__::func_27(iParam1->f_9, 131072))
								{
									if (iParam1->f_18 < 5.5f)
									{
										if (!AUDIO::IS_ANY_SPEECH_PLAYING(*iParam1) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(*iParam1))
										{
											if (__LIB_2__::func_122(*iParam1, "HEADS_UP_GANG_TERRITORY", joaat("SPEECH_PARAMS_FORCE_NORMAL_CRITICAL"), Global_35, 1, "0199_G_M_M_UniInbred_01_WHITE_01", 1, 1))
											{
												TASK::TASK_LOOK_AT_ENTITY(*iParam1, Global_35, 5000, 2048, 51, 0);
												__LIB_1__::func_683(&(iParam1->f_9), 131072);
											}
										}
									}
								}
								if (iParam1->f_6 == 0)
								{
									if (__LIB_0__::func_27(iParam1->f_9, 131072))
									{
										if (TASK::_0x02EBBB3989B7E695(*iParam1))
										{
											iParam1->f_6 = MISC::GET_GAME_TIMER();
										}
									}
								}
								else if ((MISC::GET_GAME_TIMER() - iParam1->f_6) > 30000)
								{
									func_320(iParam1, 29, 0, 2);
								}
							}
							break;
						case 2:
							if (iParam1->f_5 == 0)
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
								PED::_0xA3A9299C4F2ADB98(*iParam1);
								TASK::CLEAR_SEQUENCE_TASK(&iVar4);
								TASK::OPEN_SEQUENCE_TASK(&iVar4);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2550.476f, 804.2923f, 75.2659f, (1f * 0.75f), 20000, (0.25f * 5f), 2097153, 40000f);
								TASK::_TASK_USE_SCENARIO_POINT(0, iLocal_1508[3], 0, 0, true, false, 0, false, -1f, false);
								TASK::CLOSE_SEQUENCE_TASK(iVar4);
								TASK::TASK_PERFORM_SEQUENCE(*iParam1, iVar4);
								TASK::CLEAR_SEQUENCE_TASK(&iVar4);
								iParam1->f_5 = 1;
							}
							break;
					}
					break;
			}
		}
	}
}

void func_777(int iParam0)
{
	iLocal_1671 = 0;
	if (iParam0 == 0)
	{
		__LIB_1__::func_683(&iLocal_1671, 1);
		__LIB_1__::func_683(&iLocal_1671, 2);
		__LIB_1__::func_683(&iLocal_1671, 64);
		__LIB_1__::func_683(&iLocal_1671, 32);
		__LIB_1__::func_683(&iLocal_1671, 256);
		__LIB_1__::func_683(&iLocal_1671, 512);
		__LIB_1__::func_683(&iLocal_1671, 2048);
		__LIB_1__::func_683(&iLocal_1671, 16);
		__LIB_1__::func_683(&iLocal_1671, 4096);
	}
	else if (iParam0 == 1)
	{
		__LIB_1__::func_683(&iLocal_1671, 2);
		__LIB_1__::func_683(&iLocal_1671, 64);
		__LIB_1__::func_683(&iLocal_1671, 256);
		__LIB_1__::func_683(&iLocal_1671, 512);
		__LIB_1__::func_683(&iLocal_1671, 16);
		__LIB_1__::func_683(&iLocal_1671, 2048);
	}
	else if (iParam0 == 2)
	{
		__LIB_1__::func_683(&iLocal_1671, 2);
		__LIB_1__::func_683(&iLocal_1671, 64);
		__LIB_1__::func_683(&iLocal_1671, 256);
		__LIB_1__::func_683(&iLocal_1671, 512);
		__LIB_1__::func_683(&iLocal_1671, 16);
		__LIB_1__::func_683(&iLocal_1671, 2048);
	}
	else if (iParam0 == 3)
	{
		__LIB_1__::func_683(&iLocal_1671, 2);
		__LIB_1__::func_683(&iLocal_1671, 64);
		__LIB_1__::func_683(&iLocal_1671, 16);
		__LIB_1__::func_683(&iLocal_1671, 2048);
	}
	else if (iParam0 == 4)
	{
		__LIB_1__::func_683(&iLocal_1671, 2);
		__LIB_1__::func_683(&iLocal_1671, 64);
		__LIB_1__::func_683(&iLocal_1671, 4);
	}
	else if (iParam0 == 5)
	{
		__LIB_1__::func_683(&iLocal_1671, 4);
		__LIB_1__::func_683(&iLocal_1671, 128);
		__LIB_1__::func_683(&iLocal_1671, 2048);
		__LIB_1__::func_683(&iLocal_1671, 16);
	}
}

void func_778(var uParam0, int* iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*iParam1))
		{
			iParam1->f_18 = __LIB_0__::func_665(*iParam1, Global_35, 1, 1);
			switch (iParam1->f_3)
			{
				case 9:
					if (iParam1->f_5 == 0)
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
						TASK::TASK_LOOK_AT_ENTITY(*iParam1, Global_35, -1, 2048, 51, 0);
						iParam1->f_6 = MISC::GET_GAME_TIMER();
						iParam1->f_12 = MISC::GET_GAME_TIMER();
						iLocal_1686 = 0;
						iParam1->f_5 = 1;
					}
					else if (__LIB_0__::func_27(iLocal_1670, 8))
					{
						__LIB_9__::func_203(0, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
						__LIB_0__::func_490(iParam1, 1);
					}
					break;
			}
		}
	}
}

void func_779(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	float fVar1;
	vector3 vVar2;
	struct<27> Var5;
	struct<6> Var43;
	struct<7> Var54;
	struct<15> Var61;
	struct<15> Var76;
	struct<15> Var91;
	struct<15> Var106;
	struct<15> Var121;
	struct<15> Var136;
	struct<15> Var151;
	int iVar166;
	int iVar167;
	int iVar168;
	int iVar169;
	int iVar170;
	int iVar171;
	int iVar172;
	struct<14> Var173;
	struct<12> Var190;
	struct<12> Var207;
	struct<12> Var224;
	vLocal_1282[0 /*3*/] = { 2339.838f, 1427.222f, 94.4531f };
	vLocal_1282[1 /*3*/] = { 2337.844f, 1421.408f, 93.912f };
	if (ENTITY::DOES_ENTITY_EXIST(*iParam2))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*iParam2))
		{
			iParam2->f_18 = __LIB_0__::func_665(*iParam2, Global_35, 1, 1);
			iParam2->f_19 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(*iParam2, false, false), vLocal_96, true);
			if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*iParam6) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(*iParam6, false)) || (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*iParam7) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(*iParam7, false)))
			{
				return;
			}
			if (!__LIB_0__::func_27(iParam2->f_9, 134217728))
			{
				if (__LIB_0__::func_27(iLocal_1670, 262144))
				{
					__LIB_1__::func_683(&(iParam2->f_9), 134217728);
				}
			}
			switch (iParam2->f_3)
			{
				case 1:
					if (iParam2->f_5 == 0)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*iParam3) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(*iParam3, false))
						{
							if (((ANIMSCENE::_0x23E33CB9F4A3F547(*iParam3, "pl_Idle_01") && ANIMSCENE::_0x23E33CB9F4A3F547(*iParam3, "pl_Idle_02")) && ANIMSCENE::_0x23E33CB9F4A3F547(*iParam3, "pl_Idle_03")) && ANIMSCENE::_0x23E33CB9F4A3F547(*iParam3, "pl_Idle_04"))
							{
								if (ANIMSCENE::_0x1F0E401031E20146(*iParam3, "pl_Idle_Base"))
								{
									ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*iParam3, "pl_Idle_01", true);
								}
								else if (ANIMSCENE::_0x1F0E401031E20146(*iParam3, "pl_Idle_01"))
								{
									ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*iParam3, "pl_Idle_02", true);
								}
								else if (ANIMSCENE::_0x1F0E401031E20146(*iParam3, "pl_Idle_02"))
								{
									ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*iParam3, "pl_Idle_03", true);
								}
								else if (ANIMSCENE::_0x1F0E401031E20146(*iParam3, "pl_Idle_03"))
								{
									ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*iParam3, "pl_Idle_04", true);
								}
								else if (ANIMSCENE::_0x1F0E401031E20146(*iParam3, "pl_Idle_04"))
								{
									ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*iParam3, "pl_Idle_01", true);
								}
							}
						}
						iParam2->f_6 = MISC::GET_GAME_TIMER();
						iParam2->f_12 = MISC::GET_GAME_TIMER();
						iParam2->f_5 = 1;
					}
					else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*iParam3) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(*iParam3, false))
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(*iParam3, "pl_Idle_01");
						ANIMSCENE::_0xDF7B5144E25CD3FE(*iParam3, "pl_Idle_02");
						ANIMSCENE::_0xDF7B5144E25CD3FE(*iParam3, "pl_Idle_03");
						ANIMSCENE::_0xDF7B5144E25CD3FE(*iParam3, "pl_Idle_04");
						ANIMSCENE::_0xDF7B5144E25CD3FE(*iParam3, "pl_Enter_Left");
						ANIMSCENE::_0xDF7B5144E25CD3FE(*iParam3, "pl_Enter_Right");
						ANIMSCENE::_0xDF7B5144E25CD3FE(*iParam3, "pl_Enter_Front");
						if ((ANIMSCENE::_0x8D81E7824B7753F7(*iParam3, "s_Idle_Base", 1) && (MISC::GET_GAME_TIMER() - iParam2->f_6) > 7500) && iParam2->f_18 > 7.5f)
						{
							if (((ANIMSCENE::_0x23E33CB9F4A3F547(*iParam3, "pl_Idle_01") && ANIMSCENE::_0x23E33CB9F4A3F547(*iParam3, "pl_Idle_02")) && ANIMSCENE::_0x23E33CB9F4A3F547(*iParam3, "pl_Idle_03")) && ANIMSCENE::_0x23E33CB9F4A3F547(*iParam3, "pl_Idle_04"))
							{
								func_320(iParam2, 1, 0, 0);
							}
						}
					}
					if (!__LIB_0__::func_27(iParam2->f_9, 1048576))
					{
						__LIB_10__::func_979(*iParam2, __LIB_1__::func_464(7, 0), 4f, 0, 0, 0);
						__LIB_1__::func_683(&(iParam2->f_9), 1048576);
					}
					else
					{
						if (!__LIB_0__::func_139(iLocal_1232[0]))
						{
							if (__LIB_10__::func_896(PLAYER::PLAYER_ID(), *iParam2) && __LIB_0__::func_48(Global_35, *iParam2, 4f, 1))
							{
								iLocal_1232[0] = __LIB_4__::func_450("RDCH31_U_RIDE", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
								if (__LIB_0__::func_139(iLocal_1232[0]))
								{
									__LIB_9__::func_332(&(iLocal_1232[0]), *iParam2);
								}
							}
						}
						else if (__LIB_1__::func_732(iLocal_1232[0], 1))
						{
							__LIB_13__::func_520(&iLocal_1232);
							__LIB_8__::func_771(*iParam2, 1, 1, 0);
							if (!PED::IS_PED_INJURED(Global_35))
							{
								TASK::TASK_LOOK_AT_ENTITY(Global_35, *iParam2, 5000, 2048, 51, 0);
							}
							if (!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
							{
								PLAYER::_0x3946FC742AC305CD(PLAYER::PLAYER_ID(), *iParam2, "RC_DUTCH_31_CHARLES", ENTITY::GET_ENTITY_COORDS(*iParam2, true, false), 0, "rdch31_ilo_charles");
							}
							func_320(iParam2, 2, 0, 0);
							__LIB_1__::func_683(&iLocal_1670, 8);
						}
						if (__LIB_0__::func_139(iLocal_1232[0]))
						{
							if (!__LIB_10__::func_896(PLAYER::PLAYER_ID(), *iParam2))
							{
								__LIB_13__::func_520(&iLocal_1232);
							}
						}
					}
					if (!__LIB_0__::func_27(iParam2->f_9, 65536))
					{
						if (iParam2->f_18 > 50f)
						{
							__LIB_1__::func_683(&(iParam2->f_9), 65536);
						}
					}
					else if (iParam2->f_18 < (30f / 3f))
					{
						__LIB_1__::func_681(&(iParam2->f_9), 65536);
					}
					break;
				case 2:
					switch (iParam2->f_7)
					{
						case 0:
							if (iParam2->f_5 == 0)
							{
								if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*iParam3) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(*iParam3, false))
								{
									if ((ANIMSCENE::_0x23E33CB9F4A3F547(*iParam3, "pl_Enter_Left") && ANIMSCENE::_0x23E33CB9F4A3F547(*iParam3, "pl_Enter_Right")) && ANIMSCENE::_0x23E33CB9F4A3F547(*iParam3, "pl_Enter_Front"))
									{
										vVar2 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(*iParam2, ENTITY::GET_ENTITY_COORDS(Global_35, true, false)) };
										if (vVar2.x <= 2f && vVar2.x >= -2f)
										{
											ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*iParam3, "pl_Enter_Front", true);
										}
										else if (vVar2.x > 2f)
										{
											ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*iParam3, "pl_Enter_Right", true);
										}
										else if (vVar2.x < -2f)
										{
											ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*iParam3, "pl_Enter_Left", true);
										}
										else
										{
											ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*iParam3, "pl_Enter_Front", true);
										}
										TASK::REQUEST_WAYPOINT_RECORDING("rdtc3_charles_lakay_to_horse");
										iParam2->f_5 = 1;
									}
								}
							}
							else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*iParam3))
							{
								if (ANIMSCENE::_0x8D81E7824B7753F7(*iParam3, "s_WalkNTalk", 1))
								{
									if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
									{
										PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "rdch31_ilo_charles");
									}
									func_320(iParam2, 2, 0, 1);
								}
							}
							break;
						case 1:
							if (iParam2->f_5 == 0)
							{
								Var5.f_4 = 1065353216;
								Var5.f_5 = 1065353216;
								Var5.f_9 = 1065353216;
								Var5.f_10 = 1065353216;
								Var5.f_14 = 1065353216;
								Var5.f_15 = 1065353216;
								Var5.f_17 = 1040187392;
								Var5.f_18 = 1040187392;
								Var5.f_19 = -1;
								Var5.f_26 = -1082130432;
								Var54.f_1 = 1050253722;
								Var54.f_2 = 1067030938;
								Var54.f_5 = -1082130432;
								Var54.f_6 = -1082130432;
								Var43.f_1 = { 0f, 0f, 0f };
								Var43 = 2;
								Var43.f_4 = "rdtc3_charles_lakay_to_horse";
								Var43.f_5 = 17420;
								Var54.f_5 = 1.5f;
								Var54 = 0;
								__LIB_9__::func_175(*iParam2, Global_35, &Var5, Var43.f_1, Var43.f_4, Var43.f_5, 1, 5f, 4.5f, 1073069561, 1f, 1092616192 /* Float: 10f */, -1, 1, 0, 0, 0, 1);
								__LIB_13__::func_566(Global_35, *iParam2, &Var54, -1, 0, 0);
								__LIB_1__::func_731(&uLocal_1546);
								__LIB_1__::func_681(&iLocal_1670, 33554432);
								__LIB_1__::func_683(&iLocal_1670, 16);
								__LIB_1__::func_683(&(iParam2->f_9), 32768);
								__LIB_1__::func_681(&(iParam2->f_9), 65536);
								iParam2->f_5 = 1;
							}
							else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*iParam3))
							{
								if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(*iParam3, false) && ANIMSCENE::_0x8D81E7824B7753F7(*iParam3, "s_WalkNTalk", 1))
								{
									__LIB_2__::func_966(*iParam2, Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
									__LIB_2__::func_966(Global_35, *iParam2, 1, 1, 1, 0, 1, 1, 0, 1, 1);
									__LIB_9__::func_397(&uLocal_1546, *iParam2);
								}
								if ((ANIMSCENE::_0xF94692EB9DC15D74(*iParam3, 0) || ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(*iParam3)) || ANIMSCENE::_0x005E6F28DD7ED58D(*iParam3, "CharlesSmith"))
								{
									iParam2->f_6 = MISC::GET_GAME_TIMER();
									iParam2->f_12 = MISC::GET_GAME_TIMER();
									iLocal_1687 = 0;
									__LIB_1__::func_726(*iParam2, 1);
									__LIB_1__::func_727(Global_35, 1);
									__LIB_5__::func_438(&uLocal_1546);
									__LIB_1__::func_683(&iLocal_1670, 32);
									func_320(iParam2, 3, 0, 0);
								}
							}
							break;
					}
					break;
				case 3:
					switch (iParam1)
					{
						case 0:
							if (iParam2->f_5 == 0)
							{
								if ((ENTITY::DOES_ENTITY_EXIST(iParam4) && !ENTITY::IS_ENTITY_DEAD(iParam4)) && PED::_0x2D64376CF437363E(iParam4))
								{
									TASK::REQUEST_WAYPOINT_RECORDING("rdtc3_charles_lakay_to_boat");
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam2, true);
									if (__LIB_0__::func_48(*iParam2, iParam4, 10f, 1))
									{
										TASK::TASK_MOUNT_ANIMAL(*iParam2, iParam4, 60000, -1, 1.5f, 9, 0, 0);
									}
									else
									{
										TASK::CLEAR_SEQUENCE_TASK(&iVar0);
										TASK::OPEN_SEQUENCE_TASK(&iVar0);
										if (!__LIB_0__::func_27(iParam2->f_9, 8))
										{
											TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "rdtc3_charles_lakay_to_horse", 0, 19470, -1, 0, 1, -1);
										}
										else
										{
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(iParam4, true, false), 1f, 60000, (0.25f * 20f), 8197, 40000f);
										}
										TASK::TASK_MOUNT_ANIMAL(0, iParam4, 60000, -1, 1f, 9, 0, 0);
										TASK::CLOSE_SEQUENCE_TASK(iVar0);
										TASK::TASK_PERFORM_SEQUENCE(*iParam2, iVar0);
										TASK::CLEAR_SEQUENCE_TASK(&iVar0);
									}
									__LIB_1__::func_683(&(iParam2->f_9), 32);
									iParam2->f_5 = 1;
								}
							}
							else
							{
								if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(*iParam2, "rdtc3_charles_lakay_to_horse"))
								{
									TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(*iParam2, 1f, 0, -1f, 0);
								}
								if (__LIB_0__::func_394(*iParam2, iParam4, 0))
								{
									__LIB_1__::func_683(&(iParam2->f_9), 8);
									if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("rdtc3_charles_lakay_to_boat"))
									{
										func_320(iParam2, 11, 0, -1);
									}
								}
								else if (!PED::IS_PED_ON_MOUNT(*iParam2))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(*iParam2, 1868526510, true) == 1 || TASK::GET_SCRIPT_TASK_STATUS(*iParam2, 242628503, true) == 1)
									{
										if (PED::IS_PED_ON_MOUNT(Global_35) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
										{
											TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(*iParam2, 2f);
											if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(*iParam2, "rdtc3_charles_lakay_to_horse"))
											{
												TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(*iParam2, 2f, 0, -1f, 0);
											}
										}
									}
								}
							}
							break;
						case 2:
						case 3:
							__LIB_1__::func_683(&iLocal_1671, 8192);
							if (iParam2->f_5 == 0)
							{
								if (ENTITY::DOES_ENTITY_EXIST(uLocal_1152[0]) && ENTITY::DOES_ENTITY_EXIST(uLocal_1152[1]))
								{
									if (PED::GET_MOUNT(Global_35) == uLocal_1152[0] || ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(PED::_GET_TRANSPORT_PED_IS_SEATED_ON(Global_35)) == uLocal_1152[0])
									{
										iLocal_1160 = uLocal_1152[1];
									}
									else if (PED::GET_MOUNT(Global_35) == uLocal_1152[1] || ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(PED::_GET_TRANSPORT_PED_IS_SEATED_ON(Global_35)) == uLocal_1152[1])
									{
										iLocal_1160 = uLocal_1152[0];
									}
									if ((ENTITY::DOES_ENTITY_EXIST(iLocal_1160) && !ENTITY::IS_ENTITY_DEAD(iLocal_1160)) && PED::_0x2D64376CF437363E(iLocal_1160))
									{
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam2, true);
										if (__LIB_0__::func_48(*iParam2, iLocal_1160, 10f, 1))
										{
											TASK::TASK_MOUNT_ANIMAL(*iParam2, iLocal_1160, 60000, -1, 1.5f, 9, 0, 0);
										}
										else
										{
											TASK::CLEAR_SEQUENCE_TASK(&iVar0);
											TASK::OPEN_SEQUENCE_TASK(&iVar0);
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_1160, true, false), 1.5f, 60000, (0.25f * 20f), 8197, 40000f);
											TASK::TASK_MOUNT_ANIMAL(0, iLocal_1160, 60000, -1, 1.5f, 9, 0, 0);
											TASK::CLOSE_SEQUENCE_TASK(iVar0);
											TASK::TASK_PERFORM_SEQUENCE(*iParam2, iVar0);
											TASK::CLEAR_SEQUENCE_TASK(&iVar0);
										}
										__LIB_1__::func_683(&(iParam2->f_9), 32);
										iParam2->f_5 = 1;
									}
								}
							}
							else
							{
								if (__LIB_0__::func_394(*iParam2, uLocal_1152[0], 1) || __LIB_0__::func_394(*iParam2, uLocal_1152[1], 1))
								{
									func_320(iParam2, 12, 0, -1);
								}
								else if (!PED::IS_PED_ON_MOUNT(*iParam2))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(*iParam2, 1868526510, true) == 1 || TASK::GET_SCRIPT_TASK_STATUS(*iParam2, 242628503, true) == 1)
									{
										if (PED::IS_PED_ON_MOUNT(Global_35) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
										{
											TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(*iParam2, 2f);
										}
									}
								}
								if (!__LIB_0__::func_394(*iParam2, uLocal_1152[0], 0) && !__LIB_0__::func_394(*iParam2, uLocal_1152[1], 0))
								{
									if (!AITRANSPORT::_0x619E63980BFC0096(*iParam2, uLocal_1152[0], 0) && !AITRANSPORT::_0x619E63980BFC0096(*iParam2, uLocal_1152[1], 0))
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(*iParam2, 1868526510, true) != 1 && TASK::GET_SCRIPT_TASK_STATUS(*iParam2, 242628503, true) != 1)
										{
											if ((!ENTITY::DOES_ENTITY_EXIST(PED::_GET_RIDER_OF_MOUNT(uLocal_1152[0], true)) && PED::_0x2D64376CF437363E(uLocal_1152[0])) || (!ENTITY::DOES_ENTITY_EXIST(PED::_GET_RIDER_OF_MOUNT(uLocal_1152[1], true)) && PED::_0x2D64376CF437363E(uLocal_1152[1])))
											{
												func_320(iParam2, 3, 0, -1);
											}
										}
									}
								}
							}
							break;
					}
					break;
				case 4:
					switch (iParam2->f_7)
					{
						case 0:
							if (iParam2->f_5 == 0)
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam2, true);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam2, 2386.232f, 1189.33f, 97.4193f, 1f, 40000, (0.25f * 4f), 5242885, 15f);
								__LIB_1__::func_683(&(iParam2->f_9), 16);
								__LIB_1__::func_681(&(iParam2->f_9), 32);
								PED::_0x2B4CE170DE09F346(*iParam2, joaat("RDTC3_RIDE1"));
								AUDIO::_0x660A8F876DF1D4F8(21);
								AUDIO::_0x660A8F876DF1D4F8(19);
								AUDIO::_0x660A8F876DF1D4F8(25);
								iParam2->f_5 = 1;
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(*iParam2, 713668775, true) == 8)
							{
								func_320(iParam2, 4, 0, 1);
							}
							break;
						case 1:
							if (iParam2->f_5 == 0)
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam2, true);
								TASK::TASK_DISMOUNT_ANIMAL(*iParam2, 262144, 0, 0, 0, 0);
								__LIB_1__::func_683(&(iParam2->f_9), 16);
								__LIB_1__::func_681(&(iParam2->f_9), 32);
								iParam2->f_5 = 1;
							}
							else if (!PED::IS_PED_ON_MOUNT(*iParam2))
							{
								func_320(iParam2, 30, 0, 0);
							}
							break;
					}
					break;
				case 11:
					if (iParam2->f_5 == 0)
					{
						Var61.f_2 = -1;
						Var61.f_7 = -1;
						Var61.f_8 = -1082130432;
						Var61.f_12 = -1082130432;
						Var61.f_13 = 1;
						Var61.f_14 = -1082130432;
						if (!PED::DOES_GROUP_EXIST(iLocal_1230))
						{
							iLocal_1230 = PED::CREATE_GROUP(2);
							PED::SET_GROUP_FORMATION(iLocal_1230, 10);
						}
						if (PED::DOES_GROUP_EXIST(iLocal_1230))
						{
							if (!PED::_0x878B68960C1C2A35(*iParam2, iLocal_1230))
							{
								PED::SET_PED_CONFIG_FLAG(*iParam2, 279, true);
								PED::SET_PED_AS_GROUP_LEADER(*iParam2, iLocal_1230, false);
							}
						}
						if (!__LIB_0__::func_27(iParam2->f_9, 262144))
						{
							Var61 = "rdtc3_charles_lakay_to_boat";
							Var61.f_12 = 1f;
						}
						else
						{
							Var61 = "rdtc3_horse_ride_cme";
							Var61.f_12 = 1.501f;
						}
						Var61.f_1 = 0;
						Var61.f_3 = 9230;
						Var61.f_13 = 0;
						Var61.f_14 = 0.2f;
						Var61.f_5 = 1;
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam2, true);
						TASK::TASK_FOLLOW_WAYPOINT_RECORDING_ADVANCED(*iParam2, &Var61);
						__LIB_1__::func_683(&(iParam2->f_9), 32);
						__LIB_1__::func_683(&(iParam2->f_9), 32768);
						__LIB_1__::func_681(&(iParam2->f_9), 65536);
						if (!__LIB_0__::func_27(iParam2->f_9, 1073741824 /* Float: 2f */))
						{
							PED::_0x1E017404784AA6A3(*iParam2, joaat("RDTC3_RIDE1"));
							AUDIO::_0x0D7FD6A55FD63AEF(21, 3, 1);
							AUDIO::_0x0D7FD6A55FD63AEF(19, 3, 1);
							AUDIO::_0x0D7FD6A55FD63AEF(25, 3, 1);
							__LIB_1__::func_683(&(iParam2->f_9), 1073741824 /* Float: 2f */);
						}
						iParam2->f_5 = 1;
					}
					else
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(*iParam2, 658540077, true) == 1)
						{
							if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(*iParam2, 0))
							{
								fVar1 = 1.501f;
								iParam2->f_10 = TASK::GET_PED_WAYPOINT_PROGRESS(*iParam2);
								if (!__LIB_0__::func_27(iParam2->f_9, 262144))
								{
									switch (iParam2->f_7)
									{
										case 0:
											if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
											{
												if (PED::DOES_GROUP_EXIST(iLocal_1230))
												{
													PED::_0xD5BD1B5318A81994(iLocal_1230, 1);
												}
												PLAYER::_0xAC22AA6DF4D1C1DE(PLAYER::PLAYER_ID(), *iParam2, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 2, 2, 0);
												PLAYER::_0xDD33A82352C4652F(PLAYER::PLAYER_ID(), *iParam2, 0);
												PED::_0x9BBEAF8B0C007F1E(*iParam2, 0);
												iParam2->f_7++;
											}
											break;
										case 1:
											if (iParam2->f_10 >= 120)
											{
												if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
												{
													if (PED::DOES_GROUP_EXIST(iLocal_1230))
													{
														PED::_0xD5BD1B5318A81994(iLocal_1230, 0);
													}
													PLAYER::_0xAC22AA6DF4D1C1DE(PLAYER::PLAYER_ID(), *iParam2, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 3, 2, 0);
													PLAYER::_0xDD33A82352C4652F(PLAYER::PLAYER_ID(), *iParam2, 0);
													PED::_0x9BBEAF8B0C007F1E(*iParam2, 1);
													iParam2->f_7++;
												}
											}
											break;
										case 2:
											if (iParam2->f_10 >= 155)
											{
												if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
												{
													if (PED::DOES_GROUP_EXIST(iLocal_1230))
													{
														PED::_0xD5BD1B5318A81994(iLocal_1230, 0);
													}
													PLAYER::_0xAC22AA6DF4D1C1DE(PLAYER::PLAYER_ID(), *iParam2, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 3, 2, 0);
													PLAYER::_0xDD33A82352C4652F(PLAYER::PLAYER_ID(), *iParam2, 2);
													PED::_0x9BBEAF8B0C007F1E(*iParam2, 1);
													iParam2->f_7++;
												}
											}
											break;
										case 3:
											if (iParam2->f_10 >= 205)
											{
												if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
												{
													if (PED::DOES_GROUP_EXIST(iLocal_1230))
													{
														PED::_0xD5BD1B5318A81994(iLocal_1230, 0);
													}
													PLAYER::_0xAC22AA6DF4D1C1DE(PLAYER::PLAYER_ID(), *iParam2, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 3, 2, 0);
													PLAYER::_0xDD33A82352C4652F(PLAYER::PLAYER_ID(), *iParam2, 2);
													PED::_0x9BBEAF8B0C007F1E(*iParam2, 1);
													iParam2->f_7++;
												}
											}
											break;
										case 4:
											if (iParam2->f_10 >= 250)
											{
												if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
												{
													if (PED::DOES_GROUP_EXIST(iLocal_1230))
													{
														PED::_0xD5BD1B5318A81994(iLocal_1230, 0);
													}
													PLAYER::_0xAC22AA6DF4D1C1DE(PLAYER::PLAYER_ID(), *iParam2, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 3, 2, 0);
													PLAYER::_0xDD33A82352C4652F(PLAYER::PLAYER_ID(), *iParam2, 2);
													PED::_0x9BBEAF8B0C007F1E(*iParam2, 1);
													iParam2->f_7++;
												}
											}
											break;
										case 5:
											if (iParam2->f_10 >= 580)
											{
												if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
												{
													if (PED::DOES_GROUP_EXIST(iLocal_1230))
													{
														PED::_0xD5BD1B5318A81994(iLocal_1230, 1);
													}
													PLAYER::_0xAC22AA6DF4D1C1DE(PLAYER::PLAYER_ID(), *iParam2, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 2, 2, 0);
													PLAYER::_0xDD33A82352C4652F(PLAYER::PLAYER_ID(), *iParam2, 2);
													PED::_0x9BBEAF8B0C007F1E(*iParam2, 0);
													iParam2->f_7++;
												}
											}
											break;
									}
								}
								else
								{
									switch (iParam2->f_7)
									{
										case 0:
											if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
											{
												if (PED::DOES_GROUP_EXIST(iLocal_1230))
												{
													PED::_0xD5BD1B5318A81994(iLocal_1230, 1);
												}
												PLAYER::_0xAC22AA6DF4D1C1DE(PLAYER::PLAYER_ID(), *iParam2, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 2, 2, 0);
												PLAYER::_0xDD33A82352C4652F(PLAYER::PLAYER_ID(), *iParam2, 2);
												PED::_0x9BBEAF8B0C007F1E(*iParam2, 0);
												iParam2->f_7++;
											}
											break;
									}
								}
								if (!__LIB_0__::func_27(iParam2->f_9, 262144))
								{
									if (iParam2->f_10 > 600)
									{
										fVar1 = 1f;
									}
									else if (iParam2->f_10 > 590)
									{
										fVar1 = 1.001f;
									}
									else if (iParam2->f_10 > 576)
									{
										fVar1 = 1.25f;
									}
									else if (iParam2->f_10 > 545)
									{
										fVar1 = 1.501f;
									}
									else if (iParam2->f_10 > 385)
									{
										fVar1 = 1.75f;
									}
									else if (iParam2->f_10 > 250)
									{
										fVar1 = 1.501f;
									}
									else if (iParam2->f_10 > 210)
									{
										fVar1 = 1.501f;
									}
									else if (iParam2->f_10 > 125)
									{
										fVar1 = 1.501f;
									}
									else if (iParam2->f_10 > 5)
									{
										fVar1 = 1.5f;
									}
									else
									{
										fVar1 = 1f;
									}
									if (!__LIB_0__::func_27(iParam2->f_9, 134217728))
									{
										if (__LIB_0__::func_27(Local_1130.f_9, 67108864))
										{
											__LIB_1__::func_683(&(iParam2->f_9), 134217728);
										}
									}
									else if (!__LIB_0__::func_27(Local_1130.f_9, 67108864))
									{
										__LIB_1__::func_681(&(iParam2->f_9), 134217728);
									}
									if (__LIB_0__::func_27(iParam2->f_9, 134217728))
									{
										fVar1 = 1f;
									}
								}
								else if (iParam2->f_10 > 5)
								{
									fVar1 = 1.501f;
								}
								else
								{
									fVar1 = 1.501f;
								}
								if (__LIB_0__::func_27(iParam2->f_9, 128))
								{
									if (iParam2->f_10 > 5)
									{
										if (!PED::IS_PED_INJURED(Global_35))
										{
											if ((!__LIB_0__::func_394(Global_35, iLocal_1150, 0) || (__LIB_13__::func_562(Global_35, *iParam2, "rdtc3_charles_lakay_to_boat") && iParam2->f_18 > 15f)) || (__LIB_13__::func_562(Global_35, *iParam2, "rdtc3_horse_ride_cme") && iParam2->f_18 > 15f))
											{
												fVar1 = 0f;
												if (!TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(*iParam2) && ENTITY::GET_ENTITY_SPEED(*iParam2) < 1f)
												{
													TASK::WAYPOINT_PLAYBACK_PAUSE(*iParam2, 1, 1, 0);
												}
											}
											else if (TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(*iParam2))
											{
												TASK::WAYPOINT_PLAYBACK_RESUME(*iParam2, true, -1, 1000);
											}
										}
									}
								}
								if (!__LIB_0__::func_27(iParam2->f_9, 134217728))
								{
									__LIB_5__::func_552(*iParam2, fVar1, 0, 0.2f, 1, (3f * 2f), (30f / 2f), (60f / 2f), 1033476506 /* Float: 0.075f */, 1061158912 /* Float: 0.75f */, 1, 1, 1045220557 /* Float: 0.2f */, 0);
								}
								else
								{
									__LIB_5__::func_552(*iParam2, fVar1, 0, 0.4f, 1, (3f * 2f), (30f / 2f), (60f / 2f), 1033476506 /* Float: 0.075f */, 1061158912 /* Float: 0.75f */, 1, 1, 1045220557 /* Float: 0.2f */, 0);
								}
								if (((((__LIB_13__::func_562(*iParam2, Global_35, "rdtc3_charles_lakay_to_boat") && iParam2->f_18 > 7.5f) || (__LIB_13__::func_562(*iParam2, Global_35, "rdtc3_horse_ride_cme") && iParam2->f_18 > 7.5f)) || ((TASK::GET_IS_WAYPOINT_RECORDING_LOADED("rdtc3_charles_lakay_to_boat") && TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(*iParam2, "rdtc3_charles_lakay_to_boat")) && iParam2->f_10 > 570)) || ((TASK::GET_IS_WAYPOINT_RECORDING_LOADED("rdtc3_horse_ride_cme") && TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(*iParam2, "rdtc3_horse_ride_cme")) && iParam2->f_10 >= 30)) || __LIB_0__::func_27(iParam2->f_9, 134217728))
								{
									TASK::SET_ENABLE_SPEED_RESTRAIN_FOR_WAYPOINT_RECORDING_LEADER(*iParam2, 0);
									__LIB_1__::func_681(&(iParam2->f_9), 128);
								}
								else
								{
									__LIB_1__::func_683(&(iParam2->f_9), 128);
								}
								if (iParam2->f_18 > 50f)
								{
									if (__LIB_0__::func_27(iParam2->f_9, 128))
									{
										func_320(iParam2, 9, 0, 0);
									}
								}
								if (!__LIB_0__::func_27(iParam2->f_9, 262144))
								{
									if (__LIB_0__::func_27(iLocal_1672, 4))
									{
										if (iParam2->f_10 >= 575)
										{
											func_320(iParam2, 11, 0, 0);
											__LIB_1__::func_683(&(iParam2->f_9), 262144);
										}
									}
								}
							}
						}
						if (!__LIB_0__::func_27(iParam2->f_9, 262144))
						{
							if (__LIB_13__::func_563(*iParam2, 2374.839f, -62.5957f, 42.201f, "rdtc3_charles_lakay_to_boat"))
							{
								if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
								{
									PLAYER::_0x908D4B72854C8F62(PLAYER::PLAYER_ID());
									PLAYER::_0x12E09E278C6C29B7(PLAYER::PLAYER_ID());
								}
								if (PED::DOES_GROUP_EXIST(iLocal_1230))
								{
									PED::REMOVE_GROUP(iLocal_1230);
								}
								func_320(iParam2, 6, 0, 0);
							}
						}
						if (!PED::IS_PED_ON_MOUNT(*iParam2) && !PED::IS_PED_RAGDOLL(*iParam2))
						{
							if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(*iParam2, 0) && !PED::IS_PED_RAGDOLL(*iParam2))
							{
								TASK::CLEAR_PED_TASKS(*iParam2, true, false);
							}
							func_320(iParam2, 3, 0, -1);
						}
					}
					break;
				case 6:
					switch (iParam2->f_7)
					{
						case 0:
							if (iParam2->f_5 == 0)
							{
								if (PED::IS_PED_ON_MOUNT(*iParam2))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam2, true);
									if (__LIB_3__::func_547(*iParam2, Global_35, 0.85f) == 3)
									{
										TASK::TASK_DISMOUNT_ANIMAL(*iParam2, 262144, 0, 0, 0, 0);
									}
									else
									{
										TASK::TASK_DISMOUNT_ANIMAL(*iParam2, 131072, 0, 0, 0, 0);
									}
								}
								__LIB_1__::func_681(&(iParam2->f_9), 16);
								__LIB_1__::func_681(&(iParam2->f_9), 32);
								PED::_0x2B4CE170DE09F346(*iParam2, joaat("RDTC3_RIDE1"));
								AUDIO::_0x660A8F876DF1D4F8(21);
								AUDIO::_0x660A8F876DF1D4F8(19);
								AUDIO::_0x660A8F876DF1D4F8(25);
								__LIB_1__::func_681(&(iParam2->f_9), 1073741824 /* Float: 2f */);
								iParam2->f_5 = 1;
							}
							else if (!PED::IS_PED_ON_MOUNT(*iParam2) && (((ENTITY::DOES_ENTITY_EXIST(iParam4) && !ENTITY::IS_ENTITY_DEAD(iParam4)) && !AITRANSPORT::_0x660639BC60157048(*iParam2, iParam4)) || !ENTITY::DOES_ENTITY_EXIST(iParam4)))
							{
								func_320(iParam2, 6, 0, 1);
							}
							break;
						case 1:
							if (iParam2->f_5 == 0)
							{
								if ((ENTITY::DOES_ENTITY_EXIST(iParam5) && !ENTITY::IS_ENTITY_DEAD(iParam5)) && !ENTITY::IS_ENTITY_UPSIDEDOWN(iParam5))
								{
									TASK::_0x9DE63896B176EA94(*iParam2, 1);
									PED::SET_PED_CONFIG_FLAG(*iParam2, 265, false);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam2, true);
									TASK::TASK_ENTER_VEHICLE(*iParam2, iParam5, 60000, 0, 1f, 1, 0);
									__LIB_1__::func_683(&(iParam2->f_9), 64);
									iParam2->f_5 = 1;
								}
							}
							else
							{
								if (__LIB_14__::func_11(*iParam2, iParam5))
								{
									func_320(iParam2, 7, 0, 0);
								}
								else if (!PED::IS_PED_IN_ANY_VEHICLE(*iParam2, false))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(*iParam2, -1794415470, true) == 1)
									{
										if (__LIB_3__::func_330(Global_35, iLocal_1161, 0))
										{
											TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(*iParam2, 2f);
										}
									}
								}
								if (__LIB_3__::func_330(Global_35, iLocal_1161, 0))
								{
									if (!PED::IS_PED_IN_ANY_VEHICLE(*iParam2, false))
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(*iParam2, -1794415470, true) == 1)
										{
											if (iParam2->f_18 > 25f)
											{
												func_320(iParam2, 9, 0, 0);
											}
										}
									}
								}
							}
							break;
					}
					break;
				case 7:
					if (iParam2->f_5 == 0)
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam2, true);
						iParam2->f_6 = MISC::GET_GAME_TIMER();
						iParam2->f_12 = MISC::GET_GAME_TIMER();
						iLocal_1687 = 0;
						iParam2->f_5 = 1;
					}
					else
					{
						if (__LIB_1__::func_205(Global_35, iLocal_1240[6], 1, 0) || __LIB_1__::func_205(*iParam2, iLocal_1240[6], 1, 0))
						{
							func_320(iParam2, 5, 0, 0);
						}
						if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(*iParam2))
						{
							func_320(iParam2, 6, 0, 1);
						}
					}
					break;
				case 5:
					TASK::REQUEST_WAYPOINT_RECORDING("rdtc3_charles_patrol_sneak");
					TASK::REQUEST_WAYPOINT_RECORDING("rdtc3_charles_butcher_creek_to_beaver_hollow");
					switch (iParam2->f_7)
					{
						case 0:
							if (iParam2->f_5 == 0)
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam2, true);
								iParam2->f_5 = 1;
							}
							else if (!PED::IS_PED_INJURED(Global_35))
							{
								if ((!__LIB_3__::func_330(Global_35, iParam5, 0) || ((ENTITY::DOES_ENTITY_EXIST(iLocal_1161) && !ENTITY::IS_ENTITY_DEAD(iLocal_1161)) && ENTITY::GET_ENTITY_SPEED(iLocal_1161) < 1f)) || (ENTITY::IS_ENTITY_IN_VOLUME(*iParam2, iLocal_1240[40], true, 0) && __LIB_3__::func_330(*iParam2, iParam5, 0)))
								{
									func_320(iParam2, 5, 0, 1);
								}
							}
							break;
						case 1:
							if (iParam2->f_5 == 0)
							{
								if (__LIB_3__::func_330(*iParam2, iParam5, 0))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam2, true);
									func_1386(*iParam2, vLocal_17);
									VEHICLE::_0x703D4FB366DA4452(iLocal_1161, 1);
								}
								iParam2->f_5 = 1;
							}
							else if (!__LIB_3__::func_330(*iParam2, iParam5, 0))
							{
								if (!AITRANSPORT::_0x660639BC60157048(*iParam2, iParam5))
								{
									func_320(iParam2, 12, 0, 0);
								}
							}
							break;
					}
					break;
				case 12:
					if (iParam2->f_5 == 0)
					{
						Var76.f_2 = -1;
						Var76.f_7 = -1;
						Var76.f_8 = -1082130432;
						Var76.f_12 = -1082130432;
						Var76.f_13 = 1;
						Var76.f_14 = -1082130432;
						AUDIO::_0x0D7FD6A55FD63AEF(19, 3, 1);
						AUDIO::_0x0D7FD6A55FD63AEF(14, 3, 1);
						if (!PED::DOES_GROUP_EXIST(iLocal_1230))
						{
							iLocal_1230 = PED::CREATE_GROUP(2);
							PED::SET_GROUP_FORMATION(iLocal_1230, 10);
						}
						if (PED::DOES_GROUP_EXIST(iLocal_1230))
						{
							if (!PED::_0x878B68960C1C2A35(*iParam2, iLocal_1230))
							{
								PED::SET_PED_CONFIG_FLAG(*iParam2, 279, true);
								PED::SET_PED_AS_GROUP_LEADER(*iParam2, iLocal_1230, false);
							}
						}
						if (__LIB_0__::func_27(iParam2->f_9, 262144))
						{
							Var76 = "rdtc3_horse_ride_cme";
							Var76.f_12 = 1.001f;
						}
						else
						{
							Var76 = "rdtc3_charles_butcher_creek_to_beaver_hollow";
							Var76.f_12 = 1f;
						}
						Var76.f_1 = 0;
						Var76.f_3 = 67118088;
						Var76.f_13 = 0;
						Var76.f_14 = 0.2f;
						Var76.f_5 = 1;
						TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(*iParam2, false, 1f);
						TASK::_0x9DE63896B176EA94(*iParam2, 1);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam2, true);
						TASK::TASK_FOLLOW_WAYPOINT_RECORDING_ADVANCED(*iParam2, &Var76);
						__LIB_1__::func_683(&(iParam2->f_9), 32768);
						iParam2->f_5 = 1;
					}
					else
					{
						if (!__LIB_0__::func_27(iParam2->f_9, 262144))
						{
							if (!__LIB_0__::func_27(iParam2->f_9, -2147483648))
							{
								switch (iParam2->f_7)
								{
									case 0:
										if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(*iParam2, "rdtc3_charles_butcher_creek_to_beaver_hollow"))
										{
											if (func_1366(38) && !__LIB_5__::func_463())
											{
												__LIB_2__::func_259(&uLocal_1188);
												TASK::CLEAR_SEQUENCE_TASK(&iVar0);
												TASK::OPEN_SEQUENCE_TASK(&iVar0);
												TASK::CLEAR_PED_TASKS(0, true, false);
												TASK::TASK_TURN_PED_TO_FACE_COORD(0, 2534.656f, 833.8215f, 76.7745f, -1);
												__LIB_1__::func_474(*iParam2, &iVar0, 0, 0, 1, 1);
												iParam2->f_7++;
											}
										}
										break;
									case 1:
										if (((__LIB_13__::func_562(*iParam2, Global_35, "rdtc3_charles_butcher_creek_to_beaver_hollow") && iParam2->f_18 > 7f) || PED::IS_PED_ON_MOUNT(Global_35)) || __LIB_1__::func_583(&uLocal_1188) > 6f)
										{
											Var91.f_2 = -1;
											Var91.f_7 = -1;
											Var91.f_8 = -1082130432;
											Var91.f_12 = -1082130432;
											Var91.f_13 = 1;
											Var91.f_14 = -1082130432;
											Var91 = "rdtc3_charles_butcher_creek_to_beaver_hollow";
											Var91.f_12 = 1f;
											Var91.f_3 = 9230;
											Var91.f_13 = 0;
											Var91.f_14 = 0.2f;
											Var91.f_5 = 1;
											TASK::TASK_FOLLOW_WAYPOINT_RECORDING_ADVANCED(*iParam2, &Var91);
											iParam2->f_7++;
										}
										break;
									case 2:
										__LIB_1__::func_683(&(iParam2->f_9), -2147483648);
										iParam2->f_7 = 0;
										break;
								}
							}
						}
						if (TASK::GET_SCRIPT_TASK_STATUS(*iParam2, 658540077, true) == 1)
						{
							if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(*iParam2, 0))
							{
								PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(*iParam2, 1, 1);
								fVar1 = 1f;
								iParam2->f_10 = TASK::GET_PED_WAYPOINT_PROGRESS(*iParam2);
								if (__LIB_0__::func_27(iParam2->f_9, 32))
								{
									if (!__LIB_0__::func_27(iParam2->f_9, 262144))
									{
										switch (iParam2->f_7)
										{
											case 0:
												if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
												{
													if (PED::DOES_GROUP_EXIST(iLocal_1230))
													{
														PED::_0xD5BD1B5318A81994(iLocal_1230, 0);
														PED::SET_GROUP_FORMATION(iLocal_1230, 10);
													}
													PLAYER::_0xAC22AA6DF4D1C1DE(PLAYER::PLAYER_ID(), *iParam2, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 3, 2, 0);
													PLAYER::_0xDD33A82352C4652F(PLAYER::PLAYER_ID(), *iParam2, 2);
													PED::_0x9BBEAF8B0C007F1E(*iParam2, 1);
													PLAYER::_0x2BEED53B912537D0(PLAYER::PLAYER_ID(), *iParam2, -1082130432 /* Float: -1f */);
													PLAYER::_0xBA5CA1FEB5DE0DF6(PLAYER::PLAYER_ID(), "rdtc3_charles_butcher_creek_to_beaver_hollow", 1073741824 /* Float: 2f */, 1089470464 /* Float: 7.5f */, 1097859072 /* Float: 15f */, 1101004800 /* Float: 20f */);
													iParam2->f_7++;
												}
												break;
											case 1:
												if (iParam2->f_10 >= 235)
												{
													if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
													{
														if (PED::DOES_GROUP_EXIST(iLocal_1230))
														{
															PED::_0xD5BD1B5318A81994(iLocal_1230, 1);
														}
														PLAYER::_0xAC22AA6DF4D1C1DE(PLAYER::PLAYER_ID(), *iParam2, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 2, 2, 0);
														PLAYER::_0xDD33A82352C4652F(PLAYER::PLAYER_ID(), *iParam2, 3);
														PED::_0x9BBEAF8B0C007F1E(*iParam2, 0);
														iParam2->f_7++;
													}
												}
												break;
										}
									}
									else
									{
										switch (iParam2->f_7)
										{
											case 0:
												if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
												{
													if (PED::DOES_GROUP_EXIST(iLocal_1230))
													{
														PED::_0xD5BD1B5318A81994(iLocal_1230, 1);
													}
													PLAYER::_0xAC22AA6DF4D1C1DE(PLAYER::PLAYER_ID(), *iParam2, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 2, 2, 0);
													PLAYER::_0xDD33A82352C4652F(PLAYER::PLAYER_ID(), *iParam2, 2);
													PED::_0x9BBEAF8B0C007F1E(*iParam2, 0);
													iParam2->f_7++;
												}
												break;
										}
									}
									if (!__LIB_0__::func_27(iParam2->f_9, 262144))
									{
										if (!__LIB_0__::func_27(iLocal_1674, 536870912))
										{
											if (iParam2->f_10 > 350)
											{
												fVar1 = 1f;
											}
											else if (iParam2->f_10 > 335)
											{
												fVar1 = 1.25f;
											}
											else if (iParam2->f_10 > 300)
											{
												fVar1 = 1.501f;
											}
											else if (iParam2->f_10 > 250)
											{
												fVar1 = 1.501f;
											}
											else if (iParam2->f_10 > 60)
											{
												fVar1 = 1.75f;
											}
											else
											{
												fVar1 = 1.5f;
											}
										}
										else
										{
											fVar1 = 1f;
										}
									}
									else if (iParam2->f_10 > 293)
									{
										fVar1 = 1.25f;
									}
									else
									{
										fVar1 = 1.001f;
									}
								}
								else if (!PED::IS_PED_ON_MOUNT(*iParam2))
								{
									if (__LIB_13__::func_562(*iParam2, Global_35, "rdtc3_charles_butcher_creek_to_beaver_hollow") && iParam2->f_18 > 13f)
									{
										fVar1 = 2f;
									}
									else if ((__LIB_13__::func_562(*iParam2, Global_35, "rdtc3_charles_butcher_creek_to_beaver_hollow") && iParam2->f_18 > 7f) && iParam2->f_18 < 11f)
									{
									}
								}
								if (!__LIB_0__::func_27(iParam2->f_9, 262144))
								{
									if (iParam2->f_10 > 8)
									{
										if (!PED::IS_PED_INJURED(Global_35))
										{
											if (__LIB_13__::func_562(Global_35, *iParam2, "rdtc3_charles_butcher_creek_to_beaver_hollow") && iParam2->f_18 > 7.5f)
											{
												if (!__LIB_0__::func_27(iParam2->f_9, 32) || (__LIB_0__::func_27(iParam2->f_9, 32) && (!PED::IS_PED_ON_MOUNT(Global_35) || iParam2->f_18 > 20f)))
												{
													if (__LIB_0__::func_27(iParam2->f_9, 32))
													{
														fVar1 = 0f;
													}
													else
													{
														fVar1 = 0f;
													}
													if (!TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(*iParam2) && ENTITY::GET_ENTITY_SPEED(*iParam2) < 1f)
													{
														TASK::WAYPOINT_PLAYBACK_PAUSE(*iParam2, 1, 1, 0);
													}
												}
											}
											else if ((!__LIB_0__::func_27(iParam2->f_9, 32) || (__LIB_0__::func_27(iParam2->f_9, 32) && PED::IS_PED_ON_MOUNT(Global_35))) || ((__LIB_0__::func_27(iParam2->f_9, 32) && !PED::IS_PED_ON_MOUNT(Global_35)) && iParam2->f_18 < 7f))
											{
												if (TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(*iParam2))
												{
													TASK::WAYPOINT_PLAYBACK_RESUME(*iParam2, true, -1, 0);
												}
											}
										}
									}
								}
								__LIB_5__::func_552(*iParam2, fVar1, 0, 0.2f, 1, (3f * 2f), (30f / 2f), (60f / 2f), 1033476506 /* Float: 0.075f */, 1061158912 /* Float: 0.75f */, 1, 1, 1045220557 /* Float: 0.2f */, 0);
								if (iParam2->f_18 > 35f)
								{
									func_320(iParam2, 9, 0, 0);
								}
								if (!__LIB_0__::func_27(iParam2->f_9, 16))
								{
									if (!__LIB_0__::func_27(iParam2->f_9, 32))
									{
										if ((__LIB_0__::func_394(Global_35, uLocal_1152[0], 0) || (ENTITY::IS_ENTITY_A_PED(PED::_GET_TRANSPORT_PED_IS_SEATED_ON(Global_35)) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(PED::_GET_TRANSPORT_PED_IS_SEATED_ON(Global_35)) == uLocal_1152[0])) || (__LIB_0__::func_394(Global_35, uLocal_1152[1], 0) || (ENTITY::IS_ENTITY_A_PED(PED::_GET_TRANSPORT_PED_IS_SEATED_ON(Global_35)) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(PED::_GET_TRANSPORT_PED_IS_SEATED_ON(Global_35)) == uLocal_1152[1])))
										{
											func_320(iParam2, 3, 0, -1);
											iParam2->f_7 = 0;
										}
									}
								}
								if (!__LIB_0__::func_27(iParam2->f_9, 16))
								{
									if (__LIB_0__::func_27(iLocal_1674, 536870912))
									{
										if (iParam2->f_10 >= 285)
										{
											if (PED::IS_PED_ON_MOUNT(*iParam2))
											{
												if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
												{
													PLAYER::_0x908D4B72854C8F62(PLAYER::PLAYER_ID());
													PLAYER::_0x12E09E278C6C29B7(PLAYER::PLAYER_ID());
												}
												if (PED::DOES_GROUP_EXIST(iLocal_1230))
												{
													PED::REMOVE_GROUP(iLocal_1230);
												}
												AUDIO::_0x660A8F876DF1D4F8(21);
												AUDIO::_0x660A8F876DF1D4F8(19);
												AUDIO::_0x660A8F876DF1D4F8(14);
												func_320(iParam2, 4, 0, 0);
											}
											else
											{
												func_320(iParam2, 30, 0, 0);
												AUDIO::_0x660A8F876DF1D4F8(21);
												AUDIO::_0x660A8F876DF1D4F8(19);
												AUDIO::_0x660A8F876DF1D4F8(14);
											}
										}
									}
								}
								if (__LIB_0__::func_27(iParam2->f_9, 262144))
								{
									if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(*iParam2, "rdtc3_horse_ride_cme") && iParam2->f_10 >= 300)
									{
										func_320(iParam2, 12, 0, 0);
										__LIB_1__::func_681(&(iParam2->f_9), 262144);
									}
								}
							}
						}
						if (__LIB_0__::func_27(iParam2->f_9, 32))
						{
							if (!PED::IS_PED_ON_MOUNT(*iParam2) && !PED::IS_PED_RAGDOLL(*iParam2))
							{
								if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(*iParam2, 0) && !PED::IS_PED_RAGDOLL(*iParam2))
								{
									TASK::CLEAR_PED_TASKS(*iParam2, true, false);
								}
								func_320(iParam2, 3, 0, -1);
							}
						}
					}
					break;
				case 30:
					switch (iParam2->f_7)
					{
						case 0:
							if (iParam2->f_5 == 0)
							{
								Var106.f_2 = -1;
								Var106.f_7 = -1;
								Var106.f_8 = -1082130432;
								Var106.f_12 = -1082130432;
								Var106.f_13 = 1;
								Var106.f_14 = -1082130432;
								Var106 = "rdtc3_charles_patrol_sneak";
								Var106.f_1 = 0;
								Var106.f_3 = 9230;
								Var106.f_12 = (1.5f * 1.1f);
								PED::_SET_PED_CROUCH_MOVEMENT(*iParam2, true, 0, false);
								PED::SET_PED_COMBAT_ATTRIBUTES(*iParam2, 27, true);
								PED::SET_PED_ACCURACY(*iParam2, 100);
								PED::_SET_PED_BLACKBOARD_FLOAT(*iParam2, "Stealth", 1f, -1);
								PED::_SET_PED_BLACKBOARD_FLOAT(*iParam2, "Cautious", 1f, -1);
								WEAPON::SET_CURRENT_PED_WEAPON(*iParam2, joaat("WEAPON_THROWN_TOMAHAWK"), false, 0, false, false);
								TASK::TASK_SWAP_WEAPON(*iParam2, 1, 1, 0, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam2, true);
								TASK::TASK_FOLLOW_WAYPOINT_RECORDING_ADVANCED(*iParam2, &Var106);
								PLAYER::_0x2BEED53B912537D0(PLAYER::PLAYER_ID(), *iParam2, -1082130432 /* Float: -1f */);
								PLAYER::_0xBA5CA1FEB5DE0DF6(PLAYER::PLAYER_ID(), Var106, 1073741824 /* Float: 2f */, 1089470464 /* Float: 7.5f */, 1097859072 /* Float: 15f */, 1101004800 /* Float: 20f */);
								iParam2->f_5 = 1;
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(*iParam2, 658540077, true) == 1)
							{
								if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(*iParam2, "rdtc3_charles_patrol_sneak"))
								{
									iParam2->f_10 = TASK::GET_PED_WAYPOINT_PROGRESS(*iParam2);
									if (iParam2->f_10 >= 38)
									{
										func_320(iParam2, 30, 0, 1);
									}
								}
							}
							break;
						case 1:
							if (iParam2->f_5 == 0)
							{
								AICOVERPOINT::_0x140B3CB1D424A945(*iParam2, -1);
								PED::SET_PED_CONFIG_FLAG(*iParam2, 34, true);
								PED::SET_PED_CONFIG_FLAG(*iParam2, 32, true);
								PED::SET_PED_CONFIG_FLAG(*iParam2, 33, false);
								PED::_SET_PED_CROUCH_MOVEMENT(*iParam2, true, 0, false);
								TASK::CLEAR_SEQUENCE_TASK(&iVar0);
								TASK::OPEN_SEQUENCE_TASK(&iVar0);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_1412[15 /*5*/], (1.5f * 1.1f), 20000, (0.25f * 4f), 1, Local_1412[15 /*5*/].f_3);
								TASK::TASK_SET_CROUCH_MOVEMENT(0, false, 0, false);
								TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, Local_1412[15 /*5*/], -1, 0, 0.5f, 1, 1, Local_1412[15 /*5*/].f_4, 1, 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(iVar0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam2, true);
								TASK::TASK_PERFORM_SEQUENCE(*iParam2, iVar0);
								TASK::CLEAR_SEQUENCE_TASK(&iVar0);
								iParam2->f_5 = 1;
							}
							else
							{
								if (((!PED::IS_PED_INJURED(Local_442[0 /*20*/]) && !__LIB_0__::func_27(Local_442[0 /*20*/].f_9, 134217728)) && !PED::IS_PED_INJURED(Local_442[1 /*20*/])) && !__LIB_0__::func_27(Local_442[1 /*20*/].f_9, 134217728))
								{
									if (Local_442[0 /*20*/].f_3 == 28)
									{
										if ((TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_442[0 /*20*/], 0) && TASK::GET_PED_WAYPOINT_PROGRESS(Local_442[0 /*20*/]) >= 40) || !TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_442[0 /*20*/], 0))
										{
											func_320(iParam2, 30, 0, 2);
										}
									}
								}
								if (__LIB_0__::func_27(iLocal_1674, 4))
								{
									func_320(iParam2, 30, 0, 5);
								}
							}
							break;
						case 2:
							if (iParam2->f_5 == 0)
							{
								Var121.f_2 = -1;
								Var121.f_7 = -1;
								Var121.f_8 = -1082130432;
								Var121.f_12 = -1082130432;
								Var121.f_13 = 1;
								Var121.f_14 = -1082130432;
								Var121 = "rdtc3_charles_patrol_sneak";
								Var121.f_1 = 50;
								Var121.f_3 = 4194318;
								Var121.f_12 = (1.5f * 1.1f);
								PED::_SET_PED_CROUCH_MOVEMENT(*iParam2, true, 0, false);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam2, true);
								TASK::TASK_FOLLOW_WAYPOINT_RECORDING_ADVANCED(*iParam2, &Var121);
								iParam2->f_5 = 1;
							}
							else
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(*iParam2, 658540077, true) == 1)
								{
									if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(*iParam2, "rdtc3_charles_patrol_sneak"))
									{
										PED::_SET_PED_CROUCH_MOVEMENT(*iParam2, true, 0, false);
										iParam2->f_10 = TASK::GET_PED_WAYPOINT_PROGRESS(*iParam2);
										if (iParam2->f_10 >= 125)
										{
											func_320(iParam2, 30, 0, 3);
										}
									}
								}
								if (__LIB_0__::func_27(iLocal_1674, 4))
								{
									func_320(iParam2, 30, 0, 5);
								}
							}
							break;
						case 3:
							if (iParam2->f_5 == 0)
							{
								AICOVERPOINT::_0x140B3CB1D424A945(*iParam2, -1);
								PED::SET_PED_CONFIG_FLAG(*iParam2, 34, true);
								PED::SET_PED_CONFIG_FLAG(*iParam2, 32, true);
								PED::SET_PED_CONFIG_FLAG(*iParam2, 33, false);
								PED::_SET_PED_CROUCH_MOVEMENT(*iParam2, true, 0, false);
								TASK::CLEAR_SEQUENCE_TASK(&iVar0);
								TASK::OPEN_SEQUENCE_TASK(&iVar0);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2385.423f, 1285.36f, 114.099f, (1.5f * 1.1f), 20000, (0.25f * 4f), 1, Local_1412[16 /*5*/].f_3);
								TASK::TASK_SET_CROUCH_MOVEMENT(0, false, 0, false);
								TASK::CLOSE_SEQUENCE_TASK(iVar0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam2, true);
								TASK::TASK_PERFORM_SEQUENCE(*iParam2, iVar0);
								TASK::CLEAR_SEQUENCE_TASK(&iVar0);
								iParam2->f_6 = MISC::GET_GAME_TIMER();
								iParam2->f_5 = 1;
							}
							else
							{
								if (__LIB_0__::func_266(*iParam2, 2385.423f, 1285.36f, 114.099f, 3f, 1, 1))
								{
									if (((!PED::IS_PED_INJURED(Local_442[0 /*20*/]) && !__LIB_0__::func_27(Local_442[0 /*20*/].f_9, 134217728)) && !PED::IS_PED_INJURED(Local_442[1 /*20*/])) && !__LIB_0__::func_27(Local_442[1 /*20*/].f_9, 134217728))
									{
										if (__LIB_0__::func_27(Local_442[1 /*20*/].f_9, 524288))
										{
											func_320(iParam2, 31, 0, 0);
										}
									}
								}
								if (__LIB_0__::func_27(iLocal_1674, 4))
								{
									func_320(iParam2, 30, 0, 5);
								}
							}
							break;
						case 4:
							if (iParam2->f_5 == 0)
							{
								Var136.f_2 = -1;
								Var136.f_7 = -1;
								Var136.f_8 = -1082130432;
								Var136.f_12 = -1082130432;
								Var136.f_13 = 1;
								Var136.f_14 = -1082130432;
								Var136 = "rdtc3_charles_patrol_sneak";
								Var136.f_1 = 0;
								Var136.f_3 = 4194318;
								Var136.f_12 = (1.5f * 1.1f);
								PED::_SET_PED_CROUCH_MOVEMENT(*iParam2, false, 0, false);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam2, true);
								TASK::TASK_FOLLOW_WAYPOINT_RECORDING_ADVANCED(*iParam2, &Var136);
								iParam2->f_5 = 1;
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(*iParam2, 658540077, true) == 1)
							{
								if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(*iParam2, "rdtc3_charles_patrol_sneak"))
								{
									iParam2->f_10 = TASK::GET_PED_WAYPOINT_PROGRESS(*iParam2);
								}
							}
							break;
						case 5:
							if (iParam2->f_5 == 0)
							{
								Var151.f_2 = -1;
								Var151.f_7 = -1;
								Var151.f_8 = -1082130432;
								Var151.f_12 = -1082130432;
								Var151.f_13 = 1;
								Var151.f_14 = -1082130432;
								Var151 = "rdtc3_charles_butcher_creek_to_beaver_hollow";
								Var151.f_1 = 0;
								Var151.f_3 = 4194318;
								Var151.f_12 = (1.5f * 1.1f);
								PED::_SET_PED_CROUCH_MOVEMENT(*iParam2, false, 0, false);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam2, true);
								TASK::TASK_FOLLOW_WAYPOINT_RECORDING_ADVANCED(*iParam2, &Var151);
								PED::SET_PED_COMBAT_ATTRIBUTES(*iParam2, 27, false);
								PED::SET_PED_ACCURACY(*iParam2, 70);
								iParam2->f_5 = 1;
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(*iParam2, 658540077, true) == 1)
							{
								if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(*iParam2, "rdtc3_charles_butcher_creek_to_beaver_hollow"))
								{
									iParam2->f_10 = TASK::GET_PED_WAYPOINT_PROGRESS(*iParam2);
								}
							}
							break;
					}
					if (!__LIB_0__::func_27(iLocal_1674, 4))
					{
						if (__LIB_0__::func_27(iLocal_1674, 1073741824 /* Float: 2f */))
						{
							func_320(iParam2, 33, 0, -1);
						}
					}
					if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(*iParam2, 0))
					{
						iParam2->f_18 = __LIB_0__::func_665(*iParam2, Global_35, 1, 1);
						if ((__LIB_13__::func_562(Global_35, *iParam2, "rdtc3_charles_patrol_sneak") && iParam2->f_18 > 8f) || (__LIB_13__::func_562(Global_35, *iParam2, "rdtc3_charles_butcher_creek_to_beaver_hollow") && iParam2->f_18 > 8f))
						{
							fVar1 = 0f;
							__LIB_5__::func_552(*iParam2, fVar1, 0, 0.4f, 1, (3f * 2f), (30f / 2f), (60f / 2f), 1033476506 /* Float: 0.075f */, 1061158912 /* Float: 0.75f */, 1, 1, 1045220557 /* Float: 0.2f */, 0);
							if (!TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(*iParam2) && ENTITY::GET_ENTITY_SPEED(*iParam2) < 1f)
							{
								TASK::WAYPOINT_PLAYBACK_PAUSE(*iParam2, 1, 1, 0);
								if (!__LIB_5__::func_463())
								{
									__LIB_12__::func_876(uParam0, "RDCH3_FOLLDWD", 0);
								}
							}
						}
						else
						{
							if (TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(*iParam2))
							{
								TASK::WAYPOINT_PLAYBACK_RESUME(*iParam2, true, -1, 1000);
							}
							fVar1 = (1.5f * 1.1f);
							__LIB_5__::func_552(*iParam2, fVar1, 0, -1f, 1, (3f * 2f), (30f / 2f), (60f / 2f), 1033476506 /* Float: 0.075f */, 1061158912 /* Float: 0.75f */, 1, 1, 1045220557 /* Float: 0.2f */, 0);
						}
					}
					break;
				case 31:
					switch (iParam2->f_7)
					{
						case 0:
							if (iParam2->f_5 == 0)
							{
								PED::_SET_PED_CROUCH_MOVEMENT(*iParam2, false, 0, false);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam2, true);
								TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(*iParam2, 2383.971f, 1286.477f, 113.5621f, ENTITY::GET_ENTITY_COORDS(Local_442[1 /*20*/], true, false), 1f, 0, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 0);
								iParam2->f_5 = 1;
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(*iParam2, 432954108, true) == 8)
							{
								func_320(iParam2, 31, 0, 1);
							}
							break;
						case 1:
							if (iParam2->f_5 == 0)
							{
								PED::_SET_PED_CROUCH_MOVEMENT(*iParam2, false, 0, false);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam2, true);
								if (!PED::IS_PED_INJURED(Local_442[1 /*20*/]))
								{
									TASK::TASK_AIM_AT_COORD(*iParam2, ENTITY::GET_ENTITY_COORDS(Local_442[1 /*20*/], false, false), -1, 0, 0);
								}
								else if (!PED::IS_PED_INJURED(Local_442[0 /*20*/]))
								{
									TASK::TASK_AIM_AT_COORD(*iParam2, ENTITY::GET_ENTITY_COORDS(Local_442[0 /*20*/], false, false), -1, 0, 0);
								}
								iParam2->f_5 = 1;
							}
							break;
					}
					if (((func_1387(&(Local_442[0 /*20*/])) || func_1387(&(Local_442[1 /*20*/]))) || (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_442[0 /*20*/], Global_35, 1, 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_442[1 /*20*/], Global_35, 1, 1))) || ((func_1388(Local_442[0 /*20*/], 2f) || func_1388(Local_442[1 /*20*/], 2f)) && PED::IS_PED_SHOOTING(Global_35)))
					{
						if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(*iParam2, Local_442[0 /*20*/], 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(*iParam2, Local_442[1 /*20*/], 17))
						{
							func_320(iParam2, 32, 0, 0);
						}
						else
						{
							func_320(iParam2, 33, 0, -1);
						}
					}
					if (__LIB_0__::func_27(iLocal_1674, 4))
					{
						func_320(iParam2, 30, 0, 4);
					}
					if (!__LIB_0__::func_27(iLocal_1674, 4))
					{
						if (__LIB_0__::func_27(iLocal_1674, 1073741824 /* Float: 2f */))
						{
							func_320(iParam2, 33, 0, -1);
						}
					}
					break;
				case 32:
					if (iParam2->f_5 == 0)
					{
						WEAPON::GET_CURRENT_PED_WEAPON(*iParam2, &iVar172, true, 0, false);
						if (WEAPON::IS_WEAPON_VALID(iVar172) && iVar172 == joaat("WEAPON_THROWN_TOMAHAWK"))
						{
							Var173.f_4 = -1;
							Var173.f_8 = 1;
							Var173.f_10 = 1;
							Var173.f_13 = 1;
							Var173.f_11 = 1f;
							PLAYER::GET_PLAYER_TARGET_ENTITY(PLAYER::PLAYER_ID(), &iVar170);
							PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar169);
							PLAYER::_0x7AE93C45EC14A166(PLAYER::PLAYER_ID(), &iVar171);
							iVar167 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar170);
							iVar166 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar169);
							iVar168 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar171);
							if ((((iVar168 == Local_442[0 /*20*/] || iVar166 == Local_442[0 /*20*/]) || iVar167 == Local_442[0 /*20*/]) || func_1387(&(Local_442[0 /*20*/]))) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_442[0 /*20*/], Global_35, 1, 1))
							{
								Var173 = Local_442[1 /*20*/];
							}
							else if ((((iVar168 == Local_442[1 /*20*/] || iVar166 == Local_442[1 /*20*/]) || iVar167 == Local_442[1 /*20*/]) || func_1387(&(Local_442[1 /*20*/]))) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_442[1 /*20*/], Global_35, 1, 1))
							{
								Var173 = Local_442[0 /*20*/];
							}
							else if (func_1388(Local_442[0 /*20*/], 2f))
							{
								Var173 = Local_442[1 /*20*/];
							}
							else if (func_1388(Local_442[1 /*20*/], 2f))
							{
								Var173 = Local_442[0 /*20*/];
							}
							else if (!PED::IS_PED_INJURED(Local_442[0 /*20*/]))
							{
								Var173 = Local_442[0 /*20*/];
							}
							else if (!PED::IS_PED_INJURED(Local_442[1 /*20*/]))
							{
								Var173 = Local_442[1 /*20*/];
							}
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam2, true);
							TASK::TASK_SHOOT_WITH_WEAPON(*iParam2, &Var173);
							iParam2->f_5 = 1;
						}
						else if (TASK::GET_SCRIPT_TASK_STATUS(*iParam2, 716706914, true) != 1)
						{
							WEAPON::SET_CURRENT_PED_WEAPON(*iParam2, joaat("WEAPON_THROWN_TOMAHAWK"), true, 0, false, false);
							TASK::TASK_SWAP_WEAPON(*iParam2, 1, 0, 0, 0);
						}
					}
					if (__LIB_0__::func_27(iLocal_1674, 4))
					{
						func_320(iParam2, 30, 0, 5);
					}
					if (!__LIB_0__::func_27(iLocal_1674, 4))
					{
						if (__LIB_0__::func_27(iLocal_1674, 1073741824 /* Float: 2f */))
						{
							func_320(iParam2, 33, 0, -1);
						}
					}
					break;
				case 33:
					if (iParam2->f_5 == 0)
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(*iParam2, -1692648609, true) != 1)
						{
							PED::SET_PED_COMBAT_RANGE(*iParam2, 0);
							PED::SET_PED_COMBAT_MOVEMENT(*iParam2, 2);
							PED::SET_PED_COMBAT_ABILITY(*iParam2, 2);
							PED::SET_COMBAT_FLOAT(*iParam2, 7, 1f);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam2, 42, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam2, 50, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam2, 0, false);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam2, 93, true);
							PED::SET_PED_CONFIG_FLAG(*iParam2, 112, true);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam2, true);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(*iParam2, 50f, 0, 0);
							iParam2->f_5 = 1;
						}
					}
					else if (__LIB_0__::func_27(iLocal_1674, 4))
					{
						func_320(iParam2, 30, 0, 5);
					}
					break;
				case 9:
					if (iParam2->f_5 == 0)
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam2, true);
						TASK::CLEAR_PED_TASKS(*iParam2, true, false);
						iParam2->f_5 = 1;
					}
					else if (iParam2->f_18 < (30f / 3f))
					{
						switch (iParam1)
						{
							case 1:
								if (iLocal_112 == 0)
								{
									if (PED::IS_PED_ON_MOUNT(*iParam2))
									{
										func_320(iParam2, 6, 0, 0);
									}
									else
									{
										func_320(iParam2, 6, 0, 1);
									}
								}
								break;
							case 0:
								func_320(iParam2, 11, 0, 0);
								break;
							case 2:
							case 3:
								func_320(iParam2, 12, 0, 0);
								break;
						}
					}
					break;
				case 8:
					if (iParam2->f_5 == 0)
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam2, true);
						PED::SET_PED_CONFIG_FLAG(*iParam2, 279, true);
						PED::SET_PED_AS_GROUP_MEMBER(*iParam2, __LIB_0__::func_110());
						iParam2->f_5 = 1;
					}
					else
					{
						func_1389(&Local_142);
					}
					if (__LIB_0__::func_27(iParam2->f_9, 134217728))
					{
						func_320(iParam2, 38, 0, 0);
					}
					break;
				case 34:
					func_1389(&Local_142);
					switch (iParam2->f_7)
					{
						case 0:
							if (iParam2->f_5 == 0)
							{
								func_1390(*iParam2, joaat("WEAPON_THROWN_TOMAHAWK"), joaat("WEAPON_UNARMED"), 1);
								__LIB_1__::func_681(&(Local_142.f_9), 1048576);
								if (!__LIB_11__::func_307(Global_35, Local_1412[2 /*5*/].f_4, 1, 1.5f))
								{
									iParam2->f_8 = 2;
								}
								else if (!__LIB_11__::func_307(Global_35, Local_1412[1 /*5*/].f_4, 1, 1.5f))
								{
									iParam2->f_8 = 1;
								}
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam2, true);
								TASK::CLEAR_SEQUENCE_TASK(&iVar0);
								TASK::OPEN_SEQUENCE_TASK(&iVar0);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_1412[iParam2->f_8 /*5*/], 1.5f, 40000, (0.25f * 4f), 0, 40000f);
								TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, Local_1412[iParam2->f_8 /*5*/], -1, 0, 1f, 0, 0, Local_1412[iParam2->f_8 /*5*/].f_4, 1, 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(iVar0);
								TASK::TASK_PERFORM_SEQUENCE(*iParam2, iVar0);
								TASK::CLEAR_SEQUENCE_TASK(&iVar0);
								__LIB_1__::func_681(&(iParam2->f_9), 1024);
								iParam2->f_5 = 1;
							}
							else
							{
								if (!PED::IS_PED_IN_COVER(*iParam2, false, false) && !PED::IS_PED_GOING_INTO_COVER(*iParam2))
								{
									switch (iParam2->f_8)
									{
										case 2:
											if (__LIB_11__::func_307(Global_35, Local_1412[2 /*5*/].f_4, 1, 1.5f))
											{
												func_320(iParam2, 34, 0, -1);
											}
											break;
										case 1:
											if (__LIB_11__::func_307(Global_35, Local_1412[1 /*5*/].f_4, 1, 1.5f))
											{
												func_320(iParam2, 34, 0, -1);
											}
											break;
									}
								}
								if (((!__LIB_0__::func_27(iLocal_1670, 8388608) && !__LIB_0__::func_27(iLocal_1670, 4194304)) && !__LIB_0__::func_27(iLocal_1670, 1048576)) && !__LIB_0__::func_27(iLocal_1670, 262144))
								{
									if (__LIB_0__::func_27(Local_503[0 /*20*/].f_9, 1))
									{
										func_320(iParam2, 34, 0, 1);
									}
								}
							}
							break;
						case 1:
							if (iParam2->f_5 == 0)
							{
								if (!__LIB_11__::func_307(Global_35, Local_1412[4 /*5*/].f_4, 1, 1.5f))
								{
									iParam2->f_8 = 4;
								}
								else if (!__LIB_11__::func_307(Global_35, Local_1412[3 /*5*/].f_4, 1, 1.5f))
								{
									iParam2->f_8 = 3;
								}
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam2, true);
								TASK::CLEAR_SEQUENCE_TASK(&iVar0);
								TASK::OPEN_SEQUENCE_TASK(&iVar0);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_1412[iParam2->f_8 /*5*/], 1.5f, 40000, (0.25f * 4f), 0, 40000f);
								TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, Local_1412[iParam2->f_8 /*5*/], -1, 0, 1f, 0, 0, Local_1412[iParam2->f_8 /*5*/].f_4, 1, 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(iVar0);
								TASK::TASK_PERFORM_SEQUENCE(*iParam2, iVar0);
								TASK::CLEAR_SEQUENCE_TASK(&iVar0);
								__LIB_1__::func_681(&(iParam2->f_9), 1024);
								iParam2->f_5 = 1;
							}
							else
							{
								if (!PED::IS_PED_IN_COVER(*iParam2, false, false) && !PED::IS_PED_GOING_INTO_COVER(*iParam2))
								{
									switch (iParam2->f_8)
									{
										case 4:
											if (__LIB_11__::func_307(Global_35, Local_1412[4 /*5*/].f_4, 1, 1.5f))
											{
												func_320(iParam2, 34, 0, -1);
											}
											break;
										case 3:
											if (__LIB_11__::func_307(Global_35, Local_1412[3 /*5*/].f_4, 1, 1.5f))
											{
												func_320(iParam2, 34, 0, -1);
											}
											break;
									}
								}
								if (!__LIB_0__::func_27(iLocal_1670, 262144))
								{
									if (__LIB_0__::func_27(Local_503[1 /*20*/].f_9, 1))
									{
										__LIB_8__::func_771(Local_142, 1, 1, 1);
										func_320(iParam2, 34, 0, 2);
										iLocal_121 = 4;
									}
								}
								if (!__LIB_0__::func_27(iParam2->f_9, 1024))
								{
									if (ENTITY::DOES_ENTITY_EXIST(Local_503[1 /*20*/]) && !PED::IS_PED_INJURED(Local_503[1 /*20*/]))
									{
										func_1392(uParam0);
										if (Local_503[1 /*20*/].f_3 == 36 || __LIB_0__::func_27(Local_503[1 /*20*/].f_9, 4096))
										{
											if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(*iParam2, Local_503[1 /*20*/], 17) && __LIB_0__::func_665(Global_35, Local_503[1 /*20*/], 1, 1) > 3f)
											{
												PED::SET_PED_ACCURACY(*iParam2, 100);
												PED::SET_COMBAT_FLOAT(*iParam2, 6, 1f);
												PED::SET_PED_COMBAT_ATTRIBUTES(*iParam2, 27, true);
												Var190.f_4 = -1;
												Var190.f_8 = 1;
												Var190.f_10 = 1;
												Var190.f_11 = 1f;
												Var190.f_10 = 1;
												Var190.f_11 = 1f;
												Var190 = Local_503[1 /*20*/];
												TASK::TASK_SHOOT_WITH_WEAPON(*iParam2, &Var190);
												__LIB_1__::func_683(&(iParam2->f_9), 1024);
											}
										}
									}
								}
							}
							break;
						case 2:
							if (iParam2->f_5 == 0)
							{
								func_1390(*iParam2, joaat("WEAPON_THROWN_TOMAHAWK"), joaat("WEAPON_UNARMED"), 1);
								if (!__LIB_11__::func_307(Global_35, Local_1412[6 /*5*/].f_4, 1, 1.5f))
								{
									iParam2->f_8 = 6;
								}
								else if (!__LIB_11__::func_307(Global_35, Local_1412[5 /*5*/].f_4, 1, 1.5f))
								{
									iParam2->f_8 = 5;
								}
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam2, true);
								TASK::CLEAR_SEQUENCE_TASK(&iVar0);
								TASK::OPEN_SEQUENCE_TASK(&iVar0);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_1412[iParam2->f_8 /*5*/], 1.5f, 40000, (0.25f * 4f), 0, 40000f);
								TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, Local_1412[iParam2->f_8 /*5*/], -1, 0, 1f, 0, 0, Local_1412[iParam2->f_8 /*5*/].f_4, 1, 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(iVar0);
								TASK::TASK_PERFORM_SEQUENCE(*iParam2, iVar0);
								TASK::CLEAR_SEQUENCE_TASK(&iVar0);
								__LIB_1__::func_681(&(iParam2->f_9), 1024);
								__LIB_1__::func_681(&(iParam2->f_9), 2048);
								iParam2->f_5 = 1;
							}
							else
							{
								func_1392(uParam0);
								if (!__LIB_0__::func_27(iParam2->f_9, 8192))
								{
									if (!PED::IS_PED_IN_COVER(*iParam2, false, false) && !PED::IS_PED_GOING_INTO_COVER(*iParam2))
									{
										switch (iParam2->f_8)
										{
											case 6:
												if (__LIB_11__::func_307(Global_35, Local_1412[6 /*5*/].f_4, 1, 1.5f))
												{
													func_320(iParam2, 34, 0, -1);
												}
												break;
											case 5:
												if (__LIB_11__::func_307(Global_35, Local_1412[5 /*5*/].f_4, 1, 1.5f))
												{
													func_320(iParam2, 34, 0, -1);
												}
												break;
										}
									}
								}
								if (!__LIB_0__::func_27(iLocal_1670, 262144))
								{
									if (__LIB_0__::func_27(Local_503[3 /*20*/].f_9, 1) && __LIB_0__::func_27(Local_503[4 /*20*/].f_9, 1))
									{
										func_320(iParam2, 34, 0, 3);
									}
								}
								if (!__LIB_0__::func_27(iParam2->f_9, 8192))
								{
								}
								else
								{
									switch (iParam2->f_8)
									{
										case 0:
											if (__LIB_0__::func_266(Global_35, vLocal_1282[0 /*3*/], 1.5f, 1, 1))
											{
												__LIB_1__::func_681(&(iParam2->f_9), 8192);
											}
											break;
										case 1:
											if (__LIB_0__::func_266(Global_35, vLocal_1282[1 /*3*/], 1.5f, 1, 1))
											{
												__LIB_1__::func_681(&(iParam2->f_9), 8192);
											}
											break;
									}
								}
								if (!__LIB_0__::func_27(iParam2->f_9, 1024) && !__LIB_0__::func_27(iParam2->f_9, 2048))
								{
									if (!__LIB_0__::func_27(Local_503[3 /*20*/].f_9, 1) || !__LIB_0__::func_27(Local_503[4 /*20*/].f_9, 1))
									{
										if (PED::IS_PED_BEING_STEALTH_KILLED(Local_503[3 /*20*/]))
										{
											__LIB_1__::func_683(&(Local_503[4 /*20*/].f_9), 4096);
										}
										else if (PED::IS_PED_BEING_STEALTH_KILLED(Local_503[4 /*20*/]))
										{
											__LIB_1__::func_683(&(Local_503[3 /*20*/].f_9), 4096);
										}
										if (__LIB_0__::func_27(Local_503[3 /*20*/].f_9, 4096) || __LIB_0__::func_27(Local_503[4 /*20*/].f_9, 4096))
										{
											TASK::CLEAR_SEQUENCE_TASK(&iVar0);
											TASK::OPEN_SEQUENCE_TASK(&iVar0);
											if (__LIB_0__::func_27(Local_503[3 /*20*/].f_9, 4096))
											{
												TASK::TASK_MELEE(0, Local_503[3 /*20*/], joaat("AR_STEALTH_KILL"), 0, 1, 2f, 1, -1082130432 /* Float: -1f */);
											}
											else if (__LIB_0__::func_27(Local_503[4 /*20*/].f_9, 4096))
											{
												TASK::TASK_MELEE(0, Local_503[4 /*20*/], joaat("AR_STEALTH_KILL"), 0, 1, 2f, 1, -1082130432 /* Float: -1f */);
											}
											TASK::CLOSE_SEQUENCE_TASK(iVar0);
											TASK::TASK_PERFORM_SEQUENCE(*iParam2, iVar0);
											TASK::CLEAR_SEQUENCE_TASK(&iVar0);
											__LIB_1__::func_683(&(iParam2->f_9), 2048);
										}
									}
								}
								if (!__LIB_0__::func_27(iParam2->f_9, 1024) && !__LIB_0__::func_27(iParam2->f_9, 2048))
								{
									if (!__LIB_0__::func_27(Local_503[3 /*20*/].f_9, 1) || !__LIB_0__::func_27(Local_503[4 /*20*/].f_9, 1))
									{
										if (__LIB_0__::func_27(Local_503[3 /*20*/].f_9, 1))
										{
											if (__LIB_9__::func_225(Global_35, Local_503[3 /*20*/]))
											{
												__LIB_1__::func_683(&(Local_503[4 /*20*/].f_9), 4096);
											}
										}
										else if (__LIB_0__::func_27(Local_503[4 /*20*/].f_9, 1))
										{
											if (__LIB_9__::func_225(Global_35, Local_503[4 /*20*/]))
											{
												__LIB_1__::func_683(&(Local_503[3 /*20*/].f_9), 4096);
											}
										}
										if (__LIB_0__::func_27(Local_503[3 /*20*/].f_9, 4096) || __LIB_0__::func_27(Local_503[4 /*20*/].f_9, 4096))
										{
											if (__LIB_0__::func_27(Local_503[3 /*20*/].f_9, 4096) || __LIB_0__::func_27(Local_503[4 /*20*/].f_9, 4096))
											{
												PED::SET_PED_ACCURACY(*iParam2, 100);
												PED::SET_COMBAT_FLOAT(*iParam2, 6, 1f);
												PED::SET_PED_COMBAT_ATTRIBUTES(*iParam2, 27, true);
												TASK::CLEAR_SEQUENCE_TASK(&iVar0);
												TASK::OPEN_SEQUENCE_TASK(&iVar0);
												if (__LIB_0__::func_27(Local_503[3 /*20*/].f_9, 4096))
												{
													Var207.f_4 = -1;
													Var207.f_8 = 1;
													Var207.f_10 = 1;
													Var207.f_11 = 1f;
													Var207 = Local_503[3 /*20*/];
													TASK::TASK_SEEK_CLEAR_LOS_TO_ENTITY(0, Local_503[3 /*20*/], 10f, 1.5f, -1082130432 /* Float: -1f */);
													TASK::TASK_SHOOT_WITH_WEAPON(0, &Var207);
												}
												else if (__LIB_0__::func_27(Local_503[4 /*20*/].f_9, 4096))
												{
													Var224.f_4 = -1;
													Var224.f_8 = 1;
													Var224.f_10 = 1;
													Var224.f_11 = 1f;
													Var224 = Local_503[4 /*20*/];
													TASK::TASK_SEEK_CLEAR_LOS_TO_ENTITY(0, Local_503[4 /*20*/], 10f, 1.5f, -1082130432 /* Float: -1f */);
													TASK::TASK_SHOOT_WITH_WEAPON(0, &Var224);
												}
												TASK::CLOSE_SEQUENCE_TASK(iVar0);
												TASK::TASK_PERFORM_SEQUENCE(*iParam2, iVar0);
												TASK::CLEAR_SEQUENCE_TASK(&iVar0);
												__LIB_1__::func_683(&(iParam2->f_9), 1024);
											}
										}
									}
								}
							}
							break;
						case 3:
							if (iParam2->f_5 == 0)
							{
								func_1390(*iParam2, joaat("WEAPON_THROWN_TOMAHAWK"), joaat("WEAPON_UNARMED"), 1);
								if (!__LIB_11__::func_307(Global_35, Local_1412[9 /*5*/].f_4, 1, 1.5f))
								{
									iParam2->f_8 = 10;
								}
								else if (!__LIB_11__::func_307(Global_35, Local_1412[8 /*5*/].f_4, 1, 1.5f))
								{
									iParam2->f_8 = 10;
								}
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam2, true);
								TASK::CLEAR_SEQUENCE_TASK(&iVar0);
								TASK::OPEN_SEQUENCE_TASK(&iVar0);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_1412[iParam2->f_8 /*5*/], 1.5f, 40000, (0.25f * 4f), 0, 40000f);
								TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, Local_1412[iParam2->f_8 /*5*/], -1, 0, 1f, 0, 0, Local_1412[iParam2->f_8 /*5*/].f_4, 1, 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(iVar0);
								TASK::TASK_PERFORM_SEQUENCE(*iParam2, iVar0);
								TASK::CLEAR_SEQUENCE_TASK(&iVar0);
								__LIB_1__::func_681(&(iParam2->f_9), 1024);
								__LIB_1__::func_681(&(iParam2->f_9), 2048);
								iParam2->f_5 = 1;
							}
							else if (!PED::IS_PED_IN_COVER(*iParam2, false, false) && !PED::IS_PED_GOING_INTO_COVER(*iParam2))
							{
								switch (iParam2->f_8)
								{
									case 9:
										if (__LIB_11__::func_307(Global_35, Local_1412[9 /*5*/].f_4, 1, 1.5f))
										{
											func_320(iParam2, 34, 0, -1);
										}
										break;
									case 8:
										if (__LIB_11__::func_307(Global_35, Local_1412[8 /*5*/].f_4, 1, 1.5f))
										{
											func_320(iParam2, 34, 0, -1);
										}
										break;
								}
							}
							break;
						case 4:
							if (iParam2->f_5 == 0)
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam2, true);
								TASK::CLEAR_PED_TASKS(*iParam2, false, false);
								PED::SET_PED_CONFIG_FLAG(*iParam2, 279, true);
								PED::SET_PED_AS_GROUP_MEMBER(*iParam2, __LIB_0__::func_110());
								iParam2->f_5 = 1;
							}
							break;
					}
					if ((((((((((__LIB_0__::func_27(Local_503[5 /*20*/].f_9, 134217728) || __LIB_0__::func_27(Local_503[1 /*20*/].f_9, 268435456)) || __LIB_0__::func_27(Local_503[2 /*20*/].f_9, 268435456)) || __LIB_0__::func_27(Local_503[3 /*20*/].f_9, 268435456)) || __LIB_0__::func_27(Local_503[4 /*20*/].f_9, 268435456)) || __LIB_0__::func_27(Local_503[5 /*20*/].f_9, 268435456)) || __LIB_0__::func_27(Local_503[1 /*20*/].f_9, 536870912)) || __LIB_0__::func_27(Local_503[2 /*20*/].f_9, 536870912)) || __LIB_0__::func_27(Local_503[3 /*20*/].f_9, 536870912)) || __LIB_0__::func_27(Local_503[4 /*20*/].f_9, 536870912)) || __LIB_0__::func_27(Local_503[5 /*20*/].f_9, 536870912))
					{
						func_320(iParam2, 38, 0, 0);
					}
					break;
				case 38:
					switch (iParam2->f_7)
					{
						case 0:
							if (iParam2->f_5 == 0)
							{
								func_1390(*iParam2, joaat("WEAPON_SHOTGUN_SAWEDOFF_CHARLES"), joaat("WEAPON_UNARMED"), 1);
								PED::_0x57F35552E771BE9D(*iParam2, 3);
								PED::SET_COMBAT_FLOAT(*iParam2, 7, 1f);
								PED::_SET_PED_CROUCH_MOVEMENT(*iParam2, false, 0, false);
								__LIB_1__::func_681(&(iParam2->f_9), 256);
								PED::SET_PED_COMBAT_MOVEMENT(*iParam2, 1);
								PED::_0x1854217C640B39EC(*iParam2, Global_35, 0f, 0f, 0f, 10f, 0, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam2, true);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(*iParam2, 150f, 0, 0);
								iParam2->f_5 = 1;
							}
							else if (__LIB_0__::func_27(iLocal_1674, 32))
							{
								PED::REMOVE_PED_DEFENSIVE_AREA(*iParam2, false);
								func_320(iParam2, 38, 0, 1);
							}
							break;
						case 1:
							if (iParam2->f_5 == 0)
							{
								if (!__LIB_11__::func_307(Global_35, Local_1412[4 /*5*/].f_4, 1, 1.5f))
								{
									iParam2->f_8 = 4;
								}
								else if (!__LIB_11__::func_307(Global_35, Local_1412[3 /*5*/].f_4, 1, 1.5f))
								{
									iParam2->f_8 = 3;
								}
								PED::SET_PED_COMBAT_MOVEMENT(*iParam2, 1);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(*iParam2, Local_1412[iParam2->f_8 /*5*/], 2.5f, 1, 0, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(*iParam2, 0, true);
								PED::SET_PED_COMBAT_ATTRIBUTES(*iParam2, 29, true);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam2, true);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(*iParam2, 150f, 0, 0);
								if (!__LIB_5__::func_463())
								{
									__LIB_12__::func_876(uParam0, "RDCH3_CMOVEUP", 0);
								}
								iParam2->f_5 = 1;
							}
							else
							{
								if (!PED::IS_PED_IN_COVER(*iParam2, false, false) && !PED::IS_PED_GOING_INTO_COVER(*iParam2))
								{
									switch (iParam2->f_8)
									{
										case 4:
											if (__LIB_11__::func_307(Global_35, Local_1412[4 /*5*/].f_4, 1, 1.5f))
											{
												func_320(iParam2, 34, 0, -1);
											}
											break;
										case 3:
											if (__LIB_11__::func_307(Global_35, Local_1412[3 /*5*/].f_4, 1, 1.5f))
											{
												func_320(iParam2, 34, 0, -1);
											}
											break;
									}
								}
								if (((func_1394(&Local_664) > 0 || __LIB_0__::func_27(iLocal_1674, 256)) || (!__LIB_2__::func_1(Local_503[2 /*20*/], 0, 1) && __LIB_0__::func_27(iLocal_1672, 16))) || (__LIB_0__::func_266(Global_35, 2346.375f, 1413.365f, 99.2367f, 15f, 1, 1) && __LIB_0__::func_27(iLocal_1672, 32)))
								{
									__LIB_12__::func_876(uParam0, "RDCH3_CCOMBAT2", 0);
									__LIB_4__::func_719(7, 1, 1, 1, 1, 0);
									func_320(iParam2, 38, 0, 2);
									PED::REMOVE_PED_DEFENSIVE_AREA(*iParam2, false);
								}
							}
							break;
						case 2:
							if (iParam2->f_5 == 0)
							{
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(*iParam2, 150f, 0, 0);
								if (!__LIB_5__::func_463())
								{
									__LIB_12__::func_876(uParam0, "RDCH3_CMOVEUP", 0);
								}
								iParam2->f_5 = 1;
							}
							else if (func_1394(&Local_745) > 1)
							{
								func_320(iParam2, 38, 0, 3);
							}
							break;
						case 3:
							if (iParam2->f_5 == 0)
							{
								if (!__LIB_11__::func_307(Global_35, Local_1412[13 /*5*/].f_4, 1, 1.5f))
								{
									iParam2->f_8 = 13;
								}
								else if (!__LIB_11__::func_307(Global_35, Local_1412[14 /*5*/].f_4, 1, 1.5f))
								{
									iParam2->f_8 = 14;
								}
								PED::SET_PED_COMBAT_MOVEMENT(*iParam2, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(*iParam2, 0, true);
								PED::SET_PED_COMBAT_ATTRIBUTES(*iParam2, 29, true);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam2, true);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(*iParam2, 150f, 0, 0);
								if (!__LIB_5__::func_463())
								{
									__LIB_12__::func_876(uParam0, "RDCH3_CMOVEUP", 0);
								}
								iParam2->f_5 = 1;
							}
							break;
					}
					break;
			}
		}
	}
}

void func_781(var uParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	if (!func_1366(16))
	{
		if (!PED::IS_PED_INJURED(Local_122) && Local_122.f_3 == 9)
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(Local_122, 993674639, true) == 1)
			{
				if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
				{
					if ((MISC::GET_GAME_TIMER() - Local_122.f_12) > 17500)
					{
						if (__LIB_1__::func_205(Global_35, iLocal_1240[0], 1, 0) && __LIB_0__::func_48(Global_35, Local_122, 5f, 1))
						{
							if (__LIB_12__::func_876(uParam0, "RDCH3_CHTALK", 0))
							{
								Local_122.f_12 = MISC::GET_GAME_TIMER();
								iLocal_1686++;
								if (iLocal_1686 == 3)
								{
									func_788(16, 1);
								}
							}
						}
					}
				}
			}
		}
	}
	if (!func_1366(17))
	{
		if (__LIB_0__::func_27(iLocal_1670, 32))
		{
			if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
			{
				if (__LIB_12__::func_876(uParam0, "RDCH3_CHLEAD", 0))
				{
					func_788(17, 1);
				}
			}
		}
	}
	if (!func_1366(18))
	{
		if (!func_1366(25))
		{
			if (!PED::IS_PED_INJURED(Global_35) && !PED::IS_PED_INJURED(Local_142))
			{
				if (__LIB_0__::func_394(Local_142, iLocal_1151, 1))
				{
					if (!PED::IS_PED_ON_MOUNT(Global_35) && !PED::_0x1D46B417F926D34D(Global_35))
					{
						if (MISC::GET_GAME_TIMER() - Local_142.f_12) > (7500 + iLocal_1687 * 2500)
						{
							if (__LIB_12__::func_876(uParam0, "RDCH3_MOUNTUP", 0))
							{
								Local_142.f_12 = MISC::GET_GAME_TIMER();
								iLocal_1687++;
								if (iLocal_1687 == 3)
								{
									func_788(18, 1);
								}
							}
						}
					}
				}
			}
		}
	}
	if (!func_1366(19))
	{
		if (__LIB_0__::func_394(Local_142, iLocal_1151, 1))
		{
			if (__LIB_0__::func_396(Global_35))
			{
				if (__LIB_12__::func_876(uParam0, "RDCH3_PINKREINF", 0))
				{
					func_788(19, 1);
				}
			}
		}
	}
	if (!func_1366(20))
	{
		if ((!PED::IS_PED_INJURED(Local_142) && !PED::IS_PED_INJURED(iLocal_1151)) && !PED::IS_PED_INJURED(Global_35))
		{
			if (__LIB_0__::func_394(Local_142, iLocal_1151, 1) && PED::IS_PED_ON_MOUNT(Global_35))
			{
				if (Local_142.f_3 == 11 && Local_142.f_10 > 15)
				{
					if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_142, 0) && !TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(Local_142))
					{
						if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
						{
							if (__LIB_12__::func_876(uParam0, "RDCH3_ILO_BT_HR", 0))
							{
								func_788(20, 1);
							}
						}
					}
				}
			}
		}
	}
	else if (!__LIB_0__::func_27(iLocal_1672, 1))
	{
		if (!__LIB_8__::func_684("RDCH3_ILO_BT_HR"))
		{
			iLocal_1687 = 0;
			Local_142.f_12 = MISC::GET_GAME_TIMER();
			__LIB_1__::func_681(&(Local_142.f_9), 1048576);
			__LIB_1__::func_683(&iLocal_1672, 1);
		}
	}
	if (__LIB_0__::func_27(iLocal_1672, 1))
	{
		if (!__LIB_0__::func_27(iLocal_1672, 2) && !__LIB_0__::func_27(iLocal_1672, 4))
		{
			if (!func_1366(21))
			{
				if (__LIB_0__::func_27(Local_142.f_9, 1048576))
				{
					if (!PED::IS_PED_INJURED(Global_35) && !PED::IS_PED_INJURED(Local_142))
					{
						if (PED::IS_PED_ON_MOUNT(Local_142))
						{
							if (MISC::GET_GAME_TIMER() - Local_142.f_12) > (6500 + iLocal_1687 * 2500)
							{
								if (__LIB_12__::func_876(uParam0, "RDCH3_BT_OR_HRS", 0))
								{
									Local_142.f_12 = MISC::GET_GAME_TIMER();
									iLocal_1687++;
									if (iLocal_1687 == 3)
									{
										func_788(21, 1);
									}
								}
							}
						}
					}
				}
			}
			if (!func_1366(22))
			{
				if ((!PED::IS_PED_INJURED(Local_142) && !PED::IS_PED_INJURED(iLocal_1151)) && !PED::IS_PED_INJURED(Global_35))
				{
					if (__LIB_0__::func_394(Local_142, iLocal_1151, 1))
					{
						if (Local_142.f_3 == 11 && Local_142.f_10 > 120)
						{
							if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_142, 0) && !TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(Local_142))
							{
								if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
								{
									if (__LIB_12__::func_876(uParam0, "RDCH3_TOOLONG", 0))
									{
										__LIB_13__::func_520(&iLocal_1232);
										__LIB_8__::func_771(Local_142, 1, 1, 1);
										__LIB_1__::func_683(&iLocal_1672, 2);
										func_788(22, 1);
									}
								}
							}
						}
					}
				}
			}
		}
		if (!__LIB_0__::func_27(Local_142.f_9, 1048576))
		{
			__LIB_10__::func_979(Local_142, __LIB_1__::func_464(7, 0), 10f, 0, 0, 4);
			__LIB_1__::func_683(&(Local_142.f_9), 1048576);
		}
		else
		{
			if (!__LIB_0__::func_27(iLocal_1672, 2) && !__LIB_0__::func_27(iLocal_1672, 4))
			{
				CAM::_0x8910C24B7E0046EC();
				if (!__LIB_0__::func_139(iLocal_1232[0]) && !__LIB_0__::func_139(iLocal_1232[1]))
				{
					if (__LIB_10__::func_896(PLAYER::PLAYER_ID(), Local_142) && __LIB_0__::func_48(Global_35, Local_142, 13f, 1))
					{
						iLocal_1232[0] = __LIB_4__::func_450("RDCH31_U_CANOE", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
						iLocal_1232[1] = __LIB_4__::func_450("RDCH31_U_HORSE", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
						if (__LIB_0__::func_139(iLocal_1232[0]) && __LIB_0__::func_139(iLocal_1232[1]))
						{
							__LIB_9__::func_332(&(iLocal_1232[0]), Local_142);
							__LIB_9__::func_332(&(iLocal_1232[1]), Local_142);
						}
					}
				}
				else if ((__LIB_0__::func_139(iLocal_1232[0]) && __LIB_0__::func_572(iLocal_1232[0], 0)) && __LIB_1__::func_732(iLocal_1232[0], 1))
				{
					if (__LIB_12__::func_876(uParam0, "RDCH3_CHSE_BOAT", 0))
					{
						func_788(23, 1);
					}
					__LIB_13__::func_520(&iLocal_1232);
					__LIB_8__::func_771(Local_142, 1, 1, 1);
					iLocal_112 = 0;
					TELEMETRY::_TELEMETRY_MISSION_ILO_OPTION(joaat("INPUT_INTERACT_LOCKON_POS"), "RDCH31_U_CANOE");
					__LIB_1__::func_683(&iLocal_1672, 2);
					func_310(&iLocal_1675, 1);
					func_308(&iLocal_1675, 2);
				}
				else if ((__LIB_0__::func_139(iLocal_1232[1]) && __LIB_0__::func_572(iLocal_1232[1], 0)) && __LIB_1__::func_732(iLocal_1232[1], 1))
				{
					if (__LIB_12__::func_876(uParam0, "RDCH3_CHSE_HRSE", 0))
					{
						func_788(24, 1);
					}
					__LIB_13__::func_520(&iLocal_1232);
					__LIB_8__::func_771(Local_142, 1, 1, 1);
					iLocal_112 = 1;
					TELEMETRY::_TELEMETRY_MISSION_ILO_OPTION(joaat("INPUT_INTERACT_LOCKON_NEG"), "RDCH31_U_HORSE");
					__LIB_1__::func_683(&iLocal_1672, 4);
					func_310(&iLocal_1675, 2);
					func_308(&iLocal_1675, 1);
				}
			}
			if (__LIB_0__::func_139(iLocal_1232[0]) || __LIB_0__::func_139(iLocal_1232[1]))
			{
				if (!__LIB_10__::func_896(PLAYER::PLAYER_ID(), Local_142))
				{
					__LIB_13__::func_520(&iLocal_1232);
					Local_142.f_12 = MISC::GET_GAME_TIMER();
				}
			}
		}
	}
	if (((__LIB_8__::func_684("RDCH3_CHSE_HRSE") || __LIB_8__::func_684("RDCH3_CHSE_BOAT")) || __LIB_10__::func_578("RDCH3_CHSE_HRSE")) || __LIB_10__::func_578("RDCH3_CHSE_BOAT"))
	{
		Local_142.f_12 = MISC::GET_GAME_TIMER();
	}
	if (!func_1366(25))
	{
		if ((func_1366(22) || func_1366(23)) || func_1366(24))
		{
			if ((!PED::IS_PED_INJURED(Local_142) && !PED::IS_PED_INJURED(iLocal_1151)) && !PED::IS_PED_INJURED(Global_35))
			{
				if (__LIB_0__::func_394(Local_142, iLocal_1151, 1) && PED::IS_PED_ON_MOUNT(Global_35))
				{
					if (Local_142.f_3 == 11 && Local_142.f_10 > 20)
					{
						if ((TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_142, 0) && !TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(Local_142)) && (__LIB_0__::func_485() - Local_142.f_12) > 2000)
						{
							if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
							{
								if (__LIB_12__::func_876(uParam0, "RDCH3_RIDEBANT1", 0))
								{
									__LIB_5__::func_511(5);
									func_788(25, 1);
								}
							}
						}
					}
				}
			}
		}
	}
	if (!func_1366(26))
	{
		if (func_1366(25))
		{
			if (__LIB_0__::func_27(Local_142.f_9, 134217728))
			{
				if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
				{
					if (__LIB_12__::func_876(uParam0, "RDCH3_PINK1", 0))
					{
						if (!PED::IS_PED_INJURED(Local_142))
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_1162) && !ENTITY::IS_ENTITY_DEAD(iLocal_1162))
							{
								TASK::TASK_LOOK_AT_ENTITY(Local_142, iLocal_1162, -1, 2048, 51, 0);
							}
						}
						func_788(26, 1);
					}
				}
				else
				{
					__LIB_5__::func_20(0, 0);
				}
			}
		}
	}
	if (!func_1366(27))
	{
		if (func_1366(26))
		{
			if (!__LIB_0__::func_27(Local_142.f_9, 134217728))
			{
				if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
				{
					if (__LIB_12__::func_876(uParam0, "RDCH3_PINK2", 0))
					{
						if (!PED::IS_PED_INJURED(Local_142))
						{
							TASK::TASK_CLEAR_LOOK_AT(Local_142);
						}
						func_788(27, 1);
					}
				}
			}
		}
	}
	if (!func_1366(28))
	{
		if (!PED::IS_PED_INJURED(Local_142) && !PED::IS_PED_INJURED(iLocal_1151))
		{
			if ((__LIB_0__::func_394(Local_142, iLocal_1151, 1) && Local_142.f_3 == 11) && Local_142.f_10 > 570)
			{
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_142, 0) && !TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(Local_142))
				{
					if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
					{
						if (__LIB_12__::func_876(uParam0, "RDCH3_CBRIDGE", 0))
						{
							func_438(&Local_1089, 0, 1);
							__LIB_9__::func_123(&uLocal_1156, 0);
							__LIB_0__::func_490(&Local_1130, 0);
							func_442(&iLocal_1162, 0);
							func_788(28, 1);
						}
					}
					else
					{
						__LIB_5__::func_20(1, 0);
					}
				}
			}
		}
	}
	if (!func_1366(29))
	{
		if (!PED::IS_PED_INJURED(Local_142) && !PED::IS_PED_INJURED(iLocal_1151))
		{
			if ((__LIB_0__::func_394(Local_142, iLocal_1151, 1) && Local_142.f_3 == 11) && Local_142.f_10 > 590)
			{
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_142, 0) && !TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(Local_142))
				{
					if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
					{
						if (__LIB_12__::func_876(uParam0, "RDCH3_CNEAR", 0))
						{
							TASK::TASK_LOOK_AT_ENTITY(Local_142, iLocal_1161, 3000, 2048, 51, 0);
							func_788(29, 1);
						}
					}
				}
			}
		}
	}
	if (__LIB_0__::func_27(Local_142.f_9, 32768))
	{
		if (!PED::IS_PED_INJURED(Local_142))
		{
			if (Local_142.f_3 == 9)
			{
				if (!__LIB_0__::func_27(iLocal_1670, 67108864))
				{
					func_788(1, 0);
					func_788(14, 0);
					func_788(2, 0);
					func_788(0, 0);
					__LIB_1__::func_681(&iLocal_1670, 33554432);
					__LIB_1__::func_683(&iLocal_1670, 67108864);
				}
			}
			if (Local_142.f_3 == 11)
			{
				if (__LIB_0__::func_27(iLocal_1670, 67108864))
				{
					func_788(1, 0);
					func_788(14, 0);
					func_788(2, 0);
					func_788(0, 0);
					__LIB_1__::func_681(&iLocal_1670, 33554432);
					__LIB_1__::func_681(&iLocal_1670, 67108864);
				}
			}
		}
	}
	else if (__LIB_0__::func_27(Local_142.f_9, 65536))
	{
		if (!__LIB_0__::func_27(iLocal_1670, 67108864))
		{
			func_788(1, 0);
			func_788(14, 0);
			func_788(2, 0);
			func_788(0, 0);
			__LIB_1__::func_681(&iLocal_1670, 33554432);
			__LIB_1__::func_683(&iLocal_1670, 67108864);
		}
	}
	else if (__LIB_0__::func_27(iLocal_1670, 67108864))
	{
		func_788(1, 0);
		func_788(14, 0);
		func_788(2, 0);
		func_788(0, 0);
		__LIB_1__::func_681(&iLocal_1670, 33554432);
		__LIB_1__::func_681(&iLocal_1670, 67108864);
	}
	if (!__LIB_0__::func_27(iLocal_1670, 67108864))
	{
		if (!__LIB_0__::func_27(iLocal_1670, 16))
		{
			if (!__LIB_0__::func_27(iLocal_1670, 33554432))
			{
				__LIB_1__::func_561(&uLocal_1173);
				__LIB_1__::func_561(&uLocal_1176);
				UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
				__LIB_1__::func_683(&iLocal_1670, 33554432);
			}
			if (!func_1366(0))
			{
				if (!__LIB_0__::func_899(&uLocal_1173))
				{
					fLocal_1169 = 0f;
					__LIB_13__::func_89(uParam0, "RDCH31_O_SPEAKC", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					__LIB_0__::func_904(7, 1);
					__LIB_0__::func_900(7);
					__LIB_2__::func_259(&uLocal_1173);
					__LIB_2__::func_259(&uLocal_1176);
				}
				else
				{
					if (!func_1366(0))
					{
						if (__LIB_5__::func_352("RDCH31_O_SPEAKC") || __LIB_0__::func_27(iLocal_1670, 8))
						{
							func_788(0, 1);
						}
					}
					if ((!func_1366(0) && !__LIB_5__::func_352("RDCH31_O_SPEAKC")) && !__LIB_0__::func_27(iLocal_1670, 8))
					{
						bVar0 = __LIB_0__::func_27(iLocal_1670, -2147483648);
						bVar2 = __LIB_13__::func_564(&fLocal_1169, MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Global_35, false, false), 2241.06f, -773.23f, 42.69f, true), 0);
						if (bVar0 == 1 || bVar2 == 0)
						{
							if ((bVar0 == 1 || __LIB_1__::func_583(&uLocal_1173) > 12f) || __LIB_1__::func_583(&uLocal_1176) > 7f)
							{
								__LIB_12__::func_883(uParam0, "RDCH31_O_SPEAKC", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
								func_788(0, 1);
							}
						}
						else
						{
							__LIB_2__::func_259(&uLocal_1173);
							__LIB_2__::func_259(&uLocal_1176);
						}
						if (!__LIB_13__::func_517(Global_35, 981668463 /* Float: 0.001f */))
						{
							__LIB_2__::func_259(&uLocal_1176);
						}
					}
				}
			}
		}
		else
		{
			if (!__LIB_0__::func_27(iLocal_1670, 33554432))
			{
				__LIB_1__::func_561(&uLocal_1173);
				__LIB_1__::func_561(&uLocal_1176);
				UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
				__LIB_1__::func_683(&iLocal_1670, 33554432);
			}
			if (__LIB_0__::func_27(Local_142.f_9, 32))
			{
				if (__LIB_0__::func_394(Global_35, iLocal_1150, 0))
				{
					if (!__LIB_0__::func_27(iLocal_1670, 64))
					{
						__LIB_1__::func_683(&iLocal_1670, 64);
					}
					if (__LIB_0__::func_27(iLocal_1670, 536870912))
					{
						__LIB_1__::func_561(&uLocal_1173);
						__LIB_1__::func_561(&uLocal_1176);
						UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
						func_788(1, 0);
						func_788(14, 0);
						func_788(2, 0);
						__LIB_1__::func_681(&iLocal_1670, 536870912);
					}
				}
				else if (!__LIB_0__::func_394(Global_35, iLocal_1150, 0) && !AITRANSPORT::_0x619E63980BFC0096(Global_35, iLocal_1150, 0))
				{
					if (!__LIB_0__::func_27(iLocal_1670, 536870912))
					{
						__LIB_1__::func_561(&uLocal_1173);
						__LIB_1__::func_561(&uLocal_1176);
						UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
						func_788(1, 0);
						func_788(14, 0);
						func_788(2, 0);
						__LIB_1__::func_683(&iLocal_1670, 536870912);
					}
				}
			}
			if (__LIB_0__::func_27(Local_142.f_9, 32) && __LIB_0__::func_27(iLocal_1670, 536870912))
			{
				PLAYER::_0xC71D07C96946E263(PLAYER::PLAYER_ID(), iLocal_1150);
				if (!func_1366(1))
				{
					if (!__LIB_0__::func_899(&uLocal_1173))
					{
						fLocal_1169 = 0f;
						UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
						__LIB_13__::func_89(uParam0, "HORSE_MOUNT", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
						__LIB_1__::func_718(7);
						__LIB_0__::func_745(7);
						if (__LIB_0__::func_27(iLocal_1670, 64))
						{
							__LIB_0__::func_904(7, 0);
						}
						__LIB_2__::func_259(&uLocal_1173);
						__LIB_2__::func_259(&uLocal_1176);
					}
					else
					{
						if (!func_1366(1))
						{
							if (__LIB_5__::func_352("HORSE_MOUNT"))
							{
								func_788(1, 1);
							}
						}
						if (!func_1366(1) && !__LIB_5__::func_352("HORSE_MOUNT"))
						{
							bVar2 = __LIB_13__::func_564(&fLocal_1169, __LIB_0__::func_665(Global_35, iLocal_1150, 1, 1), 0);
							if (bVar2 == 0)
							{
								if (__LIB_1__::func_583(&uLocal_1173) > 12f || __LIB_1__::func_583(&uLocal_1176) > 7f)
								{
									__LIB_12__::func_883(uParam0, "HORSE_MOUNT", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
									func_788(1, 1);
								}
							}
							else
							{
								__LIB_2__::func_259(&uLocal_1173);
								__LIB_2__::func_259(&uLocal_1176);
							}
							if (!__LIB_13__::func_517(Global_35, 981668463 /* Float: 0.001f */))
							{
								__LIB_2__::func_259(&uLocal_1176);
							}
						}
					}
				}
			}
			else if (!func_1366(2))
			{
				if (!__LIB_0__::func_899(&uLocal_1173))
				{
					fLocal_1169 = 0f;
					__LIB_0__::func_904(7, 1);
					__LIB_13__::func_89(uParam0, "CHARLES_FOLLOW", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					__LIB_1__::func_721(7);
					__LIB_0__::func_900(7);
					__LIB_2__::func_259(&uLocal_1173);
					__LIB_2__::func_259(&uLocal_1176);
				}
				else
				{
					if (!func_1366(2))
					{
						if (__LIB_5__::func_352("CHARLES_FOLLOW"))
						{
							func_788(2, 1);
						}
					}
					if (!func_1366(2) && !__LIB_5__::func_352("CHARLES_FOLLOW"))
					{
						switch (Local_142.f_3)
						{
							case 1:
							case 2:
								bVar1 = __LIB_13__::func_562(Global_35, Local_142, "rdtc3_charles_lakay_to_horse");
								break;
							default:
								bVar1 = __LIB_13__::func_562(Global_35, Local_142, "rdtc3_charles_lakay_to_boat");
								break;
						}
						bVar2 = __LIB_13__::func_564(&fLocal_1169, Local_142.f_18, 0);
						if (bVar1 == 1 && bVar2 == 0)
						{
							if (__LIB_1__::func_583(&uLocal_1173) > 12f || __LIB_1__::func_583(&uLocal_1176) > 7f)
							{
								__LIB_12__::func_883(uParam0, "CHARLES_FOLLOW", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
								func_788(2, 1);
							}
						}
						else
						{
							__LIB_2__::func_259(&uLocal_1173);
							__LIB_2__::func_259(&uLocal_1176);
						}
						if (!__LIB_13__::func_517(Global_35, 981668463 /* Float: 0.001f */))
						{
							__LIB_2__::func_259(&uLocal_1176);
						}
					}
				}
			}
		}
	}
	else
	{
		if (!__LIB_0__::func_27(iLocal_1670, 33554432))
		{
			__LIB_1__::func_561(&uLocal_1173);
			__LIB_1__::func_561(&uLocal_1176);
			UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
			__LIB_1__::func_683(&iLocal_1670, 33554432);
		}
		if (!func_1366(14))
		{
			if (!__LIB_0__::func_899(&uLocal_1173))
			{
				fLocal_1169 = 0f;
				__LIB_0__::func_325(&iLocal_1231);
				__LIB_13__::func_89(uParam0, "CHARLES_RETURN", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_0__::func_904(7, 1);
				__LIB_0__::func_900(7);
				__LIB_2__::func_259(&uLocal_1173);
				__LIB_2__::func_259(&uLocal_1176);
			}
			else
			{
				if (!func_1366(14))
				{
					if (__LIB_5__::func_352("CHARLES_RETURN"))
					{
						func_788(14, 1);
					}
				}
				if (!func_1366(14) && !__LIB_5__::func_352("CHARLES_RETURN"))
				{
					bVar0 = true;
					bVar2 = __LIB_13__::func_564(&fLocal_1169, Local_142.f_18, 0);
					if (bVar0 == 1 || bVar2 == 0)
					{
						if ((__LIB_1__::func_583(&uLocal_1173) > 12f || __LIB_1__::func_583(&uLocal_1176) > 7f) || bVar0 == 1)
						{
							__LIB_12__::func_883(uParam0, "CHARLES_RETURN", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
							func_788(14, 1);
						}
					}
					else
					{
						__LIB_2__::func_259(&uLocal_1173);
						__LIB_2__::func_259(&uLocal_1176);
					}
					if (!__LIB_13__::func_517(Global_35, 981668463 /* Float: 0.001f */))
					{
						__LIB_2__::func_259(&uLocal_1176);
					}
				}
			}
		}
	}
}

void func_783(var uParam0)
{
	int iVar0;
	bool bVar1;
	if (__LIB_0__::func_27(iLocal_1670, 2048))
	{
		return;
	}
	if (!func_1366(104))
	{
		if (iLocal_116 == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_1161))
			{
				if (PED::IS_PED_IN_VEHICLE(Global_35, iLocal_1161, false))
				{
					__LIB_0__::func_45("RDCH31_H_CANOE", 10000, 0, 0, 0, 1);
					func_788(104, 1);
				}
			}
		}
	}
	if (!__LIB_0__::func_27(iLocal_1670, 4096))
	{
		if (((!PED::IS_PED_INJURED(Global_35) && !PED::IS_PED_INJURED(Local_142)) && ENTITY::DOES_ENTITY_EXIST(iLocal_1161)) && !ENTITY::IS_ENTITY_DEAD(iLocal_1161))
		{
			if (!func_1366(30))
			{
				if (!PED::IS_PED_INJURED(Local_142) && Local_142.f_3 == 6)
				{
					if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
					{
						if (__LIB_12__::func_876(uParam0, "RDCH3_CARRIVE", 0))
						{
							TASK::TASK_LOOK_AT_ENTITY(Local_142, iLocal_1161, 3000, 2048, 51, 0);
							func_788(30, 1);
						}
					}
				}
			}
			if (!func_1366(31))
			{
				if (__LIB_14__::func_11(Local_142, iLocal_1161))
				{
					if (!__LIB_14__::func_11(Global_35, iLocal_1161) && !AITRANSPORT::_0x619E63980BFC0096(Global_35, iLocal_1161, 0))
					{
						if (MISC::GET_GAME_TIMER() - Local_142.f_12) > (7500 + iLocal_1687 * 2500)
						{
							if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
							{
								if (__LIB_12__::func_876(uParam0, "RDCH3_CANOE_DWD", 0))
								{
									Local_142.f_12 = MISC::GET_GAME_TIMER();
									iLocal_1687++;
									if (iLocal_1687 == 3)
									{
										func_788(31, 1);
									}
								}
							}
						}
					}
				}
			}
			if (!func_1366(32))
			{
				if (__LIB_14__::func_11(Global_35, iLocal_1161) && __LIB_14__::func_11(Local_142, iLocal_1161))
				{
					if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
					{
						if (__LIB_12__::func_876(uParam0, "RDCH3_CAN_BANT1", 0))
						{
							func_788(32, 1);
						}
					}
				}
			}
		}
	}
	else if (!__LIB_0__::func_27(iLocal_1670, 8192))
	{
		if (!func_1366(33))
		{
			if (__LIB_14__::func_11(Global_35, iLocal_1161) && __LIB_14__::func_11(Local_142, iLocal_1161))
			{
				if (__LIB_1__::func_205(Global_35, iLocal_1240[5], 1, 0))
				{
					if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
					{
						if (__LIB_12__::func_876(uParam0, "RDCH3_CAN_BANT2", 0))
						{
							func_788(33, 1);
						}
					}
				}
			}
		}
	}
	else
	{
		switch (iLocal_116)
		{
			case 2:
				switch (iLocal_112)
				{
					case 0:
						if (!func_1366(35))
						{
							if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
							{
								if (__LIB_12__::func_876(uParam0, "RDCH3_WALKIT", 0))
								{
									AUDIO::_0x660A8F876DF1D4F8(6);
									func_788(35, 1);
								}
							}
						}
						if (!func_1366(36))
						{
							if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
							{
								if (((((__LIB_0__::func_48(Local_142, Local_968[0 /*20*/], 5f, 1) || __LIB_0__::func_48(Local_142, Local_968[1 /*20*/], 5f, 1)) || __LIB_0__::func_48(Local_142, Local_968[2 /*20*/], 5f, 1)) || __LIB_0__::func_48(Local_142, Local_968[3 /*20*/], 5f, 1)) || __LIB_0__::func_48(Local_142, Local_968[4 /*20*/], 5f, 1)) || __LIB_0__::func_48(Local_142, Local_968[5 /*20*/], 5f, 1))
								{
									if (__LIB_12__::func_876(uParam0, "RDCH3_CHRLS_GRT", 0))
									{
										func_788(36, 1);
									}
								}
							}
						}
						if (!func_1366(37) && (((func_1366(53) || func_1366(54)) || func_1366(55)) || func_1366(56)))
						{
							if (!PED::IS_PED_INJURED(Local_142))
							{
								if (Local_142.f_3 == 12 && Local_142.f_10 > 3)
								{
									if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_142, "rdtc3_charles_butcher_creek_to_beaver_hollow"))
									{
										if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
										{
											if (__LIB_12__::func_876(uParam0, "RDCH3_CHREVEAL", 0))
											{
												func_788(37, 1);
											}
										}
									}
								}
							}
						}
						if (!func_1366(38))
						{
							if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
							{
								if (__LIB_0__::func_48(Local_142, uLocal_1152[0], 15f, 1) || __LIB_0__::func_48(Local_142, uLocal_1152[1], 15f, 1))
								{
									if (((((!__LIB_0__::func_394(Global_35, uLocal_1152[0], 0) && !__LIB_0__::func_394(Global_35, uLocal_1152[1], 0)) && ENTITY::DOES_ENTITY_EXIST(uLocal_1152[0])) && !ENTITY::IS_ENTITY_DEAD(uLocal_1152[0])) && ENTITY::DOES_ENTITY_EXIST(uLocal_1152[1])) && !ENTITY::IS_ENTITY_DEAD(uLocal_1152[1]))
									{
										if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_142, "rdtc3_charles_butcher_creek_to_beaver_hollow"))
										{
											if (Local_142.f_10 >= 46)
											{
												if (__LIB_12__::func_876(uParam0, "RDCH3_BCHORSES", 0))
												{
													func_788(38, 1);
												}
											}
										}
									}
									else
									{
										func_788(38, 1);
									}
								}
							}
						}
						else if ((ENTITY::DOES_ENTITY_EXIST(uLocal_1152[0]) && ENTITY::IS_ENTITY_DEAD(uLocal_1152[0])) || (ENTITY::DOES_ENTITY_EXIST(uLocal_1152[1]) && ENTITY::IS_ENTITY_DEAD(uLocal_1152[1])))
						{
							if (__LIB_8__::func_684("RDCH3_BCHORSES") || __LIB_10__::func_578("RDCH3_BCHORSES"))
							{
								__LIB_6__::func_900("RDCH3_BCHORSES", 0, 0);
							}
						}
						if (!func_1366(39))
						{
							if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
							{
								if (!PED::IS_PED_INJURED(Local_142))
								{
									if (Local_142.f_3 == 12 && Local_142.f_10 > 75)
									{
										if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_142, "rdtc3_charles_butcher_creek_to_beaver_hollow") && !TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(Local_142))
										{
											if (__LIB_12__::func_876(uParam0, "RDCH3_BHBANT", 0))
											{
												func_788(39, 1);
											}
										}
									}
								}
							}
						}
						break;
					case 1:
						if (!func_1366(34))
						{
							if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
							{
								if (!PED::IS_PED_INJURED(Local_142))
								{
									if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_142, "rdtc3_charles_butcher_creek_to_beaver_hollow") && !TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(Local_142))
									{
										if (Local_142.f_3 == 12 && Local_142.f_10 > 45)
										{
											if (__LIB_12__::func_876(uParam0, "RDCH3_RBANT2_HO", 0))
											{
												func_788(34, 1);
											}
										}
									}
								}
							}
						}
						break;
				}
				break;
		}
		if (__LIB_0__::func_27(iLocal_1674, 536870912))
		{
			if (!__LIB_0__::func_27(iLocal_1674, 1073741824 /* Float: 2f */))
			{
				if (!func_1366(42))
				{
					if (Local_142.f_3 == 12)
					{
						if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_142, 0))
						{
							if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
							{
								if (__LIB_12__::func_876(uParam0, "RDCH3_SEEPATC", 0))
								{
									func_788(42, 1);
								}
							}
							else
							{
								__LIB_5__::func_20(1, 0);
							}
						}
					}
				}
				if (!func_1366(43))
				{
					if (Local_142.f_3 == 4)
					{
						if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
						{
							if (__LIB_12__::func_876(uParam0, "RDCH3_STOPPAT", 0))
							{
								func_788(43, 1);
							}
						}
					}
				}
				if (!func_1366(44))
				{
					if (Local_142.f_3 == 30 && Local_142.f_7 == 0)
					{
						if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
						{
							if (__LIB_12__::func_876(uParam0, "RDCH3_FOLLPAT1", 0))
							{
								func_788(44, 1);
							}
						}
					}
				}
				if (!func_1366(45))
				{
					if (Local_142.f_3 == 30 && Local_142.f_7 == 2)
					{
						if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
						{
							if (__LIB_12__::func_876(uParam0, "RDCH3_FOLLPAT2", 0))
							{
								func_788(45, 1);
							}
						}
					}
				}
				if (!func_1366(46))
				{
					if (Local_142.f_3 == 30 && Local_142.f_10 > 72)
					{
						if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
						{
							if (__LIB_12__::func_876(uParam0, "RDCH3_FOLLPAT3", 0))
							{
								func_788(46, 1);
							}
						}
					}
				}
				if (!func_1366(52))
				{
					if (((!PED::IS_PED_INJURED(Local_442[0 /*20*/]) && !__LIB_0__::func_27(Local_442[0 /*20*/].f_9, 134217728)) && !PED::IS_PED_INJURED(Local_442[1 /*20*/])) && !__LIB_0__::func_27(Local_442[1 /*20*/].f_9, 134217728))
					{
						if (__LIB_0__::func_27(Local_442[1 /*20*/].f_9, 524288))
						{
							if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
							{
								__LIB_12__::func_875(uParam0, Local_442[0 /*20*/], "INB_PED1", 0);
								__LIB_12__::func_875(uParam0, Local_442[1 /*20*/], "INB_PED2", 0);
								if (__LIB_12__::func_876(uParam0, "RDCH3_PATARGUE", 0))
								{
									func_788(52, 1);
								}
							}
						}
					}
				}
				if (!func_1366(47))
				{
					if (Local_142.f_3 == 31)
					{
						if (!AUDIO::IS_ANY_SPEECH_PLAYING(Global_35) && !AUDIO::IS_ANY_SPEECH_PLAYING(Local_142))
						{
							if (__LIB_12__::func_876(uParam0, "RDCH3_KILLPATD", 0))
							{
								__LIB_1__::func_681(&iLocal_1670, 33554432);
								__LIB_1__::func_683(&iLocal_1674, 268435456);
								Local_142.f_11 = 0;
								Local_142.f_12 = (MISC::GET_GAME_TIMER() + 10000 + Local_142.f_11 * 2500);
								func_788(47, 1);
							}
						}
					}
				}
				if (!func_1366(48))
				{
					if (func_1366(47))
					{
						if (Local_142.f_3 == 31)
						{
							if ((MISC::GET_GAME_TIMER() - Local_142.f_12) > 0)
							{
								if (!AUDIO::IS_ANY_SPEECH_PLAYING(Global_35) && !AUDIO::IS_ANY_SPEECH_PLAYING(Local_142))
								{
									if (__LIB_12__::func_876(uParam0, "RDCH3_KILLPATDR", 0))
									{
										Local_142.f_11++;
										Local_142.f_12 = (MISC::GET_GAME_TIMER() + 10000 + Local_142.f_11 * 2500);
										if (Local_142.f_11 == 2)
										{
											func_788(48, 1);
										}
									}
								}
							}
						}
					}
				}
			}
			else if (!func_1366(49))
			{
				if (__LIB_0__::func_27(iLocal_1674, 1073741824 /* Float: 2f */))
				{
					if (__LIB_8__::func_684("RDCH3_PATARGUE"))
					{
						__LIB_5__::func_20(0, 0);
					}
					if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
					{
						if (__LIB_12__::func_876(uParam0, "RDCH3_PATALERT", 0))
						{
							__LIB_1__::func_681(&iLocal_1670, 33554432);
							__LIB_1__::func_683(&iLocal_1674, 268435456);
							func_788(49, 1);
						}
					}
				}
			}
			if (!func_1366(50) && !func_1366(51))
			{
				if (__LIB_0__::func_27(iLocal_1674, 4))
				{
					if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
					{
						if (__LIB_0__::func_27(iLocal_1674, 1073741824 /* Float: 2f */))
						{
							if (__LIB_12__::func_876(uParam0, "RDCH3_PATDEADA", 0))
							{
								__LIB_1__::func_681(&iLocal_1670, 33554432);
								__LIB_1__::func_681(&iLocal_1674, 268435456);
								func_788(51, 1);
							}
						}
						else if (__LIB_12__::func_876(uParam0, "RDCH3_PATDEADQ", 0))
						{
							__LIB_1__::func_681(&iLocal_1670, 33554432);
							__LIB_1__::func_681(&iLocal_1674, 268435456);
							func_788(50, 1);
						}
					}
				}
			}
			if (!func_1366(40))
			{
				if (__LIB_0__::func_27(iLocal_1674, 4))
				{
					if (__LIB_0__::func_27(iLocal_1674, 1073741824 /* Float: 2f */))
					{
						if (Local_142.f_3 == 30)
						{
							if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_142, "rdtc3_charles_patrol_sneak") || TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_142, "rdtc3_charles_butcher_creek_to_beaver_hollow"))
							{
								if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
								{
									if (__LIB_12__::func_876(uParam0, "RDCH3_FOLLDWD", 0))
									{
										Local_142.f_12 = MISC::GET_GAME_TIMER();
										func_788(40, 1);
									}
								}
							}
						}
					}
				}
			}
			if (__LIB_10__::func_578("RDCH3_BHRIDE1") || __LIB_10__::func_578("RDCH3_BHRIDE1"))
			{
				Local_142.f_12 = MISC::GET_GAME_TIMER();
			}
			if (!func_1366(41))
			{
				if (__LIB_0__::func_27(iLocal_1674, 4))
				{
					if (Local_142.f_3 == 30)
					{
						if ((TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_142, "rdtc3_charles_patrol_sneak") && Local_142.f_10 > 140) || (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_142, "rdtc3_charles_butcher_creek_to_beaver_hollow") && Local_142.f_10 > 355))
						{
							if ((!__LIB_6__::func_904() && !__LIB_5__::func_463()) && (__LIB_0__::func_485() - Local_142.f_12) > 2000)
							{
								if (__LIB_12__::func_876(uParam0, "RDCH3_BHRIDE2", 0))
								{
									func_788(41, 1);
								}
							}
						}
					}
				}
			}
		}
	}
	if (__LIB_0__::func_27(Local_142.f_9, 32768) || __LIB_0__::func_27(Local_142.f_9, 64))
	{
		if (!PED::IS_PED_INJURED(Local_142))
		{
			if (Local_142.f_3 == 9)
			{
				if (!__LIB_0__::func_27(iLocal_1670, 67108864))
				{
					func_788(5, 0);
					func_788(3, 0);
					func_788(4, 0);
					func_788(2, 0);
					func_788(13, 0);
					func_788(14, 0);
					__LIB_1__::func_681(&iLocal_1670, 33554432);
					__LIB_1__::func_681(&iLocal_1670, 512);
					__LIB_1__::func_683(&iLocal_1670, 67108864);
				}
			}
			if (Local_142.f_3 == 6 || Local_142.f_3 == 12)
			{
				if (__LIB_0__::func_27(iLocal_1670, 67108864))
				{
					func_788(5, 0);
					func_788(3, 0);
					func_788(4, 0);
					func_788(2, 0);
					func_788(13, 0);
					func_788(14, 0);
					__LIB_1__::func_681(&iLocal_1670, 33554432);
					__LIB_1__::func_681(&iLocal_1670, 67108864);
				}
			}
		}
	}
	if (!__LIB_0__::func_27(iLocal_1670, 67108864))
	{
		if (!__LIB_0__::func_27(iLocal_1670, 8192))
		{
			if (((!PED::IS_PED_INJURED(Global_35) && !PED::IS_PED_INJURED(Local_142)) && ENTITY::DOES_ENTITY_EXIST(iLocal_1161)) && !ENTITY::IS_ENTITY_DEAD(iLocal_1161))
			{
				if (__LIB_14__::func_11(Global_35, iLocal_1161))
				{
					if (!__LIB_0__::func_27(iLocal_1670, 128))
					{
						AUDIO::_0x0D7FD6A55FD63AEF(6, 3, 1);
						__LIB_1__::func_683(&iLocal_1670, 128);
					}
					if (__LIB_0__::func_27(iLocal_1670, 536870912))
					{
						__LIB_1__::func_561(&uLocal_1173);
						__LIB_1__::func_561(&uLocal_1176);
						func_788(5, 0);
						func_788(3, 0);
						func_788(12, 0);
						func_788(4, 0);
						func_788(13, 0);
						__LIB_1__::func_681(&iLocal_1670, 536870912);
					}
					if (__LIB_14__::func_11(Local_142, iLocal_1161))
					{
						if (!__LIB_0__::func_27(iLocal_1670, 512))
						{
							__LIB_1__::func_561(&uLocal_1173);
							__LIB_1__::func_561(&uLocal_1176);
							func_788(5, 0);
							func_788(3, 0);
							func_788(12, 0);
							func_788(4, 0);
							func_788(13, 0);
							__LIB_1__::func_683(&iLocal_1670, 512);
						}
						if (!func_1366(5))
						{
							if (!__LIB_0__::func_899(&uLocal_1173))
							{
								fLocal_1169 = 0f;
								__LIB_0__::func_325(&iLocal_1231);
								if (!MAP::DOES_BLIP_EXIST(iLocal_1231))
								{
									iLocal_1231 = __LIB_5__::func_554(408396114, iLocal_1240[6], 1);
								}
								UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
								__LIB_13__::func_89(uParam0, "RDCH31_O_GTBC", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
								__LIB_0__::func_745(7);
								__LIB_2__::func_259(&uLocal_1173);
								__LIB_2__::func_259(&uLocal_1176);
							}
							else
							{
								if (!func_1366(5))
								{
									if (__LIB_5__::func_352("RDCH31_O_GTBC"))
									{
										func_788(5, 1);
									}
								}
								if (func_1366(32) && !func_1366(6))
								{
									if (__LIB_1__::func_583(&uLocal_1173) > 4f)
									{
										__LIB_12__::func_883(uParam0, "RDCH31_O_GTBC", 1, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
										func_788(6, 1);
									}
								}
								if (!func_1366(5) && !__LIB_5__::func_352("RDCH31_O_GTBC"))
								{
									bVar1 = __LIB_13__::func_564(&fLocal_1169, MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), vLocal_17, true), 0);
									if (bVar1 == 0)
									{
										if (__LIB_1__::func_583(&uLocal_1173) > 12f || __LIB_1__::func_583(&uLocal_1176) > 7f)
										{
											__LIB_12__::func_883(uParam0, "RDCH31_O_GTBC", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
											func_788(5, 1);
										}
									}
									else if (func_1366(6))
									{
										__LIB_2__::func_259(&uLocal_1173);
										__LIB_2__::func_259(&uLocal_1176);
									}
									if (!__LIB_13__::func_517(Global_35, 981668463 /* Float: 0.001f */))
									{
										__LIB_2__::func_259(&uLocal_1176);
									}
								}
							}
						}
					}
					else
					{
						if (__LIB_0__::func_27(iLocal_1670, 512))
						{
							__LIB_1__::func_681(&iLocal_1670, 512);
						}
						if (!func_1366(13))
						{
							if (!__LIB_0__::func_899(&uLocal_1173))
							{
								fLocal_1169 = 0f;
								__LIB_0__::func_325(&iLocal_1231);
								UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
								__LIB_13__::func_89(uParam0, "CHARLES_WAIT", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
								__LIB_0__::func_904(7, 1);
								__LIB_0__::func_900(7);
								__LIB_2__::func_259(&uLocal_1173);
								__LIB_2__::func_259(&uLocal_1176);
							}
							else
							{
								if (!func_1366(13))
								{
									if (__LIB_5__::func_352("CHARLES_WAIT"))
									{
										func_788(13, 1);
									}
								}
								if (!func_1366(13) && !__LIB_5__::func_352("CHARLES_WAIT"))
								{
									bVar1 = __LIB_13__::func_564(&fLocal_1169, Local_142.f_18, 0);
									if (bVar1 == 0)
									{
										if (__LIB_1__::func_583(&uLocal_1173) > 12f || __LIB_1__::func_583(&uLocal_1176) > 7f)
										{
											__LIB_12__::func_883(uParam0, "CHARLES_WAIT", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
											func_788(13, 1);
										}
									}
									else
									{
										__LIB_2__::func_259(&uLocal_1173);
										__LIB_2__::func_259(&uLocal_1176);
									}
									if (!__LIB_13__::func_517(Global_35, 981668463 /* Float: 0.001f */))
									{
										__LIB_2__::func_259(&uLocal_1176);
									}
								}
							}
						}
					}
				}
				else if (!__LIB_1__::func_205(Global_35, iLocal_1240[6], 1, 0))
				{
					if (!__LIB_0__::func_27(iLocal_1670, 536870912))
					{
						__LIB_1__::func_561(&uLocal_1173);
						__LIB_1__::func_561(&uLocal_1176);
						func_788(5, 0);
						func_788(3, 0);
						func_788(12, 0);
						func_788(4, 0);
						__LIB_1__::func_683(&iLocal_1670, 536870912);
					}
					if (__LIB_0__::func_27(iLocal_1670, 512))
					{
						__LIB_1__::func_681(&iLocal_1670, 512);
					}
					if (!func_1366(3) && !func_1366(4))
					{
						if (!__LIB_0__::func_899(&uLocal_1173))
						{
							fLocal_1169 = 0f;
							__LIB_0__::func_325(&iLocal_1231);
							if (!MAP::DOES_BLIP_EXIST(iLocal_1231))
							{
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_1161) && !ENTITY::IS_ENTITY_DEAD(iLocal_1161))
								{
									iLocal_1231 = __LIB_8__::func_778(408396114, iLocal_1161, 1);
								}
							}
							UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
							if (!__LIB_0__::func_27(iLocal_1670, 128))
							{
								__LIB_13__::func_89(uParam0, "RDCH31_O_GETC", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
							}
							else
							{
								__LIB_13__::func_89(uParam0, "RDCH31_O_GETBC", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
								__LIB_12__::func_883(uParam0, "RDCH31_O_GETBC", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
							}
							__LIB_0__::func_745(7);
							if (__LIB_0__::func_27(iLocal_1670, 128))
							{
								__LIB_0__::func_904(7, 0);
							}
							__LIB_1__::func_683(&iLocal_1670, 536870912);
							__LIB_2__::func_259(&uLocal_1173);
							__LIB_2__::func_259(&uLocal_1176);
						}
						else
						{
							if (!func_1366(3))
							{
								if (__LIB_5__::func_352("RDCH31_O_GETC"))
								{
									func_788(3, 1);
								}
							}
							if (!func_1366(4))
							{
								if (__LIB_5__::func_352("RDCH31_O_GETBC"))
								{
									func_788(4, 1);
									__LIB_12__::func_883(uParam0, "RDCH31_O_GETBC", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
								}
							}
							if (((((!func_1366(3) && !func_1366(4)) && !__LIB_5__::func_352("RDCH31_O_GETC")) && !__LIB_5__::func_352("RDCH31_O_GETBC")) && !PED::IS_PED_IN_VEHICLE(Global_35, iLocal_1161, false)) && !AITRANSPORT::_0x619E63980BFC0096(Global_35, iLocal_1161, 0))
							{
								bVar1 = __LIB_13__::func_564(&fLocal_1169, __LIB_0__::func_665(Global_35, iLocal_1161, 1, 1), 0);
								if (bVar1 == 0)
								{
									if (__LIB_1__::func_583(&uLocal_1173) > 12f || __LIB_1__::func_583(&uLocal_1176) > 7f)
									{
										if (!__LIB_0__::func_27(iLocal_1670, 128))
										{
											__LIB_12__::func_883(uParam0, "RDCH31_O_GETC", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
											func_788(3, 1);
										}
										else
										{
											__LIB_12__::func_883(uParam0, "RDCH31_O_GETBC", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
											func_788(4, 1);
										}
									}
								}
								else
								{
									__LIB_2__::func_259(&uLocal_1173);
									__LIB_2__::func_259(&uLocal_1176);
								}
								if (!__LIB_13__::func_517(Global_35, 981668463 /* Float: 0.001f */))
								{
									__LIB_2__::func_259(&uLocal_1176);
								}
							}
						}
					}
				}
			}
		}
		else if (__LIB_0__::func_27(iLocal_1674, 268435456))
		{
			if (!__LIB_0__::func_27(iLocal_1670, 33554432))
			{
				__LIB_1__::func_561(&uLocal_1173);
				__LIB_1__::func_561(&uLocal_1176);
				func_788(7, 0);
				func_788(2, 0);
				UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
				__LIB_1__::func_683(&iLocal_1670, 33554432);
			}
			if (!func_1366(7))
			{
				if (!__LIB_0__::func_899(&uLocal_1173))
				{
					if ((func_1366(47) && !__LIB_8__::func_684("RDCH3_KILLPATD")) || (func_1366(49) && !__LIB_8__::func_684("RDCH3_PATALERT")))
					{
						fLocal_1169 = 0f;
						__LIB_13__::func_89(uParam0, "RDCH31_O_KILL", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
						__LIB_0__::func_745(7);
						__LIB_2__::func_259(&uLocal_1173);
						__LIB_2__::func_259(&uLocal_1176);
					}
				}
				else
				{
					if (!func_1366(7))
					{
						if (__LIB_5__::func_352("RDCH31_O_KILL"))
						{
							func_788(7, 1);
						}
					}
					if (!func_1366(7) && !__LIB_5__::func_352("RDCH31_O_KILL"))
					{
						iVar0 = 1;
						if (iVar0 == 1)
						{
							if (iVar0 == 1)
							{
								__LIB_12__::func_883(uParam0, "RDCH31_O_KILL", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
								func_788(7, 1);
							}
						}
						else
						{
							__LIB_2__::func_259(&uLocal_1173);
							__LIB_2__::func_259(&uLocal_1176);
						}
						if (!__LIB_13__::func_517(Global_35, 981668463 /* Float: 0.001f */))
						{
							__LIB_2__::func_259(&uLocal_1176);
						}
					}
				}
			}
		}
		else
		{
			if (!__LIB_0__::func_27(iLocal_1670, 33554432))
			{
				__LIB_1__::func_561(&uLocal_1173);
				__LIB_1__::func_561(&uLocal_1176);
				func_788(2, 0);
				UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
				__LIB_1__::func_683(&iLocal_1670, 33554432);
			}
			if (!func_1366(2))
			{
				if (!__LIB_0__::func_899(&uLocal_1173))
				{
					fLocal_1169 = 0f;
					__LIB_13__::func_89(uParam0, "CHARLES_FOLLOW", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					__LIB_0__::func_904(7, 1);
					__LIB_0__::func_900(7);
					__LIB_2__::func_259(&uLocal_1173);
					__LIB_2__::func_259(&uLocal_1176);
				}
				else
				{
					if (!func_1366(2))
					{
						if (__LIB_5__::func_352("CHARLES_FOLLOW"))
						{
							func_788(2, 1);
						}
					}
					if (!func_1366(2) && !__LIB_5__::func_352("CHARLES_FOLLOW"))
					{
						if (iLocal_116 == 3)
						{
							if (func_1366(44) && !__LIB_8__::func_684("RDCH3_FOLLPAT1"))
							{
								iVar0 = 1;
							}
						}
						else
						{
							iVar0 = 0;
						}
						bVar1 = __LIB_13__::func_564(&fLocal_1169, Local_142.f_18, 0);
						if (iVar0 == 1 || bVar1 == 0)
						{
							if ((__LIB_1__::func_583(&uLocal_1173) > 12f || __LIB_1__::func_583(&uLocal_1176) > 7f) || iVar0 == 1)
							{
								__LIB_12__::func_883(uParam0, "CHARLES_FOLLOW", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
								func_788(2, 1);
							}
						}
						else
						{
							__LIB_2__::func_259(&uLocal_1173);
							__LIB_2__::func_259(&uLocal_1176);
						}
						if (!__LIB_13__::func_517(Global_35, 981668463 /* Float: 0.001f */))
						{
							__LIB_2__::func_259(&uLocal_1176);
						}
					}
				}
			}
		}
	}
	else
	{
		if (!__LIB_0__::func_27(iLocal_1670, 33554432))
		{
			__LIB_1__::func_561(&uLocal_1173);
			__LIB_1__::func_561(&uLocal_1176);
			UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
			__LIB_1__::func_683(&iLocal_1670, 33554432);
		}
		if (!func_1366(14))
		{
			if (!__LIB_0__::func_899(&uLocal_1173))
			{
				fLocal_1169 = 0f;
				__LIB_0__::func_325(&iLocal_1231);
				__LIB_13__::func_89(uParam0, "CHARLES_RETURN", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_0__::func_904(7, 1);
				__LIB_0__::func_900(7);
				__LIB_2__::func_259(&uLocal_1173);
				__LIB_2__::func_259(&uLocal_1176);
			}
			else
			{
				if (!func_1366(14))
				{
					if (__LIB_5__::func_352("CHARLES_RETURN"))
					{
						func_788(14, 1);
					}
				}
				if (!func_1366(14) && !__LIB_5__::func_352("CHARLES_RETURN"))
				{
					iVar0 = 1;
					bVar1 = __LIB_13__::func_564(&fLocal_1169, Local_142.f_18, 0);
					if (iVar0 == 1 || bVar1 == 0)
					{
						if ((__LIB_1__::func_583(&uLocal_1173) > 12f || __LIB_1__::func_583(&uLocal_1176) > 7f) || iVar0 == 1)
						{
							__LIB_12__::func_883(uParam0, "CHARLES_RETURN", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
							func_788(14, 1);
						}
					}
					else
					{
						__LIB_2__::func_259(&uLocal_1173);
						__LIB_2__::func_259(&uLocal_1176);
					}
					if (!__LIB_13__::func_517(Global_35, 981668463 /* Float: 0.001f */))
					{
						__LIB_2__::func_259(&uLocal_1176);
					}
				}
			}
		}
	}
}

void func_786(var uParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*iParam1))
		{
			iParam1->f_18 = __LIB_0__::func_665(*iParam1, Global_35, 1, 1);
			if (ENTITY::DOES_ENTITY_EXIST(Local_142))
			{
				iParam1->f_19 = __LIB_0__::func_665(*iParam1, Local_142, 1, 1);
			}
			switch (iParam1->f_3)
			{
				case 5:
				case 8:
					if (__LIB_13__::func_561(Global_35, *iParam1) || func_1407(Global_35, *iParam1))
					{
						__LIB_0__::func_325(&(iParam1->f_2));
					}
					else if (!MAP::DOES_BLIP_EXIST(iParam1->f_2))
					{
						iParam1->f_2 = MAP::_BLIP_ADD_FOR_ENTITY(-89429847, *iParam1);
						MAP::_BLIP_SET_MODIFIER(iParam1->f_2, 1679075994);
						if (!__LIB_0__::func_27(iLocal_1675, 2048))
						{
							MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iParam1->f_2, "STRANGER_FEMALE");
						}
						else
						{
							MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iParam1->f_2, "DISCOVERABLE_NAME_MEREDITH");
						}
					}
					break;
			}
			switch (iParam1->f_3)
			{
				case 13:
					switch (iParam1->f_7)
					{
						case 0:
							if (iParam1->f_5 == 0)
							{
								if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*iParam2))
								{
									*iParam2 = ANIMSCENE::_CREATE_ANIM_SCENE("script@rcm@dtc3@leadin@rsc3@meredith_panic", 0, "pl_cower", false, true);
									ANIMSCENE::LOAD_ANIM_SCENE(*iParam2);
								}
								if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*iParam2) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(*iParam2, true, false))
								{
									if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(*iParam2, false))
									{
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
										ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(*iParam1, true);
										ANIMSCENE::SET_ANIM_SCENE_ENTITY(*iParam2, "ARTHUR", Global_35, 0);
										ANIMSCENE::SET_ANIM_SCENE_ENTITY(*iParam2, "Meredith", *iParam1, 0);
										ANIMSCENE::SET_ANIM_SCENE_ENTITY(*iParam2, "p_prisoncage02x", iLocal_1504[0], 0);
										ANIMSCENE::SET_ANIM_SCENE_ENTITY(*iParam2, "p_cs_ropehandssplit", iLocal_1504[1], 0);
										ANIMSCENE::START_ANIM_SCENE(*iParam2);
									}
									else
									{
										iParam1->f_6 = MISC::GET_GAME_TIMER();
										iParam1->f_12 = MISC::GET_GAME_TIMER();
										iParam1->f_5 = 1;
									}
								}
							}
							else
							{
								if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*iParam2) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(*iParam2, false))
								{
									ANIMSCENE::_0xDF7B5144E25CD3FE(*iParam2, "pl_leadin");
									ANIMSCENE::_0xDF7B5144E25CD3FE(*iParam2, "pl_sit_front");
									ANIMSCENE::_0xDF7B5144E25CD3FE(*iParam2, "pl_cower_to_sit");
									ANIMSCENE::_0xDF7B5144E25CD3FE(*iParam2, "pl_left_to_front");
									ANIMSCENE::_0xDF7B5144E25CD3FE(*iParam2, "pl_right_to_front");
									ANIMSCENE::_0xDF7B5144E25CD3FE(*iParam2, "pl_front_to_left");
									ANIMSCENE::_0xDF7B5144E25CD3FE(*iParam2, "pl_front_to_right");
									ANIMSCENE::_0xDF7B5144E25CD3FE(*iParam2, "pl_left_to_back");
									ANIMSCENE::_0xDF7B5144E25CD3FE(*iParam2, "pl_right_to_back");
									ANIMSCENE::_0xDF7B5144E25CD3FE(*iParam2, "pl_back_to_left");
									ANIMSCENE::_0xDF7B5144E25CD3FE(*iParam2, "pl_back_to_right");
									ANIMSCENE::_0xDF7B5144E25CD3FE(*iParam2, "pl_front_startled_a");
									ANIMSCENE::_0xDF7B5144E25CD3FE(*iParam2, "pl_front_startled_b");
									ANIMSCENE::_0xDF7B5144E25CD3FE(*iParam2, "pl_front_startled_c");
									vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_1504[0], ENTITY::GET_ENTITY_COORDS(Global_35, true, false)) };
									if ((((((ANIMSCENE::_0x1F0E401031E20146(*iParam2, "pl_sit_front") || ANIMSCENE::_0x1F0E401031E20146(*iParam2, "pl_cower_to_sit")) || ANIMSCENE::_0x1F0E401031E20146(*iParam2, "pl_left_to_front")) || ANIMSCENE::_0x1F0E401031E20146(*iParam2, "pl_right_to_front")) || ANIMSCENE::_0x1F0E401031E20146(*iParam2, "pl_front_startled_a")) || ANIMSCENE::_0x1F0E401031E20146(*iParam2, "pl_front_startled_b")) || ANIMSCENE::_0x1F0E401031E20146(*iParam2, "pl_front_startled_c"))
									{
										if (ANIMSCENE::_0x8D81E7824B7753F7(*iParam2, "sit_front", 1))
										{
											if (vVar0.y < 1f)
											{
												if (vVar0.x > 0f)
												{
													if (ANIMSCENE::_0x23E33CB9F4A3F547(*iParam2, "pl_front_to_right"))
													{
														ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*iParam2, "pl_front_to_right", true);
													}
												}
												else if (vVar0.x < 0f)
												{
													if (ANIMSCENE::_0x23E33CB9F4A3F547(*iParam2, "pl_front_to_left"))
													{
														ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*iParam2, "pl_front_to_left", true);
													}
												}
											}
											if (iParam1->f_18 > 7.5f && (MISC::GET_GAME_TIMER() - iParam1->f_6) > 7500)
											{
												switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
												{
													case 0:
														if (ANIMSCENE::_0x23E33CB9F4A3F547(*iParam2, "pl_front_startled_a"))
														{
															ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*iParam2, "pl_front_startled_a", true);
														}
														break;
													case 1:
														if (ANIMSCENE::_0x23E33CB9F4A3F547(*iParam2, "pl_front_startled_b"))
														{
															ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*iParam2, "pl_front_startled_b", true);
														}
														break;
													case 2:
														if (ANIMSCENE::_0x23E33CB9F4A3F547(*iParam2, "pl_front_startled_c"))
														{
															ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*iParam2, "pl_front_startled_c", true);
														}
														break;
												}
												iParam1->f_6 = MISC::GET_GAME_TIMER();
											}
										}
									}
									else if (ANIMSCENE::_0x1F0E401031E20146(*iParam2, "pl_back_to_right") || ANIMSCENE::_0x1F0E401031E20146(*iParam2, "pl_front_to_right"))
									{
										if (ANIMSCENE::_0x8D81E7824B7753F7(*iParam2, "right_loop", 1))
										{
											if (vVar0.y > 1.25f)
											{
												if (ANIMSCENE::_0x23E33CB9F4A3F547(*iParam2, "pl_right_to_front"))
												{
													ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*iParam2, "pl_right_to_front", true);
												}
											}
											else if (vVar0.y < -1.25f)
											{
												if (ANIMSCENE::_0x23E33CB9F4A3F547(*iParam2, "pl_right_to_back"))
												{
													ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*iParam2, "pl_right_to_back", true);
												}
											}
										}
									}
									else if (ANIMSCENE::_0x1F0E401031E20146(*iParam2, "pl_left_to_back") || ANIMSCENE::_0x1F0E401031E20146(*iParam2, "pl_right_to_back"))
									{
										if (ANIMSCENE::_0x8D81E7824B7753F7(*iParam2, "back_loop", 1))
										{
											if (vVar0.y > -1f)
											{
												if (vVar0.x < 0f)
												{
													if (ANIMSCENE::_0x23E33CB9F4A3F547(*iParam2, "pl_back_to_left"))
													{
														ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*iParam2, "pl_back_to_left", true);
													}
												}
												else if (vVar0.x > 0f)
												{
													if (ANIMSCENE::_0x23E33CB9F4A3F547(*iParam2, "pl_back_to_right"))
													{
														ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*iParam2, "pl_back_to_right", true);
													}
												}
											}
										}
									}
									else if (ANIMSCENE::_0x1F0E401031E20146(*iParam2, "pl_back_to_left") || ANIMSCENE::_0x1F0E401031E20146(*iParam2, "pl_front_to_left"))
									{
										if (ANIMSCENE::_0x8D81E7824B7753F7(*iParam2, "left_loop", 1))
										{
											if (vVar0.y > 1.5f)
											{
												if (ANIMSCENE::_0x23E33CB9F4A3F547(*iParam2, "pl_left_to_front"))
												{
													ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*iParam2, "pl_left_to_front", true);
												}
											}
											else if (vVar0.y < -1.25f)
											{
												if (ANIMSCENE::_0x23E33CB9F4A3F547(*iParam2, "pl_left_to_back"))
												{
													ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*iParam2, "pl_left_to_back", true);
												}
											}
										}
									}
									else if (ANIMSCENE::_0x1F0E401031E20146(*iParam2, "pl_cower"))
									{
										ANIMSCENE::_0xDF7B5144E25CD3FE(*iParam2, "pl_leadin");
										ANIMSCENE::_0xDF7B5144E25CD3FE(*iParam2, "pl_cower_to_sit");
										if (__LIB_0__::func_27(iLocal_1670, 524288) || __LIB_0__::func_48(Global_35, *iParam1, 10f, 1))
										{
											if (ANIMSCENE::_0x23E33CB9F4A3F547(*iParam2, "pl_cower_to_sit"))
											{
												ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*iParam2, "pl_cower_to_sit", true);
											}
										}
									}
								}
								if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(*iParam1))
								{
									if ((MISC::GET_GAME_TIMER() - iParam1->f_12) > iParam1->f_13)
									{
										if (MISC::GET_RANDOM_INT_IN_RANGE(0, 3) == 0)
										{
											if (__LIB_12__::func_876(uParam0, "RDCH3_MERE_SC1", 0))
											{
												if (!__LIB_0__::func_27(iLocal_1670, 524288))
												{
													iParam1->f_12 = MISC::GET_GAME_TIMER();
													iParam1->f_13 = MISC::GET_RANDOM_INT_IN_RANGE(5000, 7000);
												}
												else
												{
													iParam1->f_12 = MISC::GET_GAME_TIMER();
													iParam1->f_13 = MISC::GET_RANDOM_INT_IN_RANGE(15000, 21000);
												}
											}
										}
										else if (MISC::GET_RANDOM_INT_IN_RANGE(0, 3) == 1)
										{
											if (__LIB_12__::func_876(uParam0, "RDCH3_MERE_SC2", 0))
											{
												if (!__LIB_0__::func_27(iLocal_1670, 524288))
												{
													iParam1->f_12 = MISC::GET_GAME_TIMER();
													iParam1->f_13 = MISC::GET_RANDOM_INT_IN_RANGE(3500, 5001);
												}
												else
												{
													iParam1->f_12 = MISC::GET_GAME_TIMER();
													iParam1->f_13 = MISC::GET_RANDOM_INT_IN_RANGE(7500, 10001);
												}
											}
										}
										else if (MISC::GET_RANDOM_INT_IN_RANGE(0, 3) == 2)
										{
											if (__LIB_12__::func_876(uParam0, "RDCH3_MERE_SC3", 0))
											{
												if (!__LIB_0__::func_27(iLocal_1670, 524288))
												{
													iParam1->f_12 = MISC::GET_GAME_TIMER();
													iParam1->f_13 = MISC::GET_RANDOM_INT_IN_RANGE(3500, 5001);
												}
												else
												{
													iParam1->f_12 = MISC::GET_GAME_TIMER();
													iParam1->f_13 = MISC::GET_RANDOM_INT_IN_RANGE(7500, 10001);
												}
											}
										}
									}
								}
								if (!__LIB_0__::func_27(iLocal_1670, 32768))
								{
									if (__LIB_0__::func_27(iLocal_1670, 524288))
									{
										if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*iParam2) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(*iParam2, false))
										{
											if (func_1366(94) && !__LIB_8__::func_684("RDCH3_MFREE"))
											{
												__LIB_10__::func_979(*iParam1, "", 5f, 0, 0, 132);
												__LIB_1__::func_683(&iLocal_1670, 32768);
											}
										}
									}
								}
								else
								{
									if (!func_1366(96))
									{
										if (!__LIB_0__::func_139(iLocal_1232[0]))
										{
											if (__LIB_10__::func_896(PLAYER::PLAYER_ID(), *iParam1))
											{
												if (__LIB_0__::func_48(Global_35, *iParam1, 5f, 1))
												{
													iLocal_1232[0] = __LIB_4__::func_450("INTERACT_DEFUSE", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
													if (__LIB_0__::func_139(iLocal_1232[0]))
													{
														__LIB_9__::func_332(&(iLocal_1232[0]), *iParam1);
														__LIB_5__::func_437(*iParam1, "", 1);
													}
												}
											}
										}
										else
										{
											if (__LIB_0__::func_139(iLocal_1232[0]))
											{
												if (__LIB_6__::func_904() || __LIB_5__::func_463())
												{
													__LIB_1__::func_221(iLocal_1232[0], 0, 1);
												}
												else
												{
													__LIB_1__::func_221(iLocal_1232[0], 1, 1);
												}
											}
											if ((__LIB_0__::func_139(iLocal_1232[0]) && __LIB_0__::func_572(iLocal_1232[0], 0)) && __LIB_1__::func_732(iLocal_1232[0], 1))
											{
												if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
												{
													if (__LIB_12__::func_876(uParam0, "RDCH3_MDEFUSE", 0))
													{
														TASK::TASK_LOOK_AT_ENTITY(Global_35, *iParam1, 3000, 2048, 51, 0);
														iLocal_1688++;
														if (iLocal_1688 == 3)
														{
															__LIB_1__::func_748(&(iLocal_1232[0]), 1, 1);
															__LIB_8__::func_771(*iParam1, 0, 1, 0);
															func_788(96, 1);
														}
													}
												}
											}
										}
									}
									if (!__LIB_0__::func_139(iLocal_1232[1]))
									{
										if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_1240[37], true, 0))
										{
											ANIMSCENE::_0xDF7B5144E25CD3FE(*iParam2, "pl_leadin");
											iLocal_1232[1] = __LIB_1__::func_282("RDCH31_U_OCAGE", joaat("INPUT_LOOT"), ENTITY::GET_ENTITY_COORDS(iLocal_1504[1], true, false), 1.75f, 1, 1, 0, 4, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
										}
									}
									else
									{
										if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_1240[37], true, 0))
										{
											__LIB_1__::func_748(&(iLocal_1232[1]), 1, 1);
										}
										if (!PED::IS_PED_INJURED(Global_35))
										{
											if (PED::IS_PED_ON_FOOT(Global_35) && !PED::_IS_PED_CARRYING(Global_35))
											{
												__LIB_1__::func_221(iLocal_1232[1], 1, 1);
											}
											else
											{
												__LIB_1__::func_221(iLocal_1232[1], 0, 1);
											}
										}
										if (__LIB_0__::func_486(iLocal_1232[1], 1) > 0f)
										{
											if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*iParam2) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(*iParam2, false)) && (ANIMSCENE::_0x1F0E401031E20146(*iParam2, "pl_back_to_right") || ANIMSCENE::_0x1F0E401031E20146(*iParam2, "pl_front_to_right")))
											{
												if (ANIMSCENE::_0x8D81E7824B7753F7(*iParam2, "right_loop", 1))
												{
													if (vVar0.y > 1.25f)
													{
														if (ANIMSCENE::_0x23E33CB9F4A3F547(*iParam2, "pl_right_to_front"))
														{
															ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*iParam2, "pl_right_to_front", true);
														}
													}
													else if (vVar0.y < -1.25f)
													{
														if (ANIMSCENE::_0x23E33CB9F4A3F547(*iParam2, "pl_right_to_back"))
														{
															ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*iParam2, "pl_right_to_back", true);
														}
													}
												}
											}
										}
										if (__LIB_0__::func_572(iLocal_1232[1], 0) && __LIB_0__::func_567(iLocal_1232[1], 1))
										{
											if (!PED::IS_PED_INJURED(Global_35))
											{
												if (PED::_GET_PED_CROUCH_MOVEMENT(Global_35))
												{
													PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
												}
												if (!__LIB_1__::func_205(Global_35, iLocal_1240[16], 1, 0))
												{
													ANIMSCENE::_GET_ANIM_SCENE_ORIGIN(*iParam2, &vVar3, &vVar6, 2);
													vVar9 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("script_rc@dtc3@leadin@rsc3", "leadin_arthur", vVar3, vVar6, 0f, 2) };
													vVar12 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("script_rc@dtc3@leadin@rsc3", "leadin_arthur", vVar3, vVar6, 0f, 2) };
													TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Global_35, vVar9, 1f, 20000, (0.25f * 2f), 1, vVar12.z);
													__LIB_1__::func_683(&iLocal_1670, 131072);
												}
												WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
											}
											__LIB_13__::func_520(&iLocal_1232);
											__LIB_8__::func_771(*iParam1, 0, 1, 0);
											__LIB_8__::func_771(iLocal_1504[1], 0, 1, 0);
											__LIB_1__::func_683(&iLocal_1670, 65536);
											func_320(iParam1, 14, 0, 0);
										}
									}
								}
								if (__LIB_0__::func_139(iLocal_1232[0]))
								{
									if (!__LIB_10__::func_896(PLAYER::PLAYER_ID(), *iParam1))
									{
										__LIB_1__::func_748(&(iLocal_1232[0]), 1, 1);
									}
								}
							}
							break;
					}
					break;
				case 14:
					if (iParam1->f_5 == 0)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*iParam2) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(*iParam2, false))
						{
							if (ANIMSCENE::_0x8D81E7824B7753F7(*iParam2, "sit_front", 1) || ANIMSCENE::_0x8D81E7824B7753F7(*iParam2, "RIGHT_TO_FRONT", 1))
							{
								if (ANIMSCENE::_0x23E33CB9F4A3F547(*iParam2, "pl_leadin"))
								{
									if (!PED::IS_PED_INJURED(*iParam1) && !PED::IS_PED_INJURED(Global_35))
									{
										if ((!__LIB_0__::func_27(iLocal_1670, 131072) && __LIB_1__::func_205(Global_35, iLocal_1240[16], 1, 0)) || (__LIB_0__::func_27(iLocal_1670, 131072) && TASK::GET_SCRIPT_TASK_STATUS(Global_35, 713668775, true) == 8))
										{
											if (__LIB_13__::func_565(Global_35))
											{
												ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*iParam2, "pl_leadin", true);
												iParam1->f_5 = 1;
											}
										}
									}
								}
							}
						}
					}
					else if (!bLocal_1398)
					{
						bLocal_1398 = true;
					}
					break;
				case 8:
					if (iParam1->f_5 == 0)
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(*iParam1, false);
						if (!PED::IS_PED_GROUP_MEMBER(*iParam1, __LIB_0__::func_110(), 0))
						{
							PED::SET_PED_CONFIG_FLAG(*iParam1, 279, false);
							PED::SET_PED_AS_GROUP_MEMBER(*iParam1, __LIB_0__::func_110());
							PED::SET_PED_CAN_TELEPORT_TO_GROUP_LEADER(*iParam1, __LIB_0__::func_110(), true);
							PED::SET_PED_CONFIG_FLAG(*iParam1, 309, true);
							PED::SET_PED_CONFIG_FLAG(*iParam1, 105, false);
							PED::SET_GROUP_SEPARATION_RANGE(__LIB_0__::func_110(), 30f);
						}
						__LIB_1__::func_683(&(iParam1->f_9), 16384);
						iParam1->f_5 = 1;
					}
					else
					{
						if (__LIB_1__::func_205(*iParam1, iLocal_1240[17], 1, 0))
						{
							if ((PED::IS_PED_ON_MOUNT(*iParam1) || PED::IS_PED_IN_ANY_VEHICLE(*iParam1, false)) || ENTITY::DOES_ENTITY_EXIST(PED::_GET_TRANSPORT_PED_IS_SEATED_ON(*iParam1)))
							{
								if (ENTITY::GET_ENTITY_SPEED(*iParam1) < 1.75f)
								{
									func_320(iParam1, 5, 0, 0);
								}
							}
							else
							{
								func_320(iParam1, 5, 0, 0);
							}
						}
						if (!PED::IS_PED_GROUP_MEMBER(*iParam1, __LIB_0__::func_110(), 0) || iParam1->f_18 > 60f)
						{
							if (__LIB_0__::func_27(iParam1->f_9, 16384))
							{
								func_320(iParam1, 9, 0, 0);
							}
						}
					}
					break;
				case 9:
					if (iParam1->f_5 == 0)
					{
						if (PED::IS_PED_GROUP_MEMBER(*iParam1, __LIB_0__::func_110(), 0))
						{
							PED::REMOVE_PED_FROM_GROUP(*iParam1);
						}
						iParam1->f_5 = 1;
					}
					else if (iParam1->f_18 < (30f / 3f))
					{
						func_320(iParam1, 8, 0, 0);
					}
					break;
				case 5:
					switch (iParam1->f_7)
					{
						case 0:
							if (iParam1->f_5 == 0)
							{
								if (PED::IS_PED_GROUP_MEMBER(*iParam1, __LIB_0__::func_110(), 0))
								{
									PED::REMOVE_PED_FROM_GROUP(*iParam1);
								}
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
								func_1386(*iParam1, vLocal_100);
								iParam1->f_5 = 1;
							}
							else if ((PED::IS_PED_ON_FOOT(*iParam1) && !PED::IS_PED_ON_MOUNT(*iParam1)) && !PED::IS_PED_IN_ANY_VEHICLE(*iParam1, false))
							{
								func_320(iParam1, 5, 0, 1);
							}
							break;
						case 1:
							if (iParam1->f_5 == 0)
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam1, 2857.732f, 1364.61f, 64.6895f, 1.5f, 40000, (0.25f * 2f), 1, 40000f);
								iParam1->f_5 = 1;
							}
							else if (__LIB_1__::func_205(*iParam1, iLocal_1240[19], 1, 0))
							{
								TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(*iParam1, (1f * 0.5f));
							}
							break;
					}
					break;
			}
		}
	}
}

void func_787(char* sParam0)
{
	if (__LIB_0__::func_27(iLocal_1670, 256))
	{
		if (((!PED::IS_PED_INJURED(Global_35) && !PED::IS_PED_INJURED(Local_142)) && ENTITY::DOES_ENTITY_EXIST(iLocal_1161)) && !ENTITY::IS_ENTITY_DEAD(iLocal_1161))
		{
			if (!__LIB_0__::func_899(&uLocal_1182))
			{
				__LIB_2__::func_259(&uLocal_1182);
			}
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Global_35, sParam0))
			{
				TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Global_35, 3f, 0, -1f, 0);
			}
			if (__LIB_1__::func_583(&uLocal_1182) > 3f)
			{
				TASK::CLEAR_PED_TASKS(Global_35, true, false);
				TASK::REMOVE_WAYPOINT_RECORDING(sParam0);
				__LIB_1__::func_681(&iLocal_1670, 256);
			}
		}
	}
}

void func_788(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_1366(iParam0))
		{
			iLocal_1292[iParam0] = 1;
		}
	}
	else if (func_1366(iParam0))
	{
		iLocal_1292[iParam0] = 0;
	}
}

void func_789()
{
	int iVar0;
	if (!PED::IS_PED_INJURED(Global_35))
	{
		if (__LIB_1__::func_205(Global_35, iLocal_1240[26], 1, 0))
		{
			ENTITY::_0xC3ABCFBC7D74AFA5(Global_35, 0, 1);
			PED::SET_PED_RESET_FLAG(Global_35, 144, true);
			__LIB_4__::func_636();
		}
		if (__LIB_1__::func_205(Global_35, iLocal_1240[25], 1, 0))
		{
			iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::IS_ENTITY_A_PED(iVar0))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Global_35, -208384378, true) != 1)
				{
					PED::_0x6569F31A01B4C097(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0), 0, 0);
					PED::_0x6569F31A01B4C097(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0), 1, 0);
					PED::_0x6569F31A01B4C097(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0), 6, 0);
					TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(Global_35, iVar0, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 1f, 1);
				}
			}
		}
	}
}

void func_790(var uParam0)
{
	if (!__LIB_0__::func_27(iLocal_1670, 524288))
	{
		if (!func_1366(57))
		{
			if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
			{
				if (__LIB_12__::func_876(uParam0, "RDCH3_BHSTART", 0))
				{
					func_788(7, 0);
					func_788(57, 1);
				}
			}
		}
		if (!func_1366(58))
		{
			if ((((!__LIB_6__::func_904() && !__LIB_5__::func_463()) && __LIB_1__::func_205(Local_142, iLocal_1240[12], 1, 0)) && __LIB_0__::func_27(iLocal_1672, 16)) && __LIB_2__::func_1(Local_503[0 /*20*/], 0, 1))
			{
				if (__LIB_12__::func_876(uParam0, "RDCH3_CSEEFIRST", 0))
				{
					func_788(58, 1);
				}
			}
		}
		if (!func_1366(59))
		{
			if (__LIB_0__::func_27(iLocal_1672, 32))
			{
				if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
				{
					if ((__LIB_1__::func_205(Global_35, iLocal_1240[12], 1, 0) || __LIB_1__::func_205(Local_142, iLocal_1240[12], 1, 0)) || __LIB_0__::func_266(Local_142, 2355.532f, 1334.033f, 103.5061f, 2f, 0, 0))
					{
						if (__LIB_12__::func_876(uParam0, "RDCH3_CTNT", 0))
						{
							Local_142.f_11 = 0;
							Local_142.f_12 = MISC::GET_GAME_TIMER();
							func_788(59, 1);
						}
					}
				}
			}
		}
		else if (!func_1366(60))
		{
			if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
			{
				if (MISC::GET_GAME_TIMER() - Local_142.f_12) > (7500 + Local_142.f_11 * 1500)
				{
					if (((((!__LIB_0__::func_27(iLocal_1670, 262144) && !__LIB_0__::func_27(iLocal_1670, 1048576)) && !__LIB_0__::func_27(iLocal_1670, 2097152)) && !__LIB_0__::func_27(iLocal_1670, 4194304)) && !__LIB_0__::func_27(iLocal_1670, 8388608)) && !func_1366(7))
					{
						if (__LIB_12__::func_876(uParam0, "RDCH3_CTNTR", 0))
						{
							Local_142.f_11++;
							Local_142.f_12 = MISC::GET_GAME_TIMER();
							if (Local_142.f_11 == 2)
							{
								func_788(60, 1);
							}
						}
					}
				}
			}
		}
		if (!func_1366(67))
		{
			if (!__LIB_5__::func_463())
			{
				if (__LIB_1__::func_205(Global_35, iLocal_1240[15], 1, 0))
				{
					if (__LIB_12__::func_876(uParam0, "RDCH3_CSEEGIRLS", 0))
					{
						func_788(67, 1);
					}
				}
			}
		}
		if (!func_1366(66))
		{
			if (!__LIB_5__::func_463())
			{
				if (__LIB_0__::func_48(Global_35, Local_162, 82f, 1) && __LIB_0__::func_27(iLocal_1670, 262144))
				{
					if (__LIB_12__::func_876(uParam0, "RDCH3_CMERED", 0))
					{
						func_788(66, 1);
					}
				}
			}
		}
		if ((!func_1366(61) && func_1366(58)) && __LIB_2__::func_1(Local_503[0 /*20*/], 0, 1))
		{
			if (__LIB_0__::func_27(iLocal_1672, 16) && !__LIB_0__::func_27(iLocal_1672, 32))
			{
				if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
				{
					if (__LIB_1__::func_205(Global_35, iLocal_1240[12], 1, 0) || __LIB_1__::func_205(Local_142, iLocal_1240[12], 1, 0))
					{
						if (__LIB_12__::func_876(uParam0, "RDCH3_CFIRST", 0))
						{
							Local_142.f_11 = 0;
							Local_142.f_12 = MISC::GET_GAME_TIMER();
							__LIB_12__::func_883(uParam0, "RDCH31_O_KILL", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
							func_788(61, 1);
						}
					}
				}
			}
		}
		else if (!func_1366(62) && func_1366(61))
		{
			if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
			{
				if ((MISC::GET_GAME_TIMER() - Local_142.f_12) > (7500 + Local_142.f_11 * 1500) && ((TASK::IS_PED_STILL(Global_35) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_1240[24], true, 0)) || TASK::IS_PED_STILL(Global_35)))
				{
					if (!__LIB_0__::func_27(iLocal_1670, 262144) && !__LIB_0__::func_27(Local_503[0 /*20*/].f_9, 1))
					{
						if (__LIB_12__::func_876(uParam0, "RDCH3_CFIRSTR", 0))
						{
							Local_142.f_11++;
							Local_142.f_12 = MISC::GET_GAME_TIMER();
							if (Local_142.f_11 == 3)
							{
								func_788(62, 1);
							}
						}
					}
				}
			}
		}
		if (!func_1366(63))
		{
			if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
			{
				if (__LIB_0__::func_27(iLocal_1670, 8388608))
				{
					if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1692) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_1692, false)) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_1692) > 0.3f)
					{
						if (__LIB_12__::func_876(uParam0, "RDCH3_CCOME", 0))
						{
							__LIB_12__::func_883(uParam0, "RDCH31_O_KILL", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
							func_788(63, 1);
						}
					}
				}
			}
		}
		if (!func_1366(64))
		{
			if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
			{
				if (__LIB_0__::func_27(iLocal_1670, 8388608))
				{
					if ((__LIB_0__::func_27(iLocal_1674, 32) && !ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_1240[11], true, 0)) && !ENTITY::IS_ENTITY_IN_VOLUME(Local_142, iLocal_1240[11], true, 0))
					{
						if (__LIB_12__::func_876(uParam0, "RDCH3_CGOIN", 0))
						{
							func_788(64, 1);
						}
					}
				}
				if ((__LIB_0__::func_27(iLocal_1672, 16) || !__LIB_0__::func_27(iLocal_1672, 32)) || !__LIB_2__::func_1(Local_503[0 /*20*/], 0, 1))
				{
					if (!__LIB_0__::func_27(iLocal_1670, 262144))
					{
						if (__LIB_0__::func_27(Local_503[0 /*20*/].f_9, 1) && ENTITY::IS_ENTITY_IN_VOLUME(Local_142, iLocal_1240[24], true, 0))
						{
							if (__LIB_12__::func_876(uParam0, "RDCH3_STEG02F", 0))
							{
								func_788(64, 1);
								AUDIO::TRIGGER_MUSIC_EVENT("RDTC31_CAVE_KILL");
							}
						}
					}
				}
			}
		}
		if (!func_1366(65))
		{
			if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
			{
				if (!__LIB_0__::func_27(iLocal_1670, 262144))
				{
					if (((__LIB_0__::func_27(Local_503[0 /*20*/].f_9, 1) && __LIB_0__::func_27(Local_503[1 /*20*/].f_9, 1)) && __LIB_0__::func_27(Local_503[3 /*20*/].f_9, 1)) && __LIB_0__::func_27(Local_503[4 /*20*/].f_9, 1))
					{
						if (__LIB_0__::func_27(iLocal_1670, 262144))
						{
							if (__LIB_12__::func_876(uParam0, "RDCH3_CMOVEUP", 0))
							{
								func_788(65, 1);
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if (!func_1366(94))
		{
			if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_1689) > 2500)
				{
					if (iLocal_1688 == iLocal_1688)
					{
					}
					if (__LIB_12__::func_876(uParam0, "RDCH3_MFREE", 0))
					{
						func_788(94, 1);
					}
				}
			}
		}
		if (!func_1366(95))
		{
			if (func_1366(94))
			{
				if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
				{
					if (Local_162.f_18 < 10f || Local_162.f_19 < 10f)
					{
						if (MISC::GET_GAME_TIMER() - Local_162.f_12) > (5000 + Local_162.f_11 * 1000)
						{
							if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_162) && !AUDIO::_0x54B187F111D9C6F8(Local_162, 0))
							{
								if (__LIB_12__::func_876(uParam0, "RDCH3_MPLEAD", 0))
								{
									Local_162.f_11++;
									Local_162.f_12 = MISC::GET_GAME_TIMER();
									if (Local_162.f_11 == 3)
									{
										func_788(95, 1);
									}
								}
							}
						}
					}
				}
			}
		}
	}
	if (!__LIB_0__::func_27(iLocal_1670, 67108864))
	{
		if (!func_1366(8))
		{
			__LIB_13__::func_89(uParam0, "RDCH31_O_APRCH", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			__LIB_12__::func_883(uParam0, "RDCH31_O_APRCH", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			__LIB_0__::func_745(7);
			if (MAP::DOES_BLIP_EXIST(iLocal_1231))
			{
				MAP::REMOVE_BLIP(&iLocal_1231);
			}
			if (!MAP::DOES_BLIP_EXIST(iLocal_1231))
			{
				iLocal_1231 = MAP::_0xA6EF0C54A3443E70(1247852480, iLocal_1240[11]);
			}
			func_788(8, 1);
		}
		if ((((!__LIB_0__::func_27(iLocal_1670, 524288) && __LIB_0__::func_27(iLocal_1672, 16)) || (!__LIB_0__::func_27(iLocal_1670, 524288) && __LIB_0__::func_27(iLocal_1670, 4194304))) || (!__LIB_2__::func_1(Local_503[0 /*20*/], 0, 1) && !__LIB_0__::func_27(iLocal_1670, 524288))) || (__LIB_0__::func_27(iLocal_1672, 512) && !__LIB_0__::func_27(iLocal_1670, 524288)))
		{
			if ((!func_1366(7) && func_1366(8)) && ((func_1366(58) || func_1366(59)) || !__LIB_2__::func_1(Local_503[0 /*20*/], 0, 1)))
			{
				if (!__LIB_0__::func_899(&uLocal_1173))
				{
					__LIB_13__::func_89(uParam0, "RDCH31_O_KILL", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					__LIB_0__::func_745(7);
					__LIB_2__::func_259(&uLocal_1173);
					__LIB_2__::func_259(&uLocal_1176);
					__LIB_12__::func_883(uParam0, "RDCH31_O_KILL", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				}
				else
				{
					if (__LIB_8__::func_684("RDCH3_CTNTR"))
					{
						__LIB_6__::func_900("RDCH3_CTNTR", 0, 0);
					}
					if (MAP::DOES_BLIP_EXIST(iLocal_1231))
					{
						MAP::REMOVE_BLIP(&iLocal_1231);
					}
					if (!func_1366(7))
					{
						UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
						__LIB_13__::func_89(uParam0, "RDCH31_O_KILL", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
						func_788(7, 1);
					}
					if (!func_1366(7) && !__LIB_5__::func_352("RDCH31_O_KILL"))
					{
						if (!func_1366(7))
						{
							if (__LIB_1__::func_583(&uLocal_1173) > 15f)
							{
								__LIB_12__::func_883(uParam0, "RDCH31_O_KILL", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
								func_788(7, 1);
							}
						}
					}
				}
			}
		}
		else if (!__LIB_0__::func_27(iLocal_1670, 524288) && __LIB_0__::func_27(iLocal_1672, 32))
		{
			if (((!func_1366(9) && func_1366(8)) && func_1366(59)) && !__LIB_8__::func_684("RDCH3_CTNT"))
			{
				if (!__LIB_0__::func_899(&uLocal_1173))
				{
					__LIB_13__::func_89(uParam0, "RDCH31_O_THROW", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					__LIB_0__::func_745(7);
					__LIB_2__::func_259(&uLocal_1173);
					__LIB_2__::func_259(&uLocal_1176);
					if (MAP::DOES_BLIP_EXIST(iLocal_1231))
					{
						MAP::REMOVE_BLIP(&iLocal_1231);
					}
					if (!MAP::DOES_BLIP_EXIST(iLocal_1231))
					{
						iLocal_1231 = MAP::_0xA6EF0C54A3443E70(1247852480, iLocal_1240[11]);
					}
					__LIB_12__::func_883(uParam0, "RDCH31_O_THROW", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				}
				else
				{
					if (!func_1366(9))
					{
						if (__LIB_5__::func_352("RDCH31_O_THROW"))
						{
							func_788(9, 1);
						}
					}
					if (!func_1366(9) && !__LIB_5__::func_352("RDCH31_O_THROW"))
					{
						if (!func_1366(9))
						{
							if (__LIB_1__::func_583(&uLocal_1173) > 15f)
							{
								__LIB_12__::func_883(uParam0, "RDCH31_O_THROW", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
								func_788(9, 1);
							}
						}
					}
				}
			}
		}
		else if (__LIB_0__::func_27(iLocal_1670, 32768))
		{
			if (!__LIB_0__::func_27(iLocal_1670, 33554432))
			{
				__LIB_1__::func_561(&uLocal_1173);
				__LIB_1__::func_561(&uLocal_1176);
				UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
				__LIB_1__::func_683(&iLocal_1670, 33554432);
			}
			if (!func_1366(10))
			{
				if (!__LIB_0__::func_899(&uLocal_1173))
				{
					fLocal_1169 = 0f;
					__LIB_13__::func_89(uParam0, "RDCH31_O_OPEN", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					if (!MAP::DOES_BLIP_EXIST(iLocal_1231))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_1504[1]) && !ENTITY::IS_ENTITY_DEAD(iLocal_1504[1]))
						{
							iLocal_1231 = __LIB_8__::func_778(408396114, iLocal_1504[1], 1);
							MAP::_BLIP_SET_MODIFIER(iLocal_1231, -401963276);
						}
					}
					__LIB_2__::func_259(&uLocal_1173);
					__LIB_2__::func_259(&uLocal_1176);
				}
				else
				{
					if (!func_1366(10))
					{
						if (__LIB_5__::func_352("RDCH31_O_OPEN") || __LIB_0__::func_27(iLocal_1670, 65536))
						{
							func_788(10, 1);
						}
					}
					if (!func_1366(10) && !__LIB_5__::func_352("RDCH31_O_OPEN"))
					{
						if (!__LIB_13__::func_564(&fLocal_1169, __LIB_0__::func_665(Global_35, iLocal_1504[1], 1, 1), 0))
						{
							if (__LIB_1__::func_583(&uLocal_1173) > 12f || __LIB_1__::func_583(&uLocal_1176) > 7f)
							{
								__LIB_12__::func_883(uParam0, "RDCH31_O_OPEN", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
								func_788(10, 1);
							}
						}
						else
						{
							__LIB_2__::func_259(&uLocal_1173);
							__LIB_2__::func_259(&uLocal_1176);
						}
						if (!__LIB_13__::func_517(Global_35, 981668463 /* Float: 0.001f */))
						{
							__LIB_2__::func_259(&uLocal_1176);
						}
					}
				}
			}
		}
	}
}

void func_795(var uParam0)
{
	bool bVar0;
	bool bVar1;
	if (!func_1366(100))
	{
		if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
		{
			if (__LIB_12__::func_876(uParam0, "RDCH3_MERE_BNT1", 0))
			{
				Local_162.f_12 = 0;
				func_788(100, 1);
			}
		}
	}
	else if (!func_1366(101))
	{
		if (Local_162.f_12 == 0)
		{
			if (!__LIB_8__::func_684("RDCH3_MERE_BNT1"))
			{
				Local_162.f_12 = MISC::GET_GAME_TIMER();
			}
		}
		else if ((MISC::GET_GAME_TIMER() - Local_162.f_12) > 1000)
		{
			if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
			{
				if (__LIB_12__::func_876(uParam0, "RDCH3_MERE_BNT2", 0))
				{
					func_788(101, 1);
				}
			}
		}
	}
	else if (!__LIB_0__::func_27(iLocal_1675, 2048))
	{
		if (func_1366(101))
		{
			if (!__LIB_8__::func_684("RDCH3_MERE_BNT2") || (__LIB_8__::func_684("RDCH3_MERE_BNT2") && AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("RDCH3_MERE_BNT2") > 5))
			{
				if (MAP::DOES_BLIP_EXIST(Local_162.f_2))
				{
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_162.f_2, "DISCOVERABLE_NAME_MEREDITH");
				}
				PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MEREDITH"));
				func_310(&iLocal_1675, 2048);
			}
		}
	}
	if (!func_1366(102))
	{
		if (MAP::DOES_BLIP_EXIST(iLocal_1231))
		{
			if (__LIB_0__::func_266(Global_35, vLocal_23, 175f, 1, 1))
			{
				if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
				{
					if (__LIB_12__::func_876(uParam0, "RDCH3_MERE_DIR", 0))
					{
						func_788(102, 1);
					}
				}
			}
		}
	}
	if (__LIB_0__::func_27(Local_162.f_9, 16384))
	{
		if (!PED::IS_PED_INJURED(Local_162))
		{
			if (Local_162.f_3 == 9)
			{
				if (!__LIB_0__::func_27(iLocal_1670, 67108864))
				{
					func_788(11, 0);
					func_788(15, 0);
					__LIB_1__::func_681(&iLocal_1670, 33554432);
					__LIB_1__::func_683(&iLocal_1670, 67108864);
				}
			}
			if (Local_162.f_3 == 8)
			{
				if (__LIB_0__::func_27(iLocal_1670, 67108864))
				{
					func_788(11, 0);
					func_788(15, 0);
					__LIB_1__::func_681(&iLocal_1670, 33554432);
					__LIB_1__::func_681(&iLocal_1670, 67108864);
				}
			}
		}
	}
	if (!__LIB_0__::func_27(iLocal_1670, 67108864))
	{
		if (!__LIB_0__::func_27(iLocal_1670, 33554432))
		{
			__LIB_1__::func_561(&uLocal_1173);
			__LIB_1__::func_561(&uLocal_1176);
			UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
			__LIB_1__::func_683(&iLocal_1670, 33554432);
		}
		if (!func_1366(11))
		{
			if (!__LIB_0__::func_899(&uLocal_1173))
			{
				fLocal_1169 = 0f;
				__LIB_13__::func_89(uParam0, "RDCH31_O_GTA", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				if (MAP::DOES_BLIP_EXIST(Local_162.f_2))
				{
					MAP::_BLIP_REMOVE_MODIFIER(Local_162.f_2, -401963276);
				}
				if (!MAP::DOES_BLIP_EXIST(iLocal_1231))
				{
					iLocal_1231 = __LIB_5__::func_554(408396114, iLocal_1240[33], 1);
				}
				if (MAP::DOES_BLIP_EXIST(iLocal_1231))
				{
					MAP::_BLIP_SET_MODIFIER(iLocal_1231, -1878373110);
				}
				__LIB_2__::func_259(&uLocal_1173);
				__LIB_2__::func_259(&uLocal_1176);
			}
			else
			{
				if (!func_1366(11))
				{
					if (__LIB_5__::func_352("RDCH31_O_GTA"))
					{
						func_788(11, 1);
					}
				}
				if (!func_1366(11) && !__LIB_5__::func_352("RDCH31_O_GTA"))
				{
					bVar0 = __LIB_0__::func_27(iLocal_1670, -2147483648);
					if (bVar0 == 1 || !__LIB_13__::func_564(&fLocal_1169, MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), vLocal_23, true), 0))
					{
						if ((__LIB_1__::func_583(&uLocal_1173) > 12f || __LIB_1__::func_583(&uLocal_1176) > 7f) || bVar0 == 1)
						{
							__LIB_12__::func_883(uParam0, "RDCH31_O_GTA", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
							func_788(11, 1);
						}
					}
					else
					{
						__LIB_2__::func_259(&uLocal_1173);
						__LIB_2__::func_259(&uLocal_1176);
					}
					if (!__LIB_13__::func_517(Global_35, 981668463 /* Float: 0.001f */))
					{
						__LIB_2__::func_259(&uLocal_1176);
					}
				}
			}
		}
	}
	else
	{
		if (!__LIB_0__::func_27(iLocal_1670, 33554432))
		{
			__LIB_1__::func_561(&uLocal_1173);
			__LIB_1__::func_561(&uLocal_1176);
			UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
			__LIB_1__::func_683(&iLocal_1670, 33554432);
		}
		if (!func_1366(15))
		{
			if (!__LIB_0__::func_899(&uLocal_1173))
			{
				fLocal_1169 = 0f;
				__LIB_0__::func_325(&iLocal_1231);
				__LIB_13__::func_89(uParam0, "RDCH31_O_RETWOM", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				if (MAP::DOES_BLIP_EXIST(Local_162.f_2))
				{
					MAP::_BLIP_SET_MODIFIER(Local_162.f_2, -401963276);
				}
				__LIB_2__::func_259(&uLocal_1173);
				__LIB_2__::func_259(&uLocal_1176);
			}
			else
			{
				if (!func_1366(15))
				{
					if (__LIB_5__::func_352("RDCH31_O_RETWOM"))
					{
						func_788(14, 1);
					}
				}
				if (!func_1366(15) && !__LIB_5__::func_352("RDCH31_O_RETWOM"))
				{
					bVar0 = true;
					bVar1 = __LIB_13__::func_564(&fLocal_1169, Local_162.f_18, 0);
					if (bVar0 == 1 || bVar1 == 0)
					{
						if ((__LIB_1__::func_583(&uLocal_1173) > 12f || __LIB_1__::func_583(&uLocal_1176) > 7f) || bVar0 == 1)
						{
							__LIB_12__::func_883(uParam0, "RDCH31_O_RETWOM", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
							func_788(15, 1);
						}
					}
					else
					{
						__LIB_2__::func_259(&uLocal_1173);
						__LIB_2__::func_259(&uLocal_1176);
					}
					if (!__LIB_13__::func_517(Global_35, 981668463 /* Float: 0.001f */))
					{
						__LIB_2__::func_259(&uLocal_1176);
					}
				}
			}
		}
	}
}

void func_796()
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_1701))
	{
		iLocal_1701 = ANIMSCENE::_CREATE_ANIM_SCENE("script@rcm@dtc3@ig@rdtc3_rsc4_lead_in@rdtc3_rsc4_lead_in", 0, "pl_lead_in", false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(iLocal_1701);
	}
}

bool func_801(var uParam0)
{
	bool bVar0;
	bVar0 = true;
	switch (*uParam0)
	{
		case 0:
			if (!STREAMING::_IS_IMAP_ACTIVE(1122583474))
			{
				STREAMING::_REQUEST_IMAP(1122583474);
			}
			if (!func_313(&Local_122, 0, 0f, 0f, 0f, 0f, 0, 0, 0, 0))
			{
				bVar0 = false;
			}
			if (!func_313(&Local_142, 7, 0f, 0f, 0f, 0f, 0, 0, 0, 1))
			{
				bVar0 = false;
			}
			if (!func_313(&iLocal_202, 13, 0f, 0f, 0f, 0f, 0, 0, 0, 1))
			{
				bVar0 = false;
			}
			if (!func_313(&iLocal_222, 3, 0f, 0f, 0f, 0f, 0, 0, 0, 1))
			{
				bVar0 = false;
			}
			if (!func_313(&iLocal_242, 2, 0f, 0f, 0f, 0f, 0, 0, 0, 1))
			{
				bVar0 = false;
			}
			if (!func_313(&iLocal_262, 15, 0f, 0f, 0f, 0f, 0, 0, 0, 1))
			{
				bVar0 = false;
			}
			if (!func_313(&iLocal_282, 6, 0f, 0f, 0f, 0f, 0, 0, 0, 1))
			{
				bVar0 = false;
			}
			if (!func_313(&iLocal_302, 16, 0f, 0f, 0f, 0f, 0, -2040275819, 0, 1))
			{
				bVar0 = false;
			}
			if (!func_313(&iLocal_322, 17, 0f, 0f, 0f, 0f, 0, 0, 0, 1))
			{
				bVar0 = false;
			}
			if (!func_313(&iLocal_342, 11, 0f, 0f, 0f, 0f, 0, 0, 0, 1))
			{
				bVar0 = false;
			}
			if (!func_313(&iLocal_362, 19, 0f, 0f, 0f, 0f, 0, 0, 0, 1))
			{
				bVar0 = false;
			}
			if (!func_313(&iLocal_382, 22, 0f, 0f, 0f, 0f, 0, 0, 0, 1))
			{
				bVar0 = false;
			}
			if (!func_313(&iLocal_402, 20, 0f, 0f, 0f, 0f, 0, 0, 0, 1))
			{
				bVar0 = false;
			}
			if (!func_313(&iLocal_422, 4, 0f, 0f, 0f, 0f, 0, 0, 0, 1))
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				*uParam0++;
			}
			break;
		case 1:
			return true;
	}
	return false;
}

void func_839()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_1456();
	func_1457();
	func_1458();
	func_1459();
	func_1460();
	__LIB_1__::func_848();
	__LIB_0__::func_376();
}

void func_840(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	func_1463(iParam0, 1, 1, -142743235, 1);
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

void func_875()
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
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_1495(&uVar4, &iVar1, &iVar2, &iVar3)))
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

Vector3 func_882(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
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
		bVar10 = func_1509();
		if (VOLUME::_DOES_VOLUME_EXIST(bVar10))
		{
		}
	}
	if (!func_1510(Global_1310720.f_21))
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
				if (__LIB_12__::func_995(vVar7, iVar0, iVar1, iParam5, iParam6, bVar14, bVar10, bParam9, bParam13))
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

void func_939(int* iParam0)
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
					func_1163(iVar1[iVar0], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*iParam0, 3f, 3f, 0f), ENTITY::GET_ENTITY_HEADING(*iParam0), 2, 1073741824 /* Float: 2f */);
				}
			}
		}
		iVar0++;
	}
}

int func_971(var uParam0, int iParam1, int iParam2)
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
		return func_971(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

void func_1002(int iParam0)
{
	if (!__LIB_0__::func_5(iParam0))
	{
		return;
	}
	__LIB_12__::func_969(iParam0, 1, 1);
	__LIB_11__::func_14(iParam0, 1, 1, 1, 32);
	__LIB_4__::func_683(iParam0, 1);
	__LIB_1__::func_242(Global_1347702[iParam0 /*49*/].f_15, 0);
	__LIB_8__::func_975(Global_1347702[iParam0 /*49*/].f_15, -15);
	__LIB_1__::func_532(Global_1347702[iParam0 /*49*/].f_15, 0);
	__LIB_7__::func_448(Global_1347702[iParam0 /*49*/].f_15, 0);
	__LIB_11__::func_992(iParam0, 0f);
	__LIB_11__::func_993(iParam0, 0f);
	Global_40.f_490.f_402[iParam0] = 0;
}

void func_1072(var uParam0)
{
	if (__LIB_13__::func_23(uParam0, "RDTC3_RSC2"))
	{
		if (!__LIB_0__::func_27(iLocal_1672, 16) && !__LIB_0__::func_27(iLocal_1672, 32))
		{
			if (!__LIB_0__::func_27(iLocal_1672, 8))
			{
				if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_348) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_348, false)) && ANIMSCENE::_0x8D81E7824B7753F7(uParam0->f_348, "RDTC3_RSC2_P1A1_T02_Shot_1", 1))
				{
					func_1678(&uLocal_1641, "RDCH31_U_SNEAK", "RDCH31_U_TNT", __LIB_0__::func_342(), 2, 0, 1, -1, -1);
					__LIB_0__::func_88(uParam0, 2);
					__LIB_1__::func_683(&iLocal_1672, 8);
				}
			}
			else if (__LIB_13__::func_567(&uLocal_1641))
			{
				if (__LIB_8__::func_349(&uLocal_1641))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_348, "dynamite_bool", false, false);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_348, "loop_bool", true, false);
					__LIB_1__::func_683(&iLocal_1672, 16);
					func_310(&iLocal_1675, 8);
					func_308(&iLocal_1675, 4);
					TELEMETRY::_TELEMETRY_MISSION_ILO_OPTION(joaat("INPUT_INTERACT_LOCKON_POS"), "RDCH31_U_SNEAK");
					__LIB_12__::func_677(uParam0, 512, 1);
					__LIB_12__::func_677(uParam0, 2, 1);
				}
				else if (__LIB_8__::func_350(&uLocal_1641))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_348, "dynamite_bool", true, false);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_348, "loop_bool", true, false);
					UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_RDCH3_DYNAMITE"), true);
					__LIB_1__::func_683(&iLocal_1672, 32);
					func_310(&iLocal_1675, 4);
					func_308(&iLocal_1675, 8);
					TELEMETRY::_TELEMETRY_MISSION_ILO_OPTION(joaat("INPUT_INTERACT_LOCKON_NEG"), "RDCH31_U_TNT");
					__LIB_12__::func_677(uParam0, 512, 1);
					__LIB_12__::func_677(uParam0, 2, 1);
				}
			}
		}
		else
		{
			__LIB_8__::func_361(&uLocal_1641);
		}
	}
	else if (__LIB_13__::func_23(uParam0, "RDTC3_RSC4"))
	{
		if (!__LIB_0__::func_27(iLocal_1672, 128) && !__LIB_0__::func_27(iLocal_1672, 256))
		{
			if (!__LIB_0__::func_27(iLocal_1672, 64))
			{
				if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_348) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_348, false)) && ANIMSCENE::_0x8D81E7824B7753F7(uParam0->f_348, "RDTC3_RSC4_P1A1_T01_Shot_2", 1))
				{
					func_1678(&uLocal_1641, "GREET_NEG", "GREET_POS", __LIB_0__::func_342(), 0, 0, 1, -1, -1);
					__LIB_0__::func_88(uParam0, 2);
					__LIB_1__::func_683(&iLocal_1672, 64);
				}
			}
			else if (__LIB_13__::func_567(&uLocal_1641))
			{
				if (__LIB_8__::func_349(&uLocal_1641))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_348, "accept_refuse", false, false);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_348, "loop_bool", true, false);
					__LIB_1__::func_683(&iLocal_1672, 256);
					__LIB_12__::func_677(uParam0, 512, 1);
					__LIB_12__::func_677(uParam0, 2, 1);
				}
				else if (__LIB_8__::func_350(&uLocal_1641))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_348, "accept_refuse", true, false);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_348, "loop_bool", true, false);
					__LIB_1__::func_683(&iLocal_1672, 128);
					__LIB_12__::func_677(uParam0, 512, 1);
					__LIB_12__::func_677(uParam0, 2, 1);
				}
			}
		}
		else
		{
			__LIB_8__::func_361(&uLocal_1641);
			if (!__LIB_0__::func_27(iLocal_1670, 4096))
			{
				if (!__LIB_0__::func_27(iLocal_1670, 1024))
				{
					CAM::_0x1B3C2D961F5FC0E1("script@story@dutch3@returntobeavers");
					TASK::REQUEST_WAYPOINT_RECORDING("dutch3_cme_river");
					TASK::REQUEST_WAYPOINT_RECORDING("dutch3_cme_annesburg");
					if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1240[32]))
					{
						PATHFIND::_0xC1799FAFD2FDF52B(iLocal_1240[32], 0, 0, 0);
						PATHFIND::_0xE5EF9DE716FF737E(iLocal_1240[32], 0, 1);
						POPULATION::_0x18262CAFEBB5FBE1(iLocal_1240[32], 0, 0, 0, -1, -1, 0);
						POPULATION::_0xB56D41A694E42E86(iLocal_1240[32], 0, 0, 0, -1, -1, 0);
						MISC::_0x2FCD528A397E5C88(iLocal_1240[32], 2442122);
					}
					__LIB_1__::func_683(&iLocal_1670, 1024);
				}
			}
		}
	}
}

int func_1080(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
	if (func_1690(*iParam0, iParam1, *iParam2, bParam3, iParam4))
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

bool func_1083(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	char cVar0[32];
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	if (fParam7 > (fParam3 + 5f))
	{
		return false;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		MISC::_0xE98D55C5983F2509(*iParam0);
		bVar4 = __LIB_0__::func_27(iParam4, 32);
		__LIB_12__::func_985(iParam1, uParam2, 0);
		iVar5 = __LIB_13__::func_711(*iParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*iParam0, 178, false);
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
			EVENT::_0xBB1E41DD3D3C6250(*iParam0, "IloGeneralEvents", 2);
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
		if (MISC::_0x870708A6E147A9AD(*iParam0, &cVar0, fParam3, fParam3, iVar6, iParam1->f_7, iParam1->f_8, iVar5, 0, iParam1->f_6))
		{
			if (iParam6 == 2)
			{
				iParam6 = __LIB_3__::func_101(iParam0);
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
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*iParam0, iParam6);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5) && iParam6 == 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*iParam0, MISC::GET_HASH_KEY(sParam5));
				}
				else if (iParam6 != 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*iParam0, iParam6);
				}
			}
			PED::SET_PED_CONFIG_FLAG(*iParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(*iParam0, 178, false);
			PED::SET_PED_CONFIG_FLAG(*iParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(*iParam0, 301, false);
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
				PED::SET_PED_CONFIG_FLAG(*iParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(*iParam0, 331, false);
				PED::SET_PED_CONFIG_FLAG(*iParam0, 493, true);
			}
			else
			{
				PED::SET_PED_CONFIG_FLAG(*iParam0, 315, true);
				PED::SET_PED_CONFIG_FLAG(*iParam0, 493, false);
			}
			if (__LIB_0__::func_27(iParam4, 2) || __LIB_0__::func_27(iParam4, 16))
			{
				__LIB_1__::func_488(*iParam0, 1, 1);
			}
			else
			{
				__LIB_1__::func_488(*iParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

bool func_1090(int iParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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
	bVar10 = PED::IS_PED_INJURED(*iParam0);
	bVar11 = (((PED::_IS_PED_CARRYING(Global_35) || __LIB_2__::func_365(Global_35)) || __LIB_1__::func_869(Global_35)) || __LIB_2__::func_366(Global_35));
	fVar12 = -1f;
	if (__LIB_0__::func_899(&(iParam1->f_13)))
	{
		fVar12 = __LIB_1__::func_583(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((uParam4[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = (uParam4[iVar0 /*17*/])->f_8;
		}
		bVar4 = __LIB_0__::func_139((uParam4[iVar0 /*17*/])->f_6);
		__LIB_13__::func_713(*iParam0, uParam4[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (__LIB_2__::func_475(*iParam0, iParam1, uParam4[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
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
						__LIB_12__::func_985(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
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
							__LIB_6__::func_750(iParam1, uParam4, iParam0, fParam3, sParam9);
							bVar13 = MISC::IS_STRING_NULL_OR_EMPTY(sParam9);
							__LIB_10__::func_518(iParam1, uParam4, iParam0, bVar13, sParam9, fParam2);
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
						__LIB_2__::func_259(&(iParam1->f_18));
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
		__LIB_1__::func_501(iParam1, fParam2);
	}
	return bVar5;
}

bool func_1161(int iParam0, vector3 vParam1, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)
{
	if (!__LIB_0__::func_49(iParam0))
	{
		return false;
	}
	switch (Global_1360165[iParam0 /*1157*/].f_3)
	{
		case 0:
			if (!SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("DEF_COMP_BRAIN")))
			{
				SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(joaat("DEF_COMP_BRAIN"));
			}
			Global_1360165[iParam0 /*1157*/].f_3 = 1;
		case 1:
			if (!SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("DEF_COMP_BRAIN")))
			{
				return false;
			}
			if (Global_1359489.f_9 != -1)
			{
				return false;
			}
			Global_1359489.f_9 = iParam0;
			if (iParam4 == 0)
			{
				if (iParam9 != -1)
				{
					iParam4 = func_664(iParam0, iParam9, bParam7, 1);
				}
				else if ((Global_1360165[iParam0 /*1157*/].f_4.f_2 != 0 && Global_1360165[iParam0 /*1157*/].f_4.f_2 == Global_40.f_4942[iParam0 /*60*/].f_59) && (__LIB_0__::func_702(Global_1360165[iParam0 /*1157*/].f_4.f_2) || __LIB_1__::func_44(Global_1360165[iParam0 /*1157*/].f_4.f_2)))
				{
					iParam4 = Global_1360165[iParam0 /*1157*/].f_4.f_1;
				}
				else
				{
					iParam4 = func_664(iParam0, Global_40.f_4283, bParam7, 1);
				}
				if (Global_1360165[iParam0 /*1157*/].f_63 != iParam4 && __LIB_0__::func_228(Global_1360165[iParam0 /*1157*/].f_63))
				{
					if (!__LIB_0__::func_959(iParam0, 0))
					{
						__LIB_0__::func_288(iParam0, 25, 0);
					}
				}
			}
			Global_1360165[iParam0 /*1157*/].f_4 = { __LIB_0__::func_229(iParam0, iParam4, vParam1, iParam5, bParam6, bParam8, Global_40.f_4942[iParam0 /*60*/].f_59, bParam11) };
			if (!bParam6)
			{
				__LIB_0__::func_290(iParam0, 44, 1);
			}
			Global_1360165[iParam0 /*1157*/].f_3 = 2;
		case 2:
			if (!__LIB_0__::func_272(__LIB_0__::func_271(iParam0), 0))
			{
				return false;
			}
			if (iParam5 && iParam10)
			{
				if (!__LIB_0__::func_272(__LIB_0__::func_177(iParam0), 0))
				{
					return false;
				}
			}
			Global_1360165[iParam0 /*1157*/].f_3 = 3;
		case 3:
			return true;
		default:
			break;
	}
	return false;
}

void func_1163(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_1163(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_1163(iVar2, vParam1, fParam4, iParam5, iParam6);
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

int func_1172(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, float fParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17)
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
				iVar0 = func_1776(iParam1, bParam3, bParam8, iParam9, iParam10, iParam11, fParam12, bParam7, bParam15, bParam16, iParam17);
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

bool func_1174(var uParam0, int iParam1, int iParam2)
{
	if (!__LIB_1__::func_220(iParam2))
	{
		return false;
	}
	if (__LIB_2__::func_934(iParam1, 1))
	{
		*uParam0 = __LIB_2__::func_965(iParam1, 1, 0, 0, 1, 1);
	}
	if (__LIB_0__::func_272(*uParam0, 1))
	{
		return true;
	}
	return false;
}

void func_1203(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
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

void func_1205(var uParam0)
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
			func_1163(iVar1, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_1163(iVar3, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_1206(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if ((__LIB_0__::func_84(uParam0, 268435456) && !__LIB_0__::func_86(__LIB_12__::func_720(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { __LIB_12__::func_720(uParam0) };
			func_1163(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

int func_1353(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0)))
		{
			return 1;
		}
	}
	return 0;
}

int func_1354(vector3 vParam0)
{
	if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vParam0)))
	{
		return 1;
	}
	return 0;
}

bool func_1357(int iParam0, int iParam1)
{
	vector3 vVar0;
	if (!PED::IS_PED_INJURED(*iParam0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(*iParam0, false, false) };
		if (PED::IS_PED_BEING_STEALTH_KILLED(*iParam0))
		{
			return false;
		}
		if (__LIB_12__::func_626(*iParam0, 0, &uLocal_1200, &uLocal_1228, 0, 0))
		{
			return true;
		}
		if (__LIB_9__::func_716(*iParam0, &uLocal_1200, &uLocal_1228, 0))
		{
			return true;
		}
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (MISC::IS_BULLET_IN_AREA(vVar0, 10f, true))
		{
			return true;
		}
		if (MISC::IS_BULLET_IN_AREA(vVar0, 10f, false))
		{
			return true;
		}
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(*iParam0, iParam1))
		{
			return true;
		}
		if (MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(vVar0, joaat("WEAPON_BOW"), 2f, true))
		{
			if (!WEAPON::_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(*iParam0, joaat("WEAPON_BOW"), 0))
			{
				return true;
			}
		}
		if (MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(vVar0, joaat("WEAPON_BOW_IMPROVED"), 2f, true))
		{
			if (!WEAPON::_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(*iParam0, joaat("WEAPON_BOW_IMPROVED"), 0))
			{
				return true;
			}
		}
		if (MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(vVar0, joaat("WEAPON_THROWN_THROWING_KNIVES"), 2f, true))
		{
			if (!WEAPON::_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(*iParam0, joaat("WEAPON_THROWN_THROWING_KNIVES"), 0))
			{
				return true;
			}
		}
		if (MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(vVar0, joaat("WEAPON_THROWN_DYNAMITE"), 5f, true))
		{
			return true;
		}
		if (MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(vVar0, joaat("WEAPON_THROWN_TOMAHAWK"), 2f, true) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(vVar0, joaat("WEAPON_THROWN_TOMAHAWK"), 2f, false))
		{
			if (!WEAPON::_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(*iParam0, joaat("WEAPON_THROWN_TOMAHAWK"), 0))
			{
				return true;
			}
		}
		if (FIRE::IS_ENTITY_ON_FIRE(*iParam0) || __LIB_0__::func_27(iParam0->f_9, 2))
		{
			return true;
		}
		if (PED::IS_PED_IN_COMBAT(*iParam0, 0) || PED::_0x77525BBF433F2CD6(*iParam0))
		{
			if (__LIB_0__::func_27(iParam0->f_9, 33554432))
			{
				return false;
			}
			return true;
		}
	}
	return false;
}

bool func_1365(var uParam0)
{
	if (((((ENTITY::IS_ENTITY_DEAD(*uParam0) || PED::IS_PED_INJURED(*uParam0)) || PED::IS_PED_DEAD_OR_DYING(*uParam0, true)) || PED::IS_PED_FATALLY_INJURED(*uParam0)) || PED::_IS_PED_HOGTIED(*uParam0)) || __LIB_0__::func_27(uParam0->f_9, 1))
	{
		return true;
	}
	return false;
}

bool func_1366(int iParam0)
{
	return iLocal_1292[iParam0];
}

void func_1386(int iParam0, vector3 vParam1)
{
	struct<7> Var0;
	vector3 vVar8;
	Var0.f_5 = 1073741824;
	Var0.f_6 = 1;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if ((PED::IS_PED_ON_MOUNT(iParam0) || PED::IS_PED_IN_ANY_VEHICLE(iParam0, false)) || ENTITY::DOES_ENTITY_EXIST(PED::_GET_TRANSPORT_PED_IS_SEATED_ON(iParam0)))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 1920417248, true) != 1)
			{
				vVar8 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam0, vParam1) };
				Var0.f_3 = iParam0;
				Var0.f_4 = PED::_GET_TRANSPORT_PED_IS_SEATED_ON(iParam0);
				if (vVar8.x < 0f)
				{
					Var0.f_6 = 131072;
				}
				else
				{
					Var0.f_6 = 262144;
				}
				AITRANSPORT::TASK_EXIT_TRANSPORT(&Var0);
			}
		}
	}
}

bool func_1387(var uParam0)
{
	if ((((ENTITY::IS_ENTITY_DEAD(*uParam0) || PED::IS_PED_INJURED(*uParam0)) || PED::IS_PED_DEAD_OR_DYING(*uParam0, true)) || PED::IS_PED_FATALLY_INJURED(*uParam0)) || __LIB_0__::func_27(uParam0->f_9, 1))
	{
		return true;
	}
	return false;
}

bool func_1388(int iParam0, float fParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		vVar3 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (((PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID())) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0, false)) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0))
			{
				PLAYER::_0x3DAABE78A23694BC(PLAYER::PLAYER_ID(), &vVar6);
				GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(vVar3, &uVar1, &uVar2);
				vVar12 = { 0.5f, 0.5f, 0f };
				vVar9 = { uVar1, uVar2, 0f };
				if (__LIB_1__::func_410(vVar6, vVar3, fParam1, 1))
				{
					iVar0 = 1;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar9, vVar12, false) <= 0.125f)
				{
					iVar0 = 1;
				}
			}
		}
	}
	return iVar0;
}

void func_1389(int iParam0)
{
	if (!PED::IS_PED_INJURED(*iParam0) && !PED::IS_PED_INJURED(Global_35))
	{
		if (!__LIB_0__::func_899(&uLocal_1197))
		{
			__LIB_2__::func_259(&uLocal_1197);
		}
		if (!__LIB_0__::func_27(iParam0->f_9, 256))
		{
			if (PED::_GET_PED_CROUCH_MOVEMENT(Global_35) == 1 && __LIB_1__::func_583(&uLocal_1197) > 6f)
			{
				PED::_SET_PED_CROUCH_MOVEMENT(*iParam0, true, 0, false);
				__LIB_1__::func_683(&(iParam0->f_9), 256);
				__LIB_2__::func_259(&uLocal_1197);
			}
		}
		else if (PED::_GET_PED_CROUCH_MOVEMENT(Global_35) == 0 && __LIB_1__::func_583(&uLocal_1197) > 6f)
		{
			PED::_SET_PED_CROUCH_MOVEMENT(*iParam0, false, 0, false);
			__LIB_1__::func_681(&(iParam0->f_9), 256);
			__LIB_2__::func_259(&uLocal_1197);
		}
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), vLocal_96, true) < (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(*iParam0, true, false), vLocal_96, true) - 5f))
		{
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(*iParam0, 2f);
		}
	}
}

void func_1390(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (WEAPON::IS_WEAPON_VALID(iParam1))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(iParam0, iParam1, false, 0, false, false);
		}
		if (iParam2 != 0 && WEAPON::IS_WEAPON_VALID(iParam1))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(iParam0, iParam2, false, 1, false, false);
		}
		TASK::TASK_SWAP_WEAPON(iParam0, 1, iParam3, 0, 0);
	}
}

int func_1392(var uParam0)
{
	CAM::_0x8910C24B7E0046EC();
	if (!__LIB_0__::func_27(Local_142.f_9, 1048576) && iLocal_121 > 1)
	{
		__LIB_10__::func_979(Local_142, __LIB_1__::func_464(7, 0), 10f, 1, 0, 4);
		__LIB_1__::func_683(&(Local_142.f_9), 1048576);
	}
	else
	{
		if (iLocal_121 > 1 && iLocal_121 < 4)
		{
			if (!__LIB_0__::func_139(iLocal_1232[2]) && !__LIB_0__::func_139(iLocal_1232[1]))
			{
				if (__LIB_10__::func_896(PLAYER::PLAYER_ID(), Local_142) && __LIB_0__::func_48(Global_35, Local_142, 13f, 1))
				{
					iLocal_1232[1] = __LIB_4__::func_450("RDCH31_U_CKILL", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
					iLocal_1232[2] = __LIB_4__::func_450("RDCH31_U_PKILL", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
					if (__LIB_0__::func_139(iLocal_1232[2]) && __LIB_0__::func_139(iLocal_1232[1]))
					{
						__LIB_9__::func_332(&(iLocal_1232[2]), Local_142);
						__LIB_9__::func_332(&(iLocal_1232[1]), Local_142);
					}
				}
			}
			else if ((__LIB_0__::func_139(iLocal_1232[2]) && __LIB_0__::func_572(iLocal_1232[2], 0)) && __LIB_1__::func_732(iLocal_1232[2], 1))
			{
				__LIB_13__::func_520(&iLocal_1232);
				__LIB_8__::func_771(Local_142, 1, 1, 1);
				iLocal_121 = 5;
				__LIB_2__::func_259(&uLocal_1191);
			}
			else if ((__LIB_0__::func_139(iLocal_1232[1]) && __LIB_0__::func_572(iLocal_1232[1], 0)) && __LIB_1__::func_732(iLocal_1232[1], 1))
			{
				__LIB_13__::func_520(&iLocal_1232);
				__LIB_8__::func_771(Local_142, 1, 1, 1);
				iLocal_121 = 4;
			}
		}
		if (__LIB_0__::func_139(iLocal_1232[2]) || __LIB_0__::func_139(iLocal_1232[1]))
		{
			if (!__LIB_10__::func_896(PLAYER::PLAYER_ID(), Local_142))
			{
				__LIB_13__::func_520(&iLocal_1232);
			}
		}
	}
	switch (iLocal_121)
	{
		case 0:
			if ((__LIB_0__::func_665(Global_35, Local_503[1 /*20*/], 1, 1) < 13f && __LIB_0__::func_665(Global_35, Local_142, 1, 1) < 7f) || (__LIB_0__::func_665(Local_142, Local_503[1 /*20*/], 1, 1) < 13f && __LIB_0__::func_665(Global_35, Local_142, 1, 1) < 7f))
			{
				if (!__LIB_5__::func_463())
				{
					__LIB_12__::func_876(uParam0, "RDCH3_STEG02", 0);
					iLocal_121++;
				}
			}
			break;
		case 1:
			if (!__LIB_5__::func_463())
			{
				__LIB_12__::func_876(uParam0, "RDCH3_COVER", 0);
				iLocal_121++;
				__LIB_2__::func_259(&uLocal_1191);
			}
			break;
		case 2:
			if (__LIB_1__::func_583(&uLocal_1191) > 4f)
			{
				if (!__LIB_5__::func_463())
				{
					__LIB_12__::func_876(uParam0, "RDCH3_STEG02GO", 0);
					iLocal_121++;
					__LIB_2__::func_259(&uLocal_1191);
				}
			}
			break;
		case 3:
			if (__LIB_1__::func_583(&uLocal_1191) > 4f)
			{
				if (!__LIB_5__::func_463())
				{
					__LIB_12__::func_876(uParam0, "RDCH3_2NDDAWD", 0);
					iLocal_121++;
				}
			}
			break;
		case 4:
			if (!__LIB_2__::func_1(Local_503[1 /*20*/], 0, 1))
			{
				if (!__LIB_5__::func_463())
				{
					__LIB_12__::func_876(uParam0, "RDCH3_CPOSTKILL", 0);
					__LIB_8__::func_771(Local_142, 1, 1, 1);
					iLocal_121 = 10;
				}
			}
			break;
		case 5:
			if (!__LIB_2__::func_1(Local_503[1 /*20*/], 0, 1))
			{
				if (!__LIB_5__::func_463())
				{
					__LIB_12__::func_876(uParam0, "RDCH3_STEG01F", 0);
					__LIB_8__::func_771(Local_142, 1, 1, 1);
					iLocal_121 = 10;
				}
			}
			else if (__LIB_1__::func_583(&uLocal_1191) > 5f)
			{
				iLocal_121 = 3;
			}
			break;
		case 10:
			break;
	}
	return 0;
}

int func_1394(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (func_1365(iParam0[iVar0 /*20*/]))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_1407(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false) && PED::IS_PED_IN_ANY_VEHICLE(iParam1, false))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
				iVar1 = PED::GET_VEHICLE_PED_IS_IN(iParam1, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (iVar0 == iVar1)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

void func_1456()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_2008(0);
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
	func_2008(1);
}

void func_1457()
{
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_716(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_1458()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_2011(0);
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
	func_2011(1);
}

void func_1459()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_1__::func_432(15000, 0, 0, 0, 1);
			func_2011(0);
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
	func_2011(1);
}

void func_1460()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_716(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_716(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_1463(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_1463(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
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

int func_1463(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			func_1463(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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
	__LIB_13__::func_579(iParam0, iParam1);
	return 1;
}

int func_1495(var uParam0, int iParam1, int iParam2, int iParam3)
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
	iVar11 = (func_2040(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_952(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_716(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	__LIB_1__::func_432(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

int func_1509()
{
	if (__LIB_0__::func_28())
	{
		if (!__LIB_1__::func_185(3))
		{
			return __LIB_0__::func_559(43);
		}
		if (__LIB_1__::func_185(38) && !__LIB_1__::func_185(43))
		{
			return func_2047(8);
		}
	}
	return 0;
}

bool func_1510(int iParam0)
{
	if (!__LIB_0__::func_20(iParam0))
	{
		return false;
	}
	return ((Global_1888801[iParam0 /*35*/].f_20 == 1 || Global_1888801[iParam0 /*35*/].f_20 == 2) && !func_2048(iParam0));
}

void func_1678(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, char* sParam7, int iParam8)
{
	if (!uParam0->f_3)
	{
		uParam0->f_13 = sParam7;
		uParam0->f_14 = iParam8;
		if (uParam0->f_13 != -1)
		{
			uParam0->f_7 = MISC::_CREATE_VAR_STRING(2, sParam1, sParam7);
		}
		else
		{
			uParam0->f_7 = sParam1;
		}
		uParam0->f_8 = sParam2;
		uParam0->f_5 = __LIB_4__::func_450(uParam0->f_7, joaat("INPUT_INTERACT_LOCKON_POS"), 5, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("MEDIUM_TIMED_EVENT"), 0);
		uParam0->f_6 = __LIB_4__::func_450(uParam0->f_8, joaat("INPUT_INTERACT_LOCKON_NEG"), 5, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("MEDIUM_TIMED_EVENT"), 0);
		if (uParam0->f_14 < uParam0->f_13)
		{
			__LIB_5__::func_793(uParam0->f_5, 1);
		}
		__LIB_1__::func_522(uParam0->f_5, 17, 1, 1);
		__LIB_1__::func_522(uParam0->f_6, 17, 1, 1);
		__LIB_0__::func_633(uParam0->f_5, 6, 1);
		__LIB_0__::func_633(uParam0->f_6, 6, 1);
		*uParam0 = 0;
		uParam0->f_1 = iParam4;
		uParam0->f_10 = iParam3;
		if (iParam5 == 0)
		{
			uParam0->f_11 = MISC::GET_GAME_TIMER();
			uParam0->f_9 = MISC::GET_GAME_TIMER() + 10000;
			uParam0->f_12 = 0;
		}
		else
		{
			uParam0->f_11 = MISC::GET_GAME_TIMER();
			uParam0->f_9 = (MISC::GET_GAME_TIMER() + BUILTIN::ROUND((BUILTIN::TO_FLOAT(iParam5) / 2f)));
			uParam0->f_12 = iParam5;
		}
		uParam0->f_16 = 0f;
		uParam0->f_17 = 0f;
		uParam0->f_2 = iParam6;
		uParam0->f_4 = 0;
		uParam0->f_15 = HUD::_UIPROMPT_SET_REGISTER_HORIZONTAL_ORIENTATION();
		uParam0->f_3 = 1;
		if (uParam0->f_2 != 0)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("MissionChoice");
		}
		AUDIO::_0x6339C1EA3979B5F7("make_decision", "player_decision_moment_scenes");
	}
}

int func_1690(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
	return func_2170(iVar0, iParam1, iParam2, bParam3, iParam4);
}

int func_1776(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, float fParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)
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
				func_1163(Global_1360165[iParam0 /*1157*/].f_124, vVar0, fParam6, 2, 1073741824 /* Float: 2f */);
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
			__LIB_1__::func_766(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		}
		else
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		}
		return;
	}
	iVar0 = func_2235(6291456, 0);
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

void func_2008(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (bParam0)
	{
		func_716(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_716(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_716(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_2383(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_840(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_1463(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_2388(Var0);
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

void func_2011(bool bParam0)
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
		func_716(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_716(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_716(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_716(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_716(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_716(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_716(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_716(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_716(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_716(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_716(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_1463(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_1463(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_1463(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_1463(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_1463(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_1463(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_1463(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_1463(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_1463(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_1463(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_1463(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
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

int func_2040(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
							iVar49 = (iVar49 + func_2040(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_2040(iVar63, -915411861, 1, 0, 0));
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

int func_2047(int iParam0)
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
			break;
		case 2:
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
			break;
		case 3:
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
			break;
		case 4:
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
			break;
		case 7:
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
			break;
		case 6:
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
			break;
		case 5:
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
			break;
		case 8:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GUARMA");
			VOLUME::_0xBCE668AAF83608BE(iVar0, 2410.933f, -7578.265f, 50f, 0f, 0f, 0f, 2000f, 2000f, 890f);
			VOLUME::_0xBCE668AAF83608BE(iVar0, 2388.016f, -4563.885f, 50f, 0f, 0f, 0f, 815f, 500f, 800f);
			break;
		case 9:
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
bool func_2048(int iParam0)
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

int func_2170(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
			func_2170(iParam0, iParam1, __LIB_1__::func_614(iParam1, 0, 0), bParam3, iParam4);
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

int func_2235(int iParam0, int iParam1)
{
	var uVar0;
	return func_2472(&uVar0, iParam0, iParam1);
}

void func_2383(int iParam0)
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
	func_1463(iParam0, 1, 1, -142743235, 1);
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
		func_1463(uVar18[iVar36], 1, 1, -142743235, 1);
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

void func_2388(struct<6> Param0)
{
	if (!func_2574(Param0.f_4, 1))
	{
	}
	if (!func_2574(Param0, 1))
	{
	}
	if (!func_2574(Param0.f_2, 1))
	{
	}
	if (!func_2574(Param0.f_5, 1))
	{
	}
	if (!func_2574(Param0.f_3, 1))
	{
	}
	if (!func_2574(Param0.f_1, 1))
	{
	}
}

int func_2472(var uParam0, int iParam1, int iParam2)
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
		return func_2472(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

bool func_2574(int iParam0, int iParam1)
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
				if (func_2574(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_2574(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_2574(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_2574(iVar21, 1))
				{
				}
			}
		}
		__LIB_1__::func_712();
		return true;
	}
	return false;
}

