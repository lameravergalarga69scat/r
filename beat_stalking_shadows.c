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
	vector3 vLocal_14[15] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_60 = { 0f, 0f, 0f };
	vector3 vLocal_63 = { 0f, 0f, 0f };
	vector3 vLocal_66 = { 0f, 0f, 0f };
	float fLocal_69 = 0f;
	float fLocal_70[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_86[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_102[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_118[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_134[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	int iLocal_150[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_166[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_182 = false;
	int iLocal_183 = 0;
	int iLocal_184 = 0;
	var uLocal_185[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_201[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	char* sLocal_217[15] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	char* sLocal_233[15] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	var uLocal_249[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_265[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_281[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_297[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	vector3 vLocal_313[15] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_359 = 0;
	struct<162> Local_360 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 1;
	var uLocal_527 = 1;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = -1;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 1;
	var uLocal_545 = -1;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	struct<32> Local_554[15];
	int iLocal_1035 = 0;
	var uLocal_1036 = 31;
	var uLocal_1037 = 0;
	var uLocal_1038 = 0;
	var uLocal_1039 = 0;
	var uLocal_1040 = 0;
	var uLocal_1041 = 0;
	var uLocal_1042 = 0;
	var uLocal_1043 = 0;
	var uLocal_1044 = 0;
	var uLocal_1045 = 0;
	var uLocal_1046 = 0;
	var uLocal_1047 = 0;
	var uLocal_1048 = 0;
	var uLocal_1049 = 0;
	var uLocal_1050 = 0;
	var uLocal_1051 = 0;
	var uLocal_1052 = 0;
	var uLocal_1053 = 0;
	var uLocal_1054 = 0;
	var uLocal_1055 = 0;
	var uLocal_1056 = 0;
	var uLocal_1057 = 0;
	var uLocal_1058 = 0;
	var uLocal_1059 = 0;
	var uLocal_1060 = 0;
	var uLocal_1061 = 0;
	var uLocal_1062 = 0;
	var uLocal_1063 = 0;
	var uLocal_1064 = 0;
	var uLocal_1065 = 0;
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
	var uLocal_1078 = 0;
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
	var uLocal_1090 = 0;
	var uLocal_1091 = 0;
	var uLocal_1092 = 0;
	var uLocal_1093 = 0;
	var uLocal_1094 = 0;
	var uLocal_1095 = 0;
	var uLocal_1096 = 0;
	var uLocal_1097 = 0;
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
	var uLocal_1114 = 0;
	var uLocal_1115 = 0;
	var uLocal_1116 = 0;
	var uLocal_1117 = 0;
	var uLocal_1118 = 0;
	var uLocal_1119 = 0;
	var uLocal_1120 = 0;
	var uLocal_1121 = 0;
	var uLocal_1122 = 0;
	var uLocal_1123 = 0;
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
	var uLocal_1134 = 0;
	var uLocal_1135 = 0;
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
	var uLocal_1146 = 0;
	var uLocal_1147 = 0;
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
	var uLocal_1158 = 0;
	var uLocal_1159 = 0;
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
	var uLocal_1218 = 0;
	var uLocal_1219 = 0;
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
	var uLocal_1230 = 0;
	var uLocal_1231 = 0;
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
	var uLocal_1242 = 0;
	var uLocal_1243 = 0;
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
	var uLocal_1254 = 0;
	var uLocal_1255 = 0;
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
	var uLocal_1266 = 0;
	var uLocal_1267 = 0;
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
	var uLocal_1278 = 0;
	var uLocal_1279 = 0;
	var uLocal_1280 = 0;
	var uLocal_1281 = 0;
	var uLocal_1282 = 0;
	var uLocal_1283 = 0;
	var uLocal_1284 = 0;
	struct<2> Local_1285[31];
	var uLocal_1348 = 0;
	int iLocal_1349 = 0;
	int iLocal_1350 = 0;
	int iLocal_1351 = 0;
	int iLocal_1352 = 0;
	int iLocal_1353 = 0;
	int iLocal_1354 = 0;
	var uLocal_1355[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1371 = 0;
	int iLocal_1372 = 0;
	int iLocal_1373[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_1389[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_1405 = 0;
	var uLocal_1406 = 0;
	var uLocal_1407 = 0;
	int iLocal_1408[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_1424 = false;
	bool bLocal_1425 = false;
	bool bLocal_1426 = false;
	bool bLocal_1427 = false;
	bool bLocal_1428 = false;
	bool bLocal_1429 = false;
	bool bLocal_1430 = false;
	int iLocal_1431 = 0;
	int iLocal_1432 = 0;
	var uLocal_1433[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1449 = 0;
	int iLocal_1450 = 0;
	var uLocal_1451[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	char[] cLocal_1467[8] = 0;
	float fLocal_1468 = 0f;
	float fLocal_1469 = 0f;
	var uLocal_1470 = 0;
	var uLocal_1471 = 0;
	var uLocal_1472 = 0;
	int iLocal_1473 = 0;
	var uLocal_1474 = 15;
	var uLocal_1475 = 0;
	var uLocal_1476 = 0;
	var uLocal_1477 = 0;
	var uLocal_1478 = 0;
	var uLocal_1479 = 0;
	var uLocal_1480 = 0;
	var uLocal_1481 = 0;
	var uLocal_1482 = 0;
	var uLocal_1483 = 0;
	var uLocal_1484 = 0;
	var uLocal_1485 = 0;
	var uLocal_1486 = 0;
	var uLocal_1487 = 0;
	var uLocal_1488 = 0;
	var uLocal_1489 = 0;
	var uLocal_1490 = 0;
	var uLocal_1491 = 0;
	var uLocal_1492 = 0;
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
	var uLocal_1513 = 0;
	var uLocal_1514 = 0;
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
	var uLocal_1579 = 0;
	var uLocal_1580 = 0;
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
	var uLocal_1601 = 0;
	var uLocal_1602 = 0;
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
	int iLocal_1613 = 0;
	int iLocal_1614 = 0;
	int iLocal_1615 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = -1;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	cLocal_1467 = "TB";
	Local_360.f_3 = __LIB_0__::func_81(&vScriptParam_0);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_2();
	}
	Local_360.f_161 = __LIB_0__::func_27(vScriptParam_0.z, 2);
	__LIB_3__::func_368(&Local_360, 1);
	__LIB_2__::func_433(&(Local_360.f_5));
	while (true)
	{
		switch (iLocal_1351)
		{
			case 0:
				if (func_6())
				{
					iLocal_1351 = 1;
				}
				break;
			case 1:
				if (__LIB_3__::func_669(&Local_360, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
				{
					func_8(&Local_360, &uLocal_1612, &uLocal_1611);
					func_9();
					func_10();
					func_11();
					if (iLocal_1035 == 0)
					{
					}
					else if (iLocal_1035 != 1)
					{
					}
					iLocal_1351 = 3;
				}
				else if (Local_360.f_160)
				{
					func_2();
				}
				break;
			case 3:
				if (func_12())
				{
					if (func_13())
					{
						if (func_14())
						{
							iLocal_1351 = 4;
						}
					}
				}
				break;
			case 4:
				if (!__LIB_3__::func_645(&Local_360, &iLocal_1373, iLocal_1035, 0, 1, 0, 1, 0))
				{
					func_2();
				}
				if (func_16())
				{
					Local_360.f_50 = 1;
					func_2();
				}
				if (__LIB_3__::func_365(&Local_360, &iLocal_1373, 0, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0))
				{
					func_2();
				}
				if (!__LIB_1__::func_205(Global_35, iLocal_1353, 1, 0) && bLocal_1425)
				{
					func_2();
				}
				break;
		}
		BUILTIN::WAIT(Local_360.f_158);
	}
}

void func_2()
{
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1353))
	{
		PATHFIND::_0x5A4E1A41E3A02AD0(iLocal_1353, 4, 0);
	}
	ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_359);
	VEHICLE::DELETE_VEHICLE(&iLocal_359);
	func_19(&Local_360, &iLocal_1373, &uLocal_1389, iLocal_1035, uLocal_1612, uLocal_1611, 0, 1, 0, 1);
	__LIB_10__::func_227("RESSH_END", 0);
	AUDIO::SET_AMBIENT_ZONE_STATE("AZ_RESSH_Area", false, true);
	if (Local_360.f_44)
	{
		if (!__LIB_1__::func_187(56))
		{
			__LIB_4__::func_471(56, 1);
		}
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_6()
{
	int iVar0;
	switch (iLocal_1349)
	{
		case 0:
			if (__LIB_3__::func_308(&Local_360))
			{
				if (AUDIO::_0xE368E8422C860BA7("creature_scream", "RESSH_sounds", -2))
				{
					func_32();
					func_33();
					func_34();
					func_35();
					STREAMING::REQUEST_MODEL(__LIB_4__::func_379(), false);
					iLocal_1349 = 1;
				}
			}
			break;
		case 1:
			if (!__LIB_0__::func_0(&uLocal_1348, cLocal_1467))
			{
				return false;
			}
			if (!__LIB_3__::func_315(&uLocal_1036))
			{
				return false;
			}
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (Local_554[iVar0 /*32*/].f_1 != 0)
				{
					if (!STREAMING::HAS_MODEL_LOADED(Local_554[iVar0 /*32*/].f_1))
					{
						return false;
					}
				}
				iVar0++;
			}
			if (!AUDIO::_0xE368E8422C860BA7("creature_scream", "RESSH_sounds", -2))
			{
				return false;
			}
			if (!STREAMING::HAS_MODEL_LOADED(__LIB_4__::func_379()))
			{
				return false;
			}
			return true;
	}
	return false;
}

void func_8(var uParam0, var uParam1, var uParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*uParam1 = 0;
			*uParam2 = 0;
			break;
		case 1:
			*uParam1 = 0;
			*uParam2 = 1;
			break;
	}
}

void func_9()
{
	switch (Local_360.f_51.f_4)
	{
		case 0:
			iLocal_1353 = VOLUME::_CREATE_VOLUME_BOX(1669.859f, -958.6137f, 48.62086f, 0f, 0f, -63.99999f, 400f, 198f, 69f);
			__LIB_3__::func_557(&(uLocal_1355[0]), 1626.793f, -803.9774f, 42.38455f, 0f, 0f, -49.00002f, 21f, 13f, 15f, "volStakerMove[PED_STALKER_A]");
			__LIB_3__::func_557(&(uLocal_1355[1]), 1599.531f, -863.5042f, 45.24225f, 0f, 0f, 0f, 19f, 16f, 14f, "volStakerMove[PED_STALKER_B]");
			__LIB_3__::func_557(&(uLocal_1355[8]), 1633.141f, -920.3876f, 41.12968f, 0f, 0f, 19.99999f, 22f, 8f, 8f, "volStakerMove[PED_STALKER_TORCH_A]");
			__LIB_3__::func_557(&iLocal_1371, 1660.337f, -1003.182f, 40.64283f, 0f, 0f, 12f, 27f, 11f, 9f, "volAmbush");
			__LIB_3__::func_557(&iLocal_1354, 1635.303f, -882.7111f, 48.62086f, 0f, 0f, -63.99998f, 387f, 292f, 69f, "volRemoveGators");
			break;
		case 1:
			iLocal_1353 = VOLUME::_CREATE_VOLUME_BOX(2348.872f, -716.0204f, 38.49469f, 0f, 0f, 27.99999f, 290f, 149f, 56f);
			__LIB_3__::func_557(&(uLocal_1355[0]), 2425.84f, -663.4123f, 44.68422f, 0f, 0f, -9.999998f, 7f, 24f, 7f, "volStakerMove[PED_STALKER_A]");
			__LIB_3__::func_557(&iLocal_1371, 2326.468f, -741.6474f, 40.71154f, 0f, 0f, 30f, 8f, 21f, 12f, "volAmbush");
			__LIB_3__::func_557(&iLocal_1354, 2310.304f, -725.3149f, 38.49469f, 0f, 0f, 27.99999f, 465f, 276f, 56f, "volRemoveGators");
			break;
		case 2:
			break;
	}
}

void func_10()
{
	__LIB_2__::func_761(Local_360.f_51, 20f, 0, 0);
	PATHFIND::_0xB03944057FD735BA(iLocal_1353, 4, 0);
	__LIB_1__::func_391(iLocal_1354, 0, 0, 0);
	MISC::CLEAR_AREA(Local_360.f_51, 10f, 2442122);
}

void func_11()
{
	switch (Local_360.f_51.f_4)
	{
		case 0:
			Local_554[0 /*32*/].f_6 = { 1591.46f, -866.79f, 41.61f };
			Local_554[0 /*32*/].f_9 = -102.25f;
			vLocal_14[0 /*3*/] = { 1608.21f, -872.04f, 40.7f };
			fLocal_70[0] = 20f;
			fLocal_118[0] = 5f;
			iLocal_150[0] = 0;
			iLocal_166[0] = 0;
			uLocal_201[0] = Local_1285[7 /*2*/];
			uLocal_185[0] = Local_1285[7 /*2*/].f_1;
			sLocal_233[0] = Local_1285[0 /*2*/];
			sLocal_217[0] = Local_1285[0 /*2*/].f_1;
			uLocal_249[0] = Local_1285[10 /*2*/].f_1;
			uLocal_265[0] = Local_1285[10 /*2*/];
			Local_554[1 /*32*/].f_6 = { 1609.78f, -897.5f, 41.74f };
			Local_554[1 /*32*/].f_9 = 128.21f;
			vLocal_14[1 /*3*/] = { 1591.07f, -910.77f, 40.75f };
			fLocal_70[1] = 35f;
			fLocal_118[1] = 2f;
			iLocal_150[1] = 0;
			iLocal_166[1] = 0;
			uLocal_201[1] = Local_1285[7 /*2*/];
			uLocal_185[1] = Local_1285[7 /*2*/].f_1;
			sLocal_233[1] = Local_1285[2 /*2*/];
			sLocal_217[1] = Local_1285[2 /*2*/].f_1;
			uLocal_249[1] = Local_1285[10 /*2*/].f_1;
			uLocal_265[1] = Local_1285[10 /*2*/];
			Local_554[6 /*32*/].f_6 = { 1592.62f, -838.39f, 42f };
			Local_554[6 /*32*/].f_9 = -47.23f;
			fLocal_70[6] = 50f;
			iLocal_150[6] = 0;
			iLocal_166[6] = 0;
			vLocal_14[6 /*3*/] = { 1582.85f, -827.77f, 40.64f };
			sLocal_217[6] = Local_1285[25 /*2*/].f_1;
			sLocal_233[6] = Local_1285[25 /*2*/];
			uLocal_249[6] = Local_1285[3 /*2*/].f_1;
			uLocal_265[6] = Local_1285[3 /*2*/];
			fLocal_102[6] = 154.59f;
			bLocal_182 = true;
			Local_554[7 /*32*/].f_6 = { 1645.3f, -939.46f, 41.5f };
			Local_554[7 /*32*/].f_9 = 30.77f;
			fLocal_70[7] = 45f;
			iLocal_150[7] = 1;
			iLocal_166[7] = 0;
			vLocal_14[7 /*3*/] = { 1633.26f, -945.34f, 40.75f };
			sLocal_217[7] = Local_1285[25 /*2*/].f_1;
			sLocal_233[7] = Local_1285[25 /*2*/];
			uLocal_249[7] = Local_1285[3 /*2*/].f_1;
			uLocal_265[7] = Local_1285[3 /*2*/];
			fLocal_102[7] = 178.4f;
			Local_554[8 /*32*/].f_6 = { 1605.65f, -936.88f, 41.74f };
			Local_554[8 /*32*/].f_9 = -55.19f;
			vLocal_14[8 /*3*/] = { 1628.04f, -959.52f, 40.84f };
			fLocal_118[8] = 5f;
			fLocal_70[8] = 26f;
			iLocal_150[8] = 1;
			iLocal_166[8] = 1;
			uLocal_201[8] = Local_1285[17 /*2*/];
			uLocal_185[8] = Local_1285[17 /*2*/].f_1;
			sLocal_233[8] = Local_1285[14 /*2*/];
			sLocal_217[8] = Local_1285[14 /*2*/].f_1;
			uLocal_249[8] = Local_1285[21 /*2*/].f_1;
			uLocal_265[8] = Local_1285[21 /*2*/];
			uLocal_281[8] = Local_1285[19 /*2*/].f_1;
			uLocal_297[8] = Local_1285[19 /*2*/];
			Local_554[9 /*32*/].f_6 = { 1656.43f, -894.45f, 41.45f };
			Local_554[9 /*32*/].f_9 = 110.32f;
			vLocal_14[9 /*3*/] = { 1670.09f, -921.24f, 40.23f };
			fLocal_70[9] = 35f;
			fLocal_118[9] = 5f;
			iLocal_150[9] = 1;
			iLocal_166[9] = 1;
			uLocal_201[9] = Local_1285[15 /*2*/];
			uLocal_185[9] = Local_1285[15 /*2*/].f_1;
			sLocal_233[9] = Local_1285[11 /*2*/];
			sLocal_217[9] = Local_1285[11 /*2*/].f_1;
			uLocal_249[9] = Local_1285[20 /*2*/].f_1;
			uLocal_265[9] = Local_1285[20 /*2*/];
			uLocal_281[9] = Local_1285[19 /*2*/].f_1;
			uLocal_297[9] = Local_1285[19 /*2*/];
			Local_554[12 /*32*/].f_6 = { 1682.39f, -869.23f, 40.54f };
			Local_554[12 /*32*/].f_9 = 13.1f;
			vLocal_313[12 /*3*/] = { 1671.72f, -1021.37f, 42.22f };
			fLocal_134[12] = 29.2f;
			sLocal_217[12] = Local_1285[30 /*2*/].f_1;
			sLocal_233[12] = Local_1285[30 /*2*/];
			Local_554[13 /*32*/].f_6 = { 1666.97f, -1006.77f, 41.89f };
			Local_554[13 /*32*/].f_9 = 24.04f;
			vLocal_313[13 /*3*/] = { 1666.97f, -1006.77f, 41.89f };
			fLocal_134[13] = 24.04f;
			sLocal_217[13] = Local_1285[30 /*2*/].f_1;
			sLocal_233[13] = Local_1285[30 /*2*/];
			Local_554[10 /*32*/].f_6 = { 1713.63f, -911.7f, 40.21f };
			Local_554[10 /*32*/].f_9 = 13.1f;
			vLocal_313[10 /*3*/] = { 1655.791f, -1019.232f, 41.7938f };
			fLocal_134[10] = 25.2381f;
			sLocal_217[10] = Local_1285[28 /*2*/].f_1;
			sLocal_233[10] = Local_1285[28 /*2*/];
			Local_554[11 /*32*/].f_6 = { 1713.63f, -911.7f, 40.21f };
			Local_554[11 /*32*/].f_9 = 35.19f;
			vLocal_313[11 /*3*/] = { 1659.86f, -1024.76f, 43.04f };
			fLocal_134[11] = 35.19f;
			sLocal_217[11] = Local_1285[23 /*2*/].f_1;
			sLocal_233[11] = Local_1285[23 /*2*/];
			if (iLocal_1035 == 1)
			{
				vLocal_60 = { 1636.39f, -926.64f, 40.57f };
				fLocal_69 = 80f;
			}
			vLocal_63 = { 1659.97f, -1007.36f, 40.69f };
			vLocal_66 = { 1714.71f, -774.58f, 41.27f };
			break;
		case 1:
			Local_554[0 /*32*/].f_6 = { 2377.56f, -664.01f, 42.34f };
			Local_554[0 /*32*/].f_9 = -155.36f;
			vLocal_14[0 /*3*/] = { 2382.58f, -675.57f, 41.41f };
			fLocal_70[0] = 48.9f;
			fLocal_118[0] = 2f;
			iLocal_150[0] = 0;
			iLocal_166[0] = 0;
			uLocal_201[0] = Local_1285[7 /*2*/];
			uLocal_185[0] = Local_1285[7 /*2*/].f_1;
			sLocal_233[0] = "script_re@stalking_shadows";
			sLocal_217[0] = "stop_right_run_ped_b";
			uLocal_249[0] = Local_1285[8 /*2*/].f_1;
			uLocal_265[0] = Local_1285[8 /*2*/];
			Local_554[1 /*32*/].f_6 = { 2333.65f, -730.15f, 42.16f };
			Local_554[1 /*32*/].f_9 = -84.01f;
			vLocal_14[1 /*3*/] = { 2347.12f, -728.85f, 41.53f };
			fLocal_70[1] = 41.9f;
			fLocal_118[1] = 2f;
			iLocal_150[1] = 1;
			iLocal_166[1] = 0;
			uLocal_201[1] = Local_1285[0 /*2*/];
			uLocal_185[1] = Local_1285[0 /*2*/].f_1;
			sLocal_233[1] = Local_1285[0 /*2*/];
			sLocal_217[1] = Local_1285[0 /*2*/].f_1;
			uLocal_249[1] = Local_1285[10 /*2*/].f_1;
			uLocal_265[1] = Local_1285[10 /*2*/];
			Local_554[2 /*32*/].f_6 = { 2354.39f, -701.89f, 41.68f };
			Local_554[2 /*32*/].f_9 = -101.28f;
			vLocal_14[2 /*3*/] = { 2364.63f, -704.05f, 40.76f };
			fLocal_70[2] = 28f;
			fLocal_118[2] = 2f;
			iLocal_150[2] = 0;
			iLocal_166[2] = 0;
			uLocal_201[2] = Local_1285[0 /*2*/];
			uLocal_185[2] = Local_1285[0 /*2*/].f_1;
			sLocal_233[2] = Local_1285[0 /*2*/];
			sLocal_217[2] = Local_1285[0 /*2*/].f_1;
			uLocal_249[2] = Local_1285[0 /*2*/].f_1;
			uLocal_265[2] = Local_1285[0 /*2*/];
			Local_554[3 /*32*/].f_6 = { 2336.37f, -757.39f, 41.59f };
			Local_554[3 /*32*/].f_9 = 47.91f;
			vLocal_14[3 /*3*/] = { 2326.58f, -750.15f, 40.81f };
			fLocal_70[3] = 36.85f;
			fLocal_118[3] = 2f;
			iLocal_150[3] = 1;
			iLocal_166[3] = 0;
			uLocal_201[3] = Local_1285[6 /*2*/];
			uLocal_185[3] = Local_1285[6 /*2*/].f_1;
			sLocal_233[3] = Local_1285[2 /*2*/];
			sLocal_217[3] = Local_1285[2 /*2*/].f_1;
			uLocal_249[3] = Local_1285[22 /*2*/].f_1;
			uLocal_265[3] = Local_1285[22 /*2*/];
			Local_554[6 /*32*/].f_6 = { 2365.84f, -670.32f, 41.86f };
			Local_554[6 /*32*/].f_9 = -88.59f;
			vLocal_14[6 /*3*/] = { 2372.43f, -682.85f, 41.27f };
			fLocal_70[6] = 30f;
			iLocal_150[6] = 0;
			iLocal_166[6] = 0;
			sLocal_217[6] = Local_1285[26 /*2*/].f_1;
			sLocal_233[6] = Local_1285[26 /*2*/];
			uLocal_249[6] = Local_1285[4 /*2*/].f_1;
			uLocal_265[6] = Local_1285[4 /*2*/];
			fLocal_102[6] = 24.23f;
			bLocal_182 = false;
			Local_554[8 /*32*/].f_6 = { 2366.79f, -746.21f, 41.82f };
			Local_554[8 /*32*/].f_9 = 16.17f;
			vLocal_14[8 /*3*/] = { 1588.48f, -880.23f, 40.7f };
			fLocal_70[8] = 20f;
			iLocal_150[8] = 1;
			iLocal_166[8] = 0;
			uLocal_201[8] = Local_1285[15 /*2*/];
			uLocal_185[8] = Local_1285[15 /*2*/].f_1;
			sLocal_233[8] = Local_1285[11 /*2*/];
			sLocal_217[8] = Local_1285[11 /*2*/].f_1;
			uLocal_249[8] = Local_1285[20 /*2*/].f_1;
			uLocal_265[8] = Local_1285[20 /*2*/];
			uLocal_281[8] = Local_1285[19 /*2*/].f_1;
			uLocal_297[8] = Local_1285[19 /*2*/];
			Local_554[9 /*32*/].f_6 = { 2371.81f, -701.8f, 40.52f };
			Local_554[9 /*32*/].f_9 = 80f;
			vLocal_14[9 /*3*/] = { 2368.39f, -735.69f, 41.15f };
			fLocal_70[9] = 38.84f;
			fLocal_118[9] = 5f;
			iLocal_150[9] = 1;
			iLocal_166[9] = 1;
			uLocal_201[9] = Local_1285[15 /*2*/];
			uLocal_185[9] = Local_1285[15 /*2*/].f_1;
			sLocal_233[9] = Local_1285[11 /*2*/];
			sLocal_217[9] = Local_1285[11 /*2*/].f_1;
			uLocal_249[9] = Local_1285[20 /*2*/].f_1;
			uLocal_265[9] = Local_1285[20 /*2*/];
			uLocal_281[9] = Local_1285[19 /*2*/].f_1;
			uLocal_297[9] = Local_1285[19 /*2*/];
			Local_554[12 /*32*/].f_6 = { 2315.25f, -743.03f, 41.87f };
			Local_554[12 /*32*/].f_9 = -74.2f;
			vLocal_313[12 /*3*/] = { 2315.25f, -743.03f, 41.87f };
			fLocal_134[12] = -74.2f;
			sLocal_217[12] = Local_1285[29 /*2*/].f_1;
			sLocal_233[12] = Local_1285[29 /*2*/];
			Local_554[13 /*32*/].f_6 = { 2307.76f, -755.14f, 41.69f };
			Local_554[13 /*32*/].f_9 = -67.65f;
			vLocal_313[13 /*3*/] = { 2328.09f, -748.5f, 40.95f };
			fLocal_134[13] = -67.65f;
			sLocal_217[13] = Local_1285[30 /*2*/].f_1;
			sLocal_233[13] = Local_1285[30 /*2*/];
			Local_554[10 /*32*/].f_6 = { 2301.26f, -748.44f, 41.72f };
			Local_554[10 /*32*/].f_9 = -90.46f;
			vLocal_313[10 /*3*/] = { 2301.26f, -748.44f, 41.72f };
			fLocal_134[10] = -90.46f;
			sLocal_217[10] = Local_1285[28 /*2*/].f_1;
			sLocal_233[10] = Local_1285[28 /*2*/];
			Local_554[11 /*32*/].f_6 = { 2289.2f, -750.1f, 41.42f };
			Local_554[11 /*32*/].f_9 = 278.73f;
			vLocal_313[11 /*3*/] = { 2289.2f, -750.1f, 41.42f };
			fLocal_134[11] = 278.73f;
			sLocal_217[11] = Local_1285[23 /*2*/].f_1;
			sLocal_233[11] = Local_1285[23 /*2*/];
			if (iLocal_1035 == 1)
			{
				vLocal_60 = { 1636.39f, -926.64f, 40.57f };
				fLocal_69 = 80f;
			}
			vLocal_63 = { 1659.97f, -1007.36f, 40.69f };
			vLocal_66 = { 2494.25f, -671.09f, 40.52f };
			break;
		case 2:
			break;
	}
}

bool func_12()
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;
	float fVar8;
	if (__LIB_0__::func_94(Global_35, Local_360.f_51, 1) < 100f)
	{
		if (!func_48())
		{
			vVar0 = { Local_360.f_51 };
			vVar3 = { vLocal_66 };
			fVar6 = BUILTIN::VDIST(vVar0, vVar3);
			fVar7 = BUILTIN::VDIST(Global_36, vVar0);
			fVar8 = BUILTIN::VDIST(Global_36, vVar3);
			if (fVar7 <= fVar6 && fVar8 < fVar6)
			{
				iLocal_184 = 1;
			}
			if (fVar7 < fVar8 && fVar8 < fVar6)
			{
				iLocal_183 = 1;
			}
			if (iLocal_183 && iLocal_184)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_13()
{
	switch (iLocal_1352)
	{
		case 0:
			if (!__LIB_4__::func_224(&Local_360, &uLocal_1474, &Local_554, 0, 1, 1, 0, -1))
			{
				return false;
			}
			iLocal_1352 = 1;
			break;
		case 1:
			if (!__LIB_4__::func_478(&uLocal_1474, &Local_554, &iLocal_1373, 0, 1, 0, -1))
			{
				return false;
			}
			else
			{
				__LIB_3__::func_285(iLocal_1373[0], &Local_360, 0);
				__LIB_3__::func_285(iLocal_1373[6], &Local_360, 0);
				iLocal_1352 = 6;
			}
			break;
		case 6:
			return true;
	}
	return false;
}

bool func_14()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	func_52();
	switch (iLocal_1432)
	{
		case 0:
			AUDIO::SET_AMBIENT_ZONE_STATE("AZ_RESSH_Area", true, true);
			AUDIO::_0x3743CE6948194349("AZ_RESSH_Area", Local_360.f_51, 0f);
			__LIB_0__::func_11();
			if (iLocal_1035 == 1)
			{
				func_54();
			}
			iLocal_1432++;
			break;
		case 1:
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (__LIB_2__::func_1(iLocal_1373[iVar0], 0, 1))
				{
					PED::_0x923583741DC87BCE(iLocal_1373[iVar0], "Murfree");
					ENTITY::SET_ENTITY_VISIBLE(iLocal_1373[iVar0], false);
					__LIB_2__::func_133(iLocal_1373[iVar0], &(Local_554[iVar0 /*32*/].f_23), 0);
					PED::SET_PED_CONFIG_FLAG(iLocal_1373[iVar0], 315, true);
					PED::SET_PED_CONFIG_FLAG(iLocal_1373[iVar0], 317, true);
					PED::SET_PED_CONFIG_FLAG(iLocal_1373[iVar0], 516, true);
					WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_1373[iVar0], true, true);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_1373[iVar0], joaat("REL_CRIMINALS"));
					if (((((iVar0 != 6 && iVar0 != 7) && iVar0 != 8) && iVar0 != 9) && iVar0 != 12) && iVar0 != 13)
					{
						TASK::TASK_PLAY_ANIM(iLocal_1373[iVar0], Local_1285[5 /*2*/], Local_1285[5 /*2*/].f_1, 8f, -8f, -1, 1, 0f, false, 0, false, 0, false);
					}
				}
				iVar0++;
			}
			iLocal_1432++;
			break;
		case 2:
			iVar1 = 8;
			while (iVar1 <= 9)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_1373[iVar1]))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(iLocal_1373[iVar1], joaat("WEAPON_MELEE_TORCH"), -1, true, false, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
					PED::SET_PED_STEALTH_MOVEMENT(iLocal_1373[iVar1], 1, 0, 0);
					if (iVar1 == 8)
					{
						TASK::TASK_PLAY_ANIM(iLocal_1373[8], Local_1285[19 /*2*/], Local_1285[19 /*2*/].f_1, 8f, -8f, -1, 1, 0f, false, 0, false, 0, false);
					}
					if (iVar1 == 9)
					{
						TASK::TASK_PLAY_ANIM(iLocal_1373[8], Local_1285[5 /*2*/], Local_1285[5 /*2*/].f_1, 8f, -8f, -1, 1, 0f, false, 0, false, 0, false);
					}
				}
				iVar1++;
			}
			iLocal_1432++;
			break;
		case 3:
			iVar2 = 6;
			while (iVar2 <= 7)
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_1373[iVar2], Local_554[iVar2 /*32*/].f_6, true, false, true, true);
				ENTITY::SET_ENTITY_HEADING(iLocal_1373[iVar2], Local_554[iVar2 /*32*/].f_9);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_1373[iVar2], true);
				TASK::TASK_PLAY_ANIM(iLocal_1373[iVar2], Local_1285[24 /*2*/], Local_1285[24 /*2*/].f_1, 8f, -8f, -1, 2, 0f, false, 0, false, 0, false);
				iVar2++;
			}
			iLocal_1432++;
			break;
		case 4:
			iVar3 = 10;
			while (iVar3 <= 13)
			{
				TASK::SET_PED_PATH_MAY_ENTER_WATER(iLocal_1373[iVar3], true);
				TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(iLocal_1373[iVar3], false, 1f);
				__LIB_2__::func_272(iLocal_1373[iVar3], iLocal_1613, -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
				iVar3++;
			}
			__LIB_2__::func_272(iLocal_1373[10], joaat("WEAPON_BOW"), -1, 5, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			iLocal_1432++;
			break;
		case 5:
			return true;
	}
	return false;
}

bool func_16()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	func_68();
	switch (iLocal_1350)
	{
		case 0:
			if (PED::GET_MOUNT(Global_35) != 0)
			{
				iLocal_1373[14] = PED::GET_MOUNT(Global_35);
				iLocal_1372 = PED::GET_MOUNT(Global_35);
			}
			ENTITY::SET_ENTITY_VISIBLE(iLocal_1373[12], false);
			ENTITY::SET_ENTITY_VISIBLE(iLocal_1373[13], false);
			ENTITY::SET_ENTITY_VISIBLE(iLocal_1373[10], false);
			ENTITY::SET_ENTITY_VISIBLE(iLocal_1373[11], false);
			if (__LIB_3__::func_452(&Local_360, 0f, 35f, 30f, 1, 0, 1, -1082130432 /* Float: -1f */, 1, 1125515264 /* Float: 150f */, 0, 0))
			{
				__LIB_1__::func_148(&uLocal_1405);
				if (__LIB_10__::func_227("RESSH_START", 0))
				{
					bLocal_1425 = true;
				}
				MISC::_SET_WEATHER_TYPE(joaat("FOG"), false, true, true, 20f, false);
				iLocal_1350 = 1;
			}
			break;
		case 1:
			if (!bLocal_1424)
			{
				if ((__LIB_1__::func_205(Global_35, uLocal_1355[0], 1, 0) || __LIB_0__::func_665(Global_35, iLocal_1373[0], 1, 1) < fLocal_70[0]) || __LIB_0__::func_665(Global_35, iLocal_1373[0], 1, 1) < fLocal_70[6])
				{
					if (func_72())
					{
						__LIB_1__::func_148(&uLocal_1405);
						iLocal_1350 = 2;
						bLocal_1424 = true;
					}
				}
				else if (__LIB_0__::func_265(&uLocal_1405) > 10f)
				{
					__LIB_1__::func_148(&uLocal_1405);
					iLocal_1350 = 2;
				}
			}
			break;
		case 2:
			switch (iLocal_1449)
			{
				case 0:
					if (__LIB_0__::func_265(&uLocal_1405) > 1f)
					{
						bLocal_1430 = true;
						iLocal_1449++;
					}
					break;
				case 1:
					if (__LIB_0__::func_265(&uLocal_1405) > 4f)
					{
						__LIB_2__::func_303(Global_35, Global_35, "RESSH_PRE_ATTACK_WHAT_A", "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_1449++;
					}
					break;
				case 2:
					if (!__LIB_2__::func_136(Global_35, 0) && iLocal_1408[0])
					{
						__LIB_2__::func_303(Global_35, Global_35, "RESSH_PRE_ATTACK_WHAT_B", "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_1449++;
					}
					break;
				case 3:
					if (!__LIB_2__::func_136(Global_35, 0))
					{
						if (iLocal_1408[8] || iLocal_1408[9])
						{
							__LIB_2__::func_303(Global_35, Global_35, "RESSH_PRE_ATTACK_WHAT_C", "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							iLocal_1449++;
						}
					}
					break;
			}
			break;
		case 3:
			if (func_76())
			{
				__LIB_1__::func_148(&uLocal_1470);
				fLocal_1469 = 3f;
				iLocal_1350 = 6;
			}
			break;
		case 6:
			if (__LIB_0__::func_75(&uLocal_1470))
			{
				__LIB_1__::func_148(&uLocal_1470);
			}
			if (__LIB_0__::func_265(&uLocal_1470) >= fLocal_1469)
			{
				bVar3 = false;
				iVar2 = 0;
				while (iVar2 < 15)
				{
					if (!bVar3)
					{
						if (!PED::IS_PED_INJURED(iLocal_1373[iVar2]))
						{
							if (__LIB_0__::func_665(iLocal_1373[iVar2], Global_35, 1, 1) < 7f)
							{
								iVar4 = 8;
								if (iLocal_1450 == 0)
								{
									iVar4 = 6;
									iLocal_1450 = 1;
								}
								else
								{
									iVar4 = 8;
									iLocal_1450 = 0;
								}
								__LIB_2__::func_303(iLocal_1373[iVar2], Global_35, func_78(iVar4), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								__LIB_1__::func_148(&uLocal_1470);
								fLocal_1469 = BUILTIN::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(4, 7));
								bVar3 = true;
							}
						}
					}
					iVar2++;
				}
			}
			if ((((!__LIB_2__::func_1(iLocal_1373[12], 0, 1) && !__LIB_2__::func_1(iLocal_1373[13], 0, 1)) && !__LIB_2__::func_1(iLocal_1373[10], 0, 1)) && !__LIB_2__::func_1(iLocal_1373[11], 0, 1)) || (((__LIB_0__::func_665(Global_35, iLocal_1373[12], 1, 1) > 100f && __LIB_0__::func_665(Global_35, iLocal_1373[13], 1, 1) > 100f) && __LIB_0__::func_665(Global_35, iLocal_1373[10], 1, 1) > 100f) && __LIB_0__::func_665(Global_35, iLocal_1373[11], 1, 1) > 100f))
			{
				iVar0 = 0;
				while (iVar0 < 9 + 1)
				{
					iVar1 = iVar0;
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_1373[iVar1]))
					{
						if (!PED::_0x5102307CE88798EB(iLocal_1373[iVar1]))
						{
							PED::REQUEST_PED_VISIBILITY_TRACKING(iLocal_1373[iVar1]);
						}
						else if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_1373[iVar1]) || !PED::_0x164CECC59E70DF86(iLocal_1373[iVar1], 10f))
						{
							if (iVar0 == 8 || iVar0 == 9)
							{
								WEAPON::_0xCEF4C65DE502D367(iLocal_1373[iVar1], 1, 0, 1, 0);
							}
							PED::_0x3088634CF8C819CF(iLocal_1373[iVar1]);
							__LIB_2__::func_426(&(iLocal_1373[iVar1]));
						}
						if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_1373[iVar1]))
						{
							TASK::_TASK_FLEE_FROM_PED(iLocal_1373[iVar1], Global_35, 0f, 0f, 0f, 1000f, -1, 0, 1077936128 /* Float: 3f */, 0);
							__LIB_2__::func_788(&(iLocal_1373[iVar1]), 1, 0, 1);
							PED::SET_PED_USING_ACTION_MODE(iLocal_1373[iVar1], true, -1, 0);
						}
					}
					iVar0++;
				}
				__LIB_1__::func_148(&uLocal_1470);
				iLocal_1350 = 7;
			}
			break;
		case 7:
			if (__LIB_0__::func_265(&uLocal_1470) > 3f)
			{
				__LIB_2__::func_303(Global_35, Global_35, "RESSH_PLYFINAL", "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_10__::func_227("RESSH_END", 0);
				return true;
			}
			break;
	}
	return false;
}

void func_19(var uParam0, int iParam1, var uParam2, int iParam3, var uParam4, var uParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	var uVar5;
	int iVar9;
	if (MISC::ARE_STRINGS_EQUAL(MISC::_0xF81C53561D15F330(), __LIB_3__::func_165(uParam0->f_3)))
	{
		MISC::_0x1096603B519C905F("");
	}
	if (uParam0->f_48)
	{
		AUDIO::STOP_AUDIO_SCENE("RE_active_location_scene");
		if (!uParam0->f_45 && !uParam0->f_44)
		{
			__LIB_3__::func_238(uParam0->f_3, 524288);
		}
	}
	if (__LIB_2__::func_1(PLAYER::PLAYER_PED_ID(), 0, 1))
	{
		iVar1 = PED::GET_MOUNT(Global_35);
		PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
		iVar2 = uParam0->f_98;
		iVar0 = 0;
		while (iVar0 < *iParam1)
		{
			bVar3 = (bParam8 && DECORATOR::DECOR_EXIST_ON((*iParam1)[iVar0], "pedRoam_bInPedRoam"));
			if (__LIB_2__::func_1((*iParam1)[iVar0], 0, 0))
			{
				__LIB_4__::func_179((*iParam1)[iVar0], bVar3);
				if (__LIB_3__::func_239(uParam0, iParam1[iVar0]))
				{
					__LIB_2__::func_32(iParam1[iVar0]);
				}
			}
			if (!uParam0->f_50)
			{
				if (__LIB_2__::func_1((*iParam1)[iVar0], 0, 1))
				{
					if (bParam9)
					{
						if (PED::GET_PED_STEALTH_MOVEMENT((*iParam1)[iVar0]))
						{
							PED::SET_PED_STEALTH_MOVEMENT((*iParam1)[iVar0], 0, 0, 0);
						}
						else if (PED::_GET_PED_CROUCH_MOVEMENT((*iParam1)[iVar0]))
						{
							PED::_SET_PED_CROUCH_MOVEMENT((*iParam1)[iVar0], false, 0, false);
						}
					}
					if (!bVar3)
					{
						if (!bParam6)
						{
							__LIB_3__::func_416((*iParam1)[iVar0], 1073741824 /* Float: 2f */, __LIB_0__::func_514(iVar0 < iVar2, uParam0->f_98[iVar0], -1f), iVar1, 0);
						}
						else
						{
							TASK::TASK_WANDER_STANDARD((*iParam1)[iVar0], 40000f, 0);
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bParam7)
	{
		__LIB_4__::func_381(uParam0);
	}
	__LIB_3__::func_166(uParam0);
	if (!uParam0->f_186)
	{
		__LIB_3__::func_335(uParam0, iParam3);
	}
	if (uParam0->f_186)
	{
		iVar4 = __LIB_3__::func_167(uParam0->f_3, uParam0->f_185);
		MISC::_INT_TO_STRING(iVar4, "%u", &uVar5);
		iVar9 = 0;
		if (!uParam0->f_48)
		{
			iVar9 = 2;
		}
		else if (!uParam0->f_44)
		{
			iVar9 = 1;
		}
		__LIB_0__::func_701(7, iVar4, iVar9);
		uParam0->f_186 = 0;
	}
}

void func_32()
{
	Local_554[0 /*32*/].f_1 = joaat("G_M_M_UNISWAMP_01");
	Local_554[0 /*32*/] = 4;
	__LIB_3__::func_478(&(Local_554[0 /*32*/].f_22));
	StringCopy(&(Local_554[0 /*32*/].f_23), "SWAMP_GANG_4", 64);
	Local_554[1 /*32*/].f_1 = joaat("G_M_M_UNISWAMP_01");
	Local_554[1 /*32*/] = 4;
	__LIB_3__::func_478(&(Local_554[1 /*32*/].f_22));
	StringCopy(&(Local_554[1 /*32*/].f_23), "SWAMP_GANG_3", 64);
	Local_554[2 /*32*/].f_1 = joaat("G_M_M_UNISWAMP_01");
	Local_554[2 /*32*/] = 4;
	__LIB_3__::func_478(&(Local_554[2 /*32*/].f_22));
	StringCopy(&(Local_554[2 /*32*/].f_23), "SWAMP_GANG_4", 64);
	Local_554[3 /*32*/].f_1 = joaat("G_M_M_UNISWAMP_01");
	Local_554[3 /*32*/] = 4;
	__LIB_3__::func_478(&(Local_554[3 /*32*/].f_22));
	StringCopy(&(Local_554[3 /*32*/].f_23), "SWAMP_GANG_3", 64);
	Local_554[4 /*32*/].f_1 = joaat("G_M_M_UNISWAMP_01");
	Local_554[4 /*32*/] = 4;
	__LIB_3__::func_478(&(Local_554[4 /*32*/].f_22));
	StringCopy(&(Local_554[4 /*32*/].f_23), "SWAMP_GANG_4", 64);
	Local_554[6 /*32*/].f_1 = joaat("G_M_M_UNISWAMP_01");
	Local_554[6 /*32*/] = 4;
	__LIB_3__::func_478(&(Local_554[6 /*32*/].f_22));
	StringCopy(&(Local_554[6 /*32*/].f_23), "SWAMP_GANG_4", 64);
	Local_554[7 /*32*/].f_1 = joaat("G_M_M_UNISWAMP_01");
	Local_554[7 /*32*/] = 4;
	__LIB_3__::func_478(&(Local_554[7 /*32*/].f_22));
	StringCopy(&(Local_554[7 /*32*/].f_23), "SWAMP_GANG_4", 64);
	Local_554[8 /*32*/].f_1 = joaat("G_M_M_UNISWAMP_01");
	Local_554[8 /*32*/] = 4;
	__LIB_3__::func_478(&(Local_554[8 /*32*/].f_22));
	StringCopy(&(Local_554[8 /*32*/].f_23), "SWAMP_GANG_3", 64);
	Local_554[9 /*32*/].f_1 = joaat("G_M_M_UNISWAMP_01");
	Local_554[9 /*32*/] = 4;
	__LIB_3__::func_478(&(Local_554[9 /*32*/].f_22));
	StringCopy(&(Local_554[9 /*32*/].f_23), "SWAMP_GANG_4", 64);
	Local_554[12 /*32*/].f_1 = joaat("G_M_M_UNISWAMP_01");
	Local_554[12 /*32*/] = 4;
	StringCopy(&(Local_554[12 /*32*/].f_23), "SWAMP_GANG_4", 64);
	__LIB_3__::func_478(&(Local_554[12 /*32*/].f_22));
	Local_554[12 /*32*/].f_3 = -1288798431;
	Local_554[13 /*32*/].f_1 = joaat("G_M_M_UNISWAMP_01");
	Local_554[13 /*32*/] = 4;
	StringCopy(&(Local_554[13 /*32*/].f_23), "SWAMP_GANG_3", 64);
	__LIB_3__::func_478(&(Local_554[13 /*32*/].f_22));
	Local_554[13 /*32*/].f_3 = 1072634020;
	Local_554[10 /*32*/].f_1 = joaat("G_M_M_UNISWAMP_01");
	Local_554[10 /*32*/] = 4;
	StringCopy(&(Local_554[10 /*32*/].f_23), "SWAMP_GANG_4", 64);
	__LIB_3__::func_478(&(Local_554[10 /*32*/].f_22));
	Local_554[10 /*32*/].f_3 = 312619017;
	Local_554[11 /*32*/].f_1 = joaat("G_M_M_UNISWAMP_01");
	Local_554[11 /*32*/] = 4;
	StringCopy(&(Local_554[11 /*32*/].f_23), "SWAMP_GANG_3", 64);
	__LIB_3__::func_478(&(Local_554[11 /*32*/].f_22));
	Local_554[11 /*32*/].f_3 = 1232051623;
}

void func_33()
{
	__LIB_3__::func_445(&Local_554);
}

void func_34()
{
	if (__LIB_3__::func_390(61, 2, 0) >= 1)
	{
		iLocal_1035 = 0;
	}
	else
	{
		iLocal_1035 = 0;
	}
}

void func_35()
{
	Local_1285[5 /*2*/] = "script_re@stalking_shadows";
	Local_1285[5 /*2*/].f_1 = "idle_squat_ped_a";
	__LIB_3__::func_318(Local_1285[5 /*2*/], &uLocal_1036);
	Local_1285[6 /*2*/] = "script_re@stalking_shadows";
	Local_1285[6 /*2*/].f_1 = "idle_squat_ped_b";
	__LIB_3__::func_318(Local_1285[6 /*2*/], &uLocal_1036);
	Local_1285[7 /*2*/] = "script_re@stalking_shadows";
	Local_1285[7 /*2*/].f_1 = "run_start_ped_a";
	__LIB_3__::func_318(Local_1285[7 /*2*/], &uLocal_1036);
	Local_1285[0 /*2*/] = "script_re@stalking_shadows";
	Local_1285[0 /*2*/].f_1 = "look_left_ped_a";
	__LIB_3__::func_318(Local_1285[0 /*2*/], &uLocal_1036);
	Local_1285[1 /*2*/] = "script_re@stalking_shadows";
	Local_1285[1 /*2*/].f_1 = "look_left_ped_b";
	__LIB_3__::func_318(Local_1285[1 /*2*/], &uLocal_1036);
	Local_1285[2 /*2*/] = "script_re@stalking_shadows";
	Local_1285[2 /*2*/].f_1 = "look_right_ped_b";
	__LIB_3__::func_318(Local_1285[2 /*2*/], &uLocal_1036);
	Local_1285[3 /*2*/] = "script_re@stalking_shadows";
	Local_1285[3 /*2*/].f_1 = "run_a_ped_a";
	__LIB_3__::func_318(Local_1285[3 /*2*/], &uLocal_1036);
	Local_1285[4 /*2*/] = "script_re@stalking_shadows";
	Local_1285[4 /*2*/].f_1 = "run_v1";
	__LIB_3__::func_318(Local_1285[4 /*2*/], &uLocal_1036);
	Local_1285[8 /*2*/] = "script_re@stalking_shadows";
	Local_1285[8 /*2*/].f_1 = "stop_left_run_ped_a";
	__LIB_3__::func_318(Local_1285[8 /*2*/], &uLocal_1036);
	Local_1285[9 /*2*/] = "script_re@stalking_shadows";
	Local_1285[9 /*2*/].f_1 = "stop_left_run_ped_b";
	__LIB_3__::func_318(Local_1285[9 /*2*/], &uLocal_1036);
	Local_1285[10 /*2*/] = "script_re@stalking_shadows";
	Local_1285[10 /*2*/].f_1 = "stop_right_run_ped_a";
	__LIB_3__::func_318(Local_1285[10 /*2*/], &uLocal_1036);
	Local_1285[15 /*2*/] = "script_re@stalking_shadows@parallel";
	Local_1285[15 /*2*/].f_1 = "start_parallel_left_ped_a";
	__LIB_3__::func_318(Local_1285[15 /*2*/], &uLocal_1036);
	Local_1285[16 /*2*/] = "script_re@stalking_shadows@parallel";
	Local_1285[16 /*2*/].f_1 = "start_b_left_ped_b";
	__LIB_3__::func_318(Local_1285[16 /*2*/], &uLocal_1036);
	Local_1285[17 /*2*/] = "script_re@stalking_shadows@parallel";
	Local_1285[17 /*2*/].f_1 = "start_parallel_right_ped_a";
	__LIB_3__::func_318(Local_1285[17 /*2*/], &uLocal_1036);
	Local_1285[18 /*2*/] = "script_re@stalking_shadows@walks@with_torch";
	Local_1285[18 /*2*/].f_1 = "walk_a";
	__LIB_3__::func_318(Local_1285[18 /*2*/], &uLocal_1036);
	Local_1285[19 /*2*/] = "script_re@stalking_shadows@parallel";
	Local_1285[19 /*2*/].f_1 = "idle_b_ped_b";
	__LIB_3__::func_318(Local_1285[19 /*2*/], &uLocal_1036);
	Local_1285[11 /*2*/] = "script_re@stalking_shadows@parallel";
	Local_1285[11 /*2*/].f_1 = "parallel_left_ped_a";
	__LIB_3__::func_318(Local_1285[11 /*2*/], &uLocal_1036);
	Local_1285[12 /*2*/] = "script_re@stalking_shadows@parallel";
	Local_1285[12 /*2*/].f_1 = "parallel_b_left_ped_b";
	__LIB_3__::func_318(Local_1285[12 /*2*/], &uLocal_1036);
	Local_1285[14 /*2*/] = "script_re@stalking_shadows@parallel";
	Local_1285[14 /*2*/].f_1 = "parallel_right_ped_a";
	__LIB_3__::func_318(Local_1285[14 /*2*/], &uLocal_1036);
	Local_1285[20 /*2*/] = "script_re@stalking_shadows@parallel";
	Local_1285[20 /*2*/].f_1 = "stop_parallel_left_ped_a";
	__LIB_3__::func_318(Local_1285[20 /*2*/], &uLocal_1036);
	Local_1285[13 /*2*/] = "script_re@stalking_shadows@parallel";
	Local_1285[13 /*2*/].f_1 = "stop_b_left_ped_b";
	__LIB_3__::func_318(Local_1285[13 /*2*/], &uLocal_1036);
	Local_1285[21 /*2*/] = "script_re@stalking_shadows@parallel";
	Local_1285[21 /*2*/].f_1 = "stop_parallel_right_ped_a";
	__LIB_3__::func_318(Local_1285[21 /*2*/], &uLocal_1036);
	Local_1285[22 /*2*/] = "script_re@stalking_shadows@parallel";
	Local_1285[22 /*2*/].f_1 = "run_stop_ped_b";
	__LIB_3__::func_318(Local_1285[22 /*2*/], &uLocal_1036);
	Local_1285[26 /*2*/] = "script_re@stalking_shadows@jump_from_tree";
	Local_1285[26 /*2*/].f_1 = "jump_backleft_run";
	__LIB_3__::func_318(Local_1285[26 /*2*/], &uLocal_1036);
	Local_1285[27 /*2*/] = "script_re@stalking_shadows@jump_from_tree";
	Local_1285[27 /*2*/].f_1 = "jump_backright_run";
	__LIB_3__::func_318(Local_1285[27 /*2*/], &uLocal_1036);
	Local_1285[25 /*2*/] = "script_re@stalking_shadows@jump_from_tree";
	Local_1285[25 /*2*/].f_1 = "jump_left_run";
	__LIB_3__::func_318(Local_1285[25 /*2*/], &uLocal_1036);
	Local_1285[23 /*2*/] = "script_re@stalking_shadows@jump_from_tree";
	Local_1285[23 /*2*/].f_1 = "jump_right_run";
	__LIB_3__::func_318(Local_1285[23 /*2*/], &uLocal_1036);
	Local_1285[24 /*2*/] = "script_re@stalking_shadows@jump_from_tree";
	Local_1285[24 /*2*/].f_1 = "tree_idle";
	__LIB_3__::func_318(Local_1285[24 /*2*/], &uLocal_1036);
	Local_1285[28 /*2*/] = "script_re@spooked_horse@emerge";
	Local_1285[28 /*2*/].f_1 = "emerge_rt_fast_bow";
	__LIB_3__::func_318(Local_1285[28 /*2*/], &uLocal_1036);
	Local_1285[30 /*2*/] = "script_re@spooked_horse@emerge";
	Local_1285[30 /*2*/].f_1 = "emerge_lt_fast_machette_b";
	__LIB_3__::func_318(Local_1285[30 /*2*/], &uLocal_1036);
	Local_1285[29 /*2*/] = "script_re@spooked_horse@emerge";
	Local_1285[29 /*2*/].f_1 = "emerge_rt_fast_machette";
	__LIB_3__::func_318(Local_1285[29 /*2*/], &uLocal_1036);
}

bool func_48()
{
	vector3 vVar0;
	if (__LIB_4__::func_4(Global_36, &vVar0, 1f, 1, 0))
	{
		if (!__LIB_0__::func_266(Global_35, vVar0, 6f, 1, 1))
		{
			return true;
		}
	}
	return false;
}

void func_52()
{
	if (__LIB_0__::func_214(joaat("WEAPON_MELEE_MACHETE")))
	{
		iLocal_1613 = joaat("WEAPON_MELEE_MACHETE");
	}
	else if (__LIB_0__::func_214(joaat("WEAPON_MELEE_HATCHET_MELEEONLY")))
	{
		iLocal_1613 = joaat("WEAPON_MELEE_HATCHET_MELEEONLY");
	}
	else
	{
		iLocal_1613 = joaat("WEAPON_MELEE_KNIFE");
	}
}

void func_54()
{
	iLocal_359 = VEHICLE::CREATE_VEHICLE(__LIB_4__::func_379(), vLocal_60, fLocal_69, true, true, false, false);
	ENTITY::_0x9587913B9E772D29(iLocal_359, 0);
	__LIB_2__::func_19(iLocal_359);
}

void func_68()
{
	if (!bLocal_1428)
	{
		if (__LIB_0__::func_265(&uLocal_1405) > 10f)
		{
			if (__LIB_10__::func_227("RESSH_MID", 0))
			{
				bLocal_1428 = true;
			}
		}
	}
	func_184();
	func_185();
	func_186();
	func_187();
	if (iLocal_1350 > 0)
	{
		if (!bLocal_1427)
		{
			if (!PED::IS_PED_ON_MOUNT(Global_35))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_1372))
				{
					TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_1372, Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
					TASK::TASK_SMART_FLEE_PED(iLocal_1372, Global_35, 50f, -1, 0, 2f, 0);
					bLocal_1427 = true;
				}
			}
		}
	}
}

bool func_72()
{
	int iVar0;
	int iVar1;
	switch (iVar0)
	{
		case 0:
			AUDIO::_PLAY_SOUND_FROM_POSITION("creature_scream", Local_554[0 /*32*/].f_6, "RESSH_sounds", false, 0, true, 0);
			if (PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()))
			{
				iVar1 = PED::GET_MOUNT(PLAYER::PLAYER_PED_ID());
			}
			else
			{
				return true;
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				TASK::TASK_HORSE_ACTION(iVar1, 5, 0, 0);
				return true;
			}
			break;
		case 1:
			if (PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()))
			{
				iVar1 = PED::GET_MOUNT(PLAYER::PLAYER_PED_ID());
			}
			else
			{
				return true;
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				TASK::TASK_HORSE_ACTION(iVar1, 5, 0, 0);
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_1372, 0f);
				return true;
			}
			break;
	}
	return false;
}

bool func_76()
{
	int iVar0;
	int iVar1;
	var uVar2[15];
	int iVar18;
	if (!bLocal_1429)
	{
		switch (iLocal_1431)
		{
			case 0:
				if (func_192())
				{
					func_193();
					AUDIO::_PLAY_SOUND_FROM_POSITION("creature_scream", ENTITY::GET_ENTITY_COORDS(Global_35, true, false) + Vector(0f, 0f, -5f), "RESSH_sounds", false, 0, true, 0);
					iLocal_1431++;
				}
				break;
			case 1:
				if (__LIB_0__::func_396(Global_35))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_1372, 0f);
					func_195();
					iLocal_1431++;
				}
				else
				{
					iLocal_1431++;
				}
				break;
			case 2:
				if (func_196())
				{
					if (func_197())
					{
						func_198();
						__LIB_1__::func_148(&uLocal_1470);
						iLocal_1431++;
					}
				}
				break;
			case 3:
				if (((!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_1373[12]) && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_1373[13])) && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_1373[10])) && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_1373[11]))
				{
					ENTITY::SET_ENTITY_VISIBLE(iLocal_1373[12], true);
					ENTITY::SET_ENTITY_VISIBLE(iLocal_1373[13], true);
					ENTITY::SET_ENTITY_VISIBLE(iLocal_1373[10], true);
					ENTITY::SET_ENTITY_VISIBLE(iLocal_1373[11], true);
					if (!Local_360.f_44)
					{
						Local_360.f_44 = 1;
					}
					func_199();
					__LIB_2__::func_303(Global_35, Global_35, "RESSH_AMBUSH_RESP", "", 100f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
					__LIB_1__::func_148(&uLocal_1470);
					iLocal_1431++;
				}
				break;
			case 4:
				if (__LIB_0__::func_265(&uLocal_1470) > 2f)
				{
					__LIB_2__::func_303(iLocal_1373[12], Global_35, func_78(4), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_2__::func_315(1891783641, iLocal_1373[12], 1);
					__LIB_1__::func_148(&uLocal_1470);
					iLocal_1431++;
				}
				break;
			case 5:
				if (__LIB_0__::func_265(&uLocal_1470) > 2.5f)
				{
					__LIB_2__::func_303(iLocal_1373[13], Global_35, func_78(5), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_2__::func_315(1891783641, iLocal_1373[13], 1);
					__LIB_1__::func_148(&uLocal_1470);
					iLocal_1431++;
				}
				break;
			case 6:
				__LIB_2__::func_73(iLocal_1373[12], &(uLocal_1389[12]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
				__LIB_2__::func_73(iLocal_1373[13], &(uLocal_1389[13]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
				__LIB_2__::func_73(iLocal_1373[10], &(uLocal_1389[10]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
				__LIB_2__::func_73(iLocal_1373[11], &(uLocal_1389[11]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
				__LIB_1__::func_148(&uLocal_1470);
				iLocal_1431++;
				break;
			case 7:
				return true;
		}
	}
	else
	{
		switch (iLocal_1431)
		{
			case 0:
				iVar1 = 10;
				while (iVar1 <= 13)
				{
					__LIB_1__::func_338(iLocal_1373[iVar1], vLocal_313[iVar1 /*3*/]);
					ENTITY::SET_ENTITY_HEADING(iLocal_1373[iVar1], fLocal_134[iVar1]);
					iVar1++;
				}
				func_198();
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_1373[11], true);
				AUDIO::_PLAY_SOUND_FROM_POSITION("creature_scream", ENTITY::GET_ENTITY_COORDS(Global_35, true, false) + Vector(0f, 0f, -5f), "RESSH_sounds", false, 0, true, 0);
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_1372, 0f);
				func_193();
				if (!Local_360.f_44)
				{
					Local_360.f_44 = 1;
				}
				__LIB_1__::func_148(&uLocal_1470);
				iLocal_1431++;
				break;
			case 1:
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_1372, 0f);
				func_195();
				__LIB_1__::func_148(&uLocal_1470);
				iLocal_1431++;
				break;
			case 2:
				if (__LIB_0__::func_265(&uLocal_1470) > 1f)
				{
					iVar1 = 10;
					while (iVar1 <= 13)
					{
						ENTITY::SET_ENTITY_VISIBLE(iLocal_1373[iVar1], true);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_1373[iVar1], false);
						iVar1++;
					}
					PED::SET_PED_USING_ACTION_MODE(iLocal_1373[12], true, -1, 0);
					__LIB_2__::func_303(iLocal_1373[12], Global_35, func_78(4), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_2__::func_73(iLocal_1373[12], &(uLocal_1389[12]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
					__LIB_1__::func_148(&uLocal_1470);
					iLocal_1431++;
				}
				break;
			case 3:
				iVar0 = 0;
				while (iVar0 < 15)
				{
					if (iVar0 == 12)
					{
						TASK::OPEN_SEQUENCE_TASK(&(uVar2[iVar0]));
						TASK::TASK_PLAY_ANIM(0, sLocal_233[iVar0], sLocal_217[iVar0], 8f, -8f, -1, 0, 0f, false, 0, false, 0, false);
						TASK::TASK_COMBAT_PED(0, Global_35, 1048576, 0);
						__LIB_1__::func_474(iLocal_1373[iVar0], &(uVar2[iVar0]), 0, 0, 1, 1);
					}
					if (iVar0 == 13)
					{
						TASK::OPEN_SEQUENCE_TASK(&(uVar2[iVar0]));
						TASK::TASK_PLAY_ANIM(0, sLocal_233[iVar0], sLocal_217[iVar0], 8f, -8f, -1, 0, 0f, false, 0, false, 0, false);
						TASK::TASK_COMBAT_PED(0, Global_35, 1048576, 0);
						__LIB_1__::func_474(iLocal_1373[iVar0], &(uVar2[iVar0]), 0, 0, 1, 1);
					}
					if (iVar0 == 10)
					{
						TASK::OPEN_SEQUENCE_TASK(&(uVar2[iVar0]));
						TASK::TASK_PLAY_ANIM(0, sLocal_233[iVar0], sLocal_217[iVar0], 8f, -8f, -1, 0, 0f, false, 0, false, 0, false);
						TASK::TASK_COMBAT_PED(0, Global_35, 1048576, 0);
						__LIB_1__::func_474(iLocal_1373[iVar0], &(uVar2[iVar0]), 1.5f, 1.5f, 1, 1);
					}
					if (iVar0 == 11)
					{
						TASK::OPEN_SEQUENCE_TASK(&(uVar2[iVar0]));
						TASK::TASK_PLAY_ANIM(0, sLocal_233[iVar0], sLocal_217[iVar0], 8f, -8f, -1, 0, 0f, false, 0, false, 0, false);
						__LIB_1__::func_474(iLocal_1373[iVar0], &(uVar2[iVar0]), 0.5f, 0.5f, 1, 1);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_1373[iVar0], false);
					}
					if (iVar0 != 12)
					{
						PED::_0xB8DE69D9473B7593(iLocal_1373[iVar0], 12);
					}
					ENTITY::SET_ENTITY_INVINCIBLE(iLocal_1373[iVar0], false);
					PED::SET_PED_USING_ACTION_MODE(iLocal_1373[iVar0], true, -1, 0);
					iVar0++;
				}
				__LIB_2__::func_303(Global_35, Global_35, "RESSH_AMBUSH_RESP", "", 100f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				__LIB_2__::func_73(iLocal_1373[11], &(uLocal_1389[11]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
				__LIB_2__::func_73(iLocal_1373[10], &(uLocal_1389[10]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
				__LIB_1__::func_148(&uLocal_1470);
				iLocal_1431++;
				break;
			case 4:
				if (__LIB_0__::func_265(&uLocal_1470) > 1f)
				{
					if (PED::IS_PED_ON_MOUNT(Global_35))
					{
						if (PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()))
						{
							iVar18 = PED::GET_MOUNT(PLAYER::PLAYER_PED_ID());
						}
						TASK::TASK_HORSE_ACTION(iVar18, 2, 0, 0);
					}
					__LIB_2__::func_303(iLocal_1373[13], Global_35, func_78(5), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_2__::func_73(iLocal_1373[13], &(uLocal_1389[13]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
					__LIB_1__::func_148(&uLocal_1470);
					iLocal_1431++;
				}
				break;
			case 5:
				TASK::TASK_COMBAT_PED(iLocal_1373[11], Global_35, 1048576, 0);
				__LIB_1__::func_148(&uLocal_1470);
				iLocal_1431++;
				break;
			case 6:
				if (__LIB_0__::func_265(&uLocal_1470) > 1f)
				{
					__LIB_1__::func_148(&uLocal_1470);
					return true;
					iLocal_1431++;
				}
				break;
		}
	}
	return false;
}

char* func_78(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SWAMP3_CALLOUT_CLICK";
		case 1:
			return "SWAMP4_CALLOUT_CLICK";
		case 2:
			return "";
		case 3:
			return "";
		case 4:
			return "SWAMP4_URGENT_CLICK";
		case 5:
			return "SWAMP4_URGENT_CLICK";
		case 6:
			return "TAUNT_GEN_NEUTRAL";
		case 7:
			return "GENERIC_SHOCKED_HIGH";
		case 8:
			return "ATTACK_LUNGE_CRY";
		case 9:
			return "";
		case 10:
			return "RESSH_FLEE";
	}
	return "RERC_ODR_V1_END_A";
}

void func_184()
{
	int iVar0;
	var uVar1[15];
	var uVar17[15];
	int iVar33;
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		fLocal_1468 = ENTITY::GET_ENTITY_SPEED(PED::GET_MOUNT(Global_35));
	}
	else
	{
		fLocal_1468 = ENTITY::GET_ENTITY_SPEED(Global_35);
	}
	if ((iLocal_1350 < 3 && iLocal_1350 > 0) && bLocal_1430)
	{
		if (bLocal_1425)
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (iVar0 != 12 && iVar0 != 13)
				{
					if (((iVar0 != 8 && iVar0 != 9) && iVar0 != 6) && iVar0 != 7)
					{
						if (!iLocal_1408[iVar0])
						{
							if (fLocal_1468 > 8f)
							{
								fLocal_86[iVar0] = (fLocal_70[iVar0] + 10f);
							}
							else
							{
								fLocal_86[iVar0] = fLocal_70[iVar0];
							}
							if (iVar0 == 5)
							{
								iVar33 = 0;
							}
							if (iVar0 == 1)
							{
								iVar33 = 0;
							}
							if (iVar0 == 3)
							{
								iVar33 = 0;
							}
							if (iVar0 == 0)
							{
								iVar33 = 1;
							}
							if (iVar0 == 2)
							{
								iVar33 = 1;
							}
							if (iVar0 == 4)
							{
								iVar33 = 1;
							}
							if ((__LIB_0__::func_665(Global_35, iLocal_1373[iVar0], 1, 1) < fLocal_86[iVar0] && CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(iLocal_1373[iVar0], true, false), fLocal_118[iVar0])) || iVar0 == 0)
							{
								__LIB_2__::func_303(iLocal_1373[iVar0], Global_35, func_78(iVar33), "", 100f, 0, 0, 0, 2, 1, 0, 1744022339, 1, 0, 0);
								ENTITY::SET_ENTITY_VISIBLE(iLocal_1373[iVar0], true);
								TASK::OPEN_SEQUENCE_TASK(&(uVar1[iVar0]));
								TASK::TASK_PLAY_ANIM(0, uLocal_201[iVar0], uLocal_185[iVar0], 8f, -8f, -1, 0, 0f, false, 0, false, 0, false);
								TASK::TASK_PLAY_ANIM(0, sLocal_233[iVar0], sLocal_217[iVar0], 8f, -8f, -1, 0, 0f, false, 0, false, 0, false);
								if (iLocal_150[iVar0])
								{
									TASK::TASK_PLAY_ANIM(0, sLocal_233[iVar0], sLocal_217[iVar0], 8f, -8f, -1, 0, 0f, false, 0, false, 0, false);
								}
								if (iLocal_166[iVar0])
								{
									TASK::TASK_PLAY_ANIM(0, sLocal_233[iVar0], sLocal_217[iVar0], 8f, -8f, -1, 0, 0f, false, 0, false, 0, false);
									TASK::TASK_PLAY_ANIM(0, sLocal_233[iVar0], sLocal_217[iVar0], 8f, -8f, -1, 0, 0f, false, 0, false, 0, false);
								}
								TASK::TASK_PLAY_ANIM(0, uLocal_265[iVar0], uLocal_249[iVar0], 8f, -8f, -1, 0, 0f, false, 0, false, 0, false);
								__LIB_1__::func_474(iLocal_1373[iVar0], &(uVar1[iVar0]), 0, 0, 1, 1);
								iLocal_1408[iVar0] = 1;
							}
						}
					}
					if (iVar0 == 8 || iVar0 == 9)
					{
						if (!iLocal_1408[iVar0])
						{
							switch (uLocal_1451[iVar0])
							{
								case 0:
									if ((VOLUME::_DOES_VOLUME_EXIST(uLocal_1355[iVar0]) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uLocal_1355[iVar0], true, 0)) || (__LIB_0__::func_665(Global_35, iLocal_1373[iVar0], 1, 1) < fLocal_70[iVar0] && CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(iLocal_1373[iVar0], true, false), fLocal_118[iVar0])))
									{
										ENTITY::SET_ENTITY_VISIBLE(iLocal_1373[iVar0], true);
										TASK::OPEN_SEQUENCE_TASK(&(uVar1[iVar0]));
										TASK::TASK_PLAY_ANIM(0, uLocal_201[iVar0], uLocal_185[iVar0], 8f, -8f, -1, 0, 0f, false, 0, false, 0, false);
										TASK::TASK_PLAY_ANIM(0, sLocal_233[iVar0], sLocal_217[iVar0], 8f, -8f, -1, 0, 0f, false, 0, false, 0, false);
										if (iLocal_150[iVar0])
										{
											TASK::TASK_PLAY_ANIM(0, sLocal_233[iVar0], sLocal_217[iVar0], 8f, -8f, -1, 0, 0f, false, 0, false, 0, false);
											TASK::TASK_PLAY_ANIM(0, sLocal_233[iVar0], sLocal_217[iVar0], 8f, -8f, -1, 0, 0f, false, 0, false, 0, false);
											TASK::TASK_PLAY_ANIM(0, sLocal_233[iVar0], sLocal_217[iVar0], 8f, -8f, -1, 0, 0f, false, 0, false, 0, false);
										}
										if (iLocal_166[iVar0])
										{
										}
										TASK::TASK_PLAY_ANIM(0, uLocal_265[iVar0], uLocal_249[iVar0], 8f, -8f, -1, 0, 0f, false, 0, false, 0, false);
										TASK::TASK_PLAY_ANIM(0, uLocal_297[iVar0], uLocal_281[iVar0], 8f, -8f, -1, 1, 0f, false, 0, false, 0, false);
										__LIB_1__::func_474(iLocal_1373[iVar0], &(uVar1[iVar0]), 0, 0, 1, 1);
										iLocal_1408[iVar0] = 1;
									}
									break;
								case 1:
									if (__LIB_0__::func_665(Global_35, iLocal_1373[iVar0], 1, 1) < fLocal_70[iVar0])
									{
										TASK::OPEN_SEQUENCE_TASK(&(uVar1[iVar0]));
										TASK::TASK_PLAY_ANIM(0, uLocal_201[iVar0], uLocal_185[iVar0], 8f, -8f, -1, 0, 0f, false, 0, false, 0, false);
										TASK::TASK_PLAY_ANIM(0, sLocal_233[iVar0], sLocal_217[iVar0], 8f, -8f, -1, 0, 0f, false, 0, false, 0, false);
										TASK::TASK_PLAY_ANIM(0, uLocal_265[iVar0], uLocal_249[iVar0], 8f, -8f, -1, 0, 0f, false, 0, false, 0, false);
										TASK::TASK_PLAY_ANIM(iLocal_1373[iVar0], Local_1285[19 /*2*/], Local_1285[19 /*2*/].f_1, 8f, -8f, -1, 1, 0f, false, 0, false, 0, false);
										__LIB_1__::func_474(iLocal_1373[iVar0], &(uVar1[iVar0]), 0, 0, 1, 1);
										uLocal_1451[iVar0]++;
									}
									break;
								case 2:
									if (__LIB_0__::func_665(Global_35, iLocal_1373[iVar0], 1, 1) < fLocal_70[iVar0])
									{
										TASK::OPEN_SEQUENCE_TASK(&(uVar1[iVar0]));
										TASK::TASK_PLAY_ANIM(0, uLocal_201[iVar0], uLocal_185[iVar0], 8f, -8f, -1, 0, 0f, false, 0, false, 0, false);
										TASK::TASK_PLAY_ANIM(0, sLocal_233[iVar0], sLocal_217[iVar0], 8f, -8f, -1, 0, 0f, false, 0, false, 0, false);
										TASK::TASK_PLAY_ANIM(0, uLocal_265[iVar0], uLocal_249[iVar0], 8f, -8f, -1, 0, 0f, false, 0, false, 0, false);
										TASK::TASK_PLAY_ANIM(iLocal_1373[iVar0], Local_1285[19 /*2*/], Local_1285[19 /*2*/].f_1, 8f, -8f, -1, 1, 0f, false, 0, false, 0, false);
										__LIB_1__::func_474(iLocal_1373[iVar0], &(uVar1[iVar0]), 0, 0, 1, 1);
										uLocal_1451[iVar0]++;
									}
									break;
								case 3:
									if (__LIB_0__::func_665(Global_35, iLocal_1373[iVar0], 1, 1) < fLocal_70[iVar0])
									{
										TASK::OPEN_SEQUENCE_TASK(&(uVar1[iVar0]));
										TASK::TASK_PLAY_ANIM(0, uLocal_201[iVar0], uLocal_185[iVar0], 8f, -8f, -1, 0, 0f, false, 0, false, 0, false);
										TASK::TASK_PLAY_ANIM(0, sLocal_233[iVar0], sLocal_217[iVar0], 8f, -8f, -1, 0, 0f, false, 0, false, 0, false);
										TASK::TASK_PLAY_ANIM(0, uLocal_265[iVar0], uLocal_249[iVar0], 8f, -8f, -1, 0, 0f, false, 0, false, 0, false);
										TASK::TASK_PLAY_ANIM(iLocal_1373[iVar0], Local_1285[19 /*2*/], Local_1285[19 /*2*/].f_1, 8f, -8f, -1, 1, 0f, false, 0, false, 0, false);
										__LIB_1__::func_474(iLocal_1373[iVar0], &(uVar1[iVar0]), 0, 0, 1, 1);
										uLocal_1451[iVar0]++;
									}
									break;
								case 4:
									iLocal_1408[iVar0] = 1;
									break;
							}
						}
					}
					if (iVar0 == 6 || iVar0 == 7)
					{
						if (!iLocal_1408[iVar0] && __LIB_2__::func_1(iLocal_1373[iVar0], 0, 1))
						{
							fLocal_102[iVar0] = fLocal_102[iVar0];
							if ((__LIB_0__::func_665(Global_35, iLocal_1373[iVar0], 1, 1) < fLocal_70[iVar0] && CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(iLocal_1373[iVar0], true, false), fLocal_118[iVar0])) || (iVar0 == 6 && bLocal_182))
							{
								switch (uLocal_1433[iVar0])
								{
									case 0:
										ENTITY::FREEZE_ENTITY_POSITION(iLocal_1373[iVar0], false);
										__LIB_2__::func_303(iLocal_1373[iVar0], Global_35, func_78(1), "", 100f, 0, 0, 0, 2, 1, 0, 1744022339, 1, 0, 0);
										ENTITY::SET_ENTITY_VISIBLE(iLocal_1373[iVar0], true);
										TASK::OPEN_SEQUENCE_TASK(&(uVar17[iVar0]));
										TASK::TASK_PLAY_ANIM(0, sLocal_233[iVar0], sLocal_217[iVar0], 8f, -8f, -1, 0, 0f, false, 0, false, 0, false);
										TASK::TASK_PLAY_ANIM(0, uLocal_265[iVar0], uLocal_249[iVar0], 8f, -8f, -1, 0, 0f, false, 0, false, 0, false);
										if (iLocal_150[iVar0])
										{
											TASK::TASK_PLAY_ANIM(0, uLocal_265[iVar0], uLocal_249[iVar0], 8f, -8f, -1, 0, 0f, false, 0, false, 0, false);
											TASK::TASK_PLAY_ANIM(0, uLocal_265[iVar0], uLocal_249[iVar0], 8f, -8f, -1, 0, 0f, false, 0, false, 0, false);
											TASK::TASK_PLAY_ANIM(0, uLocal_265[iVar0], uLocal_249[iVar0], 8f, -8f, -1, 0, 0f, false, 0, false, 0, false);
										}
										__LIB_1__::func_474(iLocal_1373[iVar0], &(uVar17[iVar0]), 0, 0, 1, 1);
										uLocal_1433[iVar0]++;
										break;
									case 1:
										iLocal_1408[iVar0] = 1;
										break;
								}
							}
						}
					}
				}
				iVar0++;
			}
		}
	}
}

void func_185()
{
	if (!bLocal_1426)
	{
		if (iLocal_1350 < 6 && iLocal_1350 > 1)
		{
			if ((MISC::GET_FRAME_COUNT() % 30) == 0)
			{
				if (!PATHFIND::IS_POINT_ON_ROAD(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 0))
				{
					if (func_48())
					{
						bLocal_1426 = true;
						iLocal_1350 = 3;
					}
				}
			}
			if (__LIB_1__::func_205(Global_35, iLocal_1371, 1, 0) || __LIB_0__::func_94(Global_35, vLocal_63, 1) < 10f)
			{
				bLocal_1429 = true;
				iLocal_1350 = 3;
			}
		}
	}
	if (iLocal_1035 == 1)
	{
		if (__LIB_0__::func_94(Global_35, vLocal_60, 1) < 5f)
		{
			bLocal_1426 = true;
			iLocal_1350 = 3;
		}
	}
	if (iLocal_1350 == 0)
	{
		if ((MISC::GET_FRAME_COUNT() % 30) == 0)
		{
			if (!PATHFIND::IS_POINT_ON_ROAD(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 0))
			{
				if (func_48())
				{
					func_193();
					bLocal_1426 = true;
					func_2();
				}
			}
		}
	}
}

void func_186()
{
	int iVar0;
	if (iLocal_1350 < 3)
	{
		iVar0 = 0;
		while (iVar0 < 15)
		{
			if ((iVar0 != 12 && iVar0 != 13) && !__LIB_0__::func_125(iLocal_1373[iVar0]))
			{
				if (__LIB_2__::func_1(iLocal_1373[iVar0], 0, 1))
				{
					if (__LIB_0__::func_665(iLocal_1373[iVar0], Global_35, 1, 1) < 5f || func_317(iLocal_1373[iVar0]))
					{
						TASK::_TASK_FLEE_FROM_PED(iLocal_1373[iVar0], Global_35, 0f, 0f, 0f, 1000f, -1, 0, 1077936128 /* Float: 3f */, 0);
						PED::SET_PED_USING_ACTION_MODE(iLocal_1373[iVar0], true, -1, 0);
						__LIB_2__::func_788(&(iLocal_1373[iVar0]), 1, 0, 1);
					}
				}
			}
			iVar0++;
		}
	}
}

void func_187()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if ((iVar0 != 12 && iVar0 != 13) && iVar0 != 8)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_1373[iVar0]))
			{
				if (__LIB_0__::func_94(iLocal_1373[iVar0], vLocal_14[iVar0 /*3*/], 1) < 2f)
				{
					if (!PED::_0x5102307CE88798EB(iLocal_1373[iVar0]))
					{
						PED::REQUEST_PED_VISIBILITY_TRACKING(iLocal_1373[iVar0]);
					}
					else if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_1373[iVar0]) || !PED::_0x164CECC59E70DF86(iLocal_1373[iVar0], 90f))
					{
						if (iVar0 == 8 || iVar0 == 9)
						{
							WEAPON::_0xCEF4C65DE502D367(iLocal_1373[iVar0], 1, 0, 1, 0);
						}
						PED::_0x3088634CF8C819CF(iLocal_1373[iVar0]);
						__LIB_2__::func_426(&(iLocal_1373[iVar0]));
					}
					else
					{
						TASK::_TASK_FLEE_FROM_PED(iLocal_1373[iVar0], Global_35, 0f, 0f, 0f, 1000f, -1, 0, 1077936128 /* Float: 3f */, 0);
						__LIB_2__::func_788(&(iLocal_1373[iVar0]), 1, 0, 1);
					}
				}
			}
		}
		iVar0++;
	}
}

bool func_192()
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;
	var uVar8;
	var uVar11;
	var uVar14;
	int iVar15;
	vVar1 = { Global_36 };
	vVar4 = { Global_36 + Vector(1f, 0f, 0f) };
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(Global_36, &fVar0, false))
	{
		vVar1.f_2 = (fVar0 + 1f);
	}
	iVar15 = SHAPETEST::GET_SHAPE_TEST_RESULT(iLocal_1615, &iVar7, &uVar8, &uVar11, &uVar14);
	switch (iVar15)
	{
		case 0:
			iLocal_1615 = SHAPETEST::START_SHAPE_TEST_CAPSULE(vVar1, vVar4, 3f, 272, 0, 4);
			break;
		case 1:
			break;
		case 2:
			if (iVar7 == 1)
			{
				iLocal_1614 = 1;
			}
			else
			{
				iLocal_1614 = 0;
			}
			break;
	}
	return iLocal_1614;
}

