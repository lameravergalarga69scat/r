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
	vector3 vLocal_29 = { 0f, 0f, 0f };
	vector3 vLocal_32 = { 0f, 0f, 0f };
	vector3 vLocal_35 = { 0f, 0f, 0f };
	float fLocal_38 = 0f;
	vector3 vLocal_39 = { 0f, 0f, 0f };
	vector3 vLocal_42 = { 0f, 0f, 0f };
	vector3 vLocal_45 = { 0f, 0f, 0f };
	float fLocal_48 = 0f;
	vector3 vLocal_49 = { 0f, 0f, 0f };
	bool bLocal_52 = false;
	bool bLocal_53 = false;
	vector3 vLocal_54 = { 0f, 0f, 0f };
	float fLocal_57 = 0f;
	vector3 vLocal_58 = { 0f, 0f, 0f };
	int iLocal_61 = 0;
	bool bLocal_62 = false;
	char* sLocal_63 = NULL;
	char* sLocal_64 = NULL;
	bool bLocal_65 = false;
	bool bLocal_66 = false;
	bool bLocal_67 = false;
	vector3 vLocal_68 = { 0f, 0f, 0f };
	bool bLocal_71 = false;
	bool bLocal_72 = false;
	bool bLocal_73 = false;
	vector3 vLocal_74 = { 0f, 0f, 0f };
	bool bLocal_77 = false;
	vector3 vLocal_78 = { 0f, 0f, 0f };
	bool bLocal_81 = false;
	char* sLocal_82 = NULL;
	bool bLocal_83 = false;
	int iLocal_84 = 0;
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
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 24;
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
	var uLocal_154 = 0;
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
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	int iLocal_208 = 0;
	char* sLocal_209 = NULL;
	char* sLocal_210 = NULL;
	char* sLocal_211 = NULL;
	char* sLocal_212 = NULL;
	int iLocal_213[3] = { 0, 0, 0 };
	char* sLocal_217[3] = { NULL, NULL, NULL };
	bool bLocal_221 = false;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	char[] cLocal_227[8] = 0;
	char* sLocal_228 = NULL;
	bool bLocal_229 = false;
	bool bLocal_230 = false;
	bool bLocal_231 = false;
	vector3 vLocal_232 = { 0f, 0f, 0f };
	bool bLocal_235 = false;
	var uLocal_236 = 0;
	bool bLocal_237 = false;
	bool bLocal_238 = false;
	bool bLocal_239 = false;
	var uLocal_240 = 0;
	int iLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	bool bLocal_245 = false;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	bool bLocal_249 = false;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	bool bLocal_253 = false;
	bool bLocal_254 = false;
	vector3 vLocal_255 = { 0f, 0f, 0f };
	float fLocal_258 = 0f;
	struct<8> Local_259 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_267 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	vector3 vLocal_275 = { 0f, 0f, 0f };
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	struct<153> Local_280 = { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1101004800, 0, 0, 0, 0, 0 } ;
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
	var uLocal_454 = 4;
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
	bool bLocal_522 = false;
	bool bLocal_523 = false;
	bool bLocal_524 = false;
	bool bLocal_525 = false;
	vector3 vLocal_526 = { 0f, 0f, 0f };
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	bool bLocal_532 = false;
	int iLocal_533 = 0;
	int iLocal_534 = 0;
	bool bLocal_535 = false;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	int iLocal_539 = 0;
	int iLocal_540 = 0;
	int iLocal_541 = 0;
	bool bLocal_542 = false;
	bool bLocal_543 = false;
	bool bLocal_544 = false;
	bool bLocal_545 = false;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	char* sLocal_549 = NULL;
	bool bLocal_550 = false;
	vector3 vLocal_551 = { 0f, 0f, 0f };
	bool bLocal_554 = false;
	int iLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	bool bLocal_559 = false;
	bool bLocal_560 = false;
	int iLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	bool bLocal_565 = false;
	bool bLocal_566 = false;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	int iLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	int iLocal_574 = 0;
	vector3 vLocal_575 = { 0f, 0f, 0f };
	bool bLocal_578 = false;
	int iLocal_579 = 0;
	int iLocal_580 = 0;
	int iLocal_581 = 0;
	int iLocal_582 = 0;
	int iLocal_583 = 0;
	int iLocal_584 = 0;
	int iLocal_585 = 0;
	int iLocal_586 = 0;
	int iLocal_587 = 0;
	int iLocal_588 = 0;
	var uLocal_589 = 0;
	int iLocal_590 = 0;
	int iLocal_591 = 0;
	int iLocal_592 = 0;
	int iLocal_593 = 0;
	var uLocal_594 = 2;
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
	var uLocal_627 = 2;
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
	var uLocal_660 = 10;
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
	var uLocal_821 = 2;
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
	var uLocal_854 = 3;
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
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(546))
	{
		func_1(&uScriptParam_0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	__LIB_1__::func_751(&uScriptParam_0, &uLocal_594);
	while (!func_3(&uScriptParam_0))
	{
		__LIB_1__::func_598(&uScriptParam_0, &uLocal_594, __LIB_0__::func_749());
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
			__LIB_6__::func_780(uParam0, iVar2);
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
				__LIB_1__::func_687(&uLocal_594);
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
		__LIB_0__::func_11(uParam0);
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
			if (func_51(uParam0))
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
	func_61();
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
						func_130(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_130(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_130(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_130(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_130(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_130(joaat("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_130(joaat("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_130(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_130(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_130(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_130(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_130(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_130(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_130(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_130(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_130(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_130(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_130(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_130(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_130(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_130(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_130(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_130(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_130(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_130(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_132();
						func_133(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
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
						func_130(joaat("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
						func_130(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_130(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
		func_170();
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
							func_130(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
	vVar2 = { func_184(Global_2621440[0 /*12066*/].f_9.f_7, &uVar0, &uVar1, 0, 1, 1, 0, 0, 0) };
	__LIB_0__::func_321(vVar2, uVar1, uVar0, 0);
	__LIB_0__::func_322(vVar2);
	Global_40.f_9.f_15 = __LIB_1__::func_447(vVar2, 0);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	MISC::SET_RANDOM_WEATHER_TYPE(false, true);
}

bool func_39(var uParam0)
{
	bool bVar0;
	bVar0 = false;
	if (__LIB_6__::func_764(iLocal_15) && bLocal_230)
	{
		if (__LIB_6__::func_702(8192))
		{
			bVar0 = true;
		}
		else if (__LIB_6__::func_702(8388608))
		{
			StringCopy(&(uParam0->f_15), "CR_FM_ABANCOACH", 24);
			bVar0 = true;
		}
		else if (__LIB_6__::func_702(16777216))
		{
			StringCopy(&(uParam0->f_15), "CR_FM_LEFTCOACH", 24);
			bVar0 = true;
		}
		else if (__LIB_6__::func_702(67108864))
		{
			StringCopy(&(uParam0->f_15), "CR_F_LDEST", 24);
			bVar0 = true;
		}
	}
	if (iLocal_579 > 0)
	{
		if (!__LIB_0__::func_272(iLocal_20, 0))
		{
			StringCopy(&(uParam0->f_15), "CR_FM_MICAHDEAD", 24);
			bVar0 = true;
		}
		else if (!__LIB_0__::func_272(iLocal_21, 0))
		{
			StringCopy(&(uParam0->f_15), "CR_FM_BILLDEAD", 24);
			bVar0 = true;
		}
		else if (__LIB_6__::func_756(iLocal_20, 250f) && iLocal_579 < 6)
		{
			StringCopy(&(uParam0->f_15), "CR_FM_MICABAN", 24);
			bVar0 = true;
		}
		else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_20, Global_35, 1, 1) && (PED::IS_PED_ON_MOUNT(Global_35) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, false)))
		{
			StringCopy(&(uParam0->f_15), "CR_FM_MICAHATT", 24);
			bVar0 = true;
		}
		else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_21, Global_35, 1, 1) && (PED::IS_PED_ON_MOUNT(Global_35) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, false)))
		{
			StringCopy(&(uParam0->f_15), "CR_FM_BILLATT", 24);
			bVar0 = true;
		}
		else if (__LIB_6__::func_757(iLocal_20) || func_209())
		{
			StringCopy(&(uParam0->f_15), "CR_FM_MICAHATT", 24);
			bVar0 = true;
		}
		else if (__LIB_6__::func_757(iLocal_21))
		{
			StringCopy(&(uParam0->f_15), "CR_FM_BILLATT", 24);
			bVar0 = true;
		}
		else if (iLocal_580 == 1 && !__LIB_0__::func_272(iLocal_101, 0))
		{
			StringCopy(&(uParam0->f_15), "CR_FM_MICHORSE", 24);
			bVar0 = true;
		}
		else if (iLocal_580 == 1 && !__LIB_0__::func_272(iLocal_102, 0))
		{
			StringCopy(&(uParam0->f_15), "CR_FM_BILLHORSE", 24);
			bVar0 = true;
		}
		else if (iLocal_580 == 1 && __LIB_6__::func_703(iLocal_100))
		{
			StringCopy(&(uParam0->f_15), "CR_FM_PHORSE", 24);
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("CACR01_FAIL");
	}
	return bVar0;
}

void func_45(var uParam0)
{
	func_213();
	if (__LIB_0__::func_272(iLocal_20, 0))
	{
		PED::SET_PED_RESET_FLAG(iLocal_20, 53, true);
	}
	if (__LIB_0__::func_272(iLocal_21, 0))
	{
		PED::SET_PED_RESET_FLAG(iLocal_21, 53, true);
	}
	PED::SET_PED_RESET_FLAG(Global_35, 53, true);
	func_214();
	func_215();
	func_216();
	switch (iLocal_579)
	{
		case 0:
			if (func_217())
			{
				if (CAM::IS_SCREEN_FADED_IN())
				{
					iLocal_579 = 1;
				}
			}
			break;
		case 1:
			if (!bLocal_230)
			{
				if (!bLocal_231)
				{
					func_218();
					bLocal_231 = true;
				}
				if (__LIB_6__::func_809(iLocal_15))
				{
					__LIB_6__::func_781(iLocal_15);
					bLocal_230 = true;
				}
			}
			else
			{
				if (!bLocal_83)
				{
					__LIB_6__::func_813(uParam0, func_221(0), func_221(1), 0, 1);
				}
				iLocal_579 = 2;
			}
			break;
		case 2:
			func_223();
			func_224();
			if (bLocal_52)
			{
				func_225();
			}
			if (func_226())
			{
				if (__LIB_6__::func_764(iLocal_15))
				{
					__LIB_6__::func_813(uParam0, func_221(1), func_221(2), 1, 2);
					TASK::ADD_COVER_BLOCKING_AREA(vLocal_49 - Vector(2f, 2f, 2f), vLocal_49 + Vector(2f, 2f, 2f), false, false, false, true);
					PED::SET_PED_CONFIG_FLAG(iLocal_20, 301, true);
					PED::SET_PED_CONFIG_FLAG(iLocal_21, 301, true);
					AUDIO::STOP_PED_SPEAKING(iLocal_20, true);
					AUDIO::_0x660A8F876DF1D4F8(14);
					AUDIO::_0x660A8F876DF1D4F8(6);
					AUDIO::_0x660A8F876DF1D4F8(21);
					AUDIO::_0x660A8F876DF1D4F8(45);
					AUDIO::_0x660A8F876DF1D4F8(25);
					iLocal_579 = 3;
				}
			}
			break;
		case 3:
			if (!__LIB_6__::func_702(268435456))
			{
				if (__LIB_6__::func_702(1073741824 /* Float: 2f */))
				{
					if (!bLocal_522)
					{
						if (__LIB_6__::func_724(&Local_280, "CAMCH_CROB1_EXT", 1, 1))
						{
							bLocal_522 = true;
						}
					}
				}
			}
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
			func_225();
			func_224();
			if (!__LIB_6__::func_764(iLocal_15) || __LIB_6__::func_702(-2147483648))
			{
				if (func_228() || __LIB_6__::func_702(-2147483648))
				{
					if (!__LIB_6__::func_702(268435456))
					{
						if (!bLocal_523)
						{
							func_229();
							bLocal_523 = true;
						}
						iLocal_579 = 4;
					}
					else if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
						CAM::_RENDER_FIRST_PERSON_CAM(0, 0, 3, 0, 0, 1);
						iLocal_579 = 6;
					}
				}
				else
				{
					iLocal_241 = 1;
					func_61();
				}
			}
			break;
		case 4:
			if (!bLocal_578)
			{
				PED::_0x9851DE7AEC10B4E1(1681.22f, -728.45f, 40.66f, 4f, 1, 0);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_21, 1683.236f, -722.3441f, 40.6777f, 212.961f, true, false, true);
				TASK::CLEAR_PED_TASKS(iLocal_21, true, false);
				bLocal_578 = true;
			}
			if (func_230(Local_280.f_152, &Local_280))
			{
				bLocal_524 = true;
				VEHICLE::SET_VEHICLE_DOOR_SHUT(Global_1392388.f_5, 0, false);
				VEHICLE::SET_VEHICLE_DOOR_SHUT(Global_1392388.f_5, 2, false);
				iLocal_579 = 6;
			}
			break;
		case 6:
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
			if (func_231())
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_20, 301, false);
				PED::SET_PED_CONFIG_FLAG(iLocal_21, 301, false);
				__LIB_6__::func_765(0, 1);
				__LIB_0__::func_15(__LIB_0__::func_358(joaat("AMBIENT_COACH_ROBBED")), 1);
				iLocal_241 = 0;
				func_61();
			}
			break;
		case 7:
			if (func_235())
			{
				iLocal_241 = 1;
				func_61();
			}
			break;
	}
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
					func_240(iVar0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
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
				func_240(iVar0, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
				return false;
			}
		}
		iVar0++;
	}
	if (!func_242(uParam0))
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
		if (!func_246(uParam0))
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
		func_250(Global_36, ENTITY::GET_ENTITY_HEADING(Global_35));
	}
	return true;
}

bool func_51(var uParam0)
{
	if (iLocal_241 == 0)
	{
		return true;
	}
	return false;
}

void func_61()
{
	__LIB_1__::func_721(7);
	VEHICLE::SET_RANDOM_TRAINS(true);
	__LIB_1__::func_600(1);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	__LIB_0__::func_325(&iLocal_561);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_24))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_24);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_25))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_25);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_CS_BILLSTACK01X"));
	if (bLocal_522 && !bLocal_524)
	{
		__LIB_6__::func_829(&Local_280);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_539))
	{
		PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_539);
		VOLUME::_DELETE_VOLUME(iLocal_539);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_540))
	{
		PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_540);
		VOLUME::_DELETE_VOLUME(iLocal_540);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_541))
	{
		PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_541);
		VOLUME::_DELETE_VOLUME(iLocal_541);
	}
	if (__LIB_0__::func_272(iLocal_20, 0))
	{
		PED::SET_PED_CONFIG_FLAG(iLocal_20, 113, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_20, 77, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_20, 280, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_20, false);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_20, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_20, 98, false);
		__LIB_1__::func_684(6, 0);
	}
	if (__LIB_0__::func_272(iLocal_101, 0))
	{
		PED::SET_PED_CONFIG_FLAG(iLocal_101, 77, false);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_101, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_101, false);
	}
	if (__LIB_0__::func_272(iLocal_21, 0))
	{
		PED::SET_PED_CONFIG_FLAG(iLocal_21, 113, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_21, 77, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_21, 280, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_21, false);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_21, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_21, 98, false);
		__LIB_1__::func_684(3, 0);
	}
	if (__LIB_0__::func_272(iLocal_102, 0))
	{
		PED::SET_PED_CONFIG_FLAG(iLocal_102, 77, false);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_102, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_102, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1392388.f_6))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Global_1392388.f_6));
	}
	if (CAM::DOES_CAM_EXIST(iLocal_533))
	{
		CAM::DESTROY_CAM(iLocal_533, false);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_534))
	{
		CAM::DESTROY_CAM(iLocal_534, false);
	}
	__LIB_6__::func_824();
	__LIB_1__::func_222(vLocal_68, 0);
	__LIB_6__::func_704(8);
	__LIB_6__::func_704(4);
	__LIB_6__::func_704(16);
	__LIB_6__::func_704(65536);
	__LIB_1__::func_714();
	if (iLocal_241 == 0)
	{
		if (__LIB_1__::func_22(iLocal_19))
		{
			__LIB_6__::func_725(iLocal_19, 0, 0, 0, 60f, 1, 1, 0, 0, 0, 0);
		}
		if (__LIB_1__::func_22(iLocal_18))
		{
			__LIB_6__::func_725(iLocal_18, 0, 0, 0, 60f, 1, 1, 0, 0, 0, 0);
		}
		__LIB_1__::func_463(iLocal_101, iLocal_19, 0, 0, 0);
		__LIB_1__::func_463(iLocal_102, iLocal_18, 0, 0, 0);
	}
	else
	{
		__LIB_6__::func_779(1, 0, 0);
		__LIB_1__::func_463(iLocal_101, iLocal_19, 1, 0, 0);
		__LIB_1__::func_463(iLocal_102, iLocal_18, 1, 0, 0);
	}
	__LIB_2__::func_353(&uLocal_222, 1);
	__LIB_2__::func_353(&uLocal_223, 1);
	__LIB_2__::func_353(&uLocal_224, 1);
	__LIB_2__::func_353(&uLocal_225, 1);
	__LIB_2__::func_353(&uLocal_226, 1);
	STREAMING::REMOVE_ANIM_DICT(sLocal_63);
	if (__LIB_6__::func_764(iLocal_15))
	{
		if (iLocal_241 != 0)
		{
			__LIB_6__::func_705(8192);
		}
	}
}

bool func_130(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
				func_130(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
						func_130(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_130(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_130(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_130(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_130(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_130(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_130(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
					func_130(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_130(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_130(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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

void func_132()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_421();
	func_422();
	func_423();
	func_424();
	func_425();
	__LIB_1__::func_848();
	__LIB_0__::func_376();
}

void func_133(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	func_428(iParam0, 1, 1, -142743235, 1);
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

void func_170()
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
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_469(&uVar4, &iVar1, &iVar2, &iVar3)))
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

Vector3 func_184(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10)
{
	vector3 vVar0;
	vVar0 = { func_484(vParam0, iParam3, iParam4, iParam5, iParam6, 1, iParam7, bParam8, bParam9, bParam10, -1, 1103626240 /* Float: 25f */) };
	if (__LIB_0__::func_86(vVar0))
	{
		vVar0 = { func_484(vParam0, iParam3, iParam4, 0, 1, 1, iParam7, bParam8, 0, 0, -1, 1103626240 /* Float: 25f */) };
	}
	return vVar0;
}

bool func_209()
{
	if (!__LIB_0__::func_75(&uLocal_97))
	{
		return false;
	}
	if (__LIB_0__::func_265(&uLocal_97) > 1f)
	{
		__LIB_0__::func_37(&uLocal_97);
		return false;
	}
	if ((WEAPON::_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_20, joaat("WEAPON_EXPLOSION"), 0) || WEAPON::_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_20, joaat("WEAPON_THROWN_DYNAMITE"), 0)) || PED::IS_PED_RAGDOLL(iLocal_20))
	{
		return true;
	}
	return false;
}

void func_213()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_23))
	{
		if (STREAMING::HAS_MODEL_LOADED(iLocal_28))
		{
			iLocal_23 = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_28, vLocal_29, true, true, false, true);
			ENTITY::SET_ENTITY_ROTATION(iLocal_23, vLocal_32, 2, true);
		}
	}
}

void func_214()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_213[iVar0]))
		{
			if ((MISC::_0x7A76104CC2CC69E8(iLocal_213[iVar0], 1, 1) || (__LIB_11__::func_313(iLocal_213[iVar0], 1, 0, 0, 0) && MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_213[iVar0], true, false), 2f, true))) || FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(ENTITY::GET_ENTITY_COORDS(iLocal_213[iVar0], true, false), 0.5f) > 0)
			{
				if (!bLocal_81)
				{
					if (__LIB_0__::func_665(iLocal_213[iVar0], Global_1392388.f_5, 1, 1) < 3f)
					{
						__LIB_6__::func_715(Global_1392388.f_5, 1f);
						__LIB_6__::func_716(Global_1392388.f_5);
						bLocal_81 = true;
					}
				}
				if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_20, iLocal_208))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_208, "MICAH", iLocal_20);
				}
				FIRE::ADD_EXPLOSION(ENTITY::GET_ENTITY_COORDS(iLocal_213[iVar0], true, false), 25, 1f, true, false, 1f);
				__LIB_1__::func_148(&uLocal_97);
				func_504();
			}
		}
		iVar0++;
	}
}

