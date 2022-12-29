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
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	struct<193> Local_26 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_219 = 0;
	struct<7> Local_220 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_227 = 0;
	int iLocal_228 = 0;
	struct<213> Local_229 = { 0, 1112014848, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 1, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, 1103626240, -1067450368, 1097859072, 1073741824, 4000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1073741824 } ;
	int iLocal_442 = 0;
	char* sLocal_443 = NULL;
	char* sLocal_444 = NULL;
	char* sLocal_445 = NULL;
	char* sLocal_446 = NULL;
	char* sLocal_447 = NULL;
	char[] cLocal_448[8] = 0;
	char* sLocal_449[66] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	char* sLocal_516[9] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	struct<2> Local_526[5];
	int iLocal_537 = 0;
	vector3 vLocal_538 = { 0f, 0f, 0f };
	vector3 vLocal_541 = { 0f, 0f, 0f };
	vector3 vLocal_544 = { 0f, 0f, 0f };
	vector3 vLocal_547 = { 0f, 0f, 0f };
	vector3 vLocal_550 = { 0f, 0f, 0f };
	vector3 vLocal_553 = { 0f, 0f, 0f };
	vector3 vLocal_556 = { 0f, 0f, 0f };
	vector3 vLocal_559 = { 0f, 0f, 0f };
	bool bLocal_562 = false;
	var uLocal_563 = 5;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	struct<32> Local_604[6];
	struct<12> Local_797[1];
	struct<22> Local_810 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3 } ;
	var uLocal_832 = 3;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	struct<23> Local_835 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3 } ;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	struct<21> Local_860[6];
	struct<17> Local_987[3];
	char* sLocal_1039 = NULL;
	var uLocal_1040 = 0;
	int iLocal_1041 = 0;
	int iLocal_1042 = 0;
	var uLocal_1043 = 0;
	int iLocal_1044 = 0;
	int iLocal_1045 = 0;
	int iLocal_1046 = 0;
	var uLocal_1047 = 0;
	int iLocal_1048 = 0;
	int iLocal_1049 = 0;
	float fLocal_1050 = 0f;
	int iLocal_1051 = 0;
	var uLocal_1052 = 0;
	int iLocal_1053[4] = { 0, 0, 0, 0 };
	bool bLocal_1058 = false;
	bool bLocal_1059 = false;
	bool bLocal_1060 = false;
	bool bLocal_1061 = false;
	bool bLocal_1062 = false;
	bool bLocal_1063 = false;
	bool bLocal_1064 = false;
	bool bLocal_1065 = false;
	bool bLocal_1066 = false;
	bool bLocal_1067 = false;
	bool bLocal_1068 = false;
	bool bLocal_1069 = false;
	bool bLocal_1070 = false;
	bool bLocal_1071 = false;
	bool bLocal_1072 = false;
	bool bLocal_1073 = false;
	bool bLocal_1074 = false;
	bool bLocal_1075 = false;
	bool bLocal_1076 = false;
	bool bLocal_1077 = false;
	bool bLocal_1078 = false;
	bool bLocal_1079 = false;
	bool bLocal_1080 = false;
	bool bLocal_1081 = false;
	bool bLocal_1082 = false;
	bool bLocal_1083 = false;
	bool bLocal_1084 = false;
	bool bLocal_1085 = false;
	bool bLocal_1086 = false;
	bool bLocal_1087 = false;
	bool bLocal_1088 = false;
	bool bLocal_1089 = false;
	bool bLocal_1090 = false;
	bool bLocal_1091 = false;
	bool bLocal_1092 = false;
	bool bLocal_1093 = false;
	bool bLocal_1094 = false;
	bool bLocal_1095 = false;
	bool bLocal_1096 = false;
	bool bLocal_1097 = false;
	bool bLocal_1098 = false;
	bool bLocal_1099 = false;
	bool bLocal_1100 = false;
	bool bLocal_1101 = false;
	int iLocal_1102 = 0;
	int iLocal_1103 = 0;
	int iLocal_1104 = 0;
	int iLocal_1105 = 0;
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
	char* sLocal_1130 = NULL;
	char* sLocal_1131 = NULL;
	float fLocal_1132 = 0f;
	float fLocal_1133 = 0f;
	float fLocal_1134 = 0f;
	var uLocal_1135 = 15;
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
	int iLocal_1272 = 0;
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
	var uLocal_1285 = 0;
	var uLocal_1286 = 0;
	var uLocal_1287 = 0;
	var uLocal_1288 = 0;
	var uLocal_1289 = 0;
	var uLocal_1290 = 0;
	var uLocal_1291 = 0;
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
	var uLocal_1302 = 0;
	var uLocal_1303 = 0;
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
	var uLocal_1314 = 0;
	var uLocal_1315 = 0;
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
	var uLocal_1326 = 0;
	var uLocal_1327 = 0;
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
	var uLocal_1338 = 0;
	var uLocal_1339 = 0;
	var uLocal_1340 = 0;
	var uLocal_1341 = -1;
	var uLocal_1342 = 0;
	var uLocal_1343 = 0;
	var uLocal_1344 = 0;
	var uLocal_1345 = 0;
	var uLocal_1346 = 0;
	var uLocal_1347 = 0;
	var uLocal_1348 = 0;
	var uLocal_1349 = 0;
	var uLocal_1350 = 1097859072;
	var uLocal_1351 = 1000;
	var uLocal_1352 = 1067450368;
	var uLocal_1353 = 5000;
	var uLocal_1354 = 42;
	var uLocal_1355 = 1103626240;
	var uLocal_1356 = 1077936128;
	var uLocal_1357 = 1106247680;
	var uLocal_1358 = 1103101952;
	var uLocal_1359 = 1097859072;
	var uLocal_1360 = 1103626240;
	var uLocal_1361 = 0;
	var uLocal_1362 = 0;
	var uLocal_1363 = 0;
	var uLocal_1364 = 0;
	var uLocal_1365 = 0;
	var uLocal_1366 = 0;
	var uLocal_1367 = 0;
	var uLocal_1368 = 0;
	var uLocal_1369 = -1;
	var uLocal_1370 = 0;
	var uLocal_1371 = 0;
	var uLocal_1372 = 0;
	var uLocal_1373 = 0;
	var uLocal_1374 = 0;
	var uLocal_1375 = 0;
	var uLocal_1376 = 0;
	var uLocal_1377 = 0;
	var uLocal_1378 = 1097859072;
	var uLocal_1379 = 1000;
	var uLocal_1380 = 1067450368;
	var uLocal_1381 = 5000;
	var uLocal_1382 = 42;
	var uLocal_1383 = 1103626240;
	var uLocal_1384 = 1077936128;
	var uLocal_1385 = 1106247680;
	var uLocal_1386 = 1103101952;
	var uLocal_1387 = 1097859072;
	var uLocal_1388 = 1103626240;
	var uLocal_1389[6] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_1396[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_1403 = 0;
	int iLocal_1404 = 0;
	int iLocal_1405 = 0;
	int iLocal_1406 = 0;
	int iLocal_1407 = 0;
	int iLocal_1408 = 0;
	var uLocal_1409 = 0;
	int iLocal_1410 = 0;
	int iLocal_1411 = 0;
	int iLocal_1412 = 0;
	int iLocal_1413 = 0;
	var uLocal_1414 = 0;
	int iLocal_1415 = 0;
	int iLocal_1416 = 0;
	int iLocal_1417 = 0;
	int iLocal_1418 = 0;
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
	cLocal_448 = "REAA";
	iLocal_1046 = 3;
	fLocal_1132 = 3f;
	fLocal_1133 = 1.4f;
	iLocal_1413 = 1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_1097 = true;
	}
	if (!bLocal_1097)
	{
		Local_26.f_3 = __LIB_0__::func_81(&vScriptParam_0);
		__LIB_2__::func_105(&(Local_26.f_5), 1);
		__LIB_2__::func_50(&(Local_26.f_5), 1);
		__LIB_2__::func_104(&(Local_26.f_5), 1);
		__LIB_2__::func_52(&(Local_26.f_5), 1);
		__LIB_2__::func_715(&(Local_26.f_5), 1);
		__LIB_2__::func_51(&(Local_26.f_5), 0);
		__LIB_3__::func_748(&uLocal_1333, 0);
		__LIB_2__::func_50(&uLocal_1333, 1);
		__LIB_2__::func_105(&uLocal_1333, 1);
		__LIB_1__::func_975(&uLocal_1333, 0.8f);
		__LIB_2__::func_182(&uLocal_1333, 1);
		__LIB_2__::func_180(&uLocal_1333, 1);
		__LIB_2__::func_110(&uLocal_1333, 1);
		__LIB_2__::func_634(&uLocal_1333, 1);
		__LIB_2__::func_51(&uLocal_1333, 1);
		__LIB_2__::func_662(&uLocal_1333, 1);
		__LIB_2__::func_507(&uLocal_1333, 3600);
		__LIB_3__::func_523(&uLocal_1333, 0f);
		__LIB_3__::func_748(&uLocal_1361, 0);
		__LIB_2__::func_50(&uLocal_1361, 1);
		__LIB_2__::func_52(&uLocal_1361, 1);
		Local_26.f_161 = __LIB_0__::func_27(vScriptParam_0.z, 2);
		__LIB_3__::func_420(&Local_26, 1);
	}
	while (true)
	{
		__LIB_2__::func_265(bLocal_1097, 2311, 0);
		if (bLocal_1097)
		{
			BUILTIN::WAIT(0);
		}
		else
		{
			switch (iLocal_1413)
			{
				case 1:
					if (__LIB_3__::func_454(&Local_26, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
					{
						iLocal_1416 = __LIB_0__::func_979(Local_26.f_51);
						func_23();
						func_24(&Local_26, &iLocal_1416, &(Local_26.f_51.f_4));
						func_26(func_25(), iLocal_1416);
						if (iLocal_228 != 2)
						{
						}
						else if ((__LIB_3__::func_151(26) || __LIB_0__::func_730(26)) || !func_29())
						{
							func_19();
						}
						func_30();
						Local_604[0 /*32*/].f_6 = { Local_26.f_51 };
						func_31();
						iLocal_1408 = VOLUME::_CREATE_VOLUME_SPHERE(Local_26.f_51, 0f, 0f, 0f, 80f, 80f, 80f);
						POPULATION::_0xB56D41A694E42E86(iLocal_1408, 4288, 16384, 0, -1, -1, 2);
						POPULATION::_0x18262CAFEBB5FBE1(iLocal_1408, 4288, 16384, 0, -1, -1, 2);
						iLocal_1413 = 0;
					}
					else if (Local_26.f_160)
					{
						func_19();
					}
					break;
				case 0:
					if (func_32())
					{
						iLocal_1413 = 3;
					}
					break;
				case 3:
					if (func_33())
					{
						if (!__LIB_0__::func_86(vLocal_547))
						{
							__LIB_3__::func_414(&uLocal_1414, vLocal_547, 5f, 1, -1, 0);
						}
						iLocal_1413 = 4;
					}
					break;
				case 4:
					if (ENTITY::IS_ENTITY_DEAD(Global_35))
					{
						func_19();
					}
					if (!__LIB_3__::func_466(&Local_26, &uLocal_1389, iLocal_228, 0, 0, 0, 1, 0))
					{
						func_19();
					}
					func_37();
					func_38();
					func_39();
					if (!bLocal_1062 && __LIB_2__::func_1(uLocal_1389[0], 0, 1))
					{
						if (__LIB_0__::func_665(Global_35, uLocal_1389[0], 1, 1) < 25f)
						{
							func_42();
						}
					}
					if ((bLocal_1091 && __LIB_2__::func_901(uLocal_1389[0], Global_35)) && !bLocal_1073)
					{
						__LIB_1__::func_715(4, joaat("HONOR_EVENT_CRUEL_DEATH"), 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
						bLocal_1073 = true;
					}
					if (!Local_26.f_46 && !bLocal_1058)
					{
						if (__LIB_4__::func_8(&uLocal_1389, &(Local_26.f_5), &iLocal_1415, &uLocal_1047, 2, 5, 1))
						{
							if (!(((iLocal_228 == 2 && Local_26.f_5.f_10 == uLocal_1389[2]) && iLocal_1415 == 1) && func_46()))
							{
								Local_26.f_46 = 1;
								func_47();
								func_48(Global_35, 0, 1);
								func_49(0);
								if (!bLocal_1074 && !__LIB_0__::func_75(&uLocal_1285))
								{
									__LIB_1__::func_283(&uLocal_1285, 0);
								}
								iLocal_1411 = 5;
							}
							else
							{
								DECORATOR::DECOR_SET_BOOL(uLocal_1389[2], "bIgnoreDamageChecking", true);
								__LIB_3__::func_237(&(Local_26.f_5), &iLocal_1415);
							}
							func_42();
							bLocal_1076 = true;
							func_53();
						}
					}
					if (func_54())
					{
						__LIB_1__::func_148(&uLocal_1294);
						__LIB_2__::func_105(&uLocal_1333, 0);
					}
					else if (__LIB_1__::func_285(&uLocal_1294, 1.5f))
					{
						__LIB_0__::func_37(&uLocal_1294);
						__LIB_0__::func_37(&uLocal_1282);
						__LIB_2__::func_105(&uLocal_1333, 1);
					}
					if ((iLocal_228 != 2 && !bLocal_1059) && ENTITY::DOES_ENTITY_EXIST(uLocal_1389[1]))
					{
						if (__LIB_3__::func_276(uLocal_1389[1], 0, &uLocal_1361, &iLocal_1415, 1, 0))
						{
							bLocal_1059 = true;
							bLocal_1058 = true;
							if (__LIB_2__::func_227(0, 1, uLocal_1389[0], 1))
							{
								__LIB_2__::func_122(uLocal_1389[0], "GENERIC_SHOCKED_HIGH", -1824788778, Global_35, 1, 0, 0, 1);
							}
							if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_1389[0], -1))
							{
								TASK::CLEAR_PED_TASKS(uLocal_1389[0], true, false);
								TASK::CLEAR_PED_SECONDARY_TASK(uLocal_1389[0]);
								TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_1389[0], Global_35, 3, 4224, -1082130432 /* Float: -1f */, -1, uLocal_1389[1]);
								__LIB_2__::func_526(&Local_987, 0, 0);
							}
						}
					}
					if (!bLocal_1058 && __LIB_2__::func_1(uLocal_1389[0], 0, 1))
					{
						if (__LIB_3__::func_276(uLocal_1389[0], 0, &uLocal_1333, &iLocal_1415, 0, 0))
						{
							if ((iLocal_1415 == 4 || iLocal_1415 == 8) && func_62())
							{
								__LIB_3__::func_237(&(Local_26.f_5), &iLocal_1415);
							}
							else if (!func_63())
							{
								bLocal_1058 = true;
								func_53();
								__LIB_0__::func_325(&(uLocal_1396[0]));
								if (iLocal_228 == 2)
								{
									if (iLocal_1415 == 16)
									{
										__LIB_2__::func_478(uLocal_1389[0], Global_35, "GENERIC_FRIGHTENED_HIGH", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, -1050591818, 1, 1, 0);
									}
									else
									{
										__LIB_2__::func_478(uLocal_1389[0], Global_35, sLocal_449[20], 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, -1050591818, 1, 1, 0);
									}
									if ((iLocal_1415 == 4 || iLocal_1415 == 8) || iLocal_1415 == 16)
									{
										func_66();
									}
									func_67();
								}
								else
								{
									__LIB_2__::func_478(uLocal_1389[0], Global_35, sLocal_449[7], 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, -1050591818, 1, 1, 0);
								}
								if (iLocal_1411 < 8)
								{
									if ((iLocal_1415 == 4 || iLocal_1415 == 8) || iLocal_1415 == 16)
									{
										func_66();
									}
									func_67();
									iLocal_1411 = 6;
								}
								else if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_1389[0], -1))
								{
									TASK::CLEAR_PED_SECONDARY_TASK(uLocal_1389[0]);
									if (!ENTITY::IS_ENTITY_DEAD(uLocal_1389[0]))
									{
										func_67();
									}
									func_19();
								}
								else
								{
									iLocal_1411 = 6;
								}
							}
						}
					}
					if (func_68())
					{
						func_19();
					}
					if (__LIB_3__::func_431(&Local_26, &uLocal_1389, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0))
					{
						bLocal_1097 = true;
					}
					if (bLocal_1076 && !func_70(Global_35, &uLocal_1389, &uLocal_1040, 100f))
					{
						func_19();
					}
					break;
			}
			BUILTIN::WAIT(Local_26.f_158);
		}
	}
}

void func_19()
{
	int iVar0;
	if (__LIB_2__::func_762())
	{
		Local_26.f_44 = 0;
	}
	else if (bLocal_1097 && !bLocal_1076)
	{
		__LIB_1__::func_864(uLocal_1389[0], 0, 0);
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_1389[2]))
		{
			TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_1389[2], Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
		}
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_1389[3]))
		{
			TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_1389[3], Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
		}
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_1389[4]))
		{
			TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_1389[4], Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
		}
	}
	if (Local_26.f_44 && iLocal_228 == 2)
	{
		__LIB_3__::func_461(0, 1, 1);
	}
	if (bLocal_1066)
	{
		__LIB_0__::func_769();
		if (__LIB_1__::func_587(iLocal_1418))
		{
			__LIB_1__::func_721(iLocal_1418);
		}
	}
	if (iLocal_1411 >= 4)
	{
		AUDIO::_0x05D6195FB4D428F4(2147454193);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1408))
	{
		POPULATION::_0x74C2B3DC0B294102(iLocal_1408);
		POPULATION::_0xA1CFB35069D23C23(iLocal_1408);
		VOLUME::_DELETE_VOLUME(iLocal_1408);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		PED::_0xD05AD61F242C626B(Global_35, 1f);
	}
	if (iLocal_1044 != 0)
	{
		EVENT::REMOVE_SHOCKING_EVENT(iLocal_1044);
	}
	if (iLocal_1272 == 6)
	{
		AUDIO::STOP_AUDIO_SCENE("ANIMAL_ATTACK_SCENE");
	}
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_1389[0]))
	{
		__LIB_3__::func_552(uLocal_1389[0]);
	}
	__LIB_0__::func_8(&Global_1935630, 4);
	__LIB_1__::func_682(0);
	if (Local_26.f_48 && !Local_26.f_44)
	{
		Local_26.f_45 = bLocal_1076;
	}
	if (__LIB_9__::func_366(uLocal_1389[1], iLocal_1407) && !__LIB_0__::func_163(uLocal_1389[0], 242628503))
	{
		PHYSICS::_0x0348469DAA17576C(uLocal_1389[1]);
	}
	func_47();
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (__LIB_2__::func_1(uLocal_1389[iVar0], 0, 1))
		{
			__LIB_2__::func_788(&(uLocal_1389[iVar0]), 1, 1, 1);
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_797[0 /*12*/].f_8))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_797[0 /*12*/].f_8));
	}
	func_92(&Local_26, &uLocal_1389, &uLocal_1396, iLocal_228, iLocal_1416, Local_26.f_51.f_4, 0, 1, 0, 1);
	__LIB_2__::func_353(&uLocal_1414, 1);
	__LIB_0__::func_325(&iLocal_1403);
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_220))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(Local_220);
	}
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_1407))
	{
		TASK::_DELETE_SCENARIO_POINT(iLocal_1407);
	}
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_1406))
	{
		TASK::_DELETE_SCENARIO_POINT(iLocal_1406);
	}
	__LIB_3__::func_828(&uLocal_1135);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_23()
{
	Local_220.f_4 = "script@beat@wilderness@animalAttack@re_aa_male_tree_B";
	Local_220.f_5 = "script@beat@wilderness@animalAttack@re_aa_male_rock_B";
	Local_220.f_6 = "script@beat@wilderness@animalAttack@re_aa_female_rock";
}