void func_193()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (((iVar0 != 12 && iVar0 != 13) && iVar0 != 10) && iVar0 != 11)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_1373[iVar0]))
			{
				WEAPON::_0x94A3C1B804D291EC(iLocal_1373[iVar0], 0, 0, 0, 0);
				if (!PED::_0x5102307CE88798EB(iLocal_1373[iVar0]))
				{
					PED::REQUEST_PED_VISIBILITY_TRACKING(iLocal_1373[iVar0]);
				}
				else if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_1373[iVar0]) || !PED::_0x164CECC59E70DF86(iLocal_1373[iVar0], 10f))
				{
					if (iVar0 == 8 || iVar0 == 9)
					{
						WEAPON::_0xCEF4C65DE502D367(iLocal_1373[iVar0], 1, 0, 1, 0);
					}
					PED::_0x3088634CF8C819CF(iLocal_1373[iVar0]);
					__LIB_2__::func_426(&(iLocal_1373[iVar0]));
				}
				if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_1373[iVar0]))
				{
					TASK::_TASK_FLEE_FROM_PED(iLocal_1373[iVar0], Global_35, 0f, 0f, 0f, 1000f, -1, 0, 1077936128 /* Float: 3f */, 0);
					PED::SET_PED_USING_ACTION_MODE(iLocal_1373[iVar0], true, -1, 0);
					__LIB_2__::func_788(&(iLocal_1373[iVar0]), 1, 0, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_195()
{
	int iVar0;
	if (PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = PED::GET_MOUNT(PLAYER::PLAYER_PED_ID());
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		TASK::TASK_HORSE_ACTION(iVar0, 2, 0, 0);
	}
}

bool func_196()
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, 2f, -15f, 0.5f) };
	vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, -2f, -15f, 0.5f) };
	vVar6 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, -4f, -20f, 0.5f) };
	vVar9 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, 4f, -20f, 0.5f) };
	if (((!CAM::IS_SPHERE_VISIBLE(vVar0, 2f) || !CAM::IS_SPHERE_VISIBLE(vVar3, 2f)) || !CAM::IS_SPHERE_VISIBLE(vVar6, 2f)) || !CAM::IS_SPHERE_VISIBLE(vVar9, 2f))
	{
		return true;
	}
	return false;
}

