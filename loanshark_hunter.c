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
	int iLocal_20[1] = { 0 };
	int iLocal_22 = 0;
	int iLocal_23[2] = { 0, 0 };
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	struct<2> Local_29[1];
	var uLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	struct<2> Local_35[3];
	struct<8> Local_42[3];
	struct<4> Local_67[4];
	struct<8> Local_84[4];
	struct<18> Local_117[1];
	struct<4> Local_136 = { 0, 0, 0, 0 } ;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144[2] = { 0, 0 };
	var uLocal_147[1] = { 0 };
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	var uLocal_153[1] = { 0 };
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	bool bLocal_160 = false;
	bool bLocal_161 = false;
	bool bLocal_162 = false;
	bool bLocal_163 = false;
	bool bLocal_164 = false;
	bool bLocal_165 = false;
	bool bLocal_166 = false;
	bool bLocal_167 = false;
	bool bLocal_168 = false;
	bool bLocal_169 = false;
	bool bLocal_170 = false;
	bool bLocal_171 = false;
	bool bLocal_172 = false;
	bool bLocal_173 = false;
	bool bLocal_174 = false;
	bool bLocal_175 = false;
	bool bLocal_176 = false;
	bool bLocal_177 = false;
	bool bLocal_178 = false;
	bool bLocal_179 = false;
	bool bLocal_180 = false;
	bool bLocal_181 = false;
	bool bLocal_182 = false;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	struct<17> Local_186[1];
	struct<22> Local_204 = { 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 0 } ;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 1106247680;
	var uLocal_231 = 1067450368;
	var uLocal_232 = 0;
	var uLocal_233 = 1092616192;
	var uLocal_234 = 1112014848;
	var uLocal_235 = 1106247680;
	var uLocal_236 = 1101529088;
	var uLocal_237 = 1101004800;
	var uLocal_238 = 1084227584;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
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
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	float fLocal_269 = 0f;
	int iLocal_270 = 0;
	var uLocal_271[4] = { 0, 0, 0, 0 };
	var uLocal_276[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_284 = 0;
	int iLocal_285 = 0;
	int iLocal_286 = 0;
	int iLocal_287 = 0;
	int iLocal_288 = 0;
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	int iLocal_298 = 0;
	int iLocal_299 = 0;
	int iLocal_300[4] = { 0, 0, 0, 0 };
	vector3 vLocal_305 = { 0f, 0f, 0f };
	vector3 vLocal_308 = { 0f, 0f, 0f };
	vector3 vLocal_311 = { 0f, 0f, 0f };
	vector3 vLocal_314 = { 0f, 0f, 0f };
	vector3 vLocal_317[3] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_327[5] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_343[3] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_353[9] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	char* sLocal_387 = NULL;
	char* sLocal_388[5] = { NULL, NULL, NULL, NULL, NULL };
	char* sLocal_394 = NULL;
	int iLocal_395 = 0;
	bool bLocal_396 = false;
	bool bLocal_397 = false;
	bool bLocal_398 = false;
	bool bLocal_399 = false;
	bool bLocal_400 = false;
	bool bLocal_401 = false;
	bool bLocal_402 = false;
	bool bLocal_403 = false;
	bool bLocal_404 = false;
	bool bLocal_405 = false;
	bool bLocal_406 = false;
	bool bLocal_407 = false;
	bool bLocal_408 = false;
	bool bLocal_409 = false;
	bool bLocal_410 = false;
	bool bLocal_411 = false;
	bool bLocal_412 = false;
	bool bLocal_413 = false;
	bool bLocal_414 = false;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	bool bLocal_422 = false;
	bool bLocal_423 = false;
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
	var uScriptParam_0 = 0;
#endregion
void __EntryFunction__()
{
	struct<2278> Var0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_27 = joaat("A_M_M_UNICORPSE_01");
	iLocal_28 = joaat("CS_WINTONHOLMES");
	iLocal_34 = 29;
	iLocal_265 = -1;
	iLocal_266 = -1;
	fLocal_269 = 0f;
	vLocal_305 = { -2121.416f, 28.5524f, 265.7486f };
	vLocal_308 = { -1778.91f, -180.181f, 193.8974f };
	vLocal_314 = { -2121.112f, 68.96816f, 255.4082f };
	sLocal_387 = "loanshark_winston";
	sLocal_394 = "LSHNT_sounds";
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
	__LIB_2__::func_433(&(cParam0->f_2077));
	__LIB_2__::func_51(&(cParam0->f_2077), 1);
	__LIB_2__::func_50(&(cParam0->f_2077), 1);
	__LIB_2__::func_111(&(cParam0->f_2077), 1);
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
			__LIB_10__::func_613(cParam0);
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
		__LIB_18__::func_242(cParam0);
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
		if (!__LIB_0__::func_899(&(uParam0->f_2070)))
		{
			__LIB_4__::func_89(&(uParam0->f_2070), 0);
		}
		__LIB_0__::func_11(uParam0);
		if (__LIB_1__::func_592(&(uParam0->f_2070)) >= 2500 || CAM::IS_SCREEN_FADED_OUT())
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
			func_59(cParam0);
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
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	iVar0 = iParam1;
	__LIB_3__::func_618(-2135.703f, 94.53937f, 245.6003f, 20f, 1, 0, 0, 0, 0);
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_159))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_159);
	}
	func_63(joaat("PROVISION_LOANSHARK_SKINS"), 1, 1, -142743235, 0);
	if (!bLocal_412)
	{
		GRAPHICS::SET_PARTICLE_FX_LOOPED_ALPHA(iLocal_268, 1f);
		bLocal_412 = true;
	}
	if (iVar0 == 0)
	{
		if (PED::_0xA0BC8FAED8CFEB3C(iLocal_143))
		{
			iLocal_26 = 1;
			func_59(cParam0);
			__LIB_10__::func_260(1, 0);
			return 6;
		}
	}
	else if (iVar0 == 1)
	{
		if (func_65(-1769.84f, -177.44f, 194.48f, -68.71f, -1769.773f, -180.0528f, 193.6738f, -46.99f, 1))
		{
			if (func_66(1, 1, 1, 0))
			{
				if (!__LIB_0__::func_899(&(vLocal_353[8 /*3*/])))
				{
					func_67(8);
					func_67(131072);
					func_67(262144);
					__LIB_10__::func_378(*cParam0, func_41(1), func_41(2), 1, 2);
					__LIB_2__::func_259(&(vLocal_353[8 /*3*/]));
				}
				else if (__LIB_9__::func_178(&(vLocal_353[8 /*3*/])) > 2f)
				{
					func_71(0);
					func_72();
					__LIB_0__::func_37(&(vLocal_353[8 /*3*/]));
					__LIB_10__::func_260(1, 1);
					return 8;
				}
			}
		}
	}
	else if (iVar0 == 2)
	{
		if (func_74())
		{
			bVar1 = func_75();
			bVar2 = func_76();
			if ((func_65(Local_67[3 /*4*/].f_1, 354.6172f, -2121.031f, 15.67427f, 262.1575f, 354.6172f, 0) && bVar1) && bVar2)
			{
				if (func_66(1, 1, 1, 0))
				{
					if (!__LIB_0__::func_899(&(vLocal_353[8 /*3*/])))
					{
						func_77();
						iLocal_19 = 3;
						__LIB_10__::func_528(&iLocal_152, iLocal_143, -89429847, "BLIP_WINPED");
						MAP::_BLIP_SET_MODIFIER(iLocal_152, -546708623);
						func_79(cParam0, "OBJ_FOLLOW", ENTITY::GET_ENTITY_COORDS(iLocal_143, true, false));
						__LIB_10__::func_378(*cParam0, func_41(2), func_41(3), 2, 3);
						__LIB_2__::func_259(&(vLocal_353[8 /*3*/]));
					}
					else if (__LIB_9__::func_178(&(vLocal_353[8 /*3*/])) > 2f)
					{
						TASK::TASK_DISMOUNT_ANIMAL(Global_35, 0, 0, 0, 0, 0);
						func_80(4);
						func_67(524288);
						func_71(3);
						iLocal_18 = 4;
						__LIB_0__::func_37(&(vLocal_353[8 /*3*/]));
						__LIB_10__::func_260(1, 1);
						return 8;
					}
				}
			}
		}
	}
	else if (iVar0 == 3)
	{
		if (func_74())
		{
			if (!__LIB_0__::func_272(iLocal_144[1], 0))
			{
				__LIB_12__::func_789(&(iLocal_144[1]), -2117.592f, 17.45552f, 263.7554f, 150.5622f, 1, 1, 1, 1);
				return 2;
			}
			bVar3 = func_75();
			bVar4 = func_76();
			if (bVar3 && bVar4)
			{
				if (func_66(1, 1, 1, 0))
				{
					if (!__LIB_0__::func_899(&(vLocal_353[8 /*3*/])))
					{
						if (!func_83(8192))
						{
							WEAPON::_GIVE_WEAPON_TO_PED_2(iLocal_143, joaat("WEAPON_MELEE_DAVY_LANTERN"), 100, false, true, 1, false, 0.5f, 1f, 752097756, false, 0f, false);
							WEAPON::_GIVE_WEAPON_TO_PED_2(iLocal_143, joaat("WEAPON_REVOLVER_CATTLEMAN"), 26, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
							func_80(8192);
						}
						func_84();
						func_71(4);
						iLocal_15 = 1;
						func_67(16384);
						func_67(32768);
						func_85();
						func_77();
						func_86();
						WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_MELEE_DAVY_LANTERN"), true, 1, false, false);
						PED::_0x923583741DC87BCE(iLocal_143, sLocal_387);
						func_80(16);
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_144[1], -2117.592f, 17.45552f, 263.7554f, 150.5622f, true, false, true);
						TASK::TASK_STAND_STILL(iLocal_144[1], -1);
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_144[0], -2115.011f, 16.38608f, 264.1115f, 308.4892f, true, false, true);
						TASK::TASK_STAND_STILL(iLocal_144[0], -1);
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_143, -2124.458f, 73.1898f, 254.5324f, 49.0245f, true, false, true);
						iLocal_19 = 3;
						iLocal_294 = 22;
						__LIB_10__::func_528(&iLocal_152, iLocal_143, -89429847, "BLIP_WINPED");
						func_79(cParam0, "OBJ_SEARCH_CAVE", vLocal_317[0 /*3*/]);
						__LIB_10__::func_378(*cParam0, func_41(3), func_41(4), 3, 4);
						iLocal_300[0] = 1;
						iLocal_300[1] = 1;
						__LIB_2__::func_259(&(vLocal_353[8 /*3*/]));
					}
					else if (__LIB_9__::func_178(&(vLocal_353[8 /*3*/])) > 2f)
					{
						func_87();
						func_88();
						__LIB_0__::func_37(&(vLocal_353[8 /*3*/]));
						__LIB_10__::func_260(1, 1);
						return 8;
					}
				}
			}
		}
	}
	else if (iVar0 == 4)
	{
		if (func_74())
		{
			if (!__LIB_0__::func_272(iLocal_144[1], 0))
			{
				__LIB_12__::func_789(&(iLocal_144[1]), -2117.592f, 17.45552f, 263.7554f, 150.5622f, 1, 1, 1, 1);
				return 2;
			}
			if (!bLocal_400)
			{
				bVar5 = func_89(0, -2120.824f, 120.6065f, 236.8341f, 155.131f);
				bVar6 = func_76();
				if (bVar5 && bVar6)
				{
					bLocal_400 = true;
				}
			}
			else
			{
				if (!bLocal_399)
				{
					bLocal_401 = true;
					vLocal_311 = { -2136.02f, 95.62f, 246.11f };
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_143, -2136.02f, 95.62f, 246.11f, -32.01f, true, false, true);
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_147[0], -2115.007f, 120.2122f, 236.98f, 155.131f, true, false, true);
					ENTITY::_0x9587913B9E772D29(uLocal_147[0], 0);
					__LIB_3__::func_459(iLocal_143, 1);
					__LIB_2__::func_190(iLocal_143, __LIB_1__::func_760(joaat("REWARD_PED_SMALL"), 0, -1));
					func_93();
					__LIB_1__::func_864(iLocal_143, 1, 0);
					func_84();
					__LIB_1__::func_864(uLocal_147[0], 1, 0);
					bLocal_399 = true;
					return 2;
				}
				if (func_66(1, 1, 1, 1) && !PED::IS_PED_RAGDOLL(uLocal_147[0]))
				{
					if (!__LIB_0__::func_899(&(vLocal_353[8 /*3*/])))
					{
						func_71(8);
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_144[1], -2117.592f, 17.45552f, 263.7554f, 150.5622f, true, false, true);
						TASK::TASK_STAND_STILL(iLocal_144[1], -1);
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_144[0], -2115.011f, 16.38608f, 264.1115f, 308.4892f, true, false, true);
						TASK::TASK_STAND_STILL(iLocal_144[0], -1);
						WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_MELEE_DAVY_LANTERN"), true, 1, false, false);
						func_67(268435456);
						__LIB_10__::func_378(*cParam0, func_41(4), func_41(6), 4, 6);
						iLocal_300[0] = 1;
						iLocal_300[1] = 1;
						iLocal_300[3] = 1;
						iLocal_300[2] = 1;
						__LIB_2__::func_259(&(vLocal_353[8 /*3*/]));
					}
					else if (__LIB_9__::func_178(&(vLocal_353[8 /*3*/])) > 4f)
					{
						GRAPHICS::_ADD_BLOOD_POOL(ENTITY::GET_ENTITY_COORDS(uLocal_147[0], false, false), true);
						GRAPHICS::_ADD_BLOOD_POOL(ENTITY::GET_ENTITY_COORDS(iLocal_143, false, false), true);
						__LIB_0__::func_37(&(vLocal_353[8 /*3*/]));
						__LIB_10__::func_260(1, 1);
						return 8;
					}
				}
			}
		}
	}
	else if (iVar0 == 5)
	{
		if ((func_95() && __LIB_1__::func_707(joaat("PROVISION_LOANSHARK_SKINS"), 1, 0)) && func_66(1, 0, 0, 0))
		{
			func_71(9);
			__LIB_10__::func_378(*cParam0, func_41(5), func_41(6), 5, 6);
			func_67(134217728);
			__LIB_10__::func_260(1, 1);
			return 8;
		}
	}
	else if (iVar0 == 6)
	{
		if (!__LIB_0__::func_272(iLocal_144[1], 0))
		{
			__LIB_12__::func_789(&(iLocal_144[1]), -1745.52f, -402.4335f, 154.6316f, 248.3821f, 1, 1, 1, 1);
			return 2;
		}
		if (func_66(1, 0, 0, 0))
		{
			func_97(joaat("MONEY_LOANSHARK_WINTON_DEBT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			CLOCK::ADVANCE_CLOCK_TIME_TO(11, 0, 0);
			iLocal_300[0] = 1;
			iLocal_300[1] = 1;
			iLocal_300[3] = 1;
			iLocal_300[2] = 1;
			__LIB_10__::func_260(1, 1);
			return 9;
		}
	}
	return 2;
}

void func_12(char[4] cParam0)
{
	if (func_98(cParam0))
	{
		if (__LIB_10__::func_261(cParam0->f_346))
		{
			__LIB_0__::func_8(&(Global_1392626[*cParam0 /*32*/].f_9), 16);
			__LIB_10__::func_464(&(cParam0->f_32), &(cParam0->f_352));
			func_101(cParam0);
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
			if (func_101(cParam0))
			{
				__LIB_10__::func_465(cParam0, 1);
				iVar0 = func_105(cParam0);
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
			iVar0 = func_105(cParam0);
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
	iVar0 = func_109(cParam0);
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
	func_110(*cParam0, 1, 1);
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
			if (!__LIB_0__::func_899(&(cParam0->f_2070)))
			{
				__LIB_4__::func_89(&(cParam0->f_2070), 0);
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
			else if (__LIB_1__::func_592(&(cParam0->f_2070)) >= 2500)
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
	else if (!__LIB_0__::func_899(&(cParam0->f_2064)) || IntToFloat(__LIB_1__::func_592(&(cParam0->f_2064))) > __LIB_10__::func_381(cParam0))
	{
		__LIB_4__::func_89(&(cParam0->f_2064), 1);
		if (func_131(cParam0))
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
	func_133(cParam0);
	__LIB_10__::func_342(cParam0);
	__LIB_10__::func_479(cParam0);
	if ((cParam0->f_1 != 12 && __LIB_10__::func_266(cParam0) != 2) && !__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_10, 2))
	{
		__LIB_8__::func_985(*cParam0);
	}
	__LIB_10__::func_479(cParam0);
	__LIB_3__::func_525(&(cParam0->f_2210[0]), &(cParam0->f_2213[0]));
	__LIB_3__::func_525(&(cParam0->f_2210[1]), &(cParam0->f_2213[1]));
	if (__LIB_10__::func_266(cParam0) == 0)
	{
		__LIB_10__::func_435(*cParam0);
	}
	__LIB_2__::func_788(&(Global_1392626[*cParam0 /*32*/].f_11), 1, 0, 1);
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
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
	__LIB_10__::func_267(uParam0, "LSHUNAU");
	__LIB_6__::func_825();
	__LIB_13__::func_367(vLocal_308, 10f, -1);
	__LIB_10__::func_268(uParam0, 4);
	__LIB_3__::func_557(&iLocal_285, -1781.672f, -182.878f, 196.2472f, 0f, 0f, 0f, 19.05989f, 19.8101f, 12.77014f, "volCutsceneTrigger");
	__LIB_3__::func_527(&iLocal_287, -1765.586f, -186.8562f, 184.2072f, 0f, 0f, 82.49999f, 17f, 20.75f, 30f, "volCutsceneRestric");
	__LIB_3__::func_527(&iLocal_288, -1778.582f, -182.069f, 192.0962f, 0f, 0f, 78.49999f, 3.5f, 2.7f, 5f, "volILOKick");
	__LIB_3__::func_527(&iLocal_289, -1776.927f, -183.5623f, 193.8343f, 0f, 0f, 78.49998f, 5f, 5f, 5f, "volAltILOStart");
	__LIB_3__::func_557(&iLocal_290, -1781.171f, -181.4855f, 197.8257f, 0f, 0f, -17.75f, 5.5f, 5f, 1f, "volFallILOTrigger");
	__LIB_10__::func_496(uParam0, -1777.824f, -184.9108f, 196.2472f, 0f, 0f, 0f, 4.75f, 5.25f, 5f);
	func_159(uParam0, &iLocal_285, 0);
	__LIB_10__::func_382();
	__LIB_10__::func_269(uParam0, 8);
	func_162(uParam0);
	func_163(uParam0);
	if (__LIB_1__::func_707(joaat("MONEY_LOANSHARK_WINTON_DEBT"), 1, 0))
	{
		func_164(joaat("MONEY_LOANSHARK_WINTON_DEBT"), 1, 1, -142743235, 0);
	}
	if (__LIB_1__::func_707(joaat("PROVISION_LOANSHARK_SKINS"), 1, 0))
	{
		func_164(joaat("PROVISION_LOANSHARK_SKINS"), 1, 1, -142743235, 0);
	}
	if (__LIB_10__::func_383(10) == joaat("PROVISION_LOANSHARK_SKINS"))
	{
		__LIB_8__::func_50(10);
	}
	__LIB_2__::func_51(&(uParam0->f_2077), 0);
	__LIB_0__::func_7(&(Global_1392626[*uParam0 /*32*/].f_8), 512);
	__LIB_0__::func_7(&(Global_1392626[*uParam0 /*32*/].f_8), 128);
}

bool func_38(char[4] cParam0)
{
	int iVar0;
	float fVar1;
	if (cParam0->f_1 == 3)
	{
		if (func_168(cParam0))
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
	if (__LIB_5__::func_245(PLAYER::PLAYER_ID(), 1, 0, 1))
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
	else if (__LIB_0__::func_272(Global_1392626[*cParam0 /*32*/].f_11, 1))
	{
		if (!__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_8, 256))
		{
			if (!__LIB_10__::func_363(*cParam0, (Global_1392626[*cParam0 /*32*/].f_5 + 10f)) && !__LIB_18__::func_891(Global_1392626[*cParam0 /*32*/].f_11, 0, &(cParam0->f_2077), &(cParam0->f_2105), 0, 0))
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
	func_177(cParam0);
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
	__LIB_10__::func_479(cParam0);
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

struct<4> func_41(int iParam0)
{
	int iVar0;
	struct<4> Var1;
	iVar0 = iParam0;
	if (iVar0 == 1 || iVar0 == 0)
	{
		Var1 = { -1769.773f, -180.0528f, 193.6738f };
		Var1.f_3 = -47.04f;
	}
	else if (iVar0 == 2)
	{
		Var1 = { -2121.031f, 15.67427f, 262.1575f };
		Var1.f_3 = 317.878f;
	}
	else if (iVar0 == 3)
	{
		Var1 = { -2119.91f, 71.521f, 255.0462f };
		Var1.f_3 = 310.2596f;
	}
	else if (iVar0 == 4)
	{
		Var1 = { -2122.93f, 122.9368f, 236.4132f };
		Var1.f_3 = 256.3853f;
	}
	else if (iVar0 == 5)
	{
		Var1 = { -1753.249f, -397.5574f, 154.9612f };
		Var1.f_3 = 355.5246f;
	}
	else if (iVar0 == 6)
	{
		Var1 = { -1750.001f, -397.1193f, 155.117f };
		Var1.f_3 = 45.0597f;
	}
	return Var1;
}

bool func_42(var uParam0)
{
	return func_185(*uParam0, uParam0->f_3);
}

bool func_46(char[4] cParam0)
{
	if (cParam0->f_1 == 8)
	{
		if (func_186(cParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_57(var uParam0)
{
	if (bLocal_422)
	{
		return true;
	}
	if (func_200(uParam0))
	{
		if (func_201())
		{
			__LIB_3__::func_594(&(uParam0->f_2210[0]), &(uParam0->f_2213[0]), Global_1392626[*uParam0 /*32*/].f_27, 0f, 0f, 0f, Global_1392626[*uParam0 /*32*/].f_4, Global_1392626[*uParam0 /*32*/].f_4, Global_1392626[*uParam0 /*32*/].f_4, 0, 0, 1, 0, 0);
			__LIB_3__::func_594(&(uParam0->f_2210[1]), &(uParam0->f_2213[1]), -2009.089f, -235.1312f, 191.8717f, 0f, 0f, 0f, 200f, 200f, 200f, 0, 0, 1, 0, 0);
			__LIB_0__::func_928(&(uParam0->f_2106), Global_35, "ARTHUR", 0);
			__LIB_0__::func_928(&(uParam0->f_2106), iLocal_143, "LOAN_HUNTER2", 0);
			bLocal_422 = true;
			return true;
		}
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

void func_59(char[4] cParam0)
{
	cParam0->f_346 = func_213();
	if (iLocal_26 == 0)
	{
		__LIB_10__::func_599(cParam0, 34907);
		__LIB_10__::func_558(cParam0, 34943);
		__LIB_10__::func_554(&(cParam0->f_32), 35206);
		__LIB_10__::func_401(cParam0, __LIB_10__::func_343(*cParam0));
		func_221(&(cParam0->f_32), iLocal_287, 0, 0, 0, 0);
		__LIB_10__::func_402(&(cParam0->f_32));
		__LIB_10__::func_564(cParam0, Global_35, 0, 0, 0, 0);
		__LIB_10__::func_564(cParam0, iLocal_143, "WintonHolmes", 0, 0, 0);
		__LIB_10__::func_564(cParam0, Local_84[2 /*8*/], "p_ladle02x", 0, 0, 0);
		__LIB_10__::func_564(cParam0, Local_84[3 /*8*/], "p_mugCoffee01x", 0, 0, 0);
		__LIB_10__::func_564(cParam0, Local_84[0 /*8*/], "p_boiler01x", 0, 0, 0);
		__LIB_10__::func_564(cParam0, Local_84[1 /*8*/], "p_copperpot02bx", 0, 0, 0);
	}
	else if (iLocal_26 == 1)
	{
		__LIB_10__::func_599(cParam0, 34907);
		__LIB_10__::func_558(cParam0, 34943);
		__LIB_10__::func_554(&(cParam0->f_32), 35206);
		__LIB_10__::func_401(cParam0, __LIB_10__::func_343(*cParam0));
		func_221(&(cParam0->f_32), iLocal_287, 0, 0, 0, 0);
		__LIB_10__::func_459(&(cParam0->f_32));
		__LIB_10__::func_564(cParam0, Global_35, 0, 0, 0, 0);
		__LIB_10__::func_564(cParam0, iLocal_143, "WintonHolmes", 0, 0, 0);
		__LIB_10__::func_564(cParam0, Local_84[2 /*8*/], "p_ladle02x", 0, 0, 0);
		__LIB_10__::func_564(cParam0, Local_84[3 /*8*/], "p_mugCoffee01x", 0, 0, 0);
		__LIB_10__::func_564(cParam0, Local_84[0 /*8*/], "p_boiler01x", 0, 0, 0);
		__LIB_10__::func_564(cParam0, Local_84[1 /*8*/], "p_copperpot02bx", 0, 0, 0);
	}
	__LIB_0__::func_7(&(Global_1392626[*cParam0 /*32*/].f_9), 16);
}

bool func_60(char[4] cParam0)
{
	if (!__LIB_10__::func_344(cParam0))
	{
		return false;
	}
	func_226(cParam0);
	if (!__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_8, 512))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(cParam0->f_348)) && __LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 16))
		{
			if (__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_8, 2))
			{
				func_227(&(cParam0->f_352), cParam0->f_348, 0);
			}
			else
			{
				func_228(&(cParam0->f_352), cParam0->f_348, 0, 0);
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
			__LIB_0__::func_11(cParam0);
			if ((!PED::IS_PED_RAGDOLL(Global_35) && !PED::IS_PED_JUMPING(Global_35)) && !PED::IS_PED_INJURED(Global_1392626[*cParam0 /*32*/].f_11))
			{
				if (__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 1024))
				{
					func_231(&(Global_1392626[*cParam0 /*32*/].f_11), &(cParam0->f_2216), cParam0->f_2295, &(cParam0->f_2277), 0.1f, 3, 0, cParam0->f_2296, 1, 0, 0, 2, -1082130432 /* Float: -1f */);
					if (__LIB_9__::func_754(&(cParam0->f_2216)))
					{
						__LIB_10__::func_479(cParam0);
						__LIB_10__::func_345(cParam0);
						__LIB_10__::func_342(cParam0);
						return true;
					}
				}
			}
		}
	}
	if (func_234(cParam0))
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
	__LIB_10__::func_479(cParam0);
	__LIB_0__::func_7(&(cParam0->f_16), 1);
	__LIB_0__::func_11(cParam0);
	__LIB_10__::func_253(cParam0, func_237(cParam0));
	iVar0 = func_237(cParam0);
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

int func_63(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;
	if (!bParam4)
	{
		iParam1 = func_238(iParam0, iParam1, 1, 1, -142743235);
	}
	else
	{
		iVar0 = __LIB_8__::func_716(0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			func_240(&iVar0, iParam0, &iParam1, bParam2, iParam3);
		}
	}
	if (iParam1 <= 0)
	{
		return 1;
	}
	return func_241(iParam0, iParam1, bParam2, iParam3);
}

bool func_65(vector3 vParam0, float fParam3, vector3 vParam4, float fParam7, int iParam8)
{
	if (!func_83(8192))
	{
		WEAPON::_GIVE_WEAPON_TO_PED_2(iLocal_143, joaat("WEAPON_MELEE_DAVY_LANTERN"), 100, false, true, 1, false, 0.5f, 1f, 752097756, false, 0f, false);
		WEAPON::_GIVE_WEAPON_TO_PED_2(iLocal_143, joaat("WEAPON_REVOLVER_CATTLEMAN"), 26, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
		func_80(8192);
	}
	if (((__LIB_0__::func_272(iLocal_143, 0) && __LIB_0__::func_266(iLocal_143, vParam0, 10f, 0, 1)) && PED::IS_PED_ON_MOUNT(iLocal_143)) && (__LIB_0__::func_266(Global_35, vParam4, 10f, 1, 1) && PED::IS_PED_ON_MOUNT(Global_35)))
	{
		iLocal_15 = 2;
		return true;
	}
	else
	{
		func_242(iLocal_143, vParam0, fParam3, iParam8);
		func_242(Global_35, vParam4, fParam7, iParam8);
	}
	return false;
}

bool func_66(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	return true;
	if (bParam0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_144[1]) || !PED::_0xA0BC8FAED8CFEB3C(iLocal_144[1]))
		{
			return false;
		}
	}
	if (bParam1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_143) || !PED::_0xA0BC8FAED8CFEB3C(iLocal_143))
		{
			return false;
		}
	}
	if (bParam2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_144[1]) || !PED::_0xA0BC8FAED8CFEB3C(iLocal_144[1]))
		{
			return false;
		}
	}
	if (bParam3)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_147[0]) || !PED::_0xA0BC8FAED8CFEB3C(uLocal_147[0]))
		{
			return false;
		}
	}
	return true;
}

void func_67(int iParam0)
{
	__LIB_1__::func_683(&iLocal_296, iParam0);
}

void func_71(int iParam0)
{
	int iVar0;
	if (iParam0 == 11)
	{
		iVar0 = iLocal_16;
		iVar0++;
		iLocal_16 = iVar0;
		if (iLocal_16 == 11)
		{
			iLocal_16 = (iVar0 - 1);
		}
	}
	else
	{
		iLocal_16 = iParam0;
	}
	iLocal_15 = 0;
}

void func_72()
{
	TASK::TASK_CLEAR_LOOK_AT(iLocal_143);
	TASK::CLEAR_PED_TASKS(iLocal_143, true, false);
	TASK::SET_PED_PATH_MAY_ENTER_WATER(iLocal_143, true);
	TASK::_0x9DE63896B176EA94(iLocal_143, 1);
	TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(iLocal_143, false, 1f);
	if (!PLAYER::_0x2009F8AB7A5E9D6D(PLAYER::PLAYER_ID()))
	{
		PLAYER::_0xAC22AA6DF4D1C1DE(PLAYER::PLAYER_ID(), iLocal_143, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 4, 2, 0);
		PED::_0x86FAFC18E3D4380C(iLocal_267, 0);
		PLAYER::_0xDD33A82352C4652F(PLAYER::GET_PLAYER_INDEX(), iLocal_143, 3);
	}
	func_248(1);
	if (iLocal_19 == 1)
	{
		TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_143, Local_67[iLocal_19 /*4*/], iLocal_294, 2060, -1, 0, 0, -1);
	}
	else
	{
		TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_143, Local_67[iLocal_19 /*4*/], iLocal_294, 2062, -1, 0, 0, -1);
	}
	__LIB_10__::func_592(4);
}

bool func_74()
{
	if (!INTERIOR::IS_VALID_INTERIOR(iLocal_270))
	{
		iLocal_270 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-2127.173f, 113.6928f, 231.7336f, "m05_bearcave_main");
	}
	else if (!INTERIOR::IS_INTERIOR_READY(iLocal_270))
	{
		INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_270);
	}
	else
	{
		return true;
	}
	return false;
}

bool func_75()
{
	if (func_89(0, -2131.792f, 102.5571f, 244.4036f, 148.6094f))
	{
		func_250(0);
		return true;
	}
	return false;
}