void func_24(var uParam0, int iParam1, var uParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*iParam1 = 1;
			*uParam2 = 0;
			break;
		case 1:
			*iParam1 = 1;
			*uParam2 = 1;
			break;
		case 2:
			*iParam1 = 1;
			*uParam2 = 2;
			break;
		case 3:
			*iParam1 = 1;
			*uParam2 = 3;
			break;
		case 4:
			*iParam1 = 4;
			*uParam2 = 0;
			break;
		case 5:
			*iParam1 = 7;
			*uParam2 = 0;
			break;
		case 6:
			*iParam1 = 9;
			*uParam2 = 0;
			break;
		case 7:
			*iParam1 = 9;
			*uParam2 = 1;
			break;
		case 8:
			*iParam1 = 10;
			*uParam2 = 0;
			break;
		case 9:
			*iParam1 = 10;
			*uParam2 = 1;
			break;
	}
}

int func_25()
{
	int iVar0;
	iVar0 = __LIB_3__::func_390(0, 3, 0);
	switch (iVar0)
	{
		case 0:
			iLocal_228 = 0;
			break;
		case 1:
			iLocal_228 = 1;
			break;
		case 2:
			iLocal_228 = 2;
			break;
	}
	if (iLocal_1416 == 7)
	{
		iLocal_228 = 1;
		iVar0 = 1;
	}
	else if (iVar0 == 2)
	{
		if (iLocal_1416 != 1 || Local_26.f_51.f_4 != 0)
		{
			iLocal_228 = 1;
		}
	}
	if (!Local_26.f_161 && __LIB_3__::func_564(0, 1) != 1)
	{
		if (iLocal_1416 == 1 && Local_26.f_51.f_4 == 0)
		{
			iVar0 = 2;
			iLocal_228 = 2;
		}
	}
	return iVar0;
}

void func_26(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 7:
			vLocal_550 = { -246.2378f, 744.8532f, 115.158f };
			vLocal_553 = { -254.5411f, 744.0548f, 117.1389f };
			Local_797[0 /*12*/] = { -1314.485f, 1311.979f, 200.8788f };
			iLocal_537 = joaat("WORLD_HUMAN_LEAN_RAILING");
			Local_604[1 /*32*/].f_6 = { -1554.598f, 1699.983f, 235.6222f };
			Local_604[1 /*32*/].f_9 = 208.1292f;
			if (iLocal_228 == 1)
			{
				Local_604[2 /*32*/].f_6 = { -1529.932f, 1720.696f, 240.0805f };
				Local_604[2 /*32*/].f_9 = -76.86f;
			}
			else
			{
				Local_604[2 /*32*/].f_6 = { -1538.696f, 1717.786f, 239.2496f };
				Local_604[2 /*32*/].f_9 = 22.9f;
			}
			Local_604[3 /*32*/].f_6 = { -1526.392f, 1717.972f, 240.0409f };
			Local_604[3 /*32*/].f_9 = -12.13f;
			if (iLocal_228 == 1)
			{
				Local_604[4 /*32*/].f_6 = { -1529.543f, 1715.956f, 239.5447f };
				Local_604[4 /*32*/].f_9 = -34.58f;
			}
			else
			{
				Local_604[4 /*32*/].f_6 = { -1529.932f, 1720.696f, 240.0805f };
				Local_604[4 /*32*/].f_9 = -76.86f;
			}
			vLocal_541 = { -1557.376f, 1705.479f, 237.2817f };
			vLocal_544 = { -1558.21f, 1704.398f, 235.9582f };
			vLocal_547 = { -1054.113f, -729.5381f, 65.06046f };
			if (iLocal_228 == 0)
			{
				iLocal_228 = 1;
			}
			break;
		case 1:
			bLocal_562 = true;
			switch (Local_26.f_51.f_4)
			{
				case 0:
					if (iLocal_228 == 0)
					{
						iLocal_228 = 1;
					}
					vLocal_550 = { -1826.202f, -414.07f, 160.0525f };
					vLocal_553 = { -1830.522f, -411.2746f, 161.4104f };
					Local_797[0 /*12*/] = { -1058.12f, -790.7949f, 59.78279f };
					iLocal_537 = joaat("WORLD_HUMAN_LEAN_RAILING");
					if (iLocal_228 == 1)
					{
						Local_604[2 /*32*/].f_6 = { -1051.509f, -793.3193f, 59.64713f };
						Local_604[2 /*32*/].f_9 = 119.566f;
						Local_604[4 /*32*/].f_6 = { -1054.236f, -725.5339f, 65.71812f };
						Local_604[4 /*32*/].f_9 = 65.27f;
						Local_604[1 /*32*/].f_6 = { -1027.813f, -766.3032f, 61.0286f };
						Local_604[1 /*32*/].f_9 = -10.03f;
					}
					else
					{
						Local_604[2 /*32*/].f_6 = { -1043.699f, -768.2133f, 60.62247f };
						Local_604[2 /*32*/].f_9 = 8.7453f;
						Local_604[4 /*32*/].f_6 = { -1051.509f, -793.3193f, 59.64713f };
						Local_604[4 /*32*/].f_9 = 119.566f;
						Local_604[1 /*32*/].f_6 = { -1042.25f, -769.5213f, 60.51532f };
						Local_604[1 /*32*/].f_9 = 82.15f;
					}
					Local_604[3 /*32*/].f_6 = { -1055.028f, -790.005f, 59.86347f };
					Local_604[3 /*32*/].f_9 = 173.285f;
					vLocal_541 = { -1028.697f, -764.1123f, 61.3082f };
					vLocal_544 = { -1027.843f, -766.3446f, 60.20293f };
					break;
				case 1:
					iLocal_228 = 0;
					vLocal_550 = { -1826.202f, -414.07f, 160.0525f };
					Local_797[0 /*12*/] = { -1159.74f, -153.5899f, 89.21986f };
					Local_604[1 /*32*/].f_6 = { -1152.796f, -167.0863f, 89.2812f };
					Local_604[1 /*32*/].f_9 = 0.0233f;
					Local_604[2 /*32*/].f_6 = { -1154.384f, -150.7848f, 89.6459f };
					Local_604[2 /*32*/].f_9 = 131.7243f;
					vLocal_541 = { -1152.747f, -168.898f, 91.0459f };
					vLocal_544 = { -1151.353f, -170.1125f, 89.5287f };
					vLocal_556 = { -1152.525f, -146.6f, 89.88026f };
					vLocal_559 = { -1158.863f, -145.2418f, 90.03511f };
					break;
				case 2:
					if (iLocal_228 == 0)
					{
						iLocal_228 = 1;
					}
					vLocal_550 = { -1826.202f, -414.07f, 160.0525f };
					vLocal_553 = { -1830.522f, -411.2746f, 161.4104f };
					Local_797[0 /*12*/] = { -1367.587f, -514.6331f, 125.7039f };
					iLocal_537 = joaat("WORLD_HUMAN_LEAN_RAILING");
					if (iLocal_228 == 1)
					{
						Local_604[2 /*32*/].f_6 = { -1367.719f, -518.6824f, 125.8444f };
						Local_604[2 /*32*/].f_9 = 119.566f;
						Local_604[4 /*32*/].f_6 = { -1366.678f, -515.388f, 125.781f };
						Local_604[4 /*32*/].f_9 = 65.27f;
						Local_604[1 /*32*/].f_6 = { -1349.858f, -488.8407f, 120.9715f };
						Local_604[1 /*32*/].f_9 = -10.03f;
					}
					else
					{
						Local_604[2 /*32*/].f_6 = { -1365.88f, -519.3616f, 126.1736f };
						Local_604[2 /*32*/].f_9 = 8.7453f;
						Local_604[4 /*32*/].f_6 = { -1365.865f, -517.4992f, 125.95f };
						Local_604[4 /*32*/].f_9 = 119.566f;
						Local_604[1 /*32*/].f_6 = { -1325.958f, -579.6367f, 103.8859f };
						Local_604[1 /*32*/].f_9 = 82.15f;
					}
					Local_604[3 /*32*/].f_6 = { -1365.37f, -518.1146f, 126.0672f };
					Local_604[3 /*32*/].f_9 = 173.285f;
					vLocal_541 = { -1350.889f, -487.397f, 121.7797f };
					vLocal_544 = { -1349.858f, -488.8407f, 120.9715f };
					break;
				case 3:
					if (iLocal_228 == 0)
					{
						iLocal_228 = 1;
					}
					vLocal_550 = { -1826.202f, -414.07f, 160.0525f };
					vLocal_553 = { -1830.522f, -411.2746f, 161.4104f };
					Local_797[0 /*12*/] = { -1058.12f, -790.7949f, 59.78279f };
					iLocal_537 = joaat("WORLD_HUMAN_LEAN_RAILING");
					if (iLocal_228 == 1)
					{
						Local_604[2 /*32*/].f_6 = { -1026.712f, -495.4865f, 101.873f };
						Local_604[2 /*32*/].f_9 = 119.566f;
						Local_604[4 /*32*/].f_6 = { -1024.966f, -490.3193f, 101.3036f };
						Local_604[4 /*32*/].f_9 = 65.27f;
						Local_604[1 /*32*/].f_6 = { -999.5505f, -473.7407f, 97.94868f };
						Local_604[1 /*32*/].f_9 = -60.03f;
					}
					else
					{
						Local_604[2 /*32*/].f_6 = { -1023.111f, -494.7955f, 102.0353f };
						Local_604[2 /*32*/].f_9 = 8.7453f;
						Local_604[4 /*32*/].f_6 = { -1024.966f, -490.3193f, 101.3036f };
						Local_604[4 /*32*/].f_9 = 119.566f;
						Local_604[1 /*32*/].f_6 = { -1068.261f, -469.8496f, 81.3701f };
						Local_604[1 /*32*/].f_9 = 82.15f;
					}
					Local_604[3 /*32*/].f_6 = { -1023.294f, -494.9246f, 102.0795f };
					Local_604[3 /*32*/].f_9 = 173.285f;
					vLocal_541 = { -1014.51f, -495.6267f, 101.9116f };
					vLocal_544 = { -1014.15f, -497.4202f, 100.8566f };
					break;
			}
			break;
		case 10:
			switch (Local_26.f_51.f_4)
			{
				case 0:
					vLocal_550 = { 2936.389f, 1360.951f, 42.9825f };
					vLocal_553 = { 2927.537f, 1351.416f, 43.3993f };
					Local_797[0 /*12*/] = { 2148.762f, 1725.916f, 124.5801f };
					iLocal_537 = joaat("WORLD_HUMAN_BROOM");
					vLocal_544 = { 2128.358f, 1743.547f, 132.1981f };
					Local_604[1 /*32*/].f_6 = { 2128.358f, 1743.547f, 132.1981f };
					Local_604[1 /*32*/].f_9 = 194.116f;
					vLocal_541 = { 2127.142f, 1744.83f, 134.2511f };
					iLocal_228 = 1;
					switch (iParam0)
					{
						case 0:
							Local_604[2 /*32*/].f_6 = { func_104(0, 1) };
							Local_604[2 /*32*/].f_9 = func_105(0, 1);
							Local_604[3 /*32*/].f_6 = { func_104(0, 2) };
							Local_604[3 /*32*/].f_9 = func_105(0, 2);
							Local_604[4 /*32*/].f_6 = { func_104(0, 3) };
							Local_604[4 /*32*/].f_9 = func_105(0, 3);
							break;
						case 1:
							Local_604[2 /*32*/].f_6 = { func_106(0, 1) };
							Local_604[2 /*32*/].f_9 = func_107(0, 1);
							Local_604[3 /*32*/].f_6 = { func_106(0, 2) };
							Local_604[3 /*32*/].f_9 = func_107(0, 2);
							break;
						case 2:
							Local_604[2 /*32*/].f_6 = { func_108(0, 1) };
							Local_604[2 /*32*/].f_9 = func_109(0, 1);
							Local_604[3 /*32*/].f_6 = { func_108(0, 2) };
							Local_604[3 /*32*/].f_9 = func_109(0, 2);
							break;
						case 3:
							Local_604[2 /*32*/].f_6 = { func_110(0, 1) };
							Local_604[2 /*32*/].f_9 = func_111(0, 1);
							Local_604[3 /*32*/].f_6 = { func_110(0, 2) };
							Local_604[3 /*32*/].f_9 = func_111(0, 2);
							break;
					}
					break;
				case 1:
					vLocal_550 = { 2936.389f, 1360.951f, 42.9825f };
					vLocal_553 = { 2177.798f, -25.7707f, 54.0357f };
					Local_797[0 /*12*/] = { 2178.207f, -29.779f, 52.0158f };
					iLocal_537 = joaat("WORLD_HUMAN_BROOM");
					Local_604[2 /*32*/].f_6 = { 2176.828f, -21.1974f, 51.7899f };
					Local_604[2 /*32*/].f_9 = 119.566f;
					Local_604[3 /*32*/].f_6 = { 2174.5f, -28.4824f, 52.2161f };
					Local_604[3 /*32*/].f_9 = 65.27f;
					Local_604[1 /*32*/].f_6 = { 2148.909f, -34.7308f, 55.374f };
					Local_604[1 /*32*/].f_9 = -4.116f;
					vLocal_541 = { 2149.162f, -32.8979f, 57.1283f };
					vLocal_544 = { 2148.909f, -34.7308f, 55.374f };
					iLocal_228 = 1;
					break;
			}
			break;
		case 9:
			switch (Local_26.f_51.f_4)
			{
				case 0:
					vLocal_550 = { 2936.389f, 1360.951f, 42.9825f };
					Local_797[0 /*12*/] = { -319.0016f, 203.0322f, 62.5367f };
					Local_604[1 /*32*/].f_6 = { -306.1996f, 186.4946f, 62.8145f };
					Local_604[1 /*32*/].f_9 = -5.84f;
					Local_604[2 /*32*/].f_6 = { -316.1747f, 202.1763f, 62.6721f };
					Local_604[2 /*32*/].f_9 = 65.27f;
					vLocal_541 = { -304.9778f, 188.0571f, 64.4411f };
					vLocal_544 = { -306.1996f, 186.4946f, 62.8145f };
					vLocal_556 = { -320.3951f, 210.0814f, 62.4797f };
					vLocal_559 = { -323.0226f, 201.3689f, 62.1426f };
					iLocal_228 = 0;
					break;
				case 1:
					vLocal_550 = { 2936.389f, 1360.951f, 42.9825f };
					Local_797[0 /*12*/] = { -514.0595f, 342.9887f, 49.99966f };
					Local_604[1 /*32*/].f_6 = { -477.075f, 367.9869f, 51.5884f };
					Local_604[1 /*32*/].f_9 = 31.84f;
					Local_604[2 /*32*/].f_6 = { -503.7721f, 346.1028f, 49.84615f };
					Local_604[2 /*32*/].f_9 = 93.0131f;
					vLocal_541 = { -477.6526f, 320.2662f, 45.72257f };
					vLocal_544 = { -477.9498f, 317.8607f, 44.23803f };
					vLocal_556 = { -507.2264f, 343.2669f, 49.59346f };
					vLocal_559 = { -507.1704f, 348.4026f, 50.63178f };
					iLocal_228 = 0;
					break;
			}
			break;
		case 4:
			iLocal_228 = 0;
			vLocal_550 = { -850.8811f, -1256.024f, 42.41312f };
			Local_797[0 /*12*/] = { -1230.502f, -1373.848f, 80.64923f };
			Local_604[1 /*32*/].f_6 = { -1305.942f, -1356.616f, 88.8199f };
			Local_604[1 /*32*/].f_9 = 234.0461f;
			Local_604[2 /*32*/].f_6 = { -1248.817f, -1369.882f, 82.77242f };
			Local_604[2 /*32*/].f_9 = 65.27f;
			vLocal_541 = { -1306.823f, -1355.456f, 90.1273f };
			vLocal_544 = { -1305.942f, -1356.616f, 88.8199f };
			vLocal_556 = { -1244.297f, -1367.265f, 82.08985f };
			vLocal_559 = { -1245.379f, -1372.927f, 82.48967f };
			break;
	}
	Local_604[0 /*32*/].f_6 = { Local_26.f_51 };
}

bool func_29()
{
	if (!PED::IS_PED_ON_MOUNT(Global_35))
	{
		return false;
	}
	if (__LIB_0__::func_394(Global_35, __LIB_0__::func_398(0), 0))
	{
		return true;
	}
	if (__LIB_0__::func_394(Global_35, __LIB_0__::func_398(1), 0))
	{
		return true;
	}
	return false;
}

