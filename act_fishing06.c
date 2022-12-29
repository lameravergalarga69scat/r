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
	bool bLocal_14 = false;
	int iLocal_15 = 0;
	int iLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	int iLocal_33 = 0;
	char* sLocal_34 = NULL;
	int iLocal_35 = 0;
	var uLocal_36 = 24;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
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
	var uLocal_109 = 0;
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
	struct<145> Local_134 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_294 = 1;
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
	var uLocal_307 = 11;
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
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
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
	var uLocal_402 = 0;
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
	var uLocal_440 = 1097859072;
	var uLocal_441 = 1101004800;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
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
	var uLocal_468 = 4;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
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
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 2;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
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
	var uLocal_570 = 2;
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
	var uLocal_603 = 10;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
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
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 2;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 3;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 0;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
	var uScriptParam_23 = 0;
	var uScriptParam_24 = 0;
	var uScriptParam_25 = 0;
	var uScriptParam_26 = 0;
	var uScriptParam_27 = 0;
	var uScriptParam_28 = 0;
	var uScriptParam_29 = 0;
	var uScriptParam_30 = 0;
	var uScriptParam_31 = 0;
	var uScriptParam_32 = 0;
	var uScriptParam_33 = 0;
	var uScriptParam_34 = 0;
	var uScriptParam_35 = 0;
	var uScriptParam_36 = 0;
	var uScriptParam_37 = 0;
	var uScriptParam_38 = 0;
	var uScriptParam_39 = 0;
	var uScriptParam_40 = 0;
	var uScriptParam_41 = 1101004800;
	var uScriptParam_42 = 0;
	var uScriptParam_43 = 0;
	var uScriptParam_44 = 0;
	var uScriptParam_45 = 0;
	var uScriptParam_46 = 0;
	var uScriptParam_47 = 0;
	var uScriptParam_48 = 0;
	var uScriptParam_49 = 0;
	var uScriptParam_50 = 0;
	var uScriptParam_51 = 0;
	var uScriptParam_52 = 0;
	var uScriptParam_53 = 0;
	var uScriptParam_54 = 0;
	var uScriptParam_55 = 0;
	var uScriptParam_56 = 0;
	var uScriptParam_57 = 0;
	var uScriptParam_58 = 0;
	var uScriptParam_59 = 0;
	var uScriptParam_60 = 0;
	var uScriptParam_61 = 0;
	var uScriptParam_62 = 0;
	var uScriptParam_63 = 0;
	var uScriptParam_64 = 0;
	var uScriptParam_65 = 0;
	var uScriptParam_66 = 0;
	var uScriptParam_67 = 0;
	var uScriptParam_68 = 0;
	var uScriptParam_69 = 0;
	var uScriptParam_70 = 0;
	var uScriptParam_71 = 0;
	var uScriptParam_72 = 0;
	var uScriptParam_73 = 0;
	var uScriptParam_74 = 0;
	var uScriptParam_75 = 0;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	bLocal_14 = true;
	iLocal_15 = 1;
	iLocal_16 = 1;
	fLocal_31 = 150f;
	iLocal_33 = -1;
	sLocal_34 = "CFSH";
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(546))
	{
		func_1(&uScriptParam_0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	__LIB_1__::func_751(&uScriptParam_0, &uLocal_537);
	while (!func_3(&uScriptParam_0))
	{
		__LIB_1__::func_598(&uScriptParam_0, &uLocal_537, __LIB_0__::func_749());
		BUILTIN::WAIT(0);
	}
	func_1(&uScriptParam_0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(var uParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	bVar0 = CAM::_0x139EFB0A71DD9011();
	bVar1 = CAM::_0x7CE9DC58E3E4755F();
	if (uParam0->f_14 != 1 && uParam0->f_14 != 7)
	{
		if (!bVar0 || bVar1)
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_OUT(0);
			}
		}
	}
	__LIB_1__::func_752();
	func_7(uParam0);
	if (__LIB_0__::func_750(&(uParam0->f_9), 1))
	{
		__LIB_0__::func_745(uParam0->f_2);
	}
	iVar2 = 0;
	while (iVar2 < 27)
	{
		if (__LIB_1__::func_22(iVar2))
		{
			__LIB_1__::func_808(uParam0, iVar2);
		}
		iVar2++;
	}
	__LIB_1__::func_714();
	if (__LIB_1__::func_44(uParam0->f_5))
	{
		switch (uParam0->f_14)
		{
			case 0:
			case 2:
				__LIB_1__::func_645(uParam0->f_5);
				__LIB_1__::func_611(uParam0->f_5, 1, &(uParam0->f_15), 0, 0, 0);
				break;
			case 7:
				__LIB_1__::func_559(uParam0->f_5, 0, 2);
				__LIB_0__::func_297();
				__LIB_1__::func_140();
				__LIB_1__::func_639(uParam0, 0, 1);
				Global_1391438.f_3 = -1;
				iVar3 = 0;
				while (iVar3 < 10)
				{
					if (Global_40.f_6563.f_274[iVar3 /*20*/].f_1 == uParam0->f_1)
					{
						Global_40.f_6563.f_274[iVar3 /*20*/].f_18 += 50;
					}
					iVar3++;
				}
				break;
			case 1:
				if (!__LIB_0__::func_13(32768))
				{
					func_21(uParam0->f_5, 1, 1, Global_1879514.f_11, 1);
				}
				else
				{
					__LIB_1__::func_809(uParam0->f_5, Global_1879514.f_11);
				}
				__LIB_0__::func_863();
				__LIB_0__::func_297();
				__LIB_1__::func_140();
				Global_1391438.f_3 = -1;
				if (uParam0->f_1 == joaat("HAI_BANK_ROBBERY_01") && UILOG::_UILOG_IS_ENTRY_REGISTERED(3, joaat("CABR01")))
				{
					if (STATS::CHAL_MISSION_IS_GOAL_COMPLETE(joaat("CABR01"), joaat("TIMELIMIT_5_45")))
					{
						UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, joaat("CABR01"), joaat("MISS_CHALL_TIME_5_45"), "MISS_CHALL_TIME_5_45", true, true, false);
					}
					if (STATS::CHAL_MISSION_IS_GOAL_COMPLETE(joaat("CABR01"), joaat("CABR01_CHASENODAMAGE")))
					{
						UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, joaat("CABR01"), joaat("CABR01_CHALL_1"), "CABR01_CHALL_1", true, true, false);
					}
					switch (STATS::CHAL_MISSION_GET_NUM_GOALS_COMPLETE(joaat("CABR01")))
					{
						case 0:
							sVar4 = "TOAST_MEDAL_BRONZE";
							break;
						case 1:
							sVar4 = "TOAST_MEDAL_SILVER";
							break;
						case 2:
							sVar4 = "TOAST_MEDAL_GOLD";
							break;
						default:
							sVar4 = "";
							break;
					}
					if (Global_1879514.f_11)
					{
						sVar4 = "TOAST_MEDAL_BRONZE";
					}
					UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, joaat("CABR01"), MISC::GET_HASH_KEY(sVar4), joaat("HUD_TOASTS"));
					MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), __LIB_1__::func_753());
					UILOG::_UILOG_MARK_MISSION_COMPLETED(joaat("CABR01"));
					UILOG::_0xA31013798FADCADC(3, joaat("CABR01"), 1);
				}
				else
				{
					__LIB_1__::func_639(uParam0, 1, 0);
				}
				if (__LIB_0__::func_13(32768))
				{
					CAM::DO_SCREEN_FADE_OUT(0);
					func_25();
					__LIB_1__::func_141(0);
				}
				break;
			case 3:
				__LIB_1__::func_645(uParam0->f_5);
				StringCopy(&(uParam0->f_15), "PLAYER_DEAD", 24);
				__LIB_1__::func_611(uParam0->f_5, 2, &(uParam0->f_15), 0, 0, 0);
				break;
			case 6:
				__LIB_1__::func_645(uParam0->f_5);
				StringCopy(&(uParam0->f_15), "PLAYER_ARRESTED", 24);
				__LIB_1__::func_611(uParam0->f_5, 6, &(uParam0->f_15), 0, 0, 0);
				break;
			case 4:
				__LIB_1__::func_645(uParam0->f_5);
				MemCopy(&(uParam0->f_15), {__LIB_0__::func_864(uParam0->f_2)}, 3);
				__LIB_1__::func_611(uParam0->f_5, 1, &(uParam0->f_15), 0, 0, 0);
				break;
			case 5:
				__LIB_1__::func_645(uParam0->f_5);
				MemCopy(&(uParam0->f_15), {__LIB_0__::func_865(uParam0->f_2)}, 3);
				__LIB_1__::func_611(uParam0->f_5, 1, &(uParam0->f_15), 0, 0, 0);
				break;
		}
	}
	MISC::_0x1096603B519C905F("");
	if (MAP::DOES_BLIP_EXIST(uParam0->f_43))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_43));
	}
	if (PLAYER::_0xD1F6B912785BFD35(PLAYER::PLAYER_ID()))
	{
		PLAYER::_0x908D4B72854C8F62(PLAYER::PLAYER_ID());
	}
	if (PLAYER::_0x2009F8AB7A5E9D6D(PLAYER::PLAYER_ID()))
	{
		PLAYER::_0x12E09E278C6C29B7(PLAYER::PLAYER_ID());
	}
	if (__LIB_0__::func_272(Global_35, 0))
	{
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, false);
	}
	__LIB_0__::func_698(64);
	if (!__LIB_1__::func_628(Global_36))
	{
		__LIB_0__::func_267(1);
		__LIB_1__::func_142(0);
	}
	__LIB_0__::func_8(&Global_1935630, 256);
	__LIB_1__::func_878(uParam0);
	UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
}

bool func_3(var uParam0)
{
	int iVar0;
	if (__LIB_0__::func_272(Global_35, 0))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 187, true);
	}
	if (uParam0->f_13 > 1 || (!__LIB_0__::func_272(Global_35, 0) && uParam0->f_13 > 0))
	{
		if ((__LIB_0__::func_752(uParam0->f_14) || func_39(uParam0)) || __LIB_1__::func_23(uParam0))
		{
			if (!CAM::_0x139EFB0A71DD9011())
			{
				__LIB_1__::func_193(1, 1);
				__LIB_1__::func_687(&uLocal_537);
			}
			if (!__LIB_0__::func_752(uParam0->f_14) || CAM::_0x7CE9DC58E3E4755F())
			{
				CAM::DO_SCREEN_FADE_OUT(0);
				CAM::_0x16E9ABDD34DDD931();
				return true;
			}
		}
		if (func_39(uParam0) || __LIB_1__::func_23(uParam0))
		{
			__LIB_0__::func_7(&(Global_1347343.f_11), 262144);
		}
	}
	if (uParam0->f_13 > 1)
	{
		__LIB_1__::func_754(uParam0);
		func_45(uParam0);
	}
	switch (uParam0->f_13)
	{
		case 0:
			if (!uParam0->f_12)
			{
				uParam0->f_12 = __LIB_1__::func_143(uParam0);
				return false;
			}
			if (__LIB_0__::func_750(&(Global_1391438.f_5), 128) || __LIB_0__::func_750(&(uParam0->f_9), 896))
			{
				__LIB_0__::func_63(&(Global_1391438.f_5), 128, 0);
				uParam0->f_13 = 1;
			}
			break;
		case 1:
			if (func_49(uParam0))
			{
				COMPANION::_0xA079FF7CFB9AC8BD(__LIB_0__::func_110(), 4);
				__LIB_1__::func_639(uParam0, 0, 0);
				uParam0->f_13 = 4;
			}
			break;
		case 4:
			if (__LIB_18__::func_181(uParam0))
			{
				iVar0 = __LIB_0__::func_753(*uParam0);
				Global_40.f_7039[__LIB_0__::func_754(iVar0, 1) /*2*/] = 1;
				uParam0->f_14 = 1;
				uParam0->f_13 = 6;
			}
			break;
		case 6:
			return true;
	}
	return false;
}

void func_7(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	__LIB_0__::func_698(2);
	__LIB_0__::func_705(17, 0);
	__LIB_4__::func_16(&(Local_134.f_144));
	if (CAM::DOES_CAM_EXIST(Local_134.f_78))
	{
		CAM::DESTROY_CAM(Local_134.f_78, false);
	}
	if (PATHFIND::_0xDE0EA444735C1368(Local_134.f_112[4]))
	{
		PATHFIND::_0x2C87C3E1C7B96EE2(Local_134.f_112[4]);
	}
	PED::_0x935CF6E42BAF7F4D(Local_134.f_80[0]);
	__LIB_14__::func_199(1, __LIB_1__::func_344("FS06_HRSE_BLK"));
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_134.f_80[0]))
	{
		PED::_0x411189E51B8020BA(Local_134.f_80[0], "Stealth");
		PED::_SET_PED_CROUCH_MOVEMENT(Local_134.f_80[0], false, 0, false);
	}
	if (__LIB_0__::func_866(uParam0->f_2, 0))
	{
		__LIB_1__::func_640(uParam0->f_2);
	}
	if (__LIB_1__::func_22(uParam0->f_2))
	{
		__LIB_1__::func_774(uParam0->f_2, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
	}
	__LIB_1__::func_723(0);
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		__LIB_0__::func_172(Local_134.f_112[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_134.f_103[iVar0]))
		{
			OBJECT::DELETE_OBJECT(&(Local_134.f_103[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 1;
	while (iVar0 <= 3)
	{
		iVar1 = MAP::GET_BLIP_FROM_ENTITY(Local_134.f_80[iVar0]);
		__LIB_0__::func_325(&iVar1);
		iVar0++;
	}
	iVar0 = 1;
	while (iVar0 <= 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_134.f_80[iVar0]))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_134.f_80[iVar0]));
		}
		iVar0++;
	}
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	iVar2 = __LIB_5__::func_297(__LIB_1__::func_316(3, joaat("HAI_HUNTING_06")));
	MISC::CLEAR_BIT(&iVar2, 0);
	MISC::CLEAR_BIT(&iVar2, 1);
	MISC::CLEAR_BIT(&iVar2, 2);
	if (uParam0->f_14 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_134.f_143))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_134.f_143));
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(Local_134.f_143))
	{
		VEHICLE::DELETE_VEHICLE(&(Local_134.f_143));
	}
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		PED::_0x411189E51B8020BA(Global_35, "Stealth");
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
	PED::SET_PED_CONFIG_FLAG(Local_134.f_80[0], 297, false);
	PED::SET_PED_CONFIG_FLAG(Local_134.f_80[0], 315, false);
	PED::SET_PED_CONFIG_FLAG(Local_134.f_80[0], 130, false);
	PED::SET_PED_CONFIG_FLAG(Local_134.f_80[0], 331, false);
	PED::SET_PED_CONFIG_FLAG(Local_134.f_80[0], 330, false);
}

