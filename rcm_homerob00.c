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
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	var uLocal_21 = 0;
	int iLocal_22[22] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	struct<136> Local_64 = { 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11 } ;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 11;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 11;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
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
	var uLocal_199 = 11;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
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
	var uLocal_222 = 0;
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
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	int iLocal_244[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_252 = 0;
	int iLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255[3] = { 0, 0, 0 };
	bool bLocal_259 = false;
	bool bLocal_260 = false;
	var uLocal_261 = 0;
	int iLocal_262 = 0;
	int iLocal_263 = 0;
	int iLocal_264 = 0;
	int iLocal_265 = 0;
	int iLocal_266[2] = { 0, 0 };
	int iLocal_269 = 0;
	int iLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	int iLocal_274 = 0;
	int iLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277 = 0;
	var uLocal_278 = 24;
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
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
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
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
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
	var uLocal_380 = -1;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 2;
	var uLocal_385 = 1;
	var uLocal_386 = 1;
	var uLocal_387 = 1;
	var uLocal_388 = 0;
	var uLocal_389 = 1;
	var uLocal_390 = 2;
	var uLocal_391 = 2;
	var uLocal_392 = 3;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 3;
	var uLocal_396 = 1;
	var uLocal_397 = 3;
	var uLocal_398 = 3;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	int iLocal_401 = 0;
	int iLocal_402 = 0;
	int iLocal_403 = 0;
	int iLocal_404 = 0;
	int iLocal_405 = 0;
	struct<15> Local_406 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = -1;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 1097859072;
	var uLocal_439 = 1000;
	var uLocal_440 = 1067450368;
	var uLocal_441 = 5000;
	var uLocal_442 = 42;
	var uLocal_443 = 1103626240;
	var uLocal_444 = 1077936128;
	var uLocal_445 = 1106247680;
	var uLocal_446 = 1103101952;
	var uLocal_447 = 1097859072;
	var uLocal_448 = 1103626240;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = -1;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 1097859072;
	var uLocal_467 = 1000;
	var uLocal_468 = 1067450368;
	var uLocal_469 = 5000;
	var uLocal_470 = 42;
	var uLocal_471 = 1103626240;
	var uLocal_472 = 1077936128;
	var uLocal_473 = 1106247680;
	var uLocal_474 = 1103101952;
	var uLocal_475 = 1097859072;
	var uLocal_476 = 1103626240;
	var uLocal_477 = 0;
	int iLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = -1;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 1097859072;
	var uLocal_497 = 1000;
	var uLocal_498 = 1067450368;
	var uLocal_499 = 5000;
	var uLocal_500 = 42;
	var uLocal_501 = 1103626240;
	var uLocal_502 = 1077936128;
	var uLocal_503 = 1106247680;
	var uLocal_504 = 1103101952;
	var uLocal_505 = 1097859072;
	var uLocal_506 = 1103626240;
	var uLocal_507 = 0;
	int iLocal_508 = 0;
	int iLocal_509 = 0;
	int iLocal_510 = 0;
	var uLocal_511 = 0;
	int iLocal_512 = 0;
	int iLocal_513 = 0;
	int iLocal_514 = 0;
	var uLocal_515 = 0;
	float fLocal_516 = 0f;
	float fLocal_517 = 0f;
	char* sLocal_518 = NULL;
	char* sLocal_519 = NULL;
	int iLocal_520 = 0;
	struct<21> Local_521[1];
	var uLocal_543 = 2;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 570;
	var uLocal_547 = 1065353216;
	var uLocal_548 = -1082130432;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 2;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 570;
	var uLocal_564 = 1065353216;
	var uLocal_565 = -1082130432;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 2;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	int iLocal_578 = 0;
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
	int iLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 1065353216;
	var uLocal_603 = 1065353216;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 1065353216;
	var uLocal_608 = 1065353216;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 1065353216;
	var uLocal_613 = 1065353216;
	var uLocal_614 = 0;
	var uLocal_615 = 1040187392;
	var uLocal_616 = 1040187392;
	var uLocal_617 = -1;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = -1082130432;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	vector3 vLocal_652 = { 0f, 0f, 0f };
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	vector3 vLocal_664[39] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_782 = 0;
	int iLocal_783 = 0;
	struct<9> Local_784 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	struct<9> Local_800 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion
void __EntryFunction__()
{
	struct<2606> Var0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_274 = joaat("STAGECOACH001X");
	iLocal_404 = 15;
	iLocal_405 = 15;
	fLocal_516 = 12f;
	fLocal_517 = 0.75f;
	iLocal_578 = __LIB_2__::func_340(0, 0, 0) | 64 | 8192 | 4194304;
	iLocal_597 = 1;
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
		func_4(&Var0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	func_5(&Var0);
	while (true)
	{
		func_6(&Var0);
		if (__LIB_0__::func_1(Var0.f_172, 50331648))
		{
			func_8(&Var0);
		}
		else
		{
			switch (Var0.f_177)
			{
				case 0:
					__LIB_12__::func_906(&Var0);
					break;
				case 1:
					func_10(&Var0);
					break;
				case 3:
					func_11(&Var0);
					break;
				case 4:
					func_12(&Var0);
					break;
				case 2:
					func_13(&Var0);
					break;
				case 5:
					func_14(&Var0);
					break;
				case 6:
					func_15(&Var0);
					break;
				case 7:
					func_16(&Var0);
					break;
				case 8:
					func_17(&Var0);
					break;
				case 9:
					func_18(&Var0, 0);
					break;
				case 10:
					func_19(&Var0);
					break;
				case 11:
					if (Var0.f_174 == __LIB_10__::func_698())
					{
						__LIB_0__::func_297();
						__LIB_1__::func_140();
					}
					func_23(&Var0);
					break;
			}
		}
		BUILTIN::WAIT(0);
	}
}

void func_4(var uParam0)
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
			func_17(uParam0);
		}
		else
		{
			func_18(uParam0, 1);
			return;
		}
	}
	if (uParam0->f_177 == 10)
	{
		__LIB_0__::func_11(uParam0);
	}
	__LIB_12__::func_836(&(uParam0->f_753));
	func_23(uParam0);
}

void func_5(var uParam0)
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
	func_37(uParam0);
	__LIB_12__::func_642(uParam0);
	__LIB_12__::func_781(uParam0, 0, 0, 0, -1, -1, 0);
	__LIB_12__::func_782(uParam0, 0, 0, 0, -1, -1, 0);
	__LIB_12__::func_894(&(uParam0->f_178));
	if (Global_1347702[uParam0->f_174 /*49*/].f_28 != 0)
	{
		__LIB_12__::func_867(uParam0, Global_1347702[uParam0->f_174 /*49*/].f_28, 7);
	}
	func_43(uParam0);
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

void func_6(var uParam0)
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
	if (func_54(uParam0))
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
						Var1 = { func_62(0) };
						if (func_63(&Var1))
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
			if (func_65(uParam0))
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
			if (func_71(uParam0))
			{
				if (__LIB_12__::func_644(uParam0) == 2 || __LIB_12__::func_644(uParam0) == 12)
				{
					func_23(uParam0);
					return;
				}
				func_73(uParam0);
				__LIB_12__::func_837(uParam0, 10);
				return;
			}
			else
			{
				__LIB_13__::func_52(uParam0);
			}
			func_75(uParam0);
		}
	}
	func_76(uParam0);
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

void func_8(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_172, 8))
	{
		func_18(uParam0, 0);
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
				func_73(uParam0);
			}
			func_23(uParam0);
		}
	}
}

void func_10(var uParam0)
{
	if (func_86(uParam0))
	{
		if (__LIB_12__::func_639(uParam0, 64))
		{
			func_87(uParam0);
			__LIB_12__::func_837(uParam0, 2);
			__LIB_12__::func_964(uParam0);
		}
		else if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_12, 4096))
		{
			__LIB_12__::func_837(uParam0, 3);
		}
		else
		{
			func_88(uParam0);
			__LIB_12__::func_837(uParam0, 4);
		}
	}
}

void func_11(var uParam0)
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
				func_87(uParam0);
				__LIB_12__::func_964(uParam0);
			}
			__LIB_12__::func_837(uParam0, iVar0);
		}
	}
}

void func_12(var uParam0)
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
	if (func_93(uParam0))
	{
		func_87(uParam0);
		iVar0 = func_94(uParam0);
		if (iVar0 == 5)
		{
			__LIB_12__::func_646(uParam0, 4);
			func_14(uParam0);
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
			func_15(uParam0);
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

void func_13(var uParam0)
{
	if (!__LIB_0__::func_1(uParam0->f_172, 8192))
	{
		return;
	}
	__LIB_12__::func_837(uParam0, func_97(uParam0, __LIB_12__::func_767(uParam0)));
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

void func_14(var uParam0)
{
	if (func_99(uParam0))
	{
		func_15(uParam0);
		__LIB_12__::func_837(uParam0, 6);
	}
}

void func_15(var uParam0)
{
	int iVar0;
	func_100(uParam0);
	if (__LIB_12__::func_647(&(uParam0->f_2575)))
	{
		if (func_102(uParam0))
		{
			__LIB_12__::func_966(uParam0, 1);
			iVar0 = func_104(uParam0);
			__LIB_12__::func_837(uParam0, iVar0);
		}
	}
	else
	{
		__LIB_0__::func_8(&(uParam0->f_172), 16);
		__LIB_12__::func_966(uParam0, 0);
		iVar0 = func_104(uParam0);
		__LIB_12__::func_837(uParam0, iVar0);
	}
}

void func_16(var uParam0)
{
	int iVar0;
	if (func_105(uParam0))
	{
		return;
	}
	if (__LIB_0__::func_1(uParam0->f_172, 262144))
	{
		__LIB_14__::func_18(uParam0, __LIB_0__::func_58(uParam0));
	}
	iVar0 = func_108(uParam0);
	if (iVar0 == 5)
	{
		__LIB_12__::func_646(uParam0, 7);
		func_14(uParam0);
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
		func_15(uParam0);
	}
	__LIB_12__::func_837(uParam0, iVar0);
}

void func_17(var uParam0)
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
		__LIB_11__::func_382(uParam0->f_174, 1);
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
		func_123(uParam0);
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
			func_129(uParam0->f_174, 1, 1, 0, 1, 1, bVar3);
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
	func_73(uParam0);
	if (__LIB_0__::func_1(uParam0->f_172, 32768) || __LIB_12__::func_738(uParam0))
	{
		func_23(uParam0);
	}
	__LIB_12__::func_837(uParam0, 10);
}

void func_18(var uParam0, bool bParam1)
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
	__LIB_11__::func_382(uParam0->f_174, 0);
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
		func_73(uParam0);
	}
	if (bParam1)
	{
		func_23(uParam0);
	}
	else
	{
		__LIB_12__::func_837(uParam0, 10);
	}
}

void func_19(var uParam0)
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
			func_23(uParam0);
			return;
		}
	}
	if (__LIB_0__::func_0(uParam0) && __LIB_10__::func_265())
	{
		__LIB_0__::func_11(uParam0);
		func_23(uParam0);
	}
	else if (!__LIB_0__::func_899(&(uParam0->f_2585)) || IntToFloat(__LIB_1__::func_592(&(uParam0->f_2585))) > __LIB_10__::func_381(uParam0))
	{
		__LIB_4__::func_89(&(uParam0->f_2585), 1);
		if (func_151(uParam0))
		{
			__LIB_12__::func_837(uParam0, 11);
		}
	}
}

void func_23(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	func_160(uParam0);
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
		__LIB_11__::func_382(uParam0->f_174, 0);
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

void func_37(var uParam0)
{
	__LIB_5__::func_467(40);
	__LIB_12__::func_658(uParam0, 2);
	__LIB_12__::func_656(uParam0, 1.5f);
	__LIB_12__::func_657(uParam0, 1.5f);
	__LIB_6__::func_413(joaat("WEATHER_GROUP_GOOD"), 0, 0, 1103626240 /* Float: 25f */);
	__LIB_3__::func_867(&(iLocal_22[4]), &uLocal_271, func_191(4), func_192(4), func_193(4), 1, 10208, 1, 2, "RHMRB_VOL_BARN");
	__LIB_3__::func_867(&(iLocal_22[5]), &uLocal_272, func_191(5), func_192(5), func_193(5), 1, 10208, 1, 2, "RHMRB_VOL_BARN_RESTRICT");
	iLocal_22[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(func_191(0), func_192(0), func_193(0), "rcm_homerob00 - Restriction");
	iLocal_22[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(func_191(1), func_192(1), func_193(1), "rcm_homerob00 - Leadin Trigger");
	iLocal_22[12] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(func_191(12), func_192(12), func_193(12), "rcm_homerob00 - Leadin Restrict");
	__LIB_13__::func_894(1, 1);
	__LIB_4__::func_58(1, 1);
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_22[0]))
	{
		__LIB_13__::func_383(uParam0, &(iLocal_22[0]), 0, 0, 0, 0);
	}
	__LIB_9__::func_319(2);
}

void func_43(var uParam0)
{
	__LIB_12__::func_908(uParam0, 0);
	__LIB_12__::func_867(uParam0, iLocal_274, 7);
	__LIB_12__::func_867(uParam0, joaat("P_BINOCULARS01X"), 7);
	__LIB_12__::func_867(uParam0, joaat("P_CIGARETTE01X"), 7);
	__LIB_12__::func_867(uParam0, joaat("P_CIGARETTEBOX01X"), 7);
	TASK::REQUEST_WAYPOINT_RECORDING(func_203());
	TASK::REQUEST_WAYPOINT_RECORDING(func_204());
	STREAMING::_REQUEST_SCENARIO_TYPE(joaat("PROP_HUMAN_SEAT_BENCH"), 15, 0, 0);
	STREAMING::_REQUEST_SCENARIO_TYPE(joaat("PROP_HUMAN_SEAT_CHAIR_SMOKING"), 15, 0, 0);
}

bool func_54(var uParam0)
{
	int iVar0;
	bool bVar1;
	switch (__LIB_5__::func_381(&iVar0))
	{
		case 1:
			StringCopy(&(uParam0->f_2578), "", 24);
			func_18(uParam0, 0);
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

struct<4> func_62(int iParam0)
{
	int iVar0;
	struct<4> Var1;
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 0:
			Var1 = { Local_64[0 /*4*/] };
			Var1.f_3 = Local_64[0 /*4*/].f_3;
			break;
		case 1:
			Var1 = { Local_64[1 /*4*/] };
			Var1.f_3 = Local_64[1 /*4*/].f_3;
			break;
		case 2:
			Var1 = { Local_64[2 /*4*/] };
			Var1.f_3 = Local_64[2 /*4*/].f_3;
			break;
		case 3:
			Var1 = { Local_64[3 /*4*/] };
			Var1.f_3 = Local_64[3 /*4*/].f_3;
			break;
		case 4:
			Var1 = { Local_64[4 /*4*/] };
			Var1.f_3 = Local_64[4 /*4*/].f_3;
			break;
		case 5:
			Var1 = { Local_64[5 /*4*/] };
			Var1.f_3 = Local_64[5 /*4*/].f_3;
			break;
		case 6:
			Var1 = { Local_64[6 /*4*/] };
			Var1.f_3 = Local_64[6 /*4*/].f_3;
			break;
		case 7:
			Var1 = { Local_64[7 /*4*/] };
			Var1.f_3 = Local_64[7 /*4*/].f_3;
			break;
		case 8:
			Var1 = { Local_64[8 /*4*/] };
			Var1.f_3 = Local_64[8 /*4*/].f_3;
			break;
		case 9:
			Var1 = { Local_64[9 /*4*/] };
			Var1.f_3 = Local_64[9 /*4*/].f_3;
			break;
		case 10:
			Var1 = { Local_64[10 /*4*/] };
			Var1.f_3 = Local_64[10 /*4*/].f_3;
			break;
	}
	return Var1;
}

bool func_63(var uParam0)
{
	return func_214(*uParam0, uParam0->f_3);
}

bool func_65(var uParam0)
{
	int iVar0;
	if (__LIB_8__::func_406(67108864))
	{
		return false;
	}
	if (__LIB_8__::func_406(524288))
	{
		StringCopy(&(uParam0->f_2578), "RHMR0_FAIL2", 24);
		__LIB_13__::func_852(32768);
		return true;
	}
	else if (__LIB_8__::func_406(1048576))
	{
		StringCopy(&(uParam0->f_2578), "RHMR0_FAIL7", 24);
		__LIB_13__::func_852(32768);
		return true;
	}
	if ((ENTITY::IS_ENTITY_DEAD(iLocal_262) && __LIB_1__::func_22(5)) && __LIB_12__::func_645(uParam0) != 29)
	{
		StringCopy(&(uParam0->f_2578), "RHMR0_FAIL3", 24);
		__LIB_13__::func_852(32768);
		return true;
	}
	else if (__LIB_3__::func_528(iLocal_262, Global_35))
	{
		StringCopy(&(uParam0->f_2578), "RHMR0_FAIL3", 24);
		__LIB_13__::func_852(32768);
		return true;
	}
	else if (__LIB_0__::func_756(1, 65536))
	{
		StringCopy(&(uParam0->f_2578), "RHMR0_FAIL3", 24);
		__LIB_13__::func_852(32768);
		return true;
	}
	else if (ENTITY::IS_ENTITY_DEAD(iLocal_263) && __LIB_12__::func_645(uParam0) != 29)
	{
		StringCopy(&(uParam0->f_2578), "RHMR0_FAIL4", 24);
		__LIB_13__::func_852(32768);
		return true;
	}
	else if (ENTITY::IS_ENTITY_DEAD(iLocal_264) || PED::IS_PED_FATALLY_INJURED(iLocal_264))
	{
		StringCopy(&(uParam0->f_2578), "RHMR0_FAIL12", 24);
		__LIB_13__::func_852(32768);
		return true;
	}
	else if (func_221(&iLocal_265, &uLocal_449, &iLocal_478))
	{
		if (ENTITY::IS_ENTITY_DEAD(iLocal_265))
		{
			StringCopy(&(uParam0->f_2578), "RHMR0_FAIL9", 24);
		}
		else if (iLocal_478 == 8)
		{
			StringCopy(&(uParam0->f_2578), "RHMR0_FAIL10", 24);
		}
		else
		{
			StringCopy(&(uParam0->f_2578), "RHMR0_FAIL6", 24);
		}
		__LIB_13__::func_852(32768);
		return true;
	}
	else if ((__LIB_1__::func_394(PLAYER::PLAYER_ID(), 0, 0, 1) && !__LIB_8__::func_406(262144)) || bLocal_260)
	{
		StringCopy(&(uParam0->f_2578), "RHMR0_FAIL8", 24);
		__LIB_13__::func_852(32768);
		return true;
	}
	iVar0 = __LIB_12__::func_645(uParam0);
	if (iVar0 > 16)
	{
		if (!__LIB_0__::func_91())
		{
			if (!__LIB_1__::func_394(PLAYER::PLAYER_ID(), 0, 0, 1))
			{
				if (func_224(&(vLocal_664[38 /*3*/])))
				{
					LAW::_0xEDFC6C1FD1C964F5(PLAYER::PLAYER_ID(), joaat("CRIME_ASSAULT"), 0, 0, 0, 0, 0, 0, 0);
				}
			}
		}
	}
	if (!__LIB_8__::func_406(8192) && __LIB_8__::func_406(512))
	{
		if (ENTITY::IS_ENTITY_DEAD(iLocal_14) || FIRE::IS_ENTITY_ON_FIRE(iLocal_14))
		{
			StringCopy(&(uParam0->f_2578), "RHMR0_FAIL1", 24);
			__LIB_13__::func_852(32768);
			return true;
		}
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_14, false, false))
		{
			StringCopy(&(uParam0->f_2578), "RHMR0_FAIL11", 24);
			__LIB_13__::func_852(32768);
			return true;
		}
	}
	if (__LIB_8__::func_406(131072))
	{
		StringCopy(&(uParam0->f_2578), "RHMR0_FAIL5", 24);
		__LIB_13__::func_852(32768);
		return true;
	}
	return false;
}

bool func_71(var uParam0)
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
	if (func_227(uParam0->f_174))
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
		if (__LIB_7__::func_411(PLAYER::PLAYER_ID(), 1, 0, 1))
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
	if (func_236(uParam0) || __LIB_12__::func_663(uParam0->f_174, uParam0->f_743))
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

void func_73(var uParam0)
{
	bool bVar0;
	__LIB_12__::func_955();
	func_241(uParam0);
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
		__LIB_12__::func_930(uParam0->f_174);
	}
	else if (__LIB_12__::func_644(uParam0) == 2)
	{
	}
	else if (!__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_14, 2))
	{
		__LIB_11__::func_382(uParam0->f_174, 0);
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

void func_75(var uParam0)
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
			func_256(uParam0);
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

void func_76(var uParam0)
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
	bVar0 = func_263(uParam0);
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

bool func_86(var uParam0)
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

void func_87(var uParam0)
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
		__LIB_11__::func_382(uParam0->f_174, 0);
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
			Var1 = { func_62(0) };
			if (!func_63(&Var1))
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
		__LIB_12__::func_997(uParam0, func_62(0), func_62(1), 0, 1, 0);
	}
}

void func_88(var uParam0)
{
	func_300(uParam0, 0);
}

bool func_93(var uParam0)
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
		__LIB_14__::func_18(uParam0, bVar0);
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
		if (uParam0->f_171 != 0 || func_301(uParam0))
		{
			if (__LIB_13__::func_40(uParam0))
			{
				return true;
			}
		}
	}
	return false;
}

int func_94(var uParam0)
{
	func_303();
	func_304();
	func_305();
	__LIB_1__::func_948(-308659358, 0, 0, 0, 0, 0, 1, 0);
	__LIB_1__::func_948(-66987983, 0, 0, 0, 0, 0, 1, 0);
	return 6;
}

int func_97(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = iParam1;
	switch (iVar0)
	{
		case 0:
			if (func_308(0, 1, uParam0))
			{
				__LIB_9__::func_770(1, 1);
				return 5;
			}
			break;
		case 2:
			if (func_308(2, 4, uParam0))
			{
				__LIB_9__::func_770(1, 1);
				return 7;
			}
			break;
		case 3:
			if (func_308(3, 8, uParam0))
			{
				__LIB_9__::func_770(1, 1);
				return 7;
			}
			break;
		case 4:
			if (func_308(4, 16, uParam0))
			{
				__LIB_9__::func_770(1, 1);
				return 7;
			}
			break;
		case 5:
			if (func_308(5, 32, uParam0) && __LIB_0__::func_756(1, 16777216))
			{
				func_310();
				func_311();
				func_312(&iLocal_14, iLocal_274, 12);
				return 7;
			}
			break;
		case 6:
			if (func_308(6, 64, uParam0) && __LIB_0__::func_756(1, 67108864))
			{
				func_313();
				func_311();
				func_312(&iLocal_14, iLocal_274, 12);
				return 7;
			}
			break;
		case 7:
			if (func_308(7, 128, uParam0) && __LIB_0__::func_756(1, 268435456))
			{
				func_311();
				return 7;
			}
			break;
		case 8:
			if (func_308(8, 256, uParam0))
			{
				__LIB_9__::func_770(1, 1);
				return 7;
			}
			break;
		case 9:
			if (func_308(9, 512, uParam0))
			{
				__LIB_0__::func_769();
				__LIB_13__::func_852(8192);
				__LIB_9__::func_770(1, 1);
				return 5;
			}
			break;
		case 10:
			if (func_308(10, 1024, uParam0))
			{
				__LIB_13__::func_852(8192);
				__LIB_9__::func_770(1, 1);
				return 7;
			}
			break;
		default:
			if (func_308(1, 2, uParam0))
			{
				func_312(&iLocal_14, iLocal_274, 12);
				return 7;
			}
			break;
	}
	return 2;
}

bool func_99(var uParam0)
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
		if (!__LIB_13__::func_448(uParam0))
		{
			if ((__LIB_0__::func_1(uParam0->f_172, 8192) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_751)) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_751, false))
			{
				if (__LIB_0__::func_1(uParam0->f_172, 8388608) || func_86(uParam0))
				{
					__LIB_12__::func_918(uParam0, 2);
					if (!__LIB_0__::func_1(uParam0->f_172, 16))
					{
						func_88(uParam0);
					}
				}
			}
			return false;
		}
	}
	else if (__LIB_0__::func_1(uParam0->f_172, 262144) && !__LIB_0__::func_1(uParam0->f_172, 256))
	{
		__LIB_14__::func_18(uParam0, 0);
		if (!__LIB_0__::func_1(uParam0->f_172, 1048576))
		{
			return false;
		}
	}
	else
	{
		__LIB_12__::func_668();
		__LIB_12__::func_669(uParam0);
		if (!__LIB_13__::func_449(uParam0))
		{
			return false;
		}
	}
	if (!__LIB_0__::func_1(uParam0->f_172, 1))
	{
	}
	return true;
}

void func_100(var uParam0)
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
		__LIB_12__::func_997(uParam0, func_62(0), func_62(1), 0, 1, 1);
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

int func_102(var uParam0)
{
	struct<4> Var0;
	MemCopy(&Var0, {uParam0->f_2575}, 4);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		return 1;
	}
	return func_326(Var0, &(uParam0->f_206), uParam0);
}

int func_104(var uParam0)
{
	switch (__LIB_13__::func_22(uParam0))
	{
		case 0:
			__LIB_13__::func_33(uParam0, 1);
			break;
		case 1:
			__LIB_13__::func_33(uParam0, 2);
			break;
		case 2:
			__LIB_4__::func_389(-308659358, 1, 1);
			__LIB_4__::func_389(-66987983, 1, 1);
			__LIB_13__::func_33(uParam0, -1);
			break;
	}
	return 7;
}

bool func_105(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_172, 256) && !__LIB_0__::func_1(uParam0->f_172, 1024))
	{
		if (!__LIB_13__::func_448(uParam0))
		{
			if (__LIB_0__::func_1(uParam0->f_172, 512) && __LIB_0__::func_1(uParam0->f_172, 8192))
			{
				if (func_86(uParam0))
				{
					if (!__LIB_0__::func_1(uParam0->f_172, 16))
					{
						func_88(uParam0);
					}
				}
			}
			return true;
		}
		else
		{
			if (__LIB_0__::func_1(uParam0->f_172, 1024) && uParam0->f_176 == 4)
			{
				__LIB_12__::func_997(uParam0, func_62(0), func_62(1), 0, 1, 1);
			}
			return false;
		}
	}
	return false;
}

int func_108(var uParam0)
{
	func_335(uParam0);
	func_336(uParam0);
	func_337(uParam0);
	if (!__LIB_8__::func_406(8192) && __LIB_8__::func_406(512))
	{
		func_338(&iLocal_14, 100);
	}
	switch (__LIB_12__::func_645(uParam0))
	{
		case 0:
			func_304();
			func_339(uParam0, 0, 1, 1);
			__LIB_0__::func_289(5, 4, 1);
			__LIB_13__::func_891(1);
			__LIB_4__::func_58(1, 1);
			func_342(&(iLocal_22[11]));
			func_300(uParam0, 1);
			__LIB_12__::func_937(uParam0, 2);
			break;
		case 1:
			if (func_344(uParam0))
			{
				__LIB_4__::func_932(18, 0);
				__LIB_0__::func_289(5, 4, 1);
				if (__LIB_8__::func_379(2))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("RHMR0_RESTART_1");
					func_339(uParam0, 1, 2, 0);
					func_342(&(iLocal_22[11]));
					func_311();
					__LIB_14__::func_290(2);
					__LIB_9__::func_733(2);
					func_300(uParam0, 1);
					__LIB_12__::func_937(uParam0, 2);
				}
				else if (__LIB_8__::func_379(4))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("RHMR0_RESTART_2");
					if (__LIB_13__::func_853())
					{
						func_339(uParam0, 2, 3, 0);
					}
					else
					{
						func_339(uParam0, 2, 4, 0);
					}
					func_342(&(iLocal_22[11]));
					func_311();
					__LIB_14__::func_290(4);
					func_300(uParam0, 1);
					if (__LIB_13__::func_853())
					{
						__LIB_13__::func_17(&(uParam0->f_206), func_350(4), 0);
					}
					else
					{
						__LIB_13__::func_17(&(uParam0->f_206), func_350(0), 0);
					}
					iLocal_48 = 5;
					func_352(uParam0, 16, &iLocal_401, &(vLocal_664[4 /*3*/]));
					func_353(&iLocal_262, &iLocal_275);
					__LIB_12__::func_937(uParam0, 3);
				}
				else if (__LIB_8__::func_379(8))
				{
					func_354(&uLocal_261);
					func_339(uParam0, 3, 5, 0);
					__LIB_13__::func_17(&(uParam0->f_206), func_350(4), 0);
					func_355(512);
					func_311();
					__LIB_14__::func_290(8);
					__LIB_12__::func_937(uParam0, 4);
				}
				else if (__LIB_8__::func_379(16))
				{
					func_354(&uLocal_261);
					func_339(uParam0, 4, 6, 0);
					__LIB_13__::func_17(&(uParam0->f_206), func_350(0), 0);
					func_355(512);
					func_311();
					__LIB_14__::func_290(16);
					__LIB_12__::func_937(uParam0, 4);
				}
				else if (__LIB_8__::func_379(32))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("RHMR0_RESTART_NIGHT");
					func_356(&iLocal_270, &iLocal_266, &iLocal_269);
					func_357(func_203());
					__LIB_7__::func_448(Global_1347702[94 /*49*/].f_15, 1);
					func_342(&(iLocal_22[11]));
					func_339(uParam0, 5, 7, 0);
					func_359(8);
					func_311();
					__LIB_14__::func_290(32);
					func_360(&(iLocal_22[18]), &(iLocal_22[14]), &(iLocal_22[19]));
					__LIB_12__::func_937(uParam0, 5);
				}
				else if (__LIB_8__::func_379(64))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("RHMR0_RESTART_DAY");
					func_356(&iLocal_270, &iLocal_266, &iLocal_269);
					func_357(func_203());
					__LIB_7__::func_448(Global_1347702[94 /*49*/].f_15, 0);
					func_342(&(iLocal_22[11]));
					func_339(uParam0, 6, 7, 0);
					func_359(4);
					func_311();
					__LIB_14__::func_290(64);
					func_360(&(iLocal_22[18]), &(iLocal_22[14]), &(iLocal_22[19]));
					__LIB_12__::func_937(uParam0, 5);
				}
				else if (__LIB_8__::func_379(128))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("RHMR0_RESTART_3");
					func_356(&iLocal_270, &iLocal_266, &iLocal_269);
					func_357(func_203());
					func_339(uParam0, 7, 8, 0);
					func_342(&(iLocal_22[11]));
					func_311();
					__LIB_14__::func_290(128);
					func_360(&(iLocal_22[18]), &(iLocal_22[14]), &(iLocal_22[19]));
					__LIB_12__::func_937(uParam0, 13);
				}
				else if (__LIB_8__::func_379(256))
				{
					func_356(&iLocal_270, &iLocal_266, &iLocal_269);
					func_357(func_203());
					__LIB_14__::func_290(256);
					__LIB_13__::func_852(-2147483648);
					func_339(uParam0, 8, 9, 0);
					func_300(uParam0, 2);
					__LIB_0__::func_289(5, 4, 1);
					__LIB_0__::func_928(&uLocal_278, iLocal_262, "HOSEA", 1);
					__LIB_7__::func_206(1);
					func_311();
					__LIB_12__::func_937(uParam0, 17);
				}
				else if (__LIB_8__::func_379(512))
				{
					func_356(&iLocal_270, &iLocal_266, &iLocal_269);
					func_357(func_203());
					__LIB_14__::func_290(512);
					func_339(uParam0, 9, 10, 0);
					__LIB_12__::func_937(uParam0, 18);
				}
				else if (__LIB_8__::func_379(1024))
				{
					func_363(iLocal_262, iLocal_263, 1, -1f, 1, 1);
					__LIB_14__::func_290(1024);
					__LIB_12__::func_937(uParam0, 29);
				}
			}
			break;
		case 2:
			func_364();
			func_365(uParam0);
			if (iLocal_48 == 5)
			{
				__LIB_12__::func_937(uParam0, 3);
			}
			break;
		case 3:
			func_366(&uLocal_515, 0);
			func_364();
			func_365(uParam0);
			if ((iLocal_48 == 6 || func_367()) || __LIB_13__::func_854())
			{
				__LIB_12__::func_937(uParam0, 4);
			}
			break;
		case 4:
			func_366(&uLocal_515, 0);
			func_364();
			if (func_365(uParam0))
			{
				func_354(&uLocal_261);
				func_312(&iLocal_14, iLocal_274, 12);
				__LIB_0__::func_325(&(iLocal_244[4]));
				__LIB_0__::func_325(&(iLocal_244[5]));
				__LIB_0__::func_325(&(iLocal_244[6]));
				func_370(&iLocal_262, 0);
				func_371(&iLocal_264, 136, 0);
				func_372(&(iLocal_22[6]), &(iLocal_22[7]), &(iLocal_22[8]), 1, 0);
				if (__LIB_13__::func_853())
				{
					func_373(&(uParam0->f_206), 4);
				}
				else
				{
					func_373(&(uParam0->f_206), 0);
				}
				__LIB_12__::func_937(uParam0, 5);
				return 5;
			}
			else if (func_367() || __LIB_13__::func_854())
			{
				PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), false, 0, -1, false);
				AUDIO::_0x36559148B78853B3(1, 0, 0);
				func_374();
				__LIB_0__::func_325(&(iLocal_244[4]));
				__LIB_0__::func_325(&(iLocal_244[5]));
				__LIB_0__::func_325(&(iLocal_244[6]));
				__LIB_1__::func_721(7);
				iLocal_401 = 0;
				func_375();
				func_371(&iLocal_262, 375, 0);
				__LIB_5__::func_438(&uLocal_636);
				__LIB_0__::func_172(iLocal_22[10]);
				func_370(&iLocal_262, 0);
				func_378(0);
				func_371(&iLocal_264, 136, 0);
				func_372(&(iLocal_22[6]), &(iLocal_22[7]), &(iLocal_22[8]), 1, 0);
				if (__LIB_13__::func_853())
				{
					func_310();
					if (__LIB_2__::func_118(iLocal_262, 1, 1) < 15f)
					{
						__LIB_13__::func_879(&uLocal_278, "RH0_DAY_APRCH0b", iLocal_262, Global_35, 0, 0, 1, 1);
					}
				}
				else
				{
					func_313();
					if (__LIB_2__::func_118(iLocal_262, 1, 1) < 15f)
					{
						__LIB_13__::func_879(&uLocal_278, "RH0_DAY_APRCH0a", iLocal_262, Global_35, 0, 0, 1, 1);
					}
				}
				__LIB_3__::func_456(iLocal_262);
				func_312(&iLocal_14, iLocal_274, 12);
				__LIB_12__::func_937(uParam0, 5);
			}
			break;
		case 5:
			func_382(uParam0);
			if (func_383(iLocal_262) || !__LIB_1__::func_22(5))
			{
				func_384(uParam0);
				func_385();
				__LIB_12__::func_937(uParam0, 6);
			}
			break;
		case 6:
			func_382(uParam0);
			func_386(uParam0);
			if (__LIB_0__::func_756(1, 4096) && __LIB_0__::func_756(1, 16))
			{
				__LIB_12__::func_937(uParam0, 14);
			}
			else if (func_387())
			{
				__LIB_12__::func_937(uParam0, 12);
			}
			else if (__LIB_9__::func_760() || __LIB_9__::func_766())
			{
				func_359(128);
				__LIB_12__::func_937(uParam0, 10);
			}
			else if (func_390())
			{
				__LIB_12__::func_937(uParam0, 8);
			}
			else if (func_391())
			{
				__LIB_12__::func_937(uParam0, 7);
			}
			break;
		case 7:
			func_382(uParam0);
			func_386(uParam0);
			if (__LIB_0__::func_756(1, 4096) && __LIB_0__::func_756(1, 16))
			{
				__LIB_12__::func_937(uParam0, 14);
			}
			else if (func_387())
			{
				__LIB_12__::func_937(uParam0, 12);
			}
			else if (__LIB_9__::func_760() || __LIB_9__::func_766())
			{
				func_359(128);
				__LIB_12__::func_937(uParam0, 10);
			}
			else if (func_390())
			{
				__LIB_12__::func_937(uParam0, 8);
			}
			break;
		case 8:
			func_382(uParam0);
			func_386(uParam0);
			if (__LIB_0__::func_756(1, 4096) && __LIB_0__::func_756(1, 16))
			{
				__LIB_12__::func_937(uParam0, 14);
			}
			else if (func_387())
			{
				__LIB_12__::func_937(uParam0, 12);
			}
			else if (__LIB_9__::func_760() || __LIB_9__::func_766())
			{
				func_359(128);
				__LIB_12__::func_937(uParam0, 10);
			}
			else if (!__LIB_3__::func_291(Global_35, 0))
			{
				if (__LIB_0__::func_899(&(vLocal_664[22 /*3*/])))
				{
					if (__LIB_9__::func_913(&(vLocal_664[22 /*3*/]), 2f))
					{
						__LIB_12__::func_937(uParam0, 9);
					}
				}
				else
				{
					__LIB_2__::func_259(&(vLocal_664[22 /*3*/]));
				}
			}
			else if (__LIB_0__::func_899(&(vLocal_664[22 /*3*/])))
			{
				__LIB_1__::func_561(&(vLocal_664[22 /*3*/]));
			}
			break;
		case 9:
			func_382(uParam0);
			func_386(uParam0);
			if (__LIB_0__::func_756(1, 4096) && __LIB_0__::func_756(1, 16))
			{
				__LIB_12__::func_937(uParam0, 14);
			}
			else if (func_387())
			{
				__LIB_12__::func_937(uParam0, 12);
			}
			else if (__LIB_9__::func_760() || __LIB_9__::func_766())
			{
				func_359(128);
				__LIB_12__::func_937(uParam0, 10);
			}
			break;
		case 10:
			func_382(uParam0);
			func_386(uParam0);
			func_394(uParam0);
			if (__LIB_0__::func_756(1, 4096) && __LIB_0__::func_756(1, 16))
			{
				__LIB_12__::func_937(uParam0, 14);
			}
			else if (func_395())
			{
				__LIB_12__::func_937(uParam0, 11);
			}
			break;
		case 11:
			func_382(uParam0);
			func_386(uParam0);
			if (__LIB_0__::func_756(1, 4096) && __LIB_0__::func_756(1, 16))
			{
				__LIB_12__::func_937(uParam0, 14);
			}
			else if (func_387())
			{
				__LIB_12__::func_937(uParam0, 12);
			}
			break;
		case 12:
			func_382(uParam0);
			func_386(uParam0);
			func_396();
			if (__LIB_0__::func_756(1, 4096) && __LIB_0__::func_756(1, 16))
			{
				__LIB_12__::func_937(uParam0, 14);
			}
			else if (__LIB_2__::func_343(Global_35, iLocal_14, 0))
			{
				__LIB_12__::func_937(uParam0, 14);
			}
			break;
		case 13:
			func_382(uParam0);
			func_386(uParam0);
			func_385();
			func_394(uParam0);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_DRAFT_SWITCH_DRIVERS"), false);
			func_396();
			if (__LIB_0__::func_756(1, 4096) && __LIB_0__::func_756(1, 16))
			{
				__LIB_12__::func_937(uParam0, 14);
			}
			break;
		case 14:
			func_382(uParam0);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_DRAFT_SWITCH_DRIVERS"), false);
			if (!__LIB_0__::func_756(1, 4096) || !__LIB_0__::func_756(1, 16))
			{
				return 7;
			}
			if (func_398(&iLocal_262, 0f, 0f, 0f, 0) && !ENTITY::IS_ENTITY_DEAD(iLocal_14))
			{
				__LIB_0__::func_289(5, 4, 1);
				__LIB_0__::func_900(5);
				__LIB_0__::func_928(&uLocal_278, iLocal_262, "HOSEA", 1);
				if (!__LIB_2__::func_343(iLocal_262, iLocal_14, 1))
				{
					func_402(&iLocal_262, iLocal_14, func_401(__LIB_13__::func_855()), -1);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_262, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_262, 3, false);
				__LIB_2__::func_259(&(vLocal_664[16 /*3*/]));
				__LIB_12__::func_937(uParam0, 15);
			}
			break;
		case 15:
			func_403(&(iLocal_22[18]), &(uLocal_255[0]), 1);
			func_403(&(iLocal_22[14]), &(uLocal_255[1]), 1);
			func_403(&(iLocal_22[19]), &(uLocal_255[2]), 1);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_DRAFT_SWITCH_DRIVERS"), false);
			if (!func_404(32768) || iLocal_62 > 11)
			{
				func_405(uParam0, 1);
			}
			if (func_406(uParam0))
			{
				func_394(uParam0);
				__LIB_9__::func_770(1, 1);
				__LIB_12__::func_937(uParam0, 16);
			}
			if (iLocal_62 < 9 && !__LIB_14__::func_166(1024))
			{
				func_396();
			}
			break;
		case 16:
			CLOCK::PAUSE_CLOCK(true, 0);
			func_408(&iLocal_262, &iLocal_14, 0);
			func_409(uParam0);
			func_410();
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_DRAFT_SWITCH_DRIVERS"), false);
			func_403(&(iLocal_22[18]), &(uLocal_255[0]), 1);
			func_403(&(iLocal_22[14]), &(uLocal_255[1]), 1);
			func_403(&(iLocal_22[19]), &(uLocal_255[2]), 1);
			func_405(uParam0, 0);
			if (iLocal_50 > 5)
			{
				__LIB_12__::func_937(uParam0, 17);
			}
			break;
		case 17:
			CLOCK::PAUSE_CLOCK(true, 0);
			func_408(&iLocal_262, &iLocal_14, 0);
			func_409(uParam0);
			func_410();
			func_411();
			func_412();
			if (func_405(uParam0, 0) && __LIB_8__::func_406(4096))
			{
				CLOCK::PAUSE_CLOCK(false, 0);
				__LIB_13__::func_852(8192);
				__LIB_12__::func_937(uParam0, 18);
				func_413(iLocal_262, 0);
				__LIB_0__::func_769();
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
				TASK::TASK_SWAP_WEAPON(Global_35, 1, 0, 0, 0);
				PERSCHAR::_0x187D65F3AEC5D679(joaat("EMR_SON1"), "EmeraldRanch/Emr_Son1");
				func_339(uParam0, 9, 10, 0);
				return 5;
			}
			break;
		case 18:
			func_414(uParam0);
			break;
		case 19:
			if (func_415())
			{
				if (__LIB_9__::func_913(&(vLocal_664[21 /*3*/]), 10f))
				{
					__LIB_12__::func_937(uParam0, 29);
				}
			}
			break;
		case 29:
			func_394(uParam0);
			func_386(uParam0);
			__LIB_13__::func_852(8388608);
			Global_1415412.f_5 = 1;
			__LIB_13__::func_880(1);
			return 8;
	}
	return 7;
}