void func_30()
{
	switch (__LIB_3__::func_283())
	{
		case 0:
			sLocal_449[0] = "RE_AA_MTN_V1_HELP_M_A";
			sLocal_449[1] = "RE_AA_MTN_V1_COWER_M";
			sLocal_449[2] = "RE_AA_MTN_V1_BEG_M";
			sLocal_449[3] = "RE_AA_MTN_V1_KILL_M";
			sLocal_449[4] = "RE_AA_MTN_V1_KILL_LAST_M";
			sLocal_449[5] = "RE_AA_MTN_V1_FLED_M";
			sLocal_449[6] = "RE_AA_MTN_V1_THANK_M";
			sLocal_449[7] = "RE_AA_MTN_V1_AGGRO_M";
			sLocal_449[8] = "RE_AA_MTN_V1_PL_WLCM_M";
			sLocal_449[9] = "RE_AA_MTN_V1_HELP_COUGARS_M";
			sLocal_449[10] = "RE_AA_MTN_V1_HELP_WOLVES_M";
			sLocal_449[11] = "RE_AA_MTN_V1_HELP_COYOTES_M";
			sLocal_449[12] = "RE_AA_MTN_V2_HELP_F";
			sLocal_449[13] = "RE_AA_MTN_V2_HELP_B_F";
			sLocal_449[14] = "RE_AA_MTN_V2_COWER_F";
			sLocal_449[15] = "RE_AA_MTN_V2_BEG_F";
			sLocal_449[16] = "RE_AA_MTN_V2_KILL_F";
			sLocal_449[17] = "RE_AA_MTN_V2_KILL_LAST_F";
			sLocal_449[18] = "RE_AA_MTN_V2_FLED_F";
			sLocal_449[19] = "RE_AA_MTN_V2_THANK_F";
			sLocal_449[20] = "GENERIC_FRIGHTENED_HIGH";
			sLocal_449[21] = "RE_AA_MTN_V2_PL_ESCORT_YES";
			sLocal_449[22] = "RE_AA_MTN_V2_PL_ESCORT_NO";
			sLocal_449[23] = "RE_AA_MTN_V2_RESPOND_YES_F";
			sLocal_449[24] = "RE_AA_MTN_V2_RESPOND_NO_F";
			if (__LIB_2__::func_140(0))
			{
				sLocal_449[25] = "RE_AA_MTN_V2_ESCORT_ASK_SICK_F";
				sLocal_449[26] = "RE_AA_MTN_V2_ESCORT_ASK_B_SICK_F";
			}
			else
			{
				sLocal_449[25] = "RE_AA_MTN_V2_ESCORT_ASK_F";
				sLocal_449[26] = "RE_AA_MTN_V2_ESCORT_ASK_B_F";
			}
			if (bLocal_562)
			{
				sLocal_449[27] = "RE_AA_MTN_V2_ESCORT_START_ALT_F";
			}
			else
			{
				sLocal_449[27] = "RE_AA_MTN_V2_ESCORT_START_F";
			}
			sLocal_449[43] = "RE_AA_MTN_V2_ESCORT_CLOSE_F";
			sLocal_449[44] = "RE_AA_MTN_V2_ESCORT_ARRIVED_F";
			sLocal_449[55] = "RE_AA_MTN_V2_ESCORT_ARRIVED_F_RESP_ALT";
			sLocal_449[56] = "RE_AA_MTN_V2_PLYFINAL_HIGH";
			sLocal_449[57] = "RE_AA_MTN_V2_PLYFINAL_LOW";
			sLocal_449[28] = "RE_AA_MTN_V2_ESCORT_STORY_A_F";
			sLocal_449[29] = "RE_AA_MTN_V2_ESCORT_STORY_A_F";
			sLocal_449[30] = "RE_AA_MTN_V2_ESCORT_STORY_B_F";
			sLocal_449[31] = "RE_AA_MTN_V2_ESCORT_STORY_C_F";
			sLocal_449[32] = "RE_AA_MTN_V2_ESCORT_STORY_D_F";
			sLocal_449[33] = "RE_AA_MTN_V2_ESCORT_STORY_E_F";
			sLocal_449[34] = "RE_AA_MTN_V2_ESCORT_STORY_E_F";
			sLocal_449[35] = "RE_AA_MTN_V2_ESCORT_STORY_F_F";
			sLocal_449[36] = "RE_AA_MTN_V2_ESCORT_STORY_G_F";
			sLocal_449[37] = "RE_AA_MTN_V2_ESCORT_STORY_H_F";
			sLocal_449[38] = "RE_AA_MTN_V2_ESCORT_STORY_H_F";
			sLocal_449[39] = "RE_AA_MTN_V2_ESCORT_STORY_I_F";
			sLocal_449[40] = "RE_AA_MTN_V2_ESCORT_STORY_J_F";
			sLocal_449[41] = "RE_AA_MTN_V2_ESCORT_STORY_K_F";
			sLocal_449[42] = "RE_AA_MTN_V2_ESCORT_STORY_L_F";
			sLocal_449[58] = "RE_AA_MTN_V2_ESCORT_SEGUE_F";
			sLocal_449[59] = "RE_AA_MTN_V2_ESCORT_STOP_F";
			sLocal_449[60] = "RE_AA_MTN_V2_ESCORT_OFFHORSE_F";
			sLocal_449[61] = "RE_AA_MTN_V2_ESCORT_WRONGWAY_F";
			sLocal_449[62] = "RE_AA_MTN_V2_ESCORT_TOOLONG_F";
			sLocal_449[63] = "RE_AA_MTN_V2_ESCORT_TOOLONG_EXIT_F";
			sLocal_449[64] = "RE_AA_MTN_V2_ESCORT_AGGRO_F";
			sLocal_449[65] = "RE_AA_MTN_V2_ESCORT_AGGROTRAV_F";
			sLocal_449[45] = "RE_AA_MTN_V1_HELP_CLOSE_M_A";
			sLocal_449[46] = "RE_AA_MTN_V2_HELP_CLOSE_F";
			if (iLocal_228 == 2)
			{
				sLocal_449[47] = "RE_AA_MTN_V2_PRE_THANK_GREET";
				sLocal_449[48] = "RE_AA_MTN_V2_PRE_THANK_ANTAGONIZE";
			}
			else
			{
				sLocal_449[47] = "RE_AA_MTN_V1_PRE_THANK_GREET";
				sLocal_449[48] = "RE_AA_MTN_V1_PRE_THANK_ANTAGONIZE";
				sLocal_449[49] = "RE_AA_MTN_V1_POST_THANK_GREET";
				sLocal_449[50] = "RE_AA_MTN_V1_POST_THANK_ANTAGONIZE";
				sLocal_449[52] = "RE_AA_MTN_V1_POST_THANK_GREET_RESP";
				sLocal_449[53] = "RE_AA_MTN_V1_POST_THANK_ANTAGONIZE_RESP";
				sLocal_449[51] = "RE_AA_MTN_V1_POST_THANK_ROB";
			}
			sLocal_449[54] = "RE_AA_MTN_V2_PL_QUIT_ESCORT";
			break;
		case 1:
		case 2:
		default:
			sLocal_449[0] = "GET_AWAY_FROM_ME";
			sLocal_449[1] = "RE_AA_PLN_V1_COWER_M";
			sLocal_449[2] = "RE_AA_PLN_V1_BEG_M";
			sLocal_449[3] = "RE_AA_PLN_V1_KILL_M";
			sLocal_449[4] = "RE_AA_PLN_V1_KILL_LAST_M";
			sLocal_449[5] = "RE_AA_PLN_V1_FLED_M";
			sLocal_449[6] = "RE_AA_PLN_V1_THANK_M";
			sLocal_449[7] = "RE_AA_PLN_V1_AGGRO_M";
			sLocal_449[8] = "RE_AA_PLN_V1_PL_WLCM_M";
			sLocal_449[45] = "SCARED_HELP";
			sLocal_449[9] = "RE_AA_PLN_V1_HELP_COUGARS_M";
			sLocal_449[10] = "RE_AA_PLN_V1_HELP_WOLVES_M";
			sLocal_449[11] = "RE_AA_PLN_V1_HELP_COYOTES_M";
			sLocal_449[47] = "RE_AA_PLN_V1_PRE_THANK_GREET";
			sLocal_449[48] = "RE_AA_PLN_V1_PRE_THANK_ANTAGONIZE";
			sLocal_449[49] = "RE_AA_PLN_V1_POST_THANK_GREET";
			sLocal_449[50] = "RE_AA_PLN_V1_POST_THANK_ANTAGONIZE";
			sLocal_449[51] = "RE_AA_PLN_V1_POST_THANK_ROB";
			sLocal_449[52] = "RELIEVED_REACT";
			sLocal_449[53] = "VICTIMIZED_REACT";
			break;
	}
}

void func_31()
{
	switch (iLocal_228)
	{
		case 0:
			sLocal_516[0] = "PBL_FALL_DIE";
			sLocal_516[1] = "PBL_FALL_RECOVER";
			sLocal_516[2] = "PBL_HANGING";
			sLocal_516[3] = "PBL_SHOOTING";
			sLocal_516[4] = "PBL_THANKS";
			sLocal_516[5] = "PBL_SIT_JUMP";
			sLocal_1039 = "script_re@animal_attack@male@tree";
			break;
		case 1:
			sLocal_516[0] = "PBL_COWER";
			sLocal_516[1] = "PBL_FALL_DIE";
			sLocal_516[2] = "PBL_FALL_RECOVER";
			sLocal_516[3] = "PBL_KICK_HELP_A";
			sLocal_516[4] = "PBL_KICK_HELP_B";
			sLocal_516[5] = "PBL_NO_AMMO";
			sLocal_516[6] = "PBL_STRUGGLE";
			sLocal_516[7] = "PBL_THANKS";
			sLocal_1039 = "script_re@animal_attack@male@rock";
			break;
		case 2:
			sLocal_516[0] = "PBL_COWER";
			sLocal_516[1] = "PBL_COWER_FLINCH";
			sLocal_516[2] = "PBL_DEAR_GOD";
			sLocal_516[3] = "PBL_FALL_DIE";
			sLocal_516[4] = "PBL_FALL_RECOVER";
			sLocal_516[5] = "PBL_GET_AWAY";
			sLocal_516[6] = "PBL_GONNA_KILL_ME";
			sLocal_516[7] = "PBL_HELP";
			sLocal_516[8] = "PBL_THANK_YOU";
			break;
	}
}

bool func_32()
{
	switch (iLocal_1410)
	{
		case 0:
			if (__LIB_3__::func_308(&Local_26))
			{
				func_119();
				func_120();
				func_121();
				func_122();
				AUDIO::_0xD9130842D7226045("REAA_Sounds", 0);
				__LIB_3__::func_445(&Local_604);
				if (iLocal_228 != 2)
				{
					__LIB_3__::func_314(&Local_797);
				}
				if (iLocal_228 != 2)
				{
					STREAMING::REQUEST_ANIM_DICT(sLocal_1039);
				}
				func_125();
				iLocal_1410 = 1;
			}
			break;
		case 1:
			if (!__LIB_0__::func_0(&uLocal_1409, cLocal_448))
			{
				return false;
			}
			if (!__LIB_3__::func_315(&uLocal_563))
			{
				return false;
			}
			if (!__LIB_3__::func_449(&Local_604))
			{
				return false;
			}
			if (iLocal_228 != 0 && !AUDIO::_0xD9130842D7226045("WNT2_Sounds", 0))
			{
				return false;
			}
			if (iLocal_228 != 2 && !__LIB_3__::func_316(&Local_797))
			{
				return false;
			}
			if (iLocal_228 != 2)
			{
				if (!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_1039))
				{
					return false;
				}
			}
			return true;
	}
	return false;
}

bool func_33()
{
	int iVar0;
	int iVar1;
	switch (iLocal_1272)
	{
		case 0:
			if (!__LIB_4__::func_224(&Local_26, &uLocal_1135, &Local_604, 0, 1, 1, 0, -1))
			{
				return false;
			}
			func_131();
			iLocal_1272 = 1;
			break;
		case 1:
			if (!__LIB_17__::func_841(&uLocal_1135, &Local_604, &uLocal_1389, 1, 1, 0, -1))
			{
				return false;
			}
			iVar0 = 2;
			while (iVar0 <= 5)
			{
				if (__LIB_2__::func_1(uLocal_1389[iVar0], 0, 1))
				{
					PED::SET_PED_CONFIG_FLAG(uLocal_1389[iVar0], 6, true);
					PED::SET_PED_CONFIG_FLAG(uLocal_1389[iVar0], 388, true);
					PED::SET_PED_CONFIG_FLAG(uLocal_1389[iVar0], 186, true);
					PED::_0xFD6943B6DF77E449(uLocal_1389[iVar0], false);
					TASK::_0x9DE63896B176EA94(uLocal_1389[iVar0], 0);
				}
				iVar0++;
			}
			__LIB_3__::func_542(&Local_26, 3);
			__LIB_3__::func_285(uLocal_1389[0], &Local_26, 0);
			__LIB_3__::func_285(uLocal_1389[2], &Local_26, 0);
			__LIB_3__::func_285(uLocal_1389[3], &Local_26, 0);
			PED::SET_PED_CAN_BE_TARGETTED(uLocal_1389[0], false);
			PED::SET_PED_CONFIG_FLAG(uLocal_1389[0], 336, true);
			PED::_SET_PED_BLACKBOARD_HASH(uLocal_1389[0], "OverloadMostInjuredBodyPart", "LeftLeg", -1);
			WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_1389[0], true, true);
			if (iLocal_228 != 2)
			{
				__LIB_4__::func_375(0f, 0f, 0f, &Local_797, 0f, 0, 0, -1, 0);
				if (ENTITY::DOES_ENTITY_EXIST(Local_797[0 /*12*/].f_8))
				{
					OBJECT::_0x7FCD49388BC9B775(Local_797[0 /*12*/].f_8, 0);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_797[0 /*12*/].f_8))
			{
				ENTITY::SET_ENTITY_ROTATION(Local_797[0 /*12*/].f_8, 90f, 0f, 0f, 2, true);
			}
			if (iLocal_228 == 0)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_1389[0]))
				{
					PED::SET_PED_CONFIG_FLAG(uLocal_1389[0], 138, true);
				}
			}
			if (iLocal_228 != 2)
			{
				PED::_0x931B241409216C1F(uLocal_1389[0], uLocal_1389[1], 0);
				PED::SET_PED_CONFIG_FLAG(uLocal_1389[1], 284, true);
				__LIB_2__::func_967(&(Local_26.f_5), uLocal_1389[0], uLocal_1389[1], 0);
				PED::SET_PED_CONFIG_FLAG(uLocal_1389[0], 250, true);
				PED::SET_PED_CONFIG_FLAG(uLocal_1389[0], 347, true);
				ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(uLocal_1389[1], false, 10f);
			}
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uLocal_1389[0], "ANIMAL_ATTACK_NPC_GROUP", 0f);
			AUDIO::START_AUDIO_SCENE("ANIMAL_ATTACK_SCENE");
			func_137(uLocal_1389[0]);
			func_138();
			ANIMSCENE::LOAD_ANIM_SCENE(Local_220);
			PED::ADD_RELATIONSHIP_GROUP("REL_REAA_ANIMALS", &iVar1);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, iVar1, joaat("REL_COP"));
			iLocal_1044 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(joaat("EVENT_SHOCKING_BEAT_DANGEROUS"), Local_26.f_51, 0f, 105f, 105f, 0f, -1f, -1, -1);
			iLocal_1272 = 6;
			break;
		case 6:
			if (func_139())
			{
				return true;
			}
			break;
	}
	return false;
}

void func_37()
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	if (iLocal_1411 == 5 && iLocal_228 == 0)
	{
		return;
	}
	if (__LIB_2__::func_1(uLocal_1389[0], 0, 0))
	{
		iVar0 = 2;
		while (iVar0 <= 5)
		{
			if (__LIB_2__::func_1(uLocal_1389[iVar0], 0, 1))
			{
				if (iLocal_228 == 0)
				{
					fVar2 = 169f;
					if (__LIB_2__::func_1(uLocal_1389[2], 0, 1))
					{
						iVar3 = PED::_0xCD66FEA29400A0B5(uLocal_1389[2]);
						if ((ENTITY::DOES_ENTITY_EXIST(iVar3) && ENTITY::IS_ENTITY_A_PED(iVar3)) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3) == Global_35)
						{
							return;
						}
					}
				}
				else
				{
					fVar2 = 64f;
				}
				iVar1 = func_150(iVar0);
				if (iVar1 != -1)
				{
					if (!iLocal_1053[iVar1] && __LIB_0__::func_232(Global_35, uLocal_1389[iVar0], 1) < fVar2)
					{
						func_47();
						FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(uLocal_1389[iVar0], 21, false);
						func_152(Global_35, iVar0, 1);
						if (!Local_26.f_48)
						{
							__LIB_3__::func_426(&Local_26, &(Local_26.f_48), Local_26.f_3, &(Local_26.f_51.f_6));
						}
						iLocal_1053[iVar1] = 1;
						func_49(0);
						iLocal_1411 = 5;
					}
				}
			}
			iVar0++;
		}
	}
}

