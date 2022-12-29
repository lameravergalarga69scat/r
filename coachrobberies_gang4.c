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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	vector3 vLocal_25 = { 0f, 0f, 0f };
	vector3 vLocal_28 = { 0f, 0f, 0f };
	vector3 vLocal_31 = { 0f, 0f, 0f };
	vector3 vLocal_34 = { 0f, 0f, 0f };
	vector3 vLocal_37 = { 0f, 0f, 0f };
	vector3 vLocal_40 = { 0f, 0f, 0f };
	vector3 vLocal_43 = { 0f, 0f, 0f };
	vector3 vLocal_46 = { 0f, 0f, 0f };
	int iLocal_49 = 0;
	vector3 vLocal_50 = { 0f, 0f, 0f };
	float fLocal_53 = 0f;
	int iLocal_54 = 0;
	vector3 vLocal_55 = { 0f, 0f, 0f };
	float fLocal_58 = 0f;
	int iLocal_59 = 0;
	vector3 vLocal_60 = { 0f, 0f, 0f };
	float fLocal_63 = 0f;
	int iLocal_64 = 0;
	vector3 vLocal_65 = { 0f, 0f, 0f };
	float fLocal_68 = 0f;
	vector3 vLocal_69 = { 0f, 0f, 0f };
	char* sLocal_72 = NULL;
	char* sLocal_73 = NULL;
	char* sLocal_74 = NULL;
	char* sLocal_75 = NULL;
	bool bLocal_76 = false;
	vector3 vLocal_77 = { 0f, 0f, 0f };
	bool bLocal_80 = false;
	int iLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	bool bLocal_93 = false;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	var uLocal_98 = 0;
	int iLocal_99 = 0;
	var uLocal_100 = 24;
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
	bool bLocal_198 = false;
	vector3 vLocal_199 = { 0f, 0f, 0f };
	char[] cLocal_202[8] = 0;
	bool bLocal_203 = false;
	bool bLocal_204 = false;
	bool bLocal_205 = false;
	vector3 vLocal_206 = { 0f, 0f, 0f };
	bool bLocal_209 = false;
	var uLocal_210 = 0;
	bool bLocal_211 = false;
	bool bLocal_212 = false;
	var uLocal_213 = 0;
	int iLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 6;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	bool bLocal_229 = false;
	vector3 vLocal_230 = { 0f, 0f, 0f };
	int iLocal_233 = 0;
	int iLocal_234 = 0;
	char* sLocal_235 = NULL;
	char* sLocal_236 = NULL;
	char* sLocal_237 = NULL;
	char* sLocal_238 = NULL;
	char* sLocal_239 = NULL;
	vector3 vLocal_240 = { 0f, 0f, 0f };
	vector3 vLocal_243 = { 0f, 0f, 0f };
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	bool bLocal_248 = false;
	bool bLocal_249 = false;
	bool bLocal_250 = false;
	vector3 vLocal_251 = { 0f, 0f, 0f };
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
	vector3 vLocal_265 = { 0f, 0f, 0f };
	char* sLocal_268 = NULL;
	char* sLocal_269 = NULL;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	bool bLocal_275 = false;
	bool bLocal_276 = false;
	vector3 vLocal_277 = { 0f, 0f, 0f };
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
	var uLocal_524 = 0;
	bool bLocal_525 = false;
	bool bLocal_526 = false;
	bool bLocal_527 = false;
	bool bLocal_528 = false;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	char* sLocal_532 = NULL;
	bool bLocal_533 = false;
	vector3 vLocal_534 = { 0f, 0f, 0f };
	int iLocal_537 = 0;
	bool bLocal_538 = false;
	int iLocal_539 = 0;
	bool bLocal_540 = false;
	bool bLocal_541 = false;
	bool bLocal_542 = false;
	int iLocal_543 = 0;
	bool bLocal_544 = false;
	bool bLocal_545 = false;
	bool bLocal_546 = false;
	bool bLocal_547 = false;
	bool bLocal_548 = false;
	bool bLocal_549 = false;
	bool bLocal_550 = false;
	bool bLocal_551 = false;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 1065353216;
	var uLocal_557 = 1065353216;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 1065353216;
	var uLocal_562 = 1065353216;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 1065353216;
	var uLocal_567 = 1065353216;
	var uLocal_568 = 0;
	var uLocal_569 = 1040187392;
	var uLocal_570 = 1040187392;
	var uLocal_571 = -1;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = -1082130432;
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
	var uLocal_594 = 1065353216;
	var uLocal_595 = 1065353216;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 1065353216;
	var uLocal_600 = 1065353216;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 1065353216;
	var uLocal_605 = 1065353216;
	var uLocal_606 = 0;
	var uLocal_607 = 1040187392;
	var uLocal_608 = 1040187392;
	var uLocal_609 = -1;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = -1082130432;
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
	bool bLocal_644 = false;
	bool bLocal_645 = false;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	int iLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	int iLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	int iLocal_657 = 0;
	int iLocal_658 = 0;
	int iLocal_659 = 0;
	int iLocal_660 = 0;
	int iLocal_661 = 0;
	int iLocal_662 = 0;
	int iLocal_663 = 0;
	int iLocal_664 = 0;
	int iLocal_665 = 0;
	int iLocal_666 = 0;
	int iLocal_667 = 0;
	int iLocal_668 = 0;
	var uLocal_669 = 2;
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
	var uLocal_702 = 2;
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
	var uLocal_735 = 10;
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
	var uLocal_896 = 2;
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
	var uLocal_929 = 3;
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
	__LIB_1__::func_751(&uScriptParam_0, &uLocal_669);
	while (!func_3(&uScriptParam_0))
	{
		__LIB_1__::func_598(&uScriptParam_0, &uLocal_669, __LIB_0__::func_749());
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
					__LIB_6__::func_833();
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
				__LIB_1__::func_687(&uLocal_669);
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

bool func_39(var uParam0)
{
	bool bVar0;
	bVar0 = false;
	if (__LIB_6__::func_764(iLocal_14) && bLocal_204)
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
	}
	if (iLocal_657 > 0)
	{
		if (!__LIB_0__::func_272(iLocal_17, 0))
		{
			StringCopy(&(uParam0->f_15), "CR_FM_LENNYDEAD", 24);
			bVar0 = true;
		}
		else if (__LIB_6__::func_756(iLocal_17, 1128792064 /* Float: 200f */) && iLocal_657 < 5)
		{
			StringCopy(&(uParam0->f_15), "CR_FM_LENABAN", 24);
			bVar0 = true;
		}
		else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_17, Global_35, 1, 1) && (PED::IS_PED_ON_MOUNT(Global_35) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, false)))
		{
			StringCopy(&(uParam0->f_15), "CR_FM_LENNYATT", 24);
			bVar0 = true;
		}
		else if (__LIB_6__::func_757(iLocal_17))
		{
			StringCopy(&(uParam0->f_15), "CR_FM_LENNYATT", 24);
			bVar0 = true;
		}
		else if (iLocal_658 == 1 && !__LIB_0__::func_272(iLocal_92, 0))
		{
			StringCopy(&(uParam0->f_15), "CR_FM_LENNYHORSE", 24);
			bVar0 = true;
		}
		else if ((BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iLocal_17, true, false)) > 60f && bLocal_209) && !__LIB_6__::func_702(1))
		{
			StringCopy(&(uParam0->f_15), "CR_FM_LENABAN", 24);
			bVar0 = true;
		}
		else if (iLocal_658 == 1 && __LIB_6__::func_703(iLocal_91))
		{
			StringCopy(&(uParam0->f_15), "CR_FM_PHORSE", 24);
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("CACR04_FAIL");
	}
	return bVar0;
}

void func_45(var uParam0)
{
	vector3 vVar0;
	var uVar3;
	if (__LIB_0__::func_272(iLocal_17, 0))
	{
		PED::SET_PED_RESET_FLAG(iLocal_17, 53, true);
	}
	PED::SET_PED_RESET_FLAG(Global_35, 53, true);
	func_212();
	func_213();
	func_214();
	switch (iLocal_657)
	{
		case 0:
			if (func_215())
			{
				if (CAM::IS_SCREEN_FADED_IN())
				{
					iLocal_657 = 1;
				}
			}
			break;
		case 1:
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
			if (!bLocal_204)
			{
				if (!bLocal_205)
				{
					func_216();
					bLocal_205 = true;
				}
				if (__LIB_6__::func_809(iLocal_14))
				{
					__LIB_6__::func_781(iLocal_14);
					bLocal_204 = true;
				}
			}
			else
			{
				__LIB_6__::func_813(uParam0, func_219(0), func_219(1), 0, 1);
				iLocal_657 = 2;
			}
			break;
		case 2:
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
			func_221();
			func_222();
			if (func_223())
			{
				if (__LIB_6__::func_764(iLocal_14))
				{
					__LIB_6__::func_813(uParam0, func_219(1), func_219(2), 1, 2);
					TASK::ADD_COVER_BLOCKING_AREA(vLocal_50 - Vector(1.5f, 1.5f, 1.5f), vLocal_50 + Vector(1.5f, 1.5f, 1.5f), false, false, false, true);
					PED::SET_PED_CONFIG_FLAG(iLocal_17, 301, true);
					AUDIO::STOP_PED_SPEAKING(iLocal_17, true);
					AUDIO::_0x660A8F876DF1D4F8(14);
					AUDIO::_0x660A8F876DF1D4F8(6);
					iLocal_657 = 3;
				}
			}
			break;
		case 3:
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
			func_224();
			func_225();
			func_222();
			if (__LIB_6__::func_702(65536))
			{
				if (__LIB_0__::func_94(iLocal_17, vLocal_50, 1) < 3f || !func_227())
				{
					__LIB_6__::func_813(uParam0, func_219(2), func_219(3), 2, 3);
					__LIB_6__::func_704(65536);
				}
			}
			if (!bLocal_522)
			{
				if (__LIB_6__::func_724(&Local_280, "CALNY_CROB4_EXT", 1, 1))
				{
					bLocal_522 = true;
				}
			}
			if (!__LIB_6__::func_764(iLocal_14) || __LIB_6__::func_702(2))
			{
				if (func_230() || __LIB_6__::func_702(2))
				{
					if (!__LIB_4__::func_214(Global_35) && PED::_0xD0B7AEB56229D317(Global_35) == 0)
					{
						if (!__LIB_0__::func_75(&uLocal_82))
						{
							__LIB_1__::func_148(&uLocal_82);
						}
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_17, true);
						func_233();
						iLocal_657 = 4;
					}
				}
				else
				{
					iLocal_214 = 1;
					func_61();
				}
			}
			break;
		case 4:
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
			if (!CAM::_0x1204EB53A5FBC63D())
			{
				if (!bLocal_545)
				{
					if (__LIB_0__::func_75(&uLocal_82) && __LIB_0__::func_265(&uLocal_82) > 0.6f)
					{
						WEAPON::_0x4820A6939D7CEF28(Global_35, 0);
						WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
						TASK::TASK_SWAP_WEAPON(Global_35, 1, 1, 0, 0);
						if (__LIB_1__::func_750(&uVar3))
						{
							__LIB_4__::func_69();
						}
						bLocal_545 = true;
					}
				}
				else
				{
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), false);
				}
				if (!__LIB_0__::func_75(&uLocal_82) || __LIB_0__::func_265(&uLocal_82) > 2f)
				{
					vVar0 = { 1519.371f, -2109.206f, 43.3256f };
					if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(vVar0, 30f) > 0)
					{
						FIRE::STOP_FIRE_IN_RANGE(vVar0, 30f);
					}
					if (func_237(Local_280.f_152, &Local_280))
					{
						__LIB_6__::func_766();
						bLocal_523 = true;
						VEHICLE::SET_VEHICLE_DOOR_SHUT(Global_1392388.f_5, 0, false);
						VEHICLE::SET_VEHICLE_DOOR_SHUT(Global_1392388.f_5, 2, false);
						iLocal_657 = 5;
					}
				}
			}
			break;
		case 5:
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
			if (func_239())
			{
				__LIB_6__::func_765(3, 1);
				__LIB_0__::func_15(__LIB_0__::func_358(joaat("AMBIENT_COACH_ROBBED")), 1);
				PED::SET_PED_CONFIG_FLAG(iLocal_17, 301, false);
				PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
				iLocal_214 = 0;
				func_61();
			}
			break;
		case 6:
			iLocal_214 = 1;
			func_61();
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
					func_247(iVar0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
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
				func_247(iVar0, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
				return false;
			}
		}
		iVar0++;
	}
	if (!func_249(uParam0))
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
		if (!func_253(uParam0))
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
		func_257(Global_36, ENTITY::GET_ENTITY_HEADING(Global_35));
	}
	return true;
}

bool func_51(var uParam0)
{
	if (iLocal_214 == 0)
	{
		return true;
	}
	return false;
}

