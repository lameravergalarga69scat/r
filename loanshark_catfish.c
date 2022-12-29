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
	struct<35> Local_19[2];
	struct<16> Local_90[5];
	vector3 vLocal_171 = { 0f, 0f, 0f };
	vector3 vLocal_177 = { 0f, 0f, 0f };
	struct<6> Local_183 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_189 = 0;
	struct<8> Local_190 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_198 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_206 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_214 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_222 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_230 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_238 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_246 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_254 = 0;
	int iLocal_255 = 0;
	var uLocal_256 = 0;
	vector3 vLocal_257 = { 0f, NaNf, 0f };
	var uLocal_260 = -1;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = -1;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 1073741824;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 1;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 1106247680;
	var uLocal_284 = 1067450368;
	var uLocal_285 = 0;
	var uLocal_286 = 1092616192;
	var uLocal_287 = 1112014848;
	var uLocal_288 = 1106247680;
	var uLocal_289 = 1101529088;
	var uLocal_290 = 1101004800;
	var uLocal_291 = 1084227584;
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
	var uLocal_302 = 0;
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
	struct<17> Local_318[2];
	bool bLocal_353 = false;
	bool bLocal_354 = false;
	bool bLocal_355 = false;
	struct<20> Local_356 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3 } ;
	var uLocal_376 = 1;
	var uLocal_377 = 3;
	var uLocal_378 = 3;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	struct<18> Local_381 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_399 = 0;
	var uLocal_400 = 0;
	vector3 vLocal_401 = { 0f, 0f, 0f };
	vector3 vLocal_404 = { 0f, 0f, 0f };
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
	int iLocal_440 = 0;
	int iLocal_441 = 0;
	int iLocal_442 = 0;
	var uLocal_443 = 0;
	float fLocal_444 = 0f;
	int iLocal_445 = 0;
	int iLocal_446 = 0;
	int iLocal_447[14] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_462 = 0;
	int iLocal_463 = 0;
	char* sLocal_464 = NULL;
	char[] cLocal_465[8] = 0;
	char[] cLocal_466[8] = 0;
	vector3 vLocal_467 = { 0f, 0f, 0f };
	vector3 vLocal_470 = { 0f, 0f, 0f };
	float fLocal_473 = 0f;
	float fLocal_474 = 0f;
	bool bLocal_475 = false;
	bool bLocal_476 = false;
	bool bLocal_477 = false;
	bool bLocal_478 = false;
	bool bLocal_479 = false;
	bool bLocal_480 = false;
	bool bLocal_481 = false;
	bool bLocal_482 = false;
	bool bLocal_483 = false;
	bool bLocal_484 = false;
	bool bLocal_485 = false;
	bool bLocal_486 = false;
	bool bLocal_487 = false;
	bool bLocal_488 = false;
	bool bLocal_489 = false;
	bool bLocal_490 = false;
	bool bLocal_491 = false;
	bool bLocal_492 = false;
	bool bLocal_493 = false;
	bool bLocal_494 = false;
	bool bLocal_495 = false;
	bool bLocal_496 = false;
	bool bLocal_497 = false;
	bool bLocal_498 = false;
	bool bLocal_499 = false;
	bool bLocal_500 = false;
	bool bLocal_501 = false;
	bool bLocal_502 = false;
	bool bLocal_503 = false;
	bool bLocal_504 = false;
	bool bLocal_505 = false;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	int iLocal_522 = 0;
	int iLocal_523 = 0;
	int iLocal_524 = 0;
	vector3 vLocal_525 = { 0f, 0f, 0f };
	float fLocal_528 = 0f;
	vector3 vLocal_529 = { 0f, 0f, 0f };
	float fLocal_532 = 0f;
	vector3 vLocal_533 = { 0f, 0f, 0f };
	float fLocal_536 = 0f;
	vector3 vLocal_537 = { 0f, 0f, 0f };
	float fLocal_540 = 0f;
	vector3 vLocal_541 = { 0f, 0f, 0f };
	float fLocal_544 = 0f;
	vector3 vLocal_545 = { 0f, 0f, 0f };
	float fLocal_548 = 0f;
	vector3 vLocal_549 = { 0f, 0f, 0f };
	float fLocal_552 = 0f;
	var uScriptParam_0 = 0;
#endregion
void __EntryFunction__()
{
	struct<2278> Var0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_18 = joaat("WEAPON_MELEE_KNIFE");
	vLocal_401 = { 1317.062f, -2283.848f, 49.54567f };
	vLocal_404 = { 1322.343f, -2280.164f, 49.54744f };
	fLocal_444 = 0f;
	sLocal_464 = "loan_cfj_algie_path";
	vLocal_467 = { 1323.83f, -2282.41f, 49.58924f };
	vLocal_470 = { 1321.323f, -2282.045f, 49.5149f };
	fLocal_473 = -115.56f;
	fLocal_474 = 283.343f;
	vLocal_525 = { 1306.05f, -2339.573f, 40.9921f };
	fLocal_528 = 218.4945f;
	vLocal_529 = { 1317.96f, -2283.514f, 49.5325f };
	fLocal_532 = 309.373f;
	vLocal_533 = { 1321.598f, -2280.748f, 49.5161f };
	fLocal_536 = 137.6529f;
	vLocal_537 = { 1324.316f, -2278.774f, 49.547f };
	fLocal_540 = 309.0197f;
	vLocal_541 = { 1321.342f, -2282.134f, 49.5148f };
	fLocal_544 = 284.0056f;
	vLocal_545 = { 1324.727f, -2283.947f, 49.5894f };
	fLocal_548 = 302.5689f;
	vLocal_549 = { 1315.877f, -2280.665f, 49.5413f };
	fLocal_552 = 169.2039f;
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
		func_47(cParam0);
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
			__LIB_18__::func_231(cParam0);
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

int func_10(var uParam0, int iParam1)
{
	struct<4> Var0;
	int iVar4;
	Var0 = { func_41(iParam1) };
	iVar4 = iParam1;
	if (!bLocal_488)
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, Var0, Var0.f_3, true, false, true);
		bLocal_488 = true;
	}
	if (PED::IS_PED_USING_ACTION_MODE(Global_35))
	{
		PED::SET_PED_USING_ACTION_MODE(Global_35, false, -1, 0);
	}
	if ((!bLocal_499 && !bLocal_500) && !bLocal_498)
	{
		if (!bLocal_485)
		{
			if (!bLocal_483)
			{
				if (func_62(uParam0))
				{
					bLocal_483 = true;
				}
			}
			else if (func_63(3, 32, 0))
			{
				__LIB_0__::func_928(&(uParam0->f_2106), Local_19[1 /*35*/], "CATFISH_SON", 0);
				func_65();
				bLocal_485 = true;
			}
			return 2;
		}
	}
	switch (iVar4)
	{
		case 0:
			if (!bLocal_499 && !bLocal_500)
			{
				if (!bLocal_498)
				{
					if (!bLocal_487)
					{
						if (__LIB_4__::func_511())
						{
							__LIB_10__::func_378(*uParam0, func_41(0), func_41(1), 0, 1);
						}
						if (__LIB_1__::func_707(joaat("MONEY_LOANSHARK_CATFISH_DEBT"), 1, 0))
						{
							func_69(joaat("MONEY_LOANSHARK_CATFISH_DEBT"), 1, 1, -142743235, 0);
						}
						iLocal_15 = 0;
						func_70(uParam0);
					}
					if (fLocal_444 < 1f)
					{
						fLocal_444 = (fLocal_444 + MISC::GET_FRAME_TIME());
						bLocal_487 = true;
						return 2;
					}
					PERSISTENCE::_0x9D16896F0DBE78A2(1314.107f, -2280.375f, 49.5094f, 3f);
					fLocal_444 = 0f;
					__LIB_1__::func_539();
					__LIB_10__::func_260(1, 1);
				}
				else
				{
					if (!bLocal_487)
					{
						if (__LIB_4__::func_511())
						{
							__LIB_10__::func_378(*uParam0, func_41(0), func_41(2), 0, 2);
						}
						if (__LIB_1__::func_707(joaat("MONEY_LOANSHARK_CATFISH_DEBT"), 1, 0))
						{
							func_69(joaat("MONEY_LOANSHARK_CATFISH_DEBT"), 1, 1, -142743235, 0);
						}
						func_73(8388608);
						iLocal_15 = 0;
						func_70(uParam0);
					}
					if (fLocal_444 < 1f)
					{
						fLocal_444 = (fLocal_444 + MISC::GET_FRAME_TIME());
						bLocal_487 = true;
						return 2;
					}
					PERSISTENCE::_0x9D16896F0DBE78A2(1314.107f, -2280.375f, 49.5094f, 3f);
					__LIB_10__::func_364(&(uParam0->f_2106), "LSCAT_SONDEAD1", 0);
					fLocal_444 = 0f;
					__LIB_1__::func_539();
					__LIB_10__::func_260(1, 1);
				}
			}
			else
			{
				if (!bLocal_487)
				{
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, 1328.917f, -2276.25f, 48.432f, 121.8359f, true, false, true);
				}
				if (fLocal_444 < 1f)
				{
					fLocal_444 = (fLocal_444 + MISC::GET_FRAME_TIME());
					bLocal_487 = true;
					return 2;
				}
				if (__LIB_1__::func_707(joaat("MONEY_LOANSHARK_CATFISH_DEBT"), 1, 0))
				{
					func_69(joaat("MONEY_LOANSHARK_CATFISH_DEBT"), 1, 1, -142743235, 0);
				}
				iLocal_15 = 7;
				PERSISTENCE::_0x9D16896F0DBE78A2(1314.107f, -2280.375f, 49.5094f, 3f);
				fLocal_444 = 0f;
				__LIB_1__::func_539();
				__LIB_10__::func_260(1, 1);
			}
			return 8;
		case 1:
			func_73(32768);
			func_73(1073741824 /* Float: 2f */);
			if (__LIB_1__::func_707(joaat("MONEY_LOANSHARK_CATFISH_DEBT"), 1, 0))
			{
				func_69(joaat("MONEY_LOANSHARK_CATFISH_DEBT"), 1, 1, -142743235, 0);
			}
			if (func_63(2, 32, "PBL_BASE"))
			{
				if (!bLocal_487)
				{
					if (__LIB_4__::func_511())
					{
						__LIB_10__::func_378(*uParam0, func_41(1), func_41(2), 1, 2);
					}
					ANIMSCENE::START_ANIM_SCENE(Local_90[2 /*16*/]);
					bLocal_475 = true;
					__LIB_3__::func_319(Local_90[iLocal_189 /*16*/]);
					iLocal_15 = 2;
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_19[0 /*35*/], vLocal_541, fLocal_544, true, false, true);
				}
				if (fLocal_444 < 1f)
				{
					fLocal_444 = (fLocal_444 + MISC::GET_FRAME_TIME());
					bLocal_487 = true;
					return 2;
				}
				func_76(2, "BaseBool", 1);
				func_77();
				func_65();
				func_78(1024);
				func_78(1);
				fLocal_444 = 0f;
				if (!MAP::DOES_BLIP_EXIST(Local_19[0 /*35*/].f_5))
				{
					Local_19[0 /*35*/].f_5 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_COMPANION"), Local_19[0 /*35*/]);
					MAP::_BLIP_SET_MODIFIER(Local_19[0 /*35*/].f_5, -546708623);
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_19[0 /*35*/].f_5, "ALG_BLIP");
				}
				else
				{
					MAP::_BLIP_SET_MODIFIER(Local_19[0 /*35*/].f_5, -546708623);
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_19[0 /*35*/].f_5, "ALG_BLIP");
				}
				PERSISTENCE::_0x9D16896F0DBE78A2(1314.107f, -2280.375f, 49.5094f, 3f);
				__LIB_10__::func_260(1, 1);
				__LIB_1__::func_539();
				return 8;
			}
			break;
		case 2:
			func_73(32768);
			func_73(1073741824 /* Float: 2f */);
			if (__LIB_1__::func_707(joaat("MONEY_LOANSHARK_CATFISH_DEBT"), 1, 0))
			{
				func_69(joaat("MONEY_LOANSHARK_CATFISH_DEBT"), 1, 1, -142743235, 0);
			}
			if (!bLocal_499 && !bLocal_500)
			{
				if (func_63(1, 0, 0))
				{
					if (!bLocal_487)
					{
						if (__LIB_4__::func_511())
						{
							__LIB_10__::func_378(*uParam0, func_41(2), func_41(3), 2, 3);
						}
						__LIB_3__::func_319(Local_90[iLocal_189 /*16*/]);
						__LIB_0__::func_325(&iLocal_462);
						PED::SET_PED_CONFIG_FLAG(Local_19[0 /*35*/], 186, false);
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_19[0 /*35*/], vLocal_545, fLocal_548, true, false, true);
						__LIB_1__::func_864(Local_19[0 /*35*/], 1, 0);
						if (!bLocal_498)
						{
							ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_19[1 /*35*/], vLocal_549, fLocal_552, true, false, true);
						}
						iLocal_15 = 7;
						if (!bLocal_498)
						{
							func_81(0);
						}
					}
					if (fLocal_444 < 1f)
					{
						fLocal_444 = (fLocal_444 + MISC::GET_FRAME_TIME());
						bLocal_487 = true;
						return 2;
					}
					PERSISTENCE::_0x9D16896F0DBE78A2(1314.107f, -2280.375f, 49.5094f, 3f);
					fLocal_444 = 0f;
					__LIB_10__::func_260(1, 1);
					__LIB_1__::func_539();
					return 8;
				}
			}
			else
			{
				if (__LIB_4__::func_511())
				{
					__LIB_10__::func_378(*uParam0, func_41(2), func_41(3), 2, 3);
				}
				__LIB_3__::func_319(Local_90[iLocal_189 /*16*/]);
				__LIB_0__::func_325(&iLocal_462);
				iLocal_15 = 7;
				if (fLocal_444 < 1f)
				{
					fLocal_444 = (fLocal_444 + MISC::GET_FRAME_TIME());
					bLocal_487 = true;
					return 2;
				}
				PERSISTENCE::_0x9D16896F0DBE78A2(1314.107f, -2280.375f, 49.5094f, 3f);
				fLocal_444 = 0f;
				__LIB_10__::func_260(1, 1);
				__LIB_1__::func_539();
				return 8;
			}
			break;
		case 3:
			func_73(32768);
			func_73(1073741824 /* Float: 2f */);
			if (!bLocal_499 && !bLocal_500)
			{
				if (func_63(1, 0, 0))
				{
					if (!bLocal_487)
					{
						__LIB_3__::func_319(Local_90[iLocal_189 /*16*/]);
						PED::SET_PED_CONFIG_FLAG(Local_19[0 /*35*/], 186, false);
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_19[0 /*35*/], vLocal_545, fLocal_548, true, false, true);
						if (!bLocal_498)
						{
							ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_19[1 /*35*/], vLocal_549, fLocal_552, true, false, true);
						}
						__LIB_1__::func_864(Local_19[0 /*35*/], 1, 0);
						if (!bLocal_498)
						{
							func_81(0);
						}
					}
					if (fLocal_444 < 1f)
					{
						fLocal_444 = (fLocal_444 + MISC::GET_FRAME_TIME());
						bLocal_487 = true;
						return 2;
					}
					fLocal_444 = 0f;
					__LIB_3__::func_732(0);
					if (!__LIB_1__::func_707(joaat("MONEY_LOANSHARK_CATFISH_DEBT"), 1, 0))
					{
						func_83(joaat("MONEY_LOANSHARK_CATFISH_DEBT"), 1, 0, 0, 0, 444010018, 0, 0, 0, 0);
					}
					PERSISTENCE::_0x9D16896F0DBE78A2(1314.107f, -2280.375f, 49.5094f, 3f);
					__LIB_10__::func_260(1, 1);
					__LIB_1__::func_539();
					func_84();
					return 9;
				}
			}
			else
			{
				if (fLocal_444 < 1f)
				{
					fLocal_444 = (fLocal_444 + MISC::GET_FRAME_TIME());
					bLocal_487 = true;
					return 2;
				}
				fLocal_444 = 0f;
				__LIB_3__::func_732(0);
				if (!__LIB_1__::func_707(joaat("MONEY_LOANSHARK_CATFISH_DEBT"), 1, 0))
				{
					func_83(joaat("MONEY_LOANSHARK_CATFISH_DEBT"), 1, 0, 0, 0, 444010018, 0, 0, 0, 0);
				}
				PERSISTENCE::_0x9D16896F0DBE78A2(1314.107f, -2280.375f, 49.5094f, 3f);
				__LIB_10__::func_260(1, 1);
				__LIB_1__::func_539();
				func_84();
				return 9;
			}
			break;
	}
	return 2;
}