void func_38()
{
	if (iLocal_1411 >= 8)
	{
		return;
	}
	if (iLocal_228 == 0)
	{
		return;
	}
	if (iLocal_1411 >= 4 && __LIB_2__::func_227(0, 1, uLocal_1389[0], 1))
	{
		if (__LIB_1__::func_313(&uLocal_1273, 8f) && (bLocal_1072 || iLocal_228 == 2))
		{
			__LIB_2__::func_478(uLocal_1389[0], Global_35, sLocal_444, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			func_49(0);
		}
	}
}

void func_39()
{
	int iVar0;
	if (iLocal_1411 >= 8 || bLocal_1058)
	{
		return;
	}
	if (__LIB_2__::func_1(uLocal_1389[0], 0, 1))
	{
		if (func_154(&uLocal_1389, 2) && !bLocal_1070)
		{
			func_155(sLocal_447, 2f);
			return;
		}
		if (iLocal_1051 || uLocal_1052)
		{
			return;
		}
		iVar0 = 2;
		while (iVar0 <= 5)
		{
			if ((__LIB_2__::func_901(uLocal_1389[iVar0], Global_35) && !bLocal_1070) && !__LIB_0__::func_27(iLocal_1041, __LIB_0__::func_771(iVar0)))
			{
				func_155(sLocal_446, 0.7f);
				__LIB_1__::func_683(&iLocal_1041, __LIB_0__::func_771(iVar0));
			}
			iVar0++;
		}
	}
}

void func_42()
{
	int iVar0;
	if (!bLocal_1062)
	{
		iVar0 = 2;
		while (iVar0 <= 5)
		{
			if (__LIB_2__::func_1(uLocal_1389[iVar0], 0, 1))
			{
				__LIB_2__::func_73(uLocal_1389[iVar0], &(uLocal_1396[iVar0]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
			}
			iVar0++;
		}
		bLocal_1062 = true;
	}
}

bool func_46()
{
	var uVar0;
	WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &uVar0, true, 0, false);
	if (WEAPON::_0x5809DBCA0A37C82B(uVar0))
	{
		return true;
	}
	return false;
}

void func_47()
{
	if (iLocal_228 == 0)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_1389[2]))
		{
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(uLocal_1389[2], 14, true);
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(uLocal_1389[2], 12, false);
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(uLocal_1389[2], 33, false);
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(uLocal_1389[2], 32, false);
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(uLocal_1389[2], 31, false);
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(uLocal_1389[2], 65, true);
		}
	}
}

void func_48(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	iVar0 = 2;
	while (iVar0 <= 5)
	{
		if (__LIB_2__::func_1(uLocal_1389[iVar0], 0, 1))
		{
			if (__LIB_2__::func_1(iParam0, 0, 0))
			{
				if (!__LIB_2__::func_1(iParam1, 0, 0) || (iVar1 % 2) == 0)
				{
					func_152(iParam0, iVar0, bParam2);
					PED::REGISTER_TARGET(uLocal_1389[iVar0], iParam0, 1);
					PED::_0xD05AD61F242C626B(iParam0, 1f);
					func_167(uLocal_1389[iVar0], iParam0);
				}
				else
				{
					func_152(iParam1, iVar0, bParam2);
					PED::REGISTER_TARGET(uLocal_1389[iVar0], iParam1, 1);
					PED::_0xD05AD61F242C626B(iParam1, 1f);
					func_167(uLocal_1389[iVar0], iParam1);
				}
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_49(bool bParam0)
{
	int iVar0;
	if (iLocal_228 == 0)
	{
		return;
	}
	iVar0 = 2;
	while (iVar0 <= 5)
	{
		if (__LIB_2__::func_1(uLocal_1389[iVar0], 0, 1))
		{
			PED::SET_PED_CONFIG_FLAG(uLocal_1389[iVar0], 215, bParam0);
		}
		iVar0++;
	}
	bLocal_1075 = bParam0;
}

void func_53()
{
	if (!Local_26.f_48)
	{
		__LIB_3__::func_426(&Local_26, &(Local_26.f_48), Local_26.f_3, &(Local_26.f_51.f_6));
	}
	Local_26.f_44 = 1;
}

bool func_54()
{
	int iVar0;
	iVar0 = 2;
	while (iVar0 <= 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_1389[iVar0]))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_1389[iVar0], Global_35, 1, 1))
			{
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(uLocal_1389[iVar0]);
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_62()
{
	int iVar0;
	if (iLocal_1411 >= 8)
	{
		return false;
	}
	if (iLocal_228 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_1389[2]))
		{
			if (func_206(uLocal_1389[2]))
			{
				return true;
			}
		}
	}
	else
	{
		iVar0 = 2;
		while (iVar0 <= 5)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_1389[iVar0]))
			{
				if (func_206(uLocal_1389[iVar0]))
				{
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

bool func_63()
{
	if (((iLocal_228 == 2 && iLocal_1415 == 16) && PED::IS_PED_ON_MOUNT(uLocal_1389[0])) && EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), ENTITY::GET_ENTITY_COORDS(uLocal_1389[0], true, false), 25f))
	{
		return true;
	}
	return false;
}

void func_66()
{
	if (!__LIB_2__::func_1(uLocal_1389[0], 0, 1) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_220, false))
	{
		return;
	}
	if (iLocal_228 == 0)
	{
		if (!ANIMSCENE::_0x1F0E401031E20146(Local_220, sLocal_516[4]) && !ANIMSCENE::_0x8D81E7824B7753F7(Local_220, "NO_AMMO", 1))
		{
			ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_220, sLocal_516[1], true);
			sLocal_1131 = "FALL_RECOVER_B_MALE";
			iLocal_1412 = 3;
		}
	}
	else if (iLocal_228 == 1)
	{
		if (!ANIMSCENE::_0x1F0E401031E20146(Local_220, sLocal_516[7]) && !ANIMSCENE::_0x8D81E7824B7753F7(Local_220, "NO_AMMO", 1))
		{
			ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_220, sLocal_516[2], true);
			sLocal_1131 = "FALL_RECOVER_B_MALE";
			iLocal_1412 = 3;
		}
	}
	else if (iLocal_228 == 2)
	{
		if (!ANIMSCENE::_0x1F0E401031E20146(Local_220, sLocal_516[8]))
		{
			ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_220, sLocal_516[4], true);
			iLocal_1412 = 4;
		}
	}
}

void func_67()
{
	int iVar0;
	if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_1389[0], -1))
	{
		return;
	}
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	if (PED::IS_PED_ON_MOUNT(uLocal_1389[0]))
	{
		TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
	}
	TASK::TASK_SMART_FLEE_PED(0, Global_35, 10000f, -1, 4096, 2f, 0);
	TASK::CLOSE_SEQUENCE_TASK(iVar0);
	TASK::TASK_PERFORM_SEQUENCE(uLocal_1389[0], iVar0);
	TASK::CLEAR_SEQUENCE_TASK(&iVar0);
}