void func_61()
{
	__LIB_0__::func_325(&iLocal_537);
	func_262();
	__LIB_1__::func_721(7);
	__LIB_2__::func_353(&uLocal_524, 1);
	if (bLocal_522 && !bLocal_523)
	{
		__LIB_6__::func_829(&Local_280);
	}
	if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(uLocal_270))
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&uLocal_270);
	}
	if (__LIB_0__::func_272(iLocal_17, 0))
	{
		PED::SET_PED_CONFIG_FLAG(iLocal_17, 280, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_17, 246, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_17, false);
		__LIB_1__::func_684(9, 0);
	}
	if (__LIB_0__::func_272(iLocal_92, 0))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_92, true);
	}
	Global_1392388.f_3 = 0;
	__LIB_6__::func_704(8);
	__LIB_6__::func_704(4);
	__LIB_6__::func_704(65536);
	__LIB_6__::func_704(16);
	__LIB_1__::func_714();
	if (iLocal_214 == 0)
	{
		if (__LIB_1__::func_22(9))
		{
			__LIB_6__::func_725(9, 0, 0, 0, 60f, 1, 1, 0, 0, 0, 0);
		}
		__LIB_1__::func_463(iLocal_92, 9, 0, 0, 0);
	}
	else
	{
		__LIB_6__::func_779(1, 0, 0);
		__LIB_1__::func_463(iLocal_92, 9, 1, 0, 0);
	}
	__LIB_6__::func_824();
	if (__LIB_6__::func_764(iLocal_14))
	{
		if (iLocal_214 != 0)
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
	func_425();
	func_426();
	func_427();
	func_428();
	func_429();
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
	func_432(iParam0, 1, 1, -142743235, 1);
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
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_473(&uVar4, &iVar1, &iVar2, &iVar3)))
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

void func_212()
{
	bool bVar0;
	bool bVar1;
	if (iLocal_667 != 4)
	{
		return;
	}
	bVar0 = false;
	bVar1 = false;
	if (ENTITY::DOES_ENTITY_EXIST(Global_1392388.f_5) && MAP::_DOES_ENTITY_HAVE_BLIP(Global_1392388.f_5))
	{
		bVar0 = true;
	}
	if (MAP::DOES_BLIP_EXIST(iLocal_537))
	{
		bVar1 = true;
	}
	if (bVar0 && bVar1)
	{
		if (!__LIB_1__::func_588("CR_DG_COMP4_OBJ3B", 0, 0, -1, -1, 0))
		{
			__LIB_6__::func_830(11, "CR_DG_COMP4_OBJ3B", 1);
		}
	}
	else if (bVar0)
	{
		if (!__LIB_1__::func_588("CR_DG_COMP4_OBJ3D", 0, 0, -1, -1, 0))
		{
			__LIB_6__::func_830(11, "CR_DG_COMP4_OBJ3D", 1);
		}
	}
	else if (bVar1)
	{
		if (!__LIB_1__::func_588("CR_DG_COMP4_OBJ3", 0, 0, -1, -1, 0))
		{
			__LIB_6__::func_830(11, "CR_DG_COMP4_OBJ3", 1);
		}
	}
	else if (!__LIB_1__::func_588("CR_DG_COMP4_OBJ3C", 0, 0, -1, -1, 0))
	{
		__LIB_6__::func_830(11, "CR_DG_COMP4_OBJ3C", 1);
	}
}

void func_213()
{
	if (bLocal_533)
	{
		return;
	}
	if (!__LIB_0__::func_75(&uLocal_529))
	{
		__LIB_1__::func_148(&uLocal_529);
	}
	switch (iLocal_667)
	{
		case 0:
			if (__LIB_5__::func_352(sLocal_532) || BUILTIN::VDIST(vLocal_534, Global_36) > 2f)
			{
				bLocal_533 = true;
			}
			else if (__LIB_0__::func_265(&uLocal_529) > 6f)
			{
				__LIB_1__::func_422(sLocal_532, 7500, 0, 1, 0, 0, -1, -1, 0);
				bLocal_533 = true;
			}
			break;
		case 1:
			if (!__LIB_0__::func_71(iLocal_17))
			{
				__LIB_1__::func_148(&uLocal_529);
			}
			if (__LIB_5__::func_352(sLocal_532) || __LIB_0__::func_71(Global_35))
			{
				bLocal_533 = true;
			}
			else if (__LIB_0__::func_265(&uLocal_529) > 6f)
			{
				__LIB_1__::func_422(sLocal_532, 7500, 0, 1, 0, 0, -1, -1, 0);
				bLocal_533 = true;
			}
			break;
		case 2:
			if (__LIB_5__::func_352(sLocal_532) || BUILTIN::VDIST(vLocal_534, Global_36) > 2f)
			{
				bLocal_533 = true;
			}
			else
			{
				if (!bLocal_212)
				{
					__LIB_0__::func_37(&uLocal_529);
					return;
				}
				if (__LIB_0__::func_265(&uLocal_529) > 8f)
				{
					__LIB_1__::func_422(sLocal_532, 7500, 0, 1, 0, 0, -1, -1, 0);
					bLocal_533 = true;
				}
			}
			break;
		case 3:
			__LIB_1__::func_422(sLocal_532, 7500, 0, 1, 0, 0, -1, -1, 0);
			bLocal_533 = true;
			break;
		case 4:
			if (__LIB_5__::func_352(sLocal_532) || func_508())
			{
				bLocal_533 = true;
			}
			else if (__LIB_0__::func_265(&uLocal_529) > 10f)
			{
				__LIB_1__::func_422(sLocal_532, 7500, 0, 1, 0, 0, -1, -1, 0);
				bLocal_533 = true;
			}
			break;
		case 5:
			break;
		case 6:
			break;
	}
}

void func_214()
{
	if (bLocal_645 || !bLocal_644)
	{
		return;
	}
	__LIB_19__::func_120(iLocal_17, 6f, 0, 1f);
	__LIB_2__::func_966(iLocal_17, Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
	__LIB_2__::func_966(Global_35, iLocal_17, 1, 1, 1, 0, 1, 1, 0, 1, 1);
	__LIB_6__::func_762(&uLocal_628, iLocal_17);
}

bool func_215()
{
	int iVar0;
	if (bLocal_541)
	{
		return true;
	}
	if (!func_513())
	{
		return false;
	}
	if (!bLocal_203)
	{
		func_514();
		bLocal_203 = true;
	}
	if (!HUD::_TEXT_DATABASE_HAS_LOADED("SCRB"))
	{
		return false;
	}
	if (!HUD::_TEXT_DATABASE_HAS_LOADED("CHRC4A"))
	{
		return false;
	}
	if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(cLocal_202))
	{
		return false;
	}
	__LIB_2__::func_165(vLocal_206, 125f, 0, 0, 5);
	__LIB_3__::func_618(vLocal_206, 150f, 1, 0, 0, 0, 0);
	PED::_0x9851DE7AEC10B4E1(vLocal_206, 150f, 1, 0);
	ENTITY::FREEZE_ENTITY_POSITION(Global_35, false);
	if (__LIB_0__::func_272(iLocal_91, 0))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_91, false);
	}
	iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(1897.18f, -1858.35f, 42.17f);
	INTERIOR::PIN_INTERIOR_IN_MEMORY(iVar0);
	if (!INTERIOR::IS_INTERIOR_READY(iVar0))
	{
		return false;
	}
	bLocal_541 = true;
	return true;
}

void func_216()
{
	__LIB_6__::func_705(4);
	__LIB_6__::func_705(65536);
	func_517();
	__LIB_6__::func_811(iLocal_14, iLocal_15, iLocal_16);
	__LIB_3__::func_618(__LIB_6__::func_758(iLocal_14), (__LIB_6__::func_707(iLocal_14) + 50f), 1, 0, 0, 0, 0);
}

struct<4> func_219(int iParam0)
{
	struct<4> Var0;
	switch (iParam0)
	{
		case 0:
			Var0 = { 1869.339f, -1842.018f, 41.5621f };
			Var0.f_3 = 56.2f;
			break;
		case 1:
			Var0 = { 1514.382f, -2060.406f, 42.592f };
			Var0.f_3 = 180.0761f;
			break;
		case 2:
			Var0 = { 1514.382f, -2060.406f, 42.592f };
			Var0.f_3 = 180.0761f;
			break;
		case 3:
			Var0 = { 1514.382f, -2060.406f, 42.592f };
			Var0.f_3 = 180.0761f;
			break;
	}
	return Var0;
}

void func_221()
{
	vector3 vVar0[24];
	switch (iLocal_660)
	{
		case 0:
			if (HUD::_TEXT_DATABASE_HAS_LOADED("SCRB") && HUD::_TEXT_DATABASE_HAS_LOADED("CHRC4A"))
			{
				if (func_513())
				{
					if (!__LIB_5__::func_236(1))
					{
						StringCopy(&cVar0, "CHRC4_P1", 24);
						if (__LIB_1__::func_104(&uLocal_100, cVar0, 0, -1, 0, 0))
						{
							vLocal_230 = { Global_36 };
							__LIB_0__::func_900(9);
							func_531(0);
							iLocal_660 = 1;
						}
					}
				}
			}
			break;
		case 1:
			if (!__LIB_5__::func_236(1))
			{
				if (!bLocal_542)
				{
					if (__LIB_0__::func_665(iLocal_17, iLocal_92, 1, 1) < 37f && __LIB_0__::func_94(iLocal_92, Global_36, 1) < 37f)
					{
						StringCopy(&cVar0, "CHRC4_H1", 24);
						if (__LIB_1__::func_104(&uLocal_100, cVar0, 0, -1, 0, 0))
						{
							bLocal_542 = true;
						}
					}
				}
				if (!bLocal_229)
				{
					if (!__LIB_0__::func_75(&uLocal_226))
					{
						__LIB_1__::func_148(&uLocal_226);
					}
					else if ((BUILTIN::VDIST(vLocal_230, Global_36) > 10f || PED::IS_PED_ON_MOUNT(Global_35)) || __LIB_5__::func_352("CR_DG_COMP4_OBJ1"))
					{
						bLocal_229 = true;
					}
					else if (__LIB_0__::func_265(&uLocal_226) > 10f)
					{
						__LIB_1__::func_422("CR_DG_COMP4_OBJ1", 7500, 0, 1, 0, 0, -1, -1, 0);
						bLocal_229 = true;
					}
				}
			}
			if (__LIB_0__::func_71(Global_35) && __LIB_0__::func_71(iLocal_17))
			{
				iLocal_660 = 2;
			}
			break;
		case 2:
			if (!__LIB_5__::func_236(1))
			{
				if (__LIB_0__::func_94(iLocal_17, Global_36, 1) < 10f)
				{
					StringCopy(&cVar0, "CHRC4_P2", 24);
					if (__LIB_1__::func_104(&uLocal_100, cVar0, 0, -1, 0, 0))
					{
						iLocal_660 = 3;
					}
				}
			}
			break;
		case 3:
			if (!__LIB_5__::func_236(1))
			{
				StringCopy(&cVar0, "CHRC4_P3", 24);
				if (__LIB_1__::func_104(&uLocal_100, cVar0, 0, -1, 0, 0))
				{
					iLocal_660 = 8;
				}
			}
			break;
	}
}