void func_123(var uParam0)
{
	if (func_437())
	{
		Global_1357515 = 0;
	}
	else
	{
		Global_1357515 = -1;
	}
}

void func_129(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
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
	__LIB_12__::func_935(iParam0, 0, iParam3);
	if (__LIB_0__::func_5(Global_1347702[iParam0 /*49*/].f_35))
	{
		__LIB_13__::func_8(Global_1347702[iParam0 /*49*/].f_35);
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
		__LIB_12__::func_931();
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
		func_452(Global_1347702[iParam0 /*49*/].f_15, bParam4, bParam2, bParam6, bParam5);
	}
	else
	{
		__LIB_1__::func_809(Global_1347702[iParam0 /*49*/].f_15, bParam6);
	}
	__LIB_10__::func_833(iParam0);
}

bool func_151(var uParam0)
{
	if (__LIB_1__::func_187(uParam0->f_174))
	{
		return true;
	}
	if (__LIB_12__::func_644(uParam0) == 11)
	{
		__LIB_13__::func_852(2);
		return func_481();
	}
	return true;
}

void func_160(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_0__::func_1(uParam0->f_172, 8))
	{
		func_482();
	}
	if (__LIB_8__::func_406(2097152))
	{
		func_483(1, 2, 0);
		__LIB_4__::func_58(1, 256);
	}
	else if (__LIB_1__::func_44(Global_1392240.f_1[1 /*18*/].f_13))
	{
		__LIB_18__::func_707(1);
	}
	if (__LIB_12__::func_644(uParam0) == 1)
	{
		__LIB_13__::func_852(32768);
	}
	func_485(iLocal_262, 0);
	func_413(iLocal_262, 0);
	__LIB_0__::func_745(5);
	__LIB_0__::func_904(5, 0);
	__LIB_4__::func_0(&iLocal_244);
	if (__LIB_8__::func_406(8192))
	{
		func_489(&iLocal_14, 0);
	}
	else if (__LIB_8__::func_406(32768))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_14))
		{
			VEHICLE::DELETE_VEHICLE(&iLocal_14);
		}
	}
	else
	{
		__LIB_10__::func_284(&iLocal_14);
	}
	__LIB_1__::func_480(&iLocal_262);
	__LIB_2__::func_480(&uLocal_543, 0, 0, 1, 0);
	if (INTERIOR::IS_VALID_INTERIOR(iLocal_277))
	{
		INTERIOR::UNPIN_INTERIOR(iLocal_277);
	}
	if (!__LIB_8__::func_406(1))
	{
		__LIB_4__::func_389(-1304772442, 0, 1);
		__LIB_4__::func_389(-1924401463, 0, 1);
		__LIB_4__::func_389(-308659358, 0, 1);
		__LIB_4__::func_389(-66987983, 0, 1);
	}
	__LIB_1__::func_941(-308659358);
	__LIB_1__::func_941(-66987983);
	__LIB_1__::func_941(-1304772442);
	__LIB_1__::func_941(-1924401463);
	__LIB_1__::func_941(883522755);
	__LIB_1__::func_941(1038094132);
	func_494(&iLocal_264);
	func_494(&iLocal_263);
	func_495(&iLocal_264, 1);
	func_496(&iLocal_262, 0, 1065353216 /* Float: 1f */);
	func_371(&iLocal_262, 375, 0);
	func_363(iLocal_262, iLocal_263, 1, 1f, 1, 0);
	func_497(&iLocal_265);
	if (__LIB_8__::func_406(8388608) || __LIB_8__::func_406(2097152))
	{
		__LIB_4__::func_932(18, 1);
		iVar1 = 6;
		iVar0 = __LIB_0__::func_23();
		__LIB_1__::func_446(&iVar0, 0, 0, iVar1, 0, 0, 0, 0);
		__LIB_13__::func_882(4, 18, iVar0);
	}
	func_500();
	func_501();
	func_502();
	__LIB_9__::func_320(2);
	__LIB_0__::func_769();
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_508))
	{
		TASK::_DELETE_SCENARIO_POINT(iLocal_508);
	}
	if (__LIB_12__::func_644(uParam0) == 0)
	{
		iVar2 = 18;
		__LIB_12__::func_872(iVar2, -15);
		if (__LIB_9__::func_748())
		{
			__LIB_6__::func_664(1, 2);
		}
	}
	func_372(&(iLocal_22[6]), &(iLocal_22[7]), &(iLocal_22[8]), 0, 0);
	func_403(&(iLocal_22[18]), &(uLocal_255[0]), 0);
	func_403(&(iLocal_22[14]), &(uLocal_255[1]), 0);
	func_403(&(iLocal_22[19]), &(uLocal_255[2]), 0);
	func_507(&(iLocal_22[13]), &(iLocal_22[14]), &(iLocal_22[15]), &uLocal_273, 0);
	func_508();
	__LIB_0__::func_121(869, 32);
	__LIB_4__::func_193(869);
	__LIB_0__::func_121(740, 32);
	__LIB_0__::func_121(737, 32);
	__LIB_4__::func_193(737);
	__LIB_13__::func_888(1, 8);
	__LIB_11__::func_10(1, 0, 0);
	__LIB_6__::func_416(0, 0, 1103626240 /* Float: 25f */);
}

Vector3 func_191(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0f, 1f, 1f;
		case 1:
			return 1412.735f, 260.764f, 92.926f;
		case 2:
			return 1395.942f, 262.466f, 88.45f;
		case 3:
			return 1417.614f, 269.601f, 89.461f;
		case 4:
			return 1409.805f, 274.065f, 91f;
		case 5:
			return 1411.138f, 268.828f, 90.5f;
		case 6:
			return 875.4528f, 825.1133f, 115.622f;
		case 7:
			return 872.5161f, 805.3047f, 114.6297f;
		case 8:
			return 859.2996f, 826.3416f, 115.4958f;
		case 9:
			return 776.575f, 848.384f, 120.971f;
		case 10:
			return 834.6887f, 829.6642f, 114.6014f;
		case 11:
			return 841.342f, 786.0715f, 113.8146f;
		case 12:
			return 1408.009f, 267.8312f, 94.54225f;
		case 13:
			return 1290.523f, 292.8436f, 86.33051f;
		case 14:
			return 1242.357f, 255.9864f, 88.80604f;
		case 15:
			return 1257.497f, 267.1242f, 93.78019f;
		case 16:
			return 1407.152f, 267.4984f, 88.81922f;
		case 17:
			return 1411.893f, 256.913f, 90.5f;
		case 18:
			return 1257.075f, 243.7178f, 88.19684f;
		case 19:
			return 1436.209f, 388.2957f, 88.91453f;
		case 20:
			return 1392.652f, 225.1255f, 92.926f;
		case 21:
			return 1409.805f, 274.065f, 91f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_192(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0f, 0f, 0f;
		case 1:
			return 0f, 0f, 15.75f;
		case 2:
			return 0f, 0f, 13.25f;
		case 3:
			return 0f, 0f, 17f;
		case 4:
			return 0f, 0f, 16f;
		case 5:
			return 0f, 0f, 16f;
		case 6:
			return 0f, 0f, 0f;
		case 7:
			return 0f, 0f, 0f;
		case 8:
			return 0f, 0f, 0f;
		case 9:
			return 0f, 0f, 107f;
		case 10:
			return 0f, 0f, -27f;
		case 11:
			return 0f, 0f, 0f;
		case 12:
			return 0f, 0f, 15.75f;
		case 13:
			return 0f, 0f, 0f;
		case 14:
			return 0f, 0f, 0f;
		case 15:
			return 0f, 0f, 12f;
		case 16:
			return 0f, 0f, 15.75f;
		case 17:
			return 0f, 0f, 16f;
		case 18:
			return 0f, 0f, 0f;
		case 19:
			return 0f, 0f, 0f;
		case 20:
			return 0f, 0f, 15.75f;
		case 21:
			return 0f, 0f, 16f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_193(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2.5f, 2.5f, 2.5f;
		case 1:
			return 90f, 60f, 10f;
		case 2:
			return 5.5f, 3f, 2f;
		case 3:
			return 1.5f, 1.5f, 2f;
		case 4:
			return 9f, 11f, 5f;
		case 5:
			return 25f, 23f, 5f;
		case 6:
			return 5f, 5f, 5f;
		case 7:
			return 5f, 5f, 5f;
		case 8:
			return 5f, 5f, 5f;
		case 9:
			return 11f, 5.5f, 6f;
		case 10:
			return 1.6f, 2f, 1.6f;
		case 11:
			return 35f, 35f, 10f;
		case 12:
			return 15f, 15f, 5f;
		case 13:
			return 5f, 5f, 5f;
		case 14:
			return 5f, 5f, 5f;
		case 15:
			return 175f, 60f, 20f;
		case 16:
			return 1.5f, 1.5f, 1.5f;
		case 17:
			return 25f, 23f, 5f;
		case 18:
			return 5f, 5f, 5f;
		case 19:
			return 5f, 5f, 5f;
		case 20:
			return 150f, 100f, 10f;
		case 21:
			return 9f, 11f, 5f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

char* func_203()
{
	return "rcm_hmrb0_emr_to_crd";
}

char* func_204()
{
	return "rcm_hmrb0_crd_to_emr";
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
		iVar0 = func_572(0, 0);
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

bool func_221(int iParam0, var uParam1, int iParam2)
{
	if (!__LIB_8__::func_406(4096) || !ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return false;
	}
	if (__LIB_10__::func_608(*iParam0, 0, uParam1, iParam2, 0, 0))
	{
		return true;
	}
	return false;
}

bool func_224(var uParam0)
{
	int iVar0;
	if (__LIB_3__::func_514(uParam0, 2f) || !__LIB_0__::func_899(uParam0))
	{
		iVar0 = ITEMSET::CREATE_ITEMSET(true);
		PED::_0x7BE607DAFF382FD2(Global_35, iVar0, 0);
		if (ITEMSET::GET_ITEMSET_SIZE(iVar0) > 0)
		{
			ITEMSET::DESTROY_ITEMSET(iVar0);
			__LIB_2__::func_259(uParam0);
			return true;
		}
		ITEMSET::DESTROY_ITEMSET(iVar0);
		__LIB_2__::func_259(uParam0);
	}
	return false;
}

bool func_227(int iParam0)
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
				func_129(113, 1, 0, 1, 1, 1, 0);
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

int func_236(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(Global_1347702[uParam0->f_174 /*49*/].f_43))
	{
		if (!func_603(&(Global_1347702[uParam0->f_174 /*49*/].f_43), &(uParam0->f_178), &iVar0, 1, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_241(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_172, 8))
	{
		func_482();
	}
}

void func_256(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_172, 16))
	{
		__LIB_12__::func_966(uParam0, 0);
		func_88(uParam0);
	}
}

int func_263(var uParam0)
{
	if (uParam0->f_177 == 6)
	{
		return 1;
	}
	else if (uParam0->f_177 == 2)
	{
		return 1;
	}
	else if (func_627(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_281(var uParam0)
{
	switch (iLocal_47)
	{
		case 0:
			__LIB_0__::func_928(&uLocal_278, Global_35, "ARTHUR", 1);
			__LIB_4__::func_932(18, 0);
			__LIB_13__::func_891(1);
			__LIB_9__::func_770(1, 4096);
			__LIB_9__::func_770(1, 8192);
			__LIB_4__::func_262(1, 1048576);
			func_657();
			func_658(uParam0, &iLocal_262);
			__LIB_9__::func_745(2);
			break;
		case 2:
			func_660(&iLocal_265);
			if (func_661(iLocal_262))
			{
				func_662(&iLocal_262);
				func_663(&iLocal_263);
				__LIB_9__::func_745(4);
			}
			else
			{
				func_658(uParam0, &iLocal_262);
			}
			break;
		case 4:
			func_663(&iLocal_263);
			if (__LIB_12__::func_639(uParam0, 64))
			{
				__LIB_9__::func_745(3);
			}
			else if (func_660(&iLocal_265))
			{
				func_664(&iLocal_265, &uLocal_278, &uLocal_449, 0);
				func_665(&iLocal_265);
				__LIB_9__::func_745(3);
			}
			break;
		case 3:
			if (__LIB_12__::func_639(uParam0, 64))
			{
				if (func_663(&iLocal_263))
				{
					__LIB_9__::func_745(5);
				}
			}
			else
			{
				__LIB_9__::func_745(5);
			}
			break;
		case 5:
			func_663(&iLocal_263);
			if (!func_666())
			{
				return 0;
			}
			func_667();
			__LIB_3__::func_732(1);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_262))
			{
				__LIB_13__::func_260(uParam0, iLocal_262);
				__LIB_4__::func_58(1, 1024);
				__LIB_0__::func_928(&uLocal_278, iLocal_262, "HOSEA", 1);
			}
			func_670(&uLocal_376, 4, 4);
			__LIB_4__::func_389(-308659358, 1, 1);
			__LIB_4__::func_389(-66987983, 1, 1);
			__LIB_4__::func_389(-1304772442, 1, 1);
			__LIB_4__::func_389(-1924401463, 1, 1);
			__LIB_2__::func_22(&uLocal_479, iLocal_262);
			__LIB_1__::func_401(&uLocal_479, 1);
			__LIB_2__::func_830(&uLocal_479, 1);
			__LIB_1__::func_413(&uLocal_479, 0);
			__LIB_1__::func_398(&uLocal_479, 0);
			__LIB_1__::func_406(&uLocal_479, 0);
			__LIB_8__::func_732(&uLocal_479, 0);
			__LIB_1__::func_402(&uLocal_479, 0);
			__LIB_2__::func_507(&uLocal_479, 1500);
			__LIB_4__::func_22(&uLocal_479, 30f, 1);
			__LIB_9__::func_745(6);
			break;
		case 6:
			func_663(&iLocal_263);
			return 1;
	}
	return 0;
}

void func_300(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			StringCopy(&(uParam0->f_2575), func_699(0), 24);
			__LIB_12__::func_981(uParam0, 106576);
			__LIB_13__::func_264(uParam0, 107086);
			__LIB_12__::func_982(uParam0, 107236);
			__LIB_12__::func_779(uParam0, __LIB_1__::func_440(uParam0->f_174));
			__LIB_12__::func_957(uParam0, Global_35, 0, 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_262, 0, 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_265, func_708(), 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_263, "Horse_01", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_266[0], "p_cigarette01x", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_266[1], "p_cigarette01x^1", 0, 0, 0);
			__LIB_12__::func_901(&(uParam0->f_206), 1417.193f, 249.572f, 89.28895f, 0, 0);
			__LIB_13__::func_33(uParam0, 0);
			__LIB_13__::func_383(uParam0, &(iLocal_22[0]), 0, 0, 0, 0);
			__LIB_0__::func_7(&(uParam0->f_172), 16);
			break;
		case 1:
			StringCopy(&(uParam0->f_2575), func_699(1), 24);
			__LIB_12__::func_981(uParam0, 107445);
			__LIB_12__::func_779(uParam0, 803.163f, 856.885f, 117.346f);
			__LIB_12__::func_957(uParam0, Global_35, 0, 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_262, 0, 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_266[0], "p_cigarette01x", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_266[1], "p_cigarette01x^1", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_269, "p_cigarettebox01x", 0, 0, 0);
			__LIB_12__::func_901(&(uParam0->f_206), 860.7442f, 804.5162f, 114.6219f, 0, 0);
			__LIB_13__::func_33(uParam0, 1);
			__LIB_12__::func_846(&(uParam0->f_206));
			__LIB_0__::func_7(&(uParam0->f_172), 16);
			break;
		case 2:
			__LIB_12__::func_966(uParam0, 0);
			StringCopy(&(uParam0->f_2575), func_699(2), 24);
			__LIB_12__::func_981(uParam0, 109149);
			__LIB_12__::func_779(uParam0, __LIB_1__::func_440(uParam0->f_174));
			__LIB_12__::func_957(uParam0, Global_35, 0, 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_262, 0, 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_265, func_708(), 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_14, "stagecoach002x", 0, 0, 0);
			__LIB_12__::func_901(&(uParam0->f_206), 1417.193f, 249.572f, 89.28895f, 0, 0);
			__LIB_13__::func_33(uParam0, 2);
			__LIB_12__::func_846(&(uParam0->f_206));
			__LIB_0__::func_7(&(uParam0->f_172), 16);
			break;
		case 3:
			StringCopy(&(uParam0->f_2575), "", 24);
			__LIB_0__::func_8(&(uParam0->f_172), 16);
			break;
	}
}

int func_301(var uParam0)
{
	func_663(&iLocal_263);
	if (__LIB_8__::func_372(32))
	{
		return func_713(uParam0);
	}
	if ((func_481() || __LIB_8__::func_406(2)) || __LIB_1__::func_394(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_262))
	{
		PED::SET_PED_RESET_FLAG(iLocal_262, 184, true);
	}
	if (__LIB_0__::func_393(Global_35, iLocal_22[4], 0, 1))
	{
		return 0;
	}
	if (func_715(&iLocal_509))
	{
		if (!__LIB_8__::func_372(16))
		{
			if (func_716(&iLocal_509, 0.7531f))
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_509, "Loop_Idle", false, false);
				func_717(8);
				func_355(16);
			}
			else if (!__LIB_8__::func_372(8))
			{
				if (__LIB_0__::func_393(Global_35, iLocal_22[1], 0, 1))
				{
					func_718(1024);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_509, "Loop_Idle", true, false);
					func_355(8);
				}
			}
		}
	}
	else
	{
		func_719();
	}
	if (PED::GET_PED_CONFIG_FLAG(Global_35, 300, true))
	{
		if (__LIB_3__::func_332(func_720(22), 1) > 10f)
		{
			PED::SET_PED_CONFIG_FLAG(Global_35, 300, false);
		}
	}
	else if (__LIB_3__::func_332(func_720(22), 1) < 10f)
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 300, true);
	}
	if (__LIB_0__::func_71(Global_35))
	{
		if (__LIB_3__::func_332(func_720(22), 1) < 10f && !__LIB_0__::func_163(Global_35, 501393341))
		{
			TASK::TASK_DISMOUNT_ANIMAL(Global_35, 0, 0, 0, 0, 0);
		}
		__LIB_9__::func_204(Global_35, func_720(22), &(vLocal_664[10 /*3*/]), 20f, 15f, 10f, 0f, 100f, 0, 0, 1, 1, 1);
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		if (__LIB_3__::func_332(func_720(22), 1) < 15f && !__LIB_0__::func_163(Global_35, -828834893))
		{
			TASK::TASK_LEAVE_ANY_VEHICLE(Global_35, 0, 0);
		}
		__LIB_9__::func_204(Global_35, func_720(22), &(vLocal_664[10 /*3*/]), 20f, 15f, 10f, 0f, 100f, 0, 0, 1, 1, 1);
	}
	if (((!__LIB_1__::func_205(Global_35, iLocal_22[12], 1, 0) && __LIB_3__::func_332(func_720(22), 1) < 6f) && !PED::IS_PED_ON_MOUNT(Global_35)) && !PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		func_355(32);
		return 0;
	}
	return 0;
}

void func_303()
{
	__LIB_13__::func_856();
	__LIB_13__::func_857();
	__LIB_9__::func_771(1, 16);
	__LIB_9__::func_771(1, 32);
	__LIB_9__::func_771(1, 64);
	__LIB_9__::func_771(1, 128);
	__LIB_9__::func_771(1, 256);
	__LIB_9__::func_771(1, 512);
	__LIB_9__::func_771(1, 1024);
	__LIB_9__::func_771(1, 2048);
	__LIB_9__::func_771(1, 4096);
	__LIB_9__::func_771(1, 8192);
	__LIB_9__::func_771(1, 16384);
	__LIB_9__::func_771(1, 32768);
	__LIB_9__::func_771(1, 65536);
	__LIB_9__::func_771(1, 131072);
	__LIB_9__::func_771(1, 262144);
	__LIB_9__::func_771(1, 524288);
	__LIB_9__::func_771(1, 1048576);
	__LIB_9__::func_771(1, 2097152);
	__LIB_9__::func_771(1, 4194304);
	__LIB_9__::func_771(1, 8388608);
	__LIB_9__::func_771(1, 16777216);
	__LIB_9__::func_771(1, 33554432);
	__LIB_9__::func_771(1, 67108864);
	__LIB_9__::func_771(1, 134217728);
	__LIB_9__::func_771(1, 268435456);
	__LIB_9__::func_771(1, 536870912);
	__LIB_9__::func_771(1, 1073741824 /* Float: 2f */);
	__LIB_9__::func_771(1, -2147483648);
	__LIB_9__::func_729(1, 1);
	__LIB_9__::func_729(1, 2);
	__LIB_9__::func_729(1, 4);
	__LIB_9__::func_729(1, 8);
	__LIB_9__::func_729(1, 16);
	__LIB_9__::func_729(1, 32);
	__LIB_9__::func_729(1, 64);
	__LIB_9__::func_729(1, 128);
	__LIB_9__::func_729(1, 256);
	__LIB_9__::func_729(1, 512);
	__LIB_9__::func_729(1, 1024);
	__LIB_9__::func_729(1, 2048);
	__LIB_9__::func_729(1, 4096);
	__LIB_9__::func_729(1, 8192);
	__LIB_9__::func_729(1, 16384);
	__LIB_9__::func_729(1, 32768);
	__LIB_9__::func_729(1, 65536);
	__LIB_9__::func_729(1, 131072);
	__LIB_9__::func_729(1, 262144);
	__LIB_9__::func_729(1, 524288);
	__LIB_9__::func_729(1, 1048576);
	__LIB_9__::func_729(1, 2097152);
	__LIB_9__::func_729(1, 4194304);
	__LIB_9__::func_729(1, 8388608);
	__LIB_9__::func_729(1, 16777216);
	__LIB_9__::func_729(1, 33554432);
	__LIB_9__::func_729(1, 134217728);
	__LIB_9__::func_729(1, 268435456);
	__LIB_9__::func_729(1, 536870912);
	__LIB_9__::func_729(1, 1073741824 /* Float: 2f */);
	__LIB_9__::func_729(1, -2147483648);
}

void func_304()
{
	__LIB_9__::func_771(1, 2048);
	__LIB_9__::func_771(1, 4096);
	__LIB_9__::func_729(1, 64);
	__LIB_9__::func_729(1, 128);
	__LIB_9__::func_771(1, 512);
	__LIB_9__::func_771(1, 8192);
	__LIB_9__::func_729(1, 8);
	__LIB_9__::func_729(1, 32768);
	__LIB_9__::func_729(1, 65536);
	__LIB_9__::func_729(1, 131072);
	__LIB_9__::func_729(1, 262144);
	__LIB_9__::func_729(1, 1048576);
	__LIB_9__::func_729(1, 2097152);
	__LIB_9__::func_729(1, 4194304);
	__LIB_9__::func_729(1, 8388608);
	__LIB_9__::func_729(1, 16777216);
	__LIB_9__::func_729(1, 33554432);
	__LIB_9__::func_729(1, 536870912);
	__LIB_9__::func_729(1, 1073741824 /* Float: 2f */);
	__LIB_9__::func_729(1, 512);
	__LIB_9__::func_729(1, 1024);
	__LIB_9__::func_729(1, 2);
	__LIB_9__::func_729(1, 268435456);
	__LIB_6__::func_660(1, 1024);
	__LIB_6__::func_660(1, 2048);
	__LIB_6__::func_660(1, 4096);
	__LIB_6__::func_660(1, 8192);
}

void func_305()
{
	__LIB_9__::func_729(1, -2147483648);
}

bool func_308(int iParam0, int iParam1, var uParam2)
{
	switch (iLocal_46)
	{
		case 0:
			if (__LIB_12__::func_738(uParam2))
			{
				__LIB_13__::func_889(1, 8);
			}
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
			TASK::TASK_SWAP_WEAPON(Global_35, 1, 0, 0, 0);
			if (iParam0 < 8)
			{
				__LIB_4__::func_58(1, 1);
			}
			if (iParam0 < 7)
			{
				func_304();
			}
			switch (iParam0)
			{
				case 0:
					func_300(uParam2, 0);
					__LIB_13__::func_852(268435456);
					break;
				case 1:
					__LIB_13__::func_852(268435456);
					break;
				case 2:
					func_300(uParam2, 1);
					func_372(&(iLocal_22[6]), &(iLocal_22[7]), &(iLocal_22[8]), 1, 0);
					break;
				case 3:
					func_741();
					func_300(uParam2, 1);
					func_742();
					func_372(&(iLocal_22[6]), &(iLocal_22[7]), &(iLocal_22[8]), 1, 0);
					break;
				case 4:
					func_743();
					func_300(uParam2, 1);
					func_742();
					func_372(&(iLocal_22[6]), &(iLocal_22[7]), &(iLocal_22[8]), 1, 0);
					break;
				case 5:
					func_741();
					func_372(&(iLocal_22[6]), &(iLocal_22[7]), &(iLocal_22[8]), 1, 1);
					__LIB_4__::func_58(1, 8388608);
					break;
				case 6:
					func_743();
					func_372(&(iLocal_22[6]), &(iLocal_22[7]), &(iLocal_22[8]), 1, 1);
					__LIB_4__::func_58(1, 33554432);
					break;
				case 7:
					if (func_437())
					{
						func_741();
					}
					else
					{
						func_743();
					}
					func_372(&(iLocal_22[6]), &(iLocal_22[7]), &(iLocal_22[8]), 1, 1);
					__LIB_4__::func_58(1, 134217728);
					break;
				case 8:
					__LIB_1__::func_572(func_191(4), 20f, 0, 0, 1, 1, 0);
					break;
				case 9:
					__LIB_1__::func_572(func_191(4), 20f, 0, 0, 1, 1, 0);
					__LIB_4__::func_389(-308659358, 0, 1);
					__LIB_4__::func_389(-66987983, 0, 1);
					__LIB_13__::func_852(268435456);
					break;
				case 10:
					__LIB_1__::func_572(func_191(4), 20f, 0, 0, 1, 1, 0);
					__LIB_4__::func_389(-308659358, 1, 1);
					__LIB_4__::func_389(-66987983, 1, 1);
					__LIB_13__::func_852(268435456);
					break;
			}
			__LIB_13__::func_891(1);
			__LIB_4__::func_58(1, 512);
			func_745(iParam0);
			iLocal_46 = 1;
			return false;
		case 1:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_264))
			{
				__LIB_13__::func_71(&iLocal_264, Local_64.f_45[iParam0 /*4*/], Local_64.f_45[iParam0 /*4*/].f_3, 1, 1, 1, 1);
				return false;
			}
			switch (iParam0)
			{
				case 0:
					if (!func_660(&iLocal_265))
					{
						return false;
					}
					func_664(&iLocal_265, &uLocal_278, &uLocal_449, 1);
					break;
				case 1:
					if (func_660(&iLocal_265))
					{
						func_747(&iLocal_265, &iLocal_508);
					}
					func_664(&iLocal_265, &uLocal_278, &uLocal_449, 1);
					__LIB_1__::func_571(iLocal_262, iLocal_263, 0, -1, 1);
					__LIB_1__::func_571(Global_35, iLocal_264, 0, -1, 1);
					break;
				case 2:
					__LIB_1__::func_571(iLocal_262, iLocal_263, 0, -1, 1);
					__LIB_1__::func_571(Global_35, iLocal_264, 0, -1, 1);
					__LIB_13__::func_858(0);
					break;
				case 3:
				case 4:
					func_374();
					__LIB_0__::func_769();
					__LIB_0__::func_172(iLocal_22[10]);
					__LIB_7__::func_221(7);
					break;
				case 5:
					__LIB_13__::func_858(0);
					func_312(&iLocal_14, iLocal_274, 12);
					break;
				case 6:
					__LIB_13__::func_858(0);
					func_312(&iLocal_14, iLocal_274, 12);
					break;
				case 7:
					func_312(&iLocal_14, iLocal_274, 11);
					break;
				case 8:
					func_312(&iLocal_14, iLocal_274, 4);
					break;
				case 9:
					if (!func_660(&iLocal_265))
					{
						return false;
					}
					func_664(&iLocal_265, &uLocal_278, &uLocal_449, 1);
					func_312(&iLocal_14, iLocal_274, 4);
					func_300(uParam2, 2);
					break;
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_265) && !ENTITY::IS_ENTITY_DEAD(iLocal_265))
			{
				PED::_0xAE6004120C18DF97(iLocal_265, 0, 1);
			}
			iLocal_46 = 2;
			return false;
		case 2:
			switch (iParam0)
			{
				case 0:
					if (func_751(&(uParam2->f_206.f_348)))
					{
						iLocal_46 = 3;
					}
					else
					{
						return false;
					}
					break;
				case 3:
				case 4:
					if (func_751(&(uParam2->f_206.f_348)) && func_742())
					{
						ANIMSCENE::START_ANIM_SCENE(iLocal_510);
						iLocal_46 = 3;
					}
					else
					{
						return false;
					}
					break;
				case 2:
				case 5:
				case 6:
					if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("HOMEINVASION")) > 0)
					{
						iLocal_46 = 3;
					}
					break;
				case 9:
					if (func_751(&(uParam2->f_206.f_348)))
					{
						iLocal_46 = 3;
					}
					else
					{
						return false;
					}
					break;
				default:
					iLocal_46 = 3;
					break;
			}
			return false;
		case 3:
			__LIB_14__::func_289(iParam1);
			switch (iParam0)
			{
				case 0:
					__LIB_12__::func_957(uParam2, iLocal_265, func_708(), 0, 0, 0);
					iLocal_46 = 5;
					break;
				case 3:
				case 4:
					__LIB_0__::func_489(8f, 7f);
					if (__LIB_1__::func_372(Global_35, 0) != joaat("WEAPON_KIT_BINOCULARS"))
					{
						WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_KIT_BINOCULARS"), false, 0, false, false);
						TASK::TASK_SWAP_WEAPON(Global_35, 1, 0, 0, 0);
					}
					func_354(&uLocal_261);
					__LIB_2__::func_259(&(vLocal_664[19 /*3*/]));
					fLocal_517 = 2f;
					iLocal_46 = 5;
					break;
				case 5:
				case 6:
					if (func_383(iLocal_262))
					{
						iLocal_46 = 5;
					}
					break;
				case 7:
				case 8:
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_14) && !ENTITY::IS_ENTITY_DEAD(iLocal_14))
					{
						if (__LIB_2__::func_343(iLocal_262, iLocal_14, 0) && __LIB_2__::func_343(Global_35, iLocal_14, 0))
						{
							if (iParam0 == 7)
							{
								if (func_383(iLocal_262))
								{
									__LIB_0__::func_489(0f, 0);
									iLocal_46 = 5;
								}
							}
							else if (iParam0 == 8)
							{
								__LIB_0__::func_489(6f, 0);
								iLocal_46 = 5;
							}
						}
						else
						{
							func_755(&iLocal_262, iLocal_14, 0);
							func_755(&Global_35, iLocal_14, -1);
						}
					}
					break;
				default:
					iLocal_46 = 5;
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 3:
				case 4:
					if (__LIB_1__::func_372(Global_35, 0) != joaat("WEAPON_KIT_BINOCULARS"))
					{
						if (!__LIB_0__::func_163(Global_35, 716706914))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_KIT_BINOCULARS"), true, 0, false, false);
							TASK::TASK_SWAP_WEAPON(Global_35, 1, 0, 0, 0);
						}
						return false;
					}
					else
					{
						func_354(&uLocal_261);
					}
					break;
			}
			return true;
	}
	return false;
}

void func_310()
{
	__LIB_13__::func_875();
}

void func_311()
{
	CAM::DO_SCREEN_FADE_IN(500);
}

void func_312(int iParam0, int iParam1, int iParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		func_757(iParam0);
		func_758(iParam0);
		__LIB_13__::func_852(512);
		return;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iParam1))
	{
		return;
	}
	*iParam0 = VEHICLE::CREATE_VEHICLE(iParam1, func_720(iParam2), func_759(iParam2), true, true, false, false);
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 0f);
	}
	func_757(iParam0);
	func_758(iParam0);
	VEHICLE::_0xE1A83D4A3B5D7938(*iParam0);
	__LIB_13__::func_852(512);
}

void func_313()
{
	__LIB_13__::func_876();
}