void func_215()
{
	bool bVar0;
	bool bVar1;
	if (iLocal_591 != 4)
	{
		return;
	}
	bVar0 = false;
	bVar1 = false;
	if (ENTITY::DOES_ENTITY_EXIST(Global_1392388.f_5) && MAP::_DOES_ENTITY_HAVE_BLIP(Global_1392388.f_5))
	{
		bVar0 = true;
	}
	if (MAP::DOES_BLIP_EXIST(iLocal_561))
	{
		bVar1 = true;
	}
	if (bVar0 && bVar1)
	{
		if (!__LIB_1__::func_588("CR_DG_COMP1_OBJ3B", 0, 0, -1, -1, 0))
		{
			__LIB_6__::func_830(8, "CR_DG_COMP1_OBJ3B", 1);
		}
	}
	else if (bVar0)
	{
		if (!__LIB_1__::func_588("CR_DG_COMP1_OBJ3D", 0, 0, -1, -1, 0))
		{
			__LIB_6__::func_830(8, "CR_DG_COMP1_OBJ3D", 1);
		}
	}
	else if (bVar1)
	{
		if (!__LIB_1__::func_588("CR_DG_COMP1_OBJ3", 0, 0, -1, -1, 0))
		{
			__LIB_6__::func_830(8, "CR_DG_COMP1_OBJ3", 1);
		}
	}
	else if (!__LIB_1__::func_588("CR_DG_COMP1_OBJ3C", 0, 0, -1, -1, 0))
	{
		__LIB_6__::func_830(8, "CR_DG_COMP1_OBJ3C", 1);
	}
}

void func_216()
{
	if (bLocal_550)
	{
		return;
	}
	if (!__LIB_0__::func_75(&uLocal_546))
	{
		__LIB_1__::func_148(&uLocal_546);
	}
	switch (iLocal_591)
	{
		case 0:
			if (__LIB_5__::func_352(sLocal_549) || BUILTIN::VDIST(vLocal_551, Global_36) > 2f)
			{
				bLocal_550 = true;
			}
			else if (__LIB_0__::func_265(&uLocal_546) > 6f)
			{
				__LIB_1__::func_422(sLocal_549, 7500, 0, 1, 0, 0, -1, -1, 0);
				bLocal_550 = true;
			}
			break;
		case 1:
			if (!__LIB_0__::func_71(iLocal_20))
			{
				__LIB_1__::func_148(&uLocal_546);
			}
			if (__LIB_5__::func_352(sLocal_549))
			{
				bLocal_550 = true;
			}
			else if (__LIB_0__::func_265(&uLocal_546) > 6f && !__LIB_5__::func_236(0))
			{
				__LIB_1__::func_422(sLocal_549, 7500, 0, 1, 0, 0, -1, -1, 0);
				bLocal_550 = true;
			}
			break;
		case 2:
			if (__LIB_5__::func_352(sLocal_549) || BUILTIN::VDIST(vLocal_551, Global_36) > 2f)
			{
				bLocal_550 = true;
			}
			else
			{
				if (!bLocal_239)
				{
					__LIB_0__::func_37(&uLocal_546);
					return;
				}
				if (__LIB_0__::func_265(&uLocal_546) > 6f)
				{
					__LIB_1__::func_422(sLocal_549, 7500, 0, 1, 0, 0, -1, -1, 0);
					bLocal_550 = true;
				}
			}
			break;
		case 3:
			__LIB_1__::func_422(sLocal_549, 7500, 0, 1, 0, 0, -1, -1, 0);
			bLocal_550 = true;
			break;
		case 4:
			if (__LIB_5__::func_352(sLocal_549) || func_511())
			{
				bLocal_550 = true;
			}
			else if (__LIB_0__::func_265(&uLocal_546) > 6f)
			{
				__LIB_1__::func_422(sLocal_549, 7500, 0, 1, 0, 0, -1, -1, 0);
				bLocal_550 = true;
			}
			break;
		case 5:
			if (!__LIB_5__::func_236(1))
			{
				__LIB_1__::func_422(sLocal_549, 7500, 0, 1, 0, 0, -1, -1, 0);
				bLocal_550 = true;
			}
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			if (__LIB_5__::func_352(sLocal_549) || __LIB_6__::func_702(1073741824 /* Float: 2f */))
			{
				bLocal_550 = true;
			}
			else if (__LIB_0__::func_265(&uLocal_546) > 10f && !__LIB_5__::func_236(0))
			{
				__LIB_1__::func_422(sLocal_549, 7500, 0, 1, 0, 0, -1, -1, 0);
				bLocal_550 = true;
			}
			break;
	}
}

bool func_217()
{
	if (bLocal_560)
	{
		return true;
	}
	if (!func_512(1))
	{
		return false;
	}
	if (!bLocal_229)
	{
		func_513();
		bLocal_229 = true;
	}
	if (!HUD::_TEXT_DATABASE_HAS_LOADED("SCRB"))
	{
		return false;
	}
	if (!HUD::_TEXT_DATABASE_HAS_LOADED("CHRC1A"))
	{
		return false;
	}
	if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(cLocal_227))
	{
		return false;
	}
	__LIB_3__::func_618(vLocal_35, 200f, 1, 0, 0, 0, 0);
	PED::_0x9851DE7AEC10B4E1(vLocal_35, 200f, 1, 0);
	__LIB_6__::func_825();
	func_516(vLocal_68, 30f, -1);
	__LIB_2__::func_862(vLocal_68, 100f, "Coach_robbery_companion1", 1, 0, 0, 0, -1082130432 /* Float: -1f */);
	MISC::_SET_WEATHER_TYPE(joaat("SUNNY"), true, true, true, 180f, false);
	ENTITY::FREEZE_ENTITY_POSITION(Global_35, false);
	if (__LIB_0__::func_272(iLocal_100, 0))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_100, false);
	}
	__LIB_1__::func_148(&uLocal_562);
	bLocal_560 = true;
	return true;
}

void func_218()
{
	__LIB_6__::func_705(4);
	func_518();
	__LIB_6__::func_811(iLocal_15, iLocal_16, iLocal_17);
	__LIB_3__::func_618(__LIB_6__::func_758(iLocal_15), (__LIB_6__::func_707(iLocal_15) + 50f), 1, 0, 0, 0, 0);
}

struct<4> func_221(int iParam0)
{
	struct<4> Var0;
	switch (iParam0)
	{
		case 0:
			Var0 = { 1869.831f, -1866.655f, 41.8191f };
			Var0.f_3 = 25.9784f;
			break;
		case 1:
			Var0 = { 1719.341f, -763.0566f, 41.458f };
			Var0.f_3 = 42.458f;
			break;
		case 2:
			Var0 = { 1719.341f, -763.0566f, 41.458f };
			Var0.f_3 = 42.458f;
			break;
	}
	return Var0;
}

