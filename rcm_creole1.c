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
	struct<22> Local_15 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3 } ;
	var uLocal_37 = 3;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	struct<22> Local_40 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3 } ;
	var uLocal_62 = 3;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	int iLocal_65 = 0;
	var uLocal_66[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_73[2] = { 0, 0 };
	int iLocal_76[2] = { 0, 0 };
	int iLocal_79 = 0;
	int iLocal_80[2] = { 0, 0 };
	int iLocal_83[2] = { 0, 0 };
	int iLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = -1;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 1097859072;
	var uLocal_105 = 1000;
	var uLocal_106 = 1067450368;
	var uLocal_107 = 5000;
	var uLocal_108 = 42;
	var uLocal_109 = 1103626240;
	var uLocal_110 = 1077936128;
	var uLocal_111 = 1106247680;
	var uLocal_112 = 1103101952;
	var uLocal_113 = 1097859072;
	var uLocal_114 = 1103626240;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = -1;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 1097859072;
	var uLocal_134 = 1000;
	var uLocal_135 = 1067450368;
	var uLocal_136 = 5000;
	var uLocal_137 = 42;
	var uLocal_138 = 1103626240;
	var uLocal_139 = 1077936128;
	var uLocal_140 = 1106247680;
	var uLocal_141 = 1103101952;
	var uLocal_142 = 1097859072;
	var uLocal_143 = 1103626240;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = -1;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 1097859072;
	var uLocal_163 = 1000;
	var uLocal_164 = 1067450368;
	var uLocal_165 = 5000;
	var uLocal_166 = 42;
	var uLocal_167 = 1103626240;
	var uLocal_168 = 1077936128;
	var uLocal_169 = 1106247680;
	var uLocal_170 = 1103101952;
	var uLocal_171 = 1097859072;
	var uLocal_172 = 1103626240;
	var uLocal_173 = 0;
	int iLocal_174 = 0;
	int iLocal_175 = 0;
	int iLocal_176 = 0;
	int iLocal_177 = 0;
	int iLocal_178 = 0;
	vector3 vLocal_179 = { 0f, 0f, 0f };
	vector3 vLocal_182 = { 0f, 0f, 0f };
	int iLocal_185 = 0;
	int iLocal_186[2] = { 0, 0 };
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	bool bLocal_195 = false;
	vector3 vLocal_196 = { 0f, 0f, 0f };
	vector3 vLocal_199 = { 0f, 0f, 0f };
	vector3 vLocal_202 = { 0f, 0f, 0f };
	vector3 vLocal_205[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_212 = { 0f, 0f, 0f };
	float fLocal_215 = 0f;
	float fLocal_216 = 0f;
	float fLocal_217 = 0f;
	float fLocal_218 = 0f;
	float fLocal_219[2] = { 0f, 0f };
	int iLocal_222 = 0;
	int iLocal_223 = 0;
	bool bLocal_224 = false;
	bool bLocal_225 = false;
	bool bLocal_226 = false;
	bool bLocal_227 = false;
	bool bLocal_228 = false;
	int iLocal_229[2] = { 0, 0 };
	bool bLocal_232 = false;
	bool bLocal_233 = false;
	bool bLocal_234 = false;
	bool bLocal_235 = false;
	bool bLocal_236 = false;
	bool bLocal_237 = false;
	bool bLocal_238 = false;
	bool bLocal_239 = false;
	bool bLocal_240 = false;
	bool bLocal_241 = false;
	bool bLocal_242 = false;
	bool bLocal_243 = false;
	bool bLocal_244[2] = { false, false };
	bool bLocal_247 = false;
	bool bLocal_248 = false;
	bool bLocal_249 = false;
	bool bLocal_250 = false;
	bool bLocal_251 = false;
	bool bLocal_252 = false;
	bool bLocal_253 = false;
	bool bLocal_254 = false;
	bool bLocal_255 = false;
	bool bLocal_256 = false;
	bool bLocal_257 = false;
	char* sLocal_258 = NULL;
	char* sLocal_259 = NULL;
	char* sLocal_260 = NULL;
	char* sLocal_261 = NULL;
	char* sLocal_262 = NULL;
	int iLocal_263 = 0;
	bool bLocal_264 = false;
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	int iLocal_269 = 0;
	int iLocal_270 = 0;
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
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	bool bLocal_292 = false;
	bool bLocal_293 = false;
	bool bLocal_294 = false;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	int iLocal_298 = 0;
	bool bLocal_299 = false;
	struct<61> Local_300[1];
	struct<17> Local_362[1];
	int iLocal_380 = 0;
	var uLocal_381 = -1;
	var uLocal_382 = 0;
	var uLocal_383 = -1;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = -1;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 1073741824;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 1;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 1106247680;
	var uLocal_407 = 1067450368;
	var uLocal_408 = 0;
	var uLocal_409 = 1092616192;
	var uLocal_410 = 1112014848;
	var uLocal_411 = 1106247680;
	var uLocal_412 = 1101529088;
	var uLocal_413 = 1101004800;
	var uLocal_414 = 1084227584;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
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
	struct<17> Local_441[2];
	int iLocal_476 = 0;
	bool bLocal_477 = false;
	float fLocal_478 = 0f;
	float fLocal_479 = 0f;
	int iLocal_480 = 0;
	struct<10> Local_481[6];
	struct<5> Local_542[4];
	int iLocal_563 = 0;
	int iLocal_564 = 0;
	int iLocal_565 = 0;
	int iLocal_566[1] = { 0 };
	int iLocal_568 = 0;
	int iLocal_569 = 0;
	int iLocal_570[6] = { 0, 0, 0, 0, 0, 0 };
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion
void __EntryFunction__()
{
	struct<2606> Var0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_175 = joaat("WAGONDOC01X");
	iLocal_185 = -1174840184;
	vLocal_196 = { 1878.151f, -748.2514f, 40.926f };
	vLocal_199 = { 1891.81f, -750.22f, 40.77f };
	fLocal_215 = 1000f;
	fLocal_216 = 0f;
	fLocal_217 = 0f;
	iLocal_222 = -2117473746;
	iLocal_223 = 600117155;
	bLocal_235 = true;
	sLocal_258 = "CRLE1_STOP";
	sLocal_259 = "CRLE1_FAIL";
	sLocal_260 = "CRLE3_START";
	sLocal_261 = "CRLE2_RESTART_1";
	sLocal_262 = "CRLE3_DEAD";
	bLocal_264 = true;
	iLocal_270 = -1;
	iLocal_476 = -1;
	fLocal_478 = 0f;
	fLocal_479 = 0f;
	iLocal_480 = joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
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
	__LIB_13__::func_28(uParam0);
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
		if (!__LIB_0__::func_75(&(uParam0->f_2597)))
		{
			__LIB_1__::func_283(&(uParam0->f_2597), 0);
		}
		__LIB_0__::func_11(uParam0);
		if (__LIB_1__::func_871(&(uParam0->f_2597)) >= 2500 || CAM::IS_SCREEN_FADED_OUT())
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
	if (!__LIB_0__::func_75(&(uParam0->f_2585)) || IntToFloat(__LIB_1__::func_871(&(uParam0->f_2585))) > __LIB_10__::func_381(uParam0))
	{
		__LIB_1__::func_283(&(uParam0->f_2585), 1);
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
		__LIB_13__::func_178(uParam0, __LIB_0__::func_58(uParam0));
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
		func_138(uParam0);
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
			if (!__LIB_0__::func_75(&(uParam0->f_2597)))
			{
				__LIB_1__::func_283(&(uParam0->f_2597), 0);
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
			else if (__LIB_1__::func_871(&(uParam0->f_2597)) >= 2500)
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
	else if (!__LIB_0__::func_75(&(uParam0->f_2585)) || IntToFloat(__LIB_1__::func_871(&(uParam0->f_2585))) > __LIB_13__::func_475(uParam0))
	{
		__LIB_1__::func_283(&(uParam0->f_2585), 1);
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
	__LIB_12__::func_739(uParam0);
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
		__LIB_12__::func_784(iVar1, 1, -1082130432 /* Float: -1f */, 1, 1, bVar2, 0);
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
	__LIB_1__::func_532(Global_1347702[uParam0->f_174 /*49*/].f_15, 0);
	vLocal_202 = { 1377.335f, -1332.774f, 76.5929f };
	bLocal_244[0] = 0;
	bLocal_244[1] = 0;
	vLocal_205[0 /*3*/] = { 1711.6f, -448.88f, 47.13f };
	vLocal_205[1 /*3*/] = { 1711.99f, -450.31f, 47.07f };
	fLocal_219[0] = -79.51f;
	fLocal_219[1] = -79.51f;
	vLocal_212 = { 1871.7f, -760.38f, 41.4f };
	func_186();
	__LIB_12__::func_658(uParam0, 17);
	vLocal_179 = { 1383.38f, -1336.83f, 77.14f };
	vLocal_182 = { 0f, 0f, -109.1f };
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uLocal_66[iVar0] = Local_481[iVar0 /*10*/];
		iVar0++;
	}
	__LIB_4__::func_228(&uLocal_116);
	__LIB_2__::func_828(&uLocal_116, 1);
	__LIB_2__::func_830(&uLocal_116, 1);
	__LIB_1__::func_402(&uLocal_116, 1);
	__LIB_2__::func_829(&uLocal_116, 1);
	__LIB_1__::func_396(&uLocal_116, 1);
	__LIB_1__::func_404(&uLocal_116, 1);
	__LIB_4__::func_228(&uLocal_87);
	__LIB_2__::func_828(&uLocal_87, 1);
	__LIB_2__::func_830(&uLocal_87, 1);
	__LIB_1__::func_398(&uLocal_87, 1);
	__LIB_1__::func_402(&uLocal_87, 1);
	__LIB_2__::func_829(&uLocal_87, 1);
	__LIB_1__::func_402(&uLocal_145, 1);
	__LIB_2__::func_595(&uLocal_145, 30f);
	__LIB_2__::func_507(&uLocal_145, 650);
	__LIB_10__::func_780(uParam0->f_174, 5f);
	__LIB_12__::func_656(uParam0, 5f);
	__LIB_12__::func_657(uParam0, 5f);
}

void func_42(var uParam0)
{
	__LIB_12__::func_908(uParam0, 0);
	__LIB_12__::func_867(uParam0, joaat("P_CHAIR_CRATE02X"), 7);
	__LIB_12__::func_867(uParam0, joaat("P_CS_BAGANDERS01X"), 7);
	__LIB_12__::func_867(uParam0, joaat("A_M_M_RHDTOWNFOLK_01"), 2);
	__LIB_12__::func_867(uParam0, iLocal_175, 6);
	__LIB_12__::func_867(uParam0, joaat("G_M_M_UNICRIMINALS_01"), 2);
	__LIB_12__::func_867(uParam0, iLocal_480, 6);
	__LIB_12__::func_867(uParam0, joaat("P_CRATECOVER04X"), 2);
	AUDIO::PREPARE_MUSIC_EVENT(sLocal_258);
	AUDIO::PREPARE_MUSIC_EVENT(sLocal_259);
	AUDIO::PREPARE_MUSIC_EVENT(sLocal_260);
	AUDIO::PREPARE_MUSIC_EVENT(sLocal_261);
	AUDIO::PREPARE_MUSIC_EVENT(sLocal_262);
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
			Var1 = { 1368.12f, -1326.003f, 76.3842f };
			Var1.f_3 = 62.9127f;
			break;
		case 1:
			Var1 = { 1880.517f, -679.9306f, 40.6268f };
			Var1.f_3 = 188.3083f;
			break;
		case 2:
			Var1 = { 1892.254f, -711.338f, 40.9396f };
			Var1.f_3 = 116.7558f;
			break;
		case 3:
			Var1 = { 1519.872f, -694.512f, 48.7085f };
			Var1.f_3 = 135.5904f;
			break;
		case 4:
			Var1 = { 1310.99f, -1303.051f, 75.1509f };
			Var1.f_3 = 252.4444f;
			break;
		case 5:
			Var1 = { 1378.26f, -1342.197f, 76.8055f };
			Var1.f_3 = 118.1915f;
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
	var uVar0;
	if (iLocal_564 == 2 || iLocal_564 == 3)
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_296))
		{
			iLocal_296 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1856.883f, -667.7162f, 41.64659f, 0f, 0f, -18.79788f, 393.604f, 320.4589f, 25.52775f, "Creole 1 dist fail check vol");
		}
		else if (!__LIB_1__::func_205(Global_35, iLocal_296, 1, 0))
		{
			fLocal_216 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vLocal_196, false);
			if (fLocal_215 > fLocal_216)
			{
				fLocal_215 = fLocal_216;
			}
			if (!bLocal_234)
			{
				if ((fLocal_216 - fLocal_215) > 50f)
				{
					__LIB_12__::func_883(uParam0, "CREOLE1_GOMAC", 1, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					bLocal_234 = true;
				}
			}
			else if ((fLocal_216 - fLocal_215) > 100f)
			{
				StringCopy(&(uParam0->f_2578), "CREOLE_FAIL3", 24);
				return true;
			}
		}
	}
	if (iLocal_564 == 4)
	{
		if (__LIB_0__::func_27(iLocal_268, 256))
		{
			if (!bLocal_234)
			{
				if (__LIB_0__::func_665(Global_35, iLocal_174, 1, 1) > 50f)
				{
					__LIB_12__::func_883(uParam0, "CRL2_RET1", 1, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					bLocal_234 = true;
				}
			}
			else if (__LIB_3__::func_330(Global_35, iLocal_174, 0))
			{
				bLocal_234 = false;
			}
			else if (__LIB_0__::func_665(Global_35, iLocal_174, 1, 1) > 100f)
			{
				StringCopy(&(uParam0->f_2578), "CREOLE_FAIL3", 24);
				return true;
			}
		}
		else if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_296))
		{
			iLocal_296 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1856.883f, -667.7162f, 41.64659f, 0f, 0f, -18.79788f, 393.604f, 320.4589f, 25.52775f, "Creole 1 dist fail check vol");
		}
		else if (!__LIB_0__::func_27(iLocal_268, 256))
		{
			fLocal_216 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vLocal_196, false);
			if (fLocal_215 > fLocal_216)
			{
				fLocal_215 = fLocal_216;
				if (bLocal_234)
				{
					bLocal_234 = false;
				}
			}
			if (!bLocal_234)
			{
				if ((fLocal_216 - fLocal_215) > 50f)
				{
					__LIB_12__::func_883(uParam0, "CREOLE1_GOMAC", 1, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					bLocal_234 = true;
				}
			}
			else if ((fLocal_216 - fLocal_215) > 100f)
			{
				StringCopy(&(uParam0->f_2578), "CREOLE_FAIL3", 24);
				return true;
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_174))
	{
		if (iLocal_564 >= 4)
		{
			if (bLocal_253 && bLocal_254)
			{
				if (ENTITY::IS_ENTITY_DEAD(iLocal_80[0]) && ENTITY::IS_ENTITY_DEAD(iLocal_80[1]))
				{
					StringCopy(&(uParam0->f_2578), "CREOLE_FAIL5", 24);
					return true;
				}
			}
		}
		if (__LIB_4__::func_257(iLocal_174))
		{
			StringCopy(&(uParam0->f_2578), "CREOLE_FAIL2", 24);
			return true;
		}
		if (FIRE::IS_ENTITY_ON_FIRE(iLocal_174))
		{
			StringCopy(&(uParam0->f_2578), "CREOLE_FAIL2", 24);
			return true;
		}
		if (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_174, 0, 5000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_174, 1, 5000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_174, 2, 5000)) || (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_174, 3, 5000) && VEHICLE::IS_VEHICLE_STOPPED(iLocal_174)))
		{
			StringCopy(&(uParam0->f_2578), "CREOLE_FAIL2", 24);
			return true;
		}
		if (!__LIB_0__::func_27(iLocal_268, 4))
		{
			if (__LIB_0__::func_27(iLocal_268, 128))
			{
				if (__LIB_0__::func_27(iLocal_268, 131072))
				{
					if (__LIB_0__::func_665(Global_35, iLocal_174, 1, 1) > 100f)
					{
						StringCopy(&(uParam0->f_2578), "CREOLE_FAIL3", 24);
						return true;
					}
				}
				else if (__LIB_0__::func_665(Global_35, iLocal_174, 1, 1) > 200f)
				{
					StringCopy(&(uParam0->f_2578), "CREOLE_FAIL3", 24);
					return true;
				}
			}
			else if (__LIB_0__::func_665(Global_35, iLocal_174, 1, 1) > 300f && !__LIB_1__::func_205(Global_35, iLocal_296, 1, 0))
			{
				StringCopy(&(uParam0->f_2578), "CREOLE_FAIL3", 24);
				return true;
			}
		}
		else if (__LIB_0__::func_665(Global_35, iLocal_174, 1, 1) > 50f)
		{
			StringCopy(&(uParam0->f_2578), "CREOLE_FAIL3", 24);
			return true;
		}
	}
	if (!__LIB_0__::func_272(iLocal_14, 1))
	{
		StringCopy(&(uParam0->f_2578), "CREOLE_FAIL1", 24);
		AUDIO::TRIGGER_MUSIC_EVENT(sLocal_259);
		return true;
	}
	if (__LIB_2__::func_173(PLAYER::GET_PLAYER_INDEX(), 1, 0, 1))
	{
		StringCopy(&(uParam0->f_2578), "CREOLE_FAIL4", 24);
		return true;
	}
	if (__LIB_14__::func_115(&uVar0))
	{
		StringCopy(&(uParam0->f_2578), "CREOLE_FAIL6", 24);
		return true;
	}
	if (iLocal_564 == 4 || iLocal_564 == 5)
	{
		if (!__LIB_0__::func_266(Global_35, vLocal_179, 1650f, 1, 1))
		{
			StringCopy(&(uParam0->f_2578), "CREOLE_FAIL7", 24);
			return true;
		}
		else if (!__LIB_0__::func_266(Global_35, vLocal_179, 1550f, 1, 1) && !bLocal_234)
		{
			__LIB_12__::func_883(uParam0, "CRL2_OBJ_RID", 1, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			bLocal_234 = true;
		}
		else if (__LIB_0__::func_266(Global_35, vLocal_179, 1500f, 1, 1) && bLocal_234)
		{
			bLocal_234 = false;
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
	if (func_235(uParam0) || __LIB_12__::func_663(uParam0->f_174, uParam0->f_743))
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
	__LIB_1__::func_752();
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
	__LIB_12__::func_739(uParam0);
	__LIB_1__::func_564(0);
	__LIB_12__::func_966(uParam0, 0);
	__LIB_12__::func_918(uParam0, 4);
	__LIB_0__::func_8(&(uParam0->f_172), 8);
	__LIB_0__::func_8(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 1024);
	__LIB_0__::func_8(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 64);
	__LIB_0__::func_7(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 4);
	__LIB_0__::func_37(&(uParam0->f_2585));
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
	__LIB_13__::func_264(uParam0, 43573);
	iLocal_563 = 0;
	StringCopy(&(uParam0->f_2575), func_301(uParam0), 24);
	__LIB_12__::func_901(&(uParam0->f_206), 1368.88f, -1333.06f, 76.71f, 0, 0);
	__LIB_12__::func_779(uParam0, __LIB_1__::func_440(uParam0->f_174));
	__LIB_13__::func_59(uParam0, iLocal_14, "cs_creoledoctor", 0, 0, 0);
	__LIB_13__::func_59(uParam0, Global_35, 0, 0, 0, 0);
	__LIB_12__::func_957(uParam0, iLocal_177, "p_cs_baganders01x", 0, 0, 0);
	__LIB_12__::func_957(uParam0, iLocal_176, "p_chair_crate02x", 0, 0, 0);
	iLocal_295 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1377.11f, -1336.616f, 77.1942f, 0f, 0f, -7.352651f, 15.06336f, 19.44319f, 14.11393f, "rcm_creole1 - Restriction");
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_295))
	{
		__LIB_13__::func_325(uParam0, &iLocal_295, 0, 0, 0, 0);
	}
	__LIB_12__::func_846(&(uParam0->f_206));
	__LIB_0__::func_7(&(uParam0->f_172), 16);
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
		__LIB_13__::func_178(uParam0, bVar0);
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
		if (uParam0->f_171 != 0 || func_308(uParam0))
		{
			if (__LIB_12__::func_884(uParam0))
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
	if (__LIB_0__::func_75(&uLocal_283))
	{
		if (__LIB_3__::func_135(&uLocal_283) > 1000)
		{
			if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
			AUDIO::TRIGGER_MUSIC_EVENT(sLocal_261);
			__LIB_0__::func_37(&uLocal_283);
			return 7;
		}
		else
		{
			return 2;
		}
	}
	if (iVar0 == 0)
	{
		if (__LIB_12__::func_936(uParam0))
		{
			func_87(uParam0);
			return 6;
		}
		else
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			__LIB_13__::func_71(&iLocal_79, 1367.11f, -1324.17f, 76.34f, 62.9127f, 1, 1, 1, 1);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_79))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_79, 1367.11f, -1324.17f, 76.34f, 62.9127f, true, false, true);
			}
			else
			{
				return 2;
			}
			fLocal_216 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vLocal_196, false);
			fLocal_215 = fLocal_216;
			__LIB_13__::func_89(uParam0, "CREOLE1_GOMAC", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			iLocal_564 = 2;
			__LIB_12__::func_997(uParam0, func_61(0), func_61(1), 0, 1, 0);
			PERSISTENCE::_0x9D16896F0DBE78A2(vLocal_196, 100f);
			__LIB_0__::func_568(vLocal_196, 50f, 0);
			__LIB_1__::func_148(&uLocal_283);
			return 2;
		}
	}
	else if (iVar0 == 1)
	{
		if (func_316(uParam0, 1))
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			__LIB_13__::func_71(&iLocal_79, 1878.45f, -680.11f, 40.62f, 188.3083f, 1, 1, 1, 1);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_79))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_79, 1878.45f, -680.11f, 40.62f, 188.3083f, true, false, true);
			}
			else
			{
				return 2;
			}
			if (!MAP::DOES_BLIP_EXIST(iLocal_263))
			{
				iLocal_263 = __LIB_8__::func_777(408396114, vLocal_196, 30f, 1);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_263, "CREOLE_BLIP_1");
			}
			__LIB_13__::func_89(uParam0, "CREOLE1_GOMAC", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			fLocal_216 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vLocal_196, false);
			fLocal_215 = fLocal_216;
			iLocal_564 = 3;
			__LIB_12__::func_997(uParam0, func_61(1), func_61(2), 1, 2, 0);
			PERSISTENCE::_0x9D16896F0DBE78A2(vLocal_196, 100f);
			__LIB_1__::func_148(&uLocal_283);
			return 2;
		}
	}
	else if (iVar0 == 2)
	{
		bLocal_255 = true;
		__LIB_1__::func_683(&iLocal_268, 256);
		if (func_316(uParam0, 1))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_174))
			{
				STREAMING::REQUEST_MODEL(iLocal_175, false);
				if (STREAMING::HAS_MODEL_LOADED(iLocal_175))
				{
					iLocal_174 = VEHICLE::CREATE_VEHICLE(iLocal_175, vLocal_212, 272.02f, true, true, false, false);
					VEHICLE::SET_VEHICLE_IS_STOLEN(iLocal_174, false);
				}
			}
			else
			{
				__LIB_1__::func_683(&iLocal_268, 128);
				__LIB_1__::func_683(&iLocal_268, 2);
				bLocal_248 = true;
				__LIB_4__::func_185(&Global_35, &iLocal_174, -1, 1);
				iLocal_564 = 4;
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				__LIB_12__::func_997(uParam0, func_61(2), func_61(3), 2, 3, 0);
				__LIB_1__::func_148(&uLocal_283);
				return 2;
			}
		}
	}
	else if (iVar0 == 3)
	{
		bLocal_227 = true;
		bLocal_255 = true;
		__LIB_1__::func_683(&iLocal_268, 256);
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, 1515.872f, -690.512f, 48.7085f, 135.5904f, true, false, true);
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_174))
		{
			STREAMING::REQUEST_MODEL(iLocal_175, false);
			if (STREAMING::HAS_MODEL_LOADED(iLocal_175))
			{
				iLocal_174 = VEHICLE::CREATE_VEHICLE(iLocal_175, 1519.872f, -694.512f, 48.7085f, 135.5904f, true, true, false, false);
				VEHICLE::SET_VEHICLE_IS_STOLEN(iLocal_174, false);
			}
		}
		else
		{
			func_320(iLocal_174, 1);
			iLocal_564 = 5;
			__LIB_1__::func_683(&iLocal_268, 128);
			__LIB_1__::func_683(&iLocal_268, 2);
			bLocal_248 = true;
			__LIB_1__::func_572(1519.872f, -694.512f, 48.7085f, 50f, 0, 0, 0, 0, 0);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_174, 1519.872f, -694.512f, 48.7085f, 135.5904f, true, false, true);
			__LIB_4__::func_185(&Global_35, &iLocal_174, -1, 1);
			__LIB_12__::func_997(uParam0, func_61(3), func_61(4), 3, 4, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			__LIB_1__::func_148(&uLocal_283);
			return 2;
		}
	}
	else if (iVar0 == 4)
	{
		bLocal_227 = true;
		bLocal_255 = true;
		__LIB_1__::func_683(&iLocal_268, 256);
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, 1305.99f, -1300.051f, 75.1509f, 252.4444f, true, false, true);
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_174))
		{
			iLocal_174 = VEHICLE::CREATE_VEHICLE(iLocal_175, 1310.99f, -1303.051f, 75.1509f, 252.4444f, true, true, false, false);
			VEHICLE::SET_VEHICLE_IS_STOLEN(iLocal_174, false);
			return 2;
		}
		func_320(iLocal_174, 1);
		iLocal_564 = 5;
		__LIB_1__::func_683(&iLocal_268, 128);
		__LIB_1__::func_683(&iLocal_268, 2);
		bLocal_248 = true;
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_174, 1310.99f, -1303.051f, 75.1509f, 252.4444f, true, false, true);
		__LIB_4__::func_185(&Global_35, &iLocal_174, -1, 1);
		__LIB_1__::func_572(1310.99f, -1303.051f, 75.1509f, 10f, 0, 0, 0, 0, 0);
		__LIB_12__::func_997(uParam0, func_61(4), func_61(5), 4, 5, 0);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		__LIB_1__::func_148(&uLocal_283);
		return 2;
	}
	else if (iVar0 == 5)
	{
		bLocal_255 = true;
		__LIB_1__::func_683(&iLocal_268, 256);
		if (__LIB_4__::func_511())
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_174))
			{
				iLocal_174 = VEHICLE::CREATE_VEHICLE(iLocal_175, 1378.24f, -1330.79f, 77.64f, 177.68f, true, true, false, false);
				VEHICLE::SET_VEHICLE_IS_STOLEN(iLocal_174, false);
			}
			else
			{
				func_320(iLocal_174, 1);
				__LIB_1__::func_683(&iLocal_268, 128);
				__LIB_1__::func_683(&iLocal_268, 2);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_174, 1378.14f, -1327.31f, 76.58f, 132.68f, true, false, true);
				__LIB_4__::func_185(&Global_35, &iLocal_174, -1, 1);
				iLocal_564 = 5;
				func_323(uParam0);
				return 6;
			}
		}
		else
		{
			__LIB_1__::func_681(&iLocal_268, 512);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
			AUDIO::TRIGGER_MUSIC_EVENT(sLocal_261);
			AUDIO::TRIGGER_MUSIC_EVENT(sLocal_258);
			return 8;
		}
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
		if (!__LIB_12__::func_925(uParam0))
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
		__LIB_13__::func_178(uParam0, 0);
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
	return func_337(Var0, &(uParam0->f_206), uParam0);
}

