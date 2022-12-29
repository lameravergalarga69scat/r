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
	struct<62> Local_14 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	struct<2> Local_116 = { 0, 0 } ;
	var uLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122[5] = { 0, 0, 0, 0, 0 };
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
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
	struct<10> Local_166[4];
	int iLocal_207 = 0;
	int iLocal_208 = 0;
	int iLocal_209 = 0;
	int iLocal_210 = 0;
	int iLocal_211 = 0;
	int iLocal_212 = 0;
	int iLocal_213 = 0;
	int iLocal_214 = 0;
	int iLocal_215 = 0;
	int iLocal_216 = 0;
	int iLocal_217 = 0;
	char* sLocal_218 = NULL;
	char* sLocal_219 = NULL;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	int iLocal_229 = 0;
	int iLocal_230 = 0;
	int iLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	struct<5> Local_236[12];
	int iLocal_297 = 0;
	int iLocal_298 = 0;
	int iLocal_299 = 0;
	int iLocal_300 = 0;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	int iLocal_307 = 0;
	int iLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	int iLocal_312 = 0;
	var uLocal_313[2] = { 0, 0 };
	int iLocal_316[3] = { 0, 0, 0 };
	vector3 vLocal_320 = { 0f, 0f, 0f };
	vector3 vLocal_323 = { 0f, 0f, 0f };
	vector3 vLocal_326 = { 0f, 0f, 0f };
	vector3 vLocal_329 = { 0f, 0f, 0f };
	vector3 vLocal_332 = { 0f, 0f, 0f };
	vector3 vLocal_335 = { 0f, 0f, 0f };
	vector3 vLocal_338 = { 0f, 0f, 0f };
	vector3 vLocal_341 = { 0f, 0f, 0f };
	int iLocal_344 = 0;
	vector3 vLocal_345 = { 0f, 0f, 0f };
	vector3 vLocal_348 = { 0f, 0f, 0f };
	struct<121> Local_351 = { 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10 } ;
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
	var uLocal_514 = 10;
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
	var uLocal_529 = 10;
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
	var uLocal_544 = -1;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 2;
	var uLocal_549 = 1;
	var uLocal_550 = 1;
	var uLocal_551 = 1;
	var uLocal_552 = 0;
	var uLocal_553 = 1;
	var uLocal_554 = 2;
	var uLocal_555 = 2;
	var uLocal_556 = 3;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 3;
	var uLocal_560 = 1;
	var uLocal_561 = 3;
	var uLocal_562 = 3;
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
	int iLocal_574[4] = { 0, 0, 0, 0 };
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	struct<4> Local_582 = { 0, 0, 0, 0 } ;
	int iLocal_586 = 0;
	int iLocal_587 = 0;
	int iLocal_588 = 0;
	int iLocal_589 = 0;
	int iLocal_590 = 0;
	int iLocal_591 = 0;
	int iLocal_592 = 0;
	int iLocal_593 = 0;
	int iLocal_594 = 0;
	int iLocal_595 = 0;
	int iLocal_596 = 0;
	int iLocal_597 = 0;
	int iLocal_598[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_610[2] = { 0, 0 };
	int iLocal_613 = 0;
	struct<6> Local_614[8];
	int iLocal_663 = 0;
	int iLocal_664 = 0;
	int iLocal_665 = 0;
	float fLocal_666[2] = { 0f, 0f };
	int iLocal_669 = 0;
	int iLocal_670 = 0;
	int iLocal_671 = 0;
	char* sLocal_672 = NULL;
	char* sLocal_673 = NULL;
	char* sLocal_674 = NULL;
	char* sLocal_675 = NULL;
	char* sLocal_676 = NULL;
	char* sLocal_677 = NULL;
	char* sLocal_678 = NULL;
	int iLocal_679 = 0;
	int iLocal_680 = 0;
	int iLocal_681 = 0;
	int iLocal_682 = 0;
	int iLocal_683 = 0;
	int iLocal_684 = 0;
	int iLocal_685 = 0;
	int iLocal_686 = 0;
	int iLocal_687[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_696 = 0;
	int iLocal_697 = 0;
	int iLocal_698 = 0;
	int iLocal_699 = 0;
	bool bLocal_700 = false;
	bool bLocal_701 = false;
	bool bLocal_702 = false;
	int iLocal_703 = 0;
	int iLocal_704 = 0;
	int iLocal_705 = 0;
	int iLocal_706 = 0;
	int iLocal_707 = 0;
	int iLocal_708 = 0;
	int iLocal_709 = 0;
	int iLocal_710 = 0;
	int iLocal_711 = 0;
	int iLocal_712 = 0;
	int iLocal_713 = 0;
	int iLocal_714 = 0;
	int iLocal_715 = 0;
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
	bool bLocal_734 = false;
	vector3 vLocal_735[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	bool bLocal_742 = false;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	float fLocal_752 = 0f;
	float fLocal_753 = 0f;
	int iLocal_754 = 0;
	int iLocal_755 = 0;
	int iLocal_756 = 0;
	var uLocal_757 = 0;
	bool bLocal_758 = false;
	bool bLocal_759 = false;
	bool bLocal_760 = false;
	int iLocal_761 = 0;
	var uLocal_762 = -1;
	var uLocal_763 = 0;
	var uLocal_764 = -1;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = -1;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 1073741824;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 1;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 1106247680;
	var uLocal_788 = 1067450368;
	var uLocal_789 = 0;
	var uLocal_790 = 1092616192;
	var uLocal_791 = 1112014848;
	var uLocal_792 = 1106247680;
	var uLocal_793 = 1101529088;
	var uLocal_794 = 1101004800;
	var uLocal_795 = 1084227584;
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
	struct<17> Local_822[1];
	int iLocal_840[3] = { 0, 0, 0 };
	bool bLocal_844 = false;
	bool bLocal_845 = false;
	bool bLocal_846 = false;
	int iLocal_847 = 0;
	int iLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	int iLocal_858 = 0;
	int iLocal_859 = 0;
	var uLocal_860 = 0;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	int iLocal_866 = 0;
	int iLocal_867 = 0;
	int iLocal_868 = 0;
	int iLocal_869 = 0;
	int iLocal_870 = 0;
	int iLocal_871 = 0;
	char[] cLocal_872[8] = 0;
	int iLocal_873 = 0;
	bool bLocal_874 = false;
	float fLocal_875 = 0f;
	var uLocal_876 = 0;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	int iLocal_882 = 0;
	int iLocal_883 = 0;
	int iLocal_884 = 0;
	var uLocal_885 = 0;
	var uLocal_886 = 0;
	var uLocal_887 = 0;
	int iLocal_888 = 0;
	bool bLocal_889 = false;
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
	bool bLocal_906 = false;
	int iLocal_907 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion
void __EntryFunction__()
{
	struct<2606> Var0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	sLocal_218 = "script@rcm@dtc1@leadin@rsc_2@leadin";
	sLocal_219 = "script@rcm@dtc1@leadin@rsc_2@family_loop";
	vLocal_320 = { 855.3626f, -333.8535f, 82.9148f };
	vLocal_323 = { 895.2161f, -398.2497f, 85.0996f };
	vLocal_326 = { 852.88f, -383.06f, 82.8f };
	vLocal_329 = { 853.8607f, -383.2787f, 81.8f };
	vLocal_332 = { 845.577f, -380.2432f, 82.4145f };
	vLocal_335 = { 678.6031f, -1236.714f, 43.1238f };
	vLocal_338 = { 670.9f, -1266.83f, 43.5f };
	vLocal_341 = { 934.0169f, -421.2245f, 86.6526f };
	sLocal_672 = "script@rcm@DTC1@leadout@RSC_1@LEADOUT";
	sLocal_673 = "script@rcm@DTC1@leadout@RSC_1@base";
	sLocal_674 = "script@rcm@dtc1@ig@rdtc1_ig1_p1";
	sLocal_675 = "script@rcm@dtc1@ig@rdtc1_ig2";
	sLocal_676 = "script@rcm@dtc1@ig@rdtc1_ig4_charles_following_trail";
	sLocal_677 = "script@rcm@dtc1@ig@rdtc1_ig3_callover";
	sLocal_678 = "script@rcm@dtc1@leadin@rsc_4@leadin";
	bLocal_700 = true;
	iLocal_884 = 7;
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
			func_68(uParam0);
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
		iVar0 = func_93(uParam0);
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
			__LIB_13__::func_467();
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
		__LIB_13__::func_510(iVar1, 1, -1082130432 /* Float: -1f */, 1, 1, bVar2, 0);
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
	__LIB_12__::func_656(uParam0, 4f);
	__LIB_12__::func_658(uParam0, 6);
	__LIB_12__::func_659(uParam0, 16);
	Local_582 = { 870.82f, -386.32f, 82.43f };
	Local_582.f_3 = 152.76f;
	func_188();
	func_189(0, Local_14.f_30, Local_14.f_58, 3, "DCH1_TRAIL", "DCH1_TRAILA", "pbl_first_find", 0f, 1);
	func_189(1, Local_14.f_34, Local_14.f_59, 3, "DCH1_HILL", "DCH1_HILLA", "pbl_tracks_searching", 0f, 1);
	func_189(2, Local_14.f_35, Local_14.f_60, 3, "DCH1_HOOF", "DCH1_HOOFA", "pbl_tracks_Searching_b", 4.5f, 1);
	func_189(3, Local_14.f_37, Local_14.f_61, 3, "DCH1_NEAR", "DCH1_NEARA", "pbl_tracks_Searching_d", 0f, 1);
	iLocal_231 = __LIB_4__::func_29(676.4163f, -1243.334f, 44.7338f, 669.569f, -1248.609f, 41.5796f, 676.4163f, -1243.334f, 44.7338f, 5f, 0, 0);
}

void func_42(var uParam0)
{
	__LIB_12__::func_867(uParam0, joaat("CS_DUTCH"), 1);
	__LIB_12__::func_867(uParam0, joaat("CS_HOSEAMATTHEWS"), 1);
	__LIB_12__::func_867(uParam0, joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT"), 7);
	__LIB_12__::func_867(uParam0, joaat("CS_GERMANFATHER"), 7);
	__LIB_12__::func_867(uParam0, joaat("P_CHAIR09X"), 1);
	__LIB_12__::func_867(uParam0, joaat("P_CS_MAP01X"), 1);
	__LIB_12__::func_867(uParam0, joaat("P_INKWELL01X"), 1);
	__LIB_12__::func_867(uParam0, joaat("P_PEN01X"), 1);
	__LIB_12__::func_867(uParam0, joaat("WAGON02X"), 7);
	__LIB_12__::func_867(uParam0, joaat("RCSP_DUTCH1_MALES_01"), 7);
	__LIB_12__::func_867(uParam0, joaat("P_CS_MATTRESS01X"), 7);
	TASK::REQUEST_WAYPOINT_RECORDING("rcm_dutch1_clemens");
	TASK::REQUEST_WAYPOINT_RECORDING("rcm_dutch1_charles_dewberry");
	TASK::REQUEST_WAYPOINT_RECORDING("rcm_dutch1_charles_dewberryB");
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
			Var1 = { -122.6622f, -34.4134f, 94.743f };
			Var1.f_3 = 317.3704f;
			break;
		case 1:
			Var1 = { 679.0068f, -221.3224f, 137.5408f };
			Var1.f_3 = 239.8033f;
			break;
		case 2:
			Var1 = { 681.1254f, -222.9975f, 137.3632f };
			Var1.f_3 = 200.0651f;
			break;
		case 3:
			Var1 = { 674.1045f, -1246.171f, 42.8917f };
			Var1.f_3 = 181.3341f;
			break;
		case 4:
			Var1 = { 671.3093f, -1265.509f, 42.9101f };
			Var1.f_3 = 306.2548f;
			break;
		case 5:
			Var1 = { 667.5341f, -1244.956f, 43.1641f };
			Var1.f_3 = 159.0769f;
			break;
		case 6:
			Var1 = { 683.9704f, -1174.635f, 44.9531f };
			Var1.f_3 = 193.687f;
			break;
	}
	return Var1;
}

bool func_62(var uParam0)
{
	return func_204(*uParam0, uParam0->f_3);
}

bool func_64(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_592) && (ENTITY::IS_ENTITY_DEAD(iLocal_592) || PED::IS_PED_FATALLY_INJURED(iLocal_592)))
	{
		StringCopy(&(uParam0->f_2578), "ALLY_DEAD_HORSE_PLAYER", 24);
		return true;
	}
	if (__LIB_13__::func_203(uParam0, iLocal_300))
	{
		if (func_206() < 4)
		{
			StringCopy(&(uParam0->f_2578), "RDTC1F_FACAMP", 24);
		}
		else
		{
			StringCopy(&(uParam0->f_2578), "RDTC1F_FAMDEAD", 24);
		}
		AUDIO::TRIGGER_MUSIC_EVENT("RDTC1_FAIL");
		return true;
	}
	if (__LIB_13__::func_203(uParam0, iLocal_301))
	{
		if (func_206() < 4)
		{
			StringCopy(&(uParam0->f_2578), "RDTC1F_FACAMP", 24);
		}
		else
		{
			StringCopy(&(uParam0->f_2578), "RDTC1F_FAMDEAD", 24);
		}
		AUDIO::TRIGGER_MUSIC_EVENT("RDTC1_FAIL");
		return true;
	}
	func_207(func_206());
	if (__LIB_2__::func_618(&uLocal_860) && __LIB_5__::func_51(&uLocal_860) > 3f)
	{
		if (func_206() < 4)
		{
			StringCopy(&(uParam0->f_2578), "RDTC1F_FACAMP", 24);
		}
		else if (bLocal_759)
		{
			StringCopy(&(uParam0->f_2578), "RDTC1F_FAMAGGR", 24);
		}
		else
		{
			StringCopy(&(uParam0->f_2578), "RDTC1F_FAMDEAD", 24);
		}
		AUDIO::TRIGGER_MUSIC_EVENT("RDTC1_FAIL");
		return true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_588))
	{
		if (!__LIB_0__::func_272(iLocal_588, 1))
		{
			StringCopy(&(uParam0->f_2578), "RDTC1F_DTCHDEAD", 24);
			AUDIO::TRIGGER_MUSIC_EVENT("RDTC1_FAIL");
			return true;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_298))
	{
		if ((!__LIB_0__::func_272(iLocal_298, 1) || FIRE::IS_ENTITY_ON_FIRE(iLocal_298)) || WEAPON::_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_298, joaat("WEAPON_THROWN_DYNAMITE"), 0))
		{
			StringCopy(&(uParam0->f_2578), "RDTC1F_CHLSDEAD", 24);
			AUDIO::TRIGGER_MUSIC_EVENT("RDTC1_FAIL");
			return true;
		}
	}
	if (func_206() <= 8)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_591))
		{
			if (!__LIB_0__::func_272(iLocal_591, 1) || FIRE::IS_ENTITY_ON_FIRE(iLocal_591))
			{
				StringCopy(&(uParam0->f_2578), "RDTC1F_CHLSHRS", 24);
				AUDIO::TRIGGER_MUSIC_EVENT("RDTC1_FAIL");
				return true;
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_297))
	{
		if (!__LIB_0__::func_272(iLocal_297, 1) || FIRE::IS_ENTITY_ON_FIRE(iLocal_297))
		{
			StringCopy(&(uParam0->f_2578), "RDTC1F_HSTGDEAD", 24);
			AUDIO::TRIGGER_MUSIC_EVENT("RDTC1_FAIL");
			return true;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_297))
	{
		if (__LIB_0__::func_272(iLocal_297, 0) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_297, Global_35, 1, 1))
		{
			StringCopy(&(uParam0->f_2578), "RDTC1F_HSTGATTK", 24);
			AUDIO::TRIGGER_MUSIC_EVENT("RDTC1_FAIL");
			return true;
		}
	}
	if (((func_206() == 8 || func_206() == 9) || func_206() == 11) || func_206() == 12)
	{
		if (__LIB_0__::func_272(iLocal_297, 0) && __LIB_0__::func_665(Global_35, iLocal_297, 1, 1) > 150f)
		{
			StringCopy(&(uParam0->f_2578), "RDTC1F_ABDSET", 24);
			AUDIO::TRIGGER_MUSIC_EVENT("RDTC1_FAIL");
			return true;
		}
	}
	if (iLocal_119 == 2)
	{
		StringCopy(&(uParam0->f_2578), Local_116.f_1, 24);
		AUDIO::TRIGGER_MUSIC_EVENT("RDTC1_FAIL");
		return true;
	}
	if (__LIB_2__::func_173(PLAYER::PLAYER_ID(), 0, 1, 1))
	{
		StringCopy(&(uParam0->f_2578), "RDTC1F_LAW", 24);
		return true;
	}
	return false;
}

void func_68(var uParam0)
{
	switch (iLocal_214)
	{
		case 14:
			if (!bLocal_758)
			{
				HUD::_0xC9CAEAEEC1256E54(724769646);
				CAM::_0xE296208C273BD7F0(0, 0, 0, 17, 1, 0);
			}
			if (GRAPHICS::_0xFBF161FCFEC8589E("ChapterTitle_IntroCh03", 2, false, &uLocal_757))
			{
				CAM::DO_SCREEN_FADE_OUT(0);
			}
			if (GRAPHICS::_0xFBF161FCFEC8589E("ChapterTitle_IntroCh03", 1, false, &uLocal_757))
			{
				GRAPHICS::_0xA201A3D0AC087C37("ChapterTitle_IntroCh03");
				__LIB_11__::func_15(Global_1347702[uParam0->f_174 /*49*/].f_15);
				bLocal_758 = true;
			}
			if (bLocal_758)
			{
				if (func_213(uParam0))
				{
					func_214(15);
				}
			}
			break;
	}
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
	if (func_217(uParam0->f_174))
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
	if (func_226(uParam0) || __LIB_12__::func_663(uParam0->f_174, uParam0->f_743))
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
	func_231(uParam0);
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
			func_246(uParam0);
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
	return iLocal_214;
	switch (iLocal_214)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 10;
		case 3:
			return 2;
		case 4:
			return 3;
		case 5:
			return 11;
		case 6:
			return 12;
		case 7:
			return 4;
		case 8:
			return 5;
		case 9:
			return 13;
		case 10:
			return 6;
		case 11:
			return 14;
		case 12:
			return 7;
		case 14:
			return 8;
		case 15:
			return 9;
	}
	return 0;
}

bool func_85(var uParam0)
{
	if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_13, 64))
	{
		return true;
	}
	if (__LIB_12__::func_924(uParam0) && func_271(uParam0))
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
	func_285(uParam0);
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
	func_287(uParam0);
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
	StringCopy(&(uParam0->f_2575), "RDTC1_RSC_1", 24);
	__LIB_12__::func_779(uParam0, -131.3037f, -32.051f, 95.4496f);
	__LIB_12__::func_957(uParam0, iLocal_588, 0, 0, 0, 0);
	__LIB_12__::func_957(uParam0, Global_35, 0, 0, 0, 0);
	__LIB_12__::func_957(uParam0, iLocal_589, 0, 0, 0, 0);
	__LIB_12__::func_957(uParam0, iLocal_598[2], "p_pen01x", 0, joaat("P_PEN01X"), 0);
	__LIB_12__::func_957(uParam0, iLocal_598[1], "p_cs_map01x", 0, joaat("P_CS_MAP01X"), 0);
	__LIB_12__::func_957(uParam0, iLocal_598[4], "p_cs_mattress01x", 0, joaat("P_CS_MATTRESS01X"), 0);
	__LIB_13__::func_17(&(uParam0->f_206), "1-ILO_Interrupt", 0);
	__LIB_13__::func_17(&(uParam0->f_206), "2-ILO_Interrupt", 0);
	__LIB_13__::func_17(&(uParam0->f_206), "3-ILO_Interrupt", 0);
	iLocal_593 = VOLUME::_CREATE_VOLUME_BOX(-131.478f, -31.88169f, 95.93349f, 0f, 0f, -97.97095f, 6.804049f, 7.680609f, 2.506758f);
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_593))
	{
		__LIB_13__::func_839(uParam0, &iLocal_593, 0, 0, 0, 0);
	}
	__LIB_13__::func_16(uParam0, 50538);
	__LIB_13__::func_264(uParam0, 50574);
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
		if (uParam0->f_171 != 0 || func_298(uParam0))
		{
			if (__LIB_13__::func_371(uParam0))
			{
				return true;
			}
		}
	}
	return false;
}

int func_93(var uParam0)
{
	__LIB_12__::func_943(&(uParam0->f_206), -108.5688f, -6.8565f, 94.5268f, 175.1299f, 1);
	func_301();
	return 6;
}

int func_96(var uParam0, int iParam1)
{
	int iVar0;
	struct<4> Var1;
	iVar0 = iParam1;
	Var1 = { func_61(iParam1) };
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, Var1, Var1.f_3, false, false, true);
	VEHICLE::SET_RANDOM_TRAINS(false);
	__LIB_1__::func_600(0);
	VEHICLE::DELETE_ALL_TRAINS();
	if (func_304(iVar0, uParam0))
	{
		if (__LIB_4__::func_511())
		{
			if (iVar0 == 2 || iVar0 == 6)
			{
				if (!__LIB_0__::func_1(uParam0->f_172, 1))
				{
					return 2;
				}
				else
				{
					__LIB_13__::func_105(0, 1);
					if (__LIB_4__::func_511())
					{
						__LIB_12__::func_997(uParam0, func_61(iVar0), func_61(iVar0 + 1), iVar0, iVar0 + 1, 0);
					}
					return 5;
				}
			}
			else
			{
				__LIB_12__::func_997(uParam0, func_61(iVar0), func_61(iVar0 + 1), iVar0, iVar0 + 1, 0);
			}
		}
		if (__LIB_12__::func_936(uParam0))
		{
			__LIB_13__::func_105(0, 0);
			if (__LIB_4__::func_511())
			{
				__LIB_12__::func_997(uParam0, func_61(iVar0), func_61(iVar0 + 1), iVar0, iVar0 + 1, 0);
			}
			return 5;
		}
		__LIB_13__::func_105(1, 1);
		if (!__LIB_4__::func_511())
		{
			__LIB_12__::func_997(uParam0, func_61(iVar0), func_61(iVar0 + 1), iVar0, iVar0 + 1, 0);
		}
		if (iVar0 == 6)
		{
			return 5;
		}
		else
		{
			return 7;
		}
	}
	else
	{
		return 2;
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
	return func_320(Var0, &(uParam0->f_206), uParam0);
}

int func_103(var uParam0)
{
	switch (__LIB_13__::func_22(uParam0))
	{
		case 0:
			__LIB_0__::func_325(&(Global_1347702[66 /*49*/].f_37));
			iLocal_231 = __LIB_4__::func_29(676.4163f, -1243.334f, 44.7338f, 669.569f, -1248.609f, 41.5796f, 676.4163f, -1243.334f, 44.7338f, 5f, 0, 0);
			LAW::_0x710448D44A64C213(false);
			__LIB_12__::func_966(uParam0, 0);
			__LIB_13__::func_33(uParam0, 1);
			return 7;
		case 1:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_299))
			{
				func_327(iLocal_299, joaat("WEAPON_SHOTGUN_DOUBLEBARREL"), -1, 5, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_299, Global_35, -1, -1f, -1f, -1f);
				PED::_0xAE6004120C18DF97(iLocal_299, 0, 0);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_300))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_300, 895.447f, -399.338f, 84.8295f, 258.6547f, true, false, true);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_229);
				TASK::TASK_LOOK_AT_ENTITY(0, Global_35, -1, 0, 51, 0);
				__LIB_1__::func_473(0, joaat("WORLD_HUMAN_WAITING_IMPATIENT"), 0, 0, 0, -1082130432 /* Float: -1f */);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_229);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_300, iLocal_229);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_229);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_300, true);
				PED::_0xAE6004120C18DF97(iLocal_300, 0, 0);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_301))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_301, 895.3295f, -400.5071f, 84.7364f, 250.5361f, true, false, true);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_229);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 0, -1f, -1f, -1f);
				__LIB_1__::func_473(0, joaat("WORLD_HUMAN_WAITING_IMPATIENT"), 0, 0, 0, -1082130432 /* Float: -1f */);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_229);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_301, iLocal_229);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_229);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_301, true);
				PED::_0xAE6004120C18DF97(iLocal_301, 0, 0);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_299, true);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_591))
			{
			}
			if (!ENTITY::IS_ENTITY_DEAD(__LIB_0__::func_398(7)))
			{
				POPULATION::_0xF74E134F40192884(__LIB_0__::func_398(7), 2);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_298))
			{
				WEAPON::_0x94A3C1B804D291EC(iLocal_298, 0, 0, 0, 1);
			}
			__LIB_13__::func_33(uParam0, 2);
			return 7;
		case 2:
			__LIB_13__::func_33(uParam0, 3);
			return 7;
		case 3:
			__LIB_1__::func_562(iLocal_588, iLocal_590, 0, 2f, 20000);
			__LIB_13__::func_33(uParam0, 4);
			return 7;
		case 4:
			__LIB_13__::func_33(uParam0, -1);
			return 7;
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
		if (func_330(&(uParam0->f_753), uParam0->f_2581, uParam0->f_2571, bParam1))
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
	var uVar1;
	int iVar5;
	int iVar6;
	vector3 vVar7;
	vector3 vVar10;
	vector3 vVar13;
	POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	VEHICLE::SET_DISABLE_RANDOM_TRAINS_THIS_FRAME(true);
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_298))
	{
		if (!ENTITY::IS_ENTITY_DEAD(__LIB_0__::func_167(7)))
		{
			if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(__LIB_0__::func_167(7), true))
			{
			}
		}
	}
	if (!func_333(1))
	{
		func_334(1);
	}
	func_335(uParam0, 0);
	func_336(uParam0);
	func_337(uParam0);
	func_338();
	func_339();
	if (!func_333(33))
	{
		if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_6, true, 0))
		{
			__LIB_5__::func_548(1);
			func_334(33);
		}
	}
	else if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_6, true, 0))
	{
		__LIB_5__::func_547(1);
		func_342(33);
	}
	switch (iLocal_214)
	{
		case 0:
			__LIB_12__::func_875(uParam0, PLAYER::PLAYER_PED_ID(), "ARTHUR", 0);
			PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), 0);
			__LIB_12__::func_875(uParam0, iLocal_298, "CHARLES_SMITH", 1);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_298, -111.7186f, -34.2633f, 94.9433f, 75.9176f, true, false, true);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_592))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_592, false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_592, true);
				FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_592, 48, true);
				PED::SET_PED_RESET_FLAG(iLocal_592, 231, true);
			}
			TASK::OPEN_SEQUENCE_TASK(&iLocal_229);
			TASK::TASK_LOOK_AT_ENTITY(0, Global_35, 5000, 0, 51, 0);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -115.2524f, -31.908f, 94.7814f, 1f, 20000, 0.25f, 0, 40000f);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_229);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_298, iLocal_229);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_229);
			__LIB_0__::func_904(7, 1);
			__LIB_12__::func_997(uParam0, func_61(0), func_61(1), 0, 1, 0);
			func_214(1);
			break;
		case 1:
		case 2:
			func_345(uParam0);
			__LIB_1__::func_448(Global_35, -115.422f, -27.151f, 95.424f, 0, 20f, 15f, 10f, 1084227584 /* Float: 5f */, 1, 1, 1, 0);
			if (PED::IS_PED_ON_FOOT(Global_35))
			{
				__LIB_1__::func_448(Global_35, 886.5918f, -394.6515f, 84.37795f, 0, 50f, 34f, 18f, 1084227584 /* Float: 5f */, 1, 1, 1, 0);
			}
			func_347(Global_35, vLocal_326, &uLocal_743, 1112014848 /* Float: 50f */, 1106247680 /* Float: 30f */, 1097859072 /* Float: 15f */, 1084227584 /* Float: 5f */, 1082130432 /* Float: 4f */, 0, 0, 1, 1, 0);
			func_348();
			func_349();
			func_350();
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_27, true, 0) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_28, true, 0))
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
			}
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_312))
				{
					if (__LIB_0__::func_665(Global_35, iLocal_312, 0, 0) < 6f)
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(Global_35, 501393341, true) == 8)
						{
							TASK::TASK_DISMOUNT_ANIMAL(Global_35, 4160, 0, 0, 0, 0);
						}
					}
				}
			}
			MISC::_0x2FCD528A397E5C88(Local_14.f_52, 65536);
			if (!PED::_0x91A5F9CBEBB9D936(iLocal_595))
			{
				iLocal_595 = PED::_0x4C39C95AE5DB1329(Local_14.f_3, 0, 15);
			}
			if (iLocal_214 == 1)
			{
				if (PED::IS_PED_ON_MOUNT(iLocal_298))
				{
					if (!func_351())
					{
						if (__LIB_0__::func_866(7, 0))
						{
							__LIB_1__::func_640(7);
							__LIB_0__::func_904(7, 1);
						}
					}
					else if (!__LIB_0__::func_866(7, 0))
					{
						__LIB_1__::func_551(7, 0);
					}
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_591))
			{
				iLocal_591 = func_355(&iLocal_699, 7, 0, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_591))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_591, true);
					TASK::TASK_STAND_STILL(iLocal_591, -1);
					FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_591, 48, true);
					__LIB_0__::func_170(iLocal_591, 1);
				}
			}
			if (!func_333(21))
			{
				if ((((func_357() == 8 && ENTITY::DOES_ENTITY_EXIST(iLocal_301)) && ENTITY::DOES_ENTITY_EXIST(iLocal_300)) && ENTITY::DOES_ENTITY_EXIST(iLocal_299)) && iLocal_131 == 3)
				{
					StringCopy(&(uParam0->f_2575), "RDTC1_RSC2", 24);
					__LIB_13__::func_33(uParam0, 1);
					__LIB_0__::func_7(&(uParam0->f_172), 16);
					func_358(uParam0, 0);
					func_334(21);
				}
			}
			if (!func_333(4))
			{
				if (func_359(uParam0))
				{
					func_334(4);
				}
			}
			if (func_333(4))
			{
				PED::_0x411189E51B8020BA(iLocal_298, "Stealth");
				__LIB_5__::func_20(0, 0);
				AUDIO::STOP_PED_SPEAKING(iLocal_298, false);
				func_214(3);
				PED::SET_PED_CAN_RAGDOLL(iLocal_298, true);
				return 5;
			}
			break;
		case 3:
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_298, true);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
			func_214(4);
			break;
		case 4:
		case 5:
		case 6:
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
			if (!func_333(5))
			{
				func_334(5);
			}
			if (!func_333(30))
			{
				if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, joaat("WEAPON_MELEE_KNIFE"), 0, false))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, joaat("WEAPON_MELEE_KNIFE"), 1, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
					func_334(30);
				}
			}
			if (!func_333(16))
			{
				if (PED::IS_PED_ON_MOUNT(Global_35))
				{
					__LIB_1__::func_448(Global_35, 670f, -1267f, 44f, 0, 50f, 30f, 24f, 1084227584 /* Float: 5f */, 1, 1, 1, 0);
				}
				else
				{
					__LIB_1__::func_448(Global_35, 671.3f, -1266.19f, 42.98f, 0, 50f, 45f, 7f, 1084227584 /* Float: 5f */, 1, 1, 1, 0);
				}
			}
			else
			{
				__LIB_1__::func_448(Global_35, 671.3f, -1266.19f, 42.98f, 0, 50f, 45f, 7f, 1084227584 /* Float: 5f */, 1, 1, 1, 0);
			}
			func_361(uParam0, vLocal_335);
			func_362(0);
			func_363();
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_48, true, 0))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(Global_35, 501393341, true) == 8)
					{
						TASK::TASK_DISMOUNT_ANIMAL(Global_35, 0, 0, 0, 0, 0);
					}
				}
			}
			if (!func_333(19))
			{
				if (__LIB_0__::func_665(PLAYER::PLAYER_PED_ID(), iLocal_298, 1, 1) < 35f)
				{
					if (PED::IS_PED_ON_MOUNT(Global_35) && PED::GET_MOUNT(Global_35) == __LIB_0__::func_398(7))
					{
						func_334(19);
					}
				}
			}
			else if (__LIB_0__::func_665(PLAYER::PLAYER_PED_ID(), iLocal_298, 1, 1) > 35f)
			{
				func_342(19);
			}
			if (!func_333(18))
			{
				if (__LIB_0__::func_665(PLAYER::PLAYER_PED_ID(), iLocal_298, 1, 1) > 100f)
				{
					__LIB_13__::func_89(uParam0, "DUTCH11_RE", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					func_334(18);
				}
			}
			else if (__LIB_0__::func_665(PLAYER::PLAYER_PED_ID(), iLocal_298, 1, 1) < 20f)
			{
				func_342(18);
			}
			if (func_365(31) && !func_333(14))
			{
				if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_298, 0))
				{
					if (__LIB_0__::func_866(7, 0))
					{
						__LIB_1__::func_640(7);
						__LIB_0__::func_904(7, 1);
					}
					PLAYER::_0x12E09E278C6C29B7(PLAYER::PLAYER_ID());
					if (!PED::IS_PED_INJURED(iLocal_298))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_230);
						TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_230);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_298, iLocal_230);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_230);
						PED::SET_PED_CONFIG_FLAG(iLocal_298, 167, false);
					}
					func_334(14);
				}
			}
			if (func_333(14) && !func_333(15))
			{
				if (!PED::IS_PED_ON_MOUNT(Global_35))
				{
					__LIB_5__::func_511(1);
					PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "Cautious", 1f, -1);
					func_334(15);
				}
			}
			if (func_333(14) && !func_333(16))
			{
				if (func_367(uParam0))
				{
					func_334(16);
					if (!PED::IS_PED_INJURED(iLocal_298))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_230);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 672.5867f, -1264.222f, 42.9841f, 1f, -1, 0.25f, 0, 151.0208f);
						TASK::TASK_INVESTIGATE(0, 672.5867f, -1264.222f, 42.9841f, 4000, 0);
						iVar0 = VOLUME::_CREATE_VOLUME_SPHERE(673.1714f, -1264.4f, 43.0421f, 0f, 0f, 0f, 3.753564f, 4.287168f, 3.324888f);
						TASK::_TASK_GUARD_ASSIGNED_DEFENSIVE_AREA_2(0, iVar0, 672.5867f, -1264.222f, 42.9841f, -30f, 10f, -1);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_230);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_298, iLocal_230);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_230);
					}
					ENTITY::_0x18FF3110CF47115D(iLocal_297, 1, 1);
					PED::_0x6569F31A01B4C097(iLocal_297, 4, 0);
					PED::_0x6569F31A01B4C097(iLocal_297, 0, 0);
					PED::_0x6569F31A01B4C097(iLocal_297, 1, 0);
					WEAPON::_0x1B83C0DEEBCBB214(iLocal_297);
					WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_297, true, true);
				}
			}
			if (func_333(16))
			{
				if (PED::_0x4642182A298187D0(Global_35, 3, &uVar1, 4, 2) == 3)
				{
					if (!__LIB_2__::func_618(&uLocal_863))
					{
						__LIB_8__::func_901(&uLocal_863, 1);
					}
					else if (__LIB_5__::func_51(&uLocal_863) > 0.5f)
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_591, true);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_592, true);
						WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 0, 1);
						__LIB_1__::func_551(7, 0);
						__LIB_12__::func_997(uParam0, func_61(3), func_61(5), 3, 5, 0);
						func_214(7);
					}
				}
			}
			break;
		case 7:
			if (func_362(1))
			{
				__LIB_12__::func_997(uParam0, func_61(4), func_61(5), 4, 5, 0);
				func_214(8);
			}
			break;
		case 8:
		case 9:
			HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(1);
			func_368(uParam0);
			func_369();
			func_370();
			func_362(1);
			if (iLocal_214 != 9)
			{
				if (func_371(2))
				{
					func_214(9);
				}
			}
			if (!func_333(20))
			{
				ENTITY::SET_ENTITY_PROOFS(iLocal_297, 1, false);
				ENTITY::_0x18FF3110CF47115D(iLocal_297, 1, 0);
				PED::_0x411189E51B8020BA(Global_35, "Cautious");
				__LIB_0__::func_267(0);
				func_334(20);
			}
			if (func_372(3) && func_373())
			{
				TASK::CLEAR_PED_TASKS(iLocal_298, true, false);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_298, Global_35, -1, -1f, -1f, -1f);
				if (!PED::IS_PED_INJURED(iLocal_297))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(iLocal_297, false);
				}
				func_214(11);
			}
			break;
		case 10:
		case 11:
			if (!func_333(13))
			{
				if (func_374() == 13)
				{
					ENTITY::_0x18FF3110CF47115D(iLocal_297, 1, 1);
					PED::SET_PED_AS_GROUP_MEMBER(iLocal_297, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID()));
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_297, joaat("REL_PLAYER_ALLY"));
					func_214(11);
					func_334(13);
				}
			}
			if (!PED::IS_PED_INJURED(iLocal_298))
			{
			}
			func_375();
			if (!func_333(11) && __LIB_4__::func_215(Global_35))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_297, false);
				TASK::CLEAR_PED_TASKS(iLocal_297, true, false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_297, true);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_229);
				if (__LIB_0__::func_665(iLocal_298, Global_35, 1, 1) > __LIB_0__::func_94(iLocal_298, 671.0443f, -1263.31f, 42.961f, 1))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 671.0443f, -1263.31f, 42.961f, 1f, -1, 0.25f, 0, 40000f);
				}
				__LIB_2__::func_45(0, Global_35, -1);
				TASK::TASK_LOOK_AT_ENTITY(0, Global_35, 5000, 0, 51, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_229);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_298, iLocal_229);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_229);
				PED::_0xA2F8B3B5FEDFC100(iLocal_297, -1398409131);
				__LIB_12__::func_997(uParam0, func_61(5), func_61(6), 5, 6, 0);
				func_334(11);
			}
			if (!func_333(36))
			{
				if (TASK::IS_PED_GETTING_UP(iLocal_297))
				{
					if (VOLUME::_DOES_VOLUME_EXIST(iLocal_587))
					{
						VOLUME::_DELETE_VOLUME(iLocal_587);
					}
					func_334(36);
					TASK::TASK_EVASIVE_ANIM(Global_35, iLocal_297, __LIB_0__::func_771(768));
				}
			}
			if (!func_333(17) && func_365(34))
			{
				if (!__LIB_6__::func_904() || (AUDIO::_0xD89504D9D7D5057D("DCH1_TALK") && AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("DCH1_TALK") > 2))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_229);
					TASK::TASK_MOUNT_ANIMAL(0, iLocal_591, 20000, -1, 2f, 1, 0, 0);
					TASK::_TASK_MOVE_IN_TRAFFIC_4(0, 1.75f, -122.6622f, -34.4134f, 94.743f, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_229);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_298, iLocal_229);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_229);
					__LIB_11__::func_616(7, 1, 0, 0, 60000f, 1, 1, 0, 0, 0, 0);
					func_334(17);
				}
			}
			if (func_333(17))
			{
				func_214(12);
				__LIB_1__::func_640(7);
			}
			break;
		case 12:
			if (iLocal_592 != __LIB_0__::func_398(7))
			{
				iLocal_592 = __LIB_0__::func_398(7);
				PED::_0x06D26A96CA1BCA75(iLocal_592, 3, 0f, 0);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_299))
			{
				func_347(Global_35, ENTITY::GET_ENTITY_COORDS(iLocal_299, true, false), &uLocal_746, 35f, 22f, 19f, 18f, 10f, 0, 0, 1, 1, 1);
			}
			func_382();
			if (!func_333(32))
			{
				func_383(iLocal_592, 5, 0, 0, 0, 0);
				func_383(iLocal_592, 4, 0, 0, 0, 0);
				func_383(iLocal_592, 6, 0, 0, 0, 0);
				func_334(32);
			}
			if (!func_333(22))
			{
				if ((((ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_3, true, 0) && !ENTITY::IS_ENTITY_DEAD(iLocal_299)) && !ENTITY::IS_ENTITY_DEAD(iLocal_300)) && !ENTITY::IS_ENTITY_DEAD(iLocal_301)) && !ENTITY::IS_ENTITY_DEAD(iLocal_306))
				{
					StringCopy(&(uParam0->f_2575), "RDTC1_RSC4", 24);
					__LIB_13__::func_33(uParam0, 3);
					func_358(uParam0, 1);
					__LIB_0__::func_7(&(uParam0->f_172), 16);
					__LIB_3__::func_573(&iVar5, VOLUME::_GET_VOLUME_COORDS(Local_14.f_55), VOLUME::_GET_VOLUME_ROTATION(Local_14.f_55), VOLUME::_GET_VOLUME_SCALE(Local_14.f_55), "MAR7_INT-CUTSCENE");
					__LIB_5__::func_457(&(uParam0->f_206), iVar5, 0, 1);
					__LIB_12__::func_943(&(uParam0->f_206), 924.1158f, -433.4685f, 87.7561f, 341.7959f, 1);
					func_334(22);
				}
			}
			if (!func_333(24))
			{
				if (func_386(uParam0))
				{
					func_334(24);
				}
			}
			else if ((!ENTITY::DOES_ENTITY_EXIST(iLocal_299) && !ENTITY::DOES_ENTITY_EXIST(iLocal_300)) && !ENTITY::DOES_ENTITY_EXIST(iLocal_301))
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_669))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_669);
					func_342(24);
				}
			}
			if (func_333(8) && !func_333(23))
			{
				if (!ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_669, "pl_leadin") || !ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_669, "pl_leadin_no_dad"))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_669, "pl_leadin");
					ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_669, "pl_leadin_no_dad");
				}
				else if (!__LIB_2__::func_618(&uLocal_749))
				{
					__LIB_8__::func_901(&uLocal_749, 1);
				}
				else if (__LIB_5__::func_51(&uLocal_749) > 1f)
				{
					vVar7 = { 0f, 0f, __LIB_3__::func_978(iLocal_297, iLocal_299, 1) };
					vVar10 = { 0f, 0f, ENTITY::GET_ENTITY_HEADING(Global_35) };
					vVar13 = { 0.5f, __LIB_0__::func_665(iLocal_297, iLocal_299, 1, 1), 1.5f };
					iLocal_594 = VOLUME::_CREATE_VOLUME_BOX(ENTITY::GET_ENTITY_COORDS(iLocal_297, true, false) + ENTITY::GET_ENTITY_COORDS(iLocal_299, true, false) / Vector(2f, 2f, 2f), vVar7, vVar13);
					iVar6 = VOLUME::_CREATE_VOLUME_BOX(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), vVar10, 0.5f, 3f, 1.5f);
					if (VOLUME::_0x40F769D31A00D5A0(iLocal_594, iVar6))
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_669, "pl_leadin_no_dad", true);
					}
					else if (MISC::ABSF((ENTITY::GET_ENTITY_HEADING(iLocal_297) - __LIB_3__::func_978(iLocal_297, iLocal_299, 1))) < 15f)
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_669, "pl_leadin", true);
					}
					else
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_669, "pl_leadin_no_dad", true);
					}
					func_334(23);
				}
			}
			if (__LIB_2__::func_618(&uLocal_749))
			{
				WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 1, 0);
				if (((ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(iLocal_669) || __LIB_5__::func_51(&uLocal_749) > 2.5f) || (((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_669) && ANIMSCENE::_0xA9016536015DE29D(iLocal_669, "pl_leadin")) && ANIMSCENE::_0x1F0E401031E20146(iLocal_669, "pl_leadin")) && ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_669) > 1.5f)) || (((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_669) && ANIMSCENE::_0xA9016536015DE29D(iLocal_669, "pl_leadin_no_dad")) && ANIMSCENE::_0x1F0E401031E20146(iLocal_669, "pl_leadin_no_dad")) && ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_669) > 1.5f))
				{
					uLocal_232 = GRAPHICS::_0xFA50F79257745E74(930.1314f, -418.4685f, 86.1969f, 1.5f, 2, 2, 0);
					func_214(13);
					__LIB_12__::func_945(uParam0);
					return 5;
				}
			}
			break;
		case 13:
			if (!bLocal_702)
			{
				ENTITY::SET_ENTITY_COORDS(Global_35, 681.0308f, -1217.243f, 44.2751f, true, false, true, true);
				if (func_389())
				{
					StringCopy(&(uParam0->f_2575), "RDTC1_RSC6", 24);
					__LIB_13__::func_33(uParam0, 4);
					func_358(uParam0, 0);
					__LIB_0__::func_7(&(uParam0->f_172), 16);
					MISC::_SET_WEATHER_TYPE(joaat("SUNNY"), true, true, false, 0f, false);
					CLOCK::SET_CLOCK_TIME(18, 0, 0);
					bLocal_702 = true;
				}
			}
			else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_206.f_348))
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_206.f_348, true, false))
				{
				}
				else
				{
					func_214(14);
					return 5;
				}
			}
			break;
		case 14:
			if (__LIB_0__::func_13(32768))
			{
				return 8;
			}
			break;
		case 15:
			return 8;
	}
	return 7;
}

void func_122(var uParam0)
{
	if (bLocal_700)
	{
	}
	if (bLocal_701)
	{
		__LIB_12__::func_967(uParam0, joaat("RDTC1_QUICKRETURN"));
	}
	__LIB_11__::func_381(1);
	func_412(joaat("PROVISION_GOLDBAR_SMALL"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
		func_427(Global_1347702[iParam0 /*49*/].f_15, bParam4, bParam2, bParam6, bParam5);
	}
	else
	{
		__LIB_1__::func_809(Global_1347702[iParam0 /*49*/].f_15, bParam6);
	}
	__LIB_10__::func_833(iParam0);
}

void func_159(var uParam0)
{
	int iVar0;
	func_455(uParam0);
	STREAMING::_REMOVE_IMAP(-159557995);
	__LIB_5__::func_440("rdtc1_gang_camp");
	PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), 0);
	if (iLocal_698 != 0)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_698, false);
	}
	if (iLocal_610[0] != 0)
	{
		TASK::REMOVE_COVER_POINT(iLocal_610[0]);
	}
	if (iLocal_610[1] != 0)
	{
		TASK::REMOVE_COVER_POINT(iLocal_610[1]);
	}
	if (iLocal_613 != 0)
	{
		TASK::REMOVE_COVER_POINT(iLocal_613);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_302))
	{
		if (PLAYER::_0x0E6846476906C9DD(PLAYER::PLAYER_ID(), iLocal_302))
		{
			PLAYER::_0x9DAE1380CC5C6451(PLAYER::PLAYER_ID(), iLocal_302);
		}
	}
	GRAPHICS::_0x37D7BDBA89F13959("ChapterTitle_IntroCh03");
	__LIB_0__::func_172(iLocal_593);
	func_458();
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_587))
	{
		VOLUME::_DELETE_VOLUME(iLocal_587);
	}
	if (__LIB_1__::func_22(7))
	{
		__LIB_1__::func_640(7);
		__LIB_11__::func_616(7, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
	}
	if (__LIB_1__::func_22(0))
	{
		__LIB_1__::func_640(0);
		__LIB_11__::func_616(0, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
	}
	if (__LIB_1__::func_22(5))
	{
		__LIB_1__::func_640(5);
		__LIB_11__::func_616(5, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_300))
	{
		PED::DELETE_PED(&iLocal_300);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_301))
	{
		PED::DELETE_PED(&iLocal_301);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_299))
	{
		PED::DELETE_PED(&iLocal_299);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_297))
	{
		PED::DELETE_PED(&iLocal_297);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_306))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_306);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_598)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_598[iVar0]))
		{
			OBJECT::DELETE_OBJECT(&(iLocal_598[iVar0]));
		}
		iVar0++;
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_231, false);
}

void func_188()
{
	Local_14 = VOLUME::_CREATE_VOLUME_CYLINDER(687.6985f, -1253.005f, 44.23985f, 0f, 0f, 0f, 42.75f, 42.5f, 13f);
	Local_14.f_1 = VOLUME::_CREATE_VOLUME_CYLINDER(694.9485f, -1248.005f, 44.23986f, 0f, 0f, 0f, 61.75f, 61f, 13f);
	Local_14.f_2 = VOLUME::_CREATE_VOLUME_CYLINDER(692.6742f, -1251.649f, 43.18564f, 0f, 0f, 0f, 229f, 227.75f, 31.5f);
	Local_14.f_3 = VOLUME::_CREATE_VOLUME_CYLINDER(834.0737f, -370.2628f, 117.6981f, 0f, 0f, -31.69936f, 307.6421f, 242.7664f, 63f);
	Local_14.f_4 = VOLUME::_CREATE_VOLUME_CYLINDER(837.2241f, -394.1955f, 108.928f, 0f, 0f, -121.5442f, 353.3047f, 403.3447f, 115.2088f);
	Local_14.f_5 = VOLUME::_CREATE_VOLUME_CYLINDER(692.1512f, -1250.006f, 61.27283f, 0f, 0f, 0f, 317.5f, 301f, 31.5f);
	Local_14.f_6 = VOLUME::_CREATE_VOLUME_CYLINDER(-138.9555f, -30.5559f, 79.62597f, 0f, 0f, 0f, 63.75698f, 67.53939f, 52.25f);
	Local_14.f_7 = VOLUME::_CREATE_VOLUME_CYLINDER(-138.9555f, -30.55591f, 79.62598f, 0f, 0f, 0f, 269.2981f, 184.6274f, 52.25f);
	Local_14.f_8 = VOLUME::_CREATE_VOLUME_BOX(689.8878f, -1243.005f, 46.11268f, 0f, 0f, 96.60496f, 20.70061f, 8.817833f, 6.728671f);
	Local_14.f_9 = VOLUME::_CREATE_VOLUME_CYLINDER(706.2796f, -1255.493f, 46.44827f, 0f, 0f, 0f, 9.68133f, 8.41869f, 2.802486f);
	Local_14.f_10 = VOLUME::_CREATE_VOLUME_CYLINDER(699.1423f, -1246.777f, 45.65413f, 0f, 0f, 0f, 9.68133f, 8.41869f, 2.802486f);
	Local_14.f_11 = VOLUME::_CREATE_VOLUME_CYLINDER(694.3595f, -1235.547f, 45.65413f, 0f, 0f, 0f, 7.911643f, 8.41869f, 2.802486f);
	Local_14.f_12 = VOLUME::_CREATE_VOLUME_CYLINDER(681.7505f, -1254.338f, 42.36807f, 0f, 0f, 14.00549f, 2.878099f, 7.482696f, 2.802486f);
	Local_14.f_13 = VOLUME::_CREATE_VOLUME_CYLINDER(674.9824f, -1257.347f, 43.98589f, 0f, 0f, 0f, 13.91972f, 13.07906f, 2.980611f);
	Local_14.f_14 = VOLUME::_CREATE_VOLUME_CYLINDER(674.9824f, -1257.347f, 43.98589f, 0f, 0f, 0f, 15f, 15f, 2.980611f);
	Local_14.f_15 = VOLUME::_CREATE_VOLUME_CYLINDER(675.6638f, -1261.476f, 43.18688f, 0f, 0f, 0f, 3.197278f, 3.393091f, 2.515104f);
	Local_14.f_16 = VOLUME::_CREATE_VOLUME_CYLINDER(680.1525f, -1251.385f, 43.18688f, 0f, 0f, 0f, 5.19764f, 4.535753f, 2.515104f);
	Local_14.f_17 = VOLUME::_CREATE_VOLUME_CYLINDER(671.1986f, -1249.722f, 43.87288f, 0f, 0f, 69.72797f, 3.197278f, 3.393091f, 2.515104f);
	Local_14.f_18 = VOLUME::_CREATE_VOLUME_CYLINDER(833.3077f, -411.8725f, 82.16792f, 0f, 0f, 0f, 65f, 65f, 12.53401f);
	Local_14.f_19 = VOLUME::_CREATE_VOLUME_CYLINDER(842.5911f, -418.1472f, 79.62598f, 0f, 0f, 0f, 679.6974f, 741f, 80.25f);
	Local_14.f_20 = VOLUME::_CREATE_VOLUME_CYLINDER(885.4794f, -478.8316f, 88.16808f, 0f, 0f, -49.46312f, 35f, 66.92789f, 10.25f);
	Local_14.f_21 = VOLUME::_CREATE_VOLUME_CYLINDER(698.0115f, -598.1122f, 27.52497f, 0f, 0f, 0f, 40f, 40f, 80.25f);
	Local_14.f_22 = VOLUME::_CREATE_VOLUME_CYLINDER(646.5324f, -927.1293f, 27.52496f, 0f, 0f, 0f, 40f, 108.5108f, 80.25f);
	Local_14.f_23 = VOLUME::_CREATE_VOLUME_CYLINDER(682.7687f, -1258.001f, 42.36807f, 0f, 0f, 8.668126f, 3.187706f, 3.241958f, 2.802486f);
	Local_14.f_24 = VOLUME::_CREATE_VOLUME_CYLINDER(677.7432f, -1262.393f, 42.36807f, 0f, 0f, 8.668126f, 3.187706f, 3.182494f, 2.802486f);
	Local_14.f_25 = VOLUME::_CREATE_VOLUME_CYLINDER(669.682f, -1258.422f, 42.36807f, 0f, 0f, 8.668126f, 3.187706f, 3.182494f, 2.802486f);
	Local_14.f_26 = VOLUME::_CREATE_VOLUME_CYLINDER(670.9827f, -1249.832f, 42.36807f, 0f, 0f, 8.668126f, 3.187706f, 3.182494f, 2.802486f);
	Local_14.f_27 = VOLUME::_CREATE_VOLUME_BOX(880.4489f, -395.2797f, 84.83379f, 0f, 0f, -54.18391f, 3.486821f, 4.633787f, 2.623456f);
	Local_14.f_28 = VOLUME::_CREATE_VOLUME_BOX(891.2266f, -401.9909f, 85.75525f, 0f, 0f, -6.16853f, 3.486821f, 4.633787f, 2.623456f);
	Local_14.f_29 = VOLUME::_CREATE_VOLUME_BOX(896.3685f, -403.6701f, 86.0271f, 0f, 0f, -6.16853f, 4.267949f, 2.226461f, 2.623456f);
	Local_14.f_30 = VOLUME::_CREATE_VOLUME_CYLINDER(910.5704f, -404.7314f, 87.07662f, 0f, 0f, -33.75843f, 5.503128f, 3.633569f, 3.004121f);
	Local_14.f_31 = VOLUME::_CREATE_VOLUME_CYLINDER(670.7628f, -1266.756f, 45.01505f, 0f, 0f, 0f, 13.63072f, 13.26221f, 3f);
	Local_14.f_32 = VOLUME::_CREATE_VOLUME_AGGREGATE();
	VOLUME::_0x39816F6F94F385AD(Local_14.f_32, -124.5181f, -32.74742f, 95.93349f, 0f, 0f, -97.97095f, 16.26105f, 10.35944f, 3.41223f);
	Local_14.f_33 = VOLUME::_CREATE_VOLUME_CYLINDER(886.5325f, -398.9006f, 85.67651f, 0f, 0f, -37.32104f, 22.73732f, 16.91401f, 4.436479f);
	Local_14.f_34 = VOLUME::_CREATE_VOLUME_CYLINDER(749.7971f, -568.132f, 83.8849f, 0f, 0f, -14.43456f, 11.26512f, 11.22321f, 10f);
	Local_14.f_35 = VOLUME::_CREATE_VOLUME_CYLINDER(601.8669f, -634.0328f, 48.41702f, 0f, 0f, -41.75709f, 8.415692f, 11.35474f, 10f);
	Local_14.f_36 = VOLUME::_CREATE_VOLUME_CYLINDER(630.4412f, -993.4125f, 48.41702f, 0f, 0f, -41.75709f, 15.82224f, 17.70831f, 10f);
	Local_14.f_37 = VOLUME::_CREATE_VOLUME_CYLINDER(672.9914f, -1029.106f, 48.41702f, 0f, 0f, -41.75709f, 12.92655f, 9.343088f, 10f);
	Local_14.f_38 = VOLUME::_CREATE_VOLUME_BOX(1009.022f, -514.9986f, 132.4746f, 0f, 0f, -39.99487f, 361.1328f, 471.872f, 176.6063f);
	Local_14.f_39 = VOLUME::_CREATE_VOLUME_AGGREGATE();
	VOLUME::_0x39816F6F94F385AD(Local_14.f_39, 1034.135f, -536.0672f, 132.4746f, 0f, 0f, -39.99487f, 158.4349f, 471.872f, 176.6063f);
	VOLUME::_0x39816F6F94F385AD(Local_14.f_39, 799.0001f, -593.8137f, 132.4746f, 0f, 0f, -39.99487f, 158.4349f, 89.31492f, 176.6063f);
	Local_14.f_40 = VOLUME::_CREATE_VOLUME_BOX(884.1252f, -392.6266f, 84.83379f, 0f, 0f, -54.18391f, 5.52024f, 4.633787f, 2.623456f);
	Local_14.f_41 = VOLUME::_CREATE_VOLUME_BOX(891.6898f, -397.7052f, 85.75525f, 0f, 0f, -6.168531f, 5.303627f, 4.633787f, 2.623456f);
	Local_14.f_42 = VOLUME::_CREATE_VOLUME_BOX(895.8846f, -401.0543f, 86.0271f, 0f, 0f, -6.168531f, 2.556414f, 1.53636f, 2.623456f);
	Local_14.f_43 = VOLUME::_CREATE_VOLUME_CYLINDER(677.371f, -1240.153f, 47.14837f, 0f, 0f, 0f, 10f, 10f, 4.972591f);
	Local_14.f_44 = VOLUME::_CREATE_VOLUME_CYLINDER(692.2034f, -1248.714f, 47.14837f, 0f, 0f, 0f, 10f, 10f, 4.972591f);
	Local_14.f_45 = VOLUME::_CREATE_VOLUME_CYLINDER(674.9824f, -1257.347f, 43.98589f, 0f, 0f, 0f, 10.63508f, 8.862273f, 2.980611f);
	Local_14.f_46 = VOLUME::_CREATE_VOLUME_BOX(676.7513f, -1236.964f, 46.11268f, 0f, 0f, -179.9504f, 14.53306f, 8.817833f, 6.728671f);
	Local_14.f_47 = VOLUME::_CREATE_VOLUME_AGGREGATE();
	VOLUME::_0x39816F6F94F385AD(Local_14.f_47, -130.9255f, -27.90614f, 95.93349f, 0f, 0f, -164.6004f, 11.66742f, 5.356328f, 2.506758f);
	VOLUME::_0x39816F6F94F385AD(Local_14.f_47, -131.9099f, -34.59998f, 95.93349f, 0f, 0f, 128.2518f, 11.66742f, 5.356328f, 2.506758f);
	Local_14.f_48 = VOLUME::_CREATE_VOLUME_CYLINDER(671.2859f, -1267.194f, 43.98589f, 0f, 0f, 0f, 21.39485f, 21.38439f, 2.980611f);
	Local_14.f_49 = VOLUME::_CREATE_VOLUME_CYLINDER(830.42f, -373.9279f, 117.6981f, 0f, 0f, -40.7532f, 159.9473f, 181.9704f, 63f);
	Local_14.f_50 = VOLUME::_CREATE_VOLUME_BOX(681.7327f, -1260.58f, 44.01705f, 0f, 0f, 25.96239f, 8.714064f, 4.767529f, 5.115757f);
	Local_14.f_51 = VOLUME::_CREATE_VOLUME_BOX(884.1252f, -392.6266f, 84.83379f, 0f, 0f, -23.73864f, 58.96906f, 26.6596f, 45.991f);
	Local_14.f_52 = VOLUME::_CREATE_VOLUME_BOX(885.6352f, -395.4465f, 85.43742f, 0f, 0f, 58.38402f, 8.29079f, 28.9388f, 7.833741f);
	Local_14.f_53 = VOLUME::_CREATE_VOLUME_BOX(-131.8354f, -31.58076f, 96.0079f, 0f, 0f, -5.030478f, 3.627757f, 4.154908f, 1.876084f);
	Local_14.f_54 = VOLUME::_CREATE_VOLUME_AGGREGATE();
	VOLUME::_0x39816F6F94F385AD(Local_14.f_54, -130.8261f, -31.66055f, 95.87637f, 0f, 0f, -7.425804f, 3.827044f, 4.181077f, 2.058239f);
	VOLUME::_0x39816F6F94F385AD(Local_14.f_54, -128.3864f, -32.854f, 95.87637f, 0f, 0f, -7.425804f, 1.352996f, 2.471151f, 2.058239f);
	Local_14.f_55 = VOLUME::_CREATE_VOLUME_BOX(945.9994f, -420.447f, 90.96426f, 0f, 0f, 98.78429f, 17.58435f, 39.70308f, 11.50431f);
	Local_14.f_56 = VOLUME::_CREATE_VOLUME_SPHERE(886.4194f, -397.1217f, 84.15118f, 0f, 0f, 49.00191f, 1.590029f, 1.589887f, 1.793843f);
	Local_14.f_57 = VOLUME::_CREATE_VOLUME_BOX(896.5359f, -404.9713f, 86.4887f, 0f, 0f, -6.16853f, 2.488251f, 2.027218f, 3.661766f);
	Local_14.f_58 = VOLUME::_CREATE_VOLUME_CYLINDER(910.2098f, -404.4904f, 87.07662f, 0f, 0f, -33.75843f, 5.503128f, 3.633569f, 3.004121f);
	Local_14.f_59 = VOLUME::_CREATE_VOLUME_CYLINDER(765.6226f, -572.2054f, 83.8849f, 0f, 0f, -14.43456f, 17.99659f, 11.22321f, 10f);
	Local_14.f_60 = VOLUME::_CREATE_VOLUME_CYLINDER(607.5236f, -627.6967f, 48.41702f, 0f, 0f, -41.75709f, 16.94437f, 22.57615f, 10f);
	Local_14.f_61 = VOLUME::_CREATE_VOLUME_CYLINDER(668.7976f, -1025.362f, 48.41702f, 0f, 0f, -41.75709f, 20.28633f, 9.343088f, 10f);
}

void func_189(int iParam0, int iParam1, var uParam2, int iParam3, char* sParam4, char* sParam5, char* sParam6, float fParam7, int iParam8)
{
	Local_166[iParam0 /*10*/] = iParam1;
	Local_166[iParam0 /*10*/].f_1 = uParam2;
	Local_166[iParam0 /*10*/].f_2 = iParam3;
	Local_166[iParam0 /*10*/].f_8 = sParam4;
	Local_166[iParam0 /*10*/].f_9 = sParam5;
	Local_166[iParam0 /*10*/].f_5 = iParam8;
	Local_166[iParam0 /*10*/].f_7 = sParam6;
	Local_166[iParam0 /*10*/].f_6 = fParam7;
}

int func_204(vector3 vParam0, var uParam3)
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
		iVar0 = func_508(0, 0);
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

int func_206()
{
	return iLocal_214;
}

void func_207(int iParam0)
{
	struct<28> Var0;
	var uVar28;
	Var0.f_8 = -1;
	Var0.f_17 = 1097859072;
	Var0.f_18 = 1000;
	Var0.f_19 = 1067450368;
	Var0.f_20 = 5000;
	Var0.f_21 = 42;
	Var0.f_22 = 1103626240;
	Var0.f_23 = 1077936128;
	Var0.f_24 = 1106247680;
	Var0.f_25 = 1103101952;
	Var0.f_26 = 1097859072;
	Var0.f_27 = 1103626240;
	__LIB_4__::func_228(&Var0);
	if (PED::_0x268B3AEBF032A88D(iLocal_299))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_299, false);
	}
	if (PED::_0x268B3AEBF032A88D(iLocal_300))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_300, false);
	}
	if (PED::_0x268B3AEBF032A88D(iLocal_301))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_301, false);
	}
	PED::SET_PED_CONFIG_FLAG(iLocal_299, 168, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_300, 168, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_301, 168, true);
	if (iParam0 == 2)
	{
		__LIB_1__::func_398(&Var0, 0);
	}
	else
	{
		__LIB_1__::func_402(&Var0, 1);
		__LIB_1__::func_405(&Var0, 1);
	}
	if (((__LIB_2__::func_401(iLocal_299, 1, 1, 1, 0, 0) && iParam0 != 2) || (__LIB_2__::func_401(iLocal_300, 1, 1, 1, 0, 0) && iParam0 != 2)) || (__LIB_2__::func_401(iLocal_301, 1, 1, 1, 0, 0) && iParam0 != 2))
	{
		bLocal_759 = true;
	}
	if ((((func_515(iLocal_299, 0, &Var0, &uVar28, 0, 0) || func_515(iLocal_300, 0, &Var0, &uVar28, 0, 0)) || func_515(iLocal_301, 0, &Var0, &uVar28, 0, 0)) || PED::IS_PED_IN_COMBAT(iLocal_299, 0)) || PED::IS_PED_SHOOTING(iLocal_299))
	{
		bLocal_760 = true;
	}
	if (bLocal_759 || bLocal_760)
	{
		if (!__LIB_2__::func_618(&uLocal_860))
		{
			__LIB_8__::func_901(&uLocal_860, 1);
			if (iParam0 != 2)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_299))
				{
					TASK::TASK_COMBAT_PED(iLocal_299, Global_35, 0, 0);
				}
			}
		}
	}
}

bool func_213(var uParam0)
{
	int iVar0;
	__LIB_9__::func_832(16, 0, 0);
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(0);
	CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
	if (__LIB_1__::func_220(98))
	{
		__LIB_10__::func_672(7, 0);
	}
	switch (iLocal_888)
	{
		case 0:
			MISC::_SET_WEATHER_TYPE(joaat("SUNNY"), true, true, false, 0f, false);
			CLOCK::SET_CLOCK_TIME(9, 0, 0);
			__LIB_5__::func_440("rdtc1_gang_camp");
			func_529(1, 0, 0);
			Global_40.f_4942[0 /*60*/].f_59 = 0;
			Global_40.f_4942[5 /*60*/].f_59 = 0;
			ENTITY::SET_ENTITY_COORDS(Global_35, 630.077f, -1213.972f, 42.1682f, true, false, true, true);
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_715, false))
			{
				ANIMSCENE::START_ANIM_SCENE(iLocal_715);
			}
			func_530(7);
			break;
		case 7:
			CAM::DO_SCREEN_FADE_IN(3000);
			AUDIO::_0x6339C1EA3979B5F7("pass_time", "Chapter_Screen_Scenes");
			func_530(8);
			break;
		case 8:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 699609754))
			{
				AUDIO::_0x9428447DED71FC7E("Chapter_Screen_Scenes");
				__LIB_9__::func_832(16, 0, 0);
				func_530(9);
			}
			break;
		case 9:
			if (ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(iLocal_715))
			{
				__LIB_0__::func_8(&(Global_1347702[138 /*49*/].f_12), 32);
				__LIB_0__::func_8(&(Global_1347702[134 /*49*/].f_12), 32);
				HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
				__LIB_11__::func_15(Global_1347702[uParam0->f_174 /*49*/].f_15);
				iVar0 = __LIB_0__::func_398(1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iVar0, 675.1621f, -1222.186f, 43.9481f, 187.0373f, true, false, true);
					TASK::_TASK_START_SCENARIO_IN_PLACE(iVar0, joaat("WORLD_ANIMAL_HORSE_GRAZING"), 0, false, 0, -1f, false);
				}
				func_531(662.8499f, -1232.299f, 43.2684f, 350.7704f);
				if (PED::_GET_LAST_MOUNT(Global_35) != __LIB_0__::func_398(7))
				{
					if (ENTITY::DOES_ENTITY_EXIST(PED::_GET_LAST_MOUNT(Global_35)) && !__LIB_0__::func_255(PED::_GET_LAST_MOUNT(Global_35), 0))
					{
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(PED::_GET_LAST_MOUNT(Global_35), 671.7543f, -1215.05f, 44.7186f, 239.477f, true, false, true);
					}
				}
				func_530(11);
			}
			break;
		case 10:
			break;
		case 11:
			MISC::CLEAR_BIT(&(Global_1956580.f_1), 5);
			return true;
	}
	return false;
}

void func_214(int iParam0)
{
	iLocal_214 = iParam0;
}

bool func_217(int iParam0)
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

int func_226(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_588))
	{
		if (!__LIB_0__::func_272(iLocal_588, 1))
		{
			return 1;
		}
		else if ((PED::IS_PED_FLEEING(iLocal_588) || PED::IS_PED_IN_COMBAT(iLocal_588, 0)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_588, Global_35, 1, 1))
		{
			TASK::CLEAR_PED_SECONDARY_TASK(iLocal_588);
			TASK::TASK_SMART_FLEE_PED(iLocal_588, Global_35, 10000f, -1, 0, 1077936128 /* Float: 3f */, 0);
			PED::SET_PED_KEEP_TASK(iLocal_588, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_588, false);
			return 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_589))
	{
		if (!__LIB_0__::func_272(iLocal_589, 1))
		{
			return 1;
		}
		else if ((PED::IS_PED_FLEEING(iLocal_589) || PED::IS_PED_IN_COMBAT(iLocal_589, 0)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_589, Global_35, 1, 1))
		{
			TASK::CLEAR_PED_SECONDARY_TASK(iLocal_589);
			TASK::TASK_SMART_FLEE_PED(iLocal_589, Global_35, 10000f, -1, 0, 1077936128 /* Float: 3f */, 0);
			PED::SET_PED_KEEP_TASK(iLocal_589, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_589, false);
		}
	}
	return 0;
}

void func_231(var uParam0)
{
	if (__LIB_12__::func_644(uParam0) == 0)
	{
		if (Global_1359489.f_15 > 0)
		{
			Global_1359489.f_15 = __LIB_1__::func_149(1);
		}
		__LIB_1__::func_240(568, 0);
		__LIB_13__::func_484(Global_1347702[uParam0->f_174 /*49*/].f_15, 1);
		__LIB_0__::func_7(&(Global_1347702[134 /*49*/].f_12), 16384);
		__LIB_1__::func_532(Global_1347702[134 /*49*/].f_15, 1);
	}
	else
	{
		__LIB_13__::func_484(Global_1347702[uParam0->f_174 /*49*/].f_15, 0);
	}
	func_455(uParam0);
}

void func_246(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_172, 16))
	{
		__LIB_12__::func_966(uParam0, 0);
		func_87(uParam0);
	}
}

int func_271(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	iVar0 = 1;
	if (!bLocal_889)
	{
		if (__LIB_12__::func_767(uParam0) < 5)
		{
			iLocal_298 = func_610(7, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, -922193456, 1, 0, 0, 1, 1, 1, 1, 0, 1, 0, 1);
		}
		if (__LIB_12__::func_767(uParam0) == -1 || __LIB_12__::func_767(uParam0) == 0)
		{
			iLocal_588 = func_610(0, 1, 1, -132.9033f, -36.2078f, 94.9063f, 256.5793f, 1, 1, 0, 0, 0, 0, 0, 1, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
			iLocal_589 = func_610(5, 1, 1, -130.3237f, -36.2293f, 94.8826f, 295.3511f, 1, 1, 0, 0, 0, 0, 0, 1, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
		}
		if ((((__LIB_12__::func_767(uParam0) < 5 && __LIB_1__::func_22(7)) || __LIB_12__::func_767(uParam0) >= 5) && ((__LIB_12__::func_767(uParam0) <= 0 && __LIB_1__::func_22(0)) || __LIB_12__::func_767(uParam0) > 0)) && ((__LIB_12__::func_767(uParam0) <= 0 && __LIB_1__::func_22(5)) || __LIB_12__::func_767(uParam0) > 0))
		{
			bLocal_889 = true;
		}
		else
		{
			return 0;
		}
	}
	if (__LIB_12__::func_767(uParam0) < 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_298))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_298))
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_298, 315, true);
				WEAPON::_0x899A04AFCC725D04(iLocal_298, WEAPON::_0xD42514C182121C23(joaat("CS_CHARLESSMITH")));
				if (WEAPON::HAS_PED_GOT_WEAPON(iLocal_298, joaat("WEAPON_THROWN_TOMAHAWK"), 0, false))
				{
					WEAPON::REMOVE_WEAPON_FROM_PED(iLocal_298, joaat("WEAPON_THROWN_TOMAHAWK"), true, -142743235);
				}
				__LIB_12__::func_875(uParam0, iLocal_298, "CHARLES_SMITH", 1);
			}
			else
			{
				return 0;
			}
		}
	}
	if (__LIB_12__::func_767(uParam0) == -1 || __LIB_12__::func_767(uParam0) == 0)
	{
		if (!__LIB_0__::func_272(iLocal_588, 0))
		{
			iVar0 = 0;
		}
		if (!__LIB_0__::func_272(iLocal_589, 0))
		{
			iVar0 = 0;
		}
		if (iVar0 == 0)
		{
			return 0;
		}
		if (__LIB_0__::func_272(iLocal_588, 0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_588, -131.44f, -30.52f, 95.67f, 177f, true, false, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_588, true);
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_588, false);
			AUDIO::STOP_PED_SPEAKING(iLocal_589, true);
		}
		if (__LIB_0__::func_272(iLocal_589, 0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_589, -132.6f, -32.18f, 95.64f, -98.22f, true, false, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_589, true);
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_589, false);
			AUDIO::STOP_PED_SPEAKING(iLocal_589, true);
		}
		vVar1 = { Global_1347702[uParam0->f_174 /*49*/].f_24 };
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_598[1]))
		{
			iLocal_598[1] = OBJECT::CREATE_OBJECT(joaat("P_CS_MAP01X"), vVar1 + Vector(0f, -0.1f, -0.1f), true, true, false, false, true);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_598[2]))
		{
			iLocal_598[2] = OBJECT::CREATE_OBJECT(joaat("P_PEN01X"), vVar1 + Vector(0f, -0.1f, 0.1f), true, true, false, false, true);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_598[4]))
		{
			iLocal_598[4] = OBJECT::CREATE_OBJECT(joaat("P_CS_MATTRESS01X"), vVar1 + Vector(0f, -0.1f, 0.1f), true, true, false, false, true);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_598[3]))
		{
			iLocal_598[3] = OBJECT::CREATE_OBJECT(joaat("P_INKWELL01X"), vVar1 + Vector(0f, -0.1f, 0.1f), true, true, false, false, true);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_588))
		{
			iLocal_588 = __LIB_0__::func_167(0);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_589))
		{
			iLocal_589 = __LIB_0__::func_167(5);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_589) || !ENTITY::DOES_ENTITY_EXIST(iLocal_588))
		{
			return 0;
		}
		if (__LIB_0__::func_272(__LIB_0__::func_167(7), 0))
		{
			OBJECT::SET_FORCE_OBJECT_THIS_FRAME(vVar1, 5f);
			if (!ENTITY::IS_ENTITY_DEAD(__LIB_0__::func_167(7)))
			{
				__LIB_12__::func_875(uParam0, PLAYER::PLAYER_PED_ID(), "ARTHUR", 0);
				__LIB_12__::func_875(uParam0, __LIB_0__::func_167(7), "CHARLES_SMITH", 0);
				return 1;
			}
		}
	}
	return 1;
}

void func_285(var uParam0)
{
	int iVar0;
	int iVar1;
	if (!__LIB_1__::func_25(Global_1835011[60 /*74*/].f_1, 1))
	{
		return;
	}
	else if (__LIB_1__::func_25(Global_1347702[1 /*49*/].f_15, 1))
	{
		return;
	}
	if (((((((((((((((uParam0->f_174 == 29 || uParam0->f_174 == 56) || uParam0->f_174 == 57) || uParam0->f_174 == 72) || uParam0->f_174 == 84) || uParam0->f_174 == 85) || uParam0->f_174 == 86) || uParam0->f_174 == 87) || uParam0->f_174 == 88) || uParam0->f_174 == 92) || uParam0->f_174 == 111) || uParam0->f_174 == 102) || uParam0->f_174 == 117) || uParam0->f_174 == 122) || uParam0->f_174 == 149) || uParam0->f_174 == 150)
	{
		iVar0 = 100;
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, joaat("WEAPON_REVOLVER_CATTLEMAN"), 0, false))
		{
			if (!__LIB_0__::func_214(joaat("WEAPON_REVOLVER_CATTLEMAN")))
			{
				__LIB_0__::func_915(joaat("WEAPON_REVOLVER_CATTLEMAN"));
			}
			func_626(Global_35, joaat("WEAPON_REVOLVER_CATTLEMAN"), 0, 0, 2, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, iVar0, 0, 0, 0, 0);
		}
		else
		{
			iVar1 = WEAPON::GET_AMMO_IN_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_CATTLEMAN"));
			if (iVar1 < iVar0)
			{
				WEAPON::_ADD_AMMO_TO_PED(Global_35, joaat("WEAPON_REVOLVER_CATTLEMAN"), (iVar0 - iVar1), 752097756);
			}
		}
	}
}

void func_287(var uParam0)
{
	__LIB_11__::func_10(1, 1, 0);
	LAW::_0x710448D44A64C213(false);
}

void func_294(var uParam0)
{
	__LIB_13__::func_19(&iLocal_761, iLocal_588);
}

int func_296(var uParam0)
{
	if (__LIB_0__::func_84(&(uParam0->f_206), 512))
	{
		if (iLocal_214 == 0 || iLocal_214 == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_591))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_591, -112.7511f, -25.7969f, 94.6725f, 336.8074f, true, false, true);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_592))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_592, -116.1583f, -24.3674f, 94.7642f, 331.8074f, true, false, true);
			}
		}
	}
	if (__LIB_13__::func_23(&(uParam0->f_206), "RDTC1_RSC_1"))
	{
		if (!func_641(0))
		{
			if (func_642(uParam0, -122.4986f, -20.3102f, 95.1169f, 264.0073f, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_592))
				{
					func_383(iLocal_592, 5, -118.04f, -26.47f, 94.8f, 0);
					func_383(iLocal_592, 4, -119.67f, -25.88f, 94.8f, 0);
					func_383(iLocal_592, 6, -120.24f, -26.52f, 94.8f, 0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_592, -116.1583f, -24.3674f, 94.7642f, 1f, -1, 0.25f, 0, 331.1657f);
					FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_592, 48, true);
					func_643(0);
				}
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_591))
		{
			iLocal_591 = func_644(7, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_591))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_591, true);
				TASK::TASK_STAND_STILL(iLocal_591, -1);
				FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_591, 48, true);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_591, -112.1095f, -37.2692f, 94.7298f, 354.45f, true, false, true);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_591, -112.7511f, -25.7969f, 94.6725f, 1f, -1, 0.25f, 0, 336.8074f);
				__LIB_0__::func_170(iLocal_591, 1);
			}
		}
		if (__LIB_14__::func_12(&(uParam0->f_206), Global_35, 0, 0, 1, 1))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, -122.6622f, -34.4134f, 94.743f, 317.3704f, true, false, true);
			PED::FORCE_PED_MOTION_STATE(Global_35, joaat("MOTIONSTATE_WALK"), false, 0, false);
			__LIB_0__::func_569(joaat("MOTIONSTATE_WALK"), 2000, 0, 1, 1, 0, 0, 0);
		}
		if (__LIB_13__::func_521(&(uParam0->f_206), iLocal_589, 0, 0, 1, 1))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_589, -134.8545f, -39.5414f, 94.6072f, 113.1959f, true, false, true);
			__LIB_11__::func_616(5, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
			PERSCHAR::_0x631CD2D77FDC0316(PERSCHAR::_0x32A1E3B83D501096(iLocal_589));
			iLocal_589 = 0;
		}
		if (__LIB_13__::func_521(&(uParam0->f_206), iLocal_588, 0, 0, 1, 1))
		{
			func_648();
		}
		if (__LIB_1__::func_22(5))
		{
			__LIB_11__::func_616(5, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
		}
		VEHICLE::SET_RANDOM_TRAINS(false);
		__LIB_1__::func_600(0);
		VEHICLE::DELETE_ALL_TRAINS();
	}
	return 0;
}

bool func_298(var uParam0)
{
	if (__LIB_0__::func_272(Global_35, 0))
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_755))
		{
			iLocal_755 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-131.2411f, -31.91178f, 95.33f, 0f, 0f, 0f, 6f, 4.5f, 3f, "DUTCH1_INTRO_ACTION_DAMPENING");
		}
		else if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_755, true, 0))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
			HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(1);
			HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(8);
			HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(9);
			HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(2);
			HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(3);
			if (__LIB_0__::func_71(Global_35) && !__LIB_0__::func_163(Global_35, 501393341))
			{
				TASK::TASK_DISMOUNT_ANIMAL(Global_35, 0, 0, 0, 0, 0);
			}
			WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 0, 0);
		}
	}
	switch (iLocal_873)
	{
		case 0:
			iLocal_866 = ANIMSCENE::_CREATE_ANIM_SCENE("script@rcm@dtc1@leadin@rsc_1@leadin", 0, "pl_base", false, true);
			iLocal_867 = ANIMSCENE::_CREATE_ANIM_SCENE("script@rcm@dtc1@leadin@rsc_1@prop_placement", 0, "pl_props", false, true);
			ANIMSCENE::LOAD_ANIM_SCENE(iLocal_866);
			ANIMSCENE::LOAD_ANIM_SCENE(iLocal_867);
			iLocal_756 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLBOX"), VOLUME::_GET_VOLUME_COORDS(Local_14.f_53), VOLUME::_GET_VOLUME_ROTATION(Local_14.f_53), VOLUME::_GET_VOLUME_SCALE(Local_14.f_53));
			VOLUME::_0x5B23DFF8E0948BB2(iLocal_756, 1);
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_589, false);
			PED::SET_PED_CONFIG_FLAG(iLocal_589, 301, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_589, 315, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_588, 315, true);
			iLocal_873 = 1;
			break;
		case 1:
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_866, true, false) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_867, true, false))
			{
				if (MAP::DOES_BLIP_EXIST(Global_1347702[66 /*49*/].f_37))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_588) && !ENTITY::IS_ENTITY_DEAD(iLocal_589))
					{
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_866, "Dutch", iLocal_588, 0);
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_866, "Arthur", Global_35, 0);
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_866, "HoseaMatthews", iLocal_589, 0);
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_866, "p_pen01x", iLocal_598[2], 0);
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_867, "p_cs_map01x", iLocal_598[1], 0);
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_867, "P_INKWELL01X", iLocal_598[3], 0);
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_867, "p_cs_mattress01x", iLocal_598[4], 0);
						ANIMSCENE::START_ANIM_SCENE(iLocal_866);
						ANIMSCENE::START_ANIM_SCENE(iLocal_867);
						ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_866, "pl_argument");
						__LIB_11__::func_598(&iLocal_761, 0);
						__LIB_13__::func_285(&iLocal_761, &Local_822, 0, Global_1347702[66 /*49*/].f_37, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
						__LIB_2__::func_602(&(Local_822[0 /*17*/]), "DCH11_GRT", " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
						__LIB_3__::func_515(&(Local_822[0 /*17*/]), 0, 0);
						PLAYER::_0x3946FC742AC305CD(PLAYER::PLAYER_ID(), iLocal_588, "DTC1_INTRO", -132.21f, -31.47f, 95.33f, 0, 0);
						iLocal_873 = 2;
					}
				}
			}
			break;
		case 2:
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_32, true, 0) && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_866, "pl_argument"))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_866, "pl_argument", true);
				ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_866, "pl_interrupt_1");
				ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_866, "pl_interrupt_2");
				ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_866, "pl_interrupt_3");
				iLocal_873 = 3;
			}
			break;
		case 3:
			if (__LIB_0__::func_665(Global_35, iLocal_588, 0, 1) < 6f)
			{
				HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(1);
				HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(8);
				HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(9);
			}
			if (func_655() != iLocal_871)
			{
				iLocal_871 = func_655();
				func_656(uParam0, func_655());
			}
			if (ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_866, "HoseaMatthews"))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_589, -155.9131f, -49.9594f, 93.895f, 1f, -1, 0.25f, 0, 40000f);
			}
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_54, true, 0) && !ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_47, true, 0))
			{
				__LIB_3__::func_515(&(Local_822[0 /*17*/]), 1, 0);
			}
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_47, true, 0))
			{
				__LIB_2__::func_624(&Local_822, 1, 1, 1, 0);
				__LIB_1__::func_480(&iLocal_588);
			}
			else
			{
				if (!__LIB_1__::func_502(&(Local_822[0 /*17*/])))
				{
					__LIB_11__::func_598(&iLocal_761, 0);
					__LIB_2__::func_602(&(Local_822[0 /*17*/]), "DCH11_GRT", " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
					__LIB_3__::func_515(&(Local_822[0 /*17*/]), 0, 0);
				}
				iLocal_868 = -1;
				iLocal_868 = func_660(&iLocal_588, &iLocal_761, 6f, &Local_822, 0f, 3, 0, 0, 2053, 0, 0, 2, -1082130432 /* Float: -1f */);
				if (iLocal_868 == 0)
				{
					iLocal_869 = func_655();
					iLocal_870 = func_661(iLocal_869);
					__LIB_3__::func_515(&(Local_822[0 /*17*/]), 0, 1);
					PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "DTC1_INTRO");
					PLAYER::_0x3946FC742AC305CD(PLAYER::PLAYER_ID(), iLocal_588, "DTC1_INTRO_TRIGGERED", 0f, 0f, 0f, 0, 0);
					__LIB_1__::func_480(&iLocal_588);
					iLocal_873 = 4;
				}
			}
			break;
		case 4:
			__LIB_18__::func_608(&iLocal_588, &iLocal_761, &Local_822, 6f, -1082130432 /* Float: -1f */, 0);
			HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(1);
			HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(8);
			HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(9);
			if (ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_866, "HoseaMatthews"))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_589, -155.9131f, -49.9594f, 93.895f, 1f, -1, 0.25f, 0, 40000f);
			}
			if (func_655() != iLocal_869 || func_655() == 11)
			{
				if (iLocal_870 == 0)
				{
					if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_866, "pl_interrupt_1"))
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_866, "pl_interrupt_1", true);
						cLocal_872 = func_663(iLocal_869);
						if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_206.f_348, cLocal_872))
						{
						}
						__LIB_12__::func_839(&(uParam0->f_206), cLocal_872);
						iLocal_873 = 5;
					}
				}
				if (iLocal_870 == 1)
				{
					if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_866, "pl_interrupt_2"))
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_866, "pl_interrupt_2", true);
						cLocal_872 = func_663(iLocal_869);
						if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_206.f_348, cLocal_872))
						{
						}
						__LIB_12__::func_839(&(uParam0->f_206), cLocal_872);
						iLocal_873 = 5;
					}
				}
				if (iLocal_870 == 2)
				{
					if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_866, "pl_interrupt_3"))
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_866, "pl_interrupt_3", true);
						cLocal_872 = func_663(iLocal_869);
						if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_206.f_348, cLocal_872))
						{
						}
						__LIB_12__::func_839(&(uParam0->f_206), cLocal_872);
						iLocal_873 = 5;
					}
				}
			}
			break;
		case 5:
			__LIB_18__::func_608(&iLocal_588, &iLocal_761, &Local_822, 6f, -1082130432 /* Float: -1f */, 0);
			HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(1);
			HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(8);
			HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(9);
			if (ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_866, "HoseaMatthews"))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_589, -155.9131f, -49.9594f, 93.895f, 1f, -1, 0.25f, 0, 40000f);
			}
			if (ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(iLocal_866) || ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_866) > 0.9f)
			{
				PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "DTC1_INTRO_TRIGGERED");
				return true;
			}
			break;
	}
	if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_589, 713668775, true) == 8)
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_866, false))
		{
			if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_589, iLocal_866))
			{
				if (__LIB_0__::func_665(iLocal_589, iLocal_588, 1, 1) > 9f)
				{
					if (__LIB_1__::func_22(5))
					{
						__LIB_11__::func_616(5, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
						PERSCHAR::_0x631CD2D77FDC0316(PERSCHAR::_0x32A1E3B83D501096(iLocal_589));
					}
				}
			}
		}
	}
	return false;
}

bool func_301()
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_670))
	{
		iLocal_670 = ANIMSCENE::_CREATE_ANIM_SCENE(sLocal_672, 0, 0, false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(iLocal_670);
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_671))
	{
		iLocal_671 = ANIMSCENE::_CREATE_ANIM_SCENE(sLocal_673, 0, 0, false, true);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_671, "DUTCH", iLocal_588, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_671, "p_pen01x", iLocal_598[2], 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_671, "p_cs_map01x", iLocal_598[1], 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_671, "p_cs_mattress01x", iLocal_598[4], 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_671, "P_INKWELL01X", iLocal_598[3], 0);
		ANIMSCENE::LOAD_ANIM_SCENE(iLocal_671);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_670))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_670, true, false))
		{
			return false;
		}
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_671))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_671, true, false))
		{
			return false;
		}
	}
	return true;
}

bool func_304(int iParam0, var uParam1)
{
	int iVar0;
	switch (iParam0)
	{
		case 0:
			if (__LIB_12__::func_936(uParam1))
			{
				if (func_642(uParam1, -122.4986f, -20.3102f, 95.1169f, 264.0073f, 0))
				{
					if (func_301())
					{
						func_87(uParam1);
					}
					else
					{
						return false;
					}
				}
				else
				{
					return false;
				}
			}
			else if (func_667(uParam1, -124.2632f, -33.3711f, 94.8019f, 305.7135f, -116.1583f, -24.3674f, 94.7642f, 331.1657f, -114.2618f, -33.2364f, 94.8339f, 74.3425f, -112.7511f, -25.7969f, 94.6725f, 336.8074f, 0))
			{
				__LIB_0__::func_569(joaat("MOTIONSTATE_WALK"), 2000, 1, 0, 1, 0, 0, 0);
				if (!func_301())
				{
					return false;
				}
				if (__LIB_1__::func_22(5))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_589))
					{
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_589, -134.8545f, -39.5414f, 94.6072f, 113.1959f, true, false, true);
						iLocal_589 = 0;
					}
					__LIB_11__::func_616(5, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
				}
				if (func_648())
				{
					func_214(0);
				}
				else
				{
					return false;
				}
			}
			else
			{
				return false;
			}
			break;
		case 1:
			if (func_668(uParam1, 847.5649f, -376.0069f, 82.3046f, 244.8701f, 831.5173f, -381.0332f, 82.1589f, 287.0434f, 1, 1, 1))
			{
				func_214(1);
				func_669(1);
				func_669(3);
				func_669(4);
				func_669(5);
				func_669(6);
				func_669(8);
				func_669(9);
				func_669(1);
				func_669(4);
				func_669(5);
				func_669(6);
				func_669(8);
				func_669(11);
				func_669(13);
				func_669(7);
				func_670(1);
				func_670(2);
				func_671(5);
				func_672(2);
				__LIB_13__::func_531(&uLocal_849, 6f, 1);
				func_335(uParam1, iParam0);
				if ((func_674() != 10 && func_674() != 11) && func_674() != 1)
				{
					return false;
				}
				if (!__LIB_4__::func_57(7))
				{
					__LIB_18__::func_610(7, 1, 0, 1, 0);
				}
				TASK::TASK_DISMOUNT_ANIMAL(Global_35, 0, 0, 0, 0, 0);
				__LIB_2__::func_615(vLocal_332);
			}
			else
			{
				return false;
			}
			break;
		case 2:
			if (func_668(uParam1, 905.766f, -402.4473f, 85.3849f, 248.06f, 909.5419f, -405.2713f, 85.1886f, 274.9807f, !__LIB_4__::func_511(), 1, 1))
			{
				func_214(4);
				func_669(4);
				func_334(5);
				func_334(12);
				func_678(0);
				func_335(uParam1, iParam0);
				if ((func_674() != 10 && func_674() != 11) && func_674() != 1)
				{
					return false;
				}
				if (__LIB_4__::func_511())
				{
					StringCopy(&(uParam1->f_2575), "RDTC1_RSC2", 24);
					__LIB_13__::func_33(uParam1, 1);
					__LIB_13__::func_191(&(uParam1->f_206), &(uParam1->f_2575), 0, 1);
					__LIB_0__::func_7(&(uParam1->f_172), 16);
					func_358(uParam1, 0);
				}
				else
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_299))
					{
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_299, 896.02f, -399.99f, 85.77f, -102.52f, true, false, true);
						func_327(iLocal_299, joaat("WEAPON_SHOTGUN_DOUBLEBARREL"), -1, 5, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_299, Global_35, -1, -1f, -1f, -1f);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_299, false);
						PED::_0xAE6004120C18DF97(iLocal_299, 0, 0);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_299, false);
					}
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_300))
					{
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_300, 895.447f, -399.338f, 84.8295f, 258.6547f, true, false, true);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_229);
						TASK::TASK_LOOK_AT_ENTITY(0, Global_35, -1, 0, 51, 0);
						__LIB_1__::func_473(0, joaat("WORLD_HUMAN_WAITING_IMPATIENT"), 0, 0, 0, -1082130432 /* Float: -1f */);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_229);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_300, iLocal_229);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_229);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_300, false);
						PED::_0xAE6004120C18DF97(iLocal_300, 0, 0);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_300, false);
					}
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_301))
					{
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_301, 895.3295f, -400.5071f, 84.7364f, 250.5361f, true, false, true);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_229);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 0, -1f, -1f, -1f);
						__LIB_1__::func_473(0, joaat("WORLD_HUMAN_WAITING_IMPATIENT"), 0, 0, 0, -1082130432 /* Float: -1f */);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_229);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_301, iLocal_229);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_229);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_301, false);
						PED::_0xAE6004120C18DF97(iLocal_301, 0, 0);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_301, false);
					}
					if (__LIB_0__::func_866(7, 0))
					{
						__LIB_1__::func_640(7);
					}
					__LIB_0__::func_904(7, 1);
				}
			}
			else
			{
				return false;
			}
			break;
		case 3:
			if (func_668(uParam1, 674.6827f, -1241.525f, 43.034f, 179.5806f, 674.3607f, -1248.285f, 42.6759f, 188.7102f, 1, 1, 1))
			{
				func_335(uParam1, iParam0);
				if (func_674() != 11)
				{
					return false;
				}
				if (!__LIB_2__::func_618(&uLocal_226))
				{
					__LIB_8__::func_901(&uLocal_226, 1);
					return false;
				}
				else if (__LIB_5__::func_51(&uLocal_226) > 0.5f)
				{
					__LIB_1__::func_551(7, 0);
					func_679(28);
					func_669(20);
					func_669(21);
					func_669(22);
					func_669(23);
					func_669(24);
					func_669(25);
					func_669(26);
					func_669(44);
					func_334(5);
					func_334(3);
					func_214(5);
				}
				else
				{
					return false;
				}
			}
			else
			{
				return false;
			}
			break;
		case 4:
			if (func_667(uParam1, 671.3093f, -1265.509f, 42.9101f, 306.2548f, 666.2999f, -1258.39f, 42.8299f, 16.2314f, 672.5867f, -1264.222f, 42.9841f, 120.7944f, 660.7951f, -1258.086f, 42.7147f, 24.4078f, 0))
			{
				func_335(uParam1, iParam0);
				if (func_674() == 11)
				{
					if (!__LIB_2__::func_618(&uLocal_226))
					{
						__LIB_8__::func_901(&uLocal_226, 1);
						return false;
					}
					else if (__LIB_5__::func_51(&uLocal_226) > 0.5f)
					{
						func_362(1);
						if (iLocal_859 == 3)
						{
							func_679(32);
							func_334(5);
							func_214(7);
						}
						else
						{
							return false;
						}
					}
					else
					{
						return false;
					}
				}
				else
				{
					return false;
				}
			}
			else
			{
				return false;
			}
			break;
		case 5:
			if (func_667(uParam1, 670.0557f, -1266.681f, 42.9028f, 316.9447f, 666.2999f, -1258.39f, 42.8299f, 16.2314f, 670.2813f, -1262.926f, 42.8258f, 225.2803f, 660.7951f, -1258.086f, 42.7147f, 24.4078f, 0))
			{
				func_335(uParam1, iParam0);
				if ((func_674() == 11 && TASK::IS_PED_STILL(iLocal_297)) && PED::_0xA0BC8FAED8CFEB3C(iLocal_297))
				{
					if (PED::_0x290B2E6CCDE532E1(iLocal_297) && !PED::_0x0EEF7A81C17679DB(iLocal_297))
					{
						return false;
					}
					func_334(11);
					func_334(6);
					func_334(10);
					func_334(6);
					func_334(13);
					func_669(34);
					func_669(39);
					func_669(36);
					func_669(37);
					func_669(38);
					func_669(36);
					iVar0 = 0;
					while (iVar0 <= 5)
					{
						func_680(iVar0);
						iVar0++;
					}
					iVar0 = 0;
					while (iVar0 <= 4)
					{
						func_681(iVar0);
						iVar0++;
					}
					PED::SET_PED_CONFIG_FLAG(iLocal_298, 167, true);
					func_214(11);
				}
				else
				{
					return false;
				}
			}
			else
			{
				return false;
			}
			break;
		case 6:
			if (__LIB_4__::func_511())
			{
				if (func_668(uParam1, 930.4344f, -433.8135f, 87.3772f, 341.1417f, 671.1873f, -1236.745f, 43.1583f, 242.7829f, 0, 1, 0))
				{
					func_214(13);
					func_669(34);
					func_335(uParam1, iParam0);
					if (func_674() != 10)
					{
						return false;
					}
					func_214(13);
					StringCopy(&(uParam1->f_2575), "RDTC1_RSC4", 24);
					__LIB_13__::func_33(uParam1, 3);
					__LIB_13__::func_191(&(uParam1->f_206), &(uParam1->f_2575), 0, 1);
					__LIB_0__::func_7(&(uParam1->f_172), 16);
					func_358(uParam1, 0);
				}
				else
				{
					return false;
				}
			}
			else if (func_668(uParam1, 683.9704f, -1174.635f, 44.9531f, 193.687f, 671.1873f, -1236.745f, 43.1583f, 242.7829f, 1, 1, 1))
			{
				func_214(14);
				if (func_389())
				{
					StringCopy(&(uParam1->f_2575), "RDTC1_RSC6", 24);
					__LIB_13__::func_33(uParam1, 4);
					func_358(uParam1, 0);
					MISC::_SET_WEATHER_TYPE(joaat("SUNNY"), true, true, false, 0f, false);
					CLOCK::SET_CLOCK_TIME(18, 0, 0);
					__LIB_0__::func_7(&(uParam1->f_172), 16);
					bLocal_702 = true;
				}
				else
				{
					return false;
				}
			}
			else
			{
				return false;
			}
			break;
	}
	__LIB_12__::func_875(uParam1, iLocal_298, "CHARLES_SMITH", 1);
	__LIB_12__::func_875(uParam1, PLAYER::PLAYER_PED_ID(), "ARTHUR", 0);
	func_342(1);
	return true;
}

int func_320(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
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
			func_706(uParam4);
			if (__LIB_12__::func_688(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_341);
			}
			__LIB_12__::func_800(uParam5);
			if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_348) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam4->f_348, false)) && (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_348) || __LIB_0__::func_84(uParam4, 512)))
			{
				if (!__LIB_0__::func_84(uParam4, 1024) && __LIB_13__::func_14(uParam4, 1))
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
				func_713(uParam4);
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
					func_714(&(uParam4->f_405), 0);
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
				func_713(uParam4);
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

int func_327(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bVar0 = __LIB_0__::func_27(iParam3, 1);
	bVar1 = __LIB_0__::func_27(iParam3, 2);
	bVar2 = !__LIB_0__::func_27(iParam3, 4);
	bVar3 = __LIB_0__::func_27(iParam3, 8);
	bVar4 = !__LIB_0__::func_27(iParam3, 16);
	bVar5 = __LIB_0__::func_27(iParam3, 32);
	bVar6 = __LIB_0__::func_27(iParam3, 64);
	return func_626(iParam0, iParam1, bVar0, bVar1, iParam4, bVar2, bVar3, iParam5, iParam6, iParam2, bVar4, bVar5, bParam7, bVar6);
}

bool func_330(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
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
			__LIB_13__::func_917(uParam0, iParam5, bParam6);
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
				__LIB_13__::func_532(uParam0);
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

bool func_333(int iParam0)
{
	if (iParam0 > 31)
	{
		return MISC::IS_BIT_SET(iLocal_597, (iParam0 - 32));
	}
	return MISC::IS_BIT_SET(iLocal_596, iParam0);
}

void func_334(int iParam0)
{
	if (iParam0 > 31)
	{
		MISC::SET_BIT(&iLocal_597, (iParam0 - 32));
	}
	else
	{
		MISC::SET_BIT(&iLocal_596, iParam0);
	}
}

void func_335(var uParam0, int iParam1)
{
	int iVar0;
	switch (func_674())
	{
		case 0:
			func_753(1);
			if (ENTITY::IS_ENTITY_IN_VOLUME(PLAYER::PLAYER_PED_ID(), Local_14.f_3, true, 0))
			{
				func_753(2);
			}
			if (ENTITY::IS_ENTITY_IN_VOLUME(PLAYER::PLAYER_PED_ID(), Local_14.f_2, true, 0))
			{
				func_753(5);
			}
			break;
		case 1:
			if ((func_206() != 13 && func_206() != 14) && func_206() != 15)
			{
				if (!VOLUME::_DOES_VOLUME_EXIST(Local_14.f_3))
				{
				}
				if (ENTITY::IS_ENTITY_IN_VOLUME(PLAYER::PLAYER_PED_ID(), Local_14.f_3, true, 0))
				{
					func_753(2);
				}
				if (ENTITY::IS_ENTITY_IN_VOLUME(PLAYER::PLAYER_PED_ID(), Local_14.f_2, true, 0))
				{
					func_753(5);
				}
			}
			break;
		case 2:
			if (iLocal_698 != 0)
			{
				PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_698, false);
			}
			iLocal_698 = PED::_0x4C39C95AE5DB1329(Local_14.f_3, 0, 15);
			func_753(6);
			break;
		case 6:
			if (func_365(34))
			{
				STREAMING::REQUEST_MODEL(joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT"), false);
				STREAMING::REQUEST_MODEL(joaat("CS_GERMANMOTHER"), false);
				STREAMING::REQUEST_MODEL(joaat("CS_GERMANSON"), false);
				STREAMING::REQUEST_MODEL(joaat("CS_GERMANDAUGHTER"), false);
				STREAMING::REQUEST_MODEL(joaat("CS_GERMANFATHER"), false);
				STREAMING::REQUEST_MODEL(joaat("WAGON02X"), false);
				func_753(3);
			}
			else
			{
				__LIB_0__::func_401(-313259746);
				STREAMING::REQUEST_MODEL(joaat("RCSP_DUTCH1_MALES_01"), false);
				STREAMING::REQUEST_MODEL(joaat("A_C_VULTURE_01"), false);
				STREAMING::REQUEST_MODEL(joaat("WAGON02X"), false);
				STREAMING::REQUEST_MODEL(joaat("CS_GERMANMOTHER"), false);
				STREAMING::REQUEST_MODEL(joaat("CS_GERMANSON"), false);
				STREAMING::REQUEST_MODEL(joaat("CS_GERMANDAUGHTER"), false);
				STREAMING::REQUEST_ANIM_DICT("AI_DAMAGE@DEAD@BASE");
				func_753(3);
			}
			break;
		case 3:
			if (!func_365(34))
			{
				if (func_755())
				{
					__LIB_12__::func_957(uParam0, iLocal_306, "WAGON02X", 0, joaat("WAGON02X"), 0);
					__LIB_12__::func_957(uParam0, iLocal_687[2], "p_chair_crate02x", 0, joaat("P_CHAIR_CRATE02X"), 0);
					__LIB_12__::func_957(uParam0, iLocal_687[5], "p_crate22x_small", 0, joaat("P_CRATE22X_SMALL"), 0);
					__LIB_12__::func_957(uParam0, iLocal_687[0], "p_debrisboard10x^1", 0, joaat("P_DEBRISBOARD10X"), 0);
					__LIB_12__::func_957(uParam0, iLocal_687[1], "p_debrisboard10x", 0, joaat("P_DEBRISBOARD10X"), 0);
					__LIB_12__::func_957(uParam0, iLocal_687[3], "p_whiskeycrate02x", 0, joaat("P_WHISKEYCRATE02X"), 0);
					__LIB_12__::func_957(uParam0, iLocal_687[4], "s_crateSeat03x", 0, joaat("S_CRATESEAT03X"), 0);
					__LIB_12__::func_957(uParam0, iLocal_687[6], "s_crateSeat03x^1", 0, joaat("S_CRATESEAT03X"), 0);
					func_753(4);
				}
			}
			else
			{
				func_753(4);
			}
			break;
		case 4:
			if (func_365(34))
			{
				if (((((STREAMING::HAS_MODEL_LOADED(joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT")) && STREAMING::HAS_MODEL_LOADED(joaat("CS_GERMANMOTHER"))) && STREAMING::HAS_MODEL_LOADED(joaat("CS_GERMANSON"))) && STREAMING::HAS_MODEL_LOADED(joaat("CS_GERMANDAUGHTER"))) && STREAMING::HAS_MODEL_LOADED(joaat("CS_GERMANFATHER"))) && STREAMING::HAS_MODEL_LOADED(joaat("WAGON02X")))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_299))
					{
						iLocal_299 = __LIB_8__::func_931(joaat("CS_GERMANMOTHER"), 948.221f, -412.2659f, 87.4476f, 215.8547f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
						__LIB_1__::func_473(iLocal_299, joaat("WORLD_HUMAN_WAITING_IMPATIENT"), -1, 0, 0, -1082130432 /* Float: -1f */);
						return;
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_300))
					{
						iLocal_300 = __LIB_8__::func_931(joaat("CS_GERMANSON"), 948.221f, -412.2659f, 87.4476f, 215.8547f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
						return;
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_301))
					{
						iLocal_301 = __LIB_8__::func_931(joaat("CS_GERMANDAUGHTER"), 948.221f, -412.2659f, 87.4476f, 215.8547f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_297))
					{
						iLocal_297 = __LIB_8__::func_931(joaat("CS_GERMANFATHER"), 948.221f, -414.2659f, 87.4476f, 215.8547f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
					}
					PED::_0xAE6004120C18DF97(iLocal_300, 0, 0);
					PED::_0xAE6004120C18DF97(iLocal_301, 0, 0);
					PED::_0xAE6004120C18DF97(iLocal_299, 0, 0);
					TASK::TASK_LOOK_AT_ENTITY(iLocal_299, PLAYER::PLAYER_PED_ID(), -1, 2048, 51, 0);
					TASK::TASK_LOOK_AT_ENTITY(iLocal_300, PLAYER::PLAYER_PED_ID(), -1, 2048, 51, 0);
					TASK::TASK_LOOK_AT_ENTITY(iLocal_301, PLAYER::PLAYER_PED_ID(), -1, 2048, 51, 0);
					iLocal_306 = VEHICLE::CREATE_VEHICLE(joaat("WAGON02X"), 933.83f, -419.8f, 86.84f, 265.9668f, true, true, false, false);
					PROPSET::_0xD80FAF919A2E56EA(iLocal_306, joaat("PG_VEH_GERMFAM_WAGON04X_01"));
					PED::SET_PED_CONFIG_FLAG(iLocal_299, 253, true);
					PED::SET_PED_CONFIG_FLAG(iLocal_300, 253, true);
					PED::SET_PED_CONFIG_FLAG(iLocal_301, 253, true);
					AUDIO::STOP_PED_SPEAKING(iLocal_299, true);
					AUDIO::STOP_PED_SPEAKING(iLocal_300, true);
					AUDIO::STOP_PED_SPEAKING(iLocal_301, true);
					WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_300, true, true);
					WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_301, true, true);
					func_753(10);
					uLocal_233 = GRAPHICS::_0xFA50F79257745E74(855.4815f, -392.0674f, 81.7868f, 5f, 2, -1, 0);
				}
			}
			else
			{
				STREAMING::REQUEST_MODEL(joaat("CS_GERMANMOTHER"), false);
				STREAMING::REQUEST_MODEL(joaat("CS_GERMANSON"), false);
				STREAMING::REQUEST_MODEL(joaat("CS_GERMANDAUGHTER"), false);
				STREAMING::REQUEST_MODEL(joaat("A_C_VULTURE_01"), false);
				STREAMING::REQUEST_MODEL(joaat("RCSP_DUTCH1_MALES_01"), false);
				STREAMING::REQUEST_ANIM_DICT("AI_DAMAGE@DEAD@BASE");
				if (((((STREAMING::HAS_MODEL_LOADED(joaat("CS_GERMANMOTHER")) && STREAMING::HAS_MODEL_LOADED(joaat("CS_GERMANSON"))) && STREAMING::HAS_MODEL_LOADED(joaat("CS_GERMANDAUGHTER"))) && STREAMING::HAS_MODEL_LOADED(joaat("RCSP_DUTCH1_MALES_01"))) && STREAMING::HAS_ANIM_DICT_LOADED("AI_DAMAGE@DEAD@BASE")) && STREAMING::HAS_MODEL_LOADED(joaat("A_C_VULTURE_01")))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_299))
					{
						iLocal_299 = __LIB_8__::func_931(joaat("CS_GERMANMOTHER"), 891.53f, -401.81f, 84.61f, 215.8547f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
						return;
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_300))
					{
						iLocal_300 = __LIB_8__::func_931(joaat("CS_GERMANSON"), 891.05f, -401.12f, 84.59f, 215.8547f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
						return;
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_301))
					{
						iLocal_301 = __LIB_8__::func_931(joaat("CS_GERMANDAUGHTER"), 891.57f, -400.56f, 84.63f, 215.8547f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
						return;
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_306))
					{
						iLocal_306 = VEHICLE::GET_CLOSEST_VEHICLE(896.89f, -403.96f, 85.86f, 2f, joaat("WAGON02X"), 0);
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_312))
					{
						iLocal_312 = __LIB_8__::func_931(joaat("RCSP_DUTCH1_MALES_01"), vLocal_329 - Vector(0.2f, 0f, 0f), Local_582.f_3, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
						__LIB_0__::func_862(iLocal_312, 124736669);
						PED::SET_PED_CONFIG_FLAG(iLocal_312, 186, false);
						PED::SET_PED_CONFIG_FLAG(iLocal_312, 257, true);
						ENTITY::SET_ENTITY_COORDS(iLocal_312, vLocal_329, false, true, true, true);
						ENTITY::SET_ENTITY_ROTATION(iLocal_312, 0f, 0f, Local_582.f_3, 2, false);
						TASK::TASK_PLAY_ANIM(iLocal_312, "AI_DAMAGE@DEAD@BASE", "dead_b", 1000f, -4f, -1, 155648, 0f, false, 0, false, 0, false);
						GRAPHICS::_0xDFCE8CE9F3EBE93F(iLocal_312);
						PED::_0x58D32261AE0F0843(iLocal_312, 14412, -0.025071f, -0.096122f, 0.289241f, -4E-06f, -0.947178f, -0.320708f, "PD_BulletFatalShotgun_Enemy");
						PED::_0x58D32261AE0F0843(iLocal_312, 14412, -0.070563f, 0.145142f, 0.326053f, -0.139824f, 0.989859f, -0.025074f, "PD_BulletFatalShotgun_Enemy");
						ENTITY::_0x18FF3110CF47115D(iLocal_312, 7, 0);
						ENTITY::_0x18FF3110CF47115D(iLocal_312, 2, 0);
						__LIB_2__::func_279(iLocal_312, 1);
						__LIB_3__::func_459(iLocal_312, 0);
						return;
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_316[0]))
					{
						iLocal_316[0] = __LIB_8__::func_931(joaat("A_C_VULTURE_01"), 853.47f, -383.04f, 81.79f, -70.98f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
						return;
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_316[1]))
					{
						iLocal_316[1] = __LIB_8__::func_931(joaat("A_C_VULTURE_01"), 854.47f, -382.71f, 81.75f, 118f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
						return;
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_316[2]))
					{
						iLocal_316[2] = __LIB_8__::func_931(joaat("A_C_VULTURE_01"), 853.26f, -383.71f, 81.79f, -95f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
					}
					if (!__LIB_0__::func_255(iLocal_312, 0) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_312, -2017877118, true) == 1)
					{
					}
					if ((!ENTITY::IS_ENTITY_WAITING_FOR_WORLD_COLLISION(iLocal_316[0]) && !ENTITY::IS_ENTITY_WAITING_FOR_WORLD_COLLISION(iLocal_316[1])) && !ENTITY::IS_ENTITY_WAITING_FOR_WORLD_COLLISION(iLocal_316[2]))
					{
						__LIB_1__::func_473(iLocal_316[0], joaat("WORLD_ANIMAL_VULTURE_EATING"), -1, 0, 0, -1082130432 /* Float: -1f */);
						__LIB_1__::func_473(iLocal_316[1], joaat("WORLD_ANIMAL_VULTURE_EATING"), -1, 0, 0, -1082130432 /* Float: -1f */);
						__LIB_1__::func_473(iLocal_316[2], joaat("WORLD_ANIMAL_VULTURE_EATING"), -1, 0, 0, -1082130432 /* Float: -1f */);
						PED::_0xAE6004120C18DF97(iLocal_300, 0, 0);
						PED::_0xAE6004120C18DF97(iLocal_301, 0, 0);
						PED::_0xAE6004120C18DF97(iLocal_299, 0, 0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_300, true);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_301, true);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_299, true);
						PED::SET_PED_CONFIG_FLAG(iLocal_299, 253, true);
						PED::SET_PED_CONFIG_FLAG(iLocal_300, 253, true);
						PED::SET_PED_CONFIG_FLAG(iLocal_301, 253, true);
						AUDIO::STOP_PED_SPEAKING(iLocal_299, true);
						AUDIO::STOP_PED_SPEAKING(iLocal_300, true);
						AUDIO::STOP_PED_SPEAKING(iLocal_301, true);
						AUDIO::STOP_PED_SPEAKING(iLocal_312, true);
						AUDIO::DISABLE_PED_PAIN_AUDIO(iLocal_312, true);
						func_327(iLocal_299, joaat("WEAPON_SHOTGUN_DOUBLEBARREL"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
						__LIB_3__::func_710(Local_14.f_56, 16);
						iLocal_586 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLBOX"), VOLUME::_GET_VOLUME_COORDS(Local_14.f_57), VOLUME::_GET_VOLUME_ROTATION(Local_14.f_57), VOLUME::_GET_VOLUME_SCALE(Local_14.f_57));
						VOLUME::_0x5B23DFF8E0948BB2(iLocal_586, 1);
						uLocal_234 = GRAPHICS::_0xFA50F79257745E74(858.2007f, -395.1119f, 82.1422f, 3f, 2, -1, 0);
						uLocal_235 = GRAPHICS::_0xFA50F79257745E74(870.5548f, -385.6518f, 83.0092f, 3f, 2, -1, 0);
						func_753(9);
					}
				}
			}
			break;
		case 5:
			__LIB_0__::func_401(-159557995);
			__LIB_5__::func_441("rdtc1_gang_camp");
			if (STREAMING::_IS_POSITION_INSIDE_IMAP_STREAMING_EXTENTS(-159557995, Global_36))
			{
				MISC::_0x2FCD528A397E5C88(Local_14.f_1, 2442122);
				if (iLocal_698 != 0)
				{
					PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_698, false);
				}
				STREAMING::REQUEST_MODEL(joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT"), false);
				STREAMING::REQUEST_MODEL(joaat("CS_GERMANFATHER"), false);
				STREAMING::REQUEST_MODEL(joaat("S_CS_BANDANAGAG01X"), false);
				iLocal_698 = PED::_0x4C39C95AE5DB1329(Local_14, 0, 15);
				func_753(8);
			}
			break;
		case 8:
			if (func_333(5) || iParam1 >= 3)
			{
				if ((STREAMING::HAS_MODEL_LOADED(joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT")) && STREAMING::HAS_MODEL_LOADED(joaat("CS_GERMANFATHER"))) && STREAMING::HAS_MODEL_LOADED(joaat("S_CS_BANDANAGAG01X")))
				{
					if (!func_333(11) && iParam1 != 5)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_297))
						{
							if (!__LIB_3__::func_354())
							{
								if (!ENTITY::DOES_ENTITY_EXIST(iLocal_297))
								{
									func_763(vLocal_338, 149f, 1, 0);
									iLocal_610[0] = TASK::ADD_COVER_POINT(679.5323f, -1250.832f, 43.0256f, 17f, 3, 0, 1, true);
									iLocal_610[1] = TASK::ADD_COVER_POINT(681.51f, -1253.26f, 43.02f, 46f, 3, 0, 1, true);
								}
							}
						}
						else
						{
							ENTITY::_0x9587913B9E772D29(iLocal_297, 0);
							func_753(11);
						}
					}
					else
					{
						func_763(671.8155f, -1265.72f, 42.984f, 118.6525f, 0, 1);
						iLocal_613 = TASK::ADD_COVER_POINT(669.12f, -1259.68f, 42.64f, -63f, 3, 0, 1, false);
						ENTITY::_0x9587913B9E772D29(iLocal_297, 0);
						func_753(11);
					}
				}
			}
			else
			{
				func_753(11);
			}
			break;
		case 9:
			if (!__LIB_2__::func_618(&uLocal_885))
			{
				if (ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(iLocal_312))
				{
					PED::_0x8CB2553C559102C1(iLocal_312, 1, 0);
					__LIB_8__::func_901(&uLocal_885, 0);
				}
			}
			else if (__LIB_5__::func_51(&uLocal_885) > 2f)
			{
				func_753(10);
				__LIB_2__::func_608(&uLocal_885);
			}
			break;
		case 10:
			if (!ENTITY::IS_ENTITY_IN_VOLUME(PLAYER::PLAYER_PED_ID(), Local_14.f_4, true, 0))
			{
				func_753(12);
			}
			break;
		case 11:
			if (ENTITY::IS_ENTITY_IN_VOLUME(PLAYER::PLAYER_PED_ID(), Local_14, true, 0))
			{
				HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(1);
			}
			if (!ENTITY::IS_ENTITY_IN_VOLUME(PLAYER::PLAYER_PED_ID(), Local_14.f_5, true, 0))
			{
				__LIB_0__::func_400(-159557995);
				__LIB_5__::func_440("rdtc1_gang_camp");
				func_753(12);
			}
			break;
		case 12:
			PED::_0x9851DE7AEC10B4E1(vLocal_320, 100f, 1, 0);
			PED::_0x9851DE7AEC10B4E1(vLocal_335, 100f, 1, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_312))
			{
				if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_312, true))
				{
					PED::DELETE_PED(&iLocal_312);
				}
			}
			iVar0 = 0;
			while (iVar0 < Local_236)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_236[iVar0 /*5*/]))
				{
					PED::DELETE_PED(&(Local_236[iVar0 /*5*/]));
				}
				iVar0++;
			}
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_313[0]))
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_313[0]));
			}
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_313[1]))
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_313[1]));
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_299))
			{
				PED::DELETE_PED(&iLocal_299);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_300))
			{
				PED::DELETE_PED(&iLocal_300);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_301))
			{
				PED::DELETE_PED(&iLocal_301);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_297) && func_206() < 12)
			{
				PED::DELETE_PED(&iLocal_297);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_306))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_306, true, true);
				VEHICLE::DELETE_VEHICLE(&iLocal_306);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_711))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_711, true, true);
				OBJECT::DELETE_OBJECT(&iLocal_711);
			}
			iVar0 = 0;
			while (iVar0 < iLocal_316)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_316[iVar0]))
				{
					if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_316[iVar0], true))
					{
						PED::DELETE_PED(&(iLocal_316[iVar0]));
					}
				}
				iVar0++;
			}
			if (VOLUME::_DOES_VOLUME_EXIST(iLocal_586))
			{
				VOLUME::_DELETE_VOLUME(iLocal_586);
			}
			GRAPHICS::_0x9CF1836C03FB67A2(&uLocal_234, 0);
			GRAPHICS::_0x9CF1836C03FB67A2(&uLocal_235, 0);
			func_765();
			func_753(1);
			break;
	}
}

void func_336(var uParam0)
{
	func_766(uParam0);
	if (!bLocal_844)
	{
		__LIB_8__::func_875(iLocal_298, "DCH1_BANT1A", 1, 1);
		__LIB_8__::func_875(iLocal_298, "DCH1_BANT1B", 1, 1);
		__LIB_8__::func_875(iLocal_298, "DCH1_BANT1C", 1, 1);
		__LIB_8__::func_875(iLocal_298, "DCH1_BANT2A", 1, 1);
		__LIB_8__::func_875(iLocal_298, "DCH1_BANT2B", 1, 1);
		__LIB_8__::func_875(iLocal_298, "DCH1_BANT2C", 1, 1);
		__LIB_8__::func_641();
	}
	switch (func_206())
	{
		case 1:
		case 2:
			if (!func_365(47))
			{
				if (__LIB_0__::func_94(Global_35, -279.4312f, 730.8704f, 115.9906f, 1) < 237f)
				{
					if (!__LIB_6__::func_904())
					{
						if (__LIB_5__::func_469(iLocal_298, "PLAYER_WRONG_WAY_WAGON", joaat("SPEECH_PARAMS_FORCE_SHOUTED"), Global_35, 1, 0, 2, 1))
						{
							func_669(47);
						}
					}
				}
			}
			if (!func_365(1))
			{
				if (!__LIB_6__::func_904())
				{
					if (__LIB_12__::func_876(uParam0, "DCH1_HEADOUT", 0))
					{
						TASK::TASK_LOOK_AT_ENTITY(Global_35, iLocal_298, 3000, 0, 51, 0);
						func_669(1);
					}
				}
			}
			if (!func_365(3) && func_365(1))
			{
				if (!__LIB_6__::func_904())
				{
					if (__LIB_12__::func_876(uParam0, "DCH1_REPLY", 0))
					{
						__LIB_8__::func_901(&uLocal_223, 0);
						func_669(3);
					}
				}
			}
			if (func_365(3) && !func_365(2))
			{
				if (!func_351())
				{
					if (__LIB_2__::func_618(&uLocal_223))
					{
						if (__LIB_5__::func_51(&uLocal_223) > 15f)
						{
							if (__LIB_12__::func_876(uParam0, "DCH1_MOUNT", 0))
							{
								__LIB_2__::func_620(&uLocal_223, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 4f));
							}
						}
					}
				}
				else
				{
					func_669(2);
				}
			}
			if (func_365(3))
			{
				if (!func_365(7))
				{
					if (PED::IS_PED_ON_MOUNT(iLocal_298))
					{
						func_669(7);
						if (!ENTITY::IS_ENTITY_DEAD(Global_35))
						{
							PED::_0x1E017404784AA6A3(Global_35, joaat("RDTC1_RIDE1"));
						}
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_298))
						{
							PED::_0x1E017404784AA6A3(iLocal_298, joaat("RDTC1_RIDE1"));
						}
						AUDIO::_0x0D7FD6A55FD63AEF(24, 3, 1);
						AUDIO::_0x0D7FD6A55FD63AEF(21, 3, 1);
						AUDIO::_0x0D7FD6A55FD63AEF(19, 3, 1);
						AUDIO::_0x0D7FD6A55FD63AEF(7, 3, 1);
						AUDIO::_0x0D7FD6A55FD63AEF(34, 3, 0);
						AUDIO::_0x0D7FD6A55FD63AEF(1, 3, 0);
					}
				}
			}
			if (!func_365(4))
			{
				if (!ENTITY::IS_ENTITY_IN_VOLUME(PLAYER::PLAYER_PED_ID(), Local_14.f_6, true, 0))
				{
					if (func_351())
					{
						if (!__LIB_6__::func_904())
						{
							if (__LIB_12__::func_876(uParam0, "DCH1_BANT1A", 0))
							{
								func_669(4);
							}
						}
					}
				}
			}
			if (!func_365(5))
			{
				if (!ENTITY::IS_ENTITY_IN_VOLUME(PLAYER::PLAYER_PED_ID(), Local_14.f_7, true, 0))
				{
					if (!__LIB_6__::func_904())
					{
						if (func_351())
						{
							if (__LIB_12__::func_876(uParam0, "DCH1_BANT1B", 0))
							{
								func_669(5);
							}
						}
					}
				}
			}
			if (!func_365(6) && func_365(5))
			{
				if ((ENTITY::IS_ENTITY_IN_VOLUME(PLAYER::PLAYER_PED_ID(), Local_14.f_19, true, 0) && !ENTITY::IS_ENTITY_IN_VOLUME(PLAYER::PLAYER_PED_ID(), Local_14.f_49, true, 0)) && !func_365(8))
				{
					if (func_351())
					{
						if (!__LIB_6__::func_904())
						{
							if (__LIB_12__::func_876(uParam0, "DCH1_BANT1C", 0))
							{
								func_669(6);
							}
						}
					}
				}
			}
			if (!func_365(8))
			{
				if (ENTITY::IS_ENTITY_IN_VOLUME(PLAYER::PLAYER_PED_ID(), Local_14.f_49, true, 0) && !ENTITY::IS_ENTITY_IN_VOLUME(PLAYER::PLAYER_PED_ID(), Local_14.f_39, true, 0))
				{
					if (iLocal_211 == 0)
					{
						if (__LIB_6__::func_904())
						{
							__LIB_5__::func_20(0, 0);
							iLocal_211 = 1;
						}
						else
						{
							iLocal_211 = 2;
						}
						PED::_0x2B4CE170DE09F346(Global_35, joaat("RDTC1_RIDE1"));
						PED::_0x2B4CE170DE09F346(iLocal_298, joaat("RDTC1_RIDE1"));
						AUDIO::_0x660A8F876DF1D4F8(24);
						AUDIO::_0x660A8F876DF1D4F8(21);
						AUDIO::_0x660A8F876DF1D4F8(19);
						AUDIO::_0x660A8F876DF1D4F8(7);
						AUDIO::_0x660A8F876DF1D4F8(34);
						AUDIO::_0x660A8F876DF1D4F8(1);
						func_669(4);
						func_669(5);
						func_669(6);
					}
					else if (!__LIB_6__::func_904())
					{
						if (iLocal_211 == 1)
						{
							if (__LIB_12__::func_876(uParam0, "DCH1_APPR2", 0))
							{
								func_669(8);
								func_334(2);
								iLocal_211 = 0;
							}
						}
						else if (__LIB_12__::func_876(uParam0, "DCH1_APPR", 0))
						{
							func_669(8);
							func_334(2);
							iLocal_211 = 0;
						}
					}
				}
			}
			if (func_365(8))
			{
				if (!func_365(11) && !func_365(9))
				{
					if (!__LIB_6__::func_904())
					{
						if (ENTITY::IS_ENTITY_IN_VOLUME(PLAYER::PLAYER_PED_ID(), Local_14.f_38, true, 0))
						{
							if (__LIB_12__::func_876(uParam0, "DCH1_COMEON", 0))
							{
								func_669(11);
							}
						}
						else if (__LIB_12__::func_876(uParam0, "DCH1_APPRB", 0))
						{
							func_669(9);
						}
					}
				}
			}
			if (func_365(8) && !func_365(9))
			{
				if (!__LIB_6__::func_904())
				{
					if (ENTITY::IS_ENTITY_IN_VOLUME(PLAYER::PLAYER_PED_ID(), Local_14.f_49, true, 0) && (!ENTITY::IS_ENTITY_IN_VOLUME(PLAYER::PLAYER_PED_ID(), Local_14.f_38, true, 0) || ENTITY::IS_ENTITY_IN_VOLUME(PLAYER::PLAYER_PED_ID(), Local_14.f_18, true, 0)))
					{
						if (__LIB_12__::func_876(uParam0, "DCH1_APPRB", 0))
						{
							func_669(9);
						}
					}
				}
			}
			if ((func_365(9) && !func_365(10)) && !func_365(11))
			{
				if (!__LIB_6__::func_904())
				{
					if (__LIB_12__::func_876(uParam0, "DCH1_SEARCH", 0))
					{
						func_669(10);
					}
				}
				else if (ENTITY::IS_ENTITY_IN_VOLUME(PLAYER::PLAYER_PED_ID(), Local_14.f_18, true, 0))
				{
					if (AUDIO::_0x847748AE5D7B1071(1))
					{
						__LIB_5__::func_20(0, 0);
					}
					else
					{
						__LIB_5__::func_20(1, 0);
					}
				}
			}
			if (!func_365(12) && func_365(9))
			{
				if (!__LIB_2__::func_618(&uLocal_849))
				{
					if (ENTITY::IS_ENTITY_IN_VOLUME(iLocal_298, Local_14.f_18, true, 0))
					{
						__LIB_8__::func_901(&uLocal_849, 1);
					}
				}
				else if (__LIB_5__::func_51(&uLocal_849) > 3f)
				{
					if (!__LIB_6__::func_904())
					{
						if (ENTITY::IS_ENTITY_IN_VOLUME(PLAYER::PLAYER_PED_ID(), Local_14.f_18, true, 0))
						{
							if (__LIB_12__::func_876(uParam0, "DCH1_CLOSER", 0))
							{
								func_669(12);
							}
						}
					}
				}
			}
			if (func_365(12) && !func_365(13))
			{
				if (!PED::IS_PED_INJURED(iLocal_298))
				{
					if (ENTITY::IS_ENTITY_IN_VOLUME(PLAYER::PLAYER_PED_ID(), Local_14.f_18, true, 0) && __LIB_5__::func_51(&uLocal_849) > 6f)
					{
						if (!__LIB_6__::func_904())
						{
							if (__LIB_12__::func_876(uParam0, "DCH1_BODY", 0))
							{
								func_669(13);
							}
						}
					}
				}
			}
			if (!func_365(14))
			{
				if (!func_365(15))
				{
					if (__LIB_10__::func_387(iLocal_312))
					{
						if (!__LIB_2__::func_618(&uLocal_725))
						{
							__LIB_8__::func_901(&uLocal_725, 0);
						}
						else if (__LIB_5__::func_51(&uLocal_725) > 1.5f)
						{
							func_669(15);
						}
					}
				}
				else if (bLocal_742 || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_680, false))
				{
					if (!__LIB_6__::func_904())
					{
						if (__LIB_12__::func_876(uParam0, "DCH1_LOOT", 0))
						{
							if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_680, false))
							{
								if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_680))
								{
									ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_680);
								}
								if (WEAPON::HAS_PED_GOT_WEAPON(iLocal_298, joaat("WEAPON_SHOTGUN_SAWEDOFF_CHARLES"), 0, false))
								{
									WEAPON::SET_CURRENT_PED_WEAPON(iLocal_298, joaat("WEAPON_SHOTGUN_SAWEDOFF_CHARLES"), false, 0, false, false);
								}
							}
							func_669(14);
						}
					}
				}
			}
			if (!func_365(16) && func_365(13))
			{
				if (func_357() >= 7)
				{
					if (__LIB_0__::func_665(Global_35, iLocal_298, 1, 1) < 10f)
					{
						if (!__LIB_6__::func_904())
						{
							if (__LIB_12__::func_876(uParam0, "DCH1_SHOT", 0))
							{
								func_669(16);
							}
						}
					}
				}
				else if (__LIB_0__::func_665(Global_35, iLocal_312, 1, 1) < 4f && ENTITY::IS_ENTITY_ON_SCREEN(iLocal_312))
				{
					if (iLocal_115 == 5)
					{
						if (!__LIB_6__::func_904())
						{
							if (__LIB_12__::func_876(uParam0, "DCH1_SHOTA", 0))
							{
								func_669(16);
							}
						}
					}
				}
			}
			if ((!func_365(17) && func_365(16)) && !func_333(35))
			{
				if (!__LIB_6__::func_903("DCH1_SHOTA") && !__LIB_6__::func_903("DCH1_SHOT"))
				{
					if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_51, true, 0) || func_365(14))
					{
						if (!__LIB_8__::func_684("DCH1_IG1_P1"))
						{
							if (func_365(45))
							{
								if (!__LIB_5__::func_463())
								{
									if (__LIB_12__::func_876(uParam0, "DCH1_COMEA", 0))
									{
										func_669(17);
										func_672(8);
										__LIB_13__::func_526(5);
									}
								}
							}
							else if (!__LIB_5__::func_463())
							{
								if (__LIB_12__::func_876(uParam0, "DCH1_COMEA2", 0))
								{
									func_669(17);
									func_672(8);
									__LIB_13__::func_526(5);
								}
							}
						}
						else if (ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_679) > 3f)
						{
							if (bLocal_742)
							{
								func_669(45);
							}
						}
					}
				}
			}
			if (!func_365(19) && func_365(16))
			{
				if (!__LIB_6__::func_904())
				{
					if (ENTITY::IS_ENTITY_IN_VOLUME(iLocal_298, Local_14.f_33, true, 0))
					{
						if (__LIB_12__::func_876(uParam0, "DCH1_TENT", 0))
						{
							func_669(19);
						}
					}
					else if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_33, true, 0))
					{
						if (__LIB_12__::func_876(uParam0, "DCH1_ATENT", 0))
						{
							func_669(19);
						}
					}
				}
			}
			break;
		case 4:
		case 5:
		case 6:
			if (!func_365(20))
			{
				if (func_333(19))
				{
					func_669(20);
					__LIB_8__::func_901(&uLocal_223, 1);
					if (!ENTITY::IS_ENTITY_DEAD(Global_35))
					{
						PED::_0x1E017404784AA6A3(Global_35, joaat("RDTC1_RIDE2"));
					}
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_298))
					{
						PED::_0x1E017404784AA6A3(iLocal_298, joaat("RDTC1_RIDE2"));
					}
					AUDIO::_0x0D7FD6A55FD63AEF(24, 3, 1);
					AUDIO::_0x0D7FD6A55FD63AEF(21, 3, 1);
					AUDIO::_0x0D7FD6A55FD63AEF(19, 3, 1);
					AUDIO::_0x0D7FD6A55FD63AEF(34, 3, 0);
					AUDIO::_0x0D7FD6A55FD63AEF(1, 3, 0);
					__LIB_12__::func_997(uParam0, func_61(2), func_61(3), 2, 3, 0);
				}
			}
			if (func_365(20))
			{
				if (!PED::IS_PED_ON_MOUNT(Global_35))
				{
					if (__LIB_2__::func_618(&uLocal_223))
					{
						if (__LIB_5__::func_51(&uLocal_223) > 8f)
						{
							if (__LIB_12__::func_876(uParam0, "DCH1_MOUNT2", 0))
							{
								func_669(18);
								__LIB_2__::func_620(&uLocal_223, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 2f));
							}
						}
					}
				}
				else
				{
					__LIB_2__::func_608(&uLocal_223);
				}
			}
			if (!func_365(21))
			{
				if (ENTITY::IS_ENTITY_IN_VOLUME(PLAYER::PLAYER_PED_ID(), Local_14.f_20, true, 0))
				{
					if (func_351())
					{
						if (!__LIB_6__::func_904())
						{
							if (__LIB_12__::func_876(uParam0, "DCH1_BANT2A", 0))
							{
								func_669(21);
							}
						}
					}
				}
			}
			if (!func_365(25))
			{
				if (ENTITY::IS_ENTITY_IN_VOLUME(PLAYER::PLAYER_PED_ID(), Local_14.f_21, true, 0))
				{
					if (func_351())
					{
						if (!__LIB_6__::func_904())
						{
							if (__LIB_12__::func_876(uParam0, "DCH1_BANT2B", 0))
							{
								func_669(25);
							}
						}
					}
				}
			}
			if (!func_365(26))
			{
				if (ENTITY::IS_ENTITY_IN_VOLUME(PLAYER::PLAYER_PED_ID(), Local_14.f_22, true, 0))
				{
					if (func_351())
					{
						if (!__LIB_6__::func_904())
						{
							if (__LIB_12__::func_876(uParam0, "DCH1_BANT2C", 0))
							{
								func_669(26);
							}
						}
					}
				}
			}
			if (!func_365(28))
			{
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_298, 0))
				{
					if (TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_298) > 550)
					{
						if (iLocal_211 == 0)
						{
							if (__LIB_6__::func_904())
							{
								__LIB_5__::func_20(1, 0);
								iLocal_211 = 1;
							}
							else
							{
								iLocal_211 = 2;
							}
						}
						else if (!__LIB_6__::func_904())
						{
							if (iLocal_211 == 1)
							{
								if (__LIB_12__::func_876(uParam0, "DCH1_QUIET", 0))
								{
									func_214(5);
									func_669(28);
								}
							}
							else if (__LIB_12__::func_876(uParam0, "DCH1_SPOTS", 0))
							{
								func_214(5);
								func_669(28);
							}
						}
					}
				}
			}
			if (!func_365(31))
			{
				if (func_365(28))
				{
					if ((TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_298, 0) && TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_298) > 569) || !TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_298, 0))
					{
						if (!__LIB_6__::func_904())
						{
							PED::_0x2B4CE170DE09F346(Global_35, joaat("RDTC1_RIDE2"));
							PED::_0x2B4CE170DE09F346(iLocal_298, joaat("RDTC1_RIDE2"));
							AUDIO::_0x660A8F876DF1D4F8(24);
							AUDIO::_0x660A8F876DF1D4F8(21);
							AUDIO::_0x660A8F876DF1D4F8(19);
							AUDIO::_0x660A8F876DF1D4F8(34);
							AUDIO::_0x660A8F876DF1D4F8(1);
							if (__LIB_12__::func_876(uParam0, "DCH1_ARRIVE", 0))
							{
								__LIB_1__::func_721(7);
								WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 0, 0);
								WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
								func_669(31);
							}
						}
					}
				}
			}
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_14, true, 0))
			{
				if (!__LIB_2__::func_618(&uLocal_154))
				{
					__LIB_8__::func_901(&uLocal_154, 0);
				}
				else if (__LIB_5__::func_51(&uLocal_154) > 5f)
				{
					if (__LIB_12__::func_876(uParam0, "DCH1_VICTIM", 0))
					{
						__LIB_2__::func_620(&uLocal_154, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 2f));
					}
				}
			}
			if (func_333(16) && !func_365(30))
			{
				if (!__LIB_6__::func_904())
				{
					if (__LIB_12__::func_876(uParam0, "DCH1_UNTIE", 0))
					{
						func_669(30);
					}
				}
			}
			if (func_365(30))
			{
				func_776(uParam0, "DCH1_WAIT", &uLocal_142, 8f, 3);
			}
			break;
		case 8:
		case 9:
		case 10:
		case 11:
			if (iLocal_214 == 11)
			{
				if (!func_365(39))
				{
					if (func_776(uParam0, "DCH1_OVER", &uLocal_145, 2.5f, 1))
					{
						__LIB_8__::func_901(&uLocal_716, 1);
						func_669(39);
					}
				}
			}
			if (func_333(11))
			{
				if (!__LIB_6__::func_904())
				{
					if (!func_365(35))
					{
						if (__LIB_12__::func_876(uParam0, "DCH1_ARTH_FREE", 0))
						{
							func_669(35);
						}
					}
				}
			}
			if (func_365(39))
			{
				if (!func_365(34))
				{
					if (!__LIB_6__::func_904())
					{
						if (!PED::IS_PED_INJURED(iLocal_297))
						{
							if (!PED::_IS_PED_HOGTIED(iLocal_297) && !TASK::IS_PED_GETTING_UP(iLocal_297))
							{
								if (__LIB_12__::func_876(uParam0, "DCH1_TALK", 0))
								{
									TASK::TASK_EVASIVE_ANIM(iLocal_297, Global_35, __LIB_0__::func_771(768));
									func_669(34);
								}
							}
							else if (!TASK::IS_PED_GETTING_UP(iLocal_297) && !__LIB_4__::func_215(Global_35))
							{
								if (__LIB_5__::func_51(&uLocal_716) > 6f)
								{
									if (iLocal_213 < 2)
									{
										if (__LIB_12__::func_876(uParam0, "DCH1_GERMAN3", 0))
										{
											__LIB_2__::func_620(&uLocal_716, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 2f));
											iLocal_213++;
										}
									}
									else if (__LIB_12__::func_876(uParam0, "DCH1_WAITING", 0))
									{
										__LIB_2__::func_620(&uLocal_716, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 2f));
										iLocal_213 = 0;
									}
								}
							}
						}
					}
				}
			}
			break;
		case 12:
			if (!func_365(40))
			{
				if (!__LIB_2__::func_618(&uLocal_157))
				{
					__LIB_8__::func_901(&uLocal_157, 0);
				}
				else if (__LIB_5__::func_51(&uLocal_157) % 100000f) > (8f + (IntToFloat(BUILTIN::FLOOR((__LIB_5__::func_51(&uLocal_157) / 100000f))) * 4f))
				{
					if (!__LIB_6__::func_904())
					{
						if (__LIB_12__::func_876(uParam0, "DCH1_GMNW", 0))
						{
							if (BUILTIN::FLOOR((__LIB_5__::func_51(&uLocal_157) / 100000f)) < 2)
							{
								__LIB_2__::func_620(&uLocal_157, BUILTIN::TO_FLOAT(((BUILTIN::FLOOR((__LIB_5__::func_51(&uLocal_157) / 100000f)) * 100000) + 100000)));
							}
							else
							{
								func_669(40);
							}
						}
					}
				}
			}
			if (!func_365(41))
			{
				if (PED::IS_PED_ON_MOUNT(Global_35) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
				{
					if (!__LIB_6__::func_904())
					{
						if (__LIB_12__::func_876(uParam0, "DCH1_GMNM", 0))
						{
							func_669(41);
							func_669(40);
						}
					}
				}
			}
			if (!func_365(42))
			{
				if (!ENTITY::IS_ENTITY_IN_VOLUME(PLAYER::PLAYER_PED_ID(), Local_14.f_2, true, 0))
				{
					if (__LIB_12__::func_876(uParam0, "DCH1_WAYBACK", 0))
					{
						func_669(42);
					}
				}
			}
			if (func_333(7) && !func_365(43))
			{
				__LIB_5__::func_20(0, 0);
				if (__LIB_12__::func_876(uParam0, "DCH1_BACK", 0))
				{
					func_669(43);
				}
			}
			break;
	}
}

void func_337(var uParam0)
{
	var uVar0;
	if (iLocal_114 != iLocal_115)
	{
		func_777(1);
		func_778();
		switch (iLocal_114)
		{
			case 2:
				__LIB_1__::func_718(7);
				__LIB_0__::func_635(16);
				func_781(uParam0, iLocal_114, "DCH1_MNT", 1);
				break;
			case 3:
				func_781(uParam0, iLocal_114, "DCH1_INS01", 0);
				AUDIO::TRIGGER_MUSIC_EVENT("RDTC1_START");
				iLocal_78[0] = __LIB_5__::func_554(408396114, Local_14.f_18, 1);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_78[0], "DUTCH11_BLIP_DEWBERRY");
				break;
			case 4:
				func_781(uParam0, iLocal_114, "DCH1_INS02", 0);
				iLocal_78[1] = __LIB_5__::func_554(408396114, Local_14.f_18, 1);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_78[1], "DUTCH11_BLIP_DEWBERRY");
				break;
			case 5:
				ENTITY::_0x18FF3110CF47115D(iLocal_312, 10, 0);
				PED::_0x6569F31A01B4C097(iLocal_312, 4, 0);
				iLocal_78[2] = __LIB_4__::func_983(408396114, ENTITY::GET_ENTITY_COORDS(iLocal_312, false, false), 1);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_78[2], "DUTCH11_BLIP_BODY");
				func_781(uParam0, iLocal_114, "DCH1_INS03", 0);
				break;
			case 6:
				if (!iLocal_840[0])
				{
					iLocal_78[3] = __LIB_5__::func_554(408396114, Local_14.f_27, 1);
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_78[3], "DUTCH11_BLIP_TENT");
				}
				if (!iLocal_840[1])
				{
					iLocal_78[4] = __LIB_5__::func_554(408396114, Local_14.f_28, 1);
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_78[4], "DUTCH11_BLIP_TENT");
				}
				if (!iLocal_840[2])
				{
					iLocal_78[5] = __LIB_5__::func_554(408396114, Local_14.f_29, 1);
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_78[5], "DUTCH11_BLIP_WAGON");
				}
				func_781(uParam0, iLocal_114, "DCH1_INS04", 0);
				break;
			case 7:
				__LIB_1__::func_718(7);
				__LIB_0__::func_635(16);
				func_781(uParam0, iLocal_114, "DCH1_MNT", 1);
				break;
			case 8:
				func_781(uParam0, iLocal_114, "DUTCH11_GO_CHARLES", 0);
				__LIB_0__::func_900(7);
				break;
			case 9:
				iLocal_78[6] = __LIB_5__::func_554(408396114, Local_14.f_14, 1);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_78[6], "DUTCH11_BLIP_CAMP");
				func_781(uParam0, iLocal_114, "DUTCH11_LOOK_HOSTAGE", 0);
				break;
			case 10:
				iLocal_78[7] = MAP::_BLIP_ADD_FOR_ENTITY(-1749618580, iLocal_297);
				MAP::_BLIP_SET_MODIFIER(iLocal_78[7], -401963276);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_78[7], "DUTCH11_BLIP_FATHER");
				func_781(uParam0, iLocal_114, "DUTCH11_GO_UNTIE", 0);
				break;
			case 12:
				func_781(uParam0, iLocal_114, "DUTCH11_ATTACKED", 0);
				break;
			case 13:
				iLocal_78[7] = MAP::_BLIP_ADD_FOR_ENTITY(-1749618580, iLocal_297);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_78[7], "DUTCH11_BLIP_FATHER");
				MAP::_BLIP_SET_MODIFIER(iLocal_78[7], -401963276);
				func_781(uParam0, iLocal_114, "DUTCH11_GO_UNTIE", 0);
				break;
			case 15:
				func_781(uParam0, iLocal_114, "DUTCH11_RETURN", 0);
				__LIB_4__::func_705(7, 1);
				iLocal_78[8] = __LIB_4__::func_983(408396114, vLocal_341, 1);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_78[8], "DUTCH11_BLIP_FAMILY");
				iLocal_78[15] = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_COMPANION"), iLocal_297);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_78[15], "DUTCH11_BLIP_FATHER");
				break;
		}
		iLocal_115 = iLocal_114;
	}
	switch (iLocal_115)
	{
		case 2:
			func_786(uParam0, 1);
			__LIB_1__::func_538(1);
			PLAYER::_0xC71D07C96946E263(PLAYER::PLAYER_ID(), __LIB_0__::func_398(7));
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LEAD_ANIMAL"), false);
			if (PED::GET_MOUNT(Global_35) == __LIB_0__::func_398(7))
			{
				func_671(3);
				__LIB_1__::func_724(16);
			}
			if (func_365(8))
			{
				if (!__LIB_6__::func_904())
				{
					__LIB_1__::func_724(16);
					func_671(4);
				}
			}
			break;
		case 3:
			func_786(uParam0, 2);
			if (func_365(8))
			{
				if (!__LIB_6__::func_904())
				{
					__LIB_1__::func_724(16);
					func_671(4);
				}
			}
			if (iLocal_115 == 3)
			{
				if (PED::GET_MOUNT(Global_35) != __LIB_0__::func_398(7))
				{
					func_671(2);
				}
			}
			break;
		case 4:
			func_786(uParam0, 3);
			if (func_365(12))
			{
				if (!__LIB_6__::func_904())
				{
					func_671(5);
				}
			}
			break;
		case 5:
			func_786(uParam0, 4);
			if (((func_365(17) && !__LIB_6__::func_903("DCH1_COMEA")) && !__LIB_6__::func_903("DCH1_COMEA2")) || (__LIB_8__::func_684("DCH1_IG1_P1") && AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("DCH1_IG1_P1") == 1))
			{
				func_671(6);
			}
			break;
		case 6:
			func_786(uParam0, 5);
			if (MAP::DOES_BLIP_EXIST(iLocal_78[3]))
			{
				if ((ENTITY::IS_ENTITY_IN_VOLUME(iLocal_298, Local_14.f_27, true, 0) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_27, true, 0)) || (TASK::_0x508F5053E3F6F0C4(Global_35, VOLUME::_GET_VOLUME_COORDS(Local_14.f_27), 20f) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_40, true, 0)))
				{
					MAP::REMOVE_BLIP(&(iLocal_78[3]));
					iLocal_840[0] = 1;
				}
			}
			if (MAP::DOES_BLIP_EXIST(iLocal_78[4]))
			{
				if ((ENTITY::IS_ENTITY_IN_VOLUME(iLocal_298, Local_14.f_28, true, 0) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_28, true, 0)) || (TASK::_0x508F5053E3F6F0C4(Global_35, VOLUME::_GET_VOLUME_COORDS(Local_14.f_28), 20f) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_41, true, 0)))
				{
					MAP::REMOVE_BLIP(&(iLocal_78[4]));
					iLocal_840[1] = 1;
				}
			}
			if (MAP::DOES_BLIP_EXIST(iLocal_78[5]))
			{
				if (iLocal_129 == 20)
				{
					MAP::REMOVE_BLIP(&(iLocal_78[5]));
					iLocal_840[2] = 1;
				}
			}
			if (func_206() != 2 || (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_215, false) && ANIMSCENE::_0x1F0E401031E20146(iLocal_215, "pl_Arthur_First_LEADIN")))
			{
				func_671(7);
			}
			break;
		case 7:
			__LIB_1__::func_538(1);
			PLAYER::_0xC71D07C96946E263(PLAYER::PLAYER_ID(), __LIB_0__::func_398(7));
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LEAD_ANIMAL"), false);
			func_786(uParam0, 1);
			if (PED::GET_MOUNT(Global_35) == __LIB_0__::func_398(7))
			{
				func_671(8);
			}
			if (func_365(28))
			{
				if (!__LIB_6__::func_904())
				{
					func_671(9);
				}
			}
			break;
		case 8:
			func_786(uParam0, 2);
			if (PED::GET_MOUNT(Global_35) != __LIB_0__::func_398(7))
			{
				func_671(7);
			}
			else if (func_365(28))
			{
				if (!__LIB_6__::func_904())
				{
					func_671(9);
				}
			}
			if (func_365(31) && !__LIB_6__::func_903("DCH1_ARRIVE"))
			{
				func_671(9);
			}
			break;
		case 9:
			func_786(uParam0, 6);
			if (func_333(16))
			{
				func_671(10);
			}
			break;
		case 10:
			func_786(uParam0, 7);
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_682, false))
			{
				func_671(11);
			}
			break;
		case 11:
			if (func_206() == 8)
			{
				if (!__LIB_2__::func_618(&uLocal_151))
				{
					__LIB_8__::func_901(&uLocal_151, 0);
				}
				else if (__LIB_5__::func_51(&uLocal_151) > 3f)
				{
					func_671(12);
				}
			}
			break;
		case 12:
			func_786(uParam0, 6);
			if (func_365(39))
			{
				if (!__LIB_6__::func_904())
				{
					func_671(13);
				}
			}
			break;
		case 13:
			func_786(uParam0, 7);
			if (func_333(11) && __LIB_4__::func_215(Global_35))
			{
				func_671(14);
			}
			break;
		case 14:
			if (func_333(17))
			{
				func_671(15);
			}
			break;
		case 15:
			func_786(uParam0, 8);
			if (__LIB_2__::func_618(&uLocal_749))
			{
				func_671(1);
			}
			break;
	}
	switch (func_206())
	{
		case 1:
		case 2:
			if (func_206() == 1)
			{
				if (!func_788(0))
				{
					if (func_374() == 0)
					{
						if (PED::GET_MOUNT(Global_35) != __LIB_0__::func_398(7))
						{
							func_671(2);
						}
						else
						{
							func_671(3);
						}
					}
					func_670(0);
				}
			}
			if (!func_788(6))
			{
				if (!Global_40.f_9421)
				{
					if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_6, true, 0))
					{
						if (!__LIB_2__::func_618(&uLocal_163))
						{
							__LIB_8__::func_901(&uLocal_163, 0);
						}
						else if (__LIB_5__::func_51(&uLocal_163) > 15f && !CAM::_0x5060FA977CEA4455())
						{
							__LIB_1__::func_240(569, 1);
							__LIB_2__::func_608(&uLocal_163);
							func_670(6);
						}
					}
				}
			}
			break;
		case 4:
			if (!func_365(44))
			{
				if (__LIB_12__::func_876(uParam0, "DCH1_SETOFF", 0))
				{
					func_669(44);
				}
			}
			if (func_374() == 0)
			{
				if (PED::GET_MOUNT(Global_35) != __LIB_0__::func_398(7))
				{
					func_671(7);
				}
				else
				{
					func_671(8);
				}
			}
			break;
		case 5:
			if (func_374() == 0)
			{
				func_671(9);
			}
			break;
		case 6:
			break;
		case 8:
			if (func_374() == 0)
			{
				func_671(11);
			}
			break;
		case 12:
			if (func_374() == 0)
			{
				func_671(15);
			}
			if (PED::_0x608BC6A6AACD5036(&uVar0, iLocal_592, 4, 0))
			{
				if (!__LIB_0__::func_30(iLocal_697) || !__LIB_0__::func_269(iLocal_697))
				{
					iLocal_697 = __LIB_0__::func_45("DUTCH11_SPACE", -1, 0, 0, 0, 1);
				}
			}
			else if (__LIB_0__::func_269(iLocal_697))
			{
				__LIB_0__::func_105(1);
			}
			break;
	}
}

void func_338()
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_670))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(iLocal_670))
		{
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_671, false))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_671, true, false))
				{
					ANIMSCENE::START_ANIM_SCENE(iLocal_671);
				}
			}
		}
	}
}

void func_339()
{
	if (bLocal_700)
	{
		if ((BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(Global_35)) / BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, true))) < 0.5f)
		{
			bLocal_700 = false;
		}
	}
	if (!bLocal_701)
	{
		if (iLocal_214 == 12)
		{
			if (!__LIB_2__::func_618(&uLocal_722))
			{
				__LIB_8__::func_901(&uLocal_722, 0);
			}
			else if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_669, false))
			{
				if (__LIB_5__::func_51(&uLocal_722) < 120f)
				{
					bLocal_701 = true;
				}
			}
		}
	}
}

void func_342(int iParam0)
{
	if (iParam0 > 31)
	{
		MISC::CLEAR_BIT(&iLocal_597, (iParam0 - 32));
	}
	else
	{
		MISC::CLEAR_BIT(&iLocal_596, iParam0);
	}
}

void func_345(var uParam0)
{
	int iVar0;
	if (func_357() == 1 || func_357() == 2)
	{
		__LIB_11__::func_525(iLocal_298, iLocal_592, PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX()));
		__LIB_11__::func_780(iLocal_298, &uLocal_731);
	}
	switch (func_357())
	{
		case 0:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_298))
			{
				if (!PED::IS_PED_ON_MOUNT(iLocal_298))
				{
					if (func_365(1))
					{
						if (!__LIB_2__::func_618(&uLocal_719))
						{
							__LIB_8__::func_901(&uLocal_719, 1);
						}
						else if (__LIB_5__::func_51(&uLocal_719) > 3f)
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_591))
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_229);
								TASK::TASK_MOUNT_ANIMAL(0, iLocal_591, 20000, -1, 1f, 1, 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_229);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_298, iLocal_229);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_229);
								func_672(1);
							}
						}
					}
				}
				else
				{
					func_672(1);
				}
			}
			break;
		case 1:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_298))
			{
				if (!PED::IS_PED_ON_MOUNT(iLocal_298) && (!__LIB_0__::func_163(iLocal_298, 242628503) || __LIB_9__::func_324(&uLocal_719) > 10f))
				{
					__LIB_5__::func_107(&uLocal_719);
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_591) && !TASK::IS_PED_GETTING_UP(iLocal_591))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_229);
						TASK::TASK_MOUNT_ANIMAL(0, iLocal_591, 20000, -1, 1f, 1, 0, 0);
						TASK::TASK_LOOK_AT_ENTITY(0, Global_35, -1, 0, 51, 0);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_229);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_298, iLocal_229);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_229);
					}
				}
				if (PED::IS_PED_ON_MOUNT(iLocal_298) && !PED::IS_PED_ON_MOUNT(Global_35))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_298, -875674219, true) == 8)
					{
						if (__LIB_0__::func_665(Global_35, iLocal_298, 1, 1) > 2.5f || TASK::IS_PED_STILL(Global_35))
						{
							if (!PED::IS_PED_FACING_PED(iLocal_298, Global_35, 50f))
							{
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_298, Global_35, 2000, -1f, -1f, -1f);
							}
						}
					}
				}
			}
			if (PED::IS_PED_ON_MOUNT(iLocal_298) && func_351())
			{
				TASK::CLEAR_PED_TASKS(iLocal_298, true, false);
				__LIB_1__::func_551(7, 0);
				PED::SET_PED_CONFIG_FLAG(iLocal_298, 167, true);
				iVar0 = PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
				PED::SET_GROUP_FORMATION(iVar0, 3);
				PED::_0x8AFCCC0F18D70018(iVar0, 1);
				func_672(2);
			}
			break;
		case 2:
		case 4:
			if (!func_333(34))
			{
				if (ENTITY::IS_ENTITY_IN_VOLUME(PLAYER::PLAYER_PED_ID(), Local_14.f_6, true, 0))
				{
					func_334(34);
					PED::_0x8AFCCC0F18D70018(PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX()), 0);
				}
			}
			if (func_365(10))
			{
				if (func_357() != 4)
				{
					if (!PED::IS_PED_INJURED(iLocal_298))
					{
						if (__LIB_0__::func_866(7, 0))
						{
							__LIB_1__::func_640(7);
						}
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_298, true);
						PED::SET_PED_CONFIG_FLAG(iLocal_298, 167, false);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_229);
						if (__LIB_0__::func_94(Global_35, 843.0706f, -414.6672f, 81.4514f, 1) < __LIB_0__::func_94(Global_35, 909.4474f, -337.602f, 82.4803f, 1))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 843.0706f, -414.6672f, 81.4514f, 2.001f, -1, 0.25f, 4, 40000f);
						}
						else
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 910.0875f, -353.7184f, 82.3668f, 2.001f, -1, 0.25f, 1056773, 40000f);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 870.6002f, -376.0871f, 81.9137f, 2.001f, -1, 0.25f, 1056773, 40000f);
						}
						TASK::CLOSE_SEQUENCE_TASK(iLocal_229);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_298, iLocal_229);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_229);
						PED::FORCE_PED_MOTION_STATE(iLocal_591, joaat("MOTIONSTATE_SPRINT"), false, 0, false);
						if (!__LIB_4__::func_57(7))
						{
							__LIB_18__::func_610(7, 1, 0, 0, 0);
						}
						__LIB_0__::func_904(7, 1);
						func_672(4);
					}
				}
			}
			if (func_365(12))
			{
				func_672(3);
				if (!PED::IS_PED_INJURED(iLocal_298))
				{
					if (__LIB_0__::func_866(7, 0))
					{
						__LIB_1__::func_640(7);
					}
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_298, true);
					PED::SET_PED_CONFIG_FLAG(iLocal_298, 167, false);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_229);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_332, 1.501f, -1, 0.25f, 4, 40000f);
					TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_229);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_298, iLocal_229);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_229);
					if (!__LIB_4__::func_57(7))
					{
						__LIB_18__::func_610(7, 1, 0, 0, 0);
					}
					__LIB_0__::func_904(7, 1);
					func_214(2);
					__LIB_12__::func_997(uParam0, func_61(1), func_61(2), 1, 2, 0);
				}
			}
			break;
		case 3:
			if (!PED::IS_PED_ON_MOUNT(iLocal_298))
			{
				AUDIO::STOP_PED_SPEAKING(iLocal_298, true);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_229);
				TASK::TASK_LOOK_AT_COORD(0, 854.0184f, -383.319f, 82.078f, 10000, 0, 51, 0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_326, 1.5f, -1, 0.5f, 0, -93.8599f);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_229);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_298, iLocal_229);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_229);
				func_672(6);
			}
			break;
		case 6:
			if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_298, 242628503, true) == 8)
			{
				if (__LIB_0__::func_94(iLocal_298, vLocal_326, 0) < 1f)
				{
					PED::SET_PED_CAN_RAGDOLL(iLocal_298, false);
					TASK::_TASK_START_SCENARIO_IN_PLACE(iLocal_298, joaat("WORLD_HUMAN_CROUCH_INSPECT"), 0, true, 0, -1f, false);
					__LIB_8__::func_901(&uLocal_852, 1);
					func_672(7);
				}
				else
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_229);
					TASK::TASK_LOOK_AT_COORD(0, 854.0184f, -383.319f, 82.078f, 10000, 0, 51, 0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_326, 1.5f, -1, 0.5f, 0, -93.8599f);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_229);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_298, iLocal_229);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_229);
				}
			}
			break;
		case 7:
			if (__LIB_5__::func_51(&uLocal_852) > 2f)
			{
				if (__LIB_0__::func_665(Global_35, iLocal_298, 1, 1) < 5f)
				{
					if (func_365(16))
					{
						if (!__LIB_6__::func_904())
						{
							if (!PED::IS_PED_ON_MOUNT(Global_35))
							{
								if (!func_365(15) || (func_365(15) && func_365(17)))
								{
									if (!PED::IS_PED_RAGDOLL(iLocal_298))
									{
										func_672(8);
									}
								}
							}
						}
					}
				}
			}
			break;
	}
}

int func_347(int iParam0, vector3 vParam1, int iParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	__LIB_1__::func_448(iParam0, vParam1, 0, fParam5, bParam6, bParam7, bParam8, bParam12, bParam13, bParam14, 0);
	iVar1 = PED::GET_MOUNT(iParam0);
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		iVar2 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
	}
	bVar4 = __LIB_0__::func_94(iParam0, vParam1, 1);
	if (!__LIB_2__::func_618(iParam4))
	{
		if (bVar4 <= bParam8)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				__LIB_8__::func_901(iParam4, 0);
			}
		}
	}
	else if (bParam10 && bVar4 > bParam8)
	{
		__LIB_2__::func_608(iParam4);
	}
	if (__LIB_2__::func_618(iParam4))
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
		if (__LIB_5__::func_51(iParam4) >= fParam9)
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
					return 1;
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar2) && !__LIB_0__::func_491(iParam0, -828834893))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(iParam0, 0, 0);
					return 1;
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
	return 0;
}

void func_348()
{
	switch (iLocal_308)
	{
		case 0:
			if (MISC::IS_BULLET_IN_AREA(vLocal_329, 3f, true) || (__LIB_0__::func_94(Global_35, vLocal_329, 1) < 10f || __LIB_0__::func_94(iLocal_298, vLocal_329, 1) < 10f))
			{
				iLocal_308 = 1;
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_316[0]) && !__LIB_0__::func_255(iLocal_316[0], 0))
				{
					TASK::TASK_FLY_AWAY(iLocal_316[0], iLocal_312);
				}
				__LIB_8__::func_901(&uLocal_309, 1);
			}
			break;
		case 1:
			if (__LIB_5__::func_51(&uLocal_309) > 1f)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_316[1]) && !__LIB_0__::func_255(iLocal_316[1], 0))
				{
					TASK::TASK_FLY_AWAY(iLocal_316[1], iLocal_312);
				}
				iLocal_308 = 2;
			}
			break;
		case 2:
			if (__LIB_5__::func_51(&uLocal_309) > 1.4f)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_316[2]) && !__LIB_0__::func_255(iLocal_316[2], 0))
				{
					TASK::TASK_FLY_AWAY(iLocal_316[2], iLocal_312);
				}
				iLocal_308 = 3;
			}
			break;
		case 3:
			if (__LIB_5__::func_51(&uLocal_309) > 5f)
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_316[0]));
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_316[1]));
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_316[2]));
				iLocal_308 = 4;
			}
			break;
	}
}

void func_349()
{
	switch (iLocal_131)
	{
		case 0:
			if (((!ENTITY::IS_ENTITY_DEAD(iLocal_299) && !ENTITY::IS_ENTITY_DEAD(iLocal_300)) && !ENTITY::IS_ENTITY_DEAD(iLocal_301)) && !ENTITY::IS_ENTITY_DEAD(iLocal_306))
			{
				iLocal_217 = ANIMSCENE::_CREATE_ANIM_SCENE(sLocal_219, 0, "pl_family_loop", false, true);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_217, "GermanDaughter", iLocal_301, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_217, "GermanMother", iLocal_299, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_217, "germanson", iLocal_300, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_217, "wagon02x", iLocal_306, 0);
				ANIMSCENE::LOAD_ANIM_SCENE(iLocal_217);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_301, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_299, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_300, true);
				func_800(1);
			}
			break;
		case 1:
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_217, true, false))
			{
				ANIMSCENE::START_ANIM_SCENE(iLocal_217);
				func_800(3);
			}
			break;
		case 3:
			break;
	}
}

void func_350()
{
	if (!bLocal_906)
	{
		if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED("rcm_dutch1_family_trail"))
		{
			TASK::REQUEST_WAYPOINT_RECORDING("rcm_dutch1_family_trail");
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iLocal_299))
		{
			PLAYER::_0x543DFE14BE720027(PLAYER::PLAYER_ID(), iLocal_299, 0);
			if (__LIB_4__::func_61(iLocal_299, "rcm_dutch1_family_trail", 1, 1061360239 /* Float: 0.762f */, 1053609165 /* Float: 0.4f */, 0, 0, 1))
			{
				bLocal_906 = true;
			}
		}
	}
}

bool func_351()
{
	if (PED::IS_PED_ON_MOUNT(Global_35) && PED::GET_MOUNT(Global_35) == __LIB_0__::func_398(7))
	{
		return true;
	}
	return false;
}

int func_355(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, float fParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17)
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
				iVar0 = func_814(iParam1, bParam3, bParam8, iParam9, iParam10, iParam11, fParam12, bParam7, bParam15, bParam16, iParam17);
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

int func_357()
{
	return iLocal_848;
}

void func_358(var uParam0, int iParam1)
{
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_593))
	{
		VOLUME::_DELETE_VOLUME(iLocal_593);
	}
	switch (__LIB_13__::func_22(uParam0))
	{
		case 1:
			__LIB_12__::func_779(uParam0, 891.2914f, -398.0285f, 85.225f);
			__LIB_12__::func_981(uParam0, 155064);
			__LIB_12__::func_909(&(uParam0->f_206));
			__LIB_12__::func_957(uParam0, Global_35, "ARTHUR", 0, 0, 0);
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_298))
			{
				__LIB_12__::func_957(uParam0, iLocal_298, "CHARLESSMITH", 0, joaat("CS_CHARLESSMITH"), 0);
			}
			else
			{
				__LIB_13__::func_59(uParam0, iLocal_298, "CHARLESSMITH", 0, 0, 0);
			}
			__LIB_12__::func_957(uParam0, WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(iLocal_299, 0), "W_SHOTGUN_DOUBLEBARREL01", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_299, "cs_germanmother", 0, joaat("CS_GERMANMOTHER"), 0);
			__LIB_12__::func_957(uParam0, iLocal_300, "CS_GERMANSON", 0, joaat("CS_GERMANSON"), 0);
			__LIB_12__::func_957(uParam0, iLocal_301, "CS_GERMANDAUGHTER", 0, joaat("CS_GERMANDAUGHTER"), 0);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_591))
			{
				__LIB_12__::func_957(uParam0, iLocal_591, "HORSE_01^1", 0, 0, 0);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_592))
			{
				__LIB_12__::func_957(uParam0, iLocal_592, "HORSE_01", 0, 0, 0);
			}
			__LIB_12__::func_676(&(uParam0->f_206), "Player_Arrives_First");
			__LIB_13__::func_17(&(uParam0->f_206), "Charles_Arrives_First", 0);
			break;
		case 3:
			if (iParam1 == 0 || iParam1 == 1)
			{
				__LIB_12__::func_779(uParam0, 946.8472f, -410.0851f, 87.7017f);
				__LIB_12__::func_981(uParam0, 155308);
				__LIB_13__::func_16(uParam0, 155507);
				__LIB_12__::func_909(&(uParam0->f_206));
			}
			if (iParam1 == 2 || iParam1 == 0)
			{
				__LIB_12__::func_957(uParam0, Global_35, "ARTHUR", 0, 0, 0);
				__LIB_13__::func_59(uParam0, iLocal_299, "cs_germanmother", 0, 0, 0);
				__LIB_13__::func_59(uParam0, iLocal_300, "CS_GERMANSON", 0, 0, 0);
				__LIB_13__::func_59(uParam0, iLocal_301, "CS_GERMANDAUGHTER", 0, 0, 0);
				__LIB_13__::func_59(uParam0, iLocal_297, "cs_germanfather", 0, 0, 0);
				__LIB_12__::func_957(uParam0, iLocal_306, "WAGON02X", 0, 0, 0);
				__LIB_12__::func_956(&(uParam0->f_753), Global_35, "Arthur", 0);
				__LIB_12__::func_956(&(uParam0->f_753), iLocal_299, "GermanMother", 0);
				__LIB_12__::func_956(&(uParam0->f_753), iLocal_300, "GermanSon", 0);
				__LIB_12__::func_956(&(uParam0->f_753), iLocal_301, "GermanDaughter", 0);
				__LIB_12__::func_956(&(uParam0->f_753), iLocal_297, "GermanFather", 0);
				__LIB_12__::func_956(&(uParam0->f_753), iLocal_306, "WAGON02X", 0);
			}
			__LIB_0__::func_88(&(uParam0->f_206), 16384);
			__LIB_0__::func_88(&(uParam0->f_206), 524288);
			break;
		case 4:
			__LIB_12__::func_779(uParam0, 681.0308f, -1217.243f, 44.2751f);
			__LIB_12__::func_981(uParam0, 155768);
			__LIB_13__::func_59(uParam0, Global_35, "ARTHUR", 0, 0, 0);
			__LIB_13__::func_59(uParam0, iLocal_703, "BillWilliamson", 0, 0, 0);
			__LIB_13__::func_59(uParam0, iLocal_298, "CharlesSmith", 0, 0, 0);
			__LIB_13__::func_59(uParam0, iLocal_704, "JavierEscuella", 0, 0, 0);
			__LIB_13__::func_59(uParam0, iLocal_705, "Kieran", 0, 0, 0);
			__LIB_13__::func_59(uParam0, iLocal_706, "LeoStrauss", 0, 0, 0);
			__LIB_13__::func_59(uParam0, iLocal_707, "MrPearson", 0, 0, 0);
			__LIB_13__::func_59(uParam0, iLocal_708, "RevSwanson", 0, 0, 0);
			__LIB_13__::func_59(uParam0, iLocal_709, "SusanGrimshaw", 0, 0, 0);
			__LIB_13__::func_59(uParam0, iLocal_710, "uncle", 0, 0, 0);
			__LIB_13__::func_59(uParam0, iLocal_588, "Dutch", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_712, "wagon04x", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_713, "wagon04x^1", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_714, "wagon04x^2", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_711, "p_matchstick01x", 1, 0, 0);
			__LIB_12__::func_909(&(uParam0->f_206));
			func_824();
			break;
	}
}

bool func_359(var uParam0)
{
	int iVar0;
	if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_679, false))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_298, 565920245))
		{
			bLocal_742 = true;
		}
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_679, false))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_298, 404110974))
		{
			bLocal_742 = false;
		}
	}
	if (func_365(45) && !func_365(46))
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_679))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_679, false))
			{
			}
		}
		if (WEAPON::HAS_PED_GOT_WEAPON(iLocal_298, joaat("WEAPON_SHOTGUN_SAWEDOFF_CHARLES"), 0, false))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(iLocal_298, joaat("WEAPON_SHOTGUN_SAWEDOFF_CHARLES"), false, 0, false, false);
		}
		if (__LIB_8__::func_684("DCH1_IG1_P1"))
		{
			__LIB_6__::func_900("DCH1_IG1_P1", 1, 0);
		}
		func_669(46);
	}
	if (func_357() == 8)
	{
		if (iLocal_129 < 7)
		{
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_298))
		{
			switch (iLocal_129)
			{
				case 0:
					iLocal_679 = ANIMSCENE::_CREATE_ANIM_SCENE(sLocal_674, 0, "pbl_Action_Approach", false, true);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_679, "CS_CHARLESSMITH", iLocal_298, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_679, "Arthur", Global_35, 0);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_312))
					{
					}
					ANIMSCENE::LOAD_ANIM_SCENE(iLocal_679);
					__LIB_13__::func_526(2);
					break;
				case 2:
					if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_679, true, false))
					{
					}
					if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_679, true, false))
					{
						PED::_0xA3A9299C4F2ADB98(iLocal_298);
						TASK::CLEAR_PED_TASKS(iLocal_298, true, false);
						__LIB_8__::func_901(&uLocal_855, 0);
						__LIB_13__::func_526(4);
					}
					break;
				case 4:
					if (__LIB_5__::func_51(&uLocal_855) > 2f)
					{
						ANIMSCENE::START_ANIM_SCENE(iLocal_679);
						__LIB_5__::func_107(&uLocal_855);
						__LIB_13__::func_526(5);
					}
					break;
				case 5:
					if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_679, false))
					{
					}
					if (ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_679, "CS_CharlesSmith"))
					{
					}
					if (func_365(17))
					{
					}
					if (!__LIB_8__::func_684("DCH1_COMEA"))
					{
					}
					if (!__LIB_8__::func_684("DCH1_COMEA2"))
					{
					}
					if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_679, true, false))
					{
					}
					if ((((ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_679, false) && ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_679, "CS_CharlesSmith")) || ANIMSCENE::_0xF94692EB9DC15D74(iLocal_679, 0)) || ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_679) > 17f) || ((func_365(17) && !__LIB_8__::func_684("DCH1_COMEA")) && !__LIB_8__::func_684("DCH1_COMEA2")))
					{
						PED::_SET_PED_BLACKBOARD_FLOAT(iLocal_298, "Stealth", 1f, -1);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_229);
						if (WEAPON::GET_CURRENT_PED_WEAPON(iLocal_298, &iVar0, true, 0, false))
						{
							if (iVar0 == joaat("WEAPON_UNARMED"))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(iLocal_298, joaat("WEAPON_SHOTGUN_SAWEDOFF_CHARLES"), false, 0, false, false);
								TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
							}
						}
						TASK::TASK_CLEAR_LOOK_AT(0);
						TASK::WAYPOINT_RECORDING_GET_COORD("rcm_dutch1_charles_dewberry", 0, &vLocal_345);
						TASK::WAYPOINT_RECORDING_GET_COORD("rcm_dutch1_charles_dewberryB", 0, &vLocal_348);
						if (__LIB_0__::func_94(Global_35, vLocal_348, 1) < __LIB_0__::func_94(Global_35, vLocal_345, 1))
						{
							TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "rcm_dutch1_charles_dewberry", 0, 4194308, -1, 0, 0, -1);
						}
						else
						{
							TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "rcm_dutch1_charles_dewberryB", 0, 4194308, -1, 0, 0, -1);
						}
						TASK::CLOSE_SEQUENCE_TASK(iLocal_229);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_298, iLocal_229);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_229);
						__LIB_3__::func_459(iLocal_312, 1);
						__LIB_13__::func_526(3);
						iLocal_680 = ANIMSCENE::_CREATE_ANIM_SCENE(sLocal_674, 0, "pbl_ENTER", false, true);
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_680, "CS_CHARLESSMITH", iLocal_298, 0);
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_680, "Arthur", Global_35, 0);
						ANIMSCENE::LOAD_ANIM_SCENE(iLocal_680);
						func_334(35);
					}
					break;
				case 3:
					__LIB_13__::func_526(7);
					break;
				case 7:
					if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_680, true, false))
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_680, "pbl_Action_Investigate_combined");
						if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_215))
						{
							iLocal_215 = ANIMSCENE::_CREATE_ANIM_SCENE(sLocal_218, 0, 0, false, true);
							ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_215, "ARTHUR", Global_35, 0);
							ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_215, "CharlesSmith", iLocal_298, 0);
							ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_215, "p_crate22x_small", iLocal_598[6], 0);
							ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_215, "p_debrisBoard10X^1", iLocal_598[7], 0);
							ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_215, "p_debrisBoard10X", iLocal_598[8], 0);
							ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_215, "p_whiskeycrate02x", iLocal_598[9], 0);
							ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_215, "s_crateseat03x", iLocal_598[10], 0);
							ANIMSCENE::LOAD_ANIM_SCENE(iLocal_215);
						}
						__LIB_13__::func_526(6);
					}
					break;
				case 6:
					fLocal_752 = __LIB_0__::func_94(iLocal_298, 875.04f, -386.25f, 82.25f, 0);
					if (fLocal_753 == 0f)
					{
						fLocal_753 = fLocal_752;
					}
					if (ENTITY::IS_ENTITY_DEAD(iLocal_298))
					{
					}
					if ((fLocal_752 > fLocal_753 && fLocal_752 < 1f) && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_680, "pbl_enter"))
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_680, "pbl_enter", true);
						ANIMSCENE::START_ANIM_SCENE(iLocal_680);
						__LIB_13__::func_526(8);
					}
					fLocal_753 = fLocal_752;
					break;
				case 8:
					if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_680, "s_idles_1stSet", 1))
					{
						if (__LIB_0__::func_94(PLAYER::PLAYER_PED_ID(), vLocal_323, 1) < (__LIB_0__::func_94(iLocal_298, vLocal_323, 1) + 5f))
						{
							if (!ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_680, "pbl_Action_Investigate_combined") && !ANIMSCENE::_0x0DF57F86FE71DBE5(iLocal_680, "pbl_Action_Investigate_combined"))
							{
								ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_680, "pbl_Action_Investigate_combined");
							}
							if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_680, "pbl_Action_Investigate_combined"))
							{
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_680, "pbl_Action_Investigate_combined", true);
								ANIMSCENE::_0xAE6ADA8FE7E84ACC(iLocal_680, "pbl_Action_Approach");
								__LIB_8__::func_901(&uLocal_148, 0);
								if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_216))
								{
									iLocal_216 = ANIMSCENE::_CREATE_ANIM_SCENE(sLocal_218, 0, "pl_Charles_Enter", false, true);
									ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_216, "ARTHUR", Global_35, 0);
									ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_216, "CharlesSmith", iLocal_298, 0);
									ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_216, "p_crate22x_small", iLocal_598[6], 0);
									ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_216, "p_debrisBoard10X^1", iLocal_598[7], 0);
									ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_216, "p_debrisBoard10X", iLocal_598[8], 0);
									ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_216, "p_whiskeycrate02x", iLocal_598[9], 0);
									ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_216, "s_crateseat03x", iLocal_598[10], 0);
									ANIMSCENE::LOAD_ANIM_SCENE(iLocal_216);
								}
								__LIB_13__::func_526(14);
							}
						}
					}
					break;
				case 13:
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_216) && !ANIMSCENE::_0xF94692EB9DC15D74(iLocal_216, 0))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_216);
						if (__LIB_0__::func_272(iLocal_298, 0))
						{
							TASK::CLEAR_PED_TASKS(iLocal_298, true, false);
						}
					}
					break;
				case 14:
					if (ANIMSCENE::_0xF94692EB9DC15D74(iLocal_680, 0) || (__LIB_9__::func_324(&uLocal_148) > 30f && __LIB_0__::func_665(Global_35, iLocal_298, 1, 1) < 15f))
					{
						if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_216) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_216, true, false)) && !ANIMSCENE::_0x1F0E401031E20146(iLocal_215, "pl_Arthur_First_LEADIN"))
						{
							ANIMSCENE::START_ANIM_SCENE(iLocal_216);
							iLocal_681 = ANIMSCENE::_CREATE_ANIM_SCENE(sLocal_677, 0, "pl_idle_base", false, true);
							ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_681, "CHARLESSMITH", iLocal_298, 0);
							ANIMSCENE::LOAD_ANIM_SCENE(iLocal_681);
							__LIB_13__::func_526(15);
						}
					}
					break;
				case 15:
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_216))
					{
						if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_216, false))
						{
							if (ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_216, "CharlesSmith"))
							{
								PED::_0x411189E51B8020BA(iLocal_298, "Stealth");
								if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_681, true, false))
								{
									ANIMSCENE::START_ANIM_SCENE(iLocal_681);
									__LIB_13__::func_526(16);
									__LIB_5__::func_107(&uLocal_148);
								}
							}
						}
					}
					break;
				case 16:
					if (__LIB_2__::func_618(&uLocal_148))
					{
						if (__LIB_5__::func_51(&uLocal_148) > 3f)
						{
							if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_681, false))
							{
								if (!ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_681, func_826()))
								{
									if (!ANIMSCENE::_0x0DF57F86FE71DBE5(iLocal_681, func_826()))
									{
										ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_681, func_826());
									}
								}
								else
								{
									ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_681, func_826(), true);
									iLocal_907++;
									if (iLocal_907 >= 6)
									{
										iLocal_907 = 0;
									}
									__LIB_2__::func_608(&uLocal_148);
								}
							}
						}
					}
					else if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_681, "s_idle_base", 1))
					{
						__LIB_8__::func_901(&uLocal_148, 1);
					}
					break;
				case 17:
				case 18:
					if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_215, true, false))
					{
						if (iLocal_129 == 17)
						{
							if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_215, "pl_Charles_First_LEADIN"))
							{
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_215, "pl_Charles_First_LEADIN", true);
								__LIB_13__::func_526(19);
							}
							else
							{
								ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_215, "pl_Charles_First_LEADIN");
							}
						}
						else if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_215, "pl_Arthur_First_LEADIN"))
						{
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_215, "pl_Arthur_First_LEADIN", true);
							__LIB_13__::func_526(19);
						}
						else
						{
							ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_215, "pl_Arthur_First_LEADIN");
						}
					}
					break;
				case 19:
					if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
					{
						__LIB_4__::func_791(0);
						__LIB_4__::func_791(1);
						if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_680, false))
						{
							ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_680);
						}
						return true;
					}
					if (func_828() && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_215, true, false))
					{
						ANIMSCENE::START_ANIM_SCENE(iLocal_215);
						if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_680, false))
						{
							ANIMSCENE::ABORT_ANIM_SCENE(iLocal_680, false);
							ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_680);
						}
						if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_216, false))
						{
							ANIMSCENE::ABORT_ANIM_SCENE(iLocal_216, false);
							ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_216);
						}
						__LIB_13__::func_526(20);
					}
					break;
				case 20:
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_215))
					{
						if (ANIMSCENE::_0x1F0E401031E20146(iLocal_215, "pl_Charles_First_LEADIN") && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_215) > 0.95f)
						{
							__LIB_12__::func_839(&(uParam0->f_206), "Charles_Arrives_First");
							return true;
						}
						if (ANIMSCENE::_0x1F0E401031E20146(iLocal_215, "pl_Arthur_First_LEADIN") && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_215) > 0.95f)
						{
							return true;
						}
					}
					break;
			}
		}
		if (iLocal_129 > 3)
		{
			if (func_829())
			{
				return true;
			}
		}
	}
	return false;
}

int func_361(var uParam0, vector3 vParam1)
{
	__LIB_11__::func_780(iLocal_298, &uLocal_731);
	if (iLocal_883 != iLocal_884)
	{
		iLocal_884 = iLocal_883;
	}
	if (!PED::IS_PED_INJURED(iLocal_298))
	{
		if (func_831() >= 3 && func_831() != 7)
		{
			if (!PED::IS_PED_ON_MOUNT(iLocal_298))
			{
				func_678(0);
			}
		}
		if (func_831() != 7)
		{
			if (func_831() != 6)
			{
				if (!PED::IS_PED_INJURED(iLocal_298))
				{
					if (__LIB_0__::func_94(iLocal_298, vParam1, 1) < 35f || ((func_365(28) && !__LIB_6__::func_903("DCH1_SPOTS")) && !__LIB_6__::func_903("DCH1_QUIET")))
					{
						TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_298, 1.25f, 0, -1082130432 /* Float: -1f */, 0);
						func_678(6);
					}
				}
			}
			switch (func_831())
			{
				case 0:
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_298, 713668775, true) == 8)
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_298, true);
						if (!FIRE::IS_ENTITY_ON_FIRE(iLocal_298))
						{
							if (PED::IS_PED_ON_MOUNT(iLocal_298))
							{
								if (PED::IS_PED_ON_MOUNT(Global_35) && PED::GET_MOUNT(Global_35) == __LIB_0__::func_398(7))
								{
									func_678(2);
								}
							}
							else
							{
								func_678(1);
							}
						}
					}
					break;
				case 1:
					if (!PED::IS_PED_ON_MOUNT(iLocal_298))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_298, 1868526510, true) == 8)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_591))
							{
								if (!__LIB_0__::func_255(iLocal_591, 0))
								{
									if (PED::_0x2D64376CF437363E(iLocal_591))
									{
										TASK::TASK_MOUNT_ANIMAL(iLocal_298, iLocal_591, 20000, -1, 1f, 1, 0, 0);
									}
								}
							}
						}
					}
					else
					{
						func_678(2);
					}
					break;
				case 2:
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_298, "rcm_dutch1_clemens", 0, 1036, -1, 0, 1, -1);
					__LIB_8__::func_901(&uLocal_852, 0);
					iLocal_305 = PED::CREATE_GROUP(2);
					PED::SET_GROUP_FORMATION(iLocal_305, 10);
					PED::SET_PED_CONFIG_FLAG(iLocal_298, 279, true);
					PED::SET_PED_AS_GROUP_LEADER(iLocal_298, iLocal_305, false);
					PLAYER::_0xAC22AA6DF4D1C1DE(PLAYER::PLAYER_ID(), iLocal_298, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 2, 2, 0);
					PLAYER::_0xDD33A82352C4652F(PLAYER::PLAYER_ID(), iLocal_298, 1);
					func_678(3);
					break;
				case 3:
					func_832(uParam0);
					break;
				case 6:
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_298, 658540077, true) == 8 || __LIB_0__::func_94(iLocal_298, vParam1, 1) < 5f)
					{
						if (PED::DOES_GROUP_EXIST(iLocal_305))
						{
							PED::REMOVE_GROUP(iLocal_305);
						}
						PED::_SET_PED_BLACKBOARD_FLOAT(iLocal_298, "Cautious", 1f, -1);
						func_678(7);
					}
					break;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_362(bool bParam0)
{
	switch (iLocal_859)
	{
		case 0:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_297))
			{
				iLocal_304 = OBJECT::CREATE_OBJECT(joaat("S_CS_BANDANAGAG01X"), 671f, -1267.1f, 43.1f, true, true, false, false, true);
				ENTITY::SET_ENTITY_VISIBLE(iLocal_304, false);
				iLocal_682 = ANIMSCENE::_CREATE_ANIM_SCENE(sLocal_675, 0, 0, false, true);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_682, "CS_GermanFather", iLocal_297, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_682, "player_zero", Global_35, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_682, "CS_CharlesSmith", iLocal_298, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_682, "gag", iLocal_304, 0);
				ANIMSCENE::LOAD_ANIM_SCENE(iLocal_682);
				func_833(1);
			}
			break;
		case 1:
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_682, true, false))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_682, "pbl_Action");
				WEAPON::_0x72D4CB5DB927009C(WEAPON::GET_BEST_PED_WEAPON(Global_35, false, false), 2, 0);
				func_833(2);
			}
			break;
		case 2:
			if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_682, "pbl_Action") && bParam0)
			{
				ENTITY::SET_ENTITY_VISIBLE(iLocal_304, true);
				PED::_0xA2F8B3B5FEDFC100(iLocal_297, -1398409131);
				PED::_UPDATE_PED_VARIATION(iLocal_297, false, true, true, true, false);
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_682, "pbl_Action", true);
				__LIB_1__::func_473(iLocal_298, joaat("WORLD_HUMAN_WAITING_IMPATIENT"), 0, 1, 0, -1082130432 /* Float: -1f */);
				PED::_0xF1C03A5352243A30(iLocal_298);
				ANIMSCENE::START_ANIM_SCENE(iLocal_682);
				__LIB_1__::func_640(7);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_298, true);
				func_833(3);
			}
			break;
		case 3:
		case 4:
		case 5:
		case 6:
			if (ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_682) > 1f)
			{
				if (iLocal_859 == 3)
				{
					func_531(663.68f, -1249.07f, 42.91f, 147.51f);
					if (__LIB_0__::func_272(iLocal_591, 0))
					{
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_591, 659.12f, -1247.63f, 42.68f, 92.72f, true, false, true);
					}
					func_833(4);
				}
			}
			if (iLocal_859 < 5)
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_682, false) && ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_682) > 3.2f)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_298))
					{
						PED::_SET_PED_BLACKBOARD_FLOAT(iLocal_298, "Cautious", 1f, -1);
						PED::_0xFC3DB99C8144CD81(iLocal_298, Local_14.f_15, 0, 0, 0);
						if (WEAPON::HAS_PED_GOT_WEAPON(iLocal_298, joaat("WEAPON_SHOTGUN_SAWEDOFF_CHARLES"), 0, false))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(iLocal_298, joaat("WEAPON_SHOTGUN_SAWEDOFF_CHARLES"), false, 0, false, false);
						}
						PED::REGISTER_HATED_TARGETS_AROUND_PED(iLocal_298, 150f);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_229);
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
						TASK::TASK_COMBAT_PED_TIMED(0, Local_236[1 /*5*/], 3000, 16384);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 675.59f, -1261.79f, 42.98f, 2f, 20000, 0.25f, 1, 40000f);
						TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, 675.59f, -1261.79f, 42.98f, 2000, 0, 0, 0, 0, 0, 0, 0, 0);
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_229);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_298, iLocal_229);
						func_334(37);
					}
					func_833(5);
				}
			}
			AICOVERPOINT::_0x140B3CB1D424A945(Global_35, -1);
			if (iLocal_859 == 5 && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_682) > 0.77f)
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, WEAPON::GET_BEST_PED_WEAPON(Global_35, false, false), false, 0, false, false);
				TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Global_35, 668.87f, -1259.64f, 42.63f, -1, 0, 0, 0, 0, 0, 0, 0, 0);
				PED::_0x2208438012482A1A(Global_35, false, false);
				func_833(6);
			}
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_682, false))
			{
				if (ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_682, "player_zero"))
				{
					__LIB_8__::func_895(683.9962f, -1251.089f, 44.2468f, 1);
				}
			}
			if (ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(iLocal_682))
			{
				__LIB_1__::func_338(iLocal_297, vLocal_338);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_304))
				{
					OBJECT::DELETE_OBJECT(&iLocal_304);
				}
				TASK::TASK_CARRIABLE(iLocal_297, ENTITY::_GET_OPTIMAL_CARRY_CONFIG(iLocal_297, 1), 0, 0, 0);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_297, true);
			}
			if (ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_682) > 2.5f)
			{
				AICOVERPOINT::_0x1A7A802B2301EDC0(Global_35);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_304))
				{
					OBJECT::DELETE_OBJECT(&iLocal_304);
				}
				return true;
			}
			break;
	}
	return false;
}

void func_363()
{
	int iVar0;
	if (!func_333(26))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_302))
		{
			iLocal_302 = __LIB_8__::func_931(joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT"), 927.9692f, -414.1312f, 75.6288f, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_302, true);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_302, true);
		}
		if (!func_333(28) && ENTITY::DOES_ENTITY_EXIST(iLocal_302))
		{
			StringCopy(&(Local_351.f_120[0 /*4*/]), "rcm_dutch1_ClueRouteA", 32);
			StringCopy(&(Local_351.f_120[1 /*4*/]), "rcm_dutch1_ClueRouteB", 32);
			StringCopy(&(Local_351.f_120[2 /*4*/]), "rcm_dutch1_ClueRouteC", 32);
			StringCopy(&(Local_351.f_120[3 /*4*/]), "rcm_dutch1_ClueRouteD", 32);
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				TASK::REQUEST_WAYPOINT_RECORDING(&(Local_351.f_120[iVar0 /*4*/]));
				iVar0++;
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_302))
			{
				PED::SET_PED_RESET_FLAG(iLocal_302, 170, true);
				PLAYER::_0x543DFE14BE720027(PLAYER::PLAYER_ID(), iLocal_302, 0);
			}
			PLAYER::_0x1D77B47AFA584E90(PLAYER::GET_PLAYER_INDEX(), -1, false);
			__LIB_0__::func_188(1);
			func_334(28);
		}
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			if (!iLocal_574[iVar0])
			{
				if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&(Local_351.f_120[iVar0 /*4*/])))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_302))
					{
						PED::SET_PED_RESET_FLAG(iLocal_302, 170, true);
						TASK::WAYPOINT_RECORDING_GET_COORD(&(Local_351.f_120[iVar0 /*4*/]), 0, &vLocal_345);
						if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_298, "rcm_dutch1_clemens"))
						{
							TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT("rcm_dutch1_clemens", ENTITY::GET_ENTITY_COORDS(iLocal_298, true, false), &iLocal_344);
							if (((iVar0 == 0 || (iVar0 == 1 && iLocal_344 > 140)) || (iVar0 == 2 && iLocal_344 > 224)) || (iVar0 == 3 && iLocal_344 > 449))
							{
								if (__LIB_4__::func_61(iLocal_302, &(Local_351.f_120[iVar0 /*4*/]), 1, 1061360239 /* Float: 0.762f */, 1053609165 /* Float: 0.4f */, 0, 0, 1))
								{
									PLAYER::_0x6852288340B43239(PLAYER::PLAYER_ID(), iLocal_302);
									iLocal_574[iVar0] = 1;
								}
							}
						}
					}
				}
			}
			iVar0++;
		}
		if (((iLocal_574[0] && iLocal_574[1]) && iLocal_574[2]) && iLocal_574[3])
		{
			func_334(26);
		}
	}
}

bool func_365(int iParam0)
{
	if (iParam0 > 31)
	{
		if (MISC::IS_BIT_SET(iLocal_77, (iParam0 - 32)))
		{
			return true;
		}
	}
	else if (MISC::IS_BIT_SET(iLocal_76, iParam0))
	{
		return true;
	}
	return false;
}

bool func_367(var uParam0)
{
	struct<27> Var0;
	switch (iLocal_128)
	{
		case 0:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_297))
			{
				iLocal_683 = ANIMSCENE::_CREATE_ANIM_SCENE(sLocal_675, 0, "pbl_Walk'n'Talk_p1", false, true);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_683, "CS_CharlesSmith", iLocal_298, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_683, "player_zero", Global_35, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_683, "cs_germanfather", iLocal_297, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_683, "CS_GERMANFATHER", iLocal_297, 0);
				ANIMSCENE::LOAD_ANIM_SCENE(iLocal_683);
				__LIB_13__::func_527(1);
			}
			break;
		case 1:
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_683, true, false))
			{
				__LIB_13__::func_527(2);
			}
			break;
		case 2:
			if (!PED::IS_PED_ON_MOUNT(Global_35) && !PED::IS_PED_ON_MOUNT(iLocal_298))
			{
				if (!__LIB_2__::func_618(&uLocal_160))
				{
					__LIB_8__::func_901(&uLocal_160, 0);
				}
				else if (__LIB_5__::func_51(&uLocal_160) > 0.5f)
				{
					ANIMSCENE::START_ANIM_SCENE(iLocal_683);
					func_214(6);
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
					__LIB_3__::func_887(Global_35, iLocal_298, &Var0, 0f, 0f, 0f, 0, 0, 1, 1069547520 /* Float: 1.5f */, -1082130432 /* Float: -1f */, 1073069561, 1056964608 /* Float: 0.5f */, 1092616192 /* Float: 10f */, -1, 1, 0, 0, 0, 1);
					__LIB_3__::func_898(iLocal_298, Global_35, &Var0, -1082130432 /* Float: -1f */, 0, 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1, 8, 0, 0, 1069547520 /* Float: 1.5f */, 1073741824 /* Float: 2f */, 1050253722 /* Float: 0.3f */, 1067030938 /* Float: 1.2f */, 0, 0, -1, 1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1);
					__LIB_1__::func_731(&uLocal_890);
					__LIB_13__::func_527(3);
				}
			}
			break;
		case 3:
			__LIB_2__::func_966(Global_35, iLocal_298, 1, 1, 1, 0, 1, 1, 0, 1, 1);
			__LIB_2__::func_966(iLocal_298, Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
			__LIB_8__::func_602(&uLocal_890, iLocal_298);
			if (__LIB_8__::func_684("DCH1_IG2_P1_A"))
			{
			}
			if (ANIMSCENE::_0xF94692EB9DC15D74(iLocal_683, 0))
			{
				iLocal_684 = ANIMSCENE::_CREATE_ANIM_SCENE(sLocal_675, 0, "pbl_Walk'n'Talk_p2", false, true);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_684, "CS_CharlesSmith", iLocal_298, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_684, "player_zero", Global_35, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_684, "cs_germanfather", iLocal_297, 0);
				ANIMSCENE::LOAD_ANIM_SCENE(iLocal_684);
				__LIB_1__::func_726(Global_35, 1);
				__LIB_1__::func_727(iLocal_298, 1);
				__LIB_5__::func_438(&uLocal_890);
				__LIB_13__::func_527(4);
			}
			break;
		case 4:
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_31, true, 0) && __LIB_1__::func_373(ENTITY::GET_ENTITY_COORDS(iLocal_297, true, false), 1050253722 /* Float: 0.3f */, 1060320051 /* Float: 0.7f */, 0, 1061158912 /* Float: 0.75f */))
			{
				if (__LIB_12__::func_876(uParam0, "DCH1_ASETTLER", 0))
				{
					return true;
				}
			}
			else if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_31, true, 0) && !ENTITY::IS_ENTITY_IN_VOLUME(iLocal_298, Local_14.f_50, true, 0))
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_298, iLocal_297, -1, -1f, -1f, -1f);
				__LIB_13__::func_527(5);
			}
			break;
		case 5:
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_684, true, false) && PED::IS_PED_FACING_PED(iLocal_298, iLocal_297, 10f))
			{
				ANIMSCENE::START_ANIM_SCENE(iLocal_684);
				__LIB_13__::func_527(6);
			}
			break;
		case 6:
			if (ANIMSCENE::_0xF94692EB9DC15D74(iLocal_684, 0))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_368(var uParam0)
{
	if (!func_371(0) && func_372(0))
	{
		if (!__LIB_2__::func_618(&uLocal_220))
		{
			__LIB_12__::func_875(uParam0, Local_236[1 /*5*/], "RDTC1_ENEMY1", 0);
			__LIB_8__::func_901(&uLocal_220, 0);
		}
		else if (__LIB_5__::func_51(&uLocal_220) > 4.5f)
		{
			if (!__LIB_6__::func_904())
			{
				if (__LIB_12__::func_876(uParam0, "DCH1_TREELINE", 0))
				{
					func_681(7);
					func_681(0);
					__LIB_2__::func_608(&uLocal_220);
				}
			}
		}
	}
	if (!func_371(1) && func_371(0))
	{
		if (!__LIB_6__::func_904())
		{
			if (__LIB_12__::func_876(uParam0, "DCH1_YELL", 0))
			{
				func_849(7);
				func_681(1);
			}
		}
	}
	if (func_371(0) && !func_371(3))
	{
		if (func_850() == 3)
		{
			if (func_851(0, 0, 0, 0, 0) == 0)
			{
				if (!__LIB_6__::func_904())
				{
					if (__LIB_12__::func_876(uParam0, "DCH1_THINK", 0))
					{
						func_681(3);
						func_849(7);
					}
				}
			}
			else
			{
				func_681(3);
			}
		}
	}
	if (func_372(3))
	{
		if (!func_371(6))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_303))
			{
				if (!PED::IS_PED_DEAD_OR_DYING(iLocal_303, true))
				{
					if (((ENTITY::GET_ENTITY_SPEED(iLocal_303) > 2f && !PED::IS_PED_SHOOTING(iLocal_303)) && !PED::IS_PED_IN_COMBAT(iLocal_303, 0)) && !PED::IS_PED_RAGDOLL(iLocal_303))
					{
						if (!__LIB_2__::func_618(&uLocal_728))
						{
							__LIB_8__::func_901(&uLocal_728, 0);
						}
						else if (__LIB_5__::func_51(&uLocal_728) > 2f)
						{
							if (!__LIB_6__::func_904())
							{
								if (__LIB_12__::func_876(uParam0, "DCH1_FLEEING", 0))
								{
									func_681(6);
								}
							}
						}
					}
				}
				else
				{
					func_681(6);
				}
			}
		}
		else if (__LIB_8__::func_684("DCH1_FLEEING"))
		{
			if (PED::IS_PED_DEAD_OR_DYING(iLocal_303, true))
			{
				__LIB_6__::func_900("DCH1_FLEEING", 0, 0);
			}
		}
	}
	if ((!func_371(2) && func_372(3)) && func_371(3))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_236[9 /*5*/]) && ENTITY::DOES_ENTITY_EXIST(Local_236[10 /*5*/]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_236[9 /*5*/]) || !ENTITY::IS_ENTITY_DEAD(Local_236[10 /*5*/]))
			{
				if (ENTITY::IS_ENTITY_IN_VOLUME(Local_236[9 /*5*/], Local_14, true, 0) || ENTITY::IS_ENTITY_IN_VOLUME(Local_236[10 /*5*/], Local_14, true, 0))
				{
					if (!__LIB_6__::func_904())
					{
						if (__LIB_12__::func_876(uParam0, "DCH1_HORSES", 0))
						{
							func_849(7);
							func_681(2);
						}
					}
				}
			}
			else
			{
				func_849(7);
				func_681(2);
			}
		}
	}
	if (func_371(0) && !func_371(7))
	{
		if (!__LIB_6__::func_904())
		{
			if (!__LIB_2__::func_618(&uLocal_220))
			{
				__LIB_8__::func_901(&uLocal_220, 1);
				iLocal_120 = MISC::GET_RANDOM_INT_IN_RANGE(2, 3);
			}
			else if (__LIB_5__::func_51(&uLocal_220) > IntToFloat(iLocal_120))
			{
				if (!func_371(4))
				{
					if (!__LIB_6__::func_904())
					{
						if (__LIB_12__::func_876(uParam0, "DCH1_WHY", 0))
						{
							func_681(4);
							__LIB_2__::func_608(&uLocal_220);
						}
					}
				}
				else if (!func_371(5))
				{
					if (!PED::IS_PED_DEAD_OR_DYING(Local_236[2 /*5*/], true))
					{
						__LIB_12__::func_875(uParam0, Local_236[2 /*5*/], "RDTC1_ENEMY5", 0);
					}
					else if (!PED::IS_PED_DEAD_OR_DYING(Local_236[3 /*5*/], true))
					{
						__LIB_12__::func_875(uParam0, Local_236[3 /*5*/], "RDTC1_ENEMY5", 0);
					}
					else if (!PED::IS_PED_DEAD_OR_DYING(Local_236[1 /*5*/], true))
					{
						__LIB_12__::func_875(uParam0, Local_236[1 /*5*/], "RDTC1_ENEMY5", 0);
					}
					else
					{
						func_681(5);
					}
					if (!__LIB_6__::func_904())
					{
						if (__LIB_12__::func_876(uParam0, "DCH1_SHOUTS5", 0))
						{
							func_681(5);
							__LIB_2__::func_608(&uLocal_220);
						}
					}
				}
				else if (!__LIB_6__::func_904())
				{
					if (iLocal_121 == 0)
					{
						if (iLocal_212 < 2)
						{
							iLocal_212 = 3;
						}
						else
						{
							iLocal_212 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
						}
						if (iLocal_212 < 2)
						{
							iLocal_121 = 1;
						}
						else
						{
							iLocal_121 = func_852();
							iLocal_121 = func_853(uParam0, iLocal_121);
						}
					}
					else if (iLocal_212 == 0)
					{
						if (__LIB_12__::func_876(uParam0, "DCH1_GERMAN", 0))
						{
							__LIB_2__::func_608(&uLocal_220);
							iLocal_121 = 0;
						}
					}
					else if (iLocal_212 == 1)
					{
						if (__LIB_12__::func_876(uParam0, "DCH1_GERMAN2", 0))
						{
							__LIB_2__::func_608(&uLocal_220);
							iLocal_121 = 0;
						}
					}
					else if (!ENTITY::IS_ENTITY_DEAD(Local_236[iLocal_121 /*5*/]))
					{
						switch (iLocal_121)
						{
							case 2:
								if (func_851(0, 0, 0, 0, 0) > 1)
								{
									if (__LIB_12__::func_876(uParam0, "DCH1_SHOUTS2", 0))
									{
										__LIB_2__::func_608(&uLocal_220);
										iLocal_121 = 0;
									}
								}
								else
								{
									__LIB_2__::func_608(&uLocal_220);
								}
								break;
							case 3:
								if (func_851(0, 0, 0, 0, 0) > 1)
								{
									if (__LIB_12__::func_876(uParam0, "DCH1_SHOUTS4", 0))
									{
										__LIB_2__::func_608(&uLocal_220);
										iLocal_121 = 0;
									}
								}
								else
								{
									__LIB_2__::func_608(&uLocal_220);
								}
								break;
							case 1:
							case 9:
							case 10:
								if (func_851(0, 0, 0, 0, 0) > 0)
								{
									if (__LIB_12__::func_876(uParam0, "DCH1_SHOUTS1", 0))
									{
										__LIB_2__::func_608(&uLocal_220);
										iLocal_121 = 0;
									}
								}
								else
								{
									__LIB_2__::func_608(&uLocal_220);
								}
								break;
							case 5:
								if (func_851(0, 0, 0, 0, 0) > 0)
								{
									if (__LIB_12__::func_876(uParam0, "DCH1_SHOUTS3", 0))
									{
										__LIB_2__::func_608(&uLocal_220);
										iLocal_121 = 0;
									}
								}
								else
								{
									__LIB_2__::func_608(&uLocal_220);
								}
								break;
						}
					}
					else
					{
						iLocal_121 = 0;
					}
				}
			}
		}
		else if (__LIB_2__::func_618(&uLocal_220))
		{
			__LIB_2__::func_608(&uLocal_220);
		}
	}
}

void func_369()
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	if (__LIB_13__::func_533(&uLocal_879, 1114636288 /* Float: 60f */))
	{
		__LIB_5__::func_553(iLocal_298, 1);
	}
	else
	{
		__LIB_5__::func_553(iLocal_298, 0);
	}
	if (!func_372(1))
	{
		if (func_372(0))
		{
			if (!__LIB_2__::func_618(&uLocal_876))
			{
				__LIB_8__::func_901(&uLocal_876, 0);
				WEAPON::SET_CURRENT_PED_WEAPON(Local_236[1 /*5*/], WEAPON::GET_BEST_PED_WEAPON(Local_236[1 /*5*/], false, false), false, 0, false, false);
				TASK::TASK_SHOOT_AT_COORD(Local_236[1 /*5*/], 668.837f, -1258.02f, 44.201f, 3000, joaat("FIRING_PATTERN_FULL_AUTO"), 0);
			}
			else if (__LIB_5__::func_51(&uLocal_876) > 2f)
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_236[1 /*5*/], joaat("REL_CRIMINALS"));
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_236[1 /*5*/], false);
				PED::SET_PED_ACCURACY(Local_236[1 /*5*/], 30);
				if (!ENTITY::DOES_ENTITY_EXIST(Local_236[2 /*5*/]))
				{
					func_856(2, 713.069f, -1239.139f, 44.254f, 158.2296f, joaat("WEAPON_REPEATER_CARBINE"));
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(Local_236[3 /*5*/]))
				{
					func_856(3, 717.8673f, -1249.497f, 44.1118f, 94.5302f, joaat("WEAPON_REVOLVER_CATTLEMAN"));
				}
				else
				{
					func_857(2, Local_14.f_10);
					func_857(3, Local_14.f_9);
					func_680(1);
					TASK::TASK_COMBAT_HATED_TARGETS(Local_236[1 /*5*/], -1f);
					TASK::TASK_COMBAT_HATED_TARGETS(Local_236[2 /*5*/], -1f);
					TASK::TASK_COMBAT_HATED_TARGETS(Local_236[3 /*5*/], -1f);
				}
			}
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_236[1 /*5*/]))
	{
		if (!PED::IS_PED_IN_MELEE_COMBAT(Local_236[1 /*5*/]))
		{
			if (__LIB_0__::func_665(Global_35, Local_236[1 /*5*/], 1, 1) < 5f)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_236[1 /*5*/], joaat("SCRIPT_TASK_PUT_PED_DIRECTLY_INTO_MELEE"), true) == 8)
				{
					PED::REMOVE_PED_DEFENSIVE_AREA(Local_236[1 /*5*/], false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Local_236[1 /*5*/], joaat("WEAPON_MELEE_KNIFE"), 0, false))
					{
						WEAPON::_GIVE_WEAPON_TO_PED_2(Local_236[1 /*5*/], joaat("WEAPON_MELEE_KNIFE"), -1, true, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
					}
					WEAPON::SET_CURRENT_PED_WEAPON(Local_236[1 /*5*/], joaat("WEAPON_MELEE_KNIFE"), false, 0, false, false);
					TASK::TASK_PUT_PED_DIRECTLY_INTO_MELEE(Local_236[1 /*5*/], Global_35, 0, 0, 0, 1, 0);
				}
			}
		}
	}
	if (!func_372(0))
	{
		if (func_856(1, 706.921f, -1221.499f, 44.4461f, 137.5705f, joaat("WEAPON_REPEATER_CARBINE")))
		{
			PED::SET_PED_ACCURACY(Local_236[1 /*5*/], 100);
			func_626(Local_236[1 /*5*/], joaat("WEAPON_REPEATER_CARBINE"), 1, 1, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_236[1 /*5*/], true);
			func_857(1, Local_14.f_11);
			func_680(0);
		}
	}
	if (!func_372(6))
	{
		if ((__LIB_2__::func_618(&uLocal_876) && __LIB_5__::func_51(&uLocal_876) > 6f) || func_851(0, 0, 0, 0, 0) <= 2)
		{
			func_680(6);
		}
	}
	else
	{
		func_858(1);
	}
	if (!func_372(7))
	{
		if ((__LIB_2__::func_618(&uLocal_876) && __LIB_5__::func_51(&uLocal_876) > 12f) || func_851(0, 0, 0, 0, 0) <= 1)
		{
			func_680(7);
		}
	}
	else
	{
		func_858(2);
	}
	if (!func_372(8))
	{
		if ((__LIB_2__::func_618(&uLocal_876) && __LIB_5__::func_51(&uLocal_876) > 18f) || func_851(0, 0, 0, 0, 0) <= 1)
		{
			func_680(8);
		}
	}
	else
	{
		func_858(3);
	}
	if (!func_372(2))
	{
		if (func_372(1))
		{
			if (func_851(4, 5, 0, 0, 0) == 0 || !ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_13, true, 0))
			{
				if (!__LIB_2__::func_618(&(Local_236[4 /*5*/].f_2)))
				{
					__LIB_8__::func_901(&(Local_236[4 /*5*/].f_2), 0);
				}
				else
				{
					vVar0 = { Vector(45f, -1216.3f, 675.5f) - CAM::GET_GAMEPLAY_CAM_COORD() };
					fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(CAM::GET_GAMEPLAY_CAM_COORD(), 675.5f, -1216.3f, 45f, false);
					fVar4 = (2f / fVar3);
					vVar0 = { vVar0 * Vector(fVar4, fVar4, fVar4) };
					if (func_856(4, Vector(45f, -1216.3f, 675.5f) + vVar0, __LIB_0__::func_152(675.5f, -1216.3f, 45f, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 1), joaat("WEAPON_REPEATER_CARBINE")))
					{
						vVar0 = { Vector(46.2036f, -1212.362f, 659.3397f) - CAM::GET_GAMEPLAY_CAM_COORD() };
						fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(CAM::GET_GAMEPLAY_CAM_COORD(), 659.3397f, -1212.362f, 46.2036f, false);
						fVar4 = (2f / fVar3);
						vVar0 = { vVar0 * Vector(fVar4, fVar4, fVar4) };
						if (func_856(5, Vector(46.2036f, -1212.362f, 659.3397f) + vVar0, __LIB_0__::func_152(659.3397f, -1212.362f, 46.2036f, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 1), joaat("WEAPON_REPEATER_CARBINE")))
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_229);
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, 675.2372f, -1215.207f, 44.5744f, Global_35, 1f, 1, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
							TASK::TASK_COMBAT_HATED_TARGETS(0, -1f);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_229);
							TASK::TASK_PERFORM_SEQUENCE(Local_236[4 /*5*/], iLocal_229);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_229);
							PED::_0xFC3DB99C8144CD81(Local_236[4 /*5*/], Local_14.f_14, 0, 0, 0);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_229);
							TASK::TASK_COMBAT_HATED_TARGETS(0, -1f);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_229);
							TASK::TASK_PERFORM_SEQUENCE(Local_236[5 /*5*/], iLocal_229);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_229);
							PED::_0xFC3DB99C8144CD81(Local_236[5 /*5*/], Local_14.f_14, 0, 0, 0);
							func_681(7);
							func_680(4);
							func_680(2);
						}
					}
				}
			}
		}
	}
	if (!func_372(11))
	{
		if (func_371(3))
		{
			if (!__LIB_6__::func_903("DCH1_THINK"))
			{
				if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_16, true, 0))
				{
					PED::_0xFC3DB99C8144CD81(iLocal_298, Local_14.f_16, 0, 0, 0);
				}
				else
				{
					PED::_0xFC3DB99C8144CD81(iLocal_298, Local_14.f_17, 0, 0, 0);
				}
				func_680(11);
			}
		}
	}
	if (!func_372(3))
	{
		if (func_372(2))
		{
			if ((func_851(6, 7, 9, 10, 8) == 0 || ENTITY::IS_ENTITY_ON_SCREEN(Local_236[4 /*5*/])) || !ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_13, true, 0))
			{
				if (((func_860(6, 671.2633f, -1170.438f, 44.8958f, 162.5546f) && func_860(7, 680.0805f, -1184.042f, 45.2678f, 196.9127f)) && func_861(9, 6, joaat("WEAPON_REVOLVER_CATTLEMAN"), -1)) && func_861(10, 7, joaat("WEAPON_REVOLVER_CATTLEMAN"), -1))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_229);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 692.5247f, -1234.736f, 43.3433f, 2.5f, 20000, 4f, 4202496, 40000f);
					TASK::TASK_COMBAT_HATED_TARGETS(0, -1f);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_229);
					TASK::TASK_PERFORM_SEQUENCE(Local_236[9 /*5*/], iLocal_229);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_229);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_229);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 686.9545f, -1237.025f, 43.047f, 2.5f, 20000, 4f, 4202496, 40000f);
					TASK::TASK_COMBAT_HATED_TARGETS(0, -1f);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_229);
					TASK::TASK_PERFORM_SEQUENCE(Local_236[10 /*5*/], iLocal_229);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_229);
					PED::_0xFC3DB99C8144CD81(Local_236[9 /*5*/], Local_14.f_8, 0, 0, 0);
					PED::_0xFC3DB99C8144CD81(Local_236[10 /*5*/], Local_14.f_46, 0, 0, 0);
					func_681(7);
					func_680(3);
				}
			}
		}
	}
	if (func_372(3) && !func_372(12))
	{
		if (func_851(0, 0, 0, 0, 0) == 1)
		{
			iVar5 = 0;
			while (iVar5 < Local_236)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_236[iVar5 /*5*/]))
				{
					if (!__LIB_0__::func_255(Local_236[iVar5 /*5*/], 0) && !((iVar5 == 6 || iVar5 == 7) || iVar5 == 8))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_236[iVar5 /*5*/], true);
						TASK::_TASK_SMART_FLEE_STYLE_PED(Local_236[iVar5 /*5*/], Global_35, 4, 1, -1082130432 /* Float: -1f */, -1, 0);
						func_681(7);
						iLocal_303 = Local_236[iVar5 /*5*/];
					}
				}
				iVar5++;
			}
			func_680(12);
		}
	}
	if (!func_372(5) && func_372(4))
	{
		func_680(5);
		if (!PED::IS_PED_INJURED(Local_236[1 /*5*/]))
		{
			TASK::TASK_CLEAR_DEFENSIVE_AREA(Local_236[1 /*5*/]);
			PED::SET_PED_COMBAT_RANGE(Local_236[1 /*5*/], 1);
			PED::SET_PED_COMBAT_MOVEMENT(Local_236[1 /*5*/], 2);
		}
		if (!PED::IS_PED_INJURED(Local_236[2 /*5*/]))
		{
			TASK::TASK_CLEAR_DEFENSIVE_AREA(Local_236[2 /*5*/]);
			PED::SET_PED_COMBAT_RANGE(Local_236[2 /*5*/], 1);
			PED::SET_PED_COMBAT_MOVEMENT(Local_236[2 /*5*/], 2);
		}
		if (!PED::IS_PED_INJURED(Local_236[3 /*5*/]))
		{
			TASK::TASK_CLEAR_DEFENSIVE_AREA(Local_236[3 /*5*/]);
			PED::SET_PED_COMBAT_RANGE(Local_236[3 /*5*/], 1);
			PED::SET_PED_COMBAT_MOVEMENT(Local_236[3 /*5*/], 2);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_303) && !ENTITY::IS_ENTITY_DEAD(iLocal_303))
	{
		if (__LIB_0__::func_665(iLocal_303, iLocal_298, 1, 1) > 70f)
		{
			iVar6 = 0;
			while (iVar6 < Local_236)
			{
				if (iLocal_303 == Local_236[iVar6 /*5*/])
				{
					Local_236[iVar6 /*5*/] = 0;
				}
				iVar6++;
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_303, true);
			PED::SET_PED_KEEP_TASK(iLocal_303, true);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_303);
			iLocal_303 = 0;
		}
	}
	if (!func_372(13))
	{
		if (func_851(0, 0, 0, 0, 0) <= 1)
		{
			AUDIO::STOP_PED_SPEAKING(iLocal_297, true);
			func_680(13);
		}
	}
	else if (func_851(0, 0, 0, 0, 0) > 1)
	{
		AUDIO::STOP_PED_SPEAKING(iLocal_297, false);
		func_862(13);
	}
}

void func_370()
{
	if (func_674() == 11)
	{
		if (!func_372(9))
		{
			if (iLocal_859 >= 3)
			{
				if (func_333(37) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_298, 242628503, true) == 8)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(iLocal_298, joaat("WEAPON_SHOTGUN_SAWEDOFF_CHARLES"), true, 0, false, false);
					COMPANION::_0xD730281E496621FB(iLocal_298, joaat("DEFENSIVE"));
					PED::SET_COMBAT_FLOAT(iLocal_298, 38, 100f);
					PED::_0xFC3DB99C8144CD81(iLocal_298, Local_14.f_15, 0, 0, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_298, true);
					PED::REGISTER_HATED_TARGETS_AROUND_PED(iLocal_298, 100f);
					TASK::TASK_COMBAT_HATED_TARGETS(iLocal_298, -1f);
					ENTITY::SET_ENTITY_PROOFS(iLocal_298, 2, false);
					PED::SET_PED_ACCURACY(iLocal_298, 20);
					AUDIO::STOP_PED_SPEAKING(iLocal_298, true);
					func_680(9);
				}
			}
		}
	}
	if (func_372(9) && !func_372(11))
	{
		if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_15, true, 0) && ENTITY::IS_ENTITY_IN_VOLUME(iLocal_298, Local_14.f_15, true, 0))
		{
			if (PED::_0xEF2E6F870783369B(iLocal_298, 0) != Local_14.f_25)
			{
				PED::_0xFC3DB99C8144CD81(iLocal_298, Local_14.f_25, 0, 0, 0);
			}
		}
		if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_14.f_25, true, 0) && ENTITY::IS_ENTITY_IN_VOLUME(iLocal_298, Local_14.f_25, true, 0))
		{
			if (PED::_0xEF2E6F870783369B(iLocal_298, 0) != Local_14.f_15)
			{
				PED::_0xFC3DB99C8144CD81(iLocal_298, Local_14.f_15, 0, 0, 0);
			}
		}
	}
}

bool func_371(int iParam0)
{
	if (MISC::IS_BIT_SET(iLocal_208, iParam0))
	{
		return true;
	}
	return false;
}

bool func_372(int iParam0)
{
	if (MISC::IS_BIT_SET(iLocal_207, iParam0))
	{
		return true;
	}
	return false;
}

bool func_373()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_236[iVar0 /*5*/]))
		{
			if (!PED::IS_PED_DEAD_OR_DYING(Local_236[iVar0 /*5*/], true))
			{
				if (!__LIB_0__::func_125(Local_236[iVar0 /*5*/]))
				{
					return false;
				}
			}
		}
		iVar0++;
	}
	return true;
}

int func_374()
{
	return iLocal_115;
}

void func_375()
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	if (!PED::IS_PED_INJURED(iLocal_298))
	{
		if (!func_333(11))
		{
			switch (iLocal_858)
			{
				case 0:
					Local_614[0 /*6*/] = { 669.8008f, -1258.508f, 42.6689f };
					Local_614[0 /*6*/].f_3 = 93f;
					Local_614[1 /*6*/] = { 672.4386f, -1257.065f, 42.994f };
					Local_614[1 /*6*/].f_3 = 219f;
					Local_614[2 /*6*/] = { 673.2046f, -1250.254f, 42.9306f };
					Local_614[2 /*6*/].f_3 = 34f;
					Local_614[2 /*6*/].f_5 = 1;
					Local_614[3 /*6*/] = { 679.5242f, -1251.723f, 43.0152f };
					Local_614[3 /*6*/].f_3 = 286f;
					Local_614[4 /*6*/] = { 680.0383f, -1255.396f, 43.0152f };
					Local_614[4 /*6*/].f_3 = 273f;
					Local_614[5 /*6*/] = { 681.5955f, -1258.107f, 43.0667f };
					Local_614[5 /*6*/].f_3 = 267f;
					Local_614[5 /*6*/].f_5 = 1;
					Local_614[6 /*6*/] = { 674.9949f, -1261.71f, 42.984f };
					Local_614[6 /*6*/].f_3 = 235f;
					Local_614[7 /*6*/] = { 678.1174f, -1265.121f, 42.984f };
					Local_614[7 /*6*/].f_3 = 18f;
					Local_614[7 /*6*/].f_5 = 1;
					iVar0 = 0;
					while (iVar0 < Local_614)
					{
						fVar1 = __LIB_0__::func_94(iLocal_298, Local_614[iVar0 /*6*/], 1);
						if (fVar2 == 0f || fVar1 < fVar2)
						{
							iVar3 = iVar0;
							fVar2 = fVar1;
						}
						iVar0++;
					}
					iLocal_663 = iVar3;
					iLocal_664 = 0;
					iLocal_858 = 1;
					break;
				case 1:
					if (func_365(39) && !__LIB_8__::func_684("DCH1_OVER"))
					{
						func_334(10);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_229);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_614[iLocal_663 /*6*/], 1f, 20000, 0.25f, 0, Local_614[iLocal_663 /*6*/].f_3);
						if (Local_614[iLocal_663 /*6*/].f_5)
						{
							TASK::_TASK_START_SCENARIO_IN_PLACE(0, joaat("WORLD_HUMAN_CROUCH_INSPECT"), (3000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 2000)), true, 0, -1f, false);
						}
						else
						{
							TASK::_TASK_START_SCENARIO_IN_PLACE(0, joaat("WORLD_HUMAN_INSPECT"), (3000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 2000)), true, 0, -1f, false);
						}
						TASK::CLOSE_SEQUENCE_TASK(iLocal_229);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_298, iLocal_229);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_229);
						iLocal_858 = 2;
					}
					break;
				case 2:
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_298, 242628503, true) == 8)
					{
						iLocal_663++;
						iLocal_664++;
						if (iLocal_663 > 7)
						{
							iLocal_663 = 0;
						}
						if (iLocal_664 == 8)
						{
							iLocal_858 = 3;
						}
						else
						{
							iLocal_858 = 1;
						}
					}
					break;
				case 3:
					fLocal_666[0] = __LIB_0__::func_94(Global_35, 673.011f, -1266.952f, 42.984f, 1);
					fLocal_666[1] = __LIB_0__::func_94(Global_35, 671.0946f, -1264.888f, 42.984f, 1);
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_298, 242628503, true) == 8)
					{
						if (__LIB_0__::func_94(iLocal_298, 673.011f, -1266.952f, 42.984f, 0) > 1f && __LIB_0__::func_94(iLocal_298, 671.0946f, -1264.888f, 42.984f, 0) > 1f)
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_229);
							if (fLocal_666[0] > fLocal_666[1])
							{
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 673.011f, -1266.952f, 42.984f, 1f, 20000, 0.25f, 0, 120f);
								iLocal_665 = 0;
							}
							else
							{
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 671.0946f, -1264.888f, 42.984f, 1f, 20000, 0.25f, 0, 162f);
								iLocal_665 = 1;
							}
							TASK::CLOSE_SEQUENCE_TASK(iLocal_229);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_298, iLocal_229);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_229);
						}
						else
						{
							iLocal_858 = 4;
						}
					}
					else
					{
						if (iLocal_665 == 0 && fLocal_666[0] < fLocal_666[1])
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_229);
							TASK::TASK_LOOK_AT_ENTITY(0, iLocal_297, -1, 0, 51, 0);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 671.0946f, -1264.888f, 42.984f, 1f, 20000, 0.25f, 0, 162f);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_229);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_298, iLocal_229);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_229);
							iLocal_665 = 1;
						}
						if (iLocal_665 == 1 && fLocal_666[1] < fLocal_666[0])
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_229);
							TASK::TASK_LOOK_AT_ENTITY(0, iLocal_297, -1, 0, 51, 0);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 673.011f, -1266.952f, 42.984f, 1f, 20000, 0.25f, 0, 120f);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_229);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_298, iLocal_229);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_229);
							iLocal_665 = 0;
						}
					}
					break;
			}
		}
	}
}

void func_382()
{
	float fVar0;
	bool bVar1;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_297))
	{
		if (!func_333(9))
		{
			if (!PED::IS_PED_IN_GROUP(iLocal_297))
			{
				PED::SET_PED_AS_GROUP_MEMBER(iLocal_297, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID()));
			}
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_297, joaat("REL_PLAYER_ALLY"));
			AUDIO::_0x0D7FD6A55FD63AEF(21, 3, 1);
			AUDIO::_0x0D7FD6A55FD63AEF(19, 3, 1);
			AUDIO::_0x0D7FD6A55FD63AEF(7, 3, 1);
			func_334(9);
		}
		if (func_365(34) && !func_333(8))
		{
			if (PED::IS_PED_ON_MOUNT(Global_35) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
			{
				if (!PED::IS_PED_IN_GROUP(iLocal_297))
				{
					PED::SET_PED_AS_GROUP_MEMBER(iLocal_297, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID()));
				}
				if (PED::IS_PED_ON_MOUNT(Global_35))
				{
					if (!PED::IS_PED_ON_MOUNT(iLocal_297))
					{
						if (__LIB_0__::func_665(Global_35, iLocal_297, 1, 1) < 20f)
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_297, 1868526510, true) == 8)
							{
								TASK::TASK_MOUNT_ANIMAL(iLocal_297, PED::GET_MOUNT(Global_35), -1, 0, 2f, 1, 0, 0);
							}
						}
					}
					else if (PED::GET_MOUNT(Global_35) != PED::GET_MOUNT(iLocal_297))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_297, 501393341, true) == 8)
						{
							TASK::TASK_DISMOUNT_ANIMAL(iLocal_297, 0, 0, 0, 0, 0);
						}
					}
				}
			}
			else
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_592))
				{
					fVar0 = __LIB_0__::func_665(Global_35, iLocal_592, 1, 1);
					if (fLocal_875 == 0f)
					{
						fLocal_875 = fVar0;
					}
					else
					{
						if (fVar0 < fLocal_875)
						{
							bVar1 = true;
						}
						else
						{
							bVar1 = false;
						}
						fLocal_875 = fVar0;
					}
				}
				if (PED::IS_PED_ON_MOUNT(iLocal_297))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_297, 501393341, true) == 8)
					{
						TASK::TASK_DISMOUNT_ANIMAL(iLocal_297, 0, 0, 0, 0, 0);
					}
				}
				else if (bVar1)
				{
					if (!PED::IS_PED_IN_GROUP(iLocal_297))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_592))
						{
							if (__LIB_0__::func_665(Global_35, iLocal_592, 1, 1) < __LIB_0__::func_665(iLocal_592, iLocal_297, 1, 1))
							{
								PED::SET_PED_AS_GROUP_MEMBER(iLocal_297, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID()));
							}
						}
					}
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iLocal_592))
				{
					if (__LIB_0__::func_665(Global_35, iLocal_592, 1, 1) > 13f)
					{
						if (!PED::IS_PED_IN_GROUP(iLocal_297))
						{
							PED::SET_PED_AS_GROUP_MEMBER(iLocal_297, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID()));
						}
					}
					else if (PED::IS_PED_IN_GROUP(iLocal_297))
					{
						PED::REMOVE_PED_FROM_GROUP(iLocal_297);
					}
				}
			}
		}
		if (!func_333(7))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_299))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_299))
				{
					if (__LIB_0__::func_665(PLAYER::PLAYER_PED_ID(), iLocal_299, 1, 1) < 40f && __LIB_0__::func_665(iLocal_297, iLocal_299, 1, 1) < 40f)
					{
						func_334(7);
					}
				}
			}
		}
		if (!func_333(8))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_299))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_299))
				{
					if (__LIB_0__::func_665(iLocal_297, iLocal_299, 1, 1) < 20f)
					{
						if (PED::IS_PED_ON_MOUNT(iLocal_297))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_297, 501393341, true) == 8 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_297, 1920417248, true) == 8)
							{
								if (ENTITY::GET_ENTITY_SPEED(iLocal_592) < 3f || __LIB_0__::func_665(iLocal_297, iLocal_299, 1, 1) < 17f)
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_297, true);
									if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_297, false))
									{
										TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_297, 0, 0);
									}
									else if (PED::IS_PED_ON_MOUNT(iLocal_297))
									{
										TASK::TASK_DISMOUNT_ANIMAL(iLocal_297, 131136, 0, 0, 0, 0);
									}
									PED::SET_PED_RAGDOLL_ON_COLLISION(iLocal_297, 0, 0);
									PED::SET_PED_CAN_RAGDOLL(iLocal_297, false);
								}
							}
						}
						else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_297, 713668775, true) == 8)
						{
							if (PED::IS_PED_IN_GROUP(iLocal_297))
							{
								PED::REMOVE_PED_FROM_GROUP(iLocal_297);
							}
							TASK::OPEN_SEQUENCE_TASK(&iLocal_229);
							TASK::TASK_LOOK_AT_ENTITY(0, iLocal_299, -1, 16, 51, 0);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 933.402f, -422.6433f, 86.0048f, 1.5f, 20000, 0.25f, 0, 40000f);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_229);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_297, iLocal_229);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_229);
							func_334(8);
						}
					}
				}
			}
		}
	}
}

void func_383(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	vector3 vVar0;
	int iVar3;
	struct<4> Var4;
	int iVar8;
	int iVar9;
	iVar8 = 1;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::_0x608BC6A6AACD5036(&Var4, iParam0, iParam1, 0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Var4.f_3))
			{
				iVar3 = __LIB_6__::func_140(Var4.f_3);
				if (__LIB_0__::func_144(iVar3, 0))
				{
					if (iParam5 == 0)
					{
						PED::_0xED00D72F81CF7278(Var4.f_3, 0, 1);
						vVar0.x = iParam2;
						vVar0.f_1 = iParam3;
						vVar0.f_2 = iParam4;
						if (__LIB_0__::func_86(vVar0))
						{
							vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, -1f, 0f) };
							__LIB_0__::func_634(&vVar0, 50, 10, 0);
						}
						ENTITY::SET_ENTITY_COORDS(Var4.f_3, vVar0, false, false, true, true);
					}
					func_878(&iParam0, iVar3, &iVar8, 1, -142743235);
				}
				else if (ENTITY::IS_ENTITY_A_PED(Var4.f_3))
				{
					iVar9 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var4.f_3);
					if (PED::IS_PED_HUMAN(iVar9))
					{
						PED::_0xED00D72F81CF7278(Var4.f_3, 0, 1);
						vVar0.x = iParam2;
						vVar0.f_1 = iParam3;
						vVar0.f_2 = iParam4;
						if (__LIB_0__::func_86(vVar0))
						{
							vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, -1f, 0f) };
							__LIB_0__::func_634(&vVar0, 50, 10, 0);
						}
						ENTITY::SET_ENTITY_COORDS(Var4.f_3, vVar0, false, PED::_IS_PED_HOGTIED(iVar9), true, true);
					}
				}
			}
		}
	}
}

bool func_386(var uParam0)
{
	if (((((!ENTITY::IS_ENTITY_DEAD(iLocal_299) && !ENTITY::IS_ENTITY_DEAD(iLocal_300)) && !ENTITY::IS_ENTITY_DEAD(iLocal_301)) && ENTITY::DOES_ENTITY_EXIST(iLocal_306)) && ENTITY::DOES_ENTITY_EXIST(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_306, 0))) && ENTITY::DOES_ENTITY_EXIST(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_306, 1)))
	{
		if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_669))
		{
			iLocal_669 = ANIMSCENE::_CREATE_ANIM_SCENE(sLocal_678, 0, "pl_base", false, true);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_669, "GermanMother", iLocal_299, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_669, "germanson", iLocal_300, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_669, "GermanDaughter", iLocal_301, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_669, "Wagon02x", iLocal_306, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_669, "germanFather", iLocal_297, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_669, "horse_01", VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_306, 1), 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_669, "horse_01^1", VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_306, 0), 0);
			ANIMSCENE::LOAD_ANIM_SCENE(iLocal_669);
		}
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_669) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_669, true, false))
		{
			ANIMSCENE::START_ANIM_SCENE(iLocal_669);
			func_358(uParam0, 2);
			return true;
		}
	}
	return false;
}

bool func_389()
{
	STREAMING::REQUEST_MODEL(joaat("CS_KIERAN"), false);
	STREAMING::REQUEST_MODEL(joaat("CS_REVSWANSON"), false);
	STREAMING::REQUEST_MODEL(joaat("CS_UNCLE"), false);
	STREAMING::REQUEST_MODEL(joaat("WAGON04X"), false);
	STREAMING::REQUEST_MODEL(joaat("P_MATCHSTICK01X"), false);
	if (!bLocal_874)
	{
		GRAPHICS::_0x5199405EABFBD7F0("Title_Ch03_ClemensPoint");
		bLocal_874 = true;
	}
	if (GRAPHICS::_0xBF2DD155B2ADCD0A("Title_Ch03_ClemensPoint"))
	{
	}
	if (((((STREAMING::HAS_MODEL_LOADED(joaat("CS_KIERAN")) && STREAMING::HAS_MODEL_LOADED(joaat("CS_REVSWANSON"))) && STREAMING::HAS_MODEL_LOADED(joaat("CS_UNCLE"))) && STREAMING::HAS_MODEL_LOADED(joaat("WAGON04X"))) && STREAMING::HAS_MODEL_LOADED(joaat("P_MATCHSTICK01X"))) && !GRAPHICS::_0xBF2DD155B2ADCD0A("Title_Ch03_ClemensPoint"))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_588))
		{
			iLocal_588 = func_610(0, 1, 1, 682.0308f, -1217.243f, 44.2751f, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_703))
		{
			iLocal_703 = func_610(3, 1, 1, 682.0308f, -1217.243f, 44.2751f, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_298))
		{
			iLocal_298 = func_610(7, 1, 1, 683.0308f, -1217.243f, 44.2751f, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_704))
		{
			iLocal_704 = func_610(2, 1, 1, 684.0308f, -1217.243f, 44.2751f, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_705))
		{
			iLocal_705 = func_610(10, 1, 1, 686.0308f, -1217.243f, 44.2751f, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_706))
		{
			iLocal_706 = func_610(18, 1, 1, 687.0308f, -1217.243f, 44.2751f, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_707))
		{
			iLocal_707 = func_610(17, 1, 1, 688.0308f, -1217.243f, 44.2751f, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_708))
		{
			iLocal_708 = func_610(21, 1, 1, 689.0308f, -1217.243f, 44.2751f, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_709))
		{
			iLocal_709 = func_610(19, 1, 1, 688.0308f, -1217.243f, 44.2751f, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_710))
		{
			iLocal_710 = func_610(4, 1, 1, 689.0308f, -1217.243f, 44.2751f, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
		}
		if ((((((((((ENTITY::DOES_ENTITY_EXIST(iLocal_703) && ENTITY::DOES_ENTITY_EXIST(iLocal_298)) && ENTITY::DOES_ENTITY_EXIST(iLocal_704)) && ENTITY::DOES_ENTITY_EXIST(iLocal_705)) && ENTITY::DOES_ENTITY_EXIST(iLocal_706)) && ENTITY::DOES_ENTITY_EXIST(iLocal_707)) && ENTITY::DOES_ENTITY_EXIST(iLocal_708)) && ENTITY::DOES_ENTITY_EXIST(iLocal_703)) && ENTITY::DOES_ENTITY_EXIST(iLocal_709)) && ENTITY::DOES_ENTITY_EXIST(iLocal_710)) && ENTITY::DOES_ENTITY_EXIST(iLocal_588))
		{
			iLocal_712 = VEHICLE::CREATE_VEHICLE(joaat("WAGON04X"), 682.0308f, -1207.243f, 44.2751f, 0f, true, true, false, false);
			iLocal_713 = VEHICLE::CREATE_VEHICLE(joaat("WAGON04X"), 682.0308f, -1197.243f, 44.2751f, 0f, true, true, false, false);
			iLocal_714 = VEHICLE::CREATE_VEHICLE(joaat("WAGON04X"), 682.0308f, -1187.243f, 44.2751f, 0f, true, true, false, false);
			VEHICLE::_SET_VEHICLE_TINT(iLocal_712, 11);
			VEHICLE::_SET_VEHICLE_TINT(iLocal_713, 9);
			VEHICLE::_SET_VEHICLE_TINT(iLocal_714, 10);
			iLocal_711 = OBJECT::CREATE_OBJECT(joaat("P_MATCHSTICK01X"), 682.0308f, -1218.243f, 44.2751f, true, true, false, false, true);
			return true;
		}
	}
	return false;
}

bool func_412(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
	if (!func_892(iParam0, iParam1, bParam2, iParam5))
	{
		return false;
	}
	if (!func_893(iParam0, &iVar0, iParam1))
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
				func_412(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
		func_915(28);
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
					if (__LIB_0__::func_708(0) && func_920(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
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
					if (__LIB_0__::func_708(0) && func_920(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
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
			if (!func_922(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (__LIB_0__::func_356(iParam0) == joaat("AMMO") && __LIB_0__::func_258(iParam0))
		{
			if (!func_924(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (__LIB_0__::func_192(iParam0, 866047851))
		{
			func_925(iParam0);
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
			__LIB_11__::func_618(iParam0);
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
			__LIB_11__::func_620(iParam0, 0, 0, 0);
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
						func_412(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_412(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_412(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_412(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_412(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_412(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_412(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_915(24);
				if (Global_1946804.f_1497.f_1[27 /*3*/] == Global_1946804.f_57[27 /*11*/])
				{
					func_945(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_OFFHAND_HOLSTER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 0);
				}
				if (__LIB_0__::func_918(&iVar9, 0))
				{
					func_920(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case joaat("UPGRADE_BANDOLIER"):
				if (__LIB_0__::func_2() == -1 && Global_1946804.f_1497.f_1[25 /*3*/] == Global_1946804.f_57[25 /*11*/])
				{
					func_945(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_BANDOLIER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_1"), 1, 1, 1, 0, 1, 0);
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
					func_412(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_412(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
		if (!func_966(iVar10, iVar0, iParam5))
		{
			return false;
		}
		else if (!__LIB_0__::func_708(0))
		{
			return true;
		}
		if (__LIB_0__::func_356(iParam0) == joaat("CLOTHING"))
		{
			func_967(iParam0);
		}
		if (__LIB_0__::func_192(iParam0, -1979000645))
		{
			func_968(iParam0);
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
				func_412(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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

void func_427(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
		iVar9 = __LIB_11__::func_377(iParam0, &iVar7, &iVar8);
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
						func_412(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_412(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_412(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_412(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_412(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_412(joaat("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_412(joaat("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_412(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_412(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_412(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_412(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_412(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_412(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_412(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_412(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_412(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_412(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_412(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_412(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_412(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_412(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_412(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_412(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_412(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_412(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1004();
						func_1005(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
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
						func_412(joaat("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
							func_427(Global_1347702[21 /*49*/].f_15, 0, 0, 0, 0);
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
						func_1012(Global_35, joaat("CLOTHING_ITEM_BADGE_PZERO_000"), 0, -358215195, 1, 1);
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
							func_427(Global_1347702[82 /*49*/].f_15, 0, 0, 0, 0);
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
							func_427(Global_1347702[83 /*49*/].f_15, 0, 0, 0, 0);
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
						func_412(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_412(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
		func_1039();
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
							func_412(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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

void func_455(var uParam0)
{
	if (!__LIB_0__::func_1(uParam0->f_172, 8))
	{
		return;
	}
	LAW::_0x710448D44A64C213(true);
	AUDIO::TRIGGER_MUSIC_EVENT("RDTC1_STOP");
	PLAYER::_0x19B2C7A6C34FAD54(PLAYER::PLAYER_ID(), 1f);
	GRAPHICS::_0x9CF1836C03FB67A2(&uLocal_232, 1);
	GRAPHICS::_0x9CF1836C03FB67A2(&uLocal_233, 1);
	VEHICLE::SET_RANDOM_TRAINS(true);
	__LIB_1__::func_600(1);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_595, false);
	__LIB_1__::func_724(16);
	if (STREAMING::_0xCF45DF50C7775F2A())
	{
		STREAMING::_0x5A8B01199C3E79C3();
	}
	if (__LIB_0__::func_866(7, 0))
	{
		__LIB_1__::func_640(7);
	}
	__LIB_11__::func_10(1, 0, 0);
	__LIB_0__::func_745(7);
	__LIB_4__::func_705(7, 0);
	GRAPHICS::_0x9CF1836C03FB67A2(&uLocal_234, 0);
	GRAPHICS::_0x9CF1836C03FB67A2(&uLocal_235, 0);
	func_765();
	__LIB_5__::func_547(1);
	VOLUME::_DELETE_VOLUME(iLocal_594);
	__LIB_0__::func_267(1);
	if (PLAYER::_0xD1F6B912785BFD35(PLAYER::GET_PLAYER_INDEX()))
	{
		PLAYER::_0x908D4B72854C8F62(PLAYER::GET_PLAYER_INDEX());
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
}

void func_458()
{
	VOLUME::_DELETE_VOLUME(Local_14);
	VOLUME::_DELETE_VOLUME(Local_14.f_1);
	VOLUME::_DELETE_VOLUME(Local_14.f_2);
	VOLUME::_DELETE_VOLUME(Local_14.f_3);
	VOLUME::_DELETE_VOLUME(Local_14.f_4);
	VOLUME::_DELETE_VOLUME(Local_14.f_5);
	VOLUME::_DELETE_VOLUME(Local_14.f_6);
	VOLUME::_DELETE_VOLUME(Local_14.f_7);
	VOLUME::_DELETE_VOLUME(Local_14.f_8);
	VOLUME::_DELETE_VOLUME(Local_14.f_9);
	VOLUME::_DELETE_VOLUME(Local_14.f_10);
	VOLUME::_DELETE_VOLUME(Local_14.f_11);
	VOLUME::_DELETE_VOLUME(Local_14.f_12);
	VOLUME::_DELETE_VOLUME(Local_14.f_13);
	VOLUME::_DELETE_VOLUME(Local_14.f_14);
	VOLUME::_DELETE_VOLUME(Local_14.f_15);
	VOLUME::_DELETE_VOLUME(Local_14.f_16);
	VOLUME::_DELETE_VOLUME(Local_14.f_17);
	VOLUME::_DELETE_VOLUME(Local_14.f_18);
	VOLUME::_DELETE_VOLUME(Local_14.f_19);
	VOLUME::_DELETE_VOLUME(Local_14.f_20);
	VOLUME::_DELETE_VOLUME(Local_14.f_21);
	VOLUME::_DELETE_VOLUME(Local_14.f_22);
	VOLUME::_DELETE_VOLUME(Local_14.f_23);
	VOLUME::_DELETE_VOLUME(Local_14.f_24);
	VOLUME::_DELETE_VOLUME(Local_14.f_25);
	VOLUME::_DELETE_VOLUME(Local_14.f_26);
	VOLUME::_DELETE_VOLUME(Local_14.f_27);
	VOLUME::_DELETE_VOLUME(Local_14.f_28);
	VOLUME::_DELETE_VOLUME(Local_14.f_29);
	VOLUME::_DELETE_VOLUME(Local_14.f_30);
	VOLUME::_DELETE_VOLUME(Local_14.f_31);
	VOLUME::_DELETE_VOLUME(Local_14.f_32);
	VOLUME::_DELETE_VOLUME(Local_14.f_33);
	VOLUME::_DELETE_VOLUME(Local_14.f_34);
	VOLUME::_DELETE_VOLUME(Local_14.f_35);
	VOLUME::_DELETE_VOLUME(Local_14.f_36);
	VOLUME::_DELETE_VOLUME(Local_14.f_37);
	VOLUME::_DELETE_VOLUME(Local_14.f_38);
	VOLUME::_DELETE_VOLUME(Local_14.f_39);
	VOLUME::_DELETE_VOLUME(Local_14.f_40);
	VOLUME::_DELETE_VOLUME(Local_14.f_41);
	VOLUME::_DELETE_VOLUME(Local_14.f_42);
	VOLUME::_DELETE_VOLUME(Local_14.f_43);
	VOLUME::_DELETE_VOLUME(Local_14.f_44);
	VOLUME::_DELETE_VOLUME(Local_14.f_45);
	VOLUME::_DELETE_VOLUME(Local_14.f_46);
	VOLUME::_DELETE_VOLUME(Local_14.f_47);
	VOLUME::_DELETE_VOLUME(Local_14.f_48);
	VOLUME::_DELETE_VOLUME(Local_14.f_49);
	VOLUME::_DELETE_VOLUME(Local_14.f_50);
	VOLUME::_DELETE_VOLUME(Local_14.f_51);
	VOLUME::_DELETE_VOLUME(Local_14.f_52);
	VOLUME::_DELETE_VOLUME(Local_14.f_53);
	VOLUME::_DELETE_VOLUME(Local_14.f_54);
	VOLUME::_DELETE_VOLUME(Local_14.f_55);
	VOLUME::_DELETE_VOLUME(Local_14.f_56);
	VOLUME::_DELETE_VOLUME(Local_14.f_57);
	VOLUME::_DELETE_VOLUME(Local_14.f_58);
	VOLUME::_DELETE_VOLUME(Local_14.f_59);
	VOLUME::_DELETE_VOLUME(Local_14.f_60);
	VOLUME::_DELETE_VOLUME(Local_14.f_61);
}

int func_508(int iParam0, int iParam1)
{
	var uVar0;
	return func_1113(&uVar0, iParam0, iParam1);
}

int func_515(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
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
				return 1;
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
					return 1;
				}
				else if (__LIB_2__::func_969(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (__LIB_4__::func_235(iParam0, uParam2))
				{
					*uParam3 = 64;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return 1;
				}
			}
		}
		if (Global_1935630.f_26 && __LIB_2__::func_173(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return 1;
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
						return 1;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (__LIB_2__::func_876(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return 1;
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
					return 1;
				}
			}
			else if (__LIB_2__::func_877(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return 1;
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
					return 1;
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
					return 1;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (__LIB_1__::func_331(uParam2, 4000))
				{
					if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && __LIB_1__::func_328(uParam2, iParam0)) && __LIB_2__::func_832(uParam2, iParam0))
					{
						*uParam3 = 2;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return 1;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && __LIB_1__::func_328(uParam2, iParam0)) && __LIB_2__::func_832(uParam2, iParam0))
				{
					*uParam3 = 2;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return 1;
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
								return 1;
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
							return 1;
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
						return 1;
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
							return 1;
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
				return 1;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (__LIB_10__::func_555(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return 1;
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
						return 1;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (__LIB_2__::func_228(iParam0, uParam2))
				{
					*uParam3 = 32768;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return 1;
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
						return 1;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (__LIB_10__::func_556(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return 1;
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
				return 1;
			}
		}
	}
	return 0;
}

void func_529(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (__LIB_1__::func_22(iVar0))
		{
			__LIB_11__::func_616(iVar0, bParam1, bParam2, bParam0, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
		}
		iVar0++;
	}
}

void func_530(int iParam0)
{
	iLocal_888 = iParam0;
}

void func_531(vector3 vParam0, float fParam3)
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_592))
	{
		ENTITY::SET_ENTITY_COORDS(iLocal_592, vParam0, true, false, true, true);
		ENTITY::SET_ENTITY_HEADING(iLocal_592, fParam3);
		ENTITY::_0x9587913B9E772D29(iLocal_592, 0);
	}
}

int func_610(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
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
						__LIB_11__::func_616(iParam0, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
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
				func_1212(Global_1360165[iParam0 /*1157*/], vVar0, iParam6, 2, 1073741824 /* Float: 2f */);
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
			func_1219(iParam0, Global_1360165[iParam0 /*1157*/]);
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

int func_626(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char cVar5[128];
	bool bVar21;
	bool bVar22;
	int iVar23;
	int iVar24;
	float fVar25;
	if (!bParam12 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	switch (iParam1)
	{
		case joaat("GROUP_SNIPER"):
		case joaat("GROUP_REVOLVER"):
		case joaat("GROUP_REPEATER"):
		case joaat("GROUP_PISTOL"):
		case joaat("GROUP_SHOTGUN"):
		case joaat("GROUP_RIFLE"):
			iVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, iParam7, iParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(iVar0))
			{
				iVar0 = joaat("WEAPON_UNARMED");
			}
			break;
		default:
			if (!WEAPON::IS_WEAPON_VALID(iParam1))
			{
				return iParam1;
			}
			iVar0 = iParam1;
			if ((WEAPON::_0x705BE297EEBDB95D(iVar0) || WEAPON::_IS_WEAPON_MELEE(iVar0)) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == joaat("REL_GANG_DUTCHS"))
			{
				StringCopy(&cVar5, WEAPON::_GET_WEAPON_NAME(iVar0), 128);
				iVar2 = WEAPON::_0xD42514C182121C23(ENTITY::GET_ENTITY_MODEL(iParam0));
				if (!Global_43891 && MISC::_DOES_STRING_EXIST_IN_STRING(&cVar5, "_DUALWIELD"))
				{
					StringCopy(&cVar5, HUD::_0x806862E5D266CF38(&cVar5, 0, (HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar5) - HUD::GET_LENGTH_OF_LITERAL_STRING("_DUALWIELD"))), 128);
					iVar3 = MISC::GET_HASH_KEY(&cVar5);
					if (__LIB_0__::func_154(iVar3) && WEAPON::_0xF252A85B8F3F8C58(iVar2, iVar3))
					{
						bVar21 = true;
					}
				}
				if (!bVar21)
				{
					iVar1 = WEAPON::GET_WEAPONTYPE_GROUP(iVar0);
					if (iVar1 != 0 && iVar2 != 0)
					{
						iVar4 = WEAPON::_0x9EEFD670F10656D7(iVar2, iVar1);
						if (!Global_43891)
						{
							if (__LIB_0__::func_154(iVar4) && iVar4 != iVar0)
							{
								iVar0 = iVar4;
							}
						}
						else if (iVar4 == iVar0)
						{
						}
					}
				}
			}
			break;
	}
	if (__LIB_0__::func_2() == -1 && !__LIB_0__::func_214(iVar0))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, iVar0, 0, false) && iParam0 != Global_35)
		{
			bVar22 = true;
		}
		else if (((iVar4 == iVar0 && !Global_43891) && iParam0 != Global_35) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == joaat("REL_GANG_DUTCHS"))
		{
			bVar22 = true;
		}
		else
		{
			iVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, iParam7, iParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(iVar0))
			{
				iVar0 = joaat("WEAPON_UNARMED");
			}
		}
	}
	if (iVar0 == joaat("WEAPON_UNARMED") && iParam1 == joaat("WEAPON_UNARMED"))
	{
		return iVar0;
	}
	else if (iVar0 == joaat("WEAPON_UNARMED"))
	{
		switch (iParam1)
		{
			case joaat("GROUP_REVOLVER"):
			case joaat("GROUP_PISTOL"):
				iVar0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
				break;
			case joaat("GROUP_SNIPER"):
			case joaat("GROUP_REPEATER"):
			case joaat("GROUP_SHOTGUN"):
			case joaat("GROUP_RIFLE"):
				if (__LIB_0__::func_214(joaat("WEAPON_REPEATER_CARBINE")))
				{
					iVar0 = joaat("WEAPON_REPEATER_CARBINE");
				}
				else
				{
					iVar0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
				}
				break;
			default:
				iVar0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
				break;
		}
	}
	else if (iVar0 == joaat("WEAPON_MELEE_LANTERN") && iParam0 == Global_35)
	{
		iVar0 = joaat("WEAPON_MELEE_DAVY_LANTERN");
	}
	if (iParam9 < 0)
	{
		if (iParam0 != Global_35 && __LIB_0__::func_154(iVar0))
		{
			WEAPON::GET_MAX_AMMO(iParam0, &iParam9, iVar0);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else if ((!WEAPON::_IS_WEAPON_MELEE(iVar0) && iVar0 != joaat("WEAPON_UNARMED")) && !WEAPON::_IS_WEAPON_LANTERN(iVar0))
		{
			iVar23 = WEAPON::GET_PED_AMMO_BY_TYPE(iParam0, WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(iParam0, iVar0));
			iVar24 = WEAPON::_GET_WEAPON_CLIP_SIZE(iVar0) * 3;
			iParam9 = (iVar24 - iVar23);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else
		{
			iParam9 = 0;
		}
	}
	if (bParam6 && bParam2)
	{
		bParam5 = false;
	}
	if (iParam0 == Global_35)
	{
		func_920(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		__LIB_0__::func_215(iParam0, &iVar0, &fVar25);
		iVar0 = WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (__LIB_0__::func_216(iVar0))
		{
			WEAPON::SET_PED_INFINITE_AMMO(iParam0, bParam3, iVar0);
		}
	}
	else if (bParam10)
	{
		PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), iVar0, iParam4);
	}
	return iVar0;
}

bool func_641(int iParam0)
{
	if (MISC::IS_BIT_SET(iLocal_210, iParam0))
	{
		return true;
	}
	return false;
}

bool func_642(var uParam0, vector3 vParam1, float fParam4, float fParam5)
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_592))
	{
		ENTITY::SET_ENTITY_COORDS(iLocal_592, vParam1, true, false, true, true);
		ENTITY::SET_ENTITY_HEADING(iLocal_592, fParam4);
		ENTITY::_0x9587913B9E772D29(iLocal_592, 0);
		return true;
	}
	else if (__LIB_13__::func_543(uParam0, &iLocal_592, vParam1, fParam4, 1, fParam5, 1, 1, 1))
	{
		return true;
	}
	return false;
}

void func_643(int iParam0)
{
	MISC::SET_BIT(&iLocal_210, iParam0);
}

int func_644(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, float fParam12, bool bParam13, bool bParam14, bool bParam15, int iParam16)
{
	var uVar0;
	int iVar1;
	if (!__LIB_0__::func_49(iParam0))
	{
		return 0;
	}
	iVar1 = func_355(&uVar0, iParam0, bParam1, bParam2, iParam3, iParam4, iParam5, bParam7, bParam8, iParam9, iParam10, iParam11, fParam12, bParam13, bParam14, bParam15, bParam6, iParam16);
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

bool func_648()
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_670))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_588))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_670, "DUTCH", iLocal_588, 0);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_598[2]))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_670, "p_pen01x", iLocal_598[2], 0);
			ENTITY::SET_ENTITY_VISIBLE(iLocal_598[2], true);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_598[1]))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_670, "p_cs_map01x", iLocal_598[1], 0);
			ENTITY::SET_ENTITY_VISIBLE(iLocal_598[1], true);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_598[4]))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_670, "p_cs_mattress01x", iLocal_598[4], 0);
			ENTITY::SET_ENTITY_VISIBLE(iLocal_598[4], true);
		}
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_670, true, false))
		{
			ANIMSCENE::START_ANIM_SCENE(iLocal_670);
			return true;
		}
	}
	return false;
}

int func_655()
{
	if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_866, "ARGUMENT_1", 1))
	{
		return 0;
	}
	if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_866, "ARGUMENT_2", 1))
	{
		return 1;
	}
	if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_866, "ARGUMENT_3", 1))
	{
		return 2;
	}
	if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_866, "ARGUMENT_4", 1))
	{
		return 3;
	}
	if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_866, "ARGUMENT_5", 1))
	{
		return 4;
	}
	if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_866, "ARGUMENT_6", 1))
	{
		return 5;
	}
	if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_866, "ARGUMENT_7", 1))
	{
		return 6;
	}
	if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_866, "ARGUMENT_8", 1))
	{
		return 7;
	}
	if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_866, "ARGUMENT_9", 1))
	{
		return 8;
	}
	if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_866, "ARGUMENT_10", 1))
	{
		return 9;
	}
	if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_866, "ARGUMENT_11", 1))
	{
		return 10;
	}
	if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_866, "WRITING_IDLE", 1))
	{
		return 11;
	}
	return -1;
}

void func_656(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			func_1276(&(uParam0->f_206), "1-ILO_Interrupt");
			__LIB_13__::func_17(&(uParam0->f_206), "4-ILO_Interrupt", 0);
			break;
		case 3:
			func_1276(&(uParam0->f_206), "2-ILO_Interrupt");
			__LIB_13__::func_17(&(uParam0->f_206), "5-ILO_Interrupt", 0);
			break;
		case 5:
			func_1276(&(uParam0->f_206), "3-ILO_Interrupt");
			__LIB_13__::func_17(&(uParam0->f_206), "6-ILO_Interrupt", 0);
			break;
		case 6:
			func_1276(&(uParam0->f_206), "4-ILO_Interrupt");
			__LIB_13__::func_17(&(uParam0->f_206), "7-ILO_Interrupt", 0);
			break;
		case 8:
			func_1276(&(uParam0->f_206), "5-ILO_Interrupt");
			break;
		case 10:
			func_1276(&(uParam0->f_206), "6-ILO_Interrupt");
			break;
	}
}

int func_660(int iParam0, int iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
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
						return func_660(iParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bParam12);
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
					else if (!func_1296(iParam1))
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

int func_661(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			return 0;
		case 10:
		case 11:
			return 2;
		default:
			return 1;
	}
	return -1;
}

char* func_663(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "1-ILO_Interrupt";
		case 1:
		case 2:
			return "2-ILO_Interrupt";
		case 4:
			return "3-ILO_Interrupt";
		case 3:
		case 5:
			return "4-ILO_Interrupt";
		case 6:
		case 7:
			return "5-ILO_Interrupt";
		case 8:
		case 9:
			return "6-ILO_Interrupt";
		case 10:
		case 11:
			return "7-ILO_Interrupt";
	}
	return "1-ILO_Interrupt";
}

bool func_667(var uParam0, vector3 vParam1, float fParam4, vector3 vParam5, float fParam8, vector3 vParam9, float fParam12, vector3 vParam13, float fParam16, bool bParam17)
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_298))
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_298, vParam9, fParam12, true, false, true);
		ENTITY::_0x9587913B9E772D29(iLocal_298, 0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_298))
	{
		if (ENTITY::IS_ENTITY_DEAD(iLocal_591) || !ENTITY::DOES_ENTITY_EXIST(iLocal_591))
		{
			iLocal_591 = func_355(&iLocal_699, 7, 1, 1, 0, 0, 1, 1, 1, vParam13.x, vParam13.y, vParam13.z, fParam16, 0, 0, 0, 1, 0);
			if (iLocal_699 == 2)
			{
				ENTITY::_0x9587913B9E772D29(iLocal_591, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_591, true);
				TASK::TASK_STAND_STILL(iLocal_591, -1);
				FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_591, 48, true);
				FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_591, 46, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_591, 284, true);
				PED::_0x2EB75FB86C41F026(iLocal_591, 3, 0);
			}
			else
			{
				return false;
			}
		}
	}
	if (!func_642(uParam0, vParam5, fParam8, 1))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iLocal_592))
	{
		return false;
	}
	else
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_592, true);
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_592, 48, true);
	}
	if (bParam17)
	{
		PED::_SET_PED_ON_MOUNT(Global_35, iLocal_592, -1, true);
		PED::_SET_PED_ON_MOUNT(iLocal_298, iLocal_591, -1, true);
	}
	else
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, vParam1, fParam4, true, false, true);
		ENTITY::_0x9587913B9E772D29(Global_35, 0);
	}
	return true;
}

bool func_668(var uParam0, vector3 vParam1, float fParam4, vector3 vParam5, float fParam8, bool bParam9, bool bParam10, bool bParam11)
{
	if (bParam11)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_298))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_298, vParam5, fParam8, true, false, true);
			ENTITY::_0x9587913B9E772D29(iLocal_298, 0);
		}
		if (ENTITY::IS_ENTITY_DEAD(iLocal_591))
		{
			iLocal_591 = func_355(&iLocal_699, 7, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0);
			if (iLocal_699 == 2)
			{
				if (bParam10)
				{
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_591, vParam5, fParam8, true, false, true);
					ENTITY::_0x9587913B9E772D29(iLocal_591, 0);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_591, true);
				TASK::TASK_STAND_STILL(iLocal_591, -1);
				FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_591, 48, true);
				__LIB_0__::func_170(iLocal_591, 1);
			}
			else
			{
				return false;
			}
		}
	}
	if (bParam10)
	{
		if (func_642(uParam0, vParam1, fParam4, 1))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_592, true);
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_592, 48, true);
		}
		else
		{
			return false;
		}
	}
	if (bParam9)
	{
		PED::_SET_PED_ON_MOUNT(Global_35, iLocal_592, -1, true);
		if (bParam11)
		{
			PED::_SET_PED_ON_MOUNT(iLocal_298, iLocal_591, -1, true);
		}
	}
	else
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, vParam1, fParam4, true, false, true);
		ENTITY::_0x9587913B9E772D29(Global_35, 0);
	}
	if (bParam10)
	{
		if (bParam11)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_591))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_591, vParam5, fParam8, true, false, true);
				ENTITY::_0x9587913B9E772D29(iLocal_591, 0);
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_592))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_592, vParam1, fParam4, true, false, true);
			ENTITY::_0x9587913B9E772D29(iLocal_592, 0);
		}
	}
	return true;
}

void func_669(int iParam0)
{
	if (iParam0 > 31)
	{
		MISC::SET_BIT(&iLocal_77, (iParam0 - 32));
	}
	else
	{
		MISC::SET_BIT(&iLocal_76, iParam0);
	}
}

void func_670(int iParam0)
{
	MISC::SET_BIT(&iLocal_209, iParam0);
}

void func_671(int iParam0)
{
	iLocal_114 = iParam0;
}

void func_672(int iParam0)
{
	iLocal_848 = iParam0;
}

int func_674()
{
	return iLocal_307;
}

void func_678(int iParam0)
{
	iLocal_883 = iParam0;
}

void func_679(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= iParam0)
	{
		func_669(iVar0);
		iVar0++;
	}
}

void func_680(int iParam0)
{
	MISC::SET_BIT(&iLocal_207, iParam0);
}

void func_681(int iParam0)
{
	MISC::SET_BIT(&iLocal_208, iParam0);
}

void func_706(var uParam0)
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
			func_1337(&(uParam0->f_416));
		}
		func_1338(&(uParam0->f_404), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_12__::func_706(uParam0, 0f, 0f, 0f);
		func_1340(uParam0);
		func_1341(uParam0);
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

void func_713(var uParam0)
{
	if (!__LIB_0__::func_84(uParam0, 536870912))
	{
		__LIB_0__::func_106(uParam0, 1);
		func_714(&(uParam0->f_405), uParam0->f_416);
		__LIB_1__::func_436();
		__LIB_0__::func_88(uParam0, 536870912);
	}
	if (__LIB_0__::func_84(uParam0, 524288))
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	__LIB_12__::func_854(uParam0);
	__LIB_8__::func_898(uParam0, 1);
	__LIB_12__::func_841(uParam0);
	__LIB_12__::func_707(uParam0);
	__LIB_0__::func_108(uParam0);
	__LIB_12__::func_758(uParam0, 4);
	__LIB_12__::func_846(uParam0);
	__LIB_0__::func_99(uParam0, 1);
	__LIB_12__::func_679(uParam0);
	__LIB_2__::func_608(&(uParam0->f_1));
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_348) && ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_348))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_348);
	}
	__LIB_4__::func_716(!__LIB_0__::func_1(uParam0->f_405, 128));
	if (!__LIB_0__::func_1(uParam0->f_405, 128))
	{
		__LIB_1__::func_625();
	}
}

void func_714(var uParam0, int iParam1)
{
	if (Global_1935630.f_12)
	{
		return;
	}
	__LIB_0__::func_732(2000);
	Global_16 = 0;
	__LIB_0__::func_109();
	ENTITY::SET_ENTITY_INVINCIBLE(Global_35, __LIB_0__::func_1(*uParam0, 8));
	if (!__LIB_0__::func_1(*uParam0, 1))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
	}
	PAD::_0xA0CEFCEA390AAB9B(0);
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
	if (__LIB_0__::func_1(*uParam0, 2) || __LIB_0__::func_1(*uParam0, 4))
	{
		HUD::_HIDE_HUD_COMPONENT(-1679307491);
	}
	else
	{
		HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
	}
	if (!__LIB_0__::func_1(*uParam0, 16))
	{
		__LIB_0__::func_733(1);
	}
	if (__LIB_0__::func_1(*uParam0, 32))
	{
		func_945(Global_35, joaat("CLOTHING_ITEM_NECKWEAR_NONE"), 0, 1742327865, 0, 1, 0, 0, 1, 0);
		func_1354(joaat("KIT_BANDANA"), 0);
	}
	__LIB_1__::func_550(&(Global_1946804.f_1497), Global_35, 1, 49217, 1, 1, 1);
	if (Global_1359489.f_16 & 4194304 != 0)
	{
		Global_1359489.f_16 = (Global_1359489.f_16 - Global_1359489.f_16 & 4194304);
	}
	*uParam0 = 0;
}

void func_753(int iParam0)
{
	iLocal_307 = iParam0;
}

bool func_755()
{
	if (((((((func_1402(0, joaat("P_DEBRISBOARD10X"), 896.896f, -402.18f, 85.5037f, -180f, -85.68f, -170.28f, 1) && func_1402(1, joaat("P_DEBRISBOARD10X"), 895.74f, -401.85f, 85.48f, -178.56f, 79.91f, -97.92f, 1)) && func_1402(2, joaat("P_CHAIR_CRATE02X"), 896.46f, -402.24f, 84.75f, 1.9f, -0.49f, -174.82f, 1)) && func_1402(3, joaat("P_WHISKEYCRATE02X"), 895.94f, -402.2f, 85.21f, -1.58f, -0.38f, -10.01f, 1)) && func_1402(4, joaat("S_CRATESEAT03X"), 896.59f, -402.18f, 85.2f, -0.68f, -0.25f, 0.49f, 1)) && func_1402(5, joaat("P_CRATE22X_SMALL"), 896.45f, -402.3f, 85.65f, 2.43f, 1.86f, 99.94f, 1)) && func_1402(6, joaat("S_CRATESEAT03X"), 895.83f, -402.35f, 84.76f, -2.74f, -0.15f, -13.31f, 1)) && func_1402(7, joaat("WAGON02X"), 895.87f, -403.48f, 85.78f, -1.005f, -2.3837f, -96.0741f, 0))
	{
		return true;
	}
	return false;
}

void func_763(vector3 vParam0, float fParam3, bool bParam4, bool bParam5)
{
	iLocal_297 = __LIB_8__::func_931(joaat("CS_GERMANFATHER"), vParam0, fParam3, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0);
	PED::_SET_PED_COMPONENT_DISABLED(iLocal_297, -1111089804, 1);
	if (bParam4)
	{
		PED::_SET_PED_BODY_COMPONENT(iLocal_297, -1398409131);
	}
	AUDIO::STOP_PED_SPEAKING(iLocal_297, true);
	PED::SET_PED_CAN_BE_TARGETTED(iLocal_297, true);
	__LIB_2__::func_56(iLocal_297, 0, 1);
	__LIB_7__::func_904(&iLocal_297, 1);
	PED::SET_PED_CONFIG_FLAG(iLocal_297, 315, true);
	PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), iLocal_297, 19, 0, 1);
	PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), iLocal_297, 20, 0, 1);
	PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), iLocal_297, 7, 0, 1);
	PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), iLocal_297, 3, 0, 1);
	PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), iLocal_297, 4, 0, 1);
	PED::_0xAE6004120C18DF97(iLocal_297, 0, 0);
	PED::_0x6569F31A01B4C097(iLocal_297, 4, 0);
	PED::_0x6569F31A01B4C097(iLocal_297, 0, 0);
	PED::_0x6569F31A01B4C097(iLocal_297, 1, 0);
	ENTITY::_SET_ENTITY_HEALTH(iLocal_297, 50, 0);
	PED::_0x89F5E7ADECCCB49C(iLocal_297, "injured_general");
	PED::SET_PED_CONFIG_FLAG(iLocal_297, 313, true);
	ENTITY::SET_ENTITY_PROOFS(iLocal_297, 8, false);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_297, joaat("REL_PLAYER_ALLY"));
	if (bParam4)
	{
		__LIB_1__::func_338(iLocal_297, vParam0);
		TASK::TASK_CARRIABLE(iLocal_297, ENTITY::_GET_OPTIMAL_CARRY_CONFIG(iLocal_297, 1), 0, 0, 0);
		if (!bParam5)
		{
			ENTITY::_0x18FF3110CF47115D(iLocal_297, 1, 0);
		}
		ENTITY::_0x18FF3110CF47115D(iLocal_297, 2, 0);
		PED::SET_PED_CONFIG_FLAG(iLocal_297, 66, true);
		iLocal_587 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLBOX"), vLocal_338, 0f, 0f, 149f, 1f, 2.3f, 1.2f);
		PED::SET_RAGDOLL_BLOCKING_FLAGS(iLocal_297, 48);
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_297, true);
	__LIB_2__::func_930(iLocal_297, 0);
}

void func_765()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iLocal_687)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_687[iVar0]))
		{
			ENTITY::DELETE_ENTITY(&(iLocal_687[iVar0]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_306))
		{
			VEHICLE::DELETE_VEHICLE(&iLocal_306);
		}
		iVar0++;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_BARREL06X"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_DEBRISBOARD10X"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_CHAIR_CRATE02X"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_WHISKEYCRATE02X"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_CRATESEAT03X"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_CRATE22X_SMALL"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_CHAIR_CRATE02X"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("WAGON02X"));
	GRAPHICS::_0x9CF1836C03FB67A2(&uLocal_696, 1);
	__LIB_0__::func_400(-313259746);
}

void func_766(var uParam0)
{
	if (!MISC::IS_BIT_SET(iLocal_882, 0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_297))
		{
			__LIB_12__::func_875(uParam0, iLocal_297, "DCH1_SETTLER", 0);
			MISC::SET_BIT(&iLocal_882, 0);
		}
	}
}

bool func_776(var uParam0, char* sParam1, int iParam2, float fParam3, int iParam4)
{
	int iVar0;
	if (!__LIB_2__::func_618(iParam2))
	{
		__LIB_8__::func_901(iParam2, 1);
	}
	else
	{
		iVar0 = BUILTIN::FLOOR((__LIB_5__::func_51(iParam2) / 100f));
		if (iVar0 < iParam4)
		{
			if ((__LIB_5__::func_51(iParam2) % 100f) > fParam3)
			{
				if (!__LIB_6__::func_904())
				{
					if (__LIB_12__::func_876(uParam0, sParam1, 0))
					{
						__LIB_2__::func_620(iParam2, (IntToFloat(iVar0 + 1) * 100f));
						return true;
					}
				}
			}
		}
	}
	return false;
}

void func_777(bool bParam0)
{
	int iVar0;
	if (bParam0)
	{
		UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
		__LIB_0__::func_769();
	}
	__LIB_0__::func_745(7);
	__LIB_1__::func_721(7);
	__LIB_1__::func_724(16);
	iVar0 = 0;
	while (iVar0 < iLocal_78)
	{
		if (MAP::DOES_BLIP_EXIST(iLocal_78[iVar0]))
		{
			MAP::REMOVE_BLIP(&(iLocal_78[iVar0]));
		}
		iVar0++;
	}
}

void func_778()
{
	iLocal_95 = 0;
	iLocal_119 = 0;
}

void func_781(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (bParam3)
	{
		iLocal_97[iParam1] = 1;
	}
	if (!iLocal_97[iParam1])
	{
		__LIB_12__::func_883(uParam0, sParam2, 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
		__LIB_13__::func_89(uParam0, sParam2, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
	}
	else
	{
		__LIB_13__::func_89(uParam0, sParam2, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
	}
	iLocal_97[iParam1] = 1;
}

void func_786(var uParam0, int iParam1)
{
	if (!__LIB_0__::func_270())
	{
		switch (iParam1)
		{
			case 1:
				Local_116.f_1 = "RDTC1F_HRS";
				Local_116 = "DUTCH11_REH";
				iLocal_119 = func_1417(uParam0, &Local_116, 0f, 0f, 0f, iLocal_592, 0, 1109393408 /* Float: 40f */, 1117126656 /* Float: 75f */, 1125515264 /* Float: 150f */);
				break;
			case 2:
				Local_116.f_1 = "DUTCH11_FA01";
				Local_116 = "DUTCH11_RE";
				iLocal_119 = func_1417(uParam0, &Local_116, 0f, 0f, 0f, iLocal_298, 0, 30f, 90f, 150f);
				break;
			case 3:
				Local_116.f_1 = "DUTCH11_FCR";
				Local_116 = "DUTCH11_RECR";
				iLocal_119 = func_1417(uParam0, &Local_116, VOLUME::_GET_VOLUME_COORDS(Local_14.f_18), 0, 0, 180f, 230f, 300f);
				break;
			case 4:
				Local_116.f_1 = "DUTCH11_FA01";
				Local_116 = "DUTCH11_REBO";
				iLocal_119 = func_1417(uParam0, &Local_116, 0f, 0f, 0f, iLocal_312, 0, 1109393408 /* Float: 40f */, 1117126656 /* Float: 75f */, 1125515264 /* Float: 150f */);
				break;
			case 5:
				Local_116.f_1 = "RDTC1F_ABDCMP";
				Local_116 = "DUTCH11_RET_OBJ";
				iLocal_119 = func_1417(uParam0, &Local_116, 888.3989f, -395.9394f, 84.992f, 0, 0, 1109393408 /* Float: 40f */, 1117126656 /* Float: 75f */, 1125515264 /* Float: 150f */);
				break;
			case 6:
				Local_116.f_1 = "RDTC1F_ABDCMP";
				Local_116 = "DUTCH11_RET_OBJ";
				iLocal_119 = func_1417(uParam0, &Local_116, VOLUME::_GET_VOLUME_COORDS(Local_14.f_14), 0, 0, 1109393408 /* Float: 40f */, 1117126656 /* Float: 75f */, 1125515264 /* Float: 150f */);
				break;
			case 7:
				Local_116.f_1 = "RDTC1F_ABDSET";
				Local_116 = "DUTCH11_RE_HOSTAGE";
				iLocal_119 = func_1417(uParam0, &Local_116, 0f, 0f, 0f, iLocal_297, 0, 1109393408 /* Float: 40f */, 1117126656 /* Float: 75f */, 1125515264 /* Float: 150f */);
				break;
			case 8:
				Local_116.f_1 = "RDTC1F_ABDSET";
				Local_116 = "DUTCH11_RESE";
				iLocal_119 = func_1417(uParam0, &Local_116, 0f, 0f, 0f, iLocal_297, 0, 1109393408 /* Float: 40f */, 1117126656 /* Float: 75f */, 1125515264 /* Float: 150f */);
				break;
		}
		if (iLocal_119 == 1)
		{
			func_1418(iParam1);
		}
	}
	if (iLocal_119 == 0 && iLocal_95 != 0)
	{
		iLocal_95 = 0;
		iLocal_96 = 0;
		iLocal_114 = iLocal_115;
		iLocal_115 = 1;
	}
	if (iLocal_95 != iLocal_96)
	{
		iLocal_95 = iLocal_96;
		func_777(0);
		switch (iLocal_95)
		{
			case 1:
				__LIB_1__::func_718(7);
				__LIB_0__::func_635(16);
				break;
			case 2:
				__LIB_0__::func_900(7);
				break;
			case 3:
				iLocal_78[9] = __LIB_5__::func_554(408396114, Local_14.f_18, 1);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_78[9], "DUTCH11_BLIP_DEWBERRY");
				break;
			case 4:
				iLocal_78[10] = __LIB_4__::func_983(408396114, ENTITY::GET_ENTITY_COORDS(iLocal_312, false, false), 1);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_78[10], "DUTCH11_BLIP_BODY");
				break;
			case 5:
				iLocal_78[11] = __LIB_4__::func_983(408396114, 888.3989f, -395.9394f, 84.992f, 1);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_78[11], "DUTCH11_BLIP_CAMP");
				break;
			case 6:
				iLocal_78[12] = __LIB_4__::func_983(408396114, VOLUME::_GET_VOLUME_COORDS(Local_14.f_14), 1);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_78[12], "DUTCH11_BLIP_CAMP");
				break;
			case 7:
				iLocal_78[13] = __LIB_8__::func_778(408396114, iLocal_297, 1);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_78[12], "DUTCH11_BLIP_HOSTAGE");
				break;
			case 8:
				iLocal_78[14] = __LIB_8__::func_778(408396114, iLocal_297, 1);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_78[14], "DUTCH11_BLIP_FATHER");
				break;
		}
	}
}

bool func_788(int iParam0)
{
	if (MISC::IS_BIT_SET(iLocal_209, iParam0))
	{
		return true;
	}
	return false;
}

void func_800(int iParam0)
{
	iLocal_131 = iParam0;
}

int func_814(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, float fParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)
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
				func_1212(Global_1360165[iParam0 /*1157*/].f_124, vVar0, fParam6, 2, 1073741824 /* Float: 2f */);
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

void func_817(var uParam0)
{
	PED::SET_PED_CONFIG_FLAG(iLocal_299, 253, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_300, 253, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_301, 253, true);
	if (__LIB_14__::func_12(uParam0, iLocal_298, 0, 0, 1, 1))
	{
		TASK::TASK_CLEAR_LOOK_AT(iLocal_298);
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_591))
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_229);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 907.755f, -404.5164f, 85.2053f, 1f, 20000, 0.25f, 0, 40000f);
			TASK::TASK_MOUNT_ANIMAL(0, iLocal_591, 20000, -1, 1f, 1, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_229);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_298, iLocal_229);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_229);
		}
		PED::FORCE_PED_MOTION_STATE(iLocal_298, joaat("MOTIONSTATE_WALK"), false, 0, false);
	}
	if (__LIB_14__::func_12(uParam0, Global_35, 0, 0, 1, 1))
	{
		__LIB_0__::func_569(joaat("MOTIONSTATE_WALK"), 2000, 0, 1, 1, 0, 0, 0);
	}
}

void func_820(var uParam0)
{
	if (!bLocal_845)
	{
		if (ENTITY::DOES_ENTITY_EXIST(PED::_GET_LAST_MOUNT(Global_35)))
		{
			if (ENTITY::IS_ENTITY_IN_VOLUME(PED::_GET_LAST_MOUNT(Global_35), Local_14.f_55, true, 0))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(PED::_GET_LAST_MOUNT(Global_35), 930.1741f, -431.2005f, 87.065f, 335.7078f, true, false, true);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_LAST_DRIVEN_VEHICLE()))
		{
			if (ENTITY::IS_ENTITY_IN_VOLUME(VEHICLE::GET_LAST_DRIVEN_VEHICLE(), Local_14.f_55, true, 0))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(VEHICLE::GET_LAST_DRIVEN_VEHICLE(), 926.71f, -435.18f, 88.64f, 275.6525f, true, false, true);
			}
		}
		bLocal_845 = true;
	}
	if (ANIMSCENE::_0x8D81E7824B7753F7(uParam0->f_348, "RDTC1_RSC4_P1_T04_Shot_3_3745-3909", 1))
	{
		CLOCK::SET_CLOCK_TIME(6, 0, 0);
	}
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 179, true);
		PED::_REMOVE_PED_FROM_MOUNT(Global_35, true, false);
	}
}

void func_823(var uParam0)
{
	HUD::_0xC9CAEAEEC1256E54(724769646);
	CAM::_0xE296208C273BD7F0(0, 0, 0, 17, 1, 0);
	if (!bLocal_846)
	{
		GRAPHICS::_0x5199405EABFBD7F0("ChapterTitle_IntroCh03");
		bLocal_846 = true;
	}
	if (PED::IS_PED_ON_MOUNT(Global_35) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
	}
	if (__LIB_14__::func_12(uParam0, iLocal_703, "BillWilliamson", 0, 1, 1))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_703, true, true);
		__LIB_11__::func_616(3, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
	}
	if (__LIB_14__::func_12(uParam0, iLocal_298, "CharlesSmith", 0, 1, 1))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_298, true, true);
		__LIB_11__::func_616(7, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
	}
	if (__LIB_14__::func_12(uParam0, iLocal_704, "JavierEscuella", 0, 1, 1))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_704, true, true);
		__LIB_11__::func_616(2, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
	}
	if (__LIB_14__::func_12(uParam0, iLocal_705, "Kieran", 0, 1, 1))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_705, true, true);
		__LIB_11__::func_616(10, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
	}
	if (__LIB_14__::func_12(uParam0, iLocal_706, "LeoStrauss", 0, 1, 1))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_706, true, true);
		__LIB_11__::func_616(18, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
	}
	if (__LIB_14__::func_12(uParam0, iLocal_707, "MrPearson", 0, 1, 1))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_707, true, true);
		__LIB_11__::func_616(17, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
	}
	if (__LIB_14__::func_12(uParam0, iLocal_708, "RevSwanson", 0, 1, 1))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_708, true, true);
		__LIB_11__::func_616(21, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
	}
	if (__LIB_14__::func_12(uParam0, iLocal_709, "SusanGrimshaw", 0, 1, 1))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_709, true, true);
		__LIB_11__::func_616(19, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
	}
	if (__LIB_14__::func_12(uParam0, iLocal_710, "uncle", 0, 1, 1))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_710, true, true);
		__LIB_11__::func_616(4, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
	}
	if (__LIB_14__::func_12(uParam0, iLocal_588, "Dutch", 0, 1, 1))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_588, true, true);
		__LIB_11__::func_616(0, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
	}
	if (__LIB_13__::func_521(uParam0, iLocal_712, "wagon04x", 0, 1, 1))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_712);
	}
	if (__LIB_13__::func_521(uParam0, iLocal_713, "wagon04x^1", 0, 1, 1))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_713);
	}
	if (__LIB_13__::func_521(uParam0, iLocal_714, "wagon04x^2", 0, 1, 1))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_714);
	}
	if (__LIB_12__::func_690(uParam0))
	{
		if (Global_40.f_4283 != 2)
		{
			__LIB_12__::func_86(2);
			__LIB_11__::func_381(1);
			__LIB_4__::func_253(joaat("CSTAG_FLOW_FIRST_VISIT_RDTC1_POST"), joaat("CSTP_NEXT_VISIT"), -469960592, 8, 1, 1, 0);
		}
		__LIB_9__::func_832(16, 0, 0);
		__LIB_4__::func_845(1, 0);
		__LIB_13__::func_655(1, 7);
		__LIB_13__::func_656(1);
		__LIB_9__::func_469(100f);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("VISIBLETOSCRIPT")) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 508284207))
	{
		if (GRAPHICS::_0xBF2DD155B2ADCD0A("ChapterTitle_IntroCh03"))
		{
		}
		MISC::SET_BIT(&(Global_1956580.f_1), 5);
		GRAPHICS::ANIMPOSTFX_PLAY("ChapterTitle_IntroCh03");
		GRAPHICS::_0xB958D97A0DFAA0C2("ChapterTitle_IntroCh03");
		AUDIO::_0x6339C1EA3979B5F7("Chapter_03", "Chapter_Screen_Scenes");
	}
}

void func_824()
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_715))
	{
		iLocal_715 = ANIMSCENE::_CREATE_ANIM_SCENE("script@titles@title_ch3_clemens", 0, "PBL_1", false, true);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_715, "Arthur", Global_35, 0);
		ANIMSCENE::LOAD_ANIM_SCENE(iLocal_715);
	}
	GRAPHICS::_0x5199405EABFBD7F0("Title_Ch03_ClemensPoint");
	__LIB_4__::func_248(__LIB_6__::func_70(2), __LIB_5__::func_930(2));
	__LIB_2__::func_30(60f);
}

char* func_826()
{
	float fVar0;
	switch (iLocal_907)
	{
		case 0:
			return "pl_idle_01";
		case 1:
			return "pl_idle_02";
		case 2:
			fVar0 = __LIB_3__::func_978(iLocal_298, Global_35, 1);
			if (fVar0 > 213f && fVar0 < 315f)
			{
				return "pl_callover_left";
			}
			else if (fVar0 >= 315f)
			{
				return "pl_callover_backleft";
			}
			else if (fVar0 < 44f)
			{
				return "pl_callover_backright";
			}
			else if (fVar0 >= 44f && fVar0 < 80f)
			{
				return "pl_callover_01";
			}
			break;
		case 3:
			return "pl_idle_03";
		case 4:
			fVar0 = __LIB_3__::func_978(iLocal_298, Global_35, 1);
			if (fVar0 >= 30f && fVar0 < 80f)
			{
				if (__LIB_0__::func_665(iLocal_298, Global_35, 1, 1) < 6f)
				{
					return "pl_dlg_Arthur_quiet";
				}
				else
				{
					return "pl_dlg_Arthur_loud";
				}
			}
			break;
		case 5:
			return "pl_idle_04";
	}
	return "pl_idle_base";
}

bool func_828()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	if (!bLocal_734)
	{
		__LIB_6__::func_916(&iLocal_754);
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false);
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar1, true, 1, false);
		if (iVar0 != joaat("WEAPON_UNARMED") || iVar1 != joaat("WEAPON_UNARMED"))
		{
			bVar2 = true;
		}
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 1, false, false);
		iVar4 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
		if (iVar4 != 0)
		{
			bVar3 = true;
		}
		TASK::OPEN_SEQUENCE_TASK(&iLocal_229);
		if (bVar3)
		{
			vLocal_735[0 /*3*/] = { 894.4f, -400.66f, 84.71f };
			vLocal_735[1 /*3*/] = { 897.83f, -401.62f, 84.73f };
			if (ENTITY::DOES_ENTITY_EXIST(iVar4))
			{
				TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(0, iVar4, vLocal_735[func_1462(&vLocal_735, Global_35, -1082130432 /* Float: -1f */, 0) /*3*/], 2f, 0);
			}
		}
		if (bVar2)
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
			WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
			TASK::TASK_SWAP_WEAPON(0, 0, 0, 0, 0);
		}
		if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_215))
		{
		}
		TASK::TASK_ENTER_ANIM_SCENE(0, iLocal_215, "Arthur", "pl_Arthur_First_LEADIN", 1069379748 /* Float: 1.48f */, 0, 0, 20000, -1082130432 /* Float: -1f */);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_229);
		TASK::TASK_PERFORM_SEQUENCE(Global_35, iLocal_229);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_229);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
		bLocal_734 = true;
	}
	else if (ANIMSCENE::_0x337F1CC8EE895601(iLocal_215, "Arthur"))
	{
		return true;
	}
	return false;
}

bool func_829()
{
	if (__LIB_0__::func_272(Global_35, 0))
	{
		switch (iLocal_130)
		{
			case 0:
				__LIB_13__::func_528(1);
				break;
			case 1:
				if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_215, true, false))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_215, "pl_Arthur_First_LEADIN");
					__LIB_13__::func_528(3);
				}
				break;
			case 2:
				if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_215, "pl_Arthur_First_LEADIN") && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_215, "pl_Charles_First_LEADIN"))
				{
					__LIB_13__::func_528(3);
				}
				break;
			case 3:
				iLocal_754 = __LIB_3__::func_905("DCH1_SRCH", joaat("INPUT_CONTEXT_Y"), Local_14.f_42, 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
				__LIB_1__::func_221(iLocal_754, 1, 1);
				__LIB_1__::func_382(iLocal_754, 1, 1);
				__LIB_13__::func_528(4);
				break;
			case 4:
				if (__LIB_1__::func_732(iLocal_754, 1))
				{
					__LIB_13__::func_528(5);
				}
				break;
			case 5:
				if (func_828())
				{
					__LIB_13__::func_526(18);
					__LIB_13__::func_528(6);
				}
				break;
			case 6:
				break;
			case 7:
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_215))
				{
					if (ANIMSCENE::_0x1F0E401031E20146(iLocal_215, "pl_Arthur_First_LEADIN") && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_215) > 0.9f)
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
						__LIB_13__::func_528(8);
						return true;
					}
				}
				break;
			case 8:
				return true;
		}
	}
	return false;
}

int func_831()
{
	return iLocal_883;
}

void func_832(var uParam0)
{
	int iVar0;
	vector3 vVar1[24];
	if (!PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()))
	{
		if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_298, 0))
		{
			if (!TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(iLocal_298))
			{
				TASK::WAYPOINT_PLAYBACK_PAUSE(iLocal_298, 1, 1, 0);
				if (AUDIO::_0x1ECC76792F661CF5("DCH1_BANT2A"))
				{
					func_1467(1, "DCH1_BANT2A", 1, 0, 0, 1);
				}
				if (AUDIO::_0x1ECC76792F661CF5("DCH1_BANT2B"))
				{
					func_1467(1, "DCH1_BANT2B", 1, 0, 0, 1);
				}
				if (AUDIO::_0x1ECC76792F661CF5("DCH1_BANT2C"))
				{
					func_1467(1, "DCH1_BANT2C", 0, 1, 0, 1);
				}
			}
		}
	}
	else if (PED::GET_MOUNT(Global_35) == __LIB_0__::func_398(7))
	{
		if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_298, 0))
		{
			if (TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(iLocal_298))
			{
				TASK::WAYPOINT_PLAYBACK_RESUME(iLocal_298, true, -1, 0);
			}
		}
	}
	if (PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::GET_MOUNT(Global_35) == __LIB_0__::func_398(7))
		{
			if (iLocal_132 == 2)
			{
				iLocal_132 = 6;
			}
		}
	}
	else if (iLocal_132 != 0 && iLocal_132 != 3)
	{
		iLocal_132 = 2;
	}
	if (((iLocal_132 != 3 && iLocal_132 != 1) && iLocal_132 != 0) && iLocal_132 != 2)
	{
		iVar0 = 0;
		while (iVar0 < Local_166)
		{
			if (!Local_166[iVar0 /*10*/].f_3)
			{
				if (ENTITY::IS_ENTITY_IN_VOLUME(iLocal_298, Local_166[iVar0 /*10*/].f_1, true, 0) && iLocal_132 != 4)
				{
					iLocal_132 = 4;
					iLocal_847 = iVar0;
					if (AUDIO::_0x1ECC76792F661CF5("DCH1_BANT2A"))
					{
						StringCopy(&cVar1, "DCH1_BANT2A", 24);
					}
					else if (AUDIO::_0x1ECC76792F661CF5("DCH1_BANT2B"))
					{
						StringCopy(&cVar1, "DCH1_BANT2B", 24);
					}
					else if (AUDIO::_0x1ECC76792F661CF5("DCH1_BANT2C"))
					{
						StringCopy(&cVar1, "DCH1_BANT2C", 24);
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
					{
						if (AUDIO::_0xD89504D9D7D5057D(&cVar1))
						{
							if (AUDIO::_0xD0730C1FA40348D9(&cVar1))
							{
								func_1467(1, &cVar1, 0, 1, 0, 1);
							}
							else if (((MISC::ARE_STRINGS_EQUAL(&cVar1, "DCH1_BANT2C") && AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE(&cVar1) == 9) && AUDIO::_0x935DBD96D4A3DA1F(&cVar1, AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE(&cVar1)) < 3000) || (((MISC::ARE_STRINGS_EQUAL(&cVar1, "DCH1_BANT2A") || MISC::ARE_STRINGS_EQUAL(&cVar1, "DCH1_BANT2B")) && AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE(&cVar1) == 6) && AUDIO::_0x935DBD96D4A3DA1F(&cVar1, AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE(&cVar1)) < 3000))
							{
							}
							else if (AUDIO::_0x935DBD96D4A3DA1F(&cVar1, AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE(&cVar1)) > 3500)
							{
								func_1467(1, &cVar1, 0, 1, 1, 1);
							}
							else
							{
								func_1467(1, &cVar1, 1, 0, 0, 1);
							}
						}
					}
				}
				if (AUDIO::IS_ANY_SPEECH_PLAYING(Global_35) || AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_298))
				{
				}
				if (!Local_166[iVar0 /*10*/].f_4)
				{
					if (((((((AUDIO::_0xD89504D9D7D5057D("DCH1_BANT2A") && AUDIO::_0xF01C570E0A0A1E67("DCH1_BANT2A")) && !AUDIO::_0x1ECC76792F661CF5("DCH1_BANT2A")) && !AUDIO::_0xD0730C1FA40348D9("DCH1_BANT2A")) || (((AUDIO::_0xD89504D9D7D5057D("DCH1_BANT2B") && AUDIO::_0xF01C570E0A0A1E67("DCH1_BANT2B")) && !AUDIO::_0x1ECC76792F661CF5("DCH1_BANT2B")) && !AUDIO::_0xD0730C1FA40348D9("DCH1_BANT2B"))) || (((AUDIO::_0xD89504D9D7D5057D("DCH1_BANT2C") && AUDIO::_0xF01C570E0A0A1E67("DCH1_BANT2C")) && !AUDIO::_0x1ECC76792F661CF5("DCH1_BANT2C")) && !AUDIO::_0xD0730C1FA40348D9("DCH1_BANT2C"))) || (((!AUDIO::_0xD89504D9D7D5057D("DCH1_BANT2A") && !AUDIO::_0xD89504D9D7D5057D("DCH1_BANT2B")) && !AUDIO::_0xD89504D9D7D5057D("DCH1_BANT2C")) && !__LIB_5__::func_463())) && (!AUDIO::IS_ANY_SPEECH_PLAYING(Global_35) && !AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_298)))
					{
						if (iVar0 == 0)
						{
							Local_166[iVar0 /*10*/].f_4 = 1;
							iLocal_132 = 1;
						}
						else if (ENTITY::IS_ENTITY_IN_VOLUME(iLocal_298, Local_166[iVar0 /*10*/].f_1, true, 0))
						{
							if (__LIB_12__::func_876(uParam0, "DCH1_FIND", 0))
							{
								Local_166[iVar0 /*10*/].f_4 = 1;
								iLocal_132 = 1;
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	switch (iLocal_132)
	{
		case 0:
			if (PED::IS_PED_ON_MOUNT(Global_35) && PED::IS_PED_ON_MOUNT(iLocal_298))
			{
				iLocal_132 = 6;
			}
			break;
		case 4:
			TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_591, 1.501f, 0, -1082130432 /* Float: -1f */, 0);
			break;
		case 1:
			if (ENTITY::IS_ENTITY_IN_VOLUME(iLocal_298, Local_166[iLocal_847 /*10*/], true, 0))
			{
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_591, 0))
				{
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_591, 1.001f, 0, -1082130432 /* Float: -1f */, 0);
				}
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_298, 0))
				{
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_298, 1.001f, 0, -1082130432 /* Float: -1f */, 0);
				}
				iLocal_132 = Local_166[iLocal_847 /*10*/].f_2;
			}
			break;
		case 2:
			break;
		case 3:
			if (iLocal_132 == 2)
			{
				__LIB_11__::func_713(iLocal_298, 0f, 0, 0.4f, 1, 1077936128 /* Float: 3f */, 1106247680 /* Float: 30f */, 1114636288 /* Float: 60f */, 1033476506 /* Float: 0.075f */, 1061158912 /* Float: 0.75f */, 1, 0, 1045220557 /* Float: 0.2f */, 0);
			}
			else
			{
				__LIB_11__::func_713(iLocal_298, 0.101f, 0, 0.4f, 1, 1077936128 /* Float: 3f */, 1106247680 /* Float: 30f */, 1114636288 /* Float: 60f */, 1033476506 /* Float: 0.075f */, 1061158912 /* Float: 0.75f */, 1, 0, 1045220557 /* Float: 0.2f */, 0);
			}
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_685) && ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iLocal_685, false))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_685);
				iLocal_685 = 0;
			}
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_686) && ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iLocal_686, false))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_686);
				iLocal_686 = 0;
			}
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_685))
			{
				iLocal_685 = ANIMSCENE::_CREATE_ANIM_SCENE(sLocal_676, 0, Local_166[iLocal_847 /*10*/].f_7, false, true);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_685, "Arthur", Global_35, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_685, "CharlesSmith", iLocal_298, 0);
				ANIMSCENE::LOAD_ANIM_SCENE(iLocal_685);
			}
			else if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_685, false))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_685, true, false))
				{
					ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(iLocal_685, iLocal_591, PED::GET_PED_BONE_INDEX(iLocal_591, 29245));
					ANIMSCENE::START_ANIM_SCENE(iLocal_685);
					__LIB_8__::func_901(&uLocal_136, 1);
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_591, "rcm_dutch1_clemens", 0, 1032, -1, 0, 1, -1);
					PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "EagleEye", true, -1);
				}
			}
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_591, 0))
			{
				if (iLocal_132 == 2)
				{
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_591, 0f, 0, -1082130432 /* Float: -1f */, 0);
				}
				else
				{
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_591, 1f, 0, -1082130432 /* Float: -1f */, 0);
				}
			}
			if (PLAYER::_0x45AB66D02B601FA7(PLAYER::PLAYER_ID()))
			{
				if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&(Local_351.f_120[iLocal_847 /*4*/])))
				{
					TASK::WAYPOINT_RECORDING_GET_COORD(&(Local_351.f_120[iLocal_847 /*4*/]), 0, &vLocal_345);
					TASK::WAYPOINT_RECORDING_GET_COORD(&(Local_351.f_120[iLocal_847 /*4*/]), 1, &vLocal_348);
					if (__LIB_0__::func_94(Global_35, vLocal_345, 1) < 17.5f)
					{
						if (CAM::IS_SPHERE_VISIBLE(vLocal_345, 1f) || CAM::IS_SPHERE_VISIBLE(vLocal_348, 1f))
						{
							if (!__LIB_2__::func_618(&uLocal_579))
							{
								__LIB_8__::func_901(&uLocal_579, 1);
							}
						}
						else if (__LIB_2__::func_618(&uLocal_579))
						{
							__LIB_2__::func_608(&uLocal_579);
						}
					}
				}
			}
			else if (__LIB_2__::func_618(&uLocal_579))
			{
				if (ENTITY::IS_ENTITY_IN_VOLUME(iLocal_298, Local_166[iLocal_847 /*10*/], true, 0))
				{
					if (__LIB_5__::func_51(&uLocal_579) > 0.5f)
					{
						if (!AUDIO::_0xA2CAC9DEF0195E6F(0))
						{
							if (__LIB_12__::func_876(uParam0, Local_166[iLocal_847 /*10*/].f_9, 0))
							{
								if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_685) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_685, false))
								{
									ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_685, "Break_to_Found", true, false);
								}
								ANIMSCENE::ABORT_ANIM_SCENE(iLocal_685, false);
								PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "EagleEye", false, -1);
								iLocal_685 = 0;
								Local_166[iLocal_847 /*10*/].f_3 = 1;
								__LIB_2__::func_608(&uLocal_133);
								__LIB_2__::func_608(&uLocal_579);
								iLocal_132 = 6;
							}
						}
					}
					else
					{
						__LIB_2__::func_608(&uLocal_579);
					}
				}
				else
				{
					__LIB_2__::func_608(&uLocal_579);
				}
			}
			if (!ENTITY::IS_ENTITY_IN_VOLUME(iLocal_298, Local_166[iLocal_847 /*10*/], true, 0))
			{
				if (!AUDIO::_0xA2CAC9DEF0195E6F(0))
				{
					if (!__LIB_2__::func_618(&uLocal_133))
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_685) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_685, false))
						{
							ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_685, "Break_to_Found", true, false);
							__LIB_8__::func_901(&uLocal_133, 0);
						}
					}
					else if (__LIB_5__::func_51(&uLocal_133) > Local_166[iLocal_847 /*10*/].f_6)
					{
						if (__LIB_12__::func_876(uParam0, Local_166[iLocal_847 /*10*/].f_8, 0))
						{
							__LIB_2__::func_608(&uLocal_133);
							if (iLocal_847 == 0)
							{
								iLocal_132 = 8;
							}
							else
							{
								Local_166[iLocal_847 /*10*/].f_3 = 1;
								iLocal_132 = 6;
							}
						}
					}
				}
			}
			break;
		case 8:
			if (__LIB_8__::func_684(Local_166[iLocal_847 /*10*/].f_8))
			{
				if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE(Local_166[iLocal_847 /*10*/].f_8) <= 0)
				{
					if (PLAYER::_0x45AB66D02B601FA7(PLAYER::PLAYER_ID()))
					{
						AUDIO::STOP_SCRIPTED_CONVERSATION(Local_166[iLocal_847 /*10*/].f_8, true, false);
						Local_166[iLocal_847 /*10*/].f_3 = 1;
						iLocal_132 = 6;
					}
				}
				else
				{
					Local_166[iLocal_847 /*10*/].f_3 = 1;
					iLocal_132 = 6;
				}
			}
			else
			{
				Local_166[iLocal_847 /*10*/].f_3 = 1;
				iLocal_132 = 6;
			}
			break;
		case 5:
			__LIB_11__::func_713(iLocal_298, 0.101f, 0, 0.4f, 1, 1077936128 /* Float: 3f */, 1106247680 /* Float: 30f */, 1114636288 /* Float: 60f */, 1033476506 /* Float: 0.075f */, 1061158912 /* Float: 0.75f */, 1, 0, 1045220557 /* Float: 0.2f */, 0);
			break;
		case 6:
		case 7:
			if ((!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_685) || ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(iLocal_685)) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iLocal_685, false))
			{
				if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_298, 0))
				{
					if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_591, 0))
					{
						TASK::CLEAR_PED_TASKS(iLocal_591, true, false);
					}
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_298, "rcm_dutch1_clemens", 0, 1036, -1, 0, 1, -1);
				}
			}
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_685))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iLocal_685, false))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_685);
					PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "EagleEye", false, -1);
				}
			}
			if (ENTITY::IS_ENTITY_IN_VOLUME(iLocal_298, Local_166[iLocal_847 /*10*/], true, 0))
			{
				__LIB_11__::func_713(iLocal_298, 1.5f, 0, 0.4f, 1, 1077936128 /* Float: 3f */, 1106247680 /* Float: 30f */, 1114636288 /* Float: 60f */, 1033476506 /* Float: 0.075f */, 1061158912 /* Float: 0.75f */, 1, 0, 1045220557 /* Float: 0.2f */, 0);
			}
			else
			{
				__LIB_11__::func_713(iLocal_298, 1071644672 /* Float: 1.75f */, 0, 1045220557 /* Float: 0.2f */, 1, 1077936128 /* Float: 3f */, 1106247680 /* Float: 30f */, 1114636288 /* Float: 60f */, 1033476506 /* Float: 0.075f */, 1061158912 /* Float: 0.75f */, 1, 0, 1045220557 /* Float: 0.2f */, 0);
			}
			if (__LIB_2__::func_618(&uLocal_139))
			{
				__LIB_2__::func_608(&uLocal_139);
			}
			if (iLocal_132 != 7)
			{
				if (!__LIB_5__::func_463())
				{
					if (iLocal_847 == 0 || Local_166[iLocal_847 /*10*/].f_3 == 1)
					{
						if (AUDIO::_0xD89504D9D7D5057D("DCH1_BANT2A"))
						{
							if (AUDIO::_0xF01C570E0A0A1E67("DCH1_BANT2A"))
							{
								func_1467(0, "DCH1_BANT2A", 0, 0, 0, 0);
							}
						}
						if (AUDIO::_0xD89504D9D7D5057D("DCH1_BANT2B"))
						{
							if (AUDIO::_0xF01C570E0A0A1E67("DCH1_BANT2B"))
							{
								func_1467(0, "DCH1_BANT2B", 0, 0, 0, 0);
							}
						}
						if (AUDIO::_0xD89504D9D7D5057D("DCH1_BANT2C"))
						{
							if (AUDIO::_0xF01C570E0A0A1E67("DCH1_BANT2C"))
							{
								func_1467(0, "DCH1_BANT2C", 0, 0, 0, 0);
							}
						}
						iLocal_132 = 7;
					}
				}
			}
			break;
	}
}

void func_833(int iParam0)
{
	iLocal_859 = iParam0;
}

void func_849(int iParam0)
{
	MISC::CLEAR_BIT(&iLocal_208, iParam0);
}

int func_850()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 <= (11 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_236[iVar0 /*5*/]) && PED::IS_PED_DEAD_OR_DYING(Local_236[iVar0 /*5*/], true))
		{
			if ((iVar0 != 6 && iVar0 != 7) && iVar0 != 8)
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_851(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 <= (11 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_236[iVar0 /*5*/]) && !PED::IS_PED_DEAD_OR_DYING(Local_236[iVar0 /*5*/], true))
		{
			if (((((((iVar0 != 6 && iVar0 != 7) && iVar0 != 8) && iVar0 != iParam0) && iVar0 != iParam1) && iVar0 != iParam2) && iVar0 != iParam3) && iVar0 != iParam4)
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_852()
{
	int iVar0;
	int iVar1;
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, func_851(0, 0, 0, 0, 0));
	iVar0 = 0;
	while (iVar0 <= (11 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_236[iVar0 /*5*/]) && !PED::IS_PED_DEAD_OR_DYING(Local_236[iVar0 /*5*/], true))
		{
			if ((iVar0 != 6 && iVar0 != 7) && iVar0 != 8)
			{
				if (iVar1 == 0)
				{
					return iVar0;
				}
				iVar1 = (iVar1 - 1);
			}
		}
		iVar0++;
	}
	return 0;
}

int func_853(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 2:
			if (iLocal_122[2] != iParam1)
			{
				if (iLocal_122[2] == 0)
				{
					iLocal_122[2] = iParam1;
					__LIB_12__::func_875(uParam0, Local_236[iParam1 /*5*/], "RDTC1_ENEMY2", 0);
				}
				else if (ENTITY::IS_ENTITY_DEAD(Local_236[iLocal_122[2] /*5*/]))
				{
					iLocal_122[2] = iParam1;
					__LIB_12__::func_875(uParam0, Local_236[iParam1 /*5*/], "RDTC1_ENEMY2", 0);
				}
			}
			return iLocal_122[2];
		case 3:
			if (iLocal_122[4] == 0)
			{
				__LIB_12__::func_875(uParam0, Local_236[iParam1 /*5*/], "RDTC1_ENEMY4", 0);
				iLocal_122[4] = iParam1;
			}
			return iLocal_122[4];
		case 1:
		case 9:
		case 10:
			if (iLocal_122[1] != iParam1)
			{
				if (iLocal_122[1] == 0)
				{
					iLocal_122[1] = iParam1;
					__LIB_12__::func_875(uParam0, Local_236[iParam1 /*5*/], "RDTC1_ENEMY1", 0);
				}
				else if (ENTITY::IS_ENTITY_DEAD(Local_236[iLocal_122[1] /*5*/]))
				{
					iLocal_122[1] = iParam1;
					__LIB_12__::func_875(uParam0, Local_236[iParam1 /*5*/], "RDTC1_ENEMY1", 0);
				}
			}
			return iLocal_122[1];
		case 5:
			if (iLocal_122[3] != iParam1)
			{
				if (iLocal_122[3] == 0)
				{
					iLocal_122[3] = iParam1;
					__LIB_12__::func_875(uParam0, Local_236[iParam1 /*5*/], "RDTC1_ENEMY3", 0);
				}
				else if (ENTITY::IS_ENTITY_DEAD(Local_236[iLocal_122[3] /*5*/]))
				{
					iLocal_122[3] = iParam1;
					__LIB_12__::func_875(uParam0, Local_236[iParam1 /*5*/], "RDTC1_ENEMY3", 0);
				}
			}
			return iLocal_122[3];
	}
	return 0;
}

bool func_856(int iParam0, vector3 vParam1, float fParam4, int iParam5)
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_236[iParam0 /*5*/]))
	{
		return true;
	}
	else if (!__LIB_3__::func_354())
	{
		Local_236[iParam0 /*5*/] = __LIB_8__::func_931(joaat("RCSP_DUTCH1_MALES_01"), vParam1, fParam4, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		switch (iParam0)
		{
			case 1:
				__LIB_0__::func_862(Local_236[iParam0 /*5*/], 745402968);
				break;
			case 2:
				__LIB_0__::func_862(Local_236[iParam0 /*5*/], -1020321828);
				break;
			case 3:
				__LIB_0__::func_862(Local_236[iParam0 /*5*/], -790840521);
				break;
			case 4:
				__LIB_0__::func_862(Local_236[iParam0 /*5*/], -1036771894);
				break;
			case 5:
				__LIB_0__::func_862(Local_236[iParam0 /*5*/], -811485019);
				break;
			case 9:
				__LIB_0__::func_862(Local_236[iParam0 /*5*/], -689387725);
				break;
			case 10:
				__LIB_0__::func_862(Local_236[iParam0 /*5*/], -455646448);
				break;
		}
		MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_236[iParam0 /*5*/]);
		__LIB_3__::func_356(Local_236[iParam0 /*5*/], -1034486097, 1);
		func_626(Local_236[iParam0 /*5*/], iParam5, 1, 1, 0, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_236[iParam0 /*5*/], joaat("REL_CRIMINALS"));
		PED::SET_PED_HEARING_RANGE(Local_236[iParam0 /*5*/], 200f);
		PED::SET_PED_SEEING_RANGE(Local_236[iParam0 /*5*/], 200f);
		PED::SET_PED_ID_RANGE(Local_236[iParam0 /*5*/], 200f);
		PED::REGISTER_HATED_TARGETS_AROUND_PED(Local_236[iParam0 /*5*/], 200f);
		PED::SET_PED_TARGET_LOSS_RESPONSE(Local_236[iParam0 /*5*/], 1);
		PED::SET_PED_COMBAT_RANGE(Local_236[iParam0 /*5*/], 2);
		if (iParam0 != 4 && iParam0 != 5)
		{
			TASK::TASK_COMBAT_HATED_TARGETS(Local_236[iParam0 /*5*/], -1f);
		}
		PED::SET_PED_COMBAT_MOVEMENT(Local_236[iParam0 /*5*/], 2);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(Local_236[iParam0 /*5*/], true, 0f);
		PED::SET_PED_FLEE_ATTRIBUTES(Local_236[iParam0 /*5*/], 512, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_236[iParam0 /*5*/], 6, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_236[iParam0 /*5*/], 58, true);
		PED::SET_PED_CONFIG_FLAG(Local_236[iParam0 /*5*/], 377, false);
		PED::SET_PED_HIGHLY_PERCEPTIVE(Local_236[iParam0 /*5*/], true);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_236[iParam0 /*5*/], 5, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_236[iParam0 /*5*/], 46, true);
		PED::_0xAE6004120C18DF97(Local_236[iParam0 /*5*/], 0, 0);
		return false;
	}
	return false;
}

void func_857(int iParam0, int iParam1)
{
	if (__LIB_0__::func_272(Local_236[iParam0 /*5*/], 0))
	{
		PED::_0xFC3DB99C8144CD81(Local_236[iParam0 /*5*/], iParam1, 0, 0, 0);
	}
}

void func_858(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_236[iParam0 /*5*/]))
	{
		if (!__LIB_2__::func_618(&(Local_236[iParam0 /*5*/].f_2)))
		{
			__LIB_8__::func_901(&(Local_236[iParam0 /*5*/].f_2), 1);
			switch (iParam0)
			{
				case 1:
					func_857(iParam0, func_1476(iParam0, 1, 5, 2, 4, 3));
					break;
				case 2:
					func_857(iParam0, func_1476(iParam0, 1, 2, 5, 4, 3));
					break;
				case 3:
					func_857(iParam0, func_1476(iParam0, 2, 1, 5, 4, 3));
					break;
			}
		}
		else if (__LIB_5__::func_51(&(Local_236[iParam0 /*5*/].f_2)) > 2f)
		{
			__LIB_2__::func_608(&(Local_236[iParam0 /*5*/].f_2));
		}
	}
}

int func_860(int iParam0, vector3 vParam1, float fParam4)
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_236[iParam0 /*5*/]))
	{
		return 1;
	}
	else if (!__LIB_3__::func_354())
	{
		Local_236[iParam0 /*5*/] = __LIB_8__::func_931(joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT"), vParam1, fParam4, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		PED::SET_PED_FLEE_ATTRIBUTES(Local_236[iParam0 /*5*/], 512, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_236[iParam0 /*5*/], true);
		return 0;
	}
	return 0;
}

int func_861(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_236[iParam0 /*5*/]))
	{
		return 1;
	}
	else if (!__LIB_3__::func_354())
	{
		Local_236[iParam0 /*5*/] = __LIB_8__::func_931(joaat("RCSP_DUTCH1_MALES_01"), ENTITY::GET_ENTITY_COORDS(Local_236[iParam1 /*5*/], true, false), 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		switch (iParam0)
		{
			case 1:
				__LIB_0__::func_862(Local_236[iParam0 /*5*/], 745402968);
				break;
			case 2:
				__LIB_0__::func_862(Local_236[iParam0 /*5*/], -1020321828);
				break;
			case 3:
				__LIB_0__::func_862(Local_236[iParam0 /*5*/], -790840521);
				break;
			case 4:
				__LIB_0__::func_862(Local_236[iParam0 /*5*/], -1036771894);
				break;
			case 5:
				__LIB_0__::func_862(Local_236[iParam0 /*5*/], -811485019);
				break;
			case 9:
				__LIB_0__::func_862(Local_236[iParam0 /*5*/], -689387725);
				break;
			case 10:
				__LIB_0__::func_862(Local_236[iParam0 /*5*/], -455646448);
				break;
		}
		if (iParam3 == -1)
		{
			PED::_SET_PED_ON_MOUNT(Local_236[iParam0 /*5*/], Local_236[iParam1 /*5*/], -1, true);
		}
		else
		{
			PED::_SET_PED_ON_MOUNT(Local_236[iParam0 /*5*/], Local_236[iParam1 /*5*/], 0, true);
		}
		MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_236[iParam0 /*5*/]);
		__LIB_3__::func_356(Local_236[iParam0 /*5*/], -1034486097, 1);
		func_626(Local_236[iParam0 /*5*/], iParam2, 1, 1, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_236[iParam0 /*5*/], joaat("REL_CRIMINALS"));
		PED::SET_PED_HEARING_RANGE(Local_236[iParam0 /*5*/], 200f);
		PED::SET_PED_SEEING_RANGE(Local_236[iParam0 /*5*/], 200f);
		PED::SET_PED_ID_RANGE(Local_236[iParam0 /*5*/], 200f);
		PED::REGISTER_HATED_TARGETS_AROUND_PED(Local_236[iParam0 /*5*/], 200f);
		PED::SET_PED_TARGET_LOSS_RESPONSE(Local_236[iParam0 /*5*/], 1);
		PED::SET_PED_COMBAT_RANGE(Local_236[iParam0 /*5*/], 3);
		TASK::TASK_COMBAT_HATED_TARGETS(Local_236[iParam0 /*5*/], -1f);
		PED::SET_PED_FLEE_ATTRIBUTES(Local_236[iParam0 /*5*/], 512, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_236[iParam0 /*5*/], 6, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_236[iParam0 /*5*/], 58, true);
		PED::SET_PED_CONFIG_FLAG(Local_236[iParam0 /*5*/], 377, false);
		PED::SET_PED_COMBAT_MOVEMENT(Local_236[iParam0 /*5*/], 2);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_236[iParam0 /*5*/], 5, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_236[iParam0 /*5*/], 46, true);
		PED::_0xAE6004120C18DF97(Local_236[iParam0 /*5*/], 0, 0);
		return 0;
	}
	return 0;
}

void func_862(int iParam0)
{
	MISC::CLEAR_BIT(&iLocal_207, iParam0);
}

int func_878(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
	if (func_1486(*iParam0, iParam1, *iParam2, bParam3, iParam4))
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

bool func_892(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (__LIB_0__::func_2() == -1)
	{
		if (__LIB_0__::func_787(iParam0) && func_1500(iParam0))
		{
			__LIB_1__::func_695(iParam0, iParam1, 1, &bParam2, iParam3);
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

bool func_893(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	*iParam1 = iParam2;
	__LIB_1__::func_111(iParam0, iParam1);
	Var0 = { func_1503(iParam0, 0, 1) };
	iVar5 = __LIB_0__::func_936(iParam0, &Var0, 0, 0);
	iVar6 = __LIB_0__::func_788(iParam0, 0);
	if ((iVar5 > 1 && !__LIB_1__::func_195()) && (iVar6 + iParam2) >= iVar5)
	{
		if (__LIB_0__::func_192(iParam0, -2051813666))
		{
			__LIB_1__::func_240(583, 1);
		}
		else
		{
			__LIB_1__::func_240(582, 0);
		}
	}
	if (func_1506(iParam0, &Var0, *iParam1, 0, 0))
	{
		if (iVar6 < iVar5)
		{
			*iParam1 = (iVar5 - iVar6);
		}
		else
		{
			return false;
		}
	}
	return true;
}

void func_915(int iParam0)
{
	if (!__LIB_0__::func_52(iParam0))
	{
		return;
	}
	__LIB_0__::func_427(iParam0);
	func_1527(iParam0);
}

bool func_920(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<4> Var0;
	int iVar5;
	struct<10> Var6;
	int iVar28;
	struct<4> Var29;
	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_MELEE(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
	{
		Var0 = { func_1503(iParam0, 0, 1) };
		iVar5 = 1728382685; /* GXTEntry: "Right" */
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_1529((386 + iVar28), 1);
			if (func_1530(iParam0, &Var0, iVar5, 0))
			{
				if (__LIB_1__::func_429(iParam0, &Var6, iVar5))
				{
					Var29 = { __LIB_0__::func_429(iParam0, Var0, iVar5, 0) };
					__LIB_0__::func_939(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (__LIB_0__::func_708(0))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
					{
						return false;
					}
					__LIB_0__::func_916(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0), iParam1, iParam6);
					__LIB_0__::func_718(iParam0, iParam1);
					return true;
				}
				if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
				{
					return false;
				}
				if (iParam1 > 0)
				{
				}
				WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
				return true;
			}
		}
	}
}

bool func_922(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (!func_1506(iParam0, &uVar1, 1, 0, 0))
		{
			__LIB_1__::func_695(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = __LIB_0__::func_940(iVar0);
			if (WEAPON::_IS_WEAPON_SNIPER(iVar0))
			{
				func_920(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("WEAPON_FISHINGROD") || iVar0 == joaat("WEAPON_KIT_BINOCULARS"))
			{
				func_920(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("WEAPON_LASSO"))
			{
				func_920(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
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
					func_920(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_920(iVar0, WEAPON::_GET_WEAPON_CLIP_SIZE(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
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
					if (!func_920(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_920(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_920(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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

bool func_924(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	if (!__LIB_0__::func_258(iParam0))
	{
		return false;
	}
	iVar4 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(iParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	if (__LIB_0__::func_154(iVar4))
	{
		WEAPON::GET_MAX_AMMO(Global_35, &iVar2, iVar4);
	}
	iVar5 = (iVar2 - iVar3);
	if (WEAPON::_IS_WEAPON_BOW(iVar4))
	{
		iVar1 = 5;
	}
	else
	{
		iVar1 = WEAPON::_GET_WEAPON_CLIP_SIZE(iVar4);
	}
	if (*iParam1 > 0)
	{
		iVar6 = *iParam1;
	}
	else if (*iParam1 < 0)
	{
		iVar6 = (iVar1 * MISC::ABSI(*iParam1));
	}
	if (__LIB_1__::func_707(joaat("PROVISION_TRINKET_CROW_BEAK"), 1, 0) && iParam2 == -897553835)
	{
		iVar6 = BUILTIN::CEIL((IntToFloat(iVar6) * 1.1f));
	}
	if (iVar5 >= iVar6)
	{
		iVar0 = iVar6;
	}
	else if (iVar5 < iVar6 && iVar5 >= 1)
	{
		iVar0 = iVar5;
	}
	else
	{
		__LIB_1__::func_424(__LIB_0__::func_941(iParam0), __LIB_0__::func_776(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (__LIB_0__::func_2() == -1)
		{
			if (__LIB_1__::func_25(Global_1835011[14 /*74*/].f_1, 1))
			{
				__LIB_1__::func_240(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (__LIB_0__::func_708(0))
	{
		if (__LIB_0__::func_916(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_966(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_925(int iParam0)
{
	var uVar0;
	if ((iParam0 == joaat("PROVISION_TALISMAN_EAGLE_TALON") && !__LIB_0__::func_26()) || iParam0 != joaat("PROVISION_TALISMAN_EAGLE_TALON"))
	{
		if (func_1539(Global_35, iParam0, &uVar0))
		{
			func_945(PLAYER::PLAYER_PED_ID(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case joaat("PROVISION_TALISMAN_ALLIGATOR_TOOTH"):
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			__LIB_1__::func_244();
			break;
		case joaat("PROVISION_TALISMAN_BEAR_CLAW"):
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			__LIB_1__::func_244();
			break;
		case joaat("PROVISION_TALISMAN_BUFFALO_HORN"):
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			__LIB_1__::func_244();
			break;
		case joaat("PROVISION_TALISMAN_EAGLE_TALON"):
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			__LIB_0__::func_362();
			break;
		case joaat("PROVISION_TALISMAN_RAVEN_CLAW"):
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			__LIB_0__::func_360();
			break;
	}
}

int func_945(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	struct<5> Var0;
	int iVar5;
	if (iParam3 == -358215195)
	{
		Var0 = { func_1503(iParam1, 1, 0) };
		iParam3 = __LIB_0__::func_709(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_1578(iParam1, iParam2, __LIB_0__::func_161(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	__LIB_1__::func_467(1, (__LIB_0__::func_2() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != Global_1946804.f_57[__LIB_0__::func_161(iParam3, 1) /*11*/])
			{
				__LIB_1__::func_452(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (__LIB_0__::func_156(32768) && iParam1 != Global_1946804.f_57[__LIB_0__::func_161(iParam3, 1) /*11*/])
			{
				__LIB_0__::func_945();
				__LIB_1__::func_452(22, iParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			__LIB_1__::func_452(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = __LIB_0__::func_445(iParam3);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		__LIB_1__::func_452(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			__LIB_1__::func_36(0);
			__LIB_1__::func_37(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		__LIB_1__::func_452(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

bool func_966(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	struct<4> Var5;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_1503(iParam0, 0, 1) };
	Var5 = { __LIB_0__::func_429(iParam0, Var0, Var0.f_4, 0) };
	return func_1592(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_967(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	switch (__LIB_0__::func_357(iParam0))
	{
		case 81053684:
			if (iParam0 == joaat("KIT_BANDANA") && __LIB_1__::func_169(81053684, 0) <= 0)
			{
				__LIB_1__::func_452(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == joaat("CLOTHING_ITEM_HAT_PZERO_000") || iParam0 == joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"))
			{
				__LIB_1__::func_452(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = __LIB_0__::func_449(iParam0);
			if (__LIB_0__::func_450(iVar0))
			{
				__LIB_1__::func_697(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				__LIB_1__::func_452(30, iParam0, 0, 0, 0);
			}
			if (__LIB_0__::func_241() == -2125499975 || __LIB_0__::func_241() == -449205311)
			{
				switch (iParam0)
				{
					case joaat("CLOTHING_WARM_WEATHER_OUTFIT"):
					case 1160643979: /* GXTEntry: "The Winter Gunslinger" */
					case joaat("CLOTHING_GUNSLINGER_OUTFIT"):
						__LIB_1__::func_452(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (__LIB_0__::func_241() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024: /* GXTEntry: "The Cowboy" */
						__LIB_1__::func_452(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!__LIB_1__::func_431(-525676072, 0))
			{
				if (__LIB_1__::func_335(-525676072, &iVar1))
				{
					__LIB_1__::func_452(33, iVar1, 0, 0, 0);
				}
			}
			__LIB_1__::func_452(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == joaat("CLOTHING_SP_OFFHAND_000") || iParam0 == -1515874150) || iParam0 == joaat("UPGRADE_OFFHAND_HOLSTER"))
	{
		if (!__LIB_0__::func_451(joaat("MP_COMPONENT_TYPE_LOADOUT_3")))
		{
			func_945(Global_35, iParam0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
		}
		func_915(24);
		if (__LIB_0__::func_918(&iVar2, 0))
		{
			func_920(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_968(int iParam0)
{
	if (__LIB_0__::func_192(iParam0, 943695443))
	{
		func_1601(0, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -2096528786))
	{
		func_1601(1, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -1094167013))
	{
		func_1601(2, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1936654645))
	{
		func_1601(3, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1306489306))
	{
		func_1601(4, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 435762317))
	{
		func_1601(5, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1259363210))
	{
		func_1601(6, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 881398259))
	{
		func_1601(7, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -541549214))
	{
		func_1601(8, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 130796156))
	{
		func_1601(-1, iParam0);
	}
}

void func_1004()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_1635();
	func_1636();
	func_1637();
	func_1638();
	func_1639();
	func_1640();
	__LIB_0__::func_376();
}

void func_1005(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	func_1642(iParam0, 1, 1, -142743235, 1);
	if (__LIB_0__::func_779(iParam0))
	{
		func_1644(iParam0, 1, 1);
	}
	bVar3 = false;
	bVar7 = false;
	iVar8 = __LIB_0__::func_161(func_1645(iParam0), 1);
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

int func_1012(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	struct<5> Var0;
	if (iParam3 == -358215195)
	{
		Var0 = { func_1503(iParam1, 1, 0) };
		iParam3 = __LIB_0__::func_709(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	__LIB_0__::func_922(iParam3);
	return func_945(iParam0, iParam1, iParam2, iParam3, bParam4, bParam5, 1, 0, 1, 0);
}

void func_1039()
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
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_1668(&uVar4, &iVar1, &iVar2, &iVar3)))
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

int func_1113(var uParam0, int iParam1, int iParam2)
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
		return func_1113(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

void func_1212(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_1212(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_1212(iVar2, vParam1, fParam4, iParam5, iParam6);
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

void func_1219(int iParam0, int iParam1)
{
	if (!__LIB_0__::func_49(iParam0))
	{
		return;
	}
	switch (iParam0)
	{
		case 11:
			if (Global_40.f_4942[iParam0 /*60*/].f_3 == -1341683964)
			{
				func_626(iParam1, joaat("WEAPON_REVOLVER_CATTLEMAN_SADIE"), 0, 0, 2, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
				func_626(iParam1, joaat("WEAPON_REVOLVER_CATTLEMAN_SADIE_DUALWIELD"), 0, 0, 3, 1, 1, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 1, 0, 0);
			}
			break;
	}
}

void func_1276(var uParam0, char* sParam1)
{
	int iVar0;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	if (!__LIB_12__::func_972(uParam0, sParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_366[iVar0 /*9*/])) && MISC::ARE_STRINGS_EQUAL(&(uParam0->f_366[iVar0 /*9*/]), sParam1))
		{
			ANIMSCENE::_0xAE6ADA8FE7E84ACC(uParam0->f_348, &(uParam0->f_366[iVar0 /*9*/]));
			uParam0->f_366[iVar0 /*9*/].f_8 = 0;
			StringCopy(&(uParam0->f_366[iVar0 /*9*/]), "", 64);
		}
		iVar0++;
	}
}

bool func_1296(int iParam0)
{
	var uVar0;
	bool bVar1;
	if (MISC::IS_BIT_SET(iParam0->f_21, 8) || MISC::IS_BIT_SET(*iParam0, 11))
	{
		return true;
	}
	if (!MISC::IS_BIT_SET(iParam0->f_21, 9))
	{
		if (__LIB_1__::func_750(&uVar0))
		{
			__LIB_8__::func_901(&(iParam0->f_37), 0);
			MISC::SET_BIT(&(iParam0->f_21), 9);
			if (func_1864())
			{
			}
		}
		else
		{
			__LIB_8__::func_901(&(iParam0->f_37), 0);
			MISC::SET_BIT(&(iParam0->f_21), 9);
		}
	}
	else if (MISC::IS_BIT_SET(iParam0->f_21, 9))
	{
		bVar1 = __LIB_9__::func_324(&(iParam0->f_37)) >= 1.5f;
		if ((!__LIB_1__::func_750(&uVar0) || func_1864()) || bVar1)
		{
			if (bVar1)
			{
				func_1865();
			}
			MISC::SET_BIT(&(iParam0->f_21), 8);
			return true;
		}
	}
	return false;
}

void func_1337(var uParam0)
{
	int iVar0;
	if (__LIB_1__::func_750(&iVar0))
	{
		if (__LIB_0__::func_144(iVar0, 0))
		{
			if (__LIB_0__::func_357(iVar0) == -525676072)
			{
				PED::_SET_PED_COMPONENT_DISABLED(Global_35, joaat("MASKS_LARGE"), 0);
				func_945(Global_35, joaat("CLOTHING_ITEM_HAT_NONE"), 0, 1108822547, 0, 1, 0, 0, 0, 0);
			}
			else
			{
				PED::_SET_PED_COMPONENT_DISABLED(Global_35, joaat("NECKWEAR"), 0);
			}
			if (!__LIB_0__::func_144(*uParam0, 0))
			{
				*uParam0 = iVar0;
			}
		}
	}
}

void func_1338(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
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
		func_1885();
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

void func_1340(var uParam0)
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
			func_1212(iVar1, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_1212(iVar3, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_1341(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if ((__LIB_0__::func_84(uParam0, 268435456) && !__LIB_0__::func_86(__LIB_12__::func_720(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { __LIB_12__::func_720(uParam0) };
			func_1212(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

void func_1354(int iParam0, bool bParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	Var0 = { func_1503(iParam0, 0, 0) };
	Var5 = { __LIB_0__::func_429(iParam0, Var0, Var0.f_4, 0) };
	if (__LIB_0__::func_800(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	INVENTORY::_0x65A5F70F4A292EBE(__LIB_0__::func_162(0), &Var5, bParam1);
}

int func_1402(int iParam0, int iParam1, vector3 vParam2, vector3 vParam5, bool bParam8)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_687[iParam0]))
	{
		STREAMING::REQUEST_MODEL(iParam1, false);
		if ((STREAMING::IS_MODEL_VALID(iParam1) && STREAMING::HAS_MODEL_LOADED(iParam1)) && !__LIB_0__::func_86(vParam2))
		{
			if (iParam1 == joaat("WAGON02X"))
			{
				iLocal_306 = VEHICLE::CREATE_VEHICLE(joaat("WAGON02X"), vParam2, 0f, true, true, true, false);
				iLocal_687[iParam0] = iLocal_306;
				ENTITY::SET_ENTITY_ROTATION(iLocal_306, vParam5, 2, true);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_306, 0f);
				ENTITY::SET_ENTITY_PROOFS(iLocal_306, 6, false);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_306, true);
				ENTITY::SET_ENTITY_DYNAMIC(iLocal_306, false);
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_306, vParam2, false, true, true);
				VEHICLE::SET_VEHICLE_EXTRA(iLocal_306, 1, true);
				VEHICLE::SET_VEHICLE_EXTRA(iLocal_306, 2, true);
				VEHICLE::SET_VEHICLE_EXTRA(iLocal_306, 3, true);
				VEHICLE::SET_VEHICLE_EXTRA(iLocal_306, 4, false);
			}
			else
			{
				iLocal_687[iParam0] = OBJECT::CREATE_OBJECT_NO_OFFSET(iParam1, vParam2, true, true, false, true);
				ENTITY::SET_ENTITY_ROTATION(iLocal_687[iParam0], vParam5, 2, true);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_687[iParam0], true);
				ENTITY::SET_ENTITY_DYNAMIC(iLocal_687[iParam0], false);
				if (bParam8)
				{
					ENTITY::SET_ENTITY_PROOFS(iLocal_687[iParam0], 23, false);
					ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_687[iParam0], false);
				}
			}
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_1417(var uParam0, char* sParam1, vector3 vParam2, int iParam5, bool bParam6, float fParam7, float fParam8, float fParam9)
{
	float fVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam5))
	{
		fVar0 = __LIB_0__::func_665(Global_35, iParam5, 1, 1);
	}
	else
	{
		fVar0 = __LIB_0__::func_94(Global_35, vParam2, 1);
	}
	if (fVar0 >= fParam9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam5))
		{
			if (!bParam6 || ENTITY::IS_ENTITY_OCCLUDED(iParam5))
			{
				StringCopy(&(uParam0->f_2578), sParam1->f_1, 24);
				return 2;
			}
		}
		else
		{
			StringCopy(&(uParam0->f_2578), sParam1->f_1, 24);
			return 2;
		}
	}
	else if (fVar0 > fParam8)
	{
		if (!sParam1->f_2)
		{
			__LIB_1__::func_422(*sParam1, 7500, 0, 1, 0, 0, -1, -1, 0);
			sParam1->f_2 = 1;
		}
		return 1;
	}
	else
	{
		if (fVar0 < fParam7)
		{
			__LIB_18__::func_609(*sParam1);
			if (sParam1->f_2)
			{
			}
			sParam1->f_2 = 0;
		}
		return 0;
	}
	return 0;
}

void func_1418(int iParam0)
{
	if (iLocal_95 != iParam0)
	{
		iLocal_96 = iParam0;
	}
}

int func_1462(var uParam0, int iParam1, float fParam2, bool bParam3)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return 0;
	}
	fVar1 = 1E+08f;
	iVar2 = 0;
	iVar3 = 0;
	while (iVar3 < *uParam0)
	{
		fVar0 = BUILTIN::VDIST2(*(uParam0[iVar3 /*3*/]), ENTITY::GET_ENTITY_COORDS(iParam1, true, false));
		if (fVar0 < fVar1)
		{
			if (fVar0 > fParam2)
			{
				if (bParam3)
				{
					if (!CAM::IS_SPHERE_VISIBLE(*(uParam0[iVar3 /*3*/]), 0.5f))
					{
						fVar1 = fVar0;
						iVar2 = iVar3;
					}
				}
				else
				{
					fVar1 = fVar0;
					iVar2 = iVar3;
				}
			}
		}
		iVar3++;
	}
	return iVar2;
}

void func_1467(bool bParam0, char* sParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		AUDIO::PAUSE_SCRIPTED_CONVERSATION(sParam1, bParam2, bParam3, bParam4, bParam5);
	}
	else
	{
		AUDIO::RESTART_SCRIPTED_CONVERSATION(sParam1);
	}
	bLocal_844 = bParam0;
}

int func_1476(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0[5];
	int iVar6;
	iVar0[0] = iParam1;
	iVar0[1] = iParam2;
	iVar0[2] = iParam3;
	iVar0[3] = iParam4;
	iVar0[4] = iParam5;
	if (Local_236[iParam0 /*5*/].f_1 == 0)
	{
		iVar6 = 0;
		while (iVar6 <= 4)
		{
			if (!__LIB_1__::func_205(Global_35, func_2005(iVar0[iVar6]), 1, 0) && !__LIB_1__::func_205(iLocal_298, func_2005(iVar0[iVar6]), 1, 0))
			{
				Local_236[iParam0 /*5*/].f_1 = iVar0[iVar6];
				return func_2005(iVar0[iVar6]);
			}
			iVar6++;
		}
	}
	else
	{
		if (!__LIB_1__::func_205(Global_35, func_2005(Local_236[iParam0 /*5*/].f_1), 1, 0) && !__LIB_1__::func_205(iLocal_298, func_2005(Local_236[iParam0 /*5*/].f_1), 1, 0))
		{
			return func_2005(Local_236[iParam0 /*5*/].f_1);
		}
		Local_236[iParam0 /*5*/].f_1 = (Local_236[iParam0 /*5*/].f_1 - 1);
		if (Local_236[iParam0 /*5*/].f_1 < 1)
		{
			Local_236[iParam0 /*5*/].f_1 = 5;
		}
		if (!__LIB_1__::func_205(Global_35, func_2005(Local_236[iParam0 /*5*/].f_1), 1, 0) && !__LIB_1__::func_205(iLocal_298, func_2005(Local_236[iParam0 /*5*/].f_1), 1, 0))
		{
			return func_2005(Local_236[iParam0 /*5*/].f_1);
		}
		Local_236[iParam0 /*5*/].f_1 += 2;
		if (Local_236[iParam0 /*5*/].f_1 > 5)
		{
			Local_236[iParam0 /*5*/].f_1 = 1;
		}
		if (!__LIB_1__::func_205(Global_35, func_2005(Local_236[iParam0 /*5*/].f_1), 1, 0) && !__LIB_1__::func_205(iLocal_298, func_2005(Local_236[iParam0 /*5*/].f_1), 1, 0))
		{
			return func_2005(Local_236[iParam0 /*5*/].f_1);
		}
	}
	return Local_14.f_12;
}

int func_1486(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
	return func_2019(iVar0, iParam1, iParam2, bParam3, iParam4);
}

bool func_1500(int iParam0)
{
	var uVar0;
	if (__LIB_0__::func_2() != -1)
	{
		return false;
	}
	if (__LIB_0__::func_774(iParam0, 1048576))
	{
		return false;
	}
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return func_1506(iParam0, &uVar0, 1, 0, 0);
	}
	return __LIB_1__::func_707(iParam0, 1, 0);
}

struct<5> func_1503(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<10> Var27;
	Var0 = { __LIB_0__::func_949(bParam1) };
	Var0.f_4 = 1084182731;
	switch (__LIB_0__::func_356(iParam0))
	{
		case joaat("CLOTHING"):
			if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, 1034665895))
			{
				Var0 = { __LIB_0__::func_429(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case joaat("WEAPON"):
			Var0 = { __LIB_1__::func_117(bParam1) };
			if (bParam2 && __LIB_0__::func_950(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_1530(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_1530(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (__LIB_1__::func_429(iParam0, &Var5, 1728382685 /* GXTEntry: "Right" */))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
			}
			else
			{
				Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
			}
			break;
		case joaat("HORSE"):
			Var0.f_4 = 1782082944;
			break;
		case joaat("EMOTE"):
			Var0.f_4 = -813824107;
			Var0 = { __LIB_1__::func_118(bParam1) };
			switch (__LIB_0__::func_357(iParam0))
			{
				case 664784405:
					Var0.f_4 = -1150938404;
					break;
				case 2020212423:
					Var0.f_4 = -1756997214;
					break;
				case 874188557:
					Var0.f_4 = -241855024;
					break;
				case -2101244071:
					Var0.f_4 = -268116367;
					break;
			}
			break;
		case joaat("UPGRADE"):
			if (__LIB_0__::func_793(iParam0, -1823706425))
			{
				Var0 = { __LIB_0__::func_429(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("KIT_CAMP"));
			}
			else if (__LIB_0__::func_793(iParam0, -1483207246))
			{
				Var0 = { __LIB_0__::func_429(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
		default:
			if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, 1084182731))
			{
				Var0.f_4 = 1084182731;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, 1034665895))
			{
				Var0.f_4 = 1034665895;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -833319691))
			{
				Var27.f_9 = -1591664384;
				if (!__LIB_0__::func_464(Var0, &Var27, bParam1, 0))
				{
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var27.f_5 };
					Var0.f_4 = -833319691;
				}
			}
			else
			{
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("CHARACTER"));
				if (Var0.f_4 == 0)
				{
				}
			}
			break;
	}
	return Var0;
}

bool func_1506(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<4> Var0;
	struct<10> Var4;
	var uVar26;
	int iVar27;
	int iVar28;
	__LIB_0__::func_799(&iParam0);
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	if (!__LIB_0__::func_708(0))
	{
		bParam3 = true;
	}
	if (__LIB_0__::func_787(iParam0) && WEAPON::_0x705BE297EEBDB95D(iParam0))
	{
		if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
		{
			Var0 = { __LIB_1__::func_117(0) };
			Var4.f_9 = -1591664384;
			if (!func_1530(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
			{
				return false;
			}
			else if (__LIB_1__::func_429(iParam0, &Var4, 1728382685 /* GXTEntry: "Right" */))
			{
				return false;
			}
			if (__LIB_0__::func_950(iParam0, 1))
			{
				if (!func_1530(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
				{
					return false;
				}
				else if (__LIB_1__::func_429(iParam0, &Var4, -649335959 /* GXTEntry: "Left" */))
				{
					return false;
				}
			}
		}
		else if (!func_2034(iParam0, &uVar26, 0))
		{
			return false;
		}
		return true;
	}
	iVar27 = __LIB_0__::func_936(iParam0, uParam1, bParam3, bParam4);
	if (iVar27 < 0)
	{
		return false;
	}
	else if (iVar27 == 0)
	{
		return true;
	}
	if (bParam3)
	{
		iVar28 = __LIB_0__::func_800(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = INVENTORY::_0xE787F05DFC977BDE(__LIB_0__::func_162(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return true;
	}
	return false;
}

void func_1527(int iParam0)
{
	int iVar0;
	switch (iParam0)
	{
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 11:
			__LIB_0__::func_537(1);
			break;
		case 14:
			break;
		case 15:
			break;
		case 16:
			break;
		case 17:
			break;
		case 18:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(5, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(4, 0);
			__LIB_0__::func_538(1);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			__LIB_0__::func_538(2);
			break;
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			__LIB_0__::func_538(3);
			break;
		case 21:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 0);
			break;
		case 22:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 0);
			break;
		case 31:
			break;
		case 10:
			break;
		case 12:
			break;
		case 13:
			break;
		case 32:
			break;
		case 33:
			__LIB_0__::func_539(1);
			break;
		case 34:
			__LIB_0__::func_540(1);
			break;
		case 35:
			__LIB_0__::func_541(1);
			break;
		case 36:
			break;
		case 37:
			__LIB_0__::func_542(0);
			break;
		case 38:
			__LIB_0__::func_543(0);
			break;
		case 39:
			__LIB_0__::func_544(0);
			break;
		case 40:
			break;
		case 41:
			break;
		case 42:
			break;
		case 43:
			break;
		case 1:
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 2:
			if ((!Global_1879534 && __LIB_0__::func_28()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				__LIB_0__::func_384("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			__LIB_1__::func_240(586, 0);
			break;
		case 3:
			if ((!Global_1879534 && __LIB_0__::func_28()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				__LIB_0__::func_384("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			__LIB_1__::func_240(587, 0);
			break;
		case 4:
			if ((!Global_1879534 && __LIB_0__::func_28()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				__LIB_0__::func_384("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			__LIB_1__::func_240(588, 0);
			break;
		case 5:
			if ((!Global_1879534 && __LIB_0__::func_28()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				__LIB_0__::func_384("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			__LIB_1__::func_240(589, 0);
			break;
		case 24:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_WEAPON_DUALWIELD"), true);
			UNLOCK::_UNLOCK_SET_VISIBLE(joaat("SP_WEAPON_DUALWIELD"), true);
			WEAPON::_0x83B8D50EB9446BBA(PLAYER::PLAYER_PED_ID(), 1);
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_0__::func_451(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) || __LIB_0__::func_802(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) == 2110595215)
				{
					if (__LIB_0__::func_181())
					{
						iVar0 = -1515874150; /* GXTEntry: "John\'s Off-Hand Holster" */
					}
					else
					{
						iVar0 = joaat("CLOTHING_SP_OFFHAND_000");
					}
					if (!__LIB_1__::func_707(iVar0, 1, 0))
					{
						func_966(iVar0, 1, 752097756);
					}
					func_945(Global_35, iVar0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(1013902307, 1, 0))
				{
					func_966(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(1013902307, 1, 0))
				{
					func_966(1013902307, 1, 752097756);
				}
				if (!__LIB_1__::func_707(142640135, 1, 0))
				{
					func_966(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(786809402, 1, 0))
				{
					func_966(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(786809402, 1, 0))
				{
					func_966(786809402, 1, 752097756);
				}
				if (!__LIB_1__::func_707(-518019409, 1, 0))
				{
					func_966(-518019409, 1, 752097756);
				}
			}
			break;
		case 23:
			PLAYER::_0x5B9813ECF7633FE8(0);
			break;
		case 25:
			break;
		case 26:
			break;
		case 27:
			break;
		case 28:
			break;
		case 29:
			break;
		case 30:
			break;
		case 44:
			break;
		case 45:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER"), true);
			Global_1935630.f_47 = 1;
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Enable", true, true);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Disable", false, true);
			break;
		case 46:
			func_2071();
			break;
		case 47:
			PLAYER::_0xA63FCAD3A6FEC6D2(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 52:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_POST_GANG1"), true);
			break;
		case 53:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_RECEPTIVE"), true);
			break;
		case 54:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_TRUSTED"), true);
			break;
		case 55:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("COMPENDIUM"), true);
			break;
		case 56:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_PEDS_REACT_TO_SICK_ATHUR"), true);
			break;
	}
}

int func_1529(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 1782082944;
		case 1:
			return 1704602624;
		case 2:
			return 1214181762;
		case 3:
			return -430578371;
		case 4:
			return -730381952;
		case 5:
			return -253503777;
		case 6:
			return 1352275534;
		case 7:
			return 1666399168;
		case 8:
			return -1911121386;
		case 9:
			return 1756656691;
		case 10:
			return -1774867076;
		case 11:
			return -421952220;
		case 12:
			return -1087003323;
		case 13:
			return 1231618917;
		case 14:
			return -1183777174;
		case 15:
			return -841767082;
		case 16:
			return 1043717005;
		case 17:
			return 142663787;
		case 18:
			return 1718143051;
		case 19:
			return -6605744;
		case 20:
			return 953047564;
		case 21:
			return 769706682;
		case 22:
			return 1635590003;
		case 23:
			return -2047978619;
		case 24:
			return -586319254;
		case 25:
			return 249896112;
		case 26:
			return -1060513333;
		case 27:
			return 1317351007;
		case 28:
			return -500478573;
		case 29:
			return -806573802;
		case 30:
			return -1109949204;
		case 31:
			return -740156546;
		case 32:
			return -684532710;
		case 33:
			return 1158805436;
		case 34:
			return -559473670;
		case 35:
			return -797147251;
		case 36:
			return -382216265;
		case 37:
			return 1419177114;
		case 38:
			return 1704297235;
		case 39:
			return -1139016418;
		case 40:
			return 897705377;
		case 41:
			return 17961769;
		case 42:
			return 205582207;
		case 43:
			return 900740963;
		case 44:
			return -1369589344;
		case 45:
			return -1695823795;
		case 46:
			return -41453074;
		case 47:
			return 539767227;
		case 48:
			return 1210490314;
		case 49:
			return -399684751;
		case 50:
			return 2138893455;
		case 51:
			return -1617010487;
		case 52:
			return -832377028;
		case 53:
			return -428040245;
		case 54:
			return 1279288897;
		case 55:
			return -594897905;
		case 56:
			return -1360459240;
		case 57:
			return 1838428396;
		case 58:
			return -1467846997;
		case 59:
			return -490610263;
		case 60:
			return -1885413079;
		case 61:
			return 708884155;
		case 62:
			return -134459952;
		case 63:
			return -1912136700;
		case 64:
			return -1268031552;
		case 65:
			return 1177953227;
		case 66:
			return 2130805296;
		case 67:
			return 38093490;
		case 68:
			return -269153218;
		case 69:
			return -1995068011;
		case 70:
			return -164284834;
		case 71:
			return 1446463345;
		case 72:
			return 1501315823;
		case 73:
			return -750379482;
		case 74:
			return -929560937;
		case 75:
			return 608323241;
		case 76:
			return 1030796013;
		case 77:
			return 1915057434;
		case 78:
			return -1582276476;
		case 79:
			return 692059311;
		case 80:
			return 2062839241;
		case 81:
			return -1884531872;
		case 82:
			return -866434534;
		case 83:
			return -1252192421;
		case 84:
			return 1243288963;
		case 85:
			return -1953772189;
		case 86:
			return 754411745;
		case 87:
			return 545309006;
		case 88:
			return -1089810811;
		case 89:
			return 1957869400;
		case 90:
			return -241412332;
		case 91:
			return -1548010959;
		case 92:
			return 550150488;
		case 93:
			return 946565453;
		case 94:
			return 434443248;
		case 95:
			return -1709914938;
		case 96:
			return 366686112;
		case 97:
			return -1370063350;
		case 98:
			return 2126829550;
		case 99:
			return 226552910;
		case 100:
			return 721193431;
		case 101:
			return -315672460;
		case 102:
			return 623544501;
		case 103:
			return 259556714;
		case 104:
			return -2125361825;
		case 105:
			return 1078230356;
		case 106:
			return 1885364811;
		case 107:
			return 1630382737;
		case 108:
			return 1738245512;
		case 109:
			return 1540262216;
		case 110:
			return 1016871472;
		case 111:
			return 13829069;
		case 112:
			return 737051352;
		case 113:
			return 1734614610;
		case 114:
			return -208715295;
		case 115:
			return 1435062936;
		case 116:
			return 1483055553;
		case 117:
			return 380335002;
		case 118:
			return -1079385677;
		case 119:
			return 676610411;
		case 120:
			return 2145419552;
		case 121:
			return 657238733;
		case 122:
			return 1850579281;
		case 123:
			return -1923957384;
		case 124:
			return -1142828108;
		case 125:
			return -1400618531;
		case 126:
			return -1433857135;
		case 127:
			return 209987206;
		case 128:
			return 1686943047;
		case 129:
			return -59178517;
		case 130:
			return 2134884601;
		case 131:
			return 651707517;
		case 132:
			return -633788535;
		case 133:
			return 116394463;
		case 134:
			return -1196973875;
		case 135:
			return 801752086;
		case 136:
			return 184475332;
		case 137:
			return -1880922659;
		case 138:
			return -898138634;
		case 139:
			return -2107418444;
		case 140:
			return -679970099;
		case 141:
			return -1531392549;
		case 142:
			return 1612483376;
		case 143:
			return 463930900;
		case 144:
			return -632148238;
		case 145:
			return 55303249;
		case 146:
			return 2108322089;
		case 147:
			return -1358896714;
		case 148:
			return 74475632;
		case 149:
			return -28710953;
		case 150:
			return -1791599168;
		case 151:
			return 1605938169;
		case 152:
			return 1255242276;
		case 153:
			return 636467727;
		case 154:
			return -1567688525;
		case 155:
			return -77886679;
		case 156:
			return -1057900679;
		case 157:
			return -1960888134;
		case 158:
			return -1719717295;
		case 159:
			return -1779244911;
		case 160:
			return -670540863;
		case 161:
			return 223362311;
		case 162:
			return 1150824567;
		case 163:
			return 974471191;
		case 164:
			return 1989683968;
		case 165:
			return 254804477;
		case 166:
			return 192057609;
		case 167:
			return 1553957817;
		case 168:
			return 2099829015;
		case 169:
			return -840300007 /* GXTEntry: "Extremely durable, hand tooled Off-Hand Holster with elaborate rattlesnake and sk" +
    "ull decoration." */;
		case 170:
			return -1948423372;
		case 171:
			return 981083654;
		case 172:
			return 1283289876;
		case 173:
			return -606884489;
		case 174:
			return -100418572;
		case 175:
			return 663645231;
		case 176:
			return 1442217033;
		case 177:
			return 1410986244;
		case 178:
			return 847409839;
		case 179:
			return 923926911;
		case 180:
			return 109995826;
		case 181:
			return -747412737;
		case 182:
			return 1114341727;
		case 183:
			return -539456939;
		case 184:
			return 45887121;
		case 185:
			return 913271624;
		case 186:
			return -1652812715;
		case 187:
			return -1791365775;
		case 188:
			return -979299941;
		case 189:
			return 713062001;
		case 190:
			return -575045963;
		case 191:
			return 1852965262;
		case 192:
			return -1398836354;
		case 193:
			return -1829885298;
		case 194:
			return -1773850357;
		case 195:
			return -564258009;
		case 196:
			return 2016532685;
		case 197:
			return -1070563798;
		case 198:
			return -1619221343;
		case 199:
			return -345571691;
		case 200:
			return 544288390;
		case 201:
			return 159578294;
		case 202:
			return -76852849;
		case 203:
			return 1110295244;
		case 204:
			return 2104563477;
		case 205:
			return 1947827651;
		case 206:
			return -933072766;
		case 207:
			return 2104388648;
		case 208:
			return -1677140601;
		case 209:
			return -2133097881;
		case 210:
			return -826678792;
		case 211:
			return -513522325;
		case 212:
			return 1970588249;
		case 213:
			return -2080032591;
		case 214:
			return 1758847745;
		case 215:
			return 895010282;
		case 216:
			return -511891179;
		case 217:
			return -1207567168;
		case 218:
			return -1315407613;
		case 219:
			return 1786352060;
		case 220:
			return -833319691;
		case 221:
			return 1591329969;
		case 222:
			return 2123222014;
		case 223:
			return -1578397674;
		case 224:
			return 1473261684;
		case 225:
			return -241855024;
		case 226:
			return 12999093;
		case 227:
			return -6796437;
		case 228:
			return -268116367;
		case 229:
			return -636470867;
		case 230:
			return 1737668280;
		case 231:
			return 892807236;
		case 232:
			return -733247890;
		case 233:
			return 24047176;
		case 234:
			return -1561999014;
		case 235:
			return -2052774042;
		case 236:
			return joaat("SLOTID_HORSE_BEDROLL");
		case 237:
			return joaat("SLOTID_HORSE_BLANKET");
		case 238:
			return joaat("SLOTID_HORSE_CANTLE");
		case 239:
			return joaat("SLOTID_HORSE_FENDER");
		case 240:
			return joaat("SLOTID_HORSE_HORN");
		case 241:
			return joaat("SLOTID_HORSE_INSURANCE");
		case 242:
			return 802754820;
		case 243:
			return joaat("SLOTID_HORSE_MANE");
		case 244:
			return -1886147520;
		case 245:
			return joaat("SLOTID_HORSE_REINS");
		case 246:
			return joaat("SLOTID_HORSE_SADDLE");
		case 247:
			return 1221327846;
		case 248:
			return 923162715;
		case 249:
			return 625423581;
		case 250:
			return 326668608;
		case 251:
			return 669530755;
		case 252:
			return 429759982;
		case 253:
			return -2111934838;
		case 254:
			return 1886178087;
		case 255:
			return 1587783573;
		case 256:
			return -279722001;
		case 257:
			return joaat("SLOTID_HORSE_SADDLEBAG");
		case 258:
			return 724026534;
		case 259:
			return joaat("SLOTID_HORSE_SEAT");
		case 260:
			return joaat("SLOTID_HORSE_SEX");
		case 261:
			return joaat("SLOTID_HORSE_SKIRT");
		case 262:
			return -1824203570;
		case 263:
			return -1654197998;
		case 264:
			return 798987653;
		case 265:
			return 976923323;
		case 266:
			return 1167442289;
		case 267:
			return joaat("SLOTID_HORSE_STIRRUP");
		case 268:
			return joaat("SLOTID_HORSE_TAIL");
		case 269:
			return -2015960939;
		case 270:
			return 1132377945;
		case 271:
			return 739936401;
		case 272:
			return 1201880974;
		case 273:
			return 819728896;
		case 274:
			return 1746010219;
		case 275:
			return 1433393959;
		case 276:
			return -1287636759;
		case 277:
			return -706917073;
		case 278:
			return -2166805;
		case 279:
			return -1391602433;
		case 280:
			return 1782075221;
		case 281:
			return 1282544585;
		case 282:
			return 1732594027;
		case 283:
			return -1058817012;
		case 284:
			return 1090546265;
		case 285:
			return -1783120823;
		case 286:
			return -1535745896;
		case 287:
			return -2086922122;
		case 288:
			return -1675198649;
		case 289:
			return 1189497682;
		case 290:
			return -1565675519;
		case 291:
			return -268973591;
		case 292:
			return 1039159916;
		case 293:
			return 1111816631;
		case 294:
			return 405591388;
		case 295:
			return 897456793;
		case 296:
			return 104187473;
		case 297:
			return 773808542;
		case 298:
			return -1120669954;
		case 299:
			return -1389278274;
		case 300:
			return 552979403;
		case 301:
			return -1571578784;
		case 302:
			return -708312114;
		case 303:
			return 688823508;
		case 304:
			return -1622147240;
		case 305:
			return 830292162;
		case 306:
			return 226276782;
		case 307:
			return -678416628;
		case 308:
			return -1098528034;
		case 309:
			return 316207340;
		case 310:
			return -1909200748;
		case 311:
			return -939652363;
		case 312:
			return joaat("SLOTID_PROGRESSION");
		case 313:
			return -375447933;
		case 314:
			return 537014919;
		case 315:
			return 1784584921;
		case 316:
			return -140655024;
		case 317:
			return 1084182731;
		case 318:
			return -1045471300;
		case 319:
			return 1617414719;
		case 320:
			return -787761753;
		case 321:
			return -490616606;
		case 322:
			return 1491346514;
		case 323:
			return -1360128126;
		case 324:
			return -1311702610;
		case 325:
			return -904250715;
		case 326:
			return 1034665895;
		case 327:
			return -101524555;
		case 328:
			return 1419152594;
		case 329:
			return -451359317;
		case 330:
			return -1915385310;
		case 331:
			return 1315162488;
		case 332:
			return -361152079;
		case 333:
			return -2041626192;
		case 334:
			return -2077812539;
		case 335:
			return -1371514637;
		case 336:
			return 1730017037;
		case 337:
			return 892816668;
		case 338:
			return -1994943603;
		case 339:
			return 603133554;
		case 340:
			return -30160144;
		case 341:
			return -1248299493;
		case 342:
			return 727393558;
		case 343:
			return 755611221;
		case 344:
			return -170255458;
		case 345:
			return 1011151573;
		case 346:
			return 1122339631;
		case 347:
			return 454815308;
		case 348:
			return 990701735;
		case 349:
			return -246340825;
		case 350:
			return -1410671073;
		case 351:
			return 1547608292;
		case 352:
			return -714132970;
		case 353:
			return 732290690;
		case 354:
			return 971340545;
			return -234132662;
			return -2143057988;
			return -993947465;
			return -486552269;
			return -1156317860;
			return 1229625803;
			return -388596167;
			return -1204639465;
			return -1384685096;
			return -2026728113;
			return -1228057307;
			return 1835126290;
			return 1890833594;
			return -751549960;
			return -1682270750;
			return -1839865333;
			return -1990383629;
			return 1712094016;
			return 1532953697;
			return 1620318083;
			return -307230331;
			return -1034549620;
			return -1293064293;
			return -1540142553;
			return -1769886012;
			return -1983081126;
			return -1106117124;
			return -1873108338;
			return -2097543219;
			return 155413195;
			return -1162387149;
			return 1728382685 /* GXTEntry: "Right" */;
			return -649335959 /* GXTEntry: "Left" */;
			return -1876502240;
			return -2107032155;
			return 1570861011;
			return 1075981185;
			return 960195961;
			return 1150460649;
			return 1689424794;
			return 619103418;
			return 1355448197;
			return 1681762005;
			return 1026887814;
			return 354352628;
			return 1519366642;
			return -82757515;
			return 386306655;
			return 1243962119;
			return 756214903;
			return -718417579;
			return -1445516411;
			return 1232060796;
			return -672392892;
			return 1465341584;
			return -427758369;
			return -735647142;
			return 1535838048;
			return -602272282;
			return 2051264661;
			return 487172188;
			return 282270687;
			return 1607708943;
			return 1686264939;
			return 314786149;
			return 1402841185;
			return 1099170772;
			return 2125676786;
			return -363896735;
			return -468790222;
			return -1779133048;
			return 1732537631;
			return 1755095401;
			return 835771095;
			return 1963317232;
			return 259627919;
			return 1299075397;
			return -1509094230;
			return 61132362;
			return 1549741908;
			return 288484254;
			return -1877032947;
			return -1395676456;
			return 1136146715;
			return 468034421;
			return 1079459546;
			return -140369351;
			return 1822341990;
			return 1219701681;
			return 1601295268;
			return -1692460667;
			return 1471419228;
			return 907446160;
			return -1126482585;
			return 1911050315;
			return -1343525599;
			return 1261891225;
			return 763162704;
			return 1335861197;
			return 526744654;
			return -1177461517;
			return -241638635;
			return 1024262875;
			return 853355463;
			return -337288221;
			return 361381308;
			return -1264898804;
			return -585289073;
			return 1423542233;
			return -948489286;
			return 2063859257;
			return -1652627327;
			return -1959697839;
			return -1532267859;
			return -1410062763;
			return -901428716;
			return -1628873469;
			return 144855571;
			return -617589883;
			return -1306457086;
			return 1713542477;
			return -305542365;
			return 1985390213;
			return -2145069367;
			return -1674390752;
			return -2117214398;
			return 1880805647;
			return -62390436;
			return 1815288415;
			return 196214097;
			return -201958220;
			return 244353594;
			return 302954672;
			return -1870144662;
			return 257892944;
			return -607182722;
			return -13254502;
			return 1400281261;
			return 1601515402;
			return -940704970;
			return -548371721;
			return -1022384613;
			return -357406394;
			return 1077068189;
			return -782241404;
			return 1669853467;
			return 1592019450;
			return 635273153;
			return -1559225678;
			return -266425508;
			return 1117400455;
			return 454332195;
			return -1328061889;
			return 561650932;
			return 256105670;
			return 1976779618;
			return -269095126;
			return 2145617267;
			return 1150213537;
			return 1598825281;
			return -712527121;
			return 1308553072;
			return 852866398;
			return -1794417972;
			return 293062146;
			return 95360094;
			return 807631773;
			return 1603958275;
			return 860052020;
			return -1885979781;
			return 746147970;
			return 666663006;
			return -2096186453;
			return 859409444;
			return -671427187;
			return 100192478;
			return 307812616;
			return 1670843243;
			return 899615863;
			return -298901850;
			return 1379186917;
			return -817206030;
			return -1150323212;
			return -247466821;
			return 427124242;
			return 855418120;
			return -777015093;
			return -722462870;
			return -937454324;
			return -339438116;
			return 2135639035;
			return 1254273765;
			return -792172668;
			return 1905987493;
			return 495693044;
			return -1693422950;
			return -205873076;
			return -2143114654;
			return -1420574021;
			return -1959250381;
			return -1088328663;
			return 513602003;
			return 359221401;
			return 1005272;
			return 1583044470;
			return 348853959;
			return 1045621973;
			return 1084576580;
			return 1651573695;
			return 1463321587;
			return -997505963;
			return -1649851713;
			return -386012962;
			return 1386101789;
			return 1227915917;
			return -218846335;
			return -352578118;
			return 1426626782;
			return -714081520;
			return 74547781;
			return 1271463052;
			return 1983140194;
			return 677262775;
			return -832337898;
			return -319249747;
			return -16955722;
			return -1535425646;
			return -1063641743;
			return -1041133401;
			return 1380479304;
			return 600890828;
			return 733333190;
			return 1843035435;
			return -304127320;
			return 122470371;
			return 0;
			return -1591664384;
			return -673000374;
			return -1150938404;
			return -1756997214;
			return -813824107;
			if (iParam1 >= 1)
			{
			}
			return StackVal;
			if (iParam1 >= 1)
			{
			}
			return StackVal;
		}
bool func_1530(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return __LIB_0__::func_800(iParam0, *uParam1, iParam2, bParam3) > 0;
}

bool func_1539(int iParam0, int iParam1, var uParam2)
{
	var uVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	if (!__LIB_0__::func_144(iParam1, 0))
	{
		return false;
	}
	if (__LIB_0__::func_356(iParam1) != joaat("CLOTHING"))
	{
		return false;
	}
	bVar1 = __LIB_0__::func_2() != -1;
	iVar2 = PED::_GET_METAPED_TYPE(iParam0);
	if (__LIB_0__::func_357(iParam1) == -999503751)
	{
		return true;
	}
	iVar4 = func_1645(iParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return false;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (__LIB_0__::func_192(iParam1, 866047851))
	{
		iVar5 = __LIB_0__::func_161(iVar4, 1);
		if (__LIB_0__::func_545(&(Global_1946804.f_1497)) >= 2 && Global_1946804.f_1497.f_1[iVar5 /*3*/] != iVar8)
		{
			*uParam2 = -265166256; /* GXTEntry: "You are wearing too many of this item. Remove some before equipping more." */
			return false;
		}
		bVar7 = true;
	}
	switch (iVar4)
	{
		case 1742327865:
			if (PED::_GET_PED_COMPONENT_CATEGORY(iVar8, iVar2, bVar1) == joaat("NECKTIES") && PED::_IS_METAPED_USING_COMPONENT(iParam0, -1455751347))
			{
				*uParam2 = 111371848; /* GXTEntry: "Your shirt does not support this type of neckwear." */
				return false;
			}
			iVar5 = 10;
			iVar3 = __LIB_0__::func_357(Global_1946804.f_1497.f_1[iVar5 /*3*/]);
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = -1938792745; /* GXTEntry: "Your neckwear does not allow for changing your collar." */
				return false;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (Global_1946804.f_1497.f_1[iVar5 /*3*/] != Global_1946804.f_57[iVar5 /*11*/] && __LIB_0__::func_192(iParam1, -1638171711))
			{
				*uParam2 = 187275271; /* GXTEntry: "Your chaps do not support this." */
				return false;
			}
			break;
		case 1900541263:
			iVar5 = 36;
			if (Global_1946804.f_1497.f_1[iVar5 /*3*/] == Global_1946804.f_57[iVar5 /*11*/])
			{
				*uParam2 = 2143522536;
				return false;
			}
			if (PED::_IS_METAPED_USING_COMPONENT(iParam0, -1968556728))
			{
				*uParam2 = -849690042; /* GXTEntry: "Your boots do not support having spurs." */
				return false;
			}
			break;
		case -1505978566:
			if (__LIB_1__::func_549(1868067663, &uVar0))
			{
				*uParam2 = 939463734; /* GXTEntry: "Item cannot be worn with coats." */
				return false;
			}
		case -1130865351:
		case -426430150:
		case 1788623170:
			if (!bVar7)
			{
			}
			else
			{
				iVar11 = PED::_GET_NUM_COMPONENTS_IN_PED(iParam0);
				iVar10 = __LIB_0__::func_546(iVar8, iVar4, iVar2, bVar1);
				iVar9 = __LIB_0__::func_546(Global_1946804.f_1497.f_1[iVar5 /*3*/], iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763; /* GXTEntry: "You are wearing too many items. Something must be removed to preview other items." +
    "" */
					return false;
				}
				Jump @776; //curOff = 583
				iVar3 = __LIB_0__::func_357(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != Global_1946804.f_57[iVar6 /*11*/] && __LIB_0__::func_192(Global_1946804.f_1497.f_1[iVar5 /*3*/], -1638171711))
				{
					*uParam2 = -357399012; /* GXTEntry: "Your boots do not support this." */
					return false;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (iParam1 != Global_1946804.f_57[iVar6 /*11*/] && __LIB_0__::func_218(Global_1946804.f_1497.f_1[iVar5 /*3*/]))
					{
						*uParam2 = -357399012; /* GXTEntry: "Your boots do not support this." */
						return false;
					}
					if (Global_1946804.f_1497.f_1[iVar5 /*3*/] == Global_1946804.f_57[iVar5 /*11*/])
					{
						*uParam2 = 2143522536;
						return false;
					}
				}
			}
			*uParam2 = 0;
			return true;
			default:
				break;
	}
}

bool func_1578(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	__LIB_0__::func_191();
	if (iParam2 == 39)
	{
		Var0 = { func_1503(iParam0, 1, 0) };
		iParam2 = __LIB_0__::func_161(__LIB_0__::func_709(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (__LIB_0__::func_192(iParam0, 866047851) && __LIB_0__::func_545(&(Global_1946804.f_1378)) >= 2)
	{
		return false;
	}
	if ((__LIB_0__::func_156(32768) && iParam2 == 10) && iParam0 != Global_1946804.f_57[iParam2 /*11*/])
	{
		__LIB_0__::func_968(__LIB_0__::func_158(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	__LIB_1__::func_40(iParam2);
	__LIB_1__::func_41(iParam2, iVar5);
	if (Global_1946804.f_1378.f_1[iParam2 /*3*/] != Global_1946804.f_57[iParam2 /*11*/] && Global_1946804.f_57[iParam2 /*11*/].f_1 > 1)
	{
		__LIB_0__::func_47(&(Global_1946804.f_1378.f_1[iParam2 /*3*/]), 4, 6);
		__LIB_0__::func_47(&(Global_1946804.f_1497.f_1[iParam2 /*3*/]), 4, 6);
	}
	__LIB_1__::func_455(&(Global_1946804.f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946804.f_1378.f_1[iParam2 /*3*/].f_1;
	}
	Global_1946804.f_1378.f_1[iParam2 /*3*/] = iParam0;
	Global_1946804.f_1378.f_1[iParam2 /*3*/].f_1 = __LIB_0__::func_969(iParam0, iParam2, iParam1, __LIB_0__::func_2() != -1);
	if (bParam4)
	{
		__LIB_1__::func_183(&(Global_1946804.f_1378), 1, 3);
	}
	else
	{
		__LIB_1__::func_183(&(Global_1946804.f_1378), 1, 0);
	}
	if (bParam3)
	{
		iVar6 = 0;
		while (iVar6 < Global_1946804.f_2589)
		{
			if (Global_1946804.f_2589.f_2[iVar6 /*2*/] >= 0 && Global_1946804.f_2589.f_2[iVar6 /*2*/] < 39)
			{
				Global_1946804.f_2456[Global_1946804.f_2589.f_2[iVar6 /*2*/] /*2*/] = 0;
				Global_1946804.f_2456[Global_1946804.f_2589.f_2[iVar6 /*2*/] /*2*/].f_1 = 0;
				__LIB_0__::func_550(__LIB_0__::func_158(Global_1946804.f_2589.f_2[iVar6 /*2*/], 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

bool func_1592(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!__LIB_0__::func_144(iParam0, 0))
	{
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam2))
	{
		return false;
	}
	if (func_1506(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return false;
	}
	if (!__LIB_0__::func_708(0))
	{
		return false;
	}
	if (!INVENTORY::_0xCB5D11F9508A928D(__LIB_0__::func_162(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

void func_1601(int iParam0, int iParam1)
{
	if (__LIB_0__::func_192(iParam1, 130796156))
	{
		func_2119(iParam1, 0);
	}
	else if (__LIB_0__::func_192(iParam1, 930141731))
	{
		func_2119(iParam1, 1);
		func_2120(iParam0);
	}
}

void func_1635()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_2137(0);
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"), false);
			func_2138();
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
	func_2137(1);
}

void func_1636()
{
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_412(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_1637()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_2140(0);
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
	func_2140(1);
}

void func_1638()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_1__::func_432(15000, 0, 0, 0, 1);
			func_2140(0);
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
	func_2140(1);
}

void func_1639()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_412(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_412(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_1642(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_1642(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
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

void func_1640()
{
	bool bVar0;
	struct<4> Var1;
	int iVar15;
	int iVar16;
	bVar0 = UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_CROSS_PROMOTION_REVOLVER"));
	if (!bVar0)
	{
		return;
	}
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_CROSS_PROMOTION_REVOLVER_REDEEMED")))
	{
		return;
	}
	Var1 = { __LIB_1__::func_605() };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
	{
		__LIB_0__::func_915(joaat("WEAPON_REVOLVER_DOUBLEACTION"));
		if (func_920(joaat("WEAPON_REVOLVER_DOUBLEACTION"), 0, 0, 0, 0, 0, 752097756, 0))
		{
			Var1 = { __LIB_1__::func_605() };
		}
	}
	if (INVENTORY::_0xB881CA836CC4B6D4(&Var1))
	{
		func_2145(joaat("COMPONENT_REVOLVER_DOUBLEACTION_GRIP_PEARL"), Var1, 1423542233);
		func_2145(joaat("COMPONENT_REVOLVER_DOUBLEACTION_BARREL_LONG"), Var1, -1264898804);
		func_2145(joaat("COMPONENT_SHORTARM_BARREL_MATERIAL_7"), Var1, 1592019450);
		func_2145(joaat("COMPONENT_SHORTARM_CYLINDER_MATERIAL_7"), Var1, 1117400455);
		func_2145(joaat("COMPONENT_SHORTARM_HAMMER_MATERIAL_7"), Var1, 1150213537);
		func_2145(joaat("COMPONENT_SHORTARM_SIGHT_MATERIAL_7"), Var1, 1598825281);
		func_2145(joaat("COMPONENT_SHORTARM_TRIGGER_MATERIAL_7"), Var1, -712527121);
		func_2145(joaat("COMPONENT_SHORTARM_FRAME_ENGRAVING_1"), Var1, 454332195);
		func_2145(joaat("COMPONENT_SHORTARM_FRAME_MATERIAL_7"), Var1, 256105670);
		func_2145(joaat("COMPONENT_SHORTARM_FRAME_ENGRAVING_MATERIAL_7"), Var1, -1328061889);
		func_2145(joaat("COMPONENT_SHORTARM_BARREL_ENGRAVING_1"), Var1, -782241404);
		func_2145(joaat("COMPONENT_SHORTARM_BARREL_ENGRAVING_MATERIAL_7"), Var1, 1669853467);
		func_2145(joaat("COMPONENT_SHORTARM_CYLINDER_ENGRAVING_1"), Var1, -1559225678);
		func_2145(joaat("COMPONENT_SHORTARM_CYLINDER_ENGRAVING_MATERIAL_7"), Var1, -266425508);
		if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1) && !__LIB_0__::func_91())
		{
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar15, false, 2, false);
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar16, false, 0, false);
			if (__LIB_0__::func_154(iVar16))
			{
				if (iVar16 != joaat("WEAPON_REVOLVER_DOUBLEACTION"))
				{
					if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar16))
					{
						if (__LIB_0__::func_293(24))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar16, true, 3, false, false);
						}
						WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_DOUBLEACTION"), true, 0, false, false);
					}
					else if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar16))
					{
						if ((__LIB_0__::func_293(24) && __LIB_0__::func_154(iVar15)) && iVar15 != joaat("WEAPON_REVOLVER_DOUBLEACTION"))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar15, true, 3, false, false);
						}
						WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_DOUBLEACTION"), true, 2, false, false);
					}
				}
			}
			else if (!__LIB_0__::func_154(iVar15))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_DOUBLEACTION"), true, 2, false, false);
			}
			else if (iVar15 != joaat("WEAPON_REVOLVER_DOUBLEACTION"))
			{
				if (__LIB_0__::func_293(24))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar15, true, 3, false, false);
				}
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_DOUBLEACTION"), true, 2, false, false);
			}
		}
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_CROSS_PROMOTION_REVOLVER_REDEEMED"), true);
	}
}

int func_1642(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			func_1642(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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
	else if (!func_2147(iParam0, iParam1, iParam3, bParam2, bParam4))
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
	__LIB_11__::func_837(iParam0, iParam1);
	return 1;
}

void func_1644(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	switch (__LIB_0__::func_357(iParam0))
	{
		case -2061583405:
			bVar0 = func_2149(iParam0, &(Global_1946804.f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_2149(iParam0, &(Global_1946804.f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_2149(iParam0, &(Global_1946804.f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_2149(iParam0, &(Global_1946804.f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_2149(iParam0, &(Global_1946804.f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_2149(iParam0, &(Global_1946804.f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		__LIB_0__::func_460();
	}
	if (bParam1)
	{
		__LIB_0__::func_719(0, 0);
	}
}

int func_1645(int iParam0)
{
	struct<5> Var0;
	Var0 = { func_1503(iParam0, 1, 0) };
	return __LIB_0__::func_709(Var0.f_4);
}

int func_1668(var uParam0, int iParam1, int iParam2, int iParam3)
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
	Var5 = { func_1503(iVar0, 0, 1) };
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
	iVar11 = (func_2168(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_952(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_412(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	__LIB_1__::func_432(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

int func_1864()
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!__LIB_1__::func_516())
	{
		return 0;
	}
	if (!__LIB_1__::func_610(&iVar0))
	{
		return 0;
	}
	if (!__LIB_3__::func_907(iVar0))
	{
		return 0;
	}
	iVar1 = func_1645(iVar0);
	if (iVar1 == -358215195)
	{
		return 0;
	}
	__LIB_1__::func_683(&iVar2, 1);
	return __LIB_3__::func_630(iVar0, iVar2);
}

int func_1865()
{
	int iVar0;
	int iVar1;
	if (!__LIB_1__::func_610(&iVar0))
	{
		return 0;
	}
	PED::_0x2208438012482A1A(Global_35, false, false);
	PED::_0xC494C76A34266E82(Global_35, 13);
	iVar1 = func_1645(iVar0);
	if (iVar1 == -358215195)
	{
		return 0;
	}
	func_2265(Global_1946804.f_57[__LIB_0__::func_161(iVar1, 1) /*11*/], 8);
	__LIB_1__::func_452(26, 0, 0, 0, 0);
	return 1;
}

void func_1885()
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
			func_626(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		}
		else
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		}
		return;
	}
	iVar0 = func_2269(6291456, 0);
	if (__LIB_0__::func_154(iVar0))
	{
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, true))
		{
			func_626(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		}
		else
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		}
	}
}

int func_2005(int iParam0)
{
	if (iParam0 == 1)
	{
		return Local_14.f_12;
	}
	if (iParam0 == 2)
	{
		return Local_14.f_23;
	}
	if (iParam0 == 3)
	{
		return Local_14.f_24;
	}
	if (iParam0 == 4)
	{
		return Local_14.f_25;
	}
	if (iParam0 == 5)
	{
		return Local_14.f_26;
	}
	return Local_14.f_12;
}

int func_2019(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
			func_2019(iParam0, iParam1, __LIB_1__::func_614(iParam1, 0, 0), bParam3, iParam4);
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

bool func_2034(int iParam0, var uParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	bool bVar28;
	int iVar29;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	Var0 = { func_1503(iParam0, 0, 1) };
	iVar5 = 1728382685; /* GXTEntry: "Right" */
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_1529((386 + iVar29), 1);
		if (func_1530(iParam0, &Var0, iVar5, 0))
		{
			bVar28 = __LIB_1__::func_429(iParam0, &Var6, iVar5);
			if ((bParam2 && bVar28) || !bVar28)
			{
				*uParam1 = iVar5;
				return true;
			}
		}
		iVar29++;
	}
	return false;
}

void func_2071()
{
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS")))
	{
		func_2350();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS"), true);
		__LIB_0__::func_915(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"));
		func_966(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), true, 2, false, false);
		__LIB_0__::func_915(joaat("WEAPON_MELEE_KNIFE_JOHN"));
		func_966(joaat("WEAPON_MELEE_KNIFE_JOHN"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_MELEE_KNIFE_JOHN"), true, 4, false, false);
	}
}

void func_2119(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = __LIB_1__::func_134(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_915(50);
			}
			else
			{
				func_915(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_915(51);
			}
			else
			{
				func_915(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!__LIB_1__::func_770(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					__LIB_0__::func_360();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				__LIB_0__::func_360();
			}
			break;
		case 3:
			func_915(24);
			if (bParam1)
			{
				if (!__LIB_1__::func_770(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					__LIB_0__::func_360();
				}
			}
			break;
	}
}

void func_2120(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (__LIB_1__::func_771(0))
			{
				iVar0++;
			}
			if (__LIB_1__::func_771(2))
			{
				iVar0++;
			}
			if (__LIB_1__::func_771(4))
			{
				iVar0++;
			}
			if (!__LIB_0__::func_605(16))
			{
				if (iVar0 == 1)
				{
					func_2371();
					__LIB_1__::func_240(456, 1);
					__LIB_0__::func_606(16);
				}
			}
			if (!__LIB_0__::func_605(32))
			{
				if (iVar0 >= 3)
				{
					func_2371();
					__LIB_1__::func_240(456, 1);
					__LIB_0__::func_606(32);
				}
			}
			break;
		case 1:
		case 3:
		case 7:
			if (__LIB_1__::func_771(1))
			{
				iVar0++;
			}
			if (__LIB_1__::func_771(3))
			{
				iVar0++;
			}
			if (__LIB_1__::func_771(7))
			{
				iVar0++;
			}
			if (!__LIB_0__::func_605(1))
			{
				if (iVar0 == 1)
				{
					func_2373();
					__LIB_1__::func_240(457, 1);
					__LIB_0__::func_606(1);
				}
			}
			if (!__LIB_0__::func_605(2))
			{
				if (iVar0 >= 3)
				{
					func_2373();
					__LIB_1__::func_240(457, 1);
					__LIB_0__::func_606(2);
				}
			}
			break;
		case 5:
		case 6:
		case 8:
			if (__LIB_1__::func_771(5))
			{
				iVar0++;
			}
			if (__LIB_1__::func_771(6))
			{
				iVar0++;
			}
			if (__LIB_1__::func_771(8))
			{
				iVar0++;
			}
			if (!__LIB_0__::func_605(4))
			{
				if (iVar0 == 1)
				{
					func_2374();
					__LIB_1__::func_240(455, 1);
					__LIB_0__::func_606(4);
				}
			}
			if (!__LIB_0__::func_605(8))
			{
				if (iVar0 >= 3)
				{
					func_2374();
					__LIB_1__::func_240(455, 1);
					__LIB_0__::func_606(8);
				}
			}
			break;
	}
}

void func_2137(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (bParam0)
	{
		func_412(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_412(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_412(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_2138();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_2384(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_1005(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_1642(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_2390(Var0);
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
				func_2400(iVar6, iVar10);
			}
			iVar6++;
		}
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), false);
	}
}

int func_2138()
{
	if (!func_2401(-1898635967, __LIB_1__::func_124(), 1))
	{
		return 0;
	}
	if (__LIB_0__::func_26())
	{
		if (!func_2401(146323340, __LIB_1__::func_124(), 0))
		{
			return 0;
		}
	}
	return 1;
}

void func_2140(bool bParam0)
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
		func_412(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_412(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_412(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_412(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_412(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_412(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_412(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_412(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_412(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_412(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_412(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_1642(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_1642(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_1642(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_1642(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_1642(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_1642(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_1642(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_1642(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_1642(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_1642(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_1642(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
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
				func_2400(iVar0, iVar4);
			}
			iVar0++;
		}
		func_2138();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), false);
	}
}

void func_2145(int iParam0, struct<4> Param1, int iParam5)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<4> Var19;
	Var0 = { Param1 };
	Var0.f_4 = iParam5;
	Var5.f_9 = -1591664384;
	if (__LIB_0__::func_814(Param1, iParam5, &Var5, 0))
	{
		__LIB_0__::func_939(Var5.f_4, &Var5, &Var0, -1, -142743235, 1, 0);
	}
	func_1592(iParam0, &Var19, &Var0, 1, 752097756, 0);
	__LIB_1__::func_556(Var19, 1);
}

bool func_2147(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	struct<4> Var5;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_1503(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return __LIB_0__::func_975(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { __LIB_0__::func_429(iParam0, Var0, Var0.f_4, bParam4) };
	return __LIB_0__::func_939(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

int func_2149(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	iVar1 = iParam0;
	if (!__LIB_0__::func_554(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804.f_2657.f_19 == 1)
	{
		Global_1946804.f_2657.f_19 = 0;
		*uParam1 = 0;
		if (__LIB_0__::func_357(iParam0) != -999503751)
		{
			__LIB_1__::func_459(&(Global_1946804.f_2657.f_26), 0, Global_1946804.f_2657.f_19);
		}
		Global_1946804.f_2657[0] = 0;
		return 1;
	}
	Global_1946804.f_2657.f_19 = (Global_1946804.f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804.f_2657[iVar0] = Global_1946804.f_2657[Global_1946804.f_2657.f_19];
	Global_1946804.f_2657[Global_1946804.f_2657.f_19] = 0;
	if (__LIB_0__::func_357(iParam0) != -999503751)
	{
		__LIB_1__::func_459(&(Global_1946804.f_2657.f_26), iVar0, Global_1946804.f_2657.f_19);
	}
	func_2409(iParam0, 1);
	return 1;
}

int func_2168(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
							iVar49 = (iVar49 + func_2168(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_2168(iVar63, -915411861, 1, 0, 0));
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

void func_2265(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	iVar0 = func_1645(iParam0);
	iVar1 = __LIB_0__::func_161(iVar0, 1);
	if (iVar1 == 39)
	{
		return;
	}
	if (__LIB_0__::func_779(iParam0) && __LIB_6__::func_107(iParam0))
	{
		iParam1 |= 64;
	}
	if (((iVar0 == 1108822547 && __LIB_0__::func_156(32768)) || Global_1946804.f_1497.f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/]) && iParam0 != Global_1946804.f_1497.f_1[iVar1 /*3*/])
	{
		if (__LIB_0__::func_779(Global_1946804.f_1497.f_1[iVar1 /*3*/]) && __LIB_6__::func_107(Global_1946804.f_1497.f_1[iVar1 /*3*/]))
		{
			iParam1 |= 32;
		}
		if (Global_1946804.f_57[iVar1 /*11*/].f_1 > 1)
		{
			iParam1 |= 16;
		}
		iVar2 = 0;
		switch (__LIB_0__::func_357(iParam0))
		{
			case 81053684:
				if (__LIB_1__::func_549(-525676072, &uVar3))
				{
					iVar2 = __LIB_0__::func_161(__LIB_0__::func_997(-525676072), 1);
					if (iVar2 == 39)
					{
					}
					else
					{
						Global_1946804.f_2377[iVar2 /*2*/] = Global_1946804.f_57[iVar2 /*11*/];
						Jump @434; //curOff = 294
						if (__LIB_0__::func_156(32768))
						{
							__LIB_0__::func_968(__LIB_0__::func_158(iVar1, 1));
						}
						if (__LIB_0__::func_156(32768) || (__LIB_1__::func_549(-2061583405, &iVar4) && !__LIB_6__::func_107(iVar4)))
						{
							PED::KNOCK_OFF_PED_PROP(Global_35, false, true, false, true);
						}
						if (__LIB_1__::func_549(81053684, &iVar4))
						{
							iVar2 = __LIB_0__::func_161(__LIB_0__::func_997(81053684), 1);
							if (iVar2 == 39)
							{
							}
							else
							{
								Global_1946804.f_2377[iVar2 /*2*/] = Global_1946804.f_57[iVar2 /*11*/];
							}
							Global_1946804.f_2377[iVar1 /*2*/] = iParam0;
							__LIB_3__::func_16(iVar0, iParam1, 6);
						}
					}
				}
				default:
					break;
		}
	}
}

int func_2269(int iParam0, int iParam1)
{
	var uVar0;
	return func_2453(&uVar0, iParam0, iParam1);
}

void func_2350()
{
	var uVar0;
	struct<4> Var30;
	if (!INVENTORY::_0x7C7E4AB748EA3B07())
	{
		return;
	}
	uVar0 = 29;
	__LIB_3__::func_150(Global_35, &uVar0);
	Var30 = { __LIB_0__::func_949(0) };
	INVENTORY::_0xE36D4A38D28D9CFB(0);
	INVENTORY::_0xC04F47D488EF9EBA(5, 1, &Var30, 0);
	INVENTORY::_0x5D6182F3BCE1333B(5, -142743235);
	func_2486(0);
	func_2487(7);
	func_2488(joaat("KIT_BANDANA"), 1, 1, 0);
	if (__LIB_0__::func_241() == 1160113249)
	{
		func_2488(joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"), 1, 1, 1);
		func_2488(-361635024 /* GXTEntry: "The Cowboy" */, 1, 1, 1);
	}
	__LIB_0__::func_841(Global_35, &uVar0);
}

void func_2371()
{
	int iVar0;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_966(joaat("UPGRADE_STAMINA_TANK_1"), 1, 752097756);
	iVar0 = __LIB_0__::func_963(1);
	__LIB_1__::func_132(1, iVar0, 0);
}

void func_2373()
{
	int iVar0;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_966(joaat("UPGRADE_DEADEYE_TANK_1"), 1, 752097756);
	iVar0 = __LIB_0__::func_963(2);
	__LIB_1__::func_132(2, iVar0, 0);
}

void func_2374()
{
	int iVar0;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_966(joaat("UPGRADE_HEALTH_TANK_1"), 1, 752097756);
	iVar0 = __LIB_0__::func_963(0);
	__LIB_1__::func_132(0, iVar0, 0);
}

void func_2384(int iParam0)
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
	func_1642(iParam0, 1, 1, -142743235, 1);
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
	func_1644(iParam0, 1, 1);
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		func_1642(uVar18[iVar36], 1, 1, -142743235, 1);
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
		func_1644(uVar18[iVar36], 1, 1);
		iVar0[iVar36] = __LIB_0__::func_161(func_1645(uVar18[iVar36]), 1);
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
				func_1644(__LIB_0__::func_998(iVar35), 1, 1);
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

void func_2390(struct<6> Param0)
{
	if (!func_2523(Param0.f_4, 1))
	{
	}
	if (!func_2523(Param0, 1))
	{
	}
	if (!func_2523(Param0.f_2, 1))
	{
	}
	if (!func_2523(Param0.f_5, 1))
	{
	}
	if (!func_2523(Param0.f_3, 1))
	{
	}
	if (!func_2523(Param0.f_1, 1))
	{
	}
}

int func_2400(int iParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;
	var uVar6;
	if (!__LIB_0__::func_144(iParam1, 0))
	{
		return 0;
	}
	if (!__LIB_0__::func_831(iParam1))
	{
		return 0;
	}
	if (__LIB_1__::func_127(iParam0))
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_577(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { __LIB_0__::func_949(0) };
	Var1.f_4 = iVar0;
	if (!func_1592(iParam1, &uVar6, &Var1, 1, 752097756, 0))
	{
		return 0;
	}
	return 1;
}

bool func_2401(int iParam0, struct<4> Param1, bool bParam5)
{
	int iVar0;
	var uVar1;
	struct<2> Var3;
	struct<4> Var7;
	int iVar11;
	struct<5> Var12;
	if (iParam0 == 0)
	{
		return false;
	}
	uVar1 = 1;
	iVar11 = ITEMDATABASE::_ITEM_DATABASE_GET_BUNDLE_ITEM_COUNT(iParam0, &uVar1);
	Var12 = { Param1 };
	iVar0 = 0;
	while (iVar0 < iVar11)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_BUNDLE_ITEM_INFO(iParam0, &uVar1, iVar0, &Var3))
		{
			if (__LIB_0__::func_144(Var3, 0))
			{
				Var12.f_4 = Var3.f_1;
				if (__LIB_0__::func_800(Var3, Param1, Var12.f_4, 0) > 0)
				{
				}
				else
				{
					__LIB_0__::func_610(&Var7);
					if (func_1592(Var3, &Var7, &Var12, 1, 752097756, 1))
					{
						if (bParam5)
						{
							__LIB_1__::func_556(Var7, 1);
						}
					}
				}
			}
		}
		iVar0++;
	}
	return true;
}

bool func_2409(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	Var0 = { func_1503(iParam0, 0, 0) };
	Var5 = { __LIB_0__::func_429(iParam0, Var0, Var0.f_4, 0) };
	if (__LIB_0__::func_800(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return false;
	}
	INVENTORY::_0x9A113C660AEA3832(__LIB_0__::func_162(0), &Var5, iParam1);
	return true;
}

int func_2453(var uParam0, int iParam1, int iParam2)
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
		return func_2453(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

void func_2486(bool bParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 17;
	while (iVar0 >= 0)
	{
		iVar1 = Global_1946804.f_2657[iVar0];
		if (__LIB_0__::func_144(iVar1, 0))
		{
			func_1644(iVar1, 0, bParam0);
		}
		Global_1946804.f_2657[iVar0] = 0;
		iVar0 = (iVar0 + -1);
	}
	Global_1946804.f_2657.f_20 = 0;
	Global_1946804.f_2657.f_21 = 0;
	Global_1946804.f_2657.f_22 = 0;
	Global_1946804.f_2657.f_23 = 0;
	Global_1946804.f_2657.f_24 = 0;
	Global_1946804.f_2657.f_25 = 0;
	Global_1946804.f_2657.f_19 = 0;
	Global_1946804.f_2657.f_26.f_6 = 0;
}

void func_2487(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	Global_1946804.f_2657.f_26.f_2 = 3;
	Global_1946804.f_2657.f_26.f_1 = 3;
	Global_1946804.f_2657.f_26 = 3;
	if (__LIB_0__::func_2() == -1)
	{
		__LIB_1__::func_94(352481484);
		iVar0 = 0;
		while (iVar0 < Global_26796.f_19)
		{
			Global_1946804.f_2657[iVar0] = Global_26796[iVar0];
			iVar0++;
		}
		Global_1946804.f_2657.f_20 = Global_26796.f_20;
		Global_1946804.f_2657.f_21 = Global_26796.f_21;
		Global_1946804.f_2657.f_22 = Global_26796.f_22;
		Global_1946804.f_2657.f_23 = Global_26796.f_23;
		Global_1946804.f_2657.f_24 = Global_26796.f_24;
		Global_1946804.f_2657.f_25 = Global_26796.f_25;
		Global_1946804.f_2657.f_19 = Global_26796.f_19;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_36638.f_45.f_350.f_19)
		{
			Global_1946804.f_2657[iVar0] = Global_36638.f_45.f_350[iVar0];
			iVar0++;
		}
		Global_1946804.f_2657.f_20 = Global_36638.f_45.f_350.f_20;
		Global_1946804.f_2657.f_21 = Global_36638.f_45.f_350.f_21;
		Global_1946804.f_2657.f_22 = Global_36638.f_45.f_350.f_22;
		Global_1946804.f_2657.f_23 = Global_36638.f_45.f_350.f_23;
		Global_1946804.f_2657.f_24 = Global_36638.f_45.f_350.f_24;
		Global_1946804.f_2657.f_25 = Global_36638.f_45.f_350.f_25;
		Global_1946804.f_2657.f_19 = Global_36638.f_45.f_350.f_19;
	}
	iVar0 = 0;
	while (iVar0 < Global_1946804.f_2657.f_19)
	{
		iVar2 = Global_1946804.f_2657[iVar0];
		if (__LIB_0__::func_357(iVar2) != -999503751)
		{
			func_2592(&(Global_1946804.f_2657.f_26.f_26), iVar2, iVar0);
		}
		if (func_2409(iVar2, 0))
		{
			func_1354(iVar2, Global_1946804.f_1497.f_1[iVar1 /*3*/] == Global_1946804.f_2657[iVar0]);
		}
		iVar0++;
	}
}

void func_2488(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	bool bVar1;
	if (!__LIB_0__::func_673(iParam0))
	{
		return;
	}
	iVar0 = __LIB_0__::func_357(iParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case -2061583405:
			bVar1 = func_2594(iParam0, &(Global_1946804.f_2657.f_21), Global_1946804.f_2657.f_26.f_1, bParam1);
			break;
		case 81053684:
			bVar1 = func_2594(iParam0, &(Global_1946804.f_2657.f_23), 1, bParam1);
			break;
		case -999503751:
			bVar1 = func_2594(iParam0, &(Global_1946804.f_2657.f_20), Global_1946804.f_2657.f_26, bParam1);
			break;
		case -525676072:
			bVar1 = func_2594(iParam0, &(Global_1946804.f_2657.f_22), Global_1946804.f_2657.f_26.f_2, bParam1);
			break;
		case -1719060085:
			bVar1 = func_2594(iParam0, &(Global_1946804.f_2657.f_24), 1, bParam1);
			break;
		case -413129408:
			bVar1 = func_2594(iParam0, &(Global_1946804.f_2657.f_24), 1, bParam1);
			break;
	}
	if (!bVar1)
	{
		return;
	}
	if (iParam0 == __LIB_0__::func_856(0))
	{
		func_2596(iParam0, 1);
		if (__LIB_0__::func_241() == 1160113249)
		{
			func_2596(__LIB_0__::func_856(-2125499975), 0);
		}
		else
		{
			func_2596(__LIB_0__::func_856(1160113249), 0);
		}
	}
	__LIB_0__::func_460();
	if (__LIB_1__::func_18(iVar0))
	{
		INVENTORY::_0x766315A564594401(__LIB_0__::func_162(0), iParam0, 0);
	}
	func_1354(iParam0, bParam3);
	if (bParam2)
	{
		__LIB_0__::func_719(0, 0);
	}
}

bool func_2523(int iParam0, int iParam1)
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
	if (!func_2621(iParam0, 856287005, &iVar9, &uVar5, &uVar0, 1, 0))
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
				if (func_2523(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_2523(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_2523(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_2523(iVar21, 1))
				{
				}
			}
		}
		func_2625();
		return true;
	}
	return false;
}

void func_2592(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 >= 13)
	{
		return;
	}
	__LIB_0__::func_691(iParam2, *uParam0);
	func_2649(&(uParam0->f_1[*uParam0 /*5*/]), iParam1, -1, 1, 0);
	*uParam0++;
}

int func_2594(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;
	iVar1 = iParam0;
	if (Global_1946804.f_2657.f_19 >= 18)
	{
		return 0;
	}
	if (*uParam1 >= iParam2)
	{
		return 0;
	}
	if (__LIB_0__::func_554(iVar1, &uVar0))
	{
		return 0;
	}
	if (bParam3 && !func_2409(iParam0, 0))
	{
		return 0;
	}
	Global_1946804.f_2657[Global_1946804.f_2657.f_19] = iVar1;
	if (__LIB_0__::func_357(iParam0) != -999503751)
	{
		func_2592(&(Global_1946804.f_2657.f_26.f_26), iParam0, Global_1946804.f_2657.f_19);
	}
	Global_1946804.f_2657.f_19++;
	*uParam1++;
	return 1;
}

int func_2596(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	Var0 = { func_1503(iParam0, 0, 0) };
	Var5 = { __LIB_0__::func_429(iParam0, Var0, Var0.f_4, 0) };
	if (__LIB_0__::func_800(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	INVENTORY::_0x0349404A22736740(iParam1, __LIB_0__::func_162(0), &Var5);
	return 1;
}

bool func_2621(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar5;
	struct<10> Var6;
	struct<4> Var20;
	int iVar34;
	int iVar35;
	int iVar36;
	struct<5> Var37;
	struct<4> Var42;
	if (iParam0 != 0 && iParam1 != 0)
	{
		iVar1 = __LIB_0__::func_357(iParam1);
		iVar5 = __LIB_0__::func_857(iParam1);
		iVar0 = 0;
		while (iVar0 < iVar5)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar1, iVar0, &uVar2))
			{
				if (ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iVar1, uVar2))
				{
					*uParam4 = { func_1503(iParam1, 0, 0) };
					if (iParam6 != 0)
					{
						uParam4->f_4 = iParam6;
					}
					*uParam3 = { __LIB_0__::func_429(iParam1, *uParam4, uParam4->f_4, 0) };
					*iParam2 = uVar2;
					return true;
				}
			}
			iVar0++;
		}
		if (bParam5)
		{
			Var6.f_9 = -1591664384;
			Var20.f_9 = -1591664384;
			iVar34 = __LIB_0__::func_162(0);
			Var37 = { func_1503(iParam1, 0, 0) };
			if (iParam6 != 0)
			{
				Var37.f_4 = iParam6;
			}
			Var42 = { __LIB_0__::func_429(iParam1, Var37, Var37.f_4, 0) };
			iVar35 = INVENTORY::_0xE843D21A8E2498AA(iVar34, &Var42);
			iVar36 = 0;
			while (iVar36 < iVar35)
			{
				if (INVENTORY::_0xCD9A485F2B383B44(iVar34, &Var42, iVar36, &Var6))
				{
					iVar1 = __LIB_0__::func_357(Var6.f_4);
					iVar5 = ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_COUNT(iVar1);
					iVar0 = 0;
					while (iVar0 < iVar5)
					{
						if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar1, iVar0, &uVar2))
						{
							if (ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iVar1, uVar2))
							{
								if (__LIB_0__::func_814(Var42, Var6.f_9, &Var20, 0))
								{
									uParam4->f_4 = Var6.f_9;
									*uParam4 = { Var6.f_5 };
									*uParam3 = { Var20 };
									*iParam2 = uVar2;
									return true;
								}
							}
						}
						iVar0++;
					}
				}
				iVar36++;
			}
		}
	}
	*iParam2 = 0;
	return false;
}

int func_2625()
{
	struct<5> Var0;
	struct<4> Var5;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar14;
	bool bVar15;
	struct<4> Var16;
	int iVar20;
	int iVar21;
	Var0 = { func_1503(856287005, 0, 0) };
	Var5 = { __LIB_0__::func_429(856287005, Var0, Var0.f_4, 0) };
	iVar10 = __LIB_0__::func_357(856287005);
	if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar10, 0, &iVar11))
	{
		iVar14 = __LIB_1__::func_81(Var5, joaat("SLOTID_HORSE_SADDLE"), 0);
	}
	if (!__LIB_0__::func_144(iVar14, 0))
	{
		return 0;
	}
	bVar15 = false;
	iVar20 = __LIB_0__::func_857(856287005);
	iVar9 = 0;
	while (iVar9 < iVar20)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar10, iVar9, &iVar11))
		{
			bVar15 = false;
			iVar21 = __LIB_1__::func_81(Var5, iVar11, 0);
			if (!__LIB_0__::func_144(iVar21, 0))
			{
				if (iVar11 == joaat("SLOTID_HORSE_HORN"))
				{
					if (__LIB_0__::func_848(iVar14) || __LIB_0__::func_847(iVar14))
					{
					}
					else
					{
						Jump @219; //curOff = 194
						if (iVar11 == joaat("SLOTID_HORSE_STIRRUP"))
						{
							if (__LIB_0__::func_848(iVar14))
							{
							}
							else
							{
								bVar15 = true;
								Jump @259; //curOff = 222
								if (iVar11 == joaat("SLOTID_HORSE_BLANKET"))
								{
									if (!__LIB_0__::func_848(iVar14) && __LIB_0__::func_688(iVar21))
									{
										bVar15 = true;
									}
								}
								if (bVar15)
								{
									if (__LIB_1__::func_419(iVar11, &Var16, 1))
									{
										if (!__LIB_1__::func_556(Var16, 1))
										{
										}
									}
								}
							}
							iVar9++;
							return 1;
						}
					}
				}
			}
		}
	}
}

void func_2649(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (PED::_0x93FFD92F05EC32FD(uParam0->f_3.f_1))
	{
		__LIB_1__::func_13(uParam0);
	}
	if (iParam2 == -1)
	{
		uParam0->f_1 = __LIB_0__::func_161(func_1645(iParam1), 1);
		if (uParam0->f_1 == -1)
		{
		}
	}
	else
	{
		uParam0->f_1 = iParam2;
	}
	uParam0->f_2 = iParam4;
	*uParam0 = iParam1;
	uParam0->f_3 = 0;
	if (bParam3)
	{
		__LIB_1__::func_192(uParam0);
	}
}