void func_223()
{
	vector3 vVar0[24];
	vector3 vVar3[24];
	switch (iLocal_584)
	{
		case 0:
			if (HUD::_TEXT_DATABASE_HAS_LOADED("SCRB") && HUD::_TEXT_DATABASE_HAS_LOADED("CHRC1A"))
			{
				if (func_512(0))
				{
					StringCopy(&cVar0, "CHRC1_P1", 24);
					if (__LIB_1__::func_49(&cVar0) || __LIB_1__::func_104(&uLocal_105, cVar0, 0, -1, 0, 0))
					{
						__LIB_0__::func_900(6);
						func_532(0);
						AUDIO::TRIGGER_MUSIC_EVENT("CACR01_START");
						iLocal_584 = 1;
					}
				}
			}
			break;
		case 1:
			if (!__LIB_5__::func_236(1))
			{
				if ((bLocal_239 && __LIB_0__::func_71(Global_35)) && __LIB_0__::func_94(iLocal_20, Global_36, 1) < 10f)
				{
					StringCopy(&cVar0, "CHRC1_P2", 24);
					if (__LIB_1__::func_104(&uLocal_105, cVar0, 0, -1, 0, 0))
					{
						iLocal_584 = 2;
					}
				}
			}
			break;
		case 2:
			StringCopy(&cVar0, "CHRC1_P2", 24);
			StringCopy(&cVar3, "CHRC1_SC", 24);
			switch (iLocal_593)
			{
				case 0:
					if (AUDIO::_0x1ECC76792F661CF5(&cVar0))
					{
						if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_20, true, false), vLocal_78) < 50f)
						{
							AUDIO::PAUSE_SCRIPTED_CONVERSATION(&cVar0, true, false, false, false);
							iLocal_593 = 1;
						}
					}
					else if (__LIB_1__::func_104(&uLocal_105, cVar3, 0, -1, 0, 0))
					{
						iLocal_593 = 4;
					}
					break;
				case 1:
					if ((!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iLocal_20) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iLocal_21)) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
					{
						if (__LIB_1__::func_104(&uLocal_105, cVar3, 0, -1, 0, 0))
						{
							iLocal_593 = 2;
						}
					}
					break;
				case 2:
					if (!AUDIO::_0xA2CAC9DEF0195E6F(1))
					{
						AUDIO::RESTART_SCRIPTED_CONVERSATION(&cVar0);
						iLocal_593 = 3;
					}
					break;
				case 3:
					if (!__LIB_5__::func_236(1))
					{
						iLocal_593 = 4;
						iLocal_584 = 8;
					}
					break;
			}
			break;
	}
	if (bLocal_245)
	{
		if (!bLocal_532)
		{
			if (!__LIB_0__::func_75(&uLocal_529))
			{
				__LIB_1__::func_148(&uLocal_529);
			}
			else if (__LIB_0__::func_265(&uLocal_529) > 10f)
			{
				if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_20, true, false), Global_36) > 20f)
				{
					StringCopy(&cVar0, "CHRC1_R1", 24);
					if (__LIB_1__::func_104(&uLocal_105, cVar0, 0, -1, 0, 0))
					{
						bLocal_532 = true;
					}
				}
			}
		}
	}
}

void func_224()
{
	vector3 vVar0[24];
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_100))
	{
		if ((iLocal_591 == 1 || iLocal_591 == 0) || (iLocal_591 == 2 && __LIB_0__::func_71(iLocal_20)))
		{
			PLAYER::_0xC71D07C96946E263(PLAYER::PLAYER_ID(), iLocal_100);
		}
	}
	switch (iLocal_592)
	{
		case 0:
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vLocal_39, true) < 15f)
			{
				if (!PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true))
				{
					iLocal_592 = 3;
				}
				else
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(PED::GET_MOUNT(Global_35), 1.25f);
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vLocal_39, true) < 10f)
					{
						TASK::TASK_STAND_STILL(Global_35, 1000);
						iLocal_592 = 1;
					}
				}
			}
			break;
		case 1:
			if (!PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true))
			{
				iLocal_592 = 3;
			}
			else if (ENTITY::GET_ENTITY_SPEED(Global_35) < 0.2f)
			{
				TASK::TASK_DISMOUNT_ANIMAL(Global_35, 0, 0, 0, 0, 0);
				iLocal_592 = 2;
			}
			else if (!__LIB_0__::func_491(Global_35, -982327190))
			{
				TASK::TASK_STAND_STILL(Global_35, 1000);
			}
			break;
		case 2:
			if (!PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true))
			{
				iLocal_592 = 3;
			}
			else if (!__LIB_0__::func_491(Global_35, 501393341))
			{
				TASK::TASK_DISMOUNT_ANIMAL(Global_35, 0, 0, 0, 0, 0);
			}
			break;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1392388.f_5) && iLocal_580 < 3)
	{
		if (iLocal_555 == 0)
		{
			if (__LIB_0__::func_94(Global_1392388.f_5, vLocal_35, 1) < 30f)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("CACR01_APPROACH");
				iLocal_555 = 1;
			}
		}
		else if (iLocal_555 == 1)
		{
			if (__LIB_0__::func_94(Global_1392388.f_5, vLocal_35, 1) < 5f)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("CACR01_ACTION");
				iLocal_555 = 2;
			}
		}
	}
	switch (iLocal_580)
	{
		case 0:
			if (func_512(0))
			{
				iLocal_580 = 1;
			}
			break;
		case 1:
			if (bLocal_542 && __LIB_0__::func_71(Global_35))
			{
				__LIB_6__::func_831(Global_35, vLocal_39, 0, 70f, bLocal_543, 10f, 1084227584 /* Float: 5f */, 1, 1, 1, 0);
			}
			if (func_226())
			{
				if (!bLocal_53)
				{
					func_536();
				}
				else
				{
					func_537();
				}
				if (!bLocal_52)
				{
					func_538();
				}
				else
				{
					__LIB_6__::func_808(iLocal_20, 1f);
					func_540();
				}
				if (BUILTIN::VDIST(Global_36, vLocal_526) < 140f || BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_20, true, false), vLocal_35) < 7f)
				{
					if (__LIB_6__::func_702(65536))
					{
						__LIB_6__::func_704(65536);
					}
				}
			}
			else
			{
				if (__LIB_0__::func_272(iLocal_20, 0) && __LIB_0__::func_272(iLocal_21, 0))
				{
					if (__LIB_0__::func_396(iLocal_20) && __LIB_0__::func_396(iLocal_21))
					{
						if (BUILTIN::VDIST(vLocal_575, Global_36) < 80f)
						{
							func_542();
						}
						if (!bLocal_239)
						{
							if (__LIB_0__::func_94(iLocal_20, Global_36, 1) < 15f || !__LIB_1__::func_652())
							{
								AUDIO::STOP_PED_SPEAKING(iLocal_20, false);
								AUDIO::_0x0D7FD6A55FD63AEF(14, 3, 1);
								AUDIO::_0x0D7FD6A55FD63AEF(6, 3, 1);
								AUDIO::_0x0D7FD6A55FD63AEF(21, 3, 1);
								AUDIO::_0x0D7FD6A55FD63AEF(45, 3, 1);
								AUDIO::_0x0D7FD6A55FD63AEF(25, 3, 1);
								bLocal_239 = true;
							}
						}
						else
						{
							func_544();
						}
					}
					else if (!bLocal_239)
					{
						func_545();
					}
					else if (!__LIB_0__::func_71(iLocal_20))
					{
						if (bLocal_237)
						{
							TASK::CLEAR_PED_TASKS(iLocal_21, true, false);
							__LIB_3__::func_456(iLocal_21);
							bLocal_237 = false;
						}
						if (!__LIB_0__::func_163(iLocal_20, 1868526510))
						{
							TASK::TASK_MOUNT_ANIMAL(iLocal_20, iLocal_101, 20000, -1, 2f, 513, 0, 0);
						}
					}
				}
				if (!bLocal_544)
				{
					if (__LIB_0__::func_94(iLocal_100, Global_36, 1) < 12f)
					{
						func_532(1);
						__LIB_0__::func_745(6);
						__LIB_1__::func_718(7);
						bLocal_544 = true;
					}
				}
				else if (!bLocal_545)
				{
					if (__LIB_0__::func_71(Global_35) || AITRANSPORT::_0x619E63980BFC0096(Global_35, iLocal_100, 0))
					{
						__LIB_1__::func_721(7);
						__LIB_0__::func_900(6);
						func_532(2);
						bLocal_545 = true;
					}
				}
			}
			func_549();
			func_550();
			if (!AICOVERPOINT::_0xC276FE69DDA22BAD(iLocal_26))
			{
				iLocal_26 = TASK::ADD_COVER_POINT(vLocal_255, fLocal_258, 0, 2, 0, true);
			}
			if (func_511())
			{
				__LIB_0__::func_325(&iLocal_561);
			}
			if (__LIB_6__::func_764(iLocal_15))
			{
				if (__LIB_6__::func_702(1))
				{
					if (__LIB_0__::func_272(iLocal_20, 0))
					{
						PED::SET_PED_CONFIG_FLAG(iLocal_20, 280, true);
						PED::SET_PED_CONFIG_FLAG(iLocal_20, 204, true);
						PED::SET_PED_CONFIG_FLAG(iLocal_20, 167, false);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_20, false);
						PED::SET_PED_COMBAT_MOVEMENT(iLocal_20, 1);
						PED::SET_PED_COMBAT_RANGE(iLocal_20, 2);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_20, 27, false);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_20, 0, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_20, 98, true);
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_20, ENTITY::GET_ENTITY_COORDS(iLocal_20, true, false), 10f, 0, 0, 0);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_20, 100f, 0, 0);
					}
					if (__LIB_0__::func_272(iLocal_21, 0))
					{
						PED::SET_PED_CONFIG_FLAG(iLocal_21, 280, true);
						TASK::CLEAR_PED_TASKS(iLocal_21, true, false);
						PED::SET_PED_CONFIG_FLAG(iLocal_21, 204, true);
						PED::SET_PED_CONFIG_FLAG(iLocal_21, 167, false);
						PED::SET_PED_COMBAT_MOVEMENT(iLocal_21, 1);
						PED::SET_PED_COMBAT_RANGE(iLocal_21, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_21, 0, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_21, 98, true);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_21, false);
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_21, ENTITY::GET_ENTITY_COORDS(iLocal_21, true, false), 10f, 0, 0, 0);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_21, 100f, 0, 0);
					}
					bLocal_254 = true;
					bLocal_253 = true;
					StringCopy(&cVar0, "CHRC1_HIT", 24);
					__LIB_1__::func_104(&uLocal_105, cVar0, 0, -1, 0, 0);
					func_532(7);
					__LIB_0__::func_325(&iLocal_103);
					__LIB_1__::func_148(&uLocal_250);
					iLocal_580 = 2;
				}
			}
			break;
		case 2:
			if (__LIB_0__::func_265(&uLocal_250) > 15f)
			{
				if (!bLocal_254)
				{
					PED::SET_PED_COMBAT_MOVEMENT(iLocal_20, 2);
					PED::SET_PED_COMBAT_RANGE(iLocal_20, 0);
					if (PED::IS_PED_DEFENSIVE_AREA_ACTIVE(iLocal_20, false))
					{
						PED::REMOVE_PED_DEFENSIVE_AREA(iLocal_20, false);
					}
					bLocal_254 = true;
				}
			}
			else if (__LIB_0__::func_265(&uLocal_250) > 20f)
			{
				if (!bLocal_253)
				{
					PED::SET_PED_COMBAT_MOVEMENT(iLocal_21, 2);
					PED::SET_PED_COMBAT_RANGE(iLocal_21, 0);
					if (PED::IS_PED_DEFENSIVE_AREA_ACTIVE(iLocal_21, false))
					{
						PED::REMOVE_PED_DEFENSIVE_AREA(iLocal_21, false);
					}
					bLocal_253 = true;
				}
			}
			if (!bLocal_62)
			{
				func_551(Global_1392388.f_5);
			}
			func_552();
			if (!bLocal_525)
			{
				if (bLocal_62)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(iLocal_20, joaat("WEAPON_REVOLVER_DOUBLEACTION_MICAH"), false, 0, false, false);
					WEAPON::SET_CURRENT_PED_WEAPON(iLocal_20, joaat("WEAPON_UNARMED"), false, 1, false, false);
					TASK::TASK_SWAP_WEAPON(iLocal_20, 1, 1, 0, 0);
					TASK::REQUEST_WAYPOINT_RECORDING(sLocal_228);
					if (PED::IS_PED_DEFENSIVE_AREA_ACTIVE(iLocal_20, false))
					{
						PED::REMOVE_PED_DEFENSIVE_AREA(iLocal_20, false);
					}
					if (PED::IS_PED_DEFENSIVE_AREA_ACTIVE(iLocal_21, false))
					{
						PED::REMOVE_PED_DEFENSIVE_AREA(iLocal_21, false);
					}
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_20, 98, false);
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_21, 98, false);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_20, 1);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_21, 1);
					func_553();
					bLocal_525 = true;
				}
			}
			else if (bLocal_77)
			{
				func_554(iLocal_20, iLocal_101, Global_1392388.f_5, sLocal_228, &uLocal_278, 2f, -20f, 0f, 44);
				func_554(iLocal_21, iLocal_102, Global_1392388.f_5, sLocal_228, &uLocal_279, -2f, -22f, 0f, 44);
			}
			else if (!bLocal_565)
			{
				if (__LIB_0__::func_272(iLocal_20, 0))
				{
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_20, 500f, 0, 0);
				}
				if (__LIB_0__::func_272(iLocal_21, 0))
				{
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_21, 500f, 0, 0);
				}
				bLocal_565 = true;
			}
			if (__LIB_6__::func_702(2) && Global_1392388.f_9 == 0)
			{
				func_555();
				iLocal_580 = 3;
			}
			break;
		case 3:
			break;
	}
}