void func_12(char[4] cParam0)
{
	if (func_85(cParam0))
	{
		if (__LIB_10__::func_261(cParam0->f_346))
		{
			__LIB_0__::func_8(&(Global_1392626[*cParam0 /*32*/].f_9), 16);
			__LIB_10__::func_464(&(cParam0->f_32), &(cParam0->f_352));
			func_88(cParam0);
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
			if (func_88(cParam0))
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
	iVar0 = func_96(cParam0);
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
	func_97(*cParam0, 1, 1);
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
		if (func_118(cParam0))
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
	func_120(cParam0);
	__LIB_10__::func_342(cParam0);
	func_122(cParam0);
	if ((cParam0->f_1 != 12 && __LIB_10__::func_266(cParam0) != 2) && !__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_10, 2))
	{
		__LIB_8__::func_985(*cParam0);
	}
	func_122(cParam0);
	__LIB_3__::func_525(&(cParam0->f_2210[0]), &(cParam0->f_2213[0]));
	__LIB_3__::func_525(&(cParam0->f_2210[1]), &(cParam0->f_2213[1]));
	if (__LIB_10__::func_266(cParam0) == 0)
	{
		__LIB_10__::func_471(*cParam0);
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
	__LIB_13__::func_895(2, 3, 0, 0, 1);
	if (__LIB_4__::func_54(2, 2048))
	{
		bLocal_499 = true;
	}
	if (__LIB_4__::func_54(2, 4096))
	{
		bLocal_498 = true;
	}
	if (bLocal_499 && bLocal_498)
	{
		bLocal_500 = true;
	}
	if ((!bLocal_500 && !bLocal_498) && !bLocal_499)
	{
		if (__LIB_4__::func_54(2, 16) || __LIB_4__::func_54(2, 512))
		{
			func_78(4);
		}
		else
		{
			func_141(4);
		}
	}
	if (func_142(4))
	{
		cLocal_465 = "LS_CAT_WALK_R";
		cLocal_466 = "LS_CAT_WALK2_R";
	}
	else
	{
		cLocal_465 = "LS_CAT_WALK";
		cLocal_466 = "LS_CAT_WALK2";
	}
	__LIB_10__::func_244(&(uParam0->f_2210[0]), &(uParam0->f_2213[0]), Local_19[0 /*35*/].f_1, 0f, 0f, 0f, 20f, 20f, 20f, 0, 0, 1, 0, 0);
	Local_356.f_3 = Global_35;
	Local_356.f_4 = 21030;
	Local_356.f_7 = 500;
	Local_356.f_8 = 4;
	Local_356.f_13 = 1;
	Local_356.f_17 = 0;
	Local_356.f_18 = 0;
	Local_356.f_19 = 2;
	__LIB_10__::func_267(uParam0, "LSCATAU");
	__LIB_0__::func_7(&(Global_1392626[*uParam0 /*32*/].f_8), 32);
	__LIB_0__::func_7(&(Global_1392626[*uParam0 /*32*/].f_8), 128);
	__LIB_10__::func_268(uParam0, 2);
	__LIB_10__::func_269(uParam0, 2);
	func_148();
	func_149();
	func_150(1, Local_19[1 /*35*/].f_1);
	iLocal_523 = joaat("DOOR_CAT_HOUSE_FRONT");
	iLocal_524 = joaat("DOOR_CAT_HOUSE_BACK");
	__LIB_1__::func_948(iLocal_523, 1, 0f, 0, 0, 1f, 1, 0);
	__LIB_1__::func_948(iLocal_524, 1, 0f, 0, 0, 1f, 1, 0);
}

bool func_38(char[4] cParam0)
{
	int iVar0;
	float fVar1;
	if (cParam0->f_1 == 3)
	{
		if (__LIB_0__::func_58(cParam0))
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
	else if (__LIB_0__::func_272(Global_1392626[*cParam0 /*32*/].f_11, 1))
	{
		if (!__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_8, 256))
		{
			if (!__LIB_10__::func_363(*cParam0, (Global_1392626[*cParam0 /*32*/].f_5 + 10f)) && !func_160(Global_1392626[*cParam0 /*32*/].f_11, 0, &(cParam0->f_2077), &(cParam0->f_2105), 0, 0))
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
	func_162(cParam0);
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
	func_122(cParam0);
	if (__LIB_10__::func_266(cParam0) == 0)
	{
		__LIB_10__::func_471(*cParam0);
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
	switch (iVar0)
	{
		case 0:
			Var1 = { vLocal_525 };
			Var1.f_3 = fLocal_528;
			break;
		case 1:
			Var1 = { vLocal_529 };
			Var1.f_3 = fLocal_532;
			break;
		case 2:
			Var1 = { vLocal_533 };
			Var1.f_3 = fLocal_536;
			break;
		case 3:
			Var1 = { vLocal_537 };
			Var1.f_3 = fLocal_540;
			break;
	}
	return Var1;
}

bool func_42(var uParam0)
{
	return func_170(*uParam0, uParam0->f_3);
}

bool func_46(char[4] cParam0)
{
	if (cParam0->f_1 == 8)
	{
		if (func_171(cParam0))
		{
			return true;
		}
	}
	return false;
}

void func_47(char[4] cParam0)
{
	if (cParam0->f_1 <= 3 && HUD::_TEXT_DATABASE_HAS_LOADED("LOAN"))
	{
	}
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
		if (__LIB_18__::func_235(&(cParam0->f_32), cParam0->f_346, 0, 1))
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
	if (func_142(2048))
	{
		return true;
	}
	if (!bLocal_478)
	{
		if (!INTERIOR::IS_VALID_INTERIOR(iLocal_463))
		{
			iLocal_463 = INTERIOR::GET_INTERIOR_AT_COORDS(1324.842f, -2283.816f, 50.58932f);
		}
		else
		{
			if (!INTERIOR::IS_INTERIOR_READY(iLocal_463))
			{
				INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_463);
			}
			if (INTERIOR::IS_INTERIOR_READY(iLocal_463))
			{
				bLocal_478 = true;
			}
		}
		return false;
	}
	if (!bLocal_480)
	{
		if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iLocal_463, "cat_house_propset"))
		{
			if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iLocal_463, "cat_house_whiskey"))
			{
				INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iLocal_463, "cat_house_whiskey", true);
			}
			bLocal_480 = true;
		}
		return false;
	}
	if (!bLocal_481)
	{
		if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iLocal_463, "cat_house_extra_chest_loot"))
		{
			INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iLocal_463, "cat_house_extra_chest_loot", true);
			bLocal_481 = true;
		}
		else
		{
			bLocal_481 = true;
		}
		return false;
	}
	if (!bLocal_479)
	{
		if (!__LIB_10__::func_225(&uLocal_256, &Local_238))
		{
			func_187(Local_238.f_7, Local_238.f_1, &uLocal_256);
		}
		else
		{
			bLocal_479 = true;
		}
		return false;
	}
	if (!bLocal_499 && !bLocal_500)
	{
		if (!bLocal_482)
		{
			if (func_188(uParam0))
			{
				__LIB_1__::func_206(1325.655f, -2283.326f, 49.58916f, 10f, 2);
				bLocal_482 = true;
			}
		}
		if (!bLocal_486)
		{
			bLocal_486 = func_190();
		}
		if (!func_191())
		{
			return false;
		}
		if (!func_192())
		{
			return false;
		}
		if (bLocal_482 && bLocal_486)
		{
			bLocal_484 = func_63(iLocal_189, 32, 0);
		}
	}
	__LIB_4__::func_228(&(Local_19[0 /*35*/].f_6));
	__LIB_6__::func_905(&(Local_19[0 /*35*/].f_6));
	__LIB_1__::func_401(&(Local_19[0 /*35*/].f_6), 1);
	__LIB_1__::func_413(&(Local_19[0 /*35*/].f_6), 1);
	__LIB_4__::func_228(&(Local_19[1 /*35*/].f_6));
	__LIB_6__::func_905(&(Local_19[1 /*35*/].f_6));
	__LIB_1__::func_401(&(Local_19[1 /*35*/].f_6), 1);
	__LIB_1__::func_398(&(Local_19[1 /*35*/].f_6), 1);
	__LIB_1__::func_413(&(Local_19[1 /*35*/].f_6), 1);
	if (!bLocal_499 && !bLocal_500)
	{
		if (!bLocal_482)
		{
			return false;
		}
		if (!bLocal_484)
		{
			return false;
		}
		if (!bLocal_486)
		{
			return false;
		}
	}
	if (!STREAMING::HAS_MODEL_LOADED(Local_238.f_7))
	{
		return false;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_447[13]))
	{
		__LIB_3__::func_139(&(iLocal_447[13]), vLocal_525, 0f, 0f, 0f, 20f, 20f, 5f, "MVOL_HERB_BLOCK");
		return false;
	}
	if (__LIB_10__::func_236(Local_238.f_7, Local_238.f_1, &Local_238, 0, 0, 0))
	{
	}
	POPULATION::_0xB56D41A694E42E86(iLocal_447[0], 0, 0, 0, -1, -1, 0);
	POPULATION::_0x18262CAFEBB5FBE1(iLocal_447[0], 0, 0, 0, -1, -1, 0);
	if (*uParam0 == __LIB_10__::func_367())
	{
		func_73(16384);
	}
	func_197();
	__LIB_0__::func_928(&(uParam0->f_2106), Global_35, "ARTHUR", 0);
	if (!bLocal_499 && !bLocal_500)
	{
		__LIB_0__::func_928(&(uParam0->f_2106), Local_19[0 /*35*/], "CATFISH_JACKSON", 0);
		func_198();
	}
	__LIB_3__::func_241(iLocal_447[13], 1);
	__LIB_10__::func_458(uParam0, vLocal_525, 0f, 0f, 0f, 20f, 20f, 5f);
	func_201(uParam0, 1106247680 /* Float: 30f */, 1101004800 /* Float: 20f */, 1097859072 /* Float: 15f */, 1092616192 /* Float: 10f */, 1082130432 /* Float: 4f */, 0);
	PERSISTENCE::_0x9D16896F0DBE78A2(1314.107f, -2280.375f, 49.5094f, 3f);
	func_78(2048);
	return true;
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
	__LIB_10__::func_374(cParam0);
	if (!__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_8, 512))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(cParam0->f_348)) && __LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 16))
		{
			if (__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_8, 2))
			{
				__LIB_10__::func_565(&(cParam0->f_352), cParam0->f_348, 0);
			}
			else
			{
				func_217(&(cParam0->f_352), cParam0->f_348, 0, 0);
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
			func_219(cParam0);
			if ((!PED::IS_PED_RAGDOLL(Global_35) && !PED::IS_PED_JUMPING(Global_35)) && !PED::IS_PED_INJURED(Global_1392626[*cParam0 /*32*/].f_11))
			{
				if (__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 1024))
				{
					func_220(&(Global_1392626[*cParam0 /*32*/].f_11), &(cParam0->f_2216), cParam0->f_2295, &(cParam0->f_2277), 0.1f, 3, 0, cParam0->f_2296, 1, 0, 0, 2, -1082130432 /* Float: -1f */);
					if (__LIB_9__::func_754(&(cParam0->f_2216)))
					{
						func_122(cParam0);
						__LIB_10__::func_345(cParam0);
						__LIB_10__::func_342(cParam0);
						return true;
					}
				}
			}
		}
	}
	if (func_223(cParam0))
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
	__LIB_2__::func_624(&(cParam0->f_2277), 0, 0, 1, 0);
	func_122(cParam0);
	__LIB_0__::func_7(&(cParam0->f_16), 1);
	func_225(cParam0);
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

bool func_62(var uParam0)
{
	if (!STREAMING::HAS_MODEL_LOADED(joaat("U_M_Y_CAJHOMESTEAD_01")))
	{
		return false;
	}
	if (!func_227(2, &(Local_19[1 /*35*/]), joaat("U_M_Y_CAJHOMESTEAD_01"), 1324.817f, -2285.88f, 49.5899f, 8.8559f, 1, 1, 0, 1, 1, 1, 1))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_19[1 /*35*/]))
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_19[1 /*35*/], 1324.817f, -2285.88f, 49.5899f, 8.8559f, true, false, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_19[1 /*35*/], true);
		ENTITY::_0x18FF3110CF47115D(Local_19[1 /*35*/], 2, 0);
		ENTITY::_0x18FF3110CF47115D(Local_19[1 /*35*/], 1, 0);
		__LIB_2__::func_919(Local_19[1 /*35*/], 1, 1);
		__LIB_2__::func_190(Local_19[1 /*35*/], 0);
		return true;
	}
	return false;
}

bool func_63(int iParam0, int iParam1, char* sParam2)
{
	if (!Local_90[iParam0 /*16*/].f_14)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_90[iParam0 /*16*/]))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_90[iParam0 /*16*/], true, false))
			{
				Local_90[iParam0 /*16*/].f_14 = 1;
				return Local_90[iParam0 /*16*/].f_14;
			}
		}
		else
		{
			if (MISC::IS_STRING_NULL(sParam2))
			{
				Local_90[iParam0 /*16*/] = ANIMSCENE::_CREATE_ANIM_SCENE(Local_90[iParam0 /*16*/].f_1, iParam1, Local_90[iParam0 /*16*/].f_15, false, true);
			}
			else
			{
				Local_90[iParam0 /*16*/] = ANIMSCENE::_CREATE_ANIM_SCENE(Local_90[iParam0 /*16*/].f_1, iParam1, sParam2, false, true);
			}
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_90[iParam0 /*16*/]))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(Local_90[iParam0 /*16*/]);
				func_230(iParam0);
			}
		}
	}
	return Local_90[iParam0 /*16*/].f_14;
}

void func_65()
{
	ANIMSCENE::START_ANIM_SCENE(Local_90[3 /*16*/]);
	func_232(0);
}

int func_69(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			func_69(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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

void func_70(var uParam0)
{
	char[] cVar0[8];
	char* sVar1;
	if (func_246(8388608))
	{
		func_76(iLocal_189, "bTriggerIdle", 1);
		func_247(1);
		return;
	}
	cVar0 = "LS_CAT_CUT";
	sVar1 = "NormalLeadIn";
	if (func_142(4))
	{
		cVar0 = "LS_CAT_CUT_KNOW";
		sVar1 = "AltLeadIn";
	}
	if (func_248(0, sVar1))
	{
		if (__LIB_10__::func_364(&(uParam0->f_2106), cVar0, 0))
		{
			func_76(iLocal_189, "bTriggerIdle", 1);
			func_247(1);
		}
	}
}

void func_73(int iParam0)
{
	if (!func_246(iParam0))
	{
		__LIB_1__::func_683(&iLocal_442, iParam0);
	}
}

void func_76(int iParam0, char* sParam1, bool bParam2)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_90[iParam0 /*16*/]))
	{
		if (ANIMSCENE::_0x6F1F0B17109309DA(Local_90[iParam0 /*16*/], sParam1))
		{
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_90[iParam0 /*16*/], sParam1, bParam2, false);
		}
	}
}

void func_77()
{
	ANIMSCENE::START_ANIM_SCENE(Local_90[2 /*16*/]);
	if (bLocal_475)
	{
		__LIB_1__::func_148(&uLocal_434);
	}
	__LIB_2__::func_919(Local_190, 0, 0);
	func_247(6);
}

void func_78(int iParam0)
{
	if (!func_142(iParam0))
	{
		__LIB_1__::func_683(&iLocal_441, iParam0);
	}
}

void func_81(bool bParam0)
{
	PED::_0xC163DAC52AC975D3(Local_19[1 /*35*/], 33);
	PED::_0xC163DAC52AC975D3(Local_19[1 /*35*/], 15);
	PED::_0xC163DAC52AC975D3(Local_19[1 /*35*/], 1);
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_90[3 /*16*/]))
	{
		if (ANIMSCENE::_0xF94692EB9DC15D74(Local_90[3 /*16*/], 0))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(Local_90[3 /*16*/]);
		}
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_90[1 /*16*/]) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_90[1 /*16*/], true, false))
	{
		ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(Local_90[1 /*16*/], "pedSon", &(Local_90[1 /*16*/].f_2), true, Local_90[1 /*16*/].f_15, 2);
		Local_90[1 /*16*/].f_2 = { 1315.805f, -2280.093f, 49.49288f };
		if (func_142(16777216) || bParam0)
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_19[1 /*35*/], Local_90[1 /*16*/].f_2, 2f, 20000, 1f, 1, Local_90[1 /*16*/].f_2.f_3.f_2);
		}
		else
		{
			PED::FORCE_PED_MOTION_STATE(Local_19[1 /*35*/], joaat("MOTIONSTATE_RUN"), false, 0, false);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_19[1 /*35*/], Local_90[1 /*16*/].f_2, 2f, 20000, 1f, 1, Local_90[1 /*16*/].f_2.f_3.f_2);
		}
		__LIB_10__::func_238(&(Local_19[1 /*35*/].f_6), &(Local_19[1 /*35*/].f_34));
		func_232(3);
	}
}

bool func_83(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
				func_83(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
						func_83(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_83(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_83(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_83(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_83(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_83(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_83(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
					func_83(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_83(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_83(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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

void func_84()
{
	if ((ENTITY::DOES_ENTITY_EXIST(Local_19[0 /*35*/]) && ENTITY::IS_ENTITY_DEAD(Local_19[0 /*35*/])) || __LIB_4__::func_54(2, 2048))
	{
		__LIB_4__::func_262(2, 2048);
		bLocal_496 = true;
	}
	if ((ENTITY::DOES_ENTITY_EXIST(Local_19[1 /*35*/]) && ENTITY::IS_ENTITY_DEAD(Local_19[1 /*35*/])) || __LIB_4__::func_54(2, 4096))
	{
		__LIB_4__::func_262(2, 4096);
		bLocal_497 = true;
	}
	if (bLocal_496 && bLocal_497)
	{
		__LIB_6__::func_664(2, 2);
	}
	else if (bLocal_496 && !bLocal_497)
	{
		__LIB_10__::func_239();
	}
	else if (!bLocal_496 && bLocal_497)
	{
		__LIB_10__::func_240();
	}
}

bool func_85(var uParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_348)))
	{
		if (!func_217(&(uParam0->f_352), uParam0->f_348, 0, 0))
		{
			return false;
		}
	}
	else
	{
		__LIB_10__::func_263(1, 1, 1);
		__LIB_0__::func_11(uParam0);
		if (!func_338(uParam0))
		{
			return false;
		}
		if (__LIB_6__::func_904())
		{
			__LIB_3__::func_732(1);
			return false;
		}
	}
	if (!__LIB_0__::func_1(Global_1392626[*uParam0 /*32*/].f_9, 32))
	{
		return false;
	}
	return true;
}

bool func_88(char[4] cParam0)
{
	char cVar0[32];
	StringCopy(&cVar0, cParam0->f_346, 32);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		return true;
	}
	return func_349(cVar0, &(cParam0->f_32), cParam0);
}

int func_96(var uParam0)
{
	func_353(uParam0);
	__LIB_10__::func_385(Local_19[0 /*35*/]);
	if (!bLocal_498 && !bLocal_499)
	{
		PLAYER::SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(PLAYER::GET_PLAYER_INDEX());
		PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 28, 1);
	}
	if (!func_246(-2147483648))
	{
		__LIB_1__::func_948(iLocal_523, 0, 0f, 0, 1, 0, 0, 0);
		__LIB_1__::func_948(iLocal_524, 0, 0f, 0, 1, 0, 0, 0);
		func_73(-2147483648);
	}
	if (iLocal_15 >= 7)
	{
		if (PED::_0x91A5F9CBEBB9D936(uLocal_400))
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_400, false);
		}
	}
	if (iLocal_15 < 5)
	{
		if (iLocal_16 == 7)
		{
			func_355(5);
		}
		else if (iLocal_16 == 11)
		{
			if (func_246(1073741824 /* Float: 2f */))
			{
				func_355(7);
			}
			else
			{
				func_355(6);
			}
			UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
			__LIB_3__::func_732(0);
		}
		else if (iLocal_16 == 10)
		{
			if (func_246(1073741824 /* Float: 2f */))
			{
				func_355(7);
			}
			else
			{
				func_355(6);
			}
			UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
		}
	}
	if (iLocal_522 == 1)
	{
		if (iLocal_15 > 1)
		{
			func_356();
		}
	}
	if (!bLocal_499 && !bLocal_500)
	{
		func_357(uParam0);
		if (!bLocal_498)
		{
			if (!bLocal_485)
			{
				if (!bLocal_483)
				{
					if (func_62(uParam0))
					{
						bLocal_483 = true;
					}
				}
				else if (func_63(3, 32, 0))
				{
					__LIB_0__::func_928(&(uParam0->f_2106), Local_19[1 /*35*/], "CATFISH_SON", 0);
					func_65();
					bLocal_485 = true;
				}
			}
			else
			{
				if (iLocal_15 <= 4)
				{
					if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_447[9]))
					{
						iLocal_447[9] = VOLUME::_0x0EB78C2B156635B1(joaat("VOLBOX"), 1326.293f, -2281.709f, 50.51648f, 0f, 0f, 34.75f, 1f, 1f, 3f);
					}
				}
				func_358();
				func_359(uParam0);
			}
		}
	}
	func_360();
	func_361();
	func_362();
	if (iLocal_15 > 0)
	{
		if (iLocal_15 != 7 && iLocal_15 != 6)
		{
			if (func_363())
			{
				func_84();
				return 9;
			}
		}
		__LIB_0__::func_172(iLocal_447[6]);
	}
	switch (iLocal_15)
	{
		case 0:
			func_365(uParam0);
			break;
		case 1:
			func_366(uParam0);
			break;
		case 2:
			func_367();
			break;
		case 3:
			func_368();
			break;
		case 4:
			func_369(uParam0);
			break;
		case 5:
			func_370();
			break;
		case 6:
			if (func_371(uParam0))
			{
				func_84();
				return 9;
			}
			break;
		case 7:
			if (func_372(uParam0))
			{
				func_84();
				return 9;
			}
			break;
	}
	return 8;
}

void func_97(int iParam0, bool bParam1, bool bParam2)
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
	func_378(Global_1392626[iParam0 /*32*/].f_3, bParam2, bParam1, 0, 1);
	if (Global_1392626[iParam0 /*32*/].f_7 != -1)
	{
		func_379(Global_1392626[iParam0 /*32*/].f_7);
	}
}

bool func_118(var uParam0)
{
	int iVar0;
	iVar0 = __LIB_10__::func_266(uParam0);
	func_358();
	if (func_142(256))
	{
		if ((iLocal_16 != 9 && iLocal_16 != 10) && iLocal_16 != 11)
		{
			__LIB_3__::func_732(0);
			func_405();
		}
	}
	if (iVar0 == 0)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_19[1 /*35*/]))
		{
			if (iLocal_17 == 3)
			{
				func_406();
			}
		}
	}
	func_357(uParam0);
	func_359(uParam0);
	if (!__LIB_10__::func_283(Local_19[0 /*35*/], -1082130432 /* Float: -1f */, 1116471296 /* Float: 70f */))
	{
		return false;
	}
	if (!__LIB_10__::func_283(Local_19[1 /*35*/], -1082130432 /* Float: -1f */, 1116471296 /* Float: 70f */))
	{
		return false;
	}
	if (iVar0 != 1 && iVar0 != 2)
	{
		if (__LIB_0__::func_266(Global_35, vLocal_404, 200f, 1, 1))
		{
			return false;
		}
	}
	return true;
}

