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
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42[3] = { 0, 0, 0 };
	var uLocal_46[2] = { 0, 0 };
	int iLocal_49 = 0;
	int iLocal_50[3] = { 0, 0, 0 };
	int iLocal_54[3] = { 0, 0, 0 };
	int iLocal_58[1] = { 0 };
	int iLocal_60[1] = { 0 };
	int iLocal_62[2] = { 0, 0 };
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	vector3 vLocal_69 = { 0f, 0f, 0f };
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75[17] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_93[71] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167[4] = { 0, 0, 0, 0 };
	var uLocal_172 = 7;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	int iLocal_180[1] = { 0 };
	int iLocal_182[2] = { 0, 0 };
	int iLocal_185[1] = { 0 };
	bool bLocal_187 = false;
	bool bLocal_188 = false;
	bool bLocal_189 = false;
	var uLocal_190 = 4;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195[2] = { 0, 0 };
	int iLocal_198[2] = { 0, 0 };
	int iLocal_201 = 0;
	var uLocal_202[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	vector3 vLocal_224[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_231[1] = {{ 0f, 0f, 0f } };
	var uLocal_235 = 1;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	vector3 vLocal_239[3] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
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
	int iLocal_261 = 0;
	var uLocal_262[2] = { 0, 0 };
	var uLocal_265[3] = { 0, 0, 0 };
	int iLocal_269 = 0;
	var uLocal_270[2] = { 0, 0 };
	var uLocal_273[2] = { 0, 0 };
	var uLocal_276[1] = { 0 };
	var uLocal_278 = 1;
	var uLocal_279 = 0;
	int iLocal_280 = 0;
	int iLocal_281 = 0;
	int iLocal_282 = 0;
	struct<25> Local_283[2];
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	int iLocal_336 = 0;
	var uLocal_337 = 0;
	int iLocal_338 = 0;
	int iLocal_339 = 0;
	int iLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	int iLocal_344 = 0;
	var uLocal_345[2] = { 0, 0 };
	int iLocal_348 = 0;
	int iLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	int iLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	float fLocal_366 = 0f;
	int iLocal_367 = 0;
	var uLocal_368 = 1;
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
	var uLocal_381 = 65;
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
	var uLocal_440 = 0;
	var uLocal_441 = 0;
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
	var uLocal_468 = 0;
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
	var uLocal_537 = 0;
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
	var uLocal_764 = 0;
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
	var uLocal_797 = 0;
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
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	var uLocal_860 = 0;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 0;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	var uLocal_884 = 0;
	var uLocal_885 = 0;
	var uLocal_886 = 0;
	var uLocal_887 = 0;
	var uLocal_888 = 0;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = 0;
	var uLocal_903 = 0;
	var uLocal_904 = 0;
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	var uLocal_912 = 0;
	var uLocal_913 = 0;
	var uLocal_914 = 0;
	var uLocal_915 = 0;
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = 0;
	var uLocal_928 = 0;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	var uLocal_939 = 0;
	var uLocal_940 = 0;
	var uLocal_941 = 0;
	var uLocal_942 = 0;
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
	var uLocal_961 = 0;
	var uLocal_962 = 0;
	var uLocal_963 = 0;
	var uLocal_964 = 0;
	var uLocal_965 = 0;
	var uLocal_966 = 0;
	var uLocal_967 = 0;
	var uLocal_968 = 0;
	var uLocal_969 = 0;
	var uLocal_970 = 0;
	var uLocal_971 = 0;
	var uLocal_972 = 0;
	var uLocal_973 = 0;
	var uLocal_974 = 0;
	var uLocal_975 = 0;
	var uLocal_976 = 0;
	var uLocal_977 = 0;
	var uLocal_978 = 0;
	var uLocal_979 = 0;
	var uLocal_980 = 0;
	var uLocal_981 = 0;
	var uLocal_982 = 0;
	var uLocal_983 = 0;
	var uLocal_984 = 0;
	var uLocal_985 = 0;
	var uLocal_986 = 0;
	var uLocal_987 = 0;
	var uLocal_988 = 0;
	var uLocal_989 = 0;
	var uLocal_990 = 0;
	var uLocal_991 = 0;
	var uLocal_992 = 0;
	var uLocal_993 = 0;
	var uLocal_994 = 0;
	var uLocal_995 = 0;
	var uLocal_996 = 0;
	var uLocal_997 = 0;
	var uLocal_998 = 0;
	var uLocal_999 = 0;
	var uLocal_1000 = 0;
	var uLocal_1001 = 0;
	var uLocal_1002 = 0;
	var uLocal_1003 = 0;
	var uLocal_1004 = 0;
	var uLocal_1005 = 0;
	var uLocal_1006 = 0;
	var uLocal_1007 = 0;
	var uLocal_1008 = 0;
	var uLocal_1009 = 0;
	var uLocal_1010 = 0;
	var uLocal_1011 = 0;
	var uLocal_1012 = 0;
	var uLocal_1013 = 0;
	var uLocal_1014 = 0;
	var uLocal_1015 = 0;
	var uLocal_1016 = 0;
	var uLocal_1017 = 0;
	var uLocal_1018 = 0;
	var uLocal_1019 = 0;
	var uLocal_1020 = 0;
	var uLocal_1021 = 0;
	var uLocal_1022 = 0;
	var uLocal_1023 = 0;
	var uLocal_1024 = 0;
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
	var uLocal_1027 = 0;
	var uLocal_1028 = 0;
	var uLocal_1029 = 0;
	var uLocal_1030 = 0;
	var uLocal_1031 = 0;
	var uLocal_1032 = 0;
	var uLocal_1033 = 0;
	var uLocal_1034 = 0;
	var uLocal_1035 = 0;
	var uLocal_1036 = 0;
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
	var uLocal_1162 = 1097859072;
	var uLocal_1163 = 1101004800;
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
	var uLocal_1190 = 4;
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
	bool bLocal_1261 = false;
	bool bLocal_1262 = false;
	int iLocal_1263 = 0;
	var uLocal_1264 = 0;
	var uLocal_1265 = 0;
	var uLocal_1266 = 0;
	int iLocal_1267 = 0;
	struct<9> Local_1268 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1277 = 0;
	var uLocal_1278 = 0;
	var uLocal_1279 = 0;
	var uLocal_1280 = 0;
	var uLocal_1281 = 0;
	var uLocal_1282 = 0;
	var uLocal_1283 = 0;
	int iLocal_1284 = 0;
	int iLocal_1285 = 0;
	int iLocal_1286 = 0;
	int iLocal_1287 = 0;
	int iLocal_1288 = 0;
	int iLocal_1289 = 0;
	int iLocal_1290 = 0;
	var uLocal_1291 = -1;
	var uLocal_1292 = 0;
	var uLocal_1293 = -1;
	var uLocal_1294 = 0;
	var uLocal_1295 = 0;
	var uLocal_1296 = -1;
	var uLocal_1297 = 0;
	var uLocal_1298 = 0;
	var uLocal_1299 = 0;
	var uLocal_1300 = 0;
	var uLocal_1301 = 0;
	var uLocal_1302 = 1073741824;
	var uLocal_1303 = 0;
	var uLocal_1304 = 0;
	var uLocal_1305 = 0;
	var uLocal_1306 = 1;
	var uLocal_1307 = 0;
	var uLocal_1308 = 0;
	var uLocal_1309 = 0;
	var uLocal_1310 = 0;
	struct<17> Local_1311[1];
	int iLocal_1329 = 0;
	var uLocal_1330 = 0;
	var uLocal_1331 = 0;
	var uLocal_1332 = 0;
	int iLocal_1333 = 0;
	int iLocal_1334 = 0;
	int iLocal_1335 = 0;
	int iLocal_1336 = 0;
	int iLocal_1337 = 0;
	int iLocal_1338 = 0;
	int iLocal_1339 = 0;
	int iLocal_1340 = 0;
	int iLocal_1341 = 0;
	int iLocal_1342 = 0;
	var uLocal_1343 = 0;
	var uLocal_1344 = 0;
	var uLocal_1345 = 0;
	var uLocal_1346 = 0;
	var uLocal_1347 = 0;
	var uLocal_1348 = 0;
	int iLocal_1349 = 0;
	int iLocal_1350 = 0;
	int iLocal_1351 = 0;
	int iLocal_1352 = 0;
	var uLocal_1353 = 0;
	var uLocal_1354 = 0;
	var uLocal_1355 = 0;
	var uLocal_1356 = 0;
	var uLocal_1357 = 0;
	var uLocal_1358 = 0;
	struct<21> Local_1359[1];
	struct<17> Local_1381[2];
	int iLocal_1416 = 0;
	var uLocal_1417 = 0;
	var uLocal_1418 = 0;
	var uLocal_1419 = 0;
	var uLocal_1420 = 0;
	var uLocal_1421 = 0;
	var uLocal_1422 = 0;
	bool bLocal_1423 = false;
	bool bLocal_1424 = false;
	var uLocal_1425 = 0;
	var uLocal_1426 = 0;
	var uLocal_1427 = 0;
	int iLocal_1428 = 0;
	int iLocal_1429 = 0;
	int iLocal_1430 = 0;
	int iLocal_1431 = 0;
	int iLocal_1432 = 0;
	var uLocal_1433 = 0;
	var uLocal_1434 = 0;
	var uLocal_1435 = 0;
	bool bLocal_1436 = false;
	var uLocal_1437 = 0;
	var uLocal_1438 = 27;
	var uLocal_1439 = 8;
	var uLocal_1440 = 0;
	var uLocal_1441 = 0;
	var uLocal_1442 = 0;
	var uLocal_1443 = 0;
	var uLocal_1444 = 0;
	var uLocal_1445 = 0;
	var uLocal_1446 = 0;
	var uLocal_1447 = 0;
	var uLocal_1448 = 0;
	var uLocal_1449 = 0;
	var uLocal_1450 = 0;
	var uLocal_1451 = 0;
	var uLocal_1452 = 0;
	var uLocal_1453 = 0;
	var uLocal_1454 = 0;
	var uLocal_1455 = 0;
	var uLocal_1456 = 0;
	var uLocal_1457 = 0;
	var uLocal_1458 = 0;
	var uLocal_1459 = 0;
	var uLocal_1460 = -1;
	var uLocal_1461 = 8;
	var uLocal_1462 = 0;
	var uLocal_1463 = 0;
	var uLocal_1464 = 0;
	var uLocal_1465 = 0;
	var uLocal_1466 = 0;
	var uLocal_1467 = 0;
	var uLocal_1468 = 0;
	var uLocal_1469 = 0;
	var uLocal_1470 = 0;
	var uLocal_1471 = 0;
	var uLocal_1472 = 0;
	var uLocal_1473 = 0;
	var uLocal_1474 = 0;
	var uLocal_1475 = 0;
	var uLocal_1476 = 0;
	var uLocal_1477 = 0;
	var uLocal_1478 = 0;
	var uLocal_1479 = 0;
	var uLocal_1480 = 0;
	var uLocal_1481 = 0;
	var uLocal_1482 = -1;
	var uLocal_1483 = 8;
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
	var uLocal_1504 = -1;
	var uLocal_1505 = 8;
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
	var uLocal_1526 = -1;
	var uLocal_1527 = 8;
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
	var uLocal_1548 = -1;
	var uLocal_1549 = 8;
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
	var uLocal_1570 = -1;
	var uLocal_1571 = 8;
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
	var uLocal_1592 = -1;
	var uLocal_1593 = 8;
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
	var uLocal_1613 = 0;
	var uLocal_1614 = -1;
	var uLocal_1615 = 8;
	var uLocal_1616 = 0;
	var uLocal_1617 = 0;
	var uLocal_1618 = 0;
	var uLocal_1619 = 0;
	var uLocal_1620 = 0;
	var uLocal_1621 = 0;
	var uLocal_1622 = 0;
	var uLocal_1623 = 0;
	var uLocal_1624 = 0;
	var uLocal_1625 = 0;
	var uLocal_1626 = 0;
	var uLocal_1627 = 0;
	var uLocal_1628 = 0;
	var uLocal_1629 = 0;
	var uLocal_1630 = 0;
	var uLocal_1631 = 0;
	var uLocal_1632 = 0;
	var uLocal_1633 = 0;
	var uLocal_1634 = 0;
	var uLocal_1635 = 0;
	var uLocal_1636 = -1;
	var uLocal_1637 = 8;
	var uLocal_1638 = 0;
	var uLocal_1639 = 0;
	var uLocal_1640 = 0;
	var uLocal_1641 = 0;
	var uLocal_1642 = 0;
	var uLocal_1643 = 0;
	var uLocal_1644 = 0;
	var uLocal_1645 = 0;
	var uLocal_1646 = 0;
	var uLocal_1647 = 0;
	var uLocal_1648 = 0;
	var uLocal_1649 = 0;
	var uLocal_1650 = 0;
	var uLocal_1651 = 0;
	var uLocal_1652 = 0;
	var uLocal_1653 = 0;
	var uLocal_1654 = 0;
	var uLocal_1655 = 0;
	var uLocal_1656 = 0;
	var uLocal_1657 = 0;
	var uLocal_1658 = -1;
	var uLocal_1659 = 8;
	var uLocal_1660 = 0;
	var uLocal_1661 = 0;
	var uLocal_1662 = 0;
	var uLocal_1663 = 0;
	var uLocal_1664 = 0;
	var uLocal_1665 = 0;
	var uLocal_1666 = 0;
	var uLocal_1667 = 0;
	var uLocal_1668 = 0;
	var uLocal_1669 = 0;
	var uLocal_1670 = 0;
	var uLocal_1671 = 0;
	var uLocal_1672 = 0;
	var uLocal_1673 = 0;
	var uLocal_1674 = 0;
	var uLocal_1675 = 0;
	var uLocal_1676 = 0;
	var uLocal_1677 = 0;
	var uLocal_1678 = 0;
	var uLocal_1679 = 0;
	var uLocal_1680 = -1;
	var uLocal_1681 = 8;
	var uLocal_1682 = 0;
	var uLocal_1683 = 0;
	var uLocal_1684 = 0;
	var uLocal_1685 = 0;
	var uLocal_1686 = 0;
	var uLocal_1687 = 0;
	var uLocal_1688 = 0;
	var uLocal_1689 = 0;
	var uLocal_1690 = 0;
	var uLocal_1691 = 0;
	var uLocal_1692 = 0;
	var uLocal_1693 = 0;
	var uLocal_1694 = 0;
	var uLocal_1695 = 0;
	var uLocal_1696 = 0;
	var uLocal_1697 = 0;
	var uLocal_1698 = 0;
	var uLocal_1699 = 0;
	var uLocal_1700 = 0;
	var uLocal_1701 = 0;
	var uLocal_1702 = -1;
	var uLocal_1703 = 8;
	var uLocal_1704 = 0;
	var uLocal_1705 = 0;
	var uLocal_1706 = 0;
	var uLocal_1707 = 0;
	var uLocal_1708 = 0;
	var uLocal_1709 = 0;
	var uLocal_1710 = 0;
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
	var uLocal_1724 = -1;
	var uLocal_1725 = 8;
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
	var uLocal_1746 = -1;
	var uLocal_1747 = 8;
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
	var uLocal_1759 = 0;
	var uLocal_1760 = 0;
	var uLocal_1761 = 0;
	var uLocal_1762 = 0;
	var uLocal_1763 = 0;
	var uLocal_1764 = 0;
	var uLocal_1765 = 0;
	var uLocal_1766 = 0;
	var uLocal_1767 = 0;
	var uLocal_1768 = -1;
	var uLocal_1769 = 8;
	var uLocal_1770 = 0;
	var uLocal_1771 = 0;
	var uLocal_1772 = 0;
	var uLocal_1773 = 0;
	var uLocal_1774 = 0;
	var uLocal_1775 = 0;
	var uLocal_1776 = 0;
	var uLocal_1777 = 0;
	var uLocal_1778 = 0;
	var uLocal_1779 = 0;
	var uLocal_1780 = 0;
	var uLocal_1781 = 0;
	var uLocal_1782 = 0;
	var uLocal_1783 = 0;
	var uLocal_1784 = 0;
	var uLocal_1785 = 0;
	var uLocal_1786 = 0;
	var uLocal_1787 = 0;
	var uLocal_1788 = 0;
	var uLocal_1789 = 0;
	var uLocal_1790 = -1;
	var uLocal_1791 = 8;
	var uLocal_1792 = 0;
	var uLocal_1793 = 0;
	var uLocal_1794 = 0;
	var uLocal_1795 = 0;
	var uLocal_1796 = 0;
	var uLocal_1797 = 0;
	var uLocal_1798 = 0;
	var uLocal_1799 = 0;
	var uLocal_1800 = 0;
	var uLocal_1801 = 0;
	var uLocal_1802 = 0;
	var uLocal_1803 = 0;
	var uLocal_1804 = 0;
	var uLocal_1805 = 0;
	var uLocal_1806 = 0;
	var uLocal_1807 = 0;
	var uLocal_1808 = 0;
	var uLocal_1809 = 0;
	var uLocal_1810 = 0;
	var uLocal_1811 = 0;
	var uLocal_1812 = -1;
	var uLocal_1813 = 8;
	var uLocal_1814 = 0;
	var uLocal_1815 = 0;
	var uLocal_1816 = 0;
	var uLocal_1817 = 0;
	var uLocal_1818 = 0;
	var uLocal_1819 = 0;
	var uLocal_1820 = 0;
	var uLocal_1821 = 0;
	var uLocal_1822 = 0;
	var uLocal_1823 = 0;
	var uLocal_1824 = 0;
	var uLocal_1825 = 0;
	var uLocal_1826 = 0;
	var uLocal_1827 = 0;
	var uLocal_1828 = 0;
	var uLocal_1829 = 0;
	var uLocal_1830 = 0;
	var uLocal_1831 = 0;
	var uLocal_1832 = 0;
	var uLocal_1833 = 0;
	var uLocal_1834 = -1;
	var uLocal_1835 = 8;
	var uLocal_1836 = 0;
	var uLocal_1837 = 0;
	var uLocal_1838 = 0;
	var uLocal_1839 = 0;
	var uLocal_1840 = 0;
	var uLocal_1841 = 0;
	var uLocal_1842 = 0;
	var uLocal_1843 = 0;
	var uLocal_1844 = 0;
	var uLocal_1845 = 0;
	var uLocal_1846 = 0;
	var uLocal_1847 = 0;
	var uLocal_1848 = 0;
	var uLocal_1849 = 0;
	var uLocal_1850 = 0;
	var uLocal_1851 = 0;
	var uLocal_1852 = 0;
	var uLocal_1853 = 0;
	var uLocal_1854 = 0;
	var uLocal_1855 = 0;
	var uLocal_1856 = -1;
	var uLocal_1857 = 8;
	var uLocal_1858 = 0;
	var uLocal_1859 = 0;
	var uLocal_1860 = 0;
	var uLocal_1861 = 0;
	var uLocal_1862 = 0;
	var uLocal_1863 = 0;
	var uLocal_1864 = 0;
	var uLocal_1865 = 0;
	var uLocal_1866 = 0;
	var uLocal_1867 = 0;
	var uLocal_1868 = 0;
	var uLocal_1869 = 0;
	var uLocal_1870 = 0;
	var uLocal_1871 = 0;
	var uLocal_1872 = 0;
	var uLocal_1873 = 0;
	var uLocal_1874 = 0;
	var uLocal_1875 = 0;
	var uLocal_1876 = 0;
	var uLocal_1877 = 0;
	var uLocal_1878 = -1;
	var uLocal_1879 = 8;
	var uLocal_1880 = 0;
	var uLocal_1881 = 0;
	var uLocal_1882 = 0;
	var uLocal_1883 = 0;
	var uLocal_1884 = 0;
	var uLocal_1885 = 0;
	var uLocal_1886 = 0;
	var uLocal_1887 = 0;
	var uLocal_1888 = 0;
	var uLocal_1889 = 0;
	var uLocal_1890 = 0;
	var uLocal_1891 = 0;
	var uLocal_1892 = 0;
	var uLocal_1893 = 0;
	var uLocal_1894 = 0;
	var uLocal_1895 = 0;
	var uLocal_1896 = 0;
	var uLocal_1897 = 0;
	var uLocal_1898 = 0;
	var uLocal_1899 = 0;
	var uLocal_1900 = -1;
	var uLocal_1901 = 8;
	var uLocal_1902 = 0;
	var uLocal_1903 = 0;
	var uLocal_1904 = 0;
	var uLocal_1905 = 0;
	var uLocal_1906 = 0;
	var uLocal_1907 = 0;
	var uLocal_1908 = 0;
	var uLocal_1909 = 0;
	var uLocal_1910 = 0;
	var uLocal_1911 = 0;
	var uLocal_1912 = 0;
	var uLocal_1913 = 0;
	var uLocal_1914 = 0;
	var uLocal_1915 = 0;
	var uLocal_1916 = 0;
	var uLocal_1917 = 0;
	var uLocal_1918 = 0;
	var uLocal_1919 = 0;
	var uLocal_1920 = 0;
	var uLocal_1921 = 0;
	var uLocal_1922 = -1;
	var uLocal_1923 = 8;
	var uLocal_1924 = 0;
	var uLocal_1925 = 0;
	var uLocal_1926 = 0;
	var uLocal_1927 = 0;
	var uLocal_1928 = 0;
	var uLocal_1929 = 0;
	var uLocal_1930 = 0;
	var uLocal_1931 = 0;
	var uLocal_1932 = 0;
	var uLocal_1933 = 0;
	var uLocal_1934 = 0;
	var uLocal_1935 = 0;
	var uLocal_1936 = 0;
	var uLocal_1937 = 0;
	var uLocal_1938 = 0;
	var uLocal_1939 = 0;
	var uLocal_1940 = 0;
	var uLocal_1941 = 0;
	var uLocal_1942 = 0;
	var uLocal_1943 = 0;
	var uLocal_1944 = -1;
	var uLocal_1945 = 8;
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
	var uLocal_1966 = -1;
	var uLocal_1967 = 8;
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
	var uLocal_1988 = -1;
	var uLocal_1989 = 8;
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
	var uLocal_2010 = -1;
	var uLocal_2011 = 8;
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
	var uLocal_2032 = -1;
	var uLocal_2033 = 0;
	var uLocal_2034 = 0;
	var uLocal_2035 = 0;
	var uLocal_2036 = 0;
	var uLocal_2037 = 0;
	var uLocal_2038 = 0;
	var uLocal_2039 = 0;
	var uLocal_2040 = 0;
	var uLocal_2041 = 0;
	var uLocal_2042 = 0;
	var uLocal_2043 = 0;
	var uLocal_2044 = 0;
	var uLocal_2045 = 0;
	var uLocal_2046 = 0;
	var uLocal_2047 = 0;
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
	var uLocal_2069 = 0;
	var uLocal_2070 = 0;
	var uLocal_2071 = 2;
	var uLocal_2072 = 0;
	var uLocal_2073 = 0;
	var uLocal_2074 = 0;
	var uLocal_2075 = 60;
	var uLocal_2076 = 0;
	var uLocal_2077 = 0;
	var uLocal_2078 = 0;
	var uLocal_2079 = 0;
	var uLocal_2080 = 0;
	var uLocal_2081 = 0;
	var uLocal_2082 = 0;
	var uLocal_2083 = 0;
	var uLocal_2084 = 0;
	var uLocal_2085 = 0;
	var uLocal_2086 = 0;
	var uLocal_2087 = 0;
	var uLocal_2088 = 0;
	var uLocal_2089 = 0;
	var uLocal_2090 = 0;
	var uLocal_2091 = 0;
	var uLocal_2092 = 0;
	var uLocal_2093 = 0;
	var uLocal_2094 = 0;
	var uLocal_2095 = 0;
	var uLocal_2096 = 0;
	var uLocal_2097 = 0;
	var uLocal_2098 = 0;
	var uLocal_2099 = 0;
	var uLocal_2100 = 0;
	var uLocal_2101 = 0;
	var uLocal_2102 = 0;
	var uLocal_2103 = 0;
	var uLocal_2104 = 0;
	var uLocal_2105 = 0;
	var uLocal_2106 = 0;
	var uLocal_2107 = 0;
	var uLocal_2108 = 0;
	var uLocal_2109 = 0;
	var uLocal_2110 = 0;
	var uLocal_2111 = 0;
	var uLocal_2112 = 0;
	var uLocal_2113 = 0;
	var uLocal_2114 = 0;
	var uLocal_2115 = 0;
	var uLocal_2116 = 0;
	var uLocal_2117 = 0;
	var uLocal_2118 = 0;
	var uLocal_2119 = 0;
	var uLocal_2120 = 0;
	var uLocal_2121 = 0;
	var uLocal_2122 = 0;
	var uLocal_2123 = 0;
	var uLocal_2124 = 0;
	var uLocal_2125 = 0;
	var uLocal_2126 = 0;
	var uLocal_2127 = 0;
	var uLocal_2128 = 0;
	var uLocal_2129 = 0;
	var uLocal_2130 = 0;
	var uLocal_2131 = 0;
	var uLocal_2132 = 0;
	var uLocal_2133 = 0;
	var uLocal_2134 = 0;
	var uLocal_2135 = 0;
	var uLocal_2136 = 0;
	var uLocal_2137 = 0;
	var uLocal_2138 = 0;
	var uLocal_2139 = 0;
	var uLocal_2140 = 0;
	var uLocal_2141 = 0;
	var uLocal_2142 = 0;
	var uLocal_2143 = 0;
	var uLocal_2144 = 0;
	var uLocal_2145 = 0;
	var uLocal_2146 = 0;
	var uLocal_2147 = 0;
	var uLocal_2148 = 0;
	var uLocal_2149 = 0;
	var uLocal_2150 = 0;
	var uLocal_2151 = 0;
	var uLocal_2152 = 0;
	var uLocal_2153 = 0;
	var uLocal_2154 = 0;
	var uLocal_2155 = 0;
	var uLocal_2156 = 0;
	var uLocal_2157 = 0;
	var uLocal_2158 = 0;
	var uLocal_2159 = 0;
	var uLocal_2160 = 0;
	var uLocal_2161 = 0;
	var uLocal_2162 = 0;
	var uLocal_2163 = 0;
	var uLocal_2164 = 0;
	var uLocal_2165 = 0;
	var uLocal_2166 = 0;
	var uLocal_2167 = 0;
	var uLocal_2168 = 0;
	var uLocal_2169 = 0;
	var uLocal_2170 = 0;
	var uLocal_2171 = 0;
	var uLocal_2172 = 0;
	var uLocal_2173 = 0;
	var uLocal_2174 = 0;
	var uLocal_2175 = 0;
	var uLocal_2176 = 0;
	var uLocal_2177 = 0;
	var uLocal_2178 = 0;
	var uLocal_2179 = 0;
	var uLocal_2180 = 0;
	var uLocal_2181 = 0;
	var uLocal_2182 = 0;
	var uLocal_2183 = 0;
	var uLocal_2184 = 0;
	var uLocal_2185 = 0;
	var uLocal_2186 = 0;
	var uLocal_2187 = 0;
	var uLocal_2188 = 0;
	var uLocal_2189 = 0;
	var uLocal_2190 = 0;
	var uLocal_2191 = 0;
	var uLocal_2192 = 0;
	var uLocal_2193 = 0;
	var uLocal_2194 = 0;
	var uLocal_2195 = 0;
	var uLocal_2196 = 0;
	var uLocal_2197 = 0;
	var uLocal_2198 = 0;
	var uLocal_2199 = 0;
	var uLocal_2200 = 0;
	var uLocal_2201 = 0;
	var uLocal_2202 = 0;
	var uLocal_2203 = 0;
	var uLocal_2204 = 0;
	var uLocal_2205 = 0;
	var uLocal_2206 = 0;
	var uLocal_2207 = 0;
	var uLocal_2208 = 0;
	var uLocal_2209 = 0;
	var uLocal_2210 = 0;
	var uLocal_2211 = 0;
	var uLocal_2212 = 0;
	var uLocal_2213 = 0;
	var uLocal_2214 = 0;
	var uLocal_2215 = 0;
	var uLocal_2216 = 0;
	var uLocal_2217 = 0;
	var uLocal_2218 = 0;
	var uLocal_2219 = 0;
	var uLocal_2220 = 0;
	var uLocal_2221 = 0;
	var uLocal_2222 = 0;
	var uLocal_2223 = 0;
	var uLocal_2224 = 0;
	var uLocal_2225 = 0;
	var uLocal_2226 = 0;
	var uLocal_2227 = 0;
	var uLocal_2228 = 0;
	var uLocal_2229 = 0;
	var uLocal_2230 = 0;
	var uLocal_2231 = 0;
	var uLocal_2232 = 0;
	var uLocal_2233 = 0;
	var uLocal_2234 = 0;
	var uLocal_2235 = 0;
	var uLocal_2236 = 0;
	var uLocal_2237 = 0;
	var uLocal_2238 = 0;
	var uLocal_2239 = 0;
	var uLocal_2240 = 0;
	var uLocal_2241 = 0;
	var uLocal_2242 = 0;
	var uLocal_2243 = 0;
	var uLocal_2244 = 0;
	var uLocal_2245 = 0;
	var uLocal_2246 = 0;
	var uLocal_2247 = 0;
	var uLocal_2248 = 0;
	var uLocal_2249 = 0;
	var uLocal_2250 = 0;
	var uLocal_2251 = 0;
	var uLocal_2252 = 0;
	var uLocal_2253 = 0;
	var uLocal_2254 = 0;
	var uLocal_2255 = 0;
	var uLocal_2256 = 40;
	var uLocal_2257 = 0;
	var uLocal_2258 = 0;
	var uLocal_2259 = 0;
	var uLocal_2260 = 0;
	var uLocal_2261 = 0;
	var uLocal_2262 = 0;
	var uLocal_2263 = 0;
	var uLocal_2264 = 0;
	var uLocal_2265 = 0;
	var uLocal_2266 = 0;
	var uLocal_2267 = 0;
	var uLocal_2268 = 0;
	var uLocal_2269 = 0;
	var uLocal_2270 = 0;
	var uLocal_2271 = 0;
	var uLocal_2272 = 0;
	var uLocal_2273 = 0;
	var uLocal_2274 = 0;
	var uLocal_2275 = 0;
	var uLocal_2276 = 0;
	var uLocal_2277 = 0;
	var uLocal_2278 = 0;
	var uLocal_2279 = 0;
	var uLocal_2280 = 0;
	var uLocal_2281 = 0;
	var uLocal_2282 = 0;
	var uLocal_2283 = 0;
	var uLocal_2284 = 0;
	var uLocal_2285 = 0;
	var uLocal_2286 = 0;
	var uLocal_2287 = 0;
	var uLocal_2288 = 0;
	var uLocal_2289 = 0;
	var uLocal_2290 = 0;
	var uLocal_2291 = 0;
	var uLocal_2292 = 0;
	var uLocal_2293 = 0;
	var uLocal_2294 = 0;
	var uLocal_2295 = 0;
	var uLocal_2296 = 0;
	var uLocal_2297 = 0;
	var uLocal_2298 = 0;
	var uLocal_2299 = 0;
	var uLocal_2300 = 0;
	var uLocal_2301 = 0;
	var uLocal_2302 = 0;
	var uLocal_2303 = 0;
	var uLocal_2304 = 0;
	var uLocal_2305 = 0;
	var uLocal_2306 = 0;
	var uLocal_2307 = 0;
	var uLocal_2308 = 0;
	var uLocal_2309 = 0;
	var uLocal_2310 = 0;
	var uLocal_2311 = 0;
	var uLocal_2312 = 0;
	var uLocal_2313 = 0;
	var uLocal_2314 = 0;
	var uLocal_2315 = 0;
	var uLocal_2316 = 0;
	var uLocal_2317 = 0;
	var uLocal_2318 = 0;
	var uLocal_2319 = 0;
	var uLocal_2320 = 0;
	var uLocal_2321 = 0;
	var uLocal_2322 = 0;
	var uLocal_2323 = 0;
	var uLocal_2324 = 0;
	var uLocal_2325 = 0;
	var uLocal_2326 = 0;
	var uLocal_2327 = 0;
	var uLocal_2328 = 0;
	var uLocal_2329 = 0;
	var uLocal_2330 = 0;
	var uLocal_2331 = 0;
	var uLocal_2332 = 0;
	var uLocal_2333 = 0;
	var uLocal_2334 = 0;
	var uLocal_2335 = 0;
	var uLocal_2336 = 0;
	var uLocal_2337 = 0;
	var uLocal_2338 = 0;
	var uLocal_2339 = 0;
	var uLocal_2340 = 0;
	var uLocal_2341 = 0;
	var uLocal_2342 = 0;
	var uLocal_2343 = 0;
	var uLocal_2344 = 0;
	var uLocal_2345 = 0;
	var uLocal_2346 = 0;
	var uLocal_2347 = 0;
	var uLocal_2348 = 0;
	var uLocal_2349 = 0;
	var uLocal_2350 = 0;
	var uLocal_2351 = 0;
	var uLocal_2352 = 0;
	var uLocal_2353 = 0;
	var uLocal_2354 = 0;
	var uLocal_2355 = 0;
	var uLocal_2356 = 0;
	var uLocal_2357 = 0;
	var uLocal_2358 = 0;
	var uLocal_2359 = 0;
	var uLocal_2360 = 0;
	var uLocal_2361 = 0;
	var uLocal_2362 = 0;
	var uLocal_2363 = 0;
	var uLocal_2364 = 0;
	var uLocal_2365 = 0;
	var uLocal_2366 = 0;
	var uLocal_2367 = 0;
	var uLocal_2368 = 0;
	var uLocal_2369 = 0;
	var uLocal_2370 = 0;
	var uLocal_2371 = 0;
	var uLocal_2372 = 0;
	var uLocal_2373 = 0;
	var uLocal_2374 = 0;
	var uLocal_2375 = 0;
	var uLocal_2376 = 0;
	var uLocal_2377 = 0;
	var uLocal_2378 = 0;
	var uLocal_2379 = 0;
	var uLocal_2380 = 0;
	var uLocal_2381 = 0;
	var uLocal_2382 = 0;
	var uLocal_2383 = 0;
	var uLocal_2384 = 0;
	var uLocal_2385 = 0;
	var uLocal_2386 = 0;
	var uLocal_2387 = 0;
	var uLocal_2388 = 0;
	var uLocal_2389 = 0;
	var uLocal_2390 = 0;
	var uLocal_2391 = 0;
	var uLocal_2392 = 0;
	var uLocal_2393 = 0;
	var uLocal_2394 = 0;
	var uLocal_2395 = 0;
	var uLocal_2396 = 0;
	var uLocal_2397 = 0;
	var uLocal_2398 = 0;
	var uLocal_2399 = 0;
	var uLocal_2400 = 0;
	var uLocal_2401 = 0;
	var uLocal_2402 = 0;
	var uLocal_2403 = 0;
	var uLocal_2404 = 0;
	var uLocal_2405 = 0;
	var uLocal_2406 = 0;
	var uLocal_2407 = 0;
	var uLocal_2408 = 0;
	var uLocal_2409 = 0;
	var uLocal_2410 = 0;
	var uLocal_2411 = 0;
	var uLocal_2412 = 0;
	var uLocal_2413 = 0;
	var uLocal_2414 = 0;
	var uLocal_2415 = 0;
	var uLocal_2416 = 0;
	var uLocal_2417 = 0;
	var uLocal_2418 = 0;
	var uLocal_2419 = 0;
	var uLocal_2420 = 0;
	var uLocal_2421 = 0;
	var uLocal_2422 = 0;
	var uLocal_2423 = 0;
	var uLocal_2424 = 0;
	var uLocal_2425 = 0;
	var uLocal_2426 = 0;
	var uLocal_2427 = 0;
	var uLocal_2428 = 0;
	var uLocal_2429 = 0;
	var uLocal_2430 = 0;
	var uLocal_2431 = 0;
	var uLocal_2432 = 0;
	var uLocal_2433 = 0;
	var uLocal_2434 = 0;
	var uLocal_2435 = 0;
	var uLocal_2436 = 0;
	var uLocal_2437 = 0;
	var uLocal_2438 = 0;
	var uLocal_2439 = 0;
	var uLocal_2440 = 0;
	var uLocal_2441 = 0;
	var uLocal_2442 = 0;
	var uLocal_2443 = 0;
	var uLocal_2444 = 0;
	var uLocal_2445 = 0;
	var uLocal_2446 = 0;
	var uLocal_2447 = 0;
	var uLocal_2448 = 0;
	var uLocal_2449 = 0;
	var uLocal_2450 = 0;
	var uLocal_2451 = 0;
	var uLocal_2452 = 0;
	var uLocal_2453 = 0;
	var uLocal_2454 = 0;
	var uLocal_2455 = 0;
	var uLocal_2456 = 0;
	var uLocal_2457 = 20;
	var uLocal_2458 = 0;
	var uLocal_2459 = 0;
	var uLocal_2460 = 0;
	var uLocal_2461 = 0;
	var uLocal_2462 = 0;
	var uLocal_2463 = 0;
	var uLocal_2464 = 0;
	var uLocal_2465 = 0;
	var uLocal_2466 = 0;
	var uLocal_2467 = 0;
	var uLocal_2468 = 0;
	var uLocal_2469 = 0;
	var uLocal_2470 = 0;
	var uLocal_2471 = 0;
	var uLocal_2472 = 0;
	var uLocal_2473 = 0;
	var uLocal_2474 = 0;
	var uLocal_2475 = 0;
	var uLocal_2476 = 0;
	var uLocal_2477 = 0;
	var uLocal_2478 = 0;
	var uLocal_2479 = 0;
	var uLocal_2480 = 0;
	var uLocal_2481 = 0;
	var uLocal_2482 = 0;
	var uLocal_2483 = 0;
	var uLocal_2484 = 0;
	var uLocal_2485 = 0;
	var uLocal_2486 = 0;
	var uLocal_2487 = 0;
	var uLocal_2488 = 0;
	var uLocal_2489 = 0;
	var uLocal_2490 = 0;
	var uLocal_2491 = 0;
	var uLocal_2492 = 0;
	var uLocal_2493 = 0;
	var uLocal_2494 = 0;
	var uLocal_2495 = 0;
	var uLocal_2496 = 0;
	var uLocal_2497 = 0;
	var uLocal_2498 = 0;
	var uLocal_2499 = 0;
	var uLocal_2500 = 0;
	var uLocal_2501 = 0;
	var uLocal_2502 = 0;
	var uLocal_2503 = 0;
	var uLocal_2504 = 0;
	var uLocal_2505 = 0;
	var uLocal_2506 = 0;
	var uLocal_2507 = 0;
	var uLocal_2508 = 0;
	var uLocal_2509 = 0;
	var uLocal_2510 = 0;
	var uLocal_2511 = 0;
	var uLocal_2512 = 0;
	var uLocal_2513 = 0;
	var uLocal_2514 = 0;
	var uLocal_2515 = 0;
	var uLocal_2516 = 0;
	var uLocal_2517 = 0;
	var uLocal_2518 = 14;
	var uLocal_2519 = 0;
	var uLocal_2520 = 0;
	var uLocal_2521 = 0;
	var uLocal_2522 = 0;
	var uLocal_2523 = 0;
	var uLocal_2524 = 0;
	var uLocal_2525 = 0;
	var uLocal_2526 = 0;
	var uLocal_2527 = 0;
	var uLocal_2528 = 0;
	var uLocal_2529 = 0;
	var uLocal_2530 = 0;
	var uLocal_2531 = 0;
	var uLocal_2532 = 0;
	var uLocal_2533 = 0;
	var uLocal_2534 = 0;
	var uLocal_2535 = 0;
	var uLocal_2536 = 0;
	var uLocal_2537 = 0;
	var uLocal_2538 = 0;
	var uLocal_2539 = 0;
	var uLocal_2540 = 0;
	var uLocal_2541 = 0;
	var uLocal_2542 = 0;
	var uLocal_2543 = 0;
	var uLocal_2544 = 0;
	var uLocal_2545 = 0;
	var uLocal_2546 = 0;
	var uLocal_2547 = 0;
	var uLocal_2548 = 0;
	var uLocal_2549 = 0;
	var uLocal_2550 = 0;
	var uLocal_2551 = 0;
	var uLocal_2552 = 0;
	var uLocal_2553 = 0;
	var uLocal_2554 = 0;
	var uLocal_2555 = 0;
	var uLocal_2556 = 0;
	var uLocal_2557 = 0;
	var uLocal_2558 = 0;
	var uLocal_2559 = 0;
	var uLocal_2560 = 0;
	var uLocal_2561 = 0;
	var uLocal_2562 = 0;
	var uLocal_2563 = 60;
	var uLocal_2564 = 0;
	var uLocal_2565 = 0;
	var uLocal_2566 = 0;
	var uLocal_2567 = 0;
	var uLocal_2568 = 20;
	var uLocal_2569 = 0;
	var uLocal_2570 = 0;
	var uLocal_2571 = 0;
	var uLocal_2572 = 0;
	var uLocal_2573 = 0;
	var uLocal_2574 = 0;
	var uLocal_2575 = 0;
	var uLocal_2576 = 0;
	var uLocal_2577 = 0;
	var uLocal_2578 = 0;
	var uLocal_2579 = 0;
	var uLocal_2580 = 0;
	var uLocal_2581 = 0;
	var uLocal_2582 = 0;
	var uLocal_2583 = 0;
	var uLocal_2584 = 0;
	var uLocal_2585 = 0;
	var uLocal_2586 = 0;
	var uLocal_2587 = 0;
	var uLocal_2588 = 0;
	var uLocal_2589 = 0;
	var uLocal_2590 = 0;
	var uLocal_2591 = 0;
	var uLocal_2592 = 0;
	var uLocal_2593 = 0;
	var uLocal_2594 = 0;
	var uLocal_2595 = 0;
	var uLocal_2596 = 0;
	var uLocal_2597 = 0;
	var uLocal_2598 = 0;
	var uLocal_2599 = 0;
	var uLocal_2600 = 0;
	var uLocal_2601 = 0;
	var uLocal_2602 = 0;
	var uLocal_2603 = 0;
	var uLocal_2604 = 0;
	var uLocal_2605 = 0;
	var uLocal_2606 = 0;
	var uLocal_2607 = 0;
	var uLocal_2608 = 0;
	var uLocal_2609 = 0;
	var uLocal_2610 = 0;
	var uLocal_2611 = 0;
	var uLocal_2612 = 0;
	var uLocal_2613 = 0;
	var uLocal_2614 = 0;
	var uLocal_2615 = 0;
	var uLocal_2616 = 0;
	var uLocal_2617 = 0;
	var uLocal_2618 = 0;
	var uLocal_2619 = 0;
	var uLocal_2620 = 0;
	var uLocal_2621 = 0;
	var uLocal_2622 = 0;
	var uLocal_2623 = 0;
	var uLocal_2624 = 0;
	var uLocal_2625 = 0;
	var uLocal_2626 = 0;
	var uLocal_2627 = 0;
	var uLocal_2628 = 0;
	var uLocal_2629 = 0;
	var uLocal_2630 = 0;
	var uLocal_2631 = 0;
	var uLocal_2632 = 0;
	var uLocal_2633 = 0;
	var uLocal_2634 = 0;
	var uLocal_2635 = 20;
	var uLocal_2636 = 0;
	var uLocal_2637 = 0;
	var uLocal_2638 = 0;
	var uLocal_2639 = 0;
	var uLocal_2640 = 0;
	var uLocal_2641 = 0;
	var uLocal_2642 = 0;
	var uLocal_2643 = 0;
	var uLocal_2644 = 0;
	var uLocal_2645 = 0;
	var uLocal_2646 = 0;
	var uLocal_2647 = 0;
	var uLocal_2648 = 0;
	var uLocal_2649 = 0;
	var uLocal_2650 = 0;
	var uLocal_2651 = 0;
	var uLocal_2652 = 0;
	var uLocal_2653 = 0;
	var uLocal_2654 = 0;
	var uLocal_2655 = 0;
	var uLocal_2656 = 0;
	var uLocal_2657 = 0;
	var uLocal_2658 = 0;
	var uLocal_2659 = 0;
	var uLocal_2660 = 0;
	var uLocal_2661 = 0;
	var uLocal_2662 = 0;
	var uLocal_2663 = 0;
	var uLocal_2664 = 0;
	var uLocal_2665 = 0;
	var uLocal_2666 = 0;
	var uLocal_2667 = 0;
	var uLocal_2668 = 0;
	var uLocal_2669 = 0;
	var uLocal_2670 = 0;
	var uLocal_2671 = 0;
	var uLocal_2672 = 0;
	var uLocal_2673 = 0;
	var uLocal_2674 = 0;
	var uLocal_2675 = 0;
	var uLocal_2676 = 0;
	var uLocal_2677 = 0;
	var uLocal_2678 = 0;
	var uLocal_2679 = 0;
	var uLocal_2680 = 0;
	var uLocal_2681 = 0;
	var uLocal_2682 = 0;
	var uLocal_2683 = 0;
	var uLocal_2684 = 0;
	var uLocal_2685 = 0;
	var uLocal_2686 = 0;
	var uLocal_2687 = 0;
	var uLocal_2688 = 0;
	var uLocal_2689 = 0;
	var uLocal_2690 = 0;
	var uLocal_2691 = 0;
	var uLocal_2692 = 0;
	var uLocal_2693 = 0;
	var uLocal_2694 = 0;
	var uLocal_2695 = 0;
	var uLocal_2696 = 0;
	var uLocal_2697 = 0;
	var uLocal_2698 = 0;
	var uLocal_2699 = 0;
	var uLocal_2700 = 0;
	var uLocal_2701 = 0;
	var uLocal_2702 = 20;
	var uLocal_2703 = 0;
	var uLocal_2704 = 0;
	var uLocal_2705 = 0;
	var uLocal_2706 = 0;
	var uLocal_2707 = 0;
	var uLocal_2708 = 0;
	var uLocal_2709 = 0;
	var uLocal_2710 = 0;
	var uLocal_2711 = 0;
	var uLocal_2712 = 0;
	var uLocal_2713 = 0;
	var uLocal_2714 = 0;
	var uLocal_2715 = 0;
	var uLocal_2716 = 0;
	var uLocal_2717 = 0;
	var uLocal_2718 = 0;
	var uLocal_2719 = 0;
	var uLocal_2720 = 0;
	var uLocal_2721 = 0;
	var uLocal_2722 = 0;
	var uLocal_2723 = 0;
	var uLocal_2724 = 0;
	var uLocal_2725 = 0;
	var uLocal_2726 = 0;
	var uLocal_2727 = 0;
	var uLocal_2728 = 0;
	var uLocal_2729 = 0;
	var uLocal_2730 = 0;
	var uLocal_2731 = 0;
	var uLocal_2732 = 0;
	var uLocal_2733 = 0;
	var uLocal_2734 = 0;
	var uLocal_2735 = 0;
	var uLocal_2736 = 0;
	var uLocal_2737 = 0;
	var uLocal_2738 = 0;
	var uLocal_2739 = 0;
	var uLocal_2740 = 0;
	var uLocal_2741 = 0;
	var uLocal_2742 = 0;
	var uLocal_2743 = 0;
	var uLocal_2744 = 0;
	var uLocal_2745 = 0;
	var uLocal_2746 = 0;
	var uLocal_2747 = 0;
	var uLocal_2748 = 0;
	var uLocal_2749 = 0;
	var uLocal_2750 = 0;
	var uLocal_2751 = 0;
	var uLocal_2752 = 0;
	var uLocal_2753 = 0;
	var uLocal_2754 = 0;
	var uLocal_2755 = 0;
	var uLocal_2756 = 0;
	var uLocal_2757 = 0;
	var uLocal_2758 = 0;
	var uLocal_2759 = 0;
	var uLocal_2760 = 0;
	var uLocal_2761 = 0;
	var uLocal_2762 = 0;
	var uLocal_2763 = 0;
	var uLocal_2764 = 0;
	var uLocal_2765 = 0;
	var uLocal_2766 = 0;
	var uLocal_2767 = 0;
	var uLocal_2768 = 0;
	var uLocal_2769 = 20;
	var uLocal_2770 = 0;
	var uLocal_2771 = 0;
	var uLocal_2772 = 0;
	var uLocal_2773 = 0;
	var uLocal_2774 = 0;
	var uLocal_2775 = 0;
	var uLocal_2776 = 0;
	var uLocal_2777 = 0;
	var uLocal_2778 = 0;
	var uLocal_2779 = 0;
	var uLocal_2780 = 0;
	var uLocal_2781 = 0;
	var uLocal_2782 = 0;
	var uLocal_2783 = 0;
	var uLocal_2784 = 0;
	var uLocal_2785 = 0;
	var uLocal_2786 = 0;
	var uLocal_2787 = 0;
	var uLocal_2788 = 0;
	var uLocal_2789 = 0;
	var uLocal_2790 = 0;
	var uLocal_2791 = 0;
	var uLocal_2792 = 0;
	var uLocal_2793 = 0;
	var uLocal_2794 = 0;
	var uLocal_2795 = 0;
	var uLocal_2796 = 0;
	var uLocal_2797 = 0;
	var uLocal_2798 = 0;
	var uLocal_2799 = 0;
	var uLocal_2800 = 0;
	var uLocal_2801 = 0;
	var uLocal_2802 = 0;
	var uLocal_2803 = 0;
	var uLocal_2804 = 0;
	var uLocal_2805 = 0;
	var uLocal_2806 = 0;
	var uLocal_2807 = 0;
	var uLocal_2808 = 0;
	var uLocal_2809 = 0;
	var uLocal_2810 = 0;
	var uLocal_2811 = 0;
	var uLocal_2812 = 0;
	var uLocal_2813 = 0;
	var uLocal_2814 = 0;
	var uLocal_2815 = 0;
	var uLocal_2816 = 0;
	var uLocal_2817 = 0;
	var uLocal_2818 = 0;
	var uLocal_2819 = 0;
	var uLocal_2820 = 0;
	var uLocal_2821 = 0;
	var uLocal_2822 = 0;
	var uLocal_2823 = 0;
	var uLocal_2824 = 0;
	var uLocal_2825 = 0;
	var uLocal_2826 = 0;
	var uLocal_2827 = 0;
	var uLocal_2828 = 0;
	var uLocal_2829 = 0;
	var uLocal_2830 = 0;
	var uLocal_2831 = 0;
	var uLocal_2832 = 0;
	var uLocal_2833 = 0;
	var uLocal_2834 = 0;
	var uLocal_2835 = 0;
	var uLocal_2836 = 20;
	var uLocal_2837 = 0;
	var uLocal_2838 = 0;
	var uLocal_2839 = 0;
	var uLocal_2840 = 0;
	var uLocal_2841 = 0;
	var uLocal_2842 = 0;
	var uLocal_2843 = 0;
	var uLocal_2844 = 0;
	var uLocal_2845 = 0;
	var uLocal_2846 = 0;
	var uLocal_2847 = 0;
	var uLocal_2848 = 0;
	var uLocal_2849 = 0;
	var uLocal_2850 = 0;
	var uLocal_2851 = 0;
	var uLocal_2852 = 0;
	var uLocal_2853 = 0;
	var uLocal_2854 = 0;
	var uLocal_2855 = 0;
	var uLocal_2856 = 0;
	var uLocal_2857 = 0;
	var uLocal_2858 = 0;
	var uLocal_2859 = 0;
	var uLocal_2860 = 0;
	var uLocal_2861 = 0;
	var uLocal_2862 = 0;
	var uLocal_2863 = 0;
	var uLocal_2864 = 0;
	var uLocal_2865 = 0;
	var uLocal_2866 = 0;
	var uLocal_2867 = 0;
	var uLocal_2868 = 0;
	var uLocal_2869 = 0;
	var uLocal_2870 = 0;
	var uLocal_2871 = 0;
	var uLocal_2872 = 0;
	var uLocal_2873 = 0;
	var uLocal_2874 = 0;
	var uLocal_2875 = 0;
	var uLocal_2876 = 0;
	var uLocal_2877 = 0;
	var uLocal_2878 = 0;
	var uLocal_2879 = 0;
	var uLocal_2880 = 0;
	var uLocal_2881 = 0;
	var uLocal_2882 = 0;
	var uLocal_2883 = 0;
	var uLocal_2884 = 0;
	var uLocal_2885 = 0;
	var uLocal_2886 = 0;
	var uLocal_2887 = 0;
	var uLocal_2888 = 0;
	var uLocal_2889 = 0;
	var uLocal_2890 = 0;
	var uLocal_2891 = 0;
	var uLocal_2892 = 0;
	var uLocal_2893 = 0;
	var uLocal_2894 = 0;
	var uLocal_2895 = 0;
	var uLocal_2896 = 0;
	var uLocal_2897 = 0;
	var uLocal_2898 = 0;
	var uLocal_2899 = 0;
	var uLocal_2900 = 0;
	var uLocal_2901 = 0;
	var uLocal_2902 = 0;
	var uLocal_2903 = 20;
	var uLocal_2904 = 0;
	var uLocal_2905 = 0;
	var uLocal_2906 = 0;
	var uLocal_2907 = 0;
	var uLocal_2908 = 0;
	var uLocal_2909 = 0;
	var uLocal_2910 = 0;
	var uLocal_2911 = 0;
	var uLocal_2912 = 0;
	var uLocal_2913 = 0;
	var uLocal_2914 = 0;
	var uLocal_2915 = 0;
	var uLocal_2916 = 0;
	var uLocal_2917 = 0;
	var uLocal_2918 = 0;
	var uLocal_2919 = 0;
	var uLocal_2920 = 0;
	var uLocal_2921 = 0;
	var uLocal_2922 = 0;
	var uLocal_2923 = 0;
	var uLocal_2924 = 0;
	var uLocal_2925 = 0;
	var uLocal_2926 = 0;
	var uLocal_2927 = 0;
	var uLocal_2928 = 0;
	var uLocal_2929 = 0;
	var uLocal_2930 = 0;
	var uLocal_2931 = 0;
	var uLocal_2932 = 0;
	var uLocal_2933 = 0;
	var uLocal_2934 = 0;
	var uLocal_2935 = 0;
	var uLocal_2936 = 0;
	var uLocal_2937 = 0;
	var uLocal_2938 = 0;
	var uLocal_2939 = 0;
	var uLocal_2940 = 0;
	var uLocal_2941 = 0;
	var uLocal_2942 = 0;
	var uLocal_2943 = 0;
	var uLocal_2944 = 0;
	var uLocal_2945 = 0;
	var uLocal_2946 = 0;
	var uLocal_2947 = 0;
	var uLocal_2948 = 0;
	var uLocal_2949 = 0;
	var uLocal_2950 = 0;
	var uLocal_2951 = 0;
	var uLocal_2952 = 0;
	var uLocal_2953 = 0;
	var uLocal_2954 = 0;
	var uLocal_2955 = 0;
	var uLocal_2956 = 0;
	var uLocal_2957 = 0;
	var uLocal_2958 = 0;
	var uLocal_2959 = 0;
	var uLocal_2960 = 0;
	var uLocal_2961 = 0;
	var uLocal_2962 = 0;
	var uLocal_2963 = 0;
	var uLocal_2964 = 0;
	var uLocal_2965 = 0;
	var uLocal_2966 = 0;
	var uLocal_2967 = 0;
	var uLocal_2968 = 0;
	var uLocal_2969 = 0;
	var uLocal_2970 = 20;
	var uLocal_2971 = 0;
	var uLocal_2972 = 0;
	var uLocal_2973 = 0;
	var uLocal_2974 = 0;
	var uLocal_2975 = 0;
	var uLocal_2976 = 0;
	var uLocal_2977 = 0;
	var uLocal_2978 = 0;
	var uLocal_2979 = 0;
	var uLocal_2980 = 0;
	var uLocal_2981 = 0;
	var uLocal_2982 = 0;
	var uLocal_2983 = 0;
	var uLocal_2984 = 0;
	var uLocal_2985 = 0;
	var uLocal_2986 = 0;
	var uLocal_2987 = 0;
	var uLocal_2988 = 0;
	var uLocal_2989 = 0;
	var uLocal_2990 = 0;
	var uLocal_2991 = 0;
	var uLocal_2992 = 0;
	var uLocal_2993 = 0;
	var uLocal_2994 = 0;
	var uLocal_2995 = 0;
	var uLocal_2996 = 0;
	var uLocal_2997 = 0;
	var uLocal_2998 = 0;
	var uLocal_2999 = 0;
	var uLocal_3000 = 0;
	var uLocal_3001 = 0;
	var uLocal_3002 = 0;
	var uLocal_3003 = 0;
	var uLocal_3004 = 0;
	var uLocal_3005 = 0;
	var uLocal_3006 = 0;
	var uLocal_3007 = 0;
	var uLocal_3008 = 0;
	var uLocal_3009 = 0;
	var uLocal_3010 = 0;
	var uLocal_3011 = 0;
	var uLocal_3012 = 0;
	var uLocal_3013 = 0;
	var uLocal_3014 = 0;
	var uLocal_3015 = 0;
	var uLocal_3016 = 0;
	var uLocal_3017 = 0;
	var uLocal_3018 = 0;
	var uLocal_3019 = 0;
	var uLocal_3020 = 0;
	var uLocal_3021 = 0;
	var uLocal_3022 = 0;
	var uLocal_3023 = 0;
	var uLocal_3024 = 0;
	var uLocal_3025 = 0;
	var uLocal_3026 = 0;
	var uLocal_3027 = 0;
	var uLocal_3028 = 0;
	var uLocal_3029 = 0;
	var uLocal_3030 = 0;
	var uLocal_3031 = 0;
	var uLocal_3032 = 0;
	var uLocal_3033 = 0;
	var uLocal_3034 = 0;
	var uLocal_3035 = 0;
	var uLocal_3036 = 0;
	var uLocal_3037 = 20;
	var uLocal_3038 = 0;
	var uLocal_3039 = 0;
	var uLocal_3040 = 0;
	var uLocal_3041 = 0;
	var uLocal_3042 = 0;
	var uLocal_3043 = 0;
	var uLocal_3044 = 0;
	var uLocal_3045 = 0;
	var uLocal_3046 = 0;
	var uLocal_3047 = 0;
	var uLocal_3048 = 0;
	var uLocal_3049 = 0;
	var uLocal_3050 = 0;
	var uLocal_3051 = 0;
	var uLocal_3052 = 0;
	var uLocal_3053 = 0;
	var uLocal_3054 = 0;
	var uLocal_3055 = 0;
	var uLocal_3056 = 0;
	var uLocal_3057 = 0;
	var uLocal_3058 = 0;
	var uLocal_3059 = 0;
	var uLocal_3060 = 0;
	var uLocal_3061 = 0;
	var uLocal_3062 = 0;
	var uLocal_3063 = 0;
	var uLocal_3064 = 0;
	var uLocal_3065 = 0;
	var uLocal_3066 = 0;
	var uLocal_3067 = 0;
	var uLocal_3068 = 0;
	var uLocal_3069 = 0;
	var uLocal_3070 = 0;
	var uLocal_3071 = 0;
	var uLocal_3072 = 0;
	var uLocal_3073 = 0;
	var uLocal_3074 = 0;
	var uLocal_3075 = 0;
	var uLocal_3076 = 0;
	var uLocal_3077 = 0;
	var uLocal_3078 = 0;
	var uLocal_3079 = 0;
	var uLocal_3080 = 0;
	var uLocal_3081 = 0;
	var uLocal_3082 = 0;
	var uLocal_3083 = 0;
	var uLocal_3084 = 0;
	var uLocal_3085 = 0;
	var uLocal_3086 = 0;
	var uLocal_3087 = 0;
	var uLocal_3088 = 0;
	var uLocal_3089 = 0;
	var uLocal_3090 = 0;
	var uLocal_3091 = 0;
	var uLocal_3092 = 0;
	var uLocal_3093 = 0;
	var uLocal_3094 = 0;
	var uLocal_3095 = 0;
	var uLocal_3096 = 0;
	var uLocal_3097 = 0;
	var uLocal_3098 = 0;
	var uLocal_3099 = 0;
	var uLocal_3100 = 0;
	var uLocal_3101 = 0;
	var uLocal_3102 = 0;
	var uLocal_3103 = 0;
	var uLocal_3104 = 20;
	var uLocal_3105 = 0;
	var uLocal_3106 = 0;
	var uLocal_3107 = 0;
	var uLocal_3108 = 0;
	var uLocal_3109 = 0;
	var uLocal_3110 = 0;
	var uLocal_3111 = 0;
	var uLocal_3112 = 0;
	var uLocal_3113 = 0;
	var uLocal_3114 = 0;
	var uLocal_3115 = 0;
	var uLocal_3116 = 0;
	var uLocal_3117 = 0;
	var uLocal_3118 = 0;
	var uLocal_3119 = 0;
	var uLocal_3120 = 0;
	var uLocal_3121 = 0;
	var uLocal_3122 = 0;
	var uLocal_3123 = 0;
	var uLocal_3124 = 0;
	var uLocal_3125 = 0;
	var uLocal_3126 = 0;
	var uLocal_3127 = 0;
	var uLocal_3128 = 0;
	var uLocal_3129 = 0;
	var uLocal_3130 = 0;
	var uLocal_3131 = 0;
	var uLocal_3132 = 0;
	var uLocal_3133 = 0;
	var uLocal_3134 = 0;
	var uLocal_3135 = 0;
	var uLocal_3136 = 0;
	var uLocal_3137 = 0;
	var uLocal_3138 = 0;
	var uLocal_3139 = 0;
	var uLocal_3140 = 0;
	var uLocal_3141 = 0;
	var uLocal_3142 = 0;
	var uLocal_3143 = 0;
	var uLocal_3144 = 0;
	var uLocal_3145 = 0;
	var uLocal_3146 = 0;
	var uLocal_3147 = 0;
	var uLocal_3148 = 0;
	var uLocal_3149 = 0;
	var uLocal_3150 = 0;
	var uLocal_3151 = 0;
	var uLocal_3152 = 0;
	var uLocal_3153 = 0;
	var uLocal_3154 = 0;
	var uLocal_3155 = 0;
	var uLocal_3156 = 0;
	var uLocal_3157 = 0;
	var uLocal_3158 = 0;
	var uLocal_3159 = 0;
	var uLocal_3160 = 0;
	var uLocal_3161 = 0;
	var uLocal_3162 = 0;
	var uLocal_3163 = 0;
	var uLocal_3164 = 0;
	var uLocal_3165 = 0;
	var uLocal_3166 = 0;
	var uLocal_3167 = 0;
	var uLocal_3168 = 0;
	var uLocal_3169 = 0;
	var uLocal_3170 = 0;
	var uLocal_3171 = 20;
	var uLocal_3172 = 0;
	var uLocal_3173 = 0;
	var uLocal_3174 = 0;
	var uLocal_3175 = 0;
	var uLocal_3176 = 0;
	var uLocal_3177 = 0;
	var uLocal_3178 = 0;
	var uLocal_3179 = 0;
	var uLocal_3180 = 0;
	var uLocal_3181 = 0;
	var uLocal_3182 = 0;
	var uLocal_3183 = 0;
	var uLocal_3184 = 0;
	var uLocal_3185 = 0;
	var uLocal_3186 = 0;
	var uLocal_3187 = 0;
	var uLocal_3188 = 0;
	var uLocal_3189 = 0;
	var uLocal_3190 = 0;
	var uLocal_3191 = 0;
	var uLocal_3192 = 0;
	var uLocal_3193 = 0;
	var uLocal_3194 = 0;
	var uLocal_3195 = 0;
	var uLocal_3196 = 0;
	var uLocal_3197 = 0;
	var uLocal_3198 = 0;
	var uLocal_3199 = 0;
	var uLocal_3200 = 0;
	var uLocal_3201 = 0;
	var uLocal_3202 = 0;
	var uLocal_3203 = 0;
	var uLocal_3204 = 0;
	var uLocal_3205 = 0;
	var uLocal_3206 = 0;
	var uLocal_3207 = 0;
	var uLocal_3208 = 0;
	var uLocal_3209 = 0;
	var uLocal_3210 = 0;
	var uLocal_3211 = 0;
	var uLocal_3212 = 0;
	var uLocal_3213 = 0;
	var uLocal_3214 = 0;
	var uLocal_3215 = 0;
	var uLocal_3216 = 0;
	var uLocal_3217 = 0;
	var uLocal_3218 = 0;
	var uLocal_3219 = 0;
	var uLocal_3220 = 0;
	var uLocal_3221 = 0;
	var uLocal_3222 = 0;
	var uLocal_3223 = 0;
	var uLocal_3224 = 0;
	var uLocal_3225 = 0;
	var uLocal_3226 = 0;
	var uLocal_3227 = 0;
	var uLocal_3228 = 0;
	var uLocal_3229 = 0;
	var uLocal_3230 = 0;
	var uLocal_3231 = 0;
	var uLocal_3232 = 0;
	var uLocal_3233 = 0;
	var uLocal_3234 = 0;
	var uLocal_3235 = 0;
	var uLocal_3236 = 0;
	var uLocal_3237 = 0;
	var uLocal_3238 = 20;
	var uLocal_3239 = 0;
	var uLocal_3240 = 0;
	var uLocal_3241 = 0;
	var uLocal_3242 = 0;
	var uLocal_3243 = 0;
	var uLocal_3244 = 0;
	var uLocal_3245 = 0;
	var uLocal_3246 = 0;
	var uLocal_3247 = 0;
	var uLocal_3248 = 0;
	var uLocal_3249 = 0;
	var uLocal_3250 = 0;
	var uLocal_3251 = 0;
	var uLocal_3252 = 0;
	var uLocal_3253 = 0;
	var uLocal_3254 = 0;
	var uLocal_3255 = 0;
	var uLocal_3256 = 0;
	var uLocal_3257 = 0;
	var uLocal_3258 = 0;
	var uLocal_3259 = 0;
	var uLocal_3260 = 0;
	var uLocal_3261 = 0;
	var uLocal_3262 = 0;
	var uLocal_3263 = 0;
	var uLocal_3264 = 0;
	var uLocal_3265 = 0;
	var uLocal_3266 = 0;
	var uLocal_3267 = 0;
	var uLocal_3268 = 0;
	var uLocal_3269 = 0;
	var uLocal_3270 = 0;
	var uLocal_3271 = 0;
	var uLocal_3272 = 0;
	var uLocal_3273 = 0;
	var uLocal_3274 = 0;
	var uLocal_3275 = 0;
	var uLocal_3276 = 0;
	var uLocal_3277 = 0;
	var uLocal_3278 = 0;
	var uLocal_3279 = 0;
	var uLocal_3280 = 0;
	var uLocal_3281 = 0;
	var uLocal_3282 = 0;
	var uLocal_3283 = 0;
	var uLocal_3284 = 0;
	var uLocal_3285 = 0;
	var uLocal_3286 = 0;
	var uLocal_3287 = 0;
	var uLocal_3288 = 0;
	var uLocal_3289 = 0;
	var uLocal_3290 = 0;
	var uLocal_3291 = 0;
	var uLocal_3292 = 0;
	var uLocal_3293 = 0;
	var uLocal_3294 = 0;
	var uLocal_3295 = 0;
	var uLocal_3296 = 0;
	var uLocal_3297 = 0;
	var uLocal_3298 = 0;
	var uLocal_3299 = 0;
	var uLocal_3300 = 0;
	var uLocal_3301 = 0;
	var uLocal_3302 = 0;
	var uLocal_3303 = 0;
	var uLocal_3304 = 0;
	var uLocal_3305 = 20;
	var uLocal_3306 = 0;
	var uLocal_3307 = 0;
	var uLocal_3308 = 0;
	var uLocal_3309 = 0;
	var uLocal_3310 = 0;
	var uLocal_3311 = 0;
	var uLocal_3312 = 0;
	var uLocal_3313 = 0;
	var uLocal_3314 = 0;
	var uLocal_3315 = 0;
	var uLocal_3316 = 0;
	var uLocal_3317 = 0;
	var uLocal_3318 = 0;
	var uLocal_3319 = 0;
	var uLocal_3320 = 0;
	var uLocal_3321 = 0;
	var uLocal_3322 = 0;
	var uLocal_3323 = 0;
	var uLocal_3324 = 0;
	var uLocal_3325 = 0;
	var uLocal_3326 = 0;
	var uLocal_3327 = 0;
	var uLocal_3328 = 0;
	var uLocal_3329 = 0;
	var uLocal_3330 = 0;
	var uLocal_3331 = 0;
	var uLocal_3332 = 0;
	var uLocal_3333 = 0;
	var uLocal_3334 = 0;
	var uLocal_3335 = 0;
	var uLocal_3336 = 0;
	var uLocal_3337 = 0;
	var uLocal_3338 = 0;
	var uLocal_3339 = 0;
	var uLocal_3340 = 0;
	var uLocal_3341 = 0;
	var uLocal_3342 = 0;
	var uLocal_3343 = 0;
	var uLocal_3344 = 0;
	var uLocal_3345 = 0;
	var uLocal_3346 = 0;
	var uLocal_3347 = 0;
	var uLocal_3348 = 0;
	var uLocal_3349 = 0;
	var uLocal_3350 = 0;
	var uLocal_3351 = 0;
	var uLocal_3352 = 0;
	var uLocal_3353 = 0;
	var uLocal_3354 = 0;
	var uLocal_3355 = 0;
	var uLocal_3356 = 0;
	var uLocal_3357 = 0;
	var uLocal_3358 = 0;
	var uLocal_3359 = 0;
	var uLocal_3360 = 0;
	var uLocal_3361 = 0;
	var uLocal_3362 = 0;
	var uLocal_3363 = 0;
	var uLocal_3364 = 0;
	var uLocal_3365 = 0;
	var uLocal_3366 = 0;
	var uLocal_3367 = 0;
	var uLocal_3368 = 0;
	var uLocal_3369 = 0;
	var uLocal_3370 = 0;
	var uLocal_3371 = 0;
	var uLocal_3372 = 20;
	var uLocal_3373 = 0;
	var uLocal_3374 = 0;
	var uLocal_3375 = 0;
	var uLocal_3376 = 0;
	var uLocal_3377 = 0;
	var uLocal_3378 = 0;
	var uLocal_3379 = 0;
	var uLocal_3380 = 0;
	var uLocal_3381 = 0;
	var uLocal_3382 = 0;
	var uLocal_3383 = 0;
	var uLocal_3384 = 0;
	var uLocal_3385 = 0;
	var uLocal_3386 = 0;
	var uLocal_3387 = 0;
	var uLocal_3388 = 0;
	var uLocal_3389 = 0;
	var uLocal_3390 = 0;
	var uLocal_3391 = 0;
	var uLocal_3392 = 0;
	var uLocal_3393 = 0;
	var uLocal_3394 = 0;
	var uLocal_3395 = 0;
	var uLocal_3396 = 0;
	var uLocal_3397 = 0;
	var uLocal_3398 = 0;
	var uLocal_3399 = 0;
	var uLocal_3400 = 0;
	var uLocal_3401 = 0;
	var uLocal_3402 = 0;
	var uLocal_3403 = 0;
	var uLocal_3404 = 0;
	var uLocal_3405 = 0;
	var uLocal_3406 = 0;
	var uLocal_3407 = 0;
	var uLocal_3408 = 0;
	var uLocal_3409 = 0;
	var uLocal_3410 = 0;
	var uLocal_3411 = 0;
	var uLocal_3412 = 0;
	var uLocal_3413 = 0;
	var uLocal_3414 = 0;
	var uLocal_3415 = 0;
	var uLocal_3416 = 0;
	var uLocal_3417 = 0;
	var uLocal_3418 = 0;
	var uLocal_3419 = 0;
	var uLocal_3420 = 0;
	var uLocal_3421 = 0;
	var uLocal_3422 = 0;
	var uLocal_3423 = 0;
	var uLocal_3424 = 0;
	var uLocal_3425 = 0;
	var uLocal_3426 = 0;
	var uLocal_3427 = 0;
	var uLocal_3428 = 0;
	var uLocal_3429 = 0;
	var uLocal_3430 = 0;
	var uLocal_3431 = 0;
	var uLocal_3432 = 0;
	var uLocal_3433 = 0;
	var uLocal_3434 = 0;
	var uLocal_3435 = 0;
	var uLocal_3436 = 0;
	var uLocal_3437 = 0;
	var uLocal_3438 = 0;
	var uLocal_3439 = 20;
	var uLocal_3440 = 0;
	var uLocal_3441 = 0;
	var uLocal_3442 = 0;
	var uLocal_3443 = 0;
	var uLocal_3444 = 0;
	var uLocal_3445 = 0;
	var uLocal_3446 = 0;
	var uLocal_3447 = 0;
	var uLocal_3448 = 0;
	var uLocal_3449 = 0;
	var uLocal_3450 = 0;
	var uLocal_3451 = 0;
	var uLocal_3452 = 0;
	var uLocal_3453 = 0;
	var uLocal_3454 = 0;
	var uLocal_3455 = 0;
	var uLocal_3456 = 0;
	var uLocal_3457 = 0;
	var uLocal_3458 = 0;
	var uLocal_3459 = 0;
	var uLocal_3460 = 0;
	var uLocal_3461 = 0;
	var uLocal_3462 = 0;
	var uLocal_3463 = 0;
	var uLocal_3464 = 0;
	var uLocal_3465 = 0;
	var uLocal_3466 = 0;
	var uLocal_3467 = 0;
	var uLocal_3468 = 0;
	var uLocal_3469 = 0;
	var uLocal_3470 = 0;
	var uLocal_3471 = 0;
	var uLocal_3472 = 0;
	var uLocal_3473 = 0;
	var uLocal_3474 = 0;
	var uLocal_3475 = 0;
	var uLocal_3476 = 0;
	var uLocal_3477 = 0;
	var uLocal_3478 = 0;
	var uLocal_3479 = 0;
	var uLocal_3480 = 0;
	var uLocal_3481 = 0;
	var uLocal_3482 = 0;
	var uLocal_3483 = 0;
	var uLocal_3484 = 0;
	var uLocal_3485 = 0;
	var uLocal_3486 = 0;
	var uLocal_3487 = 0;
	var uLocal_3488 = 0;
	var uLocal_3489 = 0;
	var uLocal_3490 = 0;
	var uLocal_3491 = 0;
	var uLocal_3492 = 0;
	var uLocal_3493 = 0;
	var uLocal_3494 = 0;
	var uLocal_3495 = 0;
	var uLocal_3496 = 0;
	var uLocal_3497 = 0;
	var uLocal_3498 = 0;
	var uLocal_3499 = 0;
	var uLocal_3500 = 0;
	var uLocal_3501 = 0;
	var uLocal_3502 = 0;
	var uLocal_3503 = 0;
	var uLocal_3504 = 0;
	var uLocal_3505 = 0;
	var uLocal_3506 = 20;
	var uLocal_3507 = 0;
	var uLocal_3508 = 0;
	var uLocal_3509 = 0;
	var uLocal_3510 = 0;
	var uLocal_3511 = 0;
	var uLocal_3512 = 0;
	var uLocal_3513 = 0;
	var uLocal_3514 = 0;
	var uLocal_3515 = 0;
	var uLocal_3516 = 0;
	var uLocal_3517 = 0;
	var uLocal_3518 = 0;
	var uLocal_3519 = 0;
	var uLocal_3520 = 0;
	var uLocal_3521 = 0;
	var uLocal_3522 = 0;
	var uLocal_3523 = 0;
	var uLocal_3524 = 0;
	var uLocal_3525 = 0;
	var uLocal_3526 = 0;
	var uLocal_3527 = 0;
	var uLocal_3528 = 0;
	var uLocal_3529 = 0;
	var uLocal_3530 = 0;
	var uLocal_3531 = 0;
	var uLocal_3532 = 0;
	var uLocal_3533 = 0;
	var uLocal_3534 = 0;
	var uLocal_3535 = 0;
	var uLocal_3536 = 0;
	var uLocal_3537 = 0;
	var uLocal_3538 = 0;
	var uLocal_3539 = 0;
	var uLocal_3540 = 0;
	var uLocal_3541 = 0;
	var uLocal_3542 = 0;
	var uLocal_3543 = 0;
	var uLocal_3544 = 0;
	var uLocal_3545 = 0;
	var uLocal_3546 = 0;
	var uLocal_3547 = 0;
	var uLocal_3548 = 0;
	var uLocal_3549 = 0;
	var uLocal_3550 = 0;
	var uLocal_3551 = 0;
	var uLocal_3552 = 0;
	var uLocal_3553 = 0;
	var uLocal_3554 = 0;
	var uLocal_3555 = 0;
	var uLocal_3556 = 0;
	var uLocal_3557 = 0;
	var uLocal_3558 = 0;
	var uLocal_3559 = 0;
	var uLocal_3560 = 0;
	var uLocal_3561 = 0;
	var uLocal_3562 = 0;
	var uLocal_3563 = 0;
	var uLocal_3564 = 0;
	var uLocal_3565 = 0;
	var uLocal_3566 = 0;
	var uLocal_3567 = 0;
	var uLocal_3568 = 0;
	var uLocal_3569 = 0;
	var uLocal_3570 = 0;
	var uLocal_3571 = 0;
	var uLocal_3572 = 0;
	var uLocal_3573 = 20;
	var uLocal_3574 = 0;
	var uLocal_3575 = 0;
	var uLocal_3576 = 0;
	var uLocal_3577 = 0;
	var uLocal_3578 = 0;
	var uLocal_3579 = 0;
	var uLocal_3580 = 0;
	var uLocal_3581 = 0;
	var uLocal_3582 = 0;
	var uLocal_3583 = 0;
	var uLocal_3584 = 0;
	var uLocal_3585 = 0;
	var uLocal_3586 = 0;
	var uLocal_3587 = 0;
	var uLocal_3588 = 0;
	var uLocal_3589 = 0;
	var uLocal_3590 = 0;
	var uLocal_3591 = 0;
	var uLocal_3592 = 0;
	var uLocal_3593 = 0;
	var uLocal_3594 = 0;
	var uLocal_3595 = 0;
	var uLocal_3596 = 0;
	var uLocal_3597 = 0;
	var uLocal_3598 = 0;
	var uLocal_3599 = 0;
	var uLocal_3600 = 0;
	var uLocal_3601 = 0;
	var uLocal_3602 = 0;
	var uLocal_3603 = 0;
	var uLocal_3604 = 0;
	var uLocal_3605 = 0;
	var uLocal_3606 = 0;
	var uLocal_3607 = 0;
	var uLocal_3608 = 0;
	var uLocal_3609 = 0;
	var uLocal_3610 = 0;
	var uLocal_3611 = 0;
	var uLocal_3612 = 0;
	var uLocal_3613 = 0;
	var uLocal_3614 = 0;
	var uLocal_3615 = 0;
	var uLocal_3616 = 0;
	var uLocal_3617 = 0;
	var uLocal_3618 = 0;
	var uLocal_3619 = 0;
	var uLocal_3620 = 0;
	var uLocal_3621 = 0;
	var uLocal_3622 = 0;
	var uLocal_3623 = 0;
	var uLocal_3624 = 0;
	var uLocal_3625 = 0;
	var uLocal_3626 = 0;
	var uLocal_3627 = 0;
	var uLocal_3628 = 0;
	var uLocal_3629 = 0;
	var uLocal_3630 = 0;
	var uLocal_3631 = 0;
	var uLocal_3632 = 0;
	var uLocal_3633 = 0;
	var uLocal_3634 = 0;
	var uLocal_3635 = 0;
	var uLocal_3636 = 0;
	var uLocal_3637 = 0;
	var uLocal_3638 = 0;
	var uLocal_3639 = 0;
	var uLocal_3640 = 20;
	var uLocal_3641 = 0;
	var uLocal_3642 = 0;
	var uLocal_3643 = 0;
	var uLocal_3644 = 0;
	var uLocal_3645 = 0;
	var uLocal_3646 = 0;
	var uLocal_3647 = 0;
	var uLocal_3648 = 0;
	var uLocal_3649 = 0;
	var uLocal_3650 = 0;
	var uLocal_3651 = 0;
	var uLocal_3652 = 0;
	var uLocal_3653 = 0;
	var uLocal_3654 = 0;
	var uLocal_3655 = 0;
	var uLocal_3656 = 0;
	var uLocal_3657 = 0;
	var uLocal_3658 = 0;
	var uLocal_3659 = 0;
	var uLocal_3660 = 0;
	var uLocal_3661 = 0;
	var uLocal_3662 = 0;
	var uLocal_3663 = 0;
	var uLocal_3664 = 0;
	var uLocal_3665 = 0;
	var uLocal_3666 = 0;
	var uLocal_3667 = 0;
	var uLocal_3668 = 0;
	var uLocal_3669 = 0;
	var uLocal_3670 = 0;
	var uLocal_3671 = 0;
	var uLocal_3672 = 0;
	var uLocal_3673 = 0;
	var uLocal_3674 = 0;
	var uLocal_3675 = 0;
	var uLocal_3676 = 0;
	var uLocal_3677 = 0;
	var uLocal_3678 = 0;
	var uLocal_3679 = 0;
	var uLocal_3680 = 0;
	var uLocal_3681 = 0;
	var uLocal_3682 = 0;
	var uLocal_3683 = 0;
	var uLocal_3684 = 0;
	var uLocal_3685 = 0;
	var uLocal_3686 = 0;
	var uLocal_3687 = 0;
	var uLocal_3688 = 0;
	var uLocal_3689 = 0;
	var uLocal_3690 = 0;
	var uLocal_3691 = 0;
	var uLocal_3692 = 0;
	var uLocal_3693 = 0;
	var uLocal_3694 = 0;
	var uLocal_3695 = 0;
	var uLocal_3696 = 0;
	var uLocal_3697 = 0;
	var uLocal_3698 = 0;
	var uLocal_3699 = 0;
	var uLocal_3700 = 0;
	var uLocal_3701 = 0;
	var uLocal_3702 = 0;
	var uLocal_3703 = 0;
	var uLocal_3704 = 0;
	var uLocal_3705 = 0;
	var uLocal_3706 = 0;
	var uLocal_3707 = 20;
	var uLocal_3708 = 0;
	var uLocal_3709 = 0;
	var uLocal_3710 = 0;
	var uLocal_3711 = 0;
	var uLocal_3712 = 0;
	var uLocal_3713 = 0;
	var uLocal_3714 = 0;
	var uLocal_3715 = 0;
	var uLocal_3716 = 0;
	var uLocal_3717 = 0;
	var uLocal_3718 = 0;
	var uLocal_3719 = 0;
	var uLocal_3720 = 0;
	var uLocal_3721 = 0;
	var uLocal_3722 = 0;
	var uLocal_3723 = 0;
	var uLocal_3724 = 0;
	var uLocal_3725 = 0;
	var uLocal_3726 = 0;
	var uLocal_3727 = 0;
	var uLocal_3728 = 0;
	var uLocal_3729 = 0;
	var uLocal_3730 = 0;
	var uLocal_3731 = 0;
	var uLocal_3732 = 0;
	var uLocal_3733 = 0;
	var uLocal_3734 = 0;
	var uLocal_3735 = 0;
	var uLocal_3736 = 0;
	var uLocal_3737 = 0;
	var uLocal_3738 = 0;
	var uLocal_3739 = 0;
	var uLocal_3740 = 0;
	var uLocal_3741 = 0;
	var uLocal_3742 = 0;
	var uLocal_3743 = 0;
	var uLocal_3744 = 0;
	var uLocal_3745 = 0;
	var uLocal_3746 = 0;
	var uLocal_3747 = 0;
	var uLocal_3748 = 0;
	var uLocal_3749 = 0;
	var uLocal_3750 = 0;
	var uLocal_3751 = 0;
	var uLocal_3752 = 0;
	var uLocal_3753 = 0;
	var uLocal_3754 = 0;
	var uLocal_3755 = 0;
	var uLocal_3756 = 0;
	var uLocal_3757 = 0;
	var uLocal_3758 = 0;
	var uLocal_3759 = 0;
	var uLocal_3760 = 0;
	var uLocal_3761 = 0;
	var uLocal_3762 = 0;
	var uLocal_3763 = 0;
	var uLocal_3764 = 0;
	var uLocal_3765 = 0;
	var uLocal_3766 = 0;
	var uLocal_3767 = 0;
	var uLocal_3768 = 0;
	var uLocal_3769 = 0;
	var uLocal_3770 = 0;
	var uLocal_3771 = 0;
	var uLocal_3772 = 0;
	var uLocal_3773 = 0;
	var uLocal_3774 = 20;
	var uLocal_3775 = 0;
	var uLocal_3776 = 0;
	var uLocal_3777 = 0;
	var uLocal_3778 = 0;
	var uLocal_3779 = 0;
	var uLocal_3780 = 0;
	var uLocal_3781 = 0;
	var uLocal_3782 = 0;
	var uLocal_3783 = 0;
	var uLocal_3784 = 0;
	var uLocal_3785 = 0;
	var uLocal_3786 = 0;
	var uLocal_3787 = 0;
	var uLocal_3788 = 0;
	var uLocal_3789 = 0;
	var uLocal_3790 = 0;
	var uLocal_3791 = 0;
	var uLocal_3792 = 0;
	var uLocal_3793 = 0;
	var uLocal_3794 = 0;
	var uLocal_3795 = 0;
	var uLocal_3796 = 0;
	var uLocal_3797 = 0;
	var uLocal_3798 = 0;
	var uLocal_3799 = 0;
	var uLocal_3800 = 0;
	var uLocal_3801 = 0;
	var uLocal_3802 = 0;
	var uLocal_3803 = 0;
	var uLocal_3804 = 0;
	var uLocal_3805 = 0;
	var uLocal_3806 = 0;
	var uLocal_3807 = 0;
	var uLocal_3808 = 0;
	var uLocal_3809 = 0;
	var uLocal_3810 = 0;
	var uLocal_3811 = 0;
	var uLocal_3812 = 0;
	var uLocal_3813 = 0;
	var uLocal_3814 = 0;
	var uLocal_3815 = 0;
	var uLocal_3816 = 0;
	var uLocal_3817 = 0;
	var uLocal_3818 = 0;
	var uLocal_3819 = 0;
	var uLocal_3820 = 0;
	var uLocal_3821 = 0;
	var uLocal_3822 = 0;
	var uLocal_3823 = 0;
	var uLocal_3824 = 0;
	var uLocal_3825 = 0;
	var uLocal_3826 = 0;
	var uLocal_3827 = 0;
	var uLocal_3828 = 0;
	var uLocal_3829 = 0;
	var uLocal_3830 = 0;
	var uLocal_3831 = 0;
	var uLocal_3832 = 0;
	var uLocal_3833 = 0;
	var uLocal_3834 = 0;
	var uLocal_3835 = 0;
	var uLocal_3836 = 0;
	var uLocal_3837 = 0;
	var uLocal_3838 = 0;
	var uLocal_3839 = 0;
	var uLocal_3840 = 0;
	var uLocal_3841 = 20;
	var uLocal_3842 = 0;
	var uLocal_3843 = 0;
	var uLocal_3844 = 0;
	var uLocal_3845 = 0;
	var uLocal_3846 = 0;
	var uLocal_3847 = 0;
	var uLocal_3848 = 0;
	var uLocal_3849 = 0;
	var uLocal_3850 = 0;
	var uLocal_3851 = 0;
	var uLocal_3852 = 0;
	var uLocal_3853 = 0;
	var uLocal_3854 = 0;
	var uLocal_3855 = 0;
	var uLocal_3856 = 0;
	var uLocal_3857 = 0;
	var uLocal_3858 = 0;
	var uLocal_3859 = 0;
	var uLocal_3860 = 0;
	var uLocal_3861 = 0;
	var uLocal_3862 = 0;
	var uLocal_3863 = 0;
	var uLocal_3864 = 0;
	var uLocal_3865 = 0;
	var uLocal_3866 = 0;
	var uLocal_3867 = 0;
	var uLocal_3868 = 0;
	var uLocal_3869 = 0;
	var uLocal_3870 = 0;
	var uLocal_3871 = 0;
	var uLocal_3872 = 0;
	var uLocal_3873 = 0;
	var uLocal_3874 = 0;
	var uLocal_3875 = 0;
	var uLocal_3876 = 0;
	var uLocal_3877 = 0;
	var uLocal_3878 = 0;
	var uLocal_3879 = 0;
	var uLocal_3880 = 0;
	var uLocal_3881 = 0;
	var uLocal_3882 = 0;
	var uLocal_3883 = 0;
	var uLocal_3884 = 0;
	var uLocal_3885 = 0;
	var uLocal_3886 = 0;
	var uLocal_3887 = 0;
	var uLocal_3888 = 0;
	var uLocal_3889 = 0;
	var uLocal_3890 = 0;
	var uLocal_3891 = 0;
	var uLocal_3892 = 0;
	var uLocal_3893 = 0;
	var uLocal_3894 = 0;
	var uLocal_3895 = 0;
	var uLocal_3896 = 0;
	var uLocal_3897 = 0;
	var uLocal_3898 = 0;
	var uLocal_3899 = 0;
	var uLocal_3900 = 0;
	var uLocal_3901 = 0;
	var uLocal_3902 = 0;
	var uLocal_3903 = 0;
	var uLocal_3904 = 0;
	var uLocal_3905 = 0;
	var uLocal_3906 = 0;
	var uLocal_3907 = 0;
	var uLocal_3908 = 20;
	var uLocal_3909 = 0;
	var uLocal_3910 = 0;
	var uLocal_3911 = 0;
	var uLocal_3912 = 0;
	var uLocal_3913 = 0;
	var uLocal_3914 = 0;
	var uLocal_3915 = 0;
	var uLocal_3916 = 0;
	var uLocal_3917 = 0;
	var uLocal_3918 = 0;
	var uLocal_3919 = 0;
	var uLocal_3920 = 0;
	var uLocal_3921 = 0;
	var uLocal_3922 = 0;
	var uLocal_3923 = 0;
	var uLocal_3924 = 0;
	var uLocal_3925 = 0;
	var uLocal_3926 = 0;
	var uLocal_3927 = 0;
	var uLocal_3928 = 0;
	var uLocal_3929 = 0;
	var uLocal_3930 = 0;
	var uLocal_3931 = 0;
	var uLocal_3932 = 0;
	var uLocal_3933 = 0;
	var uLocal_3934 = 0;
	var uLocal_3935 = 0;
	var uLocal_3936 = 0;
	var uLocal_3937 = 0;
	var uLocal_3938 = 0;
	var uLocal_3939 = 0;
	var uLocal_3940 = 0;
	var uLocal_3941 = 0;
	var uLocal_3942 = 0;
	var uLocal_3943 = 0;
	var uLocal_3944 = 0;
	var uLocal_3945 = 0;
	var uLocal_3946 = 0;
	var uLocal_3947 = 0;
	var uLocal_3948 = 0;
	var uLocal_3949 = 0;
	var uLocal_3950 = 0;
	var uLocal_3951 = 0;
	var uLocal_3952 = 0;
	var uLocal_3953 = 0;
	var uLocal_3954 = 0;
	var uLocal_3955 = 0;
	var uLocal_3956 = 0;
	var uLocal_3957 = 0;
	var uLocal_3958 = 0;
	var uLocal_3959 = 0;
	var uLocal_3960 = 0;
	var uLocal_3961 = 0;
	var uLocal_3962 = 0;
	var uLocal_3963 = 0;
	var uLocal_3964 = 0;
	var uLocal_3965 = 0;
	var uLocal_3966 = 0;
	var uLocal_3967 = 0;
	var uLocal_3968 = 0;
	var uLocal_3969 = 0;
	var uLocal_3970 = 0;
	var uLocal_3971 = 0;
	var uLocal_3972 = 0;
	var uLocal_3973 = 0;
	var uLocal_3974 = 0;
	var uLocal_3975 = 20;
	var uLocal_3976 = 0;
	var uLocal_3977 = 0;
	var uLocal_3978 = 0;
	var uLocal_3979 = 0;
	var uLocal_3980 = 0;
	var uLocal_3981 = 0;
	var uLocal_3982 = 0;
	var uLocal_3983 = 0;
	var uLocal_3984 = 0;
	var uLocal_3985 = 0;
	var uLocal_3986 = 0;
	var uLocal_3987 = 0;
	var uLocal_3988 = 0;
	var uLocal_3989 = 0;
	var uLocal_3990 = 0;
	var uLocal_3991 = 0;
	var uLocal_3992 = 0;
	var uLocal_3993 = 0;
	var uLocal_3994 = 0;
	var uLocal_3995 = 0;
	var uLocal_3996 = 0;
	var uLocal_3997 = 0;
	var uLocal_3998 = 0;
	var uLocal_3999 = 0;
	var uLocal_4000 = 0;
	var uLocal_4001 = 0;
	var uLocal_4002 = 0;
	var uLocal_4003 = 0;
	var uLocal_4004 = 0;
	var uLocal_4005 = 0;
	var uLocal_4006 = 0;
	var uLocal_4007 = 0;
	var uLocal_4008 = 0;
	var uLocal_4009 = 0;
	var uLocal_4010 = 0;
	var uLocal_4011 = 0;
	var uLocal_4012 = 0;
	var uLocal_4013 = 0;
	var uLocal_4014 = 0;
	var uLocal_4015 = 0;
	var uLocal_4016 = 0;
	var uLocal_4017 = 0;
	var uLocal_4018 = 0;
	var uLocal_4019 = 0;
	var uLocal_4020 = 0;
	var uLocal_4021 = 0;
	var uLocal_4022 = 0;
	var uLocal_4023 = 0;
	var uLocal_4024 = 0;
	var uLocal_4025 = 0;
	var uLocal_4026 = 0;
	var uLocal_4027 = 0;
	var uLocal_4028 = 0;
	var uLocal_4029 = 0;
	var uLocal_4030 = 0;
	var uLocal_4031 = 0;
	var uLocal_4032 = 0;
	var uLocal_4033 = 0;
	var uLocal_4034 = 0;
	var uLocal_4035 = 0;
	var uLocal_4036 = 0;
	var uLocal_4037 = 0;
	var uLocal_4038 = 0;
	var uLocal_4039 = 0;
	var uLocal_4040 = 0;
	var uLocal_4041 = 0;
	var uLocal_4042 = 20;
	var uLocal_4043 = 0;
	var uLocal_4044 = 0;
	var uLocal_4045 = 0;
	var uLocal_4046 = 0;
	var uLocal_4047 = 0;
	var uLocal_4048 = 0;
	var uLocal_4049 = 0;
	var uLocal_4050 = 0;
	var uLocal_4051 = 0;
	var uLocal_4052 = 0;
	var uLocal_4053 = 0;
	var uLocal_4054 = 0;
	var uLocal_4055 = 0;
	var uLocal_4056 = 0;
	var uLocal_4057 = 0;
	var uLocal_4058 = 0;
	var uLocal_4059 = 0;
	var uLocal_4060 = 0;
	var uLocal_4061 = 0;
	var uLocal_4062 = 0;
	var uLocal_4063 = 0;
	var uLocal_4064 = 0;
	var uLocal_4065 = 0;
	var uLocal_4066 = 0;
	var uLocal_4067 = 0;
	var uLocal_4068 = 0;
	var uLocal_4069 = 0;
	var uLocal_4070 = 0;
	var uLocal_4071 = 0;
	var uLocal_4072 = 0;
	var uLocal_4073 = 0;
	var uLocal_4074 = 0;
	var uLocal_4075 = 0;
	var uLocal_4076 = 0;
	var uLocal_4077 = 0;
	var uLocal_4078 = 0;
	var uLocal_4079 = 0;
	var uLocal_4080 = 0;
	var uLocal_4081 = 0;
	var uLocal_4082 = 0;
	var uLocal_4083 = 0;
	var uLocal_4084 = 0;
	var uLocal_4085 = 0;
	var uLocal_4086 = 0;
	var uLocal_4087 = 0;
	var uLocal_4088 = 0;
	var uLocal_4089 = 0;
	var uLocal_4090 = 0;
	var uLocal_4091 = 0;
	var uLocal_4092 = 0;
	var uLocal_4093 = 0;
	var uLocal_4094 = 0;
	var uLocal_4095 = 0;
	var uLocal_4096 = 0;
	var uLocal_4097 = 0;
	var uLocal_4098 = 0;
	var uLocal_4099 = 0;
	var uLocal_4100 = 0;
	var uLocal_4101 = 0;
	var uLocal_4102 = 0;
	var uLocal_4103 = 0;
	var uLocal_4104 = 0;
	var uLocal_4105 = 0;
	var uLocal_4106 = 0;
	var uLocal_4107 = 0;
	var uLocal_4108 = 0;
	var uLocal_4109 = 20;
	var uLocal_4110 = 0;
	var uLocal_4111 = 0;
	var uLocal_4112 = 0;
	var uLocal_4113 = 0;
	var uLocal_4114 = 0;
	var uLocal_4115 = 0;
	var uLocal_4116 = 0;
	var uLocal_4117 = 0;
	var uLocal_4118 = 0;
	var uLocal_4119 = 0;
	var uLocal_4120 = 0;
	var uLocal_4121 = 0;
	var uLocal_4122 = 0;
	var uLocal_4123 = 0;
	var uLocal_4124 = 0;
	var uLocal_4125 = 0;
	var uLocal_4126 = 0;
	var uLocal_4127 = 0;
	var uLocal_4128 = 0;
	var uLocal_4129 = 0;
	var uLocal_4130 = 0;
	var uLocal_4131 = 0;
	var uLocal_4132 = 0;
	var uLocal_4133 = 0;
	var uLocal_4134 = 0;
	var uLocal_4135 = 0;
	var uLocal_4136 = 0;
	var uLocal_4137 = 0;
	var uLocal_4138 = 0;
	var uLocal_4139 = 0;
	var uLocal_4140 = 0;
	var uLocal_4141 = 0;
	var uLocal_4142 = 0;
	var uLocal_4143 = 0;
	var uLocal_4144 = 0;
	var uLocal_4145 = 0;
	var uLocal_4146 = 0;
	var uLocal_4147 = 0;
	var uLocal_4148 = 0;
	var uLocal_4149 = 0;
	var uLocal_4150 = 0;
	var uLocal_4151 = 0;
	var uLocal_4152 = 0;
	var uLocal_4153 = 0;
	var uLocal_4154 = 0;
	var uLocal_4155 = 0;
	var uLocal_4156 = 0;
	var uLocal_4157 = 0;
	var uLocal_4158 = 0;
	var uLocal_4159 = 0;
	var uLocal_4160 = 0;
	var uLocal_4161 = 0;
	var uLocal_4162 = 0;
	var uLocal_4163 = 0;
	var uLocal_4164 = 0;
	var uLocal_4165 = 0;
	var uLocal_4166 = 0;
	var uLocal_4167 = 0;
	var uLocal_4168 = 0;
	var uLocal_4169 = 0;
	var uLocal_4170 = 0;
	var uLocal_4171 = 0;
	var uLocal_4172 = 0;
	var uLocal_4173 = 0;
	var uLocal_4174 = 0;
	var uLocal_4175 = 0;
	var uLocal_4176 = 20;
	var uLocal_4177 = 0;
	var uLocal_4178 = 0;
	var uLocal_4179 = 0;
	var uLocal_4180 = 0;
	var uLocal_4181 = 0;
	var uLocal_4182 = 0;
	var uLocal_4183 = 0;
	var uLocal_4184 = 0;
	var uLocal_4185 = 0;
	var uLocal_4186 = 0;
	var uLocal_4187 = 0;
	var uLocal_4188 = 0;
	var uLocal_4189 = 0;
	var uLocal_4190 = 0;
	var uLocal_4191 = 0;
	var uLocal_4192 = 0;
	var uLocal_4193 = 0;
	var uLocal_4194 = 0;
	var uLocal_4195 = 0;
	var uLocal_4196 = 0;
	var uLocal_4197 = 0;
	var uLocal_4198 = 0;
	var uLocal_4199 = 0;
	var uLocal_4200 = 0;
	var uLocal_4201 = 0;
	var uLocal_4202 = 0;
	var uLocal_4203 = 0;
	var uLocal_4204 = 0;
	var uLocal_4205 = 0;
	var uLocal_4206 = 0;
	var uLocal_4207 = 0;
	var uLocal_4208 = 0;
	var uLocal_4209 = 0;
	var uLocal_4210 = 0;
	var uLocal_4211 = 0;
	var uLocal_4212 = 0;
	var uLocal_4213 = 0;
	var uLocal_4214 = 0;
	var uLocal_4215 = 0;
	var uLocal_4216 = 0;
	var uLocal_4217 = 0;
	var uLocal_4218 = 0;
	var uLocal_4219 = 0;
	var uLocal_4220 = 0;
	var uLocal_4221 = 0;
	var uLocal_4222 = 0;
	var uLocal_4223 = 0;
	var uLocal_4224 = 0;
	var uLocal_4225 = 0;
	var uLocal_4226 = 0;
	var uLocal_4227 = 0;
	var uLocal_4228 = 0;
	var uLocal_4229 = 0;
	var uLocal_4230 = 0;
	var uLocal_4231 = 0;
	var uLocal_4232 = 0;
	var uLocal_4233 = 0;
	var uLocal_4234 = 0;
	var uLocal_4235 = 0;
	var uLocal_4236 = 0;
	var uLocal_4237 = 0;
	var uLocal_4238 = 0;
	var uLocal_4239 = 0;
	var uLocal_4240 = 0;
	var uLocal_4241 = 0;
	var uLocal_4242 = 0;
	var uLocal_4243 = 20;
	var uLocal_4244 = 0;
	var uLocal_4245 = 0;
	var uLocal_4246 = 0;
	var uLocal_4247 = 0;
	var uLocal_4248 = 0;
	var uLocal_4249 = 0;
	var uLocal_4250 = 0;
	var uLocal_4251 = 0;
	var uLocal_4252 = 0;
	var uLocal_4253 = 0;
	var uLocal_4254 = 0;
	var uLocal_4255 = 0;
	var uLocal_4256 = 0;
	var uLocal_4257 = 0;
	var uLocal_4258 = 0;
	var uLocal_4259 = 0;
	var uLocal_4260 = 0;
	var uLocal_4261 = 0;
	var uLocal_4262 = 0;
	var uLocal_4263 = 0;
	var uLocal_4264 = 0;
	var uLocal_4265 = 0;
	var uLocal_4266 = 0;
	var uLocal_4267 = 0;
	var uLocal_4268 = 0;
	var uLocal_4269 = 0;
	var uLocal_4270 = 0;
	var uLocal_4271 = 0;
	var uLocal_4272 = 0;
	var uLocal_4273 = 0;
	var uLocal_4274 = 0;
	var uLocal_4275 = 0;
	var uLocal_4276 = 0;
	var uLocal_4277 = 0;
	var uLocal_4278 = 0;
	var uLocal_4279 = 0;
	var uLocal_4280 = 0;
	var uLocal_4281 = 0;
	var uLocal_4282 = 0;
	var uLocal_4283 = 0;
	var uLocal_4284 = 0;
	var uLocal_4285 = 0;
	var uLocal_4286 = 0;
	var uLocal_4287 = 0;
	var uLocal_4288 = 0;
	var uLocal_4289 = 0;
	var uLocal_4290 = 0;
	var uLocal_4291 = 0;
	var uLocal_4292 = 0;
	var uLocal_4293 = 0;
	var uLocal_4294 = 0;
	var uLocal_4295 = 0;
	var uLocal_4296 = 0;
	var uLocal_4297 = 0;
	var uLocal_4298 = 0;
	var uLocal_4299 = 0;
	var uLocal_4300 = 0;
	var uLocal_4301 = 0;
	var uLocal_4302 = 0;
	var uLocal_4303 = 0;
	var uLocal_4304 = 0;
	var uLocal_4305 = 0;
	var uLocal_4306 = 0;
	var uLocal_4307 = 0;
	var uLocal_4308 = 0;
	var uLocal_4309 = 0;
	var uLocal_4310 = 20;
	var uLocal_4311 = 0;
	var uLocal_4312 = 0;
	var uLocal_4313 = 0;
	var uLocal_4314 = 0;
	var uLocal_4315 = 0;
	var uLocal_4316 = 0;
	var uLocal_4317 = 0;
	var uLocal_4318 = 0;
	var uLocal_4319 = 0;
	var uLocal_4320 = 0;
	var uLocal_4321 = 0;
	var uLocal_4322 = 0;
	var uLocal_4323 = 0;
	var uLocal_4324 = 0;
	var uLocal_4325 = 0;
	var uLocal_4326 = 0;
	var uLocal_4327 = 0;
	var uLocal_4328 = 0;
	var uLocal_4329 = 0;
	var uLocal_4330 = 0;
	var uLocal_4331 = 0;
	var uLocal_4332 = 0;
	var uLocal_4333 = 0;
	var uLocal_4334 = 0;
	var uLocal_4335 = 0;
	var uLocal_4336 = 0;
	var uLocal_4337 = 0;
	var uLocal_4338 = 0;
	var uLocal_4339 = 0;
	var uLocal_4340 = 0;
	var uLocal_4341 = 0;
	var uLocal_4342 = 0;
	var uLocal_4343 = 0;
	var uLocal_4344 = 0;
	var uLocal_4345 = 0;
	var uLocal_4346 = 0;
	var uLocal_4347 = 0;
	var uLocal_4348 = 0;
	var uLocal_4349 = 0;
	var uLocal_4350 = 0;
	var uLocal_4351 = 0;
	var uLocal_4352 = 0;
	var uLocal_4353 = 0;
	var uLocal_4354 = 0;
	var uLocal_4355 = 0;
	var uLocal_4356 = 0;
	var uLocal_4357 = 0;
	var uLocal_4358 = 0;
	var uLocal_4359 = 0;
	var uLocal_4360 = 0;
	var uLocal_4361 = 0;
	var uLocal_4362 = 0;
	var uLocal_4363 = 0;
	var uLocal_4364 = 0;
	var uLocal_4365 = 0;
	var uLocal_4366 = 0;
	var uLocal_4367 = 0;
	var uLocal_4368 = 0;
	var uLocal_4369 = 0;
	var uLocal_4370 = 0;
	var uLocal_4371 = 0;
	var uLocal_4372 = 0;
	var uLocal_4373 = 0;
	var uLocal_4374 = 0;
	var uLocal_4375 = 0;
	var uLocal_4376 = 0;
	var uLocal_4377 = 20;
	var uLocal_4378 = 0;
	var uLocal_4379 = 0;
	var uLocal_4380 = 0;
	var uLocal_4381 = 0;
	var uLocal_4382 = 0;
	var uLocal_4383 = 0;
	var uLocal_4384 = 0;
	var uLocal_4385 = 0;
	var uLocal_4386 = 0;
	var uLocal_4387 = 0;
	var uLocal_4388 = 0;
	var uLocal_4389 = 0;
	var uLocal_4390 = 0;
	var uLocal_4391 = 0;
	var uLocal_4392 = 0;
	var uLocal_4393 = 0;
	var uLocal_4394 = 0;
	var uLocal_4395 = 0;
	var uLocal_4396 = 0;
	var uLocal_4397 = 0;
	var uLocal_4398 = 0;
	var uLocal_4399 = 0;
	var uLocal_4400 = 0;
	var uLocal_4401 = 0;
	var uLocal_4402 = 0;
	var uLocal_4403 = 0;
	var uLocal_4404 = 0;
	var uLocal_4405 = 0;
	var uLocal_4406 = 0;
	var uLocal_4407 = 0;
	var uLocal_4408 = 0;
	var uLocal_4409 = 0;
	var uLocal_4410 = 0;
	var uLocal_4411 = 0;
	var uLocal_4412 = 0;
	var uLocal_4413 = 0;
	var uLocal_4414 = 0;
	var uLocal_4415 = 0;
	var uLocal_4416 = 0;
	var uLocal_4417 = 0;
	var uLocal_4418 = 0;
	var uLocal_4419 = 0;
	var uLocal_4420 = 0;
	var uLocal_4421 = 0;
	var uLocal_4422 = 0;
	var uLocal_4423 = 0;
	var uLocal_4424 = 0;
	var uLocal_4425 = 0;
	var uLocal_4426 = 0;
	var uLocal_4427 = 0;
	var uLocal_4428 = 0;
	var uLocal_4429 = 0;
	var uLocal_4430 = 0;
	var uLocal_4431 = 0;
	var uLocal_4432 = 0;
	var uLocal_4433 = 0;
	var uLocal_4434 = 0;
	var uLocal_4435 = 0;
	var uLocal_4436 = 0;
	var uLocal_4437 = 0;
	var uLocal_4438 = 0;
	var uLocal_4439 = 0;
	var uLocal_4440 = 0;
	var uLocal_4441 = 0;
	var uLocal_4442 = 0;
	var uLocal_4443 = 0;
	var uLocal_4444 = 20;
	var uLocal_4445 = 0;
	var uLocal_4446 = 0;
	var uLocal_4447 = 0;
	var uLocal_4448 = 0;
	var uLocal_4449 = 0;
	var uLocal_4450 = 0;
	var uLocal_4451 = 0;
	var uLocal_4452 = 0;
	var uLocal_4453 = 0;
	var uLocal_4454 = 0;
	var uLocal_4455 = 0;
	var uLocal_4456 = 0;
	var uLocal_4457 = 0;
	var uLocal_4458 = 0;
	var uLocal_4459 = 0;
	var uLocal_4460 = 0;
	var uLocal_4461 = 0;
	var uLocal_4462 = 0;
	var uLocal_4463 = 0;
	var uLocal_4464 = 0;
	var uLocal_4465 = 0;
	var uLocal_4466 = 0;
	var uLocal_4467 = 0;
	var uLocal_4468 = 0;
	var uLocal_4469 = 0;
	var uLocal_4470 = 0;
	var uLocal_4471 = 0;
	var uLocal_4472 = 0;
	var uLocal_4473 = 0;
	var uLocal_4474 = 0;
	var uLocal_4475 = 0;
	var uLocal_4476 = 0;
	var uLocal_4477 = 0;
	var uLocal_4478 = 0;
	var uLocal_4479 = 0;
	var uLocal_4480 = 0;
	var uLocal_4481 = 0;
	var uLocal_4482 = 0;
	var uLocal_4483 = 0;
	var uLocal_4484 = 0;
	var uLocal_4485 = 0;
	var uLocal_4486 = 0;
	var uLocal_4487 = 0;
	var uLocal_4488 = 0;
	var uLocal_4489 = 0;
	var uLocal_4490 = 0;
	var uLocal_4491 = 0;
	var uLocal_4492 = 0;
	var uLocal_4493 = 0;
	var uLocal_4494 = 0;
	var uLocal_4495 = 0;
	var uLocal_4496 = 0;
	var uLocal_4497 = 0;
	var uLocal_4498 = 0;
	var uLocal_4499 = 0;
	var uLocal_4500 = 0;
	var uLocal_4501 = 0;
	var uLocal_4502 = 0;
	var uLocal_4503 = 0;
	var uLocal_4504 = 0;
	var uLocal_4505 = 0;
	var uLocal_4506 = 0;
	var uLocal_4507 = 0;
	var uLocal_4508 = 0;
	var uLocal_4509 = 0;
	var uLocal_4510 = 0;
	var uLocal_4511 = 20;
	var uLocal_4512 = 0;
	var uLocal_4513 = 0;
	var uLocal_4514 = 0;
	var uLocal_4515 = 0;
	var uLocal_4516 = 0;
	var uLocal_4517 = 0;
	var uLocal_4518 = 0;
	var uLocal_4519 = 0;
	var uLocal_4520 = 0;
	var uLocal_4521 = 0;
	var uLocal_4522 = 0;
	var uLocal_4523 = 0;
	var uLocal_4524 = 0;
	var uLocal_4525 = 0;
	var uLocal_4526 = 0;
	var uLocal_4527 = 0;
	var uLocal_4528 = 0;
	var uLocal_4529 = 0;
	var uLocal_4530 = 0;
	var uLocal_4531 = 0;
	var uLocal_4532 = 0;
	var uLocal_4533 = 0;
	var uLocal_4534 = 0;
	var uLocal_4535 = 0;
	var uLocal_4536 = 0;
	var uLocal_4537 = 0;
	var uLocal_4538 = 0;
	var uLocal_4539 = 0;
	var uLocal_4540 = 0;
	var uLocal_4541 = 0;
	var uLocal_4542 = 0;
	var uLocal_4543 = 0;
	var uLocal_4544 = 0;
	var uLocal_4545 = 0;
	var uLocal_4546 = 0;
	var uLocal_4547 = 0;
	var uLocal_4548 = 0;
	var uLocal_4549 = 0;
	var uLocal_4550 = 0;
	var uLocal_4551 = 0;
	var uLocal_4552 = 0;
	var uLocal_4553 = 0;
	var uLocal_4554 = 0;
	var uLocal_4555 = 0;
	var uLocal_4556 = 0;
	var uLocal_4557 = 0;
	var uLocal_4558 = 0;
	var uLocal_4559 = 0;
	var uLocal_4560 = 0;
	var uLocal_4561 = 0;
	var uLocal_4562 = 0;
	var uLocal_4563 = 0;
	var uLocal_4564 = 0;
	var uLocal_4565 = 0;
	var uLocal_4566 = 0;
	var uLocal_4567 = 0;
	var uLocal_4568 = 0;
	var uLocal_4569 = 0;
	var uLocal_4570 = 0;
	var uLocal_4571 = 0;
	var uLocal_4572 = 0;
	var uLocal_4573 = 0;
	var uLocal_4574 = 0;
	var uLocal_4575 = 0;
	var uLocal_4576 = 0;
	var uLocal_4577 = 0;
	var uLocal_4578 = 20;
	var uLocal_4579 = 0;
	var uLocal_4580 = 0;
	var uLocal_4581 = 0;
	var uLocal_4582 = 0;
	var uLocal_4583 = 0;
	var uLocal_4584 = 0;
	var uLocal_4585 = 0;
	var uLocal_4586 = 0;
	var uLocal_4587 = 0;
	var uLocal_4588 = 0;
	var uLocal_4589 = 0;
	var uLocal_4590 = 0;
	var uLocal_4591 = 0;
	var uLocal_4592 = 0;
	var uLocal_4593 = 0;
	var uLocal_4594 = 0;
	var uLocal_4595 = 0;
	var uLocal_4596 = 0;
	var uLocal_4597 = 0;
	var uLocal_4598 = 0;
	var uLocal_4599 = 0;
	var uLocal_4600 = 0;
	var uLocal_4601 = 0;
	var uLocal_4602 = 0;
	var uLocal_4603 = 0;
	var uLocal_4604 = 0;
	var uLocal_4605 = 0;
	var uLocal_4606 = 0;
	var uLocal_4607 = 0;
	var uLocal_4608 = 0;
	var uLocal_4609 = 0;
	var uLocal_4610 = 0;
	var uLocal_4611 = 0;
	var uLocal_4612 = 0;
	var uLocal_4613 = 0;
	var uLocal_4614 = 0;
	var uLocal_4615 = 0;
	var uLocal_4616 = 0;
	var uLocal_4617 = 0;
	var uLocal_4618 = 0;
	var uLocal_4619 = 0;
	var uLocal_4620 = 0;
	var uLocal_4621 = 0;
	var uLocal_4622 = 0;
	var uLocal_4623 = 0;
	var uLocal_4624 = 0;
	var uLocal_4625 = 0;
	var uLocal_4626 = 0;
	var uLocal_4627 = 0;
	var uLocal_4628 = 0;
	var uLocal_4629 = 0;
	var uLocal_4630 = 0;
	var uLocal_4631 = 0;
	var uLocal_4632 = 0;
	var uLocal_4633 = 0;
	var uLocal_4634 = 0;
	var uLocal_4635 = 0;
	var uLocal_4636 = 0;
	var uLocal_4637 = 0;
	var uLocal_4638 = 0;
	var uLocal_4639 = 0;
	var uLocal_4640 = 0;
	var uLocal_4641 = 0;
	var uLocal_4642 = 0;
	var uLocal_4643 = 0;
	var uLocal_4644 = 0;
	var uLocal_4645 = 20;
	var uLocal_4646 = 0;
	var uLocal_4647 = 0;
	var uLocal_4648 = 0;
	var uLocal_4649 = 0;
	var uLocal_4650 = 0;
	var uLocal_4651 = 0;
	var uLocal_4652 = 0;
	var uLocal_4653 = 0;
	var uLocal_4654 = 0;
	var uLocal_4655 = 0;
	var uLocal_4656 = 0;
	var uLocal_4657 = 0;
	var uLocal_4658 = 0;
	var uLocal_4659 = 0;
	var uLocal_4660 = 0;
	var uLocal_4661 = 0;
	var uLocal_4662 = 0;
	var uLocal_4663 = 0;
	var uLocal_4664 = 0;
	var uLocal_4665 = 0;
	var uLocal_4666 = 0;
	var uLocal_4667 = 0;
	var uLocal_4668 = 0;
	var uLocal_4669 = 0;
	var uLocal_4670 = 0;
	var uLocal_4671 = 0;
	var uLocal_4672 = 0;
	var uLocal_4673 = 0;
	var uLocal_4674 = 0;
	var uLocal_4675 = 0;
	var uLocal_4676 = 0;
	var uLocal_4677 = 0;
	var uLocal_4678 = 0;
	var uLocal_4679 = 0;
	var uLocal_4680 = 0;
	var uLocal_4681 = 0;
	var uLocal_4682 = 0;
	var uLocal_4683 = 0;
	var uLocal_4684 = 0;
	var uLocal_4685 = 0;
	var uLocal_4686 = 0;
	var uLocal_4687 = 0;
	var uLocal_4688 = 0;
	var uLocal_4689 = 0;
	var uLocal_4690 = 0;
	var uLocal_4691 = 0;
	var uLocal_4692 = 0;
	var uLocal_4693 = 0;
	var uLocal_4694 = 0;
	var uLocal_4695 = 0;
	var uLocal_4696 = 0;
	var uLocal_4697 = 0;
	var uLocal_4698 = 0;
	var uLocal_4699 = 0;
	var uLocal_4700 = 0;
	var uLocal_4701 = 0;
	var uLocal_4702 = 0;
	var uLocal_4703 = 0;
	var uLocal_4704 = 0;
	var uLocal_4705 = 0;
	var uLocal_4706 = 0;
	var uLocal_4707 = 0;
	var uLocal_4708 = 0;
	var uLocal_4709 = 0;
	var uLocal_4710 = 0;
	var uLocal_4711 = 0;
	var uLocal_4712 = 20;
	var uLocal_4713 = 0;
	var uLocal_4714 = 0;
	var uLocal_4715 = 0;
	var uLocal_4716 = 0;
	var uLocal_4717 = 0;
	var uLocal_4718 = 0;
	var uLocal_4719 = 0;
	var uLocal_4720 = 0;
	var uLocal_4721 = 0;
	var uLocal_4722 = 0;
	var uLocal_4723 = 0;
	var uLocal_4724 = 0;
	var uLocal_4725 = 0;
	var uLocal_4726 = 0;
	var uLocal_4727 = 0;
	var uLocal_4728 = 0;
	var uLocal_4729 = 0;
	var uLocal_4730 = 0;
	var uLocal_4731 = 0;
	var uLocal_4732 = 0;
	var uLocal_4733 = 0;
	var uLocal_4734 = 0;
	var uLocal_4735 = 0;
	var uLocal_4736 = 0;
	var uLocal_4737 = 0;
	var uLocal_4738 = 0;
	var uLocal_4739 = 0;
	var uLocal_4740 = 0;
	var uLocal_4741 = 0;
	var uLocal_4742 = 0;
	var uLocal_4743 = 0;
	var uLocal_4744 = 0;
	var uLocal_4745 = 0;
	var uLocal_4746 = 0;
	var uLocal_4747 = 0;
	var uLocal_4748 = 0;
	var uLocal_4749 = 0;
	var uLocal_4750 = 0;
	var uLocal_4751 = 0;
	var uLocal_4752 = 0;
	var uLocal_4753 = 0;
	var uLocal_4754 = 0;
	var uLocal_4755 = 0;
	var uLocal_4756 = 0;
	var uLocal_4757 = 0;
	var uLocal_4758 = 0;
	var uLocal_4759 = 0;
	var uLocal_4760 = 0;
	var uLocal_4761 = 0;
	var uLocal_4762 = 0;
	var uLocal_4763 = 0;
	var uLocal_4764 = 0;
	var uLocal_4765 = 0;
	var uLocal_4766 = 0;
	var uLocal_4767 = 0;
	var uLocal_4768 = 0;
	var uLocal_4769 = 0;
	var uLocal_4770 = 0;
	var uLocal_4771 = 0;
	var uLocal_4772 = 0;
	var uLocal_4773 = 0;
	var uLocal_4774 = 0;
	var uLocal_4775 = 0;
	var uLocal_4776 = 0;
	var uLocal_4777 = 0;
	var uLocal_4778 = 0;
	var uLocal_4779 = 20;
	var uLocal_4780 = 0;
	var uLocal_4781 = 0;
	var uLocal_4782 = 0;
	var uLocal_4783 = 0;
	var uLocal_4784 = 0;
	var uLocal_4785 = 0;
	var uLocal_4786 = 0;
	var uLocal_4787 = 0;
	var uLocal_4788 = 0;
	var uLocal_4789 = 0;
	var uLocal_4790 = 0;
	var uLocal_4791 = 0;
	var uLocal_4792 = 0;
	var uLocal_4793 = 0;
	var uLocal_4794 = 0;
	var uLocal_4795 = 0;
	var uLocal_4796 = 0;
	var uLocal_4797 = 0;
	var uLocal_4798 = 0;
	var uLocal_4799 = 0;
	var uLocal_4800 = 0;
	var uLocal_4801 = 0;
	var uLocal_4802 = 0;
	var uLocal_4803 = 0;
	var uLocal_4804 = 0;
	var uLocal_4805 = 0;
	var uLocal_4806 = 0;
	var uLocal_4807 = 0;
	var uLocal_4808 = 0;
	var uLocal_4809 = 0;
	var uLocal_4810 = 0;
	var uLocal_4811 = 0;
	var uLocal_4812 = 0;
	var uLocal_4813 = 0;
	var uLocal_4814 = 0;
	var uLocal_4815 = 0;
	var uLocal_4816 = 0;
	var uLocal_4817 = 0;
	var uLocal_4818 = 0;
	var uLocal_4819 = 0;
	var uLocal_4820 = 0;
	var uLocal_4821 = 0;
	var uLocal_4822 = 0;
	var uLocal_4823 = 0;
	var uLocal_4824 = 0;
	var uLocal_4825 = 0;
	var uLocal_4826 = 0;
	var uLocal_4827 = 0;
	var uLocal_4828 = 0;
	var uLocal_4829 = 0;
	var uLocal_4830 = 0;
	var uLocal_4831 = 0;
	var uLocal_4832 = 0;
	var uLocal_4833 = 0;
	var uLocal_4834 = 0;
	var uLocal_4835 = 0;
	var uLocal_4836 = 0;
	var uLocal_4837 = 0;
	var uLocal_4838 = 0;
	var uLocal_4839 = 0;
	var uLocal_4840 = 0;
	var uLocal_4841 = 0;
	var uLocal_4842 = 0;
	var uLocal_4843 = 0;
	var uLocal_4844 = 0;
	var uLocal_4845 = 0;
	var uLocal_4846 = 20;
	var uLocal_4847 = 0;
	var uLocal_4848 = 0;
	var uLocal_4849 = 0;
	var uLocal_4850 = 0;
	var uLocal_4851 = 0;
	var uLocal_4852 = 0;
	var uLocal_4853 = 0;
	var uLocal_4854 = 0;
	var uLocal_4855 = 0;
	var uLocal_4856 = 0;
	var uLocal_4857 = 0;
	var uLocal_4858 = 0;
	var uLocal_4859 = 0;
	var uLocal_4860 = 0;
	var uLocal_4861 = 0;
	var uLocal_4862 = 0;
	var uLocal_4863 = 0;
	var uLocal_4864 = 0;
	var uLocal_4865 = 0;
	var uLocal_4866 = 0;
	var uLocal_4867 = 0;
	var uLocal_4868 = 0;
	var uLocal_4869 = 0;
	var uLocal_4870 = 0;
	var uLocal_4871 = 0;
	var uLocal_4872 = 0;
	var uLocal_4873 = 0;
	var uLocal_4874 = 0;
	var uLocal_4875 = 0;
	var uLocal_4876 = 0;
	var uLocal_4877 = 0;
	var uLocal_4878 = 0;
	var uLocal_4879 = 0;
	var uLocal_4880 = 0;
	var uLocal_4881 = 0;
	var uLocal_4882 = 0;
	var uLocal_4883 = 0;
	var uLocal_4884 = 0;
	var uLocal_4885 = 0;
	var uLocal_4886 = 0;
	var uLocal_4887 = 0;
	var uLocal_4888 = 0;
	var uLocal_4889 = 0;
	var uLocal_4890 = 0;
	var uLocal_4891 = 0;
	var uLocal_4892 = 0;
	var uLocal_4893 = 0;
	var uLocal_4894 = 0;
	var uLocal_4895 = 0;
	var uLocal_4896 = 0;
	var uLocal_4897 = 0;
	var uLocal_4898 = 0;
	var uLocal_4899 = 0;
	var uLocal_4900 = 0;
	var uLocal_4901 = 0;
	var uLocal_4902 = 0;
	var uLocal_4903 = 0;
	var uLocal_4904 = 0;
	var uLocal_4905 = 0;
	var uLocal_4906 = 0;
	var uLocal_4907 = 0;
	var uLocal_4908 = 0;
	var uLocal_4909 = 0;
	var uLocal_4910 = 0;
	var uLocal_4911 = 0;
	var uLocal_4912 = 0;
	var uLocal_4913 = 20;
	var uLocal_4914 = 0;
	var uLocal_4915 = 0;
	var uLocal_4916 = 0;
	var uLocal_4917 = 0;
	var uLocal_4918 = 0;
	var uLocal_4919 = 0;
	var uLocal_4920 = 0;
	var uLocal_4921 = 0;
	var uLocal_4922 = 0;
	var uLocal_4923 = 0;
	var uLocal_4924 = 0;
	var uLocal_4925 = 0;
	var uLocal_4926 = 0;
	var uLocal_4927 = 0;
	var uLocal_4928 = 0;
	var uLocal_4929 = 0;
	var uLocal_4930 = 0;
	var uLocal_4931 = 0;
	var uLocal_4932 = 0;
	var uLocal_4933 = 0;
	var uLocal_4934 = 0;
	var uLocal_4935 = 0;
	var uLocal_4936 = 0;
	var uLocal_4937 = 0;
	var uLocal_4938 = 0;
	var uLocal_4939 = 0;
	var uLocal_4940 = 0;
	var uLocal_4941 = 0;
	var uLocal_4942 = 0;
	var uLocal_4943 = 0;
	var uLocal_4944 = 0;
	var uLocal_4945 = 0;
	var uLocal_4946 = 0;
	var uLocal_4947 = 0;
	var uLocal_4948 = 0;
	var uLocal_4949 = 0;
	var uLocal_4950 = 0;
	var uLocal_4951 = 0;
	var uLocal_4952 = 0;
	var uLocal_4953 = 0;
	var uLocal_4954 = 0;
	var uLocal_4955 = 0;
	var uLocal_4956 = 0;
	var uLocal_4957 = 0;
	var uLocal_4958 = 0;
	var uLocal_4959 = 0;
	var uLocal_4960 = 0;
	var uLocal_4961 = 0;
	var uLocal_4962 = 0;
	var uLocal_4963 = 0;
	var uLocal_4964 = 0;
	var uLocal_4965 = 0;
	var uLocal_4966 = 0;
	var uLocal_4967 = 0;
	var uLocal_4968 = 0;
	var uLocal_4969 = 0;
	var uLocal_4970 = 0;
	var uLocal_4971 = 0;
	var uLocal_4972 = 0;
	var uLocal_4973 = 0;
	var uLocal_4974 = 0;
	var uLocal_4975 = 0;
	var uLocal_4976 = 0;
	var uLocal_4977 = 0;
	var uLocal_4978 = 0;
	var uLocal_4979 = 0;
	var uLocal_4980 = 20;
	var uLocal_4981 = 0;
	var uLocal_4982 = 0;
	var uLocal_4983 = 0;
	var uLocal_4984 = 0;
	var uLocal_4985 = 0;
	var uLocal_4986 = 0;
	var uLocal_4987 = 0;
	var uLocal_4988 = 0;
	var uLocal_4989 = 0;
	var uLocal_4990 = 0;
	var uLocal_4991 = 0;
	var uLocal_4992 = 0;
	var uLocal_4993 = 0;
	var uLocal_4994 = 0;
	var uLocal_4995 = 0;
	var uLocal_4996 = 0;
	var uLocal_4997 = 0;
	var uLocal_4998 = 0;
	var uLocal_4999 = 0;
	var uLocal_5000 = 0;
	var uLocal_5001 = 0;
	var uLocal_5002 = 0;
	var uLocal_5003 = 0;
	var uLocal_5004 = 0;
	var uLocal_5005 = 0;
	var uLocal_5006 = 0;
	var uLocal_5007 = 0;
	var uLocal_5008 = 0;
	var uLocal_5009 = 0;
	var uLocal_5010 = 0;
	var uLocal_5011 = 0;
	var uLocal_5012 = 0;
	var uLocal_5013 = 0;
	var uLocal_5014 = 0;
	var uLocal_5015 = 0;
	var uLocal_5016 = 0;
	var uLocal_5017 = 0;
	var uLocal_5018 = 0;
	var uLocal_5019 = 0;
	var uLocal_5020 = 0;
	var uLocal_5021 = 0;
	var uLocal_5022 = 0;
	var uLocal_5023 = 0;
	var uLocal_5024 = 0;
	var uLocal_5025 = 0;
	var uLocal_5026 = 0;
	var uLocal_5027 = 0;
	var uLocal_5028 = 0;
	var uLocal_5029 = 0;
	var uLocal_5030 = 0;
	var uLocal_5031 = 0;
	var uLocal_5032 = 0;
	var uLocal_5033 = 0;
	var uLocal_5034 = 0;
	var uLocal_5035 = 0;
	var uLocal_5036 = 0;
	var uLocal_5037 = 0;
	var uLocal_5038 = 0;
	var uLocal_5039 = 0;
	var uLocal_5040 = 0;
	var uLocal_5041 = 0;
	var uLocal_5042 = 0;
	var uLocal_5043 = 0;
	var uLocal_5044 = 0;
	var uLocal_5045 = 0;
	var uLocal_5046 = 0;
	var uLocal_5047 = 20;
	var uLocal_5048 = 0;
	var uLocal_5049 = 0;
	var uLocal_5050 = 0;
	var uLocal_5051 = 0;
	var uLocal_5052 = 0;
	var uLocal_5053 = 0;
	var uLocal_5054 = 0;
	var uLocal_5055 = 0;
	var uLocal_5056 = 0;
	var uLocal_5057 = 0;
	var uLocal_5058 = 0;
	var uLocal_5059 = 0;
	var uLocal_5060 = 0;
	var uLocal_5061 = 0;
	var uLocal_5062 = 0;
	var uLocal_5063 = 0;
	var uLocal_5064 = 0;
	var uLocal_5065 = 0;
	var uLocal_5066 = 0;
	var uLocal_5067 = 0;
	var uLocal_5068 = 0;
	var uLocal_5069 = 0;
	var uLocal_5070 = 0;
	var uLocal_5071 = 0;
	var uLocal_5072 = 0;
	var uLocal_5073 = 0;
	var uLocal_5074 = 0;
	var uLocal_5075 = 0;
	var uLocal_5076 = 0;
	var uLocal_5077 = 0;
	var uLocal_5078 = 0;
	var uLocal_5079 = 0;
	var uLocal_5080 = 0;
	var uLocal_5081 = 0;
	var uLocal_5082 = 0;
	var uLocal_5083 = 0;
	var uLocal_5084 = 0;
	var uLocal_5085 = 0;
	var uLocal_5086 = 0;
	var uLocal_5087 = 0;
	var uLocal_5088 = 0;
	var uLocal_5089 = 0;
	var uLocal_5090 = 0;
	var uLocal_5091 = 0;
	var uLocal_5092 = 0;
	var uLocal_5093 = 0;
	var uLocal_5094 = 0;
	var uLocal_5095 = 0;
	var uLocal_5096 = 0;
	var uLocal_5097 = 0;
	var uLocal_5098 = 0;
	var uLocal_5099 = 0;
	var uLocal_5100 = 0;
	var uLocal_5101 = 0;
	var uLocal_5102 = 0;
	var uLocal_5103 = 0;
	var uLocal_5104 = 0;
	var uLocal_5105 = 0;
	var uLocal_5106 = 0;
	var uLocal_5107 = 0;
	var uLocal_5108 = 0;
	var uLocal_5109 = 0;
	var uLocal_5110 = 0;
	var uLocal_5111 = 0;
	var uLocal_5112 = 0;
	var uLocal_5113 = 0;
	var uLocal_5114 = 20;
	var uLocal_5115 = 0;
	var uLocal_5116 = 0;
	var uLocal_5117 = 0;
	var uLocal_5118 = 0;
	var uLocal_5119 = 0;
	var uLocal_5120 = 0;
	var uLocal_5121 = 0;
	var uLocal_5122 = 0;
	var uLocal_5123 = 0;
	var uLocal_5124 = 0;
	var uLocal_5125 = 0;
	var uLocal_5126 = 0;
	var uLocal_5127 = 0;
	var uLocal_5128 = 0;
	var uLocal_5129 = 0;
	var uLocal_5130 = 0;
	var uLocal_5131 = 0;
	var uLocal_5132 = 0;
	var uLocal_5133 = 0;
	var uLocal_5134 = 0;
	var uLocal_5135 = 0;
	var uLocal_5136 = 0;
	var uLocal_5137 = 0;
	var uLocal_5138 = 0;
	var uLocal_5139 = 0;
	var uLocal_5140 = 0;
	var uLocal_5141 = 0;
	var uLocal_5142 = 0;
	var uLocal_5143 = 0;
	var uLocal_5144 = 0;
	var uLocal_5145 = 0;
	var uLocal_5146 = 0;
	var uLocal_5147 = 0;
	var uLocal_5148 = 0;
	var uLocal_5149 = 0;
	var uLocal_5150 = 0;
	var uLocal_5151 = 0;
	var uLocal_5152 = 0;
	var uLocal_5153 = 0;
	var uLocal_5154 = 0;
	var uLocal_5155 = 0;
	var uLocal_5156 = 0;
	var uLocal_5157 = 0;
	var uLocal_5158 = 0;
	var uLocal_5159 = 0;
	var uLocal_5160 = 0;
	var uLocal_5161 = 0;
	var uLocal_5162 = 0;
	var uLocal_5163 = 0;
	var uLocal_5164 = 0;
	var uLocal_5165 = 0;
	var uLocal_5166 = 0;
	var uLocal_5167 = 0;
	var uLocal_5168 = 0;
	var uLocal_5169 = 0;
	var uLocal_5170 = 0;
	var uLocal_5171 = 0;
	var uLocal_5172 = 0;
	var uLocal_5173 = 0;
	var uLocal_5174 = 0;
	var uLocal_5175 = 0;
	var uLocal_5176 = 0;
	var uLocal_5177 = 0;
	var uLocal_5178 = 0;
	var uLocal_5179 = 0;
	var uLocal_5180 = 0;
	var uLocal_5181 = 20;
	var uLocal_5182 = 0;
	var uLocal_5183 = 0;
	var uLocal_5184 = 0;
	var uLocal_5185 = 0;
	var uLocal_5186 = 0;
	var uLocal_5187 = 0;
	var uLocal_5188 = 0;
	var uLocal_5189 = 0;
	var uLocal_5190 = 0;
	var uLocal_5191 = 0;
	var uLocal_5192 = 0;
	var uLocal_5193 = 0;
	var uLocal_5194 = 0;
	var uLocal_5195 = 0;
	var uLocal_5196 = 0;
	var uLocal_5197 = 0;
	var uLocal_5198 = 0;
	var uLocal_5199 = 0;
	var uLocal_5200 = 0;
	var uLocal_5201 = 0;
	var uLocal_5202 = 0;
	var uLocal_5203 = 0;
	var uLocal_5204 = 0;
	var uLocal_5205 = 0;
	var uLocal_5206 = 0;
	var uLocal_5207 = 0;
	var uLocal_5208 = 0;
	var uLocal_5209 = 0;
	var uLocal_5210 = 0;
	var uLocal_5211 = 0;
	var uLocal_5212 = 0;
	var uLocal_5213 = 0;
	var uLocal_5214 = 0;
	var uLocal_5215 = 0;
	var uLocal_5216 = 0;
	var uLocal_5217 = 0;
	var uLocal_5218 = 0;
	var uLocal_5219 = 0;
	var uLocal_5220 = 0;
	var uLocal_5221 = 0;
	var uLocal_5222 = 0;
	var uLocal_5223 = 0;
	var uLocal_5224 = 0;
	var uLocal_5225 = 0;
	var uLocal_5226 = 0;
	var uLocal_5227 = 0;
	var uLocal_5228 = 0;
	var uLocal_5229 = 0;
	var uLocal_5230 = 0;
	var uLocal_5231 = 0;
	var uLocal_5232 = 0;
	var uLocal_5233 = 0;
	var uLocal_5234 = 0;
	var uLocal_5235 = 0;
	var uLocal_5236 = 0;
	var uLocal_5237 = 0;
	var uLocal_5238 = 0;
	var uLocal_5239 = 0;
	var uLocal_5240 = 0;
	var uLocal_5241 = 0;
	var uLocal_5242 = 0;
	var uLocal_5243 = 0;
	var uLocal_5244 = 0;
	var uLocal_5245 = 0;
	var uLocal_5246 = 0;
	var uLocal_5247 = 0;
	var uLocal_5248 = 20;
	var uLocal_5249 = 0;
	var uLocal_5250 = 0;
	var uLocal_5251 = 0;
	var uLocal_5252 = 0;
	var uLocal_5253 = 0;
	var uLocal_5254 = 0;
	var uLocal_5255 = 0;
	var uLocal_5256 = 0;
	var uLocal_5257 = 0;
	var uLocal_5258 = 0;
	var uLocal_5259 = 0;
	var uLocal_5260 = 0;
	var uLocal_5261 = 0;
	var uLocal_5262 = 0;
	var uLocal_5263 = 0;
	var uLocal_5264 = 0;
	var uLocal_5265 = 0;
	var uLocal_5266 = 0;
	var uLocal_5267 = 0;
	var uLocal_5268 = 0;
	var uLocal_5269 = 0;
	var uLocal_5270 = 0;
	var uLocal_5271 = 0;
	var uLocal_5272 = 0;
	var uLocal_5273 = 0;
	var uLocal_5274 = 0;
	var uLocal_5275 = 0;
	var uLocal_5276 = 0;
	var uLocal_5277 = 0;
	var uLocal_5278 = 0;
	var uLocal_5279 = 0;
	var uLocal_5280 = 0;
	var uLocal_5281 = 0;
	var uLocal_5282 = 0;
	var uLocal_5283 = 0;
	var uLocal_5284 = 0;
	var uLocal_5285 = 0;
	var uLocal_5286 = 0;
	var uLocal_5287 = 0;
	var uLocal_5288 = 0;
	var uLocal_5289 = 0;
	var uLocal_5290 = 0;
	var uLocal_5291 = 0;
	var uLocal_5292 = 0;
	var uLocal_5293 = 0;
	var uLocal_5294 = 0;
	var uLocal_5295 = 0;
	var uLocal_5296 = 0;
	var uLocal_5297 = 0;
	var uLocal_5298 = 0;
	var uLocal_5299 = 0;
	var uLocal_5300 = 0;
	var uLocal_5301 = 0;
	var uLocal_5302 = 0;
	var uLocal_5303 = 0;
	var uLocal_5304 = 0;
	var uLocal_5305 = 0;
	var uLocal_5306 = 0;
	var uLocal_5307 = 0;
	var uLocal_5308 = 0;
	var uLocal_5309 = 0;
	var uLocal_5310 = 0;
	var uLocal_5311 = 0;
	var uLocal_5312 = 0;
	var uLocal_5313 = 0;
	var uLocal_5314 = 0;
	var uLocal_5315 = 20;
	var uLocal_5316 = 0;
	var uLocal_5317 = 0;
	var uLocal_5318 = 0;
	var uLocal_5319 = 0;
	var uLocal_5320 = 0;
	var uLocal_5321 = 0;
	var uLocal_5322 = 0;
	var uLocal_5323 = 0;
	var uLocal_5324 = 0;
	var uLocal_5325 = 0;
	var uLocal_5326 = 0;
	var uLocal_5327 = 0;
	var uLocal_5328 = 0;
	var uLocal_5329 = 0;
	var uLocal_5330 = 0;
	var uLocal_5331 = 0;
	var uLocal_5332 = 0;
	var uLocal_5333 = 0;
	var uLocal_5334 = 0;
	var uLocal_5335 = 0;
	var uLocal_5336 = 0;
	var uLocal_5337 = 0;
	var uLocal_5338 = 0;
	var uLocal_5339 = 0;
	var uLocal_5340 = 0;
	var uLocal_5341 = 0;
	var uLocal_5342 = 0;
	var uLocal_5343 = 0;
	var uLocal_5344 = 0;
	var uLocal_5345 = 0;
	var uLocal_5346 = 0;
	var uLocal_5347 = 0;
	var uLocal_5348 = 0;
	var uLocal_5349 = 0;
	var uLocal_5350 = 0;
	var uLocal_5351 = 0;
	var uLocal_5352 = 0;
	var uLocal_5353 = 0;
	var uLocal_5354 = 0;
	var uLocal_5355 = 0;
	var uLocal_5356 = 0;
	var uLocal_5357 = 0;
	var uLocal_5358 = 0;
	var uLocal_5359 = 0;
	var uLocal_5360 = 0;
	var uLocal_5361 = 0;
	var uLocal_5362 = 0;
	var uLocal_5363 = 0;
	var uLocal_5364 = 0;
	var uLocal_5365 = 0;
	var uLocal_5366 = 0;
	var uLocal_5367 = 0;
	var uLocal_5368 = 0;
	var uLocal_5369 = 0;
	var uLocal_5370 = 0;
	var uLocal_5371 = 0;
	var uLocal_5372 = 0;
	var uLocal_5373 = 0;
	var uLocal_5374 = 0;
	var uLocal_5375 = 0;
	var uLocal_5376 = 0;
	var uLocal_5377 = 0;
	var uLocal_5378 = 0;
	var uLocal_5379 = 0;
	var uLocal_5380 = 0;
	var uLocal_5381 = 0;
	var uLocal_5382 = 20;
	var uLocal_5383 = 0;
	var uLocal_5384 = 0;
	var uLocal_5385 = 0;
	var uLocal_5386 = 0;
	var uLocal_5387 = 0;
	var uLocal_5388 = 0;
	var uLocal_5389 = 0;
	var uLocal_5390 = 0;
	var uLocal_5391 = 0;
	var uLocal_5392 = 0;
	var uLocal_5393 = 0;
	var uLocal_5394 = 0;
	var uLocal_5395 = 0;
	var uLocal_5396 = 0;
	var uLocal_5397 = 0;
	var uLocal_5398 = 0;
	var uLocal_5399 = 0;
	var uLocal_5400 = 0;
	var uLocal_5401 = 0;
	var uLocal_5402 = 0;
	var uLocal_5403 = 0;
	var uLocal_5404 = 0;
	var uLocal_5405 = 0;
	var uLocal_5406 = 0;
	var uLocal_5407 = 0;
	var uLocal_5408 = 0;
	var uLocal_5409 = 0;
	var uLocal_5410 = 0;
	var uLocal_5411 = 0;
	var uLocal_5412 = 0;
	var uLocal_5413 = 0;
	var uLocal_5414 = 0;
	var uLocal_5415 = 0;
	var uLocal_5416 = 0;
	var uLocal_5417 = 0;
	var uLocal_5418 = 0;
	var uLocal_5419 = 0;
	var uLocal_5420 = 0;
	var uLocal_5421 = 0;
	var uLocal_5422 = 0;
	var uLocal_5423 = 0;
	var uLocal_5424 = 0;
	var uLocal_5425 = 0;
	var uLocal_5426 = 0;
	var uLocal_5427 = 0;
	var uLocal_5428 = 0;
	var uLocal_5429 = 0;
	var uLocal_5430 = 0;
	var uLocal_5431 = 0;
	var uLocal_5432 = 0;
	var uLocal_5433 = 0;
	var uLocal_5434 = 0;
	var uLocal_5435 = 0;
	var uLocal_5436 = 0;
	var uLocal_5437 = 0;
	var uLocal_5438 = 0;
	var uLocal_5439 = 0;
	var uLocal_5440 = 0;
	var uLocal_5441 = 0;
	var uLocal_5442 = 0;
	var uLocal_5443 = 0;
	var uLocal_5444 = 0;
	var uLocal_5445 = 0;
	var uLocal_5446 = 0;
	var uLocal_5447 = 0;
	var uLocal_5448 = 0;
	var uLocal_5449 = 20;
	var uLocal_5450 = 0;
	var uLocal_5451 = 0;
	var uLocal_5452 = 0;
	var uLocal_5453 = 0;
	var uLocal_5454 = 0;
	var uLocal_5455 = 0;
	var uLocal_5456 = 0;
	var uLocal_5457 = 0;
	var uLocal_5458 = 0;
	var uLocal_5459 = 0;
	var uLocal_5460 = 0;
	var uLocal_5461 = 0;
	var uLocal_5462 = 0;
	var uLocal_5463 = 0;
	var uLocal_5464 = 0;
	var uLocal_5465 = 0;
	var uLocal_5466 = 0;
	var uLocal_5467 = 0;
	var uLocal_5468 = 0;
	var uLocal_5469 = 0;
	var uLocal_5470 = 0;
	var uLocal_5471 = 0;
	var uLocal_5472 = 0;
	var uLocal_5473 = 0;
	var uLocal_5474 = 0;
	var uLocal_5475 = 0;
	var uLocal_5476 = 0;
	var uLocal_5477 = 0;
	var uLocal_5478 = 0;
	var uLocal_5479 = 0;
	var uLocal_5480 = 0;
	var uLocal_5481 = 0;
	var uLocal_5482 = 0;
	var uLocal_5483 = 0;
	var uLocal_5484 = 0;
	var uLocal_5485 = 0;
	var uLocal_5486 = 0;
	var uLocal_5487 = 0;
	var uLocal_5488 = 0;
	var uLocal_5489 = 0;
	var uLocal_5490 = 0;
	var uLocal_5491 = 0;
	var uLocal_5492 = 0;
	var uLocal_5493 = 0;
	var uLocal_5494 = 0;
	var uLocal_5495 = 0;
	var uLocal_5496 = 0;
	var uLocal_5497 = 0;
	var uLocal_5498 = 0;
	var uLocal_5499 = 0;
	var uLocal_5500 = 0;
	var uLocal_5501 = 0;
	var uLocal_5502 = 0;
	var uLocal_5503 = 0;
	var uLocal_5504 = 0;
	var uLocal_5505 = 0;
	var uLocal_5506 = 0;
	var uLocal_5507 = 0;
	var uLocal_5508 = 0;
	var uLocal_5509 = 0;
	var uLocal_5510 = 0;
	var uLocal_5511 = 0;
	var uLocal_5512 = 0;
	var uLocal_5513 = 0;
	var uLocal_5514 = 0;
	var uLocal_5515 = 0;
	var uLocal_5516 = 20;
	var uLocal_5517 = 0;
	var uLocal_5518 = 0;
	var uLocal_5519 = 0;
	var uLocal_5520 = 0;
	var uLocal_5521 = 0;
	var uLocal_5522 = 0;
	var uLocal_5523 = 0;
	var uLocal_5524 = 0;
	var uLocal_5525 = 0;
	var uLocal_5526 = 0;
	var uLocal_5527 = 0;
	var uLocal_5528 = 0;
	var uLocal_5529 = 0;
	var uLocal_5530 = 0;
	var uLocal_5531 = 0;
	var uLocal_5532 = 0;
	var uLocal_5533 = 0;
	var uLocal_5534 = 0;
	var uLocal_5535 = 0;
	var uLocal_5536 = 0;
	var uLocal_5537 = 0;
	var uLocal_5538 = 0;
	var uLocal_5539 = 0;
	var uLocal_5540 = 0;
	var uLocal_5541 = 0;
	var uLocal_5542 = 0;
	var uLocal_5543 = 0;
	var uLocal_5544 = 0;
	var uLocal_5545 = 0;
	var uLocal_5546 = 0;
	var uLocal_5547 = 0;
	var uLocal_5548 = 0;
	var uLocal_5549 = 0;
	var uLocal_5550 = 0;
	var uLocal_5551 = 0;
	var uLocal_5552 = 0;
	var uLocal_5553 = 0;
	var uLocal_5554 = 0;
	var uLocal_5555 = 0;
	var uLocal_5556 = 0;
	var uLocal_5557 = 0;
	var uLocal_5558 = 0;
	var uLocal_5559 = 0;
	var uLocal_5560 = 0;
	var uLocal_5561 = 0;
	var uLocal_5562 = 0;
	var uLocal_5563 = 0;
	var uLocal_5564 = 0;
	var uLocal_5565 = 0;
	var uLocal_5566 = 0;
	var uLocal_5567 = 0;
	var uLocal_5568 = 0;
	var uLocal_5569 = 0;
	var uLocal_5570 = 0;
	var uLocal_5571 = 0;
	var uLocal_5572 = 0;
	var uLocal_5573 = 0;
	var uLocal_5574 = 0;
	var uLocal_5575 = 0;
	var uLocal_5576 = 0;
	var uLocal_5577 = 0;
	var uLocal_5578 = 0;
	var uLocal_5579 = 0;
	var uLocal_5580 = 0;
	var uLocal_5581 = 0;
	var uLocal_5582 = 0;
	var uLocal_5583 = 20;
	var uLocal_5584 = 0;
	var uLocal_5585 = 0;
	var uLocal_5586 = 0;
	var uLocal_5587 = 0;
	var uLocal_5588 = 0;
	var uLocal_5589 = 0;
	var uLocal_5590 = 0;
	var uLocal_5591 = 0;
	var uLocal_5592 = 0;
	var uLocal_5593 = 0;
	var uLocal_5594 = 0;
	var uLocal_5595 = 0;
	var uLocal_5596 = 0;
	var uLocal_5597 = 0;
	var uLocal_5598 = 0;
	var uLocal_5599 = 0;
	var uLocal_5600 = 0;
	var uLocal_5601 = 0;
	var uLocal_5602 = 0;
	var uLocal_5603 = 0;
	var uLocal_5604 = 0;
	var uLocal_5605 = 0;
	var uLocal_5606 = 0;
	var uLocal_5607 = 0;
	var uLocal_5608 = 0;
	var uLocal_5609 = 0;
	var uLocal_5610 = 0;
	var uLocal_5611 = 0;
	var uLocal_5612 = 0;
	var uLocal_5613 = 0;
	var uLocal_5614 = 0;
	var uLocal_5615 = 0;
	var uLocal_5616 = 0;
	var uLocal_5617 = 0;
	var uLocal_5618 = 0;
	var uLocal_5619 = 0;
	var uLocal_5620 = 0;
	var uLocal_5621 = 0;
	var uLocal_5622 = 0;
	var uLocal_5623 = 0;
	var uLocal_5624 = 0;
	var uLocal_5625 = 0;
	var uLocal_5626 = 0;
	var uLocal_5627 = 0;
	var uLocal_5628 = 0;
	var uLocal_5629 = 0;
	var uLocal_5630 = 0;
	var uLocal_5631 = 0;
	var uLocal_5632 = 0;
	var uLocal_5633 = 0;
	var uLocal_5634 = 0;
	var uLocal_5635 = 0;
	var uLocal_5636 = 0;
	var uLocal_5637 = 0;
	var uLocal_5638 = 0;
	var uLocal_5639 = 0;
	var uLocal_5640 = 0;
	var uLocal_5641 = 0;
	var uLocal_5642 = 0;
	var uLocal_5643 = 0;
	var uLocal_5644 = 0;
	var uLocal_5645 = 0;
	var uLocal_5646 = 0;
	var uLocal_5647 = 0;
	var uLocal_5648 = 0;
	var uLocal_5649 = 0;
	var uLocal_5650 = 20;
	var uLocal_5651 = 0;
	var uLocal_5652 = 0;
	var uLocal_5653 = 0;
	var uLocal_5654 = 0;
	var uLocal_5655 = 0;
	var uLocal_5656 = 0;
	var uLocal_5657 = 0;
	var uLocal_5658 = 0;
	var uLocal_5659 = 0;
	var uLocal_5660 = 0;
	var uLocal_5661 = 0;
	var uLocal_5662 = 0;
	var uLocal_5663 = 0;
	var uLocal_5664 = 0;
	var uLocal_5665 = 0;
	var uLocal_5666 = 0;
	var uLocal_5667 = 0;
	var uLocal_5668 = 0;
	var uLocal_5669 = 0;
	var uLocal_5670 = 0;
	var uLocal_5671 = 0;
	var uLocal_5672 = 0;
	var uLocal_5673 = 0;
	var uLocal_5674 = 0;
	var uLocal_5675 = 0;
	var uLocal_5676 = 0;
	var uLocal_5677 = 0;
	var uLocal_5678 = 0;
	var uLocal_5679 = 0;
	var uLocal_5680 = 0;
	var uLocal_5681 = 0;
	var uLocal_5682 = 0;
	var uLocal_5683 = 0;
	var uLocal_5684 = 0;
	var uLocal_5685 = 0;
	var uLocal_5686 = 0;
	var uLocal_5687 = 0;
	var uLocal_5688 = 0;
	var uLocal_5689 = 0;
	var uLocal_5690 = 0;
	var uLocal_5691 = 0;
	var uLocal_5692 = 0;
	var uLocal_5693 = 0;
	var uLocal_5694 = 0;
	var uLocal_5695 = 0;
	var uLocal_5696 = 0;
	var uLocal_5697 = 0;
	var uLocal_5698 = 0;
	var uLocal_5699 = 0;
	var uLocal_5700 = 0;
	var uLocal_5701 = 0;
	var uLocal_5702 = 0;
	var uLocal_5703 = 0;
	var uLocal_5704 = 0;
	var uLocal_5705 = 0;
	var uLocal_5706 = 0;
	var uLocal_5707 = 0;
	var uLocal_5708 = 0;
	var uLocal_5709 = 0;
	var uLocal_5710 = 0;
	var uLocal_5711 = 0;
	var uLocal_5712 = 0;
	var uLocal_5713 = 0;
	var uLocal_5714 = 0;
	var uLocal_5715 = 0;
	var uLocal_5716 = 0;
	var uLocal_5717 = 20;
	var uLocal_5718 = 0;
	var uLocal_5719 = 0;
	var uLocal_5720 = 0;
	var uLocal_5721 = 0;
	var uLocal_5722 = 0;
	var uLocal_5723 = 0;
	var uLocal_5724 = 0;
	var uLocal_5725 = 0;
	var uLocal_5726 = 0;
	var uLocal_5727 = 0;
	var uLocal_5728 = 0;
	var uLocal_5729 = 0;
	var uLocal_5730 = 0;
	var uLocal_5731 = 0;
	var uLocal_5732 = 0;
	var uLocal_5733 = 0;
	var uLocal_5734 = 0;
	var uLocal_5735 = 0;
	var uLocal_5736 = 0;
	var uLocal_5737 = 0;
	var uLocal_5738 = 0;
	var uLocal_5739 = 0;
	var uLocal_5740 = 0;
	var uLocal_5741 = 0;
	var uLocal_5742 = 0;
	var uLocal_5743 = 0;
	var uLocal_5744 = 0;
	var uLocal_5745 = 0;
	var uLocal_5746 = 0;
	var uLocal_5747 = 0;
	var uLocal_5748 = 0;
	var uLocal_5749 = 0;
	var uLocal_5750 = 0;
	var uLocal_5751 = 0;
	var uLocal_5752 = 0;
	var uLocal_5753 = 0;
	var uLocal_5754 = 0;
	var uLocal_5755 = 0;
	var uLocal_5756 = 0;
	var uLocal_5757 = 0;
	var uLocal_5758 = 0;
	var uLocal_5759 = 0;
	var uLocal_5760 = 0;
	var uLocal_5761 = 0;
	var uLocal_5762 = 0;
	var uLocal_5763 = 0;
	var uLocal_5764 = 0;
	var uLocal_5765 = 0;
	var uLocal_5766 = 0;
	var uLocal_5767 = 0;
	var uLocal_5768 = 0;
	var uLocal_5769 = 0;
	var uLocal_5770 = 0;
	var uLocal_5771 = 0;
	var uLocal_5772 = 0;
	var uLocal_5773 = 0;
	var uLocal_5774 = 0;
	var uLocal_5775 = 0;
	var uLocal_5776 = 0;
	var uLocal_5777 = 0;
	var uLocal_5778 = 0;
	var uLocal_5779 = 0;
	var uLocal_5780 = 0;
	var uLocal_5781 = 0;
	var uLocal_5782 = 0;
	var uLocal_5783 = 0;
	var uLocal_5784 = 20;
	var uLocal_5785 = 0;
	var uLocal_5786 = 0;
	var uLocal_5787 = 0;
	var uLocal_5788 = 0;
	var uLocal_5789 = 0;
	var uLocal_5790 = 0;
	var uLocal_5791 = 0;
	var uLocal_5792 = 0;
	var uLocal_5793 = 0;
	var uLocal_5794 = 0;
	var uLocal_5795 = 0;
	var uLocal_5796 = 0;
	var uLocal_5797 = 0;
	var uLocal_5798 = 0;
	var uLocal_5799 = 0;
	var uLocal_5800 = 0;
	var uLocal_5801 = 0;
	var uLocal_5802 = 0;
	var uLocal_5803 = 0;
	var uLocal_5804 = 0;
	var uLocal_5805 = 0;
	var uLocal_5806 = 0;
	var uLocal_5807 = 0;
	var uLocal_5808 = 0;
	var uLocal_5809 = 0;
	var uLocal_5810 = 0;
	var uLocal_5811 = 0;
	var uLocal_5812 = 0;
	var uLocal_5813 = 0;
	var uLocal_5814 = 0;
	var uLocal_5815 = 0;
	var uLocal_5816 = 0;
	var uLocal_5817 = 0;
	var uLocal_5818 = 0;
	var uLocal_5819 = 0;
	var uLocal_5820 = 0;
	var uLocal_5821 = 0;
	var uLocal_5822 = 0;
	var uLocal_5823 = 0;
	var uLocal_5824 = 0;
	var uLocal_5825 = 0;
	var uLocal_5826 = 0;
	var uLocal_5827 = 0;
	var uLocal_5828 = 0;
	var uLocal_5829 = 0;
	var uLocal_5830 = 0;
	var uLocal_5831 = 0;
	var uLocal_5832 = 0;
	var uLocal_5833 = 0;
	var uLocal_5834 = 0;
	var uLocal_5835 = 0;
	var uLocal_5836 = 0;
	var uLocal_5837 = 0;
	var uLocal_5838 = 0;
	var uLocal_5839 = 0;
	var uLocal_5840 = 0;
	var uLocal_5841 = 0;
	var uLocal_5842 = 0;
	var uLocal_5843 = 0;
	var uLocal_5844 = 0;
	var uLocal_5845 = 0;
	var uLocal_5846 = 0;
	var uLocal_5847 = 0;
	var uLocal_5848 = 0;
	var uLocal_5849 = 0;
	var uLocal_5850 = 0;
	var uLocal_5851 = 20;
	var uLocal_5852 = 0;
	var uLocal_5853 = 0;
	var uLocal_5854 = 0;
	var uLocal_5855 = 0;
	var uLocal_5856 = 0;
	var uLocal_5857 = 0;
	var uLocal_5858 = 0;
	var uLocal_5859 = 0;
	var uLocal_5860 = 0;
	var uLocal_5861 = 0;
	var uLocal_5862 = 0;
	var uLocal_5863 = 0;
	var uLocal_5864 = 0;
	var uLocal_5865 = 0;
	var uLocal_5866 = 0;
	var uLocal_5867 = 0;
	var uLocal_5868 = 0;
	var uLocal_5869 = 0;
	var uLocal_5870 = 0;
	var uLocal_5871 = 0;
	var uLocal_5872 = 0;
	var uLocal_5873 = 0;
	var uLocal_5874 = 0;
	var uLocal_5875 = 0;
	var uLocal_5876 = 0;
	var uLocal_5877 = 0;
	var uLocal_5878 = 0;
	var uLocal_5879 = 0;
	var uLocal_5880 = 0;
	var uLocal_5881 = 0;
	var uLocal_5882 = 0;
	var uLocal_5883 = 0;
	var uLocal_5884 = 0;
	var uLocal_5885 = 0;
	var uLocal_5886 = 0;
	var uLocal_5887 = 0;
	var uLocal_5888 = 0;
	var uLocal_5889 = 0;
	var uLocal_5890 = 0;
	var uLocal_5891 = 0;
	var uLocal_5892 = 0;
	var uLocal_5893 = 0;
	var uLocal_5894 = 0;
	var uLocal_5895 = 0;
	var uLocal_5896 = 0;
	var uLocal_5897 = 0;
	var uLocal_5898 = 0;
	var uLocal_5899 = 0;
	var uLocal_5900 = 0;
	var uLocal_5901 = 0;
	var uLocal_5902 = 0;
	var uLocal_5903 = 0;
	var uLocal_5904 = 0;
	var uLocal_5905 = 0;
	var uLocal_5906 = 0;
	var uLocal_5907 = 0;
	var uLocal_5908 = 0;
	var uLocal_5909 = 0;
	var uLocal_5910 = 0;
	var uLocal_5911 = 0;
	var uLocal_5912 = 0;
	var uLocal_5913 = 0;
	var uLocal_5914 = 0;
	var uLocal_5915 = 0;
	var uLocal_5916 = 0;
	var uLocal_5917 = 0;
	var uLocal_5918 = 20;
	var uLocal_5919 = 0;
	var uLocal_5920 = 0;
	var uLocal_5921 = 0;
	var uLocal_5922 = 0;
	var uLocal_5923 = 0;
	var uLocal_5924 = 0;
	var uLocal_5925 = 0;
	var uLocal_5926 = 0;
	var uLocal_5927 = 0;
	var uLocal_5928 = 0;
	var uLocal_5929 = 0;
	var uLocal_5930 = 0;
	var uLocal_5931 = 0;
	var uLocal_5932 = 0;
	var uLocal_5933 = 0;
	var uLocal_5934 = 0;
	var uLocal_5935 = 0;
	var uLocal_5936 = 0;
	var uLocal_5937 = 0;
	var uLocal_5938 = 0;
	var uLocal_5939 = 0;
	var uLocal_5940 = 0;
	var uLocal_5941 = 0;
	var uLocal_5942 = 0;
	var uLocal_5943 = 0;
	var uLocal_5944 = 0;
	var uLocal_5945 = 0;
	var uLocal_5946 = 0;
	var uLocal_5947 = 0;
	var uLocal_5948 = 0;
	var uLocal_5949 = 0;
	var uLocal_5950 = 0;
	var uLocal_5951 = 0;
	var uLocal_5952 = 0;
	var uLocal_5953 = 0;
	var uLocal_5954 = 0;
	var uLocal_5955 = 0;
	var uLocal_5956 = 0;
	var uLocal_5957 = 0;
	var uLocal_5958 = 0;
	var uLocal_5959 = 0;
	var uLocal_5960 = 0;
	var uLocal_5961 = 0;
	var uLocal_5962 = 0;
	var uLocal_5963 = 0;
	var uLocal_5964 = 0;
	var uLocal_5965 = 0;
	var uLocal_5966 = 0;
	var uLocal_5967 = 0;
	var uLocal_5968 = 0;
	var uLocal_5969 = 0;
	var uLocal_5970 = 0;
	var uLocal_5971 = 0;
	var uLocal_5972 = 0;
	var uLocal_5973 = 0;
	var uLocal_5974 = 0;
	var uLocal_5975 = 0;
	var uLocal_5976 = 0;
	var uLocal_5977 = 0;
	var uLocal_5978 = 0;
	var uLocal_5979 = 0;
	var uLocal_5980 = 0;
	var uLocal_5981 = 0;
	var uLocal_5982 = 0;
	var uLocal_5983 = 0;
	var uLocal_5984 = 0;
	var uLocal_5985 = 20;
	var uLocal_5986 = 0;
	var uLocal_5987 = 0;
	var uLocal_5988 = 0;
	var uLocal_5989 = 0;
	var uLocal_5990 = 0;
	var uLocal_5991 = 0;
	var uLocal_5992 = 0;
	var uLocal_5993 = 0;
	var uLocal_5994 = 0;
	var uLocal_5995 = 0;
	var uLocal_5996 = 0;
	var uLocal_5997 = 0;
	var uLocal_5998 = 0;
	var uLocal_5999 = 0;
	var uLocal_6000 = 0;
	var uLocal_6001 = 0;
	var uLocal_6002 = 0;
	var uLocal_6003 = 0;
	var uLocal_6004 = 0;
	var uLocal_6005 = 0;
	var uLocal_6006 = 0;
	var uLocal_6007 = 0;
	var uLocal_6008 = 0;
	var uLocal_6009 = 0;
	var uLocal_6010 = 0;
	var uLocal_6011 = 0;
	var uLocal_6012 = 0;
	var uLocal_6013 = 0;
	var uLocal_6014 = 0;
	var uLocal_6015 = 0;
	var uLocal_6016 = 0;
	var uLocal_6017 = 0;
	var uLocal_6018 = 0;
	var uLocal_6019 = 0;
	var uLocal_6020 = 0;
	var uLocal_6021 = 0;
	var uLocal_6022 = 0;
	var uLocal_6023 = 0;
	var uLocal_6024 = 0;
	var uLocal_6025 = 0;
	var uLocal_6026 = 0;
	var uLocal_6027 = 0;
	var uLocal_6028 = 0;
	var uLocal_6029 = 0;
	var uLocal_6030 = 0;
	var uLocal_6031 = 0;
	var uLocal_6032 = 0;
	var uLocal_6033 = 0;
	var uLocal_6034 = 0;
	var uLocal_6035 = 0;
	var uLocal_6036 = 0;
	var uLocal_6037 = 0;
	var uLocal_6038 = 0;
	var uLocal_6039 = 0;
	var uLocal_6040 = 0;
	var uLocal_6041 = 0;
	var uLocal_6042 = 0;
	var uLocal_6043 = 0;
	var uLocal_6044 = 0;
	var uLocal_6045 = 0;
	var uLocal_6046 = 0;
	var uLocal_6047 = 0;
	var uLocal_6048 = 0;
	var uLocal_6049 = 0;
	var uLocal_6050 = 0;
	var uLocal_6051 = 0;
	var uLocal_6052 = 20;
	var uLocal_6053 = 0;
	var uLocal_6054 = 0;
	var uLocal_6055 = 0;
	var uLocal_6056 = 0;
	var uLocal_6057 = 0;
	var uLocal_6058 = 0;
	var uLocal_6059 = 0;
	var uLocal_6060 = 0;
	var uLocal_6061 = 0;
	var uLocal_6062 = 0;
	var uLocal_6063 = 0;
	var uLocal_6064 = 0;
	var uLocal_6065 = 0;
	var uLocal_6066 = 0;
	var uLocal_6067 = 0;
	var uLocal_6068 = 0;
	var uLocal_6069 = 0;
	var uLocal_6070 = 0;
	var uLocal_6071 = 0;
	var uLocal_6072 = 0;
	var uLocal_6073 = 0;
	var uLocal_6074 = 0;
	var uLocal_6075 = 0;
	var uLocal_6076 = 0;
	var uLocal_6077 = 0;
	var uLocal_6078 = 0;
	var uLocal_6079 = 0;
	var uLocal_6080 = 0;
	var uLocal_6081 = 0;
	var uLocal_6082 = 0;
	var uLocal_6083 = 0;
	var uLocal_6084 = 0;
	var uLocal_6085 = 0;
	var uLocal_6086 = 0;
	var uLocal_6087 = 0;
	var uLocal_6088 = 0;
	var uLocal_6089 = 0;
	var uLocal_6090 = 0;
	var uLocal_6091 = 0;
	var uLocal_6092 = 0;
	var uLocal_6093 = 0;
	var uLocal_6094 = 0;
	var uLocal_6095 = 0;
	var uLocal_6096 = 0;
	var uLocal_6097 = 0;
	var uLocal_6098 = 0;
	var uLocal_6099 = 0;
	var uLocal_6100 = 0;
	var uLocal_6101 = 0;
	var uLocal_6102 = 0;
	var uLocal_6103 = 0;
	var uLocal_6104 = 0;
	var uLocal_6105 = 0;
	var uLocal_6106 = 0;
	var uLocal_6107 = 0;
	var uLocal_6108 = 0;
	var uLocal_6109 = 0;
	var uLocal_6110 = 0;
	var uLocal_6111 = 0;
	var uLocal_6112 = 0;
	var uLocal_6113 = 0;
	var uLocal_6114 = 0;
	var uLocal_6115 = 0;
	var uLocal_6116 = 0;
	var uLocal_6117 = 0;
	var uLocal_6118 = 0;
	var uLocal_6119 = 20;
	var uLocal_6120 = 0;
	var uLocal_6121 = 0;
	var uLocal_6122 = 0;
	var uLocal_6123 = 0;
	var uLocal_6124 = 0;
	var uLocal_6125 = 0;
	var uLocal_6126 = 0;
	var uLocal_6127 = 0;
	var uLocal_6128 = 0;
	var uLocal_6129 = 0;
	var uLocal_6130 = 0;
	var uLocal_6131 = 0;
	var uLocal_6132 = 0;
	var uLocal_6133 = 0;
	var uLocal_6134 = 0;
	var uLocal_6135 = 0;
	var uLocal_6136 = 0;
	var uLocal_6137 = 0;
	var uLocal_6138 = 0;
	var uLocal_6139 = 0;
	var uLocal_6140 = 0;
	var uLocal_6141 = 0;
	var uLocal_6142 = 0;
	var uLocal_6143 = 0;
	var uLocal_6144 = 0;
	var uLocal_6145 = 0;
	var uLocal_6146 = 0;
	var uLocal_6147 = 0;
	var uLocal_6148 = 0;
	var uLocal_6149 = 0;
	var uLocal_6150 = 0;
	var uLocal_6151 = 0;
	var uLocal_6152 = 0;
	var uLocal_6153 = 0;
	var uLocal_6154 = 0;
	var uLocal_6155 = 0;
	var uLocal_6156 = 0;
	var uLocal_6157 = 0;
	var uLocal_6158 = 0;
	var uLocal_6159 = 0;
	var uLocal_6160 = 0;
	var uLocal_6161 = 0;
	var uLocal_6162 = 0;
	var uLocal_6163 = 0;
	var uLocal_6164 = 0;
	var uLocal_6165 = 0;
	var uLocal_6166 = 0;
	var uLocal_6167 = 0;
	var uLocal_6168 = 0;
	var uLocal_6169 = 0;
	var uLocal_6170 = 0;
	var uLocal_6171 = 0;
	var uLocal_6172 = 0;
	var uLocal_6173 = 0;
	var uLocal_6174 = 0;
	var uLocal_6175 = 0;
	var uLocal_6176 = 0;
	var uLocal_6177 = 0;
	var uLocal_6178 = 0;
	var uLocal_6179 = 0;
	var uLocal_6180 = 0;
	var uLocal_6181 = 0;
	var uLocal_6182 = 0;
	var uLocal_6183 = 0;
	var uLocal_6184 = 0;
	var uLocal_6185 = 0;
	var uLocal_6186 = 20;
	var uLocal_6187 = 0;
	var uLocal_6188 = 0;
	var uLocal_6189 = 0;
	var uLocal_6190 = 0;
	var uLocal_6191 = 0;
	var uLocal_6192 = 0;
	var uLocal_6193 = 0;
	var uLocal_6194 = 0;
	var uLocal_6195 = 0;
	var uLocal_6196 = 0;
	var uLocal_6197 = 0;
	var uLocal_6198 = 0;
	var uLocal_6199 = 0;
	var uLocal_6200 = 0;
	var uLocal_6201 = 0;
	var uLocal_6202 = 0;
	var uLocal_6203 = 0;
	var uLocal_6204 = 0;
	var uLocal_6205 = 0;
	var uLocal_6206 = 0;
	var uLocal_6207 = 0;
	var uLocal_6208 = 0;
	var uLocal_6209 = 0;
	var uLocal_6210 = 0;
	var uLocal_6211 = 0;
	var uLocal_6212 = 0;
	var uLocal_6213 = 0;
	var uLocal_6214 = 0;
	var uLocal_6215 = 0;
	var uLocal_6216 = 0;
	var uLocal_6217 = 0;
	var uLocal_6218 = 0;
	var uLocal_6219 = 0;
	var uLocal_6220 = 0;
	var uLocal_6221 = 0;
	var uLocal_6222 = 0;
	var uLocal_6223 = 0;
	var uLocal_6224 = 0;
	var uLocal_6225 = 0;
	var uLocal_6226 = 0;
	var uLocal_6227 = 0;
	var uLocal_6228 = 0;
	var uLocal_6229 = 0;
	var uLocal_6230 = 0;
	var uLocal_6231 = 0;
	var uLocal_6232 = 0;
	var uLocal_6233 = 0;
	var uLocal_6234 = 0;
	var uLocal_6235 = 0;
	var uLocal_6236 = 0;
	var uLocal_6237 = 0;
	var uLocal_6238 = 0;
	var uLocal_6239 = 0;
	var uLocal_6240 = 0;
	var uLocal_6241 = 0;
	var uLocal_6242 = 0;
	var uLocal_6243 = 0;
	var uLocal_6244 = 0;
	var uLocal_6245 = 0;
	var uLocal_6246 = 0;
	var uLocal_6247 = 0;
	var uLocal_6248 = 0;
	var uLocal_6249 = 0;
	var uLocal_6250 = 0;
	var uLocal_6251 = 0;
	var uLocal_6252 = 0;
	var uLocal_6253 = 20;
	var uLocal_6254 = 0;
	var uLocal_6255 = 0;
	var uLocal_6256 = 0;
	var uLocal_6257 = 0;
	var uLocal_6258 = 0;
	var uLocal_6259 = 0;
	var uLocal_6260 = 0;
	var uLocal_6261 = 0;
	var uLocal_6262 = 0;
	var uLocal_6263 = 0;
	var uLocal_6264 = 0;
	var uLocal_6265 = 0;
	var uLocal_6266 = 0;
	var uLocal_6267 = 0;
	var uLocal_6268 = 0;
	var uLocal_6269 = 0;
	var uLocal_6270 = 0;
	var uLocal_6271 = 0;
	var uLocal_6272 = 0;
	var uLocal_6273 = 0;
	var uLocal_6274 = 0;
	var uLocal_6275 = 0;
	var uLocal_6276 = 0;
	var uLocal_6277 = 0;
	var uLocal_6278 = 0;
	var uLocal_6279 = 0;
	var uLocal_6280 = 0;
	var uLocal_6281 = 0;
	var uLocal_6282 = 0;
	var uLocal_6283 = 0;
	var uLocal_6284 = 0;
	var uLocal_6285 = 0;
	var uLocal_6286 = 0;
	var uLocal_6287 = 0;
	var uLocal_6288 = 0;
	var uLocal_6289 = 0;
	var uLocal_6290 = 0;
	var uLocal_6291 = 0;
	var uLocal_6292 = 0;
	var uLocal_6293 = 0;
	var uLocal_6294 = 0;
	var uLocal_6295 = 0;
	var uLocal_6296 = 0;
	var uLocal_6297 = 0;
	var uLocal_6298 = 0;
	var uLocal_6299 = 0;
	var uLocal_6300 = 0;
	var uLocal_6301 = 0;
	var uLocal_6302 = 0;
	var uLocal_6303 = 0;
	var uLocal_6304 = 0;
	var uLocal_6305 = 0;
	var uLocal_6306 = 0;
	var uLocal_6307 = 0;
	var uLocal_6308 = 0;
	var uLocal_6309 = 0;
	var uLocal_6310 = 0;
	var uLocal_6311 = 0;
	var uLocal_6312 = 0;
	var uLocal_6313 = 0;
	var uLocal_6314 = 0;
	var uLocal_6315 = 0;
	var uLocal_6316 = 0;
	var uLocal_6317 = 0;
	var uLocal_6318 = 0;
	var uLocal_6319 = 0;
	var uLocal_6320 = 20;
	var uLocal_6321 = 0;
	var uLocal_6322 = 0;
	var uLocal_6323 = 0;
	var uLocal_6324 = 0;
	var uLocal_6325 = 0;
	var uLocal_6326 = 0;
	var uLocal_6327 = 0;
	var uLocal_6328 = 0;
	var uLocal_6329 = 0;
	var uLocal_6330 = 0;
	var uLocal_6331 = 0;
	var uLocal_6332 = 0;
	var uLocal_6333 = 0;
	var uLocal_6334 = 0;
	var uLocal_6335 = 0;
	var uLocal_6336 = 0;
	var uLocal_6337 = 0;
	var uLocal_6338 = 0;
	var uLocal_6339 = 0;
	var uLocal_6340 = 0;
	var uLocal_6341 = 0;
	var uLocal_6342 = 0;
	var uLocal_6343 = 0;
	var uLocal_6344 = 0;
	var uLocal_6345 = 0;
	var uLocal_6346 = 0;
	var uLocal_6347 = 0;
	var uLocal_6348 = 0;
	var uLocal_6349 = 0;
	var uLocal_6350 = 0;
	var uLocal_6351 = 0;
	var uLocal_6352 = 0;
	var uLocal_6353 = 0;
	var uLocal_6354 = 0;
	var uLocal_6355 = 0;
	var uLocal_6356 = 0;
	var uLocal_6357 = 0;
	var uLocal_6358 = 0;
	var uLocal_6359 = 0;
	var uLocal_6360 = 0;
	var uLocal_6361 = 0;
	var uLocal_6362 = 0;
	var uLocal_6363 = 0;
	var uLocal_6364 = 0;
	var uLocal_6365 = 0;
	var uLocal_6366 = 0;
	var uLocal_6367 = 0;
	var uLocal_6368 = 0;
	var uLocal_6369 = 0;
	var uLocal_6370 = 0;
	var uLocal_6371 = 0;
	var uLocal_6372 = 0;
	var uLocal_6373 = 0;
	var uLocal_6374 = 0;
	var uLocal_6375 = 0;
	var uLocal_6376 = 0;
	var uLocal_6377 = 0;
	var uLocal_6378 = 0;
	var uLocal_6379 = 0;
	var uLocal_6380 = 0;
	var uLocal_6381 = 0;
	var uLocal_6382 = 0;
	var uLocal_6383 = 0;
	var uLocal_6384 = 0;
	var uLocal_6385 = 0;
	var uLocal_6386 = 0;
	var uLocal_6387 = 20;
	var uLocal_6388 = 0;
	var uLocal_6389 = 0;
	var uLocal_6390 = 0;
	var uLocal_6391 = 0;
	var uLocal_6392 = 0;
	var uLocal_6393 = 0;
	var uLocal_6394 = 0;
	var uLocal_6395 = 0;
	var uLocal_6396 = 0;
	var uLocal_6397 = 0;
	var uLocal_6398 = 0;
	var uLocal_6399 = 0;
	var uLocal_6400 = 0;
	var uLocal_6401 = 0;
	var uLocal_6402 = 0;
	var uLocal_6403 = 0;
	var uLocal_6404 = 0;
	var uLocal_6405 = 0;
	var uLocal_6406 = 0;
	var uLocal_6407 = 0;
	var uLocal_6408 = 0;
	var uLocal_6409 = 0;
	var uLocal_6410 = 0;
	var uLocal_6411 = 0;
	var uLocal_6412 = 0;
	var uLocal_6413 = 0;
	var uLocal_6414 = 0;
	var uLocal_6415 = 0;
	var uLocal_6416 = 0;
	var uLocal_6417 = 0;
	var uLocal_6418 = 0;
	var uLocal_6419 = 0;
	var uLocal_6420 = 0;
	var uLocal_6421 = 0;
	var uLocal_6422 = 0;
	var uLocal_6423 = 0;
	var uLocal_6424 = 0;
	var uLocal_6425 = 0;
	var uLocal_6426 = 0;
	var uLocal_6427 = 0;
	var uLocal_6428 = 0;
	var uLocal_6429 = 0;
	var uLocal_6430 = 0;
	var uLocal_6431 = 0;
	var uLocal_6432 = 0;
	var uLocal_6433 = 0;
	var uLocal_6434 = 0;
	var uLocal_6435 = 0;
	var uLocal_6436 = 0;
	var uLocal_6437 = 0;
	var uLocal_6438 = 0;
	var uLocal_6439 = 0;
	var uLocal_6440 = 0;
	var uLocal_6441 = 0;
	var uLocal_6442 = 0;
	var uLocal_6443 = 0;
	var uLocal_6444 = 0;
	var uLocal_6445 = 0;
	var uLocal_6446 = 0;
	var uLocal_6447 = 0;
	var uLocal_6448 = 0;
	var uLocal_6449 = 0;
	var uLocal_6450 = 0;
	var uLocal_6451 = 0;
	var uLocal_6452 = 0;
	var uLocal_6453 = 0;
	var uLocal_6454 = 20;
	var uLocal_6455 = 0;
	var uLocal_6456 = 0;
	var uLocal_6457 = 0;
	var uLocal_6458 = 0;
	var uLocal_6459 = 0;
	var uLocal_6460 = 0;
	var uLocal_6461 = 0;
	var uLocal_6462 = 0;
	var uLocal_6463 = 0;
	var uLocal_6464 = 0;
	var uLocal_6465 = 0;
	var uLocal_6466 = 0;
	var uLocal_6467 = 0;
	var uLocal_6468 = 0;
	var uLocal_6469 = 0;
	var uLocal_6470 = 0;
	var uLocal_6471 = 0;
	var uLocal_6472 = 0;
	var uLocal_6473 = 0;
	var uLocal_6474 = 0;
	var uLocal_6475 = 0;
	var uLocal_6476 = 0;
	var uLocal_6477 = 0;
	var uLocal_6478 = 0;
	var uLocal_6479 = 0;
	var uLocal_6480 = 0;
	var uLocal_6481 = 0;
	var uLocal_6482 = 0;
	var uLocal_6483 = 0;
	var uLocal_6484 = 0;
	var uLocal_6485 = 0;
	var uLocal_6486 = 0;
	var uLocal_6487 = 0;
	var uLocal_6488 = 0;
	var uLocal_6489 = 0;
	var uLocal_6490 = 0;
	var uLocal_6491 = 0;
	var uLocal_6492 = 0;
	var uLocal_6493 = 0;
	var uLocal_6494 = 0;
	var uLocal_6495 = 0;
	var uLocal_6496 = 0;
	var uLocal_6497 = 0;
	var uLocal_6498 = 0;
	var uLocal_6499 = 0;
	var uLocal_6500 = 0;
	var uLocal_6501 = 0;
	var uLocal_6502 = 0;
	var uLocal_6503 = 0;
	var uLocal_6504 = 0;
	var uLocal_6505 = 0;
	var uLocal_6506 = 0;
	var uLocal_6507 = 0;
	var uLocal_6508 = 0;
	var uLocal_6509 = 0;
	var uLocal_6510 = 0;
	var uLocal_6511 = 0;
	var uLocal_6512 = 0;
	var uLocal_6513 = 0;
	var uLocal_6514 = 0;
	var uLocal_6515 = 0;
	var uLocal_6516 = 0;
	var uLocal_6517 = 0;
	var uLocal_6518 = 0;
	var uLocal_6519 = 0;
	var uLocal_6520 = 0;
	var uLocal_6521 = 20;
	var uLocal_6522 = 0;
	var uLocal_6523 = 0;
	var uLocal_6524 = 0;
	var uLocal_6525 = 0;
	var uLocal_6526 = 0;
	var uLocal_6527 = 0;
	var uLocal_6528 = 0;
	var uLocal_6529 = 0;
	var uLocal_6530 = 0;
	var uLocal_6531 = 0;
	var uLocal_6532 = 0;
	var uLocal_6533 = 0;
	var uLocal_6534 = 0;
	var uLocal_6535 = 0;
	var uLocal_6536 = 0;
	var uLocal_6537 = 0;
	var uLocal_6538 = 0;
	var uLocal_6539 = 0;
	var uLocal_6540 = 0;
	var uLocal_6541 = 0;
	var uLocal_6542 = 0;
	var uLocal_6543 = 0;
	var uLocal_6544 = 0;
	var uLocal_6545 = 0;
	var uLocal_6546 = 0;
	var uLocal_6547 = 0;
	var uLocal_6548 = 0;
	var uLocal_6549 = 0;
	var uLocal_6550 = 0;
	var uLocal_6551 = 0;
	var uLocal_6552 = 0;
	var uLocal_6553 = 0;
	var uLocal_6554 = 0;
	var uLocal_6555 = 0;
	var uLocal_6556 = 0;
	var uLocal_6557 = 0;
	var uLocal_6558 = 0;
	var uLocal_6559 = 0;
	var uLocal_6560 = 0;
	var uLocal_6561 = 0;
	var uLocal_6562 = 0;
	var uLocal_6563 = 0;
	var uLocal_6564 = 0;
	var uLocal_6565 = 0;
	var uLocal_6566 = 0;
	var uLocal_6567 = 0;
	var uLocal_6568 = 0;
	var uLocal_6569 = 0;
	var uLocal_6570 = 0;
	var uLocal_6571 = 0;
	var uLocal_6572 = 0;
	var uLocal_6573 = 0;
	var uLocal_6574 = 0;
	var uLocal_6575 = 0;
	var uLocal_6576 = 0;
	var uLocal_6577 = 0;
	var uLocal_6578 = 0;
	var uLocal_6579 = 0;
	var uLocal_6580 = 0;
	var uLocal_6581 = 0;
	var uLocal_6582 = 0;
	var uLocal_6583 = 0;
	var uLocal_6584 = 10;
	var uLocal_6585 = 0;
	var uLocal_6586 = 0;
	var uLocal_6587 = 0;
	var uLocal_6588 = 0;
	var uLocal_6589 = 0;
	var uLocal_6590 = 0;
	var uLocal_6591 = 0;
	var uLocal_6592 = 0;
	var uLocal_6593 = 0;
	var uLocal_6594 = 0;
	var uLocal_6595 = 0;
	var uLocal_6596 = 0;
	var uLocal_6597 = 0;
	var uLocal_6598 = 0;
	var uLocal_6599 = 0;
	var uLocal_6600 = 0;
	var uLocal_6601 = 0;
	var uLocal_6602 = 0;
	var uLocal_6603 = 0;
	var uLocal_6604 = 0;
	var uLocal_6605 = 0;
	var uLocal_6606 = 0;
	var uLocal_6607 = 0;
	var uLocal_6608 = 0;
	var uLocal_6609 = 0;
	var uLocal_6610 = 0;
	var uLocal_6611 = 0;
	var uLocal_6612 = 0;
	var uLocal_6613 = 0;
	var uLocal_6614 = 0;
	var uLocal_6615 = 0;
	var uLocal_6616 = 0;
	var uLocal_6617 = 0;
	var uLocal_6618 = 0;
	var uLocal_6619 = 0;
	var uLocal_6620 = 0;
	var uLocal_6621 = 0;
	var uLocal_6622 = 0;
	var uLocal_6623 = 0;
	var uLocal_6624 = 0;
	var uLocal_6625 = 10;
	var uLocal_6626 = 0;
	var uLocal_6627 = 0;
	var uLocal_6628 = 0;
	var uLocal_6629 = 0;
	var uLocal_6630 = 0;
	var uLocal_6631 = 0;
	var uLocal_6632 = 0;
	var uLocal_6633 = 0;
	var uLocal_6634 = 0;
	var uLocal_6635 = 0;
	var uLocal_6636 = 0;
	var uLocal_6637 = 0;
	var uLocal_6638 = 0;
	var uLocal_6639 = 0;
	var uLocal_6640 = 0;
	var uLocal_6641 = 0;
	var uLocal_6642 = 0;
	var uLocal_6643 = 0;
	var uLocal_6644 = 0;
	var uLocal_6645 = 0;
	var uLocal_6646 = 0;
	var uLocal_6647 = 0;
	var uLocal_6648 = 0;
	var uLocal_6649 = 0;
	var uLocal_6650 = 0;
	var uLocal_6651 = 0;
	var uLocal_6652 = 0;
	var uLocal_6653 = 0;
	var uLocal_6654 = 0;
	var uLocal_6655 = 0;
	var uLocal_6656 = 0;
	var uLocal_6657 = 0;
	var uLocal_6658 = 0;
	var uLocal_6659 = 0;
	var uLocal_6660 = 0;
	var uLocal_6661 = 0;
	var uLocal_6662 = 0;
	var uLocal_6663 = 0;
	var uLocal_6664 = 0;
	var uLocal_6665 = 0;
	var uLocal_6666 = 0;
	var uLocal_6667 = 0;
	var uLocal_6668 = 0;
	var uLocal_6669 = 0;
	var uLocal_6670 = 0;
	var uLocal_6671 = 0;
	var uLocal_6672 = 0;
	var uLocal_6673 = 0;
	var uLocal_6674 = 0;
	var uLocal_6675 = 0;
	var uLocal_6676 = 3;
	var uLocal_6677 = 0;
	var uLocal_6678 = 0;
	var uLocal_6679 = 0;
	var uLocal_6680 = 0;
	var uLocal_6681 = 0;
	var uLocal_6682 = 0;
	var uLocal_6683 = 0;
	var uLocal_6684 = 0;
	var uLocal_6685 = 0;
	var uLocal_6686 = 5;
	var uLocal_6687 = 0;
	var uLocal_6688 = 0;
	var uLocal_6689 = 0;
	var uLocal_6690 = 0;
	var uLocal_6691 = 0;
	var uLocal_6692 = 0;
	var uLocal_6693 = 0;
	var uLocal_6694 = 0;
	var uLocal_6695 = 0;
	var uLocal_6696 = 0;
	var uLocal_6697 = 0;
	var uLocal_6698 = 0;
	var uLocal_6699 = 0;
	var uLocal_6700 = 0;
	var uLocal_6701 = 0;
	var uLocal_6702 = 5;
	var uLocal_6703 = 0;
	var uLocal_6704 = 0;
	var uLocal_6705 = 0;
	var uLocal_6706 = 0;
	var uLocal_6707 = 0;
	var uLocal_6708 = 0;
	var uLocal_6709 = 0;
	var uLocal_6710 = 0;
	var uLocal_6711 = 0;
	var uLocal_6712 = 0;
	var uLocal_6713 = 0;
	var uLocal_6714 = 0;
	var uLocal_6715 = 0;
	var uLocal_6716 = 0;
	var uLocal_6717 = 0;
	var uLocal_6718 = 0;
	var uLocal_6719 = 0;
	var uLocal_6720 = 0;
	var uLocal_6721 = 0;
	var uLocal_6722 = 0;
	var uLocal_6723 = 5;
	var uLocal_6724 = 0;
	var uLocal_6725 = 0;
	var uLocal_6726 = 0;
	var uLocal_6727 = 0;
	var uLocal_6728 = 0;
	var uLocal_6729 = 0;
	var uLocal_6730 = 0;
	var uLocal_6731 = 0;
	var uLocal_6732 = 0;
	var uLocal_6733 = 0;
	var uLocal_6734 = 0;
	var uLocal_6735 = 0;
	var uLocal_6736 = 0;
	var uLocal_6737 = 0;
	var uLocal_6738 = 0;
	var uLocal_6739 = 0;
	var uLocal_6740 = 0;
	var uLocal_6741 = 0;
	var uLocal_6742 = 0;
	var uLocal_6743 = 0;
	var uLocal_6744 = 0;
	var uLocal_6745 = 0;
	var uLocal_6746 = 0;
	var uLocal_6747 = 24;
	var uLocal_6748 = 0;
	var uLocal_6749 = 0;
	var uLocal_6750 = 0;
	var uLocal_6751 = 0;
	var uLocal_6752 = 0;
	var uLocal_6753 = 0;
	var uLocal_6754 = 0;
	var uLocal_6755 = 0;
	var uLocal_6756 = 0;
	var uLocal_6757 = 0;
	var uLocal_6758 = 0;
	var uLocal_6759 = 0;
	var uLocal_6760 = 0;
	var uLocal_6761 = 0;
	var uLocal_6762 = 0;
	var uLocal_6763 = 0;
	var uLocal_6764 = 0;
	var uLocal_6765 = 0;
	var uLocal_6766 = 0;
	var uLocal_6767 = 0;
	var uLocal_6768 = 0;
	var uLocal_6769 = 0;
	var uLocal_6770 = 0;
	var uLocal_6771 = 0;
	var uLocal_6772 = 0;
	var uLocal_6773 = 0;
	var uLocal_6774 = 0;
	var uLocal_6775 = 0;
	var uLocal_6776 = 0;
	var uLocal_6777 = 0;
	var uLocal_6778 = 0;
	var uLocal_6779 = 0;
	var uLocal_6780 = 0;
	var uLocal_6781 = 0;
	var uLocal_6782 = 0;
	var uLocal_6783 = 0;
	var uLocal_6784 = 0;
	var uLocal_6785 = 0;
	var uLocal_6786 = 0;
	var uLocal_6787 = 0;
	var uLocal_6788 = 0;
	var uLocal_6789 = 0;
	var uLocal_6790 = 0;
	var uLocal_6791 = 0;
	var uLocal_6792 = 0;
	var uLocal_6793 = 0;
	var uLocal_6794 = 0;
	var uLocal_6795 = 0;
	var uLocal_6796 = 0;
	var uLocal_6797 = 0;
	var uLocal_6798 = 0;
	var uLocal_6799 = 0;
	var uLocal_6800 = 0;
	var uLocal_6801 = 0;
	var uLocal_6802 = 0;
	var uLocal_6803 = 0;
	var uLocal_6804 = 0;
	var uLocal_6805 = 0;
	var uLocal_6806 = 0;
	var uLocal_6807 = 0;
	var uLocal_6808 = 0;
	var uLocal_6809 = 0;
	var uLocal_6810 = 0;
	var uLocal_6811 = 0;
	var uLocal_6812 = 0;
	var uLocal_6813 = 0;
	var uLocal_6814 = 0;
	var uLocal_6815 = 0;
	var uLocal_6816 = 0;
	var uLocal_6817 = 0;
	var uLocal_6818 = 0;
	var uLocal_6819 = 0;
	var uLocal_6820 = 0;
	var uLocal_6821 = 0;
	var uLocal_6822 = 0;
	var uLocal_6823 = 0;
	var uLocal_6824 = 0;
	var uLocal_6825 = 0;
	var uLocal_6826 = 0;
	var uLocal_6827 = 0;
	var uLocal_6828 = 0;
	var uLocal_6829 = 0;
	var uLocal_6830 = 0;
	var uLocal_6831 = 0;
	var uLocal_6832 = 0;
	var uLocal_6833 = 0;
	var uLocal_6834 = 0;
	var uLocal_6835 = 0;
	var uLocal_6836 = 0;
	var uLocal_6837 = 0;
	var uLocal_6838 = 0;
	var uLocal_6839 = 0;
	var uLocal_6840 = 0;
	var uLocal_6841 = 0;
	var uLocal_6842 = 0;
	var uLocal_6843 = 0;
	var uLocal_6844 = 0;
	var uLocal_6845 = 0;
	var uLocal_6846 = 0;
	var uLocal_6847 = 0;
	var uLocal_6848 = 0;
	var uLocal_6849 = 0;
	var uLocal_6850 = 0;
	var uLocal_6851 = 0;
	var uLocal_6852 = 0;
	var uLocal_6853 = 0;
	var uLocal_6854 = 0;
	var uLocal_6855 = 0;
	var uLocal_6856 = 0;
	var uLocal_6857 = 0;
	var uLocal_6858 = 0;
	var uLocal_6859 = 0;
	var uLocal_6860 = 30;
	var uLocal_6861 = 0;
	var uLocal_6862 = 0;
	var uLocal_6863 = 0;
	var uLocal_6864 = 0;
	var uLocal_6865 = 0;
	var uLocal_6866 = 3;
	var uLocal_6867 = 0;
	var uLocal_6868 = 0;
	var uLocal_6869 = 0;
	var uLocal_6870 = 0;
	var uLocal_6871 = -1;
	var uLocal_6872 = 0;
	var uLocal_6873 = 5;
	var uLocal_6874 = 0;
	var uLocal_6875 = 0;
	var uLocal_6876 = 0;
	var uLocal_6877 = 0;
	var uLocal_6878 = 0;
	var uLocal_6879 = 0;
	var uLocal_6880 = 0;
	var uLocal_6881 = 0;
	var uLocal_6882 = 0;
	var uLocal_6883 = 0;
	var uLocal_6884 = 10;
	var uLocal_6885 = 3;
	var uLocal_6886 = 500;
	var uLocal_6887 = 10000;
	var uLocal_6888 = 0;
	var uLocal_6889 = 3;
	var uLocal_6890 = 500;
	var uLocal_6891 = 10000;
	var uLocal_6892 = 0;
	var uLocal_6893 = 3;
	var uLocal_6894 = 500;
	var uLocal_6895 = 10000;
	var uLocal_6896 = 0;
	var uLocal_6897 = 3;
	var uLocal_6898 = 500;
	var uLocal_6899 = 10000;
	var uLocal_6900 = 0;
	var uLocal_6901 = 3;
	var uLocal_6902 = 500;
	var uLocal_6903 = 10000;
	var uLocal_6904 = 0;
	var uLocal_6905 = 3;
	var uLocal_6906 = 500;
	var uLocal_6907 = 10000;
	var uLocal_6908 = 0;
	var uLocal_6909 = 3;
	var uLocal_6910 = 500;
	var uLocal_6911 = 10000;
	var uLocal_6912 = 0;
	var uLocal_6913 = 3;
	var uLocal_6914 = 500;
	var uLocal_6915 = 10000;
	var uLocal_6916 = 0;
	var uLocal_6917 = 3;
	var uLocal_6918 = 500;
	var uLocal_6919 = 10000;
	var uLocal_6920 = 0;
	var uLocal_6921 = 3;
	var uLocal_6922 = 500;
	var uLocal_6923 = 10000;
	var uLocal_6924 = 0;
	var uLocal_6925 = 0;
	var uLocal_6926 = 0;
	var uLocal_6927 = 0;
	var uLocal_6928 = 0;
	var uLocal_6929 = 0;
	var uLocal_6930 = 0;
	var uLocal_6931 = 3;
	var uLocal_6932 = 0;
	var uLocal_6933 = 0;
	var uLocal_6934 = 0;
	var uLocal_6935 = 0;
	var uLocal_6936 = -1;
	var uLocal_6937 = 0;
	var uLocal_6938 = 5;
	var uLocal_6939 = 0;
	var uLocal_6940 = 0;
	var uLocal_6941 = 0;
	var uLocal_6942 = 0;
	var uLocal_6943 = 0;
	var uLocal_6944 = 0;
	var uLocal_6945 = 0;
	var uLocal_6946 = 0;
	var uLocal_6947 = 0;
	var uLocal_6948 = 0;
	var uLocal_6949 = 10;
	var uLocal_6950 = 3;
	var uLocal_6951 = 500;
	var uLocal_6952 = 10000;
	var uLocal_6953 = 0;
	var uLocal_6954 = 3;
	var uLocal_6955 = 500;
	var uLocal_6956 = 10000;
	var uLocal_6957 = 0;
	var uLocal_6958 = 3;
	var uLocal_6959 = 500;
	var uLocal_6960 = 10000;
	var uLocal_6961 = 0;
	var uLocal_6962 = 3;
	var uLocal_6963 = 500;
	var uLocal_6964 = 10000;
	var uLocal_6965 = 0;
	var uLocal_6966 = 3;
	var uLocal_6967 = 500;
	var uLocal_6968 = 10000;
	var uLocal_6969 = 0;
	var uLocal_6970 = 3;
	var uLocal_6971 = 500;
	var uLocal_6972 = 10000;
	var uLocal_6973 = 0;
	var uLocal_6974 = 3;
	var uLocal_6975 = 500;
	var uLocal_6976 = 10000;
	var uLocal_6977 = 0;
	var uLocal_6978 = 3;
	var uLocal_6979 = 500;
	var uLocal_6980 = 10000;
	var uLocal_6981 = 0;
	var uLocal_6982 = 3;
	var uLocal_6983 = 500;
	var uLocal_6984 = 10000;
	var uLocal_6985 = 0;
	var uLocal_6986 = 3;
	var uLocal_6987 = 500;
	var uLocal_6988 = 10000;
	var uLocal_6989 = 0;
	var uLocal_6990 = 0;
	var uLocal_6991 = 0;
	var uLocal_6992 = 0;
	var uLocal_6993 = 0;
	var uLocal_6994 = 0;
	var uLocal_6995 = 0;
	var uLocal_6996 = 3;
	var uLocal_6997 = 0;
	var uLocal_6998 = 0;
	var uLocal_6999 = 0;
	var uLocal_7000 = 0;
	var uLocal_7001 = -1;
	var uLocal_7002 = 0;
	var uLocal_7003 = 5;
	var uLocal_7004 = 0;
	var uLocal_7005 = 0;
	var uLocal_7006 = 0;
	var uLocal_7007 = 0;
	var uLocal_7008 = 0;
	var uLocal_7009 = 0;
	var uLocal_7010 = 0;
	var uLocal_7011 = 0;
	var uLocal_7012 = 0;
	var uLocal_7013 = 0;
	var uLocal_7014 = 10;
	var uLocal_7015 = 3;
	var uLocal_7016 = 500;
	var uLocal_7017 = 10000;
	var uLocal_7018 = 0;
	var uLocal_7019 = 3;
	var uLocal_7020 = 500;
	var uLocal_7021 = 10000;
	var uLocal_7022 = 0;
	var uLocal_7023 = 3;
	var uLocal_7024 = 500;
	var uLocal_7025 = 10000;
	var uLocal_7026 = 0;
	var uLocal_7027 = 3;
	var uLocal_7028 = 500;
	var uLocal_7029 = 10000;
	var uLocal_7030 = 0;
	var uLocal_7031 = 3;
	var uLocal_7032 = 500;
	var uLocal_7033 = 10000;
	var uLocal_7034 = 0;
	var uLocal_7035 = 3;
	var uLocal_7036 = 500;
	var uLocal_7037 = 10000;
	var uLocal_7038 = 0;
	var uLocal_7039 = 3;
	var uLocal_7040 = 500;
	var uLocal_7041 = 10000;
	var uLocal_7042 = 0;
	var uLocal_7043 = 3;
	var uLocal_7044 = 500;
	var uLocal_7045 = 10000;
	var uLocal_7046 = 0;
	var uLocal_7047 = 3;
	var uLocal_7048 = 500;
	var uLocal_7049 = 10000;
	var uLocal_7050 = 0;
	var uLocal_7051 = 3;
	var uLocal_7052 = 500;
	var uLocal_7053 = 10000;
	var uLocal_7054 = 0;
	var uLocal_7055 = 0;
	var uLocal_7056 = 0;
	var uLocal_7057 = 0;
	var uLocal_7058 = 0;
	var uLocal_7059 = 0;
	var uLocal_7060 = 0;
	var uLocal_7061 = 3;
	var uLocal_7062 = 0;
	var uLocal_7063 = 0;
	var uLocal_7064 = 0;
	var uLocal_7065 = 0;
	var uLocal_7066 = -1;
	var uLocal_7067 = 0;
	var uLocal_7068 = 5;
	var uLocal_7069 = 0;
	var uLocal_7070 = 0;
	var uLocal_7071 = 0;
	var uLocal_7072 = 0;
	var uLocal_7073 = 0;
	var uLocal_7074 = 0;
	var uLocal_7075 = 0;
	var uLocal_7076 = 0;
	var uLocal_7077 = 0;
	var uLocal_7078 = 0;
	var uLocal_7079 = 10;
	var uLocal_7080 = 3;
	var uLocal_7081 = 500;
	var uLocal_7082 = 10000;
	var uLocal_7083 = 0;
	var uLocal_7084 = 3;
	var uLocal_7085 = 500;
	var uLocal_7086 = 10000;
	var uLocal_7087 = 0;
	var uLocal_7088 = 3;
	var uLocal_7089 = 500;
	var uLocal_7090 = 10000;
	var uLocal_7091 = 0;
	var uLocal_7092 = 3;
	var uLocal_7093 = 500;
	var uLocal_7094 = 10000;
	var uLocal_7095 = 0;
	var uLocal_7096 = 3;
	var uLocal_7097 = 500;
	var uLocal_7098 = 10000;
	var uLocal_7099 = 0;
	var uLocal_7100 = 3;
	var uLocal_7101 = 500;
	var uLocal_7102 = 10000;
	var uLocal_7103 = 0;
	var uLocal_7104 = 3;
	var uLocal_7105 = 500;
	var uLocal_7106 = 10000;
	var uLocal_7107 = 0;
	var uLocal_7108 = 3;
	var uLocal_7109 = 500;
	var uLocal_7110 = 10000;
	var uLocal_7111 = 0;
	var uLocal_7112 = 3;
	var uLocal_7113 = 500;
	var uLocal_7114 = 10000;
	var uLocal_7115 = 0;
	var uLocal_7116 = 3;
	var uLocal_7117 = 500;
	var uLocal_7118 = 10000;
	var uLocal_7119 = 0;
	var uLocal_7120 = 0;
	var uLocal_7121 = 0;
	var uLocal_7122 = 0;
	var uLocal_7123 = 0;
	var uLocal_7124 = 0;
	var uLocal_7125 = 0;
	var uLocal_7126 = 3;
	var uLocal_7127 = 0;
	var uLocal_7128 = 0;
	var uLocal_7129 = 0;
	var uLocal_7130 = 0;
	var uLocal_7131 = -1;
	var uLocal_7132 = 0;
	var uLocal_7133 = 5;
	var uLocal_7134 = 0;
	var uLocal_7135 = 0;
	var uLocal_7136 = 0;
	var uLocal_7137 = 0;
	var uLocal_7138 = 0;
	var uLocal_7139 = 0;
	var uLocal_7140 = 0;
	var uLocal_7141 = 0;
	var uLocal_7142 = 0;
	var uLocal_7143 = 0;
	var uLocal_7144 = 10;
	var uLocal_7145 = 3;
	var uLocal_7146 = 500;
	var uLocal_7147 = 10000;
	var uLocal_7148 = 0;
	var uLocal_7149 = 3;
	var uLocal_7150 = 500;
	var uLocal_7151 = 10000;
	var uLocal_7152 = 0;
	var uLocal_7153 = 3;
	var uLocal_7154 = 500;
	var uLocal_7155 = 10000;
	var uLocal_7156 = 0;
	var uLocal_7157 = 3;
	var uLocal_7158 = 500;
	var uLocal_7159 = 10000;
	var uLocal_7160 = 0;
	var uLocal_7161 = 3;
	var uLocal_7162 = 500;
	var uLocal_7163 = 10000;
	var uLocal_7164 = 0;
	var uLocal_7165 = 3;
	var uLocal_7166 = 500;
	var uLocal_7167 = 10000;
	var uLocal_7168 = 0;
	var uLocal_7169 = 3;
	var uLocal_7170 = 500;
	var uLocal_7171 = 10000;
	var uLocal_7172 = 0;
	var uLocal_7173 = 3;
	var uLocal_7174 = 500;
	var uLocal_7175 = 10000;
	var uLocal_7176 = 0;
	var uLocal_7177 = 3;
	var uLocal_7178 = 500;
	var uLocal_7179 = 10000;
	var uLocal_7180 = 0;
	var uLocal_7181 = 3;
	var uLocal_7182 = 500;
	var uLocal_7183 = 10000;
	var uLocal_7184 = 0;
	var uLocal_7185 = 0;
	var uLocal_7186 = 0;
	var uLocal_7187 = 0;
	var uLocal_7188 = 0;
	var uLocal_7189 = 0;
	var uLocal_7190 = 0;
	var uLocal_7191 = 3;
	var uLocal_7192 = 0;
	var uLocal_7193 = 0;
	var uLocal_7194 = 0;
	var uLocal_7195 = 0;
	var uLocal_7196 = -1;
	var uLocal_7197 = 0;
	var uLocal_7198 = 5;
	var uLocal_7199 = 0;
	var uLocal_7200 = 0;
	var uLocal_7201 = 0;
	var uLocal_7202 = 0;
	var uLocal_7203 = 0;
	var uLocal_7204 = 0;
	var uLocal_7205 = 0;
	var uLocal_7206 = 0;
	var uLocal_7207 = 0;
	var uLocal_7208 = 0;
	var uLocal_7209 = 10;
	var uLocal_7210 = 3;
	var uLocal_7211 = 500;
	var uLocal_7212 = 10000;
	var uLocal_7213 = 0;
	var uLocal_7214 = 3;
	var uLocal_7215 = 500;
	var uLocal_7216 = 10000;
	var uLocal_7217 = 0;
	var uLocal_7218 = 3;
	var uLocal_7219 = 500;
	var uLocal_7220 = 10000;
	var uLocal_7221 = 0;
	var uLocal_7222 = 3;
	var uLocal_7223 = 500;
	var uLocal_7224 = 10000;
	var uLocal_7225 = 0;
	var uLocal_7226 = 3;
	var uLocal_7227 = 500;
	var uLocal_7228 = 10000;
	var uLocal_7229 = 0;
	var uLocal_7230 = 3;
	var uLocal_7231 = 500;
	var uLocal_7232 = 10000;
	var uLocal_7233 = 0;
	var uLocal_7234 = 3;
	var uLocal_7235 = 500;
	var uLocal_7236 = 10000;
	var uLocal_7237 = 0;
	var uLocal_7238 = 3;
	var uLocal_7239 = 500;
	var uLocal_7240 = 10000;
	var uLocal_7241 = 0;
	var uLocal_7242 = 3;
	var uLocal_7243 = 500;
	var uLocal_7244 = 10000;
	var uLocal_7245 = 0;
	var uLocal_7246 = 3;
	var uLocal_7247 = 500;
	var uLocal_7248 = 10000;
	var uLocal_7249 = 0;
	var uLocal_7250 = 0;
	var uLocal_7251 = 0;
	var uLocal_7252 = 0;
	var uLocal_7253 = 0;
	var uLocal_7254 = 0;
	var uLocal_7255 = 0;
	var uLocal_7256 = 3;
	var uLocal_7257 = 0;
	var uLocal_7258 = 0;
	var uLocal_7259 = 0;
	var uLocal_7260 = 0;
	var uLocal_7261 = -1;
	var uLocal_7262 = 0;
	var uLocal_7263 = 5;
	var uLocal_7264 = 0;
	var uLocal_7265 = 0;
	var uLocal_7266 = 0;
	var uLocal_7267 = 0;
	var uLocal_7268 = 0;
	var uLocal_7269 = 0;
	var uLocal_7270 = 0;
	var uLocal_7271 = 0;
	var uLocal_7272 = 0;
	var uLocal_7273 = 0;
	var uLocal_7274 = 10;
	var uLocal_7275 = 3;
	var uLocal_7276 = 500;
	var uLocal_7277 = 10000;
	var uLocal_7278 = 0;
	var uLocal_7279 = 3;
	var uLocal_7280 = 500;
	var uLocal_7281 = 10000;
	var uLocal_7282 = 0;
	var uLocal_7283 = 3;
	var uLocal_7284 = 500;
	var uLocal_7285 = 10000;
	var uLocal_7286 = 0;
	var uLocal_7287 = 3;
	var uLocal_7288 = 500;
	var uLocal_7289 = 10000;
	var uLocal_7290 = 0;
	var uLocal_7291 = 3;
	var uLocal_7292 = 500;
	var uLocal_7293 = 10000;
	var uLocal_7294 = 0;
	var uLocal_7295 = 3;
	var uLocal_7296 = 500;
	var uLocal_7297 = 10000;
	var uLocal_7298 = 0;
	var uLocal_7299 = 3;
	var uLocal_7300 = 500;
	var uLocal_7301 = 10000;
	var uLocal_7302 = 0;
	var uLocal_7303 = 3;
	var uLocal_7304 = 500;
	var uLocal_7305 = 10000;
	var uLocal_7306 = 0;
	var uLocal_7307 = 3;
	var uLocal_7308 = 500;
	var uLocal_7309 = 10000;
	var uLocal_7310 = 0;
	var uLocal_7311 = 3;
	var uLocal_7312 = 500;
	var uLocal_7313 = 10000;
	var uLocal_7314 = 0;
	var uLocal_7315 = 0;
	var uLocal_7316 = 0;
	var uLocal_7317 = 0;
	var uLocal_7318 = 0;
	var uLocal_7319 = 0;
	var uLocal_7320 = 0;
	var uLocal_7321 = 3;
	var uLocal_7322 = 0;
	var uLocal_7323 = 0;
	var uLocal_7324 = 0;
	var uLocal_7325 = 0;
	var uLocal_7326 = -1;
	var uLocal_7327 = 0;
	var uLocal_7328 = 5;
	var uLocal_7329 = 0;
	var uLocal_7330 = 0;
	var uLocal_7331 = 0;
	var uLocal_7332 = 0;
	var uLocal_7333 = 0;
	var uLocal_7334 = 0;
	var uLocal_7335 = 0;
	var uLocal_7336 = 0;
	var uLocal_7337 = 0;
	var uLocal_7338 = 0;
	var uLocal_7339 = 10;
	var uLocal_7340 = 3;
	var uLocal_7341 = 500;
	var uLocal_7342 = 10000;
	var uLocal_7343 = 0;
	var uLocal_7344 = 3;
	var uLocal_7345 = 500;
	var uLocal_7346 = 10000;
	var uLocal_7347 = 0;
	var uLocal_7348 = 3;
	var uLocal_7349 = 500;
	var uLocal_7350 = 10000;
	var uLocal_7351 = 0;
	var uLocal_7352 = 3;
	var uLocal_7353 = 500;
	var uLocal_7354 = 10000;
	var uLocal_7355 = 0;
	var uLocal_7356 = 3;
	var uLocal_7357 = 500;
	var uLocal_7358 = 10000;
	var uLocal_7359 = 0;
	var uLocal_7360 = 3;
	var uLocal_7361 = 500;
	var uLocal_7362 = 10000;
	var uLocal_7363 = 0;
	var uLocal_7364 = 3;
	var uLocal_7365 = 500;
	var uLocal_7366 = 10000;
	var uLocal_7367 = 0;
	var uLocal_7368 = 3;
	var uLocal_7369 = 500;
	var uLocal_7370 = 10000;
	var uLocal_7371 = 0;
	var uLocal_7372 = 3;
	var uLocal_7373 = 500;
	var uLocal_7374 = 10000;
	var uLocal_7375 = 0;
	var uLocal_7376 = 3;
	var uLocal_7377 = 500;
	var uLocal_7378 = 10000;
	var uLocal_7379 = 0;
	var uLocal_7380 = 0;
	var uLocal_7381 = 0;
	var uLocal_7382 = 0;
	var uLocal_7383 = 0;
	var uLocal_7384 = 0;
	var uLocal_7385 = 0;
	var uLocal_7386 = 3;
	var uLocal_7387 = 0;
	var uLocal_7388 = 0;
	var uLocal_7389 = 0;
	var uLocal_7390 = 0;
	var uLocal_7391 = -1;
	var uLocal_7392 = 0;
	var uLocal_7393 = 5;
	var uLocal_7394 = 0;
	var uLocal_7395 = 0;
	var uLocal_7396 = 0;
	var uLocal_7397 = 0;
	var uLocal_7398 = 0;
	var uLocal_7399 = 0;
	var uLocal_7400 = 0;
	var uLocal_7401 = 0;
	var uLocal_7402 = 0;
	var uLocal_7403 = 0;
	var uLocal_7404 = 10;
	var uLocal_7405 = 3;
	var uLocal_7406 = 500;
	var uLocal_7407 = 10000;
	var uLocal_7408 = 0;
	var uLocal_7409 = 3;
	var uLocal_7410 = 500;
	var uLocal_7411 = 10000;
	var uLocal_7412 = 0;
	var uLocal_7413 = 3;
	var uLocal_7414 = 500;
	var uLocal_7415 = 10000;
	var uLocal_7416 = 0;
	var uLocal_7417 = 3;
	var uLocal_7418 = 500;
	var uLocal_7419 = 10000;
	var uLocal_7420 = 0;
	var uLocal_7421 = 3;
	var uLocal_7422 = 500;
	var uLocal_7423 = 10000;
	var uLocal_7424 = 0;
	var uLocal_7425 = 3;
	var uLocal_7426 = 500;
	var uLocal_7427 = 10000;
	var uLocal_7428 = 0;
	var uLocal_7429 = 3;
	var uLocal_7430 = 500;
	var uLocal_7431 = 10000;
	var uLocal_7432 = 0;
	var uLocal_7433 = 3;
	var uLocal_7434 = 500;
	var uLocal_7435 = 10000;
	var uLocal_7436 = 0;
	var uLocal_7437 = 3;
	var uLocal_7438 = 500;
	var uLocal_7439 = 10000;
	var uLocal_7440 = 0;
	var uLocal_7441 = 3;
	var uLocal_7442 = 500;
	var uLocal_7443 = 10000;
	var uLocal_7444 = 0;
	var uLocal_7445 = 0;
	var uLocal_7446 = 0;
	var uLocal_7447 = 0;
	var uLocal_7448 = 0;
	var uLocal_7449 = 0;
	var uLocal_7450 = 0;
	var uLocal_7451 = 3;
	var uLocal_7452 = 0;
	var uLocal_7453 = 0;
	var uLocal_7454 = 0;
	var uLocal_7455 = 0;
	var uLocal_7456 = -1;
	var uLocal_7457 = 0;
	var uLocal_7458 = 5;
	var uLocal_7459 = 0;
	var uLocal_7460 = 0;
	var uLocal_7461 = 0;
	var uLocal_7462 = 0;
	var uLocal_7463 = 0;
	var uLocal_7464 = 0;
	var uLocal_7465 = 0;
	var uLocal_7466 = 0;
	var uLocal_7467 = 0;
	var uLocal_7468 = 0;
	var uLocal_7469 = 10;
	var uLocal_7470 = 3;
	var uLocal_7471 = 500;
	var uLocal_7472 = 10000;
	var uLocal_7473 = 0;
	var uLocal_7474 = 3;
	var uLocal_7475 = 500;
	var uLocal_7476 = 10000;
	var uLocal_7477 = 0;
	var uLocal_7478 = 3;
	var uLocal_7479 = 500;
	var uLocal_7480 = 10000;
	var uLocal_7481 = 0;
	var uLocal_7482 = 3;
	var uLocal_7483 = 500;
	var uLocal_7484 = 10000;
	var uLocal_7485 = 0;
	var uLocal_7486 = 3;
	var uLocal_7487 = 500;
	var uLocal_7488 = 10000;
	var uLocal_7489 = 0;
	var uLocal_7490 = 3;
	var uLocal_7491 = 500;
	var uLocal_7492 = 10000;
	var uLocal_7493 = 0;
	var uLocal_7494 = 3;
	var uLocal_7495 = 500;
	var uLocal_7496 = 10000;
	var uLocal_7497 = 0;
	var uLocal_7498 = 3;
	var uLocal_7499 = 500;
	var uLocal_7500 = 10000;
	var uLocal_7501 = 0;
	var uLocal_7502 = 3;
	var uLocal_7503 = 500;
	var uLocal_7504 = 10000;
	var uLocal_7505 = 0;
	var uLocal_7506 = 3;
	var uLocal_7507 = 500;
	var uLocal_7508 = 10000;
	var uLocal_7509 = 0;
	var uLocal_7510 = 0;
	var uLocal_7511 = 0;
	var uLocal_7512 = 0;
	var uLocal_7513 = 0;
	var uLocal_7514 = 0;
	var uLocal_7515 = 0;
	var uLocal_7516 = 3;
	var uLocal_7517 = 0;
	var uLocal_7518 = 0;
	var uLocal_7519 = 0;
	var uLocal_7520 = 0;
	var uLocal_7521 = -1;
	var uLocal_7522 = 0;
	var uLocal_7523 = 5;
	var uLocal_7524 = 0;
	var uLocal_7525 = 0;
	var uLocal_7526 = 0;
	var uLocal_7527 = 0;
	var uLocal_7528 = 0;
	var uLocal_7529 = 0;
	var uLocal_7530 = 0;
	var uLocal_7531 = 0;
	var uLocal_7532 = 0;
	var uLocal_7533 = 0;
	var uLocal_7534 = 10;
	var uLocal_7535 = 3;
	var uLocal_7536 = 500;
	var uLocal_7537 = 10000;
	var uLocal_7538 = 0;
	var uLocal_7539 = 3;
	var uLocal_7540 = 500;
	var uLocal_7541 = 10000;
	var uLocal_7542 = 0;
	var uLocal_7543 = 3;
	var uLocal_7544 = 500;
	var uLocal_7545 = 10000;
	var uLocal_7546 = 0;
	var uLocal_7547 = 3;
	var uLocal_7548 = 500;
	var uLocal_7549 = 10000;
	var uLocal_7550 = 0;
	var uLocal_7551 = 3;
	var uLocal_7552 = 500;
	var uLocal_7553 = 10000;
	var uLocal_7554 = 0;
	var uLocal_7555 = 3;
	var uLocal_7556 = 500;
	var uLocal_7557 = 10000;
	var uLocal_7558 = 0;
	var uLocal_7559 = 3;
	var uLocal_7560 = 500;
	var uLocal_7561 = 10000;
	var uLocal_7562 = 0;
	var uLocal_7563 = 3;
	var uLocal_7564 = 500;
	var uLocal_7565 = 10000;
	var uLocal_7566 = 0;
	var uLocal_7567 = 3;
	var uLocal_7568 = 500;
	var uLocal_7569 = 10000;
	var uLocal_7570 = 0;
	var uLocal_7571 = 3;
	var uLocal_7572 = 500;
	var uLocal_7573 = 10000;
	var uLocal_7574 = 0;
	var uLocal_7575 = 0;
	var uLocal_7576 = 0;
	var uLocal_7577 = 0;
	var uLocal_7578 = 0;
	var uLocal_7579 = 0;
	var uLocal_7580 = 0;
	var uLocal_7581 = 3;
	var uLocal_7582 = 0;
	var uLocal_7583 = 0;
	var uLocal_7584 = 0;
	var uLocal_7585 = 0;
	var uLocal_7586 = -1;
	var uLocal_7587 = 0;
	var uLocal_7588 = 5;
	var uLocal_7589 = 0;
	var uLocal_7590 = 0;
	var uLocal_7591 = 0;
	var uLocal_7592 = 0;
	var uLocal_7593 = 0;
	var uLocal_7594 = 0;
	var uLocal_7595 = 0;
	var uLocal_7596 = 0;
	var uLocal_7597 = 0;
	var uLocal_7598 = 0;
	var uLocal_7599 = 10;
	var uLocal_7600 = 3;
	var uLocal_7601 = 500;
	var uLocal_7602 = 10000;
	var uLocal_7603 = 0;
	var uLocal_7604 = 3;
	var uLocal_7605 = 500;
	var uLocal_7606 = 10000;
	var uLocal_7607 = 0;
	var uLocal_7608 = 3;
	var uLocal_7609 = 500;
	var uLocal_7610 = 10000;
	var uLocal_7611 = 0;
	var uLocal_7612 = 3;
	var uLocal_7613 = 500;
	var uLocal_7614 = 10000;
	var uLocal_7615 = 0;
	var uLocal_7616 = 3;
	var uLocal_7617 = 500;
	var uLocal_7618 = 10000;
	var uLocal_7619 = 0;
	var uLocal_7620 = 3;
	var uLocal_7621 = 500;
	var uLocal_7622 = 10000;
	var uLocal_7623 = 0;
	var uLocal_7624 = 3;
	var uLocal_7625 = 500;
	var uLocal_7626 = 10000;
	var uLocal_7627 = 0;
	var uLocal_7628 = 3;
	var uLocal_7629 = 500;
	var uLocal_7630 = 10000;
	var uLocal_7631 = 0;
	var uLocal_7632 = 3;
	var uLocal_7633 = 500;
	var uLocal_7634 = 10000;
	var uLocal_7635 = 0;
	var uLocal_7636 = 3;
	var uLocal_7637 = 500;
	var uLocal_7638 = 10000;
	var uLocal_7639 = 0;
	var uLocal_7640 = 0;
	var uLocal_7641 = 0;
	var uLocal_7642 = 0;
	var uLocal_7643 = 0;
	var uLocal_7644 = 0;
	var uLocal_7645 = 0;
	var uLocal_7646 = 3;
	var uLocal_7647 = 0;
	var uLocal_7648 = 0;
	var uLocal_7649 = 0;
	var uLocal_7650 = 0;
	var uLocal_7651 = -1;
	var uLocal_7652 = 0;
	var uLocal_7653 = 5;
	var uLocal_7654 = 0;
	var uLocal_7655 = 0;
	var uLocal_7656 = 0;
	var uLocal_7657 = 0;
	var uLocal_7658 = 0;
	var uLocal_7659 = 0;
	var uLocal_7660 = 0;
	var uLocal_7661 = 0;
	var uLocal_7662 = 0;
	var uLocal_7663 = 0;
	var uLocal_7664 = 10;
	var uLocal_7665 = 3;
	var uLocal_7666 = 500;
	var uLocal_7667 = 10000;
	var uLocal_7668 = 0;
	var uLocal_7669 = 3;
	var uLocal_7670 = 500;
	var uLocal_7671 = 10000;
	var uLocal_7672 = 0;
	var uLocal_7673 = 3;
	var uLocal_7674 = 500;
	var uLocal_7675 = 10000;
	var uLocal_7676 = 0;
	var uLocal_7677 = 3;
	var uLocal_7678 = 500;
	var uLocal_7679 = 10000;
	var uLocal_7680 = 0;
	var uLocal_7681 = 3;
	var uLocal_7682 = 500;
	var uLocal_7683 = 10000;
	var uLocal_7684 = 0;
	var uLocal_7685 = 3;
	var uLocal_7686 = 500;
	var uLocal_7687 = 10000;
	var uLocal_7688 = 0;
	var uLocal_7689 = 3;
	var uLocal_7690 = 500;
	var uLocal_7691 = 10000;
	var uLocal_7692 = 0;
	var uLocal_7693 = 3;
	var uLocal_7694 = 500;
	var uLocal_7695 = 10000;
	var uLocal_7696 = 0;
	var uLocal_7697 = 3;
	var uLocal_7698 = 500;
	var uLocal_7699 = 10000;
	var uLocal_7700 = 0;
	var uLocal_7701 = 3;
	var uLocal_7702 = 500;
	var uLocal_7703 = 10000;
	var uLocal_7704 = 0;
	var uLocal_7705 = 0;
	var uLocal_7706 = 0;
	var uLocal_7707 = 0;
	var uLocal_7708 = 0;
	var uLocal_7709 = 0;
	var uLocal_7710 = 0;
	var uLocal_7711 = 3;
	var uLocal_7712 = 0;
	var uLocal_7713 = 0;
	var uLocal_7714 = 0;
	var uLocal_7715 = 0;
	var uLocal_7716 = -1;
	var uLocal_7717 = 0;
	var uLocal_7718 = 5;
	var uLocal_7719 = 0;
	var uLocal_7720 = 0;
	var uLocal_7721 = 0;
	var uLocal_7722 = 0;
	var uLocal_7723 = 0;
	var uLocal_7724 = 0;
	var uLocal_7725 = 0;
	var uLocal_7726 = 0;
	var uLocal_7727 = 0;
	var uLocal_7728 = 0;
	var uLocal_7729 = 10;
	var uLocal_7730 = 3;
	var uLocal_7731 = 500;
	var uLocal_7732 = 10000;
	var uLocal_7733 = 0;
	var uLocal_7734 = 3;
	var uLocal_7735 = 500;
	var uLocal_7736 = 10000;
	var uLocal_7737 = 0;
	var uLocal_7738 = 3;
	var uLocal_7739 = 500;
	var uLocal_7740 = 10000;
	var uLocal_7741 = 0;
	var uLocal_7742 = 3;
	var uLocal_7743 = 500;
	var uLocal_7744 = 10000;
	var uLocal_7745 = 0;
	var uLocal_7746 = 3;
	var uLocal_7747 = 500;
	var uLocal_7748 = 10000;
	var uLocal_7749 = 0;
	var uLocal_7750 = 3;
	var uLocal_7751 = 500;
	var uLocal_7752 = 10000;
	var uLocal_7753 = 0;
	var uLocal_7754 = 3;
	var uLocal_7755 = 500;
	var uLocal_7756 = 10000;
	var uLocal_7757 = 0;
	var uLocal_7758 = 3;
	var uLocal_7759 = 500;
	var uLocal_7760 = 10000;
	var uLocal_7761 = 0;
	var uLocal_7762 = 3;
	var uLocal_7763 = 500;
	var uLocal_7764 = 10000;
	var uLocal_7765 = 0;
	var uLocal_7766 = 3;
	var uLocal_7767 = 500;
	var uLocal_7768 = 10000;
	var uLocal_7769 = 0;
	var uLocal_7770 = 0;
	var uLocal_7771 = 0;
	var uLocal_7772 = 0;
	var uLocal_7773 = 0;
	var uLocal_7774 = 0;
	var uLocal_7775 = 0;
	var uLocal_7776 = 3;
	var uLocal_7777 = 0;
	var uLocal_7778 = 0;
	var uLocal_7779 = 0;
	var uLocal_7780 = 0;
	var uLocal_7781 = -1;
	var uLocal_7782 = 0;
	var uLocal_7783 = 5;
	var uLocal_7784 = 0;
	var uLocal_7785 = 0;
	var uLocal_7786 = 0;
	var uLocal_7787 = 0;
	var uLocal_7788 = 0;
	var uLocal_7789 = 0;
	var uLocal_7790 = 0;
	var uLocal_7791 = 0;
	var uLocal_7792 = 0;
	var uLocal_7793 = 0;
	var uLocal_7794 = 10;
	var uLocal_7795 = 3;
	var uLocal_7796 = 500;
	var uLocal_7797 = 10000;
	var uLocal_7798 = 0;
	var uLocal_7799 = 3;
	var uLocal_7800 = 500;
	var uLocal_7801 = 10000;
	var uLocal_7802 = 0;
	var uLocal_7803 = 3;
	var uLocal_7804 = 500;
	var uLocal_7805 = 10000;
	var uLocal_7806 = 0;
	var uLocal_7807 = 3;
	var uLocal_7808 = 500;
	var uLocal_7809 = 10000;
	var uLocal_7810 = 0;
	var uLocal_7811 = 3;
	var uLocal_7812 = 500;
	var uLocal_7813 = 10000;
	var uLocal_7814 = 0;
	var uLocal_7815 = 3;
	var uLocal_7816 = 500;
	var uLocal_7817 = 10000;
	var uLocal_7818 = 0;
	var uLocal_7819 = 3;
	var uLocal_7820 = 500;
	var uLocal_7821 = 10000;
	var uLocal_7822 = 0;
	var uLocal_7823 = 3;
	var uLocal_7824 = 500;
	var uLocal_7825 = 10000;
	var uLocal_7826 = 0;
	var uLocal_7827 = 3;
	var uLocal_7828 = 500;
	var uLocal_7829 = 10000;
	var uLocal_7830 = 0;
	var uLocal_7831 = 3;
	var uLocal_7832 = 500;
	var uLocal_7833 = 10000;
	var uLocal_7834 = 0;
	var uLocal_7835 = 0;
	var uLocal_7836 = 0;
	var uLocal_7837 = 0;
	var uLocal_7838 = 0;
	var uLocal_7839 = 0;
	var uLocal_7840 = 0;
	var uLocal_7841 = 3;
	var uLocal_7842 = 0;
	var uLocal_7843 = 0;
	var uLocal_7844 = 0;
	var uLocal_7845 = 0;
	var uLocal_7846 = -1;
	var uLocal_7847 = 0;
	var uLocal_7848 = 5;
	var uLocal_7849 = 0;
	var uLocal_7850 = 0;
	var uLocal_7851 = 0;
	var uLocal_7852 = 0;
	var uLocal_7853 = 0;
	var uLocal_7854 = 0;
	var uLocal_7855 = 0;
	var uLocal_7856 = 0;
	var uLocal_7857 = 0;
	var uLocal_7858 = 0;
	var uLocal_7859 = 10;
	var uLocal_7860 = 3;
	var uLocal_7861 = 500;
	var uLocal_7862 = 10000;
	var uLocal_7863 = 0;
	var uLocal_7864 = 3;
	var uLocal_7865 = 500;
	var uLocal_7866 = 10000;
	var uLocal_7867 = 0;
	var uLocal_7868 = 3;
	var uLocal_7869 = 500;
	var uLocal_7870 = 10000;
	var uLocal_7871 = 0;
	var uLocal_7872 = 3;
	var uLocal_7873 = 500;
	var uLocal_7874 = 10000;
	var uLocal_7875 = 0;
	var uLocal_7876 = 3;
	var uLocal_7877 = 500;
	var uLocal_7878 = 10000;
	var uLocal_7879 = 0;
	var uLocal_7880 = 3;
	var uLocal_7881 = 500;
	var uLocal_7882 = 10000;
	var uLocal_7883 = 0;
	var uLocal_7884 = 3;
	var uLocal_7885 = 500;
	var uLocal_7886 = 10000;
	var uLocal_7887 = 0;
	var uLocal_7888 = 3;
	var uLocal_7889 = 500;
	var uLocal_7890 = 10000;
	var uLocal_7891 = 0;
	var uLocal_7892 = 3;
	var uLocal_7893 = 500;
	var uLocal_7894 = 10000;
	var uLocal_7895 = 0;
	var uLocal_7896 = 3;
	var uLocal_7897 = 500;
	var uLocal_7898 = 10000;
	var uLocal_7899 = 0;
	var uLocal_7900 = 0;
	var uLocal_7901 = 0;
	var uLocal_7902 = 0;
	var uLocal_7903 = 0;
	var uLocal_7904 = 0;
	var uLocal_7905 = 0;
	var uLocal_7906 = 3;
	var uLocal_7907 = 0;
	var uLocal_7908 = 0;
	var uLocal_7909 = 0;
	var uLocal_7910 = 0;
	var uLocal_7911 = -1;
	var uLocal_7912 = 0;
	var uLocal_7913 = 5;
	var uLocal_7914 = 0;
	var uLocal_7915 = 0;
	var uLocal_7916 = 0;
	var uLocal_7917 = 0;
	var uLocal_7918 = 0;
	var uLocal_7919 = 0;
	var uLocal_7920 = 0;
	var uLocal_7921 = 0;
	var uLocal_7922 = 0;
	var uLocal_7923 = 0;
	var uLocal_7924 = 10;
	var uLocal_7925 = 3;
	var uLocal_7926 = 500;
	var uLocal_7927 = 10000;
	var uLocal_7928 = 0;
	var uLocal_7929 = 3;
	var uLocal_7930 = 500;
	var uLocal_7931 = 10000;
	var uLocal_7932 = 0;
	var uLocal_7933 = 3;
	var uLocal_7934 = 500;
	var uLocal_7935 = 10000;
	var uLocal_7936 = 0;
	var uLocal_7937 = 3;
	var uLocal_7938 = 500;
	var uLocal_7939 = 10000;
	var uLocal_7940 = 0;
	var uLocal_7941 = 3;
	var uLocal_7942 = 500;
	var uLocal_7943 = 10000;
	var uLocal_7944 = 0;
	var uLocal_7945 = 3;
	var uLocal_7946 = 500;
	var uLocal_7947 = 10000;
	var uLocal_7948 = 0;
	var uLocal_7949 = 3;
	var uLocal_7950 = 500;
	var uLocal_7951 = 10000;
	var uLocal_7952 = 0;
	var uLocal_7953 = 3;
	var uLocal_7954 = 500;
	var uLocal_7955 = 10000;
	var uLocal_7956 = 0;
	var uLocal_7957 = 3;
	var uLocal_7958 = 500;
	var uLocal_7959 = 10000;
	var uLocal_7960 = 0;
	var uLocal_7961 = 3;
	var uLocal_7962 = 500;
	var uLocal_7963 = 10000;
	var uLocal_7964 = 0;
	var uLocal_7965 = 0;
	var uLocal_7966 = 0;
	var uLocal_7967 = 0;
	var uLocal_7968 = 0;
	var uLocal_7969 = 0;
	var uLocal_7970 = 0;
	var uLocal_7971 = 3;
	var uLocal_7972 = 0;
	var uLocal_7973 = 0;
	var uLocal_7974 = 0;
	var uLocal_7975 = 0;
	var uLocal_7976 = -1;
	var uLocal_7977 = 0;
	var uLocal_7978 = 5;
	var uLocal_7979 = 0;
	var uLocal_7980 = 0;
	var uLocal_7981 = 0;
	var uLocal_7982 = 0;
	var uLocal_7983 = 0;
	var uLocal_7984 = 0;
	var uLocal_7985 = 0;
	var uLocal_7986 = 0;
	var uLocal_7987 = 0;
	var uLocal_7988 = 0;
	var uLocal_7989 = 10;
	var uLocal_7990 = 3;
	var uLocal_7991 = 500;
	var uLocal_7992 = 10000;
	var uLocal_7993 = 0;
	var uLocal_7994 = 3;
	var uLocal_7995 = 500;
	var uLocal_7996 = 10000;
	var uLocal_7997 = 0;
	var uLocal_7998 = 3;
	var uLocal_7999 = 500;
	var uLocal_8000 = 10000;
	var uLocal_8001 = 0;
	var uLocal_8002 = 3;
	var uLocal_8003 = 500;
	var uLocal_8004 = 10000;
	var uLocal_8005 = 0;
	var uLocal_8006 = 3;
	var uLocal_8007 = 500;
	var uLocal_8008 = 10000;
	var uLocal_8009 = 0;
	var uLocal_8010 = 3;
	var uLocal_8011 = 500;
	var uLocal_8012 = 10000;
	var uLocal_8013 = 0;
	var uLocal_8014 = 3;
	var uLocal_8015 = 500;
	var uLocal_8016 = 10000;
	var uLocal_8017 = 0;
	var uLocal_8018 = 3;
	var uLocal_8019 = 500;
	var uLocal_8020 = 10000;
	var uLocal_8021 = 0;
	var uLocal_8022 = 3;
	var uLocal_8023 = 500;
	var uLocal_8024 = 10000;
	var uLocal_8025 = 0;
	var uLocal_8026 = 3;
	var uLocal_8027 = 500;
	var uLocal_8028 = 10000;
	var uLocal_8029 = 0;
	var uLocal_8030 = 0;
	var uLocal_8031 = 0;
	var uLocal_8032 = 0;
	var uLocal_8033 = 0;
	var uLocal_8034 = 0;
	var uLocal_8035 = 0;
	var uLocal_8036 = 3;
	var uLocal_8037 = 0;
	var uLocal_8038 = 0;
	var uLocal_8039 = 0;
	var uLocal_8040 = 0;
	var uLocal_8041 = -1;
	var uLocal_8042 = 0;
	var uLocal_8043 = 5;
	var uLocal_8044 = 0;
	var uLocal_8045 = 0;
	var uLocal_8046 = 0;
	var uLocal_8047 = 0;
	var uLocal_8048 = 0;
	var uLocal_8049 = 0;
	var uLocal_8050 = 0;
	var uLocal_8051 = 0;
	var uLocal_8052 = 0;
	var uLocal_8053 = 0;
	var uLocal_8054 = 10;
	var uLocal_8055 = 3;
	var uLocal_8056 = 500;
	var uLocal_8057 = 10000;
	var uLocal_8058 = 0;
	var uLocal_8059 = 3;
	var uLocal_8060 = 500;
	var uLocal_8061 = 10000;
	var uLocal_8062 = 0;
	var uLocal_8063 = 3;
	var uLocal_8064 = 500;
	var uLocal_8065 = 10000;
	var uLocal_8066 = 0;
	var uLocal_8067 = 3;
	var uLocal_8068 = 500;
	var uLocal_8069 = 10000;
	var uLocal_8070 = 0;
	var uLocal_8071 = 3;
	var uLocal_8072 = 500;
	var uLocal_8073 = 10000;
	var uLocal_8074 = 0;
	var uLocal_8075 = 3;
	var uLocal_8076 = 500;
	var uLocal_8077 = 10000;
	var uLocal_8078 = 0;
	var uLocal_8079 = 3;
	var uLocal_8080 = 500;
	var uLocal_8081 = 10000;
	var uLocal_8082 = 0;
	var uLocal_8083 = 3;
	var uLocal_8084 = 500;
	var uLocal_8085 = 10000;
	var uLocal_8086 = 0;
	var uLocal_8087 = 3;
	var uLocal_8088 = 500;
	var uLocal_8089 = 10000;
	var uLocal_8090 = 0;
	var uLocal_8091 = 3;
	var uLocal_8092 = 500;
	var uLocal_8093 = 10000;
	var uLocal_8094 = 0;
	var uLocal_8095 = 0;
	var uLocal_8096 = 0;
	var uLocal_8097 = 0;
	var uLocal_8098 = 0;
	var uLocal_8099 = 0;
	var uLocal_8100 = 0;
	var uLocal_8101 = 3;
	var uLocal_8102 = 0;
	var uLocal_8103 = 0;
	var uLocal_8104 = 0;
	var uLocal_8105 = 0;
	var uLocal_8106 = -1;
	var uLocal_8107 = 0;
	var uLocal_8108 = 5;
	var uLocal_8109 = 0;
	var uLocal_8110 = 0;
	var uLocal_8111 = 0;
	var uLocal_8112 = 0;
	var uLocal_8113 = 0;
	var uLocal_8114 = 0;
	var uLocal_8115 = 0;
	var uLocal_8116 = 0;
	var uLocal_8117 = 0;
	var uLocal_8118 = 0;
	var uLocal_8119 = 10;
	var uLocal_8120 = 3;
	var uLocal_8121 = 500;
	var uLocal_8122 = 10000;
	var uLocal_8123 = 0;
	var uLocal_8124 = 3;
	var uLocal_8125 = 500;
	var uLocal_8126 = 10000;
	var uLocal_8127 = 0;
	var uLocal_8128 = 3;
	var uLocal_8129 = 500;
	var uLocal_8130 = 10000;
	var uLocal_8131 = 0;
	var uLocal_8132 = 3;
	var uLocal_8133 = 500;
	var uLocal_8134 = 10000;
	var uLocal_8135 = 0;
	var uLocal_8136 = 3;
	var uLocal_8137 = 500;
	var uLocal_8138 = 10000;
	var uLocal_8139 = 0;
	var uLocal_8140 = 3;
	var uLocal_8141 = 500;
	var uLocal_8142 = 10000;
	var uLocal_8143 = 0;
	var uLocal_8144 = 3;
	var uLocal_8145 = 500;
	var uLocal_8146 = 10000;
	var uLocal_8147 = 0;
	var uLocal_8148 = 3;
	var uLocal_8149 = 500;
	var uLocal_8150 = 10000;
	var uLocal_8151 = 0;
	var uLocal_8152 = 3;
	var uLocal_8153 = 500;
	var uLocal_8154 = 10000;
	var uLocal_8155 = 0;
	var uLocal_8156 = 3;
	var uLocal_8157 = 500;
	var uLocal_8158 = 10000;
	var uLocal_8159 = 0;
	var uLocal_8160 = 0;
	var uLocal_8161 = 0;
	var uLocal_8162 = 0;
	var uLocal_8163 = 0;
	var uLocal_8164 = 0;
	var uLocal_8165 = 0;
	var uLocal_8166 = 3;
	var uLocal_8167 = 0;
	var uLocal_8168 = 0;
	var uLocal_8169 = 0;
	var uLocal_8170 = 0;
	var uLocal_8171 = -1;
	var uLocal_8172 = 0;
	var uLocal_8173 = 5;
	var uLocal_8174 = 0;
	var uLocal_8175 = 0;
	var uLocal_8176 = 0;
	var uLocal_8177 = 0;
	var uLocal_8178 = 0;
	var uLocal_8179 = 0;
	var uLocal_8180 = 0;
	var uLocal_8181 = 0;
	var uLocal_8182 = 0;
	var uLocal_8183 = 0;
	var uLocal_8184 = 10;
	var uLocal_8185 = 3;
	var uLocal_8186 = 500;
	var uLocal_8187 = 10000;
	var uLocal_8188 = 0;
	var uLocal_8189 = 3;
	var uLocal_8190 = 500;
	var uLocal_8191 = 10000;
	var uLocal_8192 = 0;
	var uLocal_8193 = 3;
	var uLocal_8194 = 500;
	var uLocal_8195 = 10000;
	var uLocal_8196 = 0;
	var uLocal_8197 = 3;
	var uLocal_8198 = 500;
	var uLocal_8199 = 10000;
	var uLocal_8200 = 0;
	var uLocal_8201 = 3;
	var uLocal_8202 = 500;
	var uLocal_8203 = 10000;
	var uLocal_8204 = 0;
	var uLocal_8205 = 3;
	var uLocal_8206 = 500;
	var uLocal_8207 = 10000;
	var uLocal_8208 = 0;
	var uLocal_8209 = 3;
	var uLocal_8210 = 500;
	var uLocal_8211 = 10000;
	var uLocal_8212 = 0;
	var uLocal_8213 = 3;
	var uLocal_8214 = 500;
	var uLocal_8215 = 10000;
	var uLocal_8216 = 0;
	var uLocal_8217 = 3;
	var uLocal_8218 = 500;
	var uLocal_8219 = 10000;
	var uLocal_8220 = 0;
	var uLocal_8221 = 3;
	var uLocal_8222 = 500;
	var uLocal_8223 = 10000;
	var uLocal_8224 = 0;
	var uLocal_8225 = 0;
	var uLocal_8226 = 0;
	var uLocal_8227 = 0;
	var uLocal_8228 = 0;
	var uLocal_8229 = 0;
	var uLocal_8230 = 0;
	var uLocal_8231 = 3;
	var uLocal_8232 = 0;
	var uLocal_8233 = 0;
	var uLocal_8234 = 0;
	var uLocal_8235 = 0;
	var uLocal_8236 = -1;
	var uLocal_8237 = 0;
	var uLocal_8238 = 5;
	var uLocal_8239 = 0;
	var uLocal_8240 = 0;
	var uLocal_8241 = 0;
	var uLocal_8242 = 0;
	var uLocal_8243 = 0;
	var uLocal_8244 = 0;
	var uLocal_8245 = 0;
	var uLocal_8246 = 0;
	var uLocal_8247 = 0;
	var uLocal_8248 = 0;
	var uLocal_8249 = 10;
	var uLocal_8250 = 3;
	var uLocal_8251 = 500;
	var uLocal_8252 = 10000;
	var uLocal_8253 = 0;
	var uLocal_8254 = 3;
	var uLocal_8255 = 500;
	var uLocal_8256 = 10000;
	var uLocal_8257 = 0;
	var uLocal_8258 = 3;
	var uLocal_8259 = 500;
	var uLocal_8260 = 10000;
	var uLocal_8261 = 0;
	var uLocal_8262 = 3;
	var uLocal_8263 = 500;
	var uLocal_8264 = 10000;
	var uLocal_8265 = 0;
	var uLocal_8266 = 3;
	var uLocal_8267 = 500;
	var uLocal_8268 = 10000;
	var uLocal_8269 = 0;
	var uLocal_8270 = 3;
	var uLocal_8271 = 500;
	var uLocal_8272 = 10000;
	var uLocal_8273 = 0;
	var uLocal_8274 = 3;
	var uLocal_8275 = 500;
	var uLocal_8276 = 10000;
	var uLocal_8277 = 0;
	var uLocal_8278 = 3;
	var uLocal_8279 = 500;
	var uLocal_8280 = 10000;
	var uLocal_8281 = 0;
	var uLocal_8282 = 3;
	var uLocal_8283 = 500;
	var uLocal_8284 = 10000;
	var uLocal_8285 = 0;
	var uLocal_8286 = 3;
	var uLocal_8287 = 500;
	var uLocal_8288 = 10000;
	var uLocal_8289 = 0;
	var uLocal_8290 = 0;
	var uLocal_8291 = 0;
	var uLocal_8292 = 0;
	var uLocal_8293 = 0;
	var uLocal_8294 = 0;
	var uLocal_8295 = 0;
	var uLocal_8296 = 3;
	var uLocal_8297 = 0;
	var uLocal_8298 = 0;
	var uLocal_8299 = 0;
	var uLocal_8300 = 0;
	var uLocal_8301 = -1;
	var uLocal_8302 = 0;
	var uLocal_8303 = 5;
	var uLocal_8304 = 0;
	var uLocal_8305 = 0;
	var uLocal_8306 = 0;
	var uLocal_8307 = 0;
	var uLocal_8308 = 0;
	var uLocal_8309 = 0;
	var uLocal_8310 = 0;
	var uLocal_8311 = 0;
	var uLocal_8312 = 0;
	var uLocal_8313 = 0;
	var uLocal_8314 = 10;
	var uLocal_8315 = 3;
	var uLocal_8316 = 500;
	var uLocal_8317 = 10000;
	var uLocal_8318 = 0;
	var uLocal_8319 = 3;
	var uLocal_8320 = 500;
	var uLocal_8321 = 10000;
	var uLocal_8322 = 0;
	var uLocal_8323 = 3;
	var uLocal_8324 = 500;
	var uLocal_8325 = 10000;
	var uLocal_8326 = 0;
	var uLocal_8327 = 3;
	var uLocal_8328 = 500;
	var uLocal_8329 = 10000;
	var uLocal_8330 = 0;
	var uLocal_8331 = 3;
	var uLocal_8332 = 500;
	var uLocal_8333 = 10000;
	var uLocal_8334 = 0;
	var uLocal_8335 = 3;
	var uLocal_8336 = 500;
	var uLocal_8337 = 10000;
	var uLocal_8338 = 0;
	var uLocal_8339 = 3;
	var uLocal_8340 = 500;
	var uLocal_8341 = 10000;
	var uLocal_8342 = 0;
	var uLocal_8343 = 3;
	var uLocal_8344 = 500;
	var uLocal_8345 = 10000;
	var uLocal_8346 = 0;
	var uLocal_8347 = 3;
	var uLocal_8348 = 500;
	var uLocal_8349 = 10000;
	var uLocal_8350 = 0;
	var uLocal_8351 = 3;
	var uLocal_8352 = 500;
	var uLocal_8353 = 10000;
	var uLocal_8354 = 0;
	var uLocal_8355 = 0;
	var uLocal_8356 = 0;
	var uLocal_8357 = 0;
	var uLocal_8358 = 0;
	var uLocal_8359 = 0;
	var uLocal_8360 = 0;
	var uLocal_8361 = 3;
	var uLocal_8362 = 0;
	var uLocal_8363 = 0;
	var uLocal_8364 = 0;
	var uLocal_8365 = 0;
	var uLocal_8366 = -1;
	var uLocal_8367 = 0;
	var uLocal_8368 = 5;
	var uLocal_8369 = 0;
	var uLocal_8370 = 0;
	var uLocal_8371 = 0;
	var uLocal_8372 = 0;
	var uLocal_8373 = 0;
	var uLocal_8374 = 0;
	var uLocal_8375 = 0;
	var uLocal_8376 = 0;
	var uLocal_8377 = 0;
	var uLocal_8378 = 0;
	var uLocal_8379 = 10;
	var uLocal_8380 = 3;
	var uLocal_8381 = 500;
	var uLocal_8382 = 10000;
	var uLocal_8383 = 0;
	var uLocal_8384 = 3;
	var uLocal_8385 = 500;
	var uLocal_8386 = 10000;
	var uLocal_8387 = 0;
	var uLocal_8388 = 3;
	var uLocal_8389 = 500;
	var uLocal_8390 = 10000;
	var uLocal_8391 = 0;
	var uLocal_8392 = 3;
	var uLocal_8393 = 500;
	var uLocal_8394 = 10000;
	var uLocal_8395 = 0;
	var uLocal_8396 = 3;
	var uLocal_8397 = 500;
	var uLocal_8398 = 10000;
	var uLocal_8399 = 0;
	var uLocal_8400 = 3;
	var uLocal_8401 = 500;
	var uLocal_8402 = 10000;
	var uLocal_8403 = 0;
	var uLocal_8404 = 3;
	var uLocal_8405 = 500;
	var uLocal_8406 = 10000;
	var uLocal_8407 = 0;
	var uLocal_8408 = 3;
	var uLocal_8409 = 500;
	var uLocal_8410 = 10000;
	var uLocal_8411 = 0;
	var uLocal_8412 = 3;
	var uLocal_8413 = 500;
	var uLocal_8414 = 10000;
	var uLocal_8415 = 0;
	var uLocal_8416 = 3;
	var uLocal_8417 = 500;
	var uLocal_8418 = 10000;
	var uLocal_8419 = 0;
	var uLocal_8420 = 0;
	var uLocal_8421 = 0;
	var uLocal_8422 = 0;
	var uLocal_8423 = 0;
	var uLocal_8424 = 0;
	var uLocal_8425 = 0;
	var uLocal_8426 = 3;
	var uLocal_8427 = 0;
	var uLocal_8428 = 0;
	var uLocal_8429 = 0;
	var uLocal_8430 = 0;
	var uLocal_8431 = -1;
	var uLocal_8432 = 0;
	var uLocal_8433 = 5;
	var uLocal_8434 = 0;
	var uLocal_8435 = 0;
	var uLocal_8436 = 0;
	var uLocal_8437 = 0;
	var uLocal_8438 = 0;
	var uLocal_8439 = 0;
	var uLocal_8440 = 0;
	var uLocal_8441 = 0;
	var uLocal_8442 = 0;
	var uLocal_8443 = 0;
	var uLocal_8444 = 10;
	var uLocal_8445 = 3;
	var uLocal_8446 = 500;
	var uLocal_8447 = 10000;
	var uLocal_8448 = 0;
	var uLocal_8449 = 3;
	var uLocal_8450 = 500;
	var uLocal_8451 = 10000;
	var uLocal_8452 = 0;
	var uLocal_8453 = 3;
	var uLocal_8454 = 500;
	var uLocal_8455 = 10000;
	var uLocal_8456 = 0;
	var uLocal_8457 = 3;
	var uLocal_8458 = 500;
	var uLocal_8459 = 10000;
	var uLocal_8460 = 0;
	var uLocal_8461 = 3;
	var uLocal_8462 = 500;
	var uLocal_8463 = 10000;
	var uLocal_8464 = 0;
	var uLocal_8465 = 3;
	var uLocal_8466 = 500;
	var uLocal_8467 = 10000;
	var uLocal_8468 = 0;
	var uLocal_8469 = 3;
	var uLocal_8470 = 500;
	var uLocal_8471 = 10000;
	var uLocal_8472 = 0;
	var uLocal_8473 = 3;
	var uLocal_8474 = 500;
	var uLocal_8475 = 10000;
	var uLocal_8476 = 0;
	var uLocal_8477 = 3;
	var uLocal_8478 = 500;
	var uLocal_8479 = 10000;
	var uLocal_8480 = 0;
	var uLocal_8481 = 3;
	var uLocal_8482 = 500;
	var uLocal_8483 = 10000;
	var uLocal_8484 = 0;
	var uLocal_8485 = 0;
	var uLocal_8486 = 0;
	var uLocal_8487 = 0;
	var uLocal_8488 = 0;
	var uLocal_8489 = 0;
	var uLocal_8490 = 0;
	var uLocal_8491 = 3;
	var uLocal_8492 = 0;
	var uLocal_8493 = 0;
	var uLocal_8494 = 0;
	var uLocal_8495 = 0;
	var uLocal_8496 = -1;
	var uLocal_8497 = 0;
	var uLocal_8498 = 5;
	var uLocal_8499 = 0;
	var uLocal_8500 = 0;
	var uLocal_8501 = 0;
	var uLocal_8502 = 0;
	var uLocal_8503 = 0;
	var uLocal_8504 = 0;
	var uLocal_8505 = 0;
	var uLocal_8506 = 0;
	var uLocal_8507 = 0;
	var uLocal_8508 = 0;
	var uLocal_8509 = 10;
	var uLocal_8510 = 3;
	var uLocal_8511 = 500;
	var uLocal_8512 = 10000;
	var uLocal_8513 = 0;
	var uLocal_8514 = 3;
	var uLocal_8515 = 500;
	var uLocal_8516 = 10000;
	var uLocal_8517 = 0;
	var uLocal_8518 = 3;
	var uLocal_8519 = 500;
	var uLocal_8520 = 10000;
	var uLocal_8521 = 0;
	var uLocal_8522 = 3;
	var uLocal_8523 = 500;
	var uLocal_8524 = 10000;
	var uLocal_8525 = 0;
	var uLocal_8526 = 3;
	var uLocal_8527 = 500;
	var uLocal_8528 = 10000;
	var uLocal_8529 = 0;
	var uLocal_8530 = 3;
	var uLocal_8531 = 500;
	var uLocal_8532 = 10000;
	var uLocal_8533 = 0;
	var uLocal_8534 = 3;
	var uLocal_8535 = 500;
	var uLocal_8536 = 10000;
	var uLocal_8537 = 0;
	var uLocal_8538 = 3;
	var uLocal_8539 = 500;
	var uLocal_8540 = 10000;
	var uLocal_8541 = 0;
	var uLocal_8542 = 3;
	var uLocal_8543 = 500;
	var uLocal_8544 = 10000;
	var uLocal_8545 = 0;
	var uLocal_8546 = 3;
	var uLocal_8547 = 500;
	var uLocal_8548 = 10000;
	var uLocal_8549 = 0;
	var uLocal_8550 = 0;
	var uLocal_8551 = 0;
	var uLocal_8552 = 0;
	var uLocal_8553 = 0;
	var uLocal_8554 = 0;
	var uLocal_8555 = 0;
	var uLocal_8556 = 3;
	var uLocal_8557 = 0;
	var uLocal_8558 = 0;
	var uLocal_8559 = 0;
	var uLocal_8560 = 0;
	var uLocal_8561 = -1;
	var uLocal_8562 = 0;
	var uLocal_8563 = 5;
	var uLocal_8564 = 0;
	var uLocal_8565 = 0;
	var uLocal_8566 = 0;
	var uLocal_8567 = 0;
	var uLocal_8568 = 0;
	var uLocal_8569 = 0;
	var uLocal_8570 = 0;
	var uLocal_8571 = 0;
	var uLocal_8572 = 0;
	var uLocal_8573 = 0;
	var uLocal_8574 = 10;
	var uLocal_8575 = 3;
	var uLocal_8576 = 500;
	var uLocal_8577 = 10000;
	var uLocal_8578 = 0;
	var uLocal_8579 = 3;
	var uLocal_8580 = 500;
	var uLocal_8581 = 10000;
	var uLocal_8582 = 0;
	var uLocal_8583 = 3;
	var uLocal_8584 = 500;
	var uLocal_8585 = 10000;
	var uLocal_8586 = 0;
	var uLocal_8587 = 3;
	var uLocal_8588 = 500;
	var uLocal_8589 = 10000;
	var uLocal_8590 = 0;
	var uLocal_8591 = 3;
	var uLocal_8592 = 500;
	var uLocal_8593 = 10000;
	var uLocal_8594 = 0;
	var uLocal_8595 = 3;
	var uLocal_8596 = 500;
	var uLocal_8597 = 10000;
	var uLocal_8598 = 0;
	var uLocal_8599 = 3;
	var uLocal_8600 = 500;
	var uLocal_8601 = 10000;
	var uLocal_8602 = 0;
	var uLocal_8603 = 3;
	var uLocal_8604 = 500;
	var uLocal_8605 = 10000;
	var uLocal_8606 = 0;
	var uLocal_8607 = 3;
	var uLocal_8608 = 500;
	var uLocal_8609 = 10000;
	var uLocal_8610 = 0;
	var uLocal_8611 = 3;
	var uLocal_8612 = 500;
	var uLocal_8613 = 10000;
	var uLocal_8614 = 0;
	var uLocal_8615 = 0;
	var uLocal_8616 = 0;
	var uLocal_8617 = 0;
	var uLocal_8618 = 0;
	var uLocal_8619 = 0;
	var uLocal_8620 = 0;
	var uLocal_8621 = 3;
	var uLocal_8622 = 0;
	var uLocal_8623 = 0;
	var uLocal_8624 = 0;
	var uLocal_8625 = 0;
	var uLocal_8626 = -1;
	var uLocal_8627 = 0;
	var uLocal_8628 = 5;
	var uLocal_8629 = 0;
	var uLocal_8630 = 0;
	var uLocal_8631 = 0;
	var uLocal_8632 = 0;
	var uLocal_8633 = 0;
	var uLocal_8634 = 0;
	var uLocal_8635 = 0;
	var uLocal_8636 = 0;
	var uLocal_8637 = 0;
	var uLocal_8638 = 0;
	var uLocal_8639 = 10;
	var uLocal_8640 = 3;
	var uLocal_8641 = 500;
	var uLocal_8642 = 10000;
	var uLocal_8643 = 0;
	var uLocal_8644 = 3;
	var uLocal_8645 = 500;
	var uLocal_8646 = 10000;
	var uLocal_8647 = 0;
	var uLocal_8648 = 3;
	var uLocal_8649 = 500;
	var uLocal_8650 = 10000;
	var uLocal_8651 = 0;
	var uLocal_8652 = 3;
	var uLocal_8653 = 500;
	var uLocal_8654 = 10000;
	var uLocal_8655 = 0;
	var uLocal_8656 = 3;
	var uLocal_8657 = 500;
	var uLocal_8658 = 10000;
	var uLocal_8659 = 0;
	var uLocal_8660 = 3;
	var uLocal_8661 = 500;
	var uLocal_8662 = 10000;
	var uLocal_8663 = 0;
	var uLocal_8664 = 3;
	var uLocal_8665 = 500;
	var uLocal_8666 = 10000;
	var uLocal_8667 = 0;
	var uLocal_8668 = 3;
	var uLocal_8669 = 500;
	var uLocal_8670 = 10000;
	var uLocal_8671 = 0;
	var uLocal_8672 = 3;
	var uLocal_8673 = 500;
	var uLocal_8674 = 10000;
	var uLocal_8675 = 0;
	var uLocal_8676 = 3;
	var uLocal_8677 = 500;
	var uLocal_8678 = 10000;
	var uLocal_8679 = 0;
	var uLocal_8680 = 0;
	var uLocal_8681 = 0;
	var uLocal_8682 = 0;
	var uLocal_8683 = 0;
	var uLocal_8684 = 0;
	var uLocal_8685 = 0;
	var uLocal_8686 = 3;
	var uLocal_8687 = 0;
	var uLocal_8688 = 0;
	var uLocal_8689 = 0;
	var uLocal_8690 = 0;
	var uLocal_8691 = -1;
	var uLocal_8692 = 0;
	var uLocal_8693 = 5;
	var uLocal_8694 = 0;
	var uLocal_8695 = 0;
	var uLocal_8696 = 0;
	var uLocal_8697 = 0;
	var uLocal_8698 = 0;
	var uLocal_8699 = 0;
	var uLocal_8700 = 0;
	var uLocal_8701 = 0;
	var uLocal_8702 = 0;
	var uLocal_8703 = 0;
	var uLocal_8704 = 10;
	var uLocal_8705 = 3;
	var uLocal_8706 = 500;
	var uLocal_8707 = 10000;
	var uLocal_8708 = 0;
	var uLocal_8709 = 3;
	var uLocal_8710 = 500;
	var uLocal_8711 = 10000;
	var uLocal_8712 = 0;
	var uLocal_8713 = 3;
	var uLocal_8714 = 500;
	var uLocal_8715 = 10000;
	var uLocal_8716 = 0;
	var uLocal_8717 = 3;
	var uLocal_8718 = 500;
	var uLocal_8719 = 10000;
	var uLocal_8720 = 0;
	var uLocal_8721 = 3;
	var uLocal_8722 = 500;
	var uLocal_8723 = 10000;
	var uLocal_8724 = 0;
	var uLocal_8725 = 3;
	var uLocal_8726 = 500;
	var uLocal_8727 = 10000;
	var uLocal_8728 = 0;
	var uLocal_8729 = 3;
	var uLocal_8730 = 500;
	var uLocal_8731 = 10000;
	var uLocal_8732 = 0;
	var uLocal_8733 = 3;
	var uLocal_8734 = 500;
	var uLocal_8735 = 10000;
	var uLocal_8736 = 0;
	var uLocal_8737 = 3;
	var uLocal_8738 = 500;
	var uLocal_8739 = 10000;
	var uLocal_8740 = 0;
	var uLocal_8741 = 3;
	var uLocal_8742 = 500;
	var uLocal_8743 = 10000;
	var uLocal_8744 = 0;
	var uLocal_8745 = 0;
	var uLocal_8746 = 0;
	var uLocal_8747 = 0;
	var uLocal_8748 = 0;
	var uLocal_8749 = 0;
	var uLocal_8750 = 0;
	var uLocal_8751 = 3;
	var uLocal_8752 = 0;
	var uLocal_8753 = 0;
	var uLocal_8754 = 0;
	var uLocal_8755 = 0;
	var uLocal_8756 = -1;
	var uLocal_8757 = 0;
	var uLocal_8758 = 5;
	var uLocal_8759 = 0;
	var uLocal_8760 = 0;
	var uLocal_8761 = 0;
	var uLocal_8762 = 0;
	var uLocal_8763 = 0;
	var uLocal_8764 = 0;
	var uLocal_8765 = 0;
	var uLocal_8766 = 0;
	var uLocal_8767 = 0;
	var uLocal_8768 = 0;
	var uLocal_8769 = 10;
	var uLocal_8770 = 3;
	var uLocal_8771 = 500;
	var uLocal_8772 = 10000;
	var uLocal_8773 = 0;
	var uLocal_8774 = 3;
	var uLocal_8775 = 500;
	var uLocal_8776 = 10000;
	var uLocal_8777 = 0;
	var uLocal_8778 = 3;
	var uLocal_8779 = 500;
	var uLocal_8780 = 10000;
	var uLocal_8781 = 0;
	var uLocal_8782 = 3;
	var uLocal_8783 = 500;
	var uLocal_8784 = 10000;
	var uLocal_8785 = 0;
	var uLocal_8786 = 3;
	var uLocal_8787 = 500;
	var uLocal_8788 = 10000;
	var uLocal_8789 = 0;
	var uLocal_8790 = 3;
	var uLocal_8791 = 500;
	var uLocal_8792 = 10000;
	var uLocal_8793 = 0;
	var uLocal_8794 = 3;
	var uLocal_8795 = 500;
	var uLocal_8796 = 10000;
	var uLocal_8797 = 0;
	var uLocal_8798 = 3;
	var uLocal_8799 = 500;
	var uLocal_8800 = 10000;
	var uLocal_8801 = 0;
	var uLocal_8802 = 3;
	var uLocal_8803 = 500;
	var uLocal_8804 = 10000;
	var uLocal_8805 = 0;
	var uLocal_8806 = 3;
	var uLocal_8807 = 500;
	var uLocal_8808 = 10000;
	var uLocal_8809 = 0;
	var uLocal_8810 = 0;
	var uLocal_8811 = 0;
	var uLocal_8812 = 1;
	var uLocal_8813 = 0;
	var uLocal_8814 = 0;
	var uLocal_8815 = 0;
	var uLocal_8816 = 0;
	var uLocal_8817 = 0;
	var uLocal_8818 = 0;
	var uLocal_8819 = 0;
	var uLocal_8820 = 0;
	var uLocal_8821 = 0;
	var uLocal_8822 = 0;
	var uLocal_8823 = 0;
	var uLocal_8824 = 0;
	var uLocal_8825 = 65;
	var uLocal_8826 = 0;
	var uLocal_8827 = 0;
	var uLocal_8828 = 0;
	var uLocal_8829 = 0;
	var uLocal_8830 = 0;
	var uLocal_8831 = 0;
	var uLocal_8832 = 0;
	var uLocal_8833 = 0;
	var uLocal_8834 = 0;
	var uLocal_8835 = 0;
	var uLocal_8836 = 0;
	var uLocal_8837 = 0;
	var uLocal_8838 = 0;
	var uLocal_8839 = 0;
	var uLocal_8840 = 0;
	var uLocal_8841 = 0;
	var uLocal_8842 = 0;
	var uLocal_8843 = 0;
	var uLocal_8844 = 0;
	var uLocal_8845 = 0;
	var uLocal_8846 = 0;
	var uLocal_8847 = 0;
	var uLocal_8848 = 0;
	var uLocal_8849 = 0;
	var uLocal_8850 = 0;
	var uLocal_8851 = 0;
	var uLocal_8852 = 0;
	var uLocal_8853 = 0;
	var uLocal_8854 = 0;
	var uLocal_8855 = 0;
	var uLocal_8856 = 0;
	var uLocal_8857 = 0;
	var uLocal_8858 = 0;
	var uLocal_8859 = 0;
	var uLocal_8860 = 0;
	var uLocal_8861 = 0;
	var uLocal_8862 = 0;
	var uLocal_8863 = 0;
	var uLocal_8864 = 0;
	var uLocal_8865 = 0;
	var uLocal_8866 = 0;
	var uLocal_8867 = 0;
	var uLocal_8868 = 0;
	var uLocal_8869 = 0;
	var uLocal_8870 = 0;
	var uLocal_8871 = 0;
	var uLocal_8872 = 0;
	var uLocal_8873 = 0;
	var uLocal_8874 = 0;
	var uLocal_8875 = 0;
	var uLocal_8876 = 0;
	var uLocal_8877 = 0;
	var uLocal_8878 = 0;
	var uLocal_8879 = 0;
	var uLocal_8880 = 0;
	var uLocal_8881 = 0;
	var uLocal_8882 = 0;
	var uLocal_8883 = 0;
	var uLocal_8884 = 0;
	var uLocal_8885 = 0;
	var uLocal_8886 = 0;
	var uLocal_8887 = 0;
	var uLocal_8888 = 0;
	var uLocal_8889 = 0;
	var uLocal_8890 = 0;
	var uLocal_8891 = 0;
	var uLocal_8892 = 0;
	var uLocal_8893 = 0;
	var uLocal_8894 = 0;
	var uLocal_8895 = 0;
	var uLocal_8896 = 0;
	var uLocal_8897 = 0;
	var uLocal_8898 = 0;
	var uLocal_8899 = 0;
	var uLocal_8900 = 0;
	var uLocal_8901 = 0;
	var uLocal_8902 = 0;
	var uLocal_8903 = 0;
	var uLocal_8904 = 0;
	var uLocal_8905 = 0;
	var uLocal_8906 = 0;
	var uLocal_8907 = 0;
	var uLocal_8908 = 0;
	var uLocal_8909 = 0;
	var uLocal_8910 = 0;
	var uLocal_8911 = 0;
	var uLocal_8912 = 0;
	var uLocal_8913 = 0;
	var uLocal_8914 = 0;
	var uLocal_8915 = 0;
	var uLocal_8916 = 0;
	var uLocal_8917 = 0;
	var uLocal_8918 = 0;
	var uLocal_8919 = 0;
	var uLocal_8920 = 0;
	var uLocal_8921 = 0;
	var uLocal_8922 = 0;
	var uLocal_8923 = 0;
	var uLocal_8924 = 0;
	var uLocal_8925 = 0;
	var uLocal_8926 = 0;
	var uLocal_8927 = 0;
	var uLocal_8928 = 0;
	var uLocal_8929 = 0;
	var uLocal_8930 = 0;
	var uLocal_8931 = 0;
	var uLocal_8932 = 0;
	var uLocal_8933 = 0;
	var uLocal_8934 = 0;
	var uLocal_8935 = 0;
	var uLocal_8936 = 0;
	var uLocal_8937 = 0;
	var uLocal_8938 = 0;
	var uLocal_8939 = 0;
	var uLocal_8940 = 0;
	var uLocal_8941 = 0;
	var uLocal_8942 = 0;
	var uLocal_8943 = 0;
	var uLocal_8944 = 0;
	var uLocal_8945 = 0;
	var uLocal_8946 = 0;
	var uLocal_8947 = 0;
	var uLocal_8948 = 0;
	var uLocal_8949 = 0;
	var uLocal_8950 = 0;
	var uLocal_8951 = 0;
	var uLocal_8952 = 0;
	var uLocal_8953 = 0;
	var uLocal_8954 = 0;
	var uLocal_8955 = 0;
	var uLocal_8956 = 0;
	var uLocal_8957 = 0;
	var uLocal_8958 = 0;
	var uLocal_8959 = 0;
	var uLocal_8960 = 0;
	var uLocal_8961 = 0;
	var uLocal_8962 = 0;
	var uLocal_8963 = 0;
	var uLocal_8964 = 0;
	var uLocal_8965 = 0;
	var uLocal_8966 = 0;
	var uLocal_8967 = 0;
	var uLocal_8968 = 0;
	var uLocal_8969 = 0;
	var uLocal_8970 = 0;
	var uLocal_8971 = 0;
	var uLocal_8972 = 0;
	var uLocal_8973 = 0;
	var uLocal_8974 = 0;
	var uLocal_8975 = 0;
	var uLocal_8976 = 0;
	var uLocal_8977 = 0;
	var uLocal_8978 = 0;
	var uLocal_8979 = 0;
	var uLocal_8980 = 0;
	var uLocal_8981 = 0;
	var uLocal_8982 = 0;
	var uLocal_8983 = 0;
	var uLocal_8984 = 0;
	var uLocal_8985 = 0;
	var uLocal_8986 = 0;
	var uLocal_8987 = 0;
	var uLocal_8988 = 0;
	var uLocal_8989 = 0;
	var uLocal_8990 = 0;
	var uLocal_8991 = 0;
	var uLocal_8992 = 0;
	var uLocal_8993 = 0;
	var uLocal_8994 = 0;
	var uLocal_8995 = 0;
	var uLocal_8996 = 0;
	var uLocal_8997 = 0;
	var uLocal_8998 = 0;
	var uLocal_8999 = 0;
	var uLocal_9000 = 0;
	var uLocal_9001 = 0;
	var uLocal_9002 = 0;
	var uLocal_9003 = 0;
	var uLocal_9004 = 0;
	var uLocal_9005 = 0;
	var uLocal_9006 = 0;
	var uLocal_9007 = 0;
	var uLocal_9008 = 0;
	var uLocal_9009 = 0;
	var uLocal_9010 = 0;
	var uLocal_9011 = 0;
	var uLocal_9012 = 0;
	var uLocal_9013 = 0;
	var uLocal_9014 = 0;
	var uLocal_9015 = 0;
	var uLocal_9016 = 0;
	var uLocal_9017 = 0;
	var uLocal_9018 = 0;
	var uLocal_9019 = 0;
	var uLocal_9020 = 0;
	var uLocal_9021 = 0;
	var uLocal_9022 = 0;
	var uLocal_9023 = 0;
	var uLocal_9024 = 0;
	var uLocal_9025 = 0;
	var uLocal_9026 = 0;
	var uLocal_9027 = 0;
	var uLocal_9028 = 0;
	var uLocal_9029 = 0;
	var uLocal_9030 = 0;
	var uLocal_9031 = 0;
	var uLocal_9032 = 0;
	var uLocal_9033 = 0;
	var uLocal_9034 = 0;
	var uLocal_9035 = 0;
	var uLocal_9036 = 0;
	var uLocal_9037 = 0;
	var uLocal_9038 = 0;
	var uLocal_9039 = 0;
	var uLocal_9040 = 0;
	var uLocal_9041 = 0;
	var uLocal_9042 = 0;
	var uLocal_9043 = 0;
	var uLocal_9044 = 0;
	var uLocal_9045 = 0;
	var uLocal_9046 = 0;
	var uLocal_9047 = 0;
	var uLocal_9048 = 0;
	var uLocal_9049 = 0;
	var uLocal_9050 = 0;
	var uLocal_9051 = 0;
	var uLocal_9052 = 0;
	var uLocal_9053 = 0;
	var uLocal_9054 = 0;
	var uLocal_9055 = 0;
	var uLocal_9056 = 0;
	var uLocal_9057 = 0;
	var uLocal_9058 = 0;
	var uLocal_9059 = 0;
	var uLocal_9060 = 0;
	var uLocal_9061 = 0;
	var uLocal_9062 = 0;
	var uLocal_9063 = 0;
	var uLocal_9064 = 0;
	var uLocal_9065 = 0;
	var uLocal_9066 = 0;
	var uLocal_9067 = 0;
	var uLocal_9068 = 0;
	var uLocal_9069 = 0;
	var uLocal_9070 = 0;
	var uLocal_9071 = 0;
	var uLocal_9072 = 0;
	var uLocal_9073 = 0;
	var uLocal_9074 = 0;
	var uLocal_9075 = 0;
	var uLocal_9076 = 0;
	var uLocal_9077 = 0;
	var uLocal_9078 = 0;
	var uLocal_9079 = 0;
	var uLocal_9080 = 0;
	var uLocal_9081 = 0;
	var uLocal_9082 = 0;
	var uLocal_9083 = 0;
	var uLocal_9084 = 0;
	var uLocal_9085 = 0;
	var uLocal_9086 = 0;
	var uLocal_9087 = 0;
	var uLocal_9088 = 0;
	var uLocal_9089 = 0;
	var uLocal_9090 = 0;
	var uLocal_9091 = 0;
	var uLocal_9092 = 0;
	var uLocal_9093 = 0;
	var uLocal_9094 = 0;
	var uLocal_9095 = 0;
	var uLocal_9096 = 0;
	var uLocal_9097 = 0;
	var uLocal_9098 = 0;
	var uLocal_9099 = 0;
	var uLocal_9100 = 0;
	var uLocal_9101 = 0;
	var uLocal_9102 = 0;
	var uLocal_9103 = 0;
	var uLocal_9104 = 0;
	var uLocal_9105 = 0;
	var uLocal_9106 = 0;
	var uLocal_9107 = 0;
	var uLocal_9108 = 0;
	var uLocal_9109 = 0;
	var uLocal_9110 = 0;
	var uLocal_9111 = 0;
	var uLocal_9112 = 0;
	var uLocal_9113 = 0;
	var uLocal_9114 = 0;
	var uLocal_9115 = 0;
	var uLocal_9116 = 0;
	var uLocal_9117 = 0;
	var uLocal_9118 = 0;
	var uLocal_9119 = 0;
	var uLocal_9120 = 0;
	var uLocal_9121 = 0;
	var uLocal_9122 = 0;
	var uLocal_9123 = 0;
	var uLocal_9124 = 0;
	var uLocal_9125 = 0;
	var uLocal_9126 = 0;
	var uLocal_9127 = 0;
	var uLocal_9128 = 0;
	var uLocal_9129 = 0;
	var uLocal_9130 = 0;
	var uLocal_9131 = 0;
	var uLocal_9132 = 0;
	var uLocal_9133 = 0;
	var uLocal_9134 = 0;
	var uLocal_9135 = 0;
	var uLocal_9136 = 0;
	var uLocal_9137 = 0;
	var uLocal_9138 = 0;
	var uLocal_9139 = 0;
	var uLocal_9140 = 0;
	var uLocal_9141 = 0;
	var uLocal_9142 = 0;
	var uLocal_9143 = 0;
	var uLocal_9144 = 0;
	var uLocal_9145 = 0;
	var uLocal_9146 = 0;
	var uLocal_9147 = 0;
	var uLocal_9148 = 0;
	var uLocal_9149 = 0;
	var uLocal_9150 = 0;
	var uLocal_9151 = 0;
	var uLocal_9152 = 0;
	var uLocal_9153 = 0;
	var uLocal_9154 = 0;
	var uLocal_9155 = 0;
	var uLocal_9156 = 0;
	var uLocal_9157 = 0;
	var uLocal_9158 = 0;
	var uLocal_9159 = 0;
	var uLocal_9160 = 0;
	var uLocal_9161 = 0;
	var uLocal_9162 = 0;
	var uLocal_9163 = 0;
	var uLocal_9164 = 0;
	var uLocal_9165 = 0;
	var uLocal_9166 = 0;
	var uLocal_9167 = 0;
	var uLocal_9168 = 0;
	var uLocal_9169 = 0;
	var uLocal_9170 = 0;
	var uLocal_9171 = 0;
	var uLocal_9172 = 0;
	var uLocal_9173 = 0;
	var uLocal_9174 = 0;
	var uLocal_9175 = 0;
	var uLocal_9176 = 0;
	var uLocal_9177 = 0;
	var uLocal_9178 = 0;
	var uLocal_9179 = 0;
	var uLocal_9180 = 0;
	var uLocal_9181 = 0;
	var uLocal_9182 = 0;
	var uLocal_9183 = 0;
	var uLocal_9184 = 0;
	var uLocal_9185 = 0;
	var uLocal_9186 = 0;
	var uLocal_9187 = 0;
	var uLocal_9188 = 0;
	var uLocal_9189 = 0;
	var uLocal_9190 = 0;
	var uLocal_9191 = 0;
	var uLocal_9192 = 0;
	var uLocal_9193 = 0;
	var uLocal_9194 = 0;
	var uLocal_9195 = 0;
	var uLocal_9196 = 0;
	var uLocal_9197 = 0;
	var uLocal_9198 = 0;
	var uLocal_9199 = 0;
	var uLocal_9200 = 0;
	var uLocal_9201 = 0;
	var uLocal_9202 = 0;
	var uLocal_9203 = 0;
	var uLocal_9204 = 0;
	var uLocal_9205 = 0;
	var uLocal_9206 = 0;
	var uLocal_9207 = 0;
	var uLocal_9208 = 0;
	var uLocal_9209 = 0;
	var uLocal_9210 = 0;
	var uLocal_9211 = 0;
	var uLocal_9212 = 0;
	var uLocal_9213 = 0;
	var uLocal_9214 = 0;
	var uLocal_9215 = 0;
	var uLocal_9216 = 0;
	var uLocal_9217 = 0;
	var uLocal_9218 = 0;
	var uLocal_9219 = 0;
	var uLocal_9220 = 0;
	var uLocal_9221 = 0;
	var uLocal_9222 = 0;
	var uLocal_9223 = 0;
	var uLocal_9224 = 0;
	var uLocal_9225 = 0;
	var uLocal_9226 = 0;
	var uLocal_9227 = 0;
	var uLocal_9228 = 0;
	var uLocal_9229 = 0;
	var uLocal_9230 = 0;
	var uLocal_9231 = 0;
	var uLocal_9232 = 0;
	var uLocal_9233 = 0;
	var uLocal_9234 = 0;
	var uLocal_9235 = 0;
	var uLocal_9236 = 0;
	var uLocal_9237 = 0;
	var uLocal_9238 = 0;
	var uLocal_9239 = 0;
	var uLocal_9240 = 0;
	var uLocal_9241 = 0;
	var uLocal_9242 = 0;
	var uLocal_9243 = 0;
	var uLocal_9244 = 0;
	var uLocal_9245 = 0;
	var uLocal_9246 = 0;
	var uLocal_9247 = 0;
	var uLocal_9248 = 0;
	var uLocal_9249 = 0;
	var uLocal_9250 = 0;
	var uLocal_9251 = 0;
	var uLocal_9252 = 0;
	var uLocal_9253 = 0;
	var uLocal_9254 = 0;
	var uLocal_9255 = 0;
	var uLocal_9256 = 0;
	var uLocal_9257 = 0;
	var uLocal_9258 = 0;
	var uLocal_9259 = 0;
	var uLocal_9260 = 0;
	var uLocal_9261 = 0;
	var uLocal_9262 = 0;
	var uLocal_9263 = 0;
	var uLocal_9264 = 0;
	var uLocal_9265 = 0;
	var uLocal_9266 = 0;
	var uLocal_9267 = 0;
	var uLocal_9268 = 0;
	var uLocal_9269 = 0;
	var uLocal_9270 = 0;
	var uLocal_9271 = 0;
	var uLocal_9272 = 0;
	var uLocal_9273 = 0;
	var uLocal_9274 = 0;
	var uLocal_9275 = 0;
	var uLocal_9276 = 0;
	var uLocal_9277 = 0;
	var uLocal_9278 = 0;
	var uLocal_9279 = 0;
	var uLocal_9280 = 0;
	var uLocal_9281 = 0;
	var uLocal_9282 = 0;
	var uLocal_9283 = 0;
	var uLocal_9284 = 0;
	var uLocal_9285 = 0;
	var uLocal_9286 = 0;
	var uLocal_9287 = 0;
	var uLocal_9288 = 0;
	var uLocal_9289 = 0;
	var uLocal_9290 = 0;
	var uLocal_9291 = 0;
	var uLocal_9292 = 0;
	var uLocal_9293 = 0;
	var uLocal_9294 = 0;
	var uLocal_9295 = 0;
	var uLocal_9296 = 0;
	var uLocal_9297 = 0;
	var uLocal_9298 = 0;
	var uLocal_9299 = 0;
	var uLocal_9300 = 0;
	var uLocal_9301 = 0;
	var uLocal_9302 = 0;
	var uLocal_9303 = 0;
	var uLocal_9304 = 0;
	var uLocal_9305 = 0;
	var uLocal_9306 = 0;
	var uLocal_9307 = 0;
	var uLocal_9308 = 0;
	var uLocal_9309 = 0;
	var uLocal_9310 = 0;
	var uLocal_9311 = 0;
	var uLocal_9312 = 0;
	var uLocal_9313 = 0;
	var uLocal_9314 = 0;
	var uLocal_9315 = 0;
	var uLocal_9316 = 0;
	var uLocal_9317 = 0;
	var uLocal_9318 = 0;
	var uLocal_9319 = 0;
	var uLocal_9320 = 0;
	var uLocal_9321 = 0;
	var uLocal_9322 = 0;
	var uLocal_9323 = 0;
	var uLocal_9324 = 0;
	var uLocal_9325 = 0;
	var uLocal_9326 = 0;
	var uLocal_9327 = 0;
	var uLocal_9328 = 0;
	var uLocal_9329 = 0;
	var uLocal_9330 = 0;
	var uLocal_9331 = 0;
	var uLocal_9332 = 0;
	var uLocal_9333 = 0;
	var uLocal_9334 = 0;
	var uLocal_9335 = 0;
	var uLocal_9336 = 0;
	var uLocal_9337 = 0;
	var uLocal_9338 = 0;
	var uLocal_9339 = 0;
	var uLocal_9340 = 0;
	var uLocal_9341 = 0;
	var uLocal_9342 = 0;
	var uLocal_9343 = 0;
	var uLocal_9344 = 0;
	var uLocal_9345 = 0;
	var uLocal_9346 = 0;
	var uLocal_9347 = 0;
	var uLocal_9348 = 0;
	var uLocal_9349 = 0;
	var uLocal_9350 = 0;
	var uLocal_9351 = 0;
	var uLocal_9352 = 0;
	var uLocal_9353 = 0;
	var uLocal_9354 = 0;
	var uLocal_9355 = 0;
	var uLocal_9356 = 0;
	var uLocal_9357 = 0;
	var uLocal_9358 = 0;
	var uLocal_9359 = 0;
	var uLocal_9360 = 0;
	var uLocal_9361 = 0;
	var uLocal_9362 = 0;
	var uLocal_9363 = 0;
	var uLocal_9364 = 0;
	var uLocal_9365 = 0;
	var uLocal_9366 = 0;
	var uLocal_9367 = 0;
	var uLocal_9368 = 0;
	var uLocal_9369 = 0;
	var uLocal_9370 = 0;
	var uLocal_9371 = 0;
	var uLocal_9372 = 0;
	var uLocal_9373 = 0;
	var uLocal_9374 = 0;
	var uLocal_9375 = 0;
	var uLocal_9376 = 0;
	var uLocal_9377 = 0;
	var uLocal_9378 = 0;
	var uLocal_9379 = 0;
	var uLocal_9380 = 0;
	var uLocal_9381 = 0;
	var uLocal_9382 = 0;
	var uLocal_9383 = 0;
	var uLocal_9384 = 0;
	var uLocal_9385 = 0;
	var uLocal_9386 = 0;
	var uLocal_9387 = 0;
	var uLocal_9388 = 0;
	var uLocal_9389 = 0;
	var uLocal_9390 = 0;
	var uLocal_9391 = 0;
	var uLocal_9392 = 0;
	var uLocal_9393 = 0;
	var uLocal_9394 = 0;
	var uLocal_9395 = 0;
	var uLocal_9396 = 0;
	var uLocal_9397 = 0;
	var uLocal_9398 = 0;
	var uLocal_9399 = 0;
	var uLocal_9400 = 0;
	var uLocal_9401 = 0;
	var uLocal_9402 = 0;
	var uLocal_9403 = 0;
	var uLocal_9404 = 0;
	var uLocal_9405 = 0;
	var uLocal_9406 = 0;
	var uLocal_9407 = 0;
	var uLocal_9408 = 0;
	var uLocal_9409 = 0;
	var uLocal_9410 = 0;
	var uLocal_9411 = 0;
	var uLocal_9412 = 0;
	var uLocal_9413 = 0;
	var uLocal_9414 = 0;
	var uLocal_9415 = 0;
	var uLocal_9416 = 0;
	var uLocal_9417 = 0;
	var uLocal_9418 = 0;
	var uLocal_9419 = 0;
	var uLocal_9420 = 0;
	var uLocal_9421 = 0;
	var uLocal_9422 = 0;
	var uLocal_9423 = 0;
	var uLocal_9424 = 0;
	var uLocal_9425 = 0;
	var uLocal_9426 = 0;
	var uLocal_9427 = 0;
	var uLocal_9428 = 0;
	var uLocal_9429 = 0;
	var uLocal_9430 = 0;
	var uLocal_9431 = 0;
	var uLocal_9432 = 0;
	var uLocal_9433 = 0;
	var uLocal_9434 = 0;
	var uLocal_9435 = 0;
	var uLocal_9436 = 0;
	var uLocal_9437 = 0;
	var uLocal_9438 = 0;
	var uLocal_9439 = 0;
	var uLocal_9440 = 0;
	var uLocal_9441 = 0;
	var uLocal_9442 = 0;
	var uLocal_9443 = 0;
	var uLocal_9444 = 0;
	var uLocal_9445 = 0;
	var uLocal_9446 = 0;
	var uLocal_9447 = 0;
	var uLocal_9448 = 0;
	var uLocal_9449 = 0;
	var uLocal_9450 = 0;
	var uLocal_9451 = 0;
	var uLocal_9452 = 0;
	var uLocal_9453 = 0;
	var uLocal_9454 = 0;
	var uLocal_9455 = 0;
	var uLocal_9456 = 0;
	var uLocal_9457 = 0;
	var uLocal_9458 = 0;
	var uLocal_9459 = 0;
	var uLocal_9460 = 0;
	var uLocal_9461 = 0;
	var uLocal_9462 = 0;
	var uLocal_9463 = 0;
	var uLocal_9464 = 0;
	var uLocal_9465 = 0;
	var uLocal_9466 = 0;
	var uLocal_9467 = 0;
	var uLocal_9468 = 0;
	var uLocal_9469 = 0;
	var uLocal_9470 = 0;
	var uLocal_9471 = 0;
	var uLocal_9472 = 0;
	var uLocal_9473 = 0;
	var uLocal_9474 = 0;
	var uLocal_9475 = 0;
	var uLocal_9476 = 0;
	var uLocal_9477 = 0;
	var uLocal_9478 = 0;
	var uLocal_9479 = 0;
	var uLocal_9480 = 0;
	var uLocal_9481 = 0;
	var uLocal_9482 = 0;
	var uLocal_9483 = 0;
	var uLocal_9484 = 0;
	var uLocal_9485 = 0;
	var uLocal_9486 = 0;
	var uLocal_9487 = 0;
	var uLocal_9488 = 0;
	var uLocal_9489 = 0;
	var uLocal_9490 = 0;
	var uLocal_9491 = 0;
	var uLocal_9492 = 0;
	var uLocal_9493 = 0;
	var uLocal_9494 = 0;
	var uLocal_9495 = 0;
	var uLocal_9496 = 0;
	var uLocal_9497 = 0;
	var uLocal_9498 = 0;
	var uLocal_9499 = 0;
	var uLocal_9500 = 0;
	var uLocal_9501 = 0;
	var uLocal_9502 = 0;
	var uLocal_9503 = 0;
	var uLocal_9504 = 0;
	var uLocal_9505 = 0;
	var uLocal_9506 = 0;
	var uLocal_9507 = 0;
	var uLocal_9508 = 0;
	var uLocal_9509 = 0;
	var uLocal_9510 = 0;
	var uLocal_9511 = 0;
	var uLocal_9512 = 0;
	var uLocal_9513 = 0;
	var uLocal_9514 = 0;
	var uLocal_9515 = 0;
	var uLocal_9516 = 0;
	var uLocal_9517 = 0;
	var uLocal_9518 = 0;
	var uLocal_9519 = 0;
	var uLocal_9520 = 0;
	var uLocal_9521 = 0;
	var uLocal_9522 = 0;
	var uLocal_9523 = 0;
	var uLocal_9524 = 0;
	var uLocal_9525 = 0;
	var uLocal_9526 = 0;
	var uLocal_9527 = 0;
	var uLocal_9528 = 0;
	var uLocal_9529 = 0;
	var uLocal_9530 = 0;
	var uLocal_9531 = 0;
	var uLocal_9532 = 0;
	var uLocal_9533 = 0;
	var uLocal_9534 = 0;
	var uLocal_9535 = 0;
	var uLocal_9536 = 0;
	var uLocal_9537 = 0;
	var uLocal_9538 = 0;
	var uLocal_9539 = 0;
	var uLocal_9540 = 0;
	var uLocal_9541 = 0;
	var uLocal_9542 = 0;
	var uLocal_9543 = 0;
	var uLocal_9544 = 0;
	var uLocal_9545 = 0;
	var uLocal_9546 = 0;
	var uLocal_9547 = 0;
	var uLocal_9548 = 0;
	var uLocal_9549 = 0;
	var uLocal_9550 = 0;
	var uLocal_9551 = 0;
	var uLocal_9552 = 0;
	var uLocal_9553 = 0;
	var uLocal_9554 = 0;
	var uLocal_9555 = 0;
	var uLocal_9556 = 0;
	var uLocal_9557 = 0;
	var uLocal_9558 = 0;
	var uLocal_9559 = 0;
	var uLocal_9560 = 0;
	var uLocal_9561 = 0;
	var uLocal_9562 = 0;
	var uLocal_9563 = 0;
	var uLocal_9564 = 0;
	var uLocal_9565 = 0;
	var uLocal_9566 = 0;
	var uLocal_9567 = 0;
	var uLocal_9568 = 0;
	var uLocal_9569 = 0;
	var uLocal_9570 = 0;
	var uLocal_9571 = 0;
	var uLocal_9572 = 0;
	var uLocal_9573 = 0;
	var uLocal_9574 = 0;
	var uLocal_9575 = 0;
	var uLocal_9576 = 0;
	var uLocal_9577 = 0;
	var uLocal_9578 = 0;
	var uLocal_9579 = 0;
	var uLocal_9580 = 0;
	var uLocal_9581 = 0;
	var uLocal_9582 = 0;
	var uLocal_9583 = 0;
	var uLocal_9584 = 0;
	var uLocal_9585 = 0;
	var uLocal_9586 = 0;
	var uLocal_9587 = 0;
	var uLocal_9588 = 0;
	var uLocal_9589 = 0;
	var uLocal_9590 = 0;
	var uLocal_9591 = 0;
	var uLocal_9592 = 0;
	var uLocal_9593 = 0;
	var uLocal_9594 = 0;
	var uLocal_9595 = 0;
	var uLocal_9596 = 0;
	var uLocal_9597 = 0;
	var uLocal_9598 = 0;
	var uLocal_9599 = 0;
	var uLocal_9600 = 0;
	var uLocal_9601 = 0;
	var uLocal_9602 = 0;
	var uLocal_9603 = 0;
	var uLocal_9604 = 0;
	var uLocal_9605 = 0;
	var uLocal_9606 = 1097859072;
	var uLocal_9607 = 1101004800;
	var uLocal_9608 = 0;
	var uLocal_9609 = 0;
	var uLocal_9610 = 0;
	var uLocal_9611 = 0;
	var uLocal_9612 = 0;
	var uLocal_9613 = 0;
	var uLocal_9614 = 0;
	var uLocal_9615 = 0;
	var uLocal_9616 = 0;
	var uLocal_9617 = 0;
	var uLocal_9618 = 0;
	var uLocal_9619 = 0;
	var uLocal_9620 = 0;
	var uLocal_9621 = 0;
	var uLocal_9622 = 0;
	var uLocal_9623 = 0;
	var uLocal_9624 = 0;
	var uLocal_9625 = 0;
	var uLocal_9626 = 0;
	var uLocal_9627 = 0;
	var uLocal_9628 = 0;
	var uLocal_9629 = 0;
	var uLocal_9630 = 0;
	var uLocal_9631 = 0;
	var uLocal_9632 = 0;
	var uLocal_9633 = 0;
	var uLocal_9634 = 4;
	var uLocal_9635 = 0;
	var uLocal_9636 = 0;
	var uLocal_9637 = 0;
	var uLocal_9638 = 0;
	var uLocal_9639 = 0;
	var uLocal_9640 = 0;
	var uLocal_9641 = 0;
	var uLocal_9642 = 0;
	var uLocal_9643 = 0;
	var uLocal_9644 = 0;
	var uLocal_9645 = 0;
	var uLocal_9646 = 0;
	var uLocal_9647 = 0;
	var uLocal_9648 = 0;
	var uLocal_9649 = 0;
	var uLocal_9650 = 0;
	var uLocal_9651 = 0;
	var uLocal_9652 = 0;
	var uLocal_9653 = 0;
	var uLocal_9654 = 0;
	var uLocal_9655 = 0;
	var uLocal_9656 = 0;
	var uLocal_9657 = 0;
	var uLocal_9658 = 0;
	var uLocal_9659 = 0;
	var uLocal_9660 = 0;
	var uLocal_9661 = 0;
	var uLocal_9662 = 0;
	var uLocal_9663 = 0;
	var uLocal_9664 = 0;
	var uLocal_9665 = 0;
	var uLocal_9666 = 0;
	var uLocal_9667 = 0;
	var uLocal_9668 = 0;
	var uLocal_9669 = 0;
	var uLocal_9670 = 0;
	var uLocal_9671 = 0;
	var uLocal_9672 = 0;
	var uLocal_9673 = 0;
	var uLocal_9674 = 0;
	var uLocal_9675 = 0;
	var uLocal_9676 = 0;
	var uLocal_9677 = 0;
	var uLocal_9678 = 0;
	var uLocal_9679 = 0;
	var uLocal_9680 = 0;
	var uLocal_9681 = 0;
	var uLocal_9682 = 0;
	var uLocal_9683 = 0;
	var uLocal_9684 = 0;
	var uLocal_9685 = 0;
	var uLocal_9686 = 0;
	var uLocal_9687 = 0;
	var uLocal_9688 = 0;
	var uLocal_9689 = 0;
	var uLocal_9690 = 0;
	var uLocal_9691 = 0;
	var uLocal_9692 = 0;
	var uLocal_9693 = 0;
	var uLocal_9694 = 0;
	var uLocal_9695 = 0;
	var uLocal_9696 = 0;
	var uLocal_9697 = 0;
	var uLocal_9698 = 0;
	var uLocal_9699 = 0;
	var uLocal_9700 = 0;
	var uLocal_9701 = 0;
	var uLocal_9702 = 0;
	var uLocal_9703 = 0;
	var uLocal_9704 = 0;
	var uLocal_9705 = 0;
	var uLocal_9706 = 40;
	var uLocal_9707 = 0;
	var uLocal_9708 = 0;
	var uLocal_9709 = 0;
	var uLocal_9710 = 0;
	var uLocal_9711 = 0;
	var uLocal_9712 = 0;
	var uLocal_9713 = 0;
	var uLocal_9714 = 0;
	var uLocal_9715 = 0;
	var uLocal_9716 = 0;
	var uLocal_9717 = 0;
	var uLocal_9718 = 0;
	var uLocal_9719 = 0;
	var uLocal_9720 = 0;
	var uLocal_9721 = 0;
	var uLocal_9722 = 0;
	var uLocal_9723 = 0;
	var uLocal_9724 = 0;
	var uLocal_9725 = 0;
	var uLocal_9726 = 0;
	var uLocal_9727 = 0;
	var uLocal_9728 = 0;
	var uLocal_9729 = 0;
	var uLocal_9730 = 0;
	var uLocal_9731 = 0;
	var uLocal_9732 = 0;
	var uLocal_9733 = 0;
	var uLocal_9734 = 0;
	var uLocal_9735 = 0;
	var uLocal_9736 = 0;
	var uLocal_9737 = 0;
	var uLocal_9738 = 0;
	var uLocal_9739 = 0;
	var uLocal_9740 = 0;
	var uLocal_9741 = 0;
	var uLocal_9742 = 0;
	var uLocal_9743 = 0;
	var uLocal_9744 = 0;
	var uLocal_9745 = 0;
	var uLocal_9746 = 0;
	var uLocal_9747 = 0;
	var uLocal_9748 = 0;
	var uLocal_9749 = 0;
	var uLocal_9750 = 0;
	var uLocal_9751 = 0;
	var uLocal_9752 = 0;
	var uLocal_9753 = 0;
	var uLocal_9754 = 0;
	var uLocal_9755 = 0;
	var uLocal_9756 = 0;
	var uLocal_9757 = 0;
	var uLocal_9758 = 0;
	var uLocal_9759 = 0;
	var uLocal_9760 = 0;
	var uLocal_9761 = 0;
	var uLocal_9762 = 0;
	var uLocal_9763 = 0;
	var uLocal_9764 = 0;
	var uLocal_9765 = 0;
	var uLocal_9766 = 0;
	var uLocal_9767 = 0;
	var uLocal_9768 = 0;
	var uLocal_9769 = 0;
	var uLocal_9770 = 0;
	var uLocal_9771 = 0;
	var uLocal_9772 = 0;
	var uLocal_9773 = 0;
	var uLocal_9774 = 0;
	var uLocal_9775 = 0;
	var uLocal_9776 = 0;
	var uLocal_9777 = 0;
	var uLocal_9778 = 0;
	var uLocal_9779 = 0;
	var uLocal_9780 = 0;
	var uLocal_9781 = 0;
	var uLocal_9782 = 0;
	var uLocal_9783 = 0;
	var uLocal_9784 = 0;
	var uLocal_9785 = 0;
	var uLocal_9786 = 0;
	var uLocal_9787 = 0;
	var uLocal_9788 = 0;
	var uLocal_9789 = 0;
	var uLocal_9790 = 0;
	var uLocal_9791 = 0;
	var uLocal_9792 = 0;
	var uLocal_9793 = 0;
	var uLocal_9794 = 0;
	var uLocal_9795 = 0;
	var uLocal_9796 = 0;
	var uLocal_9797 = 0;
	var uLocal_9798 = 0;
	var uLocal_9799 = 0;
	var uLocal_9800 = 0;
	var uLocal_9801 = 0;
	var uLocal_9802 = 0;
	var uLocal_9803 = 0;
	var uLocal_9804 = 0;
	var uLocal_9805 = 0;
	var uLocal_9806 = 0;
	var uLocal_9807 = 0;
	var uLocal_9808 = 0;
	var uLocal_9809 = 0;
	var uLocal_9810 = 0;
	var uLocal_9811 = 0;
	var uLocal_9812 = 0;
	var uLocal_9813 = 0;
	var uLocal_9814 = 0;
	var uLocal_9815 = 0;
	var uLocal_9816 = 0;
	var uLocal_9817 = 0;
	var uLocal_9818 = 0;
	var uLocal_9819 = 0;
	var uLocal_9820 = 0;
	var uLocal_9821 = 0;
	var uLocal_9822 = 0;
	var uLocal_9823 = 0;
	var uLocal_9824 = 0;
	var uLocal_9825 = 0;
	var uLocal_9826 = 0;
	var uLocal_9827 = 0;
	var uLocal_9828 = 0;
	var uLocal_9829 = 0;
	var uLocal_9830 = 0;
	var uLocal_9831 = 0;
	var uLocal_9832 = 0;
	var uLocal_9833 = 0;
	var uLocal_9834 = 0;
	var uLocal_9835 = 0;
	var uLocal_9836 = 0;
	var uLocal_9837 = 0;
	var uLocal_9838 = 0;
	var uLocal_9839 = 0;
	var uLocal_9840 = 0;
	var uLocal_9841 = 0;
	var uLocal_9842 = 0;
	var uLocal_9843 = 0;
	var uLocal_9844 = 0;
	var uLocal_9845 = 0;
	var uLocal_9846 = 0;
	var uLocal_9847 = 0;
	var uLocal_9848 = 0;
	var uLocal_9849 = 0;
	var uLocal_9850 = 0;
	var uLocal_9851 = 0;
	var uLocal_9852 = 0;
	var uLocal_9853 = 0;
	var uLocal_9854 = 0;
	var uLocal_9855 = 0;
	var uLocal_9856 = 0;
	var uLocal_9857 = 0;
	var uLocal_9858 = 0;
	var uLocal_9859 = 0;
	var uLocal_9860 = 0;
	var uLocal_9861 = 0;
	var uLocal_9862 = 0;
	var uLocal_9863 = 0;
	var uLocal_9864 = 0;
	var uLocal_9865 = 0;
	var uLocal_9866 = 0;
	var uLocal_9867 = 0;
	var uLocal_9868 = 0;
	var uLocal_9869 = 0;
	var uLocal_9870 = 0;
	var uLocal_9871 = 0;
	var uLocal_9872 = 0;
	var uLocal_9873 = 0;
	var uLocal_9874 = 0;
	var uLocal_9875 = 0;
	var uLocal_9876 = 0;
	var uLocal_9877 = 0;
	var uLocal_9878 = 0;
	var uLocal_9879 = 0;
	var uLocal_9880 = 0;
	var uLocal_9881 = 0;
	var uLocal_9882 = 0;
	var uLocal_9883 = 0;
	var uLocal_9884 = 0;
	var uLocal_9885 = 0;
	var uLocal_9886 = 0;
	var uLocal_9887 = 0;
	var uLocal_9888 = 0;
	var uLocal_9889 = 0;
	var uLocal_9890 = 0;
	var uLocal_9891 = 0;
	var uLocal_9892 = 0;
	var uLocal_9893 = 0;
	var uLocal_9894 = 0;
	var uLocal_9895 = 0;
	var uLocal_9896 = 0;
	var uLocal_9897 = 0;
	var uLocal_9898 = 0;
	var uLocal_9899 = 0;
	var uLocal_9900 = 0;
	var uLocal_9901 = 0;
	var uLocal_9902 = 0;
	var uLocal_9903 = 0;
	var uLocal_9904 = 0;
	var uLocal_9905 = 0;
	var uLocal_9906 = 0;
	var uLocal_9907 = 0;
	var uLocal_9908 = 0;
	var uLocal_9909 = 0;
	var uLocal_9910 = 0;
	var uLocal_9911 = 0;
	var uLocal_9912 = 0;
	var uLocal_9913 = 0;
	var uLocal_9914 = 0;
	var uLocal_9915 = 0;
	var uLocal_9916 = 0;
	var uLocal_9917 = 0;
	var uLocal_9918 = 0;
	var uLocal_9919 = 0;
	var uLocal_9920 = 0;
	var uLocal_9921 = 0;
	var uLocal_9922 = 0;
	var uLocal_9923 = 0;
	var uLocal_9924 = 0;
	var uLocal_9925 = 0;
	var uLocal_9926 = 0;
	var uLocal_9927 = 0;
	var uLocal_9928 = 0;
	var uLocal_9929 = 0;
	var uLocal_9930 = 0;
	var uLocal_9931 = 0;
	var uLocal_9932 = 0;
	var uLocal_9933 = 0;
	var uLocal_9934 = 0;
	var uLocal_9935 = 0;
	var uLocal_9936 = 0;
	var uLocal_9937 = 0;
	var uLocal_9938 = 0;
	var uLocal_9939 = 0;
	var uLocal_9940 = 0;
	var uLocal_9941 = 0;
	var uLocal_9942 = 0;
	var uLocal_9943 = 0;
	var uLocal_9944 = 0;
	var uLocal_9945 = 0;
	var uLocal_9946 = 0;
	var uLocal_9947 = 0;
	var uLocal_9948 = 0;
	var uLocal_9949 = 0;
	var uLocal_9950 = 0;
	var uLocal_9951 = 0;
	var uLocal_9952 = 0;
	var uLocal_9953 = 0;
	var uLocal_9954 = 0;
	var uLocal_9955 = 0;
	var uLocal_9956 = 0;
	var uLocal_9957 = 0;
	var uLocal_9958 = 0;
	var uLocal_9959 = 0;
	var uLocal_9960 = 0;
	var uLocal_9961 = 0;
	var uLocal_9962 = 0;
	var uLocal_9963 = 0;
	var uLocal_9964 = 0;
	var uLocal_9965 = 0;
	var uLocal_9966 = 0;
	var uLocal_9967 = 0;
	var uLocal_9968 = 0;
	var uLocal_9969 = 0;
	var uLocal_9970 = 0;
	var uLocal_9971 = 0;
	var uLocal_9972 = 0;
	var uLocal_9973 = 0;
	var uLocal_9974 = 0;
	var uLocal_9975 = 0;
	var uLocal_9976 = 0;
	var uLocal_9977 = 0;
	var uLocal_9978 = 0;
	var uLocal_9979 = 0;
	var uLocal_9980 = 0;
	var uLocal_9981 = 0;
	var uLocal_9982 = 0;
	var uLocal_9983 = 0;
	var uLocal_9984 = 0;
	var uLocal_9985 = 0;
	var uLocal_9986 = 0;
	var uLocal_9987 = 0;
	var uLocal_9988 = 0;
	var uLocal_9989 = 0;
	var uLocal_9990 = 0;
	var uLocal_9991 = 0;
	var uLocal_9992 = 0;
	var uLocal_9993 = 0;
	var uLocal_9994 = 0;
	var uLocal_9995 = 0;
	var uLocal_9996 = 0;
	var uLocal_9997 = 0;
	var uLocal_9998 = 0;
	var uLocal_9999 = 0;
	var uLocal_10000 = 0;
	var uLocal_10001 = 0;
	var uLocal_10002 = 0;
	var uLocal_10003 = 0;
	var uLocal_10004 = 0;
	var uLocal_10005 = 0;
	var uLocal_10006 = 0;
	var uLocal_10007 = 0;
	var uLocal_10008 = 0;
	var uLocal_10009 = 0;
	var uLocal_10010 = 0;
	var uLocal_10011 = 0;
	var uLocal_10012 = 0;
	var uLocal_10013 = 0;
	var uLocal_10014 = 0;
	var uLocal_10015 = 0;
	var uLocal_10016 = 0;
	var uLocal_10017 = 0;
	var uLocal_10018 = 0;
	var uLocal_10019 = 0;
	var uLocal_10020 = 0;
	var uLocal_10021 = 0;
	var uLocal_10022 = 0;
	var uLocal_10023 = 0;
	var uLocal_10024 = 0;
	var uLocal_10025 = 0;
	var uLocal_10026 = 0;
	var uLocal_10027 = 0;
	var uLocal_10028 = 0;
	var uLocal_10029 = 0;
	var uLocal_10030 = 0;
	var uLocal_10031 = 0;
	var uLocal_10032 = 0;
	var uLocal_10033 = 0;
	var uLocal_10034 = 0;
	var uLocal_10035 = 0;
	var uLocal_10036 = 0;
	var uLocal_10037 = 0;
	var uLocal_10038 = 0;
	var uLocal_10039 = 0;
	var uLocal_10040 = 0;
	var uLocal_10041 = 0;
	var uLocal_10042 = 0;
	var uLocal_10043 = 0;
	var uLocal_10044 = 0;
	var uLocal_10045 = 0;
	var uLocal_10046 = 0;
	var uLocal_10047 = 0;
	var uLocal_10048 = 0;
	var uLocal_10049 = 0;
	var uLocal_10050 = 0;
	var uLocal_10051 = 0;
	var uLocal_10052 = 0;
	var uLocal_10053 = 0;
	var uLocal_10054 = 0;
	var uLocal_10055 = 0;
	var uLocal_10056 = 0;
	var uLocal_10057 = 0;
	var uLocal_10058 = 0;
	var uLocal_10059 = 0;
	var uLocal_10060 = 0;
	var uLocal_10061 = 0;
	var uLocal_10062 = 0;
	var uLocal_10063 = 0;
	var uLocal_10064 = 0;
	var uLocal_10065 = 0;
	var uLocal_10066 = 0;
	var uLocal_10067 = 0;
	var uLocal_10068 = 0;
	var uLocal_10069 = 0;
	var uLocal_10070 = 0;
	var uLocal_10071 = 0;
	var uLocal_10072 = 0;
	var uLocal_10073 = 0;
	var uLocal_10074 = 0;
	var uLocal_10075 = 0;
	var uLocal_10076 = 0;
	var uLocal_10077 = 0;
	var uLocal_10078 = 0;
	var uLocal_10079 = 0;
	var uLocal_10080 = 0;
	var uLocal_10081 = 0;
	var uLocal_10082 = 0;
	var uLocal_10083 = 0;
	var uLocal_10084 = 0;
	var uLocal_10085 = 0;
	var uLocal_10086 = 0;
	var uLocal_10087 = 0;
	var uLocal_10088 = 0;
	var uLocal_10089 = 0;
	var uLocal_10090 = 0;
	var uLocal_10091 = 0;
	var uLocal_10092 = 0;
	var uLocal_10093 = 0;
	var uLocal_10094 = 0;
	var uLocal_10095 = 0;
	var uLocal_10096 = 0;
	var uLocal_10097 = 0;
	var uLocal_10098 = 0;
	var uLocal_10099 = 0;
	var uLocal_10100 = 0;
	var uLocal_10101 = 0;
	var uLocal_10102 = 0;
	var uLocal_10103 = 0;
	var uLocal_10104 = 0;
	var uLocal_10105 = 0;
	var uLocal_10106 = 0;
	var uLocal_10107 = 0;
	var uLocal_10108 = 0;
	var uLocal_10109 = 0;
	var uLocal_10110 = 0;
	var uLocal_10111 = 0;
	var uLocal_10112 = 0;
	var uLocal_10113 = 0;
	var uLocal_10114 = 0;
	var uLocal_10115 = 0;
	var uLocal_10116 = 0;
	var uLocal_10117 = 0;
	var uLocal_10118 = 0;
	var uLocal_10119 = 0;
	var uLocal_10120 = 0;
	var uLocal_10121 = 0;
	var uLocal_10122 = 0;
	var uLocal_10123 = 0;
	var uLocal_10124 = 0;
	var uLocal_10125 = 0;
	var uLocal_10126 = 0;
	var uLocal_10127 = 0;
	var uLocal_10128 = 0;
	var uLocal_10129 = 0;
	var uLocal_10130 = 0;
	var uLocal_10131 = 0;
	var uLocal_10132 = 0;
	var uLocal_10133 = 0;
	var uLocal_10134 = 0;
	var uLocal_10135 = 0;
	var uLocal_10136 = 0;
	var uLocal_10137 = 0;
	var uLocal_10138 = 0;
	var uLocal_10139 = 0;
	var uLocal_10140 = 0;
	var uLocal_10141 = 0;
	var uLocal_10142 = 0;
	var uLocal_10143 = 0;
	var uLocal_10144 = 0;
	var uLocal_10145 = 0;
	var uLocal_10146 = 0;
	var uLocal_10147 = 0;
	var uLocal_10148 = 0;
	var uLocal_10149 = 0;
	var uLocal_10150 = 0;
	var uLocal_10151 = 0;
	var uLocal_10152 = 0;
	var uLocal_10153 = 0;
	var uLocal_10154 = 0;
	var uLocal_10155 = 0;
	var uLocal_10156 = 0;
	var uLocal_10157 = 0;
	var uLocal_10158 = 0;
	var uLocal_10159 = 0;
	var uLocal_10160 = 0;
	var uLocal_10161 = 0;
	var uLocal_10162 = 0;
	var uLocal_10163 = 0;
	var uLocal_10164 = 0;
	var uLocal_10165 = 0;
	var uLocal_10166 = 0;
	var uLocal_10167 = 0;
	var uLocal_10168 = 0;
	var uLocal_10169 = 0;
	var uLocal_10170 = 0;
	var uLocal_10171 = 0;
	var uLocal_10172 = 0;
	var uLocal_10173 = 0;
	var uLocal_10174 = 0;
	var uLocal_10175 = 0;
	var uLocal_10176 = 0;
	var uLocal_10177 = 0;
	var uLocal_10178 = 0;
	var uLocal_10179 = 0;
	var uLocal_10180 = 0;
	var uLocal_10181 = 0;
	var uLocal_10182 = 0;
	var uLocal_10183 = 0;
	var uLocal_10184 = 0;
	var uLocal_10185 = 0;
	var uLocal_10186 = 0;
	var uLocal_10187 = 0;
	var uLocal_10188 = 0;
	var uLocal_10189 = 0;
	var uLocal_10190 = 0;
	var uLocal_10191 = 0;
	var uLocal_10192 = 0;
	var uLocal_10193 = 0;
	var uLocal_10194 = 0;
	var uLocal_10195 = 0;
	var uLocal_10196 = 0;
	var uLocal_10197 = 0;
	var uLocal_10198 = 0;
	var uLocal_10199 = 0;
	var uLocal_10200 = 0;
	var uLocal_10201 = 0;
	var uLocal_10202 = 0;
	var uLocal_10203 = 0;
	var uLocal_10204 = 0;
	var uLocal_10205 = 0;
	var uLocal_10206 = 0;
	var uLocal_10207 = 0;
	var uLocal_10208 = 0;
	var uLocal_10209 = 0;
	var uLocal_10210 = 0;
	var uLocal_10211 = 0;
	var uLocal_10212 = 0;
	var uLocal_10213 = 0;
	var uLocal_10214 = 0;
	var uLocal_10215 = 0;
	var uLocal_10216 = 0;
	var uLocal_10217 = 0;
	var uLocal_10218 = 0;
	var uLocal_10219 = 0;
	var uLocal_10220 = 0;
	var uLocal_10221 = 0;
	var uLocal_10222 = 0;
	var uLocal_10223 = 0;
	var uLocal_10224 = 0;
	var uLocal_10225 = 0;
	var uLocal_10226 = 0;
	var uLocal_10227 = 0;
	var uLocal_10228 = 0;
	var uLocal_10229 = 0;
	var uLocal_10230 = 0;
	var uLocal_10231 = 0;
	var uLocal_10232 = 0;
	var uLocal_10233 = 0;
	var uLocal_10234 = 0;
	var uLocal_10235 = 0;
	var uLocal_10236 = 0;
	var uLocal_10237 = 0;
	var uLocal_10238 = 0;
	var uLocal_10239 = 0;
	var uLocal_10240 = 0;
	var uLocal_10241 = 0;
	var uLocal_10242 = 0;
	var uLocal_10243 = 0;
	var uLocal_10244 = 0;
	var uLocal_10245 = 0;
	var uLocal_10246 = 0;
	var uLocal_10247 = 0;
	var uLocal_10248 = 0;
	var uLocal_10249 = 0;
	var uLocal_10250 = 0;
	var uLocal_10251 = 0;
	var uLocal_10252 = 0;
	var uLocal_10253 = 0;
	var uLocal_10254 = 0;
	var uLocal_10255 = 0;
	var uLocal_10256 = 0;
	var uLocal_10257 = 0;
	var uLocal_10258 = 0;
	var uLocal_10259 = 0;
	var uLocal_10260 = 0;
	var uLocal_10261 = 0;
	var uLocal_10262 = 0;
	var uLocal_10263 = 0;
	var uLocal_10264 = 0;
	var uLocal_10265 = 0;
	var uLocal_10266 = 0;
	var uLocal_10267 = 0;
	var uLocal_10268 = 0;
	var uLocal_10269 = 0;
	var uLocal_10270 = 0;
	var uLocal_10271 = 0;
	var uLocal_10272 = 0;
	var uLocal_10273 = 0;
	var uLocal_10274 = 0;
	var uLocal_10275 = 0;
	var uLocal_10276 = 0;
	var uLocal_10277 = 0;
	var uLocal_10278 = 0;
	var uLocal_10279 = 0;
	var uLocal_10280 = 0;
	var uLocal_10281 = 0;
	var uLocal_10282 = 0;
	var uLocal_10283 = 0;
	var uLocal_10284 = 0;
	var uLocal_10285 = 0;
	var uLocal_10286 = 0;
	var uLocal_10287 = 0;
	var uLocal_10288 = 0;
	var uLocal_10289 = 0;
	var uLocal_10290 = 0;
	var uLocal_10291 = 0;
	var uLocal_10292 = 0;
	var uLocal_10293 = 0;
	var uLocal_10294 = 0;
	var uLocal_10295 = 0;
	var uLocal_10296 = 0;
	var uLocal_10297 = 0;
	var uLocal_10298 = 0;
	var uLocal_10299 = 0;
	var uLocal_10300 = 0;
	var uLocal_10301 = 0;
	var uLocal_10302 = 0;
	var uLocal_10303 = 0;
	var uLocal_10304 = 0;
	var uLocal_10305 = 0;
	var uLocal_10306 = 0;
	var uLocal_10307 = 0;
	var uLocal_10308 = 0;
	var uLocal_10309 = 0;
	var uLocal_10310 = 0;
	var uLocal_10311 = 0;
	var uLocal_10312 = 0;
	var uLocal_10313 = 0;
	var uLocal_10314 = 0;
	var uLocal_10315 = 0;
	var uLocal_10316 = 0;
	var uLocal_10317 = 0;
	var uLocal_10318 = 0;
	var uLocal_10319 = 0;
	var uLocal_10320 = 0;
	var uLocal_10321 = 0;
	var uLocal_10322 = 0;
	var uLocal_10323 = 0;
	var uLocal_10324 = 0;
	var uLocal_10325 = 0;
	var uLocal_10326 = 0;
	var uLocal_10327 = 0;
	var uLocal_10328 = 0;
	var uLocal_10329 = 0;
	var uLocal_10330 = 0;
	var uLocal_10331 = 0;
	var uLocal_10332 = 0;
	var uLocal_10333 = 0;
	var uLocal_10334 = 0;
	var uLocal_10335 = 0;
	var uLocal_10336 = 0;
	var uLocal_10337 = 0;
	var uLocal_10338 = 0;
	var uLocal_10339 = 0;
	var uLocal_10340 = 0;
	var uLocal_10341 = 0;
	var uLocal_10342 = 0;
	var uLocal_10343 = 0;
	var uLocal_10344 = 0;
	var uLocal_10345 = 0;
	var uLocal_10346 = 0;
	var uLocal_10347 = 40;
	var uLocal_10348 = 0;
	var uLocal_10349 = 0;
	var uLocal_10350 = 0;
	var uLocal_10351 = 0;
	var uLocal_10352 = 0;
	var uLocal_10353 = 0;
	var uLocal_10354 = 0;
	var uLocal_10355 = 0;
	var uLocal_10356 = 0;
	var uLocal_10357 = 0;
	var uLocal_10358 = 0;
	var uLocal_10359 = 0;
	var uLocal_10360 = 0;
	var uLocal_10361 = 0;
	var uLocal_10362 = 0;
	var uLocal_10363 = 0;
	var uLocal_10364 = 0;
	var uLocal_10365 = 0;
	var uLocal_10366 = 0;
	var uLocal_10367 = 0;
	var uLocal_10368 = 0;
	var uLocal_10369 = 0;
	var uLocal_10370 = 0;
	var uLocal_10371 = 0;
	var uLocal_10372 = 0;
	var uLocal_10373 = 0;
	var uLocal_10374 = 0;
	var uLocal_10375 = 0;
	var uLocal_10376 = 0;
	var uLocal_10377 = 0;
	var uLocal_10378 = 0;
	var uLocal_10379 = 0;
	var uLocal_10380 = 0;
	var uLocal_10381 = 0;
	var uLocal_10382 = 0;
	var uLocal_10383 = 0;
	var uLocal_10384 = 0;
	var uLocal_10385 = 0;
	var uLocal_10386 = 0;
	var uLocal_10387 = 0;
	var uLocal_10388 = 0;
	var uLocal_10389 = 0;
	var uLocal_10390 = 0;
	var uLocal_10391 = 0;
	var uLocal_10392 = 0;
	var uLocal_10393 = 0;
	var uLocal_10394 = 0;
	var uLocal_10395 = 0;
	var uLocal_10396 = 0;
	var uLocal_10397 = 0;
	var uLocal_10398 = 0;
	var uLocal_10399 = 0;
	var uLocal_10400 = 0;
	var uLocal_10401 = 0;
	var uLocal_10402 = 0;
	var uLocal_10403 = 0;
	var uLocal_10404 = 0;
	var uLocal_10405 = 0;
	var uLocal_10406 = 0;
	var uLocal_10407 = 0;
	var uLocal_10408 = 0;
	var uLocal_10409 = 0;
	var uLocal_10410 = 0;
	var uLocal_10411 = 0;
	var uLocal_10412 = 0;
	var uLocal_10413 = 0;
	var uLocal_10414 = 0;
	var uLocal_10415 = 0;
	var uLocal_10416 = 0;
	var uLocal_10417 = 0;
	var uLocal_10418 = 0;
	var uLocal_10419 = 0;
	var uLocal_10420 = 0;
	var uLocal_10421 = 0;
	var uLocal_10422 = 0;
	var uLocal_10423 = 0;
	var uLocal_10424 = 0;
	var uLocal_10425 = 0;
	var uLocal_10426 = 0;
	var uLocal_10427 = 0;
	var uLocal_10428 = 0;
	var uLocal_10429 = 0;
	var uLocal_10430 = 0;
	var uLocal_10431 = 0;
	var uLocal_10432 = 0;
	var uLocal_10433 = 0;
	var uLocal_10434 = 0;
	var uLocal_10435 = 0;
	var uLocal_10436 = 0;
	var uLocal_10437 = 0;
	var uLocal_10438 = 0;
	var uLocal_10439 = 0;
	var uLocal_10440 = 0;
	var uLocal_10441 = 0;
	var uLocal_10442 = 0;
	var uLocal_10443 = 0;
	var uLocal_10444 = 0;
	var uLocal_10445 = 0;
	var uLocal_10446 = 0;
	var uLocal_10447 = 0;
	var uLocal_10448 = 0;
	var uLocal_10449 = 0;
	var uLocal_10450 = 0;
	var uLocal_10451 = 0;
	var uLocal_10452 = 0;
	var uLocal_10453 = 0;
	var uLocal_10454 = 0;
	var uLocal_10455 = 0;
	var uLocal_10456 = 0;
	var uLocal_10457 = 0;
	var uLocal_10458 = 0;
	var uLocal_10459 = 0;
	var uLocal_10460 = 0;
	var uLocal_10461 = 0;
	var uLocal_10462 = 0;
	var uLocal_10463 = 0;
	var uLocal_10464 = 0;
	var uLocal_10465 = 0;
	var uLocal_10466 = 0;
	var uLocal_10467 = 0;
	var uLocal_10468 = 0;
	var uLocal_10469 = 0;
	var uLocal_10470 = 0;
	var uLocal_10471 = 0;
	var uLocal_10472 = 0;
	var uLocal_10473 = 0;
	var uLocal_10474 = 0;
	var uLocal_10475 = 0;
	var uLocal_10476 = 0;
	var uLocal_10477 = 0;
	var uLocal_10478 = 0;
	var uLocal_10479 = 0;
	var uLocal_10480 = 0;
	var uLocal_10481 = 0;
	var uLocal_10482 = 0;
	var uLocal_10483 = 0;
	var uLocal_10484 = 0;
	var uLocal_10485 = 0;
	var uLocal_10486 = 0;
	var uLocal_10487 = 0;
	var uLocal_10488 = 0;
	var uLocal_10489 = 0;
	var uLocal_10490 = 0;
	var uLocal_10491 = 0;
	var uLocal_10492 = 0;
	var uLocal_10493 = 0;
	var uLocal_10494 = 0;
	var uLocal_10495 = 0;
	var uLocal_10496 = 0;
	var uLocal_10497 = 0;
	var uLocal_10498 = 0;
	var uLocal_10499 = 0;
	var uLocal_10500 = 0;
	var uLocal_10501 = 0;
	var uLocal_10502 = 0;
	var uLocal_10503 = 0;
	var uLocal_10504 = 0;
	var uLocal_10505 = 0;
	var uLocal_10506 = 0;
	var uLocal_10507 = 0;
	var uLocal_10508 = 0;
	var uLocal_10509 = 0;
	var uLocal_10510 = 0;
	var uLocal_10511 = 0;
	var uLocal_10512 = 0;
	var uLocal_10513 = 0;
	var uLocal_10514 = 0;
	var uLocal_10515 = 0;
	var uLocal_10516 = 0;
	var uLocal_10517 = 0;
	var uLocal_10518 = 0;
	var uLocal_10519 = 0;
	var uLocal_10520 = 0;
	var uLocal_10521 = 0;
	var uLocal_10522 = 0;
	var uLocal_10523 = 0;
	var uLocal_10524 = 0;
	var uLocal_10525 = 0;
	var uLocal_10526 = 0;
	var uLocal_10527 = 0;
	var uLocal_10528 = 0;
	var uLocal_10529 = 0;
	var uLocal_10530 = 0;
	var uLocal_10531 = 0;
	var uLocal_10532 = 0;
	var uLocal_10533 = 0;
	var uLocal_10534 = 0;
	var uLocal_10535 = 0;
	var uLocal_10536 = 0;
	var uLocal_10537 = 0;
	var uLocal_10538 = 0;
	var uLocal_10539 = 0;
	var uLocal_10540 = 0;
	var uLocal_10541 = 0;
	var uLocal_10542 = 0;
	var uLocal_10543 = 0;
	var uLocal_10544 = 0;
	var uLocal_10545 = 0;
	var uLocal_10546 = 0;
	var uLocal_10547 = 0;
	var uLocal_10548 = 0;
	var uLocal_10549 = 0;
	var uLocal_10550 = 0;
	var uLocal_10551 = 0;
	var uLocal_10552 = 0;
	var uLocal_10553 = 0;
	var uLocal_10554 = 0;
	var uLocal_10555 = 0;
	var uLocal_10556 = 0;
	var uLocal_10557 = 0;
	var uLocal_10558 = 0;
	var uLocal_10559 = 0;
	var uLocal_10560 = 0;
	var uLocal_10561 = 0;
	var uLocal_10562 = 0;
	var uLocal_10563 = 0;
	var uLocal_10564 = 0;
	var uLocal_10565 = 0;
	var uLocal_10566 = 0;
	var uLocal_10567 = 0;
	var uLocal_10568 = 0;
	var uLocal_10569 = 0;
	var uLocal_10570 = 0;
	var uLocal_10571 = 0;
	var uLocal_10572 = 0;
	var uLocal_10573 = 0;
	var uLocal_10574 = 0;
	var uLocal_10575 = 0;
	var uLocal_10576 = 0;
	var uLocal_10577 = 0;
	var uLocal_10578 = 0;
	var uLocal_10579 = 0;
	var uLocal_10580 = 0;
	var uLocal_10581 = 0;
	var uLocal_10582 = 0;
	var uLocal_10583 = 0;
	var uLocal_10584 = 0;
	var uLocal_10585 = 0;
	var uLocal_10586 = 0;
	var uLocal_10587 = 0;
	var uLocal_10588 = 0;
	var uLocal_10589 = 0;
	var uLocal_10590 = 0;
	var uLocal_10591 = 0;
	var uLocal_10592 = 0;
	var uLocal_10593 = 0;
	var uLocal_10594 = 0;
	var uLocal_10595 = 0;
	var uLocal_10596 = 0;
	var uLocal_10597 = 0;
	var uLocal_10598 = 0;
	var uLocal_10599 = 0;
	var uLocal_10600 = 0;
	var uLocal_10601 = 0;
	var uLocal_10602 = 0;
	var uLocal_10603 = 0;
	var uLocal_10604 = 0;
	var uLocal_10605 = 0;
	var uLocal_10606 = 0;
	var uLocal_10607 = 0;
	var uLocal_10608 = 0;
	var uLocal_10609 = 0;
	var uLocal_10610 = 0;
	var uLocal_10611 = 0;
	var uLocal_10612 = 0;
	var uLocal_10613 = 0;
	var uLocal_10614 = 0;
	var uLocal_10615 = 0;
	var uLocal_10616 = 0;
	var uLocal_10617 = 0;
	var uLocal_10618 = 0;
	var uLocal_10619 = 0;
	var uLocal_10620 = 0;
	var uLocal_10621 = 0;
	var uLocal_10622 = 0;
	var uLocal_10623 = 0;
	var uLocal_10624 = 0;
	var uLocal_10625 = 0;
	var uLocal_10626 = 0;
	var uLocal_10627 = 0;
	var uLocal_10628 = 0;
	var uLocal_10629 = 0;
	var uLocal_10630 = 0;
	var uLocal_10631 = 0;
	var uLocal_10632 = 0;
	var uLocal_10633 = 0;
	var uLocal_10634 = 0;
	var uLocal_10635 = 0;
	var uLocal_10636 = 0;
	var uLocal_10637 = 0;
	var uLocal_10638 = 0;
	var uLocal_10639 = 0;
	var uLocal_10640 = 0;
	var uLocal_10641 = 0;
	var uLocal_10642 = 0;
	var uLocal_10643 = 0;
	var uLocal_10644 = 0;
	var uLocal_10645 = 0;
	var uLocal_10646 = 0;
	var uLocal_10647 = 0;
	var uLocal_10648 = 0;
	var uLocal_10649 = 0;
	var uLocal_10650 = 0;
	var uLocal_10651 = 0;
	var uLocal_10652 = 0;
	var uLocal_10653 = 0;
	var uLocal_10654 = 0;
	var uLocal_10655 = 0;
	var uLocal_10656 = 0;
	var uLocal_10657 = 0;
	var uLocal_10658 = 0;
	var uLocal_10659 = 0;
	var uLocal_10660 = 0;
	var uLocal_10661 = 0;
	var uLocal_10662 = 0;
	var uLocal_10663 = 0;
	var uLocal_10664 = 0;
	var uLocal_10665 = 0;
	var uLocal_10666 = 0;
	var uLocal_10667 = 0;
	var uLocal_10668 = 0;
	var uLocal_10669 = 0;
	var uLocal_10670 = 0;
	var uLocal_10671 = 0;
	var uLocal_10672 = 0;
	var uLocal_10673 = 0;
	var uLocal_10674 = 0;
	var uLocal_10675 = 0;
	var uLocal_10676 = 0;
	var uLocal_10677 = 0;
	var uLocal_10678 = 0;
	var uLocal_10679 = 0;
	var uLocal_10680 = 0;
	var uLocal_10681 = 0;
	var uLocal_10682 = 0;
	var uLocal_10683 = 0;
	var uLocal_10684 = 0;
	var uLocal_10685 = 0;
	var uLocal_10686 = 0;
	var uLocal_10687 = 0;
	var uLocal_10688 = 0;
	var uLocal_10689 = 0;
	var uLocal_10690 = 0;
	var uLocal_10691 = 0;
	var uLocal_10692 = 0;
	var uLocal_10693 = 0;
	var uLocal_10694 = 0;
	var uLocal_10695 = 0;
	var uLocal_10696 = 0;
	var uLocal_10697 = 0;
	var uLocal_10698 = 0;
	var uLocal_10699 = 0;
	var uLocal_10700 = 0;
	var uLocal_10701 = 0;
	var uLocal_10702 = 0;
	var uLocal_10703 = 0;
	var uLocal_10704 = 0;
	var uLocal_10705 = 0;
	var uLocal_10706 = 0;
	var uLocal_10707 = 0;
	var uLocal_10708 = 0;
	var uLocal_10709 = 0;
	var uLocal_10710 = 0;
	var uLocal_10711 = 0;
	var uLocal_10712 = 0;
	var uLocal_10713 = 0;
	var uLocal_10714 = 0;
	var uLocal_10715 = 0;
	var uLocal_10716 = 0;
	var uLocal_10717 = 0;
	var uLocal_10718 = 0;
	var uLocal_10719 = 0;
	var uLocal_10720 = 0;
	var uLocal_10721 = 0;
	var uLocal_10722 = 0;
	var uLocal_10723 = 0;
	var uLocal_10724 = 0;
	var uLocal_10725 = 0;
	var uLocal_10726 = 0;
	var uLocal_10727 = 0;
	var uLocal_10728 = 0;
	var uLocal_10729 = 0;
	var uLocal_10730 = 0;
	var uLocal_10731 = 0;
	var uLocal_10732 = 0;
	var uLocal_10733 = 0;
	var uLocal_10734 = 0;
	var uLocal_10735 = 0;
	var uLocal_10736 = 0;
	var uLocal_10737 = 0;
	var uLocal_10738 = 0;
	var uLocal_10739 = 0;
	var uLocal_10740 = 0;
	var uLocal_10741 = 0;
	var uLocal_10742 = 0;
	var uLocal_10743 = 0;
	var uLocal_10744 = 0;
	var uLocal_10745 = 0;
	var uLocal_10746 = 0;
	var uLocal_10747 = 0;
	var uLocal_10748 = 0;
	var uLocal_10749 = 0;
	var uLocal_10750 = 0;
	var uLocal_10751 = 0;
	var uLocal_10752 = 0;
	var uLocal_10753 = 0;
	var uLocal_10754 = 0;
	var uLocal_10755 = 0;
	var uLocal_10756 = 0;
	var uLocal_10757 = 0;
	var uLocal_10758 = 0;
	var uLocal_10759 = 0;
	var uLocal_10760 = 0;
	var uLocal_10761 = 0;
	var uLocal_10762 = 0;
	var uLocal_10763 = 0;
	var uLocal_10764 = 0;
	var uLocal_10765 = 0;
	var uLocal_10766 = 0;
	var uLocal_10767 = 0;
	var uLocal_10768 = 0;
	var uLocal_10769 = 0;
	var uLocal_10770 = 0;
	var uLocal_10771 = 0;
	var uLocal_10772 = 0;
	var uLocal_10773 = 0;
	var uLocal_10774 = 0;
	var uLocal_10775 = 0;
	var uLocal_10776 = 0;
	var uLocal_10777 = 0;
	var uLocal_10778 = 0;
	var uLocal_10779 = 0;
	var uLocal_10780 = 0;
	var uLocal_10781 = 0;
	var uLocal_10782 = 0;
	var uLocal_10783 = 0;
	var uLocal_10784 = 0;
	var uLocal_10785 = 0;
	var uLocal_10786 = 0;
	var uLocal_10787 = 0;
	var uLocal_10788 = 0;
	var uLocal_10789 = 0;
	var uLocal_10790 = 0;
	var uLocal_10791 = 0;
	var uLocal_10792 = 0;
	var uLocal_10793 = 0;
	var uLocal_10794 = 0;
	var uLocal_10795 = 0;
	var uLocal_10796 = 0;
	var uLocal_10797 = 0;
	var uLocal_10798 = 0;
	var uLocal_10799 = 0;
	var uLocal_10800 = 0;
	var uLocal_10801 = 0;
	var uLocal_10802 = 0;
	var uLocal_10803 = 0;
	var uLocal_10804 = 0;
	var uLocal_10805 = 0;
	var uLocal_10806 = 0;
	var uLocal_10807 = 0;
	var uLocal_10808 = 0;
	var uLocal_10809 = 0;
	var uLocal_10810 = 0;
	var uLocal_10811 = 0;
	var uLocal_10812 = 0;
	var uLocal_10813 = 0;
	var uLocal_10814 = 0;
	var uLocal_10815 = 0;
	var uLocal_10816 = 0;
	var uLocal_10817 = 0;
	var uLocal_10818 = 0;
	var uLocal_10819 = 0;
	var uLocal_10820 = 0;
	var uLocal_10821 = 0;
	var uLocal_10822 = 0;
	var uLocal_10823 = 0;
	var uLocal_10824 = 0;
	var uLocal_10825 = 0;
	var uLocal_10826 = 0;
	var uLocal_10827 = 0;
	var uLocal_10828 = 0;
	var uLocal_10829 = 0;
	var uLocal_10830 = 0;
	var uLocal_10831 = 0;
	var uLocal_10832 = 0;
	var uLocal_10833 = 0;
	var uLocal_10834 = 0;
	var uLocal_10835 = 0;
	var uLocal_10836 = 0;
	var uLocal_10837 = 0;
	var uLocal_10838 = 0;
	var uLocal_10839 = 0;
	var uLocal_10840 = 0;
	var uLocal_10841 = 0;
	var uLocal_10842 = 0;
	var uLocal_10843 = 0;
	var uLocal_10844 = 0;
	var uLocal_10845 = 0;
	var uLocal_10846 = 0;
	var uLocal_10847 = 0;
	var uLocal_10848 = 0;
	var uLocal_10849 = 0;
	var uLocal_10850 = 0;
	var uLocal_10851 = 0;
	var uLocal_10852 = 0;
	var uLocal_10853 = 0;
	var uLocal_10854 = 0;
	var uLocal_10855 = 0;
	var uLocal_10856 = 0;
	var uLocal_10857 = 0;
	var uLocal_10858 = 0;
	var uLocal_10859 = 0;
	var uLocal_10860 = 0;
	var uLocal_10861 = 0;
	var uLocal_10862 = 0;
	var uLocal_10863 = 0;
	var uLocal_10864 = 0;
	var uLocal_10865 = 0;
	var uLocal_10866 = 0;
	var uLocal_10867 = 0;
	var uLocal_10868 = 0;
	var uLocal_10869 = 0;
	var uLocal_10870 = 0;
	var uLocal_10871 = 0;
	var uLocal_10872 = 0;
	var uLocal_10873 = 0;
	var uLocal_10874 = 0;
	var uLocal_10875 = 0;
	var uLocal_10876 = 0;
	var uLocal_10877 = 0;
	var uLocal_10878 = 0;
	var uLocal_10879 = 0;
	var uLocal_10880 = 0;
	var uLocal_10881 = 0;
	var uLocal_10882 = 0;
	var uLocal_10883 = 0;
	var uLocal_10884 = 0;
	var uLocal_10885 = 0;
	var uLocal_10886 = 0;
	var uLocal_10887 = 0;
	var uLocal_10888 = 0;
	var uLocal_10889 = 0;
	var uLocal_10890 = 0;
	var uLocal_10891 = 0;
	var uLocal_10892 = 0;
	var uLocal_10893 = 0;
	var uLocal_10894 = 0;
	var uLocal_10895 = 0;
	var uLocal_10896 = 0;
	var uLocal_10897 = 0;
	var uLocal_10898 = 0;
	var uLocal_10899 = 0;
	var uLocal_10900 = 0;
	var uLocal_10901 = 0;
	var uLocal_10902 = 0;
	var uLocal_10903 = 0;
	var uLocal_10904 = 0;
	var uLocal_10905 = 0;
	var uLocal_10906 = 0;
	var uLocal_10907 = 0;
	var uLocal_10908 = 0;
	var uLocal_10909 = 0;
	var uLocal_10910 = 0;
	var uLocal_10911 = 0;
	var uLocal_10912 = 0;
	var uLocal_10913 = 0;
	var uLocal_10914 = 0;
	var uLocal_10915 = 0;
	var uLocal_10916 = 0;
	var uLocal_10917 = 0;
	var uLocal_10918 = 0;
	var uLocal_10919 = 0;
	var uLocal_10920 = 0;
	var uLocal_10921 = 0;
	var uLocal_10922 = 0;
	var uLocal_10923 = 0;
	var uLocal_10924 = 0;
	var uLocal_10925 = 0;
	var uLocal_10926 = 0;
	var uLocal_10927 = 0;
	var uLocal_10928 = 0;
	var uLocal_10929 = 0;
	var uLocal_10930 = 0;
	var uLocal_10931 = 0;
	var uLocal_10932 = 0;
	var uLocal_10933 = 0;
	var uLocal_10934 = 0;
	var uLocal_10935 = 0;
	var uLocal_10936 = 0;
	var uLocal_10937 = 0;
	var uLocal_10938 = 0;
	var uLocal_10939 = 0;
	var uLocal_10940 = 0;
	var uLocal_10941 = 0;
	var uLocal_10942 = 0;
	var uLocal_10943 = 0;
	var uLocal_10944 = 0;
	var uLocal_10945 = 0;
	var uLocal_10946 = 0;
	var uLocal_10947 = 0;
	var uLocal_10948 = 0;
	var uLocal_10949 = 0;
	var uLocal_10950 = 0;
	var uLocal_10951 = 0;
	var uLocal_10952 = 0;
	var uLocal_10953 = 0;
	var uLocal_10954 = 0;
	var uLocal_10955 = 0;
	var uLocal_10956 = 0;
	var uLocal_10957 = 0;
	var uLocal_10958 = 0;
	var uLocal_10959 = 0;
	var uLocal_10960 = 0;
	var uLocal_10961 = 0;
	var uLocal_10962 = 0;
	var uLocal_10963 = 0;
	var uLocal_10964 = 0;
	var uLocal_10965 = 0;
	var uLocal_10966 = 0;
	var uLocal_10967 = 0;
	var uLocal_10968 = 0;
	var uLocal_10969 = 0;
	var uLocal_10970 = 0;
	var uLocal_10971 = 0;
	var uLocal_10972 = 0;
	var uLocal_10973 = 0;
	var uLocal_10974 = 0;
	var uLocal_10975 = 0;
	var uLocal_10976 = 0;
	var uLocal_10977 = 0;
	var uLocal_10978 = 0;
	var uLocal_10979 = 0;
	var uLocal_10980 = 0;
	var uLocal_10981 = 0;
	var uLocal_10982 = 0;
	var uLocal_10983 = 0;
	var uLocal_10984 = 0;
	var uLocal_10985 = 0;
	var uLocal_10986 = 0;
	var uLocal_10987 = 0;
	var uLocal_10988 = 60;
	var uLocal_10989 = 0;
	var uLocal_10990 = 0;
	var uLocal_10991 = 0;
	var uLocal_10992 = 0;
	var uLocal_10993 = 0;
	var uLocal_10994 = 0;
	var uLocal_10995 = 0;
	var uLocal_10996 = 0;
	var uLocal_10997 = 0;
	var uLocal_10998 = 0;
	var uLocal_10999 = 0;
	var uLocal_11000 = 0;
	var uLocal_11001 = 0;
	var uLocal_11002 = 0;
	var uLocal_11003 = 0;
	var uLocal_11004 = 0;
	var uLocal_11005 = 0;
	var uLocal_11006 = 0;
	var uLocal_11007 = 0;
	var uLocal_11008 = 0;
	var uLocal_11009 = 0;
	var uLocal_11010 = 0;
	var uLocal_11011 = 0;
	var uLocal_11012 = 0;
	var uLocal_11013 = 0;
	var uLocal_11014 = 0;
	var uLocal_11015 = 0;
	var uLocal_11016 = 0;
	var uLocal_11017 = 0;
	var uLocal_11018 = 0;
	var uLocal_11019 = 0;
	var uLocal_11020 = 0;
	var uLocal_11021 = 0;
	var uLocal_11022 = 0;
	var uLocal_11023 = 0;
	var uLocal_11024 = 0;
	var uLocal_11025 = 0;
	var uLocal_11026 = 0;
	var uLocal_11027 = 0;
	var uLocal_11028 = 0;
	var uLocal_11029 = 0;
	var uLocal_11030 = 0;
	var uLocal_11031 = 0;
	var uLocal_11032 = 0;
	var uLocal_11033 = 0;
	var uLocal_11034 = 0;
	var uLocal_11035 = 0;
	var uLocal_11036 = 0;
	var uLocal_11037 = 0;
	var uLocal_11038 = 0;
	var uLocal_11039 = 0;
	var uLocal_11040 = 0;
	var uLocal_11041 = 0;
	var uLocal_11042 = 0;
	var uLocal_11043 = 0;
	var uLocal_11044 = 0;
	var uLocal_11045 = 0;
	var uLocal_11046 = 0;
	var uLocal_11047 = 0;
	var uLocal_11048 = 0;
	var uLocal_11049 = 0;
	var uLocal_11050 = 0;
	var uLocal_11051 = 0;
	var uLocal_11052 = 0;
	var uLocal_11053 = 0;
	var uLocal_11054 = 0;
	var uLocal_11055 = 0;
	var uLocal_11056 = 0;
	var uLocal_11057 = 0;
	var uLocal_11058 = 0;
	var uLocal_11059 = 0;
	var uLocal_11060 = 0;
	var uLocal_11061 = 0;
	var uLocal_11062 = 0;
	var uLocal_11063 = 0;
	var uLocal_11064 = 0;
	var uLocal_11065 = 0;
	var uLocal_11066 = 0;
	var uLocal_11067 = 0;
	var uLocal_11068 = 0;
	var uLocal_11069 = 0;
	var uLocal_11070 = 0;
	var uLocal_11071 = 0;
	var uLocal_11072 = 0;
	var uLocal_11073 = 0;
	var uLocal_11074 = 0;
	var uLocal_11075 = 0;
	var uLocal_11076 = 0;
	var uLocal_11077 = 0;
	var uLocal_11078 = 0;
	var uLocal_11079 = 0;
	var uLocal_11080 = 0;
	var uLocal_11081 = 0;
	var uLocal_11082 = 0;
	var uLocal_11083 = 0;
	var uLocal_11084 = 0;
	var uLocal_11085 = 0;
	var uLocal_11086 = 0;
	var uLocal_11087 = 0;
	var uLocal_11088 = 0;
	var uLocal_11089 = 0;
	var uLocal_11090 = 0;
	var uLocal_11091 = 0;
	var uLocal_11092 = 0;
	var uLocal_11093 = 0;
	var uLocal_11094 = 0;
	var uLocal_11095 = 0;
	var uLocal_11096 = 0;
	var uLocal_11097 = 0;
	var uLocal_11098 = 0;
	var uLocal_11099 = 0;
	var uLocal_11100 = 0;
	var uLocal_11101 = 0;
	var uLocal_11102 = 0;
	var uLocal_11103 = 0;
	var uLocal_11104 = 0;
	var uLocal_11105 = 0;
	var uLocal_11106 = 0;
	var uLocal_11107 = 0;
	var uLocal_11108 = 0;
	var uLocal_11109 = 0;
	var uLocal_11110 = 0;
	var uLocal_11111 = 0;
	var uLocal_11112 = 0;
	var uLocal_11113 = 0;
	var uLocal_11114 = 0;
	var uLocal_11115 = 0;
	var uLocal_11116 = 0;
	var uLocal_11117 = 0;
	var uLocal_11118 = 0;
	var uLocal_11119 = 0;
	var uLocal_11120 = 0;
	var uLocal_11121 = 0;
	var uLocal_11122 = 0;
	var uLocal_11123 = 0;
	var uLocal_11124 = 0;
	var uLocal_11125 = 0;
	var uLocal_11126 = 0;
	var uLocal_11127 = 0;
	var uLocal_11128 = 0;
	var uLocal_11129 = 0;
	var uLocal_11130 = 0;
	var uLocal_11131 = 0;
	var uLocal_11132 = 0;
	var uLocal_11133 = 0;
	var uLocal_11134 = 0;
	var uLocal_11135 = 0;
	var uLocal_11136 = 0;
	var uLocal_11137 = 0;
	var uLocal_11138 = 0;
	var uLocal_11139 = 0;
	var uLocal_11140 = 0;
	var uLocal_11141 = 0;
	var uLocal_11142 = 0;
	var uLocal_11143 = 0;
	var uLocal_11144 = 0;
	var uLocal_11145 = 0;
	var uLocal_11146 = 0;
	var uLocal_11147 = 0;
	var uLocal_11148 = 0;
	var uLocal_11149 = 0;
	var uLocal_11150 = 0;
	var uLocal_11151 = 0;
	var uLocal_11152 = 0;
	var uLocal_11153 = 0;
	var uLocal_11154 = 0;
	var uLocal_11155 = 0;
	var uLocal_11156 = 0;
	var uLocal_11157 = 0;
	var uLocal_11158 = 0;
	var uLocal_11159 = 0;
	var uLocal_11160 = 0;
	var uLocal_11161 = 0;
	var uLocal_11162 = 0;
	var uLocal_11163 = 0;
	var uLocal_11164 = 0;
	var uLocal_11165 = 0;
	var uLocal_11166 = 0;
	var uLocal_11167 = 0;
	var uLocal_11168 = 0;
	var uLocal_11169 = 0;
	var uLocal_11170 = 0;
	var uLocal_11171 = 0;
	var uLocal_11172 = 0;
	var uLocal_11173 = 0;
	var uLocal_11174 = 0;
	var uLocal_11175 = 0;
	var uLocal_11176 = 0;
	var uLocal_11177 = 0;
	var uLocal_11178 = 0;
	var uLocal_11179 = 0;
	var uLocal_11180 = 0;
	var uLocal_11181 = 0;
	var uLocal_11182 = 0;
	var uLocal_11183 = 0;
	var uLocal_11184 = 0;
	var uLocal_11185 = 0;
	var uLocal_11186 = 0;
	var uLocal_11187 = 0;
	var uLocal_11188 = 0;
	var uLocal_11189 = 0;
	var uLocal_11190 = 0;
	var uLocal_11191 = 0;
	var uLocal_11192 = 0;
	var uLocal_11193 = 0;
	var uLocal_11194 = 0;
	var uLocal_11195 = 0;
	var uLocal_11196 = 0;
	var uLocal_11197 = 0;
	var uLocal_11198 = 0;
	var uLocal_11199 = 0;
	var uLocal_11200 = 0;
	var uLocal_11201 = 0;
	var uLocal_11202 = 0;
	var uLocal_11203 = 0;
	var uLocal_11204 = 0;
	var uLocal_11205 = 0;
	var uLocal_11206 = 0;
	var uLocal_11207 = 0;
	var uLocal_11208 = 0;
	var uLocal_11209 = 0;
	var uLocal_11210 = 0;
	var uLocal_11211 = 0;
	var uLocal_11212 = 0;
	var uLocal_11213 = 0;
	var uLocal_11214 = 0;
	var uLocal_11215 = 0;
	var uLocal_11216 = 0;
	var uLocal_11217 = 0;
	var uLocal_11218 = 0;
	var uLocal_11219 = 0;
	var uLocal_11220 = 0;
	var uLocal_11221 = 0;
	var uLocal_11222 = 0;
	var uLocal_11223 = 0;
	var uLocal_11224 = 0;
	var uLocal_11225 = 0;
	var uLocal_11226 = 0;
	var uLocal_11227 = 0;
	var uLocal_11228 = 0;
	var uLocal_11229 = 0;
	var uLocal_11230 = 0;
	var uLocal_11231 = 0;
	var uLocal_11232 = 0;
	var uLocal_11233 = 0;
	var uLocal_11234 = 0;
	var uLocal_11235 = 0;
	var uLocal_11236 = 0;
	var uLocal_11237 = 0;
	var uLocal_11238 = 0;
	var uLocal_11239 = 0;
	var uLocal_11240 = 0;
	var uLocal_11241 = 0;
	var uLocal_11242 = 0;
	var uLocal_11243 = 0;
	var uLocal_11244 = 0;
	var uLocal_11245 = 0;
	var uLocal_11246 = 0;
	var uLocal_11247 = 0;
	var uLocal_11248 = 0;
	var uLocal_11249 = 0;
	var uLocal_11250 = 0;
	var uLocal_11251 = 0;
	var uLocal_11252 = 0;
	var uLocal_11253 = 0;
	var uLocal_11254 = 0;
	var uLocal_11255 = 0;
	var uLocal_11256 = 0;
	var uLocal_11257 = 0;
	var uLocal_11258 = 0;
	var uLocal_11259 = 0;
	var uLocal_11260 = 0;
	var uLocal_11261 = 0;
	var uLocal_11262 = 0;
	var uLocal_11263 = 0;
	var uLocal_11264 = 0;
	var uLocal_11265 = 0;
	var uLocal_11266 = 0;
	var uLocal_11267 = 0;
	var uLocal_11268 = 0;
	var uLocal_11269 = 0;
	var uLocal_11270 = 0;
	var uLocal_11271 = 0;
	var uLocal_11272 = 0;
	var uLocal_11273 = 0;
	var uLocal_11274 = 0;
	var uLocal_11275 = 0;
	var uLocal_11276 = 0;
	var uLocal_11277 = 0;
	var uLocal_11278 = 0;
	var uLocal_11279 = 0;
	var uLocal_11280 = 0;
	var uLocal_11281 = 0;
	var uLocal_11282 = 0;
	var uLocal_11283 = 0;
	var uLocal_11284 = 0;
	var uLocal_11285 = 0;
	var uLocal_11286 = 0;
	var uLocal_11287 = 0;
	var uLocal_11288 = 0;
	var uLocal_11289 = 0;
	var uLocal_11290 = 0;
	var uLocal_11291 = 0;
	var uLocal_11292 = 0;
	var uLocal_11293 = 0;
	var uLocal_11294 = 0;
	var uLocal_11295 = 0;
	var uLocal_11296 = 0;
	var uLocal_11297 = 0;
	var uLocal_11298 = 0;
	var uLocal_11299 = 0;
	var uLocal_11300 = 0;
	var uLocal_11301 = 0;
	var uLocal_11302 = 0;
	var uLocal_11303 = 0;
	var uLocal_11304 = 0;
	var uLocal_11305 = 0;
	var uLocal_11306 = 0;
	var uLocal_11307 = 0;
	var uLocal_11308 = 0;
	var uLocal_11309 = 0;
	var uLocal_11310 = 0;
	var uLocal_11311 = 0;
	var uLocal_11312 = 0;
	var uLocal_11313 = 0;
	var uLocal_11314 = 0;
	var uLocal_11315 = 0;
	var uLocal_11316 = 0;
	var uLocal_11317 = 0;
	var uLocal_11318 = 0;
	var uLocal_11319 = 0;
	var uLocal_11320 = 0;
	var uLocal_11321 = 0;
	var uLocal_11322 = 0;
	var uLocal_11323 = 0;
	var uLocal_11324 = 0;
	var uLocal_11325 = 0;
	var uLocal_11326 = 0;
	var uLocal_11327 = 0;
	var uLocal_11328 = 0;
	var uLocal_11329 = 0;
	var uLocal_11330 = 0;
	var uLocal_11331 = 0;
	var uLocal_11332 = 0;
	var uLocal_11333 = 0;
	var uLocal_11334 = 0;
	var uLocal_11335 = 0;
	var uLocal_11336 = 0;
	var uLocal_11337 = 0;
	var uLocal_11338 = 0;
	var uLocal_11339 = 0;
	var uLocal_11340 = 0;
	var uLocal_11341 = 0;
	var uLocal_11342 = 0;
	var uLocal_11343 = 0;
	var uLocal_11344 = 0;
	var uLocal_11345 = 0;
	var uLocal_11346 = 0;
	var uLocal_11347 = 0;
	var uLocal_11348 = 0;
	var uLocal_11349 = 0;
	var uLocal_11350 = 0;
	var uLocal_11351 = 0;
	var uLocal_11352 = 0;
	var uLocal_11353 = 0;
	var uLocal_11354 = 0;
	var uLocal_11355 = 0;
	var uLocal_11356 = 0;
	var uLocal_11357 = 0;
	var uLocal_11358 = 0;
	var uLocal_11359 = 0;
	var uLocal_11360 = 0;
	var uLocal_11361 = 0;
	var uLocal_11362 = 0;
	var uLocal_11363 = 0;
	var uLocal_11364 = 0;
	var uLocal_11365 = 0;
	var uLocal_11366 = 0;
	var uLocal_11367 = 0;
	var uLocal_11368 = 0;
	var uLocal_11369 = 0;
	var uLocal_11370 = 0;
	var uLocal_11371 = 0;
	var uLocal_11372 = 0;
	var uLocal_11373 = 0;
	var uLocal_11374 = 0;
	var uLocal_11375 = 0;
	var uLocal_11376 = 0;
	var uLocal_11377 = 0;
	var uLocal_11378 = 0;
	var uLocal_11379 = 0;
	var uLocal_11380 = 0;
	var uLocal_11381 = 0;
	var uLocal_11382 = 0;
	var uLocal_11383 = 0;
	var uLocal_11384 = 0;
	var uLocal_11385 = 0;
	var uLocal_11386 = 0;
	var uLocal_11387 = 0;
	var uLocal_11388 = 0;
	var uLocal_11389 = 0;
	var uLocal_11390 = 0;
	var uLocal_11391 = 0;
	var uLocal_11392 = 0;
	var uLocal_11393 = 0;
	var uLocal_11394 = 0;
	var uLocal_11395 = 0;
	var uLocal_11396 = 0;
	var uLocal_11397 = 0;
	var uLocal_11398 = 0;
	var uLocal_11399 = 0;
	var uLocal_11400 = 0;
	var uLocal_11401 = 0;
	var uLocal_11402 = 0;
	var uLocal_11403 = 0;
	var uLocal_11404 = 0;
	var uLocal_11405 = 0;
	var uLocal_11406 = 0;
	var uLocal_11407 = 0;
	var uLocal_11408 = 0;
	var uLocal_11409 = 0;
	var uLocal_11410 = 0;
	var uLocal_11411 = 0;
	var uLocal_11412 = 0;
	var uLocal_11413 = 0;
	var uLocal_11414 = 0;
	var uLocal_11415 = 0;
	var uLocal_11416 = 0;
	var uLocal_11417 = 0;
	var uLocal_11418 = 0;
	var uLocal_11419 = 0;
	var uLocal_11420 = 0;
	var uLocal_11421 = 0;
	var uLocal_11422 = 0;
	var uLocal_11423 = 0;
	var uLocal_11424 = 0;
	var uLocal_11425 = 0;
	var uLocal_11426 = 0;
	var uLocal_11427 = 0;
	var uLocal_11428 = 0;
	var uLocal_11429 = 0;
	var uLocal_11430 = 0;
	var uLocal_11431 = 0;
	var uLocal_11432 = 0;
	var uLocal_11433 = 0;
	var uLocal_11434 = 0;
	var uLocal_11435 = 0;
	var uLocal_11436 = 0;
	var uLocal_11437 = 0;
	var uLocal_11438 = 0;
	var uLocal_11439 = 0;
	var uLocal_11440 = 0;
	var uLocal_11441 = 0;
	var uLocal_11442 = 0;
	var uLocal_11443 = 0;
	var uLocal_11444 = 0;
	var uLocal_11445 = 0;
	var uLocal_11446 = 0;
	var uLocal_11447 = 0;
	var uLocal_11448 = 0;
	var uLocal_11449 = 0;
	var uLocal_11450 = 0;
	var uLocal_11451 = 0;
	var uLocal_11452 = 0;
	var uLocal_11453 = 0;
	var uLocal_11454 = 0;
	var uLocal_11455 = 0;
	var uLocal_11456 = 0;
	var uLocal_11457 = 0;
	var uLocal_11458 = 0;
	var uLocal_11459 = 0;
	var uLocal_11460 = 0;
	var uLocal_11461 = 0;
	var uLocal_11462 = 0;
	var uLocal_11463 = 0;
	var uLocal_11464 = 0;
	var uLocal_11465 = 0;
	var uLocal_11466 = 0;
	var uLocal_11467 = 0;
	var uLocal_11468 = 0;
	var uLocal_11469 = 0;
	var uLocal_11470 = 0;
	var uLocal_11471 = 0;
	var uLocal_11472 = 0;
	var uLocal_11473 = 0;
	var uLocal_11474 = 0;
	var uLocal_11475 = 0;
	var uLocal_11476 = 0;
	var uLocal_11477 = 0;
	var uLocal_11478 = 0;
	var uLocal_11479 = 0;
	var uLocal_11480 = 0;
	var uLocal_11481 = 0;
	var uLocal_11482 = 0;
	var uLocal_11483 = 0;
	var uLocal_11484 = 0;
	var uLocal_11485 = 0;
	var uLocal_11486 = 0;
	var uLocal_11487 = 0;
	var uLocal_11488 = 0;
	var uLocal_11489 = 0;
	var uLocal_11490 = 0;
	var uLocal_11491 = 0;
	var uLocal_11492 = 0;
	var uLocal_11493 = 0;
	var uLocal_11494 = 0;
	var uLocal_11495 = 0;
	var uLocal_11496 = 0;
	var uLocal_11497 = 0;
	var uLocal_11498 = 0;
	var uLocal_11499 = 0;
	var uLocal_11500 = 0;
	var uLocal_11501 = 0;
	var uLocal_11502 = 0;
	var uLocal_11503 = 0;
	var uLocal_11504 = 0;
	var uLocal_11505 = 0;
	var uLocal_11506 = 0;
	var uLocal_11507 = 0;
	var uLocal_11508 = 0;
	var uLocal_11509 = 0;
	var uLocal_11510 = 0;
	var uLocal_11511 = 0;
	var uLocal_11512 = 0;
	var uLocal_11513 = 0;
	var uLocal_11514 = 0;
	var uLocal_11515 = 0;
	var uLocal_11516 = 0;
	var uLocal_11517 = 0;
	var uLocal_11518 = 0;
	var uLocal_11519 = 0;
	var uLocal_11520 = 0;
	var uLocal_11521 = 0;
	var uLocal_11522 = 0;
	var uLocal_11523 = 0;
	var uLocal_11524 = 0;
	var uLocal_11525 = 0;
	var uLocal_11526 = 0;
	var uLocal_11527 = 0;
	var uLocal_11528 = 0;
	var uLocal_11529 = 0;
	var uLocal_11530 = 0;
	var uLocal_11531 = 0;
	var uLocal_11532 = 0;
	var uLocal_11533 = 0;
	var uLocal_11534 = 0;
	var uLocal_11535 = 0;
	var uLocal_11536 = 0;
	var uLocal_11537 = 0;
	var uLocal_11538 = 0;
	var uLocal_11539 = 0;
	var uLocal_11540 = 0;
	var uLocal_11541 = 0;
	var uLocal_11542 = 0;
	var uLocal_11543 = 0;
	var uLocal_11544 = 0;
	var uLocal_11545 = 0;
	var uLocal_11546 = 0;
	var uLocal_11547 = 0;
	var uLocal_11548 = 0;
	var uLocal_11549 = 0;
	var uLocal_11550 = 0;
	var uLocal_11551 = 0;
	var uLocal_11552 = 0;
	var uLocal_11553 = 0;
	var uLocal_11554 = 0;
	var uLocal_11555 = 0;
	var uLocal_11556 = 0;
	var uLocal_11557 = 0;
	var uLocal_11558 = 0;
	var uLocal_11559 = 0;
	var uLocal_11560 = 0;
	var uLocal_11561 = 0;
	var uLocal_11562 = 0;
	var uLocal_11563 = 0;
	var uLocal_11564 = 0;
	var uLocal_11565 = 0;
	var uLocal_11566 = 0;
	var uLocal_11567 = 0;
	var uLocal_11568 = 0;
	var uLocal_11569 = 0;
	var uLocal_11570 = 0;
	var uLocal_11571 = 0;
	var uLocal_11572 = 0;
	var uLocal_11573 = 0;
	var uLocal_11574 = 0;
	var uLocal_11575 = 0;
	var uLocal_11576 = 0;
	var uLocal_11577 = 0;
	var uLocal_11578 = 0;
	var uLocal_11579 = 0;
	var uLocal_11580 = 0;
	var uLocal_11581 = 0;
	var uLocal_11582 = 0;
	var uLocal_11583 = 0;
	var uLocal_11584 = 0;
	var uLocal_11585 = 0;
	var uLocal_11586 = 0;
	var uLocal_11587 = 0;
	var uLocal_11588 = 0;
	var uLocal_11589 = 0;
	var uLocal_11590 = 0;
	var uLocal_11591 = 0;
	var uLocal_11592 = 0;
	var uLocal_11593 = 0;
	var uLocal_11594 = 0;
	var uLocal_11595 = 0;
	var uLocal_11596 = 0;
	var uLocal_11597 = 0;
	var uLocal_11598 = 0;
	var uLocal_11599 = 0;
	var uLocal_11600 = 0;
	var uLocal_11601 = 0;
	var uLocal_11602 = 0;
	var uLocal_11603 = 0;
	var uLocal_11604 = 0;
	var uLocal_11605 = 0;
	var uLocal_11606 = 0;
	var uLocal_11607 = 0;
	var uLocal_11608 = 0;
	var uLocal_11609 = 0;
	var uLocal_11610 = 0;
	var uLocal_11611 = 0;
	var uLocal_11612 = 0;
	var uLocal_11613 = 0;
	var uLocal_11614 = 0;
	var uLocal_11615 = 0;
	var uLocal_11616 = 0;
	var uLocal_11617 = 0;
	var uLocal_11618 = 0;
	var uLocal_11619 = 0;
	var uLocal_11620 = 0;
	var uLocal_11621 = 0;
	var uLocal_11622 = 0;
	var uLocal_11623 = 0;
	var uLocal_11624 = 0;
	var uLocal_11625 = 0;
	var uLocal_11626 = 0;
	var uLocal_11627 = 0;
	var uLocal_11628 = 0;
	var uLocal_11629 = 0;
	var uLocal_11630 = 0;
	var uLocal_11631 = 0;
	var uLocal_11632 = 0;
	var uLocal_11633 = 0;
	var uLocal_11634 = 0;
	var uLocal_11635 = 0;
	var uLocal_11636 = 0;
	var uLocal_11637 = 0;
	var uLocal_11638 = 0;
	var uLocal_11639 = 0;
	var uLocal_11640 = 0;
	var uLocal_11641 = 0;
	var uLocal_11642 = 0;
	var uLocal_11643 = 0;
	var uLocal_11644 = 0;
	var uLocal_11645 = 0;
	var uLocal_11646 = 0;
	var uLocal_11647 = 0;
	var uLocal_11648 = 0;
	var uLocal_11649 = 0;
	var uLocal_11650 = 0;
	var uLocal_11651 = 0;
	var uLocal_11652 = 0;
	var uLocal_11653 = 0;
	var uLocal_11654 = 0;
	var uLocal_11655 = 0;
	var uLocal_11656 = 0;
	var uLocal_11657 = 0;
	var uLocal_11658 = 0;
	var uLocal_11659 = 0;
	var uLocal_11660 = 0;
	var uLocal_11661 = 0;
	var uLocal_11662 = 0;
	var uLocal_11663 = 0;
	var uLocal_11664 = 0;
	var uLocal_11665 = 0;
	var uLocal_11666 = 0;
	var uLocal_11667 = 0;
	var uLocal_11668 = 0;
	var uLocal_11669 = 0;
	var uLocal_11670 = 0;
	var uLocal_11671 = 0;
	var uLocal_11672 = 0;
	var uLocal_11673 = 0;
	var uLocal_11674 = 0;
	var uLocal_11675 = 0;
	var uLocal_11676 = 0;
	var uLocal_11677 = 0;
	var uLocal_11678 = 0;
	var uLocal_11679 = 0;
	var uLocal_11680 = 0;
	var uLocal_11681 = 0;
	var uLocal_11682 = 0;
	var uLocal_11683 = 0;
	var uLocal_11684 = 0;
	var uLocal_11685 = 0;
	var uLocal_11686 = 0;
	var uLocal_11687 = 0;
	var uLocal_11688 = 0;
	var uLocal_11689 = 0;
	var uLocal_11690 = 0;
	var uLocal_11691 = 0;
	var uLocal_11692 = 0;
	var uLocal_11693 = 0;
	var uLocal_11694 = 0;
	var uLocal_11695 = 0;
	var uLocal_11696 = 0;
	var uLocal_11697 = 0;
	var uLocal_11698 = 0;
	var uLocal_11699 = 0;
	var uLocal_11700 = 0;
	var uLocal_11701 = 0;
	var uLocal_11702 = 0;
	var uLocal_11703 = 0;
	var uLocal_11704 = 0;
	var uLocal_11705 = 0;
	var uLocal_11706 = 0;
	var uLocal_11707 = 0;
	var uLocal_11708 = 0;
	var uLocal_11709 = 0;
	var uLocal_11710 = 0;
	var uLocal_11711 = 0;
	var uLocal_11712 = 0;
	var uLocal_11713 = 0;
	var uLocal_11714 = 0;
	var uLocal_11715 = 0;
	var uLocal_11716 = 0;
	var uLocal_11717 = 0;
	var uLocal_11718 = 0;
	var uLocal_11719 = 0;
	var uLocal_11720 = 0;
	var uLocal_11721 = 0;
	var uLocal_11722 = 0;
	var uLocal_11723 = 0;
	var uLocal_11724 = 0;
	var uLocal_11725 = 0;
	var uLocal_11726 = 0;
	var uLocal_11727 = 0;
	var uLocal_11728 = 0;
	var uLocal_11729 = 0;
	var uLocal_11730 = 0;
	var uLocal_11731 = 0;
	var uLocal_11732 = 0;
	var uLocal_11733 = 0;
	var uLocal_11734 = 0;
	var uLocal_11735 = 0;
	var uLocal_11736 = 0;
	var uLocal_11737 = 0;
	var uLocal_11738 = 0;
	var uLocal_11739 = 0;
	var uLocal_11740 = 0;
	var uLocal_11741 = 0;
	var uLocal_11742 = 0;
	var uLocal_11743 = 0;
	var uLocal_11744 = 0;
	var uLocal_11745 = 0;
	var uLocal_11746 = 0;
	var uLocal_11747 = 0;
	var uLocal_11748 = 0;
	var uLocal_11749 = 0;
	var uLocal_11750 = 0;
	var uLocal_11751 = 0;
	var uLocal_11752 = 0;
	var uLocal_11753 = 0;
	var uLocal_11754 = 0;
	var uLocal_11755 = 0;
	var uLocal_11756 = 0;
	var uLocal_11757 = 0;
	var uLocal_11758 = 0;
	var uLocal_11759 = 0;
	var uLocal_11760 = 0;
	var uLocal_11761 = 0;
	var uLocal_11762 = 0;
	var uLocal_11763 = 0;
	var uLocal_11764 = 0;
	var uLocal_11765 = 0;
	var uLocal_11766 = 0;
	var uLocal_11767 = 0;
	var uLocal_11768 = 0;
	var uLocal_11769 = 0;
	var uLocal_11770 = 0;
	var uLocal_11771 = 0;
	var uLocal_11772 = 0;
	var uLocal_11773 = 0;
	var uLocal_11774 = 0;
	var uLocal_11775 = 0;
	var uLocal_11776 = 0;
	var uLocal_11777 = 0;
	var uLocal_11778 = 0;
	var uLocal_11779 = 0;
	var uLocal_11780 = 0;
	var uLocal_11781 = 0;
	var uLocal_11782 = 0;
	var uLocal_11783 = 0;
	var uLocal_11784 = 0;
	var uLocal_11785 = 0;
	var uLocal_11786 = 0;
	var uLocal_11787 = 0;
	var uLocal_11788 = 0;
	var uLocal_11789 = 0;
	var uLocal_11790 = 0;
	var uLocal_11791 = 0;
	var uLocal_11792 = 0;
	var uLocal_11793 = 0;
	var uLocal_11794 = 0;
	var uLocal_11795 = 0;
	var uLocal_11796 = 0;
	var uLocal_11797 = 0;
	var uLocal_11798 = 0;
	var uLocal_11799 = 0;
	var uLocal_11800 = 0;
	var uLocal_11801 = 0;
	var uLocal_11802 = 0;
	var uLocal_11803 = 0;
	var uLocal_11804 = 0;
	var uLocal_11805 = 0;
	var uLocal_11806 = 0;
	var uLocal_11807 = 0;
	var uLocal_11808 = 0;
	var uLocal_11809 = 0;
	var uLocal_11810 = 0;
	var uLocal_11811 = 0;
	var uLocal_11812 = 0;
	var uLocal_11813 = 0;
	var uLocal_11814 = 0;
	var uLocal_11815 = 0;
	var uLocal_11816 = 0;
	var uLocal_11817 = 0;
	var uLocal_11818 = 0;
	var uLocal_11819 = 0;
	var uLocal_11820 = 0;
	var uLocal_11821 = 0;
	var uLocal_11822 = 0;
	var uLocal_11823 = 0;
	var uLocal_11824 = 0;
	var uLocal_11825 = 0;
	var uLocal_11826 = 0;
	var uLocal_11827 = 0;
	var uLocal_11828 = 0;
	var uLocal_11829 = 0;
	var uLocal_11830 = 0;
	var uLocal_11831 = 0;
	var uLocal_11832 = 0;
	var uLocal_11833 = 0;
	var uLocal_11834 = 0;
	var uLocal_11835 = 0;
	var uLocal_11836 = 0;
	var uLocal_11837 = 0;
	var uLocal_11838 = 0;
	var uLocal_11839 = 0;
	var uLocal_11840 = 0;
	var uLocal_11841 = 0;
	var uLocal_11842 = 0;
	var uLocal_11843 = 0;
	var uLocal_11844 = 0;
	var uLocal_11845 = 0;
	var uLocal_11846 = 0;
	var uLocal_11847 = 0;
	var uLocal_11848 = 0;
	var uLocal_11849 = 0;
	var uLocal_11850 = 0;
	var uLocal_11851 = 0;
	var uLocal_11852 = 0;
	var uLocal_11853 = 0;
	var uLocal_11854 = 0;
	var uLocal_11855 = 0;
	var uLocal_11856 = 0;
	var uLocal_11857 = 0;
	var uLocal_11858 = 0;
	var uLocal_11859 = 0;
	var uLocal_11860 = 0;
	var uLocal_11861 = 0;
	var uLocal_11862 = 0;
	var uLocal_11863 = 0;
	var uLocal_11864 = 0;
	var uLocal_11865 = 0;
	var uLocal_11866 = 0;
	var uLocal_11867 = 0;
	var uLocal_11868 = 0;
	var uLocal_11869 = 0;
	var uLocal_11870 = 0;
	var uLocal_11871 = 0;
	var uLocal_11872 = 0;
	var uLocal_11873 = 0;
	var uLocal_11874 = 0;
	var uLocal_11875 = 0;
	var uLocal_11876 = 0;
	var uLocal_11877 = 0;
	var uLocal_11878 = 0;
	var uLocal_11879 = 0;
	var uLocal_11880 = 0;
	var uLocal_11881 = 0;
	var uLocal_11882 = 0;
	var uLocal_11883 = 0;
	var uLocal_11884 = 0;
	var uLocal_11885 = 0;
	var uLocal_11886 = 0;
	var uLocal_11887 = 0;
	var uLocal_11888 = 0;
	var uLocal_11889 = 0;
	var uLocal_11890 = 0;
	var uLocal_11891 = 0;
	var uLocal_11892 = 0;
	var uLocal_11893 = 0;
	var uLocal_11894 = 0;
	var uLocal_11895 = 0;
	var uLocal_11896 = 0;
	var uLocal_11897 = 0;
	var uLocal_11898 = 0;
	var uLocal_11899 = 0;
	var uLocal_11900 = 0;
	var uLocal_11901 = 0;
	var uLocal_11902 = 0;
	var uLocal_11903 = 0;
	var uLocal_11904 = 0;
	var uLocal_11905 = 0;
	var uLocal_11906 = 0;
	var uLocal_11907 = 0;
	var uLocal_11908 = 0;
	var uLocal_11909 = 0;
	var uLocal_11910 = 0;
	var uLocal_11911 = 0;
	var uLocal_11912 = 0;
	var uLocal_11913 = 0;
	var uLocal_11914 = 0;
	var uLocal_11915 = 0;
	var uLocal_11916 = 0;
	var uLocal_11917 = 0;
	var uLocal_11918 = 0;
	var uLocal_11919 = 0;
	var uLocal_11920 = 0;
	var uLocal_11921 = 0;
	var uLocal_11922 = 0;
	var uLocal_11923 = 0;
	var uLocal_11924 = 0;
	var uLocal_11925 = 0;
	var uLocal_11926 = 0;
	var uLocal_11927 = 0;
	var uLocal_11928 = 0;
	var uLocal_11929 = 0;
	var uLocal_11930 = 0;
	var uLocal_11931 = 0;
	var uLocal_11932 = 0;
	var uLocal_11933 = 0;
	var uLocal_11934 = 0;
	var uLocal_11935 = 0;
	var uLocal_11936 = 0;
	var uLocal_11937 = 0;
	var uLocal_11938 = 0;
	var uLocal_11939 = 0;
	var uLocal_11940 = 0;
	var uLocal_11941 = 0;
	var uLocal_11942 = 0;
	var uLocal_11943 = 0;
	var uLocal_11944 = 0;
	var uLocal_11945 = 0;
	var uLocal_11946 = 0;
	var uLocal_11947 = 0;
	var uLocal_11948 = 0;
	var uLocal_11949 = 15;
	var uLocal_11950 = 0;
	var uLocal_11951 = 0;
	var uLocal_11952 = 0;
	var uLocal_11953 = 0;
	var uLocal_11954 = 0;
	var uLocal_11955 = 0;
	var uLocal_11956 = 0;
	var uLocal_11957 = 0;
	var uLocal_11958 = 0;
	var uLocal_11959 = 0;
	var uLocal_11960 = 0;
	var uLocal_11961 = 0;
	var uLocal_11962 = 0;
	var uLocal_11963 = 0;
	var uLocal_11964 = 0;
	var uLocal_11965 = 0;
	var uLocal_11966 = 0;
	var uLocal_11967 = 0;
	var uLocal_11968 = 0;
	var uLocal_11969 = 0;
	var uLocal_11970 = 0;
	var uLocal_11971 = 0;
	var uLocal_11972 = 0;
	var uLocal_11973 = 0;
	var uLocal_11974 = 0;
	var uLocal_11975 = 0;
	var uLocal_11976 = 0;
	var uLocal_11977 = 0;
	var uLocal_11978 = 0;
	var uLocal_11979 = 0;
	var uLocal_11980 = 0;
	var uLocal_11981 = 0;
	var uLocal_11982 = 0;
	var uLocal_11983 = 0;
	var uLocal_11984 = 0;
	var uLocal_11985 = 0;
	var uLocal_11986 = 0;
	var uLocal_11987 = 0;
	var uLocal_11988 = 0;
	var uLocal_11989 = 0;
	var uLocal_11990 = 0;
	var uLocal_11991 = 0;
	var uLocal_11992 = 0;
	var uLocal_11993 = 0;
	var uLocal_11994 = 0;
	var uLocal_11995 = 0;
	var uLocal_11996 = 0;
	var uLocal_11997 = 0;
	var uLocal_11998 = 0;
	var uLocal_11999 = 0;
	var uLocal_12000 = 0;
	var uLocal_12001 = 0;
	var uLocal_12002 = 0;
	var uLocal_12003 = 0;
	var uLocal_12004 = 0;
	var uLocal_12005 = 0;
	var uLocal_12006 = 0;
	var uLocal_12007 = 0;
	var uLocal_12008 = 0;
	var uLocal_12009 = 0;
	var uLocal_12010 = 0;
	var uLocal_12011 = 0;
	var uLocal_12012 = 0;
	var uLocal_12013 = 0;
	var uLocal_12014 = 0;
	var uLocal_12015 = 0;
	var uLocal_12016 = 0;
	var uLocal_12017 = 0;
	var uLocal_12018 = 0;
	var uLocal_12019 = 0;
	var uLocal_12020 = 0;
	var uLocal_12021 = 0;
	var uLocal_12022 = 0;
	var uLocal_12023 = 0;
	var uLocal_12024 = 0;
	var uLocal_12025 = 0;
	var uLocal_12026 = 0;
	var uLocal_12027 = 0;
	var uLocal_12028 = 0;
	var uLocal_12029 = 0;
	var uLocal_12030 = 0;
	var uLocal_12031 = 0;
	var uLocal_12032 = 0;
	var uLocal_12033 = 0;
	var uLocal_12034 = 0;
	var uLocal_12035 = 0;
	var uLocal_12036 = 0;
	var uLocal_12037 = 0;
	var uLocal_12038 = 0;
	var uLocal_12039 = 0;
	var uLocal_12040 = 0;
	var uLocal_12041 = 0;
	var uLocal_12042 = 0;
	var uLocal_12043 = 0;
	var uLocal_12044 = 0;
	var uLocal_12045 = 0;
	var uLocal_12046 = 0;
	var uLocal_12047 = 0;
	var uLocal_12048 = 0;
	var uLocal_12049 = 0;
	var uLocal_12050 = 0;
	var uLocal_12051 = 0;
	var uLocal_12052 = 0;
	var uLocal_12053 = 0;
	var uLocal_12054 = 0;
	var uLocal_12055 = 0;
	var uLocal_12056 = 0;
	var uLocal_12057 = 0;
	var uLocal_12058 = 0;
	var uLocal_12059 = 0;
	var uLocal_12060 = 0;
	var uLocal_12061 = 0;
	var uLocal_12062 = 0;
	var uLocal_12063 = 0;
	var uLocal_12064 = 0;
	var uLocal_12065 = 0;
	var uLocal_12066 = 0;
	var uLocal_12067 = 0;
	var uLocal_12068 = 0;
	var uLocal_12069 = 0;
	var uLocal_12070 = 0;
	var uLocal_12071 = 0;
	var uLocal_12072 = 0;
	var uLocal_12073 = 0;
	var uLocal_12074 = 0;
	var uLocal_12075 = 0;
	var uLocal_12076 = 0;
	var uLocal_12077 = 0;
	var uLocal_12078 = 0;
	var uLocal_12079 = 0;
	var uLocal_12080 = 0;
	var uLocal_12081 = 0;
	var uLocal_12082 = 0;
	var uLocal_12083 = 0;
	var uLocal_12084 = 0;
	var uLocal_12085 = 0;
	var uLocal_12086 = 0;
	var uLocal_12087 = 0;
	var uLocal_12088 = 0;
	var uLocal_12089 = 0;
	var uLocal_12090 = 0;
	var uLocal_12091 = 0;
	var uLocal_12092 = 0;
	var uLocal_12093 = 0;
	var uLocal_12094 = 0;
	var uLocal_12095 = 0;
	var uLocal_12096 = 0;
	var uLocal_12097 = 0;
	var uLocal_12098 = 0;
	var uLocal_12099 = 0;
	var uLocal_12100 = 0;
	var uLocal_12101 = 0;
	var uLocal_12102 = 0;
	var uLocal_12103 = 0;
	var uLocal_12104 = 0;
	var uLocal_12105 = 0;
	var uLocal_12106 = 0;
	var uLocal_12107 = 0;
	var uLocal_12108 = 0;
	var uLocal_12109 = 0;
	var uLocal_12110 = 0;
	var uLocal_12111 = 0;
	var uLocal_12112 = 0;
	var uLocal_12113 = 0;
	var uLocal_12114 = 0;
	var uLocal_12115 = 0;
	var uLocal_12116 = 0;
	var uLocal_12117 = 0;
	var uLocal_12118 = 0;
	var uLocal_12119 = 0;
	var uLocal_12120 = 0;
	var uLocal_12121 = 0;
	var uLocal_12122 = 0;
	var uLocal_12123 = 0;
	var uLocal_12124 = 0;
	var uLocal_12125 = 0;
	var uLocal_12126 = 0;
	var uLocal_12127 = 0;
	var uLocal_12128 = 0;
	var uLocal_12129 = 0;
	var uLocal_12130 = 0;
	var uLocal_12131 = 0;
	var uLocal_12132 = 0;
	var uLocal_12133 = 0;
	var uLocal_12134 = 0;
	var uLocal_12135 = 0;
	var uLocal_12136 = 0;
	var uLocal_12137 = 0;
	var uLocal_12138 = 0;
	var uLocal_12139 = 0;
	var uLocal_12140 = 0;
	var uLocal_12141 = 0;
	var uLocal_12142 = 0;
	var uLocal_12143 = 0;
	var uLocal_12144 = 0;
	var uLocal_12145 = 0;
	var uLocal_12146 = 0;
	var uLocal_12147 = 0;
	var uLocal_12148 = 0;
	var uLocal_12149 = 0;
	var uLocal_12150 = 0;
	var uLocal_12151 = 0;
	var uLocal_12152 = 0;
	var uLocal_12153 = 0;
	var uLocal_12154 = 0;
	var uLocal_12155 = 0;
	var uLocal_12156 = 0;
	var uLocal_12157 = 0;
	var uLocal_12158 = 0;
	var uLocal_12159 = 0;
	var uLocal_12160 = 0;
	var uLocal_12161 = 0;
	var uLocal_12162 = 0;
	var uLocal_12163 = 0;
	var uLocal_12164 = 0;
	var uLocal_12165 = 0;
	var uLocal_12166 = 0;
	var uLocal_12167 = 0;
	var uLocal_12168 = 0;
	var uLocal_12169 = 0;
	var uLocal_12170 = 0;
	var uLocal_12171 = 0;
	var uLocal_12172 = 0;
	var uLocal_12173 = 0;
	var uLocal_12174 = 0;
	var uLocal_12175 = 0;
	var uLocal_12176 = 0;
	var uLocal_12177 = 0;
	var uLocal_12178 = 0;
	var uLocal_12179 = 0;
	var uLocal_12180 = 0;
	var uLocal_12181 = 0;
	var uLocal_12182 = 0;
	var uLocal_12183 = 0;
	var uLocal_12184 = 0;
	var uLocal_12185 = 0;
	var uLocal_12186 = 0;
	var uLocal_12187 = 0;
	var uLocal_12188 = 0;
	var uLocal_12189 = 0;
	var uLocal_12190 = 10;
	var uLocal_12191 = 0;
	var uLocal_12192 = 0;
	var uLocal_12193 = 0;
	var uLocal_12194 = 0;
	var uLocal_12195 = 0;
	var uLocal_12196 = 0;
	var uLocal_12197 = 0;
	var uLocal_12198 = 0;
	var uLocal_12199 = 0;
	var uLocal_12200 = 0;
	var uLocal_12201 = 0;
	var uLocal_12202 = 0;
	var uLocal_12203 = 0;
	var uLocal_12204 = 0;
	var uLocal_12205 = 0;
	var uLocal_12206 = 0;
	var uLocal_12207 = 0;
	var uLocal_12208 = 0;
	var uLocal_12209 = 0;
	var uLocal_12210 = 0;
	var uLocal_12211 = 0;
	var uLocal_12212 = 0;
	var uLocal_12213 = 0;
	var uLocal_12214 = 0;
	var uLocal_12215 = 0;
	var uLocal_12216 = 0;
	var uLocal_12217 = 0;
	var uLocal_12218 = 0;
	var uLocal_12219 = 0;
	var uLocal_12220 = -1;
	var uLocal_12221 = 0;
	var uLocal_12222 = 0;
	var uLocal_12223 = 0;
	var uLocal_12224 = 0;
	var uLocal_12225 = 0;
	var uLocal_12226 = 0;
	var uLocal_12227 = 0;
	var uLocal_12228 = 0;
	var uLocal_12229 = 0;
	var uLocal_12230 = 0;
	var uLocal_12231 = 0;
	var uLocal_12232 = 65;
	var uLocal_12233 = 0;
	var uLocal_12234 = 0;
	var uLocal_12235 = 0;
	var uLocal_12236 = 0;
	var uLocal_12237 = 0;
	var uLocal_12238 = 0;
	var uLocal_12239 = 0;
	var uLocal_12240 = 0;
	var uLocal_12241 = 0;
	var uLocal_12242 = 0;
	var uLocal_12243 = -1569615261;
	var uLocal_12244 = 0;
	var uLocal_12245 = 0;
	var uLocal_12246 = 0;
	var uLocal_12247 = 0;
	var uLocal_12248 = 0;
	var uLocal_12249 = 0;
	var uLocal_12250 = 0;
	var uLocal_12251 = 0;
	var uLocal_12252 = 0;
	var uLocal_12253 = 0;
	var uLocal_12254 = 0;
	var uLocal_12255 = 0;
	var uLocal_12256 = -1569615261;
	var uLocal_12257 = 0;
	var uLocal_12258 = 0;
	var uLocal_12259 = 0;
	var uLocal_12260 = 0;
	var uLocal_12261 = 0;
	var uLocal_12262 = 0;
	var uLocal_12263 = 0;
	var uLocal_12264 = 0;
	var uLocal_12265 = 0;
	var uLocal_12266 = 0;
	var uLocal_12267 = 0;
	var uLocal_12268 = 0;
	var uLocal_12269 = -1569615261;
	var uLocal_12270 = 0;
	var uLocal_12271 = 0;
	var uLocal_12272 = 0;
	var uLocal_12273 = 0;
	var uLocal_12274 = 0;
	var uLocal_12275 = 0;
	var uLocal_12276 = 0;
	var uLocal_12277 = 0;
	var uLocal_12278 = 0;
	var uLocal_12279 = 0;
	var uLocal_12280 = 0;
	var uLocal_12281 = 0;
	var uLocal_12282 = -1569615261;
	var uLocal_12283 = 0;
	var uLocal_12284 = 0;
	var uLocal_12285 = 0;
	var uLocal_12286 = 0;
	var uLocal_12287 = 0;
	var uLocal_12288 = 0;
	var uLocal_12289 = 0;
	var uLocal_12290 = 0;
	var uLocal_12291 = 0;
	var uLocal_12292 = 0;
	var uLocal_12293 = 0;
	var uLocal_12294 = 0;
	var uLocal_12295 = -1569615261;
	var uLocal_12296 = 0;
	var uLocal_12297 = 0;
	var uLocal_12298 = 0;
	var uLocal_12299 = 0;
	var uLocal_12300 = 0;
	var uLocal_12301 = 0;
	var uLocal_12302 = 0;
	var uLocal_12303 = 0;
	var uLocal_12304 = 0;
	var uLocal_12305 = 0;
	var uLocal_12306 = 0;
	var uLocal_12307 = 0;
	var uLocal_12308 = -1569615261;
	var uLocal_12309 = 0;
	var uLocal_12310 = 0;
	var uLocal_12311 = 0;
	var uLocal_12312 = 0;
	var uLocal_12313 = 0;
	var uLocal_12314 = 0;
	var uLocal_12315 = 0;
	var uLocal_12316 = 0;
	var uLocal_12317 = 0;
	var uLocal_12318 = 0;
	var uLocal_12319 = 0;
	var uLocal_12320 = 0;
	var uLocal_12321 = -1569615261;
	var uLocal_12322 = 0;
	var uLocal_12323 = 0;
	var uLocal_12324 = 0;
	var uLocal_12325 = 0;
	var uLocal_12326 = 0;
	var uLocal_12327 = 0;
	var uLocal_12328 = 0;
	var uLocal_12329 = 0;
	var uLocal_12330 = 0;
	var uLocal_12331 = 0;
	var uLocal_12332 = 0;
	var uLocal_12333 = 0;
	var uLocal_12334 = -1569615261;
	var uLocal_12335 = 0;
	var uLocal_12336 = 0;
	var uLocal_12337 = 0;
	var uLocal_12338 = 0;
	var uLocal_12339 = 0;
	var uLocal_12340 = 0;
	var uLocal_12341 = 0;
	var uLocal_12342 = 0;
	var uLocal_12343 = 0;
	var uLocal_12344 = 0;
	var uLocal_12345 = 0;
	var uLocal_12346 = 0;
	var uLocal_12347 = -1569615261;
	var uLocal_12348 = 0;
	var uLocal_12349 = 0;
	var uLocal_12350 = 0;
	var uLocal_12351 = 0;
	var uLocal_12352 = 0;
	var uLocal_12353 = 0;
	var uLocal_12354 = 0;
	var uLocal_12355 = 0;
	var uLocal_12356 = 0;
	var uLocal_12357 = 0;
	var uLocal_12358 = 0;
	var uLocal_12359 = 0;
	var uLocal_12360 = -1569615261;
	var uLocal_12361 = 0;
	var uLocal_12362 = 0;
	var uLocal_12363 = 0;
	var uLocal_12364 = 0;
	var uLocal_12365 = 0;
	var uLocal_12366 = 0;
	var uLocal_12367 = 0;
	var uLocal_12368 = 0;
	var uLocal_12369 = 0;
	var uLocal_12370 = 0;
	var uLocal_12371 = 0;
	var uLocal_12372 = 0;
	var uLocal_12373 = -1569615261;
	var uLocal_12374 = 0;
	var uLocal_12375 = 0;
	var uLocal_12376 = 0;
	var uLocal_12377 = 0;
	var uLocal_12378 = 0;
	var uLocal_12379 = 0;
	var uLocal_12380 = 0;
	var uLocal_12381 = 0;
	var uLocal_12382 = 0;
	var uLocal_12383 = 0;
	var uLocal_12384 = 0;
	var uLocal_12385 = 0;
	var uLocal_12386 = -1569615261;
	var uLocal_12387 = 0;
	var uLocal_12388 = 0;
	var uLocal_12389 = 0;
	var uLocal_12390 = 0;
	var uLocal_12391 = 0;
	var uLocal_12392 = 0;
	var uLocal_12393 = 0;
	var uLocal_12394 = 0;
	var uLocal_12395 = 0;
	var uLocal_12396 = 0;
	var uLocal_12397 = 0;
	var uLocal_12398 = 0;
	var uLocal_12399 = -1569615261;
	var uLocal_12400 = 0;
	var uLocal_12401 = 0;
	var uLocal_12402 = 0;
	var uLocal_12403 = 0;
	var uLocal_12404 = 0;
	var uLocal_12405 = 0;
	var uLocal_12406 = 0;
	var uLocal_12407 = 0;
	var uLocal_12408 = 0;
	var uLocal_12409 = 0;
	var uLocal_12410 = 0;
	var uLocal_12411 = 0;
	var uLocal_12412 = -1569615261;
	var uLocal_12413 = 0;
	var uLocal_12414 = 0;
	var uLocal_12415 = 0;
	var uLocal_12416 = 0;
	var uLocal_12417 = 0;
	var uLocal_12418 = 0;
	var uLocal_12419 = 0;
	var uLocal_12420 = 0;
	var uLocal_12421 = 0;
	var uLocal_12422 = 0;
	var uLocal_12423 = 0;
	var uLocal_12424 = 0;
	var uLocal_12425 = -1569615261;
	var uLocal_12426 = 0;
	var uLocal_12427 = 0;
	var uLocal_12428 = 0;
	var uLocal_12429 = 0;
	var uLocal_12430 = 0;
	var uLocal_12431 = 0;
	var uLocal_12432 = 0;
	var uLocal_12433 = 0;
	var uLocal_12434 = 0;
	var uLocal_12435 = 0;
	var uLocal_12436 = 0;
	var uLocal_12437 = 0;
	var uLocal_12438 = -1569615261;
	var uLocal_12439 = 0;
	var uLocal_12440 = 0;
	var uLocal_12441 = 0;
	var uLocal_12442 = 0;
	var uLocal_12443 = 0;
	var uLocal_12444 = 0;
	var uLocal_12445 = 0;
	var uLocal_12446 = 0;
	var uLocal_12447 = 0;
	var uLocal_12448 = 0;
	var uLocal_12449 = 0;
	var uLocal_12450 = 0;
	var uLocal_12451 = -1569615261;
	var uLocal_12452 = 0;
	var uLocal_12453 = 0;
	var uLocal_12454 = 0;
	var uLocal_12455 = 0;
	var uLocal_12456 = 0;
	var uLocal_12457 = 0;
	var uLocal_12458 = 0;
	var uLocal_12459 = 0;
	var uLocal_12460 = 0;
	var uLocal_12461 = 0;
	var uLocal_12462 = 0;
	var uLocal_12463 = 0;
	var uLocal_12464 = -1569615261;
	var uLocal_12465 = 0;
	var uLocal_12466 = 0;
	var uLocal_12467 = 0;
	var uLocal_12468 = 0;
	var uLocal_12469 = 0;
	var uLocal_12470 = 0;
	var uLocal_12471 = 0;
	var uLocal_12472 = 0;
	var uLocal_12473 = 0;
	var uLocal_12474 = 0;
	var uLocal_12475 = 0;
	var uLocal_12476 = 0;
	var uLocal_12477 = -1569615261;
	var uLocal_12478 = 0;
	var uLocal_12479 = 0;
	var uLocal_12480 = 0;
	var uLocal_12481 = 0;
	var uLocal_12482 = 0;
	var uLocal_12483 = 0;
	var uLocal_12484 = 0;
	var uLocal_12485 = 0;
	var uLocal_12486 = 0;
	var uLocal_12487 = 0;
	var uLocal_12488 = 0;
	var uLocal_12489 = 0;
	var uLocal_12490 = -1569615261;
	var uLocal_12491 = 0;
	var uLocal_12492 = 0;
	var uLocal_12493 = 0;
	var uLocal_12494 = 0;
	var uLocal_12495 = 0;
	var uLocal_12496 = 0;
	var uLocal_12497 = 0;
	var uLocal_12498 = 0;
	var uLocal_12499 = 0;
	var uLocal_12500 = 0;
	var uLocal_12501 = 0;
	var uLocal_12502 = 0;
	var uLocal_12503 = -1569615261;
	var uLocal_12504 = 0;
	var uLocal_12505 = 0;
	var uLocal_12506 = 0;
	var uLocal_12507 = 0;
	var uLocal_12508 = 0;
	var uLocal_12509 = 0;
	var uLocal_12510 = 0;
	var uLocal_12511 = 0;
	var uLocal_12512 = 0;
	var uLocal_12513 = 0;
	var uLocal_12514 = 0;
	var uLocal_12515 = 0;
	var uLocal_12516 = -1569615261;
	var uLocal_12517 = 0;
	var uLocal_12518 = 0;
	var uLocal_12519 = 0;
	var uLocal_12520 = 0;
	var uLocal_12521 = 0;
	var uLocal_12522 = 0;
	var uLocal_12523 = 0;
	var uLocal_12524 = 0;
	var uLocal_12525 = 0;
	var uLocal_12526 = 0;
	var uLocal_12527 = 0;
	var uLocal_12528 = 0;
	var uLocal_12529 = -1569615261;
	var uLocal_12530 = 0;
	var uLocal_12531 = 0;
	var uLocal_12532 = 0;
	var uLocal_12533 = 0;
	var uLocal_12534 = 0;
	var uLocal_12535 = 0;
	var uLocal_12536 = 0;
	var uLocal_12537 = 0;
	var uLocal_12538 = 0;
	var uLocal_12539 = 0;
	var uLocal_12540 = 0;
	var uLocal_12541 = 0;
	var uLocal_12542 = -1569615261;
	var uLocal_12543 = 0;
	var uLocal_12544 = 0;
	var uLocal_12545 = 0;
	var uLocal_12546 = 0;
	var uLocal_12547 = 0;
	var uLocal_12548 = 0;
	var uLocal_12549 = 0;
	var uLocal_12550 = 0;
	var uLocal_12551 = 0;
	var uLocal_12552 = 0;
	var uLocal_12553 = 0;
	var uLocal_12554 = 0;
	var uLocal_12555 = -1569615261;
	var uLocal_12556 = 0;
	var uLocal_12557 = 0;
	var uLocal_12558 = 0;
	var uLocal_12559 = 0;
	var uLocal_12560 = 0;
	var uLocal_12561 = 0;
	var uLocal_12562 = 0;
	var uLocal_12563 = 0;
	var uLocal_12564 = 0;
	var uLocal_12565 = 0;
	var uLocal_12566 = 0;
	var uLocal_12567 = 0;
	var uLocal_12568 = -1569615261;
	var uLocal_12569 = 0;
	var uLocal_12570 = 0;
	var uLocal_12571 = 0;
	var uLocal_12572 = 0;
	var uLocal_12573 = 0;
	var uLocal_12574 = 0;
	var uLocal_12575 = 0;
	var uLocal_12576 = 0;
	var uLocal_12577 = 0;
	var uLocal_12578 = 0;
	var uLocal_12579 = 0;
	var uLocal_12580 = 0;
	var uLocal_12581 = -1569615261;
	var uLocal_12582 = 0;
	var uLocal_12583 = 0;
	var uLocal_12584 = 0;
	var uLocal_12585 = 0;
	var uLocal_12586 = 0;
	var uLocal_12587 = 0;
	var uLocal_12588 = 0;
	var uLocal_12589 = 0;
	var uLocal_12590 = 0;
	var uLocal_12591 = 0;
	var uLocal_12592 = 0;
	var uLocal_12593 = 0;
	var uLocal_12594 = -1569615261;
	var uLocal_12595 = 0;
	var uLocal_12596 = 0;
	var uLocal_12597 = 0;
	var uLocal_12598 = 0;
	var uLocal_12599 = 0;
	var uLocal_12600 = 0;
	var uLocal_12601 = 0;
	var uLocal_12602 = 0;
	var uLocal_12603 = 0;
	var uLocal_12604 = 0;
	var uLocal_12605 = 0;
	var uLocal_12606 = 0;
	var uLocal_12607 = -1569615261;
	var uLocal_12608 = 0;
	var uLocal_12609 = 0;
	var uLocal_12610 = 0;
	var uLocal_12611 = 0;
	var uLocal_12612 = 0;
	var uLocal_12613 = 0;
	var uLocal_12614 = 0;
	var uLocal_12615 = 0;
	var uLocal_12616 = 0;
	var uLocal_12617 = 0;
	var uLocal_12618 = 0;
	var uLocal_12619 = 0;
	var uLocal_12620 = -1569615261;
	var uLocal_12621 = 0;
	var uLocal_12622 = 0;
	var uLocal_12623 = 0;
	var uLocal_12624 = 0;
	var uLocal_12625 = 0;
	var uLocal_12626 = 0;
	var uLocal_12627 = 0;
	var uLocal_12628 = 0;
	var uLocal_12629 = 0;
	var uLocal_12630 = 0;
	var uLocal_12631 = 0;
	var uLocal_12632 = 0;
	var uLocal_12633 = -1569615261;
	var uLocal_12634 = 0;
	var uLocal_12635 = 0;
	var uLocal_12636 = 0;
	var uLocal_12637 = 0;
	var uLocal_12638 = 0;
	var uLocal_12639 = 0;
	var uLocal_12640 = 0;
	var uLocal_12641 = 0;
	var uLocal_12642 = 0;
	var uLocal_12643 = 0;
	var uLocal_12644 = 0;
	var uLocal_12645 = 0;
	var uLocal_12646 = -1569615261;
	var uLocal_12647 = 0;
	var uLocal_12648 = 0;
	var uLocal_12649 = 0;
	var uLocal_12650 = 0;
	var uLocal_12651 = 0;
	var uLocal_12652 = 0;
	var uLocal_12653 = 0;
	var uLocal_12654 = 0;
	var uLocal_12655 = 0;
	var uLocal_12656 = 0;
	var uLocal_12657 = 0;
	var uLocal_12658 = 0;
	var uLocal_12659 = -1569615261;
	var uLocal_12660 = 0;
	var uLocal_12661 = 0;
	var uLocal_12662 = 0;
	var uLocal_12663 = 0;
	var uLocal_12664 = 0;
	var uLocal_12665 = 0;
	var uLocal_12666 = 0;
	var uLocal_12667 = 0;
	var uLocal_12668 = 0;
	var uLocal_12669 = 0;
	var uLocal_12670 = 0;
	var uLocal_12671 = 0;
	var uLocal_12672 = -1569615261;
	var uLocal_12673 = 0;
	var uLocal_12674 = 0;
	var uLocal_12675 = 0;
	var uLocal_12676 = 0;
	var uLocal_12677 = 0;
	var uLocal_12678 = 0;
	var uLocal_12679 = 0;
	var uLocal_12680 = 0;
	var uLocal_12681 = 0;
	var uLocal_12682 = 0;
	var uLocal_12683 = 0;
	var uLocal_12684 = 0;
	var uLocal_12685 = -1569615261;
	var uLocal_12686 = 0;
	var uLocal_12687 = 0;
	var uLocal_12688 = 0;
	var uLocal_12689 = 0;
	var uLocal_12690 = 0;
	var uLocal_12691 = 0;
	var uLocal_12692 = 0;
	var uLocal_12693 = 0;
	var uLocal_12694 = 0;
	var uLocal_12695 = 0;
	var uLocal_12696 = 0;
	var uLocal_12697 = 0;
	var uLocal_12698 = -1569615261;
	var uLocal_12699 = 0;
	var uLocal_12700 = 0;
	var uLocal_12701 = 0;
	var uLocal_12702 = 0;
	var uLocal_12703 = 0;
	var uLocal_12704 = 0;
	var uLocal_12705 = 0;
	var uLocal_12706 = 0;
	var uLocal_12707 = 0;
	var uLocal_12708 = 0;
	var uLocal_12709 = 0;
	var uLocal_12710 = 0;
	var uLocal_12711 = -1569615261;
	var uLocal_12712 = 0;
	var uLocal_12713 = 0;
	var uLocal_12714 = 0;
	var uLocal_12715 = 0;
	var uLocal_12716 = 0;
	var uLocal_12717 = 0;
	var uLocal_12718 = 0;
	var uLocal_12719 = 0;
	var uLocal_12720 = 0;
	var uLocal_12721 = 0;
	var uLocal_12722 = 0;
	var uLocal_12723 = 0;
	var uLocal_12724 = -1569615261;
	var uLocal_12725 = 0;
	var uLocal_12726 = 0;
	var uLocal_12727 = 0;
	var uLocal_12728 = 0;
	var uLocal_12729 = 0;
	var uLocal_12730 = 0;
	var uLocal_12731 = 0;
	var uLocal_12732 = 0;
	var uLocal_12733 = 0;
	var uLocal_12734 = 0;
	var uLocal_12735 = 0;
	var uLocal_12736 = 0;
	var uLocal_12737 = -1569615261;
	var uLocal_12738 = 0;
	var uLocal_12739 = 0;
	var uLocal_12740 = 0;
	var uLocal_12741 = 0;
	var uLocal_12742 = 0;
	var uLocal_12743 = 0;
	var uLocal_12744 = 0;
	var uLocal_12745 = 0;
	var uLocal_12746 = 0;
	var uLocal_12747 = 0;
	var uLocal_12748 = 0;
	var uLocal_12749 = 0;
	var uLocal_12750 = -1569615261;
	var uLocal_12751 = 0;
	var uLocal_12752 = 0;
	var uLocal_12753 = 0;
	var uLocal_12754 = 0;
	var uLocal_12755 = 0;
	var uLocal_12756 = 0;
	var uLocal_12757 = 0;
	var uLocal_12758 = 0;
	var uLocal_12759 = 0;
	var uLocal_12760 = 0;
	var uLocal_12761 = 0;
	var uLocal_12762 = 0;
	var uLocal_12763 = -1569615261;
	var uLocal_12764 = 0;
	var uLocal_12765 = 0;
	var uLocal_12766 = 0;
	var uLocal_12767 = 0;
	var uLocal_12768 = 0;
	var uLocal_12769 = 0;
	var uLocal_12770 = 0;
	var uLocal_12771 = 0;
	var uLocal_12772 = 0;
	var uLocal_12773 = 0;
	var uLocal_12774 = 0;
	var uLocal_12775 = 0;
	var uLocal_12776 = -1569615261;
	var uLocal_12777 = 0;
	var uLocal_12778 = 0;
	var uLocal_12779 = 0;
	var uLocal_12780 = 0;
	var uLocal_12781 = 0;
	var uLocal_12782 = 0;
	var uLocal_12783 = 0;
	var uLocal_12784 = 0;
	var uLocal_12785 = 0;
	var uLocal_12786 = 0;
	var uLocal_12787 = 0;
	var uLocal_12788 = 0;
	var uLocal_12789 = -1569615261;
	var uLocal_12790 = 0;
	var uLocal_12791 = 0;
	var uLocal_12792 = 0;
	var uLocal_12793 = 0;
	var uLocal_12794 = 0;
	var uLocal_12795 = 0;
	var uLocal_12796 = 0;
	var uLocal_12797 = 0;
	var uLocal_12798 = 0;
	var uLocal_12799 = 0;
	var uLocal_12800 = 0;
	var uLocal_12801 = 0;
	var uLocal_12802 = -1569615261;
	var uLocal_12803 = 0;
	var uLocal_12804 = 0;
	var uLocal_12805 = 0;
	var uLocal_12806 = 0;
	var uLocal_12807 = 0;
	var uLocal_12808 = 0;
	var uLocal_12809 = 0;
	var uLocal_12810 = 0;
	var uLocal_12811 = 0;
	var uLocal_12812 = 0;
	var uLocal_12813 = 0;
	var uLocal_12814 = 0;
	var uLocal_12815 = -1569615261;
	var uLocal_12816 = 0;
	var uLocal_12817 = 0;
	var uLocal_12818 = 0;
	var uLocal_12819 = 0;
	var uLocal_12820 = 0;
	var uLocal_12821 = 0;
	var uLocal_12822 = 0;
	var uLocal_12823 = 0;
	var uLocal_12824 = 0;
	var uLocal_12825 = 0;
	var uLocal_12826 = 0;
	var uLocal_12827 = 0;
	var uLocal_12828 = -1569615261;
	var uLocal_12829 = 0;
	var uLocal_12830 = 0;
	var uLocal_12831 = 0;
	var uLocal_12832 = 0;
	var uLocal_12833 = 0;
	var uLocal_12834 = 0;
	var uLocal_12835 = 0;
	var uLocal_12836 = 0;
	var uLocal_12837 = 0;
	var uLocal_12838 = 0;
	var uLocal_12839 = 0;
	var uLocal_12840 = 0;
	var uLocal_12841 = -1569615261;
	var uLocal_12842 = 0;
	var uLocal_12843 = 0;
	var uLocal_12844 = 0;
	var uLocal_12845 = 0;
	var uLocal_12846 = 0;
	var uLocal_12847 = 0;
	var uLocal_12848 = 0;
	var uLocal_12849 = 0;
	var uLocal_12850 = 0;
	var uLocal_12851 = 0;
	var uLocal_12852 = 0;
	var uLocal_12853 = 0;
	var uLocal_12854 = -1569615261;
	var uLocal_12855 = 0;
	var uLocal_12856 = 0;
	var uLocal_12857 = 0;
	var uLocal_12858 = 0;
	var uLocal_12859 = 0;
	var uLocal_12860 = 0;
	var uLocal_12861 = 0;
	var uLocal_12862 = 0;
	var uLocal_12863 = 0;
	var uLocal_12864 = 0;
	var uLocal_12865 = 0;
	var uLocal_12866 = 0;
	var uLocal_12867 = -1569615261;
	var uLocal_12868 = 0;
	var uLocal_12869 = 0;
	var uLocal_12870 = 0;
	var uLocal_12871 = 0;
	var uLocal_12872 = 0;
	var uLocal_12873 = 0;
	var uLocal_12874 = 0;
	var uLocal_12875 = 0;
	var uLocal_12876 = 0;
	var uLocal_12877 = 0;
	var uLocal_12878 = 0;
	var uLocal_12879 = 0;
	var uLocal_12880 = -1569615261;
	var uLocal_12881 = 0;
	var uLocal_12882 = 0;
	var uLocal_12883 = 0;
	var uLocal_12884 = 0;
	var uLocal_12885 = 0;
	var uLocal_12886 = 0;
	var uLocal_12887 = 0;
	var uLocal_12888 = 0;
	var uLocal_12889 = 0;
	var uLocal_12890 = 0;
	var uLocal_12891 = 0;
	var uLocal_12892 = 0;
	var uLocal_12893 = -1569615261;
	var uLocal_12894 = 0;
	var uLocal_12895 = 0;
	var uLocal_12896 = 0;
	var uLocal_12897 = 0;
	var uLocal_12898 = 0;
	var uLocal_12899 = 0;
	var uLocal_12900 = 0;
	var uLocal_12901 = 0;
	var uLocal_12902 = 0;
	var uLocal_12903 = 0;
	var uLocal_12904 = 0;
	var uLocal_12905 = 0;
	var uLocal_12906 = -1569615261;
	var uLocal_12907 = 0;
	var uLocal_12908 = 0;
	var uLocal_12909 = 0;
	var uLocal_12910 = 0;
	var uLocal_12911 = 0;
	var uLocal_12912 = 0;
	var uLocal_12913 = 0;
	var uLocal_12914 = 0;
	var uLocal_12915 = 0;
	var uLocal_12916 = 0;
	var uLocal_12917 = 0;
	var uLocal_12918 = 0;
	var uLocal_12919 = -1569615261;
	var uLocal_12920 = 0;
	var uLocal_12921 = 0;
	var uLocal_12922 = 0;
	var uLocal_12923 = 0;
	var uLocal_12924 = 0;
	var uLocal_12925 = 0;
	var uLocal_12926 = 0;
	var uLocal_12927 = 0;
	var uLocal_12928 = 0;
	var uLocal_12929 = 0;
	var uLocal_12930 = 0;
	var uLocal_12931 = 0;
	var uLocal_12932 = -1569615261;
	var uLocal_12933 = 0;
	var uLocal_12934 = 0;
	var uLocal_12935 = 0;
	var uLocal_12936 = 0;
	var uLocal_12937 = 0;
	var uLocal_12938 = 0;
	var uLocal_12939 = 0;
	var uLocal_12940 = 0;
	var uLocal_12941 = 0;
	var uLocal_12942 = 0;
	var uLocal_12943 = 0;
	var uLocal_12944 = 0;
	var uLocal_12945 = -1569615261;
	var uLocal_12946 = 0;
	var uLocal_12947 = 0;
	var uLocal_12948 = 0;
	var uLocal_12949 = 0;
	var uLocal_12950 = 0;
	var uLocal_12951 = 0;
	var uLocal_12952 = 0;
	var uLocal_12953 = 0;
	var uLocal_12954 = 0;
	var uLocal_12955 = 0;
	var uLocal_12956 = 0;
	var uLocal_12957 = 0;
	var uLocal_12958 = -1569615261;
	var uLocal_12959 = 0;
	var uLocal_12960 = 0;
	var uLocal_12961 = 0;
	var uLocal_12962 = 0;
	var uLocal_12963 = 0;
	var uLocal_12964 = 0;
	var uLocal_12965 = 0;
	var uLocal_12966 = 0;
	var uLocal_12967 = 0;
	var uLocal_12968 = 0;
	var uLocal_12969 = 0;
	var uLocal_12970 = 0;
	var uLocal_12971 = -1569615261;
	var uLocal_12972 = 0;
	var uLocal_12973 = 0;
	var uLocal_12974 = 0;
	var uLocal_12975 = 0;
	var uLocal_12976 = 0;
	var uLocal_12977 = 0;
	var uLocal_12978 = 0;
	var uLocal_12979 = 0;
	var uLocal_12980 = 0;
	var uLocal_12981 = 0;
	var uLocal_12982 = 0;
	var uLocal_12983 = 0;
	var uLocal_12984 = -1569615261;
	var uLocal_12985 = 0;
	var uLocal_12986 = 0;
	var uLocal_12987 = 0;
	var uLocal_12988 = 0;
	var uLocal_12989 = 0;
	var uLocal_12990 = 0;
	var uLocal_12991 = 0;
	var uLocal_12992 = 0;
	var uLocal_12993 = 0;
	var uLocal_12994 = 0;
	var uLocal_12995 = 0;
	var uLocal_12996 = 0;
	var uLocal_12997 = -1569615261;
	var uLocal_12998 = 0;
	var uLocal_12999 = 0;
	var uLocal_13000 = 0;
	var uLocal_13001 = 0;
	var uLocal_13002 = 0;
	var uLocal_13003 = 0;
	var uLocal_13004 = 0;
	var uLocal_13005 = 0;
	var uLocal_13006 = 0;
	var uLocal_13007 = 0;
	var uLocal_13008 = 0;
	var uLocal_13009 = 0;
	var uLocal_13010 = -1569615261;
	var uLocal_13011 = 0;
	var uLocal_13012 = 0;
	var uLocal_13013 = 0;
	var uLocal_13014 = 0;
	var uLocal_13015 = 0;
	var uLocal_13016 = 0;
	var uLocal_13017 = 0;
	var uLocal_13018 = 0;
	var uLocal_13019 = 0;
	var uLocal_13020 = 0;
	var uLocal_13021 = 0;
	var uLocal_13022 = 0;
	var uLocal_13023 = -1569615261;
	var uLocal_13024 = 0;
	var uLocal_13025 = 0;
	var uLocal_13026 = 0;
	var uLocal_13027 = 0;
	var uLocal_13028 = 0;
	var uLocal_13029 = 0;
	var uLocal_13030 = 0;
	var uLocal_13031 = 0;
	var uLocal_13032 = 0;
	var uLocal_13033 = 0;
	var uLocal_13034 = 0;
	var uLocal_13035 = 0;
	var uLocal_13036 = -1569615261;
	var uLocal_13037 = 0;
	var uLocal_13038 = 0;
	var uLocal_13039 = 0;
	var uLocal_13040 = 0;
	var uLocal_13041 = 0;
	var uLocal_13042 = 0;
	var uLocal_13043 = 0;
	var uLocal_13044 = 0;
	var uLocal_13045 = 0;
	var uLocal_13046 = 0;
	var uLocal_13047 = 0;
	var uLocal_13048 = 0;
	var uLocal_13049 = -1569615261;
	var uLocal_13050 = 0;
	var uLocal_13051 = 0;
	var uLocal_13052 = 0;
	var uLocal_13053 = 0;
	var uLocal_13054 = 0;
	var uLocal_13055 = 0;
	var uLocal_13056 = 0;
	var uLocal_13057 = 0;
	var uLocal_13058 = 0;
	var uLocal_13059 = 0;
	var uLocal_13060 = 0;
	var uLocal_13061 = 0;
	var uLocal_13062 = -1569615261;
	var uLocal_13063 = 0;
	var uLocal_13064 = 0;
	var uLocal_13065 = 0;
	var uLocal_13066 = 0;
	var uLocal_13067 = 0;
	var uLocal_13068 = 0;
	var uLocal_13069 = 0;
	var uLocal_13070 = 0;
	var uLocal_13071 = 0;
	var uLocal_13072 = 0;
	var uLocal_13073 = 0;
	var uLocal_13074 = 0;
	var uLocal_13075 = -1569615261;
	var uLocal_13076 = 0;
	var uLocal_13077 = 0;
	var uLocal_13078 = 0;
	var uLocal_13079 = 0;
	var uLocal_13080 = 0;
	var uLocal_13081 = 0;
	var uLocal_13082 = 0;
	var uLocal_13083 = 0;
	var uLocal_13084 = 0;
	var uLocal_13085 = 0;
	var uLocal_13086 = 0;
	var uLocal_13087 = 0;
	var uLocal_13088 = 0;
	var uLocal_13089 = 0;
	var uLocal_13090 = 0;
	var uLocal_13091 = 0;
	var uLocal_13092 = 0;
	var uLocal_13093 = 1;
	var uLocal_13094 = 30;
	var uLocal_13095 = -1;
	var uLocal_13096 = 0;
	var uLocal_13097 = 1;
	var uLocal_13098 = 0;
	var uLocal_13099 = 0;
	var uLocal_13100 = 0;
	var uLocal_13101 = 0;
	var uLocal_13102 = 0;
	var uLocal_13103 = 0;
	var uLocal_13104 = 0;
	var uLocal_13105 = 0;
	var uLocal_13106 = 0;
	var uLocal_13107 = 1065353216;
	var uLocal_13108 = 0;
	var uLocal_13109 = 0;
	var uLocal_13110 = 1065353216;
	var uLocal_13111 = 1;
	var uLocal_13112 = 0;
	var uLocal_13113 = -1;
	var uLocal_13114 = 0;
	var uLocal_13115 = 1;
	var uLocal_13116 = 0;
	var uLocal_13117 = 0;
	var uLocal_13118 = 0;
	var uLocal_13119 = 0;
	var uLocal_13120 = 0;
	var uLocal_13121 = 0;
	var uLocal_13122 = 0;
	var uLocal_13123 = 0;
	var uLocal_13124 = 0;
	var uLocal_13125 = 1065353216;
	var uLocal_13126 = 0;
	var uLocal_13127 = 0;
	var uLocal_13128 = 1065353216;
	var uLocal_13129 = 1;
	var uLocal_13130 = 0;
	var uLocal_13131 = -1;
	var uLocal_13132 = 0;
	var uLocal_13133 = 1;
	var uLocal_13134 = 0;
	var uLocal_13135 = 0;
	var uLocal_13136 = 0;
	var uLocal_13137 = 0;
	var uLocal_13138 = 0;
	var uLocal_13139 = 0;
	var uLocal_13140 = 0;
	var uLocal_13141 = 0;
	var uLocal_13142 = 0;
	var uLocal_13143 = 1065353216;
	var uLocal_13144 = 0;
	var uLocal_13145 = 0;
	var uLocal_13146 = 1065353216;
	var uLocal_13147 = 1;
	var uLocal_13148 = 0;
	var uLocal_13149 = -1;
	var uLocal_13150 = 0;
	var uLocal_13151 = 1;
	var uLocal_13152 = 0;
	var uLocal_13153 = 0;
	var uLocal_13154 = 0;
	var uLocal_13155 = 0;
	var uLocal_13156 = 0;
	var uLocal_13157 = 0;
	var uLocal_13158 = 0;
	var uLocal_13159 = 0;
	var uLocal_13160 = 0;
	var uLocal_13161 = 1065353216;
	var uLocal_13162 = 0;
	var uLocal_13163 = 0;
	var uLocal_13164 = 1065353216;
	var uLocal_13165 = 1;
	var uLocal_13166 = 0;
	var uLocal_13167 = -1;
	var uLocal_13168 = 0;
	var uLocal_13169 = 1;
	var uLocal_13170 = 0;
	var uLocal_13171 = 0;
	var uLocal_13172 = 0;
	var uLocal_13173 = 0;
	var uLocal_13174 = 0;
	var uLocal_13175 = 0;
	var uLocal_13176 = 0;
	var uLocal_13177 = 0;
	var uLocal_13178 = 0;
	var uLocal_13179 = 1065353216;
	var uLocal_13180 = 0;
	var uLocal_13181 = 0;
	var uLocal_13182 = 1065353216;
	var uLocal_13183 = 1;
	var uLocal_13184 = 0;
	var uLocal_13185 = -1;
	var uLocal_13186 = 0;
	var uLocal_13187 = 1;
	var uLocal_13188 = 0;
	var uLocal_13189 = 0;
	var uLocal_13190 = 0;
	var uLocal_13191 = 0;
	var uLocal_13192 = 0;
	var uLocal_13193 = 0;
	var uLocal_13194 = 0;
	var uLocal_13195 = 0;
	var uLocal_13196 = 0;
	var uLocal_13197 = 1065353216;
	var uLocal_13198 = 0;
	var uLocal_13199 = 0;
	var uLocal_13200 = 1065353216;
	var uLocal_13201 = 1;
	var uLocal_13202 = 0;
	var uLocal_13203 = -1;
	var uLocal_13204 = 0;
	var uLocal_13205 = 1;
	var uLocal_13206 = 0;
	var uLocal_13207 = 0;
	var uLocal_13208 = 0;
	var uLocal_13209 = 0;
	var uLocal_13210 = 0;
	var uLocal_13211 = 0;
	var uLocal_13212 = 0;
	var uLocal_13213 = 0;
	var uLocal_13214 = 0;
	var uLocal_13215 = 1065353216;
	var uLocal_13216 = 0;
	var uLocal_13217 = 0;
	var uLocal_13218 = 1065353216;
	var uLocal_13219 = 1;
	var uLocal_13220 = 0;
	var uLocal_13221 = -1;
	var uLocal_13222 = 0;
	var uLocal_13223 = 1;
	var uLocal_13224 = 0;
	var uLocal_13225 = 0;
	var uLocal_13226 = 0;
	var uLocal_13227 = 0;
	var uLocal_13228 = 0;
	var uLocal_13229 = 0;
	var uLocal_13230 = 0;
	var uLocal_13231 = 0;
	var uLocal_13232 = 0;
	var uLocal_13233 = 1065353216;
	var uLocal_13234 = 0;
	var uLocal_13235 = 0;
	var uLocal_13236 = 1065353216;
	var uLocal_13237 = 1;
	var uLocal_13238 = 0;
	var uLocal_13239 = -1;
	var uLocal_13240 = 0;
	var uLocal_13241 = 1;
	var uLocal_13242 = 0;
	var uLocal_13243 = 0;
	var uLocal_13244 = 0;
	var uLocal_13245 = 0;
	var uLocal_13246 = 0;
	var uLocal_13247 = 0;
	var uLocal_13248 = 0;
	var uLocal_13249 = 0;
	var uLocal_13250 = 0;
	var uLocal_13251 = 1065353216;
	var uLocal_13252 = 0;
	var uLocal_13253 = 0;
	var uLocal_13254 = 1065353216;
	var uLocal_13255 = 1;
	var uLocal_13256 = 0;
	var uLocal_13257 = -1;
	var uLocal_13258 = 0;
	var uLocal_13259 = 1;
	var uLocal_13260 = 0;
	var uLocal_13261 = 0;
	var uLocal_13262 = 0;
	var uLocal_13263 = 0;
	var uLocal_13264 = 0;
	var uLocal_13265 = 0;
	var uLocal_13266 = 0;
	var uLocal_13267 = 0;
	var uLocal_13268 = 0;
	var uLocal_13269 = 1065353216;
	var uLocal_13270 = 0;
	var uLocal_13271 = 0;
	var uLocal_13272 = 1065353216;
	var uLocal_13273 = 1;
	var uLocal_13274 = 0;
	var uLocal_13275 = -1;
	var uLocal_13276 = 0;
	var uLocal_13277 = 1;
	var uLocal_13278 = 0;
	var uLocal_13279 = 0;
	var uLocal_13280 = 0;
	var uLocal_13281 = 0;
	var uLocal_13282 = 0;
	var uLocal_13283 = 0;
	var uLocal_13284 = 0;
	var uLocal_13285 = 0;
	var uLocal_13286 = 0;
	var uLocal_13287 = 1065353216;
	var uLocal_13288 = 0;
	var uLocal_13289 = 0;
	var uLocal_13290 = 1065353216;
	var uLocal_13291 = 1;
	var uLocal_13292 = 0;
	var uLocal_13293 = -1;
	var uLocal_13294 = 0;
	var uLocal_13295 = 1;
	var uLocal_13296 = 0;
	var uLocal_13297 = 0;
	var uLocal_13298 = 0;
	var uLocal_13299 = 0;
	var uLocal_13300 = 0;
	var uLocal_13301 = 0;
	var uLocal_13302 = 0;
	var uLocal_13303 = 0;
	var uLocal_13304 = 0;
	var uLocal_13305 = 1065353216;
	var uLocal_13306 = 0;
	var uLocal_13307 = 0;
	var uLocal_13308 = 1065353216;
	var uLocal_13309 = 1;
	var uLocal_13310 = 0;
	var uLocal_13311 = -1;
	var uLocal_13312 = 0;
	var uLocal_13313 = 1;
	var uLocal_13314 = 0;
	var uLocal_13315 = 0;
	var uLocal_13316 = 0;
	var uLocal_13317 = 0;
	var uLocal_13318 = 0;
	var uLocal_13319 = 0;
	var uLocal_13320 = 0;
	var uLocal_13321 = 0;
	var uLocal_13322 = 0;
	var uLocal_13323 = 1065353216;
	var uLocal_13324 = 0;
	var uLocal_13325 = 0;
	var uLocal_13326 = 1065353216;
	var uLocal_13327 = 1;
	var uLocal_13328 = 0;
	var uLocal_13329 = -1;
	var uLocal_13330 = 0;
	var uLocal_13331 = 1;
	var uLocal_13332 = 0;
	var uLocal_13333 = 0;
	var uLocal_13334 = 0;
	var uLocal_13335 = 0;
	var uLocal_13336 = 0;
	var uLocal_13337 = 0;
	var uLocal_13338 = 0;
	var uLocal_13339 = 0;
	var uLocal_13340 = 0;
	var uLocal_13341 = 1065353216;
	var uLocal_13342 = 0;
	var uLocal_13343 = 0;
	var uLocal_13344 = 1065353216;
	var uLocal_13345 = 1;
	var uLocal_13346 = 0;
	var uLocal_13347 = -1;
	var uLocal_13348 = 0;
	var uLocal_13349 = 1;
	var uLocal_13350 = 0;
	var uLocal_13351 = 0;
	var uLocal_13352 = 0;
	var uLocal_13353 = 0;
	var uLocal_13354 = 0;
	var uLocal_13355 = 0;
	var uLocal_13356 = 0;
	var uLocal_13357 = 0;
	var uLocal_13358 = 0;
	var uLocal_13359 = 1065353216;
	var uLocal_13360 = 0;
	var uLocal_13361 = 0;
	var uLocal_13362 = 1065353216;
	var uLocal_13363 = 1;
	var uLocal_13364 = 0;
	var uLocal_13365 = -1;
	var uLocal_13366 = 0;
	var uLocal_13367 = 1;
	var uLocal_13368 = 0;
	var uLocal_13369 = 0;
	var uLocal_13370 = 0;
	var uLocal_13371 = 0;
	var uLocal_13372 = 0;
	var uLocal_13373 = 0;
	var uLocal_13374 = 0;
	var uLocal_13375 = 0;
	var uLocal_13376 = 0;
	var uLocal_13377 = 1065353216;
	var uLocal_13378 = 0;
	var uLocal_13379 = 0;
	var uLocal_13380 = 1065353216;
	var uLocal_13381 = 1;
	var uLocal_13382 = 0;
	var uLocal_13383 = -1;
	var uLocal_13384 = 0;
	var uLocal_13385 = 1;
	var uLocal_13386 = 0;
	var uLocal_13387 = 0;
	var uLocal_13388 = 0;
	var uLocal_13389 = 0;
	var uLocal_13390 = 0;
	var uLocal_13391 = 0;
	var uLocal_13392 = 0;
	var uLocal_13393 = 0;
	var uLocal_13394 = 0;
	var uLocal_13395 = 1065353216;
	var uLocal_13396 = 0;
	var uLocal_13397 = 0;
	var uLocal_13398 = 1065353216;
	var uLocal_13399 = 1;
	var uLocal_13400 = 0;
	var uLocal_13401 = -1;
	var uLocal_13402 = 0;
	var uLocal_13403 = 1;
	var uLocal_13404 = 0;
	var uLocal_13405 = 0;
	var uLocal_13406 = 0;
	var uLocal_13407 = 0;
	var uLocal_13408 = 0;
	var uLocal_13409 = 0;
	var uLocal_13410 = 0;
	var uLocal_13411 = 0;
	var uLocal_13412 = 0;
	var uLocal_13413 = 1065353216;
	var uLocal_13414 = 0;
	var uLocal_13415 = 0;
	var uLocal_13416 = 1065353216;
	var uLocal_13417 = 1;
	var uLocal_13418 = 0;
	var uLocal_13419 = -1;
	var uLocal_13420 = 0;
	var uLocal_13421 = 1;
	var uLocal_13422 = 0;
	var uLocal_13423 = 0;
	var uLocal_13424 = 0;
	var uLocal_13425 = 0;
	var uLocal_13426 = 0;
	var uLocal_13427 = 0;
	var uLocal_13428 = 0;
	var uLocal_13429 = 0;
	var uLocal_13430 = 0;
	var uLocal_13431 = 1065353216;
	var uLocal_13432 = 0;
	var uLocal_13433 = 0;
	var uLocal_13434 = 1065353216;
	var uLocal_13435 = 1;
	var uLocal_13436 = 0;
	var uLocal_13437 = -1;
	var uLocal_13438 = 0;
	var uLocal_13439 = 1;
	var uLocal_13440 = 0;
	var uLocal_13441 = 0;
	var uLocal_13442 = 0;
	var uLocal_13443 = 0;
	var uLocal_13444 = 0;
	var uLocal_13445 = 0;
	var uLocal_13446 = 0;
	var uLocal_13447 = 0;
	var uLocal_13448 = 0;
	var uLocal_13449 = 1065353216;
	var uLocal_13450 = 0;
	var uLocal_13451 = 0;
	var uLocal_13452 = 1065353216;
	var uLocal_13453 = 1;
	var uLocal_13454 = 0;
	var uLocal_13455 = -1;
	var uLocal_13456 = 0;
	var uLocal_13457 = 1;
	var uLocal_13458 = 0;
	var uLocal_13459 = 0;
	var uLocal_13460 = 0;
	var uLocal_13461 = 0;
	var uLocal_13462 = 0;
	var uLocal_13463 = 0;
	var uLocal_13464 = 0;
	var uLocal_13465 = 0;
	var uLocal_13466 = 0;
	var uLocal_13467 = 1065353216;
	var uLocal_13468 = 0;
	var uLocal_13469 = 0;
	var uLocal_13470 = 1065353216;
	var uLocal_13471 = 1;
	var uLocal_13472 = 0;
	var uLocal_13473 = -1;
	var uLocal_13474 = 0;
	var uLocal_13475 = 1;
	var uLocal_13476 = 0;
	var uLocal_13477 = 0;
	var uLocal_13478 = 0;
	var uLocal_13479 = 0;
	var uLocal_13480 = 0;
	var uLocal_13481 = 0;
	var uLocal_13482 = 0;
	var uLocal_13483 = 0;
	var uLocal_13484 = 0;
	var uLocal_13485 = 1065353216;
	var uLocal_13486 = 0;
	var uLocal_13487 = 0;
	var uLocal_13488 = 1065353216;
	var uLocal_13489 = 1;
	var uLocal_13490 = 0;
	var uLocal_13491 = -1;
	var uLocal_13492 = 0;
	var uLocal_13493 = 1;
	var uLocal_13494 = 0;
	var uLocal_13495 = 0;
	var uLocal_13496 = 0;
	var uLocal_13497 = 0;
	var uLocal_13498 = 0;
	var uLocal_13499 = 0;
	var uLocal_13500 = 0;
	var uLocal_13501 = 0;
	var uLocal_13502 = 0;
	var uLocal_13503 = 1065353216;
	var uLocal_13504 = 0;
	var uLocal_13505 = 0;
	var uLocal_13506 = 1065353216;
	var uLocal_13507 = 1;
	var uLocal_13508 = 0;
	var uLocal_13509 = -1;
	var uLocal_13510 = 0;
	var uLocal_13511 = 1;
	var uLocal_13512 = 0;
	var uLocal_13513 = 0;
	var uLocal_13514 = 0;
	var uLocal_13515 = 0;
	var uLocal_13516 = 0;
	var uLocal_13517 = 0;
	var uLocal_13518 = 0;
	var uLocal_13519 = 0;
	var uLocal_13520 = 0;
	var uLocal_13521 = 1065353216;
	var uLocal_13522 = 0;
	var uLocal_13523 = 0;
	var uLocal_13524 = 1065353216;
	var uLocal_13525 = 1;
	var uLocal_13526 = 0;
	var uLocal_13527 = -1;
	var uLocal_13528 = 0;
	var uLocal_13529 = 1;
	var uLocal_13530 = 0;
	var uLocal_13531 = 0;
	var uLocal_13532 = 0;
	var uLocal_13533 = 0;
	var uLocal_13534 = 0;
	var uLocal_13535 = 0;
	var uLocal_13536 = 0;
	var uLocal_13537 = 0;
	var uLocal_13538 = 0;
	var uLocal_13539 = 1065353216;
	var uLocal_13540 = 0;
	var uLocal_13541 = 0;
	var uLocal_13542 = 1065353216;
	var uLocal_13543 = 1;
	var uLocal_13544 = 0;
	var uLocal_13545 = -1;
	var uLocal_13546 = 0;
	var uLocal_13547 = 1;
	var uLocal_13548 = 0;
	var uLocal_13549 = 0;
	var uLocal_13550 = 0;
	var uLocal_13551 = 0;
	var uLocal_13552 = 0;
	var uLocal_13553 = 0;
	var uLocal_13554 = 0;
	var uLocal_13555 = 0;
	var uLocal_13556 = 0;
	var uLocal_13557 = 1065353216;
	var uLocal_13558 = 0;
	var uLocal_13559 = 0;
	var uLocal_13560 = 1065353216;
	var uLocal_13561 = 1;
	var uLocal_13562 = 0;
	var uLocal_13563 = -1;
	var uLocal_13564 = 0;
	var uLocal_13565 = 1;
	var uLocal_13566 = 0;
	var uLocal_13567 = 0;
	var uLocal_13568 = 0;
	var uLocal_13569 = 0;
	var uLocal_13570 = 0;
	var uLocal_13571 = 0;
	var uLocal_13572 = 0;
	var uLocal_13573 = 0;
	var uLocal_13574 = 0;
	var uLocal_13575 = 1065353216;
	var uLocal_13576 = 0;
	var uLocal_13577 = 0;
	var uLocal_13578 = 1065353216;
	var uLocal_13579 = 1;
	var uLocal_13580 = 0;
	var uLocal_13581 = -1;
	var uLocal_13582 = 0;
	var uLocal_13583 = 1;
	var uLocal_13584 = 0;
	var uLocal_13585 = 0;
	var uLocal_13586 = 0;
	var uLocal_13587 = 0;
	var uLocal_13588 = 0;
	var uLocal_13589 = 0;
	var uLocal_13590 = 0;
	var uLocal_13591 = 0;
	var uLocal_13592 = 0;
	var uLocal_13593 = 1065353216;
	var uLocal_13594 = 0;
	var uLocal_13595 = 0;
	var uLocal_13596 = 1065353216;
	var uLocal_13597 = 1;
	var uLocal_13598 = 0;
	var uLocal_13599 = -1;
	var uLocal_13600 = 0;
	var uLocal_13601 = 1;
	var uLocal_13602 = 0;
	var uLocal_13603 = 0;
	var uLocal_13604 = 0;
	var uLocal_13605 = 0;
	var uLocal_13606 = 0;
	var uLocal_13607 = 0;
	var uLocal_13608 = 0;
	var uLocal_13609 = 0;
	var uLocal_13610 = 0;
	var uLocal_13611 = 1065353216;
	var uLocal_13612 = 0;
	var uLocal_13613 = 0;
	var uLocal_13614 = 1065353216;
	var uLocal_13615 = 1;
	var uLocal_13616 = 0;
	var uLocal_13617 = -1;
	var uLocal_13618 = 0;
	var uLocal_13619 = 1;
	var uLocal_13620 = 0;
	var uLocal_13621 = 0;
	var uLocal_13622 = 0;
	var uLocal_13623 = 0;
	var uLocal_13624 = 0;
	var uLocal_13625 = 0;
	var uLocal_13626 = 0;
	var uLocal_13627 = 0;
	var uLocal_13628 = 0;
	var uLocal_13629 = 1065353216;
	var uLocal_13630 = 0;
	var uLocal_13631 = 0;
	var uLocal_13632 = 1065353216;
	var uLocal_13633 = 1;
	var uLocal_13634 = 0;
	var uLocal_13635 = 8;
	var uLocal_13636 = 0;
	var uLocal_13637 = 0;
	var uLocal_13638 = 0;
	var uLocal_13639 = 0;
	var uLocal_13640 = 0;
	var uLocal_13641 = 0;
	var uLocal_13642 = 0;
	var uLocal_13643 = 0;
	var uLocal_13644 = 0;
	var uLocal_13645 = 0;
	var uLocal_13646 = 0;
	var uLocal_13647 = 0;
	var uLocal_13648 = 0;
	var uLocal_13649 = 0;
	var uLocal_13650 = 0;
	var uLocal_13651 = 0;
	var uLocal_13652 = 0;
	var uLocal_13653 = 0;
	var uLocal_13654 = 0;
	var uLocal_13655 = 0;
	var uLocal_13656 = 0;
	var uLocal_13657 = 0;
	var uLocal_13658 = 0;
	var uLocal_13659 = 0;
	var uLocal_13660 = 0;
	var uLocal_13661 = 0;
	var uLocal_13662 = 0;
	var uLocal_13663 = 0;
	var uLocal_13664 = 0;
	var uLocal_13665 = 0;
	var uLocal_13666 = 0;
	var uLocal_13667 = 0;
	var uLocal_13668 = 0;
	var uLocal_13669 = 0;
	var uLocal_13670 = 0;
	var uLocal_13671 = 0;
	var uLocal_13672 = 0;
	var uLocal_13673 = 0;
	var uLocal_13674 = 0;
	var uLocal_13675 = 0;
	var uLocal_13676 = 0;
	var uLocal_13677 = 0;
	var uLocal_13678 = 0;
	var uLocal_13679 = 0;
	var uLocal_13680 = 0;
	var uLocal_13681 = 0;
	var uLocal_13682 = 0;
	var uLocal_13683 = 0;
	var uLocal_13684 = 0;
	var uLocal_13685 = 0;
	var uLocal_13686 = 0;
	var uLocal_13687 = 0;
	var uLocal_13688 = 0;
	var uLocal_13689 = 0;
	var uLocal_13690 = 0;
	var uLocal_13691 = 0;
	var uLocal_13692 = 0;
	var uLocal_13693 = 0;
	var uLocal_13694 = 0;
	var uLocal_13695 = 0;
	var uLocal_13696 = 0;
	var uLocal_13697 = 0;
	var uLocal_13698 = 0;
	var uLocal_13699 = 0;
	var uLocal_13700 = 0;
	var uLocal_13701 = 0;
	var uLocal_13702 = 0;
	var uLocal_13703 = 0;
	var uLocal_13704 = 0;
	var uLocal_13705 = 0;
	var uLocal_13706 = 0;
	var uLocal_13707 = 0;
	var uLocal_13708 = 0;
	var uLocal_13709 = 0;
	var uLocal_13710 = 0;
	var uLocal_13711 = 0;
	var uLocal_13712 = 0;
	var uLocal_13713 = 0;
	var uLocal_13714 = 0;
	var uLocal_13715 = 0;
	var uLocal_13716 = 0;
	var uLocal_13717 = 0;
	var uLocal_13718 = 0;
	var uLocal_13719 = 0;
	var uLocal_13720 = 0;
	var uLocal_13721 = 0;
	var uLocal_13722 = 0;
	var uLocal_13723 = 0;
	var uLocal_13724 = 0;
	var uLocal_13725 = 0;
	var uLocal_13726 = 0;
	var uLocal_13727 = 0;
	var uLocal_13728 = 0;
	var uLocal_13729 = 0;
	var uLocal_13730 = 0;
	var uLocal_13731 = 0;
	var uLocal_13732 = 0;
	var uLocal_13733 = 0;
	var uLocal_13734 = 0;
	var uLocal_13735 = 0;
	var uLocal_13736 = 0;
	var uLocal_13737 = 0;
	var uLocal_13738 = 0;
	var uLocal_13739 = 0;
	var uLocal_13740 = 0;
	var uLocal_13741 = 0;
	var uLocal_13742 = 0;
	var uLocal_13743 = 0;
	var uLocal_13744 = 0;
	var uLocal_13745 = 0;
	var uLocal_13746 = 0;
	var uLocal_13747 = 0;
	var uLocal_13748 = 0;
	var uLocal_13749 = 0;
	var uLocal_13750 = 0;
	var uLocal_13751 = 0;
	var uLocal_13752 = 0;
	var uLocal_13753 = 0;
	var uLocal_13754 = 0;
	var uLocal_13755 = 0;
	var uLocal_13756 = 0;
	var uLocal_13757 = 0;
	var uLocal_13758 = 0;
	var uLocal_13759 = 0;
	var uLocal_13760 = 0;
	var uLocal_13761 = 0;
	var uLocal_13762 = 0;
	var uLocal_13763 = 0;
	var uLocal_13764 = 0;
	var uLocal_13765 = 0;
	var uLocal_13766 = 0;
	var uLocal_13767 = 0;
	var uLocal_13768 = 0;
	var uLocal_13769 = 0;
	var uLocal_13770 = 0;
	var uLocal_13771 = 0;
	var uLocal_13772 = 0;
	var uLocal_13773 = 0;
	var uLocal_13774 = 0;
	var uLocal_13775 = 0;
	var uLocal_13776 = 0;
	var uLocal_13777 = 0;
	var uLocal_13778 = 0;
	var uLocal_13779 = 0;
	var uLocal_13780 = 0;
	var uLocal_13781 = 0;
	var uLocal_13782 = 0;
	var uLocal_13783 = 0;
	var uLocal_13784 = 0;
	var uLocal_13785 = 0;
	var uLocal_13786 = 0;
	var uLocal_13787 = 0;
	var uLocal_13788 = 0;
	var uLocal_13789 = 0;
	var uLocal_13790 = 0;
	var uLocal_13791 = 0;
	var uLocal_13792 = 0;
	var uLocal_13793 = 0;
	var uLocal_13794 = 0;
	var uLocal_13795 = 0;
	var uLocal_13796 = 0;
	var uLocal_13797 = 0;
	var uLocal_13798 = 0;
	var uLocal_13799 = 0;
	var uLocal_13800 = 0;
	var uLocal_13801 = 0;
	var uLocal_13802 = 0;
	var uLocal_13803 = 0;
	var uLocal_13804 = 0;
	var uLocal_13805 = 0;
	var uLocal_13806 = 0;
	var uLocal_13807 = 0;
	var uLocal_13808 = 0;
	var uLocal_13809 = 0;
	var uLocal_13810 = 0;
	var uLocal_13811 = 0;
	var uLocal_13812 = 0;
	var uLocal_13813 = 0;
	var uLocal_13814 = 0;
	var uLocal_13815 = 0;
	var uLocal_13816 = 0;
	var uLocal_13817 = 0;
	var uLocal_13818 = 0;
	var uLocal_13819 = 0;
	var uLocal_13820 = 0;
	var uLocal_13821 = 0;
	var uLocal_13822 = 0;
	var uLocal_13823 = 0;
	var uLocal_13824 = 0;
	var uLocal_13825 = 0;
	var uLocal_13826 = 0;
	var uLocal_13827 = 0;
	var uLocal_13828 = 0;
	var uLocal_13829 = 0;
	var uLocal_13830 = 0;
	var uLocal_13831 = 0;
	var uLocal_13832 = 0;
	var uLocal_13833 = 0;
	var uLocal_13834 = 0;
	var uLocal_13835 = 0;
	var uLocal_13836 = 0;
	var uLocal_13837 = 0;
	var uLocal_13838 = 0;
	var uLocal_13839 = 0;
	var uLocal_13840 = 0;
	var uLocal_13841 = 0;
	var uLocal_13842 = 0;
	var uLocal_13843 = 0;
	var uLocal_13844 = 0;
	var uLocal_13845 = 0;
	var uLocal_13846 = 0;
	var uLocal_13847 = 0;
	var uLocal_13848 = 0;
	var uLocal_13849 = 0;
	var uLocal_13850 = 0;
	var uLocal_13851 = 0;
	var uLocal_13852 = 0;
	var uLocal_13853 = 0;
	var uLocal_13854 = 0;
	var uLocal_13855 = 0;
	var uLocal_13856 = 0;
	var uLocal_13857 = 0;
	var uLocal_13858 = 0;
	var uLocal_13859 = 0;
	var uLocal_13860 = 0;
	var uLocal_13861 = 0;
	var uLocal_13862 = 0;
	var uLocal_13863 = 0;
	var uLocal_13864 = 0;
	var uLocal_13865 = 0;
	var uLocal_13866 = 0;
	var uLocal_13867 = 0;
	var uLocal_13868 = 0;
	var uLocal_13869 = 0;
	var uLocal_13870 = 0;
	var uLocal_13871 = 0;
	var uLocal_13872 = 0;
	var uLocal_13873 = 0;
	var uLocal_13874 = 0;
	var uLocal_13875 = 0;
	var uLocal_13876 = 0;
	var uLocal_13877 = 0;
	var uLocal_13878 = 0;
	var uLocal_13879 = 0;
	var uLocal_13880 = 0;
	var uLocal_13881 = 0;
	var uLocal_13882 = 0;
	var uLocal_13883 = 0;
	var uLocal_13884 = 0;
	var uLocal_13885 = 0;
	var uLocal_13886 = 0;
	var uLocal_13887 = 0;
	var uLocal_13888 = 0;
	var uLocal_13889 = 0;
	var uLocal_13890 = 0;
	var uLocal_13891 = 0;
	var uLocal_13892 = 0;
	var uLocal_13893 = 0;
	var uLocal_13894 = 0;
	var uLocal_13895 = 0;
	var uLocal_13896 = 0;
	var uLocal_13897 = 0;
	var uLocal_13898 = 0;
	var uLocal_13899 = 0;
	var uLocal_13900 = 0;
	var uLocal_13901 = 0;
	var uLocal_13902 = 0;
	var uLocal_13903 = 0;
	var uLocal_13904 = 0;
	var uLocal_13905 = 0;
	var uLocal_13906 = 0;
	var uLocal_13907 = 0;
	var uLocal_13908 = 0;
	var uLocal_13909 = 0;
	var uLocal_13910 = 0;
	var uLocal_13911 = 0;
	var uLocal_13912 = 0;
	var uLocal_13913 = 0;
	var uLocal_13914 = 0;
	var uLocal_13915 = 0;
	var uLocal_13916 = 0;
	var uLocal_13917 = 0;
	var uLocal_13918 = 0;
	var uLocal_13919 = 0;
	var uLocal_13920 = 0;
	var uLocal_13921 = 0;
	var uLocal_13922 = 0;
	var uLocal_13923 = 0;
	var uLocal_13924 = 0;
	var uLocal_13925 = 0;
	var uLocal_13926 = 0;
	var uLocal_13927 = 0;
	var uLocal_13928 = 0;
	var uLocal_13929 = 0;
	var uLocal_13930 = 0;
	var uLocal_13931 = 0;
	var uLocal_13932 = 0;
	var uLocal_13933 = 0;
	var uLocal_13934 = 0;
	var uLocal_13935 = 0;
	var uLocal_13936 = 0;
	var uLocal_13937 = 0;
	var uLocal_13938 = 0;
	var uLocal_13939 = 0;
	var uLocal_13940 = 0;
	var uLocal_13941 = 0;
	var uLocal_13942 = 0;
	var uLocal_13943 = 0;
	var uLocal_13944 = 0;
	var uLocal_13945 = 0;
	var uLocal_13946 = 0;
	var uLocal_13947 = 0;
	var uLocal_13948 = 0;
	var uLocal_13949 = 0;
	var uLocal_13950 = 0;
	var uLocal_13951 = 0;
	var uLocal_13952 = 0;
	var uLocal_13953 = 0;
	var uLocal_13954 = 0;
	var uLocal_13955 = 0;
	var uLocal_13956 = 0;
	var uLocal_13957 = 0;
	var uLocal_13958 = 0;
	var uLocal_13959 = 0;
	var uLocal_13960 = 0;
	var uLocal_13961 = 0;
	var uLocal_13962 = 0;
	var uLocal_13963 = 0;
	var uLocal_13964 = 8;
	var uLocal_13965 = 0;
	var uLocal_13966 = 0;
	var uLocal_13967 = 0;
	var uLocal_13968 = 0;
	var uLocal_13969 = 0;
	var uLocal_13970 = 0;
	var uLocal_13971 = 0;
	var uLocal_13972 = 0;
	var uLocal_13973 = 0;
	var uLocal_13974 = 0;
	var uLocal_13975 = 0;
	var uLocal_13976 = 0;
	var uLocal_13977 = 0;
	var uLocal_13978 = 0;
	var uLocal_13979 = 0;
	var uLocal_13980 = 0;
	var uLocal_13981 = 0;
	var uLocal_13982 = 0;
	var uLocal_13983 = 0;
	var uLocal_13984 = 0;
	var uLocal_13985 = -1;
	var uLocal_13986 = 0;
	var uLocal_13987 = 0;
	var uLocal_13988 = 0;
	var uLocal_13989 = 0;
	var uLocal_13990 = 0;
	var uLocal_13991 = 0;
	var uLocal_13992 = 0;
	var uLocal_13993 = 0;
	var uLocal_13994 = 0;
	var uLocal_13995 = 0;
	var uLocal_13996 = 0;
	var uLocal_13997 = 0;
	var uLocal_13998 = 0;
	var uLocal_13999 = 0;
	var uLocal_14000 = 0;
	var uLocal_14001 = 0;
	var uLocal_14002 = 0;
	var uLocal_14003 = 0;
	var uLocal_14004 = 0;
	var uLocal_14005 = 0;
	var uLocal_14006 = 0;
	var uLocal_14007 = -1;
	var uLocal_14008 = 0;
	var uLocal_14009 = 0;
	var uLocal_14010 = 0;
	var uLocal_14011 = 0;
	var uLocal_14012 = 0;
	var uLocal_14013 = 0;
	var uLocal_14014 = 0;
	var uLocal_14015 = 0;
	var uLocal_14016 = 0;
	var uLocal_14017 = 0;
	var uLocal_14018 = 0;
	var uLocal_14019 = 0;
	var uLocal_14020 = 0;
	var uLocal_14021 = 0;
	var uLocal_14022 = 0;
	var uLocal_14023 = 0;
	var uLocal_14024 = 0;
	var uLocal_14025 = 0;
	var uLocal_14026 = 0;
	var uLocal_14027 = 0;
	var uLocal_14028 = 0;
	var uLocal_14029 = -1;
	var uLocal_14030 = 0;
	var uLocal_14031 = 0;
	var uLocal_14032 = 0;
	var uLocal_14033 = 0;
	var uLocal_14034 = 0;
	var uLocal_14035 = 0;
	var uLocal_14036 = 0;
	var uLocal_14037 = 0;
	var uLocal_14038 = 0;
	var uLocal_14039 = 0;
	var uLocal_14040 = 0;
	var uLocal_14041 = 0;
	var uLocal_14042 = 0;
	var uLocal_14043 = 0;
	var uLocal_14044 = 0;
	var uLocal_14045 = 0;
	var uLocal_14046 = 0;
	var uLocal_14047 = 0;
	var uLocal_14048 = 0;
	var uLocal_14049 = 0;
	var uLocal_14050 = 0;
	var uLocal_14051 = -1;
	var uLocal_14052 = 0;
	var uLocal_14053 = 0;
	var uLocal_14054 = 0;
	var uLocal_14055 = 0;
	var uLocal_14056 = 0;
	var uLocal_14057 = 0;
	var uLocal_14058 = 0;
	var uLocal_14059 = 0;
	var uLocal_14060 = 0;
	var uLocal_14061 = 0;
	var uLocal_14062 = 0;
	var uLocal_14063 = 0;
	var uLocal_14064 = 0;
	var uLocal_14065 = 0;
	var uLocal_14066 = 0;
	var uLocal_14067 = 0;
	var uLocal_14068 = 0;
	var uLocal_14069 = 0;
	var uLocal_14070 = 0;
	var uLocal_14071 = 0;
	var uLocal_14072 = 0;
	var uLocal_14073 = -1;
	var uLocal_14074 = 0;
	var uLocal_14075 = 0;
	var uLocal_14076 = 0;
	var uLocal_14077 = 0;
	var uLocal_14078 = 0;
	var uLocal_14079 = 0;
	var uLocal_14080 = 0;
	var uLocal_14081 = 0;
	var uLocal_14082 = 0;
	var uLocal_14083 = 0;
	var uLocal_14084 = 0;
	var uLocal_14085 = 0;
	var uLocal_14086 = 0;
	var uLocal_14087 = 0;
	var uLocal_14088 = 0;
	var uLocal_14089 = 0;
	var uLocal_14090 = 0;
	var uLocal_14091 = 0;
	var uLocal_14092 = 0;
	var uLocal_14093 = 0;
	var uLocal_14094 = 0;
	var uLocal_14095 = -1;
	var uLocal_14096 = 0;
	var uLocal_14097 = 0;
	var uLocal_14098 = 0;
	var uLocal_14099 = 0;
	var uLocal_14100 = 0;
	var uLocal_14101 = 0;
	var uLocal_14102 = 0;
	var uLocal_14103 = 0;
	var uLocal_14104 = 0;
	var uLocal_14105 = 0;
	var uLocal_14106 = 0;
	var uLocal_14107 = 0;
	var uLocal_14108 = 0;
	var uLocal_14109 = 0;
	var uLocal_14110 = 0;
	var uLocal_14111 = 0;
	var uLocal_14112 = 0;
	var uLocal_14113 = 0;
	var uLocal_14114 = 0;
	var uLocal_14115 = 0;
	var uLocal_14116 = 0;
	var uLocal_14117 = -1;
	var uLocal_14118 = 0;
	var uLocal_14119 = 0;
	var uLocal_14120 = 0;
	var uLocal_14121 = 0;
	var uLocal_14122 = 0;
	var uLocal_14123 = 0;
	var uLocal_14124 = 0;
	var uLocal_14125 = 0;
	var uLocal_14126 = 0;
	var uLocal_14127 = 0;
	var uLocal_14128 = 0;
	var uLocal_14129 = 0;
	var uLocal_14130 = 0;
	var uLocal_14131 = 0;
	var uLocal_14132 = 0;
	var uLocal_14133 = 0;
	var uLocal_14134 = 0;
	var uLocal_14135 = 0;
	var uLocal_14136 = 0;
	var uLocal_14137 = 0;
	var uLocal_14138 = 0;
	var uLocal_14139 = -1;
	var uLocal_14140 = 0;
	var uLocal_14141 = 11;
	var uLocal_14142 = 0;
	var uLocal_14143 = 0;
	var uLocal_14144 = 0;
	var uLocal_14145 = 0;
	var uLocal_14146 = 0;
	var uLocal_14147 = 0;
	var uLocal_14148 = 0;
	var uLocal_14149 = 0;
	var uLocal_14150 = 0;
	var uLocal_14151 = 0;
	var uLocal_14152 = 0;
	var uLocal_14153 = 0;
	var uLocal_14154 = 0;
	var uLocal_14155 = 0;
	var uLocal_14156 = 0;
	var uLocal_14157 = 0;
	var uLocal_14158 = 0;
	var uLocal_14159 = 0;
	var uLocal_14160 = 0;
	var uLocal_14161 = 0;
	var uLocal_14162 = 0;
	var uLocal_14163 = 0;
	var uLocal_14164 = 0;
	var uLocal_14165 = 0;
	var uLocal_14166 = 0;
	var uLocal_14167 = 0;
	var uLocal_14168 = 0;
	var uLocal_14169 = 0;
	var uLocal_14170 = 0;
	var uLocal_14171 = 0;
	var uLocal_14172 = 0;
	var uLocal_14173 = 0;
	var uLocal_14174 = 0;
	var uLocal_14175 = 0;
	var uLocal_14176 = 0;
	var uLocal_14177 = 0;
	var uLocal_14178 = 0;
	var uLocal_14179 = 0;
	var uLocal_14180 = 0;
	var uLocal_14181 = 0;
	var uLocal_14182 = 0;
	var uLocal_14183 = 0;
	var uLocal_14184 = 0;
	var uLocal_14185 = 0;
	var uLocal_14186 = 0;
	var uLocal_14187 = 0;
	var uLocal_14188 = 0;
	var uLocal_14189 = 0;
	var uLocal_14190 = 0;
	var uLocal_14191 = 0;
	var uLocal_14192 = 0;
	var uLocal_14193 = 0;
	var uLocal_14194 = 0;
	var uLocal_14195 = 0;
	var uLocal_14196 = 0;
	var uLocal_14197 = 0;
	var uLocal_14198 = 0;
	var uLocal_14199 = 0;
	var uLocal_14200 = 0;
	var uLocal_14201 = 0;
	var uLocal_14202 = 0;
	var uLocal_14203 = 0;
	var uLocal_14204 = 0;
	var uLocal_14205 = 0;
	var uLocal_14206 = 0;
	var uLocal_14207 = 0;
	var uLocal_14208 = 0;
	var uLocal_14209 = 0;
	var uLocal_14210 = 0;
	var uLocal_14211 = 0;
	var uLocal_14212 = 0;
	var uLocal_14213 = 0;
	var uLocal_14214 = 0;
	var uLocal_14215 = 0;
	var uLocal_14216 = 0;
	var uLocal_14217 = 0;
	var uLocal_14218 = 0;
	var uLocal_14219 = 0;
	var uLocal_14220 = 0;
	var uLocal_14221 = 0;
	var uLocal_14222 = 0;
	var uLocal_14223 = 0;
	var uLocal_14224 = 0;
	var uLocal_14225 = 0;
	var uLocal_14226 = 0;
	var uLocal_14227 = 0;
	var uLocal_14228 = 0;
	var uLocal_14229 = 0;
	var uLocal_14230 = 0;
	var uLocal_14231 = 0;
	var uLocal_14232 = 0;
	var uLocal_14233 = 0;
	var uLocal_14234 = 0;
	var uLocal_14235 = 0;
	var uLocal_14236 = 0;
	var uLocal_14237 = 0;
	var uLocal_14238 = 0;
	var uLocal_14239 = 0;
	var uLocal_14240 = 0;
	var uLocal_14241 = 0;
	var uLocal_14242 = 0;
	var uLocal_14243 = 0;
	var uLocal_14244 = 0;
	var uLocal_14245 = 0;
	var uLocal_14246 = 0;
	var uLocal_14247 = 0;
	var uLocal_14248 = 0;
	var uLocal_14249 = 0;
	var uLocal_14250 = 0;
	var uLocal_14251 = 0;
	var uLocal_14252 = 2;
	var uLocal_14253 = 0;
	var uLocal_14254 = 0;
	var uLocal_14255 = 0;
	var uLocal_14256 = 0;
	var uLocal_14257 = 0;
	var uLocal_14258 = 0;
	var uLocal_14259 = 0;
	var uLocal_14260 = 0;
	var uLocal_14261 = 0;
	var uLocal_14262 = 0;
	var uLocal_14263 = 0;
	var uLocal_14264 = 0;
	var uLocal_14265 = 0;
	var uLocal_14266 = 0;
	var uLocal_14267 = 0;
	var uLocal_14268 = 0;
	var uLocal_14269 = 0;
	var uLocal_14270 = 0;
	var uLocal_14271 = 0;
	var uLocal_14272 = 0;
	var uLocal_14273 = 0;
	var uLocal_14274 = 0;
	var uLocal_14275 = 0;
	var uLocal_14276 = 0;
	var uLocal_14277 = 0;
	var uLocal_14278 = 0;
	var uLocal_14279 = 0;
	var uLocal_14280 = 0;
	var uLocal_14281 = 0;
	var uLocal_14282 = 0;
	var uLocal_14283 = 0;
	var uLocal_14284 = 0;
	var uLocal_14285 = 0;
	var uLocal_14286 = 0;
	var uLocal_14287 = 2;
	var uLocal_14288 = 0;
	var uLocal_14289 = 0;
	var uLocal_14290 = 0;
	var uLocal_14291 = 0;
	var uLocal_14292 = 0;
	var uLocal_14293 = 0;
	var uLocal_14294 = 0;
	var uLocal_14295 = 0;
	var uLocal_14296 = 0;
	var uLocal_14297 = 0;
	var uLocal_14298 = 0;
	var uLocal_14299 = 0;
	var uLocal_14300 = 0;
	var uLocal_14301 = 0;
	var uLocal_14302 = 0;
	var uLocal_14303 = 0;
	var uLocal_14304 = -1;
	var uLocal_14305 = 0;
	var uLocal_14306 = 0;
	var uLocal_14307 = -1;
	var uLocal_14308 = -1082130432;
	var uLocal_14309 = 0;
	var uLocal_14310 = 0;
	var uLocal_14311 = 0;
	var uLocal_14312 = 0;
	var uLocal_14313 = 0;
	var uLocal_14314 = 0;
	var uLocal_14315 = 0;
	var uLocal_14316 = 0;
	var uLocal_14317 = 0;
	var uLocal_14318 = 0;
	var uLocal_14319 = 0;
	var uLocal_14320 = 0;
	var uLocal_14321 = 0;
	var uLocal_14322 = 0;
	var uLocal_14323 = 0;
	var uLocal_14324 = 0;
	var uLocal_14325 = 0;
	var uLocal_14326 = 0;
	var uLocal_14327 = 0;
	var uLocal_14328 = 0;
	var uLocal_14329 = 0;
	var uLocal_14330 = 0;
	var uLocal_14331 = 0;
	var uLocal_14332 = 0;
	var uLocal_14333 = 0;
	var uLocal_14334 = 0;
	var uLocal_14335 = 0;
	var uLocal_14336 = 0;
	var uLocal_14337 = 0;
	var uLocal_14338 = 0;
	var uLocal_14339 = 0;
	var uLocal_14340 = 0;
	var uLocal_14341 = 0;
	var uLocal_14342 = 0;
	var uLocal_14343 = 0;
	var uLocal_14344 = 0;
	var uLocal_14345 = 0;
	var uLocal_14346 = 0;
	var uLocal_14347 = 0;
	var uLocal_14348 = 0;
	var uLocal_14349 = 0;
	var uLocal_14350 = 0;
	var uLocal_14351 = 0;
	var uLocal_14352 = 0;
	var uLocal_14353 = 0;
	var uLocal_14354 = 0;
	var uLocal_14355 = 0;
	var uLocal_14356 = 0;
	var uLocal_14357 = 0;
	var uLocal_14358 = 0;
	var uLocal_14359 = 0;
	var uLocal_14360 = 0;
	var uLocal_14361 = 0;
	var uLocal_14362 = 0;
	var uLocal_14363 = 0;
	var uLocal_14364 = 0;
	var uLocal_14365 = 0;
	var uLocal_14366 = 0;
	var uLocal_14367 = 0;
	var uLocal_14368 = 0;
	var uLocal_14369 = 0;
	var uLocal_14370 = 0;
	var uLocal_14371 = 0;
	var uLocal_14372 = 0;
	var uLocal_14373 = 0;
	var uLocal_14374 = 0;
	var uLocal_14375 = 0;
	var uLocal_14376 = 0;
	var uLocal_14377 = 0;
	var uLocal_14378 = 0;
	var uLocal_14379 = 0;
	var uLocal_14380 = 0;
	var uLocal_14381 = 0;
	var uLocal_14382 = 0;
	var uLocal_14383 = 0;
	var uLocal_14384 = 0;
	var uLocal_14385 = 0;
	var uLocal_14386 = 0;
	var uLocal_14387 = 0;
	var uLocal_14388 = 0;
	var uLocal_14389 = 0;
	var uLocal_14390 = 24;
	var uLocal_14391 = 0;
	var uLocal_14392 = 0;
	var uLocal_14393 = 0;
	var uLocal_14394 = 0;
	var uLocal_14395 = 0;
	var uLocal_14396 = 0;
	var uLocal_14397 = 0;
	var uLocal_14398 = 0;
	var uLocal_14399 = 0;
	var uLocal_14400 = 0;
	var uLocal_14401 = 0;
	var uLocal_14402 = 0;
	var uLocal_14403 = 0;
	var uLocal_14404 = 0;
	var uLocal_14405 = 0;
	var uLocal_14406 = 0;
	var uLocal_14407 = 0;
	var uLocal_14408 = 0;
	var uLocal_14409 = 0;
	var uLocal_14410 = 0;
	var uLocal_14411 = 0;
	var uLocal_14412 = 0;
	var uLocal_14413 = 0;
	var uLocal_14414 = 0;
	var uLocal_14415 = 0;
	var uLocal_14416 = 0;
	var uLocal_14417 = 0;
	var uLocal_14418 = 0;
	var uLocal_14419 = 0;
	var uLocal_14420 = 0;
	var uLocal_14421 = 0;
	var uLocal_14422 = 0;
	var uLocal_14423 = 0;
	var uLocal_14424 = 0;
	var uLocal_14425 = 0;
	var uLocal_14426 = 0;
	var uLocal_14427 = 0;
	var uLocal_14428 = 0;
	var uLocal_14429 = 0;
	var uLocal_14430 = 0;
	var uLocal_14431 = 0;
	var uLocal_14432 = 0;
	var uLocal_14433 = 0;
	var uLocal_14434 = 0;
	var uLocal_14435 = 0;
	var uLocal_14436 = 0;
	var uLocal_14437 = 0;
	var uLocal_14438 = 0;
	var uLocal_14439 = 0;
	var uLocal_14440 = 0;
	var uLocal_14441 = 0;
	var uLocal_14442 = 0;
	var uLocal_14443 = 0;
	var uLocal_14444 = 0;
	var uLocal_14445 = 0;
	var uLocal_14446 = 0;
	var uLocal_14447 = 0;
	var uLocal_14448 = 0;
	var uLocal_14449 = 0;
	var uLocal_14450 = 0;
	var uLocal_14451 = 0;
	var uLocal_14452 = 0;
	var uLocal_14453 = 0;
	var uLocal_14454 = 0;
	var uLocal_14455 = 0;
	var uLocal_14456 = 0;
	var uLocal_14457 = 0;
	var uLocal_14458 = 0;
	var uLocal_14459 = 0;
	var uLocal_14460 = 0;
	var uLocal_14461 = 0;
	var uLocal_14462 = 0;
	var uLocal_14463 = 0;
	var uLocal_14464 = 0;
	var uLocal_14465 = 0;
	var uLocal_14466 = 0;
	var uLocal_14467 = 0;
	var uLocal_14468 = 0;
	var uLocal_14469 = 0;
	var uLocal_14470 = 0;
	var uLocal_14471 = 0;
	var uLocal_14472 = 0;
	var uLocal_14473 = 0;
	var uLocal_14474 = 0;
	var uLocal_14475 = 0;
	var uLocal_14476 = 0;
	var uLocal_14477 = 0;
	var uLocal_14478 = 0;
	var uLocal_14479 = 0;
	var uLocal_14480 = 0;
	var uLocal_14481 = 0;
	var uLocal_14482 = 0;
	var uLocal_14483 = 0;
	var uLocal_14484 = 0;
	var uLocal_14485 = 0;
	var uLocal_14486 = 0;
	var uLocal_14487 = 0;
	var uLocal_14488 = 0;
	var uLocal_14489 = 0;
	var uLocal_14490 = 0;
	var uLocal_14491 = 0;
	var uLocal_14492 = 0;
	var uLocal_14493 = 0;
	var uLocal_14494 = 0;
	var uLocal_14495 = 0;
	var uLocal_14496 = 0;
	var uLocal_14497 = 0;
	var uLocal_14498 = 0;
	var uLocal_14499 = 0;
	var uLocal_14500 = 0;
	var uLocal_14501 = 0;
	var uLocal_14502 = 0;
	var uLocal_14503 = 0;
	var uLocal_14504 = 0;
	var uLocal_14505 = 0;
	var uLocal_14506 = 0;
	var uLocal_14507 = 0;
	var uLocal_14508 = 0;
	var uLocal_14509 = 0;
	var uLocal_14510 = 0;
	var uLocal_14511 = 0;
	var uLocal_14512 = 0;
	var uLocal_14513 = 0;
	var uLocal_14514 = -1;
	var uLocal_14515 = 0;
	var uLocal_14516 = 0;
	var uLocal_14517 = 0;
	var uLocal_14518 = 0;
	var uLocal_14519 = 0;
	var uLocal_14520 = 0;
	var uLocal_14521 = 0;
	var uLocal_14522 = 0;
	var uLocal_14523 = 0;
	var uLocal_14524 = 0;
	var uLocal_14525 = 0;
	var uLocal_14526 = 0;
	var uLocal_14527 = 0;
	var uLocal_14528 = 0;
	var uLocal_14529 = 0;
	var uLocal_14530 = 0;
	var uLocal_14531 = 0;
	var uLocal_14532 = 0;
	var uLocal_14533 = 0;
	var uLocal_14534 = 0;
	var uLocal_14535 = 0;
	var uLocal_14536 = 0;
	var uLocal_14537 = 0;
	var uLocal_14538 = 0;
	var uLocal_14539 = 0;
	var uLocal_14540 = 0;
	var uLocal_14541 = -1;
	var uLocal_14542 = 20;
	var uLocal_14543 = 0;
	var uLocal_14544 = 0;
	var uLocal_14545 = 0;
	var uLocal_14546 = 0;
	var uLocal_14547 = 0;
	var uLocal_14548 = 0;
	var uLocal_14549 = 0;
	var uLocal_14550 = 0;
	var uLocal_14551 = 0;
	var uLocal_14552 = 0;
	var uLocal_14553 = 0;
	var uLocal_14554 = 0;
	var uLocal_14555 = 0;
	var uLocal_14556 = 0;
	var uLocal_14557 = 0;
	var uLocal_14558 = 0;
	var uLocal_14559 = 0;
	var uLocal_14560 = 0;
	var uLocal_14561 = 0;
	var uLocal_14562 = 0;
	var uLocal_14563 = 0;
	var uLocal_14564 = 0;
	var uLocal_14565 = 0;
	var uLocal_14566 = 0;
	var uLocal_14567 = 0;
	var uLocal_14568 = 0;
	var uLocal_14569 = 0;
	var uLocal_14570 = 1028443341;
	var uLocal_14571 = 1038174126;
	var uLocal_14572 = 1065353216;
	var uLocal_14573 = 1065353216;
	var uLocal_14574 = 1086324736;
	var uLocal_14575 = 1082130432;
	var uLocal_14576 = 1073741824;
	var uLocal_14577 = 1065353216;
	var uLocal_14578 = 1108082688;
	var uLocal_14579 = 1108082688;
	var uLocal_14580 = 3000;
	var uLocal_14581 = 1092616192;
	var uLocal_14582 = 0;
	var uLocal_14583 = 0;
	var uLocal_14584 = 0;
	var uLocal_14585 = 0;
	var uLocal_14586 = 0;
	var uLocal_14587 = 0;
	var uLocal_14588 = 0;
	var uLocal_14589 = 0;
	var uLocal_14590 = 0;
	var uLocal_14591 = 0;
	var uLocal_14592 = 0;
	var uLocal_14593 = 0;
	var uLocal_14594 = 0;
	var uLocal_14595 = 0;
	var uLocal_14596 = 0;
	var uLocal_14597 = 0;
	var uLocal_14598 = 0;
	var uLocal_14599 = 0;
	var uLocal_14600 = 0;
	var uLocal_14601 = 0;
	var uLocal_14602 = 0;
	var uLocal_14603 = 0;
	var uLocal_14604 = 0;
	var uLocal_14605 = 0;
	var uLocal_14606 = 0;
	var uLocal_14607 = 0;
	var uLocal_14608 = 0;
	var uLocal_14609 = 0;
	var uLocal_14610 = 0;
	var uLocal_14611 = 0;
	var uLocal_14612 = 0;
	var uLocal_14613 = 0;
	var uLocal_14614 = 0;
	var uLocal_14615 = 0;
	var uLocal_14616 = -1;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_17 = 1;
	iLocal_18 = 2;
	iLocal_19 = 3;
	iLocal_20 = 4;
	iLocal_21 = 5;
	iLocal_22 = 6;
	iLocal_23 = 7;
	iLocal_24 = 8;
	iLocal_25 = 9;
	iLocal_26 = 10;
	iLocal_27 = 25;
	iLocal_28 = 1;
	iLocal_29 = 2;
	iLocal_30 = 4;
	iLocal_31 = 8;
	iLocal_32 = 16;
	iLocal_33 = 32;
	iLocal_34 = 64;
	iLocal_35 = 128;
	iLocal_36 = 256;
	iLocal_37 = 512;
	iLocal_38 = 1024;
	iLocal_39 = 524288;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4642))
	{
		__LIB_6__::func_860(&uLocal_1437, 1073741824 /* Float: 2f */);
		func_2(&uLocal_1437, 1);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	while (!__LIB_0__::func_382(64))
	{
		BUILTIN::WAIT(0);
	}
	func_4(&uScriptParam_0, &uLocal_1437);
	func_5(&uLocal_1437);
	while (!__LIB_6__::func_861(&uLocal_1437, -2147483648))
	{
		func_7(&uLocal_1437);
		BUILTIN::WAIT(0);
	}
	while (!func_2(&uLocal_1437, 0))
	{
		BUILTIN::WAIT(0);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_2(char[4] cParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	struct<2> Var4;
	struct<8> Var6;
	if (__LIB_6__::func_862(cParam0, 4096))
	{
		return true;
	}
	if (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() == 4096)
	{
		func_9(cParam0);
		HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
		HUD::_DISPLAY_HUD_COMPONENT(1331687942);
		if (__LIB_0__::func_139(Global_43801))
		{
			__LIB_1__::func_281(&Global_43801, 1, 1);
		}
		UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
		MISC::_0x1096603B519C905F("");
		__LIB_1__::func_559(__LIB_3__::func_918(cParam0->f_607), 0, 2);
		__LIB_1__::func_140();
		__LIB_4__::func_716(1);
		__LIB_0__::func_722(1, 0);
		__LIB_8__::func_703(cParam0, 1);
		__LIB_1__::func_723(0);
		UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(0, "");
		Global_36605 = 0;
		__LIB_5__::func_384(3);
		if (!TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_PLAYER_SEAT_LEDGE"))
		{
			TASK::_SET_SCENARIO_TYPE_ENABLED_HASH(joaat("WORLD_PLAYER_SEAT_LEDGE"), true);
		}
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	if (!bParam1)
	{
		if (!__LIB_6__::func_861(cParam0, 1048576))
		{
			if (__LIB_0__::func_2() == 0)
			{
				__LIB_1__::func_965(0);
			}
			else if (__LIB_6__::func_863(cParam0) != 0)
			{
				if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
				{
					if (CAM::_0x1204EB53A5FBC63D())
					{
						return false;
					}
					if (__LIB_6__::func_863(cParam0) == 1 || __LIB_6__::func_863(cParam0) == 2)
					{
						if (__LIB_4__::func_505(&(cParam0->f_8269)) && __LIB_4__::func_506(&(cParam0->f_8269)))
						{
							__LIB_1__::func_582(0, &(cParam0->f_8269.f_1282));
						}
					}
					if (!__LIB_0__::func_75(&(cParam0->f_13118)))
					{
						__LIB_1__::func_283(&(cParam0->f_13118), 0);
					}
					bVar0 = CAM::_0x139EFB0A71DD9011();
					if (bVar0)
					{
						__LIB_6__::func_860(cParam0, 256);
					}
					bVar1 = CAM::_0x7CE9DC58E3E4755F();
					if (bVar1 && __LIB_6__::func_861(cParam0, 256))
					{
						CAM::_0x16E9ABDD34DDD931();
						CAM::DO_SCREEN_FADE_OUT(0);
					}
					else
					{
						if (((!bVar0 && !__LIB_9__::func_39(cParam0, bVar1)) && !__LIB_0__::func_91()) && !__LIB_6__::func_861(cParam0, 80))
						{
							if (!bVar1)
							{
								__LIB_8__::func_722(cParam0);
							}
							return false;
						}
						if (__LIB_6__::func_861(cParam0, 64))
						{
							CAM::_0x16E9ABDD34DDD931();
							CAM::DO_SCREEN_FADE_OUT(0);
						}
						else if (__LIB_6__::func_863(cParam0) == 2)
						{
							if (cParam0->f_13104 == -1)
							{
								if (__LIB_0__::func_0(cParam0))
								{
									cParam0->f_13104 = MISC::GET_GAME_TIMER();
								}
							}
							if ((cParam0->f_13104 != -1 && MISC::GET_GAME_TIMER() > cParam0->f_13104 + 4000) || bVar1)
							{
								CAM::_0x16E9ABDD34DDD931();
								CAM::DO_SCREEN_FADE_OUT(0);
							}
						}
						else if (__LIB_6__::func_863(cParam0) == 1)
						{
							if (__LIB_9__::func_39(cParam0, bVar1))
							{
								CAM::_0x16E9ABDD34DDD931();
								CAM::DO_SCREEN_FADE_OUT(0);
							}
						}
						else
						{
							CAM::_0x16E9ABDD34DDD931();
							CAM::DO_SCREEN_FADE_OUT(0);
						}
						CAM::IS_SCREEN_FADING_IN();
						if (!CAM::IS_SCREEN_FADED_OUT())
						{
							return false;
						}
					}
				}
			}
			else if (__LIB_6__::func_861(cParam0, 2))
			{
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					if (!CAM::IS_SCREEN_FADING_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(1000);
					}
					return false;
				}
				if (MISC::_0x1B065A2BF7953815(1) == 1)
				{
					return false;
				}
			}
			if (!__LIB_4__::func_678() && __LIB_6__::func_863(cParam0) != 0)
			{
				__LIB_11__::func_239(cParam0, func_34(__LIB_6__::func_864(cParam0)), func_34(__LIB_9__::func_40(cParam0)), __LIB_6__::func_864(cParam0), __LIB_9__::func_40(cParam0));
			}
		}
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(cParam0->f_7375.f_804))
	{
		if (ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(cParam0->f_7375.f_804))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(cParam0->f_7375.f_804);
		}
	}
	__LIB_6__::func_860(cParam0, 1048576);
	if (!__LIB_6__::func_861(cParam0, 2097152))
	{
		if (!func_9(cParam0))
		{
			return false;
		}
		__LIB_6__::func_860(cParam0, 2097152);
	}
	MISC::_0x1096603B519C905F("");
	STREAMING::CLEAR_FOCUS();
	if (MISSIONDATA::_MISSIONDATA_TIMECYCLE_BOX_EXISTS())
	{
		MISSIONDATA::_MISSIONDATA_TIMECYCLE_BOX_DELETE();
	}
	MISC::SET_TIME_SCALE(1f);
	__LIB_5__::func_325(&(cParam0->f_8269));
	if (__LIB_4__::func_505(&(cParam0->f_8269)))
	{
		__LIB_4__::func_507(&(cParam0->f_8269));
	}
	AUDIO::SET_GPS_ACTIVE(false);
	PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), false);
	if (STREAMING::_0xCF45DF50C7775F2A())
	{
		STREAMING::_0x5A8B01199C3E79C3();
	}
	if (STREAMING::_0xCF45DF50C7775F2A())
	{
		STREAMING::_0x5A8B01199C3E79C3();
	}
	VEHICLE::SET_RANDOM_TRAINS(false);
	__LIB_1__::func_600(1);
	__LIB_0__::func_267(1);
	LAW::_0xC5EB2755FA25F1E9(1);
	__LIB_0__::func_395(0);
	__LIB_4__::func_679();
	__LIB_5__::func_384(3);
	if (!__LIB_6__::func_861(cParam0, 8))
	{
		HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
		HUD::_DISPLAY_HUD_COMPONENT(724769646);
	}
	__LIB_4__::func_716(1);
	__LIB_4__::func_782();
	__LIB_4__::func_680();
	HUD::SET_MISSION_NAME(false, 0);
	__LIB_0__::func_769();
	CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
	CLOCK::PAUSE_CLOCK(false, 0);
	PLAYER::_0x914071FF93AF2692(PLAYER::PLAYER_ID(), 1f);
	PLAYER::_0x19B2C7A6C34FAD54(PLAYER::PLAYER_ID(), 1f);
	__LIB_6__::func_865(cParam0);
	__LIB_5__::func_20(1, 0);
	__LIB_0__::func_698(2);
	if (!Global_1935630.f_12)
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 141, false);
		PED::_0xAAC0EE3B4999ABB5(Global_35, 0);
		WEAPON::_0xB832F1A686B9B810(Global_35, __LIB_5__::func_21(), 0);
		PED::SET_PED_CONFIG_FLAG(Global_35, 308, false);
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, false);
		PED::SET_PED_CONFIG_FLAG(Global_35, 446, false);
		PED::_0xEAE3B5B019C8D23F(Global_35, 262143);
		__LIB_1__::func_733(Global_35);
		PED::SET_PED_CONFIG_FLAG(Global_35, 170, false);
		PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
		PED::SET_PED_CONFIG_FLAG(Global_35, 360, false);
	}
	if (PLAYER::_0x2009F8AB7A5E9D6D(PLAYER::GET_PLAYER_INDEX()))
	{
		PLAYER::_0x12E09E278C6C29B7(PLAYER::GET_PLAYER_INDEX());
	}
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::GET_PLAYER_INDEX(), false);
	if (CAM::DOES_CAM_EXIST(cParam0->f_609.f_2))
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::DESTROY_CAM(cParam0->f_609.f_2, false);
	}
	__LIB_5__::func_326(&(cParam0->f_10792));
	__LIB_4__::func_508();
	CAM::STOP_GAMEPLAY_HINT(true);
	__LIB_1__::func_600(1);
	__LIB_5__::func_327();
	if (__LIB_1__::func_652())
	{
		STREAMING::_0x2F9AC754FE179D58(0.3f);
	}
	__LIB_4__::func_845(0, 14);
	bVar2 = false;
	if (__LIB_6__::func_863(cParam0) == 0)
	{
		bVar2 = true;
	}
	else
	{
		__LIB_8__::func_704(cParam0);
	}
	__LIB_9__::func_357(cParam0, 0, !bVar2, bVar2);
	__LIB_9__::func_70(cParam0, !bVar2);
	__LIB_1__::func_721(0);
	__LIB_1__::func_721(1);
	PLAYER::_0xDF93973251FB2CA5(PLAYER::PLAYER_ID(), 1);
	__LIB_4__::func_509(0);
	__LIB_5__::func_329(__LIB_6__::func_866(cParam0));
	__LIB_5__::func_330(__LIB_6__::func_866(cParam0));
	__LIB_0__::func_868(0);
	__LIB_0__::func_869(0);
	__LIB_0__::func_11(__LIB_6__::func_863(cParam0));
	__LIB_8__::func_658(cParam0);
	if (!bVar2)
	{
		__LIB_0__::func_722(1, 0);
	}
	if (__LIB_6__::func_863(cParam0) != 1)
	{
		__LIB_5__::func_101(0, &(cParam0->f_8269.f_1282));
	}
	Global_43805 = -1;
	__LIB_1__::func_978(1);
	__LIB_1__::func_564(0);
	__LIB_0__::func_8(&Global_1935630, 2097152);
	__LIB_1__::func_723(0);
	UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(0, "");
	if (__LIB_6__::func_863(cParam0) == 0)
	{
		__LIB_5__::func_370(Global_1835011[cParam0->f_607 /*74*/].f_1);
	}
	__LIB_5__::func_102();
	if (!TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_PLAYER_SEAT_LEDGE"))
	{
		TASK::_SET_SCENARIO_TYPE_ENABLED_HASH(joaat("WORLD_PLAYER_SEAT_LEDGE"), true);
	}
	if (!bParam1)
	{
		switch (__LIB_6__::func_863(cParam0))
		{
			case 0:
				if (!CAM::IS_SCREEN_FADED_IN())
				{
					if ((!CAM::IS_SCREEN_FADING_IN() && !__LIB_6__::func_861(cParam0, 4)) && !__LIB_6__::func_861(cParam0, 2))
					{
						CAM::DO_SCREEN_FADE_IN(1000);
					}
				}
				func_74(cParam0);
				__LIB_8__::func_723(cParam0);
				__LIB_0__::func_297();
				__LIB_5__::func_496(__LIB_0__::func_12(), 0);
				if (__LIB_0__::func_2() == 0)
				{
					__LIB_5__::func_103(0);
				}
				__LIB_5__::func_126(cParam0->f_607);
				bVar3 = __LIB_0__::func_513();
				if (!__LIB_0__::func_13(32768))
				{
					func_83(__LIB_3__::func_918(cParam0->f_607), !__LIB_6__::func_861(cParam0, 128), 1, bVar3, 1);
				}
				else
				{
					__LIB_1__::func_809(__LIB_3__::func_918(cParam0->f_607), bVar3);
				}
				__LIB_8__::func_703(cParam0, bParam1);
				if (cParam0->f_607 != 77)
				{
					UILOG::_UILOG_MARK_MISSION_COMPLETED(__LIB_9__::func_41(cParam0));
				}
				__LIB_1__::func_140();
				if (__LIB_0__::func_13(32768))
				{
					CAM::DO_SCREEN_FADE_OUT(0);
					__LIB_6__::func_833();
					__LIB_1__::func_141(0);
				}
				else if (__LIB_6__::func_861(cParam0, 2))
				{
					if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(0);
					}
					__LIB_1__::func_954(1);
					__LIB_5__::func_116();
					__LIB_0__::func_320(6);
					__LIB_0__::func_319(4096);
				}
				break;
			case 1:
			case 2:
			case 3:
			case 6:
				__LIB_1__::func_645(__LIB_3__::func_918(cParam0->f_607));
				__LIB_4__::func_942();
				if (__LIB_6__::func_863(cParam0) == 2)
				{
					__LIB_0__::func_15(__LIB_0__::func_14(joaat("DEATHS_ON_CURRENT_DEED")), 1);
				}
				LAW::_0x55F37F5F3F2475E1();
				LAW::_0x062B4A4A3396351D(PLAYER::GET_PLAYER_INDEX());
				LAW::_0x07E8B8B20570271C(PLAYER::GET_PLAYER_INDEX());
				break;
			case 5:
				if (__LIB_0__::func_2() == 0)
				{
					__LIB_5__::func_103(0);
				}
				__LIB_4__::func_942();
				Var4 = { __LIB_0__::func_14(joaat("DEATHS_ON_CURRENT_DEED")) };
				STATS::_0x0FEE2561120F3333(&Var4);
				__LIB_1__::func_559(__LIB_3__::func_918(cParam0->f_607), 0, 2);
				break;
			default:
				func_83(__LIB_3__::func_918(cParam0->f_607), 1, 1, 0, 1);
				__LIB_1__::func_140();
				break;
		}
		if (__LIB_6__::func_863(cParam0) != 0)
		{
			Var6 = { __LIB_6__::func_867(cParam0) };
			__LIB_5__::func_117(__LIB_3__::func_918(cParam0->f_607), __LIB_6__::func_863(cParam0), &Var6, 0, 0, __LIB_6__::func_861(cParam0, 64));
		}
	}
	__LIB_4__::func_510(1);
	__LIB_5__::func_384(3);
	__LIB_6__::func_868(cParam0, 4096);
	return true;
}

void func_4(var uParam0, char[4] cParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	PED::_0xED9582B3DA8F02B4(20);
	cParam1->f_608 = uParam0->f_1;
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	if (!__LIB_0__::func_2() == 0)
	{
		if (ITEMSET::IS_ITEMSET_VALID(Global_43616) && ITEMSET::GET_ITEMSET_SIZE(Global_43616) > 0)
		{
			iVar1 = 0;
			while (iVar1 < ITEMSET::GET_ITEMSET_SIZE(Global_43616))
			{
				iVar2 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, Global_43616);
				iVar3 = MISC::_GET_ENTITY_FROM_ITEM(iVar2);
				if (((!ENTITY::IS_ENTITY_DEAD(iVar3) && ENTITY::IS_ENTITY_A_PED(iVar3)) && !ITEMSET::IS_IN_ITEMSET(iVar2, iVar0)) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3) != Global_35)
				{
					ITEMSET::ADD_TO_ITEMSET(iVar2, iVar0);
				}
				iVar1++;
			}
		}
	}
	__LIB_9__::func_248(cParam1);
	if (!__LIB_0__::func_2() == 0)
	{
		if (__LIB_5__::func_23(cParam1) > 0)
		{
			iVar4 = 0;
			while (iVar4 < cParam1->f_7375.f_13)
			{
				if (((!ENTITY::IS_ENTITY_DEAD(cParam1->f_7375.f_13[iVar4 /*12*/]) && ENTITY::IS_ENTITY_A_PED(cParam1->f_7375.f_13[iVar4 /*12*/])) && !ITEMSET::IS_IN_ITEMSET(cParam1->f_7375.f_13[iVar4 /*12*/], iVar0)) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(cParam1->f_7375.f_13[iVar4 /*12*/]) != Global_35)
				{
					ITEMSET::ADD_TO_ITEMSET(cParam1->f_7375.f_13[iVar4 /*12*/], iVar0);
				}
				iVar4++;
			}
		}
	}
	if (ITEMSET::GET_ITEMSET_SIZE(iVar0) > 0)
	{
		PED::_0xF008E0BA1FE1D644(ITEMSET::GET_ITEMSET_SIZE(iVar0));
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	if (__LIB_4__::func_511())
	{
		__LIB_6__::func_869(cParam1, 4194304);
	}
	if (__LIB_4__::func_512())
	{
		__LIB_6__::func_869(cParam1, 8388608);
	}
	if (__LIB_5__::func_371())
	{
		if (!__LIB_4__::func_512() && !__LIB_4__::func_511())
		{
			__LIB_6__::func_869(cParam1, 4);
		}
		else
		{
			if (__LIB_4__::func_512())
			{
			}
			if (__LIB_4__::func_511())
			{
			}
		}
		__LIB_6__::func_870(cParam1, __LIB_4__::func_513());
	}
	func_108(cParam1, uParam0);
	func_109(cParam1);
	if (cParam1->f_13105 > PED::_0x62DE46F061CAA468())
	{
		PED::_0xF008E0BA1FE1D644((cParam1->f_13105 - PED::_0x62DE46F061CAA468()));
	}
}

void func_5(char[4] cParam0)
{
	char[] cVar0[8];
	int iVar1;
	struct<4> Var2;
	char[] cVar6[8];
	cVar0 = __LIB_0__::func_631(cParam0->f_607);
	HUD::SET_MISSION_NAME(true, &cVar0);
	if (!MISC::GET_MISSION_FLAG())
	{
		MISC::SET_MISSION_FLAG(true);
	}
	MISC::_0x1096603B519C905F(&cVar0);
	if (cParam0->f_607 != 77)
	{
		__LIB_0__::func_496();
		__LIB_1__::func_323(&cVar0, 0);
	}
	UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
	__LIB_0__::func_105(1);
	__LIB_2__::func_459();
	MISC::_0xA565FAC215CBC77D();
	SCRIPTS::SHUTDOWN_LOADING_SCREEN();
	__LIB_0__::func_769();
	__LIB_0__::func_267(__LIB_6__::func_871(cParam0));
	LAW::_0x55F37F5F3F2475E1();
	LAW::_0x292AD61A33A7A485();
	if ((LAW::_0xF46108C50A22B029() && !Global_43891) && !__LIB_0__::func_730(__LIB_0__::func_12()))
	{
		POPULATION::_0x2161278C6322F740(16384, 0, 0, -1, -1, 0);
	}
	__LIB_0__::func_112(1, 0, 1);
	POPULATION::_0x2161278C6322F740(4096, 0, 0, -1, -1, 0);
	VEHICLE::DELETE_ALL_TRAINS();
	VEHICLE::SET_RANDOM_TRAINS(false);
	__LIB_1__::func_600(0);
	__LIB_4__::func_514(cParam0);
	AUDIO::_0x33D51F801CB16E4F();
	if (!Global_1935630.f_12)
	{
		__LIB_0__::func_145(0, 0);
		PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
		if (!__LIB_6__::func_872(cParam0, 16384) && (__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 2) || __LIB_5__::func_371()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 0, false);
		}
		PED::CLEAR_PED_WETNESS(Global_35);
		PED::CLEAR_PED_BLOOD_DAMAGE(Global_35);
		GRAPHICS::REMOVE_PARTICLE_FX_FROM_ENTITY(Global_35);
		if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar1, true, 0, false))
		{
			if ((((WEAPON::_0x2C83212A7AA51D3D(iVar1) || iVar1 == joaat("OBJECT_1")) || iVar1 == joaat("OBJECT_2")) || iVar1 == joaat("OBJECT_3")) || iVar1 == joaat("OBJECT_4"))
			{
				if (!__LIB_5__::func_371() && !__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 2))
				{
				}
			}
			else if (!__LIB_0__::func_214(iVar1) && !__LIB_0__::func_13(32768))
			{
				WEAPON::REMOVE_WEAPON_FROM_PED(Global_35, iVar1, true, -142743235);
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
			}
		}
		WEAPON::_0xB832F1A686B9B810(Global_35, false, 0);
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, true);
		func_123(cParam0);
	}
	__LIB_1__::func_564(1);
	__LIB_1__::func_600(0);
	__LIB_6__::func_873(cParam0, joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT"));
	iLocal_15 = __LIB_6__::func_874(cParam0);
	iLocal_15 = iLocal_15;
	if (!Global_1935630.f_12)
	{
		if (!__LIB_5__::func_371())
		{
			Var2 = { func_34(__LIB_6__::func_864(cParam0)) };
			if (__LIB_6__::func_864(cParam0) != 0)
			{
				Var2 = { __LIB_1__::func_469(cParam0->f_607) };
			}
			if (!func_127(Var2))
			{
				__LIB_6__::func_869(cParam0, 1048576);
			}
			__LIB_6__::func_870(cParam0, 0);
			if (__LIB_6__::func_875(cParam0, 3) || __LIB_1__::func_195())
			{
				__LIB_9__::func_59(cParam0, __LIB_1__::func_469(cParam0->f_607), 0);
			}
		}
		else
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
				ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true);
				__LIB_3__::func_618(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 5000f, 1, 0, 0, 0, 0);
			}
			__LIB_6__::func_870(cParam0, __LIB_4__::func_513());
		}
		TELEMETRY::_TELEMETRY_MISSION_STARTED(&(Global_1835011[cParam0->f_607 /*74*/].f_8), 0, __LIB_5__::func_24(__LIB_6__::func_864(cParam0)), __LIB_5__::func_371());
	}
	__LIB_9__::func_187(cParam0);
	__LIB_6__::func_876(cParam0, 0);
	__LIB_9__::func_60(cParam0, 0);
	if (!__LIB_8__::func_659(cParam0, __LIB_6__::func_864(cParam0)))
	{
		__LIB_6__::func_870(cParam0, 0);
	}
	__LIB_8__::func_706(cParam0);
	__LIB_6__::func_922(cParam0);
	func_139(cParam0);
	__LIB_6__::func_869(cParam0, 2097152);
	__LIB_8__::func_707(cParam0, __LIB_6__::func_864(cParam0), 134217728);
	if (__LIB_0__::func_13(32768))
	{
		__LIB_6__::func_860(cParam0, 4);
	}
	__LIB_0__::func_11(cParam0);
	__LIB_8__::func_718(cParam0, __LIB_6__::func_864(cParam0));
	__LIB_5__::func_105(__LIB_6__::func_866(cParam0));
	if (!__LIB_6__::func_872(cParam0, 65536))
	{
		__LIB_5__::func_178(__LIB_6__::func_866(cParam0));
	}
	__LIB_9__::func_42(cParam0, PLAYER::PLAYER_PED_ID(), "ARTHUR", 0);
	__LIB_8__::func_660(cParam0);
	__LIB_9__::func_61(cParam0);
	__LIB_0__::func_11(cParam0);
	__LIB_8__::func_661(cParam0, 30f);
	__LIB_8__::func_662(cParam0, 40f);
	__LIB_9__::func_154(cParam0, Global_35, 0, 0, 0, 0, 0);
	__LIB_4__::func_510(0);
	AUDIO::_0xA6A3A3F96B8B030E();
	__LIB_1__::func_723(1);
	UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(2, "");
	if (cParam0->f_607 != 77)
	{
		cVar6 = __LIB_0__::func_631(cParam0->f_607);
		UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(1, MISC::GET_HASH_KEY(&cVar6), 0, "");
	}
	if (TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_PLAYER_SEAT_LEDGE"))
	{
		TASK::_SET_SCENARIO_TYPE_ENABLED_HASH(joaat("WORLD_PLAYER_SEAT_LEDGE"), false);
	}
}

void func_7(char[4] cParam0)
{
	var uVar0;
	if ((LAW::_0xF46108C50A22B029() && !Global_43891) && !__LIB_0__::func_730(__LIB_0__::func_12()))
	{
		POPULATION::_0xF45E46DEECF7DF6E(16384, 0, 0, -1, -1);
	}
	if (!__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 16384))
	{
		__LIB_4__::func_515();
	}
	if (!__LIB_6__::func_862(cParam0, 32768))
	{
		POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	}
	if (!__LIB_6__::func_862(cParam0, 2048))
	{
		__LIB_4__::func_516(1, 0);
	}
	switch (__LIB_6__::func_877(cParam0))
	{
		case -1:
			break;
		case 0:
			MemCopy(&uVar0, {__LIB_4__::func_681(__LIB_6__::func_866(cParam0))}, 4);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&uVar0))
			{
				__LIB_6__::func_869(cParam0, 64);
			}
			func_156(cParam0, 0);
			__LIB_0__::func_16(cParam0);
			if (func_158(cParam0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(__LIB_6__::func_878(cParam0)) && __LIB_6__::func_875(cParam0, 3))
				{
					ENTITY::FREEZE_ENTITY_POSITION(__LIB_6__::func_878(cParam0), false);
				}
				__LIB_6__::func_879(cParam0, 1);
			}
			if (__LIB_6__::func_861(cParam0, -2147483648))
			{
				__LIB_6__::func_879(cParam0, 2);
			}
			break;
		case 1:
			if (func_161(cParam0))
			{
				__LIB_6__::func_860(cParam0, -2147483648);
				__LIB_6__::func_879(cParam0, 2);
			}
			func_156(cParam0, __LIB_8__::func_663(cParam0, __LIB_6__::func_864(cParam0)) > 4);
			break;
		case 2:
			if (func_2(cParam0, 0))
			{
				__LIB_6__::func_860(cParam0, -2147483648);
				__LIB_6__::func_879(cParam0, 3);
			}
			break;
		case 3:
			SCRIPTS::TERMINATE_THIS_THREAD();
			break;
	}
	if (__LIB_6__::func_877(cParam0) < 2)
	{
	}
}

bool func_9(char[4] cParam0)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_72, false, false))
	{
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_72, false);
	}
	__LIB_5__::func_509(uLocal_46[0], 1, 1);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	func_164(0);
	AUDIO::STOP_PED_SPEAKING(uLocal_46[0], false);
	if (__LIB_6__::func_904())
	{
		__LIB_5__::func_20(0, 0);
	}
	if (__LIB_6__::func_863(cParam0) == 0)
	{
		__LIB_9__::func_469(100f);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		if (__LIB_6__::func_863(cParam0) == 0)
		{
		}
		else
		{
			PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "MAR2_POSSE");
			PLAYER::RESET_PLAYER_INPUT_GAIT(PLAYER::GET_PLAYER_INDEX());
		}
		WEAPON::_0x78030C7867D8B9B6(Global_35, 1);
		func_167();
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
		}
	}
	func_168();
	func_169(1);
	__LIB_4__::func_193(883);
	__LIB_4__::func_193(884);
	__LIB_4__::func_193(943);
	__LIB_4__::func_193(485);
	__LIB_4__::func_193(477);
	__LIB_4__::func_193(943);
	__LIB_0__::func_121(883, 32);
	__LIB_0__::func_121(884, 32);
	__LIB_0__::func_121(943, 32);
	__LIB_0__::func_121(485, 32);
	__LIB_0__::func_121(477, 32);
	__LIB_0__::func_121(943, 32);
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_93[0]))
	{
		POPULATION::_0xA1CFB35069D23C23(iLocal_93[0]);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_93[0]))
	{
		POPULATION::_0x74C2B3DC0B294102(iLocal_93[0]);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_93[19]))
	{
		__LIB_3__::func_59(iLocal_93[19]);
	}
	func_173(0);
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_93[5]))
	{
		PATHFIND::_0xD17672447692478E(iLocal_93[5], 0);
	}
	func_174(1);
	func_175(1);
	MAP::CLEAR_GPS_CUSTOM_ROUTE();
	MAP::SET_GPS_CUSTOM_ROUTE_RENDER(false, 0, 0);
	func_176(cParam0);
	func_177();
	func_178();
	func_179();
	func_180();
	func_181(cParam0);
	func_182(cParam0);
	func_183(cParam0);
	func_184();
	func_185();
	__LIB_4__::func_932(65, 1);
	__LIB_3__::func_820(65, 0);
	__LIB_4__::func_932(64, 1);
	__LIB_3__::func_820(64, 0);
	__LIB_6__::func_350(64, 22, 0, 1);
	ENTITY::REMOVE_MODEL_HIDE(-1773.528f, -393.6541f, 155.5415f, 0.5f, joaat("P_NEWSPAPERSTACK01X"), 0);
	LAW::_0x15ABD5004CAD2D99(-1);
	LAW::_0x710448D44A64C213(1);
	GRAPHICS::_0x9CF1836C03FB67A2(&uLocal_337, 1);
	__LIB_2__::func_279(Global_35, 0);
	__LIB_13__::func_862();
	PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), false, 0, -1, false);
	PED::SET_PED_CONFIG_FLAG(Global_35, 446, false);
	PED::SET_PED_CONFIG_FLAG(Global_35, 445, false);
	MISC::_SET_WEATHER_TYPE_FROZEN(false);
	ENTITY::_0x18FF3110CF47115D(Global_35, 9, 1);
	__LIB_8__::func_807(0, 1103626240 /* Float: 25f */);
	return true;
}

struct<4> func_34(int iParam0)
{
	struct<4> Var0;
	if (iParam0 == 0)
	{
		__LIB_4__::func_954(&Var0, func_228(0, 0));
	}
	else if (iParam0 == 1)
	{
		if (__LIB_10__::func_892(1))
		{
			__LIB_4__::func_954(&Var0, func_228(1, 1));
		}
		else
		{
			__LIB_4__::func_954(&Var0, func_228(1, 0));
		}
	}
	else if (iParam0 == 2)
	{
		if (__LIB_10__::func_892(2))
		{
			__LIB_4__::func_954(&Var0, func_228(2, 3));
		}
		else if (__LIB_10__::func_892(4))
		{
			__LIB_4__::func_954(&Var0, func_228(2, 6));
		}
		else
		{
			__LIB_4__::func_954(&Var0, func_228(2, 0));
		}
	}
	else if (iParam0 == 3)
	{
		__LIB_4__::func_954(&Var0, func_228(3, 0));
	}
	else if (iParam0 == 4)
	{
		__LIB_4__::func_954(&Var0, func_228(4, 0));
	}
	else if (iParam0 == 5)
	{
		if (__LIB_10__::func_892(1))
		{
			__LIB_4__::func_954(&Var0, func_228(5, 1));
		}
		else
		{
			__LIB_4__::func_954(&Var0, func_228(5, 0));
		}
	}
	else if (iParam0 == 6)
	{
		__LIB_4__::func_954(&Var0, func_228(6, 0));
	}
	else if (iParam0 == 7)
	{
		__LIB_4__::func_954(&Var0, func_228(7, 0));
	}
	else if (iParam0 == 8)
	{
		__LIB_4__::func_954(&Var0, func_228(8, 0));
	}
	else if (iParam0 == 9)
	{
		__LIB_4__::func_954(&Var0, func_228(9, 0));
	}
	else if (iParam0 == 10)
	{
		__LIB_4__::func_954(&Var0, func_228(10, 0));
	}
	else if (iParam0 == 25)
	{
		__LIB_4__::func_954(&Var0, func_228(11, 0));
	}
	return Var0;
}

void func_74(char[4] cParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	if (__LIB_0__::func_2() == 0)
	{
		return;
	}
	iVar0 = __LIB_6__::func_864(cParam0);
	iVar1 = __LIB_8__::func_663(cParam0, iVar0);
	bVar2 = false;
	if (iVar1 == 5 || iVar1 == 6)
	{
		bVar2 = true;
	}
	iVar3 = 0;
	if (!bVar2)
	{
		if (__LIB_8__::func_587(cParam0) == 0 && iVar0 == 0)
		{
			iVar3 = 1;
		}
	}
	iVar4 = 0;
	if (!bVar2)
	{
		if (__LIB_6__::func_863(cParam0) == 0)
		{
			iVar4 = 1;
		}
	}
	if (iVar3 || iVar4)
	{
		__LIB_5__::func_109(iVar3, iVar4);
	}
	if (bVar2)
	{
		func_287(cParam0);
	}
}

void func_83(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
					__LIB_4__::func_467(14, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
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
						func_326();
						func_327(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
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
							func_83(Global_1347702[21 /*49*/].f_15, 0, 0, 0, 0);
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
							func_83(Global_1347702[82 /*49*/].f_15, 0, 0, 0, 0);
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
							func_83(Global_1347702[83 /*49*/].f_15, 0, 0, 0, 0);
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
						__LIB_5__::func_337(89200);
						__LIB_5__::func_337(2300);
						__LIB_5__::func_337(2300);
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
						__LIB_5__::func_337(-139100);
						break;
					case 69:
						if (__LIB_1__::func_25(Global_1347702[9 /*49*/].f_15, 1))
						{
							__LIB_5__::func_337(-6000);
						}
						break;
					case 70:
						__LIB_5__::func_337(23400);
						__LIB_5__::func_337(1900);
						__LIB_5__::func_337(-15000);
						break;
					case 71:
						__LIB_5__::func_337(-5500);
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
							__LIB_5__::func_337(40500);
						}
						else
						{
							__LIB_0__::func_316(0);
							__LIB_5__::func_337(46500);
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
		func_365();
		switch (iVar0)
		{
			case 1:
				switch (__LIB_0__::func_76(iParam0))
				{
					case 4:
						__LIB_5__::func_387(iParam0, 1000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 61:
					case 62:
					case 63:
						__LIB_5__::func_387(iParam0, 300, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 25:
						__LIB_5__::func_387(iParam0, 150000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 12:
						__LIB_5__::func_387(iParam0, 120000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 53:
						__LIB_5__::func_387(iParam0, 90000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 20:
						__LIB_5__::func_387(iParam0, 85000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 19:
						__LIB_5__::func_387(iParam0, 70000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 24:
						iVar18 = __LIB_0__::func_895(iParam0);
						__LIB_5__::func_387(iParam0, iVar18, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 28:
						__LIB_5__::func_387(iParam0, 45000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 34:
						__LIB_5__::func_387(iParam0, 600000, 1, 0.5f, 4, 0, 0, 1);
						if (!__LIB_1__::func_707(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0))
						{
							func_324(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						}
						break;
					case 29:
						__LIB_5__::func_387(iParam0, 4600, 1, 0f, 3, 0, 0, 1);
						break;
					case 37:
						break;
					case 58:
						break;
					case 57:
						__LIB_5__::func_387(iParam0, 2100000, 1, 0.9047619f, 8, 0, 0, 1);
						break;
					case 76:
						__LIB_5__::func_387(iParam0, 2042100, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 72:
						if (__LIB_0__::func_895(iParam0) == 0)
						{
							__LIB_5__::func_387(iParam0, 20000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						}
						else
						{
							__LIB_5__::func_387(iParam0, 15000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
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
						__LIB_5__::func_387(iParam0, 1500, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 55:
						__LIB_0__::func_896(8, 1);
						break;
					case 138:
						MISC::SET_BIT(&(Global_40.f_9052), 1);
						MISC::SET_BIT(&(Global_40.f_9052), 3);
						break;
					case 94:
						__LIB_5__::func_387(iParam0, 30000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 63:
						__LIB_5__::func_387(iParam0, 60000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 37:
						__LIB_5__::func_387(iParam0, 75000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 116:
						__LIB_5__::func_387(iParam0, 25000, 1, 0.5f, 1, 0, 0, 1);
						break;
					case 9:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ANSEL_ATHERTON"));
						break;
				}
				break;
			case 11:
				if (iParam0 == __LIB_1__::func_293(0, 10, 11, joaat("CABR01")))
				{
					__LIB_5__::func_387(iParam0, __LIB_0__::func_895(iParam0), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == __LIB_1__::func_293(0, 7, 11, joaat("CACR02")))
				{
					__LIB_5__::func_387(iParam0, __LIB_1__::func_794(9), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == __LIB_1__::func_293(0, 8, 11, joaat("CACR03")))
				{
					__LIB_5__::func_387(iParam0, __LIB_1__::func_794(10), 1, 0.5f, 2, 0, 0, 1);
				}
				else if (iParam0 == __LIB_1__::func_293(0, 11, 11, joaat("CACR01")))
				{
					__LIB_5__::func_387(iParam0, __LIB_1__::func_794(8), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == __LIB_1__::func_293(0, 12, 11, joaat("CACR04")))
				{
					__LIB_5__::func_387(iParam0, __LIB_1__::func_794(11), 1, 0.5f, 2, 0, 0, 1);
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

void func_108(char[4] cParam0, var uParam1)
{
	cParam0->f_607 = -1;
	func_389(cParam0);
	cParam0->f_634[0] = 57841;
	cParam0->f_634[1] = 57841;
	cParam0->f_637 = 0;
	__LIB_6__::func_883(cParam0, *uParam1);
	func_392(cParam0);
}

void func_109(char[4] cParam0)
{
	int iVar0;
	func_393(cParam0, 6418928);
	__LIB_8__::func_762(cParam0, 18);
	__LIB_6__::func_869(cParam0, 1);
	if (!__LIB_5__::func_371() && !__LIB_6__::func_875(cParam0, 2))
	{
		iVar0 = 0;
		while (iVar0 <= (17 - 1))
		{
			if (iVar0 == 0)
			{
				iLocal_75[iVar0] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(__LIB_5__::func_34(cParam0, joaat("P_CS_POTATOSLICE01X"), 0));
			}
			else if (iVar0 == 1)
			{
				iLocal_75[iVar0] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(__LIB_5__::func_34(cParam0, joaat("P_KNIFE01X"), 0));
			}
			else if (iVar0 == 4)
			{
				iLocal_75[iVar0] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(__LIB_5__::func_34(cParam0, joaat("P_PLATE01X"), 0));
			}
			else if (iVar0 == 6)
			{
				iLocal_75[iVar0] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(__LIB_5__::func_34(cParam0, joaat("P_CS_BOOKHARDCV08X"), 0));
			}
			else if (iVar0 == 2)
			{
				iLocal_75[iVar0] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(__LIB_5__::func_34(cParam0, joaat("P_MUGCOFFEE01X"), 0));
			}
			else if (iVar0 == 3)
			{
				iLocal_75[iVar0] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(__LIB_5__::func_34(cParam0, joaat("P_PAN01X"), 0));
			}
			else if (iVar0 == 5)
			{
				iLocal_75[iVar0] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(__LIB_5__::func_34(cParam0, joaat("P_SPOONMID01X"), 0));
			}
			else if (iVar0 == 7)
			{
				iLocal_75[iVar0] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(__LIB_5__::func_34(cParam0, joaat("P_BOILER01X"), 0));
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_75[iVar0]))
			{
				__LIB_9__::func_62(cParam0, iLocal_75[iVar0], __LIB_1__::func_435(iLocal_75[iVar0]), 0, 0, 0, 0);
			}
			iVar0++;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_72))
		{
			iLocal_72 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(__LIB_5__::func_34(cParam0, joaat("UTILLIWAG"), 0));
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_72))
			{
				__LIB_9__::func_62(cParam0, iLocal_72, "UTILLIWAG", 0, 0, 0, 0);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_72, true);
				iLocal_49 = func_398();
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_49))
				{
					func_399();
				}
			}
		}
	}
}

void func_123(char[4] cParam0)
{
	if (__LIB_0__::func_91())
	{
		func_402(&(cParam0->f_7375));
	}
}

bool func_127(struct<4> Param0)
{
	if (__LIB_0__::func_13(32768))
	{
		return true;
	}
	return func_404(Param0, Param0.f_3);
}

int func_139(char[4] cParam0)
{
	__LIB_9__::func_43(cParam0, joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT"), ((iLocal_33 || iLocal_34) || iLocal_35));
	__LIB_9__::func_43(cParam0, joaat("A_C_HORSE_MORGAN_BAY"), ((iLocal_33 || iLocal_34) || iLocal_35));
	__LIB_9__::func_43(cParam0, joaat("A_C_HORSE_MORGAN_PALOMINO"), ((iLocal_33 || iLocal_34) || iLocal_35));
	__LIB_9__::func_43(cParam0, joaat("UTILLIWAG"), 67108863);
	__LIB_9__::func_43(cParam0, joaat("A_C_HORSE_SUFFOLKPUNCH_REDCHESTNUT"), 67108863);
	__LIB_9__::func_43(cParam0, joaat("P_CS_BOOKHARDCV08X"), iLocal_28);
	__LIB_9__::func_43(cParam0, joaat("P_CS_POTATOSLICE01X"), iLocal_28);
	__LIB_9__::func_43(cParam0, joaat("P_KNIFE01X"), iLocal_28);
	__LIB_9__::func_43(cParam0, joaat("P_MUGCOFFEE01X"), iLocal_28);
	__LIB_9__::func_43(cParam0, joaat("P_PAN01X"), iLocal_28);
	__LIB_9__::func_43(cParam0, joaat("P_PLATE01X"), iLocal_28);
	__LIB_9__::func_43(cParam0, joaat("P_SPOONMID01X"), iLocal_28);
	__LIB_9__::func_43(cParam0, joaat("P_BOILER01X"), iLocal_28);
	__LIB_9__::func_43(cParam0, joaat("MES_MARSTON2_MALES_01"), ((((iLocal_30 || iLocal_31) || iLocal_32) || iLocal_34) || iLocal_35));
	__LIB_9__::func_43(cParam0, joaat("P_AMB_CLIPBOARD_01"), ((iLocal_30 || iLocal_31) || iLocal_32));
	__LIB_9__::func_43(cParam0, joaat("P_CS_LEDGER01X"), ((iLocal_30 || iLocal_31) || iLocal_32));
	__LIB_9__::func_43(cParam0, joaat("P_LETTERBUNDLE_01X"), ((iLocal_30 || iLocal_31) || iLocal_32));
	__LIB_9__::func_43(cParam0, joaat("P_LETTERENVELOPE_CS01X"), ((iLocal_30 || iLocal_31) || iLocal_32));
	__LIB_9__::func_43(cParam0, joaat("P_CS_SACKLARGE01X"), ((iLocal_30 || iLocal_31) || iLocal_32));
	__LIB_9__::func_43(cParam0, joaat("P_CRATE03X"), ((iLocal_30 || iLocal_31) || iLocal_32));
	__LIB_9__::func_43(cParam0, joaat("P_PACKAGE08X"), ((iLocal_30 || iLocal_31) || iLocal_32));
	__LIB_9__::func_43(cParam0, joaat("P_PEN01X"), ((iLocal_30 || iLocal_31) || iLocal_32));
	__LIB_9__::func_43(cParam0, joaat("U_M_M_STRFREIGHTSTATIONOWNER_01"), (((iLocal_30 || iLocal_31) || iLocal_32) || iLocal_33));
	__LIB_9__::func_43(cParam0, joaat("S_M_O_CKTWORKER_01"), (iLocal_33 || iLocal_34));
	__LIB_9__::func_43(cParam0, joaat("G_M_M_UNIRANCHERS_01"), iLocal_30);
	__LIB_9__::func_43(cParam0, joaat("S_M_M_STRCOWPOKE_01"), iLocal_30);
	__LIB_9__::func_43(cParam0, joaat("A_C_DOGBLUETICKCOONHOUND_01"), iLocal_33);
	__LIB_9__::func_43(cParam0, joaat("CHUCKWAGON000X"), iLocal_30);
	__LIB_9__::func_43(cParam0, joaat("A_M_M_BIVROUGHTRAVELLERS_01"), iLocal_30);
	func_422(cParam0, joaat("PG_MISSION_MARSTON2_POSTOFFICE01X"), (((((((iLocal_32 || iLocal_33) || iLocal_34) || iLocal_35) || iLocal_36) || iLocal_37) || iLocal_38) || iLocal_39));
	__LIB_8__::func_709(cParam0, "mar2_drive_out_ranch", iLocal_28, 2, -1);
	__LIB_8__::func_709(cParam0, "mar2_ride_ambush", ((iLocal_33 || iLocal_34) || iLocal_35), 2, -1);
	__LIB_8__::func_709(cParam0, "mar2_ride_ambush2", ((iLocal_33 || iLocal_34) || iLocal_35), 2, -1);
	__LIB_8__::func_709(cParam0, "mar2_drive_in_ranch", iLocal_38, 2, -1);
	__LIB_8__::func_709(cParam0, "mar2_ride_after_ambush", iLocal_37, 2, -1);
	__LIB_8__::func_709(cParam0, "mar2_dog", iLocal_33, 2, -1);
	__LIB_17__::func_728(cParam0, "script_respawn@horse@mounted_unarmed", (iLocal_33 || iLocal_34));
	__LIB_9__::func_237(cParam0, "script@story@MAR2@leadout@int@leadout", &(uLocal_202[0]), iLocal_28, 0, "pl_leadout", 0, 1);
	__LIB_9__::func_237(cParam0, "script@story@MAR2@IG@IG_2_GiveJackReins@IG_2_GiveJackReins", &(uLocal_202[1]), iLocal_29, 0, 0, 0, 1);
	__LIB_9__::func_237(cParam0, "script@story@MAR2@IG@IG_3_JohnExitWagon@IG_3_JohnExitWagon", &(uLocal_202[2]), iLocal_31, 0, 0, 0, 1);
	__LIB_9__::func_237(cParam0, "script@story@MAR2@IG@IG_5_JackDrivesWagon@IG_5_JackDrivesWagon", &(uLocal_202[4]), iLocal_32, 0, 0, 0, 1);
	__LIB_9__::func_237(cParam0, "script@story@MAR2@IG@IG_6_JackTurnsLeft@IG_6_JackTurnsLeft", &(uLocal_202[5]), iLocal_34, 0, "pbl_jack_fakes_turns", 0, 1);
	__LIB_9__::func_237(cParam0, "script@story@MAR2@IG@IG_7_JackHidesinForest@base", &(uLocal_202[6]), (iLocal_35 || iLocal_36), 0, "pbl_base", 0, 1);
	__LIB_9__::func_237(cParam0, func_426(), &(uLocal_202[7]), iLocal_35, 0, "pl_ig9_posse_enter", 0, 1);
	__LIB_9__::func_237(cParam0, "script@story@mar2@leadout@ext@base", &(uLocal_202[8]), iLocal_39, 0, 0, 0, 1);
	__LIB_9__::func_237(cParam0, "script@story@mar2@leadin@mcs_2@leadin_ilo", &(uLocal_202[9]), (iLocal_30 || iLocal_31), 0, 0, 0, 1);
	__LIB_9__::func_237(cParam0, "script@story@mar2@leadin@mcs_2@base_criminalped", &(uLocal_202[10]), (iLocal_30 || iLocal_31), 0, 0, 0, 1);
	__LIB_9__::func_237(cParam0, "script@proc@roamingthugs@laramie@action", &(uLocal_202[11]), iLocal_30, 0, 0, 0, 1);
	func_427(cParam0, "CLIPSET@VEH_WAGON@STANDARD@FRONT@FL@IN_SEAT@MALE@SWAPREINS", (iLocal_29 || iLocal_30));
	func_427(cParam0, "CLIPSET@VEH_WAGON@STANDARD@FRONT@FR@IN_SEAT@MALE@SWAPREINS", (iLocal_29 || iLocal_30));
	__LIB_9__::func_238(cParam0, uLocal_202[7], func_428(0), iLocal_35);
	__LIB_9__::func_238(cParam0, uLocal_202[7], func_428(1), iLocal_35);
	__LIB_9__::func_238(cParam0, uLocal_202[7], func_428(2), iLocal_35);
	__LIB_9__::func_238(cParam0, uLocal_202[9], "pl_leadin", (iLocal_30 || iLocal_31));
	__LIB_9__::func_238(cParam0, uLocal_202[10], "pl_loop", (iLocal_30 || iLocal_31));
	__LIB_9__::func_238(cParam0, uLocal_202[11], "PL_ACTION", iLocal_30);
	return 1;
}

void func_156(char[4] cParam0, bool bParam1)
{
	bool bVar0;
	if (!__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 134217728))
	{
		func_139(cParam0);
		__LIB_8__::func_707(cParam0, __LIB_6__::func_864(cParam0), 134217728);
	}
	if (bParam1 && !__LIB_8__::func_705(cParam0, __LIB_9__::func_40(cParam0), 536870912))
	{
		if (__LIB_9__::func_65(cParam0, __LIB_9__::func_40(cParam0), 0))
		{
			__LIB_8__::func_707(cParam0, __LIB_9__::func_40(cParam0), 536870912);
		}
	}
	if (__LIB_6__::func_862(cParam0, 8192))
	{
		if (!__LIB_6__::func_862(cParam0, 536870912))
		{
			if (__LIB_5__::func_569(&(cParam0->f_1126), __LIB_6__::func_864(cParam0)))
			{
				__LIB_6__::func_868(cParam0, 536870912);
			}
		}
		return;
	}
	bVar0 = false;
	if (__LIB_9__::func_65(cParam0, __LIB_6__::func_864(cParam0), 1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		__LIB_6__::func_868(cParam0, 8192);
	}
}

bool func_158(char[4] cParam0)
{
	if (__LIB_6__::func_884(cParam0) < 1)
	{
		func_439(cParam0, __LIB_6__::func_875(cParam0, 3), !__LIB_6__::func_862(cParam0, 2097152), cParam0->f_5410, !__LIB_6__::func_862(cParam0, 32), 0);
		func_440(cParam0, 1, cParam0->f_5413, cParam0->f_5413.f_1, cParam0->f_5413.f_2, cParam0->f_5416, 1, 1, 1);
	}
	if ((!__LIB_6__::func_872(cParam0, 4) && !__LIB_5__::func_371()) && !__LIB_6__::func_875(cParam0, 3))
	{
		if (!__LIB_6__::func_872(cParam0, 32))
		{
			if (__LIB_0__::func_2() == 0)
			{
				__LIB_6__::func_869(cParam0, 32);
			}
			else
			{
				func_441(cParam0);
			}
		}
		if (__LIB_6__::func_872(cParam0, 32))
		{
			func_442(cParam0);
		}
	}
	switch (__LIB_6__::func_884(cParam0))
	{
		case -1:
		case 0:
			__LIB_6__::func_885(cParam0, 1);
			break;
		case 1:
			if (func_444(cParam0))
			{
				if (__LIB_6__::func_872(cParam0, 4096))
				{
					__LIB_6__::func_885(cParam0, 2);
				}
				else
				{
					__LIB_6__::func_885(cParam0, 3);
				}
			}
			break;
		case 2:
			if (__LIB_9__::func_66(cParam0))
			{
				__LIB_6__::func_885(cParam0, 3);
			}
			break;
		case 3:
			if (func_446(cParam0))
			{
				__LIB_6__::func_885(cParam0, 4);
			}
			break;
		case 4:
			return true;
	}
	return false;
}

bool func_161(char[4] cParam0)
{
	int iVar0;
	if (__LIB_6__::func_864(cParam0) == 26)
	{
		__LIB_6__::func_886(cParam0, 0);
		return true;
	}
	if (func_448(cParam0))
	{
		iVar0 = __LIB_6__::func_864(cParam0);
		__LIB_6__::func_870(cParam0, __LIB_9__::func_40(cParam0));
		if (__LIB_6__::func_864(cParam0) == 26)
		{
			__LIB_6__::func_886(cParam0, 0);
			return true;
		}
		else if (__LIB_8__::func_705(cParam0, iVar0, 128))
		{
			func_448(cParam0);
		}
	}
	return false;
}

void func_164(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uLocal_46[0]))
	{
		return;
	}
	if (PED::_0x7C8AA850617651D9(uLocal_46[0], joaat("MAR2_RIDE1")))
	{
		PED::_0x2B4CE170DE09F346(uLocal_46[0], joaat("MAR2_RIDE1"));
	}
	if (PED::_0x7C8AA850617651D9(uLocal_46[0], joaat("MAR2_RIDE2")))
	{
		PED::_0x2B4CE170DE09F346(uLocal_46[0], joaat("MAR2_RIDE2"));
	}
	AUDIO::_0x660A8F876DF1D4F8(8);
	AUDIO::_0x660A8F876DF1D4F8(24);
	AUDIO::_0x660A8F876DF1D4F8(13);
	AUDIO::_0x660A8F876DF1D4F8(12);
	AUDIO::_0x660A8F876DF1D4F8(10);
	AUDIO::_0x660A8F876DF1D4F8(21);
	AUDIO::_0x660A8F876DF1D4F8(3);
	AUDIO::_0x660A8F876DF1D4F8(5);
	AUDIO::_0x660A8F876DF1D4F8(14);
	if (iParam0 == 0)
	{
	}
	else if (iParam0 == 1)
	{
		PED::_0x1E017404784AA6A3(uLocal_46[0], joaat("MAR2_RIDE1"));
	}
	else if (iParam0 == 2 || iParam0 == 3)
	{
		PED::_0x1E017404784AA6A3(uLocal_46[0], joaat("MAR2_RIDE2"));
	}
	if ((iParam0 == 1 || iParam0 == 2) || iParam0 == 3)
	{
		AUDIO::_0x0D7FD6A55FD63AEF(8, 3, 1);
		AUDIO::_0x0D7FD6A55FD63AEF(24, 3, 1);
		AUDIO::_0x0D7FD6A55FD63AEF(13, 3, 1);
		AUDIO::_0x0D7FD6A55FD63AEF(12, 3, 1);
		AUDIO::_0x0D7FD6A55FD63AEF(10, 3, iParam0 != 3);
		AUDIO::_0x0D7FD6A55FD63AEF(21, 3, 1);
		AUDIO::_0x0D7FD6A55FD63AEF(3, 3, 1);
		AUDIO::_0x0D7FD6A55FD63AEF(5, 3, 1);
		AUDIO::_0x0D7FD6A55FD63AEF(14, 3, 1);
	}
}

void func_167()
{
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, joaat("WEAPON_RIFLE_BOLTACTION"), 0, false))
		{
			__LIB_4__::func_677(joaat("WEAPON_RIFLE_BOLTACTION"));
		}
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, joaat("WEAPON_SHOTGUN_DOUBLEBARREL"), 0, false))
		{
			__LIB_4__::func_677(joaat("WEAPON_SHOTGUN_DOUBLEBARREL"));
		}
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, joaat("WEAPON_REPEATER_CARBINE"), 0, false))
		{
			__LIB_4__::func_677(joaat("WEAPON_REPEATER_CARBINE"));
		}
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, joaat("WEAPON_REPEATER_HENRY"), 0, false))
		{
			__LIB_4__::func_677(joaat("WEAPON_REPEATER_HENRY"));
		}
	}
}

void func_168()
{
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		_NAMESPACE29::_0x0EABF182FBB63D72(Global_35, 6, 0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_50[1]))
	{
		_NAMESPACE29::_0x0EABF182FBB63D72(iLocal_50[1], 6, 0);
	}
}

void func_169(bool bParam0)
{
	if (bParam0)
	{
		__LIB_8__::func_820(7);
		__LIB_8__::func_820(0);
		__LIB_8__::func_820(1);
	}
	else
	{
		__LIB_10__::func_897();
		__LIB_8__::func_810(7);
		__LIB_8__::func_810(0);
		__LIB_8__::func_810(1);
	}
}

void func_173(bool bParam0)
{
	int iVar0;
	iVar0 = 1;
	while (iVar0 <= 3)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_93[iVar0]))
		{
			if (bParam0)
			{
				__LIB_9__::func_364(iLocal_93[iVar0], 0, 0, 0);
			}
			else
			{
				__LIB_3__::func_59(iLocal_93[iVar0]);
			}
		}
		iVar0++;
	}
}

void func_174(int iParam0)
{
	int iVar0;
	iVar0 = 22;
	while (iVar0 <= 24)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_93[iVar0]))
		{
			PATHFIND::_0xF2A2177AC848B3A8(iLocal_93[iVar0], iParam0, 1);
		}
		iVar0++;
	}
}

void func_175(int iParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_93[14]))
	{
		PATHFIND::_0xF2A2177AC848B3A8(iLocal_93[14], iParam0, 1);
	}
}

void func_176(char[4] cParam0)
{
	__LIB_9__::func_254(cParam0, uLocal_46[0], 1);
	__LIB_0__::func_325(&iLocal_41);
	__LIB_3__::func_334(&uLocal_42);
}

void func_177()
{
	__LIB_0__::func_37(&uLocal_215);
	__LIB_0__::func_37(&uLocal_218);
	__LIB_0__::func_37(&uLocal_249);
	__LIB_0__::func_37(&uLocal_221);
	__LIB_11__::func_220(&vLocal_224);
	__LIB_11__::func_220(&vLocal_239);
	__LIB_11__::func_220(&vLocal_231);
	__LIB_11__::func_220(&uLocal_235);
}

void func_178()
{
	int iVar0[4];
	int iVar5;
	if (!func_466(18))
	{
		return;
	}
	iVar0[0] = 41;
	iVar0[1] = 19;
	iVar0[2] = 48;
	iVar0[3] = 37;
	iVar5 = 0;
	while (iVar5 < iVar0)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_93[iVar0[iVar5]]))
		{
			__LIB_3__::func_59(iLocal_93[iVar0[iVar5]]);
			PATHFIND::_0xE5EF9DE716FF737E(iLocal_93[iVar0[iVar5]], 1, 0);
		}
		iVar5++;
	}
	func_467(18, 0);
}

void func_179()
{
	int iVar0;
	if (PED::_0x91A5F9CBEBB9D936(uLocal_334))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_334, false);
	}
	if (PED::_0x91A5F9CBEBB9D936(uLocal_335))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_335, false);
	}
	iVar0 = 0;
	while (iVar0 < 71)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_93[iVar0]))
		{
			VOLUME::_DELETE_VOLUME(iLocal_93[iVar0]);
		}
		iVar0++;
	}
}

void func_180()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_468(iVar0);
		iVar0++;
	}
}

void func_181(char[4] cParam0)
{
	if (__LIB_6__::func_863(cParam0) == 0)
	{
	}
	if (PROPSET::_DOES_PROPSET_EXIST(iLocal_166))
	{
		PROPSET::_DELETE_PROPSET(iLocal_166, true, true);
	}
	func_469();
}

void func_182(char[4] cParam0)
{
	if (__LIB_6__::func_863(cParam0) == 0)
	{
		func_470(&iLocal_72, 0);
	}
	else
	{
		func_470(&iLocal_72, 0);
	}
}

void func_183(char[4] cParam0)
{
	int iVar0;
	if (__LIB_6__::func_863(cParam0) == 0)
	{
		iVar0 = 0;
		while (iVar0 <= (2 - 1))
		{
			if (iVar0 == 0)
			{
			}
			else if (iVar0 == 1)
			{
				if (__LIB_1__::func_22(13))
				{
					__LIB_9__::func_252(cParam0, 13, uLocal_46[iVar0], 0, 0, 1, 0);
				}
			}
			iVar0++;
		}
		func_471(1);
		__LIB_0__::func_490(&iLocal_49, 1);
		__LIB_10__::func_893(&iLocal_50, 1);
		__LIB_10__::func_893(&iLocal_54, 1);
		func_474();
		__LIB_0__::func_490(&iLocal_66, 0);
		__LIB_0__::func_490(&iLocal_67, 0);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 <= (2 - 1))
		{
			if (iVar0 == 0)
			{
			}
			else if (iVar0 == 1)
			{
				if (__LIB_1__::func_22(13))
				{
					__LIB_9__::func_252(cParam0, 13, uLocal_46[iVar0], 0, 0, 1, 0);
				}
			}
			iVar0++;
		}
		func_471(0);
		__LIB_0__::func_490(&iLocal_49, 0);
		__LIB_10__::func_893(&iLocal_50, 0);
		__LIB_10__::func_893(&iLocal_54, 0);
		func_474();
		__LIB_0__::func_490(&iLocal_66, 0);
		__LIB_0__::func_490(&iLocal_67, 0);
	}
}

void func_184()
{
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_165))
	{
		TASK::_DELETE_SCENARIO_POINT(iLocal_165);
	}
}

void func_185()
{
	if (__LIB_0__::func_139(iLocal_281))
	{
		__LIB_1__::func_221(iLocal_281, 0, 1);
		__LIB_1__::func_382(iLocal_281, 0, 1);
		__LIB_1__::func_281(&iLocal_281, 1, 1);
	}
	if (__LIB_0__::func_139(iLocal_282))
	{
		__LIB_1__::func_221(iLocal_282, 0, 1);
		__LIB_1__::func_382(iLocal_282, 0, 1);
		__LIB_1__::func_281(&iLocal_282, 1, 1);
	}
}

struct<4> func_228(int iParam0, int iParam1)
{
	return func_515(iParam0, iParam1);
}

void func_287(char[4] cParam0)
{
	if (__LIB_6__::func_872(cParam0, 1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(cParam0->f_5411))
	{
		if (__LIB_6__::func_872(cParam0, 16))
		{
			__LIB_9__::func_70(cParam0, 0);
		}
		if (func_440(cParam0, 0, cParam0->f_5413, cParam0->f_5413.f_1, cParam0->f_5413.f_2, cParam0->f_5416, 1, 1, 1))
		{
		}
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
	if (!__LIB_5__::func_388(iParam0, iParam1, bParam2, iParam5))
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
			__LIB_4__::func_465(iVar5);
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
		__LIB_12__::func_900(28);
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
			if (!__LIB_5__::func_385(iParam0, iParam5, &bParam2, bParam3, bParam4))
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
				__LIB_4__::func_127(joaat("REWARD_SMALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
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
			__LIB_4__::func_469(iParam0, iParam1);
			__LIB_4__::func_466(iParam0);
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
			__LIB_4__::func_468(iParam0, iParam5, iParam8);
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
				__LIB_12__::func_900(24);
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
			__LIB_18__::func_280(iParam0);
		}
		if (__LIB_0__::func_192(iParam0, -1979000645))
		{
			__LIB_18__::func_289(iParam0);
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
			__LIB_4__::func_120(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		__LIB_2__::func_471(iParam0, iVar0, 0, bVar37, 0);
	}
	return true;
}

void func_326()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_679();
	func_680();
	func_681();
	func_682();
	func_683();
	__LIB_1__::func_848();
	__LIB_0__::func_376();
}

void func_327(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	func_686(iParam0, 1, 1, -142743235, 1);
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

void func_365()
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
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_727(&uVar4, &iVar1, &iVar2, &iVar3)))
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
		__LIB_2__::func_472(iVar3, 0, 0);
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

void func_389(char[4] cParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < __LIB_4__::func_525())
	{
		func_765(cParam0, iVar0);
		iVar0++;
	}
}

void func_392(char[4] cParam0)
{
	__LIB_9__::func_45(cParam0, iLocal_16, iLocal_17, 109015, 109060, 109165, 109375, 110096, "MAR2_INT", 4098, -1);
	__LIB_9__::func_45(cParam0, iLocal_17, iLocal_18, 110346, 110371, 110576, 110696, 111073, "", 4096, -1);
	__LIB_9__::func_45(cParam0, iLocal_18, iLocal_19, 111193, 111207, 111425, 111505, 111989, "", 4096, -1);
	__LIB_9__::func_45(cParam0, iLocal_19, iLocal_20, 112034, 112059, 112277, 112559, 112867, "", 4352, -1);
	__LIB_9__::func_45(cParam0, iLocal_20, iLocal_21, 112933, 112953, 113194, 113310, 113843, "MAR2_MCS2", 4098, -1);
	__LIB_9__::func_45(cParam0, iLocal_21, iLocal_22, 113888, 113913, 114169, 114258, 114556, "", 4096, -1);
	__LIB_9__::func_45(cParam0, iLocal_22, iLocal_23, 114583, 114608, 115079, 115320, 115733, "", 4096, -1);
	__LIB_9__::func_45(cParam0, iLocal_23, iLocal_24, 115752, 115848, 116260, 116469, 116711, "MAR2_MCS3", 4162, -1);
	__LIB_9__::func_45(cParam0, iLocal_24, iLocal_25, 116790, 116831, 116901, 117130, 117379, "", 4608, -1);
	__LIB_9__::func_45(cParam0, iLocal_25, iLocal_26, 117437, 117515, 117689, 117833, 118284, "MAR2_MCS4", 4610, -1);
	__LIB_9__::func_45(cParam0, iLocal_26, iLocal_27, 118311, 118374, 118559, 118690, 119458, "", 4608, -1);
	__LIB_9__::func_45(cParam0, iLocal_27, 26, 119490, 119510, 119671, 119744, 119778, "MAR2_EXT", 4610, -1);
}

void func_393(var uParam0, int iParam1)
{
	uParam0->f_5410 = iParam1;
}

int func_398()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_72, iVar0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

void func_399()
{
	if (!__LIB_0__::func_272(iLocal_49, 0))
	{
		return;
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_49, true);
	if (PED::_0x33FA048675821DA7(iLocal_49, 3))
	{
		PED::_0x06D26A96CA1BCA75(iLocal_49, 3, 0f, 0);
	}
	PED::SET_PED_CAN_BE_TARGETTED(iLocal_49, false);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_49, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_49, 301, true);
	PED::_SET_PED_BODY_COMPONENT(iLocal_49, -937613161);
	PED::_UPDATE_PED_VARIATION(iLocal_49, false, true, true, true, false);
}

void func_402(var uParam0)
{
	vector3 vVar0;
	if (!__LIB_0__::func_84(uParam0, 4))
	{
		if (__LIB_0__::func_1(uParam0->f_860, 16384))
		{
			GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
		}
		vVar0 = { __LIB_4__::func_534(uParam0) };
		if (!__LIB_0__::func_1(uParam0->f_860, 524288))
		{
			__LIB_4__::func_717(&(uParam0->f_872));
		}
		func_837(&(uParam0->f_860), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_4__::func_535(uParam0, 0f, 0f, 0f);
		func_839(uParam0);
		func_840(uParam0);
		__LIB_5__::func_47(uParam0, 0f, 0f, 0f, 0, 0);
		__LIB_5__::func_48(uParam0);
		__LIB_0__::func_88(uParam0, 4);
		__LIB_0__::func_106(uParam0, 0);
		__LIB_1__::func_550(&(Global_1946804.f_1497), Global_35, 1, 64, 1, 1, 1);
		if (CAM::_0x927B810E43E99932(&(uParam0->f_873)))
		{
			CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_873));
		}
	}
}

int func_404(vector3 vParam0, var uParam3)
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
		iVar0 = func_848(0, 0);
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

void func_422(char[4] cParam0, int iParam1, var uParam2)
{
	int iVar0;
	if (__LIB_6__::func_872(cParam0, 2097152))
	{
		return;
	}
	iVar0 = __LIB_9__::func_328(&(cParam0->f_5147), iParam1);
	if (iVar0 == -1)
	{
		iVar0 = __LIB_9__::func_329(&(cParam0->f_5147));
	}
	if (iVar0 == -1)
	{
		return;
	}
	cParam0->f_5147[iVar0 /*4*/] = iParam1;
	cParam0->f_5147[iVar0 /*4*/].f_3 = (cParam0->f_5147[iVar0 /*4*/].f_3 || uParam2);
}

char* func_426()
{
	return "script@story@MAR2@IG@IG_9_Posse_Confrontation@IG_9_Posse_Enter_Interact_Attack";
}

void func_427(char[4] cParam0, char[4] cParam1, var uParam2)
{
	int iVar0;
	if (__LIB_6__::func_872(cParam0, 2097152))
	{
		return;
	}
	iVar0 = __LIB_8__::func_766(&(cParam0->f_1081), cParam1);
	if (iVar0 == -1)
	{
		iVar0 = __LIB_8__::func_786(&(cParam0->f_1081));
	}
	if (iVar0 == -1)
	{
		return;
	}
	cParam0->f_1081[iVar0 /*3*/] = cParam1;
	cParam0->f_1081[iVar0 /*3*/].f_2 = (cParam0->f_1081[iVar0 /*3*/].f_2 || uParam2);
}

var func_428(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "pl_IG9_POSSE_ENTER";
		case 1:
			return "pl_IG9_JOHN_DONT_KNOW";
		case 2:
			return "pl_IG9_JOHN_WHAT_OF_IT";
		case 3:
			return "pl_IG9_POSSE_KILL_A_FELLA";
		case 4:
			return "pl_IG9_JOHN_WASNT_ME";
		case 5:
			return "pl_IG9_JOHN_SURE_HE_HAD_IT_COMING";
		case 6:
			return "pl_IG9_POSSE_LEADER_DONT_MEAN_NO";
		case 7:
			return "pl_IG9_JOHN_IM_JUST_FARMER";
		case 8:
			return "pl_IG9_JOHN_I_KILLED_JOHN_MAR";
		case 9:
			return "pl_IG9_POSSE_WAS_MY_BRO";
		case 10:
			return "pl_IG9_JOHN_ROB_ME";
		case 11:
			return "pl_IG9_JOHN_I_SEE_THE_RESEMBLENCE";
		case 12:
			return "pl_IG9_POSSE_KILL_HIM_FARMER";
		case 13:
			return "pl_IG9_POSSE_KILL_HIM_KILLED_MARSTON";
		case 14:
			return "pl_IG9_POSSE_KILL_HIM";
		default:
			break;
	}
	return __LIB_9__::func_230();
}

bool func_439(char[4] cParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	var uVar1;
	vector3 vVar2;
	if (__LIB_6__::func_872(cParam0, 2))
	{
		return true;
	}
	if (__LIB_0__::func_2() == 0)
	{
		return true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(cParam0->f_5408))
	{
		return true;
	}
	iVar0 = __LIB_4__::func_543(__LIB_6__::func_866(cParam0));
	if (!__LIB_0__::func_91())
	{
		vVar2 = { __LIB_1__::func_469(cParam0->f_607) };
	}
	if (func_911(cParam0, iVar0, &uVar1, bParam1, vVar2.x, vVar2.y, vVar2.z, 0, bParam2, iParam3, bParam4, iParam5, 1, 0))
	{
		cParam0->f_5408 = uVar1;
		return true;
	}
	return false;
}

bool func_440(char[4] cParam0, bool bParam1, float fParam2, float fParam3, float fParam4, float fParam5, int iParam6, int iParam7, int iParam8)
{
	struct<11> Var0;
	int iVar11;
	int iVar12;
	int iVar13;
	vector3 vVar14;
	int iVar17;
	struct<11> Var18;
	int iVar29;
	if (ENTITY::DOES_ENTITY_EXIST(cParam0->f_5411))
	{
		if (!__LIB_6__::func_872(cParam0, 16777216))
		{
			if (!__LIB_8__::func_667(cParam0))
			{
				__LIB_6__::func_869(cParam0, 16777216);
			}
			else
			{
				Var0.f_10 = 7;
				Var0 = 0;
				Var0.f_1 = 0;
				Var0.f_6 = fParam2;
				Var0.f_6.f_1 = fParam3;
				Var0.f_6.f_2 = fParam4;
				Var0.f_9 = fParam5;
				Var0.f_10 = 1;
				iVar11 = 0;
				iVar12 = __LIB_4__::func_720(&iVar11, &Var0);
				if (iVar11 != 0)
				{
					__LIB_6__::func_869(cParam0, 16777216);
					if (iVar11 == 2 && !ENTITY::IS_ENTITY_DEAD(iVar12))
					{
						if (iVar12 == cParam0->f_5411)
						{
							__LIB_6__::func_869(cParam0, 16777216);
						}
						else if (__LIB_0__::func_48(iVar12, cParam0->f_5411, 5f, 1))
						{
							if (__LIB_0__::func_126(iVar12))
							{
								PHYSICS::_0x0348469DAA17576C(iVar12);
							}
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar12, false, true);
							ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iVar12, cParam0->f_5417, cParam0->f_5420, true, false, true);
						}
					}
				}
			}
			return false;
		}
		if (!ENTITY::IS_ENTITY_DEAD(cParam0->f_5411))
		{
			return true;
		}
	}
	if (__LIB_6__::func_872(cParam0, 1))
	{
		return true;
	}
	vVar14 = { __LIB_1__::func_469(cParam0->f_607) };
	if (__LIB_0__::func_2() == 0)
	{
		STREAMING::REQUEST_MODEL(__LIB_6__::func_874(cParam0), false);
		if (!STREAMING::HAS_MODEL_LOADED(__LIB_6__::func_874(cParam0)))
		{
			return false;
		}
		if (__LIB_5__::func_50(&iVar17, __LIB_6__::func_874(cParam0), vVar14, 0f, 0, 0, 1, 1, 1))
		{
			NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(iVar17, true);
			iVar13 = NETWORK::NET_TO_PED(iVar17);
		}
	}
	else
	{
		if (((((cParam0->f_607 == 38 || cParam0->f_607 == 39) || cParam0->f_607 == 43) || cParam0->f_607 == 40) || cParam0->f_607 == 41) || cParam0->f_607 == 42)
		{
			__LIB_6__::func_869(cParam0, 1);
			return false;
		}
		Var18.f_10 = 7;
		Var18 = bParam1;
		Var18.f_1 = iParam6;
		Var18.f_4 = iParam7;
		Var18.f_3 = iParam8;
		Var18.f_6 = fParam2;
		Var18.f_6.f_1 = fParam3;
		Var18.f_6.f_2 = fParam4;
		Var18.f_9 = fParam5;
		if (__LIB_6__::func_872(cParam0, 262144))
		{
			Var18.f_2 = 1;
		}
		else if (__LIB_6__::func_872(cParam0, 32768))
		{
			Var18.f_2 = 0;
		}
		iVar29 = 0;
		iVar13 = __LIB_4__::func_720(&iVar29, &Var18);
		if (iVar29 == 0)
		{
			return false;
		}
		else if (iVar29 == 1)
		{
			return false;
		}
		else if (iVar29 == 2)
		{
			if (!__LIB_6__::func_872(cParam0, 16))
			{
				__LIB_6__::func_869(cParam0, 16);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar13))
	{
		cParam0->f_5411 = iVar13;
		cParam0->f_5412 = iVar13;
		__LIB_8__::func_598(cParam0, bParam1);
		if (!__LIB_6__::func_872(cParam0, 256))
		{
			if (!__LIB_6__::func_872(cParam0, 32768))
			{
				vVar14.x = fParam2;
				vVar14.f_1 = fParam3;
				vVar14.f_2 = fParam4;
				if ((!__LIB_0__::func_126(iVar13) || __LIB_0__::func_665(Global_35, iVar13, 1, 1) > 200f) && !__LIB_0__::func_86(vVar14))
				{
					if (!__LIB_0__::func_91())
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar13, false);
						func_919(iVar13, vVar14, fParam5, 2, 1073741824 /* Float: 2f */);
					}
				}
			}
		}
		else
		{
			Stack.Push(cParam0);
			Call_Loc(cParam0->f_10782);
		}
		return false;
	}
	return false;
}

void func_441(char[4] cParam0)
{
	int iVar0;
	var uVar1;
	if (!__LIB_6__::func_872(cParam0, 32) && __LIB_6__::func_875(cParam0, 3))
	{
		if (__LIB_4__::func_544(cParam0->f_607, &iVar0, &uVar1))
		{
			CLOCK::SET_CLOCK_TIME(iVar0, 0, 0);
			__LIB_6__::func_869(cParam0, 32);
		}
	}
	if (!__LIB_6__::func_872(cParam0, 32))
	{
		if (func_921(&(cParam0->f_609), cParam0->f_607))
		{
			__LIB_6__::func_869(cParam0, 32);
		}
	}
}

void func_442(char[4] cParam0)
{
	struct<4> Var0;
	if (!__LIB_6__::func_872(cParam0, 128))
	{
		if (__LIB_6__::func_872(cParam0, 16384))
		{
			__LIB_8__::func_668(cParam0);
			if (func_923(cParam0))
			{
				__LIB_5__::func_326(&(cParam0->f_10792));
				__LIB_6__::func_887(cParam0, 2097152);
				__LIB_6__::func_881(cParam0, 16384);
				__LIB_6__::func_869(cParam0, 128);
			}
			return;
		}
		if (__LIB_6__::func_875(cParam0, 1))
		{
			return;
		}
		if (__LIB_6__::func_872(cParam0, 64))
		{
			__LIB_8__::func_668(cParam0);
			MemCopy(&Var0, {__LIB_4__::func_681(__LIB_6__::func_866(cParam0))}, 4);
			if (func_925(cParam0, Var0))
			{
				if (__LIB_6__::func_884(cParam0) != 4)
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				__LIB_6__::func_869(cParam0, 128);
			}
		}
		else
		{
			if (__LIB_6__::func_884(cParam0) != 4)
			{
				CAM::DO_SCREEN_FADE_OUT(1);
			}
			__LIB_6__::func_869(cParam0, 128);
		}
	}
}

bool func_444(char[4] cParam0)
{
	int iVar0;
	char[] cVar1[8];
	iVar0 = 1;
	if (!__LIB_9__::func_155(cParam0))
	{
		iVar0 = 0;
	}
	if (!func_439(cParam0, __LIB_6__::func_875(cParam0, 3), !__LIB_6__::func_862(cParam0, 2097152), cParam0->f_5410, !__LIB_6__::func_862(cParam0, 32), 0))
	{
		iVar0 = 0;
	}
	if (!func_440(cParam0, 1, cParam0->f_5413, cParam0->f_5413.f_1, cParam0->f_5413.f_2, cParam0->f_5416, 1, 1, 1))
	{
		iVar0 = 0;
	}
	if (!PED::_0x5E420FF293EE5472())
	{
		iVar0 = 0;
	}
	if (__LIB_6__::func_872(cParam0, 4) && !PED::_0x0EE3F0D7FECCC54F())
	{
		iVar0 = 0;
	}
	if (!__LIB_4__::func_505(&(cParam0->f_8269)))
	{
		MemCopy(&cVar1, {__LIB_4__::func_542(cParam0->f_607)}, 3);
		if (__LIB_5__::func_341(&(cParam0->f_8269), &cVar1, 0, 1, 1))
		{
		}
		else
		{
			iVar0 = 0;
		}
	}
	if (__LIB_6__::func_875(cParam0, 1))
	{
		if (!__LIB_0__::func_75(&(cParam0->f_13115)))
		{
			__LIB_1__::func_283(&(cParam0->f_13115), 0);
		}
		if (__LIB_0__::func_265(&(cParam0->f_13115)) < 30f)
		{
			if (Global_1879534.f_1 || Global_1879534)
			{
				iVar0 = 0;
			}
			if (Global_1935630.f_2 != Global_40.f_39 || (!Global_1935630.f_12 && ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) != Global_40.f_39))
			{
				iVar0 = 0;
			}
			if (Global_40.f_7729 != Global_1905941)
			{
				iVar0 = 0;
			}
			if (!Global_1935630.f_12 && !PED::_0xA0BC8FAED8CFEB3C(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

bool func_446(char[4] cParam0)
{
	int iVar0;
	iVar0 = __LIB_6__::func_864(cParam0);
	if (__LIB_6__::func_875(cParam0, 2) || __LIB_0__::func_13(32768))
	{
		if (!func_931())
		{
			return false;
		}
	}
	if (!func_932(cParam0))
	{
		return false;
	}
	if (!func_933(cParam0))
	{
		return false;
	}
	if (!func_934(cParam0))
	{
		return false;
	}
	if (__LIB_6__::func_864(cParam0) == iLocal_24 && !bLocal_188)
	{
		if (!__LIB_5__::func_577(&uLocal_368, "MAR2_MCS4", 1, 1))
		{
			return false;
		}
		else
		{
			bLocal_188 = true;
		}
	}
	func_936();
	func_937();
	func_938(cParam0);
	func_939(cParam0);
	func_940(cParam0);
	__LIB_1__::func_649(&iLocal_261, 0);
	__LIB_1__::func_649(&iLocal_280, 0);
	__LIB_11__::func_221(&uLocal_262, 0);
	__LIB_11__::func_221(&uLocal_278, 0);
	__LIB_11__::func_221(&uLocal_276, 0);
	__LIB_11__::func_221(&uLocal_265, 0);
	iLocal_201 = 0;
	__LIB_11__::func_462(&iLocal_167);
	__LIB_11__::func_462(&uLocal_172);
	__LIB_11__::func_463(&uLocal_190);
	__LIB_3__::func_229(883);
	__LIB_3__::func_229(884);
	__LIB_3__::func_229(943);
	__LIB_3__::func_229(485);
	__LIB_3__::func_229(477);
	__LIB_3__::func_229(943);
	__LIB_0__::func_123(883, 32);
	__LIB_0__::func_123(884, 32);
	__LIB_0__::func_123(943, 32);
	__LIB_0__::func_123(485, 32);
	__LIB_0__::func_123(477, 32);
	__LIB_0__::func_123(943, 32);
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_93[0]))
	{
		POPULATION::_0x18262CAFEBB5FBE1(iLocal_93[0], 4096, 0, 0, -1, -1, 0);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_93[0]))
	{
		POPULATION::_0xB56D41A694E42E86(iLocal_93[0], 4096, 0, 0, -1, -1, 0);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_93[50]))
	{
		POPULATION::_0x18262CAFEBB5FBE1(iLocal_93[50], 1024, 0, 0, -1, -1, 0);
	}
	if (iVar0 >= iLocal_18 && iVar0 <= iLocal_24)
	{
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	}
	if (iVar0 >= iLocal_22 && iVar0 <= iLocal_24)
	{
		PED::_0xAB0D553FE20A6E25(0f);
		PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		POPULATION::_0xF45E46DEECF7DF6E(10240, 0, 0, -1, -1);
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_93[4]))
		{
			__LIB_0__::func_566(iLocal_93[4], 0);
		}
	}
	if (iVar0 >= iLocal_16 && iVar0 <= iLocal_24)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_93[5]))
		{
			PATHFIND::_0xC1799FAFD2FDF52B(iLocal_93[5], 0, 0, 0);
		}
	}
	else if (iVar0 >= iLocal_25 && iVar0 <= iLocal_27)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_93[5]))
		{
			PATHFIND::_0xC1799FAFD2FDF52B(iLocal_93[5], 0, 0, 1);
			PATHFIND::_0xC1799FAFD2FDF52B(iLocal_93[68], 0, 0, 0);
		}
	}
	if (iVar0 >= iLocal_18 && iVar0 <= iLocal_20)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_93[19]))
		{
			__LIB_9__::func_364(iLocal_93[19], 0, 0, 0);
		}
	}
	if (!bLocal_187)
	{
		bLocal_187 = true;
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_93[5]))
		{
			__LIB_3__::func_730(iLocal_93[5], 0, 0, 0, 0, 0);
		}
	}
	func_174(0);
	func_952(cParam0);
	if (iVar0 != iLocal_16)
	{
		func_953(cParam0);
	}
	func_954(cParam0);
	__LIB_9__::func_14(cParam0, 136556);
	__LIB_9__::func_15(cParam0, 136656);
	__LIB_9__::func_16(cParam0, 136807);
	__LIB_4__::func_932(64, 0);
	__LIB_3__::func_820(64, 1);
	__LIB_6__::func_350(64, 22, 1, 1);
	ENTITY::CREATE_MODEL_HIDE(-1773.528f, -393.6541f, 155.5415f, 0.5f, joaat("P_NEWSPAPERSTACK01X"), true);
	func_961(cParam0);
	if (iVar0 != iLocal_16)
	{
		func_169(0);
	}
	if (__LIB_0__::func_272(__LIB_0__::func_398(7), 0))
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(__LIB_0__::func_398(7), -2590.037f, 465.5254f, 145.1149f, 79.8012f, true, false, true);
		TASK::TASK_STAND_STILL(__LIB_0__::func_398(7), -1);
	}
	if (__LIB_0__::func_272(__LIB_0__::func_398(1), 0))
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(__LIB_0__::func_398(1), -2589.972f, 467.1571f, 145.0408f, 83.5558f, true, false, true);
		TASK::TASK_STAND_STILL(__LIB_0__::func_398(1), -1);
	}
	func_962(__LIB_0__::func_398(7));
	func_962(__LIB_0__::func_398(1));
	iLocal_338 = 0;
	__LIB_10__::func_843(26, 0, 350);
	return true;
}

bool func_448(char[4] cParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	func_964(cParam0);
	__LIB_11__::func_105(cParam0);
	iVar0 = __LIB_6__::func_864(cParam0);
	iVar1 = __LIB_9__::func_40(cParam0);
	iVar2 = __LIB_8__::func_663(cParam0, iVar0);
	if (__LIB_6__::func_862(cParam0, 2097152))
	{
		if (iVar2 == 7 || iVar2 < 3)
		{
			func_923(cParam0);
		}
	}
	__LIB_9__::func_140(cParam0);
	__LIB_9__::func_197(cParam0);
	__LIB_9__::func_47(cParam0);
	__LIB_9__::func_48(cParam0);
	__LIB_9__::func_49(cParam0);
	__LIB_10__::func_974(cParam0);
	if (iVar2 != 5 && iVar2 != 6)
	{
		__LIB_9__::func_63(cParam0);
	}
	if ((__LIB_6__::func_864(cParam0) == 0 && iVar2 < 3) && __LIB_8__::func_587(cParam0) == 0)
	{
		func_442(cParam0);
	}
	if (__LIB_8__::func_705(cParam0, iVar0, 512))
	{
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	}
	func_74(cParam0);
	switch (iVar2)
	{
		case 0:
			if (__LIB_9__::func_50(cParam0, iVar0, 0))
			{
				if (__LIB_8__::func_669(cParam0, __LIB_6__::func_864(cParam0)) != -1 && PED::_0x62DE46F061CAA468() < __LIB_8__::func_669(cParam0, __LIB_6__::func_864(cParam0)))
				{
					PED::_0xF008E0BA1FE1D644((__LIB_8__::func_669(cParam0, __LIB_6__::func_864(cParam0)) - PED::_0x62DE46F061CAA468()));
				}
				if ((__LIB_6__::func_864(cParam0) == 25 || __LIB_6__::func_864(cParam0) == 26) && __LIB_0__::func_13(32768))
				{
					__LIB_8__::func_665(cParam0, 524288);
				}
				if (__LIB_6__::func_872(cParam0, 4))
				{
					if (!__LIB_6__::func_862(cParam0, 4))
					{
						__LIB_0__::func_16(cParam0, iVar0);
						__LIB_6__::func_868(cParam0, 4);
					}
					__LIB_9__::func_51(cParam0);
					__LIB_8__::func_670(cParam0, iVar0, 1);
				}
				else
				{
					__LIB_8__::func_670(cParam0, iVar0, 1);
				}
			}
			break;
		case 1:
			if (__LIB_9__::func_155(cParam0))
			{
				if (__LIB_14__::func_241(cParam0))
				{
					if (__LIB_6__::func_862(cParam0, 4))
					{
						__LIB_6__::func_887(cParam0, 4);
					}
					__LIB_8__::func_670(cParam0, iVar0, 2);
				}
			}
			else if (__LIB_9__::func_31(cParam0) >= cParam0->f_13144)
			{
				if (__LIB_6__::func_862(cParam0, 4))
				{
					__LIB_6__::func_887(cParam0, 4);
				}
				__LIB_8__::func_670(cParam0, iVar0, 2);
			}
			break;
		case 2:
			if (__LIB_9__::func_50(cParam0, iVar0, 2))
			{
				if (!__LIB_9__::func_18(cParam0))
				{
					__LIB_8__::func_670(cParam0, iVar0, 4);
					if (func_981(cParam0, iVar0, iVar1))
					{
						__LIB_8__::func_670(cParam0, iVar0, 5);
					}
				}
				else
				{
					__LIB_9__::func_189(cParam0);
					__LIB_8__::func_670(cParam0, iVar0, 3);
					if (func_983(cParam0, iVar0))
					{
						__LIB_8__::func_670(cParam0, iVar0, 4);
						if (func_981(cParam0, iVar0, iVar1))
						{
							__LIB_8__::func_670(cParam0, iVar0, 5);
						}
					}
				}
			}
			else if (__LIB_8__::func_671(cParam0))
			{
				func_983(cParam0, iVar0);
			}
			break;
		case 3:
			if (func_983(cParam0, iVar0))
			{
				__LIB_8__::func_670(cParam0, iVar0, 4);
				if (func_981(cParam0, iVar0, iVar1))
				{
					__LIB_8__::func_670(cParam0, iVar0, 5);
				}
			}
			break;
		case 4:
			if (func_981(cParam0, iVar0, iVar1))
			{
				__LIB_8__::func_670(cParam0, iVar0, 5);
			}
			break;
		case 5:
			if (!__LIB_0__::func_2() == 0)
			{
				__LIB_8__::func_672(cParam0);
				__LIB_9__::func_909(cParam0, iVar0);
				__LIB_8__::func_673(cParam0);
				__LIB_9__::func_477(cParam0);
				if (__LIB_8__::func_705(cParam0, iVar1, 2))
				{
					if (__LIB_9__::func_52(cParam0, iVar1))
					{
						__LIB_9__::func_353(cParam0, iVar1);
					}
				}
			}
			if (__LIB_9__::func_50(cParam0, iVar0, 5))
			{
				if (__LIB_9__::func_50(cParam0, iVar0, 7))
				{
					if (!__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 67108864))
					{
						__LIB_9__::func_198(cParam0, __LIB_6__::func_864(cParam0));
					}
					__LIB_9__::func_150(cParam0, iVar1);
					__LIB_11__::func_105(cParam0);
					return true;
				}
				else
				{
					__LIB_8__::func_670(cParam0, iVar0, 7);
				}
			}
			else
			{
				if (!__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 4194304))
				{
					if ((!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN()) && !__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 16))
					{
						CAM::DO_SCREEN_FADE_IN(0);
						__LIB_1__::func_164(0);
					}
					__LIB_8__::func_707(cParam0, __LIB_6__::func_864(cParam0), 4194304);
				}
				if ((__LIB_2__::func_173(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1) && !__LIB_6__::func_872(cParam0, 8192)) && !__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 8))
				{
					__LIB_5__::func_20(1, 0);
					__LIB_1__::func_422("MISSION_WANTED", 7500, 0, 1, 0, 0, -1, -1, 0);
					if (__LIB_0__::func_0(cParam0))
					{
						__LIB_8__::func_670(cParam0, iVar0, 6);
					}
				}
				if (__LIB_6__::func_862(cParam0, 268435456))
				{
					if (MISC::_0x1B065A2BF7953815(1) != 1)
					{
						__LIB_11__::func_239(cParam0, func_34(iVar0), func_34(iVar1), iVar0, iVar1);
						__LIB_6__::func_887(cParam0, 268435456);
					}
				}
				if (__LIB_6__::func_872(cParam0, 1048576))
				{
					if (func_127(func_34(0)))
					{
						__LIB_6__::func_881(cParam0, 1048576);
					}
				}
			}
			break;
		case 6:
			if (!__LIB_0__::func_2() == 0)
			{
				__LIB_8__::func_672(cParam0);
				__LIB_9__::func_909(cParam0, iVar0);
				__LIB_8__::func_673(cParam0);
				__LIB_9__::func_477(cParam0);
				if (__LIB_8__::func_705(cParam0, __LIB_9__::func_40(cParam0), 2))
				{
					if (__LIB_9__::func_52(cParam0, __LIB_9__::func_40(cParam0)))
					{
						__LIB_9__::func_353(cParam0, __LIB_9__::func_40(cParam0));
					}
				}
			}
			if ((!__LIB_2__::func_173(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1) || __LIB_6__::func_872(cParam0, 8192)) || __LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 8))
			{
				if (__LIB_9__::func_50(cParam0, iVar0, 5))
				{
					if (__LIB_0__::func_0(cParam0))
					{
						__LIB_8__::func_670(cParam0, iVar0, 7);
					}
				}
				else
				{
					__LIB_0__::func_0(cParam0);
					__LIB_8__::func_670(cParam0, iVar0, 5);
				}
			}
			else
			{
				__LIB_9__::func_50(cParam0, iVar0, 5);
				__LIB_0__::func_16(cParam0);
			}
			break;
		case 7:
			if (__LIB_9__::func_50(cParam0, iVar0, 7))
			{
				if (!__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 67108864))
				{
					__LIB_9__::func_198(cParam0, __LIB_6__::func_864(cParam0));
				}
				__LIB_9__::func_150(cParam0, iVar1);
				__LIB_11__::func_105(cParam0);
				return true;
			}
			break;
		default:
			__LIB_8__::func_670(cParam0, iVar0, 7);
			break;
	}
	return false;
}

bool func_466(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 - iVar0 * 32);
	iVar2 = BUILTIN::ROUND(BUILTIN::POW(2f, BUILTIN::TO_FLOAT(iVar1)));
	return (uLocal_345[iVar0] && iVar2) == iVar2;
}

void func_467(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 - iVar0 * 32);
	iVar2 = BUILTIN::ROUND(BUILTIN::POW(2f, BUILTIN::TO_FLOAT(iVar1)));
	bVar3 = (uLocal_345[iVar0] && iVar2) == iVar2;
	if (!bVar3 && bParam1)
	{
		uLocal_345[iVar0] = (uLocal_345[iVar0] || iVar2);
	}
	else if (bVar3 && !bParam1)
	{
		iVar4 = (-1 - iVar2);
		uLocal_345[iVar0] = (uLocal_345[iVar0] && iVar4);
	}
}

void func_468(int iParam0)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uLocal_202[iParam0]))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uLocal_202[iParam0]);
	}
}

void func_469()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (17 - 1))
	{
		func_1016(iVar0);
		iVar0++;
	}
}

void func_470(int* iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, false);
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
	{
		return;
	}
	if (bParam1)
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
	}
	else
	{
		func_1017(iParam0);
		VEHICLE::DELETE_VEHICLE(iParam0);
	}
}

void func_471(bool bParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (1 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_60[iVar0]))
		{
			if (bParam0)
			{
				if (iVar0 == 0)
				{
					if (__LIB_2__::func_763(710, 0))
					{
						__LIB_2__::func_753(710, 0, 1, 0, 0);
					}
				}
			}
			else if (__LIB_2__::func_763(710, 0))
			{
				__LIB_2__::func_753(710, 1, 1, 0, 0);
			}
		}
		iVar0++;
	}
}

void func_474()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		__LIB_0__::func_490(&(iLocal_62[iVar0]), 0);
		iVar0++;
	}
}

struct<4> func_515(int iParam0, int iParam1)
{
	struct<4> Var0;
	Var0 = { func_1048(iParam0, iParam1) };
	Var0.f_3 = func_1049(iParam0, iParam1);
	return Var0;
}

void func_679()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_1213(0);
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
	func_1213(1);
}

void func_680()
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

void func_681()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_1216(0);
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
	func_1216(1);
}

void func_682()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_2__::func_522(15000, 0, 0, 0, 1);
			func_1216(0);
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
	__LIB_2__::func_590(15000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
	func_1216(1);
}

void func_683()
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
				func_686(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_686(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
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

int func_686(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			__LIB_2__::func_471(iParam0, -iParam1, bVar0, bVar1, bVar2);
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
			func_686(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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
		__LIB_2__::func_471(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	__LIB_1__::func_879(iParam0, iParam1);
	return 1;
}

int func_727(var uParam0, int iParam1, int iParam2, int iParam3)
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
	iVar11 = (func_1261(iVar0, iVar1, 1, 0, 0) * iVar2);
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
	__LIB_2__::func_522(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

void func_765(char[4] cParam0, int iParam1)
{
	func_1284(cParam0, iParam1);
	__LIB_8__::func_679(cParam0, iParam1, 26);
}

int func_767(char[4] cParam0)
{
	if ((__LIB_6__::func_872(cParam0, 4) || __LIB_6__::func_875(cParam0, 2)) || __LIB_6__::func_875(cParam0, 1))
	{
	}
	func_1286();
	ENTITY::CREATE_MODEL_HIDE_EXCLUDING_SCRIPT_OBJECTS(-2594.61f, 456.53f, 147.05f, 0.5f, joaat("P_BOILER01X"), false);
	__LIB_5__::func_509(uLocal_46[0], 0, 1);
	__LIB_4__::func_239(Global_35);
	PLAYER::_0x12E09E278C6C29B7(PLAYER::PLAYER_ID());
	return 1;
}

int func_768(char[4] cParam0)
{
	if ((__LIB_6__::func_872(cParam0, 4) || __LIB_6__::func_875(cParam0, 2)) || __LIB_6__::func_875(cParam0, 1))
	{
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_72))
	{
		if (!PED::IS_PED_IN_VEHICLE(Global_35, iLocal_72, false))
		{
			PED::SET_PED_INTO_VEHICLE(Global_35, iLocal_72, -1);
		}
	}
	__LIB_0__::func_489(0f, 0f);
	func_169(0);
	func_1288(0);
	__LIB_9__::func_60(cParam0, 0);
	__LIB_6__::func_876(cParam0, 0);
	__LIB_1__::func_649(&iLocal_280, 0);
	__LIB_1__::func_649(&iLocal_261, 0);
	__LIB_11__::func_221(&uLocal_262, 0);
	__LIB_11__::func_221(&uLocal_278, 0);
	__LIB_11__::func_221(&uLocal_265, 0);
	iLocal_201 = 0;
	__LIB_11__::func_462(&iLocal_167);
	__LIB_11__::func_462(&uLocal_172);
	__LIB_11__::func_463(&uLocal_190);
	__LIB_1__::func_148(&uLocal_218);
	__LIB_1__::func_148(&uLocal_215);
	__LIB_5__::func_509(uLocal_46[0], 1, 1);
	func_164(1);
	AUDIO::_0x660A8F876DF1D4F8(8);
	AUDIO::_0x660A8F876DF1D4F8(24);
	return 1;
}

bool func_769(char[4] cParam0)
{
	int iVar0;
	if (__LIB_6__::func_889(cParam0) > -1 && __LIB_6__::func_889(cParam0) < 29)
	{
		func_1290(cParam0);
		if (ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			return false;
		}
		iVar0 = 0;
		while (iVar0 <= (2 - 1))
		{
			if (ENTITY::IS_ENTITY_DEAD(uLocal_46[iVar0]))
			{
				return false;
			}
			iVar0++;
		}
		if (ENTITY::IS_ENTITY_DEAD(iLocal_72))
		{
			return false;
		}
		if (ENTITY::IS_ENTITY_DEAD(iLocal_49))
		{
			return false;
		}
		func_1291(cParam0);
		func_1292(cParam0);
		func_1293(cParam0);
		func_1294(cParam0);
		func_1295();
		__LIB_0__::func_11(cParam0);
		if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uLocal_202[0]) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(uLocal_202[0], false))
		{
			func_934(cParam0);
		}
	}
	switch (__LIB_6__::func_889(cParam0))
	{
		case 0:
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_72, -1) == Global_35)
			{
				AITRANSPORT::_0x4248AB2EEB3C75AD(iLocal_72, Global_35, 0);
				AITRANSPORT::_0x4248AB2EEB3C75AD(iLocal_72, uLocal_46[0], 1);
				__LIB_1__::func_148(&uLocal_215);
				__LIB_6__::func_876(cParam0, 1);
			}
			break;
		case 1:
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_72, -1) == Global_35 && !AITRANSPORT::_0x660639BC60157048(Global_35, iLocal_72))
			{
				if (!ENTITY::IS_ENTITY_IN_VOLUME(iLocal_72, iLocal_93[6], true, 0) && !ENTITY::IS_ENTITY_IN_VOLUME(iLocal_72, iLocal_93[12], true, 0))
				{
					if (bLocal_1261)
					{
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_EXIT"), false);
						if (__LIB_0__::func_270())
						{
							UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
						}
						if (ENTITY::IS_ENTITY_IN_VOLUME(iLocal_72, iLocal_93[8], true, 0))
						{
							if (!__LIB_10__::func_892(1))
							{
								__LIB_10__::func_894(1);
								func_467(3, 1);
							}
						}
						__LIB_11__::func_221(&uLocal_262, 20);
						__LIB_1__::func_148(&uLocal_218);
						__LIB_1__::func_148(&uLocal_215);
						__LIB_6__::func_876(cParam0, 29);
					}
					else if (ENTITY::IS_ENTITY_IN_VOLUME(iLocal_72, iLocal_93[7], true, 0))
					{
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_EXIT"), false);
						if (__LIB_0__::func_270())
						{
							UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
						}
						__LIB_11__::func_221(&uLocal_262, 20);
						__LIB_1__::func_148(&uLocal_218);
						__LIB_1__::func_148(&uLocal_215);
						__LIB_6__::func_876(cParam0, 29);
					}
					else if ((ENTITY::IS_ENTITY_IN_VOLUME(iLocal_72, iLocal_93[9], true, 0) || ENTITY::IS_ENTITY_IN_VOLUME(iLocal_72, iLocal_93[10], true, 0)) || ENTITY::IS_ENTITY_IN_VOLUME(iLocal_72, iLocal_93[11], true, 0))
					{
						if (ENTITY::IS_ENTITY_IN_VOLUME(iLocal_72, iLocal_93[9], true, 0))
						{
						}
						else if (ENTITY::IS_ENTITY_IN_VOLUME(iLocal_72, iLocal_93[10], true, 0))
						{
						}
						else if (ENTITY::IS_ENTITY_IN_VOLUME(iLocal_72, iLocal_93[11], true, 0))
						{
						}
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_EXIT"), false);
						if (__LIB_0__::func_270())
						{
							UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
						}
						if (!__LIB_10__::func_892(1))
						{
							__LIB_10__::func_894(1);
							func_467(3, 1);
						}
						__LIB_11__::func_221(&uLocal_262, 20);
						__LIB_1__::func_148(&uLocal_218);
						__LIB_1__::func_148(&uLocal_215);
						__LIB_6__::func_876(cParam0, 29);
					}
					bLocal_1262 = true;
				}
				else
				{
					bLocal_1262 = false;
				}
			}
			break;
		case 29:
			break;
	}
	return __LIB_6__::func_889(cParam0) == 29;
}

int func_770(char[4] cParam0)
{
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_EXIT"), false);
	iLocal_182[1] = 0;
	if (__LIB_1__::func_22(13))
	{
		__LIB_9__::func_252(cParam0, 13, uLocal_46[1], 0, 0, 1, 0);
	}
	__LIB_0__::func_325(&iLocal_41);
	MAP::CLEAR_GPS_CUSTOM_ROUTE();
	if (!MAP::DOES_BLIP_EXIST(iLocal_41))
	{
		iLocal_41 = __LIB_4__::func_983(408396114, func_1298(12, 0), 1);
		MAP::_BLIP_SET_MODIFIER(iLocal_41, -1878373110);
		MAP::SET_GPS_FLAGS(512, 0f);
	}
	func_184();
	func_177();
	return 1;
}

int func_772(char[4] cParam0)
{
	if (__LIB_6__::func_862(cParam0, 8))
	{
	}
	func_164(1);
	return 1;
}

int func_773(char[4] cParam0)
{
	int iVar0;
	if (!__LIB_6__::func_862(cParam0, 8))
	{
		if (!func_466(0))
		{
			func_467(0, 1);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_72))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Global_35))
				{
					PED::SET_PED_INTO_VEHICLE(Global_35, iLocal_72, -1);
				}
				else
				{
					return 0;
				}
				iVar0 = 0;
				while (iVar0 <= (2 - 1))
				{
					if (iVar0 == 0)
					{
						if (!ENTITY::IS_ENTITY_DEAD(uLocal_46[iVar0]))
						{
							PED::SET_PED_INTO_VEHICLE(uLocal_46[iVar0], iLocal_72, 0);
							AITRANSPORT::_0x4248AB2EEB3C75AD(iLocal_72, Global_35, 0);
							AITRANSPORT::_0x4248AB2EEB3C75AD(iLocal_72, uLocal_46[iVar0], 1);
						}
					}
					iVar0++;
				}
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_72, 3.5f);
			}
			else
			{
				return 0;
			}
			__LIB_0__::func_489(0f, 0f);
			__LIB_1__::func_148(&uLocal_215);
		}
		if (__LIB_0__::func_265(&uLocal_215) < 0.8f)
		{
			return 0;
		}
	}
	return 1;
}

int func_774(char[4] cParam0)
{
	__LIB_9__::func_60(cParam0, 0);
	__LIB_6__::func_876(cParam0, 0);
	__LIB_1__::func_649(&iLocal_280, 0);
	__LIB_1__::func_649(&iLocal_261, 0);
	__LIB_11__::func_221(&uLocal_262, 0);
	__LIB_11__::func_221(&uLocal_265, 0);
	iLocal_201 = 0;
	__LIB_11__::func_462(&iLocal_167);
	__LIB_11__::func_462(&uLocal_172);
	__LIB_11__::func_463(&uLocal_190);
	__LIB_1__::func_148(&uLocal_215);
	if (__LIB_10__::func_892(2))
	{
		__LIB_10__::func_895(2);
		func_467(1, 0);
	}
	if (__LIB_10__::func_892(4))
	{
		__LIB_10__::func_895(4);
		func_467(2, 0);
	}
	return 1;
}

bool func_775(char[4] cParam0)
{
	int iVar0;
	if (__LIB_6__::func_889(cParam0) > -1 && __LIB_6__::func_889(cParam0) < 29)
	{
		func_1290(cParam0);
		if (ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			return false;
		}
		iVar0 = 0;
		while (iVar0 <= (2 - 1))
		{
			if (iVar0 == 0)
			{
				if (ENTITY::IS_ENTITY_DEAD(uLocal_46[iVar0]))
				{
					return false;
				}
			}
			iVar0++;
		}
		if (ENTITY::IS_ENTITY_DEAD(iLocal_72))
		{
			return false;
		}
		if (ENTITY::IS_ENTITY_DEAD(iLocal_49))
		{
			return false;
		}
		func_1305(cParam0);
		func_1306();
		func_1307();
		func_1308(cParam0);
		__LIB_0__::func_11(cParam0);
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_EXIT"), false);
	switch (__LIB_6__::func_889(cParam0))
	{
		case 0:
			if (func_1309(1))
			{
				__LIB_1__::func_148(&uLocal_215);
				__LIB_6__::func_876(cParam0, 1);
			}
			break;
		case 1:
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_72, -1) == Global_35)
			{
				if (__LIB_8__::func_618(cParam0) == 51 && func_1309(0))
				{
					if (ENTITY::IS_ENTITY_IN_VOLUME(iLocal_72, iLocal_93[16], true, 0))
					{
						if (!__LIB_10__::func_892(2))
						{
							__LIB_10__::func_894(2);
							func_467(1, 1);
						}
					}
					else if (ENTITY::IS_ENTITY_IN_VOLUME(iLocal_72, iLocal_93[17], true, 0))
					{
						if (!__LIB_10__::func_892(4))
						{
							__LIB_10__::func_894(4);
							func_467(2, 1);
						}
					}
					if (__LIB_0__::func_270())
					{
						UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
					}
					__LIB_11__::func_221(&uLocal_262, 20);
					__LIB_1__::func_148(&uLocal_215);
					__LIB_6__::func_876(cParam0, 29);
				}
			}
			break;
		case 29:
			break;
	}
	return __LIB_6__::func_889(cParam0) == 29;
}

int func_776(var uParam0)
{
	if (func_466(8))
	{
		func_467(8, 0);
		if (!ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			TASK::CLEAR_PED_TASKS(Global_35, true, false);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
		}
	}
	if (CAM::_0xDD0B7C5AE58F721D(func_1311()))
	{
		CAM::_0x2412216FCC7B4E3E(func_1311());
	}
	CAM::_0x0A5A4F1979ABB40E(&Local_1268);
	if (CAM::_0xDD0B7C5AE58F721D(&Local_1268))
	{
		CAM::_0x798BE43C9393632B(&Local_1268);
	}
	if (STREAMING::IS_SRL_LOADED())
	{
		STREAMING::END_SRL();
	}
	__LIB_0__::func_325(&iLocal_41);
	func_177();
	return 1;
}

int func_777(var uParam0)
{
	func_164(1);
	return 1;
}

int func_778(char[4] cParam0)
{
	int iVar0;
	int iVar1;
	if (!__LIB_6__::func_862(cParam0, 8))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_72))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				PED::SET_PED_INTO_VEHICLE(Global_35, iLocal_72, -1);
			}
			else
			{
				return 0;
			}
			iVar0 = 0;
			while (iVar0 < 2)
			{
				iVar1 = iVar0;
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_46[iVar0]))
				{
					if (iVar1 == 0)
					{
						PED::SET_PED_INTO_VEHICLE(uLocal_46[iVar0], iLocal_72, 0);
						AITRANSPORT::_0x4248AB2EEB3C75AD(iLocal_72, Global_35, 0);
						AITRANSPORT::_0x4248AB2EEB3C75AD(iLocal_72, uLocal_46[iVar0], 1);
					}
				}
				iVar0++;
			}
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_72, 3.5f);
		}
		else
		{
			return 0;
		}
		__LIB_0__::func_489(0f, 0f);
	}
	else
	{
		func_1312(cParam0);
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_93[19]))
		{
			__LIB_9__::func_364(iLocal_93[19], 0, 0, 0);
		}
	}
	if (__LIB_10__::func_892(1))
	{
		__LIB_10__::func_895(1);
		func_467(3, 0);
	}
	return 1;
}

int func_779(char[4] cParam0)
{
	__LIB_9__::func_60(cParam0, 0);
	__LIB_6__::func_876(cParam0, 0);
	__LIB_11__::func_221(&uLocal_262, 0);
	__LIB_11__::func_221(&uLocal_276, 0);
	__LIB_11__::func_221(&uLocal_265, 0);
	iLocal_201 = 0;
	__LIB_11__::func_462(&iLocal_167);
	__LIB_11__::func_462(&uLocal_172);
	__LIB_11__::func_463(&uLocal_190);
	__LIB_1__::func_148(&uLocal_218);
	__LIB_1__::func_148(&uLocal_215);
	return 1;
}

bool func_780(char[4] cParam0)
{
	int iVar0;
	if (__LIB_6__::func_889(cParam0) > -1 && __LIB_6__::func_889(cParam0) < 29)
	{
		func_1290(cParam0);
		if (ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			return false;
		}
		iVar0 = 0;
		while (iVar0 <= (2 - 1))
		{
			if (iVar0 == 0)
			{
				if (ENTITY::IS_ENTITY_DEAD(uLocal_46[iVar0]))
				{
					return false;
				}
			}
			iVar0++;
		}
		if (ENTITY::IS_ENTITY_DEAD(iLocal_72))
		{
			return false;
		}
		if (ENTITY::IS_ENTITY_DEAD(iLocal_49))
		{
			return false;
		}
		func_1313(cParam0);
		func_1314(cParam0);
		func_1315(cParam0);
		func_1316();
		__LIB_0__::func_11(cParam0);
		func_1317();
		func_1318();
		func_1319();
	}
	switch (__LIB_6__::func_889(cParam0))
	{
		case 0:
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_72, -1) == Global_35)
			{
				func_1320(func_1298(4, 2), 100f, 1109393408 /* Float: 40f */, 1092616192 /* Float: 10f */, 1086324736 /* Float: 6f */, 3.5f, 1077936128 /* Float: 3f */);
				if (ENTITY::IS_ENTITY_IN_VOLUME(iLocal_72, iLocal_93[19], true, 0))
				{
					if (func_1322(iLocal_72, func_1321(4, 2), 45f) || func_1322(iLocal_72, func_1321(4, 3), 45f))
					{
						if (__LIB_0__::func_270())
						{
							UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
						}
						__LIB_0__::func_325(&iLocal_41);
						PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
						PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), true);
						PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), true);
						PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_REVEAL_HUD"), true);
						PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE"), true);
						PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE_ALTERNATE"), true);
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_49))
						{
							TASK::CLEAR_PED_TASKS(iLocal_49, true, false);
							TASK::TASK_STAND_STILL(iLocal_49, -1);
						}
						VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_72, 1f, 5, false);
						__LIB_11__::func_221(&uLocal_262, 20);
						if (!func_1322(iLocal_72, func_1321(4, 2), 1119092736 /* Float: 90f */))
						{
							if (!__LIB_10__::func_892(1))
							{
								__LIB_10__::func_894(1);
								func_467(3, 1);
							}
						}
						return true;
					}
				}
			}
			break;
		case 29:
			break;
	}
	return __LIB_6__::func_889(cParam0) == 29;
}

int func_781(char[4] cParam0)
{
	func_176(cParam0);
	func_177();
	func_1323();
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_72, false, false))
	{
		VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iLocal_72, 13.5f);
	}
	return 1;
}

int func_782(char[4] cParam0)
{
	if (__LIB_6__::func_862(cParam0, 8))
	{
	}
	func_164(1);
	return 1;
}

int func_783(char[4] cParam0)
{
	int iVar0;
	if (!__LIB_6__::func_862(cParam0, 8))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_72))
			{
				if (!PED::IS_PED_IN_VEHICLE(Global_35, iLocal_72, false))
				{
					PED::SET_PED_INTO_VEHICLE(Global_35, iLocal_72, -1);
				}
			}
		}
		else
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 <= (2 - 1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_46[iVar0]))
		{
			if (iVar0 == 0)
			{
				WEAPON::SET_CURRENT_PED_WEAPON(uLocal_46[iVar0], joaat("WEAPON_UNARMED"), true, 0, false, false);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_72))
				{
					if (!PED::IS_PED_IN_VEHICLE(uLocal_46[iVar0], iLocal_72, false))
					{
						PED::SET_PED_INTO_VEHICLE(uLocal_46[iVar0], iLocal_72, 0);
					}
					AITRANSPORT::_0x4248AB2EEB3C75AD(iLocal_72, Global_35, 0);
					AITRANSPORT::_0x4248AB2EEB3C75AD(iLocal_72, uLocal_46[iVar0], 1);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_46[iVar0], true);
			}
			else if (iVar0 == 1)
			{
			}
		}
		iVar0++;
	}
	return 1;
}

int func_784(char[4] cParam0)
{
	PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), true);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), true);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_REVEAL_HUD"), true);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE"), true);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE_ALTERNATE"), true);
	if (!func_934(cParam0))
	{
		return 0;
	}
	__LIB_4__::func_527(&(cParam0->f_7375), 100f);
	__LIB_4__::func_528(&(cParam0->f_7375), 175f);
	__LIB_8__::func_713(cParam0);
	if (__LIB_6__::func_862(cParam0, 8))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
		}
		func_1325(cParam0, 1);
	}
	func_1288(2);
	__LIB_9__::func_60(cParam0, 0);
	__LIB_6__::func_876(cParam0, 0);
	__LIB_1__::func_649(&iLocal_261, 0);
	__LIB_11__::func_221(&uLocal_262, 0);
	__LIB_11__::func_221(&uLocal_265, 0);
	__LIB_1__::func_649(&iLocal_280, 0);
	iLocal_201 = 0;
	__LIB_11__::func_462(&iLocal_167);
	__LIB_11__::func_462(&uLocal_172);
	__LIB_11__::func_463(&uLocal_190);
	__LIB_1__::func_148(&uLocal_218);
	__LIB_0__::func_37(&uLocal_215);
	AUDIO::_0x660A8F876DF1D4F8(21);
	AUDIO::_0x660A8F876DF1D4F8(8);
	AUDIO::_0x660A8F876DF1D4F8(24);
	VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_72, false);
	PED::SET_PED_CONFIG_FLAG(Global_35, 445, true);
	return 1;
}

bool func_785(char[4] cParam0)
{
	int iVar0;
	int iVar1;
	if (__LIB_6__::func_889(cParam0) > -1 && __LIB_6__::func_889(cParam0) < 29)
	{
		func_1290(cParam0);
		if (ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			return false;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			iVar1 = iVar0;
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_46[iVar1]) && PED::IS_PED_DEAD_OR_DYING(uLocal_46[iVar1], true))
			{
				return false;
			}
			iVar0++;
		}
		func_1326(cParam0);
		func_1327(cParam0);
		func_1328(cParam0);
		func_1329(cParam0);
		func_1330(cParam0);
		func_1331(cParam0);
		__LIB_0__::func_11(cParam0);
		func_1332();
		if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_93[18], false, 0))
		{
			ENTITY::_0x18FF3110CF47115D(Global_35, 9, 0);
		}
		else
		{
			ENTITY::_0x18FF3110CF47115D(Global_35, 9, 1);
		}
	}
	switch (__LIB_6__::func_889(cParam0))
	{
		case 0:
			if (func_1333(cParam0))
			{
				func_467(8, 1);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 256, false);
				if (__LIB_0__::func_270())
				{
					UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
				}
				func_176(cParam0);
				func_1334(cParam0);
				__LIB_1__::func_148(&uLocal_218);
				__LIB_1__::func_148(&uLocal_215);
				__LIB_9__::func_60(cParam0, 51);
				__LIB_6__::func_876(cParam0, 29);
			}
			break;
	}
	return __LIB_6__::func_889(cParam0) == 29;
}

int func_786(char[4] cParam0)
{
	func_176(cParam0);
	func_177();
	VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_72, true);
	PED::SET_PED_CONFIG_FLAG(Global_35, 446, false);
	PED::SET_PED_CONFIG_FLAG(Global_35, 445, false);
	func_1335();
	func_1336();
	ENTITY::_0x18FF3110CF47115D(Global_35, 9, 1);
	return 1;
}

int func_788(char[4] cParam0)
{
	int iVar0;
	if (__LIB_10__::func_892(1))
	{
		func_467(3, 1);
	}
	else
	{
		func_467(3, 0);
	}
	if (!__LIB_6__::func_862(cParam0, 8))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_72))
		{
		}
		else
		{
			return 0;
		}
		if (!ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			PED::SET_PED_INTO_VEHICLE(Global_35, iLocal_72, -1);
		}
		else
		{
			return 0;
		}
		iVar0 = 0;
		while (iVar0 <= (2 - 1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_46[iVar0]))
			{
				if (iVar0 == 0)
				{
					PED::SET_PED_INTO_VEHICLE(uLocal_46[iVar0], iLocal_72, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_46[iVar0], true);
					TASK::TASK_STAND_STILL(uLocal_46[iVar0], -1);
				}
			}
			iVar0++;
		}
	}
	func_173(1);
	MISC::_0x2FCD528A397E5C88(iLocal_93[19], 2179080);
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_46[0]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_72))
		{
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_72, true);
			AITRANSPORT::_0x4248AB2EEB3C75AD(iLocal_72, Global_35, 0);
			AITRANSPORT::_0x4248AB2EEB3C75AD(iLocal_72, uLocal_46[0], 1);
		}
	}
	return 1;
}

int func_789(char[4] cParam0)
{
	if (!func_934(cParam0))
	{
		return 0;
	}
	if (__LIB_6__::func_872(cParam0, 4))
	{
		__LIB_0__::func_489(0f, 0f);
	}
	func_1288(4);
	__LIB_9__::func_60(cParam0, 0);
	__LIB_6__::func_876(cParam0, 0);
	__LIB_11__::func_221(&uLocal_262, 0);
	__LIB_11__::func_221(&uLocal_265, 0);
	iLocal_201 = 0;
	__LIB_11__::func_462(&iLocal_167);
	__LIB_11__::func_462(&uLocal_172);
	__LIB_11__::func_463(&uLocal_190);
	__LIB_1__::func_148(&uLocal_218);
	__LIB_1__::func_148(&uLocal_215);
	func_1337();
	func_164(1);
	return 1;
}

bool func_790(char[4] cParam0)
{
	int iVar0;
	if (__LIB_6__::func_889(cParam0) > -1 && __LIB_6__::func_889(cParam0) < 29)
	{
		func_1290(cParam0);
		if (ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			return false;
		}
		iVar0 = 0;
		while (iVar0 <= (2 - 1))
		{
			if (iVar0 == 0)
			{
				if (ENTITY::IS_ENTITY_DEAD(uLocal_46[iVar0]))
				{
					return false;
				}
			}
			iVar0++;
		}
		if (ENTITY::IS_ENTITY_DEAD(iLocal_72))
		{
			return false;
		}
		func_1338(cParam0);
		func_1339();
		func_1340(cParam0);
		__LIB_0__::func_11(cParam0);
	}
	switch (__LIB_6__::func_889(cParam0))
	{
		case 0:
			if (__LIB_0__::func_265(&uLocal_215) >= 30f)
			{
				__LIB_1__::func_148(&uLocal_215);
				__LIB_6__::func_876(cParam0, 1);
			}
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), true);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), true);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_REVEAL_HUD"), true);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE"), true);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE_ALTERNATE"), true);
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uLocal_202[4]))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(uLocal_202[4], true, false))
				{
					if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(uLocal_202[4], false))
					{
						func_468(4);
						__LIB_1__::func_148(&uLocal_215);
						__LIB_6__::func_876(cParam0, 1);
					}
				}
			}
			break;
		case 1:
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_72, -1) == Global_35 && PED::IS_PED_IN_VEHICLE(Global_35, iLocal_72, false))
			{
				__LIB_1__::func_148(&uLocal_215);
				__LIB_6__::func_876(cParam0, 2);
			}
			break;
		case 2:
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_72, -1) == Global_35 && PED::IS_PED_IN_VEHICLE(Global_35, iLocal_72, false))
			{
				if (ENTITY::IS_ENTITY_IN_VOLUME(iLocal_72, iLocal_93[20], true, 0))
				{
					if (__LIB_0__::func_270())
					{
						UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
					}
					__LIB_11__::func_221(&uLocal_262, 20);
					__LIB_1__::func_148(&uLocal_218);
					__LIB_1__::func_148(&uLocal_215);
					__LIB_6__::func_876(cParam0, 29);
				}
				else if (ENTITY::IS_ENTITY_IN_VOLUME(iLocal_72, iLocal_93[21], true, 0))
				{
					if (__LIB_0__::func_270())
					{
						UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
					}
					__LIB_11__::func_221(&uLocal_262, 20);
					__LIB_1__::func_148(&uLocal_218);
					__LIB_1__::func_148(&uLocal_215);
					__LIB_6__::func_876(cParam0, 29);
				}
			}
			break;
		case 29:
			break;
	}
	return __LIB_6__::func_889(cParam0) == 29;
}

int func_791(var uParam0)
{
	func_173(0);
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_93[19]))
	{
		__LIB_3__::func_59(iLocal_93[19]);
	}
	func_469();
	func_177();
	return 1;
}

int func_792(char[4] cParam0)
{
	if (__LIB_6__::func_862(cParam0, 8))
	{
	}
	func_164(1);
	return 1;
}

int func_793(char[4] cParam0)
{
	int iVar0;
	if (!__LIB_6__::func_862(cParam0, 8))
	{
		if (!func_466(0))
		{
			func_467(0, 1);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_72))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Global_35))
				{
					PED::SET_PED_INTO_VEHICLE(Global_35, iLocal_72, -1);
				}
				else
				{
					return 0;
				}
				iVar0 = 0;
				while (iVar0 <= (2 - 1))
				{
					if (!ENTITY::IS_ENTITY_DEAD(uLocal_46[iVar0]))
					{
						if (iVar0 == 0)
						{
							PED::SET_PED_INTO_VEHICLE(uLocal_46[iVar0], iLocal_72, 0);
							TASK::_0xE01F55B2896F6B37(iLocal_72, 1);
							AITRANSPORT::_0x4248AB2EEB3C75AD(iLocal_72, uLocal_46[iVar0], 0);
							AITRANSPORT::_0x4248AB2EEB3C75AD(iLocal_72, Global_35, 1);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_46[iVar0], true);
							TASK::_TASK_VEHICLE_DRIVE_TO_DESTINATION(uLocal_46[iVar0], iLocal_72, func_1298(12, 4), 4.5f, 69468168, 3, 5f, 5f, 0);
						}
					}
					iVar0++;
				}
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_72, 3.5f);
			}
			else
			{
				return 0;
			}
			__LIB_0__::func_489(0f, 0f);
			__LIB_1__::func_148(&uLocal_215);
		}
		if (__LIB_0__::func_265(&uLocal_215) < 0.8f)
		{
			return 0;
		}
	}
	return 1;
}

int func_794(char[4] cParam0)
{
	if (__LIB_6__::func_862(cParam0, 8))
	{
		func_467(4, 0);
	}
	__LIB_9__::func_60(cParam0, 0);
	__LIB_6__::func_876(cParam0, 0);
	__LIB_11__::func_221(&uLocal_262, 0);
	__LIB_11__::func_221(&uLocal_265, 0);
	iLocal_201 = 0;
	__LIB_11__::func_462(&iLocal_167);
	__LIB_11__::func_462(&uLocal_172);
	__LIB_11__::func_463(&uLocal_190);
	__LIB_1__::func_148(&uLocal_218);
	__LIB_1__::func_148(&uLocal_215);
	return 1;
}

bool func_795(char[4] cParam0)
{
	int iVar0;
	if (__LIB_6__::func_889(cParam0) > -1 && __LIB_6__::func_889(cParam0) < 29)
	{
		func_1290(cParam0);
		if (ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			return false;
		}
		iVar0 = 0;
		while (iVar0 <= (2 - 1))
		{
			if (iVar0 == 0)
			{
				if (ENTITY::IS_ENTITY_DEAD(uLocal_46[iVar0]))
				{
					return false;
				}
			}
			iVar0++;
		}
		if (ENTITY::IS_ENTITY_DEAD(iLocal_72))
		{
			return false;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
		{
			PED::SET_PED_RESET_FLAG(Global_35, 173, true);
		}
		func_1341(cParam0);
		func_1342(cParam0);
		func_1343(cParam0);
		func_1344();
		func_1345();
		func_1346();
		__LIB_0__::func_11(cParam0);
	}
	switch (__LIB_6__::func_889(cParam0))
	{
		case 0:
			if ((func_1347() && !AITRANSPORT::_0x660639BC60157048(Global_35, iLocal_72)) && ENTITY::IS_ENTITY_IN_VOLUME(iLocal_72, iLocal_93[30], true, 0))
			{
				__LIB_1__::func_148(&uLocal_218);
				__LIB_9__::func_60(cParam0, 51);
				__LIB_1__::func_148(&uLocal_215);
				__LIB_6__::func_876(cParam0, 29);
			}
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_93[43], true, 0))
			{
				func_1348(iLocal_65);
			}
			break;
		case 29:
			break;
	}
	return __LIB_6__::func_889(cParam0) == 29;
}

int func_796(char[4] cParam0)
{
	func_185();
	func_176(cParam0);
	func_177();
	func_1349();
	return 1;
}

int func_797(char[4] cParam0)
{
	if (__LIB_6__::func_862(cParam0, 8))
	{
	}
	func_164(1);
	return 1;
}

int func_798(char[4] cParam0)
{
	int iVar0;
	if (!__LIB_6__::func_862(cParam0, 8))
	{
		if (!func_466(0))
		{
			func_467(0, 1);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_72))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Global_35))
				{
					PED::SET_PED_INTO_VEHICLE(Global_35, iLocal_72, -1);
				}
				else
				{
					return 0;
				}
				iVar0 = 0;
				while (iVar0 <= (2 - 1))
				{
					if (!ENTITY::IS_ENTITY_DEAD(uLocal_46[iVar0]))
					{
						if (iVar0 == 0)
						{
							PED::SET_PED_INTO_VEHICLE(uLocal_46[iVar0], iLocal_72, 0);
							TASK::_0xE01F55B2896F6B37(iLocal_72, 1);
							AITRANSPORT::_0x4248AB2EEB3C75AD(iLocal_72, uLocal_46[iVar0], 0);
							AITRANSPORT::_0x4248AB2EEB3C75AD(iLocal_72, Global_35, 1);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_46[iVar0], true);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_40);
							TASK::_TASK_VEHICLE_DRIVE_TO_DESTINATION(0, iLocal_72, func_1298(12, 4), 6f, 69468672, 3, 5f, 5f, 0);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_40);
							TASK::TASK_PERFORM_SEQUENCE(uLocal_46[iVar0], iLocal_40);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_40);
						}
					}
					iVar0++;
				}
				iVar0 = 0;
				while (iVar0 <= (3 - 1))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_50[iVar0]))
					{
						PED::SET_PED_RESET_FLAG(iLocal_50[iVar0], 3, true);
						if (iVar0 == 0)
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_54[iVar0]))
							{
								func_1350(iLocal_50[iVar0], iLocal_54[iVar0]);
							}
						}
						PED::SET_PED_CONFIG_FLAG(iLocal_50[iVar0], 167, true);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_50[iVar0], true);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_40);
						if (iVar0 == 0)
						{
							TASK::TASK_FOLLOW_ENTITY_ALONG_WAYPOINT_RECORDING_AT_OFFSET(0, iLocal_72, "mar2_ride_ambush", 0f, -60f, 0, 1544, -1, 0);
						}
						else if (iVar0 == 1)
						{
						}
						else if (iVar0 == 2)
						{
						}
						TASK::TASK_STAND_STILL(0, -1);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_40);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_50[iVar0], iLocal_40);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_40);
					}
					iVar0++;
				}
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_72, 3.5f);
			}
			else
			{
				return 0;
			}
			__LIB_0__::func_489(0f, 0f);
			__LIB_1__::func_148(&uLocal_215);
		}
		if (__LIB_0__::func_265(&uLocal_215) < 0.8f)
		{
			return 0;
		}
	}
	return 1;
}

int func_799(char[4] cParam0)
{
	int iVar0;
	__LIB_4__::func_527(&(cParam0->f_7375), 250f);
	__LIB_4__::func_528(&(cParam0->f_7375), 350f);
	__LIB_9__::func_53(cParam0);
	if (__LIB_6__::func_862(cParam0, 8))
	{
		iVar0 = 0;
		while (iVar0 <= (2 - 1))
		{
			if (iVar0 == 0)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_46[iVar0]))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_46[iVar0], true);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_40);
					TASK::_TASK_VEHICLE_DRIVE_TO_DESTINATION(0, iLocal_72, func_1298(12, 4), 6f, 69468672, 3, 5f, 5f, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_40);
					TASK::TASK_PERFORM_SEQUENCE(uLocal_46[iVar0], iLocal_40);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_40);
				}
			}
			iVar0++;
		}
	}
	__LIB_9__::func_60(cParam0, 0);
	__LIB_6__::func_876(cParam0, 0);
	__LIB_11__::func_221(&uLocal_262, 0);
	__LIB_11__::func_221(&uLocal_265, 0);
	iLocal_201 = 0;
	__LIB_11__::func_462(&iLocal_167);
	__LIB_11__::func_462(&uLocal_172);
	__LIB_11__::func_463(&uLocal_190);
	__LIB_1__::func_148(&uLocal_218);
	__LIB_1__::func_148(&uLocal_215);
	uLocal_337 = GRAPHICS::_0xBD3324281E8B9933(iLocal_93[47], 2, 4, 0);
	return 1;
}

bool func_800(char[4] cParam0)
{
	int iVar0;
	if (__LIB_6__::func_889(cParam0) > -1 && __LIB_6__::func_889(cParam0) < 29)
	{
		func_1290(cParam0);
		if (ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			return false;
		}
		iVar0 = 0;
		while (iVar0 <= (2 - 1))
		{
			if (iVar0 == 0)
			{
				if (ENTITY::IS_ENTITY_DEAD(uLocal_46[iVar0]))
				{
					return false;
				}
			}
			iVar0++;
		}
		if (ENTITY::IS_ENTITY_DEAD(iLocal_72))
		{
			return false;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
		{
			PED::SET_PED_RESET_FLAG(Global_35, 173, true);
		}
		func_1352(cParam0);
		func_1353(cParam0);
		func_1354(cParam0);
		__LIB_0__::func_11(cParam0);
	}
	if (ENTITY::IS_ENTITY_IN_VOLUME(iLocal_72, iLocal_93[32], true, 0))
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uLocal_202[5]))
		{
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(uLocal_202[5], false) && !ANIMSCENE::_IS_ANIM_SCENE_FINISHED(uLocal_202[5], false))
			{
				func_1288(5);
			}
		}
	}
	switch (__LIB_6__::func_889(cParam0))
	{
		case 0:
			if (!func_466(9))
			{
				if (ENTITY::IS_ENTITY_IN_VOLUME(iLocal_72, iLocal_93[31], true, 0))
				{
					func_467(9, 1);
					func_1325(cParam0, 2);
				}
			}
			if (ENTITY::IS_ENTITY_IN_VOLUME(iLocal_72, iLocal_93[33], true, 0))
			{
				__LIB_1__::func_148(&uLocal_215);
				__LIB_6__::func_876(cParam0, 1);
			}
			break;
		case 1:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_72))
			{
				AITRANSPORT::_0x4248AB2EEB3C75AD(iLocal_72, Global_35, 0);
				AITRANSPORT::_0x4248AB2EEB3C75AD(iLocal_72, uLocal_46[0], 1);
				TASK::_0xE01F55B2896F6B37(iLocal_72, 1);
			}
			if (__LIB_0__::func_270())
			{
				UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
			}
			__LIB_11__::func_221(&uLocal_262, 20);
			__LIB_1__::func_148(&uLocal_218);
			__LIB_6__::func_876(cParam0, 29);
			break;
		case 29:
			break;
	}
	return __LIB_6__::func_889(cParam0) == 29;
}

int func_801(char[4] cParam0)
{
	func_176(cParam0);
	func_177();
	return 1;
}

int func_802(char[4] cParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_50[iVar0]) || !PED::_0xA0BC8FAED8CFEB3C(iLocal_50[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	uLocal_337 = GRAPHICS::_0xBD3324281E8B9933(iLocal_93[47], 2, 4, 0);
	if (__LIB_6__::func_862(cParam0, 8))
	{
		func_467(34, 1);
	}
	return 1;
}

int func_803(char[4] cParam0)
{
	int iVar0;
	int iVar1;
	if (__LIB_6__::func_862(cParam0, 8))
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			iVar1 = iVar0;
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_50[iVar1]))
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_50[iVar1], 167, false);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_54[iVar1]))
				{
					if (!PED::IS_PED_ON_MOUNT(iLocal_50[iVar1]))
					{
						PED::_SET_PED_ON_MOUNT(iLocal_50[iVar1], iLocal_54[iVar1], -1, true);
					}
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_50[iVar0], true);
				PED::SET_PED_RESET_FLAG(iLocal_50[iVar1], 3, true);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_40);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_40);
				switch (iVar1)
				{
					case 0:
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_1298(7, 12), 1.25f, 90000, 8f, 0, 40000f);
						break;
					case 1:
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_1298(7, 13), 1.25f, 90000, 8f, 0, 40000f);
						break;
					case 2:
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_1298(7, 14), 1.001f, 90000, 8f, 0, 40000f);
						break;
				}
				TASK::TASK_STAND_STILL(0, -1);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_40);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_50[iVar0], iLocal_40);
			}
			switch (iVar1)
			{
				case 0:
					func_1355(iLocal_54[iVar1], func_228(7, 6), 2, 1073741824 /* Float: 2f */);
					break;
				case 1:
					func_1355(iLocal_54[iVar1], func_228(7, 7), 2, 1073741824 /* Float: 2f */);
					break;
				case 2:
					func_1355(iLocal_54[iVar1], func_228(7, 8), 2, 1073741824 /* Float: 2f */);
					break;
			}
			iVar0++;
		}
	}
	LAW::_0x710448D44A64C213(0);
	return 1;
}

int func_804(char[4] cParam0)
{
	int iVar0;
	int iVar1;
	func_1356(cParam0);
	if (!func_1357() && !func_1358())
	{
		return 0;
	}
	func_467(34, 0);
	__LIB_9__::func_60(cParam0, 0);
	__LIB_6__::func_876(cParam0, 0);
	__LIB_1__::func_649(&iLocal_261, 0);
	__LIB_11__::func_221(&uLocal_262, 0);
	__LIB_11__::func_221(&uLocal_265, 0);
	iLocal_201 = 0;
	__LIB_11__::func_462(&iLocal_167);
	__LIB_11__::func_462(&uLocal_172);
	__LIB_11__::func_463(&uLocal_190);
	__LIB_1__::func_148(&uLocal_218);
	__LIB_1__::func_148(&uLocal_215);
	func_1359(1);
	AUDIO::STOP_PED_SPEAKING(uLocal_46[0], true);
	WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_RIFLE_BOLTACTION"), true, 1, false, false);
	iVar0 = WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(joaat("WEAPON_RIFLE_BOLTACTION"));
	iVar1 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar0);
	if (iVar1 < 20)
	{
		WEAPON::SET_PED_AMMO_BY_TYPE(Global_35, iVar0, 20);
	}
	func_164(0);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_72, false, false))
	{
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_72, false);
	}
	return 1;
}

bool func_805(char[4] cParam0)
{
	int iVar0;
	if (!bLocal_188 && __LIB_5__::func_577(&uLocal_368, "MAR2_MCS4", 1, 1))
	{
		bLocal_188 = true;
	}
	if (__LIB_6__::func_889(cParam0) > -1 && __LIB_6__::func_889(cParam0) < 29)
	{
		func_1290(cParam0);
		if (ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			return false;
		}
		iVar0 = 0;
		while (iVar0 <= (2 - 1))
		{
			if (iVar0 == 0)
			{
				if (ENTITY::IS_ENTITY_DEAD(uLocal_46[iVar0]))
				{
					return false;
				}
			}
			iVar0++;
		}
		func_1356(cParam0);
		func_1360(cParam0);
		func_1361();
		__LIB_0__::func_11(cParam0);
	}
	switch (__LIB_6__::func_889(cParam0))
	{
		case 0:
			if (func_1362())
			{
				__LIB_6__::func_876(cParam0, 1);
			}
			break;
		case 1:
			if (func_1363())
			{
				if (__LIB_0__::func_270())
				{
					UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
				}
				__LIB_1__::func_148(&uLocal_215);
				__LIB_6__::func_876(cParam0, 29);
			}
			break;
		case 29:
			break;
	}
	return __LIB_6__::func_889(cParam0) == 29;
}

int func_806(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), false, 0, -1, false);
	}
	TASK::REMOVE_COVER_POINT(iLocal_1351);
	TASK::REMOVE_COVER_POINT(iLocal_1352);
	__LIB_0__::func_325(&iLocal_41);
	func_1359(0);
	func_177();
	AUDIO::STOP_PED_SPEAKING(uLocal_46[0], false);
	__LIB_2__::func_279(Global_35, 0);
	return 1;
}

int func_807(char[4] cParam0)
{
	uLocal_337 = GRAPHICS::_0xBD3324281E8B9933(iLocal_93[47], 2, 4, 0);
	if (__LIB_6__::func_862(cParam0, 8))
	{
	}
	LAW::_0x710448D44A64C213(0);
	return 1;
}

int func_808(char[4] cParam0)
{
	if (__LIB_6__::func_862(cParam0, 8))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_46[0]))
		{
			if (PED::_0xB655DB7582AEC805(uLocal_46[0]))
			{
				PED::_0xF6262491C7704A63(uLocal_46[0], 0);
			}
		}
	}
	if (bLocal_188)
	{
		__LIB_6__::func_868(cParam0, 4194304);
	}
	return 1;
}

int func_809(char[4] cParam0)
{
	int iVar0;
	if (!__LIB_6__::func_862(cParam0, 8))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_72))
		{
		}
		else
		{
			return 0;
		}
		if (!ENTITY::IS_ENTITY_DEAD(Global_35))
		{
		}
		else
		{
			return 0;
		}
		iVar0 = 0;
		while (iVar0 <= (2 - 1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_46[iVar0]))
			{
				if (iVar0 == 0)
				{
					AITRANSPORT::_0x4248AB2EEB3C75AD(iLocal_72, Global_35, 0);
					AITRANSPORT::_0x4248AB2EEB3C75AD(iLocal_72, uLocal_46[iVar0], 1);
				}
			}
			iVar0++;
		}
		func_1288(6);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1f);
	}
	else
	{
		func_1325(cParam0, 3);
	}
	__LIB_9__::func_60(cParam0, 0);
	__LIB_6__::func_876(cParam0, 0);
	__LIB_11__::func_221(&uLocal_262, 0);
	__LIB_11__::func_221(&uLocal_265, 0);
	iLocal_201 = 0;
	__LIB_11__::func_462(&iLocal_167);
	__LIB_11__::func_462(&uLocal_172);
	__LIB_11__::func_463(&uLocal_190);
	__LIB_1__::func_148(&uLocal_218);
	__LIB_1__::func_148(&uLocal_215);
	func_164(2);
	return 1;
}

bool func_810(char[4] cParam0)
{
	int iVar0;
	if (__LIB_6__::func_889(cParam0) > -1 && __LIB_6__::func_889(cParam0) < 29)
	{
		func_1290(cParam0);
		if (ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			return false;
		}
		iVar0 = 0;
		while (iVar0 <= (2 - 1))
		{
			if (iVar0 == 0)
			{
				if (ENTITY::IS_ENTITY_DEAD(uLocal_46[iVar0]))
				{
					return false;
				}
			}
			iVar0++;
		}
		func_1364(cParam0);
		func_1365(cParam0);
		func_1366();
		__LIB_0__::func_11(cParam0);
	}
	__LIB_4__::func_614();
	switch (__LIB_6__::func_889(cParam0))
	{
		case 0:
			if (func_1368(cParam0, 0))
			{
				func_467(8, 1);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 0, false);
				if (__LIB_0__::func_270())
				{
					UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
				}
				func_176(cParam0);
				__LIB_11__::func_221(&uLocal_262, 20);
				__LIB_1__::func_148(&uLocal_218);
				__LIB_1__::func_148(&uLocal_215);
				__LIB_6__::func_876(cParam0, 29);
				func_1369();
				func_1370(cParam0, 0);
			}
			break;
		case 29:
			break;
	}
	return __LIB_6__::func_889(cParam0) == 29;
}

int func_811(char[4] cParam0)
{
	func_176(cParam0);
	if (__LIB_8__::func_684("MISSION_CREATE_CONVERSATION"))
	{
		__LIB_6__::func_900("MISSION_CREATE_CONVERSATION", 0, 0);
	}
	func_177();
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_72, false, false))
	{
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_72, true);
	}
	return 1;
}

int func_812(var uParam0)
{
	uLocal_337 = GRAPHICS::_0xBD3324281E8B9933(iLocal_93[47], 2, 4, 0);
	func_164(2);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_72, false, false))
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_72, -1745.369f, 312.5629f, 109.5282f, -38.69f, false, false, true);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_72, 0f);
	}
	return 1;
}

int func_813(char[4] cParam0)
{
	int iVar0;
	if (__LIB_6__::func_862(cParam0, 8))
	{
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_93[5]))
		{
			PATHFIND::_0xD17672447692478E(iLocal_93[5], 0);
			PATHFIND::_0xC1799FAFD2FDF52B(iLocal_93[5], 0, 0, 1);
			PATHFIND::_0xC1799FAFD2FDF52B(iLocal_93[68], 0, 0, 0);
		}
	}
	else if (!ENTITY::IS_ENTITY_DEAD(iLocal_72))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			PED::SET_PED_INTO_VEHICLE(Global_35, iLocal_72, -1);
		}
		else
		{
			return 0;
		}
		iVar0 = 0;
		while (iVar0 <= (2 - 1))
		{
			if (iVar0 == 0)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_46[iVar0]))
				{
					PED::SET_PED_INTO_VEHICLE(uLocal_46[iVar0], iLocal_72, 0);
				}
			}
			iVar0++;
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_814(char[4] cParam0)
{
	func_467(4, 0);
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_72))
	{
		AITRANSPORT::_0x4248AB2EEB3C75AD(iLocal_72, Global_35, 0);
		AITRANSPORT::_0x4248AB2EEB3C75AD(iLocal_72, uLocal_46[0], 1);
	}
	func_467(8, 0);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
	__LIB_0__::func_489(0f, 0f);
	__LIB_9__::func_60(cParam0, 0);
	__LIB_6__::func_876(cParam0, 0);
	__LIB_11__::func_221(&uLocal_262, 0);
	__LIB_11__::func_221(&uLocal_265, 0);
	iLocal_201 = 0;
	__LIB_11__::func_462(&iLocal_167);
	__LIB_11__::func_462(&uLocal_172);
	__LIB_11__::func_463(&uLocal_190);
	__LIB_1__::func_148(&uLocal_218);
	__LIB_0__::func_37(&uLocal_1433);
	func_1373();
	LAW::_0x710448D44A64C213(1);
	return 1;
}

bool func_815(char[4] cParam0)
{
	int iVar0;
	if (__LIB_6__::func_889(cParam0) > -1 && __LIB_6__::func_889(cParam0) < 29)
	{
		func_1290(cParam0);
		if (ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			return false;
		}
		iVar0 = 0;
		while (iVar0 <= (2 - 1))
		{
			if (iVar0 == 0)
			{
				if (ENTITY::IS_ENTITY_DEAD(uLocal_46[iVar0]))
				{
					return false;
				}
			}
			iVar0++;
		}
		func_1374(cParam0);
		func_1375(cParam0);
		__LIB_0__::func_11(cParam0);
		func_1376(cParam0);
	}
	func_440(cParam0, 1, -2590.037f, 465.5254f, 145.1149f, 79.8012f, 1, 1, 1);
	switch (__LIB_6__::func_889(cParam0))
	{
		case 0:
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_72, -1) == Global_35)
			{
				__LIB_6__::func_876(cParam0, 1);
			}
			break;
		case 1:
			if (!bLocal_1424)
			{
				if (func_466(4))
				{
					if (!func_1347())
					{
						func_1377();
					}
					func_1378(func_1347());
					if (func_1379())
					{
						if (func_1380())
						{
							bLocal_1423 = true;
						}
						else if (func_1381())
						{
							bLocal_1423 = false;
						}
						bLocal_1424 = true;
						func_467(4, 0);
						func_1377();
						__LIB_1__::func_148(&uLocal_218);
					}
					if ((__LIB_8__::func_803(&uLocal_1433, 12f) && !bLocal_1424) && func_1347())
					{
						if (__LIB_0__::func_871())
						{
							bLocal_1423 = true;
						}
						else
						{
							bLocal_1423 = false;
						}
						bLocal_1424 = true;
						func_467(4, 0);
						func_1377();
						__LIB_1__::func_148(&uLocal_218);
					}
				}
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_72, -1) == Global_35)
			{
				if (ENTITY::IS_ENTITY_IN_VOLUME(iLocal_72, iLocal_93[6], true, 0))
				{
					if (__LIB_0__::func_270())
					{
						UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
					}
					__LIB_11__::func_221(&uLocal_262, 20);
					__LIB_1__::func_148(&uLocal_218);
					__LIB_9__::func_60(cParam0, 51);
					__LIB_6__::func_876(cParam0, 29);
				}
			}
			break;
		case 29:
			break;
	}
	return __LIB_6__::func_889(cParam0) == 29;
}

int func_816(char[4] cParam0)
{
	func_185();
	func_1377();
	func_176(cParam0);
	func_177();
	return 1;
}

int func_817(char[4] cParam0)
{
	if (!func_440(cParam0, 1, -2590.037f, 465.5254f, 145.1149f, 79.8012f, 1, 1, 1))
	{
		return 0;
	}
	uLocal_337 = GRAPHICS::_0xBD3324281E8B9933(iLocal_93[47], 2, 4, 0);
	return 1;
}

int func_818(var uParam0)
{
	int iVar0;
	if (__LIB_6__::func_862(uParam0, 8))
	{
		if (func_1383(uParam0))
		{
		}
		else
		{
			return 0;
		}
	}
	else
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_72))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				PED::SET_PED_INTO_VEHICLE(Global_35, iLocal_72, -1);
			}
			else
			{
				return 0;
			}
			iVar0 = 0;
			while (iVar0 <= (2 - 1))
			{
				if (iVar0 == 0)
				{
					if (!ENTITY::IS_ENTITY_DEAD(uLocal_46[iVar0]))
					{
						PED::SET_PED_INTO_VEHICLE(uLocal_46[iVar0], iLocal_72, 0);
						AITRANSPORT::_0x4248AB2EEB3C75AD(iLocal_72, Global_35, 0);
						AITRANSPORT::_0x4248AB2EEB3C75AD(iLocal_72, uLocal_46[iVar0], 1);
					}
				}
				iVar0++;
			}
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_72, 3.5f);
		}
		else
		{
			return 0;
		}
		__LIB_0__::func_489(0f, 0f);
	}
	func_164(3);
	return 1;
}

int func_819(char[4] cParam0)
{
	if (__LIB_6__::func_862(cParam0, 8))
	{
		func_1325(cParam0, 4);
	}
	__LIB_4__::func_527(&(cParam0->f_7375), 100f);
	__LIB_4__::func_528(&(cParam0->f_7375), 175f);
	func_175(0);
	__LIB_9__::func_60(cParam0, 0);
	__LIB_6__::func_876(cParam0, 0);
	__LIB_11__::func_221(&uLocal_262, 0);
	__LIB_11__::func_221(&uLocal_278, 0);
	__LIB_11__::func_221(&uLocal_265, 0);
	iLocal_201 = 0;
	__LIB_11__::func_462(&iLocal_167);
	__LIB_11__::func_462(&uLocal_172);
	__LIB_11__::func_463(&uLocal_190);
	__LIB_1__::func_148(&uLocal_218);
	__LIB_1__::func_148(&uLocal_215);
	return 1;
}

bool func_820(char[4] cParam0)
{
	int iVar0;
	if (__LIB_6__::func_889(cParam0) > -1 && __LIB_6__::func_889(cParam0) < 29)
	{
		func_1290(cParam0);
		if (ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			return false;
		}
		iVar0 = 0;
		while (iVar0 <= (2 - 1))
		{
			if (iVar0 == 0)
			{
				if (ENTITY::IS_ENTITY_DEAD(uLocal_46[iVar0]))
				{
					return false;
				}
			}
			iVar0++;
		}
		func_1384(cParam0);
		func_1385(cParam0);
		__LIB_0__::func_11(cParam0);
	}
	func_934(cParam0);
	switch (__LIB_6__::func_889(cParam0))
	{
		case 0:
			if (__LIB_0__::func_94(Global_35, -2586.254f, 455.4355f, 145.1662f, 0) < 12f)
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_EXIT"), false);
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_72, -1) == Global_35)
			{
				func_1320(func_1298(12, 5), 40f, 20f, 1092616192 /* Float: 10f */, 1086324736 /* Float: 6f */, 1082130432 /* Float: 4f */, 1077936128 /* Float: 3f */);
				if (ENTITY::IS_ENTITY_IN_VOLUME(iLocal_72, iLocal_93[13], true, 0))
				{
					if (__LIB_0__::func_270())
					{
						UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
					}
					__LIB_0__::func_325(&iLocal_41);
					MAP::CLEAR_GPS_CUSTOM_ROUTE();
					func_467(8, 1);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 256, false);
					VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_72, 1f, 5, false);
					__LIB_1__::func_148(&uLocal_218);
					__LIB_1__::func_148(&uLocal_215);
					__LIB_6__::func_876(cParam0, 1);
				}
			}
			break;
		case 1:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_49))
			{
				TASK::CLEAR_PED_TASKS(iLocal_49, true, false);
				TASK::TASK_STAND_STILL(iLocal_49, -1);
			}
			if (__LIB_5__::func_79(Global_35, &iLocal_201, 1, 0, 0, 1084227584 /* Float: 5f */, 100, 0, 0) || __LIB_0__::func_265(&uLocal_215) >= 5f)
			{
				func_467(7, 1);
				VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_72, 1f, 5, false);
				func_164(0);
				if (!ENTITY::IS_ENTITY_DEAD(Global_35))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_35, true);
					TASK::TASK_VEHICLE_TEMP_ACTION(Global_35, iLocal_72, 24, 5000);
				}
				__LIB_1__::func_148(&uLocal_215);
				__LIB_6__::func_876(cParam0, 2);
			}
			break;
		case 2:
			if (!bLocal_1436)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_49))
				{
					bLocal_1436 = true;
					TASK::CLEAR_PED_TASKS(iLocal_49, true, false);
					TASK::TASK_STAND_STILL(iLocal_49, -1);
				}
			}
			if (__LIB_0__::func_265(&uLocal_215) >= 1.5f)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Global_35))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_35, true);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_40);
					TASK::TASK_LEAVE_VEHICLE(0, iLocal_72, 0, 0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_1298(11, 0), 1f, 20000, 0.25f, 0, 40000f);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, uLocal_46[1], -1, -1f, -1f, -1f);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_40);
					TASK::TASK_PERFORM_SEQUENCE(Global_35, iLocal_40);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_40);
				}
				__LIB_1__::func_148(&uLocal_215);
				__LIB_6__::func_876(cParam0, 3);
			}
			break;
		case 3:
			if (__LIB_0__::func_265(&uLocal_215) > 1f)
			{
				CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			}
			if (__LIB_0__::func_265(&uLocal_215) >= 2.5f)
			{
				if (__LIB_0__::func_270())
				{
					UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
				}
				__LIB_11__::func_221(&uLocal_262, 20);
				__LIB_1__::func_148(&uLocal_218);
				__LIB_9__::func_60(cParam0, 51);
				__LIB_1__::func_148(&uLocal_215);
				__LIB_6__::func_876(cParam0, 29);
			}
			break;
		case 29:
			break;
	}
	return __LIB_6__::func_889(cParam0) == 29;
}

int func_821(char[4] cParam0)
{
	func_176(cParam0);
	func_177();
	func_1388();
	__LIB_0__::func_112(1, 16384, 1);
	return 1;
}

int func_822(var uParam0)
{
	if (__LIB_6__::func_862(uParam0, 8))
	{
	}
	return 1;
}

int func_823(var uParam0)
{
	if (__LIB_6__::func_862(uParam0, 8))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_72))
			{
				if (PED::IS_PED_IN_VEHICLE(Global_35, iLocal_72, false))
				{
					PED::_0xE0B61ED8BB37712F(Global_35);
				}
			}
		}
		else
		{
			return 0;
		}
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_46[0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_72))
			{
				if (PED::IS_PED_IN_VEHICLE(uLocal_46[0], iLocal_72, false))
				{
					PED::_0xE0B61ED8BB37712F(uLocal_46[0]);
				}
			}
		}
	}
	func_167();
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_72, -2582.62f, 457.23f, 145.88f, 160.81f, false, false, true);
	__LIB_8__::func_665(uParam0, 524288);
	return 1;
}

int func_824(char[4] cParam0)
{
	if (!func_934(cParam0))
	{
		return 0;
	}
	__LIB_9__::func_60(cParam0, 0);
	__LIB_6__::func_876(cParam0, 0);
	__LIB_1__::func_148(&uLocal_218);
	__LIB_1__::func_148(&uLocal_215);
	if (__LIB_1__::func_185(66))
	{
	}
	__LIB_8__::func_719(cParam0, -1, 0);
	__LIB_6__::func_860(cParam0, 4);
	return 1;
}

void func_837(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
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
	if (!__LIB_0__::func_1(*iParam0, 32))
	{
		iParam1 |= 16;
	}
	if (!__LIB_0__::func_1(*iParam0, 64))
	{
		iParam1 |= 8;
	}
	if (!__LIB_0__::func_1(*iParam0, 128))
	{
		iParam1 |= 32;
	}
	if (__LIB_0__::func_1(*iParam0, 131072))
	{
		iParam1 |= 2048;
	}
	if (!__LIB_0__::func_1(*iParam0, 32768))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, iParam1, true);
	}
	if (!__LIB_0__::func_1(*iParam0, 1))
	{
		PAD::_0xF239400E16C23E08(0, 0);
	}
	if (!__LIB_0__::func_1(*iParam0, 65536))
	{
		PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
	}
	if (!__LIB_0__::func_1(*iParam0, 4) && !__LIB_0__::func_1(*iParam0, 2))
	{
		HUD::_HIDE_HUD_COMPONENT(-1679307491);
	}
	else
	{
		HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
	}
	if (!__LIB_0__::func_1(*iParam0, 2048))
	{
		__LIB_0__::func_713(0, 0);
	}
	if (__LIB_0__::func_1(*iParam0, 8))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
	}
	if (__LIB_0__::func_1(*iParam0, 256))
	{
		WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
	}
	if (__LIB_0__::func_1(*iParam0, 8192))
	{
		func_1402();
	}
	if (!__LIB_0__::func_1(*iParam0, 262144))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 264, true);
	}
	if (!__LIB_0__::func_1(*iParam0, 512))
	{
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			CAM::STOP_GAMEPLAY_HINT(false);
		}
	}
	if (!__LIB_0__::func_1(*iParam0, 1024))
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
		if (!__LIB_0__::func_1(*iParam0, 16))
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
					vVar3.x = iParam3;
					vVar3.f_1 = iParam4;
					vVar3.f_2 = iParam5;
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
	if (!__LIB_0__::func_1(*iParam0, 4096))
	{
		__LIB_0__::func_142(Global_35);
	}
	if (!__LIB_0__::func_1(*iParam0, 1048576))
	{
		UIFEED::_0xDD1232B332CBB9E7(7, 1, 0);
	}
	if (!__LIB_0__::func_1(*iParam0, 2097152))
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
	*iParam0 = 0;
}

void func_839(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (__LIB_0__::func_84(uParam0, 2048) && !__LIB_0__::func_86(__LIB_4__::func_548(uParam0)))
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
			func_919(iVar1, __LIB_4__::func_548(uParam0), __LIB_4__::func_549(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_919(iVar3, __LIB_4__::func_548(uParam0), __LIB_4__::func_549(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_840(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if ((__LIB_0__::func_84(uParam0, 268435456) && !__LIB_0__::func_86(__LIB_4__::func_548(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { __LIB_4__::func_548(uParam0) };
			func_919(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

int func_848(int iParam0, int iParam1)
{
	var uVar0;
	return func_1426(&uVar0, iParam0, iParam1);
}

bool func_911(char[4] cParam0, int iParam1, var uParam2, bool bParam3, int iParam4, int iParam5, int iParam6, float fParam7, bool bParam8, int iParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13)
{
	if (!__LIB_0__::func_31(iParam1))
	{
		return false;
	}
	if ((!ENTITY::IS_ENTITY_DEAD(*uParam2) && __LIB_1__::func_22(iParam1)) && __LIB_0__::func_167(iParam1) == *uParam2)
	{
		return true;
	}
	*uParam2 = func_1450(iParam1, 1, 0, iParam4, iParam5, iParam6, fParam7, bParam8, 1, 0, 0, bParam10, 0, iParam9, 0, 0, 0, iParam11, 1, 1, bParam13, 0, 1, 0, 1);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam2))
	{
		func_1451(cParam0, *uParam2, iParam1, bParam3, (bParam8 && bParam12), bParam10, bParam13);
		__LIB_4__::func_703(iParam1);
		return true;
	}
	return false;
}

void func_919(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_919(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_919(iVar2, vParam1, fParam4, iParam5, iParam6);
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

bool func_921(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	switch (__LIB_0__::func_81(uParam0))
	{
		case 0:
			if (!__LIB_5__::func_343(iParam1, &(uParam0->f_8), &(uParam0->f_6)))
			{
				return true;
			}
			__LIB_0__::func_19(uParam0, 1);
			break;
		case 1:
			__LIB_4__::func_560(uParam0);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			iVar0 = 0;
			func_837(&iVar0, 0, 2, 0, 0, 0, 0);
			__LIB_0__::func_19(uParam0, 2);
			break;
		case 2:
			if (__LIB_10__::func_903(uParam0))
			{
				__LIB_0__::func_568(uParam0->f_8, 5000f, 0);
				PED::_0x4759CC730F947C81();
				__LIB_1__::func_283(&(uParam0->f_3), 1);
				__LIB_0__::func_19(uParam0, 3);
			}
			break;
		case 3:
			if (__LIB_0__::func_265(&(uParam0->f_3)) >= 1f)
			{
				__LIB_0__::func_19(uParam0, 4);
			}
			break;
		case 4:
			if (!__LIB_0__::func_91())
			{
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				if (CAM::DOES_CAM_EXIST(uParam0->f_2))
				{
					CAM::DESTROY_CAM(uParam0->f_2, false);
				}
			}
			iVar1 = 1;
			__LIB_5__::func_129(&iVar1, 0);
			AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
			__LIB_0__::func_19(uParam0, 0);
			return true;
	}
	return false;
}

bool func_923(char[4] cParam0)
{
	int iVar0;
	struct<4> Var1;
	iVar0 = __LIB_9__::func_40(cParam0);
	if (__LIB_8__::func_663(cParam0, __LIB_6__::func_864(cParam0)) <= 3)
	{
		iVar0 = __LIB_6__::func_864(cParam0);
	}
	Var1 = { __LIB_8__::func_688(cParam0, iVar0) };
	if (__LIB_11__::func_813(&(cParam0->f_10792), Var1, __LIB_0__::func_81(&(cParam0->f_10792)), 0))
	{
		__LIB_8__::func_707(cParam0, __LIB_6__::func_864(cParam0), 262144);
		if (__LIB_4__::func_562(&(cParam0->f_10792), 524288))
		{
			__LIB_8__::func_665(cParam0, 67108864);
			__LIB_4__::func_563(&(cParam0->f_10792), 524288);
		}
		__LIB_5__::func_344(&(cParam0->f_7375), &(cParam0->f_10792));
		return true;
	}
	return false;
}

bool func_925(char[4] cParam0, struct<4> Param1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Param1))
	{
		return true;
	}
	if (__LIB_6__::func_862(cParam0, 16777216))
	{
		__LIB_8__::func_712(cParam0);
		__LIB_8__::func_689(cParam0);
		return true;
	}
	if (func_1492(Param1, &(cParam0->f_7375), cParam0))
	{
		return true;
	}
	if (__LIB_6__::func_877(cParam0) == 0)
	{
		__LIB_11__::func_105(cParam0);
	}
	if (__LIB_0__::func_91())
	{
		if (!__LIB_6__::func_862(cParam0, 262144))
		{
			CAM::STOP_GAMEPLAY_HINT(true);
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			if (CAM::DOES_CAM_EXIST(cParam0->f_609.f_2))
			{
				CAM::DESTROY_CAM(cParam0->f_609.f_2, false);
			}
			__LIB_5__::func_326(&(cParam0->f_10792));
			__LIB_4__::func_974(cParam0);
			__LIB_6__::func_887(cParam0, 524288);
			__LIB_8__::func_713(cParam0);
			__LIB_8__::func_661(cParam0, 30f);
			__LIB_8__::func_662(cParam0, 40f);
			__LIB_6__::func_868(cParam0, 262144);
		}
		if (!__LIB_6__::func_862(cParam0, 524288) && ANIMSCENE::_0xEF324E9550A394D5(cParam0->f_7375.f_804))
		{
			__LIB_6__::func_868(cParam0, 524288);
		}
	}
	return false;
}

bool func_931()
{
	switch (iLocal_367)
	{
		case 0:
			__LIB_9__::func_2(Global_35, 61, 1, 1, 0);
			func_1499(1);
			break;
		case 1:
			if (!__LIB_1__::func_529())
			{
				func_1499(2);
			}
			break;
		case 2:
			break;
	}
	return iLocal_367 == 2;
}

bool func_932(char[4] cParam0)
{
	return func_1501(cParam0);
}

bool func_933(char[4] cParam0)
{
	bool bVar0;
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		if (!iLocal_180[0])
		{
			iLocal_180[0] = 1;
			func_1502(cParam0);
		}
	}
	else
	{
		bVar0 = true;
	}
	if (func_1383(cParam0))
	{
	}
	else
	{
		bVar0 = true;
	}
	if (__LIB_6__::func_864(cParam0) == 0)
	{
		if (func_1503(cParam0, 1))
		{
		}
		else
		{
			bVar0 = true;
		}
	}
	if (__LIB_6__::func_864(cParam0) >= 3 && __LIB_6__::func_864(cParam0) <= 4)
	{
		if (func_1504(cParam0, 1))
		{
		}
		else
		{
			bVar0 = true;
		}
		func_1505(cParam0, 0);
	}
	if (__LIB_6__::func_864(cParam0) >= 6 && __LIB_6__::func_864(cParam0) <= 7)
	{
		func_1506(cParam0, 1);
		func_1507(cParam0, 1);
	}
	return !bVar0;
}

bool func_934(char[4] cParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = (iVar0 && func_1508(cParam0, iVar1));
		iVar1++;
	}
	return iVar0;
}

void func_936()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 71)
	{
		iVar1 = iVar0;
		func_1524(iVar1);
		iVar0++;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_93[37]))
	{
		uLocal_334 = PED::_0x4C39C95AE5DB1329(iLocal_93[37], false, 15);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_93[41]))
	{
		uLocal_335 = PED::_0x4C39C95AE5DB1329(iLocal_93[41], false, 15);
	}
	PATHFIND::_0x19C7567D2F2287D6(iLocal_93[41], 7);
}

int func_937()
{
	int iVar0[4];
	int iVar5;
	if (func_466(18))
	{
		return 1;
	}
	iVar0[0] = 41;
	iVar0[1] = 19;
	iVar0[2] = 48;
	iVar0[3] = 37;
	iVar5 = 0;
	while (iVar5 < iVar0)
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_93[iVar0[iVar5]]))
		{
			return 0;
		}
		iVar5++;
	}
	iVar5 = 0;
	while (iVar5 < iVar0)
	{
		__LIB_1__::func_391(iLocal_93[iVar0[iVar5]], 0, 0, 0);
		PATHFIND::_0xE5EF9DE716FF737E(iLocal_93[iVar0[iVar5]], 0, 0);
		iVar5++;
	}
	func_467(18, 1);
	return 1;
}

void func_938(char[4] cParam0)
{
	func_1312(cParam0);
	if (__LIB_6__::func_864(cParam0) >= 5)
	{
		func_1337();
	}
}

void func_939(char[4] cParam0)
{
	func_1526(cParam0, uLocal_46[0], 14, 0);
	func_1526(cParam0, uLocal_46[1], 13, 0);
}

void func_940(char[4] cParam0)
{
	__LIB_9__::func_42(cParam0, Global_35, "JOHN", 0);
	__LIB_9__::func_42(cParam0, uLocal_46[0], "TEEN_JACK", 0);
	__LIB_9__::func_42(cParam0, uLocal_46[1], "ABIGAIL", 0);
}

void func_952(char[4] cParam0)
{
	if (__LIB_6__::func_864(cParam0) == 0)
	{
		if (!TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_165))
		{
			iLocal_165 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(func_1298(0, 16), joaat("WORLD_HUMAN_INSPECT"), 1f, 0, false);
		}
	}
}

void func_953(char[4] cParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = __LIB_6__::func_864(cParam0);
	if (iVar2 == iLocal_16)
	{
		iVar0 = 14;
		iVar1 = 0;
	}
	else if (iVar2 == iLocal_17)
	{
		iVar0 = 14;
		iVar1 = 30;
	}
	else if (iVar2 == iLocal_18)
	{
		iVar0 = 15;
		iVar1 = 0;
	}
	else if (iVar2 == iLocal_19)
	{
		iVar0 = 15;
		iVar1 = 30;
	}
	else if (iVar2 == iLocal_20)
	{
		iVar0 = 16;
		iVar1 = 0;
	}
	else if (iVar2 == iLocal_21)
	{
		iVar0 = 16;
		iVar1 = 30;
	}
	else if (iVar2 == iLocal_22)
	{
		iVar0 = 17;
		iVar1 = 0;
	}
	else if (iVar2 == iLocal_23)
	{
		iVar0 = 17;
		iVar1 = 30;
	}
	else if (iVar2 == iLocal_24)
	{
		iVar0 = 18;
		iVar1 = 0;
	}
	else if (iVar2 == iLocal_25)
	{
		iVar0 = 18;
		iVar1 = 30;
	}
	else if (iVar2 == iLocal_26)
	{
		iVar0 = 19;
		iVar1 = 0;
	}
	else if (iVar2 == iLocal_27)
	{
		iVar0 = 20;
		iVar1 = 0;
	}
	CLOCK::SET_CLOCK_TIME(iVar0, iVar1, 0);
}

void func_954(char[4] cParam0)
{
	if (__LIB_6__::func_864(cParam0) == iLocal_16)
	{
		func_1325(cParam0, 0);
	}
	else if (__LIB_6__::func_864(cParam0) == iLocal_19 || __LIB_6__::func_864(cParam0) == iLocal_20)
	{
		func_1325(cParam0, 1);
	}
	else if (__LIB_6__::func_864(cParam0) == iLocal_22 || __LIB_6__::func_864(cParam0) == iLocal_23)
	{
		func_1325(cParam0, 2);
	}
	else if (__LIB_6__::func_864(cParam0) == iLocal_24 || __LIB_6__::func_864(cParam0) == iLocal_25)
	{
		func_1325(cParam0, 3);
	}
	else if (__LIB_6__::func_864(cParam0) == iLocal_26 || __LIB_6__::func_864(cParam0) == iLocal_27)
	{
		func_1325(cParam0, 4);
	}
}

int func_955(var uParam0)
{
	if (__LIB_6__::func_864(uParam0) == iLocal_16)
	{
	}
	else if (__LIB_6__::func_864(uParam0) == iLocal_20)
	{
	}
	else if (__LIB_6__::func_864(uParam0) == iLocal_23)
	{
	}
	else if (__LIB_6__::func_864(uParam0) == iLocal_25)
	{
	}
	else if (__LIB_6__::func_864(uParam0) == iLocal_27)
	{
	}
	return 0;
}

int func_957(char[4] cParam0)
{
	func_961(cParam0);
	if (__LIB_6__::func_864(cParam0) == iLocal_16)
	{
		return func_1527(cParam0);
	}
	else if (__LIB_6__::func_864(cParam0) == iLocal_20)
	{
		return func_1528(cParam0);
	}
	else if (__LIB_6__::func_864(cParam0) == iLocal_23)
	{
		return func_1529(cParam0);
	}
	else if (__LIB_6__::func_864(cParam0) == iLocal_25)
	{
		return func_1530(cParam0);
	}
	else if (__LIB_6__::func_864(cParam0) == iLocal_27)
	{
		return func_1531(cParam0);
	}
	return 1;
}

int func_959(char[4] cParam0)
{
	if (__LIB_6__::func_864(cParam0) == iLocal_16)
	{
		return func_1532(cParam0);
	}
	else if (__LIB_6__::func_864(cParam0) == iLocal_20)
	{
		return func_1533(cParam0);
	}
	else if (__LIB_6__::func_864(cParam0) == iLocal_23)
	{
		return func_1534(cParam0);
	}
	else if (__LIB_6__::func_864(cParam0) == iLocal_25)
	{
		return func_1535(cParam0);
	}
	else if (__LIB_6__::func_864(cParam0) == iLocal_27)
	{
	}
	return 1;
}

void func_961(char[4] cParam0)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	iVar0 = __LIB_6__::func_864(cParam0);
	switch (iLocal_356)
	{
		case 0:
			MISC::CLEAR_WEATHER_TYPE_PERSIST();
			__LIB_8__::func_781();
			if (iVar0 == iLocal_16)
			{
				func_1537(1);
			}
			else if ((iVar0 == iLocal_17 || iVar0 == iLocal_18) || iVar0 == iLocal_19)
			{
				MISC::_SET_WEATHER_TYPE(joaat("CLOUDS"), true, true, false, 0f, false);
				func_1537(4);
			}
			else if (iVar0 == iLocal_20)
			{
				MISC::_SET_WEATHER_TYPE(joaat("OVERCASTDARK"), true, true, false, 0f, false);
				func_1537(5);
			}
			else if ((((iVar0 == iLocal_21 || iVar0 == iLocal_22) || iVar0 == iLocal_23) || iVar0 == iLocal_24) || iVar0 == iLocal_25)
			{
				MISC::_SET_WEATHER_TYPE(joaat("RAIN"), true, true, false, 0f, false);
				func_1537(6);
			}
			else if (iVar0 == iLocal_26)
			{
				MISC::_SET_WEATHER_TYPE(joaat("SHOWER"), true, true, false, 0f, false);
				__LIB_0__::func_268(&uLocal_258, 30f);
				func_1537(7);
			}
			else if (iVar0 == iLocal_27)
			{
				MISC::_SET_WEATHER_TYPE_TRANSITION(joaat("SHOWER"), joaat("THUNDER"), 0.7f, 1);
				func_1537(8);
			}
			break;
		case 1:
			if (__LIB_8__::func_671(cParam0))
			{
				MISC::CLEAR_WEATHER_TYPE_PERSIST();
				MISC::_SET_WEATHER_TYPE(joaat("SUNNY"), false, true, true, 30f, false);
				func_1537(2);
			}
			break;
		case 2:
			if (iVar0 == iLocal_16 && __LIB_8__::func_663(cParam0, iVar0) == 5)
			{
				MISC::CLEAR_WEATHER_TYPE_PERSIST();
				MISC::_SET_WEATHER_TYPE(joaat("CLOUDS"), false, true, true, 60f, false);
				func_1537(3);
			}
			break;
		case 3:
			if (iLocal_280 >= 8)
			{
				MISC::CLEAR_WEATHER_TYPE_PERSIST();
				MISC::_SET_WEATHER_TYPE(joaat("CLOUDS"), true, true, false, 0f, false);
				func_1537(4);
			}
			break;
		case 4:
			if (__LIB_8__::func_671(cParam0))
			{
				MISC::CLEAR_WEATHER_TYPE_PERSIST();
				MISC::_SET_WEATHER_TYPE(joaat("OVERCASTDARK"), false, true, true, 60f, false);
				func_1537(5);
			}
			break;
		case 5:
			if (iVar0 == iLocal_20 && __LIB_8__::func_663(cParam0, iVar0) == 5)
			{
				MISC::CLEAR_WEATHER_TYPE_PERSIST();
				MISC::_SET_WEATHER_TYPE(joaat("RAIN"), false, true, true, 105f, false);
				func_1537(6);
			}
			break;
		case 6:
			if (iVar0 == iLocal_25 && __LIB_8__::func_663(cParam0, iVar0) == 5)
			{
				MISC::CLEAR_WEATHER_TYPE_PERSIST();
				MISC::_SET_WEATHER_TYPE(joaat("SHOWER"), false, true, true, 30f, false);
				__LIB_1__::func_148(&uLocal_258);
				func_1537(7);
			}
			break;
		case 7:
			fVar1 = __LIB_0__::func_265(&uLocal_258);
			if (fVar1 >= 30f)
			{
				fVar2 = __LIB_9__::func_231(((fVar1 - 30f) / 35f), 0f, 1f);
				fVar3 = __LIB_0__::func_667(0f, 0.7f, fVar2);
				MISC::_SET_WEATHER_TYPE_TRANSITION(joaat("SHOWER"), joaat("THUNDER"), fVar3, 1);
				if (fVar2 == 1f)
				{
					func_1537(8);
				}
			}
			break;
		case 8:
			break;
	}
}

void func_962(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::_0xFD6943B6DF77E449(iParam0, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, false);
		TASK::TASK_STAND_STILL(iParam0, -1);
	}
}

void func_964(char[4] cParam0)
{
	int iVar0;
	iVar0 = __LIB_6__::func_864(cParam0);
	func_1547(cParam0);
	if (iVar0 >= iLocal_18 && iVar0 <= iLocal_24)
	{
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	}
	if (iVar0 >= iLocal_22 && iVar0 <= iLocal_24)
	{
		PED::_0xAB0D553FE20A6E25(0f);
		PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		POPULATION::_0xF45E46DEECF7DF6E(10240, 0, 0, -1, -1);
	}
	if (!bLocal_187)
	{
		bLocal_187 = true;
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_93[5]))
		{
			__LIB_3__::func_730(iLocal_93[5], 0, 0, 0, 0, 0);
		}
	}
	if (iVar0 >= iLocal_22 && iVar0 <= iLocal_23)
	{
		if (iLocal_185[0])
		{
			if (PED::GET_VEHICLE_PED_IS_ENTERING(Global_35) == iLocal_72 || PED::IS_PED_IN_VEHICLE(Global_35, iLocal_72, true))
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_EXIT"), false);
			}
		}
	}
	func_1548(cParam0);
	__LIB_1__::func_538(1);
	func_961(cParam0);
	func_1550(cParam0);
	LAW::_0x785177E4D57D7389(PLAYER::PLAYER_ID(), joaat("CRIME_TRAMPLE"), 1, 0, -1);
	func_1551(cParam0);
	if (iVar0 == iLocal_24 || iVar0 == iLocal_25)
	{
		func_1552(cParam0);
	}
	if ((iVar0 == iLocal_16 || iVar0 == iLocal_17) || iVar0 == iLocal_26)
	{
		if (func_1553())
		{
			__LIB_9__::func_156(cParam0, "MAR2_FKIRA", "", 1, 0);
		}
	}
}

bool func_981(char[4] cParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	if (__LIB_6__::func_862(cParam0, -2147483648))
	{
		return true;
	}
	if (__LIB_9__::func_50(cParam0, iParam1, 4))
	{
		if (__LIB_6__::func_864(cParam0) != 25 && __LIB_6__::func_864(cParam0) != 26)
		{
			if (!__LIB_6__::func_862(cParam0, 512) && !__LIB_6__::func_872(cParam0, 4))
			{
				__LIB_11__::func_239(cParam0, func_34(iParam1), func_34(iParam2), iParam1, iParam2);
			}
			else
			{
				Var0 = { func_34(iParam2) };
				Global_1347394 = { Var0 };
				Global_1347394.f_3 = Var0.f_3;
				Global_1572864.f_10 = __LIB_5__::func_24(iParam2);
			}
		}
		func_1564(cParam0);
		if (__LIB_8__::func_616(cParam0))
		{
			__LIB_9__::func_33(cParam0);
		}
		if (__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 33554432) && __LIB_6__::func_862(cParam0, 524288))
		{
			UILOG::_UILOG_PRINT_CACHED_OBJECTIVE();
		}
		__LIB_6__::func_887(cParam0, 524288);
		__LIB_4__::func_977(&(cParam0->f_7375), 4);
		if (__LIB_9__::func_145(cParam0))
		{
			__LIB_8__::func_707(cParam0, __LIB_6__::func_864(cParam0), 8388608);
			HUD::_HIDE_HUD_COMPONENT(-1679307491);
			HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
			__LIB_5__::func_112();
		}
		return true;
	}
	return false;
}

bool func_983(char[4] cParam0, int iParam1)
{
	struct<4> Var0;
	if (__LIB_6__::func_872(cParam0, 16384))
	{
		if (func_923(cParam0))
		{
			__LIB_5__::func_326(&(cParam0->f_10792));
			__LIB_6__::func_887(cParam0, 2097152);
			__LIB_6__::func_881(cParam0, 16384);
			__LIB_6__::func_869(cParam0, 128);
			return true;
		}
		return false;
	}
	if (!__LIB_6__::func_862(cParam0, 4))
	{
		__LIB_0__::func_16(cParam0, iParam1);
		__LIB_6__::func_868(cParam0, 4);
	}
	Var0 = { __LIB_8__::func_688(cParam0, iParam1) };
	if (__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 2))
	{
		if (__LIB_6__::func_862(cParam0, 2097152))
		{
			if (func_923(cParam0))
			{
				__LIB_6__::func_887(cParam0, 2097152);
				func_925(cParam0, Var0);
			}
			return false;
		}
		else
		{
			return func_925(cParam0, Var0);
		}
	}
	else if (__LIB_6__::func_862(cParam0, 2097152))
	{
		if (func_923(cParam0))
		{
			__LIB_6__::func_887(cParam0, 2097152);
			__LIB_8__::func_689(cParam0);
			return true;
		}
		else
		{
			return false;
		}
	}
	if (__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 2))
	{
		return func_925(cParam0, Var0);
	}
	return true;
}

void func_1016(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_75[iParam0]))
	{
		OBJECT::DELETE_OBJECT(&(iLocal_75[iParam0]));
	}
}

void func_1017(int* iParam0)
{
	int iVar0;
	int iVar1[9];
	int iVar11;
	int iVar12;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		iVar11 = (-1 + iVar0);
		iVar12 = iVar11;
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false, false))
		{
			if (!VEHICLE::IS_VEHICLE_SEAT_FREE(*iParam0, iVar12))
			{
				iVar1[iVar0] = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*iParam0, iVar12);
				if (!ENTITY::IS_ENTITY_DEAD(iVar1[iVar0]))
				{
					PED::_0xF9ACF4A08098EA25(iVar1[iVar0], true);
					func_919(iVar1[iVar0], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*iParam0, 3f, 3f, 0f), ENTITY::GET_ENTITY_HEADING(*iParam0), 2, 1073741824 /* Float: 2f */);
				}
			}
		}
		iVar0++;
	}
}

Vector3 func_1048(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -2586.746f, 455.989f, 145.1865f;
				case 1:
					return -2588.783f, 455.7817f, 145.3602f;
				case 2:
					return -2589.046f, 456.7274f, 145.3536f;
				case 3:
					return -2590.393f, 457.2662f, 146.9661f;
				case 4:
					return -2590.188f, 465.3483f, 145.1389f;
				case 5:
					return -2584.782f, 458.5872f, 145.9429f;
				case 6:
					return -2595.036f, 458.8084f, 146.8021f;
				case 7:
					return -2595.052f, 458.498f, 146.856f;
				case 8:
					return -2594.097f, 461.8778f, 147.1982f;
				case 9:
					return -2594.515f, 456.2865f, 146.7582f;
				case 10:
					return -2595.036f, 458.7538f, 146.7694f;
				case 11:
					return -2594.247f, 456.5854f, 146.7954f;
				case 12:
					return -2596.503f, 455.4873f, 146.5358f;
				case 13:
					return -2594.388f, 456.6125f, 146.7351f;
				case 14:
					return -2590.954f, 457.4777f, 146.0147f;
				case 15:
					return -2585.316f, 453.7336f, 146.1715f;
				case 16:
					return -2593.741f, 460.9864f, 146.0973f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return -2647.668f, 299.2318f, 145.2499f;
				case 1:
					return -2604.679f, 552.1307f, 142.1814f;
				case 2:
					return -2647.013f, 300.843f, 145.2535f;
				case 3:
					return -2605.465f, 550.9451f, 142.1916f;
				case 4:
					return -2592.134f, 459.7199f, 145.9973f;
				case 5:
					return -2644.872f, 300.0393f, 144.9326f;
				case 6:
					return -2607.054f, 552.817f, 142.1526f;
				case 7:
					return -2309.915f, -321.1098f, 155.2797f;
				case 8:
					return -2388.951f, 532.7006f, 123.1557f;
				case 9:
					return -2289.114f, -383.5995f, 155.6583f;
				case 10:
					return -2188.866f, 489.7421f, 117.6383f;
				case 11:
					return -1919.906f, -344.1326f, 185.7074f;
				case 12:
					return -1787.491f, -247.7803f, 178.5887f;
				case 13:
					return -1892.819f, -389.917f, 175.0166f;
				case 14:
					return -1723.412f, -420.7011f, 151.708f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return -1902.554f, -371.5399f, 179.6923f;
				case 1:
					return -1901.859f, -369.9359f, 179.7262f;
				case 2:
					return -1897.032f, -369.5795f, 179.1797f;
				case 3:
					return -1808.469f, -302.4285f, 169.2919f;
				case 4:
					return -1809.183f, -301.217f, 169.5941f;
				case 5:
					return -1810.922f, -302.8901f, 169.4813f;
				case 6:
					return -1723.384f, -422.6013f, 151.6136f;
				case 7:
					return -1722.192f, -423.3843f, 151.3282f;
				case 8:
					return -1720.812f, -421.3965f, 151.4349f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return -1772.359f, -390.8267f, 155.8394f;
				case 1:
					return -1773.077f, -384.4674f, 156.1619f;
				case 2:
					return -1765.179f, -380.6753f, 156.7404f;
				case 3:
					return -1765.397f, -383.6883f, 156.7404f;
				case 4:
					return -1766.233f, -380.8104f, 157.8358f;
				case 5:
					return -1766.54f, -380.5857f, 157.8381f;
				case 6:
					return -1763.391f, -380.4604f, 158.1181f;
				case 7:
					return -1764.437f, -384.5692f, 158.1416f;
				case 8:
					return -1763.43f, -380.2439f, 157.0715f;
				case 9:
					return -1761.347f, -381.8299f, 157.5802f;
				case 10:
					return -1766.61f, -380.5329f, 157.8568f;
				case 11:
					return -1763.767f, -382.906f, 156.744f;
				case 12:
					return -1763.377f, -382.4361f, 156.7087f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return -1772.729f, -385.5931f, 156.202f;
				case 1:
					return -1773.117f, -384.7082f, 156.2646f;
				case 2:
					return -1769.702f, -390.9376f, 155.7195f;
				case 3:
					return -1769.702f, -390.9376f, 155.7195f;
				case 4:
					return -1778.406f, -433.606f, 154.1022f;
				case 5:
					return -1777.946f, -437.416f, 154.1129f;
				case 6:
					return -1775.025f, -437.8545f, 154.0295f;
				case 7:
					return -1776.067f, -440.774f, 153.9408f;
				case 8:
					return -1776.855f, -443.4073f, 153.9866f;
				case 9:
					return -1776.759f, -445.002f, 153.9408f;
				case 10:
					return -1761.259f, -241.1607f, 181.7539f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return -1797.824f, -330.1971f, 165.6205f;
				case 1:
					return -1732.542f, -417.1653f, 153.0966f;
				case 2:
					return -1797.402f, -332.1769f, 165.2754f;
				case 3:
					return -1734.663f, -415.9405f, 153.5341f;
				case 4:
					return -1799.45f, -332.9374f, 165.0418f;
				case 5:
					return -1730.493f, -414.8712f, 153.3663f;
				case 6:
					return -1660.14f, -218f, 165.08f;
				case 7:
					return -1764.039f, 154.5435f, 150.8086f;
				case 8:
					return -1765.176f, 154.1076f, 150.7286f;
				case 9:
					return -1660.729f, -217.0848f, 164.2941f;
				case 10:
					return -1765.922f, 151.8433f, 150.572f;
				case 11:
					return -1767.667f, 153.5475f, 150.6169f;
				case 12:
					return -1731.229f, -85.7608f, 180.5966f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return -1719.385f, 6.2737f, 159.9617f;
				case 1:
					return -1719.16f, 7.4723f, 159.8044f;
				case 2:
					return -1721.93f, 5.1201f, 159.8568f;
				case 3:
					return -1728.253f, -49.7882f, 174.0451f;
				case 4:
					return -1764.087f, 154.5057f, 150.8037f;
				case 5:
					return -1765.212f, 154.0348f, 150.7225f;
				case 6:
					return -1724.693f, -37.8461f, 171.2594f;
				case 7:
					return -1766.017f, 151.7574f, 150.5643f;
				case 8:
					return -1767.667f, 153.5475f, 150.6169f;
				case 9:
					return -1707.51f, -88.6062f, 178.52f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return -1750.46f, 313.08f, 110.22f;
				case 1:
					return -1747.839f, 310.8168f, 110.9212f;
				case 2:
					return -1749.151f, 310.3823f, 110.1554f;
				case 3:
					return -1763.767f, 248.5189f, 122.2664f;
				case 4:
					return -1762.556f, 246.6229f, 122.5323f;
				case 5:
					return -1762.649f, 243.953f, 123.068f;
				case 6:
					return -1763.279f, 272.532f, 117.7904f;
				case 7:
					return -1761.276f, 260.238f, 120.3268f;
				case 8:
					return -1762.893f, 253.0325f, 121.4577f;
				case 9:
					return -1758.699f, 307.7193f, 112.2589f;
				case 10:
					return -1757.394f, 306.3994f, 112.3088f;
				case 11:
					return -1760.43f, 307.0315f, 112.3984f;
				case 12:
					return -1758.63f, 307.5981f, 111.7563f;
				case 13:
					return -1757.467f, 306.2219f, 111.7616f;
				case 14:
					return -1760.48f, 306.8952f, 111.8295f;
				case 15:
					return -1748.718f, 316.371f, 109.8117f;
				case 16:
					return -1747.922f, 319.106f, 109.0645f;
				case 17:
					return -1745.539f, 312.628f, 109.5133f;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return -1752.642f, 314.2381f, 109.5252f;
				case 1:
					return -1747.29f, 319.0689f, 108.8794f;
				case 2:
					return -1745.539f, 312.628f, 109.5133f;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return -1750.776f, 319.6809f, 110.1063f;
				case 1:
					return -1747.404f, 319.0871f, 109.0105f;
				case 2:
					return -1750.457f, 313.0556f, 110.22f;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return -2555.292f, 609.3011f, 137.2927f;
				case 1:
					return -2557.781f, 614.58f, 137.2892f;
				case 2:
					return -2592.286f, 459.7406f, 145.9973f;
				case 3:
					return -2438.281f, 564.7357f, 126.4823f;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return -2582.657f, 455.2193f, 145.958f;
				case 1:
					return -2584.2f, 455.5765f, 145.7735f;
				case 2:
					return -2591.894f, 456.6479f, 146.8756f;
				case 3:
					return -2587.813f, 453.6208f, 146.4031f;
				case 4:
					return -2587.483f, 456.9401f, 146.2099f;
				case 5:
					return -2592.815f, 453.6928f, 146.604f;
				case 6:
					return -2593.222f, 453.6687f, 146.6618f;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					return -1769.775f, -392.4876f, 155.5262f;
				case 1:
					return -1768.753f, -383.8689f, 156.7198f;
				case 2:
					return -1818.745f, -283.5671f, 174.1316f;
				case 3:
					return -1705.884f, -421.5991f, 153.0098f;
				case 4:
					return -1757.637f, 312.1573f, 109.9134f;
				case 5:
					return -2583.078f, 458.8982f, 144.815f;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					return -1746.445f, 302.0625f, 109.5717f;
				case 1:
					return -1754.848f, 304.1891f, 111.1282f;
				case 2:
					return -1760.421f, 303.4391f, 111.1307f;
				case 3:
					return -1753.785f, 293.9836f, 112.7393f;
				case 4:
					return -1756.532f, 293.0149f, 112.753f;
				case 5:
					return -1754.972f, 306.609f, 110.8856f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_1049(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 88f;
				case 1:
					return -76f;
				case 2:
					return -115.5f;
				case 3:
					return -153.93f;
				case 4:
					return 75f;
				case 5:
					return -17.73f;
				case 6:
					return -75.12f;
				case 7:
					return 143.89f;
				case 8:
					return -8.88f;
				case 9:
					return -83.75f;
				case 10:
					return -75.12f;
				case 11:
					return 136.95f;
				case 12:
					return -112.49f;
				case 13:
					return -112.03f;
				case 14:
					return -100.1f;
				case 15:
					return -80.2f;
				case 16:
					return -12.1f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return -202f;
				case 1:
					return -400f;
				case 2:
					return -200f;
				case 3:
					return -34f;
				case 4:
					return -100f;
				case 5:
					return 158f;
				case 6:
					return -44f;
				case 7:
					return 256.0074f;
				case 8:
					return 245.3069f;
				case 9:
					return 174.8596f;
				case 10:
					return 251.1407f;
				case 11:
					return 262.5069f;
				case 12:
					return 89.7518f;
				case 13:
					return -166f;
				case 14:
					return 48f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 202f;
				case 1:
					return 192f;
				case 2:
					return -168f;
				case 3:
					return 212f;
				case 4:
					return 210.5f;
				case 5:
					return -144f;
				case 6:
					return 62f;
				case 7:
					return 58f;
				case 8:
					return -302.5f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return -435f;
				case 1:
					return 146f;
				case 2:
					return 136f;
				case 3:
					return 52f;
				case 4:
					return 143.48f;
				case 5:
					return 147.66f;
				case 6:
					return -123.47f;
				case 7:
					return 142.09f;
				case 8:
					return 155.34f;
				case 9:
					return 132.34f;
				case 10:
					return 13f;
				case 11:
					return -36.38f;
				case 12:
					return -94.52f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 184f;
				case 1:
					return 54f;
				case 2:
					return 56f;
				case 3:
					return 236f;
				case 4:
					return -160f;
				case 5:
					return 34f;
				case 6:
					return 24f;
				case 7:
					return 74f;
				case 8:
					return 82f;
				case 9:
					return 70f;
				case 10:
					return -5.76f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 18f;
				case 1:
					return -124f;
				case 2:
					return 14f;
				case 3:
					return -124f;
				case 4:
					return 12f;
				case 5:
					return -121f;
				case 6:
					return 6.4f;
				case 7:
					return 170f;
				case 8:
					return 170f;
				case 9:
					return -97.5f;
				case 10:
					return 168f;
				case 11:
					return 174f;
				case 12:
					return 184.32f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 18.5f;
				case 1:
					return 20f;
				case 2:
					return 19f;
				case 3:
					return -15f;
				case 4:
					return -187f;
				case 5:
					return -189f;
				case 6:
					return 5f;
				case 7:
					return -191f;
				case 8:
					return 175.5f;
				case 9:
					return 163.44f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 0f;
				case 1:
					return -65.96f;
				case 2:
					return -55.21f;
				case 3:
					return 10f;
				case 4:
					return 12f;
				case 5:
					return 12f;
				case 6:
					return -10f;
				case 7:
					return 6f;
				case 8:
					return 8f;
				case 9:
					return -36.12f;
				case 10:
					return -37.29f;
				case 11:
					return 2.66f;
				case 12:
					return -17f;
				case 13:
					return -37.48f;
				case 14:
					return -12f;
				case 15:
					return 138f;
				case 16:
					return -108.62f;
				case 17:
					return -62.64f;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return -36f;
				case 1:
					return -82.69f;
				case 2:
					return -62.64f;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return -109.33f;
				case 1:
					return -103.391f;
				case 2:
					return 0f;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return 108f;
				case 1:
					return 104f;
				case 2:
					return -99.5f;
				case 3:
					return 58.32f;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return 70.26f;
				case 1:
					return 74.21f;
				case 2:
					return -82.05f;
				case 3:
					return 160.88f;
				case 4:
					return -98.33f;
				case 5:
					return -16.41f;
				case 6:
					return -13.2f;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					return 74f;
				case 1:
					return -34f;
				case 2:
					return 22f;
				case 3:
					return -64f;
				case 4:
					return -14f;
				case 5:
					return 80f;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					return 16f;
				case 1:
					return -12.5f;
				case 2:
					return -15f;
				case 3:
					return -18f;
				case 4:
					return -16f;
				case 5:
					return -5f;
			}
			break;
	}
	return 0f;
}

void func_1213(bool bParam0)
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
		func_1736(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_327(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_686(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_1741(Var0);
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

void func_1216(bool bParam0)
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
		func_686(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_686(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_686(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_686(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_686(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_686(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_686(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_686(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_686(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_686(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_686(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
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

int func_1261(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
							iVar49 = (iVar49 + func_1261(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1261(iVar63, -915411861, 1, 0, 0));
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

void func_1284(char[4] cParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_5__::func_24(iParam1);
	if (!__LIB_4__::func_976(iVar0))
	{
		return;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		cParam0->f_1[iVar0 /*22*/][iVar1] = 57841;
		MISC::CLEAR_BIT(&(cParam0->f_1[iVar0 /*22*/].f_17), iVar1);
		iVar1++;
	}
}

void func_1286()
{
	if (__LIB_10__::func_892(1))
	{
		__LIB_10__::func_895(1);
		func_467(3, 0);
	}
	if (__LIB_10__::func_892(2))
	{
		__LIB_10__::func_895(2);
		func_467(1, 0);
	}
	if (__LIB_10__::func_892(4))
	{
		__LIB_10__::func_895(4);
		func_467(2, 0);
	}
}

void func_1288(int iParam0)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uLocal_202[iParam0]))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(uLocal_202[iParam0], true, false))
		{
			func_1790(iParam0);
			ANIMSCENE::START_ANIM_SCENE(uLocal_202[iParam0]);
		}
	}
}

void func_1290(char[4] cParam0)
{
	if (__LIB_6__::func_864(cParam0) != iLocal_23)
	{
		if (((__LIB_6__::func_864(cParam0) == iLocal_16 || __LIB_6__::func_864(cParam0) == iLocal_18) || __LIB_6__::func_864(cParam0) == iLocal_19) || __LIB_6__::func_864(cParam0) == iLocal_26)
		{
			if (__LIB_2__::func_173(PLAYER::PLAYER_ID(), 1, 0, 1))
			{
				__LIB_9__::func_156(cParam0, "LAW_FAIL", "", 1, 0);
			}
		}
		else if (__LIB_2__::func_173(PLAYER::PLAYER_ID(), 0, 0, 0))
		{
			__LIB_9__::func_156(cParam0, "LAW_FAIL", "", 1, 0);
		}
	}
	if (__LIB_6__::func_864(cParam0) == iLocal_22)
	{
		if (!func_466(6))
		{
			func_1791(cParam0);
		}
	}
	else
	{
		func_1791(cParam0);
	}
}

void func_1291(char[4] cParam0)
{
	if (__LIB_17__::func_579(cParam0, 14, 75f, 150f, 0, 0, 1, joaat("BLIP_STYLE_COMPANION")))
	{
		if (!iLocal_167[0])
		{
			iLocal_167[0] = 1;
			__LIB_0__::func_325(&iLocal_41);
		}
	}
	else if (iLocal_167[0])
	{
		iLocal_167[0] = 0;
		func_1793();
	}
	func_1794(cParam0);
	func_1795();
	func_1796();
	func_1797(cParam0);
	if (func_1798())
	{
		if (func_466(30))
		{
			MAP::SET_GPS_CUSTOM_ROUTE_RENDER(false, 0, 0);
			MAP::CLEAR_GPS_CUSTOM_ROUTE();
			func_467(30, 0);
		}
		__LIB_0__::func_325(&iLocal_41);
		func_1793();
		__LIB_9__::func_208(cParam0, "MAR2_OBJ01b", 0, 7500, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
	}
	if (!func_1347())
	{
		return;
	}
	if (func_1800())
	{
		__LIB_0__::func_325(&iLocal_41);
		iLocal_41 = __LIB_4__::func_983(408396114, func_1298(12, 0), 1);
		MAP::_BLIP_SET_MODIFIER(iLocal_41, -1878373110);
		MAP::SET_GPS_FLAGS(512, 0f);
		__LIB_9__::func_208(cParam0, "MAR2_OBJ01", 0, 7500, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
	}
	switch (__LIB_8__::func_618(cParam0))
	{
		case 0:
			if (__LIB_0__::func_272(uLocal_46[1], 0))
			{
				__LIB_4__::func_705(13, 1);
				__LIB_9__::func_147(cParam0, uLocal_46[1], 128);
			}
			if (!MAP::DOES_BLIP_EXIST(iLocal_41))
			{
				iLocal_41 = __LIB_4__::func_983(408396114, func_1298(12, 0), 1);
				__LIB_9__::func_327("mar2_drive_out_ranch", 0, joaat("COLOR_OBJECTIVE"));
				func_467(30, 1);
			}
			__LIB_9__::func_142(cParam0, "MAR2_OBJ01", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			__LIB_9__::func_60(cParam0, 1);
			break;
		case 1:
			if (!__LIB_5__::func_236(1) && !__LIB_5__::func_463())
			{
				__LIB_9__::func_208(cParam0, "MAR2_OBJ01", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_1__::func_148(&uLocal_218);
				__LIB_9__::func_60(cParam0, 2);
			}
			break;
		case 2:
			if (((__LIB_0__::func_265(&uLocal_218) > 8f && __LIB_0__::func_94(Global_35, -2584.787f, 458.5872f, 144.9319f, 1) > 15f) && PED::IS_PED_IN_VEHICLE(Global_35, iLocal_72, false)) && __LIB_8__::func_711(cParam0, "MAR2_LEPR", 0))
			{
				AUDIO::_0x0D7FD6A55FD63AEF(8, 3, 1);
				AUDIO::_0x0D7FD6A55FD63AEF(24, 3, 1);
				__LIB_9__::func_60(cParam0, 3);
			}
			break;
		case 3:
			if (!__LIB_8__::func_684("MAR2_LEPR") && PED::IS_PED_IN_VEHICLE(Global_35, iLocal_72, false))
			{
				if (__LIB_1__::func_185(66))
				{
					if (__LIB_8__::func_711(cParam0, "MAR2_Y_MAR4", 0))
					{
						__LIB_9__::func_60(cParam0, 51);
					}
				}
				else if (__LIB_8__::func_711(cParam0, "MAR2_N_MAR4", 0))
				{
					__LIB_9__::func_60(cParam0, 51);
				}
			}
			break;
		case 51:
			break;
	}
	if (func_466(30))
	{
		if (PATHFIND::IS_POINT_ON_ROAD(ENTITY::GET_ENTITY_COORDS(iLocal_72, true, false), iLocal_72))
		{
			MAP::SET_GPS_CUSTOM_ROUTE_RENDER(false, 0, 0);
			MAP::CLEAR_GPS_CUSTOM_ROUTE();
			__LIB_0__::func_325(&iLocal_41);
			iLocal_41 = __LIB_4__::func_983(408396114, func_1298(12, 0), 1);
			MAP::_BLIP_SET_MODIFIER(iLocal_41, -1878373110);
			MAP::SET_GPS_FLAGS(512, 0f);
			func_467(30, 0);
		}
	}
}

void func_1292(char[4] cParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_72))
	{
		switch (iLocal_280)
		{
			case 0:
				__LIB_1__::func_148(&uLocal_249);
				__LIB_1__::func_649(&iLocal_280, 1);
				break;
			case 1:
				if (bLocal_1262)
				{
					if (__LIB_0__::func_265(&uLocal_249) >= 1f)
					{
						if (PATHFIND::IS_POINT_ON_ROAD(ENTITY::GET_ENTITY_COORDS(iLocal_72, true, false), iLocal_72))
						{
							bLocal_1261 = true;
						}
						else
						{
							bLocal_1261 = false;
						}
						__LIB_1__::func_148(&uLocal_249);
					}
				}
				break;
			case 15:
				break;
		}
	}
}

void func_1293(char[4] cParam0)
{
	switch (iLocal_261)
	{
		case 0:
			__LIB_1__::func_148(&uLocal_221);
			__LIB_1__::func_649(&iLocal_261, 1);
			break;
		case 1:
			break;
		case 21:
			break;
	}
}

void func_1294(char[4] cParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (2 - 1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_46[iVar0]))
		{
			switch (uLocal_262[iVar0])
			{
				case 0:
					__LIB_1__::func_148(&(vLocal_224[iVar0 /*3*/]));
					__LIB_0__::func_19(&(uLocal_262[iVar0]), 1);
					break;
				case 1:
					if (iVar0 == 1)
					{
						if (__LIB_0__::func_265(&(vLocal_224[iVar0 /*3*/])) >= 15f)
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_46[iVar0], false);
							if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_165))
							{
								TASK::_TASK_USE_SCENARIO_POINT(uLocal_46[iVar0], iLocal_165, "WORLD_HUMAN_INSPECT_FEMALE_D", -1, true, false, joaat("WORLD_HUMAN_INSPECT"), false, -1f, false);
							}
							else
							{
								__LIB_1__::func_473(uLocal_46[iVar0], joaat("WORLD_HUMAN_INSPECT"), -1, 0, joaat("WORLD_HUMAN_INSPECT_FEMALE_D"), -1082130432 /* Float: -1f */);
							}
							__LIB_1__::func_148(&(vLocal_224[iVar0 /*3*/]));
							__LIB_0__::func_19(&(uLocal_262[iVar0]), 20);
						}
						else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uLocal_202[0]))
						{
							if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(uLocal_202[0], true, false))
							{
								if (ANIMSCENE::_0xB89FCFF19DAFFF28(uLocal_202[0], "AbigailRoberts"))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_46[iVar0], false);
									if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_165))
									{
										TASK::_TASK_USE_SCENARIO_POINT(uLocal_46[iVar0], iLocal_165, "WORLD_HUMAN_INSPECT_FEMALE_D", -1, true, false, joaat("WORLD_HUMAN_INSPECT"), false, -1f, false);
									}
									else
									{
										__LIB_1__::func_473(uLocal_46[iVar0], joaat("WORLD_HUMAN_INSPECT"), -1, 0, joaat("WORLD_HUMAN_INSPECT_FEMALE_D"), -1082130432 /* Float: -1f */);
									}
									__LIB_1__::func_148(&(vLocal_224[iVar0 /*3*/]));
									__LIB_0__::func_19(&(uLocal_262[iVar0]), 20);
								}
							}
						}
					}
					else if (iVar0 == 0)
					{
						__LIB_1__::func_148(&(vLocal_224[iVar0 /*3*/]));
						__LIB_0__::func_19(&(uLocal_262[iVar0]), 20);
					}
					break;
				case 20:
					break;
			}
		}
		iVar0++;
	}
}

void func_1295()
{
	switch (iLocal_1267)
	{
		case 0:
			func_1807(1);
			break;
		case 1:
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), true);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), true);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_REVEAL_HUD"), true);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE"), true);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE_ALTERNATE"), true);
			if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uLocal_202[0]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uLocal_202[0], false)) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1030571581))
			{
				TASK::TASK_VEHICLE_GOTO_NAVMESH(Global_35, iLocal_72, -2572.146f, 498.4782f, 143.6947f, 4.5f, 0, 5f);
				__LIB_1__::func_148(&uLocal_1264);
				func_1807(2);
			}
			break;
		case 2:
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), true);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), true);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_REVEAL_HUD"), true);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE"), true);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE_ALTERNATE"), true);
			if (__LIB_0__::func_265(&uLocal_1264) > 3f || (__LIB_0__::func_265(&uLocal_1264) > 1f && PAD::IS_DISABLED_CONTROL_PRESSED(0, joaat("INPUT_VEH_ACCELERATE"))))
			{
				TASK::CLEAR_PED_TASKS(Global_35, true, false);
				func_1807(3);
			}
			break;
		case 3:
			break;
	}
}

Vector3 func_1298(int iParam0, int iParam1)
{
	return func_1048(iParam0, iParam1);
}

void func_1305(char[4] cParam0)
{
	func_1794(cParam0);
	func_1795();
	func_1796();
	func_1797(cParam0);
	if (func_1798())
	{
		__LIB_0__::func_325(&iLocal_41);
		func_1793();
		__LIB_9__::func_208(cParam0, "MAR2_OBJ01b", 0, 7500, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
	}
	if (!func_1347())
	{
		return;
	}
	if (func_1800())
	{
		__LIB_0__::func_325(&iLocal_41);
		iLocal_41 = __LIB_4__::func_983(408396114, func_1298(12, 0), 1);
		MAP::_BLIP_SET_MODIFIER(iLocal_41, -1878373110);
		MAP::SET_GPS_FLAGS(512, 0f);
		__LIB_9__::func_208(cParam0, "MAR2_OBJ01", 0, 7500, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
	}
	switch (__LIB_8__::func_618(cParam0))
	{
		case 0:
			if (!MAP::DOES_BLIP_EXIST(iLocal_41))
			{
				iLocal_41 = __LIB_4__::func_983(408396114, func_1298(12, 0), 1);
				MAP::_BLIP_SET_MODIFIER(iLocal_41, -1878373110);
				MAP::SET_GPS_FLAGS(512, 0f);
			}
			__LIB_9__::func_142(cParam0, "MAR2_OBJ01", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			__LIB_9__::func_60(cParam0, 1);
			break;
		case 1:
			if (func_1309(1) && __LIB_8__::func_711(cParam0, "MAR2_REINSBACK", 0))
			{
				__LIB_9__::func_60(cParam0, 2);
			}
			break;
		case 2:
			if (!__LIB_8__::func_684("MAR2_REINSBACK"))
			{
				__LIB_9__::func_60(cParam0, 51);
			}
			break;
		case 51:
			break;
	}
}

void func_1306()
{
	float fVar0;
	if (ENTITY::IS_ENTITY_DEAD(iLocal_72))
	{
		return;
	}
	if (!__LIB_0__::func_272(uLocal_46[0], 0))
	{
		return;
	}
	switch (iLocal_280)
	{
		case 0:
			CAM::_0x1B3C2D961F5FC0E1(func_1311());
			StringCopy(&Local_1268, "camera_treatments", 64);
			StringCopy(&(Local_1268.f_8), "GENERIC_CME_PULL_OUT_TREATMENT_REQUEST", 64);
			CAM::_0x6A4D224FC7643941(&Local_1268);
			__LIB_0__::func_37(&uLocal_249);
			__LIB_1__::func_649(&iLocal_280, 4);
			break;
		case 4:
			if (func_1808())
			{
				if (func_466(3))
				{
					func_1809(3);
				}
				else
				{
					func_1809(0);
				}
				STREAMING::PREFETCH_SRL(func_1810(iLocal_1284));
				STREAMING::_0xAE00387E53B1E9FC();
				STREAMING::_0xEF1A8A484118735E();
				CAM::_0x798BE43C9393632B(&Local_1268);
				func_467(36, 1);
				__LIB_1__::func_649(&iLocal_280, 6);
			}
			else if (func_1811() && CAM::_0xDD0B7C5AE58F721D(&Local_1268))
			{
				CAM::_0xB8B207C34285E978(&Local_1268);
				TASK::TASK_VEHICLE_DRIVE_WANDER(uLocal_46[0], iLocal_72, ENTITY::GET_ENTITY_SPEED(iLocal_72), 524419);
				if (func_466(3))
				{
					func_1809(3);
				}
				else
				{
					func_1809(0);
				}
				STREAMING::PREFETCH_SRL(func_1810(iLocal_1284));
				STREAMING::_0xAE00387E53B1E9FC();
				STREAMING::_0xEF1A8A484118735E();
				__LIB_1__::func_148(&uLocal_249);
				__LIB_1__::func_649(&iLocal_280, 5);
			}
			break;
		case 5:
			if (STREAMING::IS_SRL_LOADED() && CAM::_0xAA235E2F2C09E952(func_1311()))
			{
				CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
				if (CAM::_0xA2B1C7EF759A63CE() == 1f)
				{
					__LIB_1__::func_649(&iLocal_280, 7);
				}
			}
			break;
		case 6:
			if (STREAMING::IS_SRL_LOADED() && CAM::_0xAA235E2F2C09E952(func_1311()))
			{
				__LIB_1__::func_649(&iLocal_280, 7);
			}
			break;
		case 7:
			func_467(8, 1);
			AUDIO::_0x5E3CCF03995388B5(func_1812(iLocal_1284), func_1813(iLocal_1284));
			CAM::_0xBC016635D6A73B31(func_1311(), func_1814(iLocal_1284), 5);
			func_1355(iLocal_72, func_1815(iLocal_1284), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_72, 1.401298E-45f);
			if (iLocal_1284 == 3)
			{
				fVar0 = 4.5f;
			}
			else
			{
				fVar0 = 3f;
			}
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_72, fVar0);
			TASK::_TASK_VEHICLE_DRIVE_TO_DESTINATION(uLocal_46[0], iLocal_72, func_1298(12, 0), fVar0, 69468672, 3, 5f, 5f, 0);
			CAM::_0x0A5A4F1979ABB40E(&Local_1268);
			CAM::_0x798BE43C9393632B(&Local_1268);
			StringCopy(&Local_1268, "camera_treatments", 64);
			StringCopy(&(Local_1268.f_8), "GENERIC_CME_PUSH_IN_TREATMENT_REQUEST", 64);
			CAM::_0x6A4D224FC7643941(&Local_1268);
			STREAMING::END_SRL();
			STREAMING::PREFETCH_SRL(func_1810(iLocal_1285));
			STREAMING::_0xAE00387E53B1E9FC();
			STREAMING::_0xEF1A8A484118735E();
			__LIB_1__::func_148(&uLocal_249);
			__LIB_1__::func_649(&iLocal_280, 8);
			break;
		case 8:
			if (func_1816(iLocal_1284, iLocal_1285))
			{
				func_1809(iLocal_1285);
				CAM::_0xBC016635D6A73B31(func_1311(), func_1814(iLocal_1284), 5);
				func_1355(iLocal_72, func_1815(iLocal_1284), 2, 1073741824 /* Float: 2f */);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_72, 1.401298E-45f);
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_72, 4.5f);
				TASK::_TASK_VEHICLE_DRIVE_TO_DESTINATION(uLocal_46[0], iLocal_72, func_1298(12, 0), 4.5f, 69468672, 3, 5f, 5f, 0);
				STREAMING::END_SRL();
				STREAMING::PREFETCH_SRL(func_1810(iLocal_1285));
				STREAMING::_0xAE00387E53B1E9FC();
				STREAMING::_0xEF1A8A484118735E();
				__LIB_1__::func_148(&uLocal_249);
				__LIB_1__::func_649(&iLocal_280, 9);
			}
			break;
		case 9:
			if (func_1816(iLocal_1284, iLocal_1285) && CAM::_0xDD0B7C5AE58F721D(&Local_1268))
			{
				func_1809(iLocal_1285);
				CAM::_0xBC016635D6A73B31(func_1311(), func_1814(iLocal_1284), 5);
				CAM::_0xB8B207C34285E978(&Local_1268);
				func_1355(iLocal_72, func_1815(iLocal_1284), 2, 1073741824 /* Float: 2f */);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_72, 1.401298E-45f);
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_72, 4.5f);
				VEHICLE::_SET_VEHICLE_MUD_LEVEL(iLocal_72, 0.1f);
				TASK::_TASK_VEHICLE_DRIVE_TO_DESTINATION(uLocal_46[0], iLocal_72, func_1298(12, 0), 4.5f, 69468672, 3, 5f, 5f, 0);
				__LIB_1__::func_148(&uLocal_249);
				__LIB_1__::func_649(&iLocal_280, 10);
			}
			break;
		case 10:
			STREAMING::END_SRL();
			__LIB_1__::func_649(&iLocal_280, 11);
			break;
		case 11:
			if (func_1816(iLocal_1284, iLocal_1285))
			{
				AUDIO::_0x43037ABFE214A851();
				__LIB_1__::func_649(&iLocal_280, 13);
			}
			break;
		case 13:
			CAM::_0xA54D643D0773EB65(func_1311(), func_1814(iLocal_1284), 5);
			CAM::_0x0A5A4F1979ABB40E(&Local_1268);
			CAM::_0x798BE43C9393632B(&Local_1268);
			__LIB_1__::func_148(&uLocal_249);
			__LIB_1__::func_649(&iLocal_280, 14);
			break;
		case 14:
			if (__LIB_0__::func_265(&uLocal_249) > 2f)
			{
				__LIB_1__::func_649(&iLocal_280, 15);
			}
			break;
		case 15:
			break;
	}
	if (iLocal_280 > 7 && iLocal_280 < 13)
	{
		CAM::_0x702B75DC9D3EDE56(true);
	}
	if (iLocal_280 >= 7 && iLocal_280 <= 13)
	{
		if (func_466(36) && iLocal_280 == 7)
		{
			CAM::_0xE296208C273BD7F0(0, -1, 0, 17, 1, 0);
		}
		else
		{
			CAM::_0xE296208C273BD7F0(-1, 1000, 0, 17, 1, 0);
		}
	}
}

void func_1307()
{
	switch (iLocal_1286)
	{
		case 0:
			if (!__LIB_5__::func_463())
			{
				func_1288(1);
				func_1817(1);
			}
			break;
		case 1:
			if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uLocal_202[1]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uLocal_202[1], false)) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -289094987))
			{
				func_467(8, 1);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
				TASK::_0xE01F55B2896F6B37(iLocal_72, 1);
				TASK::_TASK_VEHICLE_DRIVE_TO_DESTINATION(uLocal_46[0], iLocal_72, func_1298(12, 0), 3f, 69470720, 3, 5f, 5f, 0);
				__LIB_1__::func_148(&uLocal_221);
				func_1817(2);
			}
			break;
		case 2:
			if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uLocal_202[1]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uLocal_202[1], false)) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1178611789))
			{
				func_1817(3);
			}
			break;
		case 3:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uLocal_202[1]) && func_1818(1))
			{
				func_468(1);
			}
			if (func_1819())
			{
				TASK::CLEAR_PED_TASKS(uLocal_46[0], true, false);
				TASK::_0xE01F55B2896F6B37(iLocal_72, 0);
				__LIB_1__::func_148(&uLocal_249);
				func_1817(4);
			}
			break;
		case 4:
			if (__LIB_0__::func_265(&uLocal_249) < 2.5f)
			{
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_72, 4.5f);
			}
			else if (!PED::GET_PED_CONFIG_FLAG(Global_35, 175, true) && !PED::GET_PED_CONFIG_FLAG(uLocal_46[0], 175, true))
			{
				func_467(8, 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				func_467(4, 1);
				func_1817(5);
			}
			break;
		case 5:
			break;
	}
}

void func_1308(char[4] cParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = iVar0;
		if (iVar1 == 0 && !ENTITY::IS_ENTITY_DEAD(uLocal_46[iVar0]))
		{
			switch (uLocal_262[iVar0])
			{
				case 0:
					if (!__LIB_6__::func_862(cParam0, 8))
					{
					}
					__LIB_1__::func_148(&(vLocal_224[iVar0 /*3*/]));
					__LIB_0__::func_19(&(uLocal_262[iVar0]), 20);
					break;
				case 20:
					break;
			}
		}
		iVar0++;
	}
}

bool func_1309(bool bParam0)
{
	if (bParam0)
	{
		return iLocal_1286 >= 4;
	}
	return iLocal_1286 >= 5;
}

char* func_1311()
{
	return "script@story@MAR2@WagonDriveToStrawberry";
}

void func_1312(char[4] cParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (17 - 1))
	{
		if (__LIB_6__::func_864(cParam0) == 0)
		{
			if (((((((iVar0 == 0 || iVar0 == 1) || iVar0 == 2) || iVar0 == 3) || iVar0 == 4) || iVar0 == 5) || iVar0 == 6) || iVar0 == 7)
			{
				func_1820(cParam0, iVar0);
			}
		}
		else if (__LIB_6__::func_864(cParam0) >= 2 && __LIB_6__::func_864(cParam0) <= 4)
		{
			if ((((((((iVar0 == 8 || iVar0 == 9) || iVar0 == 10) || iVar0 == 11) || iVar0 == 12) || iVar0 == 13) || iVar0 == 14) || iVar0 == 15) || iVar0 == 16)
			{
				func_1820(cParam0, iVar0);
			}
		}
		iVar0++;
	}
}

void func_1313(char[4] cParam0)
{
	if (__LIB_17__::func_579(cParam0, 14, 75f, 150f, 0, 0, 1, joaat("BLIP_STYLE_COMPANION")))
	{
		if (!iLocal_167[0])
		{
			iLocal_167[0] = 1;
			__LIB_0__::func_325(&iLocal_41);
		}
	}
	else if (iLocal_167[0])
	{
		iLocal_167[0] = 0;
		func_1793();
	}
	func_1795();
	func_1796();
	func_1797(cParam0);
	if (func_1798())
	{
		__LIB_0__::func_325(&iLocal_41);
		func_1793();
		__LIB_9__::func_208(cParam0, "MAR2_OBJ01b", 0, 7500, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
	}
	if (!func_1347())
	{
		return;
	}
	if (func_1800())
	{
		__LIB_0__::func_325(&iLocal_41);
		iLocal_41 = __LIB_5__::func_554(408396114, iLocal_93[19], 1);
		MAP::_BLIP_SET_MODIFIER(iLocal_41, -1878373110);
		MAP::SET_GPS_FLAGS(512, 0f);
		__LIB_9__::func_208(cParam0, "MAR2_OBJ02", 0, 7500, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
	}
	switch (__LIB_8__::func_618(cParam0))
	{
		case 0:
			iLocal_41 = __LIB_5__::func_554(408396114, iLocal_93[19], 1);
			MAP::_BLIP_SET_MODIFIER(iLocal_41, -1878373110);
			MAP::SET_GPS_FLAGS(512, 0f);
			__LIB_9__::func_208(cParam0, "MAR2_OBJ02", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			__LIB_1__::func_148(&uLocal_218);
			__LIB_9__::func_60(cParam0, 1);
			break;
		case 1:
			if (__LIB_8__::func_711(cParam0, "MAR2_OBJ02", 0))
			{
				__LIB_9__::func_60(cParam0, 2);
			}
			break;
		case 2:
			if (!__LIB_8__::func_684("MAR2_OBJ02") && __LIB_8__::func_711(cParam0, "MAR2_OBJ02CONT", 0))
			{
				__LIB_0__::func_37(&uLocal_218);
				__LIB_9__::func_60(cParam0, 51);
			}
			break;
		case 51:
			break;
	}
}

void func_1314(char[4] cParam0)
{
	if (uLocal_273[1] != 2)
	{
		if (__LIB_0__::func_266(Global_35, func_1298(3, 2), 50f, 1, 1))
		{
			func_1504(cParam0, 0);
		}
	}
}

void func_1315(char[4] cParam0)
{
	if (!iLocal_185[0])
	{
		if (__LIB_0__::func_266(Global_35, func_1298(3, 2), 50f, 1, 1))
		{
			if (uLocal_273[1] == 2)
			{
				iLocal_185[0] = 1;
			}
		}
	}
	if (iLocal_185[0])
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_50[0]))
		{
			func_1505(cParam0, 0);
		}
	}
}

void func_1316()
{
	switch (iLocal_1287)
	{
		case 0:
			if (func_1823())
			{
				func_1824(1);
			}
			break;
		case 1:
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(uLocal_202[11], true, false) && ANIMSCENE::_0x23E33CB9F4A3F547(uLocal_202[11], "PL_ACTION"))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_202[11], "Thug_A", iLocal_62[0], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_202[11], "man", iLocal_62[1], 0);
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uLocal_202[11], "PL_ACTION", true);
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uLocal_202[11], -1778.096f, -441.288f, 154.084f, 0f, 0f, -103.016f, 2);
				ANIMSCENE::START_ANIM_SCENE(uLocal_202[11]);
				func_1824(2);
			}
			break;
		case 2:
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_93[45], false, 0))
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(uLocal_202[11], "ARGUE_BOOL", true, false);
				func_1824(3);
			}
			break;
		case 3:
			if (ANIMSCENE::_0x8D81E7824B7753F7(uLocal_202[11], "S_ARGUE_IDLE", 1))
			{
				ANIMSCENE::SET_ANIM_SCENE_RATE(uLocal_202[11], 1.5f);
			}
			else
			{
				ANIMSCENE::SET_ANIM_SCENE_RATE(uLocal_202[11], 1f);
			}
			if (func_1825())
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(uLocal_202[11]);
				TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_62[0], Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
				TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_62[1], Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
				func_1824(5);
			}
			if (!func_466(16))
			{
				if (ANIMSCENE::_0x8D81E7824B7753F7(uLocal_202[11], "S_LAW_ON_OUR_SIDE", 1))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uLocal_202[11]);
					TASK::_TASK_START_SCENARIO_IN_PLACE(iLocal_62[0], joaat("WORLD_HUMAN_BADASS"), 0, true, 0, -1f, false);
					func_467(16, 1);
				}
			}
			if (!func_466(17))
			{
				if (ANIMSCENE::_0x005E6F28DD7ED58D(uLocal_202[11], "man"))
				{
					TASK::TASK_WANDER_STANDARD(iLocal_62[1], 131.9644f, 0);
					func_467(17, 1);
				}
			}
			if (func_466(16) && func_466(17))
			{
				func_1824(4);
			}
			break;
		case 4:
			break;
		case 5:
			break;
	}
}

int func_1317()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_73) && ENTITY::DOES_ENTITY_EXIST(iLocal_74))
	{
		return 1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_73))
	{
		iLocal_73 = VEHICLE::CREATE_VEHICLE(joaat("CHUCKWAGON000X"), -1753.21f, -400.2859f, 154.6396f, 78.4985f, true, true, false, false);
	}
	else
	{
		iLocal_74 = func_1826(iLocal_73, joaat("A_M_M_BIVROUGHTRAVELLERS_01"), -1, 1, 1, 1, 1, 0, 0, 0);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_74))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_74, true);
			return 1;
		}
	}
	return 0;
}

void func_1318()
{
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_73, false, false))
	{
		return;
	}
	if (!__LIB_0__::func_272(iLocal_74, 0))
	{
		return;
	}
	switch (iLocal_339)
	{
		case 0:
			if (__LIB_0__::func_665(Global_35, iLocal_74, 0, 0) < 110f)
			{
				TASK::_TASK_VEHICLE_DRIVE_TO_DESTINATION(iLocal_74, iLocal_73, -1782.503f, -424.5869f, 155.5148f, 5.5f, 69734919, 6, 1f, 1f, 0);
				func_1827(1);
			}
			break;
		case 1:
			if (ENTITY::IS_ENTITY_IN_VOLUME(iLocal_73, iLocal_93[37], false, 0))
			{
				func_1827(2);
			}
			break;
		case 2:
			if (!ENTITY::IS_ENTITY_IN_VOLUME(iLocal_73, iLocal_93[37], false, 0) || __LIB_0__::func_665(Global_35, iLocal_73, 1, 1) < 35f)
			{
				if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_93[38], false, 0))
				{
					TASK::_TASK_VEHICLE_DRIVE_TO_DESTINATION(iLocal_74, iLocal_73, -1873.058f, -422.1875f, 163.3487f, 5.5f, 69734919, 6, 1f, 1f, 0);
					func_1827(3);
				}
				else
				{
					TASK::_TASK_VEHICLE_DRIVE_TO_DESTINATION(iLocal_74, iLocal_73, -1799.624f, -455.4232f, 159.4353f, 5.5f, 69734919, 6, 1f, 1f, 0);
					func_1827(5);
				}
			}
			break;
		case 3:
			if (ENTITY::IS_ENTITY_IN_VOLUME(iLocal_73, iLocal_93[40], false, 0) && ENTITY::IS_ENTITY_IN_VOLUME(iLocal_72, iLocal_93[39], false, 0))
			{
				TASK::_TASK_VEHICLE_DRIVE_TO_DESTINATION(iLocal_74, iLocal_73, -1832.248f, -429.2808f, 159.7773f, 3f, 69734919, 1, 1f, 1f, 0);
				func_1827(4);
			}
			break;
		case 4:
			if (!ENTITY::IS_ENTITY_IN_VOLUME(iLocal_72, iLocal_93[39], false, 0))
			{
				TASK::_TASK_VEHICLE_DRIVE_TO_DESTINATION(iLocal_74, iLocal_73, -1873.058f, -422.1875f, 163.3487f, 5.5f, 69734919, 6, 1f, 1f, 0);
				func_1827(3);
			}
			break;
		case 5:
			break;
	}
}

bool func_1319()
{
	return (func_1828(9) && func_1828(10));
}

void func_1320(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8)
{
	float fVar0;
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_72, false, false))
	{
		return;
	}
	fVar0 = 12f;
	if (__LIB_0__::func_266(iLocal_72, vParam0, fParam3, 1, 1))
	{
		fVar0 = fParam6;
		if (__LIB_0__::func_266(iLocal_72, vParam0, fParam4, 1, 1))
		{
			PED::SET_PED_RESET_FLAG(Global_35, 246, true);
			fVar0 = fParam7;
			if (__LIB_0__::func_266(iLocal_72, vParam0, fParam5, 1, 1))
			{
				fVar0 = fParam8;
			}
		}
	}
	if (VEHICLE::_0xC6D7DDC843176701(iLocal_72) != fVar0)
	{
		VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iLocal_72, fVar0);
	}
}

float func_1321(int iParam0, int iParam1)
{
	return func_1049(iParam0, iParam1);
}

bool func_1322(int iParam0, float fParam1, float fParam2)
{
	float fVar0;
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	fVar0 = ENTITY::GET_ENTITY_HEADING(iParam0);
	if (fVar0 <= (fParam1 + fParam2) && fVar0 >= (fParam1 - fParam2))
	{
		return true;
	}
	return false;
}

void func_1323()
{
	__LIB_0__::func_490(&iLocal_74, 0);
	func_470(&iLocal_73, 0);
}

void func_1325(char[4] cParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		__LIB_9__::func_154(cParam0, Global_35, __LIB_1__::func_435(Global_35), 0, 0, 0, 0);
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_46[1]))
		{
			__LIB_9__::func_154(cParam0, uLocal_46[1], "AbigailRoberts", 0, 0, 0, 0);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_72))
		{
			__LIB_9__::func_62(cParam0, iLocal_72, "UTILLIWAG", 0, 0, 0, 0);
		}
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_46[0]))
		{
			__LIB_9__::func_154(cParam0, uLocal_46[0], "JackMarston_Teen", 0, 0, 0, 0);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_60[0]))
		{
			__LIB_9__::func_154(cParam0, iLocal_60[0], "TomDickens", 0, 0, 0, 0);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_75[6]))
		{
			__LIB_9__::func_62(cParam0, iLocal_75[6], "p_cs_bookHardCv08x", 0, 0, 0, 0);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_75[0]))
		{
			__LIB_9__::func_62(cParam0, iLocal_75[0], "p_cs_potatoSlice01x", 0, 0, 0, 0);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_75[1]))
		{
			__LIB_9__::func_62(cParam0, iLocal_75[1], "p_knife01x", 0, 0, 0, 0);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_75[2]))
		{
			__LIB_9__::func_62(cParam0, iLocal_75[2], "p_mugCoffee01x", 0, 0, 0, 0);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_75[3]))
		{
			__LIB_9__::func_62(cParam0, iLocal_75[3], "p_pan01x", 0, 0, 0, 0);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_75[4]))
		{
			__LIB_9__::func_62(cParam0, iLocal_75[4], "p_plate01x", 0, 0, 0, 0);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_75[5]))
		{
			__LIB_9__::func_62(cParam0, iLocal_75[5], "p_spoonmid01x", 0, 0, 0, 0);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_75[7]))
		{
			__LIB_9__::func_62(cParam0, iLocal_75[7], "p_boiler01x", 0, 0, 0, 0);
		}
	}
	else if (iParam1 == 1)
	{
		__LIB_9__::func_154(cParam0, Global_35, __LIB_1__::func_435(Global_35), 0, 0, 0, 0);
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_50[0]))
		{
			__LIB_9__::func_154(cParam0, iLocal_50[0], "G_M_M_UNICRIMINALS_01", 0, 0, 0, 0);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_58[0]))
		{
			__LIB_9__::func_154(cParam0, iLocal_58[0], "U_M_M_STRFREIGHTSTATIONOWNER_01", 0, 0, 0, 0);
		}
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_46[0]))
		{
			__LIB_9__::func_154(cParam0, uLocal_46[0], "JackMarston_Teen", 0, 0, 0, 0);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_72))
		{
			__LIB_9__::func_62(cParam0, iLocal_72, "UTILLIWAG", 0, 0, 0, 0);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_75[8]))
		{
			__LIB_9__::func_62(cParam0, iLocal_75[8], "p_amb_clipboard_01", 0, 0, 0, 0);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_75[9]))
		{
			__LIB_9__::func_62(cParam0, iLocal_75[9], "p_cs_ledger01x", 0, 0, 0, 0);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_75[10]))
		{
			__LIB_9__::func_62(cParam0, iLocal_75[10], "p_letterBundle_01x", 0, 0, 0, 0);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_75[11]))
		{
			__LIB_9__::func_62(cParam0, iLocal_75[11], "p_letterenvelope_cs01x", 0, 0, 0, 0);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_75[12]))
		{
			__LIB_9__::func_62(cParam0, iLocal_75[12], "p_package08x", 0, 0, 0, 0);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_75[13]))
		{
			__LIB_9__::func_62(cParam0, iLocal_75[13], "p_package08x^1", 0, 0, 0, 0);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_75[14]))
		{
			__LIB_9__::func_62(cParam0, iLocal_75[14], "p_pen01x", 0, 0, 0, 0);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_75[15]))
		{
			__LIB_9__::func_62(cParam0, iLocal_75[15], "p_crate03x", 0, 0, 0, 0);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_75[16]))
		{
			__LIB_9__::func_62(cParam0, iLocal_75[16], "p_cs_sacklarge01x", 0, 0, 0, 0);
		}
	}
	else if (iParam1 == 2)
	{
		__LIB_9__::func_154(cParam0, Global_35, __LIB_1__::func_435(Global_35), 0, 0, 0, 0);
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_72))
		{
			__LIB_9__::func_62(cParam0, iLocal_72, "UTILLIWAG", 0, 0, 0, 0);
		}
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_46[0]))
		{
			__LIB_9__::func_154(cParam0, uLocal_46[0], "JackMarston_Teen", 0, 0, 0, 0);
		}
	}
	else if (iParam1 == 3)
	{
		if (!bLocal_189 && bLocal_188)
		{
			MISC::_COPY_MEMORY(&(cParam0->f_7375), &uLocal_368, 890);
			bLocal_189 = true;
		}
		__LIB_9__::func_154(cParam0, Global_35, __LIB_1__::func_435(Global_35), 0, 0, 0, 0);
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_72))
		{
			__LIB_9__::func_62(cParam0, iLocal_72, "UTILLIWAG", 0, 0, 0, 0);
		}
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_46[0]))
		{
			__LIB_9__::func_154(cParam0, uLocal_46[0], "JackMarston_Teen", 0, 0, 0, 0);
		}
	}
	else if (iParam1 == 4)
	{
		if (__LIB_1__::func_185(66))
		{
			__LIB_9__::func_125(cParam0, "2-MAR4_DONE");
		}
		else
		{
			__LIB_9__::func_125(cParam0, "1-MAR4_NOT_DONE");
		}
		__LIB_8__::func_665(cParam0, 8388608);
		__LIB_9__::func_154(cParam0, Global_35, __LIB_1__::func_435(Global_35), 0, 0, 0, 0);
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_72))
		{
			__LIB_9__::func_62(cParam0, iLocal_72, "UTILLIWAG", 0, 0, 0, 0);
		}
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_46[0]))
		{
			__LIB_9__::func_154(cParam0, uLocal_46[0], "JackMarston_Teen", 0, 0, 0, 0);
		}
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_46[1]))
		{
			__LIB_9__::func_154(cParam0, uLocal_46[1], __LIB_1__::func_435(uLocal_46[1]), 0, 0, 0, 0);
		}
	}
}

void func_1326(char[4] cParam0)
{
	if (__LIB_17__::func_579(cParam0, 14, 75f, 150f, 0, 0, 1, joaat("BLIP_STYLE_COMPANION")))
	{
		if (!iLocal_167[0])
		{
			iLocal_167[0] = 1;
			__LIB_0__::func_325(&iLocal_41);
		}
	}
	else if (iLocal_167[0])
	{
		iLocal_167[0] = 0;
		if (!MAP::DOES_BLIP_EXIST(iLocal_41))
		{
			iLocal_41 = MAP::_BLIP_ADD_FOR_COORD(-89429847, func_1298(12, 1));
			MAP::_BLIP_SET_MODIFIER(iLocal_41, joaat("BLIP_MODIFIER_FRIENDLY_OBJECTIVE"));
		}
	}
	switch (__LIB_8__::func_618(cParam0))
	{
		case 0:
			if (!MAP::DOES_BLIP_EXIST(iLocal_41) && ENTITY::DOES_ENTITY_EXIST(iLocal_58[0]))
			{
				iLocal_41 = __LIB_8__::func_778(-89429847, iLocal_58[0], 1);
				MAP::_BLIP_SET_MODIFIER(iLocal_41, joaat("BLIP_MODIFIER_FRIENDLY_OBJECTIVE"));
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_41, "MAR2_B_PO");
			}
			__LIB_9__::func_208(cParam0, "MAR2_OBJ03", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			__LIB_1__::func_148(&uLocal_218);
			__LIB_9__::func_60(cParam0, 1);
			break;
		case 1:
			if ((!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uLocal_202[2]) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(uLocal_202[2], false)) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(uLocal_202[2], false))
			{
				__LIB_1__::func_148(&uLocal_218);
				__LIB_0__::func_37(&uLocal_215);
				__LIB_9__::func_60(cParam0, 2);
			}
			break;
		case 2:
			if (!PED::IS_PED_STOPPED(Global_35))
			{
				__LIB_1__::func_148(&uLocal_218);
			}
			else if (__LIB_0__::func_665(Global_35, uLocal_46[0], 0, 1) < 10f && !ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_93[41], false, 0))
			{
				if (!__LIB_0__::func_75(&uLocal_215))
				{
					__LIB_1__::func_148(&uLocal_215);
				}
				if ((__LIB_0__::func_265(&uLocal_215) > 10f && PED::IS_PED_STOPPED(Global_35)) || __LIB_0__::func_265(&uLocal_215) > 20f)
				{
					if (__LIB_8__::func_711(cParam0, "MAR2_STID", 0))
					{
						__LIB_1__::func_148(&uLocal_215);
					}
				}
			}
			else
			{
				__LIB_1__::func_148(&uLocal_215);
			}
			break;
		case 51:
			break;
	}
}

void func_1327(char[4] cParam0)
{
	if (iLocal_261 <= 1 && !func_466(38))
	{
		PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), true);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), true);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_REVEAL_HUD"), true);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE"), true);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE_ALTERNATE"), true);
	}
	switch (iLocal_261)
	{
		case 0:
			PED::SET_PED_CONFIG_FLAG(Global_35, 446, true);
			__LIB_1__::func_148(&uLocal_221);
			__LIB_1__::func_649(&iLocal_261, 1);
			break;
		case 1:
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPRINT"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uLocal_202[2]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uLocal_202[2], false))
			{
				if (func_1831())
				{
					ANIMSCENE::ABORT_ANIM_SCENE(uLocal_202[2], false);
					__LIB_1__::func_148(&uLocal_221);
					__LIB_1__::func_649(&iLocal_261, 3);
				}
				else if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(uLocal_202[2], false) || ANIMSCENE::_0xB89FCFF19DAFFF28(uLocal_202[2], __LIB_1__::func_435(Global_35)))
				{
					func_468(2);
					__LIB_1__::func_148(&uLocal_221);
					__LIB_1__::func_649(&iLocal_261, 3);
				}
				else if ((ANIMSCENE::_IS_ANIM_SCENE_STARTED(uLocal_202[2], false) && ANIMSCENE::_GET_ANIM_SCENE_TIME(uLocal_202[2]) >= 10.187f) && !func_466(38))
				{
					func_467(38, 1);
				}
			}
			if (__LIB_0__::func_265(&uLocal_221) >= 30f)
			{
				func_468(2);
				__LIB_1__::func_148(&uLocal_221);
				__LIB_1__::func_649(&iLocal_261, 3);
			}
			Jump @433; //curOff = 376
			if (__LIB_0__::func_264(&uLocal_221) > 7.5f && !PED::_IS_PED_OPENING_A_DOOR(Global_35))
			{
				PED::SET_PED_CONFIG_FLAG(Global_35, 446, false);
				__LIB_1__::func_649(&iLocal_261, 21);
			}
		}
void func_1328(char[4] cParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (2 - 1))
	{
		if (iVar0 == 0)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_46[iVar0]))
			{
				switch (uLocal_262[iVar0])
				{
					case 0:
						if (!__LIB_6__::func_862(cParam0, 8))
						{
						}
						__LIB_1__::func_148(&(vLocal_224[iVar0 /*3*/]));
						__LIB_0__::func_19(&(uLocal_262[iVar0]), 1);
						break;
					case 1:
						if (!func_1347())
						{
							__LIB_1__::func_148(&(vLocal_224[iVar0 /*3*/]));
							__LIB_0__::func_19(&(uLocal_262[iVar0]), 8);
						}
						break;
					case 8:
						func_1288(3);
						__LIB_1__::func_148(&(vLocal_224[iVar0 /*3*/]));
						__LIB_0__::func_19(&(uLocal_262[iVar0]), 9);
						break;
					case 9:
						break;
					case 20:
						break;
				}
			}
		}
		iVar0++;
	}
}

void func_1329(char[4] cParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (3 - 1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_50[iVar0]))
		{
			switch (uLocal_265[iVar0])
			{
				case 0:
					__LIB_1__::func_148(&(vLocal_239[iVar0 /*3*/]));
					__LIB_0__::func_19(&(uLocal_265[iVar0]), 1);
					break;
				case 1:
					break;
				case 22:
					break;
			}
		}
		iVar0++;
	}
}

void func_1330(char[4] cParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (1 - 1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_58[iVar0]))
		{
			switch (uLocal_276[iVar0])
			{
				case 0:
					__LIB_1__::func_148(&(vLocal_231[iVar0 /*3*/]));
					__LIB_0__::func_19(&(uLocal_276[iVar0]), 1);
					break;
				case 1:
					break;
				case 4:
					break;
			}
		}
		iVar0++;
	}
}

void func_1331(char[4] cParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_72))
	{
		switch (iLocal_280)
		{
			case 0:
				__LIB_1__::func_148(&uLocal_249);
				__LIB_1__::func_649(&iLocal_280, 1);
				break;
			case 1:
				if (!func_1347())
				{
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_72, false);
					__LIB_1__::func_148(&uLocal_249);
					__LIB_1__::func_649(&iLocal_280, 15);
				}
				break;
			case 15:
				break;
		}
	}
}

void func_1332()
{
	if (!func_466(37))
	{
		if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_93[41], false, 0))
		{
			__LIB_1__::func_26(1);
			__LIB_4__::func_614();
			func_467(37, 1);
		}
	}
	else
	{
		__LIB_4__::func_614();
		if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_93[41], false, 0))
		{
			func_467(37, 0);
		}
	}
}

bool func_1333(char[4] cParam0)
{
	if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_93[41], false, 0))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
	}
	if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_93[41], false, 0))
	{
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	}
	switch (iLocal_1288)
	{
		case 0:
			if (func_1319())
			{
				func_1835(1);
			}
			break;
		case 1:
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_93[41], false, 0))
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(uLocal_202[9], "b_breakout", true, false);
				func_1835(2);
			}
			break;
		case 2:
			if (ANIMSCENE::_0x8D81E7824B7753F7(uLocal_202[9], "s_look_up", 1))
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(uLocal_202[9], "b_breakout", false, false);
				func_1835(3);
			}
			break;
		case 3:
			func_1836(cParam0);
			if (func_1837())
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(uLocal_202[9], "b_breakout", true, false);
				UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
				func_1835(4);
			}
			break;
		case 4:
			if ((!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uLocal_202[9]) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(uLocal_202[9], false)) || ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(uLocal_202[9]))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(uLocal_202[9]);
				ANIMSCENE::_DELETE_ANIM_SCENE(uLocal_202[10]);
				func_1835(5);
			}
			break;
		case 5:
			break;
	}
	return iLocal_1288 == 5;
}

void func_1334(char[4] cParam0)
{
	struct<4> Var0;
	Var0 = { __LIB_8__::func_688(cParam0, __LIB_9__::func_40(cParam0)) };
	func_1838(cParam0, &Var0);
}

void func_1335()
{
	iLocal_348 = 0;
	func_467(28, 0);
	func_467(29, 0);
}

void func_1336()
{
	iLocal_349 = 0;
	__LIB_0__::func_37(&uLocal_350);
	__LIB_0__::func_37(&uLocal_353);
}

void func_1337()
{
	func_467(5, 1);
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_75[10]))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(iLocal_75[10]))
		{
			ENTITY::DETACH_ENTITY(iLocal_75[10], true, true);
		}
		OBJECT::DELETE_OBJECT(&(iLocal_75[10]));
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_75[12]))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(iLocal_75[12]))
		{
			ENTITY::DETACH_ENTITY(iLocal_75[12], true, true);
		}
		OBJECT::DELETE_OBJECT(&(iLocal_75[12]));
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_75[13]))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(iLocal_75[13]))
		{
			ENTITY::DETACH_ENTITY(iLocal_75[13], true, true);
		}
		OBJECT::DELETE_OBJECT(&(iLocal_75[13]));
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_75[15]))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(iLocal_75[15]))
		{
			ENTITY::DETACH_ENTITY(iLocal_75[15], true, true);
		}
		OBJECT::DELETE_OBJECT(&(iLocal_75[15]));
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_75[16]))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(iLocal_75[16]))
		{
			ENTITY::DETACH_ENTITY(iLocal_75[16], true, true);
		}
		OBJECT::DELETE_OBJECT(&(iLocal_75[16]));
	}
	func_1839(1);
}

void func_1338(char[4] cParam0)
{
	if (__LIB_17__::func_579(cParam0, 14, 75f, 150f, 0, 0, 1, joaat("BLIP_STYLE_COMPANION")))
	{
		if (!iLocal_167[0])
		{
			iLocal_167[0] = 1;
			__LIB_0__::func_325(&iLocal_41);
		}
	}
	else if (iLocal_167[0])
	{
		iLocal_167[0] = 0;
		func_1793();
	}
	func_1795();
	func_1796();
	func_1797(cParam0);
	if (func_1798())
	{
		func_1793();
		__LIB_9__::func_208(cParam0, "MAR2_OBJ01b", 0, 7500, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
	}
	if (!func_1347())
	{
		return;
	}
	if (func_1800())
	{
		__LIB_0__::func_325(&iLocal_41);
		__LIB_9__::func_208(cParam0, "MAR2_OBJ05", 0, 7500, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
	}
	switch (__LIB_8__::func_618(cParam0))
	{
		case 0:
			__LIB_9__::func_142(cParam0, "MAR2_OBJ05", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			__LIB_9__::func_60(cParam0, 1);
			break;
		case 1:
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uLocal_202[4]) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(uLocal_202[4], false))
			{
				if (__LIB_8__::func_711(cParam0, "MAR2_OBJ08", 0))
				{
					__LIB_1__::func_148(&uLocal_218);
					__LIB_9__::func_60(cParam0, 2);
				}
			}
			break;
		case 2:
			if (__LIB_0__::func_265(&uLocal_218) >= 1f)
			{
				if (!__LIB_5__::func_468(cParam0))
				{
					__LIB_9__::func_208(cParam0, "MAR2_OBJ05", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				}
				__LIB_9__::func_60(cParam0, 51);
			}
			break;
		case 51:
			break;
	}
}

void func_1339()
{
	if (!__LIB_0__::func_272(uLocal_46[0], 0))
	{
		return;
	}
	switch (uLocal_262[0])
	{
		case 0:
			__LIB_1__::func_148(&(vLocal_224[0 /*3*/]));
			__LIB_0__::func_19(&(uLocal_262[0]), 8);
			break;
		case 8:
			VEHICLE::_0xCF9DA72002FC16BF(Global_35, iLocal_72, 35);
			VEHICLE::_0xCF9DA72002FC16BF(uLocal_46[0], iLocal_72, 35);
			if (((!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uLocal_202[4]) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(uLocal_202[4], false)) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(uLocal_202[4], false)) || ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_46[0], -582892169))
			{
				if (VEHICLE::HAS_VEHICLE_ASSET_LOADED(joaat("UTILLIWAG")))
				{
					TASK::_0xE01F55B2896F6B37(iLocal_72, 1);
					AITRANSPORT::_0x4248AB2EEB3C75AD(iLocal_72, uLocal_46[0], 0);
					AITRANSPORT::_0x4248AB2EEB3C75AD(iLocal_72, Global_35, 1);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_46[0], true);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_40);
					TASK::_TASK_VEHICLE_DRIVE_TO_DESTINATION(0, iLocal_72, func_1298(12, 2), 3f, 69468672, 3, 5f, 5f, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_40);
					TASK::TASK_PERFORM_SEQUENCE(uLocal_46[0], iLocal_40);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_40);
					__LIB_1__::func_148(&(vLocal_224[0 /*3*/]));
					__LIB_0__::func_19(&(uLocal_262[0]), 7);
				}
			}
			break;
		case 6:
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_46[0], true);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_40);
			TASK::_TASK_VEHICLE_DRIVE_TO_DESTINATION(0, iLocal_72, func_1298(12, 2), 3f, 69468672, 3, 5f, 5f, 0);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_40);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_46[0], iLocal_40);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_40);
			__LIB_1__::func_148(&(vLocal_224[0 /*3*/]));
			__LIB_0__::func_19(&(uLocal_262[0]), 7);
			break;
		case 7:
			if (!func_1347())
			{
				__LIB_1__::func_148(&(vLocal_224[0 /*3*/]));
				__LIB_0__::func_19(&(uLocal_262[0]), 18);
			}
			break;
		case 18:
			if (__LIB_0__::func_265(&(vLocal_224[0 /*3*/])) >= 0.5f)
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_72, 0) == uLocal_46[0])
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_46[0], true);
					TASK::TASK_VEHICLE_TEMP_ACTION(uLocal_46[0], iLocal_72, 24, 5000);
				}
				__LIB_1__::func_148(&(vLocal_224[0 /*3*/]));
				__LIB_0__::func_19(&(uLocal_262[0]), 19);
			}
			break;
		case 19:
			if (func_1347())
			{
				__LIB_1__::func_148(&(vLocal_224[0 /*3*/]));
				__LIB_0__::func_19(&(uLocal_262[0]), 6);
			}
			break;
		case 20:
			break;
	}
}

void func_1340(char[4] cParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (3 - 1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_50[iVar0]))
		{
			switch (uLocal_265[iVar0])
			{
				case 0:
					__LIB_1__::func_148(&(vLocal_239[iVar0 /*3*/]));
					__LIB_0__::func_19(&(uLocal_265[iVar0]), 4);
					break;
				case 4:
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_50[iVar0], true);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_40);
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_54[iVar0]))
					{
						TASK::TASK_MOUNT_ANIMAL(0, iLocal_54[iVar0], 20000, -1, 1073741824 /* Float: 2f */, 1, 0, 0);
					}
					TASK::TASK_STAND_STILL(0, -1);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_40);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_50[iVar0], iLocal_40);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_40);
					__LIB_1__::func_148(&(vLocal_239[iVar0 /*3*/]));
					__LIB_0__::func_19(&(uLocal_265[iVar0]), 5);
					break;
				case 5:
					break;
				case 22:
					break;
			}
		}
		iVar0++;
	}
}

void func_1341(char[4] cParam0)
{
	if (__LIB_17__::func_579(cParam0, 14, 75f, 150f, 0, 0, 1, joaat("BLIP_STYLE_COMPANION")))
	{
		if (!iLocal_167[0])
		{
			iLocal_167[0] = 1;
			__LIB_0__::func_325(&iLocal_41);
		}
	}
	else if (iLocal_167[0])
	{
		iLocal_167[0] = 0;
		func_1793();
	}
	if (__LIB_8__::func_618(cParam0) >= 3)
	{
		func_1841(cParam0);
	}
	func_1795();
	func_1796();
	func_1797(cParam0);
	if (func_1798())
	{
		func_1793();
		__LIB_9__::func_208(cParam0, "MAR2_OBJ01b", 0, 7500, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
	}
	if (!func_1347())
	{
		return;
	}
	if (func_1800())
	{
		__LIB_0__::func_325(&iLocal_41);
		__LIB_9__::func_208(cParam0, "MAR2_OBJ05", 0, 7500, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
	}
	switch (__LIB_8__::func_618(cParam0))
	{
		case 0:
			__LIB_9__::func_142(cParam0, "MAR2_OBJ05", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			__LIB_1__::func_148(&uLocal_218);
			__LIB_9__::func_60(cParam0, 1);
			break;
		case 1:
			if (((!__LIB_8__::func_684("MAR2_OBJ08") && iLocal_269 >= 2) && func_1347()) && __LIB_8__::func_711(cParam0, "MAR2_SPEED", 0))
			{
				func_467(4, 1);
				__LIB_1__::func_148(&uLocal_218);
				__LIB_9__::func_60(cParam0, 2);
			}
			break;
		case 2:
			if (!__LIB_8__::func_684("MAR2_SPEED"))
			{
				func_467(20, 1);
				__LIB_9__::func_60(cParam0, 3);
			}
			break;
		case 3:
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_93[27], true, 0))
			{
				__LIB_9__::func_60(cParam0, 4);
			}
			break;
		case 4:
			if ((!__LIB_6__::func_904() && !__LIB_5__::func_463()) && __LIB_8__::func_711(cParam0, "MAR2_GRAYAR", 0))
			{
				__LIB_9__::func_60(cParam0, 5);
			}
			break;
		case 5:
			break;
	}
	if (iLocal_1334 == 2)
	{
		func_1348(iLocal_66);
	}
	else if (func_466(10))
	{
		func_1842(cParam0);
	}
}

void func_1342(char[4] cParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (2 - 1))
	{
		if (iVar0 == 0 && !ENTITY::IS_ENTITY_DEAD(uLocal_46[iVar0]))
		{
			switch (uLocal_262[iVar0])
			{
				case 0:
					if (!__LIB_6__::func_862(cParam0, 8))
					{
						__LIB_1__::func_148(&(vLocal_224[iVar0 /*3*/]));
						__LIB_0__::func_19(&(uLocal_262[iVar0]), 7);
					}
					else
					{
						__LIB_1__::func_148(&(vLocal_224[iVar0 /*3*/]));
						__LIB_0__::func_19(&(uLocal_262[iVar0]), 6);
					}
					break;
				case 6:
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_46[iVar0], true);
					TASK::_TASK_VEHICLE_DRIVE_TO_DESTINATION(uLocal_46[iVar0], iLocal_72, func_1298(12, 4), 4.5f, 69468168, 3, 5f, 5f, 0);
					func_1843(1);
					__LIB_1__::func_148(&(vLocal_224[iVar0 /*3*/]));
					__LIB_0__::func_19(&(uLocal_262[iVar0]), 7);
					break;
				case 7:
					if (!func_1347())
					{
						__LIB_1__::func_148(&(vLocal_224[iVar0 /*3*/]));
						__LIB_0__::func_19(&(uLocal_262[iVar0]), 18);
					}
					break;
				case 18:
					if (__LIB_0__::func_265(&(vLocal_224[iVar0 /*3*/])) >= 0.5f)
					{
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_72, 0) == uLocal_46[iVar0])
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_46[iVar0], true);
							TASK::TASK_VEHICLE_TEMP_ACTION(uLocal_46[iVar0], iLocal_72, 24, 5000);
						}
						__LIB_1__::func_148(&(vLocal_224[iVar0 /*3*/]));
						__LIB_0__::func_19(&(uLocal_262[iVar0]), 19);
					}
					break;
				case 19:
					if (func_1347())
					{
						__LIB_1__::func_148(&(vLocal_224[iVar0 /*3*/]));
						__LIB_0__::func_19(&(uLocal_262[iVar0]), 6);
					}
					break;
				case 9:
					break;
				case 20:
					break;
			}
		}
		else if (iVar0 == 0)
		{
		}
		iVar0++;
	}
}

void func_1343(char[4] cParam0)
{
	int iVar0;
	int iVar1;
	if (!iLocal_185[0])
	{
		if (ENTITY::IS_ENTITY_IN_VOLUME(iLocal_72, iLocal_93[26], true, 0))
		{
			iLocal_185[0] = 1;
		}
	}
	else
	{
		if (!uLocal_270[0] == 2)
		{
			func_1506(cParam0, 0);
		}
		else if (!uLocal_270[1] == 2)
		{
			func_1507(cParam0, 0);
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_50[iVar0]))
			{
				iVar1 = iVar0;
				switch (uLocal_265[iVar0])
				{
					case 0:
						if (iVar1 == 0)
						{
							ENTITY::_0x9587913B9E772D29(iLocal_50[iVar0], 0);
							TASK::_TASK_START_SCENARIO_IN_PLACE(iLocal_50[iVar0], joaat("WORLD_HUMAN_HORSE_TEND_BRUSH_LINK"), 0, false, 0, -1f, false);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_50[iVar0], false);
						}
						else
						{
							PED::SET_PED_CONFIG_FLAG(iLocal_50[iVar0], 167, true);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_50[iVar0], true);
						}
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_54[iVar0]))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_54[iVar0], false);
							TASK::CLEAR_PED_TASKS(iLocal_54[iVar0], true, false);
						}
						__LIB_0__::func_19(&(uLocal_265[iVar0]), 1);
						break;
					case 1:
						if (iVar1 == 0)
						{
							if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_93[27], true, 0))
							{
								func_1844();
								func_467(10, 1);
								TASK::CLEAR_PED_TASKS(iLocal_50[iVar0], true, false);
								__LIB_1__::func_148(&(vLocal_239[iVar0 /*3*/]));
								__LIB_0__::func_19(&(uLocal_265[iVar0]), 6);
							}
						}
						break;
					case 6:
						if (iVar1 == 0)
						{
							if (__LIB_0__::func_264(&(vLocal_239[iVar0 /*3*/])) > 4f)
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_50[iVar0], true);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_40);
								TASK::TASK_MOUNT_ANIMAL(0, iLocal_54[iVar0], 20000, -1, 1073741824 /* Float: 2f */, 1, 0, 0);
								TASK::TASK_FOLLOW_ENTITY_ALONG_WAYPOINT_RECORDING_AT_OFFSET(0, iLocal_72, "mar2_ride_ambush", 0f, -30f, 0, 1544, -1, 0);
								TASK::TASK_STAND_STILL(0, -1);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_40);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_50[iVar0], iLocal_40);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_40);
								__LIB_1__::func_148(&(vLocal_239[iVar0 /*3*/]));
								__LIB_0__::func_19(&(uLocal_265[iVar0]), 5);
							}
						}
						else
						{
							TASK::CLEAR_PED_TASKS(iLocal_50[iVar0], true, false);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_50[iVar0], true);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_40);
							if (iVar1 == 1)
							{
								TASK::TASK_FOLLOW_ENTITY_ALONG_WAYPOINT_RECORDING_AT_OFFSET(0, iLocal_72, "mar2_ride_ambush2", 0.5f, -30f, 0, 1544, -1, 0);
							}
							else if (iVar1 == 2)
							{
								TASK::TASK_FOLLOW_ENTITY_ALONG_WAYPOINT_RECORDING_AT_OFFSET(0, iLocal_72, "mar2_ride_ambush2", -0.5f, -30f, 0, 1544, -1, 0);
							}
							TASK::TASK_STAND_STILL(0, -1);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_40);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_50[iVar0], iLocal_40);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_40);
							__LIB_1__::func_148(&(vLocal_239[iVar0 /*3*/]));
							__LIB_0__::func_19(&(uLocal_265[iVar0]), 5);
						}
						break;
					case 5:
						func_1845();
						if (__LIB_0__::func_265(&(vLocal_239[iVar0 /*3*/])) > 2f)
						{
							__LIB_1__::func_148(&(vLocal_239[iVar0 /*3*/]));
							func_168();
							__LIB_0__::func_19(&(uLocal_265[iVar0]), 7);
						}
						break;
					case 7:
						PED::SET_PED_RESET_FLAG(iLocal_50[iVar0], 3, true);
						if (iVar1 == 0 && PED::IS_PED_ON_MOUNT(iLocal_50[iVar0]))
						{
							__LIB_4__::func_982(iLocal_50[iVar0], 1.75f);
						}
						if (__LIB_0__::func_265(&(vLocal_239[iVar0 /*3*/])) >= 10f)
						{
							if (iVar1 == 0)
							{
								TASK::SET_PED_WAYPOINT_ROUTE_OFFSET(iLocal_50[iVar0], 0f, -50f, 0f);
							}
							__LIB_1__::func_148(&(vLocal_239[iVar0 /*3*/]));
							__LIB_0__::func_19(&(uLocal_265[iVar0]), 9);
						}
						break;
					case 9:
						if (iVar1 == 0 && PED::IS_PED_ON_MOUNT(iLocal_50[iVar0]))
						{
							__LIB_4__::func_982(iLocal_50[iVar0], 1.75f);
						}
						PED::SET_PED_RESET_FLAG(iLocal_50[iVar0], 3, true);
						break;
					case 22:
						break;
				}
			}
			iVar0++;
		}
	}
}

void func_1344()
{
	if (ENTITY::IS_ENTITY_DEAD(iLocal_65) && iLocal_269 > 0)
	{
		return;
	}
	switch (iLocal_269)
	{
		case 0:
			if (func_1847())
			{
				__LIB_1__::func_473(iLocal_65, joaat("WORLD_HUMAN_FARMER_RAKE"), 0, 0, 0, -1082130432 /* Float: -1f */);
				func_1848(1);
			}
			break;
		case 1:
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_93[43], true, 0))
			{
				PED::_0xF1C03A5352243A30(iLocal_65);
				func_1848(2);
			}
			break;
		case 2:
			if (!func_1347() && __LIB_0__::func_665(Global_35, iLocal_65, 1, 1) < 5f)
			{
				__LIB_1__::func_148(&uLocal_1343);
				func_1848(3);
			}
			else if (func_1347() && !ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_93[43], true, 0))
			{
				__LIB_1__::func_473(iLocal_65, joaat("WORLD_HUMAN_FARMER_RAKE"), 0, 1, 0, -1082130432 /* Float: -1f */);
				TASK::TASK_CLEAR_LOOK_AT(iLocal_65);
				func_1848(5);
			}
			else if (!__LIB_0__::func_163(iLocal_65, -875674219) && !__LIB_2__::func_123(iLocal_65, Global_35, 60f))
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_65, Global_35, 0, -1f, -1f, -1f);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_65, Global_35, -1, 0, 51, 0);
			}
			break;
		case 3:
			if (!__LIB_0__::func_163(iLocal_65, -875674219) && !__LIB_2__::func_123(iLocal_65, Global_35, 60f))
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_65, Global_35, 0, -1f, -1f, -1f);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_65, Global_35, -1, 0, 51, 0);
			}
			if (__LIB_0__::func_665(Global_35, iLocal_65, 1, 1) > 5f)
			{
				func_1848(2);
			}
			else if (__LIB_0__::func_265(&uLocal_1343) > 8f)
			{
				TASK::TASK_COMBAT_PED(iLocal_65, Global_35, 0, 0);
				func_467(33, 1);
				func_1848(4);
			}
			break;
		case 4:
			break;
		case 5:
			if (!func_1347() && __LIB_0__::func_665(Global_35, iLocal_65, 1, 1) < 10f)
			{
				func_1848(2);
			}
			break;
	}
}

void func_1345()
{
	switch (iLocal_1334)
	{
		case 0:
			if (func_1851())
			{
				TASK::_TASK_START_SCENARIO_IN_PLACE(iLocal_66, joaat("WORLD_HUMAN_FARMER_RAKE"), 0, false, 0, -1f, false);
				func_1852(1);
			}
			break;
		case 1:
			if (!func_1347() && __LIB_0__::func_665(Global_35, iLocal_66, 1, 1) < 6f)
			{
				__LIB_1__::func_148(&uLocal_1346);
				func_1852(3);
			}
			else if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_93[44], true, 0))
			{
				func_1852(2);
			}
			break;
		case 2:
			if (!func_1347() && __LIB_0__::func_665(Global_35, iLocal_66, 1, 1) < 6f)
			{
				__LIB_1__::func_148(&uLocal_1346);
				func_1852(3);
			}
			else if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_93[44], true, 0))
			{
				func_1852(5);
			}
			break;
		case 3:
			if (!__LIB_0__::func_163(iLocal_66, -875674219) && !__LIB_2__::func_123(iLocal_66, Global_35, 60f))
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_66, Global_35, 0, -1f, -1f, -1f);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_66, Global_35, -1, 0, 51, 0);
			}
			if (func_1347() || __LIB_0__::func_665(Global_35, iLocal_66, 1, 1) > 10f)
			{
				TASK::_TASK_START_SCENARIO_IN_PLACE(iLocal_66, joaat("WORLD_HUMAN_FARMER_RAKE"), 0, false, 0, -1f, false);
				TASK::TASK_CLEAR_LOOK_AT(iLocal_66);
				func_1852(1);
			}
			else if (__LIB_0__::func_265(&uLocal_1346) > 8f)
			{
				TASK::TASK_COMBAT_PED(iLocal_66, Global_35, 0, 0);
				func_467(33, 1);
				func_1852(4);
			}
			break;
		case 4:
			break;
		case 5:
			if (!func_1347() && __LIB_0__::func_665(Global_35, iLocal_66, 1, 1) < 6f)
			{
				__LIB_1__::func_148(&uLocal_1346);
				func_1852(3);
			}
			break;
	}
}

void func_1346()
{
	switch (iLocal_1335)
	{
		case 0:
			if (func_1853())
			{
				func_1854(1);
			}
			break;
		case 1:
			if (!__LIB_0__::func_272(iLocal_67, 0))
			{
				func_1854(7);
			}
			else if (__LIB_0__::func_665(Global_35, iLocal_67, 1, 1) < 6f && !PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
			{
				func_1854(5);
			}
			else if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_93[44], false, 0))
			{
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_67, "mar2_dog", 0, 0, -1, 0, 0, -1);
				func_1854(2);
			}
			break;
		case 2:
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_67, 0) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_93[46], false, 0))
			{
				TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_67, 1.75f, 0, -1082130432 /* Float: -1f */, 0);
			}
			if (!__LIB_0__::func_272(iLocal_67, 0))
			{
				func_1854(7);
			}
			else if (__LIB_0__::func_665(Global_35, iLocal_67, 1, 1) < 6f && !PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
			{
				func_1854(5);
			}
			else if (__LIB_0__::func_94(iLocal_67, -1721.053f, -73.9059f, 177.2001f, 0) < 2f)
			{
				TASK::TASK_BARK(iLocal_67, Global_35, joaat("MOODANGRY"));
				func_1854(3);
			}
			break;
		case 3:
			if (!__LIB_0__::func_272(iLocal_67, 0))
			{
				func_1854(7);
			}
			else if (__LIB_0__::func_665(Global_35, iLocal_67, 1, 1) < 6f && !PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
			{
				func_1854(5);
			}
			else if (__LIB_0__::func_665(Global_35, iLocal_67, 1, 1) > 25f)
			{
				TASK::TASK_START_SCENARIO_AT_POSITION(iLocal_67, joaat("WORLD_ANIMAL_DOG_RESTING"), -1721.213f, -90.95f, 180.178f, 222.7613f, 0, true, false, 0, -1f, false);
				func_1854(4);
			}
			break;
		case 4:
			if (!__LIB_0__::func_272(iLocal_67, 0))
			{
				func_1854(7);
			}
			else if (__LIB_0__::func_665(Global_35, iLocal_67, 1, 1) < 6f && !PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
			{
				func_1854(5);
			}
			break;
		case 5:
			if (!__LIB_0__::func_272(iLocal_67, 0))
			{
				func_1854(7);
			}
			else
			{
				TASK::TASK_COMBAT_PED(iLocal_67, Global_35, 0, 0);
				func_467(33, 1);
				func_1854(6);
			}
			break;
		case 6:
			if (!__LIB_0__::func_272(iLocal_67, 0))
			{
				func_1854(7);
			}
			break;
		case 7:
			break;
	}
}

bool func_1347()
{
	return iLocal_348 == 1;
}

void func_1348(int iParam0)
{
	if (iLocal_68 == iParam0)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_68))
	{
		return;
	}
	TASK::TASK_LOOK_AT_ENTITY(Global_35, iParam0, -1, 0, 51, 0);
	iLocal_68 = iParam0;
	vLocal_69 = { __LIB_1__::func_977() };
}

void func_1349()
{
	func_1856(0);
	__LIB_1__::func_281(&iLocal_1338, 1, 1);
	__LIB_1__::func_281(&iLocal_1339, 1, 1);
	__LIB_8__::func_771(uLocal_46[0], 0, 1, 0);
}

void func_1350(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (!PED::IS_PED_ON_MOUNT(iParam0))
			{
				PED::_SET_PED_ON_MOUNT(iParam0, iParam1, -1, true);
			}
		}
	}
}

void func_1352(char[4] cParam0)
{
	switch (__LIB_8__::func_618(cParam0))
	{
		case 0:
			__LIB_9__::func_142(cParam0, "MAR2_OBJ05", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			__LIB_1__::func_148(&uLocal_218);
			__LIB_9__::func_60(cParam0, 1);
			break;
		case 1:
			if (!__LIB_6__::func_904() && !__LIB_5__::func_463())
			{
				if (__LIB_8__::func_711(cParam0, "MAR2_TENS", 0))
				{
					__LIB_9__::func_60(cParam0, 2);
				}
			}
			break;
		case 2:
			if (__LIB_0__::func_94(Global_35, -1742.192f, 67.0588f, 155.6108f, 0) < 5f)
			{
				__LIB_9__::func_60(cParam0, 3);
			}
			break;
		case 3:
			if ((!__LIB_6__::func_904() && !__LIB_5__::func_463()) && __LIB_8__::func_711(cParam0, "MAR2_TEBR", 0))
			{
				__LIB_9__::func_60(cParam0, 4);
			}
			break;
		case 4:
			if (__LIB_0__::func_94(Global_35, -1768.633f, 114.4927f, 157.4738f, 0) < 5f)
			{
				__LIB_9__::func_60(cParam0, 5);
			}
			break;
		case 5:
			if ((!__LIB_6__::func_904() && !__LIB_5__::func_463()) && __LIB_8__::func_711(cParam0, "MAR2_MEN", 0))
			{
				__LIB_9__::func_60(cParam0, 6);
			}
			break;
		case 6:
			if ((!__LIB_8__::func_684("MAR2_MEN") && ANIMSCENE::_IS_ANIM_SCENE_FINISHED(uLocal_202[5], false)) && __LIB_8__::func_711(cParam0, "MAR2_INSTRUCT", 0))
			{
				__LIB_9__::func_60(cParam0, 7);
			}
			break;
		case 7:
			if ((!__LIB_8__::func_684("MAR2_INSTRUCT") && __LIB_0__::func_94(Global_35, -1758.078f, 303.6625f, 111.0051f, 0) < 10f) && __LIB_8__::func_711(cParam0, "MAR2_MEN_STOP", 0))
			{
				__LIB_9__::func_60(cParam0, 51);
			}
			break;
		case 51:
			break;
	}
	if (!func_466(11))
	{
		func_1842(cParam0);
	}
	else
	{
		func_1859();
	}
}

void func_1353(char[4] cParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (2 - 1))
	{
		if (iVar0 == 0 && !ENTITY::IS_ENTITY_DEAD(uLocal_46[iVar0]))
		{
			switch (uLocal_262[iVar0])
			{
				case 0:
					func_467(6, 1);
					func_467(8, 1);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 256, false);
					__LIB_1__::func_148(&(vLocal_224[iVar0 /*3*/]));
					__LIB_0__::func_19(&(uLocal_262[iVar0]), 9);
					break;
				case 9:
					break;
				case 20:
					break;
			}
		}
		else if (iVar0 == 0)
		{
		}
		iVar0++;
	}
}

void func_1354(char[4] cParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_50[iVar0]))
		{
			iVar1 = iVar0;
			switch (uLocal_265[iVar0])
			{
				case 0:
					if (iVar1 == 1)
					{
						if (STREAMING::HAS_ANIM_DICT_LOADED("script_respawn@horse@mounted_unarmed"))
						{
							WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(iLocal_50[iVar0], false, false, true, false);
							TASK::TASK_PLAY_ANIM(iLocal_50[iVar0], "script_respawn@horse@mounted_unarmed", "arthur_saddle_lean_fwd_looking_idle", 1000f, -1.2f, -1, 5, 0f, false, 0, false, 0, false);
							__LIB_1__::func_148(&(vLocal_239[iVar0 /*3*/]));
							__LIB_0__::func_19(&(uLocal_265[iVar0]), 1);
						}
					}
					else if (iVar1 == 2)
					{
						__LIB_1__::func_148(&(vLocal_239[iVar0 /*3*/]));
						__LIB_0__::func_19(&(uLocal_265[iVar0]), 1);
					}
					break;
				case 1:
					if (iVar1 == 0)
					{
						__LIB_1__::func_148(&(vLocal_239[iVar0 /*3*/]));
						__LIB_0__::func_19(&(uLocal_265[iVar0]), 9);
					}
					else if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_93[29], true, 0))
					{
						func_467(11, 1);
						__LIB_1__::func_148(&(vLocal_239[iVar0 /*3*/]));
						__LIB_0__::func_19(&(uLocal_265[iVar0]), 6);
					}
					break;
				case 6:
					if (__LIB_0__::func_265(&(vLocal_239[iVar0 /*3*/])) > 1f)
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_54[iVar0]))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_54[iVar0], false);
							TASK::CLEAR_PED_TASKS(iLocal_54[iVar0], true, false);
						}
						TASK::CLEAR_PED_TASKS(iLocal_50[iVar0], true, false);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_50[iVar0], true);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_40);
						if (iVar1 == 0)
						{
							TASK::TASK_FOLLOW_ENTITY_ALONG_WAYPOINT_RECORDING_AT_OFFSET(0, iLocal_72, "mar2_ride_ambush", 0f, -40f, 0, 1544, -1, 0);
						}
						else if (iVar1 == 1)
						{
							TASK::TASK_FOLLOW_ENTITY_ALONG_WAYPOINT_RECORDING_AT_OFFSET(0, iLocal_72, "mar2_ride_ambush2", 0.25f, -22f, 0, 1544, -1, 0);
						}
						else if (iVar1 == 2)
						{
							TASK::TASK_FOLLOW_ENTITY_ALONG_WAYPOINT_RECORDING_AT_OFFSET(0, iLocal_72, "mar2_ride_ambush2", -0.25f, -22f, 0, 1544, -1, 0);
						}
						TASK::TASK_STAND_STILL(0, -1);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_40);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_50[iVar0], iLocal_40);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_40);
						TASK::TASK_LOOK_AT_ENTITY(iLocal_50[iVar0], Global_35, -1, 0, 51, 0);
						__LIB_1__::func_148(&(vLocal_239[iVar0 /*3*/]));
						__LIB_0__::func_19(&(uLocal_265[iVar0]), 7);
					}
					break;
				case 7:
					if (__LIB_0__::func_265(&(vLocal_239[iVar0 /*3*/])) >= 5f)
					{
						if (iVar1 == 0)
						{
							TASK::SET_PED_WAYPOINT_ROUTE_OFFSET(iLocal_50[iVar0], 0f, -40f, 0f);
						}
						else if (iVar1 == 1)
						{
							TASK::SET_PED_WAYPOINT_ROUTE_OFFSET(iLocal_50[iVar0], 0.25f, -25f, 0f);
						}
						else if (iVar1 == 2)
						{
							TASK::SET_PED_WAYPOINT_ROUTE_OFFSET(iLocal_50[iVar0], -0.25f, -29f, 0f);
						}
						if (iVar1 == 1)
						{
							WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(iLocal_50[iVar0], true, true, true, false);
						}
						__LIB_1__::func_148(&(vLocal_239[iVar0 /*3*/]));
						__LIB_0__::func_19(&(uLocal_265[iVar0]), 9);
					}
					break;
				case 9:
					break;
				case 22:
					break;
			}
		}
		iVar0++;
	}
}

void func_1355(int iParam0, struct<4> Param1, int iParam5, float fParam6)
{
	func_919(iParam0, Param1, Param1.f_3, iParam5, fParam6);
}

void func_1356(char[4] cParam0)
{
	int iVar0;
	iVar0 = iLocal_1349;
	func_1860();
	switch (iLocal_1349)
	{
		case 0:
			if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(uLocal_202[7], true) && !ANIMSCENE::_IS_ANIM_SCENE_LOADED(uLocal_202[7], true, false))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(uLocal_202[7]);
			}
			ANIMSCENE::_0xDF7B5144E25CD3FE(uLocal_202[7], func_428(0));
			ANIMSCENE::_0xDF7B5144E25CD3FE(uLocal_202[7], func_428(1));
			ANIMSCENE::_0xDF7B5144E25CD3FE(uLocal_202[7], func_428(2));
			ANIMSCENE::_0xDF7B5144E25CD3FE(uLocal_202[7], func_428(3));
			ANIMSCENE::_0xDF7B5144E25CD3FE(uLocal_202[7], func_428(4));
			ANIMSCENE::_0xDF7B5144E25CD3FE(uLocal_202[7], func_428(5));
			ANIMSCENE::_0xDF7B5144E25CD3FE(uLocal_202[7], func_428(6));
			ANIMSCENE::_0xDF7B5144E25CD3FE(uLocal_202[7], func_428(7));
			ANIMSCENE::_0xDF7B5144E25CD3FE(uLocal_202[7], func_428(8));
			func_1861(1);
			break;
		case 1:
			if (((((((((ANIMSCENE::_IS_ANIM_SCENE_LOADED(uLocal_202[7], true, false) && ANIMSCENE::_0x23E33CB9F4A3F547(uLocal_202[7], func_428(0))) && ANIMSCENE::_0x23E33CB9F4A3F547(uLocal_202[7], func_428(1))) && ANIMSCENE::_0x23E33CB9F4A3F547(uLocal_202[7], func_428(2))) && ANIMSCENE::_0x23E33CB9F4A3F547(uLocal_202[7], func_428(3))) && ANIMSCENE::_0x23E33CB9F4A3F547(uLocal_202[7], func_428(4))) && ANIMSCENE::_0x23E33CB9F4A3F547(uLocal_202[7], func_428(5))) && ANIMSCENE::_0x23E33CB9F4A3F547(uLocal_202[7], func_428(6))) && ANIMSCENE::_0x23E33CB9F4A3F547(uLocal_202[7], func_428(7))) && ANIMSCENE::_0x23E33CB9F4A3F547(uLocal_202[7], func_428(8)))
			{
				func_1861(2);
			}
			break;
		case 2:
			if (!func_466(34))
			{
				if (!__LIB_8__::func_671(cParam0) || ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(cParam0->f_7375.f_804))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_202[7], "JOHN", Global_35, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_202[7], "Posse1", iLocal_50[1], 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_202[7], "Posse2", iLocal_50[2], 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_202[7], "Posse_Leader", iLocal_50[0], 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_202[7], "Horse_01", iLocal_54[0], 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_202[7], "Horse_02", iLocal_54[1], 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_202[7], "Horse_03", iLocal_54[2], 0);
					PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
					PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE"), true);
					PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE_ALTERNATE"), true);
					__LIB_9__::func_42(cParam0, iLocal_50[0], "MAR2_POSSE_LEADER", 0);
					func_1861(3);
				}
			}
			break;
		case 3:
			if (!func_466(35))
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
				PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE"), true);
				PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE_ALTERNATE"), true);
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -130327132))
				{
					func_1862(1);
					func_467(35, 1);
				}
			}
			else if (func_1863())
			{
				func_1862(0);
				func_467(39, 1);
			}
			else if (func_1864())
			{
				func_1862(0);
				func_467(40, 1);
			}
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), false);
			if (ANIMSCENE::_0x1F0E401031E20146(uLocal_202[7], func_428(0)) && ANIMSCENE::_0x8D81E7824B7753F7(uLocal_202[7], "s_IG9_POSSE_ENTER_LOOP", 1))
			{
				func_1862(1);
				func_1861(4);
			}
			break;
		case 4:
			if (func_1863() || func_466(39))
			{
				func_1862(0);
				func_467(39, 0);
				func_1861(5);
			}
			else if (func_1864() || func_466(40))
			{
				func_1862(0);
				func_467(40, 0);
				func_1861(6);
			}
			break;
		case 5:
			if (ANIMSCENE::_0x1F0E401031E20146(uLocal_202[7], func_428(1)) && ANIMSCENE::_0x8D81E7824B7753F7(uLocal_202[7], "s_IG9_POSSE_ENTER_LOOP", 1))
			{
				func_1861(7);
			}
			break;
		case 6:
			if (ANIMSCENE::_0x1F0E401031E20146(uLocal_202[7], func_428(2)) && ANIMSCENE::_0x8D81E7824B7753F7(uLocal_202[7], "s_IG9_POSSE_ENTER_LOOP", 1))
			{
				func_1861(11);
			}
			break;
		case 7:
			if (ANIMSCENE::_0x1F0E401031E20146(uLocal_202[7], func_428(3)) && ANIMSCENE::_0x8D81E7824B7753F7(uLocal_202[7], "s_IG9_POSSE_KILL_A_FELLA_LOOP", 1))
			{
				func_1862(1);
				func_1861(8);
			}
			break;
		case 8:
			if (func_1863())
			{
				func_1862(0);
				func_1861(9);
			}
			else if (func_1864())
			{
				func_1862(0);
				func_1861(10);
			}
			break;
		case 9:
			if (ANIMSCENE::_0x1F0E401031E20146(uLocal_202[7], func_428(4)) && ANIMSCENE::_0x8D81E7824B7753F7(uLocal_202[7], "s_IG9_POSSE_KILL_A_FELLA_LOOP", 1))
			{
				func_1861(15);
			}
			break;
		case 10:
			if (ANIMSCENE::_0x1F0E401031E20146(uLocal_202[7], func_428(5)) && ANIMSCENE::_0x8D81E7824B7753F7(uLocal_202[7], "s_IG9_POSSE_KILL_A_FELLA_LOOP", 1))
			{
				func_1861(15);
			}
			break;
		case 11:
			if (ANIMSCENE::_0x1F0E401031E20146(uLocal_202[7], func_428(6)) && ANIMSCENE::_0x8D81E7824B7753F7(uLocal_202[7], "s_IG9_POSSE_KILL_A_FELLA_LOOP", 1))
			{
				func_1862(1);
				func_1861(12);
			}
			break;
		case 12:
			if (func_1863())
			{
				func_1862(0);
				func_1861(13);
			}
			else if (func_1864())
			{
				func_1862(0);
				func_1861(14);
			}
			break;
		case 13:
			if (ANIMSCENE::_0x1F0E401031E20146(uLocal_202[7], func_428(7)) && ANIMSCENE::_0x8D81E7824B7753F7(uLocal_202[7], "s_IG9_POSSE_JUST_A_FARMER_LOOP", 1))
			{
				func_1861(19);
			}
			break;
		case 14:
			if (ANIMSCENE::_0x1F0E401031E20146(uLocal_202[7], func_428(8)) && ANIMSCENE::_0x8D81E7824B7753F7(uLocal_202[7], "s_IG9_POSSE_I_KILLED_MARSTON_LOOP", 1))
			{
				func_1861(20);
			}
			break;
		case 15:
			if (ANIMSCENE::_0x1F0E401031E20146(uLocal_202[7], func_428(9)) && ANIMSCENE::_0x8D81E7824B7753F7(uLocal_202[7], "s_IG9_POSSE_WAS_MY_BRO_LOOP", 1))
			{
				func_1862(1);
				func_1861(16);
			}
			break;
		case 16:
			if (func_1863())
			{
				func_1862(0);
				func_1861(17);
			}
			else if (func_1864())
			{
				func_1862(0);
				func_1861(18);
			}
			break;
		case 17:
			if (ANIMSCENE::_0x1F0E401031E20146(uLocal_202[7], func_428(10)) && ANIMSCENE::_0x8D81E7824B7753F7(uLocal_202[7], "s_IG9_POSSE_WAS_MY_BRO_LOOP", 1))
			{
				func_1861(21);
			}
			break;
		case 18:
			if (ANIMSCENE::_0x1F0E401031E20146(uLocal_202[7], func_428(11)) && ANIMSCENE::_0x8D81E7824B7753F7(uLocal_202[7], "s_IG9_POSSE_WAS_MY_BRO_LOOP", 1))
			{
				func_1861(21);
			}
			break;
		case 19:
		case 20:
		case 21:
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(uLocal_202[7], false))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(uLocal_202[7]);
				__LIB_2__::func_624(&Local_1381, 1, 1, 1, 0);
				func_1861(22);
			}
			break;
		case 22:
			break;
	}
	if (iVar0 != iLocal_1349)
	{
		switch (iLocal_1349)
		{
			case 0:
				break;
			case 1:
				break;
			case 2:
				break;
			case 3:
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uLocal_202[7], func_428(0), true);
				ANIMSCENE::START_ANIM_SCENE(uLocal_202[7]);
				break;
			case 4:
				break;
			case 5:
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uLocal_202[7], func_428(1), true);
				ANIMSCENE::_0xAE6ADA8FE7E84ACC(uLocal_202[7], func_428(6));
				ANIMSCENE::_0xAE6ADA8FE7E84ACC(uLocal_202[7], func_428(7));
				ANIMSCENE::_0xAE6ADA8FE7E84ACC(uLocal_202[7], func_428(8));
				break;
			case 6:
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uLocal_202[7], func_428(2), true);
				ANIMSCENE::_0xAE6ADA8FE7E84ACC(uLocal_202[7], func_428(3));
				ANIMSCENE::_0xAE6ADA8FE7E84ACC(uLocal_202[7], func_428(4));
				ANIMSCENE::_0xAE6ADA8FE7E84ACC(uLocal_202[7], func_428(5));
				break;
			case 7:
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uLocal_202[7], func_428(3), true);
				ANIMSCENE::_0xDF7B5144E25CD3FE(uLocal_202[7], func_428(9));
				ANIMSCENE::_0xDF7B5144E25CD3FE(uLocal_202[7], func_428(10));
				ANIMSCENE::_0xDF7B5144E25CD3FE(uLocal_202[7], func_428(11));
				break;
			case 8:
				break;
			case 9:
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uLocal_202[7], func_428(4), true);
				break;
			case 10:
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uLocal_202[7], func_428(5), true);
				break;
			case 11:
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uLocal_202[7], func_428(6), true);
				ANIMSCENE::_0xDF7B5144E25CD3FE(uLocal_202[7], func_428(12));
				ANIMSCENE::_0xDF7B5144E25CD3FE(uLocal_202[7], func_428(13));
				break;
			case 12:
				break;
			case 13:
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uLocal_202[7], func_428(7), true);
				break;
			case 14:
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uLocal_202[7], func_428(8), true);
				break;
			case 15:
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uLocal_202[7], func_428(9), true);
				ANIMSCENE::_0xDF7B5144E25CD3FE(uLocal_202[7], func_428(14));
				break;
			case 16:
				break;
			case 17:
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uLocal_202[7], func_428(10), true);
				break;
			case 18:
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uLocal_202[7], func_428(11), true);
				break;
			case 19:
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uLocal_202[7], func_428(12), true);
				break;
			case 20:
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uLocal_202[7], func_428(13), true);
				break;
			case 21:
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uLocal_202[7], func_428(14), true);
				break;
			case 22:
				break;
		}
	}
}

bool func_1357()
{
	return iLocal_1349 > 2;
}

bool func_1358()
{
	return iLocal_1349 == 2;
}

void func_1359(bool bParam0)
{
	func_467(15, bParam0);
}

void func_1360(char[4] cParam0)
{
	if (__LIB_17__::func_579(cParam0, 14, 35f, 60f, 0, 0, 1, joaat("BLIP_STYLE_COMPANION")))
	{
		if (!iLocal_167[0])
		{
			iLocal_167[0] = 1;
			__LIB_0__::func_325(&iLocal_41);
		}
	}
	else if (iLocal_167[0])
	{
		iLocal_167[0] = 0;
		if (!func_1866())
		{
			func_1867();
		}
	}
	switch (__LIB_8__::func_618(cParam0))
	{
		case 0:
			func_1867();
			__LIB_9__::func_142(cParam0, "MAR2_OBJ06a", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			__LIB_0__::func_37(&uLocal_218);
			__LIB_9__::func_60(cParam0, 1);
			break;
		case 1:
			if (func_1362())
			{
				__LIB_0__::func_325(&iLocal_41);
				__LIB_9__::func_142(cParam0, "MAR2_OBJ06b", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_9__::func_60(cParam0, 2);
			}
			break;
		case 2:
			if (__LIB_0__::func_665(Global_35, uLocal_46[0], 0, 1) < 4f)
			{
				if (!__LIB_0__::func_75(&uLocal_218) || (__LIB_0__::func_265(&uLocal_218) > 6f && __LIB_8__::func_711(cParam0, "MAR2_JACK_FIGHT", 0)))
				{
					__LIB_1__::func_148(&uLocal_218);
				}
			}
			else
			{
				__LIB_0__::func_37(&uLocal_218);
			}
			break;
		case 51:
			break;
	}
}

void func_1361()
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = iLocal_1350;
	func_1868();
	switch (iLocal_1350)
	{
		case 0:
			if (iLocal_1349 > 2)
			{
				iLocal_1351 = TASK::ADD_COVER_POINT(-1752.99f, 307.9f, 110.43f, 353.6933f, 1, 2, 5, false);
				iLocal_1352 = TASK::ADD_COVER_POINT(-1761.8f, 311.57f, 110.6f, 345.601f, 0, 2, 4, false);
				func_1869(1);
			}
			break;
		case 1:
			if (iLocal_1349 >= 4 && func_1870())
			{
				func_1869(2);
			}
			else if (func_1871() && !TASK::IS_PED_STILL(Global_35))
			{
				func_1869(2);
			}
			else if (iLocal_1349 >= 4 && func_1872())
			{
				func_1869(2);
			}
			else if (func_1873())
			{
				func_1869(2);
			}
			else if (func_1874())
			{
				func_1869(3);
			}
			break;
		case 2:
			__LIB_2__::func_624(&Local_1381, 1, 1, 1, 0);
			func_467(13, 1);
			func_1861(22);
			func_1869(4);
			break;
		case 3:
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REPEATER_CARBINE"), false, 0, false, false);
			PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), true, 0, -1, false);
			func_467(12, 1);
			__LIB_1__::func_148(&uLocal_1353);
			func_1861(22);
			func_1869(4);
			break;
		case 4:
			if (func_466(12) && __LIB_1__::func_871(&uLocal_1353) > 1000)
			{
				PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), false, 0, -1, false);
				func_467(12, 0);
			}
			if (func_1875())
			{
				func_1869(5);
			}
			break;
		case 5:
			break;
	}
	if (iVar0 == iLocal_1350)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			iVar2 = iVar1;
			if (!__LIB_0__::func_272(iLocal_50[iVar2], 0) || PED::_IS_PED_HOGTIED(iLocal_50[iVar2]))
			{
				if (MAP::DOES_BLIP_EXIST(uLocal_42[iVar2]))
				{
					MAP::REMOVE_BLIP(&(uLocal_42[iVar2]));
				}
			}
			else
			{
				switch (uLocal_265[iVar2])
				{
					case 0:
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_54[iVar2], false);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_50[iVar2], joaat("REL_PLAYER_ENEMY"));
						AICOVERPOINT::_0x140B3CB1D424A945(iLocal_50[iVar2], -1);
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_54[iVar2]))
						{
							if (!PED::GET_PED_CONFIG_FLAG(iLocal_54[iVar2], 145, true))
							{
								PED::SET_PED_CONFIG_FLAG(iLocal_54[iVar2], 145, true);
							}
						}
						if (iVar2 == 0)
						{
							WEAPON::SET_CURRENT_PED_WEAPON(iLocal_50[iVar2], joaat("WEAPON_REVOLVER_CATTLEMAN"), true, 0, false, false);
						}
						__LIB_0__::func_19(&(uLocal_265[iVar2]), 1);
						break;
					case 1:
						if (iLocal_1350 == 4)
						{
							if (func_466(13))
							{
								if (iVar2 == 0)
								{
									__LIB_1__::func_265(iLocal_50[iVar2], "CALLOUT_JUST_KILL_EM_MALE", joaat("SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL"), 0, 1, 0, 0, 1);
								}
								__LIB_1__::func_148(&(vLocal_239[iVar1 /*3*/]));
								__LIB_0__::func_19(&(uLocal_265[iVar2]), 21);
							}
							else
							{
								if (iVar2 == 0)
								{
									PED::FORCE_PED_MOTION_STATE(iLocal_50[iVar2], joaat("MOTIONSTATE_AIMING"), false, 0, false);
									PED::_0x4C57F27D1554E6B0(iLocal_50[iVar2], ENTITY::GET_ENTITY_COORDS(Global_35, true, false) + Vector(0f, 0.7f, 0.5f), 1, -1082130432 /* Float: -1f */, 0, -1082130432 /* Float: -1f */);
								}
								__LIB_0__::func_19(&(uLocal_265[iVar2]), 14);
							}
						}
						break;
					case 21:
						if (iVar2 == 0 && __LIB_0__::func_265(&(vLocal_239[iVar1 /*3*/])) > 0.5f)
						{
							__LIB_0__::func_19(&(uLocal_265[iVar2]), 14);
						}
						else if (iVar2 == 1 && __LIB_0__::func_265(&(vLocal_239[iVar1 /*3*/])) > 1.7f)
						{
							__LIB_0__::func_19(&(uLocal_265[iVar2]), 14);
						}
						else if (iVar2 == 2 && __LIB_0__::func_265(&(vLocal_239[iVar1 /*3*/])) > 1f)
						{
							__LIB_0__::func_19(&(uLocal_265[iVar2]), 14);
						}
						break;
					case 14:
						func_1877(iLocal_50[iVar2], &(uLocal_42[iVar2]), 1);
						if (iVar2 == 1)
						{
							if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uLocal_202[7]))
							{
								ANIMSCENE::ABORT_ANIM_SCENE(uLocal_202[7], false);
							}
						}
						TASK::CLEAR_PED_TASKS(iLocal_50[iVar2], true, false);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_50[iVar2], false);
						switch (iVar2)
						{
							case 0:
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_50[iVar2], -1763.055f, 307.9278f, 110.8571f, 1f, 1, 0, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_50[iVar2], 11, true);
								break;
							case 1:
								TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(iLocal_50[iVar2], ENTITY::GET_ENTITY_COORDS(iLocal_50[iVar2], true, false), -1, 0, 0.7f, 0, 0, 0, 0, 0, 0);
								PED::_0x2208438012482A1A(iLocal_50[iVar2], false, false);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_50[iVar2], -1753.113f, 307.9674f, 110.4421f, 1f, 0, 0, 0);
								break;
							case 2:
								TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(iLocal_50[iVar2], ENTITY::GET_ENTITY_COORDS(iLocal_50[iVar2], true, false), -1, 0, 0.7f, 1, 0, 0, 0, 0, 0);
								PED::_0x2208438012482A1A(iLocal_50[iVar2], false, false);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_50[iVar2], -1762.106f, 311.7783f, 110.649f, 1f, 0, 0, 0);
								break;
						}
						TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(iLocal_50[iVar2], func_1298(13, 0), 110f, 0, 0);
						AICOVERPOINT::_0x1A7A802B2301EDC0(iLocal_50[iVar2]);
						__LIB_1__::func_148(&(vLocal_239[iVar1 /*3*/]));
						__LIB_0__::func_19(&(uLocal_265[iVar2]), 15);
						break;
					case 15:
						if (__LIB_0__::func_265(&(vLocal_239[iVar1 /*3*/])) > 2f)
						{
							if (iVar2 == 1)
							{
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_50[iVar2], -1746.459f, 301.7033f, 109.6825f, 1f, 1, 0, 0);
							}
							__LIB_1__::func_148(&(vLocal_239[iVar1 /*3*/]));
							__LIB_0__::func_19(&(uLocal_265[iVar2]), 17);
						}
						break;
					case 17:
						if (__LIB_0__::func_265(&(vLocal_239[iVar1 /*3*/])) > 15f)
						{
							PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_50[iVar2], 50, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_50[iVar2], 71, true);
							__LIB_0__::func_19(&(uLocal_265[iVar2]), 22);
						}
						break;
					case 22:
						break;
				}
			}
			iVar1++;
		}
	}
	else
	{
		func_1361();
	}
}

bool func_1362()
{
	return iLocal_1349 == 22;
}

bool func_1363()
{
	return iLocal_1350 == 5;
}

void func_1364(char[4] cParam0)
{
	if (__LIB_17__::func_579(cParam0, 14, 35f, 60f, 0, 0, 0, joaat("BLIP_STYLE_COMPANION")))
	{
		if (!iLocal_167[0])
		{
			iLocal_167[0] = 1;
		}
	}
	else if (iLocal_167[0])
	{
		iLocal_167[0] = 0;
	}
	switch (__LIB_8__::func_618(cParam0))
	{
		case 0:
			__LIB_9__::func_253(cParam0, uLocal_46[0], joaat("COLOR_WHITE"), joaat("BLIP_STYLE_COMPANION"), 1, 1);
			__LIB_9__::func_142(cParam0, "MAR2_OBJ04", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			__LIB_1__::func_148(&uLocal_218);
			__LIB_9__::func_60(cParam0, 1);
			break;
		case 1:
			if (__LIB_0__::func_265(&uLocal_218) >= 1f)
			{
				if (!__LIB_5__::func_468(cParam0))
				{
					__LIB_9__::func_208(cParam0, "MAR2_OBJ04", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				}
				__LIB_9__::func_60(cParam0, 2);
			}
			break;
		case 2:
			if (__LIB_0__::func_48(Global_35, uLocal_46[0], 45f, 1) && !__LIB_0__::func_48(Global_35, uLocal_46[0], 3f, 1))
			{
				func_1879();
			}
			__LIB_1__::func_148(&uLocal_218);
			__LIB_9__::func_60(cParam0, 3);
			break;
		case 3:
			if (func_1880())
			{
				__LIB_1__::func_148(&uLocal_218);
				__LIB_9__::func_60(cParam0, 4);
			}
			break;
		case 4:
			if (__LIB_0__::func_265(&uLocal_218) >= 1f)
			{
				__LIB_9__::func_208(cParam0, "MAR2_OBJ04", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_1__::func_148(&uLocal_218);
				__LIB_9__::func_60(cParam0, 5);
			}
			break;
		case 5:
			if (!__LIB_0__::func_270())
			{
				__LIB_1__::func_148(&uLocal_218);
				__LIB_9__::func_60(cParam0, 51);
			}
			break;
		case 10:
			if (!__LIB_0__::func_270())
			{
				if (!__LIB_5__::func_463())
				{
					if (__LIB_0__::func_48(Global_35, uLocal_46[0], 45f, 1))
					{
						__LIB_8__::func_711(cParam0, "MAR2_OBJ07b", 0);
					}
					__LIB_1__::func_148(&uLocal_218);
					__LIB_9__::func_60(cParam0, 11);
				}
			}
			break;
		case 11:
			if (!__LIB_5__::func_463())
			{
				__LIB_1__::func_148(&uLocal_218);
				__LIB_9__::func_60(cParam0, 51);
			}
			break;
		case 51:
			break;
	}
}

void func_1365(char[4] cParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (2 - 1))
	{
		if (iVar0 == 0 && !ENTITY::IS_ENTITY_DEAD(uLocal_46[iVar0]))
		{
			switch (uLocal_262[iVar0])
			{
				case 0:
					if (!__LIB_6__::func_862(cParam0, 8))
					{
					}
					__LIB_1__::func_148(&(vLocal_224[iVar0 /*3*/]));
					__LIB_0__::func_19(&(uLocal_262[iVar0]), 9);
					break;
				case 9:
					break;
				case 20:
					break;
			}
		}
		else if (iVar0 == 0)
		{
		}
		iVar0++;
	}
}

void func_1366()
{
	if (!__LIB_0__::func_75(&uLocal_1420))
	{
		__LIB_1__::func_148(&uLocal_1420);
	}
	else if (__LIB_0__::func_265(&uLocal_1420) > 2f && __LIB_0__::func_153(Global_35, 0, 1, 0) != joaat("WEAPON_UNARMED"))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 1, false, false);
		TASK::TASK_SWAP_WEAPON(Global_35, 0, 1, 0, 0);
		__LIB_1__::func_148(&uLocal_1420);
	}
}

bool func_1368(char[4] cParam0, bool bParam1)
{
	func_923(cParam0);
	if (((bParam1 && __LIB_4__::func_576(&(cParam0->f_10792)) != 11) && !__LIB_4__::func_562(&(cParam0->f_10792), 131072)) && !__LIB_4__::func_562(&(cParam0->f_10792), 32768))
	{
		return false;
	}
	return __LIB_4__::func_581(&(cParam0->f_10792));
}

void func_1369()
{
	func_467(43, 1);
}

void func_1370(char[4] cParam0, int iParam1)
{
	struct<8> Var0;
	Var0 = { __LIB_5__::func_65(&(cParam0->f_7375)) };
	if ((((__LIB_4__::func_562(&(cParam0->f_10792), 32768) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(cParam0->f_7375.f_804)) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(cParam0->f_7375.f_804, true, false)) && ANIMSCENE::_0xA9016536015DE29D(cParam0->f_7375.f_804, &Var0)) && ANIMSCENE::_0x23E33CB9F4A3F547(cParam0->f_7375.f_804, &Var0))
	{
		__LIB_9__::func_46(cParam0, &Var0);
		func_1334(cParam0);
	}
	else
	{
		if (iParam1 == 1 && __LIB_6__::func_872(cParam0, 16384))
		{
			__LIB_4__::func_618(&(cParam0->f_10792), Global_43805);
			__LIB_4__::func_532(&(cParam0->f_10792), 8);
		}
		__LIB_0__::func_19(&(cParam0->f_10792), iParam1);
		func_923(cParam0);
		__LIB_6__::func_868(cParam0, 2097152);
	}
}

void func_1373()
{
	SCRIPTS::_0x7D654266025E921B(joaat("CHAL_CTX_CUSTOM_1"));
}

void func_1374(char[4] cParam0)
{
	if (__LIB_17__::func_579(cParam0, 14, 75f, 150f, 0, 0, 1, joaat("BLIP_STYLE_COMPANION")))
	{
		if (!iLocal_167[0])
		{
			iLocal_167[0] = 1;
			__LIB_0__::func_325(&iLocal_41);
		}
	}
	else if (iLocal_167[0])
	{
		iLocal_167[0] = 0;
		func_1793();
	}
	func_1795();
	func_1796();
	func_1797(cParam0);
	if (func_1798())
	{
		__LIB_0__::func_325(&iLocal_41);
		func_1793();
		__LIB_9__::func_208(cParam0, "MAR2_OBJ01b", 0, 7500, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
	}
	if (!func_1347())
	{
		return;
	}
	if (func_1800())
	{
		__LIB_0__::func_325(&iLocal_41);
		iLocal_41 = __LIB_4__::func_983(408396114, func_1298(12, 5), 1);
		MAP::_BLIP_SET_MODIFIER(iLocal_41, -1878373110);
		MAP::SET_GPS_FLAGS(512, 0f);
		__LIB_9__::func_208(cParam0, "MAR2_OBJ08", 0, 7500, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
	}
	switch (__LIB_8__::func_618(cParam0))
	{
		case 0:
			if (!MAP::DOES_BLIP_EXIST(iLocal_41))
			{
				iLocal_41 = __LIB_4__::func_983(408396114, func_1298(12, 5), 1);
				MAP::_BLIP_SET_MODIFIER(iLocal_41, -1878373110);
				MAP::SET_GPS_FLAGS(512, 0f);
				__LIB_9__::func_327("mar2_ride_after_ambush", 0, joaat("COLOR_OBJECTIVE"));
			}
			__LIB_9__::func_208(cParam0, "MAR2_OBJ08", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			__LIB_1__::func_148(&uLocal_218);
			__LIB_9__::func_60(cParam0, 1);
			break;
		case 1:
			if (((__LIB_0__::func_48(Global_35, uLocal_46[0], 45f, 1) && func_1347()) && (PATHFIND::IS_POINT_ON_ROAD(ENTITY::GET_ENTITY_COORDS(iLocal_72, true, false), iLocal_72) || __LIB_0__::func_264(&uLocal_218) > 8f)) && __LIB_8__::func_711(cParam0, "MAR2_HERA", 0))
			{
				__LIB_1__::func_148(&uLocal_218);
				__LIB_9__::func_60(cParam0, 2);
			}
			break;
		case 2:
			if (!__LIB_8__::func_684("MAR2_HERA"))
			{
				func_467(4, 1);
				__LIB_0__::func_37(&uLocal_218);
				func_1887();
				__LIB_9__::func_60(cParam0, 3);
			}
			else if (__LIB_10__::func_578("MAR2_HERA"))
			{
				if (func_1889() && __LIB_8__::func_711(cParam0, "MAR2_CRY", 0))
				{
					func_1887();
				}
			}
			break;
		case 3:
			if (bLocal_1424 && func_1347())
			{
				__LIB_9__::func_60(cParam0, 4);
			}
			if ((__LIB_8__::func_618(cParam0) == 3 && func_1889()) && __LIB_8__::func_711(cParam0, "MAR2_CRY", 0))
			{
				func_1887();
			}
			break;
		case 4:
			if (!__LIB_8__::func_684("MAR2_CRY") && func_1347())
			{
				if (bLocal_1423 && __LIB_8__::func_711(cParam0, "MAR2_JACK_P", 0))
				{
					__LIB_9__::func_60(cParam0, 5);
				}
				else if (!bLocal_1423 && __LIB_8__::func_711(cParam0, "MAR2_JACK_N", 0))
				{
					__LIB_9__::func_60(cParam0, 5);
				}
			}
			break;
		case 5:
			if (!__LIB_8__::func_684("MAR2_JACK_P") && !__LIB_8__::func_684("MAR2_JACK_N"))
			{
				if (((func_1347() && __LIB_8__::func_803(&uLocal_218, 2f)) && __LIB_0__::func_94(Global_35, -2583.164f, 455.9866f, 144.9381f, 0) < 630f) && __LIB_8__::func_711(cParam0, "MAR2_HERA2", 0))
				{
					__LIB_9__::func_60(cParam0, 6);
				}
				else if (func_1889() && __LIB_8__::func_711(cParam0, "MAR2_CRY", 0))
				{
					func_1887();
				}
			}
			else if (__LIB_10__::func_578("MAR2_JACK_P") || __LIB_10__::func_578("MAR2_JACK_N"))
			{
				if (func_1889() && __LIB_8__::func_711(cParam0, "MAR2_CRY", 0))
				{
					func_1887();
				}
			}
			break;
		case 6:
			if (!__LIB_8__::func_684("MAR2_HERA2"))
			{
				func_1887();
				__LIB_9__::func_60(cParam0, 51);
			}
			else if (__LIB_10__::func_578("MAR2_HERA2"))
			{
				if (func_1889() && __LIB_8__::func_711(cParam0, "MAR2_CRY", 0))
				{
					func_1887();
				}
			}
			break;
		case 51:
			if (func_1889() && __LIB_8__::func_711(cParam0, "MAR2_CRY", 0))
			{
				func_1887();
			}
			break;
	}
}

void func_1375(char[4] cParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (2 - 1))
	{
		if (iVar0 == 0 && !ENTITY::IS_ENTITY_DEAD(uLocal_46[iVar0]))
		{
			switch (uLocal_262[iVar0])
			{
				case 0:
					if (!__LIB_6__::func_862(cParam0, 8))
					{
					}
					__LIB_1__::func_148(&(vLocal_224[iVar0 /*3*/]));
					__LIB_0__::func_19(&(uLocal_262[iVar0]), 1);
					break;
				case 1:
					__LIB_1__::func_148(&(vLocal_224[iVar0 /*3*/]));
					__LIB_0__::func_19(&(uLocal_262[iVar0]), 20);
					break;
				case 20:
					break;
			}
		}
		else if (iVar0 == 0)
		{
		}
		iVar0++;
	}
}

void func_1376(char[4] cParam0)
{
	switch (iLocal_1428)
	{
		case 0:
			if (__LIB_8__::func_671(cParam0))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
				func_1890(1);
			}
			break;
		case 1:
			if (((!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(cParam0->f_7375.f_804) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(cParam0->f_7375.f_804, false)) || ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(cParam0->f_7375.f_804)) || ANIMSCENE::_0x005E6F28DD7ED58D(cParam0->f_7375.f_804, "JOHN"))
			{
				TASK::TASK_VEHICLE_GOTO_NAVMESH(Global_35, iLocal_72, -1745.096f, 328.5099f, 110.404f, 7.5f, 0, 5f);
				__LIB_1__::func_148(&uLocal_1425);
				func_1890(2);
			}
			break;
		case 2:
			if (__LIB_0__::func_265(&uLocal_1425) > 6f || (__LIB_0__::func_265(&uLocal_1425) > 3f && PAD::IS_DISABLED_CONTROL_PRESSED(0, joaat("INPUT_VEH_ACCELERATE"))))
			{
				TASK::CLEAR_PED_TASKS(Global_35, true, false);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				func_1890(3);
			}
			break;
		case 3:
			break;
	}
}

void func_1377()
{
	func_1891(0);
	__LIB_1__::func_281(&iLocal_1429, 1, 1);
	__LIB_1__::func_281(&iLocal_1430, 1, 1);
	__LIB_8__::func_771(uLocal_46[0], 0, 1, 0);
}

void func_1378(bool bParam0)
{
	iLocal_1432 = 0;
	if (!__LIB_0__::func_272(uLocal_46[0], 0))
	{
		return;
	}
	switch (iLocal_1431)
	{
		case 0:
			if (bParam0)
			{
				if (!MISC::_0x4B101DBCC9482F2D(uLocal_46[0]))
				{
					__LIB_10__::func_979(uLocal_46[0], "", 500f, 0, 500f, 324);
				}
				func_1891(1);
			}
			break;
		case 1:
			if (__LIB_10__::func_896(PLAYER::PLAYER_ID(), uLocal_46[0]))
			{
				func_1891(2);
			}
			break;
		case 2:
			if (!__LIB_0__::func_139(iLocal_1429))
			{
				iLocal_1429 = __LIB_1__::func_877("INTERACT_ENCOURAGE", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
				__LIB_1__::func_574(&iLocal_1429, uLocal_46[0]);
			}
			if (!__LIB_0__::func_139(iLocal_1430))
			{
				iLocal_1430 = __LIB_1__::func_877("INTERACT_REPRIMAND", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
				__LIB_1__::func_574(&iLocal_1430, uLocal_46[0]);
			}
			if (!__LIB_10__::func_896(PLAYER::PLAYER_ID(), uLocal_46[0]))
			{
				__LIB_1__::func_281(&iLocal_1429, 1, 1);
				__LIB_1__::func_281(&iLocal_1430, 1, 1);
				func_1891(1);
			}
			else if (__LIB_1__::func_514(iLocal_1429, 1))
			{
				iLocal_1432 = 1;
			}
			else if (__LIB_1__::func_514(iLocal_1430, 1))
			{
				iLocal_1432 = 2;
			}
			break;
	}
}

bool func_1379()
{
	return iLocal_1432 != 0;
}

bool func_1380()
{
	return iLocal_1432 == 1;
}

bool func_1381()
{
	return iLocal_1432 == 2;
}

bool func_1383(char[4] cParam0)
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	iVar1 = 0;
	while (iVar1 <= (2 - 1))
	{
		switch (__LIB_6__::func_864(cParam0))
		{
			case 0:
				if (iVar1 == 0)
				{
					Var2 = { func_228(0, 1) };
				}
				else if (iVar1 == 1)
				{
					Var2 = { func_228(0, 2) };
				}
				break;
			case 1:
				if (iVar1 == 0)
				{
					if (__LIB_10__::func_892(1))
					{
						Var2 = { func_228(1, 3) };
					}
					else
					{
						Var2 = { func_228(1, 2) };
					}
				}
				else if (iVar1 == 1)
				{
					Var2 = { func_228(1, 4) };
				}
				break;
			case 2:
				if (iVar1 == 0)
				{
					if (__LIB_10__::func_892(2))
					{
						Var2 = { func_228(2, 4) };
					}
					else if (__LIB_10__::func_892(4))
					{
						Var2 = { func_228(2, 7) };
					}
					else
					{
						Var2 = { func_228(2, 1) };
					}
				}
				else if (iVar1 == 1)
				{
					Var2 = { func_228(1, 4) };
				}
				break;
			case 3:
				if (iVar1 == 0)
				{
					Var2 = { func_228(3, 1) };
				}
				else if (iVar1 == 1)
				{
					Var2 = { func_228(1, 4) };
				}
				break;
			case 4:
				if (iVar1 == 0)
				{
					Var2 = { func_228(4, 1) };
				}
				else if (iVar1 == 1)
				{
					Var2 = { func_228(1, 4) };
				}
				break;
			case 5:
				if (iVar1 == 0)
				{
					if (__LIB_10__::func_892(1))
					{
						Var2 = { func_228(5, 3) };
					}
					else
					{
						Var2 = { func_228(5, 2) };
					}
				}
				else if (iVar1 == 1)
				{
					Var2 = { func_228(10, 2) };
				}
				break;
			case 6:
				if (iVar1 == 0)
				{
					Var2 = { func_228(6, 1) };
				}
				else if (iVar1 == 1)
				{
					Var2 = { func_228(10, 2) };
				}
				break;
			case 7:
				if (iVar1 == 0)
				{
					Var2 = { func_228(7, 1) };
				}
				else if (iVar1 == 1)
				{
					Var2 = { func_228(10, 2) };
				}
				break;
			case 8:
				if (iVar1 == 0)
				{
					Var2 = { func_228(8, 1) };
				}
				else if (iVar1 == 1)
				{
					Var2 = { func_228(10, 2) };
				}
				break;
			case 9:
				if (iVar1 == 0)
				{
					Var2 = { func_228(9, 1) };
				}
				else if (iVar1 == 1)
				{
					Var2 = { func_228(10, 2) };
				}
				break;
			case 10:
				if (iVar1 == 0)
				{
					Var2 = { func_228(10, 1) };
				}
				else if (iVar1 == 1)
				{
					Var2 = { func_228(10, 2) };
				}
				break;
			case 25:
				if (iVar1 == 0)
				{
					Var2 = { func_228(11, 1) };
				}
				else if (iVar1 == 1)
				{
					Var2 = { func_228(11, 2) };
				}
				break;
			default:
				break;
		}
		if (iVar1 == 0)
		{
			if (!iLocal_182[iVar1])
			{
				uLocal_46[iVar1] = __LIB_6__::func_878(cParam0);
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_46[iVar1]))
				{
					iLocal_182[iVar1] = 1;
					if (!__LIB_8__::func_671(cParam0))
					{
						func_1355(uLocal_46[0], Var2, 2, 1073741824 /* Float: 2f */);
					}
					func_1897(cParam0, 0);
				}
				else
				{
					bVar0 = true;
				}
			}
		}
		else if (iVar1 == 1)
		{
			if (__LIB_6__::func_864(cParam0) == 0 || (__LIB_6__::func_864(cParam0) >= 10 && __LIB_6__::func_864(cParam0) <= 25))
			{
				if (!iLocal_182[iVar1])
				{
					if (func_911(cParam0, 13, &(uLocal_46[1]), 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0))
					{
						if (!ENTITY::IS_ENTITY_DEAD(uLocal_46[iVar1]))
						{
							iLocal_182[iVar1] = 1;
							if (!__LIB_8__::func_671(cParam0))
							{
								func_1355(uLocal_46[1], Var2, 2, 1073741824 /* Float: 2f */);
							}
							func_1897(cParam0, 1);
						}
					}
					else
					{
						bVar0 = true;
					}
				}
			}
		}
		iVar1++;
	}
	return !bVar0;
}

void func_1384(char[4] cParam0)
{
	if (__LIB_17__::func_579(cParam0, 14, 75f, 150f, 0, 0, 1, joaat("BLIP_STYLE_COMPANION")))
	{
		if (!iLocal_167[0])
		{
			iLocal_167[0] = 1;
			__LIB_0__::func_325(&iLocal_41);
		}
	}
	else if (iLocal_167[0])
	{
		iLocal_167[0] = 0;
		func_1793();
	}
	func_1795();
	func_1796();
	func_1797(cParam0);
	if (func_1798())
	{
		__LIB_0__::func_325(&iLocal_41);
		func_1793();
		__LIB_9__::func_208(cParam0, "MAR2_OBJ01b", 0, 7500, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
	}
	if (!func_1347())
	{
		return;
	}
	if (func_1800())
	{
		__LIB_0__::func_325(&iLocal_41);
		iLocal_41 = __LIB_4__::func_983(408396114, func_1298(12, 5), 1);
		MAP::_BLIP_SET_MODIFIER(iLocal_41, -1878373110);
		MAP::SET_GPS_FLAGS(512, 0f);
		__LIB_9__::func_327("mar2_drive_in_ranch", 0, joaat("COLOR_OBJECTIVE"));
		__LIB_9__::func_208(cParam0, "MAR2_OBJ09", 0, 7500, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
	}
	switch (__LIB_8__::func_618(cParam0))
	{
		case 0:
			if (!MAP::DOES_BLIP_EXIST(iLocal_41))
			{
				iLocal_41 = __LIB_4__::func_983(408396114, func_1298(12, 5), 1);
				MAP::_BLIP_SET_MODIFIER(iLocal_41, -1878373110);
				MAP::SET_GPS_FLAGS(512, 0f);
				__LIB_9__::func_327("mar2_drive_in_ranch", 0, joaat("COLOR_OBJECTIVE"));
			}
			__LIB_9__::func_142(cParam0, "MAR2_OBJ09", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			__LIB_9__::func_60(cParam0, 1);
			break;
		case 1:
			if (((!__LIB_8__::func_684("MAR2_HERA2") && func_1347()) && __LIB_0__::func_94(Global_35, -2583.164f, 455.9866f, 144.9381f, 0) < 90f) && __LIB_8__::func_711(cParam0, "MAR2_OBJ09a", 0))
			{
				__LIB_9__::func_60(cParam0, 2);
			}
			else if (__LIB_10__::func_578("MAR2_HERA2"))
			{
				if (func_1889() && __LIB_8__::func_711(cParam0, "MAR2_CRY", 0))
				{
					func_1887();
				}
			}
			break;
		case 2:
			if (!__LIB_8__::func_684("MAR2_OBJ09a"))
			{
				__LIB_1__::func_148(&uLocal_218);
				__LIB_9__::func_60(cParam0, 3);
			}
			break;
		case 3:
			if (__LIB_0__::func_265(&uLocal_218) >= 1f)
			{
				__LIB_9__::func_208(cParam0, "MAR2_OBJ09", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_1__::func_148(&uLocal_218);
				__LIB_9__::func_60(cParam0, 4);
			}
			break;
		case 4:
			if (func_466(7) && __LIB_8__::func_711(cParam0, "MAR2_OBJ09b", 0))
			{
				__LIB_9__::func_60(cParam0, 51);
			}
			break;
		case 51:
			break;
	}
}

void func_1385(char[4] cParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (2 - 1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_46[iVar0]))
		{
			switch (uLocal_262[iVar0])
			{
				case 0:
					if (!__LIB_6__::func_862(cParam0, 8))
					{
					}
					if (iVar0 == 1)
					{
						TASK::TASK_START_SCENARIO_AT_POSITION(uLocal_46[iVar0], joaat("WORLD_HUMAN_INSPECT"), func_1298(0, 16), func_1321(0, 16), -1, false, true, "WORLD_HUMAN_INSPECT_FEMALE_D", -1f, false);
					}
					__LIB_1__::func_148(&(vLocal_224[iVar0 /*3*/]));
					__LIB_0__::func_19(&(uLocal_262[iVar0]), 1);
					break;
				case 1:
					if (iVar0 == 0)
					{
						if (func_466(7))
						{
							__LIB_1__::func_148(&(vLocal_224[iVar0 /*3*/]));
							__LIB_0__::func_19(&(uLocal_262[iVar0]), 2);
						}
					}
					else if (iVar0 == 1)
					{
						if (__LIB_0__::func_48(uLocal_46[iVar0], iLocal_72, 30f, 1))
						{
							__LIB_1__::func_148(&(vLocal_224[iVar0 /*3*/]));
							__LIB_0__::func_19(&(uLocal_262[iVar0]), 2);
						}
					}
					break;
				case 2:
					if (iVar0 == 0)
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_46[iVar0], true);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_40);
						TASK::TASK_STAND_STILL(0, 1000);
						TASK::TASK_LEAVE_VEHICLE(0, iLocal_72, 0, 0);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_1298(11, 1), 1f, 20000, 0.25f, 0, 40000f);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, uLocal_46[1], -1, -1f, -1f, -1f);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_40);
						TASK::TASK_PERFORM_SEQUENCE(uLocal_46[iVar0], iLocal_40);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_40);
					}
					else if (iVar0 == 1)
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_46[iVar0], true);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_40);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_1298(11, 2), 1f, 20000, 0.25f, 0, 40000f);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_40);
						TASK::TASK_PERFORM_SEQUENCE(uLocal_46[iVar0], iLocal_40);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_40);
					}
					__LIB_1__::func_148(&(vLocal_224[iVar0 /*3*/]));
					__LIB_0__::func_19(&(uLocal_262[iVar0]), 3);
					break;
				case 3:
					break;
				case 20:
					break;
			}
		}
		iVar0++;
	}
}

void func_1388()
{
	SCRIPTS::_0x50B72A754EE64A71(joaat("CHAL_CTX_CUSTOM_1"));
}

void func_1402()
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
	iVar0 = func_1908(6291456, 0);
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

int func_1426(var uParam0, int iParam1, int iParam2)
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
		return func_1426(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

int func_1450(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
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
				func_919(Global_1360165[iParam0 /*1157*/], vVar0, fParam6, 2, 1073741824 /* Float: 2f */);
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

void func_1451(char[4] cParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	vector3 vVar0;
	__LIB_4__::func_787(iParam1, bParam3, bParam4, bParam6);
	if (!__LIB_6__::func_872(cParam0, 512))
	{
		if (__LIB_6__::func_872(cParam0, 4) && bParam4)
		{
			vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, 5f, 0f, 0f) };
			__LIB_1__::func_338(iParam1, vVar0);
		}
	}
	else
	{
		Stack.Push(cParam0);
		Call_Loc(cParam0->f_10781);
	}
	func_1526(cParam0, iParam1, iParam2, __LIB_1__::func_464(iParam2, 0));
	__LIB_9__::func_141(cParam0, iParam1, 512);
	if (bParam5)
	{
		__LIB_9__::func_141(cParam0, iParam1, 128);
	}
	else
	{
		__LIB_9__::func_147(cParam0, iParam1, 128);
	}
	switch (iParam2)
	{
		case 1:
		case default:
	}
}

bool func_1492(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, var uParam4, char[4] cParam5)
{
	int iVar0;
	__LIB_5__::func_68(uParam4, &cParam0);
	if (__LIB_0__::func_84(uParam4, 2) && !__LIB_0__::func_84(uParam4, 67108864))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SKIP_CUTSCENE"), false);
	}
	if (__LIB_0__::func_81(uParam4) != 1)
	{
		__LIB_5__::func_378(uParam4);
	}
	POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	PED::SET_PED_RESET_FLAG(Global_35, 134, true);
	HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
	switch (__LIB_0__::func_81(uParam4))
	{
		case 1:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam4->f_804, true, false))
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam4->f_804, false))
				{
					__LIB_9__::func_199(uParam4, &cParam0, cParam5);
				}
				else if (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_804))
				{
					__LIB_1__::func_747(uParam4, 4);
					return false;
				}
				else
				{
					if (__LIB_4__::func_584(uParam4, 2))
					{
						Stack.Push(uParam4);
						Call_Loc(uParam4->f_797);
					}
					__LIB_8__::func_632(cParam5);
				}
				__LIB_1__::func_747(uParam4, 3);
			}
			else if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804))
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				if (__LIB_8__::func_705(cParam5, __LIB_6__::func_864(cParam5), 262144))
				{
					if (!__LIB_0__::func_84(uParam4, 2097152))
					{
						__LIB_5__::func_69(uParam4);
					}
				}
				else if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_806)) && (!__LIB_6__::func_862(cParam5, 8) || __LIB_0__::func_84(uParam4, 134217728)))
				{
				}
				else
				{
					__LIB_5__::func_309(uParam4);
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
				__LIB_5__::func_350(uParam4);
				if (!__LIB_0__::func_75(&(uParam4->f_1)))
				{
					__LIB_1__::func_283(&(uParam4->f_1), 0);
				}
				else if (__LIB_0__::func_265(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_804);
					}
					__LIB_1__::func_747(uParam4, 4);
				}
			}
			break;
		case 2:
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804) || !ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam4->f_804, true, false))
			{
				if (__LIB_5__::func_577(uParam4, &cParam0, 1, 1))
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam4->f_804, true, false))
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
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_804);
					}
					__LIB_1__::func_747(uParam4, 4);
				}
			}
			else if (!PLAYER::IS_PLAYER_TELEPORT_ACTIVE() || PLAYER::_HAS_PLAYER_TELEPORT_FINISHED(PLAYER::GET_PLAYER_INDEX()))
			{
				if (__LIB_8__::func_587(cParam5) != 0 || (__LIB_6__::func_877(cParam5) == 1 && __LIB_8__::func_663(cParam5, __LIB_6__::func_864(cParam5)) >= 3))
				{
					if (!DLC::GET_IS_LOADING_SCREEN_ACTIVE())
					{
						MISC::_0xA565FAC215CBC77D();
						__LIB_0__::func_722(1, 0);
						__LIB_9__::func_199(uParam4, &cParam0, cParam5);
						__LIB_1__::func_747(uParam4, 3);
					}
					else
					{
						SCRIPTS::SHUTDOWN_LOADING_SCREEN();
					}
				}
			}
			else if (__LIB_0__::func_265(&(uParam4->f_1)) >= 60f)
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_804);
				}
				__LIB_1__::func_747(uParam4, 4);
			}
			break;
		case 3:
			func_402(uParam4);
			if (__LIB_4__::func_584(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_797);
			}
			__LIB_8__::func_632(cParam5);
			if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam4->f_804, false)) && (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_804) || __LIB_0__::func_84(uParam4, 512)))
			{
				if (!__LIB_0__::func_84(uParam4, 1024) && __LIB_5__::func_448(uParam4, 1))
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
				__LIB_5__::func_378(uParam4);
			}
			if (__LIB_0__::func_84(uParam4, 524288))
			{
				if (IntToFloat(MISC::ABSI((__LIB_4__::func_585(uParam4) - __LIB_4__::func_586(uParam4)))) <= 2f)
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804))
				{
					if (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_804))
					{
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
					}
				}
				if (__LIB_4__::func_988(uParam4, Global_35, 4))
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
				if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) && __LIB_4__::func_586(uParam4) > 5000)
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
			}
			if (__LIB_4__::func_989(uParam4))
			{
				if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804))
				{
				}
				__LIB_6__::func_921(uParam4);
				return true;
			}
			else
			{
				if (__LIB_0__::func_84(uParam4, 67108864))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						if (!ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_804) && !ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_804))
						{
							ANIMSCENE::_DELETE_ANIM_SCENE_2(uParam4->f_804);
						}
						__LIB_1__::func_148(&(uParam4->f_1));
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
						__LIB_0__::func_88(uParam4, 512);
						__LIB_4__::func_550(uParam4, 67108864, 1);
						__LIB_1__::func_747(uParam4, 4);
					}
					else if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(1000);
					}
				}
				else if ((((!__LIB_0__::func_84(uParam4, 16384) && !ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_804)) && CAM::IS_SCREEN_FADED_OUT()) && __LIB_4__::func_586(uParam4) <= 5000) && __LIB_4__::func_586(uParam4) >= 0)
				{
					CAM::DO_SCREEN_FADE_IN(1000);
				}
				if (!__LIB_0__::func_84(uParam4, 536870912) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1495039362))
				{
					__LIB_5__::func_129(&(uParam4->f_861), 0);
					__LIB_0__::func_88(uParam4, 536870912);
				}
				if (__LIB_4__::func_586(uParam4) >= 5000 && __LIB_4__::func_586(uParam4) <= (__LIB_4__::func_585(uParam4) - 5000))
				{
					__LIB_0__::func_89();
				}
			}
			break;
		case 6:
			if (__LIB_4__::func_989(uParam4))
			{
				__LIB_6__::func_921(uParam4);
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
					if (ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_804))
					{
						__LIB_0__::func_88(uParam4, 1073741824 /* Float: 2f */);
					}
				}
			}
			else
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804))
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_804))
					{
						ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_804, true);
						if (UIFEED::_0xC17F69E1418CD11F(9) != 0)
						{
							UIFEED::_0xDD1232B332CBB9E7(9, 1, 0);
						}
						return false;
					}
					else if (ANIMSCENE::_0x4CDFFE3189EBDBD0(uParam4->f_804))
					{
						return false;
					}
				}
				iVar0 = 1;
				if (__LIB_6__::func_877(cParam5) == 1 && __LIB_8__::func_663(cParam5, __LIB_6__::func_864(cParam5)) >= 3)
				{
					if (__LIB_8__::func_634(cParam5))
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_804))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_804, false);
						}
						__LIB_1__::func_747(uParam4, 3);
					}
					else if (__LIB_0__::func_265(&(uParam4->f_1)) >= 30f)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_804))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_804, false);
						}
						__LIB_1__::func_747(uParam4, 3);
					}
				}
				if (iVar0 == 0)
				{
					Stack.Push(!__LIB_4__::func_584(uParam4, 4));
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_798);
					if (StackVal || StackVal)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_804))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_804, false);
						}
						__LIB_1__::func_747(uParam4, 3);
					}
					else if (__LIB_0__::func_265(&(uParam4->f_1)) >= 30f)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_804))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_804, false);
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

void func_1499(int iParam0)
{
	if (iLocal_367 != iParam0)
	{
		iLocal_367 = iParam0;
	}
}

bool func_1501(char[4] cParam0)
{
	struct<4> Var0;
	vector3 vVar4;
	if (func_466(31))
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_72))
	{
		Var0 = { func_2030(cParam0) };
		iLocal_72 = VEHICLE::CREATE_VEHICLE(joaat("UTILLIWAG"), Var0, Var0.f_3, true, true, false, false);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_72))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_72, Var0, Var0.f_3, false, false, true);
			VEHICLE::_0x09C970AE59ABF6B2(iLocal_72, false);
			ENTITY::_SET_ENTITY_SOMETHING(iLocal_72, true);
			VEHICLE::_SET_VEHICLE_TINT(iLocal_72, 2);
			VEHICLE::_SET_VEHICLE_LIVERY(iLocal_72, 2);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_72) && !ENTITY::DOES_ENTITY_EXIST(iLocal_49))
	{
		vVar4 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_72, 0f, 3f, 0f) };
		iLocal_49 = __LIB_1__::func_545(joaat("A_C_HORSE_SUFFOLKPUNCH_REDCHESTNUT"), vVar4, 0f, 1, 1, 0, 1, 0, 1, 0, 0, 0, 0);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_49))
		{
			ENTITY::_0x9587913B9E772D29(iLocal_49, 0);
			VEHICLE::_0x316CDB5B6E8F4110(iLocal_49, iLocal_72, 0);
			func_399();
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_72) && ENTITY::DOES_ENTITY_EXIST(iLocal_49))
	{
		if (VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_72, 0) == iLocal_49)
		{
			func_467(31, 1);
		}
	}
	return func_466(31);
}

void func_1502(char[4] cParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		if (__LIB_6__::func_864(cParam0) == 0)
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
		}
		WEAPON::_0x78030C7867D8B9B6(Global_35, 0);
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_72))
		{
			AITRANSPORT::_0xB7079F4C72896756(Global_35, iLocal_72, 0, 1, -1);
		}
	}
}

bool func_1503(char[4] cParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;
	if (bParam1)
	{
		iVar1 = 0;
		while (iVar1 <= (1 - 1))
		{
			if (func_2032(cParam0, iVar1))
			{
			}
			else
			{
				bVar0 = true;
			}
			iVar1++;
		}
		if (ENTITY::IS_ENTITY_DEAD(iLocal_60[0]))
		{
		}
		else
		{
			__LIB_0__::func_19(&(uLocal_273[0]), 2);
		}
		return !bVar0;
	}
	else
	{
		switch (uLocal_273[0])
		{
			case 0:
				__LIB_0__::func_19(&(uLocal_273[0]), 1);
				break;
			case 1:
				if (uLocal_195[0] < 1)
				{
					func_2032(cParam0, uLocal_195[0]);
				}
				else
				{
					__LIB_0__::func_19(&(uLocal_273[0]), 2);
				}
				break;
			case 2:
				return true;
		}
	}
	return !bVar0;
}

bool func_1504(char[4] cParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	if (bParam1)
	{
		bVar0 = true;
		iVar1 = 0;
		while (iVar1 < 1)
		{
			iVar2 = iVar1;
			if (!func_2034(cParam0, iVar2))
			{
				bVar0 = false;
			}
			iVar1++;
		}
		if (bVar0)
		{
			__LIB_0__::func_19(&(uLocal_273[1]), 2);
		}
	}
	else
	{
		bVar0 = false;
		switch (uLocal_273[1])
		{
			case 0:
				__LIB_0__::func_19(&(uLocal_273[1]), 1);
				break;
			case 1:
				if (uLocal_195[1] < 1)
				{
					func_2034(cParam0, uLocal_195[1]);
				}
				else
				{
					__LIB_0__::func_19(&(uLocal_273[1]), 2);
				}
				break;
			case 2:
				bVar0 = true;
				break;
		}
	}
	return bVar0;
}

void func_1505(char[4] cParam0, int iParam1)
{
	struct<4> Var0;
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_50[iParam1]))
	{
		switch (__LIB_6__::func_864(cParam0))
		{
			case 0:
			case 1:
			case 2:
			case 3:
			case 4:
				if (iParam1 == 0)
				{
					Var0 = { func_228(3, 3) };
				}
				else if (iParam1 == 1)
				{
					Var0 = { func_228(4, 5) };
				}
				else if (iParam1 == 2)
				{
					Var0 = { func_228(4, 6) };
				}
				break;
			case 5:
				if (iParam1 == 0)
				{
					Var0 = { func_228(5, 6) };
				}
				else if (iParam1 == 1)
				{
					Var0 = { func_228(5, 7) };
				}
				else if (iParam1 == 2)
				{
					Var0 = { func_228(5, 8) };
				}
				break;
			case 6:
				if (iParam1 == 0)
				{
					Var0 = { func_228(6, 3) };
				}
				else if (iParam1 == 1)
				{
					Var0 = { func_228(6, 4) };
				}
				else if (iParam1 == 2)
				{
					Var0 = { func_228(6, 5) };
				}
				break;
			case 7:
				if (iParam1 == 0)
				{
					Var0 = { func_228(7, 3) };
				}
				else if (iParam1 == 1)
				{
					Var0 = { func_228(7, 4) };
				}
				else if (iParam1 == 2)
				{
					Var0 = { func_228(7, 5) };
				}
				break;
			default:
				break;
		}
		iLocal_50[iParam1] = __LIB_1__::func_545(joaat("MES_MARSTON2_MALES_01"), Var0, Var0.f_3, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		func_2035(&(iLocal_50[iParam1]), iParam1);
	}
	else
	{
		iLocal_198[1]++;
	}
}

bool func_1506(char[4] cParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	if (uLocal_270[0] == 2)
	{
		return true;
	}
	if (bParam1)
	{
		bVar2 = true;
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			iVar1 = iVar0;
			bVar2 = (bVar2 && func_2036(cParam0, iVar1));
			iVar0++;
		}
		if (bVar2)
		{
			__LIB_0__::func_19(&(uLocal_270[0]), 2);
		}
		return bVar2;
	}
	else
	{
		switch (uLocal_270[0])
		{
			case 0:
				__LIB_0__::func_19(&(uLocal_270[0]), 1);
				break;
			case 1:
				iVar0 = 0;
				while (iVar0 <= 2)
				{
					iVar1 = iVar0;
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_54[iVar1]))
					{
						if (func_2036(cParam0, iVar1))
						{
							return false;
						}
					}
					iVar0++;
				}
				__LIB_0__::func_19(&(uLocal_270[0]), 2);
				break;
			case 2:
				break;
		}
	}
	return uLocal_270[0] == 2;
}

int func_1507(char[4] cParam0, bool bParam1)
{
	if (bParam1)
	{
		while (iLocal_198[1] < 3)
		{
			func_1505(cParam0, iLocal_198[1]);
		}
		__LIB_0__::func_19(&(uLocal_270[1]), 2);
		return 1;
	}
	else
	{
		switch (uLocal_270[1])
		{
			case 0:
				__LIB_0__::func_19(&(uLocal_270[1]), 1);
				break;
			case 1:
				if (iLocal_198[1] < 3)
				{
					func_1505(cParam0, iLocal_198[1]);
				}
				else
				{
					__LIB_0__::func_19(&(uLocal_270[1]), 2);
				}
				break;
			case 2:
				return 1;
		}
	}
	return 0;
}

int func_1508(char[4] cParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	float fVar2;
	bool bVar3;
	bool bVar4;
	float fVar5;
	bool bVar6;
	bool bVar7;
	if (!func_2037(cParam0, iParam1, &iVar0, &bVar1, &fVar2, &bVar3, &bVar4, &fVar5, &bVar6, &bVar7))
	{
		return 0;
	}
	if (!__LIB_0__::func_30(iVar0))
	{
		return 0;
	}
	if (!__LIB_0__::func_724(iVar0))
	{
		__LIB_0__::func_68(iVar0, 0, 0);
	}
	if (!__LIB_0__::func_724(iVar0))
	{
		return 0;
	}
	__LIB_1__::func_948(iVar0, bVar1, fVar2, bVar3, bVar4, fVar5, bVar6, bVar7);
	return 1;
}

bool func_1524(int iParam0)
{
	struct<9> Var0;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_93[iParam0]))
	{
		return true;
	}
	if (!func_2053(iParam0, &iVar9, &iVar10))
	{
		if (!func_2054(iParam0, &Var0))
		{
			return false;
		}
		func_2055(iParam0, Var0);
	}
	else
	{
		func_2056(iParam0);
		iVar11 = iVar9;
		while (iVar11 <= iVar10)
		{
			iVar12 = iVar11;
			if (!func_2054(iVar12, &Var0))
			{
			}
			else
			{
				func_2055(iVar12, Var0);
				VOLUME::_0x6E0D3C3F828DA773(iLocal_93[iParam0], iLocal_93[iVar12]);
			}
			iVar11++;
		}
	}
	return VOLUME::_DOES_VOLUME_EXIST(iLocal_93[iParam0]);
}

void func_1526(char[4] cParam0, int iParam1, int iParam2, char* sParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (!__LIB_3__::func_358(__LIB_8__::func_645(cParam0)))
	{
		__LIB_8__::func_660(cParam0);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		if (__LIB_0__::func_31(iParam2))
		{
			sParam3 = __LIB_1__::func_464(iParam2, 0);
		}
		else
		{
			sParam3 = __LIB_4__::func_608(iParam2);
		}
	}
	if (!__LIB_9__::func_133(cParam0, iParam1))
	{
		func_2061(cParam0, iParam1, 347146, 0, sParam3, 67108863, 1023, 3, iParam2);
	}
	if (!__LIB_4__::func_610(cParam0->f_5421, iParam1))
	{
		__LIB_4__::func_999(cParam0->f_5421, iParam1);
	}
	DECORATOR::DECOR_SET_INT(iParam1, __LIB_4__::func_611(), iParam2);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam1, joaat("REL_GANG_DUTCHS"));
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iParam1, false);
	PED::_0x15F4732C357B1D6D(iParam1, PLAYER::GET_PLAYER_INDEX(), 10);
	PED::_0x15F4732C357B1D6D(iParam1, PLAYER::GET_PLAYER_INDEX(), 11);
}

int func_1527(char[4] cParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_46[0]))
	{
		if (__LIB_9__::func_408(cParam0, uLocal_46[0], 0, 0, 1, 1))
		{
			if (__LIB_6__::func_872(cParam0, 4) || __LIB_6__::func_862(cParam0, 524288))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_72))
				{
					if (!PED::IS_PED_IN_VEHICLE(uLocal_46[0], iLocal_72, false))
					{
						PED::SET_PED_INTO_VEHICLE(uLocal_46[0], iLocal_72, 0);
					}
				}
			}
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_46[1]))
	{
		if (__LIB_9__::func_408(cParam0, uLocal_46[1], 0, 0, 1, 1))
		{
			if (__LIB_6__::func_872(cParam0, 4) || __LIB_6__::func_862(cParam0, 524288))
			{
				func_1355(uLocal_46[1], func_228(0, 14), 2, 1073741824 /* Float: 2f */);
			}
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_60[0]))
	{
		if (__LIB_9__::func_408(cParam0, iLocal_60[0], 0, 0, 1, 1))
		{
			if (__LIB_6__::func_872(cParam0, 4) || __LIB_6__::func_862(cParam0, 524288))
			{
				func_1355(iLocal_60[0], func_228(0, 15), 2, 1073741824 /* Float: 2f */);
			}
			func_471(1);
		}
	}
	func_2066(cParam0);
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 560580119))
	{
		func_953(cParam0);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_46[0], -1204668013))
	{
		__LIB_5__::func_509(uLocal_46[0], 1, 1);
	}
	return 1;
}

int func_1528(char[4] cParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		if (__LIB_9__::func_408(cParam0, Global_35, 0, 0, 1, 1))
		{
			if (__LIB_6__::func_872(cParam0, 4) || __LIB_6__::func_862(cParam0, 524288))
			{
				__LIB_0__::func_489(0f, 0f);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_72))
			{
				if (!PED::IS_PED_IN_VEHICLE(Global_35, iLocal_72, false))
				{
					PED::SET_PED_INTO_VEHICLE(Global_35, iLocal_72, -1);
				}
			}
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_46[0]))
	{
		if (__LIB_9__::func_408(cParam0, uLocal_46[0], 0, 0, 1, 1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_72))
			{
				if (!PED::IS_PED_IN_VEHICLE(uLocal_46[0], iLocal_72, false))
				{
					PED::SET_PED_INTO_VEHICLE(uLocal_46[0], iLocal_72, 0);
				}
			}
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_72))
	{
		if (__LIB_9__::func_346(cParam0, iLocal_72, "UTILLIWAG", 0, 1, 1))
		{
			if (__LIB_6__::func_872(cParam0, 4) || __LIB_6__::func_862(cParam0, 524288))
			{
				func_1355(iLocal_72, func_228(4, 2), 2, 1073741824 /* Float: 2f */);
			}
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_58[0]))
	{
		if (__LIB_9__::func_408(cParam0, iLocal_58[0], "U_M_M_STRFREIGHTSTATIONOWNER_01", 0, 1, 1))
		{
			func_1355(iLocal_58[0], func_228(3, 2), 2, 1073741824 /* Float: 2f */);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_58[0], false);
			TASK::CLEAR_PED_TASKS(iLocal_58[0], true, false);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_50[0]))
	{
		if (__LIB_9__::func_408(cParam0, iLocal_50[0], "G_M_M_UNICRIMINALS_01", 0, 1, 1))
		{
			if (__LIB_6__::func_872(cParam0, 4) || __LIB_6__::func_862(cParam0, 524288))
			{
				func_1355(iLocal_50[0], func_228(4, 4), 2, 1073741824 /* Float: 2f */);
			}
			__LIB_0__::func_490(&(iLocal_50[0]), 0);
			iLocal_185[0] = 0;
			iLocal_198[1] = 0;
			__LIB_0__::func_19(&(uLocal_270[1]), 0);
		}
	}
	if (!func_2068(cParam0))
	{
		return 0;
	}
	return 1;
}

int func_1529(char[4] cParam0)
{
	int iVar0;
	int iVar1;
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_72))
	{
		if (__LIB_9__::func_346(cParam0, iLocal_72, "UTILLIWAG", 0, 1, 1))
		{
			if (__LIB_6__::func_872(cParam0, 4) || __LIB_6__::func_862(cParam0, 524288))
			{
				func_1355(iLocal_72, func_228(7, 17), 2, 1073741824 /* Float: 2f */);
			}
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		if (__LIB_9__::func_408(cParam0, Global_35, 0, 0, 1, 1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_72))
			{
				if (PED::IS_PED_IN_VEHICLE(Global_35, iLocal_72, false))
				{
					PED::_0xE0B61ED8BB37712F(Global_35);
				}
			}
			iVar0 = 0;
			while (iVar0 < 3)
			{
				iVar1 = iVar0;
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_50[iVar1]))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_50[iVar1], false, true);
				}
				iVar0++;
			}
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_46[0]))
	{
		if (__LIB_9__::func_408(cParam0, uLocal_46[0], 0, 0, 1, 1))
		{
			if (__LIB_6__::func_872(cParam0, 4) || __LIB_6__::func_862(cParam0, 524288))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_72))
				{
					if (PED::IS_PED_IN_VEHICLE(uLocal_46[0], iLocal_72, false))
					{
						PED::_0xE0B61ED8BB37712F(uLocal_46[0]);
					}
				}
				func_1355(uLocal_46[0], func_228(7, 16), 2, 1073741824 /* Float: 2f */);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_72))
			{
				AITRANSPORT::_0x4248AB2EEB3C75AD(iLocal_72, Global_35, 0);
				AITRANSPORT::_0x4248AB2EEB3C75AD(iLocal_72, uLocal_46[0], 1);
			}
			func_1288(6);
		}
	}
	func_1356(cParam0);
	__LIB_5__::func_509(uLocal_46[0], 0, 1);
	return 1;
}

int func_1530(char[4] cParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_72))
	{
		if (__LIB_9__::func_346(cParam0, iLocal_72, "UTILLIWAG", 0, 1, 1))
		{
			if (__LIB_6__::func_862(cParam0, 524288))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_72, -1745.369f, 312.5629f, 109.5282f, -38.69f, false, false, true);
			}
		}
	}
	__LIB_6__::func_887(cParam0, 4194304);
	func_1376(cParam0);
	return 1;
}

int func_1531(char[4] cParam0)
{
	int iVar0;
	int iVar1;
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		if (__LIB_9__::func_408(cParam0, Global_35, 0, 0, 1, 1))
		{
			if (__LIB_6__::func_872(cParam0, 4) || __LIB_6__::func_862(cParam0, 524288))
			{
				func_1355(Global_35, func_228(11, 4), 2, 1073741824 /* Float: 2f */);
				__LIB_0__::func_489(0f, 0f);
			}
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_46[0]))
	{
		if (__LIB_9__::func_408(cParam0, uLocal_46[0], 0, 0, 1, 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_202[8], "JackMarston_Teen", uLocal_46[0], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_202[8], "AbigailRoberts", uLocal_46[1], 0);
			ANIMSCENE::START_ANIM_SCENE(uLocal_202[8]);
		}
	}
	if (__LIB_6__::func_864(cParam0) == 25)
	{
		if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
		{
			if ((__LIB_10__::func_985(cParam0) - __LIB_9__::func_338(cParam0)) <= 2000)
			{
				CAM::DO_SCREEN_FADE_OUT(1000);
			}
		}
	}
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	if (!func_466(19))
	{
		iVar0 = __LIB_0__::func_398(7);
		iVar1 = __LIB_0__::func_398(1);
		if (__LIB_0__::func_272(iVar0, 0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iVar0, -2590.037f, 465.5254f, 145.1149f, 79.8012f, true, false, true);
			TASK::TASK_STAND_STILL(iVar0, -1);
		}
		if (__LIB_0__::func_272(iVar1, 0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iVar1, -2589.972f, 467.1571f, 145.0408f, 83.5558f, true, false, true);
			TASK::TASK_STAND_STILL(iVar1, -1);
		}
		func_467(19, 1);
	}
	return 1;
}

bool func_1532(char[4] cParam0)
{
	__LIB_9__::func_142(cParam0, "MAR2_OBJ01", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
	return func_2066(cParam0);
}

int func_1533(char[4] cParam0)
{
	__LIB_9__::func_142(cParam0, "MAR2_OBJ05", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
	if (!func_2068(cParam0))
	{
		return 0;
	}
	return 1;
}

int func_1534(char[4] cParam0)
{
	__LIB_9__::func_142(cParam0, "MAR2_OBJ06a", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
	return 1;
}

int func_1535(char[4] cParam0)
{
	__LIB_9__::func_142(cParam0, "MAR2_OBJ08", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
	return 1;
}

void func_1537(int iParam0)
{
	if (iLocal_356 != iParam0)
	{
		iLocal_356 = iParam0;
	}
}

void func_1547(char[4] cParam0)
{
	int iVar0;
	int iVar1;
	if (__LIB_6__::func_864(cParam0) == 0)
	{
		iVar0 = 14;
		iVar1 = 30;
	}
	else if (__LIB_6__::func_864(cParam0) == 1)
	{
		iVar0 = 15;
		iVar1 = 0;
	}
	else if (__LIB_6__::func_864(cParam0) == 2)
	{
		iVar0 = 15;
		iVar1 = 30;
	}
	else if (__LIB_6__::func_864(cParam0) == 3)
	{
		iVar0 = 16;
		iVar1 = 0;
	}
	else if (__LIB_6__::func_864(cParam0) == 4)
	{
		iVar0 = 16;
		iVar1 = 30;
	}
	else if (__LIB_6__::func_864(cParam0) == 5)
	{
		iVar0 = 17;
		iVar1 = 0;
	}
	else if (__LIB_6__::func_864(cParam0) == 6)
	{
		iVar0 = 17;
		iVar1 = 30;
	}
	else if (__LIB_6__::func_864(cParam0) == 7)
	{
		iVar0 = 18;
		iVar1 = 0;
	}
	else if (__LIB_6__::func_864(cParam0) == 8)
	{
		iVar0 = 18;
		iVar1 = 30;
	}
	else if (__LIB_6__::func_864(cParam0) == 9)
	{
		iVar0 = 19;
		iVar1 = 0;
	}
	else if (__LIB_6__::func_864(cParam0) == 10)
	{
		iVar0 = 19;
		iVar1 = 30;
	}
	else if (__LIB_6__::func_864(cParam0) == 25)
	{
		iVar0 = 20;
		iVar1 = 0;
	}
	__LIB_9__::func_96(iVar0, iVar1, 0, 0);
}

void func_1548(char[4] cParam0)
{
	if (!func_466(15))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_ATTACK2"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_AIM"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_ATTACK2"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_PASSENGER_AIM"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_PASSENGER_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_DRAFT_AIM"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_DRAFT_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_BOAT_AIM"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_BOAT_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_CAR_AIM"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_CAR_ATTACK"), false);
		if (__LIB_0__::func_153(Global_35, 0, 1, 0) == joaat("WEAPON_KIT_BINOCULARS"))
		{
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), true);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_AIM"), true);
		}
		HUD::_0xC9CAEAEEC1256E54(-1618603322);
		if (!func_466(14) || __LIB_3__::func_135(&uLocal_255) > 20000)
		{
			if (!__LIB_8__::func_671(cParam0))
			{
				if ((((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, joaat("INPUT_ATTACK")) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, joaat("INPUT_ATTACK2"))) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, joaat("INPUT_HORSE_ATTACK"))) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, joaat("INPUT_HORSE_ATTACK2"))) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, joaat("INPUT_TOGGLE_HOLSTER")))
				{
					iLocal_338 = __LIB_0__::func_45("MAR2_NOGUNS", 7000, 0, 0, 0, 1);
					func_467(14, 1);
					__LIB_1__::func_148(&uLocal_255);
				}
			}
		}
	}
	else if (iLocal_338 != 0 && func_2080(iLocal_338))
	{
		UIFEED::_0x2F901291EF177B02(iLocal_338, 0);
		iLocal_338 = 0;
	}
}

void func_1550(char[4] cParam0)
{
	int iVar0;
	if (__LIB_0__::func_75(&uLocal_357))
	{
		if (__LIB_0__::func_265(&uLocal_357) > 2f)
		{
			__LIB_9__::func_156(cParam0, "MAR2_FSCJA", "", 1, 0);
		}
		return;
	}
	iVar0 = __LIB_6__::func_864(cParam0);
	if (iVar0 < iLocal_20 || iVar0 > iLocal_21)
	{
		return;
	}
	if (func_1347())
	{
		return;
	}
	if (__LIB_0__::func_94(Global_35, -1797.418f, -384.0061f, 159.254f, 0) < 60f)
	{
		return;
	}
	if (func_466(33))
	{
		__LIB_1__::func_148(&uLocal_357);
	}
	else if (func_2082(iLocal_50[0], 1))
	{
		__LIB_1__::func_148(&uLocal_357);
	}
	else if (func_2082(iLocal_54[0], 0))
	{
		__LIB_1__::func_148(&uLocal_357);
	}
	else if (func_2082(iLocal_65, 0))
	{
		__LIB_1__::func_148(&uLocal_357);
	}
	else if (func_2082(iLocal_66, 0))
	{
		__LIB_1__::func_148(&uLocal_357);
	}
	else if (func_2082(iLocal_67, 0))
	{
		__LIB_1__::func_148(&uLocal_357);
	}
}

void func_1551(char[4] cParam0)
{
	int iVar0;
	if (__LIB_0__::func_75(&uLocal_360))
	{
		if (__LIB_0__::func_265(&uLocal_360) > 2f)
		{
			__LIB_9__::func_156(cParam0, "MAR2_FJATH", "", 0, 0);
		}
		return;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_72, false, false))
	{
		return;
	}
	if (!__LIB_0__::func_272(uLocal_46[0], 0))
	{
		return;
	}
	iVar0 = __LIB_6__::func_864(cParam0);
	if (__LIB_8__::func_663(cParam0, iVar0) != 5)
	{
		return;
	}
	if (!func_2083(cParam0))
	{
		return;
	}
	if (!PED::IS_PED_IN_VEHICLE(uLocal_46[0], iLocal_72, false))
	{
		__LIB_1__::func_148(&uLocal_360);
	}
}

void func_1552(char[4] cParam0)
{
	float fVar0;
	if (!func_466(42))
	{
		if (func_466(41))
		{
			if (__LIB_8__::func_711(cParam0, "MAR2_MCS4_LI_A", 0))
			{
				__LIB_1__::func_148(&uLocal_1258);
				func_467(42, 1);
			}
		}
	}
	else if (!func_466(44))
	{
		if (!__LIB_8__::func_684("MAR2_MCS4_LI_A"))
		{
			func_467(44, 1);
		}
		else if (func_466(43))
		{
			fVar0 = __LIB_0__::func_265(&uLocal_1258);
			if ((fVar0 > 0.707f && fVar0 < 1.56f) || (fVar0 > 2.712f && fVar0 < 4f))
			{
				__LIB_6__::func_900("MAR2_MCS4_LI_A", 0, 0);
				func_467(44, 1);
			}
		}
	}
}

bool func_1553()
{
	if (!__LIB_0__::func_272(Global_35, 0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_93[51], false, 0))
	{
		return false;
	}
	if (!func_2084())
	{
		return false;
	}
	return true;
}

void func_1564(char[4] cParam0)
{
	struct<8> Var0;
	func_2093(cParam0);
	if (__LIB_8__::func_587(cParam0) == 1 && CAM::IS_SCREEN_FADED_OUT())
	{
		GRAPHICS::_0x297B72E2AF094742(6);
	}
	else if (__LIB_8__::func_587(cParam0) == 0 && !__LIB_6__::func_862(cParam0, 8))
	{
		__LIB_8__::func_668(cParam0);
	}
	__LIB_5__::func_326(&(cParam0->f_10792));
	__LIB_8__::func_696(cParam0);
	__LIB_8__::func_638(cParam0, 67108864);
	__LIB_8__::func_638(cParam0, 8192);
	__LIB_6__::func_887(cParam0, 4);
	__LIB_6__::func_887(cParam0, 512);
	__LIB_6__::func_887(cParam0, 65536);
	__LIB_6__::func_887(cParam0, 1024);
	__LIB_6__::func_887(cParam0, 262144);
	__LIB_6__::func_887(cParam0, 16777216);
	__LIB_6__::func_887(cParam0, 64);
	__LIB_6__::func_881(cParam0, 128);
	__LIB_6__::func_868(cParam0, -2147483648);
	__LIB_6__::func_896(cParam0, 1);
	if (__LIB_6__::func_872(cParam0, 4194304))
	{
		__LIB_8__::func_707(cParam0, __LIB_6__::func_864(cParam0), 1073741824 /* Float: 2f */);
	}
	__LIB_6__::func_881(cParam0, 4194304);
	__LIB_6__::func_881(cParam0, 8388608);
	if (!__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 2048))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
	}
	if (__LIB_0__::func_2() == 0)
	{
		__LIB_1__::func_965(8);
		__LIB_5__::func_103(1);
	}
	if (__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 64) || !__LIB_6__::func_871(cParam0))
	{
		__LIB_0__::func_267(0);
	}
	else
	{
		__LIB_0__::func_267(1);
	}
	CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
	if (!__LIB_6__::func_862(cParam0, 131072))
	{
		PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::GET_PLAYER_INDEX(), false);
	}
	__LIB_0__::func_37(&(cParam0->f_13106));
	__LIB_1__::func_148(&(cParam0->f_13112));
	__LIB_9__::func_213(cParam0, __LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 1));
	if (!__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 1024))
	{
		HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
	}
	if (!__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 32768))
	{
		__LIB_0__::func_733(1);
	}
	if (__LIB_8__::func_669(cParam0, __LIB_9__::func_40(cParam0)) != -1 && PED::_0x62DE46F061CAA468() < __LIB_8__::func_669(cParam0, __LIB_9__::func_40(cParam0)))
	{
		PED::_0xF008E0BA1FE1D644((__LIB_8__::func_669(cParam0, __LIB_9__::func_40(cParam0)) - PED::_0x62DE46F061CAA468()));
	}
	if (MISSIONDATA::_MISSIONDATA_TIMECYCLE_BOX_EXISTS())
	{
		MISSIONDATA::_MISSIONDATA_TIMECYCLE_BOX_DELETE();
	}
	Var0 = { __LIB_8__::func_697(cParam0) };
	MISSIONDATA::_MISSIONDATA_TIMECYCLE_BOX_SET_MODIFIER(&Var0);
	Global_43805 = -1;
	if (__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 1))
	{
		__LIB_0__::func_7(&Global_1935630, 2097152);
	}
	else
	{
		__LIB_0__::func_8(&Global_1935630, 2097152);
	}
	__LIB_9__::func_37(cParam0);
	if (__LIB_6__::func_864(cParam0) == 25 && __LIB_0__::func_13(32768))
	{
		__LIB_9__::func_56(cParam0, 16);
	}
	if (__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 512))
	{
		__LIB_4__::func_587(1f, 0f, 0f, 0f);
	}
	else
	{
		__LIB_4__::func_680();
	}
}

void func_1736(int iParam0)
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
	func_686(iParam0, 1, 1, -142743235, 1);
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
		func_686(uVar18[iVar36], 1, 1, -142743235, 1);
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
					__LIB_9__::func_2(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), Global_1905941, 1, 0, 0);
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

void func_1741(struct<6> Param0)
{
	if (!func_2223(Param0.f_4, 1))
	{
	}
	if (!func_2223(Param0, 1))
	{
	}
	if (!func_2223(Param0.f_2, 1))
	{
	}
	if (!func_2223(Param0.f_5, 1))
	{
	}
	if (!func_2223(Param0.f_3, 1))
	{
	}
	if (!func_2223(Param0.f_1, 1))
	{
	}
}

void func_1790(int iParam0)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uLocal_202[iParam0]))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(uLocal_202[iParam0], true, false))
		{
			if (iParam0 == 0)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Global_35))
				{
					if (ANIMSCENE::_0x6F1F0B17109309DA(uLocal_202[iParam0], "John"))
					{
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_202[iParam0], "John", Global_35, 0);
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_46[0]))
				{
					if (ANIMSCENE::_0x6F1F0B17109309DA(uLocal_202[iParam0], "JackMarston_Teen"))
					{
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_202[iParam0], "JackMarston_Teen", uLocal_46[0], 0);
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_46[1]))
				{
					if (ANIMSCENE::_0x6F1F0B17109309DA(uLocal_202[iParam0], "AbigailRoberts"))
					{
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_202[iParam0], "AbigailRoberts", uLocal_46[1], 0);
					}
				}
			}
			else if (((iParam0 == 1 || iParam0 == 2) || iParam0 == 4) || iParam0 == 5)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Global_35))
				{
					if (ANIMSCENE::_0x6F1F0B17109309DA(uLocal_202[iParam0], "John"))
					{
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_202[iParam0], "John", Global_35, 0);
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_46[0]))
				{
					if (ANIMSCENE::_0x6F1F0B17109309DA(uLocal_202[iParam0], "JackMarston_Teen"))
					{
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_202[iParam0], "JackMarston_Teen", uLocal_46[0], 0);
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_72))
				{
					if (ANIMSCENE::_0x6F1F0B17109309DA(uLocal_202[iParam0], "Utilliwag"))
					{
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_202[iParam0], "Utilliwag", iLocal_72, 0);
					}
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uLocal_202[iParam0], 0f, 0f, 0f, 0f, 0f, 0f, 2);
					ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(uLocal_202[iParam0], iLocal_72, -1);
				}
			}
			else if (iParam0 == 3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_46[0]))
				{
					if (ANIMSCENE::_0x6F1F0B17109309DA(uLocal_202[iParam0], "JackMarston_Teen"))
					{
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_202[iParam0], "JackMarston_Teen", uLocal_46[0], 0);
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_72))
				{
					if (ANIMSCENE::_0x6F1F0B17109309DA(uLocal_202[iParam0], "Utilliwag"))
					{
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_202[iParam0], "Utilliwag", iLocal_72, 0);
					}
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uLocal_202[iParam0], 0f, 0f, 0f, 0f, 0f, 0f, 2);
					ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(uLocal_202[iParam0], iLocal_72, -1);
				}
			}
			else if (iParam0 == 6)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_46[0]))
				{
					if (ANIMSCENE::_0x6F1F0B17109309DA(uLocal_202[iParam0], "JackMarston_Teen"))
					{
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_202[iParam0], "JackMarston_Teen", uLocal_46[0], 0);
					}
				}
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uLocal_202[iParam0], "pbl_base", true);
			}
			else if (iParam0 == 7)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Global_35))
				{
					if (ANIMSCENE::_0x6F1F0B17109309DA(uLocal_202[iParam0], "John"))
					{
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_202[iParam0], "John", Global_35, 0);
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_50[0]))
				{
					if (ANIMSCENE::_0x6F1F0B17109309DA(uLocal_202[iParam0], "Posse_Leader"))
					{
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_202[iParam0], "Posse_Leader", iLocal_50[0], 0);
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_50[1]))
				{
					if (ANIMSCENE::_0x6F1F0B17109309DA(uLocal_202[iParam0], "Posse1"))
					{
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_202[iParam0], "Posse1", iLocal_50[1], 0);
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_50[2]))
				{
					if (ANIMSCENE::_0x6F1F0B17109309DA(uLocal_202[iParam0], "Posse2"))
					{
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_202[iParam0], "Posse2", iLocal_50[2], 0);
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_54[0]))
				{
					if (ANIMSCENE::_0x6F1F0B17109309DA(uLocal_202[iParam0], "Horse_01"))
					{
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_202[iParam0], "Horse_01", iLocal_54[0], 0);
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_54[1]))
				{
					if (ANIMSCENE::_0x6F1F0B17109309DA(uLocal_202[iParam0], "Horse_02"))
					{
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_202[iParam0], "Horse_02", iLocal_54[1], 0);
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_54[2]))
				{
					if (ANIMSCENE::_0x6F1F0B17109309DA(uLocal_202[iParam0], "Horse_03"))
					{
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_202[iParam0], "Horse_03", iLocal_54[2], 0);
					}
				}
			}
		}
	}
}

void func_1791(char[4] cParam0)
{
	if (!func_466(31))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_72))
	{
		if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_72, 3, 60000))
		{
			__LIB_9__::func_156(cParam0, "MAR2_FAIL_WAGON", "", 1, 0);
		}
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_72, false, false))
		{
			__LIB_9__::func_156(cParam0, "MAR2_FAIL_WAGON", "", 1, 0);
		}
		else if (ENTITY::IS_ENTITY_DEAD(iLocal_49))
		{
			__LIB_9__::func_156(cParam0, "MAR2_FAIL_WAGON", "", 1, 0);
		}
		else if (VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_72, 0) != iLocal_49)
		{
			__LIB_9__::func_156(cParam0, "MAR2_FAIL_WAGON", "", 1, 0);
		}
		else if ((((((__LIB_6__::func_864(cParam0) == iLocal_16 || __LIB_6__::func_864(cParam0) == iLocal_17) || __LIB_6__::func_864(cParam0) == iLocal_20) || __LIB_6__::func_864(cParam0) == iLocal_21) || __LIB_6__::func_864(cParam0) == iLocal_22) || __LIB_6__::func_864(cParam0) == iLocal_25) || __LIB_6__::func_864(cParam0) == iLocal_26)
		{
			if ((!__LIB_2__::func_343(uLocal_46[0], iLocal_72, 0) && ENTITY::IS_ENTITY_IN_AIR(uLocal_46[0], 1)) && PED::IS_PED_RAGDOLL(uLocal_46[0]))
			{
				__LIB_9__::func_156(cParam0, "MAR2_FAIL_WAGON", "", 1, 0);
				__LIB_6__::func_860(cParam0, 64);
			}
		}
	}
	else
	{
		__LIB_9__::func_156(cParam0, "MAR2_FAIL_WAGON", "", 1, 0);
	}
}

void func_1793()
{
	__LIB_0__::func_325(&iLocal_41);
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_72, false, false))
	{
		return;
	}
	iLocal_41 = __LIB_8__::func_778(408396114, iLocal_72, 1);
	MAP::SET_BLIP_SPRITE(iLocal_41, joaat("BLIP_AMBIENT_WAGON"), true);
}

void func_1794(char[4] cParam0)
{
	if (!__LIB_0__::func_272(Global_35, 0))
	{
		return;
	}
	if (!__LIB_0__::func_272(uLocal_46[1], 0))
	{
		return;
	}
	switch (iLocal_340)
	{
		case 0:
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_93[49], false, 0) && __LIB_8__::func_711(cParam0, "MAR2_ABH0", 0))
			{
				func_2268(1);
			}
			break;
		case 1:
			if (!__LIB_8__::func_684("MAR2_ABH0"))
			{
				__LIB_1__::func_148(&uLocal_341);
				func_2268(2);
			}
			break;
		case 2:
			if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_93[49], false, 0))
			{
				func_2268(3);
			}
			else if (iLocal_344 == 3 && !__LIB_8__::func_684("MAR2_ABH0"))
			{
				func_2268(4);
			}
			else if (__LIB_0__::func_265(&uLocal_341) > 10f && __LIB_8__::func_711(cParam0, "MAR2_ABH1", 0))
			{
				iLocal_344++;
				__LIB_1__::func_148(&uLocal_341);
			}
			break;
		case 3:
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_93[49], false, 0))
			{
				__LIB_0__::func_268(&uLocal_341, 5f);
				func_2268(2);
			}
			break;
		case 4:
			break;
	}
}

void func_1795()
{
	int iVar0;
	if (!__LIB_0__::func_272(Global_35, 0))
	{
		return;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_72, false, false))
	{
		func_2269(3);
		return;
	}
	func_467(28, 0);
	func_467(29, 0);
	iVar0 = iLocal_348;
	switch (iLocal_348)
	{
		case 0:
			if (PED::IS_PED_IN_VEHICLE(Global_35, iLocal_72, false))
			{
				PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID());
				func_2269(1);
			}
			else if (AITRANSPORT::_0x660639BC60157048(Global_35, iLocal_72))
			{
				func_2269(2);
			}
			else if (AITRANSPORT::_0x619E63980BFC0096(Global_35, iLocal_72, 1))
			{
				func_2269(4);
			}
			else
			{
				func_2269(3);
			}
			break;
		case 1:
			if (!PED::IS_PED_IN_VEHICLE(Global_35, iLocal_72, false))
			{
				func_2269(3);
			}
			else if (AITRANSPORT::_0x660639BC60157048(Global_35, iLocal_72))
			{
				func_2269(2);
			}
			break;
		case 2:
			if (!PED::IS_PED_IN_VEHICLE(Global_35, iLocal_72, false) && !AITRANSPORT::_0x660639BC60157048(Global_35, iLocal_72))
			{
				func_2269(3);
			}
			else if (!AITRANSPORT::_0x660639BC60157048(Global_35, iLocal_72))
			{
				PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID());
				func_2269(1);
			}
			break;
		case 3:
			if (PED::IS_PED_IN_VEHICLE(Global_35, iLocal_72, false))
			{
				PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID());
				func_2269(1);
			}
			else if (AITRANSPORT::_0x619E63980BFC0096(Global_35, iLocal_72, 1))
			{
				func_2269(4);
			}
			break;
		case 4:
			if (PED::IS_PED_IN_VEHICLE(Global_35, iLocal_72, false) && !AITRANSPORT::_0x619E63980BFC0096(Global_35, iLocal_72, 1))
			{
				PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID());
				func_2269(1);
			}
			else if (!AITRANSPORT::_0x619E63980BFC0096(Global_35, iLocal_72, 1))
			{
				func_2269(3);
			}
			break;
	}
	if (iVar0 != iLocal_348)
	{
		if (iLocal_348 == 1 && iVar0 != 0)
		{
			func_467(29, 1);
		}
		else if (iLocal_348 == 3 && iVar0 != 0)
		{
			func_467(28, 1);
		}
	}
}

void func_1796()
{
	if (!__LIB_0__::func_272(uLocal_46[0], 0))
	{
		return;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_72, false, false))
	{
		return;
	}
	switch (iLocal_349)
	{
		case 0:
			if (ENTITY::GET_ENTITY_SPEED(iLocal_72) < 0.1f)
			{
				if (!__LIB_0__::func_75(&uLocal_350))
				{
					__LIB_1__::func_148(&uLocal_350);
				}
			}
			else
			{
				__LIB_0__::func_37(&uLocal_350);
			}
			if (!PED::IS_PED_IN_VEHICLE(uLocal_46[0], iLocal_72, false))
			{
				__LIB_0__::func_37(&uLocal_350);
				func_2270(2);
			}
			else if (!func_1347())
			{
				__LIB_0__::func_37(&uLocal_350);
				func_2270(3);
			}
			else if (__LIB_0__::func_264(&uLocal_350) > 10f)
			{
				__LIB_0__::func_37(&uLocal_350);
				func_2270(1);
			}
			break;
		case 1:
			if (!PED::IS_PED_IN_VEHICLE(uLocal_46[0], iLocal_72, false))
			{
				func_2270(2);
			}
			else if (!func_1347())
			{
				func_2270(3);
			}
			else if (ENTITY::GET_ENTITY_SPEED(iLocal_72) > 0.1f)
			{
				func_2270(0);
			}
			break;
		case 2:
			if (PED::IS_PED_IN_VEHICLE(uLocal_46[0], iLocal_72, false))
			{
				func_2270(0);
			}
			break;
		case 3:
			if (!__LIB_0__::func_75(&uLocal_353))
			{
				__LIB_1__::func_148(&uLocal_353);
			}
			if (!PED::IS_PED_IN_VEHICLE(uLocal_46[0], iLocal_72, false))
			{
				__LIB_0__::func_37(&uLocal_353);
				func_2270(2);
			}
			else if (func_1347())
			{
				__LIB_0__::func_37(&uLocal_353);
				func_2270(0);
			}
			else if (__LIB_0__::func_665(uLocal_46[0], Global_35, 1, 1) > 10f)
			{
				__LIB_0__::func_37(&uLocal_353);
				func_2270(4);
			}
			else if (PED::IS_PED_IN_COMBAT(Global_35, 0))
			{
				__LIB_0__::func_37(&uLocal_353);
				func_2270(6);
			}
			else if (__LIB_0__::func_264(&uLocal_350) > 10f && !ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(uLocal_46[0], Global_35, 17))
			{
				__LIB_0__::func_37(&uLocal_353);
				func_2270(5);
			}
			break;
		case 4:
			if (!PED::IS_PED_IN_VEHICLE(uLocal_46[0], iLocal_72, false))
			{
				func_2270(2);
			}
			else if (PED::IS_PED_IN_COMBAT(Global_35, 0))
			{
				__LIB_0__::func_37(&uLocal_353);
				func_2270(6);
			}
			else if (func_1347())
			{
				func_2270(0);
			}
			break;
		case 5:
			if (!PED::IS_PED_IN_VEHICLE(uLocal_46[0], iLocal_72, false))
			{
				func_2270(2);
			}
			else if (PED::IS_PED_IN_COMBAT(Global_35, 0))
			{
				__LIB_0__::func_37(&uLocal_353);
				func_2270(6);
			}
			else if (func_1347())
			{
				func_2270(0);
			}
			break;
		case 6:
			if (!PED::IS_PED_IN_VEHICLE(uLocal_46[0], iLocal_72, false))
			{
				func_2270(2);
			}
			else if (func_1347())
			{
				func_2270(0);
			}
			break;
	}
}

void func_1797(char[4] cParam0)
{
	bool bVar0;
	if (!__LIB_0__::func_272(Global_35, 0))
	{
		return;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_72, false, false))
	{
		return;
	}
	bVar0 = __LIB_6__::func_864(cParam0) <= iLocal_19;
	if (((bVar0 && PED::IS_PED_IN_VEHICLE(Global_35, iLocal_72, false)) && PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID())) && __LIB_8__::func_711(cParam0, "MAR2_KNOC", 0))
	{
		PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID());
	}
}

bool func_1798()
{
	return func_466(28);
}

bool func_1800()
{
	return func_466(29);
}

void func_1807(int iParam0)
{
	if (iLocal_1267 != iParam0)
	{
		iLocal_1267 = iParam0;
	}
}

bool func_1808()
{
	if (iLocal_1286 < 3)
	{
		return false;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_72, false, false))
	{
		return false;
	}
	if (ENTITY::GET_ENTITY_SPEED(iLocal_72) >= 1f)
	{
		return false;
	}
	if (PATHFIND::IS_POINT_ON_ROAD(ENTITY::GET_ENTITY_COORDS(iLocal_72, false, false), iLocal_72))
	{
		return false;
	}
	return true;
}

void func_1809(int iParam0)
{
	iLocal_1284 = iParam0;
	iLocal_1285 = func_2274(iLocal_1284);
}

var func_1810(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script@cme@MAR2_CME_01_SIGNAL_srl";
		case 1:
			return "script@cme@MAR2_CME_02_WIDESHOT1_srl";
		case 2:
			return "script@cme@MAR2_CME_04_ARRAVING_srl";
		case 3:
			return "script@cme@MAR2_CME_06_LEAVING_ROUTE2_srl";
		case 4:
			return "script@cme@MAR2_CME_07_WIDESHOT1_ROUTE2_srl";
		case 5:
			return "script@cme@MAR2_CME_08_ARRAVING2_ROUTE2_srl";
		default:
			break;
	}
	return __LIB_9__::func_230();
}

bool func_1811()
{
	if (iLocal_1286 < 3)
	{
		return false;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_72, false, false))
	{
		return false;
	}
	if (__LIB_8__::func_803(&uLocal_249, 6f))
	{
		return true;
	}
	if (ENTITY::GET_ENTITY_SPEED(iLocal_72) >= 1f)
	{
		return true;
	}
	return false;
}

int func_1812(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1971699576;
		case 1:
			return 899691275;
		case 2:
			return -70406359;
		case 3:
			return 514691021;
		case 4:
			return -1492333946;
		case 5:
			return 1989773306;
		default:
			break;
	}
	return 0;
}

Vector3 func_1813(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -2303.44f, -344.661f, 157.258f;
		case 1:
			return -2272.36f, -461.096f, 171.237f;
		case 2:
			return -1915.98f, -346.111f, 186.464f;
		case 3:
			return -2310.18f, 648.51f, 123.204f;
		case 4:
			return -2273.99f, 593.934f, 138.734f;
		case 5:
			return -1822.97f, -283.097f, 185.717f;
		default:
			break;
	}
	return __LIB_1__::func_977();
}

var func_1814(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "01_SIGNAL";
		case 1:
			return "02_WIDESHOT1";
		case 2:
			return "04_ARRAVING";
		case 3:
			return "06_LEAVING_ROUTE2";
		case 4:
			return "07_WIDESHOT1_ROUTE2";
		case 5:
			return "08_ARRAVING2_ROUTE2";
		default:
			break;
	}
	return __LIB_9__::func_230();
}

struct<4> func_1815(int iParam0)
{
	struct<4> Var0;
	switch (iParam0)
	{
		case 0:
			Var0 = { func_1298(1, 7) };
			Var0.f_3 = func_1321(1, 7);
			break;
		case 1:
			Var0 = { func_1298(1, 9) };
			Var0.f_3 = func_1321(1, 9);
			break;
		case 2:
			Var0 = { func_1298(1, 11) };
			Var0.f_3 = func_1321(1, 11);
			break;
		case 3:
			Var0 = { -2364.076f, 522.16f, 121.2626f };
			Var0.f_3 = 252.3687f;
			break;
		case 4:
			Var0 = { -2129.031f, 470.9592f, 116.975f };
			Var0.f_3 = 267.3658f;
			break;
		case 5:
			Var0 = { -1794.48f, -249.3253f, 178.5527f };
			Var0.f_3 = 112.1009f;
			break;
	}
	return Var0;
}

bool func_1816(int iParam0, int iParam1)
{
	int iVar0;
	char* sVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	vector3 vVar8;
	iVar0 = __LIB_1__::func_871(&uLocal_249);
	sVar1 = func_1311();
	uVar2 = func_1814(iParam0);
	iVar3 = CAM::_0xEA113BF9B0C0C5D7(sVar1, uVar2, 5);
	iVar4 = CAM::_0x465F04F68AD38197(sVar1, uVar2, 5);
	iVar5 = (iVar3 - iVar0);
	iVar6 = (iVar4 - iVar0);
	iVar7 = func_1812(iParam1);
	vVar8 = { func_1813(iParam1) };
	return AUDIO::_0xFFE9C53DEEA3DB0B(iVar5, iVar7, vVar8, STREAMING::IS_SRL_LOADED(), iVar6);
}

void func_1817(int iParam0)
{
	if (iLocal_1286 != iParam0)
	{
		iLocal_1286 = iParam0;
	}
}

bool func_1818(bool bParam0)
{
	if (!bParam0)
	{
		return (iLocal_280 >= 5 && iLocal_280 <= 14);
	}
	return (iLocal_280 >= 8 && iLocal_280 <= 13);
}

bool func_1819()
{
	return iLocal_280 == 15;
}

void func_1820(char[4] cParam0, int iParam1)
{
	int iVar0;
	struct<4> Var1;
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_75[iParam1]))
	{
		if (iParam1 == 0)
		{
			iVar0 = joaat("P_CS_POTATOSLICE01X");
			Var1 = { func_228(0, 6) };
		}
		else if (iParam1 == 1)
		{
			iVar0 = joaat("P_KNIFE01X");
			Var1 = { func_228(0, 7) };
		}
		else if (iParam1 == 2)
		{
			iVar0 = joaat("P_MUGCOFFEE01X");
			Var1 = { func_228(0, 8) };
		}
		else if (iParam1 == 3)
		{
			iVar0 = joaat("P_PAN01X");
			Var1 = { func_228(0, 9) };
		}
		else if (iParam1 == 4)
		{
			iVar0 = joaat("P_PLATE01X");
			Var1 = { func_228(0, 10) };
		}
		else if (iParam1 == 5)
		{
			iVar0 = joaat("P_SPOONMID01X");
			Var1 = { func_228(0, 11) };
		}
		else if (iParam1 == 6)
		{
			iVar0 = joaat("P_CS_BOOKHARDCV08X");
			Var1 = { func_228(0, 12) };
		}
		else if (iParam1 == 7)
		{
			iVar0 = joaat("P_BOILER01X");
			Var1 = { -2594.61f, 456.53f, 147.05f };
			Var1.f_3 = -115.47f;
		}
		else if (iParam1 == 8)
		{
			iVar0 = joaat("P_AMB_CLIPBOARD_01");
			Var1 = { func_228(3, 4) };
		}
		else if (iParam1 == 9)
		{
			iVar0 = joaat("P_CS_LEDGER01X");
			Var1 = { func_228(3, 5) };
		}
		else if (iParam1 == 10)
		{
			iVar0 = joaat("P_LETTERBUNDLE_01X");
			Var1 = { func_228(3, 6) };
		}
		else if (iParam1 == 11)
		{
			iVar0 = joaat("P_LETTERENVELOPE_CS01X");
			Var1 = { func_228(3, 7) };
		}
		else if (iParam1 == 12)
		{
			iVar0 = joaat("P_PACKAGE08X");
			Var1 = { func_228(3, 8) };
		}
		else if (iParam1 == 13)
		{
			iVar0 = joaat("P_PACKAGE08X");
			Var1 = { func_228(3, 9) };
		}
		else if (iParam1 == 14)
		{
			iVar0 = joaat("P_PEN01X");
			Var1 = { func_228(3, 10) };
		}
		else if (iParam1 == 15)
		{
			iVar0 = joaat("P_CRATE03X");
			Var1 = { func_228(3, 11) };
		}
		else if (iParam1 == 16)
		{
			iVar0 = joaat("P_CS_SACKLARGE01X");
			Var1 = { func_228(3, 12) };
		}
		iLocal_75[iParam1] = OBJECT::CREATE_OBJECT(iVar0, Var1, true, true, false, false, true);
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_75[iParam1]))
		{
			ENTITY::SET_ENTITY_COORDS(iLocal_75[iParam1], Var1, true, false, true, true);
			ENTITY::SET_ENTITY_ROTATION(iLocal_75[iParam1], 0f, 0f, Var1.f_3, 2, true);
		}
	}
}

bool func_1823()
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 2)
	{
		iVar0 = (iVar0 && func_2275(iVar1));
		iVar1++;
	}
	return iVar0;
}

void func_1824(int iParam0)
{
	if (iLocal_1287 != iParam0)
	{
		iLocal_1287 = iParam0;
	}
}

bool func_1825()
{
	return (((ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(iLocal_62[0]) || ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(iLocal_62[1])) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_35, iLocal_62[0])) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_35, iLocal_62[1]));
}

int func_1826(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = PED::CREATE_PED_INSIDE_VEHICLE(iParam0, iParam1, iParam2, bParam3, bParam4, bParam9);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	__LIB_1__::func_412(iVar0, iParam1, 0, bParam5, 0, bParam6, bParam7, bParam8);
	return iVar0;
}

void func_1827(int iParam0)
{
	if (iLocal_339 != iParam0)
	{
		iLocal_339 = iParam0;
	}
}

int func_1828(int iParam0)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uLocal_202[iParam0]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uLocal_202[iParam0], false))
	{
		return 1;
	}
	if (iParam0 == 9)
	{
		if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uLocal_202[iParam0]))
		{
			return 0;
		}
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uLocal_202[iParam0], true, false) || !ANIMSCENE::_0x23E33CB9F4A3F547(uLocal_202[iParam0], "pl_leadin"))
		{
			return 0;
		}
		if (!__LIB_0__::func_272(iLocal_58[0], 0))
		{
			return 0;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_75[8]))
		{
			return 0;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_75[9]))
		{
			return 0;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_75[14]))
		{
			return 0;
		}
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_202[iParam0], "JOHN", Global_35, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_202[iParam0], "U_M_M_STRFREIGHTSTATIONOWNER_01", iLocal_58[0], 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_202[iParam0], "P_AMB_CLIPBOARD_01", iLocal_75[8], 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_202[iParam0], "P_CS_LEDGER01X", iLocal_75[9], 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_202[iParam0], "P_PEN01X", iLocal_75[14], 0);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uLocal_202[iParam0], "pl_leadin", true);
		ANIMSCENE::START_ANIM_SCENE(uLocal_202[iParam0]);
		__LIB_4__::func_932(65, 0);
		__LIB_3__::func_820(65, 1);
		return 1;
	}
	else if (iParam0 == 10)
	{
		if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uLocal_202[iParam0]))
		{
			return 0;
		}
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uLocal_202[iParam0], true, false) || !ANIMSCENE::_0x23E33CB9F4A3F547(uLocal_202[iParam0], "pl_loop"))
		{
			return 0;
		}
		if (!__LIB_0__::func_272(iLocal_50[0], 0))
		{
			return 0;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_75[10]))
		{
			return 0;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_75[11]))
		{
			return 0;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_75[12]))
		{
			return 0;
		}
		WEAPON::SET_CURRENT_PED_WEAPON(iLocal_50[0], joaat("WEAPON_UNARMED"), true, 0, false, false);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_202[iParam0], "G_M_M_UNICRIMINALS_01", iLocal_50[0], 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_202[iParam0], "P_LETTERBUNDLE_01X", iLocal_75[10], 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_202[iParam0], "P_LETTERENVELOPE_CS01X", iLocal_75[11], 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_202[iParam0], "P_PACKAGE08X", iLocal_75[12], 0);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uLocal_202[iParam0], "pl_loop", true);
		ANIMSCENE::START_ANIM_SCENE(uLocal_202[iParam0]);
		return 1;
	}
	return 0;
}

bool func_1831()
{
	if (!__LIB_0__::func_272(Global_35, 0))
	{
		return true;
	}
	if (PED::IS_PED_IN_COMBAT(Global_35, 0))
	{
		return true;
	}
	if (PED::_0x0E99E3BF11BB6367(Global_35))
	{
		return true;
	}
	if (PED::IS_PED_RUNNING_RAGDOLL_TASK(Global_35))
	{
		return true;
	}
	return false;
}

void func_1835(int iParam0)
{
	if (iLocal_1288 != iParam0)
	{
		iLocal_1288 = iParam0;
	}
}

void func_1836(char[4] cParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bVar0 = __LIB_0__::func_272(iLocal_58[0], 0);
	bVar1 = (bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_93[41], true, 0));
	bVar2 = (bVar1 && __LIB_0__::func_665(Global_35, iLocal_58[0], 1, 1) < 4f);
	switch (iLocal_1329)
	{
		case 0:
			__LIB_1__::func_148(&uLocal_1330);
			func_2277();
			break;
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			if (!bVar2)
			{
				__LIB_1__::func_148(&uLocal_1330);
			}
			else if (__LIB_0__::func_265(&uLocal_1330) > 10f)
			{
				if (iLocal_1329 <= 3)
				{
					if (__LIB_8__::func_711(cParam0, "MAR2_CLERK_FORM", 0))
					{
						__LIB_1__::func_148(&uLocal_1330);
						func_2277();
					}
				}
				else if (__LIB_8__::func_711(cParam0, "MAR2_PLY_NOTALK", 0))
				{
					__LIB_1__::func_148(&uLocal_1330);
					func_2277();
				}
			}
			break;
		case 6:
			break;
	}
}

bool func_1837()
{
	int iVar0;
	switch (iLocal_1289)
	{
		case 0:
			__LIB_2__::func_602(&(Local_1311[0 /*17*/]), "MAR2_COL_MAI", " ", joaat("INPUT_INTERACT_LOCKON_ROB"), 0, 0, 4, 1, 0);
			func_2279(1);
			break;
		case 1:
			iVar0 = func_2281(&(iLocal_58[0]), &iLocal_1290, 10f, &Local_1311, 0, 3, 0, 0, __LIB_2__::func_340(2, 2048, 0), iLocal_93[42], 0, 2, -1082130432 /* Float: -1f */);
			if (iVar0 != -1)
			{
				__LIB_2__::func_624(&Local_1311, 1, 1, 1, 0);
				__LIB_2__::func_344(&(iLocal_58[0]));
				func_2279(2);
			}
			break;
		case 2:
			break;
	}
	return iLocal_1289 == 2;
}

void func_1838(char[4] cParam0, char* sParam1)
{
	char cVar0[32];
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(cParam0->f_7375.f_804))
	{
		return;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(cParam0->f_7375.f_804, true, false))
	{
		return;
	}
	StringCopy(&cVar0, sParam1, 32);
	func_1492(cVar0, &(cParam0->f_7375), cParam0);
}

bool func_1839(bool bParam0)
{
	if (PROPSET::_DOES_PROPSET_EXIST(iLocal_166))
	{
		PROPSET::_SET_PROPSET_VISIBLE(iLocal_166, bParam0);
		return true;
	}
	if (ENTITY::IS_ENTITY_DEAD(iLocal_72))
	{
		return false;
	}
	PROPSET::_0xD80FAF919A2E56EA(iLocal_72, joaat("PG_MISSION_MARSTON2_POSTOFFICE01X"));
	if (PROPSET::_DOES_VEHICLE_HAVE_ANY_PROPSET(iLocal_72))
	{
		iLocal_166 = PROPSET::_GET_VEHICLE_PROPSET(iLocal_72);
		if (PROPSET::_DOES_PROPSET_EXIST(iLocal_166))
		{
			PROPSET::_SET_PROPSET_VISIBLE(iLocal_166, bParam0);
			return true;
		}
	}
	return false;
}

void func_1841(char[4] cParam0)
{
	func_2284(iLocal_1337 > 0);
	switch (iLocal_1337)
	{
		case 0:
			if (func_2285())
			{
				func_2286(1);
			}
			break;
		case 1:
			if (!func_2285())
			{
				func_1349();
				func_2286(0);
			}
			else if (func_2287())
			{
				if (!func_466(25) && iLocal_1336 == 4)
				{
					iLocal_1341 = 0;
					func_467(25, 1);
				}
				func_2288(1);
				func_2286(2);
			}
			else if (func_2289())
			{
				if (!func_466(26) && iLocal_1336 == 0)
				{
					iLocal_1341 = 0;
					func_467(26, 1);
				}
				func_2288(1);
				func_2286(4);
			}
			break;
		case 2:
			if (!func_466(21))
			{
				if ((!__LIB_6__::func_904() && !__LIB_5__::func_463()) && __LIB_8__::func_711(cParam0, "MAR2_SPEED_IU", 0))
				{
					func_467(21, 1);
					iLocal_1341 = 1;
					func_2286(3);
				}
			}
			else if (!func_466(22) && iLocal_1341 == 2)
			{
				if ((!__LIB_6__::func_904() && !__LIB_5__::func_463()) && __LIB_8__::func_711(cParam0, "MAR2_TOO_SLOW", 0))
				{
					func_467(22, 1);
					iLocal_1341 = 1;
					func_2286(3);
				}
			}
			else if ((!__LIB_6__::func_904() && !__LIB_5__::func_463()) && __LIB_8__::func_711(cParam0, "MAR2_SPEED_U", 0))
			{
				iLocal_1341 = 1;
				func_2286(3);
			}
			break;
		case 3:
			if (!func_2285())
			{
				func_1349();
				func_2286(0);
			}
			else if ((!__LIB_8__::func_684("MAR2_SPEED_IU") && !__LIB_8__::func_684("MAR2_TOO_SLOW")) && !__LIB_8__::func_684("MAR2_SPEED_U"))
			{
				if (func_2290())
				{
					func_2291();
					func_2288(0);
					func_2286(1);
				}
				else
				{
					func_2286(6);
				}
			}
			break;
		case 4:
			if (!func_466(24))
			{
				if ((!__LIB_6__::func_904() && !__LIB_5__::func_463()) && __LIB_8__::func_711(cParam0, "MAR2_SPEED_ID", 0))
				{
					func_467(24, 1);
					iLocal_1341 = 2;
					func_2286(5);
				}
			}
			else if (!func_466(23) && iLocal_1341 == 1)
			{
				if ((!__LIB_6__::func_904() && !__LIB_5__::func_463()) && __LIB_8__::func_711(cParam0, "MAR2_TOO_FAST", 0))
				{
					func_467(23, 1);
					iLocal_1341 = 2;
					func_2286(5);
				}
			}
			else if ((!__LIB_6__::func_904() && !__LIB_5__::func_463()) && __LIB_8__::func_711(cParam0, "MAR2_SPEED_D", 0))
			{
				iLocal_1341 = 2;
				func_2286(5);
			}
			break;
		case 5:
			if (!func_2285())
			{
				func_1349();
				func_2286(0);
			}
			else if ((!__LIB_8__::func_684("MAR2_SPEED_ID") && !__LIB_8__::func_684("MAR2_TOO_FAST")) && !__LIB_8__::func_684("MAR2_SPEED_D"))
			{
				if (func_2292())
				{
					func_2293();
				}
				func_2288(0);
				func_2286(1);
			}
			break;
		case 6:
			if ((!__LIB_6__::func_904() && !__LIB_5__::func_463()) && __LIB_8__::func_711(cParam0, "MAR2_JACK_FAST", 0))
			{
				func_2286(7);
			}
			break;
		case 7:
			if ((!__LIB_6__::func_904() && !__LIB_5__::func_463()) && __LIB_8__::func_711(cParam0, "MAR2_TURN_SLOW", 0))
			{
				func_2286(8);
			}
			break;
		case 8:
			if (!func_2285())
			{
				func_1349();
				func_2286(0);
			}
			else if (!__LIB_8__::func_684("MAR2_TURN_SLOW"))
			{
				func_2288(0);
				func_2286(1);
			}
			break;
	}
}

void func_1842(char[4] cParam0)
{
	switch (iLocal_336)
	{
		case 0:
			if (func_2294())
			{
				if ((!__LIB_6__::func_904() && !__LIB_5__::func_463()) && __LIB_8__::func_711(cParam0, "MAR2_LOKBAK0", 0))
				{
					__LIB_1__::func_148(&uLocal_252);
					func_2295(1);
				}
			}
			break;
		case 1:
			if (__LIB_0__::func_265(&uLocal_252) > 10f)
			{
				__LIB_1__::func_148(&uLocal_252);
				func_2295(2);
			}
			break;
		case 2:
			if (func_2294())
			{
				if ((!__LIB_6__::func_904() && !__LIB_5__::func_463()) && __LIB_8__::func_711(cParam0, "MAR2_LOKBAK1", 0))
				{
					__LIB_1__::func_148(&uLocal_252);
					func_2295(3);
				}
			}
			break;
		case 3:
			if (__LIB_0__::func_265(&uLocal_252) > 10f)
			{
				__LIB_1__::func_148(&uLocal_252);
				func_2295(4);
			}
			break;
		case 4:
			if (func_2294())
			{
				if ((!__LIB_6__::func_904() && !__LIB_5__::func_463()) && __LIB_8__::func_711(cParam0, "MAR2_LOKBAK2", 0))
				{
					__LIB_1__::func_148(&uLocal_252);
					func_2295(5);
				}
			}
			break;
		case 5:
			if (__LIB_0__::func_265(&uLocal_252) > 10f)
			{
				__LIB_1__::func_148(&uLocal_252);
				func_2295(6);
			}
			break;
		case 6:
			break;
	}
}

void func_1843(int iParam0)
{
	float fVar0;
	if (!__LIB_0__::func_272(uLocal_46[0], 0))
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			fVar0 = 3f;
			break;
		case 1:
			fVar0 = 4.5f;
			break;
		case 2:
			fVar0 = 6f;
			break;
		case 3:
			fVar0 = 7.5f;
			break;
		case 4:
			fVar0 = 9f;
			break;
	}
	TASK::SET_DRIVE_TASK_CRUISE_SPEED(uLocal_46[0], fVar0);
	iLocal_1336 = iParam0;
}

void func_1844()
{
	Local_283[0 /*25*/].f_21 = 4;
	Local_283[0 /*25*/].f_17 = 4;
	Local_283[0 /*25*/].f_18 = 1;
	Local_283[0 /*25*/].f_23 = 2;
	Local_283[0 /*25*/].f_24 = 2;
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_50[0]))
	{
		Local_283[0 /*25*/].f_3 = iLocal_50[0];
	}
	Local_283[1 /*25*/].f_21 = 4;
	Local_283[1 /*25*/].f_17 = 4;
	Local_283[1 /*25*/].f_18 = 1;
	Local_283[1 /*25*/].f_23 = 2;
	Local_283[1 /*25*/].f_24 = 2;
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		Local_283[1 /*25*/].f_3 = Global_35;
	}
}

void func_1845()
{
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		_NAMESPACE29::_0x66F9EB44342BB4C5(Global_35, &(Local_283[0 /*25*/]));
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_50[1]))
	{
		_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_50[1], &(Local_283[1 /*25*/]));
	}
}

bool func_1847()
{
	struct<4> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_65))
	{
		return true;
	}
	Var0 = { func_228(4, 10) };
	iLocal_65 = __LIB_1__::func_545(joaat("S_M_O_CKTWORKER_01"), Var0, Var0.f_3, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_65))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_65, true);
		TASK::TASK_STAND_STILL(iLocal_65, -1);
		PED::_0x49DADFC4CD808B0A(iLocal_65, 1, -1);
		return true;
	}
	return false;
}

void func_1848(int iParam0)
{
	if (iLocal_269 != iParam0)
	{
		iLocal_269 = iParam0;
	}
}

bool func_1851()
{
	struct<4> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_66))
	{
		return true;
	}
	Var0 = { func_228(6, 9) };
	iLocal_66 = __LIB_1__::func_545(joaat("S_M_O_CKTWORKER_01"), Var0, Var0.f_3, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_66))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_66, true);
		TASK::TASK_STAND_STILL(iLocal_66, -1);
		PED::_0x49DADFC4CD808B0A(iLocal_66, 1, -1);
		return true;
	}
	return false;
}

void func_1852(int iParam0)
{
	if (iLocal_1334 != iParam0)
	{
		iLocal_1334 = iParam0;
	}
}

bool func_1853()
{
	struct<4> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_67))
	{
		return true;
	}
	Var0 = { func_228(5, 12) };
	iLocal_67 = __LIB_1__::func_545(joaat("A_C_DOGBLUETICKCOONHOUND_01"), Var0, Var0.f_3, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_67))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_67, true);
		TASK::TASK_STAND_STILL(iLocal_67, -1);
		return true;
	}
	return false;
}

void func_1854(int iParam0)
{
	if (iLocal_1335 != iParam0)
	{
		iLocal_1335 = iParam0;
	}
}

void func_1856(int iParam0)
{
	if (iLocal_1340 != iParam0)
	{
		iLocal_1340 = iParam0;
	}
}

void func_1859()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_68) || !__LIB_0__::func_86(vLocal_69))
	{
		TASK::TASK_CLEAR_LOOK_AT(Global_35);
	}
	iLocal_68 = 0;
	vLocal_69 = { __LIB_1__::func_977() };
}

void func_1860()
{
	int iVar0;
	if (!__LIB_1__::func_502(&(Local_1381[0 /*17*/])))
	{
		__LIB_2__::func_602(&(Local_1381[0 /*17*/]), "INTERACT_DEFUSE", " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
		__LIB_3__::func_515(&(Local_1381[0 /*17*/]), 0, 0);
	}
	if (!__LIB_1__::func_502(&(Local_1381[1 /*17*/])))
	{
		__LIB_2__::func_602(&(Local_1381[1 /*17*/]), "INTERACT_INSULT", " ", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
		__LIB_3__::func_515(&(Local_1381[1 /*17*/]), 0, 0);
	}
	iVar0 = func_2281(&(iLocal_50[0]), &(Local_1359[0 /*21*/]), 10f, &Local_1381, 0, 3, 0, 0, 1, 0, 0, 2, -1082130432 /* Float: -1f */);
	iLocal_1416 = iVar0;
}

void func_1861(int iParam0)
{
	if (iLocal_1349 != iParam0)
	{
		iLocal_1349 = iParam0;
	}
}

void func_1862(bool bParam0)
{
	__LIB_3__::func_515(&(Local_1381[0 /*17*/]), bParam0, 0);
	__LIB_3__::func_515(&(Local_1381[1 /*17*/]), bParam0, 0);
	func_2299();
}

bool func_1863()
{
	return iLocal_1416 == 0;
}

bool func_1864()
{
	return iLocal_1416 == 1;
}

bool func_1866()
{
	return iLocal_1350 >= 4;
}

void func_1867()
{
	if (MAP::DOES_BLIP_EXIST(iLocal_41))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iLocal_50[0]))
	{
		return;
	}
	iLocal_41 = MAP::_BLIP_ADD_FOR_ENTITY(-89429847, iLocal_50[0]);
	MAP::_BLIP_SET_MODIFIER(iLocal_41, joaat("BLIP_MODIFIER_FRIENDLY_OBJECTIVE"));
	MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_41, "MAR2_B_PL");
}

void func_1868()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bVar0 = __LIB_17__::func_573(&uLocal_1356, 20f);
	bVar1 = false;
	if (bVar0 && !func_466(27))
	{
		bVar1 = true;
	}
	else if (!bVar0 && func_466(27))
	{
		bVar1 = true;
	}
	if (bVar1)
	{
		__LIB_2__::func_279(Global_35, bVar0);
		if (bVar0)
		{
			iVar2 = 100;
		}
		else
		{
			iVar2 = 35;
		}
		iVar3 = 0;
		while (iVar3 < 3)
		{
			if (__LIB_0__::func_272(iLocal_50[iVar3], 0))
			{
				PED::SET_PED_ACCURACY(iLocal_50[iVar3], iVar2);
			}
			iVar3++;
		}
		func_467(27, bVar0);
	}
}

void func_1869(int iParam0)
{
	if (iLocal_1350 != iParam0)
	{
		iLocal_1350 = iParam0;
	}
}

bool func_1870()
{
	var uVar0;
	if (!__LIB_0__::func_272(Global_35, 0))
	{
		return false;
	}
	if (!__LIB_0__::func_272(iLocal_50[0], 0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_50[0], Global_35, 1, 1))
	{
		return true;
	}
	if (!__LIB_0__::func_272(iLocal_50[1], 0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_50[1], Global_35, 1, 1))
	{
		return true;
	}
	if (!__LIB_0__::func_272(iLocal_50[2], 0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_50[2], Global_35, 1, 1))
	{
		return true;
	}
	if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &uVar0, false, false))
	{
		return false;
	}
	if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &uVar0, true, false))
	{
		return true;
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
	{
		return true;
	}
	if (PED::IS_PED_SHOOTING(Global_35))
	{
		return true;
	}
	return false;
}

bool func_1871()
{
	return func_2301() < 3.5f;
}

bool func_1872()
{
	return func_2301() > 20f;
}

bool func_1873()
{
	if (!__LIB_0__::func_272(Global_35, 0))
	{
		return false;
	}
	if (!__LIB_0__::func_272(iLocal_50[0], 0))
	{
		return false;
	}
	if (__LIB_0__::func_665(Global_35, iLocal_50[0], 0, 0) > 20f)
	{
		return false;
	}
	if (__LIB_0__::func_264(&uLocal_1417) < 20f)
	{
		return false;
	}
	return true;
}

bool func_1874()
{
	if (func_1362())
	{
		return true;
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uLocal_202[7]))
	{
		return true;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("FIREWEAPON")))
	{
		return true;
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(uLocal_202[7]))
	{
		return true;
	}
	if (ANIMSCENE::_0x005E6F28DD7ED58D(uLocal_202[7], "Posse_Leader"))
	{
		return true;
	}
	return false;
}

bool func_1875()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!__LIB_0__::func_255(iLocal_50[iVar0], 0) && !PED::_IS_PED_HOGTIED(iLocal_50[iVar0]))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_1877(int iParam0, var uParam1, bool bParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (!MAP::DOES_BLIP_EXIST(*uParam1))
		{
			*uParam1 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), iParam0);
			if (bParam2)
			{
				MAP::_BLIP_SET_MODIFIER(*uParam1, joaat("BLIP_MODIFIER_ENEMY_DISAPPEARING"));
			}
		}
	}
}

void func_1879()
{
	func_467(41, 1);
}

bool func_1880()
{
	return func_466(44);
}

void func_1887()
{
	__LIB_1__::func_148(&uLocal_363);
	fLocal_366 = (15f + MISC::GET_RANDOM_FLOAT_IN_RANGE(-2f, 5f));
}

bool func_1889()
{
	return __LIB_0__::func_264(&uLocal_363) >= fLocal_366;
}

void func_1890(int iParam0)
{
	if (iLocal_1428 != iParam0)
	{
		iLocal_1428 = iParam0;
	}
}

void func_1891(int iParam0)
{
	if (iLocal_1431 != iParam0)
	{
		iLocal_1431 = iParam0;
	}
}

void func_1897(char[4] cParam0, int iParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(uLocal_46[iParam1]))
	{
		return;
	}
	if (iParam1 == 0)
	{
		__LIB_9__::func_141(cParam0, uLocal_46[iParam1], 256);
		PED::_0xFD6943B6DF77E449(uLocal_46[iParam1], false);
		if (__LIB_6__::func_864(cParam0) == iLocal_16 || __LIB_6__::func_864(cParam0) >= iLocal_24)
		{
			__LIB_5__::func_509(uLocal_46[iParam1], 0, 1);
		}
		ENTITY::FREEZE_ENTITY_POSITION(uLocal_46[iParam1], false);
	}
	else if (iParam1 == 1)
	{
		__LIB_9__::func_147(cParam0, uLocal_46[iParam1], 128);
		ENTITY::FREEZE_ENTITY_POSITION(uLocal_46[iParam1], false);
		if (PED::_GET_PED_META_OUTFIT_HASH(uLocal_46[iParam1]) != joaat("META_OUTFIT_WARM_WEATHER"))
		{
			PED::_SET_PED_BODY_COMPONENT(uLocal_46[iParam1], joaat("META_OUTFIT_WARM_WEATHER"));
			PED::_UPDATE_PED_VARIATION(uLocal_46[iParam1], false, true, true, true, false);
		}
	}
	if (!__LIB_8__::func_671(cParam0))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_46[iParam1], true);
	}
}

int func_1908(int iParam0, int iParam1)
{
	var uVar0;
	return func_2310(&uVar0, iParam0, iParam1);
}

struct<4> func_2030(char[4] cParam0)
{
	struct<4> Var0;
	int iVar4;
	iVar4 = __LIB_6__::func_864(cParam0);
	if (iVar4 == iLocal_16)
	{
		Var0 = { func_228(0, 5) };
	}
	else if (iVar4 == iLocal_17)
	{
		if (__LIB_10__::func_892(1))
		{
			Var0 = { func_228(1, 6) };
		}
		else
		{
			Var0 = { func_228(1, 5) };
		}
	}
	else if (iVar4 == iLocal_18)
	{
		if (__LIB_10__::func_892(2))
		{
			Var0 = { func_228(2, 5) };
		}
		else if (__LIB_10__::func_892(4))
		{
			Var0 = { func_228(2, 8) };
		}
		else
		{
			Var0 = { func_228(2, 2) };
		}
	}
	else if (iVar4 == iLocal_19 || iVar4 == iLocal_20)
	{
		Var0 = { func_228(4, 2) };
	}
	else if (iVar4 == iLocal_21)
	{
		Var0 = { func_228(5, 4) };
	}
	else if (iVar4 == iLocal_22)
	{
		Var0 = { func_228(6, 2) };
	}
	else if (iVar4 == iLocal_23)
	{
		Var0 = { func_228(7, 2) };
	}
	else if (iVar4 == iLocal_24)
	{
		Var0 = { func_228(8, 2) };
	}
	else if (iVar4 == iLocal_25)
	{
		Var0 = { -1748.516f, 313.1147f, 109.0263f };
		Var0.f_3 = 292.2147f;
	}
	else if (iVar4 == iLocal_26)
	{
		Var0 = { func_228(10, 3) };
	}
	else if (iVar4 == iLocal_27)
	{
		Var0 = { func_228(11, 3) };
	}
	return Var0;
}

bool func_2032(char[4] cParam0, int iParam1)
{
	struct<4> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_60[iParam1]))
	{
		return true;
	}
	switch (__LIB_6__::func_864(cParam0))
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 25:
			if (iParam1 == 0)
			{
				Var0 = { func_228(0, 3) };
			}
			break;
		default:
			break;
	}
	if (iParam1 == 0)
	{
		if (PERSCHAR::_0x800DF3FC913355F3(__LIB_0__::func_120(710)))
		{
			iLocal_60[iParam1] = __LIB_2__::func_965(710, 0, 0, 0, 1, 1);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_60[iParam1]))
		{
			__LIB_1__::func_940(710, 1);
			__LIB_2__::func_935(710, 0, 0, 0, 0, 0);
		}
		else
		{
			func_1355(iLocal_60[iParam1], Var0, 2, 1073741824 /* Float: 2f */);
			func_2409(&(iLocal_60[iParam1]), iParam1);
			return true;
		}
	}
	return false;
}

bool func_2034(char[4] cParam0, int iParam1)
{
	struct<4> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_58[iParam1]))
	{
		return true;
	}
	switch (__LIB_6__::func_864(cParam0))
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			if (iParam1 == 0)
			{
				Var0 = { func_228(3, 2) };
			}
			break;
		default:
			break;
	}
	if (iParam1 == 0)
	{
		iLocal_58[iParam1] = __LIB_2__::func_965(476, 0, 0, 0, 1, 1);
		if (!ENTITY::IS_ENTITY_DEAD(__LIB_1__::func_334(476)))
		{
			func_1355(iLocal_58[iParam1], Var0, 2, 1073741824 /* Float: 2f */);
			func_2410(cParam0, &(iLocal_58[iParam1]), iParam1);
			return true;
		}
	}
	return false;
}

void func_2035(var uParam0, int iParam1)
{
	int iVar0;
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		iVar0 = iParam1;
		ENTITY::_SET_ENTITY_HEALTH(*uParam0, PED::GET_PED_MAX_HEALTH(*uParam0), 0);
		switch (iVar0)
		{
			case 0:
				__LIB_0__::func_862(*uParam0, 1052664747);
				if (!WEAPON::HAS_PED_GOT_WEAPON(*uParam0, joaat("WEAPON_REVOLVER_CATTLEMAN"), 0, false))
				{
					__LIB_4__::func_7(*uParam0, joaat("WEAPON_REVOLVER_CATTLEMAN"), 50, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
				}
				break;
			case 1:
				__LIB_0__::func_862(*uParam0, -726640126);
				if (!WEAPON::HAS_PED_GOT_WEAPON(*uParam0, joaat("WEAPON_REVOLVER_CATTLEMAN"), 0, false))
				{
					__LIB_4__::func_7(*uParam0, joaat("WEAPON_REVOLVER_CATTLEMAN"), 50, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
				}
				if (!WEAPON::HAS_PED_GOT_WEAPON(*uParam0, joaat("WEAPON_RIFLE_SPRINGFIELD"), 0, false))
				{
					__LIB_4__::func_7(*uParam0, joaat("WEAPON_RIFLE_SPRINGFIELD"), 50, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_54[iParam1]))
				{
					func_1350(iLocal_50[iParam1], iLocal_54[iParam1]);
				}
				break;
			case 2:
				__LIB_0__::func_862(*uParam0, -1647875011);
				if (!WEAPON::HAS_PED_GOT_WEAPON(*uParam0, joaat("WEAPON_REVOLVER_CATTLEMAN"), 0, false))
				{
					__LIB_4__::func_7(*uParam0, joaat("WEAPON_REVOLVER_CATTLEMAN"), 50, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
				}
				if (!WEAPON::HAS_PED_GOT_WEAPON(*uParam0, joaat("WEAPON_SHOTGUN_DOUBLEBARREL"), 0, false))
				{
					__LIB_4__::func_7(*uParam0, joaat("WEAPON_SHOTGUN_DOUBLEBARREL"), 50, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_54[iParam1]))
				{
					func_1350(iLocal_50[iParam1], iLocal_54[iParam1]);
				}
				break;
		}
		PED::SET_PED_CONFIG_FLAG(*uParam0, 6, true);
		PED::SET_PED_ACCURACY(*uParam0, 35);
		ENTITY::_0x18FF3110CF47115D(*uParam0, 1, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
		iLocal_198[1]++;
	}
}

bool func_2036(char[4] cParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_54[iParam1]))
	{
		return true;
	}
	iVar0 = __LIB_6__::func_864(cParam0);
	iVar1 = 0;
	switch (iParam1)
	{
		case 0:
			iVar1 = joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
			if (iVar0 == iLocal_21)
			{
				Var2 = { func_228(5, 9) };
			}
			else if (iVar0 == iLocal_22)
			{
				Var2 = { func_228(6, 6) };
			}
			else if (iVar0 == iLocal_23)
			{
				Var2 = { func_228(7, 6) };
			}
			break;
		case 1:
			iVar1 = joaat("A_C_HORSE_MORGAN_BAY");
			if (iVar0 == iLocal_21)
			{
				Var2 = { func_228(5, 10) };
			}
			else if (iVar0 == iLocal_22)
			{
				Var2 = { func_228(6, 7) };
			}
			else if (iVar0 == iLocal_23)
			{
				Var2 = { func_228(7, 7) };
			}
			break;
		case 2:
			iVar1 = joaat("A_C_HORSE_MORGAN_PALOMINO");
			if (iVar0 == iLocal_21)
			{
				Var2 = { func_228(5, 11) };
			}
			else if (iVar0 == iLocal_22)
			{
				Var2 = { func_228(6, 8) };
			}
			else if (iVar0 == iLocal_23)
			{
				Var2 = { func_228(7, 8) };
			}
			break;
	}
	if (iVar1 == 0)
	{
		return false;
	}
	if (__LIB_0__::func_86(Var2))
	{
		return false;
	}
	iLocal_54[iParam1] = __LIB_1__::func_545(iVar1, Var2, Var2.f_3, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_54[iParam1]))
	{
		func_2413(&(iLocal_54[iParam1]), iParam1);
		return true;
	}
	return false;
}

bool func_2037(char[4] cParam0, int iParam1, int iParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, float fParam7, bool bParam8, bool bParam9)
{
	int iVar0;
	iVar0 = __LIB_6__::func_864(cParam0);
	*iParam2 = 0;
	*bParam3 = 0;
	*fParam4 = 0f;
	*bParam5 = 0;
	*bParam6 = 0;
	*fParam7 = 0f;
	*bParam8 = 0;
	*bParam9 = 0;
	switch (iParam1)
	{
		case 0:
			*iParam2 = 1535511805;
			if ((iVar0 == iLocal_16 || iVar0 == iLocal_17) || iVar0 == iLocal_27)
			{
				*bParam3 = 0;
			}
			else
			{
				*bParam3 = 1;
			}
			break;
		case 1:
			*iParam2 = -1899662469;
			if ((iVar0 == iLocal_16 || iVar0 == iLocal_17) || iVar0 == iLocal_27)
			{
				*bParam3 = 0;
			}
			else
			{
				*bParam3 = 1;
			}
			break;
		case 2:
			if (iVar0 != iLocal_19)
			{
				*bParam3 = 1;
			}
			else
			{
				*bParam3 = 0;
			}
			*iParam2 = -1400732786;
			break;
		case 3:
			*iParam2 = joaat("DOOR_STR_FRT_INT_02");
			*bParam3 = 1;
			break;
		case 4:
			*iParam2 = joaat("DOOR_STR_FRT_INT_3");
			*bParam3 = 0;
			*fParam4 = -1f;
			*bParam5 = 1;
			*bParam6 = 1;
			*bParam8 = 1;
			break;
	}
	return *iParam2 != 0;
}

bool func_2053(int iParam0, var uParam1, int iParam2)
{
	*uParam1 = -1;
	*iParam2 = -1;
	switch (iParam0)
	{
		case 52:
			*uParam1 = 53;
			*iParam2 = 59;
			break;
		case 60:
			*uParam1 = 61;
			*iParam2 = 67;
			break;
		case 68:
			*uParam1 = 69;
			*iParam2 = 70;
			break;
	}
	return (*uParam1 != -1 && *iParam2 != -1);
}

bool func_2054(int iParam0, var uParam1)
{
	*uParam1 = { 0f, 0f, 0f };
	uParam1->f_3 = { 0f, 0f, 0f };
	uParam1->f_6 = { 0f, 0f, 0f };
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -2055.031f, 46.33399f, 124.1166f };
			uParam1->f_3 = { 0f, 0f, -4.469812f };
			uParam1->f_6 = { 1622.217f, 1411.342f, 695.0812f };
			break;
		case 1:
			*uParam1 = { -1781.072f, -381.0591f, 157.6178f };
			uParam1->f_3 = { 0f, 0f, 48.50518f };
			uParam1->f_6 = { 3.3075f, 44.85403f, 20f };
			break;
		case 2:
			*uParam1 = { -1797.528f, -348.4434f, 161.9649f };
			uParam1->f_3 = { 0f, 0f, -173.0916f };
			uParam1->f_6 = { 3.3075f, 42.13883f, 27.5326f };
			break;
		case 3:
			*uParam1 = { -1749.618f, -403.831f, 154.1647f };
			uParam1->f_3 = { 0f, 0f, -119.0305f };
			uParam1->f_6 = { 3.3075f, 34.77184f, 27.5326f };
			break;
		case 4:
			*uParam1 = { -1679.98f, 138.392f, 124.1166f };
			uParam1->f_3 = { 0f, 0f, 0f };
			uParam1->f_6 = { 313.5151f, 526.6676f, 342.2478f };
			break;
		case 5:
			*uParam1 = { -2055.031f, 46.33399f, 124.1166f };
			uParam1->f_3 = { 0f, 0f, -4.469812f };
			uParam1->f_6 = { 1622.217f, 1411.342f, 695.0812f };
			break;
		case 6:
			*uParam1 = { -2554.131f, 449.4134f, 147.9f };
			uParam1->f_3 = { 0f, 0f, -11.97302f };
			uParam1->f_6 = { 178.3607f, 318.816f, 89.65469f };
			break;
		case 7:
			*uParam1 = { -2654.481f, 276.032f, 147.9f };
			uParam1->f_3 = { 0f, 0f, -17.81414f };
			uParam1->f_6 = { 12.08963f, 64.05805f, 89.65469f };
			break;
		case 8:
			*uParam1 = { -2433.25f, 568.9469f, 147.9f };
			uParam1->f_3 = { 0f, 0f, 84.97085f };
			uParam1->f_6 = { 351.1828f, 429.1686f, 263.3063f };
			break;
		case 9:
			*uParam1 = { -2592.484f, 572.9344f, 147.9f };
			uParam1->f_3 = { 0f, 0f, -32.42343f };
			uParam1->f_6 = { 12.08963f, 86.8971f, 89.65469f };
			break;
		case 10:
			*uParam1 = { -2543.261f, 618.2029f, 147.9f };
			uParam1->f_3 = { 0f, 0f, 110.4556f };
			uParam1->f_6 = { 5.755561f, 57.68023f, 89.65469f };
			break;
		case 11:
			*uParam1 = { -2483.066f, 600.2889f, 147.9f };
			uParam1->f_3 = { 0f, 0f, 49.30486f };
			uParam1->f_6 = { 13.6441f, 91.74523f, 89.65469f };
			break;
		case 12:
			*uParam1 = { -2382.514f, 212.3455f, 147.9f };
			uParam1->f_3 = { 0f, 0f, -4.449802f };
			uParam1->f_6 = { 487.1954f, 382.5348f, 401.3957f };
			break;
		case 13:
			*uParam1 = { -2584.727f, 456.6256f, 148.0603f };
			uParam1->f_3 = { 0f, 0f, -7.571552f };
			uParam1->f_6 = { 11.56267f, 7.53821f, 7.487444f };
			break;
		case 14:
			*uParam1 = { -2619.901f, 436.2383f, 147.9f };
			uParam1->f_3 = { 0f, 0f, -2.488851f };
			uParam1->f_6 = { 21.31653f, 147.4747f, 89.65469f };
			break;
		case 15:
			*uParam1 = { -1809.28f, -396.9163f, 153.0447f };
			uParam1->f_3 = { 0f, 0f, 0f };
			uParam1->f_6 = { 95f, 95f, 40f };
			break;
		case 16:
			*uParam1 = { -1812.827f, -276.5679f, 167.9594f };
			uParam1->f_3 = { 0f, 0f, 150.172f };
			uParam1->f_6 = { 103.5452f, 191.7454f, 80.35403f };
			break;
		case 17:
			*uParam1 = { -1764.657f, -425.4009f, 167.9594f };
			uParam1->f_3 = { 0f, 0f, 150.172f };
			uParam1->f_6 = { 130.6343f, 201.1021f, 80.35403f };
			break;
		case 18:
			*uParam1 = { -1765.281f, -383.258f, 157.6178f };
			uParam1->f_3 = { 0f, 0f, 54.59332f };
			uParam1->f_6 = { 10f, 10f, 20f };
			break;
		case 19:
			*uParam1 = { -1770.384f, -391.4283f, 157.6178f };
			uParam1->f_3 = { 0f, 0f, 47.30022f };
			uParam1->f_6 = { 7.051875f, 8.083923f, 20f };
			break;
		case 20:
			*uParam1 = { -1799.838f, -331.8179f, 167.8536f };
			uParam1->f_3 = { 0f, 0f, 97.73017f };
			uParam1->f_6 = { 10f, 37.31332f, 27.30011f };
			break;
		case 21:
			*uParam1 = { -1730.532f, -414.3389f, 157.6178f };
			uParam1->f_3 = { 0f, 0f, 147.7973f };
			uParam1->f_6 = { 10f, 38.82387f, 53.0976f };
			break;
		case 22:
			*uParam1 = { -1964.009f, 468.1214f, 125.585f };
			uParam1->f_3 = { 0f, 0f, 74.99203f };
			uParam1->f_6 = { 10.06949f, 13.11865f, 50f };
			break;
		case 23:
			*uParam1 = { -1826.338f, -409.2844f, 157.6178f };
			uParam1->f_3 = { 0f, 0f, 73.63992f };
			uParam1->f_6 = { 2.446006f, 13.15254f, 50f };
			break;
		case 24:
			*uParam1 = { -1964.009f, 468.1214f, 125.585f };
			uParam1->f_3 = { 0f, 0f, 74.99203f };
			uParam1->f_6 = { 10.06949f, 13.11865f, 50f };
			break;
		case 25:
			*uParam1 = { -1696.967f, -47.21667f, 152.8878f };
			uParam1->f_3 = { 0f, 0f, -46.56086f };
			uParam1->f_6 = { 22.72696f, 508.0005f, 203.6041f };
			break;
		case 26:
			*uParam1 = { -1709.79f, -255.4776f, 163.5f };
			uParam1->f_3 = { 0f, 0f, -131.237f };
			uParam1->f_6 = { 32.3139f, 508.0005f, 203.6041f };
			break;
		case 27:
			*uParam1 = { -1663.516f, -241.5518f, 167.8536f };
			uParam1->f_3 = { 0f, 0f, 74.65091f };
			uParam1->f_6 = { 10f, 45.70417f, 36.96159f };
			break;
		case 28:
			*uParam1 = { -1639.388f, -220.3398f, 167.8536f };
			uParam1->f_3 = { 0f, 0f, 45.90075f };
			uParam1->f_6 = { 10f, 52.03209f, 33.48681f };
			break;
		case 29:
			*uParam1 = { -1771.198f, 124.5553f, 154.4401f };
			uParam1->f_3 = { 0f, 0f, 91.91393f };
			uParam1->f_6 = { 6.835993f, 34.61615f, 19.61321f };
			break;
		case 30:
			*uParam1 = { -1673.859f, 11.43975f, 160.1895f };
			uParam1->f_3 = { 0f, 0f, -82.06775f };
			uParam1->f_6 = { 32.3139f, 508.0005f, 203.6041f };
			break;
		case 31:
			*uParam1 = { -1692.864f, 147.8488f, 160.1895f };
			uParam1->f_3 = { 0f, 0f, -82.06773f };
			uParam1->f_6 = { 32.3139f, 508.0005f, 203.6041f };
			break;
		case 32:
			*uParam1 = { -1751.478f, 169.454f, 142.059f };
			uParam1->f_3 = { 0f, 0f, 0f };
			uParam1->f_6 = { 37.98619f, 4.712702f, 15.469f };
			break;
		case 33:
			*uParam1 = { -1765.898f, 318.6293f, 116.5372f };
			uParam1->f_3 = { 0f, 0f, -11.48377f };
			uParam1->f_6 = { 897.4987f, 27.40599f, 334.5269f };
			break;
		case 34:
			*uParam1 = { -1757.213f, 288.1163f, 124.1166f };
			uParam1->f_3 = { 0f, 0f, 0f };
			uParam1->f_6 = { 59.12165f, 57.42987f, 80f };
			break;
		case 35:
			*uParam1 = { -1754.578f, 301.273f, 124.1166f };
			uParam1->f_3 = { 0f, 0f, -10.93997f };
			uParam1->f_6 = { 39.38644f, 28.28437f, 80f };
			break;
		case 36:
			*uParam1 = { -1758.776f, 303.3041f, 124.1166f };
			uParam1->f_3 = { 0f, 0f, -9.623938f };
			uParam1->f_6 = { 97.67718f, 15.87566f, 89.53481f };
			break;
		case 37:
			*uParam1 = { -1775.931f, -415.2875f, 154.3289f };
			uParam1->f_3 = { 0f, 0f, 54.00095f };
			uParam1->f_6 = { 13.41148f, 5.431406f, 5.536599f };
			break;
		case 41:
			*uParam1 = { -1765.977f, -382.0327f, 157.3039f };
			uParam1->f_3 = { 0f, 0f, -35.7308f };
			uParam1->f_6 = { 6.557756f, 5.454676f, 5.965106f };
			break;
		case 42:
			*uParam1 = { -1767.172f, -381.6895f, 157.8881f };
			uParam1->f_3 = { 0f, 0f, 54.86752f };
			uParam1->f_6 = { 1f, 1f, 2.360703f };
			break;
		case 43:
			*uParam1 = { -1762.552f, -253.179f, 179.7131f };
			uParam1->f_3 = { 0f, 0f, -9.528048f };
			uParam1->f_6 = { 50.55515f, 30.10353f, 25.14511f };
			break;
		case 44:
			*uParam1 = { -1693.985f, -84.74127f, 178.3081f };
			uParam1->f_3 = { 0f, 0f, -31.2014f };
			uParam1->f_6 = { 31.73277f, 22.7295f, 26.44622f };
			break;
		case 45:
			*uParam1 = { -1805.37f, -444.5966f, 156.5106f };
			uParam1->f_3 = { 0f, 0f, -15.97206f };
			uParam1->f_6 = { 50.74868f, 53.3017f, 21.78134f };
			break;
		case 46:
			*uParam1 = { -1701.398f, -77.28914f, 170.0892f };
			uParam1->f_3 = { 0f, 0f, 50.13595f };
			uParam1->f_6 = { 15.26807f, 12.43579f, 31.79484f };
			break;
		case 47:
			*uParam1 = { -1743.529f, 313.5936f, 110.4815f };
			uParam1->f_3 = { 0f, 0f, 0f };
			uParam1->f_6 = { 15.75079f, 12.18351f, 5.592861f };
			break;
		case 48:
			*uParam1 = { -1770.711f, -386.7373f, 155.9073f };
			uParam1->f_3 = { 0f, 0f, -34.50133f };
			uParam1->f_6 = { 3.121562f, 7.939902f, 9.626193f };
			break;
		case 38:
			*uParam1 = { -1815.175f, -421.9698f, 156.9107f };
			uParam1->f_3 = { 0f, 0f, -15.00055f };
			uParam1->f_6 = { 37.04676f, 25.48494f, 36.73296f };
			break;
		case 49:
			*uParam1 = { -2594.431f, 457.2776f, 147.2882f };
			uParam1->f_3 = { 0f, 0f, -9.626524f };
			uParam1->f_6 = { 6.426388f, 9.539433f, 2.624164f };
			break;
		case 50:
			*uParam1 = { -2640.096f, 166.9689f, 159.483f };
			uParam1->f_3 = { 0f, 0f, 0f };
			uParam1->f_6 = { 45.5312f, 131.5882f, 35.95798f };
			break;
		case 51:
			*uParam1 = { -2558.177f, 408.7915f, 148.3529f };
			uParam1->f_3 = { 0f, 0f, 4.795035f };
			uParam1->f_6 = { 124.1774f, 185.7887f, 63.26886f };
			break;
		case 39:
			*uParam1 = { -1854.866f, -431.5863f, 165.4989f };
			uParam1->f_3 = { 0f, 0f, -20.34041f };
			uParam1->f_6 = { 50.51468f, 14.91056f, 30.01247f };
			break;
		case 40:
			*uParam1 = { -1830.441f, -421.4344f, 162.0514f };
			uParam1->f_3 = { 0f, 0f, -26.51254f };
			uParam1->f_6 = { 10.30271f, 31.24865f, 10.49603f };
			break;
		case 53:
			*uParam1 = { -2613.34f, 406.4795f, 147.9f };
			uParam1->f_3 = { 0f, 0f, -11.97302f };
			uParam1->f_6 = { 98.17922f, 555.6376f, 366.961f };
			break;
		case 54:
			*uParam1 = { -2724.669f, -46.89852f, 147.9f };
			uParam1->f_3 = { 0f, 0f, -13.6824f };
			uParam1->f_6 = { 117.1542f, 508.5832f, 366.961f };
			break;
		case 55:
			*uParam1 = { -2114.75f, 482.7992f, 147.9f };
			uParam1->f_3 = { 0f, 0f, -101.4681f };
			uParam1->f_6 = { 240.1249f, 937.6384f, 366.961f };
			break;
		case 56:
			*uParam1 = { -1779.883f, -397.4516f, 147.9f };
			uParam1->f_3 = { 0f, 0f, 80.09399f };
			uParam1->f_6 = { 337.2637f, 351.1216f, 366.961f };
			break;
		case 57:
			*uParam1 = { -2066.691f, -342.1385f, 147.9f };
			uParam1->f_3 = { 0f, 0f, 80.09399f };
			uParam1->f_6 = { 337.2637f, 555.6376f, 366.961f };
			break;
		case 58:
			*uParam1 = { -2467.138f, -311.0645f, 147.9f };
			uParam1->f_3 = { 0f, 0f, 80.09399f };
			uParam1->f_6 = { 117.1542f, 555.6376f, 366.961f };
			break;
		case 59:
			*uParam1 = { -1703.598f, -40.78326f, 147.9f };
			uParam1->f_3 = { 0f, 0f, 95.35637f };
			uParam1->f_6 = { 1204.497f, 180.9324f, 366.961f };
			break;
		case 61:
			*uParam1 = { -2615.1f, 420.538f, 147.9f };
			uParam1->f_3 = { 0f, 0f, -11.97301f };
			uParam1->f_6 = { 260.9156f, 775.7747f, 366.961f };
			break;
		case 62:
			*uParam1 = { -2726.982f, -71.55646f, 147.9f };
			uParam1->f_3 = { 0f, 0f, -11.97301f };
			uParam1->f_6 = { 261.1146f, 707.9688f, 366.961f };
			break;
		case 63:
			*uParam1 = { -2107.829f, 478.311f, 147.9f };
			uParam1->f_3 = { 0f, 0f, -101.3891f };
			uParam1->f_6 = { 500.8046f, 1193.99f, 366.961f };
			break;
		case 64:
			*uParam1 = { -1778.891f, -391.7723f, 147.9f };
			uParam1->f_3 = { 0f, 0f, 80.09399f };
			uParam1->f_6 = { 531.3549f, 565.8278f, 366.961f };
			break;
		case 65:
			*uParam1 = { -2066.127f, -338.9092f, 147.9f };
			uParam1->f_3 = { 0f, 0f, 80.09399f };
			uParam1->f_6 = { 520.2793f, 746.8476f, 366.961f };
			break;
		case 66:
			*uParam1 = { -2460.255f, -307.7771f, 147.9f };
			uParam1->f_3 = { 0f, 0f, 80.09399f };
			uParam1->f_6 = { 284.7731f, 799.7556f, 366.961f };
			break;
		case 67:
			*uParam1 = { -1703.598f, -40.78326f, 147.9f };
			uParam1->f_3 = { 0f, 0f, 95.35636f };
			uParam1->f_6 = { 1469.029f, 423.1486f, 366.961f };
			break;
		case 69:
			*uParam1 = { -1754.206f, 185.6963f, 139.5156f };
			uParam1->f_3 = { 0f, 0f, -4.235469f };
			uParam1->f_6 = { 18.40656f, 102.7348f, 33.77932f };
			break;
		case 70:
			*uParam1 = { -1736.834f, 304.6992f, 119.3988f };
			uParam1->f_3 = { 0f, 0f, -10.3509f };
			uParam1->f_6 = { 48.23352f, 165.6682f, 27.92688f };
			break;
	}
	return (!__LIB_0__::func_86(*uParam1) && !__LIB_0__::func_86(uParam1->f_6));
}

void func_2055(int iParam0, struct<7> Param1, var uParam8, var uParam9)
{
	iLocal_93[iParam0] = VOLUME::_CREATE_VOLUME_BOX(Param1, Param1.f_3, Param1.f_6);
}

void func_2056(int iParam0)
{
	iLocal_93[iParam0] = VOLUME::_CREATE_VOLUME_AGGREGATE();
}

void func_2061(char[4] cParam0, int iParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (!__LIB_9__::func_133(cParam0, iParam1))
	{
		if (!__LIB_9__::func_38(cParam0, iParam1, &iVar0))
		{
			if (!__LIB_8__::func_701(cParam0, &iVar0))
			{
				return;
			}
		}
	}
	else
	{
		return;
	}
	__LIB_5__::func_72(&(cParam0->f_5423[iVar0 /*65*/]), 1);
	cParam0->f_5423[iVar0 /*65*/] = iParam1;
	if (ENTITY::IS_ENTITY_A_PED(iParam1) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1)))
	{
		__LIB_5__::func_72(&(cParam0->f_5423[iVar0 /*65*/]), 128);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam3))
	{
		if (__LIB_0__::func_125(iParam3))
		{
			cParam0->f_5423[iVar0 /*65*/].f_1 = iParam3;
			__LIB_5__::func_72(&(cParam0->f_5423[iVar0 /*65*/]), 4);
			__LIB_5__::func_72(&(cParam0->f_5423[iVar0 /*65*/]), 16);
		}
		else if (ENTITY::IS_ENTITY_A_VEHICLE(iParam3))
		{
			cParam0->f_5423[iVar0 /*65*/].f_1 = iParam3;
			__LIB_5__::func_72(&(cParam0->f_5423[iVar0 /*65*/]), 4);
			__LIB_5__::func_72(&(cParam0->f_5423[iVar0 /*65*/]), 8);
		}
	}
	cParam0->f_5423[iVar0 /*65*/].f_4 = sParam4;
	cParam0->f_5423[iVar0 /*65*/].f_7 = iParam5;
	cParam0->f_5423[iVar0 /*65*/].f_6 = iParam6;
	if (ENTITY::IS_ENTITY_A_PED(iParam1))
	{
		if (iParam8 == -1)
		{
			if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1) == __LIB_0__::func_398(7))
			{
				cParam0->f_5423[iVar0 /*65*/].f_9 = 40;
			}
			else
			{
				cParam0->f_5423[iVar0 /*65*/].f_9 = __LIB_4__::func_633(iParam1);
			}
		}
		else
		{
			cParam0->f_5423[iVar0 /*65*/].f_9 = iParam8;
		}
		if (iParam8 > -1 && iParam8 < 27)
		{
			cParam0->f_5423[iVar0 /*65*/].f_10 = iParam8;
		}
		if (__LIB_0__::func_31(cParam0->f_5423[iVar0 /*65*/].f_10))
		{
		}
	}
	cParam0->f_13145++;
	if (ENTITY::IS_ENTITY_AN_OBJECT(iParam1))
	{
		if (EVENT::_0x26054EB81AC0893B(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1)))
		{
			EVENT::_0x2DD42FAD06E6F19E(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1), 1, 1);
		}
	}
	else if (ENTITY::IS_ENTITY_A_PED(iParam1))
	{
		iVar1 = 0;
		while (iVar1 < 10)
		{
			cParam0->f_5423[iVar0 /*65*/].f_23[iVar1 /*4*/].f_3 = 347146;
			iVar1++;
		}
		__LIB_9__::func_134(cParam0, iParam1, 2, 4);
		__LIB_9__::func_135(cParam0, iParam1, 2500, 8);
		__LIB_9__::func_135(cParam0, iParam1, 2500, 512);
		__LIB_9__::func_136(cParam0, iParam1, 5000, 512);
		if (cParam0->f_5423[iVar0 /*65*/].f_9 == 14)
		{
			__LIB_9__::func_137(cParam0, iParam1, -2147483648);
		}
	}
}

bool func_2066(char[4] cParam0)
{
	switch (iLocal_1263)
	{
		case 0:
			if (__LIB_1__::func_185(66))
			{
				__LIB_10__::func_21(Global_35, 82);
			}
			else
			{
				__LIB_10__::func_21(Global_35, 61);
			}
			func_2428(1);
			break;
		case 1:
			if (__LIB_8__::func_671(cParam0) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("CHANGEOUTFIT")))
			{
				func_2428(2);
			}
			break;
		case 2:
			if (__LIB_8__::func_924(Global_35))
			{
				__LIB_9__::func_164(Global_35, 1, 0);
				func_2428(3);
			}
			break;
		case 3:
			break;
	}
	return iLocal_1263 == 3;
}

bool func_2068(char[4] cParam0)
{
	switch (iLocal_1333)
	{
		case 0:
			if (__LIB_8__::func_671(cParam0))
			{
				if (func_1839(0))
				{
					func_2433(1);
				}
			}
			break;
		case 1:
			PROPSET::_SET_PROPSET_VISIBLE(iLocal_166, false);
			if (((!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(cParam0->f_7375.f_804) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(cParam0->f_7375.f_804, false)) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(cParam0->f_7375.f_804, false)) || ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_75[15], -389566966))
			{
				func_2434();
				PROPSET::_SET_PROPSET_VISIBLE(iLocal_166, true);
				func_2433(2);
			}
			break;
		case 2:
			break;
	}
	return iLocal_1333 == 2;
}

bool func_2080(int iParam0)
{
	int iVar0;
	iVar0 = UIFEED::_0xC17F69E1418CD11F(1);
	return (iVar0 == iParam0 && UIFEED::_0x59FA676177DBE4C9(iVar0) == 4);
}

bool func_2082(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_272(iParam0, 0))
	{
		return true;
	}
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, Global_35, 1, 1))
	{
		return true;
	}
	if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, Global_35) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_35, iParam0))
	{
		return true;
	}
	if (PED::_0x3BDFCF25B58B0415(iParam0))
	{
		return true;
	}
	if (bParam1)
	{
		if (__LIB_0__::func_665(iParam0, Global_35, 1, 1) < 4f)
		{
			return true;
		}
	}
	return false;
}

bool func_2083(char[4] cParam0)
{
	int iVar0;
	iVar0 = __LIB_6__::func_864(cParam0);
	if (iVar0 == iLocal_16)
	{
		return true;
	}
	else if (iVar0 == iLocal_17)
	{
		return true;
	}
	else if (iVar0 == iLocal_18)
	{
		return true;
	}
	else if (iVar0 == iLocal_19)
	{
		return true;
	}
	else if (iVar0 == iLocal_20)
	{
		return true;
	}
	else if (iVar0 == iLocal_21)
	{
		return true;
	}
	else if (iVar0 == iLocal_22)
	{
		return true;
	}
	else if (iVar0 == iLocal_23)
	{
		return false;
	}
	else if (iVar0 == iLocal_24)
	{
		return false;
	}
	else if (iVar0 == iLocal_25)
	{
		return true;
	}
	else if (iVar0 == iLocal_26)
	{
		return !func_466(7);
	}
	else if (iVar0 == iLocal_27)
	{
		return false;
	}
	return false;
}

bool func_2084()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	if ((MISC::GET_FRAME_COUNT() % 10) != 0)
	{
		return false;
	}
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	if (!ITEMSET::IS_ITEMSET_VALID(iVar0))
	{
		return false;
	}
	iVar1 = ENTITY::_0x59B57C4B06531E1E(Global_36, 10f, iVar0, 1);
	if (iVar1 <= 0)
	{
		ITEMSET::DESTROY_ITEMSET(iVar0);
		return false;
	}
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar3 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar0);
		if (!MISC::_DOES_ITEM_HAVE_VALID_BASE(iVar3))
		{
		}
		else
		{
			iVar4 = MISC::_GET_ENTITY_FROM_ITEM(iVar3);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar4) || !ENTITY::IS_ENTITY_A_PED(iVar4))
			{
			}
			else
			{
				iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar4);
				if (!ENTITY::DOES_ENTITY_EXIST(iVar5) || !PED::IS_PED_HUMAN(iVar5))
				{
				}
				else if (!PED::IS_PED_DEAD_OR_DYING(iVar5, true))
				{
				}
				else
				{
					iVar6 = PED::GET_PED_SOURCE_OF_DEATH(iVar5);
					if (((((!func_2439(iVar6, Global_35) && !func_2440(iVar6, iLocal_72)) && !func_2439(iVar6, iLocal_49)) && !ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar5, Global_35, 1, 1)) && !ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar5, iLocal_72, 1, 1)) && !ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar5, iLocal_49, 1, 1))
					{
					}
					else
					{
						ITEMSET::DESTROY_ITEMSET(iVar0);
						return true;
					}
				}
			}
		}
		iVar2++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	return false;
}

void func_2093(char[4] cParam0)
{
	int iVar0;
	int iVar1;
	if (__LIB_6__::func_864(cParam0) == 25 || __LIB_6__::func_864(cParam0) == 26)
	{
		return;
	}
	if (!__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 4096))
	{
		if (__LIB_6__::func_872(cParam0, 4) && !__LIB_6__::func_862(cParam0, 8))
		{
			if (!Global_1935630.f_12)
			{
				if (__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 1))
				{
					if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false))
					{
						if (iVar0 == 0 || iVar0 == joaat("WEAPON_UNARMED"))
						{
							iVar1 = func_2447(128);
							if (__LIB_0__::func_154(iVar1))
							{
								if (!WEAPON::_0x2387D6E9C6B478AA(Global_35))
								{
									WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar1, true, 0, false, false);
								}
							}
						}
					}
				}
			}
		}
		else
		{
			func_2448(cParam0);
		}
	}
	if (!Global_1935630.f_12)
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 141, __LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 33));
	}
	if (__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 8192))
	{
		if (__LIB_6__::func_862(cParam0, 1024) || __LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 4))
		{
			if (!Global_1935630.f_12)
			{
				PED::_SET_PED_CROUCH_MOVEMENT(Global_35, true, 0, false);
			}
		}
	}
}

bool func_2223(int iParam0, int iParam1)
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
				if (func_2223(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_2223(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_2223(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_2223(iVar21, 1))
				{
				}
			}
		}
		__LIB_1__::func_712();
		return true;
	}
	return false;
}

void func_2268(int iParam0)
{
	if (iLocal_340 != iParam0)
	{
		iLocal_340 = iParam0;
	}
}

void func_2269(int iParam0)
{
	if (iLocal_348 != iParam0)
	{
		iLocal_348 = iParam0;
	}
}

void func_2270(int iParam0)
{
	if (iLocal_349 != iParam0)
	{
		iLocal_349 = iParam0;
	}
}

int func_2274(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return -1;
		case 3:
			return 4;
		case 4:
			return 5;
		case 5:
			return -1;
		default:
			break;
	}
	return -1;
}

int func_2275(int iParam0)
{
	struct<4> Var0;
	int iVar4;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_62[iParam0]))
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			Var0 = { -1777.766f, -440.4709f, 153.9872f };
			Var0.f_3 = 82.2914f;
			iVar4 = joaat("G_M_M_UNIRANCHERS_01");
			break;
		case 1:
			Var0 = { -1777.495f, -439.0917f, 154.0051f };
			Var0.f_3 = 82.2914f;
			iVar4 = joaat("S_M_M_STRCOWPOKE_01");
			break;
	}
	iLocal_62[iParam0] = __LIB_1__::func_545(iVar4, Var0, Var0.f_3, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_62[iParam0]))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_62[iParam0], true);
		WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_62[iParam0], false, true);
		return 1;
	}
	return 0;
}

void func_2277()
{
	iLocal_1329++;
}

void func_2279(int iParam0)
{
	if (iLocal_1289 != iParam0)
	{
		iLocal_1289 = iParam0;
	}
}

int func_2281(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
		if (__LIB_9__::func_905(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (__LIB_13__::func_848(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_2281(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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
					__LIB_10__::func_932(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
					if (__LIB_13__::func_849(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
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
					if (__LIB_6__::func_698(*uParam0, iParam1, uParam3))
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
					__LIB_10__::func_933(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					__LIB_13__::func_849(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					__LIB_10__::func_932(uParam0, __LIB_2__::func_402(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
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
			__LIB_6__::func_699(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

void func_2284(bool bParam0)
{
	iLocal_1342 = 0;
	if (!__LIB_0__::func_272(uLocal_46[0], 0))
	{
		return;
	}
	switch (iLocal_1340)
	{
		case 0:
			if (bParam0)
			{
				if (!MISC::_0x4B101DBCC9482F2D(uLocal_46[0]))
				{
					__LIB_10__::func_979(uLocal_46[0], "", 500f, 0, 500f, 324);
				}
				func_1856(1);
			}
			break;
		case 1:
			if (__LIB_10__::func_896(PLAYER::PLAYER_ID(), uLocal_46[0]))
			{
				func_1856(2);
			}
			break;
		case 2:
			if (!__LIB_0__::func_139(iLocal_1338))
			{
				iLocal_1338 = __LIB_1__::func_877("SPEED_UP", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
				__LIB_1__::func_574(&iLocal_1338, uLocal_46[0]);
			}
			if (!__LIB_0__::func_139(iLocal_1339))
			{
				iLocal_1339 = __LIB_1__::func_877("SPEED_DOWN", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
				__LIB_1__::func_574(&iLocal_1339, uLocal_46[0]);
			}
			if (!__LIB_10__::func_896(PLAYER::PLAYER_ID(), uLocal_46[0]))
			{
				__LIB_1__::func_281(&iLocal_1338, 1, 1);
				__LIB_1__::func_281(&iLocal_1339, 1, 1);
				func_1856(1);
			}
			else
			{
				__LIB_5__::func_793(iLocal_1338, 0);
				__LIB_5__::func_793(iLocal_1339, 0);
				if (func_466(32))
				{
					__LIB_5__::func_793(iLocal_1338, 1);
					__LIB_5__::func_793(iLocal_1339, 1);
				}
				else
				{
					if (func_466(25) && iLocal_1336 == 4)
					{
						__LIB_5__::func_793(iLocal_1338, 1);
					}
					if (func_466(26) && iLocal_1336 == 0)
					{
						__LIB_5__::func_793(iLocal_1339, 1);
					}
				}
				if (__LIB_1__::func_514(iLocal_1338, 1))
				{
					iLocal_1342 = 1;
				}
				else if (__LIB_1__::func_514(iLocal_1339, 1))
				{
					iLocal_1342 = 2;
				}
			}
			break;
	}
}

bool func_2285()
{
	return (func_466(20) && func_1347());
}

void func_2286(int iParam0)
{
	if (iLocal_1337 != iParam0)
	{
		iLocal_1337 = iParam0;
	}
}

bool func_2287()
{
	return iLocal_1342 == 1;
}

void func_2288(bool bParam0)
{
	func_467(32, bParam0);
}

bool func_2289()
{
	return iLocal_1342 == 2;
}

bool func_2290()
{
	return iLocal_1336 != 4;
}

void func_2291()
{
	int iVar0;
	int iVar1;
	iVar0 = iLocal_1336;
	iVar0 = __LIB_0__::func_259(iVar0 + 1, 4);
	iVar1 = iVar0;
	func_1843(iVar1);
}

bool func_2292()
{
	return iLocal_1336 != 0;
}

void func_2293()
{
	int iVar0;
	int iVar1;
	iVar0 = iLocal_1336;
	iVar0 = __LIB_5__::func_723((iVar0 - 1), 0);
	iVar1 = iVar0;
	func_1843(iVar1);
}

bool func_2294()
{
	bool bVar0;
	if (!PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		__LIB_1__::func_148(&uLocal_252);
		return false;
	}
	bVar0 = MISC::ABSF(CAM::GET_GAMEPLAY_CAM_RELATIVE_HEADING()) > 130f;
	if (bVar0)
	{
		func_2565(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, 0f, -30f, 0f));
	}
	else
	{
		func_1859();
	}
	if (!__LIB_0__::func_75(&uLocal_252) || !bVar0)
	{
		__LIB_1__::func_148(&uLocal_252);
	}
	else if (bVar0 && __LIB_0__::func_265(&uLocal_252) > 4f)
	{
		return true;
	}
	return false;
}

void func_2295(int iParam0)
{
	if (iLocal_336 != iParam0)
	{
		iLocal_336 = iParam0;
	}
}

void func_2299()
{
	__LIB_1__::func_148(&uLocal_1417);
}

float func_2301()
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	fVar0 = -1f;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = iVar1;
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_50[iVar2]))
		{
			fVar3 = __LIB_0__::func_665(Global_35, iLocal_50[iVar2], 0, 0);
			if (fVar0 == -1f || fVar3 < fVar0)
			{
				fVar0 = fVar3;
			}
		}
		iVar1++;
	}
	return fVar0;
}

int func_2310(var uParam0, int iParam1, int iParam2)
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
		return func_2310(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

void func_2409(var uParam0, int iParam1)
{
	char cVar0[32];
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		if (iParam1 == 0)
		{
			StringCopy(&cVar0, "TOM_DICKENS", 32);
		}
		StringIntConCat(&cVar0, iParam1, 32);
		PED::SET_PED_NAME_DEBUG(*uParam0, &cVar0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
		ENTITY::SET_ENTITY_VISIBLE(*uParam0, true);
		AUDIO::STOP_PED_SPEAKING(*uParam0, true);
		if (iParam1 == 0)
		{
			__LIB_0__::func_862(*uParam0, joaat("META_OUTFIT_DEFAULT"));
		}
		uLocal_195[0]++;
	}
}

void func_2410(char[4] cParam0, var uParam1, int iParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(*uParam1))
	{
		return;
	}
	if (iParam2 == 0)
	{
		__LIB_9__::func_42(cParam0, *uParam1, "STR_Freight_Clerk", 0);
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam1, true);
	uLocal_195[1]++;
}

void func_2413(var uParam0, int iParam1)
{
	char cVar0[32];
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		if (iParam1 == 0)
		{
		}
		StringCopy(&cVar0, "ENEMY_WAVE1A_H", 32);
		StringIntConCat(&cVar0, iParam1, 32);
		PED::SET_PED_NAME_DEBUG(*uParam0, &cVar0);
		PED::SET_PED_CAN_BE_TARGETTED(*uParam0, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
		TASK::TASK_STAND_STILL(*uParam0, -1);
		iLocal_198[0]++;
	}
}

void func_2428(int iParam0)
{
	if (iLocal_1263 != iParam0)
	{
		iLocal_1263 = iParam0;
	}
}

void func_2433(int iParam0)
{
	if (iLocal_1333 != iParam0)
	{
		iLocal_1333 = iParam0;
	}
}

void func_2434()
{
	int iVar0;
	int iVar1;
	iVar0 = 8;
	while (iVar0 <= 16)
	{
		iVar1 = iVar0;
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_75[iVar1]))
		{
			__LIB_8__::func_863(&(iLocal_75[iVar1]), 0, 1, 1);
		}
		iVar0++;
	}
}

bool func_2439(int iParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return false;
	}
	return ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0) == iParam1;
}

bool func_2440(int iParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		return false;
	}
	return ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0) == iParam1;
}

int func_2447(int iParam0)
{
	var uVar0;
	var uVar4;
	int iVar8;
	int iVar9;
	iVar8 = func_1426(&uVar0, iParam0, 0);
	iVar9 = func_2310(&uVar4, iParam0, 0);
	if (iVar8 == 0)
	{
		if (iVar9 == 0)
		{
			if (__LIB_0__::func_27(iParam0, 256))
			{
				return joaat("WEAPON_UNARMED");
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return iVar9;
		}
	}
	else if (iVar9 == 0)
	{
		return iVar8;
	}
	if (WEAPON::_0xA2091482ED42EF85(Global_35, &uVar0) > WEAPON::_0xA2091482ED42EF85(Global_35, &uVar4) && !__LIB_0__::func_27(iParam0, 64))
	{
		return iVar8;
	}
	return iVar9;
}

void func_2448(char[4] cParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (!Global_1935630.f_12)
	{
		if (cParam0->f_7374 != 0 && cParam0->f_7374 != joaat("WEAPON_UNARMED"))
		{
			if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false))
			{
				if (iVar0 != cParam0->f_7374)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, cParam0->f_7374, true, 0, false, false);
				}
			}
			else if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, cParam0->f_7374, 0, false))
			{
				if (WEAPON::GET_AMMO_IN_PED_WEAPON(Global_35, cParam0->f_7374) > 0)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, cParam0->f_7374, true, 0, false, false);
				}
			}
		}
		else if ((__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 1) && !__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 4)) && __LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 2))
		{
			if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar1, true, 0, false))
			{
				if (iVar1 == 0 || iVar1 == joaat("WEAPON_UNARMED"))
				{
					iVar2 = func_2447(128);
					if (__LIB_0__::func_154(iVar2))
					{
						if (!WEAPON::_0x2387D6E9C6B478AA(Global_35))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar2, false, 0, false, false);
						}
					}
				}
			}
			else
			{
				iVar3 = func_2447(128);
				if (__LIB_0__::func_154(iVar3))
				{
					if (!WEAPON::_0x2387D6E9C6B478AA(Global_35))
					{
						WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar3, false, 0, false, false);
					}
				}
			}
		}
	}
}

void func_2565(vector3 vParam0)
{
	if (__LIB_0__::func_138(vLocal_69, vParam0))
	{
		return;
	}
	TASK::TASK_LOOK_AT_COORD(Global_35, vParam0, -1, 0, 51, 0);
	vLocal_69 = { vParam0 };
	iLocal_68 = 0;
}

