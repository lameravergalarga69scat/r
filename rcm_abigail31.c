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
	struct<25> Local_22 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	bool bLocal_66 = false;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	bool bLocal_71 = false;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	bool bLocal_92 = false;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101[2] = { 0, 0 };
	int iLocal_104[2] = { 0, 0 };
	int iLocal_107[2] = { 0, 0 };
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	bool bLocal_113 = false;
	bool bLocal_114 = false;
	bool bLocal_115 = false;
	bool bLocal_116 = false;
	int iLocal_117 = 0;
	float fLocal_118 = 0f;
	float fLocal_119 = 0f;
	bool bLocal_120 = false;
	bool bLocal_121 = false;
	bool bLocal_122 = false;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125[2] = { 0, 0 };
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	bool bLocal_131 = false;
	bool bLocal_132 = false;
	bool bLocal_133 = false;
	bool bLocal_134 = false;
	bool bLocal_135 = false;
	bool bLocal_136 = false;
	bool bLocal_137 = false;
	bool bLocal_138 = false;
	bool bLocal_139 = false;
	bool bLocal_140 = false;
	bool bLocal_141 = false;
	bool bLocal_142 = false;
	bool bLocal_143 = false;
	bool bLocal_144 = false;
	bool bLocal_145 = false;
	bool bLocal_146 = false;
	bool bLocal_147 = false;
	bool bLocal_148 = false;
	bool bLocal_149 = false;
	bool bLocal_150 = false;
	bool bLocal_151 = false;
	bool bLocal_152 = false;
	bool bLocal_153 = false;
	bool bLocal_154 = false;
	bool bLocal_155 = false;
	bool bLocal_156 = false;
	bool bLocal_157 = false;
	bool bLocal_158 = false;
	bool bLocal_159 = false;
	int iLocal_160 = 0;
	bool bLocal_161 = false;
	bool bLocal_162 = false;
	bool bLocal_163 = false;
	bool bLocal_164 = false;
	bool bLocal_165 = false;
	int iLocal_166 = 0;
	bool bLocal_167 = false;
	bool bLocal_168 = false;
	bool bLocal_169 = false;
	bool bLocal_170 = false;
	bool bLocal_171 = false;
	bool bLocal_172 = false;
	bool bLocal_173 = false;
	bool bLocal_174 = false;
	int iLocal_175[3] = { 0, 0, 0 };
	bool bLocal_179 = false;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 1;
	var uLocal_185 = 1;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	int iLocal_194[22] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<2> Local_217[9];
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	bool bLocal_248 = false;
	int iLocal_249 = 0;
	var uLocal_250 = 0;
	int iLocal_251 = 0;
	var uLocal_252 = 0;
	int iLocal_253 = 0;
	var uLocal_254 = 0;
	int iLocal_255 = 0;
	int iLocal_256 = 0;
	int iLocal_257 = 0;
	int iLocal_258 = 0;
	int iLocal_259 = 0;
	int iLocal_260 = 0;
	int iLocal_261 = 0;
	int iLocal_262 = 0;
	bool bLocal_263 = false;
	bool bLocal_264 = false;
	int iLocal_265 = 0;
	var uLocal_266 = 0;
	int iLocal_267 = 0;
	var uLocal_268 = 0;
	int iLocal_269 = 0;
	int iLocal_270 = 0;
	int iLocal_271 = 0;
	int iLocal_272 = 0;
	struct<8> Local_273[4];
	bool bLocal_306 = false;
	int iLocal_307 = 0;
	int iLocal_308 = 0;
	int iLocal_309 = 0;
	float fLocal_310 = 0f;
	int iLocal_311 = 0;
	int iLocal_312 = 0;
	int iLocal_313 = 0;
	int iLocal_314 = 0;
	int iLocal_315 = 0;
	int iLocal_316[2] = { 0, 0 };
	int iLocal_319 = 0;
	bool bLocal_320 = false;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	int iLocal_324 = 0;
	bool bLocal_325 = false;
	bool bLocal_326 = false;
	bool bLocal_327 = false;
	bool bLocal_328 = false;
	bool bLocal_329 = false;
	int iLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	int iLocal_334[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_344 = 0;
	bool bLocal_345 = false;
	int iLocal_346[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_353 = 0;
	int iLocal_354 = 0;
	var uLocal_355 = 0;
	bool bLocal_356 = false;
	bool bLocal_357 = false;
	bool bLocal_358 = false;
	bool bLocal_359 = false;
	bool bLocal_360 = false;
	bool bLocal_361 = false;
	bool bLocal_362 = false;
	bool bLocal_363 = false;
	bool bLocal_364 = false;
	int iLocal_365 = 0;
	int iLocal_366 = 0;
	int iLocal_367 = 0;
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
	bool bLocal_395 = false;
	bool bLocal_396 = false;
	float fLocal_397 = 0f;
	float fLocal_398 = 0f;
	struct<105> Local_399 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -262339715, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 6 } ;
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
	var uLocal_534 = 15;
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
	var uLocal_610 = 2;
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
	var uLocal_621 = 22;
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
	var uLocal_748 = 56;
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
	var uLocal_1321 = 2;
	var uLocal_1322 = 0;
	var uLocal_1323 = 0;
	var uLocal_1324 = 0;
	var uLocal_1325 = 0;
	var uLocal_1326 = 0;
	var uLocal_1327 = 0;
	var uLocal_1328 = 0;
	var uLocal_1329 = 0;
	var uLocal_1330 = 0;
	var uLocal_1331 = 8;
	var uLocal_1332 = 0;
	var uLocal_1333 = 0;
	var uLocal_1334 = 0;
	var uLocal_1335 = 0;
	var uLocal_1336 = 0;
	var uLocal_1337 = 0;
	var uLocal_1338 = 0;
	var uLocal_1339 = 0;
	var uLocal_1340 = 0;
	var uLocal_1341 = 0;
	var uLocal_1342 = 0;
	var uLocal_1343 = 0;
	var uLocal_1344 = 0;
	var uLocal_1345 = 0;
	var uLocal_1346 = 0;
	var uLocal_1347 = 0;
	var uLocal_1348 = 0;
	var uLocal_1349 = 0;
	var uLocal_1350 = 0;
	var uLocal_1351 = 0;
	var uLocal_1352 = 0;
	var uLocal_1353 = 24;
	var uLocal_1354 = 0;
	var uLocal_1355 = 0;
	var uLocal_1356 = 0;
	var uLocal_1357 = 0;
	var uLocal_1358 = 0;
	var uLocal_1359 = 0;
	var uLocal_1360 = 0;
	var uLocal_1361 = 0;
	var uLocal_1362 = 0;
	var uLocal_1363 = 0;
	var uLocal_1364 = 0;
	var uLocal_1365 = 0;
	var uLocal_1366 = 0;
	var uLocal_1367 = 0;
	var uLocal_1368 = 0;
	var uLocal_1369 = 0;
	var uLocal_1370 = 0;
	var uLocal_1371 = 0;
	var uLocal_1372 = 0;
	var uLocal_1373 = 0;
	var uLocal_1374 = 0;
	var uLocal_1375 = 0;
	var uLocal_1376 = 0;
	var uLocal_1377 = 0;
	var uLocal_1378 = 0;
	var uLocal_1379 = 0;
	var uLocal_1380 = 0;
	var uLocal_1381 = 0;
	var uLocal_1382 = 0;
	var uLocal_1383 = 0;
	var uLocal_1384 = 0;
	var uLocal_1385 = 0;
	var uLocal_1386 = 0;
	var uLocal_1387 = 0;
	var uLocal_1388 = 0;
	var uLocal_1389 = 0;
	var uLocal_1390 = 0;
	var uLocal_1391 = 0;
	var uLocal_1392 = 0;
	var uLocal_1393 = 0;
	var uLocal_1394 = 0;
	var uLocal_1395 = 0;
	var uLocal_1396 = 0;
	var uLocal_1397 = 0;
	var uLocal_1398 = 0;
	var uLocal_1399 = 0;
	var uLocal_1400 = 0;
	var uLocal_1401 = 0;
	var uLocal_1402 = 0;
	var uLocal_1403 = 0;
	var uLocal_1404 = 0;
	var uLocal_1405 = 0;
	var uLocal_1406 = 0;
	var uLocal_1407 = 0;
	var uLocal_1408 = 0;
	var uLocal_1409 = 0;
	var uLocal_1410 = 0;
	var uLocal_1411 = 0;
	var uLocal_1412 = 0;
	var uLocal_1413 = 0;
	var uLocal_1414 = 0;
	var uLocal_1415 = 0;
	var uLocal_1416 = 0;
	var uLocal_1417 = 0;
	var uLocal_1418 = 0;
	var uLocal_1419 = 0;
	var uLocal_1420 = 0;
	var uLocal_1421 = 0;
	var uLocal_1422 = 0;
	var uLocal_1423 = 0;
	var uLocal_1424 = 0;
	var uLocal_1425 = 0;
	var uLocal_1426 = 0;
	var uLocal_1427 = 0;
	var uLocal_1428 = 0;
	var uLocal_1429 = 0;
	var uLocal_1430 = 0;
	var uLocal_1431 = 0;
	var uLocal_1432 = 0;
	var uLocal_1433 = 0;
	var uLocal_1434 = 0;
	var uLocal_1435 = 0;
	var uLocal_1436 = 0;
	var uLocal_1437 = 0;
	var uLocal_1438 = 0;
	var uLocal_1439 = 0;
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
	var uLocal_1452 = 4;
	var uLocal_1453 = 0;
	var uLocal_1454 = 0;
	var uLocal_1455 = 0;
	var uLocal_1456 = 0;
	var uLocal_1457 = 180000;
	var uLocal_1458 = 0;
	var uLocal_1459 = 0;
	var uLocal_1460 = 0;
	var uLocal_1461 = 5;
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
	var uLocal_1494 = 1092616192;
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
	bool bLocal_1532 = false;
	bool bLocal_1533 = false;
	int iLocal_1534 = 0;
	int iLocal_1535 = 0;
	int iLocal_1536 = 0;
	int iLocal_1537 = 0;
	var uLocal_1538 = -1;
	var uLocal_1539 = 0;
	var uLocal_1540 = -1;
	var uLocal_1541 = 0;
	var uLocal_1542 = 0;
	var uLocal_1543 = -1;
	var uLocal_1544 = 0;
	var uLocal_1545 = 0;
	var uLocal_1546 = 0;
	var uLocal_1547 = 0;
	var uLocal_1548 = 0;
	var uLocal_1549 = 1073741824;
	var uLocal_1550 = 0;
	var uLocal_1551 = 0;
	var uLocal_1552 = 0;
	var uLocal_1553 = 1;
	var uLocal_1554 = 0;
	var uLocal_1555 = 0;
	var uLocal_1556 = 0;
	var uLocal_1557 = 0;
	struct<17> Local_1558[1];
	int iLocal_1576 = 0;
	bool bLocal_1577 = false;
	bool bLocal_1578 = false;
	bool bLocal_1579 = false;
	int iLocal_1580 = 0;
	var uLocal_1581 = -1;
	var uLocal_1582 = 0;
	var uLocal_1583 = -1;
	var uLocal_1584 = 0;
	var uLocal_1585 = 0;
	var uLocal_1586 = -1;
	var uLocal_1587 = 0;
	var uLocal_1588 = 0;
	var uLocal_1589 = 0;
	var uLocal_1590 = 0;
	var uLocal_1591 = 0;
	var uLocal_1592 = 1073741824;
	var uLocal_1593 = 0;
	var uLocal_1594 = 0;
	var uLocal_1595 = 0;
	var uLocal_1596 = 1;
	var uLocal_1597 = 0;
	var uLocal_1598 = 0;
	var uLocal_1599 = 0;
	var uLocal_1600 = 0;
	struct<17> Local_1601[1];
	bool bLocal_1619 = false;
	int iLocal_1620 = 0;
	int iLocal_1621 = 0;
	int iLocal_1622 = 0;
	int iLocal_1623 = 0;
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
	var uLocal_1636 = 0;
	var uLocal_1637 = 0;
	var uLocal_1638 = 0;
	var uLocal_1639 = 0;
	int iLocal_1640 = 0;
	struct<5> Local_1641[16];
	char* sLocal_1722 = NULL;
	char* sLocal_1723 = NULL;
	bool bLocal_1724 = false;
	char* sLocal_1725 = NULL;
	char* sLocal_1726 = NULL;
	char* sLocal_1727 = NULL;
	int iLocal_1728 = 0;
	int iLocal_1729 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion
void __EntryFunction__()
{
	struct<2606> Var0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_57 = 1;
	iLocal_61 = joaat("PG_SP_MARSTONSWAGON02X");
	iLocal_64 = joaat("P_MARSTONWAGONPIECE02X");
	iLocal_87 = joaat("P_BROOM02X");
	iLocal_89 = joaat("P_CHAIR_CRATE02X");
	fLocal_118 = 0f;
	fLocal_119 = -1f;
	bLocal_163 = true;
	bLocal_263 = true;
	iLocal_319 = 1;
	bLocal_325 = true;
	bLocal_326 = true;
	bLocal_327 = true;
	bLocal_328 = true;
	bLocal_329 = true;
	iLocal_330 = 1;
	bLocal_345 = true;
	iLocal_1576 = -1;
	sLocal_1722 = "AMB_CAMP@WORLD_CAMP_FIRE_CROUCH@TEND@MALE_A@idle_a";
	sLocal_1723 = "idle_a";
	sLocal_1725 = "Script@Story@RABI3@WalkThroughBeechers";
	sLocal_1726 = "RABI3_END_WALK2";
	sLocal_1727 = "Script@Story@RABI3@WalkThroughBlackwater";
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
		__LIB_12__::func_954(uParam0, __LIB_12__::func_792(uParam0));
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
		__LIB_18__::func_769(uParam0, __LIB_0__::func_58(uParam0));
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
		func_122(uParam0);
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
	else if (!__LIB_0__::func_75(&(uParam0->f_2585)) || IntToFloat(__LIB_1__::func_871(&(uParam0->f_2585))) > __LIB_5__::func_774(uParam0))
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
	__LIB_5__::func_440("nav_mesh_beech_barn_finished");
	__LIB_12__::func_658(uParam0, 2);
	__LIB_12__::func_659(uParam0, 12);
	func_188();
	func_189();
	uParam0->f_744 = 6f;
	if (Global_40.f_9028.f_16 > 0)
	{
		bLocal_358 = true;
	}
	else
	{
		bLocal_358 = false;
	}
	if (!__LIB_1__::func_198(joaat("CSTAG_FLOW_RABI3_OPEN"), 1))
	{
		__LIB_4__::func_253(joaat("CSTAG_FLOW_RABI3_OPEN"), 1017034651, 1120952528, -1, 1, 1, 0);
	}
}

void func_42(var uParam0)
{
	__LIB_12__::func_908(uParam0, 0);
	__LIB_12__::func_867(uParam0, joaat("CS_ABIGAILROBERTS"), 7);
	__LIB_12__::func_867(uParam0, joaat("CS_BLWPHOTOGRAPHER"), 7);
	__LIB_12__::func_867(uParam0, joaat("WAGON02X"), 7);
	__LIB_12__::func_867(uParam0, joaat("ROWBOAT"), 7);
	__LIB_12__::func_867(uParam0, joaat("SCRIPT_RT_BLA_THEATER"), 7);
	__LIB_12__::func_867(uParam0, iLocal_89, 7);
	__LIB_12__::func_867(uParam0, iLocal_87, 7);
	__LIB_12__::func_867(uParam0, joaat("S_MARYRUBYRING01X"), 7);
	__LIB_12__::func_867(uParam0, joaat("RCES_ABIGAIL3_MALES_01"), 7);
	__LIB_12__::func_867(uParam0, joaat("RCES_ABIGAIL3_FEMALES_01"), 7);
	__LIB_12__::func_867(uParam0, joaat("P_CAMERABOX01X"), 2);
	__LIB_12__::func_867(uParam0, joaat("P_SCREWDRIVER01X"), 2);
	__LIB_12__::func_867(uParam0, joaat("P_STUDIOCAMERA01X"), 2);
	__LIB_12__::func_867(uParam0, joaat("P_CHAIR17X"), 2);
	__LIB_12__::func_867(uParam0, joaat("P_CHAIR12BX"), 2);
	__LIB_12__::func_867(uParam0, joaat("P_CS_BILLSINGLE01X"), 2);
	__LIB_12__::func_867(uParam0, joaat("P_CS_PHOTO_4X6"), 2);
	__LIB_13__::func_55(uParam0, sLocal_1722, 7);
	STREAMING::REQUEST_NAMED_PTFX_ASSET(joaat("SCR_MASON"));
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
			Var1 = { func_206(2) };
			Var1.f_3 = func_207(2);
			break;
		case 1:
			Var1 = { func_206(15) };
			Var1.f_3 = func_207(15);
			break;
		case 2:
			Var1 = { func_206(28) };
			Var1.f_3 = func_207(28);
			break;
		case 3:
			Var1 = { func_206(39) };
			Var1.f_3 = func_207(39);
			break;
		case 4:
			Var1 = { func_206(50) };
			Var1.f_3 = func_207(50);
			break;
	}
	return Var1;
}

bool func_62(var uParam0)
{
	return func_208(*uParam0, uParam0->f_3);
}

bool func_64(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = __LIB_0__::func_167(14);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (__LIB_13__::func_203(uParam0, iVar0))
		{
			StringCopy(&(uParam0->f_2578), "ABI31_F_JH", 24);
			return true;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_67))
	{
		if (ENTITY::IS_ENTITY_DEAD(iLocal_67))
		{
			StringCopy(&(uParam0->f_2578), "ABI31_F_ABI", 24);
			return true;
		}
		if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(iLocal_67, true, false), 5f) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_67, true, false), 5f, true))
		{
			StringCopy(&(uParam0->f_2578), "ABI31_F_SCARE", 24);
			return true;
		}
		if (iLocal_47 == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_124))
			{
				if (!PED::IS_PED_IN_VEHICLE(iLocal_67, iLocal_124, false) || !PED::IS_PED_IN_VEHICLE(Global_35, iLocal_124, false))
				{
					StringCopy(&(uParam0->f_2578), "ABI31_F_ABH", 24);
					return true;
				}
			}
		}
	}
	if (__LIB_0__::func_266(Global_35, -1624.75f, -1395.4f, 81.56f, 80f, 1, 1))
	{
		iVar1 = __LIB_0__::func_167(7);
		iVar2 = __LIB_0__::func_167(4);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar1, Global_35, 1, 1))
			{
				StringCopy(&(uParam0->f_2578), "ABI31_F_CH", 24);
				return true;
			}
			if (PED::IS_PED_RAGDOLL(iVar1) && ENTITY::IS_ENTITY_AT_ENTITY(Global_35, iVar1, 10f, 10f, 10f, false, true, 0))
			{
				__LIB_1__::func_283(&uLocal_239, 0);
			}
			else
			{
				__LIB_0__::func_37(&uLocal_239);
			}
			if (__LIB_0__::func_75(&uLocal_239))
			{
				if (__LIB_0__::func_265(&uLocal_239) > 1f)
				{
					StringCopy(&(uParam0->f_2578), "ABI31_F_CH", 24);
					return true;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar2, Global_35, 1, 1))
			{
				StringCopy(&(uParam0->f_2578), "ABI31_F_UH", 24);
				return true;
			}
			if (PED::IS_PED_RAGDOLL(iVar2) && ENTITY::IS_ENTITY_AT_ENTITY(Global_35, iVar2, 10f, 10f, 10f, false, true, 0))
			{
				__LIB_1__::func_283(&uLocal_242, 0);
			}
			else
			{
				__LIB_0__::func_37(&uLocal_242);
			}
			if (__LIB_0__::func_75(&uLocal_242))
			{
				if (__LIB_0__::func_265(&uLocal_242) > 1f)
				{
					StringCopy(&(uParam0->f_2578), "ABI31_F_UH", 24);
					return true;
				}
			}
		}
		if (__LIB_0__::func_266(Global_35, -1581.172f, -1423.889f, 80.44695f, 25f, 1, 1))
		{
			if (PLAYER::_0x72AD59F7B7FB6E24(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				StringCopy(&(uParam0->f_2578), "ABI31_F_SCARE", 24);
				return true;
			}
		}
	}
	if ((((iLocal_47 == 1 || iLocal_47 == 0) || iLocal_47 == 3) || iLocal_47 == 5) || iLocal_47 == 7)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_67))
		{
			if (!__LIB_0__::func_48(Global_35, iLocal_67, 50f, 1))
			{
				StringCopy(&(uParam0->f_2578), "ABI31_F_ABA", 24);
				return true;
			}
		}
	}
	if (iLocal_47 == 10)
	{
		if (!__LIB_0__::func_266(Global_35, func_206(11), 120f, 1, 1))
		{
			StringCopy(&(uParam0->f_2578), "ABI31_F_LAKE", 24);
			return true;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_70) && ENTITY::IS_ENTITY_DEAD(iLocal_70))
	{
		StringCopy(&(uParam0->f_2578), "ABI31_F_PHO", 24);
		return true;
	}
	if (PED::IS_PED_IN_COMBAT(Global_35, 0) || bLocal_1577)
	{
		if (!__LIB_0__::func_75(&uLocal_377))
		{
			__LIB_1__::func_283(&uLocal_377, 0);
		}
		else if (__LIB_0__::func_264(&uLocal_377) > 5f || (bLocal_1577 && __LIB_0__::func_264(&uLocal_377) > 2f))
		{
			__LIB_0__::func_37(&uLocal_377);
			if (__LIB_0__::func_48(Global_35, iLocal_67, 10f, 1))
			{
				StringCopy(&(uParam0->f_2578), "ABI31_F_SCARE", 24);
				return true;
			}
			else
			{
				StringCopy(&(uParam0->f_2578), "ABI31_F_COMBAT", 24);
				return true;
			}
		}
	}
	else if (__LIB_0__::func_75(&uLocal_377))
	{
		__LIB_0__::func_37(&uLocal_377);
	}
	if (iLocal_47 < 3 && ENTITY::DOES_ENTITY_EXIST(iLocal_124))
	{
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_124, false, false))
		{
			StringCopy(&(uParam0->f_2578), "ABI31_F_WAG", 24);
			return true;
		}
	}
	if (iLocal_47 < 11)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_128))
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_128, false, false))
			{
				StringCopy(&(uParam0->f_2578), "ABI31_F_BOA", 24);
				return true;
			}
		}
	}
	if (__LIB_2__::func_173(PLAYER::PLAYER_ID(), 0, 0, 1))
	{
		StringCopy(&(uParam0->f_2578), "ABI31_F_WAN", 24);
		return true;
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
	if (func_219(uParam0->f_174))
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
	if (__LIB_1__::func_976(uParam0) || __LIB_12__::func_663(uParam0->f_174, uParam0->f_743))
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
	func_233(uParam0);
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
			func_247(uParam0);
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
	bVar0 = func_254(uParam0);
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
		if (__LIB_12__::func_986(&(uParam0->f_206), &(uParam0->f_2575), bVar0, bVar1))
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

bool func_85(var uParam0)
{
	if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_13, 64))
	{
		return true;
	}
	if (__LIB_12__::func_924(uParam0) && func_272(uParam0))
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
	func_291(uParam0, 1);
}

void func_91(var uParam0)
{
	func_292();
	func_293(1, 0);
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
		__LIB_18__::func_769(uParam0, bVar0);
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
		if (uParam0->f_171 != 0 || func_294(uParam0))
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
	struct<4> Var1;
	iVar0 = iParam1;
	Var1 = { func_61(iParam1) };
	iLocal_48 = 0;
	if (iVar0 < 4)
	{
		CLOCK::PAUSE_CLOCK(false, 0);
		CLOCK::SET_CLOCK_TIME(15, 0, 0);
	}
	else
	{
		CLOCK::PAUSE_CLOCK(false, 0);
		CLOCK::SET_CLOCK_TIME(19, 10, 0);
	}
	__LIB_6__::func_413(joaat("WEATHER_GROUP_GOOD"), 0, 0, 1103626240 /* Float: 25f */);
	if (!bLocal_179)
	{
		if (iVar0 == 6)
		{
			__LIB_12__::func_994(&uLocal_180, -1633.25f, -1357.524f, 83.3966f, 0f, 0, 1, 0, 1, 0, 0, 1, 1);
		}
		else if (iVar0 == 0 && __LIB_12__::func_936(uParam0))
		{
			__LIB_12__::func_994(&uLocal_180, -1639.031f, -1362.668f, 83.4029f, 0f, 0, 1, 0, 1, 0, 0, 1, 1);
		}
		else
		{
			__LIB_12__::func_994(&uLocal_180, Var1, Var1.f_3, 0, 0, 0, 1, 0, 0, 1, 1);
		}
		bLocal_179 = true;
	}
	__LIB_1__::func_971(0);
	WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
	WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 1, false, false);
	switch (iVar0)
	{
		case 0:
			if (__LIB_12__::func_936(uParam0))
			{
				if (!__LIB_10__::func_926(&uLocal_180))
				{
					return 2;
				}
				func_291(uParam0, 1);
				__LIB_12__::func_997(uParam0, func_61(0), func_61(1), 0, 1, 0);
				if (!__LIB_0__::func_1(uParam0->f_172, 1))
				{
					return 2;
				}
				bLocal_179 = false;
				return 5;
			}
			else
			{
				if (__LIB_4__::func_511())
				{
					__LIB_12__::func_997(uParam0, func_61(0), func_61(1), 0, 1, 0);
				}
				if (!func_303(uParam0))
				{
					return 2;
				}
				if (!func_304())
				{
					return 2;
				}
				__LIB_0__::func_401(-392430949);
				__LIB_0__::func_401(634752926);
				func_306(0);
				func_293(3, 0);
				if (!__LIB_10__::func_926(&uLocal_180))
				{
					return 2;
				}
				if (!func_307())
				{
					return 2;
				}
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, Var1, Var1.f_3, true, false, true);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_67, -1645.16f, -1379.239f, 82.97265f, func_207(3), true, false, true);
				__LIB_0__::func_569(joaat("MOTIONSTATE_WALK"), 3000, 0, 1, 1, 0, 0, 0);
				if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
				{
					CAM::DO_SCREEN_FADE_IN(500);
				}
				bLocal_179 = false;
			}
			return 7;
		case 1:
			if (__LIB_4__::func_511())
			{
				func_309();
				if (!func_303(uParam0))
				{
					return 2;
				}
				if (!func_304())
				{
					return 2;
				}
				if (!func_310())
				{
					return 2;
				}
				if (!func_311(uParam0))
				{
					return 2;
				}
				if (!func_312())
				{
					return 2;
				}
				func_291(uParam0, 2);
				if (!__LIB_0__::func_1(uParam0->f_172, 1))
				{
					return 2;
				}
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_124, false);
				func_306(3);
				bLocal_179 = false;
				__LIB_12__::func_997(uParam0, func_61(1), func_61(2), 1, 2, 0);
				return 5;
			}
			else
			{
				if (__LIB_4__::func_511())
				{
					__LIB_12__::func_997(uParam0, func_61(1), func_61(2), 1, 2, 0);
				}
				func_309();
				if (!func_303(uParam0))
				{
					return 2;
				}
				if (!func_304())
				{
					return 2;
				}
				if (!__LIB_0__::func_266(Global_35, Var1, 2f, 1, 1))
				{
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, Var1, Var1.f_3, true, false, true);
				}
				if (!func_310())
				{
					return 2;
				}
				if (!func_311(uParam0))
				{
					return 2;
				}
				if (!__LIB_10__::func_926(&uLocal_180))
				{
					return 2;
				}
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_124, func_206(8), func_207(8), true, false, true);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_67, func_206(16), func_207(16), true, false, true);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_124, false);
				func_291(uParam0, 3);
				func_306(3);
				if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
				{
					CAM::DO_SCREEN_FADE_IN(500);
				}
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_124, false);
				bLocal_179 = false;
				return 7;
			}
			break;
		case 2:
			if (__LIB_4__::func_511())
			{
				func_309();
				if (!func_303(uParam0))
				{
					return 2;
				}
				if (!func_304())
				{
					return 2;
				}
				if (!func_311(uParam0))
				{
					return 2;
				}
				if (!func_310())
				{
					return 2;
				}
				if (!func_313())
				{
					return 2;
				}
				func_306(4);
				func_291(uParam0, 3);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_124, false);
				if (!__LIB_0__::func_1(uParam0->f_172, 1))
				{
					return 2;
				}
				bLocal_179 = false;
				__LIB_12__::func_997(uParam0, func_61(2), func_61(3), 2, 3, 0);
				return 5;
			}
			else
			{
				if (__LIB_4__::func_511())
				{
					__LIB_12__::func_997(uParam0, func_61(2), func_61(3), 2, 3, 0);
				}
				func_309();
				if (!func_303(uParam0))
				{
					return 2;
				}
				if (!func_304())
				{
					return 2;
				}
				if (!func_311(uParam0))
				{
					return 2;
				}
				if (!func_313())
				{
					return 2;
				}
				if (!__LIB_10__::func_926(&uLocal_180))
				{
					return 2;
				}
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_124, func_206(8), func_207(8), true, false, true);
				if ((func_314(4, 0, 0) && func_314(5, 0, 0)) && ENTITY::DOES_ENTITY_EXIST(iLocal_112))
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_1641[4 /*5*/], false))
					{
						func_315(4);
						ANIMSCENE::START_ANIM_SCENE(Local_1641[4 /*5*/]);
					}
					if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_1641[5 /*5*/], false))
					{
						func_315(5);
						ANIMSCENE::START_ANIM_SCENE(Local_1641[5 /*5*/]);
					}
				}
				else
				{
					return 2;
				}
				func_306(4);
				func_291(uParam0, 4);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_124, false);
				if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
				{
					CAM::DO_SCREEN_FADE_IN(500);
				}
				bLocal_179 = false;
				return 7;
			}
			break;
		case 3:
			if (__LIB_4__::func_511())
			{
				__LIB_12__::func_997(uParam0, func_61(3), func_61(4), 3, 4, 0);
			}
			func_309();
			if (!func_303(uParam0))
			{
				return 2;
			}
			if (!func_304())
			{
				return 2;
			}
			if (!__LIB_10__::func_926(&uLocal_180))
			{
				return 2;
			}
			if (!func_311(uParam0))
			{
				return 2;
			}
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_124, func_206(8), func_207(8), true, false, true);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_67, func_206(41), func_207(41), true, false, true);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_70, func_206(27), func_207(27), true, false, true);
			func_316(2);
			func_306(5);
			func_317();
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_124, false);
			if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
			bLocal_179 = false;
			__LIB_12__::func_997(uParam0, func_61(3), func_61(4), 3, 4, 0);
			return 7;
		case 4:
			func_318();
			func_309();
			if (!func_303(uParam0))
			{
				return 2;
			}
			if (!func_304())
			{
				return 2;
			}
			if (!func_319(1))
			{
				return 2;
			}
			if (!__LIB_10__::func_926(&uLocal_180))
			{
				return 2;
			}
			if (!func_311(uParam0))
			{
				return 2;
			}
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_124, func_206(8), func_207(8), true, false, true);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_128, func_206(10), func_207(10), true, false, true);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, func_206(52), func_207(52), true, false, true);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_67, func_206(52), func_207(52), true, false, true);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_70, func_206(27), func_207(27), true, false, true);
			func_316(2);
			func_306(7);
			if (func_320())
			{
				func_291(uParam0, 5);
			}
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_124, false);
			if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
			bLocal_179 = false;
			__LIB_12__::func_997(uParam0, func_61(4), func_61(5), 4, 5, 0);
			return 7;
		case 5:
			VEHICLE::REQUEST_VEHICLE_ASSET(joaat("ROWBOAT"), 47);
			func_318();
			__LIB_1__::func_408(-639037538, 1, 0);
			if (!func_303(uParam0))
			{
				return 2;
			}
			if (!func_304())
			{
				return 2;
			}
			if (!func_319(1))
			{
				return 2;
			}
			if (!CAM::_0xDD0B7C5AE58F721D("vehicles@boat_cam") && !CAM::_0xC285FD21294A1C49("vehicles@boat_cam"))
			{
				CAM::_0x6A4D224FC7643941("vehicles@boat_cam");
			}
			if (!func_314(14, 0, 0))
			{
				return 2;
			}
			if (!CAM::_0xDD0B7C5AE58F721D("vehicles@boat_cam"))
			{
				return 2;
			}
			if (!__LIB_10__::func_926(&uLocal_180))
			{
				return 2;
			}
			if (!VEHICLE::HAS_VEHICLE_ASSET_LOADED(joaat("ROWBOAT")))
			{
				return 2;
			}
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_124, func_206(8), func_207(8), true, false, true);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, func_206(18), func_207(52), true, false, true);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_67, func_206(18), func_207(52), true, false, true);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_70, func_206(27), func_207(27), true, false, true);
			func_316(2);
			__LIB_11__::func_28(&Global_35, &iLocal_128, -1, 1);
			__LIB_11__::func_28(&iLocal_67, &iLocal_128, 1, 1);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(iLocal_128, -720.67f, -1380.78f, 40.58f, 266.92f, false, true);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			func_293(10, 0);
			if (!func_323(14, 0, 0))
			{
				return 2;
			}
			func_306(10);
			if (func_320())
			{
				func_291(uParam0, 5);
			}
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_124, false);
			if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
			bLocal_179 = false;
			return 7;
		case 6:
			if (__LIB_4__::func_511())
			{
				func_318();
				__LIB_1__::func_408(-639037538, 1, 0);
				if (!func_303(uParam0))
				{
					return 2;
				}
				if (!func_319(1))
				{
					return 2;
				}
				__LIB_11__::func_28(&Global_35, &iLocal_128, -1, 1);
				__LIB_11__::func_28(&iLocal_67, &iLocal_128, 1, 1);
				if (!func_320())
				{
					return 2;
				}
				func_291(uParam0, 5);
				func_306(12);
				return 5;
			}
			else
			{
				__LIB_10__::func_21(Global_35, 67);
				if (!func_303(uParam0))
				{
					return 2;
				}
				if (!func_319(1))
				{
					return 2;
				}
				if (!__LIB_10__::func_926(&uLocal_180))
				{
					return 2;
				}
				__LIB_1__::func_408(-639037538, 1, 0);
				func_306(12);
				func_291(uParam0, 6);
				bLocal_179 = false;
				return 5;
			}
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
		__LIB_18__::func_769(uParam0, 0);
		if (!__LIB_0__::func_1(uParam0->f_172, 1048576))
		{
			return false;
		}
	}
	else
	{
		__LIB_12__::func_668();
		__LIB_12__::func_669(uParam0);
		if (!func_331(uParam0))
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
	switch (iLocal_50)
	{
		case 1:
			__LIB_1__::func_951(&iLocal_90);
			__LIB_1__::func_148(&uLocal_368);
			return 7;
		case 2:
			return 7;
		case 4:
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
			__LIB_0__::func_45("ABI31_H_SC", 10000, 0, 0, 0, 1);
			__LIB_1__::func_432(500, 0, 0, 1, 1);
			return 7;
		case 5:
			if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
			{
				CAM::DO_SCREEN_FADE_OUT(0);
			}
			__LIB_2__::func_919(Global_35, 0, 0);
			ENTITY::SET_ENTITY_COORDS(Global_35, -1633.25f, -1357.524f, 83.3966f, true, false, true, true);
			__LIB_12__::func_994(&uLocal_180, -1633.25f, -1357.524f, 83.3966f, 0f, 0, 1, 0, 1, 0, 0, 1, 1);
			ENTITY::SET_ENTITY_COORDS(iLocal_67, -1634.487f, -1359.77f, 83.3966f, true, false, true, true);
			func_291(uParam0, 6);
			func_345(joaat("PROVISION_MARYS_RING"), 1, 1, -1387038764, 0);
			return 5;
		case 6:
			func_346(0);
			return 7;
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
	func_292();
	func_349();
	func_350();
	func_318();
	func_351();
	switch (iLocal_47)
	{
		case 0:
			if (func_352(uParam0))
			{
				func_306(1);
			}
			break;
		case 1:
			if (bLocal_141)
			{
				func_291(uParam0, 2);
			}
			if (func_353(uParam0))
			{
				func_306(3);
				return 5;
			}
			break;
		case 3:
			if (bLocal_92)
			{
				func_291(uParam0, 3);
			}
			if (func_354(uParam0))
			{
				func_306(4);
				return 5;
			}
			break;
		case 4:
			if (func_355())
			{
				if (!__LIB_0__::func_1(uParam0->f_172, 16))
				{
					func_291(uParam0, 4);
				}
			}
			if (func_356(uParam0))
			{
				if (!__LIB_0__::func_1(uParam0->f_172, 16))
				{
					func_291(uParam0, 4);
				}
				func_306(5);
				MISC::_0x2FCD528A397E5C88(iLocal_267, 8);
				return 6;
			}
			break;
		case 5:
			if (func_357(uParam0))
			{
				func_306(6);
			}
			break;
		case 6:
			if (func_358(uParam0))
			{
				func_306(7);
			}
			break;
		case 7:
			if (func_359(uParam0))
			{
				func_306(8);
			}
			break;
		case 8:
			CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME_2();
			if (func_360())
			{
				func_306(9);
			}
			break;
		case 9:
			if (func_361(uParam0))
			{
				func_306(10);
			}
			break;
		case 10:
			if (func_320())
			{
				func_291(uParam0, 5);
			}
			if (func_362(uParam0))
			{
				func_306(12);
				return 5;
			}
			break;
		case 12:
			__LIB_12__::func_773(0, 1, 1, 1);
			__LIB_1__::func_538(0);
			CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME_2();
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			if (!bLocal_133)
			{
				if (func_365())
				{
					bLocal_133 = true;
				}
			}
			if (func_346(0))
			{
				func_306(11);
			}
			break;
		case 11:
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			func_366();
			if (iLocal_1728 >= 2)
			{
				return 8;
			}
			break;
	}
	return 7;
}

void func_122(var uParam0)
{
	int iVar0;
	func_345(joaat("PROVISION_MARYS_RING"), 1, 1, -1387038764, 0);
	__LIB_1__::func_683(&(Global_40.f_9028.f_12), 64);
	iVar0 = 12;
	__LIB_12__::func_872(iVar0, -15);
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
				__LIB_12__::func_65(iParam0);
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
		func_404(Global_1347702[iParam0 /*49*/].f_15, bParam4, bParam2, bParam6, bParam5);
	}
	else
	{
		__LIB_1__::func_809(Global_1347702[iParam0 /*49*/].f_15, bParam6);
	}
	__LIB_10__::func_833(iParam0);
}

bool func_150(var uParam0)
{
	func_431(uParam0);
	if (__LIB_12__::func_644(uParam0) == 0)
	{
		if (iLocal_1728 < 2)
		{
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_1956580.f_1), 5);
		}
		if (!func_366())
		{
			return false;
		}
	}
	return true;
}

void func_159(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	func_431(uParam0);
	__LIB_5__::func_441("nav_mesh_beech_barn_finished");
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_67))
	{
		AUDIO::STOP_PED_SPEAKING(iLocal_67, false);
	}
	__LIB_19__::func_479(13, 1, 1, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
	func_168(4, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0);
	if (__LIB_12__::func_644(uParam0) == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_124))
		{
			VEHICLE::DELETE_VEHICLE(&iLocal_124);
		}
	}
	__LIB_10__::func_284(&iLocal_124);
	__LIB_10__::func_284(&iLocal_128);
	__LIB_1__::func_951(&iLocal_90);
	__LIB_4__::func_866(&iLocal_98, 1, 1);
	__LIB_4__::func_866(&iLocal_95, 1, 1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_89);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_87);
	iVar0 = 0;
	while (iVar0 <= (16 - 1))
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1641[iVar0 /*5*/]))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(Local_1641[iVar0 /*5*/]);
		}
		iVar0++;
	}
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
	__LIB_19__::func_479(iParam0, 0, 0, bParam1, fParam2, bParam3, bParam4, bParam5, bParam6, 0, 0);
	__LIB_0__::func_904(iParam0, 0);
	__LIB_0__::func_745(iParam0);
}