void func_222()
{
	int iVar0;
	vector3 vVar1[24];
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_91))
	{
		if ((iLocal_667 == 1 || iLocal_667 == 0) || (iLocal_667 == 2 && __LIB_0__::func_71(iLocal_17)))
		{
			PLAYER::_0xC71D07C96946E263(PLAYER::PLAYER_ID(), iLocal_91);
		}
	}
	if (!bLocal_548)
	{
		if (bLocal_546)
		{
			if (__LIB_0__::func_272(iLocal_96, 0))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_96, true))
				{
					ENTITY::SET_ENTITY_PROOFS(iLocal_96, 0, false);
					bLocal_548 = true;
				}
			}
		}
	}
	if (!bLocal_549)
	{
		if (bLocal_547)
		{
			if (__LIB_0__::func_272(iLocal_97, 0))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_97, true))
				{
					ENTITY::SET_ENTITY_PROOFS(iLocal_97, 0, false);
					bLocal_549 = true;
				}
			}
		}
	}
	switch (iLocal_668)
	{
		case 0:
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vLocal_77, true) < 15f)
			{
				if (!PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true))
				{
					iLocal_668 = 3;
				}
				else
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(PED::GET_MOUNT(Global_35), 1.25f);
					if (func_533())
					{
						TASK::TASK_STAND_STILL(Global_35, 1000);
						iLocal_668 = 1;
					}
				}
			}
			break;
		case 1:
			if (!PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true))
			{
				iLocal_668 = 3;
			}
			else if (ENTITY::GET_ENTITY_SPEED(Global_35) < 0.2f)
			{
				TASK::TASK_DISMOUNT_ANIMAL(Global_35, 0, 0, 0, 0, 0);
				iLocal_668 = 2;
			}
			else if (!__LIB_0__::func_491(Global_35, -982327190))
			{
				TASK::TASK_STAND_STILL(Global_35, 1000);
			}
			break;
		case 2:
			if (!PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true))
			{
				iLocal_668 = 3;
			}
			else if (!__LIB_0__::func_491(Global_35, 501393341))
			{
				TASK::TASK_DISMOUNT_ANIMAL(Global_35, 0, 0, 0, 0, 0);
			}
			break;
	}
	switch (iLocal_658)
	{
		case 0:
			if (func_513())
			{
				iLocal_658 = 1;
			}
			break;
		case 1:
			if (bLocal_525 && __LIB_0__::func_71(Global_35))
			{
				__LIB_6__::func_831(Global_35, vLocal_77, 0, 70f, bLocal_526, 10f, 1084227584 /* Float: 5f */, 1, 1, 1, 0);
			}
			if (func_223())
			{
				if (!bLocal_80)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("CACR04_ARRIVE");
					func_536();
				}
				else
				{
					func_537();
				}
			}
			else
			{
				if (__LIB_0__::func_272(iLocal_17, 0))
				{
					if (__LIB_0__::func_396(iLocal_17) && __LIB_0__::func_396(Global_35))
					{
						if (!bLocal_212)
						{
							if (__LIB_0__::func_94(iLocal_17, Global_36, 1) < 15f || !__LIB_1__::func_652())
							{
								func_262();
								AUDIO::TRIGGER_MUSIC_EVENT("CACR04_START");
								AUDIO::STOP_PED_SPEAKING(iLocal_17, false);
								AUDIO::_0x0D7FD6A55FD63AEF(14, 3, 1);
								AUDIO::_0x0D7FD6A55FD63AEF(6, 3, 1);
								bLocal_212 = true;
							}
						}
						else if (__LIB_0__::func_94(iLocal_17, vLocal_43, 1) > 5f)
						{
							func_540();
						}
					}
					else
					{
						if (__LIB_0__::func_396(iLocal_17))
						{
							if (BUILTIN::VDIST(vLocal_230, Global_36) < 80f)
							{
								func_541();
							}
						}
						if (!bLocal_212)
						{
							func_542();
						}
						else if (!__LIB_0__::func_71(iLocal_17))
						{
							if (!__LIB_0__::func_163(iLocal_17, 1868526510))
							{
								TASK::TASK_MOUNT_ANIMAL(iLocal_17, iLocal_92, 20000, -1, 2f, 513, 0, 0);
							}
						}
					}
				}
				if (!bLocal_540)
				{
					if (__LIB_0__::func_94(iLocal_91, Global_36, 1) < 12f)
					{
						func_531(1);
						__LIB_0__::func_745(9);
						__LIB_1__::func_718(7);
						bLocal_540 = true;
					}
				}
				else if (!bLocal_528)
				{
					if (__LIB_0__::func_71(Global_35) || AITRANSPORT::_0x619E63980BFC0096(Global_35, iLocal_91, 0))
					{
						__LIB_1__::func_721(7);
						__LIB_0__::func_900(9);
						func_531(2);
						bLocal_528 = true;
					}
				}
			}
			func_545();
			func_546();
			if (__LIB_6__::func_764(iLocal_14))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_1392388.f_5) && __LIB_0__::func_94(Global_1392388.f_5, Global_36, 1) < 8f)
				{
					PLAYER::SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(PLAYER::PLAYER_ID());
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
					PED::SET_PED_RESET_FLAG(Global_35, 2, true);
					PED::SET_PED_RESET_FLAG(Global_35, 168, true);
				}
				if (__LIB_6__::func_702(1))
				{
					__LIB_0__::func_325(&iLocal_537);
					func_547(1112014848 /* Float: 50f */);
					if (!__LIB_0__::func_75(&uLocal_85))
					{
						AUDIO::TRIGGER_MUSIC_EVENT("CACR04_FIGHT");
						__LIB_1__::func_148(&uLocal_85);
					}
					else if (__LIB_0__::func_265(&uLocal_85) > 1f)
					{
						if (__LIB_0__::func_272(iLocal_17, 0))
						{
							if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_233))
							{
								ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_233);
							}
							StringCopy(&cVar1, "CHRC4_IG1", 24);
							if (__LIB_1__::func_49(&cVar1))
							{
								AUDIO::STOP_SCRIPTED_CONVERSATION(&cVar1, false, false);
							}
							PED::SET_PED_CONFIG_FLAG(iLocal_17, 280, true);
							TASK::CLEAR_PED_TASKS(iLocal_17, true, false);
							PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, joaat("REL_COMPANION_GROUP"), joaat("REL_COP"));
							PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, joaat("REL_COP"), joaat("REL_COMPANION_GROUP"));
							PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, joaat("REL_GANG_DUTCHS"), joaat("REL_COP"));
							PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, joaat("REL_COP"), joaat("REL_GANG_DUTCHS"));
							PED::SET_PED_CONFIG_FLAG(iLocal_17, 204, true);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_17, true);
							PED::SET_PED_COMBAT_MOVEMENT(iLocal_17, 1);
							PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_17, 0, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_17, 12, true);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_17, vLocal_60, 3f, 20000, 0.25f, 0, 40000f);
							PED::REGISTER_HATED_TARGETS_AROUND_PED(iLocal_17, 100f);
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_17, vLocal_277, 4f, 0, 0, 0);
							if (iLocal_661 < 11)
							{
								iLocal_661 = 11;
							}
						}
						iLocal_658 = 2;
					}
				}
			}
			break;
		case 2:
			func_549();
			func_547(1112014848 /* Float: 50f */);
			if (__LIB_6__::func_702(2))
			{
				PED::CLEAR_RELATIONSHIP_BETWEEN_GROUPS(6, joaat("REL_COMPANION_GROUP"), joaat("REL_COP"));
				PED::CLEAR_RELATIONSHIP_BETWEEN_GROUPS(6, joaat("REL_COP"), joaat("REL_COMPANION_GROUP"));
				PED::CLEAR_RELATIONSHIP_BETWEEN_GROUPS(6, joaat("REL_GANG_DUTCHS"), joaat("REL_COP"));
				PED::CLEAR_RELATIONSHIP_BETWEEN_GROUPS(6, joaat("REL_COP"), joaat("REL_GANG_DUTCHS"));
				if (iLocal_661 < 11)
				{
					iLocal_661 = 11;
				}
				if (__LIB_0__::func_272(iLocal_17, 0) && !ENTITY::IS_ENTITY_DEAD(Global_1392388.f_5))
				{
					TASK::TASK_LOOK_AT_ENTITY(iLocal_17, Global_35, -1, 0, 51, 0);
					vLocal_199 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_1392388.f_5, 3f, 0f, 0f) };
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_199, 1f, -1, 5f, 0, 40000f);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_1392388.f_5, -1, -1f, -1f, -1f);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_17, iVar0);
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				}
				AUDIO::TRIGGER_MUSIC_EVENT("CACR04_FIGHT_END");
				iLocal_658 = 3;
			}
			break;
		case 3:
			break;
	}
}

bool func_223()
{
	int iVar0;
	int iVar1;
	if (bLocal_209)
	{
		return true;
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vLocal_206, true) < 15f)
	{
		iVar0 = 1;
	}
	if (__LIB_0__::func_272(iLocal_17, 0) && __LIB_0__::func_94(iLocal_17, vLocal_206, 1) < 15f)
	{
		iVar1 = 1;
	}
	if (iVar0 && iVar1)
	{
		PLAYER::_0x12E09E278C6C29B7(PLAYER::PLAYER_ID());
		__LIB_5__::func_511(1);
		bLocal_209 = true;
		return true;
	}
	return false;
}

void func_224()
{
	if (bLocal_551)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1392388.f_5))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_1392388.f_5))
	{
		return;
	}
	VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Global_1392388.f_5, false);
	VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(Global_1392388.f_5, 0, false);
	VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(Global_1392388.f_5, 2, false);
	iLocal_94 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(Global_1392388.f_5, -1);
	iLocal_95 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(Global_1392388.f_5, 0);
	iLocal_96 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(Global_1392388.f_5, 1);
	iLocal_97 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(Global_1392388.f_5, 2);
	if (__LIB_0__::func_272(iLocal_96, 0) && !bLocal_546)
	{
		ENTITY::SET_ENTITY_PROOFS(iLocal_96, 6, false);
		bLocal_546 = true;
	}
	if (__LIB_0__::func_272(iLocal_97, 0) && !bLocal_547)
	{
		ENTITY::SET_ENTITY_PROOFS(iLocal_97, 6, false);
		bLocal_547 = true;
	}
	if (((__LIB_0__::func_272(iLocal_94, 0) && __LIB_0__::func_272(iLocal_95, 0)) && __LIB_0__::func_272(iLocal_96, 0)) && __LIB_0__::func_272(iLocal_97, 0))
	{
		bLocal_551 = true;
	}
}

void func_225()
{
	int iVar0;
	vector3 vVar1[24];
	if (!__LIB_0__::func_272(iLocal_17, 1))
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(iLocal_537))
	{
		if (func_508())
		{
			__LIB_0__::func_325(&iLocal_537);
		}
	}
	if (iLocal_543 < 3)
	{
		if (func_551())
		{
			if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iLocal_17) && !__LIB_5__::func_236(1))
			{
				__LIB_5__::func_469(iLocal_17, "STOP_THAT", joaat("SPEECH_PARAMS_FORCE_SHOUTED"), Global_35, 1, 0, 0, 1);
				iLocal_543++;
			}
		}
	}
	switch (iLocal_661)
	{
		case 0:
			if ((bLocal_80 && HUD::_TEXT_DATABASE_HAS_LOADED("SCRB")) && HUD::_TEXT_DATABASE_HAS_LOADED("CHRC4A"))
			{
				if (!__LIB_5__::func_236(1))
				{
					StringCopy(&cVar1, "CHRC4_A1", 24);
					if (__LIB_0__::func_94(iLocal_17, vLocal_50, 1) < 3f)
					{
						iLocal_661 = 1;
					}
					else if (__LIB_1__::func_104(&uLocal_100, cVar1, 0, -1, 0, 0))
					{
						iLocal_661 = 1;
					}
				}
			}
			break;
		case 1:
			if (__LIB_6__::func_764(iLocal_14) && BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_17, true, false), vLocal_50) < 5f)
			{
				if (!__LIB_5__::func_236(1))
				{
					__LIB_1__::func_148(&uLocal_272);
					StringCopy(&cVar1, "CHRC4_A1B", 24);
					__LIB_1__::func_104(&uLocal_100, cVar1, 0, -1, 0, 0);
					func_531(4);
					__LIB_0__::func_745(iLocal_99);
					if (!func_508())
					{
						iLocal_537 = MAP::_BLIP_ADD_FOR_RADIUS(-1282792512, vLocal_55, 5f);
						MAP::_BLIP_SET_MODIFIER(iLocal_537, -401963276);
					}
					iLocal_661 = 2;
				}
			}
			break;
		case 2:
			func_553();
			if (__LIB_0__::func_265(&uLocal_272) > 6f)
			{
				StringCopy(&cVar1, "CHRC4_A2", 24);
				if (__LIB_1__::func_104(&uLocal_100, cVar1, 0, -1, 0, 0))
				{
					PED::_SET_PED_CROUCH_MOVEMENT(iLocal_17, true, 0, false);
					iLocal_661 = 3;
				}
			}
			break;
		case 3:
			if (ENTITY::DOES_ENTITY_EXIST(Global_1392388.f_5))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Global_1392388.f_5))
				{
					iVar0 = Global_1392388.f_5;
					if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_17, true, false), ENTITY::GET_ENTITY_COORDS(iVar0, true, false)) < 83f)
					{
						if (!__LIB_5__::func_236(1))
						{
							StringCopy(&cVar1, "CHRC4_IG1", 24);
							if (__LIB_0__::func_94(iLocal_17, Global_36, 1) < 25f)
							{
								if (__LIB_1__::func_104(&uLocal_100, cVar1, 0, -1, 0, 0))
								{
									iLocal_661 = 5;
								}
							}
							else
							{
								iLocal_661 = 5;
							}
						}
					}
					else if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_17, true, false), ENTITY::GET_ENTITY_COORDS(iVar0, true, false)) > 100f)
					{
						func_553();
					}
				}
			}
			break;
		case 5:
			if (!bLocal_550)
			{
				if (__LIB_0__::func_94(iLocal_17, Global_36, 1) > 25f)
				{
					StringCopy(&cVar1, "CHRC4_IG1", 24);
					if (__LIB_1__::func_49(&cVar1) || ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_233, false))
					{
						if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_233, false))
						{
							ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_233);
							TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(iLocal_17, vLocal_50, -1, 0, 0, 0, 0, iLocal_49, 0, 0, 0);
						}
						AUDIO::_0x36559148B78853B3(1, 1, 0);
						bLocal_550 = true;
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Global_1392388.f_5))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Global_1392388.f_5))
				{
					iVar0 = Global_1392388.f_5;
					if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_17, true, false), ENTITY::GET_ENTITY_COORDS(iVar0, true, false)) < (40f - 5f))
					{
						iLocal_94 = __LIB_6__::func_827();
						if (__LIB_0__::func_272(iLocal_94, 0))
						{
							__LIB_0__::func_928(&uLocal_100, iLocal_94, "Comp4_Driver", 0);
						}
						iLocal_96 = func_556();
						if (__LIB_0__::func_272(iLocal_96, 0))
						{
							__LIB_0__::func_928(&uLocal_100, iLocal_96, "Comp4_Marshal", 0);
						}
						iLocal_661 = 7;
					}
				}
			}
			break;
		case 7:
			if (iLocal_666 >= 5)
			{
				StringCopy(&cVar1, "CHRC4_IG2", 24);
				if (__LIB_1__::func_104(&uLocal_100, cVar1, 0, -1, 0, 0))
				{
					iLocal_661 = 11;
				}
			}
			break;
		case 11:
			if (!__LIB_5__::func_236(1))
			{
				iLocal_661 = 12;
			}
			break;
	}
}