int func_326(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
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
			func_787(uParam4);
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

void func_335(var uParam0)
{
	if (__LIB_8__::func_379(2))
	{
		if (__LIB_12__::func_645(uParam0) != 1)
		{
			__LIB_12__::func_937(uParam0, 1);
		}
	}
	else if (__LIB_8__::func_379(4))
	{
		if (__LIB_12__::func_645(uParam0) != 1)
		{
			__LIB_12__::func_937(uParam0, 1);
		}
	}
	else if (__LIB_8__::func_379(8))
	{
		if (__LIB_12__::func_645(uParam0) != 1)
		{
			__LIB_12__::func_937(uParam0, 1);
		}
	}
	else if (__LIB_8__::func_379(16))
	{
		if (__LIB_12__::func_645(uParam0) != 1)
		{
			__LIB_12__::func_937(uParam0, 1);
		}
	}
	else if (__LIB_8__::func_379(32))
	{
		if (__LIB_12__::func_645(uParam0) != 1)
		{
			__LIB_12__::func_937(uParam0, 1);
		}
	}
	else if (__LIB_8__::func_379(64))
	{
		if (__LIB_12__::func_645(uParam0) != 1)
		{
			__LIB_12__::func_937(uParam0, 1);
		}
	}
	else if (__LIB_8__::func_379(128))
	{
		if (__LIB_12__::func_645(uParam0) != 1)
		{
			__LIB_12__::func_937(uParam0, 1);
		}
	}
	else if (__LIB_8__::func_379(256))
	{
		if (__LIB_12__::func_645(uParam0) != 1)
		{
			__LIB_12__::func_937(uParam0, 1);
		}
	}
	else if (__LIB_8__::func_379(512))
	{
		if (__LIB_12__::func_645(uParam0) != 1)
		{
			__LIB_12__::func_937(uParam0, 1);
		}
	}
	else if (__LIB_8__::func_379(1024))
	{
		if (__LIB_12__::func_645(uParam0) != 1)
		{
			__LIB_12__::func_937(uParam0, 1);
		}
	}
}

void func_336(var uParam0)
{
	int iVar0;
	float fVar1;
	if (ENTITY::IS_ENTITY_DEAD(iLocal_262))
	{
		return;
	}
	iVar0 = __LIB_12__::func_645(uParam0);
	switch (iVar0)
	{
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			if (__LIB_0__::func_12() == 64)
			{
				if (func_404(4))
				{
					iLocal_401 = 0;
					func_375();
					__LIB_1__::func_561(&(vLocal_664[3 /*3*/]));
				}
				return;
			}
			break;
		case 19:
		case 29:
			return;
	}
	if (iVar0 < 5)
	{
		if (func_404(2048))
		{
			if (!func_833())
			{
				if (!__LIB_0__::func_899(&(vLocal_664[3 /*3*/])))
				{
					__LIB_2__::func_259(&(vLocal_664[3 /*3*/]));
				}
				else if (__LIB_1__::func_592(&(vLocal_664[3 /*3*/])) > 10000)
				{
					if (!func_833())
					{
						__LIB_1__::func_561(&(vLocal_664[3 /*3*/]));
						__LIB_13__::func_852(1048576);
					}
				}
				return;
			}
			else
			{
				func_834(2048);
				__LIB_1__::func_561(&(vLocal_664[3 /*3*/]));
				__LIB_13__::func_89(uParam0, func_835(iLocal_401), 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			}
		}
		else if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(func_203()))
		{
			if (!func_833())
			{
				func_837(2048);
				__LIB_13__::func_89(uParam0, func_835(2048), 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_3__::func_662(func_835(2048), 7500, 0, 0, -1, -1, 0);
				__LIB_1__::func_561(&(vLocal_664[4 /*3*/]));
				return;
			}
		}
	}
	if (iVar0 == 16 || iVar0 == 17)
	{
		if (func_404(2048))
		{
			if (!func_839())
			{
				if (!__LIB_0__::func_899(&(vLocal_664[3 /*3*/])))
				{
					__LIB_2__::func_259(&(vLocal_664[3 /*3*/]));
				}
				else if (__LIB_1__::func_592(&(vLocal_664[3 /*3*/])) > 12000)
				{
					__LIB_1__::func_561(&(vLocal_664[3 /*3*/]));
					__LIB_13__::func_852(1048576);
				}
				return;
			}
			else
			{
				func_834(2048);
				__LIB_1__::func_561(&(vLocal_664[3 /*3*/]));
				__LIB_13__::func_89(uParam0, func_835(iLocal_401), 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			}
		}
		else if (!func_839())
		{
			func_837(2048);
			__LIB_13__::func_89(uParam0, func_835(2048), 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			__LIB_3__::func_662(func_835(2048), 7500, 0, 0, -1, -1, 0);
			__LIB_1__::func_561(&(vLocal_664[4 /*3*/]));
			return;
		}
	}
	fVar1 = func_840(iVar0);
	if (fVar1 < 60f)
	{
		if (func_404(4))
		{
			__LIB_1__::func_561(&(vLocal_664[3 /*3*/]));
			func_352(uParam0, iLocal_401, &iLocal_401, &(vLocal_664[4 /*3*/]));
		}
		return;
	}
	if (func_404(4))
	{
		if (fVar1 > 90f)
		{
			if (!__LIB_0__::func_899(&(vLocal_664[3 /*3*/])))
			{
				__LIB_2__::func_259(&(vLocal_664[3 /*3*/]));
			}
			else if (__LIB_1__::func_592(&(vLocal_664[3 /*3*/])) > 5000)
			{
				__LIB_1__::func_561(&(vLocal_664[3 /*3*/]));
				__LIB_13__::func_852(524288);
			}
		}
	}
	else
	{
		func_352(uParam0, 4, &iLocal_401, &(vLocal_664[4 /*3*/]));
		__LIB_3__::func_662(func_835(4), 7500, 0, 0, -1, -1, 0);
	}
}

void func_337(var uParam0)
{
	switch (iLocal_401)
	{
		case 1:
			if (!MAP::DOES_BLIP_EXIST(iLocal_244[2]))
			{
				__LIB_0__::func_325(&(iLocal_244[0]));
				__LIB_8__::func_152(&(iLocal_244[2]), iLocal_22[4], 1247852480);
				MAP::_0xBD62D98799A3DAF0(iLocal_244[2], 408396114);
			}
			func_842(1, "RH0_RTRN_BRN");
			if (func_843(1))
			{
				if (bLocal_259)
				{
					if (func_844(1, &(vLocal_664[4 /*3*/]), 8f, 0.5f))
					{
						bLocal_259 = false;
					}
				}
			}
			break;
		case 2:
			break;
		case 4:
			break;
		case 8:
			if (func_843(1))
			{
				if (!bLocal_259)
				{
					bLocal_259 = true;
				}
			}
			if (!__LIB_1__::func_322("RH0_RTRN_WGN1") && !__LIB_1__::func_322("RH0_RTRN_QUICK2"))
			{
				func_842(8, 0);
			}
			break;
		case 16:
			func_842(16, "RH0_RIDE_MOUNT3");
			break;
		case 32:
			if (__LIB_9__::func_913(&(vLocal_664[4 /*3*/]), 1f))
			{
				__LIB_3__::func_662(func_835(32), 7500, 0, 0, -1, -1, 0);
			}
			break;
		case 64:
			func_842(64, "RH0_RTRN_QUICK1");
			break;
		case 128:
			func_842(128, "RH0_CRD_SCPE0");
			break;
		case 256:
			if (ENTITY::GET_ENTITY_SPEED(Global_35) > 0.1f)
			{
				func_844(256, &(vLocal_664[4 /*3*/]), 7f, 1f);
			}
			break;
		case 512:
			break;
		case 2048:
			break;
		case 4096:
			break;
		case 16384:
			func_846(uParam0, func_835(16384), iLocal_262, 10, 1092616192 /* Float: 10f */);
			break;
		case 8192:
			if (!func_404(8192))
			{
				if (__LIB_1__::func_185(13))
				{
					if (!__LIB_1__::func_322("RH0_ARRIVE"))
					{
						__LIB_3__::func_662(func_835(8192), 7500, 0, 0, -1, -1, 0);
						func_837(8192);
					}
				}
			}
			break;
		default:
			break;
	}
}

int func_338(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	if (__LIB_8__::func_406(16777216))
	{
		return 1;
	}
	if (!__LIB_4__::func_475(iParam0))
	{
		return 0;
	}
	iVar0 = __LIB_3__::func_568(*iParam0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(iVar0, 1, iParam1);
	}
	iVar1 = __LIB_3__::func_568(*iParam0, 1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(iVar1, 1, iParam1);
	}
	__LIB_13__::func_852(16777216);
	return 1;
}

void func_339(var uParam0, int iParam1, int iParam2, int iParam3)
{
	__LIB_12__::func_997(uParam0, Local_64[iParam1 /*4*/], Local_64[iParam2 /*4*/], iParam1, iParam2, iParam3);
}

void func_342(var uParam0)
{
	__LIB_3__::func_139(uParam0, func_191(11), func_192(11), func_193(11), "RHMRB_VOL_CRD_WILDLIFE_STAY_OUT");
	if (VOLUME::_DOES_VOLUME_EXIST(*uParam0))
	{
		POPULATION::_0x18262CAFEBB5FBE1(*uParam0, 192, 0, 0, -1, -1, 0);
		POPULATION::_0xB56D41A694E42E86(*uParam0, 192, 0, 0, -1, -1, 2);
	}
}

bool func_344(var uParam0)
{
	if (__LIB_0__::func_756(1, 8388608))
	{
		if ((__LIB_0__::func_756(1, 16777216) || !__LIB_0__::func_699(5)) || __LIB_1__::func_22(5))
		{
			func_854(0);
			return true;
		}
	}
	else if (__LIB_0__::func_756(1, 33554432))
	{
		if ((__LIB_0__::func_756(1, 67108864) || !__LIB_0__::func_699(5)) || __LIB_1__::func_22(5))
		{
			func_854(0);
			return true;
		}
	}
	else
	{
		func_854(1);
		return true;
	}
	return false;
}

char[] func_350(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "1-DayStart";
		case 1:
			return "MultiStart";
		case 2:
			return "1A-Day_Go_Now";
		case 3:
			return "1B-Day_Wait";
		case 4:
			return "2-NightStart";
		case 5:
			return "NormalStart";
		case 6:
			return "2A-Night_Go_Now";
		case 7:
			return "2B-Night_Wait";
		default:
			break;
	}
	return "INVALID_MCS2_PLAYLIST";
}

void func_352(var uParam0, int iParam1, int iParam2, float fParam3)
{
	if (iParam1 == *iParam2 && !func_404(4))
	{
		return;
	}
	func_834(4);
	if (iParam1 != 4)
	{
		*iParam2 = iParam1;
	}
	__LIB_1__::func_561(fParam3);
	__LIB_13__::func_89(uParam0, func_835(iParam1), 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
	switch (iParam1)
	{
		case 0:
			break;
		case 1:
			__LIB_0__::func_325(&(iLocal_244[1]));
			__LIB_0__::func_325(&(iLocal_244[0]));
			__LIB_0__::func_745(5);
			if (!MAP::DOES_BLIP_EXIST(iLocal_244[2]))
			{
				if (VOLUME::_DOES_VOLUME_EXIST(iLocal_22[4]))
				{
					__LIB_8__::func_152(&(iLocal_244[2]), iLocal_22[4], 1247852480);
					MAP::_0xBD62D98799A3DAF0(iLocal_244[2], 408396114);
				}
			}
			break;
		case 2:
			break;
		case 4:
			__LIB_0__::func_325(&(iLocal_244[4]));
			__LIB_0__::func_325(&(iLocal_244[5]));
			__LIB_0__::func_325(&(iLocal_244[6]));
			__LIB_0__::func_325(&(iLocal_244[1]));
			__LIB_0__::func_325(&(iLocal_244[0]));
			__LIB_0__::func_325(&(iLocal_244[2]));
			__LIB_1__::func_721(7);
			func_837(4);
			__LIB_0__::func_900(5);
			__LIB_3__::func_662(func_835(4), 7500, 0, 0, -1, -1, 0);
			break;
		case 8:
			__LIB_0__::func_325(&(iLocal_244[0]));
			__LIB_0__::func_325(&(iLocal_244[2]));
			__LIB_0__::func_745(5);
			if (!MAP::DOES_BLIP_EXIST(iLocal_244[1]))
			{
				__LIB_2__::func_73(iLocal_14, &(iLocal_244[1]), 408396114, 580546400, 0, "RHMR0_BLIP_WAGON");
			}
			break;
		case 16:
			__LIB_1__::func_721(7);
			__LIB_0__::func_745(5);
			if (!MAP::DOES_BLIP_EXIST(iLocal_244[4]))
			{
				iLocal_244[4] = __LIB_8__::func_777(408396114, func_720(6), 11f, 1);
				if (MAP::DOES_BLIP_EXIST(iLocal_244[4]))
				{
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_244[4], "RHMR0_BLIP_HOMESTEAD");
					MAP::_BLIP_SET_MODIFIER(iLocal_244[4], -1878373110);
				}
			}
			break;
		case 32:
			__LIB_0__::func_745(5);
			__LIB_0__::func_325(&(iLocal_244[4]));
			__LIB_1__::func_718(7);
			break;
		case 64:
			__LIB_0__::func_325(&(iLocal_244[1]));
			__LIB_0__::func_745(5);
			__LIB_3__::func_652(func_720(2), &(iLocal_244[0]), 408396114, 0, "RHMR0_BLIP_EMERALD_RANCH", -1878373110);
			break;
		case 128:
			__LIB_0__::func_325(&(iLocal_244[4]));
			__LIB_0__::func_900(5);
			break;
		case 256:
			__LIB_0__::func_325(&(iLocal_244[1]));
			__LIB_0__::func_325(&(iLocal_244[0]));
			__LIB_0__::func_325(&(iLocal_244[2]));
			__LIB_1__::func_721(7);
			__LIB_0__::func_900(5);
			break;
		case 512:
			__LIB_0__::func_325(&(iLocal_244[4]));
			__LIB_0__::func_325(&(iLocal_244[1]));
			__LIB_0__::func_325(&(iLocal_244[5]));
			__LIB_0__::func_325(&(iLocal_244[6]));
			break;
		case 2048:
			break;
		case 4096:
			__LIB_0__::func_325(&(iLocal_244[4]));
			__LIB_0__::func_325(&(iLocal_244[6]));
			__LIB_0__::func_745(5);
			if (!MAP::DOES_BLIP_EXIST(iLocal_244[5]))
			{
				__LIB_4__::func_78(func_866(), 4f, &(iLocal_244[5]), -1282792512);
			}
			break;
		case 8192:
			__LIB_0__::func_325(&(iLocal_244[5]));
			break;
		case 16384:
			__LIB_0__::func_900(5);
			break;
		case 32768:
			__LIB_0__::func_325(&(iLocal_244[0]));
			__LIB_0__::func_325(&(iLocal_244[1]));
			__LIB_0__::func_745(5);
			func_837(32768);
			break;
	}
}

void func_353(int iParam0, int iParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		return;
	}
	PLAYER::_0x12E09E278C6C29B7(PLAYER::PLAYER_ID());
	*iParam1 = PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID());
	if (PED::DOES_GROUP_EXIST(*iParam1))
	{
		PED::SET_GROUP_FORMATION(*iParam1, 3);
		PED::_0x40C3524D4ED83554(*iParam1, 1);
		PED::_0x154B7E841AC7412F(*iParam1, 0);
		PED::_0xA8A95CECB1906EA2(*iParam1, 0);
		if (!PED::_0x878B68960C1C2A35(Global_35, *iParam1))
		{
			PED::SET_PED_AS_GROUP_LEADER(Global_35, *iParam1, false);
		}
		if (!PED::IS_PED_GROUP_MEMBER(*iParam0, *iParam1, 0))
		{
			TASK::CLEAR_PED_TASKS(*iParam0, true, false);
			func_496(iParam0, 1, 50f);
			PED::SET_PED_CONFIG_FLAG(*iParam0, 279, true);
			PED::SET_PED_AS_GROUP_MEMBER(*iParam0, *iParam1);
		}
	}
}

void func_354(var uParam0)
{
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_B"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON_STUDY_BINOCULARS"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_RADAR_MODE"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_USE_ITEM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON_CALL_ANIMAL"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CAMERA_HANDHELD_USE"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY_ACTION"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY_PC"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY_SECONDARY"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER"), false);
	if (!*uParam0)
	{
		*uParam0 = 1;
		PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), true, 0, -1, false);
	}
}

void func_355(int iParam0)
{
	if (__LIB_8__::func_372(iParam0))
	{
		return;
	}
	iLocal_17 = (iLocal_17 || iParam0);
}

void func_356(int* iParam0, int iParam1, int* iParam2)
{
	__LIB_1__::func_951(iParam0);
	__LIB_1__::func_951(iParam1[0]);
	__LIB_1__::func_951(iParam1[1]);
	__LIB_1__::func_951(iParam2);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_BINOCULARS01X"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_CIGARETTE01X"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_CIGARETTEBOX01X"));
}

void func_357(char* sParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sParam0))
		{
			TASK::REMOVE_WAYPOINT_RECORDING(sParam0);
		}
	}
}

void func_359(int iParam0)
{
	if (func_870(iParam0))
	{
		return;
	}
	func_871(iParam0);
	switch (iParam0)
	{
		case 1:
			AUDIO::_0x2B9C37C01BF25EDB("ride_to_house");
			break;
		case 2:
			AUDIO::_0x2B9C37C01BF25EDB("approach_house");
			break;
		case 4:
			AUDIO::_0x2B9C37C01BF25EDB("infiltrate_house_day");
			break;
		case 8:
			AUDIO::_0x2B9C37C01BF25EDB("infiltrate_house_night");
			break;
		case 16:
			AUDIO::_0x2B9C37C01BF25EDB("get_stagecoach_day");
			break;
		case 32:
			AUDIO::_0x2B9C37C01BF25EDB("get_stagecoach_night");
			break;
		case 64:
			AUDIO::_0x2B9C37C01BF25EDB("ride_back");
			break;
		case 128:
			AUDIO::_0x2B9C37C01BF25EDB("enemies_alerted");
			break;
		case 256:
			AUDIO::_0x2B9C37C01BF25EDB("get_stagecoach_day");
			break;
		case 512:
			AUDIO::_0x2B9C37C01BF25EDB("get_stagecoach_night");
			break;
		case 1024:
			AUDIO::_0x2B9C37C01BF25EDB("ride_back");
			break;
	}
}

void func_360(var uParam0, var uParam1, var uParam2)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(*uParam0))
	{
		__LIB_3__::func_683(uParam0, func_191(18), func_192(18), func_193(18), "RHMR0_GPS_ROAD_RESTRICTION_1");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(*uParam1))
	{
		__LIB_3__::func_683(uParam1, func_191(14), func_192(14), func_193(14), "RHMR0_GPS_ROAD_RESTRICTION_2");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(*uParam2))
	{
		__LIB_3__::func_683(uParam2, func_191(19), func_192(19), func_193(19), "RHMR0_GPS_ROAD_RESTRICTION_3");
	}
}

void func_363(int iParam0, int iParam1, bool bParam2, float fParam3, bool bParam4, bool bParam5)
{
	if ((bParam4 && !ENTITY::IS_ENTITY_DEAD(iParam1)) && __LIB_0__::func_212(5))
	{
		__LIB_3__::func_286(iParam1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam1, false);
		PED::SET_PED_CONFIG_FLAG(iParam0, 167, false);
		__LIB_1__::func_463(iParam1, 5, 1, 0, 0);
	}
	if (__LIB_2__::func_1(iParam0, 0, 1) && __LIB_1__::func_22(5))
	{
		if (__LIB_0__::func_866(5, 0))
		{
			__LIB_1__::func_640(5);
		}
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, !bParam2);
		__LIB_9__::func_203(5, 0, bParam5, 1, fParam3, bParam4, 1, 0, 0, 0, 0);
	}
}

void func_364()
{
	if (ENTITY::IS_ENTITY_DEAD(iLocal_262) || iLocal_48 > 6)
	{
		return;
	}
	switch (iLocal_57)
	{
		case 0:
			__LIB_9__::func_733(1);
			break;
		case 1:
			if ((__LIB_3__::func_332(Local_64[2 /*4*/], 1) < 25f || __LIB_3__::func_332(Local_64[3 /*4*/], 1) < 25f) || __LIB_3__::func_332(Local_64[4 /*4*/], 1) < 25f)
			{
				__LIB_9__::func_733(3);
			}
			else if (__LIB_0__::func_899(&(vLocal_664[31 /*3*/])))
			{
				if (__LIB_9__::func_913(&(vLocal_664[31 /*3*/]), 3f))
				{
					__LIB_13__::func_879(&uLocal_278, "RH0_RIDE_MOUNT1", iLocal_262, Global_35, 0, 0, 1, 1);
					__LIB_9__::func_733(2);
				}
			}
			else
			{
				__LIB_2__::func_259(&(vLocal_664[31 /*3*/]));
			}
			break;
		case 2:
			if (__LIB_18__::func_708(-3f, 1, 0, 0))
			{
				__LIB_9__::func_733(3);
			}
			break;
		case 3:
			break;
	}
}

int func_365(var uParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(iLocal_262))
	{
		return 0;
	}
	if ((iLocal_48 >= 6 || CLOCK::GET_CLOCK_HOURS() == 5) || CLOCK::GET_CLOCK_HOURS() == 19)
	{
		CLOCK::PAUSE_CLOCK(true, 0);
	}
	if (iLocal_48 > 9)
	{
		__LIB_8__::func_602(&uLocal_636, iLocal_262);
		__LIB_13__::func_474(iLocal_262, 10f, 16, 1065353216 /* Float: 1f */);
	}
	if (__LIB_8__::func_372(512))
	{
		return func_882(uParam0);
	}
	else if (func_883(uParam0))
	{
		func_355(512);
	}
	return 0;
}

int func_366(var uParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	if (__LIB_8__::func_406(1024))
	{
		return 1;
	}
	if (__LIB_0__::func_12() != 64)
	{
		return 0;
	}
	if (__LIB_13__::func_859(func_720(12), uParam0, 80f, 1))
	{
		fVar0 = 0f;
		fVar1 = 0f;
		if (bParam1)
		{
			fVar0 = 1f;
			fVar1 = -1f;
		}
		__LIB_1__::func_948(883522755, 0, fVar1, 0, 1, 0, 1, 0);
		__LIB_1__::func_948(1038094132, 0, fVar0, 0, 1, 0, 1, 0);
		__LIB_13__::func_852(1024);
		return 1;
	}
	return 0;
}

bool func_367()
{
	if (__LIB_8__::func_372(131072))
	{
		return true;
	}
	if ((ENTITY::IS_ENTITY_DEAD(iLocal_262) || __LIB_13__::func_855()) || __LIB_13__::func_860())
	{
		return false;
	}
	if (__LIB_8__::func_406(268435456))
	{
		if (__LIB_0__::func_12() != 64)
		{
			__LIB_13__::func_861(268435456);
		}
		return false;
	}
	if (__LIB_0__::func_12() == 64 && __LIB_3__::func_332(func_720(9), 1) < 30f)
	{
		func_355(131072);
		func_371(&iLocal_262, 167, 0);
		return true;
	}
	return false;
}

void func_370(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		PED::_0x89F5E7ADECCCB49C(*iParam0, "Stealth");
	}
	else
	{
		PED::_0x58F7DB5BD8FA2288(*iParam0);
	}
}

void func_371(int iParam0, int iParam1, bool bParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		PED::SET_PED_CONFIG_FLAG(*iParam0, iParam1, bParam2);
	}
}

void func_372(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(*uParam0))
		{
			__LIB_3__::func_683(uParam0, func_191(6), func_192(6), func_193(6), "RHMR0_ROAD_RESTRICTION");
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(*uParam1))
		{
			__LIB_3__::func_683(uParam1, func_191(7), func_192(7), func_193(7), "RHMR0_ROAD_RESTRICTION_B");
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(*uParam2))
		{
			__LIB_3__::func_683(uParam2, func_191(8), func_192(8), func_193(8), "RHMR0_ROAD_RESTRICTION_C");
		}
		if ((VOLUME::_DOES_VOLUME_EXIST(*uParam0) && VOLUME::_DOES_VOLUME_EXIST(*uParam1)) && VOLUME::_DOES_VOLUME_EXIST(*uParam2))
		{
			PATHFIND::_0xC1799FAFD2FDF52B(*uParam0, 0, 0, 0);
			PATHFIND::_0xC1799FAFD2FDF52B(*uParam1, 0, 0, 0);
			PATHFIND::_0xC1799FAFD2FDF52B(*uParam2, 0, 0, 0);
			__LIB_13__::func_852(16);
			if (bParam4)
			{
				__LIB_1__::func_572(func_191(6), 100f, 0, 0, 0, 0, 0);
				__LIB_0__::func_568(func_191(6), 100f, 0);
				__LIB_1__::func_572(func_191(7), 100f, 0, 0, 0, 0, 0);
				__LIB_0__::func_568(func_191(7), 100f, 0);
				__LIB_1__::func_572(func_191(8), 100f, 0, 0, 0, 0, 0);
				__LIB_0__::func_568(func_191(8), 100f, 0);
			}
		}
	}
	else
	{
		if (VOLUME::_DOES_VOLUME_EXIST(*uParam0))
		{
			PATHFIND::_0xD17672447692478E(*uParam0, 0);
		}
		if (VOLUME::_DOES_VOLUME_EXIST(*uParam1))
		{
			PATHFIND::_0xD17672447692478E(*uParam1, 0);
		}
		if (VOLUME::_DOES_VOLUME_EXIST(*uParam2))
		{
			PATHFIND::_0xD17672447692478E(*uParam2, 0);
		}
		__LIB_13__::func_861(16);
	}
}

void func_373(var uParam0, int iParam1)
{
	__LIB_12__::func_839(uParam0, func_350(iParam1));
	iLocal_520 = iParam1;
}

void func_374()
{
	UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
	HUD::_0x160825DADF1B04B3();
	__LIB_3__::func_760();
}

void func_375()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 32769)
	{
		func_834(iVar0);
		iVar0++;
	}
}

void func_378(bool bParam0)
{
	if (bParam0)
	{
		PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "Cautious", 1f, -1);
	}
	else
	{
		PED::_0x411189E51B8020BA(Global_35, "Cautious");
	}
}

void func_382(var uParam0)
{
	if (func_387())
	{
		if (__LIB_13__::func_860())
		{
			if (func_892())
			{
				func_359(256);
			}
			else
			{
				func_359(16);
			}
		}
		else if (func_892())
		{
			func_359(512);
		}
		else
		{
			func_359(32);
		}
	}
	if (func_893())
	{
		func_359(64);
	}
	else
	{
		func_894(uParam0);
	}
	func_403(&(iLocal_22[18]), &(uLocal_255[0]), 1);
	func_403(&(iLocal_22[14]), &(uLocal_255[1]), 1);
	func_403(&(iLocal_22[19]), &(uLocal_255[2]), 1);
	func_895(uParam0, &(iLocal_244[0]), &iLocal_401, &(vLocal_664[4 /*3*/]));
	if (!func_896(8))
	{
		if (func_893())
		{
			if (iLocal_401 == 64)
			{
				if (__LIB_9__::func_913(&(vLocal_664[16 /*3*/]), 1f))
				{
					func_897();
					func_898(8);
				}
				else if (!__LIB_0__::func_899(&(vLocal_664[16 /*3*/])))
				{
					__LIB_2__::func_259(&(vLocal_664[16 /*3*/]));
				}
			}
		}
	}
	CLOCK::PAUSE_CLOCK(true, 0);
	func_366(&uLocal_515, 0);
	if ((!__LIB_8__::func_406(1073741824 /* Float: 2f */) && !__LIB_8__::func_406(-2147483648)) && func_893())
	{
		__LIB_13__::func_852(1073741824 /* Float: 2f */);
		func_339(uParam0, 7, 8, 0);
	}
}

bool func_383(int iParam0)
{
	if (__LIB_0__::func_756(1, 8) && __LIB_1__::func_22(5))
	{
		__LIB_4__::func_58(1, 4);
		PED::SET_PED_KEEP_TASK(iParam0, true);
		func_363(iParam0, 0, 0, 1092616192 /* Float: 10f */, 0, 0);
		return true;
	}
	return false;
}

void func_384(var uParam0)
{
	func_382(uParam0);
	if (__LIB_13__::func_855())
	{
		func_359(8);
		__LIB_7__::func_448(Global_1347702[94 /*49*/].f_15, 1);
		func_339(uParam0, 5, 7, 0);
	}
	else
	{
		func_359(4);
		__LIB_7__::func_448(Global_1347702[94 /*49*/].f_15, 0);
		func_339(uParam0, 6, 7, 0);
	}
	func_360(&(iLocal_22[18]), &(iLocal_22[14]), &(iLocal_22[19]));
	func_356(&iLocal_270, &iLocal_266, &iLocal_269);
	func_357(func_203());
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), false, 0, -1, false);
	func_495(&iLocal_264, 1);
	func_496(&iLocal_262, 0, 1065353216 /* Float: 1f */);
	__LIB_0__::func_745(5);
}

void func_385()
{
	if (SCRIPTS::_0x7409669C5ED50144(joaat("CHAL_CTX_CUSTOM_2")))
	{
	}
	else
	{
		SCRIPTS::_0x7D654266025E921B(joaat("CHAL_CTX_CUSTOM_2"));
	}
}

void func_386(var uParam0)
{
	if (func_896(4))
	{
		return;
	}
	if (func_899())
	{
		__LIB_12__::func_967(uParam0, joaat("RHMR0_LOOTALL"));
		func_898(4);
	}
}

bool func_387()
{
	return __LIB_0__::func_768(1, 4096);
}

bool func_390()
{
	return __LIB_0__::func_768(1, 1024);
}

bool func_391()
{
	return __LIB_0__::func_768(1, 8192);
}

void func_394(var uParam0)
{
	if (func_896(2))
	{
		return;
	}
	if (__LIB_9__::func_746())
	{
		__LIB_12__::func_967(uParam0, joaat("RHMR0_NOTSPOTTED"));
		func_898(2);
		return;
	}
	if (__LIB_9__::func_760())
	{
		__LIB_12__::func_967(uParam0, joaat("RHMR0_NOTSPOTTED"));
		func_898(2);
		return;
	}
	if (__LIB_9__::func_766())
	{
		__LIB_12__::func_967(uParam0, joaat("RHMR0_NOTSPOTTED"));
		func_898(2);
	}
}

bool func_395()
{
	if ((__LIB_9__::func_748() || __LIB_13__::func_877()) && (__LIB_9__::func_747() || __LIB_13__::func_878()))
	{
		return true;
	}
	return false;
}

void func_396()
{
	if (!func_395())
	{
		return;
	}
	if (__LIB_0__::func_899(&(vLocal_664[32 /*3*/])))
	{
		if (__LIB_1__::func_583(&(vLocal_664[32 /*3*/])) < 5f)
		{
			return;
		}
	}
	else
	{
		__LIB_2__::func_259(&(vLocal_664[32 /*3*/]));
		return;
	}
	if (PED::_0xB7DBB2986B87E230(iLocal_262, 0.25f))
	{
		if (!__LIB_14__::func_166(64))
		{
			__LIB_3__::func_732(0);
			__LIB_13__::func_879(&uLocal_278, "RH0_NGT_NOISE1", iLocal_262, Global_35, 0, 0, 1, 1);
			__LIB_2__::func_259(&(vLocal_664[32 /*3*/]));
			func_909(64);
		}
		else if (!__LIB_14__::func_166(128))
		{
			__LIB_3__::func_732(0);
			__LIB_13__::func_879(&uLocal_278, "RH0_NGT_NOISE2", iLocal_262, Global_35, 0, 0, 1, 1);
			__LIB_2__::func_259(&(vLocal_664[32 /*3*/]));
			func_909(128);
		}
		else if (!__LIB_14__::func_166(256))
		{
			__LIB_3__::func_732(0);
			__LIB_13__::func_879(&uLocal_278, "RH0_NGT_NOISE3", iLocal_262, Global_35, 0, 0, 1, 1);
			__LIB_2__::func_259(&(vLocal_664[32 /*3*/]));
			func_909(256);
		}
	}
}

bool func_398(int iParam0, vector3 vParam1, int iParam4)
{
	if (__LIB_0__::func_756(1, 16))
	{
		if (!__LIB_0__::func_699(5))
		{
			func_910(iParam0, vParam1, 0f, iParam4);
		}
		else if (__LIB_1__::func_22(5))
		{
			return true;
		}
	}
	else if (__LIB_1__::func_22(5))
	{
		return true;
	}
	return false;
}

int func_401(bool bParam0)
{
	if (bParam0)
	{
		return -1;
	}
	return 0;
}

void func_402(int iParam0, int iParam1, int iParam2, int iParam3)
{
	float fVar0;
	int iVar1;
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		fVar0 = 1.5f;
		if (__LIB_9__::func_748() || __LIB_9__::func_746())
		{
			fVar0 = 2f;
		}
		TASK::OPEN_SEQUENCE_TASK(&iVar1);
		TASK::TASK_ENTER_VEHICLE(0, iParam1, iParam3, iParam2, fVar0, 262144, 0);
		__LIB_1__::func_474(*iParam0, &iVar1, 0, 0, 1, 1);
	}
}

int func_403(var uParam0, var uParam1, bool bParam2)
{
	if (bParam2)
	{
		if (*uParam1)
		{
			return 1;
		}
	}
	else if (!*uParam1)
	{
		return 1;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(*uParam0))
	{
		if (bParam2)
		{
			PATHFIND::_0xB03944057FD735BA(*uParam0, 0, 0);
			*uParam1 = 1;
			return 1;
		}
		else
		{
			PATHFIND::_0x5A4E1A41E3A02AD0(*uParam0, 0, 0);
			*uParam1 = 0;
			return 1;
		}
	}
	return 0;
}

bool func_404(int iParam0)
{
	return (iLocal_252 && iParam0) != 0;
}

bool func_405(var uParam0, bool bParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(iLocal_262) || ENTITY::IS_ENTITY_DEAD(iLocal_14))
	{
		return false;
	}
	switch (iLocal_50)
	{
		case 0:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_14))
			{
				iLocal_401 = 0;
				func_375();
				func_359(1024);
				__LIB_0__::func_900(5);
				__LIB_7__::func_206(1);
			}
			break;
		case 1:
			if (__LIB_2__::func_343(iLocal_262, iLocal_14, 0))
			{
				if (__LIB_6__::func_693(iLocal_262, iLocal_14, -1) && !__LIB_0__::func_163(iLocal_262, 355471868))
				{
					if (__LIB_2__::func_118(iLocal_14, 1, 1) < 10f)
					{
						TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(iLocal_262, iLocal_14);
						__LIB_2__::func_259(&(vLocal_664[36 /*3*/]));
						__LIB_7__::func_206(2);
					}
					func_844(iLocal_401, &(vLocal_664[4 /*3*/]), 16f, -1082130432 /* Float: -1f */);
				}
				else
				{
					__LIB_7__::func_206(2);
				}
			}
			else if (__LIB_2__::func_343(Global_35, iLocal_14, 0))
			{
				func_402(&iLocal_262, iLocal_14, 0, -1);
				__LIB_7__::func_206(2);
			}
			else
			{
				func_402(&iLocal_262, iLocal_14, func_401(__LIB_13__::func_855()), -1);
				__LIB_7__::func_206(2);
			}
			break;
		case 2:
			if (__LIB_3__::func_330(iLocal_262, iLocal_14, 0))
			{
				if (__LIB_6__::func_693(iLocal_262, iLocal_14, -1))
				{
					if (!__LIB_0__::func_163(iLocal_262, 355471868))
					{
						if (__LIB_3__::func_514(&(vLocal_664[36 /*3*/]), 5f))
						{
							TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(iLocal_262, iLocal_14);
							__LIB_2__::func_259(&(vLocal_664[36 /*3*/]));
						}
						else if (!__LIB_0__::func_899(&(vLocal_664[36 /*3*/])))
						{
							__LIB_2__::func_259(&(vLocal_664[36 /*3*/]));
						}
					}
				}
				func_413(iLocal_262, 1);
				__LIB_7__::func_206(3);
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_262, 1435919172, true) != 1)
			{
				func_413(iLocal_262, 0);
				__LIB_7__::func_206(1);
			}
			else if (__LIB_3__::func_330(Global_35, iLocal_14, 0))
			{
				func_914(uParam0);
			}
			break;
		case 3:
			if (!__LIB_3__::func_330(iLocal_262, iLocal_14, 0))
			{
				func_413(iLocal_262, 0);
				__LIB_7__::func_206(1);
			}
			else if (__LIB_3__::func_330(Global_35, iLocal_14, 0))
			{
				if (__LIB_6__::func_693(Global_35, iLocal_14, -1))
				{
					if (!__LIB_8__::func_406(-2147483648))
					{
						func_339(uParam0, 7, 8, 0);
					}
					__LIB_13__::func_852(65536);
					if (__LIB_8__::func_372(1048576) || __LIB_8__::func_406(4194304))
					{
						func_352(uParam0, 1, &iLocal_401, &(vLocal_664[4 /*3*/]));
						func_915(1);
						__LIB_7__::func_206(6);
					}
					else
					{
						func_897();
						func_352(uParam0, 64, &iLocal_401, &(vLocal_664[4 /*3*/]));
						__LIB_7__::func_206(4);
					}
				}
			}
			else
			{
				if (__LIB_6__::func_693(iLocal_262, iLocal_14, -1))
				{
					if (!__LIB_0__::func_163(iLocal_262, 355471868))
					{
						if (__LIB_3__::func_514(&(vLocal_664[36 /*3*/]), 5f))
						{
							TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(iLocal_262, iLocal_14);
							__LIB_2__::func_259(&(vLocal_664[36 /*3*/]));
						}
						else if (!__LIB_0__::func_899(&(vLocal_664[36 /*3*/])))
						{
							__LIB_2__::func_259(&(vLocal_664[36 /*3*/]));
						}
					}
				}
				_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_262, &uLocal_376);
				func_916(uParam0);
				func_844(8, &(vLocal_664[4 /*3*/]), 12f, -1082130432 /* Float: -1f */);
			}
			break;
		case 4:
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_DRAFT_SWITCH_DRIVERS"), false);
			func_917(bParam1);
			func_844(64, &(vLocal_664[4 /*3*/]), 12f, 1f);
			if (__LIB_8__::func_406(16) && __LIB_3__::func_332(func_720(2), 1) < 700f)
			{
				func_372(&(iLocal_22[6]), &(iLocal_22[7]), &(iLocal_22[8]), 0, 0);
			}
			if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_22[20]))
			{
				__LIB_3__::func_573(&(iLocal_22[20]), func_191(20), func_192(20), func_193(20), "RHMRB_VOL_EMR_RETURN_WAGON");
			}
			if (!__LIB_3__::func_330(Global_35, iLocal_14, 0) || !__LIB_3__::func_330(iLocal_262, iLocal_14, 0))
			{
				__LIB_13__::func_852(32);
				__LIB_9__::func_774(&(vLocal_664[9 /*3*/]));
				iLocal_54 = iLocal_53;
				AUDIO::PAUSE_SCRIPTED_CONVERSATION(sLocal_519, false, true, false, true);
				func_413(iLocal_262, 0);
				__LIB_11__::func_640(12);
				__LIB_7__::func_206(1);
				return false;
			}
			if (__LIB_3__::func_332(func_720(2), 1) < 100f)
			{
				__LIB_9__::func_204(Global_35, func_720(2), &(vLocal_664[17 /*3*/]), 1112014848 /* Float: 50f */, 1106247680 /* Float: 30f */, 25f, 0f, 99f, 1, 0, 1, 1, 1);
				if (!func_920(268435456))
				{
					__LIB_3__::func_732(1);
					func_718(268435456);
				}
				if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_22[20]) || ENTITY::IS_ENTITY_IN_VOLUME(iLocal_14, iLocal_22[20], true, 0))
				{
					if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iLocal_262))
					{
					}
					else
					{
						__LIB_7__::func_206(5);
					}
				}
			}
			break;
		case 5:
			__LIB_9__::func_204(Global_35, func_720(2), &(vLocal_664[17 /*3*/]), 1112014848 /* Float: 50f */, 1106247680 /* Float: 30f */, 25f, 0f, 99f, 1, 0, 1, 1, 1);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_DRAFT_SWITCH_DRIVERS"), false);
			if (!__LIB_3__::func_330(Global_35, iLocal_14, 0))
			{
				__LIB_7__::func_206(3);
				return false;
			}
			iLocal_22[17] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(func_191(17), func_192(17), func_193(17), "RHMRB_VOL_MCS2_TRIGGER_GREET");
			iLocal_22[21] = VOLUME::_0x0EB78C2B156635B1(joaat("VOLBOX"), func_191(21), func_192(21), func_193(21));
			if (VOLUME::_DOES_VOLUME_EXIST(iLocal_22[21]))
			{
				VOLUME::_0x5B23DFF8E0948BB2(iLocal_22[21], 0);
				VOLUME::_0xBE551C2CC421185D(iLocal_22[21], 1);
			}
			__LIB_13__::func_862();
			func_922();
			__LIB_3__::func_732(0);
			__LIB_13__::func_879(&uLocal_278, "RH0_RTRN_BRN", iLocal_262, Global_35, 0, 0, 1, 0);
			__LIB_13__::func_852(4194304);
			__LIB_4__::func_389(-1304772442, 1, 1);
			__LIB_4__::func_389(-1924401463, 1, 1);
			func_352(uParam0, 1, &iLocal_401, &(vLocal_664[4 /*3*/]));
			func_915(1);
			__LIB_7__::func_206(6);
			break;
		case 6:
			__LIB_9__::func_204(Global_35, func_720(2), &(vLocal_664[17 /*3*/]), 1112014848 /* Float: 50f */, 1106247680 /* Float: 30f */, 25f, 0f, 99f, 1, 0, 1, 1, 1);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_DRAFT_SWITCH_DRIVERS"), false);
			if (func_716(&iLocal_512, 0.655f))
			{
				_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_265, &uLocal_376);
			}
			if (!__LIB_8__::func_372(524288))
			{
				if (__LIB_2__::func_215(iLocal_262, iLocal_265, 1, 30f, 0) || __LIB_1__::func_205(iLocal_262, iLocal_22[17], 1, 0))
				{
					PED::SET_PED_CONFIG_FLAG(iLocal_262, 448, true);
					__LIB_3__::func_732(1);
					__LIB_13__::func_879(&uLocal_278, "RH0_MCS2_LI", iLocal_262, iLocal_265, 0, 0, 1, 1);
					func_355(524288);
				}
			}
			if (!__LIB_3__::func_330(Global_35, iLocal_14, 0))
			{
				__LIB_7__::func_206(3);
				return false;
			}
			if (__LIB_0__::func_393(Global_35, iLocal_22[4], 0, 1) && !__LIB_1__::func_322("RH0_MCS2_LI"))
			{
				__LIB_0__::func_325(&(iLocal_244[2]));
				func_352(uParam0, 0, &iLocal_401, &(vLocal_664[4 /*3*/]));
				func_403(&(iLocal_22[18]), &(uLocal_255[0]), 0);
				func_403(&(iLocal_22[14]), &(uLocal_255[1]), 0);
				func_403(&(iLocal_22[19]), &(uLocal_255[2]), 0);
				__LIB_7__::func_206(7);
			}
			break;
		case 7:
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_DRAFT_SWITCH_DRIVERS"), false);
			return true;
	}
	return false;
}