void func_188()
{
	Local_1641[0 /*5*/].f_1 = "script@rcm@abi3@leadin@rsc1@base";
	Local_1641[0 /*5*/].f_2 = "Main";
	Local_1641[1 /*5*/].f_1 = "script@rcm@abi3@leadin@rsc1@leadin";
	Local_1641[1 /*5*/].f_2 = "Main";
	Local_1641[2 /*5*/].f_1 = "script@rcm@abi3@ig@stage_01@ig10_helpabigailontowagon@ig10_helpabigailontowagon";
	Local_1641[2 /*5*/].f_2 = "";
	Local_1641[3 /*5*/].f_1 = "script@rcm@abi3@ig@stage_01@ig1_walktophotographer@ig1_walktophotographer";
	Local_1641[3 /*5*/].f_2 = "pl_walkntalk";
	Local_1641[4 /*5*/].f_1 = "script@rcm@abi3@ig@stage_01@ig6_choosebackground@ig6_choosebackground";
	Local_1641[4 /*5*/].f_2 = "pl_idling_FWD";
	Local_1641[5 /*5*/].f_1 = "script@rcm@abi3@ig@stage_01@ig6_choosebackground@ig6_choosebackground_photographer";
	Local_1641[5 /*5*/].f_2 = "pl_Idling_Photographer";
	Local_1641[6 /*5*/].f_1 = "script@rcm@ABI3@IG@Stage_01@IG2_PhotoPose@IG2_PhotoPose";
	Local_1641[6 /*5*/].f_2 = "pl_Pose_A_Idle";
	Local_1641[7 /*5*/].f_1 = "script@rcm@abi3@ig@stage_01@ig2_photopose@ig2_photopose_photographer";
	Local_1641[7 /*5*/].f_2 = "pl_idles";
	Local_1641[8 /*5*/].f_1 = "script@rcm@abi3@ig@ig_4_goingonadate@ig_4_goinonadate";
	Local_1641[8 /*5*/].f_2 = "pbl_movingpictureshow";
	Local_1641[9 /*5*/].f_1 = "script@rcm@abi3@ig@stage_01@ig8_holddoorexterior@ig8_holddoorexterior";
	Local_1641[9 /*5*/].f_2 = "pl_Enter_Door";
	Local_1641[10 /*5*/].f_1 = "script@rcm@abi3@ig@stage_01@ig9_holddoorinterior@ig9_holddoorinterior";
	Local_1641[10 /*5*/].f_2 = "pl_Enter_Idle";
	Local_1641[11 /*5*/].f_1 = "script@rcm@abi3@ig@ig3_watchingfilm@ig3_watchingfilm";
	Local_1641[11 /*5*/].f_2 = func_458(0);
	Local_1641[12 /*5*/].f_1 = "script@rcm@abi3@ig@stage_01@ig4_walkntalk@ig4_walkntalk";
	Local_1641[12 /*5*/].f_2 = "pl_WalkNTalk";
	Local_1641[13 /*5*/].f_1 = "script@rcm@abi3@ig@ig5_getinboat@ig5_getinboat";
	Local_1641[13 /*5*/].f_2 = "pl_GetIn_Land";
	Local_1641[14 /*5*/].f_1 = "script@rcm@abi3@ig@ig5_getinboat@ig5_idlesinboat";
	Local_1641[14 /*5*/].f_2 = "pl_Base";
	Local_1641[15 /*5*/].f_1 = "script@rcm@abi3@ig@stage_01@ig11_fence_sit@ig11_fence_sit";
	Local_1641[15 /*5*/].f_2 = "pl_WalkUp";
}

void func_189()
{
	Local_273[0 /*8*/].f_1 = { -811.5374f, -1375.802f, 44.4959f };
	Local_273[0 /*8*/].f_4 = { 0.1697f, 0f, 84.6106f };
	Local_273[0 /*8*/].f_7 = 51.282f;
	Local_273[1 /*8*/].f_1 = { -810.3845f, -1375.745f, 44.6952f };
	Local_273[1 /*8*/].f_4 = { -5.6848f, 0f, 60.5856f };
	Local_273[1 /*8*/].f_7 = 38.1778f;
	Local_273[2 /*8*/].f_1 = { -812.5682f, -1374.724f, 44.4911f };
	Local_273[2 /*8*/].f_4 = { 0.6423f, 0f, 89.2399f };
	Local_273[2 /*8*/].f_7 = 35.1257f;
	Local_273[3 /*8*/].f_1 = { -783.7311f, -1363.975f, 44.8674f };
	Local_273[3 /*8*/].f_4 = { -2.3261f, -0.1568f, -93.0758f };
	Local_273[3 /*8*/].f_7 = 30.7199f;
}

Vector3 func_206(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1637.182f, -1363.268f, 83.4566f;
		case 1:
			return -1638.037f, -1362.747f, 83.4154f;
		case 2:
			return -1649.257f, -1377.159f, 82.964f;
		case 3:
			return -1648.892f, -1379.462f, 82.9681f;
		case 4:
			return -1639.07f, -1361.8f, 83.3963f;
		case 5:
			return -1640.175f, -1349.222f, 82.9645f;
		case 6:
			return -1639.36f, -1361.69f, 83.71f;
		case 7:
			return -1631.63f, -1392.56f, 84.04f;
		case 8:
			return -803.4208f, -1356.068f, 42.6117f;
		case 9:
			return -736.2218f, -1386.159f, 41.6245f;
		case 10:
			return -723.3638f, -1385.355f, 40.6722f;
		case 11:
			return -637.859f, -1351.34f, 40.5f;
		case 12:
			return -724.5291f, -1386.677f, 41.5366f;
		case 13:
			return -725.2875f, -1386.631f, 41.562f;
		case 14:
			return -821.0524f, -1291.958f, 52.5716f;
		case 15:
			return -805.6536f, -1358.234f, 42.6396f;
		case 16:
			return -807.4793f, -1357.832f, 42.6479f;
		case 17:
			return -807.7739f, -1372.539f, 42.6711f;
		case 18:
			return -730.81f, -1385.43f, 40.8644f;
		case 22:
			return -809.6985f, -1374.368f, 43.0233f;
		case 28:
			return -814.4969f, -1375.312f, 43.2283f;
		case 29:
			return -814.5736f, -1374.483f, 43.2267f;
		case 23:
			return -811.2937f, -1372.482f, 43.0233f;
		case 24:
			return -812.2197f, -1374.073f, 43.0233f;
		case 25:
			return -810.098f, -1373.919f, 43.0233f;
		case 26:
			return -812.1721f, -1375.268f, 43.0233f;
		case 27:
			return -811.2576f, -1374.725f, 43.0233f;
		case 30:
			return -811.78f, -1374.95f, 44.95f;
		case 31:
			return -815.8605f, -1374.709f, 44.84257f;
		case 32:
			return -775.6129f, -1360.775f, 42.75766f;
		case 33:
			return -781.2982f, -1359.225f, 43.32217f;
		case 34:
			return -788.04f, -1359.25f, 42.82f;
		case 35:
			return -775.6241f, -1359.99f, 42.75945f;
		case 36:
			return -775.6149f, -1365.964f, 42.75939f;
		case 37:
			return -788.13f, -1360.4f, 42.82f;
		case 38:
			return -791.4093f, -1366.017f, 42.9258f;
		case 39:
			return -806.9867f, -1371.509f, 43.6161f;
		case 40:
			return -793.8678f, -1366.267f, 43.82f;
		case 41:
			return -807.68f, -1370.08f, 42.66f;
		case 42:
			return -793.5728f, -1368.482f, 42.5761f;
		case 43:
			return -793.7359f, -1367.062f, 43.82f;
		case 44:
			return -793.7336f, -1367.057f, 43.82f;
		case 19:
			return -789.8535f, -1362.626f, 43.8223f;
		case 20:
			return -788.7223f, -1362.653f, 43.8178f;
		case 21:
			return -786.8077f, -1363.845f, 43.8532f;
		case 46:
			return -781.0928f, -1364.509f, 42.8066f;
		case 47:
			return -781.1207f, -1363.929f, 42.8095f;
		case 45:
			return -791.1965f, -1366.185f, 42.9258f;
		case 48:
			return -790.1886f, -1366.127f, 42.8223f;
		case 49:
			return -789.5485f, -1365.956f, 42.8223f;
		case 50:
			return -707.9318f, -1404.889f, 45.6842f;
		case 51:
			return -750.8922f, -1382.503f, 42.3781f;
		case 52:
			return -748.9951f, -1384.657f, 42.4745f;
		case 53:
			return -1579.442f, -1406.865f, 80.2726f;
		case 54:
			return -1574.737f, -1406.985f, 80.74561f;
		case 55:
			return -1572.725f, -1406.995f, 80.84593f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_207(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 114.3195f;
		case 1:
			return 292.5111f;
		case 2:
			return 261.1712f;
		case 3:
			return 244.1729f;
		case 4:
			return 0f;
		case 5:
			return 335.7933f;
		case 6:
			return 35.45f;
		case 7:
			return 299.48f;
		case 8:
			return 5.2612f;
		case 10:
			return -94.52f;
		case 11:
			return 305.7476f;
		case 12:
			return 358.8398f;
		case 13:
			return -125.71f;
		case 15:
			return 180f;
		case 16:
			return 180f;
		case 17:
			return 162.6791f;
		case 18:
			return 302.2727f;
		case 28:
			return 275.2018f;
		case 29:
			return 250.2108f;
		case 23:
			return 181.3684f;
		case 24:
			return 330.8595f;
		case 25:
			return 20.5591f;
		case 26:
			return 96.5592f;
		case 27:
			return 93.7275f;
		case 32:
			return -88.74f;
		case 33:
			return -88.74f;
		case 34:
			return 173.17f;
		case 35:
			return -88.74f;
		case 36:
			return -88.74f;
		case 37:
			return 2.31f;
		case 38:
			return 4f;
		case 39:
			return 342.7454f;
		case 40:
			return 85.42f;
		case 41:
			return 342.8164f;
		case 43:
			return -75.12f;
		case 44:
			return -74.23f;
		case 19:
			return -90.36f;
		case 20:
			return 98.1846f;
		case 21:
			return 93.76f;
		case 46:
			return 272.1589f;
		case 47:
			return 282.989f;
		case 48:
			return 87.7667f;
		case 49:
			return 50f;
		case 51:
			return 276f;
		case 52:
			return 268.876f;
		case 50:
			return 268.876f;
		case 53:
			return 310.824f;
		case 54:
			return 34.8236f;
		case 55:
			return 30.2401f;
		default:
			break;
	}
	return 0f;
	return 0f;
}

int func_208(vector3 vParam0, var uParam3)
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
		iVar0 = func_495(0, 0);
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

bool func_219(int iParam0)
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

void func_233(var uParam0)
{
	func_431(uParam0);
}

void func_247(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_172, 16))
	{
		__LIB_12__::func_966(uParam0, 0);
		func_87(uParam0);
	}
}

int func_254(var uParam0)
{
	if (uParam0->f_177 == 6)
	{
		return 1;
	}
	else if (uParam0->f_177 == 2)
	{
		return 1;
	}
	else if (func_551(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_272(var uParam0)
{
	int iVar0;
	if (!bLocal_135)
	{
		iVar0 = 1;
		if (!func_303(uParam0))
		{
			iVar0 = 0;
		}
		if (!__LIB_12__::func_639(uParam0, 64) || __LIB_12__::func_936(uParam0))
		{
			if ((!func_582() || !func_583(uParam0)) || !func_584())
			{
				iVar0 = 0;
			}
		}
		if (iVar0 == 0)
		{
			return 0;
		}
	}
	if (!AUDIO::_0xD9130842D7226045("ABIGAIL_3_SOUNDSET", 0))
	{
		return 0;
	}
	bLocal_135 = true;
	func_585(uParam0);
	if (iLocal_49 < 2)
	{
		return 0;
	}
	__LIB_5__::func_441("nav_mesh_beech_abigail3");
	__LIB_3__::func_229(937);
	__LIB_3__::func_229(935);
	__LIB_12__::func_875(uParam0, Global_35, "JOHN", 1);
	__LIB_1__::func_948(1606546482, 0, 0f, 0, 0, 0, 0, 0);
	return 1;
}

void func_291(var uParam0, int iParam1)
{
	if (iParam1 != iLocal_50)
	{
		StringCopy(&(uParam0->f_2575), func_612(iParam1), 24);
		iLocal_50 = iParam1;
		switch (iLocal_50)
		{
			case 1:
				__LIB_12__::func_779(uParam0, func_206(1));
				__LIB_0__::func_88(&(uParam0->f_206), -2147483648);
				__LIB_12__::func_943(&(uParam0->f_206), -1645.325f, -1341.159f, 82.9685f, 244.7168f, 0);
				__LIB_12__::func_676(&(uParam0->f_206), "NormalStart");
				__LIB_12__::func_957(uParam0, Global_35, 0, 0, 0, 0);
				__LIB_12__::func_957(uParam0, iLocal_67, 0, 0, 0, 0);
				__LIB_12__::func_957(uParam0, iLocal_73, 0, 0, 0, 0);
				__LIB_12__::func_957(uParam0, iLocal_90, 0, 0, 0, 0);
				__LIB_12__::func_981(uParam0, 103030);
				break;
			case 2:
				__LIB_12__::func_779(uParam0, func_206(8));
				__LIB_12__::func_957(uParam0, Global_35, 0, 0, 0, 0);
				__LIB_12__::func_957(uParam0, iLocal_67, 0, 0, 0, 0);
				__LIB_12__::func_957(uParam0, iLocal_124, "wagon02x", 0, 0, 0);
				__LIB_12__::func_957(uParam0, iLocal_91, "s_inv_ring02x", 0, 0, 0);
				__LIB_12__::func_957(uParam0, iLocal_125[0], "Horse01^1", 0, 0, 0);
				__LIB_12__::func_957(uParam0, iLocal_125[1], "Horse01", 0, 0, 0);
				__LIB_12__::func_957(uParam0, iLocal_79, "RCES_ABIGAIL3_FEMALES_01", 0, 0, 0);
				__LIB_12__::func_957(uParam0, iLocal_80, "RCES_ABIGAIL3_FEMALES_01^1", 0, 0, 0);
				__LIB_12__::func_957(uParam0, iLocal_78, "RCES_ABIGAIL3_MALES_01", 0, 0, 0);
				__LIB_12__::func_676(&(uParam0->f_206), "2. Backward_facing_wagon");
				__LIB_0__::func_88(&(uParam0->f_206), 134217728);
				__LIB_12__::func_981(uParam0, 103030);
				break;
			case 3:
				__LIB_12__::func_779(uParam0, func_206(23));
				if (!__LIB_4__::func_511())
				{
					__LIB_12__::func_944(uParam0, &(uParam0->f_2575), 1);
					__LIB_12__::func_956(&(uParam0->f_753), Global_35, 0, 0);
					__LIB_12__::func_956(&(uParam0->f_753), iLocal_67, 0, 0);
					__LIB_12__::func_956(&(uParam0->f_753), iLocal_70, "Photographer", 0);
					__LIB_12__::func_956(&(uParam0->f_753), iLocal_94, "P_CAMERABOX01X", 0);
					__LIB_12__::func_956(&(uParam0->f_753), iLocal_95, "P_SCREWDRIVER01X", 0);
				}
				__LIB_12__::func_957(uParam0, Global_35, 0, 0, 0, 0);
				__LIB_12__::func_957(uParam0, iLocal_67, 0, 0, 0, 0);
				__LIB_12__::func_957(uParam0, iLocal_70, "Photographer", 0, 0, 0);
				__LIB_12__::func_957(uParam0, iLocal_94, "P_CAMERABOX01X", 0, 0, 0);
				__LIB_12__::func_957(uParam0, iLocal_95, "P_SCREWDRIVER01X", 0, 0, 0);
				__LIB_12__::func_957(uParam0, iLocal_97, "P_STUDIOCAMERA01X", 0, 0, 0);
				__LIB_12__::func_846(&(uParam0->f_206));
				__LIB_12__::func_981(uParam0, 103030);
				break;
			case 4:
				__LIB_12__::func_779(uParam0, func_206(22));
				__LIB_12__::func_957(uParam0, Global_35, 0, 0, 0, 0);
				__LIB_12__::func_957(uParam0, iLocal_67, 0, 0, 0, 0);
				__LIB_12__::func_957(uParam0, iLocal_70, "Photographer", 0, 0, 0);
				__LIB_12__::func_957(uParam0, iLocal_97, "P_STUDIOCAMERA01X", 0, 0, 0);
				__LIB_12__::func_957(uParam0, iLocal_104[0], "p_chair12bx", 0, 0, 0);
				__LIB_12__::func_957(uParam0, iLocal_104[1], "p_chair12bx^1", 0, 0, 0);
				__LIB_12__::func_957(uParam0, iLocal_107[0], "p_cs_billSingle01x", 0, 0, 0);
				__LIB_12__::func_957(uParam0, iLocal_107[1], "p_cs_billSingle01x^1", 0, 0, 0);
				__LIB_12__::func_957(uParam0, iLocal_110, "P_CS_PHOTO_4X6", 0, 0, 0);
				__LIB_12__::func_909(&(uParam0->f_206));
				__LIB_12__::func_981(uParam0, 103030);
				break;
			case 5:
				__LIB_12__::func_779(uParam0, func_206(11));
				__LIB_12__::func_957(uParam0, Global_35, 0, 0, 0, 0);
				__LIB_12__::func_957(uParam0, iLocal_67, 0, 0, 0, 0);
				__LIB_12__::func_957(uParam0, iLocal_128, "rowboat", 0, 0, 0);
				__LIB_12__::func_957(uParam0, iLocal_91, "s_inv_ring02x", 0, 0, 0);
				__LIB_12__::func_676(&(uParam0->f_206), "NormalStart");
				__LIB_0__::func_88(&(uParam0->f_206), 134217728);
				__LIB_0__::func_7(&(uParam0->f_206.f_404), 256);
				if (!__LIB_4__::func_511())
				{
					__LIB_0__::func_88(&(uParam0->f_206), 16384);
				}
				__LIB_0__::func_88(&(uParam0->f_206), 524288);
				__LIB_12__::func_981(uParam0, 103030);
				break;
			case 6:
				__LIB_12__::func_909(&(uParam0->f_206));
				__LIB_12__::func_957(uParam0, Global_35, 0, 0, 0, 0);
				__LIB_12__::func_957(uParam0, iLocal_67, 0, 0, 0, 0);
				__LIB_12__::func_981(uParam0, 103030);
				__LIB_12__::func_982(uParam0, 105060);
				break;
		}
		__LIB_0__::func_7(&(uParam0->f_172), 16);
	}
}

void func_292()
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_67))
	{
		switch (iLocal_51)
		{
			case 1:
				break;
			case 3:
				break;
			case 6:
				break;
			case 7:
				break;
			case 5:
				break;
		}
	}
}

void func_293(int iParam0, bool bParam1)
{
	int iVar0;
	if (ENTITY::IS_ENTITY_DEAD(iLocal_67))
	{
		return;
	}
	if (iLocal_51 != iParam0)
	{
		iLocal_51 = iParam0;
	}
	else if (bParam1 && iLocal_51 == iParam0)
	{
	}
	else
	{
		return;
	}
	if (bLocal_155)
	{
		bLocal_155 = false;
	}
	switch (iLocal_51)
	{
		case 0:
			break;
		case 4:
			if (!bLocal_155)
			{
				func_623();
				bLocal_155 = true;
			}
			break;
		case 3:
			break;
		case 5:
			break;
		case 1:
			break;
		case 2:
			TASK::CLEAR_PED_TASKS(iLocal_67, true, false);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_67, Global_35, -1, -1f, __LIB_3__::func_745(30f), -1f);
			break;
		case 7:
			if (PED::IS_PED_HEADTRACKING_PED(iLocal_67, Global_35))
			{
				TASK::TASK_CLEAR_LOOK_AT(iLocal_67);
			}
			break;
		case 8:
			TASK::CLEAR_PED_TASKS(iLocal_67, true, false);
			TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_67, 0, 0);
			break;
		case 9:
			break;
		case 10:
			PED::SET_PED_CONFIG_FLAG(iLocal_67, 3, false);
			break;
		case 11:
			TASK::CLEAR_PED_TASKS(iLocal_67, true, false);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_206(25), 1.1f, -1, 0.25f, 0, 40000f);
			TASK::TASK_ACHIEVE_HEADING(0, func_207(25), 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_67, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			break;
		case 12:
			TASK::CLEAR_PED_TASKS(iLocal_67, true, false);
			TASK::TASK_LOOK_AT_COORD(iLocal_67, -810.44f, -1374.727f, 44.8652f, -1, 0, 51, 0);
			break;
		case 13:
		case 14:
			break;
		case 15:
			break;
	}
}

bool func_294(var uParam0)
{
	if (func_585(uParam0))
	{
		return true;
	}
	if (iLocal_49 >= 4)
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_1641[1 /*5*/], false) || ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(Local_1641[1 /*5*/]))
		{
			if (bLocal_136)
			{
				PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "RABI3");
				bLocal_136 = false;
			}
			return true;
			iLocal_49 = 5;
		}
	}
	if (iLocal_49 >= 4)
	{
		if (__LIB_0__::func_393(Global_35, iLocal_256, 0, 1) && __LIB_3__::func_291(Global_35, 1))
		{
			bLocal_167 = true;
		}
		if (bLocal_167)
		{
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			__LIB_4__::func_516(1, 0);
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_73, joaat("INTERRUPT")))
			{
				if (bLocal_136)
				{
					PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "RABI3");
					bLocal_136 = false;
				}
				return true;
				iLocal_49 = 5;
			}
		}
	}
	return false;
}

bool func_303(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_67))
	{
		iLocal_67 = func_641(13, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, -1341683964, 1, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
		return false;
	}
	if (((!ENTITY::IS_ENTITY_DEAD(iLocal_67) && __LIB_1__::func_22(13)) && __LIB_0__::func_167(13) == iLocal_67) && PED::_0xA0BC8FAED8CFEB3C(iLocal_67))
	{
		PED::_SET_PED_BODY_COMPONENT(iLocal_67, 609066278);
		PED::_UPDATE_PED_VARIATION(iLocal_67, false, true, true, true, false);
		func_642(iLocal_67, func_206(0), func_207(0), 0);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_67, joaat("REL_PLAYER_ALLY"));
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_67, false);
		__LIB_12__::func_875(uParam0, iLocal_67, "ABIGAIL", 1);
		AUDIO::STOP_PED_SPEAKING(iLocal_67, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_67, 297, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_67, 315, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_67, 130, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_67, 331, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_67, 330, true);
		return true;
	}
	return false;
}

bool func_304()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_124))
	{
		iLocal_124 = VEHICLE::CREATE_VEHICLE(joaat("WAGON02X"), func_206(7), func_207(7), true, true, false, false);
		return false;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_124))
	{
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_124, false);
		VEHICLE::SET_VEHICLE_HAS_BEEN_OWNED_BY_PLAYER(iLocal_124, true);
		AITRANSPORT::_0xB7079F4C72896756(Global_35, iLocal_124, 0, 16, -1);
		AITRANSPORT::_0xB7079F4C72896756(iLocal_67, iLocal_124, 0, 16, 0);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_124, 1, true);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_124, 2, true);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_124, 3, true);
		VEHICLE::_SET_VEHICLE_TINT(iLocal_124, 5);
		VEHICLE::_SET_VEHICLE_LIVERY(iLocal_124, 0);
		VEHICLE::_0x226C6A4E3346D288(iLocal_124, 0);
		VEHICLE::SET_VEHICLE_WHEELS_CAN_BREAK(iLocal_124, false);
	}
	return true;
}

void func_306(int iParam0)
{
	if (iLocal_47 != iParam0)
	{
		iLocal_47 = iParam0;
		iLocal_48 = 0;
		if (iLocal_47 != 1)
		{
			__LIB_0__::func_769();
		}
		if (iLocal_47 == 11)
		{
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
		}
		__LIB_0__::func_37(&uLocal_236);
		func_643(iParam0);
	}
}

bool func_307()
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_124))
	{
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_125[1]))
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_125[0]))
	{
		iVar0 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_124, 0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iLocal_125[0] = iVar0;
			ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(iLocal_125[0], 1, 100);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_125[1]))
	{
		iVar0 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_124, 1);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iLocal_125[1] = iVar0;
			ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(iLocal_125[1], 1, 100);
		}
	}
	return false;
}

void func_309()
{
	if (!bLocal_248)
	{
		if (__LIB_1__::func_410(Global_36, func_206(8), 260f, 0))
		{
			if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_249))
			{
				iLocal_249 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-804.997f, -1355.383f, 43.925f, 0f, 0f, 0f, 78f, 84f, 3f, "RABI3_WagonBlock");
			}
			AUDIO::TRIGGER_MUSIC_EVENT("RABI3_NEAR_TOWN");
			__LIB_4__::func_587(1f, 0f, 0f, 0f);
			uLocal_250 = __LIB_1__::func_391(iLocal_249, 0, 0, 0);
			__LIB_3__::func_730(iLocal_249, 0, 0, 1, 1, 0);
			PATHFIND::_0xB03944057FD735BA(iLocal_249, 4, 0);
			bLocal_248 = true;
		}
	}
}

bool func_310()
{
	if (bLocal_92)
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_95))
	{
		iLocal_95 = OBJECT::CREATE_OBJECT(joaat("P_SCREWDRIVER01X"), -809.6866f, -1371.271f, 43.02329f, true, true, false, false, true);
		return false;
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_94))
	{
		if (iLocal_93 == 0)
		{
			iLocal_93 = ENTITY::_0x6F3068258A499E52(joaat("P_CAMERABOX01X"), -810.9f, -1371.72f, 44.07f, 7);
		}
		else if (ENTITY::_0x1FF441D7954F8709(iLocal_93))
		{
			iLocal_94 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(iLocal_93));
		}
		return false;
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_97))
	{
		if (iLocal_96 == 0)
		{
			iLocal_96 = ENTITY::_0x6F3068258A499E52(joaat("P_STUDIOCAMERA01X"), -811.8663f, -1374.738f, 43.0233f, 7);
		}
		else if (ENTITY::_0x1FF441D7954F8709(iLocal_96))
		{
			iLocal_97 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(iLocal_96));
		}
		return false;
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_100))
	{
		if (iLocal_99 == 0)
		{
			iLocal_99 = ENTITY::_0x6F3068258A499E52(joaat("P_CHAIR17X"), -811.5582f, -1371.53f, 43.0239f, 7);
		}
		else if (ENTITY::_0x1FF441D7954F8709(iLocal_99))
		{
			iLocal_100 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(iLocal_99));
		}
		return false;
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_98))
	{
		iLocal_98 = OBJECT::CREATE_OBJECT(joaat("P_CAMERAFLASH01X"), -809.5249f, -1371.321f, 43.02329f, true, true, false, false, true);
		return false;
	}
	ENTITY::SET_ENTITY_VISIBLE(iLocal_100, false);
	ENTITY::SET_ENTITY_VISIBLE(iLocal_98, false);
	bLocal_92 = true;
	return true;
}

bool func_311(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_70))
	{
		return true;
	}
	if (!bLocal_71)
	{
		if (__LIB_2__::func_763(514, 0))
		{
			AUDIO::STOP_PED_SPEAKING(iLocal_70, false);
			if (__LIB_2__::func_799(12))
			{
				__LIB_3__::func_820(12, 0);
			}
			__LIB_2__::func_753(514, 0, 1, 0, 0);
		}
		bLocal_71 = true;
		return false;
	}
	else
	{
		iLocal_70 = __LIB_2__::func_965(514, 1, 0, 0, 1, 1);
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_70))
		{
			func_642(iLocal_70, func_206(23), func_207(23), 0);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_70, joaat("REL_PLAYER_ALLY"));
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_70, false);
			PED::SET_PED_CONFIG_FLAG(iLocal_70, 448, true);
			AUDIO::STOP_PED_SPEAKING(iLocal_70, true);
			if (!__LIB_2__::func_799(12))
			{
				__LIB_3__::func_820(12, 1);
			}
			__LIB_12__::func_875(uParam0, iLocal_70, "BLW_Photographer", 1);
			return true;
		}
	}
	return false;
}

bool func_312()
{
	if (bLocal_141)
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_78))
	{
		iLocal_78 = __LIB_8__::func_931(joaat("RCES_ABIGAIL3_MALES_01"), func_206(14), 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_78, true);
		return false;
	}
	else if (PED::_0xA0BC8FAED8CFEB3C(iLocal_78))
	{
		PED::_SET_PED_BODY_COMPONENT(iLocal_78, -1481374961);
		PED::_UPDATE_PED_VARIATION(iLocal_78, false, true, true, true, false);
	}
	else
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_79))
	{
		iLocal_79 = __LIB_8__::func_931(joaat("RCES_ABIGAIL3_FEMALES_01"), func_206(14), 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_79, true);
		return false;
	}
	else if (PED::_0xA0BC8FAED8CFEB3C(iLocal_79))
	{
		PED::_SET_PED_BODY_COMPONENT(iLocal_79, -2018479607);
		PED::_UPDATE_PED_VARIATION(iLocal_79, false, true, true, true, false);
	}
	else
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_80))
	{
		iLocal_80 = __LIB_8__::func_931(joaat("RCES_ABIGAIL3_FEMALES_01"), func_206(14), 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_80, true);
		return false;
	}
	else if (PED::_0xA0BC8FAED8CFEB3C(iLocal_80))
	{
		PED::_SET_PED_BODY_COMPONENT(iLocal_80, -1858486478);
		PED::_UPDATE_PED_VARIATION(iLocal_80, false, true, true, true, false);
	}
	else
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_125[1]))
	{
		func_307();
	}
	bLocal_141 = true;
	return true;
}

bool func_313()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_112))
	{
		return true;
	}
	if (iLocal_111 == 0)
	{
		iLocal_111 = ENTITY::_0x6F3068258A499E52(joaat("P_BLA_PHOTO01X"), -817.1328f, -1375.047f, 44.5194f, 7);
	}
	else if (ENTITY::_0x1FF441D7954F8709(iLocal_111))
	{
		iLocal_112 = ENTITY::_0x4735E2A4BB83D9DA(iLocal_111);
	}
	return false;
}

bool func_314(int iParam0, int iParam1, char* sParam2)
{
	if (!Local_1641[iParam0 /*5*/].f_3)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1641[iParam0 /*5*/]))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_1641[iParam0 /*5*/], true, false))
			{
				if (iParam0 == 2)
				{
					ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(Local_1641[iParam0 /*5*/], iLocal_124, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_124, "seat_spring_exp"));
				}
				else if (iParam0 == 14)
				{
					ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(Local_1641[iParam0 /*5*/], iLocal_128, 0);
				}
				Local_1641[iParam0 /*5*/].f_3 = 1;
				return Local_1641[iParam0 /*5*/].f_3;
			}
		}
		else
		{
			if (MISC::IS_STRING_NULL(sParam2))
			{
				Local_1641[iParam0 /*5*/] = ANIMSCENE::_CREATE_ANIM_SCENE(Local_1641[iParam0 /*5*/].f_1, iParam1, Local_1641[iParam0 /*5*/].f_2, false, true);
			}
			else
			{
				Local_1641[iParam0 /*5*/] = ANIMSCENE::_CREATE_ANIM_SCENE(Local_1641[iParam0 /*5*/].f_1, iParam1, sParam2, false, true);
			}
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1641[iParam0 /*5*/]))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(Local_1641[iParam0 /*5*/]);
			}
		}
	}
	return Local_1641[iParam0 /*5*/].f_3;
}

void func_315(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1641[iParam0 /*5*/], "AbigailRoberts", iLocal_67, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1641[iParam0 /*5*/], "John", Global_35, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1641[iParam0 /*5*/], "WAGON", iLocal_124, 0);
			break;
		case 3:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1641[iParam0 /*5*/], "CS_AbigailRoberts", iLocal_67, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1641[iParam0 /*5*/], "John", Global_35, 0);
			break;
		case 4:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1641[iParam0 /*5*/], "AbigailRoberts", iLocal_67, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1641[iParam0 /*5*/], "John", Global_35, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1641[iParam0 /*5*/], "p_studiocamera01x", iLocal_97, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1641[iParam0 /*5*/], "p_cameraFlash01x", iLocal_98, 0);
			break;
		case 5:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1641[iParam0 /*5*/], "GENSTORYMALE", iLocal_70, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1641[iParam0 /*5*/], "p_studiocamera01x", iLocal_97, 0);
			break;
		case 6:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1641[iParam0 /*5*/], "AbigailRoberts", iLocal_67, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1641[iParam0 /*5*/], "John", Global_35, 0);
			break;
		case 7:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1641[iParam0 /*5*/], "BLWPHOTOGRAPHER", iLocal_70, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1641[iParam0 /*5*/], "p_cameraFlash01x", iLocal_98, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1641[iParam0 /*5*/], "p_studiocamera01x", iLocal_97, 0);
			break;
		case 8:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1641[iParam0 /*5*/], "ABIGAIL", iLocal_67, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1641[iParam0 /*5*/], "MARSTON", Global_35, 0);
			break;
		case 9:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1641[iParam0 /*5*/], "AbigailRoberts", iLocal_67, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1641[iParam0 /*5*/], "John", Global_35, 0);
			break;
		case 10:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1641[iParam0 /*5*/], "AbigailRoberts", iLocal_67, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1641[iParam0 /*5*/], "John", Global_35, 0);
			break;
		case 11:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1641[iParam0 /*5*/], "CS_AbigailRoberts", iLocal_67, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1641[iParam0 /*5*/], "PLAYER_THREE", Global_35, 0);
			break;
		case 12:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1641[iParam0 /*5*/], "AbigailRoberts", iLocal_67, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1641[iParam0 /*5*/], "John", Global_35, 0);
			break;
		case 13:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1641[iParam0 /*5*/], "CS_AbigailRoberts", iLocal_67, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1641[iParam0 /*5*/], "JOHN", Global_35, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1641[iParam0 /*5*/], "rowboat", iLocal_128, 0);
			break;
		case 14:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1641[iParam0 /*5*/], "CS_AbigailRoberts", iLocal_67, 0);
			break;
		case 15:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1641[iParam0 /*5*/], "JOHN", Global_35, 0);
			break;
	}
}

void func_316(int iParam0)
{
	if (iLocal_52 != iParam0 && !ENTITY::IS_ENTITY_DEAD(iLocal_70))
	{
		iLocal_52 = iParam0;
	}
	else
	{
		return;
	}
	switch (iLocal_52)
	{
		case 0:
			break;
		case 1:
			break;
		case 2:
			TASK::CLEAR_PED_TASKS(iLocal_70, true, false);
			TASK::TASK_PLAY_ANIM(iLocal_70, sLocal_1722, sLocal_1723, 8f, -8f, -1, 1, 0f, false, 0, false, 0, false);
			break;
	}
}

void func_317()
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
	__LIB_3__::func_4(Global_35, iLocal_67, &Var0, 0f, 0f, 0f, 0, 0, 1, 1069547520 /* Float: 1.5f */, -1082130432 /* Float: -1f */, 1073069561, 1056964608 /* Float: 0.5f */, 1092616192 /* Float: 10f */, -1, 1, 0, 0, 0, 1);
	func_655(iLocal_67, Global_35, &Var38, -1082130432 /* Float: -1f */, 0, 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1, 32, -0.8f, -0.2f, 1069547520 /* Float: 1.5f */, 1073741824 /* Float: 2f */, 1050253722 /* Float: 0.3f */, 0.6f, 0, 0, -1, 1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1);
	__LIB_1__::func_731(&uLocal_1624);
	if (!PED::IS_PED_HEADTRACKING_PED(Global_35, iLocal_67))
	{
		TASK::TASK_LOOK_AT_ENTITY(Global_35, iLocal_67, -1, 0, 51, 0);
	}
	if (!PED::IS_PED_HEADTRACKING_PED(iLocal_67, Global_35))
	{
		TASK::TASK_LOOK_AT_ENTITY(iLocal_67, Global_35, -1, 0, 51, 0);
	}
}

void func_318()
{
	if (!bLocal_152)
	{
		if (__LIB_1__::func_410(Global_36, func_206(10), 120f, 0))
		{
			if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_251))
			{
				iLocal_251 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(func_206(10), 0f, 0f, 0f, 30f, 30f, 12f, "RABI3_volBoatBlock");
			}
			uLocal_252 = __LIB_1__::func_391(iLocal_251, 0, 0, 0);
			__LIB_3__::func_730(iLocal_251, 0, 0, 1, 1, 0);
			bLocal_152 = true;
		}
	}
}

bool func_319(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_128))
	{
		iLocal_128 = VEHICLE::CREATE_VEHICLE(joaat("ROWBOAT"), func_206(10), func_207(10), true, true, false, false);
		PHYSICS::ACTIVATE_PHYSICS(iLocal_128);
		if (bParam0)
		{
			VEHICLE::SET_BOAT_ANCHOR(iLocal_128, true);
		}
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_128, 1, true);
		VEHICLE::_SET_VEHICLE_TINT(iLocal_128, 0);
		return false;
	}
	AITRANSPORT::_0x4B6C9A43F7D9109B(iLocal_128, 0);
	return true;
}

bool func_320()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_91))
	{
		iLocal_91 = OBJECT::CREATE_OBJECT(joaat("S_MARYRUBYRING01X"), func_206(11), true, true, false, false, true);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_91))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_91, true);
		return true;
	}
	return false;
}

bool func_323(int iParam0, int iParam1, char* sParam2)
{
	char* sVar0;
	if (func_314(iParam0, iParam1, sParam2))
	{
		func_315(iParam0);
		Local_1641[iParam0 /*5*/].f_3 = 1;
	}
	if (MISC::IS_STRING_NULL(sParam2))
	{
		sVar0 = Local_1641[iParam0 /*5*/].f_2;
	}
	else
	{
		sVar0 = sParam2;
	}
	if (Local_1641[iParam0 /*5*/].f_3)
	{
		if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_1641[iParam0 /*5*/], sVar0))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_1641[iParam0 /*5*/], sVar0);
		}
		else
		{
			if (!ANIMSCENE::_0x1F0E401031E20146(Local_1641[iParam0 /*5*/], sVar0))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_1641[iParam0 /*5*/], sVar0, true);
			}
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_1641[iParam0 /*5*/], false))
			{
				ANIMSCENE::START_ANIM_SCENE(Local_1641[iParam0 /*5*/]);
				if (iParam0 != 14 && iParam0 != 4)
				{
					PED::_0x2208438012482A1A(Global_35, false, false);
					PED::_0x2208438012482A1A(iLocal_67, false, false);
				}
				if (iParam0 == 7)
				{
					PED::_0x2208438012482A1A(iLocal_70, false, false);
				}
			}
			return true;
		}
	}
	return false;
}