bool func_227()
{
	return ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_35, 1517.922f, -2126.803f, 41.04689f, 1515.342f, -2040.621f, 57.72543f, 64.75f, false, true, 0);
}

bool func_230()
{
	if (Global_40.f_9146 > iLocal_81)
	{
		return true;
	}
	return false;
}

void func_233()
{
	__LIB_1__::func_620(&Local_280, Global_35, "ARTHUR", 0, 0, 0);
	__LIB_1__::func_620(&Local_280, iLocal_17, "Lenny", 0, 0, 0);
	__LIB_1__::func_620(&Local_280, Global_1392388.f_5, "STAGECOACH004X", 0, 0, 0);
	__LIB_1__::func_620(&Local_280, iLocal_23, "p_cs_treefallen01x", 0, 0, 0);
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_247))
	{
		iLocal_247 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("P_CS_BILLSTACK01X"), vLocal_199, true, true, false, true);
	}
	__LIB_1__::func_620(&Local_280, iLocal_247, "p_cs_billstack01x", 1, 0, 0);
}

bool func_237(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
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
			func_596(uParam4);
			if (__LIB_1__::func_503(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_149);
			}
			if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_156) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam4->f_156, false)) && (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_156) || __LIB_0__::func_84(uParam4, 512)))
			{
				if (!__LIB_0__::func_84(uParam4, 1024) && __LIB_1__::func_541(uParam4, 1))
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

bool func_239()
{
	switch (iLocal_662)
	{
		case 0:
			iLocal_662 = 3;
			break;
		case 3:
			if (!__LIB_5__::func_236(1))
			{
				if (func_607(iLocal_17, iLocal_92, vLocal_265, &uLocal_257, 0))
				{
					__LIB_6__::func_705(8192);
					iLocal_662 = 4;
				}
			}
			break;
		case 4:
			return true;
	}
	return false;
}

int func_247(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
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
				func_614(Global_1360165[iParam0 /*1157*/], vVar0, iParam6, 2, 1073741824 /* Float: 2f */);
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

bool func_249(var uParam0)
{
	__LIB_6__::func_704(8192);
	iLocal_14 = 11;
	iLocal_15 = 0;
	iLocal_16 = 1;
	iLocal_99 = 9;
	iLocal_18 = joaat("S_GRI_ROCK_M_03");
	vLocal_25 = { 1511.32f, -2099.45f, 44.26f };
	vLocal_28 = { 0f, 0f, 110f };
	iLocal_19 = joaat("S_GRI_ROCK_L_03");
	vLocal_31 = { 1509.21f, -2099.2f, 44.25f };
	vLocal_34 = { 0f, 0f, 80f };
	iLocal_20 = joaat("P_CS_TREEFALLEN01X");
	vLocal_37 = { 1527.83f, -2099.92f, 44.3f };
	vLocal_40 = { 0f, -2f, -30f };
	vLocal_50 = { 1511.576f, -2098.175f, 44.1062f };
	fLocal_53 = -145f;
	vLocal_55 = { 1509.38f, -2098.103f, 44.2817f };
	fLocal_58 = 194.604f;
	vLocal_69 = { 1519.604f, -2095.891f, 43.43f };
	vLocal_60 = { 1521.444f, -2095.525f, 43.3964f };
	fLocal_63 = 187.888f;
	vLocal_65 = { 1524.887f, -2095.894f, 43.5868f };
	fLocal_68 = 172.9987f;
	vLocal_46 = { 1516.28f, -2102.27f, 43.59f };
	sLocal_72 = "MECH_COVER@LOCO@BASE@CORE";
	sLocal_73 = "low_idle_l_peek";
	sLocal_74 = "low_idle_l_peek_intro";
	sLocal_75 = "low_idle_l_peek_outro";
	vLocal_77 = { 1507.374f, -2086.551f, 43.7633f };
	iLocal_81 = Global_40.f_9146;
	vLocal_199 = { 1516.152f, -2095.545f, 43.3552f };
	vLocal_206 = { 1515.753f, -2075.265f, 42.593f };
	cLocal_202 = "prc_chrob_comp4_comp";
	sLocal_235 = "script@proc@robberies@coach@comp4@lenny_plan";
	sLocal_236 = "script@proc@robberies@coach@comp4@robbery_coach";
	sLocal_237 = "script_proc@robberies@coach@comp4";
	sLocal_268 = "AI_COMBAT@AIM_SWEEPS@COWBOY@NEAR@BASE@2H";
	sLocal_269 = "aim_med_0";
	vLocal_240 = { 1510.676f, -2100.476f, 44.107f };
	vLocal_243 = { 0f, 0f, 115f };
	vLocal_265 = { 1441.814f, -1843.118f, 53.4661f };
	vLocal_251 = { 1516.967f, -2166.593f, 44.0823f };
	vLocal_277 = { 1526.896f, -2096.432f, 43.7655f };
	vLocal_43 = { 1859.81f, -1828.88f, 42.39f };
	if (!__LIB_1__::func_565(&uLocal_524))
	{
		__LIB_3__::func_414(&uLocal_524, 1508.88f, -2107.77f, 44.12f, 7f, 1, 60, 0);
	}
	if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(uLocal_270))
	{
		uLocal_270 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(1890.77f, -1864.04f, 42.6f, 1f, 1f, 1f, 0f, false, 7);
	}
	if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(uLocal_271))
	{
		uLocal_271 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(1541.53f, -2100.029f, 44.7352f, 12f, 12f, 7f, 0f, false, 7);
	}
	TASK::REQUEST_WAYPOINT_RECORDING(cLocal_202);
	STREAMING::REQUEST_MODEL(iLocal_20, false);
	STREAMING::REQUEST_MODEL(joaat("P_CS_BILLSTACK01X"), false);
	STREAMING::REQUEST_ANIM_DICT(sLocal_72);
	STREAMING::REQUEST_ANIM_DICT(sLocal_237);
	STREAMING::REQUEST_ANIM_DICT(sLocal_268);
	HUD::_TEXT_DATABASE_REQUEST("SCRB");
	HUD::_TEXT_DATABASE_REQUEST("CHRC4A");
	__LIB_0__::func_928(&uLocal_100, Global_35, "ARTHUR", 0);
	__LIB_6__::func_704(8);
	__LIB_6__::func_704(32768);
	__LIB_6__::func_705(16);
	__LIB_6__::func_705(131072);
	MISC::_0x1096603B519C905F("CACR04");
	__LIB_0__::func_63(&(uParam0->f_9), 256, 1);
	__LIB_6__::func_825();
	__LIB_6__::func_761(uParam0, 60f);
	iLocal_214 = -1;
	return true;
}

bool func_253(var uParam0)
{
	if (__LIB_0__::func_1(Global_1935630, 2048))
	{
		return false;
	}
	if (func_660(uParam0))
	{
		CAM::DO_SCREEN_FADE_IN(500);
		__LIB_1__::func_164(0);
		HUD::DISPLAY_HUD(true);
		MAP::DISPLAY_RADAR(true);
		return true;
	}
	return false;
}

int func_257(vector3 vParam0, float fParam3)
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
		iVar0 = func_668(0, 0);
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

void func_262()
{
	if (bLocal_645 || !bLocal_644)
	{
		return;
	}
	__LIB_1__::func_726(iLocal_17, 1);
	__LIB_1__::func_727(Global_35, 1);
	__LIB_2__::func_962(&uLocal_628);
	bLocal_645 = true;
}

void func_425()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_828(0);
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
	func_828(1);
}

void func_426()
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

void func_427()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_831(0);
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
	func_831(1);
}

void func_428()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_1__::func_432(15000, 0, 0, 0, 1);
			func_831(0);
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
	func_831(1);
}

void func_429()
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
				func_432(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_432(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
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

int func_432(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			func_432(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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

int func_473(var uParam0, int iParam1, int iParam2, int iParam3)
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
	iVar11 = (func_877(iVar0, iVar1, 1, 0, 0) * iVar2);
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

bool func_508()
{
	if (BUILTIN::VDIST(vLocal_55, Global_36) < 2f && PED::IS_PED_IN_COVER(Global_35, false, false))
	{
		return true;
	}
	return false;
}

bool func_513()
{
	if (!bLocal_93)
	{
		PED::_0xED9582B3DA8F02B4(3);
		bLocal_93 = true;
	}
	if (!__LIB_0__::func_75(&uLocal_88))
	{
		__LIB_1__::func_148(&uLocal_88);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_91))
	{
		func_911();
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_17))
	{
		iLocal_17 = func_247(iLocal_99, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_17))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_92))
	{
		iLocal_92 = func_912(&uLocal_98, iLocal_99, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_92))
	{
		return false;
	}
	if (!__LIB_0__::func_272(iLocal_17, 257))
	{
		return false;
	}
	if (!__LIB_0__::func_272(iLocal_92, 257))
	{
		return false;
	}
	if (!__LIB_0__::func_858(iLocal_99, 256))
	{
		__LIB_1__::func_411(iLocal_99, iLocal_92, 1);
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_91) && __LIB_0__::func_265(&uLocal_88) < 5f)
	{
		return false;
	}
	ENTITY::_SET_ENTITY_HEALTH(iLocal_17, ENTITY::GET_ENTITY_MAX_HEALTH(iLocal_17, false), 0);
	PED::SET_PED_CONFIG_FLAG(iLocal_17, 204, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_17, 259, false);
	PED::SET_PED_CONFIG_FLAG(iLocal_17, 301, false);
	PED::SET_PED_CONFIG_FLAG(iLocal_17, 315, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_17, 297, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_17, 130, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_17, 331, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_17, 330, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_17, 66, true);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_17, false);
	__LIB_1__::func_684(9, 1);
	__LIB_0__::func_928(&uLocal_100, iLocal_17, "LENNY", 0);
	return true;
}

void func_514()
{
	vector3 vVar0;
	float fVar3;
	vVar0 = { 1861.036f, -1829.247f, 42.2005f };
	fVar3 = 126.18f;
	__LIB_0__::func_928(&uLocal_100, iLocal_17, "LENNY", 0);
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_92, vVar0, fVar3, true, false, true);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_92, 48, true);
	PHYSICS::_0x06AADE17334F7A40(iLocal_92, 1859.48f, -1828.82f, 43.3f);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_91, 48, true);
	TASK::TASK_STAND_STILL(iLocal_91, -1);
	PHYSICS::_0x06AADE17334F7A40(iLocal_91, 1851.98f, -1834.39f, 43.16f);
}

void func_517()
{
	__LIB_6__::func_777(11, 105, 72, __LIB_6__::func_710(105), __LIB_6__::func_711(11));
}

void func_531(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			sLocal_532 = "CR_DG_COMP4_OBJ2";
			vLocal_534 = { Global_36 };
			break;
		case 1:
			sLocal_532 = "CR_DG_COMP4_OBJ1";
			break;
		case 2:
			sLocal_532 = "CR_DG_COMP4_OBJ2";
			vLocal_534 = { Global_36 };
			break;
		case 3:
			sLocal_532 = "CR_DG_COMP4_RET";
			break;
		case 4:
			sLocal_532 = "CR_DG_COMP4_OBJ3";
			break;
		case 5:
			sLocal_532 = "CR_DG_COMP4_OBJ4";
			break;
		case 6:
			sLocal_532 = "CR_O_LKILL";
			break;
	}
	__LIB_0__::func_37(&uLocal_529);
	iLocal_667 = iParam0;
	bLocal_533 = false;
	__LIB_6__::func_830(11, sLocal_532, 0);
}

bool func_533()
{
	return ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_35, 1508.77f, -2089.855f, 42.41671f, 1507.458f, -2081.727f, 47.22388f, 5.75f, false, true, 0);
}