bool func_197()
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, 2f, -15f, 0.5f) };
	vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, -2f, -15f, 0.5f) };
	vVar6 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, -4f, -20f, 0.5f) };
	vVar9 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, 4f, -20f, 0.5f) };
	ENTITY::SET_ENTITY_COORDS(iLocal_1373[12], vVar0, true, false, true, true);
	ENTITY::SET_ENTITY_HEADING(iLocal_1373[12], __LIB_3__::func_978(iLocal_1373[12], Global_35, 1));
	ENTITY::SET_ENTITY_COORDS(iLocal_1373[13], vVar3, true, false, true, true);
	ENTITY::SET_ENTITY_HEADING(iLocal_1373[13], __LIB_3__::func_978(iLocal_1373[13], Global_35, 1));
	ENTITY::SET_ENTITY_COORDS(iLocal_1373[10], vVar6, true, false, true, true);
	ENTITY::SET_ENTITY_HEADING(iLocal_1373[10], __LIB_3__::func_978(iLocal_1373[10], Global_35, 1));
	ENTITY::SET_ENTITY_COORDS(iLocal_1373[11], vVar9, true, false, true, true);
	ENTITY::SET_ENTITY_HEADING(iLocal_1373[11], __LIB_3__::func_978(iLocal_1373[11], Global_35, 1));
	return true;
	return false;
}