void func_21(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
						func_138(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_138(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_138(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_138(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_138(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_138(joaat("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_138(joaat("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_138(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_138(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_138(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_139(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_138(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_139(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_138(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_139(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_138(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_139(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_138(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_139(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_138(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_139(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_138(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_139(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_138(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_139(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_138(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_139(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_138(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_139(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_138(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_139(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_138(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_139(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_138(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_138(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_138(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_138(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_140();
						func_141(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
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
						func_138(joaat("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
							func_21(Global_1347702[21 /*49*/].f_15, 0, 0, 0, 0);
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
							func_21(Global_1347702[82 /*49*/].f_15, 0, 0, 0, 0);
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
							func_21(Global_1347702[83 /*49*/].f_15, 0, 0, 0, 0);
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
						func_138(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_138(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
		func_178();
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
							func_138(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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

void func_25()
{
	var uVar0;
	var uVar1;
	vector3 vVar2;
	__LIB_0__::func_319(4112);
	__LIB_0__::func_320(6);
	vVar2 = { func_192(Global_2621440[0 /*12066*/].f_9.f_7, &uVar0, &uVar1, 0, 1, 1, 0, 0, 0) };
	__LIB_0__::func_321(vVar2, uVar1, uVar0, 0);
	__LIB_0__::func_322(vVar2);
	Global_40.f_9.f_15 = __LIB_1__::func_447(vVar2, 0);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	MISC::SET_RANDOM_WEATHER_TYPE(false, true);
}

bool func_39(var uParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bVar0 = false;
	bVar1 = false;
	iVar2 = __LIB_0__::func_271(uParam0->f_2);
	if (ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar2, Global_35, 1, 1) || WEAPON::_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iVar2, joaat("WEAPON_THROWN_DYNAMITE"), 0))
		{
			StringCopy(&(uParam0->f_15), "FS06_FL_ATTK", 24);
			Local_134.f_130 = 2000;
			bVar0 = true;
		}
	}
	if (__LIB_0__::func_27(Local_134.f_128, 2097152))
	{
		StringCopy(&(uParam0->f_15), "FS06_FL_ABAND", 24);
		Local_134.f_130 = 3500;
		bVar0 = true;
	}
	if (__LIB_0__::func_27(Local_134.f_128, 1073741824 /* Float: 2f */))
	{
		StringCopy(&(uParam0->f_15), "FS06_FL_EGGDS", 24);
		Local_134.f_130 = 1500;
		bVar0 = true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_134.f_143))
	{
		if (WEAPON::_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_134.f_143, joaat("WEAPON_THROWN_DYNAMITE"), 0))
		{
			StringCopy(&(uParam0->f_15), "FS06_FL_BDSTR", 24);
			bVar1 = true;
		}
	}
	if (__LIB_0__::func_27(Local_134.f_128, 4194304))
	{
		StringCopy(&(uParam0->f_15), "FS06_FL_BDSTR", 24);
		bVar1 = true;
	}
	if (bVar0)
	{
		if (!__LIB_0__::func_75(&(Local_134.f_137)))
		{
			__LIB_1__::func_148(&(Local_134.f_137));
		}
		else if (__LIB_1__::func_871(&(Local_134.f_137)) > Local_134.f_130)
		{
			uParam0->f_14 = 2;
			AUDIO::TRIGGER_MUSIC_EVENT("BOB_HUNT06_FAIL");
			return true;
		}
	}
	if (bVar1)
	{
		uParam0->f_14 = 2;
		AUDIO::TRIGGER_MUSIC_EVENT("BOB_HUNT06_FAIL");
		return true;
	}
	if (Local_134.f_13 == 2)
	{
		if (Local_134.f_4 < 4)
		{
			StringCopy(&(uParam0->f_15), "FS06_F_RWLN", 24);
		}
		else if (Local_134.f_4 < 6)
		{
			StringCopy(&(uParam0->f_15), "FS06_F_RWLN", 24);
		}
		else
		{
			StringCopy(&(uParam0->f_15), "FS06_F_RWSH", 24);
		}
		uParam0->f_14 = 2;
		return true;
	}
	return false;
}

int func_45(var uParam0)
{
	func_223(uParam0, &Local_134);
	func_224(&Local_134);
	func_225(&Local_134);
	func_226(&Local_134);
	POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	switch (Local_134)
	{
		case 0:
			if (func_227(uParam0, &Local_134))
			{
				__LIB_1__::func_649(&Local_134, 1);
			}
			break;
		case 1:
			if (func_229(uParam0, &Local_134))
			{
				uParam0->f_14 = 1;
				uParam0->f_13 = 6;
				__LIB_1__::func_649(&Local_134, 2);
			}
			break;
		case 2:
			break;
	}
	return 1;
}

bool func_49(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	var uVar4;
	int iVar5;
	struct<11> Var6;
	char* sVar17;
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (__LIB_0__::func_51(&(uParam0->f_3), __LIB_0__::func_771(iVar0)))
		{
			if (__LIB_0__::func_903(iVar0))
			{
				if (!__LIB_1__::func_22(iVar0))
				{
					func_234(iVar0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
					return false;
				}
				if (((!__LIB_0__::func_866(iVar0, 0) && uParam0->f_1 != joaat("HAI_FIVE_FINGER_FILLET_01")) && uParam0->f_1 != joaat("HAI_FIVE_FINGER_FILLET_02")) && uParam0->f_1 != joaat("HAI_DOMINOES_01"))
				{
					__LIB_1__::func_551(iVar0, 0);
					AUDIO::STOP_PED_SPEAKING(__LIB_0__::func_271(iVar0), true);
				}
			}
			else if (!__LIB_1__::func_22(iVar0))
			{
				func_234(iVar0, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
				return false;
			}
		}
		iVar0++;
	}
	if (!func_236(uParam0))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
	{
		__LIB_1__::func_822(&vVar1, &uVar4);
		Var6.f_10 = 7;
		Var6 = 1;
		Var6.f_2 = 1;
		Var6.f_3 = 1;
		Var6.f_4 = 1;
		Var6.f_6 = { vVar1 };
		Var6.f_9 = uVar4;
		uParam0->f_4 = __LIB_4__::func_720(&iVar5, &Var6);
		if (iVar5 <= 0)
		{
			return false;
		}
	}
	__LIB_0__::func_772(uParam0);
	if (__LIB_0__::func_750(&(uParam0->f_9), 128))
	{
		if (!func_240(uParam0))
		{
			return false;
		}
	}
	sVar17 = __LIB_0__::func_758(uParam0->f_1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar17))
	{
		MISC::_0x1096603B519C905F(sVar17);
	}
	if (__LIB_0__::func_704())
	{
		__LIB_1__::func_716(1);
	}
	__LIB_0__::func_326(64);
	__LIB_0__::func_267(1);
	__LIB_0__::func_7(&Global_1935630, 256);
	if (__LIB_0__::func_272(Global_35, 0))
	{
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, true);
	}
	if (!__LIB_0__::func_13(32768))
	{
		func_244(Global_36, ENTITY::GET_ENTITY_HEADING(Global_35));
	}
	return true;
}

bool func_138(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
	if (!func_323(iParam0, iParam1, bParam2, iParam5))
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
				func_138(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
		__LIB_5__::func_391(28);
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
			if (!func_353(iParam0, iParam5, &bParam2, bParam3, bParam4))
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
						func_138(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_138(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_138(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_138(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_138(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_138(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_138(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				__LIB_5__::func_391(24);
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
					func_138(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_138(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
			__LIB_5__::func_507(iParam0);
		}
		if (__LIB_0__::func_192(iParam0, -1979000645))
		{
			__LIB_6__::func_187(iParam0);
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
				func_138(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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
		func_403(iParam0, iVar0, 0, bVar37, 0);
	}
	return true;
}

void func_139(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	bool bVar13;
	int iVar14;
	int iVar15;
	if (__LIB_0__::func_192(iParam0, 1989861793))
	{
		iVar0 = __LIB_0__::func_372(iParam0, 1697966752);
		if (iVar0 != 0)
		{
			Var3 = { __LIB_0__::func_373(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
			if (__LIB_0__::func_778(Var3, &iVar1, &iVar2, 0))
			{
				bVar13 = false;
				iVar14 = 0;
				while (iVar14 < iVar2)
				{
					iVar15 = __LIB_0__::func_374(iVar14, iVar1);
					if (iVar15 != iParam0 && __LIB_0__::func_144(iVar15, 0))
					{
						if (__LIB_1__::func_603(iVar15, 0, 0, 1, 0))
						{
							bVar13 = true;
						}
					}
					iVar14++;
				}
				__LIB_0__::func_375(iVar1);
				if (bVar13)
				{
					func_410(iParam0);
				}
				else
				{
					__LIB_1__::func_240(306, 0);
				}
			}
		}
	}
}

void func_140()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_411();
	func_412();
	func_413();
	func_414();
	func_415();
	__LIB_1__::func_848();
	__LIB_0__::func_376();
}

void func_141(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	func_418(iParam0, 1, 1, -142743235, 1);
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

void func_178()
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
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_459(&uVar4, &iVar1, &iVar2, &iVar3)))
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

Vector3 func_192(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10)
{
	vector3 vVar0;
	vVar0 = { func_474(vParam0, iParam3, iParam4, iParam5, iParam6, 1, iParam7, bParam8, bParam9, bParam10, -1, 1103626240 /* Float: 25f */) };
	if (__LIB_0__::func_86(vVar0))
	{
		vVar0 = { func_474(vParam0, iParam3, iParam4, 0, 1, 1, iParam7, bParam8, 0, 0, -1, 1103626240 /* Float: 25f */) };
	}
	return vVar0;
}

void func_223(var uParam0, var uParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_143) && ENTITY::IS_ENTITY_DEAD(uParam1->f_143))
	{
		__LIB_1__::func_581(&(uParam1->f_128), 4194304);
	}
}

void func_224(var uParam0)
{
	switch (uParam0->f_11)
	{
		case 0:
			break;
		case 1:
			BUILTIN::SETTIMERB(0);
			__LIB_1__::func_742(&uLocal_36, "HUNT06_IKNAP", uParam0->f_80[0], Global_35, 0, 0, 1, 1);
			__LIB_0__::func_19(&(uParam0->f_11), 0);
			break;
		case 3:
			if (!__LIB_0__::func_481(1))
			{
				__LIB_1__::func_742(&uLocal_36, "HUNT06_SR_LOC1x", uParam0->f_80[0], Global_35, 0, 0, 1, 1);
				__LIB_0__::func_19(&(uParam0->f_11), 0);
			}
			break;
		case 4:
			if (!__LIB_0__::func_481(1))
			{
				BUILTIN::SETTIMERB(0);
				__LIB_1__::func_742(&uLocal_36, "HUNT06_SR_LOC2", uParam0->f_80[0], Global_35, 0, 0, 1, 1);
				__LIB_0__::func_19(&(uParam0->f_11), 5);
			}
			break;
		case 5:
			if ((BUILTIN::TIMERB() > 1000 && __LIB_0__::func_481(1)) && AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("HUNT06_SR_LOC2") >= 1)
			{
				func_503(uParam0, 2, 1);
				__LIB_0__::func_19(&(uParam0->f_11), 0);
			}
			if (BUILTIN::TIMERB() > 3000 && !__LIB_0__::func_481(1))
			{
				func_503(uParam0, 2, 1);
				__LIB_0__::func_19(&(uParam0->f_11), 0);
			}
			break;
		case 8:
			if (!__LIB_0__::func_481(0))
			{
				__LIB_1__::func_742(&uLocal_36, "HUNT06_COMEON", uParam0->f_80[0], Global_35, 0, 0, 1, 1);
				__LIB_0__::func_19(&(uParam0->f_11), 0);
			}
			break;
		case 9:
			if (!__LIB_0__::func_481(1))
			{
				BUILTIN::SETTIMERB(0);
				__LIB_1__::func_742(&uLocal_36, "HUNT06_IG1_A", uParam0->f_80[0], Global_35, 0, 0, 1, 1);
				func_503(uParam0, 8, 1);
				__LIB_0__::func_19(&(uParam0->f_11), 10);
			}
			break;
		case 10:
			if (BUILTIN::TIMERB() > 6000)
			{
				__LIB_0__::func_19(&(uParam0->f_11), 0);
			}
			break;
		case 11:
			if (!__LIB_0__::func_481(0))
			{
				__LIB_1__::func_742(&uLocal_36, "HUNT06_LOC_01S", uParam0->f_80[0], Global_35, 0, 0, 1, 1);
				__LIB_0__::func_19(&(uParam0->f_11), 0);
			}
			break;
		case 12:
			if ((BUILTIN::TIMERB() > 3000 && !__LIB_1__::func_322("HUNT06_LOC_01C")) && !__LIB_0__::func_481(0))
			{
				__LIB_1__::func_742(&uLocal_36, "HUNT06_LOC_01E", uParam0->f_80[0], Global_35, 0, 0, 1, 1);
				__LIB_0__::func_19(&(uParam0->f_11), 0);
			}
			break;
		case 13:
			__LIB_1__::func_742(&uLocal_36, "HUNT06_LOC_02SP", uParam0->f_80[0], Global_35, 0, 0, 1, 1);
			__LIB_0__::func_19(&(uParam0->f_11), 0);
			break;
		case 15:
			__LIB_1__::func_742(&uLocal_36, "HUNT06_LOC_02E", uParam0->f_80[0], Global_35, 0, 0, 1, 1);
			__LIB_0__::func_19(&(uParam0->f_11), 0);
			break;
		case 14:
			__LIB_1__::func_742(&uLocal_36, "HUNT06_LOC_02R", uParam0->f_80[0], Global_35, 0, 0, 1, 1);
			func_503(uParam0, 1024, 1);
			__LIB_0__::func_19(&(uParam0->f_11), 0);
			break;
		case 16:
			__LIB_1__::func_742(&uLocal_36, "HUNT06_CONGRAT", uParam0->f_80[0], Global_35, 0, 0, 1, 1);
			__LIB_0__::func_19(&(uParam0->f_11), 0);
			break;
		case 17:
			if (!__LIB_0__::func_481(1) && __LIB_1__::func_742(&uLocal_36, "HUNT06_HURRY", uParam0->f_80[0], Global_35, 0, 0, 1, 1))
			{
				__LIB_0__::func_19(&(uParam0->f_11), 0);
			}
			break;
		case 18:
			if (!__LIB_0__::func_481(1) && __LIB_1__::func_742(&uLocal_36, "HUNT06_JUMPIN", uParam0->f_80[0], Global_35, 0, 0, 1, 1))
			{
				__LIB_0__::func_19(&(uParam0->f_11), 0);
			}
			break;
		case 19:
			__LIB_1__::func_742(&uLocal_36, "HUNT06_GOHOME", uParam0->f_80[0], Global_35, 0, 0, 1, 1);
			__LIB_0__::func_19(&(uParam0->f_11), 0);
			break;
		case 20:
			if (!__LIB_0__::func_481(1) && __LIB_1__::func_742(&uLocal_36, "HUNT06_DISTKILL", uParam0->f_80[0], Global_35, 0, 0, 1, 1))
			{
				__LIB_0__::func_19(&(uParam0->f_11), 0);
			}
			break;
		case 21:
			if (!__LIB_0__::func_481(1) && __LIB_1__::func_742(&uLocal_36, "HUNT06_ALERTRUN", uParam0->f_80[0], Global_35, 0, 0, 1, 1))
			{
				__LIB_0__::func_19(&(uParam0->f_11), 0);
			}
			break;
		case 22:
			if (!__LIB_0__::func_27(uParam0->f_129, 2))
			{
				if (!__LIB_0__::func_481(0))
				{
					if (__LIB_1__::func_742(&uLocal_36, "HUNT06_SELLING", Global_35, uParam0->f_80[0], 0, 0, 1, 1))
					{
						__LIB_0__::func_19(&(uParam0->f_11), 0);
						__LIB_1__::func_581(&(uParam0->f_129), 2);
					}
				}
			}
			break;
		case 23:
			if (!__LIB_0__::func_27(uParam0->f_129, 4))
			{
				if (!__LIB_0__::func_481(0))
				{
					if (__LIB_1__::func_742(&uLocal_36, "HUNT06_DAWD1", uParam0->f_80[0], Global_35, 0, 0, 1, 1))
					{
						__LIB_0__::func_19(&(uParam0->f_11), 0);
						__LIB_1__::func_581(&(uParam0->f_129), 4);
					}
				}
			}
			break;
		case 24:
			if (!__LIB_0__::func_27(uParam0->f_129, 8))
			{
				if (!__LIB_0__::func_481(0))
				{
					if (__LIB_1__::func_742(&uLocal_36, "HUNT06_DAWD2", uParam0->f_80[0], Global_35, 0, 0, 1, 1))
					{
						__LIB_0__::func_19(&(uParam0->f_11), 0);
						__LIB_1__::func_581(&(uParam0->f_129), 8);
					}
				}
			}
			break;
		case 25:
			if (!__LIB_0__::func_27(uParam0->f_129, 16))
			{
				if (!__LIB_0__::func_481(0))
				{
					if (__LIB_1__::func_742(&uLocal_36, "HUNT06_DAWD3", uParam0->f_80[0], Global_35, 0, 0, 1, 1))
					{
						__LIB_0__::func_19(&(uParam0->f_11), 0);
						__LIB_1__::func_581(&(uParam0->f_129), 16);
					}
				}
			}
			break;
		case 26:
			if (!__LIB_0__::func_27(uParam0->f_129, 32))
			{
				if (!__LIB_0__::func_481(0))
				{
					if (__LIB_1__::func_742(&uLocal_36, "HUNT06_DAWD4", uParam0->f_80[0], Global_35, 0, 0, 1, 1))
					{
						__LIB_0__::func_19(&(uParam0->f_11), 0);
						__LIB_1__::func_581(&(uParam0->f_129), 32);
					}
				}
			}
			break;
		case 27:
			if (!__LIB_0__::func_27(uParam0->f_129, 64))
			{
				if (!__LIB_0__::func_481(0))
				{
					if (__LIB_1__::func_742(&uLocal_36, "HUNT06_GRAB1", uParam0->f_80[0], Global_35, 0, 0, 1, 1))
					{
						__LIB_0__::func_19(&(uParam0->f_11), 0);
						__LIB_1__::func_581(&(uParam0->f_129), 64);
					}
				}
			}
			break;
		case 28:
			if (!__LIB_0__::func_27(uParam0->f_129, 128))
			{
				if (!__LIB_0__::func_481(0))
				{
					if (__LIB_1__::func_742(&uLocal_36, "HUNT06_GRAB2", uParam0->f_80[0], Global_35, 0, 0, 1, 1))
					{
						__LIB_0__::func_19(&(uParam0->f_11), 0);
						__LIB_1__::func_581(&(uParam0->f_129), 128);
					}
				}
			}
			break;
		case 29:
			if (!__LIB_0__::func_27(uParam0->f_129, 256))
			{
				if (!__LIB_0__::func_481(0))
				{
					if (__LIB_1__::func_742(&uLocal_36, "HUNT06_GUMBO", uParam0->f_80[0], Global_35, 0, 0, 1, 1))
					{
						__LIB_0__::func_19(&(uParam0->f_11), 0);
						__LIB_1__::func_581(&(uParam0->f_129), 256);
					}
				}
			}
			break;
		case 30:
			if (!__LIB_0__::func_27(uParam0->f_129, 512))
			{
				if (!__LIB_0__::func_481(0))
				{
					if (__LIB_1__::func_742(&uLocal_36, "HUNT06_JUMPINR", uParam0->f_80[0], Global_35, 0, 0, 1, 1))
					{
						__LIB_0__::func_19(&(uParam0->f_11), 0);
						__LIB_1__::func_581(&(uParam0->f_129), 512);
					}
				}
			}
			break;
		case 31:
			if (!__LIB_0__::func_27(uParam0->f_129, 1024))
			{
				if (!__LIB_0__::func_481(0))
				{
					if (__LIB_1__::func_742(&uLocal_36, "HUNT06_ROWCHAT1", uParam0->f_80[0], Global_35, 0, 0, 1, 1))
					{
						__LIB_0__::func_19(&(uParam0->f_11), 0);
						__LIB_1__::func_581(&(uParam0->f_129), 1024);
					}
				}
			}
			break;
		case 32:
			if (!__LIB_0__::func_27(uParam0->f_129, 2048))
			{
				if (!__LIB_0__::func_481(0))
				{
					if (__LIB_1__::func_742(&uLocal_36, "HUNT06_ROWCHAT2", uParam0->f_80[0], Global_35, 0, 0, 1, 1))
					{
						__LIB_0__::func_19(&(uParam0->f_11), 0);
						__LIB_1__::func_581(&(uParam0->f_129), 2048);
					}
				}
			}
			break;
		case 34:
			if (!__LIB_0__::func_27(uParam0->f_129, 8192))
			{
				if (!__LIB_0__::func_481(0))
				{
					if (__LIB_1__::func_742(&uLocal_36, "HUNT06_ROWEXO_N", uParam0->f_80[0], Global_35, 0, 0, 1, 1))
					{
						__LIB_0__::func_19(&(uParam0->f_11), 0);
						__LIB_1__::func_581(&(uParam0->f_129), 8192);
					}
				}
			}
			break;
		case 33:
			if (!__LIB_0__::func_27(uParam0->f_129, 4096))
			{
				if (!__LIB_0__::func_481(0))
				{
					if (__LIB_1__::func_742(&uLocal_36, "HUNT06_ROWEXO_Y", uParam0->f_80[0], Global_35, 0, 0, 1, 1))
					{
						__LIB_0__::func_19(&(uParam0->f_11), 0);
						__LIB_1__::func_581(&(uParam0->f_129), 4096);
					}
				}
			}
			break;
		case 35:
			if (!__LIB_0__::func_27(uParam0->f_129, 16384))
			{
				if (!__LIB_0__::func_481(0))
				{
					if (__LIB_1__::func_742(&uLocal_36, "HUNT06_ROWDAWD", uParam0->f_80[0], Global_35, 0, 0, 1, 1))
					{
						__LIB_0__::func_19(&(uParam0->f_11), 0);
						__LIB_1__::func_581(&(uParam0->f_129), 16384);
					}
				}
			}
			break;
	}
}

void func_225(var uParam0)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_402))
	{
		return;
	}
	if (!__LIB_0__::func_27(uParam0->f_128, 65536))
	{
		if (__LIB_6__::func_724(&(uParam0->f_160), uParam0->f_402, 1, 1))
		{
			__LIB_1__::func_581(&(uParam0->f_128), 65536);
		}
	}
}

void func_226(var uParam0)
{
	switch (uParam0->f_12)
	{
		case 1:
			break;
		case 2:
			break;
		case 4:
			if (!func_507(&(uParam0->f_57[1]), &(uParam0->f_77), func_506(1), 0, 1, 0))
			{
				return;
			}
			__LIB_1__::func_581(&(uParam0->f_64), uParam0->f_12);
			func_508(uParam0, 1);
			break;
		case 8:
			if (!func_507(&(uParam0->f_57[2]), &(uParam0->f_77), func_506(2), 0, 1, 0))
			{
				return;
			}
			STREAMING::REQUEST_MODEL(joaat("P_CRAYFISH01X"), false);
			if (!STREAMING::HAS_MODEL_LOADED(joaat("P_CRAYFISH01X")))
			{
				return;
			}
			__LIB_1__::func_581(&(uParam0->f_64), uParam0->f_12);
			func_508(uParam0, 1);
			break;
		case 16:
			break;
		case 32:
			if (!func_507(&(uParam0->f_57[5]), &(uParam0->f_77), func_506(5), 0, 1, 0))
			{
				return;
			}
			__LIB_1__::func_581(&(uParam0->f_64), uParam0->f_12);
			func_508(uParam0, 1);
			break;
	}
}

bool func_227(var uParam0, int iParam1)
{
	float fVar0;
	if (ENTITY::IS_ENTITY_DEAD(iParam1->f_80[0]))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1->f_143))
	{
		VEHICLE::_0x98A7598C579EE871(iParam1->f_143, -20f, -1);
	}
	fVar0 = __LIB_0__::func_94(Global_35, func_509(1), 1);
	if (fVar0 > 8f)
	{
		func_510(iParam1);
	}
	__LIB_1__::func_725();
	if (iParam1->f_4 < 4)
	{
		func_512(iParam1, "FS06_O_STRT", func_509(12), 100f, 75f, 150f);
	}
	else if (iParam1->f_4 < 6)
	{
		func_512(iParam1, "FS06_O_RD01", func_509(13), 100f, 75f, 150f);
	}
	else
	{
		func_512(iParam1, "FS06_O_LAND", func_509(13), 100f, 75f, 150f);
	}
	switch (iParam1->f_4)
	{
		case 0:
			if (MAP::DOES_BLIP_EXIST(uParam0->f_43))
			{
				MAP::REMOVE_BLIP(&(uParam0->f_43));
			}
			if (VOLUME::_DOES_VOLUME_EXIST(iParam1->f_112[4]) && ENTITY::DOES_ENTITY_EXIST(iParam1->f_143))
			{
				PED::_0x7C00CFC48A782DC0(iParam1->f_112[4], iParam1->f_143, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
			}
			func_513(uParam0->f_2, 0, 1, 1, 1, 0);
			if (__LIB_0__::func_750(&(uParam0->f_9), 128))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("BOB_HUNT06_RESTART_1");
			}
			else
			{
				AUDIO::TRIGGER_MUSIC_EVENT("BOB_HUNT06_START");
			}
			__LIB_6__::func_813(uParam0, func_514(0), func_514(1), 0, 1);
			func_516(&(iParam1->f_4), 1);
			break;
		case 1:
			func_503(iParam1, 1, 1);
			if (!ENTITY::IS_ENTITY_DEAD(iParam1->f_143))
			{
				VEHICLE::_0x6835AFEA10E186F4(iParam1->f_143, 2);
			}
			PED::_0xAAB050DA48B57978(iParam1->f_80[0], "CTaskPoliceCrimeSceneSearch_HighIntensity", 0, -1, 4);
			__LIB_0__::func_19(&(iParam1->f_11), 1);
			func_516(&(iParam1->f_4), 2);
			break;
		case 2:
			__LIB_9__::func_314(&(iParam1->f_80[0]), func_509(9), 500);
			if (__LIB_0__::func_94(Global_35, func_509(12), 1) < 12f && !__LIB_0__::func_481(1))
			{
				__LIB_0__::func_19(&(iParam1->f_11), 3);
				if (!ENTITY::IS_ENTITY_DEAD(iParam1->f_143))
				{
					VEHICLE::_0x6835AFEA10E186F4(iParam1->f_143, 1);
				}
				__LIB_1__::func_283(&(iParam1->f_153), 0);
				func_516(&(iParam1->f_4), 3);
			}
			break;
		case 3:
			__LIB_9__::func_314(&(iParam1->f_80[0]), func_509(9), 500);
			if (__LIB_0__::func_265(&(iParam1->f_153)) >= 5f)
			{
				func_516(&(iParam1->f_4), 4);
			}
			break;
		case 4:
			__LIB_0__::func_19(&(iParam1->f_11), 4);
			func_516(&(iParam1->f_4), 5);
			break;
		case 5:
			__LIB_9__::func_314(&(iParam1->f_80[0]), func_509(10), 500);
			if (__LIB_0__::func_94(Global_35, func_509(13), 1) < 6f)
			{
				func_516(&(iParam1->f_4), 6);
			}
			break;
		case 6:
			func_516(&(iParam1->f_4), 7);
			break;
		case 7:
			__LIB_0__::func_19(&(iParam1->f_11), 9);
			if (!ENTITY::IS_ENTITY_DEAD(iParam1->f_143))
			{
				VEHICLE::_0x6835AFEA10E186F4(iParam1->f_143, 2);
			}
			func_516(&(iParam1->f_4), 8);
			break;
		case 8:
			__LIB_9__::func_314(&(iParam1->f_80[0]), func_509(11), 500);
			if (fVar0 < 15f)
			{
			}
			__LIB_1__::func_694(Global_35, func_509(1), 0, 1112014848 /* Float: 50f */, 1106247680 /* Float: 30f */, 1097859072 /* Float: 15f */, 1084227584 /* Float: 5f */, 1, 1, 1, 0);
			if (!__LIB_0__::func_27(iParam1->f_128, 134217728))
			{
				if (ENTITY::GET_ENTITY_SPEED(iParam1->f_143) < 0.1f)
				{
					if (__LIB_0__::func_94(Global_35, 2017.092f, -1883.428f, 39.4902f, 1) < 20f)
					{
						if (!__LIB_0__::func_481(0))
						{
							__LIB_0__::func_19(&(iParam1->f_11), 8);
							__LIB_1__::func_581(&(iParam1->f_128), 134217728);
						}
					}
				}
			}
			if (fVar0 < 5f)
			{
				if (__LIB_3__::func_330(iParam1->f_80[0], iParam1->f_143, 0))
				{
					VEHICLE::_0x6835AFEA10E186F4(iParam1->f_143, 1);
					VEHICLE::BRING_VEHICLE_TO_HALT(iParam1->f_143, 2f, -1, false);
					if (ENTITY::GET_ENTITY_SPEED(iParam1->f_143) < 0.4f && __LIB_1__::func_742(&uLocal_36, "HUNT06_IG1_B", iParam1->f_80[0], Global_35, 0, 0, 1, 1))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iParam1->f_143, true);
						TASK::TASK_LEAVE_VEHICLE(iParam1->f_80[0], iParam1->f_143, 131072, 0);
						__LIB_1__::func_148(&(iParam1->f_131));
						func_516(&(iParam1->f_4), 9);
					}
				}
			}
			break;
		case 9:
			if (!__LIB_3__::func_330(iParam1->f_80[0], iParam1->f_143, 1) && __LIB_0__::func_265(&(iParam1->f_131)) > 3f)
			{
				if (__LIB_3__::func_330(Global_35, iParam1->f_143, 0) && !__LIB_0__::func_163(Global_35, joaat("SCRIPT_TASK_LEAVE_VEHICLE")))
				{
					TASK::TASK_LEAVE_VEHICLE(Global_35, iParam1->f_143, 131072, 0);
				}
			}
			if (!__LIB_3__::func_330(Global_35, iParam1->f_143, 0))
			{
				__LIB_0__::func_37(&(iParam1->f_131));
				func_516(&(iParam1->f_4), 10);
			}
			break;
		case 10:
			if (!__LIB_3__::func_330(Global_35, iParam1->f_143, 1) && !__LIB_3__::func_330(iParam1->f_80[0], iParam1->f_143, 1))
			{
				TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(iParam1->f_80[0], false, 1f);
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iParam1->f_80[0], func_521(1), 0, 25600, -1, 0, 0, -1);
				PED::_0x2208438012482A1A(iParam1->f_80[0], false, false);
				if (!ENTITY::IS_ENTITY_DEAD(iParam1->f_143))
				{
					VEHICLE::_0x6835AFEA10E186F4(iParam1->f_143, 3);
				}
				func_503(iParam1, 16, 1);
				func_508(iParam1, 4);
				func_516(&(iParam1->f_4), 11);
			}
			break;
		case 11:
			return true;
	}
	return false;
}

bool func_229(var uParam0, int iParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam1->f_80[0]))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return false;
	}
	switch (iParam1->f_9)
	{
		case 0:
			func_522(&(iParam1->f_9), 1);
			break;
		case 1:
			if (func_523(uParam0, iParam1))
			{
				func_522(&(iParam1->f_9), 2);
			}
			break;
		case 2:
			if (func_524(uParam0, iParam1))
			{
				func_522(&(iParam1->f_9), 3);
			}
			break;
		case 3:
			if (func_525(uParam0, iParam1))
			{
				func_522(&(iParam1->f_9), 4);
			}
			break;
		case 4:
			return true;
	}
	return false;
}

int func_234(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
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
						__LIB_1__::func_774(iParam0, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
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
				func_531(Global_1360165[iParam0 /*1157*/], vVar0, fParam6, 2, 1073741824 /* Float: 2f */);
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

bool func_236(var uParam0)
{
	bool bVar0;
	int iVar1;
	__LIB_1__::func_725();
	bVar0 = true;
	if (Local_134.f_1 > 0)
	{
		func_510(&Local_134);
	}
	switch (Local_134.f_1)
	{
		case 0:
			STREAMING::REQUEST_MODEL(func_542(0), false);
			STREAMING::REQUEST_MODEL(func_542(1), false);
			STREAMING::REQUEST_MODEL(func_542(2), false);
			STREAMING::REQUEST_MODEL(func_542(3), false);
			TASK::REQUEST_WAYPOINT_RECORDING(func_521(0));
			TASK::REQUEST_WAYPOINT_RECORDING(func_521(1));
			Local_134.f_1 = 1;
			break;
		case 1:
			if (!func_543(&Local_134))
			{
				return false;
			}
			if (HUD::_DOES_TEXT_DATABASE_EXIST("HNT6AUD"))
			{
				HUD::_TEXT_DATABASE_REQUEST("HNT6AUD");
			}
			if (!STREAMING::HAS_MODEL_LOADED(func_542(0)))
			{
				bVar0 = false;
			}
			if (!STREAMING::HAS_MODEL_LOADED(func_542(1)))
			{
				bVar0 = false;
			}
			if (!STREAMING::HAS_MODEL_LOADED(func_542(2)))
			{
				bVar0 = false;
			}
			if (!STREAMING::HAS_MODEL_LOADED(func_542(3)))
			{
				bVar0 = false;
			}
			if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(func_521(0)))
			{
				bVar0 = false;
			}
			if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(func_521(1)))
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				PED::_0xF008E0BA1FE1D644(5);
				__LIB_0__::func_326(2);
				func_544(uParam0->f_37);
				Local_134.f_1 = 2;
			}
			break;
		case 2:
			if (PED::_0x5C16855277819BBF() != 5)
			{
				return false;
			}
			iVar1 = 0;
			while (iVar1 <= 4)
			{
				if (!func_545(&(Local_134.f_112[iVar1]), iVar1))
				{
					return false;
				}
				iVar1++;
			}
			__LIB_1__::func_723(1);
			Local_134.f_1 = 3;
			break;
		case 3:
			if (!__LIB_1__::func_749(uParam0))
			{
				return false;
			}
			if (!__LIB_1__::func_22(uParam0->f_2))
			{
				Local_134.f_80[0] = func_234(uParam0->f_2, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
				return false;
			}
			if (!__LIB_0__::func_272(Local_134.f_80[0], 0))
			{
				if (__LIB_1__::func_22(uParam0->f_2))
				{
					Local_134.f_80[0] = __LIB_0__::func_167(uParam0->f_2);
				}
				return false;
			}
			if (!func_548(&(Local_134.f_80[1]), 3, 15))
			{
				return false;
			}
			if (!func_548(&(Local_134.f_80[2]), 3, 16))
			{
				return false;
			}
			if (!func_548(&(Local_134.f_80[3]), 3, 17))
			{
				return false;
			}
			MISC::CLEAR_AREA(func_509(1), 25f, 8);
			MISC::_SET_WEATHER_TYPE(joaat("SUNNY"), false, true, true, 60f, false);
			__LIB_0__::func_928(&uLocal_36, Local_134.f_80[0], "PEARSON", 0);
			Local_134.f_1 = 4;
			break;
		case 4:
			if (!ENTITY::IS_ENTITY_DEAD(Local_134.f_80[0]))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_134.f_80[0], true);
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_134.f_80[1]) && VOLUME::_DOES_VOLUME_EXIST(Local_134.f_112[0]))
			{
				TASK::TASK_STAND_STILL(Local_134.f_80[1], -1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_134.f_80[1], true);
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_134.f_80[2]) && VOLUME::_DOES_VOLUME_EXIST(Local_134.f_112[0]))
			{
				TASK::TASK_STAND_STILL(Local_134.f_80[2], -1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_134.f_80[2], true);
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_134.f_80[3]) && VOLUME::_DOES_VOLUME_EXIST(Local_134.f_112[0]))
			{
				TASK::TASK_STAND_STILL(Local_134.f_80[2], -1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_134.f_80[3], true);
			}
			__LIB_17__::func_761(uParam0);
			__LIB_0__::func_705(uParam0->f_2, 1);
			__LIB_14__::func_199(0, __LIB_1__::func_344("FS06_HRSE_BLK"));
			__LIB_0__::func_707(uParam0->f_2, 0, 1, 0);
			PED::SET_PED_CONFIG_FLAG(Local_134.f_80[0], 297, true);
			PED::SET_PED_CONFIG_FLAG(Local_134.f_80[0], 315, true);
			PED::SET_PED_CONFIG_FLAG(Local_134.f_80[0], 130, true);
			PED::SET_PED_CONFIG_FLAG(Local_134.f_80[0], 331, true);
			PED::SET_PED_CONFIG_FLAG(Local_134.f_80[0], 330, true);
			return true;
	}
	return false;
}

bool func_240(var uParam0)
{
	if (__LIB_0__::func_1(Global_1935630, 2048))
	{
		return false;
	}
	if (func_581(uParam0))
	{
		CAM::DO_SCREEN_FADE_IN(500);
		__LIB_1__::func_164(0);
		HUD::DISPLAY_HUD(true);
		MAP::DISPLAY_RADAR(true);
		return true;
	}
	return false;
}

int func_244(vector3 vParam0, float fParam3)
{
	int iVar0;
	if (MISC::_0x1B065A2BF7953815(0) != 1)
	{
		__LIB_1__::func_837(0, 1);
	}
	else
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_399(Global_35, 0, 2, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		iVar0 = func_589(0, 0);
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
	__LIB_1__::func_617(0, vParam0, fParam3);
	return 1;
}

bool func_323(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (__LIB_0__::func_2() == -1)
	{
		if (__LIB_0__::func_787(iParam0) && __LIB_1__::func_800(iParam0))
		{
			func_637(iParam0, iParam1, 1, &bParam2, iParam3);
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

bool func_353(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (!__LIB_1__::func_761(iParam0, &uVar1, 1, 0, 0))
		{
			func_637(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = __LIB_0__::func_940(iVar0);
			if (WEAPON::_IS_WEAPON_SNIPER(iVar0))
			{
				__LIB_1__::func_708(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("WEAPON_FISHINGROD") || iVar0 == joaat("WEAPON_KIT_BINOCULARS"))
			{
				__LIB_1__::func_708(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("WEAPON_LASSO"))
			{
				__LIB_1__::func_708(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
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
					__LIB_1__::func_708(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					__LIB_1__::func_708(iVar0, WEAPON::_GET_WEAPON_CLIP_SIZE(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
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
					if (!__LIB_1__::func_708(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!__LIB_1__::func_708(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!__LIB_1__::func_708(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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

void func_403(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	int iVar1;
	char cVar2[32];
	int iVar6;
	struct<2> Var7;
	int iVar10;
	int iVar11;
	int iVar12;
	char* sVar13;
	int iVar14;
	char* sVar15;
	if (iParam0 == joaat("AMMO_MOONSHINEJUG"))
	{
		return;
	}
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return;
	}
	if (iParam0 == joaat("KIT_HANDHELD_CATALOG"))
	{
		return;
	}
	if (iParam1 == 0)
	{
		return;
	}
	if (!__LIB_0__::func_455())
	{
		__LIB_0__::func_456(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, __LIB_0__::func_196(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, __LIB_0__::func_196(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && __LIB_0__::func_774(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = __LIB_0__::func_356(iParam0);
	iVar10 = 0;
	iVar11 = joaat("INVENTORY");
	if ((iVar6 == joaat("AMMO") && iParam0 != joaat("AMMO_HATCHET")) && iParam0 != joaat("AMMO_HATCHET_CLEAVER"))
	{
		iVar10 = joaat("AMMO_TYPES");
		iVar11 = joaat("AMMO_TYPES");
	}
	if (iVar6 == joaat("WEAPON_MOD") || iVar6 == joaat("WEAPON_DECORATION"))
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_742(iParam0, &Var7, iVar11, iVar10, 0, joaat("UI_ITEMVIEWER")))
	{
		Var7 = "_PLACEHOLDER";
		Var7.f_1 = "inventory_items";
	}
	if (MISC::GET_HASH_KEY(Var7) == 121560594)
	{
		Var7 = "DOCUMENT_MAP_GENERIC";
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(Var7))
	{
		return;
	}
	iVar12 = joaat("COLOR_PURE_WHITE");
	sVar13 = "Transaction_Positive";
	iVar14 = 0;
	if (bVar0)
	{
		iVar12 = joaat("COLOR_GREYMID");
		sVar13 = "Transaction_Negative";
		iVar14 = 1;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_IS_OVERPOWERED_ITEM(iParam0))
	{
		if (!bVar0 && !bParam2)
		{
			iVar12 = joaat("COLOR_RPG_SPECIAL_1");
		}
		else
		{
			iVar12 = joaat("COLOR_YELLOWDARK");
		}
	}
	sVar15 = __LIB_0__::func_54(MISC::_CREATE_VAR_STRING(10, &cVar2, MISC::_CREATE_VAR_STRING(0, __LIB_0__::func_776(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || __LIB_0__::func_192(iParam0, 1443104131)) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_USED")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP_USED"))
	{
		sVar15 = MISC::_CREATE_VAR_STRING(0, __LIB_0__::func_776(iParam0));
	}
	__LIB_0__::func_924(sVar15, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

void func_410(int iParam0)
{
	int iVar0;
	iVar0 = -1;
	switch (iParam0)
	{
		case joaat("DOCUMENT_PAMPHLET_SPECIAL_HORSE_MEDICINE"):
			iVar0 = 307;
			break;
		case joaat("DOCUMENT_PAMPHLET_SPECIAL_HORSE_REVIVER"):
			iVar0 = 308;
			break;
		case joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"):
			iVar0 = 309;
			break;
		case joaat("DOCUMENT_PAMPHLET_SPECIAL_HORSE_STIMULANT"):
			iVar0 = 310;
			break;
		case joaat("DOCUMENT_PAMPHLET_SUPER_MEAL"):
			iVar0 = 311;
			break;
		case joaat("DOCUMENT_PAMPHLET_SPECIAL_MEDICINE"):
			iVar0 = 312;
			break;
		case joaat("DOCUMENT_PAMPHLET_SPECIAL_RESTORATIVE"):
			iVar0 = 313;
			break;
		case joaat("DOCUMENT_PAMPHLET_SPECIAL_SNAKE_OIL"):
			iVar0 = 314;
			break;
		case joaat("DOCUMENT_PAMPHLET_SPECIAL_TONIC"):
			iVar0 = 315;
			break;
		case joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"):
			iVar0 = 316;
			break;
		case joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"):
			iVar0 = 317;
			break;
		case joaat("DOCUMENT_PAMPHLET_COVER_SCENT"):
			iVar0 = 319;
			break;
		case joaat("DOCUMENT_PAMPHLET_DYNAMITE_ARROW"):
			iVar0 = 320;
			break;
		case joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"):
			iVar0 = 321;
			break;
		case joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"):
			iVar0 = 322;
			break;
		case joaat("DOCUMENT_PAMPHLET_POISON_ARROW"):
			iVar0 = 323;
			break;
		case joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"):
			iVar0 = 324;
			break;
		case joaat("DOCUMENT_PAMPHLET_VOLATILE_DYNAMITE"):
			iVar0 = 325;
			break;
		case joaat("DOCUMENT_PAMPHLET_MOLOTOV"):
			iVar0 = 326;
			break;
		case joaat("DOCUMENT_PAMPHLET_VOLATILE_MOLOTOV"):
			iVar0 = 327;
			break;
		case joaat("DOCUMENT_PAMPHLET_HOMING_TOMAHAWK"):
			iVar0 = 328;
			break;
		case joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"):
			iVar0 = 329;
			break;
		case joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"):
			iVar0 = 330;
			Jump @411; //curOff = 368
			iVar0 = 331;
			Jump @411; //curOff = 376
			iVar0 = 332;
			Jump @411; //curOff = 384
			iVar0 = 333;
			Jump @411; //curOff = 392
			iVar0 = 334;
			Jump @411; //curOff = 400
			iVar0 = 335;
			if (iVar0 != -1)
			{
				__LIB_1__::func_240(iVar0, 0);
			}
		}
void func_411()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_746(0);
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
	func_746(1);
}

void func_412()
{
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_138(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_413()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_749(0);
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
	func_749(1);
}

void func_414()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_1__::func_432(15000, 0, 0, 0, 1);
			func_749(0);
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
	func_749(1);
}

void func_415()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_138(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_138(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_418(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_418(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
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

int func_418(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			func_403(iParam0, -iParam1, bVar0, bVar1, bVar2);
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
			func_418(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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
		func_403(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	__LIB_1__::func_879(iParam0, iParam1);
	return 1;
}

int func_459(var uParam0, int iParam1, int iParam2, int iParam3)
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
	iVar11 = (func_795(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_952(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_138(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	__LIB_1__::func_432(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

Vector3 func_474(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
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
		bVar10 = func_810();
		if (VOLUME::_DOES_VOLUME_EXIST(bVar10))
		{
		}
	}
	if (!func_811(Global_1310720.f_21))
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

void func_503(int iParam0, int iParam1, bool bParam2)
{
	if (__LIB_0__::func_27(iParam0->f_127, iParam1))
	{
		return;
	}
	if (bParam2)
	{
		__LIB_0__::func_325(&(iParam0->f_79));
	}
	switch (iParam1)
	{
		case 1:
			__LIB_1__::func_324("FS06_O_STRT");
			iParam0->f_79 = MAP::_BLIP_ADD_FOR_RADIUS(408396114, func_509(12), 9f);
			break;
		case 2:
			__LIB_1__::func_324("FS06_O_RD01");
			iParam0->f_79 = MAP::_BLIP_ADD_FOR_RADIUS(408396114, func_509(13), 10f);
			break;
		case 4:
			iParam0->f_79 = MAP::_BLIP_ADD_FOR_RADIUS(408396114, func_509(14), 10f);
			break;
		case 8:
			__LIB_1__::func_324("FS06_O_LAND");
			iParam0->f_79 = MAP::_BLIP_ADD_FOR_COORD(408396114, func_509(1));
			break;
		case 16:
			__LIB_0__::func_900(17);
			__LIB_1__::func_324("FS06_O_FHOS");
			break;
		case 32:
			__LIB_1__::func_422("FS06_O_FHOS", 7500, 0, 1, 0, 0, -1, -1, 0);
			break;
		case 512:
			__LIB_1__::func_422("FS06_O_SRCH", 7500, 0, 1, 0, 0, -1, -1, 0);
			iParam0->f_79 = MAP::_BLIP_ADD_FOR_COORD(408396114, func_509(28));
			__LIB_0__::func_745(17);
			break;
		case 1024:
			__LIB_1__::func_324("FS06_O_SRCH");
			break;
		case 2048:
			__LIB_1__::func_422("FS06_O_SRCH", 7500, 0, 1, 0, 0, -1, -1, 0);
			break;
		case 64:
			__LIB_0__::func_745(17);
			__LIB_1__::func_422("FS06_O_CEGG", 7500, 0, 1, 0, 0, -1, -1, 0);
			iParam0->f_118[0] = MAP::_BLIP_ADD_FOR_RADIUS(-1282792512, func_509(24), 20f);
			break;
		case 128:
			if (MAP::DOES_BLIP_EXIST(iParam0->f_118[0]))
			{
				MAP::REMOVE_BLIP(&(iParam0->f_118[0]));
			}
			if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_143))
			{
				iParam0->f_79 = MAP::_BLIP_ADD_FOR_RADIUS(408396114, ENTITY::GET_ENTITY_COORDS(iParam0->f_143, true, false), 8f);
			}
			__LIB_1__::func_422("FS06_O_RHOS", 7500, 0, 1, 0, 0, -1, -1, 0);
			break;
		case 256:
			iParam0->f_79 = MAP::_BLIP_ADD_FOR_COORD(408396114, func_509(4));
			__LIB_1__::func_324("FS06_O_RDCK");
			iParam0->f_67 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
			break;
		case 4096:
			__LIB_0__::func_900(17);
			__LIB_1__::func_422("FS06_WAIT", 7500, 0, 1, 0, 0, -1, -1, 0);
			break;
	}
	__LIB_1__::func_581(&(iParam0->f_127), iParam1);
}

char[] func_506(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script@common@cnv_camp@caprs@hunt06@ig4_flanked_gators@action";
		case 1:
			return "script@common@cnv_camp@caprs@hunt06@ig2_shallow_water_hole@action_a";
		case 2:
			return "script@common@cnv_camp@caprs@hunt06@ig2_shallow_water_hole@action_b";
		case 3:
			return "script@common@cnv_camp@caprs@hunt06@ig2_shallow_water_hole@grab";
		case 4:
			return "script@common@cnv_camp@caprs@hunt06@ig2_shallow_water_hole@player";
		case 5:
			return "script@common@cnv_camp@caprs@hunt06@ig3_stop_swamp@action";
		default:
			break;
	}
	return "FAIL -- 1";
}

bool func_507(var uParam0, var uParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(*uParam0, true, false))
		{
			*uParam1 = 0;
			return true;
		}
	}
	if (!*uParam1 && !ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		if (bParam4)
		{
			*uParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(sParam2, iParam5, sParam3, false, true);
		}
		ANIMSCENE::LOAD_ANIM_SCENE(*uParam0);
		*uParam1 = 1;
	}
	return false;
}

void func_508(int iParam0, int iParam1)
{
	if (__LIB_0__::func_27(iParam0->f_64, iParam1))
	{
		iParam0->f_12 = 1;
	}
	else
	{
		iParam0->f_12 = iParam1;
	}
}

Vector3 func_509(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2031.26f, -1893.948f, 40.6459f;
		case 1:
			return 2027.585f, -1890.37f, 40.56217f;
		case 2:
			return 2064.707f, -1885.492f, 40.6317f;
		case 3:
			return 2022.658f, -1891.32f, 40.15999f;
		case 4:
			return 1982.525f, -1857.015f, 40.5579f;
		case 5:
			return 1983.451f, -1862.43f, 40.49999f;
		case 6:
			return 2066.554f, -1902.728f, 40.63449f;
		case 7:
			return 2068.034f, -1882.158f, 40.6691f;
		case 8:
			return 2069.391f, -1881.983f, 40.66987f;
		case 9:
			return 2019.253f, -1859.991f, 41.77441f;
		case 10:
			return 2026.394f, -1874.531f, 41.58564f;
		case 11:
			return 2027.075f, -1892.115f, 41.6136f;
		case 12:
			return 2002.637f, -1866.503f, 40.49999f;
		case 13:
			return 2016.72f, -1886.462f, 40.49999f;
		case 14:
			return 2021.443f, -1885.805f, 40.5f;
		case 15:
			return 2067.66f, -1914.36f, 40.86f;
		case 16:
			return 2077.957f, -1907.256f, 40.64867f;
		case 17:
			return 2071.993f, -1910.36f, 40.5f;
		case 18:
			return 1983.26f, -1856.4f, 40.96f;
		case 19:
			return 2066.554f, -1902.728f, 40.63449f;
		case 20:
			return 2070.611f, -1925.289f, 41.67448f;
		case 21:
			return 2083.134f, -1917.26f, 41.07687f;
		case 22:
			return 2076.651f, -1910.698f, 40.8026f;
		case 23:
			return 2063.647f, -1882.2f, 40.79704f;
		case 24:
			return 2079.855f, -1917.969f, 40.83665f;
		case 25:
			return 2082.016f, -1916.592f, 40.88255f;
		case 26:
			return 2042.152f, -1886.615f, 40.54886f;
		case 27:
			return 2058.205f, -1865.462f, 40.64285f;
		case 28:
			return 2058.2f, -1866.728f, 40.77211f;
		case 29:
			return 2057.209f, -1868.232f, 40.51323f;
		case 30:
			return 1997.684f, -1870.47f, 40.5f;
		case 31:
			return 2030.731f, -1891.132f, 40.4637f;
		case 32:
			return 2032.035f, -1891.953f, 40.5398f;
		case 33:
			return 2065.128f, -1884.421f, 40.7049f;
		case 34:
			return 1981.882f, -1858.75f, 40.96897f;
		case 35:
			return 1980.227f, -1861.105f, 40.92942f;
		case 36:
			return 2070.197f, -1882.268f, 40.69093f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_510(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_143) && PED::IS_PED_IN_VEHICLE(Global_35, iParam0->f_143, false))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_EXIT"), false);
	}
}

int func_512(int iParam0, char* sParam1, vector3 vParam2, float fParam5, float fParam6, float fParam7)
{
	switch (iParam0->f_13)
	{
		case 0:
			if (__LIB_0__::func_94(Global_35, vParam2, 1) > fParam5)
			{
				__LIB_0__::func_565(sParam1, 7500, 0, 0, 0, 1);
				__LIB_1__::func_324(sParam1);
				__LIB_1__::func_148(&(iParam0->f_156));
				iParam0->f_13 = 1;
			}
			break;
		case 1:
			if (__LIB_0__::func_75(&(iParam0->f_156)))
			{
				if (__LIB_0__::func_265(&(iParam0->f_156)) > 2f)
				{
					__LIB_1__::func_422(sParam1, 7500, 0, 1, 0, 0, -1, -1, 0);
					__LIB_0__::func_37(&(iParam0->f_156));
				}
			}
			if (__LIB_0__::func_94(Global_35, vParam2, 1) > fParam7)
			{
				iParam0->f_13 = 2;
			}
			else if (__LIB_0__::func_94(Global_35, vParam2, 1) < fParam6)
			{
				__LIB_1__::func_324("FS06_O_STRT");
				iParam0->f_13 = 0;
			}
			break;
		case 2:
			return 0;
	}
	return 1;
}

void func_513(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, char* sParam5)
{
	int iVar0;
	if (bParam1)
	{
		COMPANION::_0xD747979C053EFA7A(__LIB_0__::func_110());
		COMPANION::_0xBF6583E926D13890(Global_35, 1);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
		{
			if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sParam5))
			{
				COMPANION::_0x0C6A00DAE896614C(Global_35, sParam5);
			}
		}
		if (__LIB_0__::func_31(iParam0))
		{
			if (__LIB_0__::func_866(iParam0, 0))
			{
				COMPANION::_0x991E3346D788F20F(__LIB_0__::func_271(iParam0), 1);
			}
		}
		iVar0 = 0;
		while (iVar0 < 27)
		{
			if (__LIB_0__::func_866(iVar0, 1))
			{
				COMPANION::_0x0A8FD91EDE7B328A(__LIB_0__::func_271(iVar0), 1);
			}
			iVar0++;
		}
		COMPANION::_0x9C902084F48D2E6C(__LIB_0__::func_110());
		if (bParam3)
		{
			COMPANION::_0xA079FF7CFB9AC8BD(__LIB_0__::func_110(), 2);
		}
		if (bParam2)
		{
			COMPANION::_0x8FB98B719AA0075A(__LIB_0__::func_110(), 10f, -1f, -1, -1f);
		}
		if (__LIB_0__::func_31(iParam0))
		{
			PLAYER::_0x086549F3B0381CB1(PLAYER::GET_PLAYER_INDEX(), 0);
			PLAYER::_0xAC22AA6DF4D1C1DE(PLAYER::PLAYER_ID(), __LIB_0__::func_271(iParam0), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 4, 2, 0);
		}
	}
	else
	{
		COMPANION::_0xBF6583E926D13890(Global_35, 0);
		COMPANION::_0xD747979C053EFA7A(__LIB_0__::func_110());
		PLAYER::_0x12E09E278C6C29B7(PLAYER::PLAYER_ID());
		if (bParam4)
		{
		}
	}
}

struct<4> func_514(int iParam0)
{
	struct<4> Var0;
	switch (iParam0)
	{
		case 0:
			Var0 = { func_509(5) };
			Var0.f_3 = func_851(5);
			break;
		case 1:
			Var0 = { func_509(1) };
			Var0.f_3 = func_851(1);
			break;
		case 2:
			Var0 = { func_509(33) };
			Var0.f_3 = func_851(33);
			break;
		case 3:
			Var0 = { func_509(30) };
			Var0.f_3 = func_851(30);
			break;
	}
	return Var0;
}

void func_516(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
	func_853();
}

char* func_521(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "cact_fishing06_hoseaFlank";
		case 1:
			return "cact_fishing06_hoseaWalk";
		default:
			break;
	}
	return "FAIL -- 0";
}

void func_522(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
	func_853();
}

bool func_523(var uParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	if (ENTITY::IS_ENTITY_DEAD(iParam1->f_80[0]))
	{
		return false;
	}
	TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(func_521(1), ENTITY::GET_ENTITY_COORDS(iParam1->f_80[0], true, false), &iVar0);
	func_857(iParam1);
	switch (iParam1->f_5)
	{
		case 0:
			if (func_858())
			{
				func_859();
			}
			func_508(iParam1, 4);
			if (ENTITY::IS_ENTITY_DEAD(iParam1->f_143))
			{
				return false;
			}
			if (MAP::DOES_BLIP_EXIST(uParam0->f_43))
			{
				MAP::REMOVE_BLIP(&(uParam0->f_43));
			}
			if (!PED::IS_PED_IN_VEHICLE(Global_35, iParam1->f_143, false) && !PED::IS_PED_IN_VEHICLE(iParam1->f_80[0], iParam1->f_143, false))
			{
				__LIB_6__::func_813(uParam0, func_514(1), func_514(2), 1, 2);
				func_860();
				func_503(iParam1, 16, 1);
				func_861(&(iParam1->f_5), 1);
			}
			break;
		case 1:
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_134.f_57[1]))
			{
				func_508(iParam1, 4);
			}
			else if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_134.f_57[1], true, false))
			{
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(Local_134.f_80[0], 658540077, true) == 1)
			{
				func_508(iParam1, 8);
				func_862(iParam1);
				__LIB_1__::func_148(&(iParam1->f_131));
				func_863(iParam1);
				func_861(&(iParam1->f_5), 2);
			}
			break;
		case 2:
			__LIB_2__::func_966(iParam1->f_80[0], Global_35, 1, 1, 1, 0, 0, 1, 1, 1, 1);
			__LIB_2__::func_966(Global_35, iParam1->f_80[0], 1, 1, 1, 0, 0, 1, 1, 1, 1);
			__LIB_2__::func_961(&(iParam1->f_40), iParam1->f_80[0]);
			bVar1 = false;
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam1->f_57[1]))
			{
				if ((ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iParam1->f_57[1], false) && __LIB_0__::func_265(&(iParam1->f_131)) > 3f) && !__LIB_0__::func_481(1))
				{
					if (!__LIB_0__::func_27(iParam1->f_129, 2))
					{
						__LIB_0__::func_19(&(iParam1->f_11), 22);
					}
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if ((__LIB_0__::func_27(iParam1->f_129, 2) && !__LIB_0__::func_27(iParam1->f_129, 4)) && __LIB_0__::func_665(Global_35, iParam1->f_80[0], 1, 1) > 8f)
			{
				__LIB_0__::func_19(&(iParam1->f_11), 23);
			}
			if (!__LIB_0__::func_27(iParam1->f_128, 536870912) && iVar0 >= 9)
			{
				if (PATHFIND::_0xDE0EA444735C1368(iParam1->f_112[4]))
				{
					PATHFIND::_0x2C87C3E1C7B96EE2(iParam1->f_112[4]);
				}
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iParam1->f_80[0], 0))
				{
					TASK::WAYPOINT_PLAYBACK_PAUSE(iParam1->f_80[0], 1, 0, 0);
				}
				__LIB_1__::func_581(&(iParam1->f_128), 536870912);
			}
			if (bVar1)
			{
				func_861(&(iParam1->f_5), 3);
			}
			break;
		case 3:
			if ((!__LIB_0__::func_481(1) && __LIB_0__::func_27(iParam1->f_129, 2)) && func_867(iParam1))
			{
				__LIB_1__::func_726(iParam1->f_80[0], 1);
				__LIB_1__::func_727(Global_35, 1);
				__LIB_2__::func_962(&(iParam1->f_40));
				func_861(&(iParam1->f_5), 4);
			}
			break;
		case 4:
			func_871(iParam1);
			func_503(iParam1, 32, 1);
			func_861(&(iParam1->f_5), 5);
			break;
		case 5:
			__LIB_2__::func_966(iParam1->f_80[0], Global_35, 1, 1, 1, 0, 0, 1, 1, 1, 1);
			__LIB_2__::func_966(Global_35, iParam1->f_80[0], 1, 1, 1, 0, 0, 1, 1, 1, 1);
			if (!__LIB_0__::func_27(iParam1->f_128, 268435456))
			{
				__LIB_0__::func_19(&(iParam1->f_11), 12);
				__LIB_1__::func_581(&(iParam1->f_128), 268435456);
			}
			if ((!__LIB_0__::func_27(iParam1->f_128, 2048) && !__LIB_0__::func_481(1)) && iVar0 >= 28)
			{
				__LIB_0__::func_19(&(iParam1->f_11), 13);
				__LIB_1__::func_581(&(iParam1->f_128), 2048);
			}
			if (iVar0 >= 37)
			{
				TASK::WAYPOINT_PLAYBACK_PAUSE(iParam1->f_80[0], 1, 0, 0);
				__LIB_1__::func_726(iParam1->f_80[0], 1);
				__LIB_1__::func_727(Global_35, 1);
				__LIB_2__::func_962(&(iParam1->f_40));
				__LIB_0__::func_19(&(iParam1->f_10), 0);
				func_861(&(iParam1->f_5), 6);
			}
			break;
		case 6:
			if (func_873(iParam1))
			{
				BUILTIN::SETTIMERA(0);
				iParam1->f_19 = { func_509(28) };
				func_503(iParam1, 512, 1);
				__LIB_1__::func_148(&(iParam1->f_131));
				func_861(&(iParam1->f_5), 7);
			}
			break;
		case 7:
			func_874(&(Local_134.f_80[0]), &Global_35, 500);
			if (__LIB_0__::func_265(&(iParam1->f_131)) > 3f && !__LIB_0__::func_27(iParam1->f_129, 8))
			{
				__LIB_0__::func_19(&(iParam1->f_11), 24);
			}
			if (__LIB_0__::func_265(&(iParam1->f_131)) > 18f && !__LIB_0__::func_27(iParam1->f_129, 16))
			{
				__LIB_0__::func_19(&(iParam1->f_11), 25);
			}
			if (iParam1->f_19.f_9)
			{
				__LIB_0__::func_19(&(iParam1->f_11), 27);
			}
			if (func_875(&(iParam1->f_19)))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 256, false);
				__LIB_0__::func_19(&(iParam1->f_11), 14);
				func_876(&(iParam1->f_19));
				__LIB_1__::func_148(&(iParam1->f_131));
				func_861(&(iParam1->f_5), 8);
			}
			break;
		case 8:
			if (!__LIB_0__::func_27(iParam1->f_127, 2048))
			{
				if (!__LIB_1__::func_322("HUNT06_LOC_02R"))
				{
					if (__LIB_0__::func_75(&(iParam1->f_131)))
					{
						if (__LIB_0__::func_265(&(iParam1->f_131)) > 8f)
						{
							func_503(iParam1, 2048, 1);
						}
						if (__LIB_4__::func_809(&(iParam1->f_19)))
						{
							__LIB_1__::func_148(&(iParam1->f_131));
							__LIB_1__::func_581(&(iParam1->f_127), 2048);
						}
					}
				}
			}
			else if ((!__LIB_0__::func_27(iParam1->f_129, 32) && !__LIB_0__::func_481(1)) && __LIB_0__::func_265(&(iParam1->f_131)) > 5f)
			{
				__LIB_0__::func_19(&(iParam1->f_11), 26);
			}
			func_874(&(Local_134.f_80[0]), &Global_35, 500);
			if (iParam1->f_19.f_9)
			{
				__LIB_0__::func_19(&(iParam1->f_11), 28);
			}
			if (func_875(&(iParam1->f_19)))
			{
				__LIB_1__::func_681(&(iParam1->f_127), 16);
				func_503(iParam1, 16, 1);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 256, false);
				__LIB_0__::func_19(&(iParam1->f_11), 16);
				func_861(&(iParam1->f_5), 9);
			}
			break;
		case 9:
			func_508(iParam1, 32);
			func_879(iParam1);
			func_861(&(iParam1->f_5), 10);
			break;
		case 10:
			if (!__LIB_0__::func_27(iParam1->f_129, 256))
			{
				__LIB_0__::func_19(&(iParam1->f_11), 29);
			}
			func_880(iParam1);
			if (iVar0 >= 51)
			{
				BUILTIN::SETTIMERA(0);
				func_881(iParam1);
				__LIB_1__::func_726(iParam1->f_80[0], 1);
				__LIB_1__::func_727(Global_35, 1);
				__LIB_2__::func_962(&(iParam1->f_40));
				if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_80[3]))
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar2);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_509(6), 1.5f, -1, 0.25f, 1048576, 40000f);
					TASK::TASK_STAND_STILL(0, -1);
					__LIB_1__::func_474(iParam1->f_80[3], &iVar2, 0, 0, 1, 1);
				}
				func_861(&(iParam1->f_5), 11);
			}
			else
			{
				__LIB_2__::func_966(iParam1->f_80[0], Global_35, 1, 1, 1, 0, 0, 1, 1, 1, 1);
				__LIB_2__::func_966(Global_35, iParam1->f_80[0], 1, 1, 1, 0, 0, 1, 1, 1, 1);
			}
			break;
		case 11:
			func_880(iParam1);
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam1->f_57[5]))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam1->f_57[5], false))
				{
					PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "Stealth", 1f, -1);
					PED::_SET_PED_BLACKBOARD_FLOAT(iParam1->f_80[0], "Stealth", 1f, -1);
					AUDIO::TRIGGER_MUSIC_EVENT("BOB_HUNT06_GATORS");
					__LIB_0__::func_745(17);
					func_861(&(iParam1->f_5), 12);
				}
			}
			else
			{
				func_861(&(iParam1->f_5), 12);
			}
			break;
		case 12:
			func_880(iParam1);
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam1->f_57[5]))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam1->f_57[5], false))
				{
					if (ANIMSCENE::_0x005E6F28DD7ED58D(iParam1->f_57[5], "pearson") || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iParam1->f_57[5], false))
					{
						PED::FORCE_PED_MOTION_STATE(iParam1->f_80[0], joaat("MOTIONSTATE_CROUCH_WALK"), false, 0, false);
						func_883(iParam1->f_80[0], 0);
						PED::_0x2208438012482A1A(iParam1->f_80[0], false, false);
						func_861(&(iParam1->f_5), 13);
					}
				}
				else
				{
					func_861(&(iParam1->f_5), 13);
				}
			}
			else
			{
				func_861(&(iParam1->f_5), 13);
			}
			break;
		case 13:
			func_884(iParam1);
			return true;
	}
	return false;
}

bool func_524(var uParam0, int iParam1)
{
	float fVar0;
	if (iParam1->f_66 == 0 && !__LIB_0__::func_27(iParam1->f_128, 1073741824 /* Float: 2f */))
	{
		if (func_885())
		{
			__LIB_1__::func_581(&(iParam1->f_128), 1073741824 /* Float: 2f */);
		}
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iParam1->f_112[2]))
	{
		if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam1->f_112[2], true, 0))
		{
			if (!__LIB_0__::func_75(&(iParam1->f_134)))
			{
				__LIB_1__::func_283(&(iParam1->f_134), 0);
			}
			if (__LIB_0__::func_75(&(iParam1->f_134)) && __LIB_1__::func_871(&(iParam1->f_134)) > 10000)
			{
				__LIB_1__::func_581(&(Local_134.f_128), 2097152);
				return false;
			}
		}
		else if (__LIB_0__::func_75(&(iParam1->f_134)))
		{
			__LIB_0__::func_37(&(iParam1->f_134));
		}
	}
	if (__LIB_1__::func_205(Global_35, iParam1->f_112[0], 1, 0) && !__LIB_0__::func_27(iParam1->f_128, 16384))
	{
		func_887(iParam1->f_143, 3);
		ENTITY::FREEZE_ENTITY_POSITION(iParam1->f_143, true);
		__LIB_1__::func_581(&(iParam1->f_128), 16384);
	}
	func_888(iParam1);
	if (iParam1->f_7 >= 6)
	{
		func_889(iParam1);
	}
	if (iParam1->f_7 < 10)
	{
		func_890(iParam1);
	}
	if (iParam1->f_7 < 10)
	{
		if (__LIB_2__::func_343(iParam1->f_80[0], iParam1->f_143, 0) && __LIB_0__::func_665(Global_35, iParam1->f_80[0], 1, 1) < 15f)
		{
			func_892(iParam1);
		}
	}
	switch (iParam1->f_7)
	{
		case 0:
			if (func_858())
			{
				func_859();
			}
			func_893(iParam1);
			if (!func_507(&(iParam1->f_57[0]), &(iParam1->f_77), func_506(0), 0, 1, 0))
			{
				return false;
			}
			if (MAP::DOES_BLIP_EXIST(uParam0->f_43))
			{
				MAP::REMOVE_BLIP(&(uParam0->f_43));
			}
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam1->f_57[0], "pearson", iParam1->f_80[0], 0);
			func_544(Global_36);
			__LIB_6__::func_813(uParam0, func_514(2), func_514(3), 2, 3);
			iParam1->f_145 = __LIB_1__::func_614(joaat("PROVISION_GATOR_EGG"), 0, 0);
			iParam1->f_146 = __LIB_8__::func_959(joaat("PROVISION_GATOR_EGG"), 0);
			if (!ENTITY::IS_ENTITY_DEAD(Local_134.f_143))
			{
				ENTITY::SET_ENTITY_HEADING(Local_134.f_143, func_851(30));
			}
			func_895(&(iParam1->f_7), 3);
			break;
		case 3:
			if (func_858())
			{
				func_883(iParam1->f_80[0], 0);
				func_503(&Local_134, 4096, 1);
				func_859();
			}
			fVar0 = __LIB_0__::func_94(iParam1->f_80[0], 2053.998f, -1898.839f, 40.65331f, 1);
			if (fVar0 < 9f)
			{
				if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
				}
			}
			if (fVar0 < 1.5f)
			{
				func_893(iParam1);
				PED::_0x411189E51B8020BA(iParam1->f_80[0], "Stealth");
				PED::_SET_PED_CROUCH_MOVEMENT(Local_134.f_80[0], false, 0, false);
				ANIMSCENE::START_ANIM_SCENE(iParam1->f_57[0]);
				func_895(&(iParam1->f_7), 4);
			}
			break;
		case 4:
			if (func_858())
			{
				func_893(iParam1);
				func_859();
			}
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam1->f_57[0]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam1->f_57[0], false))
			{
				if (!__LIB_0__::func_27(iParam1->f_128, 262144) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iParam1->f_57[0]) > 0.45f)
				{
					__LIB_1__::func_581(&(iParam1->f_128), 262144);
				}
				if (!__LIB_0__::func_27(iParam1->f_128, 131072) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iParam1->f_57[0]) > 0.6f)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
					__LIB_1__::func_581(&(iParam1->f_128), 131072);
				}
				if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iParam1->f_57[0]) > 0.71f)
				{
					func_895(&(iParam1->f_7), 5);
				}
				if (__LIB_0__::func_27(iParam1->f_128, 1048576))
				{
					__LIB_1__::func_581(&(iParam1->f_128), 16777216);
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iParam1->f_57[0], "pearson", iParam1->f_80[0]);
					ANIMSCENE::ABORT_ANIM_SCENE(iParam1->f_57[0], true);
					TASK::TASK_ENTER_VEHICLE(iParam1->f_80[0], iParam1->f_143, 20000, 1, 2f, 262144, 0);
					PED::_0x2208438012482A1A(iParam1->f_80[0], false, false);
					__LIB_0__::func_37(&(iParam1->f_131));
					func_895(&(iParam1->f_7), 6);
				}
			}
			break;
		case 5:
			if (func_858())
			{
				__LIB_1__::func_148(&(iParam1->f_131));
				__LIB_1__::func_581(&(iParam1->f_128), 32768);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
				func_859();
			}
			if (ANIMSCENE::_0x005E6F28DD7ED58D(iParam1->f_57[0], "pearson"))
			{
				TASK::TASK_ENTER_VEHICLE(iParam1->f_80[0], iParam1->f_143, 20000, 1, 2f, 262144, 0);
				PED::_0x2208438012482A1A(iParam1->f_80[0], false, false);
				__LIB_0__::func_37(&(iParam1->f_131));
				func_895(&(iParam1->f_7), 6);
			}
			break;
		case 6:
			if (func_858())
			{
				func_503(iParam1, 64, 1);
				if (!__LIB_0__::func_75(&(iParam1->f_131)))
				{
					__LIB_1__::func_148(&(iParam1->f_131));
				}
				if (__LIB_0__::func_27(iParam1->f_128, 16777216))
				{
				}
				func_859();
			}
			if (!__LIB_2__::func_343(iParam1->f_80[0], iParam1->f_143, 0) && TASK::GET_SCRIPT_TASK_STATUS(iParam1->f_80[0], -1794415470, true) != 1)
			{
				TASK::TASK_ENTER_VEHICLE(iParam1->f_80[0], iParam1->f_143, 20000, 1, 2f, 262144, 0);
			}
			if (((__LIB_0__::func_27(iParam1->f_128, 1048576) && __LIB_0__::func_27(iParam1->f_128, 2)) || (__LIB_0__::func_27(iParam1->f_128, 16) && __LIB_0__::func_27(iParam1->f_128, 2))) || ((!__LIB_1__::func_205(Global_35, iParam1->f_112[1], 1, 0) && __LIB_0__::func_665(Global_35, iParam1->f_143, 1, 1) < 24f) && __LIB_0__::func_27(iParam1->f_128, 2)))
			{
				__LIB_1__::func_148(&(iParam1->f_131));
				func_895(&(iParam1->f_7), 10);
			}
			if (__LIB_0__::func_27(iParam1->f_128, 8))
			{
				__LIB_1__::func_148(&(iParam1->f_131));
				func_895(&(iParam1->f_7), 10);
			}
			break;
		case 7:
			if (func_858())
			{
				func_859();
			}
			func_896(iParam1->f_80[1], Global_35, iParam1->f_112[1]);
			func_895(&(iParam1->f_7), 6);
			break;
		case 8:
			if (func_858())
			{
				func_859();
			}
			func_897(iParam1->f_80[2], 25, 2f);
			func_897(iParam1->f_80[3], 25, 1.5f);
			func_895(&(iParam1->f_7), 6);
			break;
		case 9:
			if (func_858())
			{
				func_859();
			}
			break;
		case 10:
			if (!__LIB_0__::func_75(&(iParam1->f_131)))
			{
				__LIB_1__::func_148(&(iParam1->f_131));
			}
			else if (__LIB_0__::func_265(&(iParam1->f_131)) >= 2f && __LIB_0__::func_27(iParam1->f_128, 8))
			{
				return true;
			}
			if ((__LIB_0__::func_27(iParam1->f_128, 1048576) || __LIB_0__::func_27(iParam1->f_128, 16)) || __LIB_0__::func_665(Global_35, iParam1->f_143, 1, 1) < 24f)
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_525(var uParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	char cVar2[32];
	int iVar6;
	fVar1 = __LIB_0__::func_665(Global_35, iParam1->f_80[0], 1, 1);
	if (iParam1->f_8 < 3)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(iParam1->f_112[2]))
		{
			if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam1->f_112[2], true, 0))
			{
				if (!__LIB_0__::func_75(&(iParam1->f_134)))
				{
					__LIB_1__::func_283(&(iParam1->f_134), 0);
				}
				if (__LIB_0__::func_75(&(iParam1->f_134)) && __LIB_1__::func_871(&(iParam1->f_134)) > 10000)
				{
					__LIB_1__::func_581(&(Local_134.f_128), 2097152);
					return false;
				}
			}
			else if (__LIB_0__::func_75(&(iParam1->f_134)))
			{
				__LIB_0__::func_37(&(iParam1->f_134));
			}
		}
	}
	if ((!ENTITY::IS_ENTITY_DEAD(iParam1->f_143) && ENTITY::_IS_ENTITY_FROZEN(iParam1->f_143)) && PED::IS_PED_IN_VEHICLE(Global_35, iParam1->f_143, false))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iParam1->f_143, false);
	}
	func_888(iParam1);
	StringCopy(&cVar2, func_898(0), 32);
	switch (iParam1->f_8)
	{
		case 0:
			if (func_858())
			{
				func_503(iParam1, 128, 1);
				func_859();
			}
			func_899(&(iParam1->f_8), 1);
			break;
		case 1:
			iVar6 = 1;
			while (iVar6 <= 3)
			{
				if ((ENTITY::IS_ENTITY_DEAD(iParam1->f_80[iVar6]) || __LIB_0__::func_94(iParam1->f_80[iVar6], func_509(24), 1) < 30f) || __LIB_0__::func_665(Global_35, iParam1->f_143, 1, 1) < 24f)
				{
					func_899(&(iParam1->f_8), 2);
				}
				iVar6++;
			}
			break;
		case 2:
			if (func_858())
			{
				func_503(iParam1, 128, 1);
				func_859();
			}
			if ((fVar1 < 40f && fVar1 > 25f) && !__LIB_0__::func_27(iParam1->f_128, 4096))
			{
				__LIB_0__::func_19(&(iParam1->f_11), 17);
				__LIB_1__::func_581(&(iParam1->f_128), 4096);
			}
			if (fVar1 < 20f)
			{
				__LIB_1__::func_148(&(iParam1->f_131));
				__LIB_0__::func_19(&(iParam1->f_11), 18);
				func_899(&(iParam1->f_8), 4);
			}
			break;
		case 4:
			if (func_858())
			{
				func_859();
			}
			if ((!__LIB_0__::func_27(iParam1->f_129, 512) && fVar1 < 12f) && __LIB_0__::func_265(&(iParam1->f_131)) > 18f)
			{
				__LIB_0__::func_19(&(iParam1->f_11), 30);
			}
			if (((!AITRANSPORT::_0x619E63980BFC0096(Global_35, iParam1->f_143, 0) && !PED::IS_PED_IN_VEHICLE(Global_35, iParam1->f_143, false)) && __LIB_0__::func_48(Global_35, iParam1->f_143, 7f, 1)) && !PED::IS_PED_IN_MELEE_COMBAT(Global_35))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 0, false);
				HUD::_DISPLAY_HUD_COMPONENT(724769646);
				TASK::TASK_ENTER_VEHICLE(Global_35, iParam1->f_143, 20000, -1, 2f, 1, 0);
			}
			if (AITRANSPORT::_0x619E63980BFC0096(Global_35, iParam1->f_143, 0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iParam1->f_143, false);
			}
			else if (!ENTITY::_IS_ENTITY_FROZEN(iParam1->f_143) && !PED::IS_PED_IN_VEHICLE(Global_35, iParam1->f_143, true))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iParam1->f_143, true);
			}
			if ((!ENTITY::IS_ENTITY_DEAD(iParam1->f_143) && PED::IS_PED_IN_VEHICLE(Global_35, iParam1->f_143, false)) && PED::IS_PED_IN_VEHICLE(iParam1->f_80[0], iParam1->f_143, false))
			{
				__LIB_0__::func_325(&(iParam1->f_118[0]));
				__LIB_0__::func_325(&(uParam0->f_43));
				AUDIO::TRIGGER_MUSIC_EVENT("BOB_HUNT06_RETURN");
				if (!ENTITY::IS_ENTITY_DEAD(Global_35))
				{
					PED::_0x411189E51B8020BA(Global_35, "Stealth");
				}
				if (ENTITY::_IS_ENTITY_FROZEN(iParam1->f_143))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iParam1->f_143, false);
				}
				if (VEHICLE::_0x404527BC03DA0E6C(iParam1->f_143))
				{
					VEHICLE::_0x7C06330BFDDA182E(iParam1->f_143);
				}
				VEHICLE::_0x6835AFEA10E186F4(iParam1->f_143, 3);
				HUD::_HIDE_HUD_COMPONENT(724769646);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
				__LIB_6__::func_813(uParam0, func_514(2), func_514(3), 2, 3);
				__LIB_1__::func_148(&(iParam1->f_150));
				func_899(&(iParam1->f_8), 5);
			}
			break;
		case 5:
			if (func_858())
			{
				func_503(iParam1, 256, 1);
				__LIB_0__::func_19(&(iParam1->f_11), 19);
				__LIB_1__::func_148(&(iParam1->f_131));
				func_901(iParam1, 0);
				func_859();
			}
			if (!__LIB_0__::func_27(iParam1->f_129, 1024))
			{
				if (__LIB_0__::func_265(&(iParam1->f_131)) > 3f)
				{
					__LIB_1__::func_148(&(iParam1->f_131));
					__LIB_0__::func_19(&(iParam1->f_11), 31);
				}
			}
			else if (!__LIB_0__::func_27(iParam1->f_129, 8192) && !__LIB_0__::func_27(iParam1->f_129, 4096))
			{
				if (__LIB_0__::func_265(&(iParam1->f_131)) > 8f)
				{
					if (__LIB_1__::func_187(43))
					{
						__LIB_1__::func_148(&(iParam1->f_131));
						__LIB_0__::func_19(&(iParam1->f_11), 33);
					}
					else
					{
						__LIB_1__::func_148(&(iParam1->f_131));
						__LIB_0__::func_19(&(iParam1->f_11), 34);
					}
				}
			}
			else if (!__LIB_0__::func_27(iParam1->f_129, 2048))
			{
				if (__LIB_0__::func_265(&(iParam1->f_131)) > 2f)
				{
					__LIB_1__::func_148(&(iParam1->f_131));
					__LIB_0__::func_19(&(iParam1->f_11), 32);
				}
			}
			else if (!__LIB_0__::func_27(iParam1->f_129, 16384))
			{
				if (ENTITY::GET_ENTITY_SPEED(iParam1->f_143) < 0.2f && __LIB_0__::func_265(&(iParam1->f_131)) > 10f)
				{
					__LIB_0__::func_19(&(iParam1->f_11), 35);
				}
			}
			if (__LIB_0__::func_481(1))
			{
				__LIB_1__::func_148(&(iParam1->f_150));
			}
			if (__LIB_0__::func_75(&(iParam1->f_150)) && !__LIB_0__::func_27(iParam1->f_65, 256))
			{
				if (__LIB_0__::func_265(&(iParam1->f_150)) > 6f)
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, iParam1->f_67, true) < 5f)
					{
						__LIB_1__::func_422("FS06_O_RDCK", 7500, 0, 1, 0, 0, -1, -1, 0);
					}
					__LIB_0__::func_37(&(iParam1->f_150));
					__LIB_1__::func_581(&(iParam1->f_65), 256);
				}
			}
			__LIB_6__::func_724(&(iParam1->f_160), &cVar2, 1, 1);
			fVar0 = __LIB_0__::func_665(Global_35, iParam1->f_80[0], 1, 1);
			if (fVar0 > 10f)
			{
				func_899(&(iParam1->f_8), 8);
				return false;
			}
			if (__LIB_0__::func_94(Global_35, func_509(18), 1) < 25f)
			{
				VEHICLE::_0x6835AFEA10E186F4(iParam1->f_143, 1);
				func_899(&(iParam1->f_8), 6);
			}
			break;
		case 6:
			__LIB_6__::func_724(&(iParam1->f_160), &cVar2, 1, 1);
			if (__LIB_0__::func_94(Global_35, func_509(18), 1) < 12f)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("BOB_HUNT06_STOP");
				func_899(&(iParam1->f_8), 7);
			}
			break;
		case 7:
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			if (func_858())
			{
				func_859();
			}
			if (__LIB_18__::func_215(&(iParam1->f_160), __LIB_0__::func_271(uParam0->f_2), "MrPearson", 0, 1, 1))
			{
				if (__LIB_0__::func_866(uParam0->f_2, 0))
				{
					__LIB_1__::func_640(uParam0->f_2);
				}
				__LIB_0__::func_705(17, 0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(__LIB_0__::func_271(uParam0->f_2), 1957.658f, -1877.784f, 40.9145f, 1f, -1, 0.25f, 0, 40000f);
			}
			if (__LIB_18__::func_215(&(iParam1->f_160), Global_35, "ARTHUR", 0, 1, 1))
			{
			}
			if (func_904(cVar2, &(iParam1->f_160)))
			{
				if (__LIB_1__::func_614(joaat("PROVISION_GATOR_EGG"), 0, 0) > 0)
				{
					func_418(joaat("PROVISION_GATOR_EGG"), 1, 0, -142743235, 0);
				}
				func_899(&(iParam1->f_8), 8);
			}
			break;
		case 8:
			if (func_858())
			{
				func_859();
			}
			func_899(&(iParam1->f_8), 9);
			break;
		case 9:
			return true;
	}
	return false;
}

void func_531(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_531(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_531(iVar2, vParam1, fParam4, iParam5, iParam6);
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

int func_542(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("ROWBOATSWAMP");
		case 1:
			return joaat("S_GATOREGGNEST01X");
		case 2:
			return joaat("S_GATOREGG01X");
		case 3:
			return joaat("A_C_ALLIGATOR_01");
		default:
			break;
	}
	return 0;
}

bool func_543(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_143))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0->f_143))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0->f_143, true, false);
		}
		return true;
	}
	if (ITEMSET::IS_ITEMSET_VALID(Global_43616))
	{
		iVar1 = ITEMSET::GET_ITEMSET_SIZE(Global_43616);
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			iVar3 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, Global_43616);
			iVar4 = MISC::_GET_ENTITY_FROM_ITEM(iVar3);
			if (ENTITY::DOES_ENTITY_EXIST(iVar4))
			{
				iVar5 = ENTITY::GET_ENTITY_MODEL(iVar4);
				if (iVar5 == func_542(0))
				{
					iParam0->f_143 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar4);
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iParam0->f_143, true);
					iVar0 = iVar3;
				}
			}
			iVar2++;
		}
	}
	else
	{
		return false;
	}
	if (MISC::_DOES_ITEM_HAVE_VALID_BASE(iVar0))
	{
		ITEMSET::REMOVE_FROM_ITEMSET(iVar0, Global_43616);
	}
	return true;
}

