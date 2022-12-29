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
	int iLocal_14[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	char* sLocal_27 = NULL;
	char* sLocal_28 = NULL;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	vector3 vLocal_35 = { 0f, 0f, 0f };
	float fLocal_38 = 0f;
	vector3 vLocal_39 = { 0f, 0f, 0f };
	char* sLocal_42 = NULL;
	vector3 vLocal_43 = { 0f, 0f, 0f };
	vector3 vLocal_46 = { 0f, 0f, 0f };
	float fLocal_49 = 0f;
	vector3 vLocal_50 = { 0f, 0f, 0f };
	vector3 vLocal_53 = { 0f, 0f, 0f };
	float fLocal_56 = 0f;
	vector3 vLocal_57 = { 0f, 0f, 0f };
	float fLocal_60 = 0f;
	vector3 vLocal_61 = { 0f, 0f, 0f };
	float fLocal_64 = 0f;
	float fLocal_65 = 0f;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	bool bLocal_75 = false;
	vector3 vLocal_76 = { 0f, 0f, 0f };
	vector3 vLocal_79 = { 0f, 0f, 0f };
	bool bLocal_82 = false;
	bool bLocal_83 = false;
	bool bLocal_84 = false;
	bool bLocal_85 = false;
	bool bLocal_86 = false;
	bool bLocal_87 = false;
	bool bLocal_88 = false;
	int iLocal_89 = 0;
	bool bLocal_90 = false;
	bool bLocal_91 = false;
	bool bLocal_92 = false;
	int iLocal_93 = 0;
	var uLocal_94 = 0;
	int iLocal_95 = 0;
	vector3 vLocal_96 = { 0f, 0f, 0f };
	int iLocal_99 = 0;
	vector3 vLocal_100 = { 0f, 0f, 0f };
	int iLocal_103 = 0;
	vector3 vLocal_104 = { 0f, 0f, 0f };
	int iLocal_107 = 0;
	bool bLocal_108 = false;
	vector3 vLocal_109 = { 0f, 0f, 0f };
	bool bLocal_112 = false;
	bool bLocal_113 = false;
	vector3 vLocal_114 = { 0f, 0f, 0f };
	vector3 vLocal_117 = { 0f, 0f, 0f };
	float fLocal_120 = 0f;
	vector3 vLocal_121 = { 0f, 0f, 0f };
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	bool bLocal_127 = false;
	bool bLocal_128 = false;
	bool bLocal_129 = false;
	bool bLocal_130 = false;
	bool bLocal_131 = false;
	bool bLocal_132 = false;
	bool bLocal_133 = false;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = -1;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 1097859072;
	var uLocal_152 = 1000;
	var uLocal_153 = 1067450368;
	var uLocal_154 = 5000;
	var uLocal_155 = 42;
	var uLocal_156 = 1103626240;
	var uLocal_157 = 1077936128;
	var uLocal_158 = 1106247680;
	var uLocal_159 = 1103101952;
	var uLocal_160 = 1097859072;
	var uLocal_161 = 1103626240;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	char* sLocal_166 = NULL;
	char[] cLocal_167[8] = 0;
	char* sLocal_168 = NULL;
	char* sLocal_169 = NULL;
	char* sLocal_170 = NULL;
	vector3 vLocal_171 = { 0f, 0f, 0f };
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	bool bLocal_177 = false;
	bool bLocal_178 = false;
	int iLocal_179 = 0;
	int iLocal_180 = 0;
	int iLocal_181 = 0;
	bool bLocal_182 = false;
	vector3 vLocal_183 = { 0f, 0f, 0f };
	int iLocal_186 = 0;
	int iLocal_187 = 0;
	int iLocal_188 = 0;
	int iLocal_189 = 0;
	int iLocal_190 = 0;
	int iLocal_191 = 0;
	int iLocal_192 = 0;
	bool bLocal_193 = false;
	bool bLocal_194 = false;
	bool bLocal_195 = false;
	bool bLocal_196 = false;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	int iLocal_203 = 0;
	int iLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	bool bLocal_209 = false;
	bool bLocal_210 = false;
	bool bLocal_211 = false;
	bool bLocal_212 = false;
	int iLocal_213 = 0;
	var uLocal_214 = 0;
	int iLocal_215 = 0;
	char* sLocal_216 = NULL;
	char* sLocal_217 = NULL;
	int iLocal_218 = 0;
	bool bLocal_219 = false;
	vector3 vLocal_220 = { 0f, 0f, 0f };
	vector3 vLocal_223 = { 0f, 0f, 0f };
	float fLocal_226 = 0f;
	int iLocal_227 = 0;
	bool bLocal_228 = false;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	int iLocal_233 = 0;
	bool bLocal_234 = false;
	vector3 vLocal_235 = { 0f, 0f, 0f };
	bool bLocal_238 = false;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	char* sLocal_242 = NULL;
	bool bLocal_243 = false;
	bool bLocal_244 = false;
	bool bLocal_245 = false;
	int iLocal_246 = 0;
	vector3 vLocal_247 = { 0f, 0f, 0f };
	float fLocal_250 = 0f;
	vector3 vLocal_251 = { 0f, 0f, 0f };
	float fLocal_254 = 0f;
	vector3 vLocal_255 = { 0f, 0f, 0f };
	vector3 vLocal_258 = { 0f, 0f, 0f };
	vector3 vLocal_261 = { 0f, 0f, 0f };
	float fLocal_264 = 0f;
	bool bLocal_265 = false;
	bool bLocal_266 = false;
	bool bLocal_267 = false;
	bool bLocal_268 = false;
	bool bLocal_269 = false;
	vector3 vLocal_270 = { 0f, 0f, 0f };
	int iLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	vector3 vLocal_277 = { 0f, 0f, 0f };
	float fLocal_280 = 0f;
	vector3 vLocal_281 = { 0f, 0f, 0f };
	bool bLocal_284 = false;
	bool bLocal_285 = false;
	bool bLocal_286 = false;
	bool bLocal_287 = false;
	bool bLocal_288 = false;
	vector3 vLocal_289 = { 0f, 0f, 0f };
	float fLocal_292 = 0f;
	vector3 vLocal_293 = { 0f, 0f, 0f };
	float fLocal_296 = 0f;
	bool bLocal_297 = false;
	bool bLocal_298 = false;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	bool bLocal_302 = false;
	bool bLocal_303 = false;
	bool bLocal_304 = false;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	bool bLocal_308 = false;
	bool bLocal_309 = false;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	bool bLocal_313 = false;
	bool bLocal_314 = false;
	bool bLocal_315 = false;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	bool bLocal_319 = false;
	int iLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	int iLocal_327 = 0;
	int iLocal_328 = 0;
	int iLocal_329 = 0;
	int iLocal_330 = 0;
	int iLocal_331 = 0;
	vector3 vLocal_332 = { 0f, 0f, 0f };
	bool bLocal_335 = false;
	bool bLocal_336 = false;
	bool bLocal_337 = false;
	int iLocal_338 = 0;
	int iLocal_339 = 0;
	int iLocal_340 = 0;
	int iLocal_341 = 0;
	int iLocal_342 = 0;
	int iLocal_343 = 0;
	int iLocal_344 = 0;
	int iLocal_345 = 0;
	char* sLocal_346 = NULL;
	bool bLocal_347 = false;
	bool bLocal_348 = false;
	bool bLocal_349 = false;
	bool bLocal_350 = false;
	bool bLocal_351 = false;
	int iLocal_352 = 0;
	bool bLocal_353 = false;
	int iLocal_354 = 0;
	int iLocal_355 = 0;
	int iLocal_356 = 0;
	int iLocal_357 = 0;
	int iLocal_358 = 0;
	int iLocal_359 = 0;
	int iLocal_360 = 0;
	vector3 vLocal_361 = { 0f, 0f, 0f };
	bool bLocal_364 = false;
	bool bLocal_365 = false;
	bool bLocal_366 = false;
	bool bLocal_367 = false;
	bool bLocal_368 = false;
	bool bLocal_369 = false;
	bool bLocal_370 = false;
	bool bLocal_371 = false;
	int iLocal_372 = 0;
	int iLocal_373 = 0;
	bool bLocal_374 = false;
	bool bLocal_375 = false;
	bool bLocal_376 = false;
	bool bLocal_377 = false;
	bool bLocal_378 = false;
	int iLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	int iLocal_383 = 0;
	int iLocal_384 = 0;
	int iLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	int iLocal_395 = 0;
	int iLocal_396 = 0;
	int iLocal_397 = 0;
	int iLocal_398 = 0;
	int iLocal_399 = 0;
	int iLocal_400 = 0;
	vector3 vLocal_401 = { 0f, 0f, 0f };
	int iLocal_404 = 0;
	int iLocal_405 = 0;
	bool bLocal_406 = false;
	bool bLocal_407 = false;
	int iLocal_408 = 0;
	int iLocal_409 = 0;
	int iLocal_410 = 0;
	int iLocal_411 = 0;
	int iLocal_412 = 0;
	int iLocal_413 = 0;
	int iLocal_414 = 0;
	int iLocal_415 = 0;
	var uLocal_416 = 0;
	int iLocal_417 = 0;
	int iLocal_418 = 0;
	int iLocal_419 = 0;
	int iLocal_420 = 0;
	int iLocal_421 = 0;
	int iLocal_422 = 0;
	int iLocal_423 = 0;
	int iLocal_424 = 0;
	int iLocal_425 = 0;
	int iLocal_426 = 0;
	int iLocal_427 = 0;
	bool bLocal_428 = false;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 1065353216;
	var uLocal_435 = 1065353216;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 1065353216;
	var uLocal_440 = 1065353216;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 1065353216;
	var uLocal_445 = 1065353216;
	var uLocal_446 = 0;
	var uLocal_447 = 1040187392;
	var uLocal_448 = 1040187392;
	var uLocal_449 = -1;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = -1082130432;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 1065353216;
	var uLocal_473 = 1065353216;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 1065353216;
	var uLocal_478 = 1065353216;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 1065353216;
	var uLocal_483 = 1065353216;
	var uLocal_484 = 0;
	var uLocal_485 = 1040187392;
	var uLocal_486 = 1040187392;
	var uLocal_487 = -1;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = -1082130432;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
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
	bool bLocal_522 = false;
	bool bLocal_523 = false;
	bool bLocal_524 = false;
	vector3 vLocal_525 = { 0f, NaNf, 0f };
	var uLocal_528 = -1;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = -1;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 1073741824;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 1;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 1106247680;
	var uLocal_552 = 1067450368;
	var uLocal_553 = 0;
	var uLocal_554 = 1092616192;
	var uLocal_555 = 1112014848;
	var uLocal_556 = 1106247680;
	var uLocal_557 = 1101529088;
	var uLocal_558 = 1101004800;
	var uLocal_559 = 1084227584;
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
	struct<17> Local_586[1];
	bool bLocal_604 = false;
	bool bLocal_605 = false;
	bool bLocal_606 = false;
	bool bLocal_607 = false;
	int iLocal_608 = 0;
	var uLocal_609 = -1;
	var uLocal_610 = 0;
	var uLocal_611 = -1;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = -1;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 1073741824;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 1;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 1106247680;
	var uLocal_635 = 1067450368;
	var uLocal_636 = 0;
	var uLocal_637 = 1092616192;
	var uLocal_638 = 1112014848;
	var uLocal_639 = 1106247680;
	var uLocal_640 = 1101529088;
	var uLocal_641 = 1101004800;
	var uLocal_642 = 1084227584;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 1;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 570;
	var uLocal_673 = 1065353216;
	var uLocal_674 = -1082130432;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 3;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	int iLocal_687 = 0;
	int iLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	bool bLocal_692 = false;
	bool bLocal_693 = false;
	vector3 vLocal_694 = { 0f, 0f, 0f };
	float fLocal_697 = 0f;
	bool bLocal_698 = false;
	bool bLocal_699 = false;
	int iLocal_700 = 0;
	bool bLocal_701 = false;
	bool bLocal_702 = false;
	bool bLocal_703 = false;
	bool bLocal_704 = false;
	bool bLocal_705 = false;
	int iLocal_706 = 0;
	int iLocal_707 = 0;
	int iLocal_708 = 0;
	int iLocal_709 = 0;
	int iLocal_710 = 0;
	int iLocal_711 = 0;
	int iLocal_712 = 0;
	int iLocal_713 = 0;
	var uLocal_714 = 0;
	int iLocal_715 = 0;
	int iLocal_716 = 0;
	var uLocal_717 = 0;
	int iLocal_718 = 0;
	int iLocal_719 = 0;
	int iLocal_720 = 0;
	int iLocal_721 = 0;
	int iLocal_722 = 0;
	int iLocal_723 = 0;
	int iLocal_724 = 0;
	int iLocal_725 = 0;
	var uLocal_726 = 0;
	int iLocal_727 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion
void __EntryFunction__()
{
	struct<2606> Var0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	fLocal_697 = 0f;
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
	__LIB_13__::func_318(uParam0);
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
		if (!__LIB_2__::func_618(&(uParam0->f_2597)))
		{
			__LIB_8__::func_901(&(uParam0->f_2597), 0);
		}
		__LIB_0__::func_11(uParam0);
		if (__LIB_5__::func_28(&(uParam0->f_2597)) >= 2500 || CAM::IS_SCREEN_FADED_OUT())
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
	if (!__LIB_2__::func_618(&(uParam0->f_2585)) || IntToFloat(__LIB_5__::func_28(&(uParam0->f_2585))) > __LIB_10__::func_381(uParam0))
	{
		__LIB_8__::func_901(&(uParam0->f_2585), 1);
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
		__LIB_13__::func_351(0);
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
			if (!__LIB_2__::func_618(&(uParam0->f_2597)))
			{
				__LIB_8__::func_901(&(uParam0->f_2597), 0);
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
			else if (__LIB_5__::func_28(&(uParam0->f_2597)) >= 2500)
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
	else if (!__LIB_2__::func_618(&(uParam0->f_2585)) || IntToFloat(__LIB_5__::func_28(&(uParam0->f_2585))) > __LIB_10__::func_381(uParam0))
	{
		__LIB_8__::func_901(&(uParam0->f_2585), 1);
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
		__LIB_18__::func_611(iVar1, 1, -1082130432 /* Float: -1f */, 1, 1, bVar2, 0);
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
		__LIB_8__::func_992(uParam0->f_174);
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
	iLocal_327 = Global_40.f_9146;
	iLocal_23 = 12;
	iLocal_24 = 0;
	iLocal_25 = 0;
	sLocal_28 = "COACH_ROBBERY_SCENE";
	iLocal_26 = 23;
	sLocal_27 = "TRELAWNY";
	sLocal_166 = "rcm_chrb1_1";
	cLocal_167 = "rcm_chrb1_Ambush2";
	sLocal_168 = "prc_chrob_rscintro_coach";
	sLocal_169 = "rcm_chrb1_PO1";
	sLocal_170 = "rcm_chrb1_PO2";
	iLocal_30 = 72;
	vLocal_117 = { 1493.13f, -736.21f, 47.55f };
	fLocal_120 = 43.6f;
	vLocal_121 = { 1469.02f, -819.72f, 49.26f };
	vLocal_35 = { 1226.5f, -1294.9f, 75.9f };
	fLocal_38 = 46.3f;
	vLocal_39 = { 1226.5f, -1294.9f, 75.9f };
	sLocal_42 = "WORLD_HUMAN_SHOPKEEPER";
	vLocal_114 = { 1462.17f, -752.92f, 52.66f };
	vLocal_96 = { 1224.96f, -1293.39f, 75.9f };
	vLocal_100 = { 1284.11f, -1292.87f, 74.6f };
	vLocal_104 = { 1222.9f, -1292.49f, 75.91f };
	vLocal_43 = { 662.1096f, -1267.71f, 42.9164f };
	vLocal_57 = { 674.71f, -1217.09f, 44.41f };
	fLocal_60 = 160f;
	vLocal_46 = { 675.6454f, -1224.298f, 43.792f };
	fLocal_49 = 190.5956f;
	vLocal_76 = { 676.04f, -1225.86f, 44.59f };
	vLocal_79 = { 1236.06f, -1294.78f, 76.23f };
	vLocal_61 = { 1225.59f, -1293.54f, 75.9f };
	fLocal_64 = -130.94f;
	vLocal_50 = { 1247.32f, -1297.65f, 76.32f };
	vLocal_53 = { 1250.85f, -1300.73f, 76.32f };
	fLocal_56 = 130.88f;
	vLocal_171 = { 1248.68f, -1295.069f, 75.1192f };
	fLocal_65 = 353.1617f;
	vLocal_109 = { 1246.044f, -1285.822f, 74.8869f };
	vLocal_220 = { 1250.813f, -1300.761f, 75.3995f };
	vLocal_223 = { 1249.63f, -1302.24f, 76.36f };
	fLocal_226 = 137.9063f;
	vLocal_235 = { 1247.71f, -1304.39f, 75.66f };
	vLocal_183 = { 1496.334f, -1076.309f, 51.3268f };
	vLocal_247 = { 1152.454f, -917.0764f, 66.3586f };
	fLocal_250 = 18.1232f;
	vLocal_251 = { 1145.601f, -914.2697f, 66.4211f };
	fLocal_254 = 177.7864f;
	vLocal_277 = { 676.2798f, -1227.524f, 43.6112f };
	fLocal_280 = 4.7984f;
	vLocal_281 = { 1372.155f, -1378.7f, 77.7251f };
	vLocal_289 = { 1381.13f, -807.34f, 64.05f };
	fLocal_292 = -98f;
	vLocal_293 = { 1381.15f, -806.14f, 64.3f };
	fLocal_296 = -95f;
	vLocal_255 = { 1493.78f, -1067.73f, 51f };
	vLocal_258 = { 1151.932f, -917.0396f, 66.3231f };
	vLocal_261 = { 1493.63f, -1067.37f, 52.03f };
	fLocal_264 = -131.82f;
	vLocal_361 = { 1240.337f, -1290.186f, 75.9241f };
	vLocal_401 = { 1231.714f, -1251.297f, 72.7326f };
	vLocal_332 = { 1225.51f, -1294.01f, 75.91f };
	sLocal_216 = "script@rcm@chrb@ig@ig1_visit_clerk@ig1_visit_clerk";
	sLocal_217 = "script@rcm@chrb@leadin@rc2@leadin_stand";
	vLocal_694 = { 1217.061f, -1269.432f, 75.0768f };
	__LIB_4__::func_228(&uLocal_134);
	Global_1392388.f_3 = iLocal_32;
	__LIB_12__::func_658(uParam0, 4);
	__LIB_12__::func_659(uParam0, 10);
	__LIB_12__::func_656(uParam0, 2f);
	__LIB_12__::func_657(uParam0, 3f);
	__LIB_3__::func_414(&uLocal_205, 1489.882f, -1078.62f, 52.4352f, 3f, 1, 4, 0);
	__LIB_3__::func_414(&uLocal_206, 1502.881f, -1070.234f, 50.8305f, 3f, 1, 4, 0);
	__LIB_3__::func_414(&uLocal_207, 1243.252f, -1293.39f, 75.5934f, 3f, 1, 4, 0);
	__LIB_3__::func_414(&uLocal_208, 1491.593f, -1071.272f, 51.5372f, 3f, 1, 4, 0);
	if (__LIB_1__::func_707(__LIB_13__::func_361(12), 1, 0))
	{
		func_193(__LIB_13__::func_361(12), 1, 1, -142743235, 0);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_246))
	{
		iLocal_246 = VOLUME::_CREATE_VOLUME_BOX(1250.766f, -1303.079f, 75f, -0.643225f, 1.372696f, -44.36747f, 16.75055f, 7.966347f, 4f);
		MISC::_0x2FCD528A397E5C88(iLocal_246, 2442122);
		__LIB_2__::func_213(iLocal_246, "COACH ROB RSC - HITCHING POSTS", 1, 0, 0, 0, -1082130432 /* Float: -1f */);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_203))
	{
		__LIB_1__::func_216(&iLocal_203, vLocal_79, 0f, 0f, 0f, 6f, 6f, 5f);
		__LIB_2__::func_213(iLocal_203, "POST_OFFICE_DOOR", 1, 0, 0, 0, -1082130432 /* Float: -1f */);
		iLocal_204 = PED::_0x4C39C95AE5DB1329(iLocal_203, 0, 15);
		POPULATION::_0xB56D41A694E42E86(iLocal_203, 0, 0, 0, -1, -1, 0);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_395))
	{
		__LIB_1__::func_216(&iLocal_395, vLocal_46, 0f, 0f, 0f, 3f, 3f, 3f);
		__LIB_2__::func_213(iLocal_395, "TRELAWNY'S HORSE", 1, 0, 0, 0, -1082130432 /* Float: -1f */);
		iLocal_396 = PED::_0x4C39C95AE5DB1329(iLocal_395, 0, 15);
		POPULATION::_0xB56D41A694E42E86(iLocal_395, 0, 0, 0, -1, -1, 0);
	}
	__LIB_0__::func_7(&(uParam0->f_172), 268435456);
	__LIB_6__::func_705(131072);
}

void func_42(var uParam0)
{
	__LIB_13__::func_15(uParam0, "rcm_chrb1_1", 2, -1, 2);
	__LIB_13__::func_15(uParam0, "rcm_chrb1_PO1", 2, -1, 2);
	__LIB_13__::func_15(uParam0, "rcm_chrb1_PO2", 2, -1, 2);
	__LIB_13__::func_15(uParam0, "rcm_chrb1_PO2B", 2, -1, 2);
	__LIB_13__::func_15(uParam0, "rcm_chrb1_Ambush2", 2, -1, 2);
	__LIB_13__::func_15(uParam0, "prc_chrob_rhod1_coach", 2, -1, 2);
	__LIB_13__::func_15(uParam0, "rcm_chrb_TFlee", 2, -1, 2);
	__LIB_13__::func_15(uParam0, "rcm_chrb_TFlee2", 2, -1, 2);
	__LIB_12__::func_867(uParam0, joaat("P_HORSEPOOP02X"), 2);
	__LIB_12__::func_867(uParam0, joaat("P_CS_BILLSINGLE01X"), 2);
	__LIB_12__::func_867(uParam0, joaat("P_CS_LETTERFOLDED01X"), 2);
	__LIB_12__::func_867(uParam0, joaat("P_LOCKPICK01X"), 2);
	__LIB_12__::func_867(uParam0, joaat("P_FOLDEDBILLS01X"), 2);
	__LIB_12__::func_867(uParam0, WEAPON::_GET_WEAPONTYPE_MODEL(joaat("WEAPON_REVOLVER_CATTLEMAN")), 2);
	__LIB_12__::func_867(uParam0, joaat("SCRIPTEDBALL"), 2);
	__LIB_12__::func_867(uParam0, joaat("S_CONCARDDAMSEN01X"), 2);
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
			Var1 = { 673.0875f, -1222.607f, 43.8931f };
			Var1.f_3 = 219.5233f;
			break;
		case 1:
			Var1 = { 1238.73f, -1276.37f, 74.85f };
			Var1.f_3 = -151.03f;
			break;
		case 2:
			Var1 = { 1229.583f, -1292.406f, 75.9027f };
			Var1.f_3 = 224.261f;
			break;
		case 3:
			Var1 = { 1381.15f, -806.14f, 64.3f };
			Var1.f_3 = -95f;
			break;
		case 4:
			Var1 = { 1494.05f, -1039.22f, 52.03f };
			Var1.f_3 = -172.24f;
			break;
		case 5:
			Var1 = { 1494.175f, -1064.348f, 50.878f };
			Var1.f_3 = 174.6509f;
			break;
	}
	return Var1;
}

bool func_62(var uParam0)
{
	return func_211(*uParam0, uParam0->f_3);
}

bool func_64(var uParam0)
{
	var uVar0;
	if (!__LIB_0__::func_272(iLocal_32, 0))
	{
		StringCopy(&(uParam0->f_2578), "RCHRB1_TDEAD", 24);
		if (__LIB_6__::func_764(iLocal_23))
		{
			__LIB_6__::func_705(8192);
		}
		return true;
	}
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_32, Global_35, 1, 1))
	{
		ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_32);
		StringCopy(&(uParam0->f_2578), "RCHRB1_TATT", 24);
		if (__LIB_6__::func_764(iLocal_23))
		{
			__LIB_6__::func_705(8192);
		}
		return true;
	}
	if (!__LIB_0__::func_272(iLocal_33, 0))
	{
		StringCopy(&(uParam0->f_2578), "RCHRB1_HDEAD", 24);
		if (__LIB_6__::func_764(iLocal_23))
		{
			__LIB_6__::func_705(8192);
		}
		return true;
	}
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_33, Global_35, 1, 1))
	{
		ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_33);
		StringCopy(&(uParam0->f_2578), "RCHRB1_HATT", 24);
		if (__LIB_6__::func_764(iLocal_23))
		{
			__LIB_6__::func_705(8192);
		}
		return true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_93))
	{
		if ((!__LIB_0__::func_272(iLocal_93, 0) || PED::IS_PED_INJURED(iLocal_93)) || TASK::IS_PED_IN_WRITHE(iLocal_93))
		{
			StringCopy(&(uParam0->f_2578), "RCHRB1_PHDEAD", 24);
			if (__LIB_6__::func_764(iLocal_23))
			{
				__LIB_6__::func_705(8192);
			}
			return true;
		}
	}
	if (bLocal_112)
	{
		if (iLocal_711 <= 1)
		{
			if (!__LIB_0__::func_272(iLocal_31, 1))
			{
				StringCopy(&(uParam0->f_2578), "RCHRB1_CDEAD", 24);
				return true;
			}
			else if (!func_214())
			{
				StringCopy(&(uParam0->f_2578), "RCHRB1_CSPOK", 24);
				return true;
			}
		}
	}
	if (iLocal_711 > 0 && iLocal_711 < 6)
	{
		if (__LIB_2__::func_173(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			StringCopy(&(uParam0->f_2578), "RCHRB1_FLAW", 24);
			return true;
		}
		else if (func_216(Global_35) && PLAYER::_0x72AD59F7B7FB6E24(PLAYER::PLAYER_ID(), 1000))
		{
			if (!__LIB_2__::func_618(&uLocal_392))
			{
				__LIB_5__::func_107(&uLocal_392);
			}
			else if (__LIB_5__::func_51(&uLocal_392) > 4f)
			{
				LAW::_REPORT_CRIME(PLAYER::PLAYER_ID(), joaat("CRIME_ASSAULT"), 0, 0, true);
			}
		}
	}
	if (iLocal_711 == 4)
	{
		if (!__LIB_6__::func_759(iLocal_23))
		{
			if (!__LIB_2__::func_618(&uLocal_200))
			{
				__LIB_5__::func_107(&uLocal_200);
			}
			else if (__LIB_5__::func_51(&uLocal_200) > 4f)
			{
				StringCopy(&(uParam0->f_2578), "RCHRB1_ESCP", 24);
				return true;
			}
		}
	}
	if (iLocal_711 == 1)
	{
		if (BUILTIN::VDIST(Global_36, vLocal_39) > 800f)
		{
			StringCopy(&(uParam0->f_2578), "RCHRB1_FRHO", 24);
			return true;
		}
	}
	if (((iLocal_711 == 1 || iLocal_711 == 3) || iLocal_711 == 4) || iLocal_711 == 5)
	{
		if (__LIB_0__::func_94(iLocal_32, Global_36, 1) > 200f)
		{
			StringCopy(&(uParam0->f_2578), "RCHRB1_ABAN", 24);
			return true;
		}
	}
	if (fLocal_697 != 0f)
	{
		if (iLocal_718 == 15)
		{
			if (BUILTIN::VDIST(vLocal_261, Global_36) > (fLocal_697 + 100f))
			{
				StringCopy(&(uParam0->f_2578), "RCHRB1_ABAN", 24);
				return true;
			}
		}
		else if (iLocal_718 == 16)
		{
			if (BUILTIN::VDIST(vLocal_247, Global_36) > (fLocal_697 + 100f))
			{
				StringCopy(&(uParam0->f_2578), "RCHRB1_ABAN", 24);
				return true;
			}
		}
	}
	if (iLocal_711 == 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_384))
		{
			if (bLocal_210)
			{
				if (!ENTITY::_0x8DE41E9902E85756(iLocal_384))
				{
					if (VEHICLE::_0x877EA24EB1614495(&uVar0, iLocal_384, Global_35) == 0 || __LIB_6__::func_702(67108864))
					{
						StringCopy(&(uParam0->f_2578), "RCHRB1_LDES", 24);
						__LIB_6__::func_705(8192);
						return true;
					}
					else if (__LIB_6__::func_702(8388608) || __LIB_6__::func_702(16777216))
					{
						StringCopy(&(uParam0->f_2578), "RCHRB1_ESCP", 24);
						return true;
					}
					else if (__LIB_0__::func_94(iLocal_384, Global_36, 1) > 200f)
					{
						if (__LIB_6__::func_702(1) && !__LIB_6__::func_702(2))
						{
							StringCopy(&(uParam0->f_2578), "RCHRB1_ESCP", 24);
							__LIB_6__::func_705(8192);
							return true;
						}
						else
						{
							StringCopy(&(uParam0->f_2578), "RCHRB1_CABAN", 24);
							__LIB_6__::func_705(8192);
							return true;
						}
					}
					else if (__LIB_0__::func_94(iLocal_384, vLocal_281, 1) < 50f)
					{
						StringCopy(&(uParam0->f_2578), "RCHRB1_ESCP", 24);
						__LIB_6__::func_705(8192);
						return true;
					}
				}
			}
			else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_384, false, false))
			{
				bLocal_210 = true;
			}
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
	if (func_224(uParam0->f_174))
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
	if (func_233(uParam0) || __LIB_12__::func_663(uParam0->f_174, uParam0->f_743))
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
	__LIB_13__::func_370();
	func_238(uParam0);
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
		__LIB_8__::func_992(uParam0->f_174);
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
			func_253(uParam0);
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

int func_76(var uParam0)
{
	return iLocal_719;
}