bool func_406(var uParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	float fVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	if (!func_924() || ENTITY::IS_ENTITY_DEAD(iLocal_262))
	{
		return true;
	}
	switch (iLocal_62)
	{
		case 0:
			__LIB_13__::func_863(1);
			break;
		case 1:
			if (__LIB_2__::func_343(Global_35, iLocal_14, 0))
			{
				__LIB_13__::func_863(2);
			}
			break;
		case 2:
			STREAMING::REQUEST_MODEL(joaat("U_M_M_CRDWITNESS_01"), false);
			STREAMING::REQUEST_MODEL(joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT"), false);
			__LIB_13__::func_863(4);
			break;
		case 4:
			if (__LIB_3__::func_332(func_720(15), 1) < __LIB_3__::func_332(func_720(17), 1))
			{
				iLocal_405 = 17;
			}
			if (STREAMING::HAS_MODEL_LOADED(joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT")))
			{
				iLocal_403 = __LIB_8__::func_931(joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT"), func_720(iLocal_405), func_759(iLocal_405), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_403))
				{
					PED::SET_PED_NAME_DEBUG(iLocal_403, "CRD_HORSE");
					__LIB_1__::func_991(iLocal_403, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_403, true);
				}
				__LIB_13__::func_863(3);
			}
			break;
		case 3:
			if (iLocal_405 == 17)
			{
				iLocal_404 = 16;
			}
			if (STREAMING::HAS_MODEL_LOADED(joaat("U_M_M_CRDWITNESS_01")))
			{
				iLocal_402 = __LIB_8__::func_931(joaat("U_M_M_CRDWITNESS_01"), func_720(iLocal_404), func_759(iLocal_404), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_402))
				{
					PED::SET_PED_NAME_DEBUG(iLocal_402, "CRD_WTNES");
					__LIB_1__::func_991(iLocal_402, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_402, true);
					__LIB_2__::func_133(iLocal_402, "0938_A_M_M_Civ_White_AVOID_08", 0);
				}
				__LIB_13__::func_863(5);
			}
			break;
		case 5:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_402) && !ENTITY::IS_ENTITY_DEAD(iLocal_403))
			{
				func_929(&iLocal_402, &iLocal_403, &uLocal_421);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_MOUNT_ANIMAL(0, iLocal_403, 20000, -1, 1073741824 /* Float: 2f */, 16, 0, 0);
				TASK::_TASK_MOVE_IN_TRAFFIC_2(0, func_720(19), 1073741824 /* Float: 2f */, 1.5f, 0, 0);
				TASK::_TASK_MOVE_IN_TRAFFIC(0, -1082130432 /* Float: -1f */, 0, 0);
				__LIB_1__::func_474(iLocal_402, &iVar0, 0, 0, 1, 1);
				__LIB_13__::func_863(7);
			}
			else
			{
				__LIB_13__::func_863(15);
			}
			break;
		case 7:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_402))
			{
				Local_406 = Global_35;
				Local_406.f_1 = 0;
				Local_406.f_2 = joaat("CRIME_MURDER");
				Local_406.f_3 = { func_720(19) };
				Local_406.f_8 = 1;
				Local_406.f_9 = 0;
				Local_406.f_10 = 0;
				Local_406.f_7 = 1000;
				PED::_0x24C82EF607105FAA(iLocal_402, joaat("TIMID"));
				PED::_0xB8B6430EAD2D2437(iLocal_402, 673924189);
				LAW::_0xC805EB785824F712(true);
				LAW::_0x95878B13E272EF1F(iLocal_402, Global_35, 0, func_720(19), joaat("CRIME_MURDER"));
				__LIB_3__::func_923(iLocal_402, 30f, 0, 1);
				__LIB_13__::func_863(8);
			}
			else
			{
				__LIB_13__::func_863(12);
			}
			break;
		case 8:
			if (((!__LIB_14__::func_166(4) && __LIB_2__::func_343(iLocal_262, iLocal_14, 0)) && __LIB_0__::func_665(iLocal_262, iLocal_402, 1, 1) > 80f) && !__LIB_2__::func_136(iLocal_262, 1))
			{
				__LIB_13__::func_879(&uLocal_278, "RH0_RTRN_QUICK1", iLocal_262, Global_35, 0, 0, 1, 1);
				func_909(4);
			}
			if ((!__LIB_14__::func_166(2) && __LIB_2__::func_215(iLocal_262, iLocal_402, 0, 80f, 0)) && !__LIB_2__::func_136(iLocal_262, 1))
			{
				__LIB_3__::func_732(0);
				__LIB_13__::func_879(&uLocal_278, "RH0_RTRN_COOL", iLocal_262, Global_35, 0, 0, 1, 1);
				func_909(2);
			}
			if (__LIB_10__::func_608(iLocal_402, 0, &uLocal_421, &uLocal_477, 0, 0))
			{
				func_909(1024);
				if (__LIB_1__::func_322("RH0_RTRN_QUICK1"))
				{
					__LIB_5__::func_239("RH0_RTRN_QUICK1", 0, 1);
				}
				if (__LIB_1__::func_322("RH0_RTRN_COOL"))
				{
					__LIB_5__::func_239("RH0_RTRN_COOL", 0, 1);
				}
			}
			if (__LIB_2__::func_215(iLocal_402, Global_35, 0, 30f, 0) || __LIB_2__::func_215(iLocal_402, iLocal_262, 0, 30f, 0))
			{
				bVar1 = true;
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_402))
			{
				if ((bVar1 && !__LIB_1__::func_322("RH0_RTRN_COOL")) || __LIB_14__::func_166(1024))
				{
					Local_406.f_3 = { Global_36 };
					Local_406.f_9 = 0;
					Local_406.f_10 = 0;
					Local_406.f_14 = 1034599207;
					LAW::_0xC805EB785824F712(false);
					PED::_0x06D26A96CA1BCA75(iLocal_402, 1, 1f, Global_35);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_402, false);
					PED::SET_PED_CONFIG_FLAG(iLocal_402, 146, false);
					PED::SET_PED_CONFIG_FLAG(iLocal_402, 148, false);
					PED::SET_PED_CONFIG_FLAG(iLocal_402, 216, true);
					PED::SET_PED_CONFIG_FLAG(iLocal_402, 190, true);
					PED::SET_PED_CONFIG_FLAG(iLocal_402, 460, true);
					PED::_0xC6C4E15CF7D52FEA(iLocal_402, 1000f);
					LAW::_0x10827B5A0AAC56A7(PLAYER::PLAYER_ID(), joaat("CRIME_MURDER"), iLocal_402);
					LAW::_0x018F30D762E62DF8(iLocal_402, &Local_406);
					__LIB_13__::func_863(9);
				}
				if (__LIB_0__::func_12() != 64)
				{
					if (__LIB_2__::func_118(iLocal_402, 1, 1) > 80f)
					{
						__LIB_3__::func_535(iLocal_402, 0, 0, 0);
						PED::_0x39A2FC5AF55A52B1(iLocal_402, -1);
						LAW::_0xC805EB785824F712(false);
						__LIB_13__::func_863(13);
					}
				}
			}
			else
			{
				__LIB_13__::func_863(12);
			}
			break;
		case 9:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_402))
			{
				if (!__LIB_14__::func_166(1024))
				{
					if (__LIB_10__::func_608(iLocal_402, 0, &uLocal_421, &uLocal_477, 0, 0))
					{
						func_909(1024);
						if (__LIB_1__::func_322("RH0_RTRN_QUICK1"))
						{
							__LIB_5__::func_239("RH0_RTRN_QUICK1", 0, 1);
						}
						if (__LIB_1__::func_322("RH0_RTRN_COOL"))
						{
							__LIB_5__::func_239("RH0_RTRN_COOL", 0, 1);
						}
					}
				}
				if (LAW::_0x0EAF918F751F27BA(iLocal_402) || LAW::_0x69E181772886F48B(PLAYER::GET_PLAYER_INDEX()))
				{
					__LIB_13__::func_852(262144);
					func_352(uParam0, 32768, &iLocal_401, &(vLocal_664[4 /*3*/]));
					__LIB_2__::func_259(&(vLocal_664[26 /*3*/]));
					__LIB_13__::func_863(10);
				}
				else
				{
					LAW::_0x10827B5A0AAC56A7(PLAYER::PLAYER_ID(), joaat("CRIME_MURDER"), iLocal_402);
					LAW::_0x018F30D762E62DF8(iLocal_402, &Local_406);
					if (__LIB_0__::func_12() != 64)
					{
						if (__LIB_2__::func_118(iLocal_402, 1, 1) > 80f)
						{
							__LIB_3__::func_535(iLocal_402, 0, 0, 0);
							PED::_0x39A2FC5AF55A52B1(iLocal_402, -1);
							LAW::_0xC805EB785824F712(false);
							__LIB_13__::func_863(13);
						}
					}
				}
			}
			else
			{
				__LIB_13__::func_863(12);
			}
			break;
		case 10:
			if (__LIB_10__::func_608(iLocal_402, 0, &uLocal_421, &uLocal_477, 0, 0))
			{
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_402))
			{
				bVar2 = LAW::_0x856CE8FDE2416602(iLocal_402);
				bVar3 = LAW::_0x0EAF918F751F27BA(iLocal_402);
				bVar4 = LAW::_0x69E181772886F48B(PLAYER::GET_PLAYER_INDEX());
				if ((!bVar2 && !bVar3) && !bVar4)
				{
					__LIB_2__::func_259(&(vLocal_664[27 /*3*/]));
					__LIB_13__::func_863(11);
					return false;
				}
				if (__LIB_2__::func_136(Global_35, 1) || __LIB_2__::func_136(iLocal_402, 1))
				{
					__LIB_2__::func_259(&(vLocal_664[26 /*3*/]));
					return false;
				}
				fVar5 = 7f;
				if (__LIB_13__::func_212(PLAYER::GET_PLAYER_INDEX(), &iLocal_402) || __LIB_2__::func_401(iLocal_402, 1, 1, 1, 0, 0))
				{
					fVar5 = 9f;
				}
				if (!__LIB_14__::func_166(8))
				{
					fVar5 = 1f;
				}
				if (__LIB_9__::func_178(&(vLocal_664[26 /*3*/])) > fVar5)
				{
					if (!__LIB_14__::func_166(8))
					{
						if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iLocal_262))
						{
							__LIB_13__::func_879(&uLocal_278, "RH0_RTRN_SEEN1", iLocal_262, Global_35, 0, 0, 1, 1);
							func_909(8);
							__LIB_2__::func_259(&(vLocal_664[26 /*3*/]));
						}
					}
					else if (!__LIB_14__::func_166(16))
					{
						if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iLocal_262))
						{
							__LIB_13__::func_879(&uLocal_278, "RH0_RTRN_SEEN2", iLocal_262, Global_35, 0, 0, 1, 1);
							func_909(16);
							__LIB_2__::func_259(&(vLocal_664[26 /*3*/]));
						}
					}
					else if (!__LIB_14__::func_166(32))
					{
						if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iLocal_262))
						{
							__LIB_13__::func_879(&uLocal_278, "RH0_RTRN_SEEN3", iLocal_262, Global_35, 0, 0, 1, 1);
							func_909(32);
							__LIB_1__::func_561(&(vLocal_664[26 /*3*/]));
						}
					}
				}
				if (__LIB_14__::func_166(32))
				{
					if (PED::_0xF7327ACC7A89AEF1(iLocal_402, 40, 10000))
					{
					}
					else if (PED::_0xF7327ACC7A89AEF1(iLocal_402, 36, 4000) || PED::_0xF7327ACC7A89AEF1(iLocal_402, 13, 4000))
					{
						if (!__LIB_0__::func_901(&(vLocal_664[37 /*3*/])))
						{
							__LIB_9__::func_774(&(vLocal_664[37 /*3*/]));
						}
					}
					else if (__LIB_9__::func_913(&(vLocal_664[37 /*3*/]), 10f))
					{
						bLocal_260 = true;
					}
					else if (!__LIB_0__::func_899(&(vLocal_664[37 /*3*/])))
					{
						__LIB_2__::func_259(&(vLocal_664[37 /*3*/]));
					}
					else if (__LIB_0__::func_901(&(vLocal_664[37 /*3*/])))
					{
						__LIB_9__::func_773(&(vLocal_664[37 /*3*/]));
					}
				}
			}
			else
			{
				__LIB_13__::func_861(262144);
				__LIB_13__::func_863(12);
			}
			break;
		case 11:
			if (ENTITY::IS_ENTITY_DEAD(iLocal_402))
			{
			}
			iVar7 = ITEMSET::CREATE_ITEMSET(true);
			LAW::_0x522F74636DF10201(PLAYER::PLAYER_ID(), iVar7);
			iVar8 = 0;
			while (iVar8 < ITEMSET::GET_ITEMSET_SIZE(iVar7))
			{
				iVar9 = MISC::_GET_PED_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar8, iVar7));
				if (iVar9 == iLocal_402)
				{
					bVar6 = true;
				}
				iVar8++;
			}
			ITEMSET::DESTROY_ITEMSET(iVar7);
			if (bVar6)
			{
				return false;
			}
			if (((((LAW::_0x856CE8FDE2416602(iLocal_402) || PED::_0x7583A9D35248B83F(iLocal_402)) || LAW::_0xECE3C34B270428D5()) || LAW::_0xF0FBFB9AB15F7734(PLAYER::GET_PLAYER_INDEX(), 0, 0)) || LAW::_0x0EAF918F751F27BA(iLocal_402)) || LAW::_0x69E181772886F48B(PLAYER::GET_PLAYER_INDEX()))
			{
				__LIB_1__::func_561(&(vLocal_664[27 /*3*/]));
				__LIB_13__::func_863(10);
			}
			else if (!__LIB_0__::func_899(&(vLocal_664[27 /*3*/])))
			{
				__LIB_2__::func_259(&(vLocal_664[27 /*3*/]));
			}
			else if (__LIB_1__::func_583(&(vLocal_664[27 /*3*/])) > 3f)
			{
				TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_402, Global_35, 2, 384, -1082130432 /* Float: -1f */, -1, iLocal_403);
				func_937(uParam0);
				__LIB_1__::func_561(&(vLocal_664[27 /*3*/]));
				__LIB_13__::func_863(14);
			}
			break;
		case 12:
			if (__LIB_1__::func_322("RH0_RTRN_QUICK1"))
			{
				__LIB_5__::func_239("RH0_RTRN_QUICK1", 0, 1);
			}
			if (__LIB_1__::func_322("RH0_RTRN_COOL"))
			{
				__LIB_5__::func_239("RH0_RTRN_COOL", 0, 1);
			}
			if (__LIB_18__::func_708(-1f, 1, 0, 0) && !__LIB_2__::func_136(iLocal_262, 1))
			{
				__LIB_13__::func_879(&uLocal_278, "RH0_RTRN_THRTc", iLocal_262, Global_35, 0, 0, 1, 1);
				func_937(uParam0);
				__LIB_13__::func_861(262144);
				__LIB_13__::func_863(15);
			}
			break;
		case 13:
			if (__LIB_18__::func_708(-1f, 1, 0, 0) && !__LIB_2__::func_136(iLocal_262, 1))
			{
				if (__LIB_14__::func_166(2))
				{
					__LIB_13__::func_879(&uLocal_278, "RH0_RTRN_LOST", iLocal_262, Global_35, 0, 0, 1, 1);
				}
				func_937(uParam0);
				__LIB_13__::func_861(262144);
				__LIB_13__::func_863(15);
			}
			break;
		case 14:
			if (((__LIB_18__::func_708(0f, 1, 0, 0) && !__LIB_2__::func_136(Global_35, 1)) && !__LIB_2__::func_136(iLocal_402, 1)) && !__LIB_2__::func_136(iLocal_262, 1))
			{
				if (ENTITY::IS_ENTITY_DEAD(iLocal_402))
				{
					__LIB_13__::func_879(&uLocal_278, "RH0_RTRN_THRTc", iLocal_262, Global_35, 0, 0, 1, 1);
				}
				else
				{
					__LIB_13__::func_879(&uLocal_278, "RH0_RTRN_THRTb", iLocal_262, Global_35, 0, 0, 1, 1);
				}
				__LIB_13__::func_861(262144);
				__LIB_13__::func_863(15);
			}
			break;
		case 15:
			if (!AUDIO::_0x54B187F111D9C6F8(iLocal_262, 0))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_408(int iParam0, int iParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		return;
	}
	if (bParam2)
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(*iParam1, 1);
		__LIB_13__::func_861(2048);
	}
	else if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		if ((AITRANSPORT::_0x619E63980BFC0096(*iParam0, *iParam1, 1) || (PED::_0x1D46B417F926D34D(*iParam0) && PED::GET_SEAT_PED_IS_TRYING_TO_ENTER(*iParam0) == -1)) || (PED::IS_PED_IN_VEHICLE(*iParam0, *iParam1, false) && PED::_GET_SEAT_PED_IS_USING(*iParam0) == -1))
		{
			if (((PED::IS_PED_IN_VEHICLE(Global_35, *iParam1, false) && PED::_GET_SEAT_PED_IS_USING(Global_35) == -2) && !AITRANSPORT::_0x660639BC60157048(Global_35, *iParam1)) && !__LIB_8__::func_406(2048))
			{
				__LIB_13__::func_852(2048);
				TASK::TASK_LEAVE_VEHICLE(Global_35, *iParam1, 0, 0);
			}
			if (!PED::IS_PED_IN_VEHICLE(Global_35, *iParam1, false) && !__LIB_8__::func_406(2048))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(*iParam1, 3);
				__LIB_13__::func_852(2048);
			}
		}
		else if (__LIB_8__::func_406(2048))
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(*iParam1, 1);
			__LIB_13__::func_861(2048);
		}
	}
}

void func_409(var uParam0)
{
	switch (iLocal_58)
	{
		case 0:
			__LIB_13__::func_861(4096);
			__LIB_4__::func_932(18, 0);
			__LIB_4__::func_389(-1304772442, 1, 1);
			__LIB_4__::func_389(-1924401463, 1, 1);
			__LIB_13__::func_864(3);
			break;
		case 3:
			if (__LIB_3__::func_332(func_720(2), 1) < 100f)
			{
				if (func_660(&iLocal_265))
				{
					iLocal_277 = INTERIOR::GET_INTERIOR_AT_COORDS(func_939());
					if (INTERIOR::IS_VALID_INTERIOR(iLocal_277))
					{
						INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_277);
					}
					func_300(uParam0, 2);
					func_664(&iLocal_265, &uLocal_278, &uLocal_449, 1);
					func_940(&iLocal_265, func_720(21), func_759(21));
					__LIB_13__::func_864(4);
				}
			}
			break;
		case 4:
			if (__LIB_8__::func_372(33554432))
			{
			}
			else if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_512))
			{
				iLocal_512 = ANIMSCENE::_CREATE_ANIM_SCENE(__LIB_13__::func_865(), 0, "PBL_RHMR0_MCS2_LEADIN", false, true);
				ANIMSCENE::LOAD_ANIM_SCENE(iLocal_512);
			}
			else if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_512, true, false))
			{
				func_942(&iLocal_512, "male", iLocal_265);
				__LIB_13__::func_864(5);
			}
			break;
		case 5:
			if (__LIB_2__::func_118(iLocal_265, 1, 1) < 100f)
			{
				func_339(uParam0, 8, 9, 0);
				__LIB_13__::func_852(-2147483648);
				__LIB_13__::func_864(6);
			}
			break;
		case 6:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_265))
			{
				if (!PED::IS_PED_USING_ANY_SCENARIO(iLocal_265))
				{
					__LIB_13__::func_852(16384);
					__LIB_4__::func_389(-308659358, 0, 1);
					__LIB_4__::func_389(-66987983, 0, 1);
					__LIB_13__::func_864(7);
				}
			}
			break;
		case 7:
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(__LIB_2__::func_114(Global_35, 1065353216 /* Float: 1f */), func_720(2), true) < 45f)
			{
				func_670(&uLocal_376, 0, 0);
				func_355(1048576);
				func_944(&iLocal_512);
				__LIB_13__::func_864(8);
			}
			break;
		case 8:
			break;
	}
}

void func_410()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_264) || !ENTITY::DOES_ENTITY_EXIST(iLocal_263))
	{
		if (iLocal_51 != 1)
		{
			__LIB_9__::func_759(1);
		}
	}
	switch (iLocal_51)
	{
		case 0:
			func_946();
			__LIB_9__::func_759(1);
			break;
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_264) && ENTITY::DOES_ENTITY_EXIST(iLocal_263))
			{
				__LIB_9__::func_759(2);
			}
			else
			{
				func_663(&iLocal_263);
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_264))
				{
					__LIB_13__::func_71(&iLocal_264, func_720(7), func_759(7), 1, 1, 1, 1);
				}
			}
			break;
		case 2:
			if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
			{
				if (__LIB_3__::func_332(func_720(9), 1) > 90f)
				{
					__LIB_9__::func_759(3);
				}
			}
			break;
		case 3:
			func_947(&iLocal_264, 0);
			func_947(&iLocal_263, 1);
			__LIB_9__::func_759(4);
			break;
		case 4:
			if (__LIB_0__::func_394(Global_35, iLocal_264, 0))
			{
				if (PED::IS_PED_IN_GROUP(iLocal_264))
				{
					func_494(&iLocal_264);
				}
			}
			else if (!PED::IS_PED_GROUP_MEMBER(iLocal_264, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID()), 0))
			{
				func_947(&iLocal_264, 0);
			}
			if (iLocal_50 > 5)
			{
				__LIB_9__::func_759(5);
			}
			break;
		case 5:
			func_494(&iLocal_264);
			func_494(&iLocal_263);
			func_949(&iLocal_264, func_720(5), 1f, 10f);
			func_949(&iLocal_263, func_720(5), 1f, 10f);
			__LIB_9__::func_759(6);
			break;
		case 6:
			break;
	}
}

void func_411()
{
	if (SCRIPTS::_0x7409669C5ED50144(joaat("CHAL_CTX_CUSTOM_2")))
	{
		SCRIPTS::_0x50B72A754EE64A71(joaat("CHAL_CTX_CUSTOM_2"));
	}
}

void func_412()
{
	if (__LIB_0__::func_12() != 64)
	{
		return;
	}
	if (!__LIB_0__::func_117(869, 32))
	{
		__LIB_0__::func_123(869, 32);
		if (__LIB_8__::func_783(869))
		{
		}
	}
}

void func_413(int iParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (bParam1)
		{
			AUDIO::_0x0D7FD6A55FD63AEF(1, 1, 1);
			AUDIO::_0x0D7FD6A55FD63AEF(3, 1, 1);
			AUDIO::_0x0D7FD6A55FD63AEF(5, 1, 1);
			AUDIO::_0x0D7FD6A55FD63AEF(31, 1, 1);
			AUDIO::_0x0D7FD6A55FD63AEF(33, 1, 1);
			AUDIO::_0x0D7FD6A55FD63AEF(12, 2, 1);
			AUDIO::_0x0D7FD6A55FD63AEF(21, 2, 1);
			AUDIO::_0x0D7FD6A55FD63AEF(19, 2, 1);
			AUDIO::_0x0D7FD6A55FD63AEF(14, 2, 1);
			AUDIO::_0x0D7FD6A55FD63AEF(15, 2, 1);
			AUDIO::_0x0D7FD6A55FD63AEF(16, 2, 1);
			AUDIO::_0x0D7FD6A55FD63AEF(17, 2, 1);
			AUDIO::_0x0D7FD6A55FD63AEF(18, 2, 1);
		}
		else
		{
			AUDIO::_0x660A8F876DF1D4F8(1);
			AUDIO::_0x660A8F876DF1D4F8(3);
			AUDIO::_0x660A8F876DF1D4F8(5);
			AUDIO::_0x660A8F876DF1D4F8(31);
			AUDIO::_0x660A8F876DF1D4F8(33);
			AUDIO::_0x660A8F876DF1D4F8(12);
			AUDIO::_0x660A8F876DF1D4F8(21);
			AUDIO::_0x660A8F876DF1D4F8(19);
			AUDIO::_0x660A8F876DF1D4F8(14);
			AUDIO::_0x660A8F876DF1D4F8(15);
			AUDIO::_0x660A8F876DF1D4F8(16);
			AUDIO::_0x660A8F876DF1D4F8(17);
			AUDIO::_0x660A8F876DF1D4F8(18);
		}
	}
}

void func_414(var uParam0)
{
	int iVar0;
	int iVar1;
	func_953(&iLocal_513, &iLocal_14, &uLocal_543);
	func_954(&iLocal_262, &iLocal_263, &iLocal_513);
	if (iLocal_63 > 0 && iLocal_63 < 11)
	{
		__LIB_2__::func_966(Global_35, iLocal_262, 0, 1, 1, 1, 0, 1, 0, 1, 1);
	}
	switch (iLocal_63)
	{
		case 0:
			func_352(uParam0, 16384, &iLocal_401, &(vLocal_664[4 /*3*/]));
			func_956(iLocal_262, Global_35, &uLocal_598, func_720(33), 0, 0, 0, 15f, 15f, 1073069561, 1f, 15f, -1, 1, 0, 0, 0, 1);
			__LIB_3__::func_898(Global_35, iLocal_262, &uLocal_598, -1082130432 /* Float: -1f */, 0, 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1, 8, 0, 0, 1069547520 /* Float: 1.5f */, 1073741824 /* Float: 2f */, 1050253722 /* Float: 0.3f */, 1067030938 /* Float: 1.2f */, 0, 0, -1, 1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1);
			if (__LIB_8__::func_372(8388608))
			{
				func_958();
				func_489(&iLocal_14, 1);
				func_959(iLocal_265, func_720(32), func_759(32), 2, 1073741824 /* Float: 2f */);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_720(33), 1f, -1, 0.25f, 0, 40000f);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
				__LIB_1__::func_474(iLocal_262, &iVar0, 0, 0, 1, 1);
				__LIB_13__::func_866(2);
			}
			else
			{
				__LIB_13__::func_866(1);
			}
			break;
		case 1:
			if (__LIB_8__::func_372(2097152))
			{
				func_959(iLocal_265, func_720(32), func_759(32), 2, 1073741824 /* Float: 2f */);
				__LIB_13__::func_866(3);
			}
			break;
		case 2:
			__LIB_3__::func_732(0);
			__LIB_13__::func_879(&uLocal_278, "RH0_MCS2_LO1", iLocal_262, Global_35, 0, 0, 1, 1);
			__LIB_13__::func_866(3);
			break;
		case 3:
			if (!__LIB_0__::func_899(&(vLocal_664[28 /*3*/])))
			{
				__LIB_2__::func_259(&(vLocal_664[28 /*3*/]));
			}
			if (!__LIB_1__::func_322("RH0_MCS2_LO1") || __LIB_9__::func_913(&(vLocal_664[28 /*3*/]), 3f))
			{
				iLocal_578 = __LIB_2__::func_340(0, 0, 0);
				__LIB_1__::func_561(&(vLocal_664[28 /*3*/]));
				func_961(&uLocal_543);
				__LIB_3__::func_590(&(Local_521[0 /*21*/]), 0);
				__LIB_13__::func_866(4);
			}
			break;
		case 4:
			func_963(&iLocal_262, &(Local_521[0 /*21*/]), &uLocal_543, &uLocal_278, &iLocal_578);
			if (__LIB_8__::func_406(33554432))
			{
				__LIB_2__::func_259(&(vLocal_664[28 /*3*/]));
				__LIB_13__::func_866(5);
			}
			else if (__LIB_8__::func_406(67108864))
			{
				__LIB_2__::func_259(&(vLocal_664[28 /*3*/]));
				__LIB_13__::func_866(7);
			}
			break;
		case 5:
			if (!__LIB_1__::func_322("RH0_MCS2_LO2") || __LIB_9__::func_913(&(vLocal_664[28 /*3*/]), 3f))
			{
				__LIB_0__::func_745(5);
				__LIB_1__::func_480(&iLocal_262);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_262))
				{
					__LIB_1__::func_726(iLocal_262, 1);
				}
				if (!ENTITY::IS_ENTITY_DEAD(Global_35))
				{
					__LIB_1__::func_727(Global_35, 1);
				}
				__LIB_12__::func_937(uParam0, 19);
				__LIB_13__::func_866(11);
			}
			break;
		case 7:
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			__LIB_0__::func_745(5);
			__LIB_1__::func_480(&iLocal_262);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
			func_959(Global_35, 1403.604f, 264.0388f, 89.5688f, 105.51f, 2, 1073741824 /* Float: 2f */);
			func_959(iLocal_262, 1393.313f, 262.1028f, 88.45802f, 105.51f, 2, 1073741824 /* Float: 2f */);
			TASK::TASK_MOUNT_ANIMAL(iLocal_262, iLocal_263, 20000, -1, 1f, 16, 0, 0);
			iLocal_276 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), true);
			CAM::SET_CAM_PARAMS(iLocal_276, 1402.391f, 263.4821f, 90.116f, 0.7477f, 0f, -58.9108f, 26.9703f, 0, 1, 1, 2, 1, 0);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			__LIB_13__::func_866(8);
			break;
		case 8:
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			if ((!__LIB_1__::func_322("RH0_RTCMP_NEG") || AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("RH0_RTCMP_NEG") == 1) || __LIB_9__::func_913(&(vLocal_664[28 /*3*/]), 6f))
			{
				CAM::SET_CAM_PARAMS(iLocal_276, 1402.511f, 261.7501f, 89.758f, 1.8758f, 0f, 79.5862f, 37.8128f, 0, 1, 1, 2, 1, 0);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_262))
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar1);
					if (!PED::IS_PED_ON_MOUNT(iLocal_262))
					{
						TASK::TASK_MOUNT_ANIMAL(0, iLocal_263, 20000, -1, 1f, 16, 0, 0);
					}
					TASK::TASK_ACHIEVE_HEADING(0, -162.98f, 0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1407.25f, 240.2198f, 88.74229f, 1.5f, -1, 5f, 8193, 40000f);
					TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
					__LIB_1__::func_474(iLocal_262, &iVar1, 0, 0, 1, 1);
				}
				__LIB_2__::func_259(&(vLocal_664[21 /*3*/]));
				__LIB_13__::func_866(9);
			}
			break;
		case 9:
			CAM::_0xE296208C273BD7F0(0, -1, 0, 17, 1, 0);
			if (!__LIB_1__::func_322("RH0_RTCMP_NEG") || __LIB_9__::func_913(&(vLocal_664[21 /*3*/]), 15f))
			{
				__LIB_0__::func_489(0, 0);
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				CAM::DESTROY_CAM(iLocal_276, false);
				__LIB_2__::func_259(&(vLocal_664[21 /*3*/]));
				__LIB_13__::func_866(10);
			}
			break;
		case 10:
			CAM::_0xE296208C273BD7F0(0, -1, 0, 17, 1, 0);
			if ((!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_262) && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_263)) || __LIB_9__::func_913(&(vLocal_664[21 /*3*/]), 15f))
			{
				__LIB_1__::func_561(&(vLocal_664[21 /*3*/]));
				func_363(iLocal_262, iLocal_263, 1, -1f, 1, 1);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_262))
				{
					__LIB_1__::func_726(iLocal_262, 1);
				}
				if (!ENTITY::IS_ENTITY_DEAD(Global_35))
				{
					__LIB_1__::func_727(Global_35, 1);
				}
				__LIB_12__::func_937(uParam0, 29);
				__LIB_13__::func_866(11);
			}
			break;
		case 11:
			break;
	}
}