void func_544(vector3 vParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar1 = ENTITY::_0x59B57C4B06531E1E(vParam0, 500f, iVar0, 1);
	if (iVar1 > 0)
	{
		iVar2 = (iVar1 - 1);
		while (iVar2 >= 0)
		{
			iVar3 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar0));
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if ((ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("A_C_ALLIGATOR_01") || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("A_C_ALLIGATOR_02")) || ENTITY::GET_ENTITY_MODEL(iVar3) == joaat("A_C_ALLIGATOR_03"))
				{
					if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar3))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar3, true, true);
						ENTITY::DELETE_ENTITY(&iVar3);
					}
				}
			}
			iVar2 = (iVar2 + -1);
		}
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
}

bool func_545(var uParam0, int iParam1)
{
	struct<11> Var0;
	if (!VOLUME::_DOES_VOLUME_EXIST(*uParam0))
	{
		Var0 = { func_928(iParam1) };
		*uParam0 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var0.f_9, Var0, Var0.f_3, Var0.f_6, Var0.f_10);
	}
	return true;
}

bool func_548(var uParam0, int iParam1, int iParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		*uParam0 = __LIB_1__::func_545(func_542(iParam1), func_509(iParam2), func_851(iParam2), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return false;
	}
	if (iParam1 == 3)
	{
		ENTITY::_0x9587913B9E772D29(*uParam0, 0);
		PED::_0x6569F31A01B4C097(*uParam0, 0, 0);
		PED::_0x6569F31A01B4C097(*uParam0, 1, 0);
		PED::_0x6569F31A01B4C097(*uParam0, 6, 0);
		PED::_0x6569F31A01B4C097(*uParam0, 4, 0);
	}
	return true;
}