bool func_331(var uParam0)
{
	__LIB_1__::func_725();
	if (iLocal_50 == 6)
	{
		func_291(uParam0, 6);
		if (bLocal_1619)
		{
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
		}
		if (!__LIB_10__::func_926(&uLocal_180))
		{
			if ((CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN()) || !CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_OUT(0);
			}
		}
		else if (!bLocal_1619)
		{
			AUDIO::_0x6339C1EA3979B5F7("Pass_Time", "Chapter_Screen_Scenes");
			if (!__LIB_0__::func_75(&uLocal_374))
			{
				__LIB_1__::func_283(&uLocal_374, 0);
			}
			bLocal_1619 = true;
			__LIB_12__::func_773(0, 1, 1, 1);
		}
		else
		{
			if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
			{
				if (__LIB_0__::func_264(&uLocal_374) > 5f && __LIB_0__::func_1(uParam0->f_172, 1))
				{
					CAM::DO_SCREEN_FADE_IN(500);
					AUDIO::_0x9428447DED71FC7E("Chapter_Screen_Scenes");
					return true;
				}
			}
			__LIB_12__::func_773(0, 1, 1, 1);
		}
		return false;
	}
	return true;
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
					__LIB_12__::func_988(uParam4, &uParam0, uParam5);
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
				if (__LIB_12__::func_986(uParam4, &uParam0, 1, 1))
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
					__LIB_12__::func_988(uParam4, &uParam0, uParam5);
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
			func_688(uParam4);
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
				__LIB_13__::func_60(uParam4);
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
				__LIB_13__::func_60(uParam4);
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

int func_345(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			func_345(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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
	__LIB_6__::func_701(iParam0, iParam1);
	return 1;
}

bool func_346(bool bParam0)
{
	CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
	__LIB_1__::func_725();
	func_314(15, 0, 0);
	func_714();
	PED::SET_PED_RESET_FLAG(Global_35, 103, true);
	__LIB_12__::func_773(0, 1, 1, 1);
	CAM::_0x702B75DC9D3EDE56(true);
	switch (iLocal_56)
	{
		case 0:
			TASK::REQUEST_WAYPOINT_RECORDING(sLocal_1726);
			CAM::_0x1B3C2D961F5FC0E1(sLocal_1725);
			func_715("script@cme@RABI3_CME_SHOT1_srl");
			iLocal_56 = 1;
			bLocal_133 = false;
			break;
		case 1:
			if (!bParam0)
			{
				if (STREAMING::IS_SRL_LOADED() && CAM::_0xAA235E2F2C09E952(sLocal_1725))
				{
					STATS::_0x025E98E317652CDD(2);
					MISC::SET_BIT(&(Global_1956580.f_1), 5);
					STREAMING::BEGIN_SRL();
					CLOCK::SET_CLOCK_TIME(5, 57, 0);
					CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(50);
					CAM::_0x02389579A53C3276(sLocal_1725, "1_Sunrise", "1_Sunrise_Cam", 6000);
					BUILTIN::SETTIMERA(0);
					iLocal_56 = 2;
				}
			}
			break;
		case 2:
			if (BUILTIN::TIMERA() >= 3000)
			{
				func_715("script@cme@RABI3_CME_SHOT2_srl");
				iLocal_56 = 3;
			}
			break;
		case 3:
			if (BUILTIN::TIMERA() >= 6000)
			{
				STREAMING::BEGIN_SRL();
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, -1625f, -1374.8f, 82.2f, -83.8f, true, false, true);
				PED::FORCE_PED_MOTION_STATE(Global_35, joaat("MOTIONSTATE_WALK"), false, 0, false);
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Global_35, sLocal_1726, 0, 8, -1, 0, 0, -1);
				PED::_0x2208438012482A1A(Global_35, false, false);
				CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
				CAM::_0x02389579A53C3276(sLocal_1725, "2_Beechers_1", "2_Beechers_1_Cam", 8000);
				BUILTIN::SETTIMERA(0);
				iLocal_56 = 4;
			}
			break;
		case 4:
			if (BUILTIN::TIMERA() >= 3000)
			{
				func_715("script@cme@RABI3_CME_SHOT3_srl");
				iLocal_56 = 5;
			}
			break;
		case 5:
			if (BUILTIN::TIMERA() >= 8000)
			{
				STREAMING::BEGIN_SRL();
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, -1573.2f, -1380f, 79.6f, -101.1f, true, false, true);
				PED::FORCE_PED_MOTION_STATE(Global_35, joaat("MOTIONSTATE_WALK"), false, 0, false);
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Global_35, sLocal_1726, 0, 8, -1, 0, 0, -1);
				CAM::_0x02389579A53C3276(sLocal_1725, "3_Horses_1", "3_Horses_1_Cam", 8000);
				BUILTIN::SETTIMERA(0);
				iLocal_56 = 6;
			}
			break;
		case 6:
			if (BUILTIN::TIMERA() >= 8000)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				iLocal_56 = 8;
				return true;
			}
			break;
		case 7:
			break;
	}
	return false;
}

void func_349()
{
	if (!__LIB_13__::func_477())
	{
		__LIB_4__::func_517(1);
	}
	if (!__LIB_2__::func_769(1853065598))
	{
		__LIB_1__::func_948(1853065598, 1, 0, 0, 0, 0, 0, 0);
	}
	if (!bLocal_131)
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 104, true);
		PLAYER::_0x0751D461F06E41CE(PLAYER::GET_PLAYER_INDEX(), 52, 0, 1);
		PLAYER::_0x0751D461F06E41CE(PLAYER::GET_PLAYER_INDEX(), 5, 0, 1);
		PLAYER::_0x0751D461F06E41CE(PLAYER::GET_PLAYER_INDEX(), 31, 0, 1);
		PLAYER::_0x0751D461F06E41CE(PLAYER::GET_PLAYER_INDEX(), 32, 0, 1);
		PLAYER::_0x0751D461F06E41CE(PLAYER::GET_PLAYER_INDEX(), 33, 0, 1);
		PLAYER::_0x0751D461F06E41CE(PLAYER::GET_PLAYER_INDEX(), 49, 0, 1);
		PLAYER::_0x0751D461F06E41CE(PLAYER::GET_PLAYER_INDEX(), 50, 0, 1);
		PLAYER::_0x0751D461F06E41CE(PLAYER::GET_PLAYER_INDEX(), 31, 0, 1);
		PLAYER::_0x0751D461F06E41CE(PLAYER::GET_PLAYER_INDEX(), 30, 0, 1);
		PLAYER::_0x0751D461F06E41CE(PLAYER::GET_PLAYER_INDEX(), 28, 0, 1);
		PLAYER::_0x0751D461F06E41CE(PLAYER::GET_PLAYER_INDEX(), 11, 0, 1);
		PLAYER::_0x0751D461F06E41CE(PLAYER::GET_PLAYER_INDEX(), 46, 0, 1);
		PLAYER::_0x0751D461F06E41CE(PLAYER::GET_PLAYER_INDEX(), 7, 0, 1);
		PLAYER::_0x0751D461F06E41CE(PLAYER::GET_PLAYER_INDEX(), 10, 0, 1);
		bLocal_131 = true;
	}
	if (((__LIB_5__::func_463() || ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_1641[3 /*5*/], false)) || ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_1641[8 /*5*/], false)) || ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_1641[12 /*5*/], false))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 129, true);
		PED::SET_PED_RESET_FLAG(Global_35, 189, true);
	}
	__LIB_1__::func_538(0);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_TRAVERSAL"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_AIM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_ATTACK2"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_BOAT_AIM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_BOAT_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_BOAT_ATTACK2"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_DRAFT_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_DRAFT_ATTACK2"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_WHISTLE"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_WHISTLE_HORSEBACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CUT_FREE"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP_CARRIABLE"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP_CARRIABLE2"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLACE_CARRIABLE_ONTO_PARENT"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP_CARRIABLE_FROM_PARENT"), false);
}

void func_350()
{
	if (iLocal_47 < 6)
	{
		__LIB_9__::func_827(18, 0, 0, 0);
	}
	else
	{
		__LIB_9__::func_827(19, 30, 0, 0);
	}
}

void func_351()
{
	if (!bLocal_137)
	{
		__LIB_9__::func_951(12, 1, 1);
		__LIB_11__::func_10(21, 1, 0);
		__LIB_11__::func_10(1, 1, 0);
		__LIB_6__::func_350(15, 1, 1, 0);
		__LIB_4__::func_932(15, 0);
		__LIB_11__::func_10(8, 1, 0);
		__LIB_6__::func_350(9, 8, 1, 0);
		__LIB_4__::func_932(9, 0);
		__LIB_11__::func_10(7, 1, 0);
		__LIB_6__::func_350(17, 7, 1, 0);
		__LIB_4__::func_932(17, 0);
		__LIB_11__::func_10(22, 1, 0);
		__LIB_6__::func_350(16, 22, 1, 0);
		__LIB_4__::func_932(16, 0);
		__LIB_11__::func_10(6, 1, 0);
		__LIB_6__::func_350(8, 6, 1, 0);
		__LIB_4__::func_932(8, 0);
		__LIB_11__::func_10(3, 1, 0);
		__LIB_6__::func_350(7, 3, 1, 0);
		__LIB_4__::func_932(7, 0);
		__LIB_11__::func_10(2, 1, 0);
		__LIB_6__::func_350(14, 2, 1, 0);
		__LIB_4__::func_932(14, 0);
		__LIB_11__::func_10(33, 1, 0);
		__LIB_6__::func_350(11, 33, 1, 0);
		__LIB_4__::func_932(11, 0);
		__LIB_11__::func_10(9, 1, 0);
		__LIB_6__::func_350(13, 9, 1, 0);
		__LIB_4__::func_932(13, 0);
		__LIB_11__::func_10(10, 1, 0);
		__LIB_6__::func_350(10, 10, 1, 0);
		__LIB_4__::func_932(10, 0);
		__LIB_1__::func_948(1373799284, 1, 0, 0, 0, 0, 0, 0);
		__LIB_1__::func_948(1853065598, 1, 0, 0, 0, 0, 0, 0);
		bLocal_137 = true;
	}
}

bool func_352(var uParam0)
{
	switch (iLocal_48)
	{
		case 0:
			func_755();
			__LIB_12__::func_803();
			func_757(0);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_124))
			{
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_124, false);
				AITRANSPORT::_0xBA8818212633500A(iLocal_124, 7, 1);
				if (!MAP::DOES_BLIP_EXIST(iLocal_68))
				{
					iLocal_68 = __LIB_8__::func_778(1673015813, iLocal_124, 1);
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_68, "ABI31_B_WAGON");
					MAP::SET_BLIP_SPRITE(iLocal_68, joaat("BLIP_AMBIENT_COACH"), false);
					MAP::_BLIP_SET_MODIFIER(iLocal_68, 447544236);
				}
				iLocal_1640 = ENTITY::GET_ENTITY_HEALTH(iLocal_124);
			}
			func_759();
			func_760(uParam0, 0, 0);
			func_761(uParam0, &iLocal_67, 0, 0, 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */);
			__LIB_12__::func_997(uParam0, func_61(0), func_61(1), 0, 1, 0);
			__LIB_12__::func_804(1);
			break;
		case 1:
			if (PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_SPRINT")))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.2f);
			}
			else
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_124))
			{
				if (func_763(&(Local_1641[2 /*5*/]), uParam0))
				{
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_EXIT"), false);
					ANIMSCENE::_DELETE_ANIM_SCENE(Local_1641[2 /*5*/]);
					__LIB_0__::func_172(iLocal_261);
					__LIB_0__::func_172(iLocal_262);
					__LIB_0__::func_37(&uLocal_389);
					__LIB_0__::func_37(&uLocal_392);
					return true;
				}
				else if (iLocal_53 == 0)
				{
					if (!__LIB_5__::func_463())
					{
						if (!bLocal_395 == 1)
						{
							func_761(uParam0, &iLocal_67, 1, 0, 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */);
							bLocal_395 = true;
						}
						else if (!__LIB_0__::func_75(&uLocal_389))
						{
							fLocal_397 = __LIB_0__::func_665(Global_35, iLocal_124, 1, 1);
							__LIB_1__::func_283(&uLocal_389, 0);
						}
						else if (__LIB_0__::func_264(&uLocal_389) > 7f)
						{
							fLocal_398 = __LIB_0__::func_665(Global_35, iLocal_124, 1, 1);
							if (!TASK::IS_PED_WALKING(Global_35))
							{
								if (!__LIB_0__::func_75(&uLocal_392))
								{
									__LIB_1__::func_283(&uLocal_392, 0);
								}
								else if (__LIB_0__::func_264(&uLocal_392) > 1.5f)
								{
									if (__LIB_0__::func_48(Global_35, iLocal_124, 6f, 1))
									{
										__LIB_12__::func_876(uParam0, "RABI3_WAGON_IN", 0);
									}
									else
									{
										__LIB_12__::func_876(uParam0, "RABI3_NOWAGON", 0);
									}
									__LIB_0__::func_37(&uLocal_389);
									__LIB_0__::func_37(&uLocal_392);
								}
							}
							else if (fLocal_398 > fLocal_397)
							{
								if (!bLocal_396)
								{
									__LIB_12__::func_876(uParam0, "RABI3_WHEREGO", 0);
									__LIB_0__::func_37(&uLocal_389);
									__LIB_0__::func_37(&uLocal_392);
									bLocal_396 = true;
								}
							}
						}
					}
					func_293(4, 0);
					func_767();
					if (iLocal_53 < 2)
					{
						func_768(uParam0, 0, 30000);
					}
				}
			}
			if (iLocal_53 > 2)
			{
				if (!__LIB_1__::func_588("ABI31_O_RIDEBLAC", 0, 0, -1, -1, 0))
				{
					if (MAP::DOES_BLIP_EXIST(iLocal_68))
					{
						__LIB_0__::func_325(&iLocal_68);
					}
					else
					{
						func_760(uParam0, 1, 1);
						iLocal_68 = __LIB_4__::func_983(408396114, func_206(8), 1);
						MAP::_BLIP_SET_MODIFIER(iLocal_68, -1878373110);
						MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_68, "ABI31_B_BLACKW");
					}
				}
			}
			break;
	}
	return false;
}

bool func_353(var uParam0)
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4;
	switch (iLocal_48)
	{
		case 0:
			func_755();
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_124))
			{
				AITRANSPORT::_0xBA8818212633500A(iLocal_124, 7, 1);
			}
			func_761(uParam0, &iLocal_67, 5, 0, 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */);
			__LIB_12__::func_804(1);
			break;
		case 1:
			func_309();
			func_771();
			if (iLocal_194[6] == 3)
			{
				if (!bLocal_164)
				{
					func_772(&iLocal_67, 1);
					bLocal_164 = true;
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_124))
			{
				if (PED::IS_PED_IN_VEHICLE(Global_35, iLocal_124, false))
				{
					func_760(uParam0, 1, 0);
					func_761(uParam0, &iLocal_67, 6, 1, 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */);
					func_293(7, 0);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_EXIT"), false);
					__LIB_1__::func_694(Global_35, func_206(8), 0, 20f, 15f, 10f, 2.5f, 1, 1, 1, 0);
					if (__LIB_0__::func_266(iLocal_124, func_206(8), 6f, 1, 1))
					{
						VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_124, 6f, -1, true);
					}
					fVar0 = __LIB_0__::func_94(iLocal_124, func_206(8), 1);
					if (((fVar0 < (7.5f * 6f) && func_312()) && func_320()) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_206.f_348))
					{
						func_774(uParam0);
						vVar1 = { ENTITY::GET_ENTITY_COORDS(iLocal_124, false, false) };
						vVar4 = { func_206(8) };
						if (vVar1.y > vVar4.y)
						{
							if (!MISC::ARE_STRINGS_EQUAL(__LIB_0__::func_67(__LIB_12__::func_665(&(uParam0->f_206))), "2. Backward_facing_wagon"))
							{
								if (ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_206.f_348, "2. Backward_facing_wagon"))
								{
									__LIB_12__::func_839(&(uParam0->f_206), "2. Backward_facing_wagon");
								}
							}
						}
						else if (!MISC::ARE_STRINGS_EQUAL(__LIB_0__::func_67(__LIB_12__::func_665(&(uParam0->f_206))), "1. Forward_facing_wagon"))
						{
							if (ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_206.f_348, "1. Forward_facing_wagon"))
							{
								__LIB_12__::func_839(&(uParam0->f_206), "1. Forward_facing_wagon");
							}
						}
						if (fVar0 < (7.5f * 2f))
						{
							if (!bLocal_165)
							{
								func_772(&iLocal_67, 0);
								bLocal_165 = true;
							}
							func_761(uParam0, &iLocal_67, 7, 1, 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */);
							__LIB_0__::func_267(0);
						}
						if (fVar0 < (7.5f * 1.75f) && ENTITY::GET_ENTITY_SPEED(iLocal_124) < 0.9f)
						{
							__LIB_0__::func_769();
							__LIB_0__::func_325(&iLocal_68);
							if (ENTITY::GET_ENTITY_HEALTH(iLocal_124) == iLocal_1640)
							{
							}
							if (!__LIB_8__::func_684("RABI3_ARRIVE"))
							{
								return true;
							}
						}
					}
					if (!bLocal_122)
					{
						if (ENTITY::GET_ENTITY_HEALTH(iLocal_124) < iLocal_1640)
						{
							bLocal_122 = true;
						}
					}
					if (__LIB_0__::func_266(iLocal_124, func_206(7), 30f, 1, 1))
					{
						func_768(uParam0, 1, 30000);
					}
				}
			}
			break;
	}
	return false;
}

bool func_354(var uParam0)
{
	PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, (1f * 0.8f));
	switch (iLocal_48)
	{
		case 0:
			func_755();
			func_772(&iLocal_67, 0);
			if (!MAP::DOES_BLIP_EXIST(iLocal_68))
			{
				iLocal_68 = __LIB_4__::func_983(408396114, func_206(22), 1);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_68, "ABI31_B_PHOTO");
			}
			__LIB_0__::func_37(&uLocal_389);
			__LIB_0__::func_37(&uLocal_392);
			func_760(uParam0, 4, 0);
			func_293(3, 0);
			if (func_311(uParam0))
			{
				__LIB_12__::func_997(uParam0, func_61(1), func_61(2), 1, 2, 0);
				__LIB_12__::func_804(1);
			}
			break;
		case 1:
			if (__LIB_0__::func_266(Global_35, func_206(10), 30f, 1, 1))
			{
				func_768(uParam0, 4, 30000);
			}
			if (!PATHFIND::_0xDE0EA444735C1368(iLocal_260))
			{
				if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_260))
				{
					__LIB_3__::func_557(&iLocal_260, -817.798f, -1353.278f, 43.925f, 0f, 0f, 0f, 14f, 2f, 3f, "svolDeadEndBlock");
				}
				else
				{
					PATHFIND::_0x19C7567D2F2287D6(iLocal_260, 7);
				}
			}
			if (!__LIB_0__::func_75(&uLocal_245))
			{
				PATHFIND::_0xD17672447692478E(iLocal_249, 0);
				__LIB_1__::func_148(&uLocal_245);
			}
			else if (__LIB_0__::func_264(&uLocal_245) < 2f)
			{
				PATHFIND::_0xB03944057FD735BA(iLocal_249, 4, 0);
			}
			if (func_310())
			{
				if (__LIB_0__::func_1(uParam0->f_172, 16))
				{
					__LIB_14__::func_156(&(uParam0->f_753), uParam0->f_2581, 0, 0);
					if (__LIB_12__::func_670(&(uParam0->f_753)))
					{
						if (!bLocal_168)
						{
							func_778();
						}
						else
						{
							func_779();
						}
						func_293(11, 0);
						__LIB_0__::func_325(&iLocal_68);
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1641[3 /*5*/]))
						{
							ANIMSCENE::_DELETE_ANIM_SCENE(Local_1641[3 /*5*/]);
						}
						return true;
					}
				}
			}
			func_293(6, 0);
			func_780(uParam0);
			break;
	}
	return false;
}

bool func_355()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_104[0]))
	{
		if (iLocal_101[0] == 0)
		{
			iLocal_101[0] = ENTITY::_0x6F3068258A499E52(joaat("P_CHAIR12BX"), -815.0594f, -1375.207f, 43.227f, 7);
		}
		else if (ENTITY::_0x1FF441D7954F8709(iLocal_101[0]))
		{
			iLocal_104[0] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(iLocal_101[0]));
		}
		return false;
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_104[1]))
	{
		if (iLocal_101[1] == 0)
		{
			iLocal_101[1] = ENTITY::_0x6F3068258A499E52(joaat("P_CHAIR12BX"), -814.9755f, -1374.074f, 43.227f, 7);
		}
		else if (ENTITY::_0x1FF441D7954F8709(iLocal_101[1]))
		{
			iLocal_104[1] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(iLocal_101[1]));
		}
		return false;
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_107[0]))
	{
		iLocal_107[0] = OBJECT::CREATE_OBJECT(joaat("P_CS_BILLSINGLE01X"), -815.65f, -1371.33f, 43.02f, true, true, false, false, true);
		return false;
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_107[1]))
	{
		iLocal_107[1] = OBJECT::CREATE_OBJECT(joaat("P_CS_BILLSINGLE01X"), -815.65f, -1371.33f, 43.02f, true, true, false, false, true);
		return false;
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_110))
	{
		iLocal_110 = OBJECT::CREATE_OBJECT(joaat("P_CS_PHOTO_4X6"), -815.65f, -1371.33f, 43.02f, true, true, false, false, true);
		return false;
	}
	return true;
}

bool func_356(var uParam0)
{
	__LIB_12__::func_773(0, 0, 1, 1);
	switch (iLocal_48)
	{
		case 0:
			func_310();
			func_781();
			func_313();
			if (func_782())
			{
				func_783();
			}
			else
			{
				return false;
			}
			if ((func_314(4, 0, 0) && func_314(5, 0, 0)) && ENTITY::DOES_ENTITY_EXIST(iLocal_112))
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_1641[4 /*5*/], false))
				{
					func_315(4);
					ANIMSCENE::START_ANIM_SCENE(Local_1641[4 /*5*/]);
				}
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_1641[5 /*5*/], false))
				{
					func_315(5);
					ANIMSCENE::START_ANIM_SCENE(Local_1641[5 /*5*/]);
				}
				__LIB_12__::func_997(uParam0, func_61(2), func_61(3), 2, 3, 0);
				__LIB_12__::func_804(1);
			}
			break;
		case 1:
			if (func_784(uParam0))
			{
				func_785();
				return true;
			}
			break;
	}
	return false;
}

bool func_357(var uParam0)
{
	PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
	func_786();
	func_787(uParam0);
	if (iLocal_54 > 0)
	{
		if (!bLocal_1532)
		{
			if (func_788(&Local_399))
			{
				bLocal_1532 = true;
			}
		}
	}
	if (func_789())
	{
		func_790();
	}
	switch (iLocal_54)
	{
		case 0:
			func_785();
			func_755();
			__LIB_12__::func_997(uParam0, func_61(3), func_61(4), 3, 4, 0);
			func_316(2);
			__LIB_12__::func_876(uParam0, "RABI3_WHATNOW", 0);
			__LIB_0__::func_37(&uLocal_389);
			__LIB_0__::func_37(&uLocal_392);
			bLocal_71 = false;
			AUDIO::STOP_PED_SPEAKING(iLocal_70, false);
			if (__LIB_2__::func_799(12))
			{
				__LIB_3__::func_820(12, 0);
			}
			__LIB_2__::func_753(514, 0, 1, 0, 0);
			func_791(&Local_399);
			__LIB_1__::func_948(1735175816, 0, 0f, 0, 1, 0, 0, 0);
			iLocal_354 = VOLUME::_CREATE_VOLUME_BOX(-779.567f, -1365.212f, 43.86f, 0f, 0f, 0f, 1.5f, 3.5f, 2f);
			uLocal_355 = __LIB_1__::func_391(iLocal_354, 0, 0, 0);
			if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_271))
			{
				iLocal_271 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), -791.409f, -1366.017f, 42.926f, 0f, 0f, 0f, 4.2f, 4.2f, 2.509f);
			}
			iLocal_54 = 1;
			break;
		case 1:
			if (!PATHFIND::_0xDE0EA444735C1368(iLocal_260))
			{
				if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_260))
				{
					__LIB_3__::func_557(&iLocal_260, -817.798f, -1353.278f, 43.925f, 0f, 0f, 0f, 14f, 2f, 3f, "svolDeadEndBlock");
				}
				else
				{
					PATHFIND::_0x19C7567D2F2287D6(iLocal_260, 7);
				}
			}
			if (PED::_0xDC88D06719070C39(Global_35))
			{
				func_293(2, 0);
			}
			else
			{
				func_293(5, 0);
				func_792(uParam0);
			}
			if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_1641[8 /*5*/], false) || (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_1641[8 /*5*/], false) && ANIMSCENE::_GET_ANIM_SCENE_TIME(Local_1641[8 /*5*/]) >= 10.389f))
			{
				func_760(uParam0, 5, 0);
				if (!MAP::DOES_BLIP_EXIST(iLocal_68))
				{
					iLocal_68 = __LIB_4__::func_983(408396114, func_206(45), 1);
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_68, "ABI31_B_CINEMA");
				}
				if (__LIB_0__::func_266(Global_35, func_206(38), func_207(38), 1, 1) || __LIB_0__::func_266(iLocal_67, func_206(38), func_207(38), 1, 1))
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1318273915) || ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_67, 1318273915))
					{
						TASK::CLEAR_PED_SECONDARY_TASK(Global_35);
						TASK::CLEAR_PED_SECONDARY_TASK(iLocal_67);
						__LIB_3__::func_319(Local_1641[8 /*5*/]);
						func_779();
						iLocal_54 = 2;
					}
				}
				if (__LIB_0__::func_266(Global_35, func_206(38), 2f, 1, 1))
				{
					if (__LIB_2__::func_986(1735175816) || __LIB_3__::func_291(Global_35, 1))
					{
						TASK::CLEAR_PED_SECONDARY_TASK(Global_35);
						TASK::CLEAR_PED_SECONDARY_TASK(iLocal_67);
						__LIB_3__::func_319(Local_1641[8 /*5*/]);
						func_779();
						iLocal_54 = 2;
					}
				}
			}
			if (__LIB_0__::func_266(Global_35, func_206(38), func_207(38), 1, 1) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_1641[8 /*5*/], false))
			{
				iLocal_54 = 2;
			}
			func_794(uParam0);
			func_314(9, 0, 0);
			break;
		case 2:
			func_794(uParam0);
			if (func_795(uParam0))
			{
				__LIB_0__::func_325(&iLocal_68);
				iLocal_54 = 3;
			}
			else if (__LIB_3__::func_291(Global_35, 1))
			{
				if (__LIB_0__::func_266(Global_35, func_206(19), 7f, 1, 1))
				{
					if (__LIB_3__::func_291(iLocal_67, 1))
					{
						__LIB_0__::func_325(&iLocal_68);
						iLocal_54 = 3;
					}
				}
				else if (__LIB_0__::func_266(Global_35, func_206(22), 7f, 1, 1))
				{
					func_768(uParam0, 5, 10000);
				}
			}
			break;
		case 3:
			if (func_794(uParam0))
			{
			}
			if (__LIB_3__::func_291(Global_35, 1))
			{
				if (__LIB_0__::func_266(Global_35, func_206(19), 7f, 1, 1))
				{
					func_314(10, 0, 0);
					__LIB_2__::func_602(&(Local_1558[0 /*17*/]), "ABI31_ILO_TICKETS", " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
					PED::SET_PED_CONFIG_FLAG(iLocal_72, 301, false);
					iLocal_54 = 4;
				}
			}
			break;
		case 4:
			if (!MAP::DOES_BLIP_EXIST(iLocal_68))
			{
				if (!CAM::_0x81DCFD13CF39920E())
				{
					func_760(uParam0, 6, 0);
					iLocal_68 = __LIB_4__::func_983(408396114, func_206(19), 1);
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_68, "ABI31_B_TICKETS");
				}
			}
			if (__LIB_3__::func_291(Global_35, 1))
			{
				if (__LIB_0__::func_48(Global_35, iLocal_67, 7f, 1))
				{
					if (PED::IS_PED_IN_COMBAT(Global_35, 0))
					{
						if (!bLocal_1577)
						{
							bLocal_1577 = true;
							if (!__LIB_5__::func_463())
							{
								__LIB_12__::func_876(uParam0, "RADI2_REACT", 0);
							}
						}
					}
				}
			}
			if (iLocal_1576 == -1)
			{
				if (__LIB_0__::func_75(&uLocal_377))
				{
					__LIB_1__::func_480(&iLocal_72);
					__LIB_2__::func_624(&Local_1558, 0, 0, 1, 0);
				}
				else
				{
					iLocal_1576 = func_799(&iLocal_72, &iLocal_1537, 10f, &Local_1558, 0, 3, 1, 0, 5, 0, 0, 2, -1082130432 /* Float: -1f */);
				}
			}
			if (iLocal_1576 == 0)
			{
				__LIB_12__::func_773(1, 0, 1, 1);
				__LIB_1__::func_480(&iLocal_72);
				__LIB_2__::func_624(&Local_1558, 0, 0, 1, 0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Global_35, func_206(20), 1f, -1, 0.25f, 16777216, func_207(20));
				PLAYER::_0x3946FC742AC305CD(PLAYER::PLAYER_ID(), iLocal_72, "CAMP_VIGNETTE_STATIONARY_TALK", 0f, 0f, 0f, 0, "TICKETVENDOR");
				TASK::TASK_LOOK_AT_ENTITY(Global_35, iLocal_72, -1, 0, 51, 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
				func_761(uParam0, &iLocal_72, 13, 1, 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */);
				__LIB_0__::func_325(&iLocal_68);
				iLocal_54 = 5;
			}
			else if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_1641[9 /*5*/], false))
			{
				if (!bLocal_357)
				{
					if (!__LIB_5__::func_463() && bLocal_149)
					{
						__LIB_12__::func_876(uParam0, "RABI3_GREET", 0);
						__LIB_0__::func_37(&uLocal_389);
						__LIB_0__::func_37(&uLocal_392);
						bLocal_357 = true;
					}
				}
				else if (!__LIB_5__::func_463())
				{
					if (!__LIB_0__::func_75(&uLocal_389))
					{
						__LIB_1__::func_148(&uLocal_389);
					}
					else if (__LIB_0__::func_264(&uLocal_389) > 7f)
					{
						__LIB_12__::func_876(uParam0, "RABI3_CIN_BUY", 0);
						__LIB_0__::func_37(&uLocal_389);
					}
				}
			}
			break;
		case 5:
			__LIB_12__::func_773(1, 0, 1, 1);
			if (func_761(uParam0, &iLocal_72, 13, 1, 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */))
			{
				__LIB_2__::func_753(525, 0, 1, 0, 0);
				bLocal_148 = false;
				iLocal_54 = 6;
			}
			break;
		case 6:
			__LIB_12__::func_773(1, 0, 1, 1);
			if (!__LIB_6__::func_904())
			{
				CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
				__LIB_1__::func_432(50, 0, 0, 1, 1);
				TASK::TASK_ENTER_ANIM_SCENE(Global_35, Local_1641[10 /*5*/], "John", "pl_Enter_Room", 1069379748 /* Float: 1.48f */, 1, 0, 20000, -1082130432 /* Float: -1f */);
				PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "TICKETVENDOR");
				iLocal_54 = 7;
			}
			break;
		case 7:
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME_2();
			__LIB_12__::func_773(1, 0, 1, 1);
			bLocal_357 = false;
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1641[9 /*5*/]))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(Local_1641[9 /*5*/]);
			}
			if (ANIMSCENE::_0x1F0E401031E20146(Local_1641[10 /*5*/], "pl_Enter_Room"))
			{
				iLocal_54 = 8;
			}
			break;
		case 8:
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			__LIB_12__::func_773(1, 0, 1, 1);
			func_314(11, 0, 0);
			if (ANIMSCENE::_0x8D81E7824B7753F7(Local_1641[10 /*5*/], "s_Enter_Room", 1))
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_TIME(Local_1641[10 /*5*/]) >= 6f)
				{
					if (!__LIB_5__::func_463())
					{
						__LIB_12__::func_876(uParam0, "RABI3_CIN_HOLD", 0);
					}
				}
				if (ANIMSCENE::_GET_ANIM_SCENE_TIME(Local_1641[10 /*5*/]) >= 9.4f)
				{
					if (!bLocal_1578)
					{
						func_801();
					}
				}
			}
			if ((ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_1641[10 /*5*/], false) || ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(Local_1641[10 /*5*/])) || ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_1641[10 /*5*/]) > 0.9f)
			{
				iLocal_54 = 9;
				return true;
			}
			break;
		case 9:
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			return true;
	}
	return false;
}

bool func_358(var uParam0)
{
	bool bVar0;
	func_786();
	func_314(12, 0, 0);
	__LIB_12__::func_773(0, 1, 1, 1);
	bVar0 = false;
	switch (iLocal_48)
	{
		case 0:
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			func_755();
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1641[10 /*5*/]))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(Local_1641[10 /*5*/]);
			}
			if (!bLocal_144)
			{
				if ((func_782() && func_802()) && func_314(11, 0, 0))
				{
					Global_1394141.f_1325 = 0;
					func_803(&(Local_399.f_104));
					func_804(&(Local_399.f_104), 4);
					func_323(11, 0, 0);
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_1641[11 /*5*/], func_458(1));
					func_293(15, 0);
					bLocal_144 = true;
					func_805(&Local_399);
					func_806(Global_35, -772.29f, -1362.65f, 44f);
				}
			}
			else
			{
				func_804(&(Local_399.f_104), 4);
				func_807(&(Local_399.f_104), 4);
				if (bLocal_1532 == 0)
				{
					bLocal_1532 = func_788(&Local_399);
				}
				else if (func_808(1000, 1))
				{
					CAM::SET_CAM_PARAMS(Local_273[3 /*8*/], -782.8839f, -1364.471f, 44.5701f, 1.7399f, -0.1568f, -79.5212f, 30.7199f, 7500, 3, 3, 2, 1, 0);
					fLocal_310 = 0f;
					bLocal_144 = false;
					__LIB_12__::func_804(1);
					CLOCK::SET_CLOCK_TIME(17, 59, 0);
					__LIB_1__::func_683(&(Global_1394141.f_1325), 2);
					__LIB_1__::func_683(&(Global_1394141.f_1325), 4096);
					__LIB_0__::func_15(__LIB_0__::func_14(joaat("SHOWS_SEEN")), 1);
				}
			}
			break;
		case 1:
			fLocal_310 = (fLocal_310 + MISC::GET_FRAME_TIME());
			func_804(&(Local_399.f_104), 4);
			func_807(&(Local_399.f_104), 4);
			if (!bLocal_1533)
			{
				func_811(&Local_399);
				bLocal_1533 = true;
			}
			else
			{
				func_812(&Local_399, 0);
				if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_1641[11 /*5*/], false))
				{
					if (ANIMSCENE::_0x8D81E7824B7753F7(Local_1641[11 /*5*/], "S_Enter", 1))
					{
						if (ANIMSCENE::_GET_ANIM_SCENE_TIME(Local_1641[11 /*5*/]) >= 8.806f)
						{
							if (!bLocal_359)
							{
								__LIB_2__::func_616(-772.6649f, -1362.832f, 44.96977f);
								__LIB_2__::func_615(-772.6649f, -1362.832f, 44.96977f);
								CAM::RENDER_SCRIPT_CAMS(false, true, 3000, true, false, 0);
								__LIB_1__::func_948(1225606581, 1, 0, 0, 0, 0, 0, 0);
								__LIB_1__::func_948(-1168201642, 1, 0, 0, 0, 0, 0, 0);
								bLocal_359 = true;
							}
						}
						else
						{
							CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
						}
					}
				}
			}
			if (!bLocal_147)
			{
				if (GRAPHICS::GET_TV_CHANNEL() == 0)
				{
					GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
					bLocal_147 = true;
				}
			}
			func_815(&(Local_1641[11 /*5*/]), uParam0);
			if (bLocal_360)
			{
				func_816();
			}
			if (!bLocal_145 && bLocal_362)
			{
				PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_SKIP_CUTSCENE"), true);
				if (fLocal_310 > 10f && iLocal_58 >= 1)
				{
					if (!__LIB_0__::func_139(iLocal_1534))
					{
						iLocal_1534 = __LIB_1__::func_877("ABI31_C_SKIP", joaat("INPUT_SKIP_CUTSCENE"), 4, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("MEDIUM_TIMED_EVENT"), 0);
					}
				}
				if (__LIB_0__::func_567(iLocal_1534, 1))
				{
					bVar0 = true;
				}
			}
			else if (CAM::IS_SCREEN_FADED_OUT())
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
				__LIB_12__::func_804(2);
			}
			if (bVar0 || (bLocal_147 && (fLocal_310 > 95f || GRAPHICS::_0x5C674EB487891F6B() >= 90f)))
			{
				__LIB_1__::func_649(&iLocal_1535, 5);
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					bLocal_145 = true;
					CAM::DO_SCREEN_FADE_OUT(2000);
					__LIB_1__::func_281(&iLocal_1534, 1, 1);
					func_822(1);
					func_823(1);
				}
			}
			break;
		case 2:
			func_824(&Local_399);
			TASK::CLEAR_PED_TASKS(Global_35, true, false);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			func_825();
			if (CAM::DOES_CAM_EXIST(iLocal_129))
			{
				CAM::DESTROY_CAM(iLocal_129, false);
			}
			if (CAM::DOES_CAM_EXIST(iLocal_130))
			{
				CAM::DESTROY_CAM(iLocal_130, false);
			}
			__LIB_1__::func_948(1735175816, 0, -1f, 1, 1, 0, 1, 0);
			__LIB_2__::func_426(&iLocal_81);
			__LIB_2__::func_426(&iLocal_82);
			__LIB_2__::func_426(&iLocal_83);
			__LIB_2__::func_426(&iLocal_84);
			__LIB_0__::func_484(&uLocal_355, iLocal_354, 0);
			__LIB_0__::func_172(iLocal_354);
			__LIB_13__::func_11(iLocal_67);
			__LIB_13__::func_11(Global_35);
			__LIB_1__::func_281(&iLocal_1534, 1, 1);
			__LIB_1__::func_281(&iLocal_365, 1, 1);
			__LIB_1__::func_281(&iLocal_366, 1, 1);
			__LIB_1__::func_281(&iLocal_367, 1, 1);
			__LIB_0__::func_325(&iLocal_68);
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1641[11 /*5*/]))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(Local_1641[11 /*5*/]);
			}
			return true;
	}
	return false;
}