int func_103(var uParam0)
{
	switch (iLocal_563)
	{
		case 0:
			if (!__LIB_0__::func_163(iLocal_14, 1647992574))
			{
				TASK::CLEAR_PED_TASKS(iLocal_14, true, false);
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_14, vLocal_179, 2f, -1, false, false, true, false);
			}
			return 7;
		case 1:
			__LIB_13__::func_33(uParam0, -1);
			__LIB_1__::func_572(1372.16f, -1348.44f, 76.49f, 3f, 0, 0, 0, 0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_174))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_174, 1372.16f, -1348.44f, 76.49f, 175.51f, true, false, true);
			}
			if (__LIB_0__::func_272(iLocal_14, 1))
			{
				if (!PED::IS_PED_IN_VEHICLE(iLocal_14, iLocal_174, false))
				{
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_14, 1377.6f, -1346.63f, 76.81f, 175.51f, true, false, true);
				}
			}
			if (__LIB_0__::func_272(iLocal_14, 1) && ENTITY::DOES_ENTITY_EXIST(iLocal_174))
			{
				if (!PED::IS_PED_IN_VEHICLE(iLocal_14, iLocal_174, false))
				{
					TASK::CLEAR_PED_TASKS(iLocal_14, true, false);
					TASK::TASK_WARP_PED_INTO_VEHICLE(iLocal_14, iLocal_174, -1);
				}
				VEHICLE::_0x7C06330BFDDA182E(iLocal_174);
				VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_174, 5, true);
			}
			if (MAP::DOES_BLIP_EXIST(iLocal_263))
			{
				MAP::REMOVE_BLIP(&iLocal_263);
			}
			AUDIO::TRIGGER_MUSIC_EVENT(sLocal_258);
			func_343(joaat("DOCUMENT_PAMPHLET_SPECIAL_MEDICINE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
			return 8;
	}
	return 7;
}

bool func_104(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_172, 256) && !__LIB_0__::func_1(uParam0->f_172, 1024))
	{
		if (!__LIB_12__::func_925(uParam0))
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

int func_107(var uParam0)
{
	char* sVar0;
	func_346();
	func_347();
	switch (iLocal_564)
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_65))
			{
				iLocal_65 = __LIB_8__::func_931(joaat("A_M_M_RHDTOWNFOLK_01"), 1371.51f, -1318.9f, 76.37f, -174.5f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				TASK::CLEAR_PED_TASKS(iLocal_65, true, false);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_65, Global_35, 3000, -1f, -1f, -1f);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_65, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_65, 253, true);
				__LIB_12__::func_875(uParam0, iLocal_65, "CRL_PED1", 0);
			}
			else
			{
				__LIB_12__::func_875(uParam0, iLocal_65, "CRL_PED1", 0);
				__LIB_12__::func_997(uParam0, func_61(0), func_61(1), 0, 1, 0);
				iLocal_564 = 1;
			}
			break;
		case 1:
			PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, joaat("DISCOVERABLE_NAME_DOCTOR"));
			if (bLocal_294)
			{
				if (__LIB_0__::func_181())
				{
					sVar0 = "CRL1_PED_INFOJ";
				}
				else
				{
					sVar0 = "CRL1_PED_INFO";
				}
				if (!__LIB_6__::func_903(sVar0) && !__LIB_8__::func_684(sVar0))
				{
					fLocal_216 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vLocal_196, false);
					fLocal_215 = fLocal_216;
					__LIB_12__::func_883(uParam0, "CREOLE1_GOMAC", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					__LIB_13__::func_89(uParam0, "CREOLE1_GOMAC", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					iLocal_564 = 2;
				}
			}
			else
			{
				func_353(uParam0);
			}
			break;
		case 2:
			func_354();
			func_355(uParam0);
			if (!MAP::DOES_BLIP_EXIST(iLocal_263))
			{
				iLocal_263 = __LIB_8__::func_777(408396114, vLocal_196, 30f, 1);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_263, "CREOLE_BLIP_1");
				MAP::_BLIP_SET_MODIFIER(iLocal_263, -1878373110);
			}
			if (func_316(uParam0, 0))
			{
				__LIB_12__::func_997(uParam0, func_61(1), func_61(2), 1, 2, 0);
				iLocal_564 = 3;
			}
			if (!bLocal_256 && __LIB_0__::func_266(Global_35, vLocal_196, 50f, 1, 1))
			{
				__LIB_12__::func_883(uParam0, "CRL2_OBJ_FIN", 1, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				bLocal_256 = true;
			}
			break;
		case 3:
			func_356(uParam0);
			func_354();
			func_357(1);
			if (func_358(uParam0))
			{
				iLocal_564 = 4;
			}
			func_359(uParam0);
			if (iLocal_568 == 3 && iLocal_476 != -1)
			{
				func_360(uParam0);
				iLocal_564 = 4;
			}
			break;
		case 4:
			func_354();
			func_361(uParam0);
			func_362(uParam0);
			func_363();
			func_356(uParam0);
			if (!__LIB_0__::func_27(iLocal_268, 512))
			{
				if (func_364())
				{
					func_360(uParam0);
					iLocal_568 = 3;
				}
			}
			func_359(uParam0);
			if (iLocal_568 == 3)
			{
				func_360(uParam0);
			}
			func_365(uParam0);
			if (bLocal_233)
			{
				if (!bLocal_239)
				{
					func_323(uParam0);
				}
			}
			func_366(uParam0);
			func_367(uParam0);
			func_368(uParam0);
			if (func_369(uParam0))
			{
				if (!__LIB_0__::func_27(iLocal_268, 256))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_481[4 /*10*/]))
					{
						__LIB_12__::func_875(uParam0, Local_481[4 /*10*/], "CRL_ENEMY_3", 0);
						__LIB_12__::func_876(uParam0, "RCRLE_IG1", 0);
					}
					else
					{
						__LIB_13__::func_123(uParam0, "RCRLE_WAGON_", 0, 0);
					}
					__LIB_1__::func_683(&iLocal_268, 256);
					func_357(0);
				}
				__LIB_12__::func_883(uParam0, "CRL2_OBJ_RID", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				iLocal_564 = 5;
			}
			break;
		case 5:
			func_372(uParam0);
			func_354();
			func_361(uParam0);
			func_362(uParam0);
			func_363();
			if (__LIB_0__::func_27(iLocal_268, 128))
			{
				if (!__LIB_0__::func_27(iLocal_268, 2))
				{
					__LIB_12__::func_883(uParam0, "CRL2_OBJ_WAG", 1, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					__LIB_1__::func_683(&iLocal_268, 2);
				}
			}
			if (!__LIB_0__::func_27(iLocal_268, 512))
			{
				if (func_364())
				{
					func_360(uParam0);
				}
			}
			if (bLocal_233)
			{
				if (!bLocal_239)
				{
					func_323(uParam0);
				}
				else if (func_373(uParam0))
				{
					AUDIO::TRIGGER_MUSIC_EVENT(sLocal_258);
					return 6;
				}
			}
			func_366(uParam0);
			func_374(uParam0);
			func_375(uParam0);
			if (!func_376())
			{
				if (!PED::IS_PED_IN_VEHICLE(Global_35, iLocal_174, false))
				{
					__LIB_0__::func_325(&iLocal_263);
					__LIB_12__::func_883(uParam0, "CRL2_OBJ_WAG", 1, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					iLocal_564 = 4;
				}
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
		func_412(Global_1347702[iParam0 /*49*/].f_15, bParam4, bParam2, bParam6, bParam5);
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
	vVar2 = { func_416(Global_2621440[0 /*12066*/].f_9.f_7, &uVar0, &uVar1, 0, 1, 1, 0, 0, 0) };
	__LIB_0__::func_321(vVar2, uVar1, uVar0, 0);
	__LIB_0__::func_322(vVar2);
	Global_40.f_9.f_15 = __LIB_1__::func_447(vVar2, 0);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	MISC::SET_RANDOM_WEATHER_TYPE(false, true);
}

void func_138(var uParam0)
{
	AUDIO::TRIGGER_MUSIC_EVENT(sLocal_259);
	if (VEHICLE::GET_LAST_DRIVEN_VEHICLE() == iLocal_174)
	{
		VEHICLE::CLEAR_LAST_DRIVEN_VEHICLE();
	}
}

bool func_150(var uParam0)
{
	float fVar0;
	fVar0 = 100f;
	if (!__LIB_0__::func_27(iLocal_268, 32))
	{
		func_440(uParam0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_14))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_14, false);
		if (!__LIB_0__::func_27(iLocal_268, 32))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(Global_35, iLocal_14, 15f, 15f, 15f, false, true, 0))
			{
				__LIB_12__::func_876(uParam0, "CRL2_FOLLOW", 0);
			}
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_14))
	{
		if (!ENTITY::IS_ENTITY_AT_ENTITY(Global_35, iLocal_14, fVar0, fVar0, fVar0, false, true, 0))
		{
			__LIB_2__::func_788(&iLocal_14, 1, 0, 1);
			return true;
		}
	}
	else
	{
		__LIB_2__::func_788(&iLocal_14, 1, 0, 1);
		return true;
	}
	if (__LIB_4__::func_257(iLocal_174))
	{
		__LIB_2__::func_788(&iLocal_14, 1, 0, 1);
		return true;
	}
	if (!__LIB_0__::func_27(iLocal_268, 32))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_14))
		{
			if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_14, Global_35, 1, 1) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_14, true, false), 20f, true)) || PED::IS_PED_FLEEING(iLocal_14))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(Global_35, iLocal_14, 15f, 15f, 15f, false, true, 0))
				{
					if (!__LIB_0__::func_27(iLocal_268, 32))
					{
						if (__LIB_12__::func_876(uParam0, "CRL2_DOCT3", 0))
						{
							__LIB_1__::func_683(&iLocal_268, 32);
						}
					}
				}
				else
				{
					__LIB_1__::func_683(&iLocal_268, 32);
				}
				TASK::CLEAR_PED_TASKS(iLocal_14, true, false);
				TASK::CLEAR_PED_SECONDARY_TASK(iLocal_14);
				TASK::TASK_SMART_FLEE_PED(iLocal_14, Global_35, 10000f, -1, 0, 1077936128 /* Float: 3f */, 0);
				PED::SET_PED_KEEP_TASK(iLocal_14, true);
			}
		}
	}
	return false;
}

void func_159(var uParam0)
{
	func_441(uParam0);
	__LIB_4__::func_866(&iLocal_176, 1, 1);
	__LIB_4__::func_866(&iLocal_177, 1, 1);
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_14))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_174) && !__LIB_0__::func_163(iLocal_14, -258271821))
		{
			TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_14, iLocal_174, 3f, 524423);
			PED::SET_PED_KEEP_TASK(iLocal_14, true);
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_174))
		{
			TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_14, Global_35, 6, 0, -1082130432 /* Float: -1f */, -1, 0);
		}
	}
	__LIB_2__::func_788(&iLocal_14, 1, 0, 1);
	__LIB_1__::func_532(Global_1347702[uParam0->f_174 /*49*/].f_15, 0);
	__LIB_12__::func_949(uParam0);
	PED::SET_PED_CONFIG_FLAG(iLocal_14, 169, false);
	PED::SET_PED_CONFIG_FLAG(iLocal_14, 170, false);
	__LIB_6__::func_357();
}

void func_186()
{
	Local_481[0 /*10*/].f_2 = { 1889.12f, -729.28f, 41.03f };
	Local_481[1 /*10*/].f_2 = { 1893.99f, -737.36f, 41.34f };
	Local_481[2 /*10*/].f_2 = { 1876.14f, -745.19f, 40.91f };
	Local_481[3 /*10*/].f_2 = { 1891.85f, -772.92f, 41.28f };
	Local_481[4 /*10*/].f_2 = { 1879.43f, -734.71f, 41.55f };
	Local_481[5 /*10*/].f_2 = { 1883.48f, -770.62f, 41.46f };
	Local_542[0 /*5*/].f_1 = { 1898.43f, -730.72f, 41.15f };
	Local_542[1 /*5*/].f_1 = { 1897.28f, -729.93f, 41.13f };
	Local_542[2 /*5*/].f_1 = { 1879.677f, -731.147f, 41.0128f };
	Local_542[3 /*5*/].f_1 = { 1896.298f, -746.8185f, 40.8211f };
	Local_542[0 /*5*/].f_4 = 170.9304f;
	Local_542[1 /*5*/].f_4 = 177.6616f;
	Local_542[2 /*5*/].f_4 = 181.2684f;
	Local_542[3 /*5*/].f_4 = 5.9245f;
	Local_481[0 /*10*/].f_5 = 347.7479f;
	Local_481[1 /*10*/].f_5 = 175.6944f;
	Local_481[2 /*10*/].f_5 = 89.6739f;
	Local_481[3 /*10*/].f_5 = 178.6216f;
	Local_481[4 /*10*/].f_5 = 175.9928f;
	Local_481[5 /*10*/].f_5 = 305.5425f;
	Local_481[0 /*10*/].f_7 = joaat("WEAPON_REPEATER_CARBINE");
	Local_481[1 /*10*/].f_7 = joaat("WEAPON_REVOLVER_CATTLEMAN");
	Local_481[2 /*10*/].f_7 = joaat("WEAPON_REVOLVER_CATTLEMAN");
	Local_481[3 /*10*/].f_7 = joaat("WEAPON_REPEATER_CARBINE");
	Local_481[4 /*10*/].f_7 = joaat("WEAPON_SHOTGUN_DOUBLEBARREL");
	Local_481[5 /*10*/].f_7 = joaat("WEAPON_REPEATER_CARBINE");
	Local_481[0 /*10*/].f_9 = 719303544;
	Local_481[1 /*10*/].f_9 = 526818438;
	Local_481[2 /*10*/].f_9 = 1295349795;
	Local_481[3 /*10*/].f_9 = 1675863431;
	Local_481[4 /*10*/].f_9 = 1372914026;
	Local_481[5 /*10*/].f_9 = -2104565027;
	iLocal_83[0] = 2029572017;
	iLocal_83[1] = -1496994998;
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
		iVar0 = func_493(0, 0);
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

int func_235(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_14))
	{
		if (!__LIB_0__::func_272(iLocal_14, 1))
		{
			_NAMESPACE29::_0x0EABF182FBB63D72(iLocal_14, 6, 1);
			_NAMESPACE29::_0x0EABF182FBB63D72(Global_35, 6, 1);
			return 1;
		}
		else if (!func_525(&iLocal_14, &uLocal_116, &uLocal_144, 1, 0, 0))
		{
			if (!bLocal_293 && !__LIB_5__::func_463())
			{
				bLocal_293 = __LIB_12__::func_876(uParam0, "CRL1_DOCT2", 0);
			}
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_14, iLocal_176, false);
			_NAMESPACE29::_0x0EABF182FBB63D72(iLocal_14, 6, 1);
			_NAMESPACE29::_0x0EABF182FBB63D72(Global_35, 6, 1);
			TASK::CLEAR_PED_TASKS(iLocal_14, true, false);
			ANIMSCENE::_0x99B2A2E3655DEAF1(iLocal_14, "ClosestScenario");
			TASK::TASK_SMART_FLEE_PED(iLocal_14, Global_35, 10000f, -1, 0, 1077936128 /* Float: 3f */, 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_14, false);
			PED::SET_PED_KEEP_TASK(iLocal_14, true);
			return 1;
		}
		PED::SET_PED_CONFIG_FLAG(iLocal_14, 169, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_14, 170, false);
	}
	return 0;
}