bool func_581(var uParam0)
{
	switch (uParam0->f_7)
	{
		case 0:
			return func_975(uParam0);
		case 1:
			return func_976(uParam0);
		case 2:
			return func_977(uParam0);
		case 3:
			return func_978(uParam0);
		case 4:
			break;
		case 7:
			break;
	}
	return true;
}

int func_589(int iParam0, int iParam1)
{
	var uVar0;
	return func_982(&uVar0, iParam0, iParam1);
}

void func_637(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	if (__LIB_0__::func_356(iParam0) != joaat("WEAPON"))
	{
		return;
	}
	iVar0 = __LIB_0__::func_775(iParam0, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		return;
	}
	if (bParam2 || !__LIB_0__::func_214(iVar0))
	{
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_0__::func_915(iVar0);
		}
		if (bParam2 || (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, false) && __LIB_1__::func_614(iParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_403(iParam0, iParam1, 0, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

bool func_742(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<19> Var3;
	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_UI_DATA(iParam0, &Var3))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(Var3.f_2[iVar0 /*3*/]))
			{
				Jump @229; //curOff = 56
			}
			else if (MISC::IS_STRING_NULL_OR_EMPTY(Var3.f_2[iVar0 /*3*/].f_1))
			{
			}
			else
			{
				iVar1 = MISC::GET_HASH_KEY(Var3.f_2[iVar0 /*3*/]);
				iVar2 = MISC::GET_HASH_KEY(Var3.f_2[iVar0 /*3*/].f_1);
				if (iParam2 != 0 && Var3.f_2[iVar0 /*3*/].f_2 != iParam2)
				{
					Jump @229; //curOff = 139
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @229; //curOff = 162
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @229; //curOff = 185
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*uParam1 = { Var3.f_2[iVar0 /*3*/] };
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

void func_746(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (bParam0)
	{
		func_138(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_138(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_138(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_1110(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_141(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_418(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_1115(Var0);
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

void func_749(bool bParam0)
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
		func_138(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_138(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_138(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_138(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_138(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_138(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_138(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_138(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_138(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_138(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_138(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_418(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_418(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_418(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_418(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_418(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_418(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_418(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_418(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_418(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_418(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_418(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
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

int func_795(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
							iVar49 = (iVar49 + func_795(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_795(iVar63, -915411861, 1, 0, 0));
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

int func_810()
{
	if (__LIB_0__::func_28())
	{
		if (!__LIB_1__::func_185(3))
		{
			return __LIB_0__::func_559(43);
		}
		if (__LIB_1__::func_185(38) && !__LIB_1__::func_185(43))
		{
			return func_1146(8);
		}
	}
	return 0;
}

bool func_811(int iParam0)
{
	if (!__LIB_0__::func_20(iParam0))
	{
		return false;
	}
	return ((Global_1888801[iParam0 /*35*/].f_20 == 1 || Global_1888801[iParam0 /*35*/].f_20 == 2) && !func_1147(iParam0));
}

float func_851(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0f;
		case 1:
			return -101.78f;
		case 2:
			return 0f;
		case 3:
			return 37.31f;
		case 4:
			return 57.26f;
		case 5:
			return -26.12f;
		case 7:
			return 0f;
		case 8:
			return -159.89f;
		case 15:
			return 118.54f;
		case 16:
			return 138.43f;
		case 17:
			return 29.74f;
		case 18:
			return 0f;
		case 19:
			return 29.59f;
		case 20:
			return 0f;
		case 21:
			return 0f;
		case 22:
			return 0f;
		case 23:
			return 0f;
		case 24:
			return 0f;
		case 25:
			return 0f;
		case 26:
			return -3.42f;
		case 27:
			return -149.81f;
		case 28:
			return -149.81f;
		case 29:
			return -34.85f;
		case 30:
			return 66.19f;
		case 31:
			return 266.3486f;
		case 32:
			return 266.3486f;
		case 33:
			return 192.4763f;
		case 34:
			return -33.37f;
		case 35:
			return 146.16f;
		case 36:
			return 168.69f;
		default:
			break;
	}
	return 0f;
}

void func_853()
{
	Local_134.f_75 = 1;
}

void func_857(int iParam0)
{
	int iVar0;
	float fVar1;
	iVar0 = 1;
	while (iVar0 <= 3)
	{
		if (iParam0->f_14[iVar0] != 7 && ENTITY::IS_ENTITY_DEAD(iParam0->f_80[iVar0]))
		{
			__LIB_1__::func_581(&(iParam0->f_128), 1048576);
			__LIB_0__::func_19(&(iParam0->f_14[iVar0]), 7);
		}
		fVar1 = __LIB_0__::func_665(Global_35, iParam0->f_80[iVar0], 1, 1);
		if (fVar1 < 5f || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0->f_80[iVar0], Global_35, 0, 1))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0->f_80[iVar0], 780511057, true) != 1)
			{
				TASK::TASK_COMBAT_PED(iParam0->f_80[iVar0], Global_35, 0, 0);
			}
			__LIB_1__::func_581(&(iParam0->f_128), 2097152);
		}
		func_1184(iParam0);
		iVar0++;
	}
}

bool func_858()
{
	return Local_134.f_75;
}

void func_859()
{
	Local_134.f_75 = 0;
}

void func_860()
{
	if (MAP::DOES_BLIP_EXIST(Local_134.f_79))
	{
		MAP::REMOVE_BLIP(&(Local_134.f_79));
	}
}

void func_861(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
	func_853();
}

void func_862(int iParam0)
{
	struct<27> Var0;
	struct<27> Var38;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_80[0]))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_80[0], true);
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
		__LIB_3__::func_895(&Var0);
		__LIB_9__::func_777(iParam0->f_80[0], Global_35, &Var0, 2042.62f, -1888.017f, 40.63954f, func_521(1), 67134472, 1, 5f, 1.5f, 1.9f, 1f, 10f, -1, 1, 0, 0, 0, 1);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
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
		__LIB_3__::func_895(&Var38);
		__LIB_4__::func_85(Global_35, iParam0->f_80[0], &Var38, -1f, 0, 0, -1f, -1f, 1, 8, 0f, 0f, 1069547520 /* Float: 1.5f */, 1073741824 /* Float: 2f */, 1050253722 /* Float: 0.3f */, 1067030938 /* Float: 1.2f */, 1, 0, -1, 1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1);
	}
	__LIB_1__::func_731(&(iParam0->f_40));
}

void func_863(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	vector3 vVar7;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_80[0]))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_57[1], "pearson", iParam0->f_80[0], 0);
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0->f_80[0], true, false) };
		vVar3 = { 2042.22f, -1886.128f, 40.67218f };
		uVar6 = vVar0.z;
		vVar7 = { vVar3 - vVar0 };
		vVar7 = { __LIB_0__::func_173(vVar7) };
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &uVar6, false))
		{
			vVar0.f_2 = uVar6;
			vVar3.f_2 = uVar6;
		}
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iParam0->f_57[1], vVar0, vVar7, 2);
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_57[1], "ARTHUR", Global_35, 0);
	ANIMSCENE::START_ANIM_SCENE(iParam0->f_57[1]);
}

bool func_867(int iParam0)
{
	switch (iParam0->f_10)
	{
		case 0:
			__LIB_0__::func_705(17, 1);
			__LIB_0__::func_19(&(iParam0->f_10), 1);
			break;
		case 1:
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam0->f_80[0], 2042.071f, -1886.473f, 41.54361f, 1f, -1, 0.5f, 4194304, 40000f);
			PED::_0x2208438012482A1A(iParam0->f_80[0], false, false);
			BUILTIN::SETTIMERA(0);
			__LIB_0__::func_19(&(iParam0->f_10), 2);
			break;
		case 2:
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0->f_80[0], 713668775, true) == 1 || BUILTIN::TIMERA() > 2000)
			{
				__LIB_0__::func_19(&(iParam0->f_10), 3);
			}
			break;
		case 3:
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0->f_80[0], 713668775, true) == 8 || __LIB_0__::func_94(iParam0->f_80[0], 2042.071f, -1886.473f, 41.54361f, 1) < 0.25f)
			{
				__LIB_0__::func_19(&(iParam0->f_10), 4);
			}
			break;
		case 4:
			func_1191(iParam0);
			__LIB_1__::func_148(&(iParam0->f_37));
			__LIB_0__::func_19(&(iParam0->f_10), 5);
			break;
		case 5:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0->f_80[0], 1374781803) && ENTITY::DOES_ENTITY_EXIST(iParam0->f_103[7]))
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iParam0->f_57[2], "CRAYFISH", iParam0->f_103[7]);
				OBJECT::DELETE_OBJECT(&(iParam0->f_103[7]));
			}
			if (__LIB_0__::func_75(&(iParam0->f_37)) && __LIB_0__::func_265(&(iParam0->f_37)) > 2f)
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_57[2]))
				{
					if (ANIMSCENE::_0x005E6F28DD7ED58D(iParam0->f_57[2], "Pearson") || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iParam0->f_57[2], false))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_103[7]))
						{
							if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iParam0->f_103[7]))
							{
								ENTITY::DETACH_ENTITY(iParam0->f_103[7], true, true);
							}
							OBJECT::DELETE_OBJECT(&(iParam0->f_103[7]));
						}
						__LIB_0__::func_19(&(iParam0->f_10), 6);
						return true;
					}
				}
			}
			break;
		case 6:
			if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_103[7]))
			{
				OBJECT::DELETE_OBJECT(&(iParam0->f_103[7]));
			}
			__LIB_0__::func_19(&(iParam0->f_10), 0);
			return true;
	}
	return false;
}