bool func_76()
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= (3 - 1))
	{
		if (!Local_42[iVar0 /*8*/].f_7)
		{
			if (func_251(1, &(Local_42[iVar0 /*8*/]), Local_42[iVar0 /*8*/].f_5, Local_42[iVar0 /*8*/].f_1, Local_42[iVar0 /*8*/].f_4, 1, 1, 0, 1, 1, 0, 0))
			{
				if (PED::_0xA0BC8FAED8CFEB3C(Local_42[iVar0 /*8*/]))
				{
					__LIB_3__::func_459(Local_42[iVar0 /*8*/], 0);
					__LIB_2__::func_463(Local_42[iVar0 /*8*/], Local_42[iVar0 /*8*/].f_6, 1, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_42[iVar0 /*8*/], true);
					AUDIO::DISABLE_PED_PAIN_AUDIO(Local_42[iVar0 /*8*/], true);
					AUDIO::STOP_PED_SPEAKING(Local_42[iVar0 /*8*/], true);
					ENTITY::_0x9587913B9E772D29(Local_42[iVar0 /*8*/], 0);
					if (iVar0 == 0)
					{
						__LIB_0__::func_862(Local_42[iVar0 /*8*/], -1514638394);
						PED::APPLY_PED_DAMAGE_PACK(Local_42[iVar0 /*8*/], "PD_Animal_attack_blood_body_upper_left", 0f, 1f);
						PED::APPLY_PED_DAMAGE_PACK(Local_42[iVar0 /*8*/], "PD_Animal_attack_right_body_Enemy", 0f, 1f);
						PED::APPLY_PED_DAMAGE_PACK(Local_42[iVar0 /*8*/], "PD_Animal_attack_left_arm_Enemy", 0f, 1f);
						PED::APPLY_PED_DAMAGE_PACK(Local_42[iVar0 /*8*/], "PD_Animal_attack_body_abdomen_Enemy", 0f, 1f);
					}
					else if (iVar0 == 1)
					{
						__LIB_0__::func_862(Local_42[iVar0 /*8*/], -1762535879);
						PED::APPLY_PED_DAMAGE_PACK(Local_42[iVar0 /*8*/], "PD_Animal_attack_blood_body_upper_left", 0f, 1f);
						PED::APPLY_PED_DAMAGE_PACK(Local_42[iVar0 /*8*/], "PD_Animal_attack_right_body_Enemy", 0f, 1f);
						PED::APPLY_PED_DAMAGE_PACK(Local_42[iVar0 /*8*/], "PD_Animal_attack_left_face1_Enemy", 0f, 1f);
						PED::APPLY_PED_DAMAGE_PACK(Local_42[iVar0 /*8*/], "PD_Animal_attack_right_face2_Enemy", 0f, 1f);
						PED::APPLY_PED_DAMAGE_PACK(Local_42[iVar0 /*8*/], "PD_Animal_attack_body_abdomen_Enemy", 0f, 1f);
					}
					else
					{
						__LIB_0__::func_862(Local_42[iVar0 /*8*/], 1232157485);
						PED::APPLY_PED_DAMAGE_PACK(Local_42[iVar0 /*8*/], "PD_Animal_attack_blood_body_upper_left", 0f, 1f);
						PED::APPLY_PED_DAMAGE_PACK(Local_42[iVar0 /*8*/], "PD_Animal_attack_right_body_Enemy", 0f, 1f);
						PED::APPLY_PED_DAMAGE_PACK(Local_42[iVar0 /*8*/], "PD_Animal_attack_left_arm_Enemy", 0f, 1f);
						PED::APPLY_PED_DAMAGE_PACK(Local_42[iVar0 /*8*/], "PD_Animal_attack_left_face1_Enemy", 0f, 1f);
						PED::APPLY_PED_DAMAGE_PACK(Local_42[iVar0 /*8*/], "PD_Animal_attack_body_abdomen_Enemy", 0f, 1f);
					}
					if (!Local_42[iVar0 /*8*/].f_7)
					{
						Local_42[iVar0 /*8*/].f_7 = 1;
						iVar1++;
					}
				}
			}
		}
		else
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

void func_77()
{
	__LIB_3__::func_557(&(uLocal_276[0]), -2119.784f, 24.55419f, 265.265f, 0f, 0f, -3.057443f, 24.84983f, 18.72117f, 12.99595f, "LS_CV_CAVE_ENTR");
	__LIB_3__::func_557(&(uLocal_276[1]), -2119.569f, 27.75162f, 266.1345f, 0f, 0f, 8.815397f, 14.50672f, 7.423642f, 6.220411f, "LS_CV_CAVE_MOUTH");
	POPULATION::_0xB56D41A694E42E86(uLocal_276[1], 0, 0, 0, -1, -1, 0);
	PATHFIND::_0x19C7567D2F2287D6(uLocal_276[1], 1);
	__LIB_3__::func_558(&(uLocal_276[2]), -2120.898f, 70.364f, 257.225f, 0f, 0f, 12.05922f, 6f, 4.564754f, 5f, "LS_CV_CAVE_BRANCH");
	__LIB_3__::func_557(&(uLocal_276[4]), -2114.812f, 75.72562f, 254.238f, 0f, 0f, -50.02331f, 3.634923f, 5.208362f, 5.065354f, "LS_CV_CAVE_TUN_RGHT");
	__LIB_3__::func_557(&(uLocal_276[3]), -2126.36f, 74.42384f, 254.4863f, 0f, 0f, 47.99086f, 3.423497f, 10.16938f, 6.04715f, "LS_CV_CAVE_TUN_LFT");
	__LIB_3__::func_557(&(uLocal_276[5]), -2118.432f, 100.364f, 246.3393f, 0f, 0f, 0f, 65.13773f, 42.67842f, 17.04913f, "LS_CV_CAVE_MAIN_ROOM");
	__LIB_3__::func_527(&(uLocal_276[6]), -2093.959f, 99.28654f, 246.0553f, 0f, 0f, 100.5f, 34.5f, 18.5f, 13.75f, "CV_CAVE_RIGHT_SIDE");
}

void func_79(char[4] cParam0, char* sParam1, char[12] cParam2)
{
	if (!__LIB_1__::func_588(sParam1, 0, 0, -1, -1, 0))
	{
		__LIB_1__::func_324(sParam1);
		if (!__LIB_0__::func_899(&(cParam0->f_2067)))
		{
			__LIB_4__::func_89(&(cParam0->f_2067), 0);
		}
		else
		{
			__LIB_2__::func_259(&(cParam0->f_2067));
		}
		cParam0->f_2073 = { cParam2 };
		cParam0->f_2076 = MISC::GET_DISTANCE_BETWEEN_COORDS(cParam0->f_2073, Global_36, true);
	}
}

void func_80(int iParam0)
{
	__LIB_1__::func_683(&iLocal_295, iParam0);
}

bool func_83(int iParam0)
{
	return __LIB_0__::func_27(iLocal_295, iParam0);
}

void func_84()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (3 - 1))
	{
		if (!PED::IS_PED_DEAD_OR_DYING(Local_42[iVar0 /*8*/], true))
		{
			PED::EXPLODE_PED_HEAD(Local_42[iVar0 /*8*/], joaat("WEAPON_COUGAR"));
		}
		iVar0++;
	}
}

void func_85()
{
	PED::ADD_RELATIONSHIP_GROUP("Cougars", &iLocal_395);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_147[0], iLocal_395);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, iLocal_395, joaat("PLAYER"));
}

void func_86()
{
	if (!VOLUME::_DOES_VOLUME_EXIST(uLocal_271[0]))
	{
		__LIB_3__::func_558(&(uLocal_271[0]), -2121.525f, 51.92086f, 260.778f, 0f, 0f, 0f, 6.345665f, 3.003633f, 4.015388f, "CNV_INITIAL_ROAR");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(uLocal_271[1]))
	{
		__LIB_3__::func_558(&(uLocal_271[1]), -2120.874f, 54.53851f, 260.778f, 0f, 0f, 0f, 6.345665f, 3.003633f, 4.015388f, "CNV_SECONDARY_ROAR");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(uLocal_271[2]))
	{
		__LIB_3__::func_558(&(uLocal_271[2]), -2109.688f, 78.98119f, 252.0246f, 0f, 0f, -49f, 2.239681f, 2.325752f, 3.473848f, "CNV_WRONG_PATH_ROAR");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(uLocal_271[3]))
	{
		__LIB_3__::func_558(&(uLocal_271[3]), -2126.971f, 75.01608f, 254.243f, 0f, 0f, 134.1165f, 2.18944f, 1.447863f, 1.917972f, "CNV_MOAN");
	}
}

void func_87()
{
	WEAPON::SET_CURRENT_PED_WEAPON(iLocal_143, joaat("WEAPON_MELEE_DAVY_LANTERN"), false, 1, false, false);
	WEAPON::SET_CURRENT_PED_WEAPON(iLocal_143, joaat("WEAPON_REVOLVER_CATTLEMAN"), false, 0, false, false);
	TASK::TASK_SWAP_WEAPON(iLocal_143, 1, 1, 0, 0);
	func_80(16384);
}

void func_88()
{
	if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_143, 0))
	{
		TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_143, Local_67[iLocal_19 /*4*/], iLocal_294, 2062, -1, 0, 0, -1);
		PED::_0x2208438012482A1A(iLocal_143, false, false);
	}
	func_259();
	__LIB_10__::func_592(11);
}

bool func_89(int iParam0, vector3 vParam1, float fParam4)
{
	if (!__LIB_0__::func_272(uLocal_147[iParam0], 0))
	{
		if (func_251(1, &(uLocal_147[iParam0]), joaat("A_C_COUGAR_01"), vParam1, fParam4, 1, 1, 0, 1, 1, 1, 1))
		{
			TASK::TASK_STAND_STILL(uLocal_147[iParam0], -1);
			PED::SET_PED_CAN_BE_TARGETTED(uLocal_147[iParam0], false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_147[iParam0], true);
			AUDIO::_0x3A00D87B20A2A5E4(uLocal_147[iParam0], 1);
			__LIB_3__::func_459(uLocal_147[iParam0], 1);
			PED::SET_PED_CONFIG_FLAG(uLocal_147[iParam0], 6, true);
			if (iParam0 == 0)
			{
				PED::REQUEST_PED_VISIBILITY_TRACKING(uLocal_147[0]);
				__LIB_3__::func_937(uLocal_147[0]);
				PED::SET_PED_CONFIG_FLAG(uLocal_147[0], 542, true);
				PED::_SET_PED_BODY_COMPONENT(uLocal_147[0], 263759244);
				PED::_UPDATE_PED_VARIATION(uLocal_147[0], true, true, true, true, false);
				FLOCK::_0x8B6F0F59B1B99801(uLocal_147[0], 1);
				ENTITY::_0x18FF3110CF47115D(uLocal_147[0], 7, 0);
				__LIB_5__::func_437(uLocal_147[0], "BLIP_COUGAR", 1);
			}
			__LIB_1__::func_338(uLocal_147[iParam0], vParam1);
			return true;
		}
	}
	else
	{
		return true;
	}
	return false;
}

void func_93()
{
	PED::APPLY_PED_DAMAGE_PACK(iLocal_143, "PD_Animal_attack_blood_body_upper_left", 0f, 1f);
	PED::APPLY_PED_DAMAGE_PACK(iLocal_143, "PD_Animal_attack_right_body_Enemy", 0f, 1f);
	PED::APPLY_PED_DAMAGE_PACK(iLocal_143, "PD_Animal_attack_left_arm_Enemy", 0f, 1f);
	PED::APPLY_PED_DAMAGE_PACK(iLocal_143, "PD_Animal_attack_left_face1_Enemy", 0f, 1f);
	PED::APPLY_PED_DAMAGE_PACK(iLocal_143, "PD_Animal_attack_right_face2_Enemy", 0f, 1f);
	PED::APPLY_PED_DAMAGE_PACK(iLocal_143, "PD_Animal_attack_body_abdomen_Enemy", 0f, 1f);
}

bool func_95()
{
	if (func_268())
	{
		__LIB_4__::func_142(uLocal_147[0], 1, 0);
		return true;
	}
	return false;
}

bool func_97(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
				func_97(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
			func_318(iParam0);
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
			__LIB_10__::func_845(iParam0, iParam1);
			__LIB_1__::func_759(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, -1697809989))
		{
			func_322(iParam0, 0, 0, 0);
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
						func_97(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_97(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_97(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_97(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_97(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_97(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_97(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
					func_97(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_97(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_97(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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

bool func_98(char[4] cParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(cParam0->f_348)))
	{
		if (!func_228(&(cParam0->f_352), cParam0->f_348, 0, 0))
		{
			return false;
		}
	}
	else
	{
		__LIB_10__::func_263(1, 1, 1);
		__LIB_0__::func_11(cParam0);
		if (!__LIB_0__::func_0(cParam0))
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

int func_101(char[4] cParam0)
{
	char cVar0[32];
	StringCopy(&cVar0, cParam0->f_346, 32);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		return 1;
	}
	return func_368(cVar0, &(cParam0->f_32), cParam0);
}

int func_105(char[4] cParam0)
{
	if (iLocal_26 != 0 && iLocal_26 != 1)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
		func_97(joaat("MONEY_LOANSHARK_WINTON_DEBT"), 1, 0, 0, 0, 1248274121, 0, 0, 0, 0);
		func_164(joaat("PROVISION_LOANSHARK_SKINS"), 1, 0, -142743235, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_84[2 /*8*/]))
	{
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_84[2 /*8*/], Local_84[2 /*8*/].f_1, false, true, true);
		ENTITY::SET_ENTITY_ROTATION(Local_84[2 /*8*/], Local_84[2 /*8*/].f_4, 1, true);
	}
	__LIB_10__::func_378(*cParam0, func_41(1), func_41(2), 1, 2);
	return 8;
}

int func_109(char[4] cParam0)
{
	MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
	func_372();
	func_373(cParam0);
	func_374();
	func_375();
	__LIB_10__::func_385(iLocal_143);
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_286))
	{
		__LIB_3__::func_527(&iLocal_286, -2009.607f, -228.6459f, 115.8722f, 0f, 0f, 0f, 700f, 700f, 500f, "MissionArea");
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_144[0]))
	{
		ENTITY::_0xC3ABCFBC7D74AFA5(iLocal_144[0], 6, 1);
	}
	if (iLocal_16 >= 9)
	{
		ENTITY::_0xC3ABCFBC7D74AFA5(Global_35, 15, 1);
		__LIB_14__::func_78(1);
	}
	if (!bLocal_182)
	{
		__LIB_4__::func_932(63, 0);
		__LIB_6__::func_350(63, 9, 1, 0);
		bLocal_182 = true;
	}
	if (MAP::DOES_BLIP_EXIST(Local_136.f_3))
	{
		if (!__LIB_6__::func_125(60))
		{
			__LIB_6__::func_350(60, 10, 1, 1);
		}
	}
	if (iLocal_16 >= 4)
	{
		if (!func_381(67108864))
		{
			if (__LIB_11__::func_429(iLocal_143) && !__LIB_6__::func_904())
			{
				if (__LIB_10__::func_364(&(cParam0->f_2106), "LS_HNT2_WLOOT", 0))
				{
					func_67(67108864);
				}
			}
		}
	}
	if (iLocal_16 >= 9)
	{
		if (CLOCK::GET_CLOCK_HOURS() < 9 || CLOCK::GET_CLOCK_HOURS() > 15)
		{
			CLOCK::ADVANCE_CLOCK_TIME_TO(11, 0, 0);
		}
		else
		{
			__LIB_9__::func_827(16, 0, 0, 0);
		}
	}
	switch (iLocal_16)
	{
		case 0:
			func_385(cParam0);
			break;
		case 1:
			func_385(cParam0);
			break;
		case 2:
			func_386();
			func_385(cParam0);
			break;
		case 3:
			func_386();
			if (func_387(cParam0))
			{
				if (!__LIB_0__::func_272(iLocal_143, 0))
				{
					iLocal_16 = 7;
				}
			}
			break;
		case 4:
			func_388(cParam0);
			break;
		case 5:
			if (func_389(cParam0))
			{
				if (iLocal_20[0] == 5)
				{
					iLocal_16 = 7;
				}
			}
			break;
		case 6:
			func_390(cParam0);
			break;
		case 7:
			func_391(cParam0);
			break;
		case 8:
			func_392(cParam0);
			break;
		case 9:
			func_393(cParam0);
			break;
		case 10:
			if (func_394(cParam0))
			{
				return 9;
			}
			break;
	}
	return 8;
}

void func_110(int iParam0, bool bParam1, bool bParam2)
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
	func_400(Global_1392626[iParam0 /*32*/].f_3, bParam2, bParam1, 0, 1);
	if (Global_1392626[iParam0 /*32*/].f_7 != -1)
	{
		__LIB_10__::func_376(Global_1392626[iParam0 /*32*/].f_7);
	}
}

bool func_131(char[4] cParam0)
{
	if (func_427(iLocal_270, Global_36))
	{
		func_428();
		return false;
	}
	if ((__LIB_10__::func_266(cParam0) == 4 || __LIB_10__::func_266(cParam0) == 5) || __LIB_10__::func_266(cParam0) == 1)
	{
		if (__LIB_0__::func_272(iLocal_143, 0))
		{
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_159) && ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_143, iLocal_159))
			{
				if (!bLocal_169)
				{
					if (func_429("pl_breakout"))
					{
						bLocal_169 = true;
					}
				}
				else if (ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_159, "U_M_M_GriSurvivalist_01"))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_144[0]))
					{
						TASK::TASK_SMART_FLEE_PED(iLocal_143, Global_35, 100f, -1, 0, 3f, iLocal_144[0]);
					}
					else
					{
						TASK::TASK_SMART_FLEE_PED(iLocal_143, Global_35, 100f, -1, 0, 3f, 0);
					}
				}
			}
			else if (!__LIB_0__::func_163(iLocal_143, 518218985))
			{
				TASK::CLEAR_PED_TASKS(iLocal_143, true, false);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_144[0]))
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_143, Global_35, 100f, -1, 0, 3f, iLocal_144[0]);
				}
				else
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_143, Global_35, 100f, -1, 0, 3f, 0);
				}
			}
		}
		if (__LIB_0__::func_266(Global_35, vLocal_308, 100f, 1, 1))
		{
			return false;
		}
	}
	return true;
}

void func_133(char[4] cParam0)
{
	int iVar0;
	iVar0 = __LIB_10__::func_266(cParam0);
	if (iVar0 == 0)
	{
		func_432(5);
	}
	else if (iVar0 == 1)
	{
		func_432(6);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_151))
	{
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iLocal_151);
	}
	if (bLocal_182)
	{
		__LIB_4__::func_932(63, 1);
		__LIB_6__::func_350(63, 9, 0, 0);
		bLocal_182 = false;
	}
	func_433(cParam0, 1);
}

void func_159(var uParam0, int iParam1, bool bParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	uParam0->f_2040 = *iParam1;
	vVar0 = { VOLUME::_GET_VOLUME_SCALE(uParam0->f_2040) };
	vVar3 = { VOLUME::_GET_VOLUME_ROTATION(uParam0->f_2040) };
	vVar6 = { VOLUME::_GET_VOLUME_COORDS(uParam0->f_2040) };
	if (bParam2)
	{
		__LIB_10__::func_496(uParam0, vVar6, vVar3, vVar0);
	}
}

void func_162(var uParam0)
{
	func_441(uParam0);
	__LIB_0__::func_11(uParam0);
	func_443();
	func_444();
	func_445();
	func_446();
	func_447();
	func_448();
	func_449();
	func_450();
}

void func_163(var uParam0)
{
	int iVar0;
	__LIB_10__::func_497(&(uParam0->f_2041), iLocal_28);
	__LIB_10__::func_497(&(uParam0->f_2041), iLocal_27);
	__LIB_10__::func_497(&(uParam0->f_2041), joaat("P_BOILER01X"));
	__LIB_10__::func_497(&(uParam0->f_2041), joaat("P_COPPERPOT02BX"));
	__LIB_10__::func_497(&(uParam0->f_2041), joaat("P_LADLE02X"));
	__LIB_10__::func_497(&(uParam0->f_2041), joaat("P_MUGCOFFEE01X"));
	__LIB_10__::func_497(&(uParam0->f_2041), joaat("A_C_HORSE_MORGAN_BAY"));
	__LIB_10__::func_497(&(uParam0->f_2041), joaat("A_C_COUGAR_01"));
	STREAMING::REQUEST_PTFX_ASSET();
	iVar0 = 0;
	while (iVar0 < 1)
	{
		__LIB_10__::func_575(&(uParam0->f_2052), Local_29[iVar0 /*2*/]);
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		TASK::REQUEST_WAYPOINT_RECORDING(Local_67[iVar0 /*4*/]);
		iVar0++;
	}
}

bool func_164(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
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
			return false;
		}
		WEAPON::_REMOVE_AMMO_FROM_PED_BY_TYPE(Global_35, iVar3, iParam1, iParam3);
		if (!bParam2)
		{
			__LIB_1__::func_158(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return false;
	}
	if (!__LIB_1__::func_707(iParam0, 1, bParam4))
	{
		return false;
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
			func_164(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return false;
		}
	}
	if (__LIB_0__::func_356(iParam0) == joaat("WEAPON"))
	{
		if (!__LIB_1__::func_433(iParam0, iParam1, 0, iParam3))
		{
			return false;
		}
	}
	else if (!__LIB_1__::func_698(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return false;
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
	func_456(iParam0, iParam1);
	return true;
}

bool func_168(var uParam0)
{
	if (!__LIB_0__::func_272(iLocal_143, 0))
	{
		return true;
	}
	else if ((__LIB_18__::func_891(iLocal_143, 0, &(uParam0->f_2077), &(uParam0->f_2105), 0, 0) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_143, true, false), 20f, true)) || FIRE::IS_ENTITY_ON_FIRE(iLocal_143))
	{
		if (!bLocal_162)
		{
			if (__LIB_0__::func_393(Global_35, iLocal_289, 0, 1) && !FIRE::IS_ENTITY_ON_FIRE(iLocal_143))
			{
				if (!__LIB_0__::func_899(&(vLocal_353[6 /*3*/])))
				{
					if (!__LIB_0__::func_899(&(vLocal_353[7 /*3*/])))
					{
						__LIB_2__::func_259(&(vLocal_353[7 /*3*/]));
					}
					else if (__LIB_9__::func_178(&(vLocal_353[7 /*3*/])) > 1.5f)
					{
						return true;
					}
				}
				else if (__LIB_0__::func_899(&(vLocal_353[7 /*3*/])))
				{
					__LIB_0__::func_37(&(vLocal_353[7 /*3*/]));
				}
			}
			else
			{
				return true;
			}
		}
		else if (__LIB_0__::func_899(&(vLocal_353[7 /*3*/])))
		{
			__LIB_0__::func_37(&(vLocal_353[7 /*3*/]));
		}
	}
	return false;
}

void func_177(char[4] cParam0)
{
	int iVar0;
	__LIB_6__::func_815(&Local_204, iLocal_143);
	if (bLocal_182)
	{
		__LIB_4__::func_932(63, 1);
		__LIB_6__::func_350(63, 9, 0, 0);
		bLocal_182 = false;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_143))
	{
		AUDIO::STOP_PED_SPEAKING(iLocal_143, false);
	}
	iVar0 = __LIB_10__::func_266(cParam0);
	if (iVar0 == 0)
	{
		func_432(5);
	}
	else
	{
		if (iVar0 != 2)
		{
			if (__LIB_1__::func_588("OBJ_SEARCH", 0, 0, -1, -1, 0) || __LIB_1__::func_588("OBJ_CONFRONT_HUN", 0, 0, -1, -1, 0))
			{
				UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
				__LIB_0__::func_769();
			}
			__LIB_8__::func_111("LS_HNT2_MCS1_SN", 0);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_144[0]))
		{
			__LIB_7__::func_345(iLocal_144[0], 0);
		}
		func_432(6);
	}
	__LIB_10__::func_285(cParam0, 8);
}

int func_185(vector3 vParam0, var uParam3)
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
		iVar0 = func_505(0, 0);
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

bool func_186(char[4] cParam0)
{
	float fVar0;
	var uVar1;
	fVar0 = 200f;
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_147[0]))
	{
		if (FIRE::IS_ENTITY_ON_FIRE(uLocal_147[0]))
		{
			StringCopy(&(cParam0->f_2208), "HUN2_FL_SPL", 16);
			return true;
		}
		if (iLocal_16 == 8)
		{
			if (ENTITY::_0x0CCEFC6C2C95DA2A(&uVar1, uLocal_147[0], 0, Global_35) == 0 && !ENTITY::_0x8DE41E9902E85756(uLocal_147[0]))
			{
				if (!__LIB_0__::func_899(&uLocal_384))
				{
					__LIB_2__::func_259(&uLocal_384);
				}
				else if (__LIB_9__::func_178(&uLocal_384) > 1.5f)
				{
					StringCopy(&(cParam0->f_2208), "HUN2_FL_SPL", 16);
					return true;
				}
			}
			else if (__LIB_0__::func_899(&uLocal_384))
			{
				__LIB_0__::func_37(&uLocal_384);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_151))
	{
		if (!bLocal_180 && !bLocal_181)
		{
			if ((ENTITY::IS_ENTITY_IN_WATER(iLocal_151) && ENTITY::GET_ENTITY_SUBMERGED_LEVEL(iLocal_151) > 0.8f) || FIRE::IS_ENTITY_ON_FIRE(iLocal_151))
			{
				StringCopy(&(cParam0->f_2208), "HUN2_FL_SPL", 16);
				return true;
			}
		}
	}
	if (__LIB_2__::func_173(PLAYER::GET_PLAYER_INDEX(), 1, 0, 1))
	{
		StringCopy(&(cParam0->f_2208), "HUN2_FL_LAW", 16);
		return true;
	}
	if (iLocal_16 == 9 || iLocal_16 == 10)
	{
		if (bLocal_180 && (PED::IS_PED_DEAD_OR_DYING(__LIB_0__::func_398(0), true) || TASK::IS_PED_IN_WRITHE(__LIB_0__::func_398(0))))
		{
			StringCopy(&(cParam0->f_2208), "HUN2_FL_HRSDED", 16);
			return true;
		}
		if (bLocal_181 && (PED::IS_PED_DEAD_OR_DYING(__LIB_0__::func_398(1), true) || TASK::IS_PED_IN_WRITHE(__LIB_0__::func_398(1))))
		{
			StringCopy(&(cParam0->f_2208), "HUN2_FL_HRSDED", 16);
			return true;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_144[1]))
	{
		if (__LIB_0__::func_255(iLocal_144[1], 1) || TASK::IS_PED_IN_WRITHE(iLocal_144[1]))
		{
			StringCopy(&(cParam0->f_2208), "HUN2_FL_HRSDED", 16);
			return true;
		}
	}
	if (cParam0->f_1 == 8)
	{
		if (iLocal_16 <= 4)
		{
			if ((!__LIB_0__::func_272(iLocal_143, 0) && iLocal_18 != 13) && iLocal_18 != 12)
			{
				StringCopy(&(cParam0->f_2208), "HUN2_FL_DEAD", 16);
				return true;
			}
			else if (func_511(iLocal_143, fVar0))
			{
				if (!PED::IS_PED_DEAD_OR_DYING(iLocal_143, true))
				{
					StringCopy(&(cParam0->f_2208), "HUN2_FL_WINLT", 16);
					return true;
				}
			}
		}
		else if (func_512())
		{
			StringCopy(&(cParam0->f_2208), "HUN2_FL_CAVELT", 16);
			return true;
		}
		if (iLocal_16 < 5)
		{
			if (MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iLocal_143, false, false), joaat("WEAPON_THROWN_MOLOTOV"), 8f, true) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iLocal_143, false, false), joaat("WEAPON_THROWN_DYNAMITE"), 8f, true))
			{
				StringCopy(&(cParam0->f_2208), "HUN2_FL_WINAT", 16);
				return true;
			}
			if (ENTITY::IS_ENTITY_DEAD(iLocal_144[0]))
			{
				StringCopy(&(cParam0->f_2208), "HUN2_FL_WIHK", 16);
				return true;
			}
			else if (MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iLocal_144[0], false, false), joaat("WEAPON_THROWN_MOLOTOV"), 8f, true) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iLocal_144[0], false, false), joaat("WEAPON_THROWN_DYNAMITE"), 8f, true))
			{
				StringCopy(&(cParam0->f_2208), "HUN2_FL_WIHA", 16);
				return true;
			}
		}
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_286))
	{
		if (!__LIB_1__::func_205(Global_35, iLocal_286, 1, 0))
		{
			StringCopy(&(cParam0->f_2208), "HUN2_FL_FAR", 16);
			return true;
		}
	}
	return false;
}

bool func_200(var uParam0)
{
	if (bLocal_413)
	{
		return true;
	}
	if (!func_532(uParam0))
	{
		return false;
	}
	else if (!func_533())
	{
		return false;
	}
	else if (!func_534())
	{
		return false;
	}
	else if (!func_535(uParam0))
	{
		return false;
	}
	else if (!func_536())
	{
		return false;
	}
	bLocal_413 = true;
	return true;
}

bool func_201()
{
	if (!bLocal_160)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_159))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_159, true, false))
			{
				bLocal_160 = true;
				return bLocal_160;
			}
		}
		else
		{
			iLocal_159 = ANIMSCENE::_CREATE_ANIM_SCENE("script@proc@loansharking@hunter@lshnt2@leadin@mcs1@leadin_ilo", 4, "pl_leadin", false, true);
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_159))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(iLocal_159);
				func_537();
			}
		}
	}
	return bLocal_160;
}

char* func_213()
{
	if (iLocal_26 == 0 || iLocal_26 == 1)
	{
		return "LSHNT2_MCS1";
	}
	return "LSHNT2_TEMP_SHOP";
}

void func_216(var uParam0)
{
	if (!func_83(32768))
	{
		if (__LIB_0__::func_272(iLocal_144[0], 0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(iLocal_144[0], -1769.84f, -177.44f, 194.48f, -69.6f, false, true);
			func_80(32768);
		}
	}
	if (!func_83(524288))
	{
		if (__LIB_0__::func_272(iLocal_144[1], 0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(iLocal_144[1], -1769.78f, -180.05f, 194.61f, -47.06f, false, true);
			ENTITY::_0x9587913B9E772D29(iLocal_144[1], 0);
			TASK::TASK_STAND_STILL(iLocal_144[1], -1);
			func_80(524288);
		}
		else
		{
			__LIB_12__::func_789(&(iLocal_144[1]), -1769.78f, -180.05f, 194.61f, -47.06f, 1, 1, 1, 1);
		}
	}
	else if (__LIB_0__::func_272(iLocal_144[1], 0))
	{
		if (!__LIB_0__::func_163(iLocal_144[1], -982327190))
		{
			TASK::TASK_STAND_STILL(iLocal_144[1], -1);
		}
	}
	func_567(uParam0, 0);
}

int func_218(var uParam0)
{
	if (!func_83(32768))
	{
		if (__LIB_0__::func_272(iLocal_144[0], 0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(iLocal_144[0], -1769.84f, -177.44f, 194.48f, -69.6f, false, true);
			func_80(32768);
		}
		return 0;
	}
	if (!func_83(524288))
	{
		if (__LIB_0__::func_272(iLocal_144[1], 0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(iLocal_144[1], -1769.773f, -180.0528f, 193.6738f, -47.04f, false, true);
			TASK::TASK_STAND_STILL(iLocal_144[1], -1);
			func_80(524288);
		}
		else
		{
			__LIB_12__::func_789(&(iLocal_144[1]), -1769.773f, -180.0528f, 193.6738f, -47.04f, 1, 1, 1, 1);
		}
		return 0;
	}
	else if (__LIB_0__::func_272(iLocal_144[1], 0))
	{
		if (!__LIB_0__::func_163(iLocal_144[1], -982327190))
		{
			TASK::TASK_STAND_STILL(iLocal_144[1], -1);
		}
	}
	bLocal_423 = true;
	return 1;
}

void func_221(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam1))
	{
		return;
	}
	__LIB_10__::func_405(uParam0);
	uParam0->f_4 = iParam1;
	__LIB_1__::func_737(uParam0, iParam2, iParam3, iParam4, iParam5);
}

void func_226(char[4] cParam0)
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
					if (__LIB_0__::func_899(&(cParam0->f_17.f_12)))
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
			if (func_573(Global_35, Global_1392626[*cParam0 /*32*/].f_24, &(cParam0->f_17.f_12), cParam0->f_17.f_2, cParam0->f_17.f_3, cParam0->f_17.f_4, cParam0->f_17.f_5, cParam0->f_17.f_6, cParam0->f_17.f_7, 0, 1, 1, 1))
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
				if ((PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true) && !__LIB_0__::func_163(Global_35, 501393341)) || (PED::IS_PED_IN_ANY_VEHICLE(Global_35, true) && !__LIB_0__::func_163(Global_35, -828834893)))
				{
					cParam0->f_17 = 0;
				}
			}
			break;
	}
}

void func_227(var uParam0, struct<4> Param1, int iParam5)
{
	switch (__LIB_0__::func_78(uParam0))
	{
		case 0:
			__LIB_10__::func_540(uParam0, Param1, iParam5);
			break;
		case 1:
			__LIB_10__::func_480(uParam0);
			break;
		case 2:
			func_577(uParam0);
			break;
	}
}