void func_536()
{
	int iVar0;
	if (bLocal_80)
	{
		return;
	}
	if (!__LIB_0__::func_272(iLocal_17, 1))
	{
		return;
	}
	if (__LIB_0__::func_866(iLocal_99, 0))
	{
		__LIB_1__::func_640(iLocal_99);
	}
	if (!AICOVERPOINT::_0xC276FE69DDA22BAD(iLocal_49))
	{
		iLocal_49 = TASK::ADD_COVER_POINT(vLocal_50, fLocal_53, 1, 0, 0, false);
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_17, true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_92, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_17, 204, true);
	WEAPON::SET_CURRENT_PED_WEAPON(iLocal_17, joaat("WEAPON_UNARMED"), true, 0, false, false);
	WEAPON::SET_CURRENT_PED_WEAPON(iLocal_17, joaat("WEAPON_UNARMED"), true, 1, false, false);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	if (__LIB_0__::func_71(iLocal_17))
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_77, 1.25f, 20000, 0.25f, 0, 40000f);
		TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
	}
	TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, vLocal_50, -1, 0, 0, 0, 0, iLocal_49, 0, 0, 0);
	TASK::CLOSE_SEQUENCE_TASK(iVar0);
	TASK::TASK_PERFORM_SEQUENCE(iLocal_17, iVar0);
	TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	Global_1392388.f_3 = iLocal_17;
	bLocal_80 = true;
}

void func_537()
{
	if (!__LIB_0__::func_272(iLocal_17, 1))
	{
		return;
	}
	WEAPON::_0xB832F1A686B9B810(iLocal_17, 1, 1);
	if (!__LIB_6__::func_769(iLocal_99))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_233, false) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_233) >= 0.667634f)
		{
			__LIB_5__::func_414(iLocal_99, 16384, 1);
		}
	}
	switch (iLocal_659)
	{
		case 0:
			if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_17, true, false), vLocal_50) < 5f)
			{
				iLocal_659 = 3;
			}
			break;
		case 3:
			func_942();
			break;
		case 4:
			iLocal_659 = 5;
			break;
	}
}

void func_540()
{
	func_944(iLocal_17, 0, &uLocal_213, cLocal_202, func_943(), &uLocal_210, &uLocal_218, 0, 10, 2, 0, 0);
	if (!__LIB_0__::func_71(Global_35))
	{
		if (!bLocal_209)
		{
			if (iLocal_667 != 1)
			{
				func_531(1);
			}
			if (!__LIB_1__::func_587(7))
			{
				__LIB_1__::func_718(7);
			}
			if (__LIB_1__::func_685(9))
			{
				__LIB_0__::func_745(9);
			}
		}
	}
	else
	{
		if (__LIB_1__::func_587(7))
		{
			__LIB_1__::func_721(7);
		}
		if (!__LIB_1__::func_685(9))
		{
			__LIB_0__::func_900(9);
		}
		if (__LIB_0__::func_94(iLocal_17, Global_36, 1) > 100f)
		{
			if (iLocal_667 != 3)
			{
				func_531(3);
			}
		}
		else if (iLocal_667 != 2 && __LIB_0__::func_94(iLocal_17, Global_36, 1) < 30f)
		{
			func_531(2);
		}
	}
}

void func_541()
{
	vector3 vVar0[24];
	if (iLocal_649 >= 3)
	{
		return;
	}
	if (!__LIB_0__::func_71(iLocal_17))
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
	if (!__LIB_0__::func_75(&uLocal_646))
	{
		__LIB_1__::func_148(&uLocal_646);
	}
	if (__LIB_0__::func_265(&uLocal_646) < 15f)
	{
		return;
	}
	StringCopy(&cVar0, "CHRC4_MOUNTUP", 24);
	if (__LIB_1__::func_104(&uLocal_100, cVar0, 0, -1, 0, 0))
	{
		iLocal_649++;
		__LIB_1__::func_148(&uLocal_646);
	}
}

void func_542()
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	float fVar7;
	vector3 vVar8;
	if (__LIB_0__::func_91())
	{
		return;
	}
	vVar1 = { 1858.515f, -1831.026f, 42.245f };
	vVar4 = { 1832.254f, -1816.465f, 44.4028f };
	fVar7 = 162.9372f;
	vVar8 = { 1893.242f, -1860.04f, 42.1507f };
	if (__LIB_0__::func_272(iLocal_92, 1))
	{
		if (!__LIB_0__::func_71(iLocal_17))
		{
			if ((__LIB_0__::func_94(iLocal_17, Global_36, 1) < 6f || __LIB_0__::func_94(iLocal_17, vVar8, 1) < 10f) || __LIB_0__::func_94(iLocal_17, vVar8, 1) < BUILTIN::VDIST(Global_36, vVar8))
			{
				if (!__LIB_0__::func_163(iLocal_17, 242628503))
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_MOUNT_ANIMAL(0, iLocal_92, 90000, -1, 1f, 513, 0, 0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar1, 1.001f, -1, 0.25f, 1, 40000f);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar4, 1.001f, -1, 0.25f, 0, fVar7);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_17, iVar0);
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				}
			}
			else if (__LIB_0__::func_665(iLocal_17, iLocal_92, 1, 1) > 10f)
			{
				if (!__LIB_0__::func_163(iLocal_17, -875674219))
				{
					__LIB_2__::func_45(iLocal_17, Global_35, -1);
				}
			}
		}
	}
}

void func_545()
{
	vector3 vVar0[24];
	if (bLocal_211)
	{
		return;
	}
	if (__LIB_0__::func_94(iLocal_17, vLocal_206, 1) > 50f)
	{
		return;
	}
	if (__LIB_5__::func_236(1))
	{
		return;
	}
	StringCopy(&cVar0, "CHRC4_P4", 24);
	if (__LIB_1__::func_104(&uLocal_100, cVar0, 0, -1, 0, 0))
	{
		bLocal_211 = true;
	}
}

void func_546()
{
	if (!bLocal_80)
	{
		if (__LIB_0__::func_272(iLocal_17, 0))
		{
			if (__LIB_0__::func_94(iLocal_17, vLocal_206, 1) < 6f)
			{
				if (!__LIB_0__::func_163(iLocal_17, -982327190))
				{
					TASK::TASK_STAND_STILL(iLocal_17, -1);
				}
			}
		}
	}
}

void func_547(int iParam0)
{
	vector3 vVar0[24];
	if (iLocal_663 > 0)
	{
		if (!bLocal_198)
		{
			func_531(6);
			bLocal_198 = true;
		}
	}
	if (!__LIB_6__::func_702(1))
	{
		return;
	}
	if (!__LIB_0__::func_272(iLocal_96, 1))
	{
		if (iLocal_663 != 4)
		{
			iLocal_663 = 4;
		}
		return;
	}
	if (!__LIB_0__::func_266(iLocal_96, Global_36, iParam0, 1, 1))
	{
		return;
	}
	switch (iLocal_663)
	{
		case 0:
			if (!__LIB_5__::func_236(1))
			{
				StringCopy(&cVar0, "CHRC4_MARAGGRO", 24);
				if (__LIB_1__::func_104(&uLocal_100, cVar0, 0, -1, 0, 0))
				{
					iLocal_663 = 4;
				}
			}
			break;
	}
}

void func_549()
{
	bool bVar0;
	if (bLocal_76)
	{
		return;
	}
	if (!__LIB_0__::func_272(iLocal_17, 1))
	{
		return;
	}
	bVar0 = false;
	if (!AICOVERPOINT::_0xC276FE69DDA22BAD(iLocal_59))
	{
		iLocal_59 = TASK::ADD_COVER_POINT(vLocal_60, fLocal_63, 2, 0, 0, false);
	}
	if (!AICOVERPOINT::_0xC276FE69DDA22BAD(iLocal_64))
	{
		iLocal_64 = TASK::ADD_COVER_POINT(vLocal_65, fLocal_68, 3, 2, 0, false);
	}
	if (!PED::IS_PED_IN_COVER(iLocal_17, false, false))
	{
		if (BUILTIN::VDIST(Global_36, vLocal_60) > 3f && !bVar0)
		{
			if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_17, true, false), vLocal_69) < 3f)
			{
				if (AICOVERPOINT::_0xC276FE69DDA22BAD(iLocal_59))
				{
					if (!__LIB_0__::func_163(iLocal_17, -1716541277))
					{
						TASK::TASK_SEEK_COVER_TO_COVER_POINT(iLocal_17, iLocal_59, vLocal_46, -1, 0, 0, 0);
					}
				}
			}
			else if (!__LIB_0__::func_163(iLocal_17, 713668775))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_17, vLocal_69, 3f, 20000, 0.25f, 0, 40000f);
			}
		}
		else if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_17, true, false), vLocal_65) < 3f)
		{
			if (AICOVERPOINT::_0xC276FE69DDA22BAD(iLocal_64))
			{
				if (!__LIB_0__::func_163(iLocal_17, -1716541277))
				{
					TASK::TASK_SEEK_COVER_TO_COVER_POINT(iLocal_17, iLocal_64, vLocal_46, -1, 0, 0, 0);
				}
			}
		}
		else if (!__LIB_0__::func_163(iLocal_17, 713668775))
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_17, vLocal_65, 3f, 20000, 0.25f, 0, 40000f);
		}
	}
	else if (!PED::IS_PED_IN_COMBAT(iLocal_17, 0))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_17, false);
		TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(iLocal_17, ENTITY::GET_ENTITY_COORDS(iLocal_17, true, false), 100f, 0, 22);
		bLocal_76 = true;
	}
}

bool func_551()
{
	if (PED::IS_PED_SHOOTING(Global_35) && bLocal_209)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_1392388.f_5))
		{
			return true;
		}
		else if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1392388.f_5, true, false), Global_36) > 100f && !__LIB_1__::func_374(Global_35, ENTITY::GET_ENTITY_COORDS(Global_1392388.f_5, true, false), 0.5f))
		{
			return true;
		}
	}
	return false;
}

void func_553()
{
	vector3 vVar0[24];
	if (iLocal_653 >= 3)
	{
		return;
	}
	if (__LIB_5__::func_236(1))
	{
		return;
	}
	if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_17, true, false), Global_36) > 30f)
	{
		return;
	}
	if (__LIB_6__::func_702(1))
	{
		return;
	}
	if (PED::IS_PED_IN_COVER(Global_35, false, false) || PED::IS_PED_AIMING_FROM_COVER(Global_35))
	{
		return;
	}
	if (!__LIB_0__::func_75(&uLocal_650))
	{
		__LIB_1__::func_148(&uLocal_650);
	}
	if (__LIB_0__::func_265(&uLocal_650) < 15f)
	{
		return;
	}
	StringCopy(&cVar0, "CHRC4_COVERDAWD", 24);
	if (__LIB_1__::func_104(&uLocal_100, cVar0, 0, -1, 0, 0))
	{
		iLocal_653++;
		__LIB_1__::func_148(&uLocal_650);
	}
}

int func_556()
{
	int iVar0;
	int iVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1392388.f_5))
	{
		return 0;
	}
	iVar0 = Global_1392388.f_5;
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 1);
	}
	if (__LIB_0__::func_272(iVar1, 1))
	{
		return iVar1;
	}
	return 0;
}

void func_596(var uParam0)
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

bool func_607(int iParam0, int iParam1, vector3 vParam2, var uParam5, float fParam6)
{
	int iVar0;
	if (*uParam5 != 5)
	{
		if (__LIB_6__::func_702(2048))
		{
			*uParam5 = 5;
		}
	}
	switch (*uParam5)
	{
		case 0:
			if (!__LIB_0__::func_75(&(uParam5->f_1)))
			{
				uParam5->f_4 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
				__LIB_1__::func_148(&(uParam5->f_1));
			}
			else if (__LIB_0__::func_265(&(uParam5->f_1)) >= fParam6)
			{
				if (__LIB_0__::func_71(iParam0))
				{
					*uParam5 = 3;
				}
				else if (__LIB_0__::func_665(iParam0, iParam1, 1, 1) < 30f)
				{
					*uParam5 = 2;
				}
				else
				{
					TASK::CLEAR_PED_TASKS(iParam0, true, false);
					__LIB_1__::func_326(iParam0, 869278708, joaat("UNSPECIFIED"));
					__LIB_1__::func_148(&(uParam5->f_1));
					uParam5->f_7 = 1;
					if (__LIB_0__::func_272(iParam1, 0))
					{
						TASK::TASK_GO_TO_WHISTLE(iParam1, iParam0, 0);
					}
					*uParam5 = 2;
				}
			}
			break;
		case 2:
			if (!__LIB_0__::func_71(iParam0))
			{
				if (__LIB_0__::func_272(iParam1, 0))
				{
					if (uParam5->f_7)
					{
						if (!__LIB_0__::func_163(iParam1, 2043986356))
						{
							TASK::TASK_GO_TO_WHISTLE(iParam1, iParam0, 0);
						}
					}
					if (!__LIB_0__::func_163(iParam0, -859057915))
					{
						if ((uParam5->f_7 && __LIB_0__::func_665(iParam0, iParam1, 1, 1) > 20f) && __LIB_0__::func_265(&(uParam5->f_1)) < 10f)
						{
							if (!__LIB_0__::func_163(iParam0, 1868526510))
							{
								TASK::TASK_MOUNT_ANIMAL(iParam0, iParam1, -1, -1, 1f, 1, 0, 0);
							}
						}
						else
						{
							TASK::OPEN_SEQUENCE_TASK(&iVar0);
							TASK::TASK_MOUNT_ANIMAL(0, iParam1, -1, -1, 2f, 1, 0, 0);
							TASK::_TASK_MOVE_IN_TRAFFIC_2(0, vParam2, 1073741824 /* Float: 2f */, 2.5f, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(iVar0);
							TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar0);
							TASK::CLEAR_SEQUENCE_TASK(&iVar0);
							PED::SET_PED_KEEP_TASK(iParam0, true);
							*uParam5 = 5;
						}
					}
				}
			}
			else
			{
				*uParam5 = 3;
			}
			break;
		case 3:
			__LIB_1__::func_148(&(uParam5->f_1));
			TASK::_TASK_MOVE_IN_TRAFFIC_2(iParam0, vParam2, 1073741824 /* Float: 2f */, 2.5f, 0, 0);
			PED::SET_PED_KEEP_TASK(iParam0, true);
			*uParam5 = 5;
			break;
		case 5:
			return true;
	}
	return false;
}