bool func_415()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	if (iLocal_59 > 2 && iLocal_59 < 7)
	{
		CAM::_0x702B75DC9D3EDE56(true);
	}
	switch (iLocal_59)
	{
		case 0:
			__LIB_0__::func_769();
			func_966();
			func_967();
			TASK::REQUEST_WAYPOINT_RECORDING(func_968());
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
			__LIB_2__::func_259(&(vLocal_664[18 /*3*/]));
			__LIB_13__::func_867(1);
			break;
		case 1:
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
			if (__LIB_3__::func_514(&(vLocal_664[18 /*3*/]), 1f))
			{
				__LIB_1__::func_561(&(vLocal_664[18 /*3*/]));
				__LIB_13__::func_867(2);
			}
			break;
		case 2:
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
			if (!__LIB_8__::func_372(268435456))
			{
				if (CAM::_0xDD0B7C5AE58F721D(&Local_784))
				{
					CAM::_0xB8B207C34285E978(&Local_784);
					func_355(268435456);
					__LIB_2__::func_259(&(vLocal_664[25 /*3*/]));
				}
				else
				{
					return false;
				}
			}
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			if (__LIB_9__::func_178(&(vLocal_664[25 /*3*/])) > 2f)
			{
				if (func_970())
				{
					__LIB_1__::func_561(&(vLocal_664[25 /*3*/]));
					CAM::_0x0A5A4F1979ABB40E(&Local_784);
					CAM::_0x798BE43C9393632B(&Local_784);
					__LIB_4__::func_509(1);
					sLocal_518 = "script@Cinematics@TripSkip@Horseshoe_Overlook";
					STREAMING::PREFETCH_SRL("script@tripskip@rhmr0_srl");
					STREAMING::_0xAE00387E53B1E9FC();
					STREAMING::_0x513F8AA5BF2F17CF(func_720(34), 20f, 0);
					func_507(&(iLocal_22[13]), &(iLocal_22[14]), &(iLocal_22[15]), &uLocal_273, 1);
					CAM::_0x1B3C2D961F5FC0E1(sLocal_518);
					__LIB_13__::func_867(3);
				}
			}
			break;
		case 3:
			CAM::_0xE296208C273BD7F0(0, -1, 0, 17, 1, 0);
			if (!CAM::_0xDD0B7C5AE58F721D(sLocal_518))
			{
				return false;
			}
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_514, false))
			{
			}
			if (!STREAMING::IS_SRL_LOADED())
			{
				return false;
			}
			if (!STREAMING::_0x0909F71B5C070797())
			{
				return false;
			}
			if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(func_968()))
			{
			}
			if (CAM::_0xDD0B7C5AE58F721D(sLocal_518) && ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iLocal_514, false))
			{
				STREAMING::_0x5A8B01199C3E79C3();
				__LIB_3__::func_319(iLocal_514);
				__LIB_1__::func_571(Global_35, iLocal_264, 0, -1, 1);
				__LIB_1__::func_571(iLocal_262, iLocal_263, 0, -1, 1);
				AUDIO::_0x5E3CCF03995388B5(640372175, func_720(39));
				CAM::_0xBC016635D6A73B31(sLocal_518, "2_EmeraldRanch_1", 5);
				__LIB_13__::func_867(4);
			}
			break;
		case 4:
			CAM::_0xE296208C273BD7F0(0, -1, 0, 17, 1, 0);
			func_959(iLocal_264, func_720(34), func_759(34), 2, 1073741824 /* Float: 2f */);
			func_959(iLocal_263, func_720(36), func_759(36), 2, 1073741824 /* Float: 2f */);
			func_971(-1090519040 /* Float: -0.5f */, 1069547520 /* Float: 1.5f */);
			func_371(&iLocal_264, 87, 1);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
			__LIB_2__::func_259(&(vLocal_664[18 /*3*/]));
			__LIB_13__::func_867(5);
			break;
		case 5:
			CAM::_0xE296208C273BD7F0(0, -1, 0, 17, 1, 0);
			if (!__LIB_8__::func_372(536870912))
			{
				if (__LIB_1__::func_583(&(vLocal_664[18 /*3*/])) > 7f)
				{
					CAM::DO_SCREEN_FADE_OUT(2000);
					func_355(536870912);
				}
			}
			iLocal_782 = CAM::_0xEA113BF9B0C0C5D7(sLocal_518, "2_EmeraldRanch_1", 5);
			iLocal_783 = (iLocal_782 - __LIB_10__::func_919(&(vLocal_664[18 /*3*/])));
			iVar0 = CAM::_0x465F04F68AD38197(sLocal_518, "2_EmeraldRanch_1", 5);
			if (AUDIO::_0xFFE9C53DEEA3DB0B(iLocal_783, 1339531659, func_720(40), STREAMING::IS_SRL_LOADED(), (iVar0 - __LIB_10__::func_919(&(vLocal_664[18 /*3*/])))))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_262, false, true);
				func_959(iLocal_264, func_720(35), func_759(35), 2, 1073741824 /* Float: 2f */);
				func_959(iLocal_263, func_720(37), func_759(37), 2, 1073741824 /* Float: 2f */);
				func_507(&(iLocal_22[13]), &(iLocal_22[14]), &(iLocal_22[15]), &uLocal_273, 0);
				STREAMING::_0x513F8AA5BF2F17CF(func_720(35), 50f, 0);
				STREAMING::END_SRL();
				STREAMING::PREFETCH_SRL("script@tripskip@horseshoe_overlook_srl");
				STREAMING::_0xAE00387E53B1E9FC();
				__LIB_13__::func_867(6);
			}
			break;
		case 6:
			CAM::_0xE296208C273BD7F0(0, -1, 0, 17, 1, 0);
			if (!STREAMING::IS_SRL_LOADED())
			{
				return false;
			}
			if (!STREAMING::_0x0909F71B5C070797())
			{
				return false;
			}
			__LIB_2__::func_259(&(vLocal_664[18 /*3*/]));
			CAM::_0xA54D643D0773EB65(sLocal_518, "2_EmeraldRanch_1", 5);
			CAM::_0xBC016635D6A73B31(sLocal_518, "1_TripSkip_Horseshoe_1", 5);
			STREAMING::_0x5A8B01199C3E79C3();
			STREAMING::END_SRL();
			func_971(-1090519040 /* Float: -0.5f */, 0.25f);
			CAM::DO_SCREEN_FADE_IN(2000);
			if (CAM::_0xDD0B7C5AE58F721D(&Local_800))
			{
				CAM::_0xB8B207C34285E978(&Local_800);
			}
			__LIB_13__::func_867(7);
			break;
		case 7:
			CAM::_0xE296208C273BD7F0(0, -1, 0, 17, 1, 0);
			bVar1 = STREAMING::IS_SRL_LOADED();
			iLocal_782 = CAM::_0xEA113BF9B0C0C5D7(sLocal_518, "1_TripSkip_Horseshoe_1", 5);
			iLocal_783 = (iLocal_782 - __LIB_10__::func_919(&(vLocal_664[18 /*3*/])));
			iVar0 = (CAM::_0x465F04F68AD38197(sLocal_518, "1_TripSkip_Horseshoe_1", 5) - __LIB_10__::func_919(&(vLocal_664[18 /*3*/])));
			if (AUDIO::_0xFFE9C53DEEA3DB0B(iLocal_783, 0, func_720(40), bVar1, iVar0))
			{
				CAM::SET_CINEMATIC_MODE_ACTIVE(false);
				CAM::_0xA54D643D0773EB65(sLocal_518, "1_TripSkip_Horseshoe_1", 5);
				STREAMING::END_SRL();
				AUDIO::_0x43037ABFE214A851();
				__LIB_4__::func_509(0);
				HUD::DISPLAY_HUD(true);
				MAP::DISPLAY_RADAR(true);
				TASK::CLEAR_PED_TASKS(Global_35, true, false);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				func_371(&iLocal_264, 87, 0);
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1.25f, 5000, 94.79f, false, false);
				if (__LIB_0__::func_272(iLocal_262, 0))
				{
					iVar2 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(-114.5712f, -17.50169f, 94.92042f, joaat("PROP_HITCHINGPOST"), 2f, 1, false);
					if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar2))
					{
						TASK::TASK_HITCH_ANIMAL(iLocal_262, iVar2, 0);
						PED::SET_PED_KEEP_TASK(iLocal_262, true);
					}
				}
				__LIB_1__::func_561(&(vLocal_664[18 /*3*/]));
				__LIB_13__::func_867(8);
			}
			break;
		case 8:
			CAM::_0xE296208C273BD7F0(0, -1, 0, 17, 1, 0);
			CAM::_0x2412216FCC7B4E3E(sLocal_518);
			CAM::_0x0A5A4F1979ABB40E(&Local_800);
			CAM::_0x798BE43C9393632B(&Local_800);
			__LIB_2__::func_259(&(vLocal_664[21 /*3*/]));
			__LIB_13__::func_867(9);
			break;
		case 9:
			return true;
	}
	return false;
}

bool func_437()
{
	if (__LIB_5__::func_297(Global_1347702[94 /*49*/].f_15) == 1)
	{
		return true;
	}
	return false;
}

void func_452(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
						func_1012(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1012(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1012(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1012(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1012(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1012(joaat("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1012(joaat("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1012(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1012(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1012(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_1012(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_1012(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_1012(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_1012(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_1012(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_1012(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_1012(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_1012(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_1012(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_1012(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_1012(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_1012(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1012(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1012(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1012(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1014();
						func_1015(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
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
						func_1012(joaat("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
							func_452(Global_1347702[21 /*49*/].f_15, 0, 0, 0, 0);
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
							func_452(Global_1347702[82 /*49*/].f_15, 0, 0, 0, 0);
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
							func_452(Global_1347702[83 /*49*/].f_15, 0, 0, 0, 0);
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
						func_1012(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1012(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
		func_1049();
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
							func_1012(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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

bool func_481()
{
	int iVar0;
	int iVar1;
	if (__LIB_8__::func_406(4))
	{
		return true;
	}
	if (__LIB_8__::func_406(2))
	{
		iVar0 = func_1087(iLocal_262, &(vLocal_664[12 /*3*/]), joaat("PROP_HUMAN_SEAT_BENCH"), 0);
		if (__LIB_3__::func_514(&(vLocal_664[35 /*3*/]), 0.5f))
		{
			iVar1 = func_1087(iLocal_265, &(vLocal_664[13 /*3*/]), joaat("PROP_HUMAN_SEAT_CHAIR_SMOKING"), "PROP_HUMAN_SEAT_CHAIR_SMOKING_MALE_D");
		}
		else if (!__LIB_0__::func_899(&(vLocal_664[35 /*3*/])))
		{
			__LIB_2__::func_259(&(vLocal_664[35 /*3*/]));
		}
		if (iVar0 && iVar1)
		{
			__LIB_3__::func_319(iLocal_509);
			func_363(iLocal_262, iLocal_263, 1, 1f, 1, 0);
			if (!PED::IS_PED_DEAD_OR_DYING(iLocal_265, true))
			{
				TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_265, Global_35, 2, 384, -1082130432 /* Float: -1f */, -1, 0);
			}
			func_497(&iLocal_265);
			__LIB_13__::func_852(4);
			return true;
		}
		else
		{
			return false;
		}
	}
	if (__LIB_1__::func_394(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		__LIB_13__::func_852(2);
	}
	if (__LIB_1__::func_22(5) && ENTITY::DOES_ENTITY_EXIST(iLocal_262))
	{
		if (!__LIB_0__::func_272(iLocal_262, 1))
		{
			LAW::_0xEDFC6C1FD1C964F5(PLAYER::PLAYER_ID(), joaat("CRIME_MURDER"), 0, 0, 0, 0, 0, 0, 0);
			__LIB_13__::func_852(2);
		}
		else if ((PED::IS_PED_FLEEING(iLocal_262) || PED::IS_PED_IN_COMBAT(iLocal_262, 0)) || __LIB_10__::func_608(iLocal_262, 0, &uLocal_479, &uLocal_507, 0, 0))
		{
			LAW::_0xEDFC6C1FD1C964F5(PLAYER::PLAYER_ID(), joaat("CRIME_ASSAULT"), 0, 0, 0, 0, 0, 0, 0);
			__LIB_13__::func_852(2);
		}
	}
	if (__LIB_0__::func_212(5) && ENTITY::DOES_ENTITY_EXIST(iLocal_263))
	{
		if (!__LIB_0__::func_272(iLocal_263, 1) || __LIB_3__::func_528(iLocal_263, Global_35))
		{
			LAW::_0xEDFC6C1FD1C964F5(PLAYER::PLAYER_ID(), joaat("CRIME_MURDER_HORSE"), 0, 0, 0, 0, 0, 0, 0);
			__LIB_13__::func_852(2);
		}
	}
	if (__LIB_8__::func_406(4096) && ENTITY::DOES_ENTITY_EXIST(iLocal_265))
	{
		if (!__LIB_0__::func_272(iLocal_265, 1))
		{
			LAW::_0xEDFC6C1FD1C964F5(PLAYER::PLAYER_ID(), joaat("CRIME_MURDER"), 0, 0, 0, 0, 0, 0, 0);
			__LIB_13__::func_852(2);
		}
		else if ((PED::IS_PED_FLEEING(iLocal_265) || PED::IS_PED_IN_COMBAT(iLocal_265, 0)) || __LIB_10__::func_608(iLocal_265, 0, &uLocal_449, &uLocal_507, 0, 0))
		{
			LAW::_0xEDFC6C1FD1C964F5(PLAYER::PLAYER_ID(), joaat("CRIME_ASSAULT"), 0, 0, 0, 0, 0, 0, 0);
			__LIB_13__::func_852(2);
		}
	}
	return false;
}

void func_482()
{
	func_408(&iLocal_262, &iLocal_14, 1);
	PLAYER::_0x12E09E278C6C29B7(PLAYER::PLAYER_ID());
	func_1088();
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	PED::_0x411189E51B8020BA(Global_35, "Cautious");
	PED::_0x411189E51B8020BA(Global_35, "Stealth");
	PED::SET_PED_CONFIG_FLAG(Global_35, 300, false);
	func_371(&iLocal_264, 136, 0);
	__LIB_1__::func_721(7);
	func_371(&iLocal_264, 365, 0);
	PED::SET_PED_CONFIG_FLAG(iLocal_262, 448, false);
	__LIB_5__::func_438(&uLocal_636);
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_262))
	{
		__LIB_1__::func_726(iLocal_262, 1);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		__LIB_1__::func_727(Global_35, 1);
	}
	__LIB_10__::func_515(&uLocal_579);
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("MissionChoice"))
	{
		GRAPHICS::_0xC5CB91D65852ED7E("MissionChoice");
	}
	if (CAM::DOES_CAM_EXIST(iLocal_276))
	{
		__LIB_0__::func_489(0, 0);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::DESTROY_CAM(iLocal_276, false);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_518))
	{
		CAM::_0xA54D643D0773EB65(sLocal_518, "2_EmeraldRanch_1", 5);
	}
	STREAMING::END_SRL();
	AUDIO::_0x43037ABFE214A851();
	CLOCK::PAUSE_CLOCK(false, 0);
}

void func_483(int iParam0, int iParam1, int iParam2)
{
	if (!__LIB_4__::func_56(iParam0))
	{
		return;
	}
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	__LIB_13__::func_881(iParam0, 0);
	Global_40.f_9422[iParam0 /*7*/].f_2++;
	__LIB_10__::func_246(iParam0, __LIB_0__::func_23(), 0, iParam1, iParam2);
	func_452(Global_1392240.f_1[iParam0 /*18*/].f_13, 1, 1, 0, 1);
	__LIB_1__::func_242(Global_1392240.f_1[iParam0 /*18*/].f_13, 0);
}

void func_485(int iParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (bParam1)
		{
			if (!func_920(134217728))
			{
				PED::_0x1E017404784AA6A3(iParam0, joaat("RHMR0_RIDE1"));
				AUDIO::_0x0D7FD6A55FD63AEF(25, 3, 1);
				AUDIO::_0x0D7FD6A55FD63AEF(21, 3, 1);
				AUDIO::_0x0D7FD6A55FD63AEF(19, 3, 1);
				AUDIO::_0x0D7FD6A55FD63AEF(6, 3, 1);
				func_718(134217728);
			}
		}
		else if (func_920(134217728))
		{
			AUDIO::_0x660A8F876DF1D4F8(25);
			AUDIO::_0x660A8F876DF1D4F8(21);
			AUDIO::_0x660A8F876DF1D4F8(19);
			AUDIO::_0x660A8F876DF1D4F8(6);
			PED::_0x2B4CE170DE09F346(iParam0, joaat("RHMR0_RIDE1"));
			func_1093(134217728);
		}
	}
}

void func_489(int* iParam0, bool bParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		return;
	}
	if (bParam1)
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(*iParam0, 10);
	}
	VEHICLE::_0xDC0556D0F484ECAA(*iParam0);
	__LIB_10__::func_284(iParam0);
}

void func_494(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		if (PED::IS_PED_IN_GROUP(*iParam0))
		{
			PED::REMOVE_PED_FROM_GROUP(*iParam0);
		}
	}
}

void func_495(int iParam0, int iParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		return;
	}
	PED::_0x2EB75FB86C41F026(*iParam0, 3, 0);
}

void func_496(int iParam0, int iParam1, int iParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		TASK::_0x216343750545A486(*iParam0, iParam1, iParam2);
	}
}

void func_497(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		__LIB_3__::func_286(*iParam0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
		PED::SET_PED_CONFIG_FLAG(*iParam0, 448, false);
	}
	if (__LIB_2__::func_763(598, 1))
	{
		__LIB_2__::func_753(598, 0, 1, 0, 0);
	}
	__LIB_13__::func_861(4096);
}

void func_500()
{
	__LIB_9__::func_770(1, 1);
	__LIB_9__::func_770(1, 1024);
	__LIB_9__::func_770(1, 64);
	__LIB_9__::func_770(1, 128);
	__LIB_9__::func_770(1, 4096);
	__LIB_9__::func_770(1, 8192);
	__LIB_9__::func_770(1, 4);
	__LIB_9__::func_770(1, 8);
	__LIB_9__::func_770(1, 16);
	__LIB_9__::func_770(1, 32);
	__LIB_13__::func_857();
	__LIB_13__::func_856();
	__LIB_9__::func_770(1, 524288);
	__LIB_9__::func_770(1, 1048576);
	__LIB_9__::func_770(1, 2097152);
	__LIB_9__::func_770(1, 4194304);
	__LIB_9__::func_770(1, 256);
	__LIB_9__::func_771(1, 1048576);
}

void func_501()
{
	__LIB_9__::func_770(1, 8388608);
	__LIB_9__::func_770(1, 16777216);
	__LIB_9__::func_770(1, 33554432);
	__LIB_9__::func_770(1, 67108864);
	__LIB_9__::func_770(1, 134217728);
	__LIB_9__::func_770(1, 268435456);
	__LIB_9__::func_770(1, 536870912);
	__LIB_9__::func_770(1, 1073741824 /* Float: 2f */);
}

void func_502()
{
	__LIB_14__::func_290(1);
	__LIB_14__::func_290(2);
	__LIB_14__::func_290(4);
	__LIB_14__::func_290(8);
	__LIB_14__::func_290(16);
	__LIB_14__::func_290(32);
	__LIB_14__::func_290(64);
	__LIB_14__::func_290(128);
	__LIB_14__::func_290(256);
	__LIB_14__::func_290(512);
	__LIB_14__::func_290(1024);
	iLocal_18 = 0;
}

void func_507(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(*uParam0))
	{
		__LIB_3__::func_683(uParam0, func_191(13), func_192(13), func_193(13), "RHMR0_CME_ROAD_RESTRICTION_1");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(*uParam1))
	{
		__LIB_3__::func_683(uParam0, func_191(14), func_192(13), func_193(14), "RHMR0_CME_ROAD_RESTRICTION_2");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(*uParam2))
	{
		__LIB_3__::func_573(uParam2, func_191(15), func_192(15), func_193(15), "RHMRB_VOL_CME_ROAD_CLEAR");
		if (bParam4)
		{
			__LIB_7__::func_948(*uParam2, 0, 0, 1, 1, 0);
			__LIB_3__::func_378(*uParam2, 0);
			POPULATION::_0x18262CAFEBB5FBE1(*uParam2, 0, 786432, 0, -1, -1, 0);
			POPULATION::_0xB56D41A694E42E86(*uParam2, 0, 786432, 0, -1, -1, 2);
			*uParam3 = PED::_0x4C39C95AE5DB1329(*uParam2, 0, 15);
		}
	}
	if (VOLUME::_DOES_VOLUME_EXIST(*uParam0))
	{
		if (bParam4)
		{
			PATHFIND::_0xB03944057FD735BA(*uParam0, 4, 0);
		}
		else
		{
			PATHFIND::_0x5A4E1A41E3A02AD0(*uParam0, 4, 0);
		}
	}
	if (VOLUME::_DOES_VOLUME_EXIST(*uParam1))
	{
		if (bParam4)
		{
			PATHFIND::_0xB03944057FD735BA(*uParam1, 4, 0);
		}
		else
		{
			PATHFIND::_0x5A4E1A41E3A02AD0(*uParam1, 4, 0);
		}
	}
}

void func_508()
{
	int iVar0;
	__LIB_3__::func_525(&(iLocal_22[4]), &uLocal_271);
	__LIB_3__::func_525(&(iLocal_22[5]), &uLocal_272);
	__LIB_3__::func_525(&(iLocal_22[15]), &uLocal_273);
	iVar0 = 0;
	while (iVar0 < 22)
	{
		__LIB_0__::func_172(iLocal_22[iVar0]);
		iVar0++;
	}
}

int func_572(int iParam0, int iParam1)
{
	var uVar0;
	return func_1178(&uVar0, iParam0, iParam1);
}

bool func_603(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (!__LIB_0__::func_272(*uParam0, 1))
	{
		return false;
	}
	if (PED::IS_PED_FLEEING(*uParam0))
	{
		return false;
	}
	else if (PED::IS_PED_IN_COMBAT(*uParam0, 0))
	{
		return false;
	}
	else if (__LIB_10__::func_608(*uParam0, 0, uParam1, iParam2, iParam3, 0))
	{
		if (iParam4 == 1)
		{
			if (iParam5 == 1)
			{
				__LIB_13__::func_0(uParam0, &Global_35, 0, 0, 1, 1, 0, 1, 1);
			}
			else
			{
				__LIB_13__::func_25(uParam0, &Global_35, 1176256512 /* Float: 10000f */, -1, 0, 1077936128 /* Float: 3f */, 1, 1, 0, 1, 0, 0);
			}
		}
		return false;
	}
	return true;
}

bool func_627(var uParam0)
{
	if (uParam0->f_170 == 1)
	{
		return true;
	}
	return false;
}

void func_657()
{
	__LIB_2__::func_68(&(Local_64[0 /*4*/]), 1394.491f, 244.2493f, 89.24058f, 107.18f);
	__LIB_2__::func_68(&(Local_64.f_45[0 /*4*/]), func_720(31), func_759(31));
	__LIB_2__::func_68(&(Local_64.f_90[0 /*4*/]), 1398.657f, 243.3556f, 88.98512f, 107.18f);
	__LIB_2__::func_68(&(Local_64.f_135[0 /*4*/]), func_720(30), func_759(30));
	__LIB_2__::func_68(&(Local_64[1 /*4*/]), 1394.491f, 244.2493f, 89.24058f, 107.18f);
	__LIB_2__::func_68(&(Local_64.f_45[1 /*4*/]), 1395.826f, 261.0572f, 88.45971f, 17.79f);
	__LIB_2__::func_68(&(Local_64.f_90[1 /*4*/]), 1398.657f, 243.3556f, 88.98512f, 107.18f);
	__LIB_2__::func_68(&(Local_64.f_135[1 /*4*/]), 1397.712f, 261.5978f, 88.45088f, 1.53f);
	__LIB_2__::func_68(&(Local_64[2 /*4*/]), 868.8522f, 789.0927f, 113.4073f, 19.96f);
	__LIB_2__::func_68(&(Local_64.f_45[2 /*4*/]), 868.9848f, 786.3836f, 112.7538f, 19.96f);
	__LIB_2__::func_68(&(Local_64.f_90[2 /*4*/]), 872.2449f, 793.9316f, 113.5468f, 19.96f);
	__LIB_2__::func_68(&(Local_64.f_135[2 /*4*/]), 871.197f, 793.9545f, 113.5856f, 19.96f);
	__LIB_2__::func_68(&(Local_64[3 /*4*/]), 836.588f, 828.4669f, 115.4712f, 63.24f);
	__LIB_2__::func_68(&(Local_64.f_45[3 /*4*/]), 849.4523f, 803.0166f, 114.2402f, 40f);
	__LIB_2__::func_68(&(Local_64.f_90[3 /*4*/]), 837.2245f, 829.6895f, 115.4641f, 74.47f);
	__LIB_2__::func_68(&(Local_64.f_135[3 /*4*/]), 850.2994f, 800.0732f, 114.1822f, 40f);
	__LIB_2__::func_68(&(Local_64[4 /*4*/]), 836.588f, 828.4669f, 115.4712f, 63.24f);
	__LIB_2__::func_68(&(Local_64.f_45[4 /*4*/]), 849.4523f, 803.0166f, 114.2402f, 40f);
	__LIB_2__::func_68(&(Local_64.f_90[4 /*4*/]), 837.2245f, 829.6895f, 115.4641f, 74.47f);
	__LIB_2__::func_68(&(Local_64.f_135[4 /*4*/]), 850.2994f, 800.0732f, 114.1822f, 40f);
	__LIB_2__::func_68(&(Local_64[5 /*4*/]), 837.6008f, 829.0107f, 114.4558f, 71.06f);
	__LIB_2__::func_68(&(Local_64.f_45[5 /*4*/]), 849.4523f, 803.0166f, 114.2402f, 40f);
	__LIB_2__::func_68(&(Local_64.f_90[5 /*4*/]), 831.0925f, 832.0359f, 114.9516f, 71.06f);
	__LIB_2__::func_68(&(Local_64.f_135[5 /*4*/]), 850.2994f, 800.0732f, 114.1822f, 40f);
	__LIB_2__::func_68(&(Local_64[6 /*4*/]), 837.6008f, 829.0107f, 114.4558f, 71.06f);
	__LIB_2__::func_68(&(Local_64.f_45[6 /*4*/]), 849.4523f, 803.0166f, 114.2402f, 40f);
	__LIB_2__::func_68(&(Local_64.f_90[6 /*4*/]), 831.0925f, 832.0359f, 114.9516f, 71.06f);
	__LIB_2__::func_68(&(Local_64.f_135[6 /*4*/]), 850.2994f, 800.0732f, 114.1822f, 40f);
	__LIB_2__::func_68(&(Local_64[7 /*4*/]), 790.8256f, 850.9583f, 117.1199f, -105.07f);
	__LIB_2__::func_68(&(Local_64.f_45[7 /*4*/]), 849.4523f, 803.0166f, 114.2402f, -105.07f);
	__LIB_2__::func_68(&(Local_64.f_90[7 /*4*/]), 791.4101f, 847.5941f, 116.981f, -105.07f);
	__LIB_2__::func_68(&(Local_64.f_135[7 /*4*/]), 850.2994f, 800.0732f, 114.1822f, -105.07f);
	__LIB_2__::func_68(&(Local_64[8 /*4*/]), 1372.086f, 228.6089f, 89.92631f, -29.67f);
	__LIB_2__::func_68(&(Local_64.f_45[8 /*4*/]), 1380.163f, 251.164f, 88.82798f, -29.67f);
	__LIB_2__::func_68(&(Local_64.f_90[8 /*4*/]), 1384.398f, 242.6274f, 89.98199f, -29.67f);
	__LIB_2__::func_68(&(Local_64.f_135[8 /*4*/]), 1377.791f, 244.1345f, 89.61133f, -29.67f);
	__LIB_2__::func_68(&(Local_64[9 /*4*/]), 1390.455f, 241.1684f, 89.95309f, -29.67f);
	__LIB_2__::func_68(&(Local_64.f_45[9 /*4*/]), 1380.163f, 251.164f, 88.82798f, -29.67f);
	__LIB_2__::func_68(&(Local_64.f_90[9 /*4*/]), 1384.398f, 242.6274f, 89.98199f, -29.67f);
	__LIB_2__::func_68(&(Local_64.f_135[9 /*4*/]), 1377.791f, 244.1345f, 89.61133f, -29.67f);
	__LIB_2__::func_68(&(Local_64[10 /*4*/]), 1403.97f, 262.4513f, 88.63023f, 105.62f);
	__LIB_2__::func_68(&(Local_64.f_45[10 /*4*/]), func_720(31), func_759(31));
	__LIB_2__::func_68(&(Local_64.f_90[10 /*4*/]), 1384.398f, 242.6274f, 89.98199f, -29.67f);
	__LIB_2__::func_68(&(Local_64.f_135[10 /*4*/]), 1377.791f, 244.1345f, 89.61133f, -29.67f);
}

void func_658(var uParam0, int iParam1)
{
	*iParam1 = func_1258(5, 1, 1, Global_1347702[uParam0->f_174 /*49*/].f_24, Global_1347702[uParam0->f_174 /*49*/].f_24.f_1, Global_1347702[uParam0->f_174 /*49*/].f_24.f_2, 146.03f, 1, 1, 0, 0, 0, 0, -268604689, 1, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
	if (__LIB_0__::func_272(*iParam1, 0))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(*iParam1, false, true);
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(*iParam1, Global_1347702[uParam0->f_174 /*49*/].f_24, 146.03f, true, false, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(*iParam1, false);
		WEAPON::REMOVE_ALL_PED_WEAPONS(*iParam1, true, true);
		__LIB_4__::func_7(*iParam1, joaat("WEAPON_REVOLVER_CATTLEMAN_HOSEA"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
		__LIB_4__::func_7(*iParam1, joaat("WEAPON_REVOLVER_CATTLEMAN_HOSEA_DUALWIELD"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
		__LIB_4__::func_7(*iParam1, joaat("WEAPON_SHOTGUN_SEMIAUTO_HOSEA"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
		__LIB_4__::func_7(*iParam1, joaat("WEAPON_MELEE_KNIFE_HOSEA"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
		WEAPON::SET_CURRENT_PED_WEAPON(*iParam1, joaat("WEAPON_UNARMED"), true, 0, false, false);
	}
}

bool func_660(int iParam0)
{
	int iVar0;
	if (__LIB_8__::func_406(4096))
	{
		return true;
	}
	iVar0 = __LIB_0__::func_120(598);
	if (PERSCHAR::_0x800DF3FC913355F3(iVar0))
	{
		PERSCHAR::_0x6759BEE6762E140B(iVar0);
	}
	if (!__LIB_2__::func_987(598, 1, 0, 0, 0, 0))
	{
		return false;
	}
	else
	{
		*iParam0 = __LIB_2__::func_965(598, 1, 0, 0, 1, 0);
		if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
		{
			__LIB_3__::func_286(*iParam0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, true);
			PED::SET_PED_CONFIG_FLAG(*iParam0, 6, true);
			WEAPON::REMOVE_ALL_PED_WEAPONS(*iParam0, true, true);
			PED::SET_PED_CONFIG_FLAG(*iParam0, 448, true);
			__LIB_13__::func_852(4096);
			return true;
		}
	}
	return false;
}

bool func_661(int iParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!__LIB_1__::func_22(5))
	{
		return false;
	}
	return true;
}

void func_662(int iParam0)
{
	int iVar0;
	if (ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		return;
	}
	iVar0 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(1406.662f, 267.0933f, 89.01187f, joaat("PROP_HUMAN_SEAT_BENCH"), 0.5f, 0, false);
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar0))
	{
		TASK::_TASK_USE_SCENARIO_POINT(*iParam0, iVar0, 0, -1, false, true, 0, false, -1f, false);
	}
	else
	{
		func_959(*iParam0, func_720(29), func_759(29), 2, 1073741824 /* Float: 2f */);
	}
}

bool func_663(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!__LIB_8__::func_372(4))
		{
			func_1262(*iParam0);
		}
		return true;
	}
	*iParam0 = func_1263(5, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	return false;
}

void func_664(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	if (ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		return;
	}
	__LIB_3__::func_286(*iParam0);
	WEAPON::REMOVE_ALL_PED_WEAPONS(*iParam0, true, true);
	PED::SET_PED_CONFIG_FLAG(*iParam0, 6, true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, true);
	PED::SET_PED_CONFIG_FLAG(*iParam0, 448, true);
	__LIB_0__::func_928(uParam1, *iParam0, "EMR_Son1", 1);
	PED::_0xAE6004120C18DF97(*iParam0, 0, iParam3);
	ENTITY::_0x18FF3110CF47115D(*iParam0, 0, 0);
	ENTITY::_0x18FF3110CF47115D(*iParam0, 1, 0);
	ENTITY::_0x18FF3110CF47115D(*iParam0, 2, 0);
	ENTITY::_0x18FF3110CF47115D(*iParam0, 7, 0);
	__LIB_0__::func_142(*iParam0);
	iVar0 = 0;
	while (iVar0 <= 10)
	{
		PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(*iParam0, iVar0, "ALL");
		iVar0++;
	}
	PED::CLEAR_PED_ENV_DIRT(*iParam0);
	PED::_0xA064BBABB064446F(*iParam0);
	PED::_0xA7A806677F8DE138(*iParam0);
	PED::CLEAR_PED_DECORATIONS(*iParam0);
	PED::_0xAF041C10756C30FB(*iParam0, 1, 1, 1);
	func_1265(iParam0, uParam2);
}

void func_665(int iParam0)
{
	int iVar0;
	if (ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		return;
	}
	iVar0 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(1407.949f, 267.3953f, 88.98313f, joaat("PROP_HUMAN_SEAT_BENCH"), 0.5f, 0, false);
	PED::_0xF1C03A5352243A30(*iParam0);
	__LIB_3__::func_286(*iParam0);
	func_959(*iParam0, func_720(20), func_759(20), 2, 1073741824 /* Float: 2f */);
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar0))
	{
		TASK::_TASK_USE_SCENARIO_POINT(*iParam0, iVar0, 0, -1, false, true, 0, false, -1f, false);
	}
}

bool func_666()
{
	if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(func_203()) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED(func_204()))
	{
		return false;
	}
	return true;
}

void func_667()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_266[0]))
	{
		iLocal_266[0] = OBJECT::CREATE_OBJECT(joaat("P_CIGARETTE01X"), 1407.412f, 265.8376f, 88.59435f, true, true, false, false, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_266[1]))
	{
		iLocal_266[1] = OBJECT::CREATE_OBJECT(joaat("P_CIGARETTE01X"), 1407.119f, 265.5198f, 88.61115f, true, true, false, false, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_269))
	{
		iLocal_269 = OBJECT::CREATE_OBJECT(joaat("P_CIGARETTEBOX01X"), 835.8624f, 828.8165f, 114.533f, true, true, false, false, true);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_22[2]))
	{
		func_1266(&(iLocal_22[2]), 2, "rcm_homerob00 - Hitch Blocking");
		__LIB_3__::func_378(iLocal_22[2], 0);
		func_1266(&(iLocal_22[2]), 3, "rcm_homerob00 - Contact Scenario Blocking");
	}
}

void func_670(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = Global_35;
	uParam0->f_8 = 4;
	uParam0->f_19 = 4;
	uParam0->f_21 = 4;
	uParam0->f_17 = iParam1;
	uParam0->f_18 = iParam2;
	uParam0->f_7 = 0;
}

char* func_699(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "RHMR0_INT1";
		case 1:
			return "RHMR0_MCS1";
		case 2:
			return "RHMR0_MCS2";
		default:
			break;
	}
	return "INVALID_CUTSCENE";
}

void func_700(var uParam0)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_509))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_509);
	}
	if (__LIB_13__::func_23(uParam0, func_699(0)))
	{
		if (CAM::IS_SCREEN_FADED_OUT() && !ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_348))
		{
			func_311();
		}
		if (!__LIB_8__::func_372(64))
		{
			func_1292();
			func_355(64);
		}
		if (__LIB_13__::func_218(uParam0, Global_35, 0, 0, 1, 1))
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			PED::SET_PED_CONFIG_FLAG(Global_35, 300, false);
			PED::FORCE_PED_MOTION_STATE(Global_35, joaat("MOTIONSTATE_WALK"), false, 0, false);
			if (ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_348))
			{
				__LIB_0__::func_569(joaat("MOTIONSTATE_WALK"), 2000, 0, 1, 0, 108.94f, 0, 1);
			}
			else
			{
				__LIB_0__::func_569(joaat("MOTIONSTATE_WALK"), 2500, 0, 1, 1, 0, 0, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_266[1]))
			{
				if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_348) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_348, false)) && ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_266[1], uParam0->f_348))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_348, "p_cigarette01x^1", iLocal_266[1]);
				}
			}
			if (!__LIB_8__::func_372(1))
			{
				__LIB_13__::func_71(&iLocal_264, func_720(31), func_759(31), 1, 1, 1, 1);
			}
		}
		if (__LIB_13__::func_218(uParam0, iLocal_262, 0, 0, 1, 1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_262))
			{
				func_1295(iLocal_262, iLocal_263, 1065353216 /* Float: 1f */, 1);
				__LIB_0__::func_904(5, 1);
			}
		}
		if (__LIB_13__::func_218(uParam0, iLocal_265, func_708(), 0, 1, 1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_266[0]))
			{
				if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_348) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_348, false)) && ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_266[0], uParam0->f_348))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_348, "p_cigarette01x", iLocal_266[0]);
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_265))
			{
				PED::_0xAE6004120C18DF97(iLocal_265, 0, 1);
				func_747(&iLocal_265, &iLocal_508);
			}
		}
	}
}

int func_702(var uParam0)
{
	func_663(&iLocal_263);
	if (!__LIB_8__::func_372(1))
	{
		if (__LIB_13__::func_543(uParam0, &iLocal_264, func_720(31), func_759(31), 1, 1, 1, 1, 1))
		{
			func_355(1);
		}
		else
		{
			return 0;
		}
	}
	else if (!__LIB_8__::func_372(2))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_264))
		{
			func_959(iLocal_264, func_720(31), func_759(31), 2, 1073741824 /* Float: 2f */);
			TASK::TASK_STAND_STILL(iLocal_264, -1);
			func_355(2);
		}
	}
	return 1;
}

int func_704(var uParam0)
{
	__LIB_3__::func_662(func_835(32), 7500, 0, 0, -1, -1, 0);
	return 1;
}

char[] func_708()
{
	return "U_M_Y_EmRSon_01";
}