bool func_228(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
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
		uParam0->f_1662 = __LIB_2__::func_173(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1);
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
			func_579(uParam0, iParam5, bParam6);
		}
		else if (__LIB_0__::func_78(uParam0) > 3)
		{
			if (__LIB_0__::func_81(uParam0) == 0)
			{
				if (!__LIB_10__::func_278(uParam0, 524288))
				{
					func_581(uParam0);
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
						__LIB_10__::func_436(uParam0, uParam0->f_782[uParam0->f_1454 /*41*/].f_27, uParam0->f_1111[uParam0->f_1454 /*22*/].f_1, 1065353216 /* Float: 1f */);
					}
				}
				else if (uParam0->f_1454 >= 0)
				{
					__LIB_10__::func_436(uParam0, uParam0->f_782[uParam0->f_1454 /*41*/].f_27, uParam0->f_1111[uParam0->f_1454 /*22*/].f_1, 1065353216 /* Float: 1f */);
				}
				func_590(uParam0);
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
		func_594(uParam0, iParam5);
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
			__LIB_10__::func_480(uParam0);
			break;
		case 2:
			func_577(uParam0);
			break;
		case 3:
			if (__LIB_10__::func_277(uParam0))
			{
				__LIB_3__::func_155(2);
				__LIB_10__::func_436(uParam0, uParam0->f_782[uParam0->f_1450 /*41*/].f_27, uParam0->f_1111[uParam0->f_1450 /*22*/].f_1, 1065353216 /* Float: 1f */);
				__LIB_2__::func_259(&(uParam0->f_1638));
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
				if (__LIB_10__::func_297(uParam0))
				{
					__LIB_10__::func_291(uParam0, 2);
					__LIB_0__::func_115(uParam0, 6);
				}
			}
			if (__LIB_0__::func_78(uParam0) == 6)
			{
				if (__LIB_10__::func_298(uParam0))
				{
					__LIB_10__::func_291(uParam0, 3);
					__LIB_0__::func_115(uParam0, 8);
				}
			}
			if (uParam0->f_1451 >= 0 || __LIB_9__::func_178(&(uParam0->f_1638)) >= 15f)
			{
				if (func_603(uParam0, iParam5))
				{
					if (__LIB_10__::func_299(uParam0))
					{
						uParam0->f_1451 = __LIB_10__::func_351(uParam0);
						__LIB_2__::func_259(&(uParam0->f_1638));
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
			if (func_603(uParam0, iParam5))
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

int func_231(int iParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
		func_608(iParam0, iParam1, uParam3, fParam2, fVar8, sParam7);
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
		if (__LIB_2__::func_525(*iParam0, iParam1, uParam3))
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
						return func_231(iParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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
					__LIB_18__::func_773(iParam1, uParam3);
					if (func_617(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
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
					func_617(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					__LIB_8__::func_963(iParam0, __LIB_3__::func_598(iParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
					__LIB_18__::func_773(iParam1, uParam3);
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
					else if (!(MISC::IS_BIT_SET(*iParam1, 13) || func_626(iParam1)))
					{
					}
					else if (!__LIB_13__::func_51(iParam1))
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
				if (func_629(iParam0, iParam1, fParam4, bVar6))
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
					func_617(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
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
				if (func_629(iParam0, iParam1, fParam4, bVar6))
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

bool func_234(char[4] cParam0)
{
	if (!bLocal_162)
	{
		func_631(cParam0);
	}
	if (!bLocal_170)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_143))
		{
			AUDIO::STOP_PED_SPEAKING(iLocal_143, true);
			bLocal_170 = true;
		}
	}
	func_632(cParam0);
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_268))
	{
		if (!bLocal_412)
		{
			if (fLocal_269 > 1f)
			{
				fLocal_269 = 1f;
			}
			else
			{
				fLocal_269 = (fLocal_269 + 0.005f);
			}
			GRAPHICS::SET_PARTICLE_FX_LOOPED_ALPHA(iLocal_268, fLocal_269);
			if (fLocal_269 == 1f)
			{
				bLocal_412 = true;
			}
		}
	}
	if (__LIB_0__::func_71(Global_35) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, true))
	{
		__LIB_1__::func_448(Global_35, vLocal_308, 0, 30f, 20f, 15f, 9f, 1, 1, 1, 0);
	}
	if (__LIB_0__::func_48(Global_35, iLocal_143, 15f, 1))
	{
		TASK::TASK_LOOK_AT_ENTITY(Global_35, iLocal_143, 500, 0, 51, 0);
	}
	if (!func_381(1073741824 /* Float: 2f */))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_143) && __LIB_0__::func_266(Global_35, vLocal_308, 25f, 1, 1))
		{
			if (__LIB_10__::func_364(&(cParam0->f_2106), "LS_HNT2_MCS1_SN", 0))
			{
				func_67(1073741824 /* Float: 2f */);
			}
		}
	}
	else if (!__LIB_6__::func_903("LS_HNT2_MCS1_SN") && !func_381(-2147483648))
	{
		func_636(1073741824 /* Float: 2f */);
	}
	if (!bLocal_161)
	{
		if (__LIB_0__::func_266(Global_35, vLocal_308, 18f, 1, 1) && MAP::DOES_BLIP_EXIST(Global_1392626[1 /*32*/]))
		{
			__LIB_6__::func_736(&Local_204, &Local_186, 0, Global_1392626[1 /*32*/], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
			__LIB_2__::func_602(&(Local_186[0 /*17*/]), "OBJ_INTERACT", " ", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
			__LIB_2__::func_411(&(Local_186[0 /*17*/]), 0, 0);
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), iLocal_143, 8, 0, 1);
			bLocal_161 = true;
		}
	}
	else if (!bLocal_162)
	{
		if (!__LIB_0__::func_899(&(vLocal_353[6 /*3*/])))
		{
			if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_143, true, false), 20f, true) || ((ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_35, iLocal_143) && !__LIB_3__::func_528(iLocal_143, Global_35)) && __LIB_0__::func_393(Global_35, iLocal_289, 0, 1)))
			{
				__LIB_2__::func_259(&(vLocal_353[6 /*3*/]));
			}
			if (__LIB_0__::func_393(Global_35, iLocal_290, 0, 1))
			{
				__LIB_10__::func_404(&(cParam0->f_32), "MultiStart");
				__LIB_3__::func_732(0);
				__LIB_2__::func_480(&Local_186, 1, 1, 1, 0);
				Local_204.f_2 = 0;
				__LIB_1__::func_480(&iLocal_143);
				__LIB_6__::func_815(&Local_204, iLocal_143);
				return true;
			}
		}
		else if (__LIB_9__::func_178(&(vLocal_353[6 /*3*/])) > 0.8f)
		{
			if (!__LIB_3__::func_528(iLocal_143, Global_35))
			{
				__LIB_0__::func_37(&(vLocal_353[6 /*3*/]));
			}
			else
			{
				__LIB_0__::func_37(&(vLocal_353[6 /*3*/]));
				return false;
			}
			if (__LIB_6__::func_903("LS_HNT2_MCS1_SN"))
			{
				__LIB_8__::func_111("LS_HNT2_MCS1_SN", 0);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_143))
				{
					AUDIO::STOP_PED_SPEAKING(iLocal_143, false);
				}
			}
			func_67(-2147483648);
			__LIB_2__::func_480(&Local_186, 1, 1, 1, 0);
			Local_204.f_2 = 0;
			__LIB_1__::func_480(&iLocal_143);
			TASK::TASK_LOOK_AT_ENTITY(Global_35, iLocal_143, 5000, 0, 51, 0);
			WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 1, 0);
			if (__LIB_0__::func_71(Global_35))
			{
				TASK::TASK_DISMOUNT_ANIMAL(Global_35, 0, 0, 0, 0, 0);
			}
			else if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(Global_35, 0, 0);
			}
			UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
			bLocal_162 = true;
			bLocal_166 = true;
			MISC::SET_BIT(&(Local_204.f_21), 3);
			MISC::SET_BIT(&(Local_204.f_21), 20);
			return false;
		}
		iLocal_265 = func_231(&iLocal_143, &Local_204, 10f, &Local_186, 0f, 3, 0, 0, 1, 0, 0, 2, -1082130432 /* Float: -1f */);
		if (__LIB_0__::func_48(Global_35, iLocal_143, 5f, 1) && __LIB_0__::func_393(Global_35, iLocal_288, 0, 1))
		{
			if (!bLocal_164)
			{
				__LIB_2__::func_411(&(Local_186[0 /*17*/]), 1, 0);
				bLocal_164 = true;
			}
		}
		else if (bLocal_164)
		{
			__LIB_2__::func_411(&(Local_186[0 /*17*/]), 0, 0);
			bLocal_164 = false;
		}
		if (iLocal_265 == 0)
		{
			__LIB_2__::func_480(&Local_186, 1, 1, 1, 0);
			Local_204.f_2 = 0;
			__LIB_1__::func_480(&iLocal_143);
			TASK::TASK_LOOK_AT_ENTITY(Global_35, iLocal_143, 5000, 0, 51, 0);
			WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 1, 0);
			if (__LIB_0__::func_71(Global_35))
			{
				if (__LIB_3__::func_547(Global_35, iLocal_143, 1f) == 2)
				{
					TASK::TASK_DISMOUNT_ANIMAL(Global_35, 262144, 0, 0, 0, 0);
				}
				else
				{
					TASK::TASK_DISMOUNT_ANIMAL(Global_35, 131072, 0, 0, 0, 0);
				}
			}
			else if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(Global_35, 0, 0);
			}
			UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
			bLocal_162 = true;
		}
	}
	else if (!bLocal_163)
	{
		func_608(&iLocal_143, &Local_204, &Local_186, 10f, -1082130432 /* Float: -1f */, 0);
		if (bLocal_166)
		{
			if (func_429("pl_leadin_triggered_by_other"))
			{
				bLocal_163 = true;
			}
			return false;
		}
		if (!PED::IS_PED_ON_FOOT(Global_35))
		{
			__LIB_14__::func_20();
			return false;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_144[1]))
		{
			if (!__LIB_0__::func_163(iLocal_144[1], 713668775) && !__LIB_0__::func_48(iLocal_144[1], Global_35, 1.5f, 1))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_144[1], -1769.918f, -177.0914f, 193.5797f, 1f, -1, 0.25f, 0, 40000f);
			}
		}
		if (!bLocal_165)
		{
			__LIB_14__::func_20();
			if (!__LIB_0__::func_48(Global_35, iLocal_143, 1.5f, 1))
			{
				if (!__LIB_0__::func_163(Global_35, 713668775))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Global_35, -1780.186f, -181.4939f, 193.874f, 1f, 20000, 0.25f, 0, 40000f);
				}
			}
			else
			{
				bLocal_165 = true;
				return false;
			}
		}
		else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_159))
		{
			ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_159, "b_breakout", true, false);
			__LIB_14__::func_20();
			bLocal_163 = true;
		}
	}
	else if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_159) > 0.99f)
	{
		func_608(&iLocal_143, &Local_204, &Local_186, 10f, -1082130432 /* Float: -1f */, 0);
		__LIB_3__::func_732(0);
		__LIB_14__::func_20();
		__LIB_6__::func_815(&Local_204, iLocal_143);
		if (__LIB_6__::func_903("LS_HNT2_MCS1_SN"))
		{
			__LIB_8__::func_111("LS_HNT2_MCS1_SN", 0);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_143))
		{
			AUDIO::STOP_PED_SPEAKING(iLocal_143, false);
		}
		return true;
	}
	else
	{
		if (!func_381(-2147483648))
		{
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_159) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_159, false))
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_159) > 5.33f)
				{
					if (__LIB_6__::func_903("LS_HNT2_MCS1_SN"))
					{
						__LIB_8__::func_111("LS_HNT2_MCS1_SN", 0);
					}
					func_67(-2147483648);
				}
			}
		}
		func_608(&iLocal_143, &Local_204, &Local_186, 10f, -1082130432 /* Float: -1f */, 0);
		if (bLocal_166)
		{
			if (!bLocal_167)
			{
				if (PED::IS_PED_ON_FOOT(Global_35))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Global_35, -1780.081f, -181.8477f, 193.8628f, 1f, 20000, 0.25f, 0, 46.4253f);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_144[1]))
					{
						if (!__LIB_0__::func_163(iLocal_144[1], 713668775))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_144[1], -1769.918f, -177.0914f, 193.5797f, 1f, -1, 0.25f, 0, 40000f);
						}
					}
					bLocal_167 = true;
				}
			}
		}
		__LIB_14__::func_20();
	}
	return false;
}

int func_237(char[4] cParam0)
{
	int iVar0;
	__LIB_3__::func_10(Global_35);
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (!ENTITY::IS_ENTITY_DEAD(iVar0) && __LIB_0__::func_266(iVar0, vLocal_308, 100f, 1, 1))
	{
		__LIB_10__::func_552(&(cParam0->f_32), -1746.14f, -199.36f, 185.57f, 234.55f, 1);
	}
	return 7;
}

int func_238(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	iParam1 = __LIB_9__::func_348(PLAYER::PLAYER_PED_ID(), iParam0, iParam1, bParam2);
	if (iParam1 <= 0)
	{
		return iParam1;
	}
	iVar0 = __LIB_8__::func_716(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_240(&iVar0, iParam0, &iParam1, bParam3, iParam4);
	}
	return iParam1;
}

int func_240(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
	if (func_651(*iParam0, iParam1, *iParam2, bParam3, iParam4))
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

int func_241(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = __LIB_1__::func_614(iParam0, 0, 0);
	if (iVar0 >= iParam1)
	{
		iVar1 = iParam1;
	}
	else
	{
		iVar1 = iVar0;
		iVar2 = (iParam1 - iVar1);
	}
	if (iVar1 > 0)
	{
		if (!func_164(iParam0, iVar1, bParam2, iParam3, 0))
		{
			return 0;
		}
	}
	if (iVar2 > 0)
	{
		if (!__LIB_9__::func_988(iParam0, iVar2, bParam2, iParam3))
		{
			return 0;
		}
		if (!bParam2)
		{
			__LIB_0__::func_45("SHOP_SELL_HORSE_SATCHEL", 10000, 0, 0, 0, 1);
		}
	}
	return 1;
}

void func_242(int iParam0, vector3 vParam1, float fParam4, bool bParam5)
{
	if (__LIB_0__::func_272(iParam0, 0))
	{
		if (PED::IS_PED_ON_MOUNT(iParam0))
		{
			if (__LIB_0__::func_272(PED::GET_MOUNT(iParam0), 0))
			{
				if (bParam5)
				{
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(PED::GET_MOUNT(iParam0), vParam1, fParam4, false, true);
				}
				else
				{
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(PED::GET_MOUNT(iParam0), vParam1, fParam4, true, false, true);
				}
			}
		}
		else if (iParam0 == iLocal_143)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_144[0]))
			{
				iLocal_144[0] = __LIB_13__::func_168(iParam0);
			}
			else
			{
				__LIB_1__::func_571(iLocal_143, iLocal_144[0], 0, -1, 1);
			}
		}
		else if (iParam0 == Global_35)
		{
			if (!__LIB_0__::func_272(iLocal_144[1], 0))
			{
				if (__LIB_12__::func_789(&(iLocal_144[1]), vParam1.x, vParam1.y, vParam1.z, fParam4, 1, 1, 1, 1))
				{
				}
			}
			else
			{
				if (bParam5)
				{
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(iLocal_144[1], vParam1, fParam4, false, true);
				}
				else
				{
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_144[1], vParam1, fParam4, true, false, true);
				}
				__LIB_1__::func_571(Global_35, iLocal_144[1], 0, -1, 1);
			}
		}
	}
}

void func_248(bool bParam0)
{
	AUDIO::_0x0D7FD6A55FD63AEF(7, 3, bParam0);
	AUDIO::_0x0D7FD6A55FD63AEF(25, 3, bParam0);
	AUDIO::_0x0D7FD6A55FD63AEF(21, 3, bParam0);
	AUDIO::_0x0D7FD6A55FD63AEF(19, 3, bParam0);
	AUDIO::_0x0D7FD6A55FD63AEF(23, 3, bParam0);
	AUDIO::_0x0D7FD6A55FD63AEF(22, 3, bParam0);
	if (bParam0)
	{
		PED::_0x1E017404784AA6A3(iLocal_143, joaat("LSHUN_RIDE1"));
	}
	else
	{
		PED::_0x2B4CE170DE09F346(iLocal_143, joaat("LSHUN_RIDE1"));
	}
}

void func_250(int iParam0)
{
	if (iParam0 == 0)
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_147[iParam0], -2144.684f, 99.603f, 250.7095f, 10.1885f, true, false, true);
		ENTITY::SET_ENTITY_INVINCIBLE(uLocal_147[iParam0], true);
		ENTITY::SET_ENTITY_VISIBLE(uLocal_147[iParam0], false);
		PED::SET_RAGDOLL_BLOCKING_FLAGS(uLocal_147[iParam0], 1);
		PED::SET_PED_CAN_TORSO_REACT_IK(uLocal_147[iParam0], false);
		PED::SET_PED_CAN_BE_TARGETTED(uLocal_147[iParam0], false);
		ENTITY::_0x18FF3110CF47115D(uLocal_147[iParam0], 10, 0);
		PED::_0x6569F31A01B4C097(uLocal_147[iParam0], 4, 0);
		bLocal_402 = true;
		func_664(0, iParam0);
	}
}

bool func_251(int iParam0, int iParam1, int iParam2, vector3 vParam3, float fParam6, int iParam7, float fParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	if (!__LIB_0__::func_272(*iParam1, 0))
	{
		if (!__LIB_0__::func_1(Global_1392626[iParam0 /*32*/].f_9, 256) || CAM::IS_SCREEN_FADED_OUT())
		{
			*iParam1 = __LIB_8__::func_931(iParam2, vParam3, fParam6, iParam7, fParam8, bParam9, bParam10, bParam11, bParam12, bParam13, 0, 0, 0);
			if (__LIB_0__::func_272(*iParam1, 0))
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

void func_259()
{
	if (!func_83(268435456))
	{
		func_696();
		func_80(268435456);
	}
}

bool func_268()
{
	return func_97(joaat("PROVISION_LOANSHARK_SKINS"), 1, 0, 0, 0, -897553835, 0, 0, 0, 0);
}

void func_318(int iParam0)
{
	char* sVar0;
	switch (iParam0)
	{
		case joaat("DOCUMENT_TAXIDERMY_ORDER_1"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_01"), 1);
			__LIB_1__::func_240(437, 0);
			__LIB_1__::func_240(440, 0);
			func_770(joaat("TAXIDERMY_ORDER_01"), joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_9__::func_355(51, 0, 0, joaat("TAXIDERMY_ORDER_01"), sVar0, 0, -1, 0);
			__LIB_1__::func_450(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_01"), 20), 1, 0);
			__LIB_0__::func_433(1);
			func_771(-748969569, 0, 0);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_2"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_02"), 1);
			func_770(joaat("TAXIDERMY_ORDER_02"), joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_9__::func_355(51, 0, 0, joaat("TAXIDERMY_ORDER_02"), sVar0, 0, -1, 0);
			__LIB_1__::func_450(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_02"), 20), 1, 0);
			__LIB_0__::func_433(8);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_3"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_03"), 1);
			func_770(joaat("TAXIDERMY_ORDER_03"), joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_9__::func_355(51, 0, 0, joaat("TAXIDERMY_ORDER_03"), sVar0, 0, -1, 0);
			__LIB_1__::func_450(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_03"), 20), 1, 0);
			__LIB_0__::func_433(64);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_4"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_04"), 1);
			func_770(joaat("TAXIDERMY_ORDER_04"), joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_9__::func_355(51, 0, 0, joaat("TAXIDERMY_ORDER_04"), sVar0, 0, -1, 0);
			__LIB_1__::func_450(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_04"), 20), 1, 0);
			__LIB_0__::func_433(512);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_5"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_05"), 1);
			__LIB_1__::func_240(438, 0);
			func_770(joaat("TAXIDERMY_ORDER_05"), joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_9__::func_355(51, 0, 0, joaat("TAXIDERMY_ORDER_05"), sVar0, 0, -1, 0);
			__LIB_1__::func_450(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_05"), 20), 1, 0);
			__LIB_0__::func_433(32768);
			break;
		default:
			__LIB_1__::func_240(439, 0);
			break;
	}
}

void func_322(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, joaat("TAXIDERMY"), joaat("TAXIDERMY_ORDER"));
		if (__LIB_1__::func_707(__LIB_1__::func_35(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_780(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_781(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

int func_368(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, var uParam4, char[4] cParam5)
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
					__LIB_10__::func_563(uParam4, &cParam0);
				}
				else if (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_228))
				{
					__LIB_8__::func_726(uParam4, 4);
					return 0;
				}
				else if (__LIB_10__::func_302(uParam4, 2))
				{
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_221);
				}
				__LIB_8__::func_726(uParam4, 3);
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
				__LIB_2__::func_259(&(uParam4->f_1));
				__LIB_8__::func_726(uParam4, 2);
			}
			else
			{
				if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				__LIB_10__::func_466(uParam4);
				if (!__LIB_0__::func_899(&(uParam4->f_1)))
				{
					__LIB_4__::func_89(&(uParam4->f_1), 0);
				}
				else if (__LIB_1__::func_583(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_228))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_228);
					}
					__LIB_8__::func_726(uParam4, 4);
				}
			}
			break;
		case 2:
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_228) || !ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam4->f_228, true, false))
			{
				if (__LIB_10__::func_560(uParam4, &cParam0, 1, 1))
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam4->f_228, true, false))
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
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_228))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_228);
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
					__LIB_10__::func_563(uParam4, &cParam0);
					__LIB_8__::func_726(uParam4, 3);
				}
				else
				{
					SCRIPTS::SHUTDOWN_LOADING_SCREEN();
				}
			}
			else if (__LIB_1__::func_583(&(uParam4->f_1)) >= 60f)
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_228))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_228);
				}
				__LIB_8__::func_726(uParam4, 4);
			}
			break;
		case 3:
			func_837(uParam4);
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
				func_844(uParam4);
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
						__LIB_2__::func_259(&(uParam4->f_1));
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
						__LIB_0__::func_88(uParam4, 512);
						__LIB_10__::func_288(uParam4, 67108864, 1);
						__LIB_8__::func_726(uParam4, 4);
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
					__LIB_6__::func_726(&(uParam4->f_285), 0);
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
				func_844(uParam4);
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
						__LIB_8__::func_726(uParam4, 3);
					}
					else if (__LIB_1__::func_583(&(uParam4->f_1)) >= 30f)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_228) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_228))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_228, false);
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

void func_372()
{
	if (iLocal_16 >= 3)
	{
		if (!func_848(0))
		{
			func_849();
		}
		else if (!func_848(1))
		{
			func_850();
		}
		else if (!func_848(2))
		{
			func_851();
		}
		else if (!func_848(3))
		{
			func_852();
		}
		else if (!func_848(4))
		{
			func_853();
		}
		else if (!func_848(5))
		{
			func_854();
		}
	}
}

void func_373(char[4] cParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_143))
	{
		vLocal_311 = { ENTITY::GET_ENTITY_COORDS(iLocal_143, false, false) };
		if (iLocal_16 == 5)
		{
			func_855(cParam0);
		}
	}
}

void func_374()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!MISC::IS_BIT_SET(iLocal_297, iVar0))
		{
			if (func_83(iLocal_23[iVar0]))
			{
				func_856(iVar0);
			}
			else
			{
				iVar0++;
			}
		}
	}
}

void func_375()
{
	if (!__LIB_0__::func_27(iLocal_14, 2048))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_143))
		{
			if (__LIB_0__::func_48(Global_35, iLocal_143, 80f, 1))
			{
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_143, "LSHNT_winton_group", 0f);
				__LIB_1__::func_683(&iLocal_14, 2048);
			}
		}
	}
	if (!__LIB_0__::func_27(iLocal_14, 1024))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_147[0]))
		{
			if (__LIB_0__::func_48(Global_35, uLocal_147[0], 80f, 1))
			{
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uLocal_147[0], "LSHNT_cougar_group", 0f);
				__LIB_1__::func_683(&iLocal_14, 1024);
			}
		}
	}
	if (!__LIB_0__::func_27(iLocal_14, 1))
	{
		AUDIO::_0xA6A3A3F96B8B030E();
		__LIB_1__::func_683(&iLocal_14, 1);
	}
	else
	{
		switch (iLocal_16)
		{
			case 0:
			case 1:
			case 2:
				if (!__LIB_0__::func_27(iLocal_14, 2))
				{
					AUDIO::_0x2B9C37C01BF25EDB("ride_to_cave");
					__LIB_1__::func_683(&iLocal_14, 2);
				}
				break;
			case 3:
				if (!__LIB_0__::func_27(iLocal_14, 4))
				{
					AUDIO::_0x2B9C37C01BF25EDB("enter_cave");
					__LIB_1__::func_683(&iLocal_14, 4);
				}
				break;
			case 4:
				if (!__LIB_0__::func_27(iLocal_14, 8))
				{
					AUDIO::_0x2B9C37C01BF25EDB("search_cave");
					__LIB_1__::func_683(&iLocal_14, 8);
				}
				else if (!__LIB_0__::func_27(iLocal_14, 16))
				{
					if (iLocal_18 == 12)
					{
						AUDIO::_0x2B9C37C01BF25EDB("winton_attacked");
						__LIB_1__::func_683(&iLocal_14, 16);
					}
				}
				break;
			case 5:
				if (!__LIB_0__::func_27(iLocal_14, 32))
				{
					AUDIO::_0x2B9C37C01BF25EDB("find_winton");
					__LIB_1__::func_683(&iLocal_14, 32);
				}
				break;
			case 7:
				if (!__LIB_0__::func_27(iLocal_14, 64))
				{
					AUDIO::_0x2B9C37C01BF25EDB("kill_cougar");
					__LIB_1__::func_683(&iLocal_14, 64);
				}
				break;
			case 8:
				if (!__LIB_0__::func_27(iLocal_14, 128))
				{
					AUDIO::_0x2B9C37C01BF25EDB("skin_cougar");
					__LIB_1__::func_683(&iLocal_14, 128);
				}
				break;
			case 9:
			case 10:
				if (!__LIB_0__::func_27(iLocal_14, 256))
				{
					AUDIO::_0x2B9C37C01BF25EDB("return_to_horse");
					__LIB_1__::func_683(&iLocal_14, 256);
				}
				else if (!__LIB_0__::func_27(iLocal_14, 512))
				{
					if (__LIB_0__::func_71(Global_35))
					{
						AUDIO::_0x9428447DED71FC7E("LSHNT_Scenes");
						__LIB_1__::func_683(&iLocal_14, 512);
					}
				}
				break;
		}
	}
}

bool func_381(int iParam0)
{
	return __LIB_0__::func_27(iLocal_296, iParam0);
}

int func_385(char[4] cParam0)
{
	func_74();
	func_876(cParam0);
	switch (iLocal_15)
	{
		case 0:
			func_877(cParam0);
			break;
		case 1:
			if (func_878(cParam0))
			{
				__LIB_13__::func_266();
			}
			break;
		case 2:
			func_880();
			return 1;
	}
	return 0;
}

void func_386()
{
	func_573(Global_35, -2120.447f, 25.29967f, 265.4346f, &(vLocal_353[0 /*3*/]), 20f, 17f, 15f, 12f, 1f, 0, 0, 1, 1, 1);
	if (!PED::IS_PED_ON_MOUNT(Global_35) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uLocal_276[0], true, 0))
	{
		func_80(4);
	}
}

bool func_387(char[4] cParam0)
{
	func_876(cParam0);
	func_881();
	func_428();
	func_882();
	func_883(cParam0);
	func_74();
	switch (iLocal_15)
	{
		case 0:
			__LIB_10__::func_378(*cParam0, func_41(2), func_41(3), 2, 3);
			func_636(128);
			PED::SET_PED_CONFIG_FLAG(Global_35, 141, true);
			func_248(0);
			PLAYER::_0x3946FC742AC305CD(PLAYER::GET_PLAYER_INDEX(), iLocal_143, "LS_HUNTER", -2121.57f, 69.19025f, 256.3475f, 0, "LS_HUNTER");
			func_85();
			func_86();
			func_84();
			__LIB_13__::func_266();
			break;
		case 1:
			if (func_884())
			{
				__LIB_13__::func_266();
			}
			else if (!__LIB_0__::func_272(iLocal_143, 0))
			{
				__LIB_13__::func_266();
			}
			else if (func_885(&Global_35, 1))
			{
				__LIB_13__::func_266();
			}
			break;
		case 2:
			func_84();
			func_71(11);
			return true;
	}
	return false;
}

void func_388(char[4] cParam0)
{
	func_876(cParam0);
	func_881();
	func_883(cParam0);
	func_882();
	func_428();
	if (!func_83(268435456))
	{
		func_259();
	}
	func_886();
	switch (iLocal_15)
	{
		case 0:
			if (!__LIB_6__::func_904())
			{
				if (__LIB_10__::func_364(&(cParam0->f_2106), "LS_HNT2_SPLI", 0))
				{
					func_887();
					__LIB_13__::func_266();
				}
			}
			if (!__LIB_0__::func_272(iLocal_143, 0) || !__LIB_0__::func_272(uLocal_147[0], 0))
			{
				iLocal_15 = 2;
			}
			else if (iLocal_20[0] == 5)
			{
				iLocal_15 = 2;
			}
			break;
		case 1:
			if (!__LIB_0__::func_272(iLocal_143, 0) || !__LIB_0__::func_272(uLocal_147[0], 0))
			{
				__LIB_13__::func_266();
				return;
			}
			else if (iLocal_20[0] == 5)
			{
				__LIB_13__::func_266();
				return;
			}
			else if (__LIB_6__::func_903("LS_HNT2_SCREAM1"))
			{
				__LIB_2__::func_259(&uLocal_381);
				__LIB_13__::func_266();
				return;
			}
			if (!__LIB_6__::func_903("LS_HNT2_SPLI"))
			{
				if (!func_381(16384))
				{
					if (__LIB_10__::func_364(&(cParam0->f_2106), "LS_HNT2_SPLIPLR", 0))
					{
						func_888(32);
						func_67(16384);
					}
				}
				else
				{
					if (!__LIB_1__::func_588("OBJ_SEARCH_CAVE", 0, 0, -1, -1, 0))
					{
						func_79(cParam0, "OBJ_SEARCH_CAVE", vLocal_317[0 /*3*/]);
					}
					if (!func_381(65536))
					{
						__LIB_10__::func_378(*cParam0, func_41(3), func_41(4), 3, 4);
						if (!__LIB_1__::func_325())
						{
							__LIB_1__::func_422("OBJ_SEARCH_CAVE", 7500, 0, 1, 0, 0, -1, -1, 0);
						}
						func_67(65536);
					}
				}
			}
			else
			{
				if (!func_381(32768))
				{
					if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("LS_HNT2_SPLI") > 1)
					{
						if (MAP::DOES_BLIP_EXIST(iLocal_152))
						{
							MAP::_BLIP_REMOVE_MODIFIER(iLocal_152, -546708623);
						}
						if (!__LIB_0__::func_899(&(vLocal_353[4 /*3*/])))
						{
							__LIB_2__::func_259(&(vLocal_353[4 /*3*/]));
						}
						__LIB_1__::func_539();
						func_79(cParam0, "OBJ_SEARCH_CAVE", vLocal_317[0 /*3*/]);
						func_67(32768);
					}
				}
				if (__LIB_9__::func_178(&(vLocal_353[4 /*3*/])) > 3f)
				{
					PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "LS_HUNTER");
					__LIB_0__::func_37(&(vLocal_353[4 /*3*/]));
				}
			}
			break;
		case 2:
			PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "LS_HUNTER");
			__LIB_0__::func_325(&iLocal_152);
			func_892();
			break;
	}
}