void func_614(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_614(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_614(iVar2, vParam1, fParam4, iParam5, iParam6);
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

bool func_660(var uParam0)
{
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	iLocal_539 = uParam0->f_7;
	switch (uParam0->f_7)
	{
		case 0:
			if (func_215())
			{
				if (!__LIB_0__::func_75(&uLocal_215))
				{
					__LIB_6__::func_772();
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, 1892.877f, -1863.889f, 42.17f, 344.0518f, true, false, true);
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_17, 1894.281f, -1861.239f, 42.1507f, 57.4585f, true, false, true);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					__LIB_1__::func_148(&uLocal_215);
				}
				else if (__LIB_0__::func_265(&uLocal_215) > 1f && func_1085())
				{
					__LIB_0__::func_569(joaat("MOTIONSTATE_WALK"), 1500, 0, 1, 1, 0, 0, 0);
					__LIB_0__::func_37(&uLocal_215);
					__LIB_6__::func_723();
					AUDIO::TRIGGER_MUSIC_EVENT("CACR04_RESTART_1");
					iLocal_657 = 1;
					return true;
				}
			}
			break;
		case 1:
			if (func_215())
			{
				if (func_1088())
				{
					if (!__LIB_0__::func_75(&uLocal_215))
					{
						__LIB_6__::func_772();
						__LIB_1__::func_148(&uLocal_215);
						WEAPON::SET_CURRENT_PED_WEAPON(iLocal_17, joaat("WEAPON_UNARMED"), true, 0, false, false);
						WEAPON::SET_CURRENT_PED_WEAPON(iLocal_17, joaat("WEAPON_UNARMED"), true, 1, false, false);
						__LIB_0__::func_900(9);
					}
					else if (__LIB_0__::func_265(&uLocal_215) > 1f && func_1085())
					{
						__LIB_0__::func_37(&uLocal_215);
						__LIB_6__::func_723();
						__LIB_2__::func_761(vLocal_206, 400f, 0, 0);
						__LIB_1__::func_572(vLocal_206, 400f, 0, 0, 0, 0, 0);
						AUDIO::TRIGGER_MUSIC_EVENT("CACR04_RESTART_1");
						iLocal_657 = 1;
						return true;
					}
				}
			}
			break;
		case 2:
			if (func_215())
			{
				if (func_1088())
				{
					if (!__LIB_0__::func_75(&uLocal_215))
					{
						__LIB_6__::func_772();
						__LIB_1__::func_148(&uLocal_215);
					}
					else if (__LIB_0__::func_265(&uLocal_215) > 2f && func_1085())
					{
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(-59.9606f, 1f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10.5955f, 1f);
						__LIB_0__::func_37(&uLocal_215);
						__LIB_6__::func_723();
						__LIB_2__::func_761(vLocal_206, 400f, 0, 0);
						__LIB_1__::func_572(vLocal_206, 400f, 0, 0, 0, 0, 0);
						bLocal_209 = true;
						bLocal_80 = true;
						bLocal_211 = true;
						Global_1392388.f_3 = iLocal_17;
						AUDIO::TRIGGER_MUSIC_EVENT("CACR04_RESTART_1");
						iLocal_657 = 1;
						return true;
					}
				}
			}
			break;
		case 3:
			if (func_215())
			{
				if (func_1091() && func_1085())
				{
					func_1092();
					__LIB_6__::func_723();
					AUDIO::TRIGGER_MUSIC_EVENT("CACR04_RESTART_1");
					func_237(Local_280.f_152, &Local_280);
					iLocal_657 = 4;
					return true;
				}
			}
			break;
	}
	return false;
}

int func_668(int iParam0, int iParam1)
{
	var uVar0;
	return func_1096(&uVar0, iParam0, iParam1);
}

void func_828(bool bParam0)
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
		func_1220(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_133(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_432(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_1225(Var0);
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

void func_831(bool bParam0)
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
		func_432(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_432(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_432(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_432(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_432(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_432(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_432(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_432(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_432(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_432(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_432(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
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

int func_877(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
							iVar49 = (iVar49 + func_877(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_877(iVar63, -915411861, 1, 0, 0));
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
	Var1.f_6 = { func_1280() };
	Var1.f_9 = func_1281();
	iLocal_91 = __LIB_4__::func_720(&uVar0, &Var1);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_91))
	{
		if (__LIB_0__::func_272(iLocal_91, 1))
		{
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_91, 48, true);
			TASK::TASK_STAND_STILL(iLocal_91, -1);
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
				iVar0 = func_1282(iParam1, bParam3, bParam8, iParam9, iParam10, iParam11, iParam12, bParam7, bParam15, bParam16, iParam17);
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

void func_942()
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4[24];
	vector3 vVar7[24];
	if (__LIB_0__::func_75(&uLocal_654) && __LIB_0__::func_265(&uLocal_654) > 0.3f)
	{
		__LIB_0__::func_37(&uLocal_654);
		PED::_SET_PED_CROUCH_MOVEMENT(iLocal_17, false, 0, false);
	}
	switch (iLocal_666)
	{
		case 0:
			if (iLocal_661 >= 5)
			{
				if (!func_1304())
				{
					return;
				}
				sLocal_239 = "PBL_THERE_IT_IS";
				ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_233, sLocal_239);
				iLocal_666 = 1;
			}
			else
			{
				func_1305();
			}
			break;
		case 1:
			if (!func_1304())
			{
				return;
			}
			if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_233, sLocal_239))
			{
				vVar1 = { ENTITY::GET_ENTITY_COORDS(iLocal_17, true, false) };
				vVar1.f_2 = (vVar1.z - 10f);
				iLocal_246 = WEAPON::_CREATE_WEAPON_OBJECT(joaat("WEAPON_REVOLVER_CATTLEMAN"), 24, vVar1, true, 1f);
				ENTITY::SET_ENTITY_COLLISION(iLocal_246, false, false);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_233, "pistol_lenny", iLocal_246, 0);
				if (__LIB_0__::func_94(iLocal_17, Global_36, 1) < 25f)
				{
					__LIB_6__::func_763(iLocal_233, sLocal_239);
				}
				sLocal_238 = "there_it_is_lenny";
				ANIMSCENE::_0xAE6ADA8FE7E84ACC(iLocal_233, sLocal_239);
				iLocal_665 = 0;
				AUDIO::TRIGGER_MUSIC_EVENT("CACR04_COACH");
				iLocal_666 = 2;
			}
			break;
		case 2:
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_238))
			{
				if (!bLocal_538)
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_17, sLocal_237, sLocal_238, 1) && ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_17, sLocal_237, sLocal_238) >= 0.30353f)
					{
						WEAPON::SET_CURRENT_PED_WEAPON(iLocal_17, WEAPON::_0x9F67929D98E7C6E8(iLocal_17, joaat("GROUP_REVOLVER"), 0, 0), true, 0, false, false);
						bLocal_538 = true;
					}
				}
				if ((!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_17, sLocal_237, sLocal_238, 1) && BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_17, true, false), ENTITY::GET_ENTITY_COORDS(Global_1392388.f_5, true, false)) < 35f) || ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_17, sLocal_237, sLocal_238) > 0.86f)
				{
					if (__LIB_0__::func_272(iLocal_94, 0))
					{
						__LIB_0__::func_325(&iLocal_537);
						OBJECT::DELETE_OBJECT(&iLocal_246);
						__LIB_6__::func_705(8);
						TASK::REMOVE_ALL_COVER_BLOCKING_AREAS();
						PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_17, false);
						PED::_0x8ACC0506743A8A5C(iLocal_17, joaat("ROBPED"), 2, -1082130432 /* Float: -1f */);
						TASK::OPEN_SEQUENCE_TASK(&iVar0);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY_USING_COMBAT_STYLE(0, vLocal_46, iLocal_94, 2f, 0, 1.5f, 1082130432 /* Float: 4f */, 1, 1, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
						TASK::TASK_STAND_STILL(0, 500);
						TASK::TASK_AIM_AT_ENTITY(0, iLocal_94, -1, 0, 1);
						TASK::CLOSE_SEQUENCE_TASK(iVar0);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_17, iVar0);
						TASK::CLEAR_SEQUENCE_TASK(&iVar0);
						func_531(5);
						__LIB_1__::func_148(&uLocal_654);
						iLocal_666 = 3;
					}
				}
			}
			break;
		case 3:
			if (!bLocal_250)
			{
				if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_17, true, false), ENTITY::GET_ENTITY_COORDS(Global_1392388.f_5, true, false)) < (40f - 21f))
				{
					VEHICLE::BRING_VEHICLE_TO_HALT(Global_1392388.f_5, 5f, 3, false);
					bLocal_250 = true;
				}
			}
			if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_17, true, false), ENTITY::GET_ENTITY_COORDS(Global_1392388.f_5, true, false)) < (40f - 22f))
			{
				if (!func_1307())
				{
					return;
				}
				sLocal_239 = "PBL_ROBBERY";
				ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_234, sLocal_239);
				iLocal_666 = 4;
			}
			break;
		case 4:
			if (!func_1307())
			{
				return;
			}
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_234, "stagecoach", Global_1392388.f_5, 0);
			__LIB_6__::func_717(Global_1392388.f_5, 1);
			__LIB_6__::func_718(Global_1392388.f_5, 1);
			__LIB_6__::func_826(Global_1392388.f_5, 1);
			__LIB_6__::func_763(iLocal_234, sLocal_239);
			PED::_0x2208438012482A1A(iLocal_96, false, false);
			PED::_0x2208438012482A1A(iLocal_97, false, false);
			ENTITY::SET_ENTITY_HEADING(iLocal_17, 165f);
			TASK::TASK_PLAY_ANIM(iLocal_17, sLocal_237, "robbery_lenny", 2f, -2f, -1, 16388, 0f, false, 0, false, 0, false);
			PED::_0x2208438012482A1A(iLocal_17, false, false);
			sLocal_238 = "robbery_lenny";
			ANIMSCENE::_0xAE6ADA8FE7E84ACC(iLocal_234, sLocal_239);
			iLocal_666 = 5;
			break;
		case 5:
			func_1311();
			if (!bLocal_544)
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_17, sLocal_237, "robbery_lenny", 1) && ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_17, sLocal_237, "robbery_lenny") > 0.958f)
				{
					StringCopy(&cVar7, "CHRC4_LENRUN", 24);
					if (__LIB_1__::func_104(&uLocal_100, cVar7, 0, -1, 0, 0))
					{
						bLocal_544 = true;
					}
				}
			}
			if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_96, iLocal_234) && ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_234) >= 22.26f)
			{
				if (__LIB_2__::func_343(iLocal_96, Global_1392388.f_5, 0))
				{
					PED::_0xE0B61ED8BB37712F(iLocal_96);
				}
			}
			if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_97, iLocal_234) && ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_234) >= 23.71f)
			{
				if (__LIB_2__::func_343(iLocal_97, Global_1392388.f_5, 0))
				{
					PED::_0xE0B61ED8BB37712F(iLocal_97);
				}
			}
			if (!__LIB_0__::func_272(iLocal_94, 0))
			{
				if (!bLocal_248)
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_234, "driver", iLocal_94);
					bLocal_248 = true;
				}
			}
			else if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_234) >= 0.94f)
			{
				if (!bLocal_276)
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_94, 0, 0);
					bLocal_276 = true;
				}
			}
			if (!__LIB_0__::func_272(iLocal_95, 0))
			{
				if (!bLocal_249)
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_234, "passenger", iLocal_95);
					bLocal_249 = true;
				}
			}
			else if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_234) >= 0.9f)
			{
				if (!bLocal_275)
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_95, 0, 0);
					bLocal_275 = true;
				}
			}
			if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_234) > 0.8f)
			{
				func_547(1112014848 /* Float: 50f */);
			}
			if (!ENTITY::IS_ENTITY_DEAD(Global_1392388.f_5))
			{
				if (ENTITY::GET_ENTITY_SPEED(Global_1392388.f_5) < 0.1f)
				{
					if (!ENTITY::_IS_ENTITY_FROZEN(Global_1392388.f_5))
					{
						__LIB_6__::func_770(Global_1392388.f_5);
						__LIB_6__::func_717(Global_1392388.f_5, 1);
						__LIB_6__::func_826(Global_1392388.f_5, 1);
						ENTITY::FREEZE_ENTITY_POSITION(Global_1392388.f_5, true);
					}
				}
			}
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_17, sLocal_237, "robbery_lenny", 1) || ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_17, sLocal_237, "robbery_lenny") >= 0.99f)
			{
				func_549();
			}
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_234, false))
			{
				if (__LIB_6__::func_702(1))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_234);
					func_549();
					iLocal_666 = 6;
					StringCopy(&cVar4, "CHRC4_IG2", 24);
					if (__LIB_1__::func_49(&cVar4))
					{
						AUDIO::_0x36559148B78853B3(1, 0, 0);
					}
					return;
				}
			}
			if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_234) > 0.98f && !__LIB_6__::func_702(32768))
			{
				if (__LIB_0__::func_272(iLocal_96, 0))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(iLocal_96, joaat("WEAPON_SHOTGUN_DOUBLEBARREL"), 50, true, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
					TASK::TASK_PLAY_ANIM(iLocal_96, sLocal_268, sLocal_269, 1f, -1f, -1, 1, 0f, false, 0, false, 0, false);
					PED::_0x2208438012482A1A(iLocal_96, false, false);
				}
				if (__LIB_0__::func_272(iLocal_97, 0))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(iLocal_97, joaat("WEAPON_REPEATER_CARBINE"), 50, true, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
					TASK::TASK_PLAY_ANIM(iLocal_97, sLocal_268, sLocal_269, 1f, -1f, -1, 1, 0.2f, true, 0, false, 0, false);
					PED::_0x2208438012482A1A(iLocal_97, false, false);
				}
				if (!ENTITY::IS_ENTITY_DEAD(Global_1392388.f_5))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Global_1392388.f_5, false);
				}
				__LIB_6__::func_705(32768);
				iLocal_666 = 6;
			}
			break;
	}
}