void func_710(var uParam0)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_510))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_510);
	}
	if (__LIB_13__::func_23(uParam0, func_699(1)))
	{
		switch (iLocal_61)
		{
			case 0:
				uLocal_511 = uParam0->f_348;
				if (__LIB_13__::func_853())
				{
					iLocal_597 = 2;
				}
				switch (iLocal_520)
				{
					case 0:
						__LIB_13__::func_17(uParam0, func_350(2), 0);
						__LIB_13__::func_17(uParam0, func_350(3), 0);
						break;
					case 4:
						__LIB_13__::func_17(uParam0, func_350(6), 0);
						__LIB_13__::func_17(uParam0, func_350(7), 0);
						break;
				}
				__LIB_2__::func_259(&(vLocal_664[8 /*3*/]));
				__LIB_13__::func_868(1);
				break;
			case 1:
				if (ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_348))
				{
					__LIB_13__::func_868(3);
				}
				else
				{
					switch (iLocal_520)
					{
						case 0:
							if (!ANIMSCENE::_0x8D81E7824B7753F7(uParam0->f_348, "RHMR0_MCS1_P1_T07_Shot_1", 1) || __LIB_1__::func_583(&(vLocal_664[8 /*3*/])) > 7f)
							{
								__LIB_10__::func_519(&uLocal_579, "RHMR0_O_DAY", "RHMR0_O_NIGHT", __LIB_0__::func_342(), iLocal_597, 8000, 1, -1, -1);
								__LIB_13__::func_868(2);
								__LIB_1__::func_561(&(vLocal_664[8 /*3*/]));
							}
							break;
						case 4:
							if (!ANIMSCENE::_0x8D81E7824B7753F7(uParam0->f_348, "RHMR0_MCS1_P1A1_T06_Shot_1", 1) || __LIB_1__::func_583(&(vLocal_664[8 /*3*/])) > 12f)
							{
								__LIB_10__::func_519(&uLocal_579, "RHMR0_O_DAY", "RHMR0_O_NIGHT", __LIB_0__::func_342(), iLocal_597, 8000, 1, -1, -1);
								__LIB_13__::func_868(2);
								__LIB_1__::func_561(&(vLocal_664[8 /*3*/]));
							}
							break;
					}
				}
				break;
			case 2:
				PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_SKIP_CUTSCENE"), false);
				if (!__LIB_4__::func_813(&uLocal_579))
				{
					if (!__LIB_8__::func_372(262144))
					{
						__LIB_10__::func_519(&uLocal_579, "RHMR0_O_DAY", "RHMR0_O_NIGHT", __LIB_0__::func_342(), iLocal_597, 8000, 1, -1, -1);
					}
				}
				if (__LIB_4__::func_813(&uLocal_579))
				{
					if (__LIB_10__::func_514(&uLocal_579))
					{
						switch (iLocal_520)
						{
							case 0:
								if (__LIB_8__::func_349(&uLocal_579))
								{
									TELEMETRY::_TELEMETRY_MISSION_ILO_OPTION(joaat("INPUT_INTERACT_LOCKON_POS"), "RHMR0_O_DAY");
									ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_348, "Go_is", true, false);
									func_313();
									func_1305(&uLocal_511);
									func_373(uParam0, 2);
								}
								else if (__LIB_8__::func_350(&uLocal_579))
								{
									TELEMETRY::_TELEMETRY_MISSION_ILO_OPTION(joaat("INPUT_INTERACT_LOCKON_NEG"), "RHMR0_O_NIGHT");
									ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_348, "Go_is", false, false);
									func_310();
									__LIB_4__::func_58(1, -2147483648);
									func_373(uParam0, 3);
								}
								break;
							case 4:
								if (__LIB_8__::func_349(&uLocal_579))
								{
									TELEMETRY::_TELEMETRY_MISSION_ILO_OPTION(joaat("INPUT_INTERACT_LOCKON_POS"), "RHMR0_O_DAY");
									ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_348, "Go_is", false, false);
									func_313();
									__LIB_4__::func_58(1, -2147483648);
									func_373(uParam0, 7);
								}
								else if (__LIB_8__::func_350(&uLocal_579))
								{
									TELEMETRY::_TELEMETRY_MISSION_ILO_OPTION(joaat("INPUT_INTERACT_LOCKON_NEG"), "RHMR0_O_NIGHT");
									ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_348, "Go_is", true, false);
									func_310();
									func_1305(&uLocal_511);
									func_373(uParam0, 6);
								}
								break;
							default:
								if (!ANIMSCENE::_0x8D81E7824B7753F7(uParam0->f_348, "RHMR0_MCS1_P1_T07_Shot_2", 1) && !ANIMSCENE::_0x8D81E7824B7753F7(uParam0->f_348, "RHMR0_MCS1_P1A1_T06_Shot_2", 1))
								{
									__LIB_8__::func_361(&uLocal_579);
									__LIB_13__::func_868(4);
								}
								break;
						}
					}
				}
				break;
			case 3:
				if (!__LIB_4__::func_813(&uLocal_579))
				{
					if (!__LIB_8__::func_372(262144))
					{
						switch (iLocal_520)
						{
							case 0:
								if (func_716(&uLocal_511, 0.3807f))
								{
									__LIB_10__::func_519(&uLocal_579, "RHMR0_O_DAY", "RHMR0_O_NIGHT", __LIB_0__::func_342(), iLocal_597, 8000, 1, -1, -1);
								}
								break;
							case 4:
								if (func_716(&uLocal_511, 0.4538f))
								{
									__LIB_10__::func_519(&uLocal_579, "RHMR0_O_DAY", "RHMR0_O_NIGHT", __LIB_0__::func_342(), iLocal_597, 8000, 1, -1, -1);
								}
								break;
						}
					}
				}
				if (__LIB_4__::func_813(&uLocal_579))
				{
					if (__LIB_10__::func_514(&uLocal_579))
					{
						switch (iLocal_520)
						{
							case 0:
								if (__LIB_8__::func_349(&uLocal_579))
								{
									TELEMETRY::_TELEMETRY_MISSION_ILO_OPTION(joaat("INPUT_INTERACT_LOCKON_POS"), "RHMR0_O_DAY");
									ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_348, "Go_is", true, false);
									func_313();
									func_1305(&uLocal_511);
									func_373(uParam0, 2);
								}
								else if (__LIB_8__::func_350(&uLocal_579))
								{
									TELEMETRY::_TELEMETRY_MISSION_ILO_OPTION(joaat("INPUT_INTERACT_LOCKON_NEG"), "RHMR0_O_NIGHT");
									ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_348, "Go_is", false, false);
									func_310();
									__LIB_4__::func_58(1, -2147483648);
									func_373(uParam0, 3);
								}
								break;
							case 4:
								if (__LIB_8__::func_349(&uLocal_579))
								{
									TELEMETRY::_TELEMETRY_MISSION_ILO_OPTION(joaat("INPUT_INTERACT_LOCKON_POS"), "RHMR0_O_DAY");
									ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_348, "Go_is", false, false);
									func_313();
									__LIB_4__::func_58(1, -2147483648);
									func_373(uParam0, 7);
								}
								else if (__LIB_8__::func_350(&uLocal_579))
								{
									TELEMETRY::_TELEMETRY_MISSION_ILO_OPTION(joaat("INPUT_INTERACT_LOCKON_NEG"), "RHMR0_O_NIGHT");
									ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_348, "Go_is", true, false);
									func_310();
									func_1305(&uLocal_511);
									func_373(uParam0, 6);
								}
								break;
							default:
								if (!ANIMSCENE::_0x8D81E7824B7753F7(uParam0->f_348, "RHMR0_MCS1_P1_T07_Shot_2", 1) && !ANIMSCENE::_0x8D81E7824B7753F7(uParam0->f_348, "RHMR0_MCS1_P1A1_T06_Shot_2", 1))
								{
									__LIB_8__::func_361(&uLocal_579);
									__LIB_13__::func_868(4);
								}
								break;
						}
					}
				}
				break;
			case 4:
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					func_1305(&uLocal_511);
				}
				if (ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_348) && !__LIB_8__::func_372(1024))
				{
					if (!__LIB_13__::func_860() && !__LIB_13__::func_855())
					{
						func_355(2048);
					}
				}
				break;
			case 5:
				break;
		}
		if (__LIB_13__::func_218(uParam0, Global_35, 0, 0, 1, 1))
		{
			func_355(262144);
			PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), false, 0, -1, false);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
			__LIB_1__::func_561(&(vLocal_664[8 /*3*/]));
			__LIB_8__::func_361(&uLocal_579);
			if (!__LIB_13__::func_860() && !__LIB_13__::func_855())
			{
				if (iLocal_520 == 0)
				{
					func_313();
				}
				else
				{
					func_310();
				}
			}
			if (__LIB_8__::func_372(2048))
			{
				if (__LIB_13__::func_853())
				{
					func_959(Global_35, 835.691f, 831.7941f, 115.5385f, 83.51f, 2, 1073741824 /* Float: 2f */);
				}
				else
				{
					func_959(Global_35, 837.4332f, 829.5339f, 115.4535f, 83.51f, 2, 1073741824 /* Float: 2f */);
				}
			}
			if (ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_348))
			{
				__LIB_0__::func_489(0, 0);
			}
			if (__LIB_13__::func_855())
			{
				PED::FORCE_PED_MOTION_STATE(Global_35, joaat("MOTIONSTATE_WALK"), false, 0, false);
				__LIB_0__::func_569(joaat("MOTIONSTATE_WALK"), 2000, 0, 1, 1, 0, 0, 0);
			}
		}
		if (__LIB_13__::func_218(uParam0, iLocal_262, 0, 0, 1, 1))
		{
			if (__LIB_8__::func_372(2048))
			{
				func_959(iLocal_262, 833.5469f, 832.9671f, 114.6847f, 83.51f, 2, 1073741824 /* Float: 2f */);
			}
			PED::_0x2208438012482A1A(iLocal_262, false, false);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_262, func_720(9), 1f, -1, 0.25f, 0, 40000f);
		}
	}
}

void func_711(var uParam0)
{
	if (__LIB_13__::func_23(uParam0, func_699(2)))
	{
		if (CAM::IS_SCREEN_FADED_OUT() && !ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_348))
		{
			func_311();
		}
		if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_513) && !ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_348))
		{
			iLocal_513 = ANIMSCENE::_CREATE_ANIM_SCENE(func_1308(), 0, 0, false, true);
			ANIMSCENE::LOAD_ANIM_SCENE(iLocal_513);
		}
		if (!__LIB_8__::func_372(16777216))
		{
			if (__LIB_2__::func_1(iLocal_263, 0, 1))
			{
				func_959(iLocal_263, func_720(30), func_759(30), 2, 1073741824 /* Float: 2f */);
				TASK::TASK_STAND_STILL(iLocal_263, -1);
			}
			if (__LIB_2__::func_1(iLocal_264, 0, 1))
			{
				func_959(iLocal_264, func_720(31), func_759(31), 2, 1073741824 /* Float: 2f */);
				TASK::TASK_STAND_STILL(iLocal_264, -1);
			}
			func_355(16777216);
		}
		if ((ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_348) && !__LIB_8__::func_372(8388608)) && (CAM::IS_SCREEN_FADED_OUT() || !CAM::IS_SCREEN_FADING_OUT()))
		{
			func_355(8388608);
			func_355(67108864);
			ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_513);
			func_959(Global_35, func_720(26), func_759(26), 2, 1073741824 /* Float: 2f */);
			PED::FORCE_PED_MOTION_STATE(Global_35, joaat("MOTIONSTATE_WALK"), false, 0, false);
			__LIB_0__::func_569(joaat("MOTIONSTATE_WALK"), 2500, 0, 1, 1, 0, 0, 0);
			__LIB_0__::func_745(5);
			func_959(iLocal_262, func_720(25), func_759(25), 2, 1073741824 /* Float: 2f */);
			func_1295(iLocal_262, iLocal_263, 1065353216 /* Float: 1f */, 1);
			func_959(iLocal_265, func_720(27), func_759(27), 2, 1073741824 /* Float: 2f */);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_265, 1410.083f, 278.4708f, 88.53571f, 1f, -1, 0.25f, 0, 40000f);
		}
		if (__LIB_13__::func_218(uParam0, Global_35, 0, 0, 1, 1))
		{
			if (func_751(&iLocal_513) && !ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_348))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
				func_942(&iLocal_513, "ARTHUR", Global_35);
				func_1309(&iLocal_513, "STAGECOACH002X", iLocal_14);
				func_944(&iLocal_513);
			}
		}
		if (__LIB_13__::func_218(uParam0, iLocal_262, 0, 0, 1, 1))
		{
			__LIB_0__::func_745(5);
			if (func_751(&iLocal_513) && !ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_348))
			{
				func_942(&iLocal_513, "HoseaMatthews", iLocal_262);
			}
		}
		if (__LIB_13__::func_218(uParam0, iLocal_265, func_708(), 0, 1, 1))
		{
			if (__LIB_2__::func_1(iLocal_265, 0, 1))
			{
				if (func_751(&iLocal_513) && !ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_348))
				{
					func_942(&iLocal_513, func_708(), iLocal_265);
				}
			}
		}
	}
}

int func_713(var uParam0)
{
	if (__LIB_13__::func_22(uParam0) == 0)
	{
		CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
		if (func_715(&iLocal_509))
		{
			__LIB_9__::func_204(Global_35, func_720(22), &(vLocal_664[10 /*3*/]), 100f, 60f, 55f, 50f, 1082130432 /* Float: 4f */, 0, 0, 1, 1, 1);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CAMERA_HANDHELD_USE"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_ATTACK"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_ATTACK2"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY_ACTION"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY_PC"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY_SECONDARY"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
			if (__LIB_0__::func_153(Global_35, 0, 1, 0) == joaat("WEAPON_KIT_CAMERA"))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
			}
			switch (iLocal_45)
			{
				case 0:
					if (!__LIB_8__::func_372(256))
					{
						if (__LIB_1__::func_322("RHMR0_INT_LI_A"))
						{
							func_355(256);
						}
					}
					if (!__LIB_8__::func_372(128))
					{
						if (((!__LIB_1__::func_322("RHMR0_INT_LI_A") && !__LIB_1__::func_322("RHMR0_INT_LI_B")) && !__LIB_1__::func_322("RHMR0_INT_LI_C")) && !__LIB_1__::func_322("RHMR0_INT_LI_D"))
						{
							func_355(128);
						}
						else if (__LIB_3__::func_496(iLocal_262, "bSafeBreakoutDlg", 1067030938 /* Float: 1.2f */))
						{
							func_355(128);
						}
					}
					if (__LIB_8__::func_372(128))
					{
						if (__LIB_8__::func_372(256) && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_509, "pl_idle"))
						{
							__LIB_2__::func_259(&(vLocal_664[24 /*3*/]));
							func_1312(&iLocal_509, "pl_idle");
							__LIB_13__::func_869(1);
						}
						else
						{
							func_355(16);
							__LIB_2__::func_259(&(vLocal_664[24 /*3*/]));
							func_1312(&iLocal_509, "pl_leadin_only");
							__LIB_13__::func_869(2);
						}
					}
					break;
				case 1:
					if (__LIB_9__::func_913(&(vLocal_664[24 /*3*/]), 1f))
					{
						func_355(16);
						__LIB_2__::func_259(&(vLocal_664[24 /*3*/]));
						func_1312(&iLocal_509, "pl_leadin_only");
						__LIB_13__::func_869(2);
					}
					break;
				case 2:
					break;
			}
			if (__LIB_9__::func_913(&(vLocal_664[24 /*3*/]), 3.75f) || __LIB_3__::func_439(iLocal_509))
			{
				__LIB_0__::func_172(iLocal_22[1]);
				__LIB_0__::func_172(iLocal_22[16]);
				__LIB_0__::func_172(iLocal_22[12]);
				__LIB_3__::func_525(&(iLocal_22[5]), &uLocal_272);
				__LIB_11__::func_10(1, 1, 0);
				PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_BOB_CRAWFORD"));
				PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_SEAMUS"));
				return 1;
			}
			return 0;
		}
		else
		{
			__LIB_0__::func_172(iLocal_22[1]);
			__LIB_0__::func_172(iLocal_22[16]);
			__LIB_0__::func_172(iLocal_22[12]);
			__LIB_3__::func_525(&(iLocal_22[5]), &uLocal_272);
			__LIB_11__::func_10(1, 1, 0);
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_BOB_CRAWFORD"));
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_SEAMUS"));
			return 1;
		}
	}
	__LIB_0__::func_172(iLocal_22[1]);
	__LIB_0__::func_172(iLocal_22[16]);
	__LIB_0__::func_172(iLocal_22[12]);
	__LIB_3__::func_525(&(iLocal_22[5]), &uLocal_272);
	__LIB_11__::func_10(1, 1, 0);
	PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_BOB_CRAWFORD"));
	PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_SEAMUS"));
	return 1;
}

bool func_715(int iParam0)
{
	if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*iParam0) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(*iParam0, true, false)) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(*iParam0, false))
	{
		return true;
	}
	return false;
}

bool func_716(int iParam0, float fParam1)
{
	if (!func_715(iParam0) || ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(*iParam0) >= fParam1)
	{
		return true;
	}
	return false;
}

void func_717(int iParam0)
{
	if (!__LIB_8__::func_372(iParam0))
	{
		return;
	}
	iLocal_17 = (iLocal_17 - (iLocal_17 && iParam0));
}

void func_718(int iParam0)
{
	if (!func_920(iParam0))
	{
		__LIB_1__::func_683(&iLocal_19, iParam0);
	}
}

int func_719()
{
	struct<4> Var0;
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_509))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_509, true, false))
		{
			func_942(&iLocal_509, "ARTHUR", Global_35);
			func_942(&iLocal_509, "HoseaMatthews", iLocal_262);
			func_942(&iLocal_509, func_708(), iLocal_265);
			func_1309(&iLocal_509, "p_cigarette01x", iLocal_266[0]);
			func_1309(&iLocal_509, "p_cigarette01x^1", iLocal_266[1]);
			if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iLocal_509, "HoseaMatthews", &Var0, false, 0, 2))
			{
				func_959(iLocal_262, Var0, Var0.f_3.f_2, 2, 1073741824 /* Float: 2f */);
			}
			iLocal_22[16] = VOLUME::_0x0EB78C2B156635B1(joaat("VOLSPHERE"), func_191(16), func_192(16), func_193(16));
			ANIMSCENE::START_ANIM_SCENE(iLocal_509);
			ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_509, "pl_leadin_only");
			ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_509, "pl_idle");
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		iLocal_509 = ANIMSCENE::_CREATE_ANIM_SCENE(func_1317(), 0, "pl_leadin", false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(iLocal_509);
		return 0;
	}
	return 0;
}

Vector3 func_720(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1406.714f, 267.0809f, 89.01808f;
		case 1:
			return 1407.846f, 267.3821f, 88.99104f;
		case 2:
			return 1412.032f, 265.1066f, 88.71908f;
		case 3:
			return 1395.865f, 262.8173f, 88.42418f;
		case 4:
			return 1412.164f, 219.23f, 90.23525f;
		case 5:
			return 1387.218f, 247.5585f, 89.19593f;
		case 6:
			return 845.8165f, 801.9103f, 114.2674f;
		case 7:
			return 841.9183f, 811.923f, 114.3029f;
		case 8:
			return 837.9238f, 827.9845f, 114.4243f;
		case 9:
			return 788.8008f, 849.5153f, 117.4715f;
		case 10:
			return 779.3073f, 849.1818f, 122.3872f;
		case 11:
			return 790.8256f, 850.9583f, 117.1199f;
		case 12:
			return 766.4474f, 878.2137f, 121.1293f;
		case 13:
			return 780.9084f, 849.504f, 120.9164f;
		case 14:
			return 872.4186f, 897.4119f, 113.8092f;
		case 15:
			return 857.2673f, 791.6724f, 114.1386f;
		case 16:
			return 874.8599f, 900.7256f, 113.8099f;
		case 17:
			return 879.3874f, 846.7714f, 115.346f;
		case 18:
			return 857.4174f, 794.1178f, 114.2058f;
		case 19:
			return 822.428f, 840.2434f, 115.5775f;
		case 20:
			return 1412.044f, 265.7547f, 88.66939f;
		case 21:
			return 1409.877f, 270.2217f, 88.53571f;
		case 22:
			return 1407.837f, 265.1482f, 88.62521f;
		case 23:
			return 837.1396f, 827.6817f, 114.4353f;
		case 24:
			return 833.0652f, 835.3156f, 114.7285f;
		case 25:
			return 1408.22f, 264.852f, 88.63902f;
		case 26:
			return 1410.851f, 264.1342f, 88.76333f;
		case 27:
			return 1412.845f, 269.7147f, 88.53571f;
		case 28:
			return 869.4013f, 792.2568f, 113.4368f;
		case 29:
			return 1406.878f, 266.5341f, 88.56995f;
		case 30:
			return 1397.911f, 262.8861f, 88.4398f;
		case 31:
			return 1395.442f, 262.2823f, 88.43619f;
		case 32:
			return 1407.867f, 281.5389f, 88.39253f;
		case 33:
			return 1401.626f, 263.8544f, 88.51767f;
		case 34:
			return 1330.491f, 302.334f, 87.7f;
		case 35:
			return -9.6f, 63.9f, 93.4f;
		case 36:
			return 1327.59f, 300.1759f, 86.86504f;
		case 37:
			return -14.5f, 60.1f, 93f;
		case 38:
			return -115.5969f, -19.82196f, 94.91833f;
		case 39:
			return 1344.5f, 286.1f, 88.7f;
		case 40:
			return -17.9f, 57.3f, 93.8f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_741()
{
	CLOCK::SET_CLOCK_TIME(0, 30, 0);
}

bool func_742()
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_510))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_510, true, false))
		{
			func_942(&iLocal_510, "HoseaMatthews", iLocal_262);
			iLocal_270 = OBJECT::CREATE_OBJECT(joaat("P_BINOCULARS01X"), func_1326(), true, true, false, false, true);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_270))
			{
				func_1309(&iLocal_510, "P_BINOCULARS01X", iLocal_270);
			}
			if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iLocal_510, "HoseaMatthews", &vLocal_652, false, 0, 2))
			{
			}
			ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_510, func_1327(1));
			ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_510, func_1327(2));
			ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_510, func_1327(3));
			ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_510, func_1327(4));
			ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_510, func_1327(5));
			ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_510, func_1327(6));
			ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_510, func_1327(7));
			ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_510, func_1327(8));
			ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_510, func_1327(9));
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		iLocal_510 = ANIMSCENE::_CREATE_ANIM_SCENE(func_1328(), 0, func_1327(0), false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(iLocal_510);
	}
	return false;
}

void func_743()
{
	CLOCK::SET_CLOCK_TIME(11, 0, 0);
}

void func_745(int iParam0)
{
	func_959(Global_35, Local_64[iParam0 /*4*/], Local_64[iParam0 /*4*/].f_3, 2, 1073741824 /* Float: 2f */);
	func_959(iLocal_264, Local_64.f_45[iParam0 /*4*/], Local_64.f_45[iParam0 /*4*/].f_3, 2, 1073741824 /* Float: 2f */);
	func_959(iLocal_262, Local_64.f_90[iParam0 /*4*/], Local_64.f_90[iParam0 /*4*/].f_3, 4, 1073741824 /* Float: 2f */);
	func_959(iLocal_263, Local_64.f_135[iParam0 /*4*/], Local_64.f_135[iParam0 /*4*/].f_3, 2, 1073741824 /* Float: 2f */);
	switch (iParam0)
	{
		case 1:
		case 2:
			__LIB_1__::func_571(iLocal_262, iLocal_263, 0, -1, 1);
			__LIB_1__::func_571(Global_35, iLocal_264, 0, -1, 1);
			break;
	}
}

void func_747(int iParam0, int iParam1)
{
	int iVar0;
	if (ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		return;
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(*iParam1))
	{
		*iParam1 = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_HUMAN_LEAN_BACK_WALL"), 1415.453f, 273.6933f, 88.47079f, -66.28f, 0, 0, 0);
	}
	TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(*iParam0, false);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1415.453f, 273.6933f, 88.47079f, 1f, -1, 0.25f, 0, 40000f);
	if (TASK::_DOES_SCENARIO_POINT_EXIST(*iParam1))
	{
		TASK::_TASK_USE_SCENARIO_POINT(0, *iParam1, 0, -1, true, false, 0, false, -1f, false);
	}
	__LIB_1__::func_474(*iParam0, &iVar0, 0, 0, 1, 1);
}

bool func_751(int iParam0)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*iParam0) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(*iParam0, true, false))
	{
		return true;
	}
	return false;
}

void func_755(int iParam0, int iParam1, int iParam2)
{
	if ((!ENTITY::IS_ENTITY_DEAD(*iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam1)) && !PED::IS_PED_IN_VEHICLE(*iParam0, iParam1, false))
	{
		PED::SET_PED_INTO_VEHICLE(*iParam0, iParam1, iParam2);
	}
}

void func_757(int iParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		return;
	}
	AITRANSPORT::_0xB7079F4C72896756(Global_35, *iParam0, 0, 16, -1);
}

void func_758(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		VEHICLE::_SET_VEHICLE_LIVERY(*iParam0, 0);
		VEHICLE::_SET_VEHICLE_TINT(*iParam0, 0);
		VEHICLE::_SET_VEHICLE_MUD_LEVEL(*iParam0, 0f);
		VEHICLE::_0x8878FF3EEE2868A9(*iParam0, 0f);
		VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, 0f);
	}
}

float func_759(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 14.51f;
		case 1:
			return 14.51f;
		case 2:
			return 0f;
		case 3:
			return 0f;
		case 4:
			return 8.33f;
		case 6:
			return 0f;
		case 7:
			return 0f;
		case 8:
			return 0f;
		case 9:
			return 0f;
		case 11:
			return -122.57f;
		case 12:
			return -114.64f;
		case 13:
			return 0f;
		case 14:
			return 157.7f;
		case 15:
			return 157.7f;
		case 16:
			return 0f;
		case 17:
			return 0f;
		case 20:
			return 158.48f;
		case 21:
			return -168.23f;
		case 22:
			return 12.64f;
		case 23:
			return 0f;
		case 24:
			return 65f;
		case 25:
			return 115f;
		case 26:
			return 97.5f;
		case 27:
			return 14.5f;
		case 28:
			return 0f;
		case 29:
			return 17.5f;
		case 30:
			return 17.79f;
		case 31:
			return 17.79f;
		case 32:
			return 0f;
		case 33:
			return -72.79f;
		case 34:
			return 100f;
		case 35:
			return 100f;
		case 36:
			return 136f;
		case 37:
			return 136f;
		default:
			break;
	}
	return 0f;
}

void func_787(var uParam0)
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
		func_1356(&(uParam0->f_404), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_12__::func_706(uParam0, 0f, 0f, 0f);
		func_1358(uParam0);
		func_1359(uParam0);
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

bool func_833()
{
	if (__LIB_0__::func_899(&(vLocal_664[0 /*3*/])))
	{
		if (__LIB_3__::func_514(&(vLocal_664[0 /*3*/]), 1f))
		{
			__LIB_2__::func_259(&(vLocal_664[0 /*3*/]));
		}
		else if (!func_404(2048))
		{
			return true;
		}
	}
	else
	{
		__LIB_2__::func_259(&(vLocal_664[0 /*3*/]));
		return true;
	}
	if (__LIB_0__::func_12() == 38)
	{
		return false;
	}
	if (func_1425())
	{
		return false;
	}
	return true;
}

void func_834(int iParam0)
{
	if (!func_404(iParam0))
	{
		return;
	}
	iLocal_252 = (iLocal_252 - (iLocal_252 && iParam0));
}

char* func_835(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "RHMR0_O_PARK";
		case 2:
			return "RHMR0_O_LEAVE";
		case 4:
			return "RHMR0_O_REJOIN";
		case 8:
			return "RHMR0_O_WAGON";
		case 16:
			return "RHMR0_O_GO_TO_CRD";
		case 32:
			return "RHMR0_O_MOUNT";
		case 64:
			return "RHMR0_O_RETURN";
		case 128:
			return "RHMR0_O_SCOPE";
		case 256:
			return "RHMR0_O_HOSEA";
		case 512:
			return "RHMR0_O_FOLLOW_WGN";
		case 2048:
			return "RHMR0_O_ROUTE";
		case 4096:
			return "RHMR0_O_ROCK";
		case 8192:
			return "RHMR0_O_BINO";
		case 16384:
			return "RHMR0_O_TALK";
		case 32768:
			return "RHMR0_O_WITNESS";
		default:
			break;
	}
	return "INVALID OBJ STRING";
}

void func_837(int iParam0)
{
	if (func_404(iParam0))
	{
		return;
	}
	iLocal_252 = (iLocal_252 || iParam0);
}

bool func_839()
{
	if (__LIB_0__::func_899(&(vLocal_664[0 /*3*/])))
	{
		if (__LIB_3__::func_514(&(vLocal_664[0 /*3*/]), 1f))
		{
			__LIB_2__::func_259(&(vLocal_664[0 /*3*/]));
		}
		else if (!func_404(2048))
		{
			return true;
		}
	}
	else
	{
		__LIB_2__::func_259(&(vLocal_664[0 /*3*/]));
		return true;
	}
	if (__LIB_0__::func_12() == 38)
	{
		return false;
	}
	if (func_1425())
	{
		return false;
	}
	return true;
}

float func_840(int iParam0)
{
	if (iParam0 == 2 && iLocal_48 >= 6)
	{
		return __LIB_3__::func_332(func_720(7), 1);
	}
	return __LIB_2__::func_118(iLocal_262, 1, 1);
}

void func_842(int iParam0, char* sParam1)
{
	if (!func_843(iParam0))
	{
		if (func_1426(iParam0))
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1) || !__LIB_1__::func_322(sParam1))
			{
				if (__LIB_0__::func_899(&(vLocal_664[4 /*3*/])))
				{
					if (__LIB_9__::func_913(&(vLocal_664[4 /*3*/]), 0.5f))
					{
						func_1427(iParam0);
						func_1428(iParam0);
						__LIB_3__::func_662(func_835(iParam0), 7500, 0, 0, -1, -1, 0);
					}
				}
				else
				{
					__LIB_2__::func_259(&(vLocal_664[4 /*3*/]));
				}
			}
		}
	}
}

bool func_843(int iParam0)
{
	return (uLocal_254 && iParam0) != 0;
}

bool func_844(int iParam0, float fParam1, float fParam2, float fParam3)
{
	char* sVar0;
	if (func_404(iParam0))
	{
		return true;
	}
	if (fParam3 > 0f)
	{
		if (ENTITY::GET_ENTITY_SPEED(Global_35) < fParam3)
		{
		}
		else
		{
			if (__LIB_0__::func_899(fParam1))
			{
				__LIB_1__::func_561(fParam1);
			}
			return false;
		}
	}
	sVar0 = func_835(iParam0);
	if (!__LIB_0__::func_899(fParam1))
	{
		__LIB_2__::func_259(fParam1);
	}
	else if (__LIB_9__::func_913(fParam1, fParam2))
	{
		__LIB_3__::func_662(sVar0, 7500, 0, 0, -1, -1, 0);
		func_837(iParam0);
		return true;
	}
	return false;
}

void func_846(var uParam0, char* sParam1, int iParam2, int iParam3, float fParam4)
{
	if (__LIB_1__::func_325())
	{
		if (__LIB_0__::func_899(&(uParam0->f_2594)))
		{
			__LIB_1__::func_561(&(uParam0->f_2594));
		}
		return;
	}
	if (__LIB_9__::func_178(&(uParam0->f_2594)) >= IntToFloat(iParam3))
	{
		if (ENTITY::GET_ENTITY_SPEED(Global_35) <= 0.1f || !__LIB_0__::func_48(Global_35, iParam2, fParam4, 0))
		{
			__LIB_12__::func_883(uParam0, sParam1, 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			__LIB_1__::func_561(&(uParam0->f_2594));
		}
		else
		{
			__LIB_2__::func_259(&(uParam0->f_2594));
		}
	}
}

void func_854(bool bParam0)
{
	if (bParam0)
	{
		__LIB_13__::func_891(1);
	}
	func_501();
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_262))
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_510) && ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_262, iLocal_510))
		{
		}
		else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_513) && ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_262, iLocal_513))
		{
		}
		else
		{
			TASK::TASK_STAND_STILL(iLocal_262, -1);
		}
	}
}

Vector3 func_866()
{
	return 837.7111f, 828.5634f, 114.4529f;
}

bool func_870(int iParam0)
{
	return (uLocal_21 && iParam0) != 0;
}

void func_871(int iParam0)
{
	if (func_870(iParam0))
	{
		return;
	}
	uLocal_21 = (uLocal_21 || iParam0);
}

int func_882(var uParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	if (ENTITY::IS_ENTITY_DEAD(iLocal_262))
	{
		return 0;
	}
	switch (iLocal_49)
	{
		case 0:
			__LIB_3__::func_573(&(iLocal_22[9]), func_191(9), func_192(9), func_193(9), "RHMRB_VOL_CRD_HOME");
			__LIB_7__::func_221(1);
			break;
		case 1:
			if (func_742())
			{
				TASK::TASK_ENTER_ANIM_SCENE(iLocal_262, iLocal_510, "HoseaMatthews", func_1327(0), 1f, 1, 0, 20000, -1082130432 /* Float: -1f */);
				__LIB_7__::func_221(2);
			}
			break;
		case 2:
			if (__LIB_0__::func_94(iLocal_262, vLocal_652, 1) < 5f)
			{
				func_370(&iLocal_262, 0);
				__LIB_7__::func_221(3);
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_262, 1369124074, true) != 1)
			{
				TASK::TASK_ENTER_ANIM_SCENE(iLocal_262, iLocal_510, "HoseaMatthews", func_1327(0), 1f, 1, 0, 20000, -1082130432 /* Float: -1f */);
			}
			break;
		case 3:
			if (__LIB_3__::func_332(vLocal_652, 1) < 4f)
			{
				PED::SET_PED_RESET_FLAG(Global_35, 168, true);
			}
			if (ANIMSCENE::_0x337F1CC8EE895601(iLocal_510, "HoseaMatthews"))
			{
				__LIB_13__::func_879(&uLocal_278, "RH0_ARRIVE", iLocal_262, Global_35, 0, 0, 1, 0);
				func_352(uParam0, 4096, &iLocal_401, &(vLocal_664[4 /*3*/]));
				__LIB_7__::func_221(4);
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_262, 1369124074, true) != 1)
			{
				TASK::TASK_ENTER_ANIM_SCENE(iLocal_262, iLocal_510, "HoseaMatthews", func_1327(0), 1f, 1, 0, 20000, -1082130432 /* Float: -1f */);
			}
			break;
		case 4:
			if (__LIB_0__::func_899(&(vLocal_664[20 /*3*/])))
			{
				if (__LIB_9__::func_913(&(vLocal_664[20 /*3*/]), fLocal_516))
				{
					iVar0 = func_1441(&iLocal_262);
					if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_510, func_1327(iVar0)))
					{
						if (ANIMSCENE::_0x1F0E401031E20146(iLocal_510, func_1327(iVar0)))
						{
						}
						else
						{
							fLocal_516 = MISC::GET_RANDOM_FLOAT_IN_RANGE(12f, 17f);
							__LIB_2__::func_259(&(vLocal_664[20 /*3*/]));
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_510, func_1327(iVar0), true);
							switch (iVar0)
							{
								case 4:
									__LIB_13__::func_879(&uLocal_278, "RH0_MCS1_CALL_6", iLocal_262, Global_35, 0, 0, 1, 0);
									break;
								case 5:
									__LIB_13__::func_879(&uLocal_278, "RH0_MCS1_CALL_5", iLocal_262, Global_35, 0, 0, 1, 0);
									break;
								case 6:
									__LIB_13__::func_879(&uLocal_278, "RH0_MCS1_CALL_2", iLocal_262, Global_35, 0, 0, 1, 0);
									break;
								case 7:
									__LIB_13__::func_879(&uLocal_278, "RH0_MCS1_CALL_3", iLocal_262, Global_35, 0, 0, 1, 0);
									break;
								case 8:
									__LIB_13__::func_879(&uLocal_278, "RH0_MCS1_CALL_1", iLocal_262, Global_35, 0, 0, 1, 0);
									break;
								case 9:
									__LIB_13__::func_879(&uLocal_278, "RH0_MCS1_CALL_4", iLocal_262, Global_35, 0, 0, 1, 0);
									break;
							}
							ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_510, func_1327(iVar0));
						}
					}
					else
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_510, func_1327(iVar0));
					}
				}
			}
			else
			{
				fLocal_516 = MISC::GET_RANDOM_FLOAT_IN_RANGE(12f, 17f);
				__LIB_2__::func_259(&(vLocal_664[20 /*3*/]));
			}
			if (__LIB_3__::func_332(vLocal_652, 1) < 4f)
			{
				PED::SET_PED_RESET_FLAG(Global_35, 168, true);
				__LIB_0__::func_325(&(iLocal_244[5]));
				if (__LIB_1__::func_185(13))
				{
					__LIB_8__::func_152(&(iLocal_244[6]), iLocal_22[9], 1247852480);
					func_352(uParam0, 8192, &iLocal_401, &(vLocal_664[4 /*3*/]));
				}
				else
				{
					iLocal_401 = 8192;
				}
				__LIB_7__::func_221(5);
			}
			break;
		case 5:
			func_1442();
			func_1443(uParam0, &(iLocal_244[6]), &(iLocal_22[9]), &(vLocal_664[29 /*3*/]));
			PED::SET_PED_RESET_FLAG(Global_35, 168, true);
			if (__LIB_11__::func_608())
			{
				bVar1 = true;
			}
			if (__LIB_0__::func_153(Global_35, 0, 1, 0) == joaat("WEAPON_KIT_BINOCULARS"))
			{
				if (PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_AIM")))
				{
					bVar1 = true;
				}
				else if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
				{
					bVar1 = true;
				}
			}
			if (bVar1)
			{
				__LIB_1__::func_561(&(vLocal_664[23 /*3*/]));
				__LIB_2__::func_259(&(vLocal_664[19 /*3*/]));
				__LIB_7__::func_221(6);
			}
			else if (__LIB_3__::func_332(vLocal_652, 1) > 5f)
			{
				func_374();
				__LIB_0__::func_769();
				__LIB_1__::func_561(&(vLocal_664[29 /*3*/]));
				__LIB_13__::func_870(0);
				func_352(uParam0, 4096, &iLocal_401, &(vLocal_664[4 /*3*/]));
				__LIB_2__::func_259(&(vLocal_664[23 /*3*/]));
				__LIB_0__::func_325(&(iLocal_244[6]));
				__LIB_7__::func_221(4);
			}
			break;
		case 6:
			func_1443(uParam0, &(iLocal_244[6]), &(iLocal_22[9]), &(vLocal_664[29 /*3*/]));
			if (__LIB_3__::func_332(vLocal_652, 1) > 5f)
			{
				__LIB_0__::func_325(&(iLocal_244[6]));
				PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), false, 0, -1, false);
				__LIB_2__::func_259(&(vLocal_664[19 /*3*/]));
				__LIB_7__::func_221(5);
				return 0;
			}
			if (__LIB_11__::func_608())
			{
				bVar2 = true;
			}
			if (__LIB_0__::func_153(Global_35, 0, 1, 0) == joaat("WEAPON_KIT_BINOCULARS"))
			{
				if (PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_AIM")))
				{
					bVar2 = true;
				}
				else if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				if (__LIB_1__::func_373(func_720(10), 1050253722 /* Float: 0.3f */, 1060320051 /* Float: 0.7f */, 0, 1061158912 /* Float: 0.75f */))
				{
					if (__LIB_9__::func_913(&(vLocal_664[19 /*3*/]), 2f))
					{
						__LIB_0__::func_325(&(iLocal_244[6]));
						func_374();
						__LIB_0__::func_769();
						__LIB_0__::func_172(iLocal_22[10]);
						__LIB_2__::func_259(&(vLocal_664[19 /*3*/]));
						__LIB_7__::func_221(7);
					}
				}
			}
			else if (__LIB_0__::func_153(Global_35, 0, 1, 0) != joaat("WEAPON_KIT_BINOCULARS"))
			{
				__LIB_0__::func_325(&(iLocal_244[6]));
				PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), false, 0, -1, false);
				__LIB_2__::func_259(&(vLocal_664[19 /*3*/]));
				__LIB_7__::func_221(5);
			}
			else if (__LIB_0__::func_899(&(vLocal_664[19 /*3*/])))
			{
				__LIB_2__::func_259(&(vLocal_664[19 /*3*/]));
			}
			break;
		case 7:
			func_354(&uLocal_261);
			if (__LIB_9__::func_913(&(vLocal_664[19 /*3*/]), fLocal_517))
			{
				func_355(4096);
				if (__LIB_13__::func_853())
				{
					__LIB_13__::func_879(&uLocal_278, "RH0_ARRIVE_NGHT", iLocal_262, Global_35, 0, 0, 1, 0);
				}
				else
				{
					__LIB_13__::func_879(&uLocal_278, "RH0_ARRIVE_DAY", iLocal_262, Global_35, 0, 0, 1, 0);
				}
				return 0;
			}
			if ((__LIB_8__::func_372(4096) && !AUDIO::_0x1ECC76792F661CF5("RH0_ARRIVE_NGHT")) && !AUDIO::_0x1ECC76792F661CF5("RH0_ARRIVE_DAY"))
			{
				if (__LIB_13__::func_853())
				{
					func_339(uParam0, 3, 5, 0);
				}
				else
				{
					func_339(uParam0, 4, 6, 0);
				}
				__LIB_1__::func_951(&iLocal_270);
				__LIB_7__::func_221(9);
			}
			break;
		case 9:
			func_354(&uLocal_261);
			__LIB_5__::func_438(&uLocal_636);
			return 1;
	}
	return 0;
}