bool func_389(char[4] cParam0)
{
	func_876(cParam0);
	func_881();
	func_883(cParam0);
	func_428();
	switch (iLocal_15)
	{
		case 0:
			__LIB_0__::func_7(&Global_1935630, 262144);
			if (!__LIB_0__::func_272(uLocal_147[0], 0))
			{
				iLocal_15 = 2;
				return false;
			}
			if (!__LIB_6__::func_904())
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_143))
				{
					func_79(cParam0, "OBJ_FIND", vLocal_311);
					__LIB_1__::func_422("OBJ_FIND", 7500, 1, 1, 0, 0, -1, -1, 0);
				}
				__LIB_2__::func_246(&(cParam0->f_3));
				__LIB_13__::func_266();
			}
			break;
		case 1:
			if (!__LIB_0__::func_272(uLocal_147[0], 0))
			{
				__LIB_13__::func_266();
				return false;
			}
			if (!func_381(16777216))
			{
				if ((__LIB_9__::func_178(&(vLocal_327[4 /*3*/])) > 6f && __LIB_9__::func_178(&uLocal_381) > 2f) && !__LIB_6__::func_904())
				{
					if (__LIB_10__::func_364(&(cParam0->f_2106), "LS_HNT2_SCREAM2", 0))
					{
						__LIB_2__::func_259(&uLocal_381);
						func_67(16777216);
					}
				}
			}
			func_894();
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_143))
			{
				if (func_895(cParam0))
				{
					if (!func_381(33554432))
					{
						__LIB_3__::func_732(0);
						if (__LIB_10__::func_364(&(cParam0->f_2106), "LS_HNT2_WDEAD", 0))
						{
							func_67(33554432);
						}
					}
					__LIB_2__::func_259(&(vLocal_343[0 /*3*/]));
					__LIB_0__::func_325(&iLocal_152);
					__LIB_13__::func_266();
					return false;
				}
				if (func_896())
				{
					__LIB_13__::func_266();
					return false;
				}
			}
			if (!bLocal_171)
			{
				if ((__LIB_9__::func_178(&(vLocal_327[4 /*3*/])) > 16f && !__LIB_6__::func_904()) && __LIB_9__::func_178(&uLocal_381) > 2f)
				{
					if (__LIB_10__::func_364(&(cParam0->f_2106), "LS_HNT2_NFOUND", 0))
					{
						__LIB_2__::func_259(&uLocal_381);
						bLocal_171 = true;
					}
				}
			}
			func_897(cParam0);
			if (!bLocal_174)
			{
				if (__LIB_0__::func_266(Global_35, -2140.087f, 113.2852f, 238.6838f, 4f, 1, 1) || __LIB_0__::func_266(Global_35, -2133.946f, 104.373f, 243.4232f, 4f, 1, 1))
				{
					if (!__LIB_6__::func_904() && __LIB_9__::func_178(&uLocal_381) > 10f)
					{
						if (__LIB_10__::func_364(&(cParam0->f_2106), "LS_HNT2_BONES", 0))
						{
							__LIB_2__::func_259(&uLocal_381);
							bLocal_174 = true;
						}
					}
				}
			}
			break;
		case 2:
			iLocal_33 = 0;
			__LIB_0__::func_325(&iLocal_152);
			__LIB_3__::func_459(iLocal_143, 1);
			__LIB_2__::func_190(iLocal_143, __LIB_1__::func_760(joaat("REWARD_PED_SMALL"), 0, -1));
			func_71(7);
			return true;
	}
	return false;
}

int func_390(char[4] cParam0)
{
	func_876(cParam0);
	func_881();
	func_883(cParam0);
	func_428();
	switch (iLocal_15)
	{
		case 0:
			__LIB_13__::func_266();
			break;
		case 1:
			if (__LIB_1__::func_348(uLocal_147[0], Global_35) <= func_899() || __LIB_1__::func_348(uLocal_147[0], Global_35) <= 5f)
			{
				if (!ENTITY::IS_ENTITY_OCCLUDED(uLocal_147[0]))
				{
					__LIB_13__::func_266();
				}
			}
			else if (!__LIB_0__::func_272(uLocal_147[0], 0))
			{
				__LIB_13__::func_266();
			}
			break;
		case 2:
			iLocal_33 = 0;
			func_71(11);
			return 1;
	}
	return 0;
}

int func_391(char[4] cParam0)
{
	func_876(cParam0);
	func_881();
	func_883(cParam0);
	func_428();
	switch (iLocal_15)
	{
		case 0:
			if (__LIB_0__::func_272(uLocal_147[0], 0))
			{
				func_79(cParam0, "OBJ_FK_COUGAR", ENTITY::GET_ENTITY_COORDS(uLocal_147[0], true, false));
				__LIB_1__::func_422("OBJ_FK_COUGAR", 7500, 0, 1, 0, 0, -1, -1, 0);
			}
			__LIB_2__::func_259(&(vLocal_353[3 /*3*/]));
			__LIB_13__::func_266();
			break;
		case 1:
			if (__LIB_0__::func_899(&(vLocal_353[3 /*3*/])))
			{
				if (!MAP::DOES_BLIP_EXIST(uLocal_153[0]) && !__LIB_3__::func_996(Global_35))
				{
					if (!bLocal_177)
					{
						if (!bLocal_175)
						{
							if (__LIB_9__::func_178(&(vLocal_353[3 /*3*/])) > 7f)
							{
								if (!__LIB_6__::func_904())
								{
									if (__LIB_10__::func_364(&(cParam0->f_2106), "LS_HNT2_CALL", 0))
									{
										bLocal_175 = true;
										__LIB_2__::func_259(&(vLocal_353[3 /*3*/]));
									}
								}
							}
						}
						else if (!bLocal_176)
						{
							if (__LIB_9__::func_178(&(vLocal_353[3 /*3*/])) > 8f)
							{
								if (!__LIB_6__::func_904())
								{
									if (__LIB_10__::func_364(&(cParam0->f_2106), "LS_HNT2_CALL", 0))
									{
										bLocal_176 = true;
										__LIB_2__::func_259(&(vLocal_353[3 /*3*/]));
									}
								}
							}
						}
						else if (!__LIB_6__::func_904())
						{
							bLocal_176 = false;
							__LIB_2__::func_259(&(vLocal_353[3 /*3*/]));
						}
					}
				}
				else if (!bLocal_177)
				{
					bLocal_177 = true;
				}
			}
			if (!__LIB_0__::func_272(uLocal_147[0], 0))
			{
				__LIB_13__::func_266();
			}
			break;
		case 2:
			__LIB_10__::func_378(*cParam0, func_41(4), func_41(6), 4, 6);
			iLocal_33 = 0;
			func_71(11);
			return 1;
	}
	return 0;
}

void func_392(char[4] cParam0)
{
	bool bVar0;
	var uVar1;
	func_876(cParam0);
	func_881();
	func_883(cParam0);
	func_428();
	switch (iLocal_15)
	{
		case 0:
			if (!__LIB_0__::func_474(167))
			{
				__LIB_1__::func_240(167, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_147[0]))
			{
				func_79(cParam0, "OBJ_SKIN", ENTITY::GET_ENTITY_COORDS(uLocal_147[0], false, false));
				__LIB_2__::func_259(&(vLocal_353[3 /*3*/]));
			}
			__LIB_13__::func_266();
			break;
		case 1:
			if (!func_381(268435456))
			{
				if (!__LIB_6__::func_904())
				{
					if (__LIB_10__::func_364(&(cParam0->f_2106), "LS_HNT2_KILLED", 0))
					{
						func_67(268435456);
					}
				}
			}
			if (__LIB_9__::func_178(&(vLocal_353[3 /*3*/])) > 2f || bLocal_401)
			{
				if (!__LIB_4__::func_68("OBJ_SKIN", 1))
				{
					__LIB_1__::func_422("OBJ_SKIN", 7500, 0, 1, 0, 0, -1, -1, 0);
				}
				__LIB_0__::func_37(&(vLocal_353[3 /*3*/]));
				bLocal_401 = false;
			}
			if (PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35) != 0 && ENTITY::_0x8DE41E9902E85756(uLocal_147[0]))
			{
				iLocal_151 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
				__LIB_13__::func_266();
			}
			else
			{
				bVar0 = false;
				if (__LIB_10__::func_387(uLocal_147[0]))
				{
					bVar0 = true;
				}
				if (ENTITY::_0x8DE41E9902E85756(uLocal_147[0]))
				{
					bVar0 = true;
				}
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_147[0]))
				{
					if (ENTITY::_0x0CCEFC6C2C95DA2A(&uVar1, uLocal_147[0], 0, Global_35) == 0)
					{
						if ((!__LIB_0__::func_899(&(vLocal_353[2 /*3*/])) && !PED::IS_PED_RAGDOLL(uLocal_147[0])) && bVar0)
						{
							__LIB_4__::func_89(&(vLocal_353[2 /*3*/]), 0);
						}
						else if (__LIB_9__::func_178(&(vLocal_353[2 /*3*/])) > 5f)
						{
							iLocal_33 = 4;
						}
					}
					else if (__LIB_0__::func_899(&(vLocal_353[2 /*3*/])))
					{
						__LIB_0__::func_37(&(vLocal_353[2 /*3*/]));
					}
				}
			}
			break;
		case 2:
			iLocal_33 = 0;
			func_71(11);
			break;
	}
}

void func_393(char[4] cParam0)
{
	func_876(cParam0);
	func_881();
	switch (iLocal_15)
	{
		case 0:
			__LIB_0__::func_325(&iLocal_156);
			func_79(cParam0, "OBJ_PLT_STOW", 0f, 0f, 0f);
			__LIB_1__::func_422("OBJ_PLT_STOW", 7500, 0, 1, 0, 0, -1, -1, 0);
			__LIB_1__::func_718(7);
			func_888(524288);
			if (__LIB_0__::func_272(iLocal_144[0], 0))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_144[0], -2115.011f, 16.38608f, 264.1115f, 308.4892f, true, false, true);
				TASK::TASK_STAND_STILL(iLocal_144[0], -1);
			}
			__LIB_13__::func_266();
			break;
		case 1:
			func_905(cParam0);
			if (!func_381(134217728))
			{
				if (__LIB_10__::func_364(&(cParam0->f_2106), "LS_HNT2_WHITE", 0))
				{
					func_67(134217728);
				}
			}
			if (!func_83(524288))
			{
				if (__LIB_0__::func_272(iLocal_144[1], 0))
				{
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_144[1], -2117.592f, 17.45552f, 263.7554f, 150.5622f, true, false, true);
					TASK::TASK_STAND_STILL(iLocal_144[1], -1);
					func_80(524288);
				}
				else
				{
					__LIB_12__::func_789(&(iLocal_144[1]), -2117.592f, 17.45552f, 263.7554f, 150.5622f, 1, 1, 1, 1);
				}
			}
			if (!bLocal_410)
			{
				__LIB_1__::func_718(7);
				bLocal_410 = true;
			}
			func_906(cParam0);
			func_907();
			if (__LIB_0__::func_266(Global_35, Local_136, 10f, 1, 1) && __LIB_2__::func_800())
			{
				__LIB_13__::func_266();
			}
			break;
		case 2:
			__LIB_0__::func_325(&iLocal_155);
			func_71(10);
			break;
	}
}

bool func_394(char[4] cParam0)
{
	bool bVar0;
	switch (iLocal_15)
	{
		case 0:
			func_79(cParam0, "OBJ_SELL", Local_136);
			__LIB_13__::func_266();
			break;
		case 1:
			func_905(cParam0);
			if ((((!__LIB_1__::func_707(joaat("PROVISION_LOANSHARK_SKINS"), 1, 0) && func_909(joaat("PROVISION_LOANSHARK_SKINS")) == 0) && !func_910(0)) && !func_910(1)) && !__LIB_18__::func_378(joaat("PROVISION_LOANSHARK_SKINS")))
			{
				if (__LIB_10__::func_383(10) == joaat("PROVISION_LOANSHARK_SKINS"))
				{
					bVar0 = true;
				}
			}
			if (bVar0)
			{
				__LIB_13__::func_266();
			}
			break;
		case 2:
			func_97(joaat("MONEY_LOANSHARK_WINTON_DEBT"), 1, 0, 0, 0, 1248274121, 0, 0, 0, 0);
			__LIB_0__::func_325(&iLocal_155);
			func_71(11);
			return true;
	}
	return false;
}

void func_400(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
		__LIB_8__::func_366(__LIB_0__::func_76(iParam0), iVar6, __LIB_0__::func_871());
	}
	else if (iVar0 == 8)
	{
		__LIB_8__::func_367(__LIB_0__::func_76(iParam0), iVar6, __LIB_0__::func_871(), __LIB_0__::func_113());
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
						func_97(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_97(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_97(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_97(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_97(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_97(joaat("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_97(joaat("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_97(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_97(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_97(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_97(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_97(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_97(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_97(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_97(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_97(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_97(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_97(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_97(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_97(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_97(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_97(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_97(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_97(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_97(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_934();
						func_935(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
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
						func_97(joaat("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
							func_400(Global_1347702[21 /*49*/].f_15, 0, 0, 0, 0);
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
							func_400(Global_1347702[82 /*49*/].f_15, 0, 0, 0, 0);
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
							func_400(Global_1347702[83 /*49*/].f_15, 0, 0, 0, 0);
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
						func_97(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_97(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
		func_968();
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
							func_97(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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

bool func_427(int iParam0, vector3 vParam1)
{
	int iVar0;
	if (!INTERIOR::IS_VALID_INTERIOR(iParam0))
	{
		return false;
	}
	if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(vParam1))
	{
		iVar0 = INTERIOR::GET_INTERIOR_FROM_COLLISION(vParam1);
		if (iVar0 == iParam0)
		{
			return true;
		}
	}
	return false;
}

void func_428()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (3 - 1))
	{
		if (__LIB_0__::func_48(Local_42[iVar0 /*8*/], Global_35, 5.5f, 0))
		{
			if (!__LIB_10__::func_388(Local_42[iVar0 /*8*/]))
			{
				__LIB_3__::func_459(Local_42[iVar0 /*8*/], 1);
			}
		}
		iVar0++;
	}
}

bool func_429(char* sParam0)
{
	if (func_992(sParam0))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_159, sParam0, true);
		return true;
	}
	return false;
}

void func_432(int iParam0)
{
	if (__LIB_10__::func_227(func_993(iParam0), 0))
	{
		MISC::SET_BIT(&iLocal_298, iParam0);
	}
}

void func_433(char[4] cParam0, int iParam1)
{
	int iVar0;
	__LIB_6__::func_815(&Local_204, iLocal_143);
	if (__LIB_0__::func_27(iLocal_14, 1) && !__LIB_0__::func_27(iLocal_14, 512))
	{
		AUDIO::_0x9428447DED71FC7E("LSHNT_Scenes");
	}
	AUDIO::UNREGISTER_SCRIPT_WITH_AUDIO();
	__LIB_6__::func_824();
	func_996();
	__LIB_0__::func_325(&(uLocal_153[0]));
	__LIB_0__::func_325(&iLocal_152);
	__LIB_0__::func_325(&iLocal_155);
	__LIB_0__::func_325(&iLocal_156);
	__LIB_1__::func_721(7);
	__LIB_0__::func_325(&(Local_136.f_3));
	if (__LIB_6__::func_125(60))
	{
		__LIB_6__::func_350(60, 10, 0, 0);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_159))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_159);
	}
	__LIB_2__::func_480(&Local_186, 1, 1, 1, 0);
	Local_204.f_2 = 0;
	PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "LS_HUNTER");
	func_998(10, 0);
	if (__LIB_0__::func_272(Global_35, 0))
	{
		if (__LIB_0__::func_272(PED::_GET_LAST_MOUNT(Global_35), 0))
		{
			if (PED::GET_PED_CONFIG_FLAG(PED::_GET_LAST_MOUNT(Global_35), 136, true))
			{
				PED::SET_PED_CONFIG_FLAG(PED::_GET_LAST_MOUNT(Global_35), 136, false);
			}
		}
	}
	if (func_83(8388608))
	{
		if (PED::DOES_GROUP_EXIST(iLocal_267))
		{
			PED::REMOVE_GROUP(iLocal_267);
		}
	}
	func_696();
	if (iParam1 == 0)
	{
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_268))
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_268, false);
		}
		STREAMING::REMOVE_PTFX_ASSET();
		AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
		GRAPHICS::_0xAE7BF7CA9E4BA48D(uLocal_142);
		func_999();
		if (__LIB_0__::func_272(iLocal_144[0], 0))
		{
			PED::SET_PED_CONFIG_FLAG(iLocal_144[0], 136, false);
		}
		if (INTERIOR::IS_VALID_INTERIOR(iLocal_270))
		{
			if (INTERIOR::IS_INTERIOR_READY(iLocal_270))
			{
				INTERIOR::UNPIN_INTERIOR(iLocal_270);
			}
		}
		__LIB_7__::func_345(iLocal_144[0], 0);
		__LIB_2__::func_788(&(iLocal_144[0]), 0, 1, 1);
		if (__LIB_0__::func_272(iLocal_144[1], 0))
		{
			if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_144[1], true))
			{
				__LIB_2__::func_788(&(iLocal_144[1]), 0, 0, 1);
			}
		}
		if (__LIB_0__::func_272(Global_35, 0))
		{
			PED::SET_PED_CONFIG_FLAG(Global_35, 141, false);
		}
		if (__LIB_0__::func_272(uLocal_147[0], 0))
		{
			TASK::TASK_WANDER_IN_VOLUME(uLocal_147[0], uLocal_276[5], 0f, 0f, 0);
		}
		__LIB_2__::func_788(&(uLocal_147[0]), 1, 1, 1);
		if (__LIB_0__::func_272(iLocal_143, 0))
		{
			func_248(0);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_143, PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iLocal_143));
		}
		__LIB_2__::func_788(&iLocal_143, 1, 0, 1);
		PED::_0x411189E51B8020BA(Global_35, "Cautious");
		__LIB_0__::func_8(&Global_1935630, 262144);
	}
	func_1000();
	__LIB_4__::func_866(&(Local_84[0 /*8*/]), 1, 1);
	__LIB_4__::func_866(&(Local_84[1 /*8*/]), 1, 1);
	__LIB_4__::func_866(&(Local_84[2 /*8*/]), 1, 1);
	if (ENTITY::_0x1FF441D7954F8709(iLocal_158))
	{
		ENTITY::_0xD2B9C78537ED5759(iLocal_158);
	}
	if (STREAMING::_IS_IMAP_ACTIVE(joaat("N_06P_LOANSHARK_HUNTER2")))
	{
		STREAMING::_REMOVE_IMAP(joaat("N_06P_LOANSHARK_HUNTER2"));
	}
	__LIB_5__::func_440("LSHUNT_Hunter_Camp");
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_150))
	{
		ENTITY::DELETE_ENTITY(&iLocal_150);
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_67[iVar0 /*4*/]))
		{
			if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(Local_67[iVar0 /*4*/]))
			{
				TASK::REMOVE_WAYPOINT_RECORDING(Local_67[iVar0 /*4*/]);
			}
		}
		iVar0++;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_27);
	if (PLAYER::_0x2009F8AB7A5E9D6D(PLAYER::GET_PLAYER_INDEX()))
	{
		PLAYER::_0x12E09E278C6C29B7(PLAYER::PLAYER_ID());
	}
	if (__LIB_0__::func_1(cParam0->f_16, 1))
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
		}
	}
}

void func_441(var uParam0)
{
	Local_29[0 /*2*/] = "script_proc@loansharking@hunter@part_02";
	Local_29[0 /*2*/].f_1 = "tunnel_split";
}

void func_443()
{
	Local_67[0 /*4*/] = { func_1011("loan_hunt2_CR", -1764.036f, -177.0951f, 191.8556f) };
	Local_67[1 /*4*/] = { func_1011("loan_hunt2_RR", -1894.872f, -276.3419f, 178.5387f) };
	Local_67[2 /*4*/] = { func_1011("loan_hunt2_RC", -2100.484f, -164.2985f, 206.3495f) };
	Local_67[3 /*4*/] = { func_1011("loan_hunt2_ED", -2117.752f, 19.11315f, 263.7958f) };
}

void func_444()
{
	Local_35[0 /*2*/] = "LS_HNT2_RD1";
	Local_35[1 /*2*/] = "LS_HNT2_RD2";
	Local_35[2 /*2*/] = "LS_HNT2_RD3";
}

void func_445()
{
	sLocal_388[0] = "ROAR";
	sLocal_388[1] = "GROWL";
	sLocal_388[2] = "ROAR";
	sLocal_388[3] = "AGITATED";
	sLocal_388[4] = "COUGAR_ATTACK_WINTON";
}

void func_446()
{
	Local_42[0 /*8*/] = { func_1012(-2140.924f, 101.9912f, 242.9f, 60.3027f, iLocal_27, joaat("CONSUMABLE_POTENT_MEDICINE")) };
	Local_42[1 /*8*/] = { func_1012(-2096.877f, 118.0033f, 238.9639f, 292.8538f, iLocal_27, joaat("CONSUMABLE_CHEWING_TOBACCO")) };
	Local_42[2 /*8*/] = { func_1012(-2130.483f, 122.4231f, 237f, 29.7498f, iLocal_27, joaat("CONSUMABLE_POTENT_TONIC")) };
}

void func_447()
{
	Local_84[0 /*8*/] = { __LIB_10__::func_389(-1778.09f, -180.82f, 193.88f, 0f, 0f, -107.84f, joaat("P_BOILER01X")) };
	Local_84[1 /*8*/] = { __LIB_10__::func_389(-1778.54f, -181.17f, 193.87f, 4.05f, 1.66f, -94.89f, joaat("P_COPPERPOT02BX")) };
	Local_84[2 /*8*/] = { __LIB_10__::func_389(-1778.36f, -181.05f, 194.23f, 180f, 20f, 20f, joaat("P_LADLE02X")) };
	Local_84[3 /*8*/] = { __LIB_10__::func_389(-1778.24f, -180.56f, 193.93f, 0f, 0f, -179.74f, joaat("P_MUGCOFFEE01X")) };
}

void func_448()
{
	vLocal_317[0 /*3*/] = { Local_42[0 /*8*/].f_1 };
	vLocal_317[1 /*3*/] = { Local_42[1 /*8*/].f_1 };
	vLocal_317[2 /*3*/] = { Local_42[2 /*8*/].f_1 };
}

void func_449()
{
	iLocal_23[1] = 131072;
	iLocal_23[0] = 262144;
}

void func_450()
{
	Local_136 = { func_1014(-1753.4f, -392.56f, 156.26f, 478, 26) };
}

void func_456(int iParam0, int iParam1)
{
	if (!Global_1901328.f_94)
	{
		if (__LIB_0__::func_192(iParam0, 606799272))
		{
			__LIB_10__::func_447(iParam0, iParam1);
		}
		if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, -1697809989))
		{
			func_322(iParam0, iParam1, 1, 0);
		}
	}
}

int func_505(int iParam0, int iParam1)
{
	var uVar0;
	return func_1077(&uVar0, iParam0, iParam1);
}

bool func_511(int iParam0, float fParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (__LIB_2__::func_118(iParam0, 1, 1) > fParam1)
			{
				if (!ENTITY::IS_ENTITY_ON_SCREEN(iParam0) || ENTITY::IS_ENTITY_OCCLUDED(iParam0))
				{
					return true;
				}
				if (PED::_0x5102307CE88798EB(iParam0))
				{
					if (!PED::IS_TRACKED_PED_VISIBLE(iParam0))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_512()
{
	if (iLocal_16 >= 4 && iLocal_16 < 9)
	{
		if (!func_1081(&Global_35, -1, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_532(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_143))
	{
		if (func_251(1, &iLocal_143, iLocal_28, -1781.13f, -180.95f, 194.5f, -108.14f, 1, 1, 0, 1, 1, 0, 1))
		{
		}
	}
	else if (!bLocal_168)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_143))
		{
			__LIB_3__::func_618(Global_1392626[*uParam0 /*32*/].f_24, 15f, 1, 0, 0, 0, 0);
			func_1092(uParam0);
			bLocal_168 = true;
		}
	}
	else
	{
		return true;
	}
	return false;
}

bool func_533()
{
	vector3 vVar0;
	if (ENTITY::IS_ENTITY_DEAD(iLocal_144[0]))
	{
		vVar0 = { -1770.84f, -180.78f, 194.59f };
		if (func_251(1, &(iLocal_144[0]), joaat("A_C_HORSE_MORGAN_BAY"), vVar0, 133.66f, 1, 1, 0, 1, 1, 0, 1))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(iLocal_144[0], vVar0, 133.66f, false, true);
			TASK::TASK_STAND_STILL(iLocal_144[0], -1);
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_144[0], 48, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_144[0], joaat("REL_PLAYER_ALLY"));
			AITRANSPORT::_0xBA8818212633500A(iLocal_144[0], 0, 1);
			PED::SET_PED_CONFIG_FLAG(iLocal_144[0], 324, true);
			__LIB_9__::func_814(iLocal_144[0], 2, 0);
			__LIB_9__::func_814(iLocal_144[0], 0, 80);
			__LIB_7__::func_345(iLocal_144[0], 1);
			return true;
		}
	}
	else
	{
		return true;
	}
	return false;
}

bool func_534()
{
	if (iLocal_266 == -1)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_287))
		{
			iLocal_266 = __LIB_3__::func_710(iLocal_287, 1);
		}
		return false;
	}
	if (!func_83(2048))
	{
		if (!func_83(16777216))
		{
			STREAMING::_REQUEST_IMAP(joaat("N_06P_LOANSHARK_HUNTER2"));
			__LIB_5__::func_441("LSHUNT_Hunter_Camp");
			func_80(16777216);
		}
		else
		{
			if (STREAMING::HAS_PTFX_ASSET_LOADED())
			{
				if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_268))
				{
					GRAPHICS::USE_PARTICLE_FX_ASSET("scr_distance_smoke");
					iLocal_268 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_campfire_distance_smoke_script", vLocal_308, 0f, 0f, 0f, 1f, false, false, false, false);
					return false;
				}
				else
				{
					GRAPHICS::SET_PARTICLE_FX_LOOPED_FAR_CLIP_DIST(iLocal_268, 300f);
					GRAPHICS::SET_PARTICLE_FX_LOOPED_ALPHA(iLocal_268, fLocal_269);
				}
			}
			else
			{
				return false;
			}
			uLocal_142 = GRAPHICS::_0x27219300C36A8D40(vLocal_308, 4.12f, 0);
			func_80(2048);
			return true;
		}
	}
	else
	{
		return true;
	}
	return false;
}

bool func_535(var uParam0)
{
	if (*uParam0 != __LIB_10__::func_367())
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_84[3 /*8*/]))
		{
			if (iLocal_158 == 0)
			{
				iLocal_158 = ENTITY::_0x6F3068258A499E52(Local_84[3 /*8*/].f_7, Local_84[3 /*8*/].f_1, 11);
			}
			else if (ENTITY::_0x1FF441D7954F8709(iLocal_158))
			{
				Local_84[3 /*8*/] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(iLocal_158));
			}
			return false;
		}
	}
	if (ENTITY::IS_ENTITY_DEAD(Local_84[0 /*8*/]))
	{
		Local_84[0 /*8*/] = OBJECT::CREATE_OBJECT(Local_84[0 /*8*/].f_7, Local_84[0 /*8*/].f_1, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(Local_84[0 /*8*/], Local_84[0 /*8*/].f_4, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_84[0 /*8*/], true);
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(Local_84[1 /*8*/]))
	{
		Local_84[1 /*8*/] = OBJECT::CREATE_OBJECT(Local_84[1 /*8*/].f_7, Local_84[1 /*8*/].f_1, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(Local_84[1 /*8*/], Local_84[1 /*8*/].f_4, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_84[1 /*8*/], true);
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(Local_84[2 /*8*/]))
	{
		Local_84[2 /*8*/] = OBJECT::CREATE_OBJECT(Local_84[2 /*8*/].f_7, Local_84[2 /*8*/].f_1, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(Local_84[2 /*8*/], Local_84[2 /*8*/].f_4, 1, true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_84[2 /*8*/], true);
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_84[3 /*8*/]))
	{
		if (!ENTITY::_IS_ENTITY_FROZEN(Local_84[3 /*8*/]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(Local_84[3 /*8*/], true);
		}
	}
	return true;
}

bool func_536()
{
	if (AUDIO::_0xD9130842D7226045(sLocal_394, 0))
	{
		return true;
	}
	return false;
}

void func_537()
{
	func_1096("ARTHUR", Global_35);
	func_1096("U_M_M_GriSurvivalist_01", iLocal_143);
}

void func_567(var uParam0, bool bParam1)
{
	if (bParam1 || __LIB_10__::func_407(uParam0, 1))
	{
		if (!func_83(4194304))
		{
			func_80(4194304);
		}
	}
	if (bParam1 || __LIB_19__::func_174(uParam0, iLocal_143, "WintonHolmes", 0, 1, 1))
	{
		if (!func_83(2097152))
		{
			if (bLocal_423)
			{
			}
			func_1124();
			PED::_0x2208438012482A1A(iLocal_143, true, true);
			func_80(2097152);
		}
	}
	if (bParam1 || __LIB_19__::func_174(uParam0, Global_35, 0, 0, 1, 1))
	{
		if (!func_83(1048576))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_84[1 /*8*/]))
			{
				ENTITY::SET_ENTITY_COLLISION(Local_84[1 /*8*/], false, false);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_84[2 /*8*/]))
			{
				ENTITY::SET_ENTITY_COLLISION(Local_84[2 /*8*/], false, false);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_84[3 /*8*/]))
			{
				ENTITY::SET_ENTITY_COLLISION(Local_84[3 /*8*/], false, false);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_84[0 /*8*/]))
			{
				ENTITY::SET_ENTITY_COLLISION(Local_84[0 /*8*/], false, false);
			}
			func_80(1048576);
		}
	}
}

bool func_573(int iParam0, vector3 vParam1, var uParam4, float fParam5, bool bParam6, float fParam7, bool bParam8, float fParam9, bool bParam10, int iParam11, float fParam12, float fParam13, bool bParam14)
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
	if (!__LIB_0__::func_899(uParam4))
	{
		if (bVar4 <= bParam8)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				__LIB_4__::func_89(uParam4, 0);
			}
		}
	}
	else if (bParam10 && bVar4 > bParam8)
	{
		__LIB_0__::func_37(uParam4);
	}
	if (__LIB_0__::func_899(uParam4))
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
		if (__LIB_1__::func_583(uParam4) >= fParam9)
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
					return true;
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar2) && !__LIB_0__::func_491(iParam0, -828834893))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(iParam0, 0, 0);
					return true;
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
	return false;
}

void func_577(var uParam0)
{
	uParam0->f_1451 = -1;
	__LIB_10__::func_291(uParam0, 0);
	__LIB_0__::func_115(uParam0, 3);
	func_1140(uParam0, 0);
	__LIB_0__::func_37(&(uParam0->f_1635));
	__LIB_10__::func_411(uParam0);
	__LIB_0__::func_37(&(uParam0->f_1638));
}