bool func_68()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	__LIB_9__::func_279();
	func_209();
	func_210();
	func_211();
	func_212();
	func_213();
	func_214();
	func_215();
	func_216();
	func_217();
	func_218();
	func_219();
	if (!bLocal_1089)
	{
		func_220();
	}
	func_221();
	func_222();
	func_223();
	if (iLocal_228 != 0 && __LIB_1__::func_313(&uLocal_1315, 1f))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_1389[2]))
		{
			AUDIO::PLAY_ANIMAL_VOCALIZATION(uLocal_1389[2], "HOWL_LONG", false);
			__LIB_2__::func_315(1515458263, uLocal_1389[2], 1);
		}
	}
	switch (iLocal_1411)
	{
		case 0:
			ANIMSCENE::START_ANIM_SCENE(Local_220);
			if (iLocal_228 == 2)
			{
				GRAPHICS::START_PETROL_TRAIL_DECALS(1, 5f);
				GRAPHICS::ADD_PETROL_TRAIL_DECAL_INFO(vLocal_538, 1f);
				GRAPHICS::ADD_PETROL_TRAIL_DECAL_INFO(ENTITY::GET_ENTITY_COORDS(uLocal_1389[1], true, false), 1f);
				GRAPHICS::END_PETROL_TRAIL_DECALS();
				PED::_0xCAC43D060099EA72(uLocal_1389[1]);
				TASK::TASK_PLAY_ANIM(uLocal_1389[1], Local_526[0 /*2*/], Local_526[0 /*2*/].f_1, 8f, -8f, -1, 131072, 0f, false, 0, false, 0, false);
				PED::SET_PED_USING_ACTION_MODE(uLocal_1389[3], true, -1, 0);
				PED::SET_PED_USING_ACTION_MODE(uLocal_1389[4], true, -1, 0);
				PED::_0x89F5E7ADECCCB49C(uLocal_1389[3], "action");
				PED::_0x89F5E7ADECCCB49C(uLocal_1389[4], "action");
				TASK::TASK_COMBAT_ANIMAL_WARN(uLocal_1389[3], uLocal_1389[0], 1 | 2);
				TASK::TASK_COMBAT_ANIMAL_WARN(uLocal_1389[4], uLocal_1389[0], 1 | 2);
				func_49(1);
				if (__LIB_2__::func_1(uLocal_1389[2], 0, 1))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_1389[2], false, true);
					PED::SET_PED_CONFIG_FLAG(uLocal_1389[2], 138, true);
					TASK::TASK_EAT(uLocal_1389[2], uLocal_1389[1], 0);
				}
			}
			else
			{
				func_225();
				TASK::_TASK_USE_SCENARIO_POINT(uLocal_1389[1], iLocal_1407, 0, 0, false, true, 0, false, -1f, false);
				if (iLocal_228 == 0)
				{
					func_48(uLocal_1389[0], 0, 1);
					func_49(1);
				}
				else
				{
					PED::SET_PED_USING_ACTION_MODE(uLocal_1389[2], true, -1, 0);
					PED::SET_PED_USING_ACTION_MODE(uLocal_1389[3], true, -1, 0);
					PED::_0x89F5E7ADECCCB49C(uLocal_1389[2], "action");
					PED::_0x89F5E7ADECCCB49C(uLocal_1389[3], "action");
					TASK::TASK_COMBAT_ANIMAL_WARN(uLocal_1389[2], uLocal_1389[0], 1 | 2);
					TASK::TASK_COMBAT_ANIMAL_WARN(uLocal_1389[3], uLocal_1389[0], 1 | 2);
				}
			}
			iLocal_1411 = 1;
			break;
		case 1:
			if (!bLocal_1063)
			{
				func_226();
				bLocal_1063 = true;
			}
			else if (!bLocal_1064 && func_227())
			{
				PED::SET_PED_CONFIG_FLAG(uLocal_1389[1], 284, false);
				bLocal_1064 = true;
			}
			if (bLocal_1064)
			{
				if (__LIB_3__::func_452(&Local_26, 1f, 80f, 55f, 1, 0, 1, -1082130432 /* Float: -1f */, 1, 1125515264 /* Float: 150f */, 0, 0))
				{
					__LIB_1__::func_148(&uLocal_1279);
					func_229();
					if (!bLocal_1074 && !__LIB_0__::func_75(&uLocal_1285))
					{
						__LIB_1__::func_283(&uLocal_1285, 0);
					}
					AUDIO::_0x05D6195FB4D428F4(-1654545247);
					iLocal_1412 = 1;
					__LIB_1__::func_148(&uLocal_1288);
					iLocal_1411 = 4;
				}
			}
			if (__LIB_0__::func_94(Global_35, Local_26.f_51, 1) < 103f)
			{
				func_229();
			}
			break;
		case 4:
			if (func_231())
			{
				func_48(Global_35, 0, 1);
				iLocal_1411 = 6;
			}
			break;
		case 5:
			if (!__LIB_2__::func_1(uLocal_1389[0], 0, 1))
			{
				func_47();
				func_48(Global_35, 0, 1);
				iLocal_1411 = 6;
			}
			else if (iLocal_228 != 0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_1404) && ENTITY::IS_ENTITY_DEAD(iLocal_1404))
				{
					bLocal_1088 = false;
					func_232();
				}
			}
			break;
		case 6:
			if (ENTITY::IS_ENTITY_DEAD(uLocal_1389[0]) || __LIB_0__::func_232(Global_35, uLocal_1389[0], 1) > 6400f)
			{
				return true;
			}
			break;
		case 7:
			func_234(&(uLocal_1389[0]), &(Local_860[0 /*21*/]), 15f, &Local_987, &(Local_26.f_192), 0, 1, 0, 0, __LIB_2__::func_340(3, 0, 0), 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
			if (iLocal_228 == 2)
			{
				iLocal_1411 = 8;
			}
			else
			{
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_1389[0]))
				{
					if (ANIMSCENE::_0x005E6F28DD7ED58D(Local_220, "male"))
					{
						PED::SET_PED_RESET_FLAG(uLocal_1389[0], 29, true);
						TASK::TASK_PLAY_ANIM(uLocal_1389[0], sLocal_1039, sLocal_1131, 1000f, -4f, -1, 0, 0f, false, 0, false, 0, false);
						PED::_0x2208438012482A1A(uLocal_1389[0], false, false);
						PED::_0xAAB050DA48B57978(uLocal_1389[0], "Default_Scared", 0, -1, 4);
						iLocal_1411 = 8;
					}
				}
				Jump @4741; //curOff = 1160
				func_234(&(uLocal_1389[0]), &(Local_860[0 /*21*/]), 15f, &Local_987, &(Local_26.f_192), 0, 1, 0, 0, __LIB_2__::func_340(3, 0, 0), 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
				if (!__LIB_0__::func_163(uLocal_1389[0], -2017877118) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_1389[0], -1))
				{
					if (__LIB_2__::func_227(0, 1, uLocal_1389[0], 1))
					{
						if (bLocal_1061)
						{
							func_19();
						}
						else
						{
							iLocal_1411 = 9;
						}
					}
					else if (!__LIB_0__::func_163(uLocal_1389[0], -875674219))
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(uLocal_1389[0], Global_35, -1, -1f, -1f, -1f);
					}
				}
				else if (!ENTITY::IS_ENTITY_DEAD(uLocal_1389[0]))
				{
					PED::SET_PED_RESET_FLAG(uLocal_1389[0], 29, true);
				}
				Jump @4741; //curOff = 1364
				if (__LIB_2__::func_1(uLocal_1389[0], 0, 1))
				{
					if (func_234(&(uLocal_1389[0]), &(Local_860[0 /*21*/]), 15f, &Local_987, &(Local_26.f_192), 0, 1, 0, 0, __LIB_2__::func_340(3, 0, 0), 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0) != -1)
					{
						__LIB_2__::func_526(&Local_987, 0, 0);
					}
					if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_1389[0], -1))
					{
						if (!bLocal_1059)
						{
							func_235();
							_NAMESPACE29::_0x66F9EB44342BB4C5(uLocal_1389[0], &Local_810);
							PED::SET_PED_MAX_MOVE_BLEND_RATIO(uLocal_1389[0], 1f);
							if (bLocal_1070 == 1 && ((iLocal_228 != 2 && iLocal_442 == 5) || func_236(uLocal_1389[0], &(uLocal_1396[0]), Global_35, &iLocal_442, &Local_229, &Local_26)))
							{
								if (iLocal_228 != 2)
								{
									TASK::_0xE8C296B75EACC357(uLocal_1389[0], 0f);
									TASK::OPEN_SEQUENCE_TASK(&iLocal_1417);
									TASK::TASK_STAND_STILL(0, 850);
									if (__LIB_2__::func_1(uLocal_1389[1], 0, 1))
									{
										TASK::TASK_MOUNT_ANIMAL(0, uLocal_1389[1], -1, -1, 1f, 1, 0, 0);
									}
									TASK::_TASK_MOVE_IN_TRAFFIC_2(0, vLocal_550, 1073741824 /* Float: 2f */, 1.501f, 6144, 0);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_1417);
									TASK::_TASK_PERFORM_SEQUENCE_2(uLocal_1389[0], iLocal_1417, 1.2f, 1.2f);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_1417);
									func_237();
									iLocal_1048 = MISC::GET_HASH_KEY(&(Local_229.f_34));
									iLocal_1411 = 16;
								}
								else
								{
									func_238();
									__LIB_1__::func_148(&uLocal_1276);
									iLocal_1411 = 10;
								}
							}
							else if (((iLocal_442 == 5 && !bLocal_1060) && iLocal_228 != 2) && PED::IS_PED_FACING_PED(Global_35, uLocal_1389[0], 90f))
							{
								if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_445))
								{
									TASK::TASK_PLAY_ANIM(Global_35, &(Local_229.f_2), sLocal_445, 8f, -8f, -1, 67108880, 0f, false, 0, false, 0, false);
								}
								bLocal_1060 = true;
							}
						}
						else
						{
							if (!__LIB_0__::func_163(uLocal_1389[0], 518218985))
							{
								TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_1389[0], Global_35, 3, 4224, -1082130432 /* Float: -1f */, -1, uLocal_1389[1]);
							}
							iLocal_1411 = 16;
						}
					}
				}
				else
				{
					return true;
				}
				Jump @4741; //curOff = 1883
				if (__LIB_2__::func_1(uLocal_1389[0], 0, 1))
				{
					iVar0 = func_234(&(uLocal_1389[0]), &(Local_860[0 /*21*/]), 15f, &Local_987, &(Local_26.f_192), 0, 1, 0, 0, 1, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
					if (iVar0 == 0)
					{
						__LIB_2__::func_526(&Local_987, 0, 0);
						__LIB_2__::func_451(&(Local_860[0 /*21*/]), 0);
						__LIB_3__::func_152(0);
						__LIB_0__::func_7(&Global_1935630, 4);
						bLocal_1066 = true;
						iLocal_1411 = 11;
					}
					else if (iVar0 == 1)
					{
						__LIB_2__::func_526(&Local_987, 0, 0);
						__LIB_2__::func_451(&(Local_860[0 /*21*/]), 0);
						func_242();
					}
					if (__LIB_1__::func_313(&uLocal_1276, 10f) && __LIB_2__::func_227(0, 1, uLocal_1389[0], 1))
					{
						if (!bLocal_1068)
						{
							__LIB_2__::func_478(uLocal_1389[0], Global_35, sLocal_449[26], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							__LIB_1__::func_148(&uLocal_1276);
							bLocal_1068 = true;
						}
						else
						{
							func_242();
						}
					}
				}
				else
				{
					return true;
				}
				Jump @4741; //curOff = 2134
				if (__LIB_2__::func_1(uLocal_1389[0], 0, 1))
				{
					func_234(&(uLocal_1389[0]), &(Local_860[0 /*21*/]), 15f, &Local_987, &(Local_26.f_192), 0, 1, 0, 0, __LIB_2__::func_340(3, 0, 0), 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
					if (!bLocal_1067)
					{
						if (__LIB_2__::func_227(0, 1, Global_35, 1) && __LIB_2__::func_227(0, 1, uLocal_1389[0], 1))
						{
							if (bLocal_1066)
							{
								__LIB_2__::func_478(uLocal_1389[0], Global_35, sLocal_449[23], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								if (__LIB_0__::func_396(Global_35) && !__LIB_0__::func_71(uLocal_1389[0]))
								{
									TASK::OPEN_SEQUENCE_TASK(&iVar1);
									TASK::TASK_PLAY_ANIM(0, Local_526[3 /*2*/], Local_526[3 /*2*/].f_1, 8f, -8f, -1, 67108864, 0f, false, 0, false, 0, false);
									TASK::TASK_MOUNT_ANIMAL(0, __LIB_2__::func_825(Global_35), -1, 0, 2f, 1, 0, 0);
									TASK::CLOSE_SEQUENCE_TASK(iVar1);
									TASK::TASK_PERFORM_SEQUENCE(uLocal_1389[0], iVar1);
									TASK::CLEAR_SEQUENCE_TASK(&iVar1);
									__LIB_2__::func_105(&uLocal_1333, 0);
									__LIB_2__::func_51(&uLocal_1333, 0);
									PED::SET_PED_CAN_BE_TARGETTED(uLocal_1389[0], false);
								}
							}
							else
							{
								__LIB_2__::func_478(uLocal_1389[0], Global_35, sLocal_449[24], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
							bLocal_1067 = true;
						}
					}
					else if (bLocal_1066)
					{
						if (__LIB_2__::func_227(-4.5f, 1, 0, 0))
						{
							if ((__LIB_0__::func_797(0) && !__LIB_1__::func_52(0)) && __LIB_0__::func_665(Global_35, __LIB_0__::func_398(0), 1, 1) <= __LIB_1__::func_136(0))
							{
								iLocal_1418 = 0;
							}
							else if ((__LIB_0__::func_797(1) && !__LIB_1__::func_52(1)) && __LIB_0__::func_665(Global_35, __LIB_0__::func_398(1), 1, 1) <= __LIB_1__::func_136(1))
							{
								iLocal_1418 = 1;
							}
							else
							{
								iLocal_1418 = -1;
							}
							if (!PED::IS_PED_ON_MOUNT(Global_35))
							{
								if (iLocal_1418 != -1)
								{
									__LIB_3__::func_662("RE_ES_OBJ_MNT", 7500, 0, 0, -1, -1, 0);
									__LIB_1__::func_718(iLocal_1418);
								}
							}
							else
							{
								func_251();
								__LIB_3__::func_662("ANIMAL_OBJ_RIDE", 7500, 0, 0, -1, -1, 0);
								bLocal_1094 = true;
							}
							__LIB_1__::func_148(&uLocal_1330);
							iLocal_1042 = 27;
							func_252();
							iLocal_1411 = 12;
						}
					}
					else if (__LIB_2__::func_227(-6f, 1, 0, 0))
					{
						TASK::_TASK_MOVE_IN_TRAFFIC_2(uLocal_1389[0], vLocal_550, 1073741824 /* Float: 2f */, 1f, 128, 0);
						iLocal_1411 = 16;
					}
				}
				else
				{
					return true;
				}
				Jump @4741; //curOff = 2757
				if (__LIB_2__::func_1(uLocal_1389[0], 0, 1))
				{
					POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
					func_253();
					if (__LIB_0__::func_94(Global_35, vLocal_550, 0) < 8f)
					{
						iLocal_1411 = 13;
						__LIB_0__::func_325(&iLocal_1403);
						__LIB_0__::func_769();
						__LIB_2__::func_478(uLocal_1389[0], Global_35, sLocal_449[44], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						__LIB_1__::func_721(iLocal_1418);
						return false;
					}
					if (PED::IS_PED_ON_MOUNT(Global_35))
					{
						if (__LIB_1__::func_587(iLocal_1418))
						{
							__LIB_1__::func_721(iLocal_1418);
							if (!bLocal_1094)
							{
								__LIB_3__::func_662("ANIMAL_OBJ_RIDE", 7500, 0, 0, -1, -1, 0);
								bLocal_1094 = true;
							}
							else
							{
								UILOG::_UILOG_SET_CACHED_OBJECTIVE(__LIB_0__::func_958(0, "ANIMAL_OBJ_RIDE", 0, 0, -1, -1));
							}
						}
					}
					else if (!__LIB_1__::func_587(iLocal_1418))
					{
						if (iLocal_1418 == -1 || __LIB_1__::func_52(iLocal_1418))
						{
							func_255();
						}
						else if (!bLocal_1099)
						{
							__LIB_0__::func_769();
							__LIB_0__::func_325(&iLocal_1403);
							__LIB_3__::func_662("RE_ES_OBJ_MNT", 7500, 0, 0, -1, -1, 0);
							__LIB_1__::func_718(iLocal_1418);
							__LIB_1__::func_148(&uLocal_1109);
							bLocal_1099 = true;
						}
						else
						{
							func_255();
						}
					}
					if (__LIB_0__::func_396(Global_35))
					{
						if (!__LIB_0__::func_394(uLocal_1389[0], __LIB_2__::func_825(Global_35), 0))
						{
							if (!MAP::DOES_BLIP_EXIST(uLocal_1396[0]))
							{
								__LIB_2__::func_73(uLocal_1389[0], &(uLocal_1396[0]), -89429847, 580546400, 0, "RE_INTER_STRANGER");
								__LIB_0__::func_325(&iLocal_1403);
							}
							if (!bLocal_1065)
							{
								if (!__LIB_0__::func_163(uLocal_1389[0], 1868526510))
								{
									TASK::TASK_MOUNT_ANIMAL(uLocal_1389[0], __LIB_2__::func_825(Global_35), -1, 0, 2f, 1, 0, 0);
									__LIB_2__::func_105(&uLocal_1333, 0);
									__LIB_2__::func_51(&uLocal_1333, 0);
									PED::SET_PED_CAN_BE_TARGETTED(uLocal_1389[0], false);
								}
							}
						}
						else
						{
							func_256();
							if (!MAP::DOES_BLIP_EXIST(iLocal_1403))
							{
								func_251();
								__LIB_0__::func_325(&(uLocal_1396[0]));
							}
						}
					}
					else
					{
						if (func_234(&(uLocal_1389[0]), &(Local_860[0 /*21*/]), 15f, &Local_987, &(Local_26.f_192), 0, 1, 0, 0, __LIB_2__::func_340(3, 0, 0), 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0) == 1)
						{
							__LIB_2__::func_526(&Local_987, 0, 0);
							iLocal_1411 = 15;
						}
						else
						{
							if (PED::IS_PED_ON_MOUNT(uLocal_1389[0]) && !__LIB_0__::func_163(uLocal_1389[0], 242628503))
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_1417);
								TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
								TASK::TASK_FOLLOW_AND_CONVERSE_WITH_PED(0, Global_35, 0, 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 8, 0, 0, 1069547520 /* Float: 1.5f */, 1073741824 /* Float: 2f */);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_1417);
								TASK::TASK_PERFORM_SEQUENCE(uLocal_1389[0], iLocal_1417);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_1417);
								__LIB_2__::func_105(&uLocal_1333, 1);
								PED::SET_PED_CAN_BE_TARGETTED(uLocal_1389[0], true);
							}
							__LIB_0__::func_325(&(uLocal_1396[0]));
							if (__LIB_0__::func_665(Global_35, uLocal_1389[0], 0, 1) > 40f)
							{
								__LIB_3__::func_662("ANIMAL_RIDE_ABANDON", 7500, 0, 0, -1, -1, 0);
								TASK::_TASK_MOVE_IN_TRAFFIC_2(uLocal_1389[0], vLocal_550, 1073741824 /* Float: 2f */, 1f, 128, 0);
								return true;
							}
							Jump @3556; //curOff = 3533
							__LIB_3__::func_662("ANIMAL_RIDE_DEAD", 7500, 0, 0, -1, -1, 0);
							return true;
							Jump @4741; //curOff = 3556
							func_257();
							if (__LIB_2__::func_1(uLocal_1389[0], 0, 1))
							{
								if (!PED::IS_PED_ON_MOUNT(uLocal_1389[0]))
								{
									iLocal_1406 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(vLocal_553, iLocal_537, 5f, 1, false);
									if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_1406))
									{
										TASK::_TASK_USE_SCENARIO_POINT(uLocal_1389[0], iLocal_1406, "WORLD_HUMAN_LEAN_RAILING_FEMALE_A", 0, true, false, 0, false, -1f, false);
									}
									else
									{
										TASK::TASK_WANDER_STANDARD(uLocal_1389[0], __LIB_0__::func_152(ENTITY::GET_ENTITY_COORDS(uLocal_1389[0], true, false), vLocal_550, 1), 0);
									}
									__LIB_1__::func_715(12, 0, 0, "HONOR_EVENT_STRANGER_HELPED", uLocal_1389[0], 0, 1065353216 /* Float: 1f */, 0);
									PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), uLocal_1389[0], 7, 2, 1);
									PED::_0xE737D5F14304A2EC(uLocal_1389[0], PLAYER::PLAYER_ID(), 120000);
									__LIB_2__::func_56(uLocal_1389[0], 1, 1);
									PED::SET_PED_CAN_BE_TARGETTED(uLocal_1389[0], true);
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 256, false);
									iLocal_1411 = 14;
								}
								else if (!bLocal_1078)
								{
									if (__LIB_3__::func_869(Global_35, &uLocal_1043, 65, 256, 0, 1084227584 /* Float: 5f */, 100, 0, 0))
									{
										TASK::OPEN_SEQUENCE_TASK(&iVar2);
										TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 0, -1f, -1f, -1f);
										TASK::TASK_PLAY_ANIM(0, Local_526[4 /*2*/], Local_526[4 /*2*/].f_1, 8f, -8f, -1, 67108864, 0f, false, 0, false, 0, false);
										TASK::CLOSE_SEQUENCE_TASK(iVar2);
										TASK::TASK_PERFORM_SEQUENCE(uLocal_1389[0], iVar2);
										TASK::CLEAR_SEQUENCE_TASK(&iVar2);
										bLocal_1078 = true;
									}
								}
							}
							Jump @4741; //curOff = 3932
							func_257();
							if (__LIB_2__::func_1(uLocal_1389[0], 0, 1))
							{
								if ((__LIB_3__::func_138(uLocal_1389[0], iLocal_537) && bLocal_1093) && !__LIB_0__::func_75(&uLocal_1324))
								{
									PED::_0xB9BDFAE609DFB7C5(uLocal_1389[0], PLAYER::PLAYER_ID(), 120000);
									return true;
								}
							}
							else
							{
								return true;
							}
							Jump @4741; //curOff = 4020
							if (__LIB_2__::func_1(uLocal_1389[0], 0, 1))
							{
								func_234(&(uLocal_1389[0]), &(Local_860[0 /*21*/]), 15f, &Local_987, &(Local_26.f_192), 0, 1, 0, 0, __LIB_2__::func_340(3, 0, 0), 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
								if (__LIB_2__::func_227(0, 1, Global_35, 1) && __LIB_2__::func_227(0, 1, uLocal_1389[0], 1))
								{
									if (bLocal_1095)
									{
										if (bLocal_1096)
										{
											__LIB_2__::func_478(uLocal_1389[0], Global_35, sLocal_449[65], 0, -1082130432 /* Float: -1f */, 2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
										}
										else
										{
											__LIB_2__::func_478(uLocal_1389[0], Global_35, sLocal_449[63], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
										}
									}
									else
									{
										__LIB_2__::func_478(uLocal_1389[0], Global_35, sLocal_449[24], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
									}
									TASK::OPEN_SEQUENCE_TASK(&iVar3);
									if (PED::IS_PED_ON_MOUNT(uLocal_1389[0]))
									{
										TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
									}
									TASK::_TASK_MOVE_IN_TRAFFIC_2(0, vLocal_550, 1073741824 /* Float: 2f */, 1f, 128, 0);
									TASK::CLOSE_SEQUENCE_TASK(iVar3);
									TASK::_TASK_PERFORM_SEQUENCE_2(uLocal_1389[0], iVar3, 1f, 1f);
									TASK::CLEAR_SEQUENCE_TASK(&iVar3);
									return true;
								}
							}
							Jump @4741; //curOff = 4338
							if (iLocal_228 != 2 && MAP::DOES_BLIP_EXIST(uLocal_1396[0]))
							{
								if (!func_262(&(Local_229.f_34), 1) && AUDIO::_0x4A98E228A936DBCC(uLocal_1389[0]) != iLocal_1048)
								{
									MAP::REMOVE_BLIP(&(uLocal_1396[0]));
								}
							}
							if (!bLocal_1087)
							{
								iVar4 = func_234(&(uLocal_1389[0]), &(Local_860[0 /*21*/]), 15f, &Local_987, &(Local_26.f_192), 0, 1, 0, 0, __LIB_2__::func_340(3, 0, 0), 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
								if (iVar4 == 0)
								{
									__LIB_2__::func_411(&(Local_987[0 /*17*/]), 0, 0);
									__LIB_2__::func_411(&(Local_987[1 /*17*/]), 0, 0);
									bLocal_1083 = true;
									__LIB_1__::func_148(&uLocal_1306);
								}
								else if (iVar4 == 1)
								{
									__LIB_2__::func_411(&(Local_987[1 /*17*/]), 0, 0);
									__LIB_2__::func_411(&(Local_987[0 /*17*/]), 0, 0);
									bLocal_1082 = true;
									__LIB_1__::func_148(&uLocal_1306);
								}
							}
							func_263();
							if (__LIB_0__::func_394(Global_35, uLocal_1389[1], 1) && !bLocal_1081)
							{
								__LIB_2__::func_122(uLocal_1389[0], "POST_THEFT", 1744022339, Global_35, 1, 0, 0, 1);
								TASK::OPEN_SEQUENCE_TASK(&iVar5);
								TASK::TASK_MOUNT_ANIMAL(0, uLocal_1389[1], -1, -1, 1.5f, 1, 0, 0);
								TASK::_TASK_MOVE_IN_TRAFFIC_2(0, vLocal_550, 1073741824 /* Float: 2f */, 1.501f, 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(iVar5);
								TASK::TASK_PERFORM_SEQUENCE(uLocal_1389[0], iVar5);
								TASK::CLEAR_SEQUENCE_TASK(&iVar5);
								bLocal_1081 = true;
							}
							if (__LIB_2__::func_227(0, 1, 0, 0))
							{
								if (!(__LIB_2__::func_1(uLocal_1389[0], 0, 1) && __LIB_0__::func_232(Global_35, uLocal_1389[0], 0) < 3600f))
								{
									return true;
								}
							}
						}
						return false;
					}
				}
			}
			default:
				break;
	}
}