void func_871(int iParam0)
{
	struct<27> Var0;
	struct<27> Var38;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_80[0]))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_80[0], true);
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
		__LIB_3__::func_895(&Var0);
		__LIB_9__::func_777(iParam0->f_80[0], Global_35, &Var0, func_509(28), func_521(1), 25610, 1, 5f, 1.5f, 1.9f, 1f, 10f, -1, 1, 0, 0, 0, 1);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
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
		__LIB_3__::func_895(&Var38);
		__LIB_4__::func_85(Global_35, iParam0->f_80[0], &Var38, -1f, 0, 0, -1f, -1f, 1, 8, 0f, 0f, 1069547520 /* Float: 1.5f */, 1073741824 /* Float: 2f */, 1050253722 /* Float: 0.3f */, 1067030938 /* Float: 1.2f */, 1, 0, -1, 1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1);
	}
	__LIB_1__::func_731(&(iParam0->f_40));
}

bool func_873(int iParam0)
{
	int iVar0;
	switch (iParam0->f_10)
	{
		case 0:
			if (__LIB_0__::func_481(1))
			{
				return false;
			}
			__LIB_0__::func_19(&(iParam0->f_11), 15);
			__LIB_0__::func_19(&(iParam0->f_10), 1);
			break;
		case 1:
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_509(27), 1f, -1, 0.5f, 4096, 136.2996f);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
			TASK::TASK_STAND_STILL(0, -1);
			__LIB_1__::func_474(iParam0->f_80[0], &iVar0, 0, 0, 1, 1);
			__LIB_0__::func_19(&(iParam0->f_10), 5);
			break;
		case 5:
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0->f_80[0], 242628503, true) == 1)
			{
				if (TASK::GET_SEQUENCE_PROGRESS(iParam0->f_80[0]) > 0 && !__LIB_0__::func_481(1))
				{
					__LIB_0__::func_19(&(iParam0->f_10), 6);
				}
			}
			break;
		case 6:
			return true;
	}
	return false;
}