void func_579(var uParam0, int iParam1, bool bParam2)
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
	func_590(uParam0);
	__LIB_10__::func_469(uParam0, uParam0->f_1663, uParam0->f_1665);
	__LIB_10__::func_412(uParam0);
	if (uParam0->f_1666 && !uParam0->f_1665)
	{
		if (((((uParam0->f_1661 >= 0 && uParam0->f_782[uParam0->f_1661 /*41*/].f_17 > 0f) && uParam0->f_1454 >= 0) && !__LIB_0__::func_266(Global_35, uParam0->f_782[uParam0->f_1454 /*41*/].f_1, (uParam0->f_782[uParam0->f_1661 /*41*/].f_17 + 5f), 1, 1)) && !__LIB_10__::func_278(uParam0, 33554432)) && !__LIB_10__::func_278(uParam0, 4))
		{
			__LIB_10__::func_484(uParam0, uParam0->f_1663);
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
			__LIB_10__::func_484(uParam0, uParam0->f_1663);
		}
		if (uParam0->f_782[uParam0->f_1456 /*41*/].f_29)
		{
			fVar0 = __LIB_10__::func_483(uParam0, uParam0->f_1456);
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
						__LIB_10__::func_432(uParam0);
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
		fVar4 = __LIB_0__::func_94(Global_35, uParam0->f_782[uParam0->f_1454 /*41*/].f_1, 1);
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
				__LIB_10__::func_436(uParam0, uParam0->f_782[uParam0->f_1454 /*41*/].f_27, uParam0->f_1111[uParam0->f_1454 /*22*/].f_1, fVar6);
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
		if (((VOLUME::_IS_POSITION_INSIDE_VOLUME(uParam0->f_1641, uParam0->f_1645) && __LIB_10__::func_483(uParam0, uParam0->f_1454) < 10000f) && __LIB_10__::func_278(uParam0, 16)) || __LIB_10__::func_278(uParam0, 4))
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
			if (__LIB_3__::func_869(Global_35, &(uParam0->f_1452), iVar7, 0, 0, 1084227584 /* Float: 5f */, 100, uParam0->f_782[uParam0->f_1454 /*41*/].f_7, uParam0->f_782[uParam0->f_1454 /*41*/].f_7.f_1))
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

void func_581(var uParam0)
{
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (__LIB_10__::func_278(uParam0, 512))
	{
		return;
	}
	if (__LIB_9__::func_178(&(uParam0->f_1638)) < 2f)
	{
		return;
	}
	if (__LIB_4__::func_711(1, 0))
	{
		CAM::DO_SCREEN_FADE_OUT(1000);
		__LIB_10__::func_293(uParam0, 524288);
	}
}

void func_590(var uParam0)
{
	int iVar0;
	bool bVar1;
	struct<16> Var2;
	bool bVar18;
	int iVar19;
	vector3 vVar20;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	float fVar27;
	float fVar28;
	bool bVar29;
	bool bVar30;
	bool bVar31;
	bool bVar32;
	iVar0 = uParam0->f_1454;
	if (iVar0 >= 0 && !__LIB_10__::func_295(uParam0, 2))
	{
		bVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_782[iVar0 /*41*/].f_1, true) <= uParam0->f_782[iVar0 /*41*/].f_16;
		Var2 = { uParam0->f_1458 };
		if (bVar1)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1111[iVar0 /*22*/].f_2)))
			{
				StringCopy(&(uParam0->f_1458), __LIB_0__::func_67(uParam0->f_1111[iVar0 /*22*/].f_2), 64);
			}
			else
			{
				StringCopy(&(uParam0->f_1458), __LIB_0__::func_166(), 64);
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1111[iVar0 /*22*/].f_10)))
			{
				StringCopy(&(uParam0->f_1458.f_8), __LIB_0__::func_67(uParam0->f_1111[iVar0 /*22*/].f_10), 64);
			}
			else
			{
				StringCopy(&(uParam0->f_1458.f_8), __LIB_4__::func_616(), 64);
			}
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_BEHIND"), false);
		}
		bVar18 = (!MISC::ARE_STRINGS_EQUAL(&Var2, &(uParam0->f_1458)) || !MISC::ARE_STRINGS_EQUAL(&(Var2.f_8), &(uParam0->f_1458.f_8)));
		if (bVar18 || !bVar1)
		{
			if (CAM::_0x927B810E43E99932(&Var2))
			{
				CAM::_0x0A5A4F1979ABB40E(&Var2);
			}
		}
		if (bVar1 && !uParam0->f_1111[iVar0 /*22*/])
		{
			if (!__LIB_0__::func_1(uParam0->f_1111[iVar0 /*22*/].f_1, 8))
			{
				if (!__LIB_0__::func_1(uParam0->f_1111[iVar0 /*22*/].f_1, 8))
				{
					__LIB_4__::func_706(&iVar19, uParam0->f_1111[iVar0 /*22*/].f_1);
					__LIB_4__::func_707(&(uParam0->f_1670), iVar19);
				}
			}
			else
			{
				vVar20 = { uParam0->f_782[iVar0 /*41*/].f_1 };
				iVar24 = -1;
				if (uParam0->f_1111[iVar0 /*22*/].f_20 >= 0)
				{
					iVar25 = 0;
					while (iVar25 < 17)
					{
						if (uParam0->f_3[iVar25 /*13*/] && ENTITY::DOES_ENTITY_EXIST(uParam0->f_3[iVar25 /*13*/].f_2))
						{
							if (uParam0->f_1111[iVar0 /*22*/].f_20 == uParam0->f_3[iVar25 /*13*/].f_3)
							{
								iVar23 = uParam0->f_3[iVar25 /*13*/].f_2;
								iVar24 = iVar25;
							}
							else
							{
								iVar25++;
							}
							if (__LIB_0__::func_1(uParam0->f_1111[iVar0 /*22*/].f_1, 16) && iVar24 >= 0)
							{
								if (!ENTITY::DOES_ENTITY_EXIST(iVar23))
								{
									iVar23 = uParam0->f_3[uParam0->f_1111[iVar0 /*22*/].f_20 /*13*/].f_2;
								}
								if (!ENTITY::DOES_ENTITY_EXIST(iVar23) || ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar23) == Global_35)
								{
									vVar20.f_2 = (vVar20.z + 2f);
								}
								else
								{
									vVar20 = { ENTITY::GET_ENTITY_COORDS(iVar23, false, false) };
									iVar26 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iVar23);
									if (INTERIOR::IS_VALID_INTERIOR(iVar26) && (!INTERIOR::IS_VALID_INTERIOR(uParam0->f_1668) || iVar26 != uParam0->f_1668))
									{
										if (CAM::_0x927B810E43E99932(&(uParam0->f_1458)))
										{
											CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_1458));
											__LIB_10__::func_309(uParam0, 16);
										}
										return;
									}
								}
								if (uParam0->f_1111[iVar0 /*22*/].f_18 != 0f || uParam0->f_1111[iVar0 /*22*/].f_19 != 0f)
								{
									vVar20 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar20, __LIB_3__::func_978(Global_35, iVar23, 1), uParam0->f_1111[iVar0 /*22*/].f_18, 0f, uParam0->f_1111[iVar0 /*22*/].f_19) };
								}
							}
							else if (uParam0->f_1111[iVar0 /*22*/].f_18 != 0f || uParam0->f_1111[iVar0 /*22*/].f_19 != 0f)
							{
								vVar20 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar20, __LIB_0__::func_152(Global_36, uParam0->f_782[iVar0 /*41*/].f_1, 1), uParam0->f_1111[iVar0 /*22*/].f_18, 0f, uParam0->f_1111[iVar0 /*22*/].f_19) };
							}
							fVar27 = uParam0->f_782[iVar0 /*41*/].f_16;
							fVar28 = uParam0->f_782[iVar0 /*41*/].f_14;
							bVar29 = __LIB_0__::func_1(uParam0->f_1111[iVar0 /*22*/].f_1, 2);
							bVar30 = (__LIB_0__::func_1(uParam0->f_1111[iVar0 /*22*/].f_1, 1) && !bVar29);
							bVar31 = __LIB_0__::func_1(uParam0->f_1111[iVar0 /*22*/].f_1, 4);
							bVar32 = false;
							if (!CAM::_0x927B810E43E99932(&(uParam0->f_1458)))
							{
								CAM::_0xB8B207C34285E978(&(uParam0->f_1458));
								if (CAM::IS_CINEMATIC_CAM_RENDERING())
								{
									__LIB_0__::func_489(0, 0);
								}
								bVar32 = true;
								__LIB_10__::func_309(uParam0, 16);
							}
							if (CAM::_0x4138EE36BC3DC0A7(&(uParam0->f_1458), 4))
							{
								bVar32 = (bVar32 || uParam0->f_1474.f_16 != iVar23);
								bVar32 = (bVar32 || !__LIB_0__::func_175(uParam0->f_1474.f_17, vVar20, 1056964608 /* Float: 0.5f */, 1));
								bVar32 = (bVar32 || MISC::ABSF((uParam0->f_1474.f_20 - fVar27)) > 0.01f);
								bVar32 = (bVar32 || MISC::ABSF((uParam0->f_1474.f_21 - fVar28)) > 0.01f);
								bVar32 = (bVar32 || uParam0->f_1474.f_22 != bVar30);
								uParam0->f_1474.f_16 = iVar23;
								uParam0->f_1474.f_17 = { vVar20 };
								uParam0->f_1474.f_20 = fVar27;
								uParam0->f_1474.f_21 = fVar28;
								uParam0->f_1474.f_22 = bVar30;
								if (bVar32)
								{
									uParam0->f_1474 = { uParam0->f_1458 };
									CAM::_0x8E036B41C37D0E5F(&(uParam0->f_1474));
								}
							}
							if (CAM::_0x4138EE36BC3DC0A7(&(uParam0->f_1458), 9))
							{
								bVar32 = (bVar32 || uParam0->f_1497.f_16 != iVar23);
								bVar32 = (bVar32 || !__LIB_0__::func_175(uParam0->f_1497.f_17, vVar20, 1056964608 /* Float: 0.5f */, 1));
								bVar32 = (bVar32 || uParam0->f_1497.f_20 != !bVar31);
								bVar32 = (bVar32 || uParam0->f_1497.f_21 != bVar30);
								uParam0->f_1497.f_16 = iVar23;
								uParam0->f_1497.f_17 = { vVar20 };
								uParam0->f_1497.f_20 = !bVar31;
								uParam0->f_1497.f_21 = bVar30;
								if (bVar32)
								{
									uParam0->f_1497 = { uParam0->f_1458 };
									CAM::_0x728491FB3DFFEF99(&(uParam0->f_1497));
								}
							}
							Jump @1467; //curOff = 1421
							if (CAM::_0x927B810E43E99932(&(uParam0->f_1458)))
							{
								CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_1458));
							}
							StringCopy(&(uParam0->f_1458), "", 64);
							StringCopy(&(uParam0->f_1458.f_8), "", 64);
							__LIB_10__::func_311(uParam0, 2);
						}
					}
				}
			}
		}
	}
}

void func_594(var uParam0, int iParam1)
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
				func_1177(uParam0, iVar0, iParam1);
			}
			else if (uParam0->f_241[iVar0 /*18*/].f_6)
			{
				bVar1 = __LIB_10__::func_414(uParam0, iVar0);
				if (bVar1)
				{
					func_1179(uParam0, iVar0, iParam1);
				}
			}
			iVar0++;
		}
		if (!__LIB_10__::func_292(uParam0, uParam0->f_1450))
		{
			func_1180(uParam0, -1, 0, 1);
		}
		return;
	}
	iVar0 = uParam0->f_1457;
	while (iVar0 <= (uParam0->f_1660 - 1))
	{
		if (uParam0->f_241[iVar0 /*18*/].f_7)
		{
			func_1177(uParam0, iVar0, iParam1);
		}
		else if (uParam0->f_241[iVar0 /*18*/].f_6)
		{
			bVar1 = __LIB_10__::func_414(uParam0, iVar0);
			if (bVar1)
			{
				func_1179(uParam0, iVar0, iParam1);
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

bool func_603(var uParam0, int iParam1)
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	if (uParam0->f_1451 < 0)
	{
		return true;
	}
	switch (uParam0->f_241[uParam0->f_1451 /*18*/].f_2)
	{
		case 4:
			if (TASK::GET_SCRIPT_TASK_STATUS(Global_35, 242628503, true) == 8)
			{
				return true;
			}
			else if (__LIB_1__::func_583(&(uParam0->f_1638)) >= 15f)
			{
				__LIB_10__::func_293(uParam0, 32768);
				return true;
			}
			break;
		case 9:
			if (!uParam0->f_1534)
			{
				if (__LIB_1__::func_583(&(uParam0->f_1638)) >= 15f)
				{
					__LIB_10__::func_293(uParam0, 32768);
					return true;
				}
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(__LIB_10__::func_313(uParam0)) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(__LIB_10__::func_313(uParam0), false))
				{
					uParam0->f_1534 = 1;
				}
			}
			else
			{
				fVar0 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(__LIB_10__::func_313(uParam0));
				bVar1 = ANIMSCENE::_IS_ANIM_SCENE_FINISHED(__LIB_10__::func_313(uParam0), false);
				bVar2 = ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(__LIB_10__::func_313(uParam0));
				return ((fVar0 >= 1f || bVar1) || bVar2);
			}
			break;
		case 11:
			return true;
		default:
			return __LIB_1__::func_583(&(uParam0->f_1638)) >= 15f;
	}
	return false;
}

void func_608(int iParam0, int* iParam1, var uParam2, float fParam3, float fParam4, char* sParam5)
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	if (ENTITY::IS_ENTITY_DEAD(*iParam0) || !MISC::IS_BIT_SET(iParam1->f_21, 0))
	{
		return;
	}
	__LIB_3__::func_95(iParam1, *iParam0, iParam1->f_56, 0);
	fVar0 = __LIB_5__::func_439(fParam4 >= 0f, fParam4, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*iParam0, true, false)));
	__LIB_3__::func_27(iParam1, fParam3);
	func_1189(iParam0, iParam1, uParam2, fVar0);
	__LIB_18__::func_774(iParam1);
	if (MISC::IS_BIT_SET(iParam1->f_21, 20))
	{
		bVar1 = MISC::IS_STRING_NULL_OR_EMPTY(sParam5);
		__LIB_10__::func_518(iParam1, uParam2, iParam0, bVar1, sParam5, fVar0);
		if (!PED::IS_PED_ON_MOUNT(Global_35) && !PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
		{
			bVar2 = true;
			if (!MISC::IS_BIT_SET(*iParam1, 12))
			{
				bVar2 = __LIB_6__::func_789(iParam1, iParam0);
			}
			if (bVar2 && !MISC::IS_BIT_SET(*iParam1, 13))
			{
				func_626(iParam1);
			}
		}
	}
}

bool func_617(int iParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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

bool func_626(int* iParam0)
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
		else if (((__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 0, 1, 0)) || __LIB_0__::func_154(__LIB_0__::func_153(Global_35, 1, 1, 0))) && !__LIB_0__::func_163(Global_35, 716706914)) && !__LIB_0__::func_163(Global_35, 242628503))
		{
			WEAPON::_0x94A3C1B804D291EC(Global_35, 1, 0, 1, 0);
			WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
			TASK::TASK_SWAP_WEAPON(Global_35, 0, 0, 0, 0);
			PED::_0x2208438012482A1A(Global_35, false, false);
			__LIB_4__::func_89(&(iParam0->f_52), 0);
			MISC::SET_BIT(&(iParam0->f_21), 7);
		}
	}
	else if (MISC::IS_BIT_SET(iParam0->f_21, 7))
	{
		bVar0 = __LIB_9__::func_178(&(iParam0->f_52)) >= 1.5f;
		if ((!__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 0, 1, 0)) && !__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 1, 1, 0))) || bVar0)
		{
			__LIB_0__::func_37(&(iParam0->f_52));
			MISC::SET_BIT(&(iParam0->f_21), 6);
			return true;
		}
	}
	return false;
}

int func_629(int iParam0, int* iParam1, float fParam2, bool bParam3)
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
			__LIB_2__::func_259(&(iParam1->f_18));
			return 0;
		}
		else if (__LIB_0__::func_899(&(iParam1->f_18)))
		{
			__LIB_0__::func_37(&(iParam1->f_18));
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
	return func_1226(&(iParam1->f_18), fParam2);
	return 1;
}

void func_631(char[4] cParam0)
{
	if (HUD::_TEXT_DATABASE_HAS_LOADED("LOAN"))
	{
		if (!__LIB_10__::func_235(*cParam0, 4))
		{
			if (!func_381(1))
			{
				if ((BUILTIN::VDIST2(Global_36, Global_1392626[*cParam0 /*32*/].f_27) <= (Global_1392626[*cParam0 /*32*/].f_4 * Global_1392626[*cParam0 /*32*/].f_4) && !CAM::IS_SCREEN_FADED_OUT()) && !CAM::IS_SCREEN_FADING_IN())
				{
					func_79(cParam0, "OBJ_SEARCH", 0f, 0f, 0f);
					__LIB_1__::func_422("OBJ_SEARCH", 7500, 0, 1, 0, 0, -1, -1, 0);
					func_67(1);
				}
			}
		}
		else if (!func_381(2))
		{
			if (BUILTIN::VDIST2(Global_36, Global_1392626[*cParam0 /*32*/].f_24) <= (25f * 25f))
			{
				if (!__LIB_0__::func_270() && !__LIB_6__::func_904())
				{
					func_79(cParam0, "OBJ_CONFRONT_HUN", Global_1392626[*cParam0 /*32*/].f_24);
					func_67(2);
				}
			}
		}
		else if (!func_381(4))
		{
			__LIB_1__::func_422("OBJ_CONFRONT_HUN", 7500, 0, 1, 0, 0, -1, -1, 0);
			func_67(4);
		}
	}
}

void func_632(char[4] cParam0)
{
	if (__LIB_0__::func_272(iLocal_143, 0))
	{
		if (!__LIB_10__::func_235(*cParam0, 4))
		{
			if (func_1228(*cParam0))
			{
				__LIB_10__::func_415(*cParam0);
			}
		}
		if (__LIB_10__::func_477(iLocal_143, &uLocal_415, &uLocal_420, &uLocal_421, 2f, 25f, 0, 0, 1092616192 /* Float: 10f */, 1))
		{
			switch (iLocal_17)
			{
				case 0:
					if (!__LIB_0__::func_270())
					{
						if (!__LIB_0__::func_270())
						{
							__LIB_10__::func_415(*cParam0);
							__LIB_0__::func_11(cParam0);
							iLocal_17 = 2;
						}
					}
					else
					{
						__LIB_10__::func_415(*cParam0);
						iLocal_17 = 1;
					}
					break;
				case 1:
					if (__LIB_2__::func_123(iLocal_143, Global_35, 0.2f) && __LIB_0__::func_48(Global_35, iLocal_143, 10f, 1))
					{
						if (!__LIB_0__::func_270())
						{
							iLocal_17 = 2;
						}
					}
					break;
				case 2:
					break;
			}
		}
	}
}

void func_636(int iParam0)
{
	__LIB_1__::func_681(&iLocal_296, iParam0);
}

int func_651(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
	return func_1257(iVar0, iParam1, iParam2, bParam3, iParam4);
}

void func_664(int iParam0, int iParam1)
{
	iLocal_20[iParam1] = iParam0;
}

void func_696()
{
	if (func_83(134217728))
	{
		if (__LIB_0__::func_272(iLocal_143, 0))
		{
			__LIB_1__::func_726(iLocal_143, 1);
		}
		__LIB_1__::func_727(Global_35, 1);
		__LIB_5__::func_438(&uLocal_424);
		func_888(134217728);
	}
}

bool func_770(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	switch (iParam0)
	{
		case joaat("TAXIDERMY_ORDER_01"):
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT");
			}
			Jump @714; //curOff = 84
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT");
			}
			Jump @714; //curOff = 165
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT");
			}
			Jump @714; //curOff = 301
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
			}
			Jump @714; //curOff = 506
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
			}
			if (iParam0 == joaat("TAXIDERMY_ORDER_01"))
			{
				if (bParam3)
				{
					if (__LIB_8__::func_222(iParam1))
					{
						*sParam2++;
					}
				}
				if (bParam5)
				{
					if (__LIB_8__::func_222(iParam1))
					{
						*sParam2 = (*sParam2 - iParam4);
					}
				}
				if (__LIB_8__::func_222(iVar0))
				{
					*sParam2++;
				}
				if (__LIB_8__::func_222(iVar0))
				{
					return true;
				}
			}
			else if (iParam0 == joaat("TAXIDERMY_ORDER_02"))
			{
				if (bParam3)
				{
					if (__LIB_8__::func_222(iParam1))
					{
						*sParam2++;
					}
				}
				if (bParam5)
				{
					if (__LIB_8__::func_222(iParam1))
					{
						*sParam2 = (*sParam2 - iParam4);
					}
				}
				if (__LIB_8__::func_222(iVar0))
				{
					*sParam2++;
				}
				if (__LIB_8__::func_222(iVar1))
				{
					*sParam2++;
				}
				if (__LIB_8__::func_222(iVar0) && __LIB_8__::func_222(iVar1))
				{
					return true;
				}
			}
			else if (iParam0 == joaat("TAXIDERMY_ORDER_03"))
			{
				if (bParam3)
				{
					if (__LIB_8__::func_222(iParam1))
					{
						*sParam2++;
					}
				}
				if (bParam5)
				{
					if (__LIB_8__::func_222(iParam1))
					{
						*sParam2 = (*sParam2 - iParam4);
					}
				}
				if (__LIB_8__::func_222(iVar0))
				{
					*sParam2++;
				}
				if (__LIB_8__::func_222(iVar1))
				{
					*sParam2++;
				}
				if (__LIB_8__::func_222(iVar2))
				{
					*sParam2++;
				}
				if ((__LIB_8__::func_222(iVar0) && __LIB_8__::func_222(iVar1)) && __LIB_8__::func_222(iVar2))
				{
					return true;
				}
			}
			else
			{
				if (bParam3)
				{
					if (__LIB_8__::func_222(iParam1))
					{
						*sParam2++;
					}
				}
				if (bParam5)
				{
					if (__LIB_8__::func_222(iParam1))
					{
						*sParam2 = (*sParam2 - iParam4);
					}
				}
				if (__LIB_8__::func_222(iVar0))
				{
					*sParam2++;
				}
				if (__LIB_8__::func_222(iVar1))
				{
					*sParam2++;
				}
				if (__LIB_8__::func_222(iVar2))
				{
					*sParam2++;
				}
				if (__LIB_8__::func_222(iVar3))
				{
					*sParam2++;
				}
				if (((__LIB_8__::func_222(iVar0) && __LIB_8__::func_222(iVar1)) && __LIB_8__::func_222(iVar2)) && __LIB_8__::func_222(iVar3))
				{
					return true;
				}
			}
			return false;
		}
void func_771(int iParam0, bool bParam1, bool bParam2)
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
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			__LIB_1__::func_73();
			__LIB_0__::func_803(iParam0);
			break;
		case -639037538:
		case -618620429:
		case -491981251:
		case 168171957:
		case 227918160:
		case 588987611:
		case 704802028:
		case 1193080109:
		case 1649996811:
		case 2008888900:
			__LIB_1__::func_74();
			__LIB_0__::func_803(iParam0);
			break;
		case 2019386373:
			__LIB_0__::func_804(-664252410);
			__LIB_0__::func_804(2109952320);
			__LIB_0__::func_803(2019386373);
			break;
		case -664252410:
			__LIB_0__::func_804(2019386373);
			__LIB_0__::func_804(2109952320);
			__LIB_0__::func_803(-664252410);
			break;
		case 2109952320:
			__LIB_0__::func_804(2019386373);
			__LIB_0__::func_804(-664252410);
			__LIB_0__::func_803(2109952320);
			break;
		case -1674179981:
			__LIB_0__::func_804(-1835851517);
			__LIB_0__::func_804(-1838352012);
			__LIB_0__::func_803(-1674179981);
			break;
		case -1835851517:
			__LIB_0__::func_804(-1674179981);
			__LIB_0__::func_804(-1838352012);
			__LIB_0__::func_803(-1835851517);
			break;
		case -1838352012:
			__LIB_0__::func_804(-1674179981);
			__LIB_0__::func_804(-1835851517);
			__LIB_0__::func_803(-1838352012);
			break;
		case -1717960576:
			__LIB_0__::func_804(210001842);
			__LIB_0__::func_803(-1717960576);
			break;
		case 210001842:
			__LIB_0__::func_804(-1717960576);
			__LIB_0__::func_803(210001842);
			break;
		case -150493654:
			__LIB_0__::func_804(-1271608261);
			__LIB_0__::func_804(1846061697);
			__LIB_0__::func_804(-1145519186);
			__LIB_0__::func_803(-150493654);
			break;
		case -1271608261:
			__LIB_0__::func_804(-150493654);
			__LIB_0__::func_804(1846061697);
			__LIB_0__::func_804(-1145519186);
			__LIB_0__::func_803(-1271608261);
			break;
		case 1846061697:
			__LIB_0__::func_804(-150493654);
			__LIB_0__::func_804(-1271608261);
			__LIB_0__::func_804(-1145519186);
			__LIB_0__::func_803(1846061697);
			break;
		case -1145519186:
			__LIB_0__::func_804(-150493654);
			__LIB_0__::func_804(-1271608261);
			__LIB_0__::func_804(1846061697);
			__LIB_0__::func_803(-1145519186);
			break;
		case 1766284049:
			__LIB_0__::func_804(280705402);
			__LIB_0__::func_804(1926308480);
			__LIB_0__::func_803(1766284049);
			break;
		case 280705402:
			__LIB_0__::func_804(1766284049);
			__LIB_0__::func_804(1926308480);
			__LIB_0__::func_803(280705402);
			break;
		case 1926308480:
			__LIB_0__::func_804(1766284049);
			__LIB_0__::func_804(280705402);
			__LIB_0__::func_803(1926308480);
			break;
		case 1609506757:
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
			break;
		case 439465264:
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
			break;
		case 1822001510:
			__LIB_0__::func_804(-1612662716);
			__LIB_0__::func_803(1822001510);
			break;
		case -1612662716:
			__LIB_0__::func_804(1822001510);
			__LIB_0__::func_803(-1612662716);
			break;
		case 1306158345:
			__LIB_0__::func_804(1952610440);
			__LIB_0__::func_804(-223469678);
			__LIB_0__::func_804(-404698347);
			__LIB_0__::func_804(1517904467);
			__LIB_0__::func_803(1306158345);
			break;
		case 1952610440:
			__LIB_0__::func_804(1306158345);
			__LIB_0__::func_804(-223469678);
			__LIB_0__::func_804(-404698347);
			__LIB_0__::func_804(1517904467);
			__LIB_0__::func_803(1952610440);
			break;
		case -223469678:
			__LIB_0__::func_804(1306158345);
			__LIB_0__::func_804(1952610440);
			__LIB_0__::func_804(-404698347);
			__LIB_0__::func_804(1517904467);
			__LIB_0__::func_803(-223469678);
			break;
		case -404698347:
			__LIB_0__::func_804(1306158345);
			__LIB_0__::func_804(1952610440);
			__LIB_0__::func_804(-223469678);
			__LIB_0__::func_804(1517904467);
			__LIB_0__::func_803(-404698347);
			break;
		case 1517904467:
			__LIB_0__::func_804(1306158345);
			__LIB_0__::func_804(1952610440);
			__LIB_0__::func_804(-223469678);
			__LIB_0__::func_804(-404698347);
			__LIB_0__::func_803(1517904467);
			break;
		case 1376646519:
			__LIB_0__::func_804(931649776);
			__LIB_0__::func_804(-434590080);
			__LIB_0__::func_804(1743048395);
			__LIB_0__::func_804(449774763);
			__LIB_0__::func_803(1376646519);
			break;
		case 931649776:
			__LIB_0__::func_804(1376646519);
			__LIB_0__::func_804(-434590080);
			__LIB_0__::func_804(1743048395);
			__LIB_0__::func_804(449774763);
			__LIB_0__::func_803(931649776);
			break;
		case -434590080:
			__LIB_0__::func_804(1376646519);
			__LIB_0__::func_804(931649776);
			__LIB_0__::func_804(1743048395);
			__LIB_0__::func_804(449774763);
			__LIB_0__::func_803(-434590080);
			break;
		case 1743048395:
			__LIB_0__::func_804(1376646519);
			__LIB_0__::func_804(931649776);
			__LIB_0__::func_804(-434590080);
			__LIB_0__::func_804(449774763);
			__LIB_0__::func_803(1743048395);
			break;
		case 449774763:
			__LIB_0__::func_804(1376646519);
			__LIB_0__::func_804(931649776);
			__LIB_0__::func_804(-434590080);
			__LIB_0__::func_804(1743048395);
			__LIB_0__::func_803(449774763);
			break;
		case -1414537028:
			__LIB_0__::func_804(38162571);
			__LIB_0__::func_804(1350391819);
			__LIB_0__::func_804(54073871);
			__LIB_0__::func_803(-1414537028);
			break;
		case 38162571:
			__LIB_0__::func_804(-1414537028);
			__LIB_0__::func_804(1350391819);
			__LIB_0__::func_804(54073871);
			__LIB_0__::func_803(38162571);
			break;
		case 1350391819:
			__LIB_0__::func_804(-1414537028);
			__LIB_0__::func_804(38162571);
			__LIB_0__::func_804(54073871);
			__LIB_0__::func_803(1350391819);
			break;
		case 54073871:
			__LIB_0__::func_804(-1414537028);
			__LIB_0__::func_804(38162571);
			__LIB_0__::func_804(1350391819);
			__LIB_0__::func_803(54073871);
			break;
		case 198200492:
			__LIB_0__::func_803(198200492);
			__LIB_0__::func_804(-1124061431);
			__LIB_0__::func_804(52706132);
			__LIB_0__::func_804(-259123672);
			break;
		case -1124061431:
			__LIB_0__::func_804(198200492);
			__LIB_0__::func_803(-1124061431);
			__LIB_0__::func_804(52706132);
			__LIB_0__::func_804(-259123672);
			break;
		case 52706132:
			__LIB_0__::func_804(198200492);
			__LIB_0__::func_804(-1124061431);
			__LIB_0__::func_803(52706132);
			__LIB_0__::func_804(-259123672);
			break;
		case -259123672:
			__LIB_0__::func_804(198200492);
			__LIB_0__::func_804(-1124061431);
			__LIB_0__::func_804(52706132);
			__LIB_0__::func_803(-259123672);
			break;
		case -919512195:
			__LIB_0__::func_803(-919512195);
			__LIB_0__::func_804(-1925798111);
			__LIB_0__::func_804(420709909);
			__LIB_0__::func_804(1703426636);
			break;
		case -1925798111:
			__LIB_0__::func_803(-1925798111);
			__LIB_0__::func_804(-919512195);
			__LIB_0__::func_804(420709909);
			__LIB_0__::func_804(1703426636);
			break;
		case 420709909:
			__LIB_0__::func_803(420709909);
			__LIB_0__::func_804(-919512195);
			__LIB_0__::func_804(-1925798111);
			__LIB_0__::func_804(1703426636);
			break;
		case 1703426636:
			__LIB_0__::func_803(1703426636);
			__LIB_0__::func_804(-919512195);
			__LIB_0__::func_804(-1925798111);
			__LIB_0__::func_804(420709909);
			break;
		case -1223121209:
			__LIB_0__::func_803(-1223121209);
			__LIB_0__::func_804(630808005);
			break;
		case 630808005:
			__LIB_0__::func_803(630808005);
			__LIB_0__::func_804(-1223121209);
			break;
		case 1453909576:
			__LIB_0__::func_803(1453909576);
			__LIB_0__::func_804(1643531967);
			break;
		case 1643531967:
			__LIB_0__::func_803(1643531967);
			__LIB_0__::func_804(1453909576);
			break;
		case 0:
			__LIB_0__::func_803(0);
			__LIB_0__::func_804(473295046);
			__LIB_0__::func_804(-1738165526);
			break;
		case 473295046:
			__LIB_0__::func_803(473295046);
			__LIB_0__::func_804(0);
			__LIB_0__::func_804(-1738165526);
			break;
		case -1738165526:
			__LIB_0__::func_803(-1738165526);
			__LIB_0__::func_804(0);
			__LIB_0__::func_804(473295046);
			break;
		case 932909855:
			__LIB_0__::func_803(932909855);
			__LIB_0__::func_804(2051822093);
			break;
		case 2051822093:
			__LIB_0__::func_803(2051822093);
			__LIB_0__::func_804(932909855);
			break;
		case 405586984:
			__LIB_0__::func_803(405586984);
			__LIB_0__::func_804(1509509592);
			__LIB_0__::func_804(-959357075);
			__LIB_0__::func_804(-1311865656);
			break;
		case 1509509592:
			__LIB_0__::func_803(1509509592);
			__LIB_0__::func_804(405586984);
			__LIB_0__::func_804(-959357075);
			__LIB_0__::func_804(-1311865656);
			break;
		case -959357075:
			__LIB_0__::func_803(-959357075);
			__LIB_0__::func_804(1509509592);
			__LIB_0__::func_804(405586984);
			__LIB_0__::func_804(-1311865656);
			break;
		case -1311865656:
			__LIB_0__::func_803(-1311865656);
			__LIB_0__::func_804(1509509592);
			__LIB_0__::func_804(-959357075);
			__LIB_0__::func_804(405586984);
			break;
		case -524145696:
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
			break;
		case 282809459:
			__LIB_0__::func_803(282809459);
			__LIB_0__::func_804(1626481264);
			__LIB_0__::func_804(-524145696);
			break;
		case 1626481264:
			__LIB_0__::func_803(1626481264);
			__LIB_0__::func_804(-524145696);
			__LIB_0__::func_804(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				__LIB_0__::func_803(885203519);
			}
			else
			{
				__LIB_0__::func_804(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				__LIB_0__::func_803(-1080627546);
			}
			else
			{
				__LIB_0__::func_804(-1080627546);
			}
			break;
		default:
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
			break;
	}
}