bool func_85(var uParam0)
{
	if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_13, 64))
	{
		return true;
	}
	if (__LIB_12__::func_924(uParam0) && func_277(uParam0))
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
	func_296(uParam0, 0);
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
		if (uParam0->f_171 != 0 || func_297(uParam0))
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
	VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::_0xAB0D553FE20A6E25(0f);
	switch (iVar0)
	{
		case 0:
			if (__LIB_12__::func_936(uParam0))
			{
				func_87(uParam0);
				__LIB_12__::func_909(&(uParam0->f_206));
				return 5;
			}
			else
			{
				func_301();
				if (func_302(uParam0, vLocal_277, fLocal_280) || iLocal_227 > 200)
				{
					__LIB_6__::func_891(Global_35);
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_93, vLocal_277, fLocal_280, true, false, true);
					PHYSICS::_0x06AADE17334F7A40(iLocal_93, 676.38f, -1225.84f, 44.57f);
					TASK::TASK_STAND_STILL(iLocal_93, -1);
				}
				else
				{
					iLocal_227++;
					return 2;
				}
				iLocal_711 = 0;
				func_296(uParam0, 1);
				__LIB_12__::func_875(uParam0, Global_35, "ARTHUR", 1);
				__LIB_12__::func_875(uParam0, iLocal_32, sLocal_27, 1);
				CLOCK::SET_CLOCK_TIME(11, 0, 0);
				__LIB_6__::func_413(joaat("WEATHER_GROUP_GOOD"), 0, 0, 1103626240 /* Float: 25f */);
				__LIB_13__::func_105(1, 1);
				__LIB_3__::func_353("CHRB1_RESTART_1", 0);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_32))
				{
					PED::SET_PED_CONFIG_FLAG(iLocal_32, 297, true);
					PED::SET_PED_CONFIG_FLAG(iLocal_32, 315, true);
					PED::SET_PED_CONFIG_FLAG(iLocal_32, 130, true);
					PED::SET_PED_CONFIG_FLAG(iLocal_32, 331, true);
					PED::SET_PED_CONFIG_FLAG(iLocal_32, 330, true);
				}
				return 7;
			}
			break;
		case 1:
			func_308();
			if (func_302(uParam0, 1238.73f, -1276.37f, 74.85f, -151.03f) || iLocal_227 > 200)
			{
				__LIB_6__::func_891(Global_35);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_93, 1238.73f, -1276.37f, 74.85f, -151.03f, true, false, true);
				__LIB_1__::func_571(Global_35, iLocal_93, 0, -1, 1);
			}
			else
			{
				iLocal_227++;
				return 2;
			}
			if (VOLUME::_DOES_VOLUME_EXIST(iLocal_246))
			{
				MISC::_0x2FCD528A397E5C88(iLocal_246, 2442122);
			}
			AUDIO::SET_AUDIO_FLAG("OpenWorldMusicOnMission", true);
			AUDIO::_0x36559148B78853B3(1, 0, 0);
			if (__LIB_0__::func_272(iLocal_32, 1))
			{
				__LIB_6__::func_891(iLocal_32);
				TASK::CLEAR_PED_TASKS(iLocal_32, true, false);
				if (__LIB_0__::func_272(iLocal_33, 1))
				{
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_33, 1241.91f, -1281.99f, 75.51f, -153.88f, true, false, true);
					__LIB_1__::func_571(iLocal_32, iLocal_33, 0, -1, 1);
				}
				else
				{
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_32, 1241.91f, -1281.99f, 75.51f, -153.88f, true, false, true);
				}
			}
			__LIB_12__::func_875(uParam0, Global_35, "ARTHUR", 1);
			bLocal_88 = true;
			bLocal_82 = true;
			bLocal_83 = true;
			func_296(uParam0, 1);
			CLOCK::SET_CLOCK_TIME(11, 0, 0);
			__LIB_6__::func_413(joaat("WEATHER_GROUP_GOOD"), 0, 0, 1103626240 /* Float: 25f */);
			__LIB_13__::func_105(0, 1);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_32))
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_32, 297, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_32, 315, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_32, 130, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_32, 331, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_32, 330, true);
			}
			return 7;
		case 2:
			func_310();
			func_308();
			if (func_302(uParam0, vLocal_220, fLocal_226) || iLocal_227 > 200)
			{
				__LIB_6__::func_891(Global_35);
				__LIB_3__::func_618(vLocal_220, 2f, 1, 0, 0, 0, 0);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_93, vLocal_220, fLocal_226, true, false, true);
				PHYSICS::_0x06AADE17334F7A40(iLocal_93, vLocal_223);
				FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_93, 48, true);
			}
			else
			{
				iLocal_227++;
				return 2;
			}
			if (VOLUME::_DOES_VOLUME_EXIST(iLocal_246))
			{
				MISC::_0x2FCD528A397E5C88(iLocal_246, 2442122);
			}
			__LIB_0__::func_568(vLocal_361, 15f, 0);
			if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_358))
			{
				iLocal_358 = VOLUME::_CREATE_VOLUME_CYLINDER(vLocal_361, 0f, 0f, 0f, 10f, 10f, 3f);
				POPULATION::_0xB56D41A694E42E86(iLocal_358, 0, 0, 0, -1, -1, 0);
			}
			AUDIO::SET_AUDIO_FLAG("OpenWorldMusicOnMission", true);
			if (__LIB_4__::func_511())
			{
				__LIB_12__::func_997(uParam0, func_61(2), func_61(3), 2, 3, 0);
			}
			func_296(uParam0, 2);
			iLocal_711 = 3;
			if (__LIB_0__::func_272(iLocal_32, 1))
			{
				__LIB_6__::func_891(iLocal_32);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_32, 1232.431f, -1294.9f, 75.9027f, 243.7408f, true, false, true);
			}
			if (__LIB_0__::func_272(iLocal_33, 1))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_33, vLocal_50, fLocal_56, true, false, true);
			}
			__LIB_12__::func_875(uParam0, Global_35, "ARTHUR", 1);
			__LIB_12__::func_875(uParam0, iLocal_32, sLocal_27, 1);
			__LIB_0__::func_900(iLocal_26);
			CLOCK::SET_CLOCK_TIME(11, 0, 0);
			__LIB_6__::func_413(joaat("WEATHER_GROUP_GOOD"), 0, 0, 1103626240 /* Float: 25f */);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-15f, 1f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
			__LIB_13__::func_105(0, 1);
			func_315(2);
			__LIB_3__::func_353("CHRB1_RESTART_2", 0);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_32))
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_32, 297, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_32, 315, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_32, 130, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_32, 331, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_32, 330, true);
			}
			return 7;
		case 3:
			if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
			{
				PED::_0xE0B61ED8BB37712F(Global_35);
			}
			if (!func_302(uParam0, 1373.127f, -806.4133f, 65.7558f, 268.127f) && iLocal_227 < 200)
			{
				iLocal_227++;
				return 2;
			}
			if (iLocal_706 != 2)
			{
				func_296(uParam0, 2);
			}
			if (!__LIB_0__::func_1(uParam0->f_172, 1))
			{
				return 2;
			}
			if (__LIB_4__::func_511())
			{
				__LIB_12__::func_997(uParam0, func_61(3), func_61(4), 3, 4, 0);
			}
			__LIB_1__::func_572(vLocal_121, 200f, 0, 0, 0, 0, 0);
			func_317();
			PED::_0x9851DE7AEC10B4E1(vLocal_183, 300f, 1, 0);
			__LIB_12__::func_875(uParam0, Global_35, "ARTHUR", 1);
			__LIB_12__::func_875(uParam0, iLocal_32, sLocal_27, 1);
			__LIB_0__::func_900(iLocal_26);
			bLocal_84 = true;
			bLocal_86 = true;
			PLAYER::_0xAC22AA6DF4D1C1DE(PLAYER::PLAYER_ID(), iLocal_32, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 4, 2, 0);
			iLocal_711 = 7;
			func_318(uParam0);
			func_315(3);
			__LIB_3__::func_353("CHRB1_RESTART_3", 0);
			CLOCK::SET_CLOCK_TIME(11, 0, 0);
			__LIB_6__::func_413(joaat("WEATHER_GROUP_GOOD"), 0, 0, 1103626240 /* Float: 25f */);
			__LIB_13__::func_105(0, 1);
			__LIB_12__::func_957(uParam0, iLocal_93, "Horse_01", 0, 0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_32))
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_32, 297, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_32, 315, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_32, 130, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_32, 331, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_32, 330, true);
			}
			return 5;
		case 4:
			if (!bLocal_375)
			{
				ENTITY::SET_ENTITY_COORDS(Global_35, vLocal_293, true, false, true, true);
				bLocal_375 = true;
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
			{
				PED::_0xE0B61ED8BB37712F(Global_35);
			}
			if (!func_302(uParam0, 1494.05f, -1037.22f, 52.03f, -172.24f) && iLocal_227 < 200)
			{
				iLocal_227++;
				return 2;
			}
			if (!bLocal_374)
			{
				func_317();
				bLocal_374 = true;
			}
			if (!bLocal_337)
			{
				if (__LIB_6__::func_809(iLocal_23))
				{
					bLocal_337 = true;
				}
				return 2;
			}
			else if (__LIB_6__::func_702(65536))
			{
				__LIB_6__::func_704(65536);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_384))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_1392388.f_5))
				{
					iLocal_384 = Global_1392388.f_5;
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_384, false);
				}
				return 2;
			}
			if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_384, 0))
			{
				return 2;
			}
			func_322();
			if (((!__LIB_0__::func_272(iLocal_186, 0) || !__LIB_0__::func_272(iLocal_187, 0)) || !__LIB_0__::func_272(iLocal_188, 0)) || !__LIB_0__::func_272(iLocal_189, 0))
			{
				return 2;
			}
			if (!bLocal_376)
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_1392388.f_5, 1498.21f, -1065.04f, 50.7f, 183.38f, true, false, true);
				__LIB_1__::func_571(Global_35, iLocal_93, 0, -1, 1);
				if (__LIB_0__::func_272(iLocal_32, 1))
				{
					__LIB_6__::func_891(iLocal_32);
					TASK::CLEAR_PED_TASKS(iLocal_32, true, false);
					if (__LIB_0__::func_272(iLocal_33, 1))
					{
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_33, 1495.58f, -1066.02f, 52.14f, -179.34f, true, false, true);
						__LIB_1__::func_571(iLocal_32, iLocal_33, 0, -1, 1);
					}
					else
					{
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_32, 1495.58f, -1066.02f, 52.14f, -179.34f, true, false, true);
					}
				}
				iLocal_711 = 9;
				iLocal_709 = 6;
				bLocal_287 = true;
				bLocal_212 = true;
				iLocal_722 = 2;
				if (__LIB_4__::func_511())
				{
					__LIB_12__::func_997(uParam0, func_61(4), func_61(5), 4, 5, 0);
				}
				__LIB_12__::func_875(uParam0, Global_35, "ARTHUR", 1);
				__LIB_12__::func_875(uParam0, iLocal_32, sLocal_27, 1);
				func_315(6);
				__LIB_3__::func_353("CHRB1_RESTART_3", 0);
				iLocal_342 = ANIMSCENE::_CREATE_ANIM_SCENE("script@rcm@chrb@ig@ig1_charmpassenger@ig1_charmpassenger", 0, 0, false, true);
				func_296(uParam0, 3);
				bLocal_376 = true;
			}
			func_323(uParam0, 1);
			if (iLocal_722 < 5)
			{
				return 2;
			}
			if (!__LIB_2__::func_618(&uLocal_380))
			{
				__LIB_5__::func_107(&uLocal_380);
			}
			if (__LIB_5__::func_51(&uLocal_380) < 2f)
			{
				return 2;
			}
			if (!__LIB_1__::func_707(joaat("CONSUMABLE_LOCK_BREAKER"), 1, 0))
			{
				func_324(joaat("CONSUMABLE_LOCK_BREAKER"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			__LIB_0__::func_568(vLocal_183, 200f, 0);
			__LIB_1__::func_572(vLocal_183, 200f, 0, 0, 0, 0, 0);
			PED::_0x9851DE7AEC10B4E1(vLocal_183, 300f, 1, 0);
			__LIB_2__::func_165(vLocal_183, 200f, 0, 0, 5);
			bLocal_309 = true;
			CLOCK::SET_CLOCK_TIME(11, 0, 0);
			__LIB_6__::func_413(joaat("WEATHER_GROUP_GOOD"), 0, 0, 1103626240 /* Float: 25f */);
			__LIB_13__::func_105(1, 1);
			__LIB_0__::func_267(0);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_32))
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_32, 297, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_32, 315, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_32, 130, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_32, 331, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_32, 330, true);
			}
			return 7;
		case 5:
			if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
			{
				PED::_0xE0B61ED8BB37712F(Global_35);
			}
			if (!func_302(uParam0, 1491.582f, -1062.437f, 51.198f, 247.6698f) && iLocal_227 < 200)
			{
				iLocal_227++;
				return 2;
			}
			if (iLocal_706 != 3)
			{
				func_296(uParam0, 3);
			}
			if (!__LIB_0__::func_1(uParam0->f_172, 1))
			{
				return 2;
			}
			if (__LIB_0__::func_272(iLocal_93, 0))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_93, 1491.582f, -1062.437f, 51.198f, 247.6698f, true, false, true);
			}
			__LIB_0__::func_568(vLocal_361, 200f, 0);
			__LIB_1__::func_572(vLocal_121, 200f, 0, 0, 0, 0, 0);
			PED::_0x9851DE7AEC10B4E1(vLocal_183, 300f, 1, 0);
			__LIB_12__::func_875(uParam0, Global_35, "ARTHUR", 1);
			__LIB_12__::func_875(uParam0, iLocal_32, sLocal_27, 1);
			CLOCK::SET_CLOCK_TIME(11, 0, 0);
			__LIB_6__::func_413(joaat("WEATHER_GROUP_GOOD"), 0, 0, 1103626240 /* Float: 25f */);
			func_318(uParam0);
			__LIB_13__::func_105(0, 1);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_32))
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_32, 297, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_32, 315, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_32, 130, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_32, 331, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_32, 330, true);
			}
			return 5;
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
		if (!__LIB_13__::func_508(uParam0))
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
		if (!__LIB_14__::func_67(uParam0))
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
	return func_338(Var0, &(uParam0->f_206), uParam0);
}

int func_103(var uParam0)
{
	switch (iLocal_706)
	{
		case 0:
			func_301();
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			if (__LIB_0__::func_272(iLocal_93, 0) && ENTITY::_IS_ENTITY_FROZEN(iLocal_93))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_93, false);
			}
			func_296(uParam0, 1);
			break;
		case 1:
			if (!bLocal_364)
			{
				__LIB_0__::func_569(joaat("MOTIONSTATE_WALK"), 2000, 0, 1, 0, 233.1465f, 0, 0);
				bLocal_364 = true;
			}
			if (!bLocal_365)
			{
				PED::FORCE_PED_MOTION_STATE(iLocal_32, joaat("MOTIONSTATE_WALK"), false, 1, false);
				if (__LIB_0__::func_272(iLocal_33, 0) && BUILTIN::VDIST(vLocal_50, ENTITY::GET_ENTITY_COORDS(iLocal_33, true, false)) > 3f)
				{
					sLocal_170 = "rcm_chrb1_PO2B";
				}
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_32, sLocal_170, 0, 2056, -1, 0, 0, -1);
				bLocal_365 = true;
			}
			__LIB_1__::func_572(vLocal_100, 10f, 0, 0, 0, 0, 0);
			func_343();
			if (!bLocal_366)
			{
				TASK::TASK_START_SCENARIO_AT_POSITION(iLocal_31, joaat("WORLD_HUMAN_SHOPKEEPER"), ENTITY::GET_ENTITY_COORDS(iLocal_31, true, false), ENTITY::GET_ENTITY_HEADING(iLocal_31), -1, false, false, "WORLD_HUMAN_SHOPKEEPER_MALE_A", -1f, false);
				PED::_0x2208438012482A1A(iLocal_31, false, false);
				bLocal_366 = true;
			}
			PED::SET_PED_RESET_FLAG(Global_35, 174, true);
			PED::SET_PED_RESET_FLAG(iLocal_32, 174, true);
			__LIB_0__::func_900(iLocal_26);
			func_315(2);
			if (VOLUME::_DOES_VOLUME_EXIST(iLocal_399))
			{
				if (PED::_0x91A5F9CBEBB9D936(iLocal_400))
				{
					PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_400, false);
				}
				POPULATION::_0xA1CFB35069D23C23(iLocal_399);
				__LIB_1__::func_544(iLocal_399);
				POPULATION::_0x74C2B3DC0B294102(iLocal_399);
				VOLUME::_DELETE_VOLUME(iLocal_399);
			}
			__LIB_0__::func_568(vLocal_694, 20f, 0);
			__LIB_1__::func_572(vLocal_694, 20f, 0, 0, 0, 0, 0);
			func_296(uParam0, 2);
			break;
		case 2:
			if (PED::IS_PED_ON_MOUNT(Global_35) && __LIB_0__::func_272(PED::GET_MOUNT(Global_35), 0))
			{
				PED::_0x2EB75FB86C41F026(PED::GET_MOUNT(Global_35), 3, 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(PED::GET_MOUNT(Global_35), false);
			}
			if (!__LIB_1__::func_707(joaat("CONSUMABLE_LOCK_BREAKER"), 1, 0))
			{
				func_324(joaat("CONSUMABLE_LOCK_BREAKER"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
			}
			__LIB_6__::func_704(65536);
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 1, false, false);
			PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::PLAYER_ID(), joaat("WEAPON_UNARMED"), 0);
			PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::PLAYER_ID(), joaat("WEAPON_UNARMED"), 1);
			WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, joaat("WEAPON_UNARMED"), 1, true, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
			func_345(uParam0, 6);
			__LIB_12__::func_883(uParam0, "RCHRB1_OBJ9", 1, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			func_296(uParam0, 3);
			break;
		case 3:
			if (!__LIB_0__::func_71(iLocal_32))
			{
				PED::_SET_PED_ON_MOUNT(iLocal_32, iLocal_33, -1, true);
			}
			func_347();
			return 8;
		case 4:
			if (!__LIB_0__::func_71(iLocal_32))
			{
				PED::_SET_PED_ON_MOUNT(iLocal_32, iLocal_33, -1, true);
			}
			func_347();
			return 8;
	}
	return 7;
}

bool func_104(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_172, 256) && !__LIB_0__::func_1(uParam0->f_172, 1024))
	{
		if (!__LIB_13__::func_508(uParam0))
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
		if (func_348(&(uParam0->f_753), uParam0->f_2581, uParam0->f_2571, bParam1))
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
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	if (!bLocal_701)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_93) && __LIB_0__::func_394(Global_35, iLocal_93, 0))
		{
			AUDIO::SET_AUDIO_FLAG("naSETVehExitUseActiveTransportOnly", true);
			bLocal_701 = true;
		}
	}
	if (!bLocal_108)
	{
		__LIB_1__::func_684(iLocal_26, 1);
		bLocal_108 = true;
	}
	func_352(uParam0);
	func_353();
	func_354();
	func_355();
	bVar3 = false;
	func_356(&bVar3);
	if (bVar3)
	{
		if (!MISC::IS_BIT_SET(Global_1357505, 9))
		{
			MISC::SET_BIT(&Global_1357505, 9);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1357505, 9))
	{
		MISC::CLEAR_BIT(&Global_1357505, 9);
	}
	func_357();
	func_358();
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	if (iLocal_721 == 5)
	{
		if (!__LIB_6__::func_702(1) && bLocal_128)
		{
			if (func_359(uParam0))
			{
				bVar2 = true;
			}
		}
	}
	if (!bLocal_369)
	{
		if (((((!bLocal_211 && bLocal_129) && ENTITY::DOES_ENTITY_EXIST(iLocal_384)) && __LIB_0__::func_94(iLocal_384, Global_36, 1) > (20f + (20f / 2f))) && !__LIB_6__::func_702(1)) && bLocal_128)
		{
			iLocal_354 = 3;
			bLocal_182 = false;
			func_345(uParam0, 14);
			PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "stealth", 0f, -1);
			bLocal_369 = true;
		}
	}
	switch (iLocal_711)
	{
		case 0:
			func_360(uParam0);
			__LIB_6__::func_767();
			__LIB_0__::func_267(1);
			__LIB_1__::func_600(0);
			AUDIO::SET_AUDIO_FLAG("OpenWorldMusicOnMission", true);
			func_363(1);
			if (__LIB_0__::func_272(iLocal_33, 0))
			{
				PHYSICS::_0x0348469DAA17576C(iLocal_33);
			}
			__LIB_12__::func_997(uParam0, func_61(0), func_61(1), 0, 1, 0);
			iLocal_711 = 1;
			break;
		case 1:
			PLAYER::_0xC71D07C96946E263(PLAYER::PLAYER_ID(), iLocal_93);
			if (!bLocal_234)
			{
				if (BUILTIN::VDIST(Global_36, vLocal_235) > 50f)
				{
					func_364(uParam0);
				}
			}
			func_308();
			func_365(uParam0);
			if (!bLocal_82)
			{
				if (__LIB_12__::func_876(uParam0, "RCHRB_TORHDS", 0))
				{
					bLocal_82 = true;
				}
			}
			else
			{
				if (PED::IS_PED_ON_MOUNT(Global_35))
				{
					iVar4 = __LIB_0__::func_398(0);
					iVar5 = __LIB_2__::func_825(Global_35);
				}
				if ((ENTITY::DOES_ENTITY_EXIST(iVar4) && ENTITY::DOES_ENTITY_EXIST(iVar5)) && iVar4 == iVar5)
				{
					if (!bLocal_234)
					{
						if (!MAP::DOES_BLIP_EXIST(iLocal_233))
						{
							iLocal_233 = __LIB_8__::func_775(1259054292, iLocal_246, 1);
							MAP::_BLIP_SET_MODIFIER(iLocal_233, 825788762);
							func_345(uParam0, 1);
							__LIB_1__::func_721(7);
							__LIB_5__::func_107(&uLocal_69);
						}
					}
					if (!__LIB_6__::func_904())
					{
						func_370(uParam0);
					}
				}
				else if (!bLocal_83)
				{
					__LIB_1__::func_718(7);
					func_345(uParam0, 0);
					__LIB_12__::func_883(uParam0, "RCHRB1_OBJ1H", 1, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					bLocal_83 = true;
				}
				else if (MAP::DOES_BLIP_EXIST(iLocal_233) && BUILTIN::VDIST(Global_36, vLocal_39) > 50f)
				{
					__LIB_0__::func_325(&iLocal_233);
					__LIB_1__::func_718(7);
					func_345(uParam0, 0);
				}
			}
			if (!bLocal_88)
			{
				func_360(uParam0);
			}
			else
			{
				func_373(uParam0);
			}
			func_374(1082130432 /* Float: 4f */);
			func_375();
			if (!bLocal_234)
			{
				if ((BUILTIN::VDIST(Global_36, vLocal_235) < 50f && !PED::IS_PED_ON_MOUNT(Global_35)) || func_216(Global_35))
				{
					__LIB_0__::func_325(&iLocal_233);
					__LIB_0__::func_900(iLocal_26);
					func_345(uParam0, 3);
					func_315(1);
					__LIB_4__::func_932(30, 0);
					func_363(0);
					bLocal_234 = true;
				}
				else if (BUILTIN::VDIST(Global_36, vLocal_235) < 50f && PED::IS_PED_ON_MOUNT(Global_35))
				{
					if (!bLocal_238)
					{
						func_345(uParam0, 2);
						func_363(0);
						bLocal_238 = true;
					}
					else
					{
						__LIB_1__::func_448(Global_35, vLocal_235, 0, 30f, 20f, 10f, 1084227584 /* Float: 5f */, 1, 1, 1, 0);
					}
				}
			}
			if (__LIB_0__::func_272(iLocal_32, 0) && BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_32, true, false), vLocal_235) < 80f)
			{
				if (iLocal_89 == 0)
				{
					if (__LIB_6__::func_903("RCHRB_BANTR1") || __LIB_6__::func_903("RCHRB_BANTR2"))
					{
						AUDIO::_0x36559148B78853B3(1, 1, 0);
					}
					if ((!__LIB_6__::func_904() && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35)) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iLocal_32))
					{
						if (__LIB_0__::func_272(iLocal_31, 0))
						{
							__LIB_12__::func_997(uParam0, func_61(1), func_61(2), 1, 2, 0);
							if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_32, true, false), Global_36) < 30f)
							{
								if (__LIB_12__::func_876(uParam0, "RCHRB_POSTARRV", 0))
								{
									TASK::TASK_LOOK_AT_ENTITY(iLocal_32, iLocal_31, -1, 0, 51, 0);
									iLocal_89 = 1;
								}
							}
							else
							{
								TASK::TASK_LOOK_AT_ENTITY(iLocal_32, iLocal_31, -1, 0, 51, 0);
								iLocal_89 = 1;
							}
						}
					}
				}
				else if (iLocal_89 == 1)
				{
					if (!__LIB_6__::func_904())
					{
						if (__LIB_0__::func_272(iLocal_32, 0) && __LIB_0__::func_272(iLocal_31, 0))
						{
							if (func_216(iLocal_32))
							{
								if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_32, true, false), Global_36) < 30f)
								{
									iLocal_89 = 2;
								}
								else
								{
									iLocal_89 = 2;
								}
							}
						}
					}
				}
			}
			if (__LIB_0__::func_272(iLocal_31, 0))
			{
				if (BUILTIN::VDIST(Global_36, vLocal_35) < 100f)
				{
					if (iLocal_716 == 12 || bLocal_219)
					{
						CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
						if (!bLocal_219)
						{
							bLocal_219 = true;
						}
						if (__LIB_0__::func_272(iLocal_218, 0))
						{
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_218);
						}
						if (bLocal_90)
						{
							bLocal_177 = false;
							__LIB_0__::func_325(&iLocal_34);
							if (PLAYER::_0xE24C64D9ADED2EF5(PLAYER::PLAYER_ID(), iLocal_32))
							{
								PLAYER::_0x0C6B89876262A99D(PLAYER::PLAYER_ID(), iLocal_32);
							}
							if (CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() != 2000)
							{
								CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
							}
							if (!ENTITY::DOES_ENTITY_EXIST(iLocal_417))
							{
								iLocal_417 = OBJECT::CREATE_OBJECT(joaat("P_CS_NOTE01X"), vLocal_39, true, true, false, false, true);
							}
							__LIB_12__::func_957(uParam0, iLocal_417, "p_cs_coachroutes01x", 0, 0, 0);
							iLocal_711 = 3;
							__LIB_0__::func_7(&(uParam0->f_172), 262144);
							__LIB_2__::func_608(&uLocal_321);
							func_379();
							func_380();
							__LIB_0__::func_325(&iLocal_383);
							__LIB_0__::func_568(vLocal_361, 5f, 0);
							if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_358))
							{
								iLocal_358 = VOLUME::_CREATE_VOLUME_CYLINDER(vLocal_361, 0f, 0f, 0f, 10f, 10f, 3f);
								POPULATION::_0xB56D41A694E42E86(iLocal_358, 0, 0, 0, -1, -1, 0);
							}
							func_381();
							return 5;
						}
					}
					else
					{
						func_382(uParam0);
					}
				}
			}
			break;
		case 3:
			PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(iLocal_32, 1, 1);
			PED::SET_PED_RESET_FLAG(Global_35, 174, true);
			PED::SET_PED_RESET_FLAG(iLocal_32, 174, true);
			__LIB_12__::func_997(uParam0, func_61(2), func_61(3), 2, 3, 0);
			if (PED::IS_PED_IN_GROUP(iLocal_32))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_32);
			}
			if (__LIB_0__::func_272(iLocal_32, 1))
			{
				if (__LIB_0__::func_272(iLocal_33, 0) && BUILTIN::VDIST(vLocal_50, ENTITY::GET_ENTITY_COORDS(iLocal_33, true, false)) > 3f)
				{
					sLocal_170 = "rcm_chrb1_PO2B";
				}
				TASK::CLEAR_PED_TASKS(iLocal_32, true, false);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				if (__LIB_0__::func_272(iLocal_33, 1))
				{
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, sLocal_170, 0, 2056, -1, 0, 0, -1);
					TASK::TASK_MOUNT_ANIMAL(0, iLocal_33, -1, -1, 1f, 1, 0, 0);
					TASK::TASK_ACHIEVE_HEADING(0, fLocal_65, 0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_109, 1f, -1, 0.25f, 0, 40000f);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
				}
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_32, iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			}
			func_317();
			__LIB_6__::func_825();
			__LIB_13__::func_367(vLocal_114, 30f, -1);
			__LIB_2__::func_119(vLocal_114, 100f, "Coach_robbery_RCM", 1, 0, 0, 0, -1082130432 /* Float: -1f */);
			func_324(__LIB_13__::func_361(12), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
			if (func_216(iLocal_32))
			{
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_32, 0))
				{
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_32, 1f, 0, -1082130432 /* Float: -1f */, 0);
				}
			}
			iLocal_711 = 4;
			break;
		case 4:
			PLAYER::_0xC71D07C96946E263(PLAYER::PLAYER_ID(), iLocal_93);
			func_364(uParam0);
			func_386();
			PED::SET_PED_RESET_FLAG(Global_35, 174, true);
			PED::SET_PED_RESET_FLAG(iLocal_32, 174, true);
			func_308();
			__LIB_0__::func_325(&iLocal_233);
			VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
			if (func_216(iLocal_32))
			{
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_32, 0))
				{
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_32, 1f, 0, -1082130432 /* Float: -1f */, 0);
				}
			}
			if (!bLocal_377)
			{
				if (BUILTIN::VDIST(vLocal_39, Global_36) > 4f && __LIB_0__::func_94(iLocal_32, Global_36, 1) < 10f)
				{
					if (!__LIB_6__::func_904())
					{
						if (__LIB_12__::func_876(uParam0, "RCHRB_PANTO", 0))
						{
							bLocal_377 = true;
						}
					}
				}
			}
			if (!bLocal_84)
			{
				if (!__LIB_6__::func_904())
				{
					if ((!func_216(iLocal_32) && !func_216(Global_35)) && __LIB_0__::func_94(iLocal_32, Global_36, 1) < 10f)
					{
						if (__LIB_12__::func_876(uParam0, "RCHRB_AMBUSHGO", 0))
						{
							bLocal_84 = true;
							__LIB_5__::func_107(&uLocal_69);
						}
					}
				}
			}
			else
			{
				if (!bLocal_267)
				{
					if ((!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iLocal_32) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35)) && !__LIB_6__::func_904())
					{
						if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_32, true, false), Global_36) < 20f && BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_32, true, false), vLocal_247) < 100f)
						{
							if (__LIB_12__::func_876(uParam0, "RCHRB_MEETWRNG", 0))
							{
								bLocal_267 = true;
							}
						}
					}
				}
				if (!bLocal_302)
				{
					if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_32, true, false), vLocal_289) < 50f)
					{
						if (__LIB_6__::func_903("RCHRB_BANTA1"))
						{
							AUDIO::_0x36559148B78853B3(1, 1, 0);
						}
					}
					if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_32, true, false), vLocal_289) < 40f)
					{
						if ((!__LIB_6__::func_904() && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35)) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iLocal_32))
						{
							if (__LIB_12__::func_876(uParam0, "RCHRB_AR", 0))
							{
								AUDIO::SET_AUDIO_FLAG("OpenWorldMusicOnMission", false);
								bLocal_302 = true;
							}
						}
					}
				}
				if (!bLocal_86)
				{
					__LIB_5__::func_107(&uLocal_66);
					bLocal_86 = true;
				}
				else if (!bLocal_113)
				{
					if (__LIB_0__::func_71(Global_35) && __LIB_0__::func_71(iLocal_32))
					{
						if (((TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_32, 0) && TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_32) > 40) && BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_32, true, false), Global_36) < 20f) && BUILTIN::VDIST(__LIB_6__::func_758(iLocal_23), Global_36) > 40f)
						{
							if (!__LIB_6__::func_904())
							{
								if (__LIB_12__::func_876(uParam0, "RCHRB_BANTA1", 0))
								{
									bLocal_113 = true;
								}
							}
						}
					}
				}
			}
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				iVar4 = __LIB_0__::func_398(0);
				iVar5 = __LIB_2__::func_825(Global_35);
			}
			if ((ENTITY::DOES_ENTITY_EXIST(iVar4) && ENTITY::DOES_ENTITY_EXIST(iVar5)) && iVar4 == iVar5)
			{
				if (!__LIB_1__::func_685(iLocal_26))
				{
					__LIB_1__::func_721(7);
					__LIB_0__::func_900(iLocal_26);
					func_345(uParam0, 5);
				}
			}
			else if (__LIB_1__::func_685(iLocal_26))
			{
				if (!__LIB_1__::func_587(7))
				{
					__LIB_0__::func_745(iLocal_26);
					__LIB_1__::func_718(7);
					func_345(uParam0, 0);
				}
			}
			func_374(1082130432 /* Float: 4f */);
			func_391(uParam0);
			if (__LIB_0__::func_71(Global_35))
			{
				func_315(3);
			}
			if (func_392())
			{
				iLocal_711 = 6;
			}
			break;
		case 6:
			AUDIO::STOP_PED_SPEAKING(iLocal_32, true);
			VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
			PED::_0xAB0D553FE20A6E25(0f);
			if (PLAYER::_0xE24C64D9ADED2EF5(PLAYER::PLAYER_ID(), iLocal_32))
			{
				PLAYER::_0x0C6B89876262A99D(PLAYER::PLAYER_ID(), iLocal_32);
			}
			iLocal_711 = 7;
			func_393(0);
			func_318(uParam0);
			if (__LIB_0__::func_71(Global_35))
			{
				__LIB_12__::func_957(uParam0, PED::GET_MOUNT(Global_35), "Horse_01", 0, 0, 0);
			}
			else
			{
				__LIB_12__::func_957(uParam0, iLocal_93, "Horse_01", 0, 0, 0);
			}
			return 5;
		case 7:
			VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
			PED::_0xAB0D553FE20A6E25(0f);
			if (!bLocal_337)
			{
				if (__LIB_6__::func_809(iLocal_23))
				{
					bLocal_337 = true;
				}
			}
			else
			{
				if (__LIB_6__::func_702(65536))
				{
					__LIB_6__::func_704(65536);
				}
				func_315(4);
				iLocal_711 = 8;
			}
			break;
		case 8:
			VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
			PED::_0xAB0D553FE20A6E25(0f);
			if (__LIB_6__::func_764(iLocal_23))
			{
				__LIB_2__::func_165(vLocal_183, 50f, 0, 0, 5);
				bLocal_309 = true;
				__LIB_12__::func_997(uParam0, func_61(3), func_61(4), 3, 4, 0);
				__LIB_3__::func_353("CHRB1_AMBUSH_SPOT", 0);
				func_394();
				__LIB_0__::func_267(0);
				iLocal_711 = 9;
			}
			break;
		case 9:
			VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
			PED::_0xAB0D553FE20A6E25(0f);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_384))
			{
				if (BUILTIN::VDIST(Global_36, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_384, 0f, -2.79f, 0.7f)) < 3f)
				{
					PLAYER::SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(PLAYER::PLAYER_ID());
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
					PED::SET_PED_RESET_FLAG(Global_35, 2, true);
					PED::SET_PED_RESET_FLAG(Global_35, 168, true);
				}
			}
			func_395(uParam0);
			if (iLocal_710 > 4 && !func_396(Global_35))
			{
				if (!bLocal_212)
				{
					bLocal_212 = true;
				}
			}
			func_397(uParam0);
			PED::SET_PED_RESET_FLAG(iLocal_32, 25, true);
			if (__LIB_0__::func_272(iLocal_33, 0))
			{
				PED::SET_PED_RESET_FLAG(iLocal_33, 25, true);
			}
			if (!bLocal_75)
			{
				WEAPON::_0xB832F1A686B9B810(Global_35, 1, 1);
				if (__LIB_6__::func_702(1))
				{
					__LIB_0__::func_745(iLocal_26);
					PED::SET_PED_CONFIG_FLAG(iLocal_32, 204, true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_32, true);
					__LIB_3__::func_319(iLocal_344);
					__LIB_3__::func_319(iLocal_340);
					__LIB_3__::func_319(iLocal_341);
					__LIB_3__::func_319(iLocal_338);
					__LIB_3__::func_319(iLocal_343);
					__LIB_3__::func_319(iLocal_342);
					__LIB_3__::func_319(iLocal_339);
					func_322();
					if (((__LIB_6__::func_903("RCHRB_CH2") || __LIB_6__::func_903("RCHRB_CH3")) || __LIB_6__::func_903("RCHRB_CH4")) || __LIB_6__::func_903("RCHRB_CH5"))
					{
						AUDIO::_0x36559148B78853B3(1, 0, 0);
					}
					else
					{
						AUDIO::_0x36559148B78853B3(1, 1, 0);
					}
					if (MAP::DOES_BLIP_EXIST(iLocal_190))
					{
						MAP::_BLIP_REMOVE_MODIFIER(iLocal_190, -662251075);
					}
					if (MAP::DOES_BLIP_EXIST(iLocal_191))
					{
						MAP::_BLIP_REMOVE_MODIFIER(iLocal_191, -662251075);
					}
					__LIB_0__::func_325(&iLocal_192);
					if (!bLocal_132)
					{
						if (PLAYER::_0xE24C64D9ADED2EF5(PLAYER::PLAYER_ID(), iLocal_32))
						{
							PLAYER::_0x0C6B89876262A99D(PLAYER::PLAYER_ID(), iLocal_32);
						}
						bLocal_132 = true;
					}
					if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_32, 0))
					{
						TASK::CLEAR_PED_TASKS(iLocal_32, true, false);
					}
					func_345(uParam0, 11);
					func_315(8);
					PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "stealth", 0f, -1);
					__LIB_4__::func_7(iLocal_186, joaat("WEAPON_MELEE_KNIFE"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					__LIB_4__::func_7(iLocal_186, joaat("WEAPON_SHOTGUN_SAWEDOFF"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
					if (__LIB_6__::func_702(512) && !bLocal_194)
					{
						if (__LIB_0__::func_272(iLocal_186, 0))
						{
							PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_186, 3, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_186, 1, false);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_186, false);
							TASK::TASK_COMBAT_PED(iLocal_186, Global_35, 0, 0);
						}
						if (__LIB_0__::func_272(iLocal_187, 0))
						{
							PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_187, 3, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_187, 1, false);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_187, false);
							if (PED::IS_PED_SITTING_IN_VEHICLE(iLocal_187, iLocal_384))
							{
								TASK::OPEN_SEQUENCE_TASK(&iVar0);
								TASK::TASK_PAUSE(0, 100);
								TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 32);
								TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(iVar0);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_187, iVar0);
								TASK::CLEAR_SEQUENCE_TASK(&iVar0);
							}
						}
					}
					bLocal_75 = true;
					bLocal_182 = true;
					__LIB_2__::func_608(&uLocal_72);
					__LIB_5__::func_107(&uLocal_163);
					__LIB_3__::func_353("CHRB1_AMBUSH_ATTACK", 0);
				}
			}
			else if (__LIB_6__::func_702(2))
			{
				if (!__LIB_2__::func_618(&uLocal_386))
				{
					__LIB_5__::func_107(&uLocal_386);
				}
				if (!bLocal_128)
				{
					if (!__LIB_2__::func_618(&uLocal_72))
					{
						__LIB_5__::func_107(&uLocal_72);
						__LIB_6__::func_767();
					}
					else if (__LIB_5__::func_51(&uLocal_72) > 2f)
					{
						if (!__LIB_6__::func_904())
						{
							if (!bLocal_87)
							{
								func_345(uParam0, 13);
								bLocal_406 = false;
								bLocal_407 = true;
								__LIB_3__::func_353("CHRB1_LOOT", 0);
								bLocal_87 = true;
							}
						}
					}
				}
			}
			else
			{
				if (!bLocal_245)
				{
					if (ENTITY::GET_ENTITY_SPEED(iLocal_384) < 0.5f)
					{
						func_345(uParam0, 12);
						bLocal_245 = true;
					}
				}
				if (bLocal_131 || bLocal_284)
				{
					if (!bLocal_285)
					{
						if (__LIB_0__::func_94(iLocal_186, Global_36, 1) < 25f)
						{
							if (!__LIB_6__::func_904())
							{
								if (__LIB_12__::func_876(uParam0, "RCHRB_S1", 0))
								{
									bLocal_285 = true;
								}
							}
						}
					}
				}
			}
			if (!bLocal_315)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_384))
				{
					if (VEHICLE::_0xE015CF1F2C0959D8(iLocal_384) != 2 && VEHICLE::_0xE015CF1F2C0959D8(iLocal_384) != 1)
					{
						func_315(9);
						bLocal_315 = true;
					}
				}
			}
			if (!__LIB_6__::func_764(iLocal_23))
			{
				if (Global_40.f_9146 > iLocal_327)
				{
					bLocal_406 = false;
					bLocal_407 = false;
					if (!bLocal_128)
					{
						bLocal_128 = true;
					}
					if (!bLocal_129)
					{
						if ((((((!__LIB_6__::func_702(1) && !bLocal_193) && !bLocal_195) && iLocal_709 != 13) && iLocal_709 != 14) && iLocal_709 != 18) && iLocal_709 != 19)
						{
							__LIB_12__::func_883(uParam0, "RCHRB1_OBJ1C", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
							bLocal_129 = true;
						}
					}
					if (!__LIB_6__::func_702(1))
					{
						if (!__LIB_0__::func_48(iLocal_32, iLocal_384, 50f, 1) && !bLocal_211)
						{
							bVar1 = true;
						}
					}
					else
					{
						if (__LIB_6__::func_702(2))
						{
							bVar1 = true;
						}
						if (__LIB_6__::func_702(2048))
						{
							bVar1 = true;
						}
					}
					if (bVar1)
					{
						PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "stealth", 0f, -1);
						iLocal_711 = 10;
					}
				}
			}
			if (__LIB_6__::func_702(1) || bLocal_133)
			{
				func_400(uParam0);
			}
			break;
		case 10:
			VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
			PED::_0xAB0D553FE20A6E25(0f);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_384))
			{
				if (BUILTIN::VDIST(Global_36, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_384, 0f, -2.79f, 0.7f)) < 3f)
				{
					PLAYER::SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(PLAYER::PLAYER_ID());
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
					PED::SET_PED_RESET_FLAG(Global_35, 2, true);
					PED::SET_PED_RESET_FLAG(Global_35, 168, true);
				}
			}
			if (__LIB_0__::func_71(Global_35))
			{
				func_315(10);
			}
			if (__LIB_0__::func_272(iLocal_32, 0))
			{
				PED::SET_PED_RESET_FLAG(iLocal_32, 25, true);
			}
			if (__LIB_0__::func_272(iLocal_33, 0))
			{
				PED::SET_PED_RESET_FLAG(iLocal_33, 25, true);
			}
			if (__LIB_6__::func_702(1) || bLocal_133)
			{
				func_400(uParam0);
			}
			if (!__LIB_6__::func_904())
			{
				if (!__LIB_6__::func_702(1))
				{
					if (!__LIB_2__::func_618(&uLocal_310))
					{
						__LIB_3__::func_353("CHRB1_RETURN", 0);
						__LIB_5__::func_107(&uLocal_310);
					}
					if (bVar2)
					{
						__LIB_3__::func_353("CHRB1_STOP", 0);
						__LIB_6__::func_705(8192);
						func_318(uParam0);
						__LIB_0__::func_745(iLocal_26);
						__LIB_12__::func_967(uParam0, joaat("RCHRB_NOTSPOTTED"));
						return 5;
					}
					else if (BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iLocal_32, true, false)) < 30f)
					{
						if (!bLocal_228)
						{
							__LIB_0__::func_900(23);
							func_345(uParam0, 15);
							bLocal_228 = true;
						}
						if (BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iLocal_32, true, false)) < 20f)
						{
							if (!bLocal_266)
							{
								if (__LIB_12__::func_876(uParam0, "RCHRB_7", 0))
								{
									TASK::TASK_LOOK_AT_ENTITY(iLocal_32, Global_35, -1, 3120, 41, 0);
									PED::SET_PED_CONFIG_FLAG(iLocal_32, 301, false);
									bLocal_266 = true;
								}
							}
						}
						if (bLocal_266)
						{
							func_402(uParam0);
						}
					}
					else
					{
						if (!bLocal_228)
						{
							__LIB_0__::func_900(23);
							func_345(uParam0, 15);
							bLocal_228 = true;
						}
						if (!bLocal_313)
						{
							if (__LIB_5__::func_51(&uLocal_310) > 7f)
							{
								if (BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iLocal_32, true, false)) < 50f)
								{
									bLocal_313 = true;
								}
							}
						}
					}
				}
				else
				{
					if (iLocal_724 >= 2 && !bLocal_705)
					{
						func_403(&(uParam0->f_753), 0);
						__LIB_12__::func_926(uParam0);
						bLocal_705 = true;
					}
					if (!MAP::DOES_BLIP_EXIST(iLocal_273))
					{
						__LIB_3__::func_353("CHRB1_RETURN", 0);
						func_345(uParam0, 16);
						func_296(uParam0, 4);
						iLocal_273 = __LIB_4__::func_983(408396114, vLocal_247, 1);
						MAP::_BLIP_SET_MODIFIER(iLocal_273, 825788762);
					}
					if (bLocal_265)
					{
						if (func_405(uParam0))
						{
							bLocal_268 = true;
						}
						else if (BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iLocal_32, true, false)) < 25f)
						{
							if (!bLocal_266)
							{
								if (__LIB_12__::func_876(uParam0, "RCHRB_V", 0))
								{
									PED::SET_PED_CONFIG_FLAG(iLocal_32, 301, false);
									TASK::TASK_LOOK_AT_ENTITY(iLocal_32, Global_35, -1, 3120, 41, 0);
									bLocal_266 = true;
								}
							}
						}
					}
					if (bLocal_268)
					{
						__LIB_3__::func_353("CHRB1_STOP", 0);
						__LIB_6__::func_705(8192);
						func_318(uParam0);
						__LIB_0__::func_745(iLocal_26);
						return 5;
					}
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
	__LIB_13__::func_134(iParam0, 0, iParam3);
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
		func_440(Global_1347702[iParam0 /*49*/].f_15, bParam4, bParam2, bParam6, bParam5);
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
	vVar2 = { func_444(Global_2621440[0 /*12066*/].f_9.f_7, &uVar0, &uVar1, 0, 1, 1, 0, 0, 0) };
	__LIB_0__::func_321(vVar2, uVar1, uVar0, 0);
	__LIB_0__::func_322(vVar2);
	Global_40.f_9.f_15 = __LIB_1__::func_447(vVar2, 0);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	MISC::SET_RANDOM_WEATHER_TYPE(false, true);
}