void func_874(var uParam0, var uParam1, int iParam2)
{
	struct<14> Var0;
	if (!ENTITY::IS_ENTITY_DEAD(*uParam1))
	{
		Var0.f_4 = -1;
		Var0.f_8 = 2;
		Var0.f_9 = 1;
		Var0.f_10 = 1;
		Var0.f_11 = 1;
		Var0.f_13 = 1;
		Var0.f_14 = 2;
		Var0.f_15 = 2;
		Var0.f_16 = 3;
		Var0.f_19 = 3;
		Var0.f_20 = 1;
		Var0.f_21 = 3;
		Var0.f_22 = 3;
		Var0 = { 0f, 0f, 0f };
		Var0.f_3 = *uParam1;
		Var0.f_8 = 4;
		Var0.f_13 = 3;
		Var0.f_7 = iParam2;
		_NAMESPACE29::_0x66F9EB44342BB4C5(*uParam0, &Var0);
	}
}

bool func_875(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	var uVar4;
	vector3 vVar7;
	vector3 vVar10;
	var uVar13;
	float fVar14;
	vector3 vVar15;
	bool bVar18;
	float fVar19;
	int iVar20;
	struct<2> Var21;
	switch (uParam0->f_3)
	{
		case 0:
			uParam0->f_6 = ANIMSCENE::_CREATE_ANIM_SCENE(func_1192(), 0, func_1193(0), false, true);
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_6);
			STREAMING::REQUEST_MODEL(__LIB_6__::func_931(), false);
			__LIB_0__::func_19(&(uParam0->f_3), 1);
			break;
		case 1:
			if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_6, true, false))
			{
				return false;
			}
			if (!STREAMING::HAS_MODEL_LOADED(__LIB_6__::func_931()))
			{
				return false;
			}
			__LIB_0__::func_19(&(uParam0->f_3), 2);
			break;
		case 2:
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_8))
			{
				vVar1 = { *uParam0 };
				vVar1.f_2 = (vVar1.z - 5f);
				uParam0->f_8 = OBJECT::CREATE_OBJECT(__LIB_6__::func_931(), vVar1, true, true, false, false, true);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_8))
			{
				return false;
			}
			if (!__LIB_0__::func_139(uParam0->f_4))
			{
				uParam0->f_4 = __LIB_1__::func_282("GENERIC_SEARCH", joaat("INPUT_CONTEXT_X"), *uParam0, 3f, 2, 1, 0, 4, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
			}
			else
			{
				__LIB_0__::func_19(&(uParam0->f_3), 3);
			}
			break;
		case 3:
			if (!__LIB_0__::func_139(uParam0->f_4))
			{
				__LIB_0__::func_19(&(uParam0->f_3), 2);
			}
			else if (__LIB_0__::func_567(uParam0->f_4, 1))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 256, false);
				uParam0->f_7 = 1;
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
				TASK::TASK_GO_STRAIGHT_TO_COORD(0, *uParam0, 1f, 20000, 1193033728 /* Float: 40000f */, 1056964608 /* Float: 0.5f */, 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(Global_35, iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				__LIB_1__::func_748(&(uParam0->f_4), 1, 1);
				__LIB_0__::func_19(&(uParam0->f_3), 4);
			}
			break;
		case 4:
			if (TASK::GET_SCRIPT_TASK_STATUS(Global_35, 242628503, true) != 1)
			{
				if (__LIB_0__::func_94(Global_35, *uParam0, 1) < 1.5f)
				{
					ANIMSCENE::_GET_ANIM_SCENE_ORIGIN(uParam0->f_6, &vVar7, &uVar4, 2);
					vVar7.f_2 = (vVar7.z + 0.1f);
					vVar10 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
					uVar13 = vVar10.z;
					if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar10, &uVar13, false))
					{
						vVar10.f_2 = uVar13;
					}
					fVar14 = __LIB_0__::func_152(vVar10, vVar7, 1);
					vVar15 = { 0f, 0f, fVar14 };
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_6, vVar7, vVar15, 2);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_6, "ARTHUR", Global_35, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_6, "CRAYFISH", uParam0->f_8, 0);
					ANIMSCENE::START_ANIM_SCENE(uParam0->f_6);
					__LIB_0__::func_105(1);
					if (PAD::_IS_USING_KEYBOARD(0))
					{
						__LIB_0__::func_45("CRAYFISH_CTCH_HLP1_KM", -1, 0, 0, 0, 1);
					}
					else
					{
						__LIB_0__::func_45("CRAYFISH_CTCH_HLP1", -1, 0, 0, 0, 1);
					}
					uParam0->f_13 = { func_1200() };
					__LIB_13__::func_446(joaat("AT_CRAYFISH"), joaat("A_C_CRAWFISH_01"), __LIB_1__::func_974(PLAYER::PLAYER_ID()), 1, 1);
					__LIB_0__::func_19(&(uParam0->f_3), 5);
				}
			}
			break;
		case 5:
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_6, false) && ANIMSCENE::_0x8D81E7824B7753F7(uParam0->f_6, "S_Search", 1))
			{
				if (PAD::_0x6CD79468A1E595C6(0))
				{
					__LIB_1__::func_748(&(uParam0->f_5), 1, 1);
				}
				else if (!__LIB_0__::func_139(uParam0->f_5))
				{
					if (PAD::_IS_USING_KEYBOARD(0))
					{
						uParam0->f_5 = __LIB_1__::func_745("CRAYFISH_CTCH_GRAB", joaat("INPUT_ATTACK"), Global_35, 2, 1, 0, 0, 0, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
					}
					else
					{
						uParam0->f_5 = __LIB_1__::func_745("CRAYFISH_CTCH_GRAB", joaat("INPUT_CONTEXT_X"), Global_35, 2, 1, 0, 0, 0, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
					}
					__LIB_1__::func_221(uParam0->f_5, 0, 1);
				}
				if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_6, func_1193(1)))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_6, func_1193(1));
				}
				else
				{
					bVar18 = true;
				}
				if (PAD::_0x6CD79468A1E595C6(0))
				{
					__LIB_0__::func_105(1);
					if (PAD::_IS_USING_KEYBOARD(0))
					{
						__LIB_0__::func_45("CRAYFISH_CTCH_HLP1_KM", -1, 0, 0, 0, 1);
					}
					else
					{
						__LIB_0__::func_45("CRAYFISH_CTCH_HLP1", -1, 0, 0, 0, 1);
					}
				}
				if (PAD::_IS_USING_KEYBOARD(0))
				{
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), false);
					uParam0->f_10 = (uParam0->f_10 + (PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_RADIAL_MENU_NAV_LR")) * 50f));
					uParam0->f_10.f_1 = (uParam0->f_10.f_1 + (PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_RADIAL_MENU_NAV_UD")) * 50f));
					uParam0->f_10 = __LIB_0__::func_251(uParam0->f_10, -127f, 127f);
					uParam0->f_10.f_1 = __LIB_0__::func_251(uParam0->f_10.f_1, -127f, 127f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 0.01f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 0.01f);
				}
				else
				{
					uParam0->f_10 = BUILTIN::TO_FLOAT((PAD::GET_CONTROL_VALUE(2, joaat("INPUT_MOVE_LR")) - 127));
					uParam0->f_10.f_1 = BUILTIN::TO_FLOAT((PAD::GET_CONTROL_VALUE(2, joaat("INPUT_MOVE_UD")) - 127));
				}
				uParam0->f_16 = MISC::GET_DISTANCE_BETWEEN_COORDS(uParam0->f_10, uParam0->f_13, true);
				if (PAD::_IS_USING_KEYBOARD(0))
				{
					uParam0->f_16 = (uParam0->f_16 * 0.5f);
				}
				uParam0->f_17 = 0f;
				fVar19 = (uParam0->f_16 * 2f);
				uParam0->f_17 = (256f - fVar19);
				if (uParam0->f_17 < 0f)
				{
					uParam0->f_17 = 0f;
				}
				if (uParam0->f_10 != 0f && uParam0->f_10.f_1 != 0f)
				{
					PAD::SET_PAD_SHAKE(2, 100, BUILTIN::CEIL(uParam0->f_17));
				}
				if (uParam0->f_16 < 35f && bVar18)
				{
					if (__LIB_0__::func_139(uParam0->f_5))
					{
						if (!__LIB_0__::func_572(uParam0->f_5, 1))
						{
							__LIB_1__::func_221(uParam0->f_5, 1, 1);
						}
						if (__LIB_1__::func_732(uParam0->f_5, 1))
						{
							uParam0->f_9 = 1;
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_6, func_1193(1), true);
							__LIB_1__::func_748(&(uParam0->f_5), 1, 1);
							__LIB_0__::func_19(&(uParam0->f_3), 6);
						}
					}
				}
				else if (__LIB_0__::func_139(uParam0->f_5) && __LIB_0__::func_572(uParam0->f_5, 0))
				{
					__LIB_1__::func_221(uParam0->f_5, 0, 1);
				}
			}
			break;
		case 6:
			if (uParam0->f_9)
			{
				uParam0->f_9 = 0;
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1545785063) && ENTITY::DOES_ENTITY_EXIST(uParam0->f_8))
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_6, "CRAYFISH", uParam0->f_8);
				OBJECT::DELETE_OBJECT(&(uParam0->f_8));
			}
			if (ANIMSCENE::_0x005E6F28DD7ED58D(uParam0->f_6, "ARTHUR"))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 256, false);
				iVar20 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
				func_138(joaat("UPGRADE_FSH_BAIT_CRAYFISH"), iVar20, 0, 0, 0, 752097756, 0, 0, 0, 0);
				Var21 = { __LIB_0__::func_38(joaat("COLLECTED"), joaat("AT_CRAYFISH")) };
				STATS::_STAT_ID_INCREMENT_INT(&Var21, iVar20);
				if (__LIB_0__::func_139(uParam0->f_5))
				{
					__LIB_1__::func_748(&(uParam0->f_5), 1, 1);
				}
				if (__LIB_0__::func_139(uParam0->f_4))
				{
					__LIB_1__::func_748(&(uParam0->f_4), 1, 1);
				}
				__LIB_0__::func_19(&(uParam0->f_3), 7);
			}
			break;
		case 7:
			if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(uParam0->f_6, false) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_6, false))
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_8))
				{
					OBJECT::DELETE_OBJECT(&(uParam0->f_8));
				}
				__LIB_0__::func_105(1);
				uParam0->f_7 = 0;
				__LIB_0__::func_19(&(uParam0->f_3), 8);
			}
			break;
		case 8:
			return true;
	}
	return false;
}

void func_876(var uParam0)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_6))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_6, false))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_6);
		}
		else
		{
			return;
		}
	}
	if (__LIB_0__::func_139(uParam0->f_4))
	{
		__LIB_1__::func_748(&(uParam0->f_4), 1, 1);
	}
	uParam0->f_7 = 0;
	__LIB_0__::func_19(&(uParam0->f_3), 0);
}