bool func_359(var uParam0)
{
	switch (iLocal_48)
	{
		case 0:
			func_755();
			func_319(1);
			CAM::_0x1B3C2D961F5FC0E1(sLocal_1727);
			func_715("script@cme@RABI3_CME_BLACKWATER_srl");
			if (!bLocal_144)
			{
				TASK::CLEAR_PED_TASKS(Global_35, true, false);
				CAM::DO_SCREEN_FADE_OUT(0);
				__LIB_1__::func_948(1735175816, 0, -1f, 0, 1, 0, 0, 0);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, func_206(48), func_207(48), true, false, true);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_67, func_206(49), func_207(49), true, false, true);
				ENTITY::_0x9587913B9E772D29(Global_35, 0);
				ENTITY::_0x9587913B9E772D29(iLocal_67, 0);
				__LIB_0__::func_489(0, 0);
				__LIB_0__::func_569(joaat("MOTIONSTATE_WALK"), 2000, 0, 1, 1, 0, 0, 0);
				CAM::_0x05BD5E4088B30A66(-5f, 5f);
				PED::_0x2208438012482A1A(Global_35, false, false);
				PED::_0x2208438012482A1A(iLocal_67, false, false);
				CLOCK::SET_CLOCK_TIME(19, 10, 0);
				bLocal_144 = true;
			}
			else if (func_808(1000, 1))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_128))
				{
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_128, func_206(10), func_207(10), true, false, true);
				}
				__LIB_12__::func_997(uParam0, func_61(4), func_61(5), 4, 5, 0);
				func_829();
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_124, false);
				__LIB_12__::func_804(1);
			}
			else if (!__LIB_0__::func_266(iLocal_67, func_206(49), 1f, 1, 1))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_67, func_206(49), func_207(49), true, false, true);
			}
			break;
		case 1:
			func_314(13, 0, 0);
			if (!PATHFIND::_0xDE0EA444735C1368(iLocal_272))
			{
				if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_272))
				{
					__LIB_3__::func_557(&iLocal_272, -787.738f, -1364.071f, 44.914f, 0f, 0f, 0f, 3f, 6f, 5f, "svolExitCinema");
				}
				else
				{
					PATHFIND::_0x19C7567D2F2287D6(iLocal_272, 7);
				}
			}
			if (!bLocal_172)
			{
				if (VOLUME::_DOES_VOLUME_EXIST(iLocal_253))
				{
					MISC::_0x2FCD528A397E5C88(iLocal_253, 1064968);
					__LIB_0__::func_566(iLocal_253, 0);
					POPULATION::_0xB56D41A694E42E86(iLocal_253, 10208, 0, 0, -1, -1, 2);
					POPULATION::_0x18262CAFEBB5FBE1(iLocal_253, 10208, 0, 0, -1, -1, 0);
					uLocal_254 = __LIB_1__::func_391(iLocal_253, 0, 0, 534496);
					uLocal_254 = PED::_0x4C39C95AE5DB1329(iLocal_267, false, 15);
					__LIB_3__::func_730(iLocal_253, 0, 0, 1, 1, 0);
					PATHFIND::_0xB03944057FD735BA(iLocal_253, 4, 0);
					bLocal_172 = true;
				}
				else
				{
					iLocal_253 = VOLUME::_CREATE_VOLUME_BOX(-754.127f, -1380.387f, 44.914f, 0f, 0f, 0f, 33f, 25f, 9.852f);
				}
			}
			if (!bLocal_357)
			{
				__LIB_12__::func_876(uParam0, "RABI3_BYE", 0);
				bLocal_357 = true;
			}
			else if (PED::_0xDC88D06719070C39(Global_35))
			{
				func_293(2, 0);
			}
			else
			{
				func_831();
			}
			if (ANIMSCENE::_GET_ANIM_SCENE_TIME(Local_1641[12 /*5*/]) >= 30f)
			{
				MISC::SET_BIT(&(Global_1956580.f_1), 5);
				CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			}
			if (ANIMSCENE::_GET_ANIM_SCENE_TIME(Local_1641[12 /*5*/]) >= 31.5f)
			{
				__LIB_12__::func_804(2);
			}
			if (!MAP::DOES_BLIP_EXIST(iLocal_68))
			{
				if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1641[12 /*5*/]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_1641[12 /*5*/], false)) && ANIMSCENE::_GET_ANIM_SCENE_TIME(Local_1641[12 /*5*/]) > 14f)
				{
					iLocal_68 = __LIB_4__::func_983(408396114, func_206(9), 1);
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_68, "ABI31_B_SHORE");
					func_760(uParam0, 7, 0);
				}
			}
			else if (__LIB_0__::func_266(Global_35, func_206(45), 7f, 1, 1))
			{
				if (MAP::DOES_BLIP_EXIST(iLocal_69))
				{
					func_768(uParam0, 2, 10000);
				}
				else
				{
					func_768(uParam0, 7, 10000);
				}
			}
			break;
		case 2:
			func_779();
			__LIB_0__::func_325(&iLocal_68);
			__LIB_0__::func_325(&iLocal_69);
			return true;
	}
	return false;
}

bool func_360()
{
	if (ANIMSCENE::_GET_ANIM_SCENE_TIME(Local_1641[12 /*5*/]) >= 30f)
	{
		CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
	}
	PED::SET_PED_RESET_FLAG(Global_35, 103, true);
	__LIB_12__::func_773(0, 1, 1, 1);
	switch (iLocal_57)
	{
		case 0:
			iLocal_57 = 1;
			break;
		case 1:
			if (STREAMING::IS_SRL_LOADED() && CAM::_0xAA235E2F2C09E952(sLocal_1727))
			{
				__LIB_0__::func_566(iLocal_253, 0);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, -761.3005f, -1384.998f, 42.27897f, 269.1746f, true, true, true);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_67, -761.1017f, -1384.123f, 42.32634f, 269.1746f, true, true, true);
				ENTITY::_0x9587913B9E772D29(Global_35, 0);
				ENTITY::_0x9587913B9E772D29(iLocal_67, 0);
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 0.5f);
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_67, 0.5f);
				PED::FORCE_PED_MOTION_STATE(Global_35, joaat("MOTIONSTATE_WALK"), false, 0, false);
				PED::FORCE_PED_MOTION_STATE(iLocal_67, joaat("MOTIONSTATE_WALK"), false, 0, false);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Global_35, -742.8717f, -1387.527f, 42.26991f, 1f, 20000, 0.25f, 0, 40000f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_67, -741.8079f, -1385.952f, 42.18816f, 1f, 20000, 0.25f, 0, 40000f);
				PED::_0x2208438012482A1A(Global_35, false, false);
				PED::_0x2208438012482A1A(iLocal_67, false, false);
				CAM::_0x02389579A53C3276(sLocal_1727, "BLACKWATER", "BLACKWATER_Cam", 9000);
				BUILTIN::SETTIMERA(0);
				func_314(13, 0, 0);
				func_314(14, 0, 0);
				func_319(1);
				iLocal_57 = 2;
			}
			break;
		case 2:
			if (!CAM::_0xDD0B7C5AE58F721D("vehicles@boat_cam") && !CAM::_0xC285FD21294A1C49("vehicles@boat_cam"))
			{
				CAM::_0x6A4D224FC7643941("vehicles@boat_cam");
			}
			VEHICLE::REQUEST_VEHICLE_ASSET(joaat("ROWBOAT"), 47);
			func_314(13, 0, 0);
			func_314(14, 0, 0);
			__LIB_1__::func_725();
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 0.5f);
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_67, 0.5f);
			if (BUILTIN::TIMERA() >= 9000)
			{
				func_323(13, 0, 0);
				__LIB_12__::func_773(0, 1, 1, 1);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_124, false);
				func_293(10, 0);
				STREAMING::END_SRL();
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1641[12 /*5*/]))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(Local_1641[12 /*5*/]);
				}
				return true;
				iLocal_57 = 3;
			}
			break;
	}
	return false;
}

bool func_361(var uParam0)
{
	switch (iLocal_48)
	{
		case 0:
			if (func_319(1))
			{
				__LIB_1__::func_725();
				__LIB_1__::func_408(-639037538, 1, 0);
				__LIB_12__::func_804(1);
			}
			break;
		case 1:
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			__LIB_12__::func_773(0, 1, 1, 1);
			__LIB_1__::func_725();
			if (!bLocal_150)
			{
				VEHICLE::SET_BOAT_ANCHOR(iLocal_128, false);
				if (func_323(13, 0, 0))
				{
					bLocal_150 = true;
				}
			}
			else
			{
				func_314(14, 0, 0);
				if (ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(Local_1641[13 /*5*/]) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_1641[13 /*5*/], false))
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1641[13 /*5*/]))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(Local_1641[13 /*5*/]);
					}
					func_323(14, 0, 0);
					__LIB_12__::func_804(2);
				}
			}
			break;
		case 2:
			__LIB_1__::func_725();
			PED::_0x2208438012482A1A(Global_35, false, false);
			ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_128, true);
			__LIB_0__::func_325(&iLocal_68);
			return true;
	}
	return false;
}

bool func_362(var uParam0)
{
	__LIB_1__::func_725();
	switch (iLocal_48)
	{
		case 0:
			func_832();
			func_755();
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_EXIT"), false);
			MISC::CLEAR_BIT(&(Global_1956580.f_1), 5);
			PED::_0x2208438012482A1A(Global_35, false, false);
			ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_128, true);
			__LIB_12__::func_876(uParam0, func_833(19), 0);
			if (!__LIB_0__::func_75(&uLocal_380))
			{
				__LIB_1__::func_283(&uLocal_380, 0);
			}
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_128, 1.5f);
			if (!MAP::DOES_BLIP_EXIST(iLocal_68))
			{
				iLocal_68 = __LIB_8__::func_777(408396114, func_206(11), 30f, 1);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_68, "ABI31_B_LAKE");
			}
			__LIB_12__::func_883(uParam0, func_835(3), 1, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_67, false);
			__LIB_0__::func_400(984271748);
			__LIB_0__::func_400(-392430949);
			__LIB_0__::func_400(634752926);
			if (func_320())
			{
				__LIB_12__::func_997(uParam0, func_61(5), func_61(6), 5, 6, 0);
				__LIB_12__::func_804(1);
			}
			break;
		case 1:
			func_832();
			if (__LIB_0__::func_75(&uLocal_380))
			{
				if (__LIB_0__::func_264(&uLocal_380) < 2.5f)
				{
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_128, 1.5f);
				}
				else
				{
					__LIB_0__::func_37(&uLocal_380);
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_128))
			{
				if (PED::IS_PED_IN_VEHICLE(Global_35, iLocal_128, false))
				{
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_EXIT"), false);
					if (__LIB_0__::func_266(iLocal_128, func_206(10), 30f, 1, 1))
					{
						func_768(uParam0, 3, 30000);
					}
					if (__LIB_0__::func_266(iLocal_128, func_206(11), 30f, 1, 1))
					{
						__LIB_0__::func_769();
						__LIB_0__::func_325(&iLocal_68);
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_EXIT"), false);
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_BOAT_ACCELERATE"), false);
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_BOAT_TURN_LR"), false);
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_BOAT_BRAKE"), false);
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_MOVE_UD"), false);
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_ACCELERATE"), false);
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_BRAKE"), false);
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_AIM"), false);
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPRINT"), false);
						if (__LIB_5__::func_463())
						{
							__LIB_5__::func_20(1, 0);
						}
						else if (__LIB_12__::func_876(uParam0, func_833(20), 0))
						{
							__LIB_0__::func_769();
							__LIB_0__::func_325(&iLocal_68);
							func_760(uParam0, 8, 1);
							TASK::CLEAR_PED_TASKS(Global_35, true, false);
							__LIB_12__::func_804(2);
						}
					}
				}
			}
			break;
		case 2:
			func_832();
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_EXIT"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_BOAT_ACCELERATE"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_BOAT_TURN_LR"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_BOAT_BRAKE"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_MOVE_UD"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_ACCELERATE"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_BRAKE"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_AIM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPRINT"), false);
			if (!bLocal_174)
			{
				if (ENTITY::GET_ENTITY_HEADING(Global_35) > 130f || ENTITY::GET_ENTITY_HEADING(Global_35) < 60f)
				{
					if (!__LIB_0__::func_266(iLocal_128, -699.7175f, -1357.728f, 40.5f, 30f, 1, 1))
					{
						if (!__LIB_0__::func_163(Global_35, -1273030092))
						{
							CAM::SET_GAMEPLAY_COORD_HINT(-756.9819f, -1324.122f, 51.9601f, 9000, 2000, 2000, 0);
							TASK::_TASK_VEHICLE_DRIVE_TO_POINT(Global_35, iLocal_128, -699.7175f, -1357.728f, 40.5f, 1f, 10f, 524419);
						}
					}
					else
					{
						if (__LIB_0__::func_163(Global_35, -1273030092))
						{
							TASK::CLEAR_PED_TASKS(Global_35, true, false);
						}
						VEHICLE::SET_BOAT_ANCHOR(iLocal_128, true);
						bLocal_174 = true;
					}
				}
				else
				{
					if (__LIB_0__::func_163(Global_35, -1273030092))
					{
						TASK::CLEAR_PED_TASKS(Global_35, true, false);
					}
					VEHICLE::SET_BOAT_ANCHOR(iLocal_128, true);
					bLocal_174 = true;
				}
			}
			if (!bLocal_154 == 1)
			{
				if (func_761(uParam0, &iLocal_67, 21, 1, 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */))
				{
					__LIB_0__::func_37(&uLocal_389);
					bLocal_154 = true;
				}
			}
			if (!__LIB_0__::func_75(&uLocal_383))
			{
				if (bLocal_154 && func_839(&iLocal_67, "ABI31_C_PROP"))
				{
					func_840();
					__LIB_1__::func_283(&uLocal_383, 0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
					PED::SET_PED_RESET_FLAG(Global_35, 326, true);
					TASK::_0xE05A5D39BE6E93AF(Global_35);
				}
				else if (!__LIB_5__::func_463())
				{
					if (!__LIB_0__::func_75(&uLocal_389))
					{
						__LIB_1__::func_148(&uLocal_389);
					}
					else if (__LIB_0__::func_264(&uLocal_389) > 8f)
					{
						if (!__LIB_5__::func_463())
						{
							__LIB_12__::func_876(uParam0, "RABI3_PROPOSE", 0);
							__LIB_0__::func_37(&uLocal_389);
						}
					}
				}
			}
			else
			{
				CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
				PED::SET_PED_RESET_FLAG(Global_35, 326, true);
				if (__LIB_0__::func_265(&uLocal_383) > 1.5f)
				{
					if (!__LIB_6__::func_904())
					{
						__LIB_0__::func_37(&uLocal_383);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1641[14 /*5*/]))
						{
							ANIMSCENE::_DELETE_ANIM_SCENE(Local_1641[14 /*5*/]);
						}
						__LIB_10__::func_21(Global_35, 67);
						return true;
					}
				}
			}
			break;
	}
	return false;
}

bool func_365()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_74))
	{
		iLocal_74 = func_641(14, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
		return false;
	}
	if ((!ENTITY::IS_ENTITY_DEAD(iLocal_74) && __LIB_1__::func_22(14)) && __LIB_0__::func_167(14) == iLocal_74)
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_74, joaat("REL_PLAYER_ALLY"));
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_74, false);
		WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_74, true, true);
		if (__LIB_0__::func_266(iLocal_74, func_206(5), 5f, 1, 1))
		{
			TASK::TASK_STAND_STILL(iLocal_74, -1);
			return true;
		}
		else
		{
			func_642(iLocal_74, func_206(5), func_207(5), 1);
		}
	}
	return false;
}

bool func_366()
{
	__LIB_1__::func_725();
	func_714();
	if (!Local_1641[15 /*5*/].f_4)
	{
		Local_1641[15 /*5*/].f_4 = func_323(15, 0, 0);
		STREAMING::END_SRL();
	}
	else
	{
		if (((iLocal_1728 == 2 || iLocal_1728 == 3) || iLocal_1728 == 4) || iLocal_1728 == 5)
		{
			if (func_843())
			{
				if (func_323(15, 0, func_844(iLocal_1729)))
				{
					func_845(iLocal_1729);
				}
				return false;
			}
		}
		switch (iLocal_1728)
		{
			case 0:
				__LIB_12__::func_773(0, 1, 1, 1);
				if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_1641[15 /*5*/], func_844(1)))
				{
					if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_1641[15 /*5*/], func_844(1)))
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(Local_1641[15 /*5*/], func_844(1));
					}
				}
				else if (ANIMSCENE::_GET_ANIM_SCENE_TIME(Local_1641[15 /*5*/]) >= 6.5f)
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_1641[15 /*5*/], func_844(1), false);
					func_845(1);
				}
				break;
			case 1:
				__LIB_12__::func_773(0, 1, 1, 1);
				if (func_846(15, func_844(iLocal_1728), 0.95f))
				{
					if (func_323(15, 0, func_844(2)))
					{
						func_845(2);
					}
				}
				break;
			case 2:
				if (func_846(15, func_844(iLocal_1728), 0.95f))
				{
					if (func_323(15, 0, func_844(3)))
					{
						func_845(3);
					}
				}
				break;
			case 3:
				if (func_846(15, func_844(iLocal_1728), 0.95f))
				{
					if (func_323(15, 0, func_844(4)))
					{
						func_845(4);
					}
				}
				break;
			case 4:
				if (func_846(15, func_844(iLocal_1728), 0.95f))
				{
					if (func_323(15, 0, func_844(5)))
					{
						func_845(5);
					}
				}
				break;
			case 5:
				if (func_846(15, func_844(iLocal_1728), 0.95f))
				{
					if (func_323(15, 0, func_844(2)))
					{
						func_845(2);
					}
				}
				break;
			case 6:
			case 7:
			case 8:
			case 9:
			case 10:
				if (func_846(15, func_844(iLocal_1728), 0.95f))
				{
					return true;
				}
				break;
		}
	}
	return false;
}

void func_404(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	struct<2> Var2;
	struct<2> Var4;
	int iVar6;
	int iVar7;
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
		iVar9 = __LIB_1__::func_145(iParam0, &iVar7, &iVar8);
		if (iVar9 != 176656832)
		{
			__LIB_4__::func_253(iVar9, iVar7, -469960592, iVar8, 1, 1, 0);
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
						func_882(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_882(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_882(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_882(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_882(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_882(joaat("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_882(joaat("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_882(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_882(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_882(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_882(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_882(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_882(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_882(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_882(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_882(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_882(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_882(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_882(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_882(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_882(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_882(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_882(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_882(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_882(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_884();
						func_885(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
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
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY(func_888(10, 0)));
						break;
					case 8:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 621714131 /* GXTEntry: "Jamie Gillis" */);
						break;
					case 15:
						func_882(joaat("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
						func_889(304805134, 1, 1);
						if (!__LIB_1__::func_25(Global_1347702[21 /*49*/].f_15, 1))
						{
							func_404(Global_1347702[21 /*49*/].f_15, 0, 0, 0, 0);
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
							func_404(Global_1347702[82 /*49*/].f_15, 0, 0, 0, 0);
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
							func_404(Global_1347702[83 /*49*/].f_15, 0, 0, 0, 0);
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
						func_882(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_882(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
		func_918();
		switch (iVar0)
		{
			case 1:
				switch (__LIB_0__::func_76(iParam0))
				{
					case 4:
						func_919(iParam0, 1000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 61:
					case 62:
					case 63:
						func_919(iParam0, 300, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 25:
						func_919(iParam0, 150000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 12:
						func_919(iParam0, 120000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 53:
						func_919(iParam0, 90000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 20:
						func_919(iParam0, 85000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 19:
						func_919(iParam0, 70000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 24:
						iVar18 = __LIB_0__::func_895(iParam0);
						func_919(iParam0, iVar18, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 28:
						func_919(iParam0, 45000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 34:
						func_919(iParam0, 600000, 1, 0.5f, 4, 0, 0, 1);
						if (!__LIB_1__::func_707(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0))
						{
							func_882(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						}
						break;
					case 29:
						func_919(iParam0, 4600, 1, 0f, 3, 0, 0, 1);
						break;
					case 37:
						break;
					case 58:
						break;
					case 57:
						func_919(iParam0, 2100000, 1, 0.9047619f, 8, 0, 0, 1);
						break;
					case 76:
						func_919(iParam0, 2042100, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 72:
						if (__LIB_0__::func_895(iParam0) == 0)
						{
							func_919(iParam0, 20000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						}
						else
						{
							func_919(iParam0, 15000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
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
						func_919(iParam0, 1500, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 55:
						__LIB_0__::func_896(8, 1);
						break;
					case 138:
						MISC::SET_BIT(&(Global_40.f_9052), 1);
						MISC::SET_BIT(&(Global_40.f_9052), 3);
						break;
					case 94:
						func_919(iParam0, 30000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 63:
						func_919(iParam0, 60000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 37:
						func_919(iParam0, 75000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 116:
						func_919(iParam0, 25000, 1, 0.5f, 1, 0, 0, 1);
						break;
					case 9:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ANSEL_ATHERTON"));
						break;
				}
				break;
			case 11:
				if (iParam0 == __LIB_1__::func_293(0, 10, 11, joaat("CABR01")))
				{
					func_919(iParam0, __LIB_0__::func_895(iParam0), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == __LIB_1__::func_293(0, 7, 11, joaat("CACR02")))
				{
					func_919(iParam0, __LIB_1__::func_794(9), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == __LIB_1__::func_293(0, 8, 11, joaat("CACR03")))
				{
					func_919(iParam0, __LIB_1__::func_794(10), 1, 0.5f, 2, 0, 0, 1);
				}
				else if (iParam0 == __LIB_1__::func_293(0, 11, 11, joaat("CACR01")))
				{
					func_919(iParam0, __LIB_1__::func_794(8), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == __LIB_1__::func_293(0, 12, 11, joaat("CACR04")))
				{
					func_919(iParam0, __LIB_1__::func_794(11), 1, 0.5f, 2, 0, 0, 1);
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

void func_431(var uParam0)
{
	__LIB_5__::func_440("nav_mesh_beech_abigail3");
	if (!__LIB_0__::func_1(uParam0->f_172, 8))
	{
		return;
	}
	__LIB_0__::func_267(1);
	AUDIO::_0x43037ABFE214A851();
	STREAMING::END_SRL();
	MISC::CLEAR_BIT(&(Global_1956580.f_1), 5);
	STATS::_0x025E98E317652CDD(0);
	__LIB_6__::func_416(0, 0, 1103626240 /* Float: 25f */);
	__LIB_0__::func_904(13, 0);
	PLAYER::_0x93624B36E8851B42(PLAYER::GET_PLAYER_INDEX());
	__LIB_0__::func_325(&iLocal_68);
	if (__LIB_13__::func_477())
	{
		__LIB_4__::func_517(0);
	}
	if (bLocal_131)
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 104, false);
		bLocal_131 = false;
	}
	__LIB_9__::func_951(12, 0, 1);
	__LIB_11__::func_10(21, 0, 0);
	__LIB_11__::func_10(1, 0, 0);
	__LIB_6__::func_350(15, 1, 0, 0);
	__LIB_4__::func_932(15, 1);
	__LIB_11__::func_10(8, 0, 0);
	__LIB_6__::func_350(9, 8, 0, 0);
	__LIB_4__::func_932(9, 1);
	__LIB_11__::func_10(7, 0, 0);
	__LIB_6__::func_350(17, 7, 0, 0);
	__LIB_4__::func_932(17, 1);
	__LIB_11__::func_10(22, 0, 0);
	__LIB_6__::func_350(16, 22, 0, 0);
	__LIB_4__::func_932(16, 1);
	__LIB_11__::func_10(6, 0, 0);
	__LIB_6__::func_350(8, 6, 0, 0);
	__LIB_4__::func_932(8, 1);
	__LIB_11__::func_10(3, 0, 0);
	__LIB_6__::func_350(7, 3, 0, 0);
	__LIB_4__::func_932(7, 1);
	__LIB_11__::func_10(2, 0, 0);
	__LIB_6__::func_350(14, 2, 0, 0);
	__LIB_4__::func_932(14, 1);
	__LIB_11__::func_10(33, 0, 0);
	__LIB_6__::func_350(11, 33, 0, 0);
	__LIB_4__::func_932(11, 1);
	__LIB_11__::func_10(9, 0, 0);
	__LIB_6__::func_350(13, 9, 0, 0);
	__LIB_4__::func_932(13, 1);
	__LIB_11__::func_10(10, 0, 0);
	__LIB_6__::func_350(10, 10, 0, 0);
	__LIB_4__::func_932(10, 1);
	__LIB_1__::func_948(1373799284, 0, 0, 0, 1, 0, 0, 0);
	__LIB_1__::func_948(1853065598, 0, 0, 0, 1, 0, 0, 0);
	__LIB_4__::func_193(937);
	__LIB_4__::func_193(935);
	AUDIO::_0x9428447DED71FC7E("Chapter_Screen_Scenes");
	VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_124, true);
	if (bLocal_248)
	{
		PATHFIND::_0x5A4E1A41E3A02AD0(iLocal_249, 4, 0);
		__LIB_4__::func_680();
		__LIB_0__::func_484(&uLocal_250, iLocal_249, 0);
		__LIB_0__::func_172(iLocal_249);
		bLocal_248 = false;
	}
	if (bLocal_152)
	{
		__LIB_0__::func_484(&uLocal_252, iLocal_251, 0);
		__LIB_0__::func_172(iLocal_251);
		bLocal_152 = false;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_265))
	{
		POPULATION::_0x74C2B3DC0B294102(iLocal_265);
		POPULATION::_0xA1CFB35069D23C23(iLocal_265);
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_266, false);
		__LIB_0__::func_172(iLocal_265);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_267))
	{
		POPULATION::_0x74C2B3DC0B294102(iLocal_267);
		POPULATION::_0xA1CFB35069D23C23(iLocal_267);
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_268, false);
		__LIB_0__::func_172(iLocal_267);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_269))
	{
		POPULATION::_0x74C2B3DC0B294102(iLocal_269);
		POPULATION::_0xA1CFB35069D23C23(iLocal_269);
		__LIB_0__::func_172(iLocal_269);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_270))
	{
		PATHFIND::_0x5A4E1A41E3A02AD0(iLocal_270, 4, 0);
		__LIB_1__::func_544(iLocal_270);
		__LIB_0__::func_172(iLocal_270);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_253))
	{
		PATHFIND::_0x5A4E1A41E3A02AD0(iLocal_253, 4, 0);
		__LIB_1__::func_544(iLocal_253);
		__LIB_0__::func_484(&uLocal_254, iLocal_253, 0);
		__LIB_0__::func_172(iLocal_253);
	}
	__LIB_0__::func_400(984271748);
	__LIB_0__::func_400(-392430949);
	__LIB_0__::func_400(634752926);
	if (PATHFIND::_0xDE0EA444735C1368(iLocal_272))
	{
		PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_272);
	}
	__LIB_0__::func_172(iLocal_272);
	if (iLocal_93 != 0)
	{
		ENTITY::_0xD2B9C78537ED5759(iLocal_93);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_94))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_94);
	}
	if (iLocal_96 != 0)
	{
		ENTITY::_0xD2B9C78537ED5759(iLocal_96);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_97))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_97);
	}
	if (iLocal_99 != 0)
	{
		ENTITY::_0xD2B9C78537ED5759(iLocal_99);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_100))
	{
		ENTITY::SET_ENTITY_VISIBLE(iLocal_100, true);
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_100);
	}
	STREAMING::REMOVE_ANIM_DICT(sLocal_1722);
	if (bLocal_71)
	{
		AUDIO::STOP_PED_SPEAKING(iLocal_70, false);
		if (__LIB_2__::func_799(12))
		{
			__LIB_3__::func_820(12, 0);
		}
		__LIB_2__::func_753(514, 0, 1, 0, 0);
	}
	func_829();
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_354))
	{
		__LIB_0__::func_484(&uLocal_355, iLocal_354, 0);
		VOLUME::_DELETE_VOLUME(iLocal_354);
	}
	if (bLocal_148)
	{
		__LIB_2__::func_753(525, 0, 1, 0, 0);
	}
	func_785();
	if (PATHFIND::_0xDE0EA444735C1368(iLocal_260))
	{
		PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_260);
	}
	__LIB_0__::func_172(iLocal_260);
	__LIB_0__::func_172(iLocal_255);
	__LIB_0__::func_172(iLocal_256);
	func_757(0);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_128))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_128);
	}
	func_168(14, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0);
	func_168(12, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0);
	__LIB_2__::func_788(&iLocal_70, 1, 0, 1);
}

char* func_458(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "pbl_enter";
		case 1:
			return "pbl_idle";
		case 2:
			return "pbl_interupt";
		case 3:
			return "pbl_seen_before";
		case 4:
			return "pbl_exit";
		case 5:
			return "pbl_HugEnter";
		case 6:
			return "pbl_HugIdle";
		case 7:
			return "pbl_HugExit";
		default:
			break;
	}
	return "";
}

int func_495(int iParam0, int iParam1)
{
	var uVar0;
	return func_1020(&uVar0, iParam0, iParam1);
}

bool func_551(var uParam0)
{
	if (iLocal_50 == 6)
	{
		return true;
	}
	return false;
}

bool func_582()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_90))
	{
		iLocal_90 = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_89, func_206(6), true, true, false, true);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_90))
	{
		ENTITY::SET_ENTITY_ROTATION(iLocal_90, 0f, 0f, func_207(4), 0, true);
		ENTITY::_0x9587913B9E772D29(iLocal_90, 0);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_90, true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_89);
		return true;
	}
	return false;
}

bool func_583(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_73))
	{
		iLocal_73 = func_641(4, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
		return false;
	}
	if ((!ENTITY::IS_ENTITY_DEAD(iLocal_73) && __LIB_1__::func_22(4)) && __LIB_0__::func_167(4) == iLocal_73)
	{
		if (!bLocal_132)
		{
			func_642(iLocal_73, func_206(4), func_207(4), 0);
			bLocal_132 = true;
		}
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_73, joaat("REL_PLAYER_ALLY"));
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_73, false);
		WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_73, true, true);
		__LIB_12__::func_875(uParam0, iLocal_73, "UNCLE", 1);
		return true;
	}
	return false;
}

bool func_584()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_88))
	{
		iLocal_88 = OBJECT::CREATE_OBJECT(iLocal_87, -1638.724f, -1363.716f, 83.4029f, true, true, false, false, true);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_88))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_87);
		return true;
	}
	return false;
}

bool func_585(var uParam0)
{
	switch (iLocal_49)
	{
		case 0:
			if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_255))
			{
				iLocal_255 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1642.64f, -1360.167f, 84.256f, 0f, 0f, -30f, 6f, 5.3f, 4f, "volMainRoom");
			}
			if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_256))
			{
				iLocal_256 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1637.58f, -1363.518f, 84.66f, 0f, 0f, -30f, 2.8f, 6.08f, 4f, "VolMainRoomInterrupt");
			}
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1641[0 /*5*/]))
			{
				Local_1641[0 /*5*/] = ANIMSCENE::_CREATE_ANIM_SCENE(Local_1641[0 /*5*/].f_1, 0, "Main", false, true);
			}
			else if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(Local_1641[0 /*5*/], true) && !ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_1641[0 /*5*/], true, false))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1641[0 /*5*/], "AbigailRoberts", iLocal_67, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1641[0 /*5*/], "uncle", iLocal_73, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1641[0 /*5*/], "p_chair_crate02x", iLocal_90, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1641[0 /*5*/], "p_broom02x", iLocal_88, 0);
				ANIMSCENE::LOAD_ANIM_SCENE(Local_1641[0 /*5*/]);
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_1641[0 /*5*/], "Main");
			}
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1641[1 /*5*/]))
			{
				Local_1641[1 /*5*/] = ANIMSCENE::_CREATE_ANIM_SCENE(Local_1641[1 /*5*/].f_1, 0, "Main", false, true);
			}
			else
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1641[1 /*5*/], "AbigailRoberts", iLocal_67, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1641[1 /*5*/], "uncle", iLocal_73, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1641[1 /*5*/], "p_chair_crate02x", iLocal_90, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1641[1 /*5*/], "p_broom02x", iLocal_88, 0);
				ANIMSCENE::LOAD_ANIM_SCENE(Local_1641[1 /*5*/]);
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_1641[1 /*5*/], "Main");
				iLocal_49 = 1;
			}
			break;
		case 1:
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_1641[0 /*5*/], true, false) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_1641[1 /*5*/], true, false))
			{
				if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_1641[0 /*5*/], "Main"))
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_1641[0 /*5*/], false))
					{
						ANIMSCENE::START_ANIM_SCENE(Local_1641[0 /*5*/]);
						iLocal_49 = 2;
					}
				}
			}
			break;
		case 2:
			if (__LIB_0__::func_266(Global_35, -1637.76f, -1363.708f, 83.40292f, 16f, 1, 1))
			{
				__LIB_12__::func_876(uParam0, "RABI3_ARGUE", 0);
				iLocal_49 = 3;
			}
			break;
		case 3:
			if (__LIB_0__::func_266(Global_35, -1637.76f, -1363.708f, 83.40292f, 13f, 1, 1) && __LIB_3__::func_291(Global_35, 1))
			{
				if (!__LIB_8__::func_684("RABI3_ARGUE"))
				{
					ANIMSCENE::START_ANIM_SCENE(Local_1641[1 /*5*/]);
					iLocal_49 = 4;
				}
				else
				{
					__LIB_6__::func_900("RABI3_ARGUE", 1, 0);
				}
				func_757(1);
			}
			break;
		case 4:
			if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_1641[1 /*5*/]) > 0.9f)
			{
				CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			}
			if ((!__LIB_0__::func_393(Global_35, iLocal_255, 0, 1) && !__LIB_0__::func_393(Global_35, iLocal_256, 0, 1)) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_1641[1 /*5*/]) > 0.7f)
			{
				if (!__LIB_0__::func_163(Global_35, 713668775))
				{
					if (!__LIB_0__::func_266(Global_35, -1640.875f, -1362.452f, 83.40292f, 2.2f, 1, 1))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Global_35, -1640.875f, -1362.452f, 83.40292f, 1f, -1, 1.5f, 0, 40000f);
					}
				}
				__LIB_12__::func_773(1, 1, 1, 1);
			}
			if (!__LIB_0__::func_393(Global_35, iLocal_255, 0, 1) && !__LIB_0__::func_393(Global_35, iLocal_256, 0, 1))
			{
				if (bLocal_136)
				{
					PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "RABI3");
					bLocal_136 = false;
				}
			}
			else if (!bLocal_136)
			{
				PLAYER::_0x3946FC742AC305CD(PLAYER::GET_PLAYER_INDEX(), iLocal_67, "RABI3_LEADIN", 0f, 0f, 0f, 0, "RABI3");
				bLocal_136 = true;
			}
			if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_1641[1 /*5*/], false) || ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(Local_1641[1 /*5*/]))
			{
				if (bLocal_136)
				{
					PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "RABI3");
					bLocal_136 = false;
				}
				return true;
				iLocal_49 = 5;
			}
			break;
		case 5:
			break;
	}
	return false;
}

char* func_612(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "RABI3_RSC1";
		case 2:
			return "rabi3_s1_mcs1";
		case 3:
			return "RABI3_S1_MCS2";
		case 4:
			return "RABI3_S1_MCS4";
		case 5:
			return "rabi3_s1_ext";
		case 6:
			return "rabi3_s1_extb";
		default:
			break;
	}
	return "";
}

void func_616(var uParam0)
{
	switch (iLocal_50)
	{
		case 1:
			if (func_304())
			{
				func_307();
			}
			if (!bLocal_133)
			{
				if (func_365())
				{
					bLocal_133 = true;
				}
			}
			if (!bLocal_134)
			{
				if (func_1105())
				{
					bLocal_134 = true;
				}
			}
			__LIB_3__::func_319(Local_1641[0 /*5*/]);
			__LIB_3__::func_319(Local_1641[1 /*5*/]);
			if (__LIB_0__::func_84(uParam0, 512) && !CAM::IS_SCREEN_FADING_OUT())
			{
				__LIB_0__::func_401(-392430949);
				__LIB_0__::func_401(634752926);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_63))
			{
				iLocal_63 = __LIB_13__::func_550(uParam0, "wagon02x", 0);
			}
			else
			{
				if (!PROPSET::_DOES_VEHICLE_HAVE_ANY_PROPSET(iLocal_63))
				{
					if (ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_348) < 66.69f)
					{
						PROPSET::_0xD80FAF919A2E56EA(iLocal_63, iLocal_61);
					}
				}
				else if (func_1107())
				{
					if (ENTITY::IS_ENTITY_VISIBLE(iLocal_65))
					{
						ENTITY::SET_ENTITY_VISIBLE(iLocal_65, false);
					}
				}
				if (!VEHICLE::_0xE1C0F8781BF130C2(iLocal_63, 5))
				{
					VEHICLE::SET_VEHICLE_EXTRA(iLocal_63, 1, true);
					VEHICLE::SET_VEHICLE_EXTRA(iLocal_63, 2, true);
					VEHICLE::SET_VEHICLE_EXTRA(iLocal_63, 3, true);
					VEHICLE::_0x73118A3EE9C9B6DB(iLocal_63, 0, 1);
					VEHICLE::_0x73118A3EE9C9B6DB(iLocal_63, 1, 1);
					VEHICLE::_0x73118A3EE9C9B6DB(iLocal_63, 4, 1);
					VEHICLE::_0x73118A3EE9C9B6DB(iLocal_63, 5, 1);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_76))
				{
					iLocal_76 = __LIB_3__::func_568(iLocal_63, 0);
				}
				else if (!PED::_0x06A10B4D7F50B0C3(iLocal_76))
				{
					PED::_0x97A38B65EBDA3D50(iLocal_76, 1);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_77))
				{
					iLocal_77 = __LIB_3__::func_568(iLocal_63, 1);
				}
				else if (!PED::_0x06A10B4D7F50B0C3(iLocal_77))
				{
					PED::_0x97A38B65EBDA3D50(iLocal_77, 1);
				}
			}
			if (iLocal_62 == 0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_63))
				{
					if (PROPSET::_DOES_VEHICLE_HAVE_ANY_PROPSET(iLocal_63))
					{
						iLocal_62 = PROPSET::_GET_VEHICLE_PROPSET(iLocal_63);
					}
				}
			}
			if (ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_348) >= 71.588f)
			{
				__LIB_0__::func_401(-392430949);
			}
			else if (ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_348) >= 68.465f)
			{
				if (PROPSET::_DOES_VEHICLE_HAVE_ANY_PROPSET(iLocal_63))
				{
					PROPSET::_DELETE_PROPSET(iLocal_62, true, true);
					__LIB_0__::func_400(984271748);
					__LIB_0__::func_401(634752926);
				}
			}
			else if (ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_348) >= 60.732f)
			{
				__LIB_0__::func_401(984271748);
			}
			__LIB_1__::func_951(&iLocal_88);
			if (__LIB_12__::func_892(uParam0, Global_35, 0, 0, 1, 1))
			{
				__LIB_1__::func_572(func_206(7), 8f, 0, 0, 0, 0, 0);
				__LIB_0__::func_569(joaat("MOTIONSTATE_WALK"), 1000, 0, 1, 1, 0, 0, 0);
			}
			if (__LIB_12__::func_892(uParam0, iLocal_67, 0, 0, 1, 1))
			{
				PED::FORCE_PED_MOTION_STATE(iLocal_67, joaat("MOTIONSTATE_WALK"), false, 1, false);
				func_623();
				bLocal_155 = true;
			}
			if (__LIB_12__::func_892(uParam0, iLocal_73, 0, 0, 1, 1))
			{
				func_168(4, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0);
				func_168(14, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0);
			}
			if (!bLocal_146)
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_348) >= 7.55f)
				{
					if (CLOCK::GET_CLOCK_HOURS() >= 20 || CLOCK::GET_CLOCK_HOURS() <= 5)
					{
						CLOCK::SET_CLOCK_TIME(5, 0, 0);
					}
					if (CLOCK::GET_CLOCK_HOURS() == 19 && CLOCK::GET_CLOCK_MINUTES() > 30)
					{
						CLOCK::SET_CLOCK_TIME(6, 0, 0);
					}
					__LIB_6__::func_413(joaat("WEATHER_GROUP_GOOD"), 0, 0, 1103626240 /* Float: 25f */);
					bLocal_146 = true;
				}
			}
			__LIB_1__::func_971(0);
			break;
		case 2:
			if (__LIB_12__::func_892(uParam0, Global_35, 0, 0, 1, 1))
			{
				__LIB_0__::func_569(joaat("MOTIONSTATE_WALK"), 2000, 0, 1, 1, 0, 0, 0);
			}
			if (!bLocal_171)
			{
				if (TXD::_DOES_STREAMED_TXD_EXIST(joaat("UI_PHOTO_ARTMAR")))
				{
					TXD::_REQUEST_STREAMED_TXD(joaat("UI_PHOTO_ARTMAR"), false);
					if (TXD::_HAS_STREAMED_TXD_LOADED(joaat("UI_PHOTO_ARTMAR")))
					{
						if (ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(uParam0->f_348, "p_cs_photo_5x7", false)))
						{
							DECORATOR::DECOR_SET_INT(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(uParam0->f_348, "p_cs_photo_5x7", false), "letter_item", joaat("DOCUMENT_PHOTO_MARY_ARTHUR"));
							OBJECT::_SET_APPLY_OBJECT_TXD(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(uParam0->f_348, "p_cs_photo_5x7", false), joaat("UI_PHOTO_ARTMAR"), 0, 0);
							bLocal_171 = true;
						}
					}
				}
			}
			if (__LIB_12__::func_892(uParam0, iLocal_67, 0, 0, 1, 1))
			{
				PED::FORCE_PED_MOTION_STATE(iLocal_67, joaat("MOTIONSTATE_WALK"), false, 1, false);
				func_1111();
			}
			break;
		case 3:
			func_314(4, 0, 0);
			func_314(5, 0, 0);
			func_782();
			func_313();
			if (ENTITY::IS_ENTITY_ATTACHED(iLocal_95))
			{
				ENTITY::DETACH_ENTITY(iLocal_95, true, true);
			}
			if (__LIB_12__::func_892(uParam0, Global_35, 0, 0, 1, 1))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_1641[4 /*5*/], true, false) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_1641[4 /*5*/], false))
				{
					func_315(4);
					ANIMSCENE::START_ANIM_SCENE(Local_1641[4 /*5*/]);
				}
				if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_1641[5 /*5*/], true, false) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_1641[5 /*5*/], false))
				{
					func_315(5);
					ANIMSCENE::START_ANIM_SCENE(Local_1641[5 /*5*/]);
				}
				func_783();
			}
			break;
		case 4:
			__LIB_1__::func_951(&iLocal_98);
			__LIB_1__::func_951(&iLocal_95);
			func_825();
			if (Local_22.f_18 != 0)
			{
				_NAMESPACE77::_0x00A15B94CBA4F76F(Local_22.f_18);
				Local_22.f_18 = 0;
			}
			if (__LIB_12__::func_892(uParam0, Global_35, 0, 0, 1, 1))
			{
				__LIB_0__::func_569(joaat("MOTIONSTATE_WALK"), 1000, 0, 1, 1, 0, 0, 0);
			}
			if (__LIB_12__::func_892(uParam0, iLocal_67, 0, 0, 1, 1))
			{
				PED::FORCE_PED_MOTION_STATE(iLocal_67, joaat("MOTIONSTATE_WALK"), false, 1, false);
				func_317();
			}
			break;
		case 5:
			if (!bLocal_169)
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true, 0, false, false);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true, 1, false, false);
				bLocal_169 = true;
			}
			if (!bLocal_156)
			{
				if (__LIB_12__::func_892(uParam0, Global_35, 0, 0, 1, 1) || (__LIB_0__::func_84(uParam0, 512) && !CAM::IS_SCREEN_FADING_OUT()))
				{
					CLOCK::SET_CLOCK_TIME(5, 55, 0);
					MISC::_SET_WEATHER_TYPE(joaat("HIGHPRESSURE"), true, true, false, 0f, false);
					bLocal_156 = true;
				}
			}
			if (!bLocal_151)
			{
				bLocal_151 = true;
			}
			else if (__LIB_0__::func_399(Global_35, 1, 0, 0) != joaat("WEAPON_UNARMED"))
			{
				WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
			}
			break;
		case 6:
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			if (!bLocal_157)
			{
				CLOCK::SET_CLOCK_TIME(5, 55, 0);
				MISC::_SET_WEATHER_TYPE(joaat("HIGHPRESSURE"), true, true, false, 0f, false);
				__LIB_10__::func_21(Global_35, 67);
				bLocal_157 = true;
			}
			if (ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_348) < 5f)
			{
				if (__LIB_8__::func_924(Global_35))
				{
					__LIB_18__::func_574(Global_35, 1, 0);
					if (Global_40.f_7729 == 62)
					{
						__LIB_1__::func_775(Global_35, -1515874150 /* GXTEntry: "John\'s Off-Hand Holster" */, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
					}
				}
			}
			else if (ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_348) > 5f && ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_348) < 18f)
			{
				__LIB_10__::func_21(Global_35, 62);
			}
			else if (ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_348) >= 23.495f)
			{
				if (__LIB_8__::func_924(Global_35))
				{
					__LIB_18__::func_574(Global_35, 1, 0);
					if (Global_40.f_7729 == 62)
					{
						__LIB_1__::func_775(Global_35, -1515874150 /* GXTEntry: "John\'s Off-Hand Holster" */, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
					}
				}
			}
			if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(uParam0->f_348) > 0.6f)
			{
				func_346(1);
			}
			break;
	}
}