void func_159(var uParam0)
{
	int iVar0;
	if (bLocal_703 && !bLocal_704)
	{
		__LIB_13__::func_19(&vLocal_525, iLocal_32);
		bLocal_704 = true;
	}
	if (__LIB_0__::func_1(uParam0->f_172, 8))
	{
		func_469();
	}
	if (PED::_0x91A5F9CBEBB9D936(iLocal_95))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_95, false);
	}
	if (PED::_0x91A5F9CBEBB9D936(iLocal_99))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_99, false);
	}
	if (PED::_0x91A5F9CBEBB9D936(iLocal_103))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_103, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_352))
	{
		OBJECT::DELETE_OBJECT(&iLocal_352);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_330))
	{
		VOLUME::_DELETE_VOLUME(iLocal_330);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_203))
	{
		if (PED::_0x91A5F9CBEBB9D936(iLocal_204))
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_204, false);
		}
		POPULATION::_0xA1CFB35069D23C23(iLocal_203);
		__LIB_1__::func_544(iLocal_203);
		VOLUME::_DELETE_VOLUME(iLocal_203);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_395))
	{
		if (PED::_0x91A5F9CBEBB9D936(iLocal_396))
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_396, false);
		}
		POPULATION::_0xA1CFB35069D23C23(iLocal_395);
		__LIB_1__::func_544(iLocal_395);
		VOLUME::_DELETE_VOLUME(iLocal_395);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_397))
	{
		__LIB_2__::func_161(vLocal_401, 30f, 5);
		if (PED::_0x91A5F9CBEBB9D936(iLocal_398))
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_398, false);
		}
		POPULATION::_0xA1CFB35069D23C23(iLocal_397);
		__LIB_1__::func_544(iLocal_397);
		POPULATION::_0x74C2B3DC0B294102(iLocal_397);
		VOLUME::_DELETE_VOLUME(iLocal_397);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_356))
	{
		POPULATION::_0x74C2B3DC0B294102(iLocal_356);
		VOLUME::_DELETE_VOLUME(iLocal_356);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_246))
	{
		__LIB_1__::func_544(iLocal_246);
		VOLUME::_DELETE_VOLUME(iLocal_246);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_359))
	{
		VOLUME::_DELETE_VOLUME(iLocal_359);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_360))
	{
		VOLUME::_DELETE_VOLUME(iLocal_360);
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (__LIB_0__::func_724(iLocal_14[iVar0]))
		{
			__LIB_1__::func_941(iLocal_14[iVar0]);
		}
		iVar0++;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_357))
	{
		POPULATION::_0x74C2B3DC0B294102(iLocal_357);
		VOLUME::_DELETE_VOLUME(iLocal_357);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_358))
	{
		POPULATION::_0x74C2B3DC0B294102(iLocal_358);
		VOLUME::_DELETE_VOLUME(iLocal_358);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_384))
	{
		VEHICLE::_0xCBC7B6F9A56B79F6(iLocal_384, 0);
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_384);
	}
	if (MISC::IS_BIT_SET(Global_1357505, 9))
	{
		MISC::CLEAR_BIT(&Global_1357505, 9);
	}
}

int func_193(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			func_193(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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
	func_512(iParam0, iParam1);
	return 1;
}

int func_211(vector3 vParam0, var uParam3)
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
		iVar0 = func_537(0, 0);
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

bool func_214()
{
	if (func_543(iLocal_31))
	{
		return true;
	}
	return false;
}

bool func_216(int iParam0)
{
	return ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, 1238.852f, -1303.355f, 75.40269f, 1223.117f, -1288.201f, 81.40269f, 8f, false, true, 0);
}

bool func_224(int iParam0)
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

int func_233(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_32))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_32, Global_35, 1, 1))
		{
			if (__LIB_0__::func_272(iLocal_32, 0))
			{
				TASK::TASK_SMART_FLEE_PED(iLocal_32, Global_35, 300f, -1, 0, 1077936128 /* Float: 3f */, 0);
				PED::SET_PED_KEEP_TASK(iLocal_32, true);
				__LIB_13__::func_558(iLocal_26, 0, 0, 0, 30f, 1, 1, 0, 0, 0, 0);
			}
			return 1;
		}
	}
	return 0;
}

void func_238(var uParam0)
{
	if (bLocal_703 && !bLocal_704)
	{
		__LIB_13__::func_19(&vLocal_525, iLocal_32);
		bLocal_704 = true;
	}
	if (__LIB_0__::func_1(uParam0->f_172, 8))
	{
		func_469();
	}
}

void func_253(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_172, 16))
	{
		__LIB_12__::func_966(uParam0, 0);
		func_87(uParam0);
	}
}

int func_277(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_32))
	{
		iLocal_32 = func_622(iLocal_26, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, -922193456, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_32))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_33) || iLocal_29 != 2)
	{
		iLocal_33 = func_623(&iLocal_29, iLocal_26, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_33) || iLocal_29 != 2)
	{
		return 0;
	}
	if (__LIB_0__::func_272(iLocal_32, 1))
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_32, vLocal_57, fLocal_60, true, false, true);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_32, 1);
	}
	if (__LIB_0__::func_272(iLocal_33, 1))
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_33, vLocal_46, fLocal_49, true, false, true);
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_33, 48, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_33, true);
		TASK::TASK_STAND_STILL(iLocal_33, -1);
		PHYSICS::_0x06AADE17334F7A40(iLocal_33, vLocal_76);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_357))
	{
		iLocal_357 = VOLUME::_CREATE_VOLUME_CYLINDER(vLocal_46, 0f, 0f, 0f, 3f, 3f, 3f);
		POPULATION::_0xB56D41A694E42E86(iLocal_357, 0, 0, 0, -1, -1, 0);
	}
	__LIB_12__::func_875(uParam0, Global_35, "ARTHUR", 1);
	__LIB_12__::func_875(uParam0, iLocal_32, sLocal_27, 1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_32, true);
	AUDIO::STOP_PED_SPEAKING(iLocal_32, true);
	return 1;
}

void func_296(var uParam0, int iParam1)
{
	iLocal_706 = iParam1;
	__LIB_13__::func_264(uParam0, 113716);
	switch (iLocal_706)
	{
		case -1:
			StringCopy(&(uParam0->f_2575), "", 24);
			__LIB_0__::func_8(&(uParam0->f_172), 16);
			break;
		case 0:
			StringCopy(&(uParam0->f_2575), "RCHRB_RC1", 24);
			__LIB_12__::func_846(&(uParam0->f_206));
			__LIB_12__::func_779(uParam0, __LIB_1__::func_440(uParam0->f_174));
			__LIB_12__::func_957(uParam0, iLocal_32, 0, 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_33, "Horse_01", 0, 0, 0);
			__LIB_12__::func_957(uParam0, Global_35, 0, 0, 0, 0);
			__LIB_0__::func_7(&(uParam0->f_172), 16);
			__LIB_12__::func_943(&(uParam0->f_206), 714.3344f, -1232.005f, 44.4052f, 346.5797f, 0);
			break;
		case 1:
			StringCopy(&(uParam0->f_2575), "RCHRB_RC2", 24);
			__LIB_12__::func_909(&(uParam0->f_206));
			__LIB_12__::func_779(uParam0, vLocal_39);
			__LIB_12__::func_957(uParam0, iLocal_32, 0, 0, 0, 0);
			__LIB_12__::func_957(uParam0, Global_35, 0, 0, 0, 0);
			__LIB_0__::func_7(&(uParam0->f_172), 16);
			break;
		case 2:
			StringCopy(&(uParam0->f_2575), "RCHRB_S1_MCS1", 24);
			__LIB_12__::func_909(&(uParam0->f_206));
			__LIB_12__::func_779(uParam0, vLocal_293);
			__LIB_12__::func_957(uParam0, iLocal_32, "JosiahTrelawny", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_33, "Horse_01^1", 0, 0, 0);
			__LIB_12__::func_957(uParam0, Global_35, "ARTHUR", 0, 0, 0);
			__LIB_0__::func_7(&(uParam0->f_172), 16);
			break;
		case 3:
			StringCopy(&(uParam0->f_2575), "RCHRB_S1_EXT", 24);
			__LIB_12__::func_676(&(uParam0->f_206), "1-PlayerSucceeds-Normal");
			__LIB_12__::func_779(uParam0, vLocal_255);
			__LIB_12__::func_957(uParam0, iLocal_32, "JosiahTrelawny", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_33, "Horse_01", 0, 0, 0);
			__LIB_12__::func_957(uParam0, Global_35, "ARTHUR", 0, 0, 0);
			__LIB_0__::func_7(&(uParam0->f_172), 16);
			__LIB_12__::func_943(&(uParam0->f_206), 1494.717f, -1011.775f, 49.1908f, 185.1628f, 0);
			break;
		case 4:
			StringCopy(&(uParam0->f_2575), "RCHRB_S1_EXT", 24);
			__LIB_12__::func_676(&(uParam0->f_206), "2-PlayerFails-Normal");
			__LIB_12__::func_779(uParam0, vLocal_258);
			__LIB_12__::func_957(uParam0, iLocal_32, "JosiahTrelawny", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_33, "Horse_01", 0, 0, 0);
			__LIB_12__::func_957(uParam0, Global_35, "ARTHUR", 0, 0, 0);
			__LIB_0__::func_7(&(uParam0->f_172), 16);
			__LIB_12__::func_943(&(uParam0->f_206), 1157.059f, -952.7747f, 67.0221f, 305.4395f, 0);
		}
bool func_297(var uParam0)
{
	if (SCRIPTS::DOES_SCRIPT_EXIST(&(Global_1835011[23 /*74*/].f_22)) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&(Global_1835011[23 /*74*/].f_22))) > 0)
	{
		return false;
	}
	if (func_651(uParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_32))
		{
			PED::SET_PED_CONFIG_FLAG(iLocal_32, 297, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_32, 315, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_32, 130, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_32, 331, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_32, 330, true);
		}
		__LIB_6__::func_413(joaat("WEATHER_GROUP_GOOD"), 0, 0, 1103626240 /* Float: 25f */);
		return true;
	}
	return false;
}

void func_301()
{
	if (__LIB_0__::func_272(iLocal_33, 1))
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_33, 674.35f, -1225.15f, 43.66f, -121.82f, true, false, true);
		ENTITY::_0x9587913B9E772D29(iLocal_33, 0);
		PED::_0x2208438012482A1A(iLocal_33, false, false);
	}
	if (__LIB_0__::func_272(iLocal_32, 1) && !PED::IS_PED_ON_MOUNT(iLocal_32))
	{
		PED::_SET_PED_ON_MOUNT(iLocal_32, iLocal_33, -1, true);
		PED::_0x2208438012482A1A(iLocal_32, false, false);
	}
}

bool func_302(var uParam0, vector3 vParam1, float fParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_93))
	{
		func_654(uParam0, &iLocal_93, vParam1, fParam4, 1, 0, 1, 1, 1);
	}
	if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_93))
	{
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_93))
	{
		if (__LIB_0__::func_272(iLocal_93, 1))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_93, vParam1, fParam4, true, false, true);
			return true;
		}
	}
	return false;
}

void func_308()
{
	vector3 vVar0;
	vector3 vVar3;
	vVar0 = { 1250.21f, -1298.87f, 75.31f };
	vVar3 = { 1256.01f, -1310.8f, 75.4f };
	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(vVar0, 3f, joaat("P_HORSEPOOP02X"), false))
	{
		if (iLocal_426 == 0)
		{
			iLocal_426 = ENTITY::_0x6F3068258A499E52(joaat("P_HORSEPOOP02X"), vVar0, 11);
		}
		else if (ENTITY::_0x1FF441D7954F8709(iLocal_426))
		{
			iLocal_425 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(iLocal_426));
			ENTITY::SET_ENTITY_COORDS(iLocal_425, vVar3, true, false, true, true);
			ENTITY::SET_ENTITY_VISIBLE(iLocal_425, false);
			ENTITY::SET_ENTITY_COLLISION(iLocal_425, false, false);
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_425);
			iLocal_426 = 0;
		}
	}
}

void func_310()
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_397))
	{
		__LIB_1__::func_216(&iLocal_397, vLocal_401, 0f, 0f, 0f, 20f, 20f, 20f);
		__LIB_0__::func_568(vLocal_401, 20f, 0);
		__LIB_1__::func_572(vLocal_401, 20f, 0, 0, 0, 0, 0);
		__LIB_2__::func_165(vLocal_401, 20f, 0, 0, 5);
		__LIB_2__::func_213(iLocal_397, "OUTSIDE STATION", 1, 0, 0, 0, -1082130432 /* Float: -1f */);
		iLocal_398 = PED::_0x4C39C95AE5DB1329(iLocal_397, 0, 15);
		POPULATION::_0xB56D41A694E42E86(iLocal_397, 10208, 0, 0, -1, -1, 0);
	}
}

void func_315(int iParam0)
{
	if (iLocal_719 != iParam0)
	{
		iLocal_719 = iParam0;
	}
}

void func_317()
{
	func_658();
	__LIB_6__::func_705(4);
	func_659();
	__LIB_6__::func_811(iLocal_23, iLocal_24, iLocal_25);
	AUDIO::START_AUDIO_SCENE(sLocal_28);
}

void func_318(var uParam0)
{
	switch (iLocal_706)
	{
		case 2:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_420))
			{
				iLocal_420 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("P_CS_BILLSINGLE01X"), vLocal_121, true, true, false, true);
			}
			__LIB_12__::func_957(uParam0, iLocal_420, "P_CS_BILLSINGLE01X", 1, 0, 0);
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_421))
			{
				iLocal_421 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("P_CS_LETTERFOLDED01X"), vLocal_121, true, true, false, true);
			}
			__LIB_12__::func_957(uParam0, iLocal_421, "P_CS_LETTERFOLDED01X", 1, 0, 0);
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_422))
			{
				iLocal_422 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("P_LOCKPICK01X"), vLocal_121, true, true, false, true);
			}
			__LIB_12__::func_957(uParam0, iLocal_422, "P_LOCKPICK01X", 1, 0, 0);
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_423))
			{
				iLocal_423 = OBJECT::CREATE_OBJECT_NO_OFFSET(WEAPON::_GET_WEAPONTYPE_MODEL(joaat("WEAPON_REVOLVER_CATTLEMAN")), vLocal_121, true, true, false, true);
			}
			__LIB_12__::func_957(uParam0, iLocal_423, "w_revolver_cattleman01", 1, 0, 0);
			break;
		case 3:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_424))
			{
				iLocal_424 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("P_FOLDEDBILLS01X"), vLocal_255, true, true, false, true);
			}
			__LIB_12__::func_957(uParam0, iLocal_424, "P_FOLDEDBILLS01X", 1, 0, 0);
			break;
		case 4:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_424))
			{
				iLocal_424 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("P_FOLDEDBILLS01X"), vLocal_258, true, true, false, true);
			}
			__LIB_12__::func_957(uParam0, iLocal_424, "P_FOLDEDBILLS01X", 1, 0, 0);
			break;
	}
}

void func_322()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_186))
	{
		iLocal_186 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_384, 0);
	}
	else if (!bLocal_335)
	{
		__LIB_4__::func_7(iLocal_186, joaat("WEAPON_UNARMED"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
		bLocal_335 = true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_187))
	{
		iLocal_187 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_384, -1);
	}
	else if (!bLocal_336)
	{
		__LIB_4__::func_7(iLocal_187, joaat("WEAPON_UNARMED"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
		bLocal_336 = true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_188))
	{
		iLocal_188 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_384, 2);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_189))
	{
		iLocal_189 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_384, 4);
	}
}

void func_323(var uParam0, bool bParam1)
{
	char* sVar0;
	sVar0 = "script@rcm@chrb@ig@ig1_charmpassenger@ig1_charmpassenger";
	switch (iLocal_722)
	{
		case 0:
			iLocal_338 = ANIMSCENE::_CREATE_ANIM_SCENE(sVar0, 0, 0, false, true);
			iLocal_339 = ANIMSCENE::_CREATE_ANIM_SCENE(sVar0, 0, 0, false, true);
			iLocal_340 = ANIMSCENE::_CREATE_ANIM_SCENE(sVar0, 0, 0, false, true);
			iLocal_341 = ANIMSCENE::_CREATE_ANIM_SCENE(sVar0, 0, 0, false, true);
			iLocal_343 = ANIMSCENE::_CREATE_ANIM_SCENE(sVar0, 0, 0, false, true);
			iLocal_342 = ANIMSCENE::_CREATE_ANIM_SCENE(sVar0, 0, 0, false, true);
			iLocal_722 = 1;
			break;
		case 1:
			if ((((func_664(iLocal_338, "pbl_ACTION_MrsDamsen") && func_664(iLocal_339, "pbl_ACTION_Josiah")) && func_664(iLocal_341, "pbl_ACTION_Guard")) && func_664(iLocal_340, "pbl_ACTION_Driver")) && func_664(iLocal_343, "pbl_ACTION_Passenger"))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_339, "CS_JosiahTrelawny", iLocal_32, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_339, "P_C_HORSE_01", iLocal_33, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_338, "A_F_M_SclFancyTravellers_01", iLocal_188, 0);
				ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(iLocal_338, iLocal_384, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_384, "seat_psdie_r"));
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_340, "A_M_M_SclRoughTravellers_01", iLocal_186, 0);
				ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(iLocal_340, iLocal_384, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_384, "seat_pside_f"));
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_341, "A_M_M_SclRoughTravellers_01^1", iLocal_187, 0);
				ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(iLocal_341, iLocal_384, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_384, "seat_dside_f"));
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_343, "A_M_M_SclRoughTravellers_01^2", iLocal_189, 0);
				ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(iLocal_343, iLocal_384, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_384, "seat_psdie_r1"));
				__LIB_6__::func_763(iLocal_338, "pbl_ACTION_MrsDamsen");
				__LIB_6__::func_763(iLocal_339, "pbl_ACTION_Josiah");
				__LIB_6__::func_763(iLocal_341, "pbl_ACTION_Guard");
				__LIB_6__::func_763(iLocal_340, "pbl_ACTION_Driver");
				__LIB_6__::func_763(iLocal_343, "pbl_ACTION_Passenger");
				ANIMSCENE::_0xAE6ADA8FE7E84ACC(iLocal_338, "pbl_ACTION_MrsDamsen");
				ANIMSCENE::_0xAE6ADA8FE7E84ACC(iLocal_339, "pbl_ACTION_Josiah");
				ANIMSCENE::_0xAE6ADA8FE7E84ACC(iLocal_341, "pbl_ACTION_Guard");
				ANIMSCENE::_0xAE6ADA8FE7E84ACC(iLocal_340, "pbl_ACTION_Driver");
				ANIMSCENE::_0xAE6ADA8FE7E84ACC(iLocal_343, "pbl_ACTION_Passenger");
				iLocal_722 = 2;
			}
			break;
		case 2:
			if (func_664(iLocal_342, "pbl_ACTION_02"))
			{
				if (bParam1)
				{
					__LIB_3__::func_319(iLocal_338);
					__LIB_3__::func_319(iLocal_339);
					__LIB_3__::func_319(iLocal_341);
					__LIB_3__::func_319(iLocal_340);
					__LIB_3__::func_319(iLocal_343);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_342, "CS_JosiahTrelawny", iLocal_32, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_342, "P_C_HORSE_01", iLocal_33, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_342, "A_F_M_SclFancyTravellers_01", iLocal_188, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_342, "A_M_M_SclRoughTravellers_01", iLocal_186, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_342, "A_M_M_SclRoughTravellers_01^1", iLocal_187, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_342, "A_M_M_SclRoughTravellers_01^2", iLocal_189, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_342, "COACH2", iLocal_384, 0);
					__LIB_6__::func_763(iLocal_342, "pbl_ACTION_02");
					ANIMSCENE::_0xAE6ADA8FE7E84ACC(iLocal_342, "pbl_ACTION_02");
					iLocal_722 = 5;
				}
			}
			break;
		case 5:
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_342, false))
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_342) >= 0.30171f)
				{
					if (iLocal_354 < 3)
					{
						iLocal_354 = 3;
					}
				}
				if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_342) >= 0.102284f)
				{
					if (iLocal_354 < 2 || iLocal_354 == 4)
					{
						iLocal_354 = 2;
					}
				}
				if (!bLocal_182)
				{
					if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_342) >= 0.733398f)
					{
						bLocal_182 = true;
					}
				}
				if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_342) >= 0.719655f)
				{
					sLocal_346 = "pbl_Breakout_singing";
				}
				else if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_342) >= 0.599651f && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_342) < 0.632901f)
				{
					sLocal_346 = "pbl_Breakout_step";
				}
				else
				{
					sLocal_346 = "";
				}
				if (!bLocal_350)
				{
					if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_342) >= 0.025504f)
					{
						bLocal_350 = true;
					}
				}
				if (!bLocal_349)
				{
					if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_342) >= 0.63881f)
					{
						AITRANSPORT::_0x8886D83A430537FD(iLocal_188, 0);
						bLocal_349 = true;
					}
				}
				if (!bLocal_347)
				{
					if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_342) >= 0.080102f)
					{
						func_345(uParam0, 9);
						PED::SET_PED_CONFIG_FLAG(iLocal_32, 167, false);
						AITRANSPORT::_0x8886D83A430537FD(iLocal_32, 0);
						PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "stealth", 1f, -1);
						iLocal_354 = 2;
						bLocal_347 = true;
					}
				}
				if (!bLocal_348)
				{
					if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_342) >= 0.080102f)
					{
						if (!PED::IS_PED_ON_MOUNT(iLocal_32))
						{
							if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_33, iLocal_339))
							{
								TASK::CLEAR_PED_TASKS(iLocal_33, true, false);
								TASK::TASK_STAND_STILL(iLocal_33, -1);
								bLocal_348 = true;
							}
						}
					}
				}
			}
			break;
	}
}