void func_780(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == __LIB_1__::func_35(iParam1, 5) || iParam0 == __LIB_1__::func_35(iParam1, 6)) || iParam0 == __LIB_1__::func_35(iParam1, 7)) || iParam0 == __LIB_1__::func_35(iParam1, 8)) || iParam0 == __LIB_1__::func_35(iParam1, 9))
	{
		func_770(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		__LIB_9__::func_355(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		__LIB_1__::func_450(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_781(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	iVar0 = 1;
	if ((((iParam0 == __LIB_1__::func_35(iParam1, 5) || iParam0 == __LIB_1__::func_35(iParam1, 6)) || iParam0 == __LIB_1__::func_35(iParam1, 7)) || iParam0 == __LIB_1__::func_35(iParam1, 8)) || iParam0 == __LIB_1__::func_35(iParam1, 9))
	{
		if (func_770(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			__LIB_9__::func_355(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				__LIB_1__::func_450(51, 0, 0, iVar0, __LIB_1__::func_34(iParam1, 20), 1, 0);
			}
		}
		else
		{
			__LIB_9__::func_355(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				__LIB_1__::func_450(51, 0, 0, iVar0, __LIB_1__::func_34(iParam1, 20), 1, 0);
			}
		}
	}
}

void func_837(var uParam0)
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
			__LIB_4__::func_717(&(uParam0->f_296));
		}
		func_1436(&(uParam0->f_284), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_10__::func_316(uParam0, 0f, 0f, 0f);
		func_1438(uParam0);
		func_1439(uParam0);
		__LIB_10__::func_552(uParam0, 0f, 0f, 0f, 0, 0);
		__LIB_10__::func_416(uParam0);
		__LIB_0__::func_88(uParam0, 4);
		__LIB_0__::func_106(uParam0, 0);
		__LIB_1__::func_550(&(Global_1946804.f_1497), Global_35, 1, 64, 1, 1, 1);
		if (CAM::_0x927B810E43E99932(&(uParam0->f_297)))
		{
			CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_297));
		}
	}
}

void func_844(var uParam0)
{
	if (!__LIB_0__::func_84(uParam0, 536870912))
	{
		__LIB_0__::func_106(uParam0, 1);
		__LIB_6__::func_726(&(uParam0->f_285), uParam0->f_296);
		__LIB_1__::func_436();
		__LIB_0__::func_88(uParam0, 536870912);
	}
	if (__LIB_0__::func_84(uParam0, 524288))
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	__LIB_10__::func_417(uParam0);
	__LIB_8__::func_726(uParam0, 1);
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

bool func_848(int iParam0)
{
	return MISC::IS_BIT_SET(iLocal_298, iParam0);
}

void func_849()
{
	if (func_83(128))
	{
		func_432(0);
	}
}

void func_850()
{
	if (iLocal_16 == 4 && iLocal_15 == 1)
	{
		func_432(1);
	}
}

void func_851()
{
	if (iLocal_16 == 5 && iLocal_15 == 1)
	{
		func_432(2);
	}
}

void func_852()
{
	if (iLocal_16 == 7 && iLocal_15 == 1)
	{
		func_432(3);
	}
}

void func_853()
{
	if (iLocal_16 == 8 && iLocal_15 == 1)
	{
		func_432(4);
	}
}

void func_854()
{
	if (iLocal_16 == 9 && iLocal_15 == 1)
	{
		func_432(5);
	}
}

void func_855(char[4] cParam0)
{
	if (!func_83(1024))
	{
		if ((__LIB_0__::func_266(Global_35, vLocal_311, 40f, 1, 1) && PED::IS_TRACKED_PED_VISIBLE(iLocal_143)) && !__LIB_1__::func_378(vLocal_311, 10f, 1075838976 /* Float: 2.5f */, 1, 1084227584 /* Float: 5f */))
		{
			func_80(1024);
		}
	}
	else
	{
		if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
		{
			__LIB_1__::func_539();
			return;
		}
		func_1454(vLocal_311, &(cParam0->f_3), 0f, 0f, 0f, 30f, 10f, 2000, 2000, 2000, 1);
	}
}

void func_856(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (func_76())
			{
				MISC::SET_BIT(&iLocal_297, iParam0);
			}
			break;
		case 1:
			if (func_75())
			{
				MISC::SET_BIT(&iLocal_297, iParam0);
			}
			break;
	}
}

void func_876(char[4] cParam0)
{
	if (__LIB_0__::func_272(iLocal_143, 0))
	{
		func_1470();
		switch (iLocal_18)
		{
			case 1:
				func_1471();
				break;
			case 2:
				func_1472(cParam0);
				break;
			case 3:
				func_1473();
				Jump @245; //curOff = 140
				func_1474(cParam0);
				Jump @245; //curOff = 149
				func_1475(cParam0);
				Jump @245; //curOff = 158
				func_1476();
				Jump @245; //curOff = 165
				func_1477(cParam0);
				Jump @245; //curOff = 174
				func_1478(cParam0);
				Jump @245; //curOff = 183
				func_1479(cParam0);
				Jump @245; //curOff = 192
				func_1480();
				Jump @245; //curOff = 199
				func_1481(cParam0);
				Jump @245; //curOff = 208
				func_1482(cParam0);
				Jump @245; //curOff = 217
				func_1483(cParam0);
				Jump @245; //curOff = 226
				__LIB_0__::func_11();
				Jump @245; //curOff = 233
				func_1485(cParam0);
			}
			else if (iLocal_18 != 13 && iLocal_18 != 12)
			{
				if (iLocal_18 != 16)
				{
					__LIB_10__::func_592(16);
				}
			}
		}
void func_877(char[4] cParam0)
{
	switch (iLocal_16)
	{
		case 0:
			func_1486(cParam0);
			break;
		case 1:
			func_1487();
			break;
		case 2:
			func_1488(cParam0);
			break;
	}
	__LIB_13__::func_266();
}

int func_878(char[4] cParam0)
{
	if (iLocal_18 == 4)
	{
		if (__LIB_0__::func_394(Global_35, iLocal_144[1], 0))
		{
			if (bLocal_179)
			{
				if (!bLocal_178)
				{
					__LIB_1__::func_422("OBJ_FOLLOW", 7500, 0, 1, 0, 0, -1, -1, 0);
					bLocal_178 = true;
				}
				else
				{
					func_79(cParam0, "OBJ_FOLLOW", ENTITY::GET_ENTITY_COORDS(iLocal_143, true, false));
				}
				__LIB_1__::func_721(7);
				__LIB_1__::func_643();
				if (MAP::DOES_BLIP_EXIST(iLocal_152))
				{
					MAP::_BLIP_SET_MODIFIER(iLocal_152, -546708623);
				}
				bLocal_179 = false;
			}
		}
		else if (!bLocal_179)
		{
			func_79(cParam0, "OBJ_MOUNT", ENTITY::GET_ENTITY_COORDS(iLocal_143, true, false));
			if (MAP::DOES_BLIP_EXIST(iLocal_152))
			{
				MAP::_BLIP_REMOVE_MODIFIER(iLocal_152, -546708623);
			}
			__LIB_1__::func_718(7);
			__LIB_1__::func_643();
			bLocal_179 = true;
		}
	}
	switch (iLocal_16)
	{
		case 0:
			func_1490(cParam0);
			return func_1491(cParam0);
		case 1:
			if (!func_381(1048576))
			{
				if (!__LIB_6__::func_904() && __LIB_0__::func_48(iLocal_143, Global_35, 20f, 1))
				{
					if (__LIB_10__::func_364(&(cParam0->f_2106), "LS_HNT2_RR", 0))
					{
						func_67(1048576);
					}
				}
			}
			else
			{
				func_1490(cParam0);
			}
			return func_1492();
		case 2:
			if (!func_381(2097152))
			{
				if (!__LIB_6__::func_904() && __LIB_0__::func_48(iLocal_143, Global_35, 20f, 1))
				{
					if (__LIB_10__::func_364(&(cParam0->f_2106), "LS_HNT2_RC", 0))
					{
						func_67(2097152);
					}
				}
			}
			else
			{
				func_1490(cParam0);
			}
			return func_1493();
	}
	return 0;
}

void func_880()
{
	switch (iLocal_16)
	{
		case 0:
			__LIB_0__::func_11();
			break;
		case 1:
			__LIB_0__::func_11();
			break;
		case 2:
			__LIB_5__::func_817();
			break;
	}
	func_1497();
	func_71(11);
}

void func_881()
{
	int iVar0;
	func_1498();
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (__LIB_0__::func_272(uLocal_147[iVar0], 0))
		{
			switch (iLocal_20[iVar0])
			{
				case 0:
					func_1499(iVar0);
					break;
				case 1:
					func_1500(iVar0);
					break;
				case 2:
					func_1501(iVar0);
					break;
				case 3:
					func_1502(iVar0);
					break;
				case 4:
					func_1503(iVar0);
					break;
				case 6:
					func_1504(iVar0);
					break;
				case 5:
					func_1505(iVar0);
					break;
				case 7:
					func_1506(iVar0);
					break;
			}
		}
		else
		{
			if (iLocal_20[iVar0] != 8)
			{
				__LIB_4__::func_89(&(vLocal_343[1 /*3*/]), 0);
				func_664(8, iVar0);
			}
			if (iVar0 == 0)
			{
				if (iLocal_16 == 8)
				{
					if (!MAP::DOES_BLIP_EXIST(iLocal_156))
					{
						iLocal_156 = MAP::_BLIP_ADD_FOR_ENTITY(408396114, uLocal_147[iVar0]);
						MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_156, "BLIP_COUGAR");
					}
				}
			}
		}
		iVar0++;
	}
}

void func_882()
{
	if (func_427(iLocal_270, Global_36))
	{
		if (func_1507())
		{
			func_259();
			if (!func_83(65536))
			{
				func_80(65536);
			}
		}
		else if (func_1508())
		{
			func_259();
			if (func_83(65536))
			{
				func_888(65536);
			}
		}
		func_80(128);
		if (!func_83(268435456))
		{
			if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(Local_67[3 /*4*/]))
			{
				if (__LIB_6__::func_912(Global_35, iLocal_143, Local_67[3 /*4*/], 1112014848 /* Float: 50f */))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
				}
				else
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
				}
			}
		}
		else
		{
			func_1510();
		}
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DIVE"), false);
		if (!func_83(32))
		{
			PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "Cautious", 1f, -1);
			func_80(32);
		}
		func_1511();
	}
	else
	{
		if (VOLUME::_DOES_VOLUME_EXIST(uLocal_276[1]))
		{
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uLocal_276[1], true, 0))
			{
				func_80(128);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DIVE"), false);
				if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(Local_67[3 /*4*/]))
				{
					if (__LIB_6__::func_912(Global_35, iLocal_143, Local_67[3 /*4*/], 1112014848 /* Float: 50f */))
					{
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
					}
					else
					{
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
					}
				}
			}
			else
			{
				PED::_0x411189E51B8020BA(Global_35, "Cautious");
				func_888(128);
			}
		}
		if (__LIB_0__::func_899(&(vLocal_353[1 /*3*/])) && !__LIB_0__::func_901(&(vLocal_353[1 /*3*/])))
		{
			__LIB_2__::func_255(&(vLocal_353[1 /*3*/]));
		}
	}
}

void func_883(char[4] cParam0)
{
	if (__LIB_0__::func_396(Global_35))
	{
		if (VOLUME::_DOES_VOLUME_EXIST(uLocal_276[1]))
		{
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uLocal_276[1], true, 0))
			{
				if (__LIB_0__::func_272(PED::GET_MOUNT(Global_35), 0))
				{
					PED::_0xBAE08F00021BFFB2(PED::GET_MOUNT(Global_35), 1);
				}
			}
		}
	}
	else if (__LIB_0__::func_272(PED::_GET_LAST_MOUNT(Global_35), 0))
	{
		if (VOLUME::_DOES_VOLUME_EXIST(uLocal_276[1]))
		{
			if (ENTITY::IS_ENTITY_IN_VOLUME(PED::_GET_LAST_MOUNT(Global_35), uLocal_276[1], true, 0))
			{
				if (!PED::GET_PED_CONFIG_FLAG(PED::_GET_LAST_MOUNT(Global_35), 136, true))
				{
					PED::SET_PED_CONFIG_FLAG(PED::_GET_LAST_MOUNT(Global_35), 136, true);
				}
				if (!__LIB_0__::func_163(PED::_GET_LAST_MOUNT(Global_35), 713668775))
				{
					TASK::CLEAR_PED_TASKS(PED::_GET_LAST_MOUNT(Global_35), true, false);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PED::_GET_LAST_MOUNT(Global_35), -2119.105f, 14.2106f, 261.703f, 1f, 20000, 0.25f, 0, 40000f);
				}
			}
			else if (PED::GET_PED_CONFIG_FLAG(PED::_GET_LAST_MOUNT(Global_35), 136, true))
			{
				PED::SET_PED_CONFIG_FLAG(PED::_GET_LAST_MOUNT(Global_35), 136, false);
			}
		}
	}
}

bool func_884()
{
	if (VOLUME::_DOES_VOLUME_EXIST(uLocal_276[2]))
	{
		if (ENTITY::IS_ENTITY_IN_VOLUME(iLocal_143, uLocal_276[2], true, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_885(var uParam0, int iParam1)
{
	vector3 vVar0;
	if (func_1081(uParam0, -1927389954, 1))
	{
		if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(*uParam0, -2122.491f, 29.79647f, 272.4812f, -2121.624f, 72.88728f, 251.8861f, 20f, false, true, 0))
		{
			if (iParam1 == 0)
			{
				return true;
			}
			else
			{
				vVar0 = { ENTITY::GET_ENTITY_COORDS(*uParam0, false, false) };
				if ((((VOLUME::_DOES_VOLUME_EXIST(uLocal_276[2]) && VOLUME::_IS_POSITION_INSIDE_VOLUME(uLocal_276[2], vVar0)) || (VOLUME::_DOES_VOLUME_EXIST(uLocal_276[3]) && VOLUME::_IS_POSITION_INSIDE_VOLUME(uLocal_276[3], vVar0))) || (VOLUME::_DOES_VOLUME_EXIST(uLocal_276[4]) && VOLUME::_IS_POSITION_INSIDE_VOLUME(uLocal_276[4], vVar0))) || (VOLUME::_DOES_VOLUME_EXIST(uLocal_276[5]) && VOLUME::_IS_POSITION_INSIDE_VOLUME(uLocal_276[5], vVar0)))
				{
					return false;
				}
				return true;
			}
		}
	}
	return false;
}

void func_886()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_143))
	{
		if (!PED::_0x5102307CE88798EB(iLocal_143))
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(iLocal_143);
		}
		if (!func_83(67108864))
		{
			if (!PED::IS_TRACKED_PED_VISIBLE(iLocal_143) && !__LIB_0__::func_48(iLocal_143, Global_35, 10f, 1))
			{
				if (MAP::DOES_BLIP_EXIST(iLocal_152))
				{
					if (MAP::_BLIP_SET_MODIFIER(iLocal_152, -1269631044))
					{
						func_80(67108864);
					}
				}
				else
				{
					__LIB_10__::func_528(&iLocal_152, iLocal_143, -89429847, "BLIP_WINPED");
				}
			}
		}
		else if (PED::IS_TRACKED_PED_VISIBLE(iLocal_143))
		{
			if (MAP::DOES_BLIP_EXIST(iLocal_152))
			{
				if (MAP::_BLIP_SET_MODIFIER(iLocal_152, 1679075994))
				{
					func_888(67108864);
				}
			}
			else
			{
				__LIB_10__::func_528(&iLocal_152, iLocal_143, -89429847, "BLIP_WINPED");
				func_888(67108864);
			}
		}
	}
}

void func_887()
{
	if (__LIB_0__::func_272(iLocal_143, 0))
	{
		func_259();
		func_1514(0);
		if (!__LIB_0__::func_163(iLocal_143, -2017877118))
		{
			TASK::TASK_PLAY_ANIM(iLocal_143, Local_29[0 /*2*/], Local_29[0 /*2*/].f_1, 1.5f, -1.5f, -1, 0, 0f, false, 0, false, 0, false);
		}
		__LIB_0__::func_37(&(vLocal_327[0 /*3*/]));
		__LIB_4__::func_89(&(vLocal_327[2 /*3*/]), 0);
	}
	__LIB_10__::func_592(10);
}

void func_888(int iParam0)
{
	__LIB_1__::func_681(&iLocal_295, iParam0);
}

void func_892()
{
	int iVar0;
	if (!__LIB_0__::func_272(uLocal_147[0], 0))
	{
		func_71(8);
		return;
	}
	if (iLocal_18 == 13)
	{
		if (__LIB_0__::func_272(uLocal_147[0], 0))
		{
			iVar0 = 7;
		}
		else
		{
			iVar0 = 8;
		}
	}
	else if (iLocal_18 == 12)
	{
		iVar0 = 5;
	}
	else if (iLocal_20[0] == 5)
	{
		iVar0 = 7;
	}
	else if (iLocal_18 < 4)
	{
		iVar0 = 7;
	}
	else if (!__LIB_0__::func_272(uLocal_147[0], 0))
	{
		iVar0 = 8;
	}
	else
	{
		iVar0 = 5;
	}
	func_71(iVar0);
}

void func_894()
{
	if (!func_83(8) && func_83(1073741824 /* Float: 2f */))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_143))
		{
			if (!PED::IS_PED_RAGDOLL(iLocal_143))
			{
				GRAPHICS::_ADD_BLOOD_POOL(ENTITY::GET_ENTITY_COORDS(iLocal_143, false, false), true);
				func_80(8);
			}
		}
	}
}

bool func_895(char[4] cParam0)
{
	if ((((__LIB_0__::func_266(Global_35, vLocal_311, 10f, 1, 1) && func_83(1024)) && __LIB_4__::func_91(&(cParam0->f_3))) || __LIB_9__::func_178(&(cParam0->f_3)) >= 5f) || ((__LIB_0__::func_266(Global_35, vLocal_311, 5f, 1, 1) && ENTITY::IS_ENTITY_ON_SCREEN(iLocal_143)) && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_143)))
	{
		return true;
	}
	return false;
}

bool func_896()
{
	if (!__LIB_0__::func_272(uLocal_147[0], 0))
	{
		return true;
	}
	return false;
}

void func_897(char[4] cParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (3 - 1))
	{
		if (__LIB_0__::func_48(Local_42[iVar0 /*8*/], Global_35, 5.5f, 0))
		{
			if (!bLocal_172)
			{
				if (!__LIB_6__::func_904() && __LIB_9__::func_178(&uLocal_381) > 2f)
				{
					if (__LIB_10__::func_364(&(cParam0->f_2106), "LS_HNT2_CORPSE1", 0))
					{
						__LIB_2__::func_259(&uLocal_381);
						TASK::TASK_LOOK_AT_ENTITY(Global_35, Local_42[iVar0 /*8*/], 5000, 0, 51, 0);
						iLocal_299 = iVar0;
						bLocal_172 = true;
					}
				}
			}
			else if (!bLocal_173)
			{
				if (iVar0 != iLocal_299)
				{
					if (!__LIB_6__::func_904() && __LIB_9__::func_178(&uLocal_381) > 2f)
					{
						if (__LIB_10__::func_364(&(cParam0->f_2106), "LS_HNT2_CORPSE2", 0))
						{
							__LIB_2__::func_259(&uLocal_381);
							TASK::TASK_LOOK_AT_ENTITY(Global_35, Local_42[iVar0 /*8*/], 5000, 0, 51, 0);
							bLocal_173 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
}

float func_899()
{
	int iVar0;
	int iVar1;
	WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false);
	WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar1, true, 1, false);
	if (iVar0 == joaat("WEAPON_MELEE_DAVY_LANTERN") || iVar1 == joaat("WEAPON_MELEE_DAVY_LANTERN"))
	{
		return 8f;
	}
	return 2f;
}

void func_905(char[4] cParam0)
{
	if (func_1517(iLocal_144[1], 1))
	{
	}
	if (func_1517(Global_35, 0))
	{
	}
	if (!func_1517(Global_35, 0))
	{
		if (func_1517(iLocal_144[1], 1))
		{
			func_1518(cParam0);
			if (__LIB_0__::func_899(&(vLocal_353[5 /*3*/])))
			{
				__LIB_0__::func_37(&(vLocal_353[5 /*3*/]));
			}
			return;
		}
		if (!__LIB_0__::func_899(&(vLocal_353[5 /*3*/])))
		{
			__LIB_2__::func_259(&(vLocal_353[5 /*3*/]));
		}
		else if (__LIB_9__::func_178(&(vLocal_353[5 /*3*/])) > 1f)
		{
			if (!bLocal_409)
			{
				bLocal_414 = false;
				if (!MAP::DOES_BLIP_EXIST(iLocal_157))
				{
					iLocal_157 = MAP::_BLIP_ADD_FOR_ENTITY(408396114, iLocal_151);
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_157, "BLIP_PELT");
					func_79(cParam0, "OBJ_PLT_DROP", 0f, 0f, 0f);
					__LIB_1__::func_422("OBJ_PLT_DROP", 7500, 0, 1, 0, 0, -1, -1, 0);
					__LIB_1__::func_721(7);
					__LIB_0__::func_37(&(vLocal_353[5 /*3*/]));
				}
			}
		}
	}
	else if (!bLocal_414)
	{
		__LIB_0__::func_325(&iLocal_157);
		func_79(cParam0, "OBJ_PLT_STOW", 0f, 0f, 0f);
		__LIB_1__::func_422("OBJ_PLT_STOW", 7500, 0, 1, 0, 0, -1, -1, 0);
		__LIB_1__::func_718(7);
		if (!bLocal_410)
		{
			bLocal_410 = true;
		}
		if (__LIB_0__::func_899(&(vLocal_353[5 /*3*/])))
		{
			__LIB_0__::func_37(&(vLocal_353[5 /*3*/]));
		}
		bLocal_414 = true;
	}
}

void func_906(char[4] cParam0)
{
	if (!func_381(4096))
	{
		if (__LIB_0__::func_272(iLocal_144[0], 0))
		{
			if (__LIB_0__::func_48(Global_35, iLocal_144[0], 10f, 1))
			{
				if (__LIB_10__::func_364(&(cParam0->f_2106), "PLY_SCAREWINHOR", 0))
				{
					AITRANSPORT::_0xBA8818212633500A(iLocal_144[0], 0, 0);
					PED::SET_PED_CONFIG_FLAG(iLocal_144[0], 324, false);
					__LIB_7__::func_345(iLocal_144[0], 0);
					__LIB_2__::func_788(&(iLocal_144[0]), 0, 1, 1);
					func_67(4096);
				}
			}
		}
	}
}

void func_907()
{
	if (!func_83(67108864))
	{
		if (!__LIB_1__::func_220(Local_136.f_5))
		{
			return;
		}
		if (func_1520(&iLocal_149, Local_136.f_4))
		{
			func_80(67108864);
			TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_149, Local_136, 3f, -1, false, false, false, false);
			func_998(10, 1);
		}
	}
	else if (!__LIB_0__::func_272(iLocal_149, 0))
	{
		func_888(67108864);
	}
}

int func_909(int iParam0)
{
	return __LIB_0__::func_800(iParam0, __LIB_0__::func_949(0), 724026534, 0);
}

bool func_910(int iParam0)
{
	int iVar0;
	struct<2> Var1[3];
	int iVar8;
	int iVar9;
	int iVar10;
	iVar0 = __LIB_0__::func_398(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return false;
	}
	iVar9 = 0;
	while (iVar9 < 3)
	{
		iVar10 = PED::_0x0CEEB6F4780B1F2F(iVar0, iVar9);
		if (__LIB_0__::func_144(iVar10, 0))
		{
			if (iVar9 > 0)
			{
				iVar8 = 0;
				while (iVar8 < iVar9)
				{
					if (iVar10 == Var1[iVar8 /*2*/])
					{
						Var1[iVar9 /*2*/] = 0;
						Var1[iVar8 /*2*/].f_1++;
					}
					else
					{
						Var1[iVar9 /*2*/] = iVar10;
						Var1[iVar9 /*2*/].f_1 = 1;
					}
					iVar8++;
				}
			}
			else
			{
				Var1[iVar9 /*2*/] = iVar10;
				Var1[iVar9 /*2*/].f_1 = 1;
			}
		}
		iVar9++;
	}
	iVar9 = 0;
	iVar9 = 0;
	while (iVar9 < 3)
	{
		if (__LIB_0__::func_144(Var1[iVar9 /*2*/], 0) && Var1[iVar9 /*2*/] == joaat("PROVISION_LOANSHARK_SKINS"))
		{
			if (iParam0 == 0)
			{
				bLocal_180 = true;
			}
			if (iParam0 == 1)
			{
				bLocal_181 = true;
			}
			return true;
		}
		iVar9++;
	}
	if (iParam0 == 0)
	{
		bLocal_180 = false;
	}
	if (iParam0 == 1)
	{
		bLocal_181 = false;
	}
	return false;
}

void func_934()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_1551();
	func_1552();
	func_1553();
	func_1554();
	func_1555();
	__LIB_1__::func_848();
	__LIB_0__::func_376();
}

void func_935(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	func_164(iParam0, 1, 1, -142743235, 1);
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

void func_968()
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
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_1577(&uVar4, &iVar1, &iVar2, &iVar3)))
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

bool func_992(char* sParam0)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_159))
	{
		return false;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_159, true, false))
	{
		return false;
	}
	if (!ANIMSCENE::_0xA9016536015DE29D(iLocal_159, sParam0))
	{
		return false;
	}
	if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_159, sParam0))
	{
		return true;
	}
	if (!ANIMSCENE::_0x0DF57F86FE71DBE5(iLocal_159, sParam0))
	{
		if (ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_159, sParam0))
		{
			func_537();
		}
	}
	return false;
}

char* func_993(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "LSHNT2_START";
		case 1:
			return "LSHNT2_SPLIT_UP";
		case 2:
			return "LSHNT2_FIND_WINTON";
		case 3:
			return "LSHNT2_KILL_COUGAR";
		case 4:
			return "LSHNT2_SKIN_COUGAR";
		case 5:
			return "LSHNT2_STOP";
		case 6:
			return "LSHNT2_FAIL";
	}
	return "";
}

void func_996()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_117[iVar0 /*18*/]))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(Local_117[iVar0 /*18*/]);
		}
		iVar0++;
	}
}

void func_998(int iParam0, bool bParam1)
{
	if (!__LIB_1__::func_918(iParam0))
	{
		return;
	}
	__LIB_9__::func_951(Global_1914319.f_3[iParam0 /*446*/].f_10, bParam1, 1);
}

void func_999()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (3 - 1))
	{
		__LIB_2__::func_788(&(Local_42[iVar0 /*8*/]), 1, 0, 1);
		iVar0++;
	}
}

void func_1000()
{
	int iVar0;
	if (VOLUME::_DOES_VOLUME_EXIST(uLocal_276[1]))
	{
		POPULATION::_0x74C2B3DC0B294102(uLocal_276[1]);
		PATHFIND::_0x2C87C3E1C7B96EE2(uLocal_276[1]);
	}
	iVar0 = 0;
	while (iVar0 <= (7 - 1))
	{
		__LIB_0__::func_172(uLocal_276[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		__LIB_0__::func_172(uLocal_271[iVar0]);
		iVar0++;
	}
	__LIB_0__::func_172(iLocal_290);
	__LIB_0__::func_172(iLocal_289);
	__LIB_0__::func_172(iLocal_288);
	__LIB_0__::func_172(iLocal_285);
	__LIB_0__::func_172(iLocal_286);
	__LIB_0__::func_172(iLocal_287);
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_284))
	{
		POPULATION::_0x74C2B3DC0B294102(iLocal_284);
		__LIB_1__::func_544(iLocal_284);
		VOLUME::_DELETE_VOLUME(iLocal_284);
	}
}

struct<4> func_1011(char* sParam0, vector3 vParam1)
{
	struct<4> Var0;
	Var0 = sParam0;
	Var0.f_1 = { vParam1 };
	return Var0;
}

struct<8> func_1012(vector3 vParam0, float fParam3, int iParam4, int iParam5)
{
	struct<8> Var0;
	Var0.f_1 = { vParam0 };
	Var0.f_4 = fParam3;
	Var0.f_5 = iParam4;
	Var0.f_6 = iParam5;
	return Var0;
}

struct<6> func_1014(vector3 vParam0, int iParam3, int iParam4)
{
	struct<6> Var0;
	Var0 = { vParam0 };
	Var0.f_4 = iParam3;
	Var0.f_5 = iParam4;
	return Var0;
}

int func_1077(var uParam0, int iParam1, int iParam2)
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
		return func_1077(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

bool func_1081(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(*uParam0) && bParam2)
	{
	}
	iVar0 = INTERIOR::GET_KEY_FOR_ENTITY_IN_ROOM(*uParam0);
	if (iParam1 == -1)
	{
		if (func_1625(iVar0))
		{
			return true;
		}
	}
	else if (iVar0 == iParam1)
	{
		return true;
	}
	return false;
}

void func_1092(var uParam0)
{
	Global_1392626[*uParam0 /*32*/].f_11 = iLocal_143;
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_143, 1);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_143, joaat("PLAYER"));
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_143, true);
	WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_143, true, true);
	__LIB_3__::func_459(iLocal_143, 0);
	PED::SET_PED_CAN_BE_TARGETTED(iLocal_143, false);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_143, false);
	__LIB_0__::func_862(iLocal_143, joaat("META_OUTFIT_DEFAULT"));
	PED::REQUEST_PED_VISIBILITY_TRACKING(iLocal_143);
	PED::SET_PED_CONFIG_FLAG(iLocal_143, 194, true);
	func_1631();
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_143, -1781.13f, -180.95f, 194.5f, -108.14f, true, false, true);
	ENTITY::_0x9587913B9E772D29(iLocal_143, 0);
	ENTITY::_0x18FF3110CF47115D(iLocal_143, 7, 0);
	if (!func_83(8388608))
	{
		iLocal_267 = PED::CREATE_GROUP(2);
		PED::SET_GROUP_FORMATION(iLocal_267, 10);
		PED::SET_PED_CONFIG_FLAG(iLocal_143, 279, true);
		PED::SET_PED_AS_GROUP_LEADER(iLocal_143, iLocal_267, false);
		PED::_0x0E9E95FDEDCC9D35(PLAYER::PLAYER_PED_ID(), 0, 0);
		PED::_0xD5BD1B5318A81994(iLocal_267, 1);
		PED::_0x9BBEAF8B0C007F1E(iLocal_143, 0);
		func_80(8388608);
	}
}

void func_1096(char* sParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_159, sParam0, iParam1, 0);
	}
}

void func_1124()
{
	if (__LIB_0__::func_272(iLocal_143, 0))
	{
		TASK::TASK_MOUNT_ANIMAL(iLocal_143, iLocal_144[0], 20000, -1, 1f, 1, 0, 0);
		__LIB_10__::func_592(1);
	}
}

void func_1140(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
	__LIB_2__::func_259(&(uParam0->f_1635));
}

void func_1177(var uParam0, int iParam1, int iParam2)
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
					__LIB_5__::func_123(uParam0, uParam0->f_1288[uParam0->f_241[iParam1 /*18*/].f_4 /*10*/].f_8, uParam0->f_241[iParam1 /*18*/].f_13, uParam0->f_241[iParam1 /*18*/].f_14);
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
						__LIB_4__::func_640(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[uParam0->f_241[iParam1 /*18*/].f_3 /*13*/].f_2), uParam0->f_3[uParam0->f_241[iParam1 /*18*/].f_5 /*13*/].f_2, uParam0->f_241[iParam1 /*18*/].f_13, uParam0->f_241[iParam1 /*18*/].f_14);
					}
					if ((__LIB_0__::func_84(&(uParam0->f_241[iParam1 /*18*/]), 128) && ENTITY::IS_ENTITY_A_PED(uParam0->f_3[uParam0->f_241[iParam1 /*18*/].f_5 /*13*/].f_2)) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[uParam0->f_241[iParam1 /*18*/].f_5 /*13*/].f_2)))
					{
						__LIB_4__::func_640(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3[uParam0->f_241[iParam1 /*18*/].f_5 /*13*/].f_2), uParam0->f_3[uParam0->f_241[iParam1 /*18*/].f_3 /*13*/].f_2, uParam0->f_241[iParam1 /*18*/].f_13, uParam0->f_241[iParam1 /*18*/].f_14);
					}
				}
			}
			break;
		case 4:
			func_1180(uParam0, iParam1, 0, 0);
			break;
	}
}