bool func_70(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (!ENTITY::IS_ENTITY_DEAD((*uParam1)[iVar0]) && iParam0 != (*uParam1)[iVar0])
		{
			if (__LIB_0__::func_665(iParam0, (*uParam1)[iVar0], 1, 1) < fParam3)
			{
				*uParam2 = iVar0;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_92(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
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
		while (iVar0 < *uParam1)
		{
			bVar3 = (bParam8 && DECORATOR::DECOR_EXIST_ON((*uParam1)[iVar0], "pedRoam_bInPedRoam"));
			if (__LIB_2__::func_1((*uParam1)[iVar0], 0, 0))
			{
				__LIB_3__::func_259((*uParam1)[iVar0], bVar3);
				if (__LIB_3__::func_239(uParam0, uParam1[iVar0]))
				{
					__LIB_2__::func_32(uParam1[iVar0]);
				}
			}
			if (!uParam0->f_50)
			{
				if (__LIB_2__::func_1((*uParam1)[iVar0], 0, 1))
				{
					if (bParam9)
					{
						if (PED::GET_PED_STEALTH_MOVEMENT((*uParam1)[iVar0]))
						{
							PED::SET_PED_STEALTH_MOVEMENT((*uParam1)[iVar0], 0, 0, 0);
						}
						else if (PED::_GET_PED_CROUCH_MOVEMENT((*uParam1)[iVar0]))
						{
							PED::_SET_PED_CROUCH_MOVEMENT((*uParam1)[iVar0], false, 0, false);
						}
					}
					if (!bVar3)
					{
						if (!bParam6)
						{
							__LIB_3__::func_416((*uParam1)[iVar0], 1073741824 /* Float: 2f */, __LIB_0__::func_514(iVar0 < iVar2, uParam0->f_98[iVar0], -1f), iVar1, 0);
						}
						else
						{
							TASK::TASK_WANDER_STANDARD((*uParam1)[iVar0], 40000f, 0);
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bParam7)
	{
		__LIB_3__::func_604(uParam0);
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

Vector3 func_104(int iParam0, int iParam1)
{
	return func_310(iParam0, iParam1);
}

float func_105(int iParam0, int iParam1)
{
	return func_311(iParam0, iParam1);
}

Vector3 func_106(int iParam0, int iParam1)
{
	return func_312(iParam0, iParam1);
}

float func_107(int iParam0, int iParam1)
{
	return func_313(iParam0, iParam1);
}

Vector3 func_108(int iParam0, int iParam1)
{
	return func_314(iParam0, iParam1);
}

float func_109(int iParam0, int iParam1)
{
	return func_315(iParam0, iParam1);
}

Vector3 func_110(int iParam0, int iParam1)
{
	return func_316(iParam0, iParam1);
}

float func_111(int iParam0, int iParam1)
{
	return func_317(iParam0, iParam1);
}

void func_119()
{
	Local_604[1 /*32*/].f_1 = joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
	switch (iLocal_228)
	{
		case 2:
			Local_604[0 /*32*/].f_1 = joaat("RE_ANIMALATTACK_FEMALES_01");
			Local_604[0 /*32*/].f_3 = 54369366;
			StringCopy(&(Local_604[0 /*32*/].f_23), "0871_A_F_M_Civ_White_AVOID_03", 64);
			Local_604[0 /*32*/] = 5;
			sLocal_443 = sLocal_449[13];
			sLocal_444 = sLocal_449[15];
			sLocal_446 = sLocal_449[16];
			sLocal_447 = sLocal_449[17];
			StringCopy(&(Local_229.f_34), sLocal_449[19], 64);
			break;
		case 0:
		case 1:
			switch (__LIB_3__::func_283())
			{
				case 0:
					Local_604[0 /*32*/].f_1 = joaat("RE_ANIMALATTACK_MALES_01");
					Local_604[0 /*32*/].f_3 = 54369366;
					StringCopy(&(Local_604[0 /*32*/].f_23), "ANNESBURG_HUSBAND", 64);
					break;
				case 1:
				case 2:
				default:
					Local_604[0 /*32*/].f_1 = joaat("RE_ANIMALATTACK_MALES_01");
					Local_604[0 /*32*/].f_3 = -1676093373;
					StringCopy(&(Local_604[0 /*32*/].f_23), "0898_A_M_M_Civ_Poor_Hispanic_AVOID_03", 64);
					break;
			}
			Local_604[0 /*32*/] = 4;
			sLocal_443 = sLocal_449[0];
			sLocal_444 = sLocal_449[2];
			sLocal_446 = sLocal_449[3];
			sLocal_447 = sLocal_449[4];
			StringCopy(&(Local_229.f_34), sLocal_449[6], 64);
			Local_229.f_190 = 2;
			break;
	}
	__LIB_3__::func_303(&(Local_604[0 /*32*/].f_22));
	func_325();
}

void func_120()
{
	if (__LIB_2__::func_117(128))
	{
		Local_797[0 /*12*/].f_7 = joaat("P_LANTERN09X");
	}
}

void func_121()
{
	Local_810 = { 0f, 0f, 0f };
	Local_810.f_3 = Global_35;
	Local_810.f_8 = 4;
	Local_810.f_19 = 4;
	Local_810.f_21 = 4;
	Local_810.f_17 = 4;
	Local_810.f_18 = 4;
	Local_810.f_7 = -1;
}

void func_122()
{
	if (iLocal_228 == 0)
	{
		StringCopy(&(Local_229.f_2), "SCRIPT_RE@ANIMAL_ATTACK@MALE@TREE", 64);
		StringCopy(&(Local_229.f_10), "ALMOST_MEAL_MALE", 64);
	}
	else if (iLocal_228 == 1)
	{
		StringCopy(&(Local_229.f_2), "SCRIPT_RE@ANIMAL_ATTACK@MALE@ROCK", 64);
		StringCopy(&(Local_229.f_10), "ALMOST_MEAL_MALE", 64);
	}
	else
	{
		StringCopy(&(Local_229.f_2), "SCRIPT_RE@ANIMAL_ATTACK@FEMALE@ROCK", 64);
		StringCopy(&(Local_229.f_10), "GENTLEMAN_FEMALE", 64);
		sLocal_445 = "THANK_YOU_PLAYER";
	}
	Local_229.f_77 = 0;
	if (iLocal_228 != 2)
	{
		Local_229.f_80 = 0;
		Local_229.f_180 = 1;
		Local_229.f_212 = 1f;
	}
	else
	{
		Local_229.f_80 = 1;
	}
	Local_229.f_189 = 1.4f;
	Local_229.f_186 = 10f;
	Local_229.f_188 = 20f;
	Local_229.f_182 = 1;
	Local_229.f_78 = 0;
}

void func_125()
{
	int iVar0;
	Local_526[0 /*2*/] = "creatures_mammal@horse@normal@dead";
	Local_526[0 /*2*/].f_1 = "dead_left";
	Local_526[1 /*2*/] = "creatures_mammal@cougar@melee@streamed_taunts";
	Local_526[1 /*2*/].f_1 = "growling";
	Local_526[2 /*2*/] = __LIB_0__::func_628(&(Local_229.f_2));
	Local_526[2 /*2*/].f_1 = __LIB_0__::func_628(&(Local_229.f_10));
	if (iLocal_228 == 2)
	{
		Local_526[3 /*2*/].f_1 = "VERY_KIND_FEMALE";
		Local_526[3 /*2*/] = "SCRIPT_RE@ANIMAL_ATTACK@FEMALE@ROCK";
		Local_526[4 /*2*/].f_1 = "THANKS_AGAIN_FEMALE";
		Local_526[4 /*2*/] = "SCRIPT_RE@ANIMAL_ATTACK@FEMALE@ROCK";
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_526[iVar0 /*2*/]))
		{
			__LIB_3__::func_318(Local_526[iVar0 /*2*/], &uLocal_563);
		}
		iVar0++;
	}
}

void func_131()
{
	if (iLocal_228 == 0)
	{
		Local_220 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_220.f_4, 0, sLocal_516[3], false, true);
	}
	else if (iLocal_228 == 1)
	{
		Local_220 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_220.f_5, 0, sLocal_516[6], false, true);
	}
	else
	{
		Local_220 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_220.f_6, 0, sLocal_516[7], false, true);
	}
}

void func_137(var uParam0)
{
	Local_835 = { 0f, 0f, 0f };
	Local_835.f_3 = uParam0;
	Local_835.f_8 = 4;
	Local_835.f_19 = 4;
	Local_835.f_21 = 4;
	Local_835.f_17 = 4;
	Local_835.f_20 = 4;
	Local_835.f_18 = 4;
	Local_835.f_22 = 4;
	Local_835.f_7 = 0;
}

void func_138()
{
	if (iLocal_228 == 1)
	{
		WEAPON::_GIVE_WEAPON_TO_PED_2(uLocal_1389[0], joaat("WEAPON_REPEATER_CARBINE"), 0, true, false, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
		WEAPON::SET_CURRENT_PED_WEAPON(uLocal_1389[0], joaat("WEAPON_REPEATER_CARBINE"), false, 0, false, false);
		TASK::TASK_SWAP_WEAPON(uLocal_1389[0], 1, 0, 0, 0);
		WEAPON::SET_PED_AMMO(uLocal_1389[0], joaat("WEAPON_REPEATER_CARBINE"), 0);
	}
	else if (iLocal_228 == 0)
	{
		WEAPON::_GIVE_WEAPON_TO_PED_2(uLocal_1389[0], joaat("WEAPON_REVOLVER_CATTLEMAN"), 0, true, false, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
		WEAPON::SET_CURRENT_PED_WEAPON(uLocal_1389[0], joaat("WEAPON_REVOLVER_CATTLEMAN"), false, 0, false, false);
		TASK::TASK_SWAP_WEAPON(uLocal_1389[0], 1, 0, 0, 0);
		WEAPON::SET_PED_AMMO(uLocal_1389[0], joaat("WEAPON_REVOLVER_CATTLEMAN"), 0);
	}
	else
	{
		WEAPON::_GIVE_WEAPON_TO_PED_2(uLocal_1389[0], joaat("WEAPON_MELEE_TORCH"), 1, true, false, 1, false, 0.5f, 1f, 752097756, true, 0f, false);
		WEAPON::SET_CURRENT_PED_WEAPON(uLocal_1389[0], joaat("WEAPON_MELEE_TORCH"), false, 1, true, false);
	}
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_220, Local_26.f_51, func_346(iLocal_1416, Local_26.f_51.f_4), 2);
	if (__LIB_2__::func_1(uLocal_1389[0], 0, 1))
	{
		if (iLocal_228 == 2)
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_220, "female", uLocal_1389[0], 0);
		}
		else
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_220, "male", uLocal_1389[0], 0);
		}
	}
}

bool func_139()
{
	return ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_220, true, false);
}

int func_150(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 0;
		case 3:
			return 1;
		case 4:
			return 2;
		case 5:
			return 3;
	}
	return -1;
}

void func_152(int iParam0, int iParam1, bool bParam2)
{
	TASK::CLEAR_PED_TASKS(uLocal_1389[iParam1], true, false);
	TASK::CLEAR_PED_SECONDARY_TASK(uLocal_1389[iParam1]);
	PED::REGISTER_TARGET(uLocal_1389[iParam1], iParam0, 1);
	PED::_0xD05AD61F242C626B(iParam0, 1f);
	func_167(uLocal_1389[iParam1], iParam0);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(uLocal_1389[iParam1], 65, true);
	if (bParam2)
	{
		TASK::TASK_COMBAT_PED(uLocal_1389[iParam1], iParam0, 16777216, 0);
	}
	else
	{
		TASK::TASK_COMBAT_PED(uLocal_1389[iParam1], iParam0, 0, 0);
	}
}

bool func_154(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - iParam1))
	{
		if (__LIB_2__::func_1((*uParam0)[(iVar0 + iParam1)], 0, 1))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_155(char* sParam0, float fParam1)
{
	sLocal_1130 = sParam0;
	fLocal_1050 = fParam1;
	__LIB_1__::func_148(&uLocal_1300);
}

void func_167(var uParam0, int iParam1)
{
	if (iParam1 != Global_35)
	{
		PED::_0xD05AD61F242C626B(Global_35, 0f);
		PED::_0x4707E9C23D8CA3FE(uParam0, Global_35);
	}
	else
	{
		PED::_0xD05AD61F242C626B(uLocal_1389[0], 0f);
		PED::_0x4707E9C23D8CA3FE(uParam0, uLocal_1389[0]);
	}
}

bool func_206(int iParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	HUD::GET_HUD_SCREEN_POSITION_FROM_WORLD_POSITION(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), &fVar0, &fVar1);
	HUD::GET_HUD_SCREEN_POSITION_FROM_WORLD_POSITION(ENTITY::GET_ENTITY_COORDS(uLocal_1389[0], false, false), &fVar2, &fVar3);
	fVar0 = MISC::ABSF(fVar0);
	fVar1 = MISC::ABSF(fVar1);
	fVar2 = MISC::ABSF(fVar2);
	fVar3 = MISC::ABSF(fVar3);
	fVar4 = ((fVar0 + fVar1) / 2f);
	fVar5 = ((fVar2 + fVar3) / 2f);
	if ((MISC::ABSF((fVar4 - 0.5f)) - MISC::ABSF((fVar5 - 0.5f))) < 0.06f)
	{
		return true;
	}
	return false;
}

void func_209()
{
	if (__LIB_1__::func_313(&uLocal_1282, 3f))
	{
		__LIB_2__::func_105(&uLocal_1333, 1);
		__LIB_2__::func_111(&uLocal_1333, 1);
		__LIB_2__::func_507(&uLocal_1333, 1500);
	}
}

void func_210()
{
	if (iLocal_1411 >= 7)
	{
		return;
	}
	if (func_154(&uLocal_1389, 2))
	{
		__LIB_1__::func_148(&uLocal_1327);
		if (!bLocal_1058 && Local_26.f_46)
		{
			func_446();
			__LIB_1__::func_148(&uLocal_1321);
			iLocal_1412 = 5;
		}
		else
		{
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_1389[0]))
			{
				if (!__LIB_0__::func_163(uLocal_1389[0], 518218985) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_1389[0], -1))
				{
					TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_1389[0], Global_35, 3, 128, -1082130432 /* Float: -1f */, -1, uLocal_1389[1]);
					iLocal_1411 = 16;
				}
			}
			if (bLocal_1058)
			{
				func_53();
			}
		}
	}
	else if ((__LIB_2__::func_227(0, 1, uLocal_1389[0], 0) && !func_447(uLocal_1389[0], &uLocal_1389, &uLocal_1040, 1109393408 /* Float: 40f */, 2)) && !func_447(Global_35, &uLocal_1389, &uLocal_1040, 1109393408 /* Float: 40f */, 2))
	{
		__LIB_1__::func_148(&uLocal_1327);
		if (!bLocal_1058)
		{
			__LIB_1__::func_148(&uLocal_1321);
			func_446();
			if (iLocal_228 == 2)
			{
				__LIB_2__::func_478(uLocal_1389[0], Global_35, sLocal_449[18], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			else
			{
				__LIB_2__::func_478(uLocal_1389[0], Global_35, sLocal_449[5], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
		}
		else
		{
			iLocal_1411 = 16;
		}
		func_448();
		func_449();
		bLocal_1070 = true;
		iLocal_1412 = 5;
	}
}

void func_211()
{
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_1389[0]) && PED::IS_PED_RAGDOLL(uLocal_1389[0]))
	{
		if (bLocal_1075)
		{
			func_49(0);
		}
	}
}

void func_212()
{
	int iVar0;
	if (iLocal_228 == 2 && bLocal_1072)
	{
		return;
	}
	if (!bLocal_1072)
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_1389[0], 1890122679))
		{
			if (iLocal_228 == 2)
			{
				WEAPON::_0xCEF4C65DE502D367(uLocal_1389[0], 1, 1, 1, 0);
			}
			else
			{
				WEAPON::_0xCEF4C65DE502D367(uLocal_1389[0], 1, 0, 1, 0);
			}
			bLocal_1072 = true;
		}
	}
	else
	{
		return;
	}
	if ((((ENTITY::IS_ENTITY_DEAD(uLocal_1389[0]) || !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_1389[0], -1)) || bLocal_1072) || !func_450()) || ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_1389[0], -15700114))
	{
		return;
	}
	if (__LIB_1__::func_313(&uLocal_1303, fLocal_1132))
	{
		fLocal_1132 = MISC::GET_RANDOM_FLOAT_IN_RANGE(2f, 3f);
	}
	if (__LIB_1__::func_285(&uLocal_1318, 1.7f))
	{
		if (__LIB_1__::func_313(&uLocal_1312, fLocal_1133) || !__LIB_0__::func_75(&uLocal_1312))
		{
			__LIB_1__::func_148(&uLocal_1312);
			fLocal_1133 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.8f, 2.8f);
			if (!__LIB_0__::func_75(&uLocal_1303) || iLocal_1411 == 4)
			{
				__LIB_3__::func_415(&Local_26, uLocal_1389[0], ENTITY::GET_ENTITY_COORDS(uLocal_1389[0], true, false), 160);
				PED::_0x4C57F27D1554E6B0(uLocal_1389[0], 0f, 0f, 0f, 0, -1082130432 /* Float: -1f */, 0, 0f);
				__LIB_2__::func_315(1066055203, uLocal_1389[0], 1);
				iLocal_1045++;
				if (iLocal_1411 == 4)
				{
					bLocal_1080 = true;
				}
			}
			if (iLocal_1045 >= iLocal_1046)
			{
				if (!bLocal_1090)
				{
					__LIB_2__::func_268(536870912, 1, 0, 1);
					bLocal_1090 = true;
				}
				if (!__LIB_0__::func_75(&uLocal_1303))
				{
					__LIB_1__::func_148(&uLocal_1303);
					iLocal_1046 = MISC::GET_RANDOM_INT_IN_RANGE(2, 4);
					iLocal_1045 = 0;
				}
			}
			if (iLocal_228 == 0 && iLocal_1411 == 4)
			{
				if (!__LIB_0__::func_163(uLocal_1389[2], 242628503))
				{
					TASK::CLEAR_PED_TASKS(uLocal_1389[2], true, false);
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_556, 1.75f, 20000, 2f, 8192, 40000f);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_559, 1.75f, 20000, 2f, 8192, 40000f);
					TASK::TASK_COMBAT_PED(0, uLocal_1389[0], 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::_TASK_PERFORM_SEQUENCE_2(uLocal_1389[2], iVar0, 0.2f, 0.2f);
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				}
			}
		}
	}
}

void func_213()
{
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_1389[0]))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_1389[0], joaat("FALL")))
		{
			if (iLocal_228 == 2)
			{
				__LIB_2__::func_478(uLocal_1389[0], 0, "GENERIC_SHOCKED_HIGH", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
			}
			else
			{
				__LIB_2__::func_478(uLocal_1389[0], 0, "GENERIC_SHOCKED_HIGH", 0, -1082130432 /* Float: -1f */, 2, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
			}
		}
	}
}

void func_214()
{
	if (iLocal_228 != 2 || !__LIB_2__::func_1(uLocal_1389[0], 0, 1))
	{
		return;
	}
}

void func_215()
{
	if ((bLocal_1077 || iLocal_228 == 0) || iLocal_1411 >= 6)
	{
		return;
	}
	if (!bLocal_1079)
	{
		if (__LIB_2__::func_227(0, 1, uLocal_1389[0], 1))
		{
			if (__LIB_0__::func_232(uLocal_1389[0], Global_35, 0) < 1600f)
			{
				if (PED::_0x7F9B9791D4CB71F6(uLocal_1389[0], Global_35, false, 0) == 1)
				{
					if (iLocal_228 == 2)
					{
						__LIB_2__::func_478(uLocal_1389[0], Global_35, sLocal_449[46], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, -1824788778, 1, 0, 0);
					}
					else
					{
						__LIB_2__::func_478(uLocal_1389[0], Global_35, sLocal_449[45], 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, -1824788778, 1, 0, 0);
					}
					__LIB_2__::func_315(1515458263, uLocal_1389[0], 1);
					bLocal_1076 = true;
					func_53();
					bLocal_1077 = true;
				}
			}
		}
	}
}

void func_216()
{
	if (bLocal_1092)
	{
		return;
	}
	if (__LIB_2__::func_901(uLocal_1389[0], Global_35))
	{
		return;
	}
	if ((ENTITY::IS_ENTITY_DEAD(uLocal_1389[0]) && !Local_26.f_46) && !bLocal_1058)
	{
		if (__LIB_0__::func_232(Global_35, uLocal_1389[0], 1) < 225f || PED::IS_TRACKED_PED_VISIBLE(uLocal_1389[0]))
		{
			__LIB_1__::func_715(3, 0, 0, "HONOR_EVENT_WATCHED_DEATH", uLocal_1389[0], 0, 1065353216 /* Float: 1f */, 0);
			bLocal_1092 = true;
		}
	}
}

void func_217()
{
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_1389[0]))
	{
		if (__LIB_1__::func_313(&uLocal_1321, 1.5f))
		{
			__LIB_1__::func_715(13, 0, 0, "HONOR_EVENT_STRANGER_HELPED", uLocal_1389[0], 0, 1065353216 /* Float: 1f */, 0);
		}
	}
}

void func_218()
{
	if (__LIB_1__::func_313(&uLocal_1327, 3.5f))
	{
		PED::SET_PED_CAN_BE_TARGETTED(uLocal_1389[0], true);
	}
}

void func_219()
{
	if (bLocal_1098)
	{
		return;
	}
	if (PED::_0x3BDFCF25B58B0415(uLocal_1389[0]))
	{
		__LIB_2__::func_478(uLocal_1389[0], 0, "DEATH_HIGH_LONG", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, -500314840, 1, 0, 0);
		bLocal_1098 = true;
	}
}

int func_220()
{
	if (__LIB_1__::func_285(&uLocal_1297, 2.8f))
	{
		if (func_453())
		{
			bLocal_1089 = true;
			return 1;
		}
	}
	return 0;
}