bool func_883(var uParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	bool bVar8;
	switch (iLocal_48)
	{
		case 0:
			__LIB_1__::func_561(&(vLocal_664[5 /*3*/]));
			func_485(iLocal_262, 1);
			func_1295(iLocal_262, iLocal_263, 1065353216 /* Float: 1f */, 0);
			func_352(uParam0, 32, &iLocal_401, &(vLocal_664[4 /*3*/]));
			__LIB_13__::func_858(2);
			break;
		case 2:
			if (__LIB_0__::func_396(iLocal_262))
			{
				if (!PED::GET_PED_CONFIG_FLAG(iLocal_262, 167, true))
				{
					func_371(&iLocal_262, 167, 1);
				}
				if (__LIB_0__::func_394(Global_35, iLocal_264, 0))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_262, false);
					func_371(&iLocal_264, 365, 1);
					func_359(1);
					if (__LIB_12__::func_767(uParam0) < 1)
					{
						func_339(uParam0, 1, 2, 0);
					}
					__LIB_13__::func_858(3);
				}
				else
				{
					if (PED::IS_PED_ON_MOUNT(Global_35))
					{
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_264))
					{
						if (PED::IS_PED_ON_MOUNT(Global_35))
						{
						}
					}
					else
					{
						__LIB_13__::func_71(&iLocal_264, func_720(31), func_759(31), 1, 1, 1, 1);
					}
					_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_262, &uLocal_376);
					if (__LIB_18__::func_708(7f, 1, 0, 0))
					{
						__LIB_13__::func_879(&uLocal_278, "RH0_RIDE_MOUNT2", iLocal_262, Global_35, 0, 0, 1, 1);
					}
				}
			}
			else if (!__LIB_0__::func_163(iLocal_262, 1435919172))
			{
				func_1295(iLocal_262, iLocal_263, 1065353216 /* Float: 1f */, 0);
			}
			break;
		case 3:
			__LIB_11__::func_346(iLocal_262, &(vLocal_664[30 /*3*/]));
			if (__LIB_18__::func_708(-3f, 1, 0, 0))
			{
				__LIB_13__::func_879(&uLocal_278, "RH0_RIDE_MOUNT3", iLocal_262, Global_35, 0, 0, 1, 1);
				func_915(16);
				__LIB_3__::func_286(iLocal_262);
				__LIB_13__::func_858(4);
			}
			break;
		case 4:
			func_1449();
			__LIB_11__::func_346(iLocal_262, &(vLocal_664[30 /*3*/]));
			__LIB_11__::func_525(iLocal_262, iLocal_264, PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX()));
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_264))
			{
				if (PED::IS_PED_ON_MOUNT(Global_35))
				{
				}
			}
			if (__LIB_0__::func_394(Global_35, iLocal_264, 0))
			{
				func_352(uParam0, 16, &iLocal_401, &(vLocal_664[4 /*3*/]));
				func_353(&iLocal_262, &iLocal_275);
				__LIB_13__::func_858(5);
			}
			else if (__LIB_18__::func_708(7f, 1, 0, 0))
			{
				__LIB_13__::func_879(&uLocal_278, "RH0_RIDE_MOUNT2", iLocal_262, Global_35, 0, 0, 1, 1);
			}
			break;
		case 5:
			func_1451(iLocal_262);
			func_1451(Global_35);
			func_1449();
			__LIB_11__::func_346(iLocal_262, &(vLocal_664[30 /*3*/]));
			__LIB_11__::func_525(iLocal_262, iLocal_264, PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX()));
			if (func_1452(40f) || __LIB_3__::func_332(func_720(9), 1) < 105f)
			{
				__LIB_3__::func_456(iLocal_262);
				func_1453();
				__LIB_1__::func_480(&iLocal_262);
				__LIB_2__::func_480(&uLocal_543, 0, 0, 1, 0);
				__LIB_11__::func_632(7);
				func_371(&iLocal_262, 167, 0);
				if (__LIB_0__::func_481(0))
				{
					__LIB_3__::func_732(0);
					__LIB_13__::func_879(&uLocal_278, "RH0_RIDE_HERE", iLocal_262, Global_35, 0, 0, 1, 1);
				}
				if (__LIB_13__::func_853())
				{
					func_339(uParam0, 2, 3, 0);
					__LIB_13__::func_17(&(uParam0->f_206), func_350(4), 0);
				}
				else
				{
					func_339(uParam0, 2, 4, 0);
					__LIB_13__::func_17(&(uParam0->f_206), func_350(0), 0);
				}
				func_485(iLocal_262, 0);
				iLocal_22[10] = VOLUME::_0x0EB78C2B156635B1(joaat("VOLSPHERE"), func_191(10), func_192(10), func_193(10));
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_262, true);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				vVar2 = { ENTITY::GET_ENTITY_COORDS(iLocal_262, true, false) };
				if (TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(func_203(), vVar2, &iVar1))
				{
					if (TASK::WAYPOINT_RECORDING_GET_COORD(func_203(), iVar1, &vVar5))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar5, vVar2, true) > 50f)
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar5, 1.5f, -1, 0.25f, 0, 40000f);
						}
					}
				}
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, func_203(), 0, 25608, 12, 0, 0, -1);
				__LIB_1__::func_474(iLocal_262, &iVar0, 0, 0, 1, 1);
				__LIB_13__::func_858(6);
			}
			else if (!PED::IS_PED_GROUP_MEMBER(iLocal_262, iLocal_275, 0))
			{
				__LIB_13__::func_858(3);
			}
			if (!__LIB_0__::func_396(iLocal_262) && !func_1456(&iLocal_262, 1868526510))
			{
				func_1457(&iLocal_262, &iLocal_263);
			}
			if (!__LIB_0__::func_394(Global_35, iLocal_264, 0))
			{
				func_352(uParam0, 32, &iLocal_401, &(vLocal_664[4 /*3*/]));
				__LIB_2__::func_259(&(vLocal_664[4 /*3*/]));
				__LIB_13__::func_858(4);
			}
			break;
		case 6:
			func_1451(iLocal_262);
			func_1451(Global_35);
			bVar8 = __LIB_9__::func_204(Global_35, func_720(6), &(vLocal_664[5 /*3*/]), 20f, 15f, 12f, 11f, 1082130432 /* Float: 4f */, 0, 0, 1, 1, 1);
			if (__LIB_8__::func_406(128))
			{
				if (__LIB_8__::func_406(256) || __LIB_3__::func_332(func_720(23), 1) < 15f)
				{
					func_300(uParam0, 1);
					__LIB_13__::func_858(7);
				}
				else
				{
					func_1458();
					if (!__LIB_0__::func_163(iLocal_262, -875674219) && !__LIB_0__::func_163(iLocal_262, 242628503))
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_262, Global_35, -1, -1f, -1f, -1f);
					}
				}
			}
			else
			{
				__LIB_9__::func_204(iLocal_262, func_720(6), &(vLocal_664[6 /*3*/]), 35f, 15f, 8f, 6f, 1082130432 /* Float: 4f */, 0, 0, 1, 1, 1);
				if (!func_920(2048))
				{
					if (__LIB_0__::func_94(iLocal_262, func_720(6), 1) < 10f)
					{
						__LIB_3__::func_732(0);
						__LIB_13__::func_879(&uLocal_278, "RH0_RIDE_LOOK", iLocal_262, Global_35, 0, 0, 1, 1);
						func_718(2048);
					}
				}
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_262, func_203()))
				{
					if (TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_262) > 19)
					{
						func_370(&iLocal_262, 1);
						func_496(&iLocal_262, 0, 1065353216 /* Float: 1f */);
						func_1459(&iLocal_262);
						__LIB_13__::func_852(128);
					}
				}
				if (__LIB_0__::func_396(iLocal_262))
				{
					if (__LIB_3__::func_514(&(vLocal_664[6 /*3*/]), 2f))
					{
						func_370(&iLocal_262, 1);
						func_496(&iLocal_262, 0, 1065353216 /* Float: 1f */);
						func_1459(&iLocal_262);
						__LIB_13__::func_852(128);
					}
				}
				if (!__LIB_8__::func_406(128))
				{
					if (!PED::IS_PED_ON_MOUNT(iLocal_262))
					{
						func_370(&iLocal_262, 1);
						func_496(&iLocal_262, 0, 1065353216 /* Float: 1f */);
						func_1459(&iLocal_262);
						__LIB_13__::func_852(128);
					}
				}
			}
			if (!__LIB_8__::func_406(256))
			{
				if (bVar8 || (!__LIB_0__::func_394(Global_35, iLocal_264, 0) && __LIB_3__::func_332(func_720(6), 1) < 11f))
				{
					func_371(&iLocal_264, 136, 1);
					func_352(uParam0, 128, &iLocal_401, &(vLocal_664[4 /*3*/]));
					func_495(&iLocal_264, 0);
					__LIB_13__::func_852(256);
				}
			}
			break;
		case 7:
			func_1451(iLocal_262);
			func_1451(Global_35);
			func_1460(1.25f);
			__LIB_9__::func_204(Global_35, func_720(6), &(vLocal_664[5 /*3*/]), 20f, 15f, 12f, 11f, 1082130432 /* Float: 4f */, 0, 0, 1, 1, 1);
			if (!PED::IS_PED_ON_MOUNT(iLocal_262))
			{
				func_352(uParam0, 128, &iLocal_401, &(vLocal_664[4 /*3*/]));
				func_371(&iLocal_262, 375, 1);
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_262, func_203(), 0, 25608, -1, 0, 0, -1);
				__LIB_13__::func_858(9);
			}
			break;
		case 9:
			__LIB_9__::func_204(Global_35, func_720(6), &(vLocal_664[11 /*3*/]), 20f, 15f, 12f, 11f, 1082130432 /* Float: 4f */, 0, 0, 1, 1, 1);
			func_1451(iLocal_262);
			func_1451(Global_35);
			if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true))
			{
				func_1458();
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_262, -875674219, true) != 1)
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_262, Global_35, -1, -1f, -1f, -1f);
				}
			}
			else
			{
				func_378(1);
				func_359(2);
				func_371(&iLocal_264, 136, 1);
				__LIB_1__::func_731(&uLocal_636);
				__LIB_13__::func_858(10);
			}
			break;
		case 10:
			__LIB_9__::func_204(Global_35, func_720(6), &(vLocal_664[5 /*3*/]), 20f, 15f, 12f, 11f, 1082130432 /* Float: 4f */, 0, 0, 1, 1, 1);
			if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_262, 658540077, true) != 1)
			{
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_262, func_203(), 0, 25608, -1, 0, 0, -1);
			}
			if (!func_920(64))
			{
				if (__LIB_18__::func_708(-2f, 1, 0, 0))
				{
					__LIB_13__::func_879(&uLocal_278, "RH0_CRD_SCPE0", iLocal_262, Global_35, 0, 0, 1, 0);
					func_718(64);
					func_915(128);
				}
			}
			if (__LIB_0__::func_94(iLocal_262, func_720(8), 1) < 10f)
			{
				__LIB_13__::func_858(12);
				__LIB_13__::func_879(&uLocal_278, "RH0_CRD_SCPE1", iLocal_262, Global_35, 0, 0, 1, 0);
			}
			break;
		case 12:
			__LIB_9__::func_204(Global_35, func_720(6), &(vLocal_664[5 /*3*/]), 20f, 15f, 12f, 11f, 1082130432 /* Float: 4f */, 0, 0, 1, 1, 1);
			return true;
	}
	return false;
}

bool func_892()
{
	if (__LIB_9__::func_748() && __LIB_9__::func_747())
	{
		return true;
	}
	return false;
}

bool func_893()
{
	return __LIB_0__::func_768(1, 2048);
}

void func_894(var uParam0)
{
	if (__LIB_0__::func_768(1, 1048576))
	{
		__LIB_6__::func_660(1, 1048576);
		__LIB_13__::func_89(uParam0, "RHMR0_O_STASH", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
	}
	else if (__LIB_0__::func_768(1, 2097152))
	{
		__LIB_6__::func_660(1, 2097152);
		__LIB_13__::func_89(uParam0, "RHMR0_O_GET_BARN", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
	}
	else if (__LIB_0__::func_768(1, 4194304))
	{
		__LIB_6__::func_660(1, 4194304);
		__LIB_13__::func_89(uParam0, "RHMR0_O_MEET_BARN", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
	}
	else if (__LIB_0__::func_768(1, 8388608))
	{
		__LIB_6__::func_660(1, 8388608);
		__LIB_13__::func_89(uParam0, "RHMR0_O_SNEAK", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
	}
	else if (__LIB_0__::func_768(1, 16777216))
	{
		__LIB_6__::func_660(1, 16777216);
		__LIB_13__::func_89(uParam0, "RHMR0_O_SEARCH", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
	}
	else if (__LIB_0__::func_768(1, 33554432))
	{
		__LIB_6__::func_660(1, 33554432);
		__LIB_13__::func_89(uParam0, "RHMR0_O_LEAVE", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
	}
	else if (__LIB_0__::func_768(1, 67108864))
	{
		__LIB_6__::func_660(1, 67108864);
		__LIB_13__::func_89(uParam0, "RHMR0_O_ROB", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
	}
	else if (__LIB_0__::func_768(1, 134217728))
	{
		__LIB_6__::func_660(1, 134217728);
		__LIB_13__::func_89(uParam0, "RHMR0_O_WAGON", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
	}
	else if (__LIB_0__::func_768(1, 268435456))
	{
		__LIB_6__::func_660(1, 268435456);
		__LIB_13__::func_89(uParam0, "RHMR0_O_FOLLOW_WGN", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
	}
	else if (__LIB_0__::func_768(1, 536870912))
	{
		__LIB_6__::func_660(1, 536870912);
		__LIB_13__::func_89(uParam0, "RHMR0_O_KILL", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
	}
	else if (__LIB_0__::func_768(1, 1073741824 /* Float: 2f */))
	{
		__LIB_6__::func_660(1, 1073741824 /* Float: 2f */);
		__LIB_13__::func_89(uParam0, "RHMR0_O_HOSEA", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
	}
}

int func_895(var uParam0, int* iParam1, int iParam2, var uParam3)
{
	if (func_893())
	{
		if (*iParam2 != 64)
		{
			func_352(uParam0, 64, iParam2, uParam3);
			func_915(64);
			__LIB_3__::func_652(func_720(2), iParam1, 408396114, 0, "RHMR0_BLIP_EMERALD_RANCH", -1878373110);
			return 1;
		}
	}
	else if (*iParam2 == 64)
	{
		func_834(*iParam2);
		__LIB_0__::func_325(iParam1);
		*iParam2 = 0;
	}
	return 0;
}

bool func_896(int iParam0)
{
	return (uLocal_16 && iParam0) != 0;
}

void func_897()
{
	if (SCRIPTS::_0x7409669C5ED50144(joaat("CHAL_CTX_CUSTOM_1")))
	{
	}
	else
	{
		SCRIPTS::_0x7D654266025E921B(joaat("CHAL_CTX_CUSTOM_1"));
	}
}

void func_898(int iParam0)
{
	if (func_896(iParam0))
	{
		return;
	}
	uLocal_16 = (uLocal_16 || iParam0);
}

bool func_899()
{
	return __LIB_0__::func_770(1, 262144);
}

void func_909(int iParam0)
{
	if (!__LIB_14__::func_166(iParam0))
	{
		__LIB_1__::func_683(&iLocal_20, iParam0);
	}
}

void func_910(int iParam0, vector3 vParam1, float fParam4, bool bParam5)
{
	*iParam0 = func_1258(5, 1, 1, vParam1.x, vParam1.y, vParam1.z, fParam4, bParam5, 1, 0, 0, 0, 0, -268604689, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
}

void func_914(var uParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(iLocal_262))
	{
		return;
	}
	if (256 != iLocal_401)
	{
		func_352(uParam0, 256, &iLocal_401, &(vLocal_664[4 /*3*/]));
	}
	if (__LIB_2__::func_118(iLocal_262, 1, 1) > 20f)
	{
		return;
	}
	switch (iLocal_56)
	{
		case 0:
			if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iLocal_262))
			{
				__LIB_13__::func_879(&uLocal_278, "RH0_RTRN_WAIT1", iLocal_262, Global_35, 0, 0, 1, 1);
				__LIB_11__::func_633(1);
			}
			break;
		case 1:
			if (!__LIB_3__::func_514(&(vLocal_664[34 /*3*/]), 8f))
			{
				if (!__LIB_0__::func_899(&(vLocal_664[34 /*3*/])))
				{
					__LIB_2__::func_259(&(vLocal_664[34 /*3*/]));
				}
				return;
			}
			if (ENTITY::GET_ENTITY_SPEED(Global_35) > 0f)
			{
				__LIB_13__::func_879(&uLocal_278, "RH0_RTRN_WAIT2", iLocal_262, Global_35, 0, 0, 1, 1);
				__LIB_11__::func_633(2);
				__LIB_2__::func_259(&(vLocal_664[34 /*3*/]));
			}
			break;
		case 2:
			if (!__LIB_3__::func_514(&(vLocal_664[34 /*3*/]), 8f))
			{
				if (!__LIB_0__::func_899(&(vLocal_664[34 /*3*/])))
				{
					__LIB_2__::func_259(&(vLocal_664[34 /*3*/]));
				}
				return;
			}
			if (ENTITY::GET_ENTITY_SPEED(Global_35) > 0f)
			{
				__LIB_13__::func_879(&uLocal_278, "RH0_RTRN_WAIT3", iLocal_262, Global_35, 0, 0, 1, 1);
				__LIB_11__::func_633(3);
			}
			break;
		case 3:
			break;
	}
}

void func_915(int iParam0)
{
	if (func_1426(iParam0))
	{
		return;
	}
	iLocal_253 = (iLocal_253 || iParam0);
}

void func_916(var uParam0)
{
	if ((ENTITY::IS_ENTITY_DEAD(iLocal_262) || func_404(4)) || (__LIB_2__::func_118(iLocal_262, 1, 1) > 10.5f && !__LIB_8__::func_406(65536)))
	{
		return;
	}
	if (__LIB_2__::func_118(iLocal_14, 1, 1) > 50f)
	{
		__LIB_13__::func_852(131072);
	}
	if (__LIB_1__::func_372(iLocal_262, 0) != joaat("WEAPON_UNARMED"))
	{
		if (!__LIB_0__::func_163(iLocal_262, 716706914) && !__LIB_0__::func_163(iLocal_262, 355471868))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(iLocal_262, joaat("WEAPON_UNARMED"), false, 0, false, false);
			TASK::TASK_SWAP_WEAPON(iLocal_262, 1, 1, 0, 0);
			return;
		}
	}
	if (__LIB_0__::func_163(iLocal_262, 716706914))
	{
		return;
	}
	if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iLocal_262) || AUDIO::_0x54B187F111D9C6F8(iLocal_262, 0))
	{
		return;
	}
	switch (iLocal_55)
	{
		case 0:
			STREAMING::REQUEST_ANIM_DICT(__LIB_13__::func_871());
			__LIB_11__::func_625(1);
			break;
		case 1:
			if (STREAMING::HAS_ANIM_DICT_LOADED(__LIB_13__::func_871()))
			{
				if (__LIB_13__::func_872())
				{
					__LIB_11__::func_625(2);
				}
				else
				{
					__LIB_11__::func_625(6);
				}
			}
			break;
		case 2:
			if (iLocal_62 == 15)
			{
				__LIB_11__::func_625(6);
			}
			else if (__LIB_18__::func_708(4f, 1, 0, 0) || __LIB_8__::func_406(32))
			{
				__LIB_13__::func_861(32);
				func_352(uParam0, 8, &iLocal_401, &(vLocal_664[4 /*3*/]));
				func_1472(&iLocal_262, __LIB_13__::func_871(), func_1471(&iLocal_262));
				__LIB_13__::func_879(&uLocal_278, "RH0_RTRN_QUICK2", iLocal_262, Global_35, 0, 0, 1, 1);
				func_915(8);
				__LIB_11__::func_625(3);
			}
			break;
		case 3:
			if (iLocal_62 == 15)
			{
				__LIB_11__::func_625(6);
			}
			else if (__LIB_18__::func_708(4f, 1, 0, 0) || __LIB_8__::func_406(32))
			{
				if (__LIB_2__::func_343(Global_35, iLocal_14, 0))
				{
					__LIB_13__::func_861(32);
					func_352(uParam0, 8, &iLocal_401, &(vLocal_664[4 /*3*/]));
					func_1472(&iLocal_262, __LIB_13__::func_871(), func_1471(&iLocal_262));
					__LIB_13__::func_879(&uLocal_278, "RH0_RTRN_QUICK3", iLocal_262, Global_35, 0, 0, 1, 1);
					__LIB_11__::func_625(4);
				}
				else
				{
					__LIB_11__::func_625(4);
				}
			}
			break;
		case 4:
			if (iLocal_62 == 15)
			{
				__LIB_11__::func_625(6);
			}
			else if (__LIB_18__::func_708(4f, 1, 0, 0) || __LIB_8__::func_406(32))
			{
				__LIB_13__::func_861(32);
				func_352(uParam0, 8, &iLocal_401, &(vLocal_664[4 /*3*/]));
				func_1472(&iLocal_262, __LIB_13__::func_871(), func_1471(&iLocal_262));
				__LIB_13__::func_879(&uLocal_278, "RH0_RTRN_QUICK4", iLocal_262, Global_35, 0, 0, 1, 1);
				__LIB_11__::func_625(5);
			}
			break;
		case 5:
			if (iLocal_62 == 15)
			{
				__LIB_11__::func_625(6);
			}
			break;
		case 6:
			if (__LIB_18__::func_708(4f, 1, 0, 0) || __LIB_8__::func_406(32))
			{
				__LIB_13__::func_861(32);
				func_352(uParam0, 8, &iLocal_401, &(vLocal_664[4 /*3*/]));
				func_1472(&iLocal_262, __LIB_13__::func_871(), func_1471(&iLocal_262));
				__LIB_13__::func_879(&uLocal_278, "RH0_RTRN_WGN1", iLocal_262, Global_35, 0, 0, 1, 1);
				func_915(8);
				__LIB_11__::func_625(7);
			}
			break;
		case 7:
			if (__LIB_18__::func_708(4f, 1, 0, 0) || __LIB_8__::func_406(32))
			{
				__LIB_13__::func_861(32);
				func_352(uParam0, 8, &iLocal_401, &(vLocal_664[4 /*3*/]));
				func_1472(&iLocal_262, __LIB_13__::func_871(), func_1471(&iLocal_262));
				__LIB_13__::func_879(&uLocal_278, "RH0_RTRN_WGN2", iLocal_262, Global_35, 0, 0, 1, 1);
				__LIB_11__::func_625(8);
			}
			break;
		case 8:
			if (__LIB_18__::func_708(4f, 1, 0, 0) || __LIB_8__::func_406(32))
			{
				__LIB_13__::func_861(32);
				func_352(uParam0, 8, &iLocal_401, &(vLocal_664[4 /*3*/]));
				func_1472(&iLocal_262, __LIB_13__::func_871(), func_1471(&iLocal_262));
				__LIB_13__::func_879(&uLocal_278, "RH0_RTRN_WGN3", iLocal_262, Global_35, 0, 0, 1, 1);
				__LIB_11__::func_625(9);
			}
			break;
		case 9:
			func_352(uParam0, 8, &iLocal_401, &(vLocal_664[4 /*3*/]));
			break;
		case 10:
			func_352(uParam0, 8, &iLocal_401, &(vLocal_664[4 /*3*/]));
			break;
	}
}

void func_917(bool bParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(iLocal_262))
	{
		return;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_519))
	{
		if (iLocal_53 < 12)
		{
			__LIB_8__::func_875(iLocal_262, sLocal_519, 0, 1);
		}
	}
	if (PED::IS_PED_IN_COMBAT(iLocal_262, 0))
	{
		return;
	}
	switch (iLocal_53)
	{
		case 0:
			if (!bParam0)
			{
				__LIB_11__::func_640(2);
			}
			break;
		case 2:
			if (func_1474() == 2 && !func_920(16384))
			{
				if (__LIB_0__::func_899(&(vLocal_664[14 /*3*/])))
				{
					if (__LIB_1__::func_583(&(vLocal_664[14 /*3*/])) > 3f)
					{
						func_718(16384);
						__LIB_1__::func_561(&(vLocal_664[14 /*3*/]));
					}
					else
					{
						return;
					}
				}
				else
				{
					__LIB_2__::func_259(&(vLocal_664[14 /*3*/]));
					return;
				}
			}
			if (func_1474() > 0 || func_1475() > 0)
			{
				__LIB_11__::func_640(3);
			}
			else if (func_1476())
			{
				__LIB_11__::func_640(5);
			}
			else if (func_1477())
			{
				__LIB_11__::func_640(4);
			}
			else
			{
				__LIB_11__::func_640(6);
			}
			break;
		case 3:
			if (!func_920(32768))
			{
				if (func_1478(&(vLocal_664[9 /*3*/]), 1073741824 /* Float: 2f */, 0))
				{
					if (__LIB_13__::func_872() || __LIB_0__::func_770(1, 1024))
					{
						if (func_1474() == 2)
						{
							func_1479("RH0_RTRN_KLL1");
						}
						else
						{
							func_1479("RH0_RTRN_CMBT1");
						}
					}
					else if (func_1474() == 1)
					{
						func_1479("RH0_RTRN_STKIL1");
					}
					else if (func_1474() == 2)
					{
						func_1479("RH0_RTRN_STKIL2");
					}
					else if (func_1475() == 1)
					{
						func_1479("RH0_RTRN_STKO1");
					}
					else if (func_1475() == 2)
					{
						func_1479("RH0_RTRN_STKO2");
					}
					func_718(32768);
					if (!__LIB_13__::func_873() && !func_1481())
					{
						__LIB_11__::func_640(10);
					}
				}
			}
			else if (!func_920(262144))
			{
				if (func_1478(&(vLocal_664[9 /*3*/]), 10f, 0))
				{
					func_718(262144);
					func_1479("RH0_RTRN_ROB1");
				}
			}
			else if (!func_920(524288))
			{
				if (func_1478(&(vLocal_664[9 /*3*/]), 0f, 0))
				{
					if (!__LIB_13__::func_873() && func_1481())
					{
						func_1479("RH0_RTRN_ROB2d");
					}
					else if (__LIB_13__::func_874())
					{
						func_1479("RH0_RTRN_ROB2a");
					}
					else if (func_1483())
					{
						func_1479("RH0_RTRN_ROB2b");
					}
					else
					{
						func_1479("RH0_RTRN_ROB2c");
					}
					func_718(524288);
					__LIB_11__::func_640(10);
				}
			}
			break;
		case 4:
			if (!func_920(32768))
			{
				if (func_1478(&(vLocal_664[9 /*3*/]), 1073741824 /* Float: 2f */, 0))
				{
					func_1479("RH0_RTRN_CMBT1");
					func_718(32768);
					if (!__LIB_13__::func_873() && !func_1481())
					{
						__LIB_11__::func_640(10);
					}
				}
			}
			else if (!func_920(262144))
			{
				if (func_1478(&(vLocal_664[9 /*3*/]), 10f, 0))
				{
					func_718(262144);
					func_1479("RH0_RTRN_ROB1");
				}
			}
			else if (!func_920(524288))
			{
				if (func_1478(&(vLocal_664[9 /*3*/]), 0f, 0))
				{
					if (!__LIB_13__::func_873() && func_1481())
					{
						func_1479("RH0_RTRN_ROB2d");
					}
					else if (__LIB_13__::func_874())
					{
						func_1479("RH0_RTRN_ROB2a");
					}
					else if (func_1483())
					{
						func_1479("RH0_RTRN_ROB2b");
					}
					else
					{
						func_1479("RH0_RTRN_ROB2c");
					}
					func_718(524288);
					__LIB_11__::func_640(10);
				}
			}
			break;
		case 5:
			if (!func_920(32768))
			{
				if (func_1478(&(vLocal_664[9 /*3*/]), 1073741824 /* Float: 2f */, 0))
				{
					if (func_1484())
					{
						func_1479("RH0_RTRN_STOLE2");
					}
					else if (func_1485())
					{
						func_1479("RH0_RTRN_STOLE4");
					}
					else if (func_1486())
					{
						func_1479("RH0_RTRN_STOLE3");
					}
					else
					{
						func_1479("RH0_RTRN_SPOT");
					}
					func_718(32768);
					if (!__LIB_13__::func_873() && !func_1481())
					{
						__LIB_11__::func_640(10);
					}
				}
			}
			else if (!func_920(65536))
			{
				if (func_1478(&(vLocal_664[9 /*3*/]), 4f, 0))
				{
					func_718(65536);
					func_1479("RH0_RTRN_ROB1");
				}
			}
			else if (!func_920(131072))
			{
				if (func_1478(&(vLocal_664[9 /*3*/]), 0f, 0))
				{
					if (!__LIB_13__::func_873() && func_1481())
					{
						func_1479("RH0_RTRN_ROB2d");
					}
					else if (__LIB_13__::func_874())
					{
						func_1479("RH0_RTRN_ROB2a");
					}
					else if (func_1483())
					{
						func_1479("RH0_RTRN_ROB2b");
					}
					else
					{
						func_1479("RH0_RTRN_ROB2c");
					}
					func_718(131072);
					__LIB_11__::func_640(10);
				}
			}
			break;
		case 6:
			if (!func_920(32768))
			{
				if (func_1478(&(vLocal_664[9 /*3*/]), 1073741824 /* Float: 2f */, 0))
				{
					if (__LIB_13__::func_860())
					{
						func_1479("RH0_RTRN_STLTH1");
						func_718(32768);
					}
					else
					{
						func_1479("RH0_RTRN_STLTH2");
						func_718(32768);
					}
					if (!__LIB_13__::func_873() && !func_1481())
					{
						func_718(65536);
						func_718(131072);
						__LIB_11__::func_640(10);
					}
				}
			}
			else if (!func_920(65536))
			{
				if (func_1478(&(vLocal_664[9 /*3*/]), 1073741824 /* Float: 2f */, 0))
				{
					func_718(65536);
					func_1479("RH0_RTRN_ROB1");
				}
			}
			else if (!func_920(131072))
			{
				if (func_1478(&(vLocal_664[9 /*3*/]), 0f, 0))
				{
					if (!__LIB_13__::func_873() && func_1481())
					{
						func_1479("RH0_RTRN_ROB2d");
					}
					else if (__LIB_13__::func_874())
					{
						func_1479("RH0_RTRN_ROB2a");
					}
					else if (func_1483())
					{
						func_1479("RH0_RTRN_ROB2b");
					}
					else
					{
						func_1479("RH0_RTRN_ROB2c");
					}
					func_718(131072);
					__LIB_11__::func_640(10);
				}
			}
			break;
		case 10:
			if (func_1478(&(vLocal_664[9 /*3*/]), 2f, 0))
			{
				func_1479("RH0_DRIVEBACK");
				__LIB_11__::func_640(11);
			}
			break;
		case 11:
			if (func_1478(&(vLocal_664[9 /*3*/]), 4f, 0))
			{
				func_1479("RH0_RTRN_TRNKT");
				__LIB_11__::func_640(13);
			}
			break;
		case 12:
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_519))
			{
				AUDIO::RESTART_SCRIPTED_CONVERSATION(sLocal_519);
			}
			__LIB_9__::func_773(&(vLocal_664[9 /*3*/]));
			__LIB_11__::func_640(iLocal_54);
			break;
		case 13:
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_519) && !__LIB_1__::func_322("RH0_RTRN_TRNKT"))
			{
				sLocal_519 = 0;
			}
			break;
	}
}

bool func_920(int iParam0)
{
	return __LIB_0__::func_27(iLocal_19, iParam0);
}

void func_922()
{
	AUDIO::_0x660A8F876DF1D4F8(12);
}

bool func_924()
{
	if (__LIB_0__::func_770(1, 1024))
	{
		if ((__LIB_9__::func_748() || __LIB_13__::func_877()) && (__LIB_9__::func_747() || __LIB_13__::func_878()))
		{
			return true;
		}
	}
	return false;
}

void func_929(int iParam0, int iParam1, var uParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		__LIB_2__::func_22(uParam2, *iParam0);
		__LIB_1__::func_401(uParam2, 1);
		__LIB_2__::func_830(uParam2, 1);
		__LIB_1__::func_413(uParam2, 0);
		__LIB_1__::func_398(uParam2, 0);
		__LIB_1__::func_406(uParam2, 0);
		__LIB_8__::func_732(uParam2, 0);
		__LIB_2__::func_903(uParam2, 1);
		__LIB_2__::func_906(uParam2, 75);
		PED::SET_PED_HEARING_RANGE(*iParam0, 75f);
		PED::SET_PED_SEEING_RANGE(*iParam0, 50f);
		__LIB_2__::func_967(uParam2, *iParam0, *iParam1, 0);
	}
}

void func_937(var uParam0)
{
	if (!__LIB_2__::func_343(iLocal_262, iLocal_14, 0))
	{
		func_352(uParam0, 256, &iLocal_401, &(vLocal_664[4 /*3*/]));
	}
	else if (!__LIB_2__::func_343(Global_35, iLocal_14, 0))
	{
		func_352(uParam0, 8, &iLocal_401, &(vLocal_664[4 /*3*/]));
	}
	else
	{
		func_352(uParam0, 64, &iLocal_401, &(vLocal_664[4 /*3*/]));
	}
}

Vector3 func_939()
{
	return 1410.129f, 273.2254f, 88.53571f;
}

void func_940(int iParam0, vector3 vParam1, float fParam4)
{
	if (ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		return;
	}
	if (TASK::GET_SCRIPT_TASK_STATUS(*iParam0, -76381094, true) == 1)
	{
		PED::_0xF1C03A5352243A30(*iParam0);
	}
	func_959(*iParam0, vParam1, fParam4, 2, 1073741824 /* Float: 2f */);
	TASK::TASK_STAND_STILL(*iParam0, -1);
}

void func_942(int iParam0, char* sParam1, int iParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam2))
	{
		return;
	}
	else if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(*iParam0, true, false))
	{
		return;
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(*iParam0, sParam1, iParam2, 0);
}

void func_944(int iParam0)
{
	if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(*iParam0, true, false))
	{
		ANIMSCENE::START_ANIM_SCENE(*iParam0);
	}
}

void func_946()
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID());
	if (PED::DOES_GROUP_EXIST(iVar0))
	{
		PED::SET_GROUP_FORMATION(iVar0, 5);
		PED::ADD_CUSTOM_FORMATION_LOCATION(iVar0, -3f, -10f, 0f, 0);
		PED::ADD_CUSTOM_FORMATION_LOCATION(iVar0, 3f, -13f, 0f, 1);
		PED::SET_GROUP_FORMATION_SPACING(iVar0, 10f, -1f, -1f);
		PED::_0xD5BD1B5318A81994(iVar0, 0);
	}
}

void func_947(int iParam0, int iParam1)
{
	int iVar0;
	if (ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		return;
	}
	iVar0 = PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID());
	if (PED::DOES_GROUP_EXIST(iVar0))
	{
		if (!PED::IS_PED_GROUP_MEMBER(*iParam0, iVar0, 0))
		{
			TASK::CLEAR_PED_TASKS(*iParam0, true, false);
			PED::SET_PED_CONFIG_FLAG(*iParam0, 279, true);
			PED::SET_PED_CONFIG_FLAG(*iParam0, 280, true);
			PED::SET_PED_AS_GROUP_MEMBER(*iParam0, iVar0);
		}
		if (PED::IS_PED_GROUP_MEMBER(*iParam0, iVar0, 0))
		{
			PED::_0x0E9E95FDEDCC9D35(*iParam0, iParam1, 0);
		}
	}
}

void func_949(int iParam0, vector3 vParam1, float fParam4, float fParam5)
{
	int iVar0;
	if (!__LIB_2__::func_1(*iParam0, 0, 1) || __LIB_0__::func_86(vParam1))
	{
		return;
	}
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vParam1, fParam4, -1, fParam5, 0, 40000f);
	TASK::TASK_STAND_STILL(0, -1);
	__LIB_1__::func_474(*iParam0, &iVar0, 0, 0, 1, 1);
}