int func_621(var uParam0)
{
	switch (iLocal_50)
	{
		case 1:
			if (!func_304())
			{
				return 0;
			}
			if (!func_307())
			{
				return 0;
			}
			return 1;
		case 3:
			func_314(4, 0, 0);
			func_314(5, 0, 0);
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_1641[4 /*5*/], true, false) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_1641[5 /*5*/], true, false))
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_1641[4 /*5*/], false))
				{
					func_315(4);
					ANIMSCENE::START_ANIM_SCENE(Local_1641[4 /*5*/]);
				}
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_1641[5 /*5*/], false))
				{
					func_315(5);
					ANIMSCENE::START_ANIM_SCENE(Local_1641[5 /*5*/]);
				}
				if (func_782())
				{
					func_783();
				}
				return 1;
			}
			return 0;
		case 5:
			break;
		case 6:
			__LIB_10__::func_21(Global_35, 62);
			if (__LIB_8__::func_924(Global_35))
			{
				__LIB_18__::func_574(Global_35, 1, 0);
			}
			if (!__LIB_8__::func_837(62))
			{
				return 0;
			}
			if (!bLocal_173)
			{
				if (func_346(1))
				{
					bLocal_173 = true;
				}
			}
			else if (STREAMING::IS_SRL_LOADED() && CAM::_0xAA235E2F2C09E952(sLocal_1725))
			{
				return 1;
			}
			return 0;
	}
	return 1;
}

void func_623()
{
	vector3 vVar0;
	struct<27> Var3;
	struct<7> Var41;
	vVar0 = { -1634.595f, -1388.298f, 82.19256f };
	Var3.f_4 = 1065353216;
	Var3.f_5 = 1065353216;
	Var3.f_9 = 1065353216;
	Var3.f_10 = 1065353216;
	Var3.f_14 = 1065353216;
	Var3.f_15 = 1065353216;
	Var3.f_17 = 1040187392;
	Var3.f_18 = 1040187392;
	Var3.f_19 = -1;
	Var3.f_26 = -1082130432;
	Var41.f_1 = 1050253722;
	Var41.f_2 = 1067030938;
	Var41.f_5 = -1082130432;
	Var41.f_6 = -1082130432;
	Var41.f_5 = 1.2f;
	__LIB_3__::func_4(iLocal_67, Global_35, &Var3, vVar0, 0, 0, 1, 1069547520 /* Float: 1.5f */, -1082130432 /* Float: -1f */, 1073069561, 0.5f, 1092616192 /* Float: 10f */, -1, 1, 0, 0, 0, 1);
	__LIB_11__::func_408(Global_35, iLocal_67, &Var41, -1, 0, 0);
	__LIB_1__::func_731(&uLocal_1624);
}

int func_641(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
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
						__LIB_19__::func_479(iParam0, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
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
				__LIB_19__::func_478(iParam0, 0, 0, 1);
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
				func_1152(Global_1360165[iParam0 /*1157*/], vVar0, iParam6, 2, 1073741824 /* Float: 2f */);
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

void func_642(int iParam0, vector3 vParam1, float fParam4, bool bParam5)
{
	if (bParam5)
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, true, true);
	}
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iParam0, false);
	ENTITY::SET_ENTITY_COORDS(iParam0, vParam1, true, false, true, true);
	ENTITY::SET_ENTITY_HEADING(iParam0, fParam4);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 66, true);
	PED::_0xF1C03A5352243A30(iParam0);
}

void func_643(int iParam0)
{
	if (((((((iParam0 == 0 || iParam0 == 1) || iParam0 == 2) || iParam0 == 3) || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 7)
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_265))
		{
			iLocal_265 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-806.956f, -1358.701f, 44.107f, 0f, 0f, 0f, 4.8f, 34.07f, 4.852f, "RABI3_volBarberPeds");
			MISC::_0x2FCD528A397E5C88(iLocal_265, 1064968);
			POPULATION::_0xB56D41A694E42E86(iLocal_265, 10208, 0, 0, -1, -1, 2);
			POPULATION::_0x18262CAFEBB5FBE1(iLocal_265, 10208, 0, 0, -1, -1, 0);
			uLocal_266 = PED::_0x4C39C95AE5DB1329(iLocal_265, false, 15);
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_267))
		{
			iLocal_267 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-793.34f, -1366.153f, 44.914f, 0f, 0f, 0f, 5f, 14f, 4.852f, "RABI3_volCinemaPeds");
			MISC::_0x2FCD528A397E5C88(iLocal_267, 1064968);
			POPULATION::_0xB56D41A694E42E86(iLocal_267, 10208, 0, 0, -1, -1, 2);
			POPULATION::_0x18262CAFEBB5FBE1(iLocal_267, 10208, 0, 0, -1, -1, 0);
			uLocal_268 = PED::_0x4C39C95AE5DB1329(iLocal_267, false, 15);
		}
	}
	else
	{
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_265))
		{
			POPULATION::_0x74C2B3DC0B294102(iLocal_265);
			POPULATION::_0xA1CFB35069D23C23(iLocal_265);
			PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_266, false);
			__LIB_0__::func_172(iLocal_265);
		}
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_267))
		{
			POPULATION::_0x74C2B3DC0B294102(iLocal_267);
			POPULATION::_0xA1CFB35069D23C23(iLocal_267);
			PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_268, false);
			__LIB_0__::func_172(iLocal_267);
		}
	}
	if ((((iParam0 == 6 || iParam0 == 7) || iParam0 == 9) || iParam0 == 10) || iParam0 == 12)
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_270))
		{
			iLocal_270 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-651.617f, -1350.98f, 40.5f, 0f, 0f, 0f, 80f, 57f, 12f, "RABI3_VolBoatTraffic");
			POPULATION::_0xB56D41A694E42E86(iLocal_270, 10208, 0, 0, -1, -1, 2);
			POPULATION::_0x18262CAFEBB5FBE1(iLocal_270, 10208, 0, 0, -1, -1, 0);
			PATHFIND::_0xB03944057FD735BA(iLocal_270, 4, 0);
			__LIB_7__::func_73(iLocal_270, 0, 1, 0, 0, 0, -1082130432 /* Float: -1f */);
		}
	}
	else if (VOLUME::_DOES_VOLUME_EXIST(iLocal_270))
	{
		PATHFIND::_0x5A4E1A41E3A02AD0(iLocal_270, 4, 0);
		POPULATION::_0x74C2B3DC0B294102(iLocal_270);
		POPULATION::_0xA1CFB35069D23C23(iLocal_270);
		__LIB_1__::func_544(iLocal_270);
		__LIB_0__::func_172(iLocal_270);
	}
}

void func_655(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, int iParam9, float fParam10, float fParam11, int iParam12, int iParam13, int iParam14, float fParam15, int iParam16, int iParam17, int iParam18, bool bParam19, int iParam20, int iParam21, bool bParam22)
{
	struct<7> Var0;
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
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		PLAYER::_0x2BEED53B912537D0(PLAYER::PLAYER_ID(), iParam1, -1f);
		Var0.f_1 = 1050253722;
		Var0.f_2 = 1067030938;
		Var0.f_5 = -1082130432;
		Var0.f_6 = -1082130432;
		Var0.f_3 = iParam16;
		Var0.f_1 = iParam14;
		Var0.f_2 = fParam15;
		Var0.f_4 = iParam17;
		Var0.f_5 = iParam20;
		Var0.f_6 = iParam21;
		if (bParam8)
		{
			Var0 = 0;
		}
		else
		{
			Var0 = 1;
		}
		PLAYER::_0xCA59808E51FD67C4(PLAYER::PLAYER_ID(), &Var0);
	}
	else
	{
		TASK::TASK_FOLLOW_AND_CONVERSE_WITH_PED(iParam0, iParam1, iParam4, iParam5, iParam6, iParam7, iParam9, fParam10, fParam11, iParam12, iParam13);
	}
	if (bParam19)
	{
		PED::_SET_PED_CROUCH_MOVEMENT(iParam0, false, 0, false);
	}
	if (bParam22)
	{
		__LIB_1__::func_735(iParam0, iParam1, iParam18);
	}
}

void func_688(var uParam0)
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
		func_1211(&(uParam0->f_404), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_12__::func_706(uParam0, 0f, 0f, 0f);
		func_1213(uParam0);
		func_1214(uParam0);
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

void func_714()
{
	int iVar0;
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_1620))
	{
		iLocal_1620 = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_ANIMAL_HORSE_GRAZING_DOMESTIC"), func_206(54), func_207(54), 0f, -1f, 1);
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iLocal_1621 = func_1257(iVar0);
		if (iLocal_1621 != 0)
		{
			iLocal_1622 = PERSCHAR::_0x112DDF56300BC6E5(iLocal_1621);
			if (PERSCHAR::_0x800DF3FC913355F3(iLocal_1622))
			{
				iLocal_1623 = PERSCHAR::_0x31C70A716CAE1FEE(iLocal_1622);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_1623))
				{
					if (iLocal_47 == 12)
					{
						if (!iLocal_175[iVar0])
						{
							if (iVar0 == 0)
							{
								ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_1623, func_206(53), func_207(53), true, false, true);
								iLocal_175[iVar0] = 1;
							}
							else if (iVar0 == 1)
							{
								ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_1623, func_206(54), func_207(54), true, false, true);
								TASK::_TASK_USE_SCENARIO_POINT(iLocal_1623, iLocal_1620, 0, -1, false, true, 0, false, -1f, false);
								iLocal_175[iVar0] = 1;
							}
							else if (iVar0 == 2)
							{
								ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_1623, func_206(55), func_207(55), true, false, true);
								iLocal_175[iVar0] = 1;
							}
						}
						else
						{
							if (!__LIB_0__::func_163(iLocal_1623, -76381094) && !__LIB_0__::func_163(iLocal_1623, -982327190))
							{
								TASK::TASK_STAND_STILL(iLocal_1623, -1);
							}
							if (iVar0 == 2)
							{
								if (!__LIB_0__::func_163(iLocal_1623, 150319005))
								{
									TASK::TASK_LOOK_AT_ENTITY(iLocal_1623, Global_35, -1, 0, 51, 0);
								}
							}
						}
					}
					else if (iLocal_47 == 11)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_1623))
						{
							if (iLocal_175[iVar0] == 1)
							{
								TASK::CLEAR_PED_TASKS(iLocal_1623, true, false);
								iLocal_175[iVar0] = 0;
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
}

void func_715(char* sParam0)
{
	STREAMING::END_SRL();
	STREAMING::PREFETCH_SRL(sParam0);
	STREAMING::_0xAE00387E53B1E9FC();
	STREAMING::_0xEF1A8A484118735E();
}

void func_755()
{
	__LIB_0__::func_904(13, 1);
}

void func_757(bool bParam0)
{
	if (bParam0)
	{
		__LIB_1__::func_948(1063695460, 1, 0, 0, 1, 0, 0, 0);
		__LIB_1__::func_948(1731691513, 1, 0, 0, 1, 0, 0, 0);
		__LIB_1__::func_948(1309495497, 1, 0, 0, 1, 0, 0, 0);
	}
	else
	{
		__LIB_1__::func_948(1063695460, 0, 0, 0, 1, 0, 0, 0);
		__LIB_1__::func_948(1731691513, 0, 0, 0, 1, 0, 0, 0);
		__LIB_1__::func_948(1309495497, 0, 0, 0, 1, 0, 0, 0);
	}
	if (bParam0)
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_257))
		{
			iLocal_257 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLBOX"), -1646.265f, -1368.04f, 84.256f, 0f, 0f, 149.5f, 3f, 1.3f, 4f);
			VOLUME::_0x5B23DFF8E0948BB2(iLocal_257, 1);
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_258))
		{
			iLocal_258 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLBOX"), -1649.677f, -1358.371f, 84.256f, 0f, 0f, 61f, 3f, 1.3f, 4f);
			VOLUME::_0x5B23DFF8E0948BB2(iLocal_258, 1);
		}
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_259))
		{
			iLocal_259 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLBOX"), -1636.797f, -1352.201f, 84.256f, 0f, 0f, 149.5f, 3f, 1.3f, 4f);
			VOLUME::_0x5B23DFF8E0948BB2(iLocal_259, 1);
		}
	}
	else
	{
		__LIB_0__::func_172(iLocal_257);
		__LIB_0__::func_172(iLocal_258);
		__LIB_0__::func_172(iLocal_259);
	}
}

bool func_759()
{
	if (bLocal_138)
	{
		return true;
	}
	if (func_314(2, 0, func_1322(0)))
	{
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_1641[2 /*5*/], func_1322(0));
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_1641[2 /*5*/], func_1322(2));
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_1641[2 /*5*/], func_1322(1));
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_1641[2 /*5*/], func_1322(3));
		bLocal_138 = true;
	}
	return false;
}

int func_760(var uParam0, int iParam1, bool bParam2)
{
	if (!Local_217[iParam1 /*2*/])
	{
		if (bParam2)
		{
			if (!Local_217[iParam1 /*2*/].f_1)
			{
				__LIB_13__::func_89(uParam0, func_835(iParam1), 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				Local_217[iParam1 /*2*/].f_1 = 1;
				return 1;
			}
		}
		else if (!__LIB_0__::func_270() && !__LIB_6__::func_904())
		{
			__LIB_12__::func_883(uParam0, func_835(iParam1), 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			Local_217[iParam1 /*2*/] = 1;
			return 1;
		}
	}
	return 0;
}

bool func_761(var uParam0, int iParam1, int iParam2, bool bParam3, float fParam4, float fParam5)
{
	switch (iLocal_194[iParam2])
	{
		case 0:
			if (!ENTITY::IS_ENTITY_DEAD(*iParam1) && __LIB_0__::func_266(*iParam1, Global_36, fParam4, 1, 1))
			{
				if (bParam3)
				{
					if (!__LIB_0__::func_270() && !__LIB_6__::func_904())
					{
						if (__LIB_12__::func_876(uParam0, func_833(iParam2), 0))
						{
							iLocal_194[iParam2] = 1;
						}
					}
				}
				else
				{
					__LIB_5__::func_20(0, 0);
					if (__LIB_12__::func_876(uParam0, func_833(iParam2), 0))
					{
						iLocal_194[iParam2] = 1;
					}
				}
			}
			break;
		case 1:
			if (__LIB_6__::func_903(func_833(iParam2)))
			{
				iLocal_194[iParam2] = 2;
				return true;
			}
			break;
		case 2:
			if (__LIB_6__::func_903(func_833(iParam2)))
			{
				if (!__LIB_0__::func_266(*iParam1, Global_36, fParam5, 1, 1) || ENTITY::IS_ENTITY_DEAD(*iParam1))
				{
					__LIB_6__::func_900(func_833(iParam2), 0, 0);
					iLocal_194[iParam2] = 3;
				}
			}
			else
			{
				iLocal_194[iParam2] = 3;
			}
			break;
	}
	return false;
}

bool func_763(var uParam0, var uParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;
	if (!func_759())
	{
		return false;
	}
	switch (iLocal_53)
	{
		case 0:
			if (__LIB_1__::func_410(Global_36, func_206(7), 6f, 1))
			{
				if (PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_ENTER")) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, joaat("INPUT_ENTER")))
				{
					__LIB_12__::func_773(1, 0, 1, 1);
					func_293(7, 0);
					vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_124, -1f, 0.75f, 0f) };
					fVar6 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vVar0, true);
					vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_124, 1f, 0.75f, 0f) };
					fVar7 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vVar3, true);
					func_315(2);
					if (fVar6 < fVar7)
					{
						bLocal_139 = true;
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*uParam0, func_1322(0), true);
						TASK::TASK_ENTER_ANIM_SCENE(Global_35, Local_1641[2 /*5*/], "John", "pl_Enter_DriverSide", 1069379748 /* Float: 1.48f */, 1, 0, 20000, -1082130432 /* Float: -1f */);
					}
					else
					{
						bLocal_139 = false;
						TASK::TASK_ENTER_ANIM_SCENE(Global_35, Local_1641[2 /*5*/], "John", "pl_Enter_PasengerSide", 1069379748 /* Float: 1.48f */, 1, 0, 20000, -1082130432 /* Float: -1f */);
					}
					iLocal_53 = 1;
				}
			}
			break;
		case 1:
			__LIB_12__::func_773(1, 0, 1, 1);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_REVEAL_HUD"), true);
			iLocal_53 = 2;
			break;
		case 2:
			__LIB_12__::func_773(1, 0, 1, 1);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_REVEAL_HUD"), true);
			if (bLocal_139)
			{
				if (!bLocal_140)
				{
					if (ANIMSCENE::_GET_ANIM_SCENE_TIME(*uParam0) > 1.5f)
					{
						if (__LIB_8__::func_684("RABI3_WAGONWALK"))
						{
							__LIB_6__::func_900("RABI3_WAGONWALK", 1, 0);
						}
						bLocal_140 = true;
					}
				}
				else if (ANIMSCENE::_0x8D81E7824B7753F7(*uParam0, "s_Idle_DriverSide", 1))
				{
					if (ANIMSCENE::_0x23E33CB9F4A3F547(*uParam0, func_1322(1)))
					{
						TASK::CLEAR_PED_TASKS(iLocal_67, true, false);
						TASK::TASK_ENTER_ANIM_SCENE(iLocal_67, Local_1641[2 /*5*/], "AbigailRoberts", func_1322(1), 1069379748 /* Float: 1.48f */, 1, 0, 20000, -1082130432 /* Float: -1f */);
						__LIB_12__::func_876(uParam1, "RABI3_WAGONHELP", 0);
						iLocal_53 = 3;
					}
				}
			}
			else if (!bLocal_140)
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_TIME(*uParam0) > 1.5f)
				{
					if (__LIB_8__::func_684("RABI3_WAGONWALK"))
					{
						__LIB_6__::func_900("RABI3_WAGONWALK", 1, 0);
					}
					bLocal_140 = true;
				}
			}
			else if (!__LIB_0__::func_163(iLocal_67, 713668775))
			{
				if (ANIMSCENE::_0x8D81E7824B7753F7(*uParam0, "s_Idle_PassengerSide", 1))
				{
					if (ANIMSCENE::_0x23E33CB9F4A3F547(*uParam0, func_1322(3)))
					{
						TASK::CLEAR_PED_TASKS(iLocal_67, true, false);
						TASK::TASK_ENTER_ANIM_SCENE(iLocal_67, Local_1641[2 /*5*/], "AbigailRoberts", func_1322(3), 1069379748 /* Float: 1.48f */, 1, 0, 20000, -1082130432 /* Float: -1f */);
						__LIB_12__::func_876(uParam1, "RABI3_WAGONHELP", 0);
						iLocal_53 = 3;
					}
				}
			}
			break;
		case 3:
			__LIB_12__::func_773(1, 0, 1, 1);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_REVEAL_HUD"), true);
			if (ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(*uParam0) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(*uParam0, false))
			{
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_124, true);
				if (!PED::IS_PED_IN_VEHICLE(Global_35, iLocal_124, false))
				{
					PED::SET_PED_INTO_VEHICLE(Global_35, iLocal_124, -1);
					PED::SET_PED_INTO_VEHICLE(iLocal_67, iLocal_124, 0);
					CAM::_0xFA1D5E8D1C3CCD67(iLocal_124, 0);
				}
				return true;
			}
			break;
	}
	return false;
}

void func_767()
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_261))
	{
		iLocal_261 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1631.391f, -1390.206f, 83.352f, 0f, 0f, -61f, 3.8f, 32.08f, 7f, "volDriverSide");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_262))
	{
		iLocal_262 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1629.48f, -1393.674f, 83.352f, 0f, 0f, -61f, 3.8f, 32.08f, 7f, "volPassengerSide");
	}
	if (__LIB_0__::func_48(Global_35, iLocal_124, 3f, 1))
	{
		func_778();
		if (!__LIB_0__::func_163(iLocal_67, 150319005))
		{
			TASK::TASK_LOOK_AT_ENTITY(iLocal_67, Global_35, -1, 0, 51, 0);
		}
		if (!PED::IS_PED_FACING_PED(iLocal_67, Global_35, 20f))
		{
			if (!__LIB_0__::func_163(iLocal_67, 1369124074))
			{
				if (!__LIB_0__::func_163(iLocal_67, -875674219))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_67, Global_35, 3000, -1f, -1f, -1f);
				}
			}
		}
	}
	else
	{
		func_1326();
	}
	if (!__LIB_0__::func_163(iLocal_67, 985146578))
	{
		if (__LIB_1__::func_205(Global_35, iLocal_262, 1, 0))
		{
			if (bLocal_263)
			{
				TASK::CLEAR_PED_TASKS(iLocal_67, true, false);
				bLocal_263 = false;
			}
			else if (!bLocal_264)
			{
				if (!__LIB_0__::func_266(iLocal_67, -1628.562f, -1395.815f, 81.69319f, 1.5f, 1, 1))
				{
					if (!__LIB_0__::func_163(iLocal_67, 1369124074))
					{
						TASK::TASK_ENTER_ANIM_SCENE(iLocal_67, Local_1641[2 /*5*/], "AbigailRoberts", func_1322(3), 1069379748 /* Float: 1.48f */, 0, 0, 20000, -1082130432 /* Float: -1f */);
					}
				}
				bLocal_264 = true;
				bLocal_263 = false;
			}
		}
		if (__LIB_1__::func_205(Global_35, iLocal_261, 1, 0))
		{
			if (bLocal_264)
			{
				TASK::CLEAR_PED_TASKS(iLocal_67, true, false);
				bLocal_264 = false;
			}
			else if (!bLocal_263)
			{
				if (!__LIB_0__::func_266(iLocal_67, -1633.269f, -1387.557f, 82.20925f, 1.5f, 1, 1))
				{
					if (!__LIB_0__::func_163(iLocal_67, 1369124074))
					{
						TASK::TASK_ENTER_ANIM_SCENE(iLocal_67, Local_1641[2 /*5*/], "AbigailRoberts", func_1322(1), 1069379748 /* Float: 1.48f */, 0, 0, 20000, -1082130432 /* Float: -1f */);
					}
				}
				bLocal_263 = true;
				bLocal_264 = false;
			}
		}
	}
}

void func_768(var uParam0, int iParam1, int iParam2)
{
	if (!Local_217[iParam1 /*2*/])
	{
		if (__LIB_5__::func_352(func_835(iParam1)))
		{
			Local_217[iParam1 /*2*/] = 1;
			__LIB_0__::func_37(&uLocal_236);
		}
		else if (!__LIB_0__::func_75(&uLocal_236))
		{
			__LIB_1__::func_148(&uLocal_236);
		}
		else if (__LIB_1__::func_871(&uLocal_236) > iParam2)
		{
			func_760(uParam0, iParam1, 0);
		}
	}
}

void func_771()
{
	if (CLOCK::GET_CLOCK_HOURS() == 18)
	{
		CLOCK::PAUSE_CLOCK(true, 0);
	}
}

void func_772(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		AUDIO::STOP_PED_SPEAKING(iLocal_67, false);
		PED::_0x1E017404784AA6A3(*iParam0, joaat("RABI3_RIDE1"));
	}
	else
	{
		AUDIO::STOP_PED_SPEAKING(iLocal_67, true);
		PED::_0x2B4CE170DE09F346(*iParam0, joaat("RABI3_RIDE1"));
	}
	AUDIO::_0x0D7FD6A55FD63AEF(8, 3, bParam1);
	AUDIO::_0x0D7FD6A55FD63AEF(26, 3, bParam1);
	AUDIO::_0x0D7FD6A55FD63AEF(13, 3, bParam1);
	AUDIO::_0x0D7FD6A55FD63AEF(12, 3, bParam1);
	AUDIO::_0x0D7FD6A55FD63AEF(10, 3, false);
	AUDIO::_0x0D7FD6A55FD63AEF(21, 3, bParam1);
	AUDIO::_0x0D7FD6A55FD63AEF(3, 3, bParam1);
	AUDIO::_0x0D7FD6A55FD63AEF(5, 3, bParam1);
}

void func_774(var uParam0)
{
	if (!bLocal_142)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_206.f_348) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_206.f_348, true, false))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_206.f_348, "1. Forward_facing_wagon");
			ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_206.f_348, "2. Backward_facing_wagon");
			bLocal_142 = true;
		}
	}
}

void func_778()
{
	__LIB_1__::func_727(Global_35, 1);
	__LIB_1__::func_726(iLocal_67, 1);
	__LIB_5__::func_438(&uLocal_1624);
}

void func_779()
{
	__LIB_1__::func_726(Global_35, 1);
	__LIB_1__::func_727(iLocal_67, 1);
	__LIB_5__::func_438(&uLocal_1624);
}

void func_780(var uParam0)
{
	if (!Local_1641[3 /*5*/].f_4)
	{
		if (func_323(3, 0, 0))
		{
			Local_1641[3 /*5*/].f_4 = 1;
		}
	}
	if (Local_1641[3 /*5*/].f_4 == 1)
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_1641[3 /*5*/], false))
		{
			if (!__LIB_0__::func_75(&uLocal_389))
			{
				if (!__LIB_5__::func_463())
				{
					__LIB_1__::func_148(&uLocal_389);
				}
			}
			else if (__LIB_0__::func_264(&uLocal_389) > 7f && !TASK::IS_PED_WALKING(Global_35))
			{
				if (!__LIB_0__::func_75(&uLocal_392))
				{
					__LIB_1__::func_283(&uLocal_392, 0);
				}
				else if (__LIB_0__::func_264(&uLocal_392) > 1.5f)
				{
					__LIB_12__::func_876(uParam0, "RABI3_STOP", 0);
					__LIB_0__::func_37(&uLocal_389);
					__LIB_0__::func_37(&uLocal_392);
				}
			}
		}
	}
	if (__LIB_0__::func_48(Global_35, iLocal_67, 10f, 1))
	{
		if (!bLocal_168)
		{
			if (!__LIB_0__::func_163(iLocal_67, 985146578))
			{
				func_1111();
			}
			else
			{
				func_1326();
			}
		}
		else if (!__LIB_0__::func_163(iLocal_67, joaat("SCRIPT_TASK_FOLLOW_AND_CONVERSE_WITH_PED")))
		{
			func_317();
		}
		else
		{
			func_1335();
		}
	}
	else
	{
		if (__LIB_0__::func_163(iLocal_67, 985146578))
		{
			func_778();
		}
		bLocal_168 = true;
	}
	if (!__LIB_3__::func_291(Global_35, 1))
	{
		if (!bLocal_168)
		{
			if (!__LIB_0__::func_163(iLocal_67, 985146578))
			{
				func_1111();
			}
			else
			{
				func_1326();
			}
		}
		else if (!__LIB_0__::func_163(iLocal_67, joaat("SCRIPT_TASK_FOLLOW_AND_CONVERSE_WITH_PED")))
		{
			func_317();
		}
		else
		{
			func_1335();
		}
	}
	else
	{
		if (__LIB_0__::func_163(iLocal_67, 985146578))
		{
			func_778();
		}
		bLocal_168 = true;
	}
}

void func_781()
{
	if (!bLocal_1724)
	{
		HUD::_HIDE_HUD_COMPONENT(-1679307491);
		bLocal_1724 = true;
	}
}

bool func_782()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!CAM::DOES_CAM_EXIST(Local_273[iVar0 /*8*/]))
		{
			Local_273[iVar0 /*8*/] = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), Local_273[iVar0 /*8*/].f_1, Local_273[iVar0 /*8*/].f_4, Local_273[iVar0 /*8*/].f_7, false, 2);
			return false;
		}
		else
		{
			CAM::SET_CAM_FOV(Local_273[iVar0 /*8*/], Local_273[iVar0 /*8*/].f_7);
		}
		iVar0++;
	}
	return true;
}

void func_783()
{
	if (!bLocal_306)
	{
		CAM::SET_CAM_ACTIVE(Local_273[0 /*8*/], true);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		bLocal_306 = true;
	}
}