void func_1179(var uParam0, int iParam1, int iParam2)
{
	switch (uParam0->f_241[iParam1 /*18*/].f_2)
	{
		case 9:
			__LIB_10__::func_474(uParam0, iParam2, iParam1);
			break;
		case 4:
			func_1180(uParam0, iParam1, 0, 0);
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
				if (__LIB_1__::func_583(&(uParam0->f_1638)) >= IntToFloat((uParam0->f_782[uParam0->f_241[iParam1 /*18*/] /*41*/].f_25 / 1000)))
				{
					__LIB_10__::func_359(uParam0);
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
			Jump @357; //curOff = 319
			uParam0->f_241[iParam1 /*18*/].f_7 = 1;
			Jump @357; //curOff = 333
			uParam0->f_241[iParam1 /*18*/].f_7 = 1;
			uParam0->f_1451 = iParam1;
		}
int func_1180(var uParam0, int iParam1, bool bParam2, bool bParam3)
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
					func_1140(uParam0, 8);
				}
				else
				{
					__LIB_10__::func_293(uParam0, 131072);
					func_1140(uParam0, 11);
				}
			}
			else if (uParam0->f_1663)
			{
				func_1140(uParam0, 5);
			}
			else
			{
				func_1713(uParam0);
			}
			break;
		case 1:
			bVar0 = __LIB_9__::func_178(&(uParam0->f_1635)) >= 3f;
			if ((((!__LIB_0__::func_163(Global_35, 716706914) && !__LIB_0__::func_163(Global_35, 242628503)) && __LIB_9__::func_178(&(uParam0->f_1635)) >= 2.5f) || (!__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 0, 1, 0)) && !__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 1, 1, 0)))) || bVar0)
			{
				func_1713(uParam0);
				if (bVar0)
				{
				}
			}
			break;
		case 5:
		case 6:
			bVar0 = __LIB_9__::func_178(&(uParam0->f_1635)) >= 3.5f;
			iVar1 = 5664;
			if (__LIB_0__::func_274(&(uParam0->f_782[uParam0->f_1454 /*41*/]), 512))
			{
				iVar1 |= 128;
			}
			if (!__LIB_10__::func_292(uParam0, uParam0->f_1454))
			{
				iVar1 |= 2048;
			}
			if (__LIB_3__::func_869(Global_35, &(uParam0->f_1452), iVar1, 0, 0, 1084227584 /* Float: 5f */, 100, fVar3, fVar4))
			{
				func_1713(uParam0);
			}
			if ((!uParam0->f_1663 && !uParam0->f_1665) || bVar0)
			{
				uParam0->f_1452 = 0;
				if (__LIB_4__::func_576(uParam0) == 5 || iParam1 < 0)
				{
					func_1713(uParam0);
				}
				else
				{
					func_1714(uParam0, iParam1, bParam2);
					__LIB_2__::func_259(&(uParam0->f_1635));
					func_1140(uParam0, 7);
				}
				if (bVar0)
				{
				}
			}
			break;
		case 7:
			bVar0 = __LIB_9__::func_178(&(uParam0->f_1635)) >= 1f;
			if (__LIB_0__::func_491(Global_35, 242628503) || bVar0)
			{
				func_1140(uParam0, 3);
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
			__LIB_2__::func_259(&(uParam0->f_1635));
			func_1140(uParam0, 4);
			break;
		case 4:
			bVar0 = __LIB_9__::func_178(&(uParam0->f_1635)) >= 2f;
			if ((__LIB_0__::func_274(&(uParam0->f_782[iVar2 /*41*/]), 256) || !__LIB_1__::func_750(&uVar5)) || bVar0)
			{
				if (__LIB_1__::func_499())
				{
					__LIB_0__::func_573();
					func_1140(uParam0, 10);
				}
				else
				{
					func_1140(uParam0, 11);
				}
				if (bVar0)
				{
				}
			}
			break;
		case 10:
			bVar0 = __LIB_9__::func_178(&(uParam0->f_1635)) >= 2f;
			if (__LIB_1__::func_499() || bVar0)
			{
				func_1140(uParam0, 11);
				if (bVar0)
				{
				}
			}
			break;
		case 8:
			bVar0 = __LIB_9__::func_178(&(uParam0->f_1635)) >= 2f;
			iVar1 = 5664;
			if (__LIB_0__::func_274(&(uParam0->f_782[uParam0->f_1454 /*41*/]), 512))
			{
				iVar1 |= 128;
			}
			if (!__LIB_10__::func_292(uParam0, uParam0->f_1454))
			{
				iVar1 |= 2048;
			}
			if (__LIB_3__::func_869(Global_35, &(uParam0->f_1452), iVar1, 0, 0, 1084227584 /* Float: 5f */, 100, fVar3, fVar4) || bVar0)
			{
				uParam0->f_1452 = 0;
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(uParam0->f_1667, 0f);
				TASK::CLEAR_PED_TASKS(Global_35, true, false);
				func_1140(uParam0, 9);
				if (bVar0)
				{
				}
			}
			break;
		case 9:
			if (__LIB_9__::func_178(&(uParam0->f_1635)) >= 0.75f)
			{
				if (!__LIB_10__::func_278(uParam0, 8192))
				{
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(uParam0->f_1667, 50f);
				}
				VEHICLE::_0x7C06330BFDDA182E(uParam0->f_1667);
				__LIB_10__::func_293(uParam0, 131072);
				func_1140(uParam0, 11);
			}
			break;
		case 11:
			break;
	}
	return 0;
}

void func_1189(int iParam0, int* iParam1, var uParam2, float fParam3)
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
	fVar0 = __LIB_5__::func_439(fParam3 >= 0f, fParam3, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*iParam0, true, false)));
	if (fVar0 <= iParam1->f_26 || MISC::IS_BIT_SET(iParam1->f_21, 20))
	{
		__LIB_18__::func_773(iParam1, uParam2);
		func_1719(iParam1);
		func_1720(iParam1);
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
			__LIB_1__::func_448(Global_35, ENTITY::GET_ENTITY_COORDS(*iParam0, true, false), bVar2, iParam1->f_30, iParam1->f_31, iParam1->f_32, __LIB_5__::func_439(bVar3, iParam1->f_33, iParam1->f_34), 0, 1, 0, iVar1);
		}
		else if (((((MISC::IS_BIT_SET(*iParam1, 15) && !PED::IS_PED_ON_MOUNT(Global_35)) && __LIB_0__::func_272(iParam1->f_28, 0)) && __LIB_0__::func_48(Global_35, iParam1->f_28, (iParam1->f_26 + 1.75f), 1)) && !__LIB_0__::func_163(iParam1->f_28, 518218985)) && !__LIB_0__::func_163(iParam1->f_28, 242628503))
		{
			TASK::CLEAR_PED_TASKS(iParam1->f_28, true, false);
			TASK::TASK_SMART_FLEE_COORD(iParam1->f_28, Global_36, (iParam1->f_26 + 1.75f), -1, 256, 0.101f);
			iParam1->f_28 = 0;
		}
	}
}

int func_1226(var uParam0, float fParam1)
{
	if (__LIB_10__::func_981(uParam0, fParam1))
	{
		__LIB_0__::func_37(uParam0);
		return 1;
	}
	return 0;
}

bool func_1228(int iParam0)
{
	if (__LIB_11__::func_608() && __LIB_19__::func_311(Global_1392626[iParam0 /*32*/].f_11, 1103626240 /* Float: 25f */, 1))
	{
		return true;
	}
	return false;
}

int func_1257(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
			func_1257(iParam0, iParam1, __LIB_1__::func_614(iParam1, 0, 0), bParam3, iParam4);
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

void func_1436(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
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
		func_1861();
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

void func_1438(var uParam0)
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
			func_1868(iVar1, __LIB_10__::func_334(uParam0), __LIB_10__::func_335(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_1868(iVar3, __LIB_10__::func_334(uParam0), __LIB_10__::func_335(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_1439(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if ((__LIB_0__::func_84(uParam0, 268435456) && !__LIB_0__::func_86(__LIB_10__::func_334(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { __LIB_10__::func_334(uParam0) };
			func_1868(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

void func_1454(vector3 vParam0, float fParam3, vector3 vParam4, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	if (__LIB_0__::func_51(&(fParam3->f_3), 1))
	{
		__LIB_4__::func_498(fParam3);
		if (__LIB_1__::func_378(vParam0, fParam8, 2.5f, fParam12, 1084227584 /* Float: 5f */))
		{
			__LIB_1__::func_539();
		}
	}
	if (__LIB_4__::func_97(vParam0, fParam3, fParam8))
	{
		if (__LIB_0__::func_51(&(fParam3->f_3), 128))
		{
			__LIB_3__::func_518(fParam3, vParam0, iParam7, iParam10);
		}
		CAM::SET_GAMEPLAY_COORD_HINT(vParam0 + vParam4, iParam9, iParam10, iParam11, 0);
		if (!__LIB_0__::func_51(&(fParam3->f_3), 128))
		{
			__LIB_3__::func_518(fParam3, vParam0, iParam7, iParam10);
		}
	}
}

void func_1470()
{
	if (func_83(134217728))
	{
		__LIB_2__::func_966(iLocal_143, Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
		__LIB_2__::func_966(Global_35, iLocal_143, 1, 1, 1, 0, 1, 1, 0, 1, 1);
		__LIB_8__::func_602(&uLocal_424, iLocal_143);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), true);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), true);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), true);
	}
}

void func_1471()
{
	if (__LIB_0__::func_71(iLocal_143))
	{
		func_1631();
		if (PED::IS_PED_ON_MOUNT(Global_35))
		{
			func_72();
		}
		else
		{
			func_1884();
		}
	}
	else if (!__LIB_0__::func_163(iLocal_143, 1868526510))
	{
		func_1124();
	}
}

void func_1472(char[4] cParam0)
{
	if (!func_381(131072))
	{
		if (__LIB_9__::func_178(&(vLocal_327[0 /*3*/])) > 10f)
		{
			if (__LIB_10__::func_364(&(cParam0->f_2106), "LS_HNT2_MNTUP", 0))
			{
				func_67(131072);
			}
		}
	}
	else if (!func_381(262144))
	{
		if (__LIB_9__::func_178(&(vLocal_327[0 /*3*/])) > 20f)
		{
			if (__LIB_10__::func_364(&(cParam0->f_2106), "LS_HNT2_MNTUP", 0))
			{
				func_67(262144);
			}
		}
	}
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		__LIB_0__::func_37(&(vLocal_327[0 /*3*/]));
		func_67(131072);
		func_67(262144);
		func_72();
	}
}

void func_1473()
{
	if (!__LIB_0__::func_163(iLocal_143, 658540077))
	{
		if (__LIB_0__::func_266(iLocal_143, vLocal_305, 20f, 1, 1) || __LIB_0__::func_266(Global_35, vLocal_305, 20f, 1, 1))
		{
			func_1885();
			return;
		}
	}
}

void func_1474(char[4] cParam0)
{
	float fVar0;
	fVar0 = 1.501f;
	if (!func_381(524288))
	{
		__LIB_3__::func_732(0);
		if (__LIB_10__::func_364(&(cParam0->f_2106), "LS_HNT2_AMNTUP", 0))
		{
			func_67(524288);
		}
	}
	if (!func_381(128))
	{
		if (!__LIB_0__::func_48(Global_35, iLocal_143, 70f, 1))
		{
			__LIB_1__::func_422("OBJ_RET_HUNT", 7500, 0, 1, 0, 0, -1, -1, 0);
			func_67(128);
		}
	}
	if (__LIB_0__::func_266(iLocal_143, Local_67[0 /*4*/].f_1, 5f, 1, 1))
	{
		if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_143, 0))
		{
			fVar0 = 1.5f;
		}
	}
	else if (__LIB_0__::func_266(iLocal_143, Local_67[0 /*4*/].f_1, 14f, 1, 1))
	{
		if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_143, 0))
		{
			fVar0 = 1.5f;
		}
	}
	else if (!__LIB_0__::func_266(iLocal_143, vLocal_305, 40f, 1, 1))
	{
		if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(Local_67[0 /*4*/]) && TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_143, Local_67[0 /*4*/]))
		{
			if (TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_143) > 44)
			{
				if (!func_381(1048576))
				{
					if (__LIB_0__::func_48(iLocal_143, Global_35, 20f, 1))
					{
						if (__LIB_6__::func_903("LS_HNT2_RD1"))
						{
							if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("LS_HNT2_RD1") >= 12)
							{
								if (__LIB_10__::func_364(&(cParam0->f_2106), "LS_HNT2_RR", 0))
								{
									func_67(1048576);
								}
							}
						}
						else if (__LIB_10__::func_364(&(cParam0->f_2106), "LS_HNT2_RR", 0))
						{
							func_67(1048576);
						}
					}
				}
				fVar0 = 1.25f;
			}
			else
			{
				fVar0 = 1.501f;
			}
		}
		if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(Local_67[1 /*4*/]) && TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_143, Local_67[1 /*4*/]))
		{
			if (TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_143) < 22)
			{
				fVar0 = 1.25f;
			}
			else
			{
				fVar0 = 1.501f;
			}
			if (!func_381(2097152))
			{
				if (TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_143) >= 22)
				{
					if (!__LIB_6__::func_904() && __LIB_0__::func_48(iLocal_143, Global_35, 20f, 1))
					{
						if (__LIB_10__::func_364(&(cParam0->f_2106), "LS_HNT2_RC", 0))
						{
							func_67(2097152);
							iLocal_22 = 2;
						}
					}
				}
			}
			else
			{
				func_1490(cParam0);
			}
		}
		if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(Local_67[2 /*4*/]) && TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_143, Local_67[2 /*4*/]))
		{
			if (__LIB_6__::func_904())
			{
				fVar0 = 1.501f;
			}
			else
			{
				fVar0 = 1.75f;
			}
		}
	}
	else
	{
		if (!func_381(8192))
		{
			__LIB_3__::func_732(0);
			if (__LIB_10__::func_364(&(cParam0->f_2106), "LS_HNT2_SL", 0))
			{
				func_248(0);
				func_67(8192);
			}
		}
		if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_143, 0))
		{
			if (!__LIB_0__::func_266(iLocal_143, vLocal_305, 25f, 1, 1))
			{
				fVar0 = 1.501f;
			}
			else if (!__LIB_0__::func_266(iLocal_143, vLocal_305, 15f, 1, 1))
			{
				fVar0 = 1.25f;
			}
			else
			{
				fVar0 = 1f;
			}
		}
		if (func_83(8388608))
		{
			if (PLAYER::_0x2009F8AB7A5E9D6D(PLAYER::GET_PLAYER_INDEX()))
			{
				if (__LIB_0__::func_266(iLocal_143, vLocal_305, 20f, 1, 1))
				{
					PLAYER::_0x12E09E278C6C29B7(PLAYER::PLAYER_ID());
					if (__LIB_0__::func_272(iLocal_143, 0))
					{
						PED::REMOVE_PED_FROM_GROUP(iLocal_143);
						func_888(8388608);
						PED::REMOVE_GROUP(iLocal_267);
					}
				}
			}
		}
		else if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_143, 0))
		{
			if (!__LIB_0__::func_266(iLocal_143, vLocal_305, 25f, 1, 1))
			{
				TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_143, 1.501f, 0, -1082130432 /* Float: -1f */, 0);
			}
			else if (!__LIB_0__::func_266(iLocal_143, vLocal_305, 15f, 1, 1))
			{
				TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_143, 1.25f, 0, -1082130432 /* Float: -1f */, 0);
			}
			else
			{
				TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_143, 1f, 0, -1082130432 /* Float: -1f */, 0);
			}
		}
	}
	if (func_83(8388608))
	{
		__LIB_14__::func_84(iLocal_143, fVar0, 0, 1045220557 /* Float: 0.2f */, 1, 5f, 20f, 25f, 0.075f, 0.75f, 1, 1, 1045220557 /* Float: 0.2f */, 0);
	}
	if (!__LIB_0__::func_163(iLocal_143, 658540077))
	{
		if (!__LIB_0__::func_266(iLocal_143, vLocal_305, 20f, 1, 1))
		{
			func_1887(cParam0);
		}
		else
		{
			func_1888(cParam0);
		}
	}
}

void func_1475(char[4] cParam0)
{
	if (__LIB_0__::func_48(iLocal_143, Global_35, 10f, 1))
	{
		if (func_381(128))
		{
			func_79(cParam0, "OBJ_FOLLOW", ENTITY::GET_ENTITY_COORDS(iLocal_143, true, false));
			func_636(128);
		}
		if (__LIB_0__::func_71(iLocal_143))
		{
			func_72();
		}
		else
		{
			func_1889();
		}
	}
}

void func_1476()
{
	if (!__LIB_0__::func_71(iLocal_143))
	{
		func_1885();
	}
}

void func_1477(char[4] cParam0)
{
	func_1890(cParam0, "LS_HUNT2_WADIS", iLocal_291, 2, 12);
	if (!__LIB_0__::func_71(iLocal_143))
	{
		if (!__LIB_0__::func_163(iLocal_143, -875674219))
		{
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_143, Global_35, 5000, -1f, -1f, -1f);
		}
	}
	if ((((__LIB_0__::func_48(Global_35, iLocal_143, 15f, 1) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uLocal_276[0], true, 0)) && !PED::IS_PED_ON_MOUNT(Global_35)) && iLocal_16 == 3) && iLocal_15 == 1)
	{
		func_1891();
	}
}

void func_1478(char[4] cParam0)
{
	int iVar0;
	func_1892(cParam0);
	iVar0 = iLocal_294;
	if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_143, 0))
	{
		iVar0 = TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_143);
		if (func_83(268435456))
		{
			TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_143, 0.9f, 0, -1082130432 /* Float: -1f */, 0);
		}
		if (!func_381(4194304))
		{
			if (__LIB_0__::func_266(iLocal_143, -2120.552f, 25.76774f, 265.8063f, 2.5f, 1, 1))
			{
				if (__LIB_10__::func_364(&(cParam0->f_2106), "LS_HNT2_CAVE", 0))
				{
					func_67(4194304);
				}
			}
		}
		func_1893(cParam0);
		if (func_83(8192) && !func_83(16384))
		{
			if (!__LIB_0__::func_899(&uLocal_183))
			{
				__LIB_2__::func_259(&uLocal_183);
			}
			else if (__LIB_9__::func_178(&uLocal_183) > 0.5f || ENTITY::IS_ENTITY_IN_VOLUME(iLocal_143, uLocal_276[1], true, 0))
			{
				func_87();
				__LIB_0__::func_37(&uLocal_183);
			}
		}
	}
	if (func_1894(iVar0))
	{
		func_1895(cParam0);
	}
	else if ((!__LIB_0__::func_48(iLocal_143, Global_35, 10f, 1) && !func_884()) && !__LIB_0__::func_266(iLocal_143, -2120.787f, 65.68118f, 256.1146f, 5f, 1, 1))
	{
		func_1896();
		return;
	}
}

void func_1479(char[4] cParam0)
{
	func_1890(cParam0, "LS_HNT2_CAVE_BW", iLocal_292, 2, 12);
	func_1892(cParam0);
	func_1893(cParam0);
	if (__LIB_0__::func_48(iLocal_143, Global_35, 7f, 1))
	{
		func_1891();
	}
}

void func_1480()
{
	if ((((!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_143, Local_29[0 /*2*/], Local_29[0 /*2*/].f_1, 1) || ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_143, Local_29[0 /*2*/], Local_29[0 /*2*/].f_1) > 0.92f) || __LIB_9__::func_178(&(vLocal_327[2 /*3*/])) > 20f) || func_1508()) || func_1507())
	{
		if (!__LIB_0__::func_899(&(vLocal_327[0 /*3*/])))
		{
			__LIB_0__::func_37(&(vLocal_327[2 /*3*/]));
			__LIB_4__::func_89(&(vLocal_327[0 /*3*/]), 0);
			func_88();
		}
	}
}

void func_1481(char[4] cParam0)
{
	int iVar0;
	iVar0 = TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_143);
	if (func_1894(iVar0))
	{
		func_1895(cParam0);
		return;
	}
	func_1892(cParam0);
	func_1897(cParam0, iVar0);
}

void func_1482(char[4] cParam0)
{
	if (!func_381(8388608))
	{
		if (__LIB_9__::func_178(&(vLocal_327[4 /*3*/])) > 2f)
		{
			if (__LIB_10__::func_364(&(cParam0->f_2106), "LS_HNT2_SCREAM1", 0))
			{
				func_67(8388608);
			}
		}
	}
	if (__LIB_9__::func_178(&(vLocal_327[4 /*3*/])) > 1f)
	{
		func_1898(-2135.718f, 95.15447f, 246.4584f, -2135.718f, 95.15447f, 246.5484f);
	}
	if (__LIB_9__::func_178(&(vLocal_327[4 /*3*/])) > 4f)
	{
		if (!func_83(1073741824 /* Float: 2f */))
		{
			STREAMING::REQUEST_ANIM_DICT("AI_DAMAGE@DEAD@BASE");
			if (STREAMING::HAS_ANIM_DICT_LOADED("AI_DAMAGE@DEAD@BASE"))
			{
				TASK::TASK_PLAY_ANIM(iLocal_143, "AI_DAMAGE@DEAD@BASE", "dead_m", 1000f, -8f, 1000, 131072, 0f, false, 0, false, 0, false);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(iLocal_143, -2136.02f, 95.62f, 246.11f, -32.01f, true, true);
				STREAMING::REMOVE_ANIM_DICT("AI_DAMAGE@DEAD@BASE");
				func_80(1073741824 /* Float: 2f */);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_150))
	{
		if (!func_83(536870912))
		{
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_150, -2135.472f, 94.61709f, 245.5523f, false, true, true);
			ENTITY::_0x9587913B9E772D29(iLocal_150, 0);
			func_80(536870912);
		}
	}
}

void func_1483(char[4] cParam0)
{
	if (!func_381(536870912))
	{
		if (__LIB_10__::func_364(&(cParam0->f_2106), "LS_HNT2_DEAD", 0))
		{
			func_67(536870912);
		}
	}
	if (__LIB_3__::func_528(iLocal_143, uLocal_147[0]))
	{
		func_1899();
	}
	if (!__LIB_0__::func_272(uLocal_147[0], 0) && __LIB_0__::func_272(iLocal_143, 0))
	{
		__LIB_4__::func_63(iLocal_143, 0);
	}
}

void func_1485(char[4] cParam0)
{
	if (__LIB_0__::func_272(uLocal_147[0], 0))
	{
		if (__LIB_0__::func_48(iLocal_143, uLocal_147[0], func_899(), 1))
		{
			func_1901(cParam0, 0);
			return;
		}
	}
	if (__LIB_0__::func_48(iLocal_143, Global_35, func_899(), 1))
	{
		func_1901(cParam0, 0);
		return;
	}
}

void func_1486(char[4] cParam0)
{
	vector3 vVar0;
	float fVar3;
	if (!MAP::DOES_BLIP_EXIST(iLocal_152))
	{
		if (__LIB_0__::func_272(iLocal_143, 0))
		{
			__LIB_10__::func_528(&iLocal_152, iLocal_143, -89429847, "BLIP_WINPED");
			MAP::_BLIP_SET_MODIFIER(iLocal_152, -546708623);
		}
	}
	MAP::ALLOW_SONAR_BLIPS(true);
	iLocal_22 = 0;
	if (!__LIB_0__::func_71(Global_35))
	{
		func_79(cParam0, "OBJ_MOUNT", ENTITY::GET_ENTITY_COORDS(iLocal_143, true, false));
		bLocal_179 = true;
	}
	else
	{
		func_79(cParam0, "OBJ_FOLLOW", ENTITY::GET_ENTITY_COORDS(iLocal_143, true, false));
	}
	if (bLocal_423)
	{
		if (!__LIB_0__::func_71(Global_35))
		{
			__LIB_1__::func_422("OBJ_MOUNT", 7500, 0, 1, 0, 0, -1, -1, 0);
			__LIB_1__::func_718(7);
			__LIB_1__::func_643();
			if (MAP::DOES_BLIP_EXIST(iLocal_152))
			{
				MAP::_BLIP_REMOVE_MODIFIER(iLocal_152, -546708623);
			}
			bLocal_179 = true;
		}
		else
		{
			__LIB_1__::func_422("OBJ_FOLLOW", 7500, 0, 1, 0, 0, -1, -1, 0);
			bLocal_178 = true;
		}
	}
	__LIB_0__::func_172(iLocal_285);
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_284))
	{
		vVar0 = { -2017.404f, -190.145f, 209.7342f };
		fVar3 = 325f;
		iLocal_284 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar0, 0f, 0f, 0f, fVar3, fVar3, fVar3, "LS_HUNT2ONMISS");
		__LIB_2__::func_261(iLocal_284, "LS_HUNT2ONMISS", 1, 0, 0, 0, -1082130432 /* Float: -1f */);
		__LIB_2__::func_43(iLocal_284, 0, 0, 0, 0);
	}
}

void func_1487()
{
	iLocal_22 = 1;
	func_72();
	func_1904();
}

void func_1488(char[4] cParam0)
{
	__LIB_0__::func_172(cParam0->f_2210[0]);
	__LIB_0__::func_172(cParam0->f_2210[1]);
	__LIB_0__::func_172(iLocal_285);
	iLocal_22 = 2;
	func_77();
	func_72();
	func_1904();
}

void func_1490(char[4] cParam0)
{
	if (!Local_35[iLocal_22 /*2*/].f_1)
	{
		if ((((((__LIB_0__::func_272(iLocal_143, 0) && !__LIB_6__::func_904()) && (iLocal_18 == 4 || iLocal_18 == 3)) && __LIB_0__::func_48(iLocal_143, Global_35, 20f, 1)) && !__LIB_0__::func_266(iLocal_143, Local_67[iLocal_19 /*4*/].f_1, 10f, 1, 1)) && __LIB_0__::func_71(Global_35)) && __LIB_0__::func_71(iLocal_143))
		{
			if ((iLocal_22 == 1 && TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_143, 0)) && TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_143) < 3)
			{
				return;
			}
			if (__LIB_10__::func_364(&(cParam0->f_2106), Local_35[iLocal_22 /*2*/], 0))
			{
				Local_35[iLocal_22 /*2*/].f_1 = 1;
			}
		}
	}
}

int func_1491(char[4] cParam0)
{
	if (!func_381(8))
	{
		if ((!__LIB_6__::func_904() && __LIB_0__::func_48(Global_35, iLocal_143, 15f, 1)) && !CAM::IS_SCREEN_FADING_IN())
		{
			if (__LIB_10__::func_364(&(cParam0->f_2106), "LS_HNT2_HORSE", 0))
			{
				func_67(8);
			}
		}
	}
	if (func_1905())
	{
		return 1;
	}
	return 0;
}

int func_1492()
{
	if (func_1905())
	{
		return 1;
	}
	return 0;
}

int func_1493()
{
	PED::_0x9E3842E5DAD69F80(uLocal_276[0]);
	if (__LIB_0__::func_266(Global_35, vLocal_305, 50f, 1, 1))
	{
		func_80(iLocal_23[0]);
		func_80(iLocal_23[1]);
	}
	if (func_83(4) && iLocal_18 == 7)
	{
		return 1;
	}
	return 0;
}

void func_1497()
{
	int iVar0;
	iVar0 = iLocal_19;
	iVar0++;
	iLocal_294 = 0;
	iLocal_19 = iVar0;
}

void func_1498()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		if (!iLocal_300[iVar0])
		{
			if (VOLUME::_DOES_VOLUME_EXIST(uLocal_271[iVar0]))
			{
				if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uLocal_271[iVar0], true, 0) || ENTITY::IS_ENTITY_IN_VOLUME(iLocal_143, uLocal_271[iVar0], true, 0))
				{
					func_1906(iVar0);
				}
			}
		}
		iVar0++;
	}
}

void func_1499(int iParam0)
{
	func_1907(iParam0);
}

void func_1500(int iParam0)
{
	if (iLocal_18 == 12)
	{
		func_1908(iParam0);
		return;
	}
}

void func_1501(int iParam0)
{
	if (!__LIB_0__::func_272(iLocal_143, 0))
	{
		if (__LIB_1__::func_348(iLocal_143, Global_35) <= (func_899() + 10f))
		{
			func_1909(iParam0);
		}
		else
		{
			func_1910(iParam0);
		}
	}
	if (bLocal_402)
	{
		if (PED::IS_PED_PERFORMING_MELEE_ACTION(uLocal_147[iParam0], 32768, 0))
		{
			func_1899();
			ENTITY::SET_ENTITY_INVINCIBLE(uLocal_147[iParam0], false);
			PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(uLocal_147[iParam0], 1);
			PED::SET_PED_CAN_TORSO_REACT_IK(uLocal_147[iParam0], true);
			bLocal_402 = false;
		}
	}
	if (iParam0 == 0)
	{
		func_1911(iParam0);
	}
}

void func_1502(int iParam0)
{
	float fVar0;
	fVar0 = __LIB_1__::func_348(uLocal_147[iParam0], Global_35);
	if (fVar0 < (func_899() - 1f) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_147[iParam0], Global_35, 1, 1))
	{
		func_1909(iParam0);
	}
}

void func_1503(int iParam0)
{
	float fVar0;
	if (iLocal_16 == 5)
	{
		func_1908(0);
		return;
	}
	if (iLocal_18 == 14)
	{
		func_1912(iParam0);
	}
	fVar0 = __LIB_1__::func_348(uLocal_147[iParam0], Global_35);
	if (fVar0 < (func_899() + 10f))
	{
		func_1909(iParam0);
	}
}

void func_1504(int iParam0)
{
	if (iLocal_18 == 14)
	{
		func_1912(iParam0);
	}
	if (!__LIB_3__::func_996(Global_35))
	{
		func_1909(iParam0);
	}
}

void func_1505(int iParam0)
{
	if ((!func_1081(&Global_35, -1, 1) && !func_1081(&(uLocal_147[iParam0]), -1, 1)) && !func_1913(iParam0))
	{
		func_1914(iParam0);
	}
	if (__LIB_0__::func_899(&(vLocal_343[2 /*3*/])))
	{
		if (__LIB_9__::func_178(&(vLocal_343[2 /*3*/])) > 10f)
		{
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(uLocal_147[iParam0]);
			__LIB_0__::func_37(&(vLocal_343[2 /*3*/]));
		}
	}
	func_1911(iParam0);
	if (__LIB_3__::func_996(Global_35))
	{
		func_1915(iParam0);
	}
}

void func_1506(int iParam0)
{
	if (func_1913(iParam0))
	{
		func_1909(iParam0);
	}
	else if (__LIB_0__::func_266(uLocal_147[iParam0], Local_42[1 /*8*/].f_1, 2f, 1, 1))
	{
		func_1910(iParam0);
	}
}

bool func_1507()
{
	if (VOLUME::_DOES_VOLUME_EXIST(uLocal_276[3]))
	{
		if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uLocal_276[3], true, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_1508()
{
	if (VOLUME::_DOES_VOLUME_EXIST(uLocal_276[4]))
	{
		if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uLocal_276[4], true, 0))
		{
			return true;
		}
	}
	return false;
}

void func_1510()
{
	if (iLocal_16 != 4)
	{
		func_1917(1072902963 /* Float: 1.9f */);
	}
	else if (func_83(65536))
	{
		func_1917(1.5f);
	}
	else
	{
		func_1917(1.5f);
	}
}

void func_1511()
{
	int iVar0;
	if (!func_381(512))
	{
		if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false))
		{
			if (iVar0 == joaat("WEAPON_MELEE_DAVY_LANTERN"))
			{
				func_67(512);
			}
		}
		if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 1, false))
		{
			if (iVar0 == joaat("WEAPON_MELEE_DAVY_LANTERN"))
			{
				func_67(512);
			}
		}
		if (!func_381(512))
		{
			if (!__LIB_0__::func_899(&(vLocal_353[1 /*3*/])))
			{
				__LIB_4__::func_89(&(vLocal_353[1 /*3*/]), 0);
			}
			else if (__LIB_0__::func_901(&(vLocal_353[1 /*3*/])))
			{
				__LIB_9__::func_773(&(vLocal_353[1 /*3*/]));
			}
			else if (__LIB_9__::func_178(&(vLocal_353[1 /*3*/])) >= 5f)
			{
				__LIB_0__::func_45("HLP_TORCH", 10000, 0, 0, 0, 1);
				func_67(512);
			}
		}
	}
}

void func_1514(bool bParam0)
{
	TASK::TASK_LOOK_AT_ENTITY(iLocal_143, Global_35, -1, 32768, 41, 0);
	if (bParam0)
	{
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_143, Global_35, -1, -1f, -1f, -1f);
	}
}