bool func_324(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
				func_324(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
			func_707(iParam0);
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
			func_709(iParam0, iParam1);
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
						func_324(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_324(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_324(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_324(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_324(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_324(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_324(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
					func_324(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_324(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_324(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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

int func_338(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	int iVar0;
	__LIB_12__::func_750(uParam4, &uParam0);
	if (__LIB_0__::func_84(uParam4, 2) && !__LIB_0__::func_84(uParam4, 67108864))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SKIP_CUTSCENE"), false);
	}
	if (__LIB_0__::func_81(uParam4) != 1)
	{
		__LIB_13__::func_56(uParam4);
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
					__LIB_13__::func_192(uParam4, &uParam0, uParam5);
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
				if (!__LIB_2__::func_618(&(uParam4->f_1)))
				{
					__LIB_8__::func_901(&(uParam4->f_1), 0);
				}
				else if (__LIB_5__::func_51(&(uParam4->f_1)) >= 60f)
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
				if (__LIB_13__::func_191(uParam4, &uParam0, 1, 1))
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
				else if (__LIB_5__::func_51(&(uParam4->f_1)) >= 60f)
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
					__LIB_13__::func_192(uParam4, &uParam0, uParam5);
					__LIB_8__::func_898(uParam4, 3);
				}
				else
				{
					SCRIPTS::SHUTDOWN_LOADING_SCREEN();
				}
			}
			else if (__LIB_5__::func_51(&(uParam4->f_1)) >= 60f)
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_348))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_348);
				}
				__LIB_8__::func_898(uParam4, 4);
			}
			break;
		case 3:
			func_769(uParam4);
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
				__LIB_13__::func_56(uParam4);
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
				__LIB_14__::func_68(uParam4);
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
				__LIB_14__::func_68(uParam4);
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
					else if (__LIB_5__::func_51(&(uParam4->f_1)) >= 30f)
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

void func_343()
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_M_M_RHDTOWNFOLK_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_PAPER01X"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_CS_LEDGER01X"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_LETTERBUNDLE_01X"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_PENCIL01X"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_STAMP01X"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_PEN01X"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_CS_NOTE01X"));
}

void func_345(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			sLocal_242 = "RCHRB1_OBJ1H";
			break;
		case 1:
			sLocal_242 = "RCHRB1_OBJ1A";
			break;
		case 2:
			sLocal_242 = "RCHRB1_OBJ1B";
			break;
		case 3:
			sLocal_242 = "RCHRB1_OBJ1";
			break;
		case 4:
			sLocal_242 = "RCHRB_O_PAYTIP";
			break;
		case 5:
			sLocal_242 = "RCHRB1_OBJ2";
			break;
		case 6:
			sLocal_242 = "RCHRB1_OBJ9";
			break;
		case 7:
			sLocal_242 = "RCHRB1_OBJ1";
			break;
		case 8:
			sLocal_242 = "RCHRB1_OBJ6";
			break;
		case 9:
			sLocal_242 = "RCHRB1_DAMSEN_W";
			break;
		case 10:
			sLocal_242 = "RCHRB1_LOOT_S";
			break;
		case 11:
			sLocal_242 = "RCHRB1_OBJ3";
			break;
		case 12:
			sLocal_242 = "RCHRB1_OBJ7";
			break;
		case 13:
			sLocal_242 = "RCHRB1_LOOT";
			break;
		case 14:
			sLocal_242 = "RCHRB1_WTCL";
			break;
		case 15:
			sLocal_242 = "RCHRB1_OBJ5";
			fLocal_697 = BUILTIN::VDIST(Global_36, vLocal_261);
			break;
		case 16:
			sLocal_242 = "RCHRB1_OBJ8";
			vLocal_270 = { Global_36 };
			fLocal_697 = BUILTIN::VDIST(Global_36, vLocal_247);
			break;
	}
	__LIB_2__::func_608(&uLocal_239);
	iLocal_718 = iParam1;
	bLocal_243 = false;
	__LIB_13__::func_89(uParam0, sLocal_242, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
}

void func_347()
{
	__LIB_1__::func_240(191, 0);
}

bool func_348(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
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
			__LIB_12__::func_970(uParam0, iParam5, bParam6);
		}
		else if (__LIB_0__::func_78(uParam0) > 3)
		{
			if (__LIB_0__::func_81(uParam0) == 0)
			{
				if (!__LIB_12__::func_655(uParam0, 524288))
				{
					__LIB_13__::func_373(uParam0);
				}
				else if (CAM::IS_SCREEN_FADED_OUT())
				{
					__LIB_12__::func_691(uParam0, 4);
					__LIB_0__::func_115(uParam0, 10);
					__LIB_13__::func_57(uParam0, iParam5);
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
				__LIB_12__::func_914(uParam0);
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
				__LIB_13__::func_57(uParam0, iParam5);
				return true;
			}
		}
	}
	if (__LIB_0__::func_78(uParam0) >= 3)
	{
		__LIB_13__::func_542(uParam0, iParam5);
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
			if (uParam0->f_1581 >= 0 || __LIB_9__::func_324(&(uParam0->f_1768)) >= 15f)
			{
				if (__LIB_13__::func_363(uParam0, iParam5))
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
						__LIB_13__::func_57(uParam0, iParam5);
						return true;
					}
				}
			}
			break;
		case 9:
			if (__LIB_13__::func_363(uParam0, iParam5))
			{
				__LIB_13__::func_57(uParam0, iParam5);
				__LIB_0__::func_115(uParam0, 10);
				return true;
			}
			break;
		case 10:
			return true;
	}
	return false;
}

void func_352(var uParam0)
{
	if (bLocal_243)
	{
		return;
	}
	if (!__LIB_2__::func_618(&uLocal_239))
	{
		__LIB_5__::func_107(&uLocal_239);
	}
	switch (iLocal_718)
	{
		case 1:
			if ((BUILTIN::VDIST(vLocal_43, Global_36) > 15f && PED::IS_PED_ON_MOUNT(Global_35)) || __LIB_5__::func_352(sLocal_242))
			{
				bLocal_243 = true;
			}
			else if (__LIB_5__::func_51(&uLocal_239) > 30f)
			{
				__LIB_12__::func_883(uParam0, sLocal_242, 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				bLocal_243 = true;
			}
			break;
		case 2:
			if ((BUILTIN::VDIST(vLocal_223, Global_36) < 20f && !PED::IS_PED_ON_MOUNT(Global_35)) || __LIB_5__::func_352(sLocal_242))
			{
				bLocal_243 = true;
			}
			else if (__LIB_5__::func_51(&uLocal_239) > 25f)
			{
				__LIB_12__::func_883(uParam0, sLocal_242, 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				bLocal_243 = true;
			}
			break;
		case 3:
			if (__LIB_5__::func_51(&uLocal_239) > 10f)
			{
				if (__LIB_0__::func_665(Global_35, iLocal_32, 1, 1) > 15f && !__LIB_5__::func_352(sLocal_242))
				{
					__LIB_12__::func_883(uParam0, sLocal_242, 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				}
				bLocal_243 = true;
			}
			break;
		case 4:
			if (__LIB_5__::func_51(&uLocal_239) > 10f)
			{
				if (__LIB_0__::func_139(iLocal_385))
				{
					__LIB_12__::func_883(uParam0, sLocal_242, 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				}
				bLocal_243 = true;
			}
			break;
		case 5:
			if (__LIB_5__::func_51(&uLocal_239) > 30f)
			{
				if (__LIB_0__::func_665(Global_35, iLocal_32, 1, 1) > 30f)
				{
					if (!__LIB_5__::func_352(sLocal_242))
					{
						__LIB_12__::func_883(uParam0, "RCHRB1_RET2", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					}
				}
				bLocal_243 = true;
			}
			break;
		case 6:
			break;
		case 7:
			if (__LIB_5__::func_51(&uLocal_239) > 10f)
			{
				if (__LIB_0__::func_665(Global_35, iLocal_32, 1, 1) > 20f)
				{
					if (!__LIB_5__::func_352(sLocal_242))
					{
						__LIB_12__::func_883(uParam0, sLocal_242, 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					}
				}
				bLocal_243 = true;
			}
			break;
		case 8:
			__LIB_12__::func_883(uParam0, sLocal_242, 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			bLocal_243 = true;
			break;
		case 9:
			__LIB_12__::func_883(uParam0, sLocal_242, 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			bLocal_243 = true;
			break;
		case 10:
			__LIB_12__::func_883(uParam0, sLocal_242, 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			bLocal_243 = true;
			break;
		case 11:
			if (__LIB_0__::func_665(Global_35, iLocal_384, 1, 1) > 100f)
			{
				if (!__LIB_5__::func_352(sLocal_242))
				{
					__LIB_12__::func_883(uParam0, sLocal_242, 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					bLocal_243 = true;
				}
			}
			break;
		case 12:
			break;
		case 13:
			if (__LIB_5__::func_51(&uLocal_239) > 10f)
			{
				if (__LIB_0__::func_665(Global_35, iLocal_384, 1, 1) > 30f)
				{
					if (!__LIB_5__::func_352(sLocal_242))
					{
						__LIB_12__::func_883(uParam0, sLocal_242, 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					}
				}
				bLocal_243 = true;
			}
			break;
		case 14:
			__LIB_12__::func_883(uParam0, sLocal_242, 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			bLocal_243 = true;
			break;
		case 15:
			if (BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iLocal_32, true, false)) > 30f)
			{
				if (!__LIB_5__::func_352(sLocal_242))
				{
					__LIB_12__::func_883(uParam0, sLocal_242, 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				}
				bLocal_243 = true;
			}
			break;
		case 16:
			if ((__LIB_2__::func_618(&uLocal_386) && __LIB_5__::func_51(&uLocal_386) > 2f) || bLocal_705)
			{
				if (!__LIB_5__::func_352(sLocal_242))
				{
					__LIB_12__::func_883(uParam0, sLocal_242, 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				}
				bLocal_243 = true;
			}
			break;
	}
}

void func_353()
{
	char* sVar0;
	sVar0 = "script@rcm@chrb@ig@ig3_breakout@ig3_breakout";
	switch (iLocal_723)
	{
		case 0:
			if (iLocal_721 > 0)
			{
				iLocal_345 = ANIMSCENE::_CREATE_ANIM_SCENE(sVar0, 0, 0, false, true);
				ANIMSCENE::LOAD_ANIM_SCENE(iLocal_345);
				iLocal_723 = 1;
			}
			break;
		case 1:
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_346) && ((bLocal_194 || __LIB_6__::func_702(1)) || __LIB_6__::func_702(32768)))
			{
				bLocal_368 = true;
				if (func_664(iLocal_345, sLocal_346))
				{
					if (__LIB_0__::func_272(iLocal_188, 0))
					{
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_345, "A_F_M_SclFancyTravellers_01", iLocal_188, 0);
					}
					if (__LIB_0__::func_272(iLocal_186, 0))
					{
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_345, "A_M_M_SclRoughTravellers_01", iLocal_186, 0);
					}
					__LIB_6__::func_763(iLocal_345, sLocal_346);
					ANIMSCENE::_0xAE6ADA8FE7E84ACC(iLocal_345, sLocal_346);
					iLocal_723 = 2;
				}
			}
			break;
		case 2:
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_345, false))
			{
				bLocal_368 = false;
				iLocal_723 = 3;
			}
			break;
		case 3:
			iLocal_723 = 5;
			break;
	}
}

void func_354()
{
	if (iLocal_711 < 9)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_384))
	{
		return;
	}
	if (!__LIB_0__::func_272(iLocal_188, 1))
	{
		return;
	}
	if (!__LIB_6__::func_702(1))
	{
		return;
	}
	if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_188, iLocal_345))
	{
		return;
	}
	if (PED::IS_PED_IN_VEHICLE(iLocal_188, iLocal_384, false) && ENTITY::GET_ENTITY_SPEED(iLocal_384) > 0.5f)
	{
	}
	else if (!PED::IS_PED_FLEEING(iLocal_188))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_188, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_188, 17, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_188, 14, false);
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_188, 2, false);
		TASK::TASK_SMART_FLEE_PED(iLocal_188, Global_35, 300f, -1, 0, 1077936128 /* Float: 3f */, 0);
		PED::SET_PED_KEEP_TASK(iLocal_188, true);
	}
	if (!bLocal_692)
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_188, false) && PED::IS_PED_FLEEING(iLocal_188))
		{
			__LIB_1__::func_265(iLocal_188, "SCREAM_TERROR", 1808677283, 0, 1, 0, 0, 1);
			bLocal_692 = true;
		}
	}
}

void func_355()
{
	int iVar0;
	if (iLocal_711 < 9)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_384))
	{
		return;
	}
	if (!__LIB_0__::func_272(iLocal_189, 1))
	{
		return;
	}
	if (!__LIB_6__::func_702(1))
	{
		return;
	}
	if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_189, iLocal_345))
	{
		return;
	}
	if (PED::IS_PED_IN_VEHICLE(iLocal_189, iLocal_384, false) && ENTITY::GET_ENTITY_SPEED(iLocal_384) > 0.5f)
	{
	}
	else if (!PED::IS_PED_FLEEING(iLocal_189) && !__LIB_0__::func_163(iLocal_189, 242628503))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_189, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_189, 17, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_189, 14, false);
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_189, 2, false);
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_PAUSE(0, 2400);
		TASK::TASK_SMART_FLEE_PED(0, Global_35, 300f, -1, 0, 1077936128 /* Float: 3f */, 0);
		TASK::CLOSE_SEQUENCE_TASK(iVar0);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_189, iVar0);
		TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		PED::SET_PED_KEEP_TASK(iLocal_189, true);
	}
}

void func_356(bool bParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;
	vector3 vVar8;
	vector3 vVar11;
	vector3 vVar14;
	float fVar17;
	vVar0 = { 4.5f, -5f, 2.7f };
	vVar3 = { 1f, 0f, 0.7f };
	fVar6 = 40f;
	fVar7 = 0.08f;
	if (iLocal_722 == 5)
	{
		if (!bLocal_288)
		{
			iLocal_354 = 4;
			bLocal_288 = true;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_352))
	{
		vVar8 = { ENTITY::GET_ENTITY_COORDS(iLocal_352, true, false) };
		vVar11 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_384, vVar0) };
		vVar14 = { __LIB_13__::func_364(vVar8, vVar11, fVar7) };
		ENTITY::SET_ENTITY_COORDS(iLocal_352, vVar14, true, false, true, true);
	}
	if (!bLocal_212)
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 128, false);
		}
		return;
	}
	if (bLocal_182)
	{
		func_824();
		if (!bLocal_286)
		{
			if (PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_CINEMATIC_CAM_HOLD")))
			{
				CAM::_0x8910C24B7E0046EC();
			}
			else
			{
				bLocal_286 = true;
			}
		}
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 128, false);
		}
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_384))
	{
		return;
	}
	*bParam0 = 1;
	CAM::_0x8910C24B7E0046EC();
	if (!bLocal_178)
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 128, false);
		}
		if (!__LIB_0__::func_139(iLocal_180))
		{
			if (!func_825())
			{
				iLocal_180 = __LIB_1__::func_877("CR1_CAM_F", joaat("INPUT_CINEMATIC_CAM"), 4, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			}
			if (__LIB_0__::func_139(iLocal_180))
			{
				__LIB_1__::func_522(iLocal_180, 13, 1, 1);
			}
		}
		else if (func_825())
		{
			__LIB_1__::func_382(iLocal_180, 0, 1);
		}
		else
		{
			__LIB_1__::func_382(iLocal_180, 1, 1);
			if (__LIB_0__::func_567(iLocal_180, 1))
			{
				func_830(iLocal_354, vVar0, vVar3);
				iLocal_355 = iLocal_354;
				HUD::_HIDE_HUD_COMPONENT(724769646);
				CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
				VEHICLE::_0xCBC7B6F9A56B79F6(iLocal_384, 1);
				CAM::_0x3B8E3AD9677CE12B(1, ENTITY::GET_ENTITY_HEADING(Global_35), 0);
				bLocal_178 = true;
				STATS::_0x025E98E317652CDD(1);
			}
		}
	}
	else
	{
		__LIB_1__::func_281(&iLocal_180, 1, 1);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 128, false);
		if (!__LIB_0__::func_139(iLocal_181))
		{
			iLocal_181 = __LIB_1__::func_877("CR1_CAM_F", joaat("INPUT_CINEMATIC_CAM"), 3, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			__LIB_1__::func_382(iLocal_181, 0, 1);
		}
		CAM::_0x3B8E3AD9677CE12B(1, ENTITY::GET_ENTITY_HEADING(Global_35), 0);
		CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
		if (((PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_CINEMATIC_CAM")) || PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_NEXT_CAMERA"))) || __LIB_1__::func_732(iLocal_181, 1)) || __LIB_1__::func_530(iLocal_181, 1))
		{
			func_824();
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_NEXT_CAMERA"), true);
			if (__LIB_0__::func_139(iLocal_180))
			{
				__LIB_1__::func_522(iLocal_180, 13, 1, 1);
			}
			return;
		}
		if (__LIB_0__::func_139(iLocal_180))
		{
			__LIB_1__::func_522(iLocal_180, 13, 0, 1);
			__LIB_1__::func_382(iLocal_180, 0, 1);
		}
		if (iLocal_354 != iLocal_355)
		{
			STATS::_0x025E98E317652CDD(0);
			CAM::DESTROY_CAM(iLocal_179, false);
			OBJECT::DELETE_OBJECT(&iLocal_352);
			func_830(iLocal_354, vVar0, vVar3);
			iLocal_355 = iLocal_354;
		}
		if (iLocal_354 == 0)
		{
			if (CAM::DOES_CAM_EXIST(iLocal_179))
			{
				if (ENTITY::GET_ENTITY_SPEED(iLocal_384) < 2.5f)
				{
					fVar17 = (CAM::GET_CAM_FOV(iLocal_179) + 0.1f);
					if (fVar17 > 36f)
					{
						fVar17 = 36f;
					}
					CAM::SET_CAM_FOV(iLocal_179, fVar17);
				}
			}
		}
		if (!bLocal_269)
		{
			if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Global_35, 0))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 128, false);
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Global_35, sLocal_168, 0, 27656, -1, 0, 0, -1);
			}
			else if (__LIB_0__::func_665(Global_35, iLocal_384, 1, 1) > fVar6)
			{
				TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Global_35, 1.25f, 0, -1082130432 /* Float: -1f */, 0);
			}
			else
			{
				TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Global_35, 0f, 0, -1082130432 /* Float: -1f */, 0);
			}
		}
		else if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Global_35, 0))
		{
			if (__LIB_0__::func_665(Global_35, iLocal_384, 1, 1) > fVar6)
			{
				TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Global_35, 1.25f, 0, -1082130432 /* Float: -1f */, 0);
			}
			else
			{
				TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Global_35, 0f, 0, -1082130432 /* Float: -1f */, 0);
			}
		}
	}
}

void func_357()
{
	int iVar0;
	iVar0 = __LIB_0__::func_23();
	if (__LIB_0__::func_41(iVar0) < 0)
	{
		__LIB_9__::func_827(0, 0, 0, 0);
	}
	else if (__LIB_0__::func_41(iVar0) < 17)
	{
		__LIB_9__::func_827(17, 0, 0, 0);
	}
	else
	{
		__LIB_9__::func_827(20, 0, 0, 0);
	}
}

void func_358()
{
	vector3 vVar0;
	vVar0 = { 0f, -2.2f, 0f };
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_384))
	{
		__LIB_0__::func_325(&iLocal_404);
		__LIB_0__::func_325(&iLocal_405);
		return;
	}
	if (bLocal_407)
	{
		__LIB_0__::func_325(&iLocal_404);
		if (!MAP::DOES_BLIP_EXIST(iLocal_405))
		{
			func_837(&iLocal_384, &iLocal_405, vVar0);
		}
		else
		{
			func_838(&iLocal_384, &iLocal_405, vVar0);
		}
		return;
	}
	else if (bLocal_406)
	{
		__LIB_0__::func_325(&iLocal_405);
		if (!MAP::DOES_BLIP_EXIST(iLocal_404))
		{
			func_839(&iLocal_384, &iLocal_404);
		}
		return;
	}
	__LIB_0__::func_325(&iLocal_404);
	__LIB_0__::func_325(&iLocal_405);
}

bool func_359(var uParam0)
{
	vector3 vVar0;
	struct<23> Var3;
	StringCopy(&(uParam0->f_206.f_358), "1-PlayerSucceeds-Multi", 64);
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iLocal_32, true, false) };
	if (!bLocal_351)
	{
		if (__LIB_13__::func_375(Global_35, vVar0, &uLocal_274, 1112014848 /* Float: 50f */, 1106247680 /* Float: 30f */, 1097859072 /* Float: 15f */, 7.5f, 1f, 0, 0, 1, 1, 1))
		{
			bLocal_351 = true;
		}
	}
	if (__LIB_0__::func_94(iLocal_32, Global_36, 1) < 30f)
	{
		Var3.f_4 = -1;
		Var3.f_8 = 2;
		Var3.f_9 = 1;
		Var3.f_10 = 1;
		Var3.f_11 = 1;
		Var3.f_13 = 1;
		Var3.f_14 = 2;
		Var3.f_15 = 2;
		Var3.f_16 = 3;
		Var3.f_19 = 3;
		Var3.f_20 = 1;
		Var3.f_21 = 3;
		Var3.f_22 = 3;
		Var3.f_7 = 500;
		Var3.f_3 = iLocal_32;
		Var3.f_4 = 14283;
		_NAMESPACE29::_0x66F9EB44342BB4C5(Global_35, &Var3);
	}
	switch (iLocal_724)
	{
		case 0:
			if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_32, -1))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_32, vLocal_261, 1f, -1, 0.25f, 0, fLocal_264);
				iLocal_724 = 1;
			}
			break;
		case 1:
			if (__LIB_3__::func_501(iLocal_32, vLocal_261, fLocal_264, 0.5f, 45f, 1))
			{
				if (iLocal_706 == 3)
				{
					__LIB_12__::func_944(uParam0, "RCHRB_S1_EXT", 1);
					__LIB_12__::func_956(&(uParam0->f_753), Global_35, "ARTHUR", 0);
					__LIB_12__::func_956(&(uParam0->f_753), iLocal_32, "JosiahTrelawny", 0);
					iLocal_724 = 2;
				}
			}
			break;
		case 2:
			if (__LIB_0__::func_94(iLocal_32, Global_36, 1) < 30f)
			{
				func_844(iLocal_32);
			}
			func_348(&(uParam0->f_753), uParam0->f_2581, 0, 0);
			if (__LIB_12__::func_670(&(uParam0->f_753)))
			{
				return true;
			}
			break;
	}
	return false;
}

int func_360(var uParam0)
{
	if (!__LIB_0__::func_272(iLocal_32, 1))
	{
		return 0;
	}
	if (!__LIB_0__::func_272(iLocal_33, 1))
	{
		return 0;
	}
	if (!__LIB_0__::func_71(iLocal_32))
	{
		if (!__LIB_0__::func_163(iLocal_32, 1868526510))
		{
			if (PED::_GET_RIDER_OF_MOUNT(iLocal_33, false) == 0)
			{
				TASK::TASK_MOUNT_ANIMAL(iLocal_32, iLocal_33, 20000, -1, 1f, 1, 0, 0);
			}
			else if (PED::_GET_RIDER_OF_MOUNT(iLocal_33, false) == Global_35)
			{
				if (!bLocal_177)
				{
					if (__LIB_12__::func_876(uParam0, "RCHRB_H", 0))
					{
						bLocal_177 = true;
					}
				}
				if (!__LIB_0__::func_163(iLocal_32, -875674219))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_32, Global_35, -1, -1f, -1f, -1f);
				}
			}
		}
		return 0;
	}
	bLocal_88 = true;
	return 1;
}

void func_363(bool bParam0)
{
	if (bParam0)
	{
		AUDIO::STOP_PED_SPEAKING(iLocal_32, false);
		PED::_0x1E017404784AA6A3(iLocal_32, joaat("RCHRB_RIDE1"));
		AUDIO::_0x0D7FD6A55FD63AEF(25, 3, bParam0);
		AUDIO::_0x0D7FD6A55FD63AEF(21, 3, bParam0);
		AUDIO::_0x0D7FD6A55FD63AEF(19, 3, bParam0);
		AUDIO::_0x0D7FD6A55FD63AEF(14, 3, bParam0);
		AUDIO::_0x0D7FD6A55FD63AEF(6, 3, bParam0);
	}
	else
	{
		AUDIO::STOP_PED_SPEAKING(iLocal_32, true);
		PED::_0x2B4CE170DE09F346(iLocal_32, joaat("RCHRB_RIDE1"));
		AUDIO::_0x660A8F876DF1D4F8(25);
		AUDIO::_0x660A8F876DF1D4F8(21);
		AUDIO::_0x660A8F876DF1D4F8(19);
		AUDIO::_0x660A8F876DF1D4F8(14);
		AUDIO::_0x660A8F876DF1D4F8(6);
	}
}

void func_364(var uParam0)
{
	char* sVar0;
	if (iLocal_320 >= 3)
	{
		return;
	}
	if (!__LIB_0__::func_71(iLocal_32))
	{
		return;
	}
	if (__LIB_0__::func_71(Global_35))
	{
		return;
	}
	if (__LIB_6__::func_904())
	{
		return;
	}
	if (!__LIB_2__::func_618(&uLocal_321))
	{
		__LIB_5__::func_107(&uLocal_321);
	}
	if (__LIB_5__::func_51(&uLocal_321) < 15f)
	{
		return;
	}
	if (iLocal_711 == 1)
	{
		sVar0 = "RCHRB_MOUNT1";
	}
	else if (iLocal_711 == 4)
	{
		sVar0 = "RCHRB_MOUNT2";
	}
	if (__LIB_12__::func_876(uParam0, sVar0, 0))
	{
		iLocal_320++;
		__LIB_5__::func_107(&uLocal_321);
	}
}

int func_365(var uParam0)
{
	if (__LIB_2__::func_763(iLocal_30, 1) && bLocal_112)
	{
		return 1;
	}
	if (!__LIB_1__::func_220(105))
	{
		return 0;
	}
	if (__LIB_0__::func_29(iLocal_30))
	{
		iLocal_31 = __LIB_2__::func_965(iLocal_30, 1, 0, 0, 1, 1);
		if (!__LIB_0__::func_272(iLocal_31, 1))
		{
			return 0;
		}
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_31, vLocal_35, fLocal_38, true, false, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_31, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_31, 146, true);
		ENTITY::_SET_ENTITY_SOMETHING(iLocal_31, true);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_31, 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_31, joaat("REL_PLAYER_ALLY"));
		__LIB_12__::func_875(uParam0, iLocal_31, "RHO_STATWRK", 1);
		__LIB_1__::func_473(iLocal_31, MISC::GET_HASH_KEY(sLocal_42), -1, 0, 0, -1082130432 /* Float: -1f */);
		PED::SET_PED_KEEP_TASK(iLocal_31, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_31, 301, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_31, 315, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_31, 130, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_31, 331, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_31, 330, true);
		iLocal_95 = PED::ADD_SCENARIO_BLOCKING_AREA(vLocal_96 - Vector(2f, 2f, 2f), vLocal_96 + Vector(2f, 2f, 2f), 0, 15);
		iLocal_99 = PED::ADD_SCENARIO_BLOCKING_AREA(vLocal_100 - Vector(3f, 3f, 3f), vLocal_100 + Vector(3f, 3f, 3f), 0, 15);
		iLocal_103 = PED::ADD_SCENARIO_BLOCKING_AREA(vLocal_104 - Vector(2f, 2f, 2f), vLocal_104 + Vector(2f, 2f, 2f), 0, 15);
		__LIB_12__::func_957(uParam0, iLocal_31, "U_M_M_RHDTRAINSTATIONWORKER_01", 0, 0, 0);
		STREAMING::_REQUEST_SCENARIO_TYPE(joaat("WORLD_HUMAN_SHOPKEEPER"), 15, 0, 0);
		bLocal_112 = true;
		return 1;
	}
	return 0;
}

void func_370(var uParam0)
{
	if (iLocal_707 == 4)
	{
		return;
	}
	if (__LIB_6__::func_904())
	{
		return;
	}
	if (!__LIB_0__::func_71(Global_35))
	{
		return;
	}
	if (!__LIB_0__::func_71(iLocal_32))
	{
		return;
	}
	if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_32, true, false), Global_36) > 20f)
	{
		return;
	}
	if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_32, true, false), vLocal_39) < 50f)
	{
		return;
	}
	switch (iLocal_707)
	{
		case 0:
			if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_32, true, false), vLocal_39) < 550f)
			{
				if (__LIB_12__::func_876(uParam0, "RCHRB_BANTR1", 0))
				{
					iLocal_707 = 4;
				}
			}
			break;
	}
}

void func_373(var uParam0)
{
	int iVar0;
	float fVar1;
	vector3 vVar2;
	int iVar5;
	if (__LIB_0__::func_272(iLocal_32, 1))
	{
		func_855();
		if (!MAP::DOES_BLIP_EXIST(iLocal_233))
		{
			if (PED::IS_PED_IN_GROUP(iLocal_32))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_32);
			}
		}
		if (BUILTIN::VDIST(vLocal_50, ENTITY::GET_ENTITY_COORDS(iLocal_32, true, false)) < 15f)
		{
			PED::SET_PED_RESET_FLAG(iLocal_32, 28, true);
		}
		if ((BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_32, true, false), vLocal_50) > 30f && iLocal_708 < 1) && !bLocal_234)
		{
			if (__LIB_0__::func_71(iLocal_32))
			{
				if ((__LIB_0__::func_71(Global_35) && BUILTIN::VDIST(Global_36, vLocal_277) > 5f) || !func_856(Global_35))
				{
					fVar1 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iLocal_32, true, false));
					if ((fVar1 < 15f || fVar1 > 40f) || !func_856(Global_35))
					{
						if (!__LIB_9__::func_313(Global_36))
						{
							if (!PED::IS_PED_IN_GROUP(iLocal_32) && MAP::DOES_BLIP_EXIST(iLocal_233))
							{
								PED::SET_PED_CONFIG_FLAG(iLocal_32, 279, true);
								PED::SET_PED_AS_GROUP_MEMBER(iLocal_32, PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX()));
								PED::SET_PED_CONFIG_FLAG(iLocal_32, 167, true);
								PED::SET_GROUP_FORMATION(PED::GET_PED_GROUP_INDEX(Global_35), 3);
							}
						}
						else if (PED::IS_PED_IN_GROUP(iLocal_32))
						{
							PED::REMOVE_PED_FROM_GROUP(iLocal_32);
						}
					}
				}
			}
		}
		else
		{
			switch (iLocal_708)
			{
				case 0:
					if (PED::IS_PED_IN_GROUP(iLocal_32))
					{
						PED::REMOVE_PED_FROM_GROUP(iLocal_32);
					}
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_32, vLocal_171, 1.25f, -1, 0.25f, 1, 40000f);
					STREAMING::_REQUEST_SCENARIO_TYPE(joaat("PROP_HITCHINGPOST"), 4194304, 0, 0);
					iLocal_708 = 1;
					break;
				case 1:
					if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_32, true, false), vLocal_171) < 12f || !__LIB_0__::func_163(iLocal_32, 713668775))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_32, vLocal_171, 1f, -1, 0.25f, 1, 40000f);
						__LIB_5__::func_107(&uLocal_174);
						iLocal_708 = 2;
					}
					break;
				case 2:
					if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_32, true, false), vLocal_171) < 2f || !__LIB_0__::func_163(iLocal_32, 713668775))
					{
						PED::SET_PED_CONFIG_FLAG(iLocal_32, 167, false);
						__LIB_5__::func_107(&uLocal_174);
						iLocal_708 = 3;
					}
					break;
				case 3:
					if (!PED::IS_PED_ON_MOUNT(iLocal_32) || __LIB_5__::func_51(&uLocal_174) > 10f)
					{
						iLocal_708 = 4;
					}
					if (__LIB_0__::func_272(iLocal_93, 0))
					{
						vVar2 = { ENTITY::GET_ENTITY_COORDS(iLocal_93, true, false) };
					}
					if (!__LIB_0__::func_163(iLocal_32, -850912737))
					{
						if (!TASK::IS_SCENARIO_OCCUPIED(vLocal_50, 2f, false) && BUILTIN::VDIST(vVar2, vLocal_50) > 2f)
						{
							iLocal_687 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(vLocal_50, joaat("PROP_HITCHINGPOST"), 1f, 1, false);
						}
						else if (!TASK::IS_SCENARIO_OCCUPIED(vLocal_53, 2f, false) && BUILTIN::VDIST(vVar2, vLocal_53) > 2f)
						{
							iLocal_687 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(vLocal_53, joaat("PROP_HITCHINGPOST"), 1f, 1, false);
						}
						if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_687) && TASK::_GET_PED_USING_SCENARIO_POINT(iLocal_687) == 0)
						{
							TASK::TASK_HITCH_ANIMAL(iLocal_32, iLocal_687, 262144);
						}
					}
					else if (TASK::_GET_PED_USING_SCENARIO_POINT(iLocal_687) == Global_35 || BUILTIN::VDIST(vVar2, TASK::_GET_SCENARIO_POINT_COORDS(iLocal_687, true)) < 2f)
					{
						TASK::CLEAR_PED_TASKS(iLocal_32, true, false);
						iLocal_687 = 0;
					}
					break;
				case 4:
					if (!__LIB_0__::func_163(iLocal_32, -850912737))
					{
						if (!__LIB_0__::func_71(iLocal_32))
						{
							if (__LIB_0__::func_266(iLocal_32, Global_36, 6f, 1, 1))
							{
								func_345(uParam0, 3);
								TASK::CLEAR_PED_TASKS(iLocal_32, true, false);
								TASK::OPEN_SEQUENCE_TASK(&iVar0);
								TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, sLocal_169, 0, 2058, -1, 0, 0, -1);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_61, 1f, -1, 0.25f, 0, fLocal_64);
								TASK::CLOSE_SEQUENCE_TASK(iVar0);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_32, iVar0);
								TASK::CLEAR_SEQUENCE_TASK(&iVar0);
								TASK::TASK_LOOK_AT_ENTITY(iLocal_32, Global_35, -1, 0, 51, 0);
								STREAMING::_0x4EDDD9E9CA5AF985(joaat("PROP_HITCHINGPOST"));
								iLocal_708 = 5;
							}
							else if (!bLocal_92 && !PED::IS_PED_ON_MOUNT(Global_35))
							{
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_32, Global_35, -1, -1f, -1f, -1f);
								TASK::TASK_LOOK_AT_ENTITY(iLocal_32, Global_35, -1, 0, 51, 0);
								func_345(uParam0, 15);
								__LIB_12__::func_883(uParam0, sLocal_242, 1, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
								bLocal_92 = true;
							}
						}
						else if (PED::IS_PED_ON_MOUNT(iLocal_32))
						{
							if (!__LIB_0__::func_163(iLocal_32, 501393341))
							{
								if (__LIB_0__::func_94(iLocal_32, vLocal_50, 1) < 2f)
								{
									iVar5 = 262144;
								}
								else
								{
									iVar5 = 0;
								}
								TASK::TASK_DISMOUNT_ANIMAL(iLocal_32, iVar5, 0, 0, 0, 0);
							}
						}
					}
					break;
				case 5:
					if (!bLocal_314)
					{
						if (!PED::IS_PED_ON_MOUNT(Global_35))
						{
							if (!__LIB_6__::func_912(Global_35, iLocal_32, sLocal_169, 1112014848 /* Float: 50f */))
							{
								if (__LIB_0__::func_94(iLocal_32, vLocal_50, 1) < 8f)
								{
									if (__LIB_12__::func_876(uParam0, "RCHRB_HANGBAK", 0))
									{
										bLocal_314 = true;
									}
								}
							}
						}
					}
					else if (!bLocal_371)
					{
						if ((((__LIB_1__::func_25(Global_1347702[134 /*49*/].f_15, 1) && __LIB_1__::func_185(23)) && __LIB_1__::func_185(19)) && __LIB_1__::func_185(20)) && __LIB_1__::func_185(24))
						{
							if (!__LIB_6__::func_904())
							{
								if (__LIB_12__::func_876(uParam0, "RCHRB_GRAYS3", 0))
								{
									bLocal_371 = true;
								}
							}
						}
					}
					if (!bLocal_522)
					{
						if ((((!__LIB_0__::func_71(Global_35) && !__LIB_0__::func_71(iLocal_32)) && !func_216(Global_35)) && !func_216(iLocal_32)) && BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_32, true, false), Global_36) < 5f)
						{
							func_860(sLocal_169);
							bLocal_522 = true;
						}
					}
					else
					{
						func_861();
					}
					if (!bLocal_524)
					{
						if (__LIB_0__::func_665(iLocal_32, iLocal_31, 1, 1) < 17f)
						{
							TASK::TASK_LOOK_AT_ENTITY(iLocal_32, iLocal_31, -1, 0, 51, 0);
							bLocal_524 = true;
						}
					}
					if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_32, 0))
					{
						if (!TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(iLocal_32))
						{
							if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_32, true, false), vLocal_171) < 3f)
							{
								if ((BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_32, true, false), Global_36) > 5f && !func_216(Global_35)) && !__LIB_6__::func_912(Global_35, iLocal_32, sLocal_169, 1112014848 /* Float: 50f */))
								{
									TASK::WAYPOINT_PLAYBACK_PAUSE(iLocal_32, 1, 0, 0);
								}
							}
						}
						else if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_32, true, false), Global_36) < 5f || func_216(Global_35))
						{
							if (!bLocal_524)
							{
								TASK::TASK_LOOK_AT_ENTITY(iLocal_32, iLocal_31, -1, 0, 51, 0);
								bLocal_524 = true;
							}
							TASK::WAYPOINT_PLAYBACK_RESUME(iLocal_32, false, -1, 0);
						}
					}
					else if (!bLocal_91)
					{
						if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_32, true, false), vLocal_171) > 3f)
						{
							TASK::OPEN_SEQUENCE_TASK(&iVar0);
							TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, sLocal_169, 0, 2058, -1, 0, 0, -1);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_61, 1f, -1, 0.25f, 0, fLocal_64);
							TASK::CLOSE_SEQUENCE_TASK(iVar0);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_32, iVar0);
							TASK::CLEAR_SEQUENCE_TASK(&iVar0);
						}
					}
					break;
			}
		}
	}
}