bool func_784(var uParam0)
{
	float fVar0;
	int iVar1;
	func_1336();
	switch (iLocal_307)
	{
		case 0:
			iLocal_308 = 0;
			iLocal_346[0] = 1;
			func_783();
			iLocal_316[0] = -1;
			iLocal_316[1] = -1;
			func_313();
			func_1337();
			func_1338();
			if (func_761(uParam0, &iLocal_70, 9, 1, 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */))
			{
				if (!__LIB_0__::func_139(iLocal_313))
				{
					iLocal_313 = __LIB_2__::func_403("ABI31_C_BACKS", joaat("INPUT_MOVE_DOWN_ONLY"), Global_35, 3, 0, 0, 1, 0, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
				}
				if (!__LIB_0__::func_139(iLocal_312))
				{
					iLocal_312 = __LIB_2__::func_403("ABI31_C_BACKS", joaat("INPUT_MOVE_UP_ONLY"), Global_35, 3, 0, 0, 1, 0, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
				}
				if (!__LIB_0__::func_139(iLocal_311))
				{
					iLocal_311 = __LIB_2__::func_403("ABI31_C_BACKS", joaat("INPUT_MOVE_UD"), Global_35, 3, 0, 0, 1, 0, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
				}
				if (!__LIB_0__::func_139(iLocal_314))
				{
					iLocal_314 = __LIB_2__::func_403("ABI31_C_BACK", joaat("INPUT_GAME_MENU_ACCEPT"), Global_35, 3, 0, 0, 1, 0, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
				}
				ENTITY::SET_ENTITY_VISIBLE(iLocal_98, true);
				func_1340(1);
			}
			break;
		case 1:
			func_1341(uParam0);
			fVar0 = PAD::GET_DISABLED_CONTROL_NORMAL(0, joaat("INPUT_MOVE_UD"));
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_GAME_MENU_ACCEPT"), true);
			if (iLocal_308 == 0)
			{
				PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_DOWN_ONLY"), true);
				if (__LIB_1__::func_514(iLocal_313, 1))
				{
					func_1343(1);
					func_1344(&(Local_1641[4 /*5*/]), 1);
				}
			}
			else if (iLocal_308 == 1)
			{
				PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), true);
				if (func_1345(fVar0))
				{
					func_1343(2);
					func_1344(&(Local_1641[4 /*5*/]), 1);
				}
				else if (func_1346(fVar0))
				{
					func_1343(0);
					func_1344(&(Local_1641[4 /*5*/]), 0);
				}
			}
			else if (iLocal_308 == 2)
			{
				PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), true);
				if (func_1345(fVar0))
				{
					func_1343(3);
					func_1344(&(Local_1641[4 /*5*/]), 1);
				}
				else if (func_1346(fVar0))
				{
					func_1343(1);
					func_1344(&(Local_1641[4 /*5*/]), 0);
				}
			}
			else if (iLocal_308 == 3)
			{
				PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), true);
				if (func_1345(fVar0))
				{
					func_1343(4);
					func_1344(&(Local_1641[4 /*5*/]), 1);
				}
				else if (func_1346(fVar0))
				{
					func_1343(2);
					func_1344(&(Local_1641[4 /*5*/]), 0);
				}
			}
			else if (iLocal_308 == 4)
			{
				PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UP_ONLY"), true);
				if (__LIB_1__::func_514(iLocal_312, 1))
				{
					func_1343(3);
					func_1344(&(Local_1641[4 /*5*/]), 0);
				}
			}
			if (func_1347())
			{
				__LIB_0__::func_105(1);
				__LIB_1__::func_281(&iLocal_314, 1, 1);
				__LIB_6__::func_916(&iLocal_311);
				__LIB_6__::func_916(&iLocal_312);
				__LIB_6__::func_916(&iLocal_313);
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_1641[4 /*5*/], func_1349());
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_1641[5 /*5*/], func_1349());
				func_1340(3);
			}
			break;
		case 2:
			func_1350();
			func_1351(uParam0);
			if (__LIB_8__::func_684("ABI3_BACKGCYCLE"))
			{
				__LIB_6__::func_900("ABI3_BACKGCYCLE", 1, 0);
			}
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), true);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_GAME_MENU_ACCEPT"), true);
			if (func_1352(&(Local_1641[4 /*5*/])) && bLocal_114)
			{
				iLocal_308 = iLocal_309;
				bLocal_114 = false;
				bLocal_115 = false;
				bLocal_113 = false;
				bLocal_120 = false;
				bLocal_121 = false;
				bLocal_116 = false;
				__LIB_0__::func_37(&uLocal_321);
				if (iLocal_308 == 0)
				{
					__LIB_1__::func_221(iLocal_311, 0, 1);
					__LIB_1__::func_382(iLocal_311, 0, 1);
					__LIB_1__::func_221(iLocal_312, 0, 1);
					__LIB_1__::func_382(iLocal_312, 0, 1);
					__LIB_1__::func_221(iLocal_313, 1, 1);
					__LIB_1__::func_382(iLocal_313, 1, 1);
				}
				else if (iLocal_308 == 4)
				{
					__LIB_1__::func_221(iLocal_311, 0, 1);
					__LIB_1__::func_382(iLocal_311, 0, 1);
					__LIB_1__::func_221(iLocal_313, 0, 1);
					__LIB_1__::func_382(iLocal_313, 0, 1);
					__LIB_1__::func_221(iLocal_312, 1, 1);
					__LIB_1__::func_382(iLocal_312, 1, 1);
				}
				else
				{
					__LIB_1__::func_221(iLocal_312, 0, 1);
					__LIB_1__::func_382(iLocal_312, 0, 1);
					__LIB_1__::func_221(iLocal_313, 0, 1);
					__LIB_1__::func_382(iLocal_313, 0, 1);
					__LIB_1__::func_221(iLocal_311, 1, 1);
					__LIB_1__::func_382(iLocal_311, 1, 1);
				}
				__LIB_1__::func_221(iLocal_314, 1, 1);
				bLocal_328 = true;
				func_1340(1);
			}
			break;
		case 3:
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			if (__LIB_5__::func_463() && !__LIB_8__::func_684("RABI3_PHOTOPOSE"))
			{
				__LIB_5__::func_20(1, 0);
			}
			else
			{
				func_761(uParam0, &iLocal_70, 10, 0, 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */);
				func_314(6, 0, 0);
				func_314(7, 0, 0);
				if (!ANIMSCENE::_0x1F0E401031E20146(Local_1641[4 /*5*/], func_1349()))
				{
					if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_1641[4 /*5*/], func_1349()) && ANIMSCENE::_0x23E33CB9F4A3F547(Local_1641[5 /*5*/], func_1349()))
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_1641[4 /*5*/], func_1349(), true);
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_1641[5 /*5*/], func_1349(), true);
					}
				}
				else if (!__LIB_0__::func_75(&uLocal_331))
				{
					__LIB_1__::func_148(&uLocal_331);
				}
				else if (__LIB_0__::func_264(&uLocal_331) >= 3f)
				{
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				}
				if (iLocal_194[10] == 3)
				{
					if (ANIMSCENE::_GET_ANIM_SCENE_TIME(Local_1641[5 /*5*/]) >= 18.5f)
					{
						if (!bLocal_158)
						{
							if (__LIB_12__::func_876(uParam0, "RABI3_PHOTOPOSE", 0))
							{
								bLocal_158 = true;
							}
						}
					}
					if ((ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(Local_1641[4 /*5*/]) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_1641[4 /*5*/], false)) || ANIMSCENE::_GET_ANIM_SCENE_TIME(Local_1641[5 /*5*/]) >= 23f)
					{
						if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_1641[6 /*5*/], true, false) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_1641[7 /*5*/], true, false))
						{
							func_323(6, 0, 0);
							if (ANIMSCENE::_GET_ANIM_SCENE_TIME(Local_1641[5 /*5*/]) >= 24f)
							{
								if (func_323(7, 0, 0))
								{
									ANIMSCENE::_DELETE_ANIM_SCENE(Local_1641[4 /*5*/]);
									ANIMSCENE::_DELETE_ANIM_SCENE(Local_1641[5 /*5*/]);
									func_1355(iLocal_330);
									func_1356(iLocal_330);
									func_1357(iLocal_330);
									ANIMSCENE::_0xDF7B5144E25CD3FE(Local_1641[7 /*5*/], "pl_idle_TakePic");
									CAM::SET_CAM_ACTIVE(Local_273[1 /*8*/], true);
									CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
									func_316(1);
									PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), true);
									PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_SPRINT"), true);
									if (!__LIB_0__::func_139(iLocal_311))
									{
										iLocal_311 = __LIB_2__::func_403("ABI31_C_POSES", joaat("INPUT_MOVE_LR"), Global_35, 3, 0, 0, 0, 0, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
									}
									if (!__LIB_0__::func_139(iLocal_314))
									{
										iLocal_314 = __LIB_2__::func_403("ABI31_C_TAKE_PHOTO", joaat("INPUT_GAME_MENU_ACCEPT"), Global_35, 3, 0, 0, 0, 0, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
									}
									__LIB_0__::func_37(&uLocal_321);
									bLocal_328 = true;
									func_1340(4);
								}
							}
						}
					}
				}
			}
			break;
		case 4:
			fVar0 = PAD::GET_DISABLED_CONTROL_NORMAL(0, joaat("INPUT_MOVE_LR"));
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), true);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_GAME_MENU_ACCEPT"), true);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			func_1358();
			func_1359(uParam0);
			if (__LIB_1__::func_732(iLocal_314, 1))
			{
				if (func_1361(iLocal_330) != 0)
				{
					if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_1641[6 /*5*/], func_1362(func_1361(iLocal_330))) && ANIMSCENE::_0x23E33CB9F4A3F547(Local_1641[7 /*5*/], "pl_idle_TakePic"))
					{
						__LIB_0__::func_105(1);
						func_1363(iLocal_330);
						func_1364(iLocal_330);
						__LIB_1__::func_281(&iLocal_314, 1, 1);
						__LIB_1__::func_281(&iLocal_315, 1, 1);
						__LIB_1__::func_281(&iLocal_311, 1, 1);
						CAM::SET_CAM_ACTIVE(Local_273[2 /*8*/], false);
						CAM::SET_CAM_ACTIVE(Local_273[1 /*8*/], true);
						if (__LIB_5__::func_463())
						{
							if (__LIB_8__::func_684("RABI3_PHOTOPOSE"))
							{
								__LIB_6__::func_900("RABI3_PHOTOPOSE", 1, 0);
							}
							bLocal_163 = false;
						}
						else
						{
							__LIB_12__::func_876(uParam0, "RABI3_PHOTO", 0);
						}
						func_1340(6);
					}
				}
			}
			else if (func_1345(fVar0) && __LIB_0__::func_572(iLocal_311, 0))
			{
				if (func_1366(iLocal_330) != 0)
				{
					if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_1641[6 /*5*/], func_1362(func_1366(iLocal_330))))
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_1641[6 /*5*/], func_1362(func_1366(iLocal_330)), true);
						func_1363(iLocal_330);
						func_1367(iLocal_330);
						func_1368(iLocal_330);
						iLocal_330 = func_1366(iLocal_330);
						func_1356(iLocal_330);
						func_1355(iLocal_330);
						func_1357(iLocal_330);
						__LIB_1__::func_221(iLocal_311, 0, 1);
						__LIB_1__::func_221(iLocal_314, 0, 1);
						__LIB_1__::func_221(iLocal_315, 0, 1);
						if (!CAM::IS_CAM_ACTIVE(Local_273[1 /*8*/]))
						{
							CAM::SET_CAM_ACTIVE(Local_273[2 /*8*/], false);
							CAM::SET_CAM_ACTIVE(Local_273[1 /*8*/], true);
						}
						bLocal_328 = true;
						func_1340(5);
					}
				}
			}
			else if (func_1346(fVar0) && __LIB_0__::func_572(iLocal_311, 0))
			{
				if (func_1370(iLocal_330) != 0)
				{
					if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_1641[6 /*5*/], func_1362(func_1370(iLocal_330))))
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_1641[6 /*5*/], func_1362(func_1370(iLocal_330)), true);
						func_1364(iLocal_330);
						func_1367(iLocal_330);
						func_1368(iLocal_330);
						iLocal_330 = func_1370(iLocal_330);
						func_1356(iLocal_330);
						func_1355(iLocal_330);
						func_1357(iLocal_330);
						__LIB_1__::func_221(iLocal_311, 0, 1);
						__LIB_1__::func_221(iLocal_314, 0, 1);
						__LIB_1__::func_221(iLocal_315, 0, 1);
						if (!CAM::IS_CAM_ACTIVE(Local_273[1 /*8*/]))
						{
							CAM::SET_CAM_ACTIVE(Local_273[2 /*8*/], false);
							CAM::SET_CAM_ACTIVE(Local_273[1 /*8*/], true);
						}
						bLocal_328 = true;
						func_1340(5);
					}
				}
			}
			break;
		case 5:
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), true);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_GAME_MENU_ACCEPT"), true);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_LT"), true);
			if (ANIMSCENE::_0x8D81E7824B7753F7(Local_1641[6 /*5*/], func_1371(iLocal_330), 1))
			{
				__LIB_1__::func_221(iLocal_311, 1, 1);
				__LIB_1__::func_221(iLocal_315, 1, 1);
				__LIB_1__::func_221(iLocal_314, 1, 1);
				__LIB_0__::func_37(&uLocal_321);
				func_1340(4);
				iVar1 = func_1372(iLocal_330);
				if (!iLocal_334[iVar1])
				{
					if (!__LIB_5__::func_463())
					{
						__LIB_12__::func_876(uParam0, "ABI3_POSECOMM", 0);
						iLocal_334[iVar1] = 1;
						iLocal_344++;
					}
				}
				else if (bLocal_345)
				{
					if (iLocal_344 > 7)
					{
						__LIB_12__::func_876(uParam0, "ABI3_POSE_END", 0);
						bLocal_345 = false;
					}
				}
			}
			break;
		case 6:
			if (!bLocal_163)
			{
				if (!__LIB_5__::func_463())
				{
					if (__LIB_12__::func_876(uParam0, "RABI3_PHOTO", 0))
					{
						bLocal_163 = true;
						return false;
					}
				}
			}
			if (bLocal_163)
			{
				if (__LIB_8__::func_684("RABI3_PHOTO"))
				{
					return false;
				}
			}
			if (iLocal_194[11] == 3 && (ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(Local_1641[6 /*5*/]) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_1641[6 /*5*/], false)))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(Local_1641[6 /*5*/]);
				ANIMSCENE::_DELETE_ANIM_SCENE(Local_1641[7 /*5*/]);
				return true;
			}
			if (ANIMSCENE::_0x1F0E401031E20146(Local_1641[6 /*5*/], func_1362(func_1361(iLocal_330))))
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_TIME(Local_1641[6 /*5*/]) > 3f)
				{
					CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
				}
			}
			if (fLocal_310 > 1f)
			{
				if (func_761(uParam0, &iLocal_70, 11, 1, 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */))
				{
					CLOCK::PAUSE_CLOCK(false, 0);
					CLOCK::SET_CLOCK_TIME(13, 0, 0);
					if (!Local_22.f_24)
					{
						if (!CAM::IS_CAM_ACTIVE(Local_273[2 /*8*/]))
						{
							CAM::SET_CAM_ACTIVE(Local_273[2 /*8*/], true);
							CAM::SET_CAM_ACTIVE(Local_273[1 /*8*/], false);
						}
					}
					func_1373(1);
					bLocal_170 = true;
					AUDIO::_PLAY_SOUND_FROM_POSITION("Camera_Flash", func_206(30), "ABIGAIL_3_SOUNDSET", false, 0, false, 0);
					if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_1641[6 /*5*/], func_1362(func_1361(iLocal_330))) && ANIMSCENE::_0x23E33CB9F4A3F547(Local_1641[7 /*5*/], "pl_idle_TakePic"))
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_1641[6 /*5*/], func_1362(func_1361(iLocal_330)), true);
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_1641[7 /*5*/], "pl_idle_TakePic", true);
					}
				}
			}
			fLocal_310 = (fLocal_310 + MISC::GET_FRAME_TIME());
	}
	func_1374(&iLocal_60);
	if (bLocal_170)
	{
		if (Local_22.f_24)
		{
			if (!__LIB_0__::func_75(&uLocal_386))
			{
				__LIB_1__::func_148(&uLocal_386);
			}
			else if (__LIB_0__::func_265(&uLocal_386) > 2f)
			{
				if (!CAM::IS_CAM_ACTIVE(Local_273[1 /*8*/]))
				{
					CAM::SET_CAM_ACTIVE(Local_273[2 /*8*/], false);
					CAM::SET_CAM_ACTIVE(Local_273[1 /*8*/], true);
				}
				bLocal_170 = false;
			}
		}
	}
	return false;
}

void func_785()
{
	if (bLocal_1724)
	{
		HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
		bLocal_1724 = false;
	}
}

void func_786()
{
	if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, Local_1641[10 /*5*/]) || iLocal_47 == 6)
	{
		CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME_2();
	}
}

void func_787(var uParam0)
{
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_1641[10 /*5*/], false))
	{
		if (func_314(10, 0, 0))
		{
			if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_1641[10 /*5*/], "pl_Enter_Idle") && !ANIMSCENE::_0x23E33CB9F4A3F547(Local_1641[10 /*5*/], "pl_Enter_Idle"))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_1641[10 /*5*/], "pl_Enter_Idle");
				return;
			}
			if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_1641[10 /*5*/], "pl_Enter_Room") && !ANIMSCENE::_0x23E33CB9F4A3F547(Local_1641[10 /*5*/], "pl_Enter_Room"))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_1641[10 /*5*/], "pl_Enter_Room");
				return;
			}
			func_315(10);
		}
		if (iLocal_55 >= 3)
		{
			if (!bLocal_149 && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_1641[9 /*5*/], false))
			{
				TASK::TASK_ENTER_ANIM_SCENE(iLocal_67, Local_1641[10 /*5*/], "AbigailRoberts", "pl_Enter_Idle", 1069379748 /* Float: 1.48f */, 1, 0, 20000, -1082130432 /* Float: -1f */);
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_1641[10 /*5*/], "pl_Idle_Loop");
				__LIB_12__::func_876(uParam0, "RABI3_CIN", 0);
				bLocal_149 = true;
			}
		}
	}
	else if (ANIMSCENE::_0x8D81E7824B7753F7(Local_1641[10 /*5*/], "s_Idle_Loop", 1))
	{
		if (!ANIMSCENE::_0x1F0E401031E20146(Local_1641[10 /*5*/], "pl_Idle_Loop"))
		{
			if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_1641[10 /*5*/], "pl_Idle_Loop"))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_1641[10 /*5*/], "pl_Idle_Loop", true);
			}
		}
	}
}

bool func_788(var uParam0)
{
	char* sVar0;
	sVar0 = __LIB_16__::func_461(*uParam0);
	if (!AUDIO::LOAD_STREAM("Audience", sVar0))
	{
	}
	if (!HUD::IS_NAMED_RENDERTARGET_REGISTERED(uParam0->f_1075))
	{
		HUD::REGISTER_NAMED_RENDERTARGET(uParam0->f_1075, false);
		HUD::LINK_NAMED_RENDERTARGET(uParam0->f_1086);
		if (!HUD::IS_NAMED_RENDERTARGET_LINKED(uParam0->f_1086))
		{
			HUD::RELEASE_NAMED_RENDERTARGET(uParam0->f_1075);
			return false;
		}
	}
	uParam0->f_1074 = HUD::GET_NAMED_RENDERTARGET_RENDER_ID(uParam0->f_1075);
	if (uParam0->f_1072)
	{
		if (uParam0->f_1090 == 0)
		{
			uParam0->f_1090 = ENTITY::_0x6F3068258A499E52(uParam0->f_1087, uParam0->f_1083, 7);
		}
		else if (ENTITY::_0x1FF441D7954F8709(uParam0->f_1090))
		{
			uParam0->f_1089 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(uParam0->f_1090));
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1089))
		{
			return false;
		}
		OBJECT::_0xF49574E2332A8F06(uParam0->f_1089, 0f);
		OBJECT::_0x04D1D4E411CE52D0(uParam0->f_1089, uParam0->f_1074);
	}
	HUD::SET_TEXT_RENDER_ID(uParam0->f_1074);
	GRAPHICS::DRAW_RECT(0.5f, 0.5f, 1f, 1f, 0, 0, 0, 255, false, true);
	uParam0->f_1071 = 1;
	return true;
}

bool func_789()
{
	if (iLocal_54 > 0)
	{
		if (bLocal_143)
		{
			return true;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_81))
		{
			iLocal_81 = __LIB_8__::func_931(POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(joaat("BLA_DOWNTOWN"), 2, 0, false, true, func_206(32)), func_206(32), func_207(32), 1, 1, 1, 1, 1, 1, 0, 0, 0, 0);
			return false;
		}
		else
		{
			AUDIO::STOP_PED_SPEAKING(iLocal_81, true);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_82))
		{
			iLocal_82 = __LIB_8__::func_931(POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(joaat("BLA_DOWNTOWN"), 2, 0, false, true, func_206(33)), func_206(33), func_207(33), 1, 1, 1, 1, 1, 1, 0, 0, 0, 0);
			return false;
		}
		else
		{
			AUDIO::STOP_PED_SPEAKING(iLocal_82, true);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_83))
		{
			iLocal_83 = __LIB_8__::func_931(POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(joaat("BLA_DOWNTOWN"), 1, 0, false, true, func_206(35)), func_206(35), func_207(35), 1, 1, 2, 1, 1, 1, 0, 0, 0, 0);
			return false;
		}
		else
		{
			AUDIO::STOP_PED_SPEAKING(iLocal_83, true);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_84))
		{
			iLocal_84 = __LIB_8__::func_931(POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(joaat("BLA_DOWNTOWN"), 1, 0, false, true, func_206(36)), func_206(36), func_207(36), 1, 1, 2, 1, 1, 1, 0, 0, 0, 0);
			return false;
		}
		else
		{
			AUDIO::STOP_PED_SPEAKING(iLocal_84, true);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_85))
		{
			iLocal_85 = __LIB_8__::func_931(POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(joaat("BLA_DOWNTOWN"), 1, 0, false, true, func_206(34)), func_206(34), func_207(34), 1, 1, 2, 1, 1, 1, 0, 0, 0, 0);
			return false;
		}
		else
		{
			AUDIO::STOP_PED_SPEAKING(iLocal_85, true);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_86))
		{
			iLocal_86 = __LIB_8__::func_931(POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(joaat("BLA_DOWNTOWN"), 1, 0, false, true, func_206(37)), func_206(37), func_207(37), 1, 1, 2, 1, 1, 1, 0, 0, 0, 0);
			return false;
		}
		else
		{
			AUDIO::STOP_PED_SPEAKING(iLocal_86, true);
		}
		bLocal_143 = true;
		return true;
	}
	return false;
}

void func_790()
{
	if (__LIB_0__::func_272(iLocal_81, 0))
	{
		if (!__LIB_0__::func_163(iLocal_81, 1647992574))
		{
			TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_81, func_206(32), 5f, -1, false, false, false, false);
		}
	}
	if (__LIB_0__::func_272(iLocal_82, 0))
	{
		if (!__LIB_0__::func_163(iLocal_82, 1647992574))
		{
			TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_82, func_206(33), 5f, -1, false, false, false, false);
		}
	}
	if (__LIB_0__::func_272(iLocal_83, 0))
	{
		if (!__LIB_0__::func_163(iLocal_83, 1647992574))
		{
			TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_83, func_206(35), 5f, -1, false, false, false, false);
		}
	}
	if (__LIB_0__::func_272(iLocal_84, 0))
	{
		if (!__LIB_0__::func_163(iLocal_84, 1647992574))
		{
			TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_84, func_206(36), 5f, -1, false, false, false, false);
		}
	}
	if (__LIB_0__::func_272(iLocal_85, 0))
	{
		if (!__LIB_0__::func_163(iLocal_85, 993674639))
		{
			__LIB_1__::func_473(iLocal_85, joaat("WORLD_HUMAN_SMOKE"), 0, 0, 0, -1082130432 /* Float: -1f */);
		}
	}
	if (__LIB_0__::func_272(iLocal_86, 0))
	{
		if (!__LIB_0__::func_163(iLocal_86, 993674639))
		{
			__LIB_1__::func_473(iLocal_86, joaat("WORLD_HUMAN_STAND_WAITING"), 0, 0, joaat("WORLD_HUMAN_STAND_WAITING_FEMALE_A"), -1082130432 /* Float: -1f */);
		}
	}
}

void func_791(var uParam0)
{
	uParam0->f_1076 = "PL_TOON_SKETCHING_FOR_SWEETHEART";
	uParam0->f_1075 = "bla_theater";
	uParam0->f_1086 = joaat("SCRIPT_RT_BLA_THEATER");
	uParam0->f_1087 = joaat("S_MOVIEPROJECTION01X");
	uParam0->f_1071 = 0;
	uParam0->f_1070 = 1;
	uParam0->f_1072 = 1;
	uParam0->f_1090 = 0;
	uParam0->f_1095 = 1.5f;
	uParam0->f_1077 = { -772.29f, -1362.65f, 45.32f };
	uParam0->f_1080 = { 0f, 0f, 90f };
	uParam0->f_1083 = { -781.485f, -1363.402f, 47.649f };
	uParam0->f_1093 = 0.5f;
	uParam0->f_1094 = 0.5f;
	uParam0->f_1091 = 0.66f;
	uParam0->f_1092 = 0.46f;
	uParam0->f_58[0] = uParam0->f_1086;
	uParam0->f_58[1] = uParam0->f_1087;
	uParam0->f_1096 = "Cartoon_Sketching_For_Sweetheart_Soundset";
	uParam0->f_1097 = { -778.2f, -1362.5f, 44.75f };
	*uParam0 = 39;
}

void func_792(var uParam0)
{
	if (!__LIB_8__::func_684("RABI3_WHATNOW"))
	{
		if (!Local_1641[8 /*5*/].f_4)
		{
			if (func_323(8, 0, 0))
			{
				Local_1641[8 /*5*/].f_4 = 1;
			}
		}
		else if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_1641[8 /*5*/], false) || (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_1641[8 /*5*/], false) && ANIMSCENE::_GET_ANIM_SCENE_TIME(Local_1641[8 /*5*/]) >= 10.389f))
		{
			__LIB_0__::func_172(iLocal_271);
		}
	}
	if (Local_1641[8 /*5*/].f_4 && iLocal_55 < 2)
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_1641[8 /*5*/], false))
		{
			if (!__LIB_0__::func_75(&uLocal_389))
			{
				__LIB_1__::func_148(&uLocal_389);
			}
			else if (__LIB_0__::func_264(&uLocal_389) > 6f)
			{
				if (!TASK::IS_PED_WALKING(Global_35) && !__LIB_0__::func_163(Global_35, 1369124074))
				{
					if (!__LIB_0__::func_75(&uLocal_392))
					{
						__LIB_1__::func_283(&uLocal_392, 0);
					}
					else if (__LIB_0__::func_264(&uLocal_392) > 1.5f)
					{
						__LIB_12__::func_876(uParam0, "RABI3_CIN_DAWD", 0);
						__LIB_0__::func_37(&uLocal_389);
						__LIB_0__::func_37(&uLocal_392);
					}
				}
			}
		}
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_1641[9 /*5*/], false) && iLocal_55 < 1)
	{
		if (!__LIB_0__::func_163(iLocal_67, joaat("SCRIPT_TASK_FOLLOW_AND_CONVERSE_WITH_PED")))
		{
			func_317();
		}
		else
		{
			func_1335();
		}
	}
	if (!CAM::_0xA24C1D341C6E0D53(0, 0, 0))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_1641[8 /*5*/], false))
		{
			if (TASK::IS_PED_STILL(Global_35))
			{
				if (!PED::IS_PED_FACING_PED(Global_35, iLocal_67, 30f))
				{
					if (!__LIB_0__::func_163(Global_35, -875674219))
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(Global_35, iLocal_67, 10, -1f, -1f, -1f);
					}
				}
			}
		}
	}
}

bool func_794(var uParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(iLocal_72))
	{
		if (!bLocal_148)
		{
			if (__LIB_2__::func_763(525, 0))
			{
				__LIB_2__::func_753(525, 0, 1, 0, 0);
			}
			bLocal_148 = true;
			return false;
		}
		else
		{
			iLocal_72 = __LIB_2__::func_965(525, 1, 0, 0, 1, 1);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_72))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_72, func_206(19), func_207(19), true, false, true);
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_72, func_206(19), 2f, 0, false, false, false, false);
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_72, false);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_72, joaat("REL_CIVMALE"));
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_72, false);
				__LIB_12__::func_875(uParam0, iLocal_72, "BW_CINEMAWORKER", 0);
			}
		}
	}
	else
	{
		return true;
	}
	return false;
}

bool func_795(var uParam0)
{
	switch (iLocal_55)
	{
		case 0:
			if (func_314(9, 0, 0))
			{
				iLocal_55 = 1;
			}
			break;
		case 1:
			func_792(uParam0);
			if (!__LIB_0__::func_266(iLocal_67, func_206(43), 1.5f, 1, 1))
			{
				if (!__LIB_0__::func_163(iLocal_67, 713668775))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_67, func_206(43), 1f, 20000, 0.25f, 0, func_207(43));
				}
			}
			if (__LIB_0__::func_266(Global_35, -791.1532f, -1366.174f, 42.9258f, 1.5f, 1, 1))
			{
				PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "ABI3_TOCINEMA");
				func_779();
				__LIB_12__::func_773(1, 0, 1, 1);
				func_315(9);
				CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME_2();
				func_323(9, 0, 0);
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1641[8 /*5*/]))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(Local_1641[8 /*5*/]);
				}
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_67, func_206(43), 1f, 20000, 0.25f, 0, func_207(43));
				iLocal_55 = 2;
			}
			break;
		case 2:
			CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME_2();
			__LIB_12__::func_773(1, 0, 1, 1);
			if (ANIMSCENE::_GET_ANIM_SCENE_TIME(Local_1641[9 /*5*/]) > 3f)
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_67, func_206(43), 1f, 20000, 0.25f, 0, func_207(43));
				iLocal_55 = 3;
			}
			break;
		case 3:
			CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME_2();
			if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_1641[9 /*5*/], false) || ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(Local_1641[9 /*5*/]))
			{
				return true;
			}
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_1641[9 /*5*/], false))
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_TIME(Local_1641[9 /*5*/]) >= 5f)
				{
					func_761(uParam0, &iLocal_67, 12, 1, 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */);
				}
			}
			break;
		case 4:
			return true;
	}
	return false;
}

int func_799(int iParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
			__LIB_1__::func_148(&(iParam1->f_13));
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
					if (__LIB_13__::func_320(iParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_799(iParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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
					__LIB_11__::func_617(iParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
					if (__LIB_13__::func_321(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
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
					if (__LIB_6__::func_698(*iParam0, iParam1, uParam3))
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
					__LIB_10__::func_933(*iParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					__LIB_13__::func_321(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
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
			__LIB_6__::func_699(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

void func_801()
{
	if (!CAM::DOES_CAM_EXIST(iLocal_129))
	{
		iLocal_129 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), -783.0751f, -1364.081f, 44.7791f, -1.4797f, 0.0016f, -82.5499f, 45f, false, 2);
	}
	if (!CAM::DOES_CAM_EXIST(iLocal_130))
	{
		iLocal_130 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), -782.8361f, -1364.685f, 44.7736f, -1.6568f, 0.0132f, -74.5864f, 43f, false, 2);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_129) && CAM::DOES_CAM_EXIST(iLocal_130))
	{
		CAM::SET_CAM_ACTIVE(iLocal_129, true);
		CAM::SET_CAM_ACTIVE(iLocal_130, true);
		CAM::SHAKE_CAM(iLocal_129, "HAND_SHAKE", 0.1f);
		CAM::SHAKE_CAM(iLocal_130, "HAND_SHAKE", 0.1f);
		CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_130, iLocal_129, 10000, 1, 1);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		bLocal_1578 = true;
	}
}

bool func_802()
{
	if (bLocal_356)
	{
		return true;
	}
	if (!INTERIOR::IS_VALID_INTERIOR(iLocal_353))
	{
		iLocal_353 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-779.5779f, -1362.338f, 43.1562f, "bla_theater_int");
	}
	else
	{
		INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_353);
		if (INTERIOR::IS_INTERIOR_READY(iLocal_353))
		{
			bLocal_356 = true;
			return true;
		}
	}
	return false;
}

void func_803(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		(uParam0[iVar0 /*5*/])->f_2 = 1f;
		(uParam0[iVar0 /*5*/])->f_3 = 0f;
		(uParam0[iVar0 /*5*/])->f_4 = 1f;
		(uParam0[iVar0 /*5*/])->f_1 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		uParam0->f_31[iVar0 /*5*/].f_2 = 1f;
		uParam0->f_31[iVar0 /*5*/].f_3 = 0f;
		uParam0->f_31[iVar0 /*5*/].f_4 = 1f;
		uParam0->f_31[iVar0 /*5*/].f_1 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		uParam0->f_107[iVar0 /*5*/].f_2 = 1f;
		uParam0->f_107[iVar0 /*5*/].f_3 = 0f;
		uParam0->f_107[iVar0 /*5*/].f_4 = 1f;
		uParam0->f_107[iVar0 /*5*/].f_1 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 21)
	{
		uParam0->f_118[iVar0 /*5*/].f_2 = 1f;
		uParam0->f_118[iVar0 /*5*/].f_3 = 0f;
		uParam0->f_118[iVar0 /*5*/].f_4 = 1f;
		uParam0->f_118[iVar0 /*5*/].f_1 = 0;
		iVar0++;
	}
	__LIB_1__::func_683(&(Global_1394141.f_1325), -2147483648);
}

int func_804(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	if (iParam1 == -1 || !__LIB_0__::func_27(Global_1394141.f_1325, -2147483648))
	{
		return 1;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	if (!__LIB_0__::func_27(Global_1394141.f_1325, 1))
	{
		iVar1 = __LIB_12__::func_807(iParam1);
		iVar0 = 0;
		while (iVar0 <= (iVar1 - 1))
		{
			iVar3 = iVar0;
			if (__LIB_12__::func_810(uParam0[iVar0 /*5*/], __LIB_12__::func_808(iParam1), __LIB_12__::func_809(iParam1, iVar3), 1065353216 /* Float: 1f */))
			{
				iVar2++;
			}
			iVar0++;
		}
		if (iVar2 >= iVar1)
		{
			__LIB_1__::func_683(&(Global_1394141.f_1325), 1);
		}
	}
	iVar2 = 0;
	if (!__LIB_0__::func_27(Global_1394141.f_1325, 8))
	{
		iVar1 = __LIB_12__::func_811(iParam1);
		iVar0 = 0;
		while (iVar0 <= (iVar1 - 1))
		{
			iVar4 = iVar0;
			if (__LIB_12__::func_810(&(uParam0->f_31[iVar0 /*5*/]), __LIB_12__::func_812(iParam1), __LIB_12__::func_813(iParam1, iVar4), 1065353216 /* Float: 1f */))
			{
				iVar2++;
			}
			iVar0++;
		}
		if (iVar2 >= iVar1)
		{
			__LIB_1__::func_683(&(Global_1394141.f_1325), 8);
		}
	}
	iVar2 = 0;
	if (!__LIB_0__::func_27(Global_1394141.f_1325, 2048))
	{
		iVar1 = __LIB_12__::func_814(iParam1);
		iVar0 = 0;
		while (iVar0 <= (iVar1 - 1))
		{
			iVar5 = iVar0;
			if (__LIB_12__::func_810(&(uParam0->f_107[iVar0 /*5*/]), __LIB_12__::func_815(iParam1), __LIB_12__::func_816(iParam1, iVar5), 1065353216 /* Float: 1f */))
			{
				iVar2++;
			}
			iVar0++;
		}
		if (iVar2 >= iVar1)
		{
			__LIB_1__::func_683(&(Global_1394141.f_1325), 2048);
		}
	}
	switch (iParam1)
	{
		case 0:
			if (!__LIB_0__::func_27(Global_1394141.f_1325, 64) && __LIB_12__::func_810(&(uParam0->f_118[0 /*5*/]), __LIB_12__::func_817(iParam1, 0), __LIB_12__::func_818(iParam1, 0), 1065353216 /* Float: 1f */))
			{
				__LIB_1__::func_683(&(Global_1394141.f_1325), 64);
			}
			if ((!__LIB_0__::func_27(Global_1394141.f_1325, 16384) && __LIB_12__::func_810(&(uParam0->f_118[1 /*5*/]), __LIB_12__::func_817(iParam1, 1), __LIB_12__::func_818(iParam1, 1), 1065353216 /* Float: 1f */)) && __LIB_12__::func_810(&(uParam0->f_118[2 /*5*/]), __LIB_12__::func_817(iParam1, 2), __LIB_12__::func_818(iParam1, 2), 1065353216 /* Float: 1f */))
			{
				__LIB_1__::func_683(&(Global_1394141.f_1325), 16384);
			}
			break;
		case 1:
		case 2:
			iVar2 = 0;
			if (!__LIB_0__::func_27(Global_1394141.f_1325, 2097152))
			{
				iVar1 = __LIB_12__::func_819(iParam1);
				iVar0 = 0;
				while (iVar0 <= (iVar1 - 1))
				{
					iVar6 = iVar0;
					if (__LIB_12__::func_810(&(uParam0->f_118[iVar0 /*5*/]), __LIB_12__::func_817(iParam1, 0), __LIB_12__::func_818(iParam1, iVar6), 1065353216 /* Float: 1f */))
					{
						iVar2++;
					}
					iVar0++;
				}
				if (iVar2 >= iVar1)
				{
					__LIB_1__::func_683(&(Global_1394141.f_1325), 2097152);
				}
			}
			break;
	}
	return 1;
}

void func_805(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_66[0]))
	{
		uParam0->f_66[0] = OBJECT::CREATE_OBJECT_NO_OFFSET(uParam0->f_58[0], uParam0->f_1077, true, true, false, true);
		uParam0->f_1088 = uParam0->f_66[0];
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1088))
	{
		ENTITY::SET_ENTITY_ROTATION(uParam0->f_1088, uParam0->f_1080, 2, true);
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_1088, false);
		ENTITY::SET_ENTITY_DYNAMIC(uParam0->f_1088, false);
		ENTITY::SET_ENTITY_PROOFS(uParam0->f_1088, 31, false);
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_1088, true);
	}
}

void func_806(int iParam0, vector3 vParam1)
{
	struct<9> Var0;
	__LIB_13__::func_11(iParam0);
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
	Var0 = { vParam1 };
	Var0.f_7 = -1;
	Var0.f_8 = 4;
	_NAMESPACE29::_0x66F9EB44342BB4C5(iParam0, &Var0);
}

void func_807(var uParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	if (__LIB_0__::func_27(Global_1394141.f_1325, 1))
	{
		if (__LIB_0__::func_27(Global_1394141.f_1325, 2) && __LIB_16__::func_496(uParam0, __LIB_12__::func_820(uParam0), &(uParam0->f_229), __LIB_12__::func_821(uParam0), __LIB_12__::func_822(uParam0)))
		{
			__LIB_1__::func_681(&(Global_1394141.f_1325), 2);
		}
		if (__LIB_0__::func_27(Global_1394141.f_1325, 4) && __LIB_16__::func_497(uParam0, __LIB_12__::func_823(uParam0), &(uParam0->f_229), __LIB_12__::func_821(uParam0), __LIB_12__::func_822(uParam0)))
		{
			__LIB_1__::func_681(&(Global_1394141.f_1325), 4);
		}
	}
	if (__LIB_0__::func_27(Global_1394141.f_1325, 8))
	{
		if (__LIB_0__::func_27(Global_1394141.f_1325, 16) && __LIB_16__::func_496(&(uParam0->f_31), __LIB_12__::func_820(uParam0), &(uParam0->f_232), __LIB_12__::func_821(uParam0), __LIB_12__::func_822(uParam0)))
		{
			__LIB_1__::func_681(&(Global_1394141.f_1325), 16);
		}
		if (__LIB_0__::func_27(Global_1394141.f_1325, 32) && __LIB_16__::func_497(&(uParam0->f_31), __LIB_12__::func_823(uParam0), &(uParam0->f_232), __LIB_12__::func_821(uParam0), __LIB_12__::func_822(uParam0)))
		{
			__LIB_1__::func_681(&(Global_1394141.f_1325), 32);
		}
	}
	if (__LIB_0__::func_27(Global_1394141.f_1325, 2048))
	{
		if (__LIB_0__::func_27(Global_1394141.f_1325, 4096) && __LIB_16__::func_496(&(uParam0->f_107), __LIB_12__::func_820(uParam0), &(uParam0->f_235), __LIB_12__::func_821(uParam0), __LIB_12__::func_822(uParam0)))
		{
			__LIB_1__::func_681(&(Global_1394141.f_1325), 4096);
		}
		if (__LIB_0__::func_27(Global_1394141.f_1325, 8192) && __LIB_16__::func_497(&(uParam0->f_107), __LIB_12__::func_823(uParam0), &(uParam0->f_235), __LIB_12__::func_821(uParam0), __LIB_12__::func_822(uParam0)))
		{
			__LIB_1__::func_681(&(Global_1394141.f_1325), 8192);
		}
	}
	if (iParam1 == 0)
	{
		if (__LIB_0__::func_27(Global_1394141.f_1325, 64))
		{
			if (__LIB_0__::func_27(Global_1394141.f_1325, 128) && __LIB_16__::func_498(&(uParam0->f_118[0 /*5*/]), __LIB_12__::func_820(uParam0), &(uParam0->f_238), __LIB_12__::func_824(uParam0), __LIB_12__::func_822(uParam0)))
			{
				__LIB_1__::func_681(&(Global_1394141.f_1325), 128);
			}
			if (__LIB_0__::func_27(Global_1394141.f_1325, 256) && __LIB_16__::func_499(&(uParam0->f_118[0 /*5*/]), __LIB_12__::func_823(uParam0), &(uParam0->f_238), __LIB_12__::func_824(uParam0), __LIB_12__::func_822(uParam0)))
			{
				__LIB_1__::func_681(&(Global_1394141.f_1325), 256);
			}
			if (__LIB_0__::func_27(Global_1394141.f_1325, 512) && __LIB_16__::func_498(&(uParam0->f_118[0 /*5*/]), __LIB_12__::func_820(uParam0), &(uParam0->f_238), 0.5f, __LIB_12__::func_822(uParam0)))
			{
				__LIB_1__::func_681(&(Global_1394141.f_1325), 512);
			}
			if (__LIB_0__::func_27(Global_1394141.f_1325, 1024) && __LIB_16__::func_499(&(uParam0->f_118[0 /*5*/]), __LIB_12__::func_823(uParam0), &(uParam0->f_238), 0.5f, __LIB_12__::func_822(uParam0)))
			{
				__LIB_1__::func_681(&(Global_1394141.f_1325), 1024);
			}
		}
		if (__LIB_0__::func_27(Global_1394141.f_1325, 16384))
		{
			if (__LIB_0__::func_27(Global_1394141.f_1325, 32768) && __LIB_16__::func_500(1, 2, &(uParam0->f_118), __LIB_12__::func_820(uParam0), &(uParam0->f_241), __LIB_12__::func_824(uParam0), __LIB_12__::func_822(uParam0)))
			{
				__LIB_1__::func_681(&(Global_1394141.f_1325), 32768);
			}
			if (__LIB_0__::func_27(Global_1394141.f_1325, 65536) && __LIB_16__::func_501(1, 2, &(uParam0->f_118), __LIB_12__::func_823(uParam0), &(uParam0->f_241), __LIB_12__::func_824(uParam0), __LIB_12__::func_822(uParam0)))
			{
				__LIB_1__::func_681(&(Global_1394141.f_1325), 65536);
			}
			if (__LIB_0__::func_27(Global_1394141.f_1325, 131072) && __LIB_16__::func_500(1, 2, &(uParam0->f_118), __LIB_12__::func_820(uParam0), &(uParam0->f_241), 0.5f, __LIB_12__::func_822(uParam0)))
			{
				__LIB_1__::func_681(&(Global_1394141.f_1325), 131072);
			}
			if (__LIB_0__::func_27(Global_1394141.f_1325, 262144) && __LIB_16__::func_501(1, 2, &(uParam0->f_118), __LIB_12__::func_823(uParam0), &(uParam0->f_241), 0.5f, __LIB_12__::func_822(uParam0)))
			{
				__LIB_1__::func_681(&(Global_1394141.f_1325), 262144);
			}
		}
		if (__LIB_0__::func_27(Global_1394141.f_1325, 524288))
		{
			bVar0 = true;
			if (!__LIB_16__::func_496(&(uParam0->f_31), __LIB_12__::func_820(uParam0), &(uParam0->f_232), 0.1f, __LIB_12__::func_822(uParam0)))
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				__LIB_1__::func_681(&(Global_1394141.f_1325), 524288);
			}
		}
		if (__LIB_0__::func_27(Global_1394141.f_1325, 1048576))
		{
			bVar1 = true;
			if (!__LIB_16__::func_497(&(uParam0->f_31), __LIB_12__::func_823(uParam0), &(uParam0->f_232), 0.1f, __LIB_12__::func_822(uParam0)))
			{
				bVar1 = false;
			}
			if (bVar1)
			{
				__LIB_1__::func_681(&(Global_1394141.f_1325), 1048576);
			}
		}
	}
	if (iParam1 == 1 || iParam1 == 2)
	{
		if (__LIB_0__::func_27(Global_1394141.f_1325, 2097152))
		{
			if (__LIB_0__::func_27(Global_1394141.f_1325, 4194304) && __LIB_16__::func_496(&(uParam0->f_118), __LIB_12__::func_825(uParam0), &(uParam0->f_238), __LIB_12__::func_821(uParam0), __LIB_12__::func_822(uParam0)))
			{
				__LIB_1__::func_681(&(Global_1394141.f_1325), 4194304);
			}
			if (__LIB_0__::func_27(Global_1394141.f_1325, 8388608) && __LIB_16__::func_497(&(uParam0->f_118), __LIB_12__::func_823(uParam0), &(uParam0->f_238), __LIB_12__::func_821(uParam0), __LIB_12__::func_822(uParam0)))
			{
				__LIB_1__::func_681(&(Global_1394141.f_1325), 8388608);
			}
		}
	}
}

bool func_808(int iParam0, int iParam1)
{
	if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
	{
		if (!CAM::IS_SCREEN_FADING_IN())
		{
			CAM::DO_SCREEN_FADE_IN(iParam0);
		}
	}
	if (iParam1 == 0 || CAM::IS_SCREEN_FADED_IN())
	{
		return true;
	}
	return false;
}