void func_225()
{
	int iVar0;
	vector3 vVar1[24];
	vector3 vVar4;
	if (!__LIB_0__::func_272(iLocal_20, 0))
	{
		return;
	}
	if (!bLocal_566)
	{
		if (!__LIB_0__::func_71(iLocal_20))
		{
			if (!__LIB_5__::func_236(1))
			{
				if (__LIB_0__::func_94(iLocal_20, vLocal_255, 1) < 15f)
				{
					StringCopy(&cVar1, "CHRC1_PLAN", 24);
					if (__LIB_1__::func_104(&uLocal_105, cVar1, 0, -1, 0, 0))
					{
						bLocal_566 = true;
					}
				}
			}
		}
	}
	if (!bLocal_554)
	{
		if (!__LIB_5__::func_236(1))
		{
			if (__LIB_0__::func_94(iLocal_20, vLocal_255, 1) < 10f)
			{
				StringCopy(&cVar1, "CHRC1_TREE", 24);
				if (__LIB_1__::func_104(&uLocal_105, cVar1, 0, -1, 0, 0))
				{
					__LIB_0__::func_745(iLocal_19);
					if (!func_511())
					{
						iLocal_561 = MAP::_BLIP_ADD_FOR_RADIUS(-1282792512, vLocal_255, 4f);
						MAP::_BLIP_SET_MODIFIER(iLocal_561, -401963276);
					}
					func_532(4);
					bLocal_554 = true;
				}
			}
		}
	}
	if (bLocal_71)
	{
		if (!bLocal_72)
		{
			if (!__LIB_0__::func_86(vLocal_74))
			{
				vVar4 = { vLocal_74 };
			}
			else
			{
				vVar4 = { vLocal_35 };
			}
			if ((FIRE::IS_EXPLOSION_IN_SPHERE(25, vVar4, 3f) && !func_556()) && __LIB_0__::func_94(Global_1392388.f_5, vLocal_35, 1) > 30f)
			{
				bLocal_67 = true;
				if (iLocal_585 < 6)
				{
					iLocal_585 = 6;
				}
				__LIB_6__::func_705(32768);
				__LIB_1__::func_148(&uLocal_88);
				bLocal_72 = true;
			}
		}
		else if (__LIB_1__::func_313(&uLocal_88, 1.5f))
		{
			StringCopy(&cVar1, "CHRC1_C2", 24);
			__LIB_1__::func_104(&uLocal_105, cVar1, 0, -1, 0, 0);
		}
		if (!bLocal_73)
		{
			if (((func_556() && MAP::DOES_BLIP_EXIST(iLocal_103)) && __LIB_0__::func_94(Global_1392388.f_5, vLocal_35, 1) > 15f) && !__LIB_6__::func_702(1))
			{
				if (!__LIB_6__::func_702(32768))
				{
					__LIB_6__::func_705(32768);
				}
				bLocal_73 = true;
			}
		}
	}
	switch (iLocal_585)
	{
		case 0:
			if (bLocal_52)
			{
				if (!__LIB_5__::func_236(1))
				{
					StringCopy(&cVar1, "CHRC1_IG1_PLNT", 24);
					if (__LIB_1__::func_104(&uLocal_105, cVar1, 0, -1, 0, 0))
					{
						AUDIO::TRIGGER_MUSIC_EVENT("CACR01_ARRIVE");
						iLocal_585 = 2;
					}
				}
			}
			break;
		case 2:
			if (!__LIB_5__::func_236(1))
			{
				iLocal_585 = 3;
			}
			break;
		case 3:
			if (!__LIB_5__::func_236(1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Global_1392388.f_5))
				{
					iVar0 = Global_1392388.f_5;
					if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_20, true, false), ENTITY::GET_ENTITY_COORDS(iVar0, true, false)) < 200f && iLocal_588 >= 6)
					{
						StringCopy(&cVar1, "CHRC1_IG1_COV", 24);
						if (__LIB_1__::func_104(&uLocal_105, cVar1, 0, -1, 0, 0))
						{
							func_532(5);
							__LIB_6__::func_717(Global_1392388.f_5, 0);
							__LIB_6__::func_718(Global_1392388.f_5, 1);
							iLocal_585 = 4;
						}
					}
				}
			}
			break;
		case 4:
			if (!__LIB_5__::func_236(1))
			{
				iLocal_585 = 5;
			}
			break;
		case 5:
			iLocal_585 = 6;
			break;
		case 6:
			if ((__LIB_6__::func_702(2) && !__LIB_1__::func_394(PLAYER::PLAYER_ID(), 1, 0, 1)) && Global_1392388.f_9 == 0)
			{
				if (!__LIB_5__::func_236(1))
				{
					if (!__LIB_0__::func_75(&uLocal_85))
					{
						__LIB_1__::func_148(&uLocal_85);
					}
					else if (__LIB_0__::func_265(&uLocal_85) > 2.5f)
					{
						StringCopy(&cVar1, "CHRC1_L1", 24);
						if (__LIB_1__::func_104(&uLocal_105, cVar1, 0, -1, 0, 0))
						{
							func_532(8);
							__LIB_0__::func_37(&uLocal_85);
							AUDIO::TRIGGER_MUSIC_EVENT("CACR01_STOP");
							iLocal_585 = 7;
						}
					}
				}
			}
			else if (!bLocal_67)
			{
				if (!__LIB_6__::func_702(1))
				{
					if (!PED::IS_PED_IN_COVER(Global_35, false, false) && !PED::IS_PED_AIMING_FROM_COVER(Global_35))
					{
						if (__LIB_6__::func_771(&uLocal_203, Global_36, vLocal_35, 0) && func_562(Global_35))
						{
							StringCopy(&cVar1, "CHRC1_C1", 24);
							if (__LIB_1__::func_104(&uLocal_105, cVar1, 0, -1, 0, 0))
							{
								bLocal_67 = true;
							}
						}
					}
				}
			}
			break;
		case 7:
			if (!__LIB_5__::func_236(1))
			{
				iLocal_585 = 9;
			}
			break;
		case 9:
			func_563();
			if (!bLocal_249)
			{
				if (!__LIB_0__::func_75(&uLocal_246))
				{
					__LIB_1__::func_148(&uLocal_246);
				}
				else if ((__LIB_0__::func_265(&uLocal_246) > 10f && __LIB_0__::func_665(Global_35, Global_1392388.f_5, 1, 1) > 10f) && !__LIB_5__::func_352("CR_O_ROBCOACHA"))
				{
					__LIB_1__::func_422("CR_O_ROBCOACHA", 7500, 0, 1, 0, 0, -1, -1, 0);
					bLocal_249 = true;
				}
			}
			break;
	}
}

bool func_226()
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (bLocal_235)
	{
		return true;
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vLocal_232, true) < 15f)
	{
		iVar0 = 1;
	}
	if (__LIB_0__::func_272(iLocal_20, 0) && __LIB_0__::func_94(iLocal_20, vLocal_232, 1) < 15f)
	{
		iVar1 = 1;
		bLocal_245 = true;
	}
	if (__LIB_0__::func_272(iLocal_21, 0) && __LIB_0__::func_94(iLocal_21, vLocal_232, 1) < 15f)
	{
		iVar2 = 1;
	}
	if ((iVar0 && iVar1) && iVar2)
	{
		__LIB_5__::func_511(1);
		bLocal_235 = true;
		return true;
	}
	return false;
}

bool func_228()
{
	if (Global_40.f_9146 > iLocal_61)
	{
		return true;
	}
	return false;
}

void func_229()
{
	vector3 vVar0;
	vVar0 = { 1681.286f, -711.2542f, 42.5346f };
	if (ENTITY::IS_ENTITY_ATTACHED(Global_35))
	{
		ENTITY::DETACH_ENTITY(Global_35, true, true);
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		AITRANSPORT::_0x8886D83A430537FD(Global_35, 0);
	}
	__LIB_1__::func_620(&Local_280, Global_35, "ARTHUR", 0, 0, 0);
	__LIB_1__::func_620(&Local_280, iLocal_20, "MicahBell", 0, 0, 0);
	__LIB_1__::func_620(&Local_280, Global_1392388.f_5, "STAGECOACH004X", 0, 0, 0);
	if (STREAMING::HAS_MODEL_LOADED(joaat("P_CS_BILLSTACK01X")))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_24))
		{
			iLocal_24 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("P_CS_BILLSTACK01X"), vVar0, true, true, false, true);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_24))
		{
			iLocal_25 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("P_CS_BILLSTACK01X"), vVar0, true, true, false, true);
		}
		__LIB_1__::func_620(&Local_280, iLocal_24, "P_CS_BILLSTACK01X", 0, 0, 0);
		__LIB_1__::func_620(&Local_280, iLocal_25, "P_CS_BILLSTACK01X^1", 0, 0, 0);
	}
}

bool func_230(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	int iVar0;
	__LIB_1__::func_534(uParam4, &uParam0);
	if (__LIB_0__::func_84(uParam4, 2) && !__LIB_0__::func_84(uParam4, 67108864))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SKIP_CUTSCENE"), false);
	}
	if (__LIB_0__::func_81(uParam4) != 1)
	{
		__LIB_6__::func_754(uParam4);
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
					__LIB_6__::func_751(uParam4, &uParam0);
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
				if (__LIB_6__::func_724(uParam4, &uParam0, 1, 1))
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
					__LIB_6__::func_751(uParam4, &uParam0);
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
			func_594(uParam4);
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
				__LIB_6__::func_754(uParam4);
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

bool func_231()
{
	vector3 vVar0[24];
	int iVar3;
	int iVar4;
	switch (iLocal_581)
	{
		case 0:
			if (__LIB_6__::func_702(268435456))
			{
				if (!__LIB_5__::func_236(1))
				{
					StringCopy(&cVar0, "CHRC1_L2", 24);
					if (__LIB_1__::func_104(&uLocal_105, cVar0, 0, -1, 0, 0))
					{
						iLocal_581 = 2;
					}
				}
			}
			else
			{
				iLocal_581 = 2;
			}
			break;
		case 2:
			if (!__LIB_5__::func_236(1))
			{
				iVar3 = __LIB_6__::func_776(iLocal_20, iLocal_101, vLocal_275, &Local_259, 0);
				iVar4 = __LIB_6__::func_776(iLocal_21, iLocal_102, vLocal_275, &Local_267, 1.5f);
				if (!bLocal_559)
				{
					if (!__LIB_0__::func_75(&uLocal_556))
					{
						if (Local_259.f_7 || Local_267.f_7)
						{
							__LIB_1__::func_148(&uLocal_556);
						}
					}
					else if (__LIB_0__::func_265(&uLocal_556) > 3f)
					{
						__LIB_6__::func_766();
						bLocal_559 = true;
					}
				}
				if (iVar3 && iVar4)
				{
					__LIB_6__::func_705(8192);
					iLocal_581 = 3;
				}
			}
			break;
		case 3:
			return true;
	}
	return false;
}

bool func_235()
{
	vector3 vVar0[24];
	switch (iLocal_582)
	{
		case 0:
			if (!__LIB_5__::func_236(1))
			{
				StringCopy(&cVar0, "CHRC1_F1", 24);
				if (__LIB_1__::func_104(&uLocal_105, cVar0, 0, -1, 0, 0))
				{
					iLocal_582 = 1;
				}
			}
			break;
		case 1:
			if (!__LIB_5__::func_236(1))
			{
				iLocal_582 = 3;
				return true;
			}
			break;
	}
	return false;
}

int func_240(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
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
						__LIB_6__::func_725(iParam0, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
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
				func_612(Global_1360165[iParam0 /*1157*/], vVar0, iParam6, 2, 1073741824 /* Float: 2f */);
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

bool func_242(var uParam0)
{
	__LIB_6__::func_704(8192);
	iLocal_18 = 3;
	iLocal_19 = 6;
	iLocal_15 = 8;
	iLocal_16 = 0;
	iLocal_17 = 1;
	vLocal_68 = { 1079.12f, -1431.24f, 61.83f };
	iLocal_28 = joaat("S_TREE_STUMP_08_BC");
	vLocal_29 = { 1678.14f, -737.04f, 41.1f };
	vLocal_32 = { 0f, 0f, 60.16f };
	vLocal_35 = { 1684.1f, -729.46f, 41.69f };
	fLocal_38 = 36.85f;
	vLocal_39 = { 1689.685f, -754.027f, 40.8595f };
	vLocal_42 = { 1687.32f, -756.8225f, 40.9029f };
	vLocal_45 = { 1700.78f, -737.064f, 40.7935f };
	fLocal_48 = 93.5888f;
	vLocal_49 = { 1695.004f, -749.8577f, 40.7439f };
	vLocal_54 = { 1073.16f, -1421.23f, 54.99f };
	fLocal_57 = 101.26f;
	vLocal_232 = { 1713.278f, -757.5556f, 41.1541f };
	iLocal_61 = Global_40.f_9146;
	sLocal_63 = "mech_inventory@clothing@bandana";
	sLocal_64 = "neck_2_face";
	sLocal_209 = "script@beat@wilderness@companionCoachRobbery@companionCoachRobbery";
	sLocal_210 = "script_proc@robberies@coach@comp1";
	cLocal_227 = "prc_chrob_comp1_comp";
	sLocal_228 = "prc_chrob_comp1_coach";
	sLocal_82 = "prc_chrob_comp1_MicahD";
	vLocal_255 = { 1686.019f, -740.147f, 40.6119f };
	fLocal_258 = 55.2738f;
	vLocal_275 = { 2063.519f, -1136.202f, 40.7975f };
	vLocal_526 = { 1633.971f, -544.6299f, 45.1869f };
	vLocal_78 = { 2059.638f, -1068.022f, 43.03f };
	vLocal_575 = { 1869.777f, -1855.655f, 42.0235f };
	TASK::REQUEST_WAYPOINT_RECORDING(cLocal_227);
	TASK::REQUEST_WAYPOINT_RECORDING(sLocal_82);
	__LIB_3__::func_414(&uLocal_222, vLocal_35, 3f, 1, -1, 0);
	__LIB_3__::func_414(&uLocal_223, vLocal_255, 3f, 1, -1, 0);
	if (!__LIB_1__::func_565(&uLocal_224))
	{
		__LIB_3__::func_414(&uLocal_224, 1683.586f, -734.2679f, 40.7537f, 2f, 1, 4, 0);
	}
	if (!__LIB_1__::func_565(&uLocal_225))
	{
		__LIB_3__::func_414(&uLocal_225, 1681.148f, -724.2836f, 40.7309f, 2f, 1, 36, 0);
	}
	if (!__LIB_1__::func_565(&uLocal_226))
	{
		__LIB_3__::func_414(&uLocal_226, 1681.148f, -724.2836f, 40.7309f, 6f, 1, 36, 0);
	}
	STREAMING::REQUEST_MODEL(iLocal_28, false);
	STREAMING::REQUEST_MODEL(joaat("P_CS_BILLSTACK01X"), false);
	STREAMING::REQUEST_MODEL(WEAPON::_GET_WEAPONTYPE_MODEL(joaat("WEAPON_THROWN_DYNAMITE")), false);
	STREAMING::REQUEST_ANIM_DICT(sLocal_63);
	HUD::_TEXT_DATABASE_REQUEST("SCRB");
	HUD::_TEXT_DATABASE_REQUEST("CHRC1A");
	VEHICLE::SET_RANDOM_TRAINS(false);
	__LIB_1__::func_600(0);
	__LIB_0__::func_928(&uLocal_105, Global_35, "ARTHUR", 0);
	bLocal_66 = true;
	__LIB_6__::func_704(8);
	__LIB_6__::func_705(16);
	__LIB_6__::func_705(65536);
	__LIB_6__::func_705(131072);
	MISC::_0x1096603B519C905F("CACR01");
	__LIB_0__::func_63(&(uParam0->f_9), 256, 1);
	__LIB_6__::func_761(uParam0, 60f);
	iLocal_241 = -1;
	return true;
}

bool func_246(var uParam0)
{
	if (__LIB_0__::func_1(Global_1935630, 2048))
	{
		return false;
	}
	if (func_658(uParam0))
	{
		CAM::DO_SCREEN_FADE_IN(500);
		__LIB_1__::func_164(0);
		HUD::DISPLAY_HUD(true);
		MAP::DISPLAY_RADAR(true);
		return true;
	}
	return false;
}

int func_250(vector3 vParam0, float fParam3)
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
		iVar0 = func_666(0, 0);
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

void func_421()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_826(0);
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
	func_826(1);
}

void func_422()
{
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_130(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_423()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_829(0);
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
	func_829(1);
}

void func_424()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_1__::func_432(15000, 0, 0, 0, 1);
			func_829(0);
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
	func_829(1);
}

void func_425()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_130(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_130(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_428(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_428(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
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

int func_428(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			func_428(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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

int func_469(var uParam0, int iParam1, int iParam2, int iParam3)
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
	iVar11 = (func_875(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_952(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_130(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	__LIB_1__::func_432(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

Vector3 func_484(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
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
		bVar10 = func_890();
		if (VOLUME::_DOES_VOLUME_EXIST(bVar10))
		{
		}
	}
	if (!func_891(Global_1310720.f_21))
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

void func_504()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		OBJECT::DELETE_OBJECT(&(iLocal_213[iVar0]));
		iVar0++;
	}
}

bool func_511()
{
	if (BUILTIN::VDIST(vLocal_255, Global_36) < 2f && PED::IS_PED_IN_COVER(Global_35, false, false))
	{
		return true;
	}
	return false;
}

bool func_512(bool bParam0)
{
	if (!bLocal_65)
	{
		PED::_0xED9582B3DA8F02B4(5);
		bLocal_65 = true;
	}
	if (bParam0)
	{
		if (!__LIB_0__::func_75(&uLocal_91))
		{
			__LIB_1__::func_148(&uLocal_91);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_100))
		{
			func_911();
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_20))
	{
		iLocal_20 = func_240(6, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_20))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_101))
	{
		iLocal_101 = func_912(&uLocal_104, 6, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_101))
	{
		return false;
	}
	if (!__LIB_0__::func_858(6, 256))
	{
		__LIB_1__::func_411(6, iLocal_101, 1);
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_21))
	{
		iLocal_21 = func_240(3, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_21))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_102))
	{
		iLocal_102 = func_912(&uLocal_104, 3, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_102))
	{
		return false;
	}
	if (!__LIB_0__::func_858(3, 256))
	{
		__LIB_1__::func_411(3, iLocal_102, 1);
		return false;
	}
	if (!__LIB_0__::func_272(iLocal_20, 257))
	{
		return false;
	}
	if (!__LIB_0__::func_272(iLocal_101, 257))
	{
		return false;
	}
	if (!__LIB_0__::func_272(iLocal_21, 257))
	{
		return false;
	}
	if (!__LIB_0__::func_272(iLocal_102, 257))
	{
		return false;
	}
	if ((bParam0 && !ENTITY::DOES_ENTITY_EXIST(iLocal_100)) && __LIB_0__::func_265(&uLocal_91) < 5f)
	{
		return false;
	}
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_101, true);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_102, true);
	ENTITY::_SET_ENTITY_HEALTH(iLocal_20, ENTITY::GET_ENTITY_MAX_HEALTH(iLocal_20, false), 0);
	ENTITY::_SET_ENTITY_HEALTH(iLocal_21, ENTITY::GET_ENTITY_MAX_HEALTH(iLocal_21, false), 0);
	PED::SET_PED_CONFIG_FLAG(iLocal_20, 204, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_21, 204, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_20, 259, false);
	PED::SET_PED_CONFIG_FLAG(iLocal_21, 259, false);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_20, false);
	PED::SET_PED_CONFIG_FLAG(iLocal_20, 66, true);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_21, false);
	PED::SET_PED_CONFIG_FLAG(iLocal_21, 66, true);
	ENTITY::SET_ENTITY_PROOFS(iLocal_20, 0, false);
	ENTITY::SET_ENTITY_PROOFS(iLocal_21, 0, false);
	PED::SET_PED_CONFIG_FLAG(iLocal_21, 301, false);
	PED::SET_PED_CONFIG_FLAG(iLocal_21, 297, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_21, 315, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_21, 130, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_21, 331, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_21, 330, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_20, 301, false);
	PED::SET_PED_CONFIG_FLAG(iLocal_20, 297, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_20, 315, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_20, 130, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_20, 331, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_20, 330, true);
	__LIB_1__::func_684(3, 1);
	__LIB_1__::func_684(6, 1);
	__LIB_0__::func_928(&uLocal_105, iLocal_20, "MICAH_BELL", 0);
	__LIB_0__::func_928(&uLocal_105, iLocal_21, "BILL", 0);
	return true;
}

void func_513()
{
	vector3 vVar0;
	float fVar3;
	vector3 vVar4;
	float fVar7;
	vector3 vVar8;
	float fVar11;
	vVar0 = { 1868.283f, -1846.995f, 41.5664f };
	fVar3 = 252.5205f;
	vVar4 = { 1861.036f, -1829.247f, 42.2005f };
	fVar7 = 126.18f;
	vVar8 = { 1851.696f, -1838.219f, 42.0032f };
	fVar11 = 65.0825f;
	__LIB_0__::func_928(&uLocal_105, iLocal_20, "MICAH_BELL", 0);
	if (__LIB_0__::func_94(iLocal_101, vVar4, 1) > 2f)
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_101, vVar4, fVar7, true, false, true);
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_101, 48, true);
	}
	if (__LIB_0__::func_94(iLocal_21, vVar0, 1) > 2f)
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_21, true, true);
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_21, vVar0, fVar3, true, false, true);
		WEAPON::_HIDE_PED_WEAPONS(iLocal_21, 2, true);
		TASK::TASK_LOOK_AT_ENTITY(iLocal_21, iLocal_101, -1, 0, 51, 0);
	}
	TASK::_TASK_START_SCENARIO_IN_PLACE(iLocal_21, joaat("WORLD_HUMAN_WAITING_IMPATIENT"), -1, true, 0, -1f, false);
	__LIB_0__::func_928(&uLocal_105, iLocal_21, "BILL", 0);
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_102, vVar8, fVar11, true, false, true);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_102, 48, true);
}