void func_374(float fParam0)
{
	if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_32, true, false), vLocal_79) < fParam0)
	{
		PED::_0xC6981AFF6D2A71C2(iLocal_32);
		PED::SET_PED_RESET_FLAG(iLocal_32, 94, true);
	}
}

void func_375()
{
	vector3 vVar0;
	float fVar3;
	if (bLocal_378)
	{
		return;
	}
	vVar0 = { 1238.826f, -1291.999f, 75.9677f };
	fVar3 = 136.0536f;
	if ((((((func_216(Global_35) && !func_216(iLocal_32)) && !PED::IS_PED_ON_MOUNT(iLocal_32)) && __LIB_0__::func_272(iLocal_31, 0)) && BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_31, true, false), Global_36) < 5f) && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_32)) && !CAM::IS_SPHERE_VISIBLE(vVar0, 1f))
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_32, vVar0, fVar3, true, false, true);
		bLocal_378 = true;
	}
}

void func_379()
{
	if (bLocal_523 || !bLocal_522)
	{
		return;
	}
	__LIB_1__::func_726(iLocal_32, 1);
	__LIB_1__::func_727(Global_35, 1);
	__LIB_5__::func_438(&uLocal_506);
	bLocal_523 = true;
}

void func_380()
{
	if (bLocal_370)
	{
		PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "COACHROB");
		bLocal_370 = false;
	}
}

void func_381()
{
	int iVar0;
	if (BUILTIN::VDIST(Global_36, vLocal_79) > 30f)
	{
		return;
	}
	iLocal_14[0] = joaat("DOOR_RHO_TRAIN_BACK_L");
	iLocal_14[1] = joaat("DOOR_RHO_TRAIN_BACK_MIDDLE");
	iLocal_14[2] = 1567970773;
	iLocal_14[3] = joaat("DOOR_RHO_TRAIN_FRONT_L");
	iLocal_14[4] = joaat("DOOR_RHO_TRAIN_FRONT_R");
	iLocal_14[5] = joaat("DOOR_RHO_TRAIN_LEFT");
	iLocal_14[6] = joaat("DOOR_RHO_TRAIN_OUTER_LEFT");
	iLocal_14[7] = joaat("DOOR_RHO_TRAIN_OUTER_RIGHT");
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!__LIB_0__::func_724(iLocal_14[iVar0]))
		{
			__LIB_0__::func_68(iLocal_14[iVar0], 0, 0);
		}
		else if (__LIB_2__::func_769(iLocal_14[iVar0]))
		{
			__LIB_1__::func_948(iLocal_14[iVar0], 0, 0, 0, 1, 0, 0, 0);
		}
		iVar0++;
	}
}

void func_382(var uParam0)
{
	var uVar0;
	var uVar1;
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_330))
	{
		if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_213) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_213, false)) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_213) > 0.300561f)
		{
			VOLUME::_DELETE_VOLUME(iLocal_330);
		}
	}
	if (iLocal_716 > 6 && iLocal_716 < 12)
	{
		PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(iLocal_31, 0, 1);
		PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(iLocal_32, 0, 1);
	}
	if (!bLocal_367)
	{
		if (iLocal_716 > 6)
		{
			if (__LIB_0__::func_272(iLocal_218, 0))
			{
				if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_218, iLocal_213))
				{
					if (!__LIB_0__::func_163(iLocal_218, -1146898486))
					{
						TASK::TASK_WANDER_STANDARD(iLocal_218, 40000f, 0);
						bLocal_367 = true;
					}
				}
			}
		}
	}
	switch (iLocal_716)
	{
		case 0:
			if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_330))
			{
				iLocal_330 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), vLocal_332, 0f, 0f, 0f, 0.8f, 0.8f, 4f);
			}
			if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_331))
			{
				iLocal_331 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLBOX"), 1225.671f, -1293.963f, 76.38541f, 0f, 0f, 47.48087f, 2.941854f, 1.289612f, 3.416344f);
			}
			func_876();
			iLocal_716 = 1;
			break;
		case 1:
			if (func_877())
			{
				iLocal_716 = 2;
			}
			break;
		case 2:
			if (func_878())
			{
				bLocal_90 = true;
				ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_213, "PBL_Base");
				iLocal_716 = 3;
			}
			break;
		case 3:
			if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_213, "PBL_Base"))
			{
				__LIB_6__::func_763(iLocal_213, "PBL_Base");
				ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_213, "PBL_Enter");
				iLocal_716 = 4;
			}
			break;
		case 4:
			if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_213, "PBL_Enter"))
			{
				if (func_216(iLocal_32))
				{
					if (__LIB_0__::func_665(iLocal_32, iLocal_31, 1, 1) < 6f)
					{
						bLocal_91 = true;
						if (func_216(Global_35))
						{
							PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, PLAYER::_0x0139637A3BFF8B6D(iLocal_31, &uVar1));
							func_379();
							TASK::TASK_ENTER_ANIM_SCENE(iLocal_32, iLocal_213, "CS_JosiahTrelawny", "PBL_Enter", 1.1f, 1, 0, 20000, -1082130432 /* Float: -1f */);
							iLocal_716 = 5;
						}
						else if (!__LIB_0__::func_163(iLocal_32, -875674219))
						{
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_32, Global_35, -1, -1f, -1f, -1f);
						}
					}
				}
			}
			break;
		case 5:
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_213, false) && ANIMSCENE::_0x1F0E401031E20146(iLocal_213, "PBL_Enter"))
			{
				iLocal_716 = 6;
			}
			break;
		case 6:
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_213, false) || ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_213) > 0.99f)
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_213, "pbl_idle_counter_01");
				VOLUME::_DELETE_VOLUME(iLocal_331);
				iLocal_716 = 7;
			}
			break;
		case 7:
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
			if (PED::_IS_PED_CARRYING(Global_35) || !func_216(Global_35))
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_31, 297, false);
				PED::SET_PED_CONFIG_FLAG(iLocal_31, 301, true);
			}
			else
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_31, 297, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_31, 301, false);
				func_879(&iLocal_31, &iLocal_608, 4.5f, &uLocal_669, 0f, 3, 0, 0, 1, 0, 0, 2, -1082130432 /* Float: -1f */);
			}
			if (!__LIB_0__::func_139(iLocal_385))
			{
				iLocal_385 = __LIB_2__::func_403("RCHRB_PAYTIP", joaat("INPUT_SHOP_SELL"), iLocal_31, 3, 0, 0, 0, 0, 3f, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
				__LIB_1__::func_522(iLocal_385, 18, 1, 1);
				__LIB_1__::func_522(iLocal_385, 17, 1, 1);
				__LIB_6__::func_697(iLocal_385, 0, 1);
				ENTITY::SET_ENTITY_CAN_BE_TARGETED_WITHOUT_LOS(iLocal_31, true);
				if (!MAP::DOES_BLIP_EXIST(iLocal_383))
				{
					iLocal_383 = MAP::_BLIP_ADD_FOR_ENTITY(-89429847, iLocal_31);
					MAP::_BLIP_SET_MODIFIER(iLocal_383, joaat("BLIP_MODIFIER_FRIENDLY_OBJECTIVE"));
					func_345(uParam0, 4);
					__LIB_0__::func_745(iLocal_26);
				}
			}
			else if (!__LIB_2__::func_364(iLocal_31, 0, 0, 0))
			{
				__LIB_1__::func_382(iLocal_385, 0, 1);
			}
			else
			{
				__LIB_1__::func_382(iLocal_385, 1, 1);
				if (PED::_IS_PED_CARRYING(Global_35) || !func_216(Global_35))
				{
					if (__LIB_0__::func_572(iLocal_385, 0))
					{
						__LIB_1__::func_221(iLocal_385, 0, 1);
					}
				}
				else if (!__LIB_0__::func_572(iLocal_385, 0))
				{
					__LIB_1__::func_221(iLocal_385, 1, 1);
				}
				if (__LIB_1__::func_732(iLocal_385, 1))
				{
					if (__LIB_1__::func_750(&uVar0))
					{
						__LIB_4__::func_69();
					}
					__LIB_0__::func_769();
					__LIB_1__::func_281(&iLocal_385, 1, 1);
					__LIB_0__::func_325(&iLocal_383);
					MISC::_0xE98D55C5983F2509(iLocal_31);
					ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_213, "pbl_Arthur_Gives_Money");
					iLocal_716 = 8;
					return;
				}
			}
			if (iLocal_379 == 1)
			{
				if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_213, "pbl_idle_counter_02"))
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_213, false) || ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_213) > 0.99f)
					{
						__LIB_6__::func_763(iLocal_213, "pbl_idle_counter_02");
						ANIMSCENE::_0xAE6ADA8FE7E84ACC(iLocal_213, "pbl_idle_counter_02");
						ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_213, "pbl_idle_counter_01");
						iLocal_379 = 2;
					}
				}
			}
			else if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_213, "pbl_idle_counter_01"))
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_213, false) || ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_213) > 0.99f)
				{
					__LIB_6__::func_763(iLocal_213, "pbl_idle_counter_01");
					ANIMSCENE::_0xAE6ADA8FE7E84ACC(iLocal_213, "pbl_idle_counter_01");
					ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_213, "pbl_idle_counter_02");
					iLocal_379 = 1;
				}
			}
			break;
		case 8:
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			if (!ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_213, "pbl_Arthur_Gives_Money") && !ANIMSCENE::_0x0DF57F86FE71DBE5(iLocal_213, "pbl_Arthur_Gives_Money"))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_213, "pbl_Arthur_Gives_Money");
			}
			if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_213, "pbl_Arthur_Gives_Money"))
			{
				TASK::TASK_ENTER_ANIM_SCENE(Global_35, iLocal_213, "player_zero", "pbl_Arthur_Gives_Money", 1f, 1, 0, 20000, -1082130432 /* Float: -1f */);
				iLocal_716 = 9;
			}
			break;
		case 9:
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_213, false))
			{
				ANIMSCENE::_0xAE6ADA8FE7E84ACC(iLocal_213, "pbl_idle_counter_02");
				ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_213, "pbl_idle_counter_01");
				iLocal_716 = 10;
			}
			break;
		case 10:
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_213, false) || ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_213) > 0.97f)
			{
				iLocal_716 = 12;
			}
			break;
		case 12:
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			break;
	}
}

void func_386()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_31))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_31) && !ENTITY::IS_ENTITY_AT_ENTITY(Global_35, iLocal_31, 10f, 10f, 10f, false, true, 0))
	{
		__LIB_4__::func_932(30, 1);
		if (__LIB_2__::func_763(iLocal_30, 1))
		{
			__LIB_2__::func_753(iLocal_30, 0, 1, 0, 0);
		}
		func_891();
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_31);
	}
}

void func_391(var uParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	if (__LIB_0__::func_272(iLocal_32, 1))
	{
		if (__LIB_0__::func_71(iLocal_32))
		{
			if (!bLocal_85)
			{
				if (BUILTIN::VDIST(vLocal_50, ENTITY::GET_ENTITY_COORDS(iLocal_32, true, false)) > 2f)
				{
					if (!bLocal_377)
					{
						bLocal_377 = true;
					}
					if (!__LIB_6__::func_904())
					{
						if (__LIB_0__::func_94(iLocal_32, Global_36, 1) < 15f)
						{
							if (bLocal_84)
							{
								if (__LIB_12__::func_876(uParam0, "RCHRB_LETSGO", 0))
								{
									bLocal_85 = true;
								}
							}
						}
						else
						{
							bLocal_85 = true;
						}
					}
				}
			}
			if (BUILTIN::VDIST(vLocal_50, ENTITY::GET_ENTITY_COORDS(iLocal_32, true, false)) < 15f)
			{
				PED::SET_PED_RESET_FLAG(iLocal_32, 28, true);
			}
			if (!bLocal_693)
			{
				if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_32, true, false), __LIB_6__::func_758(iLocal_23)) > 20f)
				{
					if (PED::IS_PED_ON_MOUNT(Global_35))
					{
						iVar3 = __LIB_0__::func_398(0);
						iVar4 = __LIB_2__::func_825(Global_35);
					}
					if ((ENTITY::DOES_ENTITY_EXIST(iVar3) && ENTITY::DOES_ENTITY_EXIST(iVar4)) && iVar3 == iVar4)
					{
						if (BUILTIN::VDIST(vLocal_50, ENTITY::GET_ENTITY_COORDS(iLocal_32, true, false)) > 3f)
						{
							fVar2 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iLocal_32, true, false));
							if (fVar2 < 20f || fVar2 > 40f)
							{
								TASK::CLEAR_PED_TASKS(iLocal_32, true, false);
								iVar1 = PED::GET_MOUNT(iLocal_32);
								if (__LIB_0__::func_272(iVar1, 1) && __LIB_0__::func_163(iVar1, 1435919172))
								{
									TASK::CLEAR_PED_TASKS(iVar1, true, false);
								}
								func_393(1);
								bLocal_693 = true;
							}
						}
					}
				}
			}
			else if (!bLocal_298)
			{
				if (!bLocal_428)
				{
					__LIB_1__::func_714();
					__LIB_3__::func_456(iLocal_32);
					iLocal_427 = PED::CREATE_GROUP(2);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_32, true);
					PED::SET_PED_CONFIG_FLAG(iLocal_32, 279, true);
					PED::SET_PED_AS_GROUP_LEADER(iLocal_32, iLocal_427, false);
					PED::SET_GROUP_FORMATION(iLocal_427, 5);
					PED::ADD_CUSTOM_FORMATION_LOCATION(iLocal_427, 0f, -2.6f, 0f, -1);
					PLAYER::_0xAC22AA6DF4D1C1DE(PLAYER::PLAYER_ID(), iLocal_32, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 4, 2, 0);
					PLAYER::_0xDD33A82352C4652F(PLAYER::PLAYER_ID(), iLocal_32, 1);
					PED::_0x9BBEAF8B0C007F1E(iLocal_32, 0);
					bLocal_428 = true;
				}
				__LIB_13__::func_377(iLocal_32, 0, &iLocal_427, cLocal_167, func_896(), &bLocal_428, &uLocal_429, 0, 10, 0, 1, iLocal_93);
			}
		}
		else if (!__LIB_0__::func_163(iLocal_32, 1868526510))
		{
			if (__LIB_0__::func_272(iLocal_33, 0))
			{
				if (PED::_GET_RIDER_OF_MOUNT(iLocal_33, false) == 0)
				{
					if (!__LIB_0__::func_163(iLocal_32, 242628503) && bLocal_177)
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar0);
						TASK::TASK_MOUNT_ANIMAL(0, iLocal_33, 20000, -1, 1f, 1, 0, 0);
						TASK::TASK_ACHIEVE_HEADING(0, fLocal_65, 0);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_109, 1f, -1, 0.25f, 0, 40000f);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
						TASK::CLOSE_SEQUENCE_TASK(iVar0);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_32, iVar0);
						TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					}
				}
				else if (PED::_GET_RIDER_OF_MOUNT(iLocal_33, false) == Global_35)
				{
					if (__LIB_2__::func_215(iLocal_32, Global_35, 1, 30f, 0))
					{
						if (!bLocal_177)
						{
							if (__LIB_12__::func_876(uParam0, "RCHRB_H", 0))
							{
								bLocal_177 = true;
							}
						}
						if (!__LIB_0__::func_163(iLocal_32, -875674219))
						{
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_32, Global_35, -1, -1f, -1f, -1f);
						}
					}
				}
			}
		}
	}
}

bool func_392()
{
	int iVar0;
	int iVar1;
	if ((__LIB_0__::func_94(Global_35, vLocal_293, 1) < 12f && __LIB_0__::func_94(iLocal_32, vLocal_289, 1) < 3f) || (((__LIB_2__::func_618(&uLocal_299) && __LIB_5__::func_51(&uLocal_299) > 10f) && !__LIB_5__::func_463()) && !AUDIO::_0x54B187F111D9C6F8(iLocal_32, 0)))
	{
		if (__LIB_2__::func_618(&uLocal_299))
		{
			__LIB_2__::func_608(&uLocal_299);
		}
		bLocal_298 = false;
		bLocal_297 = false;
		return true;
	}
	if (!bLocal_297)
	{
		if (func_900(Global_35))
		{
			if (__LIB_5__::func_463())
			{
				__LIB_5__::func_20(1, 0);
			}
			__LIB_5__::func_107(&uLocal_299);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_293, 1.25f, 20000, 4f, 1, 40000f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_293, 1f, 20000, 0.5f, 0, fLocal_296);
			TASK::TASK_STAND_STILL(0, -1);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(Global_35, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			bLocal_297 = true;
		}
	}
	else
	{
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	}
	if (!bLocal_298)
	{
		if (func_900(iLocal_32))
		{
			if (__LIB_5__::func_463())
			{
				__LIB_5__::func_20(1, 0);
			}
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_289, 1.25f, 20000, 4f, 1, 40000f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_289, 1f, 20000, 0.5f, 0, fLocal_292);
			TASK::TASK_STAND_STILL(0, -1);
			TASK::CLOSE_SEQUENCE_TASK(iVar1);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_32, iVar1);
			TASK::CLEAR_SEQUENCE_TASK(&iVar1);
			bLocal_298 = true;
		}
	}
	return false;
}

void func_393(bool bParam0)
{
	if (bParam0)
	{
		AUDIO::STOP_PED_SPEAKING(iLocal_32, false);
		PED::_0x1E017404784AA6A3(iLocal_32, joaat("RCHRB_RIDE2"));
		AUDIO::_0x0D7FD6A55FD63AEF(25, 3, bParam0);
		AUDIO::_0x0D7FD6A55FD63AEF(21, 3, bParam0);
		AUDIO::_0x0D7FD6A55FD63AEF(19, 3, bParam0);
		AUDIO::_0x0D7FD6A55FD63AEF(28, 3, bParam0);
		AUDIO::_0x0D7FD6A55FD63AEF(14, 3, bParam0);
		AUDIO::_0x0D7FD6A55FD63AEF(6, 3, bParam0);
	}
	else
	{
		AUDIO::STOP_PED_SPEAKING(iLocal_32, true);
		PED::_0x2B4CE170DE09F346(iLocal_32, joaat("RCHRB_RIDE2"));
		AUDIO::_0x660A8F876DF1D4F8(25);
		AUDIO::_0x660A8F876DF1D4F8(21);
		AUDIO::_0x660A8F876DF1D4F8(19);
		AUDIO::_0x660A8F876DF1D4F8(28);
		AUDIO::_0x660A8F876DF1D4F8(14);
		AUDIO::_0x660A8F876DF1D4F8(6);
	}
}

void func_394()
{
	TASK::REMOVE_WAYPOINT_RECORDING("rcm_chrb1_1");
	TASK::REMOVE_WAYPOINT_RECORDING("rcm_chrb1_PO1");
	TASK::REMOVE_WAYPOINT_RECORDING("rcm_chrb1_PO2");
	TASK::REMOVE_WAYPOINT_RECORDING("rcm_chrb1_PO2B");
}

void func_395(var uParam0)
{
	switch (iLocal_712)
	{
		case 0:
			if (iLocal_709 < 1)
			{
				if (__LIB_0__::func_665(Global_35, iLocal_32, 1, 1) > 10f)
				{
					if (__LIB_6__::func_903("RCHRB_5"))
					{
						AUDIO::STOP_SCRIPTED_CONVERSATION("RCHRB_5", true, false);
					}
					iLocal_712 = 1;
				}
			}
			break;
		case 1:
			if (iLocal_709 < 1)
			{
				if (!__LIB_6__::func_904())
				{
					if (__LIB_12__::func_876(uParam0, "RCHRB_PA1", 0))
					{
						iLocal_712 = 2;
					}
				}
			}
			break;
		case 2:
			if (iLocal_709 < 2)
			{
				if (__LIB_6__::func_702(32))
				{
					if (!__LIB_6__::func_904())
					{
						if (__LIB_0__::func_665(Global_35, iLocal_32, 1, 1) < 30f)
						{
							if (__LIB_12__::func_876(uParam0, "RCHRB_PA2", 0))
							{
								iLocal_712 = 3;
							}
						}
					}
				}
			}
			break;
	}
}

bool func_396(int iParam0)
{
	return ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, 1459.809f, -809.019f, 48.99136f, 1355.078f, -804.868f, 75.74574f, 50f, false, true, 0);
}