void func_811(var uParam0)
{
	if (uParam0->f_1071 == 0)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1088))
	{
		return;
	}
	if (!uParam0->f_1072)
	{
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_1088, true);
	}
	GRAPHICS::SET_TV_AUDIO_FRONTEND(false);
	GRAPHICS::SET_TV_VOLUME(uParam0->f_1095);
	if (uParam0->f_1072)
	{
		if (uParam0->f_1 != 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1088))
			{
				GRAPHICS::ATTACH_TV_AUDIO_TO_ENTITY(uParam0->f_1088);
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1089))
		{
			GRAPHICS::ATTACH_TV_AUDIO_TO_ENTITY(uParam0->f_1089);
		}
		else
		{
			GRAPHICS::ATTACH_TV_AUDIO_TO_ENTITY(uParam0->f_1088);
		}
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1089))
		{
			OBJECT::_0xF49574E2332A8F06(uParam0->f_1089, 5f);
		}
	}
	GRAPHICS::SET_TV_CHANNEL(-1);
	GRAPHICS::SET_TV_CHANNEL_PLAYLIST(0, uParam0->f_1076, true);
	GRAPHICS::SET_TV_CHANNEL(0);
	if (AUDIO::LOAD_STREAM("Audience", __LIB_16__::func_461(*uParam0)))
	{
		uParam0->f_1100 = AUDIO::_0x0556C784FA056628("Audience", __LIB_16__::func_461(*uParam0));
		AUDIO::PLAY_STREAM_FROM_POSITION(uParam0->f_1097, uParam0->f_1100);
	}
}

void func_812(var uParam0, bool bParam1)
{
	if (GRAPHICS::GET_TV_CHANNEL() == -1)
	{
		return;
	}
	if (uParam0->f_1071)
	{
		if (!bParam1)
		{
			GRAPHICS::_0x32DE2BFFDA43E62A();
		}
		HUD::SET_TEXT_RENDER_ID(uParam0->f_1074);
		GRAPHICS::DRAW_TV_CHANNEL(uParam0->f_1093, uParam0->f_1094, uParam0->f_1091, uParam0->f_1092, 0f, 255, 255, 255, 128);
	}
}

void func_815(var uParam0, var uParam1)
{
	func_1435(uParam1);
	switch (iLocal_58)
	{
		case 0:
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(*uParam0, false))
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_TIME(*uParam0) >= func_1436(0))
				{
					if (ANIMSCENE::_0x23E33CB9F4A3F547(*uParam0, func_458(1)))
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*uParam0, func_458(1), true);
						ANIMSCENE::_0xAE6ADA8FE7E84ACC(*uParam0, func_458(0));
						if (bLocal_358)
						{
							ANIMSCENE::_0xDF7B5144E25CD3FE(*uParam0, func_458(3));
						}
						else
						{
							ANIMSCENE::_0xDF7B5144E25CD3FE(*uParam0, func_458(2));
						}
						ANIMSCENE::_0xDF7B5144E25CD3FE(*uParam0, func_458(4));
						ANIMSCENE::_0xDF7B5144E25CD3FE(*uParam0, func_458(5));
						PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_GAME_MENU_CANCEL"), true);
						PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_Y"), true);
						bLocal_360 = true;
						func_1437();
						func_1438(1);
					}
				}
			}
			break;
		case 1:
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_GAME_MENU_CANCEL"), true);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_Y"), true);
			if (func_1439())
			{
				if (ANIMSCENE::_0x23E33CB9F4A3F547(*uParam0, func_458(4)))
				{
					if (__LIB_5__::func_463())
					{
						__LIB_5__::func_20(0, 0);
					}
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*uParam0, func_458(4), true);
					func_823(1);
					func_822(1);
					bLocal_362 = true;
					func_1438(5);
				}
			}
			else if (func_1440() || iLocal_166)
			{
				bLocal_363 = true;
				if (ANIMSCENE::_0x23E33CB9F4A3F547(*uParam0, func_458(5)))
				{
					func_822(1);
					func_823(0);
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*uParam0, func_458(5), true);
					ANIMSCENE::_0xAE6ADA8FE7E84ACC(*uParam0, func_458(1));
					ANIMSCENE::_0xDF7B5144E25CD3FE(*uParam0, func_458(6));
					if (!bLocal_362)
					{
						ANIMSCENE::_0xAE6ADA8FE7E84ACC(*uParam0, func_458(4));
					}
					func_1438(3);
				}
			}
			else if (func_1441())
			{
				if (bLocal_358)
				{
					if (ANIMSCENE::_0x23E33CB9F4A3F547(*uParam0, func_458(3)))
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*uParam0, func_458(3), true);
						func_822(0);
						func_823(0);
						bLocal_361 = true;
						func_1438(2);
					}
				}
				else if (ANIMSCENE::_0x23E33CB9F4A3F547(*uParam0, func_458(2)))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*uParam0, func_458(2), true);
					func_822(0);
					func_823(0);
					bLocal_361 = true;
					func_1438(2);
				}
			}
			break;
		case 2:
			if (!ANIMSCENE::_0x23E33CB9F4A3F547(*uParam0, func_458(1)))
			{
				if (!ANIMSCENE::_0x0DF57F86FE71DBE5(*uParam0, func_458(1)))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(*uParam0, func_458(1));
				}
			}
			else if (bLocal_358)
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_TIME(*uParam0) >= func_1436(3))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*uParam0, func_458(1), true);
					ANIMSCENE::_0xAE6ADA8FE7E84ACC(*uParam0, func_458(3));
					func_1442();
					if (!bLocal_362)
					{
						func_1437();
					}
					func_1438(1);
				}
			}
			else if (ANIMSCENE::_GET_ANIM_SCENE_TIME(*uParam0) >= func_1436(2))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*uParam0, func_458(1), true);
				ANIMSCENE::_0xAE6ADA8FE7E84ACC(*uParam0, func_458(2));
				func_1442();
				if (!bLocal_362)
				{
					func_1437();
				}
				func_1438(1);
			}
			break;
		case 3:
			if (ANIMSCENE::_GET_ANIM_SCENE_TIME(*uParam0) >= 3f)
			{
				if (!bLocal_364)
				{
					if (!__LIB_5__::func_463())
					{
						if (__LIB_12__::func_876(uParam1, "RABI3_CIN_ARM", 0))
						{
							bLocal_364 = true;
						}
					}
				}
			}
			if (ANIMSCENE::_GET_ANIM_SCENE_TIME(*uParam0) >= func_1436(5) && ANIMSCENE::_0x23E33CB9F4A3F547(*uParam0, func_458(6)))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*uParam0, func_458(6), true);
				ANIMSCENE::_0xAE6ADA8FE7E84ACC(*uParam0, func_458(5));
				if (!bLocal_362)
				{
					func_1437();
					ANIMSCENE::_0xDF7B5144E25CD3FE(*uParam0, func_458(7));
				}
				if (!bLocal_361)
				{
					if (bLocal_358)
					{
						ANIMSCENE::_0xAE6ADA8FE7E84ACC(*uParam0, func_458(3));
					}
					else
					{
						ANIMSCENE::_0xAE6ADA8FE7E84ACC(*uParam0, func_458(2));
					}
				}
				func_1438(4);
			}
			break;
		case 4:
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_GAME_MENU_CANCEL"), true);
			if (func_1439() && ANIMSCENE::_0x23E33CB9F4A3F547(*uParam0, func_458(7)))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*uParam0, func_458(7), true);
				func_823(1);
				bLocal_362 = true;
				func_1438(5);
			}
			break;
		case 5:
			if (bLocal_363)
			{
				if (!ANIMSCENE::_0x23E33CB9F4A3F547(*uParam0, func_458(1)))
				{
					if (!ANIMSCENE::_0x23E33CB9F4A3F547(*uParam0, func_458(1)))
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(*uParam0, func_458(1));
					}
				}
				else if (ANIMSCENE::_GET_ANIM_SCENE_TIME(*uParam0) >= func_1436(7))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*uParam0, func_458(1), true);
					ANIMSCENE::_0xDF7B5144E25CD3FE(*uParam0, func_458(5));
					iLocal_166 = 1;
					func_1438(1);
				}
			}
			else if (!ANIMSCENE::_0x23E33CB9F4A3F547(*uParam0, func_458(1)))
			{
				if (!ANIMSCENE::_0x23E33CB9F4A3F547(*uParam0, func_458(1)))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(*uParam0, func_458(1));
				}
			}
			else if (ANIMSCENE::_GET_ANIM_SCENE_TIME(*uParam0) >= func_1436(4))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*uParam0, func_458(1), true);
				func_1442();
				func_1438(1);
			}
			break;
	}
}

void func_816()
{
	switch (iLocal_1535)
	{
		case 0:
			if (!__LIB_0__::func_139(iLocal_367))
			{
				iLocal_367 = __LIB_1__::func_877("INTERACT_LOOK", joaat("INPUT_FOCUS_CAM"), 5, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			}
			else
			{
				if (!CAM::DOES_CAM_EXIST(iLocal_1536))
				{
					iLocal_1536 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), __LIB_16__::func_465(4, 0), __LIB_16__::func_466(4, 0), CAM::GET_FINAL_RENDERED_CAM_FOV(), false, 2);
				}
				__LIB_1__::func_649(&iLocal_1535, 1);
			}
			break;
		case 1:
			if (!CAM::_0x251241CAEC707106())
			{
				PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FOCUS_CAM"), true);
				PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), true);
				PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), true);
			}
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
			}
			if (__LIB_0__::func_75(&uLocal_371) && __LIB_0__::func_265(&uLocal_371) > 2f)
			{
				if (__LIB_4__::func_863(iLocal_367, 1))
				{
					__LIB_1__::func_221(iLocal_367, 1, 1);
				}
				__LIB_0__::func_37(&uLocal_371);
			}
			if (__LIB_0__::func_567(iLocal_367, 1))
			{
				if (CAM::DOES_CAM_EXIST(iLocal_1536))
				{
					if (!CAM::IS_CAM_RENDERING(iLocal_1536))
					{
						CAM::SET_CAM_ACTIVE(iLocal_1536, true);
						CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
						__LIB_1__::func_515(iLocal_367, 1);
						__LIB_1__::func_221(iLocal_367, 0, 1);
						__LIB_1__::func_148(&uLocal_371);
						__LIB_1__::func_649(&iLocal_1535, 3);
					}
				}
			}
			break;
		case 3:
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FOCUS_CAM"), true);
			if (__LIB_0__::func_75(&uLocal_371) && __LIB_0__::func_265(&uLocal_371) > 2f)
			{
				if (__LIB_4__::func_863(iLocal_367, 1))
				{
					__LIB_1__::func_221(iLocal_367, 1, 1);
				}
				__LIB_0__::func_37(&uLocal_371);
			}
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 0, false);
			}
			if (__LIB_0__::func_567(iLocal_367, 1))
			{
				if (CAM::IS_CAM_RENDERING(iLocal_1536))
				{
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					__LIB_1__::func_515(iLocal_367, 1);
					__LIB_1__::func_221(iLocal_367, 0, 1);
					__LIB_1__::func_148(&uLocal_371);
					__LIB_1__::func_649(&iLocal_1535, 1);
				}
			}
			break;
		case 5:
			if (CAM::DOES_CAM_EXIST(iLocal_1536))
			{
				if (CAM::IS_CAM_RENDERING(iLocal_1536))
				{
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					CAM::SET_CAM_ACTIVE(iLocal_1536, false);
				}
				else
				{
					CAM::DESTROY_CAM(iLocal_1536, false);
					if (__LIB_0__::func_139(iLocal_367))
					{
						__LIB_1__::func_281(&iLocal_367, 1, 1);
					}
					__LIB_1__::func_649(&iLocal_1535, 6);
				}
			}
			break;
		case 6:
			break;
	}
}

void func_822(bool bParam0)
{
	if (bParam0)
	{
		__LIB_1__::func_281(&iLocal_365, 1, 1);
	}
	else if (__LIB_0__::func_139(iLocal_365))
	{
		__LIB_1__::func_221(iLocal_365, 0, 0);
	}
}

void func_823(bool bParam0)
{
	if (bParam0)
	{
		__LIB_1__::func_281(&iLocal_366, 1, 1);
	}
	else if (__LIB_0__::func_139(iLocal_366))
	{
		__LIB_1__::func_221(iLocal_366, 0, 0);
	}
}

void func_824(var uParam0)
{
	func_1451(uParam0);
	func_1452(uParam0);
	__LIB_16__::func_493(&(Local_399.f_104));
}

void func_825()
{
	int iVar0;
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (CAM::DOES_CAM_EXIST(Local_273[iVar0 /*8*/]))
		{
			CAM::SET_CAM_ACTIVE(Local_273[iVar0 /*8*/], false);
			CAM::DESTROY_CAM(Local_273[iVar0 /*8*/], false);
		}
		iVar0++;
	}
}

void func_829()
{
	if (bLocal_356)
	{
		if (INTERIOR::IS_VALID_INTERIOR(iLocal_353))
		{
			INTERIOR::UNPIN_INTERIOR(iLocal_353);
			bLocal_356 = false;
		}
	}
}

void func_831()
{
	if (!Local_1641[12 /*5*/].f_4)
	{
		if (!__LIB_8__::func_684("RABI3_BYE"))
		{
			if (func_323(12, 0, 0))
			{
				Local_1641[12 /*5*/].f_4 = 1;
			}
		}
	}
	if (!__LIB_0__::func_163(iLocal_67, joaat("SCRIPT_TASK_FOLLOW_AND_CONVERSE_WITH_PED")))
	{
		func_317();
	}
	else
	{
		func_1335();
	}
}

void func_832()
{
	if (!bLocal_153)
	{
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_1641[14 /*5*/], func_1454(5));
		if (ANIMSCENE::_GET_ANIM_SCENE_TIME(Local_1641[14 /*5*/]) > 4f)
		{
			if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_1641[14 /*5*/], func_1454(5)))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_1641[14 /*5*/], func_1454(5), true);
				iLocal_59 = 5;
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_1641[14 /*5*/], func_1454(func_1455(iLocal_59)));
				bLocal_153 = true;
			}
		}
	}
	else if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_1641[14 /*5*/], false))
	{
	}
	else if (ANIMSCENE::_GET_ANIM_SCENE_TIME(Local_1641[14 /*5*/]) >= func_1456(iLocal_59))
	{
		if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_1641[14 /*5*/], func_1454(func_1455(iLocal_59))))
		{
			ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_1641[14 /*5*/], func_1454(func_1455(iLocal_59)), true);
			ANIMSCENE::_0xAE6ADA8FE7E84ACC(Local_1641[14 /*5*/], func_1454(iLocal_59));
			iLocal_59 = func_1455(iLocal_59);
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_1641[14 /*5*/], func_1454(func_1455(iLocal_59)));
		}
	}
}

char* func_833(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "RABI3_WAGON";
		case 1:
			return "RABI3_WAGONWALK";
		case 2:
			return "RABI3_NOWAGON";
		case 3:
			return "RABI3_WHEREGO";
		case 4:
			return "RABI3_WAGON_IN";
		case 5:
			return "RABI3_WAGONGO";
		case 6:
			return "RABI3_CHAT";
		case 7:
			return "RABI3_ARRIVE";
		case 9:
			return "RABI3_BGPICK1";
		case 10:
			return "RABI3_S1_IG6";
		case 11:
			return "ABI3_Perfect";
		case 12:
			return "RABI3_CIN_DOOR";
		case 13:
			return "RABI3_TICKETS";
		case 14:
			return "RABI3_CIN_CHAT1";
		case 15:
			return "RABI3_CIN_CHAT2";
		case 16:
			return "RABI3_CIN_CHAT3";
		case 17:
			return "RABI3_CIN_CHAT4";
		case 18:
			return "ABI3_BOAT";
		case 19:
			return "RABI3_LAKECHAT";
		case 20:
			return "RABI3_LAKE";
		case 21:
			return "RABI3_PRETTY";
		default:
			break;
	}
	return "Invalid enum entered";
}

char* func_835(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "ABI31_O_GETWAGON";
		case 1:
			return "ABI31_O_RIDEBLAC";
		case 2:
			return "ABI31_O_GETBOAT";
		case 3:
			return "ABI31_O_ROWSEA";
		case 4:
			return "ABI31_O_GPHOTO";
		case 5:
			return "ABI31_O_GCINEMA";
		case 6:
			return "ABI31_O_TICKETS";
		case 7:
			return "ABI31_O_GRIDGE";
		case 8:
			return "ABI31_O_PROP";
		default:
			break;
	}
	return "";
}

bool func_839(int iParam0, char[4] cParam1)
{
	int iVar0;
	func_1458(iParam0, cParam1);
	if (bLocal_1579)
	{
		iVar0 = func_799(&iLocal_67, &iLocal_1580, 5f, &Local_1601, 0, 3, 0, "", 4202517, 0, 0, 2, -1082130432 /* Float: -1f */);
		if (iVar0 > -1)
		{
			func_840();
			return true;
		}
	}
	return false;
}

void func_840()
{
	__LIB_2__::func_624(&Local_1601, 1, 1, 1, 0);
	bLocal_1579 = false;
}

bool func_843()
{
	float fVar0;
	float fVar1;
	fVar0 = PAD::GET_DISABLED_CONTROL_NORMAL(0, joaat("INPUT_MOVE_LR"));
	fVar1 = PAD::GET_DISABLED_CONTROL_NORMAL(0, joaat("INPUT_MOVE_UD"));
	if (fVar1 < -0.3f)
	{
		iLocal_1729 = 6;
		return true;
	}
	else if (fVar1 > 0.3f)
	{
		if (fVar0 > 0f)
		{
			iLocal_1729 = 8;
			return true;
		}
		else if (fVar0 < 0f)
		{
			iLocal_1729 = 7;
			return true;
		}
	}
	else if (fVar0 > 0.3f)
	{
		iLocal_1729 = 10;
		return true;
	}
	else if (fVar0 < -0.3f)
	{
		iLocal_1729 = 9;
		return true;
	}
	return false;
}

char* func_844(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "pl_WalkUp";
		case 1:
			return "pl_Enter";
		case 2:
			return "pl_Idle_01";
		case 3:
			return "pl_Idle_02";
		case 4:
			return "pl_Idle_03";
		case 5:
			return "pl_Idle_04";
		case 6:
			return "pl_Exit_F_Performance";
		case 7:
			return "pl_Exit_BL_Performance";
		case 8:
			return "pl_Exit_BR_Performance";
		case 9:
			return "pl_Exit_L_Performance";
		case 10:
			return "pl_Exit_R_Performance";
		case 11:
			return "pl_Exit_F_Mech";
		case 12:
			return "pl_Exit_B_Mech";
		case 13:
			return "pl_Exit_L_Mech";
		case 14:
			return "pl_Exit_R_Mech";
		default:
			break;
	}
	return "";
}

void func_845(int iParam0)
{
	if (iLocal_1728 != iParam0)
	{
		iLocal_1728 = iParam0;
	}
}

bool func_846(int iParam0, char* sParam1, float fParam2)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1641[iParam0 /*5*/]) && ANIMSCENE::_0x1F0E401031E20146(Local_1641[iParam0 /*5*/], sParam1))
	{
		if ((ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_1641[iParam0 /*5*/]) >= fParam2 || ANIMSCENE::_0xF94692EB9DC15D74(Local_1641[iParam0 /*5*/], 0)) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_1641[iParam0 /*5*/], false))
		{
			return true;
		}
	}
	return false;
}

bool func_882(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
				func_882(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
			__LIB_4__::func_129(iParam0);
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
			__LIB_4__::func_130(iParam0, 0, 0, 0);
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
						func_882(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_882(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_882(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_882(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_882(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_882(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_882(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
					func_882(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_882(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_882(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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

void func_884()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_1552();
	func_1553();
	func_1554();
	func_1555();
	func_1556();
	__LIB_1__::func_848();
	__LIB_0__::func_376();
}

void func_885(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	func_345(iParam0, 1, 1, -142743235, 1);
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

char* func_888(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "COMP_DUTCH";
		case 1:
			return "COMP_JOHN";
		case 2:
			return "COMP_JAVIER";
		case 3:
			return "COMP_BILL";
		case 4:
			return "COMP_UNCLE";
		case 5:
			return "COMP_HOSEA";
		case 6:
			return "COMP_MICAH";
		case 7:
			return "COMP_CHARLES";
		case 8:
			return "COMP_SEAN";
		case 9:
			return "COMP_LENNY";
		case 10:
			return "COMP_KIERAN";
		case 23:
			return "COMP_TRELAWNY";
		case 17:
			return "COMP_PEARSON";
		case 18:
			return "COMP_STRAUSS";
		case 13:
			return "COMP_ABIGAIL";
			return "COMP_JACK";
			return "COMP_MOLLY_OSHEA";
			return "COMP_SUSAN_GRIMSHAW";
			return "COMP_MARY_BETH";
			return "COMP_KAREN";
			return "COMP_TILLY";
			return "COMP_SADIE";
			return "COMP_CLEET";
			return "COMP_JOE";
			return "COMP_EAGLE_FLIES";
			if ((__LIB_1__::func_25(Global_1835011[59 /*74*/].f_1, 1) || __LIB_1__::func_25(Global_1347702[1 /*49*/].f_15, 1)) || __LIB_1__::func_44(Global_1347702[1 /*49*/].f_15))
			{
				return "COMP_RUFUS";
			}
			else if (__LIB_1__::func_198(joaat("CSTAG_FLOW_DOG_IN_CAMP_POST"), 1))
			{
				return "COMP_CAIN";
			}
			return "COMP_DOG";
			if (bParam1)
			{
				return "COMP_SWANSON_S";
			}
			else
			{
				return "COMP_SWANSON";
			}
			return "";
		}
void func_889(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_0__::func_161(iParam0, 1);
	__LIB_0__::func_380(&(Global_1946804.f_1497.f_1[iVar0 /*3*/]), 2, 6);
	__LIB_0__::func_380(&(Global_1946804.f_1378.f_1[iVar0 /*3*/]), 2, 6);
	if (bParam1)
	{
		Global_1946804.f_1497.f_1[iVar0 /*3*/] = Global_1946804.f_57[iVar0 /*11*/];
		Global_1946804.f_1497.f_1[iVar0 /*3*/].f_1 = 0;
		Global_1946804.f_1378.f_1[iVar0 /*3*/] = { Global_1946804.f_1497.f_1[iVar0 /*3*/] };
		if (bParam2)
		{
			__LIB_1__::func_452(17, iParam0, 0, 0, 0);
		}
	}
	if (__LIB_0__::func_2() == -1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			__LIB_0__::func_380(&(Global_26796.f_26[iVar1 /*120*/].f_1.f_1[iVar0 /*3*/]), 2, 6);
			if (bParam1)
			{
				Global_26796.f_26[iVar1 /*120*/].f_1.f_1[iVar0 /*3*/] = Global_1946804.f_57[iVar0 /*11*/];
				Global_26796.f_26[iVar1 /*120*/].f_1.f_1[iVar0 /*3*/].f_1 = 0;
			}
			iVar1++;
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			__LIB_0__::func_380(&(Global_36638.f_45.f_350.f_26[iVar1 /*120*/].f_1.f_1[iVar0 /*3*/]), 2, 6);
			if (bParam1)
			{
				Global_36638.f_45.f_350.f_26[iVar1 /*120*/].f_1.f_1[iVar0 /*3*/] = Global_1946804.f_57[iVar0 /*11*/];
				Global_36638.f_45.f_350.f_26[iVar1 /*120*/].f_1.f_1[iVar0 /*3*/].f_1 = 0;
			}
			iVar1++;
		}
	}
}

void func_918()
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
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_1580(&uVar4, &iVar1, &iVar2, &iVar3)))
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

void func_919(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	if (__LIB_0__::func_13(32768))
	{
		return;
	}
	__LIB_1__::func_616(iParam1, bParam2, fParam3, iParam4, sParam5, iParam6, iParam7, 752097756);
	if (bParam2)
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_ENDLESS_SUMMER")))
		{
			Global_1879514.f_12 = 1;
		}
		else
		{
			Global_1879514.f_12 = 0;
		}
		func_1583(iParam0, iParam1, fParam3, iParam4);
	}
}

int func_1020(var uParam0, int iParam1, int iParam2)
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
		return func_1020(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

bool func_1105()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_75))
	{
		iLocal_75 = func_641(12, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
		return false;
	}
	if ((!ENTITY::IS_ENTITY_DEAD(iLocal_75) && __LIB_1__::func_22(12)) && __LIB_0__::func_167(12) == iLocal_75)
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_75, joaat("REL_PLAYER_ALLY"));
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_75, false);
		WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_75, true, true);
		if (__LIB_0__::func_266(iLocal_75, func_206(5), 5f, 1, 1))
		{
			TASK::TASK_STAND_STILL(iLocal_75, -1);
			return true;
		}
		else
		{
			func_642(iLocal_75, -1640.096f, -1350.065f, 82.96337f, 335.7933f, 1);
		}
	}
	return false;
}

bool func_1107()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (bLocal_66)
	{
		return true;
	}
	if (!PROPSET::_DOES_VEHICLE_HAVE_ANY_PROPSET(iLocal_63))
	{
		return false;
	}
	iVar3 = ITEMSET::CREATE_ITEMSET(true);
	iVar4 = PROPSET::_GET_ENTITIES_FROM_PROPSET(iLocal_62, iVar3, 0, false, false);
	iVar5 = 0;
	iVar5 = 0;
	while (iVar5 < iVar4)
	{
		iVar0 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar5, iVar3);
		iVar1 = MISC::_GET_ENTITY_FROM_ITEM(iVar0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
			if (iVar2 == iLocal_64)
			{
				iLocal_65 = iVar1;
				bLocal_66 = true;
				return true;
			}
		}
		iVar5++;
	}
	return false;
}

void func_1111()
{
	vector3 vVar0;
	struct<27> Var3;
	struct<7> Var41;
	vVar0 = { func_206(17) };
	Var3.f_4 = 1065353216;
	Var3.f_5 = 1065353216;
	Var3.f_9 = 1065353216;
	Var3.f_10 = 1065353216;
	Var3.f_14 = 1065353216;
	Var3.f_15 = 1065353216;
	Var3.f_17 = 1040187392;
	Var3.f_18 = 1040187392;
	Var3.f_19 = -1;
	Var3.f_26 = -1082130432;
	Var41.f_1 = 1050253722;
	Var41.f_2 = 1067030938;
	Var41.f_5 = -1082130432;
	Var41.f_6 = -1082130432;
	__LIB_3__::func_4(iLocal_67, Global_35, &Var3, vVar0, 0, 0, 1, 1069547520 /* Float: 1.5f */, -1082130432 /* Float: -1f */, 1073069561, 1056964608 /* Float: 0.5f */, 1092616192 /* Float: 10f */, -1, 1, 0, 0, 0, 1);
	__LIB_11__::func_408(Global_35, iLocal_67, &Var41, -1, 0, 0);
	__LIB_1__::func_731(&uLocal_1624);
	if (!PED::IS_PED_HEADTRACKING_PED(Global_35, iLocal_67))
	{
		TASK::TASK_LOOK_AT_ENTITY(Global_35, iLocal_67, -1, 0, 51, 0);
	}
	if (!PED::IS_PED_HEADTRACKING_PED(iLocal_67, Global_35))
	{
		TASK::TASK_LOOK_AT_ENTITY(iLocal_67, Global_35, -1, 0, 51, 0);
	}
}

void func_1152(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_1152(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_1152(iVar2, vParam1, fParam4, iParam5, iParam6);
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

void func_1211(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
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
		func_1784();
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

void func_1213(var uParam0)
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
			func_1152(iVar1, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_1152(iVar3, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_1214(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if ((__LIB_0__::func_84(uParam0, 268435456) && !__LIB_0__::func_86(__LIB_12__::func_720(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { __LIB_12__::func_720(uParam0) };
			func_1152(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

int func_1257(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PERSCHAR_COMP_HORSE_COMMON_1");
		case 1:
			return joaat("PERSCHAR_COMP_HORSE_COMMON_2");
		case 2:
			return joaat("PERSCHAR_COMP_HORSE_COMMON_3");
		default:
			break;
	}
	return 0;
}

char* func_1322(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "pl_Enter_DriverSide";
		case 1:
			return "pl_HelpUp_DriverSide";
		case 2:
			return "pl_Enter_PasengerSide";
		case 3:
			return "pl_HelpUp_PassengerSide";
		default:
			break;
	}
	return "";
}

void func_1326()
{
	__LIB_2__::func_966(Global_35, iLocal_67, 1, 1, 1, 0, 0, 1, 1, 1, 1);
	__LIB_2__::func_966(iLocal_67, Global_35, 1, 1, 1, 0, 0, 1, 1, 1, 1);
	__LIB_8__::func_602(&uLocal_1624, iLocal_67);
}

void func_1335()
{
	__LIB_2__::func_966(iLocal_67, Global_35, 1, 1, 1, 0, 0, 1, 1, 1, 1);
	__LIB_2__::func_966(Global_35, iLocal_67, 1, 1, 1, 0, 0, 1, 1, 1, 1);
	__LIB_8__::func_602(&uLocal_1624, iLocal_67);
	PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
}

void func_1336()
{
	struct<8> Var0;
	char cVar19[32];
	int iVar23;
	int iVar24;
	char cVar25[16];
	char cVar27[16];
	int iVar29;
	if (Local_22.f_1 == 1)
	{
		func_1881();
	}
	if (Local_22.f_22 == 0 && Local_22.f_1 == 0)
	{
		if (Local_22.f_2)
		{
			if ((MISC::GET_GAME_TIMER() - Local_22.f_20) > 2500)
			{
				Local_22.f_6 = GRAPHICS::_GET_CURRENT_NUMBER_OF_LOCAL_PHOTOS();
				func_1882();
				Local_22.f_20 = MISC::GET_GAME_TIMER();
			}
		}
	}
	switch (Local_22.f_22)
	{
		case 1:
			if (PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_STICKY_FEED_CANCEL")))
			{
				_NAMESPACE77::_0x00A15B94CBA4F76F(Local_22.f_18);
				Local_22.f_18 = 0;
				SCRIPTS::SET_NO_LOADING_SCREEN(false);
				Local_22.f_24 = 1;
				func_1883(0);
				func_1884(1);
			}
			break;
		case 0:
			if (func_1885(1))
			{
				Local_22.f_24 = 0;
				if (Local_22)
				{
					func_1883(2);
				}
				else if (Local_22.f_6 == Local_22.f_7)
				{
					if (Local_22.f_18 == 0)
					{
						Var0.f_2 = 4;
						Var0.f_2 = 0;
						Var0.f_7 = MISC::GET_HASH_KEY("IB_BACK");
						Var0.f_7.f_3 = 0;
						Local_22.f_18 = __LIB_5__::func_637(&Var0, "ERROR_GAL_FULH", "ERROR_GAL_FULT", 0, 0, 1);
						func_1883(1);
						Local_22.f_23 = 2;
					}
					else
					{
						Local_22 = true;
						func_1883(2);
					}
				}
				else
				{
					func_1883(2);
				}
			}
			if (func_1885(4))
			{
				GRAPHICS::_0x614682E715ADBAAC();
				GRAPHICS::_0x494A9874F17A7D50(1);
				func_1883(7);
			}
			break;
		case 2:
			Local_22.f_5 = 0;
			func_1883(3);
			Local_22.f_19 = MISC::GET_GAME_TIMER();
			break;
		case 3:
			if ((MISC::GET_GAME_TIMER() - Local_22.f_19) > 0)
			{
				Local_22.f_19 = MISC::GET_GAME_TIMER();
				if (Local_22)
				{
					func_1883(4);
				}
				else
				{
					GRAPHICS::_0xD45547D8396F002A();
					GRAPHICS::BEGIN_TAKE_HIGH_QUALITY_PHOTO();
					Local_22.f_6++;
					func_1883(5);
				}
			}
			break;
		case 5:
			Local_22.f_23 = GRAPHICS::GET_STATUS_OF_TAKE_HIGH_QUALITY_PHOTO();
			if (Local_22.f_23 == 1)
			{
			}
			if (Local_22.f_23 == 0)
			{
				Local_22.f_24 = 1;
				GRAPHICS::_0x2705D18C11B61046(0);
				StringCopy(&cVar19, "", 32);
				iVar23 = __LIB_0__::func_12();
				if (__LIB_0__::func_20(iVar23))
				{
					MemCopy(&cVar19, {__LIB_5__::func_638(iVar23)}, 4);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar19))
				{
					iVar24 = __LIB_5__::func_639();
					StringCopy(&cVar19, __LIB_5__::func_640(iVar24), 32);
				}
				GRAPHICS::_0xD1031B83AC093BC7(&cVar19);
				StringCopy(&cVar25, "", 16);
				StringCopy(&cVar27, "", 16);
				iVar29 = __LIB_1__::func_898();
				if (__LIB_0__::func_69(iVar29))
				{
					StringCopy(&cVar25, __LIB_5__::func_641(iVar29), 16);
					StringCopy(&cVar27, __LIB_5__::func_642(iVar29), 16);
				}
				GRAPHICS::_0x9937FACBBF267244(&cVar25);
				GRAPHICS::_0x8952E857696B8A79(&cVar27);
				GRAPHICS::SAVE_HIGH_QUALITY_PHOTO(0);
				Local_22.f_3 = 0;
				func_1883(6);
			}
			else if (Local_22.f_23 == 2)
			{
				Local_22.f_24 = 1;
				func_1883(4);
			}
			break;
		case 6:
			if (Local_22.f_3 == 0)
			{
				SCRIPTS::SET_NO_LOADING_SCREEN(false);
				Local_22.f_3 = 1;
			}
			Local_22.f_23 = GRAPHICS::GET_STATUS_OF_SAVE_HIGH_QUALITY_PHOTO();
			if (Local_22.f_23 == 0)
			{
				Local_22.f_5 = 1;
				func_1884(1);
				func_1883(0);
			}
			else if (Local_22.f_23 == 2)
			{
				Local_22.f_5 = 1;
				func_1884(1);
				func_1883(0);
			}
			break;
		case 4:
			if ((MISC::GET_GAME_TIMER() - Local_22.f_19) > 300)
			{
				SCRIPTS::SET_NO_LOADING_SCREEN(false);
				func_1884(1);
				func_1883(0);
			}
			break;
		case 7:
			Local_22.f_23 = GRAPHICS::_0x13430D3D5A45F14B(1);
			if (Local_22.f_23 == 0)
			{
				GRAPHICS::_0xF1142E5D64B47802(true, false);
				func_1373(8);
				func_1884(4);
				func_1883(0);
			}
			else if (Local_22.f_23 == 2)
			{
				func_1884(4);
				func_1883(0);
			}
			break;
	}
}

void func_1337()
{
	GRAPHICS::_0xA42EDF1E88734A7E();
	Local_22.f_1 = 1;
}

void func_1338()
{
	iLocal_60 = 1;
}

void func_1340(int iParam0)
{
	if (iLocal_307 != iParam0)
	{
		iLocal_307 = iParam0;
		fLocal_310 = 0f;
	}
}

void func_1341(var uParam0)
{
	if (__LIB_5__::func_463())
	{
		return;
	}
	if (bLocal_325)
	{
		if (iLocal_324 == 0)
		{
			__LIB_12__::func_876(uParam0, "ABI3_BACKGCYCLE", 0);
			bLocal_325 = false;
			return;
		}
	}
	if (iLocal_324 == 4)
	{
		if (bLocal_326)
		{
			__LIB_12__::func_876(uParam0, "ABI3_BACKGEND", 0);
			bLocal_326 = false;
			return;
		}
	}
	if (!bLocal_328)
	{
		return;
	}
	if (!__LIB_0__::func_75(&uLocal_321))
	{
		__LIB_1__::func_283(&uLocal_321, 0);
		return;
	}
	if (__LIB_1__::func_285(&uLocal_321, (3f + MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 5f))))
	{
		__LIB_0__::func_37(&uLocal_321);
		if (bLocal_326)
		{
			if (bLocal_327)
			{
				if (iLocal_308 == 0)
				{
					__LIB_12__::func_876(uParam0, "RABI3_NOCHOOSE", 0);
					return;
				}
				else
				{
					__LIB_12__::func_876(uParam0, "RABI3_SCROLL", 0);
					return;
				}
			}
		}
		if (bLocal_329)
		{
			if (MISC::GET_RANDOM_INT_IN_RANGE(0, 100) < 50)
			{
				__LIB_12__::func_876(uParam0, "ABI3_BACKGCALL", 0);
			}
			else
			{
				__LIB_12__::func_876(uParam0, "RABI3_CHOOSE", 0);
			}
			return;
		}
	}
}

void func_1343(int iParam0)
{
	if (iLocal_308 != iParam0)
	{
		__LIB_1__::func_221(iLocal_311, 0, 1);
		__LIB_1__::func_221(iLocal_312, 0, 1);
		__LIB_1__::func_221(iLocal_313, 0, 1);
		__LIB_1__::func_221(iLocal_314, 0, 1);
		iLocal_309 = iParam0;
		if (iLocal_308 < iLocal_309)
		{
			iLocal_117 = 1;
		}
		else
		{
			iLocal_117 = 0;
		}
		func_1340(2);
	}
}

void func_1344(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		if (iLocal_319 == 1)
		{
			bLocal_320 = true;
			if (!ANIMSCENE::_0x23E33CB9F4A3F547(*uParam0, "pl_trans_FWD_to_BCK") && !ANIMSCENE::_0x0DF57F86FE71DBE5(*uParam0, "pl_trans_FWD_to_BCK"))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(*uParam0, "pl_trans_FWD_to_BCK");
			}
		}
		else
		{
			bLocal_320 = false;
		}
		func_1895(uParam0, 0);
		iLocal_319 = 0;
		if (ANIMSCENE::_0x23E33CB9F4A3F547(*uParam0, "pl_PhotoSelect_FWD"))
		{
			ANIMSCENE::_0xAE6ADA8FE7E84ACC(*uParam0, "pl_PhotoSelect_FWD");
		}
		if (!ANIMSCENE::_0x23E33CB9F4A3F547(*uParam0, "pl_PhotoSelect_BCK"))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(*uParam0, "pl_PhotoSelect_BCK");
		}
	}
	else
	{
		if (iLocal_319 == 0)
		{
			bLocal_320 = true;
			if (!ANIMSCENE::_0x23E33CB9F4A3F547(*uParam0, "pl_trans_BCK_to_FWD") && !ANIMSCENE::_0x0DF57F86FE71DBE5(*uParam0, "pl_trans_BCK_to_FWD"))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(*uParam0, "pl_trans_BCK_to_FWD");
			}
		}
		else
		{
			bLocal_320 = false;
		}
		func_1895(uParam0, 1);
		iLocal_319 = 1;
		if (ANIMSCENE::_0x23E33CB9F4A3F547(*uParam0, "pl_PhotoSelect_BCK"))
		{
			ANIMSCENE::_0xAE6ADA8FE7E84ACC(*uParam0, "pl_PhotoSelect_BCK");
		}
		if (!ANIMSCENE::_0x23E33CB9F4A3F547(*uParam0, "pl_PhotoSelect_FWD"))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(*uParam0, "pl_PhotoSelect_FWD");
		}
	}
}

bool func_1345(float fParam0)
{
	if (fParam0 > 0.75f)
	{
		return true;
	}
	return false;
}

bool func_1346(float fParam0)
{
	if (fParam0 < -0.75f)
	{
		return true;
	}
	return false;
}

bool func_1347()
{
	return PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, joaat("INPUT_GAME_MENU_ACCEPT"));
}

char* func_1349()
{
	if (iLocal_319 == 1)
	{
		return "pl_PhotoSelect_FWD";
	}
	return "pl_PhotoSelect_BCK";
}

void func_1350()
{
	float fVar0;
	float fVar1;
	if (bLocal_114)
	{
		return;
	}
	if (!bLocal_113)
	{
		return;
	}
	if (fLocal_119 == -1f)
	{
		if (iLocal_117 == 1)
		{
			fLocal_119 = (fLocal_118 + 0.125f);
		}
		else
		{
			fLocal_119 = (fLocal_118 - 0.125f);
		}
	}
	if (!bLocal_116)
	{
		func_1896("Backdrop_Move", "ABIGAIL_3_SOUNDSET", func_206(31));
		bLocal_116 = true;
	}
	if (iLocal_117 == 1)
	{
		fVar0 = ((fLocal_119 - fLocal_118) * 8f);
	}
	else
	{
		fVar0 = ((fLocal_118 - fLocal_119) * 8f);
	}
	if (!bLocal_115)
	{
		if ((fLocal_118 > fLocal_119 && ((fLocal_118 - fLocal_119) / 0.125f) < 0.5f) || (fLocal_119 > fLocal_118 && ((fLocal_119 - fLocal_118) / 0.125f) < 0.5f))
		{
			bLocal_115 = true;
		}
	}
	if (fVar0 <= 0.15f)
	{
		fVar1 = (fVar0 / 0.125f);
	}
	else if (fVar0 >= 0.85f)
	{
		fVar1 = ((1f - fVar0) / 0.125f);
	}
	else
	{
		fVar1 = 1f;
	}
	if (fVar1 < 0.05f)
	{
		fVar1 = 0.05f;
	}
	if (iLocal_117 == 1)
	{
		fLocal_118 = (fLocal_118 + ((fVar1 * 0.03125f) * BUILTIN::TIMESTEP()));
	}
	else
	{
		fLocal_118 = (fLocal_118 + (((fVar1 * 0.03125f) * -1f) * BUILTIN::TIMESTEP()));
	}
	if ((iLocal_117 == 1 && fLocal_118 >= fLocal_119) || (iLocal_117 == 0 && fLocal_118 <= fLocal_119))
	{
		fLocal_118 = fLocal_119;
		ENTITY::_0x669655FFB29EF1A9(iLocal_112, 0, "Canvas", fLocal_118);
		fLocal_119 = -1f;
		bLocal_114 = true;
	}
	else
	{
		ENTITY::_0x669655FFB29EF1A9(iLocal_112, 0, "Canvas", fLocal_118);
	}
}

void func_1351(var uParam0)
{
	char cVar0[16];
	int iVar2;
	if (iLocal_346[iLocal_309])
	{
		bLocal_120 = true;
		return;
	}
	if (!bLocal_115)
	{
		return;
	}
	if (iLocal_324 == 4)
	{
		bLocal_329 = true;
		return;
	}
	if (__LIB_8__::func_684("ABI3_BACKGCYCLE"))
	{
		__LIB_6__::func_900("ABI3_BACKGCYCLE", 0, 0);
	}
	if (bLocal_120)
	{
		return;
	}
	if (!__LIB_6__::func_904())
	{
		StringCopy(&cVar0, "RABI3_BGPICK", 16);
		iVar2 = iLocal_309 + 1;
		StringIntConCat(&cVar0, iVar2, 16);
		if (__LIB_12__::func_876(uParam0, &cVar0, 0))
		{
			bLocal_120 = true;
			iLocal_346[iLocal_309] = 1;
			bLocal_328 = true;
			bLocal_327 = true;
			iLocal_324++;
		}
	}
}

bool func_1352(var uParam0)
{
	if (bLocal_121)
	{
		return true;
	}
	if (bLocal_320)
	{
		if (iLocal_319 == 1)
		{
			if (!ANIMSCENE::_0x1F0E401031E20146(*uParam0, "pl_trans_BCK_to_FWD"))
			{
				if (ANIMSCENE::_0x23E33CB9F4A3F547(*uParam0, "pl_trans_BCK_to_FWD"))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*uParam0, "pl_trans_BCK_to_FWD", true);
					ANIMSCENE::_0xAE6ADA8FE7E84ACC(*uParam0, "pl_Idling_BCK");
				}
			}
			else if (ANIMSCENE::_GET_ANIM_SCENE_TIME(*uParam0) > 3f)
			{
				if (ANIMSCENE::_0x23E33CB9F4A3F547(*uParam0, func_1897(1)))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*uParam0, func_1897(1), true);
					ANIMSCENE::_0xAE6ADA8FE7E84ACC(*uParam0, "pl_trans_BCK_to_FWD");
					bLocal_320 = false;
				}
			}
		}
		else if (iLocal_319 == 0)
		{
			if (!ANIMSCENE::_0x1F0E401031E20146(*uParam0, "pl_trans_FWD_to_BCK"))
			{
				if (ANIMSCENE::_0x23E33CB9F4A3F547(*uParam0, "pl_trans_FWD_to_BCK"))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*uParam0, "pl_trans_FWD_to_BCK", true);
					ANIMSCENE::_0xAE6ADA8FE7E84ACC(*uParam0, "pl_Idling_FWD");
				}
			}
			else if (ANIMSCENE::_GET_ANIM_SCENE_TIME(*uParam0) > 3f)
			{
				if (ANIMSCENE::_0x23E33CB9F4A3F547(*uParam0, func_1897(0)))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*uParam0, func_1897(0), true);
					ANIMSCENE::_0xAE6ADA8FE7E84ACC(*uParam0, "pl_trans_FWD_to_BCK");
					bLocal_320 = false;
				}
			}
		}
	}
	else if (iLocal_319 == 1)
	{
		if (!ANIMSCENE::_0x23E33CB9F4A3F547(*uParam0, "pl_Idling_FWD") && !ANIMSCENE::_0x0DF57F86FE71DBE5(*uParam0, "pl_Idling_FWD"))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(*uParam0, "pl_Idling_FWD");
		}
		if (!ANIMSCENE::_0x1F0E401031E20146(*uParam0, func_1897(1)))
		{
			if (ANIMSCENE::_0x23E33CB9F4A3F547(*uParam0, func_1897(1)))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*uParam0, func_1897(1), true);
			}
		}
		else if (ANIMSCENE::_0x8D81E7824B7753F7(*uParam0, "s_Idling_FWD", 1))
		{
			if (ANIMSCENE::_0x23E33CB9F4A3F547(*uParam0, "pl_Idling_FWD"))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*uParam0, "pl_Idling_FWD", true);
				ANIMSCENE::_0xAE6ADA8FE7E84ACC(*uParam0, func_1897(1));
				bLocal_121 = true;
				return true;
			}
		}
		else if (!bLocal_113)
		{
			if (ANIMSCENE::_GET_ANIM_SCENE_TIME(*uParam0) >= 0.5f)
			{
				bLocal_113 = true;
			}
		}
	}
	else if (iLocal_319 == 0)
	{
		if (!ANIMSCENE::_0x23E33CB9F4A3F547(*uParam0, "pl_Idling_BCK") && !ANIMSCENE::_0x0DF57F86FE71DBE5(*uParam0, "pl_Idling_BCK"))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(*uParam0, "pl_Idling_BCK");
		}
		if (!ANIMSCENE::_0x1F0E401031E20146(*uParam0, func_1897(0)))
		{
			if (ANIMSCENE::_0x23E33CB9F4A3F547(*uParam0, func_1897(0)))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*uParam0, func_1897(0), true);
			}
		}
		else if (ANIMSCENE::_0x8D81E7824B7753F7(*uParam0, "s_Idling_BCK", 1))
		{
			if (ANIMSCENE::_0x23E33CB9F4A3F547(*uParam0, "pl_Idling_BCK"))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*uParam0, "pl_Idling_BCK", true);
				ANIMSCENE::_0xAE6ADA8FE7E84ACC(*uParam0, func_1897(0));
				bLocal_121 = true;
				return true;
			}
		}
		else if (!bLocal_113)
		{
			if (ANIMSCENE::_GET_ANIM_SCENE_TIME(*uParam0) >= 0.5f)
			{
				bLocal_113 = true;
			}
		}
	}
	return false;
}