void func_516(vector3 vParam0, float fParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	switch (iParam4)
	{
		case 1:
			iVar1 = 0;
			iVar2 = 2;
			break;
		case 0:
			iVar1 = 3;
			iVar2 = 5;
			break;
		default:
			iVar1 = 0;
			iVar2 = 5;
			break;
	}
	iVar0 = iVar1;
	while (iVar0 <= iVar2)
	{
		if (BUILTIN::VDIST(Global_1393237.f_11[iVar0 /*30*/].f_3, vParam0) < fParam3)
		{
			__LIB_5__::func_766(iVar0);
		}
		iVar0++;
	}
}

void func_518()
{
	__LIB_6__::func_777(8, 105, 72, __LIB_6__::func_710(105), __LIB_6__::func_711(8));
}

void func_532(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			sLocal_549 = "CR_DG_COMP1_OBJ2";
			vLocal_551 = { Global_36 };
			break;
		case 1:
			sLocal_549 = "CR_DG_COMP1_OBJ1";
			break;
		case 2:
			sLocal_549 = "CR_DG_COMP1_OBJ2";
			vLocal_551 = { Global_36 };
			break;
		case 3:
			sLocal_549 = "CR_DG_COMP1_RET";
			break;
		case 4:
			sLocal_549 = "CR_DG_COMP1_OBJ3";
			break;
		case 5:
			sLocal_549 = "CR_DG_COMP1_OBJ";
			break;
		case 6:
			sLocal_549 = "CR_O_STOPCOACH";
			break;
		case 7:
			sLocal_549 = "CR_O_GKILL";
			break;
		case 8:
			sLocal_549 = "CR_O_ROBCOACHA";
			break;
	}
	__LIB_0__::func_37(&uLocal_546);
	iLocal_591 = iParam0;
	bLocal_550 = false;
	__LIB_6__::func_830(8, sLocal_549, 0);
}

void func_536()
{
	int iVar0;
	if (bLocal_53)
	{
		return;
	}
	if (!__LIB_0__::func_272(iLocal_21, 1))
	{
		return;
	}
	if (__LIB_0__::func_866(iLocal_18, 0))
	{
		__LIB_1__::func_640(iLocal_18);
	}
	__LIB_3__::func_456(iLocal_21);
	PED::SET_PED_CONFIG_FLAG(iLocal_21, 204, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_21, 113, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_21, 77, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_102, 77, true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_102, true);
	TASK::TASK_LOOK_AT_COORD(iLocal_21, 1655.28f, -695.3f, 43.27f, -1, 0, 51, 0);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_STAND_STILL(0, 1600);
	if (__LIB_0__::func_71(iLocal_21))
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_42, 1.25f, -1, 6f, 0, 40000f);
		TASK::TASK_STAND_STILL(0, 1400);
		TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
	}
	if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_63))
	{
		TASK::TASK_PLAY_ANIM(0, sLocal_63, sLocal_64, 4f, -4f, -1, 0, 0f, false, 0, false, 0, false);
	}
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_45, 1f, -1, 0.25f, 0, fLocal_48);
	TASK::TASK_ACHIEVE_HEADING(0, fLocal_48, -1);
	TASK::CLOSE_SEQUENCE_TASK(iVar0);
	TASK::TASK_PERFORM_SEQUENCE(iLocal_21, iVar0);
	TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	bLocal_53 = true;
}

void func_537()
{
	if (!__LIB_0__::func_272(iLocal_21, 1))
	{
		return;
	}
	if (!__LIB_5__::func_260(iLocal_18, 16384))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_21, sLocal_63, sLocal_64, 1) && ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_21, sLocal_63, sLocal_64) > 0.5f)
		{
			__LIB_5__::func_414(iLocal_18, 16384, 1);
		}
	}
	switch (iLocal_583)
	{
		case 0:
			if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_21, true, false), vLocal_45) < 3f)
			{
				PED::_SET_PED_CROUCH_MOVEMENT(iLocal_21, true, 0, false);
				WEAPON::SET_CURRENT_PED_WEAPON(iLocal_21, WEAPON::GET_BEST_PED_WEAPON(iLocal_21, false, false), false, 0, false, false);
				TASK::TASK_SWAP_WEAPON(iLocal_21, 1, 1, 0, 0);
				iLocal_583 = 1;
			}
			break;
		case 1:
			break;
	}
}

void func_538()
{
	int iVar0;
	if (bLocal_52)
	{
		return;
	}
	if (!__LIB_0__::func_272(iLocal_20, 1))
	{
		return;
	}
	PLAYER::_0x12E09E278C6C29B7(PLAYER::PLAYER_ID());
	if (__LIB_0__::func_866(iLocal_19, 0))
	{
		__LIB_1__::func_640(iLocal_19);
	}
	__LIB_3__::func_456(iLocal_20);
	PED::SET_PED_CONFIG_FLAG(iLocal_20, 204, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_20, 113, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_20, 77, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_101, 77, true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_101, true);
	TASK::TASK_LOOK_AT_COORD(iLocal_20, 1655.28f, -695.3f, 43.27f, -1, 0, 51, 0);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_STAND_STILL(0, 1000);
	if (__LIB_0__::func_71(iLocal_20))
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_39, 1.25f, -1, 6f, 0, 40000f);
		TASK::TASK_STAND_STILL(0, 900);
		TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
	}
	if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_63))
	{
		TASK::TASK_PLAY_ANIM(0, sLocal_63, sLocal_64, 4f, -4f, -1, 0, 0f, false, 0, false, 0, false);
	}
	if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_82))
	{
		TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, sLocal_82, 0, 2058, -1, 0, 0, -1);
	}
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_35, 1f, -1, 0.25f, 1024, fLocal_38);
	TASK::CLOSE_SEQUENCE_TASK(iVar0);
	TASK::TASK_PERFORM_SEQUENCE(iLocal_20, iVar0);
	TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	bLocal_52 = true;
}

void func_540()
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!__LIB_0__::func_272(iLocal_20, 1))
	{
		return;
	}
	switch (iLocal_586)
	{
		case 0:
			iLocal_586 = 1;
			break;
		case 1:
			if ((!__LIB_0__::func_163(iLocal_20, 242628503) && BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_20, true, false), vLocal_35) < 2.5f) && __LIB_2__::func_955(iLocal_20, fLocal_38, 90f))
			{
				iLocal_586 = 10;
			}
			break;
		case 2:
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_PLANT_BOMB(0, vLocal_35, fLocal_38);
			TASK::CLOSE_SEQUENCE_TASK(iVar1);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_20, iVar1);
			TASK::CLEAR_SEQUENCE_TASK(&iVar1);
			iLocal_586 = 3;
			break;
		case 3:
			if (!__LIB_0__::func_163(iLocal_20, -2128085734) && !__LIB_0__::func_163(iLocal_20, 242628503))
			{
				WEAPON::REMOVE_WEAPON_FROM_PED(iLocal_20, joaat("WEAPON_THROWN_DYNAMITE"), true, -142743235);
				WEAPON::SET_CURRENT_PED_WEAPON(iLocal_20, WEAPON::GET_BEST_PED_WEAPON(iLocal_20, false, false), true, 0, false, false);
				TASK::OPEN_SEQUENCE_TASK(&iVar1);
				TASK::TASK_STAND_STILL(0, 1000);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_54, 2f, -1, 0.25f, 0, fLocal_57);
				TASK::TASK_TURN_PED_TO_FACE_COORD(0, vLocal_58, -1);
				TASK::CLOSE_SEQUENCE_TASK(iVar1);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_20, iVar1);
				TASK::CLEAR_SEQUENCE_TASK(&iVar1);
				if (iLocal_585 < 3)
				{
					iLocal_585 = 3;
				}
				iLocal_586 = 5;
			}
			break;
		case 5:
			if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_20, true, false), vLocal_54) < 5f)
			{
				PED::_SET_PED_CROUCH_MOVEMENT(iLocal_20, true, 0, false);
				if (bLocal_66)
				{
					iLocal_586 = 10;
				}
				else
				{
					iLocal_586 = 6;
				}
			}
			break;
		case 6:
			if (!PED::_GET_PED_CROUCH_MOVEMENT(iLocal_20))
			{
				PED::_SET_PED_CROUCH_MOVEMENT(iLocal_20, true, 0, false);
			}
			if (!ENTITY::IS_ENTITY_DEAD(Global_1392388.f_5))
			{
				iVar0 = Global_1392388.f_5;
				if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_20, true, false), ENTITY::GET_ENTITY_COORDS(iVar0, true, false)) < 100f)
				{
					iLocal_586 = 7;
				}
			}
			break;
		case 7:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_22))
			{
				__LIB_3__::func_534(iLocal_20, iLocal_22, -1, 1, 0, 1);
			}
			else
			{
				TASK::TASK_AIM_GUN_AT_COORD(iLocal_20, 1062.9f, -1421.19f, 59.81f, -1, false, false);
			}
			iLocal_586 = 8;
			break;
		case 8:
			if (!ENTITY::IS_ENTITY_DEAD(Global_1392388.f_5))
			{
				iVar0 = Global_1392388.f_5;
				if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), vLocal_35) < 9.5f)
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_20, 27, true);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_22))
					{
						TASK::TASK_SHOOT_AT_ENTITY(iLocal_20, iLocal_22, 1000, joaat("FIRING_PATTERN_FULL_AUTO"), 1);
					}
					else
					{
						TASK::TASK_SHOOT_AT_COORD(iLocal_20, 1062.9f, -1421.19f, 59.81f, 1000, joaat("FIRING_PATTERN_FULL_AUTO"), 1);
					}
					iLocal_586 = 9;
				}
			}
			break;
		case 9:
			FIRE::ADD_EXPLOSION(1062.9f, -1421.19f, 59.81f, 25, 0.5f, false, true, 0f);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_20, 27, false);
			iLocal_586 = 10;
			break;
		case 10:
			func_947();
			iVar2 = 0;
			while (iVar2 < 3)
			{
				if ((ENTITY::DOES_ENTITY_EXIST(iLocal_213[iVar2]) && !ENTITY::IS_ENTITY_DEAD(iLocal_213[iVar2])) && !ENTITY::_IS_ENTITY_FROZEN(iLocal_213[iVar2]))
				{
					if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_213[iVar2], -1) || ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_208, sLocal_217[iVar2]))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_213[iVar2], true);
					}
				}
				iVar2++;
			}
			break;
	}
}