int func_953(int iParam0, int* iParam1, var uParam2)
{
	if (!func_751(iParam0) || __LIB_8__::func_372(2097152))
	{
		return 1;
	}
	if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, *iParam0))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
		__LIB_0__::func_569(joaat("MOTIONSTATE_WALK"), 2500, 0, 1, 1, 0, 0, 0);
		func_958();
		func_489(iParam1, 1);
		func_961(uParam2);
		func_355(2097152);
		return 1;
	}
	return 0;
}

int func_954(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	if (ENTITY::IS_ENTITY_DEAD(*iParam0) || __LIB_8__::func_372(4194304))
	{
		return 1;
	}
	else if (!func_751(iParam2) || !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(*iParam0, *iParam2))
	{
		func_355(4194304);
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_720(33), 1f, -1, 0.25f, 0, 40000f);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
		__LIB_1__::func_474(*iParam0, &iVar0, 0, 0, 1, 1);
		return 1;
	}
	if (func_716(iParam2, 0.9259f))
	{
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(*iParam2, "HoseaMatthews", *iParam0);
		func_355(4194304);
		TASK::OPEN_SEQUENCE_TASK(&iVar1);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_720(33), 1f, -1, 0.25f, 0, 40000f);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
		__LIB_1__::func_474(*iParam0, &iVar1, 0, 0, 1, 1);
		return 1;
	}
	return 0;
}

void func_956(int iParam0, int iParam1, var uParam2, vector3 vParam3, char* sParam6, int iParam7, int iParam8, float fParam9, float fParam10, int iParam11, float fParam12, float fParam13, int iParam14, bool bParam15, int iParam16, int iParam17, int iParam18, bool bParam19)
{
	struct<10> Var0;
	struct<10> Var11;
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam2->f_1))
	{
		TASK::TASK_SCRIPTED_ANIMATION(iParam0, uParam2);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
	{
		if (iParam7 == 0)
		{
			iParam7 = 14;
		}
		Var0 = 2;
		Var0.f_4 = sParam6;
		Var0.f_5 = iParam7;
		Var0.f_7 = iParam16;
		Var0.f_9 = iParam17;
		TASK::TASK_LEAD_AND_CONVERSE(iParam0, iParam1, &Var0, iParam8, fParam9, fParam10, iParam11, fParam13, fParam12);
	}
	else if (!__LIB_0__::func_138(vParam3, 0f, 0f, 0f))
	{
		Var11 = 0;
		Var11.f_1 = { vParam3 };
		Var11.f_7 = iParam16;
		Var11.f_9 = iParam17;
		Var11.f_8 = iParam18;
		TASK::TASK_LEAD_AND_CONVERSE(iParam0, iParam1, &Var11, iParam8, fParam9, fParam10, iParam11, fParam13, fParam12);
	}
	if (bParam15)
	{
		PED::_SET_PED_CROUCH_MOVEMENT(iParam0, false, 0, false);
	}
	if (bParam19)
	{
		__LIB_1__::func_735(iParam0, iParam1, iParam14);
	}
}

void func_958()
{
	__LIB_1__::func_948(-308659358, 1, 0, 0, 0, 0, 1, 0);
	__LIB_1__::func_948(-66987983, 1, 0, 0, 0, 0, 1, 0);
	__LIB_1__::func_948(-1304772442, 1, 0, 0, 0, 0, 1, 0);
	__LIB_1__::func_948(-1924401463, 1, 0, 0, 0, 0, 1, 0);
}

void func_959(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_959(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_959(iVar2, vParam1, fParam4, iParam5, iParam6);
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

void func_961(var uParam0)
{
	__LIB_3__::func_157(uParam0[0 /*17*/], "GREET_POS", 0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_3__::func_157(uParam0[1 /*17*/], "GREET_NEG", 0, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	__LIB_2__::func_526(uParam0, 1, 0);
	__LIB_3__::func_462(uParam0, 0);
}

void func_963(int iParam0, int* iParam1, var uParam2, var uParam3, int iParam4)
{
	int iVar0;
	if (__LIB_8__::func_406(33554432) || __LIB_8__::func_406(67108864))
	{
		__LIB_14__::func_178(iParam0, 1);
		return;
	}
	iVar0 = func_1507(iParam0, iParam1, 30f, uParam2, 0, 3, 0, 0, *iParam4, 0, 0, 2, -1082130432 /* Float: -1f */);
	if (__LIB_2__::func_456(iParam1))
	{
		__LIB_2__::func_480(uParam2, 0, 0, 1, 0);
		switch (iVar0)
		{
			case 0:
				__LIB_13__::func_879(uParam3, "RH0_MCS2_LO2", Global_35, *iParam0, 0, 0, 1, 1);
				__LIB_1__::func_532(Global_1347702[94 /*49*/].f_15, 1);
				__LIB_13__::func_852(33554432);
				break;
			case 1:
				__LIB_13__::func_879(uParam3, "RH0_RTCMP_NEG", Global_35, *iParam0, 0, 0, 1, 1);
				__LIB_13__::func_852(67108864);
				break;
		}
	}
}

void func_966()
{
	StringCopy(&Local_784, "camera_treatments", 64);
	StringCopy(&(Local_784.f_8), "RHMR0_PULL_OUT_TREATMENT_REQUEST", 64);
	CAM::_0x6A4D224FC7643941(&Local_784);
}

void func_967()
{
	StringCopy(&Local_800, "camera_treatments", 64);
	StringCopy(&(Local_800.f_8), "RHMR0_PUSH_IN_TREATMENT_REQUEST", 64);
	CAM::_0x6A4D224FC7643941(&Local_800);
}

char* func_968()
{
	return "rcm_hmrb0_emr_to_camp";
}

bool func_970()
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_514))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_514, true, false))
		{
			func_942(&iLocal_514, "player_zero", Global_35);
			func_942(&iLocal_514, "A_C_HORSE_KENTUCKYMOUNTAINSADDLE_BAY", iLocal_264);
			func_942(&iLocal_514, "CS_HoseaMatthews", iLocal_262);
			func_942(&iLocal_514, "A_C_HORSE_GANG_HOSEA", iLocal_263);
			ANIMSCENE::START_ANIM_SCENE(iLocal_514);
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		iLocal_514 = ANIMSCENE::_CREATE_ANIM_SCENE(func_1510(), 0, 0, false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(iLocal_514);
	}
	return false;
}

void func_971(int iParam0, int iParam1)
{
	if (__LIB_0__::func_272(iLocal_262, 0) && __LIB_0__::func_272(iLocal_263, 0))
	{
		TASK::TASK_FOLLOW_WAYPOINT_RECORDING_AT_OFFSET(iLocal_262, func_968(), iParam0, 0, 8, -1, 0);
		PED::FORCE_PED_MOTION_STATE(iLocal_263, joaat("MOTIONSTATE_RUN"), true, 0, false);
		PED::_0x2208438012482A1A(iLocal_263, false, false);
		PED::_0x2208438012482A1A(iLocal_262, false, false);
	}
	if (__LIB_0__::func_272(Global_35, 0) && __LIB_0__::func_272(iLocal_264, 0))
	{
		TASK::TASK_FOLLOW_WAYPOINT_RECORDING_AT_OFFSET(Global_35, func_968(), iParam1, 0, 8, -1, 0);
		PED::FORCE_PED_MOTION_STATE(iLocal_264, joaat("MOTIONSTATE_RUN"), true, 0, false);
		PED::_0x2208438012482A1A(iLocal_264, false, false);
		PED::_0x2208438012482A1A(Global_35, false, false);
	}
}

bool func_1012(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
				func_1012(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
						func_1012(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_1012(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_1012(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_1012(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_1012(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_1012(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_1012(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
					func_1012(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_1012(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_1012(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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

void func_1014()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_1624();
	func_1625();
	func_1626();
	func_1627();
	func_1628();
	__LIB_1__::func_848();
	__LIB_0__::func_376();
}

void func_1015(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	func_1631(iParam0, 1, 1, -142743235, 1);
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

void func_1049()
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
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_1658(&uVar4, &iVar1, &iVar2, &iVar3)))
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

int func_1087(int iParam0, float fParam1, int iParam2, char* sParam3)
{
	int iVar0;
	if (!__LIB_2__::func_1(iParam0, 0, 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iParam0))
	{
		return 1;
	}
	if (!PED::IS_PED_USING_ANY_SCENARIO(iParam0))
	{
		iVar0 = 0;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
		{
			iVar0 = MISC::GET_HASH_KEY(sParam3);
		}
		TASK::_TASK_START_SCENARIO_IN_PLACE(iParam0, iParam2, 0, false, iVar0, 0.25f, false);
		return 0;
	}
	else if (!__LIB_0__::func_899(fParam1))
	{
		PED::_0x463803429297117C(iParam0, Global_36, 3, 0);
		TASK::TASK_REACT(iParam0, Global_35, Global_36, "Default_Curious", 1f, 0, 4);
		__LIB_2__::func_259(fParam1);
		return 0;
	}
	if (__LIB_1__::func_592(fParam1) > 300)
	{
		return 1;
	}
	return 0;
}

void func_1088()
{
	int iVar0;
	iVar0 = PED::_0x1F714E7A9DADFC42(Global_35);
	__LIB_1__::func_951(&iVar0);
}

void func_1093(int iParam0)
{
	if (func_920(iParam0))
	{
		__LIB_1__::func_681(&iLocal_19, iParam0);
	}
}

int func_1178(var uParam0, int iParam1, int iParam2)
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
		return func_1178(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

int func_1258(int iParam0, bool bParam1, int iParam2, var uParam3, var uParam4, var uParam5, float fParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
{
	vector3 vVar0;
	bool bVar3;
	int iVar4;
	int iVar5;
	if (!__LIB_0__::func_31(iParam0))
	{
		return 0;
	}
	vVar0.x = uParam3;
	vVar0.f_1 = uParam4;
	vVar0.f_2 = uParam5;
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
				func_959(Global_1360165[iParam0 /*1157*/], vVar0, fParam6, 2, 1073741824 /* Float: 2f */);
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

void func_1262(int iParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	func_355(4);
	AITRANSPORT::_0xBA8818212633500A(iParam0, 6, 1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
	PED::_0xF1C03A5352243A30(iParam0);
	func_959(iParam0, func_720(30), func_759(30), 2, 1073741824 /* Float: 2f */);
	TASK::TASK_STAND_STILL(iParam0, -1);
}

int func_1263(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, float fParam12, bool bParam13, bool bParam14, bool bParam15, int iParam16)
{
	var uVar0;
	int iVar1;
	if (!__LIB_0__::func_49(iParam0))
	{
		return 0;
	}
	iVar1 = func_1818(&uVar0, iParam0, bParam1, bParam2, iParam3, iParam4, iParam5, bParam7, bParam8, iParam9, iParam10, iParam11, fParam12, bParam13, bParam14, bParam15, bParam6, iParam16);
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

void func_1265(int iParam0, var uParam1)
{
	__LIB_2__::func_22(uParam1, *iParam0);
	__LIB_1__::func_401(uParam1, 1);
	__LIB_2__::func_830(uParam1, 1);
	__LIB_1__::func_413(uParam1, 0);
	__LIB_1__::func_398(uParam1, 0);
	__LIB_1__::func_406(uParam1, 0);
	__LIB_8__::func_732(uParam1, 0);
	__LIB_2__::func_507(uParam1, 1500);
}

void func_1266(var uParam0, int iParam1, char* sParam2)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(*uParam0))
	{
		*uParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(func_191(iParam1), func_192(iParam1), func_193(iParam1), sParam2);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(*uParam0))
	{
		POPULATION::_0x18262CAFEBB5FBE1(*uParam0, 0, 0, 0, -1, -1, 0);
		POPULATION::_0xB56D41A694E42E86(*uParam0, 0, 0, 0, -1, -1, 0);
	}
}

void func_1292()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar2 = ENTITY::_0x59B57C4B06531E1E(1411.255f, 265.5107f, 88.68736f, 10f, iVar0, 2);
	iVar1 = 0;
	while (iVar1 < iVar2)
	{
		iVar3 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, iVar0);
		if (MISC::_DOES_ITEM_HAVE_VALID_BASE(iVar3))
		{
			iVar4 = MISC::_GET_VEHICLE_FROM_INDEXED_ITEM(iVar3);
			func_959(iVar4, 1419.547f, 252.4904f, 89.44403f, 0f, 2, 1073741824 /* Float: 2f */);
		}
		iVar1++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
}

void func_1295(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	if (bParam3)
	{
		TASK::TASK_FORCE_MOTION_STATE(0, joaat("MOTIONSTATE_WALK"), false);
	}
	TASK::TASK_MOUNT_ANIMAL(0, iParam1, -1, -1, iParam2, 1, 0, 0);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1398.215f, 259.6687f, 88.47815f, 1f, -1, 0.25f, 0, 40000f);
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 0, -1f, -1f, -1f);
	__LIB_1__::func_474(iParam0, &iVar0, 0, 0, 1, 1);
}

void func_1305(var uParam0)
{
	if (__LIB_8__::func_372(65536))
	{
		return;
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(*uParam0, "p_cigarette01x", iLocal_266[0]);
		__LIB_1__::func_951(&(iLocal_266[0]));
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(*uParam0, "p_cigarette01x^1", iLocal_266[1]);
		__LIB_1__::func_951(&(iLocal_266[1]));
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(*uParam0, "p_cigarettebox01x", iLocal_269);
		__LIB_1__::func_951(&iLocal_269);
		func_355(65536);
	}
}

char* func_1308()
{
	return "script@rcm@RHMR0@Leadout@MCS2@leadout";
}

void func_1309(int iParam0, char* sParam1, int iParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam2) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(*iParam0, true, false))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*iParam0, sParam1, iParam2, 0);
	}
}

void func_1312(int iParam0, char* sParam1)
{
	if (func_715(iParam0) && ANIMSCENE::_0x23E33CB9F4A3F547(*iParam0, sParam1))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*iParam0, sParam1, true);
	}
}

char* func_1317()
{
	return "script@rcm@RHMR0@LeadIn@INT1@Leadin";
}

Vector3 func_1326()
{
	return 835.5839f, 829.2189f, 114.5557f;
}

char* func_1327(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "pl_enter_idle";
		case 1:
			return "pl_exit";
		case 2:
			return "pl_quickexit_180_L";
		case 3:
			return "pl_quickexit_180_R";
		case 4:
			return "pl_waveover_BL";
		case 5:
			return "pl_waveover_BR";
		case 6:
			return "pl_waveover_FL";
		case 7:
			return "pl_waveover_FR";
		case 8:
			return "pl_waveover_L";
		case 9:
			return "pl_waveover_R";
		default:
			break;
	}
	return "INVALID_MCS1_PLAYLIST";
}

char* func_1328()
{
	return "script@rcm@RHMR0@LeadIn@MCS1@hosea_enter_idle_CO_exit";
}

void func_1356(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
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
		func_1892();
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

void func_1358(var uParam0)
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
			func_959(iVar1, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_959(iVar3, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_1359(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if ((__LIB_0__::func_84(uParam0, 268435456) && !__LIB_0__::func_86(__LIB_12__::func_720(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { __LIB_12__::func_720(uParam0) };
			func_959(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

bool func_1425()
{
	if (__LIB_3__::func_332(-126.0758f, -28.47274f, 94.96344f, 1) < 150f)
	{
		return true;
	}
	return false;
}

bool func_1426(int iParam0)
{
	return (iLocal_253 && iParam0) != 0;
}

void func_1427(int iParam0)
{
	if (func_843(iParam0))
	{
		return;
	}
	uLocal_254 = (uLocal_254 || iParam0);
}

void func_1428(int iParam0)
{
	if (!func_1426(iParam0))
	{
		return;
	}
	iLocal_253 = (iLocal_253 - (iLocal_253 && iParam0));
}

int func_1441(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vVar0 = { 840.0346f, 829.603f, 114.5057f };
	vVar3 = { 831.0891f, 831.3679f, 114.9758f };
	switch (__LIB_3__::func_112(*iParam0, Global_35, 1060437492 /* Float: 0.707f */))
	{
		case 0:
			if (__LIB_0__::func_195(vVar0, vVar3, Global_36))
			{
				return 6;
			}
			else
			{
				return 7;
			}
			break;
		case 1:
			if (__LIB_0__::func_195(vVar0, vVar3, Global_36))
			{
				return 4;
			}
			else
			{
				return 5;
			}
			break;
		case 3:
			return 8;
		case 2:
			return 9;
	}
	return 8;
}

void func_1442()
{
	if (__LIB_0__::func_899(&(vLocal_664[23 /*3*/])))
	{
		if (__LIB_1__::func_583(&(vLocal_664[23 /*3*/])) < 14f || !__LIB_18__::func_708(5f, 1, 0, 0))
		{
			return;
		}
	}
	else
	{
		__LIB_2__::func_259(&(vLocal_664[23 /*3*/]));
		return;
	}
	if (!func_920(536870912))
	{
		__LIB_13__::func_879(&uLocal_278, "RH0_MCS1_BINO_2", iLocal_262, Global_35, 0, 0, 1, 0);
		func_718(536870912);
	}
	else if (!func_920(1073741824 /* Float: 2f */))
	{
		__LIB_13__::func_879(&uLocal_278, "RH0_MCS1_BINO_3", iLocal_262, Global_35, 0, 0, 1, 0);
		func_718(1073741824 /* Float: 2f */);
	}
}

void func_1443(var uParam0, int* iParam1, var uParam2, float fParam3)
{
	if (__LIB_1__::func_185(13))
	{
		return;
	}
	switch (iLocal_60)
	{
		case 0:
			__LIB_10__::func_731();
			__LIB_3__::func_834(3);
			if (__LIB_1__::func_372(Global_35, 0) == joaat("WEAPON_KIT_BINOCULARS") && __LIB_8__::func_372(8192))
			{
				__LIB_13__::func_870(4);
			}
			else if (__LIB_8__::func_372(8192))
			{
				__LIB_1__::func_561(fParam3);
				func_1986(uParam0);
				__LIB_13__::func_870(1);
			}
			else if (__LIB_0__::func_899(fParam3))
			{
				if (__LIB_3__::func_514(fParam3, 1.5f))
				{
					__LIB_1__::func_561(fParam3);
					func_1986(uParam0);
					__LIB_13__::func_870(1);
				}
			}
			else
			{
				__LIB_2__::func_259(fParam3);
			}
			break;
		case 1:
			if (__LIB_1__::func_372(Global_35, 0) == joaat("WEAPON_KIT_BINOCULARS") && __LIB_8__::func_372(8192))
			{
				__LIB_13__::func_870(4);
			}
			else if (__LIB_8__::func_954())
			{
				func_1988(uParam0);
				__LIB_13__::func_870(2);
			}
			break;
		case 2:
			if (__LIB_1__::func_372(Global_35, 0) == joaat("WEAPON_KIT_BINOCULARS") && __LIB_8__::func_372(8192))
			{
				__LIB_13__::func_870(4);
			}
			else if (Global_1935496.f_30 == joaat("WEAPON_KIT_BINOCULARS"))
			{
				func_1989(uParam0);
				__LIB_13__::func_870(3);
			}
			else if (!__LIB_8__::func_954() || __LIB_4__::func_365())
			{
				func_1986(uParam0);
				__LIB_13__::func_870(1);
			}
			break;
		case 3:
			if (__LIB_1__::func_372(Global_35, 0) == joaat("WEAPON_KIT_BINOCULARS"))
			{
				__LIB_1__::func_561(fParam3);
				HUD::_0x160825DADF1B04B3();
				func_355(8192);
				__LIB_13__::func_870(4);
			}
			else if (__LIB_4__::func_365())
			{
				__LIB_1__::func_561(fParam3);
				func_1986(uParam0);
				__LIB_13__::func_870(1);
			}
			else if (!__LIB_8__::func_954() && !__LIB_4__::func_365())
			{
				if (__LIB_0__::func_899(fParam3))
				{
					if (__LIB_3__::func_514(fParam3, 2f))
					{
						__LIB_1__::func_561(fParam3);
						func_1986(uParam0);
						__LIB_13__::func_870(1);
					}
				}
				else
				{
					__LIB_2__::func_259(fParam3);
				}
			}
			else if (Global_1935496.f_30 != joaat("WEAPON_KIT_BINOCULARS"))
			{
				__LIB_1__::func_561(fParam3);
				func_1988(uParam0);
				__LIB_13__::func_870(2);
			}
			break;
		case 4:
			func_374();
			__LIB_8__::func_152(iParam1, *uParam2, 1247852480);
			if (MAP::DOES_BLIP_EXIST(*iParam1))
			{
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam1, "RHMR0_BLIP_HOMESTEAD");
			}
			__LIB_12__::func_883(uParam0, "RHMR0_TUT_BNC4", 1, -1, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			__LIB_13__::func_870(5);
			break;
		case 5:
			if (__LIB_1__::func_372(Global_35, 0) != joaat("WEAPON_KIT_BINOCULARS"))
			{
				__LIB_13__::func_870(0);
			}
			break;
	}
}

void func_1449()
{
	int iVar0;
	if (ENTITY::IS_ENTITY_DEAD(iLocal_262) || __LIB_8__::func_379(4))
	{
		return;
	}
	switch (iLocal_52)
	{
		case 0:
			if (iLocal_57 > 1 && !AUDIO::_0xA2CAC9DEF0195E6F(1))
			{
				__LIB_2__::func_259(&(vLocal_664[9 /*3*/]));
				__LIB_11__::func_632(1);
			}
			break;
		case 1:
			if (__LIB_0__::func_899(&(vLocal_664[9 /*3*/])))
			{
				if (__LIB_1__::func_583(&(vLocal_664[9 /*3*/])) > 5f && __LIB_3__::func_332(func_720(20), 1) > 50f)
				{
					__LIB_1__::func_561(&(vLocal_664[9 /*3*/]));
					__LIB_3__::func_732(0);
					__LIB_13__::func_879(&uLocal_278, "RH0_RIDE_CRD0", iLocal_262, Global_35, 0, 0, 1, 1);
					__LIB_1__::func_480(&iLocal_262);
					__LIB_11__::func_632(2);
				}
			}
			else
			{
				__LIB_2__::func_259(&(vLocal_664[9 /*3*/]));
			}
			break;
		case 2:
			__LIB_8__::func_875(iLocal_262, "RH0_RIDE_CRD0", 1, 1);
			if (!__LIB_1__::func_322("RH0_RIDE_CRD0"))
			{
				__LIB_2__::func_259(&(vLocal_664[1 /*3*/]));
				__LIB_11__::func_632(3);
			}
			break;
		case 3:
			if (func_920(-2147483648))
			{
				if (__LIB_1__::func_583(&(vLocal_664[1 /*3*/])) > 3f)
				{
					func_1992(&uLocal_543);
					__LIB_11__::func_632(4);
				}
			}
			else if (__LIB_1__::func_583(&(vLocal_664[1 /*3*/])) > 1f)
			{
				__LIB_0__::func_45("RHMR0_TUT_HORSE", 10000, 0, 0, 0, 1);
				func_718(-2147483648);
			}
			break;
		case 4:
			iVar0 = func_1507(&iLocal_262, &(Local_521[0 /*21*/]), 15f, &uLocal_543, 0, 3, 0, 0, iLocal_578, 0, 0, 2, -1082130432 /* Float: -1f */);
			if (__LIB_2__::func_456(&(Local_521[0 /*21*/])) && iVar0 != -1)
			{
				switch (iVar0)
				{
					case 0:
						func_718(4096);
						__LIB_13__::func_879(&uLocal_278, "RH0_RIDE_CRD2", iLocal_262, Global_35, 0, 0, 1, 1);
						break;
					case 1:
						func_718(8192);
						__LIB_13__::func_879(&uLocal_278, "RH0_RIDE_CRD1", iLocal_262, Global_35, 0, 0, 1, 1);
						break;
				}
				__LIB_2__::func_526(&uLocal_543, 0, 0);
				__LIB_3__::func_462(&uLocal_543, 1);
				__LIB_3__::func_590(&(Local_521[0 /*21*/]), 0);
				iLocal_578 = __LIB_2__::func_340(1, 0, 0) | 64 | 4194304;
				__LIB_11__::func_632(7);
			}
			if (__LIB_3__::func_332(func_720(9), 1) < 140f)
			{
				__LIB_1__::func_480(&iLocal_262);
				__LIB_2__::func_480(&uLocal_543, 0, 0, 1, 0);
				iLocal_578 = __LIB_2__::func_340(1, 0, 0) | 64 | 4194304;
				__LIB_11__::func_632(6);
			}
			else if (!PED::IS_PED_ON_MOUNT(Global_35))
			{
				__LIB_2__::func_526(&uLocal_543, 0, 0);
				__LIB_3__::func_462(&uLocal_543, 1);
				__LIB_3__::func_590(&(Local_521[0 /*21*/]), 0);
				iLocal_578 = __LIB_2__::func_340(1, 0, 0) | 64 | 4194304;
				__LIB_11__::func_632(5);
			}
			break;
		case 5:
			func_1507(&iLocal_262, &(Local_521[0 /*21*/]), 15f, &uLocal_543, 0, 3, 0, 0, iLocal_578, 0, 0, 2, -1082130432 /* Float: -1f */);
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				__LIB_2__::func_526(&uLocal_543, 1, 0);
				__LIB_3__::func_462(&uLocal_543, 0);
				__LIB_3__::func_590(&(Local_521[0 /*21*/]), 0);
				iLocal_578 = __LIB_2__::func_340(0, 0, 0) | 64 | 8192 | 4194304;
				__LIB_11__::func_632(4);
			}
			break;
		case 6:
			iVar0 = func_1507(&iLocal_262, &(Local_521[0 /*21*/]), 15f, &uLocal_543, 0, 3, 0, 0, iLocal_578, 0, 0, 2, -1082130432 /* Float: -1f */);
			if (__LIB_3__::func_332(func_720(9), 1) > (140f + 10f))
			{
				iLocal_578 = __LIB_2__::func_340(0, 0, 0) | 64 | 8192 | 4194304;
				func_1992(&uLocal_543);
				__LIB_11__::func_632(4);
			}
			break;
		case 7:
			__LIB_8__::func_875(iLocal_262, "RH0_RIDE_CRD1", 1, 1);
			__LIB_8__::func_875(iLocal_262, "RH0_RIDE_CRD2", 1, 1);
			iVar0 = func_1507(&iLocal_262, &(Local_521[0 /*21*/]), 15f, &uLocal_543, 0, 3, 0, 0, iLocal_578, 0, 0, 2, -1082130432 /* Float: -1f */);
			break;
	}
}

void func_1451(int iParam0)
{
	PED::SET_PED_RESET_FLAG(iParam0, 179, true);
}

bool func_1452(float fParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(iLocal_262))
	{
		return false;
	}
	if (__LIB_0__::func_94(iLocal_262, func_720(6), 1) < fParam0)
	{
		return true;
	}
	return false;
}

void func_1453()
{
	if (__LIB_2__::func_1(iLocal_262, 0, 1))
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_262, func_720(6), 1.5f, -1, 0.25f, 0, 40000f);
	}
}

bool func_1456(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		if ((TASK::GET_SCRIPT_TASK_STATUS(*iParam0, iParam1, true) == 1 || TASK::GET_SCRIPT_TASK_STATUS(*iParam0, iParam1, true) == 0) || TASK::GET_SCRIPT_TASK_STATUS(*iParam0, iParam1, true) == 8)
		{
			return true;
		}
	}
	return false;
}

void func_1457(int iParam0, int iParam1)
{
	__LIB_1__::func_562(*iParam0, *iParam1, 0, 1f, -1);
}

void func_1458()
{
	if (!PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true))
	{
		return;
	}
	if (__LIB_18__::func_708(3f, 1, 0, 0))
	{
		if (!func_920(8))
		{
			func_718(8);
			__LIB_13__::func_879(&uLocal_278, "RH0_CRD_HTCH1", iLocal_262, Global_35, 0, 0, 1, 1);
		}
		else if (!func_920(16))
		{
			func_718(16);
			__LIB_13__::func_879(&uLocal_278, "RH0_CRD_HTCH1", iLocal_262, Global_35, 1, 0, 1, 1);
		}
		else if (!func_920(32))
		{
			func_718(32);
			__LIB_13__::func_879(&uLocal_278, "RH0_CRD_HTCH1", iLocal_262, Global_35, 2, 0, 1, 1);
		}
	}
}

void func_1459(int iParam0)
{
	int iVar0;
	if (ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		return;
	}
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	if (__LIB_0__::func_396(*iParam0))
	{
		TASK::TASK_DISMOUNT_ANIMAL(0, 262144, 0, 0, 0, 0);
	}
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
	__LIB_1__::func_474(*iParam0, &iVar0, 0, 0, 1, 1);
}

void func_1460(float fParam0)
{
	if ((ENTITY::IS_ENTITY_DEAD(iLocal_262) || ENTITY::IS_ENTITY_DEAD(iLocal_263)) || !TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_262, 0))
	{
		return;
	}
	TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_262, fParam0, 0, -1082130432 /* Float: -1f */, 0);
	TASK::SET_ENABLE_SPEED_RESTRAIN_FOR_WAYPOINT_RECORDING_LEADER(iLocal_262, 1);
	TASK::SET_UP_SPEED_RESTRAIN_INFORMATION_FOR_PLAYER_FOLLOWER(iLocal_262, 2f, 20f, 35f, 0.75f, 0.75f, 0, 1045220557 /* Float: 0.2f */, 0);
}

char* func_1471(int iParam0)
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;
	if (ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		return "INVALID_ANIM";
	}
	iVar7 = __LIB_3__::func_112(*iParam0, Global_35, 1060437492 /* Float: 0.707f */);
	switch (iVar7)
	{
		case 0:
			return func_1995(2);
		case 1:
			fVar0 = ENTITY::GET_ENTITY_HEADING(*iParam0);
			vVar1 = { ENTITY::GET_ENTITY_COORDS(*iParam0, true, false) };
			vVar4 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar1, fVar0, 0f, -10f, 0f) };
			if (__LIB_0__::func_195(vVar4, vVar1, Global_36))
			{
				return func_1995(0);
			}
			else
			{
				return func_1995(1);
			}
			break;
		case 2:
			return func_1995(4);
		case 3:
			return func_1995(3);
	}
	return func_1995(2);
}

void func_1472(int iParam0, char* sParam1, char* sParam2)
{
	struct<27> Var0;
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
	Var0 = 1;
	Var0.f_1 = sParam1;
	Var0.f_2 = sParam2;
	Var0.f_3 = 0f;
	Var0.f_4 = 1f;
	Var0.f_5 = 1f;
	Var0.f_17 = 0.25f;
	Var0.f_18 = 0.25f;
	Var0.f_19 = -1;
	Var0.f_20 = 0;
	Var0.f_21 = 0;
	Var0.f_23 = 1114112;
	TASK::TASK_SCRIPTED_ANIMATION(*iParam0, &Var0);
}

int func_1474()
{
	int iVar0;
	iVar0 = 0;
	if (__LIB_9__::func_748())
	{
		iVar0++;
	}
	if (__LIB_9__::func_747())
	{
		iVar0++;
	}
	return iVar0;
}

int func_1475()
{
	int iVar0;
	iVar0 = 0;
	if (__LIB_13__::func_877())
	{
		iVar0++;
	}
	if (__LIB_13__::func_878())
	{
		iVar0++;
	}
	return iVar0;
}

bool func_1476()
{
	return __LIB_0__::func_756(1, 524288);
}

bool func_1477()
{
	if (__LIB_4__::func_54(1, 512) && __LIB_0__::func_770(1, 512))
	{
		return true;
	}
	return false;
}

bool func_1478(float fParam0, float fParam1, int iParam2)
{
	if (AUDIO::_0xA2CAC9DEF0195E6F(iParam2))
	{
		return false;
	}
	if (__LIB_0__::func_899(fParam0))
	{
		if (__LIB_1__::func_583(fParam0) > fParam1)
		{
			__LIB_1__::func_561(fParam0);
			return true;
		}
	}
	else
	{
		__LIB_2__::func_259(fParam0);
		return false;
	}
	return false;
}

void func_1479(char[4] cParam0)
{
	sLocal_519 = cParam0;
	__LIB_13__::func_879(&uLocal_278, cParam0, iLocal_262, Global_35, 0, 0, 1, 1);
}

bool func_1481()
{
	return __LIB_0__::func_770(1, 1073741824 /* Float: 2f */);
}

bool func_1483()
{
	return __LIB_0__::func_770(1, 65536);
}

bool func_1484()
{
	if (__LIB_0__::func_770(1, 2097152) || __LIB_0__::func_770(1, 16777216))
	{
		return true;
	}
	return false;
}

bool func_1485()
{
	if ((__LIB_0__::func_770(1, 1048576) || __LIB_0__::func_770(1, 4194304)) || __LIB_0__::func_770(1, 8388608))
	{
		return true;
	}
	return false;
}

bool func_1486()
{
	return __LIB_0__::func_770(1, 33554432);
}

int func_1507(int iParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
					if (__LIB_13__::func_885(iParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_1507(iParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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
					if (__LIB_13__::func_886(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
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
					if (__LIB_4__::func_394(*iParam0, iParam1, uParam3))
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
				if (__LIB_13__::func_883(iParam0, iParam1, fParam4, bVar6))
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
					__LIB_13__::func_886(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
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
				if (__LIB_13__::func_883(iParam0, iParam1, fParam4, bVar6))
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
			__LIB_4__::func_399(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

char* func_1510()
{
	return "script@rcm@RHMR0@IG@IG_TripSkip@RHMR0_tripskip";
}

void func_1624()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_2129(0);
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
	func_2129(1);
}

void func_1625()
{
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_1012(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_1626()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_2132(0);
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
	func_2132(1);
}

void func_1627()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_1__::func_432(15000, 0, 0, 0, 1);
			func_2132(0);
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
	func_2132(1);
}

void func_1628()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_1012(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_1012(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_1631(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_1631(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
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

int func_1631(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			func_1631(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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

int func_1658(var uParam0, int iParam1, int iParam2, int iParam3)
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
	iVar11 = (func_2164(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_952(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_1012(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	__LIB_1__::func_432(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

int func_1818(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, float fParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17)
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
				iVar0 = func_2238(iParam1, bParam3, bParam8, iParam9, iParam10, iParam11, fParam12, bParam7, bParam15, bParam16, iParam17);
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

void func_1892()
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
	iVar0 = func_2302(6291456, 0);
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

void func_1986(var uParam0)
{
	__LIB_3__::func_787(0);
	UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
	__LIB_12__::func_883(uParam0, "RHMR0_TUT_BNC1", 1, -1, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
}

void func_1988(var uParam0)
{
	struct<2> Var0;
	__LIB_3__::func_787(1);
	UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
	__LIB_12__::func_883(uParam0, "RHMR0_TUT_BNC2", 1, -1, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
	Var0 = 2;
	Var0.f_1 = joaat("WEAPON_KIT_BINOCULARS");
	HUD::_0x8A59D44189AF2BC5(&Var0, -1001145251);
}

void func_1989(var uParam0)
{
	__LIB_3__::func_787(2);
	UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
	__LIB_12__::func_883(uParam0, "RHMR0_TUT_BNC3", 1, -1, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
}

void func_1992(var uParam0)
{
	__LIB_3__::func_157(uParam0[0 /*17*/], "RHMR0_INT_EMR", 0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_3__::func_157(uParam0[1 /*17*/], "RHMR0_INT_DUTCH", 0, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
}

char* func_1995(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "IG7_HCAISC_GetInDearBoy_BLT_HoseaMatthews";
		case 1:
			return "IG7_HCAISC_GetInDearBoy_BRT_HoseaMatthews";
		case 2:
			return "IG7_HCAISC_GetInDearBoy_FT_HoseaMatthews";
		case 3:
			return "IG7_HCAISC_GetInDearBoy_LT_HoseaMatthews";
		case 4:
			return "IG7_HCAISC_GetInDearBoy_RT_HoseaMatthews";
		default:
			break;
	}
	return "IG7_HCAISC_GetInDearBoy_BLT_HoseaMatthews";
}

void func_2129(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (bParam0)
	{
		func_1012(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_1012(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_1012(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_2448(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_1015(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_1631(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_2453(Var0);
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

void func_2132(bool bParam0)
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
		func_1012(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_1012(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_1012(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_1012(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_1012(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_1012(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_1012(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_1012(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_1012(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_1012(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_1012(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_1631(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_1631(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_1631(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_1631(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_1631(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_1631(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_1631(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_1631(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_1631(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_1631(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_1631(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
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

int func_2164(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
							iVar49 = (iVar49 + func_2164(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_2164(iVar63, -915411861, 1, 0, 0));
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

int func_2238(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, float fParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)
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
				func_959(Global_1360165[iParam0 /*1157*/].f_124, vVar0, fParam6, 2, 1073741824 /* Float: 2f */);
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

int func_2302(int iParam0, int iParam1)
{
	var uVar0;
	return func_2548(&uVar0, iParam0, iParam1);
}

void func_2448(int iParam0)
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
	func_1631(iParam0, 1, 1, -142743235, 1);
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
		func_1631(uVar18[iVar36], 1, 1, -142743235, 1);
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

void func_2453(struct<6> Param0)
{
	if (!func_2631(Param0.f_4, 1))
	{
	}
	if (!func_2631(Param0, 1))
	{
	}
	if (!func_2631(Param0.f_2, 1))
	{
	}
	if (!func_2631(Param0.f_5, 1))
	{
	}
	if (!func_2631(Param0.f_3, 1))
	{
	}
	if (!func_2631(Param0.f_1, 1))
	{
	}
}

int func_2548(var uParam0, int iParam1, int iParam2)
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
		return func_2548(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

bool func_2631(int iParam0, int iParam1)
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
				if (func_2631(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_2631(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_2631(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_2631(iVar21, 1))
				{
				}
			}
		}
		__LIB_1__::func_712();
		return true;
	}
	return false;
}