float func_943()
{
	vector3 vVar0;
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iLocal_17, true, false) };
	if (__LIB_1__::func_652())
	{
		return 1.25f;
	}
	if (BUILTIN::VDIST(vVar0, vLocal_206) < 30f)
	{
		if (!bLocal_525)
		{
			bLocal_526 = BUILTIN::VDIST(vVar0, vLocal_77);
			bLocal_525 = true;
		}
		return 1.25f;
	}
	return 1.75f;
}

void func_944(int iParam0, int iParam1, var uParam2, char* sParam3, float fParam4, var uParam5, var uParam6, bool bParam7, int iParam8, int iParam9, bool bParam10, int iParam11)
{
	float fVar0;
	float fVar1;
	int iVar2;
	if (fParam4 <= 1.25f && __LIB_1__::func_652())
	{
		fVar1 = 15f;
		fVar0 = 20f;
	}
	else
	{
		fVar1 = 25f;
		fVar0 = 35f;
	}
	if (bParam10)
	{
		iVar2 = 25610;
	}
	else
	{
		iVar2 = 25602;
	}
	if (__LIB_0__::func_407(iParam0) && __LIB_1__::func_679(iParam0))
	{
		__LIB_1__::func_640(__LIB_4__::func_656(iParam0));
	}
	if (iParam1 != 0)
	{
		if (__LIB_0__::func_407(iParam1) && __LIB_1__::func_679(iParam1))
		{
			__LIB_1__::func_640(__LIB_4__::func_656(iParam1));
		}
	}
	if (!*uParam5)
	{
		__LIB_1__::func_714();
		__LIB_3__::func_456(iParam0);
		if (iParam1 != 0)
		{
			__LIB_3__::func_456(iParam1);
		}
		if (!PED::DOES_GROUP_EXIST(*uParam2))
		{
			*uParam2 = PED::CREATE_GROUP(2);
		}
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
		PED::SET_PED_CONFIG_FLAG(iParam0, 279, true);
		PED::SET_PED_AS_GROUP_LEADER(iParam0, *uParam2, false);
		if (iParam1 != 0)
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam1, true);
			PED::SET_PED_CONFIG_FLAG(iParam1, 279, true);
			PED::SET_PED_AS_GROUP_MEMBER(iParam1, *uParam2);
		}
		PED::SET_GROUP_FORMATION(*uParam2, iParam8);
		TASK::TASK_CLEAR_LOOK_AT(iParam0);
		TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iParam0, sParam3, iParam9, iVar2, -1, 0, 0, -1);
		PLAYER::_0xAC22AA6DF4D1C1DE(PLAYER::PLAYER_ID(), iParam0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 4, 2, 0);
		PLAYER::_0xDD33A82352C4652F(PLAYER::PLAYER_ID(), iParam0, 1);
		*uParam5 = 1;
	}
	if (__LIB_0__::func_272(iParam0, 0))
	{
		if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iParam0, 0))
		{
			if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iParam0, true))
			{
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iParam0, sParam3, iParam9, 25610, -1, 0, 0, -1);
			}
		}
		else
		{
			__LIB_6__::func_713(iParam0, fParam4, 0, 1045220557 /* Float: 0.2f */, 1, 1077936128 /* Float: 3f */, fVar1, fVar0, 1033476506 /* Float: 0.075f */, 1061158912 /* Float: 0.75f */, 1, 1, 1045220557 /* Float: 0.2f */, iParam11);
		}
	}
	if (iParam1 != 0)
	{
		if (__LIB_0__::func_272(iParam1, 0))
		{
			if (!*uParam6)
			{
				if (__LIB_0__::func_665(iParam1, iParam0, 1, 1) > 50f || (bParam7 && __LIB_0__::func_665(iParam1, iParam0, 1, 1) > 10f))
				{
					*uParam6 = 1;
				}
			}
			else
			{
				if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iParam1, 0))
				{
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iParam1, sParam3, 0, 8, -1, 0, 0, -1);
				}
				else
				{
					__LIB_6__::func_808(iParam1, 2.5f);
				}
				if (__LIB_0__::func_665(iParam1, iParam0, 1, 1) < 12f)
				{
					if (!bParam7)
					{
						TASK::CLEAR_PED_TASKS(iParam1, true, false);
						PED::SET_PED_CONFIG_FLAG(iParam1, 279, true);
						PED::SET_PED_AS_GROUP_MEMBER(iParam1, PED::GET_PED_GROUP_INDEX(iParam0));
						*uParam6 = 0;
					}
				}
			}
		}
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
		func_1338();
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
			func_614(iVar1, __LIB_1__::func_524(uParam0), __LIB_1__::func_525(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_614(iVar3, __LIB_1__::func_524(uParam0), __LIB_1__::func_525(uParam0), 2, 1073741824 /* Float: 2f */);
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
			func_614(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

bool func_1085()
{
	if (bLocal_527)
	{
		return true;
	}
	if (__LIB_0__::func_205(iLocal_17, __LIB_1__::func_468(1495063555, -1)))
	{
		__LIB_6__::func_810(9, iLocal_17, 1495063555);
		if (!__LIB_6__::func_804(iLocal_17))
		{
			return false;
		}
		__LIB_1__::func_288(9, 1495063555, 1);
		__LIB_1__::func_558(9, iLocal_17, 1495063555, 1);
	}
	bLocal_527 = true;
	return true;
}

bool func_1088()
{
	vector3 vVar0;
	float fVar3;
	vector3 vVar4;
	float fVar7;
	vVar0 = { 1515.777f, -2066.309f, 42.5744f };
	fVar3 = 176.315f;
	vVar4 = { 1514.382f, -2060.406f, 42.592f };
	fVar7 = 180.0761f;
	__LIB_3__::func_618(vLocal_206, 150f, 1, 0, 0, 0, 0);
	PED::_0x9851DE7AEC10B4E1(vLocal_206, 150f, 1, 0);
	if (__LIB_0__::func_272(iLocal_17, 1))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_17, true, true);
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_17, vVar0, fVar3, true, false, true);
	}
	else
	{
		return false;
	}
	if (__LIB_0__::func_272(iLocal_92, 1))
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_92, vVar0, fVar3, true, false, true);
		PED::_SET_PED_ON_MOUNT(iLocal_17, iLocal_92, -1, true);
	}
	else
	{
		return false;
	}
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, vVar4, fVar7, true, false, true);
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_91))
	{
		func_911();
	}
	if (__LIB_0__::func_272(iLocal_91, 1))
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_91, vVar4, fVar7, true, false, true);
	}
	else
	{
		iLocal_91 = __LIB_1__::func_545(joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT"), vVar4, fVar7, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_91))
	{
		return false;
	}
	PED::_SET_PED_ON_MOUNT(Global_35, iLocal_91, -1, true);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
	ENTITY::FREEZE_ENTITY_POSITION(Global_35, false);
	if (iLocal_539 == 2)
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, true, true);
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_17, true, true);
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_91, 1506.364f, -2085.772f, 43.7762f, 210.9086f, true, false, true);
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_92, 1508.222f, -2084.469f, 43.8208f, 177.3938f, true, false, true);
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, vLocal_55, fLocal_58, true, false, true);
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_17, vLocal_50, fLocal_53, true, false, true);
		WEAPON::SET_CURRENT_PED_WEAPON(iLocal_17, joaat("WEAPON_UNARMED"), true, 0, false, false);
		WEAPON::SET_CURRENT_PED_WEAPON(iLocal_17, joaat("WEAPON_UNARMED"), true, 1, false, false);
		if (!AICOVERPOINT::_0xC276FE69DDA22BAD(iLocal_49))
		{
			iLocal_49 = TASK::ADD_COVER_POINT(vLocal_50, fLocal_53, 1, 0, 0, false);
		}
		else if (!PED::IS_PED_IN_COVER(iLocal_17, false, false))
		{
			if (!__LIB_0__::func_163(iLocal_17, -1716541277))
			{
				TASK::TASK_LOOK_AT_COORD(iLocal_17, vLocal_251, -1, 0, 51, 0);
				TASK::TASK_SEEK_COVER_TO_COVER_POINT(iLocal_17, iLocal_49, vLocal_46, -1, 0, 0, 0);
			}
		}
		if (!AICOVERPOINT::_0xC276FE69DDA22BAD(iLocal_54))
		{
			iLocal_54 = TASK::ADD_COVER_POINT(vLocal_55, fLocal_58, 2, 0, 0, false);
		}
		else if (!PED::IS_PED_IN_COVER(Global_35, false, false))
		{
			TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Global_35, vLocal_55, -1, 0, 0f, 1, 1, iLocal_54, 0, 1, 0);
		}
		if (!ENTITY::IS_ENTITY_AT_COORD(Global_35, vLocal_55, 3f, 3f, 3f, false, true, 0) || !ENTITY::IS_ENTITY_AT_COORD(iLocal_17, vLocal_50, 3f, 3f, 3f, false, true, 0))
		{
			return false;
		}
	}
	else if (!ENTITY::IS_ENTITY_AT_COORD(Global_35, vVar4, 3f, 3f, 3f, false, true, 0) || !ENTITY::IS_ENTITY_AT_COORD(iLocal_17, vVar0, 3f, 3f, 3f, false, true, 0))
	{
		return false;
	}
	iLocal_660 = 8;
	return true;
}

bool func_1091()
{
	vector3 vVar0;
	float fVar3;
	int iVar4;
	vVar0 = { 1517.35f, -2115.66f, 43.59f };
	fVar3 = 4.17f;
	iVar4 = joaat("STAGECOACH004X");
	switch (iLocal_664)
	{
		case 0:
			STREAMING::REQUEST_MODEL(iVar4, false);
			func_1092();
			iLocal_664 = 1;
			break;
		case 1:
			if (STREAMING::HAS_MODEL_LOADED(iVar4))
			{
				iLocal_24 = VEHICLE::CREATE_VEHICLE(iVar4, vVar0, fVar3, true, true, false, false);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_24, 0f);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar4);
				iLocal_664 = 2;
			}
			break;
		case 2:
			if (__LIB_6__::func_724(&Local_280, "CALNY_CROB4_EXT", 1, 1))
			{
				bLocal_522 = true;
				__LIB_1__::func_620(&Local_280, Global_35, "ARTHUR", 0, 0, 0);
				__LIB_1__::func_620(&Local_280, iLocal_17, "Lenny", 0, 0, 0);
				__LIB_1__::func_620(&Local_280, iLocal_24, "STAGECOACH004X", 0, 0, 0);
				__LIB_1__::func_620(&Local_280, iLocal_23, "p_cs_treefallen01x", 0, 0, 0);
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_247))
				{
					iLocal_247 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("P_CS_BILLSTACK01X"), vLocal_199, true, true, false, true);
				}
				__LIB_1__::func_620(&Local_280, iLocal_247, "p_cs_billstack01x", 1, 0, 0);
				iLocal_664 = 4;
				return true;
			}
			break;
		case 4:
			return true;
	}
	return false;
}