void func_120(char[4] cParam0)
{
	int iVar0;
	__LIB_0__::func_325(&(Local_19[0 /*35*/].f_5));
	__LIB_0__::func_325(&iLocal_462);
	if (__LIB_10__::func_266(cParam0) == 0)
	{
		func_84();
	}
	if (PED::_0x91A5F9CBEBB9D936(uLocal_400))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_400, false);
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_90[iVar0 /*16*/]))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(Local_90[iVar0 /*16*/]);
		}
		iVar0++;
	}
	if (PATHFIND::_0xDE0EA444735C1368(iLocal_447[8]))
	{
		PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_447[8]);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_447[0]))
	{
		POPULATION::_0x74C2B3DC0B294102(iLocal_447[0]);
		POPULATION::_0xA1CFB35069D23C23(iLocal_447[0]);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_447[13]))
	{
		__LIB_3__::func_241(iLocal_447[13], 0);
	}
	iVar0 = 0;
	while (iVar0 < 14)
	{
		__LIB_0__::func_172(iLocal_447[iVar0]);
		iVar0++;
	}
	if (!func_246(-2147483648))
	{
		__LIB_1__::func_948(iLocal_523, 0, 0f, 0, 1, 0, 0, 0);
		__LIB_1__::func_948(iLocal_524, 0, 0f, 0, 1, 0, 0, 0);
		func_73(-2147483648);
	}
	func_356();
	if (ENTITY::_0x1FF441D7954F8709(iLocal_254))
	{
		ENTITY::_0xD2B9C78537ED5759(iLocal_254);
	}
	if (ENTITY::_0x1FF441D7954F8709(iLocal_255))
	{
		ENTITY::_0xD2B9C78537ED5759(iLocal_255);
	}
	if (__LIB_10__::func_225(&uLocal_256, &Local_238))
	{
		__LIB_11__::func_582(&uLocal_256);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_198.f_7);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_206.f_7);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_214.f_7);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_222.f_7);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_230.f_7);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_238.f_7);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_246.f_7);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_FOLDEDBILLS01X"));
	__LIB_1__::func_281(&iLocal_445, 1, 1);
	__LIB_1__::func_281(&iLocal_446, 1, 1);
	func_150(0, Local_19[1 /*35*/].f_1);
	if (ENTITY::DOES_ENTITY_EXIST(Local_190))
	{
		OBJECT::DELETE_OBJECT(&Local_190);
	}
	if (INTERIOR::IS_VALID_INTERIOR(iLocal_463) && INTERIOR::IS_INTERIOR_READY(iLocal_463))
	{
		INTERIOR::UNPIN_INTERIOR(iLocal_463);
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE(Local_381.f_15))
	{
		AUDIO::STOP_AUDIO_SCENE(Local_381.f_15);
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE(Local_381.f_16))
	{
		AUDIO::STOP_AUDIO_SCENE(Local_381.f_16);
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE(Local_381.f_17))
	{
		AUDIO::STOP_AUDIO_SCENE(Local_381.f_17);
	}
	AUDIO::CANCEL_MUSIC_EVENT(&Local_381);
	AUDIO::CANCEL_MUSIC_EVENT(&(Local_381.f_2));
	AUDIO::CANCEL_MUSIC_EVENT(&(Local_381.f_4));
	AUDIO::CANCEL_MUSIC_EVENT(&(Local_381.f_13));
	AUDIO::CANCEL_MUSIC_EVENT(&(Local_381.f_6));
	__LIB_10__::func_227(&(Local_381.f_9), 0);
	__LIB_2__::func_426(&(Local_19[0 /*35*/]));
	__LIB_2__::func_426(&(Local_19[1 /*35*/]));
	__LIB_2__::func_788(&(Local_19[0 /*35*/]), 1, 0, 1);
	__LIB_2__::func_788(&(Local_19[1 /*35*/]), 1, 0, 1);
}

void func_122(char[4] cParam0)
{
	if (__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 1024))
	{
		__LIB_0__::func_8(&(Global_1392626[*cParam0 /*32*/].f_9), 1024);
		if (__LIB_0__::func_272(Global_1392626[*cParam0 /*32*/].f_11, 0))
		{
			__LIB_2__::func_624(&(cParam0->f_2277), 0, 0, 1, 0);
			__LIB_1__::func_480(&(Global_1392626[*cParam0 /*32*/].f_11));
		}
	}
}

void func_141(int iParam0)
{
	if (func_142(iParam0))
	{
		__LIB_1__::func_681(&iLocal_441, iParam0);
	}
}

bool func_142(int iParam0)
{
	return __LIB_0__::func_27(iLocal_441, iParam0);
}

void func_148()
{
	func_427();
	func_428();
	func_429();
	func_430();
}

void func_149()
{
	func_431();
	WEAPON::_0x72D4CB5DB927009C(iLocal_18, -1, 0);
	STREAMING::REQUEST_MODEL(joaat("U_M_O_CAJHOMESTEAD_01"), false);
	STREAMING::REQUEST_MODEL(joaat("U_M_Y_CAJHOMESTEAD_01"), false);
	STREAMING::REQUEST_MODEL(Local_198.f_7, false);
	STREAMING::REQUEST_MODEL(Local_206.f_7, false);
	STREAMING::REQUEST_MODEL(Local_214.f_7, false);
	STREAMING::REQUEST_MODEL(Local_222.f_7, false);
	STREAMING::REQUEST_MODEL(Local_230.f_7, false);
	STREAMING::REQUEST_MODEL(Local_238.f_7, false);
	STREAMING::REQUEST_MODEL(Local_246.f_7, false);
	STREAMING::REQUEST_MODEL(joaat("P_FOLDEDBILLS01X"), false);
	TASK::REQUEST_WAYPOINT_RECORDING(sLocal_464);
}

void func_150(bool bParam0, vector3 vParam1)
{
	int iVar0;
	iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(vParam1);
	if (INTERIOR::IS_VALID_INTERIOR(iVar0))
	{
		if (bParam0)
		{
			INTERIOR::PIN_INTERIOR_IN_MEMORY(iVar0);
		}
		else
		{
			INTERIOR::UNPIN_INTERIOR(iVar0);
		}
	}
}

bool func_160(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;
	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		__LIB_5__::func_686(uParam2, 1, iVar0);
	}
	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0f)
		{
			uParam2->f_12 = fParam5;
		}
		else
		{
			uParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!uParam2->f_1 & 128 != 0)
		{
			if (__LIB_2__::func_968(iParam0, uParam2))
			{
				*uParam3 = 128;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (__LIB_4__::func_237(iParam0, uParam2))
				{
					*uParam3 = 8;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
				else if (__LIB_2__::func_969(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (__LIB_4__::func_235(iParam0, uParam2))
				{
					*uParam3 = 64;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && __LIB_1__::func_394(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (__LIB_1__::func_395(uParam2, 1065353216 /* Float: 1f */))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (__LIB_2__::func_875(Global_35, iParam0, uParam2))
					{
						*uParam3 = 4;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return true;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (__LIB_2__::func_876(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (__LIB_2__::func_877(Global_35, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (__LIB_2__::func_877(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (__LIB_2__::func_971(iParam0, uParam2))
				{
					*uParam3 = 32;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || uParam2->f_12 < 20f)
			{
				if (__LIB_1__::func_327(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
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
					if ((__LIB_4__::func_172(iParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && __LIB_11__::func_404(uParam2, iParam0)) && __LIB_2__::func_832(uParam2, iParam0))
					{
						*uParam3 = 2;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((__LIB_4__::func_172(iParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && __LIB_11__::func_404(uParam2, iParam0)) && __LIB_2__::func_832(uParam2, iParam0))
				{
					*uParam3 = 2;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
							{
								__LIB_0__::func_11();
								*uParam3 = 2;
								__LIB_2__::func_831(iParam0, uParam2, *uParam3);
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
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
						{
							__LIB_0__::func_11();
							*uParam3 = 2;
							__LIB_2__::func_831(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (__LIB_2__::func_840(uParam2, iParam0) || (uParam2->f_9 > 0 && (__LIB_0__::func_485() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						__LIB_0__::func_11();
						*uParam3 = 2;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
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
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_42))
						{
							__LIB_0__::func_11();
							*uParam3 = 2;
							__LIB_2__::func_831(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (__LIB_2__::func_833(uParam2, iParam0))
			{
				*uParam3 = 1024;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (__LIB_2__::func_867(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (__LIB_2__::func_878(iParam0, uParam2))
					{
						*uParam3 = 8192;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (__LIB_2__::func_228(iParam0, uParam2))
				{
					*uParam3 = 32768;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
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
					if (__LIB_1__::func_332(&iParam0, uParam2))
					{
						*uParam3 = 512;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (__LIB_2__::func_834(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (__LIB_1__::func_333(uParam2, iParam0))
			{
				*uParam3 = 1;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

void func_162(char[4] cParam0)
{
	__LIB_10__::func_285(cParam0, 2);
	__LIB_0__::func_325(&(Local_19[0 /*35*/].f_5));
	__LIB_0__::func_325(&iLocal_462);
	__LIB_2__::func_624(&Local_318, 1, 1, 1, 0);
	vLocal_257.f_2 = 0;
	__LIB_1__::func_480(&(Local_19[1 /*35*/]));
	bLocal_505 = true;
	func_78(4194304);
	if (1 == __LIB_10__::func_266(cParam0))
	{
		if (!__LIB_0__::func_272(Global_35, 0))
		{
			__LIB_10__::func_227(&(Local_381.f_9), 0);
		}
		__LIB_4__::func_142(Local_19[0 /*35*/], 1, 0);
	}
}

int func_170(vector3 vParam0, var uParam3)
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
		iVar0 = func_484(0, 0);
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

bool func_171(char[4] cParam0)
{
	if (cParam0->f_1 == 8)
	{
		if (!__LIB_0__::func_266(Global_35, vLocal_545, 100f, 1, 1))
		{
			__LIB_10__::func_227(&(Local_381.f_11), 0);
			StringCopy(&(cParam0->f_2208), "LSCAT_F_LEFT", 16);
			return true;
		}
	}
	return false;
}

int func_187(var uParam0, vector3 vParam1, var uParam4)
{
	if (*uParam4 != 0)
	{
		return 1;
	}
	*uParam4 = ENTITY::_0x6F3068258A499E52(uParam0, vParam1, 13);
	return 1;
}

bool func_188(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_19[0 /*35*/]))
	{
		if (!STREAMING::HAS_MODEL_LOADED(joaat("U_M_O_CAJHOMESTEAD_01")))
		{
			return false;
		}
		if (!func_227(2, &(Local_19[0 /*35*/]), joaat("U_M_O_CAJHOMESTEAD_01"), 1308.45f, -2342.498f, 40.9511f, 139.5668f, 1, 1, 0, 1, 1, 1, 1))
		{
			return false;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_19[0 /*35*/]))
	{
		Global_1392626[*uParam0 /*32*/].f_11 = Local_19[0 /*35*/];
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_19[0 /*35*/], 1308.45f, -2342.498f, 40.9511f, 139.5668f, true, false, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_19[0 /*35*/], true);
		WEAPON::REMOVE_ALL_PED_WEAPONS(Local_19[0 /*35*/], true, true);
		__LIB_2__::func_190(Local_19[0 /*35*/], 0);
		__LIB_4__::func_228(&(Local_19[0 /*35*/].f_6));
		PED::SET_PED_CONFIG_FLAG(Local_19[0 /*35*/], 124, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_19[0 /*35*/], 58, true);
		ENTITY::_0x18FF3110CF47115D(Local_19[0 /*35*/], 2, 0);
		PED::_0x923583741DC87BCE(Local_19[0 /*35*/], "algie");
		ENTITY::_0x18FF3110CF47115D(Local_19[0 /*35*/], 1, 0);
		PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_19[0 /*35*/], 16);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_19[0 /*35*/], false);
		return true;
	}
	return false;
}

int func_190()
{
	bool bVar0;
	bVar0 = true;
	if (!func_507(&Local_190))
	{
		bVar0 = false;
	}
	if (!func_507(&Local_198))
	{
		bVar0 = false;
	}
	if (!func_507(&Local_206))
	{
		bVar0 = false;
	}
	if (!func_507(&Local_230))
	{
		bVar0 = false;
	}
	if (!func_507(&Local_222))
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
		return 0;
	}
	return 1;
}

bool func_191()
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_214))
	{
		if (iLocal_254 == 0)
		{
			iLocal_254 = ENTITY::_0x6F3068258A499E52(Local_214.f_7, Local_214.f_1, 7);
		}
		else if (ENTITY::_0x1FF441D7954F8709(iLocal_254))
		{
			Local_214 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(iLocal_254));
		}
	}
	else
	{
		return true;
	}
	return false;
}

bool func_192()
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_246))
	{
		if (iLocal_255 == 0)
		{
			iLocal_255 = ENTITY::_0x6F3068258A499E52(Local_246.f_7, Local_246.f_1, 7);
		}
		else if (ENTITY::_0x1FF441D7954F8709(iLocal_255))
		{
			Local_246 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(iLocal_255));
		}
	}
	else
	{
		if (!bLocal_489)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_246))
			{
				ENTITY::SET_ENTITY_VISIBLE(Local_246, false);
				ENTITY::SET_ENTITY_COLLISION(Local_246, false, false);
			}
			bLocal_489 = true;
		}
		return true;
	}
	return false;
}

void func_197()
{
	PED::ADD_RELATIONSHIP_GROUP("m_relCatfish", &iLocal_399);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_19[0 /*35*/], iLocal_399);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_19[1 /*35*/], iLocal_399);
}

void func_198()
{
	ANIMSCENE::START_ANIM_SCENE(Local_90[iLocal_189 /*16*/]);
	func_247(0);
}

void func_201(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	uParam0->f_17.f_2 = iParam1;
	uParam0->f_17.f_3 = iParam2;
	uParam0->f_17.f_4 = iParam3;
	uParam0->f_17.f_5 = iParam4;
	uParam0->f_17.f_6 = iParam5;
	uParam0->f_17.f_7 = iParam6;
	uParam0->f_17 = 0;
}

bool func_217(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
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
			__LIB_10__::func_612(uParam0, iParam5, bParam6);
		}
		else if (__LIB_0__::func_78(uParam0) > 3)
		{
			if (__LIB_0__::func_81(uParam0) == 0)
			{
				if (!__LIB_10__::func_278(uParam0, 524288))
				{
					__LIB_18__::func_229(uParam0);
				}
				else if (CAM::IS_SCREEN_FADED_OUT())
				{
					__LIB_10__::func_291(uParam0, 4);
					__LIB_0__::func_115(uParam0, 10);
					__LIB_18__::func_232(uParam0, iParam5);
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
				__LIB_10__::func_559(uParam0);
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
				__LIB_18__::func_232(uParam0, iParam5);
				return true;
			}
		}
	}
	if (__LIB_0__::func_78(uParam0) >= 3)
	{
		__LIB_18__::func_234(uParam0, iParam5);
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
			__LIB_10__::func_541(uParam0);
			break;
		case 3:
			if (__LIB_10__::func_277(uParam0))
			{
				__LIB_3__::func_155(2);
				__LIB_10__::func_436(uParam0, uParam0->f_782[uParam0->f_1450 /*41*/].f_27, uParam0->f_1111[uParam0->f_1450 /*22*/].f_1, 1065353216 /* Float: 1f */);
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
						__LIB_18__::func_232(uParam0, iParam5);
						return true;
					}
				}
			}
			break;
		case 9:
			if (__LIB_10__::func_467(uParam0, iParam5))
			{
				__LIB_18__::func_232(uParam0, iParam5);
				__LIB_0__::func_115(uParam0, 10);
				return true;
			}
			break;
		case 10:
			return true;
	}
	return false;
}

void func_219(char[4] cParam0)
{
	vector3 vVar0;
	float fVar3;
	if (!__LIB_0__::func_1(cParam0->f_16, 2))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_1392626[*cParam0 /*32*/].f_11))
		{
			if (__LIB_0__::func_266(Global_1392626[*cParam0 /*32*/].f_11, Global_36, 40f, 1, 1))
			{
				vVar0 = { ENTITY::GET_ENTITY_COORDS(Global_1392626[*cParam0 /*32*/].f_11, true, false) };
				fVar3 = 20f;
				if (!__LIB_2__::func_640(Global_1392626[*cParam0 /*32*/].f_11, fVar3, 1075838976 /* Float: 2.5f */, 0, 1, 1084227584 /* Float: 5f */) && __LIB_2__::func_524(vVar0, &(cParam0->f_3), fVar3))
				{
					__LIB_10__::func_415(*cParam0);
					__LIB_0__::func_7(&(cParam0->f_16), 2);
				}
			}
		}
	}
	else if (!ENTITY::IS_ENTITY_DEAD(Local_19[0 /*35*/]))
	{
		__LIB_10__::func_241(&(cParam0->f_3.f_3), 1);
		__LIB_4__::func_151(Global_1392626[*cParam0 /*32*/].f_11, &(cParam0->f_3), -0.75f, 0f, 0f, 0, 35f, 20f, -1, 3000, 3000, 1075838976 /* Float: 2.5f */, 0, 1, 1084227584 /* Float: 5f */);
	}
}

int func_220(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
		__LIB_10__::func_609(uParam0, iParam1, uParam3, fParam2, fVar8, sParam7);
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
					if (func_584(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_220(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					__LIB_1__::func_480(uParam0);
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
					__LIB_15__::func_92(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
					__LIB_6__::func_742(iParam1, uParam3);
					if (func_591(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
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
					if (__LIB_13__::func_217(*uParam0, iParam1, uParam3))
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
				if (__LIB_2__::func_402(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					__LIB_11__::func_791(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_591(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					__LIB_15__::func_92(uParam0, __LIB_2__::func_402(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
					__LIB_6__::func_742(iParam1, uParam3);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					__LIB_2__::func_624(uParam3, 0, 0, 1, 1);
					__LIB_1__::func_491(iParam1, 1);
				}
				if (MISC::IS_BIT_SET(iParam1->f_21, 20))
				{
					if (PED::IS_PED_ON_MOUNT(Global_35))
					{
						if (!__LIB_0__::func_163(Global_35, 501393341) && !__LIB_0__::func_163(Global_35, 242628503))
						{
							iVar9 = 0;
							if (__LIB_3__::func_547(Global_35, *uParam0, 1f) == 3)
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
							if (__LIB_3__::func_547(Global_35, *uParam0, 1f) == 3)
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
					else if (!(MISC::IS_BIT_SET(*iParam1, 12) || __LIB_10__::func_245(iParam1, uParam0)))
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
								__LIB_4__::func_101(uParam3, 0, 0);
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
					__LIB_11__::func_791(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_591(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					__LIB_15__::func_92(uParam0, __LIB_2__::func_402(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
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
			__LIB_13__::func_219(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

bool func_223(char[4] cParam0)
{
	float fVar0;
	if (!__LIB_2__::func_769(iLocal_523))
	{
		__LIB_1__::func_948(iLocal_523, 1, 0f, 0, 0, 1f, 1, 0);
	}
	if (!__LIB_2__::func_769(iLocal_524))
	{
		__LIB_1__::func_948(iLocal_524, 1, 0f, 0, 0, 1f, 1, 0);
	}
	if (bLocal_500 || bLocal_499)
	{
		if (__LIB_0__::func_266(Global_35, Global_1392626[*cParam0 /*32*/].f_27, 50f, 1, 1))
		{
			func_355(7);
			return true;
		}
		return false;
	}
	func_606(Global_35, 1);
	func_357(cParam0);
	func_362();
	__LIB_1__::func_448(Global_35, Global_1392626[*cParam0 /*32*/].f_24, 0, 30f, 20f, 15f, 1084227584 /* Float: 5f */, 1, 1, 1, 0);
	__LIB_4__::func_113(Global_35, Local_19[0 /*35*/], 15f, &uLocal_443, 0, 1, 1);
	if (!bLocal_498)
	{
		if (func_246(16384))
		{
			if (!bLocal_355)
			{
				if (MAP::DOES_BLIP_EXIST(Global_1392626[2 /*32*/]))
				{
					func_609(cParam0, &(cParam0->f_2277[0 /*17*/]), 0, 0, joaat("INPUT_INTERACT_LOCKON_NEG"), 1090519040 /* Float: 8f */, 0);
					__LIB_10__::func_569(&(cParam0->f_2216), Global_1392626[2 /*32*/], 0);
					__LIB_3__::func_515(&(cParam0->f_2277[0 /*17*/]), 0, 0);
					PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), Local_19[0 /*35*/], 8, 0, 1);
					bLocal_354 = true;
					bLocal_353 = true;
					bLocal_355 = true;
				}
			}
			else if (bLocal_353)
			{
				__LIB_3__::func_95(&(cParam0->f_2216), Local_19[0 /*35*/], cParam0->f_2216.f_56, 0);
				if (!__LIB_6__::func_903("LS_CAT_CUT_PRE") && !__LIB_6__::func_903("LS_CAT_CUT_PKN"))
				{
					bLocal_353 = false;
				}
			}
			else if (!bLocal_354)
			{
				if (PED::IS_PED_SWIMMING(Global_35))
				{
					__LIB_3__::func_515(&(cParam0->f_2277[0 /*17*/]), 0, 0);
					bLocal_354 = true;
				}
			}
			else if (!PED::IS_PED_SWIMMING(Global_35))
			{
				__LIB_3__::func_515(&(cParam0->f_2277[0 /*17*/]), 1, 0);
				bLocal_354 = false;
			}
			if (!__LIB_0__::func_75(&uLocal_437))
			{
				__LIB_1__::func_148(&uLocal_437);
			}
			else if (__LIB_0__::func_264(&uLocal_437) > 16f && __LIB_0__::func_48(Global_35, Local_19[0 /*35*/], 20f, 1))
			{
				if (iLocal_440 < 3)
				{
					if (__LIB_10__::func_364(&(cParam0->f_2106), "LSCAT_CONF1", 0))
					{
						__LIB_1__::func_148(&uLocal_437);
						iLocal_440++;
					}
				}
				else if (iLocal_440 < 6)
				{
					if (__LIB_10__::func_364(&(cParam0->f_2106), "LSCAT_CONF2", 0))
					{
						__LIB_1__::func_148(&uLocal_437);
						iLocal_440++;
					}
				}
				else if (iLocal_440 < 7)
				{
					if (__LIB_10__::func_364(&(cParam0->f_2106), "LSCAT_IGNORE", 0))
					{
						__LIB_1__::func_148(&uLocal_437);
						iLocal_440++;
					}
				}
			}
		}
	}
	else if (func_246(16384))
	{
		if (__LIB_10__::func_364(&(cParam0->f_2106), "LSCAT_SONDEAD1", 0))
		{
			func_73(8388608);
			bLocal_501 = true;
			return true;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_19[0 /*35*/]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_19[0 /*35*/]))
		{
			fVar0 = 1f;
			if (__LIB_0__::func_266(Local_19[0 /*35*/], Global_36, (fVar0 + 10f), 1, 1) && __LIB_3__::func_254(Global_36, Local_19[0 /*35*/]))
			{
				if (func_615(cParam0, 0, 0))
				{
					func_73(8388608);
					return true;
				}
			}
			if (func_615(cParam0, 0, 1))
			{
				func_73(8388608);
				return true;
			}
		}
		else
		{
			return true;
		}
	}
	if (func_142(16777216))
	{
		func_355(3);
		return true;
	}
	if (iLocal_16 == 7)
	{
		return true;
	}
	if (iLocal_17 == 2 || iLocal_17 == 3)
	{
		func_355(7);
		return true;
	}
	return false;
}

void func_225(var uParam0)
{
	if (!bLocal_499 && !bLocal_500)
	{
		__LIB_1__::func_572(1326.414f, -2277.153f, 48.42887f, 5f, 0, 0, 1, 1, 0);
	}
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		TASK::TASK_DISMOUNT_ANIMAL(Global_35, 0, 0, 0, 0, 0);
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		TASK::TASK_LEAVE_ANY_VEHICLE(Global_35, 0, 0);
	}
	func_78(33554432);
}

bool func_227(int iParam0, var uParam1, int iParam2, vector3 vParam3, float fParam6, int iParam7, float fParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	if (!__LIB_0__::func_272(*uParam1, 0))
	{
		if (!__LIB_0__::func_1(Global_1392626[iParam0 /*32*/].f_9, 256) || CAM::IS_SCREEN_FADED_OUT())
		{
			*uParam1 = __LIB_8__::func_931(iParam2, vParam3, fParam6, iParam7, fParam8, bParam9, bParam10, bParam11, bParam12, bParam13, 0, 0, 0);
			if (__LIB_0__::func_272(*uParam1, 0))
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

void func_230(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_621(iParam0);
			break;
		case 1:
			func_622(iParam0);
			break;
		case 2:
			func_623(iParam0);
			break;
		case 3:
			func_624(iParam0);
			break;
		case 4:
			func_625(iParam0);
			break;
	}
}

void func_232(int iParam0)
{
	if (iLocal_17 != iParam0)
	{
		iLocal_17 = iParam0;
	}
}

bool func_246(int iParam0)
{
	return __LIB_0__::func_27(iLocal_442, iParam0);
}

void func_247(int iParam0)
{
	if (iParam0 != iLocal_16 && !ENTITY::IS_ENTITY_DEAD(Local_19[0 /*35*/]))
	{
		iLocal_16 = iParam0;
	}
	if ((iParam0 != 0 && iParam0 != 10) && !func_142(16777216))
	{
		if (iParam0 == 7 || func_246(8388608))
		{
			if (MAP::DOES_BLIP_EXIST(Local_19[0 /*35*/].f_5))
			{
				MAP::_BLIP_REMOVE_MODIFIER(Local_19[0 /*35*/].f_5, -546708623);
				MAP::_BLIP_SET_MODIFIER(Local_19[0 /*35*/].f_5, 942020339);
			}
			else
			{
				__LIB_10__::func_259(&(Local_19[0 /*35*/].f_5), Local_19[0 /*35*/], joaat("BLIP_STYLE_ENEMY"), "ALG_BLIP");
			}
		}
		else if (!MAP::DOES_BLIP_EXIST(Local_19[0 /*35*/].f_5))
		{
			__LIB_10__::func_259(&(Local_19[0 /*35*/].f_5), Local_19[0 /*35*/], joaat("BLIP_STYLE_COMPANION"), "ALG_BLIP");
		}
	}
}

bool func_248(int iParam0, char* sParam1)
{
	if (func_653(iParam0, sParam1))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_90[iParam0 /*16*/], sParam1, true);
		Local_90[iParam0 /*16*/].f_15 = sParam1;
		return true;
	}
	return false;
}

bool func_338(var uParam0)
{
	if (uParam0->f_2 == 3)
	{
		if (!func_768(uParam0))
		{
			return false;
		}
	}
	return true;
}

int func_349(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, var uParam4, var uParam5)
{
	int iVar0;
	__LIB_10__::func_348(uParam4, &cParam0);
	if (__LIB_0__::func_84(uParam4, 2) && !__LIB_0__::func_84(uParam4, 67108864))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SKIP_CUTSCENE"), false);
	}
	if (__LIB_0__::func_81(uParam4) != 1)
	{
		__LIB_18__::func_230(uParam4);
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
				if (__LIB_18__::func_235(uParam4, &cParam0, 1, 1))
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam4->f_228, true, false))
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
			func_784(uParam4);
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
				__LIB_18__::func_230(uParam4);
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
				__LIB_18__::func_233(uParam4);
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
				__LIB_18__::func_233(uParam4);
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

void func_353(var uParam0)
{
	if (func_246(16) && !func_246(2048))
	{
		if ((__LIB_6__::func_903("LS_CAT_S_COWER") && AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("LS_CAT_S_COWER") > 0) || ((__LIB_6__::func_903("LSCAT_S_ILOPOS") && AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("LSCAT_S_ILOPOS") > 0) && !ENTITY::IS_ENTITY_DEAD(Local_19[1 /*35*/])))
		{
			__LIB_0__::func_325(&iLocal_462);
			if (!MAP::DOES_BLIP_EXIST(iLocal_462))
			{
				iLocal_462 = MAP::_BLIP_ADD_FOR_COORD(408396114, 1314.204f, -2280.464f, 49.494f);
				__LIB_10__::func_472(uParam0, "OBJ_LOOT_HOME", 1314.107f, -2280.375f, 49.5094f);
			}
			func_73(2048);
		}
	}
}

void func_355(int iParam0)
{
	if (iLocal_15 != iParam0)
	{
		iLocal_15 = iParam0;
		iLocal_14 = 0;
	}
}

void func_356()
{
	if (iLocal_522 == 1)
	{
		func_796();
		iLocal_522 = 2;
	}
}

void func_357(char[4] cParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_19[0 /*35*/]))
	{
		PED::SET_PED_RESET_FLAG(Local_19[0 /*35*/], 53, true);
		switch (iLocal_16)
		{
			case 0:
				func_797(cParam0);
				break;
			case 1:
				func_798(cParam0);
				break;
			case 2:
				func_799(cParam0);
				break;
			case 3:
				func_800(cParam0);
				break;
			case 5:
				func_801(cParam0);
				break;
			case 6:
				func_802(cParam0);
				break;
			case 7:
				func_803(cParam0);
				break;
			case 9:
				func_804(cParam0);
				break;
			case 10:
				func_805(cParam0);
				break;
		}
	}
	else
	{
		__LIB_0__::func_325(&(Local_19[0 /*35*/].f_5));
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_90[2 /*16*/]))
		{
			if (ANIMSCENE::_0xF94692EB9DC15D74(Local_90[2 /*16*/], 0))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(Local_90[2 /*16*/]);
			}
		}
		if (iLocal_16 != 11)
		{
			iLocal_16 = 11;
		}
	}
}

void func_358()
{
	if (!func_142(2))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_19[1 /*35*/]))
		{
			if (ENTITY::IS_ENTITY_DEAD(Local_19[1 /*35*/]) && __LIB_2__::func_901(Local_19[1 /*35*/], Global_35))
			{
				func_78(2);
			}
		}
	}
}

void func_359(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_19[1 /*35*/]))
	{
		switch (iLocal_17)
		{
			case 0:
				func_807(uParam0);
				break;
			case 1:
				func_808(uParam0);
				break;
			case 2:
				func_809(uParam0);
				break;
			case 3:
				func_810(uParam0);
				break;
			case 4:
				func_811(uParam0);
				break;
			case 5:
				func_812(uParam0);
				break;
			case 6:
				func_813(uParam0);
				break;
			case 7:
				func_814(uParam0);
				break;
		}
	}
	else
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_90[3 /*16*/]))
		{
			if (ANIMSCENE::_0xF94692EB9DC15D74(Local_90[3 /*16*/], 0))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(Local_90[3 /*16*/]);
			}
		}
		if (iLocal_17 != 8)
		{
			iLocal_17 = 8;
			__LIB_2__::func_624(&Local_318, 1, 1, 1, 0);
			vLocal_257.f_2 = 0;
			__LIB_1__::func_480(&(Local_19[1 /*35*/]));
		}
	}
}

void func_360()
{
	func_606(Global_35, 1);
	if (!ENTITY::IS_ENTITY_DEAD(Local_19[0 /*35*/]))
	{
		func_606(Local_19[0 /*35*/], 1024);
	}
}

void func_361()
{
	func_815(Global_35, 8);
	if (!ENTITY::IS_ENTITY_DEAD(Local_19[0 /*35*/]))
	{
		func_815(Local_19[0 /*35*/], 512);
	}
}

void func_362()
{
	vector3 vVar0;
	vector3 vVar3;
	if (func_142(1) || func_142(8))
	{
		if (!func_142(4096))
		{
			vVar0 = { -0.1f, 0.02f, 0.2f };
			vVar3 = { 0f, 0f, 20f };
			__LIB_18__::func_227(Local_238.f_7, Local_238.f_1, vVar0, vVar3, &Local_238, joaat("MONEY_LOANSHARK_CATFISH_DEBT"), 1, 0, 0, joaat("P_FOLDEDBILLS01X"));
			func_78(4096);
		}
	}
}

bool func_363()
{
	if (__LIB_1__::func_707(joaat("MONEY_LOANSHARK_CATFISH_DEBT"), 1, 0))
	{
		func_78(256);
		return true;
	}
	return false;
}

void func_365(var uParam0)
{
	__LIB_4__::func_113(Global_35, Local_19[0 /*35*/], 15f, &uLocal_443, 0, 1, 1);
	switch (iLocal_14)
	{
		case 0:
			if (func_653(0, "NormalLeadIn") && func_653(0, "AltLeadIn"))
			{
				if (__LIB_10__::func_227(&Local_381, 0))
				{
					if (!bLocal_498)
					{
						__LIB_3__::func_732(0);
					}
					__LIB_1__::func_539();
					__LIB_10__::func_259(&(Local_19[0 /*35*/].f_5), Local_19[0 /*35*/], -89429847, "ALG_BLIP");
					func_817(uParam0);
					__LIB_10__::func_488();
				}
			}
			break;
		case 1:
			func_819();
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_90[iLocal_189 /*16*/]))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_90[iLocal_189 /*16*/], false))
				{
					__LIB_10__::func_488();
				}
			}
			else
			{
				__LIB_10__::func_488();
			}
			if (iLocal_16 == 2)
			{
				func_820();
			}
			break;
		case 2:
			func_355(1);
			break;
	}
}

void func_366(var uParam0)
{
	switch (iLocal_14)
	{
		case 0:
			func_821(uParam0);
			if (iLocal_16 != 7)
			{
				__LIB_10__::func_472(uParam0, "OBJ_CAT_FOLLOW", ENTITY::GET_ENTITY_COORDS(Local_19[0 /*35*/], true, false));
				if (MAP::DOES_BLIP_EXIST(Local_19[0 /*35*/].f_5))
				{
					MAP::_BLIP_SET_MODIFIER(Local_19[0 /*35*/].f_5, -546708623);
				}
			}
			__LIB_10__::func_488();
			break;
		case 1:
			func_819();
			func_820();
			func_822(uParam0, "OBJ_CAT_FOLLOW", Local_19[0 /*35*/], 10, 10f);
			if (func_823() || iLocal_16 == 10)
			{
				func_824(1);
				__LIB_10__::func_488();
			}
			else
			{
				func_824(0);
			}
			break;
		case 2:
			__LIB_10__::func_378(*uParam0, func_41(1), func_41(2), 1, 2);
			if (iLocal_16 == 10)
			{
				func_355(7);
				return;
			}
			func_355(2);
			break;
	}
}

void func_367()
{
	switch (iLocal_14)
	{
		case 0:
			__LIB_10__::func_488();
			break;
		case 1:
			__LIB_10__::func_488();
			break;
		case 2:
			func_355(4);
			break;
	}
}

void func_368()
{
	switch (iLocal_14)
	{
		case 0:
			__LIB_10__::func_488();
			break;
		case 1:
			if (iLocal_17 != 0 && iLocal_17 != 2)
			{
				__LIB_10__::func_488();
			}
			break;
		case 2:
			func_355(7);
			break;
	}
}

void func_369(var uParam0)
{
	func_63(2, 32, 0);
	func_63(4, 0, 0);
	func_63(3, 32, 0);
	func_63(1, 0, 0);
	if (__LIB_0__::func_393(Global_35, iLocal_447[5], 0, 1))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 129, true);
	}
	switch (iLocal_14)
	{
		case 0:
			UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
			__LIB_1__::func_324("OBJ_WDRNK");
			__LIB_10__::func_488();
			break;
		case 1:
			if ((!func_142(16) && !func_142(32)) && !func_142(64))
			{
				func_827();
			}
			else if (func_142(16))
			{
				__LIB_10__::func_263(1, 0, 1);
				if (func_828(uParam0))
				{
					__LIB_10__::func_488();
				}
			}
			else if (func_142(32))
			{
				__LIB_10__::func_263(1, 0, 1);
				if (func_829(uParam0))
				{
					__LIB_10__::func_488();
				}
			}
			else if (func_142(64))
			{
				__LIB_10__::func_263(1, 0, 1);
				if (func_830(uParam0))
				{
					__LIB_10__::func_488();
				}
			}
			if (func_142(524288) || func_142(536870912))
			{
				__LIB_1__::func_281(&iLocal_445, 1, 1);
				__LIB_1__::func_281(&iLocal_446, 1, 1);
				__LIB_10__::func_488();
			}
			if (func_142(262144))
			{
				if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_447[5], true, 0) || (func_246(524288) && __LIB_0__::func_264(&uLocal_416) > 0.1f))
				{
					if (!__LIB_1__::func_325())
					{
						__LIB_1__::func_422("OBJ_TAKE_BOX", 7500, 0, 1, 0, 0, -1, -1, 0);
					}
				}
			}
			break;
		case 2:
			if ((func_142(16) || func_142(32)) || func_142(64))
			{
				HUD::_0xC9CAEAEEC1256E54(724769646);
			}
			if (func_142(524288) || func_142(536870912))
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_90[2 /*16*/]))
				{
					if (ANIMSCENE::_0x005E6F28DD7ED58D(Local_90[2 /*16*/], "algie"))
					{
						func_405();
						PED::_0x2208438012482A1A(Local_19[0 /*35*/], false, false);
						if (!func_142(268435456))
						{
							func_81(0);
							PED::_0x2208438012482A1A(Local_19[1 /*35*/], false, false);
						}
						func_355(5);
						return;
					}
				}
			}
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_90[4 /*16*/]))
			{
				if (!func_142(8388608))
				{
					if (func_142(16) || func_142(32))
					{
						if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_90[4 /*16*/]) > 0.48f)
						{
							PED::APPLY_DAMAGE_TO_PED(Global_35, BUILTIN::ROUND((IntToFloat(ENTITY::GET_ENTITY_HEALTH(Global_35)) / 3f)), 0, -1, 0);
							func_78(8388608);
						}
					}
				}
				if (ANIMSCENE::_0x005E6F28DD7ED58D(Local_90[4 /*16*/], "algie"))
				{
					func_405();
					PED::_0x2208438012482A1A(Local_19[0 /*35*/], false, false);
					func_81(0);
					PED::_0x2208438012482A1A(Local_19[1 /*35*/], false, false);
					func_355(5);
					return;
				}
			}
			if (iLocal_16 == 10)
			{
				func_355(7);
				return;
			}
			break;
	}
}