void func_221()
{
	float fVar0;
	int iVar1;
	switch (iLocal_1412)
	{
		case 0:
			break;
		case 1:
			if (__LIB_2__::func_227(0, 1, uLocal_1389[0], 1))
			{
				if (iLocal_228 != 0 || bLocal_1080)
				{
					if (iLocal_228 == 2)
					{
						ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_220, "BOOL_DEFENDING", true, false);
					}
					else if (iLocal_228 == 1)
					{
						ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_220, "BOOL_STRUGGLE", true, false);
					}
					else
					{
						ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_220, "BOOL_SHOOT", true, false);
					}
					func_454();
					if (iLocal_228 == 0)
					{
						__LIB_2__::func_478(uLocal_1389[0], 0, sLocal_449[9], 0, -1082130432 /* Float: -1f */, 0, 0, 1, 2, 0, 0, -1824788778, 1, 0, 0);
					}
					else if (iLocal_228 == 1)
					{
						__LIB_2__::func_478(uLocal_1389[0], 0, sLocal_449[10], 0, -1082130432 /* Float: -1f */, 0, 0, 1, 2, 0, 0, -1824788778, 1, 0, 0);
					}
					else
					{
						__LIB_2__::func_478(uLocal_1389[0], 0, "GENERIC_FRIGHTENED_HIGH", 0, -1082130432 /* Float: -1f */, 2, 0, 1, 2, 0, 0, -1824788778, 1, 0, 0);
					}
					iLocal_1412 = 2;
				}
			}
			break;
		case 2:
			if (iLocal_228 == 0)
			{
				if (__LIB_0__::func_232(Global_35, uLocal_1389[0], 1) > 900f && PED::IS_TRACKED_PED_VISIBLE(uLocal_1389[0]))
				{
					fVar0 = 15f;
				}
				else
				{
					fVar0 = 30f;
				}
			}
			else if (iLocal_228 == 1)
			{
				if (__LIB_0__::func_232(Global_35, uLocal_1389[0], 1) > 900f && PED::IS_TRACKED_PED_VISIBLE(uLocal_1389[0]))
				{
					fVar0 = 15f;
				}
				else
				{
					fVar0 = 33f;
				}
			}
			else if (__LIB_0__::func_232(Global_35, uLocal_1389[0], 1) > 900f && PED::IS_TRACKED_PED_VISIBLE(uLocal_1389[0]))
			{
				fVar0 = 15f;
			}
			else
			{
				fVar0 = 28f;
			}
			if (iLocal_1412 != 4 && __LIB_1__::func_285(&uLocal_1288, fVar0))
			{
				func_66();
			}
			break;
		case 3:
			if (iLocal_228 == 2)
			{
				iLocal_1412 = 4;
			}
			else
			{
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_1389[0]))
				{
					if (ANIMSCENE::_0x005E6F28DD7ED58D(Local_220, "male"))
					{
						TASK::TASK_PLAY_ANIM(uLocal_1389[0], sLocal_1039, sLocal_1131, 1000f, -8f, -1, 0, 0f, false, 0, false, 0, false);
						PED::SET_PED_RESET_FLAG(uLocal_1389[0], 29, true);
						PED::_0x2208438012482A1A(uLocal_1389[0], false, false);
						iLocal_1412 = 4;
					}
				}
				Jump @1054; //curOff = 596
				if (__LIB_2__::func_1(uLocal_1389[0], 0, 1))
				{
					if (!__LIB_0__::func_163(uLocal_1389[0], -2017877118) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_1389[0], -1))
					{
						if (iLocal_228 == 0)
						{
							if (__LIB_2__::func_1(uLocal_1389[2], 0, 1))
							{
								TASK::_TASK_FLEE_FROM_PED(uLocal_1389[0], uLocal_1389[2], 0f, 0f, 0f, 10000f, -1, 4096, 2f, uLocal_1389[1]);
								__LIB_2__::func_105(&uLocal_1333, 0);
								__LIB_3__::func_237(&(Local_26.f_5), &iLocal_1415);
								iLocal_1411 = 5;
								iLocal_1412 = 5;
							}
						}
						else
						{
							if (__LIB_2__::func_1(uLocal_1389[1], 0, 1))
							{
								TASK::_TASK_FLEE_FROM_COORD(uLocal_1389[0], Local_26.f_51, 0f, 0f, 0f, 10000f, -1, 4096, 2f, uLocal_1389[1]);
							}
							else
							{
								TASK::_TASK_FLEE_FROM_COORD(uLocal_1389[0], Local_26.f_51, 0f, 0f, 0f, 10000f, -1, 4096, 2f, 0);
							}
							iVar1 = 2;
							while (iVar1 <= 5)
							{
								TASK::_0x3923EC958249657D(uLocal_1389[0], uLocal_1389[iVar1], -1082130432 /* Float: -1f */);
								iVar1++;
							}
							func_48(uLocal_1389[0], 0, 1);
							func_49(0);
							func_232();
							iLocal_1411 = 5;
							iLocal_1412 = 5;
						}
					}
					else if (!ENTITY::IS_ENTITY_DEAD(uLocal_1389[0]))
					{
						PED::SET_PED_RESET_FLAG(uLocal_1389[0], 29, true);
					}
				}
				Jump @1054; //curOff = 918
				if (iLocal_228 == 2)
				{
					return;
				}
				if (__LIB_0__::func_163(uLocal_1389[0], 518218985) && (func_455() || __LIB_0__::func_71(uLocal_1389[0])))
				{
					if ((!bLocal_1061 && __LIB_2__::func_227(0, 1, uLocal_1389[0], 1)) && !func_154(&uLocal_1389, 2))
					{
						__LIB_2__::func_122(uLocal_1389[0], "PANIC_COMMUNICATE", -500314840, 0, 1, 0, 0, 1);
						__LIB_0__::func_325(&(uLocal_1396[0]));
						bLocal_1061 = true;
					}
				}
			}
			default:
				break;
	}
}

void func_222()
{
	if (bLocal_1058)
	{
		return;
	}
	if (__LIB_2__::func_227(0, 1, uLocal_1389[0], 1) && __LIB_1__::func_313(&uLocal_1300, fLocal_1050))
	{
		__LIB_2__::func_478(uLocal_1389[0], Global_35, sLocal_1130, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		bLocal_1079 = true;
		if (MISC::ARE_STRINGS_EQUAL(sLocal_1130, sLocal_447))
		{
			bLocal_1070 = true;
		}
	}
}

void func_223()
{
	if (iLocal_228 == 2)
	{
		if (__LIB_2__::func_227(0, 1, uLocal_1389[0], 1) && __LIB_1__::func_313(&uLocal_1309, 5f))
		{
			__LIB_2__::func_478(uLocal_1389[0], 0, sLocal_449[12], 0, 200f, 1, 0, 1, 1, 1, 1, 1744022339, 1, 0, 0);
			__LIB_2__::func_315(1515458263, uLocal_1389[0], 1);
		}
	}
}

void func_225()
{
	iLocal_1407 = __LIB_2__::func_944(joaat("PROP_HITCHINGTREE"), vLocal_544, 0, 0, 0, 0);
	PHYSICS::_0x06AADE17334F7A40(uLocal_1389[1], vLocal_541);
}

void func_226()
{
	int iVar0;
	switch (iLocal_228)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 < 6)
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_220, sLocal_516[iVar0]);
				iVar0++;
			}
			break;
		case 1:
			iVar0 = 0;
			while (iVar0 < 8)
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_220, sLocal_516[iVar0]);
				iVar0++;
			}
			break;
		case 2:
			iVar0 = 0;
			while (iVar0 < 9)
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_220, sLocal_516[iVar0]);
				iVar0++;
			}
			break;
	}
}

bool func_227()
{
	int iVar0;
	int iVar1;
	switch (iLocal_228)
	{
		case 0:
			iVar1 = 6;
			break;
		case 1:
			iVar1 = 8;
			break;
		case 2:
			iVar1 = 9;
			break;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_220, sLocal_516[iVar0]))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_229()
{
	if (!bLocal_1071 && __LIB_2__::func_1(uLocal_1389[0], 0, 1))
	{
		__LIB_2__::func_73(uLocal_1389[0], &(uLocal_1396[0]), -89429847, 580546400, 0, "RE_INTER_STRANGER");
		__LIB_2__::func_478(uLocal_1389[0], Global_35, sLocal_443, 0, 200f, 1, 0, 1, 2, 0, 0, -500314840, 1, 0, 0);
		__LIB_2__::func_315(1515458263, uLocal_1389[0], 1);
		bLocal_1071 = true;
		if (iLocal_228 == 2)
		{
			__LIB_1__::func_148(&uLocal_1309);
		}
		else
		{
			__LIB_1__::func_148(&uLocal_1318);
			if (iLocal_228 == 0)
			{
				func_48(uLocal_1389[0], 0, 1);
			}
		}
		__LIB_3__::func_426(&Local_26, &(Local_26.f_48), Local_26.f_3, &(Local_26.f_51.f_6));
		__LIB_1__::func_148(&uLocal_1315);
	}
}

bool func_231()
{
	if (!__LIB_2__::func_1(uLocal_1389[0], 0, 0))
	{
		return true;
	}
	return false;
}

void func_232()
{
	int iVar0;
	int iVar1;
	iVar0 = 2;
	while (iVar0 <= 5)
	{
		if (__LIB_2__::func_1(uLocal_1389[iVar0], 0, 1))
		{
			if (!bLocal_1088)
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar1);
				TASK::TASK_GRAPPLE(0, uLocal_1389[0], joaat("AR_WOLF_EXECUTION_ENTER_FROM_BACK"), 1, 2f, 1, 0);
				TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar1);
				TASK::TASK_PERFORM_SEQUENCE(uLocal_1389[iVar0], iVar1);
				TASK::CLEAR_SEQUENCE_TASK(&iVar1);
				PED::_0xB8DE69D9473B7593(uLocal_1389[iVar0], 26);
				PED::_0xB8DE69D9473B7593(uLocal_1389[iVar0], 27);
				PED::_0xB8DE69D9473B7593(uLocal_1389[iVar0], 0);
				PED::_0x789DABD18E9024DB(uLocal_1389[iVar0], 1, 1);
				PED::_0x789DABD18E9024DB(uLocal_1389[iVar0], 4096, 0);
				FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(uLocal_1389[iVar0], 21, true);
				iLocal_1404 = uLocal_1389[iVar0];
				bLocal_1088 = true;
			}
			else
			{
				PED::SET_PED_CONFIG_FLAG(uLocal_1389[iVar0], 215, true);
				FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(uLocal_1389[iVar0], 21, true);
			}
		}
		iVar0++;
	}
}