void func_1355(int iParam0)
{
	int iVar0;
	iVar0 = func_1370(iParam0);
	if (iVar0 != 0)
	{
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_1641[6 /*5*/], func_1362(iVar0));
	}
}

void func_1356(int iParam0)
{
	int iVar0;
	iVar0 = func_1366(iParam0);
	if (iVar0 != 0)
	{
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_1641[6 /*5*/], func_1362(iVar0));
	}
}

void func_1357(int iParam0)
{
	int iVar0;
	iVar0 = func_1361(iParam0);
	if (iVar0 != 0)
	{
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_1641[6 /*5*/], func_1362(iVar0));
	}
}

void func_1358()
{
	if (!CAM::DOES_CAM_EXIST(Local_273[2 /*8*/]))
	{
		return;
	}
	if (!CAM::DOES_CAM_EXIST(Local_273[1 /*8*/]))
	{
		return;
	}
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_LT"), true);
	if (!__LIB_0__::func_139(iLocal_315))
	{
		iLocal_315 = __LIB_2__::func_403("ABI31_C_VIEWFINDER", joaat("INPUT_CONTEXT_LT"), Global_35, 3, 0, 0, 0, 3, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
	}
	if (__LIB_1__::func_530(iLocal_315, 1))
	{
		if (!CAM::IS_CAM_ACTIVE(Local_273[2 /*8*/]))
		{
			CAM::SET_CAM_ACTIVE(Local_273[1 /*8*/], false);
			CAM::SET_CAM_ACTIVE(Local_273[2 /*8*/], true);
		}
		func_1903(iLocal_330);
		func_1904();
		if (__LIB_0__::func_572(iLocal_311, 0))
		{
			__LIB_1__::func_221(iLocal_311, 0, 1);
		}
	}
	else
	{
		if (!CAM::IS_CAM_ACTIVE(Local_273[1 /*8*/]))
		{
			CAM::SET_CAM_ACTIVE(Local_273[2 /*8*/], false);
			CAM::SET_CAM_ACTIVE(Local_273[1 /*8*/], true);
		}
		if (!__LIB_0__::func_572(iLocal_311, 0))
		{
			__LIB_1__::func_221(iLocal_311, 1, 1);
		}
	}
}

void func_1359(var uParam0)
{
	func_1905(iLocal_330);
	if (__LIB_5__::func_463())
	{
		return;
	}
	if (!bLocal_158)
	{
		if (__LIB_12__::func_876(uParam0, "RABI3_PHOTOPOSE", 0))
		{
			bLocal_158 = true;
		}
	}
	if (bLocal_158)
	{
		if (!bLocal_328)
		{
			return;
		}
		if (!__LIB_0__::func_75(&uLocal_321))
		{
			__LIB_1__::func_283(&uLocal_321, 0);
			return;
		}
		if (__LIB_1__::func_285(&uLocal_321, (4f + MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 5f))))
		{
			if (!__LIB_5__::func_463())
			{
				__LIB_0__::func_37(&uLocal_321);
				if (iLocal_123 == 5 || iLocal_123 == 10)
				{
					__LIB_12__::func_876(uParam0, "ABI3_POSES2", 0);
				}
				else
				{
					if (!bLocal_159 && iLocal_160 == 1)
					{
						if (!bLocal_161)
						{
							__LIB_12__::func_876(uParam0, "ABI3_POSECHAIR", 0);
							bLocal_161 = true;
							iLocal_123++;
							__LIB_0__::func_37(&uLocal_321);
							return;
						}
						if (!bLocal_162)
						{
							__LIB_12__::func_876(uParam0, "ABI3_POSESTAND", 0);
							bLocal_162 = true;
							iLocal_123++;
							__LIB_0__::func_37(&uLocal_321);
							return;
						}
					}
					if (MISC::GET_RANDOM_INT_IN_RANGE(0, 100) < 50)
					{
						__LIB_12__::func_876(uParam0, "ABI3_POSECHOICE", 0);
					}
					else
					{
						__LIB_12__::func_876(uParam0, "RABI3_POSE", 0);
					}
				}
				iLocal_123++;
				__LIB_0__::func_37(&uLocal_321);
			}
		}
	}
}

int func_1361(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 18;
		case 9:
			return 18;
		case 16:
			return 18;
		case 2:
			return 19;
		case 15:
			return 19;
		case 3:
			return 20;
		case 14:
			return 20;
		case 4:
			return 21;
		case 13:
			return 21;
		case 5:
			return 22;
		case 12:
			return 22;
		case 6:
			return 23;
		case 11:
			return 23;
		case 7:
			return 24;
		case 10:
			return 24;
		case 8:
			return 25;
		case 17:
			return 25;
		default:
			break;
	}
	return 18;
}

char* func_1362(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "pl_Pose_A_Idle";
		case 2:
			return "pl_Pose_AtoB";
		case 3:
			return "pl_Pose_BtoC";
		case 4:
			return "pl_Pose_CtoD";
		case 5:
			return "pl_Pose_DtoE";
		case 6:
			return "pl_Pose_EtoF";
		case 7:
			return "pl_Pose_FtoG";
		case 8:
			return "pl_Pose_GtoH";
		case 9:
			return "pl_Pose_HtoA";
		case 10:
			return "pl_Pose_HtoG";
		case 11:
			return "pl_Pose_GtoF";
		case 12:
			return "pl_Pose_FtoE";
		case 13:
			return "pl_Pose_EtoD";
		case 14:
			return "pl_Pose_DtoC";
		case 15:
			return "pl_Pose_CtoB";
		case 16:
			return "pl_Pose_BtoA";
		case 17:
			return "pl_Pose_AtoH";
		case 18:
			return "pl_Pose_A_CamFlash";
		case 19:
			return "pl_Pose_B_CamFlash";
		case 20:
			return "pl_Pose_C_CamFlash";
		case 21:
			return "pl_Pose_D_CamFlash";
		case 22:
			return "pl_Pose_E_CamFlash";
		case 23:
			return "pl_Pose_F_CamFlash";
		case 24:
			return "pl_Pose_G_CamFlash";
		case 25:
			return "pl_Pose_H_CamFlash";
		default:
			break;
	}
	return "pl_Pose_A_Idle";
}

void func_1363(int iParam0)
{
	int iVar0;
	iVar0 = func_1370(iParam0);
	if (iVar0 != 0)
	{
		func_1367(iVar0);
	}
}

void func_1364(int iParam0)
{
	int iVar0;
	iVar0 = func_1366(iParam0);
	if (iVar0 != 0)
	{
		func_1367(iVar0);
	}
}

int func_1366(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 2;
		case 16:
			return 2;
		case 9:
			return 2;
		case 2:
			return 3;
		case 15:
			return 3;
		case 3:
			return 4;
		case 14:
			return 4;
		case 4:
			return 5;
		case 13:
			return 5;
		case 5:
			return 6;
		case 12:
			return 6;
		case 6:
			return 7;
		case 11:
			return 7;
		case 7:
			return 8;
		case 10:
			return 8;
		case 8:
			return 9;
		case 17:
			return 9;
		default:
			break;
	}
	return 0;
}

void func_1367(int iParam0)
{
	if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_1641[6 /*5*/], func_1362(iParam0)) || ANIMSCENE::_0x0DF57F86FE71DBE5(Local_1641[6 /*5*/], func_1362(iParam0)))
	{
		ANIMSCENE::_0xAE6ADA8FE7E84ACC(Local_1641[6 /*5*/], func_1362(iParam0));
	}
}

void func_1368(int iParam0)
{
	int iVar0;
	iVar0 = func_1361(iParam0);
	if (iVar0 != 0)
	{
		func_1367(iVar0);
	}
}

int func_1370(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 17;
		case 16:
			return 17;
		case 9:
			return 17;
		case 2:
			return 16;
		case 15:
			return 16;
		case 3:
			return 15;
		case 14:
			return 15;
		case 4:
			return 14;
		case 13:
			return 14;
		case 5:
			return 13;
		case 12:
			return 13;
		case 6:
			return 12;
		case 11:
			return 12;
		case 7:
			return 11;
		case 10:
			return 11;
		case 8:
			return 10;
		case 17:
			return 10;
		default:
			break;
	}
	return 0;
}

char* func_1371(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "s_Pose_A_Idle";
		case 16:
			return "s_Pose_A_Idle";
		case 9:
			return "s_Pose_A_Idle";
		case 2:
			return "s_Pose_B_Idle";
		case 15:
			return "s_Pose_B_Idle";
		case 3:
			return "s_Pose_C_Idle";
		case 14:
			return "s_Pose_C_Idle";
		case 4:
			return "s_Pose_D_Idle";
		case 13:
			return "s_Pose_D_Idle";
		case 5:
			return "s_Pose_E_Idle";
		case 12:
			return "s_Pose_E_Idle";
		case 6:
			return "s_Pose_F_Idle";
		case 11:
			return "s_Pose_F_Idle";
		case 7:
			return "s_Pose_G_Idle";
		case 10:
			return "s_Pose_G_Idle";
		case 8:
			return "s_Pose_H_Idle";
		case 17:
			return "s_Pose_H_Idle";
		default:
			break;
	}
	return "";
}

int func_1372(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
		case 9:
			return 0;
		case 16:
			return 0;
		case 2:
			return 1;
		case 15:
			return 1;
		case 3:
			return 2;
		case 14:
			return 2;
		case 4:
			return 3;
		case 13:
			return 3;
		case 5:
			return 4;
		case 12:
			return 4;
		case 6:
			return 5;
		case 11:
			return 5;
		case 7:
			return 6;
		case 10:
			return 6;
		case 8:
			return 7;
		case 17:
			return 7;
		default:
			break;
	}
	return -1;
}

void func_1373(int iParam0)
{
	Local_22.f_21 = (Local_22.f_21 || iParam0);
}

int func_1374(int iParam0)
{
	switch (*iParam0)
	{
		case 1:
			GRAPHICS::_0x5199405EABFBD7F0("CameraTransitionFlash");
			*iParam0 = 2;
			break;
		case 2:
			if (GRAPHICS::_0xBF2DD155B2ADCD0A("CameraTransitionFlash"))
			{
				return 0;
			}
			if (bLocal_170)
			{
				GRAPHICS::ANIMPOSTFX_PLAY("CameraTransitionFlash");
				*iParam0 = 3;
			}
			break;
		case 3:
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING("CameraTransitionFlash"))
			{
				GRAPHICS::ANIMPOSTFX_STOP("CameraTransitionFlash");
				GRAPHICS::_0x37D7BDBA89F13959("CameraTransitionFlash");
				*iParam0 = 4;
				return 1;
			}
			break;
		case 4:
			return 1;
	}
	return 0;
}

void func_1435(var uParam0)
{
	if (iLocal_58 == 1 || iLocal_58 == 4)
	{
		if (!bLocal_145 && GRAPHICS::_0x5C674EB487891F6B() < 89f)
		{
			if (!__LIB_5__::func_463())
			{
				if (GRAPHICS::_0x5C674EB487891F6B() >= 46f && GRAPHICS::_0x5C674EB487891F6B() <= 55f)
				{
					func_761(uParam0, &iLocal_67, 15, 1, 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */);
				}
				else if (GRAPHICS::_0x5C674EB487891F6B() >= 57f && GRAPHICS::_0x5C674EB487891F6B() <= 63f)
				{
					func_761(uParam0, &iLocal_67, 14, 1, 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */);
				}
				else if (GRAPHICS::_0x5C674EB487891F6B() >= 66f && GRAPHICS::_0x5C674EB487891F6B() <= 79f)
				{
					func_761(uParam0, &iLocal_67, 16, 1, 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */);
				}
				else if (GRAPHICS::_0x5C674EB487891F6B() >= 86f)
				{
					func_761(uParam0, &iLocal_67, 17, 1, 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */);
				}
			}
		}
	}
}

float func_1436(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 12.67f;
		case 1:
			return 45.5f;
		case 2:
			return 9.67f;
		case 3:
			return 6.67f;
		case 4:
			return 10.83f;
		case 5:
			return 6.5f;
		case 6:
			return 54.67f;
		case 7:
			return 10.17f;
		default:
			break;
	}
	return 0f;
}

void func_1437()
{
	if (!__LIB_0__::func_139(iLocal_366))
	{
		iLocal_366 = __LIB_1__::func_877("ABI31_C_LEAVE", joaat("INPUT_GAME_MENU_CANCEL"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
	}
	else
	{
		__LIB_1__::func_221(iLocal_366, 1, 0);
	}
}

void func_1438(int iParam0)
{
	if (iParam0 != iLocal_58)
	{
		iLocal_58 = iParam0;
	}
}

bool func_1439()
{
	if (bLocal_362)
	{
		return false;
	}
	if (__LIB_1__::func_732(iLocal_366, 1))
	{
		return true;
	}
	return false;
}

int func_1440()
{
	if (bLocal_363)
	{
		return 0;
	}
	if (__LIB_1__::func_732(iLocal_365, 1))
	{
		return 1;
	}
	return 0;
}

bool func_1441()
{
	if (bLocal_361)
	{
		return false;
	}
	if (bLocal_363)
	{
		return false;
	}
	if (fLocal_310 > 20f)
	{
		return true;
	}
	return false;
}

void func_1442()
{
	if (!__LIB_0__::func_139(iLocal_365))
	{
		iLocal_365 = __LIB_1__::func_877("ABI31_C_HUG", joaat("INPUT_CONTEXT_Y"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
	}
	else
	{
		__LIB_1__::func_221(iLocal_365, 1, 0);
	}
}

void func_1451(var uParam0)
{
	if (GRAPHICS::GET_TV_CHANNEL() == -1)
	{
		return;
	}
	GRAPHICS::SET_TV_CHANNEL(-1);
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1088))
	{
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_1088, false);
	}
	if (uParam0->f_1072)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1089))
		{
			OBJECT::_0xF49574E2332A8F06(uParam0->f_1089, 0f);
			OBJECT::_0x04D1D4E411CE52D0(uParam0->f_1089, 0);
		}
	}
	if (AUDIO::IS_STREAM_PLAYING(uParam0->f_1100))
	{
		AUDIO::STOP_STREAM(uParam0->f_1100);
	}
}

void func_1452(var uParam0)
{
	GRAPHICS::SET_TV_CHANNEL(-1);
	if (uParam0->f_1071)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1089))
		{
			OBJECT::_0x04D1D4E411CE52D0(uParam0->f_1089, 0);
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_1089));
		}
		if (HUD::IS_NAMED_RENDERTARGET_REGISTERED(uParam0->f_1075))
		{
			HUD::RELEASE_NAMED_RENDERTARGET(uParam0->f_1075);
		}
		uParam0->f_1071 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1088))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_1088));
	}
}

char* func_1454(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "pl_Laugh_01";
		case 1:
			return "pl_Laugh_02";
		case 2:
			return "pl_Laugh_03";
		case 3:
			return "pl_Look_Behind_01";
		case 4:
			return "pl_Look_at_Sky_01";
		case 5:
			return "pl_Look_At_Water_01";
		case 6:
			return "pl_Look_At_Water_02";
		case 7:
			return "pl_Sigh_01";
		case 8:
			return "pl_Sigh_02";
		default:
			break;
	}
	return "";
}

int func_1455(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return 0;
		case 0:
			return 7;
		case 7:
			return 3;
		case 3:
			return 1;
		case 1:
			return 6;
		case 6:
			return 2;
		case 2:
			return 4;
		case 4:
			return 8;
		case 8:
			return 5;
		default:
			break;
	}
	return 0;
}

float func_1456(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 6.67f;
		case 1:
			return 6.17f;
		case 2:
			return 4.83f;
		case 3:
			return 10.17f;
		case 4:
			return 4.17f;
		case 5:
			return 7.966f;
		case 6:
			return 9.5f;
		case 7:
			return 7.17f;
		case 8:
			return 5.5f;
		default:
			break;
	}
	return 4.5f;
}

void func_1458(int iParam0, char[4] cParam1)
{
	if (!bLocal_1579)
	{
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			CAM::STOP_GAMEPLAY_HINT(false);
		}
		PED::SET_PED_CONFIG_FLAG(*iParam0, 130, true);
		PED::SET_PED_CONFIG_FLAG(*iParam0, 315, true);
		PED::SET_PED_CONFIG_FLAG(*iParam0, 297, true);
		PED::SET_PED_CONFIG_FLAG(*iParam0, 317, true);
		PED::SET_PED_CONFIG_FLAG(*iParam0, 253, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
		PED::SET_PED_CONFIG_FLAG(*iParam0, 301, false);
		__LIB_2__::func_602(&(Local_1601[0 /*17*/]), cParam1, 0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
		__LIB_3__::func_515(&(Local_1601[0 /*17*/]), 1, 0);
		bLocal_1579 = true;
	}
}

void func_1552()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_2017(0);
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
	func_2017(1);
}

void func_1553()
{
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_882(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_1554()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_2020(0);
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
	func_2020(1);
}

void func_1555()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_1__::func_432(15000, 0, 0, 0, 1);
			func_2020(0);
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
	func_2020(1);
}

void func_1556()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_882(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_882(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_345(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_345(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
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

int func_1580(var uParam0, int iParam1, int iParam2, int iParam3)
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
	iVar11 = (func_2040(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_952(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_882(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	__LIB_1__::func_432(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

void func_1583(int iParam0, int iParam1, float fParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar0 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iParam1) * fParam2));
	iVar1 = ((iParam1 - iVar0) / iParam3);
	if (__LIB_0__::func_472())
	{
		iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 0.1f));
		UILOG::_UILOG_ADD_TOTAL_TAKE_ENTRY(1072517412, joaat("HUD_TOASTS"), MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_GANG"), MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	else
	{
		UILOG::_UILOG_ADD_TOTAL_TAKE_ENTRY(2067252994, joaat("HUD_TOASTS"), MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_GANG"), MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	iVar3 = iVar1;
	if (__LIB_0__::func_472())
	{
		iVar3 = (iVar3 + iVar2);
	}
	TELEMETRY::_TELEMETRY_GANG_SHARES(__LIB_0__::func_299(iParam0), iVar3, iVar1, iParam3);
	iVar4 = __LIB_0__::func_76(iParam0);
	if (__LIB_0__::func_700(iParam0) != 1 || (iVar4 != 37 && iVar4 != 58))
	{
		UILOG::_UILOG_ADD_TOTAL_TAKE_ENTRY(-1391579956, 1997120069, MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_ARTHUR"), MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar3), 601389479);
	}
	switch (__LIB_0__::func_700(iParam0))
	{
		case 1:
			switch (iVar4)
			{
				case 25:
					func_2043(1, iVar1);
					func_2043(8, iVar1);
					func_2043(7, iVar1);
					break;
				case 12:
					func_2043(6, iVar1);
					break;
				case 53:
					func_2043(3, iVar1);
					func_2043(7, iVar1);
					func_2043(4, iVar1);
					break;
				case 20:
					func_2043(8, iVar1);
					break;
				case 19:
					func_2043(1, iVar1);
					func_2043(2, iVar1);
					break;
				case 24:
					func_2043(3, iVar1);
					func_2043(9, iVar1);
					func_2043(20, iVar1);
					break;
				case 28:
					func_2043(1, iVar1);
					break;
				case 34:
					func_2043(23, iVar1);
					func_2043(2, iVar1);
					func_2043(18, iVar1);
					break;
				case 29:
					func_2043(0, iVar1);
					func_2043(9, iVar1);
					break;
				case 37:
					break;
				case 58:
					break;
				case 57:
					func_2043(0, iVar1);
					func_2043(3, iVar1);
					func_2043(2, iVar1);
					func_2043(11, iVar1);
					func_2043(6, iVar1);
					func_2043(25, iVar1);
					func_2043(24, iVar1);
					break;
			}
			break;
		case 8:
			switch (iVar4)
			{
				case 94:
					func_2043(5, iVar1);
					break;
				case 63:
					func_2043(1, iVar1);
					func_2043(3, iVar1);
					break;
				case 37:
					func_2043(23, iVar1);
					break;
				case 116:
					break;
			}
			break;
		case 11:
			if (iParam0 == __LIB_1__::func_293(0, 10, 11, joaat("CABR01")))
			{
				func_2043(7, iVar1);
				func_2043(4, iVar1);
			}
			else if (iParam0 == __LIB_1__::func_293(0, 7, 11, joaat("CACR02")))
			{
				func_2043(8, iVar1);
				func_2043(15, iVar1);
			}
			else if (iParam0 == __LIB_1__::func_293(0, 8, 11, joaat("CACR03")))
			{
				func_2043(3, iVar1);
			}
			else if (iParam0 == __LIB_1__::func_293(0, 11, 11, joaat("CACR01")))
			{
				func_2043(6, iVar1);
				func_2043(3, iVar1);
			}
			else if (iParam0 == __LIB_1__::func_293(0, 12, 11, joaat("CACR04")))
			{
				func_2043(9, iVar1);
			}
			break;
	}
	UILOG::_UILOG_SET_TOTAL_TAKE_SUMMARY(MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_TOTAL", iParam1), MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_TOTAL_GANG", __LIB_0__::func_473()));
	if (!__LIB_0__::func_474(629))
	{
		__LIB_1__::func_240(629, 0);
	}
}

void func_1784()
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
	iVar0 = func_2156(6291456, 0);
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

void func_1881()
{
	Local_22.f_23 = GRAPHICS::_0xB28894CD7408BD0C();
	if (Local_22.f_23 == 1)
	{
	}
	if (Local_22.f_23 == 0)
	{
		Local_22 = false;
		Local_22.f_6 = GRAPHICS::_GET_CURRENT_NUMBER_OF_LOCAL_PHOTOS();
		Local_22.f_7 = GRAPHICS::_GET_MAX_NUMBER_OF_LOCAL_PHOTOS();
		Local_22.f_8 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "playerCamera");
		Local_22.f_9 = DATABINDING::_DATABINDING_ADD_DATA_STRING(Local_22.f_8, "cameraRollCapacityLabel", "i_CurrentNumberOfLocalPhotos");
		func_1882();
		Local_22.f_1 = 0;
		Local_22.f_2 = 1;
		Local_22.f_20 = MISC::GET_GAME_TIMER();
	}
	else if (Local_22.f_23 == 2)
	{
		Local_22 = true;
		Local_22.f_8 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "playerCamera");
		Local_22.f_9 = DATABINDING::_DATABINDING_ADD_DATA_STRING(Local_22.f_8, "cameraRollCapacityLabel", "failed/failed");
		func_2187();
		Local_22.f_1 = 0;
		Local_22.f_2 = 0;
	}
}

void func_1882()
{
	StringCopy(&(Local_22.f_10), "", 32);
	MISC::_INT_TO_STRING(Local_22.f_6, "%i", &(Local_22.f_10));
	StringConCat(&(Local_22.f_10), " / ", 32);
	StringCopy(&(Local_22.f_14), "", 32);
	MISC::_INT_TO_STRING(Local_22.f_7, "%i", &(Local_22.f_14));
	StringConCat(&(Local_22.f_10), &(Local_22.f_14), 32);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Local_22.f_9, &(Local_22.f_10));
}

void func_1883(int iParam0)
{
	Local_22.f_22 = iParam0;
}

void func_1884(int iParam0)
{
	Local_22.f_21 = (Local_22.f_21 - (Local_22.f_21 && iParam0));
}

bool func_1885(int iParam0)
{
	return (Local_22.f_21 && iParam0) != 0;
}

void func_1895(var uParam0, int iParam1)
{
	iLocal_316[iParam1]++;
	if (iLocal_316[iParam1] > 1)
	{
		iLocal_316[iParam1] = 0;
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(*uParam0, func_1897(iParam1)) && !ANIMSCENE::_0x0DF57F86FE71DBE5(*uParam0, func_1897(iParam1)))
	{
		ANIMSCENE::_0xDF7B5144E25CD3FE(*uParam0, func_1897(iParam1));
	}
}

void func_1896(char* sParam0, char* sParam1, vector3 vParam2)
{
	int iVar0;
	iVar0 = AUDIO::GET_SOUND_ID();
	if (iVar0 != -1)
	{
		AUDIO::_0xDCF5BA95BBF0FABA(iVar0, sParam0, vParam2, sParam1, 0, 0, 1);
		Global_1956588[Global_1956588.f_25] = iVar0;
		Global_1956588.f_25 = (Global_1956588.f_25 + 1 % 24);
	}
}

char* func_1897(int iParam0)
{
	switch (iLocal_316[iParam0])
	{
		case 0:
			if (iParam0 == 1)
			{
				return "pl_Selection_01_FWD";
			}
			else
			{
				return "pl_Selection_01_BCK";
			}
			break;
		case 1:
			if (iParam0 == 1)
			{
				return "pl_Selection_02_FWD";
			}
			else
			{
				return "pl_Selection_02_BCK";
			}
			break;
	}
	return "";
}

void func_1903(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 9:
		case 16:
			CAM::SET_CAM_COORD(Local_273[2 /*8*/], -812.4892f, -1374.856f, 44.6794f);
			CAM::SET_CAM_ROT(Local_273[2 /*8*/], -5.5261f, 0f, 86.8713f, 2);
			break;
		case 2:
		case 15:
			CAM::SET_CAM_COORD(Local_273[2 /*8*/], -812.4892f, -1374.856f, 44.6794f);
			CAM::SET_CAM_ROT(Local_273[2 /*8*/], -5.5261f, 0f, 86.8713f, 2);
			break;
		case 3:
		case 14:
			CAM::SET_CAM_COORD(Local_273[2 /*8*/], -812.5746f, -1374.564f, 44.686f);
			CAM::SET_CAM_ROT(Local_273[2 /*8*/], -4.5523f, 0f, 96.87f, 2);
			break;
		case 4:
		case 13:
			CAM::SET_CAM_COORD(Local_273[2 /*8*/], -812.9917f, -1373.843f, 44.6231f);
			CAM::SET_CAM_ROT(Local_273[2 /*8*/], -2.63f, 0f, 92.6513f, 2);
			break;
		case 5:
		case 12:
			CAM::SET_CAM_COORD(Local_273[2 /*8*/], -813.1467f, -1374.226f, 44.4973f);
			CAM::SET_CAM_ROT(Local_273[2 /*8*/], -0.2179f, 0f, 85.9133f, 2);
			break;
		case 6:
		case 11:
			CAM::SET_CAM_COORD(Local_273[2 /*8*/], -813.414f, -1374.35f, 44.5564f);
			CAM::SET_CAM_ROT(Local_273[2 /*8*/], -3.7125f, 0f, 87.4481f, 2);
			break;
		case 7:
		case 10:
			CAM::SET_CAM_COORD(Local_273[2 /*8*/], -813.232f, -1374.797f, 44.3983f);
			CAM::SET_CAM_ROT(Local_273[2 /*8*/], -8.0627f, 0f, 88.8927f, 2);
			break;
		case 8:
		case 17:
			CAM::SET_CAM_COORD(Local_273[2 /*8*/], -813.08f, -1374.765f, 44.5941f);
			CAM::SET_CAM_ROT(Local_273[2 /*8*/], -14.3722f, 0f, 87.8944f, 2);
			break;
		default:
			CAM::SET_CAM_COORD(Local_273[2 /*8*/], -812.5682f, -1374.724f, 44.4911f);
			CAM::SET_CAM_ROT(Local_273[2 /*8*/], 0.6423f, 0f, 89.2399f, 2);
			break;
	}
}

void func_1904()
{
	float fVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	fVar0 = CAM::_0x73FF6BE63DC18819();
	bVar1 = fVar0 > 0.289999f;
	fVar2 = 0.1f;
	fVar3 = 0f;
	fVar4 = 1f;
	if (!bVar1)
	{
		fVar5 = (1f - (2f * fVar0));
		fVar2 = (fVar2 * fVar5);
		fVar3 = (fVar3 + fVar0);
		fVar4 = ((fVar4 - fVar2) - fVar0);
	}
	else
	{
		fVar3 = (fVar3 - fVar2);
		fVar4 = (fVar4 - fVar2);
		fVar2 = (fVar2 * 2f);
	}
	__LIB_12__::func_833(fVar3, 0f, fVar2, 1f, 0, 0, 0, 255, 1);
	__LIB_12__::func_833(fVar4, 0f, fVar2, 1f, 0, 0, 0, 255, 1);
	CAM::_0xE296208C273BD7F0(0, 0, 0, 17, 1, 1);
}

void func_1905(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 9:
		case 16:
			bLocal_159 = false;
			iLocal_160 = 1;
			break;
		case 2:
		case 15:
			bLocal_159 = false;
			iLocal_160 = 1;
			break;
		case 3:
		case 14:
			bLocal_159 = false;
			iLocal_160 = 1;
			break;
		case 4:
		case 13:
			bLocal_159 = false;
			iLocal_160 = 0;
			break;
		case 5:
		case 12:
			bLocal_159 = false;
			iLocal_160 = 0;
			break;
		case 6:
		case 11:
			bLocal_159 = false;
			iLocal_160 = 0;
			break;
		case 7:
		case 10:
			bLocal_159 = true;
			iLocal_160 = 0;
			break;
		case 8:
		case 17:
			bLocal_159 = true;
			iLocal_160 = 0;
			break;
		default:
			bLocal_159 = false;
			iLocal_160 = 1;
			break;
	}
}

void func_2017(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (bParam0)
	{
		func_882(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_882(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_882(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_2265(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_885(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_345(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_2271(Var0);
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

void func_2020(bool bParam0)
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
		func_882(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_882(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_882(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_882(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_882(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_882(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_882(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_882(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_882(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_882(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_882(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_345(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_345(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_345(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_345(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_345(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_345(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_345(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_345(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_345(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_345(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_345(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
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

int func_2040(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
							iVar49 = (iVar49 + func_2040(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_2040(iVar63, -915411861, 1, 0, 0));
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

void func_2043(int iParam0, char* sParam1)
{
	if (iParam0 != 18 && iParam0 != 7)
	{
		UILOG::_UILOG_ADD_TOTAL_TAKE_ENTRY(MISC::GET_HASH_KEY(__LIB_0__::func_558(iParam0)), 1997120069, MISC::_CREATE_VAR_STRING(10, "MISSION_COMPLETE_TAKE_COMP", MISC::_CREATE_VAR_STRING(2, func_888(iParam0, 0))), MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
	else
	{
		UILOG::_UILOG_ADD_TOTAL_TAKE_ENTRY(MISC::GET_HASH_KEY(__LIB_0__::func_558(iParam0)), 1997120069, MISC::_CREATE_VAR_STRING(10, "MISSION_COMPLETE_TAKE_COMP_NOS", MISC::_CREATE_VAR_STRING(2, func_888(iParam0, 0))), MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
}

int func_2156(int iParam0, int iParam1)
{
	var uVar0;
	return func_2320(&uVar0, iParam0, iParam1);
}

void func_2187()
{
	StringCopy(&(Local_22.f_10), "-", 32);
	StringConCat(&(Local_22.f_10), " / ", 32);
	StringCopy(&(Local_22.f_14), "-", 32);
	StringConCat(&(Local_22.f_10), &(Local_22.f_14), 32);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Local_22.f_9, &(Local_22.f_10));
}

void func_2265(int iParam0)
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
	func_345(iParam0, 1, 1, -142743235, 1);
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
		func_345(uVar18[iVar36], 1, 1, -142743235, 1);
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
					__LIB_18__::func_572(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), Global_1905941, 1, 0, 0);
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

void func_2271(struct<6> Param0)
{
	if (!func_2384(Param0.f_4, 1))
	{
	}
	if (!func_2384(Param0, 1))
	{
	}
	if (!func_2384(Param0.f_2, 1))
	{
	}
	if (!func_2384(Param0.f_5, 1))
	{
	}
	if (!func_2384(Param0.f_3, 1))
	{
	}
	if (!func_2384(Param0.f_1, 1))
	{
	}
}

int func_2320(var uParam0, int iParam1, int iParam2)
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
		return func_2320(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

bool func_2384(int iParam0, int iParam1)
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
				if (func_2384(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_2384(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_2384(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_2384(iVar21, 1))
				{
				}
			}
		}
		__LIB_1__::func_712();
		return true;
	}
	return false;
}