void func_397(var uParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	bool bVar9;
	int iVar10;
	int iVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	if (!__LIB_0__::func_272(iLocal_32, 1))
	{
		return;
	}
	if (__LIB_6__::func_702(1) || __LIB_6__::func_702(32768))
	{
		return;
	}
	func_902();
	if (__LIB_6__::func_702(512))
	{
		if (func_903() || bLocal_194)
		{
			if (!__LIB_2__::func_343(iLocal_188, iLocal_384, 0) || !__LIB_2__::func_343(iLocal_186, iLocal_384, 0))
			{
				__LIB_6__::func_705(1024);
			}
			__LIB_6__::func_705(32768);
		}
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iLocal_32, true, false) };
	vVar6 = { 2.7f, 4.6f, 0f };
	bVar9 = false;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_384))
	{
		vVar3 = { ENTITY::GET_ENTITY_COORDS(iLocal_384, true, false) };
	}
	iVar11 = 27656;
	if (bLocal_130 || (iLocal_709 == 20 && !bLocal_128))
	{
		if (!__LIB_6__::func_904())
		{
			if (!bLocal_131)
			{
				if (BUILTIN::VDIST(vVar0, Global_36) < 30f)
				{
					if (__LIB_12__::func_876(uParam0, "RCHRB_CH2C", 0))
					{
						TASK::CLEAR_PED_TASKS(iLocal_32, true, false);
						TASK::TASK_LOOK_AT_ENTITY(iLocal_32, Global_35, -1, 0, 51, 0);
						bLocal_131 = true;
					}
				}
				else
				{
					bLocal_131 = true;
				}
			}
			else if (!bLocal_133)
			{
				if (!bLocal_128)
				{
					__LIB_12__::func_883(uParam0, "RCHRB1_OBJ3", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				}
				bLocal_133 = true;
			}
		}
		return;
	}
	if ((iLocal_709 > 2 && iLocal_709 < 7) && !__LIB_10__::func_598())
	{
		if (!bLocal_287)
		{
			if (__LIB_0__::func_94(iLocal_384, Global_36, 1) < 30f)
			{
				__LIB_0__::func_45("CHRB1_CLO_HELP", 10000, 0, 0, 0, 1);
				bLocal_287 = true;
			}
		}
	}
	switch (iLocal_709)
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(Global_1392388.f_5))
			{
				return;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_384))
			{
				iLocal_384 = Global_1392388.f_5;
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_384, false);
			}
			func_905(uParam0);
			if (BUILTIN::VDIST(vVar3, vLocal_121) < 27f)
			{
				PLAYER::_0xAC22AA6DF4D1C1DE(PLAYER::PLAYER_ID(), iLocal_32, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 4, 2, 0);
				__LIB_6__::func_826(iLocal_384, 1);
				func_322();
				__LIB_12__::func_875(uParam0, iLocal_188, "RCHRB_SINGER", 1);
				__LIB_12__::func_875(uParam0, iLocal_189, "RCHRB1_PSNGR", 1);
				__LIB_12__::func_875(uParam0, iLocal_186, "RCHRB1_DRIVER", 1);
				__LIB_12__::func_875(uParam0, iLocal_187, "CHRC2_SHOTGUN", 1);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_32, iLocal_188, -1, 0, 51, 0);
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_32, cLocal_167, 0, 27656, -1, 0, 0, -1);
				PED::SET_PED_CONFIG_FLAG(iLocal_32, 72, true);
				if (__LIB_0__::func_272(iLocal_33, 0))
				{
					PED::SET_PED_CONFIG_FLAG(iLocal_33, 72, true);
				}
				__LIB_5__::func_107(&uLocal_124);
				iLocal_709 = 1;
			}
			break;
		case 1:
			func_905(uParam0);
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_32, 0))
			{
				TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_32, 1.25f, 0, -1082130432 /* Float: -1f */, 0);
			}
			else
			{
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_32, cLocal_167, 0, 27656, -1, 0, 0, -1);
			}
			if (BUILTIN::VDIST(vLocal_121, vVar0) < 15f)
			{
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING_AT_OFFSET(iLocal_32, sLocal_168, vVar6.x, 0, iVar11, -1, 0);
				iLocal_709 = 2;
			}
			break;
		case 2:
			func_905(uParam0);
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_32, 0))
			{
				if (TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_32) < 17)
				{
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_32, 1.75f, 0, -1082130432 /* Float: -1f */, 0);
				}
				else
				{
					__LIB_3__::func_456(iLocal_32);
					if (PED::DOES_GROUP_EXIST(iLocal_427))
					{
						PED::REMOVE_GROUP(iLocal_427);
					}
					__LIB_0__::func_745(iLocal_26);
					bLocal_406 = true;
					func_345(uParam0, 8);
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING_AT_OFFSET(iLocal_32, sLocal_168, vVar6.x, 0, iVar11, -1, 0);
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_32, 2.5f, 0, -1082130432 /* Float: -1f */, 0);
					if (!bLocal_132)
					{
						if (PLAYER::_0xE24C64D9ADED2EF5(PLAYER::PLAYER_ID(), iLocal_32))
						{
							PLAYER::_0x0C6B89876262A99D(PLAYER::PLAYER_ID(), iLocal_32);
						}
						bLocal_132 = true;
					}
					iLocal_709 = 3;
				}
			}
			else
			{
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING_AT_OFFSET(iLocal_32, sLocal_168, vVar6.x, 0, iVar11, -1, 0);
			}
			break;
		case 3:
			func_905(uParam0);
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_32, 0))
			{
				TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_32, 2.5f, 0, -1082130432 /* Float: -1f */, 0);
			}
			else
			{
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING_AT_OFFSET(iLocal_32, sLocal_168, vVar6.x, 0, iVar11, -1, 0);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_384))
			{
				if (__LIB_6__::func_912(iLocal_32, iLocal_384, sLocal_168, 1112014848 /* Float: 50f */) || BUILTIN::VDIST(vVar3, vVar0) < 10f)
				{
					__LIB_5__::func_107(&uLocal_124);
					iLocal_709 = 4;
					TASK::TASK_LOOK_AT_ENTITY(iLocal_32, iLocal_188, -1, 2096, 41, 0);
				}
			}
			break;
		case 4:
			func_323(uParam0, 0);
			bVar9 = true;
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_384))
			{
				fVar12 = __LIB_6__::func_721(iLocal_32, iLocal_384, vVar6);
				if (fVar12 > 2.5f)
				{
					fVar12 = 2.5f;
				}
				if ((ENTITY::GET_ENTITY_SPEED(iLocal_384) < 2.7f && __LIB_6__::func_912(iLocal_32, iLocal_384, sLocal_168, 1112014848 /* Float: 50f */)) && BUILTIN::VDIST(vVar3, vVar0) > 6f)
				{
					fVar12 = 0f;
				}
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_32, 0))
				{
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_32, fVar12, 0, -1082130432 /* Float: -1f */, 0);
				}
				else
				{
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING_AT_OFFSET(iLocal_32, sLocal_168, vVar6.x, 0, iVar11, -1, 0);
				}
			}
			TASK::TASK_LOOK_AT_ENTITY(iLocal_186, iLocal_32, -1, 0, 51, 0);
			TASK::TASK_LOOK_AT_ENTITY(iLocal_187, iLocal_32, -1, 0, 51, 0);
			if (__LIB_0__::func_272(iLocal_186, 1))
			{
				__LIB_6__::func_717(iLocal_384, 1);
				__LIB_6__::func_718(iLocal_384, 1);
			}
			__LIB_5__::func_107(&uLocal_124);
			iLocal_709 = 5;
			break;
		case 5:
			func_323(uParam0, 0);
			bVar9 = true;
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_384))
			{
				fVar13 = __LIB_6__::func_721(iLocal_32, iLocal_384, vVar6);
				if (fVar13 > 2.5f)
				{
					fVar13 = 2.5f;
				}
				if ((ENTITY::GET_ENTITY_SPEED(iLocal_384) < 2.7f && __LIB_6__::func_912(iLocal_32, iLocal_384, sLocal_168, 1112014848 /* Float: 50f */)) && __LIB_0__::func_665(iLocal_32, iLocal_384, 1, 1) > 6f)
				{
					fVar13 = 0f;
				}
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_32, 0))
				{
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_32, fVar13, 0, -1082130432 /* Float: -1f */, 0);
				}
				else
				{
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING_AT_OFFSET(iLocal_32, sLocal_168, vVar6.x, 0, iVar11, -1, 0);
				}
			}
			if (!__LIB_6__::func_702(32))
			{
				if (BUILTIN::VDIST(vVar3, vLocal_183) < 15f)
				{
					__LIB_5__::func_107(&uLocal_124);
					iLocal_709 = 6;
				}
			}
			else if (__LIB_6__::func_904())
			{
				AUDIO::_0x36559148B78853B3(0, 0, 0);
			}
			else if (__LIB_12__::func_876(uParam0, "RCHRB_CH2B", 0))
			{
				__LIB_3__::func_319(iLocal_344);
				__LIB_3__::func_319(iLocal_340);
				__LIB_3__::func_319(iLocal_341);
				__LIB_3__::func_319(iLocal_338);
				__LIB_3__::func_319(iLocal_343);
				__LIB_3__::func_319(iLocal_342);
				__LIB_3__::func_319(iLocal_339);
				__LIB_5__::func_107(&uLocal_124);
				iLocal_709 = 17;
			}
			break;
		case 6:
			func_323(uParam0, 1);
			bVar9 = true;
			__LIB_12__::func_997(uParam0, func_61(4), func_61(5), 4, 5, 0);
			if (__LIB_0__::func_272(iLocal_186, 1))
			{
				TASK::CLEAR_PED_TASKS(iLocal_186, true, false);
				__LIB_6__::func_770(iLocal_384);
				__LIB_6__::func_717(iLocal_384, 1);
				__LIB_6__::func_718(iLocal_384, 1);
				VEHICLE::_0x3053064F909B5F42(iLocal_384, 1);
			}
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_384))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_384);
			}
			PED::SET_PED_SEEING_RANGE(iLocal_186, 20f);
			PED::SET_PED_SEEING_RANGE(iLocal_187, 20f);
			PED::SET_PED_SEEING_RANGE(iLocal_188, 20f);
			__LIB_6__::func_705(8);
			func_315(7);
			if (!bLocal_209)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_384))
				{
					fVar14 = __LIB_6__::func_721(iLocal_32, iLocal_384, vVar6);
					if (fVar14 > 2.5f)
					{
						fVar14 = 2.5f;
					}
					if ((ENTITY::GET_ENTITY_SPEED(iLocal_384) < 2.7f && __LIB_6__::func_912(iLocal_32, iLocal_384, sLocal_168, 1112014848 /* Float: 50f */)) && __LIB_0__::func_665(iLocal_32, iLocal_384, 1, 1) > 5f)
					{
						fVar14 = 0f;
					}
					if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_32, 0))
					{
						TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_32, fVar14, 0, -1082130432 /* Float: -1f */, 0);
					}
				}
			}
			__LIB_5__::func_107(&uLocal_124);
			Global_1392388.f_3 = iLocal_32;
			bLocal_269 = true;
			iLocal_709 = 7;
			break;
		case 7:
			func_323(uParam0, 1);
			bVar9 = true;
			__LIB_5__::func_107(&uLocal_124);
			iLocal_709 = 8;
			break;
		case 8:
			if (bLocal_350)
			{
				if (!bLocal_699)
				{
					if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_342, false))
					{
						if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_342) >= 0.06f)
						{
							if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_700))
							{
								iLocal_700 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1500.99f, -1063.441f, 51.10073f, 0f, 0f, 0f, 6.819448f, 8.226008f, 7.932215f, "v_BackWagDetect");
							}
							if (!__LIB_0__::func_163(iLocal_187, 242628503))
							{
								WEAPON::_GIVE_WEAPON_TO_PED_2(iLocal_187, joaat("WEAPON_UNARMED"), -1, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
								WEAPON::SET_CURRENT_PED_WEAPON(iLocal_187, joaat("WEAPON_UNARMED"), true, 0, false, false);
								TASK::OPEN_SEQUENCE_TASK(&iVar10);
								TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
								TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 32);
								TASK::TASK_GO_STRAIGHT_TO_COORD(0, 1499.95f, -1066.16f, 50.9f, 1f, -1, 40000f, 1056964608 /* Float: 0.5f */, 0);
								__LIB_2__::func_915(0, joaat("WORLD_HUMAN_SMOKE"), 1499.95f, -1066.16f, 50.9f, 6.9f, -1, 1, 0, 0, -1082130432 /* Float: -1f */);
								TASK::CLOSE_SEQUENCE_TASK(iVar10);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_187, iVar10);
								TASK::CLEAR_SEQUENCE_TASK(&iVar10);
								iLocal_191 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), iLocal_187);
								MAP::_BLIP_SET_MODIFIER(iLocal_191, -662251075);
								bLocal_699 = true;
							}
						}
					}
				}
				if (bLocal_699)
				{
					if (func_912(4f) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_700, true, 0))
					{
						__LIB_14__::func_117(iLocal_187, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 3, 1, 1);
						TASK::CLEAR_PED_TASKS(iLocal_187, true, false);
						AUDIO::_0x36559148B78853B3(1, 0, 0);
						__LIB_12__::func_875(uParam0, iLocal_187, "CHRC2_SHOTGUN", 1);
						if (__LIB_12__::func_876(uParam0, "RCHRB_SG2C", 0))
						{
							TASK::TASK_LOOK_AT_ENTITY(iLocal_187, Global_35, -1, 2, 41, 1);
							PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_187, 1, false);
							PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_187, 3, true);
							iLocal_709 = 13;
							bLocal_698 = true;
							return;
						}
					}
				}
			}
			func_323(uParam0, 1);
			func_914();
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_342, false))
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_342) >= 0.645242f)
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(iLocal_187, joaat("WEAPON_UNARMED"), -1, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
					WEAPON::SET_CURRENT_PED_WEAPON(iLocal_187, joaat("WEAPON_UNARMED"), true, 0, false, false);
					TASK::OPEN_SEQUENCE_TASK(&iVar10);
					TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
					TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 32);
					__LIB_2__::func_915(0, joaat("WORLD_HUMAN_PEE"), 1511f, -1075.067f, 48.7594f, -105.68f, -1, 1, 0, 0, -1082130432 /* Float: -1f */);
					TASK::CLOSE_SEQUENCE_TASK(iVar10);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_187, iVar10);
					TASK::CLEAR_SEQUENCE_TASK(&iVar10);
					__LIB_5__::func_107(&uLocal_124);
					iLocal_709 = 9;
				}
			}
			break;
		case 9:
			func_323(uParam0, 1);
			func_914();
			iLocal_190 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), iLocal_186);
			MAP::_BLIP_SET_MODIFIER(iLocal_190, -662251075);
			iLocal_191 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), iLocal_187);
			MAP::_BLIP_SET_MODIFIER(iLocal_191, -662251075);
			iLocal_192 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), iLocal_188);
			MAP::_BLIP_SET_MODIFIER(iLocal_192, -662251075);
			if (!bLocal_128)
			{
				func_345(uParam0, 10);
				bLocal_406 = false;
				bLocal_407 = true;
			}
			__LIB_5__::func_107(&uLocal_124);
			PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "stealth", 1f, -1);
			iLocal_709 = 10;
			break;
		case 10:
			func_323(uParam0, 1);
			func_914();
			if (!__LIB_4__::func_68("RCHRB1_LOOT_S", 1))
			{
				__LIB_5__::func_107(&uLocal_124);
				iLocal_709 = 11;
			}
			break;
		case 11:
			func_323(uParam0, 1);
			func_914();
			if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_359))
			{
				iLocal_359 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1496.221f, -1073.289f, 51f, 0f, 0f, 0f, 5.189354f, 12.93579f, 5f, "m_volDetection");
			}
			if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_360))
			{
				iLocal_360 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1500.006f, -1075.187f, 51f, 0f, 0f, 0f, 5.189354f, 7.525564f, 5f, "m_volDetection2");
			}
			if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_35, 1488.502f, -1076.035f, 56.00109f, 1499.453f, -1076.366f, 50.157f, 17.75f, false, true, 0) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_359, true, 0)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_360, true, 0))
			{
				PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "stealth", 0f, -1);
				PED::_0x411189E51B8020BA(Global_35, "stealth");
			}
			else
			{
				PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "stealth", 1f, -1);
			}
			if (__LIB_2__::func_618(&uLocal_197))
			{
				if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_359, true, 0) && !ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_360, true, 0))
				{
					__LIB_2__::func_608(&uLocal_197);
				}
				if (__LIB_5__::func_51(&uLocal_197) > 3f)
				{
					if (__LIB_2__::func_215(iLocal_186, Global_35, 1, 40f, 0))
					{
						if ((ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_359, true, 0) && ENTITY::GET_ENTITY_SPEED(Global_35) < 0.5f) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_360, true, 0) && ENTITY::GET_ENTITY_SPEED(Global_35) < 0.5f))
						{
							AUDIO::_0x36559148B78853B3(1, 0, 0);
							__LIB_12__::func_875(uParam0, iLocal_186, "RCHRB1_DRIVER", 1);
							if (__LIB_12__::func_876(uParam0, "RCHRB_SP1", 0))
							{
								TASK::TASK_LOOK_AT_ENTITY(iLocal_186, Global_35, -1, 3120, 41, 0);
								iLocal_709 = 18;
								return;
							}
						}
					}
				}
				else if (__LIB_5__::func_51(&uLocal_197) > 6f)
				{
					if (__LIB_2__::func_215(iLocal_188, Global_35, 1, 40f, 0))
					{
						if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_359, true, 0) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_360, true, 0))
						{
							AUDIO::_0x36559148B78853B3(1, 0, 0);
							__LIB_12__::func_875(uParam0, iLocal_186, "RCHRB1_DRIVER", 1);
							if (__LIB_12__::func_876(uParam0, "RCHRB_SP1", 0))
							{
								TASK::TASK_LOOK_AT_ENTITY(iLocal_186, Global_35, -1, 3120, 41, 0);
								iLocal_709 = 18;
								return;
							}
						}
					}
				}
			}
			if (__LIB_2__::func_215(iLocal_186, Global_35, 1, 40f, 0))
			{
				if ((ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_359, true, 0) && ENTITY::GET_ENTITY_SPEED(Global_35) < 0.7f) || (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_360, true, 0) && ENTITY::GET_ENTITY_SPEED(Global_35) < 0.7f))
				{
					if (!__LIB_2__::func_618(&uLocal_197))
					{
						__LIB_8__::func_901(&uLocal_197, 0);
					}
				}
			}
			if (__LIB_2__::func_215(iLocal_187, Global_35, 1, 20f, 0) && !func_916())
			{
				AUDIO::_0x36559148B78853B3(1, 0, 0);
				__LIB_12__::func_875(uParam0, iLocal_187, "CHRC2_SHOTGUN", 1);
				if (__LIB_12__::func_876(uParam0, "RCHRB_SG2C", 0))
				{
					TASK::TASK_LOOK_AT_ENTITY(iLocal_187, Global_35, -1, 3120, 41, 0);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_187, Global_35, -1, -1f, -1f, -1f);
					iLocal_709 = 13;
					return;
				}
			}
			if (!bLocal_196)
			{
				if (__LIB_2__::func_215(iLocal_188, Global_35, 1, 20f, 0) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_359, true, 0))
				{
					AUDIO::_0x36559148B78853B3(1, 0, 0);
					__LIB_12__::func_875(uParam0, iLocal_188, "RCHRB1_PSNGR", 1);
					if (__LIB_12__::func_876(uParam0, "RCHRB_SP2C", 0))
					{
						bLocal_196 = true;
						if (!__LIB_2__::func_618(&uLocal_197))
						{
							__LIB_8__::func_901(&uLocal_197, 0);
						}
					}
				}
			}
			else if (__LIB_5__::func_51(&uLocal_197) > 8f)
			{
				AUDIO::_0x36559148B78853B3(1, 0, 0);
				__LIB_12__::func_875(uParam0, iLocal_186, "RCHRB1_DRIVER", 1);
				iLocal_709 = 18;
				return;
			}
			if (!bLocal_195)
			{
				if (func_917(iLocal_187, 1097859072 /* Float: 15f */) || ((BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_187, true, false), Global_36) < 4f && !PED::IS_PED_STOPPED(Global_35)) && !func_916()))
				{
					__LIB_12__::func_875(uParam0, iLocal_187, "CHRC2_SHOTGUN", 1);
					if (__LIB_12__::func_876(uParam0, "RCHRB_SG2B", 0))
					{
						TASK::TASK_LOOK_AT_ENTITY(iLocal_187, Global_35, -1, 3120, 41, 0);
						TASK::OPEN_SEQUENCE_TASK(&iVar10);
						TASK::TASK_STAND_STILL(0, 500);
						TASK::TASK_TURN_PED_TO_FACE_COORD(0, Global_36, 6000);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Global_36, 1f, -1, 0.25f, 0, 40000f);
						TASK::CLOSE_SEQUENCE_TASK(iVar10);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_187, iVar10);
						TASK::CLEAR_SEQUENCE_TASK(&iVar10);
						bLocal_195 = true;
					}
				}
			}
			if (!bLocal_319)
			{
				if (PED::IS_PED_BEING_STEALTH_KILLED(iLocal_187))
				{
					AUDIO::_0x36559148B78853B3(1, 0, 0);
					__LIB_12__::func_875(uParam0, iLocal_187, "CHRC2_SHOTGUN", 1);
					if (__LIB_12__::func_876(uParam0, "RCHRB_GHPL", 0))
					{
						bLocal_319 = true;
					}
				}
			}
			if (bLocal_128)
			{
				if (__LIB_0__::func_94(iLocal_384, Global_36, 1) > (20f + (20f / 2f)))
				{
					if (!bLocal_353)
					{
						bLocal_353 = true;
					}
				}
			}
			if (iLocal_721 == 4)
			{
				AITRANSPORT::_0xB7079F4C72896756(iLocal_187, iLocal_384, 0, 1, -1);
				TASK::TASK_ENTER_VEHICLE(iLocal_187, iLocal_384, 20000, -2, 1f, 1, 0);
				__LIB_5__::func_107(&uLocal_124);
				iLocal_709 = 15;
			}
			break;
		case 13:
			func_323(uParam0, 1);
			func_914();
			__LIB_5__::func_107(&uLocal_124);
			iLocal_709 = 14;
			break;
		case 14:
			func_323(uParam0, 1);
			func_914();
			if (__LIB_5__::func_51(&uLocal_124) > 2f || bLocal_698)
			{
				if (!__LIB_2__::func_618(&uLocal_197))
				{
					if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_359, true, 0))
					{
						__LIB_8__::func_901(&uLocal_197, 0);
					}
				}
				else if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_359, true, 0))
				{
					__LIB_2__::func_608(&uLocal_197);
				}
				if ((func_912(1073741824 /* Float: 2f */) || bLocal_698) || (__LIB_2__::func_618(&uLocal_197) && __LIB_5__::func_51(&uLocal_197) > 3f))
				{
					bLocal_193 = true;
					iLocal_709 = 18;
				}
			}
			if (!bLocal_319)
			{
				if (PED::IS_PED_BEING_STEALTH_KILLED(iLocal_187))
				{
					AUDIO::_0x36559148B78853B3(1, 0, 0);
					__LIB_12__::func_875(uParam0, iLocal_187, "CHRC2_SHOTGUN", 1);
					if (__LIB_12__::func_876(uParam0, "RCHRB_GHPL", 0))
					{
						bLocal_319 = true;
					}
				}
			}
			if (bLocal_128)
			{
				if (__LIB_0__::func_94(iLocal_384, Global_36, 1) > (20f + (20f / 2f)))
				{
					if (!bLocal_353)
					{
						bLocal_353 = true;
					}
				}
			}
			if (iLocal_721 == 4)
			{
				AITRANSPORT::_0xB7079F4C72896756(iLocal_187, iLocal_384, 0, 1, -1);
				TASK::TASK_ENTER_VEHICLE(iLocal_187, iLocal_384, 20000, -2, 1f, 1, 0);
				__LIB_5__::func_107(&uLocal_124);
				iLocal_709 = 15;
			}
			break;
		case 15:
			func_914();
			__LIB_5__::func_107(&uLocal_124);
			iLocal_709 = 16;
			break;
		case 16:
			func_914();
			if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_187, true))
			{
				if (__LIB_2__::func_215(iLocal_187, Global_35, 1, 20f, 0) && !func_916())
				{
					if ((PED::GET_VEHICLE_PED_IS_ENTERING(Global_35) == iLocal_384 || BUILTIN::VDIST(Global_36, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_384, 0f, -3f, 0f)) < 3f) || bLocal_128)
					{
						bLocal_193 = true;
						iLocal_709 = 18;
						return;
					}
				}
				if (!__LIB_2__::func_618(&uLocal_324))
				{
					__LIB_5__::func_107(&uLocal_324);
				}
				else if (__LIB_5__::func_51(&uLocal_324) > 6f || BUILTIN::VDIST(Global_36, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_384, 0f, -3f, 0f)) > 5f)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_187, true))
					{
						if (!__LIB_0__::func_163(iLocal_187, -1794415470))
						{
							AITRANSPORT::_0xB7079F4C72896756(iLocal_187, iLocal_384, 0, 1, -1);
							TASK::TASK_ENTER_VEHICLE(iLocal_187, iLocal_384, 20000, -2, 1f, 1, 0);
						}
					}
				}
			}
			if ((PED::IS_PED_SITTING_IN_VEHICLE(iLocal_188, iLocal_384) && PED::IS_PED_SITTING_IN_VEHICLE(iLocal_187, iLocal_384)) && iLocal_721 == 5)
			{
				__LIB_6__::func_704(8);
				__LIB_6__::func_704(512);
				__LIB_0__::func_325(&iLocal_190);
				__LIB_0__::func_325(&iLocal_192);
				__LIB_0__::func_325(&iLocal_191);
				VEHICLE::_0x3053064F909B5F42(iLocal_384, 0);
				iLocal_709 = 20;
			}
			break;
		case 17:
			if (!__LIB_6__::func_904())
			{
				TASK::CLEAR_PED_TASKS(iLocal_32, true, false);
				TASK::TASK_STAND_STILL(iLocal_32, -1);
				bLocal_130 = true;
				bLocal_182 = true;
				iLocal_709 = 20;
			}
			break;
		case 18:
			if (!__LIB_6__::func_904())
			{
				if (__LIB_12__::func_876(uParam0, "RCHRB_G", 0))
				{
					func_315(8);
					WEAPON::SET_CURRENT_PED_WEAPON(iLocal_187, WEAPON::GET_BEST_PED_WEAPON(iLocal_187, false, false), true, 0, false, false);
					if (PED::IS_PED_SITTING_IN_VEHICLE(iLocal_187, iLocal_384))
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar10);
						TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 32);
						TASK::CLOSE_SEQUENCE_TASK(iVar10);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_187, iVar10);
						TASK::CLEAR_SEQUENCE_TASK(&iVar10);
					}
					else
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar10);
						TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
						TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 1);
						TASK::CLOSE_SEQUENCE_TASK(iVar10);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_187, iVar10);
						TASK::CLEAR_SEQUENCE_TASK(&iVar10);
					}
					iLocal_709 = 19;
				}
			}
			break;
		case 19:
			if (!PED::IS_PED_IN_COMBAT(iLocal_187, 0) && !__LIB_0__::func_163(iLocal_187, 780511057))
			{
				TASK::TASK_COMBAT_PED(iLocal_187, Global_35, 0, 0);
			}
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_186, 3, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_186, 1, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_186, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_187, false);
			PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "stealth", 0f, -1);
			bLocal_194 = true;
			break;
	}
	if (__LIB_0__::func_272(iLocal_188, 0))
	{
		if (bVar9)
		{
			if (!PED::IS_PED_HEADTRACKING_PED(iLocal_188, iLocal_32))
			{
				TASK::TASK_LOOK_AT_ENTITY(iLocal_188, iLocal_32, -1, 3120, 41, 0);
			}
		}
	}
	if (!bLocal_127)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_384))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_384, 1475.94f, -775.6528f, 48.48452f, 1468.683f, -823.7026f, 55.72391f, 16.5f, false, true, 0))
			{
				__LIB_5__::func_107(&uLocal_389);
				TASK::TASK_LOOK_AT_ENTITY(Global_35, iLocal_384, -1, 0, 51, 0);
				func_315(5);
				bLocal_127 = true;
			}
		}
	}
	else if (__LIB_5__::func_51(&uLocal_389) > 2f)
	{
		if (CAM::DOES_CAM_EXIST(iLocal_727))
		{
			CAM::RENDER_SCRIPT_CAMS(false, true, 1000, true, false, 0);
			CAM::SET_CAM_ACTIVE(iLocal_727, false);
			CAM::DESTROY_CAM(iLocal_727, false);
		}
	}
}

void func_400(var uParam0)
{
	char* sVar0;
	float fVar1;
	float fVar2;
	if (!bLocal_211)
	{
		bLocal_211 = true;
	}
	if (!bLocal_269)
	{
		sVar0 = "rcm_chrb_TFlee2";
	}
	else
	{
		sVar0 = "rcm_chrb_TFlee";
	}
	if (__LIB_6__::func_702(1))
	{
		if (bLocal_269)
		{
			if (!bLocal_284)
			{
				if (!__LIB_6__::func_904())
				{
					if (__LIB_12__::func_876(uParam0, "RCHRB_CH2D", 0))
					{
						PED::SET_PED_CONFIG_FLAG(iLocal_32, 301, true);
						bLocal_284 = true;
					}
				}
			}
		}
		else if (!bLocal_131)
		{
			if (!__LIB_6__::func_904())
			{
				if (__LIB_12__::func_876(uParam0, "RCHRB_CH2C", 0))
				{
					PED::SET_PED_CONFIG_FLAG(iLocal_32, 301, true);
					bLocal_131 = true;
				}
			}
		}
		fVar1 = 2.5f;
		fVar2 = 2f;
	}
	else
	{
		fVar1 = 1.25f;
		fVar2 = 1f;
	}
	if (!bLocal_265)
	{
		switch (iLocal_715)
		{
			case 0:
				if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_32, iLocal_345) || bLocal_368)
				{
					iLocal_715 = 1;
				}
				else if (__LIB_0__::func_71(iLocal_32))
				{
					iLocal_715 = 3;
				}
				else if (!__LIB_0__::func_163(iLocal_32, 1868526510))
				{
					TASK::TASK_MOUNT_ANIMAL(iLocal_32, iLocal_33, -1, -1, fVar2, 1, 0, 0);
				}
				break;
			case 1:
				if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_32, iLocal_345) && !bLocal_368)
				{
					if (!PED::IS_PED_ON_MOUNT(iLocal_32))
					{
						PED::_SET_PED_ON_MOUNT(iLocal_32, iLocal_33, -1, true);
					}
					iLocal_715 = 3;
				}
				break;
			case 3:
				if (__LIB_0__::func_94(iLocal_32, vLocal_247, 1) >= 30f && !__LIB_0__::func_71(iLocal_32))
				{
					if (!__LIB_0__::func_163(iLocal_32, 1868526510))
					{
						TASK::TASK_MOUNT_ANIMAL(iLocal_32, iLocal_33, -1, -1, 2f, 1, 0, 0);
					}
				}
				else if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_32, 0))
				{
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_32, fVar1, 0, -1082130432 /* Float: -1f */, 0);
				}
				else
				{
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_32, sVar0, 0, 27656, -1, 0, 0, -1);
				}
				break;
		}
		if (__LIB_0__::func_94(iLocal_32, vLocal_247, 1) < 30f)
		{
			func_919();
		}
	}
}

void func_402(var uParam0)
{
	if (__LIB_0__::func_94(iLocal_32, Global_36, 1) > 30f || __LIB_0__::func_94(iLocal_32, Global_36, 1) < 15f)
	{
		return;
	}
	if (iLocal_688 >= 3)
	{
		return;
	}
	if (__LIB_5__::func_236(1))
	{
		return;
	}
	if (!__LIB_2__::func_618(&uLocal_689))
	{
		__LIB_5__::func_107(&uLocal_689);
	}
	if (__LIB_5__::func_51(&uLocal_689) < 20f)
	{
		return;
	}
	if (__LIB_12__::func_876(uParam0, "RCHRB_DAWDLE", 0))
	{
		iLocal_688++;
		__LIB_5__::func_107(&uLocal_689);
	}
}

void func_403(var uParam0, int iParam1)
{
	__LIB_12__::func_691(uParam0, 4);
	__LIB_0__::func_115(uParam0, 10);
	__LIB_13__::func_57(uParam0, iParam1);
}

bool func_405(var uParam0)
{
	bool bVar0;
	struct<23> Var1;
	StringCopy(&(uParam0->f_206.f_358), "2-PlayerFails-Multi", 64);
	bVar0 = true;
	if ((ENTITY::IS_ENTITY_ON_SCREEN(iLocal_32) && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_32)) || (CAM::IS_SPHERE_VISIBLE(vLocal_247, 2f) && !ENTITY::WOULD_ENTITY_BE_OCCLUDED(joaat("CS_JOSIAHTRELAWNY"), vLocal_247, false)))
	{
		bVar0 = false;
	}
	func_923(bVar0);
	if (!bLocal_351)
	{
		if (__LIB_13__::func_375(Global_35, vLocal_247, &uLocal_274, 1112014848 /* Float: 50f */, 1106247680 /* Float: 30f */, 1097859072 /* Float: 15f */, 8f, 0f, 0, 0, 1, 1, 1))
		{
			bLocal_351 = true;
		}
	}
	if (__LIB_0__::func_94(iLocal_32, Global_36, 1) < 30f)
	{
		Var1.f_4 = -1;
		Var1.f_8 = 2;
		Var1.f_9 = 1;
		Var1.f_10 = 1;
		Var1.f_11 = 1;
		Var1.f_13 = 1;
		Var1.f_14 = 2;
		Var1.f_15 = 2;
		Var1.f_16 = 3;
		Var1.f_19 = 3;
		Var1.f_20 = 1;
		Var1.f_21 = 3;
		Var1.f_22 = 3;
		Var1.f_7 = 500;
		Var1.f_3 = iLocal_32;
		Var1.f_4 = 14283;
		_NAMESPACE29::_0x66F9EB44342BB4C5(Global_35, &Var1);
	}
	switch (iLocal_725)
	{
		case 0:
			if (bVar0)
			{
				iLocal_725 = 1;
			}
			else if (BUILTIN::VDIST(Global_36, vLocal_247) < 6f && BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_32, true, false), vLocal_247) < 2f)
			{
				__LIB_12__::func_909(&(uParam0->f_206));
				return true;
			}
			break;
		case 1:
			if (iLocal_706 == 4)
			{
				__LIB_12__::func_944(uParam0, "RCHRB_S1_EXT_FAIL", 1);
				__LIB_12__::func_956(&(uParam0->f_753), Global_35, "ARTHUR", 0);
				__LIB_12__::func_956(&(uParam0->f_753), iLocal_32, "JosiahTrelawny", 0);
				iLocal_725 = 2;
			}
			break;
		case 2:
			if (__LIB_0__::func_94(iLocal_32, Global_36, 1) < 30f)
			{
				func_844(iLocal_32);
			}
			func_348(&(uParam0->f_753), uParam0->f_2581, 0, 0);
			if (__LIB_12__::func_670(&(uParam0->f_753)))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_440(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
						func_324(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_324(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_324(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_324(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_324(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_324(joaat("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_324(joaat("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_324(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_324(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_324(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_324(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_324(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_324(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_324(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_324(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_324(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_324(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_324(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_324(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_324(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_324(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_324(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_324(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_324(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_324(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_961();
						func_962(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
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
						func_324(joaat("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
							func_440(Global_1347702[21 /*49*/].f_15, 0, 0, 0, 0);
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
							func_440(Global_1347702[82 /*49*/].f_15, 0, 0, 0, 0);
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
							func_440(Global_1347702[83 /*49*/].f_15, 0, 0, 0, 0);
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
						func_324(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_324(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
		func_996();
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
							func_324(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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

Vector3 func_444(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10)
{
	vector3 vVar0;
	vVar0 = { func_1003(vParam0, iParam3, iParam4, iParam5, iParam6, 1, iParam7, bParam8, bParam9, bParam10, -1, 1103626240 /* Float: 25f */) };
	if (__LIB_0__::func_86(vVar0))
	{
		vVar0 = { func_1003(vParam0, iParam3, iParam4, 0, 1, 1, iParam7, bParam8, 0, 0, -1, 1103626240 /* Float: 25f */) };
	}
	return vVar0;
}

void func_469()
{
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 128, false);
	}
	__LIB_0__::func_267(1);
	PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "stealth", 0f, -1);
	AUDIO::SET_AUDIO_FLAG("OpenWorldMusicOnMission", false);
	CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
	__LIB_1__::func_684(iLocal_26, 0);
	__LIB_6__::func_806();
	__LIB_0__::func_745(iLocal_26);
	if (__LIB_6__::func_769(23))
	{
		__LIB_5__::func_414(23, __LIB_9__::func_370(23), 0);
	}
	if (PED::IS_PED_IN_GROUP(iLocal_32))
	{
		PED::REMOVE_PED_FROM_GROUP(iLocal_32);
	}
	if (__LIB_1__::func_22(iLocal_26))
	{
		__LIB_13__::func_558(iLocal_26, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
	}
	__LIB_6__::func_704(8);
	__LIB_6__::func_704(512);
	Global_1392388.f_3 = 0;
	if (bLocal_309)
	{
		__LIB_2__::func_161(vLocal_183, 50f, 5);
	}
	func_824();
	__LIB_1__::func_600(1);
	__LIB_6__::func_824();
	__LIB_4__::func_932(30, 1);
	TASK::REMOVE_COVER_POINT(iLocal_107);
	func_1048(iLocal_23, 1, 0);
	if (__LIB_2__::func_763(iLocal_30, 1))
	{
		__LIB_2__::func_753(iLocal_30, 0, 1, 0, 0);
	}
	__LIB_3__::func_353("CHRB1_STOP", 0);
	AUDIO::STOP_AUDIO_SCENES();
	func_380();
	if (CAM::DOES_CAM_EXIST(iLocal_727))
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::SET_CAM_ACTIVE(iLocal_727, false);
		CAM::DESTROY_CAM(iLocal_727, false);
		STATS::_0x025E98E317652CDD(0);
	}
	func_379();
	func_363(0);
	func_393(0);
	__LIB_6__::func_704(4);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_93))
	{
		__LIB_2__::func_145(iLocal_93, 0);
	}
	func_1050(1241.9f, -1308.58f, 70.28f, 1258.86f, -1300.15f, 79.4f, 0);
	__LIB_6__::func_416(0, 0, 1103626240 /* Float: 25f */);
	if (bLocal_701)
	{
		AUDIO::SET_AUDIO_FLAG("naSETVehExitUseActiveTransportOnly", false);
	}
}

void func_512(int iParam0, int iParam1)
{
	if (!Global_1901328.f_94)
	{
		if (__LIB_0__::func_192(iParam0, 606799272))
		{
			func_1105(iParam0, iParam1);
		}
		if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, -1697809989))
		{
			__LIB_12__::func_788(iParam0, iParam1, 1, 0);
		}
	}
}

int func_537(int iParam0, int iParam1)
{
	var uVar0;
	return func_1116(&uVar0, iParam0, iParam1);
}

bool func_543(int iParam0)
{
	return ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, 1226.153f, -1294.515f, 75.70038f, 1230.97f, -1299.19f, 78.24899f, 3.25f, false, true, 0);
}

int func_622(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
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
						__LIB_13__::func_558(iParam0, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
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
				func_1170(Global_1360165[iParam0 /*1157*/], vVar0, iParam6, 2, 1073741824 /* Float: 2f */);
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

int func_623(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17)
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
				iVar0 = func_1181(iParam1, bParam3, bParam8, iParam9, iParam10, iParam11, iParam12, bParam7, bParam15, bParam16, iParam17);
			}
			else
			{
				*iParam0 = 1;
				return 0;
			}
		}
		else
		{
			*iParam0 = 1;
			return 0;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && __LIB_0__::func_272(iVar0, 0))
	{
		*iParam0 = 2;
		Global_1360165[iParam1 /*1157*/].f_70.f_2 = 0;
		__LIB_0__::func_834(iParam1, iVar0);
		__LIB_1__::func_434(iParam1, bParam13, bParam14, 1);
		return iVar0;
	}
	else
	{
		*iParam0 = 0;
		return 0;
	}
	return 0;
}

int func_647(var uParam0)
{
	int iVar0;
	int iVar1;
	if (__LIB_13__::func_23(&(uParam0->f_206), "RCHRB_RC1"))
	{
		iVar0 = __LIB_0__::func_23();
		if ((__LIB_0__::func_41(iVar0) > 20 || __LIB_0__::func_41(iVar0) < 4) || (__LIB_0__::func_41(iVar0) == 4 && __LIB_0__::func_42(iVar0) < 30))
		{
			CLOCK::SET_CLOCK_TIME(4, 30, 0);
		}
		if (!bLocal_244)
		{
			if (func_302(uParam0, vLocal_277, fLocal_280))
			{
				func_1206(1241.9f, -1308.58f, 70.28f, 1258.86f, -1300.15f, 79.4f, 0);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_93, vLocal_277, fLocal_280, true, false, true);
				PHYSICS::_0x06AADE17334F7A40(iLocal_93, 676.38f, -1225.84f, 44.57f);
				TASK::TASK_STAND_STILL(iLocal_93, -1);
				bLocal_244 = true;
			}
		}
	}
	else if (__LIB_13__::func_23(&(uParam0->f_206), "RCHRB_RC2"))
	{
		func_1207();
		PED::SET_PED_RESET_FLAG(Global_35, 174, true);
		PED::SET_PED_RESET_FLAG(iLocal_32, 174, true);
		func_310();
		if (!bLocal_364)
		{
			if (__LIB_13__::func_218(&(uParam0->f_206), Global_35, 0, 0, 1, 1))
			{
				__LIB_0__::func_569(joaat("MOTIONSTATE_WALK"), 2000, 0, 1, 0, 233.1465f, 0, 0);
				bLocal_364 = true;
			}
		}
		if (!bLocal_365)
		{
			if (__LIB_13__::func_218(&(uParam0->f_206), iLocal_32, 0, 0, 1, 1))
			{
				PED::FORCE_PED_MOTION_STATE(iLocal_32, joaat("MOTIONSTATE_WALK"), false, 1, false);
				if (__LIB_0__::func_272(iLocal_33, 0) && BUILTIN::VDIST(vLocal_50, ENTITY::GET_ENTITY_COORDS(iLocal_33, true, false)) > 3f)
				{
					sLocal_170 = "rcm_chrb1_PO2B";
				}
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_32, vLocal_361, 1f, -1, 0.25f, 1, 40000f);
				__LIB_4__::func_932(30, 1);
				bLocal_365 = true;
			}
		}
		if (!bLocal_366)
		{
			if (__LIB_13__::func_218(&(uParam0->f_206), iLocal_31, "U_M_M_RHDTRAINSTATIONWORKER_01", 0, 1, 1))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_31, true);
				TASK::_TASK_START_SCENARIO_IN_PLACE(iLocal_31, joaat("WORLD_HUMAN_SHOPKEEPER"), -1, false, joaat("WORLD_HUMAN_SHOPKEEPER_MALE_A"), 4f, false);
				PED::_0x2208438012482A1A(iLocal_31, false, false);
				bLocal_366 = true;
			}
		}
	}
	else if (__LIB_13__::func_23(&(uParam0->f_206), "RCHRB_S1_MCS1"))
	{
		VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		PED::_0xAB0D553FE20A6E25(0f);
		if (!bLocal_337)
		{
			if (__LIB_6__::func_809(iLocal_23))
			{
				__LIB_6__::func_705(65536);
				bLocal_337 = true;
			}
		}
		if (!bLocal_702)
		{
			if (__LIB_12__::func_685(&(uParam0->f_206)) > (__LIB_12__::func_689(&(uParam0->f_206)) - 3000) || (__LIB_0__::func_84(&(uParam0->f_206), 512) && !CAM::IS_SCREEN_FADING_OUT()))
			{
				iVar1 = 1;
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					iVar1 = 0;
				}
				__LIB_2__::func_761(vLocal_121, 200f, iVar1, 0);
				__LIB_1__::func_572(vLocal_121, 200f, iVar1, 0, 0, 0, 0);
				__LIB_6__::func_704(65536);
				bLocal_702 = true;
			}
		}
	}
	else if (__LIB_13__::func_23(&(uParam0->f_206), "RCHRB_S1_EXT"))
	{
		func_380();
		if (__LIB_13__::func_218(&(uParam0->f_206), iLocal_32, 0, 0, 1, 1))
		{
			__LIB_1__::func_571(iLocal_32, iLocal_33, 0, -1, 1);
			if (!__LIB_0__::func_163(iLocal_32, -1665583462))
			{
				PED::FORCE_PED_MOTION_STATE(iLocal_33, joaat("MOTIONSTATE_WALK"), false, 1, false);
				TASK::_TASK_MOVE_IN_TRAFFIC_2(iLocal_32, vLocal_57, 1073741824 /* Float: 2f */, 1.25f, 6152, 0);
			}
		}
	}
	return 1;
}

bool func_651(var uParam0)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	int iVar5;
	struct<23> Var6;
	iVar0 = -1;
	sVar1 = "script@rcm@CHRB@LEADIN@rc1@ILO_leadin";
	sVar2 = "pl_base";
	sVar3 = "pl_base_to_stare";
	sVar4 = "pl_stare_to_base";
	iVar5 = joaat("P_CRD_2_C01X");
	if (!__LIB_0__::func_272(iLocal_32, 0))
	{
		return false;
	}
	if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_32, true, false), Global_36) < (8f + 4f))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER"), false);
	}
	if (func_1210())
	{
		Var6.f_4 = -1;
		Var6.f_8 = 2;
		Var6.f_9 = 1;
		Var6.f_10 = 1;
		Var6.f_11 = 1;
		Var6.f_13 = 1;
		Var6.f_14 = 2;
		Var6.f_15 = 2;
		Var6.f_16 = 3;
		Var6.f_19 = 3;
		Var6.f_20 = 1;
		Var6.f_21 = 3;
		Var6.f_22 = 3;
		Var6.f_7 = 500;
		Var6.f_3 = iLocal_32;
		Var6.f_4 = 14283;
		_NAMESPACE29::_0x66F9EB44342BB4C5(Global_35, &Var6);
		if (bLocal_604)
		{
			if (!bLocal_605)
			{
				vLocal_525.f_2 = 0;
				__LIB_2__::func_602(&(Local_586[0 /*17*/]), "RCHRB_GREET", " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				bLocal_605 = true;
			}
			bLocal_604 = false;
		}
	}
	else if (!bLocal_604)
	{
		if (bLocal_605)
		{
			__LIB_2__::func_624(&Local_586, 1, 1, 1, 0);
			bLocal_605 = false;
		}
		bLocal_604 = true;
	}
	switch (iLocal_720)
	{
		case 0:
			iLocal_215 = ANIMSCENE::_CREATE_ANIM_SCENE(sVar1, 0, 0, false, true);
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_215))
			{
				STREAMING::REQUEST_MODEL(iVar5, false);
				ANIMSCENE::LOAD_ANIM_SCENE(iLocal_215);
				iLocal_720 = 1;
			}
			break;
		case 1:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_215))
			{
				if ((ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_215, true, false) && STREAMING::HAS_MODEL_LOADED(iVar5)) && func_664(iLocal_215, sVar2))
				{
					PED::SET_PED_CONFIG_FLAG(iLocal_32, 259, false);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_215, "JosiahTrelawny", iLocal_32, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_215, "ARTHUR", Global_35, 0);
					iLocal_418 = OBJECT::CREATE_OBJECT(iVar5, ENTITY::GET_ENTITY_COORDS(iLocal_32, true, false), true, true, false, false, true);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_215, "p_crd_2_c01x", iLocal_418, 0);
					__LIB_6__::func_763(iLocal_215, sVar2);
					if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_329))
					{
						iLocal_329 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), ENTITY::GET_ENTITY_COORDS(iLocal_32, true, false), 0f, 0f, 0f, 0.6f, 0.6f, 4f);
					}
					iLocal_720 = 2;
				}
			}
			break;
		case 2:
			if (func_1210())
			{
				if (func_1213(iLocal_215, sVar3))
				{
					if (!bLocal_607)
					{
						bLocal_607 = true;
					}
					__LIB_5__::func_107(&uLocal_316);
					if (!bLocal_605)
					{
						__LIB_2__::func_602(&(Local_586[0 /*17*/]), "RCHRB_GREET", " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
						bLocal_605 = true;
					}
					__LIB_3__::func_515(&(Local_586[0 /*17*/]), 0, 0);
					bLocal_606 = false;
					__LIB_13__::func_285(&vLocal_525, &Local_586, 0, Global_1347702[53 /*49*/].f_37, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					iLocal_720 = 3;
				}
			}
			break;
		case 3:
			iVar0 = func_879(&iLocal_32, &vLocal_525, (8f - 4f), &Local_586, 0f, 3, 0, 0, __LIB_2__::func_340(5, 0, 0), 0, 0, 2, -1082130432 /* Float: -1f */);
			if (__LIB_5__::func_51(&uLocal_316) > 5f)
			{
				__LIB_5__::func_107(&uLocal_316);
				iLocal_720 = 4;
			}
			break;
		case 4:
			if (!bLocal_606)
			{
				__LIB_3__::func_515(&(Local_586[0 /*17*/]), 1, 0);
				bLocal_606 = true;
			}
			iVar0 = func_879(&iLocal_32, &vLocal_525, (8f - 4f), &Local_586, 0f, 3, 0, 0, __LIB_2__::func_340(5, 0, 0), 0, 0, 2, -1082130432 /* Float: -1f */);
			if (__LIB_5__::func_51(&uLocal_316) < 5f)
			{
				if (iVar0 == 0)
				{
					__LIB_2__::func_624(&Local_586, 1, 1, 1, 0);
					MISC::_0xE98D55C5983F2509(iLocal_32);
					iLocal_720 = 5;
				}
			}
			else if (func_1213(iLocal_215, sVar4))
			{
				iLocal_720 = 7;
			}
			break;
		case 5:
			PLAYER::_0x8674D138391FFB1B(PLAYER::PLAYER_ID(), 1);
			__LIB_18__::func_608(&iLocal_32, &vLocal_525, &Local_586, (8f - 4f), -1082130432 /* Float: -1f */, 0);
			if (!bLocal_703)
			{
				bLocal_703 = true;
			}
			if (__LIB_12__::func_876(uParam0, "RCHRB_ARTWHY", 0))
			{
				__LIB_5__::func_107(&uLocal_316);
				iLocal_720 = 6;
			}
			break;
		case 6:
			PLAYER::_0x8674D138391FFB1B(PLAYER::PLAYER_ID(), 1);
			__LIB_18__::func_608(&iLocal_32, &vLocal_525, &Local_586, (8f - 4f), -1082130432 /* Float: -1f */, 0);
			if (!bLocal_703)
			{
				bLocal_703 = true;
			}
			if (!__LIB_5__::func_236(1))
			{
				iLocal_720 = 9;
			}
			else if (__LIB_5__::func_51(&uLocal_316) > 6f)
			{
				iLocal_720 = 9;
			}
			break;
		case 7:
			iVar0 = func_879(&iLocal_32, &vLocal_525, (8f - 4f), &Local_586, 0f, 3, 0, 0, __LIB_2__::func_340(5, 0, 0), 0, 0, 2, -1082130432 /* Float: -1f */);
			if (iVar0 == 0)
			{
				__LIB_2__::func_624(&Local_586, 1, 1, 1, 0);
				MISC::_0xE98D55C5983F2509(iLocal_32);
				iLocal_720 = 5;
				return false;
			}
			if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_215) > 0.98f)
			{
				if (func_1213(iLocal_215, sVar2))
				{
					iLocal_720 = 8;
				}
			}
			break;
		case 8:
			iVar0 = func_879(&iLocal_32, &vLocal_525, (8f - 4f), &Local_586, 0f, 3, 0, 0, __LIB_2__::func_340(5, 0, 0), 0, 0, 2, -1082130432 /* Float: -1f */);
			if (iVar0 == 0)
			{
				__LIB_2__::func_624(&Local_586, 1, 1, 1, 0);
				MISC::_0xE98D55C5983F2509(iLocal_32);
				iLocal_720 = 5;
			}
			break;
		case 9:
			__LIB_13__::func_19(&vLocal_525, iLocal_32);
			bLocal_704 = true;
			OBJECT::DELETE_OBJECT(&iLocal_418);
			__LIB_2__::func_624(&Local_586, 1, 1, 1, 0);
			MISC::_0xE98D55C5983F2509(iLocal_32);
			PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "RCHRB");
			if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_329))
			{
				VOLUME::_DELETE_VOLUME(iLocal_329);
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar5);
			return true;
	}
	return false;
}