void func_240(var uParam0)
{
	if (!PED::IS_PED_IN_VEHICLE(iLocal_14, iLocal_174, false))
	{
		TASK::CLEAR_PED_TASKS(iLocal_14, true, false);
		TASK::TASK_WARP_PED_INTO_VEHICLE(iLocal_14, iLocal_174, -1);
	}
	func_441(uParam0);
	__LIB_0__::func_325(&iLocal_263);
	__LIB_6__::func_357();
}

void func_255(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_172, 16))
	{
		__LIB_12__::func_966(uParam0, 0);
		func_87(uParam0);
	}
}

int func_280(var uParam0)
{
	int iVar0;
	char* sVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_14))
	{
		iLocal_14 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Global_1347702[uParam0->f_174 /*49*/].f_43);
		__LIB_13__::func_260(uParam0, iLocal_14);
		Local_15 = { 0f, 0f, 0f };
		Local_15.f_3 = Global_35;
		Local_15.f_4 = 21030;
		Local_15.f_8 = 4;
		Local_15.f_19 = 4;
		Local_15.f_21 = 4;
		Local_15.f_17 = 4;
		Local_15.f_18 = 4;
		Local_15.f_7 = 0;
		Local_40 = { 0f, 0f, 0f };
		Local_40.f_3 = iLocal_14;
		Local_40.f_4 = 21030;
		Local_40.f_8 = 4;
		Local_40.f_19 = 4;
		Local_40.f_21 = 4;
		Local_40.f_17 = 4;
		Local_40.f_18 = 4;
		Local_40.f_7 = 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iLocal_14))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_14))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_14, true, true);
	}
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_14, false);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_14, true);
	PED::SET_PED_CAN_BE_TARGETTED(iLocal_14, false);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_14, joaat("REL_CIVMALE"));
	WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_14, true, true);
	TASK::TASK_LOOK_AT_ENTITY(iLocal_14, Global_35, -1, 0, 51, 0);
	__LIB_12__::func_875(uParam0, iLocal_14, "CRL_CREOLE_D", 0);
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_176))
	{
		iLocal_176 = OBJECT::CREATE_OBJECT(joaat("P_CHAIR_CRATE02X"), vLocal_179, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(iLocal_176, vLocal_182, 2, true);
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_177))
	{
		iLocal_177 = OBJECT::CREATE_OBJECT(joaat("P_CS_BAGANDERS01X"), 1382.1f, -1336.65f, 77.08f, true, true, false, false, true);
		return 0;
	}
	TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_14, vLocal_179, 2f, -1, false, false, true, false);
	PED::SET_PED_CONFIG_FLAG(iLocal_14, 253, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_14, 169, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_14, 170, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_14, 137, true);
	PED::SET_PED_RESET_FLAG(iLocal_14, 49, true);
	PED::_0xAE6004120C18DF97(iLocal_14, 0, 0);
	iVar0 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(vLocal_179, joaat("PROP_HUMAN_SEAT_CHAIR"), 3f, 0, false);
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar0))
	{
	}
	if (__LIB_0__::func_181())
	{
		sVar1 = "JOHN";
	}
	else
	{
		sVar1 = "ARTHUR";
	}
	__LIB_12__::func_875(uParam0, Global_35, sVar1, 0);
	return 1;
}

void func_296(var uParam0)
{
	__LIB_5__::func_467(40);
}

int func_299(var uParam0)
{
	if (__LIB_13__::func_23(&(uParam0->f_206), "RCRLE_S1_INT"))
	{
		if (!bLocal_224)
		{
			iLocal_86 = VEHICLE::GET_LAST_DRIVEN_VEHICLE();
			if (__LIB_0__::func_48(iLocal_86, Global_35, 25f, 1))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_86, 1352.459f, -1361.397f, 77.9547f, 20.9006f, true, false, true);
			}
			MISC::CLEAR_AREA(1383.175f, -1335.19f, 77.08689f, 5f, 16936);
			__LIB_6__::func_815(&(Local_300[0 /*61*/]), iLocal_14);
			bLocal_224 = true;
		}
		if (__LIB_13__::func_218(&(uParam0->f_206), Global_35, 0, 0, 1, 1))
		{
			__LIB_0__::func_569(joaat("MOTIONSTATE_WALK"), 1000, 0, 1, 1, 0, 0, 0);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_65))
		{
			iLocal_65 = __LIB_8__::func_931(joaat("A_M_M_RHDTOWNFOLK_01"), 1371.51f, -1318.9f, 76.37f, -174.5f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			TASK::CLEAR_PED_TASKS(iLocal_65, true, false);
			TASK::TASK_LOOK_AT_ENTITY(iLocal_65, Global_35, -1, 0, 51, 0);
			__LIB_1__::func_473(iLocal_65, joaat("WORLD_HUMAN_SMOKE"), 0, 0, 0, -1082130432 /* Float: -1f */);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_65, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_65, 253, true);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_79))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_79, 1380.253f, -1337.974f, 75.47678f, 1384.443f, -1326.117f, 79.59731f, 4.75f, false, true, 0))
			{
				if (__LIB_0__::func_126(iLocal_79))
				{
					PHYSICS::_0x0348469DAA17576C(iLocal_79);
				}
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_79, 1368.42f, -1329.7f, 76.59f, 23.81f, true, false, true);
				TASK::CLEAR_PED_TASKS(iLocal_79, true, false);
				TASK::TASK_STAND_STILL(iLocal_79, -1);
			}
		}
		else
		{
			__LIB_13__::func_574(uParam0, &iLocal_79, 1368.42f, -1329.7f, 76.59f, 23.81f, 1, 1, 1, 1, 1);
		}
	}
	return 1;
}

char* func_301(var uParam0)
{
	switch (iLocal_563)
	{
		case 0:
			return "RCRLE_S1_INT";
		case 1:
			return "rcrle_s2_ext";
	}
	return "";
}

bool func_308(var uParam0)
{
	int iVar0;
	iVar0 = __LIB_2__::func_340(2, 0, 0);
	iVar0 |= 2048;
	if (bLocal_243 && __LIB_0__::func_266(iLocal_14, vLocal_179, 1.5f, 1, 1))
	{
		_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_14, &Local_15);
		_NAMESPACE29::_0x66F9EB44342BB4C5(Global_35, &Local_40);
		__LIB_12__::func_773(0, 1, 1, 1);
		if (!__LIB_2__::func_123(Global_35, iLocal_14, 0.7f) && !__LIB_0__::func_163(Global_35, -875674219))
		{
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(Global_35, iLocal_14, 0, -1f, -1f, -1f);
		}
	}
	switch (iLocal_565)
	{
		case 0:
			if (func_620(0, 0, "pl_ilo"))
			{
				if (func_621())
				{
					PLAYER::_0x3946FC742AC305CD(PLAYER::GET_PLAYER_INDEX(), iLocal_14, "RC_CREOLE1_PRE", 0f, 0f, 0f, 0, "RCRL_PRE");
					iLocal_565 = 1;
				}
			}
			break;
		case 1:
			if (!bLocal_299)
			{
				func_622(uParam0);
			}
			else
			{
				if ((__LIB_2__::func_123(iLocal_14, Global_35, 0f) && __LIB_2__::func_123(Global_35, iLocal_14, 0.7f)) && !PED::IS_PED_INJURED(iLocal_14))
				{
					__LIB_2__::func_411(&(Local_362[0 /*17*/]), 1, 0);
				}
				else
				{
					__LIB_2__::func_411(&(Local_362[0 /*17*/]), 0, 0);
				}
				if (func_624(&iLocal_14, &(Local_300[0 /*61*/]), 4f, &Local_362, 0.25f, 3, 0, "", iVar0, 0, 0, 2, -1082130432 /* Float: -1f */) > -1)
				{
					PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "RCRL_PRE");
					PLAYER::_0x3946FC742AC305CD(PLAYER::GET_PLAYER_INDEX(), iLocal_14, "RC_CREOLE_1", 0f, 0f, 0f, iLocal_14, "RCRL_ACTIVE");
					ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_566[0], "Loop", true, false);
					func_625();
					__LIB_10__::func_385(iLocal_14);
					__LIB_12__::func_773(0, 1, 1, 1);
					bLocal_243 = true;
					iLocal_565 = 2;
				}
			}
			break;
		case 2:
			__LIB_11__::func_733(&iLocal_14, &(Local_300[0 /*61*/]), &Local_362, 4f, -1082130432 /* Float: -1f */, 0);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DUCK"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
			__LIB_1__::func_538(0);
			if (((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_566[0]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_566[0], false)) && (ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(iLocal_566[0]) || ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_566[0]) > 0.98f)) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iLocal_566[0], false))
			{
				PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "RCRL_ACTIVE");
				return true;
			}
			break;
	}
	return false;
}

bool func_316(var uParam0, int iParam1)
{
	int iVar0;
	if (!func_631())
	{
		return false;
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vLocal_212, true) > 150f && iParam1 == 0)
	{
		return false;
	}
	iVar0 = __LIB_12__::func_767(uParam0);
	if (!bLocal_232)
	{
		if (iVar0 < 2)
		{
			MISC::CLEAR_AREA(vLocal_212, 100f, 16904);
		}
		else
		{
			MISC::CLEAR_AREA(vLocal_212, 100f, 520);
		}
		__LIB_2__::func_165(vLocal_212, 50f, 0, 0, 5);
		bLocal_232 = true;
	}
	if (iVar0 < 2)
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_297))
		{
			iLocal_297 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1878.075f, -772.4456f, 43.06956f, 0f, 0f, 5.001168f, 12.31417f, 9.864564f, 3.512225f, "Pier guard wander box");
			return false;
		}
		if (!func_633(uParam0))
		{
			return false;
		}
		if (!func_634(uParam0))
		{
			return false;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_174))
	{
		iLocal_174 = VEHICLE::CREATE_VEHICLE(iLocal_175, vLocal_212, 272.02f, true, true, false, false);
		VEHICLE::SET_VEHICLE_IS_STOLEN(iLocal_174, false);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_178))
	{
		iLocal_178 = OBJECT::CREATE_OBJECT(joaat("P_CRATECOVER04X"), 1882.96f, -732.31f, 41f, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(iLocal_178, 0f, 0f, 23f, 2, true);
	}
	__LIB_1__::func_948(iLocal_222, 1, 0f, 0, 0, 0, 0, 0);
	__LIB_1__::func_948(iLocal_223, 1, 0f, 0, 0, 0, 0, 0);
	__LIB_1__::func_948(679442855, 0, 0, 0, 1, 0, 0, 0);
	func_320(iLocal_174, 1);
	PED::SET_PED_CONFIG_FLAG(Global_35, 337, true);
	return true;
}

void func_320(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iParam0, iVar0);
		if (__LIB_0__::func_272(iVar1, 1))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, bParam1);
		}
		iVar0++;
	}
}

void func_323(var uParam0)
{
	char cVar0[64];
	__LIB_12__::func_981(uParam0, 103140);
	iLocal_563 = 1;
	StringCopy(&(uParam0->f_2575), func_301(uParam0), 24);
	__LIB_12__::func_944(uParam0, &(uParam0->f_2575), 0);
	__LIB_12__::func_956(&(uParam0->f_753), Global_35, 0, 0);
	__LIB_12__::func_956(&(uParam0->f_753), iLocal_14, "creoledoctor", 0);
	__LIB_12__::func_956(&(uParam0->f_753), iLocal_177, "p_cs_baganders01x", 0);
	__LIB_12__::func_956(&(uParam0->f_753), iLocal_176, "p_chair_crate02x", 0);
	__LIB_12__::func_779(uParam0, vLocal_202);
	__LIB_13__::func_59(uParam0, iLocal_14, "cs_creoledoctor", 0, 0, 0);
	__LIB_13__::func_59(uParam0, Global_35, 0, 0, 0, 0);
	__LIB_12__::func_957(uParam0, iLocal_177, "p_bag01x", 0, 0, 0);
	__LIB_12__::func_957(uParam0, iLocal_176, "p_chair_crate02x", 0, 0, 0);
	__LIB_12__::func_957(uParam0, iLocal_174, "WAGONDOC01x", 0, 0, 0);
	if (!PROPSET::_DOES_VEHICLE_HAVE_ANY_PROPSET(iLocal_174))
	{
		PROPSET::_0xD80FAF919A2E56EA(iLocal_174, iLocal_185);
	}
	__LIB_12__::func_846(&(uParam0->f_206));
	if (__LIB_0__::func_113() && __LIB_1__::func_187(58))
	{
		StringCopy(&cVar0, "2-Sick", 64);
	}
	else
	{
		StringCopy(&cVar0, "1-Well", 64);
	}
	__LIB_12__::func_676(&(uParam0->f_206), &cVar0);
	__LIB_13__::func_17(&(uParam0->f_206), &cVar0, 0);
	__LIB_13__::func_402(&(uParam0->f_206), cVar0);
	__LIB_13__::func_490(uParam0, 75f, 100f);
	__LIB_0__::func_7(&(uParam0->f_172), 16);
	bLocal_239 = true;
}

int func_337(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
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
					__LIB_1__::func_747(uParam4, 4);
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
				__LIB_1__::func_747(uParam4, 3);
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
				__LIB_1__::func_148(&(uParam4->f_1));
				__LIB_1__::func_747(uParam4, 2);
			}
			else
			{
				if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				__LIB_12__::func_913(uParam4);
				if (!__LIB_0__::func_75(&(uParam4->f_1)))
				{
					__LIB_1__::func_283(&(uParam4->f_1), 0);
				}
				else if (__LIB_0__::func_265(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_348))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_348);
					}
					__LIB_1__::func_747(uParam4, 4);
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
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_348))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_348);
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
					__LIB_13__::func_18(uParam4, &uParam0, uParam5);
					__LIB_1__::func_747(uParam4, 3);
				}
				else
				{
					SCRIPTS::SHUTDOWN_LOADING_SCREEN();
				}
			}
			else if (__LIB_0__::func_265(&(uParam4->f_1)) >= 60f)
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_348))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_348);
				}
				__LIB_1__::func_747(uParam4, 4);
			}
			break;
		case 3:
			func_671(uParam4);
			if (__LIB_12__::func_688(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_341);
			}
			__LIB_12__::func_800(uParam5);
			if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_348) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam4->f_348, false)) && (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_348) || __LIB_0__::func_84(uParam4, 512)))
			{
				if (!__LIB_0__::func_84(uParam4, 1024) && __LIB_12__::func_849(uParam4, 1))
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
				__LIB_13__::func_9(uParam4);
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
						__LIB_1__::func_148(&(uParam4->f_1));
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
						__LIB_0__::func_88(uParam4, 512);
						__LIB_12__::func_677(uParam4, 67108864, 1);
						__LIB_1__::func_747(uParam4, 4);
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
				__LIB_13__::func_9(uParam4);
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
						__LIB_1__::func_747(uParam4, 3);
					}
					else if (__LIB_0__::func_265(&(uParam4->f_1)) >= 30f)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_348) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_348))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_348, false);
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

bool func_343(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
				func_343(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
			__LIB_12__::func_629(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1718133314))
		{
			__LIB_12__::func_630(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1738650224))
		{
			__LIB_12__::func_631(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, 949916894))
		{
			__LIB_12__::func_632(iParam0);
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
			__LIB_12__::func_633(iParam0, iParam1);
			__LIB_1__::func_759(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, -1697809989))
		{
			__LIB_12__::func_788(iParam0, 0, 0, 0);
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
						func_343(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_343(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_343(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_343(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_343(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_343(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_343(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
					func_343(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_343(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_343(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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

void func_346()
{
	if (!MAP::DOES_BLIP_EXIST(iLocal_263))
	{
		return;
	}
	if (bLocal_264)
	{
		if (!PED::IS_PED_ON_MOUNT(Global_35) && !__LIB_2__::func_343(Global_35, iLocal_174, 0))
		{
			MAP::_BLIP_REMOVE_MODIFIER(iLocal_263, -1878373110);
			bLocal_264 = false;
		}
	}
	else if (__LIB_0__::func_396(Global_35))
	{
		MAP::_BLIP_SET_MODIFIER(iLocal_263, -1878373110);
		bLocal_264 = true;
	}
}

void func_347()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_174))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_80[0]))
		{
			iLocal_80[0] = __LIB_3__::func_568(iLocal_174, 0);
		}
		else if (!bLocal_253)
		{
			bLocal_253 = true;
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_80[1]))
		{
			iLocal_80[1] = __LIB_3__::func_568(iLocal_174, 1);
		}
		else if (!bLocal_254)
		{
			bLocal_254 = true;
		}
	}
}

void func_353(var uParam0)
{
	int iVar0;
	char* sVar1;
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_65))
	{
		if (!bLocal_294)
		{
			if (!__LIB_0__::func_75(&uLocal_271))
			{
				__LIB_1__::func_148(&uLocal_271);
			}
			else if (__LIB_3__::func_135(&uLocal_271) > 1500)
			{
				if (__LIB_0__::func_181())
				{
					sVar1 = "CRL1_PED_INFOJ";
				}
				else
				{
					sVar1 = "CRL1_PED_INFO";
				}
				bLocal_294 = __LIB_12__::func_876(uParam0, sVar1, 0);
				if (bLocal_294)
				{
					TASK::CLEAR_PED_TASKS(iLocal_65, true, false);
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_LOOK_AT_ENTITY(0, Global_35, -1, 0, 51, 0);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 5000, -1f, -1f, -1f);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1413.88f, -1296.21f, 76.7f, 1f, -1, 0.25f, 0, 40000f);
					TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, 1413.88f, -1296.21f, 76.7f, 15f, 0, false, false, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_65, iVar0);
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					CAM::SET_GAMEPLAY_ENTITY_HINT(iLocal_65, 0f, 0f, 0f, true, 1000, 1500, 1500, 0);
					__LIB_0__::func_37(&uLocal_271);
				}
			}
		}
	}
}

void func_354()
{
	if (__LIB_0__::func_272(Global_35, 0))
	{
		if (bLocal_235)
		{
			if (!PED::IS_PED_ON_MOUNT(Global_35))
			{
				__LIB_5__::func_511(3);
				bLocal_235 = false;
			}
		}
		else if (PED::IS_PED_ON_MOUNT(Global_35))
		{
			bLocal_235 = true;
		}
	}
}

void func_355(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_14))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(Global_35, iLocal_14, 5f, 5f, 5f, false, true, 0))
		{
			if (__LIB_0__::func_75(&uLocal_189))
			{
				if (!bLocal_292 && __LIB_0__::func_265(&uLocal_189) >= 5f)
				{
					bLocal_292 = __LIB_12__::func_876(uParam0, "CRL1_RETURN", 0);
				}
				else if (bLocal_292 && __LIB_0__::func_264(&uLocal_189) >= 20f)
				{
					__LIB_0__::func_37(&uLocal_189);
					bLocal_292 = false;
				}
			}
			else
			{
				__LIB_1__::func_148(&uLocal_189);
			}
		}
		else if (__LIB_0__::func_75(&uLocal_189))
		{
			__LIB_0__::func_37(&uLocal_189);
			bLocal_292 = false;
		}
	}
}

void func_356(var uParam0)
{
	int iVar0;
	int iVar1;
	if (bLocal_248)
	{
		return;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (ENTITY::IS_ENTITY_DEAD(Local_481[iVar0 /*10*/]))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= 6)
	{
		__LIB_13__::func_123(uParam0, "RCRLE_ALLDEAD_", 0, 0);
		bLocal_248 = true;
	}
}

void func_357(bool bParam0)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!bLocal_244[iVar0] == bParam0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_80[iVar0]))
			{
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_80[iVar0], bParam0);
				bLocal_244[iVar0] = bParam0;
			}
			else
			{
				iLocal_80[iVar0] = __LIB_3__::func_568(iLocal_174, iVar0);
			}
		}
		iVar0++;
	}
}