void func_542()
{
	vector3 vVar0[24];
	if (iLocal_574 >= 3)
	{
		return;
	}
	if (!__LIB_0__::func_71(iLocal_20))
	{
		return;
	}
	if (__LIB_0__::func_71(Global_35))
	{
		return;
	}
	if (__LIB_5__::func_236(1))
	{
		return;
	}
	if (!__LIB_0__::func_75(&uLocal_571))
	{
		__LIB_1__::func_148(&uLocal_571);
	}
	if (__LIB_0__::func_265(&uLocal_571) < 15f)
	{
		return;
	}
	StringCopy(&cVar0, "CHRC1_MOUNTUP", 24);
	if (__LIB_1__::func_104(&uLocal_105, cVar0, 0, -1, 0, 0))
	{
		iLocal_574++;
		__LIB_1__::func_148(&uLocal_571);
	}
}

void func_544()
{
	__LIB_17__::func_980(iLocal_20, iLocal_21, &uLocal_240, cLocal_227, func_948(), &bLocal_237, &uLocal_236, bLocal_245, 10, 0, 1, 0);
	if (func_950())
	{
		PED::_0xD5BD1B5318A81994(uLocal_240, 1);
	}
	else
	{
		PED::_0xD5BD1B5318A81994(uLocal_240, 0);
	}
	if (!__LIB_0__::func_71(Global_35))
	{
		if (!bLocal_235)
		{
			if (iLocal_591 != 1)
			{
				func_532(1);
			}
			if (!__LIB_1__::func_587(7))
			{
				__LIB_1__::func_718(7);
			}
			if (__LIB_1__::func_685(6))
			{
				__LIB_0__::func_745(6);
			}
		}
	}
	else
	{
		if (__LIB_1__::func_587(7))
		{
			__LIB_1__::func_721(7);
		}
		if (!__LIB_1__::func_685(6))
		{
			__LIB_0__::func_900(6);
		}
		if (__LIB_0__::func_94(iLocal_20, Global_36, 1) > 100f)
		{
			if (iLocal_591 != 3)
			{
				func_532(3);
			}
		}
		else if (iLocal_591 != 2 && __LIB_0__::func_94(iLocal_20, Global_36, 1) < 30f)
		{
			func_532(2);
		}
	}
}

void func_545()
{
	if (__LIB_0__::func_91())
	{
		return;
	}
	if (__LIB_0__::func_272(iLocal_101, 1))
	{
		if (!__LIB_0__::func_71(iLocal_20))
		{
			if (__LIB_0__::func_665(iLocal_20, iLocal_101, 1, 1) < 8f)
			{
				if (!__LIB_0__::func_163(iLocal_20, 1868526510))
				{
					TASK::TASK_MOUNT_ANIMAL(iLocal_20, iLocal_101, 30000, -1, 1f, 513, 0, 0);
				}
			}
			else
			{
				func_953();
			}
		}
	}
	if (__LIB_0__::func_265(&uLocal_562) > 7f)
	{
		if (__LIB_0__::func_272(iLocal_102, 1))
		{
			if (!__LIB_0__::func_71(iLocal_21))
			{
				if (!__LIB_0__::func_163(iLocal_21, 1868526510))
				{
					TASK::TASK_MOUNT_ANIMAL(iLocal_21, iLocal_102, 60000, -1, 1f, 513, 0, 0);
				}
			}
		}
	}
}

void func_549()
{
	vector3 vVar0[24];
	vector3 vVar3[24];
	if (bLocal_238)
	{
		return;
	}
	if (__LIB_0__::func_94(iLocal_20, vLocal_232, 1) > 50f)
	{
		return;
	}
	if (__LIB_5__::func_236(1))
	{
		StringCopy(&cVar3, "CHRC1_P2", 24);
		if (__LIB_1__::func_49(&cVar3))
		{
			AUDIO::_0x36559148B78853B3(1, 1, 0);
		}
		return;
	}
	StringCopy(&cVar0, "CHRC1_P4", 24);
	if (__LIB_1__::func_104(&uLocal_105, cVar0, 0, -1, 0, 0))
	{
		bLocal_238 = true;
	}
}

void func_550()
{
	if (!bLocal_53)
	{
		if (__LIB_0__::func_272(iLocal_21, 0))
		{
			if (__LIB_0__::func_94(iLocal_21, vLocal_232, 1) < 7f)
			{
				if (!__LIB_0__::func_163(iLocal_21, -982327190))
				{
					TASK::TASK_STAND_STILL(iLocal_21, -1);
				}
			}
		}
	}
	if (!bLocal_52)
	{
		if (__LIB_0__::func_272(iLocal_20, 0))
		{
			if (__LIB_0__::func_94(iLocal_20, vLocal_232, 1) < 6f)
			{
				if (!__LIB_0__::func_163(iLocal_20, -982327190))
				{
					TASK::TASK_STAND_STILL(iLocal_20, -1);
				}
			}
		}
	}
}

void func_551(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (bLocal_81)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar2 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iParam0, iVar0);
		if (__LIB_0__::func_272(iVar2, 1))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= 2)
	{
		return;
	}
	__LIB_6__::func_715(Global_1392388.f_5, 1f);
	__LIB_6__::func_716(Global_1392388.f_5);
	bLocal_81 = true;
}

int func_552()
{
	vector3 vVar0[24];
	if (bLocal_62)
	{
		return 1;
	}
	if ((__LIB_6__::func_702(1) && __LIB_0__::func_94(Global_1392388.f_5, vLocal_35, 1) > 12f) && func_556())
	{
		StringCopy(&cVar0, "CHRC1_C3", 24);
		__LIB_1__::func_104(&uLocal_105, cVar0, 0, -1, 0, 0);
		__LIB_6__::func_705(268435456);
		func_532(6);
		__LIB_0__::func_325(&iLocal_103);
		__LIB_0__::func_325(&iLocal_561);
		bLocal_62 = true;
		return 1;
	}
	if ((__LIB_6__::func_702(1) && __LIB_0__::func_94(Global_1392388.f_5, vLocal_35, 1) > 15f) && ENTITY::GET_ENTITY_SPEED(Global_1392388.f_5) < 0.1f)
	{
		__LIB_6__::func_705(268435456);
		__LIB_0__::func_325(&iLocal_103);
		__LIB_0__::func_325(&iLocal_561);
		bLocal_62 = true;
		return 1;
	}
	return 0;
}

void func_553()
{
	iLocal_539 = VOLUME::_CREATE_VOLUME_BOX(1943.064f, -900.4928f, 41.31804f, 0f, 0f, 29.92293f, 87.8217f, 47.78392f, 12.15298f);
	iLocal_540 = VOLUME::_CREATE_VOLUME_BOX(2009.263f, -876.6072f, 41.31804f, 0f, 0f, 2.962614f, 87.8217f, 47.78392f, 12.15298f);
	iLocal_541 = VOLUME::_CREATE_VOLUME_BOX(2070.279f, -873.7169f, 41.31804f, 0f, 0f, 0.87849f, 75.30143f, 47.78392f, 12.15298f);
	PATHFIND::_0x19C7567D2F2287D6(iLocal_539, 7);
	PATHFIND::_0x19C7567D2F2287D6(iLocal_540, 7);
	PATHFIND::_0x19C7567D2F2287D6(iLocal_541, 7);
}

void func_554(int iParam0, int iParam1, int iParam2, char* sParam3, var uParam4, vector3 vParam5, int iParam8)
{
	int iVar0;
	int iVar1;
	if (iParam8 == 0)
	{
		iVar1 = 10;
	}
	else
	{
		iVar1 = 2;
	}
	switch (*uParam4)
	{
		case 0:
			TASK::CLEAR_PED_TASKS(iParam0, true, false);
			PED::_SET_PED_CROUCH_MOVEMENT(iParam0, false, 0, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
			TASK::TASK_MOUNT_ANIMAL(iParam0, iParam1, -1, -1, 3f, 1, 0, 0);
			*uParam4 = 1;
			break;
		case 1:
			if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sParam3))
			{
				if (PED::IS_PED_ON_MOUNT(iParam0))
				{
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING_AT_OFFSET(iParam0, sParam3, vParam5.x, iParam8, iVar1, -1, 1);
					*uParam4 = 2;
				}
				else if (!__LIB_0__::func_163(iParam0, 1868526510))
				{
					TASK::TASK_MOUNT_ANIMAL(iParam0, iParam1, -1, -1, 3f, 1, 0, 0);
				}
			}
			break;
		case 2:
			if (__LIB_0__::func_665(iParam0, iParam2, 1, 1) < 30f && ENTITY::GET_ENTITY_SPEED(iParam2) < 0.5f)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, false);
				iVar0 = VEHICLE::_GET_CURRENT_VEHICLE_DRIVER(iParam2);
				if (__LIB_0__::func_272(iVar0, 0))
				{
					TASK::TASK_COMBAT_PED(iParam0, iVar0, 0, 0);
				}
				else
				{
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iParam0, 200f, 0, 0);
				}
				PED::SET_COMBAT_FLOAT(iParam0, 41, 20f);
				PED::SET_PED_CONFIG_FLAG(iParam0, 204, false);
				*uParam4 = 3;
			}
			else if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iParam0, 0))
			{
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING_AT_OFFSET(iParam0, sParam3, vParam5.x, iParam8, iVar1, -1, 1);
			}
			else
			{
				TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iParam0, __LIB_6__::func_721(iParam0, iParam2, vParam5), 0, -1082130432 /* Float: -1f */, 0);
			}
			break;
	}
}

void func_555()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	if (__LIB_0__::func_272(iLocal_21, 0))
	{
		PED::SET_PED_CONFIG_FLAG(iLocal_21, 167, false);
		TASK::SET_PED_PATH_AVOID_FIRE(iLocal_21, true);
		WEAPON::SET_CURRENT_PED_WEAPON(iLocal_21, joaat("WEAPON_UNARMED"), false, 0, false, false);
		WEAPON::SET_CURRENT_PED_WEAPON(iLocal_21, joaat("WEAPON_UNARMED"), false, 1, false, false);
		TASK::TASK_LOOK_AT_ENTITY(iLocal_21, Global_35, -1, 0, 51, 0);
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		if (PED::IS_PED_ON_MOUNT(iLocal_21))
		{
			if (bLocal_62)
			{
				TASK::TASK_GO_TO_ENTITY(0, Global_1392388.f_5, -1, 20f, 1.25f, 2f, 0);
			}
			TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
		}
		TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
		if (!bLocal_62)
		{
			TASK::TASK_LOOT_NEAREST_ENTITY(0, 0f, 0f, 0f, 1, 30f);
			TASK::TASK_LOOT_NEAREST_ENTITY(0, 0f, 0f, 0f, 1, 30f);
			TASK::TASK_LOOT_NEAREST_ENTITY(0, 0f, 0f, 0f, 1, 30f);
			TASK::TASK_LOOT_NEAREST_ENTITY(0, 0f, 0f, 0f, 1, 30f);
			TASK::TASK_LOOT_NEAREST_ENTITY(0, 0f, 0f, 0f, 1, 30f);
			TASK::TASK_LOOT_NEAREST_ENTITY(0, 0f, 0f, 0f, 1, 30f);
			TASK::TASK_LOOT_NEAREST_ENTITY(0, 0f, 0f, 0f, 1, 30f);
		}
		TASK::TASK_GO_TO_ENTITY(0, Global_1392388.f_5, -1, 7f, 1f, 2f, 0);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_1392388.f_5, 0, -1f, -1f, -1f);
		__LIB_1__::func_473(0, joaat("WORLD_HUMAN_SMOKE"), 0, 1, 0, -1082130432 /* Float: -1f */);
		TASK::CLOSE_SEQUENCE_TASK(iVar0);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_21, iVar0);
		TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	}
	if (__LIB_0__::func_272(iLocal_20, 0))
	{
		PED::SET_PED_CONFIG_FLAG(iLocal_20, 167, false);
		WEAPON::SET_CURRENT_PED_WEAPON(iLocal_20, joaat("WEAPON_UNARMED"), false, 0, false, false);
		WEAPON::SET_CURRENT_PED_WEAPON(iLocal_20, joaat("WEAPON_UNARMED"), false, 1, false, false);
		TASK::SET_PED_PATH_AVOID_FIRE(iLocal_20, true);
		TASK::TASK_LOOK_AT_ENTITY(iLocal_20, Global_35, -1, 0, 51, 0);
		TASK::OPEN_SEQUENCE_TASK(&iVar1);
		if (PED::IS_PED_ON_MOUNT(iLocal_20))
		{
			if (bLocal_62)
			{
				TASK::TASK_GO_TO_ENTITY(0, Global_1392388.f_5, -1, 20f, 1.25f, 2f, 0);
			}
			TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
		}
		TASK::TASK_STAND_STILL(0, 2000);
		TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
		if (bLocal_62)
		{
			TASK::TASK_GO_TO_ENTITY(0, Global_1392388.f_5, -1, 6f, 1f, 2f, 0);
		}
		else
		{
			vVar2 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_1392388.f_5, 3.5f, 3f, 0f) };
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar2, 1f, -1, 0.25f, 0, __LIB_0__::func_152(vVar2, ENTITY::GET_ENTITY_COORDS(Global_1392388.f_5, true, false), 1));
		}
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_1392388.f_5, 0, -1f, -1f, -1f);
		__LIB_1__::func_473(0, joaat("WORLD_HUMAN_WAITING_IMPATIENT"), 0, 1, 0, -1082130432 /* Float: -1f */);
		TASK::CLOSE_SEQUENCE_TASK(iVar1);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_20, iVar1);
		TASK::CLEAR_SEQUENCE_TASK(&iVar1);
	}
}