int func_654(var uParam0, int iParam1, vector3 vParam2, int iParam5, int iParam6, float fParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (__LIB_13__::func_379(uParam0, vParam2, iParam5, iParam6, fParam7, bParam8, bParam9, bParam10))
	{
		*iParam1 = uParam0->f_2572;
		return 1;
	}
	return 0;
}

void func_658()
{
	Global_40.f_9146.f_126 |= 1;
}

void func_659()
{
	__LIB_6__::func_777(12, 105, 72, __LIB_6__::func_710(105), __LIB_6__::func_711(12));
}

bool func_664(int iParam0, char* sParam1)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0))
	{
		return false;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(iParam0, true) && !ANIMSCENE::_IS_ANIM_SCENE_LOADED(iParam0, true, false))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(iParam0);
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(iParam0, true, false))
	{
		return false;
	}
	if (!ANIMSCENE::_0xA9016536015DE29D(iParam0, sParam1))
	{
		return false;
	}
	if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam0, sParam1))
	{
		return true;
	}
	if (!ANIMSCENE::_0x0DF57F86FE71DBE5(iParam0, sParam1))
	{
		if (ANIMSCENE::_0xDF7B5144E25CD3FE(iParam0, sParam1))
		{
		}
	}
	return false;
}

void func_707(int iParam0)
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
			__LIB_10__::func_706(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_01"), 20), 1, 0);
			__LIB_0__::func_433(1);
			func_1300(-748969569, 0, 0);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_2"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_02"), 1);
			__LIB_1__::func_804(joaat("TAXIDERMY_ORDER_02"), joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_1__::func_832(51, 0, 0, joaat("TAXIDERMY_ORDER_02"), sVar0, 0, -1, 0);
			__LIB_10__::func_706(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_02"), 20), 1, 0);
			__LIB_0__::func_433(8);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_3"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_03"), 1);
			__LIB_1__::func_804(joaat("TAXIDERMY_ORDER_03"), joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_1__::func_832(51, 0, 0, joaat("TAXIDERMY_ORDER_03"), sVar0, 0, -1, 0);
			__LIB_10__::func_706(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_03"), 20), 1, 0);
			__LIB_0__::func_433(64);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_4"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_04"), 1);
			__LIB_1__::func_804(joaat("TAXIDERMY_ORDER_04"), joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_1__::func_832(51, 0, 0, joaat("TAXIDERMY_ORDER_04"), sVar0, 0, -1, 0);
			__LIB_10__::func_706(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_04"), 20), 1, 0);
			__LIB_0__::func_433(512);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_5"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_05"), 1);
			__LIB_1__::func_240(438, 0);
			__LIB_1__::func_804(joaat("TAXIDERMY_ORDER_05"), joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_1__::func_832(51, 0, 0, joaat("TAXIDERMY_ORDER_05"), sVar0, 0, -1, 0);
			__LIB_10__::func_706(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_05"), 20), 1, 0);
			__LIB_0__::func_433(32768);
			break;
		default:
			__LIB_1__::func_240(439, 0);
			break;
	}
}

void func_709(int iParam0, int iParam1)
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
			func_1301(joaat("EXOTIC_STAGE_01"));
			if (__LIB_0__::func_944() == 0)
			{
				__LIB_0__::func_703(0, 10);
				iVar1 = __LIB_1__::func_805(iParam0, iParam1, 1);
				if (((iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH")) || iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY")) || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
				{
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_01"), iVar1, 0, -1, 0);
						__LIB_10__::func_706(43, 0, 0, iVar1, 30, 1, 0);
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
			func_1301(joaat("EXOTIC_STAGE_02"));
			if (__LIB_0__::func_944() == 1)
			{
				__LIB_0__::func_703(0, 10);
				iVar1 = __LIB_1__::func_805(iParam0, iParam1, 2);
				if ((iParam0 == joaat("PROVISION_HERON_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER")) || iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
				{
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_02"), iVar1, 0, -1, 0);
						__LIB_10__::func_706(43, 0, 0, iVar1, 37, 1, 0);
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
			func_1301(joaat("EXOTIC_STAGE_03"));
			if (__LIB_0__::func_944() == 2)
			{
				__LIB_0__::func_703(0, 10);
				iVar1 = __LIB_1__::func_805(iParam0, iParam1, 4);
				if (iParam0 == joaat("PROVISION_GATOR_EGG"))
				{
					if (!__LIB_0__::func_440(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0)) >= 25)
					{
						__LIB_0__::func_441(COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("GATOR_EGGS"), 0), 1);
						__LIB_1__::func_696(48);
					}
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						__LIB_10__::func_706(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR") || iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
				{
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						__LIB_10__::func_706(43, 0, 0, iVar1, 40, 1, 0);
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
			func_1301(joaat("EXOTIC_STAGE_04"));
			if (__LIB_0__::func_944() == 3)
			{
				__LIB_0__::func_703(0, 10);
				iVar1 = __LIB_1__::func_805(iParam0, iParam1, 8);
				if (((iParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED")) || iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
				{
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_04"), iVar1, 0, -1, 0);
						__LIB_10__::func_706(43, 0, 0, iVar1, 50, 1, 0);
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
			func_1301(joaat("EXOTIC_STAGE_05"));
			if (__LIB_0__::func_944() == 4)
			{
				__LIB_0__::func_703(0, 10);
				iVar1 = __LIB_1__::func_805(iParam0, iParam1, 16);
				if (((iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL") || iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS")) || iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
				{
					if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
					{
						__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_05"), iVar1, 0, -1, 0);
						__LIB_10__::func_706(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_769(var uParam0)
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
		func_1368(&(uParam0->f_404), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_12__::func_706(uParam0, 0f, 0f, 0f);
		func_1370(uParam0);
		func_1371(uParam0);
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

void func_824()
{
	if (bLocal_178)
	{
		__LIB_1__::func_281(&iLocal_181, 1, 1);
		HUD::_DISPLAY_HUD_COMPONENT(724769646);
		TASK::CLEAR_PED_TASKS(Global_35, false, false);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 128, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		if (CAM::DOES_CAM_EXIST(iLocal_179))
		{
			STATS::_0x025E98E317652CDD(0);
			CAM::DESTROY_CAM(iLocal_179, false);
		}
		if (!bLocal_269)
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-3f, 1f);
		}
		bLocal_178 = false;
	}
	__LIB_1__::func_281(&iLocal_180, 1, 1);
}

bool func_825()
{
	if ((PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_AIM")) || !__LIB_0__::func_48(Global_35, iLocal_384, 80f, 1)) || __LIB_13__::func_431())
	{
		return true;
	}
	return false;
}

void func_830(int iParam0, vector3 vParam1, vector3 vParam4)
{
	switch (iParam0)
	{
		case 0:
			if (!CAM::DOES_CAM_EXIST(iLocal_179))
			{
				iLocal_179 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), ENTITY::GET_ENTITY_COORDS(iLocal_384, true, false), 0f, 0f, 0f, 22f, false, 2);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_352))
			{
				iLocal_352 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("SCRIPTEDBALL"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_384, vParam1), true, true, false, true);
				ENTITY::SET_ENTITY_COLLISION(iLocal_352, false, false);
				ENTITY::SET_ENTITY_VISIBLE(iLocal_352, false);
			}
			CAM::SET_CAM_ACTIVE(iLocal_179, true);
			CAM::ATTACH_CAM_TO_ENTITY(iLocal_179, iLocal_352, 0f, 0f, 0f, true);
			CAM::SHAKE_CAM(iLocal_179, "HAND_SHAKE", 0.2f);
			CAM::POINT_CAM_AT_ENTITY(iLocal_179, iLocal_384, vParam4, true);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			break;
		case 2:
			if (!CAM::DOES_CAM_EXIST(iLocal_179))
			{
				iLocal_179 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 1493.559f, -1085.747f, 53.8403f, -5.9823f, -0.0357f, -9.5272f, 25.5107f, false, 2);
			}
			CAM::SET_CAM_ACTIVE(iLocal_179, true);
			CAM::SHAKE_CAM(iLocal_179, "HAND_SHAKE", 0.2f);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			break;
		case 3:
			if (!CAM::DOES_CAM_EXIST(iLocal_179))
			{
				iLocal_179 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 1493.641f, -1060.364f, 52.6259f, -2.2958f, 0.0058f, -162.2297f, 32.5502f, false, 2);
			}
			CAM::SET_CAM_ACTIVE(iLocal_179, true);
			CAM::SHAKE_CAM(iLocal_179, "HAND_SHAKE", 0.2f);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			break;
		case 4:
			if (!CAM::DOES_CAM_EXIST(iLocal_179))
			{
				iLocal_179 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 1493.417f, -1021.603f, 51.3309f, 1.7516f, -0.1241f, -175.5183f, 29.9322f, false, 2);
			}
			CAM::SET_CAM_ACTIVE(iLocal_179, true);
			CAM::SHAKE_CAM(iLocal_179, "HAND_SHAKE", 0.2f);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			break;
	}
}

void func_837(int iParam0, int iParam1, vector3 vParam2)
{
	*iParam1 = MAP::_BLIP_ADD_FOR_COORD(408396114, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*iParam0, vParam2));
	MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam1, "CHRB_LOOT");
}

void func_838(int iParam0, int iParam1, vector3 vParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(*iParam1))
	{
		MAP::SET_BLIP_COORDS(*iParam1, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*iParam0, vParam2));
	}
}

void func_839(int iParam0, int iParam1)
{
	if (MAP::DOES_BLIP_EXIST(*iParam1))
	{
		return;
	}
	*iParam1 = MAP::_BLIP_ADD_FOR_ENTITY(408396114, *iParam0);
	MAP::SET_BLIP_SPRITE(*iParam1, joaat("BLIP_AMBIENT_COACH"), false);
	MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam1, "CR_BLIP_COACH");
}

void func_844(int iParam0)
{
	if (!bLocal_370)
	{
		PLAYER::_0x3946FC742AC305CD(PLAYER::PLAYER_ID(), iParam0, func_1458(), 0f, 0f, 0f, 0, "COACHROB");
		bLocal_370 = true;
	}
}

void func_855()
{
	vector3 vVar0;
	var uVar3;
	bool bVar4;
	if (!__LIB_0__::func_71(iLocal_32))
	{
		return;
	}
	if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_32, true, false), Global_36) < 60f)
	{
		return;
	}
	vVar0 = { __LIB_1__::func_367(ENTITY::GET_ENTITY_COORDS(iLocal_32, true, false), Global_36, 0.25f) };
	vVar0.f_2 = (vVar0.z + 30f);
	bVar4 = WATER::TEST_VERTICAL_PROBE_AGAINST_ALL_WATER(vVar0, 0, &uVar3);
	if (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &(vVar0.f_2), false))
	{
		return;
	}
	if (bVar4 == 1)
	{
		return;
	}
	if (__LIB_9__::func_313(vVar0))
	{
		return;
	}
	if (__LIB_13__::func_362(vVar0, 2f, 3, 0, 0, 0))
	{
		return;
	}
	if (CAM::IS_SPHERE_VISIBLE(vVar0, 1f))
	{
		return;
	}
	if (CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(iLocal_32, true, false), 1f))
	{
		return;
	}
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(PED::GET_MOUNT(iLocal_32), vVar0, __LIB_0__::func_152(vVar0, Global_36, 1), true, true, true);
}

bool func_856(int iParam0)
{
	return ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, 708.2339f, -1278.749f, 37.10695f, 644.7546f, -1221.163f, 64.9095f, 71f, false, true, 0);
}

void func_860(char* sParam0)
{
	__LIB_3__::func_895(&uLocal_430);
	__LIB_3__::func_895(&uLocal_468);
	__LIB_13__::func_365(iLocal_32, Global_35, &uLocal_430, 0f, 0f, 0f, sParam0, 0, 0, 1069547520 /* Float: 1.5f */, 2f, 1073069561, 1.1f, 1092616192 /* Float: 10f */, -1, 1, 0, 0, 0, 1);
	__LIB_11__::func_98(Global_35, iLocal_32, &uLocal_468, -1082130432 /* Float: -1f */, 0, 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1, 8, 0f, -2f, 1069547520 /* Float: 1.5f */, 1073741824 /* Float: 2f */, 1050253722 /* Float: 0.3f */, 1067030938 /* Float: 1.2f */, 0, 0, -1, 1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1);
	__LIB_1__::func_731(&uLocal_506);
}

void func_861()
{
	if (bLocal_523)
	{
		return;
	}
	__LIB_13__::func_474(iLocal_32, 2f, 1032, 1.1f);
	__LIB_2__::func_966(iLocal_32, Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
	__LIB_2__::func_966(Global_35, iLocal_32, 1, 1, 1, 0, 1, 1, 0, 0, 1);
	__LIB_8__::func_602(&uLocal_506, iLocal_32);
}

void func_876()
{
	STREAMING::REQUEST_MODEL(joaat("A_M_M_RHDTOWNFOLK_01"), false);
	STREAMING::REQUEST_MODEL(joaat("P_PAPER01X"), false);
	STREAMING::REQUEST_MODEL(joaat("P_CS_LEDGER01X"), false);
	STREAMING::REQUEST_MODEL(joaat("P_LETTERBUNDLE_01X"), false);
	STREAMING::REQUEST_MODEL(joaat("P_PENCIL01X"), false);
	STREAMING::REQUEST_MODEL(joaat("P_STAMP01X"), false);
	STREAMING::REQUEST_MODEL(joaat("P_PEN01X"), false);
	STREAMING::REQUEST_MODEL(joaat("P_CS_NOTE01X"), false);
}

bool func_877()
{
	if (!STREAMING::HAS_MODEL_LOADED(joaat("A_M_M_RHDTOWNFOLK_01")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("P_PAPER01X")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("P_CS_LEDGER01X")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("P_LETTERBUNDLE_01X")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("P_PENCIL01X")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("P_STAMP01X")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("P_PEN01X")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("P_CS_NOTE01X")))
	{
		return false;
	}
	return true;
}

bool func_878()
{
	switch (iLocal_713)
	{
		case 0:
			iLocal_213 = ANIMSCENE::_CREATE_ANIM_SCENE(sLocal_216, 2, 0, false, true);
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_213))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_213, "CS_JosiahTrelawny", iLocal_32, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_213, "U_M_M_RHDTRAINSTATIONWORKER_01", iLocal_31, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_213, "player_zero", Global_35, 0);
				func_1490(iLocal_213);
				ANIMSCENE::LOAD_ANIM_SCENE(iLocal_213);
				iLocal_713 = 1;
			}
			break;
		case 1:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_213))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_213, true, false))
				{
					return true;
				}
			}
			break;
	}
	return false;
}

int func_879(int iParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
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
		bVar8 = __LIB_5__::func_439(bParam12 >= 0f, bParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*iParam0, true, false)));
		__LIB_18__::func_608(iParam0, iParam1, uParam3, fParam2, bVar8, sParam7);
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
		if (__LIB_9__::func_905(*iParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (__LIB_13__::func_536(iParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, bVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_879(iParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !bVar8 <= (fParam2 + 5f))
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
					__LIB_11__::func_617(iParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
					__LIB_11__::func_604(iParam1, uParam3);
					if (__LIB_13__::func_537(iParam0, iParam1, bVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
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
					__LIB_10__::func_577(iParam1, uParam3, bVar8);
					if (__LIB_13__::func_535(*iParam0, iParam1, uParam3))
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
				if (__LIB_3__::func_598(iParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					__LIB_10__::func_933(*iParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					__LIB_13__::func_537(iParam0, iParam1, bVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					__LIB_11__::func_617(iParam0, __LIB_3__::func_598(iParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
					__LIB_11__::func_604(iParam1, uParam3);
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
					else if (!(MISC::IS_BIT_SET(*iParam1, 13) || __LIB_11__::func_611(iParam1)))
					{
					}
					else if (!__LIB_13__::func_378(iParam1))
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
				if (__LIB_13__::func_534(iParam0, iParam1, fParam4, bVar6))
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
					__LIB_10__::func_933(*iParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					__LIB_13__::func_537(iParam0, iParam1, bVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					__LIB_11__::func_617(iParam0, __LIB_3__::func_598(iParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
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
				__LIB_10__::func_577(iParam1, uParam3, bVar8);
				if (__LIB_13__::func_534(iParam0, iParam1, fParam4, bVar6))
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
			__LIB_13__::func_538(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

void func_891()
{
	__LIB_1__::func_951(&iLocal_408);
	__LIB_1__::func_951(&iLocal_409);
	__LIB_1__::func_951(&iLocal_410);
	__LIB_1__::func_951(&iLocal_411);
	__LIB_1__::func_951(&iLocal_412);
	__LIB_1__::func_951(&iLocal_413);
	__LIB_1__::func_951(&iLocal_414);
	__LIB_1__::func_951(&iLocal_415);
	__LIB_1__::func_951(&iLocal_420);
}

float func_896()
{
	vector3 vVar0;
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iLocal_32, true, false) };
	if (iLocal_711 == 4)
	{
		if (BUILTIN::VDIST(vVar0, vLocal_50) < 5f)
		{
			return 1f;
		}
		else if (BUILTIN::VDIST(vVar0, vLocal_50) < 22f)
		{
			return 1.25f;
		}
		else if (BUILTIN::VDIST(vVar0, __LIB_6__::func_758(iLocal_23)) < 40f)
		{
			return 1.25f;
		}
		else
		{
			return 1.75f;
		}
	}
	if (BUILTIN::VDIST(vVar0, vLocal_50) < 10f)
	{
		return 1f;
	}
	if (__LIB_1__::func_652())
	{
		return 1.25f;
	}
	if (BUILTIN::VDIST(vVar0, vLocal_50) < 40f)
	{
		return 1.25f;
	}
	return 1.75f;
}

bool func_900(int iParam0)
{
	return ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, 1378.404f, -800.5002f, 62.85738f, 1377.259f, -812.5479f, 74.43941f, 14.3f, false, true, 0);
}

void func_902()
{
	if (bLocal_304)
	{
		return;
	}
	if (__LIB_0__::func_94(iLocal_32, Global_36, 1) > (35f - 15f))
	{
		if (!bLocal_303)
		{
			bLocal_303 = true;
		}
	}
	if (!bLocal_303)
	{
		return;
	}
	if (!__LIB_0__::func_71(Global_35))
	{
		return;
	}
	if (iLocal_709 > 0 && iLocal_709 < 9)
	{
		if (!bLocal_308)
		{
			if (PLAYER::_0xE24C64D9ADED2EF5(PLAYER::PLAYER_ID(), iLocal_32))
			{
				PLAYER::_0x0C6B89876262A99D(PLAYER::PLAYER_ID(), iLocal_32);
			}
			__LIB_3__::func_456(iLocal_32);
			if (PED::DOES_GROUP_EXIST(iLocal_427))
			{
				PED::REMOVE_GROUP(iLocal_427);
			}
			iLocal_427 = PED::CREATE_GROUP(2);
			PED::SET_PED_CONFIG_FLAG(iLocal_32, 279, true);
			PED::SET_PED_AS_GROUP_LEADER(iLocal_32, iLocal_427, false);
			PED::SET_GROUP_FORMATION(iLocal_427, 5);
			PED::ADD_CUSTOM_FORMATION_LOCATION(iLocal_427, 0f, -35f, 0f, -1);
			PLAYER::_0xAC22AA6DF4D1C1DE(PLAYER::PLAYER_ID(), iLocal_32, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 4, 2, 0);
			PED::_0x9BBEAF8B0C007F1E(iLocal_32, 0);
			bLocal_308 = true;
		}
		else if (__LIB_0__::func_94(iLocal_32, Global_36, 1) < 35f && PED::IS_PED_FACING_PED(Global_35, iLocal_32, 90f))
		{
			if (func_1542())
			{
				if (PLAYER::_0xE24C64D9ADED2EF5(PLAYER::PLAYER_ID(), iLocal_32))
				{
					PLAYER::_0x0C6B89876262A99D(PLAYER::PLAYER_ID(), iLocal_32);
				}
				__LIB_3__::func_456(iLocal_32);
				if (PED::DOES_GROUP_EXIST(iLocal_427))
				{
					PED::REMOVE_GROUP(iLocal_427);
				}
				bLocal_304 = true;
				return;
			}
			if (PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_HORSE_SPRINT")) && !PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_HORSE_SPRINT")))
			{
				if (__LIB_0__::func_272(PED::GET_MOUNT(Global_35), 0))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(PED::GET_MOUNT(Global_35), 1.25f);
				}
			}
		}
	}
}

bool func_903()
{
	vector3 vVar0;
	if ((__LIB_13__::func_95(iLocal_188, 0, &uLocal_134, &uLocal_162, 0, 0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_188, Global_35, 1, 1)) || PED::IS_PED_BEING_JACKED(iLocal_188))
	{
		__LIB_6__::func_705(128);
		return true;
	}
	if ((__LIB_13__::func_95(iLocal_186, 0, &uLocal_134, &uLocal_162, 0, 0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_186, Global_35, 1, 1)) || PED::IS_PED_BEING_JACKED(iLocal_186))
	{
		return true;
	}
	if ((__LIB_13__::func_95(iLocal_187, 0, &uLocal_134, &uLocal_162, 0, 0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_187, Global_35, 1, 1)) || PED::IS_PED_BEING_JACKED(iLocal_187))
	{
		return true;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_384))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iLocal_384, true, false) };
		if (MISC::IS_BULLET_IN_AREA(vVar0, 15f, true) || MISC::HAS_BULLET_IMPACTED_IN_AREA(vVar0, 15f, true, true))
		{
			return true;
		}
	}
	return false;
}

void func_905(var uParam0)
{
	switch (iLocal_710)
	{
		case 0:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_384))
			{
				if (BUILTIN::VDIST(vLocal_121, ENTITY::GET_ENTITY_COORDS(iLocal_384, true, false)) < 50f)
				{
					if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_32, true, false), Global_36) < 30f)
					{
						if (__LIB_12__::func_876(uParam0, "RCHRB_T1", 0))
						{
							TASK::TASK_LOOK_AT_ENTITY(iLocal_32, iLocal_384, -1, 0, 51, 0);
							func_345(uParam0, 7);
							iLocal_710 = 1;
						}
					}
					else
					{
						func_345(uParam0, 7);
						iLocal_710 = 1;
					}
				}
			}
			break;
		case 1:
			if (!__LIB_6__::func_904())
			{
				iLocal_710 = 3;
			}
			break;
		case 2:
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_32, 0))
			{
				if (TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_32) > 390)
				{
					if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_32, true, false), Global_36) < 30f)
					{
						if (__LIB_12__::func_876(uParam0, "RCHRB_T2", 0))
						{
							iLocal_710 = 3;
						}
					}
					else
					{
						iLocal_710 = 3;
					}
				}
			}
			break;
		case 3:
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_32, 0))
			{
				if (__LIB_0__::func_94(iLocal_32, vLocal_121, 1) < 30f)
				{
					if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_32, true, false), Global_36) < 20f)
					{
						if (__LIB_6__::func_702(32))
						{
							if (__LIB_12__::func_876(uParam0, "RCHRB_T3PA", 0))
							{
								iLocal_710 = 4;
							}
						}
						else if (__LIB_12__::func_876(uParam0, "RCHRB_T3", 0))
						{
							iLocal_710 = 4;
						}
					}
					else
					{
						iLocal_710 = 4;
					}
				}
			}
			break;
		case 4:
			if (!__LIB_6__::func_904())
			{
				func_315(6);
				iLocal_710 = 5;
			}
			break;
	}
}

bool func_912(float fParam0)
{
	if (BUILTIN::VDIST(Global_36, 1498.304f, -1065.598f, 50.8209f) < fParam0)
	{
		return true;
	}
	return false;
}

void func_914()
{
	char* sVar0;
	sVar0 = "script@rcm@chrb@ig@ig2_auditionpassenger@ig2_auditionpassenger";
	switch (iLocal_721)
	{
		case 0:
			iLocal_344 = ANIMSCENE::_CREATE_ANIM_SCENE(sVar0, 0, 0, false, true);
			iLocal_721 = 1;
			break;
		case 1:
			if (func_664(iLocal_344, "pbl_ACTION_03"))
			{
				if ((!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_342, false) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iLocal_342, false)) || ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(iLocal_342))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_344, "CS_JosiahTrelawny", iLocal_32, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_344, "A_F_M_SclFancyTravellers_01", iLocal_188, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_344, "A_M_M_SclRoughTravellers_01", iLocal_186, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_344, "A_M_M_SclRoughTravellers_01^2", iLocal_189, 0);
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_419))
					{
						iLocal_419 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("S_CONCARDDAMSEN01X"), vLocal_261, true, true, false, true);
					}
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_344, "s_concarddamsen01x", iLocal_419, 1);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_344, "COACH2", iLocal_384, 0);
					__LIB_6__::func_763(iLocal_344, "pbl_ACTION_03");
					ANIMSCENE::_0xAE6ADA8FE7E84ACC(iLocal_344, "pbl_ACTION_03");
					iLocal_721 = 2;
				}
			}
			break;
		case 2:
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_344, false))
			{
				iLocal_721 = 3;
			}
			break;
		case 3:
			if (func_664(iLocal_344, "pbl_ACTION_04"))
			{
				if ((!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_344, false) || ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_344) > 0.999f) || bLocal_353)
				{
					__LIB_6__::func_763(iLocal_344, "pbl_ACTION_04");
					ANIMSCENE::_0xAE6ADA8FE7E84ACC(iLocal_344, "pbl_ACTION_04");
					iLocal_721 = 4;
				}
			}
			break;
		case 4:
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_344, false))
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_344) < 0.309163f)
				{
					sLocal_346 = "pbl_Breakout_singing";
				}
				else
				{
					sLocal_346 = "";
				}
				if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_344) > 0.724057f)
				{
					bLocal_182 = true;
					PED::SET_PED_INTO_VEHICLE(iLocal_188, iLocal_384, 2);
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_344, "COACH2", iLocal_384);
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_344, "A_F_M_SclFancyTravellers_01", iLocal_188);
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_344, "A_M_M_SclRoughTravellers_01^2", iLocal_189);
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_344, "A_M_M_SclRoughTravellers_01", iLocal_186);
					iLocal_721 = 5;
				}
			}
			break;
	}
}