bool func_358(var uParam0)
{
	if (!bLocal_256 && __LIB_0__::func_266(Global_35, vLocal_196, 50f, 1, 1))
	{
		__LIB_12__::func_883(uParam0, "CRL2_OBJ_FIN", 1, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
		bLocal_256 = true;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_174))
	{
		if (__LIB_2__::func_215(Global_35, iLocal_174, 0, 30f, 0) || (func_808(&uLocal_280, ENTITY::GET_ENTITY_COORDS(iLocal_174, true, false), 2f, 3f) == 6 && __LIB_0__::func_665(iLocal_174, Global_35, 1, 1) < 150f))
		{
			if (MAP::DOES_BLIP_EXIST(iLocal_263))
			{
				MAP::REMOVE_BLIP(&iLocal_263);
			}
			__LIB_13__::func_123(uParam0, "RCRLE_SEEWAG_", 0, 0);
			__LIB_1__::func_683(&iLocal_268, 128);
			return true;
		}
	}
	if (func_364())
	{
		func_360(uParam0);
		if (MAP::DOES_BLIP_EXIST(iLocal_263))
		{
			MAP::REMOVE_BLIP(&iLocal_263);
		}
		if (!MAP::DOES_BLIP_EXIST(iLocal_263))
		{
			iLocal_263 = __LIB_8__::func_777(-308585968, vLocal_196, 30f, 1);
			if (!bLocal_256)
			{
				__LIB_12__::func_883(uParam0, "CRL2_OBJ_FIN", 1, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				bLocal_256 = true;
			}
		}
		return true;
	}
	else
	{
		func_366(uParam0);
	}
	if (__LIB_0__::func_27(iLocal_268, 512))
	{
		if (MAP::DOES_BLIP_EXIST(iLocal_263))
		{
			MAP::REMOVE_BLIP(&iLocal_263);
		}
		if (!MAP::DOES_BLIP_EXIST(iLocal_263))
		{
			iLocal_263 = __LIB_8__::func_777(-308585968, vLocal_196, 30f, 1);
			if (!bLocal_256)
			{
				__LIB_12__::func_883(uParam0, "CRL2_OBJ_FIN", 1, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				bLocal_256 = true;
			}
		}
		if (!bLocal_257)
		{
			if (!PED::IS_PED_DEAD_OR_DYING(Local_481[0 /*10*/], true))
			{
				__LIB_12__::func_875(uParam0, Local_481[0 /*10*/], "CRL_ENEMY", 0);
				__LIB_12__::func_876(uParam0, "RCRLE_WTCMBT", 0);
			}
			bLocal_257 = true;
		}
		return true;
	}
	return false;
}

void func_359(var uParam0)
{
	if (bLocal_477)
	{
		return;
	}
	switch (iLocal_568)
	{
		case 0:
			if (ENTITY::DOES_ENTITY_EXIST(Local_481[0 /*10*/]))
			{
				__LIB_2__::func_602(&(Local_441[0 /*17*/]), "CRL2_MAC_ILO_GREET", 0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				__LIB_2__::func_602(&(Local_441[1 /*17*/]), "CRL2_MAC_ILO_ANTAGONISE", 0, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
				PED::SET_PED_CONFIG_FLAG(Local_481[0 /*10*/], 130, false);
				PED::SET_PED_CONFIG_FLAG(Local_481[0 /*10*/], 297, true);
				PED::SET_PED_CONFIG_FLAG(Local_481[0 /*10*/], 178, true);
				PED::SET_PED_CONFIG_FLAG(Local_481[0 /*10*/], 317, true);
				PED::SET_PED_CONFIG_FLAG(Local_481[0 /*10*/], 277, false);
				iLocal_568 = 1;
			}
			break;
		case 1:
			if ((!ENTITY::IS_ENTITY_DEAD(iLocal_79) && !__LIB_0__::func_48(Global_35, Local_481[0 /*10*/], 27f, 1)) && __LIB_2__::func_123(Global_35, Local_481[0 /*10*/], 0f))
			{
				if (__LIB_0__::func_48(Global_35, Local_481[0 /*10*/], 36f, 1))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_79, 1.5f);
				}
				else if (__LIB_0__::func_48(Global_35, Local_481[0 /*10*/], 45f, 1))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_79, 1.75f);
				}
				else if (__LIB_0__::func_48(Global_35, Local_481[0 /*10*/], 54f, 1))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_79, 2f);
				}
			}
			if (__LIB_0__::func_48(Global_35, Local_481[0 /*10*/], 27f, 1))
			{
				if (__LIB_2__::func_123(Global_35, Local_481[0 /*10*/], 0f))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_79))
					{
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_79, 1.5f);
					}
				}
				__LIB_2__::func_411(&(Local_441[0 /*17*/]), 1, 0);
				__LIB_2__::func_411(&(Local_441[1 /*17*/]), 1, 0);
			}
			else
			{
				__LIB_2__::func_411(&(Local_441[0 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(Local_441[1 /*17*/]), 0, 0);
			}
			if (iLocal_476 == -1)
			{
				iLocal_476 = func_624(&(Local_481[0 /*10*/]), &iLocal_380, 27f, &Local_441, 0.25f, 3, 0, "", 10241, 0, 0, 2, -1082130432 /* Float: -1f */);
				if (iLocal_476 == 0)
				{
					__LIB_2__::func_480(&Local_441, 0, 0, 1, 0);
					__LIB_0__::func_82(0, 0, 0);
					__LIB_12__::func_875(uParam0, Local_481[0 /*10*/], "CRL_ENEMY", 0);
					if (__LIB_13__::func_123(uParam0, "CRL_M_ILO_ASK_A", "CRL_M_ILO_ASK_J", 0))
					{
						__LIB_2__::func_45(Local_481[0 /*10*/], Global_35, -1);
						iLocal_568 = 2;
					}
				}
				else if (iLocal_476 == 1)
				{
					__LIB_2__::func_480(&Local_441, 0, 0, 1, 0);
					__LIB_0__::func_82(0, 0, 0);
					__LIB_12__::func_875(uParam0, Local_481[0 /*10*/], "CRL_ENEMY", 0);
					if (__LIB_13__::func_123(uParam0, "CRL_M_ILO_TRT_A", "CRL_M_ILO_TRT_J", 0))
					{
						__LIB_2__::func_45(Local_481[0 /*10*/], Global_35, -1);
						iLocal_568 = 2;
					}
				}
				else
				{
					iLocal_476 = -1;
				}
			}
			break;
		case 2:
			if (!bLocal_195 && __LIB_2__::func_123(Global_35, Local_481[0 /*10*/], 0f))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_79))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_79, 1f);
				}
			}
			__LIB_1__::func_480(&(Local_481[0 /*10*/]));
			__LIB_2__::func_480(&Local_441, 0, 0, 1, 0);
			if ((((!__LIB_0__::func_75(&uLocal_192) && !__LIB_5__::func_259("CRL_M_ILO_ASK_A")) && !__LIB_5__::func_259("CRL_M_ILO_ASK_J")) && !__LIB_5__::func_259("CRL_M_ILO_TRT_A")) && !__LIB_5__::func_259("CRL_M_ILO_TRT_J"))
			{
				__LIB_1__::func_148(&uLocal_192);
			}
			if (!bLocal_195)
			{
				if (__LIB_0__::func_264(&uLocal_192) > 1.5f || __LIB_0__::func_48(Global_35, Local_481[0 /*10*/], (fLocal_218 / 2f), 1))
				{
					__LIB_5__::func_20(0, 0);
					__LIB_12__::func_876(uParam0, "CRL_POST_ILO_1", 0);
					__LIB_1__::func_148(&uLocal_192);
					bLocal_195 = true;
				}
			}
			if (fLocal_217 == 0f)
			{
				if (iLocal_476 == 0)
				{
					fLocal_217 = 9.5f;
				}
				else if (iLocal_476 == 1)
				{
					fLocal_217 = 7f;
				}
				else
				{
					fLocal_217 = 9.5f;
				}
			}
			if (bLocal_195 && !__LIB_8__::func_684("CRL_POST_ILO_1"))
			{
				fLocal_478 = __LIB_0__::func_665(Global_35, Local_481[0 /*10*/], 1, 1);
				if (fLocal_478 > fLocal_479)
				{
					fLocal_479 = fLocal_478;
					__LIB_1__::func_148(&uLocal_192);
				}
			}
			if (func_815(&uLocal_66, 0, &uLocal_87, &uLocal_115, 0, -1))
			{
				bLocal_242 = true;
			}
			else if (__LIB_0__::func_48(Global_35, Local_481[0 /*10*/], 15f, 1))
			{
				bLocal_242 = true;
			}
			else if ((bLocal_195 && __LIB_0__::func_264(&uLocal_192) > fLocal_217) && __LIB_0__::func_48(Global_35, Local_481[0 /*10*/], 50f, 1))
			{
				bLocal_242 = true;
			}
			if (bLocal_242)
			{
				__LIB_5__::func_20(0, 0);
				__LIB_12__::func_876(uParam0, "CRL_POST_ILO_2", 0);
				iLocal_568 = 3;
			}
			break;
		case 3:
			__LIB_0__::func_37(&uLocal_192);
			__LIB_1__::func_480(&(Local_481[0 /*10*/]));
			__LIB_2__::func_480(&Local_441, 0, 0, 1, 0);
			bLocal_477 = true;
			break;
	}
}

void func_360(var uParam0)
{
	int iVar0;
	int iVar1;
	if (func_816(uParam0))
	{
		if (__LIB_0__::func_27(iLocal_268, 512))
		{
			if (__LIB_12__::func_645(uParam0) != 1)
			{
				__LIB_12__::func_937(uParam0, 1);
			}
			return;
		}
		if (!bLocal_247 && !__LIB_5__::func_463())
		{
			if (iLocal_270 < 1 && !ENTITY::IS_ENTITY_DEAD(Local_481[0 /*10*/]))
			{
				bLocal_247 = __LIB_12__::func_876(uParam0, "CRL_ATTACK", 0);
			}
			else if (iLocal_270 > 0)
			{
				bLocal_247 = __LIB_5__::func_469(Local_481[iLocal_270 /*10*/], "CALLOUT_JUST_KILL_EM_MALE", joaat("SPEECH_PARAMS_ADD_BLIP_SHOUTED"), Global_35, 1, 0, 0, 1);
			}
			else
			{
				bLocal_247 = __LIB_5__::func_469(Local_481[1 /*10*/], "CALLOUT_JUST_KILL_EM_MALE", joaat("SPEECH_PARAMS_ADD_BLIP_SHOUTED"), Global_35, 1, 0, 0, 1);
			}
		}
		iLocal_568 = 3;
		func_359(uParam0);
		iVar1 = 0;
		while (iVar1 < 6)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_481[iVar1 /*10*/]))
			{
				if (iVar1 != 4)
				{
					if (!MAP::DOES_BLIP_EXIST(Local_481[iVar1 /*10*/].f_6))
					{
						Local_481[iVar1 /*10*/].f_6 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_481[iVar1 /*10*/]);
						MAP::_BLIP_SET_MODIFIER(Local_481[iVar1 /*10*/].f_6, -1034486097);
					}
				}
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_481[iVar1 /*10*/], joaat("REL_PLAYER_ENEMY"));
				if (iVar1 == 1)
				{
					TASK::CLEAR_PED_TASKS(Local_481[iVar1 /*10*/], true, false);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_481[iVar1 /*10*/], 0, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_481[iVar1 /*10*/], 44, true);
					if (!VOLUME::_DOES_VOLUME_EXIST(Local_481[iVar1 /*10*/].f_8))
					{
						Local_481[iVar1 /*10*/].f_8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(1891.59f, -745.07f, 40.94f, 0f, 0f, 0f, 10f, 10f, 10f, "Guard Defensive Area 1");
					}
					__LIB_4__::func_291(Local_481[iVar1 /*10*/], Local_481[iVar1 /*10*/].f_8, 0, 0);
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_35, 1886.828f, -702.5042f, 40.05277f, 1886.787f, -733.9763f, 43.95276f, 30f, false, true, 0))
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar0);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, 1891.59f, -745.07f, 40.94f, Global_35, 3f, 1, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 120f, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(iVar0);
						TASK::TASK_PERFORM_SEQUENCE(Local_481[iVar1 /*10*/], iVar0);
						TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					}
					else
					{
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_481[iVar1 /*10*/], 120f, 0, 0);
					}
				}
				else if (iVar1 == 2)
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_481[iVar1 /*10*/], 0, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_481[iVar1 /*10*/], 44, true);
					if (!VOLUME::_DOES_VOLUME_EXIST(Local_481[iVar1 /*10*/].f_8))
					{
						Local_481[iVar1 /*10*/].f_8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(1883.33f, -733.31f, 41.06f, 0f, 0f, 0f, 10f, 10f, 10f, "Guard Defensive Area 2");
					}
					__LIB_4__::func_291(Local_481[iVar1 /*10*/], Local_481[iVar1 /*10*/].f_8, 0, 0);
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_35, 1886.828f, -702.5042f, 40.05277f, 1886.787f, -733.9763f, 43.95276f, 30f, false, true, 0))
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar0);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, 1883.33f, -733.31f, 41.06f, Global_35, 3f, 1, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 120f, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(iVar0);
						TASK::TASK_PERFORM_SEQUENCE(Local_481[iVar1 /*10*/], iVar0);
						TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					}
					else
					{
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_481[iVar1 /*10*/], 120f, 0, 0);
					}
				}
				else if (iVar1 == 3)
				{
					if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_35, 1862.776f, -791.3483f, 37.52425f, 1918.61f, -787.1776f, 44.81467f, 30f, false, true, 0))
					{
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_481[iVar1 /*10*/], 0, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_481[iVar1 /*10*/], 44, true);
						if (!VOLUME::_DOES_VOLUME_EXIST(Local_481[iVar1 /*10*/].f_8))
						{
							Local_481[iVar1 /*10*/].f_8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(1873.85f, -764.155f, 41.45f, 0f, 0f, 0f, 10.84409f, 15.27828f, 3f, "Guard Defensive Area 3");
						}
						__LIB_4__::func_291(Local_481[iVar1 /*10*/], Local_481[iVar1 /*10*/].f_8, 0, 0);
						TASK::OPEN_SEQUENCE_TASK(&iVar0);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1872.72f, -768.93f, 41.45f, 3f, -1, 2f, 0, 40000f);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 120f, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(iVar0);
						TASK::TASK_PERFORM_SEQUENCE(Local_481[iVar1 /*10*/], iVar0);
						TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					}
					else
					{
						PED::SET_PED_COMBAT_MOVEMENT(Local_481[iVar1 /*10*/], 0);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_481[iVar1 /*10*/], 120f, 0, 0);
					}
				}
				else if (iVar1 == 4)
				{
					PED::SET_PED_COMBAT_MOVEMENT(Local_481[iVar1 /*10*/], 0);
					TASK::TASK_COMBAT_PED(Local_481[iVar1 /*10*/], Global_35, 0, 0);
				}
				else if (iVar1 == 5)
				{
					if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_35, 1862.776f, -791.3483f, 37.52425f, 1918.61f, -787.1776f, 44.81467f, 30f, false, true, 0))
					{
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_481[iVar1 /*10*/], 0, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_481[iVar1 /*10*/], 44, true);
						if (!VOLUME::_DOES_VOLUME_EXIST(Local_481[iVar1 /*10*/].f_8))
						{
							Local_481[iVar1 /*10*/].f_8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(1885.351f, -767.7977f, 41.47f, 0f, 0f, -11.48302f, 8.005465f, 12.69611f, 3f, "Guard Defensive Area 5");
						}
						__LIB_4__::func_291(Local_481[iVar1 /*10*/], Local_481[iVar1 /*10*/].f_8, 0, 0);
						TASK::OPEN_SEQUENCE_TASK(&iVar0);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1883.4f, -770.51f, 41.47f, 3f, -1, 2f, 0, 40000f);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 120f, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(iVar0);
						TASK::TASK_PERFORM_SEQUENCE(Local_481[iVar1 /*10*/], iVar0);
						TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					}
					else
					{
						PED::SET_PED_COMBAT_MOVEMENT(Local_481[iVar1 /*10*/], 0);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_481[iVar1 /*10*/], 120f, 0, 0);
					}
				}
				else
				{
					TASK::TASK_COMBAT_PED(Local_481[iVar1 /*10*/], Global_35, 0, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_481[iVar1 /*10*/], 0, true);
					PED::SET_PED_COMBAT_MOVEMENT(Local_481[iVar1 /*10*/], 1);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_481[iVar1 /*10*/], true);
				iLocal_570[iVar1] = 4;
			}
			iVar1++;
		}
		AUDIO::TRIGGER_MUSIC_EVENT(sLocal_260);
		__LIB_1__::func_683(&iLocal_268, 512);
	}
}

void func_361(var uParam0)
{
	if (bLocal_233)
	{
		func_820(uParam0);
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_14))
		{
			bLocal_233 = false;
		}
	}
	else if (__LIB_0__::func_27(iLocal_268, 4))
	{
		if (ENTITY::IS_ENTITY_AT_COORD(Global_35, vLocal_202, 100f, 100f, 100f, false, true, 0))
		{
			if (func_821(uParam0))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_176))
				{
					iLocal_176 = OBJECT::CREATE_OBJECT(joaat("P_CHAIR_CRATE02X"), 1383.39f, -1336.831f, 77.1408f, true, true, false, false, true);
					ENTITY::SET_ENTITY_ROTATION(iLocal_176, 0f, 0f, 275.416f, 2, true);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_177))
				{
					iLocal_177 = OBJECT::CREATE_OBJECT(joaat("P_CS_BAGANDERS01X"), 1380.84f, -1338.23f, 77.01f, true, true, false, false, true);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_14))
				{
					iLocal_14 = __LIB_12__::func_885(uParam0, joaat("CS_CREOLEDOCTOR"), 1381.01f, -1337.47f, 77.03f, 0, 1, 1, 0, 1, 1, 1, 1, 0);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_14))
				{
					PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_14, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_14, true);
					PED::SET_PED_CAN_BE_TARGETTED(iLocal_14, false);
					WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_14, true, true);
					TASK::TASK_LOOK_AT_ENTITY(iLocal_14, Global_35, -1, 0, 51, 0);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_14, joaat("REL_CIVMALE"));
					PED::SET_PED_CONFIG_FLAG(iLocal_14, 2, true);
					__LIB_12__::func_875(uParam0, iLocal_14, "CRL_CREOLE_D", 0);
					__LIB_12__::func_997(uParam0, func_61(4), func_61(5), 4, 5, 0);
					bLocal_233 = true;
				}
				else
				{
					return;
				}
			}
		}
		else if (!bLocal_228)
		{
			if (!ENTITY::IS_ENTITY_AT_COORD(Global_35, vLocal_196, 150f, 150f, 150f, false, true, 0))
			{
				if (func_822() == 0)
				{
					__LIB_12__::func_997(uParam0, func_61(3), func_61(4), 3, 4, 0);
					if (__LIB_12__::func_645(uParam0) != 3)
					{
						__LIB_12__::func_937(uParam0, 3);
					}
					bLocal_228 = true;
				}
			}
		}
	}
}

void func_362(var uParam0)
{
	switch (iLocal_569)
	{
		case 0:
			if (__LIB_0__::func_27(iLocal_268, 256))
			{
				if (!ENTITY::IS_ENTITY_AT_COORD(Global_35, vLocal_196, 100f, 100f, 100f, false, true, 0))
				{
					__LIB_12__::func_867(uParam0, joaat("G_M_M_UNICRIMINALS_01"), 2);
					iLocal_569 = 1;
				}
			}
			break;
		case 1:
			if (func_823(uParam0))
			{
				STREAMING::REQUEST_COLLISION_AT_COORD(vLocal_205[0 /*3*/]);
				iLocal_569 = 2;
			}
			break;
		case 2:
			func_824(uParam0);
			func_825();
			break;
	}
}

void func_363()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_542[iVar0 /*5*/]))
		{
			if ((MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_542[iVar0 /*5*/], true, false), 10f, true) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_542[iVar0 /*5*/], true, false), 10f, false)) || __LIB_3__::func_528(Local_542[iVar0 /*5*/], Global_35))
			{
				if (!__LIB_0__::func_163(Local_542[iVar0 /*5*/], 518218985))
				{
					PHYSICS::_0x0348469DAA17576C(Local_542[iVar0 /*5*/]);
					TASK::CLEAR_PED_TASKS(Local_542[iVar0 /*5*/], true, false);
					TASK::TASK_SMART_FLEE_PED(Local_542[iVar0 /*5*/], Global_35, 200f, -1, 0, 2f, 0);
					__LIB_2__::func_788(&(Local_542[iVar0 /*5*/]), 1, 1, 1);
				}
			}
		}
		iVar0++;
	}
}

bool func_364()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_481[iVar0 /*10*/]))
		{
			if ((((MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_481[iVar0 /*10*/], true, false), 20f, true) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_481[iVar0 /*10*/], Global_35, 1, 1)) || PED::_IS_PED_LASSOED(Local_481[iVar0 /*10*/])) || ENTITY::IS_ENTITY_AT_ENTITY(Local_481[iVar0 /*10*/], Global_35, 7.5f, 7.5f, 7.5f, false, true, 0)) || __LIB_0__::func_27(iLocal_268, 256))
			{
				return true;
			}
			if (ENTITY::IS_ENTITY_AT_ENTITY(Global_35, Local_481[iVar0 /*10*/], 30f, 30f, 30f, false, true, 0) && __LIB_13__::func_95(Local_481[iVar0 /*10*/], 0, &uLocal_145, &uLocal_173, 0, 0))
			{
				return true;
			}
		}
		else
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_365(var uParam0)
{
	if (!bLocal_255 && __LIB_0__::func_27(iLocal_268, 512))
	{
		if (!__LIB_0__::func_75(&uLocal_289))
		{
			__LIB_1__::func_148(&uLocal_289);
		}
		else if (__LIB_3__::func_135(&uLocal_289) > 2000)
		{
			if ((__LIB_0__::func_266(Global_35, vLocal_199, 90f, 1, 1) && !__LIB_5__::func_463()) && !PED::IS_PED_SHOOTING(Global_35))
			{
				if (__LIB_0__::func_27(iLocal_268, 128))
				{
					bLocal_255 = __LIB_13__::func_123(uParam0, "RCRLE_COMBAT1_", 0, 0);
					__LIB_0__::func_37(&uLocal_289);
				}
				else
				{
					bLocal_255 = __LIB_13__::func_123(uParam0, "RCRLE_COMBAT2_", 0, 0);
					__LIB_0__::func_37(&uLocal_289);
				}
			}
		}
	}
	else if (!__LIB_5__::func_463() && !bLocal_257)
	{
		if (!PED::IS_PED_DEAD_OR_DYING(Local_481[0 /*10*/], true))
		{
			__LIB_12__::func_875(uParam0, Local_481[0 /*10*/], "CRL_ENEMY", 0);
			__LIB_12__::func_876(uParam0, "RCRLE_WTCMBT", 0);
		}
		bLocal_257 = true;
	}
}