bool func_1517(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (bParam1)
	{
		if ((func_909(joaat("PROVISION_LOANSHARK_SKINS")) > 0 || func_910(0)) || func_910(1))
		{
			return true;
		}
		return false;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		ITEMSET::_CLEAR_ITEMSET(iVar1);
		ITEMSET::DESTROY_ITEMSET(iVar1);
		return false;
	}
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iParam0, iVar1);
	iVar0 = 0;
	while (iVar0 < ITEMSET::GET_ITEMSET_SIZE(iVar1))
	{
		iVar2 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, iVar1));
		if (iVar2 == iLocal_151)
		{
			ITEMSET::_CLEAR_ITEMSET(iVar1);
			ITEMSET::DESTROY_ITEMSET(iVar1);
			return true;
		}
		iVar0++;
	}
	ITEMSET::_CLEAR_ITEMSET(iVar1);
	ITEMSET::DESTROY_ITEMSET(iVar1);
	return false;
}

void func_1518(char[4] cParam0)
{
	if (!bLocal_409)
	{
		__LIB_1__::func_721(7);
		__LIB_0__::func_325(&iLocal_157);
		func_79(cParam0, "OBJ_GO_SHOP", vLocal_314);
		__LIB_1__::func_422("OBJ_GO_SHOP", 7500, 0, 1, 0, 0, -1, -1, 0);
		func_1920();
		__LIB_0__::func_45("HLP_SELL_PELT", 10000, 0, 0, 0, 1);
		bLocal_409 = true;
	}
}

bool func_1520(var uParam0, int iParam1)
{
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

void func_1551()
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

void func_1552()
{
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_97(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_1553()
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

void func_1554()
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

void func_1555()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_97(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_97(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_164(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_164(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
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

int func_1577(var uParam0, int iParam1, int iParam2, int iParam3)
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
	iVar11 = (func_1962(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_952(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_97(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	__LIB_1__::func_432(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

bool func_1625(int iParam0)
{
	if (iParam0 == 1371236811 || iParam0 == -1927389954)
	{
		return true;
	}
	return false;
}

void func_1631()
{
	if (!func_83(8192))
	{
		WEAPON::_GIVE_WEAPON_TO_PED_2(iLocal_143, joaat("WEAPON_MELEE_DAVY_LANTERN"), 100, false, true, 1, false, 0.5f, 1f, 752097756, false, 0f, false);
		WEAPON::_GIVE_WEAPON_TO_PED_2(iLocal_143, joaat("WEAPON_REVOLVER_CATTLEMAN"), 26, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
		func_80(8192);
	}
}

void func_1713(var uParam0)
{
	int iVar0;
	if (!uParam0->f_1663)
	{
		if (__LIB_0__::func_274(&(uParam0->f_782[uParam0->f_1450 /*41*/]), 8192) && PED::_GET_PED_CROUCH_MOVEMENT(Global_35))
		{
			PED::FORCE_PED_MOTION_STATE(Global_35, joaat("MOTIONSTATE_CROUCH_WALK"), false, 0, false);
		}
		if (!__LIB_0__::func_274(&(uParam0->f_782[uParam0->f_1450 /*41*/]), 65536) || (!__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 0, 1, 0)) && !__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 1, 1, 0))))
		{
			if (__LIB_10__::func_292(uParam0, uParam0->f_1450))
			{
				__LIB_4__::func_774(uParam0->f_782[uParam0->f_1450 /*41*/].f_7);
			}
		}
	}
	if (!__LIB_0__::func_274(&(uParam0->f_782[uParam0->f_1450 /*41*/]), 16) && (__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 0, 1, 0)) || __LIB_0__::func_154(__LIB_0__::func_153(Global_35, 1, 1, 0))))
	{
		WEAPON::_0x94A3C1B804D291EC(Global_35, 1, 0, 1, 0);
		if (__LIB_0__::func_274(&(uParam0->f_782[uParam0->f_1450 /*41*/]), 65536))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_STAND_STILL(0, 250);
			TASK::TASK_SWAP_WEAPON(0, 0, 0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(Global_35, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		}
		else
		{
			TASK::TASK_SWAP_WEAPON(Global_35, 0, 1, 0, 0);
		}
		func_1140(uParam0, 1);
	}
	else if ((!__LIB_10__::func_292(uParam0, uParam0->f_1450) && !__LIB_10__::func_295(uParam0, 4)) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
		func_1140(uParam0, 3);
	}
	else
	{
		func_1140(uParam0, 6);
	}
}

void func_1714(var uParam0, int iParam1, bool bParam2)
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4[5];
	int iVar20;
	var uVar21;
	int iVar24;
	fVar0 = 0f;
	vVar1 = { 0f, 0f, 0f };
	__LIB_10__::func_463(uParam0, iParam1, &vVar1, &fVar0);
	__LIB_10__::func_434(uParam0, __LIB_0__::func_1(uParam0->f_1111[uParam0->f_241[iParam1 /*18*/] /*22*/].f_1, 8));
	__LIB_2__::func_259(&(uParam0->f_1635));
	PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "PlayLeadin", true, -1);
	if (uParam0->f_782[uParam0->f_241[iParam1 /*18*/] /*41*/].f_39 != 0)
	{
		if (!__LIB_10__::func_360(uParam0, uParam0->f_241[iParam1 /*18*/]))
		{
			__LIB_4__::func_639(&(uParam0->f_782[uParam0->f_241[iParam1 /*18*/] /*41*/]), 4);
			PED::_SET_PED_BLACKBOARD_BOOL(Global_35, __LIB_0__::func_165(uParam0->f_782[uParam0->f_241[iParam1 /*18*/] /*41*/].f_39), true, -1);
		}
	}
	__LIB_4__::func_774(vVar1);
	if (uParam0->f_241[iParam1 /*18*/].f_15 < 1f)
	{
		TASK::_0x3AD8EFF9703BE657(Global_35, uParam0->f_241[iParam1 /*18*/].f_15);
		__LIB_10__::func_309(uParam0, 32);
	}
	if (__LIB_0__::func_84(&(uParam0->f_241[iParam1 /*18*/]), 16))
	{
		__LIB_10__::func_366(uParam0, uParam0->f_241[iParam1 /*18*/], &vVar4, vVar1, fVar0, &uVar21);
		TASK::TASK_FLUSH_ROUTE();
		iVar24 = 0;
		while (iVar24 < 5)
		{
			TASK::TASK_EXTEND_ROUTE(vVar4[iVar24 /*3*/]);
			iVar24++;
		}
		TASK::OPEN_SEQUENCE_TASK(&iVar20);
		__LIB_10__::func_422(uParam0, iParam1, bParam2, &vVar4);
		TASK::CLOSE_SEQUENCE_TASK(iVar20);
		TASK::TASK_PERFORM_SEQUENCE(Global_35, iVar20);
		TASK::CLEAR_SEQUENCE_TASK(&iVar20);
	}
	else
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar20);
		__LIB_10__::func_423(uParam0, iParam1, bParam2, vVar1);
		TASK::CLOSE_SEQUENCE_TASK(iVar20);
		TASK::TASK_PERFORM_SEQUENCE(Global_35, iVar20);
		TASK::CLEAR_SEQUENCE_TASK(&iVar20);
	}
}

int func_1719(int* iParam0)
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
			__LIB_4__::func_89(&(iParam0->f_49), 0);
			MISC::SET_BIT(&(iParam0->f_21), 15);
		}
	}
	else if (MISC::IS_BIT_SET(iParam0->f_21, 15))
	{
		bVar0 = __LIB_9__::func_178(&(iParam0->f_49)) >= 1.5f;
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

int func_1720(int* iParam0)
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
		__LIB_4__::func_89(&(iParam0->f_40), 0);
		MISC::SET_BIT(&(iParam0->f_21), 13);
	}
	else if (MISC::IS_BIT_SET(iParam0->f_21, 13))
	{
		bVar0 = __LIB_9__::func_178(&(iParam0->f_40)) >= 1.5f;
		if (!Global_1357517 || bVar0)
		{
			__LIB_0__::func_37(&(iParam0->f_40));
			MISC::SET_BIT(&(iParam0->f_21), 12);
			return 1;
		}
	}
	return 0;
}

void func_1861()
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
	iVar0 = func_2093(6291456, 0);
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

void func_1868(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_1868(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_1868(iVar2, vParam1, fParam4, iParam5, iParam6);
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

void func_1884()
{
	__LIB_4__::func_89(&(vLocal_327[0 /*3*/]), 1);
	func_1514(0);
	__LIB_10__::func_592(2);
}

void func_1885()
{
	func_1514(1);
	__LIB_2__::func_259(&(vLocal_327[0 /*3*/]));
	__LIB_10__::func_592(7);
}

void func_1887(char[4] cParam0)
{
	if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_143, 0))
	{
		iLocal_294 = TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_143);
	}
	func_79(cParam0, "OBJ_FOLLOW", ENTITY::GET_ENTITY_COORDS(iLocal_143, true, false));
	__LIB_1__::func_721(7);
	__LIB_1__::func_643();
	if (MAP::DOES_BLIP_EXIST(iLocal_152))
	{
		MAP::_BLIP_SET_MODIFIER(iLocal_152, -546708623);
	}
	__LIB_10__::func_592(5);
}

void func_1888(char[4] cParam0)
{
	func_79(cParam0, "OBJ_FOLLOW", ENTITY::GET_ENTITY_COORDS(iLocal_143, true, false));
	__LIB_1__::func_721(7);
	__LIB_1__::func_643();
	if (MAP::DOES_BLIP_EXIST(iLocal_152))
	{
		MAP::_BLIP_SET_MODIFIER(iLocal_152, -546708623);
	}
	if (__LIB_0__::func_272(iLocal_143, 0))
	{
		if (!PED::IS_PED_ON_MOUNT(iLocal_143) || !__LIB_0__::func_272(PED::GET_MOUNT(iLocal_143), 0))
		{
			func_2105(PED::GET_MOUNT(iLocal_143), 0);
			__LIB_10__::func_592(6);
		}
		else
		{
			func_2105(PED::GET_MOUNT(iLocal_143), 1);
			if (!__LIB_0__::func_71(Global_35) || !__LIB_0__::func_163(Global_35, 501393341))
			{
				if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PED::GET_MOUNT(iLocal_143)) < 1f)
				{
					TASK::TASK_DISMOUNT_ANIMAL(iLocal_143, 8388609, 0, 0, 0, 0);
					func_2105(PED::GET_MOUNT(iLocal_143), 0);
					__LIB_10__::func_592(6);
				}
			}
		}
	}
}

void func_1889()
{
	TASK::TASK_CLEAR_LOOK_AT(iLocal_143);
	if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(Local_67[iLocal_19 /*4*/]))
	{
		TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_143, Local_67[iLocal_19 /*4*/], iLocal_294, 2062, -1, 0, 0, -1);
	}
	__LIB_10__::func_592(3);
}

void func_1890(char[4] cParam0, char[4] cParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam2 <= iParam3)
	{
		if (__LIB_0__::func_899(&(vLocal_327[0 /*3*/])))
		{
			if (__LIB_9__::func_178(&(vLocal_327[0 /*3*/])) > IntToFloat(iParam4))
			{
				if (!__LIB_6__::func_904())
				{
					if (__LIB_10__::func_364(&(cParam0->f_2106), cParam1, 0))
					{
						__LIB_0__::func_37(&(vLocal_327[0 /*3*/]));
						iParam2++;
					}
				}
				else
				{
					__LIB_2__::func_259(&(vLocal_327[0 /*3*/]));
				}
			}
		}
		else if (!__LIB_6__::func_904())
		{
			__LIB_2__::func_259(&(vLocal_327[0 /*3*/]));
		}
	}
}

void func_1891()
{
	if (!__LIB_0__::func_163(iLocal_143, 985146578) && !__LIB_0__::func_163(iLocal_143, 716706914))
	{
		func_2106();
	}
	__LIB_10__::func_592(8);
}

void func_1892(char[4] cParam0)
{
	char[] cVar0[8];
	if (func_83(128))
	{
		if (!func_381(256))
		{
			if (PED::IS_PED_SHOOTING(Global_35) && iLocal_20[0] != 2)
			{
				if (__LIB_0__::func_48(iLocal_143, Global_35, 15f, 1))
				{
					cVar0 = "LS_HNT2_SHOT";
				}
				else
				{
					cVar0 = "LS_HNT2_SHOTF";
				}
				if (!__LIB_6__::func_904())
				{
					if (__LIB_10__::func_364(&(cParam0->f_2106), cVar0, 0))
					{
						func_67(256);
					}
				}
			}
		}
		else if (!__LIB_6__::func_904())
		{
			func_636(256);
		}
	}
}

void func_1893(char[4] cParam0)
{
	if (iLocal_300[1])
	{
		if (!func_381(32))
		{
			__LIB_3__::func_732(0);
			if (__LIB_10__::func_364(&(cParam0->f_2106), "LS_HNT2_INTR", 0))
			{
				func_67(32);
				if (!func_83(16))
				{
					PED::_0x923583741DC87BCE(iLocal_143, sLocal_387);
					func_80(16);
				}
			}
		}
		else if (!__LIB_6__::func_903("LS_HNT2_INTR"))
		{
			func_259();
		}
	}
}

bool func_1894(int iParam0)
{
	if (iLocal_16 >= 4 && iLocal_15 == 1)
	{
		if (((((__LIB_0__::func_665(iLocal_143, Global_35, 1, 1) > 10f && bLocal_405) && !PED::IS_TRACKED_PED_VISIBLE(iLocal_143)) && iLocal_20[0] == 0) && iParam0 >= 36) && __LIB_0__::func_393(Global_35, uLocal_276[6], 0, 1))
		{
			return true;
		}
		if (((((__LIB_0__::func_665(iLocal_143, Global_35, 1, 1) > 10f && (bLocal_406 || bLocal_408)) && !PED::IS_TRACKED_PED_VISIBLE(iLocal_143)) && iLocal_20[0] == 0) && iParam0 >= 36) && __LIB_0__::func_393(Global_35, uLocal_276[6], 0, 1))
		{
			return true;
		}
		if (((((__LIB_0__::func_665(iLocal_143, Global_35, 1, 1) > 25f && !PED::IS_TRACKED_PED_VISIBLE(iLocal_143)) && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_143)) && iLocal_20[0] == 0) && !func_1081(&Global_35, -1, 1)) && __LIB_0__::func_393(Global_35, uLocal_276[6], 0, 1))
		{
			return true;
		}
	}
	return false;
}

void func_1895(char[4] cParam0)
{
	__LIB_2__::func_259(&(vLocal_327[0 /*3*/]));
	func_1899();
	PED::_0xF1C03A5352243A30(uLocal_147[0]);
	AUDIO::_PLAY_SOUND_FROM_POSITION("COUGAR_ATTACK_WINTON", -2135.726f, 96.39042f, 246.3316f, sLocal_394, false, 0, false, 0);
	if (!func_381(536870912))
	{
		if (__LIB_10__::func_364(&(cParam0->f_2106), "LS_HNT2_DEAD", 0))
		{
			func_67(536870912);
		}
	}
	func_1898(-2135.718f, 95.15447f, 246.4584f, -2135.818f, 95.25447f, 247.6584f);
	func_80(512);
	func_93();
	__LIB_4__::func_89(&(vLocal_327[4 /*3*/]), 0);
	func_259();
	__LIB_10__::func_592(12);
}

void func_1896()
{
	func_888(134217728);
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_143, Global_35, -1, -1f, -1f, -1f);
	__LIB_10__::func_592(9);
}

void func_1897(char[4] cParam0, int iParam1)
{
	if (!bLocal_403)
	{
		if (ENTITY::IS_ENTITY_IN_VOLUME(iLocal_143, uLocal_276[3], true, 0))
		{
			bLocal_403 = true;
		}
	}
	if (!bLocal_404)
	{
		if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uLocal_276[3], true, 0))
		{
			bLocal_404 = true;
			bLocal_405 = false;
		}
	}
	else if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uLocal_276[3], true, 0) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uLocal_276[2], true, 0))
	{
		bLocal_404 = false;
		bLocal_405 = false;
	}
	if (!bLocal_405)
	{
		if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uLocal_276[4], true, 0))
		{
			bLocal_404 = false;
			bLocal_405 = true;
		}
	}
	else if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uLocal_276[4], true, 0) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uLocal_276[2], true, 0))
	{
		bLocal_404 = false;
		bLocal_405 = false;
	}
	if (!bLocal_406)
	{
		if (!bLocal_405)
		{
			if (iParam1 >= 34)
			{
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_143, 0))
				{
					if (!TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(iLocal_143))
					{
						TASK::WAYPOINT_PLAYBACK_PAUSE(iLocal_143, 1, 1, 0);
						bLocal_406 = true;
					}
				}
			}
		}
	}
	else if (!bLocal_407)
	{
		if (((!__LIB_0__::func_48(Global_35, iLocal_143, 20f, 1) && !ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uLocal_276[3], true, 0)) && !ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uLocal_276[2], true, 0)) && !bLocal_408)
		{
			bLocal_407 = true;
			TASK::WAYPOINT_PLAYBACK_RESUME(iLocal_143, true, -1, 0);
		}
	}
	if (!bLocal_408)
	{
		if (iParam1 >= 38)
		{
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_143, 0))
			{
				if (!TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(iLocal_143))
				{
					TASK::WAYPOINT_PLAYBACK_PAUSE(iLocal_143, 1, 1, 0);
					bLocal_408 = true;
				}
			}
		}
	}
	if (((ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uLocal_276[3], true, 0) && ENTITY::IS_ENTITY_IN_VOLUME(iLocal_143, uLocal_276[3], true, 0)) || ((ENTITY::IS_ENTITY_IN_VOLUME(iLocal_143, uLocal_276[3], true, 0) && bLocal_404) && __LIB_0__::func_48(Global_35, iLocal_143, 10f, 1))) || ((!ENTITY::IS_ENTITY_IN_VOLUME(iLocal_143, uLocal_276[3], true, 0) && bLocal_403) && __LIB_0__::func_48(Global_35, iLocal_143, 10f, 1)))
	{
		if (!func_381(1024))
		{
			if (__LIB_6__::func_904())
			{
				__LIB_3__::func_732(0);
			}
			if (__LIB_10__::func_364(&(cParam0->f_2106), "LS_HNT2_LEFT", 0))
			{
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_143, 0) && !TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(iLocal_143))
				{
					TASK::WAYPOINT_PLAYBACK_PAUSE(iLocal_143, 1, 1, 0);
				}
				func_67(1024);
			}
		}
		else
		{
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_143, 0) && !TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(iLocal_143))
			{
				TASK::WAYPOINT_PLAYBACK_PAUSE(iLocal_143, 1, 1, 0);
			}
			func_1890(cParam0, "LS_HNT2_CAVE_WT", iLocal_293, 2, 12);
		}
	}
	else if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_143, 0) && TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(iLocal_143))
	{
		if (!bLocal_406 && !bLocal_408)
		{
			TASK::WAYPOINT_PLAYBACK_RESUME(iLocal_143, true, -1, 0);
		}
	}
}

void func_1898(vector3 vParam0, vector3 vParam3)
{
	struct<15> Var0;
	Var0.f_8 = -1082130432;
	Var0 = { vParam0 };
	Var0.f_3 = { vParam3 };
	Var0.f_7 = 0f;
	Var0.f_12 = 1;
	Var0.f_6 = joaat("WEAPON_REVOLVER_CATTLEMAN");
	Var0.f_13 = 0;
	Var0.f_14 = 1;
	if (!bLocal_396)
	{
		MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Var0);
		bLocal_396 = true;
		return;
	}
	else if (!bLocal_397)
	{
		MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Var0);
		bLocal_397 = true;
	}
	else if (!bLocal_398)
	{
		if (__LIB_9__::func_178(&(vLocal_327[4 /*3*/])) > 1.5f)
		{
			MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Var0);
			bLocal_398 = true;
		}
	}
}

void func_1899()
{
	int iVar0;
	int iVar1;
	if (__LIB_0__::func_272(iLocal_143, 0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iLocal_143, &iVar0, true, 1, false);
		if (iVar0 == joaat("WEAPON_MELEE_DAVY_LANTERN"))
		{
			iVar1 = WEAPON::_0xCEF4C65DE502D367(iLocal_143, 1, 1, 0, 1);
			if (iVar1 != 0)
			{
				iLocal_150 = iVar1;
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_150))
			{
				OBJECT::_0x7FCD49388BC9B775(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iLocal_150), 0);
			}
		}
	}
}

void func_1901(char[4] cParam0, int iParam1)
{
	__LIB_10__::func_364(&(cParam0->f_2106), "WINT_COM_ATT_A", 0);
	PED::SET_PED_ACCURACY(iLocal_143, 0);
	if (!__LIB_0__::func_163(iLocal_143, 780511057))
	{
		TASK::TASK_COMBAT_PED(iLocal_143, uLocal_147[iParam1], 0, 0);
		PED::SET_PED_ACCURACY(iLocal_143, 0);
	}
	__LIB_10__::func_592(14);
}

void func_1904()
{
	int iVar0;
	iVar0 = iLocal_19;
	iVar0 = (iVar0 - 1);
	if (iVar0 < 0)
	{
		return;
	}
	if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(Local_67[iVar0 /*4*/]))
	{
		TASK::REMOVE_WAYPOINT_RECORDING(Local_67[iVar0 /*4*/]);
	}
}

bool func_1905()
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;
	if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_143, 0))
	{
		iVar0 = __LIB_10__::func_397(iLocal_143, Local_67[iLocal_19 /*4*/], &vVar2);
		TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(Local_67[iLocal_19 /*4*/], &iVar1);
		if (iVar0 >= (iVar1 - 1))
		{
			return true;
		}
	}
	return false;
}

void func_1906(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	if (iVar0 == 0)
	{
		func_2109(0, -2121.856f, 69.72445f, 256.2157f, 0, 1);
	}
	else if (iVar0 == 1)
	{
		func_2109(1, -2122.955f, 69.47069f, 256.2945f, 0, 1);
	}
	else if (iVar0 == 3)
	{
		func_2109(3, -2093.493f, 101.935f, 246.1921f, 0, 1);
	}
	else
	{
		func_2109(0, -2093.793f, 98.67824f, 246.1238f, 0, 0);
	}
	iLocal_300[iParam0] = 1;
}

void func_1907(int iParam0)
{
	int iVar0;
	if (iLocal_20[iParam0] != 5)
	{
		if (__LIB_9__::func_178(&(vLocal_343[0 /*3*/])) > 15f)
		{
			iVar0 = __LIB_5__::func_663(&vLocal_317, Global_36, 15f, 1, 0, -1, -1);
			if (iVar0 != -1)
			{
				if (!__LIB_0__::func_163(uLocal_147[iParam0], 713668775) && !CAM::IS_SPHERE_VISIBLE(vLocal_317[iVar0 /*3*/], 3f))
				{
					ENTITY::SET_ENTITY_COORDS(uLocal_147[iParam0], vLocal_317[iVar0 /*3*/], true, false, true, true);
					ENTITY::_0x9587913B9E772D29(uLocal_147[iParam0], 0);
					func_1909(iParam0);
				}
			}
		}
	}
}

void func_1908(int iParam0)
{
	vLocal_311 = { ENTITY::GET_ENTITY_COORDS(iLocal_143, false, false) };
	func_2109(4, vLocal_311, 1, 0);
	func_664(3, iParam0);
}

void func_1909(int iParam0)
{
	if (bLocal_402)
	{
		ENTITY::SET_ENTITY_VISIBLE(uLocal_147[iParam0], true);
		ENTITY::SET_ENTITY_INVINCIBLE(uLocal_147[0], false);
		PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(uLocal_147[0], 1);
		PED::SET_PED_CAN_TORSO_REACT_IK(uLocal_147[0], true);
		PED::SET_PED_CAN_BE_TARGETTED(uLocal_147[iParam0], true);
		bLocal_402 = false;
	}
	PED::SET_PED_CONFIG_FLAG(uLocal_147[iParam0], 159, true);
	PED::REGISTER_HATED_TARGETS_AROUND_PED(uLocal_147[iParam0], 100f);
	PED::REGISTER_TARGET(uLocal_147[iParam0], Global_35, 1);
	TASK::TASK_COMBAT_PED(uLocal_147[iParam0], Global_35, 0, 16);
	func_2111(iParam0, 2);
	PED::_0xD7D2F45C56A4F4DF(Global_35, 1.15f, 2000);
	PED::_0x0D497AA69059FE40(Global_35, 1f);
	PED::_0x2208438012482A1A(uLocal_147[iParam0], false, false);
	if (iParam0 == 0)
	{
	}
	if (!__LIB_0__::func_899(&(vLocal_343[1 /*3*/])))
	{
		__LIB_4__::func_89(&(vLocal_343[1 /*3*/]), 0);
	}
	func_664(5, iParam0);
}

void func_1910(int iParam0)
{
	TASK::TASK_AMBIENT_ANIMAL_HUNT(uLocal_147[iParam0], Global_35, 1);
	if (bLocal_402)
	{
		ENTITY::SET_ENTITY_VISIBLE(uLocal_147[iParam0], true);
		ENTITY::SET_ENTITY_INVINCIBLE(uLocal_147[0], false);
		PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(uLocal_147[0], 1);
		PED::SET_PED_CAN_TORSO_REACT_IK(uLocal_147[0], true);
		PED::SET_PED_CAN_BE_TARGETTED(uLocal_147[iParam0], true);
		bLocal_402 = false;
	}
	func_664(4, iParam0);
}

void func_1911(int iParam0)
{
	if (__LIB_1__::func_348(uLocal_147[iParam0], Global_35) >= (func_899() + 2f))
	{
		PED::SET_PED_CAN_BE_TARGETTED(uLocal_147[iParam0], false);
		__LIB_0__::func_325(&(uLocal_153[iParam0]));
	}
	else
	{
		PED::SET_PED_CAN_BE_TARGETTED(uLocal_147[iParam0], true);
		__LIB_10__::func_528(&(uLocal_153[iParam0]), uLocal_147[iParam0], joaat("BLIP_STYLE_ENEMY"), 0);
	}
}

void func_1912(int iParam0)
{
	func_2111(iParam0, 2);
	func_664(2, iParam0);
}

bool func_1913(int iParam0)
{
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(uLocal_147[iParam0]))
	{
		if (!__LIB_0__::func_899(&(vLocal_343[2 /*3*/])))
		{
			__LIB_4__::func_89(&(vLocal_343[2 /*3*/]), 0);
		}
		return true;
	}
	if (PED::IS_PED_SHOOTING(Global_35) || ((PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) && ENTITY::IS_ENTITY_ON_SCREEN(uLocal_147[iParam0])) && __LIB_2__::func_123(uLocal_147[iParam0], Global_35, 0)))
	{
		return true;
	}
	return false;
}

void func_1914(int iParam0)
{
	func_2111(iParam0, 3);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uLocal_147[iParam0], Local_42[1 /*8*/].f_1, 1f, 90000, 0.25f, 0, 40000f);
	func_664(7, iParam0);
}

void func_1915(int iParam0)
{
	TASK::TASK_WALK_AWAY(uLocal_147[iParam0], Global_35);
	func_664(6, iParam0);
}

void func_1917(float fParam0)
{
	if ((!func_83(1) || func_83(2)) || (!func_83(1) && !func_83(2)))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
	}
	else
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, fParam0);
	}
}

void func_1920()
{
	if (!MAP::DOES_BLIP_EXIST(Local_136.f_3))
	{
		func_2112(&(Local_136.f_3), Local_136, 408396114, "BLIP_SHOP_BUTCHER", 0, 0);
		MAP::SET_BLIP_SPRITE(Local_136.f_3, joaat("BLIP_SHOP_BUTCHER"), true);
		MAP::_BLIP_SET_MODIFIER(Local_136.f_3, 825788762);
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
		func_97(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_97(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_97(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_2133(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_935(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_164(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_2137(Var0);
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
		func_97(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_97(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_97(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_97(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_97(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_97(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_97(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_97(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_97(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_97(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_97(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_164(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_164(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_164(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_164(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_164(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_164(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_164(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_164(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_164(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_164(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_164(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
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

int func_1962(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
							iVar49 = (iVar49 + func_1962(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1962(iVar63, -915411861, 1, 0, 0));
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

int func_2093(int iParam0, int iParam1)
{
	var uVar0;
	return func_2205(&uVar0, iParam0, iParam1);
}

void func_2105(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!bLocal_411)
		{
			if (!__LIB_0__::func_163(iParam0, 1041577989))
			{
				TASK::TASK_HORSE_ACTION(iParam0, 3, 0, 0);
				bLocal_411 = true;
			}
		}
		else if (!__LIB_0__::func_163(iParam0, 1041577989) || TASK::_0xA710DC5D25F8B942(iParam0, 1041577989) >= 1f)
		{
			if (!__LIB_0__::func_163(iParam0, -982327190))
			{
				TASK::TASK_STAND_STILL(iParam0, -1);
			}
		}
	}
	else if (!__LIB_0__::func_163(iParam0, -982327190))
	{
		TASK::TASK_STAND_STILL(iParam0, -1);
	}
}

void func_2106()
{
	if (__LIB_0__::func_163(iLocal_143, -875674219))
	{
		TASK::CLEAR_PED_TASKS(iLocal_143, true, false);
	}
	if (!func_83(268435456))
	{
		func_2209();
	}
	else
	{
		TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_143, Local_67[iLocal_19 /*4*/], iLocal_294, 14, -1, 0, 0, -1);
	}
}

void func_2109(int iParam0, vector3 vParam1, bool bParam4, bool bParam5)
{
	AUDIO::_PLAY_SOUND_FROM_POSITION(sLocal_388[iParam0], vParam1, sLocal_394, false, 0, false, 0);
	if (!bParam5)
	{
		if (bParam4)
		{
			MAP::TRIGGER_SONAR_BLIP(-296154796, vParam1);
		}
		else
		{
			MAP::TRIGGER_SONAR_BLIP(-2119219982, vParam1);
		}
	}
}

void func_2111(int iParam0, int iParam1)
{
	AUDIO::PLAY_ANIMAL_VOCALIZATION(uLocal_147[iParam0], sLocal_388[iParam1], false);
	MAP::_TRIGGER_SONAR_BLIP_2(-2119219982, uLocal_147[iParam0]);
}

void func_2112(var uParam0, vector3 vParam1, int iParam4, char* sParam5, bool bParam6, float fParam7)
{
	if (!MAP::DOES_BLIP_EXIST(*uParam0))
	{
		if (!bParam6)
		{
			*uParam0 = MAP::_BLIP_ADD_FOR_COORD(iParam4, vParam1);
		}
		else
		{
			*uParam0 = MAP::_BLIP_ADD_FOR_RADIUS(iParam4, vParam1, fParam7);
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, sParam5);
		}
	}
}

void func_2133(int iParam0)
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
	func_164(iParam0, 1, 1, -142743235, 1);
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
		func_164(uVar18[iVar36], 1, 1, -142743235, 1);
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

void func_2137(struct<6> Param0)
{
	if (!func_2232(Param0.f_4, 1))
	{
	}
	if (!func_2232(Param0, 1))
	{
	}
	if (!func_2232(Param0.f_2, 1))
	{
	}
	if (!func_2232(Param0.f_5, 1))
	{
	}
	if (!func_2232(Param0.f_3, 1))
	{
	}
	if (!func_2232(Param0.f_1, 1))
	{
	}
}

int func_2205(var uParam0, int iParam1, int iParam2)
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
		return func_2205(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

void func_2209()
{
	struct<27> Var0;
	struct<27> Var38;
	if (!func_83(268435456) && !func_83(134217728))
	{
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
		__LIB_9__::func_175(iLocal_143, Global_35, &Var38, 0f, 0f, 0f, Local_67[iLocal_19 /*4*/], 14, 0, 10f, 2.5f, 1073069561, 1.2f, 1092616192 /* Float: 10f */, -1, 1, 0, 0, 0, 1);
		__LIB_10__::func_425(Global_35, iLocal_143, &Var0, 3f, 0, 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1, 8, 0, 0, 1069547520 /* Float: 1.5f */, 1073741824 /* Float: 2f */, 1050253722 /* Float: 0.3f */, 1067030938 /* Float: 1.2f */, 0, 0, -1, 1, 1.4f, -1082130432 /* Float: -1f */, 1);
		__LIB_1__::func_731(&uLocal_424);
		func_80(134217728);
	}
}

bool func_2232(int iParam0, int iParam1)
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
				if (func_2232(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_2232(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_2232(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_2232(iVar21, 1))
				{
				}
			}
		}
		__LIB_1__::func_712();
		return true;
	}
	return false;
}