void func_370()
{
	switch (iLocal_14)
	{
		case 0:
			__LIB_10__::func_227(&(Local_381.f_4), 0);
			if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_190, Local_19[0 /*35*/]))
			{
				__LIB_2__::func_919(Local_190, 1, 1);
			}
			if (__LIB_0__::func_163(Global_35, 242628503))
			{
				TASK::CLEAR_PED_TASKS(Global_35, true, false);
			}
			__LIB_0__::func_172(iLocal_447[9]);
			UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
			__LIB_1__::func_324("OBJ_DEAL_ALGIE");
			__LIB_10__::func_488();
			break;
		case 1:
			if (func_832())
			{
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE(Local_381.f_17))
				{
					AUDIO::STOP_AUDIO_SCENE(Local_381.f_17);
				}
				__LIB_10__::func_227(&(Local_381.f_13), 0);
				__LIB_10__::func_488();
			}
			break;
		case 2:
			__LIB_0__::func_325(&(Local_19[0 /*35*/].f_5));
			if (func_246(1073741824 /* Float: 2f */))
			{
				func_355(7);
			}
			else
			{
				func_355(6);
			}
			break;
	}
}

bool func_371(var uParam0)
{
	bool bVar0;
	bVar0 = __LIB_1__::func_707(joaat("MONEY_LOANSHARK_CATFISH_DEBT"), 1, 0);
	switch (iLocal_14)
	{
		case 0:
			__LIB_10__::func_472(uParam0, "OBJ_SEARCH_ALGIE", 0f, 0f, 0f);
			if (PED::_0x91A5F9CBEBB9D936(uParam0->f_2213[1]))
			{
				PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_2213[1], false);
			}
			__LIB_0__::func_325(&iLocal_462);
			if (!MAP::DOES_BLIP_EXIST(iLocal_462))
			{
				iLocal_462 = MAP::_BLIP_ADD_FOR_ENTITY(408396114, Local_19[0 /*35*/]);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_462, "ALG_BLIP");
			}
			__LIB_10__::func_488();
			break;
		case 1:
			if (!func_246(32) && !func_833())
			{
				__LIB_1__::func_422("OBJ_SEARCH_ALGIE", 7500, 0, 1, 0, 0, -1, -1, 0);
				func_73(32);
			}
			if (bVar0)
			{
				bLocal_477 = true;
				__LIB_1__::func_148(&uLocal_422);
				func_78(256);
				if (__LIB_10__::func_227(&(Local_381.f_9), 0))
				{
					__LIB_10__::func_488();
				}
			}
			if (!__LIB_0__::func_75(&uLocal_425))
			{
				if (!func_246(2048))
				{
					if (__LIB_3__::func_578(Local_19[0 /*35*/]) || func_833())
					{
						__LIB_0__::func_325(&iLocal_462);
						__LIB_1__::func_148(&uLocal_425);
					}
				}
			}
			else if (__LIB_0__::func_264(&uLocal_425) > 2f)
			{
				__LIB_0__::func_37(&uLocal_425);
				func_355(7);
				func_835(32);
				return false;
			}
			break;
		case 2:
			__LIB_0__::func_325(&iLocal_462);
			func_835(32);
			return true;
	}
	return false;
}

