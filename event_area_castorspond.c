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
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	struct<21> Local_40[4];
	struct<52> Local_125[4];
	int iLocal_334 = 0;
	int iLocal_335 = 0;
	struct<44> Local_336 = { 0, 0, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 1040187392, 1040187392, -1, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1072064102, 1072064102, -1082130432 } ;
	var uLocal_380 = -1082130432;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 1065353216;
	var uLocal_385 = 1;
	struct<691> Local_386 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 9, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 2, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 10, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 0, 0, 0, 41788943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623901053, 26 } ;
	var uLocal_1077 = 0;
	var uLocal_1078 = 0;
	var uLocal_1079 = 0;
	var uLocal_1080 = 0;
	var uLocal_1081 = 0;
	var uLocal_1082 = 0;
	var uLocal_1083 = 0;
	var uLocal_1084 = 0;
	var uLocal_1085 = 0;
	var uLocal_1086 = -1;
	var uLocal_1087 = 1;
	var uLocal_1088 = 0;
	var uLocal_1089 = 0;
	var uLocal_1090 = 0;
	var uLocal_1091 = 0;
	var uLocal_1092 = 0;
	var uLocal_1093 = 0;
	var uLocal_1094 = 0;
	var uLocal_1095 = 0;
	var uLocal_1096 = 0;
	var uLocal_1097 = 0;
	var uLocal_1098 = -1;
	var uLocal_1099 = 1;
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
	var uLocal_1110 = -1;
	var uLocal_1111 = 1;
	var uLocal_1112 = 0;
	var uLocal_1113 = 0;
	var uLocal_1114 = 0;
	var uLocal_1115 = 0;
	var uLocal_1116 = 0;
	var uLocal_1117 = 0;
	var uLocal_1118 = 0;
	var uLocal_1119 = 0;
	var uLocal_1120 = 0;
	var uLocal_1121 = 0;
	var uLocal_1122 = -1;
	var uLocal_1123 = 1;
	var uLocal_1124 = 0;
	var uLocal_1125 = 0;
	var uLocal_1126 = 0;
	var uLocal_1127 = 0;
	var uLocal_1128 = 0;
	var uLocal_1129 = 0;
	var uLocal_1130 = 0;
	var uLocal_1131 = 0;
	var uLocal_1132 = 0;
	var uLocal_1133 = 0;
	var uLocal_1134 = -1;
	var uLocal_1135 = 1;
	var uLocal_1136 = 0;
	var uLocal_1137 = 0;
	var uLocal_1138 = 0;
	var uLocal_1139 = 0;
	var uLocal_1140 = 0;
	var uLocal_1141 = 0;
	var uLocal_1142 = 0;
	var uLocal_1143 = 0;
	var uLocal_1144 = 0;
	var uLocal_1145 = 0;
	var uLocal_1146 = -1;
	var uLocal_1147 = 1;
	var uLocal_1148 = 0;
	var uLocal_1149 = 0;
	var uLocal_1150 = 0;
	var uLocal_1151 = 0;
	var uLocal_1152 = 0;
	var uLocal_1153 = 0;
	var uLocal_1154 = 0;
	var uLocal_1155 = 0;
	var uLocal_1156 = 0;
	var uLocal_1157 = 0;
	var uLocal_1158 = -1;
	var uLocal_1159 = 1;
	var uLocal_1160 = 0;
	var uLocal_1161 = 0;
	var uLocal_1162 = 0;
	var uLocal_1163 = 0;
	var uLocal_1164 = 0;
	var uLocal_1165 = 0;
	var uLocal_1166 = 0;
	var uLocal_1167 = 0;
	var uLocal_1168 = 0;
	var uLocal_1169 = 0;
	var uLocal_1170 = -1;
	var uLocal_1171 = 1;
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
	var uLocal_1182 = -1;
	var uLocal_1183 = 1;
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
	var uLocal_1194 = -1;
	var uLocal_1195 = 1;
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
	var uLocal_1206 = -1;
	var uLocal_1207 = 1;
	var uLocal_1208 = 0;
	var uLocal_1209 = 0;
	var uLocal_1210 = 0;
	var uLocal_1211 = 0;
	var uLocal_1212 = 0;
	var uLocal_1213 = 0;
	var uLocal_1214 = 0;
	var uLocal_1215 = 0;
	var uLocal_1216 = 0;
	var uLocal_1217 = 0;
	var uLocal_1218 = -1;
	var uLocal_1219 = 1;
	var uLocal_1220 = 0;
	var uLocal_1221 = 0;
	var uLocal_1222 = 0;
	var uLocal_1223 = 0;
	var uLocal_1224 = 0;
	var uLocal_1225 = 0;
	var uLocal_1226 = 0;
	var uLocal_1227 = 0;
	var uLocal_1228 = 0;
	var uLocal_1229 = 0;
	var uLocal_1230 = -1;
	var uLocal_1231 = 1;
	var uLocal_1232 = 0;
	var uLocal_1233 = 0;
	var uLocal_1234 = 0;
	var uLocal_1235 = 0;
	var uLocal_1236 = 0;
	var uLocal_1237 = 0;
	var uLocal_1238 = 0;
	var uLocal_1239 = 0;
	var uLocal_1240 = 0;
	var uLocal_1241 = 0;
	var uLocal_1242 = -1;
	var uLocal_1243 = 1;
	var uLocal_1244 = 0;
	var uLocal_1245 = 0;
	var uLocal_1246 = 0;
	var uLocal_1247 = 0;
	var uLocal_1248 = 0;
	var uLocal_1249 = 0;
	var uLocal_1250 = 0;
	var uLocal_1251 = 0;
	var uLocal_1252 = 0;
	var uLocal_1253 = 0;
	var uLocal_1254 = -1;
	var uLocal_1255 = 1;
	var uLocal_1256 = 0;
	var uLocal_1257 = 0;
	var uLocal_1258 = 0;
	var uLocal_1259 = 0;
	var uLocal_1260 = 0;
	var uLocal_1261 = 0;
	var uLocal_1262 = 0;
	var uLocal_1263 = 0;
	var uLocal_1264 = 0;
	var uLocal_1265 = 0;
	var uLocal_1266 = -1;
	var uLocal_1267 = 1;
	var uLocal_1268 = 0;
	var uLocal_1269 = 0;
	var uLocal_1270 = 0;
	var uLocal_1271 = 0;
	var uLocal_1272 = 0;
	var uLocal_1273 = 0;
	var uLocal_1274 = 0;
	var uLocal_1275 = 0;
	var uLocal_1276 = 0;
	var uLocal_1277 = 0;
	var uLocal_1278 = -1;
	var uLocal_1279 = 1;
	var uLocal_1280 = 0;
	var uLocal_1281 = 0;
	var uLocal_1282 = 0;
	var uLocal_1283 = 0;
	var uLocal_1284 = 0;
	var uLocal_1285 = 0;
	var uLocal_1286 = 0;
	var uLocal_1287 = 0;
	var uLocal_1288 = 0;
	var uLocal_1289 = 0;
	var uLocal_1290 = -1;
	var uLocal_1291 = 1;
	var uLocal_1292 = 0;
	var uLocal_1293 = 0;
	var uLocal_1294 = 0;
	var uLocal_1295 = 0;
	var uLocal_1296 = 0;
	var uLocal_1297 = 0;
	var uLocal_1298 = 0;
	var uLocal_1299 = 0;
	var uLocal_1300 = 0;
	var uLocal_1301 = 0;
	var uLocal_1302 = -1;
	var uLocal_1303 = 1;
	var uLocal_1304 = 0;
	var uLocal_1305 = 0;
	var uLocal_1306 = 0;
	var uLocal_1307 = 0;
	var uLocal_1308 = 0;
	var uLocal_1309 = 0;
	var uLocal_1310 = 0;
	var uLocal_1311 = 0;
	var uLocal_1312 = 0;
	var uLocal_1313 = 0;
	var uLocal_1314 = -1;
	var uLocal_1315 = 1;
	var uLocal_1316 = 0;
	var uLocal_1317 = 0;
	var uLocal_1318 = 0;
	var uLocal_1319 = 0;
	var uLocal_1320 = 0;
	var uLocal_1321 = 0;
	var uLocal_1322 = 0;
	var uLocal_1323 = 0;
	var uLocal_1324 = 0;
	var uLocal_1325 = 0;
	var uLocal_1326 = -1;
	var uLocal_1327 = 1;
	var uLocal_1328 = 0;
	var uLocal_1329 = 0;
	var uLocal_1330 = 0;
	var uLocal_1331 = 0;
	var uLocal_1332 = 0;
	var uLocal_1333 = 0;
	var uLocal_1334 = 0;
	var uLocal_1335 = 0;
	var uLocal_1336 = 0;
	var uLocal_1337 = 0;
	var uLocal_1338 = -1;
	var uLocal_1339 = 1;
	var uLocal_1340 = 0;
	var uLocal_1341 = 0;
	var uLocal_1342 = 0;
	var uLocal_1343 = 0;
	var uLocal_1344 = 0;
	var uLocal_1345 = 0;
	var uLocal_1346 = 0;
	var uLocal_1347 = 0;
	var uLocal_1348 = 0;
	var uLocal_1349 = 0;
	var uLocal_1350 = -1;
	var uLocal_1351 = 1;
	var uLocal_1352 = 0;
	var uLocal_1353 = 0;
	var uLocal_1354 = 0;
	var uLocal_1355 = 0;
	var uLocal_1356 = 0;
	var uLocal_1357 = 0;
	var uLocal_1358 = 0;
	var uLocal_1359 = 0;
	var uLocal_1360 = 0;
	var uLocal_1361 = 0;
	var uLocal_1362 = -1;
	var uLocal_1363 = 1;
	var uLocal_1364 = 0;
	var uLocal_1365 = 0;
	var uLocal_1366 = 0;
	var uLocal_1367 = 0;
	var uLocal_1368 = 0;
	var uLocal_1369 = 0;
	var uLocal_1370 = 0;
	var uLocal_1371 = 0;
	var uLocal_1372 = 0;
	var uLocal_1373 = 0;
	var uLocal_1374 = -1;
	var uLocal_1375 = 1;
	var uLocal_1376 = 0;
	var uLocal_1377 = 0;
	var uLocal_1378 = 0;
	var uLocal_1379 = 0;
	var uLocal_1380 = 0;
	var uLocal_1381 = 0;
	var uLocal_1382 = 0;
	var uLocal_1383 = 0;
	var uLocal_1384 = 0;
	var uLocal_1385 = 0;
	var uLocal_1386 = -1;
	var uLocal_1387 = 1;
	var uLocal_1388 = 0;
	struct<141> Local_1389 = { 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10 } ;
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
	var uLocal_1541 = 0;
	var uLocal_1542 = 0;
	var uLocal_1543 = 0;
	var uLocal_1544 = 0;
	var uLocal_1545 = 1065353216;
	var uLocal_1546 = 1119092736;
	var uLocal_1547 = 1092616192;
	var uLocal_1548 = 1085276160;
	struct<21> Local_1549 = { 0, 0, 0, 3, 30, -1, 0, 0, 0, 3, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 2 } ;
	var uLocal_1570 = 0;
	var uLocal_1571 = 0;
	var uLocal_1572 = 0;
	var uLocal_1573 = 0;
	var uLocal_1574 = 0;
	var uLocal_1575 = 0;
	var uLocal_1576 = 0;
	var uLocal_1577 = 0;
	vector3 vLocal_1578[13] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	struct<7> Local_1618[3];
	int iLocal_1640 = 0;
	int iLocal_1641 = 0;
	int iLocal_1642 = 0;
	int iLocal_1643 = 0;
	int iLocal_1644 = 0;
	var uLocal_1645 = 0;
	float fLocal_1646 = 0f;
	float fLocal_1647 = 0f;
	int iLocal_1648 = 0;
	struct<8> Local_1649[3];
	struct<31> Local_1674 = { 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1048576000, 1048576000, 1193033728, 1092616192, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1705 = 0;
	var uLocal_1706 = 0;
	var uLocal_1707 = 0;
	var uLocal_1708 = 0;
	var uLocal_1709 = 0;
	var uLocal_1710 = 6;
	var uLocal_1711 = 0;
	var uLocal_1712 = 0;
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
	int iLocal_1759[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1768[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	float fLocal_1778[9] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	int iLocal_1788 = 0;
	int iLocal_1789 = 0;
	var uLocal_1790[3] = { 0, 0, 0 };
	int iLocal_1794[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_1805[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1816 = 0;
	int iLocal_1817 = 0;
	int iLocal_1818 = 0;
	int iLocal_1819 = 0;
	var uLocal_1820 = 0;
	int iLocal_1821 = 0;
	int iLocal_1822 = 0;
	var uLocal_1823 = 0;
	var uLocal_1824 = 0;
	var uLocal_1825 = 0;
	var uLocal_1826 = 0;
	var uLocal_1827 = 0;
	var uLocal_1828 = 0;
	var uLocal_1829 = 0;
	var uLocal_1830 = 0;
	var uLocal_1831 = -1;
	var uLocal_1832 = 0;
	var uLocal_1833 = 0;
	var uLocal_1834 = 0;
	var uLocal_1835 = 0;
	var uLocal_1836 = 0;
	var uLocal_1837 = 0;
	var uLocal_1838 = 0;
	var uLocal_1839 = 0;
	var uLocal_1840 = 1097859072;
	var uLocal_1841 = 1000;
	var uLocal_1842 = 1067450368;
	var uLocal_1843 = 5000;
	var uLocal_1844 = 42;
	var uLocal_1845 = 1103626240;
	var uLocal_1846 = 1077936128;
	var uLocal_1847 = 1106247680;
	var uLocal_1848 = 1103101952;
	var uLocal_1849 = 1097859072;
	var uLocal_1850 = 1103626240;
	var uLocal_1851 = 0;
	int iLocal_1852 = 0;
	int iLocal_1853 = 0;
	int iLocal_1854 = 0;
	int iLocal_1855 = 0;
	bool bLocal_1856 = false;
	struct<82> Local_1857 = { 0, 1112014848, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 1, 0, 0, 24 } ;
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
	var uLocal_2010 = 0;
	var uLocal_2011 = 0;
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
	var uLocal_2032 = 0;
	var uLocal_2033 = 0;
	var uLocal_2034 = 0;
	var uLocal_2035 = 0;
	var uLocal_2036 = 0;
	var uLocal_2037 = 0;
	var uLocal_2038 = 0;
	var uLocal_2039 = 0;
	var uLocal_2040 = 0;
	var uLocal_2041 = -1082130432;
	var uLocal_2042 = -1082130432;
	var uLocal_2043 = 1103626240;
	var uLocal_2044 = -1067450368;
	var uLocal_2045 = 1097859072;
	var uLocal_2046 = 1073741824;
	var uLocal_2047 = 4000;
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
	var uLocal_2063 = 0;
	var uLocal_2064 = 0;
	var uLocal_2065 = 0;
	var uLocal_2066 = 0;
	var uLocal_2067 = 0;
	var uLocal_2068 = 0;
	var uLocal_2069 = 1073741824;
	int iLocal_2070 = 0;
	struct<136> Local_2071 = { 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 1109393408, 1101004800, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 1119092736, 1092616192, 1085276160, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0 } ;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
#endregion
void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_27 = 1;
	iLocal_28 = 2;
	iLocal_29 = -1;
	Local_1389.f_136 = 1;
	Local_1389.f_137 = uScriptParam_0;
	Local_1389.f_138 = 64;
	if (__LIB_0__::func_2() != 0)
	{
	}
	else
	{
		func_2();
		__LIB_8__::func_203(Local_1389.f_136);
		return;
	}
	Local_386.f_4 = { -439.9877f, 501.6415f, 97.94789f };
	Local_386.f_7 = { -464.5924f, 469.1017f, 80f };
	Local_386.f_10 = { -387.3216f, 532.1035f, 125f };
	iLocal_1853 = __LIB_0__::func_485();
	func_5(1);
	func_7(4, __LIB_8__::func_215(Local_1389.f_136));
	if (__LIB_7__::func_908(Local_1389.f_136, 33554432))
	{
		func_5(4);
		__LIB_8__::func_83(Local_1389.f_136, 33554432);
	}
	func_7(64, !__LIB_7__::func_907(Local_1389.f_136, 64));
	func_12(256, __LIB_8__::func_242(Local_1389.f_136));
	func_7(2, __LIB_8__::func_309(Local_1389.f_136));
	func_7(16, func_14(&iLocal_1789));
	func_7(8, __LIB_7__::func_907(Local_1389.f_136, 128));
	func_7(256, !__LIB_7__::func_908(Local_1389.f_136, 131072));
	func_7(2048, __LIB_2__::func_117(64));
	func_7(4096, __LIB_7__::func_908(Local_1389.f_136, 64));
	func_7(8192, __LIB_7__::func_908(Local_1389.f_136, 128));
	func_7(131072, __LIB_7__::func_908(Local_1389.f_136, 2));
	func_5(8388608);
	__LIB_8__::func_234(0, &Local_1389, 0);
	func_12(64, func_17());
	func_18();
	__LIB_8__::func_203(Local_1389.f_136);
	__LIB_8__::func_235(&Local_1389, 32, ((__LIB_7__::func_907(Local_1389.f_136, 524288) || __LIB_7__::func_907(Local_1389.f_136, 1048576)) || __LIB_7__::func_907(Local_1389.f_136, 2097152)));
	if (!__LIB_7__::func_924(&Local_1389, 32))
	{
		iLocal_1759[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-439.8f, 500.2f, 98.8f, 0f, 0f, 0f, 30.76097f, 33.35877f, 15.06476f, "Castor's Ridge - companionVolume");
	}
	if (__LIB_7__::func_924(&Local_1389, 32))
	{
		if (!__LIB_10__::func_282(256))
		{
			iVar0 = 16;
			__LIB_3__::func_710(Global_1392194[Local_1389.f_136 /*10*/].f_6, iVar0);
		}
	}
	else
	{
		__LIB_7__::func_925(Global_1392194[Local_1389.f_136 /*10*/].f_6);
	}
	iLocal_18 = __LIB_0__::func_982(Local_1389.f_136);
	if (!__LIB_7__::func_908(Local_1389.f_136, 2097152))
	{
		__LIB_8__::func_82(Local_1389.f_136, 2097152);
	}
	__LIB_8__::func_235(&Local_1389, 2048, iLocal_18 == 5);
	if (iLocal_18 < 4)
	{
		func_26();
	}
	if (iLocal_18 == 1 && !__LIB_4__::func_241(8))
	{
		iLocal_1759[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-439.4236f, 503.3533f, 98.76091f, 0f, 0f, 1.506823f, 5.272687f, 2.633899f, 3.570507f, "Castor's Ridge - volFrame");
		iLocal_1759[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-439.2235f, 501.9597f, 99.17344f, 0f, 0f, 1.506823f, 6.000473f, 4.019011f, 5.080577f, "Castor's Ridge - volBlocking");
		iLocal_1759[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-439.4028f, 502.0049f, 101.2801f, 0f, 0f, 2.529653f, 5.277621f, 1f, 1.514907f, "Castor's Ridge - volFrameTrigger");
		if (__LIB_7__::func_924(&Local_1389, 32))
		{
			func_28();
		}
	}
	else if (iLocal_18 == 2 && !__LIB_4__::func_241(8))
	{
		iLocal_1759[4] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-448.6899f, 508.8307f, 100.9918f, 0f, 0f, 1.631845f, 9.986375f, 8.676397f, 4.074053f, "Castor's Ridge - volFollow");
	}
	else if (iLocal_18 == 3 && !__LIB_4__::func_241(8))
	{
		iLocal_1759[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-443.7617f, 502.7154f, 98.70467f, 0f, 0f, 1.799746f, 3.666057f, 1.748832f, 3.458851f, "Castor's Ridge - volStairs");
		iLocal_1759[4] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Castor's Ridge - volFollow");
		VOLUME::_0xBCE668AAF83608BE(iLocal_1759[4], -436.1921f, 513.9036f, 100.7752f, 0f, 0f, -28.38637f, 13.09126f, 8.676397f, 4.074053f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_1759[4], -455.4126f, 509.8932f, 100.7752f, 0f, 0f, 51.85447f, 13.09126f, 8.676397f, 4.074053f);
		VOLUME::_0x39816F6F94F385AD(iLocal_1759[4], -444.5037f, 509.3485f, 100.6195f, 0f, 0f, 1.838882f, 5.715972f, 3.997581f, 8.804232f);
		VOLUME::_0x39816F6F94F385AD(iLocal_1759[4], -449.1066f, 518.0027f, 100.8164f, 0f, 0f, 23.93622f, 13.16835f, 5.263707f, 8.498951f);
		POPULATION::_0xB56D41A694E42E86(iLocal_1759[4], 2048, 0, 0, -1, -1, 0);
	}
	else if (iLocal_18 == 4 || iLocal_18 == 5)
	{
		iLocal_1759[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-443.7643f, 500.9564f, 99.21016f, 0f, 0f, 2.481348f, 3.629966f, 1.99332f, 4.66624f, "Castor's Ridge - volNav");
		iLocal_1759[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-443.4818f, 497.02f, 99.15102f, 0f, 0f, 2.391671f, 3.361284f, 5.955622f, 2.877767f, "Castor's Ridge - volHall");
	}
	if ((iLocal_18 == 5 || __LIB_7__::func_924(&Local_1389, 32)) || (iLocal_18 == 4 && __LIB_4__::func_241(8)))
	{
		__LIB_0__::func_123(Local_1389.f_138, 32);
		__LIB_3__::func_229(Local_1389.f_138);
	}
	else
	{
		__LIB_0__::func_121(Local_1389.f_138, 32);
	}
	if (iLocal_18 >= 4 || __LIB_7__::func_924(&Local_1389, 32))
	{
		__LIB_0__::func_123(65, 32);
		__LIB_0__::func_123(66, 32);
		__LIB_3__::func_229(65);
		__LIB_3__::func_229(66);
	}
	else
	{
		__LIB_0__::func_121(65, 32);
		__LIB_0__::func_121(66, 32);
		__LIB_4__::func_193(65);
		__LIB_4__::func_193(66);
	}
	if (__LIB_7__::func_908(Local_1389.f_136, 1048576))
	{
		__LIB_0__::func_121(67, 32);
		__LIB_0__::func_121(68, 32);
		__LIB_4__::func_193(65);
		__LIB_4__::func_193(66);
	}
	else
	{
		__LIB_7__::func_899(67);
		__LIB_7__::func_899(68);
		__LIB_0__::func_123(67, 32);
		__LIB_0__::func_123(68, 32);
	}
	__LIB_8__::func_255(Local_1389.f_136, Local_1389.f_137, &Local_386, &Local_1389, 1, 1);
	if (__LIB_4__::func_241(16))
	{
		iVar1 = 2;
	}
	if (iLocal_18 == 3 && !__LIB_7__::func_907(Local_1389.f_136, 4))
	{
		func_35();
	}
	func_36();
	func_37();
	func_38(&iVar1);
	__LIB_8__::func_251(&Local_1389);
	__LIB_3__::func_393(&Local_1389, 1);
	__LIB_2__::func_906(&Local_1389, 21);
	if (__LIB_4__::func_241(2))
	{
		Local_1549.f_3 = 1;
	}
	if (iLocal_18 != 5)
	{
	}
	else
	{
		__LIB_8__::func_131(&Local_1389, 512);
		__LIB_13__::func_187(32768);
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_1856 = true;
	}
	while (true)
	{
		func_44();
		__LIB_2__::func_265(bLocal_1856, 9783, 0);
		if (!bLocal_1856)
		{
			switch (iLocal_1821)
			{
				case 0:
					if (!__LIB_7__::func_924(&Local_1389, 32) && Local_386.f_3 < (iVar1 + (Local_386.f_1 + Local_386) + 3))
					{
						__LIB_7__::func_927(((3 + (Local_386 + Local_386.f_1)) + iVar1), &Local_386);
					}
					else if (func_48())
					{
						iLocal_1821 = 1;
					}
					break;
				case 1:
					__LIB_13__::func_188(32);
					if (!__LIB_8__::func_332(1) && func_51())
					{
						if (__LIB_7__::func_924(&Local_1389, 32))
						{
							__LIB_13__::func_187(1);
						}
						else if ((iLocal_18 == 2 || iLocal_18 == 4) && __LIB_4__::func_241(64))
						{
							bVar2 = __LIB_8__::func_332(32);
							func_53(1, func_52(&bVar2, &iLocal_1819));
							func_53(32, bVar2);
							if (__LIB_8__::func_332(1))
							{
								iLocal_1819 = 0;
							}
						}
						else
						{
							__LIB_13__::func_187(1);
						}
					}
					else if (!__LIB_8__::func_332(256) && func_51())
					{
						if (__LIB_7__::func_924(&Local_1389, 32))
						{
							__LIB_13__::func_187(256);
						}
						else if ((iLocal_18 == 2 || iLocal_18 == 4) && __LIB_4__::func_241(64))
						{
							bVar3 = __LIB_8__::func_332(32);
							func_53(256, func_54(&bVar3, &iLocal_1819));
							func_53(32, bVar3);
							if (__LIB_8__::func_332(256))
							{
								iLocal_1819 = 0;
							}
						}
						else
						{
							__LIB_13__::func_187(256);
						}
					}
					else if (!__LIB_8__::func_332(2))
					{
						if (__LIB_0__::func_117(Local_1389.f_138, 32) || __LIB_7__::func_924(&Local_1389, 32))
						{
							__LIB_13__::func_187(2);
						}
						else
						{
							__LIB_2__::func_935(Local_1389.f_138, 1, 0, 0, 0, 0);
							func_53(2, __LIB_8__::func_123(Local_1389.f_138, 1, 1));
							if (!ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_963(Local_1389.f_138)))
							{
								PED::SET_PED_CONFIG_FLAG(__LIB_2__::func_963(Local_1389.f_138), 301, false);
								PED::SET_PED_CONFIG_FLAG(__LIB_2__::func_963(Local_1389.f_138), 297, true);
								PED::SET_PED_CONFIG_FLAG(__LIB_2__::func_963(Local_1389.f_138), 315, true);
								PED::SET_PED_CONFIG_FLAG(__LIB_2__::func_963(Local_1389.f_138), 146, true);
								__LIB_0__::func_928(&(Local_1389.f_35), __LIB_2__::func_963(Local_1389.f_138), "HOME_FOREMAN", 0);
							}
						}
					}
					else if (!__LIB_8__::func_332(4))
					{
						if ((iLocal_18 >= 4 || __LIB_0__::func_117(65, 32)) || __LIB_7__::func_924(&Local_1389, 32))
						{
							__LIB_13__::func_187(4);
						}
						else
						{
							__LIB_2__::func_935(65, 1, 0, 0, 0, 0);
							if ((iLocal_18 == 1 || iLocal_18 == 2) || __LIB_4__::func_241(8))
							{
								func_53(4, __LIB_8__::func_123(65, 1, 1));
							}
							else
							{
								func_53(4, !ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_963(65)));
								if (!ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_963(65)))
								{
									PED::SET_PED_CONFIG_FLAG(__LIB_2__::func_963(65), 301, false);
									PED::SET_PED_CONFIG_FLAG(__LIB_2__::func_963(65), 297, true);
									PED::SET_PED_CONFIG_FLAG(__LIB_2__::func_963(65), 146, true);
								}
							}
						}
					}
					else if (!__LIB_8__::func_332(8))
					{
						if ((iLocal_18 >= 4 || __LIB_0__::func_117(66, 32)) || __LIB_7__::func_924(&Local_1389, 32))
						{
							__LIB_13__::func_187(8);
						}
						else
						{
							__LIB_2__::func_935(66, 1, 0, 0, 0, 0);
							if ((iLocal_18 == 1 || iLocal_18 == 2) || __LIB_4__::func_241(8))
							{
								func_53(8, __LIB_8__::func_123(66, 1, 1));
							}
							else
							{
								func_53(8, !ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_963(66)));
								if (!ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_963(66)))
								{
									PED::SET_PED_CONFIG_FLAG(__LIB_2__::func_963(66), 301, false);
									PED::SET_PED_CONFIG_FLAG(__LIB_2__::func_963(66), 297, true);
									PED::SET_PED_CONFIG_FLAG(__LIB_2__::func_963(66), 146, true);
								}
							}
						}
					}
					if (!__LIB_8__::func_332(16))
					{
						if (__LIB_8__::func_128(&Local_386))
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_386.f_690[3 /*12*/].f_8))
							{
								ENTITY::SET_ENTITY_COLLISION(Local_386.f_690[3 /*12*/].f_8, false, false);
								ENTITY::SET_ENTITY_VISIBLE(Local_386.f_690[3 /*12*/].f_8, false);
							}
							__LIB_13__::func_187(16);
						}
					}
					__LIB_0__::func_928(&(Local_1389.f_35), Global_35, "ARTHUR", 0);
					Local_2071.f_33 = { Local_1389.f_35 };
					Local_1857.f_81 = { Local_1389.f_35 };
					__LIB_8__::func_170(Local_1389.f_136, 1);
					if (((((((((!CAM::IS_SCREEN_FADED_OUT() && __LIB_8__::func_332(1)) && __LIB_8__::func_332(2)) && __LIB_8__::func_332(4)) && __LIB_8__::func_332(8)) && __LIB_8__::func_332(16)) && __LIB_8__::func_332(256)) && func_62()) && func_63()) || __LIB_7__::func_924(&Local_1389, 32))
					{
						if (!ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_963(Local_1389.f_138)))
						{
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(__LIB_2__::func_963(Local_1389.f_138), joaat("REL_CIVMALE"));
							func_64();
							func_65();
						}
						iLocal_1821 = 2;
					}
					break;
				case 2:
					if (__LIB_7__::func_924(&Local_1389, 128) && __LIB_7__::func_935(Local_1389.f_136, __LIB_4__::func_241(4)))
					{
						func_67(0);
						__LIB_8__::func_132(&Local_1389, 128);
					}
					if (iLocal_18 != 5 && __LIB_8__::func_234(iLocal_1640, &Local_1389, 5))
					{
						func_37();
					}
					func_69(&Local_1389, &Local_386);
					if (!__LIB_7__::func_924(&Local_1389, 2))
					{
						func_70(&iLocal_1768, &fLocal_1778, &Local_1389, 64, 66, &uLocal_1820, &iLocal_1640, 10, -1082130432 /* Float: -1f */, !__LIB_10__::func_282(2097152));
						__LIB_7__::func_936(&iLocal_1768);
						__LIB_7__::func_936(&iLocal_1794);
						func_72();
						if (func_73(&uLocal_33, 3))
						{
							__LIB_1__::func_148(&(vLocal_1578[11 /*3*/]));
						}
						if (func_75())
						{
							func_76(&Local_1389, &iLocal_1640, 3000, 10);
						}
						if ((!__LIB_4__::func_241(16) && !__LIB_7__::func_924(&Local_1389, 32)) && __LIB_4__::func_241(4))
						{
							__LIB_8__::func_117(&Local_1389, 0, 1073741824 /* Float: 2f */, 1071644672 /* Float: 1.75f */);
						}
						if (func_78())
						{
							func_79();
							func_80();
							func_81();
							__LIB_8__::func_206(&Local_1549, &Local_1389, 1);
							if (iLocal_18 >= 4)
							{
								__LIB_0__::func_172(iLocal_1759[1]);
							}
							else if (iLocal_18 >= 3)
							{
								__LIB_8__::func_253(&Local_1389);
							}
							if (!func_85())
							{
								__LIB_8__::func_131(&Local_1389, 4096);
							}
							__LIB_1__::func_539();
							__LIB_3__::func_334(&uLocal_1790);
							__LIB_8__::func_129(&Local_1389);
							__LIB_3__::func_953(&iLocal_30, 1);
							iVar4 = __LIB_2__::func_963(Local_1389.f_138);
							iVar5 = __LIB_2__::func_963(65);
							iVar6 = __LIB_2__::func_963(66);
							func_90(&iVar4, &iVar5, &iVar6, 1);
							AUDIO::STOP_PED_SPEAKING(iVar4, false);
							AUDIO::STOP_PED_SPEAKING(iVar5, false);
							AUDIO::STOP_PED_SPEAKING(iVar6, false);
							PED::SET_PED_CONFIG_FLAG(iVar4, 277, false);
							PED::SET_PED_CONFIG_FLAG(iVar5, 277, false);
							PED::SET_PED_CONFIG_FLAG(iVar6, 277, false);
							if (__LIB_5__::func_656(1))
							{
								__LIB_8__::func_131(&Local_1389, 4096);
								__LIB_8__::func_131(&Local_1389, 16384);
								func_92();
							}
							else
							{
								__LIB_8__::func_82(Local_1389.f_136, 1024);
							}
							PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
							__LIB_8__::func_132(&Local_1389, 65536);
							MAP::DISPLAY_RADAR(true);
							HUD::DISPLAY_HUD(true);
							__LIB_3__::func_732(0);
							iVar7 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_SURPRISING"), Global_35, 1f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
							if (!__LIB_7__::func_924(&Local_1389, 4096) && !__LIB_8__::func_332(524288))
							{
								if (!ENTITY::IS_ENTITY_DEAD(iLocal_1768[0]))
								{
									__LIB_8__::func_336(&(Local_1389.f_35), "HOME_AGGRO", iLocal_1768[0], Global_35, 0, 0, 1, 1);
								}
								else if (!ENTITY::IS_ENTITY_DEAD(iLocal_1768[1]))
								{
									__LIB_8__::func_336(&(Local_1389.f_35), "HOME_DEAD_1", iLocal_1768[1], Global_35, 0, 0, 1, 1);
								}
								else if (!ENTITY::IS_ENTITY_DEAD(iLocal_1768[2]))
								{
									__LIB_2__::func_478(iLocal_1768[2], Global_35, "GENERIC_FRIGHTENED_HIGH", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
								}
							}
							else if ((__LIB_7__::func_924(&Local_1389, 4096) || __LIB_8__::func_332(524288)) && __LIB_7__::func_924(&Local_1389, 8192))
							{
								if (!ENTITY::IS_ENTITY_DEAD(Local_1549) && !MISC::IS_STRING_NULL_OR_EMPTY(&(Local_1549.f_20[0 /*4*/])))
								{
									__LIB_8__::func_336(&(Local_1389.f_35), &(Local_1549.f_20[0 /*4*/]), Local_1549, Global_35, 0, 0, 1, 1);
								}
								else if (!ENTITY::IS_ENTITY_DEAD(iLocal_1768[0]))
								{
									__LIB_8__::func_336(&(Local_1389.f_35), "HOME_AGGRO", iLocal_1768[0], Global_35, 0, 0, 1, 1);
								}
								else if (!ENTITY::IS_ENTITY_DEAD(iLocal_1768[1]))
								{
									__LIB_8__::func_336(&(Local_1389.f_35), "HOME_DEAD_1", iLocal_1768[1], Global_35, 0, 0, 1, 1);
								}
								else if (!ENTITY::IS_ENTITY_DEAD(iLocal_1768[2]))
								{
									__LIB_2__::func_478(iLocal_1768[2], Global_35, "GENERIC_FRIGHTENED_HIGH", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
								}
							}
							__LIB_8__::func_131(&Local_1389, 2);
							__LIB_8__::func_244(Local_1389.f_136, 3);
							__LIB_8__::func_207(&Local_1389);
							iVar8 = 0;
							while (iVar8 < iLocal_1768)
							{
								if (!ENTITY::IS_ENTITY_DEAD(iLocal_1768[iVar8]))
								{
									if (__LIB_0__::func_29(__LIB_8__::func_574(iLocal_1768[iVar8], 0)))
									{
										if (__LIB_0__::func_117(__LIB_8__::func_574(iLocal_1768[iVar8], 0), 32))
										{
										}
										else
										{
											if (!__LIB_2__::func_763(__LIB_8__::func_574(iLocal_1768[iVar8], 0), 0))
											{
												__LIB_8__::func_123(__LIB_8__::func_574(iLocal_1768[iVar8], 0), 1, 1);
											}
											PED::SET_PED_CONFIG_FLAG(iLocal_1768[iVar8], 277, false);
										}
										iVar8++;
										func_101(1);
										func_102();
										func_103();
										__LIB_8__::func_338(&Local_1389, &iLocal_1768, &uLocal_1790, 0, __LIB_3__::func_430(268435456, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 3, iVar7, 1, __LIB_7__::func_924(&Local_1389, 4096), 0, __LIB_7__::func_940(&Local_1389, Local_1389.f_28), 1051260355 /* Float: 0.33f */);
										if (__LIB_3__::func_329(joaat("HMSTD_FOREMAN")))
										{
											iVar4 = __LIB_13__::func_308("HMSTD_FOREMAN");
										}
										else
										{
											iVar4 = __LIB_2__::func_963(Local_1389.f_138);
										}
										iVar9 = __LIB_0__::func_153(iVar4, 0, 1, 0);
										if (!WEAPON::IS_WEAPON_VALID(iVar9))
										{
											iVar9 = __LIB_3__::func_430(268435456, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
										}
										if (__LIB_2__::func_1(iVar4, 0, 1))
										{
											PED::SET_PED_ACCURACY(iVar4, 55);
										}
										__LIB_8__::func_172(&Local_1389, iVar4, &(uLocal_1790[0]), (__LIB_7__::func_924(&Local_1389, 4096) && !__LIB_4__::func_241(16)), iVar9, 0);
										if (iLocal_18 != 4)
										{
										}
										else if (!ENTITY::IS_ENTITY_DEAD(iLocal_1794[0]))
										{
											__LIB_11__::func_430(iLocal_1794[0], Global_35);
											ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_1794[0]));
										}
										__LIB_8__::func_131(&Local_1389, 128);
										Jump @4479; //curOff = 4337
										__LIB_18__::func_99(&iLocal_1768, &Local_1389);
										func_114();
										func_115();
										if (iLocal_18 != 4)
										{
										}
										else
										{
											if ((!__LIB_3__::func_329(joaat("HMSTD_HORSE")) && !ENTITY::IS_ENTITY_DEAD(iLocal_1794[0])) && PED::_IS_MOUNT_SEAT_FREE(iLocal_1794[0], -1))
											{
												__LIB_3__::func_535(iLocal_1794[0], 1, Global_35, "HMSTD_HORSE");
											}
											if (ENTITY::DOES_ENTITY_EXIST(Local_386.f_690[0 /*12*/].f_8))
											{
												MISC::_0x8BB99B85444544D9(Local_386.f_690[0 /*12*/].f_8, __LIB_3__::func_970(joaat("EA_CASTORSPOND_HOUSEPRICE_MED")));
											}
										}
										func_103();
										iVar10 = Local_1389.f_139;
										if (!__LIB_4__::func_241(-2147483648))
										{
											if (__LIB_8__::func_236(&Local_1389, &iLocal_1768, &iLocal_1768, &(Local_1389.f_139), 1, 0))
											{
												if (!__LIB_8__::func_332(32768))
												{
													__LIB_8__::func_131(&Local_1389, 4);
												}
											}
											else if (!__LIB_7__::func_924(&Local_1389, 8) && !__LIB_2__::func_767(Local_1389.f_138, 0))
											{
												if (!__LIB_8__::func_332(32768))
												{
													__LIB_8__::func_131(&Local_1389, 8);
												}
											}
										}
										if (iVar10 != Local_1389.f_139)
										{
											if (!ENTITY::IS_ENTITY_DEAD(iLocal_1768[0]))
											{
												__LIB_8__::func_336(&(Local_1389.f_35), "HOME_AGGRO", iLocal_1768[0], Global_35, 0, 0, 1, 1);
											}
											else if (!ENTITY::IS_ENTITY_DEAD(iLocal_1768[1]))
											{
												__LIB_8__::func_336(&(Local_1389.f_35), "HOME_DEAD_1", iLocal_1768[1], Global_35, 0, 0, 1, 1);
											}
											else if (!ENTITY::IS_ENTITY_DEAD(iLocal_1768[2]))
											{
												__LIB_2__::func_478(iLocal_1768[2], Global_35, "GENERIC_FRIGHTENED_HIGH", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
											}
										}
										if (!__LIB_7__::func_924(&Local_1389, 2))
										{
											__LIB_8__::func_217(&Local_1549);
											if (__LIB_8__::func_88(&Local_1549, 1))
											{
												func_122(&Local_1389, &Local_1549, &(Local_40[3 /*21*/]), &(Local_125[3 /*52*/]));
											}
											else
											{
												__LIB_8__::func_89(&Local_1549, 4);
											}
											if (func_124())
											{
												func_45();
											}
										}
										func_125();
										if (func_126())
										{
											bLocal_1856 = true;
										}
										BUILTIN::WAIT(Local_1389.f_30);
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

void func_2()
{
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-621282815, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-908732483, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(2006823758, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(244605245, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(261151632, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-918880864, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-718375739, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1468840253, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(861452355, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-270282311, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-603631438, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1192733433, false);
}

void func_5(int iParam0)
{
	__LIB_1__::func_683(&iLocal_14, iParam0);
}

void func_7(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_5(iParam0);
	}
	else
	{
		func_139(iParam0);
	}
}

void func_12(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_141(iParam0);
	}
	else
	{
		func_142(iParam0);
	}
}

bool func_14(int iParam0)
{
	int iVar0;
	if (!Global_1935630.f_12)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, true))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(Global_35, true);
			if (__LIB_18__::func_253(&iVar0))
			{
				*iParam0 = iVar0;
				return true;
			}
		}
	}
	return false;
}

bool func_17()
{
	if (!__LIB_4__::func_241(2048))
	{
		return true;
	}
	if (__LIB_7__::func_924(&Local_1389, 256))
	{
		return true;
	}
	if (!__LIB_4__::func_241(256))
	{
		return true;
	}
	return false;
}

void func_18()
{
	float fVar0;
	if (!VOLUME::_0xF6A8A652A6B186CD(iLocal_1852) && !__LIB_10__::func_682(Local_1389.f_136))
	{
		if (iLocal_18 == 2 && !__LIB_4__::func_241(8))
		{
			fVar0 = 180f;
		}
		else
		{
			fVar0 = 100f;
		}
		iLocal_1852 = __LIB_2__::func_213(Global_1898092.f_26.f_5, "Castor's Ridge", 1, 0, 0, 0, -1082130432 /* Float: -1f */);
	}
}

void func_26()
{
	__LIB_3__::func_414(&uLocal_1707, func_155(), 12f, 2, -1, 0);
	__LIB_3__::func_414(&uLocal_1708, func_155(), 5f, 1, -1, 0);
}

void func_28()
{
	vector3 vVar0;
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1759[6]))
	{
		vVar0 = { VOLUME::_GET_VOLUME_SCALE(iLocal_1759[1]) };
		vVar0.f_1 = (vVar0.y + 1f);
		vVar0.x = (vVar0.x + 0.5f);
		vVar0.f_2 = (vVar0.z + 0.5f);
		iLocal_1759[6] = VOLUME::_0x0EB78C2B156635B1(joaat("VOLBOX"), VOLUME::_GET_VOLUME_COORDS(iLocal_1759[1]), VOLUME::_GET_VOLUME_ROTATION(iLocal_1759[1]), vVar0);
	}
}

void func_35()
{
	Global_40.f_9096[Local_1389.f_136 /*12*/].f_6 = 0;
}

void func_36()
{
	func_2();
	switch (iLocal_18)
	{
		case 1:
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1468840253, true);
			break;
		case 2:
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(861452355, true);
			break;
	}
	if (iLocal_18 < 4)
	{
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1192733433, true);
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-270282311, true);
	}
	if (__LIB_7__::func_924(&Local_1389, 32) || __LIB_7__::func_924(&Local_1389, 2))
	{
		return;
	}
	switch (iLocal_18)
	{
		case 1:
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-621282815, true);
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-918880864, true);
			break;
		case 2:
			if (__LIB_4__::func_241(4096) || __LIB_4__::func_241(8))
			{
				TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(2006823758, true);
			}
			else
			{
				TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-908732483, true);
			}
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-918880864, true);
			break;
		case 3:
			if (__LIB_4__::func_241(8192) || __LIB_4__::func_241(8))
			{
				TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(244605245, true);
			}
			else
			{
				TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(261151632, true);
			}
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-918880864, true);
			break;
		case 4:
			break;
		case 5:
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-718375739, true);
			break;
	}
	TASK::_0x9C8F42A5D1859DC1(Global_1392194[Local_1389.f_136 /*10*/].f_5);
}

void func_37()
{
	int iVar0;
	if (__LIB_7__::func_924(&Local_1389, 256))
	{
		PERSCHAR::_0x187D65F3AEC5D679(__LIB_0__::func_118(64), "EventAreas/CastorsPond/HMSTD_Foreman_Shelter");
		PERSCHAR::_0x187D65F3AEC5D679(__LIB_0__::func_118(65), "EventAreas/CastorsPond/HMSTD_Worker_Shelter");
		PERSCHAR::_0x187D65F3AEC5D679(__LIB_0__::func_118(66), "EventAreas/CastorsPond/HMSTD_Worker_Shelter");
	}
	else if ((iLocal_18 == 3 || iLocal_18 == 2) && !__LIB_7__::func_907(Local_1389.f_136, 128))
	{
		PERSCHAR::_0x187D65F3AEC5D679(__LIB_0__::func_118(64), "EventAreas/CastorsPond/HMSTD_Foreman");
		PERSCHAR::_0x187D65F3AEC5D679(__LIB_0__::func_118(65), "EventAreas/CastorsPond/HMSTD_Worker_Stalled");
		PERSCHAR::_0x187D65F3AEC5D679(__LIB_0__::func_118(66), "EventAreas/CastorsPond/HMSTD_Worker_Stalled");
	}
	else
	{
		PERSCHAR::_0x187D65F3AEC5D679(__LIB_0__::func_118(64), "EventAreas/CastorsPond/HMSTD_Foreman");
		PERSCHAR::_0x187D65F3AEC5D679(__LIB_0__::func_118(65), "EventAreas/CastorsPond/HMSTD_Worker");
		PERSCHAR::_0x187D65F3AEC5D679(__LIB_0__::func_118(66), "EventAreas/CastorsPond/HMSTD_Worker");
	}
	iVar0 = __LIB_2__::func_963(64);
	if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !TASK::IS_PED_ACTIVE_IN_SCENARIO(iVar0, 1)) && !ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
	{
		TASK::TASK_PERSISTENT_CHARACTER(iVar0);
	}
	iVar0 = __LIB_2__::func_963(65);
	if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !TASK::IS_PED_ACTIVE_IN_SCENARIO(iVar0, 1)) && !ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
	{
		TASK::TASK_PERSISTENT_CHARACTER(iVar0);
	}
	iVar0 = __LIB_2__::func_963(66);
	if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !TASK::IS_PED_ACTIVE_IN_SCENARIO(iVar0, 1)) && !ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
	{
		TASK::TASK_PERSISTENT_CHARACTER(iVar0);
	}
}

int func_38(int iParam0)
{
	if (__LIB_7__::func_924(&Local_1389, 32))
	{
		return 1;
	}
	switch (iLocal_18)
	{
		case 1:
			Local_386 = 0;
			break;
		case 2:
			Local_386 = 0;
			if (!__LIB_7__::func_907(Local_1389.f_136, 64) && __LIB_4__::func_241(4))
			{
				Local_386.f_1 = 4;
				*iParam0 = (*iParam0 + Local_386.f_1);
				Local_386.f_369[0 /*32*/].f_6 = { -471.161f, 494.0929f, 98.39474f };
				Local_386.f_369[0 /*32*/].f_9 = -75.62f;
				Local_386.f_369[0 /*32*/].f_1 = joaat("A_M_M_SMHTHUG_01");
				Local_386.f_369[0 /*32*/].f_3 = -1414706886;
				Local_386.f_369[0 /*32*/].f_15 = { -493.8461f, 475.8383f, 97.53687f };
				Local_386.f_369[0 /*32*/].f_18 = -27.61f;
				Local_386.f_369[0 /*32*/].f_12 = joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
				Local_386.f_369[1 /*32*/].f_6 = { -471.6009f, 495.1383f, 98.64632f };
				Local_386.f_369[1 /*32*/].f_9 = -77.64f;
				Local_386.f_369[1 /*32*/].f_1 = joaat("A_M_M_SMHTHUG_01");
				Local_386.f_369[1 /*32*/].f_3 = -1185717114;
				Local_386.f_369[1 /*32*/].f_15 = { -488.6204f, 471.2552f, 95.98804f };
				Local_386.f_369[1 /*32*/].f_18 = -25.83f;
				Local_386.f_369[1 /*32*/].f_12 = joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
				Local_386.f_369[2 /*32*/].f_6 = { -472.1612f, 496.9294f, 98.96235f };
				Local_386.f_369[2 /*32*/].f_9 = -82.48f;
				Local_386.f_369[2 /*32*/].f_1 = joaat("A_M_M_SMHTHUG_01");
				Local_386.f_369[2 /*32*/].f_3 = -418660362;
				Local_386.f_369[2 /*32*/].f_15 = { -490.7553f, 480.6002f, 97.61851f };
				Local_386.f_369[2 /*32*/].f_18 = 143.66f;
				Local_386.f_369[2 /*32*/].f_12 = joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
				Local_386.f_369[3 /*32*/].f_6 = { -468.4569f, 499.7347f, 98.83929f };
				Local_386.f_369[3 /*32*/].f_9 = -89.7f;
				Local_386.f_369[3 /*32*/].f_1 = joaat("A_M_M_SMHTHUG_01");
				Local_386.f_369[3 /*32*/].f_3 = -188589213;
				Local_386.f_369[3 /*32*/].f_15 = { -486.4112f, 476.0952f, 96.62942f };
				Local_386.f_369[3 /*32*/].f_18 = 158.82f;
				Local_386.f_369[3 /*32*/].f_12 = joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
			}
			else
			{
				Local_386.f_1 = 0;
			}
			break;
		case 3:
			Local_386 = 0;
			break;
		case 4:
			Local_386 = 0;
			if (!__LIB_4__::func_241(8))
			{
				Local_386.f_1 = 1;
				Local_386.f_369[0 /*32*/].f_6 = { -447.632f, 498.775f, 97.0966f };
				Local_386.f_369[0 /*32*/].f_9 = -91.61f;
				Local_386.f_369[0 /*32*/].f_1 = joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
			}
			break;
	}
	return 0;
}

void func_44()
{
	if (!__LIB_10__::func_282(2048))
	{
		if (__LIB_1__::func_205(Global_35, Global_1392194[Local_1389.f_136 /*10*/].f_5, 1, 0))
		{
			func_141(2048);
			StringCopy(&(Global_1894899.f_162), "SETTLEMENT_CASTORS_RIDGE", 64);
		}
	}
	else if (!__LIB_1__::func_205(Global_35, Global_1392194[Local_1389.f_136 /*10*/].f_5, 1, 0))
	{
		func_142(2048);
		StringCopy(&(Global_1894899.f_162), "", 64);
	}
}

void func_45()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	switch (iLocal_1854)
	{
		case 0:
			__LIB_3__::func_953(&iLocal_30, 1);
			if (__LIB_10__::func_282(2048))
			{
				StringCopy(&(Global_1894899.f_162), "", 64);
			}
			if (__LIB_4__::func_241(4) && __LIB_4__::func_241(131072))
			{
				__LIB_0__::func_769();
			}
			if (__LIB_7__::func_924(&Local_1389, 16384))
			{
				if (!__LIB_7__::func_924(&Local_1389, 32768))
				{
					__LIB_8__::func_176(Local_1389.f_136);
				}
				else
				{
					__LIB_8__::func_82(Local_1389.f_136, 1024);
				}
			}
			__LIB_8__::func_206(&Local_1549, &Local_1389, 0);
			TASK::RESET_SCENARIO_TYPES_ENABLED();
			if (__LIB_7__::func_907(Local_1389.f_136, 128))
			{
				iVar0 = __LIB_2__::func_963(Local_1389.f_138);
				__LIB_7__::func_951(&iVar0);
				iVar0 = __LIB_2__::func_963(65);
				__LIB_7__::func_951(&iVar0);
				iVar0 = __LIB_2__::func_963(66);
				__LIB_7__::func_951(&iVar0);
			}
			break;
		case 1:
			if ((__LIB_7__::func_908(Local_1389.f_136, 128) && __LIB_4__::func_241(262144)) && (__LIB_2__::func_343(Global_35, iLocal_1789, 0) || func_191(0)))
			{
				__LIB_8__::func_83(Local_1389.f_136, 128);
				__LIB_8__::func_93(Local_1389.f_136, 16384);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_1855))
			{
				ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iLocal_1855);
			}
			func_193();
			break;
		case 2:
			if (INTERIOR::IS_VALID_INTERIOR(iLocal_1817))
			{
				INTERIOR::UNPIN_INTERIOR(iLocal_1817);
			}
			if (VOLUME::_0xF6A8A652A6B186CD(iLocal_1852))
			{
				VOLUME::_0xFDFECC6EE4491E11(iLocal_1852);
			}
			__LIB_7__::func_949(&iVar3, &iVar4, __LIB_7__::func_908(Local_1389.f_136, 1048576));
			iVar2 = iVar3;
			while (iVar2 <= iVar4)
			{
				if (!ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_963(iVar2)))
				{
					PED::_0x935CF6E42BAF7F4D(__LIB_2__::func_963(iVar2));
					iVar1 = TASK::_GET_SCENARIO_POINT_PED_IS_USING(__LIB_2__::func_963(iVar2), false);
					if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar1))
					{
						TASK::_DELETE_SCENARIO_POINT(iVar1);
					}
				}
				iVar2++;
			}
			break;
		case 3:
			if (iLocal_18 == 2 && __LIB_7__::func_907(Local_1389.f_136, 64))
			{
				func_194(1);
				if (__LIB_4__::func_497())
				{
					if (!__LIB_7__::func_908(Local_1389.f_136, 64))
					{
						__LIB_8__::func_82(Local_1389.f_136, 64);
					}
					if (!__LIB_7__::func_907(Local_1389.f_136, 128))
					{
						__LIB_8__::func_253(&Local_1389);
					}
				}
				else if (!__LIB_7__::func_908(Local_1389.f_136, 64) && !__LIB_7__::func_907(Local_1389.f_136, 128))
				{
					__LIB_1__::func_864(__LIB_2__::func_963(Local_1389.f_138), 0, 0);
					__LIB_1__::func_864(__LIB_2__::func_963(65), 0, 0);
					__LIB_1__::func_864(__LIB_2__::func_963(66), 0, 0);
					iVar5 = 0;
					while (iVar5 < Local_386.f_1)
					{
						if (iVar5 == 0)
						{
							__LIB_1__::func_864(iLocal_1794[iVar5], 0, 0);
						}
						else
						{
							__LIB_2__::func_426(&(iLocal_1794[iVar5]));
						}
						iVar5++;
					}
					__LIB_8__::func_131(&Local_1389, 4);
					__LIB_8__::func_253(&Local_1389);
					__LIB_8__::func_93(Local_1389.f_136, 8388608);
				}
			}
			if (!__LIB_7__::func_924(&Local_1389, 2))
			{
				iVar6 = 0;
				while (iVar6 < 3)
				{
					if (__LIB_0__::func_27(Global_40.f_9096[Local_1389.f_136 /*12*/].f_6, func_198(iVar6, 0)))
					{
						iVar7 = 0;
						while (iVar7 < 3)
						{
							__LIB_1__::func_336(&(Global_40.f_9096[Local_1389.f_136 /*12*/].f_6), func_198(iVar6, iVar7));
							iVar7++;
						}
					}
					iVar6++;
				}
			}
			break;
		case 4:
			if (__LIB_4__::func_241(512))
			{
				__LIB_8__::func_83(Local_1389.f_136, 2);
			}
			__LIB_8__::func_83(Local_1389.f_136, 8192);
			__LIB_3__::func_266();
			if (!ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_963(Local_1389.f_138)))
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(__LIB_2__::func_963(Local_1389.f_138), joaat("REL_COP"));
			}
			func_101(1);
			if (iLocal_18 == 4 && __LIB_7__::func_907(Local_1389.f_136, 128))
			{
				__LIB_8__::func_85(Local_1389.f_136, 33554432);
			}
			func_2();
			iVar5 = 0;
			while (iVar5 < 8)
			{
				__LIB_0__::func_172(iLocal_1759[iVar5]);
				iVar5++;
			}
			break;
		case 5:
			__LIB_8__::func_339(Local_1389.f_136, &Local_386, &Local_1389);
			__LIB_8__::func_136(&Local_386);
			HUD::_TEXT_DATABASE_DELETE(func_203());
			HUD::_TEXT_DATABASE_DELETE(func_204());
			break;
		default:
			SCRIPTS::TERMINATE_THIS_THREAD();
			break;
	}
	iLocal_1854++;
}

bool func_48()
{
	switch (iLocal_1822)
	{
		case 0:
			if (!func_206())
			{
				return false;
			}
			if (!__LIB_7__::func_924(&Local_1389, 32))
			{
				func_207(&(Local_386.f_15));
				func_207(&(Local_386.f_304));
				func_207(&(Local_386.f_369));
				func_208(&Local_1389);
				func_209();
				func_210();
				if (__LIB_4__::func_241(4))
				{
					func_211(&Local_2071);
					func_212(&Local_1857);
				}
			}
			func_213();
			__LIB_3__::func_314(&(Local_386.f_690));
			__LIB_3__::func_414(&uLocal_1709, func_215(), 13.5f, 2, -1, 0);
			HUD::_TEXT_DATABASE_REQUEST(func_203());
			HUD::_TEXT_DATABASE_REQUEST(func_204());
			iLocal_1822 = 1;
			break;
		case 1:
			if (!func_51())
			{
			}
			if (!func_216())
			{
			}
			if (!func_62())
			{
			}
			if (!func_63())
			{
			}
			if ((iLocal_18 == 4 && __LIB_7__::func_907(Local_1389.f_136, 128)) || iLocal_18 > 4)
			{
				if (!func_217(1))
				{
					return false;
				}
			}
			if (!func_218())
			{
				return false;
			}
			return true;
	}
	return false;
}

bool func_51()
{
	if (((!__LIB_3__::func_366(&(Local_386.f_15)) || !__LIB_3__::func_366(&(Local_386.f_304))) || !__LIB_3__::func_366(&(Local_386.f_369))) || !func_221(&Local_1389))
	{
		return false;
	}
	return true;
}

bool func_52(bool bParam0, int iParam1)
{
	if (*bParam0)
	{
		return false;
	}
	if (PED::_0x5C16855277819BBF() > Local_386.f_1)
	{
		if (*iParam1 < Local_386.f_1)
		{
			if (Local_386.f_369[*iParam1 /*32*/].f_1 != 0)
			{
				iLocal_1794[*iParam1] = __LIB_3__::func_870(Local_386.f_369[*iParam1 /*32*/].f_1, &(Local_386.f_369[*iParam1 /*32*/]), Local_386.f_369[*iParam1 /*32*/].f_6, Local_386.f_369[*iParam1 /*32*/].f_9, 1, 0, 1, 0, 1);
				DECORATOR::DECOR_SET_BOOL(iLocal_1794[*iParam1], "bIgnoreThisPed", true);
			}
			*iParam1++;
			*bParam0 = 1;
			return false;
		}
		return true;
	}
	return false;
}

void func_53(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_13__::func_187(iParam0);
	}
	else
	{
		__LIB_13__::func_188(iParam0);
	}
}

bool func_54(bool bParam0, int iParam1)
{
	if (*bParam0)
	{
		return false;
	}
	if (*iParam1 < Local_386.f_1)
	{
		if (Local_386.f_369[*iParam1 /*32*/].f_12 != 0)
		{
			Local_386.f_369[*iParam1 /*32*/].f_11 = __LIB_3__::func_870(Local_386.f_369[*iParam1 /*32*/].f_12, &(Local_386.f_369[*iParam1 /*32*/]), Local_386.f_369[*iParam1 /*32*/].f_15, Local_386.f_369[*iParam1 /*32*/].f_18, 1, 1, 1, 0, 1);
			DECORATOR::DECOR_SET_BOOL(Local_386.f_369[*iParam1 /*32*/].f_11, "bIgnoreThisPed", true);
		}
		*iParam1++;
		*bParam0 = 1;
		return false;
	}
	return true;
	return false;
}

bool func_62()
{
	if (!__LIB_3__::func_315(&uLocal_1710))
	{
		return false;
	}
	if (!func_235())
	{
		return false;
	}
	return true;
}

bool func_63()
{
	if (!HUD::_TEXT_DATABASE_HAS_LOADED(func_203()))
	{
		return false;
	}
	if (!HUD::_TEXT_DATABASE_HAS_LOADED(func_204()))
	{
		return false;
	}
	return true;
}

void func_64()
{
	vector3 vVar0;
	var uVar3;
	func_236();
	if (!__LIB_4__::func_241(4) || __LIB_4__::func_241(2))
	{
		return;
	}
	PED::_0xFC3DB99C8144CD81(__LIB_2__::func_963(Local_1389.f_138), Global_1392194[Local_1389.f_136 /*10*/].f_5, 0, false, 0);
	if (iLocal_18 < 4)
	{
		PED::_0xFC3DB99C8144CD81(__LIB_2__::func_963(65), Global_1392194[Local_1389.f_136 /*10*/].f_5, 0, false, 0);
		PED::_0xFC3DB99C8144CD81(__LIB_2__::func_963(66), Global_1392194[Local_1389.f_136 /*10*/].f_5, 0, false, 0);
	}
	if (__LIB_7__::func_907(Local_1389.f_136, 128))
	{
		func_238(__LIB_2__::func_963(Local_1389.f_138), func_237(Local_1389.f_138), 0f, 2, 1073741824 /* Float: 2f */);
		if (!(iLocal_18 == 3 && __LIB_7__::func_908(Local_1389.f_136, 2)) && __LIB_4__::func_241(2048))
		{
			if (!ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_963(65)))
			{
				func_239(&vVar0, &uVar3);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(__LIB_2__::func_963(65), false, true);
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(__LIB_2__::func_963(65), vVar0, 2f, -1, false, false, false, false);
			}
			__LIB_8__::func_124(66, 1);
		}
		else
		{
			__LIB_8__::func_124(65, 1);
			__LIB_8__::func_124(66, 1);
		}
	}
	else
	{
		switch (iLocal_18)
		{
			case 1:
				func_238(__LIB_2__::func_963(Local_1389.f_138), func_237(Local_1389.f_138), 0f, 2, 1073741824 /* Float: 2f */);
				func_238(__LIB_2__::func_963(65), func_237(65), 0f, 2, 1073741824 /* Float: 2f */);
				func_238(__LIB_2__::func_963(66), func_237(66), 0f, 2, 1073741824 /* Float: 2f */);
				break;
			case 2:
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(__LIB_2__::func_963(Local_1389.f_138), false, true);
				func_238(__LIB_2__::func_963(Local_1389.f_138), func_237(Local_1389.f_138), 0f, 2, 1073741824 /* Float: 2f */);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(__LIB_2__::func_963(65), false, true);
				func_238(__LIB_2__::func_963(65), func_237(65), 0f, 2, 1073741824 /* Float: 2f */);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(__LIB_2__::func_963(66), false, true);
				func_238(__LIB_2__::func_963(66), func_237(66), 0f, 2, 1073741824 /* Float: 2f */);
				break;
			case 3:
				func_238(__LIB_2__::func_963(Local_1389.f_138), func_237(Local_1389.f_138), 0f, 2, 1073741824 /* Float: 2f */);
				func_238(__LIB_2__::func_963(65), func_237(65), 0f, 2, 1073741824 /* Float: 2f */);
				func_238(__LIB_2__::func_963(66), func_237(66), 0f, 2, 1073741824 /* Float: 2f */);
				break;
			case 4:
				if (!ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_963(Local_1389.f_138)))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(__LIB_2__::func_963(Local_1389.f_138), false, true);
					func_238(__LIB_2__::func_963(Local_1389.f_138), func_241(), func_242(), 2, 1073741824 /* Float: 2f */);
				}
				break;
			case 5:
				break;
		}
	}
}

void func_65()
{
	WEAPON::REMOVE_ALL_PED_WEAPONS(__LIB_2__::func_963(65), true, true);
	WEAPON::REMOVE_ALL_PED_WEAPONS(__LIB_2__::func_963(66), true, true);
}

void func_67(bool bParam0)
{
	int iVar0;
	iVar0 = __LIB_0__::func_982(1);
	if (__LIB_7__::func_907(1, 128))
	{
		__LIB_8__::func_180(1, 0);
	}
	else
	{
		if (iVar0 > 4)
		{
			__LIB_8__::func_180(1, 0);
		}
		if (__LIB_7__::func_908(1, 32768))
		{
			__LIB_8__::func_180(1, 0);
		}
		else
		{
			switch (iVar0)
			{
				case 3:
					if (__LIB_7__::func_908(1, 128))
					{
						__LIB_8__::func_180(1, 0);
					}
					else if (__LIB_7__::func_908(1, 256))
					{
						if (bParam0 || !__LIB_7__::func_907(1, 268435456))
						{
							__LIB_8__::func_181(1);
							__LIB_8__::func_358(1, 0, "HOME_JOURN01", 0, !bParam0);
							__LIB_8__::func_85(1, 268435456);
						}
					}
					else
					{
						__LIB_8__::func_180(1, 0);
					}
					break;
				default:
					__LIB_8__::func_180(1, 0);
					break;
			}
		}
	}
}

int func_69(int iParam0, int iParam1)
{
	if (!Global_1935630.f_12 && __LIB_1__::func_205(Global_35, Global_1392194[iParam0->f_136 /*10*/].f_5, 1, 0))
	{
		if (!__LIB_7__::func_924(iParam0, 64))
		{
			__LIB_8__::func_131(iParam0, 64);
			func_246(iParam0->f_136, 1);
			return 1;
		}
	}
	return 0;
}

void func_70(int iParam0, float fParam1, var uParam2, int iParam3, int iParam4, var uParam5, int iParam6, int iParam7, float fParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if ((*iParam6 % iParam7) == 0)
	{
		iVar0 = iParam3;
		while (iVar0 <= iParam4)
		{
			if (!__LIB_0__::func_117(iVar0, 32))
			{
				iVar1 = __LIB_2__::func_963(iVar0);
				if (!ENTITY::IS_ENTITY_DEAD(iVar1))
				{
					if (PED::IS_PED_HUMAN(iVar1))
					{
						(*iParam0)[iVar2] = iVar1;
						(*fParam1)[iVar2] = __LIB_2__::func_118(iVar1, 1, 0);
						iVar2++;
						if (bParam9)
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, true);
							PED::SET_PED_CONFIG_FLAG(iVar1, 288, true);
						}
						else
						{
							PED::SET_PED_CONFIG_FLAG(iVar1, 288, false);
						}
						if (!DECORATOR::DECOR_EXIST_ON(iVar1, "bScriptedILO"))
						{
							PED::SET_PED_CONFIG_FLAG(iVar1, 130, false);
						}
						PED::SET_PED_CONFIG_FLAG(iVar1, 374, true);
						PED::SET_PED_CONFIG_FLAG(iVar1, 178, true);
						PED::SET_PED_CONFIG_FLAG(iVar1, 146, true);
						PED::SET_PED_CONFIG_FLAG(iVar1, 246, true);
						PED::SET_PED_CONFIG_FLAG(iVar1, 297, true);
						PED::SET_PED_CONFIG_FLAG(iVar1, 171, true);
						PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), iVar1, 7, 0, 1);
						__LIB_2__::func_23(uParam2, iVar1, 0);
						if (fParam8 >= 0f)
						{
							PED::SET_PED_SEEING_RANGE(iVar1, fParam8);
						}
					}
					else
					{
						__LIB_2__::func_20(uParam2, iVar1, 0);
					}
				}
			}
			iVar0++;
		}
		iVar3 = iVar2;
		while (iVar3 <= (*iParam0 - 1))
		{
			(*iParam0)[iVar2] = 0;
			iVar3++;
		}
		*uParam5 = iVar2;
		*iParam6 = 0;
	}
	*iParam6++;
}

void func_72()
{
	int iVar0;
	struct<21> Var1;
	char* sVar30;
	int iVar31;
	if (!__LIB_10__::func_282(8192))
	{
		if (__LIB_10__::func_282(4096) || (MISC::GET_FRAME_COUNT() % 9) == 0)
		{
			func_141(4096);
			iVar0 = (MISC::GET_FRAME_COUNT() % 9);
			Var1.f_3 = 3;
			Var1.f_4 = 30;
			Var1.f_5 = -1;
			Var1.f_9 = 3;
			Var1.f_15 = -1;
			Var1.f_16 = -1;
			Var1.f_20 = 2;
			Var1.f_16 = iVar0;
			sVar30 = func_250(&Var1);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar30))
			{
				AUDIO::_0xEF51242E35242B47(sVar30);
			}
			iVar31 = 0;
			while (iVar31 < 2)
			{
				sVar30 = func_251(&Var1, iVar31);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar30))
				{
					AUDIO::_0xEF51242E35242B47(sVar30);
				}
				iVar31++;
			}
			iVar31 = 0;
			while (iVar31 < 2)
			{
				sVar30 = func_252(&Var1, iVar31);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar30))
				{
					AUDIO::_0xEF51242E35242B47(sVar30);
				}
				iVar31++;
			}
			if (iVar0 == 8)
			{
				func_141(8192);
			}
		}
	}
}

bool func_73(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::GET_PLAYER_INDEX(), &iVar0, true, true))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0) && ENTITY::IS_ENTITY_A_PED(iVar0))
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_INTERACT_LOCKON_NEG")))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
				if (DECORATOR::DECOR_EXIST_ON(iVar1, "interactNeg"))
				{
					iVar2 = DECORATOR::DECOR_GET_INT(iVar1, "interactNeg");
				}
				iVar2++;
				*uParam0++;
				DECORATOR::DECOR_SET_INT(iVar1, "interactNeg", iVar2);
				if (iVar2 >= iParam1)
				{
					PED::SET_PED_CONFIG_FLAG(iVar1, 330, true);
				}
				return true;
			}
		}
	}
	return false;
}

bool func_75()
{
	if (__LIB_4__::func_241(65536))
	{
		return false;
	}
	if (__LIB_4__::func_241(16))
	{
		return false;
	}
	if (iLocal_18 == 4)
	{
		return false;
	}
	return true;
}

void func_76(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if ((*iParam1 % iParam3) == 0)
	{
		if (uParam0->f_137 == 76)
		{
			__LIB_7__::func_949(&iVar1, &iVar2, __LIB_7__::func_908(1, 1048576));
		}
		else
		{
			__LIB_1__::func_902(uParam0->f_137, &iVar1, &iVar2, 0, 0);
		}
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (__LIB_0__::func_29(iVar0) && __LIB_2__::func_763(iVar0, 0))
			{
				iVar3 = __LIB_2__::func_963(iVar0);
				if (!__LIB_0__::func_163(iVar3, 1435919172) && !TASK::GET_IS_TASK_ACTIVE(iVar3, 3))
				{
					func_255(iVar0, uParam0, iParam2, 1);
				}
			}
			iVar0++;
		}
	}
}

bool func_78()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (__LIB_8__::func_332(524288))
	{
		return true;
	}
	if (__LIB_8__::func_88(&Local_1549, 2))
	{
		return true;
	}
	if (LAW::_0xAD401C63158ACBAA(PLAYER::GET_PLAYER_INDEX()))
	{
		if (Global_1935630.f_23)
		{
			return true;
		}
	}
	iVar0 = iLocal_1644;
	__LIB_3__::func_999(&Local_1389, 1);
	if (func_258(&iLocal_1768, &Local_1389, &(Local_1389.f_28), &iLocal_1644, 0, 2, 1))
	{
		if (__LIB_7__::func_960(&(Local_1389.f_28)) || Local_1389.f_28 == 4)
		{
			if (__LIB_4__::func_241(16))
			{
				if (Local_1389.f_28 == 8)
				{
					__LIB_8__::func_131(&Local_1389, 8192);
					return true;
				}
			}
			if ((__LIB_10__::func_282(1024) && Local_1389.f_10 == iLocal_1768[0]) && Local_1389.f_28 == 65536)
			{
				__LIB_2__::func_571(&Local_1389, &(Local_1389.f_28));
				__LIB_7__::func_898(&Local_1389, &(Local_1389.f_28));
				__LIB_0__::func_37(&(vLocal_1578[9 /*3*/]));
				return false;
			}
			if (__LIB_8__::func_332(16384))
			{
				if (Local_1389.f_28 == 65536 || Local_1389.f_28 == 512)
				{
					__LIB_2__::func_571(&Local_1389, &(Local_1389.f_28));
					return false;
				}
				else if (Local_1389.f_28 == 8192)
				{
					__LIB_8__::func_131(&Local_1389, 8192);
					return true;
				}
			}
			if (!__LIB_8__::func_88(&Local_1549, 1))
			{
				if (!__LIB_8__::func_332(4096))
				{
					__LIB_3__::func_732(0);
				}
				__LIB_19__::func_565(&Local_1549, &Local_1389, Local_1389.f_28, 43449, 0, 0);
				__LIB_7__::func_961(&Local_1549, 256);
				if (Local_1549 == iLocal_1768[0])
				{
					StringCopy(&(Local_1549.f_20[0 /*4*/]), func_250(&Local_1549), 32);
					__LIB_7__::func_961(&Local_1549, 32);
				}
				else if (Local_1549 == iLocal_1768[1])
				{
					StringCopy(&(Local_1549.f_20[0 /*4*/]), func_251(&Local_1549, 0), 32);
					StringCopy(&(Local_1549.f_20[1 /*4*/]), func_251(&Local_1549, 1), 32);
					__LIB_7__::func_961(&Local_1549, 32);
				}
				else if (Local_1549 == iLocal_1768[2])
				{
					StringCopy(&(Local_1549.f_20[0 /*4*/]), func_252(&Local_1549, 0), 32);
					StringCopy(&(Local_1549.f_20[1 /*4*/]), func_252(&Local_1549, 1), 32);
					__LIB_7__::func_961(&Local_1549, 32);
				}
				if ((((((Local_1549.f_16 == 5 || Local_1549.f_16 == 6) || Local_1549.f_16 == 2) || Local_1389.f_28 == 8) || Local_1389.f_28 == 64) || Local_1389.f_28 == 2) || Local_1389.f_28 == 4)
				{
					__LIB_13__::func_187(524288);
					__LIB_8__::func_131(&Local_1389, 8192);
					return true;
				}
			}
			else
			{
				__LIB_7__::func_961(&Local_1549, 512);
			}
			__LIB_2__::func_571(&Local_1389, &(Local_1389.f_28));
			return false;
		}
		else if (__LIB_8__::func_88(&Local_1549, 2))
		{
		}
		else if (Local_1389.f_28 == 65536)
		{
			__LIB_2__::func_571(&Local_1389, &(Local_1389.f_28));
			__LIB_7__::func_898(&Local_1389, &(Local_1389.f_28));
			return false;
		}
		else if (Local_1389.f_28 == 32)
		{
			if (!__LIB_18__::func_126(&Local_1389))
			{
				if (Local_1549 == iLocal_1768[1])
				{
					StringCopy(&(Local_1549.f_20[0 /*4*/]), func_267(), 32);
					__LIB_8__::func_131(&Local_1389, 8192);
				}
				else if (Local_1549 == iLocal_1768[2])
				{
					StringCopy(&(Local_1549.f_20[0 /*4*/]), func_268(), 32);
					__LIB_8__::func_131(&Local_1389, 8192);
				}
				__LIB_13__::func_187(524288);
				__LIB_8__::func_131(&Local_1389, 4096);
			}
			else
			{
				if (iLocal_18 == 2)
				{
					iVar2 = 0;
					while (iVar2 < Global_1935630.f_39)
					{
						if (__LIB_1__::func_248(Global_1935630.f_34[iVar2], &iLocal_1768))
						{
							bVar1 = true;
						}
						else
						{
							iVar2++;
						}
					}
					if (!bVar1)
					{
						__LIB_2__::func_571(&Local_1389, &(Local_1389.f_28));
						__LIB_7__::func_898(&Local_1389, &(Local_1389.f_28));
						return false;
					}
				}
				iVar3 = PED::_GET_LASSO_TARGET(Global_35);
				if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
				{
					iVar3 = PED::_0xD0B7AEB56229D317(Global_35);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
				{
					iVar3 = __LIB_9__::func_375(Global_35);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar3))
				{
					if (iLocal_1768[0] != iVar3)
					{
						Local_1549 = iLocal_1768[0];
						Local_1549.f_16 = 2;
						StringCopy(&(Local_1549.f_20[0 /*4*/]), func_250(&Local_1549), 32);
						__LIB_8__::func_131(&Local_1389, 8192);
						__LIB_13__::func_187(524288);
					}
				}
			}
		}
		else if (Local_1389.f_28 == 2)
		{
			iVar4 = PED::_GET_LASSO_TARGET(Global_35);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar4))
			{
				iVar4 = PED::_0xD0B7AEB56229D317(Global_35);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iVar4))
			{
				iVar4 = __LIB_9__::func_375(Global_35);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar4))
			{
				if (iLocal_1768[0] != iVar4)
				{
					Local_1549 = iLocal_1768[0];
					Local_1549.f_16 = 2;
					StringCopy(&(Local_1549.f_20[0 /*4*/]), func_250(&Local_1549), 32);
					__LIB_8__::func_131(&Local_1389, 8192);
					__LIB_13__::func_187(524288);
				}
			}
		}
		else if (Local_1389.f_28 == 1024)
		{
			LAW::_0xEDFC6C1FD1C964F5(PLAYER::GET_PLAYER_INDEX(), joaat("CRIME_THEFT_HORSE"), 0, 0, 0, 0, 0, 0, 0);
			__LIB_0__::func_267(1);
			LAW::_0x710448D44A64C213(1);
		}
		return true;
	}
	if (func_272())
	{
		Local_1389.f_28 = 2;
		return true;
	}
	if (__LIB_19__::func_566(&Local_1389, &Local_1549, 43449) && !func_274())
	{
		if (!__LIB_8__::func_88(&Local_1549, 1))
		{
			Local_1549.f_16 = 7;
			__LIB_3__::func_732(0);
			__LIB_19__::func_565(&Local_1549, &Local_1389, Local_1389.f_28, 43449, 0, 0);
			__LIB_7__::func_961(&Local_1549, 256);
			if (Local_1549.f_1 >= 3)
			{
				__LIB_7__::func_961(&Local_1549, 2);
			}
			if (__LIB_8__::func_88(&Local_1549, 2))
			{
				Local_1389.f_28 = 1024;
				__LIB_8__::func_89(&Local_1549, 16);
				__LIB_8__::func_131(&Local_1389, 8192);
				__LIB_13__::func_187(524288);
				Local_1549 = iLocal_1768[0];
				StringCopy(&(Local_1549.f_20[0 /*4*/]), func_250(&Local_1549), 32);
				__LIB_7__::func_961(&Local_1549, 32);
			}
			else if (Local_1549 == iLocal_1768[0])
			{
				StringCopy(&(Local_1549.f_20[0 /*4*/]), func_250(&Local_1549), 32);
				__LIB_7__::func_961(&Local_1549, 32);
			}
			else if (Local_1549 == iLocal_1768[1])
			{
				StringCopy(&(Local_1549.f_20[0 /*4*/]), func_251(&Local_1549, 0), 32);
				StringCopy(&(Local_1549.f_20[1 /*4*/]), func_251(&Local_1549, 1), 32);
				__LIB_7__::func_961(&Local_1549, 32);
			}
			else if (Local_1549 == iLocal_1768[2])
			{
				StringCopy(&(Local_1549.f_20[0 /*4*/]), func_252(&Local_1549, 0), 32);
				StringCopy(&(Local_1549.f_20[1 /*4*/]), func_252(&Local_1549, 1), 32);
				__LIB_7__::func_961(&Local_1549, 32);
			}
		}
		else
		{
			__LIB_7__::func_961(&Local_1549, 512);
		}
	}
	if (func_275())
	{
		return true;
	}
	if (!__LIB_4__::func_241(16) && FIRE::IS_EXPLOSION_IN_SPHERE(-1, func_215(), 21f))
	{
		return true;
	}
	if (iLocal_18 == 4)
	{
		if (func_258(&iLocal_1794, &Local_1389, &(Local_1389.f_28), &uLocal_1645, 0, (Local_386.f_1 - 1), 1))
		{
			return true;
		}
	}
	iVar5 = __LIB_0__::func_259(iVar0 + 1, 2);
	iVar0 = iVar0;
	while (iVar0 <= iVar5)
	{
		if (fLocal_1778[iVar0] < Local_1389.f_19 && __LIB_7__::func_962(iLocal_1768[iVar0], &Local_1389, 0, fLocal_1778[iVar0]))
		{
			__LIB_1__::func_148(&(vLocal_1578[9 /*3*/]));
		}
		else
		{
			iVar0++;
			iVar0++;
		}
	}
	if (__LIB_1__::func_313(&(vLocal_1578[9 /*3*/]), 10f))
	{
		__LIB_7__::func_898(&Local_1389, &(Local_1389.f_28));
	}
	return false;
}

void func_79()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_279(iVar0, 1, 1);
		iVar0++;
	}
}

void func_80()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		__LIB_4__::func_356(&(iLocal_1768[iVar0]), &(Local_40[iVar0 /*21*/]), &(Local_125[iVar0 /*52*/]), 1, 1);
		iVar0++;
	}
}

void func_81()
{
	__LIB_2__::func_919(Local_386.f_690[0 /*12*/].f_8, 0, 1);
	__LIB_2__::func_919(Local_386.f_690[1 /*12*/].f_8, 0, 1);
	__LIB_2__::func_919(Local_386.f_690[2 /*12*/].f_8, 0, 1);
	__LIB_2__::func_919(Local_386.f_690[9 /*12*/].f_8, 0, 1);
	__LIB_2__::func_919(Local_386.f_690[10 /*12*/].f_8, 0, 1);
	__LIB_2__::func_919(Local_386.f_690[11 /*12*/].f_8, 0, 1);
	__LIB_2__::func_919(Local_386.f_690[12 /*12*/].f_8, 0, 1);
}

bool func_85()
{
	int iVar0;
	if (__LIB_8__::func_332(524288))
	{
		return true;
	}
	if (((Local_1389.f_28 == 2 || Local_1389.f_28 == 1) || Local_1389.f_28 == 1024) || Local_1389.f_28 == 512)
	{
		return true;
	}
	if (Local_1389.f_28 == 32)
	{
		iVar0 = 0;
		while (iVar0 < Global_1935630.f_39)
		{
			if (__LIB_1__::func_248(Global_1935630.f_34[iVar0], &iLocal_1768))
			{
				return true;
			}
			iVar0++;
		}
	}
	return false;
}

void func_90(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	if (bParam3)
	{
		iVar0 = 0;
		while (iVar0 < iLocal_1794)
		{
			TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(iLocal_1794[iVar0], ENTITY::GET_ENTITY_COORDS(*iParam0, true, false), 60f, 0, 16);
			PED::SET_PED_ACCURACY(iLocal_1794[iVar0], iLocal_1642);
			iVar0++;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(*iParam0, bParam3, iLocal_31);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(*iParam0, !bParam3);
	}
	if (!ENTITY::IS_ENTITY_DEAD(*iParam1))
	{
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(*iParam1, bParam3, iLocal_31);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(*iParam1, !bParam3);
	}
	if (!ENTITY::IS_ENTITY_DEAD(*iParam2))
	{
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(*iParam2, bParam3, iLocal_31);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(*iParam2, !bParam3);
	}
}

void func_92()
{
	if (iLocal_18 == 2 && !__LIB_4__::func_241(8))
	{
		func_289(&uLocal_1805, 0);
		func_290(&iLocal_1794, Global_35, 0, -1, 1148846080 /* Float: 1000f */, 0, 4);
		__LIB_0__::func_37(&(vLocal_1578[0 /*3*/]));
	}
}

void func_101(bool bParam0)
{
	if (__LIB_4__::func_241(2097152) || bParam0)
	{
		if (__LIB_2__::func_1(iLocal_1788, 0, 1))
		{
			PED::SET_PED_CONFIG_FLAG(iLocal_1788, 136, false);
			__LIB_2__::func_145(iLocal_1788, 0);
		}
		func_139(2097152);
	}
}

void func_102()
{
	if (!__LIB_4__::func_241(8))
	{
		switch (iLocal_18)
		{
			case 1:
				func_304();
				break;
			case 4:
				func_305();
				break;
		}
	}
	else
	{
		func_306();
		__LIB_7__::func_952(&(Local_1618[0 /*7*/]));
	}
}

void func_103()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if ((ENTITY::DOES_ENTITY_EXIST(Local_386.f_690[0 /*12*/].f_8) && __LIB_7__::func_963(&(Local_1618[0 /*7*/]))) && OBJECT::_0xB6CBD40F8EA69E8A(Local_386.f_690[0 /*12*/].f_8))
	{
		if (!__LIB_4__::func_241(1024) && (ENTITY::HAS_ANIM_EVENT_FIRED(Local_386.f_690[0 /*12*/].f_8, joaat("SKIP")) || __LIB_1__::func_205(Global_35, iLocal_1759[2], 1, 0)))
		{
			func_5(1024);
		}
		if (!__LIB_4__::func_241(512) && ENTITY::HAS_ANIM_EVENT_FIRED(Local_386.f_690[0 /*12*/].f_8, 296703555))
		{
			func_5(512);
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_386.f_690[0 /*12*/].f_8, joaat("RUMBLE")))
		{
			PAD::SET_PAD_SHAKE(0, 200, func_309());
			func_28();
			if (!__LIB_10__::func_282(16384))
			{
				func_141(16384);
			}
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_386.f_690[0 /*12*/].f_8, -394031553))
		{
			iVar0 = ITEMSET::CREATE_ITEMSET(false);
			if (ITEMSET::IS_ITEMSET_VALID(iVar0))
			{
				iVar1 = ENTITY::_0x886171A12F400B89(iLocal_1759[1], iVar0, 1);
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar0);
					if (MISC::_GET_ITEM_TYPE(iVar3) == 9)
					{
						iVar4 = MISC::_GET_PED_FROM_INDEXED_ITEM(iVar3);
						if (!__LIB_7__::func_924(&Local_1389, 2) && iVar4 == __LIB_2__::func_963(66))
						{
						}
						else if (!ENTITY::IS_ENTITY_DEAD(iVar4))
						{
							if (func_310(&iVar4, &(Local_386.f_690[0 /*12*/].f_8)))
							{
								if (PED::IS_PED_HUMAN(iVar4) && iVar4 != Global_35)
								{
									__LIB_13__::func_187(524288);
								}
								__LIB_1__::func_864(iVar4, 0, 0);
							}
						}
					}
					iVar2++;
				}
			}
			ITEMSET::DESTROY_ITEMSET(iVar0);
		}
	}
}

void func_114()
{
	int iVar0;
	iVar0 = __LIB_2__::func_963(Local_1389.f_138);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		if (func_327(&iVar0))
		{
			func_328(iVar0, __LIB_3__::func_430(268435456, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		}
	}
}

void func_115()
{
	int iVar0;
	if (func_329(&iVar0))
	{
		if (__LIB_2__::func_598(iVar0, Local_1618[2 /*7*/], "Son", 0, 0, 1, 0))
		{
			__LIB_8__::func_172(&Local_1389, iVar0, &(uLocal_1790[1]), 1, 0, Global_35);
			__LIB_13__::func_188(131072);
		}
	}
}

void func_122(var uParam0, int iParam1, int* iParam2, var uParam3)
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
		func_342(iParam1, iParam2, uParam3, 0);
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
					__LIB_8__::func_336(&(uParam0->f_35), &(iParam1->f_20[1 /*4*/]), *iParam1, Global_35, 0, 0, 1, 1);
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

int func_124()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	if (__LIB_7__::func_924(&Local_1389, 32))
	{
		func_360();
		return 0;
	}
	func_236();
	iVar0 = __LIB_2__::func_963(Local_1389.f_138);
	if (!__LIB_8__::func_332(2097152))
	{
		if (iLocal_18 < 5)
		{
			func_361(0);
			func_279(0, 1, 1);
			if (iLocal_18 < 4)
			{
				func_361(1);
				func_279(1, 1, 1);
				func_361(2);
				func_279(2, 1, 1);
			}
		}
		__LIB_13__::func_187(2097152);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		iLocal_1768[0] = iVar0;
		fLocal_1778[0] = __LIB_2__::func_118(iVar0, 1, 1);
		__LIB_0__::func_928(&(Local_1389.f_35), iVar0, "HOME_FOREMAN", 0);
		func_362(&iVar0);
	}
	if (iLocal_18 < 5)
	{
		func_363(&Local_2071);
	}
	if (!__LIB_4__::func_241(4))
	{
		func_364();
		return 0;
	}
	if (!__LIB_4__::func_241(2) && !__LIB_0__::func_117(Local_1389.f_138, 32))
	{
		bVar3 = __LIB_4__::func_241(1);
		__LIB_7__::func_979(__LIB_2__::func_963(Local_1389.f_138), &(uLocal_1790[0]), &Local_1389, __LIB_4__::func_241(8), &bVar3, 1, func_365());
		func_7(1, bVar3);
	}
	if (iLocal_18 < 4)
	{
		iVar1 = __LIB_2__::func_963(65);
		iVar2 = __LIB_2__::func_963(66);
		iLocal_1768[1] = iVar1;
		iLocal_1768[2] = iVar2;
		__LIB_0__::func_928(&(Local_1389.f_35), __LIB_2__::func_963(65), "HOME_SON1", 0);
		__LIB_0__::func_928(&(Local_1389.f_35), __LIB_2__::func_963(66), "HOME_SON2", 0);
		fLocal_1778[1] = __LIB_2__::func_118(iVar1, 1, 1);
		fLocal_1778[2] = __LIB_2__::func_118(iVar2, 1, 1);
		func_367(&iVar1, &iVar2);
	}
	Local_2071.f_33 = { Local_1389.f_35 };
	Local_1857.f_81 = { Local_1389.f_35 };
	if (__LIB_4__::func_241(8))
	{
		if (iLocal_18 == 4)
		{
			return func_368();
		}
		else if (!__LIB_7__::func_908(Local_1389.f_136, 2))
		{
			if (!__LIB_4__::func_241(2))
			{
				return func_369(&iVar0, &iVar1, &iVar2);
			}
			else
			{
				return func_370(&iVar0, 0, 0);
			}
		}
	}
	func_371();
	switch (iLocal_18)
	{
		case 1:
			if (!__LIB_4__::func_241(2))
			{
				return func_372(&iVar0, &iVar1, &iVar2);
			}
			else
			{
				return func_370(&iVar0, 0, 0);
			}
			break;
		case 2:
			if (__LIB_4__::func_241(64))
			{
				return func_373(&iVar0, &iVar1, &iVar2);
			}
			else if (!__LIB_4__::func_241(2))
			{
				return func_369(&iVar0, &iVar1, &iVar2);
			}
			else
			{
				return func_370(&iVar0, 0, 0);
			}
			break;
		case 3:
			if (!__LIB_4__::func_241(2))
			{
				if (__LIB_4__::func_241(131072))
				{
					return func_374(&iVar0, &iVar1, &iVar2);
				}
				else
				{
					return func_375(&iVar0, &iVar1, &iVar2);
				}
			}
			else
			{
				return func_370(&iVar0, 0, 0);
			}
			break;
		case 4:
			if (!__LIB_4__::func_241(2))
			{
				return func_376(&iVar0);
			}
			else
			{
				return func_377(&iVar0);
			}
			break;
		case 5:
			return func_368();
	}
	return 0;
}

void func_125()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iLocal_1768)
	{
		func_378(&(iLocal_1768[iVar0]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_1794)
	{
		func_378(&(iLocal_1794[iVar0]));
		iVar0++;
	}
}

bool func_126()
{
	if (__LIB_7__::func_924(&Local_1389, 1024))
	{
		return true;
	}
	if (bLocal_1856)
	{
		return true;
	}
	if (iLocal_1821 == 1)
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
	if (__LIB_8__::func_97(bLocal_1856))
	{
		return true;
	}
	return false;
}

void func_139(int iParam0)
{
	__LIB_1__::func_681(&iLocal_14, iParam0);
}

void func_141(int iParam0)
{
	__LIB_1__::func_683(&iLocal_16, iParam0);
}

void func_142(int iParam0)
{
	__LIB_1__::func_681(&iLocal_16, iParam0);
}

Vector3 func_155()
{
	return -426.3027f, 498.6826f, 97.12895f;
}

bool func_191(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1789))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iLocal_1789))
	{
		return true;
	}
	if (bParam0 && !__LIB_10__::func_703(&iLocal_1789))
	{
		return true;
	}
	if (ENTITY::GET_ENTITY_HEALTH(iLocal_1789) < 10)
	{
		if (ENTITY::_0x3EC28DA1FFAC9DDD(iLocal_1789, Global_35, 1, 1))
		{
			return true;
		}
	}
	return false;
}

void func_193()
{
	__LIB_2__::func_353(&uLocal_1707, 0);
	__LIB_2__::func_353(&uLocal_1708, 0);
	__LIB_2__::func_353(&uLocal_1709, 0);
}

void func_194(bool bParam0)
{
	if (bParam0)
	{
		__LIB_3__::func_353("SP_EVENT_AREA_CASTORS_2_IDLE", 0);
		func_401(4);
	}
	else if (!func_402(4))
	{
		if (func_402(2))
		{
			if (!__LIB_0__::func_75(&(vLocal_1578[6 /*3*/])))
			{
				__LIB_1__::func_148(&(vLocal_1578[6 /*3*/]));
			}
			else if (__LIB_0__::func_265(&(vLocal_1578[6 /*3*/])) > 20f)
			{
				__LIB_3__::func_353("SP_EVENT_AREA_CASTORS_2_IDLE", 0);
				func_401(4);
			}
		}
	}
}

int func_198(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2;
				case 1:
					return 4;
				case 2:
					return 8;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 16;
				case 1:
					return 32;
				case 2:
					return 64;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 128;
				case 1:
					return 256;
				case 2:
					return 512;
				default:
					break;
			}
			break;
	}
	return 0;
}

char* func_203()
{
	return "HMSTD";
}

char* func_204()
{
	return "HSTDAUD";
}

bool func_206()
{
	if (iLocal_18 < 5)
	{
		return true;
	}
	if ((__LIB_0__::func_485() - iLocal_1853) > 10000)
	{
		return true;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1759[3]))
	{
		return false;
	}
	if (VOLUME::_0xEE1D6FF54CAF7714(iLocal_1759[3], __LIB_0__::func_120(68)))
	{
		return true;
	}
	__LIB_2__::func_812(67, iLocal_1759[3], 1);
	__LIB_2__::func_812(68, iLocal_1759[3], 0);
	VOLUME::_0x4A8FEFC43FD8AC9B(iLocal_1759[3], 0, 1);
	VOLUME::_0x53D05D60E5F5B40C(iLocal_1759[3], 0, 1, __LIB_0__::func_120(68));
	return true;
}

void func_207(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_414(&((uParam0[iVar0 /*32*/])->f_1));
		func_414(&((uParam0[iVar0 /*32*/])->f_12));
		iVar0++;
	}
}

void func_208(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (uParam0->f_137 == 76)
	{
		__LIB_7__::func_949(&iVar0, &iVar1, __LIB_7__::func_908(1, 1048576));
	}
	else
	{
		__LIB_1__::func_902(uParam0->f_137, &iVar0, &iVar1, 0, 0);
	}
	iVar2 = iVar0;
	while (iVar2 <= iVar1)
	{
		if (__LIB_0__::func_29(iVar2) && !__LIB_0__::func_117(iVar2, 32))
		{
			iVar3 = __LIB_2__::func_929(iVar2);
			func_414(&iVar3);
		}
		iVar2++;
	}
}

void func_209()
{
	switch (iLocal_18)
	{
		case 1:
		case 2:
		case 3:
		case 4:
			break;
	}
}

void func_210()
{
	if (iLocal_18 == 5)
	{
		return;
	}
	if (__LIB_4__::func_241(2))
	{
		__LIB_8__::func_188(&(Local_1618[2 /*7*/]), "script@proc@eventareas@castorsPond@sonhammering", func_415(2), 0);
	}
	else if (__LIB_4__::func_241(8))
	{
		__LIB_8__::func_188(&(Local_1618[0 /*7*/]), "script@proc@eventareas@castorsPond@stageTwo_Father", func_415(0), 0);
		__LIB_8__::func_188(&(Local_1618[2 /*7*/]), "script@proc@eventareas@castorsPond@sonhammering", func_415(2), 0);
	}
	else
	{
		switch (iLocal_18)
		{
			case 1:
				__LIB_8__::func_188(&(Local_1618[0 /*7*/]), "script@proc@eventareas@castorsPond@stageOne_All", func_415(0), 0);
				break;
			case 2:
				break;
			case 3:
				__LIB_8__::func_188(&(Local_1618[0 /*7*/]), "script@proc@eventareas@castorsPond@stageThreeFather", func_415(0), 0);
				__LIB_8__::func_188(&(Local_1618[1 /*7*/]), "script@proc@eventareas@castorsPond@stageThreeGiveMoney", func_415(1), 64);
				__LIB_8__::func_188(&(Local_1618[2 /*7*/]), "script@proc@eventareas@castorsPond@sonhammering", func_415(2), 0);
				break;
			case 4:
				if (func_417())
				{
					__LIB_8__::func_188(&(Local_1618[0 /*7*/]), "script@proc@eventareas@castorsPond@stagefour", func_415(0), 0);
				}
				else
				{
					__LIB_8__::func_188(&(Local_1618[0 /*7*/]), "script@proc@eventareas@castorsPond@stageTwo_Father", "PBL_intro_idle", 0);
				}
				break;
		}
	}
}

void func_211(var uParam0)
{
	uParam0->f_132 = 1;
	*uParam0 = -3.5f;
	if (__LIB_7__::func_907(Local_1389.f_136, 128))
	{
		if (__LIB_4__::func_241(2))
		{
			if (iLocal_18 == 3 && __LIB_4__::func_241(16))
			{
				uParam0->f_1 = "HOME_LN01ANW";
				uParam0->f_135 = "HOME_LN01ANP";
				uParam0->f_5 = "HOME_LN01ANN";
			}
			else
			{
				uParam0->f_1 = "HOME_LN01ANA";
				uParam0->f_135 = "HOME_LN01ANP";
				uParam0->f_5 = "HOME_LN01ANN";
			}
		}
		else if ((iLocal_18 == 3 && __LIB_7__::func_908(Local_1389.f_136, 128)) && !__LIB_10__::func_282(64))
		{
			uParam0->f_1 = "HOME_NJI";
			uParam0->f_135 = "HOME_NJIP";
			uParam0->f_5 = "HOME_NJIN";
		}
		else if (__LIB_1__::func_985())
		{
			uParam0->f_1 = "HMSTD_IG2NJ";
			uParam0->f_135 = "HMSTD_RESP";
			uParam0->f_5 = "HOME2_POS_AO";
			uParam0->f_3 = "HMSTD_IG2NJ2";
		}
		else
		{
			uParam0->f_1 = "HMSTD_IG2NJA";
			uParam0->f_135 = "HMSTD_RESPA";
			uParam0->f_5 = "HOME2_NEG_AO";
			uParam0->f_3 = "HMSTD_IG2NJA2";
		}
		uParam0->f_8 = 0;
		uParam0->f_9 = 0;
	}
	else if (__LIB_4__::func_241(2))
	{
		if (iLocal_18 == 3 && __LIB_4__::func_241(16))
		{
			uParam0->f_1 = "HOME_LN01ANW";
			uParam0->f_135 = "HOME_LN01ANP";
			uParam0->f_5 = "HOME_LN01ANN";
		}
		else
		{
			uParam0->f_1 = "HOME_LN01ANA";
			uParam0->f_135 = "HOME_LN01ANP";
			uParam0->f_5 = "HOME_LN01ANN";
		}
		uParam0->f_8 = 0;
		uParam0->f_9 = 0;
	}
	else
	{
		switch (iLocal_18)
		{
			case 1:
				uParam0->f_1 = "HOME_LN01A";
				uParam0->f_3 = "HOME_LN02A";
				break;
			case 2:
				break;
			case 3:
				if (!__LIB_7__::func_907(Local_1389.f_136, 64))
				{
					uParam0->f_1 = "HMSTD_IG3_ASK";
				}
				else
				{
					uParam0->f_1 = "HMSTD_ASK_2";
				}
				break;
			case 4:
				if (func_417())
				{
					uParam0->f_1 = "HOME_LN01E";
				}
				else
				{
					uParam0->f_1 = "HOME_LN01EA";
					uParam0->f_135 = "HOME_LN02EAP";
					uParam0->f_5 = "HOME_LN02EAN";
				}
				break;
		}
		uParam0->f_8 = 0;
		uParam0->f_9 = 0;
	}
}

void func_212(var uParam0)
{
	uParam0->f_179 = 1;
	switch (iLocal_18)
	{
		case 2:
			StringCopy(&(uParam0->f_34), "HOME_THXA", 64);
			StringCopy(&(uParam0->f_54), "HOME_WLCMA", 64);
			uParam0->f_72 = 100;
			uParam0->f_79 = 1;
			uParam0->f_77 = 0;
			uParam0->f_78 = 0;
			break;
		case 3:
			StringCopy(&(uParam0->f_34), "HOME_THXB", 64);
			StringCopy(&(uParam0->f_54), "HOME_WLCMB", 64);
			uParam0->f_79 = 0;
			uParam0->f_77 = 0;
			uParam0->f_78 = 0;
			uParam0->f_187 = -3.5f;
			uParam0->f_182 = 0;
			break;
		case 4:
			StringCopy(&(uParam0->f_34), "HOME_THXC", 64);
			StringCopy(&(uParam0->f_54), "HOME_WLCMC", 64);
			uParam0->f_79 = 1;
			uParam0->f_77 = 0;
			uParam0->f_78 = 0;
			break;
	}
}

void func_213()
{
	int iVar0;
	int iVar1;
	if (iLocal_18 < 4)
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			iVar1 = 0;
			while (iVar1 < 3)
			{
				if (__LIB_0__::func_27(Global_40.f_9096[Local_1389.f_136 /*12*/].f_6, func_198(iVar0, iVar1)))
				{
					Local_386.f_690[func_418(iVar0, iVar1) /*12*/].f_7 = joaat("P_PLANK_CASTER02X");
					Local_386.f_690[func_418(iVar0, iVar1) /*12*/] = { func_419(iVar0, iVar1) };
					Local_386.f_690[func_418(iVar0, iVar1) /*12*/].f_4 = { func_420(iVar0, iVar1) };
					Local_386.f_690[func_418(iVar0, iVar1) /*12*/].f_10 = 0;
					__LIB_1__::func_683(&(Local_386.f_690[func_418(iVar0, iVar1) /*12*/].f_11), 1);
					__LIB_1__::func_683(&(Local_386.f_690[func_418(iVar0, iVar1) /*12*/].f_11), 64);
					__LIB_1__::func_683(&(Local_386.f_690[func_418(iVar0, iVar1) /*12*/].f_11), 2);
				}
				iVar1++;
			}
			iVar0++;
		}
	}
	if (__LIB_4__::func_241(8) || __LIB_4__::func_241(2))
	{
		if (iLocal_18 < 4)
		{
			if (__LIB_4__::func_241(256))
			{
				Local_386.f_690[1 /*12*/].f_7 = joaat("P_CIGARETTE_CS01X");
				Local_386.f_690[1 /*12*/] = { -439.4445f, 507.9429f, 96.03515f };
				Local_386.f_690[1 /*12*/].f_3 = -105f;
				Local_386.f_690[1 /*12*/].f_10 = 0;
			}
			Local_386.f_690[2 /*12*/].f_7 = joaat("P_HAMMER03X");
			Local_386.f_690[2 /*12*/] = { -439.4445f, 507.9429f, 96.03515f };
			Local_386.f_690[2 /*12*/].f_3 = -105f;
			Local_386.f_690[2 /*12*/].f_10 = 0;
			Local_386.f_690[4 /*12*/].f_7 = joaat("P_PLANK_CASTER02X");
			Local_386.f_690[4 /*12*/] = { -439.4445f, 507.9429f, 96.03515f };
			Local_386.f_690[4 /*12*/].f_3 = -105f;
			Local_386.f_690[4 /*12*/].f_10 = 0;
			Local_386.f_690[5 /*12*/].f_7 = joaat("P_PLANK_CASTER02X");
			Local_386.f_690[5 /*12*/] = { -439.4445f, 507.9429f, 96.03515f };
			Local_386.f_690[5 /*12*/].f_3 = -105f;
			Local_386.f_690[5 /*12*/].f_10 = 0;
			Local_386.f_690[6 /*12*/].f_7 = joaat("P_PLANK_CASTER02X");
			Local_386.f_690[6 /*12*/] = { -439.4445f, 507.9429f, 96.03515f };
			Local_386.f_690[6 /*12*/].f_3 = -105f;
			Local_386.f_690[6 /*12*/].f_10 = 0;
			Local_386.f_690[7 /*12*/].f_7 = joaat("P_PLANK_CASTER02X");
			Local_386.f_690[7 /*12*/] = { -439.4445f, 507.9429f, 96.03515f };
			Local_386.f_690[7 /*12*/].f_3 = -105f;
			Local_386.f_690[7 /*12*/].f_10 = 0;
			Local_386.f_690[8 /*12*/].f_7 = joaat("P_PLANK_CASTER02X");
			Local_386.f_690[8 /*12*/] = { -439.4445f, 507.9429f, 96.03515f };
			Local_386.f_690[8 /*12*/].f_3 = -105f;
			Local_386.f_690[8 /*12*/].f_10 = 0;
			Local_386.f_690[9 /*12*/].f_7 = joaat("P_NAILSINGLE01X");
			Local_386.f_690[9 /*12*/] = { -439.4445f, 507.9429f, 96.03515f };
			Local_386.f_690[9 /*12*/].f_3 = -105f;
			Local_386.f_690[9 /*12*/].f_10 = 0;
			Local_386.f_690[10 /*12*/].f_7 = joaat("P_NAILSINGLE01X");
			Local_386.f_690[10 /*12*/] = { -439.4445f, 507.9429f, 96.03515f };
			Local_386.f_690[10 /*12*/].f_3 = -105f;
			Local_386.f_690[10 /*12*/].f_10 = 0;
			Local_386.f_690[11 /*12*/].f_7 = joaat("P_NAILSINGLE01X");
			Local_386.f_690[11 /*12*/] = { -439.4445f, 507.9429f, 96.03515f };
			Local_386.f_690[11 /*12*/].f_3 = -105f;
			Local_386.f_690[11 /*12*/].f_10 = 0;
			Local_386.f_690[12 /*12*/].f_7 = joaat("P_NAILSINGLE01X");
			Local_386.f_690[12 /*12*/] = { -439.4445f, 507.9429f, 96.03515f };
			Local_386.f_690[12 /*12*/].f_3 = -105f;
			Local_386.f_690[12 /*12*/].f_10 = 0;
			if (iLocal_18 == 1)
			{
				if (__LIB_7__::func_924(&Local_1389, 32))
				{
					if (__LIB_0__::func_27(Global_40.f_9096[Local_1389.f_136 /*12*/].f_6, 1))
					{
						Local_386.f_690[0 /*12*/].f_7 = joaat("S_CASTORS_FRAME01X");
						Local_386.f_690[0 /*12*/] = { func_421() };
						Local_386.f_690[0 /*12*/].f_3 = func_422();
					}
					else if (__LIB_7__::func_908(Local_1389.f_136, 4194304))
					{
						Local_386.f_690[0 /*12*/].f_7 = 0;
					}
					else
					{
						Local_386.f_690[0 /*12*/].f_7 = joaat("S_CASTORS_FRAME01X");
						Local_386.f_690[0 /*12*/] = { func_423() };
						Local_386.f_690[0 /*12*/].f_4 = { func_424() };
					}
					__LIB_1__::func_683(&(Local_386.f_690[0 /*12*/].f_11), 2);
				}
				else
				{
					__LIB_1__::func_683(&(Global_40.f_9096[Local_1389.f_136 /*12*/].f_6), 1);
					Local_386.f_690[0 /*12*/].f_7 = joaat("S_CASTORS_FRAME01X");
					Local_386.f_690[0 /*12*/] = { func_421() };
					Local_386.f_690[0 /*12*/].f_3 = func_422();
				}
				Local_386.f_690[0 /*12*/].f_10 = 0;
				__LIB_1__::func_683(&(Local_386.f_690[0 /*12*/].f_11), 1);
				__LIB_1__::func_683(&(Local_386.f_690[0 /*12*/].f_11), 64);
				if (__LIB_7__::func_907(Local_1389.f_136, 128))
				{
					__LIB_1__::func_683(&(Local_386.f_690[0 /*12*/].f_11), 2);
				}
			}
		}
	}
	else
	{
		switch (iLocal_18)
		{
			case 1:
				Local_386.f_690[0 /*12*/].f_7 = joaat("S_CASTORS_FRAME01X");
				Local_386.f_690[0 /*12*/] = { func_421() };
				Local_386.f_690[0 /*12*/].f_3 = func_422();
				Local_386.f_690[0 /*12*/].f_10 = 0;
				__LIB_1__::func_683(&(Local_386.f_690[0 /*12*/].f_11), 1);
				__LIB_1__::func_683(&(Local_386.f_690[0 /*12*/].f_11), 64);
				if (__LIB_7__::func_907(Local_1389.f_136, 128))
				{
					__LIB_1__::func_683(&(Local_386.f_690[0 /*12*/].f_11), 2);
				}
				if (!__LIB_7__::func_907(Local_1389.f_136, 128))
				{
					Local_386.f_690[1 /*12*/].f_7 = joaat("P_CIGARETTE_CS01X");
				}
				else
				{
					Local_386.f_690[1 /*12*/].f_7 = 0;
				}
				Local_386.f_690[1 /*12*/] = { -439.4445f, 507.9429f, 96.03515f };
				Local_386.f_690[1 /*12*/].f_3 = -105f;
				Local_386.f_690[1 /*12*/].f_10 = 0;
				if (!__LIB_7__::func_907(Local_1389.f_136, 128))
				{
					Local_386.f_690[2 /*12*/].f_7 = joaat("P_HAMMER03X");
				}
				else
				{
					Local_386.f_690[2 /*12*/].f_7 = 0;
				}
				Local_386.f_690[2 /*12*/] = { -439.4445f, 507.9429f, 96.03515f };
				Local_386.f_690[2 /*12*/].f_3 = -105f;
				Local_386.f_690[2 /*12*/].f_10 = 0;
				if (!__LIB_7__::func_907(Local_1389.f_136, 128))
				{
					Local_386.f_690[3 /*12*/].f_7 = joaat("SCRIPTEDBALL");
				}
				else
				{
					Local_386.f_690[3 /*12*/].f_7 = 0;
				}
				Local_386.f_690[3 /*12*/] = { -438.4642f, 508.0584f, 97.86085f };
				Local_386.f_690[3 /*12*/].f_3 = -174.79f;
				Local_386.f_690[3 /*12*/].f_10 = 0;
				__LIB_1__::func_683(&(Local_386.f_690[3 /*12*/].f_11), 1);
				__LIB_1__::func_683(&(Local_386.f_690[3 /*12*/].f_11), 2);
				break;
			case 3:
				if (!__LIB_7__::func_907(Local_1389.f_136, 128))
				{
					Local_386.f_690[0 /*12*/].f_7 = joaat("P_CS_BILLSTACK01X");
				}
				else
				{
					Local_386.f_690[0 /*12*/].f_7 = 0;
				}
				Local_386.f_690[0 /*12*/] = { -439.4445f, 507.9429f, 96.03515f };
				Local_386.f_690[0 /*12*/].f_3 = -105f;
				Local_386.f_690[0 /*12*/].f_10 = 0;
				Local_386.f_690[2 /*12*/].f_7 = joaat("P_HAMMER03X");
				Local_386.f_690[2 /*12*/] = { -439.4445f, 507.9429f, 96.03515f };
				Local_386.f_690[2 /*12*/].f_3 = -105f;
				Local_386.f_690[2 /*12*/].f_10 = 0;
				Local_386.f_690[4 /*12*/].f_7 = joaat("P_PLANK_CASTER02X");
				Local_386.f_690[4 /*12*/] = { -439.4445f, 507.9429f, 96.03515f };
				Local_386.f_690[4 /*12*/].f_3 = -105f;
				Local_386.f_690[4 /*12*/].f_10 = 0;
				Local_386.f_690[5 /*12*/].f_7 = joaat("P_PLANK_CASTER02X");
				Local_386.f_690[5 /*12*/] = { -439.4445f, 507.9429f, 96.03515f };
				Local_386.f_690[5 /*12*/].f_3 = -105f;
				Local_386.f_690[5 /*12*/].f_10 = 0;
				Local_386.f_690[6 /*12*/].f_7 = joaat("P_PLANK_CASTER02X");
				Local_386.f_690[6 /*12*/] = { -439.4445f, 507.9429f, 96.03515f };
				Local_386.f_690[6 /*12*/].f_3 = -105f;
				Local_386.f_690[6 /*12*/].f_10 = 0;
				Local_386.f_690[7 /*12*/].f_7 = joaat("P_PLANK_CASTER02X");
				Local_386.f_690[7 /*12*/] = { -439.4445f, 507.9429f, 96.03515f };
				Local_386.f_690[7 /*12*/].f_3 = -105f;
				Local_386.f_690[7 /*12*/].f_10 = 0;
				Local_386.f_690[8 /*12*/].f_7 = joaat("P_PLANK_CASTER02X");
				Local_386.f_690[8 /*12*/] = { -439.4445f, 507.9429f, 96.03515f };
				Local_386.f_690[8 /*12*/].f_3 = -105f;
				Local_386.f_690[8 /*12*/].f_10 = 0;
				Local_386.f_690[9 /*12*/].f_7 = joaat("P_NAILSINGLE01X");
				Local_386.f_690[9 /*12*/] = { -439.4445f, 507.9429f, 96.03515f };
				Local_386.f_690[9 /*12*/].f_3 = -105f;
				Local_386.f_690[9 /*12*/].f_10 = 0;
				Local_386.f_690[10 /*12*/].f_7 = joaat("P_NAILSINGLE01X");
				Local_386.f_690[10 /*12*/] = { -439.4445f, 507.9429f, 96.03515f };
				Local_386.f_690[10 /*12*/].f_3 = -105f;
				Local_386.f_690[10 /*12*/].f_10 = 0;
				Local_386.f_690[11 /*12*/].f_7 = joaat("P_NAILSINGLE01X");
				Local_386.f_690[11 /*12*/] = { -439.4445f, 507.9429f, 96.03515f };
				Local_386.f_690[11 /*12*/].f_3 = -105f;
				Local_386.f_690[11 /*12*/].f_10 = 0;
				Local_386.f_690[12 /*12*/].f_7 = joaat("P_NAILSINGLE01X");
				Local_386.f_690[12 /*12*/] = { -439.4445f, 507.9429f, 96.03515f };
				Local_386.f_690[12 /*12*/].f_3 = -105f;
				Local_386.f_690[12 /*12*/].f_10 = 0;
				break;
			case 4:
				if (func_417())
				{
					Local_386.f_690[0 /*12*/].f_7 = joaat("P_CS_BILLSTACK01X");
					Local_386.f_690[0 /*12*/] = { -442.2039f, 497.12f, 98.7195f };
					Local_386.f_690[0 /*12*/].f_3 = -1.93f;
					Local_386.f_690[0 /*12*/].f_10 = 0;
				}
				else
				{
					Local_386.f_690[1 /*12*/].f_7 = joaat("P_CIGARETTE_CS01X");
					Local_386.f_690[1 /*12*/] = { -439.4445f, 507.9429f, 96.03515f };
					Local_386.f_690[1 /*12*/].f_3 = -105f;
					Local_386.f_690[1 /*12*/].f_10 = 0;
				}
				break;
		}
	}
}

Vector3 func_215()
{
	return -439.4356f, 498.2648f, 97.93082f;
}

bool func_216()
{
	if (!__LIB_3__::func_316(&(Local_386.f_690)))
	{
		return false;
	}
	return true;
}

bool func_217(bool bParam0)
{
	switch (iLocal_19)
	{
		case 0:
			iLocal_1817 = INTERIOR::GET_INTERIOR_AT_COORDS(func_426());
			INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_1817);
			iLocal_19 = 1;
			break;
		case 1:
			if (INTERIOR::IS_VALID_INTERIOR(iLocal_1817) && INTERIOR::IS_INTERIOR_READY(iLocal_1817))
			{
				if (bParam0)
				{
					if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iLocal_1817, "cas_housewares"))
					{
						INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iLocal_1817, "cas_housewares", 0);
					}
				}
				else if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iLocal_1817, "cas_housewares"))
				{
					INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iLocal_1817, "cas_housewares", true);
				}
				iLocal_19 = 2;
				return true;
			}
			break;
		case 2:
			return true;
	}
	return false;
}

bool func_218()
{
	if (iLocal_18 == 2)
	{
		if ((AUDIO::PREPARE_MUSIC_EVENT("SP_EVENT_AREA_CASTORS_2_IDLE") && AUDIO::PREPARE_MUSIC_EVENT("SP_EVENT_AREA_CASTORS_2_START")) && AUDIO::PREPARE_MUSIC_EVENT("SP_EVENT_AREA_CASTORS_2_ACTION"))
		{
			return true;
		}
		return false;
	}
	return true;
}

bool func_221(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (uParam0->f_137 == 76)
	{
		__LIB_7__::func_949(&iVar0, &iVar1, __LIB_7__::func_908(1, 1048576));
	}
	else
	{
		__LIB_1__::func_902(uParam0->f_137, &iVar0, &iVar1, 0, 0);
	}
	iVar2 = iVar0;
	while (iVar2 <= iVar1)
	{
		if (__LIB_0__::func_29(iVar2) && !__LIB_0__::func_117(iVar2, 32))
		{
			iVar3 = __LIB_2__::func_929(iVar2);
			if (!__LIB_3__::func_188(iVar3))
			{
				return false;
			}
		}
		iVar2++;
	}
	return true;
}

bool func_235()
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1618[iVar1 /*7*/]))
		{
			if (!__LIB_7__::func_990(&(Local_1618[iVar1 /*7*/])))
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

void func_236()
{
	if (!ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_963(Local_1389.f_138)))
	{
		if (!__LIB_7__::func_955(__LIB_2__::func_963(Local_1389.f_138), 1))
		{
			__LIB_2__::func_133(__LIB_2__::func_963(Local_1389.f_138), "HOME_FOREMAN", 0);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_963(65)))
	{
		if (!__LIB_7__::func_955(__LIB_2__::func_963(65), 1))
		{
			__LIB_2__::func_133(__LIB_2__::func_963(65), "HOME_SON1", 0);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_963(66)))
	{
		if (!__LIB_7__::func_955(__LIB_2__::func_963(66), 1))
		{
			__LIB_2__::func_133(__LIB_2__::func_963(66), "HOME_SON2", 0);
		}
	}
}

Vector3 func_237(int iParam0)
{
	switch (iParam0)
	{
		case 64:
			return -448.439f, 498.22f, 97.101f;
		case 65:
			return -447.9209f, 502.1195f, 97.09232f;
		case 66:
			return -448.263f, 496.549f, 97.108f;
		default:
			break;
	}
	return -448.276f, 501.427f, 97.088f;
}

void func_238(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_238(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_238(iVar2, vParam1, fParam4, iParam5, iParam6);
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

void func_239(var uParam0, var uParam1)
{
	int iVar0;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
	switch (iLocal_18)
	{
		case 1:
			switch (iVar0)
			{
				case 0:
				case default:
					*uParam0 = { -438.3227f, 502.7075f, 96.96414f };
					*uParam1 = -172.27f;
					break;
				case 1:
					*uParam0 = { -439.1737f, 501.2494f, 97.9471f };
					*uParam1 = 0.08f;
					break;
				case 2:
					*uParam0 = { -439.7097f, 502.6812f, 96.99051f };
					*uParam1 = 0.87f;
					break;
			}
			break;
		case 2:
			switch (iVar0)
			{
				case 0:
				case default:
					*uParam0 = { -431.0712f, 500.0492f, 97.08342f };
					*uParam1 = 1.82f;
					break;
				case 1:
					*uParam0 = { -430.9988f, 498.5522f, 97.17651f };
					*uParam1 = 1.82f;
					break;
				case 2:
					*uParam0 = { -440.5598f, 501.184f, 97.93082f };
					*uParam1 = -169.43f;
					break;
			}
			break;
		case 3:
			switch (iVar0)
			{
				case 0:
				case default:
					*uParam0 = { -431.0101f, 500.1457f, 97.08251f };
					*uParam1 = -177.44f;
					break;
				case 1:
					*uParam0 = { -434.0943f, 501.0357f, 97.00861f };
					*uParam1 = -179.67f;
					break;
				case 2:
					*uParam0 = { -438.3969f, 501.2292f, 97.93732f };
					*uParam1 = -178.38f;
					break;
				case 3:
					*uParam0 = { -435.3391f, 499.4035f, 97.93315f };
					*uParam1 = -176.75f;
					break;
			}
			break;
	}
}

Vector3 func_241()
{
	return -444.5521f, 500.3867f, 98.9383f;
}

float func_242()
{
	return 8.27f;
}

void func_246(int iParam0, bool bParam1)
{
	int iVar0;
	if (!__LIB_8__::func_104(iParam0))
	{
		iVar0 = __LIB_7__::func_942(iParam0);
		__LIB_8__::func_82(iParam0, 1);
		switch (iParam0)
		{
			case 0:
			case 2:
			case 3:
				func_465(iVar0, 0);
				break;
			case 1:
				MAP::_0xD8C7162AB2E2AF45(-238119963);
				break;
		}
		if (bParam1)
		{
			func_466(iParam0, 0);
		}
	}
}

char* func_250(int iParam0)
{
	if (__LIB_8__::func_88(iParam0, 16))
	{
		return "HMSTD_MIN_AGG";
	}
	else
	{
		switch (iParam0->f_16)
		{
			case 4:
			case default:
				return "HMSTD_MIN_ATK";
			case 5:
			case 6:
				return "HMSTD_AIM";
			case 1:
				return "HMSTD_BODY";
			case 2:
				return "HMSTD_HOG_SON";
			case 3:
				return "HMSTD_DYNAMITE";
			case 7:
				switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
				{
					case 0:
					case default:
						return "HMSTD_STEAL1";
					case 1:
						return "HMSTD_STEAL2";
					}
					return "HMSTD_MIN_ATK";
				}
char* func_251(int iParam0, int iParam1)
{
	int iVar0;
	if (__LIB_8__::func_88(iParam0, 16))
	{
		switch (iParam0->f_1)
		{
			case 0:
				switch (iParam1)
				{
					case 0:
						return "HMSTD_S1_AGGR1";
					case 1:
						return "HMSTD_S1_AGGR2";
					default:
						break;
				}
				break;
			default:
				switch (iParam1)
				{
					case 0:
						return "HMSTD_S1_AGGR3";
					case 1:
						return "HMSTD_S1_AGGR4";
					default:
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam0->f_16)
		{
			case 4:
			case default:
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
				switch (iVar0)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								return "HMSTD_S1_ATKM1";
							case 1:
								return "HMSTD_S1_ATKM2";
							default:
								break;
						}
						break;
					case 1:
					default:
						switch (iParam1)
						{
							case 0:
								return "HMSTD_S1_ATKM3";
							case 1:
								return "HMSTD_S1_ATKM4";
							default:
								break;
						}
						break;
				}
				break;
			case 5:
			case 6:
				switch (iParam1)
				{
					case 0:
						return "HMSTD_S1_AIM1";
					case 1:
						return "HMSTD_S1_AIM2";
					default:
						break;
				}
				break;
			case 1:
				switch (iParam1)
				{
					case 0:
						return "HMSTD_S1_BODY1";
					case 1:
						return "HMSTD_S1_BODY2";
				}
				break;
			case 2:
				switch (iParam1)
				{
					case 0:
						switch (iParam0->f_18)
						{
							case 1:
							case default:
								return "HMSTD_S1_HTM1";
							case 2:
								return "HMSTD_S1_HTF1";
						}
						break;
					case 1:
						return "HMSTD_S1_BODY2";
				}
				break;
			case 3:
				switch (iParam1)
				{
					case 0:
						return "HMSTD_S1_DYN1";
					case 1:
						return "HMSTD_S1_DYN2";
					default:
						break;
				}
				break;
			case 7:
				switch (iParam0->f_1)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								return "HMSTD_S1_STEAL1";
							case 1:
								return "HMSTD_S1_STEAL2";
							default:
								break;
						}
						break;
					default:
						switch (iParam1)
						{
							case 0:
								return "HMSTD_S1_STEAL3";
							case 1:
								return "HMSTD_S1_STEAL4";
							default:
								break;
						}
						break;
				}
				break;
		}
	}
	return "HMSTD_S1_ATKM1";
}

char* func_252(int iParam0, int iParam1)
{
	int iVar0;
	if (__LIB_8__::func_88(iParam0, 16))
	{
		switch (iParam0->f_1)
		{
			case 0:
				switch (iParam1)
				{
					case 0:
						return "HMSTD_S2_AGGR1";
					case 1:
						return "HMSTD_S2_AGGR2";
					default:
						break;
				}
				break;
			default:
				switch (iParam1)
				{
					case 0:
						return "HMSTD_S2_AGGR3";
					case 1:
						return "HMSTD_S2_AGGR4";
					default:
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam0->f_16)
		{
			case 4:
			case default:
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
				switch (iVar0)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								return "HMSTD_S2_ATKM1";
							case 1:
								return "HMSTD_S2_ATKM2";
							default:
								break;
						}
						break;
					case 1:
					default:
						switch (iParam1)
						{
							case 0:
								return "HMSTD_S2_ATKM3";
							case 1:
								return "HMSTD_S2_ATKM4";
							default:
								break;
						}
						break;
				}
				break;
			case 5:
			case 6:
				switch (iParam1)
				{
					case 0:
						return "HMSTD_S2_AIM1";
					case 1:
						return "HMSTD_S2_AIM2";
					default:
						break;
				}
				break;
			case 1:
				switch (iParam1)
				{
					case 0:
						return "HMSTD_S2_BODY1";
					case 1:
						return "HMSTD_S2_BODY2";
				}
				break;
			case 2:
				switch (iParam1)
				{
					case 0:
						switch (iParam0->f_18)
						{
							case 1:
							case default:
								return "HMSTD_S2_HTM1";
							case 2:
								return "HMSTD_S2_HTF1";
						}
						break;
					case 1:
						return "HMSTD_S2_BODY2";
				}
				break;
			case 3:
				switch (iParam1)
				{
					case 0:
						return "HMSTD_S2_DYN1";
					case 1:
						return "HMSTD_S2_DYN2";
					default:
						break;
				}
				break;
			case 7:
				switch (iParam0->f_1)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								return "HMSTD_S2_STEAL1";
							case 1:
								return "HMSTD_S2_STEAL2";
							default:
								break;
						}
						break;
					default:
						switch (iParam1)
						{
							case 0:
								return "HMSTD_S2_STEAL3";
							case 1:
								return "HMSTD_S2_STEAL4";
							default:
								break;
						}
						break;
				}
				break;
		}
	}
	return "HMSTD_S2_ATKM1";
}

int func_255(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	if (!__LIB_0__::func_75(&(uParam1->f_133)))
	{
		__LIB_1__::func_148(&(uParam1->f_133));
	}
	else if (__LIB_1__::func_871(&(uParam1->f_133)) > iParam2)
	{
		__LIB_0__::func_37(&(uParam1->f_133));
		if (__LIB_2__::func_763(iParam0, 0))
		{
			__LIB_8__::func_124(iParam0, bParam3);
			return 1;
		}
	}
	return 0;
}

bool func_258(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
		if (__LIB_8__::func_259((*iParam0)[*iParam3], 0, iParam1, uParam2, 0, 0))
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

int func_263(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < iLocal_1794)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_1794[iVar1]))
		{
			(*uParam0)[iVar0] = iLocal_1794[iVar1];
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

char* func_267()
{
	return __LIB_0__::func_196(__LIB_1__::func_985(), "HMSTD_S1_CBT1", "HMSTD_S1_CBT2");
}

char* func_268()
{
	return __LIB_0__::func_196(__LIB_1__::func_985(), "HMSTD_S2_CBT1", "HMSTD_S2_CBT2");
}

bool func_272()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bVar0 = false;
	if (PED::_0x5407B7288D0478B7(Global_35, 512) > 0)
	{
		iVar2 = ITEMSET::CREATE_ITEMSET(true);
		iVar3 = PED::_0x7BE607DAFF382FD2(Global_35, iVar2, 512);
		if (iVar3 > 0)
		{
			iVar4 = 0;
			while (iVar4 < iVar3)
			{
				iVar5 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, iVar2));
				if (ENTITY::IS_ENTITY_A_PED(iVar5))
				{
					iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar5);
					if (__LIB_1__::func_205(iVar6, Global_1392194[Local_1389.f_136 /*10*/].f_6, 1, 0))
					{
						bVar0 = true;
					}
					if (__LIB_1__::func_248(iVar6, &iLocal_1768))
					{
						bVar0 = true;
						bVar1 = true;
					}
					else
					{
						iVar4++;
					}
					ITEMSET::DESTROY_ITEMSET(iVar2);
					if (bVar0 && !bVar1)
					{
						__LIB_8__::func_131(&Local_1389, 4096);
					}
					return bVar0;
				}
			}
		}
	}
}

bool func_274()
{
	if (!__LIB_8__::func_332(16384))
	{
		return false;
	}
	if (iLocal_18 != 1)
	{
		return false;
	}
	if (__LIB_4__::func_241(8))
	{
		return false;
	}
	return true;
}

bool func_275()
{
	int iVar0;
	int iVar1;
	if (__LIB_4__::func_241(262144))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1789))
		{
			return false;
		}
		if (ENTITY::_0x3EC28DA1FFAC9DDD(iLocal_1789, Global_35, 1, 1))
		{
			return true;
		}
		if (__LIB_4__::func_257(iLocal_1789) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iLocal_1789))
		{
			return true;
		}
		iVar1 = 0;
		while (iVar1 < 6)
		{
			iVar0 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_1789, iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (ENTITY::IS_ENTITY_DEAD(iVar0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar0, Global_35, 1, 1))
				{
					return true;
				}
			}
			iVar1++;
		}
	}
	return false;
}

void func_279(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	__LIB_2__::func_451(&(Local_40[iParam0 /*21*/]), 0);
	func_484(iParam0, 0);
	if (iParam0 == 0)
	{
		func_53(134217728, bParam2);
	}
	else if (iParam0 == 1)
	{
		func_53(4, bParam2);
	}
	else if (iParam0 == 2)
	{
		func_53(8, bParam2);
	}
	if (bParam1)
	{
		iLocal_334 = -1;
		iLocal_335 = -1;
	}
}

void func_289(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - iParam1))
	{
		__LIB_0__::func_325(uParam0[(iVar0 + iParam1)]);
		iVar0++;
	}
}

void func_290(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	if (iParam3 == -1)
	{
		iVar0 = 0;
		while (iVar0 < (*iParam0 - iParam2))
		{
			if (__LIB_2__::func_1((*iParam0)[(iVar0 + iParam2)], 0, 1))
			{
				TASK::_TASK_SMART_FLEE_STYLE_PED((*iParam0)[(iVar0 + iParam2)], iParam1, iParam6, iParam5, iParam4, -1, 0);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = iParam2;
		while (iVar0 <= iParam3)
		{
			if (__LIB_2__::func_1((*iParam0)[iVar0], 0, 1))
			{
				TASK::_TASK_SMART_FLEE_STYLE_PED((*iParam0)[iVar0], iParam1, iParam6, iParam5, iParam4, -1, 0);
			}
			iVar0++;
		}
	}
}

void func_304()
{
	if (__LIB_7__::func_963(&(Local_1618[0 /*7*/])) && __LIB_8__::func_348(&(Local_1618[0 /*7*/]), "PBL_quick_exit"))
	{
		__LIB_8__::func_183(&(Local_1618[0 /*7*/]), __LIB_2__::func_963(Local_1389.f_138), "father");
		__LIB_8__::func_183(&(Local_1618[0 /*7*/]), Local_386.f_690[2 /*12*/].f_8, "HAMMER");
		__LIB_8__::func_183(&(Local_1618[0 /*7*/]), __LIB_2__::func_963(65), "son_A");
		__LIB_8__::func_183(&(Local_1618[0 /*7*/]), __LIB_2__::func_963(66), "son_B");
		if (!__LIB_4__::func_241(512))
		{
			__LIB_8__::func_418(&(Local_1618[0 /*7*/]), "PBL_quick_exit", 1);
			func_511(&(Local_1618[0 /*7*/]), 1.5f);
			__LIB_8__::func_192(&(Local_1618[0 /*7*/]), "bBreakInternalLoop");
		}
	}
}

void func_305()
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_386.f_690[0 /*12*/].f_8))
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1618[0 /*7*/]))
		{
			__LIB_7__::func_952(&(Local_1618[0 /*7*/]));
		}
		PHYSICS::ACTIVATE_PHYSICS(Local_386.f_690[0 /*12*/].f_8);
		TASK::_0x78B4567E18B54480(Local_386.f_690[0 /*12*/].f_8);
		MISC::_0x8BB99B85444544D9(Local_386.f_690[0 /*12*/].f_8, __LIB_3__::func_970(joaat("EA_CASTORSPOND_HOUSEPRICE_MED")));
	}
}

void func_306()
{
	int iVar0;
	int iVar1;
	if (__LIB_7__::func_963(&(Local_1618[2 /*7*/])))
	{
		iVar0 = __LIB_2__::func_963(65);
		Local_1389.f_140[0] = iVar0;
		iVar1 = __LIB_3__::func_112(iVar0, Global_35, 1060437492 /* Float: 0.707f */);
		if (iVar1 == 1)
		{
			iVar1 = __LIB_3__::func_112(iVar0, Global_35, 1f);
		}
		if (__LIB_8__::func_348(&(Local_1618[2 /*7*/]), func_514(iLocal_29, iVar1)))
		{
			__LIB_8__::func_418(&(Local_1618[2 /*7*/]), func_514(iLocal_29, iVar1), 1);
		}
	}
}

int func_309()
{
	float fVar0;
	int iVar1;
	fVar0 = __LIB_2__::func_118(Local_386.f_690[0 /*12*/].f_8, 1, 1);
	if (fVar0 <= 15f)
	{
		return 100;
	}
	iVar1 = BUILTIN::CEIL(((-4.25f * (fVar0 - 15f)) + 100f));
	return iVar1;
}

bool func_310(int iParam0, var uParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vVar0 = { ENTITY::GET_ENTITY_COORDS(*uParam1, true, false) };
	vVar3 = { ENTITY::GET_ENTITY_COORDS(*iParam0, true, false) };
	if ((vVar0.z + 0.2f) < vVar3.z)
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_TOUCHING_ENTITY(*iParam0, *uParam1))
	{
		return false;
	}
	return true;
}

bool func_327(int iParam0)
{
	float fVar0;
	if (!PED::IS_PED_IN_COMBAT(*iParam0, Global_35))
	{
		return false;
	}
	if (WEAPON::_0xCB690F680A3EA971(*iParam0, 4))
	{
		return false;
	}
	fVar0 = __LIB_2__::func_118(*iParam0, 1, 1);
	if (fVar0 > 20f)
	{
		return true;
	}
	if (__LIB_1__::func_313(&(vLocal_1578[2 /*3*/]), 15f))
	{
		return true;
	}
	if (fVar0 > 4f)
	{
		if (!__LIB_0__::func_75(&(vLocal_1578[2 /*3*/])))
		{
			__LIB_1__::func_148(&(vLocal_1578[2 /*3*/]));
		}
		else if (__LIB_0__::func_33(&(vLocal_1578[2 /*3*/])))
		{
			__LIB_2__::func_112(&(vLocal_1578[2 /*3*/]));
		}
	}
	else if (__LIB_0__::func_75(&(vLocal_1578[2 /*3*/])) && !__LIB_0__::func_33(&(vLocal_1578[2 /*3*/])))
	{
		__LIB_2__::func_113(&(vLocal_1578[2 /*3*/]));
	}
	return false;
}

int func_328(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
		func_547(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
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

bool func_329(int iParam0)
{
	if (!__LIB_8__::func_332(131072))
	{
		return false;
	}
	*iParam0 = __LIB_2__::func_963(65);
	if (ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		return false;
	}
	if (__LIB_0__::func_163(*iParam0, 518218985))
	{
		return false;
	}
	return true;
}

void func_342(int iParam0, int* iParam1, var uParam2, bool bParam3)
{
	var uVar0;
	int iVar1;
	if (iParam0->f_14 > 0)
	{
		iVar1 = func_561(iParam0, iParam1, 15f, uParam2, &uVar0, 0, 1, 0, 0, __LIB_2__::func_340(1, 0, 0), 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
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

void func_360()
{
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1759[1]))
	{
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1759[6]))
		{
			if (__LIB_1__::func_205(Global_35, iLocal_1759[1], 1, 0))
			{
				__LIB_0__::func_172(iLocal_1759[6]);
			}
		}
		else if (!__LIB_1__::func_205(Global_35, iLocal_1759[1], 1, 0))
		{
			func_28();
		}
	}
}

void func_361(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	__LIB_2__::func_602(&(Local_125[iParam0 /*52*/][0 /*17*/]), __LIB_2__::func_460(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_2__::func_602(&(Local_125[iParam0 /*52*/][1 /*17*/]), __LIB_2__::func_460(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	__LIB_2__::func_602(&(Local_125[iParam0 /*52*/][2 /*17*/]), __LIB_2__::func_460(12), "", joaat("INPUT_INTERACT_LOCKON_ROB"), 0, 0, 0, 1, 0);
}

void func_362(int iParam0)
{
	if (__LIB_10__::func_282(128))
	{
		if (iLocal_1648 < 3)
		{
			if (__LIB_2__::func_227(0, 1, *iParam0, 1) && __LIB_2__::func_227(0, 1, Global_35, 1))
			{
				if (iLocal_335 != -1 || (__LIB_8__::func_88(&Local_1549, 1) && Local_1549 == *iParam0))
				{
					if (__LIB_1__::func_322(func_577()))
					{
						__LIB_5__::func_239(func_577(), 0, 0);
					}
					__LIB_1__::func_148(&(vLocal_1578[8 /*3*/]));
					return;
				}
				if (!__LIB_0__::func_75(&(vLocal_1578[8 /*3*/])))
				{
					if (fLocal_1647 < 30f)
					{
						fLocal_1647 = 45f;
					}
					else
					{
						fLocal_1647 = MISC::GET_RANDOM_FLOAT_IN_RANGE(30f, 45f);
					}
					__LIB_1__::func_148(&(vLocal_1578[8 /*3*/]));
				}
				if (__LIB_1__::func_285(&(vLocal_1578[8 /*3*/]), fLocal_1647))
				{
					if (__LIB_2__::func_118(*iParam0, 1, 1) < 12.5f)
					{
						__LIB_8__::func_336(&(Local_1389.f_35), func_577(), *iParam0, Global_35, 0, 0, 1, 1);
						__LIB_0__::func_37(&(vLocal_1578[8 /*3*/]));
						iLocal_1648++;
					}
				}
			}
		}
	}
}

void func_363(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	char[] cVar6[8];
	if (!__LIB_8__::func_332(2097152))
	{
		return;
	}
	func_579();
	iVar0 = __LIB_2__::func_340(1, 0, 0);
	iVar1 = 1;
	bVar2 = (iLocal_18 == 3 && !__LIB_7__::func_907(Local_1389.f_136, 128));
	iVar4 = 0;
	while (iVar4 < 4)
	{
		if (iVar4 == 3)
		{
		}
		else if (__LIB_8__::func_88(&Local_1549, 1) && Local_1549 == iLocal_1768[iVar4])
		{
		}
		else
		{
			func_580(iVar4, bVar2);
			if (iVar4 == 1 && __LIB_10__::func_282(4))
			{
				if (DECORATOR::DECOR_EXIST_ON(iLocal_1768[iVar4], "bScriptedILO"))
				{
					DECORATOR::DECOR_REMOVE(iLocal_1768[iVar4], "bScriptedILO");
				}
			}
			else if (iVar4 == 2 && __LIB_10__::func_282(8))
			{
				if (DECORATOR::DECOR_EXIST_ON(iLocal_1768[iVar4], "bScriptedILO"))
				{
					DECORATOR::DECOR_REMOVE(iLocal_1768[iVar4], "bScriptedILO");
				}
			}
			else if (iVar4 == 0)
			{
				if (__LIB_10__::func_282(16))
				{
					if (DECORATOR::DECOR_EXIST_ON(iLocal_1768[iVar4], "bScriptedILO"))
					{
						DECORATOR::DECOR_REMOVE(iLocal_1768[iVar4], "bScriptedILO");
					}
				}
				else
				{
					fVar3 = 8f;
					iVar0 = __LIB_2__::func_340(1, 0, 0);
					if (iVar4 == 0)
					{
						fVar3 = __LIB_0__::func_514(iLocal_18 == 4, 8f, 20f);
						if (__LIB_8__::func_332(33554432))
						{
							iVar0 = 1;
						}
					}
					else if (iVar4 == 1)
					{
						if (__LIB_8__::func_332(131072))
						{
							fVar3 = 8f;
							iVar0 = __LIB_2__::func_340(1, 0, 0) | 2048;
						}
					}
					if (!DECORATOR::DECOR_EXIST_ON(iLocal_1768[iVar4], "bScriptedILO"))
					{
						DECORATOR::DECOR_SET_BOOL(iLocal_1768[iVar4], "bScriptedILO", true);
					}
					iVar5 = func_561(&(iLocal_1768[iVar4]), &(Local_40[iVar4 /*21*/]), fVar3, &(Local_125[iVar4 /*52*/]), &iVar1, 0, 1, 0, 0, iVar0, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
					if (!__LIB_10__::func_282(2) && __LIB_1__::func_489(&(Local_40[iVar4 /*21*/]), 1))
					{
						func_141(2);
					}
					if (iLocal_334 <= -1)
					{
						if (iVar5 != -1)
						{
							iLocal_334 = iVar5;
							iLocal_335 = iVar4;
						}
					}
				}
				iVar4++;
				if (__LIB_8__::func_332(67108864))
				{
					return;
				}
				if (__LIB_4__::func_241(2))
				{
					return;
				}
				if (iLocal_335 > 0 && iLocal_334 > -1)
				{
					if (!__LIB_8__::func_332(1048576))
					{
						if (__LIB_1__::func_322("HMSTD_SONS_FIRE") || AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_1768[iLocal_335]))
						{
							__LIB_8__::func_111("HMSTD_SONS_FIRE", 1);
							AUDIO::STOP_CURRENT_PLAYING_SPEECH(iLocal_1768[iLocal_335], 0);
						}
						if (func_584(iLocal_335, bVar2))
						{
							cVar6 = __LIB_0__::func_196(iLocal_334 == 0, func_585(iLocal_335, bVar2), func_586(iLocal_335, bVar2));
							__LIB_8__::func_336(&(Local_1389.f_35), cVar6, Global_35, iLocal_1768[iLocal_335], 0, 0, 1, 1);
							iVar4 = iLocal_335;
							func_279(iLocal_335, 1, 0);
							func_141(func_587(iVar4));
							__LIB_13__::func_188(1048576);
						}
					}
				}
				if (!__LIB_8__::func_332(134217728))
				{
					if (__LIB_2__::func_227(-3.5f, 1, 0, 0) && !__LIB_0__::func_481(1))
					{
						if (iLocal_334 == 1 && !__LIB_8__::func_332(16777216))
						{
						}
						func_279(0, 1, 0);
						func_589(0);
						__LIB_13__::func_187(134217728);
					}
				}
				else if (iLocal_335 == 0)
				{
					switch (iLocal_334)
					{
						case 0:
							if (__LIB_8__::func_332(8192) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_135))
							{
								__LIB_8__::func_336(&(Local_1389.f_35), uParam0->f_135, Global_35, iLocal_1768[0], 0, 0, 1, 1);
								func_590(uParam0);
							}
							else
							{
								__LIB_8__::func_336(&(Local_1389.f_35), func_591(), Global_35, iLocal_1768[0], 0, 0, 1, 1);
								__LIB_13__::func_187(8388608);
								if (iLocal_18 == 2 && !func_592(&iLocal_1794))
								{
									func_279(1, 1, 0);
									func_279(2, 1, 0);
								}
							}
							func_279(0, 1, 1);
							break;
						case 1:
							if (__LIB_8__::func_332(8192) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_135))
							{
								func_590(uParam0);
							}
							if (__LIB_8__::func_332(16777216))
							{
								__LIB_13__::func_188(16777216);
								__LIB_8__::func_336(&(Local_1389.f_35), "HMSTD_ASK_QUIT", Global_35, iLocal_1768[0], 0, 0, 1, 1);
								__LIB_13__::func_187(4194304);
								__LIB_8__::func_82(Local_1389.f_136, 262144);
								__LIB_8__::func_83(Local_1389.f_136, 256);
								func_279(0, 1, 0);
							}
							else
							{
								if (__LIB_8__::func_332(8192) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_5))
								{
									__LIB_8__::func_336(&(Local_1389.f_35), uParam0->f_5, Global_35, iLocal_1768[0], 0, 0, 1, 1);
									func_590(uParam0);
								}
								else
								{
									__LIB_8__::func_336(&(Local_1389.f_35), func_593(), Global_35, iLocal_1768[0], 0, 0, 1, 1);
								}
								func_279(0, 1, 1);
							}
							break;
					}
				}
			}
		}
	}
}

void func_364()
{
	if (func_594() && (MISC::GET_FRAME_COUNT() % 30) == 0)
	{
		if (__LIB_8__::func_215(Local_1389.f_136))
		{
			func_5(4);
		}
	}
}

char* func_365()
{
	return "HOME_BLIP_FM";
}

void func_367(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	if ((iLocal_1640 % 5) != 0)
	{
		return;
	}
	if (__LIB_4__::func_241(8388608))
	{
		return;
	}
	if (__LIB_2__::func_227(0, 1, 0, 0))
	{
		if (!__LIB_0__::func_75(&(vLocal_1578[5 /*3*/])))
		{
			__LIB_1__::func_148(&(vLocal_1578[5 /*3*/]));
		}
		if (__LIB_1__::func_285(&(vLocal_1578[5 /*3*/]), 14f))
		{
			fVar0 = __LIB_2__::func_118(*iParam0, 1, 1);
			fVar1 = __LIB_2__::func_118(*iParam1, 1, 1);
			if (__LIB_1__::func_376(*iParam0))
			{
				fVar0 = 999f;
			}
			if (__LIB_1__::func_376(*iParam1))
			{
				fVar1 = 999f;
			}
			if (fVar0 < 8f && fVar1 < 8f)
			{
				if (__LIB_4__::func_241(4194304))
				{
					fVar0 = 8f;
				}
				else
				{
					fVar1 = 8f;
				}
			}
			if (fVar0 < 8f)
			{
				__LIB_8__::func_336(&(Local_1389.f_35), func_596(), *iParam0, *iParam1, 0, 0, 0, 1);
				__LIB_0__::func_37(&(vLocal_1578[5 /*3*/]));
				func_5(4194304);
			}
			else if (fVar1 < 8f)
			{
				__LIB_8__::func_336(&(Local_1389.f_35), func_597(), *iParam1, *iParam0, 0, 0, 0, 1);
				__LIB_0__::func_37(&(vLocal_1578[5 /*3*/]));
				func_139(4194304);
			}
		}
	}
}

int func_368()
{
	func_598();
	switch (iLocal_20)
	{
		case 0:
			Local_2071.f_12 = 20f;
			Local_2071.f_13 = 15f;
			__LIB_4__::func_389(1986792065, 0, 1);
			iLocal_20 = 2;
			break;
		case 2:
			if (func_600(Local_1389.f_136, &Local_386, &Local_1389, 50f))
			{
				iLocal_20 = 10;
			}
			break;
		case 10:
			break;
	}
	return 0;
}

int func_369(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	vector3 vVar1;
	char[] cVar4[8];
	bool bVar5;
	var uVar6;
	vector3 vVar7;
	if (iLocal_20 > 5)
	{
		func_601(7.5f, 15f, 15f, __LIB_10__::func_282(64));
	}
	func_602(iParam1, 65);
	func_194(0);
	switch (iLocal_20)
	{
		case 0:
			Local_2071.f_12 = 15f;
			Local_2071.f_13 = 8f;
			__LIB_8__::func_147(&(Local_1618[0 /*7*/]), *iParam0, "father", 1);
			StringCopy(&(Local_1618[0 /*7*/].f_4), "bBreakInternalLoop", 24);
			STREAMING::_REQUEST_SCENARIO_TYPE(func_604(), 1, __LIB_2__::func_929(Local_1389.f_138), func_605());
			if (!__LIB_10__::func_282(64))
			{
				__LIB_8__::func_148(&(Local_1618[0 /*7*/]), Local_386.f_690[1 /*12*/].f_8, "CIGARETTE");
				STREAMING::_REQUEST_SCENARIO_TYPE(__LIB_9__::func_751(), 1, __LIB_2__::func_929(Local_1389.f_138), func_608());
			}
			else
			{
				__LIB_8__::func_15(&(Local_1618[0 /*7*/]), func_609(), func_610());
			}
			if (__LIB_4__::func_241(2048))
			{
				STREAMING::_REQUEST_SCENARIO_TYPE(func_612(), 262145, __LIB_2__::func_929(66), joaat("WORLD_HUMAN_HAMMER_WALL"));
				STREAMING::_REQUEST_SCENARIO_TYPE(func_613(), 262145, __LIB_2__::func_929(66), 1727477609);
			}
			else
			{
				__LIB_8__::func_124(65, 1);
				__LIB_8__::func_124(66, 1);
			}
			func_279(0, 1, 1);
			func_614(0);
			func_589(1);
			func_589(2);
			func_615(1, 0);
			func_616(1);
			__LIB_8__::func_16(&(Local_1618[0 /*7*/]));
			iLocal_20 = 2;
			break;
		case 2:
			if (__LIB_2__::func_215(*iParam0, Global_35, 0, Local_2071.f_13, 0) || (iLocal_334 == 0 && iLocal_335 == 0))
			{
				if (iLocal_334 == 0 && iLocal_335 == 0)
				{
					__LIB_2__::func_478(Global_35, *iParam0, "GREET_MALE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				func_279(0, 1, 1);
				func_615(1, 0);
				if (__LIB_10__::func_282(64))
				{
					__LIB_8__::func_48(iParam0, 0, 0);
					if (!__LIB_10__::func_282(2))
					{
						__LIB_3__::func_667(*iParam0, &uLocal_1540, 0f, 0f, 0f, 0, 60f, 20f, -1, 4000, 4000, 3.5f, 0, 1, 1084227584 /* Float: 5f */);
					}
					__LIB_8__::func_359(&(Local_1618[0 /*7*/]));
					if (__LIB_4__::func_241(2048))
					{
						__LIB_4__::func_115(*iParam2, joaat("MAIN_ACTION_SON"), 1f, 0, "MAIN_ACTION_SON", 1, 106);
						PED::_0x2208438012482A1A(*iParam2, false, false);
					}
					__LIB_8__::func_336(&(Local_1389.f_35), Local_2071.f_1, *iParam0, Global_35, 0, 0, 1, 1);
					iLocal_20 = 3;
				}
				else
				{
					__LIB_8__::func_48(iParam0, 0, 0);
					if (!__LIB_10__::func_282(2))
					{
						__LIB_3__::func_667(*iParam0, &uLocal_1540, 0f, 0f, 0f, 0, 60f, 20f, -1, 4000, 4000, 3.5f, 0, 1, 1084227584 /* Float: 5f */);
					}
					vVar1 = { __LIB_2__::func_114(Global_35, 1065353216 /* Float: 1f */) };
					iVar0 = __LIB_2__::func_431(*iParam0, vVar1, 1060437492 /* Float: 0.707f */);
					switch (iVar0)
					{
						case 0:
							cVar4 = "PBL_action_F";
							break;
						case 2:
							cVar4 = "PBL_action_R";
							break;
						case 3:
							cVar4 = "PBL_action_L";
							break;
						case 1:
							iVar0 = __LIB_2__::func_431(*iParam0, vVar1, 1f);
							switch (iVar0)
							{
								case 3:
									cVar4 = "PBL_action_back_L";
									break;
								case 2:
									cVar4 = "PBL_action_back_R";
									break;
							}
							break;
					}
					__LIB_8__::func_151(&(Local_1618[0 /*7*/]), cVar4);
					iLocal_30 = __LIB_3__::func_721(*iParam0, VOLUME::_CREATE_VOLUME_CYLINDER(ENTITY::GET_ENTITY_COORDS(*iParam0, true, false), 0f, 0f, ENTITY::GET_ENTITY_HEADING(*iParam0), 5.5f, 5.5f, 5.5f), 148);
					iLocal_20 = 8;
				}
			}
			break;
		case 8:
			if (!__LIB_2__::func_763(Local_1389.f_138, 0))
			{
				__LIB_8__::func_123(Local_1389.f_138, 1, 1);
			}
			__LIB_8__::func_48(iParam0, 0, 0);
			if (__LIB_2__::func_118(*iParam0, 0, 1) < 5.5f)
			{
				__LIB_8__::func_48(&Global_35, 0, *iParam0);
			}
			if (__LIB_8__::func_34(&(Local_1618[0 /*7*/])))
			{
				__LIB_8__::func_575(&(Local_1618[0 /*7*/]), 1, 1);
				if (__LIB_4__::func_241(2048))
				{
					__LIB_4__::func_115(*iParam2, joaat("MAIN_ACTION_SON"), 1f, 0, "MAIN_ACTION_SON", 1, 106);
					PED::_0x2208438012482A1A(*iParam2, false, false);
				}
				__LIB_8__::func_336(&(Local_1389.f_35), Local_2071.f_1, *iParam0, Global_35, 0, 0, 1, 1);
				__LIB_8__::func_85(Local_1389.f_136, 4096);
				if (!__LIB_7__::func_907(Local_1389.f_136, 16777216))
				{
					__LIB_8__::func_85(Local_1389.f_136, 16777216);
				}
				iLocal_20 = 3;
			}
			break;
		case 3:
			__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			if (__LIB_8__::func_355(&(Local_1618[0 /*7*/])))
			{
				__LIB_8__::func_360(&(Local_1618[0 /*7*/]));
			}
			if (!__LIB_2__::func_763(Local_1389.f_138, 0))
			{
				__LIB_8__::func_123(Local_1389.f_138, 1, 1);
			}
			__LIB_8__::func_48(iParam0, 0, 0);
			if (__LIB_2__::func_118(*iParam0, 0, 1) < 5.5f)
			{
				__LIB_8__::func_48(&Global_35, 0, *iParam0);
			}
			if (!__LIB_10__::func_282(2))
			{
				__LIB_3__::func_667(*iParam0, &uLocal_1540, 0f, 0f, 0f, 0, 60f, 20f, -1, 4000, 4000, 3.5f, 0, 1, 1084227584 /* Float: 5f */);
			}
			if (!__LIB_4__::func_241(16777216))
			{
				func_5(16777216);
				func_632(Local_1389.f_136, 131072);
			}
			if (__LIB_2__::func_118(*iParam0, 1, 1) < 3.5f || __LIB_8__::func_8(&(Local_1618[0 /*7*/])) > 0.5f)
			{
				__LIB_2__::func_298();
				__LIB_0__::func_37(&(vLocal_1578[1 /*3*/]));
				func_279(0, 1, 1);
				iLocal_20 = 4;
			}
			break;
		case 4:
			__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			__LIB_8__::func_48(iParam0, 0, 0);
			if (__LIB_2__::func_227(-3.5f, 1, 0, 0) && !AUDIO::_0x1ECC76792F661CF5(Local_2071.f_1))
			{
				if (!__LIB_0__::func_75(&(vLocal_1578[1 /*3*/])))
				{
					__LIB_1__::func_148(&(vLocal_1578[1 /*3*/]));
					func_615(1, 0);
					func_279(0, 1, 0);
					func_589(0);
				}
				if (__LIB_1__::func_313(&(vLocal_1578[1 /*3*/]), 7.5f))
				{
					__LIB_8__::func_108(&(Local_1389.f_35), Local_2071.f_3, 0);
					func_279(0, 1, 0);
					iLocal_20 = 5;
				}
				if (iLocal_335 == 0)
				{
					switch (iLocal_334)
					{
						case 0:
							__LIB_8__::func_336(&(Local_1389.f_35), Local_2071.f_135, Global_35, *iParam0, 0, 0, 1, 1);
							__LIB_8__::func_108(&(Local_1389.f_35), Local_2071.f_3, 0);
							func_279(0, 1, 1);
							__LIB_13__::func_187(512);
							__LIB_0__::func_37(&(vLocal_1578[1 /*3*/]));
							iLocal_20 = 5;
							break;
						case 1:
							__LIB_8__::func_336(&(Local_1389.f_35), Local_2071.f_5, Global_35, *iParam0, 0, 0, 1, 1);
							__LIB_8__::func_108(&(Local_1389.f_35), Local_2071.f_3, 0);
							func_279(0, 1, 1);
							__LIB_13__::func_187(512);
							__LIB_0__::func_37(&(vLocal_1578[1 /*3*/]));
							iLocal_20 = 5;
							break;
					}
				}
			}
			break;
		case 5:
			if ((!__LIB_8__::func_332(1024) && !AUDIO::_0x1ECC76792F661CF5(Local_2071.f_135)) && !AUDIO::_0x1ECC76792F661CF5(Local_2071.f_5))
			{
				if (__LIB_10__::func_282(64) && !__LIB_8__::func_332(512))
				{
					__LIB_7__::func_952(&(Local_1618[0 /*7*/]));
				}
				else
				{
					__LIB_8__::func_359(&(Local_1618[0 /*7*/]));
				}
				if (__LIB_8__::func_332(512))
				{
					__LIB_8__::func_336(&(Local_1389.f_35), Local_2071.f_3, *iParam0, Global_35, 0, 0, 1, 1);
				}
				__LIB_13__::func_187(1024);
				func_279(0, 1, 0);
			}
			bVar5 = true;
			if (__LIB_2__::func_118(*iParam0, 0, 1) < 5.5f)
			{
				__LIB_8__::func_48(&Global_35, 0, *iParam0);
			}
			if (!__LIB_4__::func_241(33554432))
			{
				if (__LIB_2__::func_227(0, 1, 0, 0))
				{
					__LIB_3__::func_953(&iLocal_30, 1);
					func_5(33554432);
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(*iParam0) && !PED::IS_PED_USING_ANY_SCENARIO(*iParam0))
			{
				bVar5 = false;
				if ((!__LIB_8__::func_332(512) || __LIB_8__::func_332(1024)) && __LIB_2__::func_598(*iParam0, Local_1618[0 /*7*/], "father", joaat("RELEASE"), 0, 1, 0))
				{
					__LIB_0__::func_325(&(uLocal_1790[0]));
					func_616(0);
					func_615(0, 0);
					func_279(0, 1, 0);
					vVar7 = { ENTITY::GET_ENTITY_COORDS(*iParam0, true, false) };
					__LIB_3__::func_409(&vVar7, 0f);
					if (__LIB_10__::func_282(64))
					{
						if (__LIB_8__::func_332(512))
						{
							uVar6 = TASK::CREATE_SCENARIO_POINT(func_604(), vVar7, ENTITY::GET_ENTITY_HEADING(*iParam0), 0, 0, 1);
							TASK::_TASK_USE_SCENARIO_POINT(*iParam0, uVar6, func_637(), -1, false, true, 0, false, -1f, false);
						}
					}
					else
					{
						TASK::_TASK_START_SCENARIO_IN_PLACE(*iParam0, __LIB_9__::func_751(), -1, false, func_608(), -1f, false);
						__LIB_1__::func_951(&(Local_386.f_690[1 /*12*/].f_8));
					}
				}
			}
			if (bVar5)
			{
				func_279(1, 1, 0);
				func_279(2, 1, 0);
				func_589(1);
				func_589(2);
				func_139(8388608);
				__LIB_0__::func_268(&(vLocal_1578[5 /*3*/]), (14f / 2f));
				__LIB_8__::func_253(&Local_1389);
				__LIB_0__::func_325(&(uLocal_1790[0]));
				__LIB_1__::func_148(&(vLocal_1578[1 /*3*/]));
				func_141(128);
				__LIB_3__::func_953(&iLocal_30, 1);
				iLocal_20 = 10;
			}
			break;
		case 7:
			iLocal_20 = 10;
			break;
		case 10:
			break;
	}
	return 0;
}

bool func_370(int iParam0, bool bParam1, bool bParam2)
{
	func_602(&(iLocal_1768[1]), 65);
	func_194(0);
	switch (iLocal_20)
	{
		case 0:
			if (!__LIB_2__::func_763(Local_1389.f_138, 0))
			{
				__LIB_8__::func_123(Local_1389.f_138, 1, 1);
			}
			if (!__LIB_7__::func_907(Local_1389.f_136, 16777216))
			{
				__LIB_8__::func_85(Local_1389.f_136, 16777216);
			}
			func_589(0);
			func_279(0, 1, 1);
			func_589(1);
			func_589(2);
			AUDIO::STOP_PED_SPEAKING(*iParam0, true);
			AUDIO::STOP_PED_SPEAKING(__LIB_2__::func_963(65), true);
			AUDIO::STOP_PED_SPEAKING(__LIB_2__::func_963(66), true);
			iLocal_20 = 2;
			break;
		case 2:
			__LIB_8__::func_85(Local_1389.f_136, 4096);
			iLocal_20 = 3;
			break;
		case 3:
			if (!__LIB_2__::func_763(Local_1389.f_138, 0))
			{
				__LIB_8__::func_123(Local_1389.f_138, 1, 1);
			}
			if (__LIB_2__::func_118(*iParam0, 1, 1) < 30f)
			{
				__LIB_8__::func_93(Local_1389.f_136, 8388608);
				__LIB_8__::func_82(Local_1389.f_136, 16777216);
				__LIB_8__::func_48(iParam0, 0, 0);
				Local_336.f_40 = *iParam0;
				Local_336.f_43 = 4f;
				Local_336.f_41 = 4f;
				Local_336.f_39 = Global_1392194[Local_1389.f_136 /*10*/].f_6;
				func_5(65536);
				PED::_0x62FDAD5E01D2DD47(*iParam0, Global_36, 1, 0);
				TASK::CLEAR_PED_TASKS(*iParam0, true, false);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_1818);
				TASK::TASK_GO_TO_ENTITY(0, Global_35, -1, 5f, 1.5f, 7f, 0);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 5000, -1f, -1f, -1f);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_1818);
				TASK::_TASK_PERFORM_SEQUENCE_2(*iParam0, iLocal_1818, 2f, 7.5f);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1818);
				__LIB_8__::func_336(&(Local_1389.f_35), Local_2071.f_1, *iParam0, Global_35, 0, 0, 1, 1);
				func_615(1, 0);
				func_279(0, 1, 0);
				func_639(0);
				__LIB_1__::func_148(&(vLocal_1578[1 /*3*/]));
				iLocal_20 = 4;
			}
			break;
		case 4:
			switch (iLocal_334)
			{
				case 0:
					__LIB_8__::func_336(&(Local_1389.f_35), Local_2071.f_135, *iParam0, Global_35, 0, 0, 1, 1);
					func_361(0);
					func_279(0, 1, 1);
					func_640();
					iLocal_20 = 5;
					return false;
				case 1:
					__LIB_8__::func_336(&(Local_1389.f_35), Local_2071.f_5, *iParam0, Global_35, 0, 0, 1, 1);
					func_361(0);
					func_279(0, 1, 1);
					func_640();
					iLocal_20 = 5;
					return false;
			}
			func_641(iParam0);
			break;
		case 5:
			func_641(iParam0);
			__LIB_8__::func_48(iParam0, 0, 0);
			if (__LIB_2__::func_227(-3.5f, 1, 0, 0))
			{
				if (bParam2)
				{
					__LIB_8__::func_124(Local_1389.f_138, 1);
				}
				func_615(0, 0);
				func_279(0, 1, 0);
				func_640();
				iLocal_20 = 10;
			}
			break;
		case 10:
			func_641(iParam0);
			if (bParam1)
			{
				return true;
			}
			break;
	}
	return false;
}

void func_371()
{
	int iVar0;
	if (!__LIB_7__::func_924(&Local_1389, 2) && __LIB_1__::func_149(1) > 0)
	{
		switch (iLocal_25)
		{
			case 0:
				iVar0 = __LIB_2__::func_963(Local_1389.f_138);
				__LIB_0__::func_928(&(Local_1389.f_35), iVar0, "HOME_FOREMAN", 0);
				Local_2071.f_33 = { Local_1389.f_35 };
				Local_1857.f_81 = { Local_1389.f_35 };
				if (__LIB_0__::func_232(Global_35, iVar0, 1) < 100f)
				{
					func_643(1, __LIB_1__::func_149(1), iLocal_1759[0], ENTITY::GET_ENTITY_COORDS(iVar0, true, false), 1069547520 /* Float: 1.5f */, 1075838976 /* Float: 2.5f */, 1056964608 /* Float: 0.5f */, 0, 1106247680 /* Float: 30f */, 1);
					__LIB_8__::func_337(1);
					iLocal_25 = 2;
				}
				break;
		}
	}
}

int func_372(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	char[] cVar1[8];
	vector3 vVar2;
	int iVar5;
	bool bVar6;
	var uVar7;
	func_645(__LIB_4__::func_241(1073741824 /* Float: 2f */), 0);
	if (iLocal_20 > 9)
	{
		func_601(30f, 60f, 150f, 0);
	}
	if (__LIB_4__::func_241(512))
	{
		func_360();
	}
	switch (iLocal_20)
	{
		case 0:
			Local_2071.f_12 = 15f;
			Local_2071.f_13 = 10f;
			__LIB_8__::func_148(&(Local_1618[0 /*7*/]), Local_386.f_690[0 /*12*/].f_8, "Frame");
			__LIB_8__::func_147(&(Local_1618[0 /*7*/]), *iParam0, "father", 1);
			STREAMING::_REQUEST_SCENARIO_TYPE(__LIB_9__::func_751(), 1, __LIB_2__::func_929(Local_1389.f_138), func_608());
			AUDIO::STOP_PED_SPEAKING(*iParam0, true);
			__LIB_8__::func_148(&(Local_1618[0 /*7*/]), Local_386.f_690[2 /*12*/].f_8, "HAMMER");
			__LIB_8__::func_147(&(Local_1618[0 /*7*/]), *iParam2, "son_B", 1);
			AUDIO::STOP_PED_SPEAKING(*iParam2, true);
			__LIB_8__::func_147(&(Local_1618[0 /*7*/]), *iParam1, "son_A", 1);
			__LIB_8__::func_16(&(Local_1618[0 /*7*/]));
			AUDIO::STOP_PED_SPEAKING(*iParam1, true);
			func_616(1);
			iVar0 = 0;
			while (iVar0 < 4)
			{
				switch (iVar0)
				{
					case 0:
						cVar1 = "PBL_action_enter_F";
						break;
					case 2:
						cVar1 = "PBL_action_enter_R";
						break;
					case 1:
						cVar1 = "PBL_action_enter_B";
						break;
					case 3:
						cVar1 = "PBL_action_enter_L";
						break;
				}
				__LIB_8__::func_26(&(Local_1618[0 /*7*/]), cVar1);
				iVar0++;
			}
			__LIB_8__::func_26(&(Local_1618[0 /*7*/]), "PBL_quick_exit");
			__LIB_8__::func_108(&(Local_1389.f_35), "HMSTD_IG1_ENTER", 0);
			__LIB_8__::func_108(&(Local_1389.f_35), "HMSTD_ENT_RAIN", 0);
			iLocal_1759[4] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-439.3327f, 501.9627f, 98.96794f, 0f, 0f, 2.018299f, 4.107876f, 7.487784f, 2.224686f, "Castor's Ridge - volHorse");
			func_589(1);
			func_279(1, 1, 0);
			func_589(2);
			func_279(2, 1, 0);
			func_279(0, 1, 1);
			func_614(0);
			func_615(1, 1);
			__LIB_13__::func_187(16384);
			iLocal_20 = 3;
			break;
		case 1:
			if (func_600(Local_1389.f_136, &Local_386, &Local_1389, 50f))
			{
				func_5(128);
				iLocal_20 = 2;
			}
			break;
		case 2:
			if (!__LIB_7__::func_907(Local_1389.f_136, 4))
			{
				__LIB_8__::func_85(Local_1389.f_136, 4);
			}
			if (!ENTITY::IS_ENTITY_DEAD(*iParam0) && __LIB_2__::func_215(*iParam0, Global_35, 0, 20f, 0))
			{
				iLocal_20 = 3;
			}
			break;
		case 3:
			if (!__LIB_2__::func_763(Local_1389.f_138, 0))
			{
				__LIB_8__::func_123(Local_1389.f_138, 1, 1);
			}
			if (!__LIB_7__::func_907(Local_1389.f_136, 4))
			{
				__LIB_8__::func_85(Local_1389.f_136, 4);
			}
			if (!func_647(iParam0))
			{
			}
			else
			{
				if ((func_648(&iLocal_1768, &uLocal_34, &uLocal_39, 1073741824 /* Float: 2f */, 10f, 0, 0, 7.5f) || func_649(iLocal_1768[0], 20f, &(vLocal_1578[7 /*3*/]), 7f)) || (iLocal_334 == 0 && iLocal_335 == 0))
				{
					__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
					vVar2 = { __LIB_2__::func_114(Global_35, 1f) };
					if (MISC::IS_STRING_NULL_OR_EMPTY(&(Local_1618[0 /*7*/].f_1)))
					{
						iVar0 = __LIB_2__::func_431(Local_386.f_690[3 /*12*/].f_8, vVar2, 0.692f);
						switch (iVar0)
						{
							case 0:
								cVar1 = "PBL_action_enter_F";
								break;
							case 2:
								cVar1 = "PBL_action_enter_R";
								break;
							case 1:
								cVar1 = "PBL_action_enter_B";
								break;
							case 3:
								cVar1 = "PBL_action_enter_L";
								break;
						}
						__LIB_8__::func_151(&(Local_1618[0 /*7*/]), cVar1);
					}
					if (__LIB_8__::func_34(&(Local_1618[0 /*7*/])))
					{
						if (iLocal_334 == 0 && iLocal_335 == 0)
						{
							__LIB_2__::func_478(Global_35, *iParam0, "GREET_MALE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						func_615(1, 0);
						func_279(0, 1, 1);
						if (!__LIB_7__::func_907(Local_1389.f_136, 128))
						{
							__LIB_8__::func_253(&Local_1389);
						}
						__LIB_8__::func_82(Local_1389.f_136, 524288);
						__LIB_7__::func_951(iParam0);
						if (!__LIB_10__::func_282(2))
						{
							__LIB_3__::func_667(*iParam0, &uLocal_1540, 0f, 0f, 0f, 0, 60f, 10f, -1, 4000, 4000, 1075838976 /* Float: 2.5f */, 0, 1, 1084227584 /* Float: 5f */);
						}
						__LIB_8__::func_48(iParam0, 0, 0);
						func_7(1073741824 /* Float: 2f */, __LIB_1__::func_205(PED::_GET_LAST_MOUNT(Global_35), iLocal_1759[4], 1, 0));
						__LIB_8__::func_85(Local_1389.f_136, 8);
						__LIB_8__::func_575(&(Local_1618[0 /*7*/]), 1, 1);
						__LIB_8__::func_151(&(Local_1618[0 /*7*/]), "PBL_quick_exit");
						if (__LIB_7__::func_924(&Local_1389, 256))
						{
							__LIB_8__::func_336(&(Local_1389.f_35), "HMSTD_ENT_RAIN", *iParam0, Global_35, 0, 0, 1, 1);
						}
						else
						{
							__LIB_8__::func_336(&(Local_1389.f_35), "HMSTD_IG1_ENTER", *iParam0, Global_35, 0, 0, 1, 1);
						}
						__LIB_8__::func_108(&(Local_1389.f_35), "HMSTD_IG1DAD", 0);
						__LIB_8__::func_108(&(Local_1389.f_35), "HMSTD_IG1DADb", 0);
						__LIB_8__::func_108(&(Local_1389.f_35), "HMSTD_IG1DAD2", 0);
						iLocal_20 = 7;
					}
				}
				Jump @4016; //curOff = 1309
				func_103();
				func_650();
				if (!__LIB_10__::func_282(2))
				{
					__LIB_3__::func_667(*iParam0, &uLocal_1540, 0f, 0f, 0f, 0, 60f, 10f, -1, 4000, 4000, 1075838976 /* Float: 2.5f */, 0, 1, 1084227584 /* Float: 5f */);
				}
				__LIB_8__::func_48(iParam0, 0, 0);
				func_7(1073741824 /* Float: 2f */, __LIB_1__::func_205(PED::_GET_LAST_MOUNT(Global_35), iLocal_1759[4], 1, 0));
				__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
				if (!ENTITY::IS_ENTITY_DEAD(Global_35) && (((func_651(iParam0, iParam1, iParam2) || ENTITY::HAS_ANIM_EVENT_FIRED(*iParam0, 1647800955)) && !__LIB_1__::func_322("HMSTD_IG1_ENTER")) && !__LIB_1__::func_322("HMSTD_ENT_RAIN")))
				{
					if (__LIB_8__::func_332(4096))
					{
						__LIB_8__::func_183(&(Local_1618[0 /*7*/]), *iParam0, "father");
						__LIB_8__::func_183(&(Local_1618[0 /*7*/]), *iParam1, "son_A");
						__LIB_8__::func_183(&(Local_1618[0 /*7*/]), *iParam2, "son_B");
						func_511(&(Local_1618[0 /*7*/]), 1.5f);
						TASK::_TASK_SMART_FLEE_STYLE_COORD(*iParam0, func_423(), 2, 0, 5f, -1, 0);
						TASK::_TASK_SMART_FLEE_STYLE_COORD(*iParam1, func_423(), 2, 0, 5f, -1, 0);
						TASK::_TASK_SMART_FLEE_STYLE_COORD(*iParam2, func_423(), 2, 0, 5f, -1, 0);
						iLocal_20 = 6;
					}
					else
					{
						__LIB_8__::func_336(&(Local_1389.f_35), "HMSTD_IG1DAD", *iParam0, Global_35, 0, 0, 1, 1);
						__LIB_1__::func_539();
						iLocal_30 = __LIB_3__::func_721(*iParam0, VOLUME::_CREATE_VOLUME_CYLINDER(ENTITY::GET_ENTITY_COORDS(*iParam0, true, false), 0f, 0f, ENTITY::GET_ENTITY_HEADING(*iParam0), 5.5f, 5.5f, 5.5f), 148);
						iLocal_20 = 5;
					}
					iVar5 = PED::_GET_LAST_MOUNT(Global_35);
					if (!ENTITY::IS_ENTITY_DEAD(iVar5) && PED::GET_PED_CONFIG_FLAG(iVar5, 136, true))
					{
						PED::SET_PED_CONFIG_FLAG(iVar5, 136, false);
					}
					__LIB_0__::func_325(&(uLocal_1790[0]));
				}
				Jump @4016; //curOff = 1759
				__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
				func_103();
				func_650();
				if (func_652(iParam0, iParam1, iParam2))
				{
					__LIB_8__::func_183(&(Local_1618[0 /*7*/]), *iParam0, "father");
					__LIB_8__::func_183(&(Local_1618[0 /*7*/]), *iParam1, "son_A");
					__LIB_8__::func_183(&(Local_1618[0 /*7*/]), *iParam2, "son_B");
					func_511(&(Local_1618[0 /*7*/]), 1.5f);
					TASK::_TASK_SMART_FLEE_STYLE_COORD(*iParam0, func_423(), 2, 0, 5f, -1, 0);
					TASK::_TASK_SMART_FLEE_STYLE_COORD(*iParam1, func_423(), 2, 0, 5f, -1, 0);
					TASK::_TASK_SMART_FLEE_STYLE_COORD(*iParam2, func_423(), 2, 0, 5f, -1, 0);
					iLocal_20 = 6;
				}
				func_7(1073741824 /* Float: 2f */, __LIB_1__::func_205(PED::_GET_LAST_MOUNT(Global_35), iLocal_1759[4], 1, 0));
				if (ENTITY::DOES_ENTITY_EXIST(*iParam0) && ENTITY::HAS_ANIM_EVENT_FIRED(*iParam0, 1608236143))
				{
					func_615(1, 0);
					func_279(0, 1, 0);
					func_653(0);
				}
				if (iLocal_335 == 0 && iLocal_334 == 0)
				{
					__LIB_13__::func_187(65536);
					func_615(0, 0);
					func_279(0, 1, 0);
				}
				if ((!__LIB_4__::func_241(268435456) && __LIB_1__::func_322("HMSTD_IG1DAD")) && AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("HMSTD_IG1DAD") >= 4)
				{
					if (!__LIB_8__::func_332(4096))
					{
						if (__LIB_8__::func_332(65536))
						{
							__LIB_8__::func_111("HMSTD_IG1DAD", 0);
							__LIB_8__::func_336(&(Local_1389.f_35), "HMSTD_IG1DADb", *iParam0, Global_35, 0, 0, 1, 1);
						}
						else
						{
							__LIB_8__::func_111("HMSTD_IG1DAD", 0);
						}
					}
					func_615(0, 0);
					func_279(0, 1, 1);
					func_5(268435456);
				}
				if (__LIB_4__::func_241(268435456))
				{
					if (ENTITY::DOES_ENTITY_EXIST(*iParam0) && ENTITY::HAS_ANIM_EVENT_FIRED(*iParam0, 1921072203))
					{
						__LIB_8__::func_336(&(Local_1389.f_35), "HMSTD_IG1DAD2", *iParam0, Global_35, 0, 0, 1, 1);
					}
				}
				if ((__LIB_4__::func_241(1024) || __LIB_8__::func_332(4096)) && !__LIB_8__::func_10(&(Local_1618[0 /*7*/]), "PBL_quick_exit"))
				{
					if (__LIB_8__::func_34(&(Local_1618[0 /*7*/])) && func_651(iParam0, iParam1, iParam2))
					{
						__LIB_8__::func_575(&(Local_1618[0 /*7*/]), 1, 1);
						__LIB_8__::func_111("HMSTD_IG1DAD", 0);
						__LIB_8__::func_111("HMSTD_IG1_ENTER", 0);
						__LIB_8__::func_111("HMSTD_ENT_RAIN", 0);
						__LIB_8__::func_111("HMSTD_IG1DADb", 0);
					}
				}
				if (__LIB_4__::func_241(512))
				{
					PATHFIND::_0x19C7567D2F2287D6(iLocal_1759[1], 7);
					POPULATION::_0xB56D41A694E42E86(iLocal_1759[3], 524288, 0, 0, -1, -1, 2);
					PED::_0x4C39C95AE5DB1329(iLocal_1759[3], 0, 15);
					PATHFIND::_0x19C7567D2F2287D6(iLocal_1759[3], 7);
					POPULATION::_0xB56D41A694E42E86(iLocal_1759[1], 524288, 0, 0, -1, -1, 0);
					PED::_0x4C39C95AE5DB1329(iLocal_1759[1], 0, 15);
					iLocal_20 = 9;
				}
				Jump @4016; //curOff = 2446
				__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
				func_103();
				if (!__LIB_8__::func_10(&(Local_1618[0 /*7*/]), "PBL_quick_exit"))
				{
					if (__LIB_8__::func_34(&(Local_1618[0 /*7*/])))
					{
						__LIB_8__::func_575(&(Local_1618[0 /*7*/]), 1, 1);
					}
				}
				func_81();
				bVar6 = true;
				if (__LIB_1__::func_205(*iParam0, iLocal_1759[1], 1, 0))
				{
					bVar6 = false;
				}
				if (__LIB_1__::func_205(*iParam1, iLocal_1759[1], 1, 0))
				{
					bVar6 = false;
				}
				if (__LIB_1__::func_205(*iParam2, iLocal_1759[1], 1, 0))
				{
					bVar6 = false;
				}
				if (__LIB_10__::func_282(16384))
				{
					bVar6 = true;
				}
				if (bVar6)
				{
					PED::_0xAAB050DA48B57978(*iParam0, "Default_Nervous", Global_35, -1, 4);
					PED::_0xAAB050DA48B57978(*iParam1, "Default_Panic", Global_35, -1, 4);
					PED::_0xAAB050DA48B57978(*iParam2, "Default_Scared", Global_35, -1, 4);
					__LIB_8__::func_336(&(Local_1389.f_35), "HMSTD_BUMP", *iParam0, Global_35, 0, 0, 1, 1);
					PATHFIND::_0x19C7567D2F2287D6(iLocal_1759[1], 7);
					PATHFIND::_0x19C7567D2F2287D6(iLocal_1759[3], 7);
					iLocal_20 = 9;
				}
				Jump @4016; //curOff = 2702
				__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
				func_103();
				if (__LIB_4__::func_241(268435456))
				{
					if (ENTITY::DOES_ENTITY_EXIST(*iParam0) && ENTITY::HAS_ANIM_EVENT_FIRED(*iParam0, 1921072203))
					{
						func_279(0, 1, 1);
						__LIB_8__::func_111("HMSTD_IG1DADb", 0);
					}
				}
				if (!__LIB_4__::func_241(512))
				{
					func_7(1073741824 /* Float: 2f */, __LIB_1__::func_205(PED::_GET_LAST_MOUNT(Global_35), iLocal_1759[4], 1, 0));
					if (func_652(iParam0, iParam1, iParam2))
					{
						__LIB_8__::func_183(&(Local_1618[0 /*7*/]), *iParam0, "father");
						__LIB_8__::func_183(&(Local_1618[0 /*7*/]), *iParam1, "son_A");
						__LIB_8__::func_183(&(Local_1618[0 /*7*/]), *iParam2, "son_B");
						func_511(&(Local_1618[0 /*7*/]), 1.5f);
						TASK::_TASK_SMART_FLEE_STYLE_COORD(*iParam0, func_423(), 2, 0, 5f, -1, 0);
						TASK::_TASK_SMART_FLEE_STYLE_COORD(*iParam1, func_423(), 2, 0, 5f, -1, 0);
						TASK::_TASK_SMART_FLEE_STYLE_COORD(*iParam2, func_423(), 2, 0, 5f, -1, 0);
						iLocal_20 = 6;
					}
				}
				if (!__LIB_4__::func_241(33554432))
				{
					if (__LIB_4__::func_241(512))
					{
						__LIB_3__::func_953(&iLocal_30, 1);
						func_5(33554432);
					}
				}
				if (!__LIB_8__::func_332(1073741824 /* Float: 2f */) && __LIB_2__::func_598(*iParam1, Local_1618[0 /*7*/], "son_A", joaat("ENDSINWALK"), 0, 1, 0))
				{
					__LIB_8__::func_123(65, 1, 1);
					__LIB_13__::func_188(16384);
					__LIB_7__::func_951(iParam1);
					__LIB_8__::func_183(&(Local_1618[0 /*7*/]), *iParam1, "son_A");
					__LIB_13__::func_187(1073741824 /* Float: 2f */);
					func_279(1, 1, 0);
					func_589(1);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_1818);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -426.0537f, 496.4437f, 97.11671f, 1f, -1, 0.25f, 1, 40000f);
					if (!__LIB_7__::func_924(&Local_1389, 256))
					{
						TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, -424.1754f, 496.6488f, 97.57932f, 5.5f, -1, true, false, false, false);
					}
					else
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -422.3258f, 494.8378f, 97.33466f, 1f, -1, 0.25f, 0, 40000f);
					}
					TASK::CLOSE_SEQUENCE_TASK(iLocal_1818);
					TASK::TASK_PERFORM_SEQUENCE(*iParam1, iLocal_1818);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_1818);
					func_139(1073741824 /* Float: 2f */);
					func_101(1);
				}
				if (!__LIB_8__::func_332(-2147483648) && __LIB_2__::func_598(*iParam2, Local_1618[0 /*7*/], "son_B", joaat("ENDSINWALK"), 0, 1, 0))
				{
					__LIB_8__::func_123(66, 1, 1);
					__LIB_13__::func_188(16384);
					__LIB_7__::func_951(iParam2);
					__LIB_8__::func_183(&(Local_1618[0 /*7*/]), *iParam2, "son_B");
					__LIB_13__::func_187(-2147483648);
					func_279(2, 1, 0);
					func_589(2);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_1818);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -427.5399f, 499.9651f, 97.11329f, 1f, -1, 0.25f, 1, 40000f);
					if (!__LIB_7__::func_924(&Local_1389, 256))
					{
						TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, -426.9276f, 500.1004f, 97.11906f, 5.5f, -1, true, false, false, false);
					}
					else
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -422.4966f, 493.1444f, 97.34264f, 1f, -1, 0.25f, 0, 40000f);
					}
					TASK::CLOSE_SEQUENCE_TASK(iLocal_1818);
					TASK::TASK_PERFORM_SEQUENCE(*iParam2, iLocal_1818);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_1818);
					PED::_0x2208438012482A1A(*iParam2, false, false);
				}
				if (!__LIB_8__::func_332(536870912) && __LIB_2__::func_598(*iParam0, Local_1618[0 /*7*/], "father", joaat("ENDSINWALK"), 0, 1, 0))
				{
					__LIB_8__::func_123(64, 1, 1);
					__LIB_13__::func_188(16384);
					func_616(0);
					__LIB_7__::func_951(iParam0);
					func_615(0, 0);
					func_279(0, 1, 0);
					func_589(0);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_1818);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -442.8645f, 506.2977f, 96.99207f, 1f, -1, 0.25f, 1, 40000f);
					if (!__LIB_7__::func_924(&Local_1389, 256))
					{
						uVar7 = TASK::CREATE_SCENARIO_POINT(__LIB_9__::func_751(), -443.6081f, 506.3698f, 97.01981f, -6.53f, 0, 0, 0);
						TASK::_TASK_USE_SCENARIO_POINT(0, uVar7, 0, 0, true, false, 0, false, -1f, false);
					}
					else
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -421.5728f, 503.3897f, 97.15549f, 1f, -1, 0.25f, 0, 40000f);
					}
					TASK::CLOSE_SEQUENCE_TASK(iLocal_1818);
					TASK::TASK_PERFORM_SEQUENCE(*iParam0, iLocal_1818);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_1818);
					if (!__LIB_8__::func_332(4096))
					{
						PED::_0x2208438012482A1A(*iParam0, false, false);
					}
					else
					{
						__LIB_13__::func_187(8192);
						Local_2071.f_135 = "HMSTD_BUMP_P";
						Local_2071.f_5 = "HMSTD_BUMP_N";
						func_615(0, 0);
						func_279(0, 1, 0);
						func_655(0);
					}
					func_141(128);
					__LIB_1__::func_951(&(Local_386.f_690[1 /*12*/].f_8));
					__LIB_13__::func_187(536870912);
				}
				if ((__LIB_8__::func_332(1073741824 /* Float: 2f */) && __LIB_8__::func_332(-2147483648)) && __LIB_8__::func_332(536870912))
				{
					__LIB_13__::func_188(16384);
					func_101(0);
					__LIB_0__::func_268(&(vLocal_1578[5 /*3*/]), (14f / 2f));
					if (!__LIB_8__::func_332(4096))
					{
						__LIB_3__::func_732(1);
					}
					__LIB_1__::func_148(&(vLocal_1578[1 /*3*/]));
					if (__LIB_7__::func_924(&Local_1389, 256))
					{
						__LIB_2__::func_753(65, 0, 1, 0, 0);
						__LIB_2__::func_753(66, 0, 1, 0, 0);
						__LIB_2__::func_753(Local_1389.f_138, 0, 1, 0, 0);
					}
					iLocal_20 = 10;
				}
				Jump @4016; //curOff = 4002
				func_656(iParam1, iParam2);
			}
			return 0;
			default:
				break;
	}
}

int func_373(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar8;
	func_139(32);
	if (func_657(iParam0, iParam1, iParam2))
	{
		iLocal_24 = 9;
	}
	if (__LIB_7__::func_908(Local_1389.f_136, 64))
	{
		func_658();
	}
	func_194(0);
	switch (iLocal_24)
	{
		case 0:
			func_5(16);
			func_659(0, 1);
			func_659(1, 1);
			func_659(2, 1);
			func_616(1);
			func_660(1);
			Local_1389.f_18 = 3000;
			iLocal_1759[1] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-473.2554f, 497.1866f, 100.6316f, 0f, 0f, 6.802227f, 10.537f, 14.53575f, 6.040145f, "Castor's Ridge - volBandit");
			iLocal_1759[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-448.3479f, 500.5164f, 98.75289f, 0f, 0f, 91.21118f, 12.00564f, 6.040755f, 3.434479f, "Castor's Ridge - volCombat");
			iLocal_1759[5] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Castor's Ridge - volHouse");
			VOLUME::_0x39816F6F94F385AD(iLocal_1759[5], -438.5028f, 497.761f, 99.02924f, 0f, 0f, 2.049191f, 13.49764f, 4.540787f, 4.170513f);
			VOLUME::_0x39816F6F94F385AD(iLocal_1759[5], -439.7f, 495.1134f, 99.02924f, 0f, 0f, 1.923922f, 10.80366f, 1.939119f, 4.170513f);
			VOLUME::_0x39816F6F94F385AD(iLocal_1759[5], -441.1678f, 500.8109f, 99.02924f, 0f, 0f, 1.978058f, 8.808822f, 2.322693f, 4.170513f);
			Local_1857.f_79 = 1;
			Local_1857.f_78 = 0;
			__LIB_4__::func_64(&uLocal_1823);
			__LIB_3__::func_392(&uLocal_1823, 1);
			__LIB_3__::func_393(&uLocal_1823, 1);
			__LIB_3__::func_386(&uLocal_1823, 1);
			__LIB_4__::func_203(&uLocal_1823, 1);
			func_661(&iLocal_1794, iLocal_1759[1], 0, 0, 1);
			func_662();
			__LIB_3__::func_748(&Local_1389, 0);
			__LIB_7__::func_909(&Local_1389, 1);
			__LIB_4__::func_202(&Local_1389, 1);
			__LIB_3__::func_385(&Local_1389, 1);
			__LIB_2__::func_507(&Local_1389, 2000);
			func_664();
			__LIB_0__::func_928(&(Local_1389.f_35), iLocal_1794[0], "HOME_ATTACKER", 0);
			Local_2071.f_33 = { Local_1389.f_35 };
			Local_1857.f_81 = { Local_1389.f_35 };
			Local_336.f_40 = *iParam0;
			Local_336.f_39 = iLocal_1759[4];
			Local_336.f_42 = 3f;
			Local_336.f_43 = 3f;
			PED::ADD_RELATIONSHIP_GROUP("HomesteadAttackers", &iLocal_31);
			PED::ADD_RELATIONSHIP_GROUP("HomesteadWorkers", &iLocal_32);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_32, joaat("PLAYER"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, iLocal_32, iLocal_31);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, iLocal_31, iLocal_32);
			if (!ENTITY::IS_ENTITY_DEAD(*iParam1))
			{
				if (!__LIB_2__::func_763(65, 0))
				{
					if (!__LIB_8__::func_123(65, 1, 1))
					{
					}
				}
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(*iParam1, false, true);
				func_238(*iParam1, func_237(65), 0f, 2, 1073741824 /* Float: 2f */);
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(*iParam1, false, iLocal_31);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(*iParam1, true);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(*iParam1, iLocal_32);
				PED::SET_PED_CONFIG_FLAG(*iParam1, 277, true);
				PED::SET_PED_CONFIG_FLAG(*iParam1, 178, false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_1818);
				TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, Local_1649[1 /*8*/].f_1, -1, 0, 1f, 1, 0, Local_1649[1 /*8*/], 0, 1, 0);
				TASK::TASK_SEEK_COVER_FROM_POS(0, -468.5037f, 496.4268f, 98.5103f, -1, 0, 0, 0);
				TASK::TASK_STAY_IN_COVER(0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_1818);
				TASK::TASK_PERFORM_SEQUENCE(*iParam1, iLocal_1818);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1818);
				WEAPON::REMOVE_ALL_PED_WEAPONS(*iParam1, true, true);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(*iParam1, Local_1649[1 /*8*/].f_1, 1f, 0, 0, 0);
			}
			if (!ENTITY::IS_ENTITY_DEAD(*iParam2))
			{
				if (!__LIB_2__::func_763(66, 0))
				{
					if (!__LIB_8__::func_123(66, 1, 1))
					{
					}
				}
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(*iParam2, false, true);
				func_238(*iParam2, func_237(66), 0f, 2, 1073741824 /* Float: 2f */);
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(*iParam2, false, iLocal_31);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(*iParam2, true);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(*iParam2, iLocal_32);
				PED::SET_PED_CONFIG_FLAG(*iParam2, 277, true);
				PED::SET_PED_CONFIG_FLAG(*iParam2, 178, false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam2, true);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_1818);
				TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, Local_1649[2 /*8*/].f_1, -1, 0, 1f, 1, 1, Local_1649[2 /*8*/], 0, 1, 0);
				TASK::TASK_SEEK_COVER_FROM_POS(0, -468.5037f, 496.4268f, 98.5103f, -1, 0, 0, 0);
				TASK::TASK_STAY_IN_COVER(0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_1818);
				TASK::TASK_PERFORM_SEQUENCE(*iParam2, iLocal_1818);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1818);
				WEAPON::REMOVE_ALL_PED_WEAPONS(*iParam2, true, true);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(*iParam2, Local_1649[2 /*8*/].f_1, 1f, 0, 0, 0);
			}
			if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
			{
				if (!__LIB_2__::func_763(Local_1389.f_138, 0))
				{
					if (!__LIB_8__::func_123(Local_1389.f_138, 1, 1))
					{
					}
				}
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(*iParam0, false, true);
				func_238(*iParam0, func_237(64), 0f, 2, 1073741824 /* Float: 2f */);
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(*iParam0, false, iLocal_31);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(*iParam0, true);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(*iParam0, iLocal_32);
				WEAPON::_GIVE_WEAPON_TO_PED_2(*iParam0, __LIB_3__::func_430(268435456, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 200, true, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				PED::_0xAAB050DA48B57978(*iParam0, func_665(0), 0, -1, 4);
				PED::SET_PED_CONFIG_FLAG(*iParam0, 277, true);
				PED::SET_PED_CONFIG_FLAG(*iParam0, 178, false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 0, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 119, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 12, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 44, true);
				PED::SET_PED_ACCURACY(*iParam0, 0);
				PED::SET_COMBAT_FLOAT(*iParam0, 0, 1f);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_1818);
				TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, Local_1649[0 /*8*/].f_1, 2000, 1, 0.125f, 1, 1, Local_1649[0 /*8*/], 0, 1, 0);
				TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(0, ENTITY::GET_ENTITY_COORDS(iLocal_1794[0], true, false), 60f, 0, 16);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_1818);
				TASK::TASK_PERFORM_SEQUENCE(*iParam0, iLocal_1818);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1818);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(*iParam0, Local_1649[0 /*8*/].f_1, 1f, 0, 0, 0);
				PED::SET_PED_CONFIG_FLAG(*iParam0, 277, true);
			}
			iVar0 = 0;
			while (iVar0 < iLocal_1794)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_1794[iVar0]))
				{
					func_666(iLocal_1794[iVar0]);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_1794[iVar0], iLocal_31);
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_1794[iVar0], 0, true);
					PED::SET_PED_COMBAT_MOVEMENT(iLocal_1794[iVar0], 1);
					PED::SET_PED_CONFIG_FLAG(iLocal_1794[iVar0], 233, true);
					WEAPON::SET_CURRENT_PED_WEAPON(iLocal_1794[iVar0], __LIB_3__::func_430(268435456, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), true, 0, false, false);
					TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(iLocal_1794[iVar0], ENTITY::GET_ENTITY_COORDS(iLocal_1794[iVar0], true, false), -1, 1, 0f, 0, 0, 0, 0, 0, 0);
					TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(iLocal_1794[iVar0], ENTITY::GET_ENTITY_COORDS(*iParam0, true, false), 60f, 0, 16);
					PED::SET_PED_CONFIG_FLAG(iLocal_1794[iVar0], 6, true);
					PED::SET_PED_CONFIG_FLAG(iLocal_1794[iVar0], 146, true);
					iLocal_1642 = PED::GET_PED_ACCURACY(iLocal_1794[iVar0]);
					PED::SET_PED_ACCURACY(iLocal_1794[iVar0], 0);
					PED::SET_PED_USING_ACTION_MODE(iLocal_1794[iVar0], true, -1, 0);
					if (!ENTITY::IS_ENTITY_DEAD(Local_386.f_369[iVar0 /*32*/].f_11))
					{
						PHYSICS::_0x06AADE17334F7A40(Local_386.f_369[iVar0 /*32*/].f_11, func_667(iVar0));
						PED::_0x06D26A96CA1BCA75(Local_386.f_369[iVar0 /*32*/].f_11, 3, 0f, 0);
						PED::_0x06D26A96CA1BCA75(Local_386.f_369[iVar0 /*32*/].f_11, 1, 0f, 0);
						PED::_0x2EB75FB86C41F026(Local_386.f_369[iVar0 /*32*/].f_11, 3, 0);
						PED::_0x2EB75FB86C41F026(Local_386.f_369[iVar0 /*32*/].f_11, 1, 0);
					}
				}
				iVar0++;
			}
			__LIB_1__::func_148(&(vLocal_1578[10 /*3*/]));
			func_668();
			iLocal_24 = 1;
			break;
		case 1:
			func_669();
			func_660(1);
			func_670();
			if (__LIB_2__::func_227(0, 1, 0, 0))
			{
				if (func_671(iParam0, iParam1, iParam2))
				{
					iVar1 = func_672();
					if (!ENTITY::IS_ENTITY_DEAD(iVar1))
					{
						__LIB_8__::func_336(&(Local_1389.f_35), "HOME_ATAKR", iVar1, *iParam0, 0, 0, 1, 1);
					}
					__LIB_1__::func_148(&(vLocal_1578[5 /*3*/]));
					iLocal_24 = 2;
				}
				else if (func_673(iParam0))
				{
					__LIB_1__::func_148(&(vLocal_1578[5 /*3*/]));
					iLocal_24 = 2;
				}
			}
			break;
		case 2:
			if (__LIB_1__::func_313(&(vLocal_1578[5 /*3*/]), 35f))
			{
				func_90(iParam0, iParam1, iParam2, 1);
				__LIB_1__::func_148(&(vLocal_1578[1 /*3*/]));
			}
			if (!__LIB_4__::func_241(16384))
			{
				func_660(1);
			}
			func_670();
			if (__LIB_2__::func_227(0, 1, 0, 0))
			{
				if (!__LIB_0__::func_75(&(vLocal_1578[0 /*3*/])))
				{
					__LIB_1__::func_148(&(vLocal_1578[0 /*3*/]));
				}
				if (__LIB_1__::func_313(&(vLocal_1578[0 /*3*/]), 5f))
				{
					if (!__LIB_4__::func_241(134217728))
					{
						if (!__LIB_4__::func_241(32768))
						{
							func_5(32768);
							__LIB_8__::func_336(&(Local_1389.f_35), "HOME_ATAK", *iParam0, iLocal_1794[0], 0, 0, 1, 1);
						}
						else
						{
							__LIB_8__::func_336(&(Local_1389.f_35), "HOME_ATAKF", *iParam0, iLocal_1794[0], 0, 0, 1, 1);
						}
					}
					else
					{
						func_139(134217728);
						iVar2 = func_672();
						if (!ENTITY::IS_ENTITY_DEAD(iVar2))
						{
							__LIB_8__::func_336(&(Local_1389.f_35), "HOME_ATAKR", iVar2, *iParam0, 0, 0, 1, 1);
						}
					}
				}
			}
			if (__LIB_1__::func_285(&(vLocal_1578[1 /*3*/]), 5f))
			{
				__LIB_2__::func_279(*iParam0, 1);
				__LIB_0__::func_37(&(vLocal_1578[1 /*3*/]));
			}
			if (func_673(iParam0))
			{
				func_139(16384);
				func_5(134217728);
				iLocal_24 = 3;
			}
			break;
		case 3:
			if (__LIB_1__::func_313(&(vLocal_1578[5 /*3*/]), 35f))
			{
				func_90(iParam0, iParam1, iParam2, 1);
				if (__LIB_2__::func_1(*iParam0, 0, 1))
				{
					PED::SET_PED_ACCURACY(*iParam0, 55);
				}
				__LIB_1__::func_148(&(vLocal_1578[1 /*3*/]));
			}
			if (func_592(&iLocal_1794))
			{
				__LIB_2__::func_279(*iParam0, 0);
				PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(*iParam0, 1, "ALL");
				PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(*iParam0, 0, "ALL");
				PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(*iParam1, 1, "ALL");
				PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(*iParam1, 0, "ALL");
				PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(*iParam2, 1, "ALL");
				PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(*iParam2, 0, "ALL");
				func_589(0);
				func_279(0, 1, 1);
				func_589(1);
				func_279(1, 1, 1);
				func_589(2);
				func_279(2, 1, 1);
				iVar0 = 0;
				while (iVar0 < Local_386.f_1)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(__LIB_8__::func_329(Local_386.f_369[iVar0 /*32*/].f_11)))
					{
						PHYSICS::_0x0348469DAA17576C(Local_386.f_369[iVar0 /*32*/].f_11);
						TASK::_TASK_SMART_FLEE_STYLE_COORD(Local_386.f_369[iVar0 /*32*/].f_11, func_215(), 4, 0, 999f, -1, 0);
					}
					PED::SET_PED_KEEP_TASK(Local_386.f_369[iVar0 /*32*/].f_11, true);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_386.f_369[iVar0 /*32*/].f_11));
					iVar0++;
				}
				__LIB_2__::func_571(&Local_1389, &(Local_1389.f_28));
				__LIB_8__::func_251(&Local_1389);
				__LIB_3__::func_393(&Local_1389, 0);
				__LIB_3__::func_386(&Local_1389, 0);
				__LIB_2__::func_715(&Local_1389, 0);
				func_90(iParam0, iParam1, iParam2, 1);
				EVENT::_0xB6F4825153920582();
				TASK::_0xDF94844D474F31E5(*iParam0);
				TASK::_0xDF94844D474F31E5(*iParam1);
				TASK::_0xDF94844D474F31E5(*iParam2);
				EVENT::_0x1A5C5D350068A673(*iParam0, 0);
				EVENT::_0x1A5C5D350068A673(*iParam1, 0);
				EVENT::_0x1A5C5D350068A673(*iParam2, 0);
				func_279(0, 1, 1);
				func_279(1, 1, 1);
				func_279(2, 1, 1);
				__LIB_0__::func_37(&(vLocal_1578[2 /*3*/]));
				__LIB_8__::func_131(&Local_1389, 128);
				__LIB_8__::func_82(Local_1389.f_136, 64);
				__LIB_8__::func_253(&Local_1389);
				__LIB_2__::func_73(iLocal_1816, &(uLocal_1790[0]), -89429847, 580546400, 0, func_365());
				__LIB_1__::func_148(&(vLocal_1578[1 /*3*/]));
				WEAPON::SET_CURRENT_PED_WEAPON(*iParam0, joaat("WEAPON_UNARMED"), false, 0, false, false);
				PED::_0xAAB050DA48B57978(*iParam0, func_665(0), 0, -1, 4);
				PED::_0xAAB050DA48B57978(*iParam1, func_665(1), 0, -1, 4);
				PED::_0xAAB050DA48B57978(*iParam2, func_665(2), 0, -1, 4);
				PED::SET_PED_CONFIG_FLAG(*iParam0, 277, true);
				PED::SET_PED_CONFIG_FLAG(*iParam1, 277, true);
				PED::SET_PED_CONFIG_FLAG(*iParam2, 277, true);
				vVar3.x = 0;
				vVar3.f_1 = 1;
				vVar3.f_2 = { Global_36 };
				TASK::OPEN_SEQUENCE_TASK(&iLocal_1818);
				AICOVERPOINT::TASK_EXIT_COVER(&vVar3);
				TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_1818);
				TASK::TASK_PERFORM_SEQUENCE(*iParam0, iLocal_1818);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1818);
				func_139(16);
				__LIB_1__::func_148(&(vLocal_1578[0 /*3*/]));
				iLocal_24 = 4;
			}
			else if (__LIB_3__::func_505(&iLocal_1768, 0))
			{
				__LIB_8__::func_131(&Local_1389, 4);
				__LIB_8__::func_85(Local_1389.f_136, 512);
				__LIB_8__::func_253(&Local_1389);
				func_290(&iLocal_1794, Global_35, 0, -1, 1148846080 /* Float: 1000f */, 0, 4);
				func_289(&uLocal_1805, 0);
				__LIB_0__::func_37(&(vLocal_1578[0 /*3*/]));
				iLocal_24 = 9;
			}
			else
			{
				func_677(iParam0);
			}
			break;
		case 4:
			if (!__LIB_8__::func_332(1073741824 /* Float: 2f */))
			{
				__LIB_13__::func_187(1073741824 /* Float: 2f */);
				PED::_0xAAB050DA48B57978(*iParam1, func_665(1), 0, -1, 4);
			}
			if (!__LIB_8__::func_332(-2147483648))
			{
				__LIB_13__::func_187(-2147483648);
				PED::_0xAAB050DA48B57978(*iParam2, func_665(2), 0, -1, 4);
			}
			if (!__LIB_5__::func_679(&Local_1389, 4))
			{
				if (!__LIB_0__::func_75(&(vLocal_1578[2 /*3*/])))
				{
					__LIB_1__::func_148(&(vLocal_1578[2 /*3*/]));
				}
				else if (__LIB_1__::func_313(&(vLocal_1578[2 /*3*/]), (BUILTIN::TO_FLOAT(3000) / 1000f)))
				{
					__LIB_3__::func_386(&Local_1389, 1);
					__LIB_3__::func_393(&Local_1389, 1);
					__LIB_2__::func_715(&Local_1389, 1);
				}
			}
			if (!__LIB_4__::func_241(65536) && iLocal_2070 > 0)
			{
				func_5(65536);
			}
			if (__LIB_8__::func_330(iParam0, joaat("WEAPON_UNARMED")))
			{
				func_680();
			}
			__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
			{
				if (!__LIB_4__::func_241(1048576) && __LIB_2__::func_118(*iParam0, 1, 1) < 20f)
				{
					func_5(1048576);
				}
				if (func_681())
				{
					PED::_0xAAB050DA48B57978(*iParam0, func_665(0), 0, -1, 4);
					iLocal_24 = 5;
				}
			}
			else
			{
				if (!__LIB_2__::func_763(65, 0))
				{
					__LIB_8__::func_123(65, 1, 1);
				}
				if (!__LIB_2__::func_763(66, 0))
				{
					__LIB_8__::func_123(66, 1, 1);
				}
				__LIB_8__::func_85(Local_1389.f_136, 32);
				__LIB_8__::func_93(Local_1389.f_136, 8388608);
				__LIB_8__::func_176(Local_1389.f_136);
				iLocal_24 = 7;
			}
			break;
		case 5:
			__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			if (!__LIB_5__::func_679(&Local_1389, 4))
			{
				if (!__LIB_0__::func_75(&(vLocal_1578[2 /*3*/])))
				{
					__LIB_1__::func_148(&(vLocal_1578[2 /*3*/]));
				}
				else if (__LIB_1__::func_313(&(vLocal_1578[2 /*3*/]), (BUILTIN::TO_FLOAT(3000) / 1000f)))
				{
					__LIB_3__::func_386(&Local_1389, 1);
					__LIB_3__::func_393(&Local_1389, 1);
					__LIB_2__::func_715(&Local_1389, 1);
				}
			}
			if (__LIB_8__::func_330(iParam0, joaat("WEAPON_UNARMED")))
			{
				func_680();
			}
			if (func_682(iParam0))
			{
				if (__LIB_2__::func_227(-3.5f, 1, 0, 0))
				{
					if (!__LIB_2__::func_763(Local_1389.f_138, 0))
					{
						__LIB_8__::func_123(Local_1389.f_138, 1, 1);
					}
					if (!__LIB_2__::func_763(65, 0))
					{
						__LIB_8__::func_123(65, 1, 1);
					}
					if (!__LIB_2__::func_763(66, 0))
					{
						__LIB_8__::func_123(66, 1, 1);
					}
					__LIB_0__::func_325(&(uLocal_1790[0]));
					__LIB_8__::func_85(Local_1389.f_136, 32);
					__LIB_8__::func_93(Local_1389.f_136, 8388608);
					__LIB_8__::func_176(Local_1389.f_136);
					if (__LIB_0__::func_665(*iParam0, *iParam1, 1, 1) > 7.5f)
					{
						TASK::CLEAR_PED_TASKS(*iParam0, true, false);
						TASK::TASK_GO_TO_ENTITY(*iParam0, *iParam1, -1, 5f, 1f, 8f, 0);
					}
					iLocal_24 = 6;
				}
			}
			break;
		case 6:
			if (__LIB_0__::func_665(*iParam0, *iParam1, 1, 1) <= 7.5f)
			{
				TASK::CLEAR_PED_TASKS(*iParam0, true, false);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(*iParam0, *iParam2, -1, -1f, -1f, -1f);
				vVar8.x = 0;
				vVar8.f_1 = 1;
				vVar8.f_2 = { ENTITY::GET_ENTITY_COORDS(*iParam0, true, false) };
				TASK::OPEN_SEQUENCE_TASK(&iLocal_1818);
				AICOVERPOINT::TASK_EXIT_COVER(&vVar8);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, *iParam0, -1, -1f, -1f, -1f);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_1818);
				TASK::_TASK_PERFORM_SEQUENCE_2(*iParam1, iLocal_1818, 0.5f, 0.5f);
				TASK::_TASK_PERFORM_SEQUENCE_2(*iParam2, iLocal_1818, 1.5f, 1.5f);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1818);
				__LIB_8__::func_336(&(Local_1389.f_35), "HOME_WLCMA2", *iParam0, *iParam2, 0, 0, 1, 1);
				iLocal_24 = 7;
			}
			break;
		case 7:
			if (__LIB_4__::func_241(16))
			{
				if (!__LIB_0__::func_75(&(vLocal_1578[2 /*3*/])))
				{
					__LIB_1__::func_283(&(vLocal_1578[2 /*3*/]), 0);
				}
				else if (__LIB_1__::func_313(&(vLocal_1578[2 /*3*/]), (BUILTIN::TO_FLOAT(3000) / 1000f)))
				{
					__LIB_3__::func_386(&Local_1389, 1);
					func_139(16);
				}
			}
			if (__LIB_2__::func_227(-3.5f, 1, 0, 0))
			{
				if (__LIB_7__::func_924(&Local_1389, 256))
				{
					if (__LIB_2__::func_763(Local_1389.f_138, 0))
					{
						__LIB_8__::func_124(Local_1389.f_138, 1);
					}
					if (__LIB_2__::func_763(65, 0))
					{
						__LIB_8__::func_124(65, 1);
					}
					if (__LIB_2__::func_763(66, 0))
					{
						__LIB_8__::func_124(66, 1);
					}
				}
				else
				{
					func_684();
				}
				if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
				{
					PED::SET_PED_CONFIG_FLAG(*iParam0, 277, false);
					PED::SET_PED_CONFIG_FLAG(*iParam0, 178, true);
				}
				if (!ENTITY::IS_ENTITY_DEAD(*iParam1))
				{
					PED::SET_PED_CONFIG_FLAG(*iParam1, 277, false);
					PED::SET_PED_CONFIG_FLAG(*iParam1, 178, true);
				}
				if (!ENTITY::IS_ENTITY_DEAD(*iParam2))
				{
					PED::SET_PED_CONFIG_FLAG(*iParam2, 277, false);
					PED::SET_PED_CONFIG_FLAG(*iParam2, 178, true);
				}
				func_279(0, 1, 0);
				func_589(0);
				func_279(1, 1, 0);
				func_589(1);
				func_279(2, 1, 0);
				func_589(2);
				func_139(8388608);
				__LIB_0__::func_268(&(vLocal_1578[5 /*3*/]), (14f / 2f));
				__LIB_3__::func_393(&Local_1389, 1);
				func_139(1048576);
				func_616(1);
				Local_1389.f_18 = 1000;
				func_141(128);
				iLocal_24 = 8;
			}
			break;
		case 8:
			if (__LIB_7__::func_924(&Local_1389, 256) || __LIB_0__::func_94(Global_35, Local_386.f_4, 0) > 50f)
			{
				if (__LIB_2__::func_763(Local_1389.f_138, 0))
				{
					__LIB_8__::func_124(Local_1389.f_138, 1);
				}
				if (__LIB_2__::func_763(65, 0))
				{
					__LIB_8__::func_124(65, 1);
				}
				if (__LIB_2__::func_763(66, 0))
				{
					__LIB_8__::func_124(66, 1);
				}
				iLocal_24 = 9;
			}
			break;
		case 9:
			break;
	}
	return 0;
}

int func_374(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	if (func_686() || func_687())
	{
		if (iLocal_22 > 2)
		{
			__LIB_0__::func_769();
			__LIB_3__::func_334(&uLocal_1790);
			iLocal_22 = 2;
		}
	}
	func_602(iParam1, 65);
	switch (iLocal_22)
	{
		case 0:
			if (!__LIB_2__::func_763(Local_1389.f_138, 0))
			{
				__LIB_8__::func_123(Local_1389.f_138, 1, 1);
			}
			Local_2071.f_12 = 15f;
			Local_2071.f_13 = 10f;
			Local_1857.f_78 = 0;
			func_616(1);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_1789))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_1789, true, true);
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_1789);
				iVar1 = 0;
				while (iVar1 < 6)
				{
					iVar0 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_1789, iVar1);
					if (ENTITY::DOES_ENTITY_EXIST(iVar0))
					{
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iVar0);
					}
					iVar1++;
				}
			}
			func_139(8388608);
			__LIB_0__::func_268(&(vLocal_1578[5 /*3*/]), (14f / 2f));
			func_589(0);
			func_279(0, 1, 1);
			func_589(1);
			func_589(2);
			func_5(1024);
			iLocal_22 = 2;
			break;
		case 2:
			if (!__LIB_7__::func_907(Local_1389.f_136, 4))
			{
				__LIB_8__::func_85(Local_1389.f_136, 4);
			}
			if (func_14(&iLocal_1789))
			{
				__LIB_8__::func_48(iParam0, 0, 0);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_1789))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_1789, true, true);
				}
				__LIB_1__::func_422("HOME_OBJ01", 7500, 0, 1, 0, 0, -1, -1, 0);
				__LIB_8__::func_82(Local_1389.f_136, 8192);
				__LIB_3__::func_652(__LIB_10__::func_630(), &(uLocal_1790[1]), 1631143573, 0, __LIB_10__::func_629(1), 0);
				iLocal_22 = 8;
			}
			else
			{
				iLocal_22 = 3;
			}
			break;
		case 3:
			if (__LIB_2__::func_215(*iParam0, Global_35, 0, 20f, 0))
			{
				if (!__LIB_2__::func_763(Local_1389.f_138, 0))
				{
					__LIB_8__::func_123(Local_1389.f_138, 1, 1);
				}
				TASK::OPEN_SEQUENCE_TASK(&iLocal_1818);
				TASK::TASK_GO_TO_ENTITY(0, Global_35, -1, 5f, 1.5f, 10f, 0);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_1818);
				TASK::TASK_PERFORM_SEQUENCE(*iParam0, iLocal_1818);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1818);
				func_5(1048576);
				func_5(1024);
				iLocal_30 = __LIB_3__::func_721(*iParam0, VOLUME::_CREATE_VOLUME_CYLINDER(ENTITY::GET_ENTITY_COORDS(*iParam0, true, false), 0f, 0f, ENTITY::GET_ENTITY_HEADING(*iParam0), 5.5f, 5.5f, 5.5f), 148);
				__LIB_8__::func_336(&(Local_1389.f_35), "HMSTD_ASK_3", *iParam0, Global_35, 0, 0, 1, 1);
				iLocal_22 = 4;
			}
			break;
		case 4:
			if (!__LIB_8__::func_332(33554432) && __LIB_2__::func_227(-3.5f, 1, 0, 0))
			{
				func_615(1, 1);
				func_279(0, 1, 0);
				func_692(0);
				__LIB_1__::func_148(&(vLocal_1578[1 /*3*/]));
			}
			if (iLocal_335 == 0)
			{
				switch (iLocal_334)
				{
					case 0:
						__LIB_8__::func_336(&(Local_1389.f_35), "HMSTD_ASK_RESN", Global_35, *iParam0, 0, 0, 1, 1);
						func_615(1, 0);
						func_279(0, 1, 1);
						iLocal_22 = 15;
						break;
					case 2:
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_1788))
						{
							PED::SET_PED_CONFIG_FLAG(iLocal_1788, 136, false);
						}
						MAP::DISPLAY_RADAR(false);
						__LIB_8__::func_48(&Global_35, 0, *iParam0);
						func_5(65536);
						TASK::CLEAR_PED_TASKS(*iParam0, true, false);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(*iParam0, Global_35, -1, -1f, -1f, -1f);
						func_5(65536);
						func_141(128);
						func_615(1, 0);
						func_279(0, 1, 1);
						__LIB_8__::func_336(&(Local_1389.f_35), "HMSTD_ASK_RESP", Global_35, *iParam0, 0, 0, 1, 1);
						iLocal_22 = 5;
						break;
					case 1:
						func_141(128);
						__LIB_8__::func_336(&(Local_1389.f_35), "HMSTD_ASK_QUIT", Global_35, *iParam0, 0, 0, 1, 1);
						__LIB_8__::func_83(Local_1389.f_136, 256);
						__LIB_8__::func_83(Local_1389.f_136, 2);
						__LIB_8__::func_131(&Local_1389, 128);
						func_615(1, 0);
						func_279(0, 1, 1);
						iLocal_22 = 15;
						break;
				}
			}
			if (__LIB_1__::func_313(&(vLocal_1578[1 /*3*/]), 12.5f))
			{
				__LIB_8__::func_336(&(Local_1389.f_35), "HMSTD_ASK_GUP", Global_35, *iParam0, 0, 0, 1, 1);
				func_615(1, 0);
				func_279(0, 1, 1);
				iLocal_22 = 15;
			}
			break;
		case 5:
			__LIB_8__::func_48(iParam0, 0, 0);
			__LIB_8__::func_48(&Global_35, 0, *iParam0);
			if (__LIB_2__::func_227(-3.5f, 1, 0, 0) && PED::IS_PED_FACING_PED(*iParam0, Global_35, 45f))
			{
				TASK::CLEAR_PED_TASKS(*iParam0, true, false);
				ENTITY::FREEZE_ENTITY_POSITION(*iParam0, true);
				__LIB_8__::func_147(&(Local_1618[1 /*7*/]), *iParam0, "father", 1);
				__LIB_8__::func_147(&(Local_1618[1 /*7*/]), Global_35, "plr", 1);
				__LIB_8__::func_148(&(Local_1618[1 /*7*/]), Local_386.f_690[0 /*12*/].f_8, "MONEY");
				__LIB_8__::func_15(&(Local_1618[1 /*7*/]), ENTITY::GET_ENTITY_COORDS(*iParam0, true, false), 0f, 0f, ENTITY::GET_ENTITY_HEADING(*iParam0));
				__LIB_3__::func_623(&Local_1674);
				Local_1674.f_1 = Global_35;
				Local_1674.f_8 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*iParam0, func_694()) };
				Local_1674.f_19 = __LIB_2__::func_916(Local_1674.f_8, ENTITY::GET_ENTITY_COORDS(*iParam0, true, false));
				Local_1674.f_25 = Local_1618[1 /*7*/];
				StringCopy(&(Local_1674.f_30), "plr", 24);
				StringCopy(&(Local_1674.f_26), func_415(1), 32);
				__LIB_1__::func_336(&(Local_1674.f_23), 27648);
				__LIB_8__::func_131(&Local_1389, 65536);
				__LIB_17__::func_849(&Local_1674, 106);
				__LIB_7__::func_961(&Local_1549, 4);
				iLocal_22 = 6;
			}
			break;
		case 6:
			__LIB_8__::func_48(iParam0, 0, 0);
			__LIB_8__::func_48(&Global_35, 0, *iParam0);
			if (!__LIB_2__::func_763(Local_1389.f_138, 0))
			{
				__LIB_8__::func_123(Local_1389.f_138, 1, 1);
			}
			__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			if (__LIB_17__::func_849(&Local_1674, 106))
			{
				func_697(iParam0);
				iLocal_22 = 7;
			}
			break;
		case 7:
			if (__LIB_2__::func_598(Global_35, Local_1618[1 /*7*/], "plr", joaat("RELEASE"), 0, 1, 0))
			{
				__LIB_1__::func_951(&(Local_386.f_690[0 /*12*/].f_8));
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(*iParam0, Global_35, -1, -1f, -1f, -1f);
				MAP::DISPLAY_RADAR(true);
				__LIB_8__::func_82(Local_1389.f_136, 1073741824 /* Float: 2f */);
				iLocal_22 = 11;
			}
			break;
		case 8:
			__LIB_8__::func_48(iParam0, 0, 0);
			if (__LIB_0__::func_94(iLocal_1789, __LIB_10__::func_630(), 0) < 8f)
			{
				if (!__LIB_4__::func_241(524288))
				{
					VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_1789, 5f, -1, false);
					func_5(524288);
				}
				if (ENTITY::GET_ENTITY_SPEED(iLocal_1789) < 2f)
				{
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_1789, 0f);
					if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(Global_35, 1000, 0);
						__LIB_0__::func_325(&(uLocal_1790[1]));
						if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
						{
							TASK::TASK_FOLLOW_AND_CONVERSE_WITH_PED(*iParam0, Global_35, 0, 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 8, 0, 0, 1069547520 /* Float: 1.5f */, 1073741824 /* Float: 2f */);
						}
					}
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_1789, false);
					__LIB_0__::func_769();
					iLocal_22 = 9;
				}
			}
			break;
		case 9:
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_1789, 0f);
			__LIB_8__::func_48(iParam0, 0, 0);
			if (__LIB_2__::func_118(*iParam0, 1, 1) < 10f && __LIB_2__::func_215(*iParam0, Global_35, 0, 10f, 0))
			{
				iLocal_22 = 10;
			}
			break;
		case 10:
			if (!__LIB_2__::func_763(Local_1389.f_138, 0))
			{
				__LIB_8__::func_123(Local_1389.f_138, 1, 1);
			}
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_1789, 0f);
			__LIB_8__::func_48(iParam0, 0, 0);
			if (func_698(*iParam0, &(uLocal_1790[0]), Global_35, &iLocal_2070, &Local_1857))
			{
				__LIB_0__::func_325(&(uLocal_1790[0]));
				__LIB_8__::func_253(&Local_1389);
				__LIB_8__::func_82(Local_1389.f_136, 128);
				func_5(8192);
				__LIB_8__::func_85(Local_1389.f_136, 16384);
				func_699(Local_1389.f_136);
				func_5(512);
				__LIB_8__::func_131(&Local_1389, 128);
				VEHICLE::SET_VEHICLE_HAS_BEEN_OWNED_BY_PLAYER(iLocal_1789, false);
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_1789);
				func_5(262144);
				iLocal_22 = 11;
			}
			break;
		case 11:
			if (!__LIB_2__::func_763(Local_1389.f_138, 0))
			{
				__LIB_8__::func_123(Local_1389.f_138, 1, 1);
			}
			if (__LIB_2__::func_227(-3.5f, 1, 0, 0))
			{
				iLocal_22 = 12;
			}
			break;
		case 12:
			if (!__LIB_2__::func_763(Local_1389.f_138, 0))
			{
				__LIB_8__::func_123(Local_1389.f_138, 1, 1);
			}
			if (__LIB_2__::func_227(-3.5f, 1, 0, 0))
			{
				iLocal_22 = 13;
			}
			break;
		case 13:
			if (!__LIB_2__::func_763(Local_1389.f_138, 0))
			{
				__LIB_8__::func_123(Local_1389.f_138, 1, 1);
			}
			iLocal_22 = 14;
			break;
		case 14:
			if (__LIB_2__::func_227(-3.5f, 1, 0, 0))
			{
				iLocal_22 = 15;
			}
			break;
		case 15:
			if (__LIB_2__::func_227(0, 1, 0, 0))
			{
				func_139(1048576);
				func_139(8388608);
				func_616(0);
				if (__LIB_2__::func_763(Local_1389.f_138, 0))
				{
					__LIB_8__::func_124(Local_1389.f_138, 1);
				}
				func_615(0, 0);
				func_279(0, 1, 0);
				__LIB_3__::func_953(&iLocal_30, 1);
				__LIB_0__::func_325(&(uLocal_1790[0]));
				iLocal_22 = 16;
			}
			break;
		case 16:
			break;
	}
	return 0;
}

int func_375(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	char[] cVar2[8];
	int iVar3;
	vector3 vVar4;
	char[] cVar7[8];
	int iVar8;
	func_686();
	func_687();
	func_700(iParam0);
	func_602(iParam1, 65);
	switch (iLocal_21)
	{
		case 0:
			Local_2071.f_12 = 15f;
			Local_2071.f_13 = 10f;
			func_589(0);
			func_279(0, 1, 1);
			func_589(1);
			func_589(2);
			func_616(1);
			Local_336.f_40 = *iParam0;
			Local_336.f_39 = iLocal_1759[4];
			Local_336.f_42 = 3f;
			Local_336.f_43 = 3f;
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_1789))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_1789, true, true);
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_1789);
				iVar1 = 0;
				while (iVar1 < 6)
				{
					iVar0 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_1789, iVar1);
					if (ENTITY::DOES_ENTITY_EXIST(iVar0))
					{
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iVar0);
					}
					iVar1++;
				}
				if (__LIB_7__::func_907(Local_1389.f_136, 64))
				{
					func_5(131072);
				}
				else
				{
					func_139(8388608);
					__LIB_0__::func_268(&(vLocal_1578[5 /*3*/]), (14f / 2f));
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(*iParam0, false, true);
					__LIB_8__::func_147(&(Local_1618[0 /*7*/]), *iParam0, "FATHER", 1);
					StringCopy(&(Local_1618[0 /*7*/].f_4), "BOOL_intro_idle", 24);
					__LIB_8__::func_16(&(Local_1618[0 /*7*/]));
					if (!__LIB_7__::func_908(Local_1389.f_136, 256))
					{
						POPULATION::_0xB56D41A694E42E86(iLocal_1759[4], 0, 0, 0, -1, -1, 0);
						PED::_0x4C39C95AE5DB1329(iLocal_1759[4], 0, 15);
					}
					__LIB_9__::func_735(1);
					Jump @3369; //curOff = 459
					if (func_600(Local_1389.f_136, &Local_386, &Local_1389, 50f))
					{
						func_5(128);
						__LIB_9__::func_735(2);
					}
					Jump @3369; //curOff = 496
					if (!__LIB_7__::func_907(Local_1389.f_136, 4))
					{
						__LIB_8__::func_85(Local_1389.f_136, 4);
					}
					if (__LIB_2__::func_215(*iParam0, Global_35, 0, Local_2071.f_12, 0) && Global_36.f_2 < 100f)
					{
						iLocal_30 = __LIB_3__::func_721(*iParam0, VOLUME::_CREATE_VOLUME_CYLINDER(ENTITY::GET_ENTITY_COORDS(*iParam0, true, false), 0f, 0f, ENTITY::GET_ENTITY_HEADING(*iParam0), 5.5f, 5.5f, 5.5f), 660);
						__LIB_8__::func_48(iParam0, 0, 0);
						__LIB_8__::func_48(&Global_35, 0, *iParam0);
						__LIB_3__::func_667(*iParam0, &uLocal_1540, 0f, 0f, 0f, 0, 60f, 20f, -1, 4000, 4000, 3.5f, 0, 1, 1084227584 /* Float: 5f */);
						vVar4 = { __LIB_2__::func_114(Global_35, 1065353216 /* Float: 1f */) };
						iVar3 = __LIB_2__::func_431(*iParam0, vVar4, 0.349f);
						switch (iVar3)
						{
							case 0:
								cVar2 = "PBL_react_F";
								break;
							case 2:
								cVar2 = "PBL_react_R";
								break;
							case 3:
								cVar2 = "PBL_react_L";
								break;
							case 1:
								cVar2 = "PBL_react_B";
								break;
						}
						__LIB_8__::func_151(&(Local_1618[0 /*7*/]), cVar2);
						__LIB_9__::func_735(3);
					}
					Jump @3369; //curOff = 790
					__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
					if (__LIB_8__::func_34(&(Local_1618[0 /*7*/])))
					{
						__LIB_8__::func_575(&(Local_1618[0 /*7*/]), 1, 1);
						func_5(8388608);
						func_5(1024);
						__LIB_8__::func_336(&(Local_1389.f_35), Local_2071.f_1, *iParam0, Global_35, 0, 0, 1, 1);
						__LIB_9__::func_735(4);
					}
					Jump @3369; //curOff = 881
					__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
					if (!__LIB_2__::func_763(Local_1389.f_138, 0))
					{
						__LIB_8__::func_123(Local_1389.f_138, 1, 1);
					}
					__LIB_8__::func_48(iParam0, 0, 0);
					__LIB_8__::func_48(&Global_35, 0, *iParam0);
					__LIB_3__::func_667(*iParam0, &uLocal_1540, 0f, 0f, 0f, 0, 60f, 20f, -1, 4000, 4000, 3.5f, 0, 1, 1084227584 /* Float: 5f */);
					if (!ENTITY::IS_ENTITY_DEAD(*iParam0) && ENTITY::HAS_ANIM_EVENT_FIRED(*iParam0, joaat("RELEASE")))
					{
						if (__LIB_1__::func_205(Global_35, iLocal_1759[4], 1, 0))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam0, Global_36, 1f, -1, 1f, 0, 40000f);
						}
						else
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam0, VOLUME::_GET_VOLUME_COORDS(iLocal_1759[4]), 1f, -1, 0.25f, 0, 40000f);
						}
						__LIB_1__::func_283(&(vLocal_1578[0 /*3*/]), 1);
						__LIB_1__::func_148(&(vLocal_1578[1 /*3*/]));
						__LIB_9__::func_735(5);
					}
					Jump @3369; //curOff = 1116
					__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
					__LIB_8__::func_48(iParam0, 0, 0);
					__LIB_3__::func_667(*iParam0, &uLocal_1540, 0f, 0f, 0f, 0, 60f, 20f, -1, 4000, 4000, 3.5f, 0, 1, 1084227584 /* Float: 5f */);
					func_702(iParam0);
					if (__LIB_2__::func_227(-3.5f, 1, 0, 0))
					{
						if (!__LIB_7__::func_907(Local_1389.f_136, 64))
						{
							if (__LIB_4__::func_241(16))
							{
								cVar7 = "HMSTD_ASK_WAG";
							}
							else if (func_703())
							{
								cVar7 = "HMSTD_IG3_ASKM";
							}
							else
							{
								cVar7 = "HMSTD_IG3_ASKW";
							}
							__LIB_8__::func_336(&(Local_1389.f_35), cVar7, *iParam0, Global_35, 0, 0, 1, 1);
							__LIB_8__::func_85(Local_1389.f_136, 64);
						}
						__LIB_2__::func_298();
						__LIB_9__::func_735(6);
					}
					Jump @3369; //curOff = 1306
					__LIB_8__::func_48(iParam0, 0, 0);
					func_702(iParam0);
					if (__LIB_2__::func_227(-3.5f, 1, 0, 0))
					{
						__LIB_1__::func_283(&(vLocal_1578[0 /*3*/]), 1);
						__LIB_1__::func_148(&(vLocal_1578[1 /*3*/]));
						func_615(1, 1);
						func_279(0, 1, 0);
						func_704(0);
						__LIB_9__::func_735(7);
					}
					Jump @3369; //curOff = 1382
					__LIB_8__::func_48(iParam0, 0, 0);
					if (__LIB_0__::func_75(&(vLocal_1578[1 /*3*/])))
					{
						func_702(iParam0);
					}
					if (__LIB_2__::func_227(-3.5f, 1, 0, 0))
					{
						switch (iLocal_334)
						{
							case 0:
								if (__LIB_4__::func_241(16))
								{
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_1788))
									{
										PED::SET_PED_CONFIG_FLAG(iLocal_1788, 136, false);
									}
									__LIB_8__::func_48(&Global_35, 0, *iParam0);
									__LIB_8__::func_336(&(Local_1389.f_35), "HOME_LN03AJA", Global_35, *iParam0, 0, 0, 1, 1);
									func_141(128);
									__LIB_8__::func_253(&Local_1389);
									func_615(1, 0);
									func_279(0, 1, 1);
									__LIB_9__::func_735(13);
								}
								else if (func_703())
								{
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_1788))
									{
										PED::SET_PED_CONFIG_FLAG(iLocal_1788, 136, false);
									}
									WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
									TASK::TASK_SWAP_WEAPON(Global_35, 1, 0, 0, 0);
									if (__LIB_7__::func_907(0, 4) && __LIB_0__::func_982(0) == 1)
									{
										__LIB_8__::func_85(0, 16);
									}
									func_615(1, 0);
									func_279(0, 1, 1);
									__LIB_9__::func_735(9);
								}
								break;
							case 2:
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_1788))
								{
									PED::SET_PED_CONFIG_FLAG(iLocal_1788, 136, false);
								}
								MAP::DISPLAY_RADAR(false);
								__LIB_8__::func_48(&Global_35, 0, *iParam0);
								func_5(65536);
								func_141(128);
								TASK::CLEAR_PED_TASKS(*iParam0, true, false);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(*iParam0, Global_35, -1, -1f, -1f, -1f);
								func_615(1, 0);
								func_279(0, 1, 1);
								__LIB_9__::func_735(11);
								break;
							case 1:
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_1788))
								{
									PED::SET_PED_CONFIG_FLAG(iLocal_1788, 136, false);
								}
								func_141(128);
								func_615(1, 0);
								func_279(0, 0, 1);
								__LIB_0__::func_325(&(uLocal_1790[0]));
								__LIB_9__::func_735(18);
								break;
						}
						if (__LIB_2__::func_118(*iParam0, 1, 1) > 18f)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_1788))
							{
								PED::SET_PED_CONFIG_FLAG(iLocal_1788, 136, false);
							}
							func_615(1, 0);
							func_279(0, 1, 1);
							__LIB_9__::func_735(18);
						}
						if (__LIB_1__::func_313(&(vLocal_1578[1 /*3*/]), (7.5f + 5.5f)))
						{
							__LIB_9__::func_735(8);
						}
						else if (__LIB_1__::func_285(&(vLocal_1578[0 /*3*/]), (7.5f + 5.5f)))
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_1788))
							{
								PED::SET_PED_CONFIG_FLAG(iLocal_1788, 136, false);
							}
							func_615(1, 0);
							func_279(0, 1, 1);
							__LIB_9__::func_735(18);
						}
					}
					Jump @3369; //curOff = 1975
					WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar8, true, 0, false);
					if (iVar8 == joaat("WEAPON_UNARMED"))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_1788))
						{
							PED::SET_PED_CONFIG_FLAG(iLocal_1788, 136, false);
						}
						__LIB_8__::func_48(&Global_35, 0, *iParam0);
						__LIB_8__::func_336(&(Local_1389.f_35), "HMSTD_IG3_PWOOD", Global_35, *iParam0, 0, 0, 1, 1);
						__LIB_8__::func_82(Local_1389.f_136, 256);
						__LIB_8__::func_129(&Local_1389);
						__LIB_1__::func_148(&(vLocal_1578[0 /*3*/]));
						__LIB_9__::func_735(10);
					}
					Jump @3369; //curOff = 2091
					__LIB_8__::func_48(iParam0, 0, 0);
					__LIB_8__::func_48(&Global_35, 0, *iParam0);
					if (PED::IS_PED_FACING_PED(*iParam0, Global_35, 45f))
					{
						TASK::CLEAR_PED_TASKS(*iParam0, true, false);
						ENTITY::FREEZE_ENTITY_POSITION(*iParam0, true);
						__LIB_8__::func_147(&(Local_1618[1 /*7*/]), *iParam0, "father", 1);
						__LIB_8__::func_147(&(Local_1618[1 /*7*/]), Global_35, "plr", 1);
						__LIB_8__::func_148(&(Local_1618[1 /*7*/]), Local_386.f_690[0 /*12*/].f_8, "MONEY");
						__LIB_8__::func_15(&(Local_1618[1 /*7*/]), ENTITY::GET_ENTITY_COORDS(*iParam0, true, false), 0f, 0f, ENTITY::GET_ENTITY_HEADING(*iParam0));
						__LIB_3__::func_623(&Local_1674);
						Local_1674.f_1 = Global_35;
						Local_1674.f_8 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*iParam0, func_694()) };
						Local_1674.f_19 = __LIB_2__::func_916(Local_1674.f_8, ENTITY::GET_ENTITY_COORDS(*iParam0, true, false));
						Local_1674.f_25 = Local_1618[1 /*7*/];
						StringCopy(&(Local_1674.f_30), "plr", 24);
						StringCopy(&(Local_1674.f_26), func_415(1), 32);
						__LIB_1__::func_336(&(Local_1674.f_23), 27648);
						__LIB_8__::func_131(&Local_1389, 65536);
						__LIB_17__::func_849(&Local_1674, 106);
						__LIB_7__::func_961(&Local_1549, 4);
						__LIB_9__::func_735(12);
					}
					Jump @3369; //curOff = 2376
					__LIB_8__::func_48(iParam0, 0, 0);
					__LIB_8__::func_48(&Global_35, 0, *iParam0);
					if (__LIB_4__::func_241(2097152) || __LIB_17__::func_849(&Local_1674, 106))
					{
						__LIB_9__::func_735(14);
					}
					Jump @3369; //curOff = 2430
					__LIB_8__::func_129(&Local_1389);
					if (iLocal_334 == 1)
					{
						func_279(0, 1, 1);
						__LIB_8__::func_336(&(Local_1389.f_35), "HMSTD_IG3_NEG", *iParam0, Global_35, 0, 0, 1, 1);
					}
					else
					{
						__LIB_8__::func_336(&(Local_1389.f_35), "HMSTD_IG3_WALKS", *iParam0, Global_35, 0, 0, 1, 1);
					}
					__LIB_9__::func_735(19);
					Jump @3369; //curOff = 2511
					__LIB_8__::func_48(iParam0, 0, 0);
					if (__LIB_2__::func_227(-3.5f, 1, 0, 0))
					{
						__LIB_13__::func_188(2048);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(*iParam0, Global_35, -1, -1f, -1f, -1f);
						__LIB_8__::func_336(&(Local_1389.f_35), "HMSTD_IG3_NEAR", *iParam0, Global_35, 0, 0, 1, 1);
						__LIB_1__::func_148(&(vLocal_1578[0 /*3*/]));
						__LIB_9__::func_735(7);
					}
					Jump @3369; //curOff = 2609
					__LIB_8__::func_48(iParam0, 0, 0);
					__LIB_8__::func_48(&Global_35, 0, *iParam0);
					if ((__LIB_2__::func_227(-3.5f, 1, Global_35, 1) && __LIB_2__::func_227(-3.5f, 1, *iParam0, 1)) && __LIB_1__::func_285(&(vLocal_1578[0 /*3*/]), 6f))
					{
						__LIB_0__::func_37(&(vLocal_1578[0 /*3*/]));
						__LIB_8__::func_131(&Local_1389, 128);
						func_101(0);
						func_5(2097152);
						__LIB_8__::func_82(Local_1389.f_136, 2);
						__LIB_8__::func_85(Local_1389.f_136, 512);
						func_465(11, 1);
						__LIB_0__::func_325(&(uLocal_1790[0]));
						__LIB_9__::func_735(19);
					}
					Jump @3369; //curOff = 2760
					if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(Global_35, 1000, 0);
						VEHICLE::SET_VEHICLE_HAS_BEEN_OWNED_BY_PLAYER(iLocal_1789, false);
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_1789, false);
					}
					if (__LIB_2__::func_227(-3.5f, 1, 0, 0))
					{
						func_101(0);
						func_5(2097152);
						if (!__LIB_2__::func_763(Local_1389.f_138, 0))
						{
							__LIB_8__::func_123(Local_1389.f_138, 1, 1);
						}
						__LIB_0__::func_325(&(uLocal_1790[0]));
						__LIB_8__::func_85(Local_1389.f_136, 16384);
						func_5(512);
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_1789);
						func_5(262144);
						__LIB_8__::func_82(Local_1389.f_136, 128);
						func_5(8192);
						__LIB_8__::func_131(&Local_1389, 128);
						__LIB_8__::func_336(&(Local_1389.f_35), "HOME_WLCMB", Global_35, *iParam0, 0, 0, 1, 1);
						__LIB_9__::func_735(19);
					}
					Jump @3369; //curOff = 2956
					__LIB_8__::func_48(iParam0, 0, 0);
					__LIB_8__::func_48(&Global_35, 0, *iParam0);
					if (!__LIB_2__::func_763(Local_1389.f_138, 0))
					{
						__LIB_8__::func_123(Local_1389.f_138, 1, 1);
					}
					__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
					if (__LIB_17__::func_849(&Local_1674, 106))
					{
						func_697(iParam0);
						__LIB_9__::func_735(16);
					}
					Jump @3369; //curOff = 3046
					if (!__LIB_2__::func_763(Local_1389.f_138, 0))
					{
						__LIB_8__::func_123(Local_1389.f_138, 1, 1);
					}
					__LIB_8__::func_48(iParam0, 0, 0);
					__LIB_8__::func_48(&Global_35, 0, *iParam0);
					if (__LIB_2__::func_598(Global_35, Local_1618[1 /*7*/], "plr", joaat("RELEASE"), 0, 1, 0))
					{
						__LIB_1__::func_951(&(Local_386.f_690[0 /*12*/].f_8));
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(*iParam0, Global_35, -1, -1f, -1f, -1f);
						MAP::DISPLAY_RADAR(true);
						__LIB_0__::func_325(&(uLocal_1790[0]));
						__LIB_8__::func_82(Local_1389.f_136, 1073741824 /* Float: 2f */);
						__LIB_9__::func_735(17);
					}
					Jump @3369; //curOff = 3198
					__LIB_8__::func_48(iParam0, 0, 0);
					if (!__LIB_2__::func_763(Local_1389.f_138, 0))
					{
						__LIB_8__::func_123(Local_1389.f_138, 1, 1);
					}
					__LIB_9__::func_735(19);
					Jump @3369; //curOff = 3241
					if (__LIB_2__::func_227(0, 1, 0, 0))
					{
						if (__LIB_7__::func_908(Local_1389.f_136, 2))
						{
							if (__LIB_2__::func_763(Local_1389.f_138, 0))
							{
								__LIB_8__::func_124(Local_1389.f_138, 1);
							}
						}
						func_616(0);
						__LIB_0__::func_325(&(uLocal_1790[0]));
						func_615(0, 0);
						func_279(0, 1, 0);
						__LIB_3__::func_953(&iLocal_30, 1);
						func_139(8388608);
						__LIB_9__::func_735(20);
					}
					Jump @3369; //curOff = 3340
					if (__LIB_2__::func_763(Local_1389.f_138, 0))
					{
						__LIB_8__::func_124(Local_1389.f_138, 1);
					}
				}
				return 0;
			}
			default:
				break;
	}
}

int func_376(int iParam0)
{
	if (func_417())
	{
		return func_705(iParam0);
	}
	return func_706(iParam0);
}

int func_377(int iParam0)
{
	switch (iLocal_23)
	{
		case 0:
			if (!__LIB_2__::func_763(Local_1389.f_138, 0))
			{
				__LIB_8__::func_123(Local_1389.f_138, 1, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_1794[0]))
			{
				TASK::TASK_STAND_STILL(iLocal_1794[0], -1);
				__LIB_4__::func_203(&Local_1389, 1);
				__LIB_2__::func_967(&Local_1389, *iParam0, iLocal_1794[0], 0);
				PHYSICS::_0x06AADE17334F7A40(iLocal_1794[0], func_708());
				PED::SET_PED_CONFIG_FLAG(iLocal_1794[0], 178, true);
				PED::_0x931B241409216C1F(*iParam0, iLocal_1794[0], 0);
			}
			func_589(0);
			func_279(0, 1, 1);
			iLocal_23 = 3;
			break;
		case 3:
			if (func_370(iParam0, 1, 0))
			{
				iLocal_23 = 9;
			}
			break;
		case 9:
			if (func_709(iParam0))
			{
				func_141(128);
				iLocal_23 = 10;
			}
			break;
		case 10:
			if (func_710(iParam0))
			{
				__LIB_8__::func_131(&Local_1389, 512);
				__LIB_8__::func_85(Local_1389.f_136, 256);
				__LIB_0__::func_123(Local_1389.f_138, 32);
				__LIB_0__::func_123(Local_1389.f_138, 128);
				__LIB_0__::func_121(Local_1389.f_138, 1);
				PERSCHAR::_0xB65E7F733956CF25(PERSCHAR::_0x112DDF56300BC6E5(__LIB_0__::func_118(Local_1389.f_138)));
				__LIB_1__::func_949(Local_1389.f_138, 0);
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1986792065, 1);
				__LIB_3__::func_123(1986792065, 1);
				iLocal_23 = 11;
			}
			break;
		case 11:
			break;
	}
	return 0;
}

void func_378(var uParam0)
{
	int iVar0;
	if (ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0))
	{
		if (__LIB_3__::func_458(*uParam0) != 0)
		{
			iVar0 = MAP::GET_BLIP_FROM_ENTITY(*uParam0);
			if (MAP::DOES_BLIP_EXIST(iVar0))
			{
				MAP::REMOVE_BLIP(&iVar0);
			}
			TASK::TASK_SMART_FLEE_PED(*uParam0, Global_35, 1000f, -1, 0, 1077936128 /* Float: 3f */, 0);
			PED::SET_PED_KEEP_TASK(*uParam0, true);
		}
	}
}

void func_401(int iParam0)
{
	__LIB_1__::func_683(&iLocal_17, iParam0);
}

bool func_402(int iParam0)
{
	return __LIB_0__::func_27(iLocal_17, iParam0);
}

void func_414(int iParam0)
{
	if (*iParam0 != 0)
	{
		STREAMING::REQUEST_MODEL(*iParam0, false);
	}
}

char* func_415(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (__LIB_7__::func_907(Local_1389.f_136, 128))
			{
				if (__LIB_10__::func_282(64))
				{
					return "PBL_sitting_action";
				}
				else
				{
					return "PBL_intro_idle";
				}
			}
			else
			{
				switch (iLocal_18)
				{
					case 1:
						return "PBL_BASE";
					case 4:
						return "PBL_get_money";
					case 3:
						return "PBL_intro_idle";
					default:
						break;
				}
			}
			break;
		case 2:
			return "PBL_ENTER";
	}
	return "";
}

bool func_417()
{
	return __LIB_7__::func_908(Local_1389.f_136, 128);
}

int func_418(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 13;
				case 1:
					return 14;
				case 2:
					return 15;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 16;
				case 1:
					return 17;
				case 2:
					return 18;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 19;
				case 1:
					return 20;
				case 2:
					return 21;
				default:
					break;
			}
			break;
	}
	return -1;
}

Vector3 func_419(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iLocal_18)
			{
				case 1:
					switch (iParam1)
					{
						case 0:
							return -440.09f, 502.1f, 97.87f;
						case 1:
							return -440.09f, 502.1f, 98.1f;
						case 2:
							return -440.1f, 502.1f, 98.32f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam1)
					{
						case 0:
							return -440.09f, 502.06f, 97.87f;
						case 1:
							return -440.09f, 502.06f, 98.1f;
						case 2:
							return -440.1f, 502.06f, 98.32f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam1)
					{
						case 0:
							return -436.71f, 501.08f, 97.87f;
						case 1:
							return -436.71f, 501.08f, 98.1f;
						case 2:
							return -436.71f, 501.08f, 98.32f;
						default:
							break;
					}
					break;
			}
			break;
		case 1:
			switch (iLocal_18)
			{
				case 1:
					switch (iParam1)
					{
						case 0:
							return -438.7f, 502.13f, 97.87f;
						case 1:
							return -438.7f, 502.13f, 98.1f;
						case 2:
							return -438.71f, 502.13f, 98.32f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam1)
					{
						case 0:
							return -438.69f, 502.09f, 97.87f;
						case 1:
							return -438.69f, 502.09f, 98.1f;
						case 2:
							return -438.7f, 502.09f, 98.32f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam1)
					{
						case 0:
							return -443.87f, 493.97f, 97.99f;
						case 1:
							return -443.87f, 493.98f, 98.23f;
						case 2:
							return -443.87f, 493.97f, 98.45f;
						default:
							break;
					}
					break;
			}
			break;
		case 2:
			switch (iLocal_18)
			{
				case 2:
					switch (iParam1)
					{
						case 0:
							return -431.66f, 499.88f, 98.03f;
						case 1:
							return -431.66f, 499.89f, 98.27f;
						case 2:
							return -431.67f, 499.89f, 98.49f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam1)
					{
						case 0:
							return -433.83f, 499.98f, 98.8f;
						case 1:
							return -433.83f, 499.98f, 99.04f;
						case 2:
							return -433.83f, 499.97f, 99.26f;
						default:
							break;
					}
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_420(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iLocal_18)
			{
				case 1:
					switch (iParam1)
					{
						case 0:
							return 9.08f, 0f, -0.18f;
						case 1:
							return 9.08f, 0f, -0.18f;
						case 2:
							return 9.08f, 0f, -0.18f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam1)
					{
						case 0:
							return 9.08f, 0f, -0.18f;
						case 1:
							return 9.08f, 0f, -0.18f;
						case 2:
							return 9.08f, 0f, -0.18f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam1)
					{
						case 0:
							return 9.08f, 0f, -89.58f;
						case 1:
							return 9.08f, 0f, -89.58f;
						case 2:
							return 9.08f, 0f, -89.58f;
						default:
							break;
					}
					break;
			}
			break;
		case 1:
			switch (iLocal_18)
			{
				case 1:
					switch (iParam1)
					{
						case 0:
							return 9.08f, 0f, -0.18f;
						case 1:
							return 9.08f, 0f, -0.18f;
						case 2:
							return 9.08f, 0f, -0.18f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam1)
					{
						case 0:
							return 9.08f, 0f, -0.18f;
						case 1:
							return 9.08f, 0f, -0.18f;
						case 2:
							return 9.08f, 0f, -0.18f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam1)
					{
						case 0:
							return 9.08f, 0f, -179.49f;
						case 1:
							return 9.08f, 0f, -179.49f;
						case 2:
							return 9.08f, 0f, -179.49f;
						default:
							break;
					}
					break;
			}
			break;
		case 2:
			switch (iLocal_18)
			{
				case 2:
					switch (iParam1)
					{
						case 0:
							return 9.08f, 0f, -87.81f;
						case 1:
							return 9.08f, 0f, -87.81f;
						case 2:
							return 9.08f, 0f, -87.81f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam1)
					{
						case 0:
							return 9.08f, 0f, -179.57f;
						case 1:
							return 9.08f, 0f, -179.57f;
						case 2:
							return 9.08f, 0f, -179.57f;
						default:
							break;
					}
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_421()
{
	return -439.4036f, 502.0066f, 99.1947f;
}

float func_422()
{
	return 1.43f;
}

Vector3 func_423()
{
	return -439.43f, 503.22f, 97.54f;
}

Vector3 func_424()
{
	return -107.43f, 0.07f, 1.43f;
}

Vector3 func_426()
{
	return -443.438f, 498.2621f, 98.18685f;
}

void func_465(int iParam0, bool bParam1)
{
	if (Global_1572887.f_10 && __LIB_0__::func_2() == 0)
	{
		return;
	}
	if (__LIB_0__::func_13(128))
	{
		return;
	}
	if (!__LIB_1__::func_950(iParam0))
	{
		return;
	}
	if (__LIB_0__::func_21(iParam0, 32))
	{
		return;
	}
	__LIB_0__::func_24(iParam0, 32);
	__LIB_0__::func_7(&Global_1935630, 8192);
	__LIB_0__::func_15(__LIB_0__::func_38(joaat("DISCOVERED"), joaat("AREAS")), 1);
	switch (__LIB_1__::func_882(iParam0))
	{
		case 0:
		case 2:
		case 11:
			__LIB_0__::func_15(__LIB_0__::func_38(joaat("DISCOVERED"), joaat("LOWLANDS_AREAS")), 1);
			break;
		case 1:
		case 5:
		case 6:
		case 7:
		case 12:
			__LIB_0__::func_15(__LIB_0__::func_38(joaat("DISCOVERED"), joaat("MOUNTAIN_AREAS")), 1);
			Jump @354; //curOff = 263
			__LIB_0__::func_15(__LIB_0__::func_38(joaat("DISCOVERED"), joaat("FOOTHILLS_AREAS")), 1);
			Jump @354; //curOff = 285
			__LIB_0__::func_15(__LIB_0__::func_38(joaat("DISCOVERED"), joaat("PLAINS_AREAS")), 1);
			Jump @354; //curOff = 307
			__LIB_0__::func_15(__LIB_0__::func_38(joaat("DISCOVERED"), joaat("GUAMA_AREAS")), 1);
			Jump @354; //curOff = 329
			__LIB_0__::func_15(__LIB_0__::func_38(joaat("DISCOVERED"), joaat("NEW_AUSTIN_AREAS")), 1);
			switch (iParam0)
			{
				case 0:
					MAP::_0xD8C7162AB2E2AF45(1822876181);
					break;
				case 1:
					MAP::_0xD8C7162AB2E2AF45(1092217275);
					break;
				case 2:
					MAP::_0xD8C7162AB2E2AF45(1855549007);
					MAP::_0xD8C7162AB2E2AF45(1542246539);
					break;
				case 6:
					MAP::_0xD8C7162AB2E2AF45(-237206861);
					break;
				case 7:
					MAP::_0xD8C7162AB2E2AF45(276890716);
					break;
				case 9:
					MAP::_0xD8C7162AB2E2AF45(-353968602);
					break;
				case 10:
					MAP::_0xD8C7162AB2E2AF45(-1354901649);
					MAP::_0xD8C7162AB2E2AF45(-1354901649);
					break;
				case 11:
					MAP::_0xD8C7162AB2E2AF45(-496244122);
					break;
				case 12:
					MAP::_0xD8C7162AB2E2AF45(-678676588);
					break;
				case 15:
					MAP::_0xD8C7162AB2E2AF45(-732274047);
					break;
				case 16:
					MAP::_0xD8C7162AB2E2AF45(-12216052);
					break;
				case 17:
					MAP::_0xD8C7162AB2E2AF45(-1456731677);
					break;
				case 21:
					MAP::_0xD8C7162AB2E2AF45(-2086563810);
					break;
				case 22:
					MAP::_0xD8C7162AB2E2AF45(221661572);
					break;
				case 24:
					MAP::_0xD8C7162AB2E2AF45(222265732);
					break;
				case 25:
					MAP::_0xD8C7162AB2E2AF45(-1484929764);
					break;
				case 26:
					MAP::_0xD8C7162AB2E2AF45(1104975149);
					break;
				case 27:
					MAP::_0xD8C7162AB2E2AF45(235472255);
					break;
				case 28:
					MAP::_0xD8C7162AB2E2AF45(-1337880478);
					break;
				case 29:
					MAP::_0xD8C7162AB2E2AF45(-1813267128);
					break;
				case 30:
					MAP::_0xD8C7162AB2E2AF45(-1941572412);
					break;
				case 31:
					MAP::_0xD8C7162AB2E2AF45(1006072805);
					break;
				case 121:
					MAP::_0xD8C7162AB2E2AF45(929640770);
					break;
				case 122:
					MAP::_0xD8C7162AB2E2AF45(1603579970);
					break;
				case 124:
					MAP::_0xD8C7162AB2E2AF45(-1332669948);
					break;
				case 123:
					MAP::_0xD8C7162AB2E2AF45(-1807212021);
					break;
				case 34:
					MAP::_0xD8C7162AB2E2AF45(-1347759053);
					break;
				case 36:
					MAP::_0xD8C7162AB2E2AF45(-918096609);
					break;
				case 114:
					MAP::_0xD8C7162AB2E2AF45(1728445882);
					break;
				case 37:
					MAP::_0xD8C7162AB2E2AF45(-507075109);
					break;
				case 40:
					MAP::_0xD8C7162AB2E2AF45(462373845);
					break;
				case 42:
					MAP::_0xD8C7162AB2E2AF45(-1727895786);
					break;
				case 43:
					MAP::_0xD8C7162AB2E2AF45(1826504111);
					break;
				case 44:
					MAP::_0xD8C7162AB2E2AF45(1714554710);
					break;
				case 45:
					MAP::_0xD8C7162AB2E2AF45(-91026072);
					break;
				case 54:
					MAP::_0xD8C7162AB2E2AF45(893855320);
					break;
				case 55:
					MAP::_0xD8C7162AB2E2AF45(326709244);
					break;
				case 49:
					MAP::_0xD8C7162AB2E2AF45(653799702);
					break;
				case 62:
					MAP::_0xD8C7162AB2E2AF45(415864829);
					break;
				case 64:
					MAP::_0xD8C7162AB2E2AF45(-1836330842);
					break;
				case 65:
					MAP::_0xD8C7162AB2E2AF45(648073069);
					break;
				case 66:
					MAP::_0xD8C7162AB2E2AF45(770074951);
					break;
				case 68:
					MAP::_0xD8C7162AB2E2AF45(-1276637644);
					break;
				case 71:
					MAP::_0xD8C7162AB2E2AF45(-431488293);
					break;
				case 72:
					MAP::_0xD8C7162AB2E2AF45(-1101810198);
					break;
				case 74:
					MAP::_0xD8C7162AB2E2AF45(-1344767066);
					break;
				case 77:
					MAP::_0xD8C7162AB2E2AF45(1472232821);
					break;
				case 79:
					MAP::_0xD8C7162AB2E2AF45(-1368676121);
					break;
				case 63:
					MAP::_0xD8C7162AB2E2AF45(-33677540);
					break;
				case 80:
					MAP::_0xD8C7162AB2E2AF45(1602161184);
					MAP::_0xD8C7162AB2E2AF45(-443207523);
					MAP::_0xD8C7162AB2E2AF45(-683043834);
					break;
				case 82:
					MAP::_0xD8C7162AB2E2AF45(147256338);
					MAP::_0xD8C7162AB2E2AF45(-134804027);
					MAP::_0xD8C7162AB2E2AF45(2027689141);
					break;
				case 83:
					MAP::_0xD8C7162AB2E2AF45(-161135375);
					break;
				case 85:
					MAP::_0xD8C7162AB2E2AF45(1625008147);
					break;
				case 86:
					MAP::_0xD8C7162AB2E2AF45(121074776);
					break;
				case 87:
					MAP::_0xD8C7162AB2E2AF45(1876184276);
					break;
				case 89:
					MAP::_0xD8C7162AB2E2AF45(458479023);
					break;
				case 91:
					MAP::_0xD8C7162AB2E2AF45(85299473);
					break;
				case 96:
					MAP::_0xD8C7162AB2E2AF45(-1150244084);
					break;
				case 98:
					MAP::_0xD8C7162AB2E2AF45(759314201);
					break;
				case 99:
					MAP::_0xD8C7162AB2E2AF45(2063457042);
					break;
				case 100:
					MAP::_0xD8C7162AB2E2AF45(1877776161);
					break;
				case 102:
					MAP::_0xD8C7162AB2E2AF45(2143316225);
					break;
				case 104:
					MAP::_0xD8C7162AB2E2AF45(-1623232489);
					MAP::_0xD8C7162AB2E2AF45(-1393093729);
					break;
				case 106:
					MAP::_0xD8C7162AB2E2AF45(1354284392);
					break;
				case 107:
					MAP::_0xD8C7162AB2E2AF45(-1430883057);
					break;
				case 109:
					MAP::_0xD8C7162AB2E2AF45(820139809);
					break;
				case 112:
					MAP::_0xD8C7162AB2E2AF45(1561007383);
					MAP::_0xD8C7162AB2E2AF45(-960425936);
					break;
			}
			if (bParam1)
			{
				__LIB_0__::func_24(iParam0, 64);
			}
		}
void func_466(int iParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	iVar0 = __LIB_8__::func_55(iParam0);
	if (iVar0 != 0 && __LIB_7__::func_908(iParam0, 1))
	{
		vVar1 = { __LIB_8__::func_56(iParam0) };
		if (iParam1 < 1)
		{
			iParam1 = __LIB_0__::func_982(iParam0);
		}
		__LIB_8__::func_248(iParam0, iParam1);
		iParam1 = (iParam1 - 1);
		if (__LIB_7__::func_908(iParam0, 67108864))
		{
			MAP::_0xE057FEA9A22EB3EE(iVar0);
		}
		MAP::_0x1392105DA88BBFFB(iVar0, vVar1.x, vVar1.y, 0, iParam1);
		__LIB_8__::func_82(iParam0, 67108864);
	}
}

void func_484(int iParam0, bool bParam1)
{
	func_747(iParam0, 0, bParam1);
	func_747(iParam0, 1, bParam1);
	func_747(iParam0, 2, bParam1);
}

void func_511(var uParam0, float fParam1)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return;
	}
	ANIMSCENE::SET_ANIM_SCENE_RATE(*uParam0, fParam1);
}

char* func_514(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return "PBL_BRKOUT_F_KNEEL";
				case 3:
					return "PBL_BRKOUT_BL_KNEEL";
				case 2:
					return "PBL_BRKOUT_BR_KNEEL";
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return "PBL_BRKOUT_F_STAND_01";
				case 3:
					return "PBL_BRKOUT_BL_STAND_01";
				case 2:
					return "PBL_BRKOUT_BR_STAND_01";
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return "PBL_BRKOUT_F_STAND_02";
				case 3:
					return "PBL_BRKOUT_BL_STAND_02";
				case 2:
					return "PBL_BRKOUT_BR_STAND_02";
				default:
					break;
			}
			break;
	}
	return "";
}

bool func_547(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_796(iParam0, 0, 1) };
		iVar5 = 1728382685; /* GXTEntry: "Right" */
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_797((386 + iVar28), 1);
			if (func_798(iParam0, &Var0, iVar5, 0))
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

int func_561(int iParam0, int* iParam1, float fParam2, var uParam3, int iParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_812(iParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
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

char* func_577()
{
	return "HMSTD_LOITER";
}

void func_579()
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (iVar1 == 0)
		{
		}
		else if (!__LIB_10__::func_282(func_824(iVar1)))
		{
			if (__LIB_10__::func_282(1024))
			{
				if (__LIB_10__::func_282(func_825(iVar1)))
				{
					PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), iLocal_1768[iVar1], 3, 2, 1);
					PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), iLocal_1768[iVar1], 4, 2, 1);
				}
				else
				{
					func_279(iVar1, 0, 0);
				}
				func_141(func_824(iVar1));
			}
		}
		else if (!__LIB_10__::func_282(1024))
		{
			if (__LIB_10__::func_282(func_825(iVar1)))
			{
				PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), iLocal_1768[iVar1], 3, 2, 0);
				iVar0 = 0;
				if (DECORATOR::DECOR_EXIST_ON(iLocal_1768[iVar1], "interactNeg"))
				{
					iVar0 = DECORATOR::DECOR_GET_INT(iLocal_1768[iVar1], "interactNeg");
				}
				if (iVar0 >= 3)
				{
					PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), iLocal_1768[iVar1], 4, 2, 1);
				}
				else
				{
					PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), iLocal_1768[iVar1], 4, 2, 0);
				}
			}
			else
			{
				func_589(iVar1);
			}
			func_142(func_824(iVar1));
		}
		iVar1++;
	}
}

void func_580(int iParam0, bool bParam1)
{
	if (!__LIB_10__::func_282(func_825(iParam0)))
	{
		if (__LIB_10__::func_282(func_587(iParam0)))
		{
			if (func_584(iParam0, bParam1))
			{
				func_827(iLocal_1768[iParam0], func_826(iParam0), func_825(iParam0), &(Local_40[iParam0 /*21*/]), &(Local_125[iParam0 /*52*/]), 1, joaat("AVOID"));
			}
		}
	}
}

bool func_584(int iParam0, bool bParam1)
{
	if (!__LIB_2__::func_227(0, 1, iLocal_1768[iParam0], 1))
	{
		return false;
	}
	if (AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_1768[iParam0]))
	{
		return false;
	}
	if (__LIB_1__::func_322(func_585(iParam0, bParam1)))
	{
		return false;
	}
	if (__LIB_1__::func_322(func_586(iParam0, bParam1)))
	{
		return false;
	}
	return true;
}

char* func_585(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iLocal_18)
			{
				case 1:
					return "HMSTD_S1_POS1";
				case 2:
					return "HMSTD_S1_POS2";
				case 3:
					if (bParam1)
					{
						return "HMSTD_S1_POS3A";
					}
					else
					{
						return "HMSTD_S1_POS3B";
					}
					break;
			}
			break;
		case 2:
			switch (iLocal_18)
			{
				case 1:
					return "HMSTD_S2_POS1";
				case 2:
					return "HMSTD_S2_POS2";
				case 3:
					if (bParam1)
					{
						return "HMSTD_S2_POS3A";
					}
					else
					{
						return "HMSTD_S2_POS3B";
					}
					break;
			}
			break;
	}
	return "";
}

char* func_586(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iLocal_18)
			{
				case 1:
					return "HMSTD_S1_NEG1";
				case 2:
					return "HMSTD_S1_NEG2";
				case 3:
					if (bParam1)
					{
						return "HMSTD_S1_NEG3A";
					}
					else
					{
						return "HMSTD_S1_NEG3B";
					}
					break;
			}
			break;
		case 2:
			switch (iLocal_18)
			{
				case 1:
					return "HMSTD_S2_NEG1";
				case 2:
					return "HMSTD_S2_NEG2";
				case 3:
					if (bParam1)
					{
						return "HMSTD_S2_NEG3A";
					}
					else
					{
						return "HMSTD_S2_NEG3B";
					}
					break;
			}
			break;
	}
	return "";
}

int func_587(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 524288;
		case 2:
			return 1048576;
		default:
			break;
	}
	return 0;
}

void func_589(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_828(iParam0, 0, __LIB_2__::func_460(7));
	Local_125[iParam0 /*52*/][0 /*17*/].f_14 = 0;
	__LIB_1__::func_491(&(Local_125[iParam0 /*52*/][0 /*17*/]), 1);
	func_747(iParam0, 0, !__LIB_8__::func_332(8388608));
	func_829(iParam0, 0, 0);
	func_828(iParam0, 1, __LIB_2__::func_460(10));
	func_747(iParam0, 1, 1);
	func_829(iParam0, 1, 0);
	func_828(iParam0, 2, __LIB_2__::func_460(12));
	func_829(iParam0, 2, 1);
	func_830(iParam0);
}

void func_590(var uParam0)
{
	uParam0->f_135 = "";
	uParam0->f_5 = "";
	__LIB_13__::func_188(8192);
}

char* func_591()
{
	switch (iLocal_18)
	{
		case 1:
			return "HMSTD_IG1DADb";
		case 2:
			if (!func_592(&iLocal_1794))
			{
				return "HOME_ATAKILO";
			}
			else if (__LIB_4__::func_241(8))
			{
				return "HOME_BYE_2B";
			}
			else
			{
				return "HOME_BYE_2A";
			}
			break;
		case 3:
			if (__LIB_7__::func_908(Local_1389.f_136, 128))
			{
				return "HOME_BYE_3B";
			}
			else if (__LIB_7__::func_908(Local_1389.f_136, 256))
			{
				return "HOME_BYE_3AY";
			}
			else
			{
				return "HOME_BYE_3AN";
			}
			break;
		case 4:
			return "HOME_BYE_4";
	}
	return "";
}

bool func_592(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (!ENTITY::IS_ENTITY_DEAD((*iParam0)[iVar0]))
		{
			if (ENTITY::_0x61914209C36EFDDB((*iParam0)[iVar0]) == 0)
			{
				if (!PED::IS_PED_FLEEING((*iParam0)[iVar0]))
				{
					return false;
				}
			}
		}
		iVar0++;
	}
	return true;
}

char* func_593()
{
	switch (iLocal_18)
	{
		case 1:
			return "HMSTD_1_NEG_ILO";
		case 2:
			return "HOME2_NEG_ILO";
		case 3:
			return "HMSTD_S3_ILOANT";
		case 4:
			return "HMSTD_4_NEG_ILO";
	}
	return "";
}

bool func_594()
{
	if (__LIB_4__::func_241(2))
	{
		return true;
	}
	switch (iLocal_18)
	{
		case 3:
			if (__LIB_7__::func_908(Local_1389.f_136, 2))
			{
				return true;
			}
			break;
	}
	return false;
}

char* func_596()
{
	switch (iLocal_18)
	{
		case 1:
			return "HMSTD_S1_AMB1";
		case 2:
			return "HMSTD_S1_AMB2";
		case 3:
			if (!__LIB_4__::func_241(8))
			{
				if (!__LIB_4__::func_241(8192))
				{
					if (!__LIB_4__::func_241(1024) && Global_36.f_2 < 100f)
					{
						func_5(1024);
						return "HMSTD_S1_DIR";
					}
					else
					{
						return "HMSTD_S1_AMB3A";
					}
				}
				else
				{
					return "HMSTD_S1_AMB3C";
				}
			}
			else
			{
				return "HMSTD_S1_AMB3B";
			}
			break;
	}
	return "HMSTD_S1_AMB1";
}

char* func_597()
{
	switch (iLocal_18)
	{
		case 1:
			return "HMSTD_S2_AMB1";
		case 2:
			return "HMSTD_S2_AMB2";
		case 3:
			if (!__LIB_4__::func_241(8))
			{
				if (!__LIB_4__::func_241(8192))
				{
					if (!__LIB_4__::func_241(1024) && Global_36.f_2 < 100f)
					{
						func_5(1024);
						return "HMSTD_S2_DIR";
					}
					else
					{
						return "HMSTD_S2_AMB3A";
					}
				}
				else
				{
					return "HMSTD_S2_AMB3C";
				}
			}
			else
			{
				return "HMSTD_S2_AMB3B";
			}
			break;
	}
	return "HMSTD_S2_AMB1";
}

void func_598()
{
	int iVar0;
	if (!__LIB_0__::func_30(1986792065))
	{
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1855))
	{
		iLocal_1855 = __LIB_3__::func_659(1986792065, 1, 0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1855))
	{
	}
	iVar0 = OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(1986792065);
	if (iVar0 == 0 || iVar0 == -1)
	{
		if (func_833(iLocal_1855))
		{
			__LIB_3__::func_123(1986792065, 1);
		}
	}
	else if (__LIB_2__::func_117(64))
	{
		__LIB_4__::func_389(1986792065, 0, 1);
	}
}

bool func_600(int iParam0, int iParam1, int iParam2, float fParam3)
{
	if (__LIB_7__::func_924(iParam2, 2))
	{
		__LIB_8__::func_85(iParam0, 4);
		return true;
	}
	if (__LIB_3__::func_332(iParam1->f_4, 1) < fParam3)
	{
		__LIB_8__::func_85(iParam0, 4);
		return true;
	}
	return false;
}

void func_601(float fParam0, float fParam1, float fParam2, bool bParam3)
{
	float fVar0;
	if (__LIB_4__::func_241(524288))
	{
		return;
	}
	if (__LIB_4__::func_241(131072))
	{
		fVar0 = fParam0;
	}
	else if (__LIB_2__::func_117(16))
	{
		fVar0 = fParam1;
	}
	else
	{
		fVar0 = fParam2;
	}
	if (func_837(fVar0, bParam3))
	{
		if (func_838(64))
		{
			__LIB_2__::func_753(64, 0, 1, 0, 0);
			func_5(131072);
			__LIB_1__::func_148(&(vLocal_1578[1 /*3*/]));
		}
		else if (func_838(65))
		{
			__LIB_2__::func_753(65, 0, 1, 0, 0);
			func_5(131072);
			__LIB_1__::func_148(&(vLocal_1578[1 /*3*/]));
		}
		else if (func_838(66))
		{
			__LIB_2__::func_753(66, 0, 1, 0, 0);
			func_5(131072);
			__LIB_1__::func_148(&(vLocal_1578[1 /*3*/]));
		}
		else
		{
			func_5(524288);
		}
	}
}

int func_602(int iParam0, int iParam1)
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	if (ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		return 0;
	}
	bVar0 = ENTITY::HAS_ANIM_EVENT_FIRED(*iParam0, 1824589780);
	func_839(iParam0, iParam1);
	switch (iLocal_27)
	{
		case 1:
			if (__LIB_7__::func_990(&(Local_1618[2 /*7*/])))
			{
				if (!__LIB_2__::func_763(iParam1, 0))
				{
					__LIB_8__::func_123(iParam1, 1, 1);
				}
				iLocal_1643 = func_840();
				if (iLocal_1643 < 0)
				{
					__LIB_8__::func_331(10);
					iLocal_28 = 11;
					return 0;
				}
				__LIB_13__::func_187(131072);
				func_842(&vVar1, &vVar4, iLocal_1643);
				__LIB_8__::func_15(&(Local_1618[2 /*7*/]), vVar1, vVar4);
				if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1759[7]))
				{
					iLocal_1759[7] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vVar1, vVar4, 2f, 2f, 5f, "EA CAS - volHammer");
					POPULATION::_0xB56D41A694E42E86(iLocal_1759[7], 524288, 0, 0, -1, -1, 2);
				}
				__LIB_8__::func_147(&(Local_1618[2 /*7*/]), *iParam0, "Son", 1);
				__LIB_8__::func_148(&(Local_1618[2 /*7*/]), Local_386.f_690[2 /*12*/].f_8, "HAMMER");
				__LIB_8__::func_148(&(Local_1618[2 /*7*/]), Local_386.f_690[4 /*12*/].f_8, "plank01");
				__LIB_8__::func_148(&(Local_1618[2 /*7*/]), Local_386.f_690[5 /*12*/].f_8, "plank02");
				__LIB_8__::func_148(&(Local_1618[2 /*7*/]), Local_386.f_690[6 /*12*/].f_8, "plank04");
				__LIB_8__::func_148(&(Local_1618[2 /*7*/]), Local_386.f_690[7 /*12*/].f_8, "plank03");
				__LIB_8__::func_148(&(Local_1618[2 /*7*/]), Local_386.f_690[8 /*12*/].f_8, "plank05");
				__LIB_8__::func_148(&(Local_1618[2 /*7*/]), Local_386.f_690[9 /*12*/].f_8, "nail01");
				__LIB_8__::func_148(&(Local_1618[2 /*7*/]), Local_386.f_690[10 /*12*/].f_8, "nail02");
				__LIB_8__::func_148(&(Local_1618[2 /*7*/]), Local_386.f_690[11 /*12*/].f_8, "nail03");
				__LIB_8__::func_148(&(Local_1618[2 /*7*/]), Local_386.f_690[12 /*12*/].f_8, "nail04");
				func_843();
			}
			break;
		case 2:
			if (!__LIB_7__::func_963(&(Local_1618[2 /*7*/])))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(*iParam0, false, true);
				__LIB_8__::func_16(&(Local_1618[2 /*7*/]));
				iLocal_29 = 0;
				func_844(0);
			}
			break;
		case 3:
			if (!ENTITY::_IS_ENTITY_FROZEN(Local_386.f_690[4 /*12*/].f_8))
			{
				__LIB_1__::func_683(&(Global_40.f_9096[Local_1389.f_136 /*12*/].f_6), func_198(iLocal_1643, 0));
				ENTITY::FREEZE_ENTITY_POSITION(Local_386.f_690[4 /*12*/].f_8, true);
			}
			break;
		case 5:
			iLocal_29 = 1;
			func_844(1);
			if (!ENTITY::_IS_ENTITY_FROZEN(Local_386.f_690[4 /*12*/].f_8))
			{
				__LIB_1__::func_683(&(Global_40.f_9096[Local_1389.f_136 /*12*/].f_6), func_198(iLocal_1643, 0));
				ENTITY::FREEZE_ENTITY_POSITION(Local_386.f_690[4 /*12*/].f_8, true);
			}
			break;
		case 6:
			if (!ENTITY::_IS_ENTITY_FROZEN(Local_386.f_690[5 /*12*/].f_8))
			{
				__LIB_1__::func_683(&(Global_40.f_9096[Local_1389.f_136 /*12*/].f_6), func_198(iLocal_1643, 1));
				ENTITY::FREEZE_ENTITY_POSITION(Local_386.f_690[5 /*12*/].f_8, true);
			}
			break;
		case 8:
			iLocal_29 = 2;
			func_844(2);
			if (!ENTITY::_IS_ENTITY_FROZEN(Local_386.f_690[5 /*12*/].f_8))
			{
				__LIB_1__::func_683(&(Global_40.f_9096[Local_1389.f_136 /*12*/].f_6), func_198(iLocal_1643, 1));
				ENTITY::FREEZE_ENTITY_POSITION(Local_386.f_690[5 /*12*/].f_8, true);
			}
			break;
		case 9:
			if (!ENTITY::_IS_ENTITY_FROZEN(Local_386.f_690[6 /*12*/].f_8))
			{
				__LIB_1__::func_683(&(Global_40.f_9096[Local_1389.f_136 /*12*/].f_6), func_198(iLocal_1643, 2));
				ENTITY::FREEZE_ENTITY_POSITION(Local_386.f_690[6 /*12*/].f_8, true);
			}
			break;
		case 10:
			if (!ENTITY::_IS_ENTITY_FROZEN(Local_386.f_690[6 /*12*/].f_8))
			{
				__LIB_1__::func_683(&(Global_40.f_9096[Local_1389.f_136 /*12*/].f_6), func_198(iLocal_1643, 2));
				ENTITY::FREEZE_ENTITY_POSITION(Local_386.f_690[6 /*12*/].f_8, true);
			}
			if (iLocal_1643 < 0 || __LIB_2__::func_598(*iParam0, Local_1618[2 /*7*/], "Son", 0, 0, 1, 0))
			{
				__LIB_1__::func_951(&(Local_386.f_690[2 /*12*/].f_8));
				__LIB_1__::func_951(&(Local_386.f_690[9 /*12*/].f_8));
				__LIB_1__::func_951(&(Local_386.f_690[10 /*12*/].f_8));
				__LIB_1__::func_951(&(Local_386.f_690[11 /*12*/].f_8));
				__LIB_1__::func_951(&(Local_386.f_690[12 /*12*/].f_8));
				if (__LIB_2__::func_763(iParam1, 0))
				{
					__LIB_2__::func_753(iParam1, 0, 1, 0, 0);
				}
				__LIB_0__::func_172(iLocal_1759[7]);
				func_843();
				__LIB_13__::func_188(131072);
			}
			break;
		case 0:
			__LIB_4__::func_279(iParam0, 0, 0, 1, 0, 0, 0, 1);
			if (bVar0)
			{
				func_589(func_846(iParam1));
			}
			break;
	}
	if (iLocal_27 < 10)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(func_847(iLocal_28)) && !__LIB_8__::func_348(&(Local_1618[2 /*7*/]), func_847(iLocal_28)))
		{
			__LIB_8__::func_151(&(Local_1618[2 /*7*/]), func_847(iLocal_28));
		}
		else if (bVar0)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(func_847(iLocal_28)))
			{
				__LIB_8__::func_575(&(Local_1618[2 /*7*/]), 0, 1);
			}
			func_843();
		}
	}
	func_848(iParam0, iParam1);
	return 0;
}

int func_604()
{
	return joaat("WORLD_HUMAN_SIT_GROUND");
}

int func_605()
{
	return joaat("WORLD_HUMAN_SIT_GROUND_MALE_C");
}

int func_608()
{
	return joaat("WORLD_HUMAN_SMOKE_MALE_D");
}

Vector3 func_609()
{
	return -425.889f, 499.089f, 97.164f;
}

Vector3 func_610()
{
	return 0f, 0f, -119.391f;
}

int func_612()
{
	return joaat("WORLD_HUMAN_HAMMER_WALL");
}

int func_613()
{
	return joaat("WORLD_HUMAN_HAMMER_KNEEL");
}

void func_614(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_828(iParam0, 0, __LIB_2__::func_460(7));
	Local_125[iParam0 /*52*/][0 /*17*/].f_14 = 0;
	__LIB_1__::func_491(&(Local_125[iParam0 /*52*/][0 /*17*/]), 1);
	func_747(iParam0, 0, !__LIB_8__::func_332(8388608));
	func_829(iParam0, 0, 0);
	func_828(iParam0, 1, __LIB_2__::func_460(10));
	func_747(iParam0, 1, 0);
	func_829(iParam0, 1, 0);
	func_828(iParam0, 2, __LIB_2__::func_460(12));
	func_829(iParam0, 2, 1);
	func_830(iParam0);
}

void func_615(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		__LIB_13__::func_187(67108864);
		func_53(33554432, bParam1);
		func_849(0, 20f);
	}
	else
	{
		__LIB_13__::func_188(67108864);
		__LIB_13__::func_188(33554432);
		func_849(0, -1082130432 /* Float: -1f */);
	}
}

void func_616(bool bParam0)
{
	if (bParam0 != __LIB_10__::func_282(1024))
	{
		__LIB_7__::func_898(&Local_1389, &(Local_1389.f_28));
		__LIB_0__::func_37(&(vLocal_1578[9 /*3*/]));
	}
	func_12(1024, bParam0);
}

void func_632(int iParam0, int iParam1)
{
	bool bVar0;
	if (!__LIB_0__::func_625(iParam0))
	{
		return;
	}
	bVar0 = __LIB_7__::func_908(iParam0, iParam1);
	func_866(iParam0, iParam1, !bVar0);
}

char* func_637()
{
	return "WORLD_HUMAN_SIT_GROUND_MALE_C";
}

void func_639(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_828(iParam0, 0, __LIB_2__::func_460(8));
	Local_125[iParam0 /*52*/][0 /*17*/].f_14 = 0;
	__LIB_1__::func_491(&(Local_125[iParam0 /*52*/][0 /*17*/]), 1);
	func_747(iParam0, 0, 1);
	func_829(iParam0, 0, 0);
	func_828(iParam0, 1, __LIB_2__::func_460(10));
	func_747(iParam0, 1, 1);
	func_829(iParam0, 1, 0);
	func_828(iParam0, 2, __LIB_2__::func_460(12));
	func_829(iParam0, 2, 1);
	func_830(iParam0);
}

void func_640()
{
	__LIB_2__::func_526(&(Local_125[1 /*52*/]), 0, 0);
	__LIB_2__::func_526(&(Local_125[2 /*52*/]), 0, 0);
	__LIB_2__::func_526(&(Local_125[0 /*52*/]), 0, 0);
}

void func_641(int iParam0)
{
	int iVar0;
	if (__LIB_1__::func_205(Global_35, Global_1392194[Local_1389.f_136 /*10*/].f_6, 1, 0))
	{
		if (!__LIB_2__::func_763(Local_1389.f_138, 0))
		{
			__LIB_8__::func_123(Local_1389.f_138, 1, 1);
		}
		if (!__LIB_10__::func_282(1))
		{
			func_141(1);
			PED::_0xAAB050DA48B57978(*iParam0, "Default_Angry", Global_35, -1, 4);
			if (iLocal_1641 == 3)
			{
				__LIB_13__::func_187(524288);
			}
		}
		if (__LIB_0__::func_75(&(vLocal_1578[1 /*3*/])))
		{
			__LIB_0__::func_37(&(vLocal_1578[1 /*3*/]));
		}
		if (__LIB_2__::func_227(-3.5f, 1, 0, 0) && !__LIB_0__::func_75(&(vLocal_1578[2 /*3*/])))
		{
			__LIB_1__::func_148(&(vLocal_1578[2 /*3*/]));
		}
		if (__LIB_1__::func_313(&(vLocal_1578[2 /*3*/]), 10f))
		{
			__LIB_8__::func_336(&(Local_1389.f_35), func_868(), *iParam0, Global_35, 0, 0, 1, 1);
			TASK::CLEAR_PED_TASKS(*iParam0, true, false);
			switch (iLocal_1641)
			{
				case 1:
					TASK::OPEN_SEQUENCE_TASK(&iLocal_1818);
					TASK::TASK_CONFRONT(0, Global_35, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 5000, -1f, -1f, -1f);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_1818);
					TASK::_TASK_PERFORM_SEQUENCE_2(*iParam0, iLocal_1818, 2f, 7.5f);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_1818);
					Local_336 = 0;
					break;
				case 2:
					iVar0 = __LIB_3__::func_430(268435456, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
					WEAPON::_GIVE_WEAPON_TO_PED_2(*iParam0, iVar0, 99, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
					WEAPON::SET_CURRENT_PED_WEAPON(*iParam0, iVar0, false, 0, false, false);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_1818);
					TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
					TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 1);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_1818);
					TASK::TASK_PERFORM_SEQUENCE(*iParam0, iLocal_1818);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_1818);
					Local_336 = 0;
					break;
				case 3:
					__LIB_13__::func_187(524288);
					break;
			}
			iLocal_1641++;
		}
	}
	else
	{
		if (__LIB_0__::func_75(&(vLocal_1578[2 /*3*/])))
		{
			__LIB_0__::func_37(&(vLocal_1578[2 /*3*/]));
		}
		if (__LIB_10__::func_282(1))
		{
			if (!__LIB_0__::func_75(&(vLocal_1578[1 /*3*/])))
			{
				__LIB_1__::func_148(&(vLocal_1578[1 /*3*/]));
			}
			if (__LIB_1__::func_313(&(vLocal_1578[1 /*3*/]), 15f))
			{
				if (iLocal_1641 == 3)
				{
					TASK::CLEAR_PED_TASKS(*iParam0, true, false);
					PED::_0x935CF6E42BAF7F4D(*iParam0);
					__LIB_8__::func_124(Local_1389.f_138, 1);
				}
				func_142(1);
			}
		}
	}
	if (__LIB_10__::func_282(1))
	{
		if (!__LIB_0__::func_163(*iParam0, 242628503))
		{
			func_869(&Local_336, 0);
		}
	}
}

void func_643(int iParam0, int iParam1, int iParam2, vector3 vParam3, int iParam6, int iParam7, int iParam8, int iParam9, var uParam10, int iParam11)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	vector3 vVar6;
	vector3 vVar9;
	if (iParam0 <= -1)
	{
		return;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam2))
	{
		return;
	}
	vVar0 = { 0f, 0f, 0f };
	iVar3 = __LIB_1__::func_149(1);
	iVar4 = 0;
	while (iVar4 < iVar3)
	{
		iVar5 = __LIB_3__::func_821(iVar4);
		if (!ENTITY::IS_ENTITY_DEAD(iVar5))
		{
			vVar0 = { vVar0 + ENTITY::GET_ENTITY_COORDS(iVar5, true, false) };
		}
		iVar4++;
	}
	vVar0 = { vVar0 / FtoV(BUILTIN::TO_FLOAT(iVar3)) };
	vVar6 = { vVar0 - VOLUME::_GET_VOLUME_COORDS(iParam2) };
	vVar9 = { __LIB_3__::func_812(iParam2, vVar6, 1065353216 /* Float: 1f */, 100) };
	func_874(iParam0, iParam1, iParam9, vVar9, vParam3, iParam6, iParam7, iParam8, uParam10, -1, 1, iParam11);
}

void func_645(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		__LIB_1__::func_538(0);
		if (!__LIB_4__::func_241(2097152))
		{
			if (iLocal_18 == 1 && !__LIB_4__::func_241(8))
			{
				func_7(2097152, __LIB_8__::func_342(Global_35, &iLocal_1788, func_877(), iLocal_1759[4], 10f, 0, 1, 129, 0, 0, 1071644672 /* Float: 1.75f */));
			}
			else
			{
				func_7(2097152, __LIB_8__::func_342(Global_35, &iLocal_1788, func_877(), 0, 10f, 0, 0, 129, 0, 0, 1071644672 /* Float: 1.75f */));
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_1788))
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_1788, 136, bParam1);
				POPULATION::_0xF74E134F40192884(iLocal_1788, 2);
			}
		}
	}
	else
	{
		func_101(0);
	}
}

bool func_647(int iParam0)
{
	int iVar0;
	float fVar1;
	if (__LIB_0__::func_71(Global_35))
	{
		iVar0 = __LIB_3__::func_112(Global_35, *iParam0, 0.93f);
		if (iVar0 != 0)
		{
			fVar1 = ENTITY::GET_ENTITY_SPEED(Global_35);
			iVar0 = __LIB_3__::func_112(Global_35, *iParam0, 1060437492 /* Float: 0.707f */);
			if (fVar1 > 6.5f || iVar0 == 1)
			{
				return false;
			}
		}
	}
	return true;
}

int func_648(int iParam0, var uParam1, int iParam2, int iParam3, float fParam4, bool bParam5, float fParam6, float fParam7)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bVar0 = false;
	bVar1 = false;
	iVar2 = 0;
	while (iVar2 < *iParam0)
	{
		if (__LIB_3__::func_892(iVar2, bParam5))
		{
			if (__LIB_18__::func_100((*iParam0)[iVar2], uParam1, iParam2, &bVar1, iParam3, fParam4, fParam6, 1, fParam7, 1))
			{
				return 1;
			}
			else if (bVar1)
			{
				bVar0 = true;
			}
		}
		iVar2++;
	}
	if (!bVar0)
	{
		*iParam2 = 0f;
	}
	return 0;
}

int func_649(int iParam0, float fParam1, var uParam2, float fParam3)
{
	if (__LIB_1__::func_348(Global_35, iParam0) < fParam1)
	{
		if (!__LIB_0__::func_75(uParam2))
		{
			__LIB_1__::func_283(uParam2, 0);
		}
		else
		{
			if (__LIB_0__::func_33(uParam2))
			{
				__LIB_2__::func_112(uParam2);
			}
			if (__LIB_0__::func_265(uParam2) > fParam3 && !ENTITY::IS_ENTITY_OCCLUDED(iParam0))
			{
				return 1;
			}
		}
	}
	else if (__LIB_0__::func_75(uParam2) && !__LIB_0__::func_33(uParam2))
	{
		__LIB_2__::func_113(uParam2);
	}
	return 0;
}

void func_650()
{
	if (!__LIB_10__::func_282(32))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_1618[0 /*7*/], false))
		{
			if (ANIMSCENE::_0x1F0E401031E20146(Local_1618[0 /*7*/], "PBL_quick_exit"))
			{
				__LIB_8__::func_336(&(Local_1389.f_35), "HMSTD_IG1DAD2", iLocal_1768[0], Global_35, 0, 0, 1, 1);
				func_141(32);
			}
		}
	}
}

bool func_651(int iParam0, int iParam1, int iParam2)
{
	if (func_652(iParam0, iParam1, iParam2))
	{
		return true;
	}
	if (!ENTITY::IS_ENTITY_ON_SCREEN(*iParam0))
	{
		return true;
	}
	if (__LIB_2__::func_118(*iParam0, 1, 1) > 20f)
	{
		return true;
	}
	if (__LIB_1__::func_205(Global_35, iLocal_1759[2], 1, 0))
	{
		return true;
	}
	return false;
}

bool func_652(int iParam0, int iParam1, int iParam2)
{
	if (__LIB_8__::func_332(4096))
	{
		return true;
	}
	if (__LIB_8__::func_88(&Local_1549, 1))
	{
		__LIB_13__::func_187(4096);
		func_5(1024);
		__LIB_3__::func_732(0);
		return true;
	}
	if (!TASK::GET_IS_TASK_ACTIVE(*iParam0, 3))
	{
		__LIB_13__::func_187(4096);
		func_5(1024);
		__LIB_3__::func_732(0);
		return true;
	}
	if (!TASK::GET_IS_TASK_ACTIVE(*iParam1, 3))
	{
		__LIB_13__::func_187(4096);
		__LIB_3__::func_732(0);
		return true;
	}
	if (!TASK::GET_IS_TASK_ACTIVE(*iParam2, 3))
	{
		__LIB_13__::func_187(4096);
		__LIB_3__::func_732(0);
		return true;
	}
	return false;
}

void func_653(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_828(iParam0, 0, __LIB_2__::func_460(7));
	Local_125[iParam0 /*52*/][0 /*17*/].f_14 = 0;
	__LIB_1__::func_491(&(Local_125[iParam0 /*52*/][0 /*17*/]), 1);
	func_747(iParam0, 0, 1);
	func_829(iParam0, 0, 0);
	func_828(iParam0, 1, __LIB_2__::func_460(10));
	func_747(iParam0, 1, 0);
	func_829(iParam0, 1, 0);
	func_828(iParam0, 2, __LIB_2__::func_460(12));
	func_829(iParam0, 2, 1);
	func_830(iParam0);
}

void func_655(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_828(iParam0, 0, __LIB_2__::func_460(8));
	Local_125[iParam0 /*52*/][0 /*17*/].f_14 = 0;
	__LIB_1__::func_491(&(Local_125[iParam0 /*52*/][0 /*17*/]), 1);
	func_747(iParam0, 0, 1);
	func_829(iParam0, 0, 0);
	func_828(iParam0, 1, __LIB_2__::func_460(10));
	func_747(iParam0, 1, 1);
	func_829(iParam0, 1, 0);
	func_828(iParam0, 2, __LIB_2__::func_460(12));
	func_829(iParam0, 2, 1);
	func_830(iParam0);
}

void func_656(int iParam0, int iParam1)
{
	if (__LIB_2__::func_118(*iParam0, 1, 1) < 25f)
	{
		if (((((!__LIB_8__::func_332(64) && !__LIB_13__::func_212(PLAYER::PLAYER_ID(), iParam0)) && !__LIB_13__::func_212(PLAYER::PLAYER_ID(), iParam1)) && PED::IS_PED_USING_ANY_SCENARIO(*iParam0)) && PED::IS_PED_USING_ANY_SCENARIO(*iParam1)) && __LIB_0__::func_665(*iParam0, *iParam1, 1, 1) < 10f)
		{
			__LIB_8__::func_336(&(Local_1389.f_35), "HMSTD_SONS_FIRE", *iParam0, *iParam1, 0, 0, 1, 0);
			__LIB_13__::func_187(64);
			__LIB_13__::func_188(16384);
			func_279(1, 1, 0);
			func_589(1);
			func_279(2, 1, 0);
			func_589(2);
		}
	}
	else if (__LIB_1__::func_322("HMSTD_SONS_FIRE"))
	{
		__LIB_8__::func_111("HMSTD_SONS_FIRE", 1);
	}
	if (__LIB_8__::func_88(&Local_1549, 1))
	{
		if (__LIB_1__::func_322("HMSTD_SONS_FIRE"))
		{
			__LIB_8__::func_111("HMSTD_SONS_FIRE", 0);
		}
	}
}

bool func_657(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	switch (iLocal_26)
	{
		case 0:
			if (ENTITY::IS_ENTITY_DEAD(*iParam0))
			{
				__LIB_3__::func_608(*iParam0);
				iLocal_26 = 1;
			}
			break;
		case 1:
			iVar0 = 0;
			while (iVar0 < iLocal_1794)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_1794[iVar0]))
				{
					iVar2 = iLocal_1794[iVar0];
				}
				else
				{
					iVar0++;
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(*iParam1))
			{
				__LIB_1__::func_148(&(vLocal_1578[3 /*3*/]));
				if (!ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					TASK::_TASK_SMART_FLEE_STYLE_PED(*iParam1, iVar2, 4, 0, 1000f, -1, 0);
				}
				else
				{
					TASK::_TASK_SMART_FLEE_STYLE_COORD(*iParam1, Local_386.f_4, 4, 0, 1000f, -1, 0);
				}
				PED::SET_PED_CONFIG_FLAG(*iParam1, 277, false);
				__LIB_8__::func_336(&(Local_1389.f_35), "HOME_DEAD_1", *iParam1, Global_35, 0, 0, 1, 1);
			}
			else
			{
				__LIB_0__::func_268(&(vLocal_1578[3 /*3*/]), 3f);
			}
			iLocal_26 = 2;
			break;
		case 2:
			if (!__LIB_0__::func_75(&(vLocal_1578[3 /*3*/])) && __LIB_2__::func_227(0, 1, 0, 0))
			{
				__LIB_1__::func_148(&(vLocal_1578[3 /*3*/]));
			}
			if (__LIB_1__::func_313(&(vLocal_1578[3 /*3*/]), 3f))
			{
				iVar0 = 0;
				while (iVar0 < iLocal_1794)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_1794[iVar0]))
					{
						iVar2 = iLocal_1794[iVar0];
					}
					else
					{
						iVar0++;
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(*iParam2))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar2))
					{
						TASK::_TASK_SMART_FLEE_STYLE_PED(*iParam2, iVar2, 4, 0, 1000f, -1, 0);
					}
					else
					{
						TASK::_TASK_SMART_FLEE_STYLE_COORD(*iParam2, Local_386.f_4, 4, 0, 1000f, -1, 0);
					}
					PED::SET_PED_CONFIG_FLAG(*iParam2, 277, false);
					__LIB_8__::func_336(&(Local_1389.f_35), "HOME_DEAD_2", *iParam1, Global_35, 0, 0, 1, 1);
				}
				iLocal_26 = 3;
			}
			break;
		case 3:
			if (__LIB_2__::func_65(Global_35, 0))
			{
				iLocal_26 = 8;
			}
			else
			{
				if (__LIB_2__::func_227(0, 1, 0, 0) && !func_592(&iLocal_1794))
				{
					iVar4 = func_672();
					if (!ENTITY::IS_ENTITY_DEAD(iVar4))
					{
						__LIB_8__::func_336(&(Local_1389.f_35), "HOME_ATAK03", iVar4, Global_35, 0, 0, 1, 1);
					}
					__LIB_1__::func_148(&(vLocal_1578[3 /*3*/]));
					iLocal_26 = 4;
				}
				Jump @1424; //curOff = 564
				if (__LIB_2__::func_65(Global_35, 0))
				{
					iLocal_26 = 8;
				}
				else
				{
					if (__LIB_2__::func_227(0, 1, 0, 0) && __LIB_1__::func_313(&(vLocal_1578[3 /*3*/]), 3f))
					{
						iVar0 = 0;
						while (iVar0 < Local_386.f_1)
						{
							if (ENTITY::IS_ENTITY_DEAD(iLocal_1794[iVar0]))
							{
							}
							else
							{
								iVar1 = iVar0;
								fVar5 = (0.25f * BUILTIN::TO_FLOAT(iVar0));
								TASK::OPEN_SEQUENCE_TASK(&iLocal_1818);
								if (!ENTITY::IS_ENTITY_DEAD(Local_386.f_369[iVar0 /*32*/].f_11))
								{
									TASK::TASK_GO_TO_ENTITY(0, Local_386.f_369[iVar0 /*32*/].f_11, -1, 3f, 2f, 0f, 1);
									TASK::TASK_MOUNT_ANIMAL(0, Local_386.f_369[iVar0 /*32*/].f_11, -1, -1, 2f, 1, 0, 0);
								}
								else
								{
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1064.463f, 844.4973f, 116.9382f, 2f, -1, 0.25f, 0, 40000f);
								}
								TASK::CLOSE_SEQUENCE_TASK(iLocal_1818);
								TASK::_TASK_PERFORM_SEQUENCE_2(iLocal_1794[iVar0], iLocal_1818, fVar5, fVar5);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_1818);
							}
							iVar0++;
						}
						func_5(1024);
						__LIB_8__::func_131(&Local_1389, 4);
						__LIB_8__::func_85(Local_1389.f_136, 512);
						__LIB_8__::func_253(&Local_1389);
						func_289(&uLocal_1805, 0);
						__LIB_0__::func_37(&(vLocal_1578[0 /*3*/]));
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(4, iLocal_31, iLocal_32);
						iVar6 = func_672();
						if (!ENTITY::IS_ENTITY_DEAD(iVar6))
						{
							__LIB_8__::func_336(&(Local_1389.f_35), "HOME_ATAK04", iVar6, Global_35, 0, 0, 1, 1);
						}
						iLocal_26 = 5;
					}
					Jump @1424; //curOff = 912
					iVar0 = 0;
					iVar0 = 0;
					while (iVar0 < Local_386.f_1)
					{
						iVar3 = TASK::GET_SCRIPT_TASK_STATUS(iLocal_1794[iVar0], 242628503, true);
						if (iVar3 == 0 || iVar3 == 1)
						{
						}
						else
						{
							iVar0++;
							iVar0 = 0;
							iVar0 = 0;
							while (iVar0 < Local_386.f_1)
							{
								if (!ENTITY::IS_ENTITY_DEAD(iLocal_1794[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Local_386.f_369[iVar0 /*32*/].f_11))
								{
									iVar7 = iLocal_1794[iVar0];
									TASK::_TASK_MOVE_IN_TRAFFIC_2(iLocal_1794[iVar0], -1064.463f, 844.4973f, 116.9382f, 1073741824 /* Float: 2f */, 2.5f, 0, 0);
								}
								else
								{
									iVar0++;
								}
							}
							iVar1 = 0;
							iVar0 = 0;
							while (iVar0 < Local_386.f_1)
							{
								if (ENTITY::IS_ENTITY_DEAD(iLocal_1794[iVar0]))
								{
								}
								else if (ENTITY::IS_ENTITY_DEAD(Local_386.f_369[iVar0 /*32*/].f_11))
								{
								}
								else if (iVar7 == iLocal_1794[iVar0])
								{
								}
								else
								{
									TASK::TASK_MOVE_BE_IN_FORMATION(iLocal_1794[iVar0], iVar7, 0f, (1f * IntToFloat(iVar1)), 0f, -1082130432 /* Float: -1f */, 0);
									iVar1++;
								}
								iVar0++;
							}
							iLocal_26 = 6;
							Jump @1424; //curOff = 1205
							if (func_673(iParam0))
							{
								iVar0 = 0;
								while (iVar0 < Local_386.f_1)
								{
									TASK::TASK_COMBAT_PED(iLocal_1794[iVar0], Global_35, 16384, 0);
									iVar0++;
								}
								iLocal_26 = 7;
							}
							iVar8 = func_883(&iLocal_1794, func_215(), 1, 0, -1, 60f, -1082130432 /* Float: -1f */);
							if (ENTITY::DOES_ENTITY_EXIST(iVar8))
							{
								iVar0 = 0;
								while (iVar0 < Local_386.f_1)
								{
									if (!ENTITY::IS_ENTITY_DEAD(iLocal_1794[iVar0]))
									{
										PED::SET_PED_KEEP_TASK(iLocal_1794[iVar0], true);
										ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_1794[iVar0]));
									}
									iVar0++;
								}
								iLocal_26 = 8;
							}
							Jump @1424; //curOff = 1359
							Jump @1424; //curOff = 1362
							if (func_673(iParam0))
							{
								iVar0 = 0;
								while (iVar0 < Local_386.f_1)
								{
									TASK::TASK_COMBAT_PED(iLocal_1794[iVar0], Global_35, 16384, 0);
									iVar0++;
								}
								iLocal_26 = 7;
							}
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

void func_658()
{
	int iVar0;
	if ((iLocal_1640 % 5) == 0)
	{
		iVar0 = 0;
		while (iVar0 < iLocal_1794)
		{
			if (__LIB_2__::func_1(iLocal_1794[iVar0], 0, 1))
			{
				__LIB_3__::func_535(iLocal_1794[iVar0], 1, Global_35, 0);
			}
			iVar0++;
		}
	}
}

void func_659(int iParam0, bool bParam1)
{
	func_829(iParam0, 0, bParam1);
	func_829(iParam0, 1, bParam1);
	func_829(iParam0, 2, bParam1);
}

int func_660(bool bParam0)
{
	int iVar0;
	if (!__LIB_0__::func_75(&(vLocal_1578[4 /*3*/])))
	{
		__LIB_1__::func_148(&(vLocal_1578[4 /*3*/]));
	}
	if (__LIB_1__::func_285(&(vLocal_1578[4 /*3*/]), 0f) || !bParam0)
	{
		if (bParam0)
		{
			if (!ENTITY::IS_ENTITY_DEAD(__LIB_2__::func_963(Local_1389.f_138)) && PED::IS_PED_SHOOTING(__LIB_2__::func_963(Local_1389.f_138)))
			{
				__LIB_2__::func_315(1066055203, __LIB_2__::func_963(Local_1389.f_138), 1);
				if (!__LIB_8__::func_332(262144))
				{
					__LIB_2__::func_268(536870912, 1, 0, 1);
					__LIB_13__::func_187(262144);
				}
				func_885();
				__LIB_0__::func_37(&(vLocal_1578[4 /*3*/]));
			}
		}
		iVar0 = 0;
		while (iVar0 < Local_386.f_1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_1794[iVar0]) && PED::IS_PED_SHOOTING(iLocal_1794[iVar0]))
			{
				if (bParam0)
				{
					__LIB_2__::func_315(1066055203, iLocal_1794[iVar0], 1);
					if (!__LIB_8__::func_332(262144))
					{
						__LIB_2__::func_268(536870912, 1, 0, 1);
						__LIB_13__::func_187(262144);
					}
				}
				func_885();
				__LIB_0__::func_37(&(vLocal_1578[4 /*3*/]));
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_661(int iParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (iParam4 == 1 && !__LIB_0__::func_272((*iParam0)[iVar0], 0))
		{
		}
		else
		{
			__LIB_3__::func_442((*iParam0)[iVar0], uParam1, iParam2, bParam3);
		}
		iVar0++;
	}
}

void func_662()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_386.f_1)
	{
		__LIB_2__::func_23(&uLocal_1823, iLocal_1794[iVar0], 0);
		__LIB_2__::func_20(&uLocal_1823, Local_386.f_369[iVar0 /*32*/].f_11, 0);
		iVar0++;
	}
}

void func_664()
{
	int iVar0;
	Local_1649[0 /*8*/].f_1 = { func_237(64) };
	Local_1649[0 /*8*/].f_4 = 97.95f;
	Local_1649[0 /*8*/].f_5 = 1;
	Local_1649[0 /*8*/].f_6 = 0;
	Local_1649[0 /*8*/].f_7 = 0;
	Local_1649[1 /*8*/].f_1 = { func_237(65) };
	Local_1649[1 /*8*/].f_4 = 80.52f;
	Local_1649[1 /*8*/].f_5 = 1;
	Local_1649[1 /*8*/].f_6 = 1;
	Local_1649[1 /*8*/].f_7 = 0;
	Local_1649[2 /*8*/].f_1 = { func_237(66) };
	Local_1649[2 /*8*/].f_4 = 101.23f;
	Local_1649[2 /*8*/].f_5 = 1;
	Local_1649[2 /*8*/].f_6 = 0;
	Local_1649[2 /*8*/].f_7 = 0;
	iVar0 = 0;
	while (iVar0 < Local_1649)
	{
		if (!__LIB_0__::func_86(Local_1649[iVar0 /*8*/].f_1))
		{
			Local_1649[iVar0 /*8*/] = TASK::ADD_COVER_POINT(Local_1649[iVar0 /*8*/].f_1, Local_1649[iVar0 /*8*/].f_4, Local_1649[iVar0 /*8*/].f_6, Local_1649[iVar0 /*8*/].f_5, Local_1649[iVar0 /*8*/].f_7, false);
		}
		iVar0++;
	}
}

char* func_665(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "Default_Angry";
		case 1:
			return "Default_Panic";
		case 2:
			return "Default_Shocked";
		default:
			break;
	}
	return "Default_Scared";
}

void func_666(int iParam0)
{
	PED::SET_PED_SHOOT_RATE(iParam0, 30);
}

Vector3 func_667(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -492.5699f, 478.279f, 98.5375f;
		case 1:
			return -487.6176f, 473.3265f, 97.04874f;
		case 2:
			return -492.2293f, 478.5967f, 98.59277f;
		case 3:
			return -487.3784f, 473.5992f, 97.41553f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_668()
{
	AUDIO::_0xEF51242E35242B47("HOME_ATAK");
	AUDIO::_0xEF51242E35242B47("HOME_ATAKF");
	AUDIO::_0xEF51242E35242B47("HOME_ATAKFP");
	AUDIO::_0xEF51242E35242B47("HOME_ATAKR");
	AUDIO::_0xEF51242E35242B47("HOME_ATAKP");
	AUDIO::_0xEF51242E35242B47("HOME_ATAKP2");
	AUDIO::_0xEF51242E35242B47("HOME_ATAKP3");
	AUDIO::_0xEF51242E35242B47("HOME_ATAK02");
	AUDIO::_0xEF51242E35242B47("HOME_ATAK03");
	AUDIO::_0xEF51242E35242B47("HOME_ATAK04");
}

void func_669()
{
	if (__LIB_1__::func_285(&(vLocal_1578[10 /*3*/]), 60f))
	{
		func_290(&iLocal_1794, Global_35, 0, -1, 1148846080 /* Float: 1000f */, 0, 4);
		func_289(&uLocal_1805, 0);
		__LIB_0__::func_37(&(vLocal_1578[0 /*3*/]));
		func_290(&iLocal_1768, Global_35, 0, -1, 1148846080 /* Float: 1000f */, 0, 4);
		iLocal_24 = 9;
	}
}

void func_670()
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!__LIB_4__::func_241(16384))
	{
		if (__LIB_2__::func_227(0, 1, iLocal_1794[0], 1) && func_887())
		{
			iVar0 = 0;
			while (iVar0 < Local_386.f_1)
			{
				if (!MAP::DOES_BLIP_EXIST(uLocal_1805[iVar0]))
				{
					__LIB_2__::func_73(iLocal_1794[iVar0], &(uLocal_1805[iVar0]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
				}
				iVar0++;
			}
			iVar1 = func_672();
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				__LIB_8__::func_336(&(Local_1389.f_35), "HOME_ATAKP", iVar1, Global_35, 0, 0, 1, 1);
			}
			func_5(16384);
			__LIB_1__::func_148(&(vLocal_1578[8 /*3*/]));
			func_141(512);
		}
	}
	else if (!__LIB_10__::func_282(32768))
	{
		if (func_888())
		{
			iVar2 = func_672();
			if (!ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				__LIB_8__::func_336(&(Local_1389.f_35), "HOME_ATAKP2", iVar2, Global_35, 0, 0, 1, 1);
			}
			func_141(32768);
			__LIB_0__::func_37(&(vLocal_1578[8 /*3*/]));
		}
	}
	if (!__LIB_10__::func_282(512) && func_889(Global_35, &iLocal_1794, 45f, 0, 0))
	{
		iVar0 = 0;
		while (iVar0 < Local_386.f_1)
		{
			if (!MAP::DOES_BLIP_EXIST(uLocal_1805[iVar0]))
			{
				__LIB_2__::func_73(iLocal_1794[iVar0], &(uLocal_1805[iVar0]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
			}
			iVar0++;
		}
		func_141(512);
	}
}

bool func_671(int iParam0, int iParam1, int iParam2)
{
	if (!__LIB_4__::func_241(67108864))
	{
		if (__LIB_2__::func_118(*iParam0, 1, 1) < 80f)
		{
			if (!__LIB_0__::func_75(&(vLocal_1578[12 /*3*/])))
			{
				__LIB_1__::func_148(&(vLocal_1578[12 /*3*/]));
			}
			if (__LIB_1__::func_285(&(vLocal_1578[12 /*3*/]), 2.5f))
			{
				func_5(67108864);
				__LIB_8__::func_93(Local_1389.f_136, 8388608);
				__LIB_8__::func_85(Local_1389.f_136, 64);
				if (!__LIB_7__::func_907(Local_1389.f_136, 4))
				{
					__LIB_8__::func_85(Local_1389.f_136, 4);
				}
			}
		}
		else if (__LIB_0__::func_75(&(vLocal_1578[12 /*3*/])))
		{
			__LIB_0__::func_37(&(vLocal_1578[12 /*3*/]));
		}
	}
	if (!__LIB_4__::func_241(67108864))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		if (!__LIB_1__::func_205(*iParam0, iLocal_1759[3], 1, 0) && !PED::IS_PED_IN_COVER(*iParam0, false, false))
		{
			return false;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(*iParam1))
	{
		if (!__LIB_1__::func_205(*iParam1, iLocal_1759[3], 1, 0) && !PED::IS_PED_IN_COVER(*iParam1, false, false))
		{
			return false;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(*iParam2))
	{
		if (!__LIB_1__::func_205(*iParam2, iLocal_1759[3], 1, 0) && !PED::IS_PED_IN_COVER(*iParam2, false, false))
		{
			return false;
		}
	}
	return true;
}

int func_672()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_386.f_1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_1794[iVar0]))
		{
		}
		else
		{
			iVar0++;
		}
	}
	if (iVar0 >= Local_386.f_1)
	{
		return 0;
	}
	__LIB_0__::func_928(&(Local_1389.f_35), iLocal_1794[iVar0], "HOME_ATTACKER", 0);
	return iLocal_1794[iVar0];
}

bool func_673(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (func_258(&iLocal_1794, &uLocal_1823, &uLocal_1851, &uLocal_1645, 0, (Local_386.f_1 - 1), 1) || ((__LIB_4__::func_241(16384) && __LIB_10__::func_282(32768)) && func_889(Global_35, &iLocal_1794, 30f, 0, 0)))
	{
		func_5(128);
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < iLocal_1794)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_1794[iVar0]))
			{
				if (!MAP::DOES_BLIP_EXIST(uLocal_1805[iVar0]))
				{
					__LIB_2__::func_73(iLocal_1794[iVar0], &(uLocal_1805[iVar0]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
				}
				TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(iLocal_1794[iVar0], ENTITY::GET_ENTITY_COORDS(*iParam0, true, false), 60f, 0, 16);
				PED::SET_PED_ACCURACY(iLocal_1794[iVar0], iLocal_1642);
				iVar1 = iVar0;
			}
			iVar0++;
		}
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, iLocal_31, joaat("PLAYER"));
		if (__LIB_2__::func_1(*iParam0, 0, 1))
		{
			PED::SET_PED_ACCURACY(*iParam0, 55);
		}
		if (iVar1 >= 0)
		{
			__LIB_3__::func_732(0);
			iVar2 = func_672();
			if (!ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				__LIB_8__::func_336(&(Local_1389.f_35), "HOME_ATAKP3", iVar2, Global_35, 0, 0, 1, 1);
			}
		}
		__LIB_8__::func_85(Local_1389.f_136, 64);
		if (!__LIB_7__::func_907(Local_1389.f_136, 4))
		{
			__LIB_8__::func_85(Local_1389.f_136, 4);
		}
		if (!func_402(2))
		{
			__LIB_3__::func_353("SP_EVENT_AREA_CASTORS_2_ACTION", 0);
			func_401(2);
		}
		return true;
	}
	return false;
}

void func_677(int iParam0)
{
	int iVar0;
	if (iLocal_1641 < 4 && __LIB_2__::func_227(0, 1, 0, 0))
	{
		if (!__LIB_0__::func_75(&(vLocal_1578[0 /*3*/])))
		{
			__LIB_1__::func_148(&(vLocal_1578[0 /*3*/]));
		}
		if (__LIB_1__::func_313(&(vLocal_1578[0 /*3*/]), 5f))
		{
			if (!__LIB_4__::func_241(134217728))
			{
				func_5(134217728);
				iVar0 = func_672();
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					__LIB_8__::func_336(&(Local_1389.f_35), "HOME_ATAK02", iVar0, Global_35, 0, 0, 1, 1);
				}
			}
			else
			{
				iLocal_1641++;
				func_139(134217728);
				__LIB_8__::func_336(&(Local_1389.f_35), "HOME_ATAKFP", *iParam0, Global_35, 0, 0, 1, 1);
			}
		}
	}
}

void func_680()
{
	if (!__LIB_4__::func_241(65536))
	{
		func_869(&Local_336, 0);
	}
}

bool func_681()
{
	if (__LIB_3__::func_996(Global_35))
	{
		return false;
	}
	if (__LIB_1__::func_285(&(vLocal_1578[0 /*3*/]), 10f))
	{
		return true;
	}
	if (!__LIB_4__::func_241(1048576))
	{
		return false;
	}
	if (__LIB_1__::func_205(Global_35, iLocal_1759[1], 1, 0))
	{
		return false;
	}
	return true;
}

bool func_682(int iParam0)
{
	switch (iLocal_2070)
	{
		case 0:
			if (!MAP::DOES_BLIP_EXIST(uLocal_1790[0]))
			{
				__LIB_2__::func_73(*iParam0, &(uLocal_1790[0]), -89429847, 580546400, 0, func_365());
			}
			if (__LIB_1__::func_285(&(vLocal_1578[1 /*3*/]), 12.5f))
			{
				iLocal_2070 = 6;
				__LIB_1__::func_715(14, 0, 0, 0, *iParam0, 0, 1065353216 /* Float: 1f */, 0);
			}
			else if (__LIB_2__::func_118(*iParam0, 1, 1) < 20f && __LIB_1__::func_285(&(vLocal_1578[1 /*3*/]), 5f))
			{
				__LIB_8__::func_336(&(Local_1389.f_35), "HOME_THXA", *iParam0, Global_35, 0, 0, 1, 1);
				iLocal_2070 = 1;
			}
			break;
		case 1:
			if (__LIB_2__::func_227(-5f, 1, 0, 0))
			{
				__LIB_1__::func_715(14, 0, 0, 0, *iParam0, 0, 1065353216 /* Float: 1f */, 0);
				func_615(1, 0);
				func_279(0, 1, 0);
				func_893(0);
				__LIB_1__::func_148(&(vLocal_1578[1 /*3*/]));
				iLocal_2070 = 4;
			}
			break;
		case 4:
			if (__LIB_1__::func_313(&(vLocal_1578[1 /*3*/]), 5f))
			{
				func_615(0, 0);
				func_279(0, 1, 0);
				iLocal_2070 = 7;
				return true;
			}
			switch (iLocal_334)
			{
				case 0:
					__LIB_8__::func_336(&(Local_1389.f_35), "HOME_WLCMA", Global_35, *iParam0, 0, 0, 1, 1);
					func_279(0, 1, 1);
					iLocal_2070 = 6;
					break;
				case 1:
					__LIB_8__::func_336(&(Local_1389.f_35), "HOME_WLCMAN", Global_35, *iParam0, 0, 0, 1, 1);
					func_279(0, 1, 1);
					iLocal_2070 = 6;
					break;
			}
			break;
		case 6:
			if (__LIB_2__::func_227(-3.5f, 1, 0, 0))
			{
				func_615(0, 0);
				func_279(0, 1, 0);
				iLocal_2070 = 7;
				return true;
			}
			break;
		case 7:
			return true;
	}
	return false;
}

void func_684()
{
	__LIB_8__::func_123(64, 1, 1);
	TASK::OPEN_SEQUENCE_TASK(&iLocal_1818);
	TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, -444.7836f, 502.7554f, 97.5326f, 1f, 0, false, false, false, false);
	TASK::CLOSE_SEQUENCE_TASK(iLocal_1818);
	TASK::_TASK_PERFORM_SEQUENCE_2(iLocal_1768[0], iLocal_1818, 0f, 1f);
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_1818);
	__LIB_8__::func_123(65, 1, 1);
	TASK::OPEN_SEQUENCE_TASK(&iLocal_1818);
	TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, -421.8968f, 495.1602f, 97.77839f, 1f, 0, false, false, false, false);
	TASK::CLOSE_SEQUENCE_TASK(iLocal_1818);
	TASK::_TASK_PERFORM_SEQUENCE_2(iLocal_1768[1], iLocal_1818, 1.5f, 3f);
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_1818);
	__LIB_8__::func_123(66, 1, 1);
	TASK::OPEN_SEQUENCE_TASK(&iLocal_1818);
	TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, -427.5713f, 500.593f, 97.10954f, 1f, 0, false, false, false, false);
	TASK::CLOSE_SEQUENCE_TASK(iLocal_1818);
	TASK::_TASK_PERFORM_SEQUENCE_2(iLocal_1768[2], iLocal_1818, 3f, 5f);
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_1818);
}

int func_686()
{
	if (!__LIB_4__::func_241(16))
	{
		if (func_14(&iLocal_1789))
		{
			func_5(16);
			func_5(131072);
			return 1;
		}
	}
	return 0;
}

int func_687()
{
	if (__LIB_4__::func_241(16))
	{
		if (func_191(1))
		{
			func_139(16);
			func_139(131072);
			return 1;
		}
	}
	return 0;
}

void func_692(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_828(iParam0, 2, "HOME_CTXT2");
	Local_125[iParam0 /*52*/][2 /*17*/].f_14 = __LIB_3__::func_970(joaat("EA_CASTORSPOND_PAY_MONEY"));
	__LIB_1__::func_483(Local_125[iParam0 /*52*/][2 /*17*/].f_6, "HOME_CTXT2", Local_125[iParam0 /*52*/][2 /*17*/].f_14, 0);
	__LIB_1__::func_471(&(Local_125[iParam0 /*52*/][2 /*17*/]), 1);
	func_747(iParam0, 2, 1);
	func_829(iParam0, 2, 0);
	func_828(iParam0, 0, __LIB_2__::func_460(7));
	func_747(iParam0, 0, 1);
	func_829(iParam0, 0, 0);
	func_828(iParam0, 1, __LIB_2__::func_460(30));
	func_747(iParam0, 1, 1);
	func_829(iParam0, 1, 0);
	func_830(iParam0);
}

Vector3 func_694()
{
	return 0.157993f, 1.238588f, -0.004703f;
}

void func_697(int iParam0)
{
	__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 1, 106);
	func_101(0);
	func_5(2097152);
	ENTITY::FREEZE_ENTITY_POSITION(*iParam0, false);
	__LIB_8__::func_16(&(Local_1618[1 /*7*/]));
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
	__LIB_8__::func_132(&Local_1389, 65536);
	__LIB_2__::func_190(*iParam0, __LIB_3__::func_970(joaat("EA_CASTORSPOND_PAY_MONEY")));
	func_5(512);
	func_908(joaat("EA_CASTORSPOND_PAY_MONEY"), 0, 0, 0);
	__LIB_8__::func_82(Local_1389.f_136, 128);
	func_5(8192);
	__LIB_8__::func_131(&Local_1389, 128);
	func_699(Local_1389.f_136);
	__LIB_8__::func_85(Local_1389.f_136, 16384);
	func_139(65536);
	__LIB_8__::func_253(&Local_1389);
	__LIB_1__::func_148(&(vLocal_1578[1 /*3*/]));
}

bool func_698(int iParam0, int* iParam1, int iParam2, int iParam3, var uParam4)
{
	if (!__LIB_2__::func_1(iParam0, 0, 1))
	{
		return true;
	}
	else if (!__LIB_2__::func_1(iParam2, 0, 1))
	{
		return true;
	}
	switch (*iParam3)
	{
		case 0:
			uParam4->f_183 = __LIB_0__::func_665(iParam0, iParam2, 0, 1);
			TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam2, -1, 0, 51, 0);
			if (!(__LIB_1__::func_472(iParam0, uParam4->f_188, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */) || __LIB_0__::func_665(iParam0, iParam2, 1, 1) < 2f) && !uParam4->f_79)
			{
				TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(iParam0, iParam2, 0f, 6f, 0.5f, uParam4->f_212, -1, 1036831949 /* Float: 0.1f */, 1, 1, 0, 0, 1);
			}
			else
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(iParam0, iParam2, 0, -1f, -1f, -1f);
			}
			if (uParam4->f_180)
			{
				if (__LIB_0__::func_232(iParam0, iParam2, 1) >= 16f)
				{
					TASK::TASK_GO_TO_ENTITY(iParam0, iParam2, 20000, 0.5f, uParam4->f_212, 2f, 0);
					__LIB_1__::func_148(&(uParam4->f_191));
				}
				else
				{
					uParam4->f_180 = 0;
					uParam4->f_79 = 1;
				}
			}
			*iParam3 = 1;
			break;
		case 1:
			if (__LIB_0__::func_665(iParam0, iParam2, 0, 1) > (uParam4->f_183 + uParam4->f_1))
			{
				TASK::TASK_SMART_FLEE_PED(iParam0, iParam2, 1000f, -1, 0, 1077936128 /* Float: 3f */, 0);
				return true;
			}
			else if ((!uParam4->f_180 && (__LIB_0__::func_665(iParam0, iParam2, 1, 1) < uParam4->f_188 || uParam4->f_79)) || (uParam4->f_180 && (__LIB_1__::func_313(&(uParam4->f_191), uParam4->f_189) || __LIB_0__::func_232(iParam0, iParam2, 1) < 16f)))
			{
				if (((uParam4->f_180 || __LIB_1__::func_472(iParam0, uParam4->f_188, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */)) || uParam4->f_77) || (uParam4->f_79 && (uParam4->f_77 || ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))))
				{
					if (uParam4->f_80)
					{
						TASK::TASK_FOLLOW_AND_CONVERSE_WITH_PED(iParam0, iParam2, &(uParam4->f_62), &(uParam4->f_66), uParam4->f_184, uParam4->f_185, 8, 0, 0, 1069547520 /* Float: 1.5f */, 1073741824 /* Float: 2f */);
					}
					else
					{
						__LIB_3__::func_210(iParam0, &(uParam4->f_181), -1, !uParam4->f_77);
					}
					*iParam3 = 2;
				}
			}
			break;
		case 2:
			if ((uParam4->f_76 || uParam4->f_79) || ((__LIB_2__::func_215(iParam0, iParam2, 0, uParam4->f_188, 0) && (uParam4->f_80 || __LIB_3__::func_210(iParam0, &(uParam4->f_181), -1, !uParam4->f_77))) || uParam4->f_180))
			{
				if (__LIB_2__::func_227(0, 1, iParam0, uParam4->f_182))
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_2)))
					{
						if (uParam4->f_80 || uParam4->f_180)
						{
							TASK::TASK_PLAY_ANIM(iParam0, &(uParam4->f_2), &(uParam4->f_10), 1.5f, -1.5f, -1, 24, 0f, false, 0, false, 0, false);
						}
						else
						{
							TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(iParam0, &(uParam4->f_2), &(uParam4->f_10), iParam2, -1, 4f, -4f, 67108880, 0f, false, false, -1f, 0, 65536, -1f);
						}
					}
					*uParam4 = MISC::GET_GAME_TIMER();
					if (uParam4->f_194)
					{
						MemCopy(&(uParam4->f_34), {uParam4->f_199}, 8);
					}
					__LIB_10__::func_607(uParam4->f_179, &(uParam4->f_81), iParam0, iParam2, &(uParam4->f_34), 0, 1116471296 /* Float: 70f */, 0, 0, 0, 1);
					func_912(uParam4);
					if (uParam4->f_194 && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_204)))
					{
						*iParam3 = 4;
					}
					else if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_42)))
					{
						*iParam3 = 3;
					}
					else
					{
						*iParam3 = 5;
					}
				}
			}
			else if (!__LIB_2__::func_1(iParam0, 0, 1))
			{
				return true;
			}
			break;
		case 3:
			if (__LIB_2__::func_227(0, 1, iParam0, uParam4->f_182))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_2)))
				{
					if (uParam4->f_80)
					{
						TASK::TASK_PLAY_ANIM(iParam0, &(uParam4->f_2), &(uParam4->f_10), 4f, -4f, -1, 24, 0f, false, 0, false, 0, false);
					}
					else if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_26)))
					{
						TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(iParam0, &(uParam4->f_18), &(uParam4->f_26), iParam2, -1, 4f, -4f, 16, 0f, false, false, -1f, 0, 0, -1f);
					}
					else
					{
						TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(iParam0, &(uParam4->f_2), &(uParam4->f_10), iParam2, -1, 4f, -4f, 16, 0f, false, false, -1f, 0, 0, -1f);
					}
				}
				__LIB_10__::func_607(uParam4->f_179, &(uParam4->f_81), iParam0, iParam2, &(uParam4->f_42), 0, 1116471296 /* Float: 70f */, 0, 0, 0, 1);
				*iParam3 = 5;
			}
			break;
		case 4:
			if (__LIB_2__::func_227(0, 1, iParam0, uParam4->f_182))
			{
				if (__LIB_3__::func_273(&(uParam4->f_203), &(uParam4->f_204), 0f, 0f, 0f, iParam0, joaat("INPUT_CONTEXT_B"), 10f, 0f, 0, 1, 0, 0, 0, 0, 0, 1, 0, joaat("SHORT_TIMED_EVENT"), 0))
				{
					MemCopy(&(uParam4->f_54), {uParam4->f_195}, 8);
					*iParam3 = 5;
				}
				else if ((MISC::GET_GAME_TIMER() - *uParam4) > 18000)
				{
					__LIB_1__::func_748(&(uParam4->f_203), 1, 1);
					uParam4->f_194 = 0;
					*iParam3 = 6;
				}
			}
			break;
		case 5:
			if ((__LIB_2__::func_227(uParam4->f_187, 1, iParam0, uParam4->f_182) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(iParam0)) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iParam0))
			{
				if (!MISC::IS_STRING_NULL(&(uParam4->f_54)))
				{
					*uParam4 = MISC::GET_GAME_TIMER();
					__LIB_10__::func_607(uParam4->f_179, &(uParam4->f_81), iParam2, iParam0, &(uParam4->f_54), 0, 1116471296 /* Float: 70f */, 0, 0, 0, 1);
					*iParam3 = 6;
				}
				else
				{
					if (uParam4->f_75 != 0)
					{
						__LIB_1__::func_616(uParam4->f_75, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
					}
					else if (uParam4->f_70 != 0)
					{
						__LIB_1__::func_797(uParam4->f_70, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
					}
					*iParam3 = 6;
				}
			}
			break;
		case 6:
			if (__LIB_2__::func_227(0, 1, iParam0, uParam4->f_182) || (uParam4->f_190 > 0 && (MISC::GET_GAME_TIMER() - *uParam4) > uParam4->f_190))
			{
				if (MAP::DOES_BLIP_EXIST(*iParam1))
				{
					MAP::REMOVE_BLIP(iParam1);
				}
				if (uParam4->f_78)
				{
					TASK::TASK_WANDER_STANDARD(iParam0, 40000f, 0);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_208)))
				{
					__LIB_0__::func_45(&(uParam4->f_208), 10000, 0, 0, 0, 1);
				}
				*iParam3 = 7;
				return true;
			}
			break;
		case 7:
			return true;
	}
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, Global_35, 1, 1))
	{
		TASK::TASK_SMART_FLEE_PED(iParam0, Global_35, 1000f, -1, 0, 1077936128 /* Float: 3f */, 0);
		return true;
	}
	return false;
}

void func_699(int iParam0)
{
	if (!__LIB_0__::func_625(iParam0))
	{
		return;
	}
	__LIB_8__::func_82(iParam0, 1073741824 /* Float: 2f */);
}

void func_700(int iParam0)
{
	if (iLocal_21 < 16)
	{
		if (!__LIB_4__::func_241(1073741824 /* Float: 2f */) && __LIB_2__::func_118(*iParam0, 1, 1) < 10f)
		{
			func_5(1073741824 /* Float: 2f */);
		}
		func_645(__LIB_4__::func_241(1073741824 /* Float: 2f */), 1);
	}
	if (iLocal_21 >= 5 && iLocal_21 < 16)
	{
		func_869(&Local_336, 0);
	}
}

void func_702(int iParam0)
{
	if (!__LIB_8__::func_332(2048) && __LIB_1__::func_205(*iParam0, iLocal_1759[4], 1, 0))
	{
		__LIB_13__::func_187(2048);
	}
}

bool func_703()
{
	return (__LIB_0__::func_982(0) <= 3 && !__LIB_7__::func_908(0, 4194304));
}

void func_704(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (__LIB_4__::func_241(16))
	{
		func_828(iParam0, 0, "HOME_CTXT1A");
		func_747(iParam0, 0, 1);
	}
	else if (func_703())
	{
		func_828(iParam0, 0, __LIB_2__::func_460(0));
		func_747(iParam0, 0, 1);
	}
	else
	{
		func_747(iParam0, 0, 0);
	}
	func_829(iParam0, 0, 0);
	func_828(iParam0, 2, "HOME_CTXT2");
	Local_125[iParam0 /*52*/][2 /*17*/].f_14 = __LIB_3__::func_970(joaat("EA_CASTORSPOND_PAY_MONEY"));
	__LIB_1__::func_483(Local_125[iParam0 /*52*/][2 /*17*/].f_6, "HOME_CTXT2", Local_125[iParam0 /*52*/][2 /*17*/].f_14, 0);
	__LIB_1__::func_471(&(Local_125[iParam0 /*52*/][2 /*17*/]), 1);
	func_747(iParam0, 2, 1);
	func_829(iParam0, 2, 0);
	func_828(iParam0, 1, __LIB_2__::func_460(1));
	func_747(iParam0, 1, 1);
	func_829(iParam0, 1, 0);
	func_830(iParam0);
}

int func_705(int iParam0)
{
	int iVar0;
	int iVar1;
	if (__LIB_1__::func_205(Global_35, iLocal_1759[2], 1, 0) || __LIB_1__::func_205(Global_35, iLocal_1759[3], 1, 0))
	{
		if (__LIB_1__::func_394(PLAYER::GET_PLAYER_INDEX(), 1, 1, 1))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
		}
	}
	if (iLocal_23 < 11 && ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		func_305();
	}
	switch (iLocal_23)
	{
		case 0:
			Local_2071.f_12 = 20f;
			Local_2071.f_13 = 15f;
			func_589(0);
			func_279(0, 1, 1);
			__LIB_1__::func_948(1986792065, 0, -1f, 1, 1, 0, 1, 0);
			iLocal_1759[1] = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), -444.2087f, 499.9236f, 99.1105f, 0f, 0f, 0f, 1f, 1f, 1.313758f);
			func_616(1);
			__LIB_8__::func_147(&(Local_1618[0 /*7*/]), *iParam0, "father", 1);
			__LIB_8__::func_147(&(Local_1618[0 /*7*/]), Global_35, "plr", 1);
			__LIB_8__::func_148(&(Local_1618[0 /*7*/]), Local_386.f_690[0 /*12*/].f_8, "MONEY");
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_1794[0]))
			{
				TASK::TASK_STAND_STILL(iLocal_1794[0], -1);
				__LIB_4__::func_203(&Local_1389, 1);
				__LIB_2__::func_967(&Local_1389, *iParam0, iLocal_1794[0], 0);
				PHYSICS::_0x06AADE17334F7A40(iLocal_1794[0], func_708());
				PED::SET_PED_CONFIG_FLAG(iLocal_1794[0], 178, true);
				PED::_0x931B241409216C1F(*iParam0, iLocal_1794[0], 0);
			}
			TASK::_TASK_START_SCENARIO_IN_PLACE(*iParam0, __LIB_9__::func_751(), -1, false, 0, -1f, false);
			__LIB_3__::func_123(-942875190, 1);
			iLocal_23 = 1;
			break;
		case 1:
			if (func_600(Local_1389.f_136, &Local_386, &Local_1389, 50f))
			{
				func_5(128);
				iLocal_23 = 2;
			}
			break;
		case 2:
			if (!__LIB_7__::func_907(Local_1389.f_136, 4))
			{
				__LIB_8__::func_85(Local_1389.f_136, 4);
			}
			if (!ENTITY::IS_ENTITY_DEAD(*iParam0) && __LIB_2__::func_215(*iParam0, Global_35, 0, 20f, 0))
			{
				__LIB_8__::func_48(iParam0, 0, 0);
				iLocal_30 = __LIB_3__::func_721(*iParam0, VOLUME::_CREATE_VOLUME_CYLINDER(ENTITY::GET_ENTITY_COORDS(*iParam0, true, false), 0f, 0f, ENTITY::GET_ENTITY_HEADING(*iParam0), 5.5f, 5.5f, 5.5f), 148);
				iLocal_23 = 3;
			}
			break;
		case 3:
			if (!__LIB_2__::func_763(Local_1389.f_138, 0))
			{
				__LIB_8__::func_123(Local_1389.f_138, 1, 1);
			}
			__LIB_8__::func_48(iParam0, 0, 0);
			if (__LIB_4__::func_241(2))
			{
				iVar0 = 2;
				iVar1 = 3;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			TASK::_0xE7FA07624574B79A(*iParam0, Global_35, iVar1, iVar0, 3f, 1, 0, 0, 0);
			__LIB_8__::func_336(&(Local_1389.f_35), Local_2071.f_1, *iParam0, Global_35, 0, 0, 1, 1);
			__LIB_0__::func_325(&(uLocal_1790[0]));
			func_5(1048576);
			iLocal_23 = 4;
			break;
		case 4:
			__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			__LIB_8__::func_48(iParam0, 0, 0);
			if (__LIB_4__::func_241(1048576))
			{
				if (__LIB_2__::func_227(-3.5f, 1, *iParam0, 1))
				{
					func_139(1048576);
				}
			}
			else
			{
				if (!__LIB_8__::func_332(67108864) && !__LIB_1__::func_322(Local_2071.f_1))
				{
					func_615(1, 1);
					func_279(0, 1, 0);
					func_589(0);
				}
				switch (iLocal_334)
				{
					case 0:
						func_615(1, 0);
						func_279(0, 1, 1);
						__LIB_8__::func_336(&(Local_1389.f_35), "HOME_LN02ERP", *iParam0, Global_35, 0, 0, 1, 1);
						iLocal_23 = 5;
						break;
					case 1:
						func_615(1, 0);
						func_279(0, 1, 1);
						__LIB_8__::func_336(&(Local_1389.f_35), "HOME_LN02ERN", *iParam0, Global_35, 0, 0, 1, 1);
						iLocal_23 = 5;
						break;
				}
			}
			break;
		case 5:
			__LIB_8__::func_48(iParam0, 0, 0);
			if (__LIB_2__::func_227(-3.5f, 1, 0, 0))
			{
				if (!__LIB_2__::func_763(Local_1389.f_138, 0))
				{
					__LIB_8__::func_123(Local_1389.f_138, 1, 1);
				}
				__LIB_3__::func_953(&iLocal_30, 1);
				__LIB_8__::func_336(&(Local_1389.f_35), "HOME_LN03E1", *iParam0, Global_35, 0, 0, 1, 1);
				__LIB_3__::func_124(1986792065, 1);
				OBJECT::_0x1BC47A9DEDC8DF5D(1986792065, 1);
				__LIB_8__::func_151(&(Local_1618[0 /*7*/]), "PBL_give_money_back");
				StringCopy(&(Local_1618[0 /*7*/].f_4), "bBreakInternalLoop", 24);
				__LIB_8__::func_16(&(Local_1618[0 /*7*/]));
				iLocal_23 = 6;
			}
			break;
		case 6:
			if (!__LIB_11__::func_360(1986792065, 0))
			{
				if (func_920(0))
				{
					__LIB_1__::func_948(1986792065, 0, -1f, 1, 1, 0, 0, 0);
				}
			}
			if (!__LIB_1__::func_205(*iParam0, iLocal_1759[3], 1, 0))
			{
				__LIB_8__::func_48(iParam0, 0, 0);
			}
			else if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1759[1]))
			{
				__LIB_0__::func_172(iLocal_1759[1]);
			}
			if ((!__LIB_4__::func_241(512) && !ENTITY::IS_ENTITY_DEAD(*iParam0)) && ENTITY::HAS_ANIM_EVENT_FIRED(*iParam0, -1568763903))
			{
				__LIB_2__::func_73(*iParam0, &(uLocal_1790[0]), -89429847, 580546400, 0, func_365());
				func_5(512);
			}
			if ((__LIB_4__::func_241(512) && !ENTITY::IS_ENTITY_DEAD(Global_35)) && (__LIB_1__::func_205(Global_35, iLocal_1759[2], 1, 0) || __LIB_1__::func_205(Global_35, iLocal_1759[3], 1, 0)))
			{
				MAP::DISPLAY_RADAR(false);
				__LIB_3__::func_623(&Local_1674);
				Local_1674.f_1 = Global_35;
				Local_1674.f_8 = { __LIB_8__::func_33(&(Local_1618[0 /*7*/]), "plr", "PBL_give_money_back") };
				Local_1674.f_19 = __LIB_8__::func_200(&(Local_1618[0 /*7*/]), "plr", "PBL_give_money_back");
				Local_1674.f_25 = Local_1618[0 /*7*/];
				StringCopy(&(Local_1674.f_30), "plr", 24);
				StringCopy(&(Local_1674.f_26), "PBL_give_money_back", 32);
				__LIB_1__::func_336(&(Local_1674.f_23), 27648);
				__LIB_8__::func_131(&Local_1389, 65536);
				__LIB_17__::func_849(&Local_1674, 106);
				__LIB_7__::func_961(&Local_1549, 4);
				iLocal_23 = 7;
			}
			break;
		case 7:
			__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			if (__LIB_17__::func_849(&Local_1674, 106) && __LIB_8__::func_34(&(Local_1618[0 /*7*/])))
			{
				__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 1, 106);
				__LIB_8__::func_575(&(Local_1618[0 /*7*/]), 1, 1);
				__LIB_8__::func_336(&(Local_1389.f_35), "HOME_LN03E2", *iParam0, Global_35, 0, 0, 1, 1);
				iLocal_23 = 8;
			}
			break;
		case 8:
			if (!ENTITY::IS_ENTITY_DEAD(Global_35) && TASK::GET_IS_TASK_ACTIVE(Global_35, 3))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("OBJECTEXCHANGE")))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
					__LIB_8__::func_132(&Local_1389, 65536);
					__LIB_1__::func_616(__LIB_3__::func_970(joaat("EA_CASTORSPOND_HOUSEPRICE_MED")), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
					__LIB_8__::func_183(&(Local_1618[0 /*7*/]), Local_386.f_690[0 /*12*/].f_8, "MONEY");
					__LIB_8__::func_253(&Local_1389);
					__LIB_8__::func_93(Local_1389.f_136, 8388608);
					__LIB_8__::func_131(&Local_1389, 128);
					__LIB_0__::func_325(&(uLocal_1790[0]));
					__LIB_1__::func_951(&(Local_386.f_690[0 /*12*/].f_8));
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(Global_35) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("INTERRUPTIBLE")))
			{
				MAP::DISPLAY_RADAR(true);
			}
			if (func_710(iParam0))
			{
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1986792065, 1);
			}
			if (__LIB_7__::func_972(&(Local_1618[0 /*7*/])))
			{
				MAP::DISPLAY_RADAR(true);
				HUD::DISPLAY_HUD(true);
				func_615(0, 0);
				func_279(0, 1, 0);
				iLocal_23 = 9;
			}
			break;
		case 9:
			if (func_710(iParam0))
			{
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1986792065, 1);
			}
			if (func_709(iParam0))
			{
				func_616(0);
				func_141(128);
				iLocal_23 = 10;
			}
			break;
		case 10:
			if (!__LIB_2__::func_763(Local_1389.f_138, 0))
			{
				__LIB_8__::func_123(Local_1389.f_138, 1, 1);
			}
			if (func_710(iParam0))
			{
				__LIB_0__::func_123(Local_1389.f_138, 32);
				__LIB_0__::func_123(Local_1389.f_138, 128);
				__LIB_0__::func_121(Local_1389.f_138, 1);
				__LIB_8__::func_131(&Local_1389, 512);
				PERSCHAR::_0xB65E7F733956CF25(PERSCHAR::_0x112DDF56300BC6E5(__LIB_0__::func_118(Local_1389.f_138)));
				__LIB_1__::func_949(Local_1389.f_138, 0);
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1986792065, 1);
				iLocal_23 = 11;
			}
			break;
		case 11:
			break;
	}
	return 0;
}

int func_706(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	char[] cVar4[8];
	float fVar5;
	switch (iLocal_23)
	{
		case 0:
			Local_2071.f_12 = 20f;
			Local_2071.f_13 = 15f;
			func_589(0);
			func_279(0, 1, 1);
			func_616(1);
			__LIB_8__::func_147(&(Local_1618[0 /*7*/]), *iParam0, "father", 1);
			__LIB_8__::func_148(&(Local_1618[0 /*7*/]), Local_386.f_690[1 /*12*/].f_8, "CIGARETTE");
			StringCopy(&(Local_1618[0 /*7*/].f_4), "bBreakInternalLoop", 24);
			STREAMING::_REQUEST_SCENARIO_TYPE(__LIB_9__::func_751(), 1, __LIB_2__::func_929(Local_1389.f_138), func_608());
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_1794[0]))
			{
				TASK::TASK_STAND_STILL(iLocal_1794[0], -1);
				__LIB_4__::func_203(&Local_1389, 1);
				__LIB_2__::func_967(&Local_1389, *iParam0, iLocal_1794[0], 0);
				PHYSICS::_0x06AADE17334F7A40(iLocal_1794[0], func_708());
				PED::SET_PED_CONFIG_FLAG(iLocal_1794[0], 178, true);
				PED::_0x931B241409216C1F(*iParam0, iLocal_1794[0], 0);
			}
			__LIB_3__::func_123(-942875190, 1);
			__LIB_3__::func_123(1986792065, 1);
			__LIB_8__::func_16(&(Local_1618[0 /*7*/]));
			iLocal_23 = 1;
			break;
		case 1:
			if (func_600(Local_1389.f_136, &Local_386, &Local_1389, 50f))
			{
				__LIB_8__::func_93(Local_1389.f_136, 8388608);
				func_5(128);
				iLocal_23 = 2;
			}
			break;
		case 2:
			if (__LIB_2__::func_215(*iParam0, Global_35, 0, Local_2071.f_13, 0))
			{
				__LIB_8__::func_48(iParam0, 0, 0);
				__LIB_3__::func_667(*iParam0, &uLocal_1540, 0f, 0f, 0f, 0, 60f, 20f, -1, 4000, 4000, 3.5f, 0, 1, 1084227584 /* Float: 5f */);
				vVar1 = { __LIB_2__::func_114(Global_35, 1065353216 /* Float: 1f */) };
				iVar0 = __LIB_2__::func_431(*iParam0, vVar1, 1060437492 /* Float: 0.707f */);
				switch (iVar0)
				{
					case 0:
						cVar4 = "PBL_action_F";
						break;
					case 2:
						cVar4 = "PBL_action_R";
						break;
					case 3:
						cVar4 = "PBL_action_L";
						break;
					case 1:
						iVar0 = __LIB_2__::func_431(*iParam0, vVar1, 1f);
						switch (iVar0)
						{
							case 3:
								cVar4 = "PBL_action_back_L";
								break;
							case 2:
								cVar4 = "PBL_action_back_R";
								break;
						}
						break;
				}
				__LIB_8__::func_151(&(Local_1618[0 /*7*/]), cVar4);
				iLocal_23 = 3;
			}
			break;
		case 3:
			if (__LIB_8__::func_34(&(Local_1618[0 /*7*/])))
			{
				__LIB_8__::func_575(&(Local_1618[0 /*7*/]), 1, 1);
				__LIB_8__::func_253(&Local_1389);
				__LIB_8__::func_93(Local_1389.f_136, 8388608);
				__LIB_8__::func_336(&(Local_1389.f_35), Local_2071.f_1, *iParam0, Global_35, 0, 0, 1, 1);
				iLocal_23 = 6;
			}
			break;
		case 6:
			__LIB_8__::func_197(1048576000 /* Float: 0.25f */, 1028443341 /* Float: 0.05f */, 0, 106);
			__LIB_3__::func_667(*iParam0, &uLocal_1540, 0f, 0f, 0f, 0, 60f, 20f, -1, 4000, 4000, 3.5f, 0, 1, 1084227584 /* Float: 5f */);
			if (!__LIB_4__::func_241(1024) && __LIB_2__::func_227(-3.5f, 1, 0, 0))
			{
				func_589(0);
				func_5(1024);
				__LIB_13__::func_187(8192);
			}
			__LIB_8__::func_48(iParam0, 0, 0);
			fVar5 = __LIB_2__::func_118(*iParam0, 1, 1);
			if ((fVar5 < 3.5f || fVar5 > 20f) || __LIB_8__::func_8(&(Local_1618[0 /*7*/])) > 0.5f)
			{
				__LIB_2__::func_298();
			}
			if (!ENTITY::IS_ENTITY_DEAD(*iParam0) && !PED::IS_PED_USING_ANY_SCENARIO(*iParam0))
			{
				if (__LIB_7__::func_972(&(Local_1618[0 /*7*/])))
				{
					__LIB_0__::func_325(&(uLocal_1790[0]));
					func_615(0, 0);
					func_279(0, 1, 0);
					__LIB_1__::func_951(&(Local_386.f_690[1 /*12*/].f_8));
					__LIB_1__::func_148(&(vLocal_1578[0 /*3*/]));
					iLocal_23 = 9;
				}
			}
			break;
		case 9:
			if (func_709(iParam0))
			{
				func_616(0);
				func_141(128);
				iLocal_23 = 10;
			}
			break;
		case 10:
			if (func_710(iParam0))
			{
				__LIB_0__::func_123(Local_1389.f_138, 32);
				__LIB_0__::func_123(Local_1389.f_138, 128);
				__LIB_0__::func_121(Local_1389.f_138, 1);
				PERSCHAR::_0xB65E7F733956CF25(PERSCHAR::_0x112DDF56300BC6E5(__LIB_0__::func_118(Local_1389.f_138)));
				__LIB_8__::func_131(&Local_1389, 512);
				__LIB_1__::func_949(Local_1389.f_138, 0);
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1986792065, 1);
				__LIB_3__::func_123(1986792065, 1);
				iLocal_23 = 11;
			}
			break;
		case 11:
			break;
	}
	return 0;
}

Vector3 func_708()
{
	return -445.7555f, 498.7224f, 97.94028f;
}

bool func_709(int iParam0)
{
	bool bVar0;
	if (!__LIB_4__::func_241(536870912))
	{
		if (!__LIB_2__::func_763(Local_1389.f_138, 0))
		{
			__LIB_8__::func_123(Local_1389.f_138, 1, 1);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_1794[0]))
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_1818);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_1794[0], true, false), 1f, -1, 5f, 1, 40000f);
			TASK::TASK_MOUNT_ANIMAL(0, iLocal_1794[0], -1, -1, 1f, 1, 0, 0);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -450.4879f, 553.2806f, 103.5783f, 1f, -1, 0.25f, 0, 40000f);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_1818);
			TASK::TASK_PERFORM_SEQUENCE(*iParam0, iLocal_1818);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_1818);
		}
		__LIB_8__::func_131(&Local_1389, 512);
		__LIB_13__::func_187(32768);
		func_5(536870912);
	}
	else if (!__LIB_0__::func_163(*iParam0, 242628503) && PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(*iParam0, true))
	{
		__LIB_3__::func_897(*iParam0, 76, "HMSTD_FOREMAN", 0);
		return true;
	}
	return false;
}

bool func_710(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1855))
	{
		iLocal_1855 = __LIB_3__::func_659(1986792065, 1, 0);
		return false;
	}
	if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_1855) && !OBJECT::IS_DOOR_CLOSED(1986792065))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0) && __LIB_1__::func_205(*iParam0, iLocal_1759[3], 1, 0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_DEAD(Global_35) && __LIB_1__::func_205(Global_35, iLocal_1759[3], 1, 0))
	{
		return false;
	}
	if (__LIB_2__::func_118(iLocal_1855, 1, 1) < 8f)
	{
		return false;
	}
	return true;
}

void func_747(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	__LIB_2__::func_411(&(Local_125[iParam0 /*52*/][iParam1 /*17*/]), bParam2, 0);
}

struct<5> func_796(int iParam0, bool bParam1, bool bParam2)
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
				if (!func_798(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_798(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
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

int func_797(int iParam0, int iParam1)
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
		case 8:
			return -1911121386;
		case 9:
			return 1756656691;
		case 10:
			return -1774867076;
		case 11:
			return -421952220;
		case 12:
			return -1087003323;
		case 13:
			return 1231618917;
		case 14:
			return -1183777174;
		case 15:
			return -841767082;
		case 16:
			return 1043717005;
		case 17:
			return 142663787;
		case 18:
			return 1718143051;
		case 19:
			return -6605744;
		case 20:
			return 953047564;
		case 21:
			return 769706682;
		case 22:
			return 1635590003;
		case 23:
			return -2047978619;
		case 24:
			return -586319254;
		case 25:
			return 249896112;
		case 26:
			return -1060513333;
		case 27:
			return 1317351007;
		case 28:
			return -500478573;
		case 29:
			return -806573802;
		case 30:
			return -1109949204;
		case 31:
			return -740156546;
		case 32:
			return -684532710;
		case 33:
			return 1158805436;
		case 34:
			return -559473670;
		case 35:
			return -797147251;
		case 36:
			return -382216265;
		case 37:
			return 1419177114;
		case 38:
			return 1704297235;
		case 39:
			return -1139016418;
		case 40:
			return 897705377;
		case 41:
			return 17961769;
		case 42:
			return 205582207;
		case 43:
			return 900740963;
		case 44:
			return -1369589344;
		case 45:
			return -1695823795;
		case 46:
			return -41453074;
		case 47:
			return 539767227;
		case 48:
			return 1210490314;
		case 49:
			return -399684751;
		case 50:
			return 2138893455;
		case 51:
			return -1617010487;
		case 52:
			return -832377028;
		case 53:
			return -428040245;
		case 54:
			return 1279288897;
		case 55:
			return -594897905;
		case 56:
			return -1360459240;
		case 57:
			return 1838428396;
		case 58:
			return -1467846997;
		case 59:
			return -490610263;
		case 60:
			return -1885413079;
		case 61:
			return 708884155;
		case 62:
			return -134459952;
		case 63:
			return -1912136700;
		case 64:
			return -1268031552;
		case 65:
			return 1177953227;
		case 66:
			return 2130805296;
		case 67:
			return 38093490;
		case 68:
			return -269153218;
		case 69:
			return -1995068011;
		case 70:
			return -164284834;
		case 71:
			return 1446463345;
		case 72:
			return 1501315823;
		case 73:
			return -750379482;
		case 74:
			return -929560937;
		case 75:
			return 608323241;
		case 76:
			return 1030796013;
		case 77:
			return 1915057434;
		case 78:
			return -1582276476;
		case 79:
			return 692059311;
		case 80:
			return 2062839241;
		case 81:
			return -1884531872;
		case 82:
			return -866434534;
		case 83:
			return -1252192421;
		case 84:
			return 1243288963;
		case 85:
			return -1953772189;
		case 86:
			return 754411745;
		case 87:
			return 545309006;
		case 88:
			return -1089810811;
		case 89:
			return 1957869400;
		case 90:
			return -241412332;
		case 91:
			return -1548010959;
		case 92:
			return 550150488;
		case 93:
			return 946565453;
		case 94:
			return 434443248;
		case 95:
			return -1709914938;
		case 96:
			return 366686112;
		case 97:
			return -1370063350;
		case 98:
			return 2126829550;
		case 99:
			return 226552910;
		case 100:
			return 721193431;
		case 101:
			return -315672460;
		case 102:
			return 623544501;
		case 103:
			return 259556714;
		case 104:
			return -2125361825;
		case 105:
			return 1078230356;
		case 106:
			return 1885364811;
		case 107:
			return 1630382737;
		case 108:
			return 1738245512;
		case 109:
			return 1540262216;
		case 110:
			return 1016871472;
		case 111:
			return 13829069;
		case 112:
			return 737051352;
		case 113:
			return 1734614610;
		case 114:
			return -208715295;
		case 115:
			return 1435062936;
		case 116:
			return 1483055553;
		case 117:
			return 380335002;
		case 118:
			return -1079385677;
		case 119:
			return 676610411;
		case 120:
			return 2145419552;
		case 121:
			return 657238733;
		case 122:
			return 1850579281;
		case 123:
			return -1923957384;
		case 124:
			return -1142828108;
		case 125:
			return -1400618531;
		case 126:
			return -1433857135;
		case 127:
			return 209987206;
		case 128:
			return 1686943047;
		case 129:
			return -59178517;
		case 130:
			return 2134884601;
		case 131:
			return 651707517;
		case 132:
			return -633788535;
		case 133:
			return 116394463;
		case 134:
			return -1196973875;
		case 135:
			return 801752086;
		case 136:
			return 184475332;
		case 137:
			return -1880922659;
		case 138:
			return -898138634;
		case 139:
			return -2107418444;
		case 140:
			return -679970099;
		case 141:
			return -1531392549;
		case 142:
			return 1612483376;
		case 143:
			return 463930900;
		case 144:
			return -632148238;
		case 145:
			return 55303249;
		case 146:
			return 2108322089;
		case 147:
			return -1358896714;
		case 148:
			return 74475632;
		case 149:
			return -28710953;
		case 150:
			return -1791599168;
		case 151:
			return 1605938169;
		case 152:
			return 1255242276;
		case 153:
			return 636467727;
		case 154:
			return -1567688525;
		case 155:
			return -77886679;
		case 156:
			return -1057900679;
		case 157:
			return -1960888134;
		case 158:
			return -1719717295;
		case 159:
			return -1779244911;
		case 160:
			return -670540863;
		case 161:
			return 223362311;
		case 162:
			return 1150824567;
		case 163:
			return 974471191;
		case 164:
			return 1989683968;
		case 165:
			return 254804477;
		case 166:
			return 192057609;
		case 167:
			return 1553957817;
		case 168:
			return 2099829015;
		case 169:
			return -840300007 /* GXTEntry: "Extremely durable, hand tooled Off-Hand Holster with elaborate rattlesnake and sk" +
    "ull decoration." */;
		case 170:
			return -1948423372;
		case 171:
			return 981083654;
		case 172:
			return 1283289876;
		case 173:
			return -606884489;
		case 174:
			return -100418572;
		case 175:
			return 663645231;
		case 176:
			return 1442217033;
		case 177:
			return 1410986244;
		case 178:
			return 847409839;
		case 179:
			return 923926911;
		case 180:
			return 109995826;
		case 181:
			return -747412737;
		case 182:
			return 1114341727;
		case 183:
			return -539456939;
		case 184:
			return 45887121;
		case 185:
			return 913271624;
		case 186:
			return -1652812715;
		case 187:
			return -1791365775;
		case 188:
			return -979299941;
		case 189:
			return 713062001;
		case 190:
			return -575045963;
		case 191:
			return 1852965262;
		case 192:
			return -1398836354;
		case 193:
			return -1829885298;
		case 194:
			return -1773850357;
		case 195:
			return -564258009;
		case 196:
			return 2016532685;
		case 197:
			return -1070563798;
		case 198:
			return -1619221343;
		case 199:
			return -345571691;
		case 200:
			return 544288390;
		case 201:
			return 159578294;
		case 202:
			return -76852849;
		case 203:
			return 1110295244;
		case 204:
			return 2104563477;
		case 205:
			return 1947827651;
		case 206:
			return -933072766;
		case 207:
			return 2104388648;
		case 208:
			return -1677140601;
		case 209:
			return -2133097881;
		case 210:
			return -826678792;
		case 211:
			return -513522325;
		case 212:
			return 1970588249;
		case 213:
			return -2080032591;
		case 214:
			return 1758847745;
		case 215:
			return 895010282;
		case 216:
			return -511891179;
		case 217:
			return -1207567168;
		case 218:
			return -1315407613;
		case 219:
			return 1786352060;
		case 220:
			return -833319691;
		case 221:
			return 1591329969;
		case 222:
			return 2123222014;
		case 223:
			return -1578397674;
		case 224:
			return 1473261684;
		case 225:
			return -241855024;
		case 226:
			return 12999093;
		case 227:
			return -6796437;
		case 228:
			return -268116367;
		case 229:
			return -636470867;
		case 230:
			return 1737668280;
		case 231:
			return 892807236;
		case 232:
			return -733247890;
		case 233:
			return 24047176;
		case 234:
			return -1561999014;
		case 235:
			return -2052774042;
		case 236:
			return joaat("SLOTID_HORSE_BEDROLL");
		case 237:
			return joaat("SLOTID_HORSE_BLANKET");
		case 238:
			return joaat("SLOTID_HORSE_CANTLE");
		case 239:
			return joaat("SLOTID_HORSE_FENDER");
		case 240:
			return joaat("SLOTID_HORSE_HORN");
		case 241:
			return joaat("SLOTID_HORSE_INSURANCE");
		case 242:
			return 802754820;
		case 243:
			return joaat("SLOTID_HORSE_MANE");
		case 244:
			return -1886147520;
		case 245:
			return joaat("SLOTID_HORSE_REINS");
		case 246:
			return joaat("SLOTID_HORSE_SADDLE");
		case 247:
			return 1221327846;
		case 248:
			return 923162715;
		case 249:
			return 625423581;
		case 250:
			return 326668608;
		case 251:
			return 669530755;
		case 252:
			return 429759982;
		case 253:
			return -2111934838;
		case 254:
			return 1886178087;
		case 255:
			return 1587783573;
		case 256:
			return -279722001;
		case 257:
			return joaat("SLOTID_HORSE_SADDLEBAG");
		case 258:
			return 724026534;
		case 259:
			return joaat("SLOTID_HORSE_SEAT");
		case 260:
			return joaat("SLOTID_HORSE_SEX");
		case 261:
			return joaat("SLOTID_HORSE_SKIRT");
		case 262:
			return -1824203570;
		case 263:
			return -1654197998;
		case 264:
			return 798987653;
		case 265:
			return 976923323;
		case 266:
			return 1167442289;
		case 267:
			return joaat("SLOTID_HORSE_STIRRUP");
		case 268:
			return joaat("SLOTID_HORSE_TAIL");
		case 269:
			return -2015960939;
		case 270:
			return 1132377945;
		case 271:
			return 739936401;
		case 272:
			return 1201880974;
		case 273:
			return 819728896;
		case 274:
			return 1746010219;
		case 275:
			return 1433393959;
		case 276:
			return -1287636759;
		case 277:
			return -706917073;
		case 278:
			return -2166805;
		case 279:
			return -1391602433;
		case 280:
			return 1782075221;
		case 281:
			return 1282544585;
		case 282:
			return 1732594027;
		case 283:
			return -1058817012;
		case 284:
			return 1090546265;
		case 285:
			return -1783120823;
		case 286:
			return -1535745896;
		case 287:
			return -2086922122;
		case 288:
			return -1675198649;
		case 289:
			return 1189497682;
		case 290:
			return -1565675519;
		case 291:
			return -268973591;
		case 292:
			return 1039159916;
		case 293:
			return 1111816631;
		case 294:
			return 405591388;
		case 295:
			return 897456793;
		case 296:
			return 104187473;
		case 297:
			return 773808542;
		case 298:
			return -1120669954;
		case 299:
			return -1389278274;
		case 300:
			return 552979403;
		case 301:
			return -1571578784;
		case 302:
			return -708312114;
		case 303:
			return 688823508;
		case 304:
			return -1622147240;
		case 305:
			return 830292162;
		case 306:
			return 226276782;
		case 307:
			return -678416628;
		case 308:
			return -1098528034;
		case 309:
			return 316207340;
		case 310:
			return -1909200748;
		case 311:
			return -939652363;
		case 312:
			return joaat("SLOTID_PROGRESSION");
		case 313:
			return -375447933;
		case 314:
			return 537014919;
		case 315:
			return 1784584921;
		case 316:
			return -140655024;
		case 317:
			return 1084182731;
		case 318:
			return -1045471300;
		case 319:
			return 1617414719;
		case 320:
			return -787761753;
		case 321:
			return -490616606;
		case 322:
			return 1491346514;
		case 323:
			return -1360128126;
		case 324:
			return -1311702610;
		case 325:
			return -904250715;
		case 326:
			return 1034665895;
		case 327:
			return -101524555;
		case 328:
			return 1419152594;
		case 329:
			return -451359317;
		case 330:
			return -1915385310;
		case 331:
			return 1315162488;
		case 332:
			return -361152079;
		case 333:
			return -2041626192;
		case 334:
			return -2077812539;
		case 335:
			return -1371514637;
		case 336:
			return 1730017037;
		case 337:
			return 892816668;
		case 338:
			return -1994943603;
		case 339:
			return 603133554;
		case 340:
			return -30160144;
		case 341:
			return -1248299493;
		case 342:
			return 727393558;
		case 343:
			return 755611221;
		case 344:
			return -170255458;
		case 345:
			return 1011151573;
		case 346:
			return 1122339631;
		case 347:
			return 454815308;
		case 348:
			return 990701735;
		case 349:
			return -246340825;
		case 350:
			return -1410671073;
		case 351:
			return 1547608292;
		case 352:
			return -714132970;
		case 353:
			return 732290690;
		case 354:
			return 971340545;
		case 355:
			return -234132662;
		case 356:
			return -2143057988;
		case 357:
			return -993947465;
		case 358:
			return -486552269;
		case 359:
			return -1156317860;
		case 360:
			return 1229625803;
		case 361:
			return -388596167;
		case 362:
			return -1204639465;
		case 363:
			return -1384685096;
		case 364:
			return -2026728113;
		case 365:
			return -1228057307;
		case 366:
			return 1835126290;
		case 367:
			return 1890833594;
		case 368:
			return -751549960;
		case 369:
			return -1682270750;
		case 370:
			return -1839865333;
		case 371:
			return -1990383629;
		case 372:
			return 1712094016;
		case 373:
			return 1532953697;
		case 374:
			return 1620318083;
		case 375:
			return -307230331;
		case 376:
			return -1034549620;
		case 377:
			return -1293064293;
		case 378:
			return -1540142553;
		case 379:
			return -1769886012;
		case 380:
			return -1983081126;
		case 381:
			return -1106117124;
		case 382:
			return -1873108338;
		case 383:
			return -2097543219;
		case 384:
			return 155413195;
		case 385:
			return -1162387149;
		case 386:
			return 1728382685 /* GXTEntry: "Right" */;
		case 387:
			return -649335959 /* GXTEntry: "Left" */;
		case 388:
			return -1876502240;
		case 389:
			return -2107032155;
		case 390:
			return 1570861011;
		case 391:
			return 1075981185;
		case 392:
			return 960195961;
		case 393:
			return 1150460649;
		case 394:
			return 1689424794;
		case 395:
			return 619103418;
		case 396:
			return 1355448197;
		case 397:
			return 1681762005;
		case 398:
			return 1026887814;
		case 399:
			return 354352628;
		case 400:
			return 1519366642;
		case 401:
			return -82757515;
		case 402:
			return 386306655;
		case 403:
			return 1243962119;
		case 404:
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
bool func_798(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return __LIB_0__::func_800(iParam0, *uParam1, iParam2, bParam3) > 0;
}

int func_812(int iParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
						return func_812(iParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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

int func_824(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 65536;
		case 2:
			return 131072;
		default:
			break;
	}
	return 0;
}

int func_825(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 16;
		case 1:
			return 4;
		case 2:
			return 8;
		default:
			break;
	}
	return 0;
}

int func_826(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 536870912;
		case 1:
			return 1073741824 /* Float: 2f */;
		case 2:
			return -2147483648;
		default:
			break;
	}
	return 0;
}

void func_827(int iParam0, int iParam1, int iParam2, int* iParam3, var uParam4, bool bParam5, int iParam6)
{
	PED::_0x24C82EF607105FAA(iParam0, iParam6);
	PED::_0xE737D5F14304A2EC(iParam0, PLAYER::PLAYER_ID(), 120000);
	__LIB_4__::func_356(&iParam0, iParam3, uParam4, bParam5, 1);
	__LIB_2__::func_56(iParam0, 1, 1);
	__LIB_13__::func_187(iParam1);
	func_141(iParam2);
	func_141(2097152);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, false);
	PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), iParam0, 7, 0, 1);
	AUDIO::STOP_PED_SPEAKING(iParam0, false);
	if (iParam0 == iLocal_1768[1] || iParam0 == iLocal_1768[2])
	{
		func_5(8388608);
	}
}

void func_828(int iParam0, int iParam1, char* sParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	__LIB_1__::func_484(Local_125[iParam0 /*52*/][iParam1 /*17*/].f_6, sParam2, 0);
	Local_125[iParam0 /*52*/][iParam1 /*17*/].f_5 = sParam2;
}

void func_829(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	__LIB_3__::func_158(&(Local_125[iParam0 /*52*/][iParam1 /*17*/]), bParam2);
}

void func_830(int iParam0)
{
	if (iParam0 == 0)
	{
		__LIB_13__::func_187(134217728);
	}
}

bool func_833(int iParam0)
{
	if (__LIB_2__::func_117(64))
	{
		return false;
	}
	if (!(__LIB_1__::func_205(__LIB_2__::func_963(67), iLocal_1759[3], 1, 0) && __LIB_1__::func_205(__LIB_2__::func_963(68), iLocal_1759[3], 1, 0)))
	{
		return false;
	}
	if (__LIB_1__::func_205(Global_35, iLocal_1759[3], 1, 0))
	{
		return false;
	}
	if (__LIB_2__::func_118(iParam0, 1, 1) < 20f)
	{
		return false;
	}
	if (OBJECT::IS_DOOR_CLOSED(1986792065))
	{
		return true;
	}
	if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
	{
		return false;
	}
	return true;
}

bool func_837(float fParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (__LIB_7__::func_924(&Local_1389, 256))
		{
			return true;
		}
	}
	if (__LIB_1__::func_285(&(vLocal_1578[1 /*3*/]), fParam0))
	{
		return true;
	}
	return false;
}

bool func_838(int iParam0)
{
	int iVar0;
	if (!__LIB_2__::func_763(iParam0, 0))
	{
		return false;
	}
	iVar0 = __LIB_2__::func_963(iParam0);
	if (PED::IS_PED_USING_ANY_SCENARIO(iVar0))
	{
		return true;
	}
	if (TASK::GET_IS_TASK_ACTIVE(iVar0, 3))
	{
		return false;
	}
	return true;
}

void func_839(int iParam0, int iParam1)
{
	if ((iLocal_27 > 2 && iLocal_27 < 10) || iLocal_27 == 0)
	{
		if (!TASK::GET_IS_TASK_ACTIVE(*iParam0, 3))
		{
			func_990(iParam1);
		}
	}
}

int func_840()
{
	if (iLocal_18 < 4 && !__LIB_7__::func_924(&Local_1389, 256))
	{
		if (!__LIB_0__::func_27(Global_40.f_9096[Local_1389.f_136 /*12*/].f_6, 2))
		{
			return 0;
		}
		else if (!__LIB_0__::func_27(Global_40.f_9096[Local_1389.f_136 /*12*/].f_6, 16))
		{
			return 1;
		}
		else if (!__LIB_0__::func_27(Global_40.f_9096[Local_1389.f_136 /*12*/].f_6, 128))
		{
			if (iLocal_18 == 2)
			{
				return 2;
			}
		}
	}
	return -1;
}

void func_842(var uParam0, var uParam1, int iParam2)
{
	switch (iParam2)
	{
		case 0:
		case default:
			switch (iLocal_18)
			{
				case 1:
					*uParam0 = { -439.948f, 502.663f, 96.99f };
					*uParam1 = { 0f, 0f, 179.819f };
					break;
				case 2:
					*uParam0 = { -439.944f, 502.624f, 96.99f };
					*uParam1 = { 0f, 0f, 179.819f };
					break;
				case 3:
					*uParam0 = { -436.153f, 500.937f, 96.99f };
					*uParam1 = { 0f, 0f, 90.416f };
					break;
			}
			break;
		case 1:
			switch (iLocal_18)
			{
				case 1:
					*uParam0 = { -438.552f, 502.693f, 96.99f };
					*uParam1 = { 0f, 0f, 179.819f };
					break;
				case 2:
					*uParam0 = { -438.547f, 502.651f, 96.99f };
					*uParam1 = { 0f, 0f, 179.819f };
					break;
				case 3:
					*uParam0 = { -444.01f, 493.414f, 97.116f };
					*uParam1 = { 0f, 0f, 0.51f };
					break;
			}
			break;
		case 2:
			switch (iLocal_18)
			{
				case 2:
					*uParam0 = { -431.098f, 499.764f, 97.157f };
					*uParam1 = { 0f, 0f, 92.19f };
					break;
				case 3:
					*uParam0 = { -433.973f, 499.416f, 97.928f };
					*uParam1 = { 0f, 0f, 0.425f };
					break;
			}
			break;
	}
}

void func_843()
{
	iLocal_27 = iLocal_28;
	if (iLocal_27 < 11)
	{
		iLocal_28 = iLocal_27 + 1;
	}
}

void func_844(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (iVar1 == 1)
			{
			}
			else
			{
				if (iVar0 == iParam0)
				{
					__LIB_8__::func_26(&(Local_1618[2 /*7*/]), func_514(iVar0, iVar1));
				}
				else
				{
					__LIB_8__::func_61(&(Local_1618[2 /*7*/]), func_514(iVar0, iVar1));
				}
				iVar2 = 0;
				while (iVar2 < 3)
				{
					if (iVar2 == 2)
					{
					}
					else if (iVar0 == iParam0)
					{
						if (!__LIB_8__::func_348(&(Local_1618[2 /*7*/]), func_992(iVar0, iVar1, iVar2)) && !__LIB_8__::func_60(&(Local_1618[2 /*7*/]), func_992(iVar0, iVar1, iVar2)))
						{
							__LIB_8__::func_26(&(Local_1618[2 /*7*/]), func_992(iVar0, iVar1, iVar2));
						}
					}
					else if (__LIB_8__::func_348(&(Local_1618[2 /*7*/]), func_992(iVar0, iVar1, iVar2)) && __LIB_8__::func_60(&(Local_1618[2 /*7*/]), func_992(iVar0, iVar1, iVar2)))
					{
						__LIB_8__::func_61(&(Local_1618[2 /*7*/]), func_992(iVar0, iVar1, iVar2));
					}
					iVar2++;
				}
			}
			iVar1++;
		}
		iVar0++;
	}
}

int func_846(int iParam0)
{
	switch (iParam0)
	{
		case 64:
			return 0;
		case 65:
			return 1;
		case 66:
			return 2;
		default:
			break;
	}
	return -1;
}

char[] func_847(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return "PBL_ENTER";
		case 3:
			return "PBL_B_01_SEC_01";
		case 4:
			return "PBL_B_01_SEC_02";
		case 5:
			return "PBL_TRANS_01";
		case 6:
			return "PBL_B_02_SEC_01";
		case 7:
			return "PBL_B_02_SEC_02";
		case 8:
			return "PBL_TRANS_02";
		case 9:
			return "PBL_B_03_SEC_01";
		case 10:
			return "PBL_EXIT";
		default:
			break;
	}
	return "";
}

void func_848(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	if (func_994(iParam0, iParam1))
	{
		if (__LIB_10__::func_282(262144))
		{
			return;
		}
		iVar0 = __LIB_3__::func_112(*iParam0, Global_35, 1060437492 /* Float: 0.707f */);
		if (iVar0 == 1)
		{
			iVar0 = __LIB_3__::func_112(*iParam0, Global_35, 1f);
		}
		iVar1 = iLocal_334;
		if (iVar1 == -1)
		{
			if (PED::_0x9337183FDA2E9035(*iParam0, PLAYER::GET_PLAYER_INDEX()))
			{
				iVar1 = 0;
			}
			else
			{
				iVar1 = 1;
			}
		}
		if (__LIB_8__::func_348(&(Local_1618[2 /*7*/]), func_992(iLocal_29, iVar0, iVar1)))
		{
			__LIB_8__::func_418(&(Local_1618[2 /*7*/]), func_992(iLocal_29, iVar0, iVar1), 1);
			func_141(262144);
			__LIB_8__::func_331(0);
			if (iLocal_28 == 11)
			{
				iLocal_28 = 10;
			}
		}
		else
		{
			__LIB_8__::func_26(&(Local_1618[2 /*7*/]), func_992(iLocal_29, iVar0, iVar1));
		}
	}
}

void func_849(int iParam0, float fParam1)
{
	if (fParam1 < 0f)
	{
		__LIB_4__::func_168(&(Local_125[iParam0 /*52*/][0 /*17*/]), 0);
		__LIB_4__::func_168(&(Local_125[iParam0 /*52*/][1 /*17*/]), 0);
		__LIB_4__::func_168(&(Local_125[iParam0 /*52*/][2 /*17*/]), 0);
	}
	else
	{
		__LIB_3__::func_362(&(Local_125[iParam0 /*52*/][0 /*17*/]), fParam1);
		__LIB_3__::func_362(&(Local_125[iParam0 /*52*/][1 /*17*/]), fParam1);
		__LIB_3__::func_362(&(Local_125[iParam0 /*52*/][2 /*17*/]), fParam1);
	}
}

void func_866(int iParam0, int iParam1, bool bParam2)
{
	if (!__LIB_0__::func_625(iParam0))
	{
		return;
	}
	if (bParam2)
	{
		__LIB_8__::func_82(iParam0, iParam1);
	}
	else
	{
		__LIB_8__::func_83(iParam0, iParam1);
	}
}

char[] func_868()
{
	switch (iLocal_1641)
	{
		case 0:
			return "HOME_LN02ANA";
		case 1:
			return "HOME_LN03ANA";
		case 2:
			return "HOME_LN04ANA";
		default:
			break;
	}
	return "";
}

void func_869(int iParam0, bool bParam1)
{
	if (*iParam0 != 3)
	{
		if (!__LIB_2__::func_1(iParam0->f_40, 0, 1))
		{
			*iParam0 = 3;
		}
	}
	switch (*iParam0)
	{
		case 0:
			__LIB_3__::func_898(iParam0->f_40, Global_35, &(iParam0->f_1), iParam0->f_41, 0, 0, iParam0->f_43, iParam0->f_44, 1, 8, 0, 0, 1069547520 /* Float: 1.5f */, 1073741824 /* Float: 2f */, 1050253722 /* Float: 0.3f */, 1067030938 /* Float: 1.2f */, 0, 0, -1, 1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1);
			if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_39))
			{
				iParam0->f_39 = VOLUME::_CREATE_VOLUME_CYLINDER(Global_36, 0f, 0f, 0f, 5f, 5f, 5f);
			}
			*iParam0 = 1;
			break;
		case 1:
			if (__LIB_8__::func_115(iParam0))
			{
				if (bParam1)
				{
					TASK::CLEAR_PED_TASKS(iParam0->f_40, true, false);
				}
				__LIB_3__::func_898(iParam0->f_40, Global_35, &(iParam0->f_1), iParam0->f_41, 0, 0, iParam0->f_43, iParam0->f_44, 1, 8, 0, 0, 1069547520 /* Float: 1.5f */, 1073741824 /* Float: 2f */, 1050253722 /* Float: 0.3f */, 1067030938 /* Float: 1.2f */, 0, 0, -1, 1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1);
				__LIB_2__::func_966(iParam0->f_40, Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
				*iParam0 = 2;
			}
			break;
		case 2:
			__LIB_2__::func_966(iParam0->f_40, Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
			if (!__LIB_8__::func_115(iParam0))
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(iParam0->f_40, Global_35, -1, -1f, -1f, -1f);
				*iParam0 = 1;
			}
			break;
		case 3:
			break;
	}
}

void func_874(int iParam0, int iParam1, int iParam2, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11, var uParam12, int iParam13, bool bParam14, int iParam15)
{
	vector3 vVar0[3];
	vector3 vVar10[3];
	int iVar20;
	int iVar21;
	int iVar22;
	char cVar23[32];
	int iVar27;
	if (iParam0 <= -1)
	{
		return;
	}
	if (bParam14)
	{
		iVar20 = __LIB_3__::func_799(iParam0, iParam1);
		__LIB_7__::func_440(&vVar0, &vVar10, iVar20, vParam3, vParam6, iParam9, iParam10, iParam11);
	}
	iVar21 = iParam2;
	iVar22 = 0;
	while (iVar22 < 3)
	{
		StringCopy(&cVar23, "", 32);
		iVar27 = 0;
		if (iVar21 > 0)
		{
			StringCopy(&cVar23, __LIB_3__::func_800(iParam0, 3), 32);
			iVar21 = (iVar21 - 1);
			iVar27 = 1;
		}
		__LIB_19__::func_147(iParam0, __LIB_3__::func_801(iParam0), iVar27, bParam14, &cVar23, vVar0[iVar22 /*3*/], vVar10[iVar22 /*3*/], vParam6, iVar22, 0, -1082130432 /* Float: -1f */, uParam12, iParam13, iParam15);
		iVar22++;
	}
}

Vector3 func_877()
{
	return -435.3392f, 524.2387f, 97.60092f;
}

int func_883(int iParam0, vector3 vParam1, bool bParam4, int iParam5, int iParam6, float fParam7, float fParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	if (iParam5 < 0 || iParam5 >= *iParam0)
	{
		iParam5 = 0;
	}
	if (iParam6 < 0 || iParam6 >= *iParam0)
	{
		iParam6 = (*iParam0 - 1);
	}
	if (fParam7 < 0f)
	{
		fParam7 = 0f;
	}
	if (fParam8 < 0f)
	{
		fParam8 = 999999.9f;
	}
	if (fParam7 > fParam8)
	{
	}
	iVar1 = 0;
	fVar3 = 1E+07f;
	iVar0 = iParam5;
	while (iVar0 <= iParam6)
	{
		if (!bParam4 || !ENTITY::IS_ENTITY_DEAD((*iParam0)[iVar0]))
		{
			fVar2 = __LIB_0__::func_94((*iParam0)[iVar0], vParam1, 1);
			if (fVar2 < fVar3)
			{
				if (fVar2 >= fParam7 && fVar2 <= fParam8)
				{
					fVar3 = fVar2;
					iVar1 = (*iParam0)[iVar0];
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_885()
{
	if (!func_402(1))
	{
		if (__LIB_1__::func_205(Global_35, Global_1392194[Local_1389.f_136 /*10*/].f_5, 1, 0))
		{
			__LIB_3__::func_353("SP_EVENT_AREA_CASTORS_2_START", 0);
			func_401(1);
		}
	}
}

bool func_887()
{
	int iVar0;
	if (__LIB_4__::func_241(32))
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < Local_386.f_1)
	{
		if (__LIB_2__::func_215(iLocal_1794[iVar0], Global_35, 0, 45f, 0) && PED::IS_PED_FACING_PED(iLocal_1794[iVar0], Global_35, 67.5f))
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_1818);
			TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, 1000, false, 1);
			TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(0, ENTITY::GET_ENTITY_COORDS(__LIB_2__::func_963(Local_1389.f_138), true, false), 60f, 0, 16);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_1818);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_1794[iVar0], iLocal_1818);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_1818);
			func_5(32);
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_888()
{
	if (!__LIB_2__::func_227(0, 1, iLocal_1794[0], 1))
	{
		return false;
	}
	if (!__LIB_1__::func_285(&(vLocal_1578[8 /*3*/]), 10f))
	{
		return false;
	}
	if (!func_889(Global_35, &iLocal_1794, 45f, 0, 0))
	{
		return false;
	}
	return true;
}

bool func_889(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *iParam1)
	{
		if ((bParam3 || __LIB_2__::func_1((*iParam1)[iVar0], 0, !bParam4)) && __LIB_0__::func_665(iParam0, (*iParam1)[iVar0], 1, 1) < fParam2)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_893(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_828(iParam0, 0, __LIB_2__::func_460(7));
	Local_125[iParam0 /*52*/][0 /*17*/].f_14 = 0;
	__LIB_1__::func_491(&(Local_125[iParam0 /*52*/][0 /*17*/]), 1);
	func_747(iParam0, 0, !__LIB_8__::func_332(8388608));
	func_829(iParam0, 0, 0);
	func_828(iParam0, 1, __LIB_2__::func_460(10));
	func_747(iParam0, 1, 1);
	func_829(iParam0, 1, 0);
	func_828(iParam0, 2, __LIB_2__::func_460(12));
	func_829(iParam0, 2, 1);
	func_830(iParam0);
}

void func_908(int iParam0, char* sParam1, int iParam2, int iParam3)
{
	int iVar0;
	iVar0 = __LIB_3__::func_970(iParam0);
	__LIB_0__::func_974(iVar0);
	__LIB_1__::func_103(iParam3, sParam1, iParam2);
}

void func_912(var uParam0)
{
	int iVar0;
	if (uParam0->f_75 != 0)
	{
		__LIB_1__::func_616(uParam0->f_75, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
	}
	else if (uParam0->f_70 != 0)
	{
		__LIB_1__::func_797(uParam0->f_70, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
	}
	if (__LIB_0__::func_144(uParam0->f_74, 0))
	{
		func_1039(uParam0->f_74, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	}
	if (uParam0->f_72 != 0)
	{
		if (uParam0->f_71)
		{
			iVar0 = (__LIB_3__::func_256() + uParam0->f_72);
			__LIB_3__::func_216(iVar0);
		}
		else
		{
			__LIB_8__::func_227(uParam0->f_72, 1);
		}
	}
	if (uParam0->f_73 != 9)
	{
		__LIB_1__::func_715(uParam0->f_73, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
	}
}

bool func_920(bool bParam0)
{
	float fVar0;
	fVar0 = __LIB_4__::func_195(1986792065);
	if (bParam0)
	{
		if (fVar0 < fLocal_1646)
		{
			return true;
		}
	}
	else if (fVar0 > fLocal_1646)
	{
		return true;
	}
	fLocal_1646 = fVar0;
	return false;
}

void func_990(int iParam0)
{
	int iVar0;
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1618[2 /*7*/]))
	{
		__LIB_8__::func_183(&(Local_1618[2 /*7*/]), Local_386.f_690[2 /*12*/].f_8, "HAMMER");
		__LIB_2__::func_919(Local_386.f_690[2 /*12*/].f_8, 1, 1);
		__LIB_8__::func_183(&(Local_1618[2 /*7*/]), Local_386.f_690[4 /*12*/].f_8, "plank01");
		__LIB_8__::func_183(&(Local_1618[2 /*7*/]), Local_386.f_690[5 /*12*/].f_8, "plank02");
		__LIB_8__::func_183(&(Local_1618[2 /*7*/]), Local_386.f_690[6 /*12*/].f_8, "plank04");
		__LIB_8__::func_183(&(Local_1618[2 /*7*/]), Local_386.f_690[7 /*12*/].f_8, "plank03");
		__LIB_8__::func_183(&(Local_1618[2 /*7*/]), Local_386.f_690[8 /*12*/].f_8, "plank05");
		__LIB_8__::func_183(&(Local_1618[2 /*7*/]), Local_386.f_690[9 /*12*/].f_8, "nail01");
		__LIB_8__::func_183(&(Local_1618[2 /*7*/]), Local_386.f_690[10 /*12*/].f_8, "nail02");
		__LIB_8__::func_183(&(Local_1618[2 /*7*/]), Local_386.f_690[11 /*12*/].f_8, "nail03");
		__LIB_8__::func_183(&(Local_1618[2 /*7*/]), Local_386.f_690[12 /*12*/].f_8, "nail04");
	}
	if (!ENTITY::_IS_ENTITY_FROZEN(Local_386.f_690[2 /*12*/].f_8))
	{
		PHYSICS::ACTIVATE_PHYSICS(Local_386.f_690[2 /*12*/].f_8);
	}
	iVar0 = 4;
	while (iVar0 <= 12)
	{
		if (!ENTITY::_IS_ENTITY_FROZEN(Local_386.f_690[iVar0 /*12*/].f_8))
		{
			PHYSICS::ACTIVATE_PHYSICS(Local_386.f_690[iVar0 /*12*/].f_8);
		}
		iVar0++;
	}
	__LIB_7__::func_952(&(Local_1618[2 /*7*/]));
	__LIB_8__::func_331(11);
	if (__LIB_2__::func_763(iParam0, 0))
	{
		__LIB_2__::func_753(iParam0, 0, 1, 0, 0);
	}
}

char* func_992(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return "PBL_F_POS_KNEEL";
						case 1:
							return "PBL_F_NEG_KNEEL";
					}
					break;
				case 3:
					switch (iParam2)
					{
						case 0:
							return "PBL_BL_POS_KNEEL";
						case 1:
							return "PBL_BL_NEG_KNEEL";
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return "PBL_BR_POS_KNEEL";
						case 1:
							return "PBL_BR_NEG_KNEEL";
					}
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return "PBL_F_POS_STAND01";
						case 1:
							return "PBL_F_NEG_STAND01";
					}
					break;
				case 3:
					switch (iParam2)
					{
						case 0:
							return "PBL_BL_POS_STAND01";
						case 1:
							return "PBL_BL_NEG_STAND01";
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return "PBL_BR_POS_STAND01";
						case 1:
							return "PBL_BR_NEG_STAND01";
					}
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return "PBL_F_POS_STAND02";
						case 1:
							return "PBL_F_NEG_STAND02";
					}
					break;
				case 3:
					switch (iParam2)
					{
						case 0:
							return "PBL_BL_POS_STAND02";
						case 1:
							return "PBL_BL_NEG_STAND02";
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							return "PBL_BR_POS_STAND02";
						case 1:
							return "PBL_BR_NEG_STAND02";
					}
					break;
			}
			break;
	}
	return "";
}

bool func_994(int iParam0, int iParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		return false;
	}
	if (iLocal_27 == 0)
	{
		return false;
	}
	if (iLocal_27 == 5 || iLocal_27 == 8)
	{
		return false;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(*iParam0, -1053617727))
	{
		return false;
	}
	if (PED::_0x9337183FDA2E9035(*iParam0, PLAYER::GET_PLAYER_INDEX()) || PED::_0xA454D234E45BB6E5(*iParam0, PLAYER::GET_PLAYER_INDEX()))
	{
		return true;
	}
	func_142(262144);
	if (func_1109(iLocal_335) != iParam1)
	{
		return false;
	}
	if (iLocal_334 == -1)
	{
		return false;
	}
	return true;
}

int func_1039(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
		return 0;
	}
	if (!func_1174(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_1175(iParam0, &iVar0, iParam1))
	{
		return 0;
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
			__LIB_19__::func_148(iVar5);
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
				func_1039(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
		func_1193(28);
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
					if (__LIB_0__::func_708(0) && func_547(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
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
					if (__LIB_0__::func_708(0) && func_547(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
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
			if (!func_1197(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (__LIB_0__::func_356(iParam0) == joaat("AMMO") && __LIB_0__::func_258(iParam0))
		{
			if (!func_1198(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (__LIB_0__::func_192(iParam0, 866047851))
		{
			func_1199(iParam0);
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
			func_1207(iParam0);
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
			func_1209(iParam0, iParam1);
			__LIB_19__::func_149(iParam0);
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
				return 0;
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
						func_1039(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_1039(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_1039(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_1039(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_1039(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_1039(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_1039(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_1193(24);
				if (Global_1946804.f_1497.f_1[27 /*3*/] == Global_1946804.f_57[27 /*11*/])
				{
					func_1215(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_OFFHAND_HOLSTER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 0);
				}
				if (__LIB_0__::func_918(&iVar9, 0))
				{
					func_547(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case joaat("UPGRADE_BANDOLIER"):
				if (__LIB_0__::func_2() == -1 && Global_1946804.f_1497.f_1[25 /*3*/] == Global_1946804.f_57[25 /*11*/])
				{
					func_1215(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_BANDOLIER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_1"), 1, 1, 1, 0, 1, 0);
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
					func_1039(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_1039(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
			return 0;
		}
		iVar10 = iParam0;
		__LIB_0__::func_371(&iVar10);
		if (!func_1236(iVar10, iVar0, iParam5))
		{
			return 0;
		}
		else if (!__LIB_0__::func_708(0))
		{
			return 1;
		}
		if (__LIB_0__::func_356(iParam0) == joaat("CLOTHING"))
		{
			func_1237(iParam0);
		}
		if (__LIB_0__::func_192(iParam0, -1979000645))
		{
			func_1238(iParam0);
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
				func_1039(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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
		__LIB_3__::func_868(iParam0, iVar0, 0, bVar37, 0);
	}
	return 1;
}

int func_1109(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 64;
		case 1:
			return 65;
		case 2:
			return 66;
		default:
			break;
	}
	return -1;
}

bool func_1174(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (__LIB_0__::func_2() == -1)
	{
		if (__LIB_0__::func_787(iParam0) && func_1331(iParam0))
		{
			__LIB_3__::func_908(iParam0, iParam1, 1, &bParam2, iParam3);
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

bool func_1175(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	*iParam1 = iParam2;
	__LIB_1__::func_111(iParam0, iParam1);
	Var0 = { func_796(iParam0, 0, 1) };
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
	if (func_1337(iParam0, &Var0, *iParam1, 0, 0))
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

void func_1193(int iParam0)
{
	if (!__LIB_0__::func_52(iParam0))
	{
		return;
	}
	__LIB_0__::func_427(iParam0);
	func_1358(iParam0);
}

bool func_1197(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (!func_1337(iParam0, &uVar1, 1, 0, 0))
		{
			__LIB_3__::func_908(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = __LIB_0__::func_940(iVar0);
			if (WEAPON::_IS_WEAPON_SNIPER(iVar0))
			{
				func_547(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("WEAPON_FISHINGROD") || iVar0 == joaat("WEAPON_KIT_BINOCULARS"))
			{
				func_547(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("WEAPON_LASSO"))
			{
				func_547(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
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
					func_547(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_547(iVar0, WEAPON::_GET_WEAPON_CLIP_SIZE(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
			{
				iVar7 = __LIB_0__::func_153(Global_35, 2, 0, 1);
				if ((((__LIB_0__::func_154(iVar7) && !Global_43891) && iVar7 != iVar0) && !__LIB_0__::func_293(24)) && bParam4)
				{
					WEAPON::_0xE9BD19F8121ADE3E(Global_35, iVar7);
				}
				bVar8 = true;
				if (__LIB_0__::func_154(iVar7) && __LIB_0__::func_293(24))
				{
					if (!func_547(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_547(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_547(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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

bool func_1198(int iParam0, int iParam1, int iParam2)
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
		__LIB_1__::func_424(__LIB_0__::func_941(iParam0), __LIB_0__::func_776(iParam0), 1);
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
		return func_1236(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_1199(int iParam0)
{
	var uVar0;
	if ((iParam0 == joaat("PROVISION_TALISMAN_EAGLE_TALON") && !__LIB_0__::func_26()) || iParam0 != joaat("PROVISION_TALISMAN_EAGLE_TALON"))
	{
		if (func_1364(Global_35, iParam0, &uVar0))
		{
			func_1215(PLAYER::PLAYER_PED_ID(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
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

void func_1207(int iParam0)
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
			__LIB_1__::func_450(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_01"), 20), 1, 0);
			__LIB_0__::func_433(1);
			func_1381(-748969569, 0, 0);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_2"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_02"), 1);
			__LIB_1__::func_804(joaat("TAXIDERMY_ORDER_02"), joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_1__::func_832(51, 0, 0, joaat("TAXIDERMY_ORDER_02"), sVar0, 0, -1, 0);
			__LIB_1__::func_450(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_02"), 20), 1, 0);
			__LIB_0__::func_433(8);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_3"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_03"), 1);
			__LIB_1__::func_804(joaat("TAXIDERMY_ORDER_03"), joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_1__::func_832(51, 0, 0, joaat("TAXIDERMY_ORDER_03"), sVar0, 0, -1, 0);
			__LIB_1__::func_450(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_03"), 20), 1, 0);
			__LIB_0__::func_433(64);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_4"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_04"), 1);
			__LIB_1__::func_804(joaat("TAXIDERMY_ORDER_04"), joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_1__::func_832(51, 0, 0, joaat("TAXIDERMY_ORDER_04"), sVar0, 0, -1, 0);
			__LIB_1__::func_450(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_04"), 20), 1, 0);
			__LIB_0__::func_433(512);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_5"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_05"), 1);
			__LIB_1__::func_240(438, 0);
			__LIB_1__::func_804(joaat("TAXIDERMY_ORDER_05"), joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_1__::func_832(51, 0, 0, joaat("TAXIDERMY_ORDER_05"), sVar0, 0, -1, 0);
			__LIB_1__::func_450(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_05"), 20), 1, 0);
			__LIB_0__::func_433(32768);
			break;
		default:
			__LIB_1__::func_240(439, 0);
			break;
	}
}

void func_1209(int iParam0, int iParam1)
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
			func_1382(joaat("EXOTIC_STAGE_01"));
			if (__LIB_0__::func_944() == 0)
			{
				__LIB_0__::func_703(0, 10);
				iVar1 = __LIB_1__::func_805(iParam0, iParam1, 1);
				if (((iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH")) || iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY")) || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
				{
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_01"), iVar1, 0, -1, 0);
						__LIB_1__::func_450(43, 0, 0, iVar1, 30, 1, 0);
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
			func_1382(joaat("EXOTIC_STAGE_02"));
			if (__LIB_0__::func_944() == 1)
			{
				__LIB_0__::func_703(0, 10);
				iVar1 = __LIB_1__::func_805(iParam0, iParam1, 2);
				if ((iParam0 == joaat("PROVISION_HERON_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER")) || iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
				{
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_02"), iVar1, 0, -1, 0);
						__LIB_1__::func_450(43, 0, 0, iVar1, 37, 1, 0);
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
			func_1382(joaat("EXOTIC_STAGE_03"));
			if (__LIB_0__::func_944() == 2)
			{
				__LIB_0__::func_703(0, 10);
				iVar1 = __LIB_1__::func_805(iParam0, iParam1, 4);
				if (iParam0 == joaat("PROVISION_GATOR_EGG"))
				{
					if (!__LIB_0__::func_440(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0)) >= 25)
					{
						__LIB_0__::func_441(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0), 1);
						__LIB_18__::func_102(48);
					}
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						__LIB_1__::func_450(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR") || iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
				{
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						__LIB_1__::func_450(43, 0, 0, iVar1, 40, 1, 0);
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
			func_1382(joaat("EXOTIC_STAGE_04"));
			if (__LIB_0__::func_944() == 3)
			{
				__LIB_0__::func_703(0, 10);
				iVar1 = __LIB_1__::func_805(iParam0, iParam1, 8);
				if (((iParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED")) || iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
				{
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_04"), iVar1, 0, -1, 0);
						__LIB_1__::func_450(43, 0, 0, iVar1, 50, 1, 0);
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
			func_1382(joaat("EXOTIC_STAGE_05"));
			if (__LIB_0__::func_944() == 4)
			{
				__LIB_0__::func_703(0, 10);
				iVar1 = __LIB_1__::func_805(iParam0, iParam1, 16);
				if (((iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL") || iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS")) || iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
				{
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_05"), iVar1, 0, -1, 0);
						__LIB_1__::func_450(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

int func_1215(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	struct<5> Var0;
	int iVar5;
	if (iParam3 == -358215195)
	{
		Var0 = { func_796(iParam1, 1, 0) };
		iParam3 = __LIB_0__::func_709(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_1398(iParam1, iParam2, __LIB_0__::func_161(iParam3, 1), bParam4, bParam9))
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

int func_1236(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	struct<4> Var5;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	Var0 = { func_796(iParam0, 0, 1) };
	Var5 = { __LIB_0__::func_429(iParam0, Var0, Var0.f_4, 0) };
	return func_1413(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_1237(int iParam0)
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
			func_1215(Global_35, iParam0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
		}
		func_1193(24);
		if (__LIB_0__::func_918(&iVar2, 0))
		{
			func_547(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_1238(int iParam0)
{
	if (__LIB_0__::func_192(iParam0, 943695443))
	{
		func_1422(0, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -2096528786))
	{
		func_1422(1, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -1094167013))
	{
		func_1422(2, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1936654645))
	{
		func_1422(3, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1306489306))
	{
		func_1422(4, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 435762317))
	{
		func_1422(5, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1259363210))
	{
		func_1422(6, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 881398259))
	{
		func_1422(7, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -541549214))
	{
		func_1422(8, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 130796156))
	{
		func_1422(-1, iParam0);
	}
}

bool func_1331(int iParam0)
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
		return func_1337(iParam0, &uVar0, 1, 0, 0);
	}
	return __LIB_1__::func_707(iParam0, 1, 0);
}

bool func_1337(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
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
			if (!func_798(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
			{
				return false;
			}
			else if (__LIB_1__::func_429(iParam0, &Var4, 1728382685 /* GXTEntry: "Right" */))
			{
				return false;
			}
			if (__LIB_0__::func_950(iParam0, 1))
			{
				if (!func_798(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
				{
					return false;
				}
				else if (__LIB_1__::func_429(iParam0, &Var4, -649335959 /* GXTEntry: "Left" */))
				{
					return false;
				}
			}
		}
		else if (!func_1481(iParam0, &uVar26, 0))
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

void func_1358(int iParam0)
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
						func_1236(iVar0, 1, 752097756);
					}
					func_1215(Global_35, iVar0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(1013902307, 1, 0))
				{
					func_1236(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(1013902307, 1, 0))
				{
					func_1236(1013902307, 1, 752097756);
				}
				if (!__LIB_1__::func_707(142640135, 1, 0))
				{
					func_1236(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(786809402, 1, 0))
				{
					func_1236(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(786809402, 1, 0))
				{
					func_1236(786809402, 1, 752097756);
				}
				if (!__LIB_1__::func_707(-518019409, 1, 0))
				{
					func_1236(-518019409, 1, 752097756);
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
			func_1521();
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

bool func_1364(int iParam0, int iParam1, var uParam2)
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
	iVar4 = func_1522(iParam1);
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

void func_1381(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			__LIB_0__::func_803(1497516462);
			__LIB_0__::func_804(2016141805);
			__LIB_0__::func_804(1010885152);
			__LIB_0__::func_804(-502324015);
			break;
		case 2016141805:
			__LIB_0__::func_804(1497516462);
			__LIB_0__::func_803(2016141805);
			__LIB_0__::func_804(1010885152);
			__LIB_0__::func_804(-502324015);
			break;
		case 1010885152:
			__LIB_0__::func_804(1497516462);
			__LIB_0__::func_804(2016141805);
			__LIB_0__::func_803(1010885152);
			__LIB_0__::func_804(-502324015);
			break;
		case -502324015:
			__LIB_0__::func_804(1497516462);
			__LIB_0__::func_804(2016141805);
			__LIB_0__::func_804(1010885152);
			__LIB_0__::func_803(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			__LIB_0__::func_804(-538889627);
			__LIB_0__::func_804(-538880323);
			__LIB_0__::func_804(-1056767524);
			__LIB_0__::func_803(iParam0);
			Jump @2853; //curOff = 711
			__LIB_1__::func_73();
			__LIB_0__::func_803(iParam0);
			Jump @2853; //curOff = 724
			__LIB_1__::func_74();
			__LIB_0__::func_803(iParam0);
			Jump @2853; //curOff = 737
			__LIB_0__::func_804(-664252410);
			__LIB_0__::func_804(2109952320);
			__LIB_0__::func_803(2019386373);
			Jump @2853; //curOff = 767
			__LIB_0__::func_804(2019386373);
			__LIB_0__::func_804(2109952320);
			__LIB_0__::func_803(-664252410);
			Jump @2853; //curOff = 797
			__LIB_0__::func_804(2019386373);
			__LIB_0__::func_804(-664252410);
			__LIB_0__::func_803(2109952320);
			Jump @2853; //curOff = 827
			__LIB_0__::func_804(-1835851517);
			__LIB_0__::func_804(-1838352012);
			__LIB_0__::func_803(-1674179981);
			Jump @2853; //curOff = 857
			__LIB_0__::func_804(-1674179981);
			__LIB_0__::func_804(-1838352012);
			__LIB_0__::func_803(-1835851517);
			Jump @2853; //curOff = 887
			__LIB_0__::func_804(-1674179981);
			__LIB_0__::func_804(-1835851517);
			__LIB_0__::func_803(-1838352012);
			Jump @2853; //curOff = 917
			__LIB_0__::func_804(210001842);
			__LIB_0__::func_803(-1717960576);
			Jump @2853; //curOff = 938
			__LIB_0__::func_804(-1717960576);
			__LIB_0__::func_803(210001842);
			Jump @2853; //curOff = 959
			__LIB_0__::func_804(-1271608261);
			__LIB_0__::func_804(1846061697);
			__LIB_0__::func_804(-1145519186);
			__LIB_0__::func_803(-150493654);
			Jump @2853; //curOff = 998
			__LIB_0__::func_804(-150493654);
			__LIB_0__::func_804(1846061697);
			__LIB_0__::func_804(-1145519186);
			__LIB_0__::func_803(-1271608261);
			Jump @2853; //curOff = 1037
			__LIB_0__::func_804(-150493654);
			__LIB_0__::func_804(-1271608261);
			__LIB_0__::func_804(-1145519186);
			__LIB_0__::func_803(1846061697);
			Jump @2853; //curOff = 1076
			__LIB_0__::func_804(-150493654);
			__LIB_0__::func_804(-1271608261);
			__LIB_0__::func_804(1846061697);
			__LIB_0__::func_803(-1145519186);
			Jump @2853; //curOff = 1115
			__LIB_0__::func_804(280705402);
			__LIB_0__::func_804(1926308480);
			__LIB_0__::func_803(1766284049);
			Jump @2853; //curOff = 1145
			__LIB_0__::func_804(1766284049);
			__LIB_0__::func_804(1926308480);
			__LIB_0__::func_803(280705402);
			Jump @2853; //curOff = 1175
			__LIB_0__::func_804(1766284049);
			__LIB_0__::func_804(280705402);
			__LIB_0__::func_803(1926308480);
			Jump @2853; //curOff = 1205
			if (bParam1)
			{
				__LIB_0__::func_804(439465264);
				__LIB_0__::func_803(1609506757);
			}
			else
			{
				__LIB_0__::func_804(1609506757);
				__LIB_0__::func_804(439465264);
			}
			Jump @2853; //curOff = 1252
			if (__LIB_0__::func_898(1609506757))
			{
				if (bParam1)
				{
					__LIB_0__::func_803(439465264);
				}
				else
				{
					__LIB_0__::func_804(439465264);
				}
			}
			Jump @2853; //curOff = 1293
			__LIB_0__::func_804(-1612662716);
			__LIB_0__::func_803(1822001510);
			Jump @2853; //curOff = 1314
			__LIB_0__::func_804(1822001510);
			__LIB_0__::func_803(-1612662716);
			Jump @2853; //curOff = 1335
			__LIB_0__::func_804(1952610440);
			__LIB_0__::func_804(-223469678);
			__LIB_0__::func_804(-404698347);
			__LIB_0__::func_804(1517904467);
			__LIB_0__::func_803(1306158345);
			Jump @2853; //curOff = 1383
			__LIB_0__::func_804(1306158345);
			__LIB_0__::func_804(-223469678);
			__LIB_0__::func_804(-404698347);
			__LIB_0__::func_804(1517904467);
			__LIB_0__::func_803(1952610440);
			Jump @2853; //curOff = 1431
			__LIB_0__::func_804(1306158345);
			__LIB_0__::func_804(1952610440);
			__LIB_0__::func_804(-404698347);
			__LIB_0__::func_804(1517904467);
			__LIB_0__::func_803(-223469678);
			Jump @2853; //curOff = 1479
			__LIB_0__::func_804(1306158345);
			__LIB_0__::func_804(1952610440);
			__LIB_0__::func_804(-223469678);
			__LIB_0__::func_804(1517904467);
			__LIB_0__::func_803(-404698347);
			Jump @2853; //curOff = 1527
			__LIB_0__::func_804(1306158345);
			__LIB_0__::func_804(1952610440);
			__LIB_0__::func_804(-223469678);
			__LIB_0__::func_804(-404698347);
			__LIB_0__::func_803(1517904467);
			Jump @2853; //curOff = 1575
			__LIB_0__::func_804(931649776);
			__LIB_0__::func_804(-434590080);
			__LIB_0__::func_804(1743048395);
			__LIB_0__::func_804(449774763);
			__LIB_0__::func_803(1376646519);
			Jump @2853; //curOff = 1623
			__LIB_0__::func_804(1376646519);
			__LIB_0__::func_804(-434590080);
			__LIB_0__::func_804(1743048395);
			__LIB_0__::func_804(449774763);
			__LIB_0__::func_803(931649776);
			Jump @2853; //curOff = 1671
			__LIB_0__::func_804(1376646519);
			__LIB_0__::func_804(931649776);
			__LIB_0__::func_804(1743048395);
			__LIB_0__::func_804(449774763);
			__LIB_0__::func_803(-434590080);
			Jump @2853; //curOff = 1719
			__LIB_0__::func_804(1376646519);
			__LIB_0__::func_804(931649776);
			__LIB_0__::func_804(-434590080);
			__LIB_0__::func_804(449774763);
			__LIB_0__::func_803(1743048395);
			Jump @2853; //curOff = 1767
			__LIB_0__::func_804(1376646519);
			__LIB_0__::func_804(931649776);
			__LIB_0__::func_804(-434590080);
			__LIB_0__::func_804(1743048395);
			__LIB_0__::func_803(449774763);
			Jump @2853; //curOff = 1815
			__LIB_0__::func_804(38162571);
			__LIB_0__::func_804(1350391819);
			__LIB_0__::func_804(54073871);
			__LIB_0__::func_803(-1414537028);
			Jump @2853; //curOff = 1854
			__LIB_0__::func_804(-1414537028);
			__LIB_0__::func_804(1350391819);
			__LIB_0__::func_804(54073871);
			__LIB_0__::func_803(38162571);
			Jump @2853; //curOff = 1893
			__LIB_0__::func_804(-1414537028);
			__LIB_0__::func_804(38162571);
			__LIB_0__::func_804(54073871);
			__LIB_0__::func_803(1350391819);
			Jump @2853; //curOff = 1932
			__LIB_0__::func_804(-1414537028);
			__LIB_0__::func_804(38162571);
			__LIB_0__::func_804(1350391819);
			__LIB_0__::func_803(54073871);
			Jump @2853; //curOff = 1971
			__LIB_0__::func_803(198200492);
			__LIB_0__::func_804(-1124061431);
			__LIB_0__::func_804(52706132);
			__LIB_0__::func_804(-259123672);
			Jump @2853; //curOff = 2010
			__LIB_0__::func_804(198200492);
			__LIB_0__::func_803(-1124061431);
			__LIB_0__::func_804(52706132);
			__LIB_0__::func_804(-259123672);
			Jump @2853; //curOff = 2049
			__LIB_0__::func_804(198200492);
			__LIB_0__::func_804(-1124061431);
			__LIB_0__::func_803(52706132);
			__LIB_0__::func_804(-259123672);
			Jump @2853; //curOff = 2088
			__LIB_0__::func_804(198200492);
			__LIB_0__::func_804(-1124061431);
			__LIB_0__::func_804(52706132);
			__LIB_0__::func_803(-259123672);
			Jump @2853; //curOff = 2127
			__LIB_0__::func_803(-919512195);
			__LIB_0__::func_804(-1925798111);
			__LIB_0__::func_804(420709909);
			__LIB_0__::func_804(1703426636);
			Jump @2853; //curOff = 2166
			__LIB_0__::func_803(-1925798111);
			__LIB_0__::func_804(-919512195);
			__LIB_0__::func_804(420709909);
			__LIB_0__::func_804(1703426636);
			Jump @2853; //curOff = 2205
			__LIB_0__::func_803(420709909);
			__LIB_0__::func_804(-919512195);
			__LIB_0__::func_804(-1925798111);
			__LIB_0__::func_804(1703426636);
			Jump @2853; //curOff = 2244
			__LIB_0__::func_803(1703426636);
			__LIB_0__::func_804(-919512195);
			__LIB_0__::func_804(-1925798111);
			__LIB_0__::func_804(420709909);
			Jump @2853; //curOff = 2283
			__LIB_0__::func_803(-1223121209);
			__LIB_0__::func_804(630808005);
			Jump @2853; //curOff = 2304
			__LIB_0__::func_803(630808005);
			__LIB_0__::func_804(-1223121209);
			Jump @2853; //curOff = 2325
			__LIB_0__::func_803(1453909576);
			__LIB_0__::func_804(1643531967);
			Jump @2853; //curOff = 2346
			__LIB_0__::func_803(1643531967);
			__LIB_0__::func_804(1453909576);
			Jump @2853; //curOff = 2367
			__LIB_0__::func_803(0);
			__LIB_0__::func_804(473295046);
			__LIB_0__::func_804(-1738165526);
			Jump @2853; //curOff = 2393
			__LIB_0__::func_803(473295046);
			__LIB_0__::func_804(0);
			__LIB_0__::func_804(-1738165526);
			Jump @2853; //curOff = 2419
			__LIB_0__::func_803(-1738165526);
			__LIB_0__::func_804(0);
			__LIB_0__::func_804(473295046);
			Jump @2853; //curOff = 2445
			__LIB_0__::func_803(932909855);
			__LIB_0__::func_804(2051822093);
			Jump @2853; //curOff = 2466
			__LIB_0__::func_803(2051822093);
			__LIB_0__::func_804(932909855);
			Jump @2853; //curOff = 2487
			__LIB_0__::func_803(405586984);
			__LIB_0__::func_804(1509509592);
			__LIB_0__::func_804(-959357075);
			__LIB_0__::func_804(-1311865656);
			Jump @2853; //curOff = 2526
			__LIB_0__::func_803(1509509592);
			__LIB_0__::func_804(405586984);
			__LIB_0__::func_804(-959357075);
			__LIB_0__::func_804(-1311865656);
			Jump @2853; //curOff = 2565
			__LIB_0__::func_803(-959357075);
			__LIB_0__::func_804(1509509592);
			__LIB_0__::func_804(405586984);
			__LIB_0__::func_804(-1311865656);
			Jump @2853; //curOff = 2604
			__LIB_0__::func_803(-1311865656);
			__LIB_0__::func_804(1509509592);
			__LIB_0__::func_804(-959357075);
			__LIB_0__::func_804(405586984);
			Jump @2853; //curOff = 2643
			if (bParam1)
			{
				__LIB_0__::func_803(-524145696);
			}
			else
			{
				__LIB_0__::func_804(-524145696);
			}
			__LIB_0__::func_804(1626481264);
			__LIB_0__::func_804(282809459);
			Jump @2853; //curOff = 2690
			__LIB_0__::func_803(282809459);
			__LIB_0__::func_804(1626481264);
			__LIB_0__::func_804(-524145696);
			Jump @2853; //curOff = 2720
			__LIB_0__::func_803(1626481264);
			__LIB_0__::func_804(-524145696);
			__LIB_0__::func_804(282809459);
			Jump @2853; //curOff = 2750
			if (bParam1)
			{
				__LIB_0__::func_803(885203519);
			}
			else
			{
				__LIB_0__::func_804(885203519);
			}
			Jump @2853; //curOff = 2779
			if (bParam1)
			{
				__LIB_0__::func_803(-1080627546);
			}
			else
			{
				__LIB_0__::func_804(-1080627546);
			}
			Jump @2853; //curOff = 2808
			if (bParam1)
			{
				if (!__LIB_0__::func_898(iParam0))
				{
					__LIB_0__::func_803(iParam0);
				}
			}
			else if (__LIB_0__::func_898(iParam0))
			{
				__LIB_0__::func_804(iParam0);
			}
		}
void func_1382(int iParam0)
{
	if (!__LIB_0__::func_448(iParam0))
	{
		__LIB_0__::func_549(__LIB_0__::func_548(iParam0));
	}
}

bool func_1398(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	__LIB_0__::func_191();
	if (iParam2 == 39)
	{
		Var0 = { func_796(iParam0, 1, 0) };
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

int func_1413(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!__LIB_0__::func_144(iParam0, 0))
	{
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam2))
	{
		return 0;
	}
	if (func_1337(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return 0;
	}
	if (!__LIB_0__::func_708(0))
	{
		return 0;
	}
	if (!INVENTORY::_0xCB5D11F9508A928D(__LIB_0__::func_162(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

void func_1422(int iParam0, int iParam1)
{
	if (__LIB_0__::func_192(iParam1, 130796156))
	{
		func_1576(iParam1, 0);
	}
	else if (__LIB_0__::func_192(iParam1, 930141731))
	{
		func_1576(iParam1, 1);
		func_1577(iParam0);
	}
}

bool func_1481(int iParam0, var uParam1, bool bParam2)
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
	Var0 = { func_796(iParam0, 0, 1) };
	iVar5 = 1728382685; /* GXTEntry: "Right" */
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_797((386 + iVar29), 1);
		if (func_798(iParam0, &Var0, iVar5, 0))
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

void func_1521()
{
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS")))
	{
		func_1608();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS"), true);
		__LIB_0__::func_915(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"));
		func_1236(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), true, 2, false, false);
		__LIB_0__::func_915(joaat("WEAPON_MELEE_KNIFE_JOHN"));
		func_1236(joaat("WEAPON_MELEE_KNIFE_JOHN"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_MELEE_KNIFE_JOHN"), true, 4, false, false);
	}
}

int func_1522(int iParam0)
{
	struct<5> Var0;
	Var0 = { func_796(iParam0, 1, 0) };
	return __LIB_0__::func_709(Var0.f_4);
}

void func_1576(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = __LIB_1__::func_134(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_1193(50);
			}
			else
			{
				func_1193(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_1193(51);
			}
			else
			{
				func_1193(49);
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
			func_1193(24);
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

void func_1577(int iParam0)
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
					func_1635();
					__LIB_1__::func_240(456, 1);
					__LIB_0__::func_606(16);
				}
			}
			if (!__LIB_0__::func_605(32))
			{
				if (iVar0 >= 3)
				{
					func_1635();
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
					func_1637();
					__LIB_1__::func_240(457, 1);
					__LIB_0__::func_606(1);
				}
			}
			if (!__LIB_0__::func_605(2))
			{
				if (iVar0 >= 3)
				{
					func_1637();
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
					func_1638();
					__LIB_1__::func_240(455, 1);
					__LIB_0__::func_606(4);
				}
			}
			if (!__LIB_0__::func_605(8))
			{
				if (iVar0 >= 3)
				{
					func_1638();
					__LIB_1__::func_240(455, 1);
					__LIB_0__::func_606(8);
				}
			}
			break;
	}
}

void func_1608()
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
	func_1658(0);
	func_1659(7);
	func_1660(joaat("KIT_BANDANA"), 1, 1, 0);
	if (__LIB_0__::func_241() == 1160113249)
	{
		func_1660(joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"), 1, 1, 1);
		func_1660(-361635024 /* GXTEntry: "The Cowboy" */, 1, 1, 1);
	}
	__LIB_0__::func_841(Global_35, &uVar0);
}

void func_1635()
{
	int iVar0;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_1236(joaat("UPGRADE_STAMINA_TANK_1"), 1, 752097756);
	iVar0 = __LIB_0__::func_963(1);
	__LIB_8__::func_335(1, iVar0, 0);
}

void func_1637()
{
	int iVar0;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_1236(joaat("UPGRADE_DEADEYE_TANK_1"), 1, 752097756);
	iVar0 = __LIB_0__::func_963(2);
	__LIB_8__::func_335(2, iVar0, 0);
}

void func_1638()
{
	int iVar0;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_1236(joaat("UPGRADE_HEALTH_TANK_1"), 1, 752097756);
	iVar0 = __LIB_0__::func_963(0);
	__LIB_8__::func_335(0, iVar0, 0);
}

void func_1658(bool bParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 17;
	while (iVar0 >= 0)
	{
		iVar1 = Global_1946804.f_2657[iVar0];
		if (__LIB_0__::func_144(iVar1, 0))
		{
			func_1684(iVar1, 0, bParam0);
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

void func_1659(int iParam0)
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
			func_1686(&(Global_1946804.f_2657.f_26.f_26), iVar2, iVar0);
		}
		if (func_1687(iVar2, 0))
		{
			func_1688(iVar2, Global_1946804.f_1497.f_1[iVar1 /*3*/] == Global_1946804.f_2657[iVar0]);
		}
		iVar0++;
	}
}

void func_1660(int iParam0, bool bParam1, bool bParam2, bool bParam3)
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
			bVar1 = func_1690(iParam0, &(Global_1946804.f_2657.f_21), Global_1946804.f_2657.f_26.f_1, bParam1);
			break;
		case 81053684:
			bVar1 = func_1690(iParam0, &(Global_1946804.f_2657.f_23), 1, bParam1);
			break;
		case -999503751:
			bVar1 = func_1690(iParam0, &(Global_1946804.f_2657.f_20), Global_1946804.f_2657.f_26, bParam1);
			break;
		case -525676072:
			bVar1 = func_1690(iParam0, &(Global_1946804.f_2657.f_22), Global_1946804.f_2657.f_26.f_2, bParam1);
			break;
		case -1719060085:
			bVar1 = func_1690(iParam0, &(Global_1946804.f_2657.f_24), 1, bParam1);
			break;
		case -413129408:
			bVar1 = func_1690(iParam0, &(Global_1946804.f_2657.f_24), 1, bParam1);
			break;
	}
	if (!bVar1)
	{
		return;
	}
	if (iParam0 == __LIB_0__::func_856(0))
	{
		func_1692(iParam0, 1);
		if (__LIB_0__::func_241() == 1160113249)
		{
			func_1692(__LIB_0__::func_856(-2125499975), 0);
		}
		else
		{
			func_1692(__LIB_0__::func_856(1160113249), 0);
		}
	}
	__LIB_0__::func_460();
	if (__LIB_1__::func_18(iVar0))
	{
		INVENTORY::_0x766315A564594401(__LIB_0__::func_162(0), iParam0, 0);
	}
	func_1688(iParam0, bParam3);
	if (bParam2)
	{
		__LIB_0__::func_719(0, 0);
	}
}

void func_1684(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	switch (__LIB_0__::func_357(iParam0))
	{
		case -2061583405:
			bVar0 = func_1708(iParam0, &(Global_1946804.f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_1708(iParam0, &(Global_1946804.f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_1708(iParam0, &(Global_1946804.f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_1708(iParam0, &(Global_1946804.f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_1708(iParam0, &(Global_1946804.f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_1708(iParam0, &(Global_1946804.f_2657.f_25));
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

void func_1686(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 >= 13)
	{
		return;
	}
	__LIB_0__::func_691(iParam2, *uParam0);
	func_1710(&(uParam0->f_1[*uParam0 /*5*/]), iParam1, -1, 1, 0);
	*uParam0++;
}

bool func_1687(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	Var0 = { func_796(iParam0, 0, 0) };
	Var5 = { __LIB_0__::func_429(iParam0, Var0, Var0.f_4, 0) };
	if (__LIB_0__::func_800(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return false;
	}
	INVENTORY::_0x9A113C660AEA3832(__LIB_0__::func_162(0), &Var5, iParam1);
	return true;
}

void func_1688(int iParam0, bool bParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	Var0 = { func_796(iParam0, 0, 0) };
	Var5 = { __LIB_0__::func_429(iParam0, Var0, Var0.f_4, 0) };
	if (__LIB_0__::func_800(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	INVENTORY::_0x65A5F70F4A292EBE(__LIB_0__::func_162(0), &Var5, bParam1);
}

int func_1690(int iParam0, var uParam1, int iParam2, bool bParam3)
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
	if (bParam3 && !func_1687(iParam0, 0))
	{
		return 0;
	}
	Global_1946804.f_2657[Global_1946804.f_2657.f_19] = iVar1;
	if (__LIB_0__::func_357(iParam0) != -999503751)
	{
		func_1686(&(Global_1946804.f_2657.f_26.f_26), iParam0, Global_1946804.f_2657.f_19);
	}
	Global_1946804.f_2657.f_19++;
	*uParam1++;
	return 1;
}

int func_1692(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	Var0 = { func_796(iParam0, 0, 0) };
	Var5 = { __LIB_0__::func_429(iParam0, Var0, Var0.f_4, 0) };
	if (__LIB_0__::func_800(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	INVENTORY::_0x0349404A22736740(iParam1, __LIB_0__::func_162(0), &Var5);
	return 1;
}

int func_1708(int iParam0, var uParam1)
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
	func_1687(iParam0, 1);
	return 1;
}

void func_1710(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (PED::_0x93FFD92F05EC32FD(uParam0->f_3.f_1))
	{
		__LIB_1__::func_13(uParam0);
	}
	if (iParam2 == -1)
	{
		uParam0->f_1 = __LIB_0__::func_161(func_1522(iParam1), 1);
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