void func_366(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_481[iVar0 /*10*/]))
		{
			if (iLocal_570[iVar0] != 5)
			{
				if (iLocal_569 >= 2)
				{
					if (PED::IS_PED_IN_VEHICLE(Global_35, iLocal_174, false) && !ENTITY::IS_ENTITY_AT_COORD(Global_35, vLocal_196, 100f, 100f, 100f, false, true, 0))
					{
						if (PED::IS_PED_ON_MOUNT(Local_481[iVar0 /*10*/]))
						{
							TASK::CLEAR_PED_TASKS(Local_481[iVar0 /*10*/], true, false);
							PED::REMOVE_PED_DEFENSIVE_AREA(Local_481[iVar0 /*10*/], false);
							TASK::TASK_COMBAT_PED(Local_481[iVar0 /*10*/], Global_35, 0, 0);
							iLocal_570[iVar0] = 5;
						}
						else if (!ENTITY::DOES_ENTITY_EXIST(Local_481[iVar0 /*10*/].f_1))
						{
							Local_481[iVar0 /*10*/].f_1 = __LIB_13__::func_168(Local_481[iVar0 /*10*/]);
						}
						else
						{
							PED::_SET_PED_ON_MOUNT(Local_481[iVar0 /*10*/], Local_481[iVar0 /*10*/].f_1, -1, true);
						}
					}
				}
			}
			switch (iLocal_570[iVar0])
			{
				case 0:
					if (!bLocal_226)
					{
						PED::REQUEST_PED_VISIBILITY_TRACKING(Local_481[iVar0 /*10*/]);
						if (__LIB_0__::func_48(Local_481[iVar0 /*10*/], Global_35, 30f, 1))
						{
							if (((TASK::IS_PED_SPRINTING(Global_35) || TASK::IS_PED_RUNNING(Global_35)) || __LIB_0__::func_396(Global_35)) || __LIB_1__::func_472(Local_481[iVar0 /*10*/], 30f, 13f, -1082130432 /* Float: -1f */, 65f))
							{
								iLocal_270 = iVar0;
								fLocal_218 = __LIB_0__::func_665(Global_35, Local_481[iVar0 /*10*/], 1, 1);
								bLocal_226 = true;
								__LIB_12__::func_875(uParam0, Local_481[iVar0 /*10*/], "CRL_ENEMY", 0);
								TASK::CLEAR_PED_TASKS(Local_481[iVar0 /*10*/], true, false);
								WEAPON::SET_CURRENT_PED_WEAPON(Local_481[iVar0 /*10*/], WEAPON::GET_BEST_PED_WEAPON(Local_481[iVar0 /*10*/], false, false), true, 0, false, false);
								TASK::TASK_AIM_GUN_AT_ENTITY(Local_481[iVar0 /*10*/], Global_35, -1, false, 1);
								if (!MAP::DOES_BLIP_EXIST(Local_481[iVar0 /*10*/].f_6))
								{
									Local_481[iVar0 /*10*/].f_6 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_481[iVar0 /*10*/]);
									MAP::_BLIP_SET_MODIFIER(Local_481[iVar0 /*10*/].f_6, -1034486097);
								}
								CAM::SET_GAMEPLAY_ENTITY_HINT(Local_481[iVar0 /*10*/], 0f, 0f, 0f, true, 1000, 1500, 1500, 0);
								if (iLocal_568 < 2)
								{
									if (iVar0 == 0)
									{
										if (__LIB_12__::func_876(uParam0, "CRL2_WARN1", 0))
										{
											iLocal_570[iVar0] = 1;
										}
									}
									else if (__LIB_5__::func_469(Local_481[iVar0 /*10*/], "HEADS_UP_HIDEOUT", joaat("SPEECH_PARAMS_ADD_BLIP_SHOUTED"), Global_35, 1, 0, 0, 1))
									{
										iLocal_570[iVar0] = 2;
									}
								}
								else
								{
									iLocal_570[iVar0] = 1;
								}
							}
						}
						else if (__LIB_0__::func_163(Local_481[iVar0 /*10*/], 923520851))
						{
							TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_481[iVar0 /*10*/], 1f);
						}
					}
					else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_35, 1886.828f, -702.5042f, 40.05277f, 1886.787f, -733.9763f, 43.95276f, 30f, false, true, 0))
					{
						if (iVar0 == 1)
						{
							if (!bLocal_236)
							{
								if (!__LIB_0__::func_163(Local_481[iVar0 /*10*/], 242628503))
								{
									TASK::CLEAR_PED_TASKS(Local_481[iVar0 /*10*/], true, false);
									WEAPON::SET_CURRENT_PED_WEAPON(Local_481[iVar0 /*10*/], WEAPON::GET_BEST_PED_WEAPON(Local_481[iVar0 /*10*/], false, false), true, 0, false, false);
									TASK::OPEN_SEQUENCE_TASK(&iVar1);
									TASK::TASK_LOOK_AT_ENTITY(0, Global_35, -1, 0, 51, 0);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1896.2f, -734.44f, 41.07f, 1f, -1, 0.25f, 0, __LIB_3__::func_731(1885.11f, -738.64f, 40.92f, Global_36));
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
									TASK::CLOSE_SEQUENCE_TASK(iVar1);
									TASK::TASK_PERFORM_SEQUENCE(Local_481[iVar0 /*10*/], iVar1);
									TASK::CLEAR_SEQUENCE_TASK(&iVar1);
									bLocal_236 = true;
								}
							}
						}
						else if (iVar0 == 2)
						{
							if (!bLocal_237)
							{
								if (!__LIB_0__::func_163(Local_481[iVar0 /*10*/], 713668775))
								{
									TASK::CLEAR_PED_TASKS(Local_481[iVar0 /*10*/], true, false);
									WEAPON::SET_CURRENT_PED_WEAPON(Local_481[iVar0 /*10*/], WEAPON::GET_BEST_PED_WEAPON(Local_481[iVar0 /*10*/], false, false), true, 0, false, false);
									TASK::OPEN_SEQUENCE_TASK(&iVar1);
									TASK::TASK_LOOK_AT_ENTITY(0, Global_35, -1, 0, 51, 0);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1885.82f, -736.88f, 40.93f, 1f, -1, 0.25f, 0, __LIB_3__::func_731(1885.11f, -738.64f, 40.92f, Global_36));
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
									TASK::CLOSE_SEQUENCE_TASK(iVar1);
									TASK::TASK_PERFORM_SEQUENCE(Local_481[iVar0 /*10*/], iVar1);
									TASK::CLEAR_SEQUENCE_TASK(&iVar1);
									bLocal_237 = true;
								}
							}
						}
					}
					break;
				case 1:
					if (__LIB_0__::func_665(Local_481[iVar0 /*10*/], Global_35, 1, 1) > (fLocal_218 + 5f))
					{
						__LIB_0__::func_37(&uLocal_274);
						TASK::CLEAR_PED_TASKS(Local_481[iVar0 /*10*/], true, false);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_481[iVar0 /*10*/], Global_35, -1, -1f, -1f, -1f);
						bLocal_226 = false;
						iLocal_570[iVar0] = 3;
					}
					else if (!__LIB_0__::func_75(&uLocal_274))
					{
						__LIB_1__::func_283(&uLocal_274, 0);
					}
					else if (iLocal_476 != 0 && iLocal_476 != 1)
					{
						if (__LIB_0__::func_265(&uLocal_274) >= 10f || __LIB_0__::func_665(Local_481[iVar0 /*10*/], Global_35, 1, 1) < 15f)
						{
							if (iVar0 == 0)
							{
								__LIB_12__::func_876(uParam0, "CRL2_WARN2", 0);
							}
							else
							{
								__LIB_5__::func_469(Local_481[iVar0 /*10*/], "HEADS_UP_HIDEOUT", joaat("SPEECH_PARAMS_ADD_BLIP_SHOUTED"), Global_35, 1, 0, 0, 1);
							}
							__LIB_0__::func_37(&uLocal_274);
							iLocal_568 = 3;
							func_359(uParam0);
							iLocal_570[iVar0] = 2;
						}
					}
					break;
				case 2:
					if (__LIB_0__::func_665(Local_481[iVar0 /*10*/], Global_35, 1, 1) > (fLocal_218 + 5f))
					{
						__LIB_0__::func_37(&uLocal_274);
						TASK::CLEAR_PED_TASKS(Local_481[iVar0 /*10*/], true, false);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_481[iVar0 /*10*/], Global_35, -1, -1f, -1f, -1f);
						bLocal_226 = false;
						iLocal_570[iVar0] = 3;
					}
					else if (!__LIB_0__::func_75(&uLocal_274))
					{
						__LIB_1__::func_283(&uLocal_274, 0);
					}
					else if (__LIB_0__::func_265(&uLocal_274) >= 15f || __LIB_0__::func_665(Local_481[iVar0 /*10*/], Global_35, 1, 1) < (fLocal_218 - 25f))
					{
						if (!__LIB_5__::func_463())
						{
							if (iVar0 == 0)
							{
								__LIB_12__::func_876(uParam0, "CRL_ATTACK", 0);
							}
							else
							{
								__LIB_5__::func_469(Local_481[iVar0 /*10*/], "CALLOUT_JUST_KILL_EM_MALE", joaat("SPEECH_PARAMS_ADD_BLIP_SHOUTED"), Global_35, 1, 0, 0, 1);
							}
							func_360(uParam0);
							bLocal_247 = true;
						}
					}
					break;
				case 3:
					if (__LIB_0__::func_665(Local_481[iVar0 /*10*/], Global_35, 1, 1) < fLocal_218)
					{
						if (!__LIB_0__::func_75(&uLocal_274))
						{
							__LIB_1__::func_283(&uLocal_274, 0);
						}
						else if (__LIB_0__::func_265(&uLocal_274) >= 6f && !__LIB_5__::func_463())
						{
							if (__LIB_12__::func_876(uParam0, "CRL_ATTACK", 0))
							{
								func_360(uParam0);
							}
						}
					}
					else if (__LIB_0__::func_75(&uLocal_274))
					{
						__LIB_0__::func_37(&uLocal_274);
					}
					break;
				case 4:
					if (!ENTITY::IS_ENTITY_AT_ENTITY(Local_481[iVar0 /*10*/], Global_35, 200f, 200f, 200f, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(Global_35, vLocal_202, 50f, 50f, 50f, false, true, 0))
					{
						TASK::CLEAR_PED_TASKS(Local_481[iVar0 /*10*/], true, false);
						__LIB_0__::func_325(&(Local_481[iVar0 /*10*/].f_6));
						__LIB_2__::func_788(&(Local_481[iVar0 /*10*/]), 1, 0, 1);
					}
					else
					{
						func_831(uParam0);
					}
					break;
				case 5:
					if (!ENTITY::IS_ENTITY_AT_ENTITY(Local_481[iVar0 /*10*/], Global_35, 250f, 250f, 250f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_35, 1482.315f, -1445.654f, 45.517f, 1219.472f, -1211.852f, 120.8546f, 216.5f, false, true, 0))
					{
						TASK::CLEAR_PED_TASKS(Local_481[iVar0 /*10*/], true, false);
						TASK::TASK_SMART_FLEE_COORD(Local_481[iVar0 /*10*/], vLocal_202, 500f, -1, false, 1077936128);
						__LIB_0__::func_325(&(Local_481[iVar0 /*10*/].f_6));
						__LIB_2__::func_788(&(Local_481[iVar0 /*10*/]), 1, 0, 1);
						__LIB_2__::func_788(&(Local_481[iVar0 /*10*/].f_1), 1, 0, 1);
					}
					else if (!__LIB_0__::func_163(Local_481[iVar0 /*10*/], 780511057))
					{
						TASK::CLEAR_PED_TASKS(Local_481[iVar0 /*10*/], true, false);
						TASK::TASK_COMBAT_PED(Local_481[iVar0 /*10*/], Global_35, 0, 0);
					}
					break;
				case 6:
					break;
			}
		}
		iVar0++;
	}
	if (func_832() == 0)
	{
		if (!bLocal_227)
		{
			__LIB_12__::func_997(uParam0, func_61(2), func_61(3), 2, 3, 0);
			bLocal_227 = true;
			if (__LIB_12__::func_645(uParam0) != 2)
			{
				__LIB_12__::func_937(uParam0, 2);
			}
			AUDIO::TRIGGER_MUSIC_EVENT(sLocal_262);
		}
	}
}

void func_367(var uParam0)
{
	if (__LIB_0__::func_27(iLocal_268, 128))
	{
		if (!__LIB_0__::func_27(iLocal_268, 8))
		{
			if (__LIB_0__::func_27(iLocal_268, 4))
			{
				if (__LIB_0__::func_665(Global_35, iLocal_174, 1, 1) > 50f)
				{
					__LIB_12__::func_883(uParam0, "CRL2_RET1", 1, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					__LIB_1__::func_683(&iLocal_268, 8);
				}
			}
			else if (__LIB_0__::func_27(iLocal_268, 131072))
			{
				if (__LIB_0__::func_665(Global_35, iLocal_174, 1, 1) > 100f)
				{
					__LIB_12__::func_883(uParam0, "CRL2_RET1", 1, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					__LIB_1__::func_683(&iLocal_268, 8);
				}
			}
			else if (__LIB_0__::func_665(Global_35, iLocal_174, 1, 1) < 30f)
			{
				__LIB_1__::func_683(&iLocal_268, 131072);
			}
		}
	}
}

void func_368(var uParam0)
{
	if (!MAP::DOES_BLIP_EXIST(iLocal_263))
	{
		if (__LIB_0__::func_27(iLocal_268, 128))
		{
			if (!__LIB_5__::func_463())
			{
				__LIB_13__::func_89(uParam0, "CRL2_OBJ_WAG", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				iLocal_263 = __LIB_8__::func_778(408396114, iLocal_174, 1);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_263, "CREOLE_BLIP_2");
			}
		}
		else if (!__LIB_5__::func_463())
		{
			iLocal_263 = __LIB_8__::func_777(-308585968, vLocal_196, 30f, 1);
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_263, "CREOLE_BLIP_2");
			__LIB_12__::func_883(uParam0, "CRL2_OBJ_FIN", 1, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
		}
	}
	else if (!__LIB_1__::func_325())
	{
		if (__LIB_0__::func_27(iLocal_268, 128))
		{
			if (!__LIB_0__::func_27(iLocal_268, 2))
			{
				__LIB_12__::func_883(uParam0, "CRL2_OBJ_WAG", 1, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_1__::func_683(&iLocal_268, 2);
			}
		}
	}
}

bool func_369(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_174))
	{
		if (PED::IS_PED_IN_VEHICLE(Global_35, iLocal_174, false))
		{
			__LIB_0__::func_325(&iLocal_263);
			__LIB_1__::func_532(Global_1347702[uParam0->f_174 /*49*/].f_15, 1);
			return true;
		}
		else if (!__LIB_0__::func_27(iLocal_268, 128))
		{
			if (__LIB_2__::func_215(Global_35, iLocal_174, 0, 30f, 0))
			{
				__LIB_0__::func_325(&iLocal_263);
				if (__LIB_0__::func_27(iLocal_268, 512))
				{
					if (func_832() > 1)
					{
						__LIB_12__::func_875(uParam0, Local_481[func_835() /*10*/], "CRL_ENEMY", 0);
						__LIB_12__::func_876(uParam0, "CRL_WAGON", 0);
					}
					else if (func_832() == 1)
					{
						__LIB_12__::func_875(uParam0, Local_481[func_835() /*10*/], "CRL_ENEMY", 0);
						__LIB_12__::func_876(uParam0, "CRL_WAGONSOLO", 0);
					}
				}
				__LIB_1__::func_683(&iLocal_268, 128);
			}
		}
	}
	return false;
}

void func_372(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = -1;
	iVar1 = -1;
	if (((!bLocal_251 && bLocal_253) && bLocal_254) && VEHICLE::_0xA19447D83294E29F(iLocal_174, &iVar0, &iVar1))
	{
		if (iVar1 == 1 && !__LIB_5__::func_463())
		{
			__LIB_13__::func_123(uParam0, "RCRLE_LHORSE_", 0, 0);
			bLocal_251 = true;
		}
	}
}

bool func_373(var uParam0)
{
	bool bVar0;
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_174))
	{
		if (!__LIB_2__::func_343(Global_35, iLocal_174, 0))
		{
			bVar0 = true;
		}
		else
		{
			bVar0 = false;
		}
		if (__LIB_13__::func_172(&(uParam0->f_753), uParam0->f_2581, 0, bVar0))
		{
			return true;
		}
		if (__LIB_12__::func_670(&(uParam0->f_753)))
		{
			if (CAM::_0xA24C1D341C6E0D53(1, 0, 0) || __LIB_4__::func_511())
			{
				return true;
			}
			if (ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(uParam0->f_753.f_1418[0 /*10*/].f_8) || ANIMSCENE::_0xF94692EB9DC15D74(uParam0->f_753.f_1418[0 /*10*/].f_8, 0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_374(var uParam0)
{
	if (!AUDIO::_0xFE5C6177064BD390(1))
	{
		if (!MAP::DOES_BLIP_EXIST(iLocal_263))
		{
			__LIB_13__::func_89(uParam0, "CRL2_OBJ_RID", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			__LIB_1__::func_683(&iLocal_268, 4);
			iLocal_263 = MAP::_BLIP_ADD_FOR_COORD(joaat("BLIP_STYLE_COMPANION"), vLocal_202);
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_263, "CREOLE_BLIP_3");
			MAP::_BLIP_SET_MODIFIER(iLocal_263, joaat("BLIP_MODIFIER_FRIENDLY_OBJECTIVE"));
			MAP::_BLIP_SET_MODIFIER(iLocal_263, -1878373110);
		}
		else if (!__LIB_1__::func_325())
		{
			if (!__LIB_0__::func_27(iLocal_268, 4))
			{
				if (PED::IS_PED_IN_VEHICLE(Global_35, iLocal_174, false))
				{
					if (ENTITY::GET_ENTITY_SPEED(iLocal_174) < 0.5f)
					{
						if (!__LIB_0__::func_75(&uLocal_277))
						{
							__LIB_1__::func_283(&uLocal_277, 0);
						}
						else if (__LIB_0__::func_265(&uLocal_277) > 10f)
						{
							__LIB_12__::func_883(uParam0, "CRL2_OBJ_RID", 1, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
						}
					}
					else
					{
						__LIB_0__::func_37(&uLocal_277);
					}
				}
			}
		}
	}
}

void func_375(var uParam0)
{
	if (PED::IS_PED_ON_SPECIFIC_VEHICLE(Global_35, iLocal_174))
	{
		if ((__LIB_0__::func_48(Global_35, iLocal_14, 50f, 1) && !bLocal_250) && !__LIB_5__::func_463())
		{
			__LIB_13__::func_123(uParam0, "RCRLE_APPRCH_", 0, 0);
			bLocal_250 = true;
		}
		__LIB_1__::func_694(Global_35, vLocal_202, 0, 15f, 10f, 5f, 2f, 1, 1, 1, 0);
	}
}

bool func_376()
{
	if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_35, 1374.364f, -1339.071f, 76.00644f, 1374.053f, -1328.003f, 78.96201f, 5.75f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_174, 1374.364f, -1339.071f, 76.00644f, 1374.053f, -1328.003f, 78.96201f, 10.75f, false, true, 0)) || (__LIB_0__::func_27(iLocal_268, 16) && ENTITY::GET_ENTITY_SPEED(iLocal_174) < 1f))
	{
		return true;
		__LIB_1__::func_683(&iLocal_268, 16);
	}
	return false;
}

void func_412(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
		iVar9 = func_863(iParam0, &uVar7, &iVar8);
		if (iVar9 != 176656832)
		{
			func_864(iVar9, uVar7, -469960592, iVar8, 1, 1, 0);
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
						func_343(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_343(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_343(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_343(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_343(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_343(joaat("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_343(joaat("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_343(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_343(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_343(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_343(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_343(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_343(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_343(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_343(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_343(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_343(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_343(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_343(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_343(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_343(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_343(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_343(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_343(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_343(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_874();
						func_875(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
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
						func_343(joaat("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
							func_412(Global_1347702[21 /*49*/].f_15, 0, 0, 0, 0);
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
							func_412(Global_1347702[82 /*49*/].f_15, 0, 0, 0, 0);
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
							func_412(Global_1347702[83 /*49*/].f_15, 0, 0, 0, 0);
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
						func_343(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_343(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
		func_908();
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
							func_343(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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

Vector3 func_416(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10)
{
	vector3 vVar0;
	vVar0 = { func_915(vParam0, iParam3, iParam4, iParam5, iParam6, 1, iParam7, bParam8, bParam9, bParam10, -1, 1103626240 /* Float: 25f */) };
	if (__LIB_0__::func_86(vVar0))
	{
		vVar0 = { func_915(vParam0, iParam3, iParam4, 0, 1, 1, iParam7, bParam8, 0, 0, -1, 1103626240 /* Float: 25f */) };
	}
	return vVar0;
}

void func_440(var uParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(iLocal_14) || __LIB_4__::func_257(iLocal_174))
	{
		return;
	}
	if (!PED::IS_PED_IN_VEHICLE(Global_35, iLocal_174, false))
	{
		if (PED::IS_PED_IN_VEHICLE(iLocal_14, iLocal_174, false))
		{
			if (!__LIB_0__::func_163(iLocal_14, -258271821))
			{
				TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_14, iLocal_174, 3f, 524423);
				PED::SET_PED_KEEP_TASK(iLocal_14, true);
			}
		}
		else if (!__LIB_0__::func_163(iLocal_14, -1794415470))
		{
			TASK::CLEAR_PED_TASKS(iLocal_14, true, false);
			__LIB_2__::func_596(iLocal_14, iLocal_174, -1, 1065353216 /* Float: 1f */, -1, 1);
		}
	}
	else
	{
		TASK::CLEAR_PED_TASKS(iLocal_14, true, false);
		TASK::TASK_STAND_STILL(iLocal_14, -1);
		if (!__LIB_0__::func_27(iLocal_268, 64))
		{
			if (__LIB_12__::func_876(uParam0, "CRL2_DOCT2", 0))
			{
				__LIB_1__::func_683(&iLocal_268, 64);
			}
		}
	}
}

void func_441(var uParam0)
{
	int iVar0;
	if (__LIB_0__::func_1(uParam0->f_172, 8))
	{
		__LIB_2__::func_788(&iLocal_65, 1, 0, 1);
		__LIB_2__::func_161(vLocal_196, 50f, 5);
		__LIB_1__::func_681(&iLocal_268, 512);
		PED::SET_PED_CONFIG_FLAG(Global_35, 337, false);
		iVar0 = 0;
		while (iVar0 < 2)
		{
			__LIB_2__::func_788(&(iLocal_73[iVar0]), 1, 0, 1);
			__LIB_2__::func_788(&(iLocal_76[iVar0]), 1, 0, 1);
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 6)
		{
			__LIB_2__::func_788(&(Local_481[iVar0 /*10*/]), 1, 0, 1);
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			__LIB_2__::func_788(&(Local_542[iVar0 /*5*/]), 1, 1, 1);
			iVar0++;
		}
		__LIB_0__::func_325(&iLocal_263);
		if (__LIB_12__::func_644(uParam0) == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_174))
			{
				if (PED::IS_PED_IN_VEHICLE(Global_35, iLocal_174, false))
				{
					AITRANSPORT::_0x8886D83A430537FD(Global_35, 0);
				}
				VEHICLE::DELETE_VEHICLE(&iLocal_174);
			}
		}
		else
		{
			__LIB_10__::func_284(&iLocal_174);
		}
		if (__LIB_0__::func_724(679442855))
		{
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(679442855, 0f, false);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(679442855, 1);
		}
		__LIB_0__::func_172(iLocal_296);
		__LIB_0__::func_172(iLocal_297);
	}
}

int func_493(int iParam0, int iParam1)
{
	var uVar0;
	return func_996(&uVar0, iParam0, iParam1);
}

bool func_525(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5)
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
	else if (__LIB_13__::func_95(*iParam0, 0, uParam1, uParam2, iParam3, 0))
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

bool func_620(int iParam0, int iParam1, char* sParam2)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_566[iParam0]))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_566[iParam0], true, false))
		{
			return true;
		}
	}
	else
	{
		iLocal_566[iParam0] = ANIMSCENE::_CREATE_ANIM_SCENE(func_1090(iParam0), iParam1, sParam2, false, true);
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_566[iParam0]))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(iLocal_566[iParam0]);
		}
	}
	return false;
}

bool func_621()
{
	char* sVar0;
	if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_566[0]) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_566[0], true, false)) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_566[0], false))
	{
		if (__LIB_0__::func_181())
		{
			sVar0 = "JOHN";
			ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_566[0], "b_PlayerArthur", false, false);
		}
		else
		{
			sVar0 = "ARTHUR";
			ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_566[0], "b_PlayerArthur", true, false);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_35) && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_566[0], sVar0, false)))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_566[0], sVar0, Global_35, 0);
		}
		if ((ENTITY::DOES_ENTITY_EXIST(iLocal_14) && ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iLocal_14)) && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_566[0], "creoledoctor", false)))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_566[0], "creoledoctor", iLocal_14, 0);
		}
		if ((ENTITY::DOES_ENTITY_EXIST(iLocal_176) && ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iLocal_176)) && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_566[0], "p_chair_crate02x", false)))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_566[0], "p_chair_crate02x", iLocal_176, 0);
		}
		if ((ENTITY::DOES_ENTITY_EXIST(iLocal_177) && ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iLocal_177)) && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_566[0], "p_cs_baganders01x", false)))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_566[0], "p_cs_baganders01x", iLocal_177, 0);
		}
		if (((ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_566[0], sVar0, false)) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_566[0], "creoledoctor", false))) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_566[0], "p_chair_crate02x", false))) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_566[0], "p_cs_baganders01x", false)))
		{
			ANIMSCENE::START_ANIM_SCENE(iLocal_566[0]);
			return true;
		}
	}
	else if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_566[0], false))
	{
		return true;
	}
	return false;
}