bool func_556()
{
	if (bLocal_77)
	{
		return true;
	}
	if (__LIB_0__::func_94(Global_1392388.f_5, vLocal_35, 1) < 5f)
	{
		bLocal_77 = true;
		return true;
	}
	return false;
}

bool func_562(int iParam0)
{
	return ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, 1104.67f, -1448.796f, 51.35869f, 1080.376f, -1411.639f, 60.10735f, 13.25f, false, true, 0);
}

void func_563()
{
	vector3 vVar0[24];
	if (__LIB_6__::func_702(1073741824 /* Float: 2f */) || __LIB_6__::func_702(-2147483648))
	{
		return;
	}
	if (iLocal_570 >= 3)
	{
		return;
	}
	if (__LIB_5__::func_236(1))
	{
		return;
	}
	if (!__LIB_0__::func_75(&uLocal_567))
	{
		__LIB_1__::func_148(&uLocal_567);
	}
	if (__LIB_0__::func_265(&uLocal_567) < 15f)
	{
		return;
	}
	StringCopy(&cVar0, "CHRC1_LOOT_DAWD", 24);
	if (__LIB_1__::func_104(&uLocal_105, cVar0, 0, -1, 0, 0))
	{
		iLocal_570++;
		__LIB_1__::func_148(&uLocal_567);
	}
}

void func_594(var uParam0)
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
		func_1003(&(uParam0->f_212), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_1__::func_519(uParam0, 0f, 0f, 0f);
		func_1005(uParam0);
		func_1006(uParam0);
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

void func_612(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_612(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_612(iVar2, vParam1, fParam4, iParam5, iParam6);
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

bool func_658(var uParam0)
{
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	iLocal_84 = uParam0->f_7;
	switch (uParam0->f_7)
	{
		case 0:
			if (func_217())
			{
				if (!__LIB_0__::func_75(&uLocal_242))
				{
					__LIB_6__::func_772();
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, 1869.777f, -1855.655f, 42.0237f, 355.8581f, true, false, true);
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_20, 1870.682f, -1852.882f, 41.9274f, 13.1361f, true, false, true);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					__LIB_1__::func_148(&uLocal_242);
					__LIB_0__::func_862(iLocal_20, joaat("META_OUTFIT_WARM_WEATHER"));
					__LIB_0__::func_862(iLocal_21, joaat("META_OUTFIT_WARM_WEATHER"));
				}
				else if (__LIB_0__::func_265(&uLocal_242) > 1f)
				{
					__LIB_0__::func_37(&uLocal_242);
					__LIB_6__::func_723();
					AUDIO::TRIGGER_MUSIC_EVENT("CACR01_RESTART_1");
					iLocal_579 = 1;
					return true;
				}
			}
			break;
		case 1:
			if (func_217())
			{
				if (!__LIB_0__::func_75(&uLocal_242))
				{
					__LIB_6__::func_772();
					MISC::_SET_WEATHER_TYPE(joaat("SUNNY"), true, true, false, 0f, false);
					__LIB_1__::func_148(&uLocal_242);
					func_1089();
					__LIB_0__::func_862(iLocal_20, joaat("META_OUTFIT_WARM_WEATHER"));
					__LIB_0__::func_862(iLocal_21, joaat("META_OUTFIT_WARM_WEATHER"));
					__LIB_0__::func_900(6);
				}
				else if (__LIB_0__::func_265(&uLocal_242) > 1f)
				{
					__LIB_0__::func_37(&uLocal_242);
					__LIB_6__::func_723();
					__LIB_2__::func_761(vLocal_232, 400f, 0, 0);
					__LIB_1__::func_572(vLocal_232, 400f, 0, 0, 0, 0, 0);
					AUDIO::TRIGGER_MUSIC_EVENT("CACR01_RESTART_2");
					__LIB_6__::func_813(uParam0, func_221(1), func_221(2), 1, 2);
					bLocal_83 = true;
					iLocal_579 = 1;
					return true;
				}
			}
			break;
		case 2:
			if (func_217())
			{
				if (func_1092())
				{
					MISC::_SET_WEATHER_TYPE(joaat("SUNNY"), true, true, false, 0f, false);
					func_1093();
					__LIB_6__::func_723();
					func_230(Local_280.f_152, &Local_280);
					iLocal_579 = 4;
					return true;
				}
			}
			break;
	}
	return false;
}

int func_666(int iParam0, int iParam1)
{
	var uVar0;
	return func_1097(&uVar0, iParam0, iParam1);
}

void func_826(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (bParam0)
	{
		func_130(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_130(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_130(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_1225(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_133(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_428(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_1230(Var0);
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

void func_829(bool bParam0)
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
		func_130(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_130(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_130(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_130(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_130(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_130(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_130(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_130(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_130(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_130(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_130(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_428(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_428(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_428(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_428(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_428(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_428(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_428(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_428(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_428(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_428(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_428(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
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

int func_875(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
							iVar49 = (iVar49 + func_875(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_875(iVar63, -915411861, 1, 0, 0));
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

int func_890()
{
	if (__LIB_0__::func_28())
	{
		if (!__LIB_1__::func_185(3))
		{
			return __LIB_0__::func_559(43);
		}
		if (__LIB_1__::func_185(38) && !__LIB_1__::func_185(43))
		{
			return func_1260(8);
		}
	}
	return 0;
}

bool func_891(int iParam0)
{
	if (!__LIB_0__::func_20(iParam0))
	{
		return false;
	}
	return ((Global_1888801[iParam0 /*35*/].f_20 == 1 || Global_1888801[iParam0 /*35*/].f_20 == 2) && !func_1261(iParam0));
}

int func_911()
{
	var uVar0;
	struct<11> Var1;
	Var1.f_10 = 7;
	Var1 = 1;
	Var1.f_1 = 1;
	Var1.f_2 = 0;
	Var1.f_3 = 1;
	Var1.f_4 = 1;
	Var1.f_6 = { func_1283() };
	Var1.f_9 = func_1284();
	iLocal_100 = __LIB_4__::func_720(&uVar0, &Var1);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_100))
	{
		if (__LIB_0__::func_272(iLocal_100, 1))
		{
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_100, 48, true);
			TASK::TASK_STAND_STILL(iLocal_100, -1);
			return 1;
		}
	}
	return 0;
}

int func_912(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17)
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
				iVar0 = func_1285(iParam1, bParam3, bParam8, iParam9, iParam10, iParam11, iParam12, bParam7, bParam15, bParam16, iParam17);
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

void func_947()
{
	int iVar0;
	vector3 vVar1[24];
	vector3 vVar4;
	int iVar7;
	int iVar8;
	bool bVar9;
	bVar9 = false;
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_20, false);
	if (!func_1311())
	{
		return;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_211))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_20, sLocal_210, sLocal_211, 1) && ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_20, sLocal_210, sLocal_211) < 0.99f)
		{
			if (iLocal_14 == 1)
			{
				if (!bLocal_535)
				{
					if (__LIB_0__::func_75(&uLocal_536) && __LIB_0__::func_265(&uLocal_536) > 6f)
					{
						CAM::_RENDER_FIRST_PERSON_CAM(0, 0, 3, 0, 0, 1);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
						bLocal_535 = true;
					}
				}
			}
			if (!bLocal_221)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_20, -855815422))
				{
					bLocal_221 = true;
				}
			}
			return;
		}
	}
	switch (iLocal_588)
	{
		case 0:
			sLocal_212 = "PBL_standing_idle";
			ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_208, sLocal_212);
			iLocal_588 = 1;
			break;
		case 1:
			if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_208, sLocal_212))
			{
				func_1312(sLocal_212);
				sLocal_211 = "standing_idle";
				ANIMSCENE::_0xAE6ADA8FE7E84ACC(iLocal_208, sLocal_212);
				iLocal_588 = 2;
			}
			break;
		case 2:
			if (BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iLocal_20, true, false)) < 17f || iLocal_14 == 0)
			{
				if (__LIB_6__::func_702(65536))
				{
					__LIB_6__::func_704(65536);
				}
				StringCopy(&cVar1, "CHRC1_IG1_SPK", 24);
				__LIB_1__::func_104(&uLocal_105, cVar1, 0, -1, 0, 0);
				vVar4 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_20, Global_36) };
				if (vVar4.y > 0f)
				{
					if (vVar4.x < 1f || vVar4.x > -1f)
					{
						sLocal_212 = "PBL_spook_F";
						sLocal_211 = "spook_F";
					}
					else if (vVar4.x > 0f)
					{
						sLocal_212 = "PBL_spook_R";
						sLocal_211 = "spook_R";
					}
					else
					{
						sLocal_212 = "PBL_spook_L";
						sLocal_211 = "spook_L";
					}
				}
				else if (vVar4.x > 0f)
				{
					sLocal_212 = "PBL_spook_back_R";
					sLocal_211 = "spook_back_R";
				}
				else
				{
					sLocal_212 = "PBL_spook_back_L";
					sLocal_211 = "spook_back_L";
				}
				ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_208, sLocal_212);
				iLocal_588 = 3;
			}
			break;
		case 3:
			if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_208, sLocal_212))
			{
				if (iLocal_14 == 1)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, true, true);
					TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Global_35, vLocal_255, -1, 0, 0f, 0, 0, iLocal_26, 0, 1, 0);
					iLocal_533 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 1682.062f, -727.5854f, 41.6519f, 9.1313f, -0.0083f, -130.2843f, 17.3499f, false, 2);
					iLocal_534 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 1677.278f, -723.5305f, 40.8849f, 4.8697f, -0.0083f, -130.2843f, 17.3499f, false, 2);
					CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_534, iLocal_533, 20000, 1, 1);
					CAM::SHAKE_CAM(iLocal_533, "HAND_SHAKE", 0.2f);
					CAM::SHAKE_CAM(iLocal_534, "HAND_SHAKE", 0.2f);
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				}
				func_1312(sLocal_212);
				PED::_0x2208438012482A1A(iLocal_20, false, false);
				ANIMSCENE::_0xAE6ADA8FE7E84ACC(iLocal_208, sLocal_212);
				sLocal_212 = "PBL_plant_dynamite";
				ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_208, sLocal_212);
				iLocal_588 = 4;
			}
			break;
		case 4:
			if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_208, sLocal_212))
			{
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_213[iVar0]))
					{
						ENTITY::SET_ENTITY_VISIBLE(iLocal_213[iVar0], true);
					}
					iVar0++;
				}
				__LIB_1__::func_148(&uLocal_536);
				if (iLocal_14 == 1)
				{
					if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar7, true, 0, false) && iVar7 != joaat("WEAPON_UNARMED"))
					{
						bVar9 = true;
					}
					if (!bVar9)
					{
						iVar8 = WEAPON::_0x9F67929D98E7C6E8(Global_35, joaat("GROUP_REVOLVER"), 0, 0);
						if (WEAPON::IS_WEAPON_VALID(iVar8))
						{
							WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, iVar8, 0, true, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
						}
					}
					CAM::DESTROY_CAM(iLocal_533, false);
					CAM::DESTROY_CAM(iLocal_534, false);
					iLocal_533 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 1688.507f, -737.5392f, 42.3272f, -1.6302f, 0f, 30.5291f, 50f, false, 2);
					iLocal_534 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 1686.834f, -738.8248f, 42.4595f, -5.1491f, 0f, 30.4222f, 50f, false, 2);
					CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_534, iLocal_533, 6000, 1, 1);
					CAM::SHAKE_CAM(iLocal_533, "HAND_SHAKE", 0.2f);
					CAM::SHAKE_CAM(iLocal_534, "HAND_SHAKE", 0.2f);
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				}
				func_1312(sLocal_212);
				sLocal_211 = "plant_dynamite";
				ANIMSCENE::_0xAE6ADA8FE7E84ACC(iLocal_208, sLocal_212);
				sLocal_212 = "PBL_take_cover";
				ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_208, sLocal_212);
				iLocal_588 = 5;
			}
			break;
		case 5:
			if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_208, sLocal_212))
			{
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_213[iVar0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_213[iVar0]))
					{
						OBJECT::SET_OBJECT_TARGETTABLE(iLocal_213[iVar0], true);
						ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_213[iVar0], true, 0f);
						if (iVar0 == 0)
						{
							iLocal_103 = MAP::_BLIP_ADD_FOR_ENTITY(408396114, iLocal_213[iVar0]);
							MAP::_BLIP_SET_MODIFIER(iLocal_103, 942020339);
							MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_103, "CR_B_COMP1_DYN");
							vLocal_74 = { ENTITY::GET_ENTITY_COORDS(iLocal_213[iVar0], true, false) };
						}
					}
					iVar0++;
				}
				__LIB_0__::func_325(&iLocal_561);
				bLocal_71 = true;
				func_1312(sLocal_212);
				sLocal_211 = "take_cover";
				ANIMSCENE::_0xAE6ADA8FE7E84ACC(iLocal_208, sLocal_212);
				sLocal_212 = "PBL_cover_idle";
				ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_208, sLocal_212);
				iLocal_588 = 6;
			}
			break;
		case 6:
			if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_208, sLocal_212))
			{
				func_1312(sLocal_212);
				sLocal_211 = "cover_idle";
				ANIMSCENE::_0xAE6ADA8FE7E84ACC(iLocal_208, sLocal_212);
				sLocal_212 = "PBL_cover_line_F";
				ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_208, sLocal_212);
				iLocal_588 = 8;
			}
			break;
		case 7:
			if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_208, sLocal_212))
			{
				func_1312(sLocal_212);
				sLocal_211 = "cover_line_F";
				ANIMSCENE::_0xAE6ADA8FE7E84ACC(iLocal_208, sLocal_212);
				iLocal_588 = 8;
			}
			break;
		case 8:
			iLocal_588 = 9;
			break;
		case 9:
			break;
	}
}