bool func_916()
{
	if (bLocal_128)
	{
		if (!bLocal_75)
		{
			if (__LIB_0__::func_94(iLocal_384, Global_36, 1) > 15f)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_917(int iParam0, float fParam1)
{
	float fVar0;
	float fVar1;
	PLAYER::SET_PLAYER_SNEAKING_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), 0.5f);
	fVar0 = PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID());
	fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), Global_36);
	if (fVar1 < (fParam1 / 2f))
	{
		if (fVar0 > 8f || __LIB_0__::func_71(Global_35))
		{
			return true;
		}
	}
	else if (fVar1 < fParam1)
	{
		if (fVar0 > 10f || __LIB_0__::func_71(Global_35))
		{
			return true;
		}
	}
	return false;
}

void func_919()
{
	vector3 vVar0;
	int iVar3;
	if (bLocal_265)
	{
		return;
	}
	if (!__LIB_0__::func_272(iLocal_32, 0))
	{
		return;
	}
	if (!__LIB_0__::func_272(iLocal_33, 0))
	{
		return;
	}
	vVar0 = { 1148.21f, -914.42f, 66.378f };
	TASK::OPEN_SEQUENCE_TASK(&iVar3);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar0, 1.25f, -1, 3f, 0, 40000f);
	TASK::TASK_DISMOUNT_ANIMAL(0, 262144, 0, 0, 0, 0);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_247, 1f, -1, 0.5f, 0, fLocal_250);
	TASK::CLOSE_SEQUENCE_TASK(iVar3);
	TASK::TASK_PERFORM_SEQUENCE(iLocal_32, iVar3);
	TASK::CLEAR_SEQUENCE_TASK(&iVar3);
	bLocal_265 = true;
}

void func_923(bool bParam0)
{
	char* sVar0;
	sVar0 = "script@rcm@CHRB@LEADIN@S1@EXT@FAIL";
	switch (iLocal_372)
	{
		case 0:
			if (bLocal_265)
			{
				if (bParam0)
				{
					iLocal_373 = ANIMSCENE::_CREATE_ANIM_SCENE(sVar0, 0, 0, false, true);
					iLocal_372 = 1;
				}
			}
			break;
		case 1:
			if (func_664(iLocal_373, "PL_BASE"))
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_373, false) || ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_373) > 0.99f)
				{
					if (__LIB_0__::func_71(iLocal_32))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_32, true, true);
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_33, vLocal_251, fLocal_254, true, false, true);
					}
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_373, "JosiahTrelawny", iLocal_32, 0);
					__LIB_6__::func_763(iLocal_373, "PL_BASE");
					if (__LIB_1__::func_985())
					{
						iLocal_372 = 2;
					}
					else
					{
						iLocal_372 = 3;
					}
				}
			}
			break;
		case 2:
			if (func_664(iLocal_373, "PL_IDLE_A"))
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_373, false) || ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_373) > 0.99f)
				{
					__LIB_6__::func_763(iLocal_373, "PL_IDLE_A");
					iLocal_372 = 1;
				}
			}
			break;
		case 3:
			if (func_664(iLocal_373, "PL_IDLE_B"))
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_373, false) || ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_373) > 0.99f)
				{
					__LIB_6__::func_763(iLocal_373, "PL_IDLE_B");
					iLocal_372 = 1;
				}
			}
			break;
	}
}

void func_961()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_1578();
	func_1579();
	func_1580();
	func_1581();
	func_1582();
	__LIB_1__::func_848();
	__LIB_0__::func_376();
}

void func_962(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	func_193(iParam0, 1, 1, -142743235, 1);
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

void func_996()
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
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_1604(&uVar4, &iVar1, &iVar2, &iVar3)))
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

Vector3 func_1003(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
{
	int iVar0;
	int iVar1;
	bool bVar2;
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
	bVar2 = 9999999f;
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
			bVar11 = func_1618(iVar0, iVar1);
			bVar3 = BUILTIN::VDIST(vParam0, vVar7);
			if (((((bVar3 < bVar2 && bVar3 > bParam10) && !__LIB_0__::func_86(vVar7)) && __LIB_1__::func_172(iVar0, bParam8, iParam12)) && !__LIB_0__::func_955(iVar0)) || bVar11)
			{
				if (__LIB_9__::func_68(vVar7, iVar0, iVar1, iParam5, iParam6, bVar14, bVar10, bParam9, bParam13))
				{
					vVar4 = { vVar7 };
					bVar2 = BUILTIN::VDIST(vParam0, vVar7);
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

void func_1048(int iParam0, bool bParam1, bool bParam2)
{
	__LIB_0__::func_769();
	func_1659();
	if (!__LIB_6__::func_706(iParam0))
	{
		return;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1392388.f_10[iParam0 /*13*/].f_9))
	{
		__LIB_1__::func_544(Global_1392388.f_10[iParam0 /*13*/].f_9);
		VOLUME::_DELETE_VOLUME(Global_1392388.f_10[iParam0 /*13*/].f_9);
	}
	if (MAP::DOES_BLIP_EXIST(Global_1392388.f_10[iParam0 /*13*/].f_11))
	{
		MAP::REMOVE_BLIP(&(Global_1392388.f_10[iParam0 /*13*/].f_11));
	}
	if (MAP::DOES_BLIP_EXIST(Global_1392388.f_10[iParam0 /*13*/].f_10))
	{
		MAP::REMOVE_BLIP(&(Global_1392388.f_10[iParam0 /*13*/].f_10));
	}
	if (bParam2)
	{
		__LIB_2__::func_161(Global_1392388.f_10[iParam0 /*13*/].f_5, 125f, 5);
	}
	Global_40.f_9146.f_4[iParam0] = 0;
	Global_40.f_9146.f_79[iParam0] = -15;
	if (__LIB_6__::func_708(iParam0))
	{
		Global_40.f_9146.f_3 = -1;
		if (__LIB_0__::func_702(Global_1392388.f_10[iParam0 /*13*/].f_8) || __LIB_1__::func_44(Global_1392388.f_10[iParam0 /*13*/].f_8))
		{
			__LIB_1__::func_559(Global_1392388.f_10[iParam0 /*13*/].f_8, 0, 2);
		}
	}
	if (bParam1)
	{
		__LIB_13__::func_376(-1);
	}
}

void func_1050(vector3 vParam0, vector3 vParam3, float fParam6)
{
	vector3 vVar0;
	vector3 vVar3;
	PED::CLEAR_PED_NON_CREATION_AREA();
	vVar0 = { __LIB_2__::func_66(vParam0, vParam3, fParam6) };
	vVar3 = { __LIB_2__::func_67(vParam0, vParam3, fParam6) };
	PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(vVar0, vVar3, 0);
}

void func_1105(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	if (__LIB_0__::func_2() == -1)
	{
		if (__LIB_1__::func_154(43))
		{
			if (__LIB_0__::func_192(iParam0, 412399755))
			{
				func_1301(joaat("EXOTIC_STAGE_01"));
				if (__LIB_0__::func_944() == 0)
				{
					__LIB_0__::func_703(0, 10);
					iVar0 = __LIB_1__::func_793(iParam0, iParam1, 1);
					if (((iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH")) || iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY")) || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
					{
						if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
						{
							__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_01"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (__LIB_1__::func_154(44))
		{
			if (__LIB_0__::func_192(iParam0, 709057512))
			{
				func_1301(joaat("EXOTIC_STAGE_02"));
				if (__LIB_0__::func_944() == 1)
				{
					__LIB_0__::func_703(0, 10);
					iVar0 = __LIB_1__::func_793(iParam0, iParam1, 2);
					if ((iParam0 == joaat("PROVISION_HERON_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER")) || iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
					{
						if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
						{
							__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_02"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!__LIB_1__::func_154(45))
		{
			if (__LIB_0__::func_192(iParam0, -1478961327))
			{
				func_1301(joaat("EXOTIC_STAGE_03"));
				if (__LIB_0__::func_944() == 2)
				{
					__LIB_0__::func_703(0, 10);
					iVar0 = __LIB_1__::func_793(iParam0, iParam1, 4);
					if (((iParam0 == joaat("PROVISION_GATOR_EGG") || iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
					{
						if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
						{
							__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!__LIB_1__::func_154(46))
		{
			if (__LIB_0__::func_192(iParam0, -1238404098))
			{
				func_1301(joaat("EXOTIC_STAGE_04"));
				if (__LIB_0__::func_944() == 3)
				{
					__LIB_0__::func_703(0, 10);
					iVar0 = __LIB_1__::func_793(iParam0, iParam1, 8);
					if (((iParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED")) || iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
					{
						if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
						{
							__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_04"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!__LIB_1__::func_154(47))
		{
			if (__LIB_0__::func_192(iParam0, 1160548794))
			{
				func_1301(joaat("EXOTIC_STAGE_05"));
				if (__LIB_0__::func_944() == 4)
				{
					__LIB_0__::func_703(0, 10);
					iVar0 = __LIB_1__::func_793(iParam0, iParam1, 16);
					if (((iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL") || iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS")) || iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
					{
						if (__LIB_1__::func_764(iParam0) < __LIB_0__::func_439(iParam0))
						{
							__LIB_1__::func_832(43, iParam0, iParam1, joaat("EXOTIC_STAGE_05"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
	}
}

int func_1116(var uParam0, int iParam1, int iParam2)
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
		return func_1116(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

void func_1170(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_1170(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_1170(iVar2, vParam1, fParam4, iParam5, iParam6);
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

int func_1181(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)
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
				if (!__LIB_13__::func_58(iParam0, vVar0, iParam6, iParam10))
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
				func_1170(Global_1360165[iParam0 /*1157*/].f_124, vVar0, iParam6, 2, 1073741824 /* Float: 2f */);
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

int func_1206(vector3 vParam0, vector3 vParam3, int iParam6)
{
	int iVar0;
	__LIB_0__::func_568(__LIB_4__::func_147(vParam0, vParam3), BUILTIN::VDIST(vParam0, vParam3), iParam6);
	PED::SET_PED_NON_CREATION_AREA(vParam0, vParam3);
	PATHFIND::SET_PED_PATHS_IN_AREA(vParam0, vParam3, false, 0);
	iVar0 = PED::ADD_SCENARIO_BLOCKING_AREA(vParam0, vParam3, iParam6, 15);
	return iVar0;
}

void func_1207()
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_399))
	{
		__LIB_1__::func_216(&iLocal_399, 1237.099f, -1302.383f, 75.9027f, 0f, 0f, 0f, 7f, 7f, 5f);
		__LIB_2__::func_213(iLocal_399, "POST OFFICE CUTSCENE BLOCKER", 1, 0, 0, 0, -1082130432 /* Float: -1f */);
		iLocal_400 = PED::_0x4C39C95AE5DB1329(iLocal_399, 0, 15);
		POPULATION::_0xB56D41A694E42E86(iLocal_399, 10208, 0, 0, -1, -1, 0);
		POPULATION::_0x18262CAFEBB5FBE1(iLocal_399, 10208, 0, 0, -1, -1, 0);
	}
}

bool func_1210()
{
	if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_32, true, false), Global_36) < 8f && PED::IS_PED_FACING_PED(iLocal_32, Global_35, 90f))
	{
		return true;
	}
	return false;
}

bool func_1213(int iParam0, char* sParam1)
{
	if (func_664(iParam0, sParam1))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iParam0, sParam1, true);
		return true;
	}
	return false;
}

void func_1300(int iParam0, bool bParam1, bool bParam2)
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
void func_1301(int iParam0)
{
	if (!__LIB_0__::func_448(iParam0))
	{
		__LIB_0__::func_549(__LIB_0__::func_548(iParam0));
	}
}

void func_1368(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
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
		func_1893();
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

void func_1370(var uParam0)
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
			func_1170(iVar1, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_1170(iVar3, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_1371(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if ((__LIB_0__::func_84(uParam0, 268435456) && !__LIB_0__::func_86(__LIB_12__::func_720(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { __LIB_12__::func_720(uParam0) };
			func_1170(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

char* func_1458()
{
	return "CAMP_VIGNETTE_STATIONARY_TALK";
}

void func_1490(int iParam0)
{
	func_1980();
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0, "p_paper01x", iLocal_408, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0, "p_paper01x^1", iLocal_409, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0, "p_paper01x^2", iLocal_410, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0, "p_papercontract01a", iLocal_411, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0, "p_cs_ledger01x", iLocal_412, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0, "p_letterbundle_01x", iLocal_413, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0, "p_pencil01x", iLocal_414, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0, "p_stamp01x", iLocal_415, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0, "p_cs_billsingle01x", iLocal_420, 0);
}

bool func_1542()
{
	if (!__LIB_2__::func_618(&uLocal_305))
	{
		__LIB_5__::func_107(&uLocal_305);
	}
	else if (__LIB_5__::func_51(&uLocal_305) > 1.5f)
	{
		__LIB_5__::func_107(&uLocal_305);
		iLocal_328 = 0;
	}
	else if (PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_HORSE_SPRINT")))
	{
		iLocal_328++;
	}
	if (iLocal_328 >= 3)
	{
		return true;
	}
	return false;
}

void func_1578()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_2071(0);
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
	func_2071(1);
}

void func_1579()
{
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_324(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_1580()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_2074(0);
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
	func_2074(1);
}

void func_1581()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_1__::func_432(15000, 0, 0, 0, 1);
			func_2074(0);
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
	func_2074(1);
}

void func_1582()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_324(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_324(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_193(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_193(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
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

int func_1604(var uParam0, int iParam1, int iParam2, int iParam3)
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
	iVar11 = (func_2092(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_952(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_324(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	__LIB_1__::func_432(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

int func_1618(int iParam0, int iParam1)
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
	iVar0 = func_2101(Global_1310720.f_21, 2);
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
		if (func_2102(iVar0) == iVar6)
		{
			return 1;
		}
	}
	return 0;
}

void func_1659()
{
	int iVar0[7];
	int iVar8;
	iVar0[0] = joaat("DOCUMENT_COACH_ROBBERY_NOTE_01");
	iVar0[1] = joaat("DOCUMENT_COACH_ROBBERY_NOTE_02");
	iVar0[2] = joaat("DOCUMENT_COACH_ROBBERY_NOTE_03");
	iVar0[3] = joaat("DOCUMENT_COACH_ROBBERY_NOTE_04");
	iVar0[4] = joaat("DOCUMENT_COACH_ROBBERY_NOTE_07");
	iVar0[5] = joaat("DOCUMENT_COACH_ROBBERY_NOTE_08");
	iVar0[6] = joaat("DOCUMENT_COACH_ROBBERY_NOTE_09");
	iVar8 = 0;
	while (iVar8 < 7)
	{
		if (__LIB_1__::func_707(iVar0[iVar8], 1, 0))
		{
			func_193(iVar0[iVar8], 1, 1, -142743235, 0);
		}
		iVar8++;
	}
}

void func_1893()
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
	iVar0 = func_2228(6291456, 0);
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

void func_1980()
{
	vector3 vVar0;
	vVar0 = { 1228.078f, -1295.376f, 76.9063f };
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_408))
	{
		iLocal_408 = OBJECT::CREATE_OBJECT(joaat("P_PAPER01X"), vVar0, true, true, false, false, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_409))
	{
		iLocal_409 = OBJECT::CREATE_OBJECT(joaat("P_PAPER01X"), vVar0, true, true, false, false, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_410))
	{
		iLocal_410 = OBJECT::CREATE_OBJECT(joaat("P_PAPER01X"), vVar0, true, true, false, false, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_411))
	{
		iLocal_411 = OBJECT::CREATE_OBJECT(joaat("P_PAPER01X"), vVar0, true, true, false, false, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_412))
	{
		iLocal_412 = OBJECT::CREATE_OBJECT(joaat("P_CS_LEDGER01X"), vVar0, true, true, false, false, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_413))
	{
		iLocal_413 = OBJECT::CREATE_OBJECT(joaat("P_LETTERBUNDLE_01X"), vVar0, true, true, false, false, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_414))
	{
		iLocal_414 = OBJECT::CREATE_OBJECT(joaat("P_PENCIL01X"), vVar0, true, true, false, false, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_415))
	{
		iLocal_415 = OBJECT::CREATE_OBJECT(joaat("P_STAMP01X"), vVar0, true, true, false, false, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_420))
	{
		iLocal_420 = OBJECT::CREATE_OBJECT(joaat("P_CS_BILLSINGLE01X"), vVar0, true, true, false, false, true);
	}
}

void func_2071(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (bParam0)
	{
		func_324(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_324(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_324(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_2313(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_962(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_193(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_2318(Var0);
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

void func_2074(bool bParam0)
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
		func_324(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_324(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_324(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_324(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_324(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_324(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_324(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_324(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_324(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_324(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_324(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_193(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_193(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_193(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_193(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_193(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_193(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_193(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_193(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_193(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_193(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_193(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
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

int func_2092(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
							iVar49 = (iVar49 + func_2092(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_2092(iVar63, -915411861, 1, 0, 0));
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

int func_2101(int iParam0, int iParam1)
{
	if (iParam1 == 11)
	{
		return 101;
	}
	else if (iParam1 == 32)
	{
		return 126;
	}
	else if (iParam1 == 34)
	{
		return 127;
	}
	switch (iParam0)
	{
		case 79:
			switch (iParam1)
			{
				case 0:
					return 128;
				case 6:
					return 130;
				case 27:
					return 131;
				case 26:
					return 129;
				case 19:
					return 59;
				default:
					break;
			}
			break;
		case 38:
			switch (iParam1)
			{
				case 15:
					return 6;
				case 33:
					return 11;
				case 29:
					return 106;
				case 30:
					return 107;
				case 3:
					return 7;
				case 8:
					return 9;
				case 10:
					return 10;
				case 9:
					return 13;
				case 2:
					return 14;
				case 1:
					return 15;
				case 31:
					return 108;
				case 22:
					return 16;
				case 7:
					return 17;
				case 21:
					return 12;
				default:
					break;
			}
			break;
		case 98:
			switch (iParam1)
			{
				case 0:
					return 132;
				case 6:
					return 134;
				case 27:
					return 135;
				case 26:
					return 133;
				case 19:
					return 57;
				default:
					break;
			}
			break;
		case 69:
			switch (iParam1)
			{
				case 4:
					return 18;
				case 3:
					return 19;
				case 2:
					return 20;
				case 1:
					return 21;
				case 31:
					return 105;
				default:
					break;
			}
			break;
		case 71:
			switch (iParam1)
			{
				case 0:
					return 137;
				case 6:
					return 139;
				case 27:
					return 140;
				case 26:
					return 138;
				case 19:
					return 56;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 141;
				case 6:
					return 143;
				case 27:
					return 144;
				case 26:
					return 142;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 17:
					return 22;
				case 31:
					return 118;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 15:
					return 36;
				case 8:
					return 37;
				case 33:
					return 52;
				case 29:
					return 109;
				case 10:
					return 38;
				case 30:
					return 110;
				case 0:
					return 39;
				case 4:
					return 41;
				case 3:
					return 42;
				case 6:
					return 43;
				case 9:
					return 44;
				case 2:
					return 45;
				case 1:
					return 46;
				case 31:
					return 111;
				case 22:
					return 51;
				case 7:
					return 47;
				case 12:
					return 48;
				case 13:
					return 49;
				case 14:
					return 50;
				case 18:
					return 55;
				case 21:
					return 54;
				default:
					break;
			}
			break;
		case 105:
			switch (iParam1)
			{
				case 15:
					return 25;
				case 33:
					return 33;
				case 29:
					return 112;
				case 10:
					return 26;
				case 4:
					return 27;
				case 3:
					return 28;
				case 6:
					return 29;
				case 2:
					return 30;
				case 31:
					return 113;
				case 22:
					return 32;
				case 1:
					return 31;
				default:
					break;
			}
			break;
		case 101:
			switch (iParam1)
			{
				case 9:
					return 35;
				default:
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 18:
					return 4;
				default:
					break;
			}
			break;
		case 23:
			switch (iParam1)
			{
				case 2:
					return 23;
				case 1:
					return 24;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 145;
				case 26:
					return 146;
				case 6:
					return 147;
				case 27:
					return 148;
				case 19:
					return 58;
				default:
					break;
			}
			break;
		case 26:
			switch (iParam1)
			{
				case 29:
					return 114;
				case 33:
					return 66;
				case 10:
					return 60;
				case 3:
					return 61;
				case 20:
					return 62;
				case 9:
					return 63;
				case 31:
					return 115;
				case 22:
					return 64;
				case 2:
					return 65;
				default:
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 18:
					return 5;
				default:
					break;
			}
			break;
		case 76:
			switch (iParam1)
			{
				case 15:
					return 68;
				case 8:
					return 69;
				case 33:
					return 70;
				case 29:
					return 102;
				case 10:
					return 72;
				case 30:
					return 103;
				case 0:
					return 73;
				case 3:
					return 74;
				case 6:
					return 75;
				case 9:
					return 76;
				case 2:
					return 77;
				case 31:
					return 104;
				case 1:
					return 78;
				case 22:
					return 80;
				case 20:
					return 79;
				default:
					break;
			}
			break;
		case 92:
			switch (iParam1)
			{
				case 30:
					return 116;
				case 4:
					return 82;
				case 2:
					return 86;
				case 1:
					return 85;
				case 31:
					return 117;
				case 9:
					return 84;
				default:
					break;
			}
			break;
		case 78:
			switch (iParam1)
			{
				case 29:
					return 120;
				case 6:
					return 0;
				case 2:
					return 2;
				case 31:
					return 121;
				case 22:
					return 1;
				case 1:
					return 3;
				default:
					break;
			}
			break;
		case 90:
		case 128:
			switch (iParam1)
			{
				case 18:
					return 34;
				default:
					break;
			}
			break;
		case 28:
			switch (iParam1)
			{
				case 2:
					return 89;
				case 1:
					return 88;
				case 3:
					return 87;
				default:
					break;
			}
			Jump @2068; //curOff = 1790
			switch (iParam1)
			{
				case 31:
					return 119;
				default:
					break;
			}
			Jump @2068; //curOff = 1812
			switch (iParam1)
			{
				case 31:
					return 122;
				default:
					break;
			}
			Jump @2068; //curOff = 1834
			switch (iParam1)
			{
				case 31:
					return 124;
				default:
					break;
			}
			Jump @2068; //curOff = 1856
			switch (iParam1)
			{
				case 33:
					return 93;
				case 3:
					return 90;
				case 6:
					return 91;
				case 9:
					return 94;
				case 10:
					return 92;
				default:
					break;
			}
			Jump @2068; //curOff = 1922
			switch (iParam1)
			{
				case 3:
					return 95;
				case 2:
					return 96;
				default:
					break;
			}
			Jump @2068; //curOff = 1955
			switch (iParam1)
			{
				case 4:
					return 98;
				default:
					break;
			}
			Jump @2068; //curOff = 1977
			switch (iParam1)
			{
				case 31:
					return 123;
				case 2:
					return 99;
				case 1:
					return 100;
				default:
					break;
			}
			Jump @2068; //curOff = 2021
			switch (iParam1)
			{
				case 18:
					return 67;
				default:
					break;
			}
			Jump @2068; //curOff = 2043
			switch (iParam1)
			{
				case 4:
					return 125;
				default:
					break;
			}
			return -1;
		}
int func_2102(int iParam0)
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
		case 53:
			return joaat("SHOP_SDN_BARTENDER_SLUM");
		case 54:
			return joaat("SHOP_SDN_PHOTO_STUDIO");
		case 51:
			return joaat("SHOP_SDN_NEWSPAPER_BOY");
		case 109:
			return joaat("SHOP_SDN_BOUNTYHUNTING_MP_RETURN");
		case 110:
			return joaat("SHOP_SDN_COACH");
		case 52:
			return joaat("SHOP_SDN_BARTENDER");
		case 23:
			return joaat("SHOP_RGG_POST_OFFICE");
		case 24:
			return joaat("SHOP_RGG_TRAIN_STATION");
		case 28:
			return joaat("SHOP_RHO_GENERAL_STORE");
		case 27:
			return joaat("SHOP_RHO_FENCE");
		case 29:
			return joaat("SHOP_RHO_GUNSMITH");
		case 30:
			return joaat("SHOP_RHO_POST_OFFICE");
		case 26:
			return joaat("SHOP_RHO_BUTCHER");
		case 31:
			return joaat("SHOP_RHO_TRAIN_STATION");
		case 113:
			return joaat("SHOP_RHO_HORSE_FENCE_MP");
		case 32:
			return joaat("SHOP_RHO_NEWSPAPER_BOY");
		case 112:
			return joaat("SHOP_RHO_BOUNTYHUNTING_MP_RETURN");
		case 25:
			return joaat("SHOP_RHO_BANK");
		case 33:
			return joaat("SHOP_RHO_BARTENDER");
		case 60:
			return joaat("SHOP_STR_BUTCHER");
		case 61:
			return joaat("SHOP_STR_GENERAL_STORE");
		case 62:
			return joaat("SHOP_STR_WELCOME_CENTER");
		case 63:
			return joaat("SHOP_STR_HORSE_SHOP");
		case 65:
			return joaat("SHOP_STR_POST_OFFICE");
		case 115:
			return joaat("SHOP_STR_HORSE_FENCE_MP");
		case 64:
			return joaat("SHOP_STR_NEWSPAPER_BOY");
		case 114:
			return joaat("SHOP_STR_BOUNTYHUNTING_MP_RETURN");
		case 66:
			return joaat("SHOP_STR_BARTENDER");
		case 73:
			return joaat("SHOP_VAL_DOCTOR");
		case 74:
			return joaat("SHOP_VAL_GENERAL_STORE");
		case 75:
			return joaat("SHOP_VAL_GUNSMITH");
		case 69:
			return joaat("SHOP_VAL_BARBER");
		case 77:
			return joaat("SHOP_VAL_POST_OFFICE");
		case 76:
			return joaat("SHOP_VAL_HORSE_SHOP");
		case 72:
			return joaat("SHOP_VAL_BUTCHER");
		case 78:
			return joaat("SHOP_VAL_TRAIN_STATION");
		case 104:
			return joaat("SHOP_VAL_HORSE_FENCE_MP");
		case 71:
			return joaat("SHOP_VAL_BARTENDER_KEANE");
		case 81:
			return joaat("SHOP_VAL_BARTENDER_SLUM");
		case 80:
			return joaat("SHOP_VAL_NEWSPAPER_BOY");
		case 79:
			return joaat("SHOP_VAL_HOTEL");
		case 102:
			return joaat("SHOP_VAL_BOUNTYHUNTING_MP_RETURN");
		case 103:
			return joaat("SHOP_VAL_COACH");
		case 68:
			return joaat("SHOP_VAL_BANK");
		case 70:
			return joaat("SHOP_VAL_BARTENDER");
		case 35:
			return joaat("SHOP_SCM_HORSE_SHOP");
		case 86:
			return joaat("SHOP_VAN_POST_OFFICE");
		case 85:
			return joaat("SHOP_VAN_TRAIN_STATION");
		case 82:
			return joaat("SHOP_VAN_FENCE");
		case 117:
			return joaat("SHOP_VAN_HORSE_FENCE_MP");
		case 84:
			return joaat("SHOP_VAN_HORSE_SHOP");
		case 83:
			return joaat("SHOP_VAN_BARTENDER");
		case 116:
			return joaat("SHOP_VAN_COACH");
		case 1:
			return joaat("SHOP_ASB_NEWSPAPER_BOY");
		case 120:
			return joaat("SHOP_ASB_BOUNTYHUNTING_MP_RETURN");
		case 0:
			return joaat("SHOP_ASB_GUNSMITH");
		case 2:
			return joaat("SHOP_ASB_POST_OFFICE");
		case 3:
			return joaat("SHOP_ASB_TRAIN_STATION");
		case 121:
			return joaat("SHOP_ASB_HORSE_FENCE_MP");
		case 89:
			return joaat("SHOP_WAL_POST_OFFICE");
		case 87:
			return joaat("SHOP_WAL_GENERAL_STORE");
		case 88:
			return joaat("SHOP_WAL_TRAIN_STATION");
		case 101:
			return joaat("SHOP_DYNAMIC");
		case 126:
			return joaat("SHOP_WILDERNESS_SUPPLIES");
		case 127:
			return joaat("SHOP_ANYWHERE_HANDHELD");
		case 124:
			return joaat("SHOP_MAP_HORSE_FENCE_MP");
		case 149:
			return joaat("SHOP_WEAPON_MOD_STORE");
		case 150:
			return joaat("SHOP_CLOTHING");
		case 151:
			return joaat("SHOP_CAMP_SHAVING");
		case 152:
			return joaat("SHOP_WARDROBE");
		case 128:
			return joaat("SHOP_BVH_DOCTOR");
		case 129:
			return joaat("SHOP_BVH_GENERAL_STORE");
		case 130:
			return joaat("SHOP_BVH_GUNSMITH");
		case 131:
			return joaat("SHOP_BVH_HORSE_TRAINER");
		case 59:
			return 1529797091;
		case 132:
			return joaat("SHOP_CLM_DOCTOR");
		case 133:
			return joaat("SHOP_CLM_GENERAL_STORE");
		case 134:
			return joaat("SHOP_CLM_GUNSMITH");
		case 135:
			return joaat("SHOP_CLM_HORSE_TRAINER");
		case 57:
			return 1388932648;
		case 137:
			return joaat("SHOP_HSO_DOCTOR");
		case 138:
			return joaat("SHOP_HSO_GENERAL_STORE");
		case 139:
			return joaat("SHOP_HSO_GUNSMITH");
		case 140:
			return joaat("SHOP_HSO_HORSE_TRAINER");
		case 56:
			return 878376253;
		case 141:
			return joaat("SHOP_LAK_DOCTOR");
		case 142:
			return joaat("SHOP_LAK_GENERAL_STORE");
		case 143:
			return joaat("SHOP_LAK_GUNSMITH");
		case 144:
			return joaat("SHOP_LAK_HORSE_TRAINER");
		case 145:
			return joaat("SHOP_SHB_DOCTOR");
		case 146:
			return joaat("SHOP_SHB_GENERAL_STORE");
		case 147:
			return joaat("SHOP_SHB_GUNSMITH");
		case 148:
			return joaat("SHOP_SHB_HORSE_TRAINER");
		case 58:
			return -2076086367;
		case 136:
			return joaat("SHOP_CLM_HORSE_FENCE");
		case 119:
			return joaat("SHOP_CKT_HORSE_FENCE_MP");
		case 122:
			return joaat("SHOP_BUT_HORSE_FENCE_MP");
		case 95:
			return joaat("SHOP_AMD_GENERAL_STORE");
		case 97:
			return joaat("SHOP_AMD_BARTENDER");
		case 96:
			return joaat("SHOP_AMD_POST_OFFICE");
		case 90:
			return joaat("SHOP_TBL_GENERAL_STORE");
		case 93:
			return joaat("SHOP_TBL_BARTENDER");
		case 91:
			return joaat("SHOP_TBL_GUNSMITH");
		case 92:
			return joaat("SHOP_TBL_BUTCHER");
		case 94:
			return joaat("SHOP_TBL_HORSE_SHOP");
		case 98:
			return joaat("SHOP_RYC_FENCE");
		case 125:
			return joaat("SHOP_THL_FENCE");
		case 123:
			return joaat("SHOP_BEN_HORSE_FENCE_MP");
		case 99:
			return joaat("SHOP_BEN_POST_OFFICE");
		case 100:
			return joaat("SHOP_BEN_TRAIN_STATION");
		case 4:
			return 548657065;
		case 5:
			return 243086140;
		case 34:
			return -305029900;
		case 67:
			return 1008537949;
		default:
			break;
	}
	return 0;
}

int func_2228(int iParam0, int iParam1)
{
	var uVar0;
	return func_2415(&uVar0, iParam0, iParam1);
}

void func_2313(int iParam0)
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
	func_193(iParam0, 1, 1, -142743235, 1);
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
		func_193(uVar18[iVar36], 1, 1, -142743235, 1);
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

void func_2318(struct<6> Param0)
{
	if (!func_2459(Param0.f_4, 1))
	{
	}
	if (!func_2459(Param0, 1))
	{
	}
	if (!func_2459(Param0.f_2, 1))
	{
	}
	if (!func_2459(Param0.f_5, 1))
	{
	}
	if (!func_2459(Param0.f_3, 1))
	{
	}
	if (!func_2459(Param0.f_1, 1))
	{
	}
}

int func_2415(var uParam0, int iParam1, int iParam2)
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
		return func_2415(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

bool func_2459(int iParam0, int iParam1)
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
				if (func_2459(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_2459(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_2459(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_2459(iVar21, 1))
				{
				}
			}
		}
		__LIB_1__::func_712();
		return true;
	}
	return false;
}