void func_622(var uParam0)
{
	if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_13, 2048) && MAP::DOES_BLIP_EXIST(Global_1347702[57 /*49*/].f_37))
	{
		__LIB_6__::func_736(&(Local_300[0 /*61*/]), &Local_362, 0, Global_1347702[57 /*49*/].f_37, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		__LIB_2__::func_602(&(Local_362[0 /*17*/]), "CREOLE1_GREET", " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
		bLocal_299 = true;
	}
}

int func_624(int iParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
		__LIB_11__::func_733(iParam0, iParam1, uParam3, fParam2, fVar8, sParam7);
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
		if (__LIB_4__::func_231(*iParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (__LIB_9__::func_838(iParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_624(iParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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
					__LIB_6__::func_742(iParam1, uParam3);
					if (__LIB_10__::func_481(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
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
					if (__LIB_6__::func_834(*iParam0, iParam1, uParam3))
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
					__LIB_10__::func_481(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					__LIB_8__::func_963(iParam0, __LIB_3__::func_598(iParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
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
					else if (!(MISC::IS_BIT_SET(*iParam1, 13) || __LIB_3__::func_109(iParam1)))
					{
					}
					else if (!__LIB_10__::func_482(iParam1))
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
				if (__LIB_6__::func_743(iParam0, iParam1, fParam4, bVar6))
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
					__LIB_10__::func_481(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
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
				if (__LIB_6__::func_743(iParam0, iParam1, fParam4, bVar6))
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
			__LIB_6__::func_835(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

void func_625()
{
	__LIB_1__::func_480(&iLocal_14);
	__LIB_2__::func_480(&Local_362, 0, 0, 1, 0);
}

bool func_631()
{
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_175))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("G_M_M_UNICRIMINALS_01")))
	{
		return false;
	}
	return true;
}

bool func_633(var uParam0)
{
	if (iLocal_267 == 4)
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_542[iLocal_267 /*5*/]))
	{
		Local_542[iLocal_267 /*5*/] = __LIB_12__::func_885(uParam0, iLocal_480, Local_542[iLocal_267 /*5*/].f_1, Local_542[iLocal_267 /*5*/].f_4, 1, 1, 0, 1, 1, 1, 1, 0);
	}
	if (ENTITY::IS_ENTITY_DEAD(Local_542[iLocal_267 /*5*/]))
	{
		return false;
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_542[iLocal_267 /*5*/], true);
	PED::SET_PED_CAN_BE_TARGETTED(Local_542[iLocal_267 /*5*/], false);
	PED::SET_PED_KEEP_TASK(Local_542[iLocal_267 /*5*/], true);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(Local_542[iLocal_267 /*5*/], 48, true);
	iLocal_267++;
	return false;
}

bool func_634(var uParam0)
{
	if (iLocal_266 == 6)
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_481[iLocal_266 /*10*/]))
	{
		Local_481[iLocal_266 /*10*/] = __LIB_12__::func_885(uParam0, joaat("G_M_M_UNICRIMINALS_01"), Local_481[iLocal_266 /*10*/].f_2, Local_481[iLocal_266 /*10*/].f_5, 1, 1, 0, 1, 1, 0, 1, 0);
		PED::_SET_PED_BODY_COMPONENT(Local_481[iLocal_266 /*10*/], Local_481[iLocal_266 /*10*/].f_9);
		PED::_UPDATE_PED_VARIATION(Local_481[iLocal_266 /*10*/], false, true, true, true, false);
	}
	if (ENTITY::IS_ENTITY_DEAD(Local_481[iLocal_266 /*10*/]))
	{
		return false;
	}
	WEAPON::REMOVE_ALL_PED_WEAPONS(Local_481[iLocal_266 /*10*/], true, true);
	__LIB_4__::func_7(Local_481[iLocal_266 /*10*/], joaat("WEAPON_MELEE_KNIFE"), 1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
	__LIB_1__::func_766(Local_481[iLocal_266 /*10*/], Local_481[iLocal_266 /*10*/].f_7, 1, 1, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_481[iLocal_266 /*10*/], true);
	PED::SET_PED_CONFIG_FLAG(Local_481[iLocal_266 /*10*/], 246, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_481[iLocal_266 /*10*/], 117, true);
	PED::SET_PED_CONFIG_FLAG(Local_481[iLocal_266 /*10*/], 6, true);
	PED::SET_PED_CONFIG_FLAG(Local_481[iLocal_266 /*10*/], 143, true);
	if (iLocal_266 == 1)
	{
		__LIB_1__::func_473(Local_481[iLocal_266 /*10*/], joaat("WORLD_HUMAN_DRINKING"), 0, 0, 0, -1082130432 /* Float: -1f */);
		PED::_0xF1C03A5352243A30(Local_481[iLocal_266 /*10*/]);
	}
	else if (iLocal_266 == 2)
	{
		__LIB_1__::func_473(Local_481[iLocal_266 /*10*/], joaat("WORLD_HUMAN_SMOKE"), 0, 0, 0, -1082130432 /* Float: -1f */);
		PED::_0xF1C03A5352243A30(Local_481[iLocal_266 /*10*/]);
	}
	else if (iLocal_266 == 3)
	{
		__LIB_1__::func_473(Local_481[iLocal_266 /*10*/], joaat("WORLD_HUMAN_SMOKE"), 0, 0, 0, -1082130432 /* Float: -1f */);
		PED::_0xF1C03A5352243A30(Local_481[iLocal_266 /*10*/]);
	}
	else if (iLocal_266 == 4)
	{
		TASK::CLEAR_PED_TASKS(Local_481[iLocal_266 /*10*/], true, false);
		__LIB_1__::func_473(Local_481[iLocal_266 /*10*/], joaat("WORLD_HUMAN_STAND_WAITING"), 0, 0, 0, -1082130432 /* Float: -1f */);
		PED::SET_PED_COMBAT_MOVEMENT(Local_481[iLocal_266 /*10*/], 0);
	}
	else if (iLocal_266 == 5)
	{
		__LIB_1__::func_473(Local_481[iLocal_266 /*10*/], joaat("WORLD_HUMAN_SMOKE"), 0, 0, 0, -1082130432 /* Float: -1f */);
		PED::_0xF1C03A5352243A30(Local_481[iLocal_266 /*10*/]);
	}
	iLocal_266++;
	return false;
}

void func_639(var uParam0)
{
	if (__LIB_13__::func_23(uParam0, "RCRLE_S1_INT"))
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_566[0]))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_566[0]);
		}
	}
	else if (__LIB_13__::func_23(uParam0, "rcrle_s2_ext"))
	{
		if (PED::IS_PED_IN_VEHICLE(Global_35, iLocal_174, false))
		{
			AITRANSPORT::_0x8886D83A430537FD(Global_35, 32);
		}
		if (!bLocal_225)
		{
			WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
			MISC::CLEAR_AREA(1383.971f, -1334.718f, 77.11246f, 7f, 16936);
			bLocal_225 = true;
		}
		func_1159();
	}
}

void func_671(var uParam0)
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
		func_1194(&(uParam0->f_404), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_12__::func_706(uParam0, 0f, 0f, 0f);
		func_1196(uParam0);
		func_1197(uParam0);
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

int func_808(var uParam0, vector3 vParam1, float fParam4, var uParam5)
{
	int iVar0;
	if (!__LIB_11__::func_608() && !__LIB_13__::func_107())
	{
		__LIB_0__::func_37(uParam0);
		return 0;
	}
	iVar0 = __LIB_13__::func_175(vParam1, uParam5, 1097859072 /* Float: 15f */);
	if (iVar0 == 6)
	{
		if (fParam4 > 0f)
		{
			if (!__LIB_0__::func_75(uParam0))
			{
				__LIB_1__::func_283(uParam0, 0);
			}
			else if (__LIB_0__::func_265(uParam0) > fParam4)
			{
				return 6;
			}
			return 7;
		}
	}
	__LIB_0__::func_37(uParam0);
	return iVar0;
}

bool func_815(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	if (iParam5 < 0 || iParam5 >= *uParam0)
	{
		iParam5 = (*uParam0 - 1);
	}
	iVar0 = iParam4;
	while (iVar0 <= iParam5)
	{
		if (__LIB_13__::func_95((*uParam0)[iVar0], iParam1, uParam2, uParam3, 0, 0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_816(var uParam0)
{
	int iVar0;
	if (__LIB_0__::func_266(Global_35, vLocal_199, 90f, 1, 1) || __LIB_0__::func_27(iLocal_268, 512))
	{
		return true;
	}
	else if (!bLocal_252)
	{
		iLocal_568 = 3;
		func_359(uParam0);
		bLocal_252 = true;
	}
	if (bLocal_252)
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_298))
		{
			iLocal_298 = VOLUME::_CREATE_VOLUME_SPHERE(vLocal_199, 0f, 0f, 0f, 50f, 50f, 10f);
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (iVar0 == 1 || iVar0 == 4)
			{
				iVar0++;
			}
			if ((ENTITY::DOES_ENTITY_EXIST(Local_481[iVar0 /*10*/]) && !__LIB_0__::func_163(Local_481[iVar0 /*10*/], 1910705116)) && !PED::IS_PED_IN_COVER(Local_481[iVar0 /*10*/], false, true))
			{
				PED::_0xFC3DB99C8144CD81(Local_481[iVar0 /*10*/], iLocal_298, 0, false, 0);
				TASK::TASK_SEEK_COVER_FROM_PED(Local_481[iVar0 /*10*/], Global_35, -1, 0, 0, 1);
			}
			iVar0++;
		}
	}
	return false;
}

void func_820(var uParam0)
{
	switch (iLocal_269)
	{
		case 0:
			if (ENTITY::IS_ENTITY_AT_COORD(Global_35, vLocal_202, 30f, 30f, 30f, false, true, 0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_14))
				{
					iLocal_269 = 1;
				}
			}
			break;
		case 1:
			if (!__LIB_0__::func_27(iLocal_268, 65536))
			{
				if (__LIB_12__::func_876(uParam0, "CRL2_DOCT4", 0))
				{
					AUDIO::TRIGGER_MUSIC_EVENT(sLocal_258);
					__LIB_1__::func_683(&iLocal_268, 65536);
					iLocal_269 = 2;
				}
			}
			break;
		case 2:
			break;
	}
}

bool func_821(var uParam0)
{
	if (!bLocal_241)
	{
		__LIB_12__::func_867(uParam0, joaat("CS_CREOLEDOCTOR"), 6);
		__LIB_12__::func_867(uParam0, joaat("P_CHAIR_CRATE02X"), 6);
		__LIB_12__::func_867(uParam0, joaat("P_CS_BAGANDERS01X"), 6);
		bLocal_241 = true;
		return false;
	}
	else
	{
		if (!STREAMING::HAS_MODEL_LOADED(joaat("CS_CREOLEDOCTOR")))
		{
			return false;
		}
		if (!STREAMING::HAS_MODEL_LOADED(joaat("P_CHAIR_CRATE02X")))
		{
			return false;
		}
		if (!STREAMING::HAS_MODEL_LOADED(joaat("P_CS_BAGANDERS01X")))
		{
			return false;
		}
		return true;
	}
	return true;
}

int func_822()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_73[iVar0]))
		{
			if (!PED::_IS_PED_HOGTIED(iLocal_73[iVar0]))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

bool func_823(var uParam0)
{
	int iVar0;
	if (iLocal_265 >= 2)
	{
		return true;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("G_M_M_UNICRIMINALS_01")))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_73[iLocal_265]))
	{
		iLocal_73[iLocal_265] = __LIB_12__::func_885(uParam0, joaat("G_M_M_UNICRIMINALS_01"), vLocal_205[iLocal_265 /*3*/], fLocal_219[iLocal_265], 1, 1, 0, 1, 1, 0, 1, 0);
		PED::_SET_PED_BODY_COMPONENT(iLocal_73[iLocal_265], iLocal_83[iLocal_265]);
		PED::_UPDATE_PED_VARIATION(iLocal_73[iLocal_265], false, true, true, true, false);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_76[iLocal_265]))
	{
		iLocal_76[iLocal_265] = __LIB_13__::func_200(uParam0, iLocal_73[iLocal_265]);
	}
	if (ENTITY::IS_ENTITY_DEAD(iLocal_73[iLocal_265]))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iLocal_76[iLocal_265]))
	{
		return false;
	}
	WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_73[iLocal_265], true, true);
	if (iLocal_265 == 0)
	{
		__LIB_1__::func_766(iLocal_73[iLocal_265], joaat("WEAPON_REVOLVER_CATTLEMAN"), 1, 1, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
	}
	else
	{
		__LIB_1__::func_766(iLocal_73[iLocal_265], joaat("WEAPON_REPEATER_CARBINE"), 1, 1, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
	}
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_73[iLocal_265], 2, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_73[iLocal_265], 58, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_73[iLocal_265], 5, true);
	PED::SET_PED_COMBAT_RANGE(iLocal_73[iLocal_265], 1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_73[iLocal_265], true);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_73[iLocal_265], false);
	PED::SET_PED_CONFIG_FLAG(iLocal_73[iLocal_265], 6, true);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1779.83f, -449.18f, 44.4f, 1f, -1, 4f, 1, 40000f);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1832.83f, -452.42f, 41.82f, 1f, -1, 4f, 1, 40000f);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1855.79f, -486.55f, 41.51f, 1f, -1, 4f, 1, 40000f);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1847.85f, -541.33f, 42.27f, 1f, -1, 4f, 1, 40000f);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1831.7f, -597.28f, 41.09f, 1f, -1, 4f, 1, 40000f);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1852.79f, -643.53f, 41.14f, 1f, -1, 4f, 1, 40000f);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1882.37f, -686.86f, 40.62f, 1.5f, -1, 4f, 1, 40000f);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1886.5f, -732.37f, 40.97f, 1.5f, -1, 4f, 0, 40000f);
	TASK::TASK_WANDER_IN_AREA(0, 1886.92f, -745.41f, 40.84f, 30f, 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */, 0);
	TASK::CLOSE_SEQUENCE_TASK(iVar0);
	TASK::TASK_PERFORM_SEQUENCE(iLocal_73[iLocal_265], iVar0);
	TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	iLocal_265++;
	return false;
}

void func_824(var uParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_73[iVar0]))
		{
			if (iLocal_229[iVar0] == 1)
			{
				if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_73[iVar0], Global_35, 200f, 200f, 200f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_35, 1482.315f, -1445.654f, 45.517f, 1219.472f, -1211.852f, 120.8546f, 216.5f, false, true, 0))
				{
					if (!__LIB_0__::func_27(iLocal_268, 32768))
					{
						__LIB_12__::func_875(uParam0, iLocal_73[iVar0], "CRL_RIDER_1", 0);
						if (__LIB_12__::func_876(uParam0, "CRL_RIDER2", 0))
						{
							__LIB_1__::func_683(&iLocal_268, 32768);
						}
					}
					TASK::CLEAR_PED_TASKS(iLocal_73[iVar0], true, false);
					TASK::TASK_SMART_FLEE_COORD(iLocal_73[iVar0], vLocal_202, 500f, -1, false, 1077936128);
					__LIB_0__::func_325(&(iLocal_186[iVar0]));
					__LIB_2__::func_788(&(iLocal_73[iVar0]), 1, 0, 1);
					__LIB_2__::func_788(&(iLocal_76[iVar0]), 1, 0, 1);
				}
				else if (__LIB_0__::func_163(iLocal_73[iVar0], 1056466932))
				{
					if ((!TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iLocal_73[iVar0]) && !__LIB_0__::func_163(iLocal_73[iVar0], 2104565373)) && __LIB_0__::func_396(iLocal_73[iVar0]))
					{
						TASK::CLEAR_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iLocal_73[iVar0]);
						TASK::TASK_DRIVE_BY(iLocal_73[iVar0], Global_35, 0, 0f, 0f, 0f, 200f, 75, true, -753768974);
					}
					if (ENTITY::IS_ENTITY_DEAD(iLocal_76[iVar0]) || !PED::IS_PED_ON_MOUNT(iLocal_73[iVar0]))
					{
						TASK::CLEAR_PED_TASKS(iLocal_73[iVar0], true, false);
					}
				}
				else if (!ENTITY::IS_ENTITY_DEAD(iLocal_76[iVar0]) && !PED::IS_PED_FLEEING(iLocal_76[iVar0]))
				{
					if (!PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iLocal_73[iVar0], true) && !__LIB_0__::func_163(iLocal_73[iVar0], 1868526510))
					{
						TASK::TASK_MOUNT_ANIMAL(iLocal_73[iVar0], iLocal_76[iVar0], -1, -1, 1073741824 /* Float: 2f */, 9, 0, 0);
					}
					else if (PED::IS_PED_ON_MOUNT(iLocal_73[iVar0]) && !PED::IS_PED_BEING_JACKED(iLocal_73[iVar0]))
					{
						TASK::CLEAR_PED_TASKS(iLocal_73[iVar0], true, false);
						if (iVar0 == 0)
						{
							vVar2 = { 4f, 10f, 0f };
						}
						else
						{
							vVar2 = { -4f, 10f, 0f };
						}
						TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(iLocal_73[iVar0], iLocal_174, vVar2, 2.5f, -1, 2f, 1, 1, 0, 1, 1);
					}
				}
				else if (!__LIB_0__::func_163(iLocal_73[iVar0], 780511057))
				{
					TASK::TASK_COMBAT_PED(iLocal_73[iVar0], Global_35, 0, 0);
				}
			}
			else if ((ENTITY::IS_ENTITY_AT_ENTITY(iLocal_73[iVar0], Global_35, 70f, 70f, 70f, false, true, 0) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_73[iVar0], true, false), 20f, true)) || (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_73[iVar0], Global_35, 150f, 150f, 150f, false, true, 0) && func_1391()))
			{
				if (!__LIB_0__::func_27(iLocal_268, 2048))
				{
					__LIB_12__::func_875(uParam0, iLocal_73[iVar0], "CRL_RIDER_1", 0);
					if (__LIB_12__::func_876(uParam0, "CRL_RIDER1", 0))
					{
						__LIB_1__::func_683(&iLocal_268, 2048);
					}
					__LIB_1__::func_148(&uLocal_286);
				}
				TASK::CLEAR_PED_TASKS(iLocal_73[iVar0], true, false);
				if (iVar0 == 0)
				{
					vVar5 = { 4f, 10f, 0f };
				}
				else
				{
					vVar5 = { -4f, 10f, 0f };
				}
				TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(iLocal_73[iVar0], iLocal_174, vVar5, 2.5f, -1, 2f, 1, 1, 0, 1, 1);
				iLocal_229[iVar0] = 1;
			}
			else if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_73[iVar0], Global_35, 350f, 350f, 350f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_35, 1482.315f, -1445.654f, 45.517f, 1219.472f, -1211.852f, 120.8546f, 216.5f, false, true, 0))
			{
				TASK::CLEAR_PED_TASKS(iLocal_73[iVar0], true, false);
				TASK::TASK_SMART_FLEE_COORD(iLocal_73[iVar0], vLocal_202, 500f, -1, false, 1077936128);
				__LIB_0__::func_325(&(iLocal_186[iVar0]));
				__LIB_2__::func_788(&(iLocal_73[iVar0]), 1, 0, 1);
				__LIB_2__::func_788(&(iLocal_76[iVar0]), 1, 0, 1);
			}
		}
		else
		{
			iVar1++;
		}
		iVar0++;
	}
	if (__LIB_3__::func_135(&uLocal_286) > 3500 && !__LIB_0__::func_27(iLocal_268, 262144))
	{
		if (!__LIB_5__::func_463())
		{
			__LIB_13__::func_123(uParam0, "RCRLE_RATTACK_", 0, 0);
			__LIB_1__::func_683(&iLocal_268, 262144);
			__LIB_0__::func_37(&uLocal_286);
		}
	}
	if ((iVar1 >= 2 && !bLocal_249) && !__LIB_5__::func_463())
	{
		__LIB_13__::func_123(uParam0, "RCRLE_RDEAD_", 0, 0);
		bLocal_249 = true;
	}
}