bool func_372(var uParam0)
{
	bool bVar0;
	bVar0 = __LIB_1__::func_707(joaat("MONEY_LOANSHARK_CATFISH_DEBT"), 1, 0);
	switch (iLocal_14)
	{
		case 0:
			__LIB_10__::func_378(*uParam0, func_41(2), func_41(3), 2, 3);
			__LIB_10__::func_472(uParam0, "OBJ_LOOT_HOME", 1314.107f, -2280.375f, 49.5094f);
			if (PED::_0x91A5F9CBEBB9D936(uParam0->f_2213[1]))
			{
				PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_2213[1], false);
			}
			if (__LIB_0__::func_163(Global_35, 242628503))
			{
				TASK::CLEAR_PED_TASKS(Global_35, true, false);
			}
			__LIB_0__::func_172(iLocal_447[9]);
			__LIB_0__::func_325(&iLocal_462);
			if (!MAP::DOES_BLIP_EXIST(iLocal_462))
			{
				iLocal_462 = MAP::_0xA6EF0C54A3443E70(1247852480, iLocal_447[0]);
			}
			if (iLocal_16 == 0)
			{
				func_405();
			}
			__LIB_10__::func_488();
			break;
		case 1:
			if (!func_246(32))
			{
				__LIB_1__::func_422("OBJ_LOOT_HOME", 7500, 0, 1, 0, 0, -1, -1, 0);
				func_73(32);
			}
			else if (!__LIB_0__::func_75(&uLocal_431))
			{
				if (__LIB_0__::func_393(Global_35, iLocal_447[5], 0, 1))
				{
					__LIB_1__::func_148(&uLocal_431);
				}
			}
			else if (!bLocal_491)
			{
				if (__LIB_0__::func_264(&uLocal_431) > 20f)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_198))
					{
						if (__LIB_0__::func_48(Global_35, Local_198, 3f, 1))
						{
							if (!__LIB_0__::func_75(&uLocal_428))
							{
								__LIB_1__::func_148(&uLocal_428);
							}
							else if (__LIB_0__::func_264(&uLocal_428) > 12f)
							{
								if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_447[12]))
								{
									iLocal_447[12] = VOLUME::_CREATE_VOLUME_AGGREGATE();
								}
								else if (!bLocal_492)
								{
									VOLUME::_0x6E0D3C3F828DA773(iLocal_447[12], iLocal_447[10]);
									VOLUME::_0x6E0D3C3F828DA773(iLocal_447[12], iLocal_447[11]);
									bLocal_492 = true;
								}
								else
								{
									__LIB_0__::func_325(&iLocal_462);
									if (!MAP::DOES_BLIP_EXIST(iLocal_462))
									{
										iLocal_462 = MAP::_0xA6EF0C54A3443E70(1247852480, iLocal_447[12]);
									}
									__LIB_1__::func_422("OBJ_LOOT_HOMX", 7500, 1, 1, 0, 0, -1, -1, 0);
									bLocal_491 = true;
									__LIB_0__::func_37(&uLocal_428);
								}
							}
						}
						else if (__LIB_0__::func_75(&uLocal_428))
						{
							__LIB_0__::func_37(&uLocal_428);
						}
					}
				}
			}
			if (bVar0)
			{
				bLocal_477 = true;
				__LIB_1__::func_148(&uLocal_422);
				func_78(256);
				if (__LIB_10__::func_227(&(Local_381.f_9), 0))
				{
					__LIB_10__::func_488();
				}
			}
			if (func_142(67108864) && !func_832())
			{
				__LIB_0__::func_325(&iLocal_462);
				func_355(5);
				return false;
			}
			break;
		case 2:
			__LIB_0__::func_325(&iLocal_462);
			return true;
	}
	return false;
}

void func_378(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
						func_83(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_83(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_83(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_83(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_83(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_83(joaat("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_83(joaat("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_83(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_83(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_83(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_83(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_83(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_83(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_83(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_83(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_83(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_83(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_83(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_83(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_83(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_83(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_83(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_83(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_83(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_83(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_863();
						func_864(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
						__LIB_1__::func_101();
						__LIB_0__::func_874();
						Jump @4029; //curOff = 2449
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TOMMY"));
						Jump @4029; //curOff = 2469
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_LEVITICUS"));
						Jump @4029; //curOff = 2489
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY(__LIB_1__::func_464(10, 0)));
						Jump @4029; //curOff = 2512
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 621714131 /* GXTEntry: "Jamie Gillis" */);
						Jump @4029; //curOff = 2529
						func_83(joaat("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						if (!UNLOCK::_UNLOCK_IS_VISIBLE(joaat("SP_CHAL_HUNT_ROOT")))
						{
							UNLOCK::_UNLOCK_SET_VISIBLE(joaat("SP_CHAL_HUNT_ROOT"), true);
							__LIB_1__::func_240(449, 0);
						}
						Jump @4029; //curOff = 2586
						if (!UNLOCK::_UNLOCK_IS_VISIBLE(joaat("SP_CHAL_GAMB_ROOT")))
						{
							UNLOCK::_UNLOCK_SET_VISIBLE(joaat("SP_CHAL_GAMB_ROOT"), true);
							__LIB_1__::func_240(446, 0);
						}
						Jump @4029; //curOff = 2620
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_LEIGHGRAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_ARCHIBALD"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_PROFESSION_GRAY"));
						Jump @4029; //curOff = 2674
						__LIB_1__::func_630(304805134, 1, 1);
						if (!__LIB_1__::func_25(Global_1347702[21 /*49*/].f_15, 1))
						{
							func_378(Global_1347702[21 /*49*/].f_15, 0, 0, 0, 0);
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
						Jump @4029; //curOff = 2763
						__LIB_0__::func_875();
						Jump @4029; //curOff = 2770
						__LIB_0__::func_876();
						Jump @4029; //curOff = 2777
						__LIB_1__::func_810(Global_35, joaat("CLOTHING_ITEM_BADGE_PZERO_000"), 0, -358215195, 1, 1);
						if (__LIB_0__::func_313())
						{
							__LIB_0__::func_877(joaat("WEAPON_REPEATER_EVANS"));
						}
						Jump @4029; //curOff = 2817
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TAVISH_GRAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLIVE"));
						Jump @4029; //curOff = 2871
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
						Jump @4029; //curOff = 2952
						if (__LIB_0__::func_313())
						{
							__LIB_0__::func_877(joaat("WEAPON_REVOLVER_DOUBLEACTION_GAMBLER"));
						}
						Jump @4029; //curOff = 2971
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_BRONTE"));
						Jump @4029; //curOff = 2991
						__LIB_0__::func_879();
						Jump @4029; //curOff = 2998
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
						Jump @4029; //curOff = 3041
						__LIB_0__::func_881();
						Jump @4029; //curOff = 3048
						__LIB_0__::func_882();
						Jump @4029; //curOff = 3055
						if (!__LIB_1__::func_25(Global_1347702[82 /*49*/].f_15, 1))
						{
							func_378(Global_1347702[82 /*49*/].f_15, 0, 0, 0, 0);
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
							func_378(Global_1347702[83 /*49*/].f_15, 0, 0, 0, 0);
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
						Jump @4029; //curOff = 3208
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ARTURO"));
						Jump @4029; //curOff = 3228
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_MONROE"));
						Jump @4029; //curOff = 3248
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_FAVOURS"));
						Jump @4029; //curOff = 3268
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLEET_GOON"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_JOE_GOON"));
						Jump @4029; //curOff = 3305
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_PAYTAH"));
						Jump @4029; //curOff = 3325
						Jump @4029; //curOff = 3328
						__LIB_0__::func_883();
						Jump @4029; //curOff = 3335
						__LIB_0__::func_884();
						Jump @4029; //curOff = 3342
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TOM_DICKENS"));
						Jump @4029; //curOff = 3362
						__LIB_0__::func_885();
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_DAVID_GEDDES"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ABE"));
						Jump @4029; //curOff = 3403
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ANGUS_GEDDES"));
						Jump @4029; //curOff = 3423
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_DUNCAN_GEDDES"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MRS_GEDDES"));
						Jump @4029; //curOff = 3460
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
						func_83(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_83(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						Jump @4029; //curOff = 3663
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ALBERT_CAKE"));
						__LIB_1__::func_146(89200);
						__LIB_1__::func_146(2300);
						__LIB_1__::func_146(2300);
						Jump @4029; //curOff = 3705
						__LIB_0__::func_887();
						Jump @4029; //curOff = 3712
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
						Jump @4029; //curOff = 3964
						if (__LIB_1__::func_25(Global_1347702[9 /*49*/].f_15, 1))
						{
							__LIB_1__::func_146(-6000);
						}
						Jump @4029; //curOff = 3992
						__LIB_1__::func_146(23400);
						__LIB_1__::func_146(1900);
						__LIB_1__::func_146(-15000);
						Jump @4029; //curOff = 4016
						__LIB_1__::func_146(-5500);
						Jump @5143; //curOff = 4029
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
						Jump @5143; //curOff = 5081
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
						func_897();
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
											func_83(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
void func_379(int iParam0)
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

void func_405()
{
	int iVar0;
	PED::_0x406CCF555B04FAD3(Local_19[0 /*35*/], 1, 1f);
	if (!PATHFIND::_0xDE0EA444735C1368(iLocal_447[8]))
	{
		PATHFIND::_0x19C7567D2F2287D6(iLocal_447[8], 7);
	}
	if (!bLocal_498 && !__LIB_6__::func_903("LSCAT_IG14_ALT6"))
	{
		__LIB_3__::func_732(0);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_90[2 /*16*/]))
	{
		if (ANIMSCENE::_0xF94692EB9DC15D74(Local_90[2 /*16*/], 0))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(Local_90[2 /*16*/]);
		}
	}
	if (func_142(128))
	{
		TASK::TASK_COMBAT_PED(Local_19[0 /*35*/], Global_35, 1048576, 16);
		func_247(7);
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_190))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(Local_190))
		{
			ENTITY::DETACH_ENTITY(Local_190, true, true);
		}
	}
	__LIB_3__::func_319(Local_90[0 /*16*/]);
	PED::_0x58F7DB5BD8FA2288(Local_19[0 /*35*/]);
	if (((func_142(16) || func_142(32)) || func_142(524288)) || (func_142(1073741824 /* Float: 2f */) && !func_142(134217728)))
	{
		WEAPON::_GIVE_WEAPON_TO_PED_2(Local_19[0 /*35*/], joaat("WEAPON_MELEE_KNIFE"), 1, true, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
		if (ENTITY::DOES_ENTITY_EXIST(Local_206))
		{
			OBJECT::DELETE_OBJECT(&Local_206);
		}
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_COMBAT_PED(0, Global_35, 1048576, 16);
		TASK::CLOSE_SEQUENCE_TASK(iVar0);
		TASK::TASK_PERFORM_SEQUENCE(Local_19[0 /*35*/], iVar0);
		TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	}
	else if (func_142(64) && !func_142(134217728))
	{
		if (!__LIB_0__::func_163(Local_19[0 /*35*/], joaat("SCRIPT_TASK_PUT_PED_DIRECTLY_INTO_MELEE")))
		{
			TASK::TASK_PUT_PED_DIRECTLY_INTO_MELEE(Local_19[0 /*35*/], Global_35, joaat("AR_GRAPPLE_BACK_FROM_BACK"), 0, 2000f, 1, 0);
		}
		PED::_0x789DABD18E9024DB(Local_19[0 /*35*/], 8, 0);
	}
	else
	{
		TASK::TASK_COMBAT_PED(Local_19[0 /*35*/], Global_35, 1048576, 16);
	}
	__LIB_1__::func_991(Local_19[0 /*35*/], 0);
	func_247(7);
}

void func_406()
{
	TASK::TASK_SMART_FLEE_PED(Local_19[1 /*35*/], Global_35, 1000f, -1, 32768, 2f, 0);
	func_232(5);
}

void func_427()
{
	Local_19[0 /*35*/] = { func_931(1309.677f, -2341.551f, 41.0588f, 39.1673f) };
	Local_19[1 /*35*/] = { func_931(1326.832f, -2284.748f, 49.565f, 287.0136f) };
}

void func_428()
{
	Local_190 = { __LIB_10__::func_389(1326.702f, -2284.762f, 50.439f, 0f, 0f, 0f, joaat("P_BOTTLEJD01X")) };
	Local_198 = { __LIB_10__::func_389(1325.746f, -2281.551f, 49.7173f, 0f, 0f, -0.0168f, joaat("P_CIGARBOX02X")) };
	Local_206 = { __LIB_10__::func_389(1325.893f, -2281.568f, 50.0805f, -0.3013f, -0.6235f, 0.6599f, joaat("W_MELEE_KNIFE02")) };
	Local_214 = { __LIB_10__::func_389(1326.799f, -2284.661f, 50.04876f, 0f, 0f, -0.59f, joaat("P_WINDSORCHAIR03X")) };
	Local_222 = { __LIB_10__::func_389(1326.363f, -2284.688f, 50.3805f, 0f, 0f, -0.59f, joaat("P_MUGCOFFEE01X")) };
	Local_230 = { __LIB_10__::func_389(1327.965f, -2283.62f, 50.6379f, 0f, 0f, 0f, joaat("P_BOTTLEJD01X")) };
	Local_238 = { __LIB_10__::func_389(1314.107f, -2280.375f, 49.5094f, 0f, 0f, 0f, joaat("P_CHEST01X")) };
	Local_246 = { __LIB_10__::func_389(1325.797f, -2284.662f, 50.03978f, -0.01f, 0.01f, 35f, joaat("P_CHAIR02X")) };
}

void func_429()
{
	Local_90[0 /*16*/] = { __LIB_10__::func_449("script@proc@loansharking@catfish@leadinAlgie", "Greet") };
	Local_90[1 /*16*/] = { __LIB_10__::func_449("script@proc@homerobberies@catfish@slapKidPostKid", "pblStartAboveBed") };
	Local_90[2 /*16*/] = { __LIB_10__::func_449("script@proc@loansharking@catfish@interioralgie", "PBL_ACTION") };
	Local_90[3 /*16*/] = { __LIB_10__::func_449("script@proc@loansharking@catfish@interiorson", "PBL_BASE") };
	Local_90[4 /*16*/] = { __LIB_10__::func_449("script@proc@loansharking@catfish@interiorplayer", "PBL_GRAPPLE_FROM_A") };
	vLocal_171 = { 1325.82f, -2282.92f, 49.5892f };
	vLocal_171.f_3 = 321f;
	vLocal_171.f_4 = 336f;
	vLocal_171.f_5 = 305f;
	vLocal_177 = { 1326.81f, -2282.94f, 49.5893f };
	vLocal_177.f_3 = 45.9973f;
	vLocal_177.f_4 = 60f;
	vLocal_177.f_5 = 30f;
	Local_183 = { 1326.11f, -2284.19f, 49.5892f };
	Local_183.f_3 = 201f;
	Local_183.f_4 = 225f;
	Local_183.f_5 = 185f;
}

void func_430()
{
	iLocal_447[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1320.367f, -2281.314f, 50.10701f, 0f, 0f, 34.64299f, 10.52466f, 14.27197f, 3.086315f, "MVOL_HOUSE");
	iLocal_447[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1320.367f, -2281.314f, 50.10701f, 0f, 0f, 34.64299f, 26.67707f, 24.49979f, 5.324327f, "MVOL_AROUND_HOUSE");
	iLocal_447[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1323.66f, -2283.663f, 50.71592f, 0f, 0f, 35.83761f, 2.778479f, 3.14964f, 2.437893f, "MVOL_CONFRONT_ZONE");
	iLocal_447[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1321.303f, -2282.025f, 50.70077f, 0f, 0f, 0f, 1f, 1f, 2.479315f, "MVOL_KITCHEN_DOOR");
	iLocal_447[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1316.043f, -2284.341f, 50.31906f, 0f, 0f, 36.93426f, 1.720411f, 1.675969f, 3.763601f, "MVOL_FRONT_DOOR");
	iLocal_447[5] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1324.787f, -2283.411f, 50.60566f, 0f, 0f, 33.90632f, 5.267438f, 5.434284f, 2.756628f, "MVOL_KITCHEN");
	iLocal_447[7] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1315.648f, -2279.169f, 50.54027f, 0f, 0f, 35f, 4.6f, 5f, 2f, "MVOL_NATE_BEDROOM");
	iLocal_447[8] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1325.99f, -2281.919f, 50.06382f, 0f, 0f, 34.75f, 2f, 1f, 1f, "MVOL_CUPBOARD");
	iLocal_447[10] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1318.792f, -2279.006f, 50.10701f, 0f, 0f, 34.64298f, 10.52466f, 8.672f, 3.086315f, "MVOL_HOUSE_REDUCED_1");
	iLocal_447[11] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1320.486f, -2286.407f, 50.10701f, 0f, 0f, 34.64298f, 4.775f, 5.672f, 3.086315f, "MVOL_HOUSE_REDUCED_2");
	iLocal_447[6] = VOLUME::_0x0EB78C2B156635B1(joaat("VOLSPHERE"), 1308.205f, -2343.057f, 41.063f, 0f, 0f, 0f, 1.7f, 1.7f, 1.7f);
	if (!PED::_0x91A5F9CBEBB9D936(uLocal_400))
	{
		uLocal_400 = PED::_0x4C39C95AE5DB1329(iLocal_447[5], false, 17);
	}
}

void func_431()
{
	func_934("LSCFJ_START", "LSCFJ_INSIDE", "LSCFJ_ATTACK", "LSCFJ_ATTACK_STOP", "LSCFJ_FAIL", "LSCFJ_ABANDON", "LSCFJ_KILLED", "Loanshark_Cat_Jack_Enter_House_Scene", "Loanshark_Cat_Jack_Suspense_Scene", "Loanshark_Cat_Jack_Fight_Scene");
	AUDIO::PREPARE_MUSIC_EVENT(&Local_381);
	AUDIO::PREPARE_MUSIC_EVENT(&(Local_381.f_2));
	AUDIO::PREPARE_MUSIC_EVENT(&(Local_381.f_4));
	AUDIO::PREPARE_MUSIC_EVENT(&(Local_381.f_6));
	AUDIO::PREPARE_MUSIC_EVENT(&(Local_381.f_9));
	AUDIO::PREPARE_MUSIC_EVENT(&(Local_381.f_11));
	AUDIO::PREPARE_MUSIC_EVENT(&(Local_381.f_13));
}

int func_484(int iParam0, int iParam1)
{
	var uVar0;
	return func_984(&uVar0, iParam0, iParam1);
}

bool func_507(int iParam0)
{
	STREAMING::REQUEST_MODEL(iParam0->f_7, false);
	if (STREAMING::HAS_MODEL_LOADED(iParam0->f_7))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			*iParam0 = OBJECT::CREATE_OBJECT(iParam0->f_7, iParam0->f_1, true, true, false, false, true);
			return false;
		}
	}
	else
	{
		return false;
	}
	return true;
}

bool func_584(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
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
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::_0xE98D55C5983F2509(*uParam0);
		bVar4 = __LIB_0__::func_27(iParam4, 32);
		__LIB_11__::func_845(iParam1, uParam2, 0);
		iVar5 = __LIB_10__::func_368(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			return true;
		}
		__LIB_2__::func_624(uParam2, 0, 0, 1, 0);
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
			EVENT::_0xBB1E41DD3D3C6250(*uParam0, "IloGeneralEvents", 2);
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
		if (MISC::_0x870708A6E147A9AD(*uParam0, &cVar0, fParam3, fParam3, iVar6, iParam1->f_7, iParam1->f_8, iVar5, 0, iParam1->f_6))
		{
			if (iParam6 == 2)
			{
				iParam6 = __LIB_2__::func_388(uParam0);
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
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*uParam0, iParam6);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5) && iParam6 == 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*uParam0, MISC::GET_HASH_KEY(sParam5));
				}
				else if (iParam6 != 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*uParam0, iParam6);
				}
			}
			PED::SET_PED_CONFIG_FLAG(*uParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 301, false);
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
				PED::SET_PED_CONFIG_FLAG(*uParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 331, false);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 493, true);
			}
			else
			{
				PED::SET_PED_CONFIG_FLAG(*uParam0, 315, true);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 493, false);
			}
			if (__LIB_0__::func_27(iParam4, 2) || __LIB_0__::func_27(iParam4, 16))
			{
				__LIB_1__::func_488(*uParam0, 1, 1);
			}
			else
			{
				__LIB_1__::func_488(*uParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

bool func_591(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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
	bVar10 = PED::IS_PED_INJURED(*uParam0);
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
		__LIB_10__::func_370(*uParam0, uParam4[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (__LIB_2__::func_475(*uParam0, iParam1, uParam4[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (__LIB_2__::func_367(iParam12, (uParam4[iVar0 /*17*/])->f_6))
				{
					if (!bVar7)
					{
						__LIB_2__::func_624(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						__LIB_4__::func_101(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 11))
					{
						__LIB_11__::func_845(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
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
							__LIB_11__::func_421(iParam1, uParam4, uParam0, fParam3, sParam9);
							bVar13 = MISC::IS_STRING_NULL_OR_EMPTY(sParam9);
							__LIB_10__::func_537(iParam1, uParam4, uParam0, bVar13, sParam9, fParam2);
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
							__LIB_4__::func_101(uParam4, 0, 0);
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

void func_606(int iParam0, int iParam1)
{
	if (ENTITY::IS_ENTITY_IN_VOLUME(iParam0, iLocal_447[0], false, 0) && INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0) != 0)
	{
		if (!func_142(iParam1))
		{
			func_78(iParam1);
		}
	}
	else if (func_142(iParam1))
	{
		func_141(iParam1);
	}
}

void func_609(char[4] cParam0, int* iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (!__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 1024))
	{
		__LIB_0__::func_7(&(Global_1392626[*cParam0 /*32*/].f_9), 1024);
		if (MISC::IS_STRING_NULL(sParam2))
		{
			sParam2 = "OBJ_INTERACT";
		}
		cParam0->f_2296 = iParam6;
		cParam0->f_2295 = iParam5;
		__LIB_2__::func_602(iParam1, sParam2, iParam3, iParam4, 0, 0, 0, 1, 0);
	}
}

bool func_615(char[4] cParam0, bool bParam1, bool bParam2)
{
	if (func_160(Local_19[0 /*35*/], 0, &(Local_19[0 /*35*/].f_6), &(Local_19[0 /*35*/].f_34), 1, 0) || func_1139(Local_19[0 /*35*/]))
	{
		if (Local_19[0 /*35*/].f_34 != 8)
		{
			if (!bParam1)
			{
				return true;
			}
		}
		else if (!bParam2)
		{
			return true;
		}
	}
	return false;
}

void func_621(int iParam0)
{
	func_1141(iParam0, "Algie", Local_19[0 /*35*/]);
	func_1141(iParam0, "BottleAlgie", Local_190);
	func_1141(iParam0, "player", Global_35);
}

void func_622(int iParam0)
{
	func_1141(iParam0, "pedSon", Local_19[1 /*35*/]);
}

void func_623(int iParam0)
{
	func_1141(iParam0, "Algie", Local_19[0 /*35*/]);
	func_1141(iParam0, "CigarBox", Local_198);
	func_1141(iParam0, "AlgieBottle", Local_190);
	func_1141(iParam0, "Knife", Local_206);
}

void func_624(int iParam0)
{
	func_1141(iParam0, "Son", Local_19[1 /*35*/]);
	func_1141(iParam0, "BOTTLE", Local_230);
	func_1141(iParam0, "p_windsorchair03x", Local_214);
	func_1141(iParam0, "Mug", Local_222);
}

void func_625(int iParam0)
{
	func_1141(iParam0, "AlgieBottle", Local_190);
	func_1141(iParam0, "BOTTLE", Local_230);
	func_1141(iParam0, "p_windsorchair03x", Local_214);
	func_1141(iParam0, "CigarBox", Local_198);
	func_1141(iParam0, "Knife", Local_206);
	func_1141(iParam0, "Mug", Local_222);
	func_1141(iParam0, "Son", Local_19[1 /*35*/]);
	func_1141(iParam0, "Algie", Local_19[0 /*35*/]);
	func_1141(iParam0, "player", Global_35);
}

bool func_653(int iParam0, char* sParam1)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_90[iParam0 /*16*/]))
	{
		return false;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_90[iParam0 /*16*/], true, false))
	{
		return false;
	}
	if (!ANIMSCENE::_0xA9016536015DE29D(Local_90[iParam0 /*16*/], sParam1))
	{
		return false;
	}
	if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_90[iParam0 /*16*/], sParam1))
	{
		return true;
	}
	if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_90[iParam0 /*16*/], sParam1))
	{
		if (ANIMSCENE::_0xDF7B5144E25CD3FE(Local_90[iParam0 /*16*/], sParam1))
		{
			func_230(iParam0);
		}
	}
	return false;
}

bool func_768(var uParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	fVar0 = BUILTIN::VDIST2(uParam0->f_32.f_5, Global_36);
	fVar1 = 3f;
	if (uParam0->f_347 > 0f)
	{
		fVar1 = uParam0->f_347;
	}
	__LIB_10__::func_263(0, 1, 1);
	if (fVar0 <= (fVar1 * fVar1))
	{
		__LIB_0__::func_37(&(uParam0->f_17.f_12));
		if (__LIB_0__::func_163(Global_35, 242628503))
		{
			TASK::CLEAR_PED_TASKS(Global_35, true, false);
		}
		return true;
	}
	else
	{
		if (!__LIB_0__::func_75(&(uParam0->f_17.f_12)))
		{
			__LIB_1__::func_283(&(uParam0->f_17.f_12), 1);
		}
		else if (__LIB_0__::func_264(&(uParam0->f_17.f_12)) > 5f)
		{
			__LIB_0__::func_37(&(uParam0->f_17.f_12));
			if (__LIB_0__::func_163(Global_35, 242628503))
			{
				TASK::CLEAR_PED_TASKS(Global_35, true, false);
			}
			return true;
		}
		if (!__LIB_0__::func_163(Global_35, 242628503))
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
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_32.f_5, 1f, 7500, 0.25f, 0, 40000f);
			TASK::CLOSE_SEQUENCE_TASK(iVar2);
			TASK::TASK_PERFORM_SEQUENCE(Global_35, iVar2);
		}
		if (__LIB_0__::func_272(Global_1392626[*uParam0 /*32*/].f_11, 0))
		{
			if (!PED::IS_PED_HEADTRACKING_PED(Global_35, Global_1392626[*uParam0 /*32*/].f_11))
			{
				TASK::TASK_LOOK_AT_ENTITY(Global_35, Global_1392626[*uParam0 /*32*/].f_11, -1, 0, 51, 0);
			}
		}
	}
	return false;
}

void func_784(var uParam0)
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
		func_1273(&(uParam0->f_284), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_10__::func_316(uParam0, 0f, 0f, 0f);
		func_1275(uParam0);
		func_1276(uParam0);
		__LIB_10__::func_455(uParam0, 0f, 0f, 0f, 0, 0);
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

void func_796()
{
	if (__LIB_0__::func_272(Local_19[0 /*35*/], 0))
	{
		__LIB_1__::func_726(Local_19[0 /*35*/], 1);
	}
	__LIB_1__::func_727(Global_35, 1);
	__LIB_5__::func_438(&uLocal_506);
}

void func_797(char[4] cParam0)
{
	char[] cVar0[8];
	if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Local_19[0 /*35*/], -1))
	{
		func_405();
	}
	if (!func_1295(iLocal_189, "bTriggerIdle"))
	{
		if (__LIB_0__::func_266(Local_19[0 /*35*/], Global_36, 20f, 1, 1) && __LIB_3__::func_547(Local_19[0 /*35*/], Global_35, 0.2f) != 1)
		{
			if (!func_246(16384))
			{
				if (!bLocal_498)
				{
					if (func_142(4))
					{
						cVar0 = "LS_CAT_CUT_PKN";
					}
					else
					{
						cVar0 = "LS_CAT_CUT_PRE";
					}
					func_653(0, "AltLeadIn");
					func_653(0, "NormalLeadIn");
					if (__LIB_10__::func_364(&(cParam0->f_2106), cVar0, 0))
					{
						TASK::TASK_LOOK_AT_ENTITY(Local_19[0 /*35*/], Global_35, -1, 4, 41, 0);
						func_76(iLocal_189, "bTriggerIdle", 1);
						func_73(16384);
					}
				}
				else
				{
					TASK::TASK_LOOK_AT_ENTITY(Local_19[0 /*35*/], Global_35, 8000, 4, 41, 0);
					func_73(16384);
				}
			}
		}
	}
}

void func_798(char[4] cParam0)
{
	func_615(cParam0, 0, 0);
	if (__LIB_4__::func_172(Local_19[0 /*35*/], 0, 0, 0, 1) || (func_1139(Local_19[0 /*35*/]) && !func_246(8388608)))
	{
		func_405();
		return;
	}
	if (func_246(8388608))
	{
		if (!func_246(16777216))
		{
			if (func_248(0, "pl_breakout"))
			{
				func_73(16777216);
			}
		}
		else if (ANIMSCENE::_0x005E6F28DD7ED58D(Local_90[0 /*16*/], "Algie"))
		{
			func_405();
			PED::_0x2208438012482A1A(Local_19[0 /*35*/], false, false);
			return;
		}
	}
	TASK::TASK_LOOK_AT_ENTITY(Local_19[0 /*35*/], Global_35, 5, 0, 51, 0);
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_90[iLocal_189 /*16*/]))
	{
		if (ANIMSCENE::_0xF94692EB9DC15D74(Local_90[iLocal_189 /*16*/], 0) || ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(Local_90[iLocal_189 /*16*/]))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_190) && !ENTITY::IS_ENTITY_ATTACHED(Local_190))
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_190, Local_19[0 /*35*/], PED::GET_PED_BONE_INDEX(Local_19[0 /*35*/], 37709), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
			}
			func_1296();
			return;
		}
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_190) && !ENTITY::IS_ENTITY_ATTACHED(Local_190))
		{
			ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_190, Local_19[0 /*35*/], PED::GET_PED_BONE_INDEX(Local_19[0 /*35*/], 37709), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
		}
		func_1296();
		return;
	}
}