int func_234(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_458(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!__LIB_0__::func_27(iVar0, 134217728))
	{
		__LIB_3__::func_156(iParam1, uParam3, uParam0);
	}
	if (!*uParam4)
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

void func_235()
{
	if (iLocal_228 != 2 && !bLocal_1069)
	{
		WEAPON::SET_CURRENT_PED_WEAPON(uLocal_1389[0], joaat("WEAPON_UNARMED"), true, 0, false, false);
		bLocal_1069 = true;
	}
}

bool func_236(int iParam0, int* iParam1, int iParam2, int iParam3, var uParam4, var uParam5)
{
	if (func_462(iParam0, iParam1, iParam2, iParam3, uParam4))
	{
		return true;
	}
	else if (*iParam3 > 2 && uParam5->f_44 == 0)
	{
		uParam5->f_44 = 1;
	}
	return false;
}

void func_237()
{
	__LIB_3__::func_157(&(Local_987[0 /*17*/]), "RE_INTER_POS", sLocal_449[49], joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_3__::func_157(&(Local_987[1 /*17*/]), "RE_INTER_ANTAGONIZE", sLocal_449[50], joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	__LIB_3__::func_157(&(Local_987[2 /*17*/]), __LIB_2__::func_460(12), sLocal_449[51], joaat("INPUT_INTERACT_LOCKON_ROB"), 0, 0, 0, 1, 0);
	__LIB_3__::func_462(&Local_987, 0);
	__LIB_2__::func_411(&(Local_987[2 /*17*/]), 0, 0);
	__LIB_3__::func_158(&(Local_987[2 /*17*/]), 1);
	__LIB_1__::func_471(&(Local_987[0 /*17*/]), 8);
	__LIB_1__::func_471(&(Local_987[1 /*17*/]), 8);
}

void func_238()
{
	__LIB_2__::func_451(&(Local_860[0 /*21*/]), 0);
	__LIB_3__::func_157(&(Local_987[0 /*17*/]), "BEAT_GRT_POS", sLocal_449[21], joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_3__::func_157(&(Local_987[1 /*17*/]), "BEAT_GRT_NEG", sLocal_449[22], joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	__LIB_3__::func_157(&(Local_987[2 /*17*/]), "RE_INTER_ANTAGONIZE", 0, joaat("INPUT_INTERACT_LOCKON_ROB"), 0, 0, 0, 1, 0);
	__LIB_3__::func_462(&Local_987, 0);
	__LIB_2__::func_411(&(Local_987[2 /*17*/]), 0, 0);
	__LIB_3__::func_158(&(Local_987[2 /*17*/]), 1);
	__LIB_1__::func_471(&(Local_987[0 /*17*/]), 8);
	__LIB_1__::func_471(&(Local_987[1 /*17*/]), 8);
}

void func_242()
{
	bLocal_1066 = false;
	iLocal_1411 = 11;
}

void func_251()
{
	iLocal_1403 = MAP::_BLIP_ADD_FOR_COORD(408396114, vLocal_550);
	MAP::_BLIP_SET_MODIFIER(iLocal_1403, -1878373110);
}

void func_252()
{
	__LIB_3__::func_157(&(Local_987[1 /*17*/]), __LIB_2__::func_460(30), sLocal_449[54], joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	__LIB_3__::func_462(&Local_987, 0);
	__LIB_2__::func_411(&(Local_987[2 /*17*/]), 0, 0);
	__LIB_2__::func_411(&(Local_987[0 /*17*/]), 0, 0);
	__LIB_3__::func_158(&(Local_987[2 /*17*/]), 1);
}

void func_253()
{
	if (__LIB_1__::func_313(&uLocal_1109, 0.65f))
	{
		func_472(sLocal_449[60]);
	}
	if (__LIB_1__::func_285(&uLocal_1330, 15f))
	{
		if ((__LIB_0__::func_396(Global_35) && PED::IS_PED_STOPPED(PED::_GET_LAST_MOUNT(Global_35))) || PED::IS_PED_STOPPED(Global_35))
		{
			if (!__LIB_0__::func_75(&uLocal_1106))
			{
				__LIB_1__::func_148(&uLocal_1106);
			}
			else if (iLocal_1102 < 3)
			{
				if (__LIB_2__::func_227(0, 1, iLocal_1405, 1) && __LIB_1__::func_313(&uLocal_1106, 4f))
				{
					func_472(sLocal_449[59]);
					__LIB_1__::func_148(&uLocal_1330);
					iLocal_1102++;
				}
			}
			else
			{
				func_473();
			}
		}
		else if (__LIB_0__::func_75(&uLocal_1106))
		{
			__LIB_0__::func_37(&uLocal_1106);
		}
	}
	if (__LIB_2__::func_227(0, 1, uLocal_1389[0], 1) && __LIB_1__::func_313(&uLocal_1115, 25f))
	{
		if (iLocal_1104 < 2)
		{
			func_472(sLocal_449[62]);
			iLocal_1104++;
		}
		else
		{
			func_473();
		}
	}
	if (!__LIB_0__::func_75(&uLocal_1121) || __LIB_1__::func_285(&uLocal_1121, 3f))
	{
		if (!__LIB_0__::func_75(&uLocal_1118))
		{
			if (PED::IS_PED_SHOOTING(Global_35))
			{
				__LIB_1__::func_148(&uLocal_1118);
			}
		}
		else if (__LIB_1__::func_313(&uLocal_1118, 0.5f))
		{
			if (iLocal_1105 < 3)
			{
				func_472(sLocal_449[64]);
				iLocal_1105++;
				__LIB_1__::func_148(&uLocal_1121);
			}
			else
			{
				func_473();
				bLocal_1096 = true;
			}
		}
	}
	func_474();
}

void func_255()
{
	func_475();
	bLocal_1095 = true;
	iLocal_1411 = 15;
}

void func_256()
{
	if (iLocal_1042 > 43)
	{
		return;
	}
	if (__LIB_2__::func_1(uLocal_1389[0], 0, 1))
	{
		if ((__LIB_1__::func_285(&uLocal_1124, 5f) || !__LIB_0__::func_75(&uLocal_1124)) && __LIB_2__::func_227(0, 1, iLocal_1405, 1))
		{
			if (__LIB_1__::func_992(uLocal_1389[0], vLocal_550, 0) < 14000f)
			{
				__LIB_2__::func_478(uLocal_1389[0], Global_35, sLocal_449[43], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_1405 = uLocal_1389[0];
				iLocal_1042 = 44;
			}
			else if (iLocal_1042 != 43)
			{
				if ((iLocal_1042 == 29 || iLocal_1042 == 34) || iLocal_1042 == 38)
				{
					__LIB_2__::func_478(Global_35, uLocal_1389[0], sLocal_449[iLocal_1042], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_1405 = Global_35;
					bLocal_1100 = false;
				}
				else
				{
					if (bLocal_1100)
					{
						__LIB_2__::func_478(uLocal_1389[0], Global_35, sLocal_449[58], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						bLocal_1100 = false;
						iLocal_1405 = uLocal_1389[0];
						return;
					}
					__LIB_2__::func_478(uLocal_1389[0], Global_35, sLocal_449[iLocal_1042], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_1405 = uLocal_1389[0];
				}
				iLocal_1042++;
			}
			else if (!__LIB_0__::func_75(&uLocal_1115))
			{
				__LIB_1__::func_148(&uLocal_1115);
			}
		}
	}
}

void func_257()
{
	if (!bLocal_1093 && __LIB_2__::func_227(0, 1, uLocal_1389[0], 1))
	{
		__LIB_2__::func_478(Global_35, uLocal_1389[0], sLocal_449[55], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		bLocal_1093 = true;
		__LIB_1__::func_148(&uLocal_1324);
	}
	if (__LIB_2__::func_227(0, 1, Global_35, 1) && __LIB_1__::func_313(&uLocal_1324, 4f))
	{
		if (__LIB_0__::func_871())
		{
			__LIB_2__::func_478(Global_35, 0, sLocal_449[56], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		else
		{
			__LIB_2__::func_478(Global_35, 0, sLocal_449[57], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
}

bool func_262(var uParam0, int iParam1)
{
	struct<2> Var0;
	Var0.f_1 = uParam0;
	return __LIB_0__::func_269(UIFEED::_0x0FD07141AD048AAE(&Var0, iParam1));
}

void func_263()
{
	struct<7> Var0;
	if (!__LIB_2__::func_1(uLocal_1389[0], 0, 1))
	{
		return;
	}
	if (__LIB_2__::func_227(0, 1, Global_35, 1) && __LIB_1__::func_313(&uLocal_1306, 3f))
	{
		if (bLocal_1082 && !bLocal_1085)
		{
			bLocal_1085 = true;
			TASK::TASK_LOOK_AT_ENTITY(uLocal_1389[0], Global_35, 1000, 0, 51, 0);
			if (__LIB_3__::func_283() == 0)
			{
				__LIB_2__::func_478(uLocal_1389[0], Global_35, sLocal_449[53], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			else
			{
				__LIB_2__::func_478(uLocal_1389[0], Global_35, sLocal_449[53], 0, -1082130432 /* Float: -1f */, 2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			if (!bLocal_1083)
			{
				__LIB_2__::func_411(&(Local_987[0 /*17*/]), 1, 0);
			}
		}
		if (bLocal_1083 && !bLocal_1086)
		{
			bLocal_1086 = true;
			TASK::TASK_LOOK_AT_ENTITY(uLocal_1389[0], Global_35, 1000, 0, 51, 0);
			if (__LIB_3__::func_283() == 0)
			{
				__LIB_2__::func_478(uLocal_1389[0], Global_35, sLocal_449[52], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			else
			{
				__LIB_2__::func_478(uLocal_1389[0], Global_35, sLocal_449[52], 0, -1082130432 /* Float: -1f */, 2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			if (!bLocal_1082)
			{
				__LIB_2__::func_411(&(Local_987[1 /*17*/]), 1, 0);
			}
		}
		if (bLocal_1084 && !bLocal_1087)
		{
			bLocal_1087 = true;
			Var0.f_1 = 2;
			Var0.f_2 = joaat("NONE");
			Var0.f_5 = 1;
			Var0.f_6 = 1;
			Var0 = 41;
			Var0.f_2 = joaat("AVOID");
			Var0.f_3 = 3;
			Var0.f_4 = 1;
			__LIB_17__::func_856(&(uLocal_1389[0]), &Var0, &(Local_860[0 /*21*/]), &Local_987, uLocal_1389[1]);
			__LIB_1__::func_715(4, joaat("HONOR_EVENT_SCARE"), 0, 0, uLocal_1389[0], 0, 1065353216 /* Float: 1f */, 0);
			Local_26.f_46 = 1;
		}
	}
}

Vector3 func_310(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2129.134f, 1730.148f, 134.9421f;
				case 1:
					return 2128.404f, 1729.946f, 135.2397f;
				case 2:
					return 2142.427f, 1729.198f, 128.887f;
				case 3:
					return 2142.402f, 1724.465f, 129.2984f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_311(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 205.2f;
				case 1:
					return -75.6f;
				case 2:
					return 252.72f;
				case 3:
					return 290.16f;
			}
			break;
	}
	return 0f;
}

Vector3 func_312(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2128.429f, 1729.187f, 135.2999f;
				case 1:
					return 2127.592f, 1728.32f, 135.711f;
				case 2:
					return 2137.481f, 1727.916f, 131.4501f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_313(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 190.08f;
				case 1:
					return -35.28f;
				case 2:
					return 271.44f;
			}
			break;
	}
	return 0f;
}

Vector3 func_314(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2138.869f, 1723.668f, 131.0644f;
				case 1:
					return 2141.349f, 1729.143f, 129.4466f;
				case 2:
					return 2142.01f, 1725.302f, 129.4338f;
				case 3:
					return 2142.548f, 1727.151f, 126.2764f;
				case 4:
					return 2139.967f, 1724.03f, 132.1928f;
				case 5:
					return 2139.22f, 1723.784f, 130.8906f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_315(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 186.48f;
				case 1:
					return 256.32f;
				case 2:
					return 297.36f;
				case 3:
					return 271.44f;
				case 4:
					return 86.5576f;
				case 5:
					return 196.56f;
			}
			break;
	}
	return 0f;
}

Vector3 func_316(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2138.869f, 1723.668f, 131.0644f;
				case 1:
					return 2141.349f, 1729.143f, 129.4466f;
				case 2:
					return 2142.01f, 1725.302f, 129.4338f;
				case 3:
					return 2139.967f, 1724.03f, 132.1928f;
				case 4:
					return 2139.22f, 1723.784f, 130.8906f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_317(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 186.48f;
				case 1:
					return 256.32f;
				case 2:
					return 297.36f;
				case 3:
					return 86.5576f;
				case 4:
					return 196.56f;
			}
			break;
	}
	return 0f;
}

void func_325()
{
	switch (iLocal_228)
	{
		case 0:
			Local_604[2 /*32*/].f_1 = joaat("A_C_COUGAR_01");
			break;
		case 1:
			Local_604[2 /*32*/].f_1 = joaat("A_C_WOLF_MEDIUM");
			Local_604[3 /*32*/].f_1 = joaat("A_C_WOLF_MEDIUM");
			break;
		case 2:
			Local_604[2 /*32*/].f_1 = joaat("A_C_WOLF_MEDIUM");
			Local_604[3 /*32*/].f_1 = joaat("A_C_WOLF_MEDIUM");
			Local_604[4 /*32*/].f_1 = joaat("A_C_WOLF_MEDIUM");
			break;
	}
}

Vector3 func_346(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 67.1f;
				case 1:
					return 0f, 0f, 57.819f;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 149.647f;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 170.64f;
				default:
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 184.32f;
				case 1:
					return 0f, 0f, -179.28f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_446()
{
	bool bVar0;
	__LIB_1__::func_148(&uLocal_1282);
	func_53();
	__LIB_1__::func_975(&uLocal_1333, 3f);
	__LIB_1__::func_991(uLocal_1389[0], joaat("HONOR_EVENT_AMBIENT_KILL"));
	AUDIO::_0x05D6195FB4D428F4(2147454193);
	bLocal_1091 = true;
	if (iLocal_228 == 1)
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_220, "BOOL_STRUGGLE", false, false);
	}
	else if (iLocal_228 == 0)
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_220, "BOOL_SHOOT", false, false);
	}
	if (bLocal_1061)
	{
		return;
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_220, false))
	{
		if (iLocal_228 == 1)
		{
			if (ANIMSCENE::_0x8D81E7824B7753F7(Local_220, "STRUGGLE_LOOP", 1) || ANIMSCENE::_0x8D81E7824B7753F7(Local_220, "Shoot", 1))
			{
				bVar0 = true;
			}
		}
		else if (iLocal_228 == 0)
		{
			if (ANIMSCENE::_0x8D81E7824B7753F7(Local_220, "SHOOT_LOOP", 1))
			{
				bVar0 = true;
			}
		}
		if (bVar0)
		{
			func_453();
		}
		else
		{
			__LIB_1__::func_148(&uLocal_1297);
		}
		iLocal_1411 = 7;
	}
	else
	{
		if (!PED::IS_PED_RAGDOLL(uLocal_1389[0]))
		{
			TASK::CLEAR_PED_TASKS(uLocal_1389[0], true, false);
		}
		__LIB_2__::func_45(uLocal_1389[0], Global_35, -1);
		iLocal_1411 = 8;
	}
	func_475();
	PED::SET_PED_CONFIG_FLAG(uLocal_1389[0], 336, false);
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		Local_229.f_184 = 2f;
		Local_229.f_185 = 2f;
	}
}

bool func_447(int iParam0, var uParam1, var uParam2, float fParam3, int iParam4)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if ((!ENTITY::IS_ENTITY_DEAD((*uParam1)[iVar0]) && iParam0 != (*uParam1)[iVar0]) && iVar0 >= iParam4)
		{
			if (__LIB_0__::func_665(iParam0, (*uParam1)[iVar0], 1, 1) < fParam3)
			{
				*uParam2 = iVar0;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_448()
{
	int iVar0;
	iVar0 = 2;
	while (iVar0 <= 5)
	{
		if (__LIB_2__::func_1(uLocal_1389[iVar0], 0, 1))
		{
			TASK::TASK_SMART_FLEE_PED(uLocal_1389[iVar0], Global_35, 1000f, -1, 4096, 3f, 0);
		}
		iVar0++;
	}
	iLocal_1051 = 1;
}

void func_449()
{
	int iVar0;
	iVar0 = 2;
	while (iVar0 <= 5)
	{
		__LIB_0__::func_325(&(uLocal_1396[iVar0]));
		iVar0++;
	}
}

bool func_450()
{
	if (iLocal_228 == 0)
	{
		if (ANIMSCENE::_0x8D81E7824B7753F7(Local_220, "SHOOT_LOOP", 1))
		{
			return true;
		}
	}
	else if (iLocal_228 == 1)
	{
		if (ANIMSCENE::_0x8D81E7824B7753F7(Local_220, "STRUGGLE_LOOP", 1) || ANIMSCENE::_0x8D81E7824B7753F7(Local_220, "Shoot", 1))
		{
			return true;
		}
	}
	return false;
}

bool func_453()
{
	if (iLocal_228 == 0)
	{
		if (!ANIMSCENE::_0x1F0E401031E20146(Local_220, sLocal_516[1]))
		{
			if (ANIMSCENE::_0x1F0E401031E20146(Local_220, sLocal_516[3]))
			{
				if (!bLocal_1072)
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_220, sLocal_516[5], true);
					sLocal_1131 = "SIT_JUMP_B_MALE";
				}
				else if (ANIMSCENE::_0x8D81E7824B7753F7(Local_220, "HANG_LOOP", 1))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_220, sLocal_516[4], true);
					sLocal_1131 = "THANKS_B_MALE";
				}
				else
				{
					return false;
				}
			}
		}
	}
	else if (iLocal_228 == 1)
	{
		if (!ANIMSCENE::_0x1F0E401031E20146(Local_220, sLocal_516[2]))
		{
			if (WEAPON::HAS_PED_GOT_WEAPON(uLocal_1389[0], joaat("WEAPON_REPEATER_CARBINE"), 0, false))
			{
				WEAPON::_HIDE_PED_WEAPONS(uLocal_1389[0], 2, true);
			}
			sLocal_1131 = "COWER_TO_THANKS_B_MALE";
			ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_220, sLocal_516[7], true);
		}
	}
	else if (!ANIMSCENE::_0x1F0E401031E20146(Local_220, sLocal_516[4]))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_220, sLocal_516[8], true);
	}
	return true;
}

void func_454()
{
	__LIB_2__::func_73(uLocal_1389[0], &(uLocal_1396[0]), -89429847, 580546400, 0, "RE_INTER_STRANGER");
	MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_1396[0], "RE_INTER_STRANGER");
}

bool func_455()
{
	if (__LIB_0__::func_232(Global_35, uLocal_1389[0], 0) > 3600f)
	{
		return true;
	}
	return false;
}

int func_458(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
		fVar8 = __LIB_0__::func_514(fParam12 >= 0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
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
		if (__LIB_2__::func_525(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (__LIB_3__::func_269(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_458(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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
					__LIB_3__::func_270(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
					if (__LIB_3__::func_271(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
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
					if (__LIB_2__::func_589(*uParam0, iParam1, uParam3))
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
				if (__LIB_2__::func_473(uParam0, iParam1, fParam4, bVar6))
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
					__LIB_3__::func_272(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					__LIB_3__::func_271(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					__LIB_3__::func_270(uParam0, __LIB_2__::func_402(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
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
				if (__LIB_2__::func_473(uParam0, iParam1, fParam4, bVar6))
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

bool func_462(int iParam0, int* iParam1, int iParam2, int iParam3, var uParam4)
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
				TASK::TASK_SMART_FLEE_PED(iParam0, iParam2, 1000f, -1, 0, 3f, 0);
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
					__LIB_3__::func_265(uParam4->f_179, &(uParam4->f_81), iParam0, iParam2, &(uParam4->f_34), 0, 1116471296 /* Float: 70f */, 0, 0, 0, 1);
					func_643(uParam4);
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
				__LIB_3__::func_265(uParam4->f_179, &(uParam4->f_81), iParam0, iParam2, &(uParam4->f_42), 0, 1116471296 /* Float: 70f */, 0, 0, 0, 1);
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
					__LIB_3__::func_265(uParam4->f_179, &(uParam4->f_81), iParam2, iParam0, &(uParam4->f_54), 0, 1116471296 /* Float: 70f */, 0, 0, 0, 1);
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
		TASK::TASK_SMART_FLEE_PED(iParam0, Global_35, 1000f, -1, 0, 3f, 0);
		return true;
	}
	return false;
}

void func_472(char* sParam0)
{
	__LIB_2__::func_478(uLocal_1389[0], Global_35, sParam0, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	iLocal_1405 = uLocal_1389[0];
	__LIB_1__::func_148(&uLocal_1124);
	bLocal_1100 = true;
}

void func_473()
{
	func_475();
	bLocal_1095 = true;
	iLocal_1411 = 15;
}

void func_474()
{
	if (!MAP::DOES_BLIP_EXIST(iLocal_1403) || !PED::IS_PED_ON_MOUNT(Global_35))
	{
		return;
	}
	if (iLocal_1049 <= 0)
	{
		if (PATHFIND::GET_GPS_BLIP_ROUTE_LENGTH() > 0)
		{
			iLocal_1049 = PATHFIND::GET_GPS_BLIP_ROUTE_LENGTH();
		}
		fLocal_1134 = __LIB_3__::func_332(vLocal_550, 1);
		return;
	}
	if (__LIB_1__::func_285(&uLocal_1127, 3f) || !__LIB_0__::func_75(&uLocal_1127))
	{
		if (PATHFIND::GET_GPS_BLIP_ROUTE_LENGTH() < iLocal_1049)
		{
			bLocal_1101 = false;
			iLocal_1049 = PATHFIND::GET_GPS_BLIP_ROUTE_LENGTH();
			__LIB_0__::func_37(&uLocal_1112);
			__LIB_1__::func_148(&uLocal_1127);
		}
		else if (__LIB_3__::func_332(vLocal_550, 1) < (fLocal_1134 - 10f))
		{
			bLocal_1101 = false;
			fLocal_1134 = __LIB_3__::func_332(vLocal_550, 1);
			__LIB_0__::func_37(&uLocal_1112);
			__LIB_1__::func_148(&uLocal_1127);
		}
	}
	if (!__LIB_0__::func_75(&uLocal_1112))
	{
		if (__LIB_2__::func_227(0, 1, uLocal_1389[0], 1) && __LIB_2__::func_227(0, 1, Global_35, 1))
		{
			if (PATHFIND::GET_GPS_BLIP_ROUTE_LENGTH() > (iLocal_1049 + __LIB_0__::func_55(bLocal_1101, 3, 20)) && __LIB_3__::func_332(vLocal_550, 1) > (fLocal_1134 + __LIB_0__::func_514(bLocal_1101, 3f, 20f)))
			{
				bLocal_1101 = true;
				if (iLocal_1103 < 2)
				{
					func_472(sLocal_449[61]);
					iLocal_1049 = PATHFIND::GET_GPS_BLIP_ROUTE_LENGTH();
					fLocal_1134 = __LIB_3__::func_332(vLocal_550, 1);
					iLocal_1103++;
				}
				else
				{
					func_473();
				}
				__LIB_1__::func_148(&uLocal_1112);
			}
		}
	}
	else if (__LIB_1__::func_285(&uLocal_1112, 8f))
	{
		iLocal_1049 = PATHFIND::GET_GPS_BLIP_ROUTE_LENGTH();
		fLocal_1134 = __LIB_3__::func_332(vLocal_550, 1);
		__LIB_0__::func_37(&uLocal_1112);
	}
}

void func_475()
{
	__LIB_3__::func_157(&(Local_987[0 /*17*/]), "RE_INTER_POS", sLocal_449[47], joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_3__::func_157(&(Local_987[1 /*17*/]), "RE_INTER_ANTAGONIZE", sLocal_449[48], joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	__LIB_3__::func_157(&(Local_987[2 /*17*/]), "RE_INTER_ANTAGONIZE", 0, joaat("INPUT_INTERACT_LOCKON_ROB"), 0, 0, 0, 1, 0);
	__LIB_3__::func_462(&Local_987, 0);
	__LIB_2__::func_526(&Local_987, 0, 0);
	__LIB_3__::func_158(&(Local_987[2 /*17*/]), 1);
	__LIB_1__::func_471(&(Local_987[0 /*17*/]), 8);
	__LIB_1__::func_471(&(Local_987[1 /*17*/]), 8);
}

void func_643(var uParam0)
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
		func_731(uParam0->f_74, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
			__LIB_3__::func_707(uParam0->f_72, 1);
		}
	}
	if (uParam0->f_73 != 9)
	{
		__LIB_1__::func_715(uParam0->f_73, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
	}
}

int func_731(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
	if (!__LIB_3__::func_917(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!__LIB_1__::func_795(iParam0, &iVar0, iParam1))
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
				func_731(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
		__LIB_19__::func_439(28);
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
			if (!__LIB_3__::func_915(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (__LIB_0__::func_356(iParam0) == joaat("AMMO") && __LIB_0__::func_258(iParam0))
		{
			if (!__LIB_3__::func_708(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (__LIB_0__::func_192(iParam0, 866047851))
		{
			__LIB_19__::func_4(iParam0);
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
						func_731(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_731(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_731(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_731(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_731(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_731(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_731(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				__LIB_19__::func_439(24);
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
					func_731(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_731(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
		if (!__LIB_3__::func_427(iVar10, iVar0, iParam5))
		{
			return 0;
		}
		else if (!__LIB_0__::func_708(0))
		{
			return 1;
		}
		if (__LIB_0__::func_356(iParam0) == joaat("CLOTHING"))
		{
			__LIB_19__::func_562(iParam0);
		}
		if (__LIB_0__::func_192(iParam0, -1979000645))
		{
			__LIB_19__::func_639(iParam0);
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
				func_731(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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