float func_948()
{
	vector3 vVar0;
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iLocal_20, true, false) };
	if (__LIB_1__::func_652())
	{
		return 1.25f;
	}
	if (BUILTIN::VDIST(vVar0, vLocal_232) < 30f)
	{
		if (!bLocal_542)
		{
			bLocal_543 = BUILTIN::VDIST(vVar0, vLocal_39);
			bLocal_542 = true;
		}
		return 1.25f;
	}
	return 1.75f;
}

bool func_950()
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_20, 1772.628f, -1780.36f, 45.1846f, 1772.803f, -1696.847f, 64.11343f, 28.25f, false, true, 0))
	{
		return true;
	}
	return false;
}

void func_953()
{
	vector3 vVar0;
	vector3 vVar3;
	vVar0 = { 1861.994f, -1833.666f, 41.7113f };
	vVar3 = { 1868.878f, -1860.749f, 42.0061f };
	if ((__LIB_0__::func_94(iLocal_20, Global_36, 1) < 6f || __LIB_0__::func_94(iLocal_20, vVar3, 1) < 10f) || __LIB_0__::func_94(iLocal_20, vVar3, 1) < BUILTIN::VDIST(Global_36, vVar3))
	{
		if (!__LIB_0__::func_163(iLocal_20, 713668775))
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_20, vVar0, 1f, -1, 0.25f, 1, 40000f);
		}
	}
	else if (!__LIB_0__::func_163(iLocal_20, -875674219))
	{
		__LIB_2__::func_45(iLocal_20, Global_35, -1);
	}
}

void func_1003(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
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
		func_1337();
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

void func_1005(var uParam0)
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
			func_612(iVar1, __LIB_1__::func_524(uParam0), __LIB_1__::func_525(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_612(iVar3, __LIB_1__::func_524(uParam0), __LIB_1__::func_525(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_1006(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if ((__LIB_0__::func_84(uParam0, 268435456) && !__LIB_0__::func_86(__LIB_1__::func_524(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { __LIB_1__::func_524(uParam0) };
			func_612(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

void func_1089()
{
	vector3 vVar0;
	float fVar3;
	vector3 vVar4;
	float fVar7;
	vector3 vVar8;
	float fVar11;
	vVar0 = { 1724.361f, -767.3877f, 41.2661f };
	fVar3 = 53.0765f;
	vVar4 = { 1727.723f, -771.0592f, 41.084f };
	fVar7 = 47.0956f;
	vVar8 = { 1728.842f, -769.0228f, 41.0667f };
	fVar11 = 42.0669f;
	__LIB_3__::func_618(vLocal_35, 150f, 1, 0, 0, 0, 0);
	PED::_0x9851DE7AEC10B4E1(vLocal_35, 150f, 1, 0);
	if (__LIB_0__::func_272(iLocal_20, 1))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_20, true, true);
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_20, vVar0, fVar3, true, false, true);
	}
	if (__LIB_0__::func_272(iLocal_101, 1))
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_101, vVar0, fVar3, true, false, true);
		PED::_SET_PED_ON_MOUNT(iLocal_20, iLocal_101, -1, true);
	}
	if (__LIB_0__::func_272(iLocal_21, 1))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_21, true, true);
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_21, vVar4, fVar7, true, false, true);
	}
	if (__LIB_0__::func_272(iLocal_102, 1))
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_102, vVar4, fVar7, true, false, true);
		PED::_SET_PED_ON_MOUNT(iLocal_21, iLocal_102, -1, true);
	}
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, vVar8, fVar11, true, false, true);
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_100))
	{
		func_911();
	}
	if (__LIB_0__::func_272(iLocal_100, 1))
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_100, vVar8, fVar11, true, false, true);
	}
	else
	{
		iLocal_100 = __LIB_1__::func_545(joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT"), vVar8, fVar11, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
	}
	PED::_SET_PED_ON_MOUNT(Global_35, iLocal_100, -1, true);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
	ENTITY::FREEZE_ENTITY_POSITION(Global_35, false);
	iLocal_584 = 8;
}

bool func_1092()
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	int iVar7;
	vVar0 = { 1681.286f, -711.2542f, 42.5346f };
	vVar3 = { 1681.45f, -725.58f, 41.67f };
	fVar6 = -130.02f;
	iVar7 = joaat("STAGECOACH004X");
	switch (iLocal_590)
	{
		case 0:
			STREAMING::REQUEST_MODEL(iVar7, false);
			func_1093();
			iLocal_590 = 1;
			break;
		case 1:
			if (STREAMING::HAS_MODEL_LOADED(iVar7))
			{
				iLocal_27 = VEHICLE::CREATE_VEHICLE(iVar7, vVar3, fVar6, true, true, false, false);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_27, 0f);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar7);
				iLocal_590 = 2;
			}
			break;
		case 2:
			if (__LIB_6__::func_724(&Local_280, "CAMCH_CROB1_EXT", 1, 1))
			{
				bLocal_522 = true;
				__LIB_1__::func_620(&Local_280, Global_35, "ARTHUR", 0, 0, 0);
				__LIB_1__::func_620(&Local_280, iLocal_20, "MicahBell", 0, 0, 0);
				__LIB_1__::func_620(&Local_280, iLocal_27, "STAGECOACH004X", 0, 0, 0);
				if (STREAMING::HAS_MODEL_LOADED(joaat("P_CS_BILLSTACK01X")))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_24))
					{
						iLocal_24 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("P_CS_BILLSTACK01X"), vVar0, true, true, false, true);
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_24))
					{
						iLocal_25 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("P_CS_BILLSTACK01X"), vVar0, true, true, false, true);
					}
					__LIB_1__::func_620(&Local_280, iLocal_24, "P_CS_BILLSTACK01X", 0, 0, 0);
					__LIB_1__::func_620(&Local_280, iLocal_25, "P_CS_BILLSTACK01X^1", 0, 0, 0);
				}
				iLocal_590 = 4;
				return true;
			}
			break;
		case 4:
			return true;
	}
	return false;
}

void func_1093()
{
	vector3 vVar0;
	float fVar3;
	vector3 vVar4;
	float fVar7;
	vector3 vVar8;
	float fVar11;
	vector3 vVar12;
	float fVar15;
	vector3 vVar16;
	float fVar19;
	vector3 vVar20;
	float fVar23;
	vVar0 = { 1679.48f, -738.46f, 40.54f };
	fVar3 = 0f;
	vVar4 = { 1683.236f, -722.3441f, 40.6777f };
	fVar7 = 212.961f;
	vVar8 = { 1684.87f, -742.19f, 40.54f };
	fVar11 = 0f;
	vVar12 = { 1690.99f, -754.27f, 40.86f };
	fVar15 = 79.59f;
	vVar16 = { 1689.64f, -756.86f, 41.09f };
	fVar19 = 100f;
	vVar20 = { 1697f, -752.61f, 40.84f };
	fVar23 = 65.03f;
	__LIB_3__::func_618(vLocal_35, 150f, 1, 0, 0, 0, 0);
	PED::_0x9851DE7AEC10B4E1(vLocal_35, 150f, 1, 0);
	if (__LIB_0__::func_272(iLocal_20, 1))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_20, true, true);
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_20, vVar0, fVar3, true, false, true);
	}
	if (__LIB_0__::func_272(iLocal_101, 1))
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_101, vVar12, fVar15, true, false, true);
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_101, 48, true);
		TASK::TASK_STAND_STILL(iLocal_101, -1);
	}
	if (__LIB_0__::func_272(iLocal_21, 1))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_21, true, true);
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_21, vVar4, fVar7, true, false, true);
	}
	if (__LIB_0__::func_272(iLocal_102, 1))
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_102, vVar16, fVar19, true, false, true);
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_102, 48, true);
		TASK::TASK_STAND_STILL(iLocal_102, -1);
	}
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, vVar8, fVar11, true, false, true);
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_100))
	{
		func_911();
	}
	if (__LIB_0__::func_272(iLocal_100, 1))
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_100, vVar20, fVar23, true, false, true);
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_100, 48, true);
		TASK::TASK_STAND_STILL(iLocal_100, -1);
	}
	ENTITY::FREEZE_ENTITY_POSITION(Global_35, false);
	__LIB_0__::func_862(iLocal_20, joaat("META_OUTFIT_WARM_WEATHER"));
	__LIB_0__::func_862(iLocal_21, joaat("META_OUTFIT_WARM_WEATHER"));
}

int func_1097(var uParam0, int iParam1, int iParam2)
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
		return func_1097(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

void func_1225(int iParam0)
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
	func_428(iParam0, 1, 1, -142743235, 1);
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
		func_428(uVar18[iVar36], 1, 1, -142743235, 1);
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

void func_1230(struct<6> Param0)
{
	if (!func_1482(Param0.f_4, 1))
	{
	}
	if (!func_1482(Param0, 1))
	{
	}
	if (!func_1482(Param0.f_2, 1))
	{
	}
	if (!func_1482(Param0.f_5, 1))
	{
	}
	if (!func_1482(Param0.f_3, 1))
	{
	}
	if (!func_1482(Param0.f_1, 1))
	{
	}
}

int func_1260(int iParam0)
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
			break;
		case 3:
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
			break;
		case 4:
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
			break;
		case 7:
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
			break;
		case 6:
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
			break;
		case 5:
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
			break;
		case 8:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GUARMA");
			VOLUME::_0xBCE668AAF83608BE(iVar0, 2410.933f, -7578.265f, 50f, 0f, 0f, 0f, 2000f, 2000f, 890f);
			VOLUME::_0xBCE668AAF83608BE(iVar0, 2388.016f, -4563.885f, 50f, 0f, 0f, 0f, 815f, 500f, 800f);
			break;
		case 9:
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
			break;
		case 10:
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
			break;
		case 11:
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
			Jump @9446; //curOff = 6716
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
			Jump @9446; //curOff = 7288
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
			Jump @9446; //curOff = 7860
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GAPTOOTH_RIDGE");
			VOLUME::_0x39816F6F94F385AD(iVar0, -5420f, -3447.5f, 150f, 0f, 0f, 175f, 300f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5837.5f, -3530f, 150f, 0f, 0f, -32f, 1000f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -6142.5f, -3665f, 150f, 0f, 0f, -8f, 800f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5747.5f, -2905f, 150f, 0f, 0f, 136.5f, 1300f, 750f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5407.5f, -2487.5f, 150f, 0f, 0f, -148f, 550f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5232.5f, -2825f, 150f, 0f, 0f, -178f, 400f, 530f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5667.5f, -2040f, 150f, 0f, 0f, 175f, 1100f, 800f, 700f);
			Jump @9446; //curOff = 8174
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
			Jump @9446; //curOff = 8875
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
bool func_1261(int iParam0)
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

Vector3 func_1283()
{
	switch (iLocal_84)
	{
		case 1:
			return 1728.842f, -769.0228f, 41.0667f;
		case 2:
			return 1728.842f, -769.0228f, 41.0667f;
		default:
			break;
	}
	return 1853.818f, -1836.236f, 42.0151f;
	return 0f, 0f, 0f;
}

float func_1284()
{
	switch (iLocal_84)
	{
		case 1:
			return 42.0669f;
		case 2:
			return 42.0669f;
		default:
			break;
	}
	return 28.9455f;
	return 0f;
}

int func_1285(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)
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
				if (!__LIB_3__::func_119(iParam0, vVar0, iParam6, iParam10))
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
				func_612(Global_1360165[iParam0 /*1157*/].f_124, vVar0, iParam6, 2, 1073741824 /* Float: 2f */);
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
			__LIB_1__::func_547(Global_1360165[iParam0 /*1157*/].f_124, iParam0);
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

bool func_1311()
{
	int iVar0;
	switch (iLocal_587)
	{
		case 0:
			iLocal_208 = ANIMSCENE::_CREATE_ANIM_SCENE(sLocal_209, 2, 0, false, true);
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_208))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_208, "MICAH", iLocal_20, 0);
				sLocal_217[0] = "dynamite_a";
				sLocal_217[1] = "dynamite_b";
				sLocal_217[2] = "dynamite_c";
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_213[iVar0]))
					{
						iLocal_213[iVar0] = OBJECT::CREATE_OBJECT(WEAPON::_GET_WEAPONTYPE_MODEL(joaat("WEAPON_THROWN_DYNAMITE")), ENTITY::GET_ENTITY_COORDS(iLocal_20, true, false), true, true, false, false, true);
						ENTITY::SET_ENTITY_VISIBLE(iLocal_213[iVar0], false);
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_208, sLocal_217[iVar0], iLocal_213[iVar0], 0);
					}
					iVar0++;
				}
				ANIMSCENE::LOAD_ANIM_SCENE(iLocal_208);
				iLocal_588 = 2;
				iLocal_587 = 1;
			}
			break;
		case 1:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_208))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_208, true, false))
				{
					return true;
				}
			}
			break;
	}
	return false;
}

void func_1312(char* sParam0)
{
	ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_208, sParam0, true);
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_208, false))
	{
		ANIMSCENE::START_ANIM_SCENE(iLocal_208);
	}
}

void func_1337()
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
	iVar0 = func_1534(6291456, 0);
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

bool func_1482(int iParam0, int iParam1)
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
				if (func_1482(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_1482(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_1482(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_1482(iVar21, 1))
				{
				}
			}
		}
		__LIB_1__::func_712();
		return true;
	}
	return false;
}

int func_1534(int iParam0, int iParam1)
{
	var uVar0;
	return func_1617(&uVar0, iParam0, iParam1);
}

int func_1617(var uParam0, int iParam1, int iParam2)
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
		return func_1617(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

