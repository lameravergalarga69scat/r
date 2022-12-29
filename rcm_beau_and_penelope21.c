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
	bool bLocal_18 = false;
	bool bLocal_19 = false;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	vector3 vLocal_23 = { 0f, 0f, 0f };
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	bool bLocal_30 = false;
	bool bLocal_31 = false;
	float fLocal_32 = 0f;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	vector3 vLocal_38 = { 0f, 0f, 0f };
	vector3 vLocal_41 = { 0f, 0f, 0f };
	float fLocal_44 = 0f;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	bool bLocal_54 = false;
	vector3 vLocal_55 = { 0f, 0f, 0f };
	struct<20> Local_58[2];
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	struct<23> Local_104[7];
	int iLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	int iLocal_270 = 0;
	vector3 vLocal_271 = { 0f, 0f, 0f };
	int iLocal_274 = 0;
	int iLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277 = 0;
	int iLocal_278 = 0;
	int iLocal_279 = 0;
	int iLocal_280 = 0;
	int iLocal_281 = 0;
	vector3 vLocal_282 = { 0f, 0f, 0f };
	vector3 vLocal_285 = { 0f, 0f, 0f };
	int iLocal_288 = 0;
	vector3 vLocal_289 = { 0f, 0f, 0f };
	vector3 vLocal_292 = { 0f, 0f, 0f };
	int iLocal_295 = 0;
	var uLocal_296 = -1;
	var uLocal_297 = 0;
	var uLocal_298 = -1;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = -1;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 1073741824;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 1;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 1106247680;
	var uLocal_322 = 1067450368;
	var uLocal_323 = 0;
	var uLocal_324 = 1092616192;
	var uLocal_325 = 1112014848;
	var uLocal_326 = 1106247680;
	var uLocal_327 = 1101529088;
	var uLocal_328 = 1101004800;
	var uLocal_329 = 1084227584;
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
	var uLocal_342 = 0;
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
	struct<17> Local_356[1];
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	bool bLocal_377 = false;
	int iLocal_378 = 0;
	int iLocal_379 = 0;
	int iLocal_380 = 0;
	vector3 vLocal_381 = { 0f, 0f, 0f };
	int iLocal_384 = 0;
	int iLocal_385[3] = { 0, 0, 0 };
	int iLocal_389[2] = { 0, 0 };
	int iLocal_392 = 0;
	int iLocal_393 = 0;
	int iLocal_394 = 0;
	int iLocal_395 = 0;
	int iLocal_396 = 0;
	int iLocal_397 = 0;
	int iLocal_398 = 0;
	int iLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = -1;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 1097859072;
	var uLocal_418 = 1000;
	var uLocal_419 = 1067450368;
	var uLocal_420 = 5000;
	var uLocal_421 = 42;
	var uLocal_422 = 1103626240;
	var uLocal_423 = 1077936128;
	var uLocal_424 = 1106247680;
	var uLocal_425 = 1103101952;
	var uLocal_426 = 1097859072;
	var uLocal_427 = 1103626240;
	int iLocal_428 = 0;
	vector3 vLocal_429 = { 0f, 0f, 0f };
	vector3 vLocal_432 = { 0f, 0f, 0f };
	vector3 vLocal_435 = { 0f, 0f, 0f };
	vector3 vLocal_438 = { 0f, 0f, 0f };
	vector3 vLocal_441 = { 0f, 0f, 0f };
	vector3 vLocal_444 = { 0f, 0f, 0f };
	vector3 vLocal_447 = { 0f, 0f, 0f };
	vector3 vLocal_450 = { 0f, 0f, 0f };
	vector3 vLocal_453 = { 0f, 0f, 0f };
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	int iLocal_460 = 0;
	int iLocal_461 = 0;
	var uLocal_462 = 0;
	int iLocal_463 = 0;
	int iLocal_464 = 0;
	int iLocal_465 = 0;
	int iLocal_466 = 0;
	int iLocal_467 = 0;
	int iLocal_468 = 0;
	int iLocal_469 = 0;
	var uLocal_470 = 0;
	int iLocal_471 = 0;
	var uLocal_472 = 0;
	bool bLocal_473 = false;
	struct<18> Local_474[3];
	int iLocal_529 = 0;
	vector3 vLocal_530 = { 0f, 0f, 0f };
	int iLocal_533 = 0;
	vector3 vLocal_534 = { 0f, 0f, 0f };
	int iLocal_537 = 0;
	bool bLocal_538 = false;
	bool bLocal_539 = false;
	int iLocal_540 = 0;
	int iLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 1;
	var uLocal_547 = 1;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	bool bLocal_571 = false;
	float fLocal_572 = 0f;
	float fLocal_573 = 0f;
	int iLocal_574 = 0;
	int iLocal_575 = 0;
	int iLocal_576 = 0;
	int iLocal_577 = 0;
	int iLocal_578 = 0;
	int iLocal_579 = 0;
	int iLocal_580 = 0;
	struct<2> Local_581[6];
	vector3 vLocal_594[47] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_736[19] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	char* sLocal_794[3] = { NULL, NULL, NULL };
	char* sLocal_798[3] = { NULL, NULL, NULL };
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
	float fLocal_806 = 0f;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	int iLocal_810 = 0;
	struct<5> Local_811[12];
	char* sLocal_872 = NULL;
	char* sLocal_873 = NULL;
	char* sLocal_874 = NULL;
	char* sLocal_875 = NULL;
	char* sLocal_876 = NULL;
	char* sLocal_877 = NULL;
	char* sLocal_878 = NULL;
	char* sLocal_879 = NULL;
	char* sLocal_880 = NULL;
	struct<11> Local_881[5];
	int iLocal_937 = 0;
	float fLocal_938 = 0f;
	float fLocal_939 = 0f;
	float fLocal_940 = 0f;
	float fLocal_941 = 0f;
	int iLocal_942 = 0;
	var uLocal_943 = 0;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	var uLocal_954 = 0;
	var uLocal_955 = 0;
	var uLocal_956 = 0;
	var uLocal_957 = 0;
	var uLocal_958 = 0;
	var uLocal_959 = 0;
	var uLocal_960 = 0;
	vector3 vLocal_961 = { 0f, 0f, 0f };
	float fLocal_964 = 0f;
	vector3 vLocal_965 = { 0f, 0f, 0f };
	float fLocal_968 = 0f;
	vector3 vLocal_969 = { 0f, 0f, 0f };
	float fLocal_972 = 0f;
	vector3 vLocal_973 = { 0f, 0f, 0f };
	float fLocal_976 = 0f;
	vector3 vLocal_977 = { 0f, 0f, 0f };
	float fLocal_980 = 0f;
	vector3 vLocal_981 = { 0f, 0f, 0f };
	float fLocal_984 = 0f;
	var uLocal_985[5] = { 0, 0, 0, 0, 0 };
	int iLocal_991 = 0;
	int iLocal_992 = 0;
	bool bLocal_993 = false;
	var uLocal_994 = 0;
	var uLocal_995[2] = { 0, 0 };
	int iLocal_998[2] = { 0, 0 };
	int iLocal_1001[2] = { 0, 0 };
	vector3 vLocal_1004 = { 0f, 0f, 0f };
	vector3 vLocal_1007 = { 0f, 0f, 0f };
	var uLocal_1010 = 0;
	int iLocal_1011 = 0;
	int iLocal_1012 = 0;
	var uLocal_1013 = -1;
	var uLocal_1014 = 0;
	var uLocal_1015 = -1;
	var uLocal_1016 = 0;
	var uLocal_1017 = 0;
	var uLocal_1018 = -1;
	var uLocal_1019 = 0;
	var uLocal_1020 = 0;
	var uLocal_1021 = 0;
	var uLocal_1022 = 0;
	var uLocal_1023 = 0;
	var uLocal_1024 = 1073741824;
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
	var uLocal_1027 = 0;
	var uLocal_1028 = 1;
	var uLocal_1029 = 0;
	var uLocal_1030 = 0;
	var uLocal_1031 = 0;
	var uLocal_1032 = 0;
	var uLocal_1033 = 0;
	var uLocal_1034 = 0;
	var uLocal_1035 = 0;
	var uLocal_1036 = 0;
	var uLocal_1037 = 0;
	var uLocal_1038 = 1106247680;
	var uLocal_1039 = 1067450368;
	var uLocal_1040 = 0;
	var uLocal_1041 = 1092616192;
	var uLocal_1042 = 1112014848;
	var uLocal_1043 = 1106247680;
	var uLocal_1044 = 1101529088;
	var uLocal_1045 = 1101004800;
	var uLocal_1046 = 1084227584;
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
	struct<17> Local_1073[1];
	bool bLocal_1091 = false;
	struct<2> Local_1092[10];
	bool bLocal_1113 = false;
	int iLocal_1114 = 0;
	var uLocal_1115 = 0;
	var uLocal_1116 = 0;
	int iLocal_1117 = 0;
	bool bLocal_1118 = false;
	bool bLocal_1119 = false;
	int iLocal_1120 = 0;
	var uLocal_1121 = 0;
	int iLocal_1122 = 0;
	var uLocal_1123 = 0;
	var uLocal_1124 = 0;
	var uLocal_1125 = 0;
	var uLocal_1126 = 0;
	var uLocal_1127 = 0;
	var uLocal_1128 = 0;
	var uLocal_1129 = 0;
	var uLocal_1130 = 0;
	var uLocal_1131 = 0;
	int iLocal_1132 = 0;
	bool bLocal_1133 = false;
	bool bLocal_1134 = false;
	bool bLocal_1135 = false;
	int iLocal_1136 = 0;
	int iLocal_1137 = 0;
	int iLocal_1138 = 0;
	int iLocal_1139 = 0;
	bool bLocal_1140 = false;
	bool bLocal_1141 = false;
	bool bLocal_1142 = false;
	int iLocal_1143 = 0;
	vector3 vLocal_1144 = { 0f, 0f, 0f };
	var uLocal_1147 = 0;
	var uLocal_1148 = 0;
	var uLocal_1149 = 0;
	var uLocal_1150 = 0;
	var uLocal_1151 = 0;
	var uLocal_1152 = 0;
	var uLocal_1153 = 0;
	var uLocal_1154 = 0;
	var uLocal_1155 = 0;
	vector3 vLocal_1156 = { 0f, 0f, 0f };
	var uLocal_1159 = 0;
	var uLocal_1160 = 0;
	var uLocal_1161 = 0;
	var uLocal_1162 = 0;
	var uLocal_1163 = 0;
	var uLocal_1164 = 0;
	var uLocal_1165 = 0;
	var uLocal_1166 = 0;
	var uLocal_1167 = 0;
	int iLocal_1168 = 0;
	bool bLocal_1169 = false;
	bool bLocal_1170 = false;
	bool bLocal_1171 = false;
	struct<4> Local_1172[3];
	bool bLocal_1185 = false;
	bool bLocal_1186 = false;
	bool bLocal_1187 = false;
	var uLocal_1188 = 0;
	var uLocal_1189 = 0;
	var uLocal_1190 = 0;
	bool bLocal_1191 = false;
	var uLocal_1192 = 0;
	var uLocal_1193 = 0;
	var uLocal_1194 = 0;
	bool bLocal_1195 = false;
	bool bLocal_1196 = false;
	bool bLocal_1197 = false;
	bool bLocal_1198 = false;
	bool bLocal_1199 = false;
	bool bLocal_1200 = false;
	int iLocal_1201 = 0;
	vector3 vLocal_1202 = { 0f, 0f, 0f };
	int iLocal_1205 = 0;
	bool bLocal_1206 = false;
	var uLocal_1207 = 0;
	var uLocal_1208 = 0;
	var uLocal_1209 = 0;
	bool bLocal_1210 = false;
	bool bLocal_1211 = false;
	struct<9> Local_1212 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1221 = 0;
	var uLocal_1222 = 0;
	var uLocal_1223 = 0;
	var uLocal_1224 = 0;
	var uLocal_1225 = 0;
	var uLocal_1226 = 0;
	var uLocal_1227 = 0;
	bool bLocal_1228 = false;
	bool bLocal_1229 = false;
	int iLocal_1230 = 0;
	bool bLocal_1231 = false;
	int iLocal_1232 = 0;
	int iLocal_1233 = 0;
	bool bLocal_1234 = false;
	int iLocal_1235 = 0;
	var uLocal_1236 = 0;
	var uLocal_1237 = 0;
	var uLocal_1238 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion
void __EntryFunction__()
{
	struct<2606> Var0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_22 = joaat("CS_BEAUGRAY");
	vLocal_38 = { 897.4313f, -1864.844f, 42.6952f };
	vLocal_41 = { 895.2804f, -1866.425f, 42.6792f };
	fLocal_44 = 29.7908f;
	iLocal_99 = joaat("CS_SCOTTGRAY");
	iLocal_274 = 2;
	iLocal_275 = joaat("G_M_M_UNIBRAITHWAITES_01");
	iLocal_277 = joaat("P_CS_SUITCASE05X");
	iLocal_278 = joaat("P_CS_SUITCASE05X_UP");
	iLocal_279 = joaat("P_CS_SUITCASE03X");
	iLocal_281 = joaat("S_PENELOPEPURSE01X");
	vLocal_381 = { 895.8044f, -1869.76f, 42.5918f };
	iLocal_384 = joaat("P_CS_BOOKJANEEYRE01X");
	iLocal_396 = joaat("S_PENELOPEBRACELET01X");
	iLocal_397 = joaat("U_M_O_RIGTRAINSTATIONWORKER_01");
	iLocal_398 = joaat("COACH2");
	iLocal_399 = joaat("W_REVOLVER_DOUBLEACTION01");
	vLocal_453 = { 546.1568f, -521.2923f, 76.0515f };
	vLocal_530 = { 1.53f, 1.65f, 1.55f };
	vLocal_534 = { 0.96f, 1.65f, 1.55f };
	iLocal_540 = joaat("S_M_M_UNITRAINGUARDS_01");
	fLocal_806 = 10000f;
	sLocal_872 = "rbap21_horseChaser0";
	sLocal_873 = "rbap21_horseChaser1";
	sLocal_874 = "rbap21_horseChaser2";
	sLocal_875 = "rbap21_horseChaser3";
	sLocal_876 = "rbap21_horseChaser4";
	sLocal_877 = "rbap21_horseChaser5";
	sLocal_878 = "rbap21_horseChaser6";
	sLocal_879 = "rbap21_TrainWaypointRoute";
	sLocal_880 = "rbap21_PenelopeStation";
	iLocal_937 = 5;
	fLocal_938 = 0.25f;
	fLocal_939 = 0.02f;
	fLocal_940 = 1.501f;
	fLocal_941 = 3f;
	vLocal_961 = { 900.9797f, -1875.871f, 43.0144f };
	fLocal_964 = 295.7519f;
	vLocal_965 = { 1283.382f, -1337.654f, 76.8299f };
	fLocal_968 = 22.8355f;
	vLocal_969 = { 1230.967f, -1304.797f, 75.8829f };
	fLocal_972 = 90f;
	vLocal_973 = { 1230.967f, -1304.797f, 75.8829f };
	fLocal_976 = 90f;
	vLocal_977 = { 611.4519f, -515.6398f, 77.3513f };
	fLocal_980 = 102.3356f;
	vLocal_981 = { -169.2012f, 628.3984f, 114.2934f };
	fLocal_984 = 56.2886f;
	vLocal_1004 = { 693.0549f, -423.6675f, 84.0106f };
	vLocal_1007 = { 580.9266f, -509.8781f, 75.9951f };
	iLocal_1122 = 4;
	iLocal_1143 = -1;
	vLocal_1202 = { 1228.159f, -1304.229f, 75.9055f };
	iLocal_1205 = 50;
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
					if (Var0.f_174 == __LIB_10__::func_698())
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
			__LIB_0__::func_11(uParam0);
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
		__LIB_12__::func_954(uParam0, __LIB_12__::func_645(uParam0));
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
			func_80(&(uParam0->f_2597), 0);
		}
		__LIB_0__::func_11(uParam0);
		if (__LIB_9__::func_401(&(uParam0->f_2597)) >= 2500 || CAM::IS_SCREEN_FADED_OUT())
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
	if (!__LIB_0__::func_899(&(uParam0->f_2585)) || IntToFloat(__LIB_9__::func_401(&(uParam0->f_2585))) > func_88(uParam0))
	{
		func_80(&(uParam0->f_2585), 1);
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
	func_91(uParam0);
	if (func_92(uParam0))
	{
		func_86(uParam0);
		iVar0 = __LIB_9__::func_816(uParam0);
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
		__LIB_1__::func_164(0);
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
			__LIB_6__::func_833();
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
				func_80(&(uParam0->f_2597), 0);
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
			else if (__LIB_9__::func_401(&(uParam0->f_2597)) >= 2500)
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
	else if (!__LIB_0__::func_899(&(uParam0->f_2585)) || IntToFloat(__LIB_9__::func_401(&(uParam0->f_2585))) > __LIB_10__::func_381(uParam0))
	{
		func_80(&(uParam0->f_2585), 1);
		if (func_150(uParam0))
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
	__LIB_13__::func_284(uParam0);
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
		func_168(iVar1, 1, -1082130432 /* Float: -1f */, 1, 1, bVar2, 0);
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
	int iVar0;
	__LIB_12__::func_658(uParam0, 4);
	__LIB_12__::func_659(uParam0, 40);
	func_187();
	func_188();
	func_189();
	func_190();
	func_191();
	func_192();
	func_193();
	func_194();
	sLocal_794[0] = "BNP21_G1T1";
	sLocal_794[1] = "BNP21_G1T2";
	sLocal_794[2] = "BNP21_G1T3";
	sLocal_798[0] = "BNP21_G2T1";
	sLocal_798[1] = "BNP21_G2T2";
	sLocal_798[2] = "BNP21_G2T3";
	vLocal_23 = { 1239.682f, -1292.929f, 75.9673f };
	fLocal_32 = 10.9376f;
	vLocal_429 = { 1239.682f, -1292.929f, 75.9673f };
	vLocal_432 = { 1225.657f, -1309.853f, 75.5822f };
	vLocal_435 = { 1225.503f, -1302.417f, 75.9673f };
	vLocal_438 = { 1231.774f, -1299.886f, 75.9027f };
	vLocal_441 = { Vector(75.4313f, -1281.831f, 1197.16f) + Vector(-0.02f, 0.2f, -0.22f) };
	vLocal_447 = { VEHICLE::_GET_NEAREST_TRAIN_TRACK_POSITION(1125.71f, -1199.78f, 70.67f) };
	vLocal_444 = { 971.011f, -905.796f, 66.8178f };
	vLocal_450 = { VEHICLE::_GET_NEAREST_TRAIN_TRACK_POSITION(-1117.327f, -567.4947f, 81.6161f) };
	__LIB_1__::func_600(0);
	__LIB_4__::func_228(&uLocal_400);
	__LIB_1__::func_402(&uLocal_400, 0);
	__LIB_1__::func_413(&uLocal_400, 0);
	iVar0 = 0;
	while (iVar0 < 47)
	{
		vLocal_594[iVar0 /*3*/].f_1 = 0;
		iVar0++;
	}
}

void func_42(var uParam0)
{
	__LIB_12__::func_908(uParam0, 0);
	__LIB_12__::func_867(uParam0, joaat("CS_PENELOPEBRAITHWAITE"), 7);
	__LIB_12__::func_867(uParam0, iLocal_22, 7);
	__LIB_12__::func_867(uParam0, iLocal_275, 7);
	__LIB_12__::func_867(uParam0, iLocal_99, 7);
	__LIB_12__::func_867(uParam0, joaat("CS_IANGRAY"), 7);
	__LIB_12__::func_867(uParam0, joaat("A_C_HORSE_MORGAN_BAY"), 7);
	__LIB_12__::func_867(uParam0, iLocal_278, 7);
	__LIB_12__::func_867(uParam0, iLocal_277, 7);
	__LIB_12__::func_867(uParam0, iLocal_279, 7);
	__LIB_12__::func_867(uParam0, iLocal_281, 7);
	__LIB_12__::func_867(uParam0, iLocal_540, 7);
	__LIB_12__::func_867(uParam0, joaat("A_M_M_RHDUPPERCLASS_01"), 7);
	__LIB_12__::func_867(uParam0, joaat("A_F_M_RHDUPPERCLASS_01"), 7);
	__LIB_12__::func_867(uParam0, joaat("S_INV_REPEAT_RIFLEAMMO01X"), 7);
	__LIB_12__::func_867(uParam0, iLocal_384, 7);
	func_203(uParam0, 1495948496);
	__LIB_13__::func_15(uParam0, sLocal_872, 2, -1, 7);
	__LIB_13__::func_15(uParam0, sLocal_873, 2, -1, 7);
	__LIB_13__::func_15(uParam0, sLocal_874, 2, -1, 7);
	__LIB_13__::func_15(uParam0, sLocal_875, 2, -1, 7);
	__LIB_13__::func_15(uParam0, sLocal_876, 2, -1, 7);
	__LIB_13__::func_15(uParam0, sLocal_877, 2, -1, 7);
	__LIB_13__::func_15(uParam0, sLocal_878, 2, -1, 7);
	__LIB_13__::func_15(uParam0, sLocal_880, 2, -1, 7);
	__LIB_13__::func_15(uParam0, sLocal_879, 2, -1, 7);
	GRAPHICS::_0x5199405EABFBD7F0("MissionChoice");
	GRAPHICS::_0x5199405EABFBD7F0("PlayerHonorChoiceGood");
	GRAPHICS::_0x5199405EABFBD7F0("PlayerHonorChoiceBad");
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
			Var1 = { vLocal_961 };
			Var1.f_3 = fLocal_964;
			break;
		case 1:
			Var1 = { vLocal_965 };
			Var1.f_3 = fLocal_968;
			break;
		case 2:
			Var1 = { vLocal_969 };
			Var1.f_3 = fLocal_972;
			break;
		case 3:
			Var1 = { vLocal_973 };
			Var1.f_3 = fLocal_976;
			break;
		case 4:
			Var1 = { vLocal_973 };
			Var1.f_3 = fLocal_976;
			break;
		case 5:
			Var1 = { vLocal_977 };
			Var1.f_3 = fLocal_980;
			break;
		case 6:
			Var1 = { vLocal_981 };
			Var1.f_3 = fLocal_984;
			break;
	}
	return Var1;
}

bool func_62(var uParam0)
{
	return func_214(*uParam0, uParam0->f_3);
}

bool func_64(var uParam0)
{
	int iVar0;
	if (func_215(uParam0))
	{
		if (__LIB_0__::func_272(Global_35, 0))
		{
			if ((__LIB_0__::func_272(iLocal_36, 0) && !FIRE::IS_ENTITY_ON_FIRE(iLocal_36)) && iLocal_48 != 20)
			{
				TASK::TASK_SMART_FLEE_PED(iLocal_36, Global_35, 1000f, -1, 0, 1077936128 /* Float: 3f */, 0);
			}
			if ((__LIB_0__::func_272(iLocal_20, 0) && !FIRE::IS_ENTITY_ON_FIRE(iLocal_20)) && iLocal_33 != 8)
			{
				TASK::TASK_SMART_FLEE_PED(iLocal_20, Global_35, 1000f, -1, 0, 1077936128 /* Float: 3f */, 0);
			}
		}
		return true;
	}
	if (!iLocal_15 == 13)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_574))
		{
			if (ENTITY::IS_ENTITY_DEAD(iLocal_574))
			{
				StringCopy(&(uParam0->f_2578), "BNP21_R_TRAIN", 24);
				return true;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_577))
		{
			if (ENTITY::IS_ENTITY_DEAD(iLocal_577))
			{
				StringCopy(&(uParam0->f_2578), "BNP21_R_TRAIN", 24);
				return true;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_575))
		{
			if (ENTITY::IS_ENTITY_DEAD(iLocal_575))
			{
				StringCopy(&(uParam0->f_2578), "BNP21_R_TRAIN", 24);
				return true;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_578))
		{
			if (ENTITY::IS_ENTITY_DEAD(iLocal_578))
			{
				StringCopy(&(uParam0->f_2578), "BNP21_R_TRAIN", 24);
				return true;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_537))
		{
			if (ENTITY::IS_ENTITY_DEAD(iLocal_537) && !func_217(16))
			{
				if (iLocal_15 < 9)
				{
					StringCopy(&(uParam0->f_2578), "BNP21_R_DRIVE", 24);
					return true;
				}
			}
		}
	}
	if ((iLocal_15 != 4 && iLocal_15 != 8) && iLocal_15 != 9)
	{
		if (func_218())
		{
			LAW::_REPORT_CRIME(PLAYER::PLAYER_ID(), joaat("CRIME_ASSAULT"), 0, 0, true);
			__LIB_5__::func_20(0, 0);
			StringCopy(&(uParam0->f_2578), "BNP21_R_CIVIL", 24);
			return true;
		}
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_881[iVar0 /*11*/]))
		{
			if (__LIB_0__::func_255(Local_881[iVar0 /*11*/], 0) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_881[iVar0 /*11*/], Global_35, 0, 0))
			{
				StringCopy(&(uParam0->f_2578), "BNP21_R_CIVIL", 24);
				return true;
			}
		}
		iVar0++;
	}
	if (iLocal_15 != 8 && iLocal_15 != 9)
	{
		if (__LIB_2__::func_173(PLAYER::PLAYER_ID(), 1, 1, 0))
		{
			StringCopy(&(uParam0->f_2578), "BNP21_R_LAW", 24);
			return true;
		}
	}
	LAW::_0x785177E4D57D7389(PLAYER::PLAYER_ID(), joaat("CRIME_TRESPASSING"), 0, 0, -1);
	if (uParam0->f_177 == 7)
	{
		switch (iLocal_15)
		{
			case 0:
				if (func_222(uParam0, 12, iLocal_36, 1120403456 /* Float: 100f */, 1117126656 /* Float: 75f */, 1112014848 /* Float: 50f */))
				{
					StringCopy(&(uParam0->f_2578), "BNP21_R_WPENE", 24);
					return true;
				}
				break;
			case 1:
				if (func_222(uParam0, 12, iLocal_36, 40f, 30f, 20f))
				{
					StringCopy(&(uParam0->f_2578), "BNP21_R_WPENE", 24);
					return true;
				}
				break;
			case 2:
			case 3:
			case 4:
				if (func_222(uParam0, 13, iLocal_36, 150f, 100f, 75f))
				{
					StringCopy(&(uParam0->f_2578), "BNP21_R_WBEAU", 24);
					return true;
				}
				break;
			case 5:
			case 6:
			case 8:
				if (func_222(uParam0, 14, iLocal_574, 200f, 150f, 100f))
				{
					StringCopy(&(uParam0->f_2578), "BNP21_R_WTRAI", 24);
					return true;
				}
				if (iLocal_15 == 8 || (iLocal_15 == 5 && func_217(32768)))
				{
					if ((!PED::IS_PED_IN_ANY_TRAIN(Global_35) && !func_223()) && func_217(32768))
					{
						if (!__LIB_0__::func_899(&uLocal_1236))
						{
							__LIB_5__::func_107(&uLocal_1236);
						}
						if (__LIB_9__::func_178(&uLocal_1236) > 2f)
						{
							StringCopy(&(uParam0->f_2578), "BNP21_R_WTRAI", 24);
							return true;
						}
					}
					else
					{
						__LIB_2__::func_608(&uLocal_1236);
					}
				}
				break;
			case 10:
				if (func_222(uParam0, 15, iLocal_576, 100f, 75f, 50f))
				{
					StringCopy(&(uParam0->f_2578), "BNP21_R_WBEAU", 24);
					return true;
				}
				break;
		}
	}
	return false;
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
	if (func_229(uParam0->f_174))
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
	if (func_238(uParam0) || __LIB_12__::func_663(uParam0->f_174, uParam0->f_743))
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
	func_242();
	func_243(uParam0);
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
	__LIB_13__::func_284(uParam0);
	__LIB_1__::func_564(0);
	__LIB_12__::func_966(uParam0, 0);
	__LIB_12__::func_918(uParam0, 4);
	__LIB_0__::func_8(&(uParam0->f_172), 8);
	__LIB_0__::func_8(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 1024);
	__LIB_0__::func_8(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 64);
	__LIB_0__::func_7(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 4);
	__LIB_2__::func_608(&(uParam0->f_2585));
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
			func_257(uParam0);
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
	bVar0 = func_264(uParam0);
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

void func_80(float fParam0, bool bParam1)
{
	if (bParam1 || !__LIB_0__::func_899(fParam0))
	{
		__LIB_5__::func_107(fParam0);
	}
}

bool func_85(var uParam0)
{
	if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_13, 64))
	{
		return true;
	}
	if (__LIB_12__::func_924(uParam0) && func_281(uParam0))
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
	__LIB_0__::func_11(uParam0);
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
	char[] cVar0[8];
	int iVar1;
	StringCopy(&(uParam0->f_2575), func_300(uParam0), 24);
	__LIB_12__::func_779(uParam0, func_301(uParam0));
	switch (iLocal_17)
	{
		case 0:
			if ((__LIB_4__::func_511() || __LIB_12__::func_936(uParam0)) || bLocal_1141)
			{
				cVar0 = "1-MultiStart_Ending1";
				__LIB_0__::func_88(&(uParam0->f_206), 134217728);
			}
			else
			{
				cVar0 = "2-NormalStart_Ending1";
				__LIB_0__::func_88(&(uParam0->f_206), 134217728);
				__LIB_0__::func_88(&(uParam0->f_206), 33554432);
			}
			__LIB_12__::func_676(&(uParam0->f_206), cVar0);
			__LIB_12__::func_839(&(uParam0->f_206), cVar0);
			__LIB_12__::func_957(uParam0, Global_35, 0, 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_36, "PenelopeBraithwaite", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_280, "s_penelopepurse01x", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_380, "P_CS_BOOKJANEEYRE01X", 0, 0, 0);
			__LIB_13__::func_16(uParam0, 49377);
			__LIB_12__::func_981(uParam0, 49643);
			__LIB_12__::func_982(uParam0, 50930);
			__LIB_14__::func_96(iLocal_461, vLocal_961, fLocal_964);
			__LIB_12__::func_943(&(uParam0->f_206), vLocal_961, fLocal_964, 1);
			break;
		case 1:
			if (__LIB_4__::func_511())
			{
				cVar0 = "MultiStart";
			}
			else
			{
				cVar0 = "NormalStart";
				__LIB_0__::func_88(&(uParam0->f_206), 134217728);
				__LIB_0__::func_88(&(uParam0->f_206), 33554432);
			}
			__LIB_12__::func_676(&(uParam0->f_206), cVar0);
			__LIB_12__::func_839(&(uParam0->f_206), cVar0);
			__LIB_12__::func_957(uParam0, Global_35, 0, 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_36, "PenelopeBraithwaite", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_20, "BeauGray", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_280, "s_penelopepurse01x", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_288, "p_cs_suitcase03x", 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_58[0 /*20*/], "cs_scottgray", 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_58[1 /*20*/], "cs_iangray", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_385[0], "p_cs_admitticket01x", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_385[1], "p_cs_admitTicket01x^1", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_385[2], "p_cs_admitTicket01x^2", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_389[0], "p_cs_note01x", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_389[1], "p_cs_note01x^1", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_392, "p_cs_billsingle01x", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_379, "U_M_M_RHDTRAINSTATIONWORKER_01", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_575, "northpassenger01x", 0, 0, 0);
			__LIB_13__::func_16(uParam0, 49377);
			__LIB_12__::func_981(uParam0, 49643);
			__LIB_12__::func_982(uParam0, 50930);
			break;
		case 2:
			if (!func_217(268435456))
			{
				__LIB_12__::func_676(&(uParam0->f_206), "MultiStart");
				__LIB_13__::func_17(&(uParam0->f_206), "MultiStart", 0);
			}
			else
			{
				__LIB_12__::func_676(&(uParam0->f_206), "MultiStart");
				__LIB_13__::func_17(&(uParam0->f_206), "MultiStart", 0);
			}
			__LIB_12__::func_957(uParam0, Global_35, 0, 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_36, "PenelopeBraithwaite", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_20, "BeauGray", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_575, "northpassenger01x", 0, 0, 0);
			__LIB_13__::func_16(uParam0, 49377);
			__LIB_12__::func_981(uParam0, 49643);
			__LIB_12__::func_982(uParam0, 50930);
			__LIB_0__::func_7(&(uParam0->f_206.f_404), 4096);
			Jump @1211; //curOff = 816
			__LIB_12__::func_676(&(uParam0->f_206), "1-Start");
			__LIB_13__::func_17(&(uParam0->f_206), "1-Start", 0);
			uParam0->f_206.f_338 = 200f;
			uParam0->f_206.f_339 = 300f;
			__LIB_0__::func_7(&(uParam0->f_206.f_404), 4096);
			__LIB_12__::func_957(uParam0, Global_35, 0, 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_36, "PenelopeBraithwaite", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_20, "BeauGray", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_577, "northsteamer01x", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_578, "northcoalcar01x", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_576, "northpassenger01x", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_575, "northpassenger03x", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_579, "northflatcar01x", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_580, "CABOOSE01X", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_280, "s_penelopepurse01x", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_288, "p_cs_suitcase03x", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_394, "COACH2", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_395, "U_M_O_RIGTRAINSTATIONWORKER_01", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_393, "s_penelopebracelet01x", 0, 0, 0);
			WEAPON::_GIVE_WEAPON_TO_PED_2(iLocal_395, joaat("WEAPON_REVOLVER_CATTLEMAN"), 1, true, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
			WEAPON::SET_CURRENT_PED_WEAPON(iLocal_395, joaat("WEAPON_REVOLVER_CATTLEMAN"), true, 0, false, false);
			iVar1 = WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(iLocal_395, 0);
			__LIB_12__::func_957(uParam0, iVar1, "w_revolver_cattleman01", 0, 0, 0);
			__LIB_13__::func_16(uParam0, 49377);
			__LIB_12__::func_981(uParam0, 49643);
			__LIB_12__::func_982(uParam0, 50930);
			__LIB_0__::func_7(&(uParam0->f_172), 16);
		}
float func_88(var uParam0)
{
	return 1000f;
}

void func_91(var uParam0)
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		func_318(Global_35, vLocal_38, &uLocal_565, 30f, 25f, 20f, 15f, 1082130432 /* Float: 4f */, 0, 1, 1, 1, 1);
	}
	else
	{
		func_318(Global_35, vLocal_38, &uLocal_565, 20f, 15f, 10f, 5f, 1082130432 /* Float: 4f */, 0, 1, 1, 1, 1);
	}
	if (!__LIB_0__::func_266(Global_35, vLocal_38, 25f, 1, 1))
	{
		__LIB_2__::func_608(&uLocal_565);
	}
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
		if (uParam0->f_171 != 0 || func_320(uParam0))
		{
			if (__LIB_13__::func_371(uParam0))
			{
				return true;
			}
		}
	}
	return false;
}

int func_96(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = iParam1;
	VEHICLE::_0x4C05B42A8D937796();
	STREAMING::CLEAR_FOCUS();
	switch (iVar0)
	{
		case 0:
			if (__LIB_12__::func_936(uParam0))
			{
				if (!func_323(uParam0))
				{
					return 2;
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_380))
				{
					iLocal_380 = OBJECT::CREATE_OBJECT(iLocal_384, vLocal_381, true, true, false, false, true);
					return 2;
				}
				bLocal_1141 = true;
				iLocal_17 = 0;
				func_87(uParam0);
				if (__LIB_0__::func_730(105))
				{
					__LIB_10__::func_843(105, 0, 350);
				}
				return 5;
			}
			else
			{
				if (__LIB_4__::func_511())
				{
					__LIB_12__::func_997(uParam0, func_61(0), func_61(2), 0, 2, 0);
				}
				if (!func_323(uParam0))
				{
					return 2;
				}
				if (!bLocal_473)
				{
					__LIB_12__::func_994(&uLocal_542, vLocal_961, fLocal_964, 0, 0, 0, 0, 0, 0, 1, 1);
					bLocal_473 = true;
				}
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_36, vLocal_38, fLocal_44, true, false, true);
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_50))
				{
					func_326(uParam0, vLocal_961, fLocal_964, 1);
					return 2;
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_50))
				{
					__LIB_1__::func_571(Global_35, iLocal_50, 0, -1, 1);
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_50, vLocal_961, fLocal_964, true, false, true);
					__LIB_1__::func_571(iLocal_36, iLocal_50, 0, 0, 1);
				}
				func_328(uParam0, 0);
				func_329(4);
				iLocal_17 = 1;
				VEHICLE::_0x4C05B42A8D937796();
				if (!__LIB_10__::func_926(&uLocal_542))
				{
					return 2;
				}
				AUDIO::TRIGGER_MUSIC_EVENT(func_331(0));
				if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
				{
					CAM::DO_SCREEN_FADE_IN(500);
				}
				if (__LIB_0__::func_730(105))
				{
					__LIB_10__::func_843(105, 0, 350);
				}
				bLocal_473 = false;
			}
			return 7;
		case 1:
			if (!bLocal_473)
			{
				__LIB_12__::func_994(&uLocal_542, 1230.967f, -1304.797f, 75.8829f, 90f, 0, 0, 0, 0, 0, 0, 1, 1);
				bLocal_473 = true;
			}
			if (!__LIB_10__::func_926(&uLocal_542))
			{
				return 2;
			}
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 1, false, false);
			if (!func_332())
			{
				return 2;
			}
			VEHICLE::_0x4C05B42A8D937796();
			if (!func_323(uParam0))
			{
				return 2;
			}
			if (!func_333(uParam0))
			{
				return 2;
			}
			if (!func_334(uParam0, 0, 0))
			{
				return 2;
			}
			if (!func_335())
			{
				return 2;
			}
			if (!func_336(uParam0))
			{
				return 2;
			}
			func_337(1);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_574))
			{
				VEHICLE::_0xA72B1BF3857B94D7(iLocal_574, 1);
			}
			else
			{
				return 2;
			}
			ENTITY::SET_ENTITY_COORDS(iLocal_36, vLocal_432, true, false, true, true);
			ENTITY::SET_ENTITY_COORDS(iLocal_20, vLocal_435, true, false, true, true);
			if (!func_338(uParam0))
			{
				return 2;
			}
			if (!func_340(4, 0, func_339(27)))
			{
				return 2;
			}
			func_328(uParam0, 3);
			PED::_0x3A50753042B6891B(Global_35, "s_penelopePurse01x_PH_L_HAND");
			__LIB_2__::func_919(iLocal_288, 1, 1);
			iLocal_17 = 1;
			func_342(uParam0, 1, 1);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_36, 1220.271f, -1304.673f, 75.442f, 231.1643f, true, false, true);
			AUDIO::TRIGGER_MUSIC_EVENT(func_331(1));
			VEHICLE::SET_TRAIN_SPEED(iLocal_574, 0f);
			func_328(uParam0, 4);
			func_87(uParam0);
			bLocal_473 = false;
			if (__LIB_4__::func_511())
			{
				__LIB_12__::func_997(uParam0, func_61(1), func_61(2), 1, 2, 0);
			}
			return 5;
		case 2:
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 1, false, false);
			if (!func_332())
			{
				return 2;
			}
			VEHICLE::_0x4C05B42A8D937796();
			if (!func_323(uParam0))
			{
				return 2;
			}
			if (!Local_811[4 /*5*/].f_4)
			{
				if (!func_333(uParam0))
				{
					return 2;
				}
				ENTITY::SET_ENTITY_COORDS(iLocal_36, vLocal_432, true, false, true, true);
				ENTITY::SET_ENTITY_COORDS(iLocal_20, vLocal_435, true, false, true, true);
			}
			if (!func_334(uParam0, 0, 0))
			{
				return 2;
			}
			if (!func_335())
			{
				return 2;
			}
			if (!func_336(uParam0))
			{
				return 2;
			}
			func_337(1);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_574))
			{
				VEHICLE::_0xA72B1BF3857B94D7(iLocal_574, 1);
			}
			else
			{
				return 2;
			}
			if (!func_338(uParam0))
			{
				return 2;
			}
			if (!func_340(4, 0, func_339(27)))
			{
				return 2;
			}
			if (!bLocal_473)
			{
				__LIB_12__::func_994(&uLocal_542, 1230.967f, -1304.797f, 75.8829f, 90f, 0, 0, 0, 0, 0, 0, 1, 1);
				bLocal_473 = true;
			}
			func_328(uParam0, 3);
			PED::_0x3A50753042B6891B(iLocal_36, "s_penelopePurse01x_PH_L_HAND");
			__LIB_2__::func_919(iLocal_288, 1, 1);
			iLocal_17 = 2;
			if (!Local_811[4 /*5*/].f_4)
			{
				func_342(uParam0, 0, 1);
			}
			if (!__LIB_10__::func_926(&uLocal_542))
			{
				return 2;
			}
			if (!func_343(4, 0, func_339(27)))
			{
				Local_811[4 /*5*/].f_4 = 1;
				return 2;
			}
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_36, 1220.271f, -1304.673f, 75.442f, 231.1643f, true, false, true);
			AUDIO::TRIGGER_MUSIC_EVENT(func_331(1));
			VEHICLE::SET_TRAIN_SPEED(iLocal_574, 0f);
			func_328(uParam0, 4);
			func_87(uParam0);
			bLocal_473 = false;
			bLocal_1133 = true;
			Local_811[11 /*5*/].f_4 = 1;
			Local_811[4 /*5*/].f_4 = 1;
			if (__LIB_4__::func_511())
			{
				__LIB_12__::func_997(uParam0, func_61(2), func_61(3), 2, 3, 0);
			}
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_811[4 /*5*/], "CS_PenelopeBraithwaite", iLocal_36, 0);
			if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
			bLocal_377 = true;
			return 7;
		case 3:
			VEHICLE::_0x4C05B42A8D937796();
			if (!func_323(uParam0))
			{
				return 2;
			}
			if (!func_333(uParam0))
			{
				return 2;
			}
			if (!func_332())
			{
				return 2;
			}
			if (!func_334(uParam0, 1, 0))
			{
				return 2;
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_574))
			{
				VEHICLE::_0xA72B1BF3857B94D7(iLocal_574, 1);
			}
			else
			{
				return 2;
			}
			if (!func_338(uParam0))
			{
				return 2;
			}
			if (!func_335())
			{
				return 2;
			}
			func_337(1);
			VEHICLE::SET_MISSION_TRAIN_COORDS(iLocal_574, vLocal_447);
			if (!bLocal_473)
			{
				__LIB_12__::func_994(&uLocal_542, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_575, 0f, -1.5f, 1.08634f), 90f, 0, 0, 0, 0, 0, 0, 1, 1);
				ENTITY::SET_ENTITY_COORDS(iLocal_20, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_575, vLocal_534), true, false, true, true);
				ENTITY::SET_ENTITY_COORDS(iLocal_36, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_575, vLocal_530), true, false, true, true);
				bLocal_473 = true;
			}
			func_342(uParam0, 0, 0);
			func_344();
			func_345(8);
			func_329(20);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_575, 0f, -2.5f, 1.08634f), 90f, true, false, true);
			func_346();
			if (!__LIB_10__::func_926(&uLocal_542))
			{
				return 2;
			}
			iLocal_17 = 2;
			func_328(uParam0, 6);
			func_347(10f);
			VEHICLE::SET_TRAIN_SPEED(iLocal_574, 10f);
			VEHICLE::_0x4182C037AA1F0091(iLocal_574, 0);
			if (!__LIB_0__::func_899(&uLocal_556))
			{
				__LIB_5__::func_107(&uLocal_556);
			}
			else if (__LIB_9__::func_401(&uLocal_556) > 5000)
			{
				if (!CAM::IS_SCREEN_FADING_IN())
				{
					CAM::DO_SCREEN_FADE_IN(500);
				}
			}
			else
			{
				return 2;
			}
			func_348(13);
			func_349();
			AUDIO::TRIGGER_MUSIC_EVENT(func_331(2));
			if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
			__LIB_2__::func_608(&uLocal_556);
			bLocal_473 = false;
			if (__LIB_4__::func_511())
			{
				__LIB_12__::func_997(uParam0, func_61(3), func_61(4), 3, 4, 0);
			}
			return 7;
		case 4:
			if (__LIB_4__::func_511())
			{
				__LIB_12__::func_997(uParam0, func_61(4), func_61(5), 4, 5, 0);
			}
			VEHICLE::_0x4C05B42A8D937796();
			if (!func_323(uParam0))
			{
				return 2;
			}
			if (!func_333(uParam0))
			{
				return 2;
			}
			if (!func_334(uParam0, 2, 0))
			{
				return 2;
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_574))
			{
				VEHICLE::_0xA72B1BF3857B94D7(iLocal_574, 1);
			}
			else
			{
				return 2;
			}
			if (!func_338(uParam0))
			{
				return 2;
			}
			if (!func_335())
			{
				return 2;
			}
			VEHICLE::SET_MISSION_TRAIN_COORDS(iLocal_574, vLocal_444);
			iLocal_992 = 0;
			if (!bLocal_473)
			{
				__LIB_12__::func_994(&uLocal_542, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_575, -0.75f, -6.1f, 1.05f), 90f, 0, 0, 0, 0, 0, 0, 1, 1);
				bLocal_473 = true;
			}
			if (!__LIB_10__::func_926(&uLocal_542))
			{
				return 2;
			}
			if (!func_350(0, 1, 0))
			{
				return 2;
			}
			else
			{
				func_351(uParam0, 0);
			}
			ENTITY::SET_ENTITY_COORDS(iLocal_20, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_575, 1f, 2.5f, 1.08634f), true, false, true, true);
			ENTITY::SET_ENTITY_COORDS(iLocal_36, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_575, 1f, 2.5f, 1.08634f), true, false, true, true);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_575, -0.75f, -6.1f, 1.05f), (ENTITY::GET_ENTITY_HEADING(iLocal_575) - 180f), true, false, true);
			func_346();
			func_352(1048576);
			iLocal_17 = 3;
			func_328(uParam0, 7);
			func_329(20);
			func_345(8);
			func_337(1);
			func_348(25);
			func_347(10f);
			VEHICLE::SET_TRAIN_SPEED(iLocal_574, 10f);
			VEHICLE::_0x4182C037AA1F0091(iLocal_574, 0);
			AUDIO::TRIGGER_MUSIC_EVENT(func_331(3));
			if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
			func_352(65536);
			__LIB_2__::func_608(&uLocal_556);
			bLocal_473 = false;
			return 7;
		case 5:
			VEHICLE::_0x4C05B42A8D937796();
			if (__LIB_4__::func_511())
			{
				__LIB_12__::func_997(uParam0, func_61(5), func_61(6), 5, 6, 0);
			}
			if (!func_323(uParam0))
			{
				return 2;
			}
			if (!func_333(uParam0))
			{
				return 2;
			}
			if (!func_334(uParam0, 3, 0))
			{
				return 2;
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_574))
			{
				VEHICLE::_0xA72B1BF3857B94D7(iLocal_574, 1);
			}
			else
			{
				return 2;
			}
			if (!func_353())
			{
				return 2;
			}
			if (!func_335())
			{
				return 2;
			}
			func_337(2);
			if (!bLocal_473)
			{
				__LIB_12__::func_994(&uLocal_542, 614.996f, -515.5535f, 76.0513f, 90f, 0, 0, 0, 0, 0, 0, 1, 1);
				bLocal_473 = true;
			}
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, 614.996f, -515.5535f, 76.0513f, 102.3356f, true, false, true);
			func_346();
			if (!__LIB_10__::func_926(&uLocal_542))
			{
				return 2;
			}
			VEHICLE::SET_MISSION_TRAIN_COORDS(iLocal_574, VEHICLE::_GET_NEAREST_TRAIN_TRACK_POSITION(vLocal_453));
			func_329(20);
			func_345(8);
			if (!func_338(uParam0))
			{
				return 2;
			}
			iLocal_17 = 3;
			func_328(uParam0, 10);
			VEHICLE::_0x4182C037AA1F0091(iLocal_574, 0);
			if (!__LIB_0__::func_899(&uLocal_556))
			{
				__LIB_5__::func_107(&uLocal_556);
			}
			else if (__LIB_9__::func_401(&uLocal_556) > 5000)
			{
				if (!CAM::IS_SCREEN_FADING_IN())
				{
					CAM::DO_SCREEN_FADE_IN(500);
				}
			}
			else
			{
				return 2;
			}
			func_349();
			func_348(17);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_537))
			{
				VEHICLE::_0xA72B1BF3857B94D7(iLocal_574, 1);
				VEHICLE::_0xA72B1BF3857B94D7(iLocal_577, 1);
				__LIB_2__::func_426(&iLocal_537);
			}
			if (!MAP::DOES_BLIP_EXIST(iLocal_1235))
			{
				iLocal_1235 = MAP::_BLIP_ADD_FOR_ENTITY(-89429847, iLocal_20);
			}
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, vLocal_977, fLocal_980, true, false, true);
			AUDIO::TRIGGER_MUSIC_EVENT(func_331(2));
			if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
			iLocal_1132 = 17;
			__LIB_2__::func_608(&uLocal_556);
			bLocal_473 = false;
			return 7;
		case 6:
			if (!func_217(536870912))
			{
				func_328(uParam0, 14);
				if (!func_333(uParam0))
				{
					return 2;
				}
				VEHICLE::_0x4C05B42A8D937796();
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, -1097.528f, -578.641f, 81.4137f, 57.4372f, true, false, true);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_36, -1100.155f, -577.5789f, 81.3982f, 255.2134f, true, false, true);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_20, -1099.301f, -576.4773f, 81.4083f, 215.3361f, true, false, true);
				func_354();
				if (!func_217(8))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_574))
					{
						VEHICLE::DELETE_MISSION_TRAIN(&iLocal_574);
					}
					func_352(8);
				}
				if (!bLocal_473)
				{
					__LIB_12__::func_994(&uLocal_542, -1097.528f, -578.641f, 81.4137f, 57.4372f, 0, 0, 0, 0, 0, 0, 1, 1);
					bLocal_473 = true;
				}
				if (!func_334(uParam0, 4, 0))
				{
					return 2;
				}
				if (!func_338(uParam0))
				{
					return 2;
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_574))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_574, vLocal_450, true, false, true, true);
					VEHICLE::SET_TRAIN_SPEED(iLocal_574, 0f);
				}
				if (!func_335())
				{
					return 2;
				}
				if (!__LIB_10__::func_926(&uLocal_542))
				{
					return 2;
				}
				if (!func_353())
				{
					return 2;
				}
				__LIB_2__::func_426(&iLocal_537);
				iLocal_17 = 3;
				func_87(uParam0);
				func_337(3);
				func_328(uParam0, 14);
				func_217(536870912);
				bLocal_473 = true;
				__LIB_12__::func_839(&(uParam0->f_206), "1-Start");
			}
			if (!__LIB_0__::func_1(uParam0->f_172, 1))
			{
				return 2;
			}
			if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
			func_355(8);
			return 5;
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
		if (!func_359(uParam0))
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
		if (!func_362(uParam0))
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
	return func_368(Var0, &(uParam0->f_206), uParam0);
}

int func_103(var uParam0)
{
	bLocal_1134 = false;
	switch (iLocal_17)
	{
		case 0:
			__LIB_2__::func_608(&uLocal_565);
			iLocal_17 = 1;
			__LIB_1__::func_951(&iLocal_380);
			break;
		case 1:
			iLocal_17 = 3;
			func_328(uParam0, 4);
			break;
		case 2:
			func_351(uParam0, 0);
			func_329(20);
			func_345(8);
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_20, false);
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_36, false);
			func_352(65536);
			return 7;
		case 3:
			func_328(uParam0, 14);
			__LIB_1__::func_748(&uLocal_52, 1, 1);
			__LIB_1__::func_748(&uLocal_53, 1, 1);
			__LIB_1__::func_951(&iLocal_280);
			__LIB_1__::func_951(&iLocal_288);
			VEHICLE::SET_MISSION_TRAIN_COORDS(iLocal_574, vLocal_450);
			iLocal_17 = 4;
			return 8;
	}
	return 7;
}

bool func_104(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_172, 256) && !__LIB_0__::func_1(uParam0->f_172, 1024))
	{
		if (!func_359(uParam0))
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
		if (func_374(&(uParam0->f_753), uParam0->f_2581, uParam0->f_2571, bParam1))
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
	func_376();
	LAW::_DISABLE_GUARD_ZONE("BRAITHWAITE_MANOR");
	VEHICLE::SET_DISABLE_RANDOM_TRAINS_THIS_FRAME(true);
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	func_377(uParam0);
	func_378();
	func_379();
	func_380();
	func_381();
	func_382();
	if (iLocal_15 >= 0 && iLocal_15 <= 2)
	{
		func_383();
	}
	switch (iLocal_15)
	{
		case 0:
			if (func_384(uParam0))
			{
				func_328(uParam0, 1);
			}
			break;
		case 1:
			if (func_385(uParam0))
			{
				func_328(uParam0, 2);
			}
			break;
		case 2:
			if (func_386(uParam0))
			{
				return 5;
			}
			break;
		case 4:
			if (func_387(uParam0))
			{
				func_328(uParam0, 5);
			}
			break;
		case 5:
			if (func_388(uParam0))
			{
				func_328(uParam0, 6);
			}
			break;
		case 6:
			if (func_389(uParam0))
			{
				func_328(uParam0, 7);
				return 5;
			}
			break;
		case 7:
			if (func_390(uParam0))
			{
				func_328(uParam0, 8);
			}
			break;
		case 8:
			if (func_391(uParam0))
			{
				func_328(uParam0, 9);
			}
			break;
		case 9:
			if (func_392(uParam0))
			{
				func_328(uParam0, 10);
			}
			break;
		case 10:
			if (func_393(uParam0))
			{
				func_328(uParam0, 11);
			}
			break;
		case 11:
			if (func_394(uParam0))
			{
				func_328(uParam0, 12);
			}
			break;
		case 12:
			if (func_395(uParam0))
			{
				func_328(uParam0, 14);
				return 6;
			}
			break;
		case 14:
			return 8;
	}
	if (!func_217(4096))
	{
		if (iLocal_15 > 4)
		{
			func_352(4096);
		}
	}
	if (func_217(536870912))
	{
		func_352(536870912);
	}
	iLocal_992 = 0;
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
		func_431(Global_1347702[iParam0 /*49*/].f_15, bParam4, bParam2, bParam6, bParam5);
	}
	else
	{
		__LIB_1__::func_809(Global_1347702[iParam0 /*49*/].f_15, bParam6);
	}
	__LIB_10__::func_833(iParam0);
}

bool func_150(var uParam0)
{
	if ((((((((((__LIB_12__::func_644(uParam0) == 3 || __LIB_12__::func_644(uParam0) == 13) || __LIB_12__::func_644(uParam0) == 8) || __LIB_12__::func_644(uParam0) == 10) || __LIB_12__::func_644(uParam0) == 11) || __LIB_12__::func_644(uParam0) == 4) || __LIB_12__::func_644(uParam0) == 7) || __LIB_12__::func_644(uParam0) == 15) || __LIB_12__::func_644(uParam0) == 9) || __LIB_12__::func_644(uParam0) == 14) || __LIB_12__::func_644(uParam0) == 3)
	{
		if (!bLocal_31)
		{
			bLocal_31 = func_343(0, 0, func_339(4));
		}
		else if (func_459(0, 4, 0.92f))
		{
			TASK::TASK_SMART_FLEE_PED(iLocal_36, Global_35, 1000f, -1, 0, 1077936128 /* Float: 3f */, 0);
			return true;
		}
	}
	if (__LIB_12__::func_644(uParam0) == 2 || __LIB_12__::func_644(uParam0) == 12)
	{
		__LIB_2__::func_426(&iLocal_36);
		return true;
	}
	if (__LIB_12__::func_644(uParam0) == 0)
	{
		if (!func_460())
		{
			return false;
		}
	}
	return true;
}

void func_159(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_36) && PED::IS_PED_IN_GROUP(iLocal_36))
	{
		PED::REMOVE_PED_FROM_GROUP(iLocal_36);
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_104[iVar0 /*23*/]))
		{
			PED::SET_PED_CONFIG_FLAG(Local_104[iVar0 /*23*/], 186, true);
		}
		__LIB_2__::func_788(&(Local_104[iVar0 /*23*/]), 1, 0, 1);
		__LIB_2__::func_788(&(Local_104[iVar0 /*23*/].f_1), 1, 0, 1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_58[iVar0 /*20*/]))
		{
			PED::SET_PED_CONFIG_FLAG(Local_58[iVar0 /*20*/], 186, true);
		}
		__LIB_2__::func_788(&(Local_58[iVar0 /*20*/]), 1, 0, 1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		__LIB_2__::func_788(&(Local_881[iVar0 /*11*/]), 1, 0, 1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		__LIB_0__::func_325(&(Local_581[iVar0 /*2*/].f_1));
		iVar0++;
	}
	__LIB_2__::func_788(&iLocal_20, 1, 1, 1);
	__LIB_2__::func_788(&iLocal_36, 1, 1, 1);
	func_461();
	func_344();
	__LIB_1__::func_951(&iLocal_280);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_392))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_392);
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_389[iVar0]))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iLocal_389[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_385[iVar0]))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iLocal_385[iVar0]));
		}
		iVar0++;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("CS_IANGRAY"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("CS_SCOTTGRAY"));
	__LIB_0__::func_172(iLocal_468);
	__LIB_0__::func_172(iLocal_464);
	__LIB_0__::func_172(iLocal_463);
	__LIB_0__::func_172(iLocal_461);
	__LIB_0__::func_172(iLocal_465);
	__LIB_0__::func_172(iLocal_466);
	__LIB_0__::func_172(iLocal_469);
	__LIB_10__::func_284(&iLocal_574);
	__LIB_10__::func_284(&iLocal_575);
	__LIB_10__::func_284(&iLocal_579);
	__LIB_10__::func_284(&iLocal_575);
	__LIB_10__::func_284(&iLocal_577);
	__LIB_10__::func_284(&iLocal_578);
	__LIB_10__::func_284(&iLocal_580);
	__LIB_10__::func_284(&iLocal_576);
	__LIB_0__::func_325(&iLocal_37);
	__LIB_0__::func_325(&iLocal_460);
	func_464();
	iVar1 = PERSCHAR::_0x112DDF56300BC6E5(joaat("BGV_DELIVERY_1"));
	PERSCHAR::_0x4F81EAD1DE8FA19B(iVar1);
	iVar1 = PERSCHAR::_0x112DDF56300BC6E5(joaat("BGV_DELIVERY_2"));
	PERSCHAR::_0x4F81EAD1DE8FA19B(iVar1);
	iVar1 = PERSCHAR::_0x112DDF56300BC6E5(joaat("GLO_BLW_WAGON_DELIVERY_3"));
	PERSCHAR::_0x4F81EAD1DE8FA19B(iVar1);
	iVar2 = PERSCHAR::_0x112DDF56300BC6E5(joaat("BRA_MANOR_GUARD"));
	if (PERSCHAR::_0x800DF3FC913355F3(iVar2))
	{
		PERSCHAR::_0x4F81EAD1DE8FA19B(iVar2);
	}
	iVar2 = PERSCHAR::_0x112DDF56300BC6E5(joaat("BRA_MANOR_GUARD_2"));
	if (PERSCHAR::_0x800DF3FC913355F3(iVar2))
	{
		PERSCHAR::_0x4F81EAD1DE8FA19B(iVar2);
	}
	iVar2 = PERSCHAR::_0x112DDF56300BC6E5(joaat("BRA_MANOR_GUARD_3"));
	if (PERSCHAR::_0x800DF3FC913355F3(iVar2))
	{
		PERSCHAR::_0x4F81EAD1DE8FA19B(iVar2);
	}
	iVar2 = PERSCHAR::_0x112DDF56300BC6E5(joaat("BRA_MANOR_GUARD_4"));
	if (PERSCHAR::_0x800DF3FC913355F3(iVar2))
	{
		PERSCHAR::_0x4F81EAD1DE8FA19B(iVar2);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_26))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_26);
	}
	__LIB_1__::func_748(&uLocal_52, 1, 1);
	__LIB_1__::func_748(&uLocal_53, 1, 1);
}

void func_168(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	if (!__LIB_0__::func_31(iParam0))
	{
		return;
	}
	if (!__LIB_1__::func_22(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = __LIB_0__::func_167(iParam0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			PED::SET_PED_KEEP_TASK(iVar0, false);
		}
	}
	func_470(iParam0, 0, 0, bParam1, fParam2, bParam3, bParam4, bParam5, bParam6, 0, 0);
	__LIB_0__::func_904(iParam0, 0);
	__LIB_0__::func_745(iParam0);
}

void func_187()
{
	vLocal_282 = { 1.1f, -3.07f, 1.1f };
	vLocal_285 = { 90f, 0f, 0f };
	vLocal_289 = { 1.63f, 1.71f, 1.1f };
	vLocal_292 = { 90f, 0f, 0f };
}

void func_188()
{
	vLocal_271 = { 1048.62f, -1067.19f, 65.6f };
	Local_104[0 /*23*/].f_3 = { 1078.196f, -1050.696f, 68.1917f };
	Local_104[1 /*23*/].f_3 = { 1102.601f, -1008.4f, 67.6f };
	Local_104[2 /*23*/].f_3 = { 1064.134f, -840.9811f, 71.9652f };
	Local_104[3 /*23*/].f_3 = { 1017.511f, -795.9338f, 77.722f };
	Local_104[4 /*23*/].f_3 = { 1026.572f, -770.0784f, 82.9981f };
	Local_104[5 /*23*/].f_3 = { 1030.318f, -735.1772f, 87.7593f };
	Local_104[6 /*23*/].f_3 = { 1015.842f, -797.842f, 77.3136f };
	Local_104[0 /*23*/].f_6 = 84.6195f;
	Local_104[1 /*23*/].f_6 = 8.8623f;
	Local_104[2 /*23*/].f_6 = 84.5499f;
	Local_104[3 /*23*/].f_6 = 55.3762f;
	Local_104[6 /*23*/].f_6 = 103.0729f;
	Local_104[4 /*23*/].f_6 = 102.2534f;
	Local_104[5 /*23*/].f_6 = 158.0179f;
	Local_104[0 /*23*/].f_8 = sLocal_872;
	Local_104[1 /*23*/].f_8 = sLocal_873;
	Local_104[2 /*23*/].f_8 = sLocal_874;
	Local_104[3 /*23*/].f_8 = sLocal_875;
	Local_104[4 /*23*/].f_8 = sLocal_876;
	Local_104[6 /*23*/].f_8 = sLocal_877;
	Local_104[5 /*23*/].f_8 = sLocal_878;
	Local_104[0 /*23*/].f_12 = 58;
	Local_104[1 /*23*/].f_12 = 54;
	Local_104[2 /*23*/].f_18 = 322;
	Local_104[3 /*23*/].f_18 = 244;
	Local_104[4 /*23*/].f_18 = 174;
	Local_104[5 /*23*/].f_18 = 196;
	Local_104[6 /*23*/].f_18 = 232;
}

void func_189()
{
	Local_58[1 /*20*/].f_6 = { 1228.935f, -1304.288f, 75.9066f };
	Local_58[0 /*20*/].f_6 = { 1224.106f, -1301.734f, 75.9034f };
	Local_58[1 /*20*/].f_3 = { 1178.415f, -1316.711f, 69.4432f };
	Local_58[0 /*20*/].f_3 = { 1178.415f, -1316.711f, 69.4432f };
	Local_58[0 /*20*/].f_15 = 255.5228f;
	Local_58[1 /*20*/].f_15 = 311.7356f;
	Local_58[0 /*20*/].f_9 = { 1253.968f, -1309.817f, 75.4688f };
	Local_58[1 /*20*/].f_9 = { 1252.908f, -1308.77f, 75.506f };
	Local_58[0 /*20*/].f_16 = 138.3374f;
	Local_58[1 /*20*/].f_16 = 133.6996f;
	Local_58[0 /*20*/].f_12 = { 1180.725f, -1277.174f, 73.3689f };
	Local_58[1 /*20*/].f_12 = { 1183.916f, -1274.979f, 73.6845f };
}

void func_190()
{
	PED::ADD_RELATIONSHIP_GROUP("relBraith", &iLocal_276);
	PED::ADD_RELATIONSHIP_GROUP("relGray", &iLocal_100);
	PED::ADD_RELATIONSHIP_GROUP("relBeau", &iLocal_35);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, iLocal_35, iLocal_276);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, iLocal_35, iLocal_100);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_35, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("PLAYER"), iLocal_35);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, iLocal_100, iLocal_276);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, iLocal_100, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, iLocal_100, iLocal_35);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, iLocal_276, iLocal_100);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, iLocal_276, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, iLocal_276, iLocal_35);
}

void func_191()
{
	Local_474[0 /*18*/].f_1 = { 12.5f, 15f, 5f };
	Local_474[0 /*18*/].f_4 = { 0f, 0f, 1.4184f };
	Local_474[0 /*18*/].f_16 = 34.0303f;
	Local_474[1 /*18*/].f_1 = { -55.8763f, -299.6617f, 102.6316f };
	Local_474[1 /*18*/].f_4 = { 2.648f, -4f, 4.6982f };
	Local_474[1 /*18*/].f_16 = 45.0303f;
	Local_474[2 /*18*/].f_1 = { 3.45f, -4.3f, 3f };
	Local_474[2 /*18*/].f_16 = 40.0303f;
	Local_474[2 /*18*/].f_4 = { 2f, 0f, 0.5f };
}

void func_192()
{
	Local_881[0 /*11*/].f_1 = { 0.97f, 0.3f, 1.51f };
	Local_881[1 /*11*/].f_1 = { 0.97f, 3.7f, 1.51f };
	Local_881[2 /*11*/].f_1 = { -1.05f, -4.52f, 1.51f };
	Local_881[3 /*11*/].f_1 = { -1.17f, 0.22f, 1.51f };
	Local_881[4 /*11*/].f_1 = { 1.25f, -3.27f, 1.51f };
	Local_881[0 /*11*/].f_4 = { 915.6216f, -666.1214f, 68.738f };
	Local_881[1 /*11*/].f_4 = { 915.6216f, -666.1214f, 68.738f };
	Local_881[2 /*11*/].f_4 = { 915.6216f, -666.1214f, 68.738f };
	Local_881[3 /*11*/].f_4 = { 922.1865f, -700.3096f, 68.1154f };
	Local_881[4 /*11*/].f_4 = { 929.3708f, -699.0162f, 68.4394f };
	Local_881[0 /*11*/].f_7 = 166.9534f;
	Local_881[1 /*11*/].f_7 = 147.6499f;
	Local_881[2 /*11*/].f_7 = 147.6495f;
	Local_881[3 /*11*/].f_7 = 147.6499f;
	Local_881[4 /*11*/].f_7 = 147.6495f;
	Local_881[0 /*11*/].f_8 = joaat("A_M_M_RHDUPPERCLASS_01");
	Local_881[1 /*11*/].f_8 = joaat("A_F_M_RHDUPPERCLASS_01");
	Local_881[2 /*11*/].f_8 = joaat("A_M_M_RHDUPPERCLASS_01");
	Local_881[3 /*11*/].f_8 = joaat("A_F_M_RHDUPPERCLASS_01");
	Local_881[4 /*11*/].f_8 = joaat("A_M_M_RHDUPPERCLASS_01");
}

void func_193()
{
	Local_811[0 /*5*/].f_1 = "script@rcm@rbnp2@s1@leadin@int@ilo";
	Local_811[0 /*5*/].f_2 = func_339(0);
	Local_811[5 /*5*/].f_1 = "script@rcm@rbnp2@s1@ig6_ridertaunts@ig6_ridertaunts";
	Local_811[5 /*5*/].f_2 = func_339(18);
	Local_811[3 /*5*/].f_1 = "script@rcm@rbnp2@s1@ig3_beauandpenelopeplatformidle@ig3_beauandpenelopeplatformidle";
	Local_811[3 /*5*/].f_2 = func_339(23);
	Local_811[4 /*5*/].f_1 = "script@rcm@rbnp2@s1@ig4_beau_escapes@ig4_beau_escapes";
	Local_811[4 /*5*/].f_2 = func_339(23);
	Local_811[2 /*5*/].f_1 = "script@rcm@rbnp2@s1@ig1_peneloperidesthehorse@ig1_peneloperidesthehorse";
	Local_811[2 /*5*/].f_2 = func_339(28);
	Local_811[6 /*5*/].f_1 = "script@rcm@rbnp2@s1@ig_beauandpenelopeontrain@ig_beauandpenelopeontrain";
	Local_811[6 /*5*/].f_2 = func_339(31);
	Local_811[8 /*5*/].f_1 = "script@rcm@rbnp2@s1@ig2_penelopeandbeaumeet@ig2_penelopeandbeaumeet_p1";
	Local_811[8 /*5*/].f_2 = func_339(5);
	Local_811[9 /*5*/].f_1 = "script@rcm@rbnp2@s1@ig2_penelopeandbeaumeet@ig2_penelopeandbeaumeet_p2";
	Local_811[9 /*5*/].f_2 = func_339(15);
	Local_811[10 /*5*/].f_1 = "script@rcm@rbnp2@s1@leadin@mcs1@leadin";
	Local_811[10 /*5*/].f_2 = func_339(47);
	Local_811[11 /*5*/].f_1 = "script@rcm@rbnp2@s1@ig11_penelopeboardstrain@ig11_penelopeboardstrain";
	Local_811[11 /*5*/].f_2 = func_339(48);
	Local_811[7 /*5*/].f_1 = "script@rcm@RBNP2@S1@Leadin@MCS2@Leadin";
	Local_811[7 /*5*/].f_2 = func_339(49);
}

void func_194()
{
	int iVar0;
	vLocal_736[0 /*3*/] = "BNP21_O_GO_STATION";
	vLocal_736[2 /*3*/] = "BNP21_O_MONEY";
	vLocal_736[3 /*3*/] = "BNP21_O_TICKET";
	vLocal_736[5 /*3*/] = "BNP21_O_MEET_BEAU";
	vLocal_736[6 /*3*/] = "BNP21_O_STATION";
	vLocal_736[7 /*3*/] = "BNP21_O_GETON";
	vLocal_736[8 /*3*/] = "BNP21_O_TRAIN";
	vLocal_736[9 /*3*/] = "BNP21_O_STATION";
	vLocal_736[10 /*3*/] = "BNP21_O_THUGS";
	vLocal_736[11 /*3*/] = "BNP21_O_RBAP";
	vLocal_736[12 /*3*/] = "BNP21_O_WPENE";
	vLocal_736[13 /*3*/] = "BNP21_O_RBAP";
	vLocal_736[14 /*3*/] = "BNP21_O_WTRAI";
	vLocal_736[1 /*3*/] = "BNP21_O_STOP";
	vLocal_736[15 /*3*/] = "BNP21_O_DRIVE";
	vLocal_736[16 /*3*/] = "BNP21_O_VALEN";
	vLocal_736[17 /*3*/] = "BNP21_O_INVES";
	vLocal_736[18 /*3*/] = "BNP21_O_WAIT";
	iVar0 = 0;
	while (iVar0 < 19)
	{
		vLocal_736[iVar0 /*3*/].f_1 = 0;
		iVar0++;
	}
}

void func_203(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar1 = VEHICLE::_0x635423D55CA84FC8(iParam1);
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		__LIB_12__::func_867(uParam0, VEHICLE::_0x8DF5F6A19F99F0D5(iParam1, iVar0), 7);
		iVar0++;
	}
}

int func_214(vector3 vParam0, var uParam3)
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
		iVar0 = func_520(0, 0);
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

bool func_215(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_20))
	{
		if (!__LIB_0__::func_272(iLocal_20, 1))
		{
			StringCopy(&(uParam0->f_2578), "BNP21_R_BEAUD", 24);
			return true;
		}
		else if (__LIB_13__::func_199(iLocal_36, 0, &uLocal_400, &iLocal_428, 0, 0))
		{
			if (!iLocal_15 == 4 && !iLocal_15 == 5)
			{
				if (iLocal_428 == 2)
				{
					StringCopy(&(uParam0->f_2578), "BNP21_R_BEAUA", 24);
					return true;
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_36))
	{
		if (!__LIB_0__::func_272(iLocal_36, 1))
		{
			StringCopy(&(uParam0->f_2578), "BNP21_R_PENED", 24);
			return true;
		}
		else if (((!PED::GET_PED_CAUSE_OF_DEATH(iLocal_36) == joaat("WEAPON_ANIMAL") && !WEAPON::_0x9E2D5D6BC97A5F1E(iLocal_36, joaat("WEAPON_ANIMAL"), 500)) && !WEAPON::_0x9E2D5D6BC97A5F1E(iLocal_36, joaat("WEAPON_FALL"), 500)) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_36, Global_35, 0, 0))
		{
			StringCopy(&(uParam0->f_2578), "BNP21_R_PENEA", 24);
			return true;
		}
	}
	return false;
}

bool func_217(int iParam0)
{
	return __LIB_0__::func_27(iLocal_810, iParam0);
}

bool func_218()
{
	int iVar0;
	var uVar1[32];
	PLAYER::_0x1A6E84F13C952094(PLAYER::PLAYER_ID(), 20, &uVar1);
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!uVar1[iVar0] == 0 && ENTITY::DOES_ENTITY_EXIST(uVar1[iVar0]))
		{
			if (PED::IS_PED_HUMAN(uVar1[iVar0]))
			{
				if (PED::IS_PED_DEAD_OR_DYING(uVar1[iVar0], true))
				{
					if (!PED::GET_PED_CAUSE_OF_DEATH(uVar1[iVar0]) == joaat("WEAPON_ANIMAL"))
					{
						return true;
					}
				}
				if (PED::IS_PED_INJURED(uVar1[iVar0]))
				{
					if ((!WEAPON::_0x9E2D5D6BC97A5F1E(uVar1[iVar0], joaat("WEAPON_ANIMAL"), 500) && !PED::_0x29FCE825613FEFCA(uVar1[iVar0], 500)) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uVar1[iVar0], Global_35, 0, 0))
					{
						return true;
					}
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_222(var uParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5)
{
	float fVar0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam2))
	{
		fVar0 = __LIB_0__::func_665(Global_35, iParam2, 1, 1);
		if (fVar0 > fParam3)
		{
			return true;
		}
		else if (fVar0 > fParam4)
		{
			func_529(uParam0, iParam1, 1);
			bLocal_19 = true;
		}
		else if (fVar0 < fParam5)
		{
			vLocal_736[iParam1 /*3*/].f_1 = 0;
			bLocal_19 = false;
		}
	}
	return false;
}

bool func_223()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(Local_581[iVar1 /*2*/]))
		{
			if (__LIB_1__::func_205(Global_35, Local_581[iVar1 /*2*/], 1, 0))
			{
				iVar0 = 1;
			}
		}
		iVar1++;
	}
	return iVar0;
}

bool func_229(int iParam0)
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

int func_238(var uParam0)
{
	__LIB_13__::func_199(iLocal_36, 0, &uLocal_400, &iLocal_428, 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_36))
	{
		if (!PED::IS_PED_DEAD_OR_DYING(iLocal_36, true))
		{
			if ((((!func_557(&iLocal_36, &uLocal_400, &iLocal_428, 1, 0, 0) || iLocal_428 == 256) || PED::IS_PED_RESPONDING_TO_EVENT(iLocal_36, joaat("EVENT_SHOT_FIRED"))) || PED::IS_PED_RESPONDING_TO_EVENT(iLocal_36, joaat("EVENT_IN_AIR"))) || PED::IS_PED_RESPONDING_TO_EVENT(iLocal_36, joaat("EVENT_SHOT_FIRED_BASE")))
			{
				bLocal_30 = true;
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_36, true);
				__LIB_13__::func_19(&iLocal_295, iLocal_36);
				__LIB_2__::func_480(&Local_356, 0, 1, 1, 0);
			}
			if (bLocal_30)
			{
				if (!bLocal_31)
				{
					bLocal_31 = func_343(0, 0, func_339(4));
				}
				else if (func_459(0, 4, 0.92f))
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_36, Global_35, 1000f, -1, 0, 1077936128 /* Float: 3f */, 0);
					return 1;
				}
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_242()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (__LIB_0__::func_31(iVar0) && __LIB_1__::func_22(iVar0))
		{
			__LIB_0__::func_288(iVar0, 56, 1);
		}
		iVar0++;
	}
	func_80(&(Global_1359489.f_40), 1);
}

void func_243(var uParam0)
{
	int iVar0;
	int iVar1;
	if (__LIB_0__::func_1(uParam0->f_172, 8))
	{
		__LIB_1__::func_941(79535289);
		CAM::_0x0A5A4F1979ABB40E(&Local_1212);
		if (CAM::_0xDD0B7C5AE58F721D(&Local_1212))
		{
			CAM::_0x798BE43C9393632B(&Local_1212);
			CAM::_0x0A5A4F1979ABB40E(&Local_1212);
		}
		CAM::_0xA54D643D0773EB65("script@Story@RBNP12@TrainRideEscape", "CME_SHOT3", 5);
		STREAMING::END_SRL();
		AUDIO::_0x43037ABFE214A851();
		__LIB_2__::func_753(72, 0, 1, 0, 0);
		__LIB_4__::func_419(1, 1);
		__LIB_4__::func_419(2, 1);
		func_564(31, 1);
		func_564(30, 1);
		__LIB_4__::func_932(31, 1);
		__LIB_4__::func_932(30, 1);
		GRAPHICS::ANIMPOSTFX_STOP_ALL();
		STREAMING::CLEAR_FOCUS();
		func_566();
		iVar0 = 0;
		while (iVar0 < 4)
		{
			AUDIO::CANCEL_MUSIC_EVENT(func_331(iVar0));
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (CAM::DOES_CAM_EXIST(Local_474[iVar0 /*18*/]))
			{
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				CAM::DESTROY_CAM(Local_474[iVar0 /*18*/], false);
			}
			iVar0++;
		}
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
		__LIB_2__::func_145(iLocal_50, 0);
		CAM::SET_CINEMATIC_MODE_ACTIVE(false);
		ENTITY::SET_ENTITY_VISIBLE(Global_35, true);
		__LIB_1__::func_600(1);
		__LIB_0__::func_267(1);
		VEHICLE::_0xB961DD799A837BD7();
		POPULATION::_0x74C2B3DC0B294102(iLocal_461);
		POPULATION::_0xA1CFB35069D23C23(iLocal_461);
		if (PED::_0x91A5F9CBEBB9D936(uLocal_462))
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_462, false);
		}
		POPULATION::_0x74C2B3DC0B294102(iLocal_468);
		POPULATION::_0xA1CFB35069D23C23(iLocal_468);
		if (PED::_0x91A5F9CBEBB9D936(uLocal_470))
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_470, false);
		}
		POPULATION::_0x74C2B3DC0B294102(iLocal_471);
		POPULATION::_0xA1CFB35069D23C23(iLocal_471);
		if (PED::_0x91A5F9CBEBB9D936(uLocal_472))
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_472, false);
		}
		__LIB_2__::func_788(&iLocal_537, 1, 0, 1);
		AUDIO::SET_AMBIENT_ZONE_STATE("AZ_BEAU_PEN_TRAIN", false, false);
		PERSCHAR::_0x2E957AA81F2C61C9();
		__LIB_2__::func_145(iLocal_50, 0);
		MAP::DISPLAY_RADAR(true);
		AUDIO::SET_AMBIENT_ZONE_STATE("AZ_BEAU_PEN_TRAIN", false, false);
		if (CAM::_0xDD0B7C5AE58F721D(&Local_1212))
		{
			CAM::_0x798BE43C9393632B(&Local_1212);
		}
		func_568();
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_577, false);
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_394, false);
		iVar1 = PERSCHAR::_0x112DDF56300BC6E5(joaat("BGV_DELIVERY_1"));
		PERSCHAR::_0x7B204F88F6C3D287(iVar1);
		iVar1 = PERSCHAR::_0x112DDF56300BC6E5(joaat("BGV_DELIVERY_2"));
		PERSCHAR::_0x7B204F88F6C3D287(iVar1);
		iVar1 = PERSCHAR::_0x112DDF56300BC6E5(joaat("GLO_BLW_WAGON_DELIVERY_3"));
		PERSCHAR::_0x7B204F88F6C3D287(iVar1);
		__LIB_1__::func_572(Global_36, 500f, 0, 0, 0, 0, 0);
	}
	if (__LIB_12__::func_644(uParam0) == 0)
	{
		__LIB_1__::func_715(13, 0, 0, 0, iLocal_36, 0, 1065353216 /* Float: 1f */, 0);
		__LIB_2__::func_426(&iLocal_20);
		__LIB_2__::func_426(&iLocal_36);
		__LIB_2__::func_426(&iLocal_395);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_394))
		{
			VEHICLE::DELETE_VEHICLE(&iLocal_394);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_574))
	{
		VEHICLE::_0xA72B1BF3857B94D7(iLocal_574, 0);
	}
	__LIB_0__::func_325(&iLocal_21);
	__LIB_0__::func_325(&iLocal_37);
	__LIB_0__::func_325(&iLocal_541);
	__LIB_0__::func_325(&iLocal_460);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		__LIB_0__::func_325(&(Local_581[iVar0 /*2*/].f_1));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		__LIB_2__::func_426(&(Local_881[iVar0 /*11*/]));
		iVar0++;
	}
	__LIB_1__::func_951(&iLocal_280);
	__LIB_1__::func_951(&iLocal_288);
	if (0 == __LIB_12__::func_644(uParam0))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_50))
		{
			func_326(uParam0, -1073.459f, -589.8627f, 80.6675f, 293.314f, 1);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_50))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_50, -1073.459f, -589.8627f, 80.6675f, 293.314f, true, false, true);
		}
		__LIB_11__::func_28(&iLocal_395, &iLocal_394, -1, 1);
		__LIB_11__::func_28(&iLocal_36, &iLocal_394, 1, 1);
		__LIB_11__::func_28(&iLocal_20, &iLocal_394, 2, 1);
	}
	func_461();
	func_344();
}

void func_257(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_172, 16))
	{
		__LIB_12__::func_966(uParam0, 0);
		func_87(uParam0);
	}
}

int func_264(var uParam0)
{
	if (uParam0->f_177 == 6)
	{
		return 1;
	}
	else if (uParam0->f_177 == 2)
	{
		return 1;
	}
	else if (func_592(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_281(var uParam0)
{
	bool bVar0;
	bVar0 = true;
	if (!func_323(uParam0))
	{
		bVar0 = false;
	}
	if (!func_334(uParam0, 0, 0))
	{
		bVar0 = false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_380))
	{
		iLocal_380 = OBJECT::CREATE_OBJECT(iLocal_384, vLocal_381, true, true, false, false, true);
		return 0;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1230))
	{
		iLocal_1230 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(895.2736f, -1866.43f, 42.6791f, 0f, 0f, 32.49382f, 5f, 5f, 5f, "ILO!");
		bVar0 = false;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_461))
	{
		iLocal_461 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(894.7908f, -1866.4f, 42.6952f, 0f, 0f, 120.5149f, 10.43812f, 14.32802f, 16.43728f, "BAP21 - Block  around Penelope");
		bVar0 = false;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_468))
	{
		iLocal_468 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1231.642f, -1307.5f, 76.30125f, 0f, 0f, -133.4965f, 7.649922f, 33.02866f, 5.515738f, "BAP21 - Block around Platform");
		bVar0 = false;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_467))
	{
		iLocal_467 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1232.157f, -1306.958f, 76.30125f, 0f, 0f, -133.4965f, 5.682909f, 33.02866f, 5.515738f, "m_volPlatformDefense");
		bVar0 = false;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_471))
	{
		iLocal_471 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1235.7f, -1291.118f, 76.78007f, 0f, 0f, 46.00078f, 4.448305f, 9.266886f, 3.746984f, "BAP21 - Block around Beau");
		bVar0 = false;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_464))
	{
		iLocal_464 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1011.364f, -1776.408f, 59.56964f, 0f, 0f, 169.9796f, 81.78907f, 142.7423f, 35.42607f, "BAP21 - Braithwaites grounds");
		bVar0 = false;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_463))
	{
		iLocal_463 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1011.545f, -1771.266f, 54.39464f, 0f, 0f, -179.8488f, 41.87512f, 33.00155f, 18.22047f, "BAP21 - Braithwaites house");
		bVar0 = false;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_465))
	{
		iLocal_465 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1230.265f, -1314.149f, 77.30038f, 0f, 0f, 46.50346f, 3.394792f, 67.88611f, 2.352537f, "BAP21 - Train");
		bVar0 = false;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_27))
	{
		iLocal_27 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1240.471f, -1289.556f, 76.85373f, 0f, 0f, 43.99248f, 2.350387f, 4.463229f, 2.457234f, "m_volApproachFromStairs");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_28))
	{
		iLocal_28 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1236.441f, -1290.682f, 75.96498f, 0f, 0f, 49.09972f, 5.954364f, 1f, 3.860482f, "m_volApproachFromFront");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_29))
	{
		iLocal_29 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1234.76f, -1295.069f, 76.85373f, 0f, 0f, 43.99248f, 2.350387f, 4.463229f, 2.457234f, "m_volApproachFromDoor");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_469))
	{
		iLocal_469 = VOLUME::_CREATE_VOLUME_BOX(1226.369f, -1308.103f, 75.36914f, 0f, 0f, -43.11798f, 43.73531f, 1.566009f, 1f);
	}
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(79535289))
	{
		__LIB_0__::func_68(79535289, 0, 0);
		bVar0 = false;
	}
	if (!bVar0)
	{
		return 0;
	}
	__LIB_1__::func_600(0);
	OBJECT::_0x7F458B543006C8FE(79535289, 14);
	POPULATION::_0xB56D41A694E42E86(iLocal_461, 0, 0, 0, -1, -1, 0);
	POPULATION::_0x18262CAFEBB5FBE1(iLocal_461, 0, 0, 0, -1, -1, 0);
	POPULATION::_0xB56D41A694E42E86(iLocal_468, 0, 0, 0, -1, -1, 0);
	POPULATION::_0x18262CAFEBB5FBE1(iLocal_468, 0, 0, 0, -1, -1, 0);
	POPULATION::_0xB56D41A694E42E86(iLocal_471, 0, 0, 0, -1, -1, 0);
	POPULATION::_0x18262CAFEBB5FBE1(iLocal_471, 0, 0, 0, -1, -1, 0);
	return 1;
}

char* func_300(var uParam0)
{
	switch (iLocal_17)
	{
		case 0:
			return "rbnp2_s1_int";
		case 1:
			return "rbnp2_s1_mcs1";
		case 2:
			return "rbnp2_s1_mcs2";
		case 3:
			return "rbnp2_s1_ext";
		default:
			break;
	}
	return "INVALID";
}

Vector3 func_301(var uParam0)
{
	switch (iLocal_17)
	{
		case 0:
			return __LIB_1__::func_440(uParam0->f_174);
		case 1:
			return vLocal_438;
		case 2:
			return Global_36;
		case 3:
			return vLocal_450;
		default:
			break;
	}
	return __LIB_1__::func_440(uParam0->f_174);
}

void func_308(var uParam0)
{
	WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 0, 1);
	switch (iLocal_17)
	{
		case 0:
			func_329(2);
			__LIB_0__::func_568(Global_36, 50f, 0);
			break;
		case 1:
			func_329(2);
			func_345(2);
			func_648(1);
			__LIB_2__::func_919(iLocal_288, 1, 1);
			PED::_0x3A50753042B6891B(Global_35, "s_penelopePurse01x_PH_L_HAND");
			WEAPON::_0xD53846B9C931C181(Global_35, joaat("WEAPON_UNARMED"), 50f);
			WEAPON::_0xD53846B9C931C181(Local_58[1 /*20*/], joaat("WEAPON_UNARMED"), 50f);
			break;
		case 2:
			func_329(2);
			func_345(2);
			VEHICLE::SET_MISSION_TRAIN_COORDS(iLocal_574, vLocal_447);
			VEHICLE::SET_TRAIN_SPEED(iLocal_574, 1f);
			ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(uParam0->f_348, iLocal_575, 0);
			break;
		case 3:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_288))
			{
				iLocal_288 = OBJECT::CREATE_OBJECT(iLocal_279, vLocal_450, true, true, false, false, true);
			}
			func_329(2);
			func_345(2);
			PED::SET_PED_USING_ACTION_MODE(Global_35, false, -1, 0);
			break;
	}
}

void func_310(var uParam0)
{
	int iVar0;
	switch (iLocal_17)
	{
		case 0:
			if (__LIB_13__::func_193(uParam0, iLocal_36, "PenelopeBraithwaite", 0, 1, 1))
			{
				func_651();
			}
			if (!bLocal_1134)
			{
				if (__LIB_13__::func_193(uParam0, Global_35, "ARTHUR", 0, 1, 1))
				{
					PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 3000, 0f, true, false);
				}
			}
			break;
		case 1:
			PED::SET_PED_USING_ACTION_MODE(Global_35, true, -1, 0);
			PED::SET_PED_USING_ACTION_MODE(Local_58[1 /*20*/], true, -1, 0);
			if (__LIB_13__::func_193(uParam0, Global_35, "ARTHUR", 0, 1, 1))
			{
				if (!PED::IS_PED_IN_MELEE_COMBAT(Global_35))
				{
					PED::SET_PED_USING_ACTION_MODE(Global_35, true, -1, 0);
					TASK::TASK_PUT_PED_DIRECTLY_INTO_MELEE(Global_35, Local_58[1 /*20*/], 0, 0.1f, 500f, 1, 0);
					PED::_0x2208438012482A1A(Global_35, false, false);
					PED::SET_PED_CONFIG_FLAG(Global_35, 258, true);
				}
			}
			if (__LIB_13__::func_193(uParam0, Local_58[1 /*20*/], "cs_iangray", 0, 1, 1))
			{
				if (!PED::IS_PED_IN_MELEE_COMBAT(Local_58[1 /*20*/]))
				{
					PED::SET_PED_USING_ACTION_MODE(Local_58[1 /*20*/], true, -1, 0);
					TASK::TASK_PUT_PED_DIRECTLY_INTO_MELEE(Local_58[1 /*20*/], Global_35, 0, 0.1f, 500f, 1, 0);
					PED::SET_PED_CONFIG_FLAG(Local_58[1 /*20*/], 258, true);
					PED::_0x2208438012482A1A(Local_58[1 /*20*/], false, false);
					func_652(2, 1);
				}
			}
			if (__LIB_13__::func_193(uParam0, iLocal_20, "BeauGray", 0, 1, 1))
			{
				func_352(4096);
			}
			func_349();
			if (!Local_811[4 /*5*/].f_3)
			{
				Local_811[4 /*5*/].f_3 = func_340(4, 0, func_339(27));
			}
			if (!Local_811[11 /*5*/].f_3)
			{
				Local_811[11 /*5*/].f_3 = func_340(11, 0, func_339(48));
			}
			if (!Local_811[11 /*5*/].f_4 && !bLocal_1133)
			{
				if (__LIB_13__::func_193(uParam0, iLocal_36, "PenelopeBraithWaite", 0, 1, 1))
				{
					if (func_343(11, 0, func_339(48)))
					{
						Local_811[11 /*5*/].f_4 = 1;
					}
				}
			}
			break;
		case 2:
			if (__LIB_0__::func_266(iLocal_574, vLocal_271, 4f, 1, 1))
			{
				func_352(65536);
			}
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_811[6 /*5*/]))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(Local_811[6 /*5*/]);
			}
			func_653();
			VEHICLE::SET_TRAIN_SPEED(iLocal_574, 7.8f);
			VEHICLE::SET_TRAIN_CRUISE_SPEED(iLocal_574, 7.8f);
			if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(uParam0->f_348) > 0.7f)
			{
				func_337(2);
			}
			if (!bLocal_1134)
			{
				if (__LIB_13__::func_193(uParam0, Global_35, "ARTHUR", 0, 1, 1))
				{
					__LIB_0__::func_569(joaat("MOTIONSTATE_WALK"), 2000, 0, 1, 1, 0, 0, 0);
					bLocal_1134 = true;
				}
			}
			break;
		case 3:
			if (ANIMSCENE::_0x8D81E7824B7753F7(uParam0->f_348, "RBNP2_S1_EXT_P3_T04_Shot_1", 1) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(uParam0->f_348) > 0.9f)
			{
				__LIB_1__::func_951(&iLocal_393);
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
			{
				PED::_0xE0B61ED8BB37712F(Global_35);
			}
			if (!bLocal_54)
			{
				if (!bLocal_1135)
				{
					if (ANIMSCENE::_0x8D81E7824B7753F7(uParam0->f_348, "RBNP2_S1_EXT_P2_T04_Shot_2", 1))
					{
						__LIB_10__::func_519(&uLocal_943, "BNP21_C_ACCE", "BNP21_C_REJE", __LIB_0__::func_342(), 0, 0, 1, -1, -1);
						bLocal_1135 = true;
						__LIB_0__::func_88(uParam0, 2);
					}
				}
				if (bLocal_1135)
				{
					func_656(&uLocal_943);
					if (__LIB_8__::func_349(&uLocal_943))
					{
						if (ANIMSCENE::_0x8D81E7824B7753F7(uParam0->f_348, "RBNP2_S1_EXT_P2_T04_Shot_2", 1))
						{
							ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_348, "Yes_is", true, false);
							ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_348, "Loop", true, false);
						}
						else
						{
							__LIB_8__::func_361(&uLocal_943);
							bLocal_54 = true;
							__LIB_12__::func_677(uParam0, 512, 1);
							__LIB_1__::func_825(joaat("PROVISION_PENELOPES_BRACELET"), 1, 752097756);
							__LIB_10__::func_515(&uLocal_943);
						}
					}
					if (__LIB_8__::func_350(&uLocal_943))
					{
						if (ANIMSCENE::_0x8D81E7824B7753F7(uParam0->f_348, "RBNP2_S1_EXT_P2_T04_Shot_2", 1))
						{
							ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_348, "Yes_is", false, false);
							ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_348, "Loop", true, false);
						}
						else
						{
							__LIB_1__::func_715(13, 1750374240, 0, 0, iLocal_36, 0, 1065353216 /* Float: 1f */, 0);
							bLocal_54 = true;
							__LIB_12__::func_677(uParam0, 512, 1);
							__LIB_8__::func_361(&uLocal_943);
							__LIB_10__::func_515(&uLocal_943);
						}
					}
				}
			}
			else
			{
				iLocal_1136++;
				if (iLocal_1136 > 90)
				{
					__LIB_12__::func_677(uParam0, 2, 1);
				}
				else
				{
					__LIB_0__::func_88(uParam0, 2);
				}
				func_352(131072);
			}
			if (ANIMSCENE::_0x8D81E7824B7753F7(uParam0->f_348, "RBNP2_S1_EXT_P2_T04_Shot_2", 1))
			{
				VEHICLE::SET_MISSION_TRAIN_COORDS(iLocal_574, vLocal_450);
			}
			POPULATION::_0xF45E46DEECF7DF6E(2048, 0, 0, -1, -1);
			func_337(5);
			if (ENTITY::DOES_ENTITY_EXIST(Local_881[0 /*11*/]))
			{
				PED::DELETE_PED(&(Local_881[0 /*11*/]));
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_881[2 /*11*/]))
			{
				PED::DELETE_PED(&(Local_881[2 /*11*/]));
			}
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
			VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
			VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
			PED::_0xAB0D553FE20A6E25(0f);
			PED::_0xC0258742B034DFAF(0f);
			PATHFIND::SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME(0f);
			PED::_0xBA0980B5C0A11924(0f);
			VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
			PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
			PED::_0x28CB6391ACEDD9DB(0f);
			iVar0 = PERSCHAR::_0x112DDF56300BC6E5(joaat("BGV_DELIVERY_1"));
			PERSCHAR::_0x7B204F88F6C3D287(iVar0);
			iVar0 = PERSCHAR::_0x112DDF56300BC6E5(joaat("BGV_DELIVERY_2"));
			PERSCHAR::_0x7B204F88F6C3D287(iVar0);
			iVar0 = PERSCHAR::_0x112DDF56300BC6E5(joaat("GLO_BLW_WAGON_DELIVERY_3"));
			PERSCHAR::_0x7B204F88F6C3D287(iVar0);
			__LIB_1__::func_572(Global_36, 500f, 0, 0, 0, 0, 0);
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_577, 2118412884))
			{
				VEHICLE::SET_MISSION_TRAIN_COORDS(iLocal_574, vLocal_450);
			}
			break;
	}
}

int func_312(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	switch (iLocal_17)
	{
		case 0:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_50))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_50, vLocal_961, fLocal_964, true, false, true);
			}
			break;
		case 1:
			Local_811[11 /*5*/].f_4 = 1;
			iLocal_1138++;
			if (iLocal_1138 < 20)
			{
				return 0;
			}
			if (!Local_811[4 /*5*/].f_3)
			{
				Local_811[4 /*5*/].f_3 = func_340(4, 0, func_339(27));
				return 0;
			}
			if (!func_343(4, 0, func_339(27)))
			{
				return 0;
			}
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_811[11 /*5*/]))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(Local_811[11 /*5*/]);
			}
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_811[4 /*5*/], "CS_PenelopeBraithwaite", iLocal_36, 0);
			if (iLocal_1138 < 40)
			{
				return 0;
			}
			func_352(4096);
			break;
		case 2:
			if (!func_217(128))
			{
				func_352(64);
				func_350(0, 1, 0);
				return 0;
			}
			if (iLocal_1137 == 0)
			{
				VEHICLE::SET_MISSION_TRAIN_COORDS(iLocal_574, vLocal_444);
				iLocal_1137++;
				return 0;
			}
			else if (iLocal_1137 < 5)
			{
				iLocal_1137++;
				return 0;
			}
			func_348(0);
			func_329(20);
			func_345(8);
			func_352(65536);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_575, 0f, -2f, 1f), (ENTITY::GET_ENTITY_HEADING(iLocal_575) + 180f), true, false, true);
			vVar1 = { 0f, 0f, 0f };
			iVar0 = 0;
			while (iVar0 < 2)
			{
				if (!__LIB_0__::func_255(Local_104[iVar0 /*23*/], 0))
				{
					TASK::WAYPOINT_RECORDING_GET_COORD(Local_104[iVar0 /*23*/].f_8, Local_104[iVar0 /*23*/].f_12, &vVar1);
					ENTITY::SET_ENTITY_COORDS(Local_104[iVar0 /*23*/].f_1, vVar1, true, false, true, true);
				}
				iVar0++;
			}
			break;
		case 3:
			if (func_217(131072))
			{
				__LIB_1__::func_951(&iLocal_393);
				__LIB_1__::func_951(&iLocal_280);
				__LIB_1__::func_951(&iLocal_288);
				if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
				{
					PED::_0xE0B61ED8BB37712F(Global_35);
				}
				else if (!bLocal_1140)
				{
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, -1096.95f, -571.1564f, 81.4068f, 335.7381f, true, false, true);
					bLocal_1140 = true;
				}
				__LIB_2__::func_426(&iLocal_20);
				__LIB_2__::func_426(&iLocal_36);
				__LIB_2__::func_426(&iLocal_395);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_394))
				{
					VEHICLE::DELETE_VEHICLE(&iLocal_394);
				}
				iLocal_1139++;
				if (iLocal_1139 < 45)
				{
					return 0;
				}
				func_349();
				iLocal_17 = 4;
			}
			else
			{
				iVar0 = 0;
				while (iVar0 < 5)
				{
					__LIB_2__::func_426(&(Local_881[iVar0 /*11*/]));
					iVar0++;
				}
			}
			return 1;
	}
	return 1;
}

int func_318(int iParam0, vector3 vParam1, float fParam4, float fParam5, bool bParam6, float fParam7, bool bParam8, float fParam9, bool bParam10, int iParam11, float fParam12, float fParam13, bool bParam14)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	__LIB_1__::func_448(iParam0, vParam1, 0, fParam5, bParam6, fParam7, bParam8, fParam12, fParam13, bParam14, 0);
	iVar1 = PED::GET_MOUNT(iParam0);
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		iVar2 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
	}
	bVar4 = __LIB_0__::func_94(iParam0, vParam1, 1);
	if (!__LIB_0__::func_899(fParam4))
	{
		if (bVar4 <= bParam8)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				func_80(fParam4, 0);
			}
		}
	}
	else if (bParam10 && bVar4 > bParam8)
	{
		__LIB_2__::func_608(fParam4);
	}
	if (__LIB_0__::func_899(fParam4))
	{
		if (bParam14)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, 1f);
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
		if (__LIB_1__::func_583(fParam4) >= fParam9)
		{
			if (iParam0 == Global_35)
			{
				PLAYER::SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(PLAYER::PLAYER_ID());
				PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 28, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar1) && !__LIB_0__::func_491(iParam0, 501393341))
			{
				if (PED::IS_PED_ON_MOUNT(iParam0))
				{
					TASK::TASK_DISMOUNT_ANIMAL(iParam0, 0, 0, 0, 0, 0);
					return 1;
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar2) && !__LIB_0__::func_491(iParam0, -828834893))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(iParam0, 0, 0);
					return 1;
				}
			}
		}
		if (iParam0 == Global_35 && iParam11 == 0)
		{
			if (TASK::GET_IS_TASK_ACTIVE(iParam0, 8))
			{
				TASK::CLEAR_PED_TASKS(iParam0, true, false);
			}
			PED::SET_PED_RESET_FLAG(iParam0, 175, true);
		}
	}
	return 0;
}

bool func_320(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_36) && __LIB_0__::func_48(iLocal_36, Global_35, 5f, 1))
	{
		if (PED::IS_PED_ON_MOUNT(Global_35))
		{
			if (!__LIB_0__::func_163(Global_35, 501393341))
			{
				TASK::TASK_DISMOUNT_ANIMAL(Global_35, 0, 0, 0, 0, 0);
			}
		}
		else
		{
			__LIB_2__::func_608(&uLocal_565);
		}
	}
	if (func_672(uParam0))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_36, true);
		return true;
	}
	return false;
}

bool func_323(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_36))
	{
		iLocal_36 = __LIB_8__::func_931(joaat("CS_PENELOPEBRAITHWAITE"), Global_1347702[uParam0->f_174 /*49*/].f_24, 0, 1, 1, 0, 1, 1, 0, 0, 1, 0, 0);
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_280))
	{
		iLocal_280 = OBJECT::CREATE_OBJECT(iLocal_281, 895.143f, -1868.39f, 42.5885f, true, true, false, false, true);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_36))
	{
		func_676(&iLocal_36, vLocal_38, fLocal_44, 1);
		__LIB_12__::func_875(uParam0, iLocal_36, "PENELOPE_BRAITH", 1);
		PED::SET_RAGDOLL_BLOCKING_FLAGS(iLocal_36, 262144);
		ENTITY::SET_ENTITY_PROOFS(iLocal_36, 8, false);
	}
	if (iLocal_15 > 0)
	{
		func_651();
	}
	if (!PED::_IS_METAPED_OUTFIT_REQUEST_VALID(iLocal_991))
	{
	}
	if (!bLocal_993)
	{
		PED::_SET_PED_BODY_COMPONENT(iLocal_36, 1420672520);
		PED::_UPDATE_PED_VARIATION(iLocal_36, false, true, true, true, false);
		bLocal_993 = true;
	}
	return true;
}

int func_326(var uParam0, vector3 vParam1, float fParam4, int iParam5)
{
	var uVar0;
	int iVar1;
	func_693(uParam0, &iLocal_50, vParam1, fParam4, 1, iParam5, 1, 1, 1);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_50) && !__LIB_0__::func_255(iLocal_50, 0))
	{
		func_694(iLocal_50, 5, 0, 0, 0, 1);
		func_694(iLocal_50, 4, 0, 0, 0, 1);
		func_694(iLocal_50, 6, 0, 0, 0, 1);
	}
	iVar1 = PED::_GET_LAST_MOUNT(Global_35);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !__LIB_0__::func_255(iVar1, 0))
	{
		func_694(iVar1, 5, 0, 0, 0, 1);
		func_694(iVar1, 4, 0, 0, 0, 1);
		func_694(iVar1, 6, 0, 0, 0, 1);
		return iVar1;
	}
	return uVar0;
}

void func_328(var uParam0, int iParam1)
{
	if (!iParam1 == iLocal_15)
	{
		iLocal_15 = iParam1;
		iLocal_16 = 0;
	}
}

void func_329(int iParam0)
{
	char* sVar0;
	if (iParam0 != iLocal_48)
	{
		iLocal_48 = iParam0;
	}
	else
	{
		return;
	}
	if (!iLocal_48 == 6 && !iLocal_48 == 8)
	{
	}
	switch (iLocal_48)
	{
		case 1:
			TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_36, vLocal_41, 3f, 0, true, true, true, false);
			break;
		case 3:
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_36, Global_35, -1, -1f, __LIB_3__::func_745(40f), -1f);
			break;
		case 5:
		case 7:
			if (PED::IS_PED_GROUP_MEMBER(iLocal_36, __LIB_0__::func_110(), 0))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_36);
			}
			TASK::TASK_STAND_STILL(iLocal_1011, -1);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_36, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_1011, -0.5f, -0.25f, 0f), 2f, -1, 0.25f, 0, 40000f);
			break;
		case 4:
			if (__LIB_0__::func_71(iLocal_36))
			{
			}
			else if (!PED::IS_PED_GROUP_MEMBER(iLocal_36, __LIB_0__::func_110(), 0))
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_36, 279, true);
				PED::SET_PED_AS_GROUP_MEMBER(iLocal_36, __LIB_0__::func_110());
				PED::SET_GROUP_FORMATION(__LIB_0__::func_110(), 0);
				PED::SET_GROUP_FORMATION_SPACING(__LIB_0__::func_110(), 2f, -1f, -1f);
				PED::_0xB05CC690CDE8A4A9(PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID()), 0f);
				PED::SET_PED_FLEE_ATTRIBUTES(iLocal_36, 512, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_36, 11, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_36, 26, true);
			}
			break;
		case 12:
		case 13:
		case 14:
			if (PED::IS_PED_GROUP_MEMBER(iLocal_36, __LIB_0__::func_110(), 0))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_36);
			}
			if (iLocal_48 == 12)
			{
				sVar0 = func_339(15);
			}
			else if (iLocal_48 == 14)
			{
				sVar0 = func_339(12);
			}
			else if (iLocal_48 == 13)
			{
				sVar0 = func_339(9);
			}
			TASK::TASK_ENTER_ANIM_SCENE(iLocal_36, Local_811[9 /*5*/], "CS_PenelopeBraithwaite", sVar0, 2f, 1, 2, 20000, -1082130432 /* Float: -1f */);
			break;
		case 9:
			if (PED::IS_PED_GROUP_MEMBER(iLocal_36, __LIB_0__::func_110(), 0))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_36);
			}
			TASK::OPEN_SEQUENCE_TASK(&iLocal_49);
			TASK::TASK_PAUSE(0, MISC::GET_RANDOM_INT_IN_RANGE(500, 750));
			TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_49);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_36, iLocal_49);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_49);
			break;
		case 10:
			if (PED::IS_PED_GROUP_MEMBER(iLocal_36, __LIB_0__::func_110(), 0))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_36);
			}
			iLocal_1011 = __LIB_2__::func_825(Global_35);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_1011))
			{
				TASK::TASK_MOUNT_ANIMAL(iLocal_36, iLocal_1011, -1, 0, 2.5f, 1, 0, 0);
			}
			break;
		case 11:
			TASK::OPEN_SEQUENCE_TASK(&iLocal_49);
			if (__LIB_0__::func_71(iLocal_36))
			{
				TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
			}
			TASK::TASK_PAUSE(0, 750);
			TASK::TASK_GO_TO_ENTITY(0, iLocal_20, 20000, 0.5f, 1f, 2f, 0);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_20, -1, -1f, -1f, -1f);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_49);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_36, iLocal_49);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_49);
			break;
		case 15:
			TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_36, sLocal_880, 0, 17422, -1, 0, 0, -1);
			break;
		case 18:
			ENTITY::SET_ENTITY_COORDS(iLocal_36, 1231.274f, -1306.894f, 75.9347f, true, true, true, true);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_36, 1236.376f, -1312.593f, 75.8938f, 1.75f, -1, 0.25f, 0, 40000f);
			break;
		case 19:
			if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_529))
			{
				TASK::TASK_RIDE_TRAIN(iLocal_36, iLocal_575, iLocal_529, 0);
			}
			break;
		case 20:
			if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_529) && !PED::_IS_PED_USING_SCENARIO_POINT(iLocal_36, iLocal_529))
			{
				TASK::_TASK_USE_SCENARIO_POINT(iLocal_36, iLocal_529, 0, 0, false, true, 0, false, -1f, false);
			}
			break;
		case 17:
			if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_529) && !PED::_IS_PED_USING_SCENARIO_POINT(iLocal_36, iLocal_529))
			{
				TASK::_TASK_USE_SCENARIO_POINT(iLocal_36, iLocal_529, 0, 0, false, true, 0, false, -1f, false);
			}
			__LIB_13__::func_11(iLocal_36);
			break;
	}
}

char* func_331(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BNP2_RESTART_1";
		case 1:
			return "BNP2_RESTART_2";
		case 2:
			return "BNP2_RESTART_3";
		case 3:
			return "BNP2_RESTART_4";
		default:
			break;
	}
	return "";
}

bool func_332()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_58[iVar0 /*20*/]))
		{
			if (iVar0 == 0)
			{
				iVar1 = iLocal_99;
			}
			else
			{
				iVar1 = joaat("CS_IANGRAY");
			}
			Local_58[iVar0 /*20*/] = __LIB_8__::func_931(iVar1, Local_58[iVar0 /*20*/].f_3, Local_58[iVar0 /*20*/].f_15, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			ENTITY::FREEZE_ENTITY_POSITION(Local_58[iVar0 /*20*/], true);
			return false;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_58[iVar0 /*20*/].f_1))
		{
			Local_58[iVar0 /*20*/].f_1 = __LIB_8__::func_931(joaat("A_C_HORSE_MORGAN_BAY"), Local_58[iVar0 /*20*/].f_9, Local_58[iVar0 /*20*/].f_16, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			return false;
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_58[iVar0 /*20*/].f_1))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_58[iVar0 /*20*/].f_1, true);
			if (!__LIB_0__::func_163(Local_58[iVar0 /*20*/].f_1, 1647992574))
			{
				__LIB_9__::func_799(Local_58[iVar0 /*20*/].f_1, Local_58[iVar0 /*20*/].f_9, 3f, 1);
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(Local_58[iVar0 /*20*/].f_1))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_58[iVar0 /*20*/].f_1, true, false);
				}
			}
		}
		iVar0++;
	}
	return true;
}

bool func_333(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_20))
	{
		iLocal_20 = __LIB_8__::func_931(iLocal_22, vLocal_23, fLocal_32, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		return false;
	}
	if (iLocal_15 < 13)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_288))
		{
			iLocal_288 = OBJECT::CREATE_OBJECT(iLocal_277, 1241.571f, -1293.492f, 75.0472f, true, true, false, false, true);
			return false;
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_288))
	{
		iLocal_288 = OBJECT::CREATE_OBJECT(iLocal_279, vLocal_450, true, true, false, false, true);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_20))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(iLocal_20))
		{
			return false;
		}
		func_676(&iLocal_20, vLocal_23, fLocal_32, 1);
		PED::_SET_PED_BODY_COMPONENT(iLocal_20, 1420672520);
		PED::_UPDATE_PED_VARIATION(iLocal_20, false, true, true, true, false);
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_20, 512, true);
		__LIB_12__::func_875(uParam0, iLocal_20, "BEAU_GRAY", 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_20, iLocal_35);
		PED::SET_RAGDOLL_BLOCKING_FLAGS(iLocal_20, 262144);
		AUDIO::STOP_PED_SPEAKING(iLocal_20, true);
		__LIB_7__::func_904(&iLocal_20, 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_20, 413, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_20, 330, true);
	}
	return true;
}

bool func_334(var uParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	vector3 vVar1;
	bVar0 = true;
	vVar1 = { vLocal_441 };
	switch (iParam1)
	{
		case 0:
			vVar1 = { vLocal_441 };
			break;
		case 1:
			vVar1 = { vLocal_447 };
			break;
		case 2:
			vVar1 = { vLocal_444 };
			break;
		case 3:
			vVar1 = { VEHICLE::_GET_NEAREST_TRAIN_TRACK_POSITION(vLocal_453) };
			break;
		case 4:
			vVar1 = { vLocal_450 };
			break;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_574))
	{
		iLocal_574 = VEHICLE::_CREATE_MISSION_TRAIN(1495948496, vVar1, true, bParam2, true, true);
		ENTITY::_0x6C31B06E91518269(iLocal_574, 1);
		return false;
	}
	else if (!ENTITY::IS_ENTITY_DEAD(iLocal_574))
	{
		VEHICLE::SET_MISSION_TRAIN_COORDS(iLocal_574, vVar1);
		VEHICLE::_0xA72B1BF3857B94D7(iLocal_574, 1);
		VEHICLE::SET_TRAIN_SPEED(iLocal_574, 0f);
		VEHICLE::SET_TRAIN_CRUISE_SPEED(iLocal_574, 0f);
		VEHICLE::SET_VEHICLE_HANDBRAKE(iLocal_574, false);
	}
	if (!VEHICLE::_0xBD3C4A2ED509205E(iLocal_574))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_577))
	{
		func_706(&iLocal_577, 0);
		VEHICLE::_0xA72B1BF3857B94D7(iLocal_577, 1);
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_575))
	{
		if (func_706(&iLocal_575, 3))
		{
			ENTITY::_0x6C31B06E91518269(iLocal_575, 1);
		}
		bVar0 = false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_578))
	{
		func_706(&iLocal_578, 1);
		bVar0 = false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_576))
	{
		if (func_706(&iLocal_576, 2))
		{
			ENTITY::_0x6C31B06E91518269(iLocal_576, 1);
		}
		bVar0 = false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_579))
	{
		if (func_706(&iLocal_579, 4))
		{
			ENTITY::_0x6C31B06E91518269(iLocal_579, 1);
		}
		bVar0 = false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_580))
	{
		if (func_706(&iLocal_580, 5))
		{
			ENTITY::_0x6C31B06E91518269(iLocal_580, 1);
		}
		bVar0 = false;
	}
	if (!func_707())
	{
		bVar0 = false;
	}
	if (!ENTITY::_0xC2E71D7E0A7B4C89(iLocal_575))
	{
		return false;
	}
	if (!ENTITY::_0xC2E71D7E0A7B4C89(iLocal_576))
	{
		return false;
	}
	if (!ENTITY::_0xC2E71D7E0A7B4C89(iLocal_579))
	{
		return false;
	}
	if (!ENTITY::_0xC2E71D7E0A7B4C89(iLocal_580))
	{
		return false;
	}
	if (!AICOVERPOINT::_0xC276FE69DDA22BAD(uLocal_456))
	{
		uLocal_456 = TASK::_0x59872EA4CBD11C56(iLocal_575, -1f, -6.88f, 1.05f, (ENTITY::GET_ENTITY_HEADING(iLocal_575) + 150f), 1, 2, 0, 1);
		return false;
	}
	if (!bVar0)
	{
		return false;
	}
	VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_577, false);
	VEHICLE::_0xA72B1BF3857B94D7(iLocal_574, 1);
	return true;
}

bool func_335()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_576) && !ENTITY::IS_ENTITY_DEAD(iLocal_575))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Local_881[iVar0 /*11*/]))
			{
				if (iVar0 < 3)
				{
					Local_881[iVar0 /*11*/] = __LIB_8__::func_931(Local_881[iVar0 /*11*/].f_8, 1217.102f, -1286.955f, 75.9379f, Local_881[iVar0 /*11*/].f_7, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				}
				else
				{
					Local_881[iVar0 /*11*/] = __LIB_8__::func_931(Local_881[iVar0 /*11*/].f_8, 1217.102f, -1286.955f, 75.9379f, Local_881[iVar0 /*11*/].f_7, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				}
				return false;
			}
		}
		else
		{
			return false;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_881[iVar0 /*11*/]))
		{
			func_676(&(Local_881[iVar0 /*11*/]), 1217.102f, -1286.955f, 75.9379f, Local_881[iVar0 /*11*/].f_7, 0);
			PED::SET_PED_CONFIG_FLAG(Local_881[iVar0 /*11*/], 162, false);
		}
		iVar0++;
	}
	return true;
}

bool func_336(var uParam0)
{
	__LIB_4__::func_419(1, 0);
	__LIB_4__::func_419(2, 0);
	__LIB_4__::func_932(31, 0);
	__LIB_4__::func_932(30, 0);
	func_564(31, 0);
	func_564(30, 0);
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_379))
	{
		func_708(&iLocal_379, 72, 105);
		return false;
	}
	else
	{
		func_676(&iLocal_379, ENTITY::GET_ENTITY_COORDS(iLocal_379, true, false), ENTITY::GET_ENTITY_HEADING(iLocal_379), 0);
		__LIB_12__::func_875(uParam0, iLocal_379, "RHO_STATWRK", 0);
	}
	return true;
}

void func_337(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_709(iParam0, iVar0);
		iVar0++;
	}
}

bool func_338(var uParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_577))
	{
		vVar2 = { -0.35f, -4.25f, 1.2f };
		vVar5 = { vVar2 };
		vVar8 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_577, vVar2) };
		vVar5.f_2 = 2.15f;
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_537))
		{
			iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_577, -1);
			if (iVar0 != 0)
			{
				iLocal_537 = iVar0;
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_537))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_537, true, false);
				}
				bLocal_538 = true;
			}
			else
			{
				iLocal_537 = __LIB_8__::func_931(iLocal_540, vVar8, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				bLocal_539 = true;
			}
			return false;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_537))
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_537))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_537, true, false);
			}
			__LIB_13__::func_12(iLocal_537, 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_537, true);
			ENTITY::_SET_ENTITY_SOMETHING(iLocal_537, true);
			WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_537, true, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_537, joaat("REL_PLAYER_ALLY"));
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_537, false);
			__LIB_12__::func_875(uParam0, iLocal_537, "Train_Conductor1", 0);
			if (bLocal_538)
			{
				return true;
			}
			else if (bLocal_539)
			{
				iVar1 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(vVar8, -1774425579, 1f, 1, false);
				if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar1))
				{
					if (!__LIB_0__::func_163(iLocal_537, -76381094))
					{
						TASK::_TASK_USE_SCENARIO_POINT(iLocal_537, iVar1, 0, 0, false, true, 0, false, -1f, false);
					}
					else
					{
						return true;
					}
				}
				else if (!__LIB_0__::func_163(iLocal_537, 993674639))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_537, iLocal_577, 0, vVar5, 0f, 0f, 0f, true, false, false, false, 2, true, false, false);
					__LIB_3__::func_932(iLocal_537, ENTITY::GET_ENTITY_COORDS(iLocal_577, true, false));
					__LIB_1__::func_473(iLocal_537, -1774425579, 0, 0, 0, -1082130432 /* Float: -1f */);
				}
				else
				{
					return true;
				}
			}
		}
	}
	return false;
}

char* func_339(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PL_BASE";
		case 1:
			return "PL_GREET_LEFT";
		case 2:
			return "PL_GREET_RIGHT";
		case 3:
			return "PL_GREET_FRONT";
		case 4:
			return "PL_EXIT";
		case 5:
			return "pbl_Idle01";
		case 6:
			return "pbl_Idle02";
		case 7:
			return "pbl_Idle03";
		case 8:
			return "pbl_Gunfire_Exit";
		case 9:
			return "pbl_Enter_Front_P1";
		case 10:
			return "pbl_Enter_Front_P2";
		case 11:
			return "pbl_Enter_Front_P2A1";
		case 12:
			return "pbl_Enter_Left_P1";
		case 13:
			return "pbl_Enter_Left_P2";
		case 14:
			return "pbl_Enter_Left_P2A1";
		case 15:
			return "pbl_Enter_Right_P1";
		case 16:
			return "pbl_Enter_Right_P2";
		case 17:
			return "pbl_Enter_Right_P2A1";
		case 18:
			return "pbl_Taunt_01";
		case 19:
			return "pbl_Taunt_02";
		case 20:
			return "pbl_Taunt_03";
		case 21:
			return "pbl_Taunt_04";
		case 22:
			return "pbl_Taunt_05";
		case 23:
			return "pbl_action";
		case 24:
			return "pbl_Idle01";
		case 25:
			return "pbl_Idle02";
		case 26:
			return "pbl_Idle03";
		case 27:
			return "pbl_action";
		case 28:
			return "pbl_PutIn";
		case 29:
			return "pbl_TakeOut";
		case 31:
			return "pbl_B_Dialogue";
		case 32:
			return "pbl_P_Dialogue";
		case 33:
			return "pbl_Fight_Loop";
		case 34:
			return "pbl_Player_Wins";
		case 35:
			return "pbl_Get_On_Right";
		case 36:
			return "pbl_Callover_Front";
		case 37:
			return "pbl_Callover_Back";
		case 38:
			return "pbl_Cower_Enter";
		case 39:
			return "pbl_Cower_React01";
		case 40:
			return "pbl_Cower_React02";
		case 41:
			return "pbl_Cower_React03";
		case 42:
			return "pbl_Cower_Loop";
		case 44:
			return "pbl_Concern_Loop";
		case 45:
			return "pbl_Concern_Exit";
		case 43:
			return "pbl_IG8";
		case 46:
			return "pbl_Seated_Idle01";
		case 47:
			return "pl_leadin";
		case 48:
			return "pbl_action";
		case 49:
			return "pl_loop_base";
		case 50:
			return "pl_leadin_front";
		case 51:
			return "pl_leadin_back";
		default:
			break;
	}
	return "";
}

bool func_340(int iParam0, int iParam1, char* sParam2)
{
	if (!Local_811[iParam0 /*5*/].f_3)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_811[iParam0 /*5*/]))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_811[iParam0 /*5*/], true, false))
			{
				Local_811[iParam0 /*5*/].f_3 = 1;
				return Local_811[iParam0 /*5*/].f_3;
			}
		}
		else
		{
			if (MISC::IS_STRING_NULL(sParam2))
			{
				Local_811[iParam0 /*5*/] = ANIMSCENE::_CREATE_ANIM_SCENE(Local_811[iParam0 /*5*/].f_1, iParam1, Local_811[iParam0 /*5*/].f_2, false, true);
			}
			else
			{
				Local_811[iParam0 /*5*/].f_2 = sParam2;
				Local_811[iParam0 /*5*/] = ANIMSCENE::_CREATE_ANIM_SCENE(Local_811[iParam0 /*5*/].f_1, iParam1, sParam2, false, true);
			}
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_811[iParam0 /*5*/]))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(Local_811[iParam0 /*5*/]);
			}
		}
	}
	return Local_811[iParam0 /*5*/].f_3;
}

void func_342(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_58[iVar0 /*20*/]))
		{
			if (iVar0 == 0)
			{
				__LIB_12__::func_875(uParam0, Local_58[0 /*20*/], "SCOTT_GRAY", 0);
			}
			else
			{
				__LIB_12__::func_875(uParam0, Local_58[1 /*20*/], "IAIN_GRAY", 0);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_58[iVar0 /*20*/], true);
			PED::SET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(Local_58[iVar0 /*20*/], iLocal_100);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_58[iVar0 /*20*/], iLocal_100);
			PED::SET_PED_CONFIG_FLAG(Local_58[iVar0 /*20*/], 6, true);
			PED::SET_PED_CONFIG_FLAG(Local_58[iVar0 /*20*/], 186, false);
			__LIB_8__::func_776(Local_58[iVar0 /*20*/], 95);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_58[iVar0 /*20*/], 93, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_58[iVar0 /*20*/], 46, true);
			PED::SET_PED_FLEE_ATTRIBUTES(Local_58[iVar0 /*20*/], 512, true);
			PED::SET_PED_COMBAT_ABILITY(Local_58[iVar0 /*20*/], 0);
			func_648(bParam2);
			ENTITY::FREEZE_ENTITY_POSITION(Local_58[iVar0 /*20*/], false);
			WEAPON::REMOVE_ALL_PED_WEAPONS(Local_58[iVar0 /*20*/], true, true);
			if (!Local_58[iVar0 /*20*/].f_19)
			{
				PED::_0xFC3DB99C8144CD81(Local_58[iVar0 /*20*/], iLocal_467, 0, false, 0);
			}
			PED::SET_PED_CONFIG_FLAG(Local_58[iVar0 /*20*/], 103, true);
			WEAPON::SET_CURRENT_PED_WEAPON(Local_58[iVar0 /*20*/], joaat("WEAPON_UNARMED"), false, 0, false, false);
			PED::SET_PED_CAN_BE_TARGETTED(Local_58[iVar0 /*20*/], true);
			ENTITY::_0x18FF3110CF47115D(Local_58[iVar0 /*20*/], 1, 0);
			ENTITY::_0x18FF3110CF47115D(Local_58[iVar0 /*20*/], 2, 0);
			if (!bParam1)
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_58[iVar0 /*20*/], Local_58[iVar0 /*20*/].f_6, Local_58[iVar0 /*20*/].f_15, true, false, true);
			}
		}
		iVar0++;
	}
}

bool func_343(int iParam0, int iParam1, char* sParam2)
{
	char* sVar0;
	if (!Local_811[iParam0 /*5*/].f_3)
	{
		if (func_340(iParam0, iParam1, sParam2))
		{
			func_714(iParam0);
			Local_811[iParam0 /*5*/].f_3 = 1;
		}
	}
	if (MISC::IS_STRING_NULL(sParam2))
	{
		sVar0 = Local_811[iParam0 /*5*/].f_2;
	}
	else
	{
		sVar0 = sParam2;
	}
	if (Local_811[iParam0 /*5*/].f_3)
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_811[iParam0 /*5*/], false) && ANIMSCENE::_0x1F0E401031E20146(Local_811[iParam0 /*5*/], sVar0))
		{
			return true;
		}
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_811[iParam0 /*5*/]) && ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_811[iParam0 /*5*/], false))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(Local_811[iParam0 /*5*/]);
			Local_811[iParam0 /*5*/].f_3 = 0;
			Local_811[iParam0 /*5*/].f_2 = "";
			return false;
		}
		if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_811[iParam0 /*5*/], sVar0))
		{
			func_714(iParam0);
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_811[iParam0 /*5*/], sVar0);
		}
		if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_811[iParam0 /*5*/], sVar0))
		{
			ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_811[iParam0 /*5*/], sVar0, true);
			func_714(iParam0);
			if (iParam0 == 5)
			{
				ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(Local_811[iParam0 /*5*/], Local_104[iLocal_942 /*23*/].f_1, 0);
			}
			if (iParam0 == 2)
			{
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_811[iParam0 /*5*/], ENTITY::GET_ENTITY_COORDS(iLocal_1011, true, false), ENTITY::GET_ENTITY_ROTATION(iLocal_1011, 2), 2);
				ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY_PRESERVING_LOCATION(Local_811[iParam0 /*5*/], iLocal_1011, -1);
			}
			if (iParam0 == 6)
			{
				ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(Local_811[iParam0 /*5*/], iLocal_575, -1);
			}
			if (iParam0 == 7)
			{
				ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(Local_811[iParam0 /*5*/], iLocal_575, -1);
			}
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_811[iParam0 /*5*/], false))
			{
				ANIMSCENE::START_ANIM_SCENE(Local_811[iParam0 /*5*/]);
			}
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
		{
			ANIMSCENE::START_ANIM_SCENE(Local_811[iParam0 /*5*/]);
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_811[iParam0 /*5*/], false))
			{
				return true;
			}
		}
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_811[iParam0 /*5*/], false) && ANIMSCENE::_0x1F0E401031E20146(Local_811[iParam0 /*5*/], sVar0))
		{
			return true;
		}
	}
	return false;
}

void func_344()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		__LIB_0__::func_325(&(Local_58[iVar0 /*20*/].f_2));
		__LIB_2__::func_788(&(Local_58[iVar0 /*20*/]), 1, 1, 1);
		iVar0++;
	}
}

void func_345(int iParam0)
{
	if (iParam0 != iLocal_33)
	{
		iLocal_33 = iParam0;
	}
	else
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_20))
	{
		if (!PED::IS_PED_USING_ANY_SCENARIO(iLocal_20))
		{
			if (!iLocal_33 == 8 && !iLocal_33 == 11)
			{
				TASK::CLEAR_PED_TASKS(iLocal_20, true, false);
			}
		}
		else
		{
			TASK::CLEAR_PED_SECONDARY_TASK(iLocal_20);
		}
		switch (iLocal_33)
		{
			case 0:
				break;
			case 1:
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_20, iLocal_36, -1, -1f, -1f, -1f);
				break;
			case 3:
				TASK::OPEN_SEQUENCE_TASK(&iLocal_34);
				TASK::TASK_PAUSE(0, 1000);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1234.343f, -1297.911f, 75.9041f, 1.25f, 40000, 0.25f, 0, 40000f);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_34);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_20, iLocal_34);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_34);
				break;
			case 4:
				break;
			case 5:
				break;
			case 6:
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_20, 17, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_20, 5, false);
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_20);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_20, 1236.376f, -1312.593f, 75.8938f, 2f, -1, 0.25f, 0, 40000f);
				break;
			case 7:
				TASK::CLEAR_PED_SECONDARY_TASK(iLocal_20);
				if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_533))
				{
					TASK::TASK_RIDE_TRAIN(iLocal_20, iLocal_575, iLocal_533, 0);
				}
				__LIB_14__::func_163(iLocal_20, Global_35);
				break;
			case 8:
				if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_533))
				{
					TASK::_TASK_USE_SCENARIO_POINT(iLocal_20, iLocal_533, 0, 0, false, true, 0, false, -1f, false);
				}
				__LIB_14__::func_163(iLocal_20, iLocal_36);
				break;
			case 9:
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_20, Global_35, -1, -1f, -1f, -1f);
				break;
			case 10:
				if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_533) && !PED::IS_PED_USING_ANY_SCENARIO(iLocal_20))
				{
					TASK::_TASK_USE_SCENARIO_POINT(iLocal_20, iLocal_533, 0, 0, false, true, 0, false, -1f, false);
				}
				break;
			case 11:
				TASK::CLEAR_PED_SECONDARY_TASK(iLocal_20);
				if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_533) && !PED::IS_PED_USING_ANY_SCENARIO(iLocal_20))
				{
					TASK::_TASK_USE_SCENARIO_POINT(iLocal_20, iLocal_533, 0, 0, false, true, 0, false, -1f, false);
				}
				break;
			case 12:
				if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_533) && !PED::IS_PED_USING_ANY_SCENARIO(iLocal_20))
				{
					TASK::_TASK_USE_SCENARIO_POINT(iLocal_20, iLocal_533, 0, 0, false, true, 0, false, -1f, false);
				}
				break;
		}
	}
}

void func_346()
{
	__LIB_2__::func_919(iLocal_288, 1, 1);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_288))
	{
		ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_288, iLocal_575, 0, vLocal_289, vLocal_292, true, false, false, false, 2, true, false, false);
	}
	PED::_0x3A50753042B6891B(Global_35, "s_penelopePurse01x_PH_L_HAND");
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_280))
	{
		ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_280, iLocal_575, 0, vLocal_282, vLocal_285, true, false, false, false, 2, true, false, false);
	}
}

void func_347(float fParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_574) && !ENTITY::IS_ENTITY_DEAD(iLocal_574))
	{
		VEHICLE::_0xA72B1BF3857B94D7(iLocal_574, 1);
		VEHICLE::SET_TRAIN_CRUISE_SPEED(iLocal_574, fParam0);
		VEHICLE::_0x787E43477746876F(iLocal_574);
		VEHICLE::SET_VEHICLE_HANDBRAKE(iLocal_574, false);
		VEHICLE::_0xDD100CE1EBBF37E3(iLocal_574, 0);
		VEHICLE::_0x4182C037AA1F0091(iLocal_574, 0);
		VEHICLE::SET_VEHICLE_HANDBRAKE(iLocal_574, false);
	}
}

void func_348(int iParam0)
{
	if (iParam0 != iLocal_1132)
	{
		iLocal_1132 = iParam0;
		__LIB_5__::func_107(&uLocal_1129);
	}
}

void func_349()
{
	if (iLocal_15 == 4)
	{
		if (!Local_811[11 /*5*/].f_4)
		{
			if (Local_811[4 /*5*/].f_4 && !bLocal_1133)
			{
				if (func_343(11, 0, func_339(48)))
				{
					Local_811[11 /*5*/].f_4 = 1;
				}
			}
		}
		else if (!bLocal_1133)
		{
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_811[11 /*5*/]) || ANIMSCENE::_0x8D81E7824B7753F7(Local_811[11 /*5*/], "S_Base", 1))
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_811[11 /*5*/]))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_811[11 /*5*/], "Internal_Loop", true, false);
				}
				bLocal_1133 = true;
				ENTITY::SET_ENTITY_VISIBLE(iLocal_280, true);
			}
		}
	}
	switch (iLocal_1132)
	{
		case 0:
			if (Local_811[4 /*5*/].f_4)
			{
				func_348(1);
				__LIB_5__::func_107(&uLocal_568);
				PED::SET_PED_CAN_BE_TARGETTED(Local_58[0 /*20*/], false);
				ENTITY::SET_ENTITY_INVINCIBLE(Local_58[0 /*20*/], true);
				ENTITY::SET_ENTITY_INVINCIBLE(iLocal_20, true);
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_20, false);
				ENTITY::SET_ENTITY_PROOFS(Local_58[0 /*20*/], 16, false);
			}
			else if (func_217(4096))
			{
				Local_811[4 /*5*/].f_4 = func_343(4, 0, func_339(27));
			}
			break;
		case 1:
			if (bLocal_1133)
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_811[4 /*5*/], "Internal_Loop", true, false);
				__LIB_2__::func_608(&uLocal_568);
				func_348(2);
			}
			break;
		case 2:
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_811[4 /*5*/], false))
			{
				if (ANIMSCENE::_0x8D81E7824B7753F7(Local_811[4 /*5*/], "s_Action", 1))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_811[4 /*5*/], "CS_PenelopeBraithwaite", iLocal_36, 0);
					if (ANIMSCENE::_0x005E6F28DD7ED58D(Local_811[4 /*5*/], "cs_scottgray"))
					{
						func_652(2, 0);
						func_652(2, 1);
						PED::SET_PED_CAN_BE_TARGETTED(Local_58[0 /*20*/], true);
						ENTITY::SET_ENTITY_INVINCIBLE(Local_58[0 /*20*/], false);
						ENTITY::SET_ENTITY_PROOFS(Local_58[0 /*20*/], 0, false);
						ENTITY::SET_ENTITY_INVINCIBLE(iLocal_20, false);
						PED::SET_PED_CAN_BE_TARGETTED(iLocal_20, true);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_35, iLocal_100);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_100, iLocal_35);
					}
				}
				if (ANIMSCENE::_0x005E6F28DD7ED58D(Local_811[4 /*5*/], "CS_BeauGray") || func_459(4, 27, 0.925f))
				{
					func_348(4);
				}
			}
			break;
		case 4:
			if (func_343(6, 0, func_339(31)))
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_811[6 /*5*/], "Internal_Loop", true, false);
				func_348(5);
			}
			break;
		case 5:
			if (func_459(6, 31, 0.478f))
			{
				func_348(6);
			}
			if (func_716())
			{
				func_343(6, 0, func_339(34));
				func_348(8);
			}
			break;
		case 6:
			if (func_343(6, 0, func_339(32)))
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_811[6 /*5*/], "Internal_Loop", true, false);
				func_348(7);
			}
			if (func_716())
			{
				func_343(6, 0, func_339(34));
				func_348(8);
			}
			break;
		case 7:
			if (func_459(6, 32, 0.2844f))
			{
				func_348(8);
			}
			if (func_716())
			{
				func_348(8);
			}
			break;
		case 15:
			if (func_343(6, 0, func_339(33)))
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_811[6 /*5*/], "Internal_Loop", false, false);
				func_348(16);
			}
			break;
		case 16:
			if (func_716())
			{
				func_348(8);
			}
			break;
		case 8:
			if (func_343(6, 0, func_339(34)))
			{
				func_348(9);
			}
			break;
		case 9:
			if (func_459(6, 34, 0.435f))
			{
				func_348(10);
			}
			break;
		case 10:
			if (func_343(6, 0, func_339(35)))
			{
				func_348(11);
			}
			break;
		case 11:
			func_352(1);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_811[6 /*5*/], "Internal_Loop", false, false);
			if (func_717())
			{
				if (__LIB_3__::func_547(iLocal_20, Global_35, 0f) == 0)
				{
					func_348(12);
				}
				else
				{
					func_348(13);
				}
			}
			break;
		case 12:
			if (func_343(6, 0, func_339(36)))
			{
				func_348(14);
			}
			break;
		case 13:
			if (func_343(6, 0, func_339(37)))
			{
				func_348(14);
			}
			break;
		case 17:
			if (func_343(6, 0, func_339(38)))
			{
				func_348(18);
			}
			break;
		case 18:
			if (func_459(6, 38, 1065017672 /* Float: 0.98f */))
			{
				func_348(19);
			}
			break;
		case 19:
			if (func_343(6, 0, func_339(39)))
			{
				func_348(20);
			}
			break;
		case 20:
			if (func_459(6, 39, 1065017672 /* Float: 0.98f */))
			{
				func_348(21);
			}
			break;
		case 21:
			if (func_343(6, 0, func_339(40)))
			{
				func_348(22);
			}
			break;
		case 22:
			if (func_459(6, 40, 1065017672 /* Float: 0.98f */))
			{
				func_348(23);
			}
			break;
		case 23:
			if (func_343(6, 0, func_339(41)))
			{
				func_348(24);
			}
			break;
		case 24:
			if (func_459(6, 41, 1065017672 /* Float: 0.98f */))
			{
				func_348(25);
			}
			break;
		case 25:
			if (func_459(6, 42, 1065017672 /* Float: 0.98f */))
			{
				func_348(26);
			}
			break;
		case 26:
			break;
		case 27:
			if (func_343(6, 0, func_339(43)))
			{
				func_348(28);
			}
			break;
		case 28:
			if (func_217(262144))
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_811[6 /*5*/], "Internal_Loop", true, false);
			}
			if (func_459(6, 43, 1065017672 /* Float: 0.98f */) || ANIMSCENE::_0x8D81E7824B7753F7(Local_811[6 /*5*/], "s_Concern_Loop", 1))
			{
				func_348(29);
			}
			break;
		case 29:
			if (__LIB_9__::func_178(&uLocal_1129) > 1.5f)
			{
				if (func_343(6, 0, func_339(45)))
				{
					func_348(30);
				}
			}
			break;
		case 30:
			if (func_459(6, 45, 1065017672 /* Float: 0.98f */) || ANIMSCENE::_0x8D81E7824B7753F7(Local_811[6 /*5*/], "s_Seated_Loop", 1))
			{
				func_348(31);
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_811[6 /*5*/], "Internal_Loop", false, false);
			}
			break;
		case 31:
			if (func_343(6, 0, func_339(46)))
			{
				func_348(32);
			}
			break;
		case 32:
			break;
	}
}

bool func_350(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar1 = 0;
	iVar2 = 1;
	switch (iParam0)
	{
		case 0:
			iVar1 = 0;
			iLocal_274 = 1;
			break;
		case 1:
			iVar1 = 2;
			iLocal_274 = 2;
			break;
		case 2:
			iVar1 = 3;
			iLocal_274 = 4;
			break;
		case 3:
			iVar1 = 5;
			iLocal_274 = 6;
			break;
	}
	if (iParam0 < 2)
	{
		iVar0 = iVar1;
		while (iVar0 <= iLocal_274)
		{
			iVar3 = iVar0;
			if (!func_719(iVar3, bParam1, iParam2))
			{
				iVar2 = 0;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = iVar1;
		while (iVar0 <= iLocal_274)
		{
			iVar3 = iVar0;
			Local_104[iVar3 /*23*/].f_16 = 1;
			iVar0++;
		}
		iVar2 = 1;
	}
	return iVar2;
}

void func_351(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	switch (iParam1)
	{
		case 0:
			iVar1 = 0;
			iLocal_274 = 2;
			break;
		case 1:
			iVar1 = 2;
			iLocal_274 = 3;
			break;
		case 2:
			iVar1 = 3;
			iLocal_274 = 5;
			break;
		case 3:
			iVar1 = 6;
			iLocal_274 = 6;
			break;
	}
	iVar0 = iVar1;
	while (iVar0 <= (iLocal_274 - 1))
	{
		if (!__LIB_0__::func_255(Local_104[iVar0 /*23*/], 0))
		{
			__LIB_12__::func_875(uParam0, Local_104[iVar0 /*23*/], Local_104[iVar0 /*23*/].f_10, 0);
		}
		iVar0++;
	}
}

void func_352(int iParam0)
{
	if (!func_217(iParam0))
	{
		__LIB_1__::func_683(&iLocal_810, iParam0);
	}
}

bool func_353()
{
	if (!bLocal_1113)
	{
		STREAMING::REQUEST_MODEL(iLocal_397, false);
		STREAMING::REQUEST_MODEL(iLocal_398, false);
		STREAMING::REQUEST_MODEL(iLocal_396, false);
		STREAMING::REQUEST_MODEL(iLocal_399, false);
		bLocal_1113 = true;
	}
	if (((!STREAMING::HAS_MODEL_LOADED(iLocal_397) || !STREAMING::HAS_MODEL_LOADED(iLocal_398)) || !STREAMING::HAS_MODEL_LOADED(iLocal_396)) || !STREAMING::HAS_MODEL_LOADED(iLocal_399))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_395))
	{
		iLocal_395 = func_721(iLocal_397, -1094.346f, -572.3016f, 81.4051f, 320.8231f, 1, 1, 0, 1);
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_394))
	{
		iLocal_394 = VEHICLE::CREATE_VEHICLE(iLocal_398, -1102.072f, -569.8576f, 81.5042f, 325.5251f, true, true, false, false);
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_393))
	{
		iLocal_393 = OBJECT::CREATE_OBJECT(iLocal_396, -1102.072f, -569.8576f, 81.5042f, true, true, false, false, true);
		return false;
	}
	return true;
}

void func_354()
{
	PED::_0x3A50753042B6891B(Global_35, "s_penelopePurse01x_PH_L_HAND");
	func_651();
}

void func_355(int iParam0)
{
	if (func_217(iParam0))
	{
		__LIB_1__::func_681(&iLocal_810, iParam0);
	}
}

bool func_359(var uParam0)
{
	if (!__LIB_0__::func_1(uParam0->f_172, 512))
	{
		if (!func_723(uParam0))
		{
			return false;
		}
		__LIB_0__::func_7(&(Global_1347702[uParam0->f_174 /*49*/].f_12), 128);
		if (__LIB_12__::func_838(uParam0))
		{
			ANIMSCENE::START_ANIM_SCENE(uParam0->f_751);
			__LIB_0__::func_7(&(uParam0->f_172), 512);
		}
		return false;
	}
	__LIB_12__::func_773(0, 1, 1, 1);
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_751) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_751, false))
	{
		__LIB_0__::func_7(&(uParam0->f_172), 1024);
		__LIB_0__::func_8(&(uParam0->f_172), 256);
		return true;
	}
	return false;
}

bool func_362(var uParam0)
{
	if (uParam0->f_176 == 4)
	{
		if (!func_724(uParam0))
		{
			return false;
		}
	}
	return true;
}

int func_368(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	int iVar0;
	__LIB_12__::func_750(uParam4, &uParam0);
	if (__LIB_0__::func_84(uParam4, 2) && !__LIB_0__::func_84(uParam4, 67108864))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SKIP_CUTSCENE"), false);
	}
	if (__LIB_0__::func_81(uParam4) != 1)
	{
		__LIB_12__::func_927(uParam4);
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
					__LIB_8__::func_898(uParam4, 4);
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
				__LIB_8__::func_898(uParam4, 3);
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
				__LIB_5__::func_107(&(uParam4->f_1));
				__LIB_8__::func_898(uParam4, 2);
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
					func_80(&(uParam4->f_1), 0);
				}
				else if (__LIB_1__::func_583(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_348))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_348);
					}
					__LIB_8__::func_898(uParam4, 4);
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
						__LIB_8__::func_898(uParam4, 4);
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
					__LIB_8__::func_898(uParam4, 4);
				}
			}
			else if (!PLAYER::IS_PLAYER_TELEPORT_ACTIVE() || PLAYER::_HAS_PLAYER_TELEPORT_FINISHED(PLAYER::GET_PLAYER_INDEX()))
			{
				if (!DLC::GET_IS_LOADING_SCREEN_ACTIVE())
				{
					MISC::_0xA565FAC215CBC77D();
					__LIB_0__::func_722(1, 0);
					__LIB_13__::func_18(uParam4, &uParam0, uParam5);
					__LIB_8__::func_898(uParam4, 3);
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
				__LIB_8__::func_898(uParam4, 4);
			}
			break;
		case 3:
			func_746(uParam4);
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
					__LIB_5__::func_107(&(uParam4->f_1));
					__LIB_0__::func_88(uParam4, 512);
					__LIB_8__::func_898(uParam4, 4);
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
				__LIB_12__::func_927(uParam4);
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
				__LIB_13__::func_512(uParam4);
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
						__LIB_5__::func_107(&(uParam4->f_1));
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
						__LIB_0__::func_88(uParam4, 512);
						__LIB_12__::func_677(uParam4, 67108864, 1);
						__LIB_8__::func_898(uParam4, 4);
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
				__LIB_13__::func_512(uParam4);
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
						__LIB_8__::func_898(uParam4, 3);
					}
					else if (__LIB_1__::func_583(&(uParam4->f_1)) >= 30f)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_348) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_348))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_348, false);
						}
						__LIB_8__::func_898(uParam4, 3);
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
			__LIB_8__::func_898(uParam4, 4);
			break;
	}
	return 0;
}

bool func_374(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
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
			__LIB_13__::func_163(uParam0, iParam5, bParam6);
		}
		else if (__LIB_0__::func_78(uParam0) > 3)
		{
			if (__LIB_0__::func_81(uParam0) == 0)
			{
				if (!__LIB_12__::func_655(uParam0, 524288))
				{
					__LIB_13__::func_41(uParam0);
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
				__LIB_13__::func_152(uParam0);
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
		func_779(uParam0, iParam5);
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
			__LIB_13__::func_374(uParam0);
			break;
		case 3:
			if (__LIB_12__::func_670(uParam0))
			{
				__LIB_3__::func_155(2);
				__LIB_12__::func_890(uParam0, uParam0->f_912[uParam0->f_1580 /*41*/].f_27, uParam0->f_1241[uParam0->f_1580 /*22*/].f_1, 1065353216 /* Float: 1f */);
				__LIB_5__::func_107(&(uParam0->f_1768));
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
			if (uParam0->f_1581 >= 0 || __LIB_9__::func_178(&(uParam0->f_1768)) >= 15f)
			{
				if (__LIB_12__::func_979(uParam0, iParam5))
				{
					if (__LIB_12__::func_699(uParam0))
					{
						uParam0->f_1581 = __LIB_12__::func_754(uParam0);
						__LIB_5__::func_107(&(uParam0->f_1768));
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

void func_376()
{
	if (STREAMING::_0x8A3945405B31048F() > 0.7f)
	{
		__LIB_5__::func_521(0.7f);
	}
}

void func_377(var uParam0)
{
	if (!bLocal_571)
	{
		if (__LIB_0__::func_181())
		{
			__LIB_12__::func_875(uParam0, Global_35, "JOHN", 1);
		}
		else
		{
			__LIB_12__::func_875(uParam0, Global_35, "ARTHUR", 1);
		}
		bLocal_571 = true;
	}
}

void func_378()
{
	if (!func_217(32768))
	{
		if (iLocal_15 >= 5)
		{
			if (PED::IS_PED_IN_ANY_TRAIN(Global_35))
			{
				func_352(32768);
			}
		}
	}
}

void func_379()
{
	func_796();
	switch (iLocal_48)
	{
		case 0:
			break;
		case 1:
			if (!__LIB_0__::func_163(iLocal_36, 1647992574) || !PED::IS_PED_USING_ANY_SCENARIO(iLocal_36))
			{
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_36, vLocal_41, 3f, 0, true, true, true, false);
			}
			break;
		case 4:
			if (__LIB_0__::func_163(iLocal_36, 1647992574))
			{
				TASK::CLEAR_PED_TASKS(iLocal_36, true, false);
			}
			if (!__LIB_0__::func_71(Global_35))
			{
				if (__LIB_0__::func_71(iLocal_36))
				{
					func_329(9);
				}
			}
			else if (!__LIB_0__::func_71(iLocal_36))
			{
				func_329(10);
			}
			break;
		case 5:
			if (__LIB_0__::func_266(iLocal_36, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_1011, -0.5f, -0.25f, 0f), 1.5f, 1, 1))
			{
				iLocal_48 = 6;
			}
			if (ENTITY::IS_ENTITY_IN_WATER(iLocal_1011))
			{
				func_329(10);
			}
			break;
		case 10:
			if (!__LIB_0__::func_71(Global_35))
			{
				if (__LIB_0__::func_71(iLocal_36))
				{
					if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iLocal_1011) < 0.2f)
					{
						func_329(9);
					}
				}
				else
				{
					func_329(4);
				}
			}
			break;
		case 9:
			if (__LIB_0__::func_71(Global_35))
			{
				if (__LIB_0__::func_71(iLocal_36))
				{
					func_329(4);
				}
				else
				{
					func_329(10);
				}
			}
			else if (!__LIB_0__::func_71(iLocal_36))
			{
				func_329(4);
			}
			break;
		case 7:
			if ((__LIB_0__::func_266(iLocal_36, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_1011, -0.5f, -0.3f, 0f), 1.5f, 1, 1) && !__LIB_0__::func_394(iLocal_36, iLocal_1011, 0)) && !__LIB_0__::func_163(iLocal_36, 713668775))
			{
				iLocal_48 = 8;
			}
			if (ENTITY::IS_ENTITY_IN_WATER(iLocal_1011))
			{
				func_329(4);
			}
			break;
		case 11:
			break;
		case 15:
			if (__LIB_0__::func_163(iLocal_36, 658540077) && TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_36, 0))
			{
				TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_36, 1.2f, 0, -1082130432 /* Float: -1f */, 0);
			}
			break;
		case 16:
			break;
		case 18:
			if (__LIB_0__::func_266(iLocal_36, 1236.376f, -1312.593f, 75.8938f, 2f, 1, 1))
			{
				func_329(19);
			}
			break;
		case 19:
			func_346();
			fLocal_573 = (fLocal_573 + MISC::GET_FRAME_TIME());
			if (!__LIB_0__::func_163(iLocal_36, 423442609))
			{
				if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_529))
				{
					TASK::CLEAR_PED_TASKS(iLocal_36, true, false);
					TASK::TASK_RIDE_TRAIN(iLocal_36, iLocal_575, iLocal_529, 0);
				}
			}
			if ((fLocal_573 > 11f && TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_529)) && !PED::_IS_PED_USING_SCENARIO_POINT(iLocal_36, iLocal_529))
			{
				func_329(20);
			}
			break;
		case 20:
			break;
		case 17:
			if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_529))
			{
				if (!__LIB_0__::func_163(iLocal_36, -76381094))
				{
					TASK::_TASK_USE_SCENARIO_POINT(iLocal_36, iLocal_529, 0, 0, false, true, joaat("PROP_VEHICHLE_SEAT_PASSENGER_TRAIN_TG"), false, -1f, false);
				}
			}
			break;
	}
}

void func_380()
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_20))
	{
		switch (iLocal_33)
		{
			case 0:
				break;
			case 1:
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				if ((!func_798() && !PED::IS_PED_RAGDOLL(iLocal_20)) && !TASK::IS_PED_GETTING_UP(iLocal_20))
				{
					func_345(6);
				}
				break;
			case 6:
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_20, 5, false);
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_20);
				if (!__LIB_0__::func_163(iLocal_20, 713668775))
				{
					TASK::CLEAR_PED_TASKS(iLocal_20, true, false);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_20, 1236.376f, -1312.593f, 75.8938f, 2f, -1, 0.25f, 0, 40000f);
				}
				if (__LIB_0__::func_266(iLocal_20, 1236.376f, -1312.593f, 75.8938f, 2f, 1, 1))
				{
					func_345(7);
				}
				break;
			case 7:
				fLocal_572 = (fLocal_572 + MISC::GET_FRAME_TIME());
				if (!__LIB_0__::func_163(iLocal_20, 423442609))
				{
					if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_533))
					{
						TASK::CLEAR_PED_TASKS(iLocal_20, true, false);
						TASK::TASK_RIDE_TRAIN(iLocal_20, iLocal_575, iLocal_533, 0);
					}
				}
				if ((fLocal_572 > 12f && TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_533)) && !PED::IS_PED_USING_ANY_SCENARIO(iLocal_20))
				{
					func_345(8);
				}
				break;
			case 8:
				break;
			case 9:
				break;
			case 12:
				break;
		}
	}
}

void func_381()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_58[iVar0 /*20*/]))
		{
			if (PED::_IS_PED_HOGTIED(Local_58[iVar0 /*20*/]))
			{
				__LIB_0__::func_325(&(Local_58[iVar0 /*20*/].f_2));
			}
			switch (Local_58[iVar0 /*20*/].f_18)
			{
				case 0:
					break;
				case 4:
				case 5:
					PED::SET_PED_CAN_BE_TARGETTED(Local_58[iVar0 /*20*/], false);
					break;
				case 6:
					if ((__LIB_3__::func_528(Local_58[iVar0 /*20*/], Global_35) || __LIB_3__::func_504(Global_35)) || WEAPON::_0x9E2D5D6BC97A5F1E(Global_35, joaat("WEAPON_UNARMED"), 200))
					{
						func_652(2, iVar0);
					}
					break;
				case 7:
					if (!__LIB_0__::func_899(&uLocal_559))
					{
						__LIB_5__::func_107(&uLocal_559);
					}
					else if (__LIB_9__::func_401(&uLocal_559) > 4500)
					{
						func_652(8, iVar0);
						__LIB_2__::func_608(&uLocal_559);
					}
					break;
				case 2:
					PED::SET_PED_CAN_BE_TARGETTED(Local_58[iVar0 /*20*/], true);
					break;
				case 9:
					PED::SET_PED_CAN_BE_TARGETTED(Local_58[iVar0 /*20*/], true);
					break;
				case 8:
					if (ENTITY::IS_ENTITY_DEAD(Local_58[iVar0 /*20*/].f_1))
					{
						if (!__LIB_0__::func_163(Local_58[iVar0 /*20*/], 518218985))
						{
							TASK::CLEAR_PED_TASKS(Local_58[iVar0 /*20*/], true, false);
							TASK::TASK_SMART_FLEE_PED(Local_58[iVar0 /*20*/], Global_35, 1000f, -1, 256, 1077936128 /* Float: 3f */, 0);
							__LIB_2__::func_788(&(Local_58[iVar0 /*20*/]), 1, 0, 1);
						}
					}
					else if (__LIB_0__::func_163(Local_58[iVar0 /*20*/], 242628503))
					{
						if (TASK::GET_SEQUENCE_PROGRESS(Local_58[iVar0 /*20*/]) > 2)
						{
							__LIB_2__::func_788(&(Local_58[iVar0 /*20*/]), 1, 0, 1);
							__LIB_2__::func_788(&(Local_58[iVar0 /*20*/].f_1), 1, 0, 1);
						}
					}
					break;
			}
		}
		iVar0++;
	}
}

void func_382()
{
	int iVar0;
	if (!func_217(2097152))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_881[iVar0 /*11*/]))
			{
				switch (Local_881[iVar0 /*11*/].f_9)
				{
					case 0:
						func_709(1, iVar0);
						break;
					case 1:
						if (!__LIB_0__::func_163(Local_881[iVar0 /*11*/], -1518311320) && !PED::IS_PED_USING_ANY_SCENARIO(Local_881[iVar0 /*11*/]))
						{
							if (iVar0 < 3)
							{
								TASK::TASK_USE_NEAREST_TRAIN_SCENARIO_TO_COORD_WARP(Local_881[iVar0 /*11*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_576, Local_881[iVar0 /*11*/].f_1), 5f);
							}
							else
							{
								TASK::TASK_USE_NEAREST_TRAIN_SCENARIO_TO_COORD_WARP(Local_881[iVar0 /*11*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_575, Local_881[iVar0 /*11*/].f_1), 5f);
							}
						}
						break;
					case 2:
						if (!__LIB_0__::func_163(Local_881[iVar0 /*11*/], -1518311320))
						{
							if (iVar0 < 3)
							{
								TASK::TASK_USE_NEAREST_TRAIN_SCENARIO_TO_COORD_WARP(Local_881[iVar0 /*11*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_576, Local_881[iVar0 /*11*/].f_1), 5f);
							}
							else
							{
								TASK::TASK_USE_NEAREST_TRAIN_SCENARIO_TO_COORD_WARP(Local_881[iVar0 /*11*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_575, Local_881[iVar0 /*11*/].f_1), 5f);
							}
						}
						else
						{
							PED::_0x9A77DFD295E29B09(Local_881[iVar0 /*11*/], true);
						}
						break;
					case 3:
						break;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_355(2097152);
	}
}

void func_383()
{
	if (__LIB_0__::func_266(Global_35, vLocal_23, 60f, 1, 1))
	{
		if (!bLocal_1234)
		{
			WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
			bLocal_1234 = true;
		}
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_DRAFT_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_DRAFT_ATTACK2"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_ATTACK2"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_WEAPON_SPECIAL"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_WEAPON_SPECIAL_TWO"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TWIRL_PISTOL"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_ITEM_WHEEL"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SCRIPTED_FLY_ZDOWN"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_RT"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INSPECT_ZOOM"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
	}
	else
	{
		bLocal_1234 = false;
	}
}

bool func_384(var uParam0)
{
	int iVar0;
	func_801();
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLACE_CARRIABLE_ONTO_PARENT"), false);
	switch (iLocal_16)
	{
		case 0:
			__LIB_12__::func_997(uParam0, func_61(0), func_61(1), 0, 1, 0);
			func_802();
			__LIB_0__::func_267(1);
			VEHICLE::_0x4C05B42A8D937796();
			__LIB_10__::func_843(105, 0, 350);
			func_651();
			func_329(4);
			func_803();
			if (!MAP::DOES_BLIP_EXIST(iLocal_460))
			{
				iLocal_460 = __LIB_10__::func_860(408396114, vLocal_429, 1109393408 /* Float: 40f */, 1);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_460, "BNP21_B_STAT");
			}
			iVar0 = PERSCHAR::_0x112DDF56300BC6E5(joaat("BRA_MANOR_GUARD"));
			if (PERSCHAR::_0x800DF3FC913355F3(iVar0))
			{
				PERSCHAR::_0x7B204F88F6C3D287(iVar0);
			}
			iVar0 = PERSCHAR::_0x112DDF56300BC6E5(joaat("BRA_MANOR_GUARD_2"));
			if (PERSCHAR::_0x800DF3FC913355F3(iVar0))
			{
				PERSCHAR::_0x7B204F88F6C3D287(iVar0);
			}
			iVar0 = PERSCHAR::_0x112DDF56300BC6E5(joaat("BRA_MANOR_GUARD_3"));
			if (PERSCHAR::_0x800DF3FC913355F3(iVar0))
			{
				PERSCHAR::_0x7B204F88F6C3D287(iVar0);
			}
			iVar0 = PERSCHAR::_0x112DDF56300BC6E5(joaat("BRA_MANOR_GUARD_4"));
			if (PERSCHAR::_0x800DF3FC913355F3(iVar0))
			{
				PERSCHAR::_0x7B204F88F6C3D287(iVar0);
			}
			VEHICLE::_0x4C05B42A8D937796();
			func_805();
			__LIB_12__::func_937(uParam0, 0);
			PED::_0x1E017404784AA6A3(iLocal_36, joaat("RBNP2_RIDE1"));
			AUDIO::_0x0D7FD6A55FD63AEF(7, 3, 1);
			AUDIO::_0x0D7FD6A55FD63AEF(21, 3, 1);
			AUDIO::_0x0D7FD6A55FD63AEF(25, 3, 1);
			AUDIO::_0x0D7FD6A55FD63AEF(23, 3, 1);
			AUDIO::_0x0D7FD6A55FD63AEF(19, 3, 1);
			AUDIO::_0x0D7FD6A55FD63AEF(13, 3, 1);
			AUDIO::_0x0D7FD6A55FD63AEF(12, 3, 1);
			AUDIO::_0x0D7FD6A55FD63AEF(10, 3, 1);
			AUDIO::_0x0D7FD6A55FD63AEF(2, 3, 1);
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_50))
			{
				func_326(uParam0, vLocal_961, fLocal_964, 1);
			}
			else
			{
				func_694(iLocal_50, 5, 0, 0, 0, 1);
				func_694(iLocal_50, 4, 0, 0, 0, 1);
				func_694(iLocal_50, 6, 0, 0, 0, 1);
				iLocal_16 = 1;
			}
			break;
		case 1:
			func_807(uParam0, &iLocal_36, 0, 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */, 1, 1, 0, 0);
			if (!bLocal_19)
			{
				if (!bLocal_1191)
				{
					func_529(uParam0, 0, 1);
					if (!MAP::DOES_BLIP_EXIST(iLocal_460))
					{
						iLocal_460 = __LIB_10__::func_860(408396114, vLocal_429, 1109393408 /* Float: 40f */, 1);
						MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_460, "BNP21_B_STAT");
					}
					if (MAP::DOES_BLIP_EXIST(iLocal_37))
					{
						MAP::_BLIP_REMOVE_MODIFIER(iLocal_37, -401963276);
					}
					if (PED::IS_PED_ON_MOUNT(Global_35) && !PED::IS_PED_ON_MOUNT(iLocal_36))
					{
						if (!__LIB_0__::func_899(&uLocal_1192))
						{
							__LIB_5__::func_107(&uLocal_1192);
						}
						else if (__LIB_9__::func_178(&uLocal_1192) > 3f)
						{
							bLocal_1191 = true;
							vLocal_736[18 /*3*/].f_2 = 0;
							vLocal_736[18 /*3*/].f_1 = 0;
							UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
							__LIB_0__::func_325(&iLocal_460);
							if (MAP::DOES_BLIP_EXIST(iLocal_37))
							{
								MAP::_BLIP_SET_MODIFIER(iLocal_37, -401963276);
							}
						}
					}
				}
				else
				{
					func_529(uParam0, 18, 1);
					if ((PED::IS_PED_ON_MOUNT(Global_35) && PED::IS_PED_ON_MOUNT(iLocal_36)) || (!PED::IS_PED_ON_MOUNT(Global_35) && !PED::IS_PED_ON_MOUNT(iLocal_36)))
					{
						UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
						bLocal_1191 = false;
						vLocal_736[0 /*3*/].f_2 = 0;
						vLocal_736[0 /*3*/].f_1 = 0;
						if (MAP::DOES_BLIP_EXIST(iLocal_37))
						{
							MAP::_BLIP_REMOVE_MODIFIER(iLocal_37, -401963276);
						}
						if (!MAP::DOES_BLIP_EXIST(iLocal_460))
						{
							iLocal_460 = __LIB_10__::func_860(408396114, vLocal_429, 1109393408 /* Float: 40f */, 1);
							MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_460, "BNP21_B_STAT");
						}
						__LIB_2__::func_608(&uLocal_1192);
					}
					else
					{
						PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
						PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), true);
						PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), true);
					}
				}
			}
			else
			{
				bLocal_1191 = true;
				vLocal_736[18 /*3*/].f_2 = 0;
				vLocal_736[18 /*3*/].f_1 = 0;
				__LIB_0__::func_325(&iLocal_460);
				if (MAP::DOES_BLIP_EXIST(iLocal_37))
				{
					MAP::_BLIP_SET_MODIFIER(iLocal_37, -401963276);
				}
				bLocal_1191 = false;
				vLocal_736[0 /*3*/].f_2 = 0;
				vLocal_736[0 /*3*/].f_1 = 0;
			}
			func_805();
			func_808(uParam0);
			if (!__LIB_0__::func_48(Global_35, iLocal_36, 10f, 1))
			{
				func_807(uParam0, &iLocal_36, 46, 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */, 1, 1, 0, 0);
			}
			if (__LIB_0__::func_71(iLocal_36) && __LIB_0__::func_71(Global_35))
			{
				__LIB_0__::func_325(&iLocal_37);
				__LIB_12__::func_937(uParam0, 1);
			}
			else
			{
				func_802();
			}
			func_801();
			if (!__LIB_0__::func_266(Global_35, vLocal_38, 25f, 1, 1))
			{
				if (!__LIB_0__::func_266(Global_35, vLocal_23, 45f, 1, 1))
				{
					if (!__LIB_0__::func_71(Global_35) && !__LIB_0__::func_71(iLocal_36))
					{
						func_807(uParam0, &iLocal_36, 1, 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */, 1, 1, 0, 0);
					}
				}
			}
			else
			{
				func_809(uParam0, 0, 20000);
			}
			if (__LIB_0__::func_71(Global_35) && __LIB_0__::func_71(iLocal_36))
			{
				func_807(uParam0, &iLocal_36, 2, 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */, 1, 1, 0, 0);
				if (vLocal_594[2 /*3*/].f_1)
				{
					if (!__LIB_0__::func_899(&uLocal_45))
					{
						__LIB_5__::func_107(&uLocal_45);
					}
					else if (__LIB_9__::func_178(&uLocal_45) > 5f)
					{
						func_807(uParam0, &iLocal_36, 3, 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */, 1, 1, 0, 0);
					}
				}
			}
			if (!func_217(16384))
			{
				if (__LIB_0__::func_266(Global_35, vLocal_429, 200f, 1, 1))
				{
					if (func_333(uParam0) && func_334(uParam0, 0, 0))
					{
						func_352(16384);
						PED::REQUEST_PED_VISIBILITY_TRACKING(iLocal_20);
					}
				}
			}
			else
			{
				if (__LIB_0__::func_266(Global_35, vLocal_23, 20f, 1, 1))
				{
					if (!vLocal_594[5 /*3*/].f_1 && !vLocal_594[4 /*3*/].f_1)
					{
						if (__LIB_8__::func_684(func_810(3)))
						{
							__LIB_6__::func_900(func_810(3), 1, 0);
						}
						if (PED::_0x5102307CE88798EB(iLocal_20))
						{
							if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_20))
							{
								func_807(uParam0, &iLocal_36, 5, 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */, 1, 1, 0, 0);
							}
							else
							{
								func_807(uParam0, &iLocal_36, 4, 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */, 1, 1, 0, 0);
							}
						}
					}
					CAM::SET_GAMEPLAY_PED_HINT(iLocal_20, 0f, 0f, 0.5f, true, -1, 2000, 2000);
				}
				else if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
				{
					CAM::STOP_GAMEPLAY_HINT(false);
				}
				func_813(uParam0);
			}
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				func_318(Global_35, vLocal_429, &uLocal_565, (25f + 3f), (25f - 4f), (25f - 7f), (25f - 7.5f), 1f, 0, 0, 1, 1, 1);
			}
			else
			{
				func_318(Global_35, vLocal_429, &uLocal_565, (25f - 5f), (25f - 10f), (25f - 14f), (25f - 19f), 1f, 0, 0, 1, 1, 1);
			}
			if (func_814())
			{
				iLocal_16 = 2;
			}
			break;
		case 2:
			__LIB_2__::func_608(&uLocal_45);
			__LIB_2__::func_608(&uLocal_562);
			if (MAP::DOES_BLIP_EXIST(iLocal_37))
			{
				MAP::_BLIP_REMOVE_MODIFIER(iLocal_37, -401963276);
			}
			PED::_0x2B4CE170DE09F346(iLocal_36, joaat("RBNP2_RIDE1"));
			AUDIO::_0x660A8F876DF1D4F8(7);
			AUDIO::_0x660A8F876DF1D4F8(21);
			AUDIO::_0x660A8F876DF1D4F8(25);
			AUDIO::_0x660A8F876DF1D4F8(23);
			AUDIO::_0x660A8F876DF1D4F8(19);
			return true;
	}
	return false;
}

bool func_385(var uParam0)
{
	func_801();
	switch (iLocal_16)
	{
		case 0:
			func_802();
			if (func_815() && func_336(uParam0))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 1, false, false);
				TASK::TASK_SWAP_WEAPON(Global_35, 1, 1, 0, 0);
				func_805();
				if (__LIB_8__::func_684(func_810(3)))
				{
					__LIB_6__::func_900(func_810(3), 1, 0);
				}
				func_803();
				__LIB_0__::func_267(1);
				__LIB_12__::func_937(uParam0, 2);
				iLocal_16 = 1;
			}
			break;
		case 1:
			if (!bLocal_1195)
			{
				if (!__LIB_0__::func_71(Global_35))
				{
					__LIB_5__::func_511(4);
					bLocal_1195 = true;
				}
			}
			if (!bLocal_19)
			{
				func_529(uParam0, 5, 1);
				if (MAP::DOES_BLIP_EXIST(iLocal_37))
				{
					MAP::_BLIP_REMOVE_MODIFIER(iLocal_37, -401963276);
				}
				if (!MAP::DOES_BLIP_EXIST(iLocal_460))
				{
					iLocal_460 = __LIB_10__::func_860(408396114, vLocal_429, 1109393408 /* Float: 40f */, 1);
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_460, "BNP21_B_STAT");
				}
			}
			else
			{
				vLocal_736[5 /*3*/].f_1 = 0;
				vLocal_736[5 /*3*/].f_2 = 0;
				__LIB_0__::func_325(&iLocal_460);
				if (MAP::DOES_BLIP_EXIST(iLocal_37))
				{
					MAP::_BLIP_SET_MODIFIER(iLocal_37, -401963276);
				}
			}
			if (!vLocal_594[5 /*3*/].f_1 && !vLocal_594[4 /*3*/].f_1)
			{
				if (PED::_0x164CECC59E70DF86(iLocal_20, 0.9f))
				{
					func_807(uParam0, &iLocal_36, 4, 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */, 1, 1, 0, 0);
				}
				else
				{
					func_807(uParam0, &iLocal_36, 5, 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */, 1, 1, 0, 0);
				}
			}
			func_801();
			func_813(uParam0);
			func_805();
			func_817(uParam0);
			if (!Local_811[10 /*5*/].f_4)
			{
				Local_811[10 /*5*/].f_4 = func_343(10, 0, func_339(47));
			}
			if (iLocal_1168 == 24)
			{
				iLocal_16 = 2;
			}
			else if (iLocal_1168 <= 5)
			{
				if (__LIB_0__::func_266(Global_35, vLocal_23, 8.5f, 1, 1))
				{
					CAM::SET_GAMEPLAY_PED_HINT(iLocal_20, 0f, 0f, 0.5f, true, -1, 2000, 2000);
				}
				else
				{
					CAM::STOP_GAMEPLAY_HINT(false);
				}
			}
			else if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
			{
				CAM::STOP_GAMEPLAY_HINT(false);
			}
			func_318(Global_35, vLocal_429, &uLocal_565, (25f + 5f), 25f, (25f - 9f), (25f - 10f), 1f, 0, 0, 1, 1, 1);
			break;
		case 2:
			if (MAP::DOES_BLIP_EXIST(iLocal_37))
			{
				MAP::_BLIP_REMOVE_MODIFIER(iLocal_37, -401963276);
			}
			CAM::STOP_GAMEPLAY_HINT(false);
			__LIB_0__::func_325(&iLocal_460);
			return true;
	}
	return false;
}

bool func_386(var uParam0)
{
	switch (iLocal_16)
	{
		case 0:
			func_805();
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_36) && PED::IS_PED_IN_GROUP(iLocal_36))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_36);
			}
			func_818();
			func_802();
			func_329(15);
			func_345(3);
			func_803();
			iLocal_16 = 1;
			iLocal_17 = 1;
			__LIB_12__::func_937(uParam0, 3);
			func_87(uParam0);
			__LIB_4__::func_419(1, 0);
			__LIB_4__::func_419(2, 0);
			func_564(31, 0);
			func_564(30, 0);
			break;
		case 1:
			func_805();
			if (((vLocal_594[8 /*3*/].f_1 && vLocal_594[9 /*3*/].f_1) && vLocal_594[10 /*3*/].f_1) || (bLocal_1186 && iLocal_1168 == 24))
			{
				func_807(uParam0, &iLocal_36, 6, 30f, 40f, 0, 1, 0, 0);
			}
			if (!bLocal_19)
			{
				if (!MAP::DOES_BLIP_EXIST(iLocal_460))
				{
					iLocal_460 = __LIB_4__::func_983(408396114, vLocal_438, 1);
				}
				func_529(uParam0, 3, 1);
				func_809(uParam0, 3, 10000);
				func_802();
				if (MAP::DOES_BLIP_EXIST(iLocal_21))
				{
					MAP::_BLIP_REMOVE_MODIFIER(iLocal_21, -401963276);
				}
				if (MAP::DOES_BLIP_EXIST(iLocal_37))
				{
					MAP::_BLIP_REMOVE_MODIFIER(iLocal_37, -401963276);
				}
			}
			else
			{
				__LIB_0__::func_325(&iLocal_460);
				if (MAP::DOES_BLIP_EXIST(iLocal_21))
				{
					MAP::_BLIP_SET_MODIFIER(iLocal_21, -401963276);
				}
				if (MAP::DOES_BLIP_EXIST(iLocal_37))
				{
					MAP::_BLIP_SET_MODIFIER(iLocal_37, -401963276);
				}
				vLocal_736[3 /*3*/].f_2 = 0;
				vLocal_736[3 /*3*/].f_1 = 0;
			}
			func_820();
			if (iLocal_1143 > 2)
			{
				func_807(uParam0, &iLocal_36, 11, 4f, 1000f, 0, 1, 0, 0);
			}
			func_821(0);
			if (!Local_811[10 /*5*/].f_4)
			{
				Local_811[10 /*5*/].f_4 = func_343(10, 0, func_339(47));
			}
			if (!bLocal_1197)
			{
				if (func_822())
				{
					bLocal_1197 = true;
					__LIB_5__::func_20(1, 0);
					func_823();
					WEAPON::_0x94A3C1B804D291EC(Global_35, 1, 0, 1, 0);
				}
			}
			if (bLocal_1197 && !bLocal_1196)
			{
				if (func_332() && func_335())
				{
					func_342(uParam0, 1, 0);
					bLocal_1196 = true;
					if ((CAM::_0xA24C1D341C6E0D53(1, 0, 0) || CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE()) || CAM::_0xD1BA66940E94C547())
					{
						__LIB_12__::func_676(&(uParam0->f_206), "MultiStart");
						__LIB_12__::func_839(&(uParam0->f_206), "MultiStart");
					}
				}
			}
			if (bLocal_1196)
			{
				__LIB_12__::func_773(1, 0, 1, 1);
				HUD::_HIDE_HUD_COMPONENT(724769646);
				if (!bLocal_1198)
				{
					if ((CAM::_0xA24C1D341C6E0D53(1, 0, 0) || CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE()) || CAM::_0xD1BA66940E94C547())
					{
						bLocal_1198 = true;
						return false;
					}
					WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
					if (!__LIB_0__::func_163(Global_35, 1369124074))
					{
						TASK::TASK_ENTER_ANIM_SCENE(Global_35, Local_811[10 /*5*/], "ARTHUR", "pl_leadin", 1.48f, 0, 0, 20000, -1082130432 /* Float: -1f */);
					}
					if (ANIMSCENE::_0x337F1CC8EE895601(Local_811[10 /*5*/], "ARTHUR"))
					{
						ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_811[10 /*5*/], "Loop_Base", true, false);
						bLocal_1198 = true;
					}
				}
				else
				{
					CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
				}
			}
			if (bLocal_1198)
			{
				if ((CAM::_0xA24C1D341C6E0D53(1, 0, 0) || CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE()) || CAM::_0xD1BA66940E94C547())
				{
					__LIB_12__::func_773(0, 0, 1, 1);
					__LIB_5__::func_20(0, 0);
					__LIB_2__::func_608(&uLocal_562);
					func_823();
					TASK::REMOVE_WAYPOINT_RECORDING(sLocal_880);
					__LIB_12__::func_773(1, 1, 1, 1);
					__LIB_10__::func_597("BNP21_O_TICKET");
					__LIB_0__::func_325(&iLocal_460);
					CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
					if (func_332() && func_335())
					{
						__LIB_12__::func_957(uParam0, Local_58[0 /*20*/], "cs_scottgray", 0, 0, 0);
						__LIB_12__::func_957(uParam0, Local_58[1 /*20*/], "cs_iangray", 0, 0, 0);
						if (MAP::DOES_BLIP_EXIST(iLocal_21))
						{
							MAP::_BLIP_REMOVE_MODIFIER(iLocal_21, -401963276);
						}
						if (MAP::DOES_BLIP_EXIST(iLocal_37))
						{
							MAP::_BLIP_REMOVE_MODIFIER(iLocal_37, -401963276);
						}
						__LIB_5__::func_511(4);
						func_825();
						return true;
					}
				}
			}
			if (func_459(10, 47, 1065017672 /* Float: 0.98f */) || func_826(10))
			{
				__LIB_5__::func_20(0, 0);
				__LIB_2__::func_608(&uLocal_562);
				func_823();
				TASK::REMOVE_WAYPOINT_RECORDING(sLocal_880);
				__LIB_12__::func_773(1, 1, 1, 1);
				__LIB_10__::func_597("BNP21_O_TICKET");
				__LIB_0__::func_325(&iLocal_460);
				CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
				if (func_332() && func_335())
				{
					__LIB_12__::func_957(uParam0, Local_58[0 /*20*/], "cs_scottgray", 0, 0, 0);
					__LIB_12__::func_957(uParam0, Local_58[1 /*20*/], "cs_iangray", 0, 0, 0);
					if (MAP::DOES_BLIP_EXIST(iLocal_21))
					{
						MAP::_BLIP_REMOVE_MODIFIER(iLocal_21, -401963276);
					}
					if (MAP::DOES_BLIP_EXIST(iLocal_37))
					{
						MAP::_BLIP_REMOVE_MODIFIER(iLocal_37, -401963276);
					}
					__LIB_5__::func_511(4);
					func_825();
					return true;
				}
			}
			break;
		case 2:
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			return true;
	}
	return false;
}

bool func_387(var uParam0)
{
	int iVar0;
	int iVar1;
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_ITEM_WHEEL"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_NEXT_WEAPON"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_PREV_WEAPON"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
	if (!PAD::_IS_USING_KEYBOARD(0))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), false);
	switch (iLocal_16)
	{
		case 0:
			VEHICLE::SET_TRAIN_SPEED(iLocal_574, 0f);
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 1, false, false);
			func_803();
			func_346();
			func_818();
			func_802();
			func_342(uParam0, 1, 1);
			if (!bLocal_377)
			{
				func_652(2, 1);
			}
			else
			{
				__LIB_5__::func_107(&uLocal_374);
			}
			__LIB_8__::func_776(iLocal_20, 140);
			EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_DANGEROUS"), Global_35, -1f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
			func_349();
			func_827();
			__LIB_12__::func_997(uParam0, func_61(2), func_61(3), 2, 3, 0);
			func_352(4096);
			__LIB_12__::func_937(uParam0, 4);
			iLocal_16 = 1;
			PED::SET_PED_CONFIG_FLAG(Local_58[1 /*20*/], 258, false);
			PED::SET_PED_CONFIG_FLAG(Global_35, 258, false);
			break;
		case 1:
			func_529(uParam0, 6, 1);
			func_807(uParam0, &Global_35, 13, 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */, 1, 1, 0, 0);
			if (__LIB_9__::func_178(&uLocal_374) > 1f)
			{
				func_652(2, 1);
				__LIB_2__::func_608(&uLocal_374);
			}
			if (!vLocal_594[14 /*3*/].f_1 || !vLocal_594[15 /*3*/].f_1)
			{
				if (__LIB_0__::func_895(Global_1347702[5 /*49*/].f_15) == 1)
				{
					func_807(uParam0, &Global_35, 14, 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */, 1, 1, 0, 0);
				}
				else
				{
					func_807(uParam0, &Global_35, 15, 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */, 1, 1, 0, 0);
				}
			}
			func_807(uParam0, &Global_35, 17, 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */, 1, 1, 0, 0);
			if (!bLocal_1199)
			{
				if (func_338(uParam0))
				{
					bLocal_1199 = true;
				}
			}
			if (!bLocal_1200)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_58[0 /*20*/]) && (!PED::_IS_PED_HOGTIED(Local_58[0 /*20*/]) && !PED::GET_PED_CONFIG_FLAG(Local_58[0 /*20*/], 11, true)))
				{
					if ((ENTITY::IS_ENTITY_DEAD(Local_58[1 /*20*/]) || PED::_IS_PED_HOGTIED(Local_58[1 /*20*/])) || PED::GET_PED_CONFIG_FLAG(Local_58[1 /*20*/], 11, true))
					{
						PLAYER::_0x3946FC742AC305CD(PLAYER::PLAYER_ID(), Local_58[0 /*20*/], "RBAP21_BRAWL", VOLUME::_GET_VOLUME_COORDS(iLocal_1201), 0, 0);
						bLocal_1200 = true;
					}
				}
			}
			if (iLocal_1132 < 2)
			{
				if (!__LIB_0__::func_255(Local_58[1 /*20*/], 0))
				{
					if (ENTITY::GET_ENTITY_HEALTH(Local_58[1 /*20*/]) < 60)
					{
						ENTITY::_SET_ENTITY_HEALTH(Local_58[1 /*20*/], 60, 0);
					}
				}
				if (!__LIB_0__::func_255(Local_58[0 /*20*/], 0))
				{
					if (ENTITY::GET_ENTITY_HEALTH(Local_58[0 /*20*/]) < 60)
					{
						ENTITY::_SET_ENTITY_HEALTH(Local_58[0 /*20*/], 60, 0);
					}
				}
			}
			func_828();
			func_829();
			func_809(uParam0, 6, 10000);
			if (func_830())
			{
				vLocal_736[6 /*3*/].f_1 = 1;
			}
			func_349();
			iVar1 = func_831();
			if (iVar1 <= 0)
			{
				func_807(uParam0, &Global_35, 20, 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */, 1, 1, 0, 0);
				if (vLocal_594[20 /*3*/].f_1)
				{
					iLocal_16 = 2;
				}
			}
			else if (iVar1 == 1)
			{
				if (iLocal_1132 <= 8)
				{
					if (!__LIB_0__::func_255(Local_58[1 /*20*/], 0) && !PED::GET_PED_CONFIG_FLAG(Local_58[1 /*20*/], 11, true))
					{
						if (ENTITY::GET_ENTITY_HEALTH(Local_58[1 /*20*/]) < 45)
						{
							ENTITY::_SET_ENTITY_HEALTH(Local_58[1 /*20*/], 45, 0);
						}
					}
					if (!__LIB_0__::func_255(Local_58[0 /*20*/], 0) && !PED::GET_PED_CONFIG_FLAG(Local_58[0 /*20*/], 11, true))
					{
						if (ENTITY::GET_ENTITY_HEALTH(Local_58[0 /*20*/]) < 45)
						{
							ENTITY::_SET_ENTITY_HEALTH(Local_58[0 /*20*/], 45, 0);
						}
					}
				}
				func_807(uParam0, &Global_35, 19, 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */, 1, 1, 0, 0);
				func_807(uParam0, &iLocal_379, 21, 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */, 1, 1, 0, 0);
			}
			else if (Local_58[0 /*20*/].f_18 == 2)
			{
				func_807(uParam0, &Global_35, 18, 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */, 1, 1, 0, 0);
			}
			break;
		case 2:
			PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), 0);
			iVar0 = 0;
			while (iVar0 < 6)
			{
				__LIB_0__::func_325(&(Local_581[iVar0 /*2*/].f_1));
				iVar0++;
			}
			__LIB_2__::func_608(&uLocal_562);
			__LIB_2__::func_608(&uLocal_101);
			__LIB_0__::func_325(&iLocal_21);
			__LIB_0__::func_325(&iLocal_37);
			return true;
	}
	return false;
}

bool func_388(var uParam0)
{
	int iVar0;
	switch (iLocal_16)
	{
		case 0:
			if (!MAP::DOES_BLIP_EXIST(Local_581[3 /*2*/].f_1))
			{
				Local_581[3 /*2*/].f_1 = __LIB_4__::func_983(408396114, ENTITY::GET_ENTITY_COORDS(iLocal_20, true, false), 1);
			}
			func_349();
			__LIB_12__::func_937(uParam0, 5);
			func_832(8);
			func_803();
			iLocal_16 = 1;
			break;
		case 1:
			func_828();
			func_349();
			func_807(uParam0, &iLocal_379, 22, 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */, 1, 1, 0, 0);
			if (!PED::IS_PED_IN_ANY_TRAIN(Global_35))
			{
				func_529(uParam0, 7, 1);
				func_809(uParam0, 7, 10000);
			}
			else
			{
				if (!func_217(4))
				{
					func_352(4);
				}
				func_347(6.5f);
				__LIB_10__::func_597(vLocal_736[7 /*3*/]);
				iLocal_16 = 2;
			}
			break;
		case 2:
			__LIB_2__::func_608(&uLocal_562);
			iVar0 = 0;
			while (iVar0 < 2)
			{
				__LIB_0__::func_325(&(Local_58[iVar0 /*20*/].f_2));
				iVar0++;
			}
			__LIB_0__::func_325(&(Local_581[3 /*2*/].f_1));
			func_347(7.5f);
			return true;
	}
	return false;
}

bool func_389(var uParam0)
{
	int iVar0;
	int iVar1;
	func_653();
	switch (iLocal_16)
	{
		case 0:
			__LIB_0__::func_267(0);
			func_818();
			func_802();
			__LIB_0__::func_854(iLocal_20, 100f, 0);
			__LIB_0__::func_854(iLocal_36, 100f, 0);
			MAP::_BLIP_SET_MODIFIER(iLocal_21, -401963276);
			MAP::_BLIP_SET_MODIFIER(iLocal_37, -401963276);
			PED::SET_PED_CONFIG_FLAG(iLocal_20, 263, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_36, 263, true);
			__LIB_12__::func_997(uParam0, func_61(3), func_61(4), 3, 4, 0);
			func_352(4);
			iLocal_17 = 2;
			func_87(uParam0);
			func_355(128);
			func_349();
			func_803();
			__LIB_12__::func_937(uParam0, 6);
			iLocal_16 = 1;
			break;
		case 1:
			func_529(uParam0, 8, 1);
			func_821(1);
			if (!func_217(64))
			{
				func_349();
			}
			if (__LIB_0__::func_48(Global_35, iLocal_36, 4f, 1))
			{
				vLocal_736[8 /*3*/].f_1 = 1;
				__LIB_10__::func_597(vLocal_736[8 /*3*/]);
				__LIB_6__::func_900(func_810(23), 1, 0);
			}
			else
			{
				func_807(uParam0, &iLocal_20, 23, 100f, 200f, 0, 1, 0, 0);
				func_809(uParam0, 8, 10000);
			}
			if (!func_217(64))
			{
				if (__LIB_0__::func_266(iLocal_574, 1008.2f, -964.5f, 67.4f, 140f, 1, 1))
				{
					func_352(64);
					func_352(268435456);
					if (PED::_IS_PED_CARRYING(Global_35))
					{
						iVar0 = __LIB_3__::func_697(Global_35);
						if (ENTITY::DOES_ENTITY_EXIST(iVar0))
						{
							TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(Global_35, iVar0, Global_36, 2f, 9);
						}
					}
				}
				else if (__LIB_0__::func_393(Global_35, iLocal_466, 0, 1))
				{
					if (func_836())
					{
						if (PED::_IS_PED_CARRYING(Global_35))
						{
							iVar0 = __LIB_3__::func_697(Global_35);
							if (ENTITY::DOES_ENTITY_EXIST(iVar0))
							{
								TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(Global_35, iVar0, Global_36, 2f, 9);
							}
						}
						func_352(64);
					}
				}
			}
			else
			{
				__LIB_12__::func_773(1, 0, 1, 1);
				if (func_217(268435456))
				{
					__LIB_12__::func_676(&(uParam0->f_206), "MultiStart");
					__LIB_12__::func_839(&(uParam0->f_206), "MultiStart");
					if (func_837(uParam0, 64, 128, 0, 0, 1))
					{
						iLocal_16 = 2;
					}
				}
				else
				{
					if (!Local_811[7 /*5*/].f_4)
					{
						__LIB_0__::func_88(&(uParam0->f_206), 134217728);
						__LIB_13__::func_17(&(uParam0->f_206), "NormalStart", 0);
						__LIB_12__::func_676(&(uParam0->f_206), "NormalStart");
						__LIB_12__::func_839(&(uParam0->f_206), "NormalStart");
						if (!PED::_IS_PED_CARRYING(Global_35))
						{
							if (!Local_811[7 /*5*/].f_3)
							{
								if (func_340(7, 0, func_339(iLocal_1205)))
								{
									func_714(7);
									Local_811[7 /*5*/].f_3 = 1;
								}
								TASK::TASK_ENTER_ANIM_SCENE(Global_35, Local_811[7 /*5*/], "ARTHUR", func_339(iLocal_1205), 1.48f, 0, 2, 20000, -1082130432 /* Float: -1f */);
							}
							else
							{
								if (ANIMSCENE::_0x337F1CC8EE895601(Local_811[7 /*5*/], "ARTHUR"))
								{
									bLocal_1206 = true;
								}
								if (bLocal_1206)
								{
									if (func_343(7, 0, func_339(iLocal_1205)))
									{
										Local_811[7 /*5*/].f_4 = 1;
									}
								}
								else if (!__LIB_0__::func_163(Global_35, 1369124074))
								{
									TASK::TASK_ENTER_ANIM_SCENE(Global_35, Local_811[7 /*5*/], "ARTHUR", func_339(iLocal_1205), 1.48f, 0, 2, 20000, -1082130432 /* Float: -1f */);
								}
							}
						}
					}
					else
					{
						CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
						if (func_459(7, iLocal_1205, 0.95f))
						{
							iLocal_16 = 2;
						}
					}
					func_837(uParam0, 64, 128, 0, 0, 1);
				}
			}
			break;
		case 2:
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			iVar1 = 0;
			while (iVar1 < 6)
			{
				__LIB_0__::func_325(&(Local_581[iVar1 /*2*/].f_1));
				iVar1++;
			}
			if (func_217(268435456))
			{
				func_344();
				__LIB_5__::func_20(0, 0);
				return true;
			}
			else
			{
				__LIB_12__::func_676(&(uParam0->f_206), "NormalStart");
				__LIB_12__::func_839(&(uParam0->f_206), "NormalStart");
				MAP::_BLIP_REMOVE_MODIFIER(iLocal_21, -401963276);
				MAP::_BLIP_REMOVE_MODIFIER(iLocal_37, -401963276);
				__LIB_5__::func_20(0, 0);
				return true;
			}
			break;
	}
	return false;
}

bool func_390(var uParam0)
{
	func_653();
	__LIB_12__::func_773(0, 1, 1, 1);
	switch (iLocal_16)
	{
		case 0:
			VEHICLE::SET_TRAIN_SPEED(iLocal_574, 7.5f);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_575))
			{
			}
			if (AICOVERPOINT::_0xC276FE69DDA22BAD(uLocal_456))
			{
			}
			Local_811[6 /*5*/].f_3 = 0;
			Local_811[6 /*5*/].f_4 = 0;
			func_803();
			if (ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_206.f_348) || func_217(1048576))
			{
				func_838(Global_35, Local_104[0 /*23*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_575, -1f, -6.88f, 1.05f), 0f, 0f, 0f, -1, 1, 0f, 1, 1, uLocal_456, 0);
				PED::SET_PED_RESET_FLAG(Global_35, 0, true);
			}
			__LIB_12__::func_937(uParam0, 7);
			iLocal_16 = 1;
			__LIB_5__::func_107(&uLocal_457);
			break;
		case 1:
			func_821(1);
			iLocal_16 = 2;
			break;
		case 2:
			func_568();
			__LIB_2__::func_608(&uLocal_457);
			return true;
	}
	return false;
}

bool func_391(var uParam0)
{
	float fVar0;
	int iVar1;
	func_653();
	switch (iLocal_16)
	{
		case 0:
			__LIB_12__::func_997(uParam0, func_61(4), func_61(5), 4, 5, 0);
			__LIB_0__::func_267(0);
			func_818();
			func_802();
			__LIB_0__::func_854(iLocal_20, 100f, 0);
			PED::SET_PED_CONFIG_FLAG(iLocal_20, 263, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_36, 263, true);
			func_347(8f);
			AUDIO::SET_AMBIENT_ZONE_STATE("AZ_BEAU_PEN_TRAIN", true, true);
			VEHICLE::_0xA72B1BF3857B94D7(iLocal_574, 1);
			VEHICLE::_0xA72B1BF3857B94D7(iLocal_577, 1);
			ENTITY::SET_ENTITY_PROOFS(iLocal_36, 1, false);
			ENTITY::SET_ENTITY_PROOFS(iLocal_20, 1, false);
			PATHFIND::_0x4358BCF14C91761C(617.9204f, -580.938f, 60.44286f, 664.4835f, -437.9182f, 85.63371f, 500f, 0, 6, 1);
			Local_811[6 /*5*/].f_3 = 0;
			iLocal_1132 = 17;
			func_349();
			func_337(2);
			func_803();
			func_529(uParam0, 10, 1);
			__LIB_12__::func_875(uParam0, Local_881[4 /*11*/], "RBNP2_PASSENGER1", 0);
			func_352(32768);
			__LIB_12__::func_937(uParam0, 8);
			iLocal_16 = 1;
			break;
		case 1:
			func_349();
			func_807(uParam0, &iLocal_36, 24, 40f, 50f, 0, 1, 0, 0);
			if (__LIB_1__::func_205(Global_35, Local_581[3 /*2*/], 1, 0))
			{
				func_807(uParam0, &(Local_881[4 /*11*/]), 25, 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */, 1, 1, 0, 0);
			}
			else if (vLocal_594[25 /*3*/].f_1)
			{
				if (__LIB_6__::func_903(func_810(25)))
				{
					__LIB_6__::func_900(func_810(25), 1, 0);
				}
			}
			if (func_217(1024))
			{
				if (func_840() > 0)
				{
					if (iLocal_51 > 55 && iLocal_51 < 80)
					{
						func_807(uParam0, &iLocal_20, 31, 40f, 50f, 0, 1, 0, 0);
					}
					if (vLocal_594[31 /*3*/].f_1 || iLocal_51 > 80)
					{
						func_807(uParam0, &iLocal_36, 30, 40f, 50f, 0, 1, 0, 0);
					}
					if (iLocal_51 > 92 && iLocal_51 < 120)
					{
						func_807(uParam0, &iLocal_20, 32, 40f, 50f, 0, 1, 0, 0);
					}
					if (iLocal_51 > 130 && iLocal_51 < 160)
					{
						func_807(uParam0, &iLocal_20, 33, 40f, 50f, 0, 1, 0, 0);
					}
				}
			}
			func_841(uParam0);
			func_842(uParam0);
			fVar0 = __LIB_0__::func_94(iLocal_574, VEHICLE::_GET_NEAREST_TRAIN_TRACK_POSITION(vLocal_453), 1);
			func_843();
			if (func_217(16))
			{
				func_844(0, 3);
				func_844(1, 3);
				VEHICLE::SET_TRAIN_CRUISE_SPEED(iLocal_574, 0f);
				VEHICLE::_0xD0116DF21E6C7B36(iLocal_574, 0.95f);
			}
			else if (fVar0 < 20f)
			{
				func_352(16);
			}
			if ((func_217(16) && ENTITY::GET_ENTITY_SPEED(iLocal_574) < 1f) || func_845())
			{
				iLocal_16 = 2;
			}
			break;
		case 2:
			iVar1 = 0;
			while (iVar1 < 2)
			{
				__LIB_0__::func_325(&(Local_58[iVar1 /*20*/].f_2));
				iVar1++;
			}
			__LIB_2__::func_608(&uLocal_562);
			return true;
	}
	return false;
}

bool func_392(var uParam0)
{
	func_653();
	switch (iLocal_16)
	{
		case 0:
			__LIB_5__::func_107(&uLocal_559);
			VEHICLE::SET_TRAIN_CRUISE_SPEED(iLocal_574, 0f);
			func_349();
			iLocal_16 = 1;
			__LIB_5__::func_107(&uLocal_1207);
			func_803();
			__LIB_12__::func_937(uParam0, 9);
			break;
		case 1:
			if (__LIB_1__::func_583(&uLocal_1207) > 3f)
			{
				if (func_845())
				{
					iLocal_16 = 2;
				}
				else
				{
					func_529(uParam0, 10, 1);
					func_349();
					func_846(uParam0);
				}
			}
			break;
		case 2:
			__LIB_10__::func_597(vLocal_736[11 /*3*/]);
			__LIB_0__::func_769();
			__LIB_0__::func_325(&iLocal_37);
			__LIB_0__::func_325(&iLocal_21);
			return true;
	}
	return false;
}

bool func_393(var uParam0)
{
	func_653();
	func_846(uParam0);
	switch (iLocal_16)
	{
		case 0:
			PED::SET_PED_CONFIG_FLAG(iLocal_20, 263, false);
			PED::SET_PED_CONFIG_FLAG(iLocal_36, 263, false);
			__LIB_12__::func_997(uParam0, func_61(5), func_61(6), 5, 6, 0);
			__LIB_0__::func_267(1);
			if (!MAP::DOES_BLIP_EXIST(iLocal_541))
			{
				iLocal_541 = __LIB_8__::func_778(408396114, iLocal_577, 1);
			}
			VEHICLE::_0xA72B1BF3857B94D7(iLocal_574, 0);
			VEHICLE::_0xA72B1BF3857B94D7(iLocal_577, 0);
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_574, true);
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_577, true);
			__LIB_7__::func_904(&iLocal_36, 1);
			PED::SET_PED_CONFIG_FLAG(iLocal_36, 413, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_36, 330, true);
			__LIB_7__::func_904(&iLocal_20, 1);
			PED::SET_PED_CONFIG_FLAG(iLocal_20, 413, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_20, 330, true);
			__LIB_12__::func_937(uParam0, 10);
			func_349();
			func_352(16);
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_577, true);
			iLocal_16 = 1;
			break;
		case 1:
			if (!__LIB_6__::func_904() && !bLocal_1211)
			{
				bLocal_1211 = true;
				func_348(27);
			}
			if (bLocal_1211 && iLocal_1132 >= 29)
			{
				func_807(uParam0, &iLocal_20, 34, 100f, 120f, 0, 1, 0, 0);
				func_352(8388608);
			}
			if (vLocal_594[34 /*3*/].f_1 || func_217(8388608))
			{
				func_529(uParam0, 15, 1);
			}
			func_349();
			if (!bLocal_1210)
			{
				if ((__LIB_1__::func_205(Global_35, Local_581[0 /*2*/], 1, 0) || __LIB_1__::func_205(Global_35, Local_581[1 /*2*/], 1, 0)) || __LIB_0__::func_48(Global_35, iLocal_577, 12f, 1))
				{
					bLocal_1210 = true;
				}
				if (__LIB_0__::func_48(Global_35, iLocal_577, 22f, 1))
				{
					func_807(uParam0, &Global_35, 35, 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */, 1, 1, 0, 0);
				}
			}
			if ((__LIB_1__::func_205(Global_35, Local_581[0 /*2*/], 1, 0) || __LIB_1__::func_205(Global_35, Local_581[1 /*2*/], 1, 0)) || __LIB_0__::func_48(Global_35, iLocal_577, 12f, 1))
			{
				func_807(uParam0, &Global_35, 36, 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */, 1, 1, 0, 0);
			}
			if (__LIB_1__::func_205(Global_35, Local_581[0 /*2*/], 1, 0))
			{
				func_807(uParam0, &Global_35, 37, 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */, 1, 1, 0, 0);
			}
			if (__LIB_0__::func_48(Global_35, iLocal_20, 2f, 1))
			{
				if (func_223())
				{
					if (28 == iLocal_1132)
					{
						func_352(262144);
					}
					if (32 == iLocal_1132)
					{
						func_807(uParam0, &iLocal_36, 41, 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */, 1, 1, 0, 0);
					}
				}
			}
			if (PED::IS_PED_IN_VEHICLE(Global_35, iLocal_574, false))
			{
				iLocal_16 = 2;
			}
			break;
		case 2:
			__LIB_0__::func_325(&iLocal_541);
			return true;
	}
	return false;
}

bool func_394(var uParam0)
{
	if (ENTITY::GET_ENTITY_SPEED(iLocal_577) < 0.5f)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_HANDCART_BRAKE"), false);
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_EXIT"), false);
	switch (iLocal_16)
	{
		case 0:
			ENTITY::SET_ENTITY_INVINCIBLE(Global_35, true);
			if (!MAP::DOES_BLIP_EXIST(iLocal_460))
			{
				iLocal_460 = __LIB_4__::func_983(408396114, vLocal_450, 1);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_460, "BNP21_B_RIGG");
			}
			VEHICLE::_0xCFE122EC635CC2B2(iLocal_574, "DANGER", 1, 0);
			if (func_849())
			{
				iLocal_16 = 1;
				__LIB_12__::func_937(uParam0, 11);
				CAM::_0x1B3C2D961F5FC0E1("script@Story@RBNP12@TrainRideEscape");
				if (!bLocal_1119)
				{
					STREAMING::PREFETCH_SRL("script@cme@RBNP12_CME_SHOT4_srl");
					STREAMING::_0xD9F2FF4AF394D926();
					STREAMING::_0xAE00387E53B1E9FC();
					bLocal_1119 = true;
				}
				StringCopy(&Local_1212, "camera_treatments", 64);
				StringCopy(&(Local_1212.f_8), "GENERIC_CME_PULL_OUT_TREATMENT_REQUEST", 64);
				CAM::_0x6A4D224FC7643941(&Local_1212);
			}
			break;
		case 1:
			func_850();
			func_851();
			func_529(uParam0, 16, 1);
			__LIB_9__::func_327(sLocal_879, 1, joaat("COLOR_WHITE"));
			if (__LIB_0__::func_266(iLocal_574, 5.6533f, -321.2947f, 91.9707f, 150f, 1, 1))
			{
				if (!func_217(1073741824 /* Float: 2f */))
				{
					VEHICLE::_0xE6C5E2125EB210C1(joaat("FREIGHT_GROUP"), 1, 0);
					func_352(1073741824 /* Float: 2f */);
				}
			}
			if (__LIB_0__::func_266(iLocal_574, -552.3f, -457f, 81.2f, 5f, 1, 1))
			{
				iLocal_16 = 2;
				CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
				VEHICLE::SET_TRAIN_SPEED(iLocal_574, 8f);
			}
			else if (__LIB_0__::func_266(iLocal_574, -552.3f, -457f, 81.2f, 20f, 1, 1))
			{
				if (CAM::_0xDD0B7C5AE58F721D(&Local_1212))
				{
					if (!bLocal_1228)
					{
						CAM::_0xB8B207C34285E978(&Local_1212);
						bLocal_1228 = true;
					}
				}
				CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
				VEHICLE::SET_TRAIN_SPEED(iLocal_574, 8f);
			}
			break;
		case 2:
			UIFEED::_0xDD1232B332CBB9E7(1, 1, 0);
			func_464();
			__LIB_0__::func_325(&iLocal_460);
			ENTITY::SET_ENTITY_INVINCIBLE(Global_35, false);
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			VEHICLE::SET_TRAIN_SPEED(iLocal_574, 8f);
			return true;
	}
	return false;
}

bool func_395(var uParam0)
{
	int iVar0;
	CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
	switch (iLocal_16)
	{
		case 0:
			__LIB_10__::func_597(vLocal_736[15 /*3*/]);
			__LIB_5__::func_20(0, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
			MAP::DISPLAY_RADAR(false);
			VEHICLE::SET_TRAIN_CRUISE_SPEED(iLocal_574, 8f);
			iLocal_16 = 1;
			iVar0 = PERSCHAR::_0x112DDF56300BC6E5(joaat("BGV_DELIVERY_1"));
			PERSCHAR::_0x7B204F88F6C3D287(iVar0);
			iVar0 = PERSCHAR::_0x112DDF56300BC6E5(joaat("BGV_DELIVERY_2"));
			PERSCHAR::_0x7B204F88F6C3D287(iVar0);
			iVar0 = PERSCHAR::_0x112DDF56300BC6E5(joaat("GLO_BLW_WAGON_DELIVERY_3"));
			PERSCHAR::_0x7B204F88F6C3D287(iVar0);
			VEHICLE::_0xA72B1BF3857B94D7(iLocal_574, 0);
			__LIB_1__::func_951(&iLocal_288);
			__LIB_12__::func_937(uParam0, 12);
			break;
		case 1:
			__LIB_1__::func_572(-1101f, -576.6f, 82.4f, 500f, 0, 0, 0, 0, 0);
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_288))
			{
				iLocal_288 = OBJECT::CREATE_OBJECT(iLocal_279, vLocal_450, true, true, false, false, true);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_288, iLocal_575, 0, vLocal_289, vLocal_292, true, false, false, false, 2, true, false, false);
			}
			if (func_851())
			{
				VEHICLE::SET_TRAIN_SPEED(iLocal_574, 0f);
				VEHICLE::_0xA72B1BF3857B94D7(iLocal_574, 0);
				CAM::_0x0A5A4F1979ABB40E(&Local_1212);
				return true;
			}
			else
			{
				if (!__LIB_2__::func_343(Global_35, iLocal_577, 0))
				{
					__LIB_11__::func_28(&Global_35, &iLocal_577, -1, 1);
					VEHICLE::SET_TRAIN_SPEED(iLocal_574, 8f);
				}
				CAM::_0x0A5A4F1979ABB40E(&Local_1212);
				CAM::_0x798BE43C9393632B(&Local_1212);
			}
			if (!bLocal_1229)
			{
				if (func_353() && iLocal_14 >= 7)
				{
					bLocal_1229 = true;
					iLocal_17 = 3;
					func_87(uParam0);
				}
			}
			break;
		case 2:
			CAM::_0x798BE43C9393632B(&Local_1212);
			return true;
	}
	return false;
}

void func_431(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
			__LIB_11__::func_422();
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
						func_889(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_889(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_889(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_889(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_889(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_889(joaat("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_889(joaat("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_889(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_889(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_889(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_889(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_889(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_889(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_889(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_889(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_889(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_889(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_889(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_889(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_889(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_889(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_889(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_889(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_889(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_889(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_891();
						func_892(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
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
						func_889(joaat("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
							func_431(Global_1347702[21 /*49*/].f_15, 0, 0, 0, 0);
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
							func_431(Global_1347702[82 /*49*/].f_15, 0, 0, 0, 0);
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
							func_431(Global_1347702[83 /*49*/].f_15, 0, 0, 0, 0);
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
						func_889(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_889(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
		func_927();
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
							func_889(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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

bool func_459(int iParam0, int iParam1, float fParam2)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_811[iParam0 /*5*/]) && ANIMSCENE::_0x1F0E401031E20146(Local_811[iParam0 /*5*/], func_339(iParam1)))
	{
		if (((ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_811[iParam0 /*5*/]) >= fParam2 || ANIMSCENE::_0xF94692EB9DC15D74(Local_811[iParam0 /*5*/], 0)) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_811[iParam0 /*5*/], false)) || ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(Local_811[iParam0 /*5*/]))
		{
			return true;
		}
	}
	return false;
}

bool func_460()
{
	int iVar0;
	iVar0 = 0;
	if (!__LIB_0__::func_48(iLocal_574, Global_35, 100f, 1) && ENTITY::IS_ENTITY_OCCLUDED(iLocal_574))
	{
		iVar0 = 1;
	}
	return iVar0;
}

void func_461()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		__LIB_0__::func_325(&(Local_104[iVar0 /*23*/].f_2));
		if (!ENTITY::IS_ENTITY_DEAD(Local_104[iVar0 /*23*/]))
		{
			TASK::CLEAR_PED_TASKS(Local_104[iVar0 /*23*/], true, false);
			TASK::TASK_SMART_FLEE_PED(Local_104[iVar0 /*23*/], Global_35, 1000f, -1, 0, 1077936128 /* Float: 3f */, 0);
		}
		__LIB_2__::func_788(&(Local_104[iVar0 /*23*/]), 1, 1, 1);
		__LIB_2__::func_788(&(Local_104[iVar0 /*23*/].f_1), 1, 1, 1);
		iVar0++;
	}
}

void func_464()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		__LIB_2__::func_788(&(Local_1092[iVar0 /*2*/]), 1, 0, 1);
		iVar0++;
	}
}

void func_470(int iParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	if (!__LIB_0__::func_31(iParam0))
	{
		return;
	}
	if (__LIB_0__::func_699(iParam0))
	{
		if (Global_1360165[iParam0 /*1157*/].f_129 != 0 && Global_1360165[iParam0 /*1157*/].f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	if (bParam10)
	{
		__LIB_0__::func_288(iParam0, 56, 1);
		func_80(&(Global_1359489.f_40), 1);
	}
	__LIB_0__::func_904(iParam0, 0);
	__LIB_0__::func_289(iParam0, 4, 0);
	__LIB_0__::func_745(iParam0);
	__LIB_0__::func_706(iParam0);
	__LIB_0__::func_290(iParam0, 37, 1);
	bVar0 = __LIB_0__::func_272(Global_1360165[iParam0 /*1157*/], 0);
	iVar1 = __LIB_0__::func_748(iParam0, 0);
	bVar2 = PERSCHAR::_0x800DF3FC913355F3(iVar1);
	if (PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true) && Global_1359489.f_16 & 8388608 == 0)
	{
		PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, false);
	}
	if (__LIB_0__::func_287(iParam0, 64, 1))
	{
		__LIB_0__::func_290(iParam0, 64, 1);
	}
	if (bParam3)
	{
		__LIB_0__::func_290(iParam0, 33, 1);
		__LIB_0__::func_290(iParam0, 34, 1);
		__LIB_1__::func_27(iParam0, 1056964608 /* Float: 0.5f */, -1, 1061158912 /* Float: 0.75f */);
		__LIB_0__::func_707(iParam0, 1, 1, 0);
		if (bParam6)
		{
			__LIB_0__::func_288(iParam0, 30, 1);
		}
		if (bParam7)
		{
			__LIB_0__::func_288(iParam0, 35, 1);
			if (bParam8)
			{
				__LIB_0__::func_288(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			__LIB_0__::func_705(iParam0, 0);
			if (PED::IS_PED_IN_GROUP(Global_1360165[iParam0 /*1157*/]))
			{
				PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
			}
			POPULATION::_0xF74E134F40192884(Global_1360165[iParam0 /*1157*/], 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], joaat("REL_GANG_DUTCHS"));
		}
		if (bVar2)
		{
			PERSCHAR::_0xBB68908CD11AEBDC(iVar1);
		}
		__LIB_0__::func_290(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
		}
		__LIB_0__::func_288(iParam0, 33, 1);
		__LIB_0__::func_707(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			Global_1360165[iParam0 /*1157*/].f_133 = fParam4;
			func_80(&(Global_1360165[iParam0 /*1157*/].f_130), 1);
		}
		else
		{
			__LIB_2__::func_608(&(Global_1360165[iParam0 /*1157*/].f_130));
		}
		if (bParam9)
		{
			__LIB_0__::func_288(iParam0, 34, 1);
		}
	}
	if (bParam1 || bParam2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
		{
			__LIB_1__::func_197(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], false);
	}
	if (__LIB_0__::func_287(iParam0, 45, 1))
	{
		__LIB_0__::func_290(iParam0, 45, 1);
	}
	__LIB_0__::func_176(iParam0, 16, 1);
	__LIB_0__::func_290(iParam0, 44, 1);
	Global_1360165[iParam0 /*1157*/].f_129 = 0;
	Global_40.f_4942[iParam0 /*60*/].f_4 = 0;
	if (bParam5)
	{
		if (__LIB_0__::func_272(__LIB_0__::func_177(iParam0), 0))
		{
			__LIB_1__::func_463(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

int func_520(int iParam0, int iParam1)
{
	var uVar0;
	return func_1010(&uVar0, iParam0, iParam1);
}

int func_529(var uParam0, int iParam1, bool bParam2)
{
	if (!vLocal_736[iParam1 /*3*/].f_1)
	{
		if (bParam2)
		{
			if (!vLocal_736[iParam1 /*3*/].f_2)
			{
				vLocal_736[iParam1 /*3*/].f_2 = 1;
				__LIB_12__::func_883(uParam0, vLocal_736[iParam1 /*3*/], 1, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				return 1;
			}
		}
		else
		{
			vLocal_736[iParam1 /*3*/].f_1 = 1;
			__LIB_12__::func_883(uParam0, vLocal_736[iParam1 /*3*/], 1, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			return 1;
		}
	}
	return 0;
}

bool func_557(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (!__LIB_0__::func_272(*iParam0, 1))
	{
		return false;
	}
	if (PED::IS_PED_FLEEING(*iParam0))
	{
		return false;
	}
	else if (PED::IS_PED_IN_COMBAT(*iParam0, 0))
	{
		return false;
	}
	else if (__LIB_13__::func_199(*iParam0, 0, uParam1, iParam2, iParam3, 0))
	{
		if (iParam4 == 1)
		{
			if (iParam5 == 1)
			{
				__LIB_13__::func_228(iParam0, &Global_35, 0, 0, 1, 1, 0, 1, 1);
			}
			else
			{
				__LIB_13__::func_472(iParam0, &Global_35, 1176256512 /* Float: 10000f */, -1, 0, 1077936128 /* Float: 3f */, 1, 1, 0, 1, 0, 0);
			}
		}
		return false;
	}
	return true;
}

void func_564(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_1__::func_936(iParam0, 65536);
	}
	else
	{
		__LIB_1__::func_937(iParam0, 65536);
	}
}

void func_566()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (OBJECT::DOES_PICKUP_EXIST(uLocal_985[iVar0]))
		{
			OBJECT::REMOVE_PICKUP(uLocal_985[iVar0]);
		}
		iVar0++;
	}
}

void func_568()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (CAM::DOES_CAM_EXIST(Local_474[iVar0 /*18*/]))
		{
			CAM::SET_CAM_ACTIVE(Local_474[iVar0 /*18*/], false);
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		}
		iVar0++;
	}
}

bool func_592(var uParam0)
{
	if (iLocal_17 == 2)
	{
		return true;
	}
	return false;
}

void func_648(bool bParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_58[iVar0 /*20*/]))
		{
			ENTITY::SET_ENTITY_VISIBLE(Local_58[iVar0 /*20*/], bParam0);
			if (bParam0)
			{
				if (!MAP::DOES_BLIP_EXIST(Local_58[iVar0 /*20*/].f_2))
				{
					Local_58[iVar0 /*20*/].f_2 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_58[iVar0 /*20*/]);
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_58[iVar0 /*20*/].f_2, "BNP21_B_GRAY");
				}
			}
			else
			{
				__LIB_0__::func_325(&(Local_58[iVar0 /*20*/].f_2));
			}
		}
		iVar0++;
	}
}

void func_651()
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_280))
	{
		PED::_0xCE7A6C1D5CDE1F9D(iLocal_36, iLocal_280, "s_penelopePurse01x_PH_L_HAND", "LOCO_ATTACH_PURSE_PENELOPE");
		ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_280, iLocal_36, PED::GET_PED_BONE_INDEX(iLocal_36, 37709), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
		PED::_0xE8ABE3B73FC7FE17(iLocal_36, iLocal_280, "s_penelopePurse01x_PH_L_HAND", "LOCO_ATTACH_PURSE_PENELOPE");
	}
}

void func_652(int iParam0, int iParam1)
{
	int iVar0;
	if (ENTITY::IS_ENTITY_DEAD(Local_58[iParam1 /*20*/]))
	{
		return;
	}
	if (iParam0 != Local_58[iParam1 /*20*/].f_18 && !PED::_IS_PED_HOGTIED(Local_58[iParam1 /*20*/]))
	{
		Local_58[iParam1 /*20*/].f_18 = iParam0;
	}
	else
	{
		return;
	}
	if (Local_58[iParam1 /*20*/].f_18 == 8)
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_58[iParam1 /*20*/], false, true);
	}
	else
	{
		TASK::CLEAR_PED_TASKS(Local_58[iParam1 /*20*/], true, false);
	}
	switch (Local_58[iParam1 /*20*/].f_18)
	{
		case 0:
			break;
		case 1:
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_58[iParam1 /*20*/], iLocal_20, 0, -1f, -1f, -1f);
			break;
		case 4:
			PED::_0x789DABD18E9024DB(Local_58[iParam1 /*20*/], 13, 0);
			TASK::TASK_GRAPPLE(Local_58[iParam1 /*20*/], iLocal_20, 0, 1, 1f, 1, 0);
			break;
		case 5:
			PED::_0x789DABD18E9024DB(Local_58[iParam1 /*20*/], 13, 0);
			TASK::TASK_PUT_PED_DIRECTLY_INTO_MELEE(Local_58[iParam1 /*20*/], iLocal_20, joaat("AR_GRAPPLE_BACK_FROM_BACK"), 0, 0, 1, 0);
			break;
		case 2:
			TASK::TASK_COMBAT_PED(Local_58[iParam1 /*20*/], Global_35, 16777216, 0);
			break;
		case 3:
			TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(Local_58[iParam1 /*20*/], iLocal_20, -2.5f, 0f, 0f, 1f, -1, 1036831949 /* Float: 0.1f */, 1, 1, 0, 0, 1);
			break;
		case 6:
			TASK::TASK_CONFRONT(Local_58[iParam1 /*20*/], Global_35, 2);
			break;
		case 7:
			TASK::TASK_HANDS_UP(Local_58[iParam1 /*20*/], -1, Global_35, -1, false);
			break;
		case 8:
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_58[iParam1 /*20*/]);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			if (!ENTITY::IS_ENTITY_DEAD(Local_58[iParam1 /*20*/].f_1))
			{
				TASK::TASK_MOUNT_ANIMAL(0, Local_58[iParam1 /*20*/].f_1, -1, -1, 3f, 1, 0, 0);
			}
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_58[iParam1 /*20*/].f_12, 2.5f, -1, 0.25f, 0, 40000f);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 4000, -1f, -1f, -1f);
			TASK::TASK_SMART_FLEE_PED(0, Global_35, 1000f, -1, 256, 2f, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(Local_58[iParam1 /*20*/], iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			break;
		case 9:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_575))
			{
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_58[iParam1 /*20*/]);
				PED::SET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(Local_58[iParam1 /*20*/], joaat("REL_PLAYER_ENEMY"));
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_58[iParam1 /*20*/], joaat("REL_PLAYER_ENEMY"));
				TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(Local_58[iParam1 /*20*/], iLocal_575, MISC::GET_RANDOM_FLOAT_IN_RANGE(4f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-4.5f, -2.5f), 0f, 1.75f, -1, 1036831949 /* Float: 0.1f */, 1, 1, 0, 0, 1);
			}
			break;
	}
}

void func_653()
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		iVar5 = iVar0;
		func_1162(iVar5);
		if (ENTITY::DOES_ENTITY_EXIST(Local_104[iVar0 /*23*/]))
		{
			if (!PED::IS_PED_DEAD_OR_DYING(Local_104[iVar0 /*23*/], true))
			{
				func_1163(iVar5);
				if (Local_104[iVar5 /*23*/].f_11)
				{
					func_1164(iVar5);
					func_1165(iVar5);
					func_1166(iVar5);
					switch (Local_104[iVar0 /*23*/].f_7)
					{
						case 0:
							if (func_217(65536))
							{
								func_1167(iVar5, 1);
							}
							break;
						case 5:
							if (!__LIB_0__::func_71(Local_104[iVar5 /*23*/]) && Local_104[iVar5 /*23*/].f_11)
							{
								func_1167(iVar5, 7);
								return;
							}
							if (iLocal_15 >= 9)
							{
								if (ENTITY::GET_ENTITY_SPEED(iLocal_574) < 1f)
								{
									func_1167(iVar5, 4);
									return;
								}
							}
							TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(Local_104[iVar5 /*23*/].f_8, ENTITY::GET_ENTITY_COORDS(Local_104[iVar5 /*23*/], true, false), &iVar4);
							TASK::WAYPOINT_RECORDING_GET_COORD(Local_104[iVar5 /*23*/].f_8, iVar4, &vVar1);
							if (func_1168(iVar5, iVar4))
							{
								if (iLocal_378 < 2)
								{
									func_1169(9);
									return;
								}
								else
								{
									func_1167(iVar5, 12);
									return;
								}
							}
							if (__LIB_0__::func_266(Local_104[iVar5 /*23*/], vVar1, 15f, 1, 1))
							{
								func_1167(iVar5, 1);
							}
							break;
						case 9:
							if (!__LIB_0__::func_899(&(Local_104[iVar0 /*23*/].f_20)))
							{
								__LIB_5__::func_107(&(Local_104[iVar0 /*23*/].f_20));
							}
							if (__LIB_0__::func_48(Local_104[iVar0 /*23*/], iLocal_20, 15f, 1) || __LIB_9__::func_178(&(Local_104[iVar0 /*23*/].f_20)) > 3f)
							{
								__LIB_1__::func_864(iLocal_20, 0, 0);
							}
							break;
						case 4:
							TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(Local_104[iVar5 /*23*/].f_8, ENTITY::GET_ENTITY_COORDS(Local_104[iVar5 /*23*/], true, false), &iVar4);
							TASK::WAYPOINT_RECORDING_GET_COORD(Local_104[iVar5 /*23*/].f_8, iVar4, &vVar1);
							if (func_1168(iVar5, iVar4))
							{
								func_1167(iVar5, 11);
							}
							break;
						case 1:
							TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(Local_104[iVar5 /*23*/].f_8, ENTITY::GET_ENTITY_COORDS(Local_104[iVar5 /*23*/], true, false), &iVar4);
							TASK::WAYPOINT_RECORDING_GET_COORD(Local_104[iVar5 /*23*/].f_8, iVar4, &vVar1);
							if (func_1168(iVar5, iVar4))
							{
								if (iLocal_378 < 2)
								{
									func_1169(9);
									return;
								}
								else
								{
									func_1167(iVar5, 12);
									return;
								}
							}
							func_1171(&(Local_104[iVar5 /*23*/]));
							if (!__LIB_0__::func_163(Local_104[iVar5 /*23*/], 658540077))
							{
								TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_104[iVar5 /*23*/], Local_104[iVar5 /*23*/].f_8, 0, 25608, -1, 0, 1, -1);
							}
							if (!__LIB_2__::func_167(Local_104[iVar5 /*23*/], 0))
							{
								if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_811[5 /*5*/]))
								{
									if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_811[5 /*5*/], false))
									{
										TASK::TASK_COMBAT_HATED_TARGETS(Local_104[iVar5 /*23*/], -1f);
									}
								}
								else
								{
									TASK::TASK_COMBAT_HATED_TARGETS(Local_104[iVar5 /*23*/], -1f);
								}
							}
							if (!__LIB_0__::func_71(Local_104[iVar5 /*23*/]) && Local_104[iVar5 /*23*/].f_11)
							{
								func_1167(iVar5, 7);
							}
							break;
						case 6:
							if (func_217(16))
							{
								if (!__LIB_0__::func_71(Local_104[iVar0 /*23*/]))
								{
									if (!ENTITY::IS_ENTITY_DEAD(Local_104[iVar0 /*23*/].f_1))
									{
										TASK::TASK_SMART_FLEE_PED(Local_104[iVar0 /*23*/].f_1, Local_104[iVar0 /*23*/], 1000f, -1, 0, 1077936128 /* Float: 3f */, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_104[iVar0 /*23*/].f_1, false);
										__LIB_2__::func_788(&(Local_104[iVar0 /*23*/].f_1), 1, 0, 1);
									}
								}
							}
							break;
						case 13:
							if (!__LIB_0__::func_71(Local_104[iVar0 /*23*/]))
							{
								if (!ENTITY::IS_ENTITY_DEAD(Local_104[iVar0 /*23*/].f_1))
								{
									TASK::TASK_SMART_FLEE_PED(Local_104[iVar0 /*23*/].f_1, Local_104[iVar0 /*23*/], 1000f, -1, 0, 1077936128 /* Float: 3f */, 0);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_104[iVar0 /*23*/].f_1, false);
									__LIB_2__::func_788(&(Local_104[iVar0 /*23*/].f_1), 1, 0, 1);
								}
							}
							break;
						case 7:
							if (__LIB_0__::func_163(Local_104[iVar0 /*23*/], 518218985))
							{
								__LIB_0__::func_325(&(Local_104[iVar0 /*23*/].f_2));
								func_1173(iVar5, 1);
								Local_104[iVar5 /*23*/].f_7 = 14;
							}
							else
							{
								TASK::TASK_SMART_FLEE_COORD(Local_104[iVar0 /*23*/], vLocal_453, 1000f, -1, 256, 1077936128);
								PED::SET_PED_FLEE_ATTRIBUTES(Local_104[iVar0 /*23*/], 512, false);
							}
							break;
						case 10:
							if (__LIB_0__::func_71(Local_104[iVar0 /*23*/]))
							{
								func_1167(iVar5, 0);
							}
							break;
						case 12:
							if (!__LIB_0__::func_899(&(Local_104[iVar0 /*23*/].f_20)))
							{
								__LIB_5__::func_107(&(Local_104[iVar0 /*23*/].f_20));
							}
							if (__LIB_9__::func_178(&(Local_104[iVar0 /*23*/].f_20)) > 7f)
							{
								func_1167(iVar5, 8);
							}
							TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_104[iVar0 /*23*/], 0f);
							TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_104[iVar0 /*23*/].f_1, 0f);
							break;
						case 11:
							if (!__LIB_0__::func_71(Local_104[iVar0 /*23*/]))
							{
								func_1167(iVar5, 6);
							}
							break;
						case 15:
							__LIB_0__::func_325(&(Local_104[iVar0 /*23*/].f_2));
							if (!PED::_IS_PED_HOGTIED(Local_104[iVar0 /*23*/]))
							{
								func_1167(iVar5, 7);
							}
							break;
					}
				}
			}
			else
			{
				__LIB_0__::func_325(&(Local_104[iVar0 /*23*/].f_2));
				if (Local_104[iVar5 /*23*/].f_16 < 1)
				{
					func_1173(iVar5, 1);
					Local_104[iVar5 /*23*/].f_7 = 14;
					iLocal_378++;
					if (ENTITY::DOES_ENTITY_EXIST(Local_104[iVar0 /*23*/].f_1))
					{
						if (!PED::IS_PED_DEAD_OR_DYING(Local_104[iVar0 /*23*/].f_1, true) && !__LIB_0__::func_163(Local_104[iVar0 /*23*/].f_1, 518218985))
						{
							TASK::TASK_SMART_FLEE_PED(Local_104[iVar0 /*23*/].f_1, Global_35, 1000f, -1, 0, 1077936128 /* Float: 3f */, 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_104[iVar0 /*23*/].f_1, false);
						}
					}
				}
			}
		}
		iVar0++;
	}
}

int func_656(var uParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	if (*uParam0 == 0)
	{
		if (!__LIB_0__::func_139(uParam0->f_5) || !__LIB_0__::func_139(uParam0->f_6))
		{
			return 0;
		}
		if ((HUD::_UIPROMPT_HAS_HOLD_MODE(Global_1945938[uParam0->f_5 /*18*/].f_3) && __LIB_0__::func_567(uParam0->f_5, 1)) || __LIB_1__::func_732(uParam0->f_5, 1))
		{
			if (__LIB_1__::func_530(uParam0->f_5, 1))
			{
				uParam0->f_4 = 1;
			}
			*uParam0 = 1;
			return 1;
		}
		if ((HUD::_UIPROMPT_HAS_HOLD_MODE(Global_1945938[uParam0->f_6 /*18*/].f_3) && __LIB_0__::func_567(uParam0->f_6, 1)) || __LIB_1__::func_732(uParam0->f_6, 1))
		{
			if (__LIB_1__::func_530(uParam0->f_6, 1))
			{
				uParam0->f_4 = 1;
			}
			*uParam0 = 2;
			return 1;
		}
		iVar0 = MISC::GET_GAME_TIMER();
		if (iVar0 > uParam0->f_9)
		{
			if (uParam0->f_1 == 1 || (uParam0->f_1 == 0 && uParam0->f_10 > 0))
			{
				if (!HUD::_UIPROMPT_HAS_HOLD_AUTO_FILL_MODE(Global_1945938[uParam0->f_5 /*18*/].f_3))
				{
					fVar2 = __LIB_0__::func_486(uParam0->f_6, 1);
					fVar3 = __LIB_0__::func_486(uParam0->f_5, 1);
					if ((fVar2 == 0f || fVar2 < uParam0->f_16) && (fVar3 == 0f || fVar3 < uParam0->f_17))
					{
						__LIB_1__::func_748(&(uParam0->f_5), 1, 1);
						if (uParam0->f_12 > 0)
						{
							iVar1 = ((uParam0->f_11 + uParam0->f_12) - iVar0 + 20);
							uParam0->f_5 = __LIB_1__::func_877(uParam0->f_7, joaat("INPUT_INTERACT_LOCKON_POS"), 6, 600, iVar1, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 1);
						}
						else
						{
							uParam0->f_5 = __LIB_1__::func_877(uParam0->f_7, joaat("INPUT_INTERACT_LOCKON_POS"), 6, 600, 10000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 1);
						}
						__LIB_1__::func_748(&(uParam0->f_6), 1, 1);
						uParam0->f_6 = __LIB_1__::func_877(uParam0->f_8, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
						if (uParam0->f_14 < uParam0->f_13)
						{
							__LIB_5__::func_793(uParam0->f_5, 1);
						}
						__LIB_0__::func_633(uParam0->f_5, 6, 1);
						__LIB_0__::func_633(uParam0->f_6, 6, 1);
						__LIB_1__::func_522(uParam0->f_5, 17, 1, 1);
						__LIB_1__::func_522(uParam0->f_6, 17, 1, 1);
					}
					else
					{
						uParam0->f_16 = fVar2;
						uParam0->f_17 = fVar3;
					}
				}
			}
			else if (!HUD::_UIPROMPT_HAS_HOLD_AUTO_FILL_MODE(Global_1945938[uParam0->f_6 /*18*/].f_3))
			{
				fVar2 = __LIB_0__::func_486(uParam0->f_5, 1);
				fVar3 = __LIB_0__::func_486(uParam0->f_6, 1);
				if ((fVar2 == 0f || fVar2 < uParam0->f_16) && (fVar3 == 0f || fVar3 < uParam0->f_17))
				{
					__LIB_1__::func_748(&(uParam0->f_6), 1, 1);
					if (uParam0->f_12 > 0)
					{
						iVar1 = ((uParam0->f_11 + uParam0->f_12) - iVar0 + 20);
						uParam0->f_6 = __LIB_1__::func_877(uParam0->f_8, joaat("INPUT_INTERACT_LOCKON_NEG"), 6, 600, iVar1, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 1);
					}
					else
					{
						uParam0->f_6 = __LIB_1__::func_877(uParam0->f_8, joaat("INPUT_INTERACT_LOCKON_NEG"), 6, 600, 10000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 1);
					}
					__LIB_1__::func_748(&(uParam0->f_5), 1, 1);
					uParam0->f_5 = __LIB_1__::func_877(uParam0->f_7, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
					if (uParam0->f_14 < uParam0->f_13)
					{
						__LIB_5__::func_793(uParam0->f_5, 1);
					}
					__LIB_0__::func_633(uParam0->f_5, 6, 1);
					__LIB_0__::func_633(uParam0->f_6, 6, 1);
					__LIB_1__::func_522(uParam0->f_5, 17, 1, 1);
					__LIB_1__::func_522(uParam0->f_6, 17, 1, 1);
				}
				else
				{
					uParam0->f_16 = fVar2;
					uParam0->f_17 = fVar3;
				}
			}
		}
		return 0;
	}
	return 1;
}

bool func_672(var uParam0)
{
	int iVar0;
	if (bLocal_1231 && !bLocal_30)
	{
		func_1187(&iLocal_36, &iLocal_295, &Local_356, 7.5f, -1082130432 /* Float: -1f */, 0);
		func_326(uParam0, vLocal_961, fLocal_964, 0);
	}
	switch (iLocal_1233)
	{
		case 0:
			if (func_343(0, 0, func_339(0)))
			{
				Local_811[0 /*5*/].f_4 = 1;
				func_87(uParam0);
				func_1188(1);
				func_1189();
			}
			break;
		case 1:
			if (func_1190() && !bLocal_30)
			{
				bLocal_1231 = true;
			}
			if (bLocal_1231 && !bLocal_30)
			{
				iVar0 = __LIB_3__::func_547(Global_35, iLocal_36, 1060437492 /* Float: 0.707f */);
				if (iVar0 == 0)
				{
					if (func_343(0, 0, func_339(3)))
					{
						func_1188(4);
					}
				}
				else if (iVar0 == 3)
				{
					if (func_343(0, 0, func_339(1)))
					{
						func_1188(2);
					}
				}
				else if (iVar0 == 2)
				{
					if (func_343(0, 0, func_339(2)))
					{
						func_1188(3);
					}
				}
				else if (iVar0 == 1)
				{
					if (func_343(0, 0, func_339(1)))
					{
						func_1188(2);
					}
				}
			}
			break;
		case 2:
		case 3:
		case 4:
			if (func_826(0))
			{
				__LIB_2__::func_480(&Local_356, 0, 0, 1, 0);
				__LIB_13__::func_19(&iLocal_295, iLocal_20);
				return true;
			}
			break;
	}
	return false;
}

void func_676(int iParam0, vector3 vParam1, float fParam4, bool bParam5)
{
	PED::SET_PED_CAN_BE_TARGETTED(*iParam0, false);
	PED::SET_PED_CONFIG_FLAG(*iParam0, 253, true);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(*iParam0, false);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(*iParam0, joaat("REL_PLAYER_ALLY"));
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, true);
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, true);
	}
	if (bParam5)
	{
		ENTITY::SET_ENTITY_COORDS(*iParam0, vParam1, true, false, true, true);
		ENTITY::SET_ENTITY_HEADING(*iParam0, fParam4);
	}
	PED::SET_PED_CONFIG_FLAG(*iParam0, 14, true);
}

int func_693(var uParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, float fParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (__LIB_13__::func_379(uParam0, vParam2, fParam5, iParam6, fParam7, bParam8, bParam9, bParam10))
	{
		*iParam1 = uParam0->f_2572;
		return 1;
	}
	return 0;
}

void func_694(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
					func_1220(&iParam0, iVar3, &iVar8, 1, -142743235);
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

bool func_706(int iParam0, int iParam1)
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_574))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_574))
		{
			iVar0 = VEHICLE::GET_TRAIN_CARRIAGE(iLocal_574, iParam1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				*iParam0 = iVar0;
				return true;
			}
		}
	}
	return false;
}

bool func_707()
{
	int iVar0;
	iVar0 = 1;
	if (!VOLUME::_DOES_VOLUME_EXIST(Local_581[0 /*2*/]))
	{
		Local_581[0 /*2*/] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1200.747f, -1285.076f, 77.37609f, 0f, 0f, 45.13615f, 3.172528f, 11.08021f, 2.152998f, "BAP21 - Train Engine Blip");
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_577))
		{
			PED::_0x7C00CFC48A782DC0(Local_581[0 /*2*/], iLocal_577, 0f, 0f, 1.5f, 0f, 0f, 0f, 2, 1);
		}
		iVar0 = 0;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(Local_581[1 /*2*/]))
	{
		Local_581[1 /*2*/] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1206.999f, -1291.298f, 77.36133f, 0f, 0f, 45.13615f, 2.650108f, 6.646955f, 3.588697f, "BAP21 - Train Fuel car");
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_578))
		{
			PED::_0x7C00CFC48A782DC0(Local_581[1 /*2*/], iLocal_578, 0f, 0f, 1.5f, 0f, 0f, 0f, 2, 1);
		}
		iVar0 = 0;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(Local_581[2 /*2*/]))
	{
		Local_581[2 /*2*/] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1216.248f, -1300.504f, 77.36133f, 0f, 0f, 45.13615f, 3.691091f, 18.54702f, 3.588697f, "BAP21 - Train Carriage Unused Blip");
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_576))
		{
			PED::_0x7C00CFC48A782DC0(Local_581[2 /*2*/], iLocal_576, 0f, 0f, 1.5f, 0f, 0f, 0f, 2, 1);
		}
		iVar0 = 0;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(Local_581[3 /*2*/]))
	{
		Local_581[3 /*2*/] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1229.741f, -1313.472f, 77.36133f, 0f, 0f, 46.13634f, 3.691091f, 18.15097f, 3.588697f, "BAP21 - Train Beau and Penelope Carriage Blip");
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_575))
		{
			PED::_0x7C00CFC48A782DC0(Local_581[3 /*2*/], iLocal_575, 0f, 0f, 1.5f, 0f, 0f, 0f, 2, 1);
		}
		iVar0 = 0;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(Local_581[4 /*2*/]))
	{
		Local_581[4 /*2*/] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1243.107f, -1325.766f, 77.36133f, 0f, 0f, 46.63328f, 3.80597f, 16.91168f, 3.879419f, "BAP21 - Train Wood Car Blip");
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_579))
		{
			PED::_0x7C00CFC48A782DC0(Local_581[4 /*2*/], iLocal_579, 0f, 0f, 1.5f, 0f, 0f, 0f, 2, 1);
		}
		iVar0 = 0;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(Local_581[5 /*2*/]))
	{
		Local_581[5 /*2*/] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1253.238f, -1335.346f, 77.36133f, 0f, 0f, 48.63437f, 3.336232f, 8.309339f, 3.588697f, "BAP21 - Train Guard Blip");
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_580))
		{
			PED::_0x7C00CFC48A782DC0(Local_581[5 /*2*/], iLocal_580, 0f, 0f, 1.5f, 0f, 0f, 0f, 2, 1);
		}
		iVar0 = 0;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_466))
	{
		iLocal_466 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1224.217f, -1308.465f, 77.08244f, 0.006727f, 0f, 46.05603f, 3.5f, 9.4f, 2.588697f, "m_volTrainLeadInTrigger");
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_575))
		{
			PED::_0x7C00CFC48A782DC0(iLocal_466, iLocal_575, 0f, 2.7f, 2.2f, 0f, 0f, 0f, 2, 1);
		}
		iVar0 = 0;
	}
	return iVar0;
}

int func_708(int iParam0, int iParam1, int iParam2)
{
	if (!__LIB_1__::func_220(iParam2))
	{
		return 0;
	}
	if (__LIB_2__::func_934(iParam1, 1))
	{
		*iParam0 = __LIB_2__::func_965(iParam1, 1, 0, 0, 1, 1);
	}
	if (__LIB_0__::func_272(*iParam0, 1))
	{
		return 1;
	}
	return 0;
}

void func_709(int iParam0, int iParam1)
{
	int iVar0;
	if (iParam0 != Local_881[iParam1 /*11*/].f_9)
	{
		Local_881[iParam1 /*11*/].f_9 = iParam0;
	}
	else
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_881[iParam1 /*11*/]))
	{
		switch (Local_881[iParam1 /*11*/].f_9)
		{
			case 0:
				break;
			case 1:
				if (iParam1 < 3)
				{
					TASK::TASK_USE_NEAREST_TRAIN_SCENARIO_TO_COORD_WARP(Local_881[iParam1 /*11*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_576, Local_881[iParam1 /*11*/].f_1), 3f);
				}
				else
				{
					TASK::TASK_USE_NEAREST_TRAIN_SCENARIO_TO_COORD_WARP(Local_881[iParam1 /*11*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_575, Local_881[iParam1 /*11*/].f_1), 3f);
				}
				break;
			case 2:
				if (__LIB_0__::func_163(Local_881[iParam1 /*11*/], -1518311320))
				{
					PED::_0x9A77DFD295E29B09(Local_881[iParam1 /*11*/], true);
				}
				break;
			case 3:
				ENTITY::SET_ENTITY_COORDS(Local_881[iParam1 /*11*/], Local_881[iParam1 /*11*/].f_4, true, false, true, true);
				TASK::CLEAR_PED_TASKS(Local_881[iParam1 /*11*/], true, false);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_PAUSE(0, 500);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -179.72f, 613.94f, 112.48f, 2f, -1, 2.5f, 0, 40000f);
				TASK::TASK_SMART_FLEE_COORD(0, vLocal_450, 1000f, -1, 256, 1077936128);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(Local_881[iParam1 /*11*/], iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				break;
			case 4:
				PED::SET_PED_CONFIG_FLAG(Local_881[iParam1 /*11*/], 162, true);
				ENTITY::SET_ENTITY_COORDS(Local_881[iParam1 /*11*/], Local_881[iParam1 /*11*/].f_4, true, false, true, true);
				TASK::CLEAR_PED_TASKS(Local_881[iParam1 /*11*/], true, false);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_881[iParam1 /*11*/].f_4, 2f, -1, 2.5f, 1048576, 40000f);
				TASK::TASK_SMART_FLEE_PED(0, Global_35, 10000f, -1, 4096, 1077936128 /* Float: 3f */, 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(Local_881[iParam1 /*11*/], iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				break;
			case 5:
				TASK::CLEAR_PED_SECONDARY_TASK(Local_881[iParam1 /*11*/]);
				break;
		}
		func_352(2097152);
	}
}

void func_714(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_811[iParam0 /*5*/], "ARTHUR", Global_35, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_811[iParam0 /*5*/], "PenelopeBraithwaite", iLocal_36, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_811[iParam0 /*5*/], "p_cs_book02x", iLocal_380, 0);
			break;
		case 5:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_811[iParam0 /*5*/], "G_M_M_UniBraithwaites_01", Local_104[iLocal_942 /*23*/], 0);
			break;
		case 3:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_811[iParam0 /*5*/], "CS_BeauGray", iLocal_20, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_811[iParam0 /*5*/], "CS_PenelopeBraithwaite", iLocal_36, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_811[iParam0 /*5*/], "p_cs_suitcase03x", iLocal_288, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_811[iParam0 /*5*/], "s_penelopepurse01x", iLocal_280, 0);
			break;
		case 4:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_811[iParam0 /*5*/], "CS_PenelopeBraithwaite", iLocal_36, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_811[iParam0 /*5*/], "CS_BeauGray", iLocal_20, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_811[iParam0 /*5*/], "cs_scottgray", Local_58[0 /*20*/], 0);
			break;
		case 2:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_811[iParam0 /*5*/], "CS_PenelopeBraithwaite", iLocal_36, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_811[iParam0 /*5*/], "s_penelopepurse01x", iLocal_280, 0);
			break;
		case 6:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_811[iParam0 /*5*/], "CS_PenelopeBraithwaite", iLocal_36, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_811[iParam0 /*5*/], "CS_BeauGray", iLocal_20, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_811[iParam0 /*5*/], "s_penelopepurse01x", iLocal_280, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_811[iParam0 /*5*/], "player_zero", Global_35, 0);
			break;
		case 8:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_811[iParam0 /*5*/], "p_cs_newspaper_01x", iLocal_26, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_811[iParam0 /*5*/], "CS_BeauGray", iLocal_20, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_811[iParam0 /*5*/], "p_cs_suitcase05x", iLocal_288, 0);
			break;
		case 9:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_811[iParam0 /*5*/], "p_cs_newspaper_01x", iLocal_26, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_811[iParam0 /*5*/], "CS_BeauGray", iLocal_20, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_811[iParam0 /*5*/], "p_cs_suitcase05x", iLocal_288, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_811[iParam0 /*5*/], "CS_PenelopeBraithwaite", iLocal_36, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_811[iParam0 /*5*/], "s_penelopepurse01x", iLocal_280, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_811[iParam0 /*5*/], "player_zero", Global_35, 0);
			break;
		case 10:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_811[iParam0 /*5*/], "ARTHUR", Global_35, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_811[iParam0 /*5*/], "U_M_M_RHDTRAINSTATIONWORKER_01", iLocal_379, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_811[iParam0 /*5*/], "p_cs_billsingle01x", iLocal_392, 0);
			break;
		case 11:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_811[iParam0 /*5*/], "CS_PenelopeBraithwaite", iLocal_36, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_811[iParam0 /*5*/], "p_cs_suitcase05x", iLocal_288, 0);
			ENTITY::SET_ENTITY_VISIBLE(iLocal_280, false);
			break;
		case 7:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_811[iParam0 /*5*/], "PenelopeBraithwaite", iLocal_36, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_811[iParam0 /*5*/], "BeauGray", iLocal_20, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_811[iParam0 /*5*/], "s_penelopepurse01x", iLocal_280, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_811[iParam0 /*5*/], "ARTHUR", Global_35, 0);
			if (iParam0 == 7)
			{
				ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(Local_811[iParam0 /*5*/], iLocal_575, -1);
			}
			break;
	}
}

bool func_716()
{
	int iVar0;
	iVar0 = func_831();
	if (iVar0 == 0 || (iVar0 == 1 && func_1230()))
	{
		return true;
	}
	return false;
}

bool func_717()
{
	if (PED::IS_PED_IN_ANY_TRAIN(Global_35) || func_223())
	{
		return true;
	}
	return false;
}

bool func_719(int iParam0, bool bParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	vVar0 = { Local_104[iParam0 /*23*/].f_3 };
	if (bParam1)
	{
		vVar3 = { Local_104[iParam0 /*23*/].f_3 };
		TASK::WAYPOINT_RECORDING_GET_COORD(Local_104[iParam0 /*23*/].f_8, Local_104[iParam0 /*23*/].f_12, &vVar3);
		vVar0 = { vVar3 };
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_104[iParam0 /*23*/].f_1))
	{
		Local_104[iParam0 /*23*/].f_1 = __LIB_8__::func_931(joaat("A_C_HORSE_MORGAN_BAY"), vVar0, Local_104[iParam0 /*23*/].f_6, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		func_1232(iParam0);
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_104[iParam0 /*23*/]))
	{
		Local_104[iParam0 /*23*/] = __LIB_8__::func_931(iLocal_275, vVar0, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		return false;
	}
	func_1233(iParam0);
	__LIB_1__::func_991(Local_104[iParam0 /*23*/].f_1, joaat("HONOR_EVENT_KILL_HORSE"));
	__LIB_1__::func_571(Local_104[iParam0 /*23*/], Local_104[iParam0 /*23*/].f_1, 0, -1, 1);
	if (__LIB_0__::func_71(Local_104[iParam0 /*23*/]))
	{
		Local_104[iParam0 /*23*/].f_11 = 1;
	}
	else
	{
		return false;
	}
	return true;
}

int func_721(int iParam0, vector3 vParam1, int iParam4, int iParam5, float fParam6, bool bParam7, bool bParam8)
{
	iLocal_992 = 1;
	return __LIB_8__::func_931(iParam0, vParam1, iParam4, iParam5, fParam6, bParam7, bParam8, 1, 1, 0, 0, 0, 0);
}

bool func_723(var uParam0)
{
	float fVar0;
	float fVar1;
	if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_12, 128))
	{
		return true;
	}
	fVar0 = BUILTIN::VDIST2(Global_1347702[uParam0->f_174 /*49*/].f_24, Global_36);
	fVar1 = 3f;
	if (uParam0->f_744 > 0f)
	{
		fVar1 = uParam0->f_744;
	}
	__LIB_12__::func_773(0, 1, 1, 1);
	if (fVar0 <= (fVar1 * fVar1))
	{
		if (__LIB_0__::func_163(Global_35, 713668775))
		{
			TASK::CLEAR_PED_TASKS(Global_35, true, false);
		}
		if (!__LIB_0__::func_163(Global_35, -982327190))
		{
			TASK::TASK_STAND_STILL(Global_35, 2200);
			func_80(&(uParam0->f_2588), 1);
		}
		if (TASK::IS_PED_STILL(Global_35) || __LIB_9__::func_178(&(uParam0->f_2588)) > 2f)
		{
			__LIB_2__::func_608(&(uParam0->f_2588));
			TASK::CLEAR_PED_TASKS(Global_35, true, false);
			return true;
		}
	}
	else
	{
		if (!__LIB_0__::func_899(&(uParam0->f_2588)))
		{
			func_80(&(uParam0->f_2588), 1);
		}
		else if (__LIB_9__::func_178(&(uParam0->f_2588)) > 5f)
		{
			__LIB_2__::func_608(&(uParam0->f_2588));
			if (__LIB_0__::func_163(Global_35, 713668775))
			{
				TASK::CLEAR_PED_TASKS(Global_35, true, false);
			}
			return true;
		}
		if (!__LIB_0__::func_163(Global_35, 713668775))
		{
			TASK::CLEAR_PED_TASKS(Global_35, true, false);
			if (!TASK::IS_MOVE_BLEND_RATIO_WALKING(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35)) && !TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35)))
			{
				PED::FORCE_PED_MOTION_STATE(Global_35, joaat("MOTIONSTATE_WALK"), false, 1, false);
			}
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Global_35, Global_1347702[uParam0->f_174 /*49*/].f_24, 1f, 7500, 0.25f, 0, 40000f);
		}
		if (__LIB_0__::func_272(Global_1347702[uParam0->f_174 /*49*/].f_43, 0))
		{
			if (!PED::IS_PED_HEADTRACKING_PED(Global_35, Global_1347702[uParam0->f_174 /*49*/].f_43))
			{
				TASK::TASK_LOOK_AT_ENTITY(Global_35, Global_1347702[uParam0->f_174 /*49*/].f_43, -1, 0, 51, 0);
			}
		}
	}
	return false;
}

bool func_724(var uParam0)
{
	float fVar0;
	float fVar1;
	if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_12, 128))
	{
		return true;
	}
	fVar0 = BUILTIN::VDIST2(uParam0->f_206.f_5, Global_36);
	fVar1 = 3f;
	if (uParam0->f_744 > 0f)
	{
		fVar1 = uParam0->f_744;
	}
	__LIB_12__::func_773(0, 1, 1, 1);
	if (fVar0 <= (fVar1 * fVar1))
	{
		__LIB_2__::func_608(&(uParam0->f_2588));
		if (__LIB_0__::func_163(Global_35, 713668775))
		{
			TASK::CLEAR_PED_TASKS(Global_35, true, false);
		}
		return true;
	}
	else
	{
		if (!__LIB_0__::func_899(&(uParam0->f_2588)))
		{
			func_80(&(uParam0->f_2588), 1);
		}
		else if (__LIB_9__::func_178(&(uParam0->f_2588)) > 5f)
		{
			__LIB_2__::func_608(&(uParam0->f_2588));
			if (__LIB_0__::func_163(Global_35, 713668775))
			{
				TASK::CLEAR_PED_TASKS(Global_35, true, false);
			}
			return true;
		}
		if (!__LIB_0__::func_163(Global_35, 713668775))
		{
			TASK::CLEAR_PED_TASKS(Global_35, true, false);
			if (!TASK::IS_MOVE_BLEND_RATIO_WALKING(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35)) && !TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35)))
			{
				PED::FORCE_PED_MOTION_STATE(Global_35, joaat("MOTIONSTATE_WALK"), false, 1, false);
			}
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Global_35, uParam0->f_206.f_5, 1f, 7500, 0.25f, 0, 40000f);
		}
		if (__LIB_0__::func_272(Global_1347702[uParam0->f_174 /*49*/].f_43, 0))
		{
			if (!PED::IS_PED_HEADTRACKING_PED(Global_35, Global_1347702[uParam0->f_174 /*49*/].f_43))
			{
				TASK::TASK_LOOK_AT_ENTITY(Global_35, Global_1347702[uParam0->f_174 /*49*/].f_43, -1, 0, 51, 0);
			}
		}
	}
	return false;
}

void func_746(var uParam0)
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
		func_1262(&(uParam0->f_404), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_12__::func_706(uParam0, 0f, 0f, 0f);
		func_1264(uParam0);
		func_1265(uParam0);
		__LIB_12__::func_943(uParam0, 0f, 0f, 0f, 0, 0);
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

void func_779(var uParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	iVar2 = 0;
	if (__LIB_0__::func_78(uParam0) > 3)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_1790)
		{
			if (uParam0->f_371[iVar0 /*18*/].f_7)
			{
				func_1314(uParam0, iVar0, iParam1);
			}
			else if (uParam0->f_371[iVar0 /*18*/].f_6)
			{
				bVar1 = __LIB_12__::func_857(uParam0, iVar0);
				if (bVar1)
				{
					func_1316(uParam0, iVar0, iParam1);
				}
			}
			iVar0++;
		}
		if (!__LIB_12__::func_692(uParam0, uParam0->f_1580))
		{
			func_1317(uParam0, -1, 0, 1);
		}
		return;
	}
	iVar0 = uParam0->f_1587;
	while (iVar0 <= (uParam0->f_1790 - 1))
	{
		if (uParam0->f_371[iVar0 /*18*/].f_7)
		{
			func_1314(uParam0, iVar0, iParam1);
		}
		else if (uParam0->f_371[iVar0 /*18*/].f_6)
		{
			bVar1 = __LIB_12__::func_857(uParam0, iVar0);
			if (bVar1)
			{
				func_1316(uParam0, iVar0, iParam1);
				iVar2++;
				if (iVar2 > 5)
				{
					if (iVar0 + 1 < 30)
					{
						uParam0->f_1587 = iVar0 + 1;
					}
					else
					{
						uParam0->f_1587 = 0;
					}
					return;
				}
			}
		}
		iVar0++;
	}
}

void func_796()
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		iLocal_1011 = PED::GET_MOUNT(Global_35);
	}
}

bool func_798()
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_58[0 /*20*/]))
	{
		if ((__LIB_0__::func_163(Local_58[0 /*20*/], joaat("SCRIPT_TASK_GRAPPLE")) || __LIB_0__::func_163(Local_58[0 /*20*/], joaat("SCRIPT_TASK_PUT_PED_DIRECTLY_INTO_MELEE"))) && PED::_0x753B15AD0FD6F3E3(Local_58[0 /*20*/]) != 0)
		{
			return true;
		}
	}
	return false;
}

void func_801()
{
	if (__LIB_0__::func_71(iLocal_36))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_280))
		{
			ENTITY::SET_ENTITY_VISIBLE(iLocal_280, false);
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iLocal_280))
	{
		ENTITY::SET_ENTITY_VISIBLE(iLocal_280, true);
	}
}

void func_802()
{
	if (!MAP::DOES_BLIP_EXIST(iLocal_37))
	{
		iLocal_37 = MAP::_BLIP_ADD_FOR_ENTITY(-89429847, iLocal_36);
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_37, "BNP21_B_PENE");
	}
}

void func_803()
{
	__LIB_7__::func_904(&iLocal_36, 1);
	PED::SET_PED_CONFIG_FLAG(iLocal_36, 413, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_36, 330, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_36, 315, false);
	PED::SET_PED_CONFIG_FLAG(iLocal_36, 301, false);
	PED::SET_PED_CAN_BE_TARGETTED(iLocal_36, true);
}

void func_805()
{
	__LIB_1__::func_948(joaat("DOOR_RHO_TRAIN_BACK_MIDDLE"), 1, 1f, 1, 0, 0f, 1, 0);
	__LIB_1__::func_948(joaat("DOOR_RHO_TRAIN_BACK_MIDDLE_R"), 1, -1f, 1, 0, 0f, 1, 0);
}

bool func_807(var uParam0, int iParam1, int iParam2, float fParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8)
{
	vector3 vVar0;
	if (!vLocal_594[iParam2 /*3*/].f_1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(*iParam1))
		{
			vVar0 = { ENTITY::GET_ENTITY_COORDS(*iParam1, true, false) };
			if (bParam5)
			{
				if (Global_36.f_2 > (vVar0.z + 1.25f) || Global_36.f_2 < (vVar0.z - 1.5f))
				{
					return false;
				}
			}
		}
		else
		{
			return false;
		}
		if (!bParam6)
		{
			__LIB_5__::func_20(0, 0);
		}
		if (bParam7)
		{
			if (ENTITY::IS_ENTITY_DEAD(iParam8) || !__LIB_2__::func_215(*iParam1, iParam8, 0, fParam3, 0))
			{
				return false;
			}
		}
		if (!__LIB_6__::func_904())
		{
			if (__LIB_0__::func_48(*iParam1, Global_35, fParam3, 1))
			{
				if (__LIB_12__::func_876(uParam0, func_810(iParam2), 0))
				{
					vLocal_594[iParam2 /*3*/].f_1 = 1;
					return true;
				}
			}
		}
	}
	else if (__LIB_6__::func_903(func_810(iParam2)))
	{
		if (!__LIB_0__::func_48(*iParam1, Global_35, fParam4, 1))
		{
			__LIB_6__::func_900(func_810(iParam2), 0, 0);
		}
	}
	return false;
}

void func_808(var uParam0)
{
	vector3 vVar0;
	vVar0 = { 895.3638f, -1968.243f, 43.0822f };
	if (__LIB_0__::func_266(Global_35, vVar0, 5f, 1, 1))
	{
		if (__LIB_9__::func_178(&uLocal_1188) > 10f)
		{
			vLocal_594[43 /*3*/].f_1 = 0;
		}
		if (func_807(uParam0, &iLocal_36, 43, 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */, 1, 1, 0, 0))
		{
			bLocal_1187 = true;
			__LIB_5__::func_107(&uLocal_1188);
		}
	}
	else if (__LIB_0__::func_266(Global_35, vVar0, 20f, 1, 1))
	{
		if (__LIB_6__::func_903(func_810(3)))
		{
			__LIB_6__::func_900(func_810(3), 0, 0);
		}
		func_807(uParam0, &iLocal_36, 42, 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */, 1, 1, 0, 0);
	}
	else if (bLocal_1187)
	{
		func_807(uParam0, &iLocal_36, 44, 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */, 1, 1, 0, 0);
		func_807(uParam0, &iLocal_36, 45, 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */, 1, 1, 0, 0);
	}
}

void func_809(var uParam0, int iParam1, int iParam2)
{
	if (!vLocal_736[iParam1 /*3*/].f_1)
	{
		if (!__LIB_0__::func_899(&uLocal_562))
		{
			__LIB_5__::func_107(&uLocal_562);
		}
		else if (__LIB_9__::func_401(&uLocal_562) > iParam2)
		{
			func_529(uParam0, iParam1, 0);
		}
		if (__LIB_5__::func_352(vLocal_736[iParam1 /*3*/]))
		{
			vLocal_736[iParam1 /*3*/].f_1 = 1;
			__LIB_2__::func_608(&uLocal_562);
		}
	}
}

char* func_810(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BNP21_LETSGO";
		case 1:
			return "BNP21_HORSE";
		case 2:
			return "BNP21_ONHORSE";
		case 3:
			return "BNP21_RIDEBANT";
		case 4:
			return "BNP21_ARRIVE";
		case 5:
			return "BNP21_ARRIVE_NO";
		case 6:
			return "BNP21_Tick";
		case 8:
			return "BNP2_IG2_A";
		case 9:
			return "BNP2_IG2_B";
		case 10:
			return "BNP2_IG2_C";
		case 11:
			return "BNP2_TICKETS";
		case 12:
			return "BNP2_AGREE";
		case 13:
			return "BNP21_FHT_IAINA";
		case 14:
			return "BNP21_FHT_IAINB";
		case 15:
			return "BNP21_FHT_IAINC";
		case 16:
			return "BNP21_FHT_SCOTA";
		case 17:
			return "BNP21_FHT_SCOTB";
		case 18:
			return "BNP21_FHT_BOTH";
		case 19:
			return "BNP21_FHT_1UNC";
		case 20:
			return "BNP21_FHT_2UNC";
		case 21:
			return "BNP21_FHT_ALD2";
		case 22:
			return "BNP21_TRLEAVING";
		case 23:
			return "BNP21_BP_BANT1";
		case 24:
			return "BNP21_SO_BEGIN";
		case 25:
			return "BNP21_COMPLAIN1";
		case 26:
			return "BNP2_BEAU_BACK";
		case 27:
			return "BNP2_BEAU_UP";
		case 28:
			return "BNP2_BEAU_RIDGE";
		case 29:
			return "BNP21_COMPLAIN2";
		case 30:
			return "BNP2_MOREMEN";
		case 34:
			return "BNP2_DRIVERLEFT";
		case 35:
			return "BNP2_APPROACH";
		case 36:
			return "BNP2_GONE";
		case 37:
			return "BNP2_CONTROLS";
		case 38:
			return "BNP21_FUB";
		case 39:
			return "BNP21_TRAIN";
		case 40:
			return "BNP21_TRAI2";
		case 41:
			return "BNP2_IG8_B";
		case 32:
			return "BNP2_BEAU_BACK";
		case 31:
			return "BNP2_BEAU_UP";
		case 33:
			return "BNP2_BEAU_RIDGE";
		case 42:
			return "BNP21_BRTSIS1";
		case 43:
			return "BNP21_BRTSIS2";
		case 44:
			return "BNP21_BRTSIS3";
		case 45:
			return "BNP21_BRTSIS4";
		case 46:
			return "BNP21_WALKOFF";
		default:
			break;
	}
	return "";
}

void func_813(var uParam0)
{
	int iVar0;
	func_1338();
	if (iLocal_1168 <= 5)
	{
		if (!bLocal_1171)
		{
			if (!__LIB_0__::func_71(iLocal_36) && __LIB_0__::func_48(iLocal_36, iLocal_20, 10f, 1))
			{
				iVar0 = func_1339();
				if (iVar0 == 0)
				{
					func_329(12);
					bLocal_1171 = true;
				}
				else if (iVar0 == 1)
				{
					func_329(14);
					bLocal_1171 = true;
				}
				else if (iVar0 == 2)
				{
					func_329(13);
					bLocal_1171 = true;
				}
			}
		}
		else if (ANIMSCENE::_0x337F1CC8EE895601(Local_811[9 /*5*/], "CS_PenelopeBraithwaite"))
		{
			if (iLocal_48 == 12)
			{
				func_1340(6);
			}
			else if (iLocal_48 == 13)
			{
				func_1340(18);
			}
			else if (iLocal_48 == 14)
			{
				func_1340(12);
			}
		}
	}
	switch (iLocal_1168)
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_26))
			{
				if (!bLocal_1170)
				{
					STREAMING::REQUEST_MODEL(joaat("P_CS_NEWSPAPER_01X"), false);
					bLocal_1170 = true;
				}
				else if (STREAMING::HAS_MODEL_LOADED(joaat("P_CS_NEWSPAPER_01X")))
				{
					iLocal_26 = OBJECT::CREATE_OBJECT(joaat("P_CS_NEWSPAPER_01X"), vLocal_23, true, true, false, false, true);
				}
			}
			else if (func_343(8, 0, func_339(5)))
			{
				func_1340(1);
			}
			break;
		case 1:
			if (func_459(8, 5, 1065017672 /* Float: 0.98f */))
			{
				func_1340(2);
			}
			break;
		case 2:
			if (func_343(8, 0, func_339(6)))
			{
				func_1340(3);
			}
			break;
		case 3:
			if (func_459(8, 6, 1065017672 /* Float: 0.98f */))
			{
				func_1340(4);
			}
			break;
		case 4:
			if (func_343(8, 0, func_339(7)))
			{
				func_1340(5);
			}
			break;
		case 5:
			if (func_459(8, 7, 1065017672 /* Float: 0.98f */))
			{
				func_1340(0);
			}
			break;
		case 6:
			CAM::SET_GAMEPLAY_PED_HINT(iLocal_20, 0f, 0f, 0.5f, true, 2000, 2000, 2000);
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_811[8 /*5*/]))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(Local_811[8 /*5*/]);
			}
			if (func_343(9, 0, func_339(15)))
			{
				func_1340(7);
			}
			break;
		case 7:
			if (!func_459(9, 15, 0.6f))
			{
				if (__LIB_0__::func_266(Global_35, 1239.824f, -1291.835f, 75.933f, 1f, 1, 1))
				{
					if (!__LIB_0__::func_163(Global_35, 1369124074))
					{
						TASK::TASK_ENTER_ANIM_SCENE(Global_35, Local_811[9 /*5*/], "player_zero", func_339(16), 1.48f, 0, 0, 20000, -1082130432 /* Float: -1f */);
						WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 1, 0);
					}
					bLocal_1185 = true;
				}
			}
			if (bLocal_1185)
			{
				__LIB_12__::func_773(1, 0, 1, 1);
			}
			if (func_459(9, 15, 0.99f))
			{
				if (ANIMSCENE::_0x337F1CC8EE895601(Local_811[9 /*5*/], "player_zero"))
				{
					func_1340(8);
				}
				else
				{
					func_1340(10);
				}
			}
			break;
		case 8:
			if (func_343(9, 0, func_339(16)))
			{
				func_1340(9);
			}
			break;
		case 9:
			if (func_459(9, 16, 1f))
			{
				func_1340(24);
			}
			break;
		case 10:
			if (func_343(9, 0, func_339(17)))
			{
				func_1340(11);
			}
			break;
		case 11:
			if (func_459(9, 17, 1f))
			{
				func_1340(24);
			}
			break;
		case 18:
			CAM::SET_GAMEPLAY_PED_HINT(iLocal_20, 0f, 0f, 0.5f, true, 2000, 2000, 2000);
			ANIMSCENE::_DELETE_ANIM_SCENE(Local_811[8 /*5*/]);
			if (func_343(9, 0, func_339(9)))
			{
				func_1340(19);
			}
			break;
		case 19:
			CAM::SET_GAMEPLAY_PED_HINT(iLocal_20, 0f, 0f, 0.5f, true, 2000, 2000, 2000);
			if (!func_459(9, 9, 0.6f))
			{
				if (__LIB_0__::func_266(Global_35, 1238.234f, -1291.96f, 75.968f, 1f, 1, 1))
				{
					if (!__LIB_0__::func_163(Global_35, 1369124074))
					{
						TASK::TASK_ENTER_ANIM_SCENE(Global_35, Local_811[9 /*5*/], "player_zero", func_339(10), 1.48f, 0, 0, 20000, -1082130432 /* Float: -1f */);
						WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 1, 0);
					}
					bLocal_1185 = true;
				}
			}
			if (bLocal_1185)
			{
				__LIB_12__::func_773(1, 0, 1, 1);
			}
			if (func_459(9, 9, 1f))
			{
				if (ANIMSCENE::_0x337F1CC8EE895601(Local_811[9 /*5*/], "player_zero"))
				{
					func_1340(20);
				}
				else
				{
					func_1340(22);
				}
			}
			break;
		case 20:
			CAM::SET_GAMEPLAY_PED_HINT(iLocal_20, 0f, 0f, 0.5f, true, 2000, 2000, 2000);
			if (func_343(9, 0, func_339(10)))
			{
				func_1340(21);
			}
			break;
		case 21:
			if (func_459(9, 10, 1f))
			{
				func_1340(24);
			}
			break;
		case 22:
			if (func_343(9, 0, func_339(11)))
			{
				func_1340(23);
			}
			break;
		case 23:
			if (func_459(9, 11, 1f))
			{
				func_1340(24);
			}
			break;
		case 12:
			CAM::SET_GAMEPLAY_PED_HINT(iLocal_20, 0f, 0f, 0.5f, true, 2000, 2000, 2000);
			ANIMSCENE::_DELETE_ANIM_SCENE(Local_811[8 /*5*/]);
			if (func_343(9, 0, func_339(12)))
			{
				func_1340(13);
			}
			break;
		case 13:
			CAM::SET_GAMEPLAY_PED_HINT(iLocal_20, 0f, 0f, 0.5f, true, 2000, 2000, 2000);
			if (!func_459(9, 12, 0.6f))
			{
				if (__LIB_0__::func_266(Global_35, 1238.182f, -1293.245f, 75.9657f, 1f, 1, 1))
				{
					if (!__LIB_0__::func_163(Global_35, 1369124074))
					{
						TASK::TASK_ENTER_ANIM_SCENE(Global_35, Local_811[9 /*5*/], "player_zero", func_339(13), 1.48f, 0, 0, 20000, -1082130432 /* Float: -1f */);
						WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 1, 0);
					}
					bLocal_1185 = true;
				}
			}
			if (bLocal_1185)
			{
				__LIB_12__::func_773(1, 0, 1, 1);
			}
			if (func_459(9, 12, 0.98f))
			{
				if (__LIB_0__::func_266(Global_35, 1238.182f, -1293.245f, 75.9657f, 1.5f, 1, 1) && __LIB_2__::func_123(Global_35, iLocal_20, 0f))
				{
					func_1340(14);
				}
				else
				{
					func_1340(16);
				}
			}
			break;
		case 14:
			CAM::SET_GAMEPLAY_PED_HINT(iLocal_20, 0f, 0f, 0.5f, true, 2000, 2000, 2000);
			if (func_343(9, 0, func_339(13)))
			{
				func_1340(15);
			}
			break;
		case 15:
			if (func_459(9, 13, 0.99f))
			{
				func_1340(24);
			}
			break;
		case 16:
			if (func_343(9, 0, func_339(14)))
			{
				func_1340(17);
			}
			break;
		case 17:
			if (func_459(9, 14, 0.99f))
			{
				func_1340(24);
			}
			break;
		case 24:
			func_651();
			break;
	}
}

bool func_814()
{
	if (__LIB_0__::func_266(Global_35, vLocal_429, (25f + 3f), 1, 1) && __LIB_0__::func_48(iLocal_36, Global_35, (25f + 5f), 1))
	{
		return true;
	}
	if (__LIB_0__::func_266(Global_35, vLocal_23, 25f, 1, 1))
	{
		return true;
	}
	return false;
}

bool func_815()
{
	bool bVar0;
	int iVar1;
	bVar0 = true;
	if (!bLocal_1142)
	{
		STREAMING::REQUEST_MODEL(joaat("P_CS_BILLSINGLE01X"), false);
		STREAMING::REQUEST_MODEL(joaat("P_CS_NOTE01X"), false);
		STREAMING::REQUEST_MODEL(joaat("P_CS_ADMITTICKET01X"), false);
		bLocal_1142 = true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_392))
	{
		if (STREAMING::HAS_MODEL_LOADED(joaat("P_CS_BILLSINGLE01X")))
		{
			iLocal_392 = OBJECT::CREATE_OBJECT(joaat("P_CS_BILLSINGLE01X"), 1228.8f, -1298.4f, 76.9f, true, true, false, false, true);
		}
		bVar0 = false;
	}
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_389[iVar1]))
		{
			if (STREAMING::HAS_MODEL_LOADED(joaat("P_CS_NOTE01X")))
			{
				iLocal_389[iVar1] = OBJECT::CREATE_OBJECT(joaat("P_CS_NOTE01X"), 1228.8f, -1298.4f, 76.9f, true, true, false, false, true);
			}
			bVar0 = false;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_385[iVar1]))
		{
			if (STREAMING::HAS_MODEL_LOADED(joaat("P_CS_ADMITTICKET01X")))
			{
				iLocal_385[iVar1] = OBJECT::CREATE_OBJECT(joaat("P_CS_ADMITTICKET01X"), 1228.8f, -1298.4f, 76.9f, true, true, false, false, true);
			}
			bVar0 = false;
		}
		iVar1++;
	}
	if (!bVar0)
	{
		return false;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_CS_ADMITTICKET01X"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_CS_BILLSINGLE01X"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_CS_NOTE01X"));
	return true;
}

void func_817(var uParam0)
{
	if (!bLocal_1186)
	{
		if ((iLocal_1168 == 6 || iLocal_1168 == 18) || iLocal_1168 == 12)
		{
			bLocal_1186 = true;
		}
	}
	if (bLocal_1186)
	{
		func_807(uParam0, &Global_35, 8, 30f, 50f, 0, 1, 0, 0);
		func_807(uParam0, &Global_35, 9, 30f, 50f, 0, 1, 0, 0);
		func_807(uParam0, &Global_35, 10, 30f, 50f, 0, 1, 0, 0);
	}
}

void func_818()
{
	if (!MAP::DOES_BLIP_EXIST(iLocal_21))
	{
		iLocal_21 = MAP::_BLIP_ADD_FOR_ENTITY(-89429847, iLocal_20);
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_21, "BNP21_B_BEAU");
	}
}

void func_820()
{
	switch (iLocal_1143)
	{
		case -1:
			if (!Local_811[3 /*5*/].f_3)
			{
				func_340(3, 0, func_339(23));
			}
			if (ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(Local_811[3 /*5*/], false))
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(Local_811[3 /*5*/], "CS_PenelopeBraithwaite", &vLocal_1156, true, func_339(23), 2) && ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(Local_811[3 /*5*/], "CS_BEAUGRAY", &vLocal_1144, true, func_339(23), 2))
				{
					if (__LIB_0__::func_266(iLocal_36, vLocal_1156, 1.55f, 1, 1) && __LIB_0__::func_266(iLocal_20, vLocal_1144, 1.55f, 1, 1))
					{
						PED::_0x3A50753042B6891B(iLocal_20, "p_cs_suitcase05x_PH_L_HAND");
						func_329(16);
						iLocal_1143++;
					}
				}
			}
			break;
		case 0:
			if (func_343(3, 0, func_339(23)))
			{
				iLocal_1143++;
			}
			break;
		case 1:
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_811[3 /*5*/], false) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_811[3 /*5*/]) >= 0.99f)
			{
				iLocal_1143++;
			}
			break;
		case 2:
			if (func_343(3, 0, func_339(24)))
			{
				iLocal_1143++;
			}
			break;
		case 3:
			if (func_459(3, 24, 1065017672 /* Float: 0.98f */))
			{
				iLocal_1143++;
			}
			break;
		case 4:
			if (func_343(3, 0, func_339(25)))
			{
				iLocal_1143++;
			}
			break;
		case 5:
			if (func_459(3, 25, 1065017672 /* Float: 0.98f */))
			{
				iLocal_1143++;
			}
			break;
		case 6:
			if (func_343(3, 0, func_339(26)))
			{
				iLocal_1143++;
			}
			break;
		case 7:
			if (func_459(3, 26, 1065017672 /* Float: 0.98f */))
			{
				iLocal_1143 = 2;
			}
			break;
	}
}

void func_821(bool bParam0)
{
	if (!bLocal_18)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_50) && !TASK::IS_PED_IN_WRITHE(iLocal_50))
		{
			if ((bParam0 && (func_223() || PED::IS_PED_IN_ANY_TRAIN(Global_35))) || (!bParam0 && !PED::IS_PED_ON_MOUNT(Global_35)))
			{
				if (PED::IS_PED_IN_GROUP(iLocal_50))
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_50);
				}
				if (!__LIB_0__::func_163(iLocal_50, -982327190))
				{
					TASK::CLEAR_PED_TASKS(iLocal_50, true, false);
					TASK::TASK_STAND_STILL(iLocal_50, -1);
				}
				else
				{
					bLocal_18 = true;
				}
			}
		}
	}
	else if (!__LIB_0__::func_163(iLocal_50, -982327190))
	{
		bLocal_18 = false;
	}
	__LIB_1__::func_538(0);
}

bool func_822()
{
	int iVar0;
	if (__LIB_0__::func_266(Global_35, vLocal_438, 4f, 1, 1))
	{
		if (!bLocal_1091)
		{
			func_1343();
			bLocal_1091 = true;
		}
		iVar0 = func_1344(&iLocal_379, &iLocal_1012, 15f, &Local_1073, 0, 3, 0, 0, 1, 0, 0, 2, -1082130432 /* Float: -1f */);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SHOP_BUY"), false);
		if (iVar0 != -1)
		{
			return true;
		}
	}
	else if (bLocal_1091)
	{
		func_823();
		bLocal_1091 = false;
	}
	return false;
}

void func_823()
{
	__LIB_2__::func_480(&Local_1073, 0, 0, 1, 0);
	PED::SET_PED_CONFIG_FLAG(iLocal_379, 301, true);
}

void func_825()
{
	int iVar0[5];
	int iVar6[5];
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	int iVar24;
	bool bVar25;
	int iVar26;
	bool bVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	bool bVar33;
	int iVar34;
	bool bVar35;
	bool bVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	bool bVar40;
	var uVar41;
	int iVar42;
	bool bVar43;
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return;
	}
	if (!WEAPON::_0x23BF601A42F329A0(Global_35))
	{
		return;
	}
	switch (Global_36605)
	{
		case 1:
			iVar0[0] = joaat("GROUP_SHOTGUN");
			iVar0[1] = joaat("GROUP_REPEATER");
			iVar0[2] = joaat("GROUP_RIFLE");
			iVar0[3] = joaat("GROUP_BOW");
			iVar0[4] = joaat("GROUP_SNIPER");
			break;
		case 2:
			iVar0[0] = joaat("GROUP_REPEATER");
			iVar0[1] = joaat("GROUP_RIFLE");
			iVar0[2] = joaat("GROUP_BOW");
			iVar0[3] = joaat("GROUP_SHOTGUN");
			iVar0[4] = joaat("GROUP_SNIPER");
			break;
		case 3:
			iVar0[0] = joaat("GROUP_RIFLE");
			iVar0[1] = joaat("GROUP_SNIPER");
			iVar0[2] = joaat("GROUP_REPEATER");
			iVar0[3] = joaat("GROUP_BOW");
			iVar0[4] = joaat("GROUP_SHOTGUN");
			break;
		case 4:
			iVar0[0] = joaat("GROUP_RIFLE");
			iVar0[1] = joaat("GROUP_REPEATER");
			iVar0[2] = joaat("GROUP_BOW");
			iVar0[3] = joaat("GROUP_SHOTGUN");
			iVar0[4] = joaat("GROUP_SNIPER");
			break;
		case 6:
			iVar0[0] = joaat("GROUP_SNIPER");
			iVar0[1] = joaat("GROUP_RIFLE");
			iVar0[2] = joaat("GROUP_REPEATER");
			iVar0[3] = joaat("GROUP_BOW");
			iVar0[4] = joaat("GROUP_SHOTGUN");
			break;
		case 5:
			iVar0[0] = joaat("GROUP_BOW");
			iVar0[1] = joaat("GROUP_REPEATER");
			iVar0[2] = joaat("GROUP_RIFLE");
			iVar0[3] = joaat("GROUP_SHOTGUN");
			iVar0[4] = joaat("GROUP_SNIPER");
			break;
	}
	iVar13 = 0;
	iVar16 = 0;
	while (iVar16 < 5)
	{
		if (func_1347(iVar0[iVar16], &iVar12, &iVar14, &iVar15, 0))
		{
			iVar13 = iVar0[iVar16];
		}
		else
		{
			iVar16++;
		}
	}
	if (iVar13 == 0)
	{
		iVar16 = 0;
		while (iVar16 < 5)
		{
			if (func_1347(iVar0[iVar16], &iVar12, &iVar14, &iVar15, 1))
			{
				iVar13 = iVar0[iVar16];
			}
			else
			{
				iVar16++;
			}
		}
	}
	if (iVar12 == joaat("WEAPON_UNARMED") || iVar12 == 0)
	{
		return;
	}
	iVar17 = 0;
	if (iVar13 != joaat("GROUP_REPEATER"))
	{
		iVar6[iVar17] = joaat("GROUP_REPEATER");
		iVar17++;
	}
	if (iVar13 != joaat("GROUP_RIFLE"))
	{
		iVar6[iVar17] = joaat("GROUP_RIFLE");
		iVar17++;
	}
	if (iVar13 != joaat("GROUP_SHOTGUN"))
	{
		iVar6[iVar17] = joaat("GROUP_SHOTGUN");
		iVar17++;
	}
	if (iVar13 != joaat("GROUP_SNIPER"))
	{
		iVar6[iVar17] = joaat("GROUP_SNIPER");
		iVar17++;
	}
	if (iVar13 != joaat("GROUP_BOW"))
	{
		iVar6[iVar17] = joaat("GROUP_BOW");
		iVar17++;
	}
	iVar16 = 0;
	while (iVar16 < iVar17)
	{
		if (func_1347(iVar6[iVar16], &iVar18, &iVar19, &iVar20, 0))
		{
			bVar21 = true;
		}
		else
		{
			iVar16++;
		}
	}
	if (!bVar21)
	{
		iVar16 = 0;
		while (iVar16 < iVar17)
		{
			if (func_1347(iVar6[iVar16], &iVar18, &iVar19, &iVar20, 1))
			{
			}
			else
			{
				iVar16++;
			}
		}
	}
	bVar22 = true;
	bVar23 = true;
	bVar25 = true;
	bVar27 = true;
	iVar28 = 0;
	iVar29 = 1;
	iVar30 = 1;
	iVar31 = 1;
	__LIB_18__::func_921(&iVar28, 0, &iVar29, &iVar31);
	__LIB_18__::func_921(&iVar28, 1, &iVar30, &iVar31);
	__LIB_18__::func_921(&iVar24, 9, &bVar25, &bVar22);
	bVar33 = true;
	__LIB_18__::func_921(&iVar32, 7, &bVar33, &bVar22);
	__LIB_18__::func_921(&iVar26, 10, &bVar27, &bVar23);
	bVar35 = true;
	__LIB_18__::func_921(&iVar34, 8, &bVar35, &bVar23);
	bVar36 = false;
	iVar37 = 10;
	iVar38 = 10;
	bVar40 = false;
	iVar42 = 0;
	while (iVar42 <= 1)
	{
		bVar43 = true;
		if (iVar42 == 0)
		{
			bVar43 = iVar29;
		}
		else
		{
			bVar43 = iVar30;
		}
		if (!bVar43)
		{
			iVar39 = WEAPON::_0xCAD4FE9398820D24(Global_35, uVar41);
			if (iVar39 == 9 || iVar39 == 7)
			{
				if (!WEAPON::_IS_WEAPON_BOW(iVar28))
				{
					iVar24 = iVar28;
					bVar25 = false;
				}
				else
				{
					iVar32 = iVar28;
					bVar33 = false;
				}
				if (!bVar22)
				{
					bVar40 = true;
				}
				bVar22 = false;
			}
			else
			{
				if (!WEAPON::_IS_WEAPON_BOW(iVar28))
				{
					iVar26 = iVar28;
					bVar27 = false;
				}
				else
				{
					iVar34 = iVar28;
					bVar35 = false;
				}
				if (!bVar23)
				{
					bVar40 = true;
				}
				bVar23 = false;
			}
		}
		iVar42++;
	}
	if (bVar40)
	{
		if (Global_36605 != 5 && Global_36605 != 6)
		{
			return;
		}
	}
	__LIB_16__::func_245(iVar24, iVar13, bVar25, &iVar0, &bVar36, &iVar37);
	__LIB_16__::func_245(iVar32, iVar13, bVar33, &iVar0, &bVar36, &iVar37);
	__LIB_16__::func_245(iVar26, iVar13, bVar27, &iVar0, &bVar36, &iVar38);
	__LIB_16__::func_245(iVar34, iVar13, bVar35, &iVar0, &bVar36, &iVar38);
	if (bVar22)
	{
		if (bVar23)
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar12, true, iVar14, false, false);
			if (iVar18 != joaat("WEAPON_UNARMED") && iVar18 != 0)
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar18, true, iVar20, false, false);
			}
		}
		else if (!bVar36)
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar12, true, iVar14, false, false);
		}
		else if (iVar18 != joaat("WEAPON_UNARMED") && iVar18 != 0)
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar18, true, iVar19, false, false);
		}
	}
	else if (bVar23)
	{
		if (!bVar36)
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar12, true, iVar15, false, false);
		}
		else if (iVar18 != joaat("WEAPON_UNARMED") && iVar18 != 0)
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar18, true, iVar20, false, false);
		}
	}
	else if (!bVar36)
	{
		if (Global_36605 == 5 || Global_36605 == 6)
		{
			if (iVar37 > iVar38)
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar12, true, iVar14, false, false);
			}
			else
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar12, true, iVar15, false, false);
			}
		}
	}
	Global_36606 = { __LIB_0__::func_217() };
	Global_36610 = { __LIB_0__::func_217() };
}

bool func_826(int iParam0)
{
	if (Local_811[iParam0 /*5*/].f_4)
	{
		if ((!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_811[iParam0 /*5*/], false) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_811[iParam0 /*5*/], false)) || ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_811[iParam0 /*5*/]) > 0.95f)
		{
			return true;
		}
	}
	return false;
}

void func_827()
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1201))
	{
		iLocal_1201 = VOLUME::_CREATE_VOLUME_CYLINDER(vLocal_1202, 0f, 0f, 0f, 3.5f, 3.5f, 3.5f);
	}
	func_1350(1);
	func_1350(0);
	PED::SET_PED_CONFIG_FLAG(Global_35, 258, true);
	PED::_0x2208438012482A1A(Global_35, false, false);
	PLAYER::_0x3946FC742AC305CD(PLAYER::PLAYER_ID(), Local_58[1 /*20*/], "RBAP21_BRAWL", VOLUME::_GET_VOLUME_COORDS(iLocal_1201), 0, 0);
}

void func_828()
{
	if (__LIB_0__::func_899(&uLocal_807))
	{
		if (__LIB_9__::func_401(&uLocal_807) > 25000)
		{
			VEHICLE::_0xCFE122EC635CC2B2(iLocal_577, "ACKNOWLEDGE", 1, 0);
			__LIB_5__::func_107(&uLocal_807);
		}
	}
	else
	{
		VEHICLE::_0xCFE122EC635CC2B2(iLocal_577, "ACKNOWLEDGE", 1, 0);
		__LIB_5__::func_107(&uLocal_807);
	}
}

void func_829()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_58[iVar0 /*20*/]) && ENTITY::IS_ENTITY_IN_VOLUME(Local_58[iVar0 /*20*/], iLocal_469, true, 0))
		{
			__LIB_1__::func_864(Local_58[iVar0 /*20*/], 0, 0);
		}
		iVar0++;
	}
}

bool func_830()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_58[iVar1 /*20*/]))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_58[iVar1 /*20*/], Global_35, 1, 1))
			{
				iVar0 = 1;
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_831()
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_58[iVar0 /*20*/]) && (!PED::_IS_PED_HOGTIED(Local_58[iVar0 /*20*/]) && !PED::GET_PED_CONFIG_FLAG(Local_58[iVar0 /*20*/], 11, true)))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_832(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_652(iParam0, iVar0);
		iVar0++;
	}
}

bool func_836()
{
	float fVar0;
	float fVar1;
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_575, 0.96f, 1.95f, 1.55f), true);
	fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_575, 0.96f, 1.25f, 1.55f), true);
	if (fVar0 < fVar1)
	{
		iLocal_1205 = 50;
		return true;
	}
	else
	{
		iLocal_1205 = 51;
		return true;
	}
	return false;
}

bool func_837(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (!func_217(iParam1))
	{
		if (iLocal_51 > iParam3)
		{
			func_352(iParam1);
		}
	}
	else if (!func_217(iParam2))
	{
		if (func_350(iParam4, 0, iParam5))
		{
			func_351(uParam0, iParam4);
			func_352(iParam2);
			func_352(iParam1);
			return true;
		}
	}
	else
	{
		func_352(iParam1);
	}
	return false;
}

void func_838(var uParam0, int iParam1, vector3 vParam2, vector3 vParam5, float fParam8, int iParam9, int iParam10, var uParam11, int iParam12, var uParam13, var uParam14)
{
	TASK::_0xDF8A5855B9F9A97B(uParam0, iParam1, 0, vParam5, vParam2, fParam8, iParam9, iParam10, uParam11, iParam12, uParam13, uParam14, 0, 0);
}

int func_840()
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_104[iVar0 /*23*/]))
		{
			if (!PED::IS_PED_DEAD_OR_DYING(Local_104[iVar0 /*23*/], true))
			{
				if (!PED::_IS_PED_HOGTIED(Local_104[iVar0 /*23*/]) && !PED::GET_PED_CONFIG_FLAG(Local_104[iVar0 /*23*/], 11, true))
				{
					iVar1++;
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_841(var uParam0)
{
	bool bVar0;
	if (!ENTITY::IS_ENTITY_DEAD(Local_104[0 /*23*/]) || !ENTITY::IS_ENTITY_DEAD(Local_104[1 /*23*/]))
	{
		if (!__LIB_0__::func_899(&uLocal_267))
		{
			__LIB_5__::func_107(&uLocal_267);
		}
		if (__LIB_9__::func_401(&uLocal_267) > iLocal_266 && !__LIB_6__::func_904())
		{
			bVar0 = false;
			func_1354(uParam0);
			switch (iLocal_270)
			{
				case 0:
					bVar0 = func_343(5, 0, func_339(18));
					break;
				case 1:
					bVar0 = func_343(5, 0, func_339(19));
					break;
				case 2:
					bVar0 = func_343(5, 0, func_339(20));
					break;
				case 3:
					bVar0 = func_343(5, 0, func_339(21));
					break;
				case 4:
					bVar0 = func_343(5, 0, func_339(22));
					break;
				case 5:
					if (!vLocal_594[38 /*3*/].f_1)
					{
						func_1355(uParam0);
						if (__LIB_0__::func_48(Local_104[iLocal_942 /*23*/], iLocal_20, 25f, 1))
						{
							func_807(uParam0, &(Local_104[iLocal_942 /*23*/]), 38, 40f, 60f, 0, 1, 0, 0);
						}
					}
					break;
			}
			if (bVar0)
			{
				iLocal_270++;
				__LIB_5__::func_107(&uLocal_267);
				iLocal_266 = 9000;
				Local_811[5 /*5*/].f_3 = 0;
				Local_811[5 /*5*/].f_4 = 0;
			}
		}
		else if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_811[5 /*5*/], false))
		{
			if (ANIMSCENE::_0x9D1ECA9337BE9FC3(Local_811[5 /*5*/], "G_M_M_UniBraithwaites_01") && ANIMSCENE::_GET_ANIM_SCENE_PED(Local_811[5 /*5*/], "G_M_M_UniBraithwaites_01", false) == Local_104[0 /*23*/])
			{
				if (PED::IS_PED_RAGDOLL(Local_104[0 /*23*/]))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_811[5 /*5*/], "G_M_M_UniBraithwaites_01", Local_104[0 /*23*/]);
				}
			}
			if (ANIMSCENE::_0x9D1ECA9337BE9FC3(Local_811[5 /*5*/], "G_M_M_UniBraithwaites_01") && ANIMSCENE::_GET_ANIM_SCENE_PED(Local_811[5 /*5*/], "G_M_M_UniBraithwaites_01", false) == Local_104[1 /*23*/])
			{
				if (PED::IS_PED_RAGDOLL(Local_104[1 /*23*/]))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_811[5 /*5*/], "G_M_M_UniBraithwaites_01", Local_104[1 /*23*/]);
				}
			}
		}
	}
	func_1356(5);
}

void func_842(var uParam0)
{
	func_837(uParam0, 64, 128, 0, 0, 0);
	func_837(uParam0, 256, 512, 10, 1, 0);
	func_837(uParam0, 1024, 2048, 34, 2, 0);
}

void func_843()
{
	TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_879, ENTITY::GET_ENTITY_COORDS(iLocal_579, true, false), &iLocal_51);
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_574))
	{
		if (func_217(16))
		{
			VEHICLE::SET_TRAIN_CRUISE_SPEED(iLocal_574, 0f);
			VEHICLE::_0xD0116DF21E6C7B36(iLocal_574, 0.95f);
		}
		else if (func_217(2))
		{
			VEHICLE::SET_TRAIN_CRUISE_SPEED(iLocal_574, 6f);
			VEHICLE::_0x4182C037AA1F0091(iLocal_574, 1);
		}
		else
		{
			VEHICLE::_0x4182C037AA1F0091(iLocal_574, 0);
			if (func_1357())
			{
				func_347(7.6f);
			}
			else
			{
				func_347(9.8f);
			}
		}
	}
}

void func_844(int iParam0, int iParam1)
{
	if (!__LIB_0__::func_255(uLocal_995[iParam0], 0) && iLocal_998[iParam0] != iParam1)
	{
		iLocal_998[iParam0] = iParam1;
	}
	else
	{
		return;
	}
	switch (iLocal_998[iParam0])
	{
		case 0:
			break;
		case 1:
			TASK::_TASK_VEHICLE_DRIVE_TO_DESTINATION(uLocal_995[iParam0], uLocal_994, vLocal_1007, 12f, 0, 1, 15f, 15f, 1);
			if (!MAP::DOES_BLIP_EXIST(iLocal_1001[iParam0]))
			{
				iLocal_1001[iParam0] = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), uLocal_995[iParam0]);
			}
			break;
		case 2:
			TASK::TASK_COMBAT_HATED_TARGETS(uLocal_995[iParam0], -1f);
			if (!MAP::DOES_BLIP_EXIST(iLocal_1001[iParam0]))
			{
				iLocal_1001[iParam0] = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), uLocal_995[iParam0]);
			}
			break;
		case 3:
			TASK::TASK_SMART_FLEE_PED(uLocal_995[iParam0], Global_35, 10000f, -1, 0, 1077936128 /* Float: 3f */, 0);
			__LIB_0__::func_325(&(iLocal_1001[iParam0]));
			break;
	}
}

bool func_845()
{
	if (func_840() == 0 && func_217(16))
	{
		return true;
	}
	return false;
}

void func_846(var uParam0)
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_537))
	{
		if (!func_217(524288))
		{
			if ((func_217(16) && ENTITY::GET_ENTITY_SPEED(iLocal_574) < 0.25f) || func_845())
			{
				if (PED::IS_PED_IN_ANY_TRAIN(iLocal_537) || AITRANSPORT::_0x660639BC60157048(iLocal_537, iLocal_577))
				{
					if (!AITRANSPORT::_0x660639BC60157048(iLocal_537, iLocal_577))
					{
						TASK::_TASK_DISEMBARK_VEHICLE_2(iLocal_537, 2f, 1);
					}
				}
				else if (!__LIB_0__::func_163(iLocal_537, 242628503))
				{
					TASK::CLEAR_PED_TASKS(iLocal_537, true, false);
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 608.9861f, -481.1494f, 79.9927f, 2f, -1, 6f, 1, 40000f);
					TASK::TASK_SMART_FLEE_PED(0, Global_35, 1000f, -1, 4352, 1077936128 /* Float: 3f */, 0);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_537, iVar0);
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				}
				else
				{
					func_352(524288);
				}
				if (__LIB_0__::func_255(iLocal_537, 0))
				{
					func_352(524288);
				}
			}
		}
		else
		{
			__LIB_2__::func_788(&iLocal_537, 1, 1, 1);
		}
	}
}

bool func_849()
{
	int iVar0;
	if (!func_217(67108864))
	{
		STREAMING::REQUEST_MODEL(joaat("A_C_BUFFALO_01"), false);
		func_352(67108864);
		TASK::REQUEST_WAYPOINT_RECORDING("rbap21_buffallo");
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("A_C_BUFFALO_01")))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_1092[iVar0 /*2*/]))
		{
			Local_1092[iVar0 /*2*/] = __LIB_8__::func_931(joaat("A_C_BUFFALO_01"), func_1359(iVar0), func_1360(iVar0), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			return false;
		}
		if (!__LIB_0__::func_255(Local_1092[iVar0 /*2*/], 0))
		{
			func_676(&(Local_1092[iVar0 /*2*/]), 0f, 0f, 0f, 0f, 0);
		}
		iVar0++;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_C_BUFFALO_01"));
	return true;
}

void func_850()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bVar0 = PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_VEH_HORN")) > 0f;
	bVar1 = PAD::GET_DISABLED_CONTROL_NORMAL(0, joaat("INPUT_VEH_CAR_AIM")) > 0f;
	iVar2 = 0;
	while (iVar2 < 10)
	{
		if (!__LIB_0__::func_255(Local_1092[iVar2 /*2*/], 0))
		{
			if (((bVar0 || bVar1) && Local_1092[iVar2 /*2*/].f_1 > 1) && __LIB_0__::func_48(Local_1092[iVar2 /*2*/], Global_35, 20f, 1))
			{
				func_1361(4);
			}
			switch (Local_1092[iVar2 /*2*/].f_1)
			{
				case 0:
					func_1362(iVar2, 1);
					break;
				case 1:
					if (__LIB_0__::func_266(Global_35, 222.15f, -424.72f, 88.2f, 95f, 1, 1))
					{
						func_1362(iVar2, 2);
					}
					break;
				case 2:
					if (__LIB_0__::func_266(Global_35, 90.0297f, -354.9371f, 95.7327f, 30f, 1, 1))
					{
						func_1362(iVar2, 3);
					}
					__LIB_4__::func_982(Local_1092[iVar2 /*2*/], 2f);
					TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_1092[iVar2 /*2*/], 2f);
					break;
				case 3:
					if (__LIB_0__::func_266(Local_1092[iVar2 /*2*/], 9.451f, -224.2545f, 100.7198f, 30f, 1, 1))
					{
						func_1362(iVar2, 4);
					}
					break;
				case 4:
					break;
			}
		}
		iVar2++;
	}
}

bool func_851()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	iVar0 = PERSCHAR::_0x112DDF56300BC6E5(joaat("BGV_DELIVERY_1"));
	if (PERSCHAR::_0x800DF3FC913355F3(iVar0))
	{
		PERSCHAR::_0x7B204F88F6C3D287(iVar0);
	}
	iVar0 = PERSCHAR::_0x112DDF56300BC6E5(joaat("BGV_DELIVERY_2"));
	if (PERSCHAR::_0x800DF3FC913355F3(iVar0))
	{
		PERSCHAR::_0x7B204F88F6C3D287(iVar0);
	}
	iVar0 = PERSCHAR::_0x112DDF56300BC6E5(joaat("GLO_BLW_WAGON_DELIVERY_3"));
	if (PERSCHAR::_0x800DF3FC913355F3(iVar0))
	{
		PERSCHAR::_0x7B204F88F6C3D287(iVar0);
	}
	if (iLocal_14 > 2 && iLocal_14 <= 9)
	{
		VEHICLE::SET_TRAIN_SPEED(iLocal_574, 8f);
		CAM::_0x702B75DC9D3EDE56(true);
	}
	__LIB_1__::func_572(vLocal_450, 500f, 0, 0, 0, 0, 0);
	iVar1 = 7000;
	iVar2 = 8000;
	iVar3 = 10000;
	iVar4 = 12000;
	switch (iLocal_14)
	{
		case 0:
			func_1364(1);
			break;
		case 1:
			if (CAM::_0xDD0B7C5AE58F721D("script@Story@RBNP12@TrainRideEscape") && CAM::_0xAA235E2F2C09E952("script@Story@RBNP12@TrainRideEscape"))
			{
				TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_879, ENTITY::GET_ENTITY_COORDS(iLocal_577, true, false), &iVar5);
				if (STREAMING::IS_SRL_LOADED() && iVar5 > 330)
				{
					func_1364(2);
				}
			}
			break;
		case 2:
			TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_879, ENTITY::GET_ENTITY_COORDS(iLocal_577, true, false), &iVar6);
			if ((STREAMING::IS_SRL_LOADED() && iVar6 > 500) && iLocal_15 == 12)
			{
				if (iLocal_1120 == 0)
				{
					__LIB_2__::func_608(&iLocal_1114);
					VEHICLE::SET_MISSION_TRAIN_COORDS(iLocal_574, -552.3f, -457f, 81.2f);
					iLocal_1120++;
				}
				else
				{
					func_1364(7);
					VEHICLE::SET_TRAIN_SPEED(iLocal_574, 8f);
				}
			}
			break;
		case 3:
			if (iLocal_1117 > 1)
			{
				func_1364(4);
			}
			break;
		case 4:
			iVar2 = CAM::_0xEA113BF9B0C0C5D7("script@Story@RBNP12@TrainRideEscape", "CME_SHOT1", 5);
			iVar4 = CAM::_0x465F04F68AD38197("script@Story@RBNP12@TrainRideEscape", "CME_SHOT1", 5);
			if (iLocal_1114 != 0)
			{
				iVar1 = (iVar2 - func_1365(&iLocal_1114));
				iVar3 = (iVar4 - func_1365(&iLocal_1114));
			}
			STREAMING::REQUEST_COLLISION_AT_COORD(-75.8f, -310.8f, 95.3f);
			if (!bLocal_1118)
			{
				if (AUDIO::_0xFFE9C53DEEA3DB0B(iVar1, 1789456350, -71.9f, -319.8f, 95f, STREAMING::IS_SRL_LOADED(), iVar3) && iLocal_1114 != 0)
				{
					bLocal_1118 = true;
					VEHICLE::SET_MISSION_TRAIN_COORDS(iLocal_574, -75.8f, -310.8f, 95.3f);
					VEHICLE::SET_TRAIN_SPEED(iLocal_574, 8f);
				}
			}
			else
			{
				__LIB_2__::func_608(&iLocal_1114);
				func_1364(5);
			}
			break;
		case 5:
			if (iLocal_1117 > 1)
			{
				func_1364(6);
			}
			break;
		case 6:
			iVar2 = CAM::_0xEA113BF9B0C0C5D7("script@Story@RBNP12@TrainRideEscape", "CME_SHOT2", 5);
			iVar4 = CAM::_0x465F04F68AD38197("script@Story@RBNP12@TrainRideEscape", "CME_SHOT2", 5);
			if (iLocal_1114 != 0)
			{
				iVar1 = (iVar2 - func_1365(&iLocal_1114));
				iVar3 = (iVar4 - func_1365(&iLocal_1114));
			}
			STREAMING::REQUEST_COLLISION_AT_COORD(-552.3f, -457f, 81.2f);
			if (!bLocal_1118)
			{
				if ((AUDIO::_0xFFE9C53DEEA3DB0B(iVar1, 196135925, -520.1f, -482.6f, 94.2f, STREAMING::IS_SRL_LOADED(), iVar3) && iLocal_1114 != 0) && IntToFloat(iVar1) <= 0f)
				{
					bLocal_1118 = true;
					VEHICLE::SET_MISSION_TRAIN_COORDS(iLocal_574, -552.3f, -457f, 81.2f);
					VEHICLE::SET_TRAIN_SPEED(iLocal_574, 8f);
				}
			}
			else if (iLocal_1117 > 4)
			{
				__LIB_2__::func_608(&iLocal_1114);
				func_1364(7);
			}
			break;
		case 7:
			if (iLocal_1117 > 4)
			{
				func_1364(8);
			}
			break;
		case 8:
			iVar2 = CAM::_0xEA113BF9B0C0C5D7("script@Story@RBNP12@TrainRideEscape", "CME_SHOT4", 5);
			iVar4 = CAM::_0x465F04F68AD38197("script@Story@RBNP12@TrainRideEscape", "CME_SHOT4", 5);
			if (iLocal_1114 != 0)
			{
				iVar1 = (iVar2 - func_1365(&iLocal_1114));
				iVar3 = (iVar4 - func_1365(&iLocal_1114));
			}
			STREAMING::REQUEST_COLLISION_AT_COORD(-994.1f, -631.2f, 73.8f);
			if (!bLocal_1118)
			{
				if (AUDIO::_0xFFE9C53DEEA3DB0B(iVar1, -1748476369, -111.4f, -572.3f, 84.5f, STREAMING::IS_SRL_LOADED(), iVar3))
				{
					bLocal_1118 = true;
					VEHICLE::SET_MISSION_TRAIN_COORDS(iLocal_574, -994.1f, -631.2f, 73.8f);
					VEHICLE::SET_TRAIN_SPEED(iLocal_574, 8f);
				}
			}
			else if (iLocal_1117 > 4)
			{
				__LIB_2__::func_608(&iLocal_1114);
				func_1364(9);
			}
			break;
		case 9:
			iVar2 = CAM::_0xEA113BF9B0C0C5D7("script@Story@RBNP12@TrainRideEscape", "CME_SHOT3", 5);
			iVar4 = CAM::_0x465F04F68AD38197("script@Story@RBNP12@TrainRideEscape", "CME_SHOT3", 5);
			iVar1 = (iVar2 - func_1365(&iLocal_1114));
			iVar3 = (iVar4 - func_1365(&iLocal_1114));
			if (AUDIO::_0xFFE9C53DEEA3DB0B(iVar1, 0, -111.4f, -572.3f, 84.5f, true, iVar3))
			{
				VEHICLE::SET_TRAIN_SPEED(iLocal_574, 0f);
				return true;
			}
			break;
	}
	iLocal_1117++;
	return false;
}

bool func_889(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
				func_889(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
						func_889(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_889(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_889(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_889(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_889(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_889(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_889(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
					func_889(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_889(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_889(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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

void func_891()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_1472();
	func_1473();
	func_1474();
	func_1475();
	func_1476();
	__LIB_1__::func_848();
	__LIB_0__::func_376();
}

void func_892(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	func_1479(iParam0, 1, 1, -142743235, 1);
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

void func_927()
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
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_1505(&uVar4, &iVar1, &iVar2, &iVar3)))
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

int func_1010(var uParam0, int iParam1, int iParam2)
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
		return func_1010(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

void func_1162(int iParam0)
{
	func_1678();
	switch (Local_104[iParam0 /*23*/].f_16)
	{
		case 0:
			break;
		case 1:
			__LIB_2__::func_788(&(Local_104[iParam0 /*23*/].f_1), 1, 0, 1);
			__LIB_2__::func_788(&(Local_104[iParam0 /*23*/]), 1, 0, 1);
			Local_104[iParam0 /*23*/].f_11 = 0;
			if (__LIB_0__::func_899(&(Local_104[iParam0 /*23*/].f_13)))
			{
				if (__LIB_9__::func_178(&(Local_104[iParam0 /*23*/].f_13)) > 5f)
				{
					func_1173(iParam0, 2);
					__LIB_2__::func_608(&(Local_104[iParam0 /*23*/].f_13));
				}
			}
			else
			{
				__LIB_5__::func_107(&(Local_104[iParam0 /*23*/].f_13));
			}
			break;
		case 2:
			if (func_217(33554432))
			{
				if (func_217(256))
				{
					if (!func_217(16))
					{
						if (iLocal_51 < 140)
						{
							func_1173(iParam0, 3);
						}
					}
				}
			}
			else
			{
				func_1173(iParam0, 1);
				__LIB_2__::func_620(&(Local_104[iParam0 /*23*/].f_13), 2.5f);
			}
			break;
		case 3:
			Local_104[iParam0 /*23*/].f_3 = { func_1679() };
			if (!__LIB_0__::func_86(Local_104[iParam0 /*23*/].f_3))
			{
				__LIB_2__::func_788(&(Local_104[iParam0 /*23*/]), 1, 0, 1);
				__LIB_2__::func_788(&(Local_104[iParam0 /*23*/].f_1), 1, 0, 1);
				func_1173(iParam0, 4);
			}
			break;
		case 4:
			if (func_719(iParam0, 0, 0))
			{
				func_1173(iParam0, 5);
			}
			break;
		case 5:
			Local_104[iParam0 /*23*/].f_3 = { 0f, 0f, 0f };
			PED::FORCE_PED_MOTION_STATE(Local_104[iParam0 /*23*/].f_1, joaat("MOTIONSTATE_RUN"), false, 0, false);
			func_1167(iParam0, 5);
			func_1173(iParam0, 0);
			break;
	}
}

void func_1163(int iParam0)
{
	if (iLocal_15 > 7)
	{
		if (!MAP::DOES_BLIP_EXIST(Local_104[iParam0 /*23*/].f_2))
		{
			if ((__LIB_0__::func_266(Local_104[iParam0 /*23*/], Global_36, 100f, 1, 1) && Local_104[iParam0 /*23*/].f_7 != 7) && Local_104[iParam0 /*23*/].f_7 != 15)
			{
				Local_104[iParam0 /*23*/].f_2 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_104[iParam0 /*23*/]);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_104[iParam0 /*23*/].f_2, "BNP21_B_BRAI");
			}
		}
		else if (__LIB_0__::func_255(Local_104[iParam0 /*23*/], 0))
		{
			__LIB_0__::func_325(&(Local_104[iParam0 /*23*/].f_2));
		}
	}
	if (PED::_IS_PED_HOGTIED(Local_104[iParam0 /*23*/]))
	{
		func_1167(iParam0, 15);
		__LIB_0__::func_325(&(Local_104[iParam0 /*23*/].f_2));
	}
}

void func_1164(int iParam0)
{
	float fVar0;
	fVar0 = 200f;
	if (iLocal_15 == 9)
	{
		fVar0 = 75f;
	}
	if (iLocal_15 > 7)
	{
		if (!__LIB_0__::func_48(Local_104[iParam0 /*23*/], iLocal_579, fVar0, 1))
		{
			if (!__LIB_11__::func_850(ENTITY::GET_ENTITY_COORDS(Local_104[iParam0 /*23*/], true, false), 2f, fVar0))
			{
				func_1167(iParam0, 7);
			}
		}
	}
}

void func_1165(int iParam0)
{
	float fVar0;
	if (!__LIB_0__::func_899(&uLocal_1126))
	{
		__LIB_5__::func_107(&uLocal_1126);
	}
	else
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_104[iParam0 /*23*/], Global_35, 1, 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_35, Local_104[iParam0 /*23*/], 1, 1))
		{
			__LIB_5__::func_107(&uLocal_1126);
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_104[iParam0 /*23*/]);
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Global_35);
		}
		fVar0 = __LIB_9__::func_178(&uLocal_1126);
		if (fVar0 > 9f)
		{
			PED::SET_PED_ACCURACY(Local_104[iParam0 /*23*/], 100);
		}
		else if (fVar0 > 7f)
		{
			PED::SET_PED_ACCURACY(Local_104[iParam0 /*23*/], 90);
		}
		else if (fVar0 > 5f)
		{
			PED::SET_PED_ACCURACY(Local_104[iParam0 /*23*/], 80);
		}
		else if (fVar0 > 3f)
		{
			PED::SET_PED_ACCURACY(Local_104[iParam0 /*23*/], 40);
		}
		else
		{
			PED::SET_PED_ACCURACY(Local_104[iParam0 /*23*/], 80);
		}
	}
}

void func_1166(int iParam0)
{
	if (!__LIB_0__::func_71(Local_104[iParam0 /*23*/]))
	{
		if (!Local_104[iParam0 /*23*/].f_9)
		{
			func_1167(iParam0, 7);
		}
	}
}

void func_1167(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	int iVar5;
	if ((iParam1 != Local_104[iParam0 /*23*/].f_7 && !ENTITY::IS_ENTITY_DEAD(Local_104[iParam0 /*23*/])) && !PED::IS_PED_FATALLY_INJURED(Local_104[iParam0 /*23*/]))
	{
		Local_104[iParam0 /*23*/].f_7 = iParam1;
	}
	else
	{
		return;
	}
	iVar1 = 0;
	vVar2 = { 0f, 0f, 0f };
	switch (Local_104[iParam0 /*23*/].f_7)
	{
		case 0:
			break;
		case 1:
			TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_104[iParam0 /*23*/], Local_104[iParam0 /*23*/].f_8, 0, 4220428, -1, 0, 0, -1);
			PED::SET_PED_SHOOT_RATE(Local_104[iParam0 /*23*/], 300);
			break;
		case 5:
			TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(Local_104[iParam0 /*23*/].f_8, ENTITY::GET_ENTITY_COORDS(iLocal_575, true, false), &iVar1);
			TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(Local_104[iParam0 /*23*/].f_8, &iVar5);
			if (iVar1 + 18 >= iVar5)
			{
				TASK::WAYPOINT_RECORDING_GET_COORD(Local_104[iParam0 /*23*/].f_8, iVar1, &vVar2);
			}
			else
			{
				TASK::WAYPOINT_RECORDING_GET_COORD(Local_104[iParam0 /*23*/].f_8, iVar1 + 18, &vVar2);
			}
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_104[iParam0 /*23*/], vVar2, 3f, -1, 0.25f, 0, 40000f);
			break;
		case 4:
			break;
		case 6:
			PED::SET_PED_SHOOT_RATE(Local_104[iParam0 /*23*/], 100);
			TASK::TASK_COMBAT_PED(Local_104[iParam0 /*23*/], Global_35, 0, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_104[iParam0 /*23*/], 46, true);
			PED::SET_PED_COMBAT_MOVEMENT(Local_104[iParam0 /*23*/], 2);
			break;
		case 13:
			TASK::TASK_COMBAT_PED(Local_104[iParam0 /*23*/], Global_35, 0, 0);
			break;
		case 7:
			TASK::CLEAR_PED_TASKS(Local_104[iParam0 /*23*/], true, false);
			TASK::CLEAR_PED_TASKS(Local_104[iParam0 /*23*/].f_1, true, false);
			PED::SET_PED_FLEE_ATTRIBUTES(Local_104[iParam0 /*23*/], 512, false);
			TASK::TASK_SMART_FLEE_PED(Local_104[iParam0 /*23*/], Global_35, 1000f, -1, 16, 1077936128 /* Float: 3f */, 0);
			break;
		case 9:
			PED::SET_PED_ACCURACY(Local_104[iParam0 /*23*/], 100);
			PED::_0x52A24D8A1DA89658(Global_35, 4, 1);
			PED::_0x52A24D8A1DA89658(iLocal_20, 4, 1);
			__LIB_3__::func_443(Local_104[iParam0 /*23*/]);
			TASK::TASK_COMBAT_HATED_TARGETS(Local_104[iParam0 /*23*/], -1f);
			break;
		case 8:
			TASK::CLEAR_PED_TASKS(Local_104[iParam0 /*23*/], true, false);
			TASK::CLEAR_PED_TASKS(Local_104[iParam0 /*23*/].f_1, true, false);
			PED::SET_PED_FLEE_ATTRIBUTES(Local_104[iParam0 /*23*/], 512, false);
			TASK::_TASK_FLEE_FROM_COORD(Local_104[iParam0 /*23*/], vLocal_453, 839.0616f, -697.4914f, 65.8525f, 1000f, -1, 1040, 1077936128 /* Float: 3f */, 0);
			break;
		case 10:
			ENTITY::_SET_ENTITY_HEALTH(Local_104[iParam0 /*23*/], 60, 0);
			TASK::TASK_MOUNT_ANIMAL(Local_104[iParam0 /*23*/], Local_104[iParam0 /*23*/].f_1, -1, -1, 2f, 1, 0, 0);
			break;
		case 12:
			TASK::CLEAR_PED_TASKS(Local_104[iParam0 /*23*/], true, false);
			TASK::CLEAR_PED_TASKS(Local_104[iParam0 /*23*/].f_1, true, false);
			TASK::TASK_COMBAT_PED(Local_104[iParam0 /*23*/], Global_35, 16777216, 0);
			PED::SET_PED_COMBAT_MOVEMENT(Local_104[iParam0 /*23*/], 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_104[iParam0 /*23*/], 98, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_104[iParam0 /*23*/], 67, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_104[iParam0 /*23*/], 30, true);
			__LIB_5__::func_107(&(Local_104[iParam0 /*23*/].f_20));
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_104[iParam0 /*23*/], ENTITY::GET_ENTITY_COORDS(Local_104[iParam0 /*23*/], true, false), 5f, 0, 0, 0);
			break;
		case 11:
			iVar0 = __LIB_3__::func_547(Local_104[iParam0 /*23*/], Global_35, 1060437492 /* Float: 0.707f */);
			PED::SET_PED_SHOOT_RATE(Local_104[iParam0 /*23*/], 100);
			if (iVar0 != 3)
			{
				TASK::TASK_DISMOUNT_ANIMAL(Local_104[iParam0 /*23*/], 262144, 0, 0, 0, Global_35);
			}
			else
			{
				TASK::TASK_DISMOUNT_ANIMAL(Local_104[iParam0 /*23*/], 131072, 0, 0, 0, Global_35);
			}
			break;
	}
}

bool func_1168(int iParam0, int iParam1)
{
	if (func_1682(iParam0) < iParam1)
	{
		Local_104[iParam0 /*23*/].f_9 = 1;
		return true;
	}
	return false;
}

void func_1169(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		func_1167(iVar0, iParam0);
		iVar0++;
	}
}

int func_1171(var uParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1))
	{
		fVar2 = TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(uParam0->f_1);
		TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(uParam0->f_8, ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false), &iVar5);
		TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(uParam0->f_8, &iVar4);
		iVar6 = iLocal_579;
		if (__LIB_1__::func_205(Global_35, Local_581[3 /*2*/], 1, 0))
		{
			iVar6 = iLocal_576;
		}
		else if (__LIB_1__::func_205(Global_35, Local_581[5 /*2*/], 1, 0))
		{
			iVar6 = iLocal_580;
		}
		else if (__LIB_1__::func_205(Global_35, Local_581[1 /*2*/], 1, 0))
		{
			iVar6 = iLocal_578;
		}
		else if (__LIB_1__::func_205(Global_35, Local_581[0 /*2*/], 1, 0))
		{
			iVar6 = iLocal_577;
		}
		TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_879, ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false), &iVar1);
		TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_879, ENTITY::GET_ENTITY_COORDS(iVar6, true, false), &iVar0);
		iVar7 = (iVar0 - iVar1);
		if (fVar2 < 1f)
		{
			fVar2 = 1f;
		}
		if (iVar7 > iLocal_937)
		{
			fVar3 = (fVar2 + fLocal_938);
		}
		else
		{
			fVar3 = (fVar2 - fLocal_939);
		}
		if (fVar3 < fLocal_940)
		{
			fVar3 = fLocal_940;
		}
		if (fVar3 > fLocal_941)
		{
			fVar3 = fLocal_941;
		}
		PED::SET_PED_MIN_MOVE_BLEND_RATIO(uParam0->f_1, fVar3);
		TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(uParam0->f_1, fVar3);
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(uParam0->f_1, fVar3);
		uParam0->f_17 = fVar3;
		if ((iVar4 - 6) < iVar5)
		{
			return 1;
		}
	}
	return 0;
}

void func_1173(int iParam0, int iParam1)
{
	if (Local_104[iParam0 /*23*/].f_16 != iParam1)
	{
		Local_104[iParam0 /*23*/].f_16 = iParam1;
	}
}

void func_1187(int iParam0, int iParam1, var uParam2, float fParam3, float fParam4, char* sParam5)
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	if (ENTITY::IS_ENTITY_DEAD(*iParam0) || !MISC::IS_BIT_SET(iParam1->f_21, 0))
	{
		return;
	}
	__LIB_3__::func_95(iParam1, *iParam0, iParam1->f_56, 0);
	fVar0 = __LIB_0__::func_514(fParam4 >= 0f, fParam4, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*iParam0, true, false)));
	__LIB_3__::func_27(iParam1, fParam3);
	func_1694(iParam0, iParam1, uParam2, fVar0);
	func_1695(iParam1);
	if (MISC::IS_BIT_SET(iParam1->f_21, 20))
	{
		bVar1 = MISC::IS_STRING_NULL_OR_EMPTY(sParam5);
		__LIB_11__::func_414(iParam1, uParam2, iParam0, bVar1, sParam5, fVar0);
		if (!PED::IS_PED_ON_MOUNT(Global_35) && !PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
		{
			bVar2 = true;
			if (!MISC::IS_BIT_SET(*iParam1, 12))
			{
				bVar2 = __LIB_6__::func_789(iParam1, iParam0);
			}
			if (bVar2 && !MISC::IS_BIT_SET(*iParam1, 13))
			{
				func_1698(iParam1);
			}
		}
	}
}

void func_1188(int iParam0)
{
	if (iParam0 != iLocal_1233)
	{
		iLocal_1233 = iParam0;
	}
}

void func_1189()
{
	PED::SET_PED_CONFIG_FLAG(iLocal_36, 301, false);
	PED::SET_PED_CAN_BE_TARGETTED(iLocal_36, true);
	__LIB_13__::func_285(&iLocal_295, &Local_356, 0, Global_1347702[7 /*49*/].f_37, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	__LIB_3__::func_157(&(Local_356[0 /*17*/]), "BNP21_G_PENE", 0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
}

bool func_1190()
{
	iLocal_1232 = func_1344(&iLocal_36, &iLocal_295, 5f, &Local_356, 0, 3, 0, "", 5, 0, 0, 2, -1082130432 /* Float: -1f */);
	if (iLocal_1232 != -1 || __LIB_0__::func_48(Global_35, iLocal_36, 1.8f, 1))
	{
		if (!bLocal_30)
		{
			return true;
		}
	}
	return false;
}

int func_1220(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
	if (func_1735(*iParam0, iParam1, *iParam2, bParam3, iParam4))
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

bool func_1230()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if ((!ENTITY::IS_ENTITY_DEAD(Local_58[iVar0 /*20*/]) && !PED::_IS_PED_HOGTIED(Local_58[iVar0 /*20*/])) && !PED::GET_PED_CONFIG_FLAG(Local_58[iVar0 /*20*/], 11, true))
		{
			if (ENTITY::GET_ENTITY_HEALTH(Local_58[iVar0 /*20*/]) < 61)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_1232(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_104[iParam0 /*23*/].f_1))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(Local_104[iParam0 /*23*/].f_1))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_104[iParam0 /*23*/].f_1, true, false);
		}
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_104[iParam0 /*23*/].f_1, true);
		PED::SET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(Local_104[iParam0 /*23*/].f_1, iLocal_276);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_104[iParam0 /*23*/].f_1, iLocal_276);
		PED::SET_PED_CONFIG_FLAG(Local_104[iParam0 /*23*/].f_1, 6, true);
		TASK::_0x8798CF6815B8FE0F(Local_104[iParam0 /*23*/].f_1, 30f);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_104[iParam0 /*23*/].f_1, 1);
		PATHFIND::ADD_NAVMESH_REQUIRED_REGION(Local_104[iParam0 /*23*/].f_3, Local_104[iParam0 /*23*/].f_3.f_1, 50f);
	}
}

void func_1233(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_104[iParam0 /*23*/]) && !ENTITY::IS_ENTITY_DEAD(Local_104[iParam0 /*23*/].f_1))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(Local_104[iParam0 /*23*/]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_104[iParam0 /*23*/], true, false);
		}
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_104[iParam0 /*23*/], true);
		PED::SET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(Local_104[iParam0 /*23*/], iLocal_276);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_104[iParam0 /*23*/], iLocal_276);
		PED::SET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(Local_104[iParam0 /*23*/].f_1, iLocal_276);
		PED::SET_PED_ACCURACY(Local_104[iParam0 /*23*/], 30);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_104[iParam0 /*23*/], 46, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_104[iParam0 /*23*/], 67, true);
		PED::SET_PED_FLEE_ATTRIBUTES(Local_104[iParam0 /*23*/], 512, true);
		PED::SET_PED_CONFIG_FLAG(Local_104[iParam0 /*23*/], 6, true);
		PED::SET_PED_CONFIG_FLAG(Local_104[iParam0 /*23*/], 186, false);
		ENTITY::_0x18FF3110CF47115D(Local_104[iParam0 /*23*/], 1, 0);
		TASK::_0x8798CF6815B8FE0F(Local_104[iParam0 /*23*/], 30f);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_104[iParam0 /*23*/], 1);
		PATHFIND::ADD_NAVMESH_REQUIRED_REGION(Local_104[iParam0 /*23*/].f_3, Local_104[iParam0 /*23*/].f_3.f_1, 50f);
		__LIB_1__::func_571(Local_104[iParam0 /*23*/], Local_104[iParam0 /*23*/].f_1, 0, -1, 1);
		Local_104[iParam0 /*23*/].f_10 = func_1744(iParam0);
		ENTITY::_SET_ENTITY_SOMETHING(Local_104[iParam0 /*23*/], true);
		ENTITY::_SET_ENTITY_SOMETHING(Local_104[iParam0 /*23*/].f_1, true);
		PED::_SET_PED_OUTFIT_PRESET(Local_104[iParam0 /*23*/], iParam0, false);
		switch (iParam0)
		{
			case 0:
				__LIB_1__::func_766(Local_104[iParam0 /*23*/], joaat("GROUP_REVOLVER"), 1, 1, 0, 0, 0, 1f, 0.25f, -1, 0, 0, 0, 0);
				break;
			case 1:
				__LIB_1__::func_766(Local_104[iParam0 /*23*/], joaat("GROUP_REVOLVER"), 1, 1, 0, 0, 0, 1f, 0.25f, -1, 0, 0, 0, 0);
				break;
			case 2:
				__LIB_1__::func_766(Local_104[iParam0 /*23*/], joaat("GROUP_RIFLE"), 1, 1, 0, 0, 0, 1f, 0.25f, -1, 0, 0, 0, 0);
				PED::SET_PED_COMBAT_MOVEMENT(Local_104[iParam0 /*23*/], 2);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_104[iParam0 /*23*/], 50, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_104[iParam0 /*23*/], 0, false);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_104[iParam0 /*23*/], 43, true);
				break;
			case 3:
				__LIB_1__::func_766(Local_104[iParam0 /*23*/], joaat("GROUP_SHOTGUN"), 1, 1, 0, 0, 0, 1f, 0.25f, -1, 0, 0, 0, 0);
				break;
			case 6:
				__LIB_1__::func_766(Local_104[iParam0 /*23*/], joaat("GROUP_SHOTGUN"), 1, 1, 0, 0, 0, 1f, 0.25f, -1, 0, 0, 0, 0);
				PED::SET_PED_COMBAT_MOVEMENT(Local_104[iParam0 /*23*/], 2);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_104[iParam0 /*23*/], 50, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_104[iParam0 /*23*/], 0, false);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_104[iParam0 /*23*/], 43, true);
				break;
			case 4:
				__LIB_1__::func_766(Local_104[iParam0 /*23*/], joaat("GROUP_RIFLE"), 1, 1, 0, 0, 0, 1f, 0.25f, -1, 0, 0, 0, 0);
				break;
			case 5:
				__LIB_1__::func_766(Local_104[iParam0 /*23*/], joaat("GROUP_RIFLE"), 1, 1, 0, 0, 0, 1f, 0.25f, -1, 0, 0, 0, 0);
				break;
		}
	}
}

void func_1262(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
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
		func_1751();
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

void func_1264(var uParam0)
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
			func_1758(iVar1, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_1758(iVar3, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_1265(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if ((__LIB_0__::func_84(uParam0, 268435456) && !__LIB_0__::func_86(__LIB_12__::func_720(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { __LIB_12__::func_720(uParam0) };
			func_1758(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

void func_1314(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	float fVar1;
	switch (uParam0->f_371[iParam1 /*18*/].f_2)
	{
		case 9:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_1418[uParam0->f_371[iParam1 /*18*/].f_4 /*10*/].f_8) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_1418[uParam0->f_371[iParam1 /*18*/].f_4 /*10*/].f_8, false))
			{
				fVar1 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(uParam0->f_1418[uParam0->f_371[iParam1 /*18*/].f_4 /*10*/].f_8);
				iVar0 = 0;
				while (iVar0 < 27)
				{
					if ((((uParam0->f_3[iVar0 /*13*/] && !ENTITY::IS_ENTITY_DEAD(uParam0->f_3[iVar0 /*13*/].f_2)) && uParam0->f_3[iVar0 /*13*/].f_8 > 0f) && fVar1 >= uParam0->f_3[iVar0 /*13*/].f_8) && !ENTITY::IS_ENTITY_VISIBLE(uParam0->f_3[iVar0 /*13*/].f_2))
					{
						ENTITY::SET_ENTITY_VISIBLE(uParam0->f_3[iVar0 /*13*/].f_2, true);
					}
					iVar0++;
				}
				if (((__LIB_0__::func_84(&(uParam0->f_371[iParam1 /*18*/]), 4) && uParam0->f_371[iParam1 /*18*/].f_12 < 1f) && fVar1 >= uParam0->f_371[iParam1 /*18*/].f_12) && !PLAYER::IS_PLAYER_SCRIPT_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
				{
					TASK::CLEAR_PED_TASKS(Global_35, true, false);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
				}
				if (__LIB_0__::func_84(&(uParam0->f_371[iParam1 /*18*/]), 64) && __LIB_12__::func_727(uParam0, iParam1, 0))
				{
					__LIB_5__::func_123(uParam0, uParam0->f_1418[uParam0->f_371[iParam1 /*18*/].f_4 /*10*/].f_8, uParam0->f_371[iParam1 /*18*/].f_13, uParam0->f_371[iParam1 /*18*/].f_14);
				}
			}
			break;
		case 10:
			if ((uParam0->f_371[iParam1 /*18*/].f_3 >= 0 && uParam0->f_371[iParam1 /*18*/].f_5 >= 0) && uParam0->f_371[iParam1 /*18*/].f_3 != uParam0->f_371[iParam1 /*18*/].f_5)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3[uParam0->f_371[iParam1 /*18*/].f_3 /*13*/].f_2) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_3[uParam0->f_371[iParam1 /*18*/].f_5 /*13*/].f_2))
				{
					if (ENTITY::IS_ENTITY_A_PED(uParam0->f_3[uParam0->f_371[iParam1 /*18*/].f_3 /*13*/].f_2) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[uParam0->f_371[iParam1 /*18*/].f_3 /*13*/].f_2)))
					{
						__LIB_4__::func_640(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[uParam0->f_371[iParam1 /*18*/].f_3 /*13*/].f_2), uParam0->f_3[uParam0->f_371[iParam1 /*18*/].f_5 /*13*/].f_2, uParam0->f_371[iParam1 /*18*/].f_13, uParam0->f_371[iParam1 /*18*/].f_14);
					}
					if ((__LIB_0__::func_84(&(uParam0->f_371[iParam1 /*18*/]), 128) && ENTITY::IS_ENTITY_A_PED(uParam0->f_3[uParam0->f_371[iParam1 /*18*/].f_5 /*13*/].f_2)) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[uParam0->f_371[iParam1 /*18*/].f_5 /*13*/].f_2)))
					{
						__LIB_4__::func_640(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[uParam0->f_371[iParam1 /*18*/].f_5 /*13*/].f_2), uParam0->f_3[uParam0->f_371[iParam1 /*18*/].f_3 /*13*/].f_2, uParam0->f_371[iParam1 /*18*/].f_13, uParam0->f_371[iParam1 /*18*/].f_14);
					}
				}
			}
			break;
		case 4:
			func_1317(uParam0, iParam1, 0, 0);
			break;
	}
}

void func_1316(var uParam0, int iParam1, int iParam2)
{
	switch (uParam0->f_371[iParam1 /*18*/].f_2)
	{
		case 9:
			__LIB_12__::func_928(uParam0, iParam2, iParam1);
			break;
		case 4:
			func_1317(uParam0, iParam1, 0, 0);
			break;
		case 5:
			uParam0->f_371[iParam1 /*18*/].f_7 = 1;
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_912[uParam0->f_371[iParam1 /*18*/] /*41*/].f_19)) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_912[uParam0->f_371[iParam1 /*18*/] /*41*/].f_22)))
			{
				if (__LIB_1__::func_583(&(uParam0->f_1768)) >= IntToFloat((uParam0->f_912[uParam0->f_371[iParam1 /*18*/] /*41*/].f_25 / 1000)))
				{
					__LIB_12__::func_775(uParam0);
					if (!AUDIO::_0xD89504D9D7D5057D(&(uParam0->f_912[uParam0->f_371[iParam1 /*18*/] /*41*/].f_22)))
					{
						__LIB_1__::func_104(&(uParam0->f_1667), uParam0->f_912[uParam0->f_371[iParam1 /*18*/] /*41*/].f_22, 0, -1, 0, 0);
					}
					else
					{
						AUDIO::START_PRELOADED_CONVERSATION(&(uParam0->f_912[uParam0->f_371[iParam1 /*18*/] /*41*/].f_22));
					}
					uParam0->f_371[iParam1 /*18*/].f_7 = 1;
				}
			}
			else
			{
				uParam0->f_371[iParam1 /*18*/].f_7 = 1;
			}
			break;
		case 10:
			uParam0->f_371[iParam1 /*18*/].f_7 = 1;
			break;
		case 11:
			uParam0->f_371[iParam1 /*18*/].f_7 = 1;
			uParam0->f_1581 = iParam1;
			break;
	}
}

int func_1317(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	var uVar5;
	iVar2 = uParam0->f_1584;
	if (iParam1 >= 0)
	{
		iVar2 = uParam0->f_371[iParam1 /*18*/];
		fVar3 = uParam0->f_912[uParam0->f_1584 /*41*/].f_7;
		fVar4 = uParam0->f_912[uParam0->f_1584 /*41*/].f_7.f_1;
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
				if (!__LIB_12__::func_728(uParam0, iVar2))
				{
					uParam0->f_1581 = iParam1;
				}
				uParam0->f_371[iParam1 /*18*/].f_7 = 1;
			}
			if (((!__LIB_0__::func_274(&(uParam0->f_912[iVar2 /*41*/]), 32) && __LIB_4__::func_641()) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_355))) || (!__LIB_0__::func_274(&(uParam0->f_912[iVar2 /*41*/]), 128) && uParam0->f_1795))
			{
				if (uParam0->f_1795)
				{
					VEHICLE::BRING_VEHICLE_TO_HALT(uParam0->f_1797, 0.1f, -1, false);
					if (!__LIB_12__::func_655(uParam0, 8192))
					{
						VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(uParam0->f_1797, 0f);
					}
					TASK::TASK_VEHICLE_TEMP_ACTION(Global_35, uParam0->f_1797, 24, 1000);
					__LIB_13__::func_288(uParam0, 8);
				}
				else
				{
					__LIB_12__::func_693(uParam0, 131072);
					__LIB_13__::func_288(uParam0, 11);
				}
			}
			else if (uParam0->f_1793)
			{
				__LIB_13__::func_288(uParam0, 5);
			}
			else
			{
				__LIB_13__::func_368(uParam0);
			}
			break;
		case 1:
			bVar0 = __LIB_9__::func_178(&(uParam0->f_1765)) >= 3f;
			if ((((!__LIB_0__::func_163(Global_35, 716706914) && !__LIB_0__::func_163(Global_35, 242628503)) && __LIB_9__::func_178(&(uParam0->f_1765)) >= 2.5f) || (!__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 0, 1, 0)) && !__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 1, 1, 0)))) || bVar0)
			{
				__LIB_13__::func_368(uParam0);
				if (bVar0)
				{
				}
			}
			break;
		case 5:
		case 6:
			bVar0 = __LIB_9__::func_178(&(uParam0->f_1765)) >= 3.5f;
			iVar1 = 5664;
			if (__LIB_0__::func_274(&(uParam0->f_912[uParam0->f_1584 /*41*/]), 512))
			{
				iVar1 |= 128;
			}
			if (!__LIB_12__::func_692(uParam0, uParam0->f_1584))
			{
				iVar1 |= 2048;
			}
			if (__LIB_3__::func_869(Global_35, &(uParam0->f_1582), iVar1, 0, 0, 1084227584 /* Float: 5f */, 100, fVar3, fVar4))
			{
				__LIB_13__::func_368(uParam0);
			}
			if ((!uParam0->f_1793 && !uParam0->f_1795) || bVar0)
			{
				uParam0->f_1582 = 0;
				if (__LIB_4__::func_576(uParam0) == 5 || iParam1 < 0)
				{
					__LIB_13__::func_368(uParam0);
				}
				else
				{
					__LIB_13__::func_292(uParam0, iParam1, bParam2);
					__LIB_5__::func_107(&(uParam0->f_1765));
					__LIB_13__::func_288(uParam0, 7);
				}
				if (bVar0)
				{
				}
			}
			break;
		case 7:
			bVar0 = __LIB_9__::func_178(&(uParam0->f_1765)) >= 1f;
			if (__LIB_0__::func_491(Global_35, 242628503) || bVar0)
			{
				__LIB_13__::func_288(uParam0, 3);
				if (bVar0)
				{
				}
			}
			break;
		case 3:
			if (!__LIB_0__::func_274(&(uParam0->f_912[iVar2 /*41*/]), 256))
			{
				if (__LIB_1__::func_750(&(uParam0->f_1799)))
				{
					__LIB_5__::func_386(uParam0->f_1799, 0);
				}
			}
			__LIB_5__::func_107(&(uParam0->f_1765));
			__LIB_13__::func_288(uParam0, 4);
			break;
		case 4:
			bVar0 = __LIB_9__::func_178(&(uParam0->f_1765)) >= 2f;
			if ((__LIB_0__::func_274(&(uParam0->f_912[iVar2 /*41*/]), 256) || !__LIB_1__::func_750(&uVar5)) || bVar0)
			{
				if (__LIB_1__::func_499())
				{
					__LIB_0__::func_573();
					__LIB_13__::func_288(uParam0, 10);
				}
				else
				{
					__LIB_13__::func_288(uParam0, 11);
				}
				if (bVar0)
				{
				}
			}
			break;
		case 10:
			bVar0 = __LIB_9__::func_178(&(uParam0->f_1765)) >= 2f;
			if (__LIB_1__::func_499() || bVar0)
			{
				__LIB_13__::func_288(uParam0, 11);
				if (bVar0)
				{
				}
			}
			break;
		case 8:
			bVar0 = __LIB_9__::func_178(&(uParam0->f_1765)) >= 2f;
			iVar1 = 5664;
			if (__LIB_0__::func_274(&(uParam0->f_912[uParam0->f_1584 /*41*/]), 512))
			{
				iVar1 |= 128;
			}
			if (!__LIB_12__::func_692(uParam0, uParam0->f_1584))
			{
				iVar1 |= 2048;
			}
			if (__LIB_3__::func_869(Global_35, &(uParam0->f_1582), iVar1, 0, 0, 1084227584 /* Float: 5f */, 100, fVar3, fVar4) || bVar0)
			{
				uParam0->f_1582 = 0;
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(uParam0->f_1797, 0f);
				TASK::CLEAR_PED_TASKS(Global_35, true, false);
				__LIB_13__::func_288(uParam0, 9);
				if (bVar0)
				{
				}
			}
			break;
		case 9:
			if (__LIB_9__::func_178(&(uParam0->f_1765)) >= 0.75f)
			{
				if (!__LIB_12__::func_655(uParam0, 8192))
				{
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(uParam0->f_1797, 50f);
				}
				VEHICLE::_0x7C06330BFDDA182E(uParam0->f_1797);
				__LIB_12__::func_693(uParam0, 131072);
				__LIB_13__::func_288(uParam0, 11);
			}
			break;
		case 11:
			break;
	}
	return 0;
}

void func_1338()
{
	if (!Local_811[9 /*5*/].f_3)
	{
		Local_811[9 /*5*/].f_3 = func_340(9, 0, 0);
	}
	else if (!Local_811[9 /*5*/].f_4)
	{
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_811[9 /*5*/], func_339(16));
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_811[9 /*5*/], func_339(17));
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_811[9 /*5*/], func_339(10));
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_811[9 /*5*/], func_339(11));
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_811[9 /*5*/], func_339(13));
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_811[9 /*5*/], func_339(14));
		Local_811[9 /*5*/].f_4 = 1;
		func_714(9);
	}
}

int func_1339()
{
	float fVar0;
	float fVar1;
	struct<4> Var2;
	bool bVar14;
	int iVar15;
	int iVar16;
	fVar0 = 10000f;
	if (__LIB_0__::func_86(Local_1172[0 /*4*/]))
	{
		if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_811[9 /*5*/], func_339(15)))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_811[9 /*5*/], func_339(15));
		}
		if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(Local_811[9 /*5*/], "CS_PenelopeBraithwaite", &Var2, true, func_339(15), 2))
		{
			Local_1172[0 /*4*/] = { Var2 };
			Local_1172[0 /*4*/].f_3 = Var2.f_3.f_2;
		}
	}
	else if (__LIB_0__::func_86(Local_1172[1 /*4*/]))
	{
		if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_811[9 /*5*/], func_339(12)))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_811[9 /*5*/], func_339(12));
		}
		if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(Local_811[9 /*5*/], "CS_PenelopeBraithwaite", &Var2, true, func_339(12), 2))
		{
			Local_1172[1 /*4*/] = { Var2 };
			Local_1172[1 /*4*/].f_3 = Var2.f_3.f_2;
		}
	}
	else if (__LIB_0__::func_86(Local_1172[2 /*4*/]))
	{
		if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_811[9 /*5*/], func_339(9)))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_811[9 /*5*/], func_339(9));
		}
		if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(Local_811[9 /*5*/], "CS_PenelopeBraithwaite", &Var2, true, func_339(9), 2))
		{
			Local_1172[2 /*4*/] = { Var2 };
			Local_1172[2 /*4*/].f_3 = Var2.f_3.f_2;
		}
	}
	bVar14 = true;
	iVar15 = 0;
	while (iVar15 < 3)
	{
		if (__LIB_0__::func_86(Local_1172[iVar15 /*4*/]))
		{
			bVar14 = false;
		}
		iVar15++;
	}
	if (bVar14)
	{
		iVar15 = 0;
		while (iVar15 < 3)
		{
			fVar1 = __LIB_0__::func_94(Global_35, Local_1172[iVar15 /*4*/], 1);
			fVar0 = __LIB_0__::func_94(Global_35, vLocal_55, 1);
			if (fVar1 < fVar0)
			{
				vLocal_55 = { Local_1172[iVar15 /*4*/] };
				iVar16 = iVar15;
			}
			iVar15++;
		}
		return iVar16;
	}
	return -1;
}

void func_1340(int iParam0)
{
	if (iParam0 != iLocal_1168)
	{
		PED::_0xCE7A6C1D5CDE1F9D(iLocal_20, iLocal_288, "p_cs_suitcase05x_up_PH_L_HAND", "LOCO_ATTACH_SUITCASE_BEAU");
		iLocal_1168 = iParam0;
	}
	else
	{
		return;
	}
	if (iLocal_1168 == 24)
	{
		if (!bLocal_1169)
		{
			__LIB_1__::func_951(&iLocal_288);
			bLocal_1169 = true;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_288))
		{
			iLocal_288 = OBJECT::CREATE_OBJECT(iLocal_278, 1241.571f, -1293.492f, 75.0472f, true, true, false, false, true);
		}
		PED::_0xCE7A6C1D5CDE1F9D(iLocal_20, iLocal_288, "p_cs_suitcase05x_PH_L_HAND", "LOCO_ATTACH_SUITCASE_BEAU");
		ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_288, iLocal_20, PED::GET_PED_BONE_INDEX(iLocal_20, 37709), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
		PED::_0xE8ABE3B73FC7FE17(iLocal_20, iLocal_288, "p_cs_suitcase05x_PH_L_HAND", "LOCO_ATTACH_SUITCASE_BEAU");
		func_651();
	}
}

void func_1343()
{
	PED::SET_PED_CONFIG_FLAG(Global_35, 360, true);
	PED::SET_PED_CONFIG_FLAG(Global_35, 364, true);
	PED::SET_PED_CONFIG_FLAG(Global_35, 308, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_379, 301, false);
	PED::SET_PED_CAN_BE_TARGETTED(iLocal_379, true);
	__LIB_3__::func_157(&(Local_1073[0 /*17*/]), "BNP21_C_TICK", 0, joaat("INPUT_SHOP_SPECIAL"), 0, 0, 0, 1, 0);
}

int func_1344(int iParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
		fVar8 = __LIB_0__::func_514(fParam12 >= 0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*iParam0, true, false)));
		func_1187(iParam0, iParam1, uParam3, fParam2, fVar8, sParam7);
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
			__LIB_5__::func_107(&(iParam1->f_13));
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
					if (__LIB_18__::func_606(iParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_1344(iParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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
					__LIB_8__::func_963(iParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
					func_1851(iParam1, uParam3);
					if (func_1852(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
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
					if (__LIB_13__::func_506(*iParam0, iParam1, uParam3))
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
					__LIB_4__::func_166(*iParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_1852(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					__LIB_8__::func_963(iParam0, __LIB_3__::func_598(iParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
					func_1851(iParam1, uParam3);
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
					else if (!(MISC::IS_BIT_SET(*iParam1, 13) || func_1698(iParam1)))
					{
					}
					else if (!func_1858(iParam1))
					{
					}
					else
					{
						if (fParam4 > 0f)
						{
							__LIB_5__::func_107(&(iParam1->f_18));
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
				if (func_1860(iParam0, iParam1, fParam4, bVar6))
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
					__LIB_4__::func_166(*iParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_1852(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					__LIB_8__::func_963(iParam0, __LIB_3__::func_598(iParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
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
				if (func_1860(iParam0, iParam1, fParam4, bVar6))
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
			__LIB_13__::func_507(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

bool func_1347(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	struct<22> Var5;
	int iVar27;
	int iVar28;
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return false;
	}
	iVar0 = WEAPON::_0x9F67929D98E7C6E8(Global_35, iParam0, 0, 0);
	Var5.f_9 = -1591664384;
	if (__LIB_1__::func_280(iVar0, &uVar1, &Var5, 1728382685 /* GXTEntry: "Right" */))
	{
		if (!Var5.f_21)
		{
			iVar28 = 15728640;
			switch (iParam0)
			{
				case joaat("GROUP_REPEATER"):
					iVar28 = (iVar28 - iVar28 & 8388608);
					break;
				case joaat("GROUP_RIFLE"):
					iVar28 = (iVar28 - iVar28 & 1048576);
					break;
				case joaat("GROUP_SHOTGUN"):
					iVar28 = (iVar28 - iVar28 & 2097152);
					iVar28 |= 16;
					break;
				case joaat("GROUP_SNIPER"):
					iVar28 = (iVar28 - iVar28 & 4194304);
					iVar28 |= 4;
					break;
				case joaat("GROUP_BOW"):
					iVar28 |= 8;
					break;
			}
			if (!bParam4)
			{
				iVar28 |= 1024;
			}
			iVar27 = func_1862(iVar28, iVar0);
			if (__LIB_0__::func_154(iVar27))
			{
				iVar0 = iVar27;
			}
			else
			{
				return false;
			}
		}
	}
	if (iVar0 == joaat("WEAPON_UNARMED") || iVar0 == 0)
	{
		return false;
	}
	if (!WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
	{
		return false;
	}
	if (!__LIB_16__::func_295(iVar0))
	{
		return false;
	}
	switch (iParam0)
	{
		case joaat("GROUP_REVOLVER"):
		case joaat("GROUP_PISTOL"):
			*iParam2 = 2;
			*iParam3 = 3;
			break;
		case joaat("GROUP_SNIPER"):
		case joaat("GROUP_REPEATER"):
		case joaat("GROUP_SHOTGUN"):
		case joaat("GROUP_RIFLE"):
			*iParam2 = 9;
			*iParam3 = 10;
			break;
		case joaat("GROUP_BOW"):
			*iParam2 = 7;
			*iParam3 = 8;
			break;
		default:
			return false;
	}
	*iParam1 = iVar0;
	return true;
}

void func_1350(int iParam0)
{
	ENTITY::SET_ENTITY_MAX_HEALTH(Local_58[iParam0 /*20*/], 100);
	ENTITY::_SET_ENTITY_HEALTH(Local_58[iParam0 /*20*/], 100, 0);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(Local_58[iParam0 /*20*/], true, 0f);
	PED::SET_PED_CONFIG_FLAG(Local_58[iParam0 /*20*/], 258, true);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_58[iParam0 /*20*/], true);
	PED::SET_PED_CAN_RAGDOLL(Local_58[iParam0 /*20*/], true);
	__LIB_4__::func_291(Local_58[iParam0 /*20*/], iLocal_1201, 0, 0);
	PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_58[iParam0 /*20*/], vLocal_1202, 3.5f, 0, 0, 0);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_58[iParam0 /*20*/], true);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_58[iParam0 /*20*/], 640);
	PED::_0x57F35552E771BE9D(Local_58[iParam0 /*20*/], 12);
}

void func_1354(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (__LIB_0__::func_272(Local_104[iVar0 /*23*/], 0) && !PED::IS_PED_RAGDOLL(Local_104[iVar0 /*23*/]))
		{
			__LIB_12__::func_875(uParam0, Local_104[iVar0 /*23*/], "RBP2_BWHENCHMAN", 1);
			iLocal_942 = iVar0;
			return;
		}
		iVar0++;
	}
}

void func_1355(var uParam0)
{
	int iVar0;
	float fVar1;
	float fVar2;
	fVar1 = 10000f;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (__LIB_0__::func_272(Local_104[iVar0 /*23*/], 0) && !PED::IS_PED_RAGDOLL(Local_104[iVar0 /*23*/]))
		{
			fVar2 = __LIB_0__::func_665(Local_104[iVar0 /*23*/], iLocal_20, 1, 1);
			if (fVar2 < fVar1)
			{
				fVar1 = fVar2;
				__LIB_12__::func_875(uParam0, Local_104[iVar0 /*23*/], "RBP2_BWHENCHMAN", 1);
				iLocal_942 = iVar0;
			}
		}
		iVar0++;
	}
}

void func_1356(int iParam0)
{
	if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_811[iParam0 /*5*/]) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_811[iParam0 /*5*/], false)) && ANIMSCENE::_0xF94692EB9DC15D74(Local_811[iParam0 /*5*/], 0))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(Local_811[iParam0 /*5*/]);
	}
}

bool func_1357()
{
	if ((iLocal_51 > 55 && iLocal_51 < 106) || iLocal_51 > 180)
	{
		return true;
	}
	return false;
}

Vector3 func_1359(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 228.43f, -429.26f, 88.85f;
		case 1:
			return 226.96f, -420.12f, 89.45f;
		case 2:
			return 228.9f, -422.99f, 89.45f;
		case 3:
			return 226.6f, -427.17f, 88.67f;
		case 4:
			return 218.79f, -423.01f, 87.76f;
		case 5:
			return 225.81f, -427.53f, 88.51f;
		case 6:
			return 220.06f, -421.12f, 88.11f;
		case 7:
			return 224.74f, -422.72f, 88.79f;
		case 8:
			return 221.26f, -419.22f, 88.44f;
		case 9:
			return 222.5f, -416.52f, 88.82f;
		case 10:
			return 223.41f, -426.98f, 88.18f;
		case 11:
			return 224.6f, -427.81f, 88.3f;
		case 12:
			return 222.35f, -426.62f, 88.05f;
		case 13:
			return 220.7f, -422.96f, 88.1f;
		case 14:
			return 222.15f, -424.72f, 88.2f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_1360(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 116.5656f;
		case 1:
			return 117.3618f;
		case 2:
			return 117.3618f;
		case 3:
			return 117.3618f;
		case 4:
			return 117.3618f;
		case 5:
			return 123.1159f;
		case 6:
			return 123.1159f;
		case 7:
			return 123.1159f;
		case 8:
			return 123.1159f;
		case 9:
			return 118.5515f;
		case 10:
			return 118.5515f;
		case 11:
			return 118.5515f;
		case 12:
			return 117.5761f;
		case 14:
			return 117.5761f;
		default:
			break;
	}
	return 100f;
}

void func_1361(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_1362(iVar0, iParam0);
		iVar0++;
	}
}

void func_1362(int iParam0, int iParam1)
{
	if (!__LIB_0__::func_255(Local_1092[iParam0 /*2*/], 0) && iParam1 != Local_1092[iParam0 /*2*/].f_1)
	{
		Local_1092[iParam0 /*2*/].f_1 = iParam1;
	}
	else
	{
		return;
	}
	TASK::CLEAR_PED_TASKS(Local_1092[iParam0 /*2*/], true, false);
	switch (Local_1092[iParam0 /*2*/].f_1)
	{
		case 1:
			TASK::TASK_WANDER_IN_AREA(Local_1092[iParam0 /*2*/], func_1359(iParam0), 10f, 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */, 0);
			break;
		case 2:
			TASK::TASK_FOLLOW_WAYPOINT_RECORDING_AT_OFFSET(Local_1092[iParam0 /*2*/], "rbap21_buffallo", func_1865(iParam0), 0, 17422, -1, 0);
			break;
		case 3:
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_1092[iParam0 /*2*/], 9.451f, -224.2545f, 100.7198f, 1.5f, -1, 15f, 0, 40000f);
			break;
		case 4:
			TASK::TASK_SMART_FLEE_PED(Local_1092[iParam0 /*2*/], Global_35, 1000f, -1, 0, 1077936128 /* Float: 3f */, 0);
			break;
	}
}

void func_1364(int iParam0)
{
	if (iLocal_14 != iParam0)
	{
		iLocal_14 = iParam0;
	}
	else
	{
		return;
	}
	iLocal_1117 = 0;
	bLocal_1118 = false;
	__LIB_5__::func_107(&iLocal_1114);
	switch (iLocal_14)
	{
		case 1:
			if (!CAM::_0xAA235E2F2C09E952("script@Story@RBNP12@TrainRideEscape") && !CAM::_0x595550376B7EA230("script@Story@RBNP12@TrainRideEscape"))
			{
				CAM::_0x1B3C2D961F5FC0E1("script@Story@RBNP12@TrainRideEscape");
			}
			break;
		case 2:
			if (!bLocal_1119)
			{
				STREAMING::PREFETCH_SRL("script@cme@RBNP12_CME_SHOT4_srl");
				STREAMING::_0xD9F2FF4AF394D926();
				STREAMING::_0xAE00387E53B1E9FC();
				bLocal_1119 = true;
			}
			__LIB_5__::func_107(&iLocal_1114);
			break;
		case 3:
			AUDIO::_0x5E3CCF03995388B5(1164758313, -46.9f, -342.6f, 93.8f);
			CAM::_0xBC016635D6A73B31("script@Story@RBNP12@TrainRideEscape", "CME_SHOT1", 5);
			break;
		case 4:
			STREAMING::END_SRL();
			STREAMING::PREFETCH_SRL("script@cme@RBNP12_CME_SHOT2_srl");
			STREAMING::_0xAE00387E53B1E9FC();
			STREAMING::SET_FOCUS_POS_AND_VEL(-75.8f, -310.8f, 95.3f, 0f, 1f, 0f);
			__LIB_5__::func_107(&iLocal_1114);
			break;
		case 5:
			CAM::_0xA54D643D0773EB65("script@Story@RBNP12@TrainRideEscape", "CME_SHOT1", 5);
			CAM::_0xBC016635D6A73B31("script@Story@RBNP12@TrainRideEscape", "CME_SHOT2", 5);
			__LIB_5__::func_107(&iLocal_1114);
			break;
		case 6:
			STREAMING::END_SRL();
			STREAMING::PREFETCH_SRL("script@cme@RBNP12_CME_SHOT4_srl");
			STREAMING::_0xAE00387E53B1E9FC();
			STREAMING::SET_FOCUS_POS_AND_VEL(-552.3f, -457f, 81.2f, 0f, 1f, 0f);
			__LIB_5__::func_107(&iLocal_1114);
			break;
		case 7:
			AUDIO::_0x5E3CCF03995388B5(196135925, -552.3f, -457f, 81.2f);
			CAM::_0xBC016635D6A73B31("script@Story@RBNP12@TrainRideEscape", "CME_SHOT4", 5);
			break;
		case 8:
			STREAMING::END_SRL();
			STREAMING::PREFETCH_SRL("script@cme@RBNP12_CME_SHOT3_srl");
			STREAMING::_0xAE00387E53B1E9FC();
			STREAMING::SET_FOCUS_POS_AND_VEL(-994.1f, -631.2f, 73.8f, 0f, 1f, 0f);
			break;
		case 9:
			MISC::_SET_WEATHER_TYPE(joaat("SUNNY"), true, false, false, 0f, false);
			CAM::_0xA54D643D0773EB65("script@Story@RBNP12@TrainRideEscape", "CME_SHOT4", 5);
			CAM::_0xBC016635D6A73B31("script@Story@RBNP12@TrainRideEscape", "CME_SHOT3", 5);
			STREAMING::_0xAE00387E53B1E9FC();
			VEHICLE::SET_TRAIN_SPEED(iLocal_577, 8f);
			VEHICLE::SET_TRAIN_CRUISE_SPEED(iLocal_577, 8f);
			break;
	}
}

int func_1365(int iParam0)
{
	if (!__LIB_0__::func_899(iParam0))
	{
		return 0;
	}
	if (__LIB_0__::func_901(iParam0))
	{
		return BUILTIN::ROUND((iParam0->f_2 * 1000f));
	}
	return (__LIB_0__::func_485() - BUILTIN::ROUND((iParam0->f_1 * 1000f)));
}

void func_1472()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_1959(0);
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
	func_1959(1);
}

void func_1473()
{
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_889(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_1474()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_1962(0);
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
	func_1962(1);
}

void func_1475()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_1__::func_432(15000, 0, 0, 0, 1);
			func_1962(0);
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
	func_1962(1);
}

void func_1476()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_889(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_889(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_1479(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_1479(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
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

int func_1479(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			func_1479(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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

int func_1505(var uParam0, int iParam1, int iParam2, int iParam3)
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
	iVar11 = (func_1994(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_952(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_889(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	__LIB_1__::func_432(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

void func_1678()
{
	int iVar0;
	iVar0 = 0;
	iVar0 = func_840();
	if (!func_217(256))
	{
		return;
	}
	if (!func_217(33554432))
	{
		if (iVar0 < 3)
		{
			if (__LIB_0__::func_899(&uLocal_1123))
			{
				if (__LIB_9__::func_178(&uLocal_1123) > 2.5f)
				{
					func_352(33554432);
					iLocal_1122 = MISC::GET_RANDOM_INT_IN_RANGE(3, 4);
				}
			}
			else
			{
				__LIB_2__::func_620(&uLocal_1123, 0f);
			}
		}
	}
	else if (func_217(33554432))
	{
		if (iVar0 >= iLocal_1122)
		{
			func_355(33554432);
			__LIB_2__::func_608(&uLocal_1123);
		}
	}
}

Vector3 func_1679()
{
	int iVar0;
	float fVar1;
	float fVar2;
	vector3 vVar3;
	vector3 vVar6;
	var uVar9;
	fVar1 = 0f;
	fVar2 = 10000f;
	iVar0 = 0;
	while (iVar0 < 33)
	{
		vVar3 = { func_2076(iVar0) };
		fVar1 = __LIB_0__::func_94(iLocal_580, vVar3, 1);
		if (fVar1 < fVar2 && __LIB_0__::func_266(iLocal_579, vVar3, 200f, 1, 1))
		{
			fVar2 = fVar1;
			vVar6 = { vVar3 };
		}
		iVar0++;
	}
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar6, &uVar9, false))
	{
		vVar6.f_2 = uVar9;
	}
	else
	{
		vVar6.f_2 = (vVar6.z - 5f);
	}
	return vVar6;
}

int func_1682(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 333;
		case 1:
			return 330;
		case 2:
			return 263;
		case 3:
			return 182;
		case 4:
			return 190;
		case 6:
			return 115;
		case 5:
			return 116;
		default:
			break;
	}
	return -1;
}

void func_1694(int iParam0, int iParam1, var uParam2, float fParam3)
{
	float fVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	if (ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		return;
	}
	__LIB_9__::func_912(iParam0, iParam1);
	fVar0 = __LIB_0__::func_514(fParam3 >= 0f, fParam3, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*iParam0, true, false)));
	if (fVar0 <= iParam1->f_26 || MISC::IS_BIT_SET(iParam1->f_21, 20))
	{
		func_1851(iParam1, uParam2);
		func_2084(iParam1);
		func_2085(iParam1);
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
				iParam1->f_35 = VOLUME::_CREATE_VOLUME_CYLINDER(ENTITY::GET_ENTITY_COORDS(*iParam0, true, false), 0f, 0f, 0f, iParam1->f_26, iParam1->f_26, 20f);
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
			if (__LIB_3__::func_547(Global_35, *iParam0, 1f) == 3)
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
			__LIB_1__::func_448(Global_35, ENTITY::GET_ENTITY_COORDS(*iParam0, true, false), bVar2, iParam1->f_30, iParam1->f_31, iParam1->f_32, __LIB_0__::func_514(bVar3, iParam1->f_33, iParam1->f_34), 0, 1, 0, iVar1);
		}
		else if (((((MISC::IS_BIT_SET(*iParam1, 15) && !PED::IS_PED_ON_MOUNT(Global_35)) && __LIB_0__::func_272(iParam1->f_28, 0)) && __LIB_0__::func_48(Global_35, iParam1->f_28, (iParam1->f_26 + 1.75f), 1)) && !__LIB_0__::func_163(iParam1->f_28, 518218985)) && !__LIB_0__::func_163(iParam1->f_28, 242628503))
		{
			TASK::CLEAR_PED_TASKS(iParam1->f_28, true, false);
			TASK::TASK_SMART_FLEE_COORD(iParam1->f_28, Global_36, (iParam1->f_26 + 1.75f), -1, 256, 0.101f);
			iParam1->f_28 = 0;
		}
	}
}

void func_1695(int iParam0)
{
	if (MISC::IS_BIT_SET(*iParam0, 7))
	{
		if (MISC::IS_BIT_SET(iParam0->f_21, 3))
		{
			__LIB_3__::func_28(iParam0, 0);
		}
		return;
	}
	if (MISC::IS_BIT_SET(iParam0->f_21, 3))
	{
		func_80(&(iParam0->f_22), 0);
		if (iParam0->f_25 == 0f || __LIB_3__::func_514(&(iParam0->f_22), iParam0->f_25))
		{
			MISC::SET_BIT(&(Global_1956580.f_1), 5);
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			HUD::_HIDE_HUD_COMPONENT(724769646);
			if (!MISC::IS_BIT_SET(iParam0->f_21, 4))
			{
				MISC::SET_BIT(&(iParam0->f_21), 4);
			}
		}
	}
}

bool func_1698(int* iParam0)
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
			__LIB_2__::func_608(&(iParam0->f_52));
			MISC::SET_BIT(&(iParam0->f_21), 7);
			MISC::SET_BIT(&(iParam0->f_21), 6);
			return true;
		}
		else if (((__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 0, 1, 0)) || __LIB_0__::func_154(__LIB_0__::func_153(Global_35, 1, 1, 0))) && !__LIB_0__::func_163(Global_35, 716706914)) && !__LIB_0__::func_163(Global_35, 242628503))
		{
			WEAPON::_0x94A3C1B804D291EC(Global_35, 1, 0, 1, 0);
			WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
			TASK::TASK_SWAP_WEAPON(Global_35, 0, 0, 0, 0);
			PED::_0x2208438012482A1A(Global_35, false, false);
			func_80(&(iParam0->f_52), 0);
			MISC::SET_BIT(&(iParam0->f_21), 7);
		}
	}
	else if (MISC::IS_BIT_SET(iParam0->f_21, 7))
	{
		bVar0 = __LIB_9__::func_178(&(iParam0->f_52)) >= 1.5f;
		if ((!__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 0, 1, 0)) && !__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 1, 1, 0))) || bVar0)
		{
			__LIB_2__::func_608(&(iParam0->f_52));
			MISC::SET_BIT(&(iParam0->f_21), 6);
			return true;
		}
	}
	return false;
}

bool func_1735(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
	return func_2133(iVar0, iParam1, iParam2, bParam3, iParam4);
}

char* func_1744(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CHASER_WAVE_1_1";
		case 1:
			return "CHASER_WAVE_1_2";
		case 2:
			return "CHASER_WAVE_2_1";
		case 3:
			return "CHASER_WAVE_3_1";
		case 4:
			return "CHASER_WAVE_3_3";
		case 5:
			return "CHASER_WAVE_4_1";
		case 6:
			return "CHASER_WAVE_BACKUP";
		default:
			break;
	}
	return "!Unknown Chaser name!";
}

void func_1751()
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
	iVar0 = func_1862(6291456, 0);
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

void func_1758(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_1758(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_1758(iVar2, vParam1, fParam4, iParam5, iParam6);
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

int func_1851(int* iParam0, var uParam1)
{
	int iVar0;
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_HORSE_MENU"), false);
	iVar0 = 0;
	if (((((PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_OPEN_SATCHEL_MENU")) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_OPEN_SATCHEL_HORSE_MENU"))) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_OPEN_JOURNAL"))) || __LIB_3__::func_63()) || __LIB_3__::func_64()) || __LIB_1__::func_499())
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		__LIB_5__::func_107(&(iParam0->f_46));
	}
	if (__LIB_0__::func_899(&(iParam0->f_46)) && !__LIB_3__::func_514(&(iParam0->f_46), 0.25f))
	{
		__LIB_3__::func_102(uParam1);
	}
	if (iVar0 == 1)
	{
		return 0;
	}
	return 1;
}

bool func_1852(int iParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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
		__LIB_4__::func_50(*iParam0, uParam4[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
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
						__LIB_13__::func_290(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
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
							__LIB_11__::func_414(iParam1, uParam4, iParam0, bVar13, sParam9, fParam2);
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
						__LIB_5__::func_107(&(iParam1->f_18));
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

bool func_1858(int* iParam0)
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
			func_80(&(iParam0->f_37), 0);
			MISC::SET_BIT(&(iParam0->f_21), 9);
			if (__LIB_10__::func_250())
			{
			}
		}
		else
		{
			func_80(&(iParam0->f_37), 0);
			MISC::SET_BIT(&(iParam0->f_21), 9);
		}
	}
	else if (MISC::IS_BIT_SET(iParam0->f_21, 9))
	{
		bVar1 = __LIB_9__::func_178(&(iParam0->f_37)) >= 1.5f;
		if ((!__LIB_1__::func_750(&uVar0) || __LIB_10__::func_250()) || bVar1)
		{
			if (bVar1)
			{
				__LIB_10__::func_248();
			}
			MISC::SET_BIT(&(iParam0->f_21), 8);
			return true;
		}
	}
	return false;
}

int func_1860(int iParam0, int* iParam1, float fParam2, bool bParam3)
{
	if (iParam1->f_9)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*iParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*iParam0))
		{
			return 0;
		}
		iParam1->f_9 = 0;
		MISC::SET_BIT(iParam1, 0);
		if (fParam2 > 0f)
		{
			__LIB_5__::func_107(&(iParam1->f_18));
			return 0;
		}
		else if (__LIB_0__::func_899(&(iParam1->f_18)))
		{
			__LIB_2__::func_608(&(iParam1->f_18));
			return 0;
		}
	}
	if (!__LIB_0__::func_899(&(iParam1->f_18)))
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
	return func_2205(&(iParam1->f_18), fParam2);
	return 1;
}

int func_1862(int iParam0, int iParam1)
{
	var uVar0;
	return func_2206(&uVar0, iParam0, iParam1);
}

float func_1865(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 7.5f;
		case 1:
			return 4.2f;
		case 2:
			return 9.2f;
		case 3:
			return 3f;
		case 4:
			return -5f;
		case 5:
			return 1.9f;
		case 6:
			return -3.2f;
		case 7:
			return 1.9f;
		case 8:
			return -2f;
		case 9:
			return 0.7f;
		case 10:
			return -0.5f;
		case 11:
			return 6.2f;
		case 12:
			return 7.5f;
		case 13:
			return 8f;
		case 14:
			return 10f;
		default:
			break;
	}
	return 0f;
}

void func_1959(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (bParam0)
	{
		func_889(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_889(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_889(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_2275(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_892(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_1479(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_2280(Var0);
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

void func_1962(bool bParam0)
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
		func_889(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_889(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_889(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_889(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_889(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_889(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_889(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_889(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_889(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_889(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_889(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_1479(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_1479(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_1479(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_1479(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_1479(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_1479(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_1479(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_1479(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_1479(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_1479(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_1479(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
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

int func_1994(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
							iVar49 = (iVar49 + func_1994(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1994(iVar63, -915411861, 1, 0, 0));
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

Vector3 func_2076(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1027.873f, -772.6675f, 93.004f;
		case 1:
			return 1032.968f, -739.6353f, 96.9316f;
		case 2:
			return 1035.593f, -697.9733f, 105.9906f;
		case 3:
			return 1048.895f, -682.2202f, 109.4407f;
		case 4:
			return 1039.079f, -635.5408f, 108.9952f;
		case 5:
			return 1052.789f, -603.495f, 104.0361f;
		case 6:
			return 941.5383f, -554.4101f, 98.2329f;
		case 7:
			return 913.1088f, -554.1041f, 108.9336f;
		case 8:
			return 865.02f, -563.4828f, 85.6585f;
		case 9:
			return 872.6212f, -549.3989f, 97.5202f;
		case 10:
			return 872.6212f, -549.399f, 97.5202f;
		case 11:
			return 827.321f, -520.3422f, 95.4904f;
		case 12:
			return 803.796f, -508.5916f, 92.5933f;
		case 13:
			return 789.909f, -513.8779f, 90.9055f;
		case 14:
			return 743.4579f, -454.2303f, 87.9673f;
		case 15:
			return 732.1058f, -440.5699f, 90.5265f;
		case 16:
			return 670.7881f, -457.0424f, 94.6614f;
		case 17:
			return 652.0333f, -456.0109f, 94.6646f;
		case 18:
			return 584.5596f, -440.0229f, 109.6639f;
		case 19:
			return 528.3196f, -473.4001f, 104.6026f;
		case 20:
			return 567.7575f, -470.5664f, 100.5373f;
		case 21:
			return 537.856f, -462.8926f, 107.2057f;
		case 22:
			return 725.0499f, -460.3929f, 88.33557f;
		case 23:
			return 779.4632f, -474.5697f, 90.28507f;
		case 24:
			return 733.7433f, -441.5613f, 90.38136f;
		case 25:
			return 476.7565f, -480.6293f, 103.9743f;
		case 26:
			return 505.4f, -444.5271f, 114.3f;
		case 27:
			return 552.2048f, -462.1555f, 95.5825f;
		case 28:
			return 686.4771f, -489.9608f, 88.65289f;
		case 29:
			return 672.9077f, -465.8083f, 94.43501f;
		case 30:
			return 635.699f, -470.6467f, 93.69312f;
		case 31:
			return 1018.086f, -627.0912f, 96.2771f;
		case 32:
			return 971.5325f, -599.3892f, 86.7142f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

int func_2084(int iParam0)
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
		if (((__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 0, 1, 0)) && __LIB_0__::func_153(Global_35, 0, 1, 0) == joaat("WEAPON_KIT_CAMERA")) && !__LIB_0__::func_163(Global_35, 716706914)) && !__LIB_0__::func_163(Global_35, 242628503))
		{
			WEAPON::_0x94A3C1B804D291EC(Global_35, 1, 0, 1, 0);
			TASK::TASK_SWAP_WEAPON(Global_35, 0, 0, 0, 0);
			PED::_0x2208438012482A1A(Global_35, false, false);
			func_80(&(iParam0->f_49), 0);
			MISC::SET_BIT(&(iParam0->f_21), 15);
		}
	}
	else if (MISC::IS_BIT_SET(iParam0->f_21, 15))
	{
		bVar0 = __LIB_9__::func_178(&(iParam0->f_49)) >= 1.5f;
		if (!__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 0, 1, 0)) || bVar0)
		{
			__LIB_1__::func_26(0);
			__LIB_2__::func_608(&(iParam0->f_49));
			MISC::SET_BIT(&(iParam0->f_21), 14);
			return 1;
		}
	}
	return 0;
}

int func_2085(int iParam0)
{
	bool bVar0;
	if (MISC::IS_BIT_SET(*iParam0, 10))
	{
		return 1;
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
	if (MISC::IS_BIT_SET(iParam0->f_21, 12))
	{
		if (Global_1357517)
		{
			MISC::CLEAR_BIT(&(iParam0->f_21), 12);
			MISC::CLEAR_BIT(&(iParam0->f_21), 13);
			return 0;
		}
		return 1;
	}
	if (!MISC::IS_BIT_SET(iParam0->f_21, 13))
	{
		if (Global_1357517)
		{
			Global_1357516 = 0;
		}
		func_80(&(iParam0->f_40), 0);
		MISC::SET_BIT(&(iParam0->f_21), 13);
	}
	else if (MISC::IS_BIT_SET(iParam0->f_21, 13))
	{
		bVar0 = __LIB_9__::func_178(&(iParam0->f_40)) >= 1.5f;
		if (!Global_1357517 || bVar0)
		{
			__LIB_2__::func_608(&(iParam0->f_40));
			MISC::SET_BIT(&(iParam0->f_21), 12);
			return 1;
		}
	}
	return 0;
}

int func_2133(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
			func_2133(iParam0, iParam1, __LIB_1__::func_614(iParam1, 0, 0), bParam3, iParam4);
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

int func_2205(float fParam0, float fParam1)
{
	if (__LIB_3__::func_514(fParam0, fParam1))
	{
		__LIB_2__::func_608(fParam0);
		return 1;
	}
	return 0;
}

int func_2206(var uParam0, int iParam1, int iParam2)
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
		return func_2206(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

void func_2275(int iParam0)
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
	func_1479(iParam0, 1, 1, -142743235, 1);
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
		func_1479(uVar18[iVar36], 1, 1, -142743235, 1);
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

void func_2280(struct<6> Param0)
{
	if (!func_2455(Param0.f_4, 1))
	{
	}
	if (!func_2455(Param0, 1))
	{
	}
	if (!func_2455(Param0.f_2, 1))
	{
	}
	if (!func_2455(Param0.f_5, 1))
	{
	}
	if (!func_2455(Param0.f_3, 1))
	{
	}
	if (!func_2455(Param0.f_1, 1))
	{
	}
}

bool func_2455(int iParam0, int iParam1)
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
				if (func_2455(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_2455(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_2455(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_2455(iVar21, 1))
				{
				}
			}
		}
		__LIB_1__::func_712();
		return true;
	}
	return false;
}