void func_825()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iLocal_229[iVar0] == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_73[iVar0]))
			{
				if (ENTITY::IS_ENTITY_DEAD(iLocal_73[iVar0]) || PED::_IS_PED_HOGTIED(iLocal_73[iVar0]))
				{
					__LIB_0__::func_325(&(iLocal_186[iVar0]));
				}
				else if (!MAP::DOES_BLIP_EXIST(iLocal_186[iVar0]))
				{
					iLocal_186[iVar0] = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), iLocal_73[iVar0]);
					MAP::_BLIP_SET_MODIFIER(iLocal_186[iVar0], -1034486097);
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_481[iVar0 /*10*/]))
		{
			if (ENTITY::IS_ENTITY_DEAD(Local_481[iVar0 /*10*/]) || PED::_IS_PED_HOGTIED(Local_481[iVar0 /*10*/]))
			{
				__LIB_0__::func_325(&(Local_481[iVar0 /*10*/].f_6));
			}
			else if (!MAP::DOES_BLIP_EXIST(Local_481[iVar0 /*10*/].f_6))
			{
				if (iVar0 == 1)
				{
					if (__LIB_0__::func_27(iLocal_268, 1024))
					{
						Local_481[iVar0 /*10*/].f_6 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_481[iVar0 /*10*/]);
						MAP::_BLIP_SET_MODIFIER(Local_481[iVar0 /*10*/].f_6, -1034486097);
					}
				}
				else if (iVar0 == 4)
				{
					if (__LIB_0__::func_27(iLocal_268, 4096))
					{
						Local_481[iVar0 /*10*/].f_6 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_481[iVar0 /*10*/]);
						MAP::_BLIP_SET_MODIFIER(Local_481[iVar0 /*10*/].f_6, -1034486097);
					}
				}
				else
				{
					Local_481[iVar0 /*10*/].f_6 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_481[iVar0 /*10*/]);
					MAP::_BLIP_SET_MODIFIER(Local_481[iVar0 /*10*/].f_6, -1034486097);
				}
			}
		}
		iVar0++;
	}
}

void func_831(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_481[iVar0 /*10*/]))
		{
			if (!PED::IS_PED_IN_VEHICLE(Global_35, iLocal_174, false) && !bLocal_238)
			{
				if (iVar0 == 0)
				{
					if (!ENTITY::IS_ENTITY_AT_COORD(Local_481[iVar0 /*10*/], 1893.15f, -732.88f, 41.05f, 0.75f, 0.75f, 2.5f, false, true, 0))
					{
						if (!__LIB_0__::func_163(Local_481[iVar0 /*10*/], -1758697641))
						{
							TASK::CLEAR_PED_TASKS(Local_481[iVar0 /*10*/], true, false);
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(Local_481[iVar0 /*10*/], 1893.15f, -732.88f, 41.05f, Global_35, 1.5f, 1, 0.75f, 2f, 1, 512, 0, joaat("FIRING_PATTERN_BURST_FIRE"), -1, 0);
						}
					}
					else if (!__LIB_0__::func_163(Local_481[iVar0 /*10*/], 780511057))
					{
						TASK::CLEAR_PED_TASKS(Local_481[iVar0 /*10*/], true, false);
						PED::SET_PED_COMBAT_MOVEMENT(Local_481[iVar0 /*10*/], 1);
						TASK::TASK_COMBAT_PED(Local_481[iVar0 /*10*/], Global_35, 0, 0);
					}
				}
				else if (iVar0 == 1)
				{
					if (!__LIB_0__::func_27(iLocal_268, 16384))
					{
						if (!__LIB_0__::func_163(Local_481[iVar0 /*10*/], 242628503))
						{
							__LIB_5__::func_602(Local_481[iVar0 /*10*/], joaat("WEAPON_THROWN_MOLOTOV"));
							WEAPON::SET_CURRENT_PED_WEAPON(Local_481[iVar0 /*10*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), false, 0, false, false);
							TASK::OPEN_SEQUENCE_TASK(&iVar1);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1892.38f, -744.88f, 40.95f, 3f, -1, 0.25f, 0, 40000f);
							TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, 1891.59f, -744.91f, 40.94f, 10000, 1, 1f, 0, 0, 0, 0, 0, 0);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 120f, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(iVar1);
							TASK::TASK_PERFORM_SEQUENCE(Local_481[iVar0 /*10*/], iVar1);
							TASK::CLEAR_SEQUENCE_TASK(&iVar1);
							__LIB_1__::func_683(&iLocal_268, 16384);
						}
					}
				}
				else if (iVar0 == 4)
				{
					if (!__LIB_0__::func_27(iLocal_268, 4096))
					{
						if ((ENTITY::IS_ENTITY_IN_AREA(Global_35, 1874.699f, -733.5064f, 45.04655f, 1888.627f, -741.213f, 40.84764f, false, true, 0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_481[iVar0 /*10*/], Global_35, 1, 1)) || func_832() <= 3)
						{
							PED::SET_PED_COMBAT_MOVEMENT(Local_481[iVar0 /*10*/], 2);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_481[iVar0 /*10*/], 0, false);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_481[iVar0 /*10*/], 50, true);
							TASK::CLEAR_PED_TASKS(Local_481[iVar0 /*10*/], true, false);
							TASK::OPEN_SEQUENCE_TASK(&iVar2);
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, 1882.6f, -735.89f, 41.06f, Global_35, 1.5f, 1, 1f, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
							TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(iVar2);
							TASK::TASK_PERFORM_SEQUENCE(Local_481[iVar0 /*10*/], iVar2);
							__LIB_1__::func_683(&iLocal_268, 4096);
							if (!VOLUME::_DOES_VOLUME_EXIST(Local_481[iVar0 /*10*/].f_8))
							{
								Local_481[iVar0 /*10*/].f_8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(1886.56f, -739.81f, 40.85f, 0f, 0f, 0f, 30f, 30f, 30f, "Guard Defensive Area");
							}
							__LIB_4__::func_291(Local_481[iVar0 /*10*/], Local_481[iVar0 /*10*/].f_8, 0, 0);
							if (!MAP::DOES_BLIP_EXIST(Local_481[iVar0 /*10*/].f_6))
							{
								Local_481[iVar0 /*10*/].f_6 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_481[iVar0 /*10*/]);
								MAP::_BLIP_SET_MODIFIER(Local_481[iVar0 /*10*/].f_6, -1034486097);
							}
						}
					}
				}
			}
			else
			{
				bLocal_238 = true;
				if (iVar0 == 0)
				{
					if (!ENTITY::IS_ENTITY_AT_COORD(Local_481[iVar0 /*10*/], 1879.4f, -739.98f, 45.2f, 0.75f, 0.75f, 2.5f, false, true, 0))
					{
						if (!__LIB_0__::func_163(Local_481[iVar0 /*10*/], -1758697641))
						{
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(Local_481[iVar0 /*10*/], 1879.4f, -739.98f, 45.2f, Global_35, 1f, 1, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
						}
					}
					else if (!__LIB_0__::func_163(Local_481[iVar0 /*10*/], -1758697641))
					{
						if (!__LIB_0__::func_163(Local_481[iVar0 /*10*/], 780511057))
						{
							TASK::CLEAR_PED_TASKS(Local_481[iVar0 /*10*/], true, false);
							PED::REMOVE_PED_DEFENSIVE_AREA(Local_481[iVar0 /*10*/], false);
							PED::SET_PED_COMBAT_MOVEMENT(Local_481[iVar0 /*10*/], 0);
							TASK::TASK_COMBAT_PED(Local_481[iVar0 /*10*/], Global_35, 0, 0);
						}
					}
				}
				else if (iVar0 == 1)
				{
					if (!__LIB_0__::func_163(Local_481[iVar0 /*10*/], 780511057))
					{
						if (!__LIB_0__::func_163(Local_481[iVar0 /*10*/], 780511057))
						{
							if (!ENTITY::IS_ENTITY_AT_COORD(Local_481[iVar0 /*10*/], 1892.61f, -751.62f, 40.72f, 2f, 2f, 2f, false, true, 0))
							{
								if (!__LIB_0__::func_163(Local_481[iVar0 /*10*/], -1758697641))
								{
									TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(Local_481[iVar0 /*10*/], 1892.61f, -751.62f, 40.72f, Global_35, 2f, 1, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
								}
							}
							else if (!__LIB_0__::func_163(Local_481[iVar0 /*10*/], -1758697641))
							{
								if (!__LIB_0__::func_163(Local_481[iVar0 /*10*/], 780511057))
								{
									TASK::CLEAR_PED_TASKS(Local_481[iVar0 /*10*/], true, false);
									PED::REMOVE_PED_DEFENSIVE_AREA(Local_481[iVar0 /*10*/], false);
									PED::SET_PED_COMBAT_MOVEMENT(Local_481[iVar0 /*10*/], 2);
									TASK::TASK_COMBAT_PED(Local_481[iVar0 /*10*/], Global_35, 0, 0);
								}
							}
						}
					}
				}
				else if (iVar0 == 2)
				{
					if (!__LIB_0__::func_163(Local_481[iVar0 /*10*/], 780511057))
					{
						if (!ENTITY::IS_ENTITY_AT_COORD(Local_481[iVar0 /*10*/], 1891.85f, -767.04f, 41.26f, 2f, 2f, 2f, false, true, 0))
						{
							if (!__LIB_0__::func_163(Local_481[iVar0 /*10*/], -1758697641))
							{
								TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(Local_481[iVar0 /*10*/], 1891.85f, -767.04f, 41.26f, Global_35, 1f, 1, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
							}
						}
						else if (!__LIB_0__::func_163(Local_481[iVar0 /*10*/], -1758697641))
						{
							if (!__LIB_0__::func_163(Local_481[iVar0 /*10*/], 780511057))
							{
								TASK::CLEAR_PED_TASKS(Local_481[iVar0 /*10*/], true, false);
								PED::REMOVE_PED_DEFENSIVE_AREA(Local_481[iVar0 /*10*/], false);
								PED::SET_PED_COMBAT_MOVEMENT(Local_481[iVar0 /*10*/], 2);
								TASK::TASK_COMBAT_PED(Local_481[iVar0 /*10*/], Global_35, 0, 0);
							}
						}
					}
				}
				else if (iVar0 == 3)
				{
					if (!__LIB_0__::func_163(Local_481[iVar0 /*10*/], 780511057))
					{
						if (!ENTITY::IS_ENTITY_AT_COORD(Local_481[iVar0 /*10*/], 1885.26f, -753.44f, 40.82f, 2f, 2f, 2f, false, true, 0))
						{
							if (!__LIB_0__::func_163(Local_481[iVar0 /*10*/], -1758697641))
							{
								TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(Local_481[iVar0 /*10*/], 1885.26f, -753.44f, 40.82f, Global_35, 2f, 1, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
							}
						}
						else if (!__LIB_0__::func_163(Local_481[iVar0 /*10*/], -1758697641))
						{
							if (!__LIB_0__::func_163(Local_481[iVar0 /*10*/], 780511057))
							{
								TASK::CLEAR_PED_TASKS(Local_481[iVar0 /*10*/], true, false);
								PED::REMOVE_PED_DEFENSIVE_AREA(Local_481[iVar0 /*10*/], false);
								PED::SET_PED_COMBAT_MOVEMENT(Local_481[iVar0 /*10*/], 2);
								TASK::TASK_COMBAT_PED(Local_481[iVar0 /*10*/], Global_35, 0, 0);
							}
						}
					}
				}
				else if (iVar0 == 4)
				{
					if (!__LIB_0__::func_163(Local_481[iVar0 /*10*/], 780511057))
					{
						if (!ENTITY::IS_ENTITY_AT_COORD(Local_481[iVar0 /*10*/], 1887.92f, -742.27f, 40.85f, 3f, 3f, 3f, false, true, 0))
						{
							if (!__LIB_0__::func_163(Local_481[iVar0 /*10*/], -1758697641))
							{
								PED::REMOVE_PED_DEFENSIVE_AREA(Local_481[iVar0 /*10*/], false);
								TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(Local_481[iVar0 /*10*/], 1887.92f, -742.27f, 40.85f, Global_35, 1f, 1, 3f, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
							}
						}
						else if (!__LIB_0__::func_163(Local_481[iVar0 /*10*/], -1758697641))
						{
							if (!__LIB_0__::func_163(Local_481[iVar0 /*10*/], 780511057))
							{
								TASK::CLEAR_PED_TASKS(Local_481[iVar0 /*10*/], true, false);
								PED::REMOVE_PED_DEFENSIVE_AREA(Local_481[iVar0 /*10*/], false);
								PED::SET_PED_COMBAT_MOVEMENT(Local_481[iVar0 /*10*/], 2);
								TASK::TASK_COMBAT_PED(Local_481[iVar0 /*10*/], Global_35, 0, 0);
							}
						}
					}
				}
				if (!MAP::DOES_BLIP_EXIST(Local_481[iVar0 /*10*/].f_6))
				{
					Local_481[iVar0 /*10*/].f_6 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_481[iVar0 /*10*/]);
					MAP::_BLIP_SET_MODIFIER(Local_481[iVar0 /*10*/].f_6, -1034486097);
				}
			}
		}
		iVar0++;
	}
}

int func_832()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_481[iVar0 /*10*/]))
		{
			if (!PED::_IS_PED_HOGTIED(Local_481[iVar0 /*10*/]))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_835()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_481[iVar0 /*10*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0;
}

int func_863(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	*uParam1 = joaat("CSTP_PERSIST_ACROSS_STATES");
	*iParam2 = -1;
	iVar0 = __LIB_0__::func_700(iParam0);
	switch (iVar0)
	{
		case 1:
			iVar1 = __LIB_0__::func_909(iParam0);
			switch (iVar1)
			{
				case 0:
					return joaat("CSTAG_FLOW_WNT1_POST");
				case 1:
					return joaat("CSTAG_FLOW_WNT2_POST");
				case 2:
					return joaat("CSTAG_FLOW_DST1_POST");
				case 3:
					return joaat("CSTAG_FLOW_WNT4_POST");
				case 4:
					*uParam1 = -2060316038;
					return joaat("CSTAG_FLOW_MUD1_POST");
				case 5:
					return joaat("CSTAG_FLOW_MUD2_POST");
				case 6:
					return joaat("CSTAG_FLOW_MUD3_POST");
				case 10:
					return joaat("CSTAG_FLOW_REV1_POST");
				case 13:
					return joaat("CSTAG_FLOW_SEN1_POST");
				case 15:
					return joaat("CSTAG_FLOW_HNT1_POST");
				case 8:
					return joaat("CSTAG_FLOW_MRY1_POST");
				case 25:
					return joaat("CSTAG_FLOW_MUD6_POST");
				case 14:
					return joaat("CSTAG_FLOW_MUD4_POST");
				case 7:
					return joaat("CSTAG_FLOW_BOU1_POST");
				case 9:
					if (__LIB_0__::func_895(Global_1835011[9 /*74*/].f_1) == 0)
					{
						return joaat("CSTAG_FLOW_SAL1_SPLITUP_POST");
					}
					else
					{
						return joaat("CSTAG_FLOW_SAL1_POST");
					}
					break;
				case 11:
					return joaat("CSTAG_FLOW_UTP1_POST");
				case 12:
					return joaat("CSTAG_FLOW_UTP2_POST");
				case 16:
					return joaat("CSTAG_FLOW_FUD1_POST");
				case 17:
					return joaat("CSTAG_FLOW_GRY1_POST");
				case 53:
					return joaat("CSTAG_FLOW_CRN1_POST");
				case 18:
					return joaat("CSTAG_FLOW_BRT1_POST");
				case 19:
					return joaat("CSTAG_FLOW_GRY2_POST");
				case 20:
					return joaat("CSTAG_FLOW_BRT2_POST");
				case 22:
					return joaat("CSTAG_FLOW_TRE1_POST");
				case 23:
					return joaat("CSTAG_FLOW_DST3_POST");
				case 24:
					return joaat("CSTAG_FLOW_MUD5_POST");
				case 21:
					return joaat("CSTAG_FLOW_GRY3_POST");
				case 26:
					return joaat("CSTAG_FLOW_BRT3_POST");
				case 27:
					return joaat("CSTAG_FLOW_MOB1_POST");
				case 28:
					return joaat("CSTAG_FLOW_MOB2_POST");
				case 29:
					return joaat("CSTAG_FLOW_MOB3_POST");
				case 30:
					return joaat("CSTAG_FLOW_MOB4_POST");
				case 31:
					return joaat("CSTAG_FLOW_MOB5_POST");
				case 32:
					return joaat("CSTAG_FLOW_ODR4_POST");
				case 33:
					return joaat("CSTAG_FLOW_IND1_POST");
				case 34:
					return joaat("CSTAG_FLOW_IND3_POST");
				case 35:
					return joaat("CSTAG_FLOW_SUS1_POST");
				case 36:
					return joaat("CSTAG_FLOW_MRY3_POST");
				case 37:
					return joaat("CSTAG_FLOW_SDN1_POST");
				case 38:
					return joaat("CSTAG_FLOW_GUA1_POST");
				case 39:
					return joaat("CSTAG_FLOW_GUA2_POST");
				case 40:
					return joaat("CSTAG_FLOW_FUS1_POST");
				case 41:
					return joaat("CSTAG_FLOW_FUS2_POST");
				case 42:
					return joaat("CSTAG_FLOW_SMG2_POST");
				case 43:
					return joaat("CSTAG_FLOW_GUA3_POST");
				case 44:
					return joaat("CSTAG_FLOW_GNG1_POST");
				case 45:
					return joaat("CSTAG_FLOW_GNG2_POST");
				case 46:
					return joaat("CSTAG_FLOW_GNG3_POST");
				case 47:
					return joaat("CSTAG_FLOW_DST5_POST");
				case 48:
					return joaat("CSTAG_FLOW_NTV1_POST");
				case 49:
					return joaat("CSTAG_FLOW_NTV2_POST");
				case 50:
					return joaat("CSTAG_FLOW_NTS1_POST");
				case 51:
					return joaat("CSTAG_FLOW_NTS2_POST");
				case 52:
					return joaat("CSTAG_FLOW_NTS3_POST");
				case 54:
					return joaat("CSTAG_FLOW_TRN1_POST");
				case 55:
					return joaat("CSTAG_FLOW_TRN2_POST");
				case 56:
					return joaat("CSTAG_FLOW_TRN3_POST");
				case 57:
					return joaat("CSTAG_FLOW_TRN4_POST");
				case 58:
					return joaat("CSTAG_FLOW_NTV3_POST");
				case 59:
					return joaat("CSTAG_FLOW_FIN1_POST");
				case 60:
					return joaat("CSTAG_FLOW_MAR1_POST");
				case 61:
					return joaat("CSTAG_FLOW_MAR5_POST");
				case 62:
					return joaat("CSTAG_FLOW_MR52_POST");
				case 63:
					return joaat("CSTAG_FLOW_MR53_POST");
				case 64:
					return joaat("CSTAG_FLOW_LAR1_POST");
				case 65:
					return joaat("CSTAG_FLOW_MAR2_POST");
				case 66:
					return joaat("CSTAG_FLOW_MAR4_POST");
				case 67:
					return joaat("CSTAG_FLOW_AB21_POST");
				case 68:
					return joaat("CSTAG_FLOW_BE22_POST");
					return joaat("CSTAG_FLOW_SAD2_POST");
					return joaat("CSTAG_FLOW_SAD3_POST");
					return joaat("CSTAG_FLOW_SAD4_POST");
					return joaat("CSTAG_FLOW_SAD5_POST");
					return joaat("CSTAG_FLOW_MAR6_POST");
					return joaat("CSTAG_FLOW_MAR7_POST");
					return joaat("CSTAG_FLOW_MAR8_POST");
					return joaat("CSTAG_FLOW_FIN2_POST");
					Jump @1941; //curOff = 1190
					iVar2 = __LIB_0__::func_76(iParam0);
					switch (iVar2)
					{
						case 120:
							return joaat("CSTAG_FLOW_RPRSN_POST");
						case 0:
							return joaat("CSTAG_FLOW_RABI1_POST");
						case 63:
							return joaat("CSTAG_FLOW_RDST2_POST");
						case 97:
							return joaat("CSTAG_FLOW_RMARY1_POST");
						case 98:
							return joaat("CSTAG_FLOW_RMARY2_POST");
						case 94:
							return joaat("CSTAG_FLOW_RHMR0_POST");
						case 59:
							return joaat("CSTAG_FLOW_RDOWN1_POST");
						case 61:
							return joaat("CSTAG_FLOW_RDOWN2_POST");
						case 62:
							return joaat("CSTAG_FLOW_RDOWN3_POST");
						case 112:
							return joaat("CSTAG_FLOW_RMUD31_POST");
						case 113:
							return joaat("CSTAG_FLOW_RMUD32_POST");
						case 114:
							return joaat("CSTAG_FLOW_RMUD33_POST");
						case 66:
							*uParam1 = -2060316038;
							return joaat("CSTAG_FLOW_RDTC1_POST");
						case 76:
							return joaat("CSTAG_FLOW_RXCF1_POST");
						case 134:
							return joaat("CSTAG_FLOW_RSAD1_POST");
						case 3:
							return joaat("CSTAG_FLOW_RBNP10_POST");
						case 5:
							return joaat("CSTAG_FLOW_RBNP12_POST");
						case 21:
							return joaat("CSTAG_FLOW_RBRT0_POST");
						case 37:
							return joaat("CSTAG_FLOW_RCHRB_POST");
						case 138:
							return joaat("CSTAG_FLOW_RSTR1_POST");
						case 67:
							*uParam1 = -2060316038;
							return joaat("CSTAG_FLOW_RDTC2_POST");
						case 106:
							return joaat("CSTAG_FLOW_RMOB01_POST");
						case 107:
							return joaat("CSTAG_FLOW_RMOB02_POST");
						case 115:
							return joaat("CSTAG_FLOW_RNATV1_POST");
						case 116:
							return joaat("CSTAG_FLOW_RNATV2_POST");
						case 22:
							return joaat("CSTAG_FLOW_RCLDN1_POST");
						case 23:
							return joaat("CSTAG_FLOW_RCLDN2_POST");
						case 82:
							return joaat("CSTAG_FLOW_RGNG01_POST");
						case 68:
							*uParam1 = -2060316038;
							return joaat("CSTAG_FLOW_RDCH3_POST");
						case 140:
							return joaat("CSTAG_FLOW_RSTR31_POST");
						case 142:
							return joaat("CSTAG_FLOW_RSTR33_POST");
						case 58:
							return joaat("CSTAG_FLOW_RDOPN_POST");
						case 64:
							return joaat("CSTAG_FLOW_RDST61_POST");
						case 65:
							return joaat("CSTAG_FLOW_RDST62_POST");
						case 108:
							return joaat("CSTAG_FLOW_RMNR1_POST");
						case 8:
							return joaat("CSTAG_FLOW_RBCH11_POST");
						case 10:
							return joaat("CSTAG_FLOW_RBCH21_POST");
						case 2:
							return joaat("CSTAG_FLOW_RABI3_POST");
						case 96:
							return joaat("CSTAG_FLOW_RJCK2_POST");
						case 52:
							return joaat("CSTAG_FLOW_RCTAX2_POST");
						default:
							break;
					}
					Jump @1941; //curOff = 1793
					iVar3 = __LIB_0__::func_76(iParam0);
					switch (iVar3)
					{
						case joaat("HAI_FISHING_01"):
							return joaat("CSTAG_FLOW_CA_FS01_POST");
						case joaat("HAI_HOME_ROBBERY_01"):
							return joaat("CSTAG_FLOW_CA_HR01_POST");
						case joaat("HAI_COACH_ROBBERY_01"):
							return joaat("CSTAG_FLOW_CA_CR02_POST");
						case joaat("HAI_COACH_ROBBERY_02"):
							return joaat("CSTAG_FLOW_CA_CR03_POST");
						case joaat("HAI_FISHING_02"):
							return joaat("CSTAG_FLOW_CA_FS02_POST");
						case joaat("HAI_HUNTING_06"):
							return joaat("CSTAG_FLOW_CA_HT06_POST");
						case joaat("HAI_BANK_ROBBERY_01"):
							return joaat("CSTAG_FLOW_CA_BR01_POST");
						case joaat("HAI_COACH_ROBBERY_03"):
							return joaat("CSTAG_FLOW_CA_CR01_POST");
						case joaat("HAI_COACH_ROBBERY_04"):
							return joaat("CSTAG_FLOW_CA_CR04_POST");
						default:
							break;
					}
					return 176656832;
				}