void func_1092()
{
	vector3 vVar0;
	float fVar3;
	vector3 vVar4;
	float fVar7;
	vector3 vVar8;
	float fVar11;
	vector3 vVar12;
	float fVar15;
	vVar0 = { 1522.5f, -2093.94f, 43.38f };
	fVar3 = -179.77f;
	vVar4 = { 1506.36f, -2085.77f, 43.77f };
	fVar7 = -149.08f;
	vVar8 = { 1508.78f, -2098.3f, 44.31f };
	fVar11 = -113.96f;
	vVar12 = { 1506.36f, -2085.77f, 43.77f };
	fVar15 = -149.08f;
	__LIB_3__::func_618(vLocal_206, 150f, 1, 0, 0, 0, 0);
	PED::_0x9851DE7AEC10B4E1(vLocal_206, 150f, 1, 0);
	if (__LIB_0__::func_272(iLocal_17, 1))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_17, true, true);
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_17, vVar0, fVar3, true, false, true);
	}
	if (__LIB_0__::func_272(iLocal_92, 1))
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_92, vVar4, fVar7, true, false, true);
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_92, 48, true);
		TASK::TASK_STAND_STILL(iLocal_92, -1);
	}
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, vVar8, fVar11, true, false, true);
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_91))
	{
		func_911();
	}
	if (__LIB_0__::func_272(iLocal_91, 1))
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_91, vVar12, fVar15, true, false, true);
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_91, 48, true);
		TASK::TASK_STAND_STILL(iLocal_91, -1);
	}
}

int func_1096(var uParam0, int iParam1, int iParam2)
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
		return func_1096(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

void func_1220(int iParam0)
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
	func_432(iParam0, 1, 1, -142743235, 1);
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
		func_432(uVar18[iVar36], 1, 1, -142743235, 1);
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

void func_1225(struct<6> Param0)
{
	if (!func_1485(Param0.f_4, 1))
	{
	}
	if (!func_1485(Param0, 1))
	{
	}
	if (!func_1485(Param0.f_2, 1))
	{
	}
	if (!func_1485(Param0.f_5, 1))
	{
	}
	if (!func_1485(Param0.f_3, 1))
	{
	}
	if (!func_1485(Param0.f_1, 1))
	{
	}
}

Vector3 func_1280()
{
	switch (iLocal_539)
	{
		case 1:
			return 1514.382f, -2060.406f, 42.592f;
		case 2:
			return 1506.364f, -2085.772f, 43.7762f;
		case 3:
			return 1506.364f, -2085.772f, 43.7762f;
		default:
			break;
	}
	return 1853.818f, -1836.236f, 42.0151f;
	return 0f, 0f, 0f;
}

float func_1281()
{
	switch (iLocal_539)
	{
		case 1:
			return 180.0761f;
		case 2:
			return 210.9086f;
		case 3:
			return 210.9086f;
		default:
			break;
	}
	return 28.9455f;
	return 0f;
}

int func_1282(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)
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
				if (!__LIB_0__::func_851(iParam0) && func_1513(iParam0, &uVar4))
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
					return func_1514();
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
					return func_1514();
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
				return func_1514();
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
				return func_1514();
			}
			if (bParam7)
			{
				if (!__LIB_1__::func_411(iParam0, Global_1360165[iParam0 /*1157*/].f_124, 1))
				{
					return func_1514();
				}
			}
			if ((bParam2 && !__LIB_0__::func_86(vVar0)) && !__LIB_0__::func_175(vVar0, ENTITY::GET_ENTITY_COORDS(Global_1360165[iParam0 /*1157*/].f_124, true, false), 1056964608 /* Float: 0.5f */, 1))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(Global_1360165[iParam0 /*1157*/].f_124))
				{
					ENTITY::DETACH_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				}
				func_614(Global_1360165[iParam0 /*1157*/].f_124, vVar0, iParam6, 2, 1073741824 /* Float: 2f */);
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
	return func_1514();
}

bool func_1304()
{
	switch (iLocal_665)
	{
		case 0:
			iLocal_233 = ANIMSCENE::_CREATE_ANIM_SCENE(sLocal_235, 64, 0, false, true);
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_233))
			{
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iLocal_233, ENTITY::GET_ENTITY_COORDS(iLocal_17, true, false), 0f, 0f, ENTITY::GET_ENTITY_HEADING(iLocal_17), 2);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_233, "player", Global_35, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_233, "lenny", iLocal_17, 0);
				ANIMSCENE::LOAD_ANIM_SCENE(iLocal_233);
				iLocal_666 = 0;
				iLocal_665 = 1;
			}
			break;
		case 1:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_233))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_233, true, false))
				{
					return true;
				}
			}
			break;
	}
	return false;
}

void func_1305()
{
	if (!__LIB_0__::func_272(iLocal_17, 1))
	{
		return;
	}
	PED::SET_PED_CONFIG_FLAG(iLocal_17, 246, true);
	if (!AICOVERPOINT::_0xC276FE69DDA22BAD(iLocal_49))
	{
		iLocal_49 = TASK::ADD_COVER_POINT(vLocal_50, fLocal_53, 1, 0, 0, false);
	}
	if ((!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_17, sLocal_72, sLocal_74, 1) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_17, sLocal_72, sLocal_73, 1)) && iLocal_661 < 5)
	{
		if (!PED::IS_PED_IN_COVER(iLocal_17, false, false))
		{
			if (!__LIB_0__::func_163(iLocal_17, 242628503) && !__LIB_0__::func_163(iLocal_17, -1959848946))
			{
				TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(iLocal_17, vLocal_50, -1, 0, 0, 0, 0, iLocal_49, 0, 0, 0);
			}
		}
	}
}

bool func_1307()
{
	switch (iLocal_665)
	{
		case 0:
			iLocal_234 = ANIMSCENE::_CREATE_ANIM_SCENE(sLocal_236, 0, 0, false, true);
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_234))
			{
				func_224();
				if (__LIB_0__::func_272(iLocal_94, 0))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_234, "driver", iLocal_94, 0);
				}
				if (__LIB_0__::func_272(iLocal_95, 0))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_234, "passenger", iLocal_95, 0);
				}
				if (__LIB_0__::func_272(iLocal_96, 0))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_234, "marshal_a", iLocal_96, 0);
				}
				if (__LIB_0__::func_272(iLocal_97, 0))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_234, "marshal_b", iLocal_97, 0);
				}
				ANIMSCENE::LOAD_ANIM_SCENE(iLocal_234);
				iLocal_665 = 1;
			}
			break;
		case 1:
			func_1311();
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_234))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_234, true, false))
				{
					ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(iLocal_234, Global_1392388.f_5, -1);
					vLocal_240 = { 0f, 0f, 0f };
					vLocal_243 = { 0f, 0f, 0f };
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iLocal_234, vLocal_240, vLocal_243, 2);
					return true;
				}
			}
			break;
	}
	return false;
}

void func_1311()
{
	if (!__LIB_0__::func_272(iLocal_94, 0))
	{
		if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_94, iLocal_234))
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_234, "driver", iLocal_94);
		}
	}
	if (!__LIB_0__::func_272(iLocal_95, 0))
	{
		if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_95, iLocal_234))
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_234, "passenger", iLocal_95);
		}
	}
	if (!__LIB_0__::func_272(iLocal_96, 0))
	{
		if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_96, iLocal_234))
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_234, "marshal_a", iLocal_96);
		}
	}
	if (!__LIB_0__::func_272(iLocal_97, 0))
	{
		if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_97, iLocal_234))
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_234, "marshal_b", iLocal_97);
		}
	}
}

void func_1338()
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
	iVar0 = func_1537(6291456, 0);
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

bool func_1485(int iParam0, int iParam1)
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
				if (func_1485(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_1485(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_1485(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_1485(iVar21, 1))
				{
				}
			}
		}
		__LIB_1__::func_712();
		return true;
	}
	return false;
}

bool func_1513(int iParam0, char* sParam1)
{
	switch (Global_40.f_4283)
	{
		case 0:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam1, "colter/col_default_horse_bill", 64);
					return true;
				case 7:
					StringCopy(sParam1, "colter/col_default_horse_charles", 64);
					return true;
				case 0:
					StringCopy(sParam1, "colter/col_default_horse_dutch", 64);
					return true;
				case 5:
					StringCopy(sParam1, "colter/col_default_horse_hosea", 64);
					return true;
				case 2:
					StringCopy(sParam1, "colter/col_default_horse_javier", 64);
					return true;
				case 1:
					StringCopy(sParam1, "colter/col_default_horse_john", 64);
					return true;
				case 9:
					StringCopy(sParam1, "colter/col_default_horse_lenny", 64);
					return true;
				case 6:
					StringCopy(sParam1, "colter/col_default_horse_micah", 64);
					return true;
				default:
					break;
			}
			StringCopy(sParam1, "colter/col_default_horses1", 64);
			return true;
		case 1:
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_bill", 64);
					return true;
				case 7:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_charles", 64);
					return true;
				case 0:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_dutch", 64);
					return true;
				case 5:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_hosea", 64);
					return true;
				case 2:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_javier", 64);
					return true;
				case 1:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_john", 64);
					return true;
				case 10:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horses1", 64);
					return true;
				case 9:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_lenny", 64);
					return true;
				case 6:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_micah", 64);
					return true;
				case 11:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_sadie", 64);
					return true;
				case 8:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_sean", 64);
					return true;
				case 4:
					StringCopy(sParam1, "horseshoeOverlook/hso_default_horse_uncle", 64);
					return true;
				default:
					break;
			}
			StringCopy(sParam1, "horseshoeOverlook/hso_default_horses1", 64);
			return true;
			Jump @1317; //curOff = 508
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_bill", 64);
					return true;
				case 7:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_charles", 64);
					return true;
				case 0:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_dutch", 64);
					return true;
				case 5:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_hosea", 64);
					return true;
				case 2:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_javier", 64);
					return true;
				case 1:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_john", 64);
					return true;
				case 10:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_kieran", 64);
					return true;
				case 9:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_lenny", 64);
					return true;
				case 6:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_micah", 64);
					return true;
				case 11:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_sadie", 64);
					return true;
				case 8:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_sean", 64);
					return true;
				case 4:
					StringCopy(sParam1, "clemensPoint/clm_default_horse_uncle", 64);
					return true;
				default:
					break;
			}
			StringCopy(sParam1, "clemensPoint/clm_default_horses1", 64);
			return true;
			Jump @1317; //curOff = 747
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_bill", 64);
					return true;
				case 7:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_charles", 64);
					return true;
				case 0:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_dutch", 64);
					return true;
				case 5:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_hosea", 64);
					return true;
				case 2:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_javier", 64);
					return true;
				case 1:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_john", 64);
					return true;
				case 10:
					StringCopy(sParam1, "shadyBelle/shb_default_horses1", 64);
					return true;
				case 9:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_lenny", 64);
					return true;
				case 6:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_micah", 64);
					return true;
				case 11:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_sadie", 64);
					return true;
				case 4:
					StringCopy(sParam1, "shadyBelle/shb_default_horse_uncle", 64);
					return true;
				default:
					break;
			}
			StringCopy(sParam1, "shadyBelle/shb_default_horses1", 64);
			return true;
			Jump @1317; //curOff = 968
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam1, "lakay/lak_default_horse_bill", 64);
					return true;
				case 7:
					StringCopy(sParam1, "lakay/lak_default_horse_charles", 64);
					return true;
				case 0:
					StringCopy(sParam1, "lakay/lak_default_horse_dutch", 64);
					return true;
				case 2:
					StringCopy(sParam1, "lakay/lak_default_horse_javier", 64);
					return true;
				case 1:
					StringCopy(sParam1, "lakay/lak_default_horse_john", 64);
					return true;
				case 6:
					StringCopy(sParam1, "lakay/lak_default_horse_micah", 64);
					return true;
				case 11:
					StringCopy(sParam1, "lakay/lak_default_horse_sadie", 64);
					return true;
				case 4:
					StringCopy(sParam1, "lakay/lak_default_horses1", 64);
					return true;
				default:
					break;
			}
			StringCopy(sParam1, "lakay/lak_default_horses1", 64);
			return true;
			Jump @1317; //curOff = 1135
			switch (iParam0)
			{
				case 3:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_bill", 64);
					return true;
				case 7:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_charles", 64);
					return true;
				case 0:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_dutch", 64);
					return true;
				case 2:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_javier", 64);
					return true;
				case 1:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_john", 64);
					return true;
				case 6:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_micah", 64);
					return true;
				case 11:
					StringCopy(sParam1, "beaverHollow/bvh_default_horse_sadie", 64);
					return true;
				case 4:
					StringCopy(sParam1, "beaverHollow/bvh_default_horses1", 64);
					return true;
				default:
					break;
			}
			StringCopy(sParam1, "beaverHollow/bvh_default_horses1", 64);
			return true;
			Jump @1317; //curOff = 1302
			StringCopy(sParam1, "beechersHope/bch_default_horses", 64);
			return true;
			return false;
		}
int func_1514()
{
	return -1;
}

int func_1537(int iParam0, int iParam1)
{
	var uVar0;
	return func_1621(&uVar0, iParam0, iParam1);
}

int func_1621(var uParam0, int iParam1, int iParam2)
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
		return func_1621(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