void func_198()
{
	__LIB_3__::func_566(&(iLocal_1373[12]), -1288798431);
	__LIB_3__::func_566(&(iLocal_1373[13]), 1072634020);
	__LIB_3__::func_566(&(iLocal_1373[10]), 312619017);
	__LIB_3__::func_566(&(iLocal_1373[11]), 1232051623);
}

void func_199()
{
	PED::_0xB8DE69D9473B7593(iLocal_1373[12], 12);
	TASK::TASK_COMBAT_PED(iLocal_1373[12], Global_35, 1048576, 0);
	PED::_0xB8DE69D9473B7593(iLocal_1373[13], 12);
	TASK::TASK_COMBAT_PED(iLocal_1373[13], Global_35, 1048576, 0);
	PED::_0xB8DE69D9473B7593(iLocal_1373[10], 12);
	TASK::TASK_COMBAT_PED(iLocal_1373[10], Global_35, 1048576, 0);
	PED::_0xB8DE69D9473B7593(iLocal_1373[11], 12);
	TASK::TASK_COMBAT_PED(iLocal_1373[11], Global_35, 1048576, 0);
	ENTITY::SET_ENTITY_INVINCIBLE(iLocal_1373[12], false);
	ENTITY::SET_ENTITY_INVINCIBLE(iLocal_1373[13], false);
	ENTITY::SET_ENTITY_INVINCIBLE(iLocal_1373[10], false);
	ENTITY::SET_ENTITY_INVINCIBLE(iLocal_1373[11], false);
}

bool func_317(int iParam0)
{
	if (__LIB_11__::func_304(iParam0, 0, &(Local_360.f_5), &iLocal_1473, 0, 0))
	{
		if (iLocal_1473 == 4 || iLocal_1473 == 2)
		{
			return true;
		}
	}
	return false;
}