int func_864(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (Global_40.f_4283.f_6[iVar0 /*5*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar2 = __LIB_0__::func_910(iParam0);
	iVar3 = __LIB_0__::func_911(iParam0);
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (Global_40.f_4283.f_6[iVar0 /*5*/] == 176656832)
		{
			Global_40.f_4283.f_6[iVar0 /*5*/] = iParam0;
			Global_40.f_4283.f_6[iVar0 /*5*/].f_2 = uParam1;
			Global_40.f_4283.f_6[iVar0 /*5*/].f_3 = iVar3;
			if (iParam3 > 0)
			{
				iVar1 = __LIB_0__::func_23();
				__LIB_1__::func_446(&iVar1, 0, 0, iParam3, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			Global_40.f_4283.f_6[iVar0 /*5*/].f_1 = iVar1;
			Global_40.f_4283.f_6[iVar0 /*5*/].f_4 = iVar2;
			__LIB_1__::func_28(iParam0, 1);
			if (__LIB_0__::func_344(iVar2))
			{
				iVar4 = 0;
				while (iVar4 < 60)
				{
					if (Global_40.f_4283.f_6[iVar4 /*5*/].f_4 == iVar2 && Global_40.f_4283.f_6[iVar4 /*5*/] != iParam0)
					{
						__LIB_1__::func_152(&(Global_40.f_4283.f_6[iVar4 /*5*/]), 1, 0);
					}
					iVar4++;
				}
			}
			if (bParam5)
			{
				if (bParam6)
				{
					__LIB_0__::func_345(1, iParam0);
				}
				else
				{
					__LIB_0__::func_346(1, iParam0);
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_874()
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

void func_875(int iParam0)
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

void func_908()
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
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_1490(&uVar4, &iVar1, &iVar2, &iVar3)))
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

Vector3 func_915(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
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
		bVar10 = __LIB_1__::func_699();
		if (VOLUME::_DOES_VOLUME_EXIST(bVar10))
		{
		}
	}
	if (!__LIB_1__::func_120(Global_1310720.f_21))
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
			bVar11 = func_1506(iVar0, iVar1);
			bVar3 = BUILTIN::VDIST(vParam0, vVar7);
			if (((((bVar3 < fVar2 && bVar3 > bParam10) && !__LIB_0__::func_86(vVar7)) && func_1507(iVar0, bParam8, iParam12)) && !__LIB_0__::func_955(iVar0)) || bVar11)
			{
				if (__LIB_4__::func_718(vVar7, iVar0, iVar1, iParam5, iParam6, bVar14, bVar10, bParam9, bParam13))
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

int func_996(var uParam0, int iParam1, int iParam2)
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
		return func_996(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

char* func_1090(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script@rcm@crle_s1@leadin@int@ilo";
	}
	return "";
}

void func_1159()
{
	if (!bLocal_240)
	{
		if (!PED::IS_PED_DEAD_OR_DYING(iLocal_79, true))
		{
			TASK::CLEAR_PED_TASKS(iLocal_79, true, false);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_79, 1323.016f, -1373.839f, 78.7649f, 333.9609f, true, false, true);
			TASK::TASK_STAND_STILL(iLocal_79, -1);
		}
		bLocal_240 = true;
	}
}

void func_1194(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
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
		func_1693();
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

void func_1196(var uParam0)
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
			func_1700(iVar1, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_1700(iVar3, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_1197(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if ((__LIB_0__::func_84(uParam0, 268435456) && !__LIB_0__::func_86(__LIB_12__::func_720(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { __LIB_12__::func_720(uParam0) };
			func_1700(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

bool func_1391()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_481[iVar0 /*10*/]))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(Local_481[iVar0 /*10*/], Global_35, 50f, 50f, 50f, false, true, 0) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 10f, false))
			{
				return true;
			}
		}
		iVar0++;
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
			func_1943(0);
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
	func_1943(1);
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
	func_343(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
			func_1946(0);
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
	func_1946(1);
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
			func_1946(0);
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
	func_1946(1);
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
				func_343(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_343(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
	__LIB_12__::func_934(iParam0, iParam1);
	return 1;
}

int func_1490(var uParam0, int iParam1, int iParam2, int iParam3)
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
	iVar11 = (func_1974(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_952(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_343(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	__LIB_1__::func_432(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

int func_1506(int iParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;
	int iVar6;
	if (LAW::_GET_BOUNTY_FOR_PLAYER(PLAYER::PLAYER_ID()) <= 0)
	{
		return 0;
	}
	if (Global_1310720.f_21 == -1)
	{
		return 0;
	}
	if (Global_1310720.f_23 >= 3)
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_560(Global_1310720.f_21, 2);
	if (iVar0 == -1)
	{
		return 0;
	}
	__LIB_0__::func_720(15, &Var1);
	Var1.f_2 = -1999103282;
	Var1.f_3 = iParam0;
	Var1.f_4 = iParam1;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var1.f_1), &Var1))
	{
		Var1.f_2 = 383290544;
		DATAFILE::_DATAFILE_GET_HASH(&iVar6, &Var1);
		if (func_1984(iVar0) == iVar6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_1507(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	iVar0 = func_1985(iParam0);
	if (__LIB_0__::func_898(373691918) && Global_1310720.f_12)
	{
		return iVar0 == 4;
	}
	if (iParam2 != -1)
	{
		return iVar0 == iParam2;
	}
	return (bParam1 || iVar0 == -1);
}

void func_1693()
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
	iVar0 = func_2085(6291456, 0);
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

void func_1700(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_1700(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_1700(iVar2, vParam1, fParam4, iParam5, iParam6);
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

void func_1943(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (bParam0)
	{
		func_343(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_343(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_343(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_2168(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_875(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_1463(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_2172(Var0);
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

void func_1946(bool bParam0)
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
		func_343(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_343(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_343(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_343(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_343(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_343(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_343(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_343(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_343(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_343(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_343(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
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

int func_1974(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
							iVar49 = (iVar49 + func_1974(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1974(iVar63, -915411861, 1, 0, 0));
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

int func_1984(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			return joaat("SHOP_BLK_GENERAL_STORE");
		case 8:
			return joaat("SHOP_BLK_GUNSMITH");
		case 9:
			return joaat("SHOP_BLK_BARBER");
		case 17:
			return joaat("SHOP_BLK_TAILOR");
		case 13:
			return joaat("SHOP_BLK_HORSE_SHOP");
		case 14:
			return joaat("SHOP_BLK_POST_OFFICE");
		case 15:
			return joaat("SHOP_BLK_TRAIN_STATION");
		case 108:
			return joaat("SHOP_BLK_HORSE_FENCE_MP");
		case 12:
			return joaat("SHOP_BLK_PHOTO_STUDIO");
		case 16:
			return joaat("SHOP_BLK_NEWSPAPER_BOY");
		case 106:
			return joaat("SHOP_BLK_BOUNTYHUNTING_MP_RETURN");
		case 107:
			return joaat("SHOP_BLK_COACH");
		case 6:
			return joaat("SHOP_BLK_BANK");
		case 10:
			return joaat("SHOP_BLK_BUTCHER");
		case 11:
			return joaat("SHOP_BLK_BARTENDER");
		case 19:
			return joaat("SHOP_EMR_GENERAL_STORE");
		case 20:
			return joaat("SHOP_EMR_POST_OFFICE");
		case 21:
			return joaat("SHOP_EMR_TRAIN_STATION");
		case 18:
			return joaat("SHOP_EMR_FENCE");
		case 105:
			return joaat("SHOP_EMR_HORSE_FENCE_MP");
		case 22:
			return joaat("SHOP_LAG_BAIT_STORE");
		case 118:
			return joaat("SHOP_LAG_HORSE_FENCE_MP");
		case 39:
			return joaat("SHOP_SDN_DOCTOR");
		case 42:
			return joaat("SHOP_SDN_GENERAL_STORE");
		case 41:
			return joaat("SHOP_SDN_FENCE");
		case 43:
			return joaat("SHOP_SDN_GUNSMITH");
		case 36:
			return joaat("SHOP_SDN_BANK");
		case 37:
			return joaat("SHOP_SDN_BARBER");
		case 38:
			return joaat("SHOP_SDN_BUTCHER");
		case 40:
			return joaat("SHOP_SDN_EXOTIC");
		case 44:
			return joaat("SHOP_SDN_HORSE_SHOP");
		case 45:
			return joaat("SHOP_SDN_POST_OFFICE");
		case 46:
			return joaat("SHOP_SDN_TRAIN_STATION");
		case 47:
			return joaat("SHOP_SDN_TAILOR");
		case 55:
			return joaat("SHOP_SDN_TRAPPER");
		case 111:
			return joaat("SHOP_SDN_HORSE_FENCE_MP");
		case 48:
			return joaat("SHOP_SDN_MARKET");
		case 49:
			return joaat("SHOP_SDN_FRENCH_MARKET01");
		case 50:
			return -1673339528;
			return joaat("SHOP_SDN_BARTENDER_SLUM");
			return joaat("SHOP_SDN_PHOTO_STUDIO");
			return joaat("SHOP_SDN_NEWSPAPER_BOY");
			return joaat("SHOP_SDN_BOUNTYHUNTING_MP_RETURN");
			return joaat("SHOP_SDN_COACH");
			return joaat("SHOP_SDN_BARTENDER");
			return joaat("SHOP_RGG_POST_OFFICE");
			return joaat("SHOP_RGG_TRAIN_STATION");
			return joaat("SHOP_RHO_GENERAL_STORE");
			return joaat("SHOP_RHO_FENCE");
			return joaat("SHOP_RHO_GUNSMITH");
			return joaat("SHOP_RHO_POST_OFFICE");
			return joaat("SHOP_RHO_BUTCHER");
			return joaat("SHOP_RHO_TRAIN_STATION");
			return joaat("SHOP_RHO_HORSE_FENCE_MP");
			return joaat("SHOP_RHO_NEWSPAPER_BOY");
			return joaat("SHOP_RHO_BOUNTYHUNTING_MP_RETURN");
			return joaat("SHOP_RHO_BANK");
			return joaat("SHOP_RHO_BARTENDER");
			return joaat("SHOP_STR_BUTCHER");
			return joaat("SHOP_STR_GENERAL_STORE");
			return joaat("SHOP_STR_WELCOME_CENTER");
			return joaat("SHOP_STR_HORSE_SHOP");
			return joaat("SHOP_STR_POST_OFFICE");
			return joaat("SHOP_STR_HORSE_FENCE_MP");
			return joaat("SHOP_STR_NEWSPAPER_BOY");
			return joaat("SHOP_STR_BOUNTYHUNTING_MP_RETURN");
			return joaat("SHOP_STR_BARTENDER");
			return joaat("SHOP_VAL_DOCTOR");
			return joaat("SHOP_VAL_GENERAL_STORE");
			return joaat("SHOP_VAL_GUNSMITH");
			return joaat("SHOP_VAL_BARBER");
			return joaat("SHOP_VAL_POST_OFFICE");
			return joaat("SHOP_VAL_HORSE_SHOP");
			return joaat("SHOP_VAL_BUTCHER");
			return joaat("SHOP_VAL_TRAIN_STATION");
			return joaat("SHOP_VAL_HORSE_FENCE_MP");
			return joaat("SHOP_VAL_BARTENDER_KEANE");
			return joaat("SHOP_VAL_BARTENDER_SLUM");
			return joaat("SHOP_VAL_NEWSPAPER_BOY");
			return joaat("SHOP_VAL_HOTEL");
			return joaat("SHOP_VAL_BOUNTYHUNTING_MP_RETURN");
			return joaat("SHOP_VAL_COACH");
			return joaat("SHOP_VAL_BANK");
			return joaat("SHOP_VAL_BARTENDER");
			return joaat("SHOP_SCM_HORSE_SHOP");
			return joaat("SHOP_VAN_POST_OFFICE");
			return joaat("SHOP_VAN_TRAIN_STATION");
			return joaat("SHOP_VAN_FENCE");
			return joaat("SHOP_VAN_HORSE_FENCE_MP");
			return joaat("SHOP_VAN_HORSE_SHOP");
			return joaat("SHOP_VAN_BARTENDER");
			return joaat("SHOP_VAN_COACH");
			return joaat("SHOP_ASB_NEWSPAPER_BOY");
			return joaat("SHOP_ASB_BOUNTYHUNTING_MP_RETURN");
			return joaat("SHOP_ASB_GUNSMITH");
			return joaat("SHOP_ASB_POST_OFFICE");
			return joaat("SHOP_ASB_TRAIN_STATION");
			return joaat("SHOP_ASB_HORSE_FENCE_MP");
			return joaat("SHOP_WAL_POST_OFFICE");
			return joaat("SHOP_WAL_GENERAL_STORE");
			return joaat("SHOP_WAL_TRAIN_STATION");
			return joaat("SHOP_DYNAMIC");
			return joaat("SHOP_WILDERNESS_SUPPLIES");
			return joaat("SHOP_ANYWHERE_HANDHELD");
			return joaat("SHOP_MAP_HORSE_FENCE_MP");
			return joaat("SHOP_WEAPON_MOD_STORE");
			return joaat("SHOP_CLOTHING");
			return joaat("SHOP_CAMP_SHAVING");
			return joaat("SHOP_WARDROBE");
			return joaat("SHOP_BVH_DOCTOR");
			return joaat("SHOP_BVH_GENERAL_STORE");
			return joaat("SHOP_BVH_GUNSMITH");
			return joaat("SHOP_BVH_HORSE_TRAINER");
			return 1529797091;
			return joaat("SHOP_CLM_DOCTOR");
			return joaat("SHOP_CLM_GENERAL_STORE");
			return joaat("SHOP_CLM_GUNSMITH");
			return joaat("SHOP_CLM_HORSE_TRAINER");
			return 1388932648;
			return joaat("SHOP_HSO_DOCTOR");
			return joaat("SHOP_HSO_GENERAL_STORE");
			return joaat("SHOP_HSO_GUNSMITH");
			return joaat("SHOP_HSO_HORSE_TRAINER");
			return 878376253;
			return joaat("SHOP_LAK_DOCTOR");
			return joaat("SHOP_LAK_GENERAL_STORE");
			return joaat("SHOP_LAK_GUNSMITH");
			return joaat("SHOP_LAK_HORSE_TRAINER");
			return joaat("SHOP_SHB_DOCTOR");
			return joaat("SHOP_SHB_GENERAL_STORE");
			return joaat("SHOP_SHB_GUNSMITH");
			return joaat("SHOP_SHB_HORSE_TRAINER");
			return -2076086367;
			return joaat("SHOP_CLM_HORSE_FENCE");
			return joaat("SHOP_CKT_HORSE_FENCE_MP");
			return joaat("SHOP_BUT_HORSE_FENCE_MP");
			return joaat("SHOP_AMD_GENERAL_STORE");
			return joaat("SHOP_AMD_BARTENDER");
			return joaat("SHOP_AMD_POST_OFFICE");
			return joaat("SHOP_TBL_GENERAL_STORE");
			return joaat("SHOP_TBL_BARTENDER");
			return joaat("SHOP_TBL_GUNSMITH");
			return joaat("SHOP_TBL_BUTCHER");
			return joaat("SHOP_TBL_HORSE_SHOP");
			return joaat("SHOP_RYC_FENCE");
			return joaat("SHOP_THL_FENCE");
			return joaat("SHOP_BEN_HORSE_FENCE_MP");
			return joaat("SHOP_BEN_POST_OFFICE");
			return joaat("SHOP_BEN_TRAIN_STATION");
			return 548657065;
			return 243086140;
			return -305029900;
			return 1008537949;
			return 0;
		}
int func_1985(int iParam0)
{
	struct<4> Var0;
	int iVar5;
	int iVar6;
	if (!__LIB_0__::func_720(15, &Var0))
	{
		return -1;
	}
	Var0.f_3 = iParam0;
	Var0.f_2 = -125049320;
	if (DATAFILE::_DATAFILE_GET_HASH(&iVar5, &Var0))
	{
		iVar6 = __LIB_0__::func_621(iVar5);
		return iVar6;
	}
	return -1;
}

int func_2085(int iParam0, int iParam1)
{
	var uVar0;
	return func_2225(&uVar0, iParam0, iParam1);
}

void func_2168(int iParam0)
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

void func_2172(struct<6> Param0)
{
	if (!func_2286(Param0.f_4, 1))
	{
	}
	if (!func_2286(Param0, 1))
	{
	}
	if (!func_2286(Param0.f_2, 1))
	{
	}
	if (!func_2286(Param0.f_5, 1))
	{
	}
	if (!func_2286(Param0.f_3, 1))
	{
	}
	if (!func_2286(Param0.f_1, 1))
	{
	}
}

int func_2225(var uParam0, int iParam1, int iParam2)
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
		return func_2225(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

bool func_2286(int iParam0, int iParam1)
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
				if (func_2286(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_2286(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_2286(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_2286(iVar21, 1))
				{
				}
			}
		}
		__LIB_1__::func_712();
		return true;
	}
	return false;
}