void func_879(int iParam0)
{
	struct<27> Var0;
	struct<27> Var38;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_80[0]))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_80[0], true);
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
		__LIB_3__::func_895(&Var0);
		__LIB_9__::func_777(iParam0->f_80[0], Global_35, &Var0, func_509(7), func_521(1), 25610, 1, 5f, 1.5f, 1.9f, 1f, 10f, -1, 1, 0, 0, 0, 1);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
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
		__LIB_3__::func_895(&Var38);
		__LIB_4__::func_85(Global_35, iParam0->f_80[0], &Var38, -1f, 0, 0, -1f, -1f, 1, 8, 0f, 0f, 1069547520 /* Float: 1.5f */, 1073741824 /* Float: 2f */, 1050253722 /* Float: 0.3f */, 1067030938 /* Float: 1.2f */, 1, 0, -1, 1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1);
	}
	__LIB_1__::func_731(&(iParam0->f_40));
}

void func_880(int iParam0)
{
	if (((!PED::_GET_PED_CROUCH_MOVEMENT(Global_35) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_57[5])) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam0->f_57[5], false)) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iParam0->f_57[5]) > 0.03f)
	{
		PED::_SET_PED_CROUCH_MOVEMENT(Global_35, true, 0, false);
	}
	switch (iParam0->f_2)
	{
		case 0:
			__LIB_1__::func_694(Global_35, func_509(7), 0, 1112014848 /* Float: 50f */, 1106247680 /* Float: 30f */, 1097859072 /* Float: 15f */, 1084227584 /* Float: 5f */, 1, 1, 1, 0);
			if (__LIB_0__::func_94(Global_35, func_509(7), 1) < 9f)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 256, false);
				TASK::TASK_GO_STRAIGHT_TO_COORD(Global_35, func_509(8), 1f, -1, func_851(8), 1056964608 /* Float: 0.5f */, 0);
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 1, false, false);
				TASK::TASK_SWAP_WEAPON(Global_35, 1, 1, 0, 0);
				PED::_0x2208438012482A1A(Global_35, false, false);
				__LIB_0__::func_19(&(iParam0->f_2), 1);
			}
			break;
		case 1:
			if (TASK::GET_SCRIPT_TASK_STATUS(Global_35, 2106541073, true) == 1)
			{
				__LIB_0__::func_19(&(iParam0->f_2), 2);
			}
			break;
		case 2:
			if (TASK::GET_SCRIPT_TASK_STATUS(Global_35, 2106541073, true) == 8)
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(Global_35, iParam0->f_80[1], -1, -1f, -1f, -1f);
				__LIB_0__::func_19(&(iParam0->f_2), 3);
			}
			break;
		case 3:
			func_884(iParam0);
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_57[5]))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam0->f_57[5], false))
				{
					if (ANIMSCENE::_0x005E6F28DD7ED58D(iParam0->f_57[5], "pearson") || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iParam0->f_57[5], false))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
						TASK::TASK_STAND_STILL(Global_35, 3000);
						__LIB_0__::func_19(&(iParam0->f_2), 4);
					}
				}
			}
			break;
		case 4:
			break;
	}
}

void func_881(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_80[0]))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_57[5], "pearson", iParam0->f_80[0], 0);
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_57[5], "ARTHUR", Global_35, 0);
	ANIMSCENE::START_ANIM_SCENE(iParam0->f_57[5]);
}

void func_883(int iParam0, int iParam1)
{
	int iVar0;
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, func_521(iParam1), 0, 17422, -1, 0, 0, -1);
	TASK::TASK_STAND_STILL(0, -1);
	__LIB_1__::func_474(iParam0, &iVar0, 0, 0, 1, 1);
}

void func_884(int iParam0)
{
	switch (iParam0->f_3)
	{
		case 0:
			if (!__LIB_0__::func_139(iParam0->f_144))
			{
				iParam0->f_144 = __LIB_1__::func_746("INTERACT_LOOK", joaat("INPUT_FOCUS_CAM"), 3, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			}
			else
			{
				iParam0->f_78 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 2068.878f, -1883.587f, 41.9315f, 0.424f, 0f, -177.1101f, 25f, false, 2);
				__LIB_0__::func_19(&(iParam0->f_3), 1);
			}
			break;
		case 1:
			if (__LIB_1__::func_530(iParam0->f_144, 1))
			{
				if (CAM::DOES_CAM_EXIST(iParam0->f_78))
				{
					if (!CAM::IS_CAM_RENDERING(iParam0->f_78))
					{
						CAM::SET_CAM_ACTIVE(iParam0->f_78, true);
						CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
					}
				}
			}
			else if (CAM::IS_CAM_RENDERING(iParam0->f_78))
			{
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			}
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_57[5]) && ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iParam0->f_57[5], false))
			{
				__LIB_0__::func_19(&(iParam0->f_3), 2);
			}
			break;
		case 2:
			if (CAM::IS_CAM_RENDERING(iParam0->f_78))
			{
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				CAM::SET_CAM_ACTIVE(iParam0->f_78, false);
			}
			else
			{
				CAM::DESTROY_CAM(iParam0->f_78, false);
				__LIB_4__::func_16(&(iParam0->f_144));
				__LIB_0__::func_19(&(iParam0->f_3), 3);
			}
			break;
		case 3:
			break;
	}
}

bool func_885()
{
	int iVar0;
	iVar0 = __LIB_5__::func_297(__LIB_1__::func_316(3, joaat("HAI_HUNTING_06")));
	if ((MISC::IS_BIT_SET(iVar0, 0) && MISC::IS_BIT_SET(iVar0, 1)) && MISC::IS_BIT_SET(iVar0, 2))
	{
		return true;
	}
	return false;
}

void func_887(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, func_509(iParam1), func_851(iParam1), true, false, true);
	}
}

void func_888(int iParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	bVar0 = __LIB_0__::func_27(iParam0->f_128, 1048576);
	bVar1 = false;
	if (TASK::GET_SCRIPT_TASK_STATUS(Global_35, -1794415470, true) == 1)
	{
		bVar1 = true;
	}
	iVar2 = 1;
	while (iVar2 <= 3)
	{
		if (iParam0->f_14[iVar2] != 7 && ENTITY::IS_ENTITY_DEAD(iParam0->f_80[iVar2]))
		{
			__LIB_1__::func_581(&(iParam0->f_128), 1048576);
			__LIB_0__::func_19(&(iParam0->f_14[iVar2]), 7);
		}
		if (iParam0->f_14[iVar2] != 6 && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0->f_80[iVar2], Global_35, 1, 1))
		{
			__LIB_1__::func_581(&(iParam0->f_128), 1048576);
			__LIB_0__::func_19(&(iParam0->f_14[iVar2]), 6);
		}
		if ((iParam0->f_14[iVar2] != 6 && bVar0) && !bVar1)
		{
			__LIB_0__::func_19(&(iParam0->f_14[iVar2]), 6);
		}
		switch (iParam0->f_14[iVar2])
		{
			case 0:
				if (!__LIB_0__::func_27(iParam0->f_128, 262144))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iParam0->f_80[iVar2], -982327190, true) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iParam0->f_80[iVar2], -1098463898, true) != 1)
					{
						TASK::TASK_STAND_STILL(iParam0->f_80[iVar2], -1);
					}
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(iParam0->f_80[iVar2], -875674219, true) != 1)
				{
					if (!__LIB_0__::func_75(&(iParam0->f_85[iVar2 /*3*/])))
					{
						__LIB_1__::func_283(&(iParam0->f_85[iVar2 /*3*/]), 0);
						iParam0->f_98[iVar2] = MISC::GET_RANDOM_FLOAT_IN_RANGE((0f + IntToFloat(iVar2)), (2f * IntToFloat(iVar2)));
					}
					else if (__LIB_0__::func_265(&(iParam0->f_85[iVar2 /*3*/])) >= iParam0->f_98[iVar2])
					{
						__LIB_0__::func_37(&(iParam0->f_85[iVar2 /*3*/]));
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(iParam0->f_80[iVar2], iParam0->f_80[0], -1, -1f, -1f, -1f);
					}
				}
				if (__LIB_0__::func_27(iParam0->f_128, 131072))
				{
					__LIB_0__::func_19(&(iParam0->f_14[iVar2]), 2);
				}
				if (__LIB_0__::func_27(iParam0->f_128, 16384))
				{
					__LIB_0__::func_19(&(iParam0->f_14[iVar2]), 6);
				}
				break;
			case 2:
				if (TASK::GET_SCRIPT_TASK_STATUS(iParam0->f_80[iVar2], 1056466932, true) != 1)
				{
					if (!__LIB_0__::func_75(&(iParam0->f_85[iVar2 /*3*/])))
					{
						__LIB_1__::func_283(&(iParam0->f_85[iVar2 /*3*/]), 0);
						iParam0->f_98[iVar2] = MISC::GET_RANDOM_FLOAT_IN_RANGE((0f + IntToFloat(iVar2)), (2f * IntToFloat(iVar2)));
					}
					else if (__LIB_0__::func_265(&(iParam0->f_85[iVar2 /*3*/])) >= iParam0->f_98[iVar2])
					{
						__LIB_0__::func_37(&(iParam0->f_85[iVar2 /*3*/]));
						TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(iParam0->f_80[iVar2], iParam0->f_80[0], 1f, 1f, 1f, 1f, -1, 1036831949 /* Float: 0.1f */, 1, 1, 0, 0, 1);
					}
				}
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0->f_80[iVar2], 0.75f);
				if (__LIB_0__::func_665(iParam0->f_80[iVar2], Global_35, 1, 1) < 8f)
				{
					__LIB_0__::func_19(&(iParam0->f_14[iVar2]), 6);
				}
				if (__LIB_0__::func_27(iParam0->f_128, 32768))
				{
					__LIB_0__::func_19(&(iParam0->f_14[iVar2]), 3);
				}
				break;
			case 3:
				if (TASK::GET_SCRIPT_TASK_STATUS(iParam0->f_80[iVar2], 1056466932, true) != 1)
				{
					if (!__LIB_0__::func_75(&(iParam0->f_85[iVar2 /*3*/])))
					{
						__LIB_1__::func_283(&(iParam0->f_85[iVar2 /*3*/]), 0);
						iParam0->f_98[iVar2] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 2f);
					}
					else if (__LIB_0__::func_265(&(iParam0->f_85[iVar2 /*3*/])) >= iParam0->f_98[iVar2])
					{
						__LIB_0__::func_37(&(iParam0->f_85[iVar2 /*3*/]));
						TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(iParam0->f_80[iVar2], iParam0->f_80[0], 1f, 1f, 1f, 1.5f, -1, 1036831949 /* Float: 0.1f */, 1, 1, 0, 0, 1);
					}
				}
				if (!__LIB_0__::func_48(iParam0->f_80[iVar2], iParam0->f_80[0], 7f, 1))
				{
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(iParam0->f_80[iVar2], 2f);
				}
				if (__LIB_0__::func_665(iParam0->f_80[iVar2], Global_35, 1, 1) < 10f)
				{
					__LIB_0__::func_19(&(iParam0->f_14[iVar2]), 6);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(iParam0->f_80[0], false) || __LIB_0__::func_48(iParam0->f_80[0], iParam0->f_143, 5f, 0))
				{
					__LIB_1__::func_283(&(iParam0->f_147), 0);
					__LIB_0__::func_19(&(iParam0->f_14[iVar2]), 5);
				}
				break;
			case 4:
				if (ENTITY::IS_ENTITY_DEAD(iParam0->f_143))
				{
					return;
				}
				if (TASK::GET_SCRIPT_TASK_STATUS(iParam0->f_80[iVar2], 1056466932, true) != 1)
				{
					TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(iParam0->f_80[iVar2], iParam0->f_143, 0f, -5f, 0f, 1.5f, -1, 1036831949 /* Float: 0.1f */, 1, 1, 0, 0, 1);
				}
				if (iParam0->f_8 == 6)
				{
					__LIB_0__::func_19(&(iParam0->f_14[iVar2]), 5);
				}
				break;
			case 5:
				if (TASK::GET_SCRIPT_TASK_STATUS(iParam0->f_80[iVar2], 713668775, true) != 1)
				{
					if (iParam0->f_7 >= 6 && iParam0->f_8 < 2)
					{
						iVar3 = MAP::GET_BLIP_FROM_ENTITY(iParam0->f_80[iVar2]);
						if (MAP::DOES_BLIP_EXIST(iVar3))
						{
							MAP::_BLIP_SET_STYLE(iVar3, joaat("BLIP_STYLE_ENEMY"));
						}
						else
						{
							iVar3 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), iParam0->f_80[iVar2]);
						}
					}
					fVar4 = 1.5f;
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam0->f_80[iVar2], func_1211(iVar2), fVar4, -1, 0.25f, 0, 40000f);
				}
				if (PED::_0x285D36C5C72B0569(Global_35) < 0.25f)
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam0->f_80[iVar2], func_509(22), 2f, -1, 0.25f, 0, 40000f);
					__LIB_0__::func_19(&(iParam0->f_14[iVar2]), 1);
				}
				if (__LIB_0__::func_665(iParam0->f_80[iVar2], Global_35, 1, 1) < 10f)
				{
					__LIB_0__::func_19(&(iParam0->f_14[iVar2]), 6);
				}
				if (__LIB_1__::func_205(iParam0->f_80[iVar2], iParam0->f_112[0], 1, 0))
				{
					__LIB_1__::func_581(&(iParam0->f_128), 16);
					__LIB_0__::func_19(&(iParam0->f_14[iVar2]), 1);
				}
				break;
			case 1:
				if (__LIB_0__::func_94(iParam0->f_80[iVar2], func_1211(iVar2), 1) < 15f)
				{
					if (__LIB_0__::func_393(Global_35, iParam0->f_112[1], 0, 1))
					{
						__LIB_0__::func_19(&(iParam0->f_14[iVar2]), 6);
						return;
					}
					if (TASK::GET_SCRIPT_TASK_STATUS(iParam0->f_80[iVar2], 1833500181, true) != 1)
					{
						TASK::TASK_WANDER_IN_VOLUME(iParam0->f_80[iVar2], iParam0->f_112[0], 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */, 0);
					}
				}
				if (__LIB_0__::func_665(iParam0->f_80[iVar2], Global_35, 1, 1) < 15f && !bVar1)
				{
					__LIB_0__::func_19(&(iParam0->f_14[iVar2]), 6);
				}
				break;
			case 6:
				if (!__LIB_0__::func_27(iParam0->f_128, 1048576) && __LIB_0__::func_665(Global_35, iParam0->f_80[iVar2], 1, 1) < 11f)
				{
					__LIB_1__::func_581(&(iParam0->f_128), 1048576);
				}
				if (TASK::GET_SCRIPT_TASK_STATUS(iParam0->f_80[iVar2], 780511057, true) != 1 && !bVar1)
				{
					TASK::TASK_COMBAT_PED(iParam0->f_80[iVar2], Global_35, 0, 0);
				}
				if (bVar1)
				{
					TASK::CLEAR_PED_TASKS(iParam0->f_80[iVar2], true, false);
					__LIB_0__::func_19(&(iParam0->f_14[iVar2]), 1);
				}
				break;
			case 7:
				break;
		}
		iVar2++;
	}
}

void func_889(int iParam0)
{
	int iVar0;
	if (!__LIB_0__::func_75(&(iParam0->f_140)))
	{
		__LIB_1__::func_148(&(iParam0->f_140));
	}
	else if (__LIB_0__::func_265(&(iParam0->f_140)) > 1f)
	{
		iVar0 = __LIB_1__::func_614(joaat("PROVISION_GATOR_EGG"), 0, 0);
		if (iVar0 >= iParam0->f_146 && (func_1213(Global_35) || __LIB_0__::func_265(&(iParam0->f_140)) > 30f))
		{
			__LIB_1__::func_581(&(iParam0->f_128), 8);
		}
		iParam0->f_66 = (iVar0 - iParam0->f_145);
		if (iParam0->f_66 >= 9)
		{
			__LIB_1__::func_581(&(iParam0->f_128), 8);
		}
		else if (iParam0->f_66 >= 6)
		{
			__LIB_1__::func_581(&(iParam0->f_128), 4);
		}
		else if (iParam0->f_66 > 1)
		{
			__LIB_1__::func_581(&(iParam0->f_128), 2);
		}
	}
}

void func_890(int iParam0)
{
	if (!__LIB_0__::func_27(iParam0->f_128, 33554432))
	{
		if (func_1214(iParam0))
		{
			if (!__LIB_0__::func_481(1))
			{
				__LIB_0__::func_19(&(iParam0->f_11), 20);
				__LIB_1__::func_581(&(iParam0->f_128), 33554432);
			}
		}
	}
}

void func_892(int iParam0)
{
	if (!__LIB_0__::func_27(iParam0->f_128, 67108864))
	{
		if (func_1215(iParam0))
		{
			if (!__LIB_0__::func_481(1))
			{
				__LIB_0__::func_19(&(iParam0->f_11), 21);
				__LIB_1__::func_581(&(iParam0->f_128), 67108864);
			}
		}
	}
}

void func_893(int iParam0)
{
	if (CAM::DOES_CAM_EXIST(iParam0->f_78))
	{
		if (CAM::IS_CAM_RENDERING(iParam0->f_78))
		{
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			CAM::SET_CAM_ACTIVE(iParam0->f_78, false);
		}
		CAM::DESTROY_CAM(iParam0->f_78, false);
	}
	if (__LIB_0__::func_139(iParam0->f_144))
	{
		__LIB_4__::func_16(&(iParam0->f_144));
	}
	__LIB_0__::func_19(&(iParam0->f_3), 3);
}

void func_895(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
	func_853();
}

void func_896(int iParam0, int iParam1, int iParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		TASK::CLEAR_PED_TASKS(iParam0, true, false);
		__LIB_1__::func_733(iParam0);
		TASK::TASK_COMBAT_PED(iParam0, iParam1, 16777216, 0);
		func_1217(iParam0, iParam2);
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 50, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 5, true);
		PED::SET_PED_COMBAT_MOVEMENT(iParam0, 2);
		PED::SET_PED_CONFIG_FLAG(iParam0, 112, true);
		PED::SET_PED_CONFIG_FLAG(iParam0, 113, true);
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iParam0, 33, true);
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iParam0, 32, true);
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iParam0, 9, true);
	}
}

void func_897(int iParam0, int iParam1, float fParam2)
{
	int iVar0;
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_509(iParam1), fParam2, -1, 0.25f, 0, 40000f);
	TASK::TASK_STAND_STILL(0, -1);
	__LIB_1__::func_474(iParam0, &iVar0, 0, 0, 1, 1);
}

char* func_898(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CAPRS_HNT6_EXT";
		default:
			break;
	}
	return "FAIL -- 6";
}

void func_899(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
	func_853();
}

void func_901(int iParam0, int iParam1)
{
	char cVar0[32];
	__LIB_1__::func_734(&(iParam0->f_160));
	iParam0->f_402 = func_898(iParam1);
	if (MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_402))
	{
		return;
	}
	StringCopy(&cVar0, iParam0->f_402, 32);
	__LIB_1__::func_517(&(iParam0->f_160), cVar0);
	switch (iParam1)
	{
		case 0:
			func_1220(iParam0);
			break;
	}
}