void func_799(char[4] cParam0)
{
	float fVar0;
	func_615(cParam0, 0, 0);
	if (__LIB_4__::func_172(Local_19[0 /*35*/], 0, 0, 0, 1) || (((func_142(1) && !func_142(1024)) && !func_142(512)) && !__LIB_0__::func_48(Global_35, Local_19[0 /*35*/], 10f, 1)))
	{
		func_405();
		return;
	}
	if (func_142(512))
	{
		PED::_0xC6981AFF6D2A71C2(Local_19[0 /*35*/]);
		PED::SET_PED_RESET_FLAG(Local_19[0 /*35*/], 94, true);
		PED::SET_PED_RESET_FLAG(Local_19[0 /*35*/], 59, true);
	}
	if (func_142(4))
	{
		fVar0 = 3f;
	}
	else
	{
		fVar0 = 3f;
	}
	if (!func_246(4096))
	{
		if (!__LIB_6__::func_903("LS_CAT_CUT") && !__LIB_6__::func_903("LS_CAT_CUT_KNOW"))
		{
			if (!__LIB_0__::func_75(&uLocal_413))
			{
				__LIB_1__::func_148(&uLocal_413);
			}
		}
		if (__LIB_0__::func_264(&uLocal_413) > fVar0)
		{
			if (__LIB_0__::func_48(Global_35, Local_19[0 /*35*/], 7f, 1))
			{
				if (__LIB_10__::func_364(&(cParam0->f_2106), cLocal_465, 0))
				{
					func_73(4096);
					__LIB_0__::func_37(&uLocal_413);
				}
			}
		}
	}
	else if (!func_246(8192))
	{
		if (!__LIB_6__::func_903(cLocal_465))
		{
			if (!__LIB_0__::func_75(&uLocal_413))
			{
				__LIB_1__::func_148(&uLocal_413);
			}
		}
		if (__LIB_0__::func_264(&uLocal_413) > 1.5f)
		{
			if (__LIB_0__::func_48(Global_35, Local_19[0 /*35*/], 7f, 1))
			{
				if (__LIB_10__::func_364(&(cParam0->f_2106), cLocal_466, 0))
				{
					func_73(8192);
					__LIB_0__::func_37(&uLocal_413);
				}
			}
		}
	}
	if ((ENTITY::IS_ENTITY_IN_VOLUME(Local_19[0 /*35*/], iLocal_447[4], true, 0) && (__LIB_0__::func_266(Local_19[0 /*35*/], vLocal_401, 2.5f, 1, 1) || !TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_19[0 /*35*/], 0))) || __LIB_0__::func_266(Local_19[0 /*35*/], vLocal_404, 2.5f, 1, 1))
	{
		func_1297();
	}
	else if (((!__LIB_0__::func_266(Local_19[0 /*35*/], Global_36, 8f, 1, 1) && !func_142(8)) && !__LIB_6__::func_903("LS_CAT_CUT")) && !__LIB_6__::func_903("LS_CAT_CUT_KNOW"))
	{
		if (__LIB_6__::func_903(cLocal_465))
		{
			AUDIO::PAUSE_SCRIPTED_CONVERSATION(cLocal_465, true, false, true, false);
		}
		if (__LIB_6__::func_903(cLocal_466))
		{
			AUDIO::PAUSE_SCRIPTED_CONVERSATION(cLocal_466, true, false, true, false);
		}
		func_1298();
	}
}

void func_800(char[4] cParam0)
{
	func_615(cParam0, 0, 0);
	if (__LIB_4__::func_172(Local_19[0 /*35*/], 0, 0, 0, 1) || (((func_142(1) && !func_142(1024)) && !func_142(512)) && !__LIB_0__::func_48(Global_35, Local_19[0 /*35*/], 10f, 1)))
	{
		func_405();
		return;
	}
	if (!func_246(1024))
	{
		if (!__LIB_5__::func_463())
		{
			if (__LIB_10__::func_364(&(cParam0->f_2106), "LSCAT_STOP", 0))
			{
				func_73(1024);
			}
		}
	}
	else if (!__LIB_0__::func_48(Local_19[0 /*35*/], Global_35, 15f, 1))
	{
		if (!bLocal_494)
		{
			if (!__LIB_5__::func_463())
			{
				if (__LIB_10__::func_364(&(cParam0->f_2106), "LS_CAT_PLY_LEAV", 0))
				{
					bLocal_494 = true;
				}
			}
		}
	}
	if (__LIB_0__::func_266(Local_19[0 /*35*/], Global_36, 5f, 1, 1) || func_142(8))
	{
		if (func_1300(cLocal_465))
		{
			AUDIO::RESTART_SCRIPTED_CONVERSATION(cLocal_465);
		}
		if (func_1300(cLocal_466))
		{
			AUDIO::RESTART_SCRIPTED_CONVERSATION(cLocal_466);
		}
		bLocal_494 = false;
		func_835(1024);
		func_1296();
	}
}

void func_801(char[4] cParam0)
{
	func_615(cParam0, 0, 0);
	if (__LIB_4__::func_172(Local_19[0 /*35*/], 0, 0, 0, 1) || __LIB_4__::func_172(Local_19[1 /*35*/], 0, 0, 0, 1))
	{
		func_405();
		return;
	}
	func_63(2, 32, 0);
	if (Local_90[2 /*16*/].f_14)
	{
		if (bLocal_475)
		{
			if (!bLocal_476)
			{
				if (func_248(2, "PBL_BASE"))
				{
					bLocal_476 = true;
				}
			}
			if (ENTITY::IS_ENTITY_IN_VOLUME(Local_19[0 /*35*/], iLocal_447[3], true, 0))
			{
				func_77();
			}
		}
		else if (__LIB_0__::func_266(Local_19[0 /*35*/], vLocal_467 + Vector(1f, 0f, 0f), 0.75f, 1, 1))
		{
			func_77();
		}
	}
}

void func_802(char[4] cParam0)
{
	ENTITY::_0xC3ABCFBC7D74AFA5(Local_19[0 /*35*/], 1, 1);
	if (((((func_615(cParam0, 0, 0) || func_142(536870912)) || iLocal_17 == 3) || PED::_IS_PED_HOGTIED(Local_19[1 /*35*/])) || iLocal_17 == 8) || !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Local_19[0 /*35*/], -1))
	{
		if ((PED::IS_PED_RAGDOLL(Local_19[0 /*35*/]) || PED::_0x29FCE825613FEFCA(Local_19[0 /*35*/], 1000)) || !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Local_19[0 /*35*/], -1))
		{
			func_78(134217728);
			func_78(536870912);
			func_405();
			return;
		}
		if (func_1301(2, "Action_p01"))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_19[0 /*35*/], -2088631586))
			{
				if (func_248(2, "PBL_BREAKOUT_POS_A"))
				{
					func_78(134217728);
					func_78(536870912);
					__LIB_10__::func_364(&(cParam0->f_2106), "LS_CAT_KILLU", 0);
					return;
				}
			}
		}
		else if (func_1301(2, "Action_p02"))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_19[0 /*35*/], -1312661666))
			{
				if (func_248(2, "PBL_BREAKOUT_POS_B"))
				{
					func_78(134217728);
					func_78(536870912);
					__LIB_10__::func_364(&(cParam0->f_2106), "LS_CAT_KILLU", 0);
					return;
				}
			}
		}
		else if ((func_1301(2, "idle_c") || func_1301(2, "pos_c_dia01")) || func_1301(2, "pos_c_dia02"))
		{
			if (func_248(2, "PBL_BREAKOUT_POS_C"))
			{
				func_78(536870912);
				func_78(1073741824 /* Float: 2f */);
				__LIB_10__::func_364(&(cParam0->f_2106), "LS_CAT_KILL", 0);
				return;
			}
		}
		else if ((func_1301(2, "idle_c2") || func_1301(2, "pos_c2_dia01")) || func_1301(2, "pos_c2_dia02"))
		{
			if (func_248(2, "PBL_BREAKOUT_POS_C2"))
			{
				func_78(536870912);
				func_78(1073741824 /* Float: 2f */);
				__LIB_10__::func_364(&(cParam0->f_2106), "LS_CAT_KILL", 0);
				return;
			}
		}
	}
	if (func_142(262144))
	{
		_NAMESPACE29::_0x66F9EB44342BB4C5(Local_19[0 /*35*/], &Local_356);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_90[4 /*16*/]))
	{
		if (!func_142(32768))
		{
			if (bLocal_475)
			{
				if (!func_1295(2, "BaseBool"))
				{
					if (func_142(1) && __LIB_0__::func_264(&uLocal_434) > 1.25f)
					{
						func_76(2, "BaseBool", 1);
						__LIB_0__::func_37(&uLocal_434);
					}
				}
				else
				{
					func_653(2, "PBL_ACTION");
					if (__LIB_0__::func_266(Local_19[0 /*35*/], vLocal_467 + Vector(1f, 0f, 0f), 0.75f, 1, 1))
					{
						if (func_248(2, "PBL_ACTION"))
						{
							if (__LIB_10__::func_364(&(cParam0->f_2106), "LSCAT_IG14_ALT1", 0))
							{
								func_78(32768);
							}
						}
					}
				}
			}
			else if (__LIB_10__::func_364(&(cParam0->f_2106), "LSCAT_IG14_ALT1", 0))
			{
				func_78(32768);
			}
		}
		if (!func_142(262144))
		{
			if (func_1301(2, "idle_c"))
			{
				if (!bLocal_490)
				{
					UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
					__LIB_1__::func_324("OBJ_TAKE_BOX");
					bLocal_490 = true;
				}
				func_78(262144);
				func_78(65536);
				__LIB_1__::func_148(&uLocal_416);
			}
		}
		else if (func_1302())
		{
			if (!func_142(65536))
			{
				if (func_1301(2, "idle_c2"))
				{
					if (func_248(2, "PBL_TRANS_C2_TO_C"))
					{
						func_141(131072);
						func_78(65536);
					}
				}
			}
		}
		else if (!func_142(131072))
		{
			if (func_1301(2, "idle_c"))
			{
				if (func_248(2, "PBL_TRANS_C_TO_C2"))
				{
					func_141(65536);
					func_78(131072);
				}
			}
		}
		if (__LIB_0__::func_75(&uLocal_416))
		{
			if (!func_246(262144))
			{
				if (__LIB_0__::func_264(&uLocal_416) > 5f)
				{
					if (func_142(65536))
					{
						if (func_1301(2, "idle_c"))
						{
							if (func_248(2, "PBL_POS_C_DIA01"))
							{
								if (__LIB_10__::func_364(&(cParam0->f_2106), "LSCAT_IG14_AL4A", 0))
								{
									func_73(262144);
									__LIB_1__::func_148(&uLocal_416);
								}
							}
						}
					}
					else if (func_142(131072))
					{
						if (func_1301(2, "idle_c2"))
						{
							if (func_248(2, "PBL_POS_C2_DIA01"))
							{
								if (__LIB_10__::func_364(&(cParam0->f_2106), "LSCAT_IG14_AL4A", 0))
								{
									func_73(262144);
									__LIB_1__::func_148(&uLocal_416);
								}
							}
						}
					}
				}
			}
			else if (!func_246(524288))
			{
				if (__LIB_0__::func_264(&uLocal_416) > 20f)
				{
					if (func_142(65536))
					{
						if (func_1301(2, "idle_c"))
						{
							if (func_248(2, "PBL_POS_C_DIA02"))
							{
								if (__LIB_10__::func_364(&(cParam0->f_2106), "LSCAT_IG14_AL4B", 0))
								{
									func_73(524288);
									__LIB_1__::func_148(&uLocal_416);
								}
							}
						}
					}
					else if (func_142(131072))
					{
						if (func_1301(2, "idle_c2"))
						{
							if (func_248(2, "PBL_POS_C2_DIA02"))
							{
								if (__LIB_10__::func_364(&(cParam0->f_2106), "LSCAT_IG14_AL4B", 0))
								{
									func_73(524288);
									__LIB_1__::func_148(&uLocal_416);
								}
							}
						}
					}
				}
			}
		}
		if (!func_142(524288) || !__LIB_0__::func_393(Global_35, iLocal_447[5], 0, 1))
		{
			if ((func_246(524288) && __LIB_0__::func_264(&uLocal_416) > 15f) || !__LIB_0__::func_393(Global_35, iLocal_447[5], 0, 1))
			{
				if (func_142(65536))
				{
					if (func_1301(2, "idle_c"))
					{
						if (func_248(2, "PBL_BREAKOUT_POS_C"))
						{
							__LIB_10__::func_364(&(cParam0->f_2106), "LSCAT_IG14_ALT6", 0);
							func_78(524288);
							__LIB_0__::func_37(&uLocal_416);
						}
					}
				}
				else if (func_142(131072))
				{
					if (func_1301(2, "idle_c2"))
					{
						if (func_248(2, "PBL_BREAKOUT_POS_C2"))
						{
							__LIB_10__::func_364(&(cParam0->f_2106), "LSCAT_IG14_ALT6", 0);
							func_78(524288);
							__LIB_0__::func_37(&uLocal_416);
						}
					}
				}
			}
		}
	}
}

void func_803(char[4] cParam0)
{
	char[] cVar0[8];
	if (PED::_IS_PED_HOGTIED(Local_19[0 /*35*/]))
	{
		func_1303();
		return;
	}
	else if (PED::_GET_LASSO_TARGET(Global_35) == Local_19[0 /*35*/])
	{
		func_1304();
		return;
	}
	if (PED::_0x0E99E3BF11BB6367(Local_19[0 /*35*/]))
	{
		PED::_0x789DABD18E9024DB(Local_19[0 /*35*/], 8, 0);
	}
	if (PED::IS_PED_BEING_STEALTH_KILLED(Global_35))
	{
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(cVar0))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(Local_19[0 /*35*/], iLocal_18, 0, false))
		{
			cVar0 = "LS_CAT_KILL";
		}
		else
		{
			cVar0 = "LS_CAT_KILLU";
		}
	}
	if (!func_142(16777216))
	{
		if (!func_246(512))
		{
			if (((!func_142(16) && !func_142(32)) && !func_142(524288)) && !func_142(67108864))
			{
				if (bLocal_498)
				{
					if (bLocal_501 && !__LIB_6__::func_903("LSCAT_SONDEAD1"))
					{
						__LIB_3__::func_732(0);
						if (__LIB_10__::func_364(&(cParam0->f_2106), cVar0, 0))
						{
							func_73(512);
						}
					}
				}
				else if (!__LIB_6__::func_903("LSCAT_IG14_ALT6"))
				{
					__LIB_3__::func_732(0);
					if (__LIB_10__::func_364(&(cParam0->f_2106), cVar0, 0))
					{
						func_73(512);
					}
				}
			}
			else if (func_142(16) || func_142(32))
			{
				__LIB_3__::func_732(0);
				if (__LIB_10__::func_364(&(cParam0->f_2106), "LS_CAT_KILL", 0))
				{
					func_73(512);
				}
			}
		}
	}
	else if (!func_142(67108864))
	{
		if ((__LIB_0__::func_48(Global_35, Local_19[0 /*35*/], 10f, 1) && !func_142(1)) || func_142(1024))
		{
			if (__LIB_10__::func_364(&(cParam0->f_2106), "LS_CAT_KILLU", 0))
			{
				if (MAP::DOES_BLIP_EXIST(Local_19[0 /*35*/].f_5))
				{
					MAP::_BLIP_REMOVE_MODIFIER(Local_19[0 /*35*/].f_5, -546708623);
					MAP::_BLIP_SET_MODIFIER(Local_19[0 /*35*/].f_5, 942020339);
				}
				else
				{
					__LIB_10__::func_259(&(Local_19[0 /*35*/].f_5), Local_19[0 /*35*/], joaat("BLIP_STYLE_ENEMY"), "ALG_BLIP");
				}
				func_78(67108864);
			}
		}
	}
}

void func_804(char[4] cParam0)
{
	if (PED::_IS_PED_HOGTIED(Local_19[0 /*35*/]))
	{
		func_1303();
	}
	else if (PED::_GET_LASSO_TARGET(Global_35) != Local_19[0 /*35*/])
	{
		func_405();
	}
}

void func_805(char[4] cParam0)
{
	if (!PED::_IS_PED_HOGTIED(Local_19[0 /*35*/]))
	{
		func_405();
	}
}

void func_807(var uParam0)
{
	if (func_1305(uParam0) || (func_142(1024) && (((iLocal_16 == 7 || iLocal_16 == 11) || iLocal_16 == 9) || iLocal_16 == 10)))
	{
		func_1306();
	}
	if (func_142(1) || func_142(1024))
	{
		if (!func_246(32768))
		{
			if (__LIB_10__::func_364(&(uParam0->f_2106), "LS_CAT_WHODAT", 0))
			{
				func_73(32768);
			}
		}
		else if (func_142(1024))
		{
			if (!bLocal_495 && !__LIB_6__::func_903("LS_CAT_WHODAT"))
			{
				if (__LIB_10__::func_364(&(uParam0->f_2106), "LSCAT_VISITOR", 0))
				{
					bLocal_495 = true;
				}
			}
		}
	}
	if (!func_142(16777216))
	{
		if ((func_142(1) && !func_142(1024)) && (((iLocal_16 != 2 && iLocal_16 != 3) && iLocal_16 != 4) && iLocal_16 != 5))
		{
			func_78(16777216);
		}
	}
	else if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_19[1 /*35*/], Global_35, 17) || func_1305(uParam0))
	{
		func_1306();
	}
	if (func_142(32768))
	{
		func_1307();
	}
}

void func_808(var uParam0)
{
	ENTITY::_0xC3ABCFBC7D74AFA5(Local_19[1 /*35*/], 1, 1);
	if (((((func_1305(uParam0) || func_142(536870912)) || iLocal_16 == 7) || iLocal_16 == 11) || PED::_IS_PED_HOGTIED(Local_19[0 /*35*/])) || !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Local_19[1 /*35*/], -1))
	{
		if (PED::IS_PED_RAGDOLL(Local_19[1 /*35*/]) || !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Local_19[1 /*35*/], -1))
		{
			func_78(268435456);
			func_78(536870912);
			func_81(1);
			return;
		}
		if (func_1301(3, "action_01"))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_19[1 /*35*/], -2088631586))
			{
				if (func_248(3, "PBL_BREAKOUT_POS_A"))
				{
					func_78(268435456);
					return;
				}
			}
		}
		else if (!func_142(268435456))
		{
			func_78(268435456);
			func_78(536870912);
			func_81(1);
			return;
		}
		func_78(536870912);
	}
	if (func_142(1048576))
	{
		_NAMESPACE29::_0x66F9EB44342BB4C5(Local_19[1 /*35*/], &Local_356);
	}
	if (!func_142(1048576))
	{
		if (__LIB_0__::func_264(&uLocal_413) > 14f)
		{
			func_78(1048576);
		}
		else if (!bLocal_493)
		{
			if (__LIB_0__::func_264(&uLocal_413) > 7f)
			{
				ENTITY::_0x669655FFB29EF1A9(Local_222, 0, "CTRL_cupFill", 0.7f);
				bLocal_493 = true;
			}
		}
	}
	if (!func_142(268435456))
	{
		if (!func_246(65536))
		{
			if (__LIB_0__::func_264(&uLocal_413) > 23f)
			{
				if (func_248(3, "PBL_DIA_01"))
				{
					if (__LIB_10__::func_364(&(uParam0->f_2106), "LSCAT_IG14_AL2A", 0))
					{
						func_73(65536);
						__LIB_1__::func_148(&uLocal_413);
					}
				}
			}
		}
		else if (!func_246(131072))
		{
			if (__LIB_0__::func_264(&uLocal_413) > 15f)
			{
				if (func_248(3, "PBL_DIA_02"))
				{
					if (__LIB_10__::func_364(&(uParam0->f_2106), "LSCAT_IG14_AL2B", 0))
					{
						func_73(131072);
						__LIB_0__::func_37(&uLocal_413);
					}
				}
			}
		}
	}
	if (func_142(268435456))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(Local_90[3 /*16*/]))
		{
			func_81(0);
			PED::_0x2208438012482A1A(Local_19[1 /*35*/], false, false);
			return;
		}
	}
}

void func_809(var uParam0)
{
	func_1305(uParam0);
	TASK::TASK_LOOK_AT_ENTITY(Local_19[1 /*35*/], Global_35, 500, 4, 51, 0);
	func_63(1, 0, 0);
	if (!func_246(1048576))
	{
		if (func_142(1) && !func_142(1024))
		{
			if (__LIB_10__::func_364(&(uParam0->f_2106), "LS_CAT_THREAT", 0))
			{
				func_73(1048576);
			}
		}
		else
		{
			func_73(1048576);
		}
	}
	else if (!func_246(2097152))
	{
		if (!__LIB_6__::func_903("LS_CAT_THREAT"))
		{
			if (__LIB_10__::func_364(&(uParam0->f_2106), "LS_CAT_RECHOUSE", 0))
			{
				func_73(2097152);
			}
		}
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(Local_90[3 /*16*/]) || ANIMSCENE::_0xF94692EB9DC15D74(Local_90[3 /*16*/], 0))
	{
		TASK::TASK_LOOK_AT_ENTITY(Local_19[1 /*35*/], Global_35, 3000, 4, 51, 0);
		func_81(1);
		PED::_0x2208438012482A1A(Local_19[1 /*35*/], false, false);
	}
	else if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_90[3 /*16*/], false) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_90[3 /*16*/]) > 0.31f)
	{
		TASK::TASK_LOOK_AT_ENTITY(Local_19[1 /*35*/], Global_35, 3000, 4, 51, 0);
		func_81(1);
		PED::_0x2208438012482A1A(Local_19[1 /*35*/], false, false);
	}
}

void func_810(var uParam0)
{
	func_1305(uParam0);
	if (func_142(16777216))
	{
		if (!func_246(1048576))
		{
			if (__LIB_10__::func_364(&(uParam0->f_2106), "LS_CAT_THREAT", 0))
			{
				func_73(1048576);
			}
		}
		else if (!func_246(2097152))
		{
			if (!__LIB_6__::func_903("LS_CAT_THREAT"))
			{
				if (__LIB_10__::func_364(&(uParam0->f_2106), "LS_CAT_RECHOUSE", 0))
				{
					func_73(2097152);
				}
			}
		}
	}
	else if (!func_246(4194304))
	{
		if (!func_246(2097152))
		{
			if (__LIB_10__::func_364(&(uParam0->f_2106), "LS_CAT_SON_C", 0))
			{
				func_73(4194304);
			}
		}
	}
	if (__LIB_0__::func_266(Local_19[1 /*35*/], Local_90[1 /*16*/].f_2, 1.2f, 1, 1))
	{
		if (!PED::IS_PED_DEAD_OR_DYING(Local_19[1 /*35*/], true))
		{
			func_1308();
		}
		return;
	}
	else if (!__LIB_0__::func_163(Local_19[1 /*35*/], 713668775))
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_19[1 /*35*/], Local_90[1 /*16*/].f_2, 2f, 20000, 1f, 1, Local_90[1 /*16*/].f_2.f_3.f_2);
	}
}

void func_811(var uParam0)
{
	int iVar0;
	iVar0 = -1;
	TASK::TASK_LOOK_AT_ENTITY(Local_19[1 /*35*/], Global_35, 5, 0, 51, 0);
	if (func_1301(1, "StartAboveBed"))
	{
		if (!func_142(4194304))
		{
			__LIB_2__::func_602(&(Local_318[0 /*17*/]), __LIB_2__::func_460(27), " ", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
			__LIB_2__::func_602(&(Local_318[1 /*17*/]), __LIB_2__::func_460(24), " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
			PED::SET_PED_CONFIG_FLAG(Local_19[1 /*35*/], 130, true);
			PED::SET_PED_CONFIG_FLAG(Local_19[1 /*35*/], 225, true);
			PED::SET_PED_CONFIG_FLAG(Local_19[1 /*35*/], 178, false);
			PED::SET_PED_CONFIG_FLAG(Local_19[1 /*35*/], 317, true);
			PED::SET_PED_CONFIG_FLAG(Local_19[1 /*35*/], 315, true);
			PED::SET_PED_CONFIG_FLAG(Local_19[1 /*35*/], 26, true);
			__LIB_1__::func_148(&uLocal_422);
			func_78(4194304);
		}
		else if (!bLocal_504 && !bLocal_505)
		{
			iVar0 = func_220(&(Local_19[1 /*35*/]), &vLocal_257, 8f, &Local_318, 0.1f, 3, 0, 0, 2065, iLocal_447[7], 0, 2, -1082130432 /* Float: -1f */);
			if (iVar0 == 0)
			{
				__LIB_2__::func_624(&Local_318, 1, 1, 1, 0);
				vLocal_257.f_2 = 0;
				__LIB_1__::func_480(&(Local_19[1 /*35*/]));
				bLocal_505 = true;
			}
			if (iVar0 == 1)
			{
				__LIB_2__::func_624(&Local_318, 1, 1, 1, 0);
				vLocal_257.f_2 = 0;
				__LIB_1__::func_480(&(Local_19[1 /*35*/]));
				bLocal_504 = true;
			}
		}
		if ((__LIB_2__::func_401(Local_19[1 /*35*/], 1, 0, 0, 0, 0) || bLocal_505) || bLocal_504)
		{
			if (uParam0->f_1 == 8)
			{
				if (!func_246(16))
				{
					if (func_248(1, "pblCower"))
					{
						__LIB_3__::func_732(0);
						if (bLocal_505)
						{
							__LIB_10__::func_364(&(uParam0->f_2106), "LS_CAT_S_COWER", 0);
						}
						else if (bLocal_504)
						{
							__LIB_10__::func_364(&(uParam0->f_2106), "LSCAT_S_ILOPOS", 0);
						}
						__LIB_1__::func_148(&uLocal_422);
						__LIB_2__::func_624(&Local_318, 1, 1, 1, 0);
						vLocal_257.f_2 = 0;
						__LIB_1__::func_480(&(Local_19[1 /*35*/]));
						func_73(16);
						func_78(2097152);
					}
				}
			}
			else if (!func_142(2097152))
			{
				if (func_248(1, "pblCower"))
				{
					__LIB_2__::func_624(&Local_318, 1, 1, 1, 0);
					vLocal_257.f_2 = 0;
					__LIB_1__::func_480(&(Local_19[1 /*35*/]));
					func_78(2097152);
				}
			}
		}
	}
	if (!__LIB_6__::func_904())
	{
		if (!bLocal_477)
		{
			if (func_142(4194304))
			{
				if (!func_246(33554432))
				{
					if (__LIB_0__::func_393(Global_35, iLocal_447[7], 0, 1) && __LIB_0__::func_264(&uLocal_422) > 11f)
					{
						if (__LIB_10__::func_364(&(uParam0->f_2106), "LS_CAT_B4LOOT", 0))
						{
							__LIB_1__::func_148(&uLocal_422);
							func_73(33554432);
						}
					}
				}
			}
		}
		else
		{
			if (!func_246(536870912))
			{
				if ((__LIB_0__::func_393(Global_35, iLocal_447[7], 0, 1) && func_246(67108864)) && __LIB_0__::func_264(&uLocal_422) > 15f)
				{
					if (TASK::_0xD04241BBF6D03A5E(Global_35) != 0)
					{
						if (__LIB_10__::func_364(&(uParam0->f_2106), "LS_CAT_STEALMOR", 0))
						{
							__LIB_1__::func_148(&uLocal_422);
							func_73(536870912);
						}
					}
				}
			}
			if (!func_246(67108864))
			{
				if (__LIB_0__::func_393(Global_35, iLocal_447[7], 0, 1) && __LIB_0__::func_264(&uLocal_422) > 3f)
				{
					if (__LIB_10__::func_364(&(uParam0->f_2106), "LS_CAT_TKLOOT", 0))
					{
						__LIB_1__::func_148(&uLocal_422);
						func_73(67108864);
					}
				}
			}
			else if (!func_246(134217728))
			{
				if (__LIB_0__::func_393(Global_35, iLocal_447[7], 0, 1) && __LIB_0__::func_264(&uLocal_422) > 21f)
				{
					if (__LIB_10__::func_364(&(uParam0->f_2106), "LS_CAT_AFLOOT", 0))
					{
						__LIB_1__::func_148(&uLocal_422);
						func_73(134217728);
					}
				}
			}
			else if (!func_246(268435456))
			{
				if (__LIB_0__::func_393(Global_35, iLocal_447[7], 0, 1) && __LIB_0__::func_264(&uLocal_422) > 25f)
				{
					if (__LIB_10__::func_364(&(uParam0->f_2106), "LS_CAT_AFLOOT", 0))
					{
						__LIB_1__::func_148(&uLocal_422);
						func_73(268435456);
					}
				}
			}
			else if (!bLocal_502)
			{
				if (__LIB_0__::func_393(Global_35, iLocal_447[7], 0, 1) && __LIB_0__::func_264(&uLocal_422) > 21f)
				{
					if (__LIB_10__::func_364(&(uParam0->f_2106), "LS_CAT_AFLOOT", 0))
					{
						__LIB_1__::func_148(&uLocal_422);
						bLocal_502 = true;
					}
				}
			}
			else if (!bLocal_503)
			{
				if (__LIB_0__::func_393(Global_35, iLocal_447[7], 0, 1) && __LIB_0__::func_264(&uLocal_422) > 25f)
				{
					if (__LIB_10__::func_364(&(uParam0->f_2106), "LS_CAT_AFLOOT", 0))
					{
						__LIB_1__::func_148(&uLocal_422);
						bLocal_503 = true;
					}
				}
			}
		}
	}
}

void func_812(var uParam0)
{
	TASK::CLEAR_PED_TASKS(Local_19[1 /*35*/], true, false);
	TASK::TASK_SMART_FLEE_PED(Local_19[1 /*35*/], Global_35, 1000f, -1, 32768, 2f, 0);
	func_232(5);
}

void func_813(var uParam0)
{
	if (PED::_IS_PED_HOGTIED(Local_19[1 /*35*/]))
	{
		func_1310();
	}
	else if (!PED::_IS_PED_LASSOED(Local_19[1 /*35*/]) && !__LIB_4__::func_214(Global_35))
	{
		func_81(1);
	}
}

void func_814(var uParam0)
{
	if (!PED::_IS_PED_HOGTIED(Local_19[1 /*35*/]))
	{
		func_81(1);
	}
}

void func_815(int iParam0, int iParam1)
{
	if (ENTITY::IS_ENTITY_IN_VOLUME(iParam0, iLocal_447[1], true, 0))
	{
		if (!func_142(iParam1))
		{
			func_78(iParam1);
		}
	}
	else if (func_142(iParam1))
	{
		func_141(iParam1);
	}
}

void func_817(var uParam0)
{
	func_1314();
	func_70(uParam0);
}

void func_819()
{
	if (!func_246(1073741824 /* Float: 2f */))
	{
		if (__LIB_6__::func_903("LS_CAT_CUT"))
		{
			if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("LS_CAT_CUT") > 2)
			{
				func_73(1073741824 /* Float: 2f */);
			}
		}
		else if (__LIB_6__::func_903("LS_CAT_CUT_KNOW"))
		{
			if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("LS_CAT_CUT_KNOW") > 2)
			{
				func_73(1073741824 /* Float: 2f */);
			}
		}
	}
}

void func_820()
{
	switch (iLocal_522)
	{
		case 0:
			func_1315();
			iLocal_522 = 1;
			break;
		case 1:
			func_1316();
			break;
		case 2:
			break;
	}
}

void func_821(var uParam0)
{
	__LIB_0__::func_568(1322.535f, -2286.374f, 49.49445f, 25f, 0);
	POPULATION::_0xB56D41A694E42E86(iLocal_447[0], 0, 0, 0, -1, -1, 0);
	POPULATION::_0x18262CAFEBB5FBE1(iLocal_447[0], 0, 0, 0, -1, -1, 0);
	uParam0->f_2213[1] = __LIB_1__::func_391(iLocal_447[0], 0, 0, 0);
}

void func_822(var uParam0, char* sParam1, int iParam2, int iParam3, float fParam4)
{
	if (__LIB_1__::func_325())
	{
		if (__LIB_0__::func_75(&(uParam0->f_2067)))
		{
			__LIB_0__::func_37(&(uParam0->f_2067));
		}
		return;
	}
	if (__LIB_0__::func_75(&(uParam0->f_2067)))
	{
		if (__LIB_0__::func_265(&(uParam0->f_2067)) >= IntToFloat(iParam3))
		{
			if (!__LIB_0__::func_48(Global_35, iParam2, fParam4, 0))
			{
				__LIB_1__::func_422(sParam1, 7500, 0, 1, 0, 0, -1, -1, 0);
			}
			else
			{
				__LIB_1__::func_148(&(uParam0->f_2067));
			}
		}
	}
}

bool func_823()
{
	if (func_142(1) && func_142(1024))
	{
		return true;
	}
	return false;
}

void func_824(bool bParam0)
{
	if ((func_142(1) && !func_142(8192)) || bParam0)
	{
		__LIB_10__::func_227(&(Local_381.f_2), 0);
		AUDIO::START_AUDIO_SCENE(Local_381.f_15);
		AUDIO::START_AUDIO_SCENE(Local_381.f_16);
		func_78(8192);
	}
}