bool func_904(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, var uParam4)
{
	int iVar0;
	__LIB_1__::func_534(uParam4, &cParam0);
	if (__LIB_0__::func_84(uParam4, 2) && !__LIB_0__::func_84(uParam4, 67108864))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SKIP_CUTSCENE"), false);
	}
	if (__LIB_0__::func_81(uParam4) != 1)
	{
		__LIB_8__::func_541(uParam4);
	}
	POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	PED::SET_PED_RESET_FLAG(Global_35, 134, true);
	HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
	switch (__LIB_0__::func_81(uParam4))
	{
		case 1:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_156) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam4->f_156, true, false))
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam4->f_156, false))
				{
					__LIB_6__::func_751(uParam4, &cParam0);
				}
				else if (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_156))
				{
					__LIB_1__::func_747(uParam4, 4);
					return false;
				}
				else if (__LIB_1__::func_503(uParam4, 2))
				{
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_149);
				}
				__LIB_1__::func_747(uParam4, 3);
			}
			else if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_156))
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_158)) && __LIB_0__::func_84(uParam4, 134217728))
				{
				}
				else
				{
					__LIB_1__::func_739(uParam4);
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
				__LIB_1__::func_743(uParam4);
				if (!__LIB_0__::func_75(&(uParam4->f_1)))
				{
					__LIB_1__::func_283(&(uParam4->f_1), 0);
				}
				else if (__LIB_0__::func_265(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_156))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_156);
					}
					__LIB_1__::func_747(uParam4, 4);
				}
			}
			break;
		case 2:
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_156) || !ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam4->f_156, true, false))
			{
				if (__LIB_6__::func_724(uParam4, &cParam0, 1, 1))
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam4->f_156, true, false))
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
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_156))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_156);
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
					__LIB_6__::func_751(uParam4, &cParam0);
					__LIB_1__::func_747(uParam4, 3);
				}
				else
				{
					SCRIPTS::SHUTDOWN_LOADING_SCREEN();
				}
			}
			else if (__LIB_0__::func_265(&(uParam4->f_1)) >= 60f)
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_156))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_156);
				}
				__LIB_1__::func_747(uParam4, 4);
			}
			break;
		case 3:
			func_1231(uParam4);
			if (__LIB_1__::func_503(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_149);
			}
			if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_156) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam4->f_156, false)) && (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_156) || __LIB_0__::func_84(uParam4, 512)))
			{
				if (!__LIB_0__::func_84(uParam4, 1024) && __LIB_6__::func_719(uParam4, 1))
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
				__LIB_8__::func_541(uParam4);
			}
			if (__LIB_0__::func_84(uParam4, 524288))
			{
				if (IntToFloat(MISC::ABSI((__LIB_1__::func_504(uParam4) - __LIB_1__::func_505(uParam4)))) <= 2f)
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_156))
				{
					if (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_156))
					{
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
					}
				}
				if (__LIB_1__::func_540(uParam4, Global_35, 4))
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
				if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) && __LIB_1__::func_505(uParam4) > 5000)
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
			}
			if (__LIB_1__::func_506(uParam4))
			{
				if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_156))
				{
				}
				__LIB_0__::func_488(uParam4);
				__LIB_6__::func_832(uParam4);
				return true;
			}
			else
			{
				if (__LIB_0__::func_84(uParam4, 67108864))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						if (!ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_156) && !ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_156))
						{
							ANIMSCENE::_DELETE_ANIM_SCENE_2(uParam4->f_156);
						}
						__LIB_1__::func_148(&(uParam4->f_1));
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
						__LIB_0__::func_88(uParam4, 512);
						__LIB_1__::func_477(uParam4, 67108864, 1);
						__LIB_1__::func_747(uParam4, 4);
					}
					else if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(1000);
					}
				}
				else if ((((!__LIB_0__::func_84(uParam4, 16384) && !ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_156)) && CAM::IS_SCREEN_FADED_OUT()) && __LIB_1__::func_505(uParam4) <= 5000) && __LIB_1__::func_505(uParam4) >= 0)
				{
					CAM::DO_SCREEN_FADE_IN(1000);
				}
				if (!__LIB_0__::func_84(uParam4, 536870912) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1495039362))
				{
					__LIB_6__::func_726(&(uParam4->f_213), 0);
					__LIB_0__::func_88(uParam4, 536870912);
				}
				if (__LIB_1__::func_505(uParam4) >= 5000 && __LIB_1__::func_505(uParam4) <= (__LIB_1__::func_504(uParam4) - 5000))
				{
					__LIB_0__::func_89();
				}
			}
			break;
		case 6:
			if (__LIB_1__::func_506(uParam4))
			{
				__LIB_0__::func_488(uParam4);
				__LIB_6__::func_832(uParam4);
				return true;
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
					if (ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_156))
					{
						__LIB_0__::func_88(uParam4, 1073741824 /* Float: 2f */);
					}
				}
			}
			else
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_156))
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_156))
					{
						ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_156, true);
						if (UIFEED::_0xC17F69E1418CD11F(9) != 0)
						{
							UIFEED::_0xDD1232B332CBB9E7(9, 1, 0);
						}
						return false;
					}
					else if (ANIMSCENE::_0x4CDFFE3189EBDBD0(uParam4->f_156))
					{
						return false;
					}
				}
				if (iVar0 == 0)
				{
					Stack.Push(!__LIB_1__::func_503(uParam4, 4));
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_150);
					if (StackVal || StackVal)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_156) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_156))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_156, false);
						}
						__LIB_1__::func_747(uParam4, 3);
					}
					else if (__LIB_0__::func_265(&(uParam4->f_1)) >= 30f)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_156) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_156))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_156, false);
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
	return false;
}

struct<11> func_928(int iParam0)
{
	struct<11> Var0;
	switch (iParam0)
	{
		case 0:
			Var0 = { 2082.33f, -1912.337f, 40.3256f };
			Var0.f_3 = { 0f, 0f, 0f };
			Var0.f_6 = { 24f, 24f, 10f };
			Var0.f_9 = joaat("VOLCYLINDER");
			Var0.f_10 = "GatorWanderSmall";
			break;
		case 1:
			Var0 = { 2075.528f, -1912.735f, 40.4256f };
			Var0.f_3 = { 0f, 0f, 0f };
			Var0.f_6 = { 30f, 30f, 10f };
			Var0.f_9 = joaat("VOLCYLINDER");
			Var0.f_10 = "GatorWanderLarge";
			break;
		case 2:
			Var0 = { 2070.503f, -1893.048f, 40.426f };
			Var0.f_3 = { 0f, 0f, 0f };
			Var0.f_6 = { 55f, 55f, 10f };
			Var0.f_9 = joaat("VOLCYLINDER");
			Var0.f_10 = "Fish06ActivityArea";
			break;
		case 3:
			Var0 = { func_509(28) };
			Var0.f_3 = { 0f, 0f, 0f };
			Var0.f_6 = { 3f, 3f, 5f };
			Var0.f_9 = joaat("VOLCYLINDER");
			Var0.f_10 = "FISH06_LOCATION_02";
			break;
		case 4:
			Var0 = { 2082.187f, -1887.598f, 41.426f };
			Var0.f_3 = { 0f, 0f, 0f };
			Var0.f_6 = { 4.203f, 7.588f, 5f };
			Var0.f_9 = joaat("VOLBOX");
			Var0.f_10 = "FISH06_ROW_BOAT";
			break;
	}
	return Var0;
}

int func_975(var uParam0)
{
	if (!func_1294(func_509(5)))
	{
		return 0;
	}
	if (!func_1295(&(Local_134.f_143), func_509(5), func_851(5)))
	{
		return 0;
	}
	__LIB_2__::func_597(&Global_35, &(Local_134.f_143), -1, 1);
	__LIB_2__::func_597(&(Local_134.f_80[0]), &(Local_134.f_143), 1, 1);
	__LIB_0__::func_489(0, 0);
	if (MAP::DOES_BLIP_EXIST(uParam0->f_43))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_43));
	}
	return 1;
}

int func_976(var uParam0)
{
	if (!func_1294(func_509(1)))
	{
		return 0;
	}
	if (!func_1295(&(Local_134.f_143), func_509(1), func_851(1)))
	{
		return 0;
	}
	if (!func_1298(&Local_134))
	{
		return 0;
	}
	func_1299(Global_35, 31);
	func_1299(Local_134.f_80[0], 32);
	__LIB_1__::func_649(&Local_134, 1);
	func_522(&(Local_134.f_9), 1);
	func_508(&Local_134, 4);
	__LIB_0__::func_489(0, 0);
	TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(Local_134.f_80[0], false, 1f);
	TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_134.f_80[0], func_521(1), 0, 25600, -1, 0, 0, -1);
	ENTITY::FREEZE_ENTITY_POSITION(Local_134.f_143, true);
	func_508(&Local_134, 4);
	if (MAP::DOES_BLIP_EXIST(uParam0->f_43))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_43));
	}
	AUDIO::TRIGGER_MUSIC_EVENT("BOB_HUNT06_RESTART_3");
	return 1;
}

int func_977(var uParam0)
{
	struct<10> Var0;
	if (!func_1294(func_509(2)))
	{
		return 0;
	}
	if (!func_1295(&(Local_134.f_143), func_509(1), func_851(1)))
	{
		return 0;
	}
	if (!func_507(&(Local_134.f_57[5]), &(Local_134.f_77), func_506(5), 0, 1, 0))
	{
		return 0;
	}
	else
	{
		__LIB_1__::func_581(&(Local_134.f_64), 32);
	}
	if (!func_1298(&Local_134))
	{
		return 0;
	}
	ENTITY::SET_ENTITY_HEADING(Local_134.f_143, func_851(30));
	func_1299(Global_35, 36);
	if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(Local_134.f_57[5], "pearson", &Var0, false, 0, 2))
	{
		func_531(Local_134.f_80[0], Var0.f_6, Var0.f_9.f_2, 2, 1073741824 /* Float: 2f */);
	}
	__LIB_1__::func_649(&Local_134, 1);
	func_522(&(Local_134.f_9), 2);
	if (ENTITY::DOES_ENTITY_EXIST(Local_134.f_80[3]))
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_134.f_80[3], func_509(19), func_851(19), true, false, true);
	}
	__LIB_0__::func_489(0, 0);
	PED::_SET_PED_BLACKBOARD_FLOAT(Local_134.f_80[0], "Stealth", 1f, -1);
	PED::_SET_PED_CROUCH_MOVEMENT(Local_134.f_80[0], true, 0, false);
	TASK::TASK_STAND_STILL(Local_134.f_80[0], -1);
	PED::_0x2208438012482A1A(Local_134.f_80[0], false, false);
	PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "Stealth", 1f, -1);
	PED::_SET_PED_CROUCH_MOVEMENT(Global_35, true, 0, false);
	PED::_0x2208438012482A1A(Global_35, false, false);
	ENTITY::FREEZE_ENTITY_POSITION(Local_134.f_143, true);
	if (MAP::DOES_BLIP_EXIST(uParam0->f_43))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_43));
	}
	AUDIO::TRIGGER_MUSIC_EVENT("BOB_HUNT06_RESTART_4");
	return 1;
}

int func_978(var uParam0)
{
	if (!func_1294(func_509(30)))
	{
		return 0;
	}
	if (!func_1295(&(Local_134.f_143), func_509(30), func_851(30)))
	{
		return 0;
	}
	__LIB_1__::func_572(func_509(30), 15f, 0, 0, 0, 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(Local_134.f_143))
	{
		ENTITY::SET_ENTITY_HEADING(Local_134.f_143, func_851(30));
		PED::SET_PED_INTO_VEHICLE(Global_35, Local_134.f_143, -1);
		PED::SET_PED_INTO_VEHICLE(__LIB_0__::func_271(uParam0->f_2), Local_134.f_143, 1);
	}
	__LIB_0__::func_489(0, 0);
	if (MAP::DOES_BLIP_EXIST(uParam0->f_43))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_43));
	}
	ENTITY::FREEZE_ENTITY_POSITION(Local_134.f_143, true);
	__LIB_1__::func_649(&Local_134, 1);
	func_522(&(Local_134.f_9), 3);
	func_899(&(Local_134.f_8), 5);
	AUDIO::TRIGGER_MUSIC_EVENT("BOB_HUNT06_RESTART_5");
	return 1;
}

int func_982(var uParam0, int iParam1, int iParam2)
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
		return func_982(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

void func_1110(int iParam0)
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
	func_418(iParam0, 1, 1, -142743235, 1);
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
		func_418(uVar18[iVar36], 1, 1, -142743235, 1);
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

void func_1115(struct<6> Param0)
{
	if (!func_1376(Param0.f_4, 1))
	{
	}
	if (!func_1376(Param0, 1))
	{
	}
	if (!func_1376(Param0.f_2, 1))
	{
	}
	if (!func_1376(Param0.f_5, 1))
	{
	}
	if (!func_1376(Param0.f_3, 1))
	{
	}
	if (!func_1376(Param0.f_1, 1))
	{
	}
}

int func_1146(int iParam0)
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
			Jump @9444; //curOff = 1958
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
			Jump @9444; //curOff = 2479
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
			Jump @9444; //curOff = 2918
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
			Jump @9444; //curOff = 3513
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
			Jump @9444; //curOff = 4296
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
			Jump @9444; //curOff = 4380
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GUARMA");
			VOLUME::_0xBCE668AAF83608BE(iVar0, 2410.933f, -7578.265f, 50f, 0f, 0f, 0f, 2000f, 2000f, 890f);
			VOLUME::_0xBCE668AAF83608BE(iVar0, 2388.016f, -4563.885f, 50f, 0f, 0f, 0f, 815f, 500f, 800f);
			Jump @9444; //curOff = 4471
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
bool func_1147(int iParam0)
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

void func_1184(int iParam0)
{
	float fVar0;
	fVar0 = __LIB_0__::func_665(iParam0->f_80[0], Global_35, 1, 1);
	if (fVar0 > 50f)
	{
		__LIB_1__::func_581(&(iParam0->f_128), 2097152);
	}
	else if (fVar0 > 35f)
	{
		if (!__LIB_0__::func_27(iParam0->f_128, 8388608))
		{
			iParam0->f_159 = UILOG::_UILOG_GET_CACHED_OBJECTIVE();
			__LIB_1__::func_324("FS06_WRN_RTRN");
			__LIB_1__::func_422("FS06_WRN_RTRN", 7500, 0, 1, 0, 0, -1, -1, 0);
			__LIB_1__::func_581(&(iParam0->f_128), 8388608);
		}
	}
	else if (fVar0 < 25f)
	{
		if (__LIB_0__::func_27(iParam0->f_128, 8388608))
		{
			__LIB_1__::func_324(iParam0->f_159);
			__LIB_1__::func_681(&(iParam0->f_128), 8388608);
		}
	}
}

void func_1191(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	float fVar7;
	vector3 vVar8;
	vector3 vVar11;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_80[0]))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_57[2], "pearson", iParam0->f_80[0], 0);
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0->f_80[0], true, false) };
		vVar3 = { 2042.198f, -1885.869f, 40.65866f };
		uVar6 = vVar0.z;
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &uVar6, false))
		{
			vVar0.f_2 = uVar6;
			vVar3.f_2 = uVar6;
		}
		fVar7 = __LIB_0__::func_152(vVar0, vVar3, 1);
		vVar8 = { 0f, 0f, fVar7 };
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iParam0->f_57[2], vVar3, vVar8, 2);
		if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iParam0->f_57[2], "CRAYFISH", &vVar11, false, 0, 2))
		{
			iParam0->f_103[7] = OBJECT::CREATE_OBJECT(joaat("P_CRAYFISH01X"), vVar11, true, true, false, false, true);
		}
		else
		{
			iParam0->f_103[7] = OBJECT::CREATE_OBJECT(joaat("P_CRAYFISH01X"), vVar3, true, true, false, false, true);
		}
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_57[2], "CRAYFISH", iParam0->f_103[7], 0);
	}
	WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_57[2], "ARTHUR", Global_35, 0);
	ANIMSCENE::START_ANIM_SCENE(iParam0->f_57[2]);
}

char* func_1192()
{
	return "script@common@cnv_camp@caprs@hunt06@ig2_shallow_water_hole@player";
}

char* func_1193(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PL_Enter";
		case 1:
			return "PL_Catch";
		case 2:
			return "PL_Exit";
		case 3:
			return "PL_ExitQuick";
		case 4:
			return "PL_Search";
		default:
			break;
	}
	return "CRAYFISH_PLAYLIST_FAIL";
}

Vector3 func_1200()
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	vector3 vVar5;
	fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f);
	fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f);
	vVar2 = { fVar0, fVar1, 0f };
	vVar2 = { __LIB_0__::func_173(vVar2) };
	vVar5 = { vVar5 + vVar2 * Vector(127f, 127f, 127f) };
	return vVar5;
}

Vector3 func_1211(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 2070.605f, -1925.247f, 41.46365f;
		case 2:
			return 2083.111f, -1917.3f, 40.90316f;
		case 3:
			return 2076.61f, -1910.752f, 40.63081f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

int func_1213(int iParam0)
{
	return func_1414(iParam0, 0);
}

bool func_1214(int iParam0)
{
	int iVar0;
	iVar0 = 1;
	while (iVar0 <= 3)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_80[iVar0]))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_1215(int iParam0)
{
	int iVar0;
	iVar0 = 1;
	while (iVar0 <= 3)
	{
		if (iParam0->f_14[iVar0] != 6)
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_1217(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0) && VOLUME::_DOES_VOLUME_EXIST(iParam1))
	{
		PED::_0xFC3DB99C8144CD81(iParam0, iParam1, 0, 0, 0);
	}
}

void func_1220(int iParam0)
{
	__LIB_1__::func_772(&(iParam0->f_160), Global_35, "ARTHUR", 0, 0, 0);
	__LIB_1__::func_772(&(iParam0->f_160), iParam0->f_80[0], "MrPearson", 0, 0, 0);
	__LIB_1__::func_620(&(iParam0->f_160), iParam0->f_143, "ROWBOATSWAMP", 0, 0, 0);
	__LIB_7__::func_911(&(iParam0->f_160), 262067);
}

void func_1231(var uParam0)
{
	vector3 vVar0;
	if (!__LIB_0__::func_84(uParam0, 4))
	{
		if (__LIB_0__::func_1(uParam0->f_212, 16384))
		{
			GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
		}
		vVar0 = { __LIB_1__::func_518(uParam0) };
		if (!__LIB_0__::func_1(uParam0->f_212, 524288))
		{
			__LIB_4__::func_717(&(uParam0->f_224));
		}
		func_1436(&(uParam0->f_212), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_1__::func_519(uParam0, 0f, 0f, 0f);
		func_1438(uParam0);
		func_1439(uParam0);
		__LIB_1__::func_577(uParam0, 0f, 0f, 0f, 0, 0);
		__LIB_1__::func_596(uParam0);
		__LIB_0__::func_88(uParam0, 4);
		__LIB_0__::func_106(uParam0, 0);
		__LIB_1__::func_550(&(Global_1946804.f_1497), Global_35, 1, 64, 1, 1, 1);
		if (CAM::_0x927B810E43E99932(&(uParam0->f_225)))
		{
			CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_225));
		}
	}
}

bool func_1294(vector3 vParam0)
{
	if (__LIB_0__::func_94(Global_35, vParam0, 1) > 25f)
	{
		if (STREAMING::_0xCF45DF50C7775F2A() == 0)
		{
			STREAMING::_0x513F8AA5BF2F17CF(vParam0, 50f, 0);
		}
	}
	if (STREAMING::_0xCF45DF50C7775F2A())
	{
		if (!STREAMING::_0x0909F71B5C070797())
		{
			return false;
		}
	}
	return true;
}

bool func_1295(var uParam0, vector3 vParam1, float fParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		*uParam0 = VEHICLE::CREATE_VEHICLE(func_542(0), vParam1, fParam4, true, true, false, false);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return false;
	}
	return true;
}

bool func_1298(var uParam0)
{
	bool bVar0;
	bVar0 = true;
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_70[0]))
	{
		uParam0->f_70[0] = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(2076.609f, -1910.732f, 40.84669f, joaat("WB_GATOR_EGG_NEST"), 1f, 0, false);
		bVar0 = false;
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_70[1]))
	{
		uParam0->f_70[1] = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(2083.159f, -1917.445f, 41.08478f, joaat("WB_GATOR_EGG_NEST"), 1f, 0, false);
		bVar0 = false;
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_70[2]))
	{
		uParam0->f_70[2] = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(2070.59f, -1925.389f, 41.64231f, joaat("WB_GATOR_EGG_NEST"), 1f, 0, false);
		bVar0 = false;
	}
	if (bVar0)
	{
		TASK::_0x5A40040BB5AE3EA2(uParam0->f_70[0]);
		TASK::_0x5A40040BB5AE3EA2(uParam0->f_70[1]);
		TASK::_0x5A40040BB5AE3EA2(uParam0->f_70[2]);
		return true;
	}
	return false;
}

void func_1299(int iParam0, int iParam1)
{
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, func_509(iParam1), func_851(iParam1), true, false, true);
}

bool func_1376(int iParam0, int iParam1)
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
				if (func_1376(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_1376(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_1376(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_1376(iVar21, 1))
				{
				}
			}
		}
		__LIB_1__::func_712();
		return true;
	}
	return false;
}

int func_1414(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = __LIB_10__::func_596(iParam0, iParam1);
	if (iVar0 != 0)
	{
		return 1;
	}
	return 0;
}

void func_1417(var uParam0)
{
	if (__LIB_18__::func_215(uParam0, Global_35, 0, 0, 1, 1))
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, func_509(34), func_851(34), true, false, true);
	}
	if (__LIB_18__::func_215(uParam0, Local_134.f_80[0], 0, 0, 1, 1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_134.f_80[0]))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_134.f_80[0], func_509(35), func_851(35), true, false, true);
		}
	}
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
		func_1564();
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
	if (__LIB_0__::func_84(uParam0, 2048) && !__LIB_0__::func_86(__LIB_1__::func_524(uParam0)))
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
			func_531(iVar1, __LIB_1__::func_524(uParam0), __LIB_1__::func_525(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_531(iVar3, __LIB_1__::func_524(uParam0), __LIB_1__::func_525(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_1439(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if ((__LIB_0__::func_84(uParam0, 268435456) && !__LIB_0__::func_86(__LIB_1__::func_524(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { __LIB_1__::func_524(uParam0) };
			func_531(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

void func_1564()
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
	iVar0 = func_1621(6291456, 0);
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

int func_1621(int iParam0, int iParam1)
{
	var uVar0;
	return func_1633(&uVar0, iParam0, iParam1);
}

int func_1633(var uParam0, int iParam1, int iParam2)
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
		return func_1633(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