int func_827()
{
	if (__LIB_0__::func_139(iLocal_446))
	{
		if (__LIB_0__::func_572(iLocal_446, 0))
		{
			if (PED::_IS_PED_CARRYING(Global_35))
			{
				__LIB_1__::func_221(iLocal_446, 0, 1);
			}
		}
		else if (!PED::_IS_PED_CARRYING(Global_35))
		{
			__LIB_1__::func_221(iLocal_446, 1, 1);
		}
	}
	if (__LIB_0__::func_139(iLocal_445))
	{
		if (__LIB_0__::func_572(iLocal_445, 0))
		{
			if (PED::_IS_PED_CARRYING(Global_35))
			{
				__LIB_1__::func_221(iLocal_445, 0, 1);
			}
		}
		else if (!PED::_IS_PED_CARRYING(Global_35))
		{
			__LIB_1__::func_221(iLocal_445, 1, 1);
		}
	}
	if (func_142(65536))
	{
		if (!func_1301(2, "trans_c_to_c2") && !func_1301(2, "trans_c2_to_c"))
		{
			if (!__LIB_0__::func_139(iLocal_446))
			{
				if (__LIB_1__::func_374(Global_35, ENTITY::GET_ENTITY_COORDS(Local_19[0 /*35*/], true, false), 0f))
				{
					iLocal_446 = __LIB_1__::func_282("LSCAT_C_BOX", joaat("INPUT_CONTEXT_Y"), vLocal_171, 2f, 3, 0, 0, 4, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
					__LIB_1__::func_281(&iLocal_445, 1, 1);
				}
			}
			else if (!__LIB_1__::func_374(Global_35, ENTITY::GET_ENTITY_COORDS(Local_19[0 /*35*/], true, false), 0f))
			{
				__LIB_1__::func_281(&iLocal_446, 1, 1);
			}
			else if (__LIB_0__::func_567(iLocal_446, 1))
			{
				func_1323();
				__LIB_1__::func_281(&iLocal_446, 1, 1);
				func_653(4, "PBL_HANDOVER_FROM_C");
				func_78(16);
				return 1;
			}
		}
		else
		{
			__LIB_1__::func_281(&iLocal_446, 1, 1);
		}
	}
	else if (func_142(131072))
	{
		if (!func_1301(2, "trans_c_to_c2") && !func_1301(2, "trans_c2_to_c"))
		{
			if (!__LIB_0__::func_139(iLocal_446))
			{
				if (__LIB_1__::func_374(Global_35, vLocal_177, 0f))
				{
					iLocal_446 = __LIB_1__::func_282("LSCAT_C_BOX", joaat("INPUT_CONTEXT_Y"), vLocal_177, 2f, 3, 0, 0, 4, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
				}
			}
			else if (!__LIB_1__::func_374(Global_35, vLocal_177, 0f))
			{
				__LIB_1__::func_281(&iLocal_446, 1, 1);
			}
			else if (__LIB_0__::func_567(iLocal_446, 1))
			{
				func_1323();
				__LIB_1__::func_281(&iLocal_446, 1, 1);
				func_653(4, "PBL_HANDOVER_FROM_C2");
				func_78(32);
				return 1;
			}
		}
		else
		{
			__LIB_1__::func_281(&iLocal_446, 1, 1);
		}
	}
	if (!__LIB_0__::func_139(iLocal_445))
	{
		if (__LIB_1__::func_374(Global_35, 1326.313f, -2284.619f, 50.47663f, 0f))
		{
			if (func_142(1048576))
			{
				__LIB_1__::func_281(&iLocal_446, 1, 1);
				iLocal_445 = __LIB_1__::func_282("LSCAT_C_DRINK", joaat("INPUT_CONTEXT_Y"), 1326.313f, -2284.619f, 50.47663f, 1.5f, 3, 0, 0, 4, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
			}
		}
	}
	else if (!__LIB_1__::func_374(Global_35, 1326.313f, -2284.619f, 50.47663f, 0f))
	{
		__LIB_1__::func_281(&iLocal_445, 1, 1);
	}
	else if (__LIB_0__::func_567(iLocal_445, 1))
	{
		func_1323();
		__LIB_1__::func_281(&iLocal_445, 1, 1);
		func_653(4, "PBL_GRAPPLE_FROM_A");
		func_653(4, "PBL_GRAPPLE_FROM_C");
		func_653(4, "PBL_GRAPPLE_FROM_C2");
		func_78(64);
		return 1;
	}
	return 0;
}

bool func_828(var uParam0)
{
	if (func_1324())
	{
		if (func_248(4, "PBL_HANDOVER_FROM_C"))
		{
			ANIMSCENE::START_ANIM_SCENE(Local_90[4 /*16*/]);
			__LIB_3__::func_319(Local_90[2 /*16*/]);
			__LIB_3__::func_319(Local_90[3 /*16*/]);
			return true;
		}
	}
	return false;
}

bool func_829(var uParam0)
{
	if (func_1324())
	{
		if (func_248(4, "PBL_HANDOVER_FROM_C2"))
		{
			ANIMSCENE::START_ANIM_SCENE(Local_90[4 /*16*/]);
			__LIB_3__::func_319(Local_90[2 /*16*/]);
			__LIB_3__::func_319(Local_90[3 /*16*/]);
			return true;
		}
	}
	return false;
}

bool func_830(var uParam0)
{
	char* sVar0;
	if (func_1324())
	{
		if (func_142(262144))
		{
			if (func_142(65536))
			{
				sVar0 = "PBL_GRAPPLE_FROM_C";
			}
			else
			{
				sVar0 = "PBL_GRAPPLE_FROM_C2";
			}
		}
		else
		{
			sVar0 = "PBL_GRAPPLE_FROM_A";
		}
		if (func_248(4, sVar0))
		{
			ANIMSCENE::START_ANIM_SCENE(Local_90[4 /*16*/]);
			__LIB_3__::func_319(Local_90[2 /*16*/]);
			__LIB_3__::func_319(Local_90[3 /*16*/]);
			__LIB_3__::func_732(0);
			__LIB_10__::func_364(&(uParam0->f_2106), "LSCAT_IG14_ALT3", 0);
			return true;
		}
	}
	return false;
}

bool func_832()
{
	if (iLocal_16 == 11 || iLocal_16 == 10)
	{
		if (!__LIB_0__::func_75(&uLocal_419))
		{
			__LIB_1__::func_148(&uLocal_419);
		}
		else if (__LIB_0__::func_264(&uLocal_419) > 2f)
		{
			return true;
		}
	}
	return false;
}

bool func_833()
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	if (!ENTITY::DOES_ENTITY_EXIST(Local_19[0 /*35*/]))
	{
		return false;
	}
	if (((ENTITY::_0x0CCEFC6C2C95DA2A(&uVar0, Local_19[0 /*35*/], 0, Global_35) == 0 && ENTITY::_0x0CCEFC6C2C95DA2A(&uVar1, Local_19[0 /*35*/], 2, Global_35) == 0) && ENTITY::_0x0CCEFC6C2C95DA2A(&uVar2, Local_19[0 /*35*/], 1, Global_35) == 0) && ENTITY::_0x0CCEFC6C2C95DA2A(&uVar3, Local_19[0 /*35*/], 3, Global_35) == 0)
	{
		return true;
	}
	else if (FIRE::IS_ENTITY_ON_FIRE(Local_19[0 /*35*/]))
	{
		return true;
	}
	return false;
}

void func_835(int iParam0)
{
	if (func_246(iParam0))
	{
		__LIB_1__::func_681(&iLocal_442, iParam0);
	}
}

void func_863()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_1361();
	func_1362();
	func_1363();
	func_1364();
	func_1365();
	__LIB_1__::func_848();
	__LIB_0__::func_376();
}

void func_864(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	func_69(iParam0, 1, 1, -142743235, 1);
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

void func_897()
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
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_1387(&uVar4, &iVar1, &iVar2, &iVar3)))
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

struct<35> func_931(vector3 vParam0, float fParam3)
{
	struct<35> Var0;
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
	Var0.f_1 = { vParam0 };
	Var0.f_4 = fParam3;
	return Var0;
}

void func_934(char* sParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9)
{
	StringCopy(&Local_381, sParam0, 16);
	StringCopy(&(Local_381.f_2), sParam1, 16);
	StringCopy(&(Local_381.f_4), sParam2, 16);
	StringCopy(&(Local_381.f_6), sParam3, 24);
	StringCopy(&(Local_381.f_9), sParam4, 16);
	StringCopy(&(Local_381.f_11), sParam5, 16);
	StringCopy(&(Local_381.f_13), sParam6, 16);
	Local_381.f_15 = sParam7;
	Local_381.f_16 = sParam8;
	Local_381.f_17 = sParam9;
}

int func_984(var uParam0, int iParam1, int iParam2)
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
		return func_984(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

bool func_1139(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (((PED::IS_PED_PERFORMING_MELEE_ACTION(iParam0, 16, joaat("AR_HITBY_TAKEDOWN_LEFT_LASSO")) || PED::IS_PED_PERFORMING_MELEE_ACTION(iParam0, 16, joaat("AR_HITBY_TAKEDOWN_RIGHT_LASSO"))) || PED::IS_PED_PERFORMING_MELEE_ACTION(iParam0, 16, joaat("AR_HITBY_TAKEDOWN_FRONT_LASSO"))) || PED::IS_PED_PERFORMING_MELEE_ACTION(iParam0, 16, joaat("AR_HITBY_TAKEDOWN_REAR_LASSO")))
		{
			return true;
		}
	}
	return false;
}

void func_1141(int iParam0, char* sParam1, int iParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_90[iParam0 /*16*/], sParam1, iParam2, 0);
	}
}

void func_1273(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
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
		func_1618();
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

void func_1275(var uParam0)
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
			func_1628(iVar1, __LIB_10__::func_334(uParam0), __LIB_10__::func_335(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_1628(iVar3, __LIB_10__::func_334(uParam0), __LIB_10__::func_335(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_1276(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if ((__LIB_0__::func_84(uParam0, 268435456) && !__LIB_0__::func_86(__LIB_10__::func_334(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { __LIB_10__::func_334(uParam0) };
			func_1628(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

bool func_1295(int iParam0, char* sParam1)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_90[iParam0 /*16*/]))
	{
		if (ANIMSCENE::_0x6F1F0B17109309DA(Local_90[iParam0 /*16*/], sParam1))
		{
			return ANIMSCENE::GET_ANIM_SCENE_BOOL(Local_90[iParam0 /*16*/], sParam1);
		}
	}
	return false;
}

void func_1296()
{
	func_247(2);
}

void func_1297()
{
	vector3 vVar0;
	float fVar3;
	bool bVar4;
	int iVar5;
	if (__LIB_0__::func_75(&uLocal_410))
	{
		__LIB_0__::func_37(&uLocal_410);
	}
	bVar4 = false;
	if (__LIB_0__::func_48(Global_35, Local_19[0 /*35*/], 3f, 1) || func_142(1))
	{
		if (__LIB_0__::func_266(Local_19[0 /*35*/], vLocal_404, 2.5f, 1, 1))
		{
			bVar4 = true;
		}
		vVar0 = { vLocal_467 };
		fVar3 = fLocal_473;
		bLocal_475 = false;
	}
	else
	{
		vVar0 = { vLocal_470 };
		fVar3 = fLocal_474;
		bLocal_475 = true;
	}
	__LIB_3__::func_732(1);
	TASK::OPEN_SEQUENCE_TASK(&iVar5);
	if (!bLocal_475 && !bVar4)
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1321.041f, -2281.63f, 49.5381f, 1f, -1, 0.25f, 1, 265.3476f);
	}
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar0, 1f, -1, 0.25f, 1, fVar3);
	TASK::TASK_ACHIEVE_HEADING(0, fVar3, 0);
	TASK::CLOSE_SEQUENCE_TASK(iVar5);
	TASK::TASK_PERFORM_SEQUENCE(Local_19[0 /*35*/], iVar5);
	TASK::CLEAR_SEQUENCE_TASK(&iVar5);
	func_247(5);
}

void func_1298()
{
	func_247(3);
}

var func_1300(char[4] cParam0)
{
	return func_1640(cParam0);
}

bool func_1301(int iParam0, char* sParam1)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_90[iParam0 /*16*/]))
	{
		if (ANIMSCENE::_0x8D81E7824B7753F7(Local_90[iParam0 /*16*/], sParam1, 1))
		{
			return true;
		}
	}
	return false;
}

bool func_1302()
{
	float fVar0;
	float fVar1;
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vLocal_171, true);
	fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vLocal_177, true);
	if (fVar0 <= fVar1)
	{
		return true;
	}
	return false;
}

void func_1303()
{
	__LIB_0__::func_325(&(Local_19[0 /*35*/].f_5));
	__LIB_10__::func_227(&(Local_381.f_6), 0);
	func_247(10);
}

void func_1304()
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_190))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(Local_190))
		{
			ENTITY::DETACH_ENTITY(Local_190, true, true);
		}
	}
	func_247(9);
}

bool func_1305(var uParam0)
{
	if (func_160(Local_19[1 /*35*/], 0, &(Local_19[1 /*35*/].f_6), &(Local_19[1 /*35*/].f_34), 1, 0) || func_1139(Local_19[1 /*35*/]))
	{
		if (Local_19[1 /*35*/].f_34 != 8)
		{
			return true;
		}
		else
		{
			return true;
		}
	}
	return false;
}

void func_1306()
{
	if (Local_90[3 /*16*/].f_14)
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_90[3 /*16*/], "BASE_BOOL", true, false);
		if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_90[3 /*16*/], false))
		{
			ANIMSCENE::START_ANIM_SCENE(Local_90[3 /*16*/]);
		}
		func_232(2);
	}
}

void func_1307()
{
	if (Local_90[3 /*16*/].f_14)
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_90[3 /*16*/], "BASE_BOOL", true, false);
		if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_90[3 /*16*/], false))
		{
			ANIMSCENE::START_ANIM_SCENE(Local_90[3 /*16*/]);
		}
		__LIB_1__::func_148(&uLocal_413);
		func_232(1);
	}
}

void func_1308()
{
	func_76(1, "bExitLoop", 0);
	TASK::CLEAR_PED_TASKS(Local_19[1 /*35*/], true, false);
	ANIMSCENE::START_ANIM_SCENE(Local_90[1 /*16*/]);
	__LIB_2__::func_279(Local_19[1 /*35*/], 1);
	PED::SET_PED_CONFIG_FLAG(Local_19[1 /*35*/], 26, true);
	__LIB_3__::func_459(Local_19[1 /*35*/], 0);
	ENTITY::_0x18FF3110CF47115D(Local_19[1 /*35*/], 7, 0);
	PED::_0xAE6004120C18DF97(Local_19[1 /*35*/], 0, 0);
	func_232(4);
}

void func_1310()
{
	func_232(7);
}

void func_1314()
{
	if (iLocal_16 != 11)
	{
		TASK::TASK_LOOK_AT_ENTITY(Local_19[0 /*35*/], Global_35, -1, 4, 41, 0);
	}
	TASK::TASK_LOOK_AT_ENTITY(Global_35, Local_19[0 /*35*/], -1, 4, 41, 0);
}

void func_1315()
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
	__LIB_9__::func_175(Local_19[0 /*35*/], Global_35, &Var38, 0f, 0f, 0f, sLocal_464, 25614, 1, 8f, 1.5f, 1073069561, 1f, 1092616192 /* Float: 10f */, -1, 1, 0, 0, 0, 1);
	__LIB_10__::func_425(Global_35, Local_19[0 /*35*/], &Var0, 3f, 0, 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1, 8, 0, 0, 1069547520 /* Float: 1.5f */, 1073741824 /* Float: 2f */, 1050253722 /* Float: 0.3f */, 1067030938 /* Float: 1.2f */, 0, 0, -1, 1, 1f, -1082130432 /* Float: -1f */, 1);
	__LIB_1__::func_731(&uLocal_506);
}

void func_1316()
{
	__LIB_2__::func_966(Local_19[0 /*35*/], Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
	__LIB_2__::func_966(Global_35, Local_19[0 /*35*/], 1, 1, 1, 0, 1, 1, 0, 1, 1);
	__LIB_9__::func_397(&uLocal_506, Local_19[0 /*35*/]);
}

int func_1323()
{
	int iVar0;
	if (!PED::_IS_PED_CARRYING(Global_35) && !__LIB_0__::func_163(Global_35, -208384378))
	{
		return 1;
	}
	else if (PED::_IS_PED_CARRYING(Global_35) && !__LIB_0__::func_163(Global_35, -208384378))
	{
		if (__LIB_3__::func_417(Global_35))
		{
			iVar0 = __LIB_0__::func_147();
		}
		else
		{
			iVar0 = __LIB_3__::func_697(Global_35);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			TASK::CLEAR_PED_TASKS(Global_35, true, false);
			TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(Global_35, iVar0, Global_36, 2f, 9);
		}
	}
	return 0;
}

bool func_1324()
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	float fVar5;
	int iVar6;
	float fVar7;
	HUD::_0xC9CAEAEEC1256E54(724769646);
	if (func_142(16))
	{
		vVar0 = { vLocal_171 };
		fVar3 = vLocal_171.f_3;
		fVar4 = vLocal_171.f_4;
		fVar5 = vLocal_171.f_5;
	}
	if (func_142(32))
	{
		vVar0 = { vLocal_177 };
		fVar3 = vLocal_177.f_3;
		fVar4 = vLocal_177.f_4;
		fVar5 = vLocal_177.f_5;
	}
	if (func_142(64))
	{
		vVar0 = { Local_183 };
		fVar3 = Local_183.f_3;
		fVar4 = Local_183.f_4;
		fVar5 = Local_183.f_5;
	}
	if (!__LIB_0__::func_163(Global_35, 242628503))
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar6);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar0, 1f, 20000, 0.25f, 0, fVar3);
		TASK::TASK_ACHIEVE_HEADING(0, fVar3, -1);
		TASK::TASK_PAUSE(0, 500);
		TASK::CLOSE_SEQUENCE_TASK(iVar6);
		TASK::TASK_PERFORM_SEQUENCE(Global_35, iVar6);
		TASK::CLEAR_SEQUENCE_TASK(&iVar6);
	}
	else
	{
		fVar7 = ENTITY::GET_ENTITY_HEADING(Global_35);
		if ((TASK::GET_SEQUENCE_PROGRESS(Global_35) > 0 && fVar7 > fVar5) && fVar7 < fVar4)
		{
			if (MAP::DOES_BLIP_EXIST(Local_19[0 /*35*/].f_5))
			{
				MAP::_BLIP_REMOVE_MODIFIER(Local_19[0 /*35*/].f_5, -546708623);
				MAP::_BLIP_SET_MODIFIER(Local_19[0 /*35*/].f_5, 942020339);
			}
			else
			{
				__LIB_10__::func_259(&(Local_19[0 /*35*/].f_5), Local_19[0 /*35*/], joaat("BLIP_STYLE_ENEMY"), "ALG_BLIP");
			}
			return true;
		}
	}
	return false;
}

void func_1361()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_1678(0);
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
	func_1678(1);
}

void func_1362()
{
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_83(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_1363()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_1681(0);
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
	func_1681(1);
}

void func_1364()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_1__::func_432(15000, 0, 0, 0, 1);
			func_1681(0);
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
	func_1681(1);
}

void func_1365()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_83(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_83(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_69(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_69(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
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

int func_1387(var uParam0, int iParam1, int iParam2, int iParam3)
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
	iVar11 = (func_1697(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_952(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_83(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	__LIB_1__::func_432(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

void func_1618()
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
	iVar0 = func_1809(6291456, 0);
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

void func_1628(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_1628(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_1628(iVar2, vParam1, fParam4, iParam5, iParam6);
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

var func_1640(char[4] cParam0)
{
	return AUDIO::_0xF01C570E0A0A1E67(cParam0);
}

void func_1678(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (bParam0)
	{
		func_83(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_83(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_83(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_1828(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_864(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_69(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_1834(Var0);
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

void func_1681(bool bParam0)
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
		func_83(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_83(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_83(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_83(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_83(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_83(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_83(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_83(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_83(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_83(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_83(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_69(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_69(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_69(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_69(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_69(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_69(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_69(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_69(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_69(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_69(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_69(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
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

int func_1697(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
							iVar49 = (iVar49 + func_1697(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1697(iVar63, -915411861, 1, 0, 0));
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

int func_1809(int iParam0, int iParam1)
{
	var uVar0;
	return func_1903(&uVar0, iParam0, iParam1);
}

void func_1828(int iParam0)
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
	func_69(iParam0, 1, 1, -142743235, 1);
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
		func_69(uVar18[iVar36], 1, 1, -142743235, 1);
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

void func_1834(struct<6> Param0)
{
	if (!func_1924(Param0.f_4, 1))
	{
	}
	if (!func_1924(Param0, 1))
	{
	}
	if (!func_1924(Param0.f_2, 1))
	{
	}
	if (!func_1924(Param0.f_5, 1))
	{
	}
	if (!func_1924(Param0.f_3, 1))
	{
	}
	if (!func_1924(Param0.f_1, 1))
	{
	}
}

int func_1903(var uParam0, int iParam1, int iParam2)
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
		return func_1903(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

bool func_1924(int iParam0, int iParam1)
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
				if (func_1924(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_1924(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_1924(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_1924(iVar21, 1))
				{
				}
			}
		}
		__LIB_1__::func_712();
		return true;
	}
	return false;
}

