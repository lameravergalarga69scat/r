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
	char* sLocal_34 = NULL;
	char[] cLocal_35[8] = 0;
	char* sLocal_36 = NULL;
	char* sLocal_37 = NULL;
	char* sLocal_38 = NULL;
	char* sLocal_39 = NULL;
	char* sLocal_40 = NULL;
	char* sLocal_41 = NULL;
	char* sLocal_42 = NULL;
	char* sLocal_43 = NULL;
	char* sLocal_44 = NULL;
	char* sLocal_45 = NULL;
	char* sLocal_46 = NULL;
	char* sLocal_47 = NULL;
	char* sLocal_48 = NULL;
	char* sLocal_49 = NULL;
	char* sLocal_50 = NULL;
	char* sLocal_51 = NULL;
	char* sLocal_52 = NULL;
	char* sLocal_53 = NULL;
	char* sLocal_54 = NULL;
	char* sLocal_55 = NULL;
	char* sLocal_56 = NULL;
	char* sLocal_57 = NULL;
	char* sLocal_58 = NULL;
	vector3 vLocal_59 = { 0f, 0f, 0f };
	vector3 vLocal_62 = { 0f, 0f, 0f };
	vector3 vLocal_65 = { 0f, 0f, 0f };
	vector3 vLocal_68 = { 0f, 0f, 0f };
	vector3 vLocal_71 = { 0f, 0f, 0f };
	vector3 vLocal_74 = { 0f, 0f, 0f };
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
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_160 = 0;
	int iLocal_161 = 0;
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
	int iLocal_173[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	struct<4> Local_188[6];
	struct<11> Local_213[3];
	struct<5> Local_247 = { 0, 2, 0, 0, 0 } ;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	struct<9> Local_258 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
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
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	int iLocal_293 = 0;
	bool bLocal_294 = false;
	int iLocal_295[3] = { 0, 0, 0 };
	bool bLocal_299 = false;
	bool bLocal_300 = false;
	float fLocal_301 = 0f;
	int iLocal_302 = 0;
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	int iLocal_307 = 0;
	int iLocal_308 = 0;
	int iLocal_309 = 0;
	int iLocal_310 = 0;
	int iLocal_311 = 0;
	int iLocal_312 = 0;
	int iLocal_313 = 0;
	int iLocal_314 = 0;
	int iLocal_315 = 0;
	int iLocal_316 = 0;
	int iLocal_317 = 0;
	int iLocal_318 = 0;
	int iLocal_319 = 0;
	int iLocal_320 = 0;
	int iLocal_321 = 0;
	int iLocal_322 = 0;
	int iLocal_323 = 0;
	int iLocal_324 = 0;
	int iLocal_325 = 0;
	int iLocal_326 = 0;
	int iLocal_327 = 0;
	int iLocal_328 = 0;
	int iLocal_329 = 0;
	int iLocal_330 = 0;
	vector3 vLocal_331 = { 0f, 0f, 0f };
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 24;
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
	struct<8> Local_438[4];
	int iLocal_471 = 0;
	int iLocal_472 = 0;
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
	struct<17> Local_488[3];
	struct<17> Local_540[9];
	struct<17> Local_694 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<9> Local_711 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	int iLocal_728 = 0;
	int iLocal_729 = 0;
	int iLocal_730 = 0;
	int iLocal_731 = 0;
	int iLocal_732 = 0;
	int iLocal_733 = 0;
	int iLocal_734 = 0;
	int iLocal_735 = 0;
	float fLocal_736 = 0f;
	int iLocal_737 = 0;
	char* sLocal_738 = NULL;
	int iLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	int iLocal_746 = 0;
	int iLocal_747 = 0;
	int iLocal_748 = 0;
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
	vector3 vLocal_761 = { 0f, 0f, 0f };
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
	vector3 vLocal_785 = { 0f, 0f, 0f };
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	struct<17> Local_797[1];
	int iLocal_815 = 0;
	var uLocal_816 = -1;
	var uLocal_817 = 0;
	var uLocal_818 = -1;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = -1;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = 1073741824;
	var uLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = 0;
	var uLocal_831 = 1;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	float fLocal_836 = 0f;
	vector3 vLocal_837 = { 0f, 0f, 0f };
	vector3 vLocal_840 = { 0f, 0f, 0f };
	vector3 vLocal_843 = { 0f, 0f, 0f };
	vector3 vLocal_846 = { 0f, 0f, 0f };
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
	int iLocal_865 = 0;
	int iLocal_866 = 0;
	int iLocal_867 = 0;
	int iLocal_868 = 0;
	int iLocal_869 = 0;
	int iLocal_870 = 0;
	int iLocal_871 = 0;
	struct<22> Local_872 = { 0, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 1040187392, 1040187392, -1, 0, 0 } ;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	var uLocal_898 = -1082130432;
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
	int iLocal_910 = 0;
	char* sLocal_911[9] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	bool bLocal_921 = false;
	int iLocal_922 = 0;
	int iLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = 0;
	var uLocal_928 = 0;
	var uLocal_929 = 0;
	vector3 vLocal_930 = { 0f, 0f, 0f };
	vector3 vLocal_933 = { 0f, 0f, 0f };
	vector3 vLocal_936 = { 0f, 0f, 0f };
	vector3 vLocal_939 = { 0f, 0f, 0f };
	int iLocal_942 = 0;
	int iLocal_943 = 0;
	int iLocal_944 = 0;
	int iLocal_945 = 0;
	char* sLocal_946[9] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	char* sLocal_956[7] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	char* sLocal_964[5] = { NULL, NULL, NULL, NULL, NULL };
	char* sLocal_970[9] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	char* sLocal_980[3] = { NULL, NULL, NULL };
	char* sLocal_984[14] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_999 = 0;
	int iLocal_1000 = 0;
	int iLocal_1001 = 0;
	int iLocal_1002 = 0;
	int iLocal_1003 = 0;
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
	int iLocal_1022 = 0;
	int iLocal_1023 = 0;
	int iLocal_1024 = 0;
	int iLocal_1025 = 0;
	int iLocal_1026 = 0;
	int iLocal_1027 = 0;
	int iLocal_1028 = 0;
	int iLocal_1029 = 0;
	struct<4> Local_1030[4];
	int iLocal_1047 = 0;
	int iLocal_1048 = 0;
	var uLocal_1049 = 0;
	var uLocal_1050 = 0;
	int iLocal_1051 = 0;
	int iLocal_1052 = 0;
	struct<5> Local_1053 = { 0, 0, 0, 0, 0 } ;
	struct<5> Local_1058 = { 0, 0, 0, 0, 0 } ;
	struct<2> Local_1063 = { 0, 0 } ;
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
	char* sLocal_1083[11] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	char* sLocal_1095[3] = { NULL, NULL, NULL };
	bool bLocal_1099 = false;
	bool bLocal_1100 = false;
	int iLocal_1101 = 0;
	float fLocal_1102 = 0f;
	float fLocal_1103 = 0f;
	float fLocal_1104 = 0f;
	float fLocal_1105 = 0f;
	float fLocal_1106 = 0f;
	float fLocal_1107 = 0f;
	float fLocal_1108 = 0f;
	vector3 vLocal_1109 = { 0f, 0f, 0f };
	vector3 vLocal_1112 = { 0f, 0f, 0f };
	vector3 vLocal_1115 = { 0f, 0f, 0f };
	int iLocal_1118 = 0;
	bool bLocal_1119 = false;
	vector3 vLocal_1120 = { 0f, 0f, 0f };
	vector3 vLocal_1123 = { 0f, 0f, 0f };
	int iLocal_1126 = 0;
	int iLocal_1127 = 0;
	var uLocal_1128 = 0;
	var uLocal_1129 = 0;
	var uLocal_1130 = 0;
	int iLocal_1131 = 0;
	var uLocal_1132 = 0;
	var uLocal_1133 = 27;
	var uLocal_1134 = 8;
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
	var uLocal_1155 = -1;
	var uLocal_1156 = 8;
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
	var uLocal_1177 = -1;
	var uLocal_1178 = 8;
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
	var uLocal_1199 = -1;
	var uLocal_1200 = 8;
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
	var uLocal_1221 = -1;
	var uLocal_1222 = 8;
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
	var uLocal_1243 = -1;
	var uLocal_1244 = 8;
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
	var uLocal_1265 = -1;
	var uLocal_1266 = 8;
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
	var uLocal_1287 = -1;
	var uLocal_1288 = 8;
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
	var uLocal_1309 = -1;
	var uLocal_1310 = 8;
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
	var uLocal_1321 = 0;
	var uLocal_1322 = 0;
	var uLocal_1323 = 0;
	var uLocal_1324 = 0;
	var uLocal_1325 = 0;
	var uLocal_1326 = 0;
	var uLocal_1327 = 0;
	var uLocal_1328 = 0;
	var uLocal_1329 = 0;
	var uLocal_1330 = 0;
	var uLocal_1331 = -1;
	var uLocal_1332 = 8;
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
	var uLocal_1353 = -1;
	var uLocal_1354 = 8;
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
	var uLocal_1375 = -1;
	var uLocal_1376 = 8;
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
	var uLocal_1397 = -1;
	var uLocal_1398 = 8;
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
	var uLocal_1419 = -1;
	var uLocal_1420 = 8;
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
	var uLocal_1441 = -1;
	var uLocal_1442 = 8;
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
	var uLocal_1460 = 0;
	var uLocal_1461 = 0;
	var uLocal_1462 = 0;
	var uLocal_1463 = -1;
	var uLocal_1464 = 8;
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
	var uLocal_1485 = -1;
	var uLocal_1486 = 8;
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
	var uLocal_1504 = 0;
	var uLocal_1505 = 0;
	var uLocal_1506 = 0;
	var uLocal_1507 = -1;
	var uLocal_1508 = 8;
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
	var uLocal_1529 = -1;
	var uLocal_1530 = 8;
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
	var uLocal_1548 = 0;
	var uLocal_1549 = 0;
	var uLocal_1550 = 0;
	var uLocal_1551 = -1;
	var uLocal_1552 = 8;
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
	var uLocal_1570 = 0;
	var uLocal_1571 = 0;
	var uLocal_1572 = 0;
	var uLocal_1573 = -1;
	var uLocal_1574 = 8;
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
	var uLocal_1592 = 0;
	var uLocal_1593 = 0;
	var uLocal_1594 = 0;
	var uLocal_1595 = -1;
	var uLocal_1596 = 8;
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
	var uLocal_1614 = 0;
	var uLocal_1615 = 0;
	var uLocal_1616 = 0;
	var uLocal_1617 = -1;
	var uLocal_1618 = 8;
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
	var uLocal_1636 = 0;
	var uLocal_1637 = 0;
	var uLocal_1638 = 0;
	var uLocal_1639 = -1;
	var uLocal_1640 = 8;
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
	var uLocal_1658 = 0;
	var uLocal_1659 = 0;
	var uLocal_1660 = 0;
	var uLocal_1661 = -1;
	var uLocal_1662 = 8;
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
	var uLocal_1680 = 0;
	var uLocal_1681 = 0;
	var uLocal_1682 = 0;
	var uLocal_1683 = -1;
	var uLocal_1684 = 8;
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
	var uLocal_1702 = 0;
	var uLocal_1703 = 0;
	var uLocal_1704 = 0;
	var uLocal_1705 = -1;
	var uLocal_1706 = 8;
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
	var uLocal_1724 = 0;
	var uLocal_1725 = 0;
	var uLocal_1726 = 0;
	var uLocal_1727 = -1;
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
	var uLocal_1746 = 0;
	var uLocal_1747 = 0;
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
	var uLocal_1766 = 2;
	var uLocal_1767 = 0;
	var uLocal_1768 = 0;
	var uLocal_1769 = 0;
	var uLocal_1770 = 60;
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
	var uLocal_1790 = 0;
	var uLocal_1791 = 0;
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
	var uLocal_1812 = 0;
	var uLocal_1813 = 0;
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
	var uLocal_1834 = 0;
	var uLocal_1835 = 0;
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
	var uLocal_1856 = 0;
	var uLocal_1857 = 0;
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
	var uLocal_1878 = 0;
	var uLocal_1879 = 0;
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
	var uLocal_1900 = 0;
	var uLocal_1901 = 0;
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
	var uLocal_1922 = 0;
	var uLocal_1923 = 0;
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
	var uLocal_1944 = 0;
	var uLocal_1945 = 0;
	var uLocal_1946 = 0;
	var uLocal_1947 = 0;
	var uLocal_1948 = 0;
	var uLocal_1949 = 0;
	var uLocal_1950 = 0;
	var uLocal_1951 = 40;
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
	var uLocal_1966 = 0;
	var uLocal_1967 = 0;
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
	var uLocal_1988 = 0;
	var uLocal_1989 = 0;
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
	var uLocal_2010 = 0;
	var uLocal_2011 = 0;
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
	var uLocal_2032 = 0;
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
	var uLocal_2071 = 0;
	var uLocal_2072 = 0;
	var uLocal_2073 = 0;
	var uLocal_2074 = 0;
	var uLocal_2075 = 0;
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
	var uLocal_2152 = 20;
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
	var uLocal_2213 = 14;
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
	var uLocal_2256 = 0;
	var uLocal_2257 = 0;
	var uLocal_2258 = 60;
	var uLocal_2259 = 0;
	var uLocal_2260 = 0;
	var uLocal_2261 = 0;
	var uLocal_2262 = 0;
	var uLocal_2263 = 20;
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
	var uLocal_2330 = 20;
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
	var uLocal_2397 = 20;
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
	var uLocal_2457 = 0;
	var uLocal_2458 = 0;
	var uLocal_2459 = 0;
	var uLocal_2460 = 0;
	var uLocal_2461 = 0;
	var uLocal_2462 = 0;
	var uLocal_2463 = 0;
	var uLocal_2464 = 20;
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
	var uLocal_2518 = 0;
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
	var uLocal_2531 = 20;
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
	var uLocal_2563 = 0;
	var uLocal_2564 = 0;
	var uLocal_2565 = 0;
	var uLocal_2566 = 0;
	var uLocal_2567 = 0;
	var uLocal_2568 = 0;
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
	var uLocal_2598 = 20;
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
	var uLocal_2635 = 0;
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
	var uLocal_2665 = 20;
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
	var uLocal_2702 = 0;
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
	var uLocal_2732 = 20;
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
	var uLocal_2769 = 0;
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
	var uLocal_2799 = 20;
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
	var uLocal_2836 = 0;
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
	var uLocal_2866 = 20;
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
	var uLocal_2903 = 0;
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
	var uLocal_2933 = 20;
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
	var uLocal_2970 = 0;
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
	var uLocal_3000 = 20;
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
	var uLocal_3037 = 0;
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
	var uLocal_3067 = 20;
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
	var uLocal_3104 = 0;
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
	var uLocal_3134 = 20;
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
	var uLocal_3171 = 0;
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
	var uLocal_3201 = 20;
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
	var uLocal_3238 = 0;
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
	var uLocal_3268 = 20;
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
	var uLocal_3305 = 0;
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
	var uLocal_3335 = 20;
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
	var uLocal_3372 = 0;
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
	var uLocal_3402 = 20;
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
	var uLocal_3439 = 0;
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
	var uLocal_3469 = 20;
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
	var uLocal_3506 = 0;
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
	var uLocal_3536 = 20;
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
	var uLocal_3573 = 0;
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
	var uLocal_3603 = 20;
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
	var uLocal_3640 = 0;
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
	var uLocal_3670 = 20;
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
	var uLocal_3707 = 0;
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
	var uLocal_3737 = 20;
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
	var uLocal_3774 = 0;
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
	var uLocal_3804 = 20;
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
	var uLocal_3841 = 0;
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
	var uLocal_3871 = 20;
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
	var uLocal_3908 = 0;
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
	var uLocal_3938 = 20;
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
	var uLocal_3975 = 0;
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
	var uLocal_4005 = 20;
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
	var uLocal_4042 = 0;
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
	var uLocal_4072 = 20;
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
	var uLocal_4109 = 0;
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
	var uLocal_4139 = 20;
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
	var uLocal_4176 = 0;
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
	var uLocal_4206 = 20;
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
	var uLocal_4243 = 0;
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
	var uLocal_4273 = 20;
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
	var uLocal_4310 = 0;
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
	var uLocal_4340 = 20;
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
	var uLocal_4377 = 0;
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
	var uLocal_4407 = 20;
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
	var uLocal_4444 = 0;
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
	var uLocal_4474 = 20;
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
	var uLocal_4511 = 0;
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
	var uLocal_4541 = 20;
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
	var uLocal_4578 = 0;
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
	var uLocal_4608 = 20;
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
	var uLocal_4645 = 0;
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
	var uLocal_4675 = 20;
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
	var uLocal_4712 = 0;
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
	var uLocal_4742 = 20;
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
	var uLocal_4779 = 0;
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
	var uLocal_4809 = 20;
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
	var uLocal_4846 = 0;
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
	var uLocal_4876 = 20;
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
	var uLocal_4913 = 0;
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
	var uLocal_4943 = 20;
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
	var uLocal_4980 = 0;
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
	var uLocal_5010 = 20;
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
	var uLocal_5047 = 0;
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
	var uLocal_5077 = 20;
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
	var uLocal_5114 = 0;
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
	var uLocal_5144 = 20;
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
	var uLocal_5181 = 0;
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
	var uLocal_5211 = 20;
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
	var uLocal_5248 = 0;
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
	var uLocal_5278 = 20;
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
	var uLocal_5315 = 0;
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
	var uLocal_5345 = 20;
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
	var uLocal_5382 = 0;
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
	var uLocal_5412 = 20;
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
	var uLocal_5449 = 0;
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
	var uLocal_5479 = 20;
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
	var uLocal_5516 = 0;
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
	var uLocal_5546 = 20;
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
	var uLocal_5583 = 0;
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
	var uLocal_5613 = 20;
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
	var uLocal_5650 = 0;
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
	var uLocal_5680 = 20;
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
	var uLocal_5717 = 0;
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
	var uLocal_5747 = 20;
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
	var uLocal_5784 = 0;
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
	var uLocal_5814 = 20;
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
	var uLocal_5851 = 0;
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
	var uLocal_5881 = 20;
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
	var uLocal_5918 = 0;
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
	var uLocal_5948 = 20;
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
	var uLocal_5985 = 0;
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
	var uLocal_6015 = 20;
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
	var uLocal_6052 = 0;
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
	var uLocal_6082 = 20;
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
	var uLocal_6119 = 0;
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
	var uLocal_6149 = 20;
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
	var uLocal_6186 = 0;
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
	var uLocal_6216 = 20;
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
	var uLocal_6253 = 0;
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
	var uLocal_6279 = 10;
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
	var uLocal_6320 = 10;
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
	var uLocal_6371 = 3;
	var uLocal_6372 = 0;
	var uLocal_6373 = 0;
	var uLocal_6374 = 0;
	var uLocal_6375 = 0;
	var uLocal_6376 = 0;
	var uLocal_6377 = 0;
	var uLocal_6378 = 0;
	var uLocal_6379 = 0;
	var uLocal_6380 = 0;
	var uLocal_6381 = 5;
	var uLocal_6382 = 0;
	var uLocal_6383 = 0;
	var uLocal_6384 = 0;
	var uLocal_6385 = 0;
	var uLocal_6386 = 0;
	var uLocal_6387 = 0;
	var uLocal_6388 = 0;
	var uLocal_6389 = 0;
	var uLocal_6390 = 0;
	var uLocal_6391 = 0;
	var uLocal_6392 = 0;
	var uLocal_6393 = 0;
	var uLocal_6394 = 0;
	var uLocal_6395 = 0;
	var uLocal_6396 = 0;
	var uLocal_6397 = 5;
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
	var uLocal_6418 = 5;
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
	var uLocal_6442 = 24;
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
	var uLocal_6454 = 0;
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
	var uLocal_6521 = 0;
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
	var uLocal_6555 = 30;
	var uLocal_6556 = 0;
	var uLocal_6557 = 0;
	var uLocal_6558 = 0;
	var uLocal_6559 = 0;
	var uLocal_6560 = 0;
	var uLocal_6561 = 3;
	var uLocal_6562 = 0;
	var uLocal_6563 = 0;
	var uLocal_6564 = 0;
	var uLocal_6565 = 0;
	var uLocal_6566 = -1;
	var uLocal_6567 = 0;
	var uLocal_6568 = 5;
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
	var uLocal_6579 = 10;
	var uLocal_6580 = 3;
	var uLocal_6581 = 500;
	var uLocal_6582 = 10000;
	var uLocal_6583 = 0;
	var uLocal_6584 = 3;
	var uLocal_6585 = 500;
	var uLocal_6586 = 10000;
	var uLocal_6587 = 0;
	var uLocal_6588 = 3;
	var uLocal_6589 = 500;
	var uLocal_6590 = 10000;
	var uLocal_6591 = 0;
	var uLocal_6592 = 3;
	var uLocal_6593 = 500;
	var uLocal_6594 = 10000;
	var uLocal_6595 = 0;
	var uLocal_6596 = 3;
	var uLocal_6597 = 500;
	var uLocal_6598 = 10000;
	var uLocal_6599 = 0;
	var uLocal_6600 = 3;
	var uLocal_6601 = 500;
	var uLocal_6602 = 10000;
	var uLocal_6603 = 0;
	var uLocal_6604 = 3;
	var uLocal_6605 = 500;
	var uLocal_6606 = 10000;
	var uLocal_6607 = 0;
	var uLocal_6608 = 3;
	var uLocal_6609 = 500;
	var uLocal_6610 = 10000;
	var uLocal_6611 = 0;
	var uLocal_6612 = 3;
	var uLocal_6613 = 500;
	var uLocal_6614 = 10000;
	var uLocal_6615 = 0;
	var uLocal_6616 = 3;
	var uLocal_6617 = 500;
	var uLocal_6618 = 10000;
	var uLocal_6619 = 0;
	var uLocal_6620 = 0;
	var uLocal_6621 = 0;
	var uLocal_6622 = 0;
	var uLocal_6623 = 0;
	var uLocal_6624 = 0;
	var uLocal_6625 = 0;
	var uLocal_6626 = 3;
	var uLocal_6627 = 0;
	var uLocal_6628 = 0;
	var uLocal_6629 = 0;
	var uLocal_6630 = 0;
	var uLocal_6631 = -1;
	var uLocal_6632 = 0;
	var uLocal_6633 = 5;
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
	var uLocal_6644 = 10;
	var uLocal_6645 = 3;
	var uLocal_6646 = 500;
	var uLocal_6647 = 10000;
	var uLocal_6648 = 0;
	var uLocal_6649 = 3;
	var uLocal_6650 = 500;
	var uLocal_6651 = 10000;
	var uLocal_6652 = 0;
	var uLocal_6653 = 3;
	var uLocal_6654 = 500;
	var uLocal_6655 = 10000;
	var uLocal_6656 = 0;
	var uLocal_6657 = 3;
	var uLocal_6658 = 500;
	var uLocal_6659 = 10000;
	var uLocal_6660 = 0;
	var uLocal_6661 = 3;
	var uLocal_6662 = 500;
	var uLocal_6663 = 10000;
	var uLocal_6664 = 0;
	var uLocal_6665 = 3;
	var uLocal_6666 = 500;
	var uLocal_6667 = 10000;
	var uLocal_6668 = 0;
	var uLocal_6669 = 3;
	var uLocal_6670 = 500;
	var uLocal_6671 = 10000;
	var uLocal_6672 = 0;
	var uLocal_6673 = 3;
	var uLocal_6674 = 500;
	var uLocal_6675 = 10000;
	var uLocal_6676 = 0;
	var uLocal_6677 = 3;
	var uLocal_6678 = 500;
	var uLocal_6679 = 10000;
	var uLocal_6680 = 0;
	var uLocal_6681 = 3;
	var uLocal_6682 = 500;
	var uLocal_6683 = 10000;
	var uLocal_6684 = 0;
	var uLocal_6685 = 0;
	var uLocal_6686 = 0;
	var uLocal_6687 = 0;
	var uLocal_6688 = 0;
	var uLocal_6689 = 0;
	var uLocal_6690 = 0;
	var uLocal_6691 = 3;
	var uLocal_6692 = 0;
	var uLocal_6693 = 0;
	var uLocal_6694 = 0;
	var uLocal_6695 = 0;
	var uLocal_6696 = -1;
	var uLocal_6697 = 0;
	var uLocal_6698 = 5;
	var uLocal_6699 = 0;
	var uLocal_6700 = 0;
	var uLocal_6701 = 0;
	var uLocal_6702 = 0;
	var uLocal_6703 = 0;
	var uLocal_6704 = 0;
	var uLocal_6705 = 0;
	var uLocal_6706 = 0;
	var uLocal_6707 = 0;
	var uLocal_6708 = 0;
	var uLocal_6709 = 10;
	var uLocal_6710 = 3;
	var uLocal_6711 = 500;
	var uLocal_6712 = 10000;
	var uLocal_6713 = 0;
	var uLocal_6714 = 3;
	var uLocal_6715 = 500;
	var uLocal_6716 = 10000;
	var uLocal_6717 = 0;
	var uLocal_6718 = 3;
	var uLocal_6719 = 500;
	var uLocal_6720 = 10000;
	var uLocal_6721 = 0;
	var uLocal_6722 = 3;
	var uLocal_6723 = 500;
	var uLocal_6724 = 10000;
	var uLocal_6725 = 0;
	var uLocal_6726 = 3;
	var uLocal_6727 = 500;
	var uLocal_6728 = 10000;
	var uLocal_6729 = 0;
	var uLocal_6730 = 3;
	var uLocal_6731 = 500;
	var uLocal_6732 = 10000;
	var uLocal_6733 = 0;
	var uLocal_6734 = 3;
	var uLocal_6735 = 500;
	var uLocal_6736 = 10000;
	var uLocal_6737 = 0;
	var uLocal_6738 = 3;
	var uLocal_6739 = 500;
	var uLocal_6740 = 10000;
	var uLocal_6741 = 0;
	var uLocal_6742 = 3;
	var uLocal_6743 = 500;
	var uLocal_6744 = 10000;
	var uLocal_6745 = 0;
	var uLocal_6746 = 3;
	var uLocal_6747 = 500;
	var uLocal_6748 = 10000;
	var uLocal_6749 = 0;
	var uLocal_6750 = 0;
	var uLocal_6751 = 0;
	var uLocal_6752 = 0;
	var uLocal_6753 = 0;
	var uLocal_6754 = 0;
	var uLocal_6755 = 0;
	var uLocal_6756 = 3;
	var uLocal_6757 = 0;
	var uLocal_6758 = 0;
	var uLocal_6759 = 0;
	var uLocal_6760 = 0;
	var uLocal_6761 = -1;
	var uLocal_6762 = 0;
	var uLocal_6763 = 5;
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
	var uLocal_6774 = 10;
	var uLocal_6775 = 3;
	var uLocal_6776 = 500;
	var uLocal_6777 = 10000;
	var uLocal_6778 = 0;
	var uLocal_6779 = 3;
	var uLocal_6780 = 500;
	var uLocal_6781 = 10000;
	var uLocal_6782 = 0;
	var uLocal_6783 = 3;
	var uLocal_6784 = 500;
	var uLocal_6785 = 10000;
	var uLocal_6786 = 0;
	var uLocal_6787 = 3;
	var uLocal_6788 = 500;
	var uLocal_6789 = 10000;
	var uLocal_6790 = 0;
	var uLocal_6791 = 3;
	var uLocal_6792 = 500;
	var uLocal_6793 = 10000;
	var uLocal_6794 = 0;
	var uLocal_6795 = 3;
	var uLocal_6796 = 500;
	var uLocal_6797 = 10000;
	var uLocal_6798 = 0;
	var uLocal_6799 = 3;
	var uLocal_6800 = 500;
	var uLocal_6801 = 10000;
	var uLocal_6802 = 0;
	var uLocal_6803 = 3;
	var uLocal_6804 = 500;
	var uLocal_6805 = 10000;
	var uLocal_6806 = 0;
	var uLocal_6807 = 3;
	var uLocal_6808 = 500;
	var uLocal_6809 = 10000;
	var uLocal_6810 = 0;
	var uLocal_6811 = 3;
	var uLocal_6812 = 500;
	var uLocal_6813 = 10000;
	var uLocal_6814 = 0;
	var uLocal_6815 = 0;
	var uLocal_6816 = 0;
	var uLocal_6817 = 0;
	var uLocal_6818 = 0;
	var uLocal_6819 = 0;
	var uLocal_6820 = 0;
	var uLocal_6821 = 3;
	var uLocal_6822 = 0;
	var uLocal_6823 = 0;
	var uLocal_6824 = 0;
	var uLocal_6825 = 0;
	var uLocal_6826 = -1;
	var uLocal_6827 = 0;
	var uLocal_6828 = 5;
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
	var uLocal_6839 = 10;
	var uLocal_6840 = 3;
	var uLocal_6841 = 500;
	var uLocal_6842 = 10000;
	var uLocal_6843 = 0;
	var uLocal_6844 = 3;
	var uLocal_6845 = 500;
	var uLocal_6846 = 10000;
	var uLocal_6847 = 0;
	var uLocal_6848 = 3;
	var uLocal_6849 = 500;
	var uLocal_6850 = 10000;
	var uLocal_6851 = 0;
	var uLocal_6852 = 3;
	var uLocal_6853 = 500;
	var uLocal_6854 = 10000;
	var uLocal_6855 = 0;
	var uLocal_6856 = 3;
	var uLocal_6857 = 500;
	var uLocal_6858 = 10000;
	var uLocal_6859 = 0;
	var uLocal_6860 = 3;
	var uLocal_6861 = 500;
	var uLocal_6862 = 10000;
	var uLocal_6863 = 0;
	var uLocal_6864 = 3;
	var uLocal_6865 = 500;
	var uLocal_6866 = 10000;
	var uLocal_6867 = 0;
	var uLocal_6868 = 3;
	var uLocal_6869 = 500;
	var uLocal_6870 = 10000;
	var uLocal_6871 = 0;
	var uLocal_6872 = 3;
	var uLocal_6873 = 500;
	var uLocal_6874 = 10000;
	var uLocal_6875 = 0;
	var uLocal_6876 = 3;
	var uLocal_6877 = 500;
	var uLocal_6878 = 10000;
	var uLocal_6879 = 0;
	var uLocal_6880 = 0;
	var uLocal_6881 = 0;
	var uLocal_6882 = 0;
	var uLocal_6883 = 0;
	var uLocal_6884 = 0;
	var uLocal_6885 = 0;
	var uLocal_6886 = 3;
	var uLocal_6887 = 0;
	var uLocal_6888 = 0;
	var uLocal_6889 = 0;
	var uLocal_6890 = 0;
	var uLocal_6891 = -1;
	var uLocal_6892 = 0;
	var uLocal_6893 = 5;
	var uLocal_6894 = 0;
	var uLocal_6895 = 0;
	var uLocal_6896 = 0;
	var uLocal_6897 = 0;
	var uLocal_6898 = 0;
	var uLocal_6899 = 0;
	var uLocal_6900 = 0;
	var uLocal_6901 = 0;
	var uLocal_6902 = 0;
	var uLocal_6903 = 0;
	var uLocal_6904 = 10;
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
	var uLocal_6925 = 3;
	var uLocal_6926 = 500;
	var uLocal_6927 = 10000;
	var uLocal_6928 = 0;
	var uLocal_6929 = 3;
	var uLocal_6930 = 500;
	var uLocal_6931 = 10000;
	var uLocal_6932 = 0;
	var uLocal_6933 = 3;
	var uLocal_6934 = 500;
	var uLocal_6935 = 10000;
	var uLocal_6936 = 0;
	var uLocal_6937 = 3;
	var uLocal_6938 = 500;
	var uLocal_6939 = 10000;
	var uLocal_6940 = 0;
	var uLocal_6941 = 3;
	var uLocal_6942 = 500;
	var uLocal_6943 = 10000;
	var uLocal_6944 = 0;
	var uLocal_6945 = 0;
	var uLocal_6946 = 0;
	var uLocal_6947 = 0;
	var uLocal_6948 = 0;
	var uLocal_6949 = 0;
	var uLocal_6950 = 0;
	var uLocal_6951 = 3;
	var uLocal_6952 = 0;
	var uLocal_6953 = 0;
	var uLocal_6954 = 0;
	var uLocal_6955 = 0;
	var uLocal_6956 = -1;
	var uLocal_6957 = 0;
	var uLocal_6958 = 5;
	var uLocal_6959 = 0;
	var uLocal_6960 = 0;
	var uLocal_6961 = 0;
	var uLocal_6962 = 0;
	var uLocal_6963 = 0;
	var uLocal_6964 = 0;
	var uLocal_6965 = 0;
	var uLocal_6966 = 0;
	var uLocal_6967 = 0;
	var uLocal_6968 = 0;
	var uLocal_6969 = 10;
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
	var uLocal_6990 = 3;
	var uLocal_6991 = 500;
	var uLocal_6992 = 10000;
	var uLocal_6993 = 0;
	var uLocal_6994 = 3;
	var uLocal_6995 = 500;
	var uLocal_6996 = 10000;
	var uLocal_6997 = 0;
	var uLocal_6998 = 3;
	var uLocal_6999 = 500;
	var uLocal_7000 = 10000;
	var uLocal_7001 = 0;
	var uLocal_7002 = 3;
	var uLocal_7003 = 500;
	var uLocal_7004 = 10000;
	var uLocal_7005 = 0;
	var uLocal_7006 = 3;
	var uLocal_7007 = 500;
	var uLocal_7008 = 10000;
	var uLocal_7009 = 0;
	var uLocal_7010 = 0;
	var uLocal_7011 = 0;
	var uLocal_7012 = 0;
	var uLocal_7013 = 0;
	var uLocal_7014 = 0;
	var uLocal_7015 = 0;
	var uLocal_7016 = 3;
	var uLocal_7017 = 0;
	var uLocal_7018 = 0;
	var uLocal_7019 = 0;
	var uLocal_7020 = 0;
	var uLocal_7021 = -1;
	var uLocal_7022 = 0;
	var uLocal_7023 = 5;
	var uLocal_7024 = 0;
	var uLocal_7025 = 0;
	var uLocal_7026 = 0;
	var uLocal_7027 = 0;
	var uLocal_7028 = 0;
	var uLocal_7029 = 0;
	var uLocal_7030 = 0;
	var uLocal_7031 = 0;
	var uLocal_7032 = 0;
	var uLocal_7033 = 0;
	var uLocal_7034 = 10;
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
	var uLocal_7055 = 3;
	var uLocal_7056 = 500;
	var uLocal_7057 = 10000;
	var uLocal_7058 = 0;
	var uLocal_7059 = 3;
	var uLocal_7060 = 500;
	var uLocal_7061 = 10000;
	var uLocal_7062 = 0;
	var uLocal_7063 = 3;
	var uLocal_7064 = 500;
	var uLocal_7065 = 10000;
	var uLocal_7066 = 0;
	var uLocal_7067 = 3;
	var uLocal_7068 = 500;
	var uLocal_7069 = 10000;
	var uLocal_7070 = 0;
	var uLocal_7071 = 3;
	var uLocal_7072 = 500;
	var uLocal_7073 = 10000;
	var uLocal_7074 = 0;
	var uLocal_7075 = 0;
	var uLocal_7076 = 0;
	var uLocal_7077 = 0;
	var uLocal_7078 = 0;
	var uLocal_7079 = 0;
	var uLocal_7080 = 0;
	var uLocal_7081 = 3;
	var uLocal_7082 = 0;
	var uLocal_7083 = 0;
	var uLocal_7084 = 0;
	var uLocal_7085 = 0;
	var uLocal_7086 = -1;
	var uLocal_7087 = 0;
	var uLocal_7088 = 5;
	var uLocal_7089 = 0;
	var uLocal_7090 = 0;
	var uLocal_7091 = 0;
	var uLocal_7092 = 0;
	var uLocal_7093 = 0;
	var uLocal_7094 = 0;
	var uLocal_7095 = 0;
	var uLocal_7096 = 0;
	var uLocal_7097 = 0;
	var uLocal_7098 = 0;
	var uLocal_7099 = 10;
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
	var uLocal_7120 = 3;
	var uLocal_7121 = 500;
	var uLocal_7122 = 10000;
	var uLocal_7123 = 0;
	var uLocal_7124 = 3;
	var uLocal_7125 = 500;
	var uLocal_7126 = 10000;
	var uLocal_7127 = 0;
	var uLocal_7128 = 3;
	var uLocal_7129 = 500;
	var uLocal_7130 = 10000;
	var uLocal_7131 = 0;
	var uLocal_7132 = 3;
	var uLocal_7133 = 500;
	var uLocal_7134 = 10000;
	var uLocal_7135 = 0;
	var uLocal_7136 = 3;
	var uLocal_7137 = 500;
	var uLocal_7138 = 10000;
	var uLocal_7139 = 0;
	var uLocal_7140 = 0;
	var uLocal_7141 = 0;
	var uLocal_7142 = 0;
	var uLocal_7143 = 0;
	var uLocal_7144 = 0;
	var uLocal_7145 = 0;
	var uLocal_7146 = 3;
	var uLocal_7147 = 0;
	var uLocal_7148 = 0;
	var uLocal_7149 = 0;
	var uLocal_7150 = 0;
	var uLocal_7151 = -1;
	var uLocal_7152 = 0;
	var uLocal_7153 = 5;
	var uLocal_7154 = 0;
	var uLocal_7155 = 0;
	var uLocal_7156 = 0;
	var uLocal_7157 = 0;
	var uLocal_7158 = 0;
	var uLocal_7159 = 0;
	var uLocal_7160 = 0;
	var uLocal_7161 = 0;
	var uLocal_7162 = 0;
	var uLocal_7163 = 0;
	var uLocal_7164 = 10;
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
	var uLocal_7185 = 3;
	var uLocal_7186 = 500;
	var uLocal_7187 = 10000;
	var uLocal_7188 = 0;
	var uLocal_7189 = 3;
	var uLocal_7190 = 500;
	var uLocal_7191 = 10000;
	var uLocal_7192 = 0;
	var uLocal_7193 = 3;
	var uLocal_7194 = 500;
	var uLocal_7195 = 10000;
	var uLocal_7196 = 0;
	var uLocal_7197 = 3;
	var uLocal_7198 = 500;
	var uLocal_7199 = 10000;
	var uLocal_7200 = 0;
	var uLocal_7201 = 3;
	var uLocal_7202 = 500;
	var uLocal_7203 = 10000;
	var uLocal_7204 = 0;
	var uLocal_7205 = 0;
	var uLocal_7206 = 0;
	var uLocal_7207 = 0;
	var uLocal_7208 = 0;
	var uLocal_7209 = 0;
	var uLocal_7210 = 0;
	var uLocal_7211 = 3;
	var uLocal_7212 = 0;
	var uLocal_7213 = 0;
	var uLocal_7214 = 0;
	var uLocal_7215 = 0;
	var uLocal_7216 = -1;
	var uLocal_7217 = 0;
	var uLocal_7218 = 5;
	var uLocal_7219 = 0;
	var uLocal_7220 = 0;
	var uLocal_7221 = 0;
	var uLocal_7222 = 0;
	var uLocal_7223 = 0;
	var uLocal_7224 = 0;
	var uLocal_7225 = 0;
	var uLocal_7226 = 0;
	var uLocal_7227 = 0;
	var uLocal_7228 = 0;
	var uLocal_7229 = 10;
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
	var uLocal_7250 = 3;
	var uLocal_7251 = 500;
	var uLocal_7252 = 10000;
	var uLocal_7253 = 0;
	var uLocal_7254 = 3;
	var uLocal_7255 = 500;
	var uLocal_7256 = 10000;
	var uLocal_7257 = 0;
	var uLocal_7258 = 3;
	var uLocal_7259 = 500;
	var uLocal_7260 = 10000;
	var uLocal_7261 = 0;
	var uLocal_7262 = 3;
	var uLocal_7263 = 500;
	var uLocal_7264 = 10000;
	var uLocal_7265 = 0;
	var uLocal_7266 = 3;
	var uLocal_7267 = 500;
	var uLocal_7268 = 10000;
	var uLocal_7269 = 0;
	var uLocal_7270 = 0;
	var uLocal_7271 = 0;
	var uLocal_7272 = 0;
	var uLocal_7273 = 0;
	var uLocal_7274 = 0;
	var uLocal_7275 = 0;
	var uLocal_7276 = 3;
	var uLocal_7277 = 0;
	var uLocal_7278 = 0;
	var uLocal_7279 = 0;
	var uLocal_7280 = 0;
	var uLocal_7281 = -1;
	var uLocal_7282 = 0;
	var uLocal_7283 = 5;
	var uLocal_7284 = 0;
	var uLocal_7285 = 0;
	var uLocal_7286 = 0;
	var uLocal_7287 = 0;
	var uLocal_7288 = 0;
	var uLocal_7289 = 0;
	var uLocal_7290 = 0;
	var uLocal_7291 = 0;
	var uLocal_7292 = 0;
	var uLocal_7293 = 0;
	var uLocal_7294 = 10;
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
	var uLocal_7315 = 3;
	var uLocal_7316 = 500;
	var uLocal_7317 = 10000;
	var uLocal_7318 = 0;
	var uLocal_7319 = 3;
	var uLocal_7320 = 500;
	var uLocal_7321 = 10000;
	var uLocal_7322 = 0;
	var uLocal_7323 = 3;
	var uLocal_7324 = 500;
	var uLocal_7325 = 10000;
	var uLocal_7326 = 0;
	var uLocal_7327 = 3;
	var uLocal_7328 = 500;
	var uLocal_7329 = 10000;
	var uLocal_7330 = 0;
	var uLocal_7331 = 3;
	var uLocal_7332 = 500;
	var uLocal_7333 = 10000;
	var uLocal_7334 = 0;
	var uLocal_7335 = 0;
	var uLocal_7336 = 0;
	var uLocal_7337 = 0;
	var uLocal_7338 = 0;
	var uLocal_7339 = 0;
	var uLocal_7340 = 0;
	var uLocal_7341 = 3;
	var uLocal_7342 = 0;
	var uLocal_7343 = 0;
	var uLocal_7344 = 0;
	var uLocal_7345 = 0;
	var uLocal_7346 = -1;
	var uLocal_7347 = 0;
	var uLocal_7348 = 5;
	var uLocal_7349 = 0;
	var uLocal_7350 = 0;
	var uLocal_7351 = 0;
	var uLocal_7352 = 0;
	var uLocal_7353 = 0;
	var uLocal_7354 = 0;
	var uLocal_7355 = 0;
	var uLocal_7356 = 0;
	var uLocal_7357 = 0;
	var uLocal_7358 = 0;
	var uLocal_7359 = 10;
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
	var uLocal_7380 = 3;
	var uLocal_7381 = 500;
	var uLocal_7382 = 10000;
	var uLocal_7383 = 0;
	var uLocal_7384 = 3;
	var uLocal_7385 = 500;
	var uLocal_7386 = 10000;
	var uLocal_7387 = 0;
	var uLocal_7388 = 3;
	var uLocal_7389 = 500;
	var uLocal_7390 = 10000;
	var uLocal_7391 = 0;
	var uLocal_7392 = 3;
	var uLocal_7393 = 500;
	var uLocal_7394 = 10000;
	var uLocal_7395 = 0;
	var uLocal_7396 = 3;
	var uLocal_7397 = 500;
	var uLocal_7398 = 10000;
	var uLocal_7399 = 0;
	var uLocal_7400 = 0;
	var uLocal_7401 = 0;
	var uLocal_7402 = 0;
	var uLocal_7403 = 0;
	var uLocal_7404 = 0;
	var uLocal_7405 = 0;
	var uLocal_7406 = 3;
	var uLocal_7407 = 0;
	var uLocal_7408 = 0;
	var uLocal_7409 = 0;
	var uLocal_7410 = 0;
	var uLocal_7411 = -1;
	var uLocal_7412 = 0;
	var uLocal_7413 = 5;
	var uLocal_7414 = 0;
	var uLocal_7415 = 0;
	var uLocal_7416 = 0;
	var uLocal_7417 = 0;
	var uLocal_7418 = 0;
	var uLocal_7419 = 0;
	var uLocal_7420 = 0;
	var uLocal_7421 = 0;
	var uLocal_7422 = 0;
	var uLocal_7423 = 0;
	var uLocal_7424 = 10;
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
	var uLocal_7445 = 3;
	var uLocal_7446 = 500;
	var uLocal_7447 = 10000;
	var uLocal_7448 = 0;
	var uLocal_7449 = 3;
	var uLocal_7450 = 500;
	var uLocal_7451 = 10000;
	var uLocal_7452 = 0;
	var uLocal_7453 = 3;
	var uLocal_7454 = 500;
	var uLocal_7455 = 10000;
	var uLocal_7456 = 0;
	var uLocal_7457 = 3;
	var uLocal_7458 = 500;
	var uLocal_7459 = 10000;
	var uLocal_7460 = 0;
	var uLocal_7461 = 3;
	var uLocal_7462 = 500;
	var uLocal_7463 = 10000;
	var uLocal_7464 = 0;
	var uLocal_7465 = 0;
	var uLocal_7466 = 0;
	var uLocal_7467 = 0;
	var uLocal_7468 = 0;
	var uLocal_7469 = 0;
	var uLocal_7470 = 0;
	var uLocal_7471 = 3;
	var uLocal_7472 = 0;
	var uLocal_7473 = 0;
	var uLocal_7474 = 0;
	var uLocal_7475 = 0;
	var uLocal_7476 = -1;
	var uLocal_7477 = 0;
	var uLocal_7478 = 5;
	var uLocal_7479 = 0;
	var uLocal_7480 = 0;
	var uLocal_7481 = 0;
	var uLocal_7482 = 0;
	var uLocal_7483 = 0;
	var uLocal_7484 = 0;
	var uLocal_7485 = 0;
	var uLocal_7486 = 0;
	var uLocal_7487 = 0;
	var uLocal_7488 = 0;
	var uLocal_7489 = 10;
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
	var uLocal_7510 = 3;
	var uLocal_7511 = 500;
	var uLocal_7512 = 10000;
	var uLocal_7513 = 0;
	var uLocal_7514 = 3;
	var uLocal_7515 = 500;
	var uLocal_7516 = 10000;
	var uLocal_7517 = 0;
	var uLocal_7518 = 3;
	var uLocal_7519 = 500;
	var uLocal_7520 = 10000;
	var uLocal_7521 = 0;
	var uLocal_7522 = 3;
	var uLocal_7523 = 500;
	var uLocal_7524 = 10000;
	var uLocal_7525 = 0;
	var uLocal_7526 = 3;
	var uLocal_7527 = 500;
	var uLocal_7528 = 10000;
	var uLocal_7529 = 0;
	var uLocal_7530 = 0;
	var uLocal_7531 = 0;
	var uLocal_7532 = 0;
	var uLocal_7533 = 0;
	var uLocal_7534 = 0;
	var uLocal_7535 = 0;
	var uLocal_7536 = 3;
	var uLocal_7537 = 0;
	var uLocal_7538 = 0;
	var uLocal_7539 = 0;
	var uLocal_7540 = 0;
	var uLocal_7541 = -1;
	var uLocal_7542 = 0;
	var uLocal_7543 = 5;
	var uLocal_7544 = 0;
	var uLocal_7545 = 0;
	var uLocal_7546 = 0;
	var uLocal_7547 = 0;
	var uLocal_7548 = 0;
	var uLocal_7549 = 0;
	var uLocal_7550 = 0;
	var uLocal_7551 = 0;
	var uLocal_7552 = 0;
	var uLocal_7553 = 0;
	var uLocal_7554 = 10;
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
	var uLocal_7575 = 3;
	var uLocal_7576 = 500;
	var uLocal_7577 = 10000;
	var uLocal_7578 = 0;
	var uLocal_7579 = 3;
	var uLocal_7580 = 500;
	var uLocal_7581 = 10000;
	var uLocal_7582 = 0;
	var uLocal_7583 = 3;
	var uLocal_7584 = 500;
	var uLocal_7585 = 10000;
	var uLocal_7586 = 0;
	var uLocal_7587 = 3;
	var uLocal_7588 = 500;
	var uLocal_7589 = 10000;
	var uLocal_7590 = 0;
	var uLocal_7591 = 3;
	var uLocal_7592 = 500;
	var uLocal_7593 = 10000;
	var uLocal_7594 = 0;
	var uLocal_7595 = 0;
	var uLocal_7596 = 0;
	var uLocal_7597 = 0;
	var uLocal_7598 = 0;
	var uLocal_7599 = 0;
	var uLocal_7600 = 0;
	var uLocal_7601 = 3;
	var uLocal_7602 = 0;
	var uLocal_7603 = 0;
	var uLocal_7604 = 0;
	var uLocal_7605 = 0;
	var uLocal_7606 = -1;
	var uLocal_7607 = 0;
	var uLocal_7608 = 5;
	var uLocal_7609 = 0;
	var uLocal_7610 = 0;
	var uLocal_7611 = 0;
	var uLocal_7612 = 0;
	var uLocal_7613 = 0;
	var uLocal_7614 = 0;
	var uLocal_7615 = 0;
	var uLocal_7616 = 0;
	var uLocal_7617 = 0;
	var uLocal_7618 = 0;
	var uLocal_7619 = 10;
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
	var uLocal_7640 = 3;
	var uLocal_7641 = 500;
	var uLocal_7642 = 10000;
	var uLocal_7643 = 0;
	var uLocal_7644 = 3;
	var uLocal_7645 = 500;
	var uLocal_7646 = 10000;
	var uLocal_7647 = 0;
	var uLocal_7648 = 3;
	var uLocal_7649 = 500;
	var uLocal_7650 = 10000;
	var uLocal_7651 = 0;
	var uLocal_7652 = 3;
	var uLocal_7653 = 500;
	var uLocal_7654 = 10000;
	var uLocal_7655 = 0;
	var uLocal_7656 = 3;
	var uLocal_7657 = 500;
	var uLocal_7658 = 10000;
	var uLocal_7659 = 0;
	var uLocal_7660 = 0;
	var uLocal_7661 = 0;
	var uLocal_7662 = 0;
	var uLocal_7663 = 0;
	var uLocal_7664 = 0;
	var uLocal_7665 = 0;
	var uLocal_7666 = 3;
	var uLocal_7667 = 0;
	var uLocal_7668 = 0;
	var uLocal_7669 = 0;
	var uLocal_7670 = 0;
	var uLocal_7671 = -1;
	var uLocal_7672 = 0;
	var uLocal_7673 = 5;
	var uLocal_7674 = 0;
	var uLocal_7675 = 0;
	var uLocal_7676 = 0;
	var uLocal_7677 = 0;
	var uLocal_7678 = 0;
	var uLocal_7679 = 0;
	var uLocal_7680 = 0;
	var uLocal_7681 = 0;
	var uLocal_7682 = 0;
	var uLocal_7683 = 0;
	var uLocal_7684 = 10;
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
	var uLocal_7705 = 3;
	var uLocal_7706 = 500;
	var uLocal_7707 = 10000;
	var uLocal_7708 = 0;
	var uLocal_7709 = 3;
	var uLocal_7710 = 500;
	var uLocal_7711 = 10000;
	var uLocal_7712 = 0;
	var uLocal_7713 = 3;
	var uLocal_7714 = 500;
	var uLocal_7715 = 10000;
	var uLocal_7716 = 0;
	var uLocal_7717 = 3;
	var uLocal_7718 = 500;
	var uLocal_7719 = 10000;
	var uLocal_7720 = 0;
	var uLocal_7721 = 3;
	var uLocal_7722 = 500;
	var uLocal_7723 = 10000;
	var uLocal_7724 = 0;
	var uLocal_7725 = 0;
	var uLocal_7726 = 0;
	var uLocal_7727 = 0;
	var uLocal_7728 = 0;
	var uLocal_7729 = 0;
	var uLocal_7730 = 0;
	var uLocal_7731 = 3;
	var uLocal_7732 = 0;
	var uLocal_7733 = 0;
	var uLocal_7734 = 0;
	var uLocal_7735 = 0;
	var uLocal_7736 = -1;
	var uLocal_7737 = 0;
	var uLocal_7738 = 5;
	var uLocal_7739 = 0;
	var uLocal_7740 = 0;
	var uLocal_7741 = 0;
	var uLocal_7742 = 0;
	var uLocal_7743 = 0;
	var uLocal_7744 = 0;
	var uLocal_7745 = 0;
	var uLocal_7746 = 0;
	var uLocal_7747 = 0;
	var uLocal_7748 = 0;
	var uLocal_7749 = 10;
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
	var uLocal_7770 = 3;
	var uLocal_7771 = 500;
	var uLocal_7772 = 10000;
	var uLocal_7773 = 0;
	var uLocal_7774 = 3;
	var uLocal_7775 = 500;
	var uLocal_7776 = 10000;
	var uLocal_7777 = 0;
	var uLocal_7778 = 3;
	var uLocal_7779 = 500;
	var uLocal_7780 = 10000;
	var uLocal_7781 = 0;
	var uLocal_7782 = 3;
	var uLocal_7783 = 500;
	var uLocal_7784 = 10000;
	var uLocal_7785 = 0;
	var uLocal_7786 = 3;
	var uLocal_7787 = 500;
	var uLocal_7788 = 10000;
	var uLocal_7789 = 0;
	var uLocal_7790 = 0;
	var uLocal_7791 = 0;
	var uLocal_7792 = 0;
	var uLocal_7793 = 0;
	var uLocal_7794 = 0;
	var uLocal_7795 = 0;
	var uLocal_7796 = 3;
	var uLocal_7797 = 0;
	var uLocal_7798 = 0;
	var uLocal_7799 = 0;
	var uLocal_7800 = 0;
	var uLocal_7801 = -1;
	var uLocal_7802 = 0;
	var uLocal_7803 = 5;
	var uLocal_7804 = 0;
	var uLocal_7805 = 0;
	var uLocal_7806 = 0;
	var uLocal_7807 = 0;
	var uLocal_7808 = 0;
	var uLocal_7809 = 0;
	var uLocal_7810 = 0;
	var uLocal_7811 = 0;
	var uLocal_7812 = 0;
	var uLocal_7813 = 0;
	var uLocal_7814 = 10;
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
	var uLocal_7835 = 3;
	var uLocal_7836 = 500;
	var uLocal_7837 = 10000;
	var uLocal_7838 = 0;
	var uLocal_7839 = 3;
	var uLocal_7840 = 500;
	var uLocal_7841 = 10000;
	var uLocal_7842 = 0;
	var uLocal_7843 = 3;
	var uLocal_7844 = 500;
	var uLocal_7845 = 10000;
	var uLocal_7846 = 0;
	var uLocal_7847 = 3;
	var uLocal_7848 = 500;
	var uLocal_7849 = 10000;
	var uLocal_7850 = 0;
	var uLocal_7851 = 3;
	var uLocal_7852 = 500;
	var uLocal_7853 = 10000;
	var uLocal_7854 = 0;
	var uLocal_7855 = 0;
	var uLocal_7856 = 0;
	var uLocal_7857 = 0;
	var uLocal_7858 = 0;
	var uLocal_7859 = 0;
	var uLocal_7860 = 0;
	var uLocal_7861 = 3;
	var uLocal_7862 = 0;
	var uLocal_7863 = 0;
	var uLocal_7864 = 0;
	var uLocal_7865 = 0;
	var uLocal_7866 = -1;
	var uLocal_7867 = 0;
	var uLocal_7868 = 5;
	var uLocal_7869 = 0;
	var uLocal_7870 = 0;
	var uLocal_7871 = 0;
	var uLocal_7872 = 0;
	var uLocal_7873 = 0;
	var uLocal_7874 = 0;
	var uLocal_7875 = 0;
	var uLocal_7876 = 0;
	var uLocal_7877 = 0;
	var uLocal_7878 = 0;
	var uLocal_7879 = 10;
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
	var uLocal_7900 = 3;
	var uLocal_7901 = 500;
	var uLocal_7902 = 10000;
	var uLocal_7903 = 0;
	var uLocal_7904 = 3;
	var uLocal_7905 = 500;
	var uLocal_7906 = 10000;
	var uLocal_7907 = 0;
	var uLocal_7908 = 3;
	var uLocal_7909 = 500;
	var uLocal_7910 = 10000;
	var uLocal_7911 = 0;
	var uLocal_7912 = 3;
	var uLocal_7913 = 500;
	var uLocal_7914 = 10000;
	var uLocal_7915 = 0;
	var uLocal_7916 = 3;
	var uLocal_7917 = 500;
	var uLocal_7918 = 10000;
	var uLocal_7919 = 0;
	var uLocal_7920 = 0;
	var uLocal_7921 = 0;
	var uLocal_7922 = 0;
	var uLocal_7923 = 0;
	var uLocal_7924 = 0;
	var uLocal_7925 = 0;
	var uLocal_7926 = 3;
	var uLocal_7927 = 0;
	var uLocal_7928 = 0;
	var uLocal_7929 = 0;
	var uLocal_7930 = 0;
	var uLocal_7931 = -1;
	var uLocal_7932 = 0;
	var uLocal_7933 = 5;
	var uLocal_7934 = 0;
	var uLocal_7935 = 0;
	var uLocal_7936 = 0;
	var uLocal_7937 = 0;
	var uLocal_7938 = 0;
	var uLocal_7939 = 0;
	var uLocal_7940 = 0;
	var uLocal_7941 = 0;
	var uLocal_7942 = 0;
	var uLocal_7943 = 0;
	var uLocal_7944 = 10;
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
	var uLocal_7965 = 3;
	var uLocal_7966 = 500;
	var uLocal_7967 = 10000;
	var uLocal_7968 = 0;
	var uLocal_7969 = 3;
	var uLocal_7970 = 500;
	var uLocal_7971 = 10000;
	var uLocal_7972 = 0;
	var uLocal_7973 = 3;
	var uLocal_7974 = 500;
	var uLocal_7975 = 10000;
	var uLocal_7976 = 0;
	var uLocal_7977 = 3;
	var uLocal_7978 = 500;
	var uLocal_7979 = 10000;
	var uLocal_7980 = 0;
	var uLocal_7981 = 3;
	var uLocal_7982 = 500;
	var uLocal_7983 = 10000;
	var uLocal_7984 = 0;
	var uLocal_7985 = 0;
	var uLocal_7986 = 0;
	var uLocal_7987 = 0;
	var uLocal_7988 = 0;
	var uLocal_7989 = 0;
	var uLocal_7990 = 0;
	var uLocal_7991 = 3;
	var uLocal_7992 = 0;
	var uLocal_7993 = 0;
	var uLocal_7994 = 0;
	var uLocal_7995 = 0;
	var uLocal_7996 = -1;
	var uLocal_7997 = 0;
	var uLocal_7998 = 5;
	var uLocal_7999 = 0;
	var uLocal_8000 = 0;
	var uLocal_8001 = 0;
	var uLocal_8002 = 0;
	var uLocal_8003 = 0;
	var uLocal_8004 = 0;
	var uLocal_8005 = 0;
	var uLocal_8006 = 0;
	var uLocal_8007 = 0;
	var uLocal_8008 = 0;
	var uLocal_8009 = 10;
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
	var uLocal_8030 = 3;
	var uLocal_8031 = 500;
	var uLocal_8032 = 10000;
	var uLocal_8033 = 0;
	var uLocal_8034 = 3;
	var uLocal_8035 = 500;
	var uLocal_8036 = 10000;
	var uLocal_8037 = 0;
	var uLocal_8038 = 3;
	var uLocal_8039 = 500;
	var uLocal_8040 = 10000;
	var uLocal_8041 = 0;
	var uLocal_8042 = 3;
	var uLocal_8043 = 500;
	var uLocal_8044 = 10000;
	var uLocal_8045 = 0;
	var uLocal_8046 = 3;
	var uLocal_8047 = 500;
	var uLocal_8048 = 10000;
	var uLocal_8049 = 0;
	var uLocal_8050 = 0;
	var uLocal_8051 = 0;
	var uLocal_8052 = 0;
	var uLocal_8053 = 0;
	var uLocal_8054 = 0;
	var uLocal_8055 = 0;
	var uLocal_8056 = 3;
	var uLocal_8057 = 0;
	var uLocal_8058 = 0;
	var uLocal_8059 = 0;
	var uLocal_8060 = 0;
	var uLocal_8061 = -1;
	var uLocal_8062 = 0;
	var uLocal_8063 = 5;
	var uLocal_8064 = 0;
	var uLocal_8065 = 0;
	var uLocal_8066 = 0;
	var uLocal_8067 = 0;
	var uLocal_8068 = 0;
	var uLocal_8069 = 0;
	var uLocal_8070 = 0;
	var uLocal_8071 = 0;
	var uLocal_8072 = 0;
	var uLocal_8073 = 0;
	var uLocal_8074 = 10;
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
	var uLocal_8095 = 3;
	var uLocal_8096 = 500;
	var uLocal_8097 = 10000;
	var uLocal_8098 = 0;
	var uLocal_8099 = 3;
	var uLocal_8100 = 500;
	var uLocal_8101 = 10000;
	var uLocal_8102 = 0;
	var uLocal_8103 = 3;
	var uLocal_8104 = 500;
	var uLocal_8105 = 10000;
	var uLocal_8106 = 0;
	var uLocal_8107 = 3;
	var uLocal_8108 = 500;
	var uLocal_8109 = 10000;
	var uLocal_8110 = 0;
	var uLocal_8111 = 3;
	var uLocal_8112 = 500;
	var uLocal_8113 = 10000;
	var uLocal_8114 = 0;
	var uLocal_8115 = 0;
	var uLocal_8116 = 0;
	var uLocal_8117 = 0;
	var uLocal_8118 = 0;
	var uLocal_8119 = 0;
	var uLocal_8120 = 0;
	var uLocal_8121 = 3;
	var uLocal_8122 = 0;
	var uLocal_8123 = 0;
	var uLocal_8124 = 0;
	var uLocal_8125 = 0;
	var uLocal_8126 = -1;
	var uLocal_8127 = 0;
	var uLocal_8128 = 5;
	var uLocal_8129 = 0;
	var uLocal_8130 = 0;
	var uLocal_8131 = 0;
	var uLocal_8132 = 0;
	var uLocal_8133 = 0;
	var uLocal_8134 = 0;
	var uLocal_8135 = 0;
	var uLocal_8136 = 0;
	var uLocal_8137 = 0;
	var uLocal_8138 = 0;
	var uLocal_8139 = 10;
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
	var uLocal_8160 = 3;
	var uLocal_8161 = 500;
	var uLocal_8162 = 10000;
	var uLocal_8163 = 0;
	var uLocal_8164 = 3;
	var uLocal_8165 = 500;
	var uLocal_8166 = 10000;
	var uLocal_8167 = 0;
	var uLocal_8168 = 3;
	var uLocal_8169 = 500;
	var uLocal_8170 = 10000;
	var uLocal_8171 = 0;
	var uLocal_8172 = 3;
	var uLocal_8173 = 500;
	var uLocal_8174 = 10000;
	var uLocal_8175 = 0;
	var uLocal_8176 = 3;
	var uLocal_8177 = 500;
	var uLocal_8178 = 10000;
	var uLocal_8179 = 0;
	var uLocal_8180 = 0;
	var uLocal_8181 = 0;
	var uLocal_8182 = 0;
	var uLocal_8183 = 0;
	var uLocal_8184 = 0;
	var uLocal_8185 = 0;
	var uLocal_8186 = 3;
	var uLocal_8187 = 0;
	var uLocal_8188 = 0;
	var uLocal_8189 = 0;
	var uLocal_8190 = 0;
	var uLocal_8191 = -1;
	var uLocal_8192 = 0;
	var uLocal_8193 = 5;
	var uLocal_8194 = 0;
	var uLocal_8195 = 0;
	var uLocal_8196 = 0;
	var uLocal_8197 = 0;
	var uLocal_8198 = 0;
	var uLocal_8199 = 0;
	var uLocal_8200 = 0;
	var uLocal_8201 = 0;
	var uLocal_8202 = 0;
	var uLocal_8203 = 0;
	var uLocal_8204 = 10;
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
	var uLocal_8225 = 3;
	var uLocal_8226 = 500;
	var uLocal_8227 = 10000;
	var uLocal_8228 = 0;
	var uLocal_8229 = 3;
	var uLocal_8230 = 500;
	var uLocal_8231 = 10000;
	var uLocal_8232 = 0;
	var uLocal_8233 = 3;
	var uLocal_8234 = 500;
	var uLocal_8235 = 10000;
	var uLocal_8236 = 0;
	var uLocal_8237 = 3;
	var uLocal_8238 = 500;
	var uLocal_8239 = 10000;
	var uLocal_8240 = 0;
	var uLocal_8241 = 3;
	var uLocal_8242 = 500;
	var uLocal_8243 = 10000;
	var uLocal_8244 = 0;
	var uLocal_8245 = 0;
	var uLocal_8246 = 0;
	var uLocal_8247 = 0;
	var uLocal_8248 = 0;
	var uLocal_8249 = 0;
	var uLocal_8250 = 0;
	var uLocal_8251 = 3;
	var uLocal_8252 = 0;
	var uLocal_8253 = 0;
	var uLocal_8254 = 0;
	var uLocal_8255 = 0;
	var uLocal_8256 = -1;
	var uLocal_8257 = 0;
	var uLocal_8258 = 5;
	var uLocal_8259 = 0;
	var uLocal_8260 = 0;
	var uLocal_8261 = 0;
	var uLocal_8262 = 0;
	var uLocal_8263 = 0;
	var uLocal_8264 = 0;
	var uLocal_8265 = 0;
	var uLocal_8266 = 0;
	var uLocal_8267 = 0;
	var uLocal_8268 = 0;
	var uLocal_8269 = 10;
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
	var uLocal_8290 = 3;
	var uLocal_8291 = 500;
	var uLocal_8292 = 10000;
	var uLocal_8293 = 0;
	var uLocal_8294 = 3;
	var uLocal_8295 = 500;
	var uLocal_8296 = 10000;
	var uLocal_8297 = 0;
	var uLocal_8298 = 3;
	var uLocal_8299 = 500;
	var uLocal_8300 = 10000;
	var uLocal_8301 = 0;
	var uLocal_8302 = 3;
	var uLocal_8303 = 500;
	var uLocal_8304 = 10000;
	var uLocal_8305 = 0;
	var uLocal_8306 = 3;
	var uLocal_8307 = 500;
	var uLocal_8308 = 10000;
	var uLocal_8309 = 0;
	var uLocal_8310 = 0;
	var uLocal_8311 = 0;
	var uLocal_8312 = 0;
	var uLocal_8313 = 0;
	var uLocal_8314 = 0;
	var uLocal_8315 = 0;
	var uLocal_8316 = 3;
	var uLocal_8317 = 0;
	var uLocal_8318 = 0;
	var uLocal_8319 = 0;
	var uLocal_8320 = 0;
	var uLocal_8321 = -1;
	var uLocal_8322 = 0;
	var uLocal_8323 = 5;
	var uLocal_8324 = 0;
	var uLocal_8325 = 0;
	var uLocal_8326 = 0;
	var uLocal_8327 = 0;
	var uLocal_8328 = 0;
	var uLocal_8329 = 0;
	var uLocal_8330 = 0;
	var uLocal_8331 = 0;
	var uLocal_8332 = 0;
	var uLocal_8333 = 0;
	var uLocal_8334 = 10;
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
	var uLocal_8355 = 3;
	var uLocal_8356 = 500;
	var uLocal_8357 = 10000;
	var uLocal_8358 = 0;
	var uLocal_8359 = 3;
	var uLocal_8360 = 500;
	var uLocal_8361 = 10000;
	var uLocal_8362 = 0;
	var uLocal_8363 = 3;
	var uLocal_8364 = 500;
	var uLocal_8365 = 10000;
	var uLocal_8366 = 0;
	var uLocal_8367 = 3;
	var uLocal_8368 = 500;
	var uLocal_8369 = 10000;
	var uLocal_8370 = 0;
	var uLocal_8371 = 3;
	var uLocal_8372 = 500;
	var uLocal_8373 = 10000;
	var uLocal_8374 = 0;
	var uLocal_8375 = 0;
	var uLocal_8376 = 0;
	var uLocal_8377 = 0;
	var uLocal_8378 = 0;
	var uLocal_8379 = 0;
	var uLocal_8380 = 0;
	var uLocal_8381 = 3;
	var uLocal_8382 = 0;
	var uLocal_8383 = 0;
	var uLocal_8384 = 0;
	var uLocal_8385 = 0;
	var uLocal_8386 = -1;
	var uLocal_8387 = 0;
	var uLocal_8388 = 5;
	var uLocal_8389 = 0;
	var uLocal_8390 = 0;
	var uLocal_8391 = 0;
	var uLocal_8392 = 0;
	var uLocal_8393 = 0;
	var uLocal_8394 = 0;
	var uLocal_8395 = 0;
	var uLocal_8396 = 0;
	var uLocal_8397 = 0;
	var uLocal_8398 = 0;
	var uLocal_8399 = 10;
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
	var uLocal_8420 = 3;
	var uLocal_8421 = 500;
	var uLocal_8422 = 10000;
	var uLocal_8423 = 0;
	var uLocal_8424 = 3;
	var uLocal_8425 = 500;
	var uLocal_8426 = 10000;
	var uLocal_8427 = 0;
	var uLocal_8428 = 3;
	var uLocal_8429 = 500;
	var uLocal_8430 = 10000;
	var uLocal_8431 = 0;
	var uLocal_8432 = 3;
	var uLocal_8433 = 500;
	var uLocal_8434 = 10000;
	var uLocal_8435 = 0;
	var uLocal_8436 = 3;
	var uLocal_8437 = 500;
	var uLocal_8438 = 10000;
	var uLocal_8439 = 0;
	var uLocal_8440 = 0;
	var uLocal_8441 = 0;
	var uLocal_8442 = 0;
	var uLocal_8443 = 0;
	var uLocal_8444 = 0;
	var uLocal_8445 = 0;
	var uLocal_8446 = 3;
	var uLocal_8447 = 0;
	var uLocal_8448 = 0;
	var uLocal_8449 = 0;
	var uLocal_8450 = 0;
	var uLocal_8451 = -1;
	var uLocal_8452 = 0;
	var uLocal_8453 = 5;
	var uLocal_8454 = 0;
	var uLocal_8455 = 0;
	var uLocal_8456 = 0;
	var uLocal_8457 = 0;
	var uLocal_8458 = 0;
	var uLocal_8459 = 0;
	var uLocal_8460 = 0;
	var uLocal_8461 = 0;
	var uLocal_8462 = 0;
	var uLocal_8463 = 0;
	var uLocal_8464 = 10;
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
	var uLocal_8485 = 3;
	var uLocal_8486 = 500;
	var uLocal_8487 = 10000;
	var uLocal_8488 = 0;
	var uLocal_8489 = 3;
	var uLocal_8490 = 500;
	var uLocal_8491 = 10000;
	var uLocal_8492 = 0;
	var uLocal_8493 = 3;
	var uLocal_8494 = 500;
	var uLocal_8495 = 10000;
	var uLocal_8496 = 0;
	var uLocal_8497 = 3;
	var uLocal_8498 = 500;
	var uLocal_8499 = 10000;
	var uLocal_8500 = 0;
	var uLocal_8501 = 3;
	var uLocal_8502 = 500;
	var uLocal_8503 = 10000;
	var uLocal_8504 = 0;
	var uLocal_8505 = 0;
	var uLocal_8506 = 0;
	var uLocal_8507 = 1;
	var uLocal_8508 = 0;
	var uLocal_8509 = 0;
	var uLocal_8510 = 0;
	var uLocal_8511 = 0;
	var uLocal_8512 = 0;
	var uLocal_8513 = 0;
	var uLocal_8514 = 0;
	var uLocal_8515 = 0;
	var uLocal_8516 = 0;
	var uLocal_8517 = 0;
	var uLocal_8518 = 0;
	var uLocal_8519 = 0;
	var uLocal_8520 = 65;
	var uLocal_8521 = 0;
	var uLocal_8522 = 0;
	var uLocal_8523 = 0;
	var uLocal_8524 = 0;
	var uLocal_8525 = 0;
	var uLocal_8526 = 0;
	var uLocal_8527 = 0;
	var uLocal_8528 = 0;
	var uLocal_8529 = 0;
	var uLocal_8530 = 0;
	var uLocal_8531 = 0;
	var uLocal_8532 = 0;
	var uLocal_8533 = 0;
	var uLocal_8534 = 0;
	var uLocal_8535 = 0;
	var uLocal_8536 = 0;
	var uLocal_8537 = 0;
	var uLocal_8538 = 0;
	var uLocal_8539 = 0;
	var uLocal_8540 = 0;
	var uLocal_8541 = 0;
	var uLocal_8542 = 0;
	var uLocal_8543 = 0;
	var uLocal_8544 = 0;
	var uLocal_8545 = 0;
	var uLocal_8546 = 0;
	var uLocal_8547 = 0;
	var uLocal_8548 = 0;
	var uLocal_8549 = 0;
	var uLocal_8550 = 0;
	var uLocal_8551 = 0;
	var uLocal_8552 = 0;
	var uLocal_8553 = 0;
	var uLocal_8554 = 0;
	var uLocal_8555 = 0;
	var uLocal_8556 = 0;
	var uLocal_8557 = 0;
	var uLocal_8558 = 0;
	var uLocal_8559 = 0;
	var uLocal_8560 = 0;
	var uLocal_8561 = 0;
	var uLocal_8562 = 0;
	var uLocal_8563 = 0;
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
	var uLocal_8574 = 0;
	var uLocal_8575 = 0;
	var uLocal_8576 = 0;
	var uLocal_8577 = 0;
	var uLocal_8578 = 0;
	var uLocal_8579 = 0;
	var uLocal_8580 = 0;
	var uLocal_8581 = 0;
	var uLocal_8582 = 0;
	var uLocal_8583 = 0;
	var uLocal_8584 = 0;
	var uLocal_8585 = 0;
	var uLocal_8586 = 0;
	var uLocal_8587 = 0;
	var uLocal_8588 = 0;
	var uLocal_8589 = 0;
	var uLocal_8590 = 0;
	var uLocal_8591 = 0;
	var uLocal_8592 = 0;
	var uLocal_8593 = 0;
	var uLocal_8594 = 0;
	var uLocal_8595 = 0;
	var uLocal_8596 = 0;
	var uLocal_8597 = 0;
	var uLocal_8598 = 0;
	var uLocal_8599 = 0;
	var uLocal_8600 = 0;
	var uLocal_8601 = 0;
	var uLocal_8602 = 0;
	var uLocal_8603 = 0;
	var uLocal_8604 = 0;
	var uLocal_8605 = 0;
	var uLocal_8606 = 0;
	var uLocal_8607 = 0;
	var uLocal_8608 = 0;
	var uLocal_8609 = 0;
	var uLocal_8610 = 0;
	var uLocal_8611 = 0;
	var uLocal_8612 = 0;
	var uLocal_8613 = 0;
	var uLocal_8614 = 0;
	var uLocal_8615 = 0;
	var uLocal_8616 = 0;
	var uLocal_8617 = 0;
	var uLocal_8618 = 0;
	var uLocal_8619 = 0;
	var uLocal_8620 = 0;
	var uLocal_8621 = 0;
	var uLocal_8622 = 0;
	var uLocal_8623 = 0;
	var uLocal_8624 = 0;
	var uLocal_8625 = 0;
	var uLocal_8626 = 0;
	var uLocal_8627 = 0;
	var uLocal_8628 = 0;
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
	var uLocal_8639 = 0;
	var uLocal_8640 = 0;
	var uLocal_8641 = 0;
	var uLocal_8642 = 0;
	var uLocal_8643 = 0;
	var uLocal_8644 = 0;
	var uLocal_8645 = 0;
	var uLocal_8646 = 0;
	var uLocal_8647 = 0;
	var uLocal_8648 = 0;
	var uLocal_8649 = 0;
	var uLocal_8650 = 0;
	var uLocal_8651 = 0;
	var uLocal_8652 = 0;
	var uLocal_8653 = 0;
	var uLocal_8654 = 0;
	var uLocal_8655 = 0;
	var uLocal_8656 = 0;
	var uLocal_8657 = 0;
	var uLocal_8658 = 0;
	var uLocal_8659 = 0;
	var uLocal_8660 = 0;
	var uLocal_8661 = 0;
	var uLocal_8662 = 0;
	var uLocal_8663 = 0;
	var uLocal_8664 = 0;
	var uLocal_8665 = 0;
	var uLocal_8666 = 0;
	var uLocal_8667 = 0;
	var uLocal_8668 = 0;
	var uLocal_8669 = 0;
	var uLocal_8670 = 0;
	var uLocal_8671 = 0;
	var uLocal_8672 = 0;
	var uLocal_8673 = 0;
	var uLocal_8674 = 0;
	var uLocal_8675 = 0;
	var uLocal_8676 = 0;
	var uLocal_8677 = 0;
	var uLocal_8678 = 0;
	var uLocal_8679 = 0;
	var uLocal_8680 = 0;
	var uLocal_8681 = 0;
	var uLocal_8682 = 0;
	var uLocal_8683 = 0;
	var uLocal_8684 = 0;
	var uLocal_8685 = 0;
	var uLocal_8686 = 0;
	var uLocal_8687 = 0;
	var uLocal_8688 = 0;
	var uLocal_8689 = 0;
	var uLocal_8690 = 0;
	var uLocal_8691 = 0;
	var uLocal_8692 = 0;
	var uLocal_8693 = 0;
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
	var uLocal_8704 = 0;
	var uLocal_8705 = 0;
	var uLocal_8706 = 0;
	var uLocal_8707 = 0;
	var uLocal_8708 = 0;
	var uLocal_8709 = 0;
	var uLocal_8710 = 0;
	var uLocal_8711 = 0;
	var uLocal_8712 = 0;
	var uLocal_8713 = 0;
	var uLocal_8714 = 0;
	var uLocal_8715 = 0;
	var uLocal_8716 = 0;
	var uLocal_8717 = 0;
	var uLocal_8718 = 0;
	var uLocal_8719 = 0;
	var uLocal_8720 = 0;
	var uLocal_8721 = 0;
	var uLocal_8722 = 0;
	var uLocal_8723 = 0;
	var uLocal_8724 = 0;
	var uLocal_8725 = 0;
	var uLocal_8726 = 0;
	var uLocal_8727 = 0;
	var uLocal_8728 = 0;
	var uLocal_8729 = 0;
	var uLocal_8730 = 0;
	var uLocal_8731 = 0;
	var uLocal_8732 = 0;
	var uLocal_8733 = 0;
	var uLocal_8734 = 0;
	var uLocal_8735 = 0;
	var uLocal_8736 = 0;
	var uLocal_8737 = 0;
	var uLocal_8738 = 0;
	var uLocal_8739 = 0;
	var uLocal_8740 = 0;
	var uLocal_8741 = 0;
	var uLocal_8742 = 0;
	var uLocal_8743 = 0;
	var uLocal_8744 = 0;
	var uLocal_8745 = 0;
	var uLocal_8746 = 0;
	var uLocal_8747 = 0;
	var uLocal_8748 = 0;
	var uLocal_8749 = 0;
	var uLocal_8750 = 0;
	var uLocal_8751 = 0;
	var uLocal_8752 = 0;
	var uLocal_8753 = 0;
	var uLocal_8754 = 0;
	var uLocal_8755 = 0;
	var uLocal_8756 = 0;
	var uLocal_8757 = 0;
	var uLocal_8758 = 0;
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
	var uLocal_8769 = 0;
	var uLocal_8770 = 0;
	var uLocal_8771 = 0;
	var uLocal_8772 = 0;
	var uLocal_8773 = 0;
	var uLocal_8774 = 0;
	var uLocal_8775 = 0;
	var uLocal_8776 = 0;
	var uLocal_8777 = 0;
	var uLocal_8778 = 0;
	var uLocal_8779 = 0;
	var uLocal_8780 = 0;
	var uLocal_8781 = 0;
	var uLocal_8782 = 0;
	var uLocal_8783 = 0;
	var uLocal_8784 = 0;
	var uLocal_8785 = 0;
	var uLocal_8786 = 0;
	var uLocal_8787 = 0;
	var uLocal_8788 = 0;
	var uLocal_8789 = 0;
	var uLocal_8790 = 0;
	var uLocal_8791 = 0;
	var uLocal_8792 = 0;
	var uLocal_8793 = 0;
	var uLocal_8794 = 0;
	var uLocal_8795 = 0;
	var uLocal_8796 = 0;
	var uLocal_8797 = 0;
	var uLocal_8798 = 0;
	var uLocal_8799 = 0;
	var uLocal_8800 = 0;
	var uLocal_8801 = 0;
	var uLocal_8802 = 0;
	var uLocal_8803 = 0;
	var uLocal_8804 = 0;
	var uLocal_8805 = 0;
	var uLocal_8806 = 0;
	var uLocal_8807 = 0;
	var uLocal_8808 = 0;
	var uLocal_8809 = 0;
	var uLocal_8810 = 0;
	var uLocal_8811 = 0;
	var uLocal_8812 = 0;
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
	var uLocal_8825 = 0;
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
	var uLocal_9301 = 1097859072;
	var uLocal_9302 = 1101004800;
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
	var uLocal_9329 = 4;
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
	var uLocal_9401 = 40;
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
	var uLocal_9606 = 0;
	var uLocal_9607 = 0;
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
	var uLocal_9634 = 0;
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
	var uLocal_9706 = 0;
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
	var uLocal_10042 = 40;
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
	var uLocal_10347 = 0;
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
	var uLocal_10683 = 60;
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
	var uLocal_10988 = 0;
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
	var uLocal_11644 = 15;
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
	var uLocal_11885 = 10;
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
	var uLocal_11915 = -1;
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
	var uLocal_11927 = 65;
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
	var uLocal_11938 = -1569615261;
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
	var uLocal_11949 = 0;
	var uLocal_11950 = 0;
	var uLocal_11951 = -1569615261;
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
	var uLocal_11964 = -1569615261;
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
	var uLocal_11977 = -1569615261;
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
	var uLocal_11990 = -1569615261;
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
	var uLocal_12003 = -1569615261;
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
	var uLocal_12016 = -1569615261;
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
	var uLocal_12029 = -1569615261;
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
	var uLocal_12042 = -1569615261;
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
	var uLocal_12055 = -1569615261;
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
	var uLocal_12068 = -1569615261;
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
	var uLocal_12081 = -1569615261;
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
	var uLocal_12094 = -1569615261;
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
	var uLocal_12107 = -1569615261;
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
	var uLocal_12120 = -1569615261;
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
	var uLocal_12133 = -1569615261;
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
	var uLocal_12146 = -1569615261;
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
	var uLocal_12159 = -1569615261;
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
	var uLocal_12172 = -1569615261;
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
	var uLocal_12185 = -1569615261;
	var uLocal_12186 = 0;
	var uLocal_12187 = 0;
	var uLocal_12188 = 0;
	var uLocal_12189 = 0;
	var uLocal_12190 = 0;
	var uLocal_12191 = 0;
	var uLocal_12192 = 0;
	var uLocal_12193 = 0;
	var uLocal_12194 = 0;
	var uLocal_12195 = 0;
	var uLocal_12196 = 0;
	var uLocal_12197 = 0;
	var uLocal_12198 = -1569615261;
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
	var uLocal_12211 = -1569615261;
	var uLocal_12212 = 0;
	var uLocal_12213 = 0;
	var uLocal_12214 = 0;
	var uLocal_12215 = 0;
	var uLocal_12216 = 0;
	var uLocal_12217 = 0;
	var uLocal_12218 = 0;
	var uLocal_12219 = 0;
	var uLocal_12220 = 0;
	var uLocal_12221 = 0;
	var uLocal_12222 = 0;
	var uLocal_12223 = 0;
	var uLocal_12224 = -1569615261;
	var uLocal_12225 = 0;
	var uLocal_12226 = 0;
	var uLocal_12227 = 0;
	var uLocal_12228 = 0;
	var uLocal_12229 = 0;
	var uLocal_12230 = 0;
	var uLocal_12231 = 0;
	var uLocal_12232 = 0;
	var uLocal_12233 = 0;
	var uLocal_12234 = 0;
	var uLocal_12235 = 0;
	var uLocal_12236 = 0;
	var uLocal_12237 = -1569615261;
	var uLocal_12238 = 0;
	var uLocal_12239 = 0;
	var uLocal_12240 = 0;
	var uLocal_12241 = 0;
	var uLocal_12242 = 0;
	var uLocal_12243 = 0;
	var uLocal_12244 = 0;
	var uLocal_12245 = 0;
	var uLocal_12246 = 0;
	var uLocal_12247 = 0;
	var uLocal_12248 = 0;
	var uLocal_12249 = 0;
	var uLocal_12250 = -1569615261;
	var uLocal_12251 = 0;
	var uLocal_12252 = 0;
	var uLocal_12253 = 0;
	var uLocal_12254 = 0;
	var uLocal_12255 = 0;
	var uLocal_12256 = 0;
	var uLocal_12257 = 0;
	var uLocal_12258 = 0;
	var uLocal_12259 = 0;
	var uLocal_12260 = 0;
	var uLocal_12261 = 0;
	var uLocal_12262 = 0;
	var uLocal_12263 = -1569615261;
	var uLocal_12264 = 0;
	var uLocal_12265 = 0;
	var uLocal_12266 = 0;
	var uLocal_12267 = 0;
	var uLocal_12268 = 0;
	var uLocal_12269 = 0;
	var uLocal_12270 = 0;
	var uLocal_12271 = 0;
	var uLocal_12272 = 0;
	var uLocal_12273 = 0;
	var uLocal_12274 = 0;
	var uLocal_12275 = 0;
	var uLocal_12276 = -1569615261;
	var uLocal_12277 = 0;
	var uLocal_12278 = 0;
	var uLocal_12279 = 0;
	var uLocal_12280 = 0;
	var uLocal_12281 = 0;
	var uLocal_12282 = 0;
	var uLocal_12283 = 0;
	var uLocal_12284 = 0;
	var uLocal_12285 = 0;
	var uLocal_12286 = 0;
	var uLocal_12287 = 0;
	var uLocal_12288 = 0;
	var uLocal_12289 = -1569615261;
	var uLocal_12290 = 0;
	var uLocal_12291 = 0;
	var uLocal_12292 = 0;
	var uLocal_12293 = 0;
	var uLocal_12294 = 0;
	var uLocal_12295 = 0;
	var uLocal_12296 = 0;
	var uLocal_12297 = 0;
	var uLocal_12298 = 0;
	var uLocal_12299 = 0;
	var uLocal_12300 = 0;
	var uLocal_12301 = 0;
	var uLocal_12302 = -1569615261;
	var uLocal_12303 = 0;
	var uLocal_12304 = 0;
	var uLocal_12305 = 0;
	var uLocal_12306 = 0;
	var uLocal_12307 = 0;
	var uLocal_12308 = 0;
	var uLocal_12309 = 0;
	var uLocal_12310 = 0;
	var uLocal_12311 = 0;
	var uLocal_12312 = 0;
	var uLocal_12313 = 0;
	var uLocal_12314 = 0;
	var uLocal_12315 = -1569615261;
	var uLocal_12316 = 0;
	var uLocal_12317 = 0;
	var uLocal_12318 = 0;
	var uLocal_12319 = 0;
	var uLocal_12320 = 0;
	var uLocal_12321 = 0;
	var uLocal_12322 = 0;
	var uLocal_12323 = 0;
	var uLocal_12324 = 0;
	var uLocal_12325 = 0;
	var uLocal_12326 = 0;
	var uLocal_12327 = 0;
	var uLocal_12328 = -1569615261;
	var uLocal_12329 = 0;
	var uLocal_12330 = 0;
	var uLocal_12331 = 0;
	var uLocal_12332 = 0;
	var uLocal_12333 = 0;
	var uLocal_12334 = 0;
	var uLocal_12335 = 0;
	var uLocal_12336 = 0;
	var uLocal_12337 = 0;
	var uLocal_12338 = 0;
	var uLocal_12339 = 0;
	var uLocal_12340 = 0;
	var uLocal_12341 = -1569615261;
	var uLocal_12342 = 0;
	var uLocal_12343 = 0;
	var uLocal_12344 = 0;
	var uLocal_12345 = 0;
	var uLocal_12346 = 0;
	var uLocal_12347 = 0;
	var uLocal_12348 = 0;
	var uLocal_12349 = 0;
	var uLocal_12350 = 0;
	var uLocal_12351 = 0;
	var uLocal_12352 = 0;
	var uLocal_12353 = 0;
	var uLocal_12354 = -1569615261;
	var uLocal_12355 = 0;
	var uLocal_12356 = 0;
	var uLocal_12357 = 0;
	var uLocal_12358 = 0;
	var uLocal_12359 = 0;
	var uLocal_12360 = 0;
	var uLocal_12361 = 0;
	var uLocal_12362 = 0;
	var uLocal_12363 = 0;
	var uLocal_12364 = 0;
	var uLocal_12365 = 0;
	var uLocal_12366 = 0;
	var uLocal_12367 = -1569615261;
	var uLocal_12368 = 0;
	var uLocal_12369 = 0;
	var uLocal_12370 = 0;
	var uLocal_12371 = 0;
	var uLocal_12372 = 0;
	var uLocal_12373 = 0;
	var uLocal_12374 = 0;
	var uLocal_12375 = 0;
	var uLocal_12376 = 0;
	var uLocal_12377 = 0;
	var uLocal_12378 = 0;
	var uLocal_12379 = 0;
	var uLocal_12380 = -1569615261;
	var uLocal_12381 = 0;
	var uLocal_12382 = 0;
	var uLocal_12383 = 0;
	var uLocal_12384 = 0;
	var uLocal_12385 = 0;
	var uLocal_12386 = 0;
	var uLocal_12387 = 0;
	var uLocal_12388 = 0;
	var uLocal_12389 = 0;
	var uLocal_12390 = 0;
	var uLocal_12391 = 0;
	var uLocal_12392 = 0;
	var uLocal_12393 = -1569615261;
	var uLocal_12394 = 0;
	var uLocal_12395 = 0;
	var uLocal_12396 = 0;
	var uLocal_12397 = 0;
	var uLocal_12398 = 0;
	var uLocal_12399 = 0;
	var uLocal_12400 = 0;
	var uLocal_12401 = 0;
	var uLocal_12402 = 0;
	var uLocal_12403 = 0;
	var uLocal_12404 = 0;
	var uLocal_12405 = 0;
	var uLocal_12406 = -1569615261;
	var uLocal_12407 = 0;
	var uLocal_12408 = 0;
	var uLocal_12409 = 0;
	var uLocal_12410 = 0;
	var uLocal_12411 = 0;
	var uLocal_12412 = 0;
	var uLocal_12413 = 0;
	var uLocal_12414 = 0;
	var uLocal_12415 = 0;
	var uLocal_12416 = 0;
	var uLocal_12417 = 0;
	var uLocal_12418 = 0;
	var uLocal_12419 = -1569615261;
	var uLocal_12420 = 0;
	var uLocal_12421 = 0;
	var uLocal_12422 = 0;
	var uLocal_12423 = 0;
	var uLocal_12424 = 0;
	var uLocal_12425 = 0;
	var uLocal_12426 = 0;
	var uLocal_12427 = 0;
	var uLocal_12428 = 0;
	var uLocal_12429 = 0;
	var uLocal_12430 = 0;
	var uLocal_12431 = 0;
	var uLocal_12432 = -1569615261;
	var uLocal_12433 = 0;
	var uLocal_12434 = 0;
	var uLocal_12435 = 0;
	var uLocal_12436 = 0;
	var uLocal_12437 = 0;
	var uLocal_12438 = 0;
	var uLocal_12439 = 0;
	var uLocal_12440 = 0;
	var uLocal_12441 = 0;
	var uLocal_12442 = 0;
	var uLocal_12443 = 0;
	var uLocal_12444 = 0;
	var uLocal_12445 = -1569615261;
	var uLocal_12446 = 0;
	var uLocal_12447 = 0;
	var uLocal_12448 = 0;
	var uLocal_12449 = 0;
	var uLocal_12450 = 0;
	var uLocal_12451 = 0;
	var uLocal_12452 = 0;
	var uLocal_12453 = 0;
	var uLocal_12454 = 0;
	var uLocal_12455 = 0;
	var uLocal_12456 = 0;
	var uLocal_12457 = 0;
	var uLocal_12458 = -1569615261;
	var uLocal_12459 = 0;
	var uLocal_12460 = 0;
	var uLocal_12461 = 0;
	var uLocal_12462 = 0;
	var uLocal_12463 = 0;
	var uLocal_12464 = 0;
	var uLocal_12465 = 0;
	var uLocal_12466 = 0;
	var uLocal_12467 = 0;
	var uLocal_12468 = 0;
	var uLocal_12469 = 0;
	var uLocal_12470 = 0;
	var uLocal_12471 = -1569615261;
	var uLocal_12472 = 0;
	var uLocal_12473 = 0;
	var uLocal_12474 = 0;
	var uLocal_12475 = 0;
	var uLocal_12476 = 0;
	var uLocal_12477 = 0;
	var uLocal_12478 = 0;
	var uLocal_12479 = 0;
	var uLocal_12480 = 0;
	var uLocal_12481 = 0;
	var uLocal_12482 = 0;
	var uLocal_12483 = 0;
	var uLocal_12484 = -1569615261;
	var uLocal_12485 = 0;
	var uLocal_12486 = 0;
	var uLocal_12487 = 0;
	var uLocal_12488 = 0;
	var uLocal_12489 = 0;
	var uLocal_12490 = 0;
	var uLocal_12491 = 0;
	var uLocal_12492 = 0;
	var uLocal_12493 = 0;
	var uLocal_12494 = 0;
	var uLocal_12495 = 0;
	var uLocal_12496 = 0;
	var uLocal_12497 = -1569615261;
	var uLocal_12498 = 0;
	var uLocal_12499 = 0;
	var uLocal_12500 = 0;
	var uLocal_12501 = 0;
	var uLocal_12502 = 0;
	var uLocal_12503 = 0;
	var uLocal_12504 = 0;
	var uLocal_12505 = 0;
	var uLocal_12506 = 0;
	var uLocal_12507 = 0;
	var uLocal_12508 = 0;
	var uLocal_12509 = 0;
	var uLocal_12510 = -1569615261;
	var uLocal_12511 = 0;
	var uLocal_12512 = 0;
	var uLocal_12513 = 0;
	var uLocal_12514 = 0;
	var uLocal_12515 = 0;
	var uLocal_12516 = 0;
	var uLocal_12517 = 0;
	var uLocal_12518 = 0;
	var uLocal_12519 = 0;
	var uLocal_12520 = 0;
	var uLocal_12521 = 0;
	var uLocal_12522 = 0;
	var uLocal_12523 = -1569615261;
	var uLocal_12524 = 0;
	var uLocal_12525 = 0;
	var uLocal_12526 = 0;
	var uLocal_12527 = 0;
	var uLocal_12528 = 0;
	var uLocal_12529 = 0;
	var uLocal_12530 = 0;
	var uLocal_12531 = 0;
	var uLocal_12532 = 0;
	var uLocal_12533 = 0;
	var uLocal_12534 = 0;
	var uLocal_12535 = 0;
	var uLocal_12536 = -1569615261;
	var uLocal_12537 = 0;
	var uLocal_12538 = 0;
	var uLocal_12539 = 0;
	var uLocal_12540 = 0;
	var uLocal_12541 = 0;
	var uLocal_12542 = 0;
	var uLocal_12543 = 0;
	var uLocal_12544 = 0;
	var uLocal_12545 = 0;
	var uLocal_12546 = 0;
	var uLocal_12547 = 0;
	var uLocal_12548 = 0;
	var uLocal_12549 = -1569615261;
	var uLocal_12550 = 0;
	var uLocal_12551 = 0;
	var uLocal_12552 = 0;
	var uLocal_12553 = 0;
	var uLocal_12554 = 0;
	var uLocal_12555 = 0;
	var uLocal_12556 = 0;
	var uLocal_12557 = 0;
	var uLocal_12558 = 0;
	var uLocal_12559 = 0;
	var uLocal_12560 = 0;
	var uLocal_12561 = 0;
	var uLocal_12562 = -1569615261;
	var uLocal_12563 = 0;
	var uLocal_12564 = 0;
	var uLocal_12565 = 0;
	var uLocal_12566 = 0;
	var uLocal_12567 = 0;
	var uLocal_12568 = 0;
	var uLocal_12569 = 0;
	var uLocal_12570 = 0;
	var uLocal_12571 = 0;
	var uLocal_12572 = 0;
	var uLocal_12573 = 0;
	var uLocal_12574 = 0;
	var uLocal_12575 = -1569615261;
	var uLocal_12576 = 0;
	var uLocal_12577 = 0;
	var uLocal_12578 = 0;
	var uLocal_12579 = 0;
	var uLocal_12580 = 0;
	var uLocal_12581 = 0;
	var uLocal_12582 = 0;
	var uLocal_12583 = 0;
	var uLocal_12584 = 0;
	var uLocal_12585 = 0;
	var uLocal_12586 = 0;
	var uLocal_12587 = 0;
	var uLocal_12588 = -1569615261;
	var uLocal_12589 = 0;
	var uLocal_12590 = 0;
	var uLocal_12591 = 0;
	var uLocal_12592 = 0;
	var uLocal_12593 = 0;
	var uLocal_12594 = 0;
	var uLocal_12595 = 0;
	var uLocal_12596 = 0;
	var uLocal_12597 = 0;
	var uLocal_12598 = 0;
	var uLocal_12599 = 0;
	var uLocal_12600 = 0;
	var uLocal_12601 = -1569615261;
	var uLocal_12602 = 0;
	var uLocal_12603 = 0;
	var uLocal_12604 = 0;
	var uLocal_12605 = 0;
	var uLocal_12606 = 0;
	var uLocal_12607 = 0;
	var uLocal_12608 = 0;
	var uLocal_12609 = 0;
	var uLocal_12610 = 0;
	var uLocal_12611 = 0;
	var uLocal_12612 = 0;
	var uLocal_12613 = 0;
	var uLocal_12614 = -1569615261;
	var uLocal_12615 = 0;
	var uLocal_12616 = 0;
	var uLocal_12617 = 0;
	var uLocal_12618 = 0;
	var uLocal_12619 = 0;
	var uLocal_12620 = 0;
	var uLocal_12621 = 0;
	var uLocal_12622 = 0;
	var uLocal_12623 = 0;
	var uLocal_12624 = 0;
	var uLocal_12625 = 0;
	var uLocal_12626 = 0;
	var uLocal_12627 = -1569615261;
	var uLocal_12628 = 0;
	var uLocal_12629 = 0;
	var uLocal_12630 = 0;
	var uLocal_12631 = 0;
	var uLocal_12632 = 0;
	var uLocal_12633 = 0;
	var uLocal_12634 = 0;
	var uLocal_12635 = 0;
	var uLocal_12636 = 0;
	var uLocal_12637 = 0;
	var uLocal_12638 = 0;
	var uLocal_12639 = 0;
	var uLocal_12640 = -1569615261;
	var uLocal_12641 = 0;
	var uLocal_12642 = 0;
	var uLocal_12643 = 0;
	var uLocal_12644 = 0;
	var uLocal_12645 = 0;
	var uLocal_12646 = 0;
	var uLocal_12647 = 0;
	var uLocal_12648 = 0;
	var uLocal_12649 = 0;
	var uLocal_12650 = 0;
	var uLocal_12651 = 0;
	var uLocal_12652 = 0;
	var uLocal_12653 = -1569615261;
	var uLocal_12654 = 0;
	var uLocal_12655 = 0;
	var uLocal_12656 = 0;
	var uLocal_12657 = 0;
	var uLocal_12658 = 0;
	var uLocal_12659 = 0;
	var uLocal_12660 = 0;
	var uLocal_12661 = 0;
	var uLocal_12662 = 0;
	var uLocal_12663 = 0;
	var uLocal_12664 = 0;
	var uLocal_12665 = 0;
	var uLocal_12666 = -1569615261;
	var uLocal_12667 = 0;
	var uLocal_12668 = 0;
	var uLocal_12669 = 0;
	var uLocal_12670 = 0;
	var uLocal_12671 = 0;
	var uLocal_12672 = 0;
	var uLocal_12673 = 0;
	var uLocal_12674 = 0;
	var uLocal_12675 = 0;
	var uLocal_12676 = 0;
	var uLocal_12677 = 0;
	var uLocal_12678 = 0;
	var uLocal_12679 = -1569615261;
	var uLocal_12680 = 0;
	var uLocal_12681 = 0;
	var uLocal_12682 = 0;
	var uLocal_12683 = 0;
	var uLocal_12684 = 0;
	var uLocal_12685 = 0;
	var uLocal_12686 = 0;
	var uLocal_12687 = 0;
	var uLocal_12688 = 0;
	var uLocal_12689 = 0;
	var uLocal_12690 = 0;
	var uLocal_12691 = 0;
	var uLocal_12692 = -1569615261;
	var uLocal_12693 = 0;
	var uLocal_12694 = 0;
	var uLocal_12695 = 0;
	var uLocal_12696 = 0;
	var uLocal_12697 = 0;
	var uLocal_12698 = 0;
	var uLocal_12699 = 0;
	var uLocal_12700 = 0;
	var uLocal_12701 = 0;
	var uLocal_12702 = 0;
	var uLocal_12703 = 0;
	var uLocal_12704 = 0;
	var uLocal_12705 = -1569615261;
	var uLocal_12706 = 0;
	var uLocal_12707 = 0;
	var uLocal_12708 = 0;
	var uLocal_12709 = 0;
	var uLocal_12710 = 0;
	var uLocal_12711 = 0;
	var uLocal_12712 = 0;
	var uLocal_12713 = 0;
	var uLocal_12714 = 0;
	var uLocal_12715 = 0;
	var uLocal_12716 = 0;
	var uLocal_12717 = 0;
	var uLocal_12718 = -1569615261;
	var uLocal_12719 = 0;
	var uLocal_12720 = 0;
	var uLocal_12721 = 0;
	var uLocal_12722 = 0;
	var uLocal_12723 = 0;
	var uLocal_12724 = 0;
	var uLocal_12725 = 0;
	var uLocal_12726 = 0;
	var uLocal_12727 = 0;
	var uLocal_12728 = 0;
	var uLocal_12729 = 0;
	var uLocal_12730 = 0;
	var uLocal_12731 = -1569615261;
	var uLocal_12732 = 0;
	var uLocal_12733 = 0;
	var uLocal_12734 = 0;
	var uLocal_12735 = 0;
	var uLocal_12736 = 0;
	var uLocal_12737 = 0;
	var uLocal_12738 = 0;
	var uLocal_12739 = 0;
	var uLocal_12740 = 0;
	var uLocal_12741 = 0;
	var uLocal_12742 = 0;
	var uLocal_12743 = 0;
	var uLocal_12744 = -1569615261;
	var uLocal_12745 = 0;
	var uLocal_12746 = 0;
	var uLocal_12747 = 0;
	var uLocal_12748 = 0;
	var uLocal_12749 = 0;
	var uLocal_12750 = 0;
	var uLocal_12751 = 0;
	var uLocal_12752 = 0;
	var uLocal_12753 = 0;
	var uLocal_12754 = 0;
	var uLocal_12755 = 0;
	var uLocal_12756 = 0;
	var uLocal_12757 = -1569615261;
	var uLocal_12758 = 0;
	var uLocal_12759 = 0;
	var uLocal_12760 = 0;
	var uLocal_12761 = 0;
	var uLocal_12762 = 0;
	var uLocal_12763 = 0;
	var uLocal_12764 = 0;
	var uLocal_12765 = 0;
	var uLocal_12766 = 0;
	var uLocal_12767 = 0;
	var uLocal_12768 = 0;
	var uLocal_12769 = 0;
	var uLocal_12770 = -1569615261;
	var uLocal_12771 = 0;
	var uLocal_12772 = 0;
	var uLocal_12773 = 0;
	var uLocal_12774 = 0;
	var uLocal_12775 = 0;
	var uLocal_12776 = 0;
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
	var uLocal_12788 = 1;
	var uLocal_12789 = 30;
	var uLocal_12790 = -1;
	var uLocal_12791 = 0;
	var uLocal_12792 = 1;
	var uLocal_12793 = 0;
	var uLocal_12794 = 0;
	var uLocal_12795 = 0;
	var uLocal_12796 = 0;
	var uLocal_12797 = 0;
	var uLocal_12798 = 0;
	var uLocal_12799 = 0;
	var uLocal_12800 = 0;
	var uLocal_12801 = 0;
	var uLocal_12802 = 1065353216;
	var uLocal_12803 = 0;
	var uLocal_12804 = 0;
	var uLocal_12805 = 1065353216;
	var uLocal_12806 = 1;
	var uLocal_12807 = 0;
	var uLocal_12808 = -1;
	var uLocal_12809 = 0;
	var uLocal_12810 = 1;
	var uLocal_12811 = 0;
	var uLocal_12812 = 0;
	var uLocal_12813 = 0;
	var uLocal_12814 = 0;
	var uLocal_12815 = 0;
	var uLocal_12816 = 0;
	var uLocal_12817 = 0;
	var uLocal_12818 = 0;
	var uLocal_12819 = 0;
	var uLocal_12820 = 1065353216;
	var uLocal_12821 = 0;
	var uLocal_12822 = 0;
	var uLocal_12823 = 1065353216;
	var uLocal_12824 = 1;
	var uLocal_12825 = 0;
	var uLocal_12826 = -1;
	var uLocal_12827 = 0;
	var uLocal_12828 = 1;
	var uLocal_12829 = 0;
	var uLocal_12830 = 0;
	var uLocal_12831 = 0;
	var uLocal_12832 = 0;
	var uLocal_12833 = 0;
	var uLocal_12834 = 0;
	var uLocal_12835 = 0;
	var uLocal_12836 = 0;
	var uLocal_12837 = 0;
	var uLocal_12838 = 1065353216;
	var uLocal_12839 = 0;
	var uLocal_12840 = 0;
	var uLocal_12841 = 1065353216;
	var uLocal_12842 = 1;
	var uLocal_12843 = 0;
	var uLocal_12844 = -1;
	var uLocal_12845 = 0;
	var uLocal_12846 = 1;
	var uLocal_12847 = 0;
	var uLocal_12848 = 0;
	var uLocal_12849 = 0;
	var uLocal_12850 = 0;
	var uLocal_12851 = 0;
	var uLocal_12852 = 0;
	var uLocal_12853 = 0;
	var uLocal_12854 = 0;
	var uLocal_12855 = 0;
	var uLocal_12856 = 1065353216;
	var uLocal_12857 = 0;
	var uLocal_12858 = 0;
	var uLocal_12859 = 1065353216;
	var uLocal_12860 = 1;
	var uLocal_12861 = 0;
	var uLocal_12862 = -1;
	var uLocal_12863 = 0;
	var uLocal_12864 = 1;
	var uLocal_12865 = 0;
	var uLocal_12866 = 0;
	var uLocal_12867 = 0;
	var uLocal_12868 = 0;
	var uLocal_12869 = 0;
	var uLocal_12870 = 0;
	var uLocal_12871 = 0;
	var uLocal_12872 = 0;
	var uLocal_12873 = 0;
	var uLocal_12874 = 1065353216;
	var uLocal_12875 = 0;
	var uLocal_12876 = 0;
	var uLocal_12877 = 1065353216;
	var uLocal_12878 = 1;
	var uLocal_12879 = 0;
	var uLocal_12880 = -1;
	var uLocal_12881 = 0;
	var uLocal_12882 = 1;
	var uLocal_12883 = 0;
	var uLocal_12884 = 0;
	var uLocal_12885 = 0;
	var uLocal_12886 = 0;
	var uLocal_12887 = 0;
	var uLocal_12888 = 0;
	var uLocal_12889 = 0;
	var uLocal_12890 = 0;
	var uLocal_12891 = 0;
	var uLocal_12892 = 1065353216;
	var uLocal_12893 = 0;
	var uLocal_12894 = 0;
	var uLocal_12895 = 1065353216;
	var uLocal_12896 = 1;
	var uLocal_12897 = 0;
	var uLocal_12898 = -1;
	var uLocal_12899 = 0;
	var uLocal_12900 = 1;
	var uLocal_12901 = 0;
	var uLocal_12902 = 0;
	var uLocal_12903 = 0;
	var uLocal_12904 = 0;
	var uLocal_12905 = 0;
	var uLocal_12906 = 0;
	var uLocal_12907 = 0;
	var uLocal_12908 = 0;
	var uLocal_12909 = 0;
	var uLocal_12910 = 1065353216;
	var uLocal_12911 = 0;
	var uLocal_12912 = 0;
	var uLocal_12913 = 1065353216;
	var uLocal_12914 = 1;
	var uLocal_12915 = 0;
	var uLocal_12916 = -1;
	var uLocal_12917 = 0;
	var uLocal_12918 = 1;
	var uLocal_12919 = 0;
	var uLocal_12920 = 0;
	var uLocal_12921 = 0;
	var uLocal_12922 = 0;
	var uLocal_12923 = 0;
	var uLocal_12924 = 0;
	var uLocal_12925 = 0;
	var uLocal_12926 = 0;
	var uLocal_12927 = 0;
	var uLocal_12928 = 1065353216;
	var uLocal_12929 = 0;
	var uLocal_12930 = 0;
	var uLocal_12931 = 1065353216;
	var uLocal_12932 = 1;
	var uLocal_12933 = 0;
	var uLocal_12934 = -1;
	var uLocal_12935 = 0;
	var uLocal_12936 = 1;
	var uLocal_12937 = 0;
	var uLocal_12938 = 0;
	var uLocal_12939 = 0;
	var uLocal_12940 = 0;
	var uLocal_12941 = 0;
	var uLocal_12942 = 0;
	var uLocal_12943 = 0;
	var uLocal_12944 = 0;
	var uLocal_12945 = 0;
	var uLocal_12946 = 1065353216;
	var uLocal_12947 = 0;
	var uLocal_12948 = 0;
	var uLocal_12949 = 1065353216;
	var uLocal_12950 = 1;
	var uLocal_12951 = 0;
	var uLocal_12952 = -1;
	var uLocal_12953 = 0;
	var uLocal_12954 = 1;
	var uLocal_12955 = 0;
	var uLocal_12956 = 0;
	var uLocal_12957 = 0;
	var uLocal_12958 = 0;
	var uLocal_12959 = 0;
	var uLocal_12960 = 0;
	var uLocal_12961 = 0;
	var uLocal_12962 = 0;
	var uLocal_12963 = 0;
	var uLocal_12964 = 1065353216;
	var uLocal_12965 = 0;
	var uLocal_12966 = 0;
	var uLocal_12967 = 1065353216;
	var uLocal_12968 = 1;
	var uLocal_12969 = 0;
	var uLocal_12970 = -1;
	var uLocal_12971 = 0;
	var uLocal_12972 = 1;
	var uLocal_12973 = 0;
	var uLocal_12974 = 0;
	var uLocal_12975 = 0;
	var uLocal_12976 = 0;
	var uLocal_12977 = 0;
	var uLocal_12978 = 0;
	var uLocal_12979 = 0;
	var uLocal_12980 = 0;
	var uLocal_12981 = 0;
	var uLocal_12982 = 1065353216;
	var uLocal_12983 = 0;
	var uLocal_12984 = 0;
	var uLocal_12985 = 1065353216;
	var uLocal_12986 = 1;
	var uLocal_12987 = 0;
	var uLocal_12988 = -1;
	var uLocal_12989 = 0;
	var uLocal_12990 = 1;
	var uLocal_12991 = 0;
	var uLocal_12992 = 0;
	var uLocal_12993 = 0;
	var uLocal_12994 = 0;
	var uLocal_12995 = 0;
	var uLocal_12996 = 0;
	var uLocal_12997 = 0;
	var uLocal_12998 = 0;
	var uLocal_12999 = 0;
	var uLocal_13000 = 1065353216;
	var uLocal_13001 = 0;
	var uLocal_13002 = 0;
	var uLocal_13003 = 1065353216;
	var uLocal_13004 = 1;
	var uLocal_13005 = 0;
	var uLocal_13006 = -1;
	var uLocal_13007 = 0;
	var uLocal_13008 = 1;
	var uLocal_13009 = 0;
	var uLocal_13010 = 0;
	var uLocal_13011 = 0;
	var uLocal_13012 = 0;
	var uLocal_13013 = 0;
	var uLocal_13014 = 0;
	var uLocal_13015 = 0;
	var uLocal_13016 = 0;
	var uLocal_13017 = 0;
	var uLocal_13018 = 1065353216;
	var uLocal_13019 = 0;
	var uLocal_13020 = 0;
	var uLocal_13021 = 1065353216;
	var uLocal_13022 = 1;
	var uLocal_13023 = 0;
	var uLocal_13024 = -1;
	var uLocal_13025 = 0;
	var uLocal_13026 = 1;
	var uLocal_13027 = 0;
	var uLocal_13028 = 0;
	var uLocal_13029 = 0;
	var uLocal_13030 = 0;
	var uLocal_13031 = 0;
	var uLocal_13032 = 0;
	var uLocal_13033 = 0;
	var uLocal_13034 = 0;
	var uLocal_13035 = 0;
	var uLocal_13036 = 1065353216;
	var uLocal_13037 = 0;
	var uLocal_13038 = 0;
	var uLocal_13039 = 1065353216;
	var uLocal_13040 = 1;
	var uLocal_13041 = 0;
	var uLocal_13042 = -1;
	var uLocal_13043 = 0;
	var uLocal_13044 = 1;
	var uLocal_13045 = 0;
	var uLocal_13046 = 0;
	var uLocal_13047 = 0;
	var uLocal_13048 = 0;
	var uLocal_13049 = 0;
	var uLocal_13050 = 0;
	var uLocal_13051 = 0;
	var uLocal_13052 = 0;
	var uLocal_13053 = 0;
	var uLocal_13054 = 1065353216;
	var uLocal_13055 = 0;
	var uLocal_13056 = 0;
	var uLocal_13057 = 1065353216;
	var uLocal_13058 = 1;
	var uLocal_13059 = 0;
	var uLocal_13060 = -1;
	var uLocal_13061 = 0;
	var uLocal_13062 = 1;
	var uLocal_13063 = 0;
	var uLocal_13064 = 0;
	var uLocal_13065 = 0;
	var uLocal_13066 = 0;
	var uLocal_13067 = 0;
	var uLocal_13068 = 0;
	var uLocal_13069 = 0;
	var uLocal_13070 = 0;
	var uLocal_13071 = 0;
	var uLocal_13072 = 1065353216;
	var uLocal_13073 = 0;
	var uLocal_13074 = 0;
	var uLocal_13075 = 1065353216;
	var uLocal_13076 = 1;
	var uLocal_13077 = 0;
	var uLocal_13078 = -1;
	var uLocal_13079 = 0;
	var uLocal_13080 = 1;
	var uLocal_13081 = 0;
	var uLocal_13082 = 0;
	var uLocal_13083 = 0;
	var uLocal_13084 = 0;
	var uLocal_13085 = 0;
	var uLocal_13086 = 0;
	var uLocal_13087 = 0;
	var uLocal_13088 = 0;
	var uLocal_13089 = 0;
	var uLocal_13090 = 1065353216;
	var uLocal_13091 = 0;
	var uLocal_13092 = 0;
	var uLocal_13093 = 1065353216;
	var uLocal_13094 = 1;
	var uLocal_13095 = 0;
	var uLocal_13096 = -1;
	var uLocal_13097 = 0;
	var uLocal_13098 = 1;
	var uLocal_13099 = 0;
	var uLocal_13100 = 0;
	var uLocal_13101 = 0;
	var uLocal_13102 = 0;
	var uLocal_13103 = 0;
	var uLocal_13104 = 0;
	var uLocal_13105 = 0;
	var uLocal_13106 = 0;
	var uLocal_13107 = 0;
	var uLocal_13108 = 1065353216;
	var uLocal_13109 = 0;
	var uLocal_13110 = 0;
	var uLocal_13111 = 1065353216;
	var uLocal_13112 = 1;
	var uLocal_13113 = 0;
	var uLocal_13114 = -1;
	var uLocal_13115 = 0;
	var uLocal_13116 = 1;
	var uLocal_13117 = 0;
	var uLocal_13118 = 0;
	var uLocal_13119 = 0;
	var uLocal_13120 = 0;
	var uLocal_13121 = 0;
	var uLocal_13122 = 0;
	var uLocal_13123 = 0;
	var uLocal_13124 = 0;
	var uLocal_13125 = 0;
	var uLocal_13126 = 1065353216;
	var uLocal_13127 = 0;
	var uLocal_13128 = 0;
	var uLocal_13129 = 1065353216;
	var uLocal_13130 = 1;
	var uLocal_13131 = 0;
	var uLocal_13132 = -1;
	var uLocal_13133 = 0;
	var uLocal_13134 = 1;
	var uLocal_13135 = 0;
	var uLocal_13136 = 0;
	var uLocal_13137 = 0;
	var uLocal_13138 = 0;
	var uLocal_13139 = 0;
	var uLocal_13140 = 0;
	var uLocal_13141 = 0;
	var uLocal_13142 = 0;
	var uLocal_13143 = 0;
	var uLocal_13144 = 1065353216;
	var uLocal_13145 = 0;
	var uLocal_13146 = 0;
	var uLocal_13147 = 1065353216;
	var uLocal_13148 = 1;
	var uLocal_13149 = 0;
	var uLocal_13150 = -1;
	var uLocal_13151 = 0;
	var uLocal_13152 = 1;
	var uLocal_13153 = 0;
	var uLocal_13154 = 0;
	var uLocal_13155 = 0;
	var uLocal_13156 = 0;
	var uLocal_13157 = 0;
	var uLocal_13158 = 0;
	var uLocal_13159 = 0;
	var uLocal_13160 = 0;
	var uLocal_13161 = 0;
	var uLocal_13162 = 1065353216;
	var uLocal_13163 = 0;
	var uLocal_13164 = 0;
	var uLocal_13165 = 1065353216;
	var uLocal_13166 = 1;
	var uLocal_13167 = 0;
	var uLocal_13168 = -1;
	var uLocal_13169 = 0;
	var uLocal_13170 = 1;
	var uLocal_13171 = 0;
	var uLocal_13172 = 0;
	var uLocal_13173 = 0;
	var uLocal_13174 = 0;
	var uLocal_13175 = 0;
	var uLocal_13176 = 0;
	var uLocal_13177 = 0;
	var uLocal_13178 = 0;
	var uLocal_13179 = 0;
	var uLocal_13180 = 1065353216;
	var uLocal_13181 = 0;
	var uLocal_13182 = 0;
	var uLocal_13183 = 1065353216;
	var uLocal_13184 = 1;
	var uLocal_13185 = 0;
	var uLocal_13186 = -1;
	var uLocal_13187 = 0;
	var uLocal_13188 = 1;
	var uLocal_13189 = 0;
	var uLocal_13190 = 0;
	var uLocal_13191 = 0;
	var uLocal_13192 = 0;
	var uLocal_13193 = 0;
	var uLocal_13194 = 0;
	var uLocal_13195 = 0;
	var uLocal_13196 = 0;
	var uLocal_13197 = 0;
	var uLocal_13198 = 1065353216;
	var uLocal_13199 = 0;
	var uLocal_13200 = 0;
	var uLocal_13201 = 1065353216;
	var uLocal_13202 = 1;
	var uLocal_13203 = 0;
	var uLocal_13204 = -1;
	var uLocal_13205 = 0;
	var uLocal_13206 = 1;
	var uLocal_13207 = 0;
	var uLocal_13208 = 0;
	var uLocal_13209 = 0;
	var uLocal_13210 = 0;
	var uLocal_13211 = 0;
	var uLocal_13212 = 0;
	var uLocal_13213 = 0;
	var uLocal_13214 = 0;
	var uLocal_13215 = 0;
	var uLocal_13216 = 1065353216;
	var uLocal_13217 = 0;
	var uLocal_13218 = 0;
	var uLocal_13219 = 1065353216;
	var uLocal_13220 = 1;
	var uLocal_13221 = 0;
	var uLocal_13222 = -1;
	var uLocal_13223 = 0;
	var uLocal_13224 = 1;
	var uLocal_13225 = 0;
	var uLocal_13226 = 0;
	var uLocal_13227 = 0;
	var uLocal_13228 = 0;
	var uLocal_13229 = 0;
	var uLocal_13230 = 0;
	var uLocal_13231 = 0;
	var uLocal_13232 = 0;
	var uLocal_13233 = 0;
	var uLocal_13234 = 1065353216;
	var uLocal_13235 = 0;
	var uLocal_13236 = 0;
	var uLocal_13237 = 1065353216;
	var uLocal_13238 = 1;
	var uLocal_13239 = 0;
	var uLocal_13240 = -1;
	var uLocal_13241 = 0;
	var uLocal_13242 = 1;
	var uLocal_13243 = 0;
	var uLocal_13244 = 0;
	var uLocal_13245 = 0;
	var uLocal_13246 = 0;
	var uLocal_13247 = 0;
	var uLocal_13248 = 0;
	var uLocal_13249 = 0;
	var uLocal_13250 = 0;
	var uLocal_13251 = 0;
	var uLocal_13252 = 1065353216;
	var uLocal_13253 = 0;
	var uLocal_13254 = 0;
	var uLocal_13255 = 1065353216;
	var uLocal_13256 = 1;
	var uLocal_13257 = 0;
	var uLocal_13258 = -1;
	var uLocal_13259 = 0;
	var uLocal_13260 = 1;
	var uLocal_13261 = 0;
	var uLocal_13262 = 0;
	var uLocal_13263 = 0;
	var uLocal_13264 = 0;
	var uLocal_13265 = 0;
	var uLocal_13266 = 0;
	var uLocal_13267 = 0;
	var uLocal_13268 = 0;
	var uLocal_13269 = 0;
	var uLocal_13270 = 1065353216;
	var uLocal_13271 = 0;
	var uLocal_13272 = 0;
	var uLocal_13273 = 1065353216;
	var uLocal_13274 = 1;
	var uLocal_13275 = 0;
	var uLocal_13276 = -1;
	var uLocal_13277 = 0;
	var uLocal_13278 = 1;
	var uLocal_13279 = 0;
	var uLocal_13280 = 0;
	var uLocal_13281 = 0;
	var uLocal_13282 = 0;
	var uLocal_13283 = 0;
	var uLocal_13284 = 0;
	var uLocal_13285 = 0;
	var uLocal_13286 = 0;
	var uLocal_13287 = 0;
	var uLocal_13288 = 1065353216;
	var uLocal_13289 = 0;
	var uLocal_13290 = 0;
	var uLocal_13291 = 1065353216;
	var uLocal_13292 = 1;
	var uLocal_13293 = 0;
	var uLocal_13294 = -1;
	var uLocal_13295 = 0;
	var uLocal_13296 = 1;
	var uLocal_13297 = 0;
	var uLocal_13298 = 0;
	var uLocal_13299 = 0;
	var uLocal_13300 = 0;
	var uLocal_13301 = 0;
	var uLocal_13302 = 0;
	var uLocal_13303 = 0;
	var uLocal_13304 = 0;
	var uLocal_13305 = 0;
	var uLocal_13306 = 1065353216;
	var uLocal_13307 = 0;
	var uLocal_13308 = 0;
	var uLocal_13309 = 1065353216;
	var uLocal_13310 = 1;
	var uLocal_13311 = 0;
	var uLocal_13312 = -1;
	var uLocal_13313 = 0;
	var uLocal_13314 = 1;
	var uLocal_13315 = 0;
	var uLocal_13316 = 0;
	var uLocal_13317 = 0;
	var uLocal_13318 = 0;
	var uLocal_13319 = 0;
	var uLocal_13320 = 0;
	var uLocal_13321 = 0;
	var uLocal_13322 = 0;
	var uLocal_13323 = 0;
	var uLocal_13324 = 1065353216;
	var uLocal_13325 = 0;
	var uLocal_13326 = 0;
	var uLocal_13327 = 1065353216;
	var uLocal_13328 = 1;
	var uLocal_13329 = 0;
	var uLocal_13330 = 8;
	var uLocal_13331 = 0;
	var uLocal_13332 = 0;
	var uLocal_13333 = 0;
	var uLocal_13334 = 0;
	var uLocal_13335 = 0;
	var uLocal_13336 = 0;
	var uLocal_13337 = 0;
	var uLocal_13338 = 0;
	var uLocal_13339 = 0;
	var uLocal_13340 = 0;
	var uLocal_13341 = 0;
	var uLocal_13342 = 0;
	var uLocal_13343 = 0;
	var uLocal_13344 = 0;
	var uLocal_13345 = 0;
	var uLocal_13346 = 0;
	var uLocal_13347 = 0;
	var uLocal_13348 = 0;
	var uLocal_13349 = 0;
	var uLocal_13350 = 0;
	var uLocal_13351 = 0;
	var uLocal_13352 = 0;
	var uLocal_13353 = 0;
	var uLocal_13354 = 0;
	var uLocal_13355 = 0;
	var uLocal_13356 = 0;
	var uLocal_13357 = 0;
	var uLocal_13358 = 0;
	var uLocal_13359 = 0;
	var uLocal_13360 = 0;
	var uLocal_13361 = 0;
	var uLocal_13362 = 0;
	var uLocal_13363 = 0;
	var uLocal_13364 = 0;
	var uLocal_13365 = 0;
	var uLocal_13366 = 0;
	var uLocal_13367 = 0;
	var uLocal_13368 = 0;
	var uLocal_13369 = 0;
	var uLocal_13370 = 0;
	var uLocal_13371 = 0;
	var uLocal_13372 = 0;
	var uLocal_13373 = 0;
	var uLocal_13374 = 0;
	var uLocal_13375 = 0;
	var uLocal_13376 = 0;
	var uLocal_13377 = 0;
	var uLocal_13378 = 0;
	var uLocal_13379 = 0;
	var uLocal_13380 = 0;
	var uLocal_13381 = 0;
	var uLocal_13382 = 0;
	var uLocal_13383 = 0;
	var uLocal_13384 = 0;
	var uLocal_13385 = 0;
	var uLocal_13386 = 0;
	var uLocal_13387 = 0;
	var uLocal_13388 = 0;
	var uLocal_13389 = 0;
	var uLocal_13390 = 0;
	var uLocal_13391 = 0;
	var uLocal_13392 = 0;
	var uLocal_13393 = 0;
	var uLocal_13394 = 0;
	var uLocal_13395 = 0;
	var uLocal_13396 = 0;
	var uLocal_13397 = 0;
	var uLocal_13398 = 0;
	var uLocal_13399 = 0;
	var uLocal_13400 = 0;
	var uLocal_13401 = 0;
	var uLocal_13402 = 0;
	var uLocal_13403 = 0;
	var uLocal_13404 = 0;
	var uLocal_13405 = 0;
	var uLocal_13406 = 0;
	var uLocal_13407 = 0;
	var uLocal_13408 = 0;
	var uLocal_13409 = 0;
	var uLocal_13410 = 0;
	var uLocal_13411 = 0;
	var uLocal_13412 = 0;
	var uLocal_13413 = 0;
	var uLocal_13414 = 0;
	var uLocal_13415 = 0;
	var uLocal_13416 = 0;
	var uLocal_13417 = 0;
	var uLocal_13418 = 0;
	var uLocal_13419 = 0;
	var uLocal_13420 = 0;
	var uLocal_13421 = 0;
	var uLocal_13422 = 0;
	var uLocal_13423 = 0;
	var uLocal_13424 = 0;
	var uLocal_13425 = 0;
	var uLocal_13426 = 0;
	var uLocal_13427 = 0;
	var uLocal_13428 = 0;
	var uLocal_13429 = 0;
	var uLocal_13430 = 0;
	var uLocal_13431 = 0;
	var uLocal_13432 = 0;
	var uLocal_13433 = 0;
	var uLocal_13434 = 0;
	var uLocal_13435 = 0;
	var uLocal_13436 = 0;
	var uLocal_13437 = 0;
	var uLocal_13438 = 0;
	var uLocal_13439 = 0;
	var uLocal_13440 = 0;
	var uLocal_13441 = 0;
	var uLocal_13442 = 0;
	var uLocal_13443 = 0;
	var uLocal_13444 = 0;
	var uLocal_13445 = 0;
	var uLocal_13446 = 0;
	var uLocal_13447 = 0;
	var uLocal_13448 = 0;
	var uLocal_13449 = 0;
	var uLocal_13450 = 0;
	var uLocal_13451 = 0;
	var uLocal_13452 = 0;
	var uLocal_13453 = 0;
	var uLocal_13454 = 0;
	var uLocal_13455 = 0;
	var uLocal_13456 = 0;
	var uLocal_13457 = 0;
	var uLocal_13458 = 0;
	var uLocal_13459 = 0;
	var uLocal_13460 = 0;
	var uLocal_13461 = 0;
	var uLocal_13462 = 0;
	var uLocal_13463 = 0;
	var uLocal_13464 = 0;
	var uLocal_13465 = 0;
	var uLocal_13466 = 0;
	var uLocal_13467 = 0;
	var uLocal_13468 = 0;
	var uLocal_13469 = 0;
	var uLocal_13470 = 0;
	var uLocal_13471 = 0;
	var uLocal_13472 = 0;
	var uLocal_13473 = 0;
	var uLocal_13474 = 0;
	var uLocal_13475 = 0;
	var uLocal_13476 = 0;
	var uLocal_13477 = 0;
	var uLocal_13478 = 0;
	var uLocal_13479 = 0;
	var uLocal_13480 = 0;
	var uLocal_13481 = 0;
	var uLocal_13482 = 0;
	var uLocal_13483 = 0;
	var uLocal_13484 = 0;
	var uLocal_13485 = 0;
	var uLocal_13486 = 0;
	var uLocal_13487 = 0;
	var uLocal_13488 = 0;
	var uLocal_13489 = 0;
	var uLocal_13490 = 0;
	var uLocal_13491 = 0;
	var uLocal_13492 = 0;
	var uLocal_13493 = 0;
	var uLocal_13494 = 0;
	var uLocal_13495 = 0;
	var uLocal_13496 = 0;
	var uLocal_13497 = 0;
	var uLocal_13498 = 0;
	var uLocal_13499 = 0;
	var uLocal_13500 = 0;
	var uLocal_13501 = 0;
	var uLocal_13502 = 0;
	var uLocal_13503 = 0;
	var uLocal_13504 = 0;
	var uLocal_13505 = 0;
	var uLocal_13506 = 0;
	var uLocal_13507 = 0;
	var uLocal_13508 = 0;
	var uLocal_13509 = 0;
	var uLocal_13510 = 0;
	var uLocal_13511 = 0;
	var uLocal_13512 = 0;
	var uLocal_13513 = 0;
	var uLocal_13514 = 0;
	var uLocal_13515 = 0;
	var uLocal_13516 = 0;
	var uLocal_13517 = 0;
	var uLocal_13518 = 0;
	var uLocal_13519 = 0;
	var uLocal_13520 = 0;
	var uLocal_13521 = 0;
	var uLocal_13522 = 0;
	var uLocal_13523 = 0;
	var uLocal_13524 = 0;
	var uLocal_13525 = 0;
	var uLocal_13526 = 0;
	var uLocal_13527 = 0;
	var uLocal_13528 = 0;
	var uLocal_13529 = 0;
	var uLocal_13530 = 0;
	var uLocal_13531 = 0;
	var uLocal_13532 = 0;
	var uLocal_13533 = 0;
	var uLocal_13534 = 0;
	var uLocal_13535 = 0;
	var uLocal_13536 = 0;
	var uLocal_13537 = 0;
	var uLocal_13538 = 0;
	var uLocal_13539 = 0;
	var uLocal_13540 = 0;
	var uLocal_13541 = 0;
	var uLocal_13542 = 0;
	var uLocal_13543 = 0;
	var uLocal_13544 = 0;
	var uLocal_13545 = 0;
	var uLocal_13546 = 0;
	var uLocal_13547 = 0;
	var uLocal_13548 = 0;
	var uLocal_13549 = 0;
	var uLocal_13550 = 0;
	var uLocal_13551 = 0;
	var uLocal_13552 = 0;
	var uLocal_13553 = 0;
	var uLocal_13554 = 0;
	var uLocal_13555 = 0;
	var uLocal_13556 = 0;
	var uLocal_13557 = 0;
	var uLocal_13558 = 0;
	var uLocal_13559 = 0;
	var uLocal_13560 = 0;
	var uLocal_13561 = 0;
	var uLocal_13562 = 0;
	var uLocal_13563 = 0;
	var uLocal_13564 = 0;
	var uLocal_13565 = 0;
	var uLocal_13566 = 0;
	var uLocal_13567 = 0;
	var uLocal_13568 = 0;
	var uLocal_13569 = 0;
	var uLocal_13570 = 0;
	var uLocal_13571 = 0;
	var uLocal_13572 = 0;
	var uLocal_13573 = 0;
	var uLocal_13574 = 0;
	var uLocal_13575 = 0;
	var uLocal_13576 = 0;
	var uLocal_13577 = 0;
	var uLocal_13578 = 0;
	var uLocal_13579 = 0;
	var uLocal_13580 = 0;
	var uLocal_13581 = 0;
	var uLocal_13582 = 0;
	var uLocal_13583 = 0;
	var uLocal_13584 = 0;
	var uLocal_13585 = 0;
	var uLocal_13586 = 0;
	var uLocal_13587 = 0;
	var uLocal_13588 = 0;
	var uLocal_13589 = 0;
	var uLocal_13590 = 0;
	var uLocal_13591 = 0;
	var uLocal_13592 = 0;
	var uLocal_13593 = 0;
	var uLocal_13594 = 0;
	var uLocal_13595 = 0;
	var uLocal_13596 = 0;
	var uLocal_13597 = 0;
	var uLocal_13598 = 0;
	var uLocal_13599 = 0;
	var uLocal_13600 = 0;
	var uLocal_13601 = 0;
	var uLocal_13602 = 0;
	var uLocal_13603 = 0;
	var uLocal_13604 = 0;
	var uLocal_13605 = 0;
	var uLocal_13606 = 0;
	var uLocal_13607 = 0;
	var uLocal_13608 = 0;
	var uLocal_13609 = 0;
	var uLocal_13610 = 0;
	var uLocal_13611 = 0;
	var uLocal_13612 = 0;
	var uLocal_13613 = 0;
	var uLocal_13614 = 0;
	var uLocal_13615 = 0;
	var uLocal_13616 = 0;
	var uLocal_13617 = 0;
	var uLocal_13618 = 0;
	var uLocal_13619 = 0;
	var uLocal_13620 = 0;
	var uLocal_13621 = 0;
	var uLocal_13622 = 0;
	var uLocal_13623 = 0;
	var uLocal_13624 = 0;
	var uLocal_13625 = 0;
	var uLocal_13626 = 0;
	var uLocal_13627 = 0;
	var uLocal_13628 = 0;
	var uLocal_13629 = 0;
	var uLocal_13630 = 0;
	var uLocal_13631 = 0;
	var uLocal_13632 = 0;
	var uLocal_13633 = 0;
	var uLocal_13634 = 0;
	var uLocal_13635 = 0;
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
	var uLocal_13659 = 8;
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
	var uLocal_13680 = -1;
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
	var uLocal_13702 = -1;
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
	var uLocal_13724 = -1;
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
	var uLocal_13746 = -1;
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
	var uLocal_13768 = -1;
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
	var uLocal_13790 = -1;
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
	var uLocal_13812 = -1;
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
	var uLocal_13834 = -1;
	var uLocal_13835 = 0;
	var uLocal_13836 = 11;
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
	var uLocal_13947 = 2;
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
	var uLocal_13964 = 0;
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
	var uLocal_13982 = 2;
	var uLocal_13983 = 0;
	var uLocal_13984 = 0;
	var uLocal_13985 = 0;
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
	var uLocal_13999 = -1;
	var uLocal_14000 = 0;
	var uLocal_14001 = 0;
	var uLocal_14002 = -1;
	var uLocal_14003 = -1082130432;
	var uLocal_14004 = 0;
	var uLocal_14005 = 0;
	var uLocal_14006 = 0;
	var uLocal_14007 = 0;
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
	var uLocal_14029 = 0;
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
	var uLocal_14051 = 0;
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
	var uLocal_14073 = 0;
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
	var uLocal_14085 = 24;
	var uLocal_14086 = 0;
	var uLocal_14087 = 0;
	var uLocal_14088 = 0;
	var uLocal_14089 = 0;
	var uLocal_14090 = 0;
	var uLocal_14091 = 0;
	var uLocal_14092 = 0;
	var uLocal_14093 = 0;
	var uLocal_14094 = 0;
	var uLocal_14095 = 0;
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
	var uLocal_14117 = 0;
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
	var uLocal_14139 = 0;
	var uLocal_14140 = 0;
	var uLocal_14141 = 0;
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
	var uLocal_14209 = -1;
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
	var uLocal_14236 = -1;
	var uLocal_14237 = 20;
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
	var uLocal_14252 = 0;
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
	var uLocal_14265 = 1028443341;
	var uLocal_14266 = 1038174126;
	var uLocal_14267 = 1065353216;
	var uLocal_14268 = 1065353216;
	var uLocal_14269 = 1086324736;
	var uLocal_14270 = 1082130432;
	var uLocal_14271 = 1073741824;
	var uLocal_14272 = 1065353216;
	var uLocal_14273 = 1108082688;
	var uLocal_14274 = 1108082688;
	var uLocal_14275 = 3000;
	var uLocal_14276 = 1092616192;
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
	var uLocal_14287 = 0;
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
	var uLocal_14304 = 0;
	var uLocal_14305 = 0;
	var uLocal_14306 = 0;
	var uLocal_14307 = 0;
	var uLocal_14308 = 0;
	var uLocal_14309 = 0;
	var uLocal_14310 = 0;
	var uLocal_14311 = -1;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_16 = joaat("CS_CREOLECAPTAIN");
	iLocal_17 = joaat("CS_JULES");
	iLocal_18 = joaat("A_C_ALLIGATOR_01");
	iLocal_19 = joaat("A_C_ALLIGATOR_02");
	iLocal_20 = joaat("SKIFF");
	iLocal_21 = joaat("P_SKIFF02X");
	iLocal_22 = joaat("P_LANTERN04X");
	iLocal_23 = joaat("S_INTERACT_LANTERN02X");
	iLocal_24 = joaat("P_CRATE15X");
	iLocal_25 = joaat("P_CS_FISHBAG01X");
	iLocal_26 = joaat("P_TRAP05X");
	iLocal_27 = joaat("P_TRAP01X_DAMAGED");
	iLocal_28 = joaat("P_CRAYFISH01X");
	iLocal_29 = joaat("BRANCH01_SCRIPT");
	iLocal_30 = joaat("BRANCH02_SCRIPT");
	iLocal_31 = joaat("P_CS_BANDAGE01X");
	iLocal_32 = joaat("P_CS_TOURNIQUET02X");
	iLocal_33 = joaat("P_CS_V2_ROPE04X");
	sLocal_34 = "mob4_walk_to_mount";
	cLocal_35 = "mob4_dutch_to_captain";
	sLocal_36 = "mob4_captain_search_route02";
	sLocal_37 = "mob4_find_gatorzilla";
	sLocal_38 = "mob4_return_to_dock_scared";
	sLocal_39 = "BAY_CENTRAL_TRAFFIC";
	sLocal_40 = "Cautious";
	sLocal_41 = "AI_COMBAT@GESTURES@DUTCH@BECKON@1H";
	sLocal_42 = "-90";
	sLocal_43 = "MECH_LOCO_M@GENERIC@REACTION@POINTING@UNARMED@STAND";
	sLocal_44 = "point_fwd_0";
	sLocal_45 = "script_story@mob4@ig@ig4_scared";
	sLocal_46 = "ig4_scared_base_jules";
	sLocal_47 = "Script_MOB4_HealJules_Arthur_Refactored";
	sLocal_48 = "Script_MOB4_HealJules_Jules_Refactored";
	sLocal_49 = "Script_MOB4_HealJules_Dutch_Refactored";
	sLocal_50 = "Script_MOB4_HealJules_Bandage_Refactored";
	sLocal_51 = "MINI_GAMES@STORY@MOB4@HEAL_JULES@BANDAGE@ARTHUR";
	sLocal_52 = "MINI_GAMES@STORY@MOB4@HEAL_JULES@BANDAGE@JULES";
	sLocal_53 = "MINI_GAMES@STORY@MOB4@HEAL_JULES@BANDAGE@DUTCH";
	sLocal_54 = "MINI_GAMES@STORY@MOB4@HEAL_JULES@BANDAGE@BANDAGE";
	sLocal_55 = "CLIPSET@MINI_GAMES@STORY@MOB4@HEAL_JULES@BANDAGE@ARTHUR";
	sLocal_56 = "CLIPSET@MINI_GAMES@STORY@MOB4@HEAL_JULES@BANDAGE@JULES";
	sLocal_57 = "CLIPSET@MINI_GAMES@STORY@MOB4@HEAL_JULES@BANDAGE@DUTCH";
	sLocal_58 = "CLIPSET@MINI_GAMES@STORY@MOB4@HEAL_JULES@BANDAGE@BANDAGE";
	vLocal_59 = { 0f, 0f, 0f };
	vLocal_62 = { 2302.933f, -670.1061f, 40.49999f };
	vLocal_65 = { 2257.499f, -678.7924f, 40.49999f };
	vLocal_68 = { 1889.787f, -1858.808f, 46.3671f };
	vLocal_71 = { 0.55f, -0.25f, 1.5f };
	vLocal_74 = { -0.45f, -0.25f, 1.5f };
	iLocal_291 = -1018713880;
	iLocal_292 = joaat("WEAPON_MELEE_DAVY_LANTERN");
	fLocal_301 = 0f;
	vLocal_331 = { 2140.313f, -629.8923f, 41.71446f };
	fLocal_836 = 0f;
	vLocal_837 = { 2257.849f, -618.0255f, 40.49998f };
	vLocal_840 = { 2304.434f, -694.6965f, 40.49999f };
	vLocal_843 = { 2305.606f, -694.5796f, 40.49999f };
	vLocal_846 = { 2304.249f, -693.5927f, 40.49999f };
	vLocal_930 = { 2233.098f, -652.7651f, 35.5f };
	vLocal_933 = { 0f, 0f, 0.55f };
	fLocal_1102 = 45f;
	fLocal_1103 = 0f;
	fLocal_1104 = 0f;
	fLocal_1105 = 0f;
	fLocal_1106 = 0f;
	fLocal_1107 = 0f;
	fLocal_1108 = 15f;
	vLocal_1109 = { 0.8f, 0.5f, 1.5f };
	vLocal_1112 = { 0f, 1.5f, 0f };
	vLocal_1115 = { -3f, 5f, 0f };
	vLocal_1120 = { 2155.4f, -1095.7f, 43.7f };
	vLocal_1123 = { 1.5f, 0f, -61.3f };
	iLocal_1126 = -1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4642))
	{
		__LIB_6__::func_860(&uLocal_1132, 1073741824 /* Float: 2f */);
		func_2(&uLocal_1132, 1);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	while (!__LIB_0__::func_382(64))
	{
		BUILTIN::WAIT(0);
	}
	func_4(&uScriptParam_0, &uLocal_1132);
	func_5(&uLocal_1132);
	while (!__LIB_6__::func_861(&uLocal_1132, -2147483648))
	{
		func_7(&uLocal_1132);
		BUILTIN::WAIT(0);
	}
	while (!func_2(&uLocal_1132, 0))
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
					if (!__LIB_0__::func_899(&(cParam0->f_13118)))
					{
						__LIB_4__::func_89(&(cParam0->f_13118), 0);
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
						if (((!bVar0 && !__LIB_10__::func_986(cParam0, bVar1)) && !__LIB_0__::func_91()) && !__LIB_6__::func_861(cParam0, 80))
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
							if (__LIB_10__::func_986(cParam0, bVar1))
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
	__LIB_9__::func_412(cParam0, 0, !bVar2, bVar2);
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
					__LIB_11__::func_238();
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
	__LIB_9__::func_201(cParam1);
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
	__LIB_9__::func_9(cParam0);
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
				__LIB_9__::func_194(cParam0, __LIB_1__::func_469(cParam0->f_607), 0);
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
	__LIB_9__::func_195(cParam0, 0);
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
	__LIB_9__::func_217(cParam0);
	__LIB_8__::func_718(cParam0, __LIB_6__::func_864(cParam0));
	__LIB_5__::func_105(__LIB_6__::func_866(cParam0));
	if (!__LIB_6__::func_872(cParam0, 65536))
	{
		__LIB_5__::func_178(__LIB_6__::func_866(cParam0));
	}
	__LIB_9__::func_42(cParam0, PLAYER::PLAYER_PED_ID(), "ARTHUR", 0);
	__LIB_8__::func_660(cParam0);
	__LIB_9__::func_196(cParam0);
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
	func_163();
	func_164();
	func_165();
	func_166();
	func_167(cParam0);
	func_168(cParam0);
	func_169(cParam0);
	func_170();
	func_171();
	func_172();
	func_173();
	func_174();
	if (__LIB_6__::func_863(cParam0) == 0)
	{
		__LIB_7__::func_448(__LIB_3__::func_918(31), 1);
	}
	return true;
}

struct<4> func_34(int iParam0)
{
	struct<4> Var0;
	switch (iParam0)
	{
		case 0:
			__LIB_4__::func_954(&Var0, func_212(0, 0));
			break;
		case 1:
			__LIB_4__::func_954(&Var0, func_212(1, 0));
			break;
		case 2:
			__LIB_4__::func_954(&Var0, func_212(2, 0));
			break;
		case 3:
			__LIB_4__::func_954(&Var0, func_212(3, 0));
			break;
		case 4:
			__LIB_4__::func_954(&Var0, func_212(4, 0));
			break;
		case 5:
			__LIB_4__::func_954(&Var0, func_212(5, 0));
			break;
		case 6:
			__LIB_4__::func_954(&Var0, func_212(6, 2));
			break;
		case 7:
			__LIB_4__::func_954(&Var0, func_212(6, 2));
			break;
		case 25:
			__LIB_4__::func_954(&Var0, func_212(8, 0));
			break;
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
		func_270(cParam0);
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
					__LIB_9__::func_212(14, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
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
						func_307(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_307(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_307(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_307(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_307(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_307(joaat("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_307(joaat("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_307(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_307(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_307(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_307(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_307(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_307(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_307(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_307(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_307(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_307(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_307(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_307(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_307(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_307(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_307(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_307(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_307(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_307(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_309();
						func_310(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
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
						func_307(joaat("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
						func_319(Global_35, joaat("CLOTHING_ITEM_BADGE_PZERO_000"), 0, -358215195, 1, 1);
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
						func_307(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_307(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
		func_348();
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
							func_307(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
	func_372(cParam0);
	cParam0->f_634[0] = 56689;
	cParam0->f_634[1] = 56689;
	cParam0->f_637 = 0;
	__LIB_6__::func_883(cParam0, *uParam1);
	func_375(cParam0);
}

void func_109(char[4] cParam0)
{
	__LIB_9__::func_326(cParam0, func_376(0, 1));
	iLocal_108 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(__LIB_5__::func_34(cParam0, joaat("CS_DUTCH"), 0));
	iLocal_109 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(__LIB_5__::func_34(cParam0, joaat("CS_HOSEAMATTHEWS"), 0));
	iLocal_117 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(__LIB_5__::func_34(cParam0, iLocal_24, 0));
}

void func_123(char[4] cParam0)
{
	if (__LIB_0__::func_91())
	{
		func_381(&(cParam0->f_7375));
	}
}

bool func_127(struct<4> Param0)
{
	if (__LIB_0__::func_13(32768))
	{
		return true;
	}
	return func_383(Param0, Param0.f_3);
}

void func_139(char[4] cParam0)
{
	__LIB_9__::func_43(cParam0, iLocal_16, 67108863);
	__LIB_9__::func_43(cParam0, iLocal_17, 67108863);
	__LIB_9__::func_43(cParam0, iLocal_18, 67108863);
	__LIB_9__::func_43(cParam0, iLocal_19, 67108863);
	__LIB_9__::func_43(cParam0, iLocal_20, 67108863);
	__LIB_9__::func_43(cParam0, iLocal_24, 1);
	__LIB_9__::func_43(cParam0, iLocal_26, 15);
	__LIB_9__::func_43(cParam0, iLocal_27, 12);
	__LIB_9__::func_43(cParam0, iLocal_28, 4);
	__LIB_9__::func_43(cParam0, iLocal_29, 24);
	__LIB_9__::func_43(cParam0, iLocal_30, 24);
	__LIB_9__::func_43(cParam0, iLocal_31, 128);
	__LIB_9__::func_43(cParam0, iLocal_32, 128);
	__LIB_9__::func_43(cParam0, iLocal_25, 67108863);
	__LIB_9__::func_43(cParam0, iLocal_21, 67108863);
	__LIB_9__::func_43(cParam0, iLocal_33, 67108863);
	__LIB_9__::func_43(cParam0, iLocal_22, 67108863);
	__LIB_9__::func_43(cParam0, iLocal_23, 67108863);
	__LIB_8__::func_709(cParam0, sLocal_34, 1, 2, -1);
	__LIB_8__::func_709(cParam0, cLocal_35, 3, 2, -1);
	__LIB_8__::func_709(cParam0, sLocal_36, 4, 2, -1);
	__LIB_8__::func_709(cParam0, sLocal_37, 16, 2, -1);
	__LIB_8__::func_709(cParam0, sLocal_38, 896, 2, -1);
	__LIB_8__::func_708(cParam0, sLocal_43, 8);
	__LIB_8__::func_708(cParam0, sLocal_45, 24);
	__LIB_8__::func_708(cParam0, sLocal_51, 128);
	__LIB_8__::func_708(cParam0, sLocal_52, 128);
	__LIB_8__::func_708(cParam0, sLocal_53, 128);
	__LIB_8__::func_708(cParam0, sLocal_54, 128);
	__LIB_9__::func_372(cParam0, sLocal_55, 128);
	__LIB_9__::func_372(cParam0, sLocal_56, 128);
	__LIB_9__::func_372(cParam0, sLocal_57, 128);
	__LIB_9__::func_372(cParam0, sLocal_58, 128);
	__LIB_11__::func_345(cParam0, sLocal_47, 128);
	__LIB_11__::func_345(cParam0, sLocal_48, 128);
	__LIB_11__::func_345(cParam0, sLocal_49, 128);
	__LIB_11__::func_345(cParam0, sLocal_50, 128);
	__LIB_18__::func_328(cParam0, iLocal_291, 67108863);
	__LIB_9__::func_12(cParam0, 192);
	__LIB_9__::func_483(cParam0, "script@story@MOB4@LEADOUT@INT@Leadout_Hosea", &iLocal_302, 1, 0, 0, 0, 1);
	__LIB_9__::func_483(cParam0, "script@story@MOB4@LEADIN@MCS1@leadin", &iLocal_303, 6, 0, 0, 100f, 1);
	__LIB_9__::func_483(cParam0, "script@story@MOB4@LEADIN@MCS2@base_props_placement", &iLocal_304, 24, 0, 0, 0, 1);
	__LIB_9__::func_483(cParam0, "script@story@mob4@ig@ig_1@ig1_walk_to_trap", &iLocal_305, 4, 16, 0, 0, 1);
	__LIB_9__::func_483(cParam0, "script@story@mob4@ig@ig_2@ig2_loot_trap", &iLocal_306, 4, 0, 0, 0, 1);
	__LIB_9__::func_483(cParam0, "script@story@mob4@ig@ig_2@ig2_loot_trap_arthur", &iLocal_307, 4, 0, 0, 0, 1);
	__LIB_9__::func_483(cParam0, "script@story@mob4@ig@ig_3@ig3_investigate_trap", &iLocal_308, 4, 0, 0, 0, 1);
	__LIB_9__::func_483(cParam0, "script@story@mob4@ig@ig_3@ig3_investigate_trap_leadin", &iLocal_309, 4, 0, 0, 0, 1);
	__LIB_9__::func_483(cParam0, "script@story@mob4@ig@ig_4@ig4_scared", &iLocal_310, 24, 16, "IG4_SCARED_THERES_A_MONSTER", 0, 0);
	__LIB_9__::func_483(cParam0, "script@story@mob4@ig@ig_4@ig4_scared_joules_base", &iLocal_311, 24, 0, 0, 0, 0);
	__LIB_9__::func_483(cParam0, "script@story@mob4@ig@ig_5@ig5_skiff_stuck_pull", &iLocal_312, 28, 2, "IG5_SKIFF_ROPE", 0, 1);
	__LIB_9__::func_483(cParam0, "script@story@mob4@ig@ig_5@ig5_skiff_stuck_pull", &iLocal_313, 32, 0, 0, 0, 1);
	__LIB_9__::func_483(cParam0, "script@story@mob4@ig@ig_7@ig7_taken", &iLocal_314, 96, 0, "IG7_TAKEN", 0, 0);
	__LIB_9__::func_483(cParam0, "script@story@mob4@ig@ig_7@ig7_taken_exit", &iLocal_315, 64, 0, 0, 0, 1);
	__LIB_9__::func_483(cParam0, "script@story@mob4@ig@ig_8@ig8_panic", &iLocal_316, 64, 0, 0, 0, 1);
	__LIB_9__::func_483(cParam0, "script@story@mob4@ig@ig_9@ig9_carry", &iLocal_318, 64, 0, "IG9_CARRY_PICKUP_JULES", 0, 0);
	__LIB_9__::func_483(cParam0, "script@story@mob4@ig@ig_9@ig9_carry", &iLocal_319, 64, 0, "IG9_CARRY_CARRY", 0, 0);
	__LIB_9__::func_483(cParam0, "script@story@mob4@ig@ig_9@ig9_carry_jules", &iLocal_320, 64, 0, 0, 0, 0);
	__LIB_9__::func_483(cParam0, "script@story@mob4@ig@ig_10@ig10_boat_react_dutch", &iLocal_321, 64, 0, 0, 0, 1);
	__LIB_9__::func_483(cParam0, "script@story@mob4@ig@ig_10@ig10_boat_react_thomas", &iLocal_322, 64, 0, 0, 0, 1);
	__LIB_9__::func_483(cParam0, "script@story@mob4@ig@ig_11@ig11_into_boat_dutch", &iLocal_324, 64, 0, 0, 0, 0);
	__LIB_9__::func_483(cParam0, "script@story@mob4@ig@ig_11@ig11_into_boat", &iLocal_323, 192, 0, 0, 0, 0);
	__LIB_9__::func_483(cParam0, "script@story@mob4@ig@ig_11@ig11_into_boat_joules", &iLocal_325, 192, 0, 0, 0, 1);
	__LIB_9__::func_483(cParam0, "script@story@mob4@ig@ig_11@ig11_bull_gator_attack", &iLocal_326, 192, 0, 0, 0, 1);
	__LIB_9__::func_483(cParam0, "script@story@mob4@ig@ig_12@ig12_tend_wound_int", &iLocal_327, 128, 0, 0, 0, 0);
	__LIB_9__::func_483(cParam0, "script@story@mob4@ig@ig_16@ig16_tend_wound_ext", &iLocal_328, 524416, 0, 0, 0, 0);
	__LIB_9__::func_483(cParam0, "script@timelapse@sad3_ext_timelapse", &iLocal_329, 524288, 0, 0, 0, 1);
	__LIB_9__::func_238(cParam0, iLocal_313, "IG5_SKIFF_STUCK_PULL", 32);
	__LIB_9__::func_238(cParam0, iLocal_314, "IG7_TAKEN", 32);
	__LIB_9__::func_238(cParam0, iLocal_318, "IG9_CARRY_PICKUP_JULES", 64);
	__LIB_9__::func_238(cParam0, iLocal_319, "IG9_CARRY_CARRY", 64);
	__LIB_9__::func_238(cParam0, iLocal_320, "IG9_CARRY_BARELY_MOVING", 64);
	__LIB_9__::func_238(cParam0, iLocal_326, "pl_action_left", 128);
	__LIB_9__::func_238(cParam0, iLocal_326, "pl_action_right", 128);
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
		func_419(cParam0, __LIB_6__::func_875(cParam0, 3), !__LIB_6__::func_862(cParam0, 2097152), cParam0->f_5410, !__LIB_6__::func_862(cParam0, 32), 0);
		func_420(cParam0, 1, cParam0->f_5413, cParam0->f_5413.f_1, cParam0->f_5413.f_2, cParam0->f_5416, 1, 1, 1);
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
				func_421(cParam0);
			}
		}
		if (__LIB_6__::func_872(cParam0, 32))
		{
			func_422(cParam0);
		}
	}
	switch (__LIB_6__::func_884(cParam0))
	{
		case -1:
		case 0:
			__LIB_6__::func_885(cParam0, 1);
			break;
		case 1:
			if (func_424(cParam0))
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
			if (__LIB_9__::func_382(cParam0))
			{
				__LIB_6__::func_885(cParam0, 3);
			}
			break;
		case 3:
			if (func_426(cParam0))
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
	if (func_428(cParam0))
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
			func_428(cParam0);
		}
	}
	return false;
}

void func_163()
{
	PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, sLocal_40, 0f, -1);
	PED::_0x58F7DB5BD8FA2288(Global_35);
	PED::SET_PED_LEG_IK_MODE(Global_35, 2);
	PED::_SET_PED_BLACKBOARD_FLOAT(iLocal_108, sLocal_40, 0f, -1);
	PED::_0x58F7DB5BD8FA2288(iLocal_108);
	PED::SET_PED_LEG_IK_MODE(iLocal_108, 1);
	PED::_SET_PED_BLACKBOARD_FLOAT(iLocal_110, sLocal_40, 0f, -1);
	PED::_0x58F7DB5BD8FA2288(iLocal_110);
	PED::SET_PED_LEG_IK_MODE(iLocal_110, 1);
}

void func_164()
{
	if (__LIB_0__::func_272(Global_35, 0))
	{
		func_430(Global_35, 0);
		func_431(0);
		__LIB_1__::func_564(0);
		func_432(0);
		if (!__LIB_11__::func_20(128))
		{
			TASK::CLEAR_PED_TASKS(Global_35, false, false);
		}
		AUDIO::SET_AUDIO_FLAG("naSETVehExitUseActiveTransportOnly", false);
		AUDIO::_0x660A8F876DF1D4F8(14);
		AUDIO::_0x660A8F876DF1D4F8(7);
		AUDIO::_0x660A8F876DF1D4F8(25);
		PED::SET_PED_USING_ACTION_MODE(Global_35, false, -1, 0);
		ENTITY::SET_ENTITY_VISIBLE(Global_35, true);
		ENTITY::FREEZE_ENTITY_POSITION(Global_35, false);
		MISC::_0xFC6ECB9170145ECE();
		PED::SET_PED_USING_ACTION_MODE(Global_35, false, -1, 0);
		PED::SET_PED_LEG_IK_MODE(Global_35, 2);
		PED::SET_PED_CONFIG_FLAG(Global_35, 405, false);
		PED::SET_PED_CONFIG_FLAG(Global_35, 174, false);
		PLAYER::_0x0751D461F06E41CE(PLAYER::GET_PLAYER_INDEX(), 8, 0, 0);
		PLAYER::_0x0751D461F06E41CE(PLAYER::GET_PLAYER_INDEX(), 14, 1, 0);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
		if (PLAYER::_0x2009F8AB7A5E9D6D(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::_0x12E09E278C6C29B7(PLAYER::GET_PLAYER_INDEX());
		}
	}
}

void func_165()
{
	if (__LIB_0__::func_272(iLocal_108, 0))
	{
		func_430(iLocal_108, 0);
		ENTITY::SET_ENTITY_VISIBLE(iLocal_108, true);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_108, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_108, 27, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_108, false);
	}
}

void func_166()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_114))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(iLocal_114, false);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_114, false);
		ENTITY::SET_ENTITY_PROOFS(iLocal_114, 0, false);
	}
	if (__LIB_0__::func_272(iLocal_110, 0))
	{
		func_434(iLocal_110, 0);
		func_430(iLocal_110, 0);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_110, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_110, 265, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_110, false);
	}
}

void func_167(char[4] cParam0)
{
	__LIB_6__::func_887(cParam0, 33554432);
	__LIB_6__::func_881(cParam0, 2);
}

void func_168(char[4] cParam0)
{
	__LIB_9__::func_385(cParam0, 5, iLocal_109, 0, 0, 1, 0);
	if (__LIB_6__::func_863(cParam0) != 0 || __LIB_11__::func_20(128))
	{
		__LIB_2__::func_426(&iLocal_110);
		__LIB_11__::func_333(iLocal_114);
	}
	__LIB_2__::func_426(&iLocal_111);
	__LIB_1__::func_951(&iLocal_119);
	__LIB_1__::func_951(&iLocal_120);
	__LIB_1__::func_951(&iLocal_121);
	__LIB_1__::func_951(&iLocal_122);
	__LIB_1__::func_951(&iLocal_123);
	__LIB_1__::func_951(&iLocal_124);
	__LIB_1__::func_951(&iLocal_116);
	__LIB_1__::func_951(&iLocal_117);
	__LIB_1__::func_951(&iLocal_118);
	__LIB_1__::func_951(&iLocal_126);
	__LIB_1__::func_951(&iLocal_127);
	__LIB_1__::func_951(&iLocal_128);
	__LIB_1__::func_951(&iLocal_129);
	func_439();
	func_440();
	func_441();
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_112))
	{
		PED::SET_PED_CONFIG_FLAG(iLocal_112, 301, false);
	}
	ENTITY::REMOVE_MODEL_HIDE(2123.506f, -612.6181f, 40.58901f, 2.5f, joaat("P_TARGETFRAME01X"), 0);
	ENTITY::REMOVE_MODEL_HIDE(2123.506f, -612.6181f, 40.58901f, 2.5f, joaat("P_DRYINGMEAT01X"), 0);
	ENTITY::REMOVE_MODEL_HIDE(2144.28f, -630.9673f, 42.565f, 1f, joaat("S_BISCUITS01X"), 0);
}

void func_169(char[4] cParam0)
{
	if (__LIB_6__::func_863(cParam0) == 0)
	{
		__LIB_11__::func_17();
	}
}

void func_170()
{
	__LIB_3__::func_760();
	func_444();
	func_445();
	__LIB_1__::func_948(553939906, 0, 0f, 0, 1, 0, 0, 0);
	__LIB_1__::func_948(357129292, 0, 0f, 0, 1, 0, 0, 0);
	__LIB_1__::func_948(1488396696, 0, 0f, 0, 1, 0, 0, 0);
	__LIB_11__::func_352(17, 1);
	__LIB_8__::func_820(7);
	__LIB_6__::func_79(__LIB_0__::func_560(3, 17), 4);
	__LIB_9__::func_802(1);
	HUD::_DISPLAY_HUD_COMPONENT(372886907);
	UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
	PATHFIND::_0xD17672447692478E(iLocal_140, 0);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE();
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	MISC::CLEAR_OVERRIDE_WEATHER();
	GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
	if (TASK::DOES_SCENARIO_GROUP_EXIST(sLocal_39))
	{
		if (!TASK::IS_SCENARIO_GROUP_ENABLED(sLocal_39))
		{
			TASK::SET_SCENARIO_GROUP_ENABLED(sLocal_39, true);
		}
	}
}

void func_171()
{
	__LIB_11__::func_334(iLocal_134);
	__LIB_11__::func_334(iLocal_135);
	__LIB_11__::func_334(iLocal_136);
}

void func_172()
{
	func_453(&Local_488, 1);
	func_453(&Local_540, 1);
	__LIB_2__::func_426(&Local_694);
}

void func_173()
{
	__LIB_11__::func_335(iLocal_302);
	__LIB_11__::func_335(iLocal_303);
	__LIB_11__::func_335(iLocal_304);
	__LIB_11__::func_335(iLocal_305);
	__LIB_11__::func_335(iLocal_306);
	__LIB_11__::func_335(iLocal_307);
	__LIB_11__::func_335(iLocal_308);
	__LIB_11__::func_335(iLocal_309);
	__LIB_11__::func_335(iLocal_310);
	__LIB_11__::func_335(iLocal_311);
	__LIB_11__::func_335(iLocal_313);
	__LIB_11__::func_335(iLocal_314);
	__LIB_11__::func_335(iLocal_315);
	__LIB_11__::func_335(iLocal_316);
	__LIB_11__::func_335(iLocal_317);
	__LIB_11__::func_335(iLocal_318);
	__LIB_11__::func_335(iLocal_319);
	__LIB_11__::func_335(iLocal_320);
	__LIB_11__::func_335(iLocal_321);
	__LIB_11__::func_335(iLocal_322);
	__LIB_11__::func_335(iLocal_323);
	__LIB_11__::func_335(iLocal_324);
	__LIB_11__::func_335(iLocal_325);
	__LIB_11__::func_335(iLocal_327);
	__LIB_11__::func_335(iLocal_328);
}

void func_174()
{
	int iVar0;
	func_455();
	func_456();
	func_457();
	func_458();
	if (PATHFIND::_0xDE0EA444735C1368(iLocal_161))
	{
		PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_161);
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (iLocal_149 - 1))
	{
		__LIB_0__::func_172(iLocal_149[iVar0]);
		iVar0++;
	}
	__LIB_0__::func_172(iLocal_137);
	__LIB_0__::func_172(iLocal_148);
	__LIB_0__::func_172(iLocal_138);
	__LIB_0__::func_172(iLocal_139);
	__LIB_0__::func_172(iLocal_140);
	__LIB_0__::func_172(iLocal_141);
	__LIB_0__::func_172(iLocal_142);
	__LIB_0__::func_172(iLocal_143);
	__LIB_0__::func_172(iLocal_144);
	__LIB_0__::func_172(iLocal_145);
	__LIB_0__::func_172(iLocal_146);
	__LIB_0__::func_172(iLocal_147);
	__LIB_0__::func_172(iLocal_160);
	__LIB_0__::func_172(iLocal_161);
}

struct<4> func_212(int iParam0, int iParam1)
{
	return func_487(iParam0, iParam1);
}

void func_270(char[4] cParam0)
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
		if (func_420(cParam0, 0, cParam0->f_5413, cParam0->f_5413.f_1, cParam0->f_5413.f_2, cParam0->f_5416, 1, 1, 1))
		{
		}
	}
}

bool func_307(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
	if (!func_565(iParam0, iParam1, bParam2, iParam5))
	{
		return false;
	}
	if (!func_566(iParam0, &iVar0, iParam1))
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
				func_307(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
		func_587(28);
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
					if (__LIB_0__::func_708(0) && func_593(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
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
					if (__LIB_0__::func_708(0) && func_593(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
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
			if (!func_595(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (__LIB_0__::func_356(iParam0) == joaat("AMMO") && __LIB_0__::func_258(iParam0))
		{
			if (!func_597(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (__LIB_0__::func_192(iParam0, 866047851))
		{
			func_598(iParam0);
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
						func_307(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_307(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_307(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_307(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_307(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_307(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_307(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_587(24);
				if (Global_1946804.f_1497.f_1[27 /*3*/] == Global_1946804.f_57[27 /*11*/])
				{
					func_616(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_OFFHAND_HOLSTER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 0);
				}
				if (__LIB_0__::func_918(&iVar9, 0))
				{
					func_593(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case joaat("UPGRADE_BANDOLIER"):
				if (__LIB_0__::func_2() == -1 && Global_1946804.f_1497.f_1[25 /*3*/] == Global_1946804.f_57[25 /*11*/])
				{
					func_616(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_BANDOLIER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_1"), 1, 1, 1, 0, 1, 0);
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
					func_307(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_307(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
		if (!func_637(iVar10, iVar0, iParam5))
		{
			return false;
		}
		else if (!__LIB_0__::func_708(0))
		{
			return true;
		}
		if (__LIB_0__::func_356(iParam0) == joaat("CLOTHING"))
		{
			func_638(iParam0);
		}
		if (__LIB_0__::func_192(iParam0, -1979000645))
		{
			func_639(iParam0);
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
				func_307(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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

void func_309()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_652();
	func_653();
	func_654();
	func_655();
	func_656();
	func_657();
	__LIB_0__::func_376();
}

void func_310(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	func_659(iParam0, 1, 1, -142743235, 1);
	if (__LIB_0__::func_779(iParam0))
	{
		func_661(iParam0, 1, 1);
	}
	bVar3 = false;
	bVar7 = false;
	iVar8 = __LIB_0__::func_161(func_662(iParam0), 1);
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

int func_319(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	struct<5> Var0;
	if (iParam3 == -358215195)
	{
		Var0 = { func_675(iParam1, 1, 0) };
		iParam3 = __LIB_0__::func_709(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	__LIB_0__::func_922(iParam3);
	return func_616(iParam0, iParam1, iParam2, iParam3, bParam4, bParam5, 1, 0, 1, 0);
}

void func_348()
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
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_700(&uVar4, &iVar1, &iVar2, &iVar3)))
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

void func_372(char[4] cParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < __LIB_4__::func_525())
	{
		func_739(cParam0, iVar0);
		iVar0++;
	}
}

void func_375(char[4] cParam0)
{
	__LIB_9__::func_45(cParam0, 0, 1, 106843, 106905, 106960, 107145, 107575, "MOB4_INT", 4098, -1);
	__LIB_9__::func_45(cParam0, 1, 2, 107748, 108231, 108342, 108467, 108959, "", 0, -1);
	__LIB_9__::func_45(cParam0, 2, 3, 109113, 109411, 109772, 110331, 110449, "MOB4_MCS1", 4162, -1);
	__LIB_9__::func_45(cParam0, 3, 4, 110524, 110628, 110785, 111059, 112282, "", 64, -1);
	__LIB_9__::func_45(cParam0, 4, 5, 112418, 112437, 112601, 112789, 112893, "MOB4_MCS2", 4162, -1);
	__LIB_9__::func_45(cParam0, 5, 6, 112924, 113062, 113123, 113220, 113748, "", 64, -1);
	__LIB_9__::func_45(cParam0, 6, 7, 113787, 113897, 114310, 114442, 114610, "", 64, -1);
	__LIB_9__::func_45(cParam0, 7, 25, 114732, 114854, 115084, 115234, 115564, "", 64, -1);
	__LIB_9__::func_45(cParam0, 25, 26, 115631, 115747, 115883, 115917, 116136, "MOB4_EXT", 4162, -1);
}

Vector3 func_376(int iParam0, int iParam1)
{
	return func_786(iParam0, iParam1);
}

void func_381(var uParam0)
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
			func_791(&(uParam0->f_872));
		}
		func_792(&(uParam0->f_860), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_4__::func_535(uParam0, 0f, 0f, 0f);
		func_794(uParam0);
		func_795(uParam0);
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

int func_383(vector3 vParam0, var uParam3)
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
		iVar0 = func_803(0, 0);
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

bool func_419(char[4] cParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5)
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
	if (func_868(cParam0, iVar0, &uVar1, bParam1, vVar2.x, vVar2.y, vVar2.z, 0, bParam2, iParam3, bParam4, iParam5, 1, 0))
	{
		cParam0->f_5408 = uVar1;
		return true;
	}
	return false;
}

bool func_420(char[4] cParam0, bool bParam1, var uParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, int iParam8)
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
				Var0.f_6 = uParam2;
				Var0.f_6.f_1 = uParam3;
				Var0.f_6.f_2 = uParam4;
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
		Var18.f_6 = uParam2;
		Var18.f_6.f_1 = uParam3;
		Var18.f_6.f_2 = uParam4;
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
				vVar14.x = uParam2;
				vVar14.f_1 = uParam3;
				vVar14.f_2 = uParam4;
				if ((!__LIB_0__::func_126(iVar13) || __LIB_0__::func_665(Global_35, iVar13, 1, 1) > 200f) && !__LIB_0__::func_86(vVar14))
				{
					if (!__LIB_0__::func_91())
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar13, false);
						func_876(iVar13, vVar14, fParam5, 2, 1073741824 /* Float: 2f */);
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

void func_421(char[4] cParam0)
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
		if (func_878(&(cParam0->f_609), cParam0->f_607))
		{
			__LIB_6__::func_869(cParam0, 32);
		}
	}
}

void func_422(char[4] cParam0)
{
	struct<4> Var0;
	if (!__LIB_6__::func_872(cParam0, 128))
	{
		if (__LIB_6__::func_872(cParam0, 16384))
		{
			__LIB_8__::func_668(cParam0);
			if (func_880(cParam0))
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
			if (func_881(cParam0, Var0))
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

bool func_424(char[4] cParam0)
{
	int iVar0;
	char[] cVar1[8];
	iVar0 = 1;
	if (!__LIB_9__::func_155(cParam0))
	{
		iVar0 = 0;
	}
	if (!func_419(cParam0, __LIB_6__::func_875(cParam0, 3), !__LIB_6__::func_862(cParam0, 2097152), cParam0->f_5410, !__LIB_6__::func_862(cParam0, 32), 0))
	{
		iVar0 = 0;
	}
	if (!func_420(cParam0, 1, cParam0->f_5413, cParam0->f_5413.f_1, cParam0->f_5413.f_2, cParam0->f_5416, 1, 1, 1))
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
		if (!__LIB_0__::func_899(&(cParam0->f_13115)))
		{
			__LIB_4__::func_89(&(cParam0->f_13115), 0);
		}
		if (__LIB_1__::func_583(&(cParam0->f_13115)) < 30f)
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

bool func_426(char[4] cParam0)
{
	if (!func_887(cParam0))
	{
		return false;
	}
	if (!func_888(cParam0))
	{
		return false;
	}
	if (!func_889(cParam0))
	{
		return false;
	}
	if (__LIB_6__::func_864(cParam0) != 25)
	{
		if (__LIB_6__::func_864(cParam0) > 5)
		{
			if (!func_890())
			{
				return false;
			}
		}
	}
	func_891(cParam0);
	func_892(cParam0);
	return true;
}

bool func_428(char[4] cParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	func_893(cParam0);
	__LIB_19__::func_186(cParam0);
	iVar0 = __LIB_6__::func_864(cParam0);
	iVar1 = __LIB_9__::func_40(cParam0);
	iVar2 = __LIB_8__::func_663(cParam0, iVar0);
	if (__LIB_6__::func_862(cParam0, 2097152))
	{
		if (iVar2 == 7 || iVar2 < 3)
		{
			func_880(cParam0);
		}
	}
	__LIB_9__::func_188(cParam0);
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
		func_422(cParam0);
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
					__LIB_9__::func_373(cParam0);
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
				if (__LIB_11__::func_101(cParam0))
				{
					if (__LIB_6__::func_862(cParam0, 4))
					{
						__LIB_6__::func_887(cParam0, 4);
					}
					__LIB_8__::func_670(cParam0, iVar0, 2);
				}
			}
			else if (__LIB_9__::func_369(cParam0) >= cParam0->f_13144)
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
					if (func_910(cParam0, iVar0, iVar1))
					{
						__LIB_8__::func_670(cParam0, iVar0, 5);
					}
				}
				else
				{
					__LIB_9__::func_189(cParam0);
					__LIB_8__::func_670(cParam0, iVar0, 3);
					if (func_912(cParam0, iVar0))
					{
						__LIB_8__::func_670(cParam0, iVar0, 4);
						if (func_910(cParam0, iVar0, iVar1))
						{
							__LIB_8__::func_670(cParam0, iVar0, 5);
						}
					}
				}
			}
			else if (__LIB_8__::func_671(cParam0))
			{
				func_912(cParam0, iVar0);
			}
			break;
		case 3:
			if (func_912(cParam0, iVar0))
			{
				__LIB_8__::func_670(cParam0, iVar0, 4);
				if (func_910(cParam0, iVar0, iVar1))
				{
					__LIB_8__::func_670(cParam0, iVar0, 5);
				}
			}
			break;
		case 4:
			if (func_910(cParam0, iVar0, iVar1))
			{
				__LIB_8__::func_670(cParam0, iVar0, 5);
			}
			break;
		case 5:
			if (!__LIB_0__::func_2() == 0)
			{
				__LIB_8__::func_672(cParam0);
				__LIB_11__::func_235(cParam0, iVar0);
				__LIB_8__::func_673(cParam0);
				__LIB_11__::func_91(cParam0);
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
					__LIB_9__::func_378(cParam0, iVar1);
					__LIB_19__::func_186(cParam0);
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
						__LIB_8__::func_710(0);
					}
					__LIB_8__::func_707(cParam0, __LIB_6__::func_864(cParam0), 4194304);
				}
				if ((__LIB_1__::func_394(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1) && !__LIB_6__::func_872(cParam0, 8192)) && !__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 8))
				{
					__LIB_5__::func_20(1, 0);
					__LIB_1__::func_422("MISSION_WANTED", 7500, 0, 1, 0, 0, -1, -1, 0);
					if (func_925(cParam0))
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
				__LIB_11__::func_235(cParam0, iVar0);
				__LIB_8__::func_673(cParam0);
				__LIB_11__::func_91(cParam0);
				if (__LIB_8__::func_705(cParam0, __LIB_9__::func_40(cParam0), 2))
				{
					if (__LIB_9__::func_52(cParam0, __LIB_9__::func_40(cParam0)))
					{
						__LIB_9__::func_353(cParam0, __LIB_9__::func_40(cParam0));
					}
				}
			}
			if ((!__LIB_1__::func_394(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1) || __LIB_6__::func_872(cParam0, 8192)) || __LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 8))
			{
				if (__LIB_9__::func_50(cParam0, iVar0, 5))
				{
					if (func_925(cParam0))
					{
						__LIB_8__::func_670(cParam0, iVar0, 7);
					}
				}
				else
				{
					func_925(cParam0);
					__LIB_8__::func_670(cParam0, iVar0, 5);
				}
			}
			else
			{
				__LIB_9__::func_50(cParam0, iVar0, 5);
				func_927(cParam0);
			}
			break;
		case 7:
			if (__LIB_9__::func_50(cParam0, iVar0, 7))
			{
				if (!__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 67108864))
				{
					__LIB_9__::func_198(cParam0, __LIB_6__::func_864(cParam0));
				}
				__LIB_9__::func_378(cParam0, iVar1);
				__LIB_19__::func_186(cParam0);
				return true;
			}
			break;
		default:
			__LIB_8__::func_670(cParam0, iVar0, 7);
			break;
	}
	return false;
}

void func_430(int iParam0, bool bParam1)
{
	TASK::SET_PED_PATH_MAY_ENTER_WATER(iParam0, bParam1);
	TASK::_0x9DE63896B176EA94(iParam0, bParam1);
	if (bParam1)
	{
		TASK::_0x8BB283A7888AD1AD(iParam0, 0, 0f);
		TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(iParam0, false, 0f);
		TASK::_0x12990818C1D35886(iParam0, 0, 0f);
	}
	else
	{
		TASK::_0x8BB283A7888AD1AD(iParam0, 1, 1f);
		TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(iParam0, true, 1f);
		TASK::_0x12990818C1D35886(iParam0, 1, 1f);
	}
}

void func_431(bool bParam0)
{
	PED::SET_PED_CONFIG_FLAG(iLocal_112, 301, bParam0);
	PED::SET_PED_CONFIG_FLAG(Global_35, 367, bParam0);
}

void func_432(bool bParam0)
{
	int iVar0;
	int iVar1;
	if (__LIB_0__::func_272(Global_35, 0))
	{
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			iVar0 = __LIB_0__::func_399(Global_35, 1, iVar1, 0);
			if (__LIB_0__::func_154(iVar0))
			{
				if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
				{
					WEAPON::SET_PED_INFINITE_AMMO(Global_35, bParam0, iVar0);
				}
			}
			iVar1++;
		}
	}
}

void func_434(int iParam0, bool bParam1)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 297, bParam1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 315, bParam1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 130, bParam1);
}

void func_439()
{
	int iVar0;
	iVar0 = 644;
	while (iVar0 <= 656)
	{
		if (__LIB_0__::func_29(iVar0))
		{
			if (__LIB_0__::func_122(iVar0))
			{
				AUDIO::STOP_PED_SPEAKING(Local_188[iVar0 /*4*/], false);
				__LIB_2__::func_753(iVar0, 0, 1, 0, 0);
			}
		}
		iVar0++;
	}
}

void func_440()
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Local_213 - 1))
	{
		func_931(&(Local_213[iVar0 /*11*/]));
		iVar0++;
	}
	func_931(&Local_247);
}

void func_441()
{
	if (STREAMING::_IS_IMAP_ACTIVE(iLocal_291))
	{
		STREAMING::_REMOVE_IMAP(iLocal_291);
	}
}

void func_444()
{
	__LIB_2__::func_353(&uLocal_184, 0);
	__LIB_2__::func_353(&uLocal_185, 0);
	__LIB_2__::func_353(&uLocal_186, 0);
	__LIB_2__::func_353(&uLocal_187, 0);
}

void func_445()
{
	CAM::_0x798BE43C9393632B("camera_treatments");
	func_933();
}

void func_453(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (bParam1)
		{
			if (ENTITY::DOES_ENTITY_EXIST((*iParam0)[iVar0 /*17*/]))
			{
				__LIB_2__::func_426(iParam0[iVar0 /*17*/]);
			}
		}
		else if (PED::IS_PED_INJURED((*iParam0)[iVar0 /*17*/]))
		{
			__LIB_2__::func_426(iParam0[iVar0 /*17*/]);
		}
		iVar0++;
	}
}

void func_455()
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (iLocal_173 - 1))
	{
		__LIB_0__::func_484(&(iLocal_173[iVar0]), iLocal_149[iVar0], 0);
		iVar0++;
	}
	__LIB_0__::func_484(&uLocal_172, iLocal_148, 0);
	__LIB_0__::func_484(&uLocal_162, iLocal_137, 0);
}

void func_456()
{
	__LIB_0__::func_484(&uLocal_163, iLocal_138, 0);
	__LIB_0__::func_484(&uLocal_164, iLocal_139, 0);
}

void func_457()
{
	__LIB_0__::func_484(&uLocal_165, iLocal_141, 0);
	__LIB_0__::func_484(&uLocal_166, iLocal_142, 0);
	__LIB_0__::func_484(&uLocal_167, iLocal_143, 0);
	__LIB_0__::func_484(&uLocal_168, iLocal_144, 0);
}

void func_458()
{
	__LIB_0__::func_484(&uLocal_169, iLocal_145, 0);
	__LIB_0__::func_484(&uLocal_170, iLocal_146, 0);
	__LIB_0__::func_484(&uLocal_171, iLocal_147, 0);
}

struct<4> func_487(int iParam0, int iParam1)
{
	struct<4> Var0;
	Var0 = { func_786(iParam0, iParam1) };
	Var0.f_3 = func_961(iParam0, iParam1);
	return Var0;
}

bool func_565(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (__LIB_0__::func_2() == -1)
	{
		if (__LIB_0__::func_787(iParam0) && func_1019(iParam0))
		{
			__LIB_4__::func_715(iParam0, iParam1, 1, &bParam2, iParam3);
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

bool func_566(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	*iParam1 = iParam2;
	__LIB_1__::func_111(iParam0, iParam1);
	Var0 = { func_675(iParam0, 0, 1) };
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
	if (func_1024(iParam0, &Var0, *iParam1, 0, 0))
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

void func_587(int iParam0)
{
	if (!__LIB_0__::func_52(iParam0))
	{
		return;
	}
	__LIB_0__::func_427(iParam0);
	func_1044(iParam0);
}

bool func_593(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_675(iParam0, 0, 1) };
		iVar5 = 1728382685; /* GXTEntry: "Right" */
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_1046((386 + iVar28), 1);
			if (func_1047(iParam0, &Var0, iVar5, 0))
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

bool func_595(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (!func_1024(iParam0, &uVar1, 1, 0, 0))
		{
			__LIB_4__::func_715(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = __LIB_0__::func_940(iVar0);
			if (WEAPON::_IS_WEAPON_SNIPER(iVar0))
			{
				func_593(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("WEAPON_FISHINGROD") || iVar0 == joaat("WEAPON_KIT_BINOCULARS"))
			{
				func_593(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("WEAPON_LASSO"))
			{
				func_593(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
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
					func_593(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_593(iVar0, WEAPON::_GET_WEAPON_CLIP_SIZE(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
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
					if (!func_593(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_593(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_593(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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

bool func_597(int iParam0, int iParam1, int iParam2)
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
		return func_637(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_598(int iParam0)
{
	var uVar0;
	if ((iParam0 == joaat("PROVISION_TALISMAN_EAGLE_TALON") && !__LIB_0__::func_26()) || iParam0 != joaat("PROVISION_TALISMAN_EAGLE_TALON"))
	{
		if (func_1057(Global_35, iParam0, &uVar0))
		{
			func_616(PLAYER::PLAYER_PED_ID(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
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

int func_616(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	struct<5> Var0;
	int iVar5;
	if (iParam3 == -358215195)
	{
		Var0 = { func_675(iParam1, 1, 0) };
		iParam3 = __LIB_0__::func_709(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_1090(iParam1, iParam2, __LIB_0__::func_161(iParam3, 1), bParam4, bParam9))
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

bool func_637(int iParam0, int iParam1, int iParam2)
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
	Var0 = { func_675(iParam0, 0, 1) };
	Var5 = { __LIB_0__::func_429(iParam0, Var0, Var0.f_4, 0) };
	return func_1105(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_638(int iParam0)
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
			func_616(Global_35, iParam0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
		}
		func_587(24);
		if (__LIB_0__::func_918(&iVar2, 0))
		{
			func_593(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_639(int iParam0)
{
	if (__LIB_0__::func_192(iParam0, 943695443))
	{
		func_1113(0, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -2096528786))
	{
		func_1113(1, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -1094167013))
	{
		func_1113(2, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1936654645))
	{
		func_1113(3, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1306489306))
	{
		func_1113(4, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 435762317))
	{
		func_1113(5, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1259363210))
	{
		func_1113(6, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 881398259))
	{
		func_1113(7, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -541549214))
	{
		func_1113(8, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 130796156))
	{
		func_1113(-1, iParam0);
	}
}

void func_652()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_1126(0);
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"), false);
			func_1127();
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
	func_1126(1);
}

void func_653()
{
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_307(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_654()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_1129(0);
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
	func_1129(1);
}

void func_655()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_2__::func_522(15000, 0, 0, 0, 1);
			func_1129(0);
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
	func_1129(1);
}

void func_656()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_307(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_307(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_659(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_659(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
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

void func_657()
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
		if (func_593(joaat("WEAPON_REVOLVER_DOUBLEACTION"), 0, 0, 0, 0, 0, 752097756, 0))
		{
			Var1 = { __LIB_1__::func_605() };
		}
	}
	if (INVENTORY::_0xB881CA836CC4B6D4(&Var1))
	{
		func_1134(joaat("COMPONENT_REVOLVER_DOUBLEACTION_GRIP_PEARL"), Var1, 1423542233);
		func_1134(joaat("COMPONENT_REVOLVER_DOUBLEACTION_BARREL_LONG"), Var1, -1264898804);
		func_1134(joaat("COMPONENT_SHORTARM_BARREL_MATERIAL_7"), Var1, 1592019450);
		func_1134(joaat("COMPONENT_SHORTARM_CYLINDER_MATERIAL_7"), Var1, 1117400455);
		func_1134(joaat("COMPONENT_SHORTARM_HAMMER_MATERIAL_7"), Var1, 1150213537);
		func_1134(joaat("COMPONENT_SHORTARM_SIGHT_MATERIAL_7"), Var1, 1598825281);
		func_1134(joaat("COMPONENT_SHORTARM_TRIGGER_MATERIAL_7"), Var1, -712527121);
		func_1134(joaat("COMPONENT_SHORTARM_FRAME_ENGRAVING_1"), Var1, 454332195);
		func_1134(joaat("COMPONENT_SHORTARM_FRAME_MATERIAL_7"), Var1, 256105670);
		func_1134(joaat("COMPONENT_SHORTARM_FRAME_ENGRAVING_MATERIAL_7"), Var1, -1328061889);
		func_1134(joaat("COMPONENT_SHORTARM_BARREL_ENGRAVING_1"), Var1, -782241404);
		func_1134(joaat("COMPONENT_SHORTARM_BARREL_ENGRAVING_MATERIAL_7"), Var1, 1669853467);
		func_1134(joaat("COMPONENT_SHORTARM_CYLINDER_ENGRAVING_1"), Var1, -1559225678);
		func_1134(joaat("COMPONENT_SHORTARM_CYLINDER_ENGRAVING_MATERIAL_7"), Var1, -266425508);
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

int func_659(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			func_659(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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
	else if (!func_1136(iParam0, iParam1, iParam3, bParam2, bParam4))
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

void func_661(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	switch (__LIB_0__::func_357(iParam0))
	{
		case -2061583405:
			bVar0 = func_1138(iParam0, &(Global_1946804.f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_1138(iParam0, &(Global_1946804.f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_1138(iParam0, &(Global_1946804.f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_1138(iParam0, &(Global_1946804.f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_1138(iParam0, &(Global_1946804.f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_1138(iParam0, &(Global_1946804.f_2657.f_25));
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

int func_662(int iParam0)
{
	struct<5> Var0;
	Var0 = { func_675(iParam0, 1, 0) };
	return __LIB_0__::func_709(Var0.f_4);
}

struct<5> func_675(int iParam0, bool bParam1, bool bParam2)
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
				if (!func_1047(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_1047(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
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

int func_700(var uParam0, int iParam1, int iParam2, int iParam3)
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
	Var5 = { func_675(iVar0, 0, 1) };
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
	iVar11 = (func_1174(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_952(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_307(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	__LIB_2__::func_522(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

void func_739(char[4] cParam0, int iParam1)
{
	func_1199(cParam0, iParam1);
	__LIB_8__::func_679(cParam0, iParam1, 26);
}

bool func_740(char[4] cParam0)
{
	if (!func_1201(cParam0, &iLocal_112, func_212(0, 1), 0))
	{
		return false;
	}
	if (!func_1202(&iLocal_113, func_212(0, 3)))
	{
		return false;
	}
	return cParam0->f_607 == cParam0->f_607;
}

bool func_741(char[4] cParam0)
{
	func_1203(cParam0);
	func_1204();
	__LIB_11__::func_17();
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	MISC::_SET_WEATHER_TYPE(joaat("MISTY"), true, true, true, 60f, false);
	return cParam0->f_607 == cParam0->f_607;
}

bool func_742(char[4] cParam0)
{
	if (!bLocal_299)
	{
		__LIB_10__::func_957();
		__LIB_2__::func_259(&uLocal_104);
		bLocal_299 = true;
	}
	if (__LIB_9__::func_178(&uLocal_104) < 5f)
	{
		if (!__LIB_13__::func_499(1, 0, 0))
		{
			return false;
		}
	}
	if (!func_1208(&iLocal_149, &iLocal_173, cLocal_35, 3f, 1))
	{
		return false;
	}
	uLocal_172 = __LIB_1__::func_391(iLocal_148, 0, 0, 2016);
	__LIB_9__::func_253(cParam0, iLocal_108, joaat("COLOR_WHITE"), joaat("BLIP_STYLE_COMPANION"), 1, 1);
	if (__LIB_6__::func_872(cParam0, 4))
	{
		func_1211(Global_35, func_212(0, 0), 2, 1073741824 /* Float: 2f */);
		func_1211(iLocal_108, func_212(0, 2), 2, 1073741824 /* Float: 2f */);
	}
	bLocal_299 = false;
	__LIB_6__::func_876(cParam0, 0);
	__LIB_9__::func_195(cParam0, 1);
	return cParam0->f_607 == cParam0->f_607;
}

int func_743(char[4] cParam0)
{
	func_1212(cParam0);
	func_1213(cParam0);
	switch (__LIB_6__::func_889(cParam0))
	{
		case 0:
			if (func_1215())
			{
				__LIB_6__::func_876(cParam0, 1);
			}
			break;
		case 1:
			func_1216(cParam0);
			func_1217();
			if (__LIB_11__::func_18(Global_35, sLocal_34, 44))
			{
				__LIB_9__::func_254(cParam0, iLocal_108, 1);
				__LIB_1__::func_718(7);
				func_1221(cParam0, 2, 0);
				__LIB_6__::func_876(cParam0, 2);
			}
			break;
		case 2:
			func_1217();
			if (__LIB_11__::func_23(iLocal_108, sLocal_34) || __LIB_0__::func_71(Global_35))
			{
				func_1224();
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.3f);
				func_1225();
				__LIB_6__::func_876(cParam0, 3);
			}
			break;
		case 3:
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_112, TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iLocal_113));
			if (__LIB_0__::func_48(Global_35, iLocal_112, 6f, 1) || __LIB_0__::func_48(Global_35, iLocal_108, 6f, 1))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.3f);
			}
			if (!PED::IS_PED_ON_MOUNT(iLocal_108))
			{
				if (!__LIB_0__::func_491(iLocal_108, 1868526510) && !__LIB_0__::func_491(iLocal_108, 242628503))
				{
					func_1225();
				}
			}
			if (!__LIB_0__::func_394(Global_35, iLocal_112, 1))
			{
				if (!__LIB_1__::func_587(7))
				{
					__LIB_1__::func_718(7);
				}
			}
			if (__LIB_0__::func_71(iLocal_108))
			{
				__LIB_4__::func_89(&uLocal_80, 0);
				if (__LIB_1__::func_583(&uLocal_80) >= 10.5f)
				{
					if (func_1229(cParam0, iLocal_108, "MOB4_HURRY", 1))
					{
						__LIB_1__::func_561(&uLocal_80);
					}
				}
			}
			if (__LIB_0__::func_394(Global_35, iLocal_112, 1) && __LIB_0__::func_71(iLocal_108))
			{
				__LIB_1__::func_721(7);
				__LIB_1__::func_561(&uLocal_80);
				func_1230();
				__LIB_6__::func_876(cParam0, 29);
			}
			break;
		case 29:
			return 1;
	}
	return 0;
}

bool func_744(char[4] cParam0)
{
	func_1231(cParam0);
	__LIB_1__::func_561(&uLocal_77);
	__LIB_1__::func_561(&uLocal_80);
	func_1230();
	func_1224();
	return cParam0->f_607 == cParam0->f_607;
}

bool func_746(char[4] cParam0)
{
	if (!func_1201(cParam0, &iLocal_112, func_212(0, 1), 0))
	{
		return false;
	}
	if (!func_1202(&iLocal_113, func_212(0, 3)))
	{
		return false;
	}
	if (!bLocal_299)
	{
		__LIB_10__::func_957();
		bLocal_299 = true;
	}
	if (!__LIB_13__::func_499(1, 0, 0))
	{
		return false;
	}
	if (!__LIB_6__::func_872(cParam0, 4))
	{
		__LIB_11__::func_755(2);
		__LIB_11__::func_755(1);
	}
	if (__LIB_11__::func_20(2))
	{
		func_1211(Global_35, func_1237(cLocal_35, 485, 1), 2, 1073741824 /* Float: 2f */);
		func_1211(iLocal_108, func_1237(cLocal_35, 490, 0), 2, 1073741824 /* Float: 2f */);
		func_1211(iLocal_112, func_1237(cLocal_35, 485, 1), 2, 1073741824 /* Float: 2f */);
		func_1211(iLocal_113, func_1237(cLocal_35, 490, 0), 2, 1073741824 /* Float: 2f */);
		STREAMING::REQUEST_COLLISION_AT_COORD(__LIB_11__::func_19(cLocal_35, 485));
	}
	else if (__LIB_11__::func_20(1))
	{
		func_1211(Global_35, func_1237(cLocal_35, 190, 1), 2, 1073741824 /* Float: 2f */);
		func_1211(iLocal_108, func_1237(cLocal_35, 195, 0), 2, 1073741824 /* Float: 2f */);
		func_1211(iLocal_112, func_1237(cLocal_35, 190, 1), 2, 1073741824 /* Float: 2f */);
		func_1211(iLocal_113, func_1237(cLocal_35, 195, 0), 2, 1073741824 /* Float: 2f */);
		STREAMING::REQUEST_COLLISION_AT_COORD(__LIB_11__::func_19(cLocal_35, 190));
	}
	else
	{
		if (!func_1208(&iLocal_149, &iLocal_173, cLocal_35, 3f, 1))
		{
			return false;
		}
		uLocal_172 = __LIB_1__::func_391(iLocal_148, 0, 0, 2016);
		func_1211(Global_35, func_212(1, 0), 2, 1073741824 /* Float: 2f */);
		func_1211(iLocal_108, func_212(1, 1), 2, 1073741824 /* Float: 2f */);
		func_1211(iLocal_112, func_212(0, 1), 2, 1073741824 /* Float: 2f */);
		func_1211(iLocal_113, func_212(0, 3), 2, 1073741824 /* Float: 2f */);
		STREAMING::REQUEST_COLLISION_AT_COORD(func_376(1, 0));
	}
	__LIB_1__::func_571(Global_35, iLocal_112, 0, -1, 1);
	__LIB_1__::func_571(iLocal_108, iLocal_113, 0, -1, 1);
	func_1240();
	bLocal_299 = false;
	return cParam0->f_607 == cParam0->f_607;
}

bool func_747(char[4] cParam0)
{
	if (__LIB_6__::func_872(cParam0, 4))
	{
		__LIB_4__::func_89(&uLocal_80, 0);
		STREAMING::REQUEST_COLLISION_AT_COORD(ENTITY::GET_ENTITY_COORDS(Global_35, true, false));
		if (!ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(Global_35))
		{
			return false;
		}
		if (__LIB_9__::func_178(&uLocal_80) < 1f)
		{
			return false;
		}
	}
	if (__LIB_0__::func_394(Global_35, iLocal_112, 0))
	{
		AUDIO::SET_AUDIO_FLAG("naSETVehExitUseActiveTransportOnly", true);
	}
	func_1241();
	__LIB_1__::func_561(&uLocal_80);
	return cParam0->f_607 == cParam0->f_607;
}

bool func_748(char[4] cParam0)
{
	func_1242();
	func_1243(cParam0);
	__LIB_9__::func_53(cParam0);
	__LIB_6__::func_868(cParam0, 33554432);
	__LIB_8__::func_665(cParam0, 64);
	__LIB_9__::func_253(cParam0, iLocal_108, joaat("COLOR_WHITE"), joaat("BLIP_STYLE_COMPANION"), 1, 1);
	AUDIO::_0x0D7FD6A55FD63AEF(14, 3, 1);
	AUDIO::_0x0D7FD6A55FD63AEF(7, 3, 1);
	AUDIO::_0x0D7FD6A55FD63AEF(25, 3, 1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_108, false);
	__LIB_0__::func_705(0, 0);
	__LIB_6__::func_876(cParam0, 0);
	__LIB_9__::func_195(cParam0, 1);
	return cParam0->f_607 == cParam0->f_607;
}

bool func_749(char[4] cParam0)
{
	__LIB_11__::func_346(iLocal_108, &uLocal_337);
	func_1246();
	func_1247();
	func_1248();
	func_1249(cParam0);
	func_1250(cParam0);
	func_1251();
	func_1252();
	switch (__LIB_6__::func_889(cParam0))
	{
		case 0:
			if (__LIB_11__::func_18(Global_35, cLocal_35, Local_438[0 /*8*/].f_1))
			{
				func_455();
				__LIB_6__::func_876(cParam0, 1);
			}
			break;
		case 1:
			if (__LIB_11__::func_18(Global_35, cLocal_35, 485))
			{
				ENTITY::CREATE_MODEL_HIDE(2123.506f, -612.6181f, 40.58901f, 2.5f, joaat("P_TARGETFRAME01X"), false);
				ENTITY::CREATE_MODEL_HIDE(2123.506f, -612.6181f, 40.58901f, 2.5f, joaat("P_DRYINGMEAT01X"), false);
				__LIB_6__::func_876(cParam0, 2);
			}
			break;
		case 2:
			if (__LIB_11__::func_18(Global_35, cLocal_35, 625))
			{
				AUDIO::SET_AUDIO_FLAG("naSETVehExitUseActiveTransportOnly", false);
				AUDIO::_0x660A8F876DF1D4F8(7);
				AUDIO::_0x660A8F876DF1D4F8(25);
				__LIB_6__::func_876(cParam0, 3);
			}
			break;
		case 3:
			__LIB_11__::func_83(Global_35, __LIB_9__::func_921(cLocal_35), &uLocal_334, 40f, 30f, 15f, 10f, 3f, 0, 0, 1, 1, 1);
			if (!__LIB_0__::func_396(Global_35))
			{
				if (__LIB_0__::func_266(Global_35, __LIB_9__::func_921(cLocal_35), 15f, 1, 0) || __LIB_0__::func_266(Global_35, ENTITY::GET_ENTITY_COORDS(iLocal_110, true, false), 15f, 1, 0))
				{
					if (func_1257(iLocal_110, joaat("BLIP_STYLE_COMPANION"), "MOB4_THOMAS", 1, 1, -546708623))
					{
						__LIB_9__::func_254(cParam0, iLocal_108, 1);
						func_1258(cParam0, 4, 10f);
						__LIB_6__::func_876(cParam0, 29);
					}
				}
			}
			break;
		case 29:
			__LIB_11__::func_83(Global_35, __LIB_9__::func_921(cLocal_35), &uLocal_334, 40f, 30f, 15f, 10f, 3f, 0, 0, 1, 1, 1);
			break;
	}
	return (func_1259() || __LIB_0__::func_266(Global_35, ENTITY::GET_ENTITY_COORDS(iLocal_110, true, false), 4f, 1, 0));
}

bool func_750(var uParam0)
{
	PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 28, 1);
	__LIB_0__::func_705(0, 1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_108, true);
	__LIB_1__::func_448(Global_35, ENTITY::GET_ENTITY_COORDS(iLocal_110, true, false), 0, 1112014848 /* Float: 50f */, 1106247680 /* Float: 30f */, 1097859072 /* Float: 15f */, 1084227584 /* Float: 5f */, 1, 1, 1, 0);
	if (PLAYER::_0x2009F8AB7A5E9D6D(PLAYER::GET_PLAYER_INDEX()))
	{
		PLAYER::_0x12E09E278C6C29B7(PLAYER::GET_PLAYER_INDEX());
	}
	AUDIO::SET_AUDIO_FLAG("naSETVehExitUseActiveTransportOnly", false);
	AUDIO::_0x660A8F876DF1D4F8(14);
	AUDIO::_0x660A8F876DF1D4F8(7);
	AUDIO::_0x660A8F876DF1D4F8(25);
	func_439();
	__LIB_1__::func_561(&uLocal_77);
	__LIB_1__::func_561(&uLocal_80);
	__LIB_0__::func_325(&iLocal_107);
	func_1230();
	return uParam0->f_607 == uParam0->f_607;
}

bool func_751(char[4] cParam0)
{
	if (!func_1201(cParam0, &iLocal_112, func_212(2, 3), 1))
	{
		return false;
	}
	if (!func_1202(&iLocal_113, func_212(2, 7)))
	{
		return false;
	}
	if (!__LIB_6__::func_872(cParam0, 4))
	{
		__LIB_11__::func_755(4);
		__LIB_11__::func_755(8);
		__LIB_11__::func_755(16);
		__LIB_11__::func_755(32);
	}
	if (__LIB_11__::func_20(32))
	{
		func_1211(Global_35, func_212(2, 2), 2, 1073741824 /* Float: 2f */);
		func_1211(iLocal_108, func_212(2, 6), 2, 1073741824 /* Float: 2f */);
		func_1211(iLocal_110, func_212(2, 11), 2, 1073741824 /* Float: 2f */);
	}
	else if (__LIB_11__::func_20(8))
	{
		func_1211(Global_35, func_212(2, 1), 2, 1073741824 /* Float: 2f */);
		func_1211(iLocal_108, func_212(2, 5), 2, 1073741824 /* Float: 2f */);
		func_1211(iLocal_110, func_212(2, 10), 2, 1073741824 /* Float: 2f */);
	}
	else
	{
		func_1211(Global_35, func_212(2, 0), 2, 1073741824 /* Float: 2f */);
		func_1211(iLocal_108, func_212(2, 4), 2, 1073741824 /* Float: 2f */);
		if (__LIB_6__::func_872(cParam0, 4))
		{
			func_1211(iLocal_110, func_212(2, 9), 2, 1073741824 /* Float: 2f */);
		}
	}
	return cParam0->f_607 == cParam0->f_607;
}

bool func_752(char[4] cParam0)
{
	CAM::_0xE296208C273BD7F0(1000, -1, 0, 17, 1, 0);
	LAW::_0x3852237A3D9DF145(0);
	PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 28, 1);
	__LIB_1__::func_448(Global_35, ENTITY::GET_ENTITY_COORDS(iLocal_110, true, false), 0, 1112014848 /* Float: 50f */, 1106247680 /* Float: 30f */, 1097859072 /* Float: 15f */, 1084227584 /* Float: 5f */, 1, 1, 1, 0);
	if (!func_1262(cParam0))
	{
		return false;
	}
	if (!func_1263())
	{
		return false;
	}
	if (!func_1264())
	{
		return false;
	}
	if (!func_1265())
	{
		return false;
	}
	if (!func_1266())
	{
		return false;
	}
	if (!__LIB_6__::func_872(cParam0, 4))
	{
		func_1267(cParam0);
		__LIB_8__::func_665(cParam0, 65536);
	}
	func_1268(cParam0);
	__LIB_11__::func_336(iLocal_110);
	func_1270();
	__LIB_8__::func_810(7);
	func_431(1);
	WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(1910.999f, -1015.657f, 0f, 2539.618f, -254.1772f, 200f, false, true);
	if (__LIB_0__::func_272(iLocal_112, 0))
	{
		TASK::CLEAR_PED_TASKS(iLocal_112, true, false);
		TASK::TASK_STAND_STILL(iLocal_112, -1);
	}
	if (__LIB_0__::func_272(iLocal_113, 0))
	{
		TASK::CLEAR_PED_TASKS(iLocal_113, true, false);
		TASK::TASK_STAND_STILL(iLocal_113, -1);
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
	CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
	GRAPHICS::SET_TIMECYCLE_MODIFIER("Mob4_swamp_optimize");
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	ENTITY::CREATE_MODEL_HIDE(2144.28f, -630.9673f, 42.565f, 1f, joaat("S_BISCUITS01X"), false);
	PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX(), 0, false);
	return cParam0->f_607 == cParam0->f_607;
}

bool func_753(char[4] cParam0)
{
	if (!func_1257(iLocal_110, joaat("BLIP_STYLE_COMPANION"), "MOB4_THOMAS", 1, 1, -546708623))
	{
		return false;
	}
	__LIB_9__::func_254(cParam0, iLocal_108, 1);
	CLOCK::SET_CLOCK_TIME(21, 0, 0);
	MISC::_SET_WEATHER_TYPE(joaat("FOG"), true, true, false, 0f, false);
	if (__LIB_11__::func_20(32))
	{
		__LIB_0__::func_325(&(Local_213[1 /*11*/].f_4));
		iLocal_747 = 8;
	}
	else if (__LIB_11__::func_20(8))
	{
		__LIB_0__::func_325(&(Local_213[1 /*11*/].f_4));
		iLocal_747 = 6;
	}
	if (__LIB_11__::func_20(4))
	{
		__LIB_0__::func_325(&(Local_213[0 /*11*/].f_4));
		Local_213[0 /*11*/].f_9 = 9;
	}
	if (__LIB_6__::func_872(cParam0, 4))
	{
		func_1272(Global_35, 1041865114 /* Float: 0.15f */);
		func_1272(iLocal_108, 1041865114 /* Float: 0.15f */);
		func_1272(iLocal_110, 1041865114 /* Float: 0.15f */);
	}
	else
	{
		__LIB_4__::func_89(&uLocal_743, 0);
	}
	func_430(iLocal_108, 1);
	func_430(iLocal_110, 1);
	func_1273();
	func_1274();
	func_1275();
	func_1276();
	func_1277(Global_35, joaat("WEAPON_MELEE_DAVY_LANTERN"), 0, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
	func_1277(iLocal_108, joaat("WEAPON_MELEE_DAVY_LANTERN"), 0, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
	func_1277(iLocal_110, joaat("WEAPON_MELEE_DAVY_LANTERN"), 0, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iLocal_306, ENTITY::GET_ENTITY_COORDS(Local_213[1 /*11*/], true, false), ENTITY::GET_ENTITY_ROTATION(Local_213[1 /*11*/], 2), 2);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iLocal_308, ENTITY::GET_ENTITY_COORDS(Local_247, true, false), ENTITY::GET_ENTITY_ROTATION(Local_247, 2), 2);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iLocal_309, ENTITY::GET_ENTITY_COORDS(Local_247, true, false), ENTITY::GET_ENTITY_ROTATION(Local_247, 2), 2);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iLocal_312, vLocal_59, vLocal_59, 2);
	ANIMSCENE::START_ANIM_SCENE(iLocal_312);
	iLocal_160 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_247, -0.5f, 0f, 0f), vLocal_59, 0.75f, 0.75f, 3f);
	VOLUME::_0x5B23DFF8E0948BB2(iLocal_160, 1);
	__LIB_3__::func_557(&iLocal_161, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_247, -0.33f, 0f, 0f), 0f, 0f, 18f, 3f, 1.75f, 3.5f, "MOB4_TRAP_NAVBLOCK");
	PATHFIND::_0x19C7567D2F2287D6(iLocal_161, 8);
	PED::_0xE9B168527B337BF0(iLocal_108, iLocal_161);
	__LIB_6__::func_876(cParam0, 0);
	__LIB_9__::func_195(cParam0, 1);
	return cParam0->f_607 == cParam0->f_607;
}

int func_754(char[4] cParam0)
{
	func_1279(cParam0);
	func_1280(cParam0);
	func_1281();
	func_1282(&Local_540);
	func_1283(iLocal_108, 1054448026 /* Float: 0.425f */);
	func_1283(iLocal_110, 1054448026 /* Float: 0.425f */);
	func_1284();
	func_1285();
	func_1286();
	func_1287();
	switch (__LIB_6__::func_889(cParam0))
	{
		case 0:
			if (func_1288(cParam0))
			{
				__LIB_6__::func_876(cParam0, 29);
			}
			break;
		case 29:
			return 1;
	}
	return 0;
}

bool func_755(var uParam0)
{
	MISC::_0xE98D55C5983F2509(iLocal_110);
	if (PATHFIND::_0xDE0EA444735C1368(iLocal_161))
	{
		PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_161);
	}
	func_431(0);
	func_453(&Local_540, 1);
	func_1289();
	__LIB_1__::func_561(&uLocal_740);
	__LIB_0__::func_105(1);
	func_1290(1);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_756(var uParam0)
{
	func_1211(Global_35, func_212(3, 0), 2, 1073741824 /* Float: 2f */);
	func_1211(iLocal_108, func_212(3, 1), 2, 1073741824 /* Float: 2f */);
	func_1211(iLocal_110, func_212(3, 2), 2, 1073741824 /* Float: 2f */);
	func_1291(Global_35, 0);
	func_1291(iLocal_108, 1);
	func_1291(iLocal_110, 1);
	GRAPHICS::SET_TIMECYCLE_MODIFIER("Mob4_swamp_optimize");
	return uParam0->f_607 == uParam0->f_607;
}

bool func_757(char[4] cParam0)
{
	if (!func_1292(cParam0))
	{
		return false;
	}
	if (!func_1293())
	{
		return false;
	}
	if (!func_1294())
	{
		return false;
	}
	if (!func_1257(iLocal_110, joaat("BLIP_STYLE_COMPANION"), "MOB4_THOMAS", 1, 1, -546708623))
	{
		return false;
	}
	func_1295();
	Local_872 = 1;
	Local_872.f_1 = sLocal_43;
	Local_872.f_2 = sLocal_44;
	Local_872.f_21 = 16;
	Local_872.f_17 = 0.25f;
	Local_872.f_18 = 0.25f;
	Local_872.f_16 = joaat("UPPERBODYFEATHERED_NORIGHTARM_FILTER");
	PED::SET_PED_CONFIG_FLAG(Global_35, 405, true);
	return cParam0->f_607 == cParam0->f_607;
}

bool func_758(char[4] cParam0)
{
	TASK::TASK_LOOK_AT_ENTITY(Global_35, Local_488[0 /*17*/], -1, 0, 51, 0);
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_110, Local_488[0 /*17*/], BUILTIN::FLOOR((8f * 1000f)), -1f, -1f, -1f);
	TASK::TASK_LOOK_AT_ENTITY(iLocal_110, Local_488[0 /*17*/], -1, 0, 51, 0);
	TASK::TASK_LOOK_AT_ENTITY(iLocal_108, Local_488[1 /*17*/], -1, 0, 51, 0);
	TASK::OPEN_SEQUENCE_TASK(&iLocal_131);
	__LIB_3__::func_638(0, func_212(3, 1), 1f, 20000, 1048576000 /* Float: 0.25f */, 0);
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_488[1 /*17*/], BUILTIN::FLOOR((8f * 1000f)), -1f, -1f, -1f);
	TASK::CLOSE_SEQUENCE_TASK(iLocal_131);
	TASK::TASK_PERFORM_SEQUENCE(iLocal_108, iLocal_131);
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_131);
	func_1297(cParam0);
	func_1298();
	func_1299(iLocal_304);
	__LIB_8__::func_707(cParam0, __LIB_6__::func_864(cParam0), 256);
	__LIB_6__::func_868(cParam0, 33554432);
	__LIB_8__::func_665(cParam0, 64);
	__LIB_4__::func_89(&uLocal_80, 0);
	__LIB_6__::func_876(cParam0, 0);
	__LIB_9__::func_195(cParam0, 1);
	return cParam0->f_607 == cParam0->f_607;
}

int func_759(char[4] cParam0)
{
	func_1300(cParam0);
	func_1301(cParam0, iLocal_108, &iLocal_867, &uLocal_855, "MOB4_REDIRECT");
	func_1301(cParam0, iLocal_110, &iLocal_868, &uLocal_858, "MOB4_REDIRECT2");
	func_1302(cParam0);
	func_1303(cParam0);
	func_1304(cParam0);
	func_1305(cParam0);
	func_1306(&Local_488);
	func_1283(iLocal_108, 1054448026 /* Float: 0.425f */);
	func_1283(iLocal_110, 1054448026 /* Float: 0.425f */);
	func_1307();
	if (__LIB_6__::func_889(cParam0) < 2)
	{
		func_1280(cParam0);
	}
	switch (__LIB_6__::func_889(cParam0))
	{
		case 0:
			if (__LIB_9__::func_178(&uLocal_80) > 2.5f)
			{
				CAM::SET_GAMEPLAY_ENTITY_HINT(Local_488[0 /*17*/], vLocal_59, true, BUILTIN::FLOOR((5.5f * 1000f)), 2000, 2000, 0);
				__LIB_1__::func_561(&uLocal_80);
				__LIB_9__::func_948(cParam0, iLocal_310);
				__LIB_9__::func_948(cParam0, iLocal_311);
				__LIB_6__::func_876(cParam0, 1);
			}
			break;
		case 1:
			if (!func_1309(ENTITY::GET_ENTITY_COORDS(iLocal_110, true, false), 9f) && !func_1309(func_376(3, 5), 9f))
			{
				__LIB_4__::func_89(&uLocal_80, 0);
				func_1310();
				__LIB_9__::func_195(cParam0, 2);
				__LIB_6__::func_876(cParam0, 2);
			}
			break;
		case 2:
			if (__LIB_9__::func_178(&uLocal_80) > 2.5f && (func_1311("MOB4_SAFE") > 2 || !func_1312("MOB4_SAFE")))
			{
				__LIB_3__::func_10(Global_35);
				__LIB_3__::func_10(iLocal_108);
				__LIB_3__::func_10(iLocal_110);
				WEAPON::SET_CURRENT_PED_WEAPON(iLocal_108, joaat("WEAPON_MELEE_DAVY_LANTERN"), false, 0, false, false);
				WEAPON::SET_CURRENT_PED_WEAPON(iLocal_108, joaat("WEAPON_UNARMED"), false, 1, false, false);
				TASK::TASK_SWAP_WEAPON(iLocal_108, 1, 1, 0, 0);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_132);
				TASK::TASK_PAUSE(0, 250);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_837, 1f, -1, 0.25f, 0, 40000f);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_108, 3000, -1f, -1f, -1f);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_132);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_110, iLocal_132);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_132);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_131);
				TASK::TASK_PAUSE(0, 1000);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_837, 1f, 20000, 4f, 0, 40000f);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_114, 0, -1f, -1f, -1f);
				TASK::TASK_PAUSE(0, 6500);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_131);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_108, iLocal_131);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_131);
				__LIB_1__::func_561(&uLocal_80);
				__LIB_9__::func_195(cParam0, 3);
				__LIB_6__::func_876(cParam0, 3);
			}
			break;
		case 3:
			if (!__LIB_0__::func_491(iLocal_108, 242628503) || func_1314())
			{
				TASK::TASK_SCRIPTED_ANIMATION(iLocal_108, &Local_872);
				__LIB_4__::func_89(&uLocal_80, 0);
				__LIB_6__::func_876(cParam0, 4);
			}
			break;
		case 4:
			if (!__LIB_0__::func_491(iLocal_108, -2017877118) || (func_1314() && __LIB_9__::func_178(&uLocal_80) > 2.5f))
			{
				if (__LIB_11__::func_741(iLocal_110, joaat("BLIP_STYLE_COMPANION"), 1))
				{
					iLocal_107 = __LIB_8__::func_777(-308585968, vLocal_62, 30f, 1);
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_107, "MOB4_SEARCH");
					func_1258(cParam0, 9, 1f);
					PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, sLocal_40, 1f, -1);
					PED::_SET_PED_BLACKBOARD_FLOAT(iLocal_108, sLocal_40, 1f, -1);
					PED::_SET_PED_BLACKBOARD_FLOAT(iLocal_110, sLocal_40, 1f, -1);
					iLocal_867 = 1;
					iLocal_868 = 1;
					__LIB_1__::func_561(&uLocal_80);
					__LIB_6__::func_876(cParam0, 5);
				}
			}
			break;
		case 5:
			func_1317();
			if (iLocal_866 >= 9)
			{
				if (__LIB_0__::func_266(Global_35, vLocal_840, 2.75f, 1, 0) || __LIB_0__::func_266(Global_35, vLocal_843, 2.75f, 1, 0))
				{
					__LIB_6__::func_876(cParam0, 6);
				}
			}
			break;
		case 6:
			CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
			if (__LIB_0__::func_266(Global_35, vLocal_846, 2.75f, 1, 0))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
			}
			if (__LIB_4__::func_641())
			{
				if (!__LIB_0__::func_491(Global_35, -208384378))
				{
					TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(Global_35, PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35), Global_36, 1f, 1);
				}
			}
			else if (func_1319(cParam0, 0))
			{
				AUDIO::_0x36559148B78853B3(1, 0, 0);
				func_1320();
				__LIB_3__::func_10(Global_35);
				__LIB_0__::func_325(&iLocal_107);
				func_1321(cParam0, 0);
				__LIB_9__::func_195(cParam0, 51);
				__LIB_6__::func_876(cParam0, 29);
			}
			else if (!__LIB_0__::func_491(Global_35, 713668775))
			{
				if (!WEAPON::_IS_WEAPON_LANTERN(__LIB_0__::func_399(Global_35, 1, 0, 0)))
				{
					WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
					TASK::TASK_SWAP_WEAPON(Global_35, 0, 1, 0, 0);
				}
				func_1320();
				AUDIO::_0x36559148B78853B3(1, 1, 1);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Global_35, vLocal_840, 1.5f, 40000, 0.25f, 4202497, 40000f);
			}
			break;
		case 29:
			CAM::_0xE296208C273BD7F0(1000, -1, 0, 17, 1, 0);
			CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
			__LIB_4__::func_89(&uLocal_80, 0);
			if (__LIB_9__::func_178(&uLocal_80) > 2.5f || (__LIB_9__::func_178(&uLocal_80) > 1f && ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1)))
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_760(var uParam0)
{
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_111, false);
	TASK::CLEAR_PED_SECONDARY_TASK(iLocal_111);
	CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
	CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
	MISC::_0xFC6ECB9170145ECE();
	MISC::_0xE98D55C5983F2509(iLocal_111);
	func_163();
	func_1230();
	__LIB_0__::func_325(&iLocal_107);
	func_453(&Local_488, 1);
	func_434(iLocal_111, 0);
	TASK::CLEAR_PED_TASKS(iLocal_108, true, false);
	TASK::CLEAR_PED_TASKS(iLocal_110, true, false);
	__LIB_3__::func_10(Global_35);
	__LIB_1__::func_561(&uLocal_77);
	__LIB_1__::func_561(&uLocal_80);
	__LIB_1__::func_561(&uLocal_855);
	__LIB_1__::func_561(&uLocal_858);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_762(char[4] cParam0)
{
	CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
	CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
	if (!__LIB_6__::func_872(cParam0, 4))
	{
		if (!func_1293())
		{
			return false;
		}
		if (!func_1322())
		{
			return false;
		}
		func_1323(cParam0);
	}
	else
	{
		func_876(iLocal_114, 2297.177f, -694.1502f, 40.2377f, ENTITY::GET_ENTITY_HEADING(iLocal_114), 0, 1073741824 /* Float: 2f */);
	}
	WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
	WEAPON::_HIDE_PED_WEAPONS(iLocal_110, 2, true);
	WEAPON::_HIDE_PED_WEAPONS(iLocal_108, 2, true);
	WEAPON::_HIDE_PED_WEAPONS(iLocal_111, 2, true);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_114, false);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_111, false);
	TASK::CLEAR_PED_SECONDARY_TASK(iLocal_111);
	return cParam0->f_607 == cParam0->f_607;
}

bool func_763(char[4] cParam0)
{
	GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 256, false);
	PLAYER::_0x0751D461F06E41CE(PLAYER::GET_PLAYER_INDEX(), 8, 0, 1);
	func_457();
	uLocal_170 = __LIB_1__::func_391(iLocal_146, 0, 0, 0);
	__LIB_3__::func_730(iLocal_146, 0, 0, 0, 0, 0);
	uLocal_171 = __LIB_1__::func_391(iLocal_147, 0, 0, 0);
	__LIB_3__::func_730(iLocal_147, 0, 0, 0, 0, 0);
	__LIB_11__::func_335(iLocal_310);
	__LIB_11__::func_335(iLocal_311);
	__LIB_11__::func_335(iLocal_304);
	__LIB_1__::func_951(&iLocal_126);
	__LIB_1__::func_951(&iLocal_127);
	__LIB_1__::func_951(&iLocal_123);
	__LIB_1__::func_951(&iLocal_124);
	__LIB_1__::func_951(&iLocal_122);
	func_1325();
	func_1326();
	iLocal_107 = __LIB_4__::func_983(408396114, func_376(8, 0), 1);
	__LIB_9__::func_195(cParam0, 1);
	__LIB_6__::func_876(cParam0, 0);
	return cParam0->f_607 == cParam0->f_607;
}

int func_764(char[4] cParam0)
{
	func_1328(cParam0);
	func_1329(1f);
	switch (__LIB_6__::func_889(cParam0))
	{
		case 0:
			if (__LIB_0__::func_266(iLocal_114, vLocal_65, 5f, 1, 1) || __LIB_11__::func_23(iLocal_114, sLocal_37))
			{
				TASK::CLEAR_PED_TASKS(iLocal_110, true, false);
				__LIB_6__::func_876(cParam0, 29);
			}
			else
			{
				func_1326();
			}
			break;
		case 29:
			return 1;
	}
	return 0;
}

bool func_765(var uParam0)
{
	PLAYER::_0x0751D461F06E41CE(PLAYER::GET_PLAYER_INDEX(), 8, 0, 0);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_766(var uParam0)
{
	func_1211(iLocal_114, func_212(5, 0), 0, 1073741824 /* Float: 2f */);
	ENTITY::SET_ENTITY_COORDS(iLocal_114, func_376(5, 0) + Vector(0.1f, 0f, 0f), true, false, true, true);
	__LIB_11__::func_28(&iLocal_108, &iLocal_114, 2, 1);
	__LIB_11__::func_28(&iLocal_110, &iLocal_114, -1, 1);
	__LIB_11__::func_28(&Global_35, &iLocal_114, 3, 1);
	__LIB_11__::func_28(&iLocal_111, &iLocal_114, 4, 1);
	iLocal_107 = __LIB_4__::func_983(408396114, func_376(8, 0), 1);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 256, false);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_767(var uParam0)
{
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 256, false);
	PED::SET_PED_LEG_IK_MODE(Global_35, 0);
	PED::SET_PED_LEG_IK_MODE(iLocal_108, 0);
	PED::SET_PED_LEG_IK_MODE(iLocal_110, 0);
	func_1331(iLocal_313);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_768(char[4] cParam0)
{
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iLocal_313, func_1332(1048576000 /* Float: 0.25f */), ENTITY::GET_ENTITY_ROTATION(iLocal_114, 2), 2);
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_312))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_312);
	}
	ANIMSCENE::START_ANIM_SCENE(iLocal_313);
	AUDIO::_0x36559148B78853B3(1, 0, 0);
	__LIB_9__::func_948(cParam0, iLocal_314);
	__LIB_6__::func_876(cParam0, 0);
	__LIB_9__::func_195(cParam0, 1);
	return cParam0->f_607 == cParam0->f_607;
}

int func_769(char[4] cParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	func_1333(cParam0);
	func_1334(cParam0);
	switch (__LIB_6__::func_889(cParam0))
	{
		case 0:
			if (func_1335(iLocal_313))
			{
				VEHICLE::SET_BOAT_ANCHOR(iLocal_114, true);
				PAD::SET_PAD_SHAKE(0, 500, 100);
				CAM::SHAKE_GAMEPLAY_CAM("SMALL_EXPLOSION_SHAKE", 0.25f);
				AUDIO::_PLAY_SOUND_FROM_ENTITY("boat_impact_small", iLocal_114, "MOB4_Sounds", false, 0, 0);
				__LIB_6__::func_876(cParam0, 1);
			}
			break;
		case 1:
			if (__LIB_11__::func_337(iLocal_313) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("EXIT")))
			{
				func_1331(iLocal_314);
				ANIMSCENE::_GET_ANIM_SCENE_ORIGIN(iLocal_313, &vVar0, &vVar3, 2);
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iLocal_314, vVar0, vVar3, 2);
				ANIMSCENE::START_ANIM_SCENE(iLocal_314);
				__LIB_9__::func_195(cParam0, 2);
				__LIB_6__::func_876(cParam0, 2);
			}
			break;
		case 2:
			if (__LIB_11__::func_25(iLocal_314, 5.8f))
			{
				VEHICLE::SET_BOAT_ANCHOR(iLocal_114, false);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_114, true);
				PAD::SET_PAD_SHAKE(0, 1500, 75);
				__LIB_6__::func_876(cParam0, 3);
			}
			break;
		case 3:
			if (__LIB_11__::func_25(iLocal_314, 9.5f))
			{
				GRAPHICS::_START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE_2("scr_mob4_ped_water_splash", iLocal_111, vLocal_59, vLocal_59, PED::GET_PED_BONE_INDEX(iLocal_111, 14283), 1f, false, false, false);
				__LIB_6__::func_876(cParam0, 4);
			}
			break;
		case 4:
			if (__LIB_11__::func_25(iLocal_314, 10f))
			{
				if (func_1257(iLocal_111, joaat("BLIP_STYLE_COMPANION"), "MOB4_JULES", 1, 1, -1186550032))
				{
					ENTITY::SET_ENTITY_VISIBLE(iLocal_111, false);
					__LIB_6__::func_876(cParam0, 5);
				}
			}
			break;
		case 5:
			if (__LIB_11__::func_25(iLocal_314, 15.5f))
			{
				func_1338();
			}
			if (__LIB_11__::func_337(iLocal_314) || func_1339(Global_35, iLocal_314, "ARTHUR"))
			{
				__LIB_1__::func_951(&iLocal_116);
				__LIB_0__::func_325(&iLocal_107);
				func_1325();
				func_1340(1, 1);
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_314, "SKIFF", iLocal_114);
				WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
				func_1211(iLocal_111, func_212(6, 0), 2, 1073741824 /* Float: 2f */);
				__LIB_6__::func_876(cParam0, 29);
			}
			break;
		case 29:
			func_1340(1, 1);
			func_1338();
			return 1;
	}
	return 0;
}

bool func_770(var uParam0)
{
	func_1340(1, 1);
	func_1338();
	__LIB_0__::func_325(&iLocal_107);
	func_1289();
	return uParam0->f_607 == uParam0->f_607;
}

bool func_771(var uParam0)
{
	func_1211(iLocal_114, func_212(6, 2), 2, 1073741824 /* Float: 2f */);
	func_1211(iLocal_111, func_212(6, 0), 2, 1073741824 /* Float: 2f */);
	__LIB_3__::func_595(ENTITY::GET_ENTITY_COORDS(iLocal_111, true, false));
	PED::SET_PED_INTO_VEHICLE(iLocal_108, iLocal_114, 2);
	PED::SET_PED_INTO_VEHICLE(iLocal_110, iLocal_114, -1);
	func_1342(Global_35, vLocal_71, ENTITY::GET_ENTITY_COORDS(Local_694, true, false), joaat("MOTIONSTATE_IDLE"));
	return uParam0->f_607 == uParam0->f_607;
}

bool func_772(var uParam0)
{
	func_1340(1, 1);
	if (!func_890())
	{
		return false;
	}
	if (!func_1343())
	{
		return false;
	}
	func_1344(Local_694, -0.15f);
	func_1345();
	func_1346();
	func_1347();
	func_1348();
	func_1349();
	func_1350();
	func_1351();
	func_1352();
	func_1353();
	func_1354(iLocal_325);
	func_1355();
	func_1356();
	func_1357();
	func_1358();
	func_1359();
	func_1360();
	func_1361(0);
	func_1362();
	func_1338();
	ENTITY::_0x002AAC783ED323ED(Local_694, 1);
	PED::SET_PED_CONFIG_FLAG(Local_694, 273, true);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iLocal_315, vLocal_59, vLocal_59, 2);
	ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(iLocal_315, iLocal_114, 0);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iLocal_316, func_376(6, 0) - vLocal_933, 0f, 0f, (__LIB_0__::func_152(func_376(6, 0), func_376(6, 2), 1) - 90f), 2);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iLocal_318, vLocal_59, vLocal_59, 2);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iLocal_320, vLocal_59, vLocal_59, 2);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iLocal_319, vLocal_59, vLocal_59, 2);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iLocal_321, vLocal_59, vLocal_59, 2);
	ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(iLocal_321, iLocal_114, 0);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iLocal_322, vLocal_59, vLocal_59, 2);
	ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(iLocal_322, iLocal_114, 0);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iLocal_324, vLocal_59, vLocal_59, 2);
	ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(iLocal_324, iLocal_114, 0);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iLocal_325, vLocal_59, vLocal_59, 2);
	ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(iLocal_325, iLocal_114, 0);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iLocal_326, vLocal_59, vLocal_59, 2);
	ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(iLocal_326, iLocal_114, 0);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_773(char[4] cParam0)
{
	func_1340(1, 1);
	if (!func_1364())
	{
		return false;
	}
	if (!func_1257(iLocal_111, joaat("BLIP_STYLE_COMPANION"), "MOB4_JULES", 1, 1, -401963276))
	{
		return false;
	}
	if (!func_1365())
	{
		return false;
	}
	func_1366();
	func_1338();
	PED::SET_PED_LEG_IK_MODE(iLocal_111, 0);
	ANIMSCENE::START_ANIM_SCENE(iLocal_316);
	ENTITY::SET_ENTITY_VISIBLE(iLocal_111, true);
	SCRIPTS::_0x7D654266025E921B(joaat("CHAL_CTX_CUSTOM_1"));
	__LIB_9__::func_195(cParam0, 1);
	__LIB_6__::func_876(cParam0, 0);
	return cParam0->f_607 == cParam0->f_607;
}

int func_774(char[4] cParam0)
{
	func_1367(Global_35, 2f);
	func_1367(iLocal_108, 2f);
	func_1368(cParam0);
	func_1369(cParam0);
	func_1280(cParam0);
	func_1370(cParam0);
	func_1371(cParam0);
	func_1372();
	func_1373(iLocal_316, 1036831949 /* Float: 0.1f */);
	func_1374(&Local_694);
	func_1375();
	switch (__LIB_6__::func_889(cParam0))
	{
		case 0:
			if (func_1376(cParam0))
			{
				__LIB_6__::func_876(cParam0, 1);
			}
			break;
		case 1:
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
			func_1377();
			if (iLocal_1000 == 10)
			{
				__LIB_6__::func_876(cParam0, 29);
			}
			break;
		case 29:
			return 1;
	}
	return 0;
}

bool func_775(var uParam0)
{
	func_1340(0, 1);
	__LIB_11__::func_335(iLocal_318);
	__LIB_11__::func_335(iLocal_320);
	__LIB_11__::func_335(iLocal_319);
	__LIB_11__::func_335(iLocal_322);
	__LIB_11__::func_335(iLocal_324);
	__LIB_0__::func_325(&iLocal_107);
	__LIB_1__::func_561(&uLocal_1016);
	__LIB_1__::func_561(&uLocal_1013);
	ENTITY::SET_ENTITY_INVINCIBLE(iLocal_114, false);
	SCRIPTS::_0x50B72A754EE64A71(joaat("CHAL_CTX_CUSTOM_1"));
	PED::SET_PED_CONFIG_FLAG(Local_694, 273, false);
	PED::SET_PED_CONFIG_FLAG(Global_35, 174, false);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_776(char[4] cParam0)
{
	func_1340(0, 1);
	if (!__LIB_6__::func_872(cParam0, 4))
	{
		__LIB_11__::func_755(256);
		__LIB_11__::func_755(512);
		__LIB_11__::func_755(1024);
	}
	func_1211(iLocal_114, func_212(6, 2), 0, 1073741824 /* Float: 2f */);
	__LIB_11__::func_28(&iLocal_110, &iLocal_114, -1, 1);
	func_1378(ENTITY::GET_ENTITY_COORDS(Local_694, true, false));
	__LIB_3__::func_595(func_376(7, 0));
	func_1379(Global_35, 1, joaat("WEAPON_REVOLVER_CATTLEMAN"));
	return cParam0->f_607 == cParam0->f_607;
}

bool func_777(char[4] cParam0)
{
	func_1340(0, 1);
	__LIB_9__::func_53(cParam0);
	__LIB_6__::func_868(cParam0, 33554432);
	func_1344(Local_694, 1.5f);
	func_1211(Local_694, func_212(7, 0), 2, 1073741824 /* Float: 2f */);
	func_1380();
	func_1381();
	func_1382();
	func_1354(iLocal_325);
	func_1362();
	if (!func_1335(iLocal_325))
	{
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iLocal_325, vLocal_59, vLocal_59, 2);
		ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(iLocal_325, iLocal_114, 0);
		ANIMSCENE::START_ANIM_SCENE(iLocal_325);
	}
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iLocal_326, vLocal_59, vLocal_59, 2);
	ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(iLocal_326, iLocal_114, 0);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iLocal_327, vLocal_59, vLocal_59, 2);
	ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(iLocal_327, iLocal_114, 0);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iLocal_328, vLocal_59, vLocal_59, 2);
	ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(iLocal_328, iLocal_114, 0);
	TASK::TASK_STAND_STILL(Local_694, -1);
	return cParam0->f_607 == cParam0->f_607;
}

bool func_778(char[4] cParam0)
{
	func_1340(0, 1);
	if (!func_1364())
	{
		return false;
	}
	if (!func_1365())
	{
		return false;
	}
	if (!__LIB_0__::func_491(iLocal_110, -235832601))
	{
		TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iLocal_110, iLocal_114, sLocal_38, 0, 3, 67110912, -1, 0.1f, 0, 1073741824 /* Float: 2f */, 0);
	}
	func_1383(Global_35, iLocal_111, 0);
	func_1383(iLocal_114, iLocal_111, 0);
	__LIB_9__::func_948(cParam0, iLocal_327);
	__LIB_2__::func_279(iLocal_111, 1);
	__LIB_4__::func_63(iLocal_111, 1);
	__LIB_6__::func_876(cParam0, 0);
	__LIB_9__::func_195(cParam0, 1);
	return cParam0->f_607 == cParam0->f_607;
}

int func_779(char[4] cParam0)
{
	func_1386();
	func_1387(cParam0);
	func_1388(cParam0);
	func_1389(cParam0);
	func_1390(cParam0);
	func_1374(&Local_694);
	switch (__LIB_6__::func_889(cParam0))
	{
		case 0:
			func_1340(0, 1);
			if (func_1391(cParam0, -2f, 0f, 0f, 0))
			{
				__LIB_0__::func_769();
				__LIB_6__::func_876(cParam0, 1);
			}
			break;
		case 1:
			if (func_1392(cParam0))
			{
				func_1378(ENTITY::GET_ENTITY_COORDS(Local_694, true, false));
				func_1258(cParam0, 16, 5f);
				__LIB_9__::func_195(cParam0, 4);
				__LIB_6__::func_876(cParam0, 2);
			}
			break;
		case 2:
			func_1340(0, 1);
			if (func_1391(cParam0, vLocal_59, 1))
			{
				func_1310();
				__LIB_9__::func_195(cParam0, 6);
				__LIB_6__::func_876(cParam0, 3);
			}
			break;
		case 3:
			func_1340(0, 1);
			__LIB_4__::func_89(&uLocal_80, 0);
			if (__LIB_9__::func_178(&uLocal_80) > 1f)
			{
				CAM::_0xE296208C273BD7F0(1000, -1, 0, 17, 1, 0);
				if (__LIB_0__::func_491(iLocal_108, 242628503))
				{
					TASK::CLEAR_PED_TASKS(iLocal_108, true, false);
				}
			}
			if (__LIB_9__::func_178(&uLocal_80) > 2.5f)
			{
				__LIB_6__::func_876(cParam0, 29);
			}
			break;
		case 29:
			func_1340(1, 1);
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			if (!AUDIO::_0xA2CAC9DEF0195E6F(1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_780(var uParam0)
{
	func_1340(0, 1);
	CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
	func_1338();
	if (ENTITY::DOES_ENTITY_EXIST(Local_694))
	{
		__LIB_2__::func_426(&Local_694);
	}
	func_1393();
	__LIB_0__::func_325(&iLocal_107);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_781(var uParam0)
{
	func_1211(iLocal_114, func_212(8, 6), 128, 1073741824 /* Float: 2f */);
	func_1211(iLocal_108, func_212(8, 3), 2, 1073741824 /* Float: 2f */);
	func_1211(Global_35, func_212(8, 0), 2, 1073741824 /* Float: 2f */);
	func_1211(iLocal_110, func_212(8, 4), 2, 1073741824 /* Float: 2f */);
	func_1211(iLocal_111, func_212(8, 5), 2, 1073741824 /* Float: 2f */);
	return uParam0->f_607 == uParam0->f_607;
}

bool func_782(char[4] cParam0)
{
	CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
	func_1338();
	if (!func_1201(cParam0, &iLocal_112, func_212(2, 3), 0))
	{
		return false;
	}
	if (!func_1202(&iLocal_113, func_212(2, 7)))
	{
		return false;
	}
	PED::SET_PED_USING_ACTION_MODE(Global_35, false, -1, 0);
	PED::SET_PED_USING_ACTION_MODE(iLocal_108, false, -1, 0);
	func_933();
	func_1394(cParam0);
	if (func_1395())
	{
		__LIB_11__::func_342(128);
	}
	else
	{
		bLocal_1119 = func_1397(cParam0);
	}
	__LIB_9__::func_804(1);
	return cParam0->f_607 == cParam0->f_607;
}

bool func_783(char[4] cParam0)
{
	func_1399(cParam0, 0);
	__LIB_6__::func_876(cParam0, 0);
	return cParam0->f_607 == cParam0->f_607;
}

int func_784(char[4] cParam0)
{
	if (__LIB_11__::func_20(128))
	{
		return func_1399(cParam0, 0);
	}
	switch (__LIB_6__::func_889(cParam0))
	{
		case 0:
			__LIB_4__::func_89(&uLocal_80, 0);
			if (func_1400(cParam0, "MOB4_EXT_POST", 0, 1073741824 /* Float: 2f */, 0, 0) || __LIB_9__::func_178(&uLocal_80) > 2.5f)
			{
				__LIB_1__::func_561(&uLocal_80);
				__LIB_6__::func_876(cParam0, 1);
			}
			break;
		case 1:
			__LIB_4__::func_89(&uLocal_80, 0);
			if (func_1312("MOB4_EXT_POST") || __LIB_9__::func_178(&uLocal_80) > 1f)
			{
				__LIB_1__::func_561(&uLocal_80);
				__LIB_6__::func_876(cParam0, 29);
			}
			break;
		case 29:
			__LIB_4__::func_89(&uLocal_80, 0);
			if (!func_1312("MOB4_EXT_POST") || __LIB_9__::func_178(&uLocal_80) > 8f)
			{
				__LIB_1__::func_561(&uLocal_80);
				return 1;
			}
			break;
	}
	return 0;
}

bool func_785(var uParam0)
{
	vector3 vVar0;
	CAM::DESTROY_CAM(iLocal_1131, false);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
	__LIB_9__::func_802(1);
	vVar0 = { __LIB_3__::func_153(69, 2) };
	__LIB_3__::func_152(69);
	__LIB_8__::func_980(69, 0);
	__LIB_2__::func_29(512);
	__LIB_2__::func_778(vVar0, 1137180672 /* Float: 400f */);
	__LIB_8__::func_958(69, 1, vVar0, -1, 0, 1);
	return uParam0->f_607 == uParam0->f_607;
}

Vector3 func_786(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 1892.481f, -1859.011f, 46.6553f;
				case 1:
					return 1861.276f, -1837.683f, 42.0315f;
				case 2:
					return 1895.229f, -1861.599f, 46.9053f;
				case 3:
					return 1856.594f, -1830.679f, 42.4968f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1866.958f, -1838.691f, 42.0576f;
				case 1:
					return 1855.828f, -1830.06f, 42.9569f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 2141.518f, -626.9398f, 41.6222f;
				case 1:
					return 2187.332f, -590.6906f, 41.0667f;
				case 2:
					return 2220.242f, -599.0693f, 40.3497f;
				case 3:
					return 2133.608f, -624.46f, 41.3499f;
				case 4:
					return 2140.04f, -626.335f, 41.8019f;
				case 5:
					return 2190.353f, -589.0837f, 41.0667f;
				case 6:
					return 2221.946f, -598.1188f, 40.5041f;
				case 7:
					return 2135.594f, -624.8658f, 41.8499f;
				case 8:
					return 2139.59f, -631.0519f, 42.7204f;
				case 9:
					return 2141.154f, -625.5172f, 41.6776f;
				case 10:
					return 2191.581f, -590.3105f, 41.0667f;
				case 11:
					return 2222.082f, -599.7197f, 40.6357f;
				case 12:
					return 2233.527f, -616.8514f, 40.3552f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 2246.196f, -615.2085f, 40.8398f;
				case 1:
					return 2245.902f, -616.7827f, 40.7869f;
				case 2:
					return 2247.145f, -617.268f, 40.9644f;
				case 3:
					return 2316.65f, -682.2f, 43f;
				case 4:
					return 2303.302f, -689.887f, 39.9f;
				case 5:
					return 2260.164f, -613.2631f, 40.5f;
				case 6:
					return 2258.777f, -608.7679f, 40.5f;
				case 7:
					return 2264.968f, -611.6603f, 40.5f;
				case 8:
					return 2247.781f, -647.8961f, 40.5f;
				case 9:
					return 2244.165f, -652.3115f, 40.5f;
				case 10:
					return 2253.699f, -655.9592f, 40.5f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 2306.513f, -684.1935f, 40.6042f;
				case 1:
					return 2293.585f, -674.1851f, 40.5181f;
				case 2:
					return 2288.186f, -670.5541f, 40.6229f;
				case 3:
					return 2319.699f, -680.1346f, 40.5f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 2261.339f, -681.9481f, 39.9f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 2242.684f, -650.1654f, 40.5f;
				case 1:
					return 2234.361f, -649.9609f, 40.5f;
				case 2:
					return 2256.622f, -676.4612f, 39.9f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 2248.192f, -642.2952f, 40.5f;
				case 1:
					return 2153.457f, -660.0919f, 40.704f;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return 2141.122f, -649.9993f, 41.8983f;
				case 1:
					return 2167.996f, -1082.998f, 41.7216f;
				case 2:
					return 2176.92f, -1078.619f, 42.1067f;
				case 3:
					return 2139.525f, -650.3542f, 41.6483f;
				case 4:
					return 2138.676f, -648.9589f, 41.8983f;
				case 5:
					return 2140.399f, -647.257f, 41.6829f;
				case 6:
					return 2143.5f, -649.3483f, 39.9f;
				case 7:
					return 2169.7f, -1083.1f, 41.7f;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 2188.674f, -594.3385f, 40.368f;
				case 1:
					return 2190.296f, -592.0753f, 40.868f;
				case 2:
					return 2211.883f, -586.0458f, 40.3157f;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return 2200.865f, -599.5377f, 40.4999f;
				case 1:
					return 2198.255f, -603.5129f, 40.4999f;
				case 2:
					return 2224.344f, -587.6285f, 40.4999f;
				case 3:
					return 2234.364f, -596.977f, 40.4999f;
				case 4:
					return 2247.393f, -626.7539f, 40.4999f;
				case 5:
					return 2224.878f, -620.8572f, 40.4999f;
				case 6:
					return 2221.901f, -618.0486f, 40.4999f;
				case 7:
					return 2219.025f, -597.952f, 40.4999f;
				case 8:
					return 2232.573f, -601.3348f, 40.4999f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_791(var uParam0)
{
	int iVar0;
	if (__LIB_1__::func_750(&iVar0))
	{
		if (__LIB_0__::func_144(iVar0, 0))
		{
			if (__LIB_0__::func_357(iVar0) == -525676072)
			{
				PED::_SET_PED_COMPONENT_DISABLED(Global_35, joaat("MASKS_LARGE"), 0);
				func_616(Global_35, joaat("CLOTHING_ITEM_HAT_NONE"), 0, 1108822547, 0, 1, 0, 0, 0, 0);
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

void func_792(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
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
		func_1410();
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

void func_794(var uParam0)
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
			func_876(iVar1, __LIB_4__::func_548(uParam0), __LIB_4__::func_549(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_876(iVar3, __LIB_4__::func_548(uParam0), __LIB_4__::func_549(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_795(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if ((__LIB_0__::func_84(uParam0, 268435456) && !__LIB_0__::func_86(__LIB_4__::func_548(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { __LIB_4__::func_548(uParam0) };
			func_876(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

int func_803(int iParam0, int iParam1)
{
	var uVar0;
	return func_1433(&uVar0, iParam0, iParam1);
}

bool func_868(char[4] cParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, float fParam7, bool bParam8, int iParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13)
{
	if (!__LIB_0__::func_31(iParam1))
	{
		return false;
	}
	if ((!ENTITY::IS_ENTITY_DEAD(*iParam2) && __LIB_1__::func_22(iParam1)) && __LIB_0__::func_167(iParam1) == *iParam2)
	{
		return true;
	}
	*iParam2 = func_1464(iParam1, 1, 0, iParam4, iParam5, iParam6, fParam7, bParam8, 1, 0, 0, bParam10, 0, iParam9, 0, 0, 0, iParam11, 1, 1, bParam13, 0, 1, 0, 1);
	if (ENTITY::DOES_ENTITY_EXIST(*iParam2))
	{
		func_1465(cParam0, *iParam2, iParam1, bParam3, (bParam8 && bParam12), bParam10, bParam13);
		__LIB_4__::func_703(iParam1);
		return true;
	}
	return false;
}

void func_876(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
	if (iParam0 == __LIB_0__::func_17(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
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
				func_876(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_876(iVar2, vParam1, fParam4, iParam5, iParam6);
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

bool func_878(var uParam0, int iParam1)
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
			func_792(&iVar0, 0, 2, 0, 0, 0, 0);
			__LIB_0__::func_19(uParam0, 2);
			break;
		case 2:
			if (__LIB_6__::func_918(uParam0))
			{
				__LIB_0__::func_568(uParam0->f_8, 5000f, 0);
				PED::_0x4759CC730F947C81();
				__LIB_4__::func_89(&(uParam0->f_3), 1);
				__LIB_0__::func_19(uParam0, 3);
			}
			break;
		case 3:
			if (__LIB_1__::func_583(&(uParam0->f_3)) >= 1f)
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
			func_1496(&iVar1, 0);
			AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
			__LIB_0__::func_19(uParam0, 0);
			return true;
	}
	return false;
}

bool func_880(char[4] cParam0)
{
	int iVar0;
	struct<4> Var1;
	iVar0 = __LIB_9__::func_40(cParam0);
	if (__LIB_8__::func_663(cParam0, __LIB_6__::func_864(cParam0)) <= 3)
	{
		iVar0 = __LIB_6__::func_864(cParam0);
	}
	Var1 = { __LIB_8__::func_688(cParam0, iVar0) };
	if (func_1500(&(cParam0->f_10792), Var1, __LIB_0__::func_81(&(cParam0->f_10792)), 0))
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

bool func_881(char[4] cParam0, struct<4> Param1)
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
	if (func_1506(Param1, &(cParam0->f_7375), cParam0))
	{
		return true;
	}
	if (__LIB_6__::func_877(cParam0) == 0)
	{
		__LIB_19__::func_186(cParam0);
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

bool func_887(char[4] cParam0)
{
	if (!func_1513(cParam0))
	{
		return false;
	}
	if (!func_1514(cParam0))
	{
		return false;
	}
	if (!func_1515(cParam0))
	{
		return false;
	}
	if (__LIB_6__::func_864(cParam0) == 0)
	{
		if (!func_1516(cParam0))
		{
			return false;
		}
	}
	if (__LIB_6__::func_864(cParam0) > 2)
	{
		if (!func_1292(cParam0))
		{
			return false;
		}
		if (!func_1201(cParam0, &iLocal_112, func_212(2, 3), 1))
		{
			return false;
		}
	}
	return true;
}

bool func_888(char[4] cParam0)
{
	if (__LIB_6__::func_864(cParam0) >= 2)
	{
		if (!func_1262(cParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_889(char[4] cParam0)
{
	if (__LIB_6__::func_864(cParam0) == 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_117))
		{
			iLocal_117 = OBJECT::CREATE_OBJECT(iLocal_24, vLocal_68, true, true, false, false, true);
			return false;
		}
	}
	if (__LIB_6__::func_864(cParam0) <= 1 || (__LIB_6__::func_864(cParam0) == 2 && !__LIB_6__::func_872(cParam0, 4)))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_119))
		{
			iLocal_119 = OBJECT::CREATE_OBJECT(iLocal_23, 2139.563f, -631.7987f, 41.699f, true, true, false, false, true);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_119, true);
			return false;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_120))
		{
			iLocal_120 = OBJECT::CREATE_OBJECT(iLocal_23, 2140.686f, -631.3403f, 42.0434f, true, true, false, false, true);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_120, true);
			return false;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_121))
		{
			iLocal_121 = OBJECT::CREATE_OBJECT(iLocal_23, 2141.874f, -629.8882f, 42.1538f, true, true, false, false, true);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_121, true);
			return false;
		}
	}
	if (__LIB_6__::func_864(cParam0) <= 2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_118))
		{
			iLocal_118 = OBJECT::CREATE_OBJECT(iLocal_26, 2138.779f, -630.2262f, 41.7221f, true, true, false, false, true);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_118, true);
			return false;
		}
	}
	return true;
}

bool func_890()
{
	if (!func_1517(&Local_694, func_212(6, 1), iLocal_19, 1, 0, 4000, 0, 1))
	{
		return false;
	}
	Local_694.f_2 = Global_35;
	func_1518(&Local_694, 1);
	func_1344(Local_694, 0);
	func_1519(Local_694, 1, 1);
	MAP::ALLOW_SONAR_BLIPS(true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_694, true);
	ENTITY::SET_ENTITY_MAX_HEALTH(Local_694, 5000);
	ENTITY::_SET_ENTITY_HEALTH(Local_694, 5000, 0);
	PED::SET_PED_CONFIG_FLAG(Local_694, 263, true);
	PED::SET_PED_CONFIG_FLAG(Local_694, 138, false);
	PED::SET_PED_CONFIG_FLAG(Local_694, 179, true);
	PED::_0x0F967019CC853BCC(Local_694, 21030);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(Local_694, true, 0f);
	ENTITY::_0x002AAC783ED323ED(Local_694, 1);
	ENTITY::SET_ENTITY_PROOFS(Local_694, 4, false);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_694, true);
	return true;
}

void func_891(char[4] cParam0)
{
	int iVar0[5];
	int iVar6;
	func_1520();
	func_1268(cParam0);
	func_1521(cParam0);
	func_1522(cParam0);
	func_1523(cParam0);
	__LIB_11__::func_352(17, 0);
	__LIB_6__::func_78(__LIB_0__::func_560(3, 17), 4);
	if (__LIB_6__::func_864(cParam0) == 0)
	{
		__LIB_1__::func_948(553939906, 0, 1f, 1, 1, 0, 0, 0);
		__LIB_1__::func_948(357129292, 0, -1f, 1, 1, 0, 0, 0);
		__LIB_1__::func_948(1488396696, 0, -1f, 1, 1, 0, 0, 0);
	}
	if (__LIB_6__::func_864(cParam0) < 2)
	{
		ENTITY::CREATE_MODEL_HIDE(2123.506f, -612.6181f, 40.58901f, 2.5f, joaat("P_TARGETFRAME01X"), false);
		ENTITY::CREATE_MODEL_HIDE(2123.506f, -612.6181f, 40.58901f, 2.5f, joaat("P_DRYINGMEAT01X"), false);
	}
	if (__LIB_6__::func_864(cParam0) > 2)
	{
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(1910.999f, -1015.657f, 0f, 2539.618f, -254.1772f, 200f, false, true);
	}
	GRAPHICS::_SET_EXTRA_TIMECYCLE_MODIFIER_STRENGTH(0.5f);
	if (TASK::_GET_SCENARIO_POINT_CLOSE_TO_COORDS(1888.834f, -1860.361f, 42.15153f, 1f, &iVar0, 5) > 0)
	{
		iVar6 = 0;
		iVar6 = 0;
		while (iVar6 <= (iVar0 - 1))
		{
			if (iVar0[iVar6] != 0)
			{
				if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar0[iVar6]))
				{
					TASK::_SET_SCENARIO_POINT_ACTIVE(iVar0[iVar6], false);
				}
			}
			iVar6++;
		}
	}
	if (TASK::DOES_SCENARIO_GROUP_EXIST(sLocal_39))
	{
		if (TASK::IS_SCENARIO_GROUP_ENABLED(sLocal_39))
		{
			TASK::SET_SCENARIO_GROUP_ENABLED(sLocal_39, false);
		}
	}
}

void func_892(char[4] cParam0)
{
	__LIB_9__::func_14(cParam0, 244191);
	__LIB_9__::func_15(cParam0, 244224);
	__LIB_9__::func_16(cParam0, 244344);
}

void func_893(char[4] cParam0)
{
	func_1531();
	func_1532(cParam0);
	func_1533(cParam0);
	func_1534(cParam0);
	if (__LIB_6__::func_864(cParam0) > 1)
	{
		func_1535();
		func_1536();
	}
	if (__LIB_6__::func_864(cParam0) >= 2)
	{
		__LIB_1__::func_538(0);
	}
	if (__LIB_6__::func_864(cParam0) == 3 || (__LIB_6__::func_864(cParam0) == 4 && __LIB_8__::func_663(cParam0, 4) < 3))
	{
		func_1317();
	}
	if (__LIB_6__::func_864(cParam0) > 3 && __LIB_6__::func_864(cParam0) < 6)
	{
		func_1538(1, 1);
	}
	if (__LIB_6__::func_864(cParam0) == 7 || (__LIB_6__::func_864(cParam0) == 6 && __LIB_8__::func_663(cParam0, 6) > 5))
	{
		func_1338();
	}
	if (__LIB_6__::func_864(cParam0) != 25)
	{
		func_1539(cParam0);
	}
}

bool func_910(char[4] cParam0, int iParam1, int iParam2)
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
		func_1550(cParam0);
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

bool func_912(char[4] cParam0, int iParam1)
{
	struct<4> Var0;
	if (__LIB_6__::func_872(cParam0, 16384))
	{
		if (func_880(cParam0))
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
			if (func_880(cParam0))
			{
				__LIB_6__::func_887(cParam0, 2097152);
				func_881(cParam0, Var0);
			}
			return false;
		}
		else
		{
			return func_881(cParam0, Var0);
		}
	}
	else if (__LIB_6__::func_862(cParam0, 2097152))
	{
		if (func_880(cParam0))
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
		return func_881(cParam0, Var0);
	}
	return true;
}

bool func_925(char[4] cParam0)
{
	switch (__LIB_6__::func_864(cParam0))
	{
		case 0:
			__LIB_0__::func_11(cParam0);
			break;
		case 1:
			__LIB_0__::func_11(cParam0);
			break;
	}
	return true;
}

int func_927(char[4] cParam0)
{
	switch (__LIB_6__::func_864(cParam0))
	{
		case 0:
			__LIB_0__::func_11(cParam0);
			break;
		case 1:
			func_1576(cParam0);
			break;
	}
	return 1;
}

void func_931(int* iParam0)
{
	if (PATHFIND::_0xDE0EA444735C1368(iParam0->f_5))
	{
		PATHFIND::_0x2C87C3E1C7B96EE2(iParam0->f_5);
	}
	if (PED::_0x91A5F9CBEBB9D936(iParam0->f_7))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iParam0->f_7, false);
	}
	__LIB_0__::func_172(iParam0->f_6);
	__LIB_0__::func_172(iParam0->f_5);
	__LIB_1__::func_951(iParam0);
}

void func_933()
{
	if (CAM::_0x927B810E43E99932(&Local_258))
	{
		CAM::_0x0A5A4F1979ABB40E(&Local_258);
	}
	bLocal_294 = false;
}

float func_961(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 231.2196f;
				case 1:
					return 5.2196f;
				case 2:
					return 233.2196f;
				case 3:
					return 93.2196f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 59.2196f;
				case 1:
					return 199.2196f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 328.8227f;
				case 1:
					return 282.6973f;
				case 2:
					return -122.68f;
				case 3:
					return 144.0457f;
				case 4:
					return 333.8838f;
				case 5:
					return 120.6973f;
				case 6:
					return -137.71f;
				case 7:
					return 506.0457f;
				case 8:
					return 313.1127f;
				case 9:
					return 333.8687f;
				case 10:
					return 92.6973f;
				case 11:
					return -142.13f;
				case 12:
					return 35.2643f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 253.2534f;
				case 1:
					return 264.7676f;
				case 2:
					return 254.3382f;
				case 3:
					return -90f;
				case 4:
					return 57.1196f;
				case 5:
					return 175.23f;
				case 6:
					return 177.65f;
				case 7:
					return 161.42f;
				case 8:
					return 177.65f;
				case 9:
					return 175.23f;
				case 10:
					return 161.42f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 79.8814f;
				case 1:
					return 217.882f;
				case 2:
					return 213.8399f;
				case 3:
					return 213.8399f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 45.8905f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 207.5255f;
				case 1:
					return 273.8115f;
				case 2:
					return 45.8842f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 195.1624f;
				case 1:
					return -54f;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return 382.6534f;
				case 1:
					return 265.9142f;
				case 2:
					return 58.6423f;
				case 3:
					return 327.7377f;
				case 4:
					return 311.7377f;
				case 5:
					return 177.461f;
				case 6:
					return 182.9797f;
				case 7:
					return 277.9142f;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 50.6086f;
				case 1:
					return 61.6749f;
				case 2:
					return 101.9744f;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return 54f;
				case 1:
					return 42f;
				case 2:
					return 96f;
				case 3:
					return 14f;
				case 4:
					return 108f;
				case 5:
					return -14f;
				case 6:
					return -30f;
				case 7:
					return 100f;
				case 8:
					return 132f;
			}
			break;
	}
	return 0f;
}

bool func_1019(int iParam0)
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
		return func_1024(iParam0, &uVar0, 1, 0, 0);
	}
	return __LIB_1__::func_707(iParam0, 1, 0);
}

bool func_1024(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
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
			if (!func_1047(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
			{
				return false;
			}
			else if (__LIB_1__::func_429(iParam0, &Var4, 1728382685 /* GXTEntry: "Right" */))
			{
				return false;
			}
			if (__LIB_0__::func_950(iParam0, 1))
			{
				if (!func_1047(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
				{
					return false;
				}
				else if (__LIB_1__::func_429(iParam0, &Var4, -649335959 /* GXTEntry: "Left" */))
				{
					return false;
				}
			}
		}
		else if (!func_1632(iParam0, &uVar26, 0))
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

void func_1044(int iParam0)
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
						func_637(iVar0, 1, 752097756);
					}
					func_616(Global_35, iVar0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(1013902307, 1, 0))
				{
					func_637(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(1013902307, 1, 0))
				{
					func_637(1013902307, 1, 752097756);
				}
				if (!__LIB_1__::func_707(142640135, 1, 0))
				{
					func_637(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(786809402, 1, 0))
				{
					func_637(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(786809402, 1, 0))
				{
					func_637(786809402, 1, 752097756);
				}
				if (!__LIB_1__::func_707(-518019409, 1, 0))
				{
					func_637(-518019409, 1, 752097756);
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
			func_1671();
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

int func_1046(int iParam0, int iParam1)
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
			return 1034665895;
			return -101524555;
			return 1419152594;
			return -451359317;
			return -1915385310;
			return 1315162488;
			return -361152079;
			return -2041626192;
			return -2077812539;
			return -1371514637;
			return 1730017037;
			return 892816668;
			return -1994943603;
			return 603133554;
			return -30160144;
			return -1248299493;
			return 727393558;
			return 755611221;
			return -170255458;
			return 1011151573;
			return 1122339631;
			return 454815308;
			return 990701735;
			return -246340825;
			return -1410671073;
			return 1547608292;
			return -714132970;
			return 732290690;
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
bool func_1047(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return __LIB_0__::func_800(iParam0, *uParam1, iParam2, bParam3) > 0;
}

bool func_1057(int iParam0, int iParam1, var uParam2)
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
	iVar4 = func_662(iParam1);
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

bool func_1090(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	__LIB_0__::func_191();
	if (iParam2 == 39)
	{
		Var0 = { func_675(iParam0, 1, 0) };
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

bool func_1105(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!__LIB_0__::func_144(iParam0, 0))
	{
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam2))
	{
		return false;
	}
	if (func_1024(iParam0, uParam2, iParam3, bParam5, 0))
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

void func_1113(int iParam0, int iParam1)
{
	if (__LIB_0__::func_192(iParam1, 130796156))
	{
		func_1722(iParam1, 0);
	}
	else if (__LIB_0__::func_192(iParam1, 930141731))
	{
		func_1722(iParam1, 1);
		func_1723(iParam0);
	}
}

void func_1126(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (bParam0)
	{
		func_307(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_307(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_307(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_1127();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_1728(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_310(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_659(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_1733(Var0);
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
				func_1742(iVar6, iVar10);
			}
			iVar6++;
		}
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), false);
	}
}

int func_1127()
{
	if (!func_1743(-1898635967, __LIB_1__::func_124(), 1))
	{
		return 0;
	}
	if (__LIB_0__::func_26())
	{
		if (!func_1743(146323340, __LIB_1__::func_124(), 0))
		{
			return 0;
		}
	}
	return 1;
}

void func_1129(bool bParam0)
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
		func_307(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_307(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_307(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_307(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_307(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_307(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_307(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_307(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_307(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_307(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_307(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_659(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_659(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_659(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_659(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_659(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_659(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_659(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_659(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_659(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_659(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_659(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
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
				func_1742(iVar0, iVar4);
			}
			iVar0++;
		}
		func_1127();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), false);
	}
}

void func_1134(int iParam0, struct<4> Param1, int iParam5)
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
	func_1105(iParam0, &Var19, &Var0, 1, 752097756, 0);
	__LIB_1__::func_556(Var19, 1);
}

bool func_1136(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
	Var0 = { func_675(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return __LIB_0__::func_975(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { __LIB_0__::func_429(iParam0, Var0, Var0.f_4, bParam4) };
	return __LIB_0__::func_939(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

int func_1138(int iParam0, var uParam1)
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
	func_1751(iParam0, 1);
	return 1;
}

int func_1174(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
							iVar49 = (iVar49 + func_1174(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1174(iVar63, -915411861, 1, 0, 0));
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

void func_1199(char[4] cParam0, int iParam1)
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
		cParam0->f_1[iVar0 /*22*/][iVar1] = 56689;
		MISC::CLEAR_BIT(&(cParam0->f_1[iVar0 /*22*/].f_17), iVar1);
		iVar1++;
	}
}

bool func_1201(char[4] cParam0, int iParam1, struct<4> Param2, bool bParam6)
{
	if (!__LIB_0__::func_272(*iParam1, 0))
	{
		*iParam1 = __LIB_6__::func_880(cParam0);
		return false;
	}
	STREAMING::REQUEST_MODEL(ENTITY::GET_ENTITY_MODEL(*iParam1), false);
	if (!STREAMING::HAS_MODEL_LOADED(ENTITY::GET_ENTITY_MODEL(*iParam1)) || !PED::_0xA0BC8FAED8CFEB3C(*iParam1))
	{
		return false;
	}
	if (bParam6)
	{
		__LIB_8__::func_810(7);
	}
	else
	{
		__LIB_8__::func_820(7);
	}
	if (!__LIB_0__::func_266(*iParam1, Param2, 5f, 1, 1) || !__LIB_0__::func_491(*iParam1, -982327190))
	{
		func_1211(*iParam1, Param2, 2, 1073741824 /* Float: 2f */);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
		TASK::TASK_STAND_STILL(*iParam1, -1);
	}
	ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(*iParam1);
	return true;
}

bool func_1202(int iParam0, struct<4> Param1)
{
	if (!__LIB_0__::func_272(*iParam0, 0))
	{
		*iParam0 = func_1784(0, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		return false;
	}
	STREAMING::REQUEST_MODEL(ENTITY::GET_ENTITY_MODEL(*iParam0), false);
	if (!STREAMING::HAS_MODEL_LOADED(ENTITY::GET_ENTITY_MODEL(*iParam0)) || !PED::_0xA0BC8FAED8CFEB3C(*iParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_266(*iParam0, Param1, 5f, 1, 1) || !__LIB_0__::func_491(*iParam0, -982327190))
	{
		func_1211(*iParam0, Param1, 2, 1073741824 /* Float: 2f */);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, true);
		TASK::TASK_STAND_STILL(*iParam0, -1);
	}
	ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(*iParam0);
	return true;
}

void func_1203(char[4] cParam0)
{
	__LIB_9__::func_154(cParam0, Global_35, "ARTHUR", 0, 0, 0, 0);
	__LIB_9__::func_154(cParam0, iLocal_108, "dutch", 0, 0, 0, 0);
	__LIB_9__::func_154(cParam0, iLocal_109, "HoseaMatthews", 0, 0, 0, 0);
	__LIB_9__::func_62(cParam0, iLocal_117, "p_crate15x", 0, 0, 0, 0);
}

void func_1204()
{
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_302, "HoseaMatthews", iLocal_109, 0);
}

bool func_1208(int iParam0, int iParam1, char* sParam2, float fParam3, int iParam4)
{
	vector3 vVar0;
	int iVar3;
	if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sParam2))
	{
		iVar3 = 0;
		iVar3 = 0;
		while (iVar3 <= (*iParam0 - 1))
		{
			TASK::WAYPOINT_RECORDING_GET_COORD(sParam2, (iVar3 + iParam4), &vVar0);
			__LIB_11__::func_343(iParam0[iVar3], vVar0, 0f, 0f, 0f, fParam3, fParam3, fParam3);
			if (!PED::_0x91A5F9CBEBB9D936((*iParam1)[iVar3]))
			{
				(*iParam1)[iVar3] = __LIB_1__::func_391((*iParam0)[iVar3], 0, 0, 2016);
			}
			iVar3++;
		}
		return true;
	}
	return false;
}

void func_1211(int iParam0, struct<4> Param1, int iParam5, float fParam6)
{
	func_876(iParam0, Param1, Param1.f_3, iParam5, fParam6);
}

void func_1212(char[4] cParam0)
{
	switch (__LIB_8__::func_618(cParam0))
	{
		case 1:
			__LIB_8__::func_685(cParam0, __LIB_6__::func_864(cParam0), 8388608);
			func_1258(cParam0, 1, 8f);
			__LIB_9__::func_195(cParam0, 2);
			break;
		case 2:
			if (func_1400(cParam0, "MOB4_WLK", 0, 1073741824 /* Float: 2f */, 0, 1))
			{
				__LIB_9__::func_195(cParam0, 3);
			}
			break;
		case 3:
			if (func_1795(22))
			{
				if (__LIB_11__::func_18(Global_35, sLocal_34, 7))
				{
					func_1230();
				}
			}
			else
			{
				__LIB_9__::func_195(cParam0, 4);
			}
			break;
		case 4:
			if (__LIB_11__::func_18(Global_35, sLocal_34, 16))
			{
				TASK::_0xDE0C8B145EA466FF(iLocal_108, 5f, 2.5f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1.2f);
				__LIB_9__::func_195(cParam0, 5);
			}
			break;
		case 5:
			if (func_1400(cParam0, "MOB4_WALK", 1f, 1073741824 /* Float: 2f */, 0, 1))
			{
				__LIB_9__::func_195(cParam0, 6);
			}
			break;
		case 6:
			if (__LIB_11__::func_18(Global_35, sLocal_34, 30))
			{
				TASK::_0xDE0C8B145EA466FF(iLocal_108, 6f, 3.5f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1.3f);
				__LIB_9__::func_195(cParam0, 51);
			}
			break;
	}
}

void func_1213(char[4] cParam0)
{
	if (__LIB_0__::func_272(iLocal_109, 0))
	{
		switch (iLocal_330)
		{
			case 0:
				if (__LIB_11__::func_354(iLocal_302, "pl_Leadout"))
				{
					iLocal_330 = 1;
				}
				break;
			case 1:
				if (!ANIMSCENE::GET_ANIM_SCENE_BOOL(iLocal_302, "Loop_Idle"))
				{
					if (__LIB_11__::func_18(Global_35, sLocal_34, 30))
					{
						if (__LIB_11__::func_23(Global_35, sLocal_34) || ENTITY::IS_ENTITY_ON_SCREEN(iLocal_109))
						{
							ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_302, "Loop_Idle", true, false);
						}
					}
				}
				else if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_302, "s_exit", 1))
				{
					iLocal_330 = 2;
				}
				break;
			case 2:
				if (__LIB_11__::func_337(iLocal_302))
				{
					if (!__LIB_0__::func_491(iLocal_109, 713668775))
					{
						__LIB_3__::func_638(iLocal_109, func_212(0, 2), 1f, 20000, 1048576000 /* Float: 0.25f */, 0);
					}
					else
					{
						iLocal_330 = 3;
					}
				}
				break;
			case 3:
				if (!__LIB_0__::func_491(iLocal_109, 713668775))
				{
					iLocal_330 = 4;
				}
				break;
			case 4:
				func_1231(cParam0);
				break;
		}
	}
}

bool func_1215()
{
	struct<27> Var0;
	if (!__LIB_0__::func_71(iLocal_108))
	{
		if (!__LIB_0__::func_491(iLocal_108, 985146578))
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
			__LIB_9__::func_175(iLocal_108, Global_35, &Var0, 0f, 0f, 0f, sLocal_34, 19464, 1, 4f, 1.5f, 1073069561, 1.1f, 1092616192 /* Float: 10f */, -1, 1, 0, 0, 0, 1);
			func_1798(Global_35, iLocal_108, &Var0, -1082130432 /* Float: -1f */, 0, 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1, 8, 0, 0, 1069547520 /* Float: 1.5f */, 1073741824 /* Float: 2f */, 1050253722 /* Float: 0.3f */, 1067030938 /* Float: 1.2f */, 1, 0, -1, 1, -1082130432 /* Float: -1f */, 0.5f, 1);
			__LIB_1__::func_731(&uLocal_274);
		}
		else
		{
			return true;
		}
	}
	return false;
}

void func_1216(char[4] cParam0)
{
	if (!AUDIO::_0xA2CAC9DEF0195E6F(1))
	{
		if (TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(iLocal_108))
		{
			__LIB_4__::func_89(&uLocal_89, 0);
			if (__LIB_9__::func_178(&uLocal_89) > 10.5f)
			{
				if (func_1400(cParam0, "MOB4_DAWDLE", 0, 1073741824 /* Float: 2f */, 0, 0))
				{
					__LIB_1__::func_561(&uLocal_89);
				}
			}
		}
	}
}

void func_1217()
{
	if (__LIB_0__::func_491(iLocal_108, 985146578))
	{
		__LIB_2__::func_966(iLocal_108, Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
		__LIB_2__::func_966(Global_35, iLocal_108, 1, 1, 1, 0, 1, 1, 0, 1, 1);
		__LIB_8__::func_602(&uLocal_274, iLocal_108);
	}
}

void func_1221(char[4] cParam0, int iParam1, bool bParam2)
{
	__LIB_9__::func_142(cParam0, func_1806(iParam1), -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
	__LIB_1__::func_561(&uLocal_101);
	iLocal_290 = iParam1;
	fLocal_301 = 0f;
	if (bParam2)
	{
		__LIB_11__::func_338();
	}
}

void func_1224()
{
	if (__LIB_0__::func_491(iLocal_108, 985146578))
	{
		__LIB_1__::func_726(iLocal_108, 1);
		__LIB_1__::func_727(Global_35, 1);
		__LIB_5__::func_438(&uLocal_274);
	}
}

void func_1225()
{
	TASK::OPEN_SEQUENCE_TASK(&iLocal_131);
	TASK::TASK_MOUNT_ANIMAL(0, iLocal_113, 20000, -1, 1.5f, 1, 0, 0);
	TASK::TASK_PAUSE(0, 2500);
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
	TASK::CLOSE_SEQUENCE_TASK(iLocal_131);
	TASK::TASK_PERFORM_SEQUENCE(iLocal_108, iLocal_131);
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_131);
}

bool func_1229(char[4] cParam0, int iParam1, char* sParam2, bool bParam3)
{
	struct<27> Var0;
	if (!AUDIO::_0x54B187F111D9C6F8(iLocal_108, 0))
	{
		if (__LIB_8__::func_711(cParam0, sParam2, 0))
		{
			TASK::TASK_LOOK_AT_ENTITY(iLocal_108, Global_35, -1, 0, 51, 0);
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
			Var0.f_1 = sLocal_41;
			Var0.f_2 = sLocal_42;
			Var0.f_21 = 1;
			Var0.f_23 = 65536;
			Var0.f_17 = 0.25f;
			Var0.f_18 = 0.25f;
			Var0.f_16 = joaat("UPPERBODYFEATHERED_NORIGHTARM_FILTER");
			TASK::OPEN_SEQUENCE_TASK(&iLocal_130);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 0, -1f, -1f, -1f);
			if (!__LIB_0__::func_48(iParam1, Global_35, (30f * 0.5f), 1))
			{
				TASK::TASK_SCRIPTED_ANIMATION(0, &Var0);
			}
			if (bParam3)
			{
				TASK::TASK_STAND_STILL(0, -1);
			}
			TASK::CLOSE_SEQUENCE_TASK(iLocal_130);
			TASK::TASK_PERFORM_SEQUENCE(iParam1, iLocal_130);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_130);
			return true;
		}
	}
	return false;
}

void func_1230()
{
	if (__LIB_0__::func_899(&uLocal_101))
	{
		__LIB_1__::func_561(&uLocal_101);
	}
}

void func_1231(char[4] cParam0)
{
	if (__LIB_0__::func_699(5))
	{
		__LIB_4__::func_705(5, 1);
		__LIB_9__::func_385(cParam0, 5, iLocal_109, 0, 0, 1, 0);
	}
}

struct<4> func_1237(char* sParam0, int iParam1, bool bParam2)
{
	struct<4> Var0;
	vector3 vVar4;
	int iVar7;
	if (bParam2)
	{
		iVar7 = iParam1 + 1;
	}
	else
	{
		iVar7 = (iParam1 - 1);
	}
	TASK::WAYPOINT_RECORDING_GET_COORD(sParam0, iParam1, &Var0);
	TASK::WAYPOINT_RECORDING_GET_COORD(sParam0, iVar7, &vVar4);
	Var0.f_3 = __LIB_0__::func_152(Var0, vVar4, 1);
	return Var0;
}

void func_1240()
{
	if (__LIB_11__::func_20(64))
	{
		CLOCK::SET_CLOCK_TIME(21, 0, 0);
	}
	else if (__LIB_11__::func_20(2))
	{
		CLOCK::SET_CLOCK_TIME(20, 0, 0);
	}
	else if (__LIB_11__::func_20(1))
	{
		CLOCK::SET_CLOCK_TIME(18, 30, 0);
	}
	else
	{
		CLOCK::SET_CLOCK_TIME(17, 45, 0);
	}
}

void func_1241()
{
	Local_438[0 /*8*/] = 0;
	Local_438[0 /*8*/].f_1 = 24;
	Local_438[0 /*8*/].f_2 = 0;
	Local_438[0 /*8*/].f_3 = { vLocal_59 };
	Local_438[0 /*8*/].f_6 = 0.15f;
	Local_438[0 /*8*/].f_7 = 0;
	Local_438[1 /*8*/] = 95;
	Local_438[1 /*8*/].f_1 = 108;
	Local_438[1 /*8*/].f_2 = 100;
	Local_438[1 /*8*/].f_3 = { 1761.165f, -1640.311f, 47.29402f };
	Local_438[1 /*8*/].f_6 = 0.5f;
	Local_438[1 /*8*/].f_7 = 1;
	Local_438[2 /*8*/] = 468;
	Local_438[2 /*8*/].f_1 = 480;
	Local_438[2 /*8*/].f_2 = 475;
	Local_438[2 /*8*/].f_3 = { 2188.386f, -980.3737f, 43.90541f };
	Local_438[2 /*8*/].f_6 = 0.2f;
	Local_438[2 /*8*/].f_7 = 1;
	Local_438[3 /*8*/] = 625;
	Local_438[3 /*8*/].f_1 = 656;
	Local_438[3 /*8*/].f_2 = 645;
	Local_438[3 /*8*/].f_3 = { func_376(2, 8) };
	Local_438[3 /*8*/].f_6 = 0.15f;
	Local_438[3 /*8*/].f_7 = 1;
}

void func_1242()
{
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_303, "CreoleCaptain", iLocal_110, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_303, "Dutch", iLocal_108, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_303, "p_trap05x", iLocal_118, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_303, "s_interact_lantern01x", iLocal_119, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_303, "s_interact_lantern01x^1", iLocal_120, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_303, "s_interact_lantern01x^2", iLocal_121, 0);
}

void func_1243(char[4] cParam0)
{
	__LIB_5__::func_118(&(cParam0->f_10792), iLocal_110, "CreoleCaptain", 0);
	__LIB_5__::func_118(&(cParam0->f_10792), iLocal_108, "Dutch", 0);
	__LIB_5__::func_118(&(cParam0->f_10792), iLocal_118, "p_trap05x", 0);
	__LIB_5__::func_118(&(cParam0->f_10792), iLocal_119, "s_interact_lantern01x", 0);
	__LIB_5__::func_118(&(cParam0->f_10792), iLocal_120, "s_interact_lantern01x^1", 0);
	__LIB_5__::func_118(&(cParam0->f_10792), iLocal_121, "s_interact_lantern01x^2", 0);
}

int func_1246()
{
	if (!func_1816(&(Local_188[3 /*4*/]), 649, "MOB4_CIVWOMAN1", "MOB4_WHO1", 12.5f))
	{
		return 0;
	}
	if (!func_1816(&(Local_188[0 /*4*/]), 644, "MOB4_CIVMAN1", "MOB4_WHO1", 12.5f))
	{
		return 0;
	}
	if (!func_1816(&(Local_188[4 /*4*/]), 650, "MOB4_CIVMAN2", "MOB4_WHO2", 17.5f))
	{
		return 0;
	}
	if (!func_1816(&(Local_188[5 /*4*/]), 651, "MOB4_CIVMAN3", "MOB4_WHO2", 17.5f))
	{
		return 0;
	}
	if (!func_1816(&(Local_188[1 /*4*/]), 647, "MOB4_CIVWOMAN2", "MOB4_WHO3", 12.5f))
	{
		return 0;
	}
	if (!func_1816(&(Local_188[2 /*4*/]), 648, "MOB4_CIVWOMAN3", "MOB4_WHO3", 12.5f))
	{
		return 0;
	}
	return 1;
}

void func_1247()
{
	if (!__LIB_11__::func_20(1))
	{
		if (__LIB_11__::func_18(Global_35, cLocal_35, 190))
		{
			__LIB_11__::func_342(1);
		}
	}
	else if (!__LIB_11__::func_20(2))
	{
		if (__LIB_11__::func_18(Global_35, cLocal_35, 485))
		{
			__LIB_11__::func_342(2);
		}
	}
}

void func_1248()
{
	int iVar0;
	int iVar1;
	iVar0 = CLOCK::GET_CLOCK_HOURS();
	iVar1 = CLOCK::GET_CLOCK_MINUTES();
	if (iVar0 < 20)
	{
		CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(750);
	}
	else if (iVar0 == 21 && iVar1 < 30)
	{
		CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(1250);
	}
	else
	{
		CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
	}
}

void func_1249(char[4] cParam0)
{
	int iVar0;
	switch (__LIB_8__::func_618(cParam0))
	{
		case 1:
			__LIB_4__::func_89(&uLocal_80, 0);
			if (__LIB_9__::func_178(&uLocal_80) > 1f)
			{
				func_1258(cParam0, 3, 10f);
				__LIB_1__::func_561(&uLocal_80);
				__LIB_9__::func_195(cParam0, 2);
			}
			break;
		case 2:
			if (func_1312("MOB4_WALK"))
			{
				__LIB_9__::func_195(cParam0, 3);
			}
			else if (!__LIB_11__::func_20(2) && !__LIB_11__::func_20(1))
			{
				if (func_1400(cParam0, "MOB4_LEAD", 1f, 1073741824 /* Float: 2f */, 0, 1))
				{
					__LIB_9__::func_195(cParam0, 3);
				}
			}
			else
			{
				__LIB_9__::func_195(cParam0, 3);
			}
			break;
		case 3:
			if (func_1795(22))
			{
				if (func_1817())
				{
					func_1230();
				}
			}
			else
			{
				__LIB_9__::func_195(cParam0, 4);
			}
			break;
		case 4:
			if (iLocal_471 == 1)
			{
				if (__LIB_11__::func_18(Global_35, cLocal_35, 23))
				{
					if (func_1400(cParam0, "MOB4_RDBANT", 1f, 1073741824 /* Float: 2f */, 0, 1))
					{
						__LIB_9__::func_195(cParam0, 5);
					}
				}
			}
			break;
		case 5:
			if (AUDIO::IS_SCRIPTED_CONVERSATION_LOADED("MOB4_RDBANT"))
			{
				iVar0 = 0;
				while (iVar0 <= (func_1818() - 1))
				{
					AUDIO::SKIP_TO_NEXT_SCRIPTED_CONVERSATION_LINE("MOB4_RDBANT");
					iVar0++;
				}
				__LIB_9__::func_195(cParam0, -1);
			}
			break;
		case 6:
			if (func_1312("MOB4_RDBANT"))
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION("MOB4_RDBANT", true, false);
				__LIB_9__::func_195(cParam0, 7);
			}
			else
			{
				__LIB_9__::func_195(cParam0, 8);
			}
			break;
		case 7:
			if (func_1400(cParam0, "MOB4_ARRIVELCNV", 1f, 1073741824 /* Float: 2f */, 0, 1))
			{
				__LIB_9__::func_195(cParam0, 51);
			}
			break;
		case 8:
			if (func_1400(cParam0, "MOB4_ARRIVEL", 1f, 1073741824 /* Float: 2f */, 0, 1))
			{
				__LIB_9__::func_195(cParam0, 51);
			}
			break;
	}
}

void func_1250(char[4] cParam0)
{
	func_1819();
	if (PED::IS_PED_IN_COMBAT(iLocal_108, 0) || __LIB_0__::func_399(iLocal_108, 1, 0, 0) != joaat("WEAPON_UNARMED"))
	{
		if (iLocal_471 < 5)
		{
			func_1820();
			__LIB_11__::func_746(iLocal_108);
		}
		if (func_1312("MOB4_RDBANT"))
		{
			AUDIO::PAUSE_SCRIPTED_CONVERSATION("MOB4_RDBANT", false, true, true, true);
		}
	}
	else
	{
		switch (iLocal_471)
		{
			case 0:
				iLocal_471 = 1;
				break;
			case 1:
				__LIB_11__::func_746(iLocal_108);
				if (func_1820())
				{
					if (!AUDIO::_0x54B187F111D9C6F8(iLocal_108, 0))
					{
						if (func_1822("MOB4_RDBANT"))
						{
							AUDIO::RESTART_SCRIPTED_CONVERSATION("MOB4_RDBANT");
						}
					}
					if (__LIB_11__::func_18(iLocal_108, cLocal_35, 625))
					{
						TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_108, cLocal_35, 635, 67108864, -1, 0, 0, -1);
						__LIB_9__::func_195(cParam0, 6);
						iLocal_471 = 6;
					}
				}
				else
				{
					if (__LIB_0__::func_899(&uLocal_77))
					{
						__LIB_9__::func_774(&uLocal_77);
					}
					TASK::TASK_LOOK_AT_ENTITY(iLocal_108, Global_35, -1, 0, 51, 0);
					TASK::TASK_REACT(iLocal_108, Global_35, 0f, 0f, 0f, "Default_None", 10.5f, 0, 4);
					iLocal_471 = 3;
				}
				break;
			case 3:
				__LIB_4__::func_89(&uLocal_89, 0);
				func_1230();
				if (__LIB_9__::func_178(&uLocal_89) > 1f)
				{
					if (func_1312("MOB4_RDBANT"))
					{
						AUDIO::PAUSE_SCRIPTED_CONVERSATION("MOB4_RDBANT", true, true, true, true);
					}
				}
				if (__LIB_9__::func_178(&uLocal_89) > 10.5f)
				{
					if (func_1229(cParam0, iLocal_108, "MOB4_DAWDLE", 0))
					{
						__LIB_1__::func_561(&uLocal_89);
						iLocal_471 = 4;
					}
				}
				else if (__LIB_0__::func_665(Global_35, iLocal_108, 1, 1) < (30f * 0.9f) && __LIB_0__::func_394(Global_35, iLocal_112, 0))
				{
					__LIB_1__::func_561(&uLocal_89);
					if (__LIB_0__::func_901(&uLocal_77))
					{
						__LIB_9__::func_773(&uLocal_77);
					}
					TASK::CLEAR_PED_SECONDARY_TASK(iLocal_108);
					__LIB_3__::func_10(iLocal_108);
					iLocal_471 = 1;
				}
				break;
			case 4:
				if (!__LIB_0__::func_491(iLocal_108, 242628503))
				{
					iLocal_471 = 3;
				}
				break;
			case 5:
				if (__LIB_0__::func_71(iLocal_108))
				{
					iLocal_471 = 0;
				}
				else if (!__LIB_0__::func_491(iLocal_108, 1868526510))
				{
					TASK::TASK_MOUNT_ANIMAL(iLocal_108, iLocal_113, 20000, -1, 2f, 1, 0, 0);
				}
				break;
			case 6:
				func_1825(iLocal_108, Global_35, cLocal_35, 1f, 1084227584 /* Float: 5f */, 1106247680 /* Float: 30f */, 1073746018 /* Float: 2.001f */, 2f);
				__LIB_1__::func_448(iLocal_108, __LIB_9__::func_921(cLocal_35), 0, 30f, 15f, 10f, 5f, 1, 1, 1, 0);
				if (__LIB_11__::func_18(iLocal_108, cLocal_35, (func_1826(cLocal_35) - 2)))
				{
					if (__LIB_0__::func_396(iLocal_108))
					{
						TASK::TASK_STAND_STILL(iLocal_113, -1);
						TASK::TASK_DISMOUNT_ANIMAL(iLocal_108, 262144, 0, 0, 0, 0);
					}
					iLocal_471 = 7;
				}
				break;
			case 7:
				if (!PED::IS_PED_ON_MOUNT(iLocal_108))
				{
					__LIB_4__::func_89(&uLocal_89, 0);
					if (__LIB_9__::func_178(&uLocal_89) > 7.5f || !__LIB_0__::func_396(Global_35))
					{
						__LIB_1__::func_561(&uLocal_89);
						__LIB_3__::func_10(iLocal_108);
						iLocal_471 = 8;
					}
					else if (__LIB_0__::func_396(Global_35))
					{
						if (!__LIB_0__::func_491(iLocal_108, 242628503))
						{
							TASK::TASK_LOOK_AT_ENTITY(iLocal_108, Global_35, -1, 0, 51, 0);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_131);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
							TASK::TASK_REACT(0, Global_35, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), "Default_Curious", 7.5f, 0, 4);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_131);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_108, iLocal_131);
						}
					}
				}
				break;
			case 8:
				if (!__LIB_0__::func_491(iLocal_108, 713668775))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_108, vLocal_331, 1f, 20000, 0.25f, 1, 40000f);
				}
				else if (__LIB_0__::func_266(iLocal_108, ENTITY::GET_ENTITY_COORDS(iLocal_110, true, false), 7.5f, 1, 0))
				{
					iLocal_472 = 3;
					iLocal_471 = 9;
				}
				break;
			case 9:
				break;
		}
	}
}

void func_1251()
{
	if (__LIB_0__::func_272(Global_35, 0))
	{
		if (AUDIO::_0xA2CAC9DEF0195E6F(1))
		{
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 2.001f);
			}
		}
	}
}

void func_1252()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		func_1827(&(Local_188[iVar0 /*4*/]));
		iVar0++;
	}
}

bool func_1257(int iParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar0 = MAP::GET_BLIP_FROM_ENTITY(iParam0);
		if (MAP::DOES_BLIP_EXIST(iVar0))
		{
			MAP::_BLIP_SET_STYLE(iVar0, iParam1);
			if (iParam5 != 0)
			{
				MAP::_BLIP_SET_MODIFIER(iVar0, iParam5);
			}
			if (bParam3)
			{
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, sParam2);
			}
			return true;
		}
		else if (bParam4)
		{
			MAP::_BLIP_ADD_FOR_ENTITY(iParam1, iParam0);
		}
	}
	return false;
}

void func_1258(char[4] cParam0, int iParam1, float fParam2)
{
	__LIB_9__::func_142(cParam0, func_1806(iParam1), -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
	if (fParam2 > 0f)
	{
		__LIB_2__::func_259(&uLocal_101);
	}
	else
	{
		__LIB_1__::func_561(&uLocal_101);
	}
	iLocal_290 = iParam1;
	fLocal_301 = fParam2;
}

bool func_1259()
{
	switch (iLocal_472)
	{
		case 0:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_303))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_303, true, false))
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_303, false))
					{
						ANIMSCENE::START_ANIM_SCENE(iLocal_303);
						iLocal_472 = 1;
					}
				}
			}
			break;
		case 1:
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_303, false))
			{
				if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_303, "s_propsplacement", 1))
				{
					if (((ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_118, -1) && ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_119, -1)) && ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_120, -1)) && ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_121, -1))
					{
						ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_303, "Loop_PropsPlacement", true, false);
					}
				}
				else
				{
					iLocal_472 = 2;
				}
			}
			break;
		case 2:
			break;
		case 3:
			if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_108))
			{
				if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
				{
					CAM::SET_GAMEPLAY_ENTITY_HINT(iLocal_110, 0f, 0f, 0f, true, -1, 750, 2000, 0);
				}
			}
			if (!ANIMSCENE::GET_ANIM_SCENE_BOOL(iLocal_303, "Loop_Idle"))
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_303, "Loop_Idle", true, false);
			}
			else if (__LIB_11__::func_354(iLocal_303, "pl_leadin"))
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_303, "Loop_Idle", false, false);
				iLocal_472 = 4;
			}
			break;
		case 4:
			return true;
	}
	return false;
}

bool func_1262(char[4] cParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_114))
	{
		iLocal_114 = VEHICLE::CREATE_VEHICLE(iLocal_20, func_376(3, 4), func_1831(3, 4), true, true, false, false);
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_115))
	{
		iLocal_115 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(ENTITY::GET_ENTITY_COORDS(iLocal_114, true, false), 3f, iLocal_21, true, false, true);
		return false;
	}
	if (__LIB_6__::func_864(cParam0) < 6)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_116))
		{
			iLocal_116 = OBJECT::CREATE_OBJECT(iLocal_33, ENTITY::GET_ENTITY_COORDS(iLocal_114, true, false), true, true, false, false, true);
			GRAPHICS::_0xA0F4D12D6042F6D5(iLocal_116, 0);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(iLocal_116, false, false);
			ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(iLocal_312, iLocal_114, 0);
			return false;
		}
		if (__LIB_6__::func_864(cParam0) < 5 && __LIB_6__::func_864(cParam0) > 2)
		{
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_312))
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_312, false))
				{
					func_1276();
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iLocal_312, vLocal_59, vLocal_59, 2);
					ANIMSCENE::START_ANIM_SCENE(iLocal_312);
				}
			}
		}
	}
	if (__LIB_6__::func_864(cParam0) <= 3)
	{
		if (!ENTITY::_IS_ENTITY_FROZEN(iLocal_114))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_114, true);
		}
	}
	ENTITY::SET_ENTITY_PROOFS(iLocal_114, 9, false);
	VEHICLE::_0x1098CDA477890165(iLocal_114, 1);
	ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_114);
	VEHICLE::SET_VEHICLE_EXCLUSIVE_DRIVER(iLocal_114, iLocal_110, 0);
	return true;
}

bool func_1263()
{
	int iVar0;
	vector3 vVar1;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Local_213 - 1))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_213[iVar0 /*11*/]))
		{
			vVar1 = { func_1832(func_786(9, iVar0), 0, 0, 1036831949 /* Float: 0.1f */) };
			if (iVar0 == 1)
			{
				vVar1.f_2 = (vVar1.z - 0.125f);
			}
			else
			{
				vVar1.f_2 = (vVar1.z - 0.25f);
			}
			Local_213[iVar0 /*11*/].f_9 = 0;
			Local_213[iVar0 /*11*/].f_10 = 2;
			Local_213[iVar0 /*11*/] = OBJECT::CREATE_OBJECT(iLocal_26, vVar1, true, true, false, false, true);
			Local_213[iVar0 /*11*/].f_4 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_LOOT"), Local_213[iVar0 /*11*/]);
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_213[iVar0 /*11*/].f_4, "MOB4_TRAP");
			ENTITY::SET_ENTITY_HEADING(Local_213[iVar0 /*11*/], func_961(9, iVar0));
			CAM::_0x7E3F546ACFE6C8D9(Local_213[iVar0 /*11*/]);
			PATHFIND::_0x6DAD6630AE4A74CB(Local_213[iVar0 /*11*/], 1);
			__LIB_3__::func_557(&(Local_213[iVar0 /*11*/].f_5), ENTITY::GET_ENTITY_COORDS(Local_213[iVar0 /*11*/], true, false), ENTITY::GET_ENTITY_ROTATION(Local_213[iVar0 /*11*/], 2), 0.25f, 0.25f, 0.25f, "MOB4_TRAP_NAV");
			if (VOLUME::_DOES_VOLUME_EXIST(Local_213[iVar0 /*11*/].f_5))
			{
				PATHFIND::_0x19C7567D2F2287D6(Local_213[iVar0 /*11*/].f_5, 7);
			}
			__LIB_4__::func_975(&(Local_213[iVar0 /*11*/].f_6), ENTITY::GET_ENTITY_COORDS(Local_213[iVar0 /*11*/], true, false), ENTITY::GET_ENTITY_ROTATION(Local_213[iVar0 /*11*/], 2), 2f, 2f, 2f, "MOB4_TRAP_AI");
			Local_213[iVar0 /*11*/].f_7 = __LIB_1__::func_391(Local_213[iVar0 /*11*/].f_6, 0, 0, 512);
			return false;
		}
		iVar0++;
	}
	Local_213[1 /*11*/].f_9 = 9;
	return true;
}

bool func_1264()
{
	vector3 vVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(Local_247))
	{
		vVar0 = { func_1832(func_376(2, 12), 1, 1, 0f) };
		Local_247 = OBJECT::CREATE_OBJECT(iLocal_27, vVar0, true, true, false, false, true);
		Local_247.f_4 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_LOOT"), Local_247);
		ENTITY::SET_ENTITY_HEADING(Local_247, (func_1831(2, 12) - 180f));
		ENTITY::FREEZE_ENTITY_POSITION(Local_247, true);
		CAM::_0x7E3F546ACFE6C8D9(Local_247);
		return false;
	}
	return true;
}

bool func_1265()
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Local_213 - 1))
	{
		switch (iVar0)
		{
			case 0:
				iVar1 = 0;
				break;
			case 1:
				iVar1 = 0;
				break;
			case 2:
				iVar1 = 1;
				break;
		}
		if (iVar1 > 0)
		{
			iVar2 = 0;
			while (iVar2 <= (iVar1 - 1))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_213[iVar0 /*11*/].f_1[iVar2]))
				{
					Local_213[iVar0 /*11*/].f_1[iVar2] = OBJECT::CREATE_OBJECT(iLocal_28, ENTITY::GET_ENTITY_COORDS(Local_213[iVar0 /*11*/], true, false), true, true, false, false, true);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_213[iVar0 /*11*/].f_1[iVar2], Local_213[iVar0 /*11*/], 0, vLocal_59, vLocal_59, false, false, false, false, 2, true, false, false);
					return false;
				}
				iVar2++;
			}
		}
		iVar0++;
	}
	return true;
}

bool func_1266()
{
	if (__LIB_0__::func_48(Global_35, iLocal_110, 4f, 1))
	{
		return true;
	}
	else if (__LIB_11__::func_337(iLocal_303))
	{
		return true;
	}
	else if (func_1339(iLocal_110, iLocal_303, "CreoleCaptain"))
	{
		return true;
	}
	else if (!func_1335(iLocal_303))
	{
		return true;
	}
	return false;
}

void func_1267(char[4] cParam0)
{
	__LIB_9__::func_154(cParam0, Global_35, "ARTHUR", 0, 0, 0, 0);
	__LIB_9__::func_154(cParam0, iLocal_110, "CreoleCaptain", 0, 0, 0, 0);
	__LIB_9__::func_154(cParam0, iLocal_108, "dutch", 0, 0, 0, 0);
	__LIB_9__::func_62(cParam0, iLocal_118, "p_trap05x", 0, 0, 0, 0);
	__LIB_9__::func_62(cParam0, iLocal_119, "s_interact_lantern02x", 0, 0, 0, 0);
	__LIB_9__::func_62(cParam0, iLocal_120, "s_interact_lantern02x^1", 0, 0, 0, 0);
	__LIB_9__::func_62(cParam0, iLocal_121, "s_interact_lantern02x^2", 0, 0, 0, 0);
}

void func_1268(char[4] cParam0)
{
	if (__LIB_6__::func_864(cParam0) >= 2)
	{
		func_1834(&uLocal_184, 2159.02f, -604.3754f, 40.59495f, 2f, 1, 36, 0);
		func_1834(&uLocal_185, 2168.54f, -593.7558f, 40.58507f, 3f, 1, 36, 0);
		func_1834(&uLocal_186, 2175.641f, -587.8029f, 40.56371f, 2f, 1, 36, 0);
		func_1834(&uLocal_187, 2166.362f, -595.3814f, 40.61051f, 1.5f, 1, 256, 0);
	}
}

void func_1270()
{
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_305, "ARTHUR", Global_35, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_305, "CreoleCaptain", iLocal_110, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_305, "Dutch", iLocal_108, 0);
}

void func_1272(int iParam0, float fParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar1 = __LIB_0__::func_399(iParam0, 1, 0, 1);
	iVar2 = __LIB_0__::func_399(iParam0, 1, 1, 1);
	if (WEAPON::_IS_WEAPON_LANTERN(iVar1))
	{
		iVar0 = WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(iParam0, 0);
	}
	else if (WEAPON::_IS_WEAPON_LANTERN(iVar2))
	{
		iVar0 = WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(iParam0, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_1835(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar0), fParam1);
	}
}

void func_1273()
{
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_306, "ARTHUR", Global_35, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_306, "CreoleCaptain", iLocal_110, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_306, "dutch", iLocal_108, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_306, "TRAP", Local_213[1 /*11*/], 0);
}

void func_1274()
{
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_308, "CreoleCaptain", iLocal_110, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_308, "TRAP", Local_247, 0);
}

void func_1275()
{
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_309, "ARTHUR", Global_35, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_309, "CreoleCaptain", iLocal_110, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_309, "TRAP", Local_247, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_309, "dutch", iLocal_108, 0);
}

void func_1276()
{
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_312, "rope", iLocal_116, 0);
}

int func_1277(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
		func_593(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
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

void func_1279(char[4] cParam0)
{
	switch (__LIB_8__::func_618(cParam0))
	{
		case 1:
			__LIB_8__::func_685(cParam0, __LIB_6__::func_864(cParam0), 8388608);
			func_1221(cParam0, 5, 0);
			if (__LIB_11__::func_20(32))
			{
				__LIB_9__::func_195(cParam0, 7);
			}
			else if (__LIB_11__::func_20(8))
			{
				__LIB_9__::func_195(cParam0, 14);
			}
			else
			{
				__LIB_9__::func_195(cParam0, -1);
			}
			break;
		case 4:
			if (__LIB_11__::func_337(iLocal_305) && !func_1837(iLocal_305))
			{
				if (func_1400(cParam0, "MOB4_FIRST_TRAP", 1f, 1073741824 /* Float: 2f */, 0, 0))
				{
					__LIB_9__::func_195(cParam0, -1);
				}
			}
			break;
		case 2:
			__LIB_9__::func_195(cParam0, -1);
			break;
		case 3:
			if (Local_213[0 /*11*/].f_9 <= 1)
			{
				if (func_1400(cParam0, "MOB4_HELPTRAP", 8f, 1073741824 /* Float: 2f */, 0, 1))
				{
					__LIB_9__::func_195(cParam0, -1);
				}
			}
			break;
		case 12:
			if (func_1400(cParam0, "MOB4_LOOTTRAP", 0, 1073741824 /* Float: 2f */, 0, 0))
			{
				__LIB_9__::func_195(cParam0, 14);
			}
			break;
		case 13:
			if (func_1400(cParam0, "MOB4_NOLOOT", 0, 1073741824 /* Float: 2f */, 0, 0))
			{
				__LIB_9__::func_195(cParam0, 14);
			}
			break;
		case 14:
			if (__LIB_11__::func_18(Global_35, sLocal_36, 39))
			{
				if (func_1400(cParam0, "MOB4_ENTER_S", 2.5f, 1073741824 /* Float: 2f */, 0, 1))
				{
					__LIB_9__::func_195(cParam0, 8);
				}
			}
			break;
		case 8:
			if (func_1400(cParam0, "MOB4_SWBANT1", 2.5f, 1073741824 /* Float: 2f */, 0, 1))
			{
				__LIB_9__::func_195(cParam0, -1);
			}
			break;
		case 6:
			if (func_1400(cParam0, "MOB4_WAIT", 0, 1073741824 /* Float: 2f */, 1, 0))
			{
				__LIB_9__::func_195(cParam0, 15);
			}
			break;
		case 15:
			if (func_1400(cParam0, "MOB4_WAIT2", 0, 1073741824 /* Float: 2f */, 0, 0))
			{
				__LIB_9__::func_195(cParam0, 16);
			}
			break;
		case 16:
			if (func_1838(cParam0))
			{
				__LIB_11__::func_342(16);
			}
			break;
		case 17:
			if (func_1400(cParam0, "MOB4_LUCKY", 0, 1073741824 /* Float: 2f */, 1, 0))
			{
				__LIB_9__::func_195(cParam0, 7);
			}
			break;
		case 7:
			if (func_1400(cParam0, "MOB4_ISLAND", 0, 1073741824 /* Float: 2f */, 0, 1))
			{
				__LIB_9__::func_195(cParam0, -1);
			}
			break;
		case 5:
			func_1400(cParam0, "MOB4_DHELPTRAP", 5f, 1073741824 /* Float: 2f */, 0, 1);
			break;
		case 10:
			if (func_1400(cParam0, "MOB4_FAIL_TRAP", 0, 1073741824 /* Float: 2f */, 0, 0))
			{
				__LIB_9__::func_195(cParam0, -1);
			}
			break;
	}
}

void func_1280(char[4] cParam0)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	switch (iLocal_732)
	{
		case 0:
			if (func_1839())
			{
				iLocal_732 = 1;
			}
			break;
		case 1:
			if (__LIB_0__::func_272(Local_711, 0) && __LIB_0__::func_272(Global_35, 0))
			{
				switch (__LIB_6__::func_864(cParam0))
				{
					case 2:
						if (__LIB_0__::func_272(iLocal_110, 0))
						{
							if (!__LIB_0__::func_48(Global_35, iLocal_110, 9.5f, 1))
							{
								if (TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_36, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), &iVar0))
								{
									if (iVar0 > 35)
									{
										if (!__LIB_0__::func_266(Global_35, __LIB_11__::func_19(sLocal_36, iVar0), 9.5f, 1, 1) && func_1840(Global_35))
										{
											__LIB_4__::func_89(&(Local_711.f_8), 0);
											PAD::SET_PAD_SHAKE(0, 1, 256);
											if (__LIB_9__::func_178(&(Local_711.f_8)) > 5f)
											{
												__LIB_1__::func_561(&(Local_711.f_8));
												iLocal_732 = 2;
											}
										}
										else
										{
											__LIB_1__::func_561(&(Local_711.f_8));
										}
									}
								}
							}
						}
						break;
					case 3:
						if (__LIB_0__::func_272(iLocal_110, 0))
						{
							if (!__LIB_0__::func_48(Global_35, iLocal_110, 9.5f, 1) && func_1840(Global_35))
							{
								__LIB_4__::func_89(&(Local_711.f_8), 0);
								PAD::SET_PAD_SHAKE(0, 1, 256);
								if (__LIB_9__::func_178(&(Local_711.f_8)) > 5f)
								{
									__LIB_1__::func_561(&(Local_711.f_8));
									iLocal_732 = 2;
								}
							}
							else
							{
								__LIB_1__::func_561(&(Local_711.f_8));
							}
						}
						break;
					case 6:
						if ((!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_146, true, 0) && !ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_147, true, 0)) && func_1840(Global_35))
						{
							__LIB_4__::func_89(&(Local_711.f_8), 0);
							PAD::SET_PAD_SHAKE(0, 1, 256);
							if (__LIB_9__::func_178(&(Local_711.f_8)) > 5f)
							{
								__LIB_1__::func_561(&(Local_711.f_8));
								iLocal_732 = 2;
							}
						}
						else
						{
							__LIB_1__::func_561(&(Local_711.f_8));
						}
						break;
				}
			}
			break;
		case 2:
			if (!__LIB_0__::func_491(Local_711, joaat("SCRIPT_TASK_PUT_PED_DIRECTLY_INTO_MELEE")) && !PED::IS_PED_IN_MELEE_COMBAT(Global_35))
			{
				switch (__LIB_6__::func_864(cParam0))
				{
					case 2:
						if (TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_36, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), &iVar4))
						{
							vVar1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), __LIB_0__::func_152(__LIB_11__::func_19(sLocal_36, iVar4), ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 1), 0f, 1f, 0f) };
						}
						break;
					case 3:
					case 6:
						vVar1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), __LIB_3__::func_978(iLocal_110, Global_35, 1), 0f, 1f, 0f) };
						break;
				}
				vVar1 = { func_1832(vVar1, 1, 0, 1036831949 /* Float: 0.1f */) };
				func_876(Local_711, vVar1, __LIB_0__::func_152(vVar1, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 1), 0, 1073741824 /* Float: 2f */);
				func_1519(Local_711, 0, 0);
				TASK::TASK_PUT_PED_DIRECTLY_INTO_GRAPPLE(Local_711, Global_35, joaat("AR_ALLIGATOR_LEG_GRAB_CHALLENGE_FAIL"), 0, 0, 1, 0);
				if (__LIB_6__::func_864(cParam0) == 6)
				{
					__LIB_4__::func_89(&uLocal_485, 0);
					func_1383(Global_35, iLocal_111, 1);
					func_1383(iLocal_114, iLocal_111, 1);
				}
			}
			else if (__LIB_6__::func_864(cParam0) == 6)
			{
				CAM::_0xD904F75DBD7AB865(iLocal_111);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_111))
				{
					if (!TASK::_0x0CCFE72B43C9CF96(iLocal_111))
					{
						__LIB_1__::func_864(iLocal_111, 0, 0);
					}
				}
				if (__LIB_9__::func_178(&uLocal_485) > 0.1f)
				{
					__LIB_1__::func_561(&uLocal_485);
					__LIB_11__::func_335(iLocal_318);
					__LIB_11__::func_335(iLocal_320);
					__LIB_11__::func_335(iLocal_319);
					TASK::_0x9EBD34958AB6F824(iLocal_111);
				}
			}
			break;
	}
}

void func_1281()
{
	if (func_1843(0, &(Local_540[0 /*17*/]), func_212(10, 0), 1))
	{
		return;
	}
	if (func_1843(1, &(Local_540[1 /*17*/]), func_212(10, 1), 1))
	{
		return;
	}
	if (func_1843(2, &(Local_540[2 /*17*/]), func_212(10, 2), 1))
	{
		return;
	}
	if (func_1843(3, &(Local_540[3 /*17*/]), func_212(10, 3), 1))
	{
		return;
	}
	if (func_1843(4, &(Local_540[4 /*17*/]), func_212(10, 4), 1))
	{
		return;
	}
	if (func_1843(5, &(Local_540[5 /*17*/]), func_212(10, 5), 1))
	{
		return;
	}
	if (func_1843(6, &(Local_540[6 /*17*/]), func_212(10, 6), 1))
	{
		return;
	}
	if (func_1843(7, &(Local_540[7 /*17*/]), func_212(10, 7), 1))
	{
		return;
	}
	if (func_1843(8, &(Local_540[8 /*17*/]), func_212(10, 8), 4))
	{
		return;
	}
}

void func_1282(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (__LIB_0__::func_272((*uParam0)[iVar0 /*17*/], 0) && (uParam0[iVar0 /*17*/])->f_16)
		{
			func_1844(uParam0[iVar0 /*17*/]);
		}
		iVar0++;
	}
}

void func_1283(int iParam0, float fParam1)
{
	if (__LIB_0__::func_272(iParam0, 0))
	{
		PED::SET_PED_CAPSULE(iParam0, fParam1);
	}
}

void func_1284()
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Local_213 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_213[iVar0 /*11*/]))
		{
			func_1845(&(Local_213[iVar0 /*11*/]));
		}
		iVar0++;
	}
}

void func_1285()
{
	if (func_1846(iLocal_110))
	{
		__LIB_2__::func_966(iLocal_110, Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
		__LIB_2__::func_966(iLocal_108, iLocal_110, 1, 1, 1, 0, 1, 1, 0, 1, 1);
		__LIB_2__::func_966(Global_35, iLocal_110, 1, 1, 1, 0, 1, 1, 0, 1, 1);
		__LIB_8__::func_602(&uLocal_274, iLocal_110);
	}
	else
	{
		__LIB_1__::func_448(Global_35, ENTITY::GET_ENTITY_COORDS(iLocal_110, true, false), 0, 15f, 10f, 5f, 0.1f, 1, 1, 1, 0);
	}
}

void func_1286()
{
	__LIB_1__::func_738(1, 1, 0, 1, 1, 1, 1);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_USE_ITEM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INSPECT_OPEN_SATCHEL"), false);
}

void func_1287()
{
	int iVar0[3];
	float fVar4;
	int iVar5;
	if (__LIB_0__::func_899(&uLocal_743) && iLocal_747 < 3)
	{
		if (__LIB_9__::func_178(&uLocal_743) > 3f)
		{
			__LIB_1__::func_561(&uLocal_743);
		}
		else if ((__LIB_0__::func_272(Global_35, 0) && __LIB_0__::func_272(iLocal_108, 0)) && __LIB_0__::func_272(iLocal_110, 0))
		{
			iVar0[0] = WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Global_35, 0);
			iVar0[1] = WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(iLocal_108, 1);
			iVar0[2] = WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(iLocal_110, 1);
			iVar5 = 0;
			iVar5 = 0;
			while (iVar5 <= (iVar0 - 1))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar0[iVar5]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar0[iVar5]))
					{
						fVar4 = __LIB_0__::func_667(1f, 0.15f, (__LIB_9__::func_178(&uLocal_743) / 3f));
						OBJECT::_0xF49574E2332A8F06(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar0[iVar5]), fVar4);
						GRAPHICS::UPDATE_LIGHTS_ON_ENTITY(iVar0[iVar5]);
					}
				}
				iVar5++;
			}
		}
	}
}

bool func_1288(char[4] cParam0)
{
	switch (iLocal_747)
	{
		case 0:
			if (__LIB_0__::func_491(iLocal_110, 985146578))
			{
				__LIB_4__::func_89(&uLocal_80, 0);
				if (__LIB_9__::func_178(&uLocal_80) > 2.5f)
				{
					func_1848();
					__LIB_1__::func_561(&uLocal_80);
					__LIB_9__::func_195(cParam0, 4);
					iLocal_747 = 1;
				}
			}
			break;
		case 1:
			PED::SET_PED_RESET_FLAG(Global_35, 134, true);
			if (__LIB_11__::func_337(iLocal_305))
			{
				func_1849(cParam0);
			}
			else if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_110, 0))
			{
				if (TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(iLocal_110) || !__LIB_0__::func_266(Global_35, ENTITY::GET_ENTITY_COORDS(iLocal_110, true, false), 9f, 1, 1))
				{
					__LIB_11__::func_742(iLocal_305, 1);
					__LIB_1__::func_727(iLocal_108, 1);
					__LIB_4__::func_89(&uLocal_89, 0);
					TASK::TASK_LOOK_AT_ENTITY(iLocal_108, Global_35, -1, 0, 51, 0);
					TASK::TASK_REACT(iLocal_108, Global_35, 0f, 0f, 0f, "Default_None", 5f, 0, 4);
					iLocal_747 = 2;
				}
			}
			if (__LIB_11__::func_18(iLocal_110, sLocal_36, 34))
			{
				if (func_1335(iLocal_305))
				{
					__LIB_11__::func_742(iLocal_305, 1);
				}
				if (func_1846(iLocal_110))
				{
					func_1290(0);
					func_1851(2188.746f, -588.4199f, 40.5f, ENTITY::GET_ENTITY_COORDS(Local_213[1 /*11*/], true, false));
				}
				if (__LIB_0__::func_266(Global_35, ENTITY::GET_ENTITY_COORDS(iLocal_110, true, false), 7.5f, 1, 1))
				{
					if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iLocal_306, "CreoleCaptain", &uLocal_749, false, 0, 2))
					{
						func_1852(iLocal_110, 1, 0);
						TASK::TASK_ENTER_ANIM_SCENE(iLocal_110, iLocal_306, "CreoleCaptain", "IG2_LOOT_TRAP", 1069379748 /* Float: 1.48f */, 1, 134, 20000, -1082130432 /* Float: -1f */);
						func_1310();
						__LIB_9__::func_195(cParam0, 2);
						iLocal_747 = 3;
					}
				}
			}
			else if (!func_1846(iLocal_110))
			{
				func_1853(0, 1, 0, 1089470464 /* Float: 7.5f */);
			}
			break;
		case 2:
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_110, 0f);
			if (__LIB_9__::func_178(&uLocal_89) > 5f)
			{
				__LIB_1__::func_561(&uLocal_89);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_108, Global_35, -1, -1f, -1f, -1f);
			}
			if (!TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(iLocal_110) && __LIB_0__::func_266(Global_35, ENTITY::GET_ENTITY_COORDS(iLocal_110, true, false), (9f * 0.9f), 1, 1))
			{
				__LIB_11__::func_742(iLocal_305, 0);
				__LIB_3__::func_10(iLocal_108);
				func_1854();
				iLocal_747 = 1;
			}
			break;
		case 3:
			if (__LIB_11__::func_337(iLocal_305) || func_1837(iLocal_305))
			{
				if (func_1335(iLocal_306))
				{
					WEAPON::_HIDE_PED_WEAPONS(iLocal_110, 2, true);
					__LIB_9__::func_195(cParam0, 3);
					iLocal_747 = 4;
				}
			}
			break;
		case 4:
			if (!func_1855(6))
			{
				if (__LIB_11__::func_25(iLocal_306, 4f))
				{
					func_1258(cParam0, 6, 1f);
					__LIB_11__::func_741(iLocal_110, joaat("BLIP_STYLE_COMPANION"), 1);
					__LIB_0__::func_325(&(Local_213[0 /*11*/].f_4));
					Local_213[0 /*11*/].f_4 = MAP::_BLIP_ADD_FOR_ENTITY(203020899, Local_213[0 /*11*/]);
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_213[0 /*11*/].f_4, "MOB4_TRAP");
				}
			}
			if (__LIB_11__::func_337(iLocal_306))
			{
				func_1856(&(Local_213[1 /*11*/]));
				__LIB_0__::func_325(&(Local_213[1 /*11*/].f_4));
				iLocal_747 = 5;
			}
			func_1857(cParam0);
			break;
		case 5:
			if (func_1858(iLocal_110, iLocal_292, 1, 1, 1))
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_110, Global_35, -1, -1f, -1f, -1f);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_110, Global_35, -1, 0, 51, 0);
				iLocal_747 = 6;
			}
			func_1857(cParam0);
			break;
		case 6:
			__LIB_4__::func_89(&uLocal_92, 0);
			if (__LIB_11__::func_20(8))
			{
				if (func_1257(iLocal_110, joaat("BLIP_STYLE_COMPANION"), "MOB4_THOMAS", 1, 1, -546708623))
				{
					__LIB_3__::func_10(iLocal_110);
					__LIB_0__::func_325(&(Local_213[0 /*11*/].f_4));
					func_1853(1, 1, 1, 4.5f);
					__LIB_1__::func_561(&uLocal_92);
					func_1221(cParam0, 5, 0);
					func_1859();
					iLocal_747 = 7;
				}
			}
			else if (Local_213[0 /*11*/].f_9 <= 1)
			{
				if (__LIB_9__::func_178(&uLocal_92) > 12.5f)
				{
					__LIB_11__::func_342(8);
					__LIB_9__::func_195(cParam0, 13);
				}
			}
			func_1857(cParam0);
			break;
		case 7:
			if (__LIB_11__::func_18(iLocal_110, sLocal_36, 55))
			{
				__LIB_9__::func_195(cParam0, 6);
				func_1290(1);
				TASK::TASK_LOOK_AT_ENTITY(Global_35, Local_540[8 /*17*/], -1, 0, 51, 0);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_108, Local_540[8 /*17*/], -1, 0, 51, 0);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_110, Local_540[8 /*17*/], -1, 0, 51, 0);
				iLocal_747 = 8;
			}
			func_1849(cParam0);
			break;
		case 8:
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
			__LIB_4__::func_89(&uLocal_80, 0);
			if ((Local_540[8 /*17*/].f_15 && __LIB_1__::func_583(&uLocal_80) > 2.5f) || __LIB_1__::func_583(&uLocal_80) > 30f)
			{
				if (__LIB_11__::func_20(16))
				{
					__LIB_9__::func_195(cParam0, 17);
				}
				else
				{
					__LIB_9__::func_195(cParam0, 7);
				}
				__LIB_11__::func_342(32);
			}
			if (__LIB_11__::func_20(32))
			{
				__LIB_1__::func_561(&uLocal_80);
				func_1853(1, 1, 1, 4.5f);
				__LIB_3__::func_10(Global_35);
				__LIB_3__::func_10(iLocal_108);
				__LIB_3__::func_10(iLocal_110);
				func_1859();
				iLocal_747 = 9;
			}
			break;
		case 9:
			if (__LIB_11__::func_18(iLocal_110, sLocal_36, 58))
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iLocal_308, "CreoleCaptain", &uLocal_773, false, 0, 2))
				{
					func_1290(0);
					func_1851(2237.287f, -619.5348f, 40.51203f, ENTITY::GET_ENTITY_COORDS(Local_247, true, false));
					TASK::TASK_ENTER_ANIM_SCENE(iLocal_110, iLocal_308, "CreoleCaptain", "IG3_BASE_ENTER", 1069379748 /* Float: 1.48f */, 1, 0, 20000, -1082130432 /* Float: -1f */);
					func_1852(iLocal_110, 1, 0);
					func_1258(cParam0, 7, 25f);
					iLocal_747 = 10;
				}
			}
			func_1849(cParam0);
			break;
		case 10:
			if (func_1860(cParam0))
			{
				if (func_1257(iLocal_110, joaat("BLIP_STYLE_COMPANION"), "MOB4_THOMAS", 1, 1, -546708623))
				{
					func_1221(cParam0, 5, 0);
					func_1310();
					__LIB_0__::func_172(iLocal_160);
					iLocal_747 = 11;
				}
			}
			break;
		case 11:
			if (func_1858(iLocal_110, iLocal_292, 1, 1, 1))
			{
				if (func_1846(iLocal_110))
				{
					func_1859();
					func_1861(Global_35, iLocal_746, 0, 1);
					iLocal_747 = 12;
				}
				else
				{
					func_1853(1, 0, 1, 5.5f);
				}
			}
			break;
		case 12:
			if (!func_1846(iLocal_108))
			{
				if (__LIB_11__::func_18(iLocal_110, sLocal_36, 62))
				{
					func_1854();
				}
			}
			if (__LIB_11__::func_23(iLocal_110, sLocal_36) || !func_1846(iLocal_110))
			{
				iLocal_747 = 13;
			}
			func_1849(cParam0);
			break;
		case 13:
			return true;
	}
	return false;
}

void func_1289()
{
	__LIB_1__::func_561(&uLocal_77);
	__LIB_1__::func_561(&uLocal_80);
}

void func_1290(bool bParam0)
{
	if (bParam0)
	{
		TASK::TASK_STAND_STILL(iLocal_110, -1);
		TASK::TASK_STAND_STILL(iLocal_108, -1);
	}
	__LIB_1__::func_726(iLocal_110, 1);
	__LIB_1__::func_727(iLocal_108, 1);
	__LIB_1__::func_727(Global_35, 1);
	__LIB_5__::func_438(&uLocal_274);
}

void func_1291(int iParam0, int iParam1)
{
	WEAPON::_HIDE_PED_WEAPONS(iParam0, 2, true);
	WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, iLocal_292, 0, true, false, iParam1, false, 0.5f, 1f, 752097756, false, 0f, false);
	WEAPON::SET_CURRENT_PED_WEAPON(iParam0, iLocal_292, true, iParam1, false, false);
	func_1272(iParam0, 1041865114 /* Float: 0.15f */);
}

bool func_1292(char[4] cParam0)
{
	if (!__LIB_0__::func_272(iLocal_111, 0))
	{
		iLocal_111 = __LIB_1__::func_545(iLocal_17, func_376(3, 3), func_1831(3, 3), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		return false;
	}
	if (__LIB_6__::func_864(cParam0) >= 6)
	{
		if (!func_1365())
		{
			return false;
		}
	}
	if (__LIB_6__::func_864(cParam0) >= 4)
	{
		if (!func_1257(iLocal_111, joaat("BLIP_STYLE_COMPANION"), "MOB4_JULES", 1, 1, 0))
		{
			return false;
		}
		__LIB_11__::func_336(iLocal_111);
	}
	if (__LIB_6__::func_864(cParam0) <= 4)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_122))
		{
			iLocal_122 = OBJECT::CREATE_OBJECT(iLocal_22, 2316.7f, -681.42f, 44.2f, true, true, false, false, true);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_122, true);
			return false;
		}
		func_1835(iLocal_122, 0.01f);
		OBJECT::SET_OBJECT_TARGETTABLE(iLocal_122, false);
	}
	__LIB_9__::func_42(cParam0, iLocal_111, "MOB4_SCARED_CIV", 0);
	func_430(iLocal_111, 1);
	func_1863(iLocal_111);
	ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_111);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_111, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_111, 265, false);
	PED::SET_PED_CONFIG_FLAG(iLocal_111, 73, true);
	ENTITY::_0x18FF3110CF47115D(iLocal_111, 4, 0);
	return true;
}

bool func_1293()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_125))
	{
		iLocal_125 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(2309.328f, -694.2214f, 39.0917f, 100f, joaat("P_TREE_BRANCHSWAMP_01"), true, false, false);
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_126))
	{
		iLocal_126 = OBJECT::CREATE_OBJECT(iLocal_29, func_376(3, 4) - Vector(2f, 0f, 0f), true, true, false, false, true);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_126, true);
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_127))
	{
		iLocal_127 = OBJECT::CREATE_OBJECT(iLocal_30, func_376(3, 4) - Vector(2f, 0f, 0f), true, true, false, false, true);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_127, true);
		return false;
	}
	return true;
}

bool func_1294()
{
	if (!func_1517(&(Local_488[0 /*17*/]), func_212(3, 5), joaat("A_C_ALLIGATOR_01"), 4, 4, 0, 0, 1))
	{
		return false;
	}
	if (!func_1517(&(Local_488[1 /*17*/]), func_212(3, 6), joaat("A_C_ALLIGATOR_01"), 4, 4, 0, 0, 1))
	{
		return false;
	}
	if (!func_1517(&(Local_488[2 /*17*/]), func_212(3, 7), joaat("A_C_ALLIGATOR_01"), 4, 4, 0, 0, 1))
	{
		return false;
	}
	Local_488[0 /*17*/].f_3 = { func_1832(func_376(3, 8), 0, 0, 1036831949 /* Float: 0.1f */) };
	Local_488[1 /*17*/].f_3 = { func_1832(func_376(3, 9), 0, 0, 1036831949 /* Float: 0.1f */) };
	Local_488[2 /*17*/].f_3 = { func_1832(func_376(3, 10), 0, 0, 1036831949 /* Float: 0.1f */) };
	return true;
}

void func_1295()
{
	sLocal_911[0] = "IG4_SCARED_BASE";
	sLocal_911[1] = "IG4_SCARED_IDLE_SWAT_FLY";
	sLocal_911[2] = "IG4_SCARED_IDLE_FOOT_SLIP";
	sLocal_911[3] = "IG4_SCARED_IDLE_READJUST";
	sLocal_911[4] = "IG4_SCARED_IDLE_LOOK_LEFT";
	sLocal_911[5] = "IG4_SCARED_IDLE_LOOKUP";
	sLocal_911[6] = "IG4_SCARED_GUNSHOT_ALMOST_FALL";
	sLocal_911[7] = "IG4_SCARED_GUNSHOT_RIGHT_REACT";
	sLocal_911[8] = "IG4_SCARED_GUNSHOT_LEFT_REACT";
}

void func_1297(char[4] cParam0)
{
	__LIB_9__::func_62(cParam0, Global_35, "ARTHUR", 0, 0, 0, 0);
	__LIB_9__::func_62(cParam0, iLocal_114, "SKIFF", 0, 0, 0, 0);
	__LIB_9__::func_62(cParam0, iLocal_115, "p_skiff02x", 0, 0, 0, 0);
	__LIB_9__::func_62(cParam0, iLocal_126, "branch01_script", 0, 0, 0, 0);
	__LIB_9__::func_62(cParam0, iLocal_127, "branch02_script", 0, 0, 0, 0);
	__LIB_9__::func_62(cParam0, iLocal_125, "p_tree_branchswamp_01", 0, 0, 0, 0);
}

void func_1298()
{
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_304, "SKIFF", iLocal_114, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_304, "p_skiff02x", iLocal_115, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_304, "branch01_script", iLocal_126, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_304, "branch02_script", iLocal_127, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_304, "p_tree_branchswamp_01", iLocal_125, 0);
}

bool func_1299(int iParam0)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam0, false))
		{
			ANIMSCENE::START_ANIM_SCENE(iParam0);
		}
		return true;
	}
	return false;
}

void func_1300(char[4] cParam0)
{
	switch (__LIB_8__::func_618(cParam0))
	{
		case 1:
			if (func_1400(cParam0, "MOB4_MOREGATOR", 0, 1073741824 /* Float: 2f */, 0, 0))
			{
				func_1221(cParam0, 8, 0);
				__LIB_9__::func_195(cParam0, 10);
			}
			break;
		case 10:
			func_1864(cParam0);
			func_1865(cParam0);
			break;
		case 2:
			if (func_1400(cParam0, "MOB4_SAFE", 0, 1073741824 /* Float: 2f */, 0, 1))
			{
				func_1221(cParam0, 5, 0);
				__LIB_9__::func_195(cParam0, -1);
			}
			break;
		case 3:
			if (__LIB_0__::func_266(iLocal_108, vLocal_837, 5f, 1, 0) || func_1314())
			{
				if (func_1400(cParam0, "MOB4_SPLITUP", 0, 1073741824 /* Float: 2f */, 0, 1))
				{
					__LIB_9__::func_195(cParam0, -1);
				}
			}
			break;
		case 6:
			if (__LIB_2__::func_0(iLocal_111, 0.1f, 0.9f, 0.01f, 0.99f))
			{
				if (func_1400(cParam0, "MOB4_SEE_J", 0, 1073741824 /* Float: 2f */, 0, 1))
				{
					__LIB_9__::func_195(cParam0, -1);
				}
			}
			break;
		case 8:
			if (func_1400(cParam0, "MOB4_BECKON", 0, 1073741824 /* Float: 2f */, 1, 0))
			{
				__LIB_9__::func_195(cParam0, -1);
			}
			break;
		case 9:
			func_1400(cParam0, "MOB4_BOATDAWD", 5f, 1073741824 /* Float: 2f */, 0, 1);
			break;
	}
}

void func_1301(char[4] cParam0, int iParam1, int iParam2, float fParam3, char* sParam4)
{
	float fVar0;
	vector3 vVar1;
	switch (*iParam2)
	{
		case 0:
			break;
		case 1:
			__LIB_4__::func_89(fParam3, 0);
			if (!__LIB_0__::func_491(iParam1, 923520851))
			{
				vVar1 = { VOLUME::_GET_VOLUME_SCALE(iLocal_144) };
				fVar0 = (((vVar1.x + vVar1.y) + vVar1.z) / 3f);
				TASK::TASK_WANDER_IN_AREA(iParam1, VOLUME::_GET_VOLUME_COORDS(iLocal_144), fVar0, 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */, 0);
			}
			else if (__LIB_0__::func_48(Global_35, iParam1, 5f, 1))
			{
				if (__LIB_9__::func_178(fParam3) > 18f)
				{
					if (iLocal_867 <= 1 && iLocal_868 <= 1)
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_910);
						if (__LIB_0__::func_399(iParam1, 1, 1, 0) == joaat("WEAPON_MELEE_DAVY_LANTERN"))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(iParam1, joaat("WEAPON_MELEE_DAVY_LANTERN"), false, 0, false, false);
							WEAPON::SET_CURRENT_PED_WEAPON(iParam1, joaat("WEAPON_UNARMED"), false, 1, false, false);
							TASK::TASK_SWAP_WEAPON(iParam1, 1, 0, 0, 0);
						}
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_114, 0, -1f, -1f, -1f);
						TASK::TASK_SCRIPTED_ANIMATION(0, &Local_872);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_910);
						TASK::TASK_PERFORM_SEQUENCE(iParam1, iLocal_910);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_910);
						__LIB_1__::func_561(fParam3);
						*iParam2 = 2;
					}
				}
			}
			break;
		case 2:
			if (func_1400(cParam0, sParam4, 1f, 1073741824 /* Float: 2f */, 0, 0))
			{
				*iParam2 = 3;
			}
			break;
		case 3:
			if (!__LIB_0__::func_491(iParam1, 242628503))
			{
				*iParam2 = 1;
			}
			break;
	}
}

void func_1302(char[4] cParam0)
{
	if (__LIB_6__::func_889(cParam0) < 5)
	{
		if (__LIB_0__::func_272(Global_35, 0))
		{
			__LIB_1__::func_448(Global_35, ENTITY::GET_ENTITY_COORDS(iLocal_110, true, false), 0, 20f, 15f, 10f, 5f, 1, 1, 1, 0);
		}
	}
}

void func_1303(char[4] cParam0)
{
	if (__LIB_6__::func_889(cParam0) == 1)
	{
		if (__LIB_0__::func_272(Local_488[2 /*17*/], 0))
		{
			if (Local_488[2 /*17*/].f_6 == 5)
			{
				PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_488[2 /*17*/], 3f);
			}
		}
	}
}

void func_1304(char[4] cParam0)
{
	if (iLocal_866 != 9)
	{
		if (__LIB_6__::func_863(cParam0) == 1)
		{
			iLocal_866 = 9;
		}
	}
	if (iLocal_866 < 6)
	{
		if (__LIB_3__::func_145())
		{
			if (bLocal_921)
			{
				bLocal_921 = false;
				__LIB_8__::func_771(iLocal_111, 0, 1, 0);
			}
		}
		else if (!bLocal_921)
		{
			bLocal_921 = true;
			__LIB_10__::func_979(iLocal_111, "", 60f, 0, 60f, 324);
		}
	}
	switch (iLocal_866)
	{
		case 0:
			__LIB_11__::func_336(iLocal_111);
			iLocal_866 = 1;
			break;
		case 1:
			if (__LIB_0__::func_48(Global_35, iLocal_111, 60f, 1))
			{
				iLocal_866 = 2;
			}
			break;
		case 2:
			if (__LIB_10__::func_896(PLAYER::GET_PLAYER_INDEX(), iLocal_111))
			{
				if (!__LIB_0__::func_139(iLocal_865))
				{
					iLocal_865 = __LIB_11__::func_347("MOB4_UC_CALL", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 0, joaat("SHORT_TIMED_EVENT"), 0);
					__LIB_1__::func_574(&iLocal_865, iLocal_111);
				}
				if (__LIB_1__::func_732(iLocal_865, 1))
				{
					__LIB_1__::func_221(iLocal_865, 0, 1);
					iLocal_866 = 3;
				}
			}
			break;
		case 3:
			if (func_1400(cParam0, "MOB4_SHOUT", 0, 1073741824 /* Float: 2f */, 0, 0))
			{
				if (__LIB_0__::func_266(Global_35, ENTITY::GET_ENTITY_COORDS(iLocal_111, true, false), 22.5f, 1, 0))
				{
					iLocal_866 = 5;
				}
				else
				{
					iLocal_866 = 4;
				}
			}
			break;
		case 4:
			__LIB_4__::func_89(&uLocal_861, 0);
			if (__LIB_9__::func_178(&uLocal_861) > 4.5f)
			{
				__LIB_1__::func_561(&uLocal_861);
				__LIB_1__::func_515(iLocal_865, 1);
				__LIB_1__::func_221(iLocal_865, 1, 1);
				iLocal_866 = 2;
			}
			break;
		case 5:
			if (func_1400(cParam0, "MOB4_CRYING", 0, 1073741824 /* Float: 2f */, 0, 1))
			{
				iLocal_866 = 6;
			}
			break;
		case 6:
			__LIB_4__::func_89(&uLocal_861, 0);
			if (__LIB_9__::func_178(&uLocal_861) > 1f)
			{
				__LIB_0__::func_325(&iLocal_107);
				if (func_1257(iLocal_111, joaat("BLIP_STYLE_COMPANION"), "MOB4_JULES", 1, 1, -401963276))
				{
					func_163();
					__LIB_8__::func_771(iLocal_111, 0, 1, 0);
					func_434(iLocal_111, 1);
					TASK::TASK_LOOK_AT_ENTITY(Global_35, iLocal_111, -1, 128, 51, 1);
					MISC::_0xFC6ECB9170145ECE();
					MISC::_0x870708A6E147A9AD(iLocal_111, "", 15f, 15f, 0, 0, 0, 0, 0, -1);
					__LIB_1__::func_561(&uLocal_861);
					__LIB_1__::func_281(&iLocal_865, 1, 1);
					func_1230();
					func_1310();
					func_1258(cParam0, 10, 10f);
					__LIB_9__::func_195(cParam0, 6);
					iLocal_866 = 8;
				}
			}
			break;
		case 8:
			if (func_1876(iLocal_111, &uLocal_864, joaat("INPUT_EMOTE_GREET"), 15f, "MOB4_UC_BECKON", 1))
			{
				__LIB_1__::func_561(&uLocal_86);
				func_1230();
				func_1310();
				func_1877();
				__LIB_1__::func_281(&uLocal_864, 1, 1);
				__LIB_9__::func_195(cParam0, 8);
				iLocal_866 = 9;
				iLocal_869 = 2;
			}
			else if (__LIB_0__::func_266(Global_35, ENTITY::GET_ENTITY_COORDS(iLocal_111, true, false), (22.5f * 1.25f), 1, 0))
			{
				func_1400(cParam0, "MOB4_CRYING", 8f, 1073741824 /* Float: 2f */, 0, 1);
			}
			break;
		case 9:
			break;
	}
}

void func_1305(char[4] cParam0)
{
	struct<27> Var0;
	if (iLocal_869 != 7)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_111))
		{
			if (!__LIB_0__::func_272(iLocal_111, 0) || __LIB_11__::func_339(iLocal_111, Global_35, 0, 0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_111, false);
				iLocal_869 = 7;
			}
		}
	}
	switch (iLocal_869)
	{
		case 0:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_311))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_311, true, false))
				{
					func_1879();
					if (func_1299(iLocal_311))
					{
						fLocal_836 = MISC::GET_RANDOM_FLOAT_IN_RANGE(10f, 20f);
						iLocal_869 = 1;
					}
				}
			}
			break;
		case 1:
			if (iLocal_866 < 5)
			{
				if (__LIB_0__::func_48(Global_35, iLocal_114, 5f, 1) || __LIB_0__::func_48(Global_35, iLocal_111, 15f, 1))
				{
					iLocal_866 = 5;
				}
			}
			switch (iLocal_870)
			{
				case 0:
					__LIB_4__::func_89(&uLocal_86, 0);
					if (PED::_0x09D7AFD3716DA8E1(iLocal_111, 1000))
					{
						if (func_1880())
						{
							if (func_1312("MOB4_CRYING"))
							{
								AUDIO::STOP_SCRIPTED_CONVERSATION("MOB4_CRYING", false, false);
							}
							if (__LIB_8__::func_711(cParam0, "MOB4_JULESGRIEF", 0))
							{
								__LIB_1__::func_561(&uLocal_86);
								iLocal_870 = 2;
							}
						}
					}
					if (__LIB_2__::func_0(iLocal_111, 0.2f, 0.8f, 0.2f, 0.8f))
					{
						if (__LIB_9__::func_178(&uLocal_86) > fLocal_836)
						{
							if (iLocal_871 == 0)
							{
								iLocal_871 = MISC::GET_RANDOM_INT_IN_RANGE(1, 6);
							}
							else if (func_1881(iLocal_311, sLocal_911[iLocal_871]))
							{
								__LIB_1__::func_561(&uLocal_86);
								iLocal_870 = 1;
							}
						}
					}
					break;
				case 1:
					if (__LIB_11__::func_354(iLocal_311, sLocal_911[0]))
					{
						fLocal_836 = MISC::GET_RANDOM_FLOAT_IN_RANGE(10f, 20f);
						iLocal_871 = 0;
						iLocal_870 = 0;
					}
					break;
				case 2:
					if (__LIB_11__::func_354(iLocal_311, sLocal_911[0]))
					{
						iLocal_870 = 0;
					}
					break;
			}
			break;
		case 2:
			__LIB_4__::func_89(&uLocal_86, 0);
			if (__LIB_9__::func_178(&uLocal_86) > 2.5f)
			{
				if (!AUDIO::_0xA2CAC9DEF0195E6F(1))
				{
					ANIMSCENE::START_ANIM_SCENE(iLocal_310);
					ANIMSCENE::RESET_ANIM_SCENE(iLocal_311, 0);
					__LIB_1__::func_561(&uLocal_86);
					iLocal_869 = 3;
				}
			}
			break;
		case 3:
			func_1882(iLocal_311);
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_310))
			{
				if (!__LIB_0__::func_266(Global_35, ENTITY::GET_ENTITY_COORDS(iLocal_111, true, false), (15f * 1.25f), 1, 0))
				{
					if (ANIMSCENE::_0x34A0671BE613D3D0(iLocal_310) || ANIMSCENE::_0x9AAE3C1148A09BCA(iLocal_310))
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_111, sLocal_45, sLocal_46, 1))
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
							Var0 = 1;
							Var0.f_1 = sLocal_45;
							Var0.f_2 = sLocal_46;
							Var0.f_20 = 17;
							Var0.f_21 = 5;
							Var0.f_17 = 0.25f;
							Var0.f_18 = 0.25f;
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_111, true);
							TASK::TASK_SCRIPTED_ANIMATION(iLocal_111, &Var0);
						}
					}
					else if (!ANIMSCENE::_0xD70C7A30412F8FA0(iLocal_310))
					{
						ANIMSCENE::ABORT_ANIM_SCENE(iLocal_310, false);
					}
				}
				else if (ANIMSCENE::_0x1F0E401031E20146(iLocal_310, "IG4_SCARED_BOATS_OVER_THERE"))
				{
					__LIB_11__::func_741(iLocal_111, joaat("BLIP_STYLE_COMPANION"), 1);
					iLocal_107 = __LIB_8__::func_778(408396114, iLocal_114, 1);
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_107, "MOB4_SKIFF");
					func_1258(cParam0, 11, 1f);
					TASK::CLEAR_PED_SECONDARY_TASK(iLocal_111);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_111, false);
					iLocal_869 = 4;
				}
				else if (ANIMSCENE::_0x34A0671BE613D3D0(iLocal_310))
				{
					TASK::CLEAR_PED_SECONDARY_TASK(iLocal_111);
					ANIMSCENE::RESUME_ANIM_SCENE_FROM_LAST_CHECKPOINT(iLocal_310);
					ANIMSCENE::RESET_ANIM_SCENE(iLocal_311, 0);
				}
			}
			break;
		case 4:
			func_1882(iLocal_311);
			if (__LIB_11__::func_337(iLocal_310))
			{
				if (func_1882(iLocal_311))
				{
					__LIB_3__::func_10(Global_35);
					func_1879();
					func_1299(iLocal_311);
					__LIB_9__::func_195(cParam0, 9);
					iLocal_870 = 0;
					iLocal_869 = 0;
				}
			}
			break;
		case 5:
			if (func_1335(iLocal_311))
			{
				iLocal_869 = 6;
			}
			else if (func_1882(iLocal_311))
			{
				if (func_1335(iLocal_310))
				{
					if (!ANIMSCENE::_0xD70C7A30412F8FA0(iLocal_310))
					{
						ANIMSCENE::ABORT_ANIM_SCENE(iLocal_310, false);
					}
				}
				__LIB_3__::func_10(Global_35);
				func_1879();
				func_1299(iLocal_311);
				iLocal_869 = 6;
			}
			break;
		case 6:
			break;
		case 7:
			break;
	}
}

void func_1306(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (__LIB_0__::func_272((*iParam0)[iVar0 /*17*/], 0) && (iParam0[iVar0 /*17*/])->f_16)
		{
			func_1844(iParam0[iVar0 /*17*/]);
		}
		iVar0++;
	}
}

void func_1307()
{
	if (__LIB_0__::func_272(Global_35, 0))
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_310))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_310, false) && !ANIMSCENE::_0x34A0671BE613D3D0(iLocal_310))
			{
				func_1286();
			}
		}
	}
}

bool func_1309(vector3 vParam0, float fParam3)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Local_488 - 1))
	{
		if (__LIB_0__::func_272(Local_488[iVar0 /*17*/], 0))
		{
			if (__LIB_0__::func_266(Local_488[iVar0 /*17*/], vParam0, fParam3, 1, 1))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_1310()
{
	__LIB_1__::func_561(&uLocal_95);
	__LIB_1__::func_561(&uLocal_98);
}

int func_1311(char* sParam0)
{
	if (func_1312(sParam0))
	{
		return AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE(sParam0);
	}
	return -1;
}

bool func_1312(char* sParam0)
{
	if (AUDIO::_0xD89504D9D7D5057D(sParam0))
	{
		return AUDIO::_0x1ECC76792F661CF5(sParam0);
	}
	return false;
}

bool func_1314()
{
	return !__LIB_0__::func_266(Global_35, vLocal_837, 15f, 1, 0);
}

void func_1317()
{
	if (__LIB_0__::func_272(Global_35, 0) && ENTITY::DOES_ENTITY_EXIST(iLocal_114))
	{
		if (__LIB_0__::func_266(Global_35, ENTITY::GET_ENTITY_COORDS(iLocal_114, true, false), (2.75f * 2.5f), 1, 0))
		{
			PED::SET_PED_RESET_FLAG(Global_35, 2, true);
			PED::SET_PED_RESET_FLAG(Global_35, 168, true);
			PED::SET_PED_RESET_FLAG(Global_35, 21, true);
		}
	}
}

bool func_1319(char[4] cParam0, bool bParam1)
{
	func_880(cParam0);
	if (((bParam1 && __LIB_4__::func_576(&(cParam0->f_10792)) != 11) && !__LIB_4__::func_562(&(cParam0->f_10792), 131072)) && !__LIB_4__::func_562(&(cParam0->f_10792), 32768))
	{
		return false;
	}
	return __LIB_4__::func_581(&(cParam0->f_10792));
}

void func_1320()
{
	if (iLocal_869 < 5)
	{
		iLocal_869 = 5;
	}
}

void func_1321(char[4] cParam0, int iParam1)
{
	struct<8> Var0;
	Var0 = { __LIB_5__::func_65(&(cParam0->f_7375)) };
	if ((((__LIB_4__::func_562(&(cParam0->f_10792), 32768) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(cParam0->f_7375.f_804)) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(cParam0->f_7375.f_804, true, false)) && ANIMSCENE::_0xA9016536015DE29D(cParam0->f_7375.f_804, &Var0)) && ANIMSCENE::_0x23E33CB9F4A3F547(cParam0->f_7375.f_804, &Var0))
	{
		__LIB_9__::func_46(cParam0, &Var0);
		func_1888(cParam0);
	}
	else
	{
		if (iParam1 == 1 && __LIB_6__::func_872(cParam0, 16384))
		{
			__LIB_4__::func_618(&(cParam0->f_10792), Global_43805);
			__LIB_4__::func_532(&(cParam0->f_10792), 8);
		}
		__LIB_0__::func_19(&(cParam0->f_10792), iParam1);
		func_880(cParam0);
		__LIB_6__::func_868(cParam0, 2097152);
	}
}

bool func_1322()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_123))
	{
		iLocal_123 = OBJECT::CREATE_OBJECT(iLocal_23, func_376(3, 4) - Vector(2f, 0f, 0f), true, true, false, false, true);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_123, true);
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_124))
	{
		iLocal_124 = OBJECT::CREATE_OBJECT(iLocal_23, func_376(3, 4) - Vector(2f, 0f, 0f), true, true, false, false, true);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_124, true);
		return false;
	}
	return true;
}

void func_1323(char[4] cParam0)
{
	__LIB_9__::func_154(cParam0, Global_35, "ARTHUR", 0, 0, 0, 0);
	__LIB_9__::func_154(cParam0, iLocal_110, "CreoleCaptain", 0, 0, 0, 0);
	__LIB_9__::func_154(cParam0, iLocal_108, "dutch", 0, 0, 0, 0);
	__LIB_9__::func_154(cParam0, iLocal_111, "Jules", 0, 0, 0, 0);
	__LIB_9__::func_62(cParam0, iLocal_114, "SKIFF", 0, 0, 0, 0);
	__LIB_9__::func_62(cParam0, iLocal_115, "p_skiff02x", 0, 0, 0, 0);
	__LIB_9__::func_62(cParam0, iLocal_123, "s_interact_lantern02x", 0, 0, 0, 0);
	__LIB_9__::func_62(cParam0, iLocal_124, "s_interact_lantern02x^1", 0, 0, 0, 0);
	__LIB_9__::func_62(cParam0, iLocal_126, "branch01_script", 0, 0, 0, 0);
	__LIB_9__::func_62(cParam0, iLocal_127, "branch02_script", 0, 0, 0, 0);
	__LIB_9__::func_62(cParam0, iLocal_125, "p_tree_branchswamp_01", 0, 0, 0, 0);
}

void func_1325()
{
	PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), joaat("WEAPON_UNARMED"), 0);
	PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), joaat("WEAPON_UNARMED"), 1);
}

void func_1326()
{
	if (__LIB_0__::func_272(iLocal_110, 0) && ENTITY::DOES_ENTITY_EXIST(iLocal_114))
	{
		if (__LIB_2__::func_343(iLocal_110, iLocal_114, 0))
		{
			if (!__LIB_0__::func_491(iLocal_110, -235832601))
			{
				TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iLocal_110, iLocal_114, sLocal_37, 524295, 0, 67125248, -1, -1082130432 /* Float: -1f */, 0, 1073741824 /* Float: 2f */, 0);
			}
		}
	}
}

void func_1328(char[4] cParam0)
{
	switch (__LIB_8__::func_618(cParam0))
	{
		case 1:
			func_1221(cParam0, 12, 0);
			__LIB_9__::func_195(cParam0, 2);
			break;
		case 2:
			if (func_1400(cParam0, "MOB4_JULESFREE", 1f, 1073741824 /* Float: 2f */, 0, 0))
			{
				__LIB_9__::func_195(cParam0, 3);
			}
			break;
		case 3:
			if (func_1400(cParam0, "MOB4_SWBANT2", 2.5f, 1073741824 /* Float: 2f */, 0, 1))
			{
				__LIB_9__::func_195(cParam0, 51);
			}
			break;
	}
}

void func_1329(float fParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_114) && __LIB_0__::func_272(iLocal_110, 0))
	{
		if ((TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_114, 0) || TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_110, 0)) || __LIB_0__::func_491(iLocal_110, -235832601))
		{
			TASK::VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_114, fParam0);
		}
	}
}

void func_1331(int iParam0)
{
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0, "ARTHUR", Global_35, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0, "CreoleCaptain", iLocal_110, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0, "Dutch", iLocal_108, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0, "Jules", iLocal_111, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0, "SKIFF", iLocal_114, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0, "pole", iLocal_115, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0, "rope", iLocal_116, 0);
}

Vector3 func_1332(float fParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_114) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_313))
	{
		return ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_114, FtoV((ENTITY::GET_ENTITY_SPEED(iLocal_114) * fParam0)) * Vector(0f, 1f, 0f));
	}
	return func_376(5, 0);
}

void func_1333(char[4] cParam0)
{
	switch (__LIB_8__::func_618(cParam0))
	{
		case 1:
			func_1221(cParam0, 12, 0);
			__LIB_9__::func_195(cParam0, -1);
			break;
		case 2:
			if (func_1400(cParam0, "MOB4_PULLJULES", 1f, 1073741824 /* Float: 2f */, 0, 0))
			{
				__LIB_9__::func_195(cParam0, 51);
			}
			break;
	}
}

void func_1334(char[4] cParam0)
{
	if (__LIB_6__::func_889(cParam0) > 4)
	{
		func_1365();
	}
}

bool func_1335(int iParam0)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0))
	{
		return ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam0, false);
	}
	return false;
}

void func_1338()
{
	if (!CAM::_0xA24C1D341C6E0D53(1, 0, 1))
	{
		CAM::_0x718C6ECF5E8CBDD4();
	}
}

bool func_1339(int iParam0, int iParam1, char* sParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam1))
		{
			if ((ANIMSCENE::_0x005E6F28DD7ED58D(iParam1, sParam2) || ANIMSCENE::_0xB89FCFF19DAFFF28(iParam1, sParam2)) || !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iParam0, iParam1))
			{
				return true;
			}
		}
	}
	return false;
}

void func_1340(bool bParam0, bool bParam1)
{
	if (__LIB_0__::func_272(Global_35, 0))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_BLOCK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_WHISTLE"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DUCK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CHARACTER_WHEEL"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_CRAFTING_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
		if (bParam1)
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_EXIT"), false);
		}
		if (bParam0)
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_EQUIP_ITEM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_AIM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_ATTACK"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY_SECONDARY"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY_ACTION"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY_PC"), false);
		}
	}
}

void func_1342(int iParam0, vector3 vParam1, vector3 vParam4, int iParam7)
{
	if (__LIB_0__::func_272(iParam0, 0) && ENTITY::DOES_ENTITY_EXIST(iLocal_114))
	{
		if (__LIB_2__::func_343(iParam0, iLocal_114, 1))
		{
			PED::_0xE0B61ED8BB37712F(iParam0);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0, true, true);
		}
		if (!PED::IS_PED_ON_SPECIFIC_VEHICLE(iParam0, iLocal_114))
		{
			ENTITY::SET_ENTITY_COORDS(iParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_114, vParam1), true, false, true, true);
			if (__LIB_0__::func_86(vParam4))
			{
				ENTITY::SET_ENTITY_HEADING(iParam0, ENTITY::GET_ENTITY_HEADING(iLocal_114));
			}
			else
			{
				ENTITY::SET_ENTITY_HEADING(iParam0, __LIB_0__::func_152(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_114, vParam1), vParam4, 1));
			}
			PED::SET_PED_LEG_IK_MODE(iParam0, 0);
			ENTITY::_0x9587913B9E772D29(iParam0, 0);
			PED::FORCE_PED_MOTION_STATE(iParam0, iParam7, false, 0, false);
		}
	}
}

bool func_1343()
{
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_316, true, false))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(iLocal_316, true))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(iLocal_316);
		}
		return false;
	}
	return true;
}

void func_1344(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, float fParam17)
{
	vector3 vVar0;
	float fVar3;
	vVar0 = { func_1832(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0, 0, 1036831949 /* Float: 0.1f */) };
	fVar3 = (vVar0.z - fParam17);
	PED::_0xA90684ED185CCB4B(iParam0, 1, fVar3, 1f);
}

void func_1345()
{
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_315, "ARTHUR", Global_35, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_315, "SKIFF", iLocal_114, 0);
}

void func_1346()
{
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_316, "Jules", iLocal_111, 0);
}

void func_1347()
{
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_318, "ARTHUR", Global_35, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_318, "Jules", iLocal_111, 0);
}

void func_1348()
{
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_319, "ARTHUR", Global_35, 0);
}

void func_1349()
{
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_320, "Jules", iLocal_111, 0);
}

void func_1350()
{
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_321, "Dutch", iLocal_108, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_321, "Bullgator", Local_694, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_321, "SKIFF_CAPTN", iLocal_110, 0);
}

void func_1351()
{
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_322, "CreoleCaptain", iLocal_110, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_322, "pole", iLocal_115, 0);
}

void func_1352()
{
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_323, "ARTHUR", Global_35, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_323, "CreoleCaptain", iLocal_110, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_323, "Dutch", iLocal_108, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_323, "Joules", iLocal_111, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_323, "SKIFF", iLocal_114, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_323, "pole", iLocal_115, 0);
}

void func_1353()
{
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_324, "ARTHUR", Global_35, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_324, "Dutch", iLocal_108, 0);
}

void func_1354(int iParam0)
{
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0, "Jules", iLocal_111, 0);
}

void func_1355()
{
	sLocal_946[0] = "IG8_PANIC_HELP_JULES";
	sLocal_946[1] = "IG8_PANIC_GOT_M_LEG_JULES";
	sLocal_946[2] = "IG8_PANIC_CALLOVER_HELP";
	sLocal_946[3] = "IG8_PANIC_SWIM_BASE";
	sLocal_946[4] = "IG8_PANIC_FLOUNDER_SWIM_LOOP";
	sLocal_946[5] = "IG8_PANIC_CALLOVER_GET_OFF";
	sLocal_946[6] = "IG8_PANIC_PULL_UNDER";
	sLocal_946[7] = "IG8_PANIC_RESURFACE_GENERAL";
	sLocal_946[8] = "IG8_PANIC_RESURFACE_WIPE_EYE";
}

void func_1356()
{
	sLocal_956[0] = "IG10_DUTCH_DONT_LOOK";
	sLocal_956[1] = "IG10_DUTCH_QUICK_AS_YOU_CAN";
	sLocal_956[2] = "IG10_DUTCH_STAND_BASE";
	sLocal_956[3] = "IG10_DUTCH_TRANSITION";
	sLocal_956[4] = "IG10_IDLE_DUTCH_BASE";
	sLocal_956[5] = "IG10_IDLE_DUTCH_FED_UP";
	sLocal_956[6] = "IG10_IDLE_DUTCH_WIPE_EYE";
}

void func_1357()
{
	sLocal_964[1] = "IG10_DUTCH_FOCUS_ON";
	sLocal_964[2] = "IG10_DUTCH_SHOOT_BOTH";
	sLocal_964[3] = "IG10_DUTCH_SHOOT_RIGHT_WAVE_ON";
	sLocal_964[4] = "IG10_DUTCH_SHOOT_SEQUENCE";
}

void func_1358()
{
	sLocal_970[0] = "IG10_IDLE_THOMAS_BASE";
	sLocal_970[1] = "IG10_IDLE_THOMAS_LOOK_AROUND";
	sLocal_970[2] = "IG10_IDLE_THOMAS_LOOK_LOW";
	sLocal_970[3] = "IG10_THOMAS_AGITATED";
	sLocal_970[4] = "IG10_THOMAS_COME_ON";
	sLocal_970[5] = "IG10_THOMAS_DONT_STOP";
	sLocal_970[6] = "IG10_THOMAS_HANG_IN";
	sLocal_970[7] = "IG10_THOMAS_HURRY";
	sLocal_970[8] = "IG10_THOMAS_KEEP_GOING";
}

void func_1359()
{
	sLocal_980[0] = "pl_IG11_INTO_BOAT_MAIN_ACTION_R";
	sLocal_980[1] = "pl_IG11_INTO_BOAT_MAIN_ACTION";
	sLocal_980[2] = "pl_IG11_INTO_BOAT_DUTCH_MAIN_ACTION_R";
}

void func_1360()
{
	sLocal_984[1] = "PBL_IG11_INTO_BOAT_DUTCH_WAIT2HELP_R";
	sLocal_984[2] = "PBL_IG11_INTO_BOAT_DUTCH_WAIT2HELP";
	sLocal_984[3] = "PBL_IG11_INTO_BOAT_WAIT_R_BASE";
	sLocal_984[4] = "PBL_IG11_INTO_BOAT_WAIT_L_BASE";
	sLocal_984[5] = "PBL_IG11_INTO_BO_WAIT_L_2_R_TRANS";
	sLocal_984[6] = "PBL_IG11_INTO_BO_WAIT_R_2_L_TRANS";
	sLocal_984[7] = "PBL_IG11_INTO_BO_WAIT_R_FRUSTRATED";
	sLocal_984[8] = "PBL_IG11_INTO_BOAT_WAIT_L_FRUSTRAT";
	sLocal_984[9] = "PBL_IG11_INTO_BOAT_WAIT_R_HERE";
	sLocal_984[10] = "PBL_IG11_INTO_BOAT_WAIT_R_GUN_R";
	sLocal_984[11] = "PBL_IG11_INTO_BOAT_WAIT_R_LOOK";
	sLocal_984[12] = "PBL_IG11_INTO_BO_WAIT_R_TO_COMBAT";
	sLocal_984[13] = "PBL_IG11_INTO_BO_WAIT_L_TO_COMBAT";
}

void func_1361(bool bParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_694))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_114))
		{
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_694, iLocal_114, bParam0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_35))
		{
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_694, Global_35, bParam0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_108))
		{
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_694, iLocal_108, bParam0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_110))
		{
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_694, iLocal_110, bParam0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_111))
		{
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_694, iLocal_111, bParam0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_115))
		{
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_694, iLocal_115, bParam0);
		}
	}
}

bool func_1362()
{
	StringCopy(&Local_258, "camera_treatments", 64);
	StringCopy(&(Local_258.f_8), "CLOSE_AIMING_CUSTOM_TREATMENT_REQUEST", 64);
	CAM::_0x6A4D224FC7643941(&Local_258);
	return CAM::_0xDD0B7C5AE58F721D(&Local_258);
}

bool func_1364()
{
	if (bLocal_294)
	{
		return true;
	}
	else if (func_1362())
	{
		CAM::_0xB8B207C34285E978(&Local_258);
		bLocal_294 = true;
		return true;
	}
	return false;
}

bool func_1365()
{
	if (!__LIB_0__::func_272(iLocal_111, 0))
	{
		return false;
	}
	if (!func_1895())
	{
		return false;
	}
	if (!PED::_0xA0BC8FAED8CFEB3C(iLocal_111))
	{
		return false;
	}
	if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_134))
	{
		iLocal_134 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_PED_BONE("scr_mob4_leg_blood", iLocal_111, vLocal_59, vLocal_59, 43312, 1f, false, false, false);
	}
	func_1896(iLocal_111, -10496631);
	GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iLocal_134, "fade", 0f, false);
	PED::APPLY_PED_DAMAGE_PACK(iLocal_111, "PD_Mob4_Bitten_Leg_R", 0f, 1f);
	PED::APPLY_PED_DAMAGE_PACK(iLocal_111, "PD_Mob4_Bitten_Leg_Blood_Soak_R", 0f, 1f);
	__LIB_4__::func_239(iLocal_111);
	return true;
}

int func_1366()
{
	if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_135))
	{
		iLocal_135 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_PED_BONE("scr_blood_pool_water_trail", iLocal_111, vLocal_59, vLocal_59, 6884, 1f, false, false, false);
		return 0;
	}
	return 1;
}

void func_1367(int iParam0, float fParam1)
{
	if (__LIB_0__::func_272(iParam0, 0))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, fParam1);
		}
	}
}

void func_1368(char[4] cParam0)
{
	switch (__LIB_8__::func_618(cParam0))
	{
		case 1:
			func_1258(cParam0, 13, 1f);
			__LIB_9__::func_195(cParam0, 2);
			break;
		case 2:
			if (func_1400(cParam0, "MOB4_JUMPIN", 0, 1073741824 /* Float: 2f */, 1, 0))
			{
				__LIB_9__::func_195(cParam0, 14);
			}
			break;
		case 14:
			if (__LIB_0__::func_266(Global_35, ENTITY::GET_ENTITY_COORDS(iLocal_114, true, false), (2.25f * 2f), 1, 0))
			{
				if (!func_1312("MOB4_JUMPIN") && TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35) <= 1.5f)
				{
					__LIB_4__::func_89(&uLocal_80, 0);
					if (__LIB_9__::func_178(&uLocal_80) > 2.5f)
					{
						if (func_1400(cParam0, "MOB4_IG9_A1_DU1", 0, 1073741824 /* Float: 2f */, 0, 1))
						{
							__LIB_1__::func_561(&uLocal_80);
							__LIB_9__::func_195(cParam0, 18);
						}
					}
				}
				else
				{
					__LIB_1__::func_561(&uLocal_80);
				}
			}
			else
			{
				__LIB_1__::func_561(&uLocal_80);
				func_1310();
				__LIB_9__::func_195(cParam0, 20);
			}
			break;
		case 18:
			if (func_1312("MOB4_IG9_A1_DU1"))
			{
				if (!__LIB_0__::func_266(Global_35, ENTITY::GET_ENTITY_COORDS(iLocal_114, true, false), (2.25f * 2f), 1, 0))
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION("MOB4_IG9_A1_DU1", true, true);
				}
			}
			else
			{
				__LIB_9__::func_195(cParam0, 20);
			}
			break;
		case 20:
			if (__LIB_0__::func_266(Global_35, ENTITY::GET_ENTITY_COORDS(iLocal_114, true, false), (2.25f * 2f), 1, 0))
			{
				func_1400(cParam0, "MOB4_JUMPIN", 5f, 1073741824 /* Float: 2f */, 0, 1);
			}
			break;
		case 11:
			if (func_1400(cParam0, "MOB4_IG8_P1D", 0, 1073741824 /* Float: 2f */, 1, 0))
			{
				__LIB_9__::func_195(cParam0, 17);
			}
			break;
		case 17:
			func_1400(cParam0, "MOB4_INWATER", 0, 1073741824 /* Float: 2f */, 0, 1);
			break;
		case 3:
			if (func_1400(cParam0, "MOB4_SHIT", 1f, 1073741824 /* Float: 2f */, 0, 1))
			{
				func_1258(cParam0, 14, 5f);
				__LIB_9__::func_195(cParam0, 15);
			}
			break;
		case 15:
			if (func_1400(cParam0, "MOB4_RESCUE", 2.5f, 1073741824 /* Float: 2f */, 0, 1))
			{
				__LIB_9__::func_195(cParam0, -1);
			}
			break;
		case 12:
			if (__LIB_11__::func_354(iLocal_316, "IG8_PANIC_CALLOVER_GET_OFF"))
			{
				if (func_1400(cParam0, "MOB4_IG8_P1AALT", 0, 1073741824 /* Float: 2f */, 0, 0))
				{
					__LIB_9__::func_195(cParam0, 19);
				}
			}
			break;
		case 19:
			if (!func_1312("MOB4_IG8_P1AALT"))
			{
				func_1898(cParam0);
			}
			if (__LIB_2__::func_0(iLocal_111, 0.25f, 0.75f, 0.1f, 0.9f))
			{
				__LIB_4__::func_89(&uLocal_80, 0);
				if (__LIB_9__::func_178(&uLocal_80) > 2.5f)
				{
					if (__LIB_8__::func_711(cParam0, "MOB4_IG8_P1C", 0))
					{
						__LIB_1__::func_561(&uLocal_80);
						func_1230();
						__LIB_9__::func_195(cParam0, 16);
					}
				}
			}
			else
			{
				__LIB_1__::func_561(&uLocal_80);
			}
			if (__LIB_0__::func_48(Global_35, iLocal_111, (2.45f * 1.5f), 1))
			{
				func_1310();
				__LIB_1__::func_561(&uLocal_77);
				__LIB_1__::func_561(&uLocal_80);
				__LIB_9__::func_195(cParam0, 5);
			}
			break;
		case 16:
			if (__LIB_0__::func_48(Global_35, iLocal_111, (2.45f * 1.5f), 1))
			{
				func_1310();
				__LIB_1__::func_561(&uLocal_77);
				__LIB_9__::func_195(cParam0, 5);
			}
			else
			{
				func_1898(cParam0);
				if (__LIB_2__::func_0(iLocal_111, 0.25f, 0.75f, 0.1f, 0.9f))
				{
					func_1400(cParam0, "MOB4_COME_HERE", 2.5f, 1073741824 /* Float: 2f */, 0, 1);
				}
			}
			break;
		case 5:
			if (__LIB_11__::func_25(iLocal_318, 4.2f))
			{
				if (func_1400(cParam0, "MOB4_GOTYOU", 0, 1073741824 /* Float: 2f */, 0, 0))
				{
					__LIB_9__::func_195(cParam0, -1);
				}
			}
			break;
		case 6:
			func_1258(cParam0, 15, 5f);
			func_1310();
			__LIB_9__::func_195(cParam0, 7);
			break;
		case 7:
			if (func_1795(22))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), ENTITY::GET_ENTITY_COORDS(iLocal_114, true, false), true) < (MISC::GET_DISTANCE_BETWEEN_COORDS(vLocal_936, ENTITY::GET_ENTITY_COORDS(iLocal_114, true, false), true) * 0.975f))
				{
					func_1230();
				}
			}
			else
			{
				__LIB_9__::func_195(cParam0, 8);
			}
			break;
		case 8:
			if (func_1400(cParam0, "MOB4_SHOOT", 2.5f, 1073741824 /* Float: 2f */, 0, 1))
			{
				__LIB_9__::func_195(cParam0, -1);
			}
			break;
		case 13:
			if (func_1400(cParam0, "MOB4_IG9_C", 2.5f, 1073741824 /* Float: 2f */, 1, 0))
			{
				__LIB_9__::func_195(cParam0, 51);
			}
			break;
	}
}

void func_1369(char[4] cParam0)
{
	if (__LIB_6__::func_889(cParam0) == 0 || iLocal_1000 >= 9)
	{
		func_1338();
	}
}

void func_1370(char[4] cParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	if (iLocal_1000 <= 3)
	{
		func_1899(iLocal_111, Global_35, 15f, 1.5f);
	}
	switch (iLocal_1000)
	{
		case 0:
			if (__LIB_11__::func_354(iLocal_316, sLocal_946[3]) || __LIB_11__::func_354(iLocal_316, sLocal_946[4]))
			{
				__LIB_4__::func_89(&uLocal_1004, 0);
				iLocal_1000 = 1;
			}
			break;
		case 1:
			if (__LIB_9__::func_178(&uLocal_1004) > 50f)
			{
				__LIB_1__::func_561(&uLocal_86);
				__LIB_1__::func_561(&uLocal_1004);
				__LIB_9__::func_205(cParam0, "MOB4_DROWN_JULES", "", 1, 0);
				iLocal_1000 = 11;
			}
			else if (ANIMSCENE::GET_ANIM_SCENE_BOOL(iLocal_316, "bGrabbed"))
			{
				func_1901();
				if (__LIB_11__::func_354(iLocal_316, sLocal_946[1]))
				{
					__LIB_1__::func_561(&uLocal_1004);
					__LIB_1__::func_561(&uLocal_86);
					iLocal_1000 = 3;
				}
			}
			else if (__LIB_0__::func_48(iLocal_111, Global_35, 15f, 1))
			{
				__LIB_9__::func_195(cParam0, 11);
				ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_316, "bGrabbed", true, false);
			}
			else if (!ANIMSCENE::GET_ANIM_SCENE_BOOL(iLocal_316, "bHelp"))
			{
				__LIB_4__::func_89(&uLocal_86, 0);
				if (__LIB_9__::func_178(&uLocal_86) > 7.5f)
				{
					__LIB_1__::func_561(&uLocal_86);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_316, "bHelp", true, false);
				}
			}
			else if (__LIB_11__::func_354(iLocal_316, sLocal_946[2]))
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_316, "bHelp", false, false);
				iLocal_1000 = 2;
			}
			break;
		case 2:
			if (__LIB_11__::func_354(iLocal_316, sLocal_946[3]))
			{
				iLocal_1000 = 1;
			}
			break;
		case 3:
			if (__LIB_11__::func_354(iLocal_316, sLocal_946[6]))
			{
				func_1902();
				iLocal_728 = 4;
				iLocal_1000 = 4;
			}
			else if (__LIB_0__::func_48(Global_35, iLocal_111, 1.5f, 1))
			{
				if (!ANIMSCENE::GET_ANIM_SCENE_BOOL(iLocal_316, "bSubmerged"))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_316, "bSubmerged", true, false);
				}
			}
			break;
		case 4:
			if (__LIB_11__::func_354(iLocal_316, sLocal_946[7]) || ((__LIB_11__::func_354(iLocal_316, sLocal_946[6]) && func_1903(iLocal_111, 1)) && __LIB_11__::func_25(iLocal_316, 1.8f)))
			{
				if (func_1257(iLocal_111, joaat("BLIP_STYLE_COMPANION"), "MOB4_JULES", 1, 1, -1186550032))
				{
					func_1310();
					func_1221(cParam0, 14, 0);
					__LIB_9__::func_195(cParam0, 3);
					iLocal_107 = __LIB_8__::func_777(408396114, func_376(6, 0), 22.5f, 1);
					iLocal_1000 = 5;
				}
			}
			break;
		case 5:
			if (!ANIMSCENE::_IS_ANIM_SCENE_PAUSED(iLocal_316))
			{
				if (__LIB_11__::func_354(iLocal_316, sLocal_946[7]))
				{
					__LIB_4__::func_89(&uLocal_86, 0);
					ANIMSCENE::SET_ANIM_SCENE_PAUSED(iLocal_316, true);
				}
			}
			else if (__LIB_9__::func_178(&uLocal_86) > 12f)
			{
				if (func_1904(&vLocal_936, func_376(6, 0), ENTITY::GET_ENTITY_COORDS(iLocal_114, true, false), (22.5f * 0.88f), (22.5f * 0.45f), (35f * 1.05f)))
				{
					__LIB_1__::func_561(&uLocal_86);
					func_1519(iLocal_111, 0, 0);
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iLocal_316, vLocal_936 - vLocal_933, 0f, 0f, (__LIB_0__::func_152(vLocal_936, func_376(6, 2), 1) - 90f), 2);
					ANIMSCENE::SET_ANIM_SCENE_PAUSED(iLocal_316, false);
					__LIB_9__::func_948(cParam0, iLocal_318);
					__LIB_9__::func_948(cParam0, iLocal_319);
					__LIB_9__::func_948(cParam0, iLocal_320);
					__LIB_9__::func_195(cParam0, 12);
					iLocal_1000 = 6;
				}
			}
			else if (__LIB_9__::func_178(&uLocal_86) > 3f)
			{
				if (__LIB_0__::func_272(iLocal_111, 0))
				{
					if (ENTITY::IS_ENTITY_VISIBLE(iLocal_111))
					{
						func_1519(iLocal_111, 1, 1);
					}
				}
			}
			break;
		case 6:
			__LIB_4__::func_89(&uLocal_86, 0);
			__LIB_4__::func_89(&uLocal_1004, 0);
			__LIB_4__::func_89(&uLocal_1007, 0);
			if (__LIB_9__::func_178(&uLocal_1007) > 5f)
			{
				MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
				MAP::_TRIGGER_SONAR_BLIP_2(-296154796, iLocal_111);
				__LIB_1__::func_561(&uLocal_1007);
			}
			if (__LIB_9__::func_178(&uLocal_1004) > 50f)
			{
				__LIB_1__::func_561(&uLocal_1004);
				__LIB_1__::func_561(&uLocal_1007);
				__LIB_9__::func_205(cParam0, "MOB4_DROWN_JULES", "", 1, 0);
				iLocal_1000 = 11;
			}
			else if (__LIB_9__::func_178(&uLocal_86) > 1f)
			{
				if (__LIB_0__::func_48(Global_35, iLocal_111, (2.45f * 1.2f), 1))
				{
					func_1905();
					WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
					if (__LIB_0__::func_48(Global_35, iLocal_111, 2.45f, 1))
					{
						if (func_1906(iLocal_318))
						{
							if (func_1907(Global_35))
							{
								vVar0 = { ENTITY::GET_ENTITY_COORDS(iLocal_111, true, false) };
								vVar0.f_2 = (func_1908(ENTITY::GET_ENTITY_COORDS(Global_35, true, false)) - 0.2f);
								if (func_1909(iLocal_318, vVar0, ENTITY::GET_ENTITY_ROTATION(Global_35, 2) - Vector(180f, 0f, 0f)))
								{
									__LIB_1__::func_561(&uLocal_1004);
									__LIB_1__::func_561(&uLocal_86);
									__LIB_1__::func_561(&uLocal_1007);
									__LIB_0__::func_325(&iLocal_107);
									__LIB_11__::func_335(iLocal_316);
									__LIB_11__::func_741(iLocal_111, joaat("BLIP_STYLE_COMPANION"), 1);
									PED::SET_PED_CONFIG_FLAG(Global_35, 174, true);
									MISC::CLEAR_WEATHER_TYPE_PERSIST();
									MISC::_SET_WEATHER_TYPE(joaat("MISTY"), true, true, true, 30f, false);
									iLocal_1000 = 7;
								}
							}
						}
					}
				}
			}
			break;
		case 7:
			func_1905();
			CAM::_0xD904F75DBD7AB865(iLocal_111);
			TASK::_0xFF745B0346E19E2C(joaat("INJURED_CARRIABLE_HUMAN"));
			if (func_1339(iLocal_111, iLocal_318, "Jules") || func_1339(Global_35, iLocal_318, "ARTHUR"))
			{
				PED::_0x10F96086123B939F(Global_35, iLocal_111, -1f);
				ANIMSCENE::START_ANIM_SCENE(iLocal_320);
				ANIMSCENE::START_ANIM_SCENE(iLocal_319);
				func_1383(Global_35, iLocal_111, 0);
				iLocal_107 = __LIB_8__::func_778(408396114, iLocal_114, 1);
				__LIB_9__::func_195(cParam0, 6);
				iLocal_1000 = 8;
			}
			break;
		case 8:
			func_1905();
			func_1362();
			CAM::_0xD904F75DBD7AB865(iLocal_111);
			if (__LIB_0__::func_48(Global_35, iLocal_114, (2.25f * 1.1f), 1))
			{
				func_1364();
			}
			if (__LIB_0__::func_48(Global_35, iLocal_114, 2.25f, 1))
			{
				SCRIPTS::_0x50B72A754EE64A71(joaat("CHAL_CTX_CUSTOM_1"));
				if (iLocal_729 < 5)
				{
					iLocal_729 = 5;
				}
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iLocal_323, ENTITY::GET_ENTITY_COORDS(iLocal_114, true, false), ENTITY::GET_ENTITY_ROTATION(iLocal_114, 2), 2);
				if (func_1911(__LIB_3__::func_112(iLocal_114, Global_35, 1f)))
				{
					if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iLocal_323, "ARTHUR", &vVar3, false, 0, 2))
					{
						__LIB_4__::func_89(&uLocal_86, 0);
						if (__LIB_9__::func_178(&uLocal_86) > 5f || __LIB_0__::func_266(Global_35, vVar3, 0.5f, 1, 0))
						{
							AUDIO::_0x36559148B78853B3(1, 1, 1);
							ENTITY::SET_ENTITY_INVINCIBLE(iLocal_114, true);
							PED::SET_PED_CAN_RAGDOLL(iLocal_110, false);
							func_1383(iLocal_114, iLocal_111, 0);
							func_1383(iLocal_114, iLocal_110, 0);
							func_1299(iLocal_323);
							__LIB_1__::func_561(&uLocal_86);
							__LIB_0__::func_325(&iLocal_107);
							iLocal_1002 = 5;
							iLocal_1001 = 12;
							iLocal_1000 = 9;
						}
						else if (__LIB_0__::func_266(Global_35, vVar3, 1.25f, 1, 0))
						{
							if (!__LIB_0__::func_491(Global_35, 1045468327))
							{
								TASK::TASK_PED_SLIDE_TO_COORD(Global_35, vVar3, __LIB_0__::func_152(vVar3, PED::GET_PED_BONE_COORDS(iLocal_108, 0, vLocal_59), 1), 0.75f);
							}
						}
						else if (!__LIB_0__::func_491(Global_35, 2106541073))
						{
							TASK::TASK_GO_STRAIGHT_TO_COORD(Global_35, vVar3, 2f, 20000, __LIB_0__::func_152(vVar3, PED::GET_PED_BONE_COORDS(iLocal_108, 0, vLocal_59), 1), 1056964608 /* Float: 0.5f */, 0);
						}
					}
				}
			}
			if (func_1912(cParam0, Global_35, 0))
			{
				__LIB_4__::func_89(&uLocal_485, 0);
				func_1383(Global_35, iLocal_111, 1);
				func_1383(iLocal_114, iLocal_111, 1);
				iLocal_1000 = 11;
			}
			break;
		case 9:
			CAM::_0xD904F75DBD7AB865(iLocal_111);
			func_1912(cParam0, Global_35, 0);
			func_1340(0, 1);
			if (__LIB_11__::func_25(iLocal_323, 1f))
			{
				__LIB_11__::func_335(iLocal_318);
				__LIB_11__::func_335(iLocal_320);
				__LIB_11__::func_335(iLocal_319);
				__LIB_11__::func_335(iLocal_322);
				__LIB_11__::func_335(iLocal_324);
			}
			if (func_1913())
			{
				iLocal_1001 = 14;
				iLocal_1000 = 10;
			}
			break;
		case 10:
			func_1340(0, 1);
			func_1299(iLocal_325);
			break;
		case 11:
			CAM::_0xD904F75DBD7AB865(iLocal_111);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_111))
			{
				if (!TASK::_0x0CCFE72B43C9CF96(iLocal_111))
				{
					__LIB_1__::func_864(iLocal_111, 0, 0);
				}
			}
			if (__LIB_9__::func_178(&uLocal_485) > 0.1f)
			{
				__LIB_1__::func_561(&uLocal_485);
				__LIB_11__::func_335(iLocal_318);
				__LIB_11__::func_335(iLocal_320);
				__LIB_11__::func_335(iLocal_319);
				TASK::_0x9EBD34958AB6F824(iLocal_111);
			}
			break;
	}
}

void func_1371(char[4] cParam0)
{
	switch (iLocal_1001)
	{
		case 0:
			if (!func_1335(iLocal_314) || func_1339(iLocal_108, iLocal_314, "dutch"))
			{
				func_1299(iLocal_321);
				if (__LIB_11__::func_354(iLocal_321, sLocal_956[4]))
				{
					iLocal_1001 = 1;
				}
			}
			break;
		case 1:
			__LIB_4__::func_89(&uLocal_89, 0);
			if (iLocal_1000 >= 7)
			{
				if (__LIB_2__::func_0(iLocal_108, 0.25f, 0.75f, 0.1f, 0.9f) || __LIB_0__::func_48(Global_35, iLocal_114, 35f, 1))
				{
					if (!ANIMSCENE::GET_ANIM_SCENE_BOOL(iLocal_321, "Loop"))
					{
						ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_321, "Loop", true, false);
					}
					else if (__LIB_11__::func_354(iLocal_321, sLocal_956[3]))
					{
						ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_321, "Loop", false, false);
						__LIB_1__::func_561(&uLocal_89);
						iLocal_1001 = 3;
					}
				}
			}
			else if ((__LIB_9__::func_178(&uLocal_89) > 8.5f && __LIB_2__::func_0(iLocal_108, 0.2f, 0.8f, 0.1f, 0.9f)) && iLocal_999 == 4)
			{
				if ((iLocal_942 % 2) == 0)
				{
					if (func_1881(iLocal_321, sLocal_956[5]))
					{
						__LIB_1__::func_561(&uLocal_89);
						iLocal_1001 = 2;
					}
				}
				else if (func_1881(iLocal_321, sLocal_956[6]))
				{
					__LIB_1__::func_561(&uLocal_89);
					iLocal_1001 = 2;
				}
			}
			break;
		case 2:
			if (__LIB_11__::func_354(iLocal_321, sLocal_956[4]))
			{
				iLocal_942++;
				iLocal_1001 = 1;
			}
			break;
		case 3:
			if (__LIB_11__::func_354(iLocal_321, sLocal_956[0]))
			{
				__LIB_9__::func_195(cParam0, 13);
				iLocal_1001 = 4;
			}
			break;
		case 4:
			if (__LIB_11__::func_354(iLocal_321, sLocal_956[2]))
			{
				iLocal_943 = MISC::GET_RANDOM_INT_IN_RANGE(2, 5);
				iLocal_1001 = 5;
			}
			break;
		case 5:
			__LIB_4__::func_89(&uLocal_89, 0);
			if (__LIB_9__::func_178(&uLocal_89) > 1f)
			{
				if (func_1881(iLocal_321, sLocal_964[iLocal_943]))
				{
					ANIMSCENE::SET_ANIM_SCENE_FLOAT(iLocal_321, "shoot_pbl", BUILTIN::TO_FLOAT(iLocal_943), true, false);
					__LIB_1__::func_561(&uLocal_89);
					__LIB_9__::func_948(cParam0, iLocal_323);
					__LIB_9__::func_948(cParam0, iLocal_324);
					iLocal_1001 = 6;
				}
			}
			break;
		case 6:
			func_1914();
			if (__LIB_0__::func_48(Global_35, iLocal_114, 16.5f, 1))
			{
				ANIMSCENE::SET_ANIM_SCENE_FLOAT(iLocal_321, "shoot_pbl", 0f, true, false);
				if (__LIB_11__::func_354(iLocal_321, sLocal_956[1]))
				{
					iLocal_1001 = 7;
				}
			}
			else if (ANIMSCENE::_0x1F0E401031E20146(iLocal_321, sLocal_964[iLocal_943]))
			{
				if (((!__LIB_0__::func_27(iLocal_945, 32) && !__LIB_1__::func_373(ENTITY::GET_ENTITY_COORDS(iLocal_114, true, false), 0.2f, 0.8f, 0.1f, 0.9f)) && !func_1312("MOB4_IG9_C")) && __LIB_8__::func_618(cParam0) == 51)
				{
					__LIB_1__::func_683(&iLocal_945, 32);
					iLocal_943 = 1;
				}
				else
				{
					iLocal_943 = __LIB_9__::func_844(2, 5, iLocal_943);
				}
				ANIMSCENE::SET_ANIM_SCENE_FLOAT(iLocal_321, "shoot_pbl", BUILTIN::TO_FLOAT(iLocal_943), true, false);
			}
			break;
		case 7:
			if (__LIB_11__::func_337(iLocal_321))
			{
				func_1917(__LIB_3__::func_112(iLocal_114, Global_35, 1f));
				if (func_1299(iLocal_324))
				{
					ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_322, "iSelection", 3, false);
					__LIB_11__::func_335(iLocal_321);
					iLocal_1001 = 8;
				}
			}
			break;
		case 8:
			if (__LIB_11__::func_354(iLocal_324, sLocal_984[3]) || __LIB_11__::func_354(iLocal_324, sLocal_984[4]))
			{
				ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_324, "iSelection", 0, false);
				iLocal_1001 = 9;
			}
			break;
		case 9:
			if (iLocal_1000 == 11)
			{
				if (func_1918())
				{
					ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_324, "iSelection", 0, false);
					iLocal_1001 = 13;
				}
				else
				{
					ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_324, "iSelection", func_1919(), false);
				}
			}
			else if (__LIB_11__::func_354(iLocal_324, sLocal_984[5]) || __LIB_11__::func_354(iLocal_324, sLocal_984[6]))
			{
				ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_324, "iSelection", 0, false);
				__LIB_1__::func_561(&uLocal_89);
				iLocal_1001 = 11;
			}
			else if (ANIMSCENE::GET_ANIM_SCENE_BOOL(iLocal_324, "bLeft") && __LIB_3__::func_112(iLocal_114, Global_35, 0.957f) == 2)
			{
				__LIB_4__::func_89(&uLocal_89, 0);
				if (__LIB_9__::func_178(&uLocal_89) > 1.5f)
				{
					ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_324, "iSelection", 5, false);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_324, "bLeft", false, false);
				}
			}
			else if (!ANIMSCENE::GET_ANIM_SCENE_BOOL(iLocal_324, "bLeft") && __LIB_3__::func_112(iLocal_114, Global_35, 0.975f) == 3)
			{
				__LIB_4__::func_89(&uLocal_89, 0);
				if (__LIB_9__::func_178(&uLocal_89) > 1.5f)
				{
					ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_324, "iSelection", 6, false);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_324, "bLeft", true, false);
				}
			}
			else if (ANIMSCENE::GET_ANIM_SCENE_INT(iLocal_324, "iSelection") != 5 && ANIMSCENE::GET_ANIM_SCENE_INT(iLocal_324, "iSelection") != 6)
			{
				__LIB_1__::func_561(&uLocal_89);
				if (ANIMSCENE::GET_ANIM_SCENE_INT(iLocal_324, "iSelection") > 6)
				{
					if (func_1920())
					{
						ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_324, "iSelection", 0, false);
						iLocal_1001 = 10;
					}
					else
					{
						Jump @1411; //curOff = 1298
						if (!__LIB_0__::func_266(Global_35, ENTITY::GET_ENTITY_COORDS(iLocal_114, true, false), 5.5f, 1, 0))
						{
							if (!__LIB_0__::func_899(&uLocal_1019) || __LIB_9__::func_178(&uLocal_1019) > 5f)
							{
								if (__LIB_1__::func_373(ENTITY::GET_ENTITY_COORDS(iLocal_114, true, false), 0.2f, 0.8f, 0.1f, 0.9f))
								{
									__LIB_1__::func_561(&uLocal_1019);
									ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_324, "iSelection", func_1921(), false);
								}
							}
						}
						if (ANIMSCENE::GET_ANIM_SCENE_INT(iLocal_324, "iSelection") == 0)
						{
							if (!__LIB_0__::func_48(Global_35, iLocal_114, 2.25f, 1))
							{
								if (!__LIB_0__::func_27(iLocal_945, 64))
								{
									if (!AUDIO::_0x54B187F111D9C6F8(iLocal_108, 0))
									{
										if (__LIB_8__::func_711(cParam0, "MOB4_IG11_P1_5", 0))
										{
											__LIB_1__::func_683(&iLocal_945, 64);
										}
									}
								}
								else if (!__LIB_0__::func_27(iLocal_945, 128))
								{
									if (!AUDIO::_0x54B187F111D9C6F8(iLocal_108, 0))
									{
										if (__LIB_8__::func_711(cParam0, "MOB4_IG11_P1_6", 0))
										{
											__LIB_1__::func_683(&iLocal_945, 128);
										}
									}
								}
							}
						}
						Jump @1671; //curOff = 1542
						if (__LIB_11__::func_354(iLocal_324, sLocal_984[3]) || __LIB_11__::func_354(iLocal_324, sLocal_984[4]))
						{
							__LIB_4__::func_89(&uLocal_1019, 0);
							iLocal_1001 = 9;
						}
						Jump @1671; //curOff = 1593
						if (__LIB_11__::func_354(iLocal_324, sLocal_984[3]) || __LIB_11__::func_354(iLocal_324, sLocal_984[4]))
						{
							iLocal_1001 = 9;
						}
						Jump @1671; //curOff = 1636
						if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_108, -1))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_108, false))
							{
								PED::_0xE0B61ED8BB37712F(iLocal_108);
							}
						}
					}
				}
			}
			default:
				break;
	}
}

void func_1372()
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_322))
	{
		switch (iLocal_1002)
		{
			case 0:
				if (!func_1335(iLocal_314) || func_1339(iLocal_110, iLocal_314, "CreoleCaptain"))
				{
					func_1299(iLocal_322);
					if (__LIB_11__::func_354(iLocal_322, sLocal_970[0]))
					{
						iLocal_1002 = 1;
					}
				}
				break;
			case 1:
				__LIB_4__::func_89(&uLocal_92, 0);
				if (iLocal_1001 >= 5)
				{
					if (__LIB_11__::func_354(iLocal_322, sLocal_970[3]))
					{
						ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_322, "iSelection", 4, false);
						ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_322, "Loop", false, false);
						__LIB_1__::func_561(&uLocal_92);
						iLocal_1002 = 3;
					}
					else if (!ANIMSCENE::GET_ANIM_SCENE_BOOL(iLocal_322, "Loop") || ANIMSCENE::GET_ANIM_SCENE_INT(iLocal_322, "iSelection") != 1)
					{
						if (__LIB_2__::func_0(iLocal_110, 0.2f, 0.8f, 0.1f, 0.9f))
						{
							ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_322, "iSelection", 1, false);
							ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_322, "Loop", true, false);
						}
					}
				}
				else if (__LIB_9__::func_178(&uLocal_92) > 7.5f)
				{
					if (iLocal_1000 < 7)
					{
						if (!ANIMSCENE::GET_ANIM_SCENE_BOOL(iLocal_322, "Loop"))
						{
							if (__LIB_2__::func_0(iLocal_110, 0.2f, 0.8f, 0.1f, 0.9f))
							{
								ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_322, "Loop", true, false);
							}
						}
						else if (__LIB_11__::func_354(iLocal_322, sLocal_970[1]) || __LIB_11__::func_354(iLocal_322, sLocal_970[2]))
						{
							ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_322, "Loop", false, false);
							__LIB_1__::func_561(&uLocal_92);
							iLocal_1002 = 2;
						}
					}
				}
				break;
			case 2:
				if (__LIB_11__::func_354(iLocal_322, sLocal_970[0]))
				{
					iLocal_1002 = 1;
				}
				break;
			case 3:
				__LIB_4__::func_89(&uLocal_92, 0);
				if (!__LIB_11__::func_354(iLocal_322, sLocal_970[3]))
				{
					ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_322, "iSelection", 1, false);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_322, "Loop", false, false);
					__LIB_1__::func_561(&uLocal_92);
					iLocal_1002 = 4;
				}
				else if (!ANIMSCENE::GET_ANIM_SCENE_BOOL(iLocal_322, "Loop") && ANIMSCENE::GET_ANIM_SCENE_INT(iLocal_322, "iSelection") != 1)
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_322, "Loop", true, false);
				}
				else if (__LIB_9__::func_178(&uLocal_92) > 7.5f)
				{
					ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_322, "iSelection", 2, false);
				}
				break;
			case 4:
				if (__LIB_11__::func_354(iLocal_322, sLocal_970[3]))
				{
					iLocal_1002 = 3;
				}
				break;
			case 5:
				break;
		}
	}
}

void func_1373(int iParam0, float fParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam0, false))
		{
			ANIMSCENE::_GET_ANIM_SCENE_ORIGIN(iParam0, &vVar0, &vVar3, 2);
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iParam0, vVar0, vVar3 + Vector(fParam1, 0f, 0f), 2);
		}
	}
}

void func_1374(int iParam0)
{
	PED::SET_PED_RESET_FLAG(*iParam0, 234, true);
}

void func_1375()
{
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_135))
	{
		GRAPHICS::SET_PARTICLE_FX_LOOPED_OFFSETS(iLocal_135, 0f, 0f, -func_1922(PED::GET_PED_BONE_COORDS(iLocal_111, 6884, vLocal_59)), vLocal_59);
	}
}

bool func_1376(char[4] cParam0)
{
	func_1340(1, iLocal_999 > 1);
	switch (iLocal_999)
	{
		case 0:
			iLocal_1003 = __LIB_11__::func_347("MOB4_UC_EXITSKIFF", joaat("INPUT_ENTER"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			__LIB_1__::func_221(iLocal_1003, 1, 1);
			__LIB_1__::func_382(iLocal_1003, 1, 1);
			__LIB_4__::func_89(&uLocal_1010, 0);
			iLocal_999 = 1;
			break;
		case 1:
			if (__LIB_9__::func_178(&uLocal_1010) > 20f)
			{
				__LIB_1__::func_221(iLocal_1003, 0, 1);
				__LIB_1__::func_561(&uLocal_1010);
				__LIB_9__::func_205(cParam0, "MOB4_DROWN_JULES", "", 1, 0);
				iLocal_999 = 1;
			}
			else if (__LIB_1__::func_514(iLocal_1003, 1))
			{
				__LIB_1__::func_281(&iLocal_1003, 1, 1);
				func_1299(iLocal_315);
				__LIB_1__::func_561(&uLocal_1010);
				iLocal_999 = 2;
			}
			break;
		case 2:
			if (ENTITY::IS_ENTITY_IN_WATER(Global_35) || __LIB_11__::func_337(iLocal_315))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_114, false);
				ENTITY::FREEZE_ENTITY_POSITION(Global_35, false);
				iLocal_999 = 3;
			}
			break;
		case 3:
			if (__LIB_11__::func_337(iLocal_315) && !CAM::IS_GAMEPLAY_HINT_ACTIVE())
			{
				PED::SET_PED_LEG_IK_MODE(Global_35, 2);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
				if (!CAM::_0xA24C1D341C6E0D53(1, 0, 0))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(Global_35, iLocal_111, 0, -1f, -1f, -1f);
				}
				func_933();
				iLocal_999 = 4;
			}
			break;
		case 4:
			return true;
		case 5:
			break;
	}
	return false;
}

void func_1377()
{
	float fVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_114))
	{
		if (__LIB_0__::func_272(iLocal_111, 0))
		{
			if (iLocal_1000 > 5 && iLocal_1001 < 7)
			{
				switch (__LIB_2__::func_431(iLocal_114, ENTITY::GET_ENTITY_COORDS(iLocal_111, true, false), 0.999f))
				{
					case 0:
						break;
					case 2:
						fVar0 = (ENTITY::GET_ENTITY_HEADING(iLocal_114) - 0.15f);
						ENTITY::SET_ENTITY_HEADING(iLocal_114, fVar0);
						break;
					case 1:
					case 3:
						fVar0 = (ENTITY::GET_ENTITY_HEADING(iLocal_114) + 0.15f);
						ENTITY::SET_ENTITY_HEADING(iLocal_114, fVar0);
						break;
				}
			}
		}
	}
}

void func_1378(vector3 vParam0)
{
	if (__LIB_0__::func_272(Global_35, 0))
	{
		if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1))
		{
			__LIB_17__::func_743(Global_35, 1);
			func_1342(Global_35, vLocal_71, vParam0, joaat("MOTIONSTATE_ACTIONMODE_IDLE"));
		}
	}
	if (__LIB_0__::func_272(iLocal_108, 0))
	{
		if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_108, -1))
		{
			__LIB_17__::func_743(iLocal_108, 1);
			func_1342(iLocal_108, vLocal_74, vParam0, joaat("MOTIONSTATE_ACTIONMODE_IDLE"));
		}
	}
}

void func_1379(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	if (__LIB_0__::func_272(iParam0, 0))
	{
		iVar0 = 0;
		iVar0 = WEAPON::_0x9F67929D98E7C6E8(iParam0, joaat("GROUP_REVOLVER"), 0, 1);
		if (iVar0 == 0)
		{
			iVar0 = WEAPON::_0x9F67929D98E7C6E8(iParam0, joaat("GROUP_PISTOL"), 0, 1);
		}
		if (iVar0 == 0)
		{
			if (iParam2 != 0)
			{
				if (WEAPON::_0x705BE297EEBDB95D(iParam2))
				{
					iVar0 = iParam2;
				}
			}
		}
		WEAPON::SET_CURRENT_PED_WEAPON(iParam0, iVar0, bParam1, 0, false, false);
	}
}

void func_1380()
{
	Local_1030[0 /*4*/] = 0;
	Local_1030[0 /*4*/].f_1 = 0;
	Local_1030[0 /*4*/].f_2 = 10f;
	Local_1030[0 /*4*/].f_3 = 0;
	Local_1030[1 /*4*/] = 35;
	Local_1030[1 /*4*/].f_1 = 70;
	Local_1030[1 /*4*/].f_2 = 1.5f;
	Local_1030[1 /*4*/].f_3 = 35;
	Local_1030[2 /*4*/] = 70;
	Local_1030[2 /*4*/].f_1 = 140;
	Local_1030[2 /*4*/].f_2 = 1.25f;
	Local_1030[2 /*4*/].f_3 = 50;
	Local_1030[3 /*4*/] = 140;
	Local_1030[3 /*4*/].f_1 = 210;
	Local_1030[3 /*4*/].f_2 = 0.75f;
	Local_1030[3 /*4*/].f_3 = 65;
}

void func_1381()
{
	sLocal_1083[0] = "TourniquetIdle";
	sLocal_1083[1] = "TourniquetTurn";
	sLocal_1083[2] = "BandageStart";
	sLocal_1083[3] = "ApplyBandage";
	sLocal_1083[4] = "AttachBandage";
	sLocal_1083[5] = "Pressure";
	sLocal_1083[6] = "Speed";
	sLocal_1083[7] = "Progress";
	sLocal_1083[8] = "Rotation";
	sLocal_1083[9] = "PressureLeft";
	sLocal_1083[10] = "PressureRight";
}

void func_1382()
{
	sLocal_1095[0] = "Jules_VOFX_Pain_Small";
	sLocal_1095[1] = "Jules_VOFX_Pain_Medium";
	sLocal_1095[2] = "Jules_VOFX_Pain_Large";
}

void func_1383(int iParam0, int iParam1, bool bParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iParam0, iParam1, bParam2);
	}
}

void func_1386()
{
	switch (iLocal_1024)
	{
		case 1:
			if (iLocal_1025 != 2)
			{
				if (!PAD::_IS_USING_KEYBOARD(0))
				{
					iLocal_1025 = 2;
				}
			}
			break;
		case 2:
			if (iLocal_1025 != 1)
			{
				if (PAD::_IS_USING_KEYBOARD(0))
				{
					iLocal_1025 = 1;
				}
			}
			break;
	}
}

void func_1387(char[4] cParam0)
{
	switch (__LIB_8__::func_618(cParam0))
	{
		case 1:
			if (func_1400(cParam0, "MOB4_ATK_01", 1f, 1073741824 /* Float: 2f */, 0, 0))
			{
				func_1258(cParam0, 16, 5f);
				__LIB_1__::func_561(&uLocal_86);
				__LIB_9__::func_195(cParam0, -1);
			}
			break;
		case 2:
			if (__LIB_11__::func_25(iLocal_327, 7.5f) || !func_1335(iLocal_327))
			{
				if (func_1400(cParam0, "MOB4_IG14_B", 0, 1073741824 /* Float: 2f */, 0, 0))
				{
					__LIB_9__::func_195(cParam0, -1);
				}
			}
			break;
		case 3:
			if (func_1400(cParam0, "MOB4_IG15_A", 0, 1073741824 /* Float: 2f */, 0, 0))
			{
				__LIB_9__::func_195(cParam0, -1);
			}
			break;
		case 4:
			if (func_1400(cParam0, "MOB4_ATK_02", 0, 1073741824 /* Float: 2f */, 0, 0))
			{
				__LIB_9__::func_195(cParam0, 5);
			}
			break;
		case 5:
			if (func_1927())
			{
				func_1400(cParam0, "MOB4_GRETURN", 5f, 1073741824 /* Float: 2f */, 0, 1);
			}
			else
			{
				func_1310();
				__LIB_9__::func_195(cParam0, -1);
			}
			break;
		case 6:
			if (func_1400(cParam0, "MOB4_GFLEE", 1f, 1073741824 /* Float: 2f */, 1, 0))
			{
				__LIB_9__::func_195(cParam0, 51);
			}
			break;
	}
}

void func_1388(char[4] cParam0)
{
	if (__LIB_6__::func_889(cParam0) == 1)
	{
		func_1329(0.4f);
	}
	else if (iLocal_730 > 0)
	{
		func_1329(0.1f);
	}
	else
	{
		func_1329(0.5f);
	}
}

void func_1389(char[4] cParam0)
{
	if ((func_1927() && !func_1335(iLocal_328)) && !func_1312("MOB4_ATK_01"))
	{
		func_1928(cParam0);
		func_1929(cParam0);
	}
}

void func_1390(char[4] cParam0)
{
	if (__LIB_0__::func_272(Local_694, 0))
	{
		if (iLocal_734 >= 5)
		{
			if (!STATS::CHAL_MISSION_IS_GOAL_COMPLETE(joaat("MOB4"), joaat("MOB4_SHOOTGATOR3X")))
			{
				__LIB_8__::func_720(cParam0, joaat("MOB4_SHOOTGATOR3X"));
			}
		}
	}
}

bool func_1391(char[4] cParam0, struct<2> Param1, float fParam3, bool bParam4)
{
	vector3 vVar0;
	if (__LIB_0__::func_272(Global_35, 0))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 1, true);
	}
	func_1931(175, 1101004800 /* Float: 20f */);
	switch (iLocal_730)
	{
		case 0:
			iLocal_107 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_694);
			MAP::_BLIP_SET_MODIFIER(iLocal_107, 1995761918);
			ENTITY::FREEZE_ENTITY_POSITION(Local_694, false);
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_694);
			Local_694.f_12 = 0;
			func_1344(Local_694, 1.5f);
			func_1518(&Local_694, 0);
			func_1378(ENTITY::GET_ENTITY_COORDS(Local_694, true, false));
			func_1361(0);
			func_1277(iLocal_108, joaat("WEAPON_REVOLVER_SCHOFIELD_DUTCH"), 1, 1, 0, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
			func_1277(iLocal_108, joaat("WEAPON_REVOLVER_SCHOFIELD_DUTCH_DUALWIELD"), 1, 1, 1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
			WEAPON::SET_CURRENT_PED_WEAPON(iLocal_108, joaat("WEAPON_REVOLVER_SCHOFIELD_DUTCH"), true, 0, false, false);
			WEAPON::SET_CURRENT_PED_WEAPON(iLocal_108, joaat("WEAPON_REVOLVER_SCHOFIELD_DUTCH_DUALWIELD"), true, 1, false, false);
			func_432(1);
			ENTITY::SET_ENTITY_INVINCIBLE(Local_694, false);
			TASK::TASK_LOOK_AT_ENTITY(Global_35, Local_694, -1, 0, 51, 0);
			TASK::TASK_LOOK_AT_ENTITY(iLocal_108, Local_694, -1, 0, 51, 0);
			func_1932();
			iLocal_731 = 0;
			fLocal_736 = __LIB_0__::func_665(Local_694, iLocal_114, 0, 1);
			iLocal_730 = 1;
			break;
		case 1:
			func_1933(iLocal_114, 2.5f, 22f, 0, 0.2f, -1105618534 /* Float: -0.15f */);
			func_1934(fLocal_736);
			func_1935(1);
			CAM::_0xE28F73212A813E82(Local_694, 2, 0, 0);
			if (!__LIB_0__::func_491(Local_694, -2015108952))
			{
				if (__LIB_11__::func_20(1024))
				{
					TASK::TASK_GOTO_ENTITY_OFFSET_XY(Local_694, iLocal_114, -1, 0.5f, Param1, Param1.f_1, 1.5f, 68);
				}
				else
				{
					TASK::TASK_GOTO_ENTITY_OFFSET_XY(Local_694, iLocal_114, -1, 0.5f, Param1, Param1.f_1, 2f, 68);
				}
			}
			if (!__LIB_0__::func_491(iLocal_108, 242628503) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_108, -1))
			{
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_108, 27, true);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_131);
				TASK::TASK_AIM_AT_ENTITY(0, Local_694, 1500, 0, 1);
				TASK::TASK_SHOOT_AT_ENTITY(0, Local_694, -1, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_131);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_108, iLocal_131);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_131);
			}
			if (func_1795(22))
			{
				if (Local_694.f_12 > 0)
				{
					func_1230();
				}
			}
			if (func_1936(4.5f, 0) || (iLocal_735 > 3000 && bParam4))
			{
				if (iLocal_735 < 400)
				{
					vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_114, ENTITY::GET_ENTITY_COORDS(Local_694, true, false)) };
					if (vVar0.x < 0f)
					{
						func_1937(iLocal_108);
						ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_326, "bPortside", true, false);
					}
					else
					{
						func_1937(Global_35);
						ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_326, "bPortside", false, false);
					}
					TASK::CLEAR_PED_TASKS(iLocal_108, true, false);
					func_1299(iLocal_326);
					func_1938();
					__LIB_1__::func_561(&(Local_694.f_8));
					__LIB_1__::func_561(&uLocal_476);
					AUDIO::PLAY_ANIMAL_VOCALIZATION(Local_694, "ANGRY", false);
					iLocal_731 = 6;
					iLocal_730 = 5;
				}
				else
				{
					TASK::CLEAR_PED_TASKS(iLocal_108, true, false);
					__LIB_1__::func_561(&(Local_694.f_8));
					__LIB_1__::func_561(&uLocal_476);
					func_1519(Local_694, 1, 1);
					Local_694.f_12 = 0;
					iLocal_735 = 0;
					iLocal_731 = 6;
					MAP::_BLIP_SET_MODIFIER(iLocal_107, -1269631044);
					if (bParam4)
					{
						iLocal_730 = 3;
					}
					else
					{
						ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Local_694, false, false);
						iLocal_730 = 2;
					}
				}
			}
			break;
		case 2:
			func_1935(0);
			__LIB_4__::func_89(&(Local_694.f_8), 0);
			if (func_1936((4.5f * 0.75f), 0) || __LIB_9__::func_178(&(Local_694.f_8)) > 5f)
			{
				ENTITY::SET_ENTITY_INVINCIBLE(Local_694, true);
				PLAYER::_0xAE637BB8EF017875(PLAYER::GET_PLAYER_INDEX(), 1);
				AUDIO::PLAY_ANIMAL_VOCALIZATION(Local_694, "GROWL", false);
				__LIB_1__::func_561(&(Local_694.f_8));
				func_1518(&Local_694, 1);
				iLocal_730 = 4;
			}
			break;
		case 3:
			func_1935(0);
			__LIB_4__::func_89(&(Local_694.f_8), 0);
			if (__LIB_9__::func_178(&(Local_694.f_8)) > 2.5f)
			{
				iLocal_730 = 4;
			}
			else if (!__LIB_0__::func_491(Local_694, 518218985))
			{
				TASK::TASK_SMART_FLEE_PED(Local_694, Global_35, 45f, 8000, 8, 3f, 0);
			}
			break;
		case 4:
			func_1935(0);
			if (func_1939(Local_694, &uLocal_476, 1.5f, 0, 2.5f, 1.5f) || func_1940(ENTITY::GET_ENTITY_COORDS(Local_694, true, false), 0) > 1f)
			{
				TASK::CLEAR_PED_TASKS(Local_694, true, false);
				ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Local_694, true, false);
				__LIB_3__::func_10(Global_35);
				__LIB_3__::func_10(iLocal_108);
				__LIB_1__::func_561(&(Local_694.f_8));
				__LIB_1__::func_561(&uLocal_476);
				func_1941(iLocal_136);
				func_1361(1);
				func_432(0);
				iLocal_730 = 7;
			}
			break;
		case 5:
			func_1935(0);
			if (func_1942(cParam0, 1, (ANIMSCENE::GET_ANIM_SCENE_BOOL(iLocal_326, "bPortside") && __LIB_6__::func_864(cParam0) == 6)))
			{
				iLocal_730 = 6;
			}
			break;
		case 6:
			break;
		case 7:
			return true;
	}
	return false;
}

bool func_1392(char[4] cParam0)
{
	switch (iLocal_1026)
	{
		case 0:
			func_1340(1, 1);
			if (func_1943(Global_35, 1) && func_1944())
			{
				__LIB_4__::func_89(&uLocal_80, 0);
				if (__LIB_9__::func_178(&uLocal_80) > 0.5f)
				{
					func_1945();
					if (func_1299(iLocal_327))
					{
						VEHICLE::_0xE78993FF9022C064(iLocal_114);
						__LIB_9__::func_195(cParam0, 2);
						__LIB_1__::func_561(&uLocal_80);
						iLocal_1118 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), false);
						iLocal_1026 = 1;
					}
				}
			}
			break;
		case 1:
			if (iLocal_1023 <= 0)
			{
				if (__LIB_11__::func_25(iLocal_327, 2.9f))
				{
					iLocal_1023 = func_1946();
					if (iLocal_1023 > 0 && iLocal_1023 < 5)
					{
						ANIMSCENE::SET_ANIM_SCENE_INT(iLocal_327, "CameraIndex", iLocal_1023, false);
					}
					__LIB_11__::func_335(iLocal_325);
				}
			}
			if (func_1339(iLocal_110, iLocal_327, "CreoleCaptain"))
			{
				__LIB_11__::func_28(&iLocal_110, &iLocal_114, -1, 1);
			}
			if (func_1339(Global_35, iLocal_327, "ARTHUR"))
			{
				func_1947(Global_35, iLocal_114, sLocal_47, sLocal_55);
			}
			if (func_1339(iLocal_111, iLocal_327, "Jules"))
			{
				__LIB_11__::func_335(iLocal_325);
				func_1947(iLocal_111, iLocal_114, sLocal_48, sLocal_56);
			}
			if (func_1339(iLocal_108, iLocal_327, "Dutch"))
			{
				func_1947(iLocal_108, iLocal_114, sLocal_49, sLocal_57);
			}
			if (func_1339(iLocal_129, iLocal_327, "tourniquet"))
			{
				func_1947(iLocal_129, iLocal_114, sLocal_50, sLocal_58);
			}
			if (__LIB_11__::func_337(iLocal_327) && func_1948())
			{
				__LIB_11__::func_28(&iLocal_110, &iLocal_114, -1, 1);
				if (!__LIB_0__::func_491(iLocal_110, -235832601))
				{
					TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iLocal_110, iLocal_114, sLocal_38, 0, 4, 0, -1, 0.5f, 0, 1073741824 /* Float: 2f */, 0);
				}
				func_1211(Local_694, func_212(7, 1), 2, 1073741824 /* Float: 2f */);
				iLocal_731 = 0;
				iLocal_730 = 0;
				HUD::_HIDE_HUD_COMPONENT(372886907);
				func_1949();
				__LIB_9__::func_948(cParam0, iLocal_328);
				iLocal_1026 = 2;
			}
			break;
		case 2:
			if (func_1950(cParam0))
			{
				iLocal_1026 = 3;
			}
			break;
		case 3:
			if (func_1951(cParam0))
			{
				func_1952();
				func_1953();
				func_1299(iLocal_328);
				iLocal_1026 = 4;
			}
			break;
		case 4:
			if (bLocal_1100)
			{
				if (func_1335(iLocal_328))
				{
					if (__LIB_11__::func_25(iLocal_328, 1f))
					{
						bLocal_1100 = false;
						CAM::RENDER_SCRIPT_CAMS(false, true, 3000, false, false, 0);
						HUD::_DISPLAY_HUD_COMPONENT(372886907);
					}
					else
					{
						__LIB_3__::func_595(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_114, vLocal_1115));
					}
				}
			}
			if (!__LIB_0__::func_491(iLocal_110, -235832601))
			{
				TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iLocal_110, iLocal_114, sLocal_38, 0, 0, 2056, -1, 0.5f, 0, 1073741824 /* Float: 2f */, 0);
			}
			if (__LIB_11__::func_25(iLocal_328, 15f))
			{
				func_1391(cParam0, vLocal_59, 1);
			}
			if (func_1339(Global_35, iLocal_328, "ARTHUR"))
			{
				__LIB_17__::func_743(Global_35, 1);
				if (!PED::IS_PED_ON_SPECIFIC_VEHICLE(Global_35, iLocal_114))
				{
					func_1342(Global_35, vLocal_71, ENTITY::GET_ENTITY_COORDS(Local_694, true, false), joaat("MOTIONSTATE_ACTIONMODE_IDLE"));
				}
				else
				{
					PED::FORCE_PED_MOTION_STATE(Global_35, joaat("MOTIONSTATE_ACTIONMODE_IDLE"), false, 0, false);
				}
			}
			if (func_1339(iLocal_108, iLocal_328, "Dutch"))
			{
				TASK::TASK_AIM_AT_COORD(iLocal_108, func_376(7, 1), -1, 0, 1);
				__LIB_17__::func_743(iLocal_108, 1);
				if (!PED::IS_PED_ON_SPECIFIC_VEHICLE(iLocal_108, iLocal_114))
				{
					func_1342(iLocal_108, vLocal_74, ENTITY::GET_ENTITY_COORDS(Local_694, true, false), joaat("MOTIONSTATE_ACTIONMODE_IDLE"));
				}
				else
				{
					PED::FORCE_PED_MOTION_STATE(iLocal_108, joaat("MOTIONSTATE_ACTIONMODE_IDLE"), false, 0, false);
				}
			}
			if (__LIB_11__::func_354(iLocal_328, "IG16_TEND_WOUND_EXT_JULES_IDLE"))
			{
				iLocal_1026 = 5;
				return true;
			}
			break;
		case 6:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_328))
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_328, false))
				{
					func_1953();
					func_1299(iLocal_328);
				}
				else if (ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_328) > 10.5f)
				{
					__LIB_9__::func_205(cParam0, "MOB4_BLEED_JULES", "", 1, 0);
					__LIB_6__::func_876(cParam0, 30);
				}
			}
			break;
		case 5:
			return true;
	}
	if (func_1954())
	{
		func_1955();
		iLocal_1027 = 8;
		iLocal_1028 = 9;
	}
	func_1956();
	func_1957();
	func_1958();
	CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
	return false;
}

void func_1393()
{
	__LIB_3__::func_760();
}

void func_1394(char[4] cParam0)
{
	__LIB_9__::func_154(cParam0, Global_35, "ARTHUR", 0, 0, 0, 0);
	__LIB_9__::func_154(cParam0, iLocal_110, "CreoleCaptain", 0, 0, 0, 0);
	__LIB_9__::func_154(cParam0, iLocal_108, "Dutch", 0, 0, 0, 0);
	__LIB_9__::func_154(cParam0, iLocal_111, "Jules", 0, 0, 0, 0);
	__LIB_9__::func_62(cParam0, iLocal_114, "SKIFF", 0, 0, 0, 0);
	__LIB_9__::func_62(cParam0, iLocal_115, "p_skiff02x", 0, 0, 0, 0);
}

bool func_1395()
{
	if (__LIB_5__::func_543(1) > 1)
	{
		return false;
	}
	return true;
}

int func_1397(char[4] cParam0)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(cParam0->f_7375.f_804))
	{
		func_1960(cParam0, cParam0->f_7375.f_804, 0);
		return 1;
	}
	return 0;
}

int func_1399(char[4] cParam0, bool bParam1)
{
	if (__LIB_11__::func_20(128))
	{
		STREAMING::REQUEST_COLLISION_AT_COORD(func_376(8, 1));
		CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
		HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
		PED::_0xF7EA250B9A919E03(joaat("CROUCH"), Global_35);
		PED::_0xF7EA250B9A919E03(-755751827, Global_35);
		switch (iLocal_1127)
		{
			case 0:
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_329) && (func_1335(cParam0->f_7375.f_804) || bParam1))
				{
					AUDIO::LOAD_STREAM("CLOUD_BED", "DEATH_FAIL_RESPAWN_SOUNDS");
					iLocal_1131 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), vLocal_1120, vLocal_1123, 30f, false, 2);
					iLocal_1127 = 1;
				}
				break;
			case 1:
				if (((!func_1335(cParam0->f_7375.f_804) || __LIB_11__::func_25(cParam0->f_7375.f_804, 79f)) || __LIB_11__::func_337(cParam0->f_7375.f_804)) || bParam1)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 0, false);
					if (func_1961())
					{
						__LIB_4__::func_89(&uLocal_1128, 0);
						iLocal_1127 = 2;
					}
				}
				break;
			case 2:
				if (__LIB_11__::func_25(iLocal_329, 2f))
				{
					func_1211(Global_35, func_212(8, 1), 2, 1073741824 /* Float: 2f */);
					func_1211(iLocal_112, func_212(8, 2), 2, 1073741824 /* Float: 2f */);
					TASK::TASK_SET_CROUCH_MOVEMENT(Global_35, true, 0, true);
					PED::FORCE_PED_MOTION_STATE(Global_35, joaat("MOTIONSTATE_CROUCH_IDLE"), false, 0, false);
					CLOCK::SET_CLOCK_TIME(6, 0, 0);
					CAM::SET_CAM_ACTIVE(iLocal_1131, true);
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
					func_1962();
					__LIB_1__::func_561(&uLocal_1128);
					iLocal_1127 = 3;
				}
				break;
			case 3:
				if (!func_1335(iLocal_329) || __LIB_11__::func_25(iLocal_329, 8.5f))
				{
					iLocal_1127 = 4;
					AUDIO::STOP_STREAM(iLocal_1126);
					AUDIO::STOP_AUDIO_SCENE("CME_context_mob4_TimeLapse_Skyline_Scene");
				}
				break;
			case 4:
				if (__LIB_11__::func_337(iLocal_329))
				{
					iLocal_1127 = 5;
				}
				break;
			case 5:
				__LIB_4__::func_89(&uLocal_1128, 0);
				if (__LIB_9__::func_178(&uLocal_1128) > 3f)
				{
					__LIB_3__::func_595(2180.259f, -1066.952f, 43.70705f);
					CAM::SET_CAM_ACTIVE(iLocal_1131, false);
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					__LIB_1__::func_561(&uLocal_1128);
					iLocal_1127 = 6;
				}
				break;
			case 6:
				return 1;
		}
	}
	return 0;
}

bool func_1400(char[4] cParam0, char* sParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
{
	if (!AUDIO::_0xA2CAC9DEF0195E6F(1) || bParam4)
	{
		__LIB_4__::func_89(&uLocal_95, 0);
		if (__LIB_9__::func_178(&uLocal_95) > fParam2)
		{
			if (bParam4)
			{
				if (AUDIO::_0xA2CAC9DEF0195E6F(1))
				{
					AUDIO::_0x36559148B78853B3(1, 0, 0);
				}
			}
			if (__LIB_8__::func_711(cParam0, sParam1, 0))
			{
				func_1310();
				return true;
			}
			else if (__LIB_9__::func_178(&uLocal_95) > (fParam2 + fParam3))
			{
				func_1310();
				return true;
			}
		}
	}
	else if (!bParam5)
	{
		__LIB_4__::func_89(&uLocal_98, 0);
		if (__LIB_9__::func_178(&uLocal_98) > 30f)
		{
			AUDIO::_0x36559148B78853B3(1, 0, 0);
			__LIB_1__::func_561(&uLocal_98);
			return true;
		}
	}
	return false;
}

void func_1410()
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
			func_1277(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		}
		else
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		}
		return;
	}
	iVar0 = func_1972(6291456, 0);
	if (__LIB_0__::func_154(iVar0))
	{
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, true))
		{
			func_1277(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		}
		else
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		}
	}
}

int func_1433(var uParam0, int iParam1, int iParam2)
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
		return func_1433(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

int func_1464(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
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
				func_876(Global_1360165[iParam0 /*1157*/], vVar0, fParam6, 2, 1073741824 /* Float: 2f */);
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
			func_1991(iParam0, Global_1360165[iParam0 /*1157*/]);
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

void func_1465(char[4] cParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
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
	func_1994(cParam0, iParam1, iParam2, __LIB_1__::func_464(iParam2, 0));
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

void func_1496(int iParam0, int iParam1)
{
	if (Global_1935630.f_12)
	{
		return;
	}
	__LIB_0__::func_732(2000);
	Global_16 = 0;
	__LIB_0__::func_109();
	ENTITY::SET_ENTITY_INVINCIBLE(Global_35, __LIB_0__::func_1(*iParam0, 8));
	if (!__LIB_0__::func_1(*iParam0, 1))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
	}
	PAD::_0xA0CEFCEA390AAB9B(0);
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
	if (__LIB_0__::func_1(*iParam0, 2) || __LIB_0__::func_1(*iParam0, 4))
	{
		HUD::_HIDE_HUD_COMPONENT(-1679307491);
	}
	else
	{
		HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
	}
	if (!__LIB_0__::func_1(*iParam0, 16))
	{
		__LIB_0__::func_733(1);
	}
	if (__LIB_0__::func_1(*iParam0, 32))
	{
		func_616(Global_35, joaat("CLOTHING_ITEM_NECKWEAR_NONE"), 0, 1742327865, 0, 1, 0, 0, 1, 0);
		func_2033(joaat("KIT_BANDANA"), 0);
	}
	__LIB_1__::func_550(&(Global_1946804.f_1497), Global_35, 1, 49217, 1, 1, 1);
	if (Global_1359489.f_16 & 4194304 != 0)
	{
		Global_1359489.f_16 = (Global_1359489.f_16 - Global_1359489.f_16 & 4194304);
	}
	*iParam0 = 0;
}

bool func_1500(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	if (__LIB_4__::func_562(uParam0, 32768))
	{
		return true;
	}
	if (__LIB_0__::func_78(uParam0) >= 3)
	{
		uParam0->f_2286 = __LIB_1__::func_394(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1);
		uParam0->f_2287 = PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true);
		uParam0->f_2289 = PED::IS_PED_IN_ANY_VEHICLE(Global_35, true);
		if (uParam0->f_2287)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_1935630.f_40))
			{
				uParam0->f_2288 = Global_1935630.f_40;
			}
			else
			{
				uParam0->f_2288 = PED::GET_MOUNT(Global_35);
			}
		}
		if (uParam0->f_2289)
		{
			uParam0->f_2291 = PED::GET_VEHICLE_PED_IS_IN(Global_35, true);
		}
		uParam0->f_2292 = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35);
		__LIB_5__::func_62(uParam0);
	}
	if (__LIB_0__::func_78(uParam0) < 10)
	{
		if (__LIB_0__::func_78(uParam0) == 3)
		{
			__LIB_9__::func_911(uParam0, iParam5, bParam6);
		}
		else if (__LIB_0__::func_78(uParam0) > 3)
		{
			if (__LIB_0__::func_81(uParam0) == 0)
			{
				if (!__LIB_4__::func_562(uParam0, 524288))
				{
					func_2037(uParam0);
				}
				else if (CAM::IS_SCREEN_FADED_OUT())
				{
					__LIB_4__::func_574(uParam0, 4);
					__LIB_0__::func_115(uParam0, 10);
					__LIB_5__::func_382(uParam0, iParam5);
					return true;
				}
			}
			if (!__LIB_4__::func_562(uParam0, 67108864) && !Global_1935630.f_12)
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			if (!__LIB_0__::func_274(&(uParam0->f_1406[uParam0->f_2074 /*41*/]), 16))
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
			if (uParam0->f_2074 >= 0)
			{
				if (!__LIB_0__::func_274(&(uParam0->f_1406[uParam0->f_2078 /*41*/]), 32768))
				{
					HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
				}
				if (__LIB_4__::func_575(uParam0, uParam0->f_2074))
				{
					if (__LIB_4__::func_576(uParam0) < 7 && uParam0->f_2078 >= 0)
					{
						__LIB_5__::func_377(uParam0, uParam0->f_1406[uParam0->f_2078 /*41*/].f_27, uParam0->f_1735[uParam0->f_2078 /*22*/].f_1, 1065353216 /* Float: 1f */);
					}
				}
				else if (uParam0->f_2078 >= 0)
				{
					__LIB_5__::func_377(uParam0, uParam0->f_1406[uParam0->f_2078 /*41*/].f_27, uParam0->f_1735[uParam0->f_2078 /*22*/].f_1, 1065353216 /* Float: 1f */);
				}
				__LIB_9__::func_54(uParam0);
			}
		}
	}
	bVar0 = __LIB_5__::func_500(uParam0, iParam5, bParam6);
	bVar1 = CAM::_0xA24C1D341C6E0D53(1, 0, 0);
	if (bVar0)
	{
		if ((!__LIB_4__::func_562(uParam0, 268435456) && bVar1) && !__LIB_4__::func_562(uParam0, 262144))
		{
			bVar3 = INTERIOR::IS_VALID_INTERIOR(uParam0->f_2292);
			if (uParam0->f_2074 >= 0)
			{
				iVar4 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_1406[uParam0->f_2074 /*41*/].f_1);
				if ((INTERIOR::IS_VALID_INTERIOR(iVar4) && bVar3) && iVar4 == uParam0->f_2292)
				{
					bVar2 = true;
				}
			}
			if (!bVar3 || bVar2)
			{
				__LIB_4__::func_532(uParam0, 131072);
				__LIB_4__::func_532(uParam0, 268435456);
			}
		}
		if (__LIB_4__::func_577(uParam0, 64) || (uParam0->f_2074 >= 0 && !__LIB_0__::func_274(&(uParam0->f_1406[uParam0->f_2074 /*41*/]), 524288)))
		{
			if (CAM::_0xA2B1C7EF759A63CE() > 0f || __LIB_0__::func_81(uParam0) == 0)
			{
				HUD::_0xC9CAEAEEC1256E54(-1679307491);
				CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			}
		}
	}
	if (__LIB_0__::func_78(uParam0) == 3 || __LIB_4__::func_562(uParam0, 131072))
	{
		__LIB_4__::func_984(uParam0);
		if (!__LIB_4__::func_562(uParam0, 262144))
		{
			if ((bVar0 && __LIB_4__::func_562(uParam0, 65536)) || __LIB_4__::func_562(uParam0, 131072))
			{
				__LIB_4__::func_532(uParam0, 32768);
				__LIB_4__::func_574(uParam0, 4);
				__LIB_0__::func_115(uParam0, 10);
				uParam0->f_2159 = 1;
				__LIB_5__::func_382(uParam0, iParam5);
				return true;
			}
		}
	}
	if (__LIB_0__::func_78(uParam0) >= 3)
	{
		__LIB_11__::func_110(uParam0, iParam5);
		__LIB_4__::func_578(uParam0);
		if (!__LIB_4__::func_579(uParam0, 1))
		{
			__LIB_5__::func_63(uParam0);
		}
		__LIB_4__::func_580(uParam0);
	}
	switch (__LIB_0__::func_78(uParam0))
	{
		case 0:
			__LIB_5__::func_501(uParam0, Param1, iParam5);
			break;
		case 1:
			__LIB_6__::func_920(uParam0);
			break;
		case 2:
			__LIB_9__::func_379(uParam0);
			break;
		case 3:
			if (__LIB_4__::func_581(uParam0))
			{
				__LIB_3__::func_155(2);
				__LIB_5__::func_377(uParam0, uParam0->f_1406[uParam0->f_2074 /*41*/].f_27, uParam0->f_1735[uParam0->f_2074 /*22*/].f_1, 1065353216 /* Float: 1f */);
				__LIB_2__::func_259(&(uParam0->f_2262));
				__LIB_4__::func_574(uParam0, 1);
				__LIB_4__::func_582();
				__LIB_0__::func_115(uParam0, 5);
			}
			break;
		case 5:
		case 6:
		case 8:
			PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
			if (!__LIB_4__::func_562(uParam0, 67108864))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			PED::SET_PED_RESET_FLAG(Global_35, 264, true);
			PED::SET_PED_RESET_FLAG(Global_35, 321, true);
			if (__LIB_0__::func_78(uParam0) == 5)
			{
				if (__LIB_4__::func_985(uParam0))
				{
					__LIB_4__::func_574(uParam0, 2);
					__LIB_0__::func_115(uParam0, 6);
				}
			}
			if (__LIB_0__::func_78(uParam0) == 6)
			{
				if (__LIB_4__::func_986(uParam0))
				{
					__LIB_4__::func_574(uParam0, 3);
					__LIB_0__::func_115(uParam0, 8);
				}
			}
			if (uParam0->f_2075 >= 0 || __LIB_9__::func_178(&(uParam0->f_2262)) >= 15f)
			{
				if (__LIB_9__::func_180(uParam0, iParam5))
				{
					if (__LIB_4__::func_583(uParam0))
					{
						uParam0->f_2075 = __LIB_5__::func_64(uParam0);
						__LIB_2__::func_259(&(uParam0->f_2262));
						PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
						HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
						TASK::CLEAR_PED_TASKS(Global_35, true, false);
						__LIB_4__::func_574(uParam0, 6);
						__LIB_0__::func_115(uParam0, 9);
					}
					else
					{
						__LIB_4__::func_574(uParam0, 4);
						__LIB_0__::func_115(uParam0, 10);
						__LIB_5__::func_382(uParam0, iParam5);
						return true;
					}
				}
			}
			break;
		case 9:
			if (__LIB_9__::func_180(uParam0, iParam5))
			{
				__LIB_5__::func_382(uParam0, iParam5);
				__LIB_0__::func_115(uParam0, 10);
				return true;
			}
			break;
		case 10:
			return true;
	}
	return false;
}

bool func_1506(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, var uParam4, char[4] cParam5)
{
	int iVar0;
	__LIB_5__::func_68(uParam4, &cParam0);
	if (__LIB_0__::func_84(uParam4, 2) && !__LIB_0__::func_84(uParam4, 67108864))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SKIP_CUTSCENE"), false);
	}
	if (__LIB_0__::func_81(uParam4) != 1)
	{
		func_2071(uParam4);
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
					__LIB_8__::func_726(uParam4, 4);
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
				__LIB_8__::func_726(uParam4, 3);
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
				__LIB_2__::func_259(&(uParam4->f_1));
				__LIB_8__::func_726(uParam4, 2);
			}
			else
			{
				if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				__LIB_5__::func_350(uParam4);
				if (!__LIB_0__::func_899(&(uParam4->f_1)))
				{
					__LIB_4__::func_89(&(uParam4->f_1), 0);
				}
				else if (__LIB_1__::func_583(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_804);
					}
					__LIB_8__::func_726(uParam4, 4);
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
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_804);
					}
					__LIB_8__::func_726(uParam4, 4);
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
						__LIB_8__::func_726(uParam4, 3);
					}
					else
					{
						SCRIPTS::SHUTDOWN_LOADING_SCREEN();
					}
				}
			}
			else if (__LIB_1__::func_583(&(uParam4->f_1)) >= 60f)
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_804);
				}
				__LIB_8__::func_726(uParam4, 4);
			}
			break;
		case 3:
			func_381(uParam4);
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
				func_2071(uParam4);
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
				func_2085(uParam4);
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
						__LIB_2__::func_259(&(uParam4->f_1));
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
						__LIB_0__::func_88(uParam4, 512);
						__LIB_4__::func_550(uParam4, 67108864, 1);
						__LIB_8__::func_726(uParam4, 4);
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
					func_1496(&(uParam4->f_861), 0);
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
				func_2085(uParam4);
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
						__LIB_8__::func_726(uParam4, 3);
					}
					else if (__LIB_1__::func_583(&(uParam4->f_1)) >= 30f)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_804))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_804, false);
						}
						__LIB_8__::func_726(uParam4, 3);
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
						__LIB_8__::func_726(uParam4, 3);
					}
					else if (__LIB_1__::func_583(&(uParam4->f_1)) >= 30f)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_804))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_804, false);
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
	return false;
}

bool func_1513(char[4] cParam0)
{
	if (!func_868(cParam0, 0, &iLocal_108, 0, 0, 0, 0, 0, 0, -922193456, 1, 0, 1, 0))
	{
		return false;
	}
	if (__LIB_6__::func_864(cParam0) == 7)
	{
		func_1211(iLocal_108, func_212(6, 2), 2, 1073741824 /* Float: 2f */);
	}
	__LIB_9__::func_42(cParam0, iLocal_108, "DUTCH", 0);
	ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_108);
	PED::SET_PED_CONFIG_FLAG(iLocal_108, 265, false);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_108, false);
	func_1863(iLocal_108);
	__LIB_1__::func_551(0, 0);
	__LIB_0__::func_705(0, 1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_108, true);
	PED::SET_PED_ID_RANGE(iLocal_108, 20f);
	ENTITY::SET_CAN_CLIMB_ON_ENTITY(iLocal_108, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_108, 42, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_108, 0, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_108, 81, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_108, 27, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_108, 116, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_108, 30, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_108, 55, true);
	ENTITY::SET_ENTITY_VISIBLE(iLocal_108, true);
	if (__LIB_6__::func_864(cParam0) > 1)
	{
		func_430(iLocal_108, 1);
	}
	if (__LIB_6__::func_864(cParam0) > 5)
	{
		PED::SET_PED_LEG_IK_MODE(iLocal_108, 0);
	}
	WEAPON::_GIVE_WEAPON_TO_PED_2(iLocal_108, joaat("WEAPON_REVOLVER_SCHOFIELD_DUTCH"), -1, false, true, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
	WEAPON::_GIVE_WEAPON_TO_PED_2(iLocal_108, joaat("WEAPON_REVOLVER_SCHOFIELD_DUTCH_DUALWIELD"), -1, false, true, 1, false, 0.5f, 1f, 752097756, true, 0f, false);
	WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(iLocal_108, __LIB_0__::func_214(joaat("WEAPON_REVOLVER_SCHOFIELD_DUTCH")));
	return true;
}

bool func_1514(char[4] cParam0)
{
	if (!__LIB_0__::func_272(iLocal_110, 0))
	{
		iLocal_110 = __LIB_1__::func_545(iLocal_16, func_376(2, 8), func_1831(2, 8), 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		return false;
	}
	if (__LIB_6__::func_864(cParam0) > 2)
	{
		if (!func_1257(iLocal_110, joaat("BLIP_STYLE_COMPANION"), "MOB4_THOMAS", 1, 1, 0))
		{
			return false;
		}
		__LIB_11__::func_336(iLocal_110);
	}
	if (!PED::DOES_GROUP_EXIST(iLocal_133))
	{
		iLocal_133 = PED::CREATE_GROUP(1);
	}
	if (!PED::_0x878B68960C1C2A35(iLocal_110, iLocal_133))
	{
		PED::SET_PED_AS_GROUP_LEADER(iLocal_110, iLocal_133, false);
	}
	__LIB_9__::func_42(cParam0, iLocal_110, "SKIFF_CAPTN", 0);
	func_430(iLocal_110, 1);
	func_1863(iLocal_110);
	ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_110);
	PED::SET_PED_CONFIG_FLAG(iLocal_110, 265, false);
	PED::SET_PED_CONFIG_FLAG(iLocal_110, 23, false);
	PED::SET_PED_CONFIG_FLAG(iLocal_110, 3, false);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_110, true);
	if (__LIB_6__::func_864(cParam0) > 5)
	{
		PED::SET_PED_LEG_IK_MODE(iLocal_110, 0);
	}
	func_434(iLocal_110, 1);
	return true;
}

bool func_1515(char[4] cParam0)
{
	__LIB_9__::func_42(cParam0, Global_35, "ARTHUR", 0);
	func_430(Global_35, 1);
	WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
	func_1325();
	__LIB_1__::func_564(1);
	if (__LIB_6__::func_864(cParam0) > 3)
	{
		func_1277(Global_35, joaat("WEAPON_MELEE_DAVY_LANTERN"), 0, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		PED::SET_PED_CONFIG_FLAG(Global_35, 405, true);
	}
	return true;
}

bool func_1516(char[4] cParam0)
{
	if (!func_868(cParam0, 5, &iLocal_109, 0, 0, 0, 0, 0, 0, -922193456, 0, 0, 1, 0))
	{
		return false;
	}
	__LIB_9__::func_147(cParam0, iLocal_109, 128);
	ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_109);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_109, false);
	ENTITY::SET_ENTITY_VISIBLE(iLocal_109, true);
	func_1277(iLocal_109, joaat("WEAPON_REVOLVER_CATTLEMAN_HOSEA"), 0, 1, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
	func_1277(iLocal_109, joaat("WEAPON_REVOLVER_CATTLEMAN_HOSEA_DUALWIELD"), 0, 1, 1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
	return true;
}

bool func_1517(int iParam0, struct<4> Param1, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, bool bParam10)
{
	if (!iParam0->f_16)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			*iParam0 = __LIB_1__::func_545(iParam5, func_1832(Param1, bParam10, 0, 1036831949 /* Float: 0.1f */), Param1.f_3, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			iParam0->f_13 = MISC::GET_RANDOM_FLOAT_IN_RANGE(10f, 15f);
			iParam0->f_7 = iParam7;
			iParam0->f_6 = iParam6;
			iParam0->f_11 = iParam8;
			return false;
		}
		else
		{
			func_430(*iParam0, 1);
			func_1518(iParam0, bParam10);
			if (bParam9)
			{
				iParam0->f_1 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), *iParam0);
				MAP::_BLIP_SET_MODIFIER(iParam0->f_1, 1271856172);
			}
			TASK::_0xC6170856E54557B2(*iParam0, 1, 1065353216 /* Float: 1f */);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, true);
			PED::SET_PED_CONFIG_FLAG(*iParam0, 265, false);
			PED::SET_PED_CONFIG_FLAG(*iParam0, 186, false);
			PED::SET_PED_CONFIG_FLAG(*iParam0, 87, true);
			ENTITY::SET_ENTITY_MAX_HEALTH(*iParam0, 1200);
			ENTITY::_SET_ENTITY_HEALTH(*iParam0, 1200, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 5, true);
			PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 512, true);
			PED::_0x0F967019CC853BCC(*iParam0, 21030);
			ENTITY::SET_ENTITY_CAN_BE_TARGETED_WITHOUT_LOS(*iParam0, true);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(*iParam0, true, 0f);
			iParam0->f_16 = 1;
		}
	}
	return true;
}

void func_1518(int* iParam0, bool bParam1)
{
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(*iParam0, 19, bParam1);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(*iParam0, 8, !bParam1);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(*iParam0, 18, bParam1);
	PED::_0x96595B36D6A2279B(*iParam0, bParam1);
	iParam0->f_15 = bParam1;
}

void func_1519(int iParam0, bool bParam1, bool bParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		ENTITY::SET_ENTITY_VISIBLE(iParam0, !bParam1);
		if (ENTITY::DOES_ENTITY_EXIST(Global_35))
		{
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iParam0, Global_35, !bParam2);
		}
	}
}

void func_1520()
{
	__LIB_3__::func_557(&iLocal_137, 1818.907f, -1809.143f, 48.754f, 0f, 0f, -29.765f, 8.567f, 12.64f, 9.14f, "MOB4_SHADY_BELLE_ENTER");
	__LIB_3__::func_557(&iLocal_148, 1862.316f, -1835.255f, 42.516f, 0f, 0f, 52.752f, 9.772f, 12.683f, 5f, "MOB4_HORSE_CLEAR");
	__LIB_4__::func_975(&iLocal_138, 2142.554f, -641.192f, 41.61498f, vLocal_59, 15f, 15f, 15f, "MOB4_LAGRAS_PORT_A");
	__LIB_4__::func_975(&iLocal_139, 2170.275f, -619.839f, 41.90318f, vLocal_59, 15f, 15f, 15f, "MOB4_LAGRAS_PORT_B");
	__LIB_3__::func_557(&iLocal_141, 2225.281f, -602.31f, 42.137f, 0f, 0f, 42.784f, 26.385f, 68.058f, 26.099f, "MOB4_CROSS_SWAMP");
	__LIB_3__::func_557(&iLocal_142, 2263.629f, -605.473f, 42.137f, 0f, 0f, -28.007f, 26.385f, 40.008f, 26.099f, "MOB4_CROSS_SWAMP_COMPANION");
	__LIB_3__::func_557(&iLocal_143, 2265.926f, -637.042f, 42.137f, 0f, 0f, -129.93f, 31.987f, 58.313f, 26.099f, "MOB4_CROSS_SWAMP_PLAYER");
	__LIB_4__::func_975(&iLocal_144, 2274.64f, -577.5333f, 40.59103f, vLocal_59, 30f, 30f, 30f, "MOB4_SEARCH_COMPANIONS");
	__LIB_4__::func_975(&iLocal_145, vLocal_62, vLocal_59, 30f, 30f, 30f, "MOB4_SEARCH_PLAYER");
	__LIB_4__::func_975(&iLocal_146, func_376(6, 0), vLocal_59, 30f, 30f, 30f, "MOB4_SEARCH_JULES");
	__LIB_4__::func_975(&iLocal_147, 2264.683f, -672.8705f, 40.49999f, vLocal_59, 25f, 25f, 25f, "MOB4_SKIFF_RETURN");
	__LIB_3__::func_557(&iLocal_140, 2230.819f, -688.559f, 30.844f, 0f, 0f, 5.54431f, 98.862f, 190.899f, 41.29f, "MOB4_SWAMP_ROADS");
}

void func_1521(char[4] cParam0)
{
	if (__LIB_6__::func_864(cParam0) <= 3)
	{
		uLocal_165 = __LIB_1__::func_391(iLocal_141, 0, 0, 0);
		__LIB_3__::func_730(iLocal_141, 0, 0, 0, 0, 0);
		uLocal_166 = __LIB_1__::func_391(iLocal_142, 0, 0, 0);
		__LIB_3__::func_730(iLocal_142, 0, 0, 0, 0, 0);
		uLocal_167 = __LIB_1__::func_391(iLocal_143, 0, 0, 0);
		__LIB_3__::func_730(iLocal_143, 0, 0, 0, 0, 0);
		uLocal_168 = __LIB_1__::func_391(iLocal_144, 0, 0, 0);
		__LIB_3__::func_730(iLocal_144, 0, 0, 0, 0, 0);
	}
	else if (__LIB_6__::func_864(cParam0) > 4)
	{
		uLocal_170 = __LIB_1__::func_391(iLocal_146, 0, 0, 0);
		__LIB_3__::func_730(iLocal_146, 0, 0, 0, 0, 0);
		uLocal_171 = __LIB_1__::func_391(iLocal_147, 0, 0, 0);
		__LIB_3__::func_730(iLocal_147, 0, 0, 0, 0, 0);
	}
	if (__LIB_6__::func_864(cParam0) <= 1)
	{
		uLocal_162 = __LIB_1__::func_391(iLocal_137, 0, 0, 0);
		__LIB_3__::func_730(iLocal_137, 0, 0, 0, 0, 0);
	}
	uLocal_169 = __LIB_1__::func_391(iLocal_145, 0, 0, 0);
	__LIB_3__::func_730(iLocal_145, 0, 0, 0, 0, 0);
	uLocal_163 = __LIB_1__::func_391(iLocal_138, 0, 0, 0);
	__LIB_3__::func_730(iLocal_138, 0, 0, 0, 0, 0);
	uLocal_164 = __LIB_1__::func_391(iLocal_139, 0, 0, 0);
	__LIB_3__::func_730(iLocal_139, 0, 0, 0, 0, 0);
	PATHFIND::_0xC1799FAFD2FDF52B(iLocal_140, 0, 0, 0);
	PERSISTENCE::_0x9D16896F0DBE78A2(VOLUME::_GET_VOLUME_COORDS(iLocal_138), 25f);
	PERSISTENCE::_0x9D16896F0DBE78A2(VOLUME::_GET_VOLUME_COORDS(iLocal_139), 25f);
}

void func_1522(char[4] cParam0)
{
	if (__LIB_6__::func_875(cParam0, 1) && !__LIB_6__::func_872(cParam0, 4))
	{
		if (__LIB_6__::func_864(cParam0) == 0)
		{
			CLOCK::SET_CLOCK_TIME(17, 0, 0);
		}
		else if (__LIB_6__::func_864(cParam0) > 1)
		{
			CLOCK::SET_CLOCK_TIME(21, 0, 0);
		}
	}
}

void func_1523(char[4] cParam0)
{
	if (__LIB_6__::func_864(cParam0) == 0)
	{
		MISC::CLEAR_WEATHER_TYPE_PERSIST();
	}
	else if (__LIB_6__::func_864(cParam0) == 1 || __LIB_6__::func_864(cParam0) > 6)
	{
		MISC::CLEAR_WEATHER_TYPE_PERSIST();
		MISC::_SET_WEATHER_TYPE(joaat("MISTY"), true, true, false, 0f, false);
	}
	else
	{
		MISC::CLEAR_WEATHER_TYPE_PERSIST();
		MISC::_SET_WEATHER_TYPE(joaat("FOG"), true, true, false, 0f, false);
	}
}

int func_1527(char[4] cParam0)
{
	switch (__LIB_6__::func_864(cParam0))
	{
		case 0:
			func_2092(cParam0);
			break;
		case 2:
			func_2093(cParam0);
			break;
		case 4:
			func_2094(cParam0);
			break;
		case 5:
			__LIB_0__::func_11(cParam0);
			break;
		case 25:
			func_2096(cParam0);
			break;
	}
	return 1;
}

bool func_1529(char[4] cParam0)
{
	switch (__LIB_6__::func_864(cParam0))
	{
		case 0:
			func_2097(cParam0);
			break;
		case 2:
			func_2098(cParam0);
			break;
		case 4:
			func_2099(cParam0);
			break;
		case 5:
			func_2100(cParam0);
			break;
		case 25:
			return func_2101(cParam0);
	}
	return true;
}

void func_1531()
{
	if (__LIB_11__::func_348(21, 0, 0, 0))
	{
		if (!__LIB_11__::func_20(64))
		{
			__LIB_11__::func_342(64);
		}
	}
}

void func_1532(char[4] cParam0)
{
	if (func_2103(iLocal_290))
	{
		if (__LIB_6__::func_864(cParam0) == 0)
		{
			if (__LIB_11__::func_551(cParam0, 0, func_2104(cParam0), func_2105(cParam0), 0, 1, 1, joaat("BLIP_STYLE_COMPANION")))
			{
				func_2107(1);
			}
			else
			{
				func_2107(0);
			}
		}
		else if (__LIB_6__::func_864(cParam0) == 1)
		{
			if (func_1855(4) || __LIB_6__::func_889(cParam0) > 2)
			{
				if (__LIB_11__::func_551(cParam0, 0, func_2104(cParam0), func_2105(cParam0), 0, 1, 1, joaat("BLIP_STYLE_COMPANION")))
				{
					func_2107(1);
				}
				else
				{
					func_2107(0);
				}
			}
			else if (func_1855(3))
			{
				if (__LIB_11__::func_549(cParam0, iLocal_112, func_2105(cParam0), 0, 1, 1, joaat("BLIP_STYLE_PLAYER_HORSE"), 1084227584 /* Float: 5f */, 1103626240 /* Float: 25f */))
				{
					func_2107(1);
				}
				else if (__LIB_11__::func_551(cParam0, 0, func_2104(cParam0), func_2105(cParam0), 0, 1, 1, joaat("BLIP_STYLE_COMPANION")))
				{
					func_2107(1);
				}
				else
				{
					func_2107(0);
				}
			}
		}
		else if (((__LIB_6__::func_864(cParam0) == 2 && __LIB_8__::func_663(cParam0, 2) == 5) || func_1855(5)) || func_1855(8))
		{
			if (__LIB_0__::func_272(iLocal_110, 0))
			{
				__LIB_11__::func_109(cParam0, iLocal_110, "MOB4_THOMAS_WARN", "MOB4_SEARCH_FAIL", func_2104(cParam0), func_2105(cParam0), 0, 1, 1, joaat("BLIP_STYLE_COMPANION"), 0);
			}
		}
		else if (__LIB_6__::func_864(cParam0) == 3)
		{
			if (!func_1855(11))
			{
				__LIB_11__::func_232(cParam0, vLocal_62, "MOB4_SEARCH_WARN", "MOB4_SEARCH_FAIL", func_2104(cParam0), func_2105(cParam0), 0, 0, 1, 1, 0);
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iLocal_114))
			{
				__LIB_11__::func_109(cParam0, iLocal_114, "MOB4_OBJ07c", "MOB4_SEARCH_FAIL", func_2104(cParam0), func_2105(cParam0), 0, 1, 1, joaat("BLIP_STYLE_COMPANION"), 0);
			}
		}
	}
}

void func_1533(char[4] cParam0)
{
	if (__LIB_9__::func_178(&uLocal_101) > fLocal_301)
	{
		__LIB_9__::func_208(cParam0, func_1806(iLocal_290), 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
		__LIB_1__::func_561(&uLocal_101);
	}
}

void func_1534(char[4] cParam0)
{
	if (__LIB_0__::func_272(Local_711, 0))
	{
		if (__LIB_6__::func_864(cParam0) > 3)
		{
			if (func_2112(cParam0) > 5f)
			{
				if (__LIB_0__::func_272(iLocal_110, 0))
				{
					if (ENTITY::IS_ENTITY_IN_WATER(iLocal_110))
					{
						func_2113(iLocal_110);
					}
				}
				if (__LIB_0__::func_272(Global_35, 0))
				{
					if (ENTITY::IS_ENTITY_IN_WATER(Global_35))
					{
						func_2113(Global_35);
					}
				}
				if (__LIB_0__::func_272(iLocal_108, 0))
				{
					if (ENTITY::IS_ENTITY_IN_WATER(iLocal_108))
					{
						func_2113(iLocal_108);
					}
				}
			}
		}
	}
}

void func_1535()
{
	if (__LIB_0__::func_272(Global_35, 0))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP_CARRIABLE"), false);
		PED::SET_PED_RESET_FLAG(Global_35, 135, true);
		ENTITY::_0xC3ABCFBC7D74AFA5(Global_35, 0, 1);
		ENTITY::_0xC3ABCFBC7D74AFA5(Global_35, 17, 1);
		ENTITY::_0xC3ABCFBC7D74AFA5(Global_35, 18, 1);
	}
}

void func_1536()
{
	int iVar0;
	if (__LIB_0__::func_272(Global_35, 0))
	{
		iVar0 = __LIB_0__::func_399(Global_35, 1, 0, 0);
		if (WEAPON::_IS_WEAPON_LANTERN(iVar0))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
		}
	}
}

void func_1538(bool bParam0, bool bParam1)
{
	if (__LIB_0__::func_272(Global_35, 0))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CHARACTER_WHEEL"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_CRAFTING_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY_SECONDARY"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY_ACTION"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY_PC"), false);
		if (bParam0)
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_EXIT"), false);
		}
		if (bParam1)
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_PASSENGER_AIM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_PASSENGER_ATTACK"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_BOAT_AIM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_BOAT_ATTACK"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_AIM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_ATTACK"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
		}
	}
}

void func_1539(char[4] cParam0)
{
	if (iLocal_293 > 0)
	{
		__LIB_4__::func_89(&uLocal_83, 0);
		if (__LIB_9__::func_178(&uLocal_83) > func_2115(iLocal_293))
		{
			__LIB_9__::func_205(cParam0, func_2116(iLocal_293), "", 1, 0);
		}
	}
	if (__LIB_6__::func_864(cParam0) < 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_122))
		{
			if (ENTITY::IS_ENTITY_DEAD(iLocal_122) || __LIB_3__::func_528(iLocal_122, Global_35))
			{
				iLocal_293 = 4;
				return;
			}
		}
	}
	if (__LIB_6__::func_864(cParam0) < 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_112))
		{
			if (!__LIB_0__::func_272(iLocal_112, 1))
			{
				iLocal_293 = 5;
				return;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_113))
		{
			if (__LIB_11__::func_339(iLocal_113, Global_35, 0, 0))
			{
				iLocal_293 = 8;
				return;
			}
			else if (!__LIB_0__::func_272(iLocal_113, 1))
			{
				iLocal_293 = 6;
				return;
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_108))
	{
		if (__LIB_0__::func_272(iLocal_108, 0))
		{
			if (__LIB_11__::func_339(iLocal_108, Global_35, 0, 0))
			{
				iLocal_293 = 2;
				return;
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_110))
	{
		if (!__LIB_0__::func_272(iLocal_110, 0) || __LIB_11__::func_339(iLocal_110, Global_35, 0, 0))
		{
			iLocal_293 = 3;
			return;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_111))
	{
		if (!__LIB_0__::func_272(iLocal_111, 0) || __LIB_11__::func_339(iLocal_111, Global_35, 0, 0))
		{
			iLocal_293 = 4;
			return;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_114))
	{
		if (__LIB_4__::func_257(iLocal_114))
		{
			iLocal_293 = 9;
			return;
		}
	}
}

void func_1550(char[4] cParam0)
{
	struct<8> Var0;
	func_2129(cParam0);
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
	__LIB_1__::func_561(&(cParam0->f_13106));
	__LIB_2__::func_259(&(cParam0->f_13112));
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

void func_1576(char[4] cParam0)
{
	if (__LIB_0__::func_48(Global_35, iLocal_110, 50f, 1))
	{
		__LIB_9__::func_205(cParam0, "MOB4_SPOOK", "", 1, 0);
	}
}

bool func_1632(int iParam0, var uParam1, bool bParam2)
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
	Var0 = { func_675(iParam0, 0, 1) };
	iVar5 = 1728382685; /* GXTEntry: "Right" */
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_1046((386 + iVar29), 1);
		if (func_1047(iParam0, &Var0, iVar5, 0))
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

void func_1671()
{
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS")))
	{
		func_2220();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS"), true);
		__LIB_0__::func_915(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"));
		func_637(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), true, 2, false, false);
		__LIB_0__::func_915(joaat("WEAPON_MELEE_KNIFE_JOHN"));
		func_637(joaat("WEAPON_MELEE_KNIFE_JOHN"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_MELEE_KNIFE_JOHN"), true, 4, false, false);
	}
}

void func_1722(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = __LIB_1__::func_134(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_587(50);
			}
			else
			{
				func_587(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_587(51);
			}
			else
			{
				func_587(49);
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
			func_587(24);
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

void func_1723(int iParam0)
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
					func_2240();
					__LIB_1__::func_240(456, 1);
					__LIB_0__::func_606(16);
				}
			}
			if (!__LIB_0__::func_605(32))
			{
				if (iVar0 >= 3)
				{
					func_2240();
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
					func_2242();
					__LIB_1__::func_240(457, 1);
					__LIB_0__::func_606(1);
				}
			}
			if (!__LIB_0__::func_605(2))
			{
				if (iVar0 >= 3)
				{
					func_2242();
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
					func_2243();
					__LIB_1__::func_240(455, 1);
					__LIB_0__::func_606(4);
				}
			}
			if (!__LIB_0__::func_605(8))
			{
				if (iVar0 >= 3)
				{
					func_2243();
					__LIB_1__::func_240(455, 1);
					__LIB_0__::func_606(8);
				}
			}
			break;
	}
}

void func_1728(int iParam0)
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
	func_659(iParam0, 1, 1, -142743235, 1);
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
	func_661(iParam0, 1, 1);
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		func_659(uVar18[iVar36], 1, 1, -142743235, 1);
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
		func_661(uVar18[iVar36], 1, 1);
		iVar0[iVar36] = __LIB_0__::func_161(func_662(uVar18[iVar36]), 1);
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
				func_661(__LIB_0__::func_998(iVar35), 1, 1);
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

void func_1733(struct<6> Param0)
{
	if (!func_2265(Param0.f_4, 1))
	{
	}
	if (!func_2265(Param0, 1))
	{
	}
	if (!func_2265(Param0.f_2, 1))
	{
	}
	if (!func_2265(Param0.f_5, 1))
	{
	}
	if (!func_2265(Param0.f_3, 1))
	{
	}
	if (!func_2265(Param0.f_1, 1))
	{
	}
}

int func_1742(int iParam0, int iParam1)
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
	if (!func_1105(iParam1, &uVar6, &Var1, 1, 752097756, 0))
	{
		return 0;
	}
	return 1;
}

bool func_1743(int iParam0, struct<4> Param1, bool bParam5)
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
					if (func_1105(Var3, &Var7, &Var12, 1, 752097756, 1))
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

bool func_1751(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	Var0 = { func_675(iParam0, 0, 0) };
	Var5 = { __LIB_0__::func_429(iParam0, Var0, Var0.f_4, 0) };
	if (__LIB_0__::func_800(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return false;
	}
	INVENTORY::_0x9A113C660AEA3832(__LIB_0__::func_162(0), &Var5, iParam1);
	return true;
}

int func_1784(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, float fParam12, bool bParam13, bool bParam14, bool bParam15, int iParam16)
{
	var uVar0;
	int iVar1;
	if (!__LIB_0__::func_49(iParam0))
	{
		return 0;
	}
	iVar1 = func_2306(&uVar0, iParam0, bParam1, bParam2, iParam3, iParam4, iParam5, bParam7, bParam8, iParam9, iParam10, iParam11, fParam12, bParam13, bParam14, bParam15, bParam6, iParam16);
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

bool func_1795(int iParam0)
{
	if (!func_2103(iParam0))
	{
		if (func_2103(iLocal_290))
		{
			if (__LIB_0__::func_899(&uLocal_101))
			{
				return true;
			}
		}
	}
	else if (iParam0 == iLocal_290)
	{
		if (__LIB_0__::func_899(&uLocal_101))
		{
			return true;
		}
	}
	return false;
}

void func_1798(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, bool bParam19, int iParam20, float fParam21, bool bParam22)
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
		Var0.f_2 = iParam15;
		Var0.f_4 = iParam17;
		Var0.f_5 = iParam20;
		Var0.f_6 = fParam21;
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
		TASK::TASK_FOLLOW_AND_CONVERSE_WITH_PED(iParam0, iParam1, iParam4, iParam5, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13);
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

char* func_1806(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "MOB4_OBJ01a";
		case 2:
			return "MOB4_OBJ01b";
		case 3:
			return "MOB4_OBJ02a";
		case 4:
			return "MOB4_OBJ02b";
		case 5:
			return "MOB4_OBJ03a";
		case 6:
			return "MOB4_OBJ03b";
		case 7:
			return "MOB4_OBJ03c";
		case 8:
			return "MOB4_OBJ04a";
		case 9:
			return "MOB4_OBJ04b";
		case 10:
			return "MOB4_OBJ04c";
		case 11:
			return "MOB4_OBJ04d";
		case 12:
			return "MOB4_OBJ05a";
		case 13:
			return "MOB4_OBJ07a";
		case 14:
			return "MOB4_OBJ07b";
		case 15:
			return "MOB4_OBJ07c";
		case 16:
			return "MOB4_OBJ08a";
		case 17:
			return "MOB4_OBJ08b";
		case 18:
			return "MOB4_OBJ08c";
		case 19:
			return "MOB4_OBJ08d";
		case 20:
			return "MOB4_OBJ09a";
		default:
			break;
	}
	return "";
}

bool func_1816(var uParam0, int iParam1, char* sParam2, char* sParam3, float fParam4)
{
	if (uParam0->f_1 <= 0)
	{
		if (!__LIB_0__::func_272(*uParam0, 0))
		{
			if (__LIB_3__::func_397(iParam1, 0))
			{
				*uParam0 = __LIB_1__::func_334(iParam1);
			}
			return false;
		}
		__LIB_0__::func_928(&uLocal_340, *uParam0, sParam2, 1);
		AUDIO::STOP_PED_SPEAKING(*uParam0, true);
		uParam0->f_3 = fParam4;
		uParam0->f_2 = sParam3;
		uParam0->f_1 = 1;
		return false;
	}
	return true;
}

bool func_1817()
{
	if (__LIB_11__::func_20(2))
	{
		if (__LIB_11__::func_18(Global_35, cLocal_35, 490))
		{
			return true;
		}
	}
	else if (__LIB_11__::func_20(1))
	{
		if (__LIB_11__::func_18(Global_35, cLocal_35, 195))
		{
			return true;
		}
	}
	else if (__LIB_11__::func_18(Global_35, cLocal_35, 5))
	{
		return true;
	}
	return false;
}

int func_1818()
{
	if (__LIB_11__::func_20(2))
	{
		return 22;
	}
	else if (__LIB_11__::func_20(1))
	{
		return 9;
	}
	return 0;
}

void func_1819()
{
	if (iLocal_471 <= 4)
	{
		if (!__LIB_0__::func_71(iLocal_108))
		{
			iLocal_471 = 5;
		}
	}
}

int func_1820()
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	fVar1 = 1f;
	fVar2 = 3f;
	TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(cLocal_35, ENTITY::GET_ENTITY_COORDS(iLocal_108, true, false), &iVar0);
	iVar3 = 0;
	while (iVar3 <= 3)
	{
		if (iVar0 >= Local_438[iVar3 /*8*/] && iVar0 < Local_438[iVar3 /*8*/].f_1)
		{
			if (iVar0 == Local_438[iVar3 /*8*/].f_2 && !__LIB_0__::func_86(Local_438[iVar3 /*8*/].f_3))
			{
				if (!TASK::_0x508F5053E3F6F0C4(iLocal_108, Local_438[iVar3 /*8*/].f_3, 1f))
				{
					TASK::TASK_LOOK_AT_COORD(iLocal_108, Local_438[iVar3 /*8*/].f_3, 2500, 0, 51, 0);
				}
			}
			fVar1 = func_2319(iLocal_108, Local_438[iVar3 /*8*/], Local_438[iVar3 /*8*/].f_1, cLocal_35, Local_438[iVar3 /*8*/].f_7);
		}
		else if ((iVar0 >= Local_438[iVar3 /*8*/].f_1 && iVar0 < Local_438[iVar3 /*8*/].f_1 + 7) && Local_438[iVar3 /*8*/].f_7)
		{
			fVar1 = func_2319(iLocal_108, Local_438[iVar3 /*8*/].f_1, Local_438[iVar3 /*8*/].f_1 + 7, cLocal_35, 0);
		}
		fVar1 = __LIB_0__::func_251(fVar1, Local_438[iVar3 /*8*/].f_6, 1f);
		iVar3++;
	}
	if (!__LIB_11__::func_18(Global_35, cLocal_35, Local_438[1 /*8*/].f_1))
	{
		fVar2 = 2f;
	}
	return func_2320(iLocal_108, Global_35, cLocal_35, fVar1, 1084227584 /* Float: 5f */, 1106247680 /* Float: 30f */, 1073746018 /* Float: 2.001f */, fVar2);
}

bool func_1822(char* sParam0)
{
	if (AUDIO::_0xD89504D9D7D5057D(sParam0))
	{
		return AUDIO::_0xF01C570E0A0A1E67(sParam0);
	}
	return false;
}

int func_1825(int iParam0, int iParam1, char[4] cParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7)
{
	float fVar0;
	float fVar1;
	fVar0 = (TASK::_0x3ACC128510142B9D(cParam2, ENTITY::GET_ENTITY_COORDS(iParam0, true, false)) - TASK::_0x3ACC128510142B9D(cParam2, ENTITY::GET_ENTITY_COORDS(iParam1, true, false)));
	if (fVar0 < 0f)
	{
		fVar0 = 0.1f;
	}
	fVar1 = __LIB_0__::func_251(((fParam6 * (fParam4 / fVar0)) * fParam3), 1.001f, fParam7);
	if (fVar0 > fParam5)
	{
		TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iParam0, 0f, 0, -1082130432 /* Float: -1f */, 0);
	}
	else if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iParam0, cParam2))
	{
		TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iParam0, fVar1, 0, -1082130432 /* Float: -1f */, 0);
	}
	return 1;
}

int func_1826(char* sParam0)
{
	var uVar0;
	if (TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(sParam0, &uVar0))
	{
		return uVar0;
	}
	return 0;
}

void func_1827(var uParam0)
{
	if (__LIB_0__::func_272(*uParam0, 0))
	{
		switch (uParam0->f_1)
		{
			case 1:
				if (__LIB_0__::func_48(Global_35, *uParam0, uParam0->f_3, 1))
				{
					if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(*uParam0, Global_35, 17))
					{
						if (__LIB_11__::func_349(&uLocal_340, uParam0->f_2, *uParam0, Global_35, 0, 0, 1, 1))
						{
							uParam0->f_1 = 2;
						}
					}
				}
				break;
			case 2:
				if (!func_1312(uParam0->f_2))
				{
					uParam0->f_1 = 3;
				}
				break;
		}
	}
}

float func_1831(int iParam0, int iParam1)
{
	return func_961(iParam0, iParam1);
}

Vector3 func_1832(vector3 vParam0, bool bParam3, bool bParam4, float fParam5)
{
	vector3 vVar0;
	vVar0 = { vParam0 };
	vParam0.f_2 = (vParam0.z + 50f);
	if (bParam3)
	{
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(vParam0, &(vParam0.f_2), bParam4))
		{
			vParam0.f_2 = (vParam0.z + fParam5);
			return vParam0;
		}
	}
	else if (WATER::TEST_VERTICAL_PROBE_AGAINST_ALL_WATER(vParam0, 128, &(vParam0.f_2)) == 1)
	{
		return vParam0;
	}
	return vVar0;
}

void func_1834(var uParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, int iParam7)
{
	if (!__LIB_1__::func_565(uParam0))
	{
		__LIB_3__::func_414(uParam0, vParam1, fParam4, iParam5, iParam6, iParam7);
	}
}

void func_1835(int iParam0, float fParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		OBJECT::_0xF49574E2332A8F06(iParam0, fParam1);
		GRAPHICS::UPDATE_LIGHTS_ON_ENTITY(iParam0);
	}
}

bool func_1837(int iParam0)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0))
	{
		if (ANIMSCENE::_0x34A0671BE613D3D0(iParam0) || ANIMSCENE::_0xD70C7A30412F8FA0(iParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_1838(char[4] cParam0)
{
	if (__LIB_0__::func_272(Global_35, 0))
	{
		if (!AUDIO::_0xA2CAC9DEF0195E6F(1))
		{
			if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35) > 0f)
			{
				if (func_1400(cParam0, "MOB4_STOPNOW", 0, 1073741824 /* Float: 2f */, 0, 1))
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_1839()
{
	if (!func_1517(&Local_711, func_212(6, 1), joaat("A_C_ALLIGATOR_01"), 1, 0, 0, 0, 1))
	{
		return false;
	}
	func_1519(Local_711, 1, 1);
	return true;
}

bool func_1840(int iParam0)
{
	return (ENTITY::IS_ENTITY_IN_WATER(iParam0) && func_1940(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0) > 0.33f);
}

bool func_1843(int iParam0, int iParam1, struct<4> Param2, int iParam6)
{
	if (!iParam1->f_16)
	{
		if (!func_2323(iParam0) || ENTITY::DOES_ENTITY_EXIST(*iParam1))
		{
			if (__LIB_11__::func_18(iLocal_110, sLocal_36, func_2324(iParam0)) || ENTITY::DOES_ENTITY_EXIST(*iParam1))
			{
				if ((__LIB_1__::func_373(Param2, 0.1f, 0.9f, 0.1f, 0.9f) || !__LIB_0__::func_86(func_2325(iParam0))) || ENTITY::DOES_ENTITY_EXIST(*iParam1))
				{
					if (func_1517(iParam1, Param2, joaat("A_C_ALLIGATOR_01"), 1, iParam6, MISC::GET_RANDOM_INT_IN_RANGE(2000, 4000), 0, 1))
					{
						iParam1->f_3 = { func_2325(iParam0) };
						if (__LIB_0__::func_86(iParam1->f_3))
						{
							iParam1->f_2 = Global_35;
							iParam1->f_6 = 8;
						}
						else
						{
							iParam1->f_6 = 4;
						}
					}
					return true;
				}
			}
		}
	}
	return false;
}

void func_1844(int* iParam0)
{
	switch (iParam0->f_6)
	{
		case 2:
			func_1518(iParam0, 0);
			__LIB_2__::func_259(&(iParam0->f_8));
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(*iParam0);
			TASK::CLEAR_PED_TASKS(*iParam0, true, false);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_733);
			TASK::TASK_GO_STRAIGHT_TO_COORD(0, func_1832(ENTITY::GET_ENTITY_COORDS(*iParam0, true, false), 0, 0, 1036831949 /* Float: 0.1f */), 1f, 20000, 40000f, 0.05f, 0);
			TASK::TASK_WANDER_IN_AREA(0, func_1832(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*iParam0, __LIB_3__::func_858() * FtoV(MISC::GET_RANDOM_FLOAT_IN_RANGE(1.1f, 3.5f))), 0, 0, 1036831949 /* Float: 0.1f */), (2.5f + MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f)), 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */, 0);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_733);
			TASK::TASK_PERFORM_SEQUENCE(*iParam0, iLocal_733);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_733);
			iParam0->f_6 = 3;
			break;
		case 3:
			func_2327(iParam0);
			if (__LIB_1__::func_583(&(iParam0->f_8)) >= iParam0->f_13)
			{
				iParam0->f_6 = 2;
			}
			else
			{
				func_2328(iParam0, 1084227584 /* Float: 5f */, 1075838976 /* Float: 2.5f */);
			}
			break;
		case 8:
			func_1518(iParam0, 0);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_733);
			TASK::TASK_GO_STRAIGHT_TO_COORD(0, func_1832(ENTITY::GET_ENTITY_COORDS(*iParam0, true, false), 0, 0, 1036831949 /* Float: 0.1f */), 1f, 20000, 40000f, 0.05f, 0);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iParam0->f_2, 0, -1f, -1f, -1f);
			TASK::TASK_LOOK_AT_ENTITY(0, iParam0->f_2, -1, 0, 51, 1);
			TASK::TASK_PAUSE(0, iParam0->f_11);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_733);
			TASK::TASK_PERFORM_SEQUENCE(*iParam0, iLocal_733);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_733);
			iParam0->f_6 = 9;
			break;
		case 9:
			func_2327(iParam0);
			if (!__LIB_0__::func_163(*iParam0, 242628503))
			{
				TASK::TASK_CLEAR_LOOK_AT(*iParam0);
				iParam0->f_6 = 14;
			}
			else
			{
				func_2328(iParam0, 1084227584 /* Float: 5f */, 1075838976 /* Float: 2.5f */);
			}
			break;
		case 4:
			func_1518(iParam0, 0);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_733);
			TASK::TASK_GO_STRAIGHT_TO_COORD(0, func_1832(ENTITY::GET_ENTITY_COORDS(*iParam0, true, false), 0, 0, 1036831949 /* Float: 0.1f */), 1f, 20000, 40000f, 0.05f, 0);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, iParam0->f_3, 1.5f, -1, (0.25f * 4f), 0, 40000f);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_733);
			TASK::TASK_PERFORM_SEQUENCE(*iParam0, iLocal_733);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_733);
			iParam0->f_6 = 5;
			break;
		case 5:
			func_2327(iParam0);
			if (!__LIB_0__::func_163(*iParam0, 242628503))
			{
				iParam0->f_6 = 14;
			}
			else
			{
				func_2328(iParam0, 1084227584 /* Float: 5f */, 1075838976 /* Float: 2.5f */);
			}
			break;
		case 10:
			func_1518(iParam0, 0);
			PED::REGISTER_TARGET(*iParam0, iParam0->f_2, 1);
			TASK::CLEAR_PED_TASKS(*iParam0, true, false);
			TASK::TASK_COMBAT_PED(*iParam0, iParam0->f_2, 0, 0);
			iParam0->f_6 = 11;
			break;
		case 11:
			if (!__LIB_0__::func_491(*iParam0, 780511057))
			{
				iParam0->f_2 = func_2330(*iParam0);
				TASK::TASK_COMBAT_PED(*iParam0, iParam0->f_2, 0, 0);
			}
			if ((BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(*iParam0)) / BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_MAX_HEALTH(*iParam0, false))) < 0.6f)
			{
				iParam0->f_6 = 16;
			}
			break;
		case 12:
			func_1518(iParam0, 0);
			PED::REGISTER_TARGET(*iParam0, iParam0->f_2, 1);
			TASK::CLEAR_PED_TASKS(*iParam0, true, false);
			TASK::TASK_PUT_PED_DIRECTLY_INTO_MELEE(*iParam0, iParam0->f_2, joaat("AR_ALLIGATOR_LEAPKILL"), 0, 0, 1, 0);
			iParam0->f_6 = 13;
			break;
		case 13:
			if (!__LIB_0__::func_491(*iParam0, joaat("SCRIPT_TASK_PUT_PED_DIRECTLY_INTO_MELEE")))
			{
				TASK::TASK_PUT_PED_DIRECTLY_INTO_MELEE(*iParam0, iParam0->f_2, joaat("AR_ALLIGATOR_LEAPKILL"), 0, 0, 1, 0);
			}
			if ((BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(*iParam0)) / BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_MAX_HEALTH(*iParam0, false))) < 0.6f)
			{
				iParam0->f_6 = 16;
			}
			break;
		case 16:
			__LIB_4__::func_89(&(iParam0->f_8), 0);
			func_1518(iParam0, 1);
			func_2331(*iParam0);
			TASK::CLEAR_PED_TASKS(*iParam0, true, false);
			TASK::CLEAR_PED_SECONDARY_TASK(*iParam0);
			TASK::TASK_SMART_FLEE_PED(*iParam0, func_2330(*iParam0), 100f, -1, 0, 3f, 0);
			iParam0->f_6 = 17;
			break;
		case 17:
			if (!__LIB_0__::func_491(*iParam0, 518218985))
			{
				TASK::TASK_SMART_FLEE_PED(*iParam0, func_2330(*iParam0), 1000f, -1, 0, 1.5f, 0);
			}
			else if (__LIB_9__::func_178(&(iParam0->f_8)) > 12f)
			{
				if ((PED::_0x5102307CE88798EB(*iParam0) && !__LIB_11__::func_465(*iParam0)) || (func_1922(ENTITY::GET_ENTITY_COORDS(*iParam0, true, false)) < -0.25f && ENTITY::IS_ENTITY_IN_WATER(*iParam0)))
				{
					iParam0->f_6 = 1;
					__LIB_1__::func_561(&(iParam0->f_8));
					__LIB_2__::func_426(iParam0);
				}
			}
			break;
		case 14:
			__LIB_4__::func_89(&(iParam0->f_8), 0);
			func_1518(iParam0, 1);
			func_2331(*iParam0);
			iParam0->f_3 = { func_1832(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*iParam0, 0f, 1.25f, 0f), 0, 0, 1036831949 /* Float: 0.1f */) };
			TASK::TASK_GO_STRAIGHT_TO_COORD(*iParam0, iParam0->f_3, 1f, 20000, 40000f, 0.05f, 0);
			iParam0->f_6 = 15;
			break;
		case 15:
			if (__LIB_9__::func_178(&(iParam0->f_8)) > 2.5f)
			{
				if ((!__LIB_0__::func_491(*iParam0, 2106541073) && !__LIB_0__::func_491(*iParam0, 242628503)) && !__LIB_0__::func_491(*iParam0, 518218985))
				{
					TASK::TASK_SMART_FLEE_PED(*iParam0, func_2330(*iParam0), 100f, -1, 0, 1.5f, 0);
				}
			}
			if ((PED::_0x5102307CE88798EB(*iParam0) && !__LIB_11__::func_465(*iParam0)) || (func_1922(ENTITY::GET_ENTITY_COORDS(*iParam0, true, false)) < -0.25f && ENTITY::IS_ENTITY_IN_WATER(*iParam0)))
			{
				iParam0->f_6 = 1;
				__LIB_2__::func_426(iParam0);
			}
			else if ((BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(*iParam0)) / BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_MAX_HEALTH(*iParam0, false))) > 0.6f)
			{
				func_2328(iParam0, 1084227584 /* Float: 5f */, 1075838976 /* Float: 2.5f */);
			}
			break;
	}
}

void func_1845(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!__LIB_0__::func_139(uParam0->f_8))
			{
				uParam0->f_8 = __LIB_11__::func_350("MOB4_UC_LOOT", joaat("INPUT_CONTEXT_X"), *uParam0, 2, 1, 0, 0, 5, 2f, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
				__LIB_1__::func_221(uParam0->f_8, 1, 1);
				__LIB_1__::func_382(uParam0->f_8, 1, 1);
				__LIB_1__::func_574(&(uParam0->f_8), *uParam0);
			}
			else
			{
				uParam0->f_9 = 1;
			}
			break;
		case 1:
			if (__LIB_0__::func_266(Global_35, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false), (2f * 0.95f), 1, 0))
			{
				if (__LIB_0__::func_139(uParam0->f_8))
				{
					HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(*uParam0, (2f * 0.95f), 3, 1, 0, "MOB4_TRAP", 0);
					if (__LIB_1__::func_530(uParam0->f_8, 1))
					{
						if (func_1795(22))
						{
							func_1230();
						}
						uParam0->f_9 = 2;
					}
				}
			}
			break;
		case 2:
			if (!__LIB_1__::func_530(uParam0->f_8, 1) || !__LIB_0__::func_266(Global_35, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false), (2f * 0.95f), 1, 0))
			{
				uParam0->f_9 = 1;
			}
			else
			{
				HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(*uParam0, (2f * 0.95f), 3, 1, 0, "MOB4_TRAP", 0);
				sLocal_738 = func_2335(*uParam0);
				if (func_1881(iLocal_307, sLocal_738))
				{
					if (__LIB_0__::func_567(uParam0->f_8, 1))
					{
						TASK::CLEAR_PED_TASKS(Global_35, true, false);
						ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iLocal_307, func_1832(ENTITY::GET_ENTITY_COORDS(*uParam0, true, false), 1, 1, 1036831949 /* Float: 0.1f */), ENTITY::GET_ENTITY_ROTATION(*uParam0, 2), 2);
						__LIB_0__::func_325(&(uParam0->f_4));
						__LIB_1__::func_727(Global_35, 1);
						func_2337(*uParam0);
						__LIB_1__::func_281(&(uParam0->f_8), 1, 1);
						uParam0->f_9 = 3;
					}
				}
			}
			break;
		case 3:
			if (func_2338(Global_35, &iLocal_746, 0, 1))
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iLocal_307, "ARTHUR", &vLocal_761, true, sLocal_738, 2))
				{
					if (!__LIB_0__::func_491(Global_35, 713668775))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Global_35, vLocal_761, 1f, 20000, 0.25f, 4194304, __LIB_0__::func_152(vLocal_761, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false), 1));
					}
					else
					{
						uParam0->f_9 = 4;
					}
				}
			}
			break;
		case 4:
			if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iLocal_307, "ARTHUR", &vLocal_761, true, sLocal_738, 2))
			{
				if (!__LIB_0__::func_491(Global_35, 713668775))
				{
					if (__LIB_0__::func_266(Global_35, vLocal_761, (0.5f * 1.1f), 1, 0) && __LIB_2__::func_431(Global_35, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false), 0f) == 0)
					{
						func_1299(iLocal_307);
						__LIB_1__::func_281(&(uParam0->f_8), 1, 1);
						uParam0->f_9 = 5;
					}
					else
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Global_35, vLocal_761, 1f, 20000, 0.25f, 0, __LIB_0__::func_152(vLocal_761, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false), 1));
					}
				}
			}
			break;
		case 5:
			if (func_2339(*uParam0))
			{
				if (__LIB_11__::func_25(iLocal_307, 8.9f))
				{
					func_307(joaat("UPGRADE_FSH_BAIT_CRAYFISH"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					uParam0->f_9 = 6;
				}
			}
			else if (__LIB_11__::func_25(iLocal_307, 6.1f))
			{
				uParam0->f_9 = 6;
			}
			break;
		case 6:
			if (__LIB_11__::func_337(iLocal_307))
			{
				func_1856(uParam0);
				ANIMSCENE::RESET_ANIM_SCENE(iLocal_307, 0);
				uParam0->f_9 = 7;
			}
			break;
		case 7:
			if (func_1861(Global_35, iLocal_746, 0, 1))
			{
				iLocal_746 = 0;
				func_2340();
				uParam0->f_9 = 8;
			}
			break;
		case 8:
			if (func_1882(iLocal_307))
			{
				uParam0->f_9 = 9;
			}
			break;
	}
}

bool func_1846(int iParam0)
{
	if (__LIB_0__::func_272(iParam0, 0))
	{
		if (__LIB_0__::func_491(iParam0, 985146578) || __LIB_0__::func_491(iParam0, joaat("SCRIPT_TASK_FOLLOW_AND_CONVERSE_WITH_PED")))
		{
			return true;
		}
	}
	return false;
}

void func_1848()
{
	__LIB_1__::func_731(&uLocal_274);
}

void func_1849(char[4] cParam0)
{
	int iVar0;
	if (__LIB_0__::func_272(iLocal_110, 0))
	{
		if (TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_36, ENTITY::GET_ENTITY_COORDS(iLocal_110, true, false), &iVar0))
		{
			if (iLocal_737 < iVar0)
			{
				iLocal_737 = iVar0;
				func_1859();
			}
		}
		if (__LIB_9__::func_178(&uLocal_740) > 15f)
		{
			if (func_1400(cParam0, "MOB4_BECKON_T", 0, 1073741824 /* Float: 2f */, 0, 0))
			{
				__LIB_2__::func_259(&uLocal_740);
			}
		}
		if (__LIB_9__::func_178(&uLocal_77) > 25f)
		{
			__LIB_2__::func_259(&uLocal_77);
			func_1221(cParam0, 5, 1);
		}
	}
}

void func_1851(vector3 vParam0, vector3 vParam3)
{
	if ((__LIB_0__::func_272(iLocal_108, 0) && __LIB_0__::func_272(Global_35, 0)) && __LIB_0__::func_272(iLocal_110, 0))
	{
		PED::_0x89F5E7ADECCCB49C(iLocal_108, "cautious");
		TASK::TASK_LOOK_AT_ENTITY(iLocal_108, iLocal_110, -1, 0, 51, 0);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_131);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vParam0, 1f, -1, 0.25f, 4194304, __LIB_0__::func_152(vParam0, vParam3, 1));
		TASK::TASK_REACT(0, iLocal_110, ENTITY::GET_ENTITY_COORDS(iLocal_110, true, false), "Default_Curious", 10000f, 0, 4);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_131);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_108, iLocal_131);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_131);
	}
}

int func_1852(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	iVar0 = __LIB_0__::func_399(iParam0, 1, iParam1, 0);
	if (!WEAPON::_IS_WEAPON_LANTERN(iVar0))
	{
		return 1;
	}
	if ((bParam2 && !func_2341(iParam0)) || !bParam2)
	{
		WEAPON::_HIDE_PED_WEAPONS(iParam0, 2, false);
		TASK::TASK_SWAP_WEAPON(iParam0, 0, !bParam2, 0, 0);
	}
	return 0;
}

void func_1853(bool bParam0, bool bParam1, bool bParam2, int iParam3)
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
	__LIB_9__::func_175(iLocal_110, Global_35, &Var0, vLocal_59, sLocal_36, 17416, 1, iParam3, 1.5f, 1073069561, 0.75f, 1092616192 /* Float: 10f */, -1, 1, 0, 0, 0, 1);
	if (bParam1)
	{
		func_1854();
	}
	if (bParam0)
	{
		func_2340();
	}
	if (bParam2)
	{
		__LIB_1__::func_731(&uLocal_274);
	}
}

void func_1854()
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
	PED::_0x58F7DB5BD8FA2288(iLocal_108);
	func_1798(iLocal_108, iLocal_110, &Var0, -1082130432 /* Float: -1f */, 0, 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1, 128, -2f, -2f, 1069547520 /* Float: 1.5f */, 1073741824 /* Float: 2f */, 1050253722 /* Float: 0.3f */, 1067030938 /* Float: 1.2f */, 1, 0, -1, 1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1);
}

bool func_1855(int iParam0)
{
	if (func_2103(iParam0))
	{
		if (iLocal_290 == iParam0)
		{
			return true;
		}
	}
	return false;
}

void func_1856(var uParam0)
{
	__LIB_1__::func_951(&(uParam0->f_1[0]));
	__LIB_1__::func_951(&(uParam0->f_1[1]));
}

void func_1857(char[4] cParam0)
{
	if (!__LIB_11__::func_20(8))
	{
		if (Local_213[0 /*11*/].f_9 >= 6)
		{
			__LIB_11__::func_342(8);
			__LIB_11__::func_342(4);
			__LIB_9__::func_195(cParam0, 12);
		}
	}
}

bool func_1858(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	iVar0 = __LIB_0__::func_399(iParam0, 1, iParam2, 0);
	if (iVar0 == iParam1)
	{
		return true;
	}
	if (!WEAPON::HAS_PED_GOT_WEAPON(iParam0, iParam1, 0, false))
	{
		if (bParam4)
		{
			WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, iParam1, 0, false, false, iParam2, false, 0.5f, 1f, 752097756, false, 0f, false);
			return false;
		}
		else
		{
			return true;
		}
	}
	if ((bParam3 && !func_2341(iParam0)) || !bParam3)
	{
		WEAPON::SET_CURRENT_PED_WEAPON(iParam0, iParam1, false, iParam2, false, false);
		TASK::TASK_SWAP_WEAPON(iParam0, 1, !bParam3, 0, 0);
	}
	return false;
}

void func_1859()
{
	__LIB_2__::func_259(&uLocal_740);
	__LIB_2__::func_259(&uLocal_77);
}

bool func_1860(char[4] cParam0)
{
	int iVar0;
	switch (iLocal_748)
	{
		case 0:
			if (func_1335(iLocal_308))
			{
				WEAPON::_HIDE_PED_WEAPONS(iLocal_110, 2, true);
				func_1257(iLocal_110, joaat("BLIP_STYLE_COMPANION"), "MOB4_THOMAS", 1, 1, 0);
				__LIB_0__::func_325(&(Local_247.f_4));
				iLocal_107 = MAP::_BLIP_ADD_FOR_ENTITY(203020899, Local_247);
				TASK::TASK_LOOK_AT_ENTITY(Global_35, iLocal_110, -1, 0, 51, 0);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_108, Global_35, -1, 0, 51, 0);
				__LIB_4__::func_89(&uLocal_80, 0);
				iLocal_748 = 1;
			}
			break;
		case 1:
			if (func_2342())
			{
				__LIB_9__::func_774(&uLocal_80);
				__LIB_4__::func_89(&uLocal_92, 0);
				iLocal_748 = 3;
			}
			break;
		case 3:
			if (__LIB_0__::func_139(iLocal_739))
			{
				__LIB_1__::func_221(iLocal_739, 0, 1);
			}
			if (__LIB_9__::func_178(&uLocal_92) > 1f)
			{
				if (func_1400(cParam0, "MOB4_TRAPSTUCK", 0, 1073741824 /* Float: 2f */, 0, 0))
				{
					__LIB_1__::func_561(&uLocal_92);
				}
			}
			if (__LIB_11__::func_354(iLocal_308, "IG3_BASE") && !func_1312("MOB4_TRAPSTUCK"))
			{
				__LIB_9__::func_773(&uLocal_80);
				MISC::_0xFC6ECB9170145ECE();
				MISC::_0x870708A6E147A9AD(iLocal_110, "", 5f, 5f, 0, 0, 0, 0, 0, -1);
				__LIB_9__::func_195(cParam0, 5);
				__LIB_3__::func_157(&(Local_797[0 /*17*/]), "MOB4_UC_HELP", 0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				iLocal_748 = 2;
			}
			break;
		case 2:
			iVar0 = func_2344(&iLocal_110, &iLocal_815, 5f, &Local_797, 0f, 3, 0, 0, 1, 0, 0, 2, -1082130432 /* Float: -1f */);
			if (__LIB_1__::func_583(&uLocal_80) > 30f)
			{
				func_2345(10);
				if (__LIB_11__::func_354(iLocal_308, "IG3_FREE_TRAP_FAIL"))
				{
					__LIB_1__::func_561(&uLocal_80);
					__LIB_0__::func_325(&iLocal_107);
					__LIB_1__::func_281(&iLocal_739, 1, 1);
					__LIB_9__::func_903(&(Local_797[0 /*17*/]));
					__LIB_1__::func_480(&iLocal_110);
					__LIB_9__::func_195(cParam0, 10);
					iLocal_748 = 10;
				}
			}
			else if (iVar0 != -1)
			{
				__LIB_1__::func_561(&uLocal_80);
				__LIB_0__::func_325(&iLocal_107);
				__LIB_9__::func_903(&(Local_797[0 /*17*/]));
				__LIB_1__::func_480(&iLocal_110);
				func_1310();
				func_1230();
				__LIB_9__::func_195(cParam0, -1);
				__LIB_1__::func_281(&iLocal_739, 1, 1);
				iLocal_748 = 5;
			}
			else
			{
				func_2348();
				if (PED::_0x9C81338B2E62CE0A(PLAYER::GET_PLAYER_INDEX(), iLocal_110, 1000))
				{
					if (func_2349())
					{
						__LIB_1__::func_221(iLocal_739, 0, 1);
						__LIB_9__::func_774(&uLocal_80);
						iLocal_748 = 4;
					}
				}
			}
			break;
		case 4:
			if (__LIB_0__::func_139(iLocal_739))
			{
				__LIB_1__::func_221(iLocal_739, 0, 1);
			}
			if (__LIB_11__::func_354(iLocal_308, "IG3_BASE"))
			{
				__LIB_9__::func_773(&uLocal_80);
				iLocal_748 = 2;
			}
			break;
		case 5:
			if (func_2338(Global_35, &iLocal_746, 0, 1))
			{
				if (!__LIB_0__::func_491(Global_35, 716706914))
				{
					if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iLocal_309, "ARTHUR", &vLocal_785, true, func_2350(), 2))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Global_35, vLocal_785, 1f, 20000, 0.25f, 0, __LIB_0__::func_152(vLocal_785, ENTITY::GET_ENTITY_COORDS(Local_247, true, false), 1));
						iLocal_748 = 6;
					}
				}
			}
			break;
		case 6:
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_309, false))
			{
				if (!__LIB_0__::func_491(Global_35, 713668775) && __LIB_0__::func_266(Global_35, vLocal_785, 1f, 1, 1))
				{
					ANIMSCENE::START_ANIM_SCENE(iLocal_309);
					ENTITY::FREEZE_ENTITY_POSITION(Local_247, false);
				}
			}
			else
			{
				__LIB_11__::func_335(iLocal_308);
				if (__LIB_11__::func_354(iLocal_309, "IG3_LEADIN_MAIN_ACTION"))
				{
					iLocal_748 = 7;
				}
			}
			break;
		case 7:
			if (func_1339(Global_35, iLocal_309, "ARTHUR"))
			{
				iLocal_748 = 8;
			}
			break;
		case 8:
			if (__LIB_11__::func_25(iLocal_309, 30f) || __LIB_11__::func_337(iLocal_309))
			{
				__LIB_3__::func_10(Global_35);
				__LIB_3__::func_10(iLocal_108);
				__LIB_1__::func_561(&uLocal_92);
				__LIB_9__::func_195(cParam0, 10);
				iLocal_748 = 9;
			}
			break;
		case 9:
			if (__LIB_11__::func_337(iLocal_309))
			{
				iLocal_748 = 11;
			}
			break;
		case 10:
			if (__LIB_11__::func_337(iLocal_308))
			{
				__LIB_3__::func_10(Global_35);
				__LIB_3__::func_10(iLocal_108);
				iLocal_748 = 11;
			}
			break;
		case 11:
			return true;
	}
	return false;
}

bool func_1861(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	iVar0 = __LIB_0__::func_399(iParam0, 1, iParam2, 0);
	if ((iParam1 == 0 || iParam1 == joaat("WEAPON_UNARMED")) || (!WEAPON::_0x705BE297EEBDB95D(iParam1) && !WEAPON::_IS_WEAPON_LANTERN(iParam1)))
	{
		return true;
	}
	if (!WEAPON::HAS_PED_GOT_WEAPON(iParam0, iParam1, 0, true))
	{
		return true;
	}
	if (iVar0 == iParam1)
	{
		return true;
	}
	if ((bParam3 && !func_2341(iParam0)) || !bParam3)
	{
		WEAPON::SET_CURRENT_PED_WEAPON(iParam0, iParam1, false, iParam2, false, false);
		TASK::TASK_SWAP_WEAPON(iParam0, 1, !bParam3, 0, 0);
	}
	return false;
}

void func_1863(int iParam0)
{
	if (__LIB_0__::func_272(iParam0, 0))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, joaat("REL_PLAYER_ALLY"));
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iParam0, false);
	}
}

void func_1864(char[4] cParam0)
{
	if ((__LIB_0__::func_272(Global_35, 0) && __LIB_0__::func_272(iLocal_108, 0)) && __LIB_0__::func_272(iLocal_110, 0))
	{
		if (PED::IS_PED_SHOOTING(Global_35) || PED::_0xB7DBB2986B87E230(iLocal_108, 2.5f))
		{
			if (!__LIB_0__::func_899(&uLocal_852) || __LIB_9__::func_178(&uLocal_852) > 5f)
			{
				if ((iLocal_923 % 2) == 0)
				{
					if (func_1400(cParam0, "MOB4_TOM_SGATR", 0, 1073741824 /* Float: 2f */, 0, 1))
					{
						__LIB_4__::func_89(&uLocal_852, 0);
						iLocal_923++;
					}
				}
				else if (func_1400(cParam0, "MOB4_SHOOT_G", 0, 1073741824 /* Float: 2f */, 0, 1))
				{
					__LIB_4__::func_89(&uLocal_852, 0);
					iLocal_923++;
				}
			}
		}
	}
}

void func_1865(char[4] cParam0)
{
	if ((__LIB_0__::func_272(Global_35, 0) && __LIB_0__::func_272(iLocal_108, 0)) && __LIB_0__::func_272(iLocal_110, 0))
	{
		if (!__LIB_0__::func_48(Global_35, iLocal_110, 2.5f, 1))
		{
			if (__LIB_10__::func_859(Global_35, ENTITY::GET_ENTITY_COORDS(iLocal_108, true, false), ENTITY::GET_ENTITY_COORDS(iLocal_111, true, false)))
			{
				if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35) > 0f)
				{
					if (!AUDIO::_0xA2CAC9DEF0195E6F(1))
					{
						if (!__LIB_0__::func_899(&uLocal_849) || __LIB_9__::func_178(&uLocal_849) > 5f)
						{
							if ((iLocal_922 % 2) == 0)
							{
								if (__LIB_8__::func_711(cParam0, "MOB4_TOM_AGGRO", 0))
								{
									__LIB_4__::func_89(&uLocal_849, 0);
									iLocal_922++;
								}
							}
							else if (__LIB_8__::func_711(cParam0, "MOB4_STOPNOW_D", 0))
							{
								__LIB_4__::func_89(&uLocal_849, 0);
								iLocal_922++;
							}
						}
					}
				}
			}
		}
	}
}

bool func_1876(int iParam0, int iParam1, int iParam2, float fParam3, char* sParam4, bool bParam5)
{
	if (func_2358(iParam0, fParam3))
	{
		if (__LIB_0__::func_139(*iParam1))
		{
			__LIB_1__::func_221(*iParam1, bParam5, 1);
			if (__LIB_1__::func_732(*iParam1, 1))
			{
				__LIB_1__::func_281(iParam1, 1, 1);
				return true;
			}
		}
		else
		{
			*iParam1 = __LIB_11__::func_347(sParam4, iParam2, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			__LIB_1__::func_221(*iParam1, bParam5, 1);
			__LIB_1__::func_382(*iParam1, 1, 1);
			__LIB_1__::func_574(iParam1, iParam0);
		}
	}
	else
	{
		__LIB_1__::func_281(iParam1, 1, 1);
	}
	return false;
}

void func_1877()
{
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_310, "ARTHUR", Global_35, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_310, "Jules", iLocal_111, 0);
}

void func_1879()
{
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_311, "Jules", iLocal_111, 0);
}

bool func_1880()
{
	switch (__LIB_3__::func_112(iLocal_111, Global_35, 1060437492 /* Float: 0.707f */))
	{
		case 2:
			return func_1881(iLocal_311, sLocal_911[7]);
		case 3:
			return func_1881(iLocal_311, sLocal_911[8]);
		case 0:
		case 1:
			return func_1881(iLocal_311, sLocal_911[6]);
		default:
			break;
	}
	return false;
}

bool func_1881(int iParam0, char* sParam1)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iParam0, true, false))
		{
			if (!ANIMSCENE::_0x1F0E401031E20146(iParam0, sParam1))
			{
				if (!ANIMSCENE::_0x23E33CB9F4A3F547(iParam0, sParam1))
				{
					if (!ANIMSCENE::_0x0DF57F86FE71DBE5(iParam0, sParam1))
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(iParam0, sParam1);
					}
				}
				else
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iParam0, sParam1, true);
				}
			}
			else
			{
				return true;
			}
		}
		else
		{
			func_1882(iParam0);
		}
	}
	return false;
}

bool func_1882(int iParam0)
{
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(iParam0, true, false))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(iParam0, true))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(iParam0);
		}
	}
	else
	{
		return true;
	}
	return false;
}

void func_1888(char[4] cParam0)
{
	struct<4> Var0;
	Var0 = { __LIB_8__::func_688(cParam0, __LIB_9__::func_40(cParam0)) };
	func_2361(cParam0, &Var0);
}

bool func_1895()
{
	STREAMING::REQUEST_PTFX_ASSET();
	if (!STREAMING::HAS_PTFX_ASSET_LOADED())
	{
		return false;
	}
	return true;
}

void func_1896(int iParam0, int iParam1)
{
	if (__LIB_0__::func_272(iParam0, 0))
	{
		PED::_SET_PED_BODY_COMPONENT(iParam0, iParam1);
		PED::_UPDATE_PED_VARIATION(iParam0, true, true, true, true, false);
	}
}

void func_1898(char[4] cParam0)
{
	__LIB_4__::func_89(&uLocal_77, 0);
	if (__LIB_9__::func_178(&uLocal_77) > 5f)
	{
		if ((iLocal_944 % 2) == 0)
		{
			if (__LIB_8__::func_711(cParam0, "MOB4_SURFCSHOUT", 0))
			{
				iLocal_944++;
				__LIB_1__::func_561(&uLocal_77);
			}
		}
		else if (__LIB_8__::func_711(cParam0, "MOB4_WATERSHOUT", 0))
		{
			iLocal_944++;
			__LIB_1__::func_561(&uLocal_77);
		}
	}
}

void func_1899(int iParam0, int iParam1, float fParam2, float fParam3)
{
	vector3 vVar0;
	float fVar3;
	switch (iLocal_728)
	{
		case 0:
			if (__LIB_0__::func_272(Local_694, 0))
			{
				iLocal_728 = 1;
			}
			break;
		case 1:
			fVar3 = (__LIB_3__::func_978(iParam0, Local_694, 1) - 45f);
			vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fVar3, 0f, 4f, 0f) };
			if (__LIB_0__::func_266(Local_694, Local_694.f_3, 1.5f, 1, 1) || !__LIB_0__::func_491(Local_694, 2106541073))
			{
				Local_694.f_3 = { vVar0 };
				TASK::TASK_GO_STRAIGHT_TO_COORD(Local_694, Local_694.f_3, 1.5f, -1, 40000f, 1056964608 /* Float: 0.5f */, 1);
			}
			break;
		case 2:
			if (__LIB_0__::func_48(Local_694, iParam0, fParam3, 1) || __LIB_0__::func_48(iParam1, iParam0, (fParam3 * 3f), 1))
			{
				iLocal_728 = 3;
			}
			else if (!__LIB_0__::func_491(Local_694, 2106541073))
			{
				TASK::TASK_GO_STRAIGHT_TO_COORD(Local_694, ENTITY::GET_ENTITY_COORDS(iLocal_111, true, false), 3f, -1, 40000f, 1056964608 /* Float: 0.5f */, 0);
			}
			break;
		case 3:
			break;
		case 4:
			break;
	}
}

void func_1901()
{
	if (__LIB_0__::func_272(Local_694, 0) && __LIB_0__::func_272(iLocal_111, 0))
	{
		if (iLocal_728 == 1)
		{
			TASK::TASK_GO_STRAIGHT_TO_COORD(Local_694, ENTITY::GET_ENTITY_COORDS(iLocal_111, true, false), 3f, -1, 40000f, 1056964608 /* Float: 0.5f */, 0);
			iLocal_728 = 2;
		}
	}
}

void func_1902()
{
	func_876(Local_694, vLocal_930, 0f, 0, 1073741824 /* Float: 2f */);
	ENTITY::FREEZE_ENTITY_POSITION(Local_694, true);
}

bool func_1903(int iParam0, bool bParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	vVar0 = { PED::GET_PED_BONE_COORDS(iParam0, 21030, vLocal_59) };
	vVar3 = { PED::GET_PED_BONE_COORDS(iParam0, 34606, vLocal_59) };
	vVar6 = { PED::GET_PED_BONE_COORDS(iParam0, 22798, vLocal_59) };
	vVar9 = { PED::GET_PED_BONE_COORDS(iParam0, 0, vLocal_59) };
	vVar12 = { func_1832(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0, 0, 1036831949 /* Float: 0.1f */) };
	if (bParam1)
	{
		if (!iLocal_295[0])
		{
			if (vVar0.z < vVar12.z)
			{
				GRAPHICS::_START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE_2("scr_mob4_ped_water_splash", iLocal_111, vLocal_59, vLocal_59, PED::GET_PED_BONE_INDEX(iLocal_111, 21030), 1f, false, false, false);
				iLocal_295[0] = 1;
			}
		}
		if (!iLocal_295[1])
		{
			if (vVar3.z < vVar12.z)
			{
				GRAPHICS::_START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE_2("scr_mob4_ped_water_splash", iLocal_111, vLocal_59, vLocal_59, PED::GET_PED_BONE_INDEX(iLocal_111, 34606), 1f, false, false, false);
				iLocal_295[1] = 1;
			}
		}
		if (!iLocal_295[2])
		{
			if (vVar6.z < vVar12.z)
			{
				GRAPHICS::_START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE_2("scr_mob4_ped_water_splash", iLocal_111, vLocal_59, vLocal_59, PED::GET_PED_BONE_INDEX(iLocal_111, 22798), 1f, false, false, false);
				iLocal_295[2] = 1;
			}
		}
	}
	if (((vVar0.z < vVar12.z && vVar3.z < vVar12.z) && vVar6.z < vVar12.z) && vVar9.z < vVar12.z)
	{
		return true;
	}
	return false;
}

bool func_1904(var uParam0, vector3 vParam1, vector3 vParam4, float fParam7, float fParam8, float fParam9)
{
	*uParam0 = { __LIB_3__::func_857(vParam1, fParam7, 0f) };
	if (!__LIB_1__::func_410(*uParam0, vParam4, fParam9, 0) && !__LIB_0__::func_266(Global_35, *uParam0, fParam8, 1, 0))
	{
		return true;
	}
	return false;
}

void func_1905()
{
	if (__LIB_0__::func_272(Global_35, 0))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_BLOCK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_WHISTLE"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DUCK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CHARACTER_WHEEL"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_EMOTE_WHEEL"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_CRAFTING_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER_TRANSITION"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_REVEAL_HUD"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_RADAR_MODE"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT2"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT3"), false);
	}
}

bool func_1906(int iParam0)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iParam0, true, false))
		{
			return true;
		}
	}
	return false;
}

bool func_1907(int iParam0)
{
	return (__LIB_0__::func_399(iParam0, 1, 0, 0) == joaat("WEAPON_UNARMED") && __LIB_0__::func_399(iParam0, 1, 1, 0) == joaat("WEAPON_UNARMED"));
}

float func_1908(vector3 vParam0)
{
	return vParam0.z;
}

bool func_1909(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam0, false) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(iParam0, true, false))
	{
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iParam0, vParam1, vParam4, 2);
		ANIMSCENE::START_ANIM_SCENE(iParam0);
	}
	else
	{
		return true;
	}
	return false;
}

bool func_1911(int iParam0)
{
	if (iParam0 == 2)
	{
		if (func_1881(iLocal_323, sLocal_980[0]))
		{
			return true;
		}
	}
	else if (func_1881(iLocal_323, sLocal_980[1]))
	{
		return true;
	}
	return false;
}

bool func_1912(char[4] cParam0, int iParam1, bool bParam2)
{
	vector3 vVar0;
	if (bParam2)
	{
		if (iLocal_729 >= 2)
		{
			if (__LIB_0__::func_899(&(Local_694.f_8)))
			{
				if (iLocal_729 == 3)
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_694, 0f);
				}
				else
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_694, 1.5f);
				}
				if (__LIB_9__::func_178(&(Local_694.f_8)) > func_2364(iParam1))
				{
					__LIB_1__::func_561(&(Local_694.f_8));
				}
			}
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(Local_694))
			{
				__LIB_2__::func_259(&(Local_694.f_8));
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_694);
				Local_694.f_12++;
			}
		}
	}
	else
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_694, func_2365(iParam1));
	}
	if (iLocal_729 > 0 && iLocal_729 < 4)
	{
		func_1935(1);
		func_1931(175, 10f);
		func_1933(Global_35, 0f, (3.75f * 2f), 1, 1069547520 /* Float: 1.5f */, 0f);
	}
	switch (iLocal_729)
	{
		case 0:
			vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), (__LIB_3__::func_978(Global_35, iLocal_114, 1) + Local_694.f_13), -4.5f, -12f, 0f) };
			if (func_1940(vVar0, 0) >= 0.4f)
			{
				vVar0 = { func_1832(vVar0, 1, 0, 1036831949 /* Float: 0.1f */) };
				func_1518(&Local_694, 0);
				func_1344(Local_694, 1.5f);
				func_876(Local_694, vVar0, __LIB_3__::func_978(Global_35, iLocal_114, 1), 2, 1073741824 /* Float: 2f */);
				ENTITY::FREEZE_ENTITY_POSITION(Local_694, false);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_733);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iParam1, 0, -1f, -1f, -1f);
				TASK::TASK_LOOK_AT_ENTITY(0, iParam1, -1, 0, 51, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_733);
				TASK::TASK_PERFORM_SEQUENCE(Local_694, iLocal_733);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_733);
				func_1932();
				iLocal_731 = 0;
				iLocal_729 = 1;
			}
			else
			{
				Local_694.f_13 = (Local_694.f_13 + 1f);
			}
			break;
		case 1:
			__LIB_4__::func_89(&(Local_694.f_8), 0);
			if (__LIB_1__::func_583(&(Local_694.f_8)) > 4.5f)
			{
				__LIB_1__::func_561(&(Local_694.f_8));
				iLocal_729 = 2;
			}
			break;
		case 2:
			if (func_1940(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 1) < 0.4f || !ENTITY::IS_ENTITY_IN_WATER(Global_35))
			{
				iLocal_729 = 4;
			}
			else if (__LIB_0__::func_48(Local_694, iParam1, (3.75f * 2f), 1))
			{
				TASK::TASK_GOTO_ENTITY_OFFSET_XY(Local_694, iParam1, -1, 0.5f, 0f, 0f, 2.5f, 68);
				iLocal_729 = 3;
			}
			else if (!__LIB_0__::func_491(Local_694, -2015108952))
			{
				TASK::TASK_GOTO_ENTITY_OFFSET_XY(Local_694, iParam1, -1, 0.5f, 3f, 0f, 2.5f, 68);
			}
			break;
		case 3:
			if (func_1940(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 1) < 0.4f || !ENTITY::IS_ENTITY_IN_WATER(Global_35))
			{
				iLocal_729 = 4;
			}
			else if (__LIB_0__::func_48(Local_694, iParam1, 3.75f, 1))
			{
				iLocal_729 = 7;
			}
			else if (!__LIB_0__::func_48(Local_694, iParam1, (3.75f * 2f), 1))
			{
				TASK::TASK_GOTO_ENTITY_OFFSET_XY(Local_694, iParam1, -1, 0.5f, 3f, 0f, 2.5f, 68);
				iLocal_729 = 2;
			}
			else if (!__LIB_0__::func_491(Local_694, -2015108952))
			{
				TASK::TASK_GOTO_ENTITY_OFFSET_XY(Local_694, iParam1, -1, 0.5f, 0f, 0f, 2.5f, 68);
			}
			break;
		case 4:
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_694, 0f);
			__LIB_4__::func_89(&uLocal_482, 0);
			func_1935(0);
			if (func_1940(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 1) >= 0.4f && ENTITY::IS_ENTITY_IN_WATER(Global_35))
			{
				__LIB_1__::func_561(&uLocal_482);
				iLocal_729 = 2;
			}
			else if (__LIB_9__::func_178(&uLocal_482) > 6f)
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_326, "bPortside", true, false);
				func_1937(iLocal_108);
				func_1299(iLocal_326);
				__LIB_1__::func_561(&uLocal_482);
				iLocal_729 = 6;
			}
			break;
		case 5:
			func_1935(0);
			if (!Local_694.f_15)
			{
				func_1518(&Local_694, 1);
			}
			if (!__LIB_0__::func_491(Local_694, 713668775))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_694, func_376(6, 1), 2f, 20000, 0.25f, 0, 40000f);
			}
			if (func_1939(Local_694, &uLocal_476, 3f, 0, 1069547520 /* Float: 1.5f */, -1105618534 /* Float: -0.15f */) && func_1922(ENTITY::GET_ENTITY_COORDS(Local_694, true, false)) < -0.4f)
			{
				TASK::CLEAR_PED_TASKS(Local_694, true, false);
				__LIB_1__::func_561(&uLocal_476);
				func_1941(iLocal_136);
				iLocal_731 = 0;
				iLocal_729 = 8;
			}
			break;
		case 6:
			if (func_1942(cParam0, 0, 1))
			{
				iLocal_729 = 8;
			}
			break;
		case 7:
			func_1935(0);
			func_1931(175, 10f);
			if (!__LIB_0__::func_491(Local_694, joaat("SCRIPT_TASK_PUT_PED_DIRECTLY_INTO_MELEE")) && !PED::IS_PED_IN_MELEE_COMBAT(iParam1))
			{
				TASK::TASK_PUT_PED_DIRECTLY_INTO_MELEE(Local_694, iParam1, joaat("AR_ALLIGATOR_WAIST_AUTOKILL_FRONT"), 0, 0, 1, 0);
				func_1519(Local_694, 0, 0);
			}
			return true;
		case 8:
			break;
	}
	return false;
}

bool func_1913()
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_323))
	{
		if (ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_323, "ARTHUR"))
		{
			__LIB_17__::func_743(Global_35, 1);
			PED::FORCE_PED_MOTION_STATE(Global_35, joaat("MOTIONSTATE_ACTIONMODE_IDLE"), false, 0, false);
		}
		if (ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_323, "Dutch"))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_108, false))
			{
				PED::_0xE0B61ED8BB37712F(iLocal_108);
			}
			TASK::TASK_AIM_AT_COORD(iLocal_108, func_376(7, 0), -1, 0, 1);
			__LIB_17__::func_743(iLocal_108, 1);
			PED::FORCE_PED_MOTION_STATE(Global_35, joaat("MOTIONSTATE_ACTIONMODE_IDLE"), false, 0, false);
		}
		if (ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_323, "CreoleCaptain"))
		{
			PED::SET_PED_CAN_RAGDOLL(iLocal_110, true);
			func_1383(iLocal_114, iLocal_110, 1);
		}
		if (ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_323, "Joules"))
		{
			func_1299(iLocal_325);
		}
	}
	return (((__LIB_11__::func_337(iLocal_323) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, iLocal_323)) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_108, iLocal_323)) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_111, iLocal_323));
}

void func_1914()
{
	if (__LIB_0__::func_272(iLocal_108, 0) && __LIB_0__::func_272(Local_694, 0))
	{
		if (func_1335(iLocal_321))
		{
			if (!__LIB_0__::func_899(&uLocal_1013))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_108, 1015705075))
				{
					if (func_2366(0))
					{
						if (__LIB_11__::func_344(iLocal_108, vLocal_939, 0, 0, 0, 0, 0))
						{
							__LIB_4__::func_89(&uLocal_1013, 0);
						}
					}
				}
			}
			else if (__LIB_9__::func_178(&uLocal_1013) > 0.5f)
			{
				__LIB_1__::func_561(&uLocal_1013);
			}
			if (!__LIB_0__::func_899(&uLocal_1016))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_108, 779357091))
				{
					if (func_2366(1))
					{
						if (__LIB_11__::func_344(iLocal_108, vLocal_939, 0, 1, 0, 0, 0))
						{
							__LIB_4__::func_89(&uLocal_1016, 0);
						}
					}
				}
			}
			else if (__LIB_9__::func_178(&uLocal_1016) > 0.5f)
			{
				__LIB_1__::func_561(&uLocal_1016);
			}
		}
	}
}

void func_1917(int iParam0)
{
	if (iParam0 == 2)
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_324, "bLeft", false, false);
	}
	else
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_324, "bLeft", true, false);
	}
}

bool func_1918()
{
	return (__LIB_11__::func_354(iLocal_324, sLocal_984[13]) || __LIB_11__::func_354(iLocal_324, sLocal_984[12]));
}

int func_1919()
{
	if (func_1335(iLocal_324))
	{
		if (ANIMSCENE::GET_ANIM_SCENE_BOOL(iLocal_324, "bLeft"))
		{
			return 13;
		}
		else
		{
			return 12;
		}
	}
	return 0;
}

bool func_1920()
{
	return ((((__LIB_11__::func_354(iLocal_324, sLocal_984[8]) || __LIB_11__::func_354(iLocal_324, sLocal_984[7])) || __LIB_11__::func_354(iLocal_324, sLocal_984[10])) || __LIB_11__::func_354(iLocal_324, sLocal_984[9])) || __LIB_11__::func_354(iLocal_324, sLocal_984[11]));
}

int func_1921()
{
	if (func_1335(iLocal_324))
	{
		if (ANIMSCENE::GET_ANIM_SCENE_BOOL(iLocal_324, "bLeft"))
		{
			if (!__LIB_0__::func_27(iLocal_945, 8))
			{
				__LIB_1__::func_683(&iLocal_945, 8);
				return 10;
			}
			else if (!__LIB_0__::func_27(iLocal_945, 2))
			{
				__LIB_1__::func_683(&iLocal_945, 2);
				return 8;
			}
		}
		else if (!__LIB_0__::func_27(iLocal_945, 4))
		{
			__LIB_1__::func_683(&iLocal_945, 4);
			return 9;
		}
		else if (!__LIB_0__::func_27(iLocal_945, 1))
		{
			__LIB_1__::func_683(&iLocal_945, 1);
			return 7;
		}
		else if (!__LIB_0__::func_27(iLocal_945, 16))
		{
			__LIB_1__::func_683(&iLocal_945, 16);
			return 11;
		}
	}
	return 0;
}

float func_1922(vector3 vParam0)
{
	vector3 vVar0;
	vVar0 = { func_1832(vParam0, 0, 0, 0f) };
	return (vParam0.z - vVar0.z);
}

bool func_1927()
{
	return iLocal_730 == 1;
}

void func_1928(char[4] cParam0)
{
	__LIB_4__::func_89(&uLocal_86, 0);
	if (__LIB_9__::func_178(&uLocal_86) > 8f)
	{
		if (__LIB_8__::func_711(cParam0, "MOB4_JULESMOAN", 0))
		{
			__LIB_1__::func_561(&uLocal_86);
		}
	}
}

void func_1929(char[4] cParam0)
{
	__LIB_4__::func_89(&uLocal_92, 0);
	if (__LIB_9__::func_178(&uLocal_92) > 5f)
	{
		if (__LIB_8__::func_711(cParam0, "MOB4_TSHOOTIT", 0))
		{
			__LIB_1__::func_561(&uLocal_92);
		}
	}
}

void func_1931(int iParam0, float fParam1)
{
	float fVar0;
	int iVar1;
	if (__LIB_0__::func_272(Local_694, 0) && __LIB_0__::func_272(Global_35, 0))
	{
		if (__LIB_0__::func_266(Local_694, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), fParam1, 1, 0))
		{
			fVar0 = (__LIB_0__::func_665(Global_35, Local_694, 1, 1) / fParam1);
			iVar1 = BUILTIN::FLOOR(__LIB_0__::func_667(BUILTIN::TO_FLOAT(iParam0), 32f, __LIB_0__::func_251(fVar0, 0f, 1f)));
			PAD::SET_PAD_SHAKE(0, 1, iVar1);
		}
	}
}

void func_1932()
{
	if (__LIB_0__::func_272(Local_694, 0))
	{
		if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_136))
		{
			iLocal_136 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_mob4_gator_ripple", Local_694, vLocal_59, vLocal_59, 1f, false, false, false);
		}
	}
}

void func_1933(int iParam0, float fParam1, float fParam2, bool bParam3, int iParam4, int iParam5)
{
	switch (iLocal_731)
	{
		case 0:
			if (!ENTITY::IS_ENTITY_VISIBLE(Local_694))
			{
				func_1519(Local_694, 0, 0);
			}
			else
			{
				iLocal_731 = 1;
			}
			break;
		case 1:
			if (func_1939(Local_694, &uLocal_476, 3f, 1, iParam4, iParam5))
			{
				__LIB_1__::func_561(&uLocal_476);
				iLocal_731 = 2;
			}
			break;
		case 2:
			if (__LIB_2__::func_0(Local_694, 0.25f, 0.75f, 0.1f, 0.9f))
			{
				__LIB_4__::func_89(&uLocal_473, 0);
			}
			if (__LIB_9__::func_178(&uLocal_473) > fParam1 || __LIB_0__::func_266(Local_694, ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam2, 1, 0))
			{
				__LIB_1__::func_561(&uLocal_473);
				AUDIO::PLAY_ANIMAL_VOCALIZATION(Local_694, "ANGRY", false);
				iLocal_731 = 3;
			}
			break;
		case 3:
			if (func_1939(Local_694, &uLocal_476, 2f, 0, iParam4, iParam5))
			{
				func_1519(Local_694, bParam3, bParam3);
				__LIB_1__::func_561(&uLocal_476);
				iLocal_731 = 4;
			}
			break;
		case 4:
			if (ENTITY::IS_ENTITY_VISIBLE(Local_694))
			{
				func_1344(Local_694, iParam4);
			}
			else
			{
				func_1344(Local_694, iParam5);
			}
			if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
			{
				if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0) == iLocal_114)
				{
					if (func_1936((4.5f * 1.75f), 0))
					{
						iLocal_731 = 5;
					}
				}
			}
			break;
		case 5:
			func_1939(Local_694, &uLocal_476, 2f, 0, 1.5f, iParam4);
			break;
	}
}

void func_1934(float fParam0)
{
	int iVar0;
	if (__LIB_0__::func_272(Local_694, 0) && __LIB_0__::func_272(Global_35, 0))
	{
		if (!__LIB_0__::func_899(&(Local_694.f_8)))
		{
			if (func_2372(&iVar0, fParam0))
			{
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_694);
				Local_694.f_12++;
				iLocal_734++;
				iLocal_735 = (iLocal_735 + iVar0);
				__LIB_4__::func_89(&(Local_694.f_8), 0);
			}
		}
		else if (__LIB_10__::func_919(&(Local_694.f_8)) > 500)
		{
			__LIB_1__::func_561(&(Local_694.f_8));
		}
		if (iLocal_735 > 0)
		{
			iLocal_735 = (iLocal_735 - 1);
		}
	}
}

void func_1935(bool bParam0)
{
	vector3 vVar0;
	if (__LIB_0__::func_272(Local_694, 0))
	{
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_136))
		{
			vVar0 = { vLocal_59 };
			if (bParam0)
			{
				vVar0.f_2 = -func_1922(ENTITY::GET_ENTITY_COORDS(Local_694, true, false));
			}
			GRAPHICS::SET_PARTICLE_FX_LOOPED_OFFSETS(iLocal_136, vVar0, vLocal_59);
		}
	}
}

bool func_1936(float fParam0, int iParam1)
{
	if (__LIB_0__::func_272(Local_694, 0) && ENTITY::DOES_ENTITY_EXIST(iLocal_114))
	{
		if (__LIB_0__::func_48(Local_694, iLocal_114, fParam0, 1) || __LIB_3__::func_112(iLocal_114, Local_694, iParam1) == 1)
		{
			return true;
		}
	}
	return false;
}

void func_1937(int iParam0)
{
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_326, "bull_gator_01", Local_694, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_326, "player_zero", iParam0, 0);
}

void func_1938()
{
	if (!__LIB_11__::func_20(256))
	{
		__LIB_11__::func_342(256);
	}
	else if (!__LIB_11__::func_20(512))
	{
		__LIB_11__::func_342(512);
	}
	else if (!__LIB_11__::func_20(1024))
	{
		__LIB_11__::func_342(1024);
	}
}

bool func_1939(struct<17> Param0, float fParam17, float fParam18, bool bParam19, float fParam20, float fParam21)
{
	float fVar0;
	__LIB_4__::func_89(fParam17, 0);
	if (bParam19)
	{
		fVar0 = __LIB_0__::func_667(fParam20, fParam21, __LIB_0__::func_251((__LIB_9__::func_178(fParam17) / fParam18), 0f, 1f));
	}
	else
	{
		fVar0 = __LIB_0__::func_667(fParam21, fParam20, __LIB_0__::func_251((__LIB_9__::func_178(fParam17) / fParam18), 0f, 1f));
	}
	if (__LIB_9__::func_178(fParam17) <= fParam18)
	{
		func_1344(Param0, fVar0);
		return false;
	}
	return true;
}

float func_1940(vector3 vParam0, int iParam3)
{
	vector3 vVar0;
	vector3 vVar3;
	vVar0 = { func_1832(vParam0, 0, 0, 0f) };
	vVar3 = { func_1832(vParam0, 1, 0, 0f) };
	return (vVar0.z - vVar3.z);
}

void func_1941(int iParam0)
{
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iParam0))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iParam0, false);
	}
}

bool func_1942(char[4] cParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	if (__LIB_0__::func_272(Local_694, 0))
	{
		ENTITY::SET_ENTITY_VISIBLE(Local_694, true);
		iVar0 = ANIMSCENE::_GET_ANIM_SCENE_PED(iLocal_326, "player_zero", false);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (iVar0 == Global_35)
			{
				CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
			}
			if (bParam2)
			{
				if (__LIB_11__::func_25(iLocal_326, 0.4f))
				{
					CAM::_0xE3639DB78B3B5400(iVar0);
				}
			}
			if (__LIB_0__::func_272(iVar0, 0))
			{
				if (__LIB_11__::func_337(iLocal_326) || __LIB_11__::func_25(iLocal_326, 1.3f))
				{
					ENTITY::SET_ENTITY_VISIBLE(iVar0, false);
					ENTITY::SET_ENTITY_VISIBLE(Local_694, false);
					if (iVar0 == Global_35)
					{
						if (bParam1)
						{
							PAD::SET_PAD_SHAKE(0, 1000, 256);
						}
						__LIB_1__::func_864(Global_35, 1, 0);
					}
					else
					{
						if (bParam1)
						{
							PAD::SET_PAD_SHAKE(0, 1000, 200);
						}
						__LIB_9__::func_205(cParam0, "ALLY_DEAD_DUTCH", "", 1, 0);
					}
					return true;
				}
			}
		}
	}
	return false;
}

int func_1943(int iParam0, bool bParam1)
{
	if (__LIB_0__::func_399(iParam0, 1, 0, 0) == joaat("WEAPON_UNARMED") && __LIB_0__::func_399(iParam0, 1, 1, 0) == joaat("WEAPON_UNARMED"))
	{
		return 1;
	}
	if ((bParam1 && !func_2341(iParam0)) || !bParam1)
	{
		WEAPON::_HIDE_PED_WEAPONS(iParam0, 2, false);
		TASK::TASK_SWAP_WEAPON(iParam0, 1, !bParam1, 0, 0);
	}
	return 0;
}

int func_1944()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_128))
	{
		iLocal_128 = OBJECT::CREATE_OBJECT(iLocal_31, ENTITY::GET_ENTITY_COORDS(iLocal_114, true, false) - Vector(1f, 0f, 0f), true, true, false, false, true);
		ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_128, iLocal_114, false);
		ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(iLocal_128, false, false);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_128, true);
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_129))
	{
		iLocal_129 = OBJECT::CREATE_OBJECT(iLocal_32, ENTITY::GET_ENTITY_COORDS(iLocal_114, true, false) - Vector(1f, 0f, 0f), true, true, false, false, true);
		ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_129, iLocal_114, false);
		ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(iLocal_129, false, false);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_129, true);
		return 0;
	}
	return 1;
}

void func_1945()
{
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_327, "ARTHUR", Global_35, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_327, "CreoleCaptain", iLocal_110, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_327, "Dutch", iLocal_108, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_327, "Jules", iLocal_111, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_327, "pole", iLocal_115, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_327, "BANDAGE", iLocal_128, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_327, "tourniquet", iLocal_129, 0);
}

int func_1946()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_114) && __LIB_0__::func_272(Global_35, 0))
	{
		switch (__LIB_2__::func_431(iLocal_114, CAM::GET_GAMEPLAY_CAM_COORD(), 1060437492 /* Float: 0.707f */))
		{
			case 0:
				return 1;
			case 1:
				return 2;
			case 2:
				return 3;
			case 3:
				return 4;
			default:
				break;
		}
	}
	return 6;
}

void func_1947(int iParam0, int iParam1, char* sParam2, char* sParam3)
{
	struct<31> Var0;
	int iVar34;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (!TASK::IS_TASK_MOVE_NETWORK_ACTIVE(iParam0))
		{
			Var0.f_6 = -1082130432;
			Var0.f_9 = -1082130432;
			iVar34 = 16384;
			Var0.f_1 = joaat("DEFAULT");
			Var0 = MISC::GET_HASH_KEY(sParam3);
			Var0.f_30 = sLocal_1083[2];
			ENTITY::FREEZE_ENTITY_POSITION(iParam0, true);
			if (ENTITY::IS_ENTITY_A_PED(iParam0))
			{
				iVar34 = 16512;
				PED::_0xE0B61ED8BB37712F(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0));
				PED::SET_PED_LEG_IK_MODE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), 0);
			}
			TASK::TASK_MOVE_NETWORK_ADVANCED_BY_NAME_WITH_INIT_PARAMS_ATTACHED(iParam0, sParam2, &Var0, iParam1, 0, ENTITY::GET_ENTITY_COORDS(iParam1, true, false), ENTITY::GET_ENTITY_ROTATION(iParam1, 2), 2, 0, 0, 0, iVar34, 0, 1);
		}
	}
}

bool func_1948()
{
	return ((func_2374(Global_35) && func_2374(iLocal_111)) && func_2374(iLocal_108));
}

void func_1949()
{
	if (bLocal_1100 == 0)
	{
		CAM::SET_CAM_PARAMS(iLocal_1118, vLocal_59, vLocal_59, fLocal_1102, 0, 1, 1, 2, 1, 0);
		CAM::ATTACH_CAM_TO_ENTITY(iLocal_1118, iLocal_114, vLocal_1109, true);
		CAM::POINT_CAM_AT_ENTITY(iLocal_1118, iLocal_114, vLocal_1112, true);
		CAM::SET_CAM_ACTIVE(iLocal_1118, true);
		CAM::RENDER_SCRIPT_CAMS(true, true, 1000, true, false, 0);
		bLocal_1100 = true;
	}
}

bool func_1950(char[4] cParam0)
{
	if (iLocal_1027 < 3)
	{
		func_2375();
	}
	switch (iLocal_1027)
	{
		case 0:
			if (func_2376(2) && func_2377(iLocal_129, 2))
			{
				func_1221(cParam0, 18, 0);
				iLocal_1027 = 1;
			}
			break;
		case 1:
			if (func_2378() && func_2379(iLocal_129))
			{
				func_2380();
				func_1258(cParam0, 18, 5f);
				iLocal_1027 = 2;
			}
			break;
		case 2:
			func_2381(1, 0);
			iLocal_1027 = 3;
			break;
		case 3:
			if (func_2382())
			{
				__LIB_11__::func_340(iLocal_1047, 1);
				__LIB_11__::func_340(iLocal_1048, 1);
				iLocal_1027 = 4;
			}
			break;
		case 4:
			if (func_2382())
			{
				func_2384(1);
				func_2385();
				func_2386(0);
				if (fLocal_1103 >= 1f)
				{
					iLocal_1101++;
					if (iLocal_1101 >= 4)
					{
						__LIB_4__::func_89(&uLocal_1071, 0);
						func_1955();
						__LIB_0__::func_769();
						__LIB_1__::func_281(&iLocal_1047, 1, 1);
						__LIB_1__::func_281(&iLocal_1048, 1, 1);
						func_2387();
						__LIB_9__::func_195(cParam0, 3);
						func_2388(5);
						iLocal_1024 = 0;
						iLocal_1027 = 6;
					}
					else
					{
						func_2381(0, 0);
						__LIB_11__::func_340(iLocal_1047, 0);
						__LIB_11__::func_340(iLocal_1048, 0);
						func_2388(3);
						func_2389(1084227584 /* Float: 5f */);
						fLocal_1103 = 0f;
						fLocal_1104 = 0f;
						iLocal_1027 = 5;
					}
				}
			}
			break;
		case 5:
			func_2386(0);
			if (func_2378() && func_2379(iLocal_129))
			{
				iLocal_1027 = 3;
			}
			break;
		case 6:
			if (func_2390())
			{
				if (func_2376(5))
				{
					iLocal_1027 = 7;
				}
			}
			break;
		case 7:
			return true;
		case 8:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_328, "tourniquet", iLocal_129, 0);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_328, "bFail", true, false);
			__LIB_1__::func_281(&iLocal_1047, 1, 1);
			__LIB_1__::func_281(&iLocal_1048, 1, 1);
			func_2387();
			iLocal_1026 = 6;
			break;
	}
	func_2391();
	func_2392(iLocal_1047, fLocal_1107);
	func_2393(8, fLocal_1103);
	func_2393(7, (IntToFloat(iLocal_1101) * (1f / 4f)));
	return false;
}

bool func_1951(char[4] cParam0)
{
	if (iLocal_1028 < 3)
	{
		func_2375();
	}
	switch (iLocal_1028)
	{
		case 0:
			if (func_2376(5))
			{
				func_1221(cParam0, 19, 0);
				iLocal_1028 = 1;
			}
			break;
		case 1:
			if (func_2378())
			{
				func_2380();
				func_1258(cParam0, 19, 5f);
				iLocal_1028 = 2;
			}
			break;
		case 2:
			iLocal_1028 = 3;
			break;
		case 3:
			func_2394();
			fLocal_1105 = (fLocal_1105 + (0.65f * MISC::GET_FRAME_TIME()));
			fLocal_1106 = (fLocal_1106 + (0.65f * MISC::GET_FRAME_TIME()));
			fLocal_1105 = __LIB_0__::func_251(fLocal_1105, 0f, 0.501f);
			fLocal_1106 = __LIB_0__::func_251(fLocal_1106, 0f, 0.501f);
			if (fLocal_1105 >= 0.5f && fLocal_1106 >= 0.5f)
			{
				func_2389(1084227584 /* Float: 5f */);
				__LIB_4__::func_89(&uLocal_1080, 0);
				func_2395(1);
				iLocal_1028 = 4;
			}
			else if (fLocal_1105 <= 0f && fLocal_1106 <= 0f)
			{
				iLocal_1028 = 2;
			}
			break;
		case 4:
			func_2394();
			if (!__LIB_0__::func_139(iLocal_1051) || !__LIB_0__::func_139(iLocal_1052))
			{
				iLocal_1051 = __LIB_11__::func_347("MOB4_UC_PRESSURE", func_2396(12), 3, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
				iLocal_1052 = __LIB_11__::func_347("MOB4_UC_PRESSURE", func_2396(13), 3, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
				__LIB_11__::func_341(iLocal_1051, "INPUT_MOB4_UC_PRESSURE_L");
				__LIB_11__::func_341(iLocal_1052, "INPUT_MOB4_UC_PRESSURE_R");
				__LIB_1__::func_382(iLocal_1051, bLocal_1099, 1);
				__LIB_1__::func_382(iLocal_1052, bLocal_1099, 1);
				__LIB_11__::func_340(iLocal_1051, 1);
				__LIB_11__::func_340(iLocal_1052, 1);
				func_2398(iLocal_1051, 1);
				func_2398(iLocal_1052, 1);
			}
			else if (__LIB_1__::func_530(iLocal_1051, 1) || __LIB_1__::func_530(iLocal_1052, 1))
			{
				func_2399(1);
				iLocal_1028 = 5;
			}
			break;
		case 5:
			func_2394();
			switch (iLocal_1029)
			{
				case 3:
					func_2400();
					__LIB_4__::func_89(&uLocal_1077, 0);
					__LIB_1__::func_561(&uLocal_1074);
					if (__LIB_9__::func_178(&uLocal_1077) > 6f)
					{
						__LIB_11__::func_340(iLocal_1051, 0);
						__LIB_11__::func_340(iLocal_1052, 0);
						__LIB_1__::func_561(&uLocal_1077);
						func_2395(0);
						func_2399(0);
						iLocal_1028 = 6;
					}
					break;
				case 2:
					func_2401();
					__LIB_4__::func_89(&uLocal_1074, 0);
					__LIB_1__::func_561(&uLocal_1077);
					if (__LIB_9__::func_178(&uLocal_1074) > 4.25f)
					{
						func_1955();
						__LIB_0__::func_769();
						__LIB_1__::func_561(&uLocal_1074);
						__LIB_1__::func_281(&iLocal_1051, 1, 1);
						__LIB_1__::func_281(&iLocal_1052, 1, 1);
						iLocal_1024 = 0;
						iLocal_1028 = 7;
					}
					break;
				case 0:
				case 1:
					func_2400();
					__LIB_1__::func_561(&uLocal_1074);
					__LIB_1__::func_561(&uLocal_1077);
					break;
			}
			fLocal_1105 = (fLocal_1105 + ((0.65f * ((Local_1063 * 0.5f) - (fLocal_1105 - 0.5f))) * MISC::GET_FRAME_TIME()));
			fLocal_1106 = (fLocal_1106 + ((0.65f * ((Local_1063.f_1 * 0.5f) - (fLocal_1106 - 0.5f))) * MISC::GET_FRAME_TIME()));
			fLocal_1105 = __LIB_0__::func_251(fLocal_1105, 0.5f, 0.89f);
			fLocal_1106 = __LIB_0__::func_251(fLocal_1106, 0.5f, 0.89f);
			break;
		case 6:
			fLocal_1105 = 0f;
			fLocal_1106 = 0f;
			__LIB_4__::func_89(&uLocal_1074, 0);
			if (__LIB_9__::func_178(&uLocal_1074) > 1f)
			{
				__LIB_1__::func_561(&uLocal_1074);
				__LIB_1__::func_281(&iLocal_1051, 1, 1);
				__LIB_1__::func_281(&iLocal_1052, 1, 1);
				func_2402(4, 0);
				iLocal_1028 = 2;
			}
			break;
		case 7:
			__LIB_4__::func_89(&uLocal_1074, 0);
			if (__LIB_9__::func_178(&uLocal_1074) > 0.4f)
			{
				__LIB_1__::func_561(&uLocal_1080);
				__LIB_1__::func_561(&uLocal_1074);
				func_2387();
				func_2395(0);
				func_2399(0);
				iLocal_1028 = 8;
			}
			break;
		case 8:
			return true;
		case 9:
			ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_328, "bFail", true, false);
			__LIB_1__::func_281(&uLocal_1049, 1, 1);
			__LIB_1__::func_281(&uLocal_1050, 1, 1);
			__LIB_1__::func_281(&iLocal_1051, 1, 1);
			__LIB_1__::func_281(&iLocal_1052, 1, 1);
			func_2387();
			func_2395(0);
			func_2399(0);
			iLocal_1026 = 6;
			break;
	}
	func_2403();
	func_2404();
	func_2405();
	return false;
}

void func_1952()
{
	func_2406(Global_35);
	func_2406(iLocal_108);
	func_2406(iLocal_111);
	func_2406(iLocal_129);
}

void func_1953()
{
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_328, "ARTHUR", Global_35, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_328, "Dutch", iLocal_108, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_328, "Jules", iLocal_111, 0);
}

bool func_1954()
{
	return __LIB_9__::func_178(&uLocal_1065) > fLocal_1108;
}

void func_1955()
{
	__LIB_1__::func_561(&uLocal_1068);
	__LIB_1__::func_561(&uLocal_1065);
}

void func_1956()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_129))
	{
		if (__LIB_0__::func_899(&uLocal_1071))
		{
			OBJECT::_SET_OBJECT_BURN_LEVEL(iLocal_129, __LIB_0__::func_251((__LIB_9__::func_178(&uLocal_1071) / 3.5f), 0f, 1f), true);
			if (__LIB_9__::func_178(&uLocal_1071) >= 3.5f)
			{
				__LIB_1__::func_561(&uLocal_1071);
			}
		}
	}
}

void func_1957()
{
	Local_1053.f_2 = Local_1053;
	Local_1053.f_3 = Local_1053.f_1;
	Local_1053 = PAD::GET_CONTROL_NORMAL(0, func_2396(0));
	Local_1053.f_1 = PAD::GET_CONTROL_NORMAL(0, func_2396(1));
	Local_1053.f_4 = (MISC::ABSF(Local_1053) + MISC::ABSF(Local_1053.f_1));
	Local_1058.f_2 = Local_1058;
	Local_1058.f_3 = Local_1058.f_1;
	Local_1058 = PAD::GET_CONTROL_NORMAL(0, func_2396(3));
	Local_1058.f_1 = func_2407(4);
	Local_1058.f_4 = (MISC::ABSF(Local_1058) + MISC::ABSF(Local_1058.f_1));
	Local_1063 = PAD::GET_CONTROL_NORMAL(0, func_2396(2));
	Local_1063.f_1 = PAD::GET_CONTROL_NORMAL(0, func_2396(5));
}

void func_1958()
{
	if (__LIB_0__::func_272(Global_35, 0))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPRINT"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_BLOCK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_WHISTLE"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DUCK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CHARACTER_WHEEL"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_EMOTE_WHEEL"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_CRAFTING_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER_TRANSITION"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_REVEAL_HUD"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_RADAR_MODE"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT2"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT3"), false);
	}
}

void func_1960(char[4] cParam0, var uParam1, int iParam2)
{
	if (__LIB_0__::func_13(32768))
	{
		return;
	}
	__LIB_5__::func_351(&(Global_1835011[cParam0->f_607 /*74*/].f_22), uParam1, iParam2);
}

bool func_1961()
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_329))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_329, false))
		{
			return true;
		}
		else if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_329, true, false))
		{
			if (AUDIO::LOAD_STREAM("CLOUD_BED", "DEATH_FAIL_RESPAWN_SOUNDS"))
			{
				ANIMSCENE::START_ANIM_SCENE(iLocal_329);
				iLocal_1126 = AUDIO::_0x0556C784FA056628("CLOUD_BED", "DEATH_FAIL_RESPAWN_SOUNDS");
				AUDIO::PLAY_STREAM_FRONTEND(iLocal_1126);
				AUDIO::START_AUDIO_SCENE("CME_context_mob4_TimeLapse_Skyline_Scene");
			}
		}
		else if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(iLocal_329, true))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(iLocal_329);
		}
	}
	return false;
}

void func_1962()
{
	struct<16> Var0;
	struct<10> Var16;
	int iVar26;
	StringCopy(&(Var0.f_10), "player_camp", 32);
	Var0.f_14 = 6096;
	Var16.f_6 = { func_212(8, 7) };
	iVar26 = 2176;
	Var16 = iVar26;
	Var0 = { Var16 };
	Var0.f_15 = 1;
	__LIB_4__::func_709(Var0, 2);
}

int func_1972(int iParam0, int iParam1)
{
	var uVar0;
	return func_2410(&uVar0, iParam0, iParam1);
}

void func_1991(int iParam0, int iParam1)
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
				func_1277(iParam1, joaat("WEAPON_REVOLVER_CATTLEMAN_SADIE"), 0, 0, 2, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
				func_1277(iParam1, joaat("WEAPON_REVOLVER_CATTLEMAN_SADIE_DUALWIELD"), 0, 0, 3, 1, 1, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 1, 0, 0);
			}
			break;
	}
}

void func_1994(char[4] cParam0, int iParam1, int iParam2, char* sParam3)
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
		func_2433(cParam0, iParam1, 380318, 0, sParam3, 67108863, 1023, 3, iParam2);
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

void func_2033(int iParam0, bool bParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	Var0 = { func_675(iParam0, 0, 0) };
	Var5 = { __LIB_0__::func_429(iParam0, Var0, Var0.f_4, 0) };
	if (__LIB_0__::func_800(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	INVENTORY::_0x65A5F70F4A292EBE(__LIB_0__::func_162(0), &Var5, bParam1);
}

void func_2037(var uParam0)
{
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (__LIB_4__::func_562(uParam0, 512))
	{
		return;
	}
	if (__LIB_9__::func_178(&(uParam0->f_2262)) < 2f)
	{
		return;
	}
	if (__LIB_18__::func_329(1, 0))
	{
		CAM::DO_SCREEN_FADE_OUT(1000);
		__LIB_4__::func_532(uParam0, 524288);
	}
}

void func_2071(var uParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	if (((!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_804) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_804, false)) || ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_804)) || __LIB_0__::func_84(uParam0, 512))
	{
		if (!__LIB_0__::func_1(uParam0->f_861, 128))
		{
			__LIB_1__::func_625();
		}
		return;
	}
	if ((__LIB_4__::func_988(uParam0, Global_35, 4) || (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_804, __LIB_0__::func_731(Global_35)) && ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_804, __LIB_0__::func_731(Global_35)))) || !ANIMSCENE::_0x4B85B3CF91972222(uParam0->f_804))
	{
		if (!__LIB_0__::func_1(uParam0->f_861, 128))
		{
			__LIB_1__::func_625();
		}
		return;
	}
	bVar0 = true;
	iVar1 = UIFEED::_0xC17F69E1418CD11F(9);
	if (iVar1 != 0)
	{
		if (__LIB_0__::func_269(iVar1))
		{
			if (__LIB_0__::func_572(Global_43801, 0))
			{
				bVar0 = false;
			}
		}
	}
	bVar2 = false;
	if (__LIB_0__::func_1(uParam0->f_861, 512))
	{
		bVar2 = true;
	}
	if (__LIB_18__::func_329(bVar0, bVar2))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE_2(uParam0->f_804);
		__LIB_1__::func_625();
	}
}

void func_2085(var uParam0)
{
	if (!__LIB_0__::func_84(uParam0, 536870912))
	{
		__LIB_0__::func_106(uParam0, 1);
		func_1496(&(uParam0->f_861), uParam0->f_872);
		__LIB_1__::func_436();
		__LIB_0__::func_88(uParam0, 536870912);
	}
	if (__LIB_0__::func_84(uParam0, 524288))
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	__LIB_5__::func_85(uParam0);
	__LIB_8__::func_726(uParam0, 1);
	__LIB_5__::func_67(uParam0);
	__LIB_4__::func_622(uParam0);
	__LIB_0__::func_108(uParam0);
	__LIB_4__::func_977(uParam0, 4);
	__LIB_5__::func_69(uParam0);
	__LIB_0__::func_99(uParam0, 1);
	__LIB_4__::func_570(uParam0);
	__LIB_1__::func_561(&(uParam0->f_1));
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_804) && ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_804))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_804);
	}
	__LIB_4__::func_716(!__LIB_0__::func_1(uParam0->f_861, 128));
	if (!__LIB_0__::func_1(uParam0->f_861, 128))
	{
		__LIB_1__::func_625();
	}
}

void func_2092(char[4] cParam0)
{
	if (func_2529(cParam0, Global_35, "ARTHUR", 1, 1))
	{
		__LIB_0__::func_569(joaat("MOTIONSTATE_WALK"), 2000, 0, 1, 1, 0, 0, 0);
	}
	if (func_2529(cParam0, iLocal_108, "dutch", 1, 1))
	{
		func_1215();
		PED::FORCE_PED_MOTION_STATE(iLocal_108, joaat("MOTIONSTATE_WALK"), false, 0, false);
	}
	if (func_2529(cParam0, iLocal_109, "HoseaMatthews", 1, 1))
	{
		ANIMSCENE::START_ANIM_SCENE(iLocal_302);
	}
}

void func_2093(char[4] cParam0)
{
	CLOCK::SET_CLOCK_TIME(21, 0, 0);
	if (__LIB_2__::func_954() != joaat("FOG"))
	{
		MISC::_SET_WEATHER_TYPE(joaat("FOG"), true, true, false, 0f, false);
	}
	if (func_2529(cParam0, Global_35, "ARTHUR", 1, 1))
	{
		__LIB_1__::func_951(&iLocal_121);
		if (__LIB_0__::func_399(Global_35, 1, 0, 1) != iLocal_292)
		{
			func_1291(Global_35, 0);
		}
		if (!__LIB_11__::func_20(8) && !__LIB_11__::func_20(32))
		{
			func_1853(1, 1, 0, 1089470464 /* Float: 7.5f */);
			ANIMSCENE::START_ANIM_SCENE(iLocal_305);
		}
		__LIB_0__::func_569(joaat("MOTIONSTATE_WALK"), 2000, 0, 1, 1, 0, 0, 0);
	}
	if (func_2529(cParam0, iLocal_108, "dutch", 1, 1))
	{
		__LIB_1__::func_951(&iLocal_120);
		if (__LIB_0__::func_399(iLocal_108, 1, 1, 1) != iLocal_292)
		{
			func_1291(iLocal_108, 1);
		}
		PED::FORCE_PED_MOTION_STATE(iLocal_108, joaat("MOTIONSTATE_WALK"), false, 0, false);
	}
	if (func_2529(cParam0, iLocal_110, "CreoleCaptain", 1, 1))
	{
		__LIB_1__::func_951(&iLocal_119);
		if (__LIB_0__::func_399(iLocal_110, 1, 1, 1) != iLocal_292)
		{
			func_1291(iLocal_110, 1);
		}
		PED::FORCE_PED_MOTION_STATE(iLocal_110, joaat("MOTIONSTATE_WALK"), false, 0, false);
	}
}

void func_2094(char[4] cParam0)
{
	func_2532();
	func_2533(cParam0);
	if (func_2534(iLocal_123) >= 1f)
	{
		if (__LIB_11__::func_25(cParam0->f_7375.f_804, 23.5f))
		{
			__LIB_4__::func_89(&uLocal_924, 0);
		}
	}
	if (func_2534(iLocal_124) >= 1f)
	{
		if (__LIB_11__::func_25(cParam0->f_7375.f_804, 24.5f))
		{
			__LIB_4__::func_89(&uLocal_927, 0);
		}
	}
	if (__LIB_11__::func_25(cParam0->f_7375.f_804, 30f))
	{
		__LIB_1__::func_951(&iLocal_123);
		__LIB_1__::func_951(&iLocal_124);
	}
	if (func_2529(cParam0, Global_35, "ARTHUR", 1, 0))
	{
		__LIB_11__::func_28(&Global_35, &iLocal_114, 3, 1);
		__LIB_0__::func_489(0, 0);
	}
	else
	{
		CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
	}
	if (func_2529(cParam0, iLocal_108, "dutch", 1, 0))
	{
		__LIB_11__::func_28(&iLocal_108, &iLocal_114, 2, 1);
	}
	if (func_2529(cParam0, iLocal_111, "Jules", 1, 0))
	{
		__LIB_11__::func_28(&iLocal_111, &iLocal_114, 4, 1);
	}
	if (func_2529(cParam0, iLocal_110, "CreoleCaptain", 1, 0))
	{
		__LIB_11__::func_28(&iLocal_110, &iLocal_114, -1, 1);
	}
	if (func_2529(cParam0, iLocal_110, "CreoleCaptain", 1, 1))
	{
		func_1326();
	}
	if (__LIB_9__::func_346(cParam0, iLocal_114, "SKIFF", 0, 1, 0))
	{
		ENTITY::SET_ENTITY_VELOCITY(iLocal_114, func_2536(iLocal_114, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_114, 0f, 1f, 0f), 1065353216 /* Float: 1f */) * Vector(1.25f, 1.25f, 1.25f));
	}
}

void func_2096(char[4] cParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_114))
	{
		if (PED::IS_PED_IN_VEHICLE(Global_35, iLocal_114, true))
		{
			PED::_0xE0B61ED8BB37712F(Global_35);
		}
		if (PED::IS_PED_IN_VEHICLE(iLocal_108, iLocal_114, true))
		{
			PED::_0xE0B61ED8BB37712F(iLocal_108);
		}
		if (PED::IS_PED_IN_VEHICLE(iLocal_111, iLocal_114, true))
		{
			PED::_0xE0B61ED8BB37712F(iLocal_111);
		}
	}
	__LIB_2__::func_919(Global_35, 0, 1);
	__LIB_2__::func_919(iLocal_108, 0, 1);
	__LIB_2__::func_919(iLocal_111, 0, 1);
	if (!__LIB_0__::func_491(iLocal_110, 1199744105))
	{
		TASK::_TASK_VEHICLE_DRIVE_TO_DESTINATION(iLocal_110, iLocal_114, 2404.619f, -522.8186f, 40.49999f, 1.5f, 524295, 6, 5f, 5f, 0);
	}
	if (func_2529(cParam0, Global_35, "ARTHUR", 1, 1))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 0, false);
	}
	func_1399(cParam0, 0);
	if (!bLocal_300 && func_2529(cParam0, iLocal_108, "Dutch", 1, 1))
	{
		func_2538();
		bLocal_300 = true;
	}
	if (!__LIB_11__::func_20(128))
	{
		if (!bLocal_1119)
		{
			bLocal_1119 = func_1397(cParam0);
		}
	}
}

void func_2097(char[4] cParam0)
{
	func_2539();
	func_1221(cParam0, 1, 1);
}

void func_2098(char[4] cParam0)
{
	func_1221(cParam0, 5, 1);
}

void func_2099(char[4] cParam0)
{
	__LIB_0__::func_489(0, 0);
	func_1221(cParam0, 12, 1);
}

void func_2100(char[4] cParam0)
{
	func_1221(cParam0, 12, 1);
}

bool func_2101(char[4] cParam0)
{
	func_1399(cParam0, 1);
	if (__LIB_11__::func_20(128))
	{
		return iLocal_1127 > 2;
	}
	return cParam0->f_607 == cParam0->f_607;
}

bool func_2103(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 22);
}

char* func_2104(char[4] cParam0)
{
	switch (__LIB_6__::func_864(cParam0))
	{
		case 2:
			return 30f;
		case 3:
			if (func_1855(5) || func_1855(8))
			{
				return 30f;
			}
			else if (!func_1855(11))
			{
				return 85f;
			}
			break;
	}
	return 75f;
}

int func_2105(char[4] cParam0)
{
	switch (__LIB_6__::func_864(cParam0))
	{
		case 2:
			return 50f;
		case 3:
			if (func_1855(5) || func_1855(8))
			{
				return 50f;
			}
			else if (!func_1855(11))
			{
				return 160f;
			}
			break;
	}
	return 150f;
}

void func_2107(bool bParam0)
{
	if (MAP::DOES_BLIP_EXIST(iLocal_107))
	{
		if (bParam0)
		{
			MAP::_BLIP_SET_MODIFIER(iLocal_107, -1186550032);
		}
		else
		{
			MAP::_BLIP_REMOVE_MODIFIER(iLocal_107, -1186550032);
		}
	}
}

float func_2112(char[4] cParam0)
{
	if (__LIB_8__::func_663(cParam0, __LIB_6__::func_864(cParam0)) != 5)
	{
		__LIB_1__::func_561(&uLocal_479);
	}
	else if ((__LIB_0__::func_272(iLocal_110, 0) && __LIB_0__::func_272(iLocal_108, 0)) && __LIB_0__::func_272(iLocal_111, 0))
	{
		if ((ENTITY::IS_ENTITY_IN_WATER(iLocal_108) || ENTITY::IS_ENTITY_IN_WATER(iLocal_110)) || (ENTITY::IS_ENTITY_IN_WATER(iLocal_111) && __LIB_6__::func_864(cParam0) != 6))
		{
			__LIB_4__::func_89(&uLocal_479, 0);
		}
		else
		{
			__LIB_1__::func_561(&uLocal_479);
		}
	}
	return __LIB_9__::func_178(&uLocal_479);
}

void func_2113(int iParam0)
{
	vector3 vVar0;
	if (__LIB_0__::func_272(Local_711, 0) && __LIB_0__::func_272(iParam0, 0))
	{
		if (!__LIB_0__::func_491(Local_711, joaat("SCRIPT_TASK_PUT_PED_DIRECTLY_INTO_MELEE")) && !PED::IS_PED_IN_MELEE_COMBAT(iParam0))
		{
			vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), __LIB_3__::func_978(iLocal_114, iParam0, 1), 0f, 1f, 0f) };
			vVar0 = { func_1832(vVar0, 1, 0, 1036831949 /* Float: 0.1f */) };
			func_876(Local_711, vVar0, __LIB_0__::func_152(vVar0, ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 1), 0, 1073741824 /* Float: 2f */);
			func_1519(Local_711, 0, 0);
			TASK::TASK_PUT_PED_DIRECTLY_INTO_MELEE(Local_711, iParam0, joaat("AR_ALLIGATOR_LEAPKILL"), 0, 0, 1, 0);
		}
	}
}

float func_2115(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0f;
		default:
			break;
	}
	return 2.5f;
}

char* func_2116(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "MOB4_ABANDONED";
		case 2:
			return "MOB4_ATTACK_DUTCH";
		case 3:
			return "MOB4_ATTACK_THOMAS";
		case 4:
			return "MOB4_ATTACK_JULES";
		case 5:
			return "MOB4_AHORSE";
		case 6:
			return "MOB4_DHORSE";
		case 7:
			return "MOB4_ATTACK_AHORSE";
		case 8:
			return "MOB4_ATTACK_DHORSE";
		case 9:
			return "MOB4_DEAD_SKIFF";
		case 10:
			return "MOB4_SEARCH_FAIL";
		default:
			break;
	}
	return "MOB4_FAIL_MISSING";
}

void func_2129(char[4] cParam0)
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
							iVar1 = func_2558(128);
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
			func_2559(cParam0);
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

void func_2220()
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
	func_2615(0);
	func_2616(7);
	func_2617(joaat("KIT_BANDANA"), 1, 1, 0);
	if (__LIB_0__::func_241() == 1160113249)
	{
		func_2617(joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"), 1, 1, 1);
		func_2617(-361635024 /* GXTEntry: "The Cowboy" */, 1, 1, 1);
	}
	__LIB_0__::func_841(Global_35, &uVar0);
}

void func_2240()
{
	int iVar0;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_637(joaat("UPGRADE_STAMINA_TANK_1"), 1, 752097756);
	iVar0 = __LIB_0__::func_963(1);
	__LIB_1__::func_132(1, iVar0, 0);
}

void func_2242()
{
	int iVar0;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_637(joaat("UPGRADE_DEADEYE_TANK_1"), 1, 752097756);
	iVar0 = __LIB_0__::func_963(2);
	__LIB_1__::func_132(2, iVar0, 0);
}

void func_2243()
{
	int iVar0;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_637(joaat("UPGRADE_HEALTH_TANK_1"), 1, 752097756);
	iVar0 = __LIB_0__::func_963(0);
	__LIB_1__::func_132(0, iVar0, 0);
}

bool func_2265(int iParam0, int iParam1)
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
	if (!func_2637(iParam0, 856287005, &iVar9, &uVar5, &uVar0, 1, 0))
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
				if (func_2265(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_2265(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_2265(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_2265(iVar21, 1))
				{
				}
			}
		}
		func_2641();
		return true;
	}
	return false;
}

int func_2306(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, float fParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17)
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
				iVar0 = func_2652(iParam1, bParam3, bParam8, iParam9, iParam10, iParam11, fParam12, bParam7, bParam15, bParam16, iParam17);
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

float func_2319(int iParam0, int iParam1, int iParam2, char* sParam3, bool bParam4)
{
	int iVar0;
	float fVar1;
	TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sParam3, ENTITY::GET_ENTITY_COORDS(iParam0, true, false), &iVar0);
	__LIB_0__::func_309(iVar0, iParam1, iParam2);
	fVar1 = __LIB_0__::func_251((BUILTIN::TO_FLOAT((iVar0 - iParam1)) / BUILTIN::TO_FLOAT((iParam2 - iParam1))), 0f, 1f);
	if (bParam4)
	{
		fVar1 = MISC::ABSF((fVar1 - 1f));
	}
	return fVar1;
}

int func_2320(int iParam0, int iParam1, char* sParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7)
{
	float fVar0;
	float fVar1;
	int iVar2;
	fVar0 = (TASK::_0x3ACC128510142B9D(sParam2, ENTITY::GET_ENTITY_COORDS(iParam0, true, false)) - TASK::_0x3ACC128510142B9D(sParam2, ENTITY::GET_ENTITY_COORDS(iParam1, true, false)));
	if (fVar0 < 0f)
	{
		fVar0 = 0.1f;
	}
	fVar1 = __LIB_0__::func_251(((fParam6 * (fParam4 / fVar0)) * fParam3), 1.001f, fParam7);
	if (fVar0 > fParam5 || !__LIB_0__::func_394(Global_35, iLocal_112, 0))
	{
		if (__LIB_0__::func_491(iParam0, -1665583462))
		{
			TASK::CLEAR_PED_TASKS(iParam0, true, false);
		}
		return 0;
	}
	else if (__LIB_0__::func_491(iParam0, -1665583462))
	{
		iVar2 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, -1665583462, true);
		if (iVar2 == 1)
		{
			TASK::_0xBAAB791AA72C2821(iParam0, fVar1);
		}
	}
	else
	{
		TASK::_TASK_MOVE_IN_TRAFFIC_2(iParam0, __LIB_9__::func_921(sParam2), 1073741824 /* Float: 2f */, fParam6, 796, 1);
	}
	return 1;
}

bool func_2323(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_11__::func_20(8);
		case 1:
			return __LIB_11__::func_20(8);
		case 2:
			return __LIB_11__::func_20(32);
		case 3:
			return __LIB_11__::func_20(32);
		case 7:
			return __LIB_11__::func_20(32);
		case 8:
			return __LIB_11__::func_20(32);
		default:
			break;
	}
	return false;
}

int func_2324(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 32;
		case 1:
			return 35;
		case 2:
			return 49;
		case 3:
			return 50;
		case 4:
			return 55;
		case 5:
			return 56;
		case 6:
			return 56;
		case 7:
			return 41;
		case 8:
			return 55;
		default:
			break;
	}
	return -1;
}

Vector3 func_2325(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2231.893f, -586.4093f, 40.49999f;
		case 4:
			return 2238.131f, -634.4979f, 40.49999f;
		case 7:
			return 2199.01f, -601.6089f, 40.49999f;
		case 8:
			return 2220.582f, -611.3447f, 40.49999f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

int func_2327(int* iParam0)
{
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*iParam0, Global_35, 1, 1))
	{
		ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(*iParam0);
		iParam0->f_6 = 16;
		return 1;
	}
	return 0;
}

void func_2328(int* iParam0, float fParam1, float fParam2)
{
	if (__LIB_0__::func_272(Global_35, 0) && __LIB_0__::func_272(*iParam0, 0))
	{
		if (__LIB_0__::func_48(Global_35, *iParam0, fParam1, 1) && !PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
		{
			iParam0->f_2 = func_2330(*iParam0);
			switch (iParam0->f_7)
			{
				case 1:
					iParam0->f_6 = 16;
					break;
				case 2:
					iParam0->f_6 = 8;
					break;
				case 3:
					if (__LIB_0__::func_48(Global_35, *iParam0, fParam2, 1))
					{
						iParam0->f_6 = 10;
					}
					break;
				case 4:
					if (__LIB_0__::func_48(Global_35, *iParam0, fParam2, 1))
					{
						iParam0->f_6 = 12;
					}
					break;
			}
		}
	}
}

int func_2330(int iParam0)
{
	int iVar0;
	if (__LIB_0__::func_665(iParam0, Global_35, 1, 1) > __LIB_0__::func_665(iParam0, iLocal_108, 1, 1))
	{
		iVar0 = iLocal_108;
	}
	else
	{
		iVar0 = Global_35;
	}
	return iVar0;
}

void func_2331(int iParam0)
{
	if (!PED::_0x5102307CE88798EB(iParam0))
	{
		PED::REQUEST_PED_VISIBILITY_TRACKING(iParam0);
	}
}

char* func_2335(struct<11> Param0)
{
	if (func_2339(Param0))
	{
		switch (Param0.f_10)
		{
			case 0:
				switch (__LIB_3__::func_112(Param0, Global_35, 1060437492 /* Float: 0.707f */))
				{
					case 0:
						return "IG2_LOOT_TRAP_ENTER_FRONT";
					case 1:
						return "IG2_LOOT_TRAP_ENTER_BACK";
					case 2:
						return "IG2_LOOT_TRAP_ENTER_LEFT";
					case 3:
						return "IG2_LOOT_TRAP_ENTER_RIGHT";
					default:
						break;
				}
				break;
			case 1:
				switch (__LIB_3__::func_112(Param0, Global_35, 1060437492 /* Float: 0.707f */))
				{
					case 0:
						return "IG2_MED_TRAP_ENTER_FRONT";
					case 1:
						return "IG2_MED_TRAP_ENTER_BACK";
					case 2:
						return "IG2_MED_TRAP_ENTER_LEFT";
					case 3:
						return "IG2_MED_TRAP_ENTER_RIGHT";
					default:
						break;
				}
				break;
			case 2:
				switch (__LIB_3__::func_112(Param0, Global_35, 1060437492 /* Float: 0.707f */))
				{
					case 0:
						return "IG2_HI_TRAP_ENTER_FRONT";
					case 1:
						return "IG2_HI_TRAP_ENTER_BACK";
					case 2:
						return "IG2_HI_TRAP_ENTER_LEFT";
					case 3:
						return "IG2_HI_TRAP_ENTER_RIGHT";
					default:
						break;
				}
				break;
		}
	}
	else
	{
		switch (Param0.f_10)
		{
			case 0:
				switch (__LIB_3__::func_112(Param0, Global_35, 1060437492 /* Float: 0.707f */))
				{
					case 0:
						return "IG2_LOOT_TRAP_ENTER_FRONT_EMPTY";
					case 1:
						return "IG2_LOOT_TRAP_ENTER_BACK_EMPTY";
					case 2:
						return "IG2_LOOT_TRAP_ENTER_LEFT_EMPTY";
					case 3:
						return "IG2_LOOT_TRAP_ENTER_RIGHT_EMPTY";
					default:
						break;
				}
				break;
			case 1:
				switch (__LIB_3__::func_112(Param0, Global_35, 1060437492 /* Float: 0.707f */))
				{
					case 0:
						return "IG2_MED_TRAP_ENTER_FRONT_EMPTY";
					case 1:
						return "IG2_MED_TRAP_ENTER_BACK_EMPTY";
					case 2:
						return "IG2_MED_TRAP_ENTER_LEFT_EMPTY";
					case 3:
						return "IG2_MED_TRAP_ENTER_RIGHT_EMPTY";
					default:
						break;
				}
				break;
			case 2:
				switch (__LIB_3__::func_112(Param0, Global_35, 1060437492 /* Float: 0.707f */))
				{
					case 0:
						return "IG2_HI_TRAP_ENTER_FRONT_EMPTY";
					case 1:
						return "IG2_HI_TRAP_ENTER_BACK_EMPTY";
					case 2:
						return "IG2_HI_TRAP_ENTER_LEFT_EMPTY";
					case 3:
						return "IG2_HI_TRAP_ENTER_RIGHT_EMPTY";
					default:
						break;
				}
				break;
		}
	}
	return "IG2_HI_TRAP_ENTER_FRONT_EMPTY";
}

void func_2337(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10)
{
	if (ENTITY::DOES_ENTITY_EXIST(Param0.f_1[0]))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_307, "p_crayfish01x", Param0.f_1[0], 0);
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_307, "ARTHUR", Global_35, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_307, "TRAP", Param0, 0);
}

bool func_2338(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	iVar0 = __LIB_0__::func_399(iParam0, 1, iParam2, 0);
	if (iVar0 == joaat("WEAPON_UNARMED"))
	{
		return true;
	}
	if ((bParam3 && !func_2341(iParam0)) || !bParam3)
	{
		*iParam1 = iVar0;
		WEAPON::_HIDE_PED_WEAPONS(iParam0, 2, false);
		TASK::TASK_SWAP_WEAPON(iParam0, 1, !bParam3, 0, 0);
	}
	return false;
}

bool func_2339(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Param0.f_1[iVar0]))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_2340()
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
	func_1798(Global_35, iLocal_110, &Var0, -1082130432 /* Float: -1f */, 0, 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1, 8, 0, 0, 1069547520 /* Float: 1.5f */, 1073741824 /* Float: 2f */, 1050253722 /* Float: 0.3f */, 1067030938 /* Float: 1.2f */, 1, 0, -1, 1, -1082130432 /* Float: -1f */, 0.5f, 1);
}

bool func_2341(int iParam0)
{
	return __LIB_0__::func_491(iParam0, 716706914);
}

bool func_2342()
{
	if (!ANIMSCENE::GET_ANIM_SCENE_BOOL(iLocal_308, "Loop"))
	{
		if (__LIB_11__::func_354(iLocal_308, "IG3_BASE"))
		{
			switch (__LIB_3__::func_112(iLocal_110, Global_35, 1060437492 /* Float: 0.707f */))
			{
				case 2:
					func_2345(1);
					break;
				case 0:
					func_2345(2);
					break;
				case 3:
					func_2345(3);
					break;
				case 1:
					switch (__LIB_3__::func_112(iLocal_110, Global_35, 1f))
					{
						case 3:
							func_2345(4);
							break;
						case 2:
							func_2345(5);
							break;
					}
					break;
			}
		}
	}
	else if (!__LIB_11__::func_354(iLocal_308, "IG3_BASE") && !__LIB_11__::func_354(iLocal_308, "IG3_BASE_ENTER"))
	{
		func_2345(0);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_308, "Loop", false, false);
		return true;
	}
	return false;
}

int func_2344(int iParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
		fVar8 = __LIB_5__::func_439(fParam12 >= 0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*iParam0, true, false)));
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
		if (__LIB_9__::func_905(*iParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_2667(iParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_2344(iParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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
					func_2671(iParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
					if (func_2673(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
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
					if (__LIB_10__::func_927(*iParam0, iParam1, uParam3))
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
				if (__LIB_12__::func_952(iParam0, iParam1, fParam4, bVar6))
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
					func_2679(*iParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_2673(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_2671(iParam0, __LIB_3__::func_598(iParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
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
				if (__LIB_12__::func_952(iParam0, iParam1, fParam4, bVar6))
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
			__LIB_10__::func_928(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

void func_2345(int iParam0)
{
	ANIMSCENE::SET_ANIM_SCENE_FLOAT(iLocal_308, "callover", BUILTIN::TO_FLOAT(iParam0), true, false);
	ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_308, "Loop", true, false);
}

void func_2348()
{
	switch (__LIB_3__::func_112(iLocal_110, Global_35, 1060437492 /* Float: 0.707f */))
	{
		case 2:
			func_2682(3);
			break;
		case 0:
			func_2682(2);
			break;
		case 3:
			func_2682(1);
			break;
		case 1:
			switch (__LIB_3__::func_112(iLocal_110, Global_35, 1f))
			{
				case 3:
					func_2682(3);
					break;
				case 2:
					func_2682(1);
					break;
			}
			break;
	}
}

bool func_2349()
{
	if (!ANIMSCENE::GET_ANIM_SCENE_BOOL(iLocal_308, "Loop"))
	{
		switch (__LIB_3__::func_112(iLocal_110, Global_35, 1060437492 /* Float: 0.707f */))
		{
			case 2:
				func_2345(6);
				break;
			case 0:
				func_2345(7);
				break;
			case 3:
				func_2345(8);
				break;
			case 1:
				func_2345(9);
				break;
		}
	}
	else if (!__LIB_11__::func_354(iLocal_308, "IG3_BASE"))
	{
		func_2345(0);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_308, "Loop", false, false);
		return true;
	}
	return false;
}

char* func_2350()
{
	switch (BUILTIN::FLOOR(ANIMSCENE::GET_ANIM_SCENE_FLOAT(iLocal_309, "Leadin")))
	{
		case 1:
			return "IG3_LEADIN_RIGHT";
		case 2:
			return "IG3_LEADIN_FRONT";
		case 3:
			return "IG3_LEADIN_LEFT";
		default:
			break;
	}
	return "IG3_LEADIN_MAIN_ACTION";
}

bool func_2358(int iParam0, float fParam1)
{
	if (__LIB_10__::func_896(PLAYER::GET_PLAYER_INDEX(), iParam0))
	{
		if (__LIB_0__::func_48(Global_35, iParam0, fParam1, 1))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
			return true;
		}
	}
	return false;
}

void func_2361(char[4] cParam0, char* sParam1)
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
	func_1506(cVar0, &(cParam0->f_7375), cParam0);
}

float func_2364(int iParam0)
{
	return __LIB_0__::func_667(2.25f, 0.75f, ((__LIB_0__::func_665(iParam0, Local_694, 0, 1) - 3.75f) / (15f - 3.75f)));
}

float func_2365(int iParam0)
{
	float fVar0;
	fVar0 = (0.75f * __LIB_0__::func_667(1.5f, 2.5f, (__LIB_0__::func_665(iParam0, Local_694, 0, 1) / 15f)));
	return fVar0;
}

bool func_2366(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	var uVar4;
	var uVar7;
	int iVar10;
	int iVar11;
	iVar11 = SHAPETEST::GET_SHAPE_TEST_RESULT(iLocal_1022, &iVar0, &uVar4, &uVar7, &iVar10);
	if (iVar11 == 0)
	{
		if (func_2689(iParam0, &vVar1))
		{
			vLocal_939 = { __LIB_3__::func_857(func_1832(ENTITY::GET_ENTITY_COORDS(Local_694, true, false), 0, 0, 1036831949 /* Float: 0.1f */), 1.5f, 0.1f) };
			iLocal_1022 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(vVar1, vLocal_939, 3167, 0, 7);
		}
	}
	else if (iVar11 == 2)
	{
		if (iVar0 == 0)
		{
			return true;
		}
		else if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar10) == Local_694)
		{
			return true;
		}
	}
	return false;
}

bool func_2372(int iParam0, float fParam1)
{
	float fVar0;
	fVar0 = (fParam1 - __LIB_0__::func_665(iLocal_114, Local_694, 0, 1));
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_694, Global_35, 0, 0))
	{
		*iParam0 = BUILTIN::FLOOR(((fVar0 * 10f) * func_2692()));
		return true;
	}
	else if (PED::_0x09D7AFD3716DA8E1(Local_694, 500))
	{
		*iParam0 = BUILTIN::FLOOR(((fVar0 * 7.5f) * func_2692()));
		return true;
	}
	return false;
}

bool func_2374(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(iParam0))
		{
			return true;
		}
	}
	return false;
}

void func_2375()
{
	if (PAD::_IS_USING_KEYBOARD(0))
	{
		iLocal_1025 = 1;
	}
	else
	{
		iLocal_1025 = 2;
	}
}

bool func_2376(int iParam0)
{
	return ((func_2377(Global_35, iParam0) && func_2377(iLocal_111, iParam0)) && func_2377(iLocal_108, iParam0));
}

bool func_2377(int iParam0, int iParam1)
{
	if (func_2374(iParam0))
	{
		return MISC::ARE_STRINGS_EQUAL(TASK::GET_TASK_MOVE_NETWORK_STATE(iParam0), sLocal_1083[iParam1]);
	}
	return false;
}

bool func_2378()
{
	return ((func_2379(Global_35) && func_2379(iLocal_111)) && func_2379(iLocal_108));
}

bool func_2379(int iParam0)
{
	if (func_2374(iParam0))
	{
		return TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(iParam0);
	}
	return false;
}

void func_2380()
{
	__LIB_2__::func_259(&uLocal_1065);
	fLocal_1108 = 15f;
}

int func_2381(int iParam0, float fParam1)
{
	__LIB_4__::func_89(&uLocal_1068, 0);
	if (__LIB_9__::func_178(&uLocal_1068) > fParam1 || fParam1 <= 0f)
	{
		__LIB_1__::func_561(&uLocal_1068);
		AUDIO::_PLAY_SOUND_FROM_ENTITY(sLocal_1095[iParam0], iLocal_111, "Mob4_Sounds", false, 0, 0);
		return 1;
	}
	return 0;
}

bool func_2382()
{
	if (func_2693())
	{
		switch (iLocal_1025)
		{
			case 1:
				if (__LIB_0__::func_139(iLocal_1047))
				{
					func_2387();
					__LIB_1__::func_281(&iLocal_1047, 1, 1);
				}
				else if (!__LIB_0__::func_139(iLocal_1048))
				{
					iLocal_1048 = __LIB_11__::func_347("MOB4_UC_WRAP_PC", func_2396(9), 3, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
					__LIB_11__::func_341(iLocal_1048, "INPUT_MOB4_UC_WRAP_PC");
					__LIB_11__::func_340(iLocal_1048, 1);
					__LIB_1__::func_382(iLocal_1048, bLocal_1099, 1);
				}
				else
				{
					func_2402(3, -1);
					iLocal_1024 = iLocal_1025;
					iLocal_1025 = 0;
				}
				break;
			case 2:
				if (__LIB_0__::func_139(iLocal_1048))
				{
					func_2387();
					__LIB_1__::func_281(&iLocal_1048, 1, 1);
				}
				else if (!__LIB_0__::func_139(iLocal_1047))
				{
					iLocal_1047 = func_2694("MOB4_UC_WRAP", 8);
					__LIB_11__::func_341(iLocal_1047, "INPUT_MOB4_UC_WRAP");
					__LIB_11__::func_340(iLocal_1047, 1);
					__LIB_1__::func_382(iLocal_1047, bLocal_1099, 1);
				}
				else
				{
					func_2402(2, -1);
					iLocal_1024 = iLocal_1025;
					iLocal_1025 = 0;
				}
				break;
		}
		return false;
	}
	return true;
}

void func_2384(bool bParam0)
{
	if (bParam0)
	{
		if (func_2695(Local_1058) == 0)
		{
			fLocal_1104 = (fLocal_1104 + (0.1f * ((__LIB_0__::func_251(MISC::ABSF(func_2696(Local_1058)), 1f, 360f) * 0.75f) * MISC::GET_FRAME_TIME())));
			return;
		}
		if (__LIB_1__::func_530(iLocal_1048, 1))
		{
			fLocal_1104 = (fLocal_1104 + (0.1f * ((15f * 0.75f) * MISC::GET_FRAME_TIME())));
			return;
		}
	}
	else
	{
		if (func_2697())
		{
			if (func_2695(Local_1058) != 1)
			{
				if (func_2695(Local_1058) == 0 || func_2698(1061158912 /* Float: 0.75f */, 1065353216 /* Float: 1f */))
				{
					fLocal_1104 = (fLocal_1104 + ((0.1f * (__LIB_0__::func_251(func_2696(Local_1058), 1f, 5f) * 0.75f)) * ((func_2699(Local_1058) - func_2700()) * MISC::GET_FRAME_TIME())));
					return;
				}
			}
		}
		if (fLocal_1103 >= 0.85f)
		{
			fLocal_1104 = (fLocal_1104 + (0.1f * ((120f * 0.75f) * MISC::GET_FRAME_TIME())));
			return;
		}
	}
	if (fLocal_1104 > fLocal_1103)
	{
		fLocal_1104 = (fLocal_1104 - (10f * ((fLocal_1104 - fLocal_1103) * MISC::GET_FRAME_TIME())));
	}
}

void func_2385()
{
	if (fLocal_1103 < fLocal_1104)
	{
		fLocal_1103 = (fLocal_1103 + (1.25f * ((fLocal_1104 - fLocal_1103) * MISC::GET_FRAME_TIME())));
	}
}

void func_2386(bool bParam0)
{
	if (bParam0)
	{
		fLocal_1107 = func_2701((90f + (120f * 0.75f)));
	}
	else
	{
		fLocal_1107 = func_2702(Local_1058);
	}
}

void func_2387()
{
	UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
	func_1393();
}

void func_2388(int iParam0)
{
	if (func_2378())
	{
		func_2703(Global_35, iParam0);
		func_2703(iLocal_111, iParam0);
		func_2703(iLocal_108, iParam0);
		func_2703(iLocal_129, iParam0);
	}
}

void func_2389(float fParam0)
{
	fLocal_1108 = (fLocal_1108 + fParam0);
}

bool func_2390()
{
	if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_129, iLocal_111))
	{
		return true;
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, MISC::GET_HASH_KEY(sLocal_1083[4])))
	{
		if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_129, iLocal_111))
		{
			ENTITY::DETACH_ENTITY(iLocal_129, false, true);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_129, iLocal_111, PED::GET_PED_BONE_INDEX(iLocal_111, 43312), vLocal_59, vLocal_59, false, false, false, false, 2, true, false, false);
			ENTITY::PLAY_ENTITY_ANIM(iLocal_129, "bandage_onlegidle", sLocal_54, 0f, true, true, false, 0f, 0);
			ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_129, true);
		}
	}
	return false;
}

void func_2391()
{
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_134))
	{
		GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iLocal_134, "fade", (BUILTIN::TO_FLOAT(iLocal_1101) / BUILTIN::TO_FLOAT(4)), false);
	}
}

void func_2392(int iParam0, float fParam1)
{
	int iVar0;
	if (__LIB_0__::func_139(iParam0))
	{
		iVar0 = __LIB_0__::func_17(iParam0);
		if (HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
		{
			HUD::_UIPROMPT_SET_SPINNER_POSITION(Global_1945938[iVar0 /*18*/].f_3, __LIB_0__::func_251(fParam1, 0f, 1f));
		}
	}
}

void func_2393(int iParam0, float fParam1)
{
	func_2704(Global_35, iParam0, fParam1);
	func_2704(iLocal_111, iParam0, fParam1);
	func_2704(iLocal_108, iParam0, fParam1);
	func_2704(iLocal_129, iParam0, fParam1);
}

void func_2394()
{
	if (func_2693())
	{
		switch (iLocal_1025)
		{
			case 1:
				func_2387();
				func_2402(6, -1);
				iLocal_1024 = iLocal_1025;
				iLocal_1025 = 0;
				break;
			case 2:
				func_2387();
				func_2402(5, -1);
				iLocal_1024 = iLocal_1025;
				iLocal_1025 = 0;
				break;
		}
	}
}

void func_2395(bool bParam0)
{
	if (__LIB_0__::func_272(iLocal_111, 0))
	{
		if (bParam0)
		{
			AUDIO::_PLAY_SOUND_FROM_ENTITY("MG_Apply_Pressure_Loop", iLocal_111, "Mob4_Sounds", false, 0, 0);
		}
		else
		{
			AUDIO::_STOP_SOUND_WITH_NAME("MG_Apply_Pressure_Loop", 0);
		}
	}
}

int func_2396(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			return joaat("INPUT_LOOK_LR");
		case 7:
			return joaat("INPUT_CONTEXT_LT");
		case 8:
			return joaat("INPUT_LOOK_LR");
		case 9:
			return joaat("INPUT_CONTEXT_Y");
		case 10:
			return joaat("INPUT_MOVE_UD");
		case 11:
			return joaat("INPUT_LOOK_UD");
		case 12:
			return joaat("INPUT_CONTEXT_LT");
		case 13:
			return joaat("INPUT_CONTEXT_RT");
		case 0:
			return joaat("INPUT_MOVE_LR");
		case 1:
			return joaat("INPUT_MOVE_UD");
		case 2:
			return joaat("INPUT_CONTEXT_LT");
		case 3:
			return joaat("INPUT_LOOK_LR");
		case 4:
			return joaat("INPUT_LOOK_UD");
		case 5:
			return joaat("INPUT_CONTEXT_RT");
		default:
			break;
	}
	return 0;
}

void func_2398(int iParam0, int iParam1)
{
	int iVar0;
	if (__LIB_0__::func_139(iParam0))
	{
		iVar0 = __LIB_0__::func_17(iParam0);
		if (HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
		{
			HUD::_UIPROMPT_SET_ATTRIBUTE(Global_1945938[iVar0 /*18*/].f_3, 10, iParam1);
			HUD::_UIPROMPT_SET_ATTRIBUTE(Global_1945938[iVar0 /*18*/].f_3, 11, iParam1);
			HUD::_UIPROMPT_SET_ATTRIBUTE(Global_1945938[iVar0 /*18*/].f_3, 14, iParam1);
		}
	}
}

void func_2399(bool bParam0)
{
	if (__LIB_0__::func_272(iLocal_111, 0))
	{
		if (bParam0)
		{
			AUDIO::_PLAY_SOUND_FROM_ENTITY("MG_Player_Input_Apply_Pressure_Loop", iLocal_111, "Mob4_Sounds", false, 0, 0);
		}
		else
		{
			AUDIO::_STOP_SOUND_WITH_NAME("MG_Player_Input_Apply_Pressure_Loop", 0);
		}
	}
}

void func_2400()
{
	__LIB_9__::func_773(&uLocal_1065);
}

void func_2401()
{
	__LIB_9__::func_774(&uLocal_1065);
}

void func_2402(int iParam0, int iParam1)
{
	__LIB_3__::func_741(func_2705(iParam0), -1, 0, 0, 1);
	if (iParam1 >= 0)
	{
		__LIB_3__::func_787(iParam1);
	}
}

void func_2403()
{
	if (fLocal_1105 > 0.9f || fLocal_1106 > 0.9f)
	{
		if (iLocal_1029 != 3)
		{
			func_2381(2, 0);
			iLocal_1029 = 3;
		}
	}
	else if (fLocal_1105 > 0.6f && fLocal_1106 > 0.6f)
	{
		if (iLocal_1029 != 2)
		{
			func_2381(1, 0);
			iLocal_1029 = 2;
		}
	}
	else if (fLocal_1105 >= 0.5f || fLocal_1106 >= 0.5f)
	{
		if (iLocal_1029 != 1)
		{
			func_2381(0, 0);
			iLocal_1029 = 1;
		}
	}
	else if (iLocal_1029 != 0)
	{
		iLocal_1029 = 0;
	}
}

void func_2404()
{
	float fVar0;
	int iVar1;
	int iVar2;
	if (__LIB_9__::func_178(&uLocal_1080) >= Local_1030[iLocal_1029 /*4*/].f_2)
	{
		__LIB_2__::func_259(&uLocal_1080);
	}
	fVar0 = (__LIB_9__::func_178(&uLocal_1080) / Local_1030[iLocal_1029 /*4*/].f_2);
	if (fVar0 > 0.5f)
	{
		fVar0 = (1f - fVar0);
	}
	iVar1 = BUILTIN::FLOOR(__LIB_0__::func_667(0f, (BUILTIN::TO_FLOAT(Local_1030[iLocal_1029 /*4*/].f_3) * 2f), fVar0));
	iVar2 = __LIB_0__::func_309((BUILTIN::FLOOR(__LIB_0__::func_667(BUILTIN::TO_FLOAT(Local_1030[iLocal_1029 /*4*/]), BUILTIN::TO_FLOAT(Local_1030[iLocal_1029 /*4*/].f_1), func_2708())) + iVar1), 0, 256);
	PAD::SET_PAD_SHAKE(0, 1, iVar2);
}

void func_2405()
{
	if (iLocal_1029 == 3)
	{
		if (fLocal_1105 > fLocal_1106)
		{
			func_2393(9, fLocal_1105);
			func_2393(10, fLocal_1105);
		}
		else
		{
			func_2393(9, fLocal_1106);
			func_2393(10, fLocal_1106);
		}
	}
	else
	{
		func_2393(9, fLocal_1105);
		func_2393(10, fLocal_1106);
	}
}

void func_2406(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			PED::SET_PED_LEG_IK_MODE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), 2);
		}
	}
	ENTITY::FREEZE_ENTITY_POSITION(iParam0, false);
}

float func_2407(int iParam0)
{
	float fVar0;
	fVar0 = PAD::GET_CONTROL_NORMAL(0, func_2396(iParam0));
	if (PAD::IS_LOOK_INVERTED())
	{
		return -fVar0;
	}
	return fVar0;
}

int func_2410(var uParam0, int iParam1, int iParam2)
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
		return func_2410(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

void func_2433(char[4] cParam0, int iParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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
			cParam0->f_5423[iVar0 /*65*/].f_23[iVar1 /*4*/].f_3 = 380318;
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

bool func_2529(char[4] cParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4)
{
	if (__LIB_9__::func_408(cParam0, iParam1, sParam2, 0, 1, bParam4))
	{
		if (!__LIB_6__::func_872(cParam0, 4) || bParam3)
		{
			return true;
		}
	}
	return false;
}

void func_2532()
{
	float fVar0;
	float fVar1;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_123))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_123))
		{
			if (__LIB_0__::func_899(&uLocal_924))
			{
				if (__LIB_9__::func_178(&uLocal_924) > 1.5f)
				{
					__LIB_1__::func_561(&uLocal_924);
				}
				else
				{
					fVar0 = __LIB_0__::func_667(1f, 0f, (__LIB_9__::func_178(&uLocal_924) / 1.5f));
					OBJECT::_0xF49574E2332A8F06(iLocal_123, fVar0);
					GRAPHICS::UPDATE_LIGHTS_ON_ENTITY(iLocal_123);
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_124))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_124))
		{
			if (__LIB_0__::func_899(&uLocal_927))
			{
				if (__LIB_9__::func_178(&uLocal_927) > 1.5f)
				{
					__LIB_1__::func_561(&uLocal_927);
				}
				else
				{
					fVar1 = __LIB_0__::func_667(1f, 0f, (__LIB_9__::func_178(&uLocal_927) / 1.5f));
					OBJECT::_0xF49574E2332A8F06(iLocal_124, fVar1);
					GRAPHICS::UPDATE_LIGHTS_ON_ENTITY(iLocal_124);
				}
			}
		}
	}
}

void func_2533(char[4] cParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_116) && ENTITY::DOES_ENTITY_EXIST(iLocal_114))
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(cParam0->f_7375.f_804))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_114, 1794390695))
			{
				ENTITY::_0x80FDEB3A9E9AA578(iLocal_116, 0);
			}
		}
	}
}

float func_2534(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			return OBJECT::_0xFA3B61EC249B4674(iParam0);
		}
	}
	return 0f;
}

Vector3 func_2536(int iParam0, vector3 vParam1, var uParam4)
{
	return __LIB_1__::func_868(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), vParam1, uParam4);
}

void func_2538()
{
	vector3 vVar0;
	var uVar3;
	__LIB_1__::func_822(&vVar0, &uVar3);
	if (!PED::IS_PED_INJURED(iLocal_113))
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_113, 2125.955f, -614.3887f, 40.6017f, 115.2445f, true, false, true);
		TASK::CLEAR_PED_TASKS(iLocal_113, true, false);
	}
	if (!PED::IS_PED_INJURED(iLocal_108))
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_108, 2122.418f, -613.8056f, 40.6072f, 115.3729f, true, false, true);
		TASK::CLEAR_PED_TASKS(iLocal_108, true, false);
	}
	func_2810(0, iLocal_108, 0f, 0f, 0f, vVar0, 1133903872 /* Float: 300f */, 3f, 3f, 0, 1073741824 /* Float: 2f */, 1048576000 /* Float: 0.25f */, 1, 0, 1112014848 /* Float: 50f */);
	__LIB_1__::func_463(iLocal_113, 0, 1, 0, 0);
}

void func_2539()
{
	int iVar0;
	iVar0 = CLOCK::GET_CLOCK_HOURS();
	if (iVar0 >= 21 || iVar0 < 6)
	{
		CLOCK::SET_CLOCK_TIME(21, 0, 0);
	}
	else
	{
		CLOCK::SET_CLOCK_TIME(17, 0, 0);
	}
}

int func_2558(int iParam0)
{
	var uVar0;
	var uVar4;
	int iVar8;
	int iVar9;
	iVar8 = func_1433(&uVar0, iParam0, 0);
	iVar9 = func_2410(&uVar4, iParam0, 0);
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

void func_2559(char[4] cParam0)
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
					iVar2 = func_2558(128);
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
				iVar3 = func_2558(128);
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

void func_2615(bool bParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 17;
	while (iVar0 >= 0)
	{
		iVar1 = Global_1946804.f_2657[iVar0];
		if (__LIB_0__::func_144(iVar1, 0))
		{
			func_661(iVar1, 0, bParam0);
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

void func_2616(int iParam0)
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
			func_2830(&(Global_1946804.f_2657.f_26.f_26), iVar2, iVar0);
		}
		if (func_1751(iVar2, 0))
		{
			func_2033(iVar2, Global_1946804.f_1497.f_1[iVar1 /*3*/] == Global_1946804.f_2657[iVar0]);
		}
		iVar0++;
	}
}

void func_2617(int iParam0, bool bParam1, bool bParam2, bool bParam3)
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
			bVar1 = func_2832(iParam0, &(Global_1946804.f_2657.f_21), Global_1946804.f_2657.f_26.f_1, bParam1);
			break;
		case 81053684:
			bVar1 = func_2832(iParam0, &(Global_1946804.f_2657.f_23), 1, bParam1);
			break;
		case -999503751:
			bVar1 = func_2832(iParam0, &(Global_1946804.f_2657.f_20), Global_1946804.f_2657.f_26, bParam1);
			break;
		case -525676072:
			bVar1 = func_2832(iParam0, &(Global_1946804.f_2657.f_22), Global_1946804.f_2657.f_26.f_2, bParam1);
			break;
		case -1719060085:
			bVar1 = func_2832(iParam0, &(Global_1946804.f_2657.f_24), 1, bParam1);
			break;
		case -413129408:
			bVar1 = func_2832(iParam0, &(Global_1946804.f_2657.f_24), 1, bParam1);
			break;
	}
	if (!bVar1)
	{
		return;
	}
	if (iParam0 == __LIB_0__::func_856(0))
	{
		func_2834(iParam0, 1);
		if (__LIB_0__::func_241() == 1160113249)
		{
			func_2834(__LIB_0__::func_856(-2125499975), 0);
		}
		else
		{
			func_2834(__LIB_0__::func_856(1160113249), 0);
		}
	}
	__LIB_0__::func_460();
	if (__LIB_1__::func_18(iVar0))
	{
		INVENTORY::_0x766315A564594401(__LIB_0__::func_162(0), iParam0, 0);
	}
	func_2033(iParam0, bParam3);
	if (bParam2)
	{
		__LIB_0__::func_719(0, 0);
	}
}

bool func_2637(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, bool bParam5, int iParam6)
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
					*uParam4 = { func_675(iParam1, 0, 0) };
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
			Var37 = { func_675(iParam1, 0, 0) };
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

int func_2641()
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
	Var0 = { func_675(856287005, 0, 0) };
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

int func_2652(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, float fParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)
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
				if (!__LIB_1__::func_626(iParam0, vVar0, fParam6, iParam10))
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
				func_876(Global_1360165[iParam0 /*1157*/].f_124, vVar0, fParam6, 2, 1073741824 /* Float: 2f */);
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

bool func_2667(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
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
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		MISC::_0xE98D55C5983F2509(*iParam0);
		bVar4 = __LIB_0__::func_27(iParam4, 32);
		__LIB_9__::func_381(iParam1, uParam2, 0);
		iVar5 = func_2869(*iParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*iParam0, 178, false);
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
			EVENT::_0xBB1E41DD3D3C6250(*iParam0, "IloGeneralEvents", 2);
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
		if (MISC::_0x870708A6E147A9AD(*iParam0, &cVar0, fParam3, fParam3, iVar6, iParam1->f_7, iParam1->f_8, iVar5, 0, iParam1->f_6))
		{
			if (iParam6 == 2)
			{
				iParam6 = __LIB_3__::func_101(iParam0);
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
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*iParam0, iParam6);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5) && iParam6 == 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*iParam0, MISC::GET_HASH_KEY(sParam5));
				}
				else if (iParam6 != 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*iParam0, iParam6);
				}
			}
			PED::SET_PED_CONFIG_FLAG(*iParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(*iParam0, 178, false);
			PED::SET_PED_CONFIG_FLAG(*iParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(*iParam0, 301, false);
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
				PED::SET_PED_CONFIG_FLAG(*iParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(*iParam0, 331, false);
				PED::SET_PED_CONFIG_FLAG(*iParam0, 493, true);
			}
			else
			{
				PED::SET_PED_CONFIG_FLAG(*iParam0, 315, true);
				PED::SET_PED_CONFIG_FLAG(*iParam0, 493, false);
			}
			if (__LIB_0__::func_27(iParam4, 2) || __LIB_0__::func_27(iParam4, 16))
			{
				__LIB_1__::func_488(*iParam0, 1, 1);
			}
			else
			{
				__LIB_1__::func_488(*iParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_2671(int iParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
{
	int iVar0;
	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(*iParam2, 1))
		{
			if (bParam14)
			{
				iVar0 = 0;
				while (iVar0 < *uParam4)
				{
					MISC::SET_BIT(uParam4[iVar0 /*17*/], 14);
					iVar0++;
				}
			}
			func_2874(*iParam0, uParam4, fParam3, iParam7, iParam8, iParam12, __LIB_0__::func_27(iParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

bool func_2673(int iParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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
		func_2878(*iParam0, uParam4[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
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
						__LIB_2__::func_624(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						__LIB_4__::func_101(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 11))
					{
						__LIB_9__::func_381(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
					}
					iParam1->f_1 = iVar0;
					bVar5 = true;
					iParam1->f_9 = MISC::IS_BIT_SET((*uParam4)[iParam1->f_1 /*17*/], 16);
					if (!iParam1->f_9)
					{
						MISC::SET_BIT(iParam1, 0);
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

void func_2679(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_2878(iParam0, uParam2[iVar0 /*17*/], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_2682(int iParam0)
{
	ANIMSCENE::SET_ANIM_SCENE_FLOAT(iLocal_309, "Leadin", BUILTIN::TO_FLOAT(iParam0), true, false);
}

bool func_2689(int iParam0, var uParam1)
{
	var uVar0;
	int iVar1;
	if (__LIB_0__::func_272(iLocal_108, 0))
	{
		if (WEAPON::GET_CURRENT_PED_WEAPON(iLocal_108, &uVar0, true, iParam0, false))
		{
			iVar1 = WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(iLocal_108, iParam0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				*uParam1 = { __LIB_5__::func_270(iVar1) };
				return true;
			}
		}
	}
	return false;
}

float func_2692()
{
	int iVar0;
	iVar0 = __LIB_0__::func_399(Global_35, 1, 0, 0);
	if (WEAPON::_0x705BE297EEBDB95D(iVar0))
	{
		if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
		{
			return 1.5f;
		}
	}
	return 1f;
}

bool func_2693()
{
	return iLocal_1025 != 0;
}

int func_2694(char* sParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	if (func_2888(&iVar0))
	{
		Global_1945938[iVar0 /*18*/].f_4 = func_2396(iParam1);
		Global_1945938[iVar0 /*18*/] = 3;
		Global_1945938[iVar0 /*18*/].f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
		Global_1945938[iVar0 /*18*/].f_2 = 0;
		Global_1945938[iVar0 /*18*/].f_5 = 5;
		Global_1945938[iVar0 /*18*/].f_1 = 2;
		Global_1945938[iVar0 /*18*/].f_17 = -1;
		iVar1 = HUD::_UIPROMPT_REGISTER_BEGIN();
		HUD::_UIPROMPT_SET_TEXT(iVar1, sParam0);
		HUD::_0xF4A5C4509BF923B1(iVar1, 0);
		HUD::_UIPROMPT_SET_CONTROL_ACTION(iVar1, joaat("INPUT_LOOK_LR"));
		HUD::_UIPROMPT_SET_CONTROL_ACTION(iVar1, joaat("INPUT_LOOK_UD"));
		HUD::_UIPROMPT_SET_ROTATE_MODE(iVar1, 0f, 0);
		HUD::_UIPROMPT_SET_ATTRIBUTE(iVar1, 10, 1);
		HUD::_UIPROMPT_SET_ATTRIBUTE(iVar1, 11, 1);
		HUD::_UIPROMPT_REGISTER_END(iVar1);
		Global_1945938[iVar0 /*18*/].f_3 = iVar1;
		__LIB_0__::func_629(iVar0, 1);
		__LIB_0__::func_185(iVar0, 1);
		__LIB_0__::func_186(iVar0, 128);
		return iVar0;
	}
	return 0;
}

int func_2695(struct<5> Param0)
{
	float fVar0;
	fVar0 = func_2696(Param0);
	if (Param0.f_4 < 0.85f)
	{
		return 2;
	}
	if (fVar0 > 1.5f)
	{
		return 0;
	}
	if (fVar0 < -1.5f)
	{
		return 1;
	}
	return 2;
}

float func_2696(struct<5> Param0)
{
	if (func_2699(Param0) < 55f && func_2889(Param0) > (360f - 55f))
	{
		return (func_2699(Param0) + (360f - func_2889(Param0)));
	}
	if (func_2699(Param0) > (360f - 55f) && func_2889(Param0) < 55f)
	{
		return ((func_2699(Param0) - 360f) + (0f - func_2889(Param0)));
	}
	return (func_2699(Param0) - func_2889(Param0));
}

bool func_2697()
{
	return (func_2699(Local_1058) > func_2700() && func_2699(Local_1058) < (func_2700() + 120f));
}

bool func_2698(float fParam0, float fParam1)
{
	return (func_2699(Local_1058) > (func_2700() + (120f * fParam0)) && func_2699(Local_1058) < (func_2700() + (120f * fParam1)));
}

float func_2699(struct<5> Param0)
{
	return (func_2890(Param0) + 180f);
}

float func_2700()
{
	return __LIB_0__::func_667(35f, 315f, fLocal_1103);
}

float func_2701(float fParam0)
{
	return ((func_2700() + fParam0) / 360f);
}

float func_2702(struct<2> Param0, var uParam2, var uParam3, var uParam4)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;
	vVar0 = { __LIB_0__::func_173(Param0, Param0.f_1, 0f) };
	vVar3 = { 0f, -1f, 0f };
	fVar6 = MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar0.x, vVar0.y, vVar3.x, vVar3.y);
	fVar7 = (fVar6 / 360f);
	if (Param0 < 0f)
	{
		fVar7 = (1f - fVar7);
	}
	fVar7 = __LIB_0__::func_251(fVar7, 0f, 1f);
	fVar7 = (fVar7 + 0.5f);
	if (fVar7 > 1f)
	{
		fVar7 = (fVar7 - 1f);
	}
	return fVar7;
}

void func_2703(int iParam0, int iParam1)
{
	if (func_2374(iParam0))
	{
		TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(iParam0, sLocal_1083[iParam1]);
	}
}

void func_2704(int iParam0, int iParam1, float fParam2)
{
	if (func_2374(iParam0))
	{
		TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(iParam0, sLocal_1083[iParam1], fParam2);
	}
}

char* func_2705(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MOB4_HELP_TOURNIQUET";
		case 1:
			return "MOB4_HELP_STEADY";
		case 2:
			return "MOB4_HELP_WRAP";
		case 3:
			return "MOB4_HELP_WRAP_PC";
		case 4:
			return "MOB4_HELP_PRESS";
		case 5:
			return "MOB4_HELP_PRESSURE";
		case 6:
			return "MOB4_HELP_PRESSURE";
		default:
			break;
	}
	return "MISSING";
}

float func_2708()
{
	float fVar0;
	float fVar1;
	if (iLocal_1029 == 3)
	{
		if (fLocal_1105 > fLocal_1106)
		{
			fVar0 = fLocal_1105;
		}
		else
		{
			fVar0 = fLocal_1106;
		}
	}
	else
	{
		fVar0 = ((fLocal_1105 + fLocal_1106) / 2f);
	}
	fVar1 = (func_2891() - func_2892());
	fVar0 = (fVar0 - func_2892());
	return __LIB_0__::func_251((fVar0 / fVar1), 0f, 1f);
}

void func_2810(int iParam0, int iParam1, vector3 vParam2, vector3 vParam5, float fParam8, float fParam9, float fParam10, bool bParam11, float fParam12, float fParam13, bool bParam14, bool bParam15, float fParam16)
{
	int iVar0;
	int iVar1;
	if (__LIB_0__::func_86(vParam5))
	{
		return;
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam1, true);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	if (bParam11 || bParam14)
	{
		iVar1 = func_1784(iParam0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && __LIB_0__::func_272(iVar1, 0))
		{
			if (bParam14)
			{
				TASK::TASK_MOUNT_ANIMAL(0, iVar1, 1, -1, 2f, 1, 0, 0);
			}
			else
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(iVar1, true, false), fParam12, -1, fParam13, 2097152, 40000f);
				TASK::TASK_MOUNT_ANIMAL(0, iVar1, -1, -1, fParam12, 1, 0, 0);
			}
		}
	}
	if (!__LIB_0__::func_86(vParam2))
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vParam2, fParam9, -1, 0.25f, 0, 40000f);
	}
	TASK::_TASK_MOVE_IN_TRAFFIC_2(0, vParam5, 1073741824 /* Float: 2f */, fParam10, 0, 0);
	if (bParam15)
	{
		TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
		TASK::TASK_WANDER_IN_AREA(0, vParam5, fParam16, 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */, 0);
	}
	TASK::CLOSE_SEQUENCE_TASK(iVar0);
	TASK::TASK_PERFORM_SEQUENCE(iParam1, iVar0);
	TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	PED::SET_PED_KEEP_TASK(iParam1, true);
	__LIB_9__::func_203(iParam0, 1, 0, 0, fParam8, 1, 1, 0, 0, 0, 0);
}

void func_2830(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 >= 13)
	{
		return;
	}
	__LIB_0__::func_691(iParam2, *uParam0);
	func_2924(&(uParam0->f_1[*uParam0 /*5*/]), iParam1, -1, 1, 0);
	*uParam0++;
}

int func_2832(int iParam0, var uParam1, int iParam2, bool bParam3)
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
	if (bParam3 && !func_1751(iParam0, 0))
	{
		return 0;
	}
	Global_1946804.f_2657[Global_1946804.f_2657.f_19] = iVar1;
	if (__LIB_0__::func_357(iParam0) != -999503751)
	{
		func_2830(&(Global_1946804.f_2657.f_26.f_26), iParam0, Global_1946804.f_2657.f_19);
	}
	Global_1946804.f_2657.f_19++;
	*uParam1++;
	return 1;
}

int func_2834(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	Var0 = { func_675(iParam0, 0, 0) };
	Var5 = { __LIB_0__::func_429(iParam0, Var0, Var0.f_4, 0) };
	if (__LIB_0__::func_800(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	INVENTORY::_0x0349404A22736740(iParam1, __LIB_0__::func_162(0), &Var5);
	return 1;
}

int func_2869(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	int iVar0;
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(uParam2[iVar0 /*17*/])->f_8 = 6;
		func_2937(iParam0, uParam2[iVar0 /*17*/], fParam3, 3, 0, 6, bParam4, 0);
		if (__LIB_0__::func_139((uParam2[iVar0 /*17*/])->f_6))
		{
			__LIB_1__::func_471(uParam2[iVar0 /*17*/], 11);
			return Global_1945938[(uParam2[iVar0 /*17*/])->f_6 /*18*/].f_3;
		}
	}
	return 0;
}

void func_2874(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_2937(iParam0, uParam1[iVar0 /*17*/], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			MISC::CLEAR_BIT(uParam1[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

void func_2878(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (MISC::IS_BIT_SET(*iParam1, 14))
	{
		if (__LIB_1__::func_502(iParam1))
		{
			MISC::CLEAR_BIT(iParam1, 14);
			func_2937(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_2888(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (iVar0 != 0)
		{
			if (!__LIB_0__::func_141(iVar0, 2))
			{
				*iParam0 = iVar0;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

float func_2889(struct<5> Param0)
{
	return (func_2947(Param0) + 180f);
}

float func_2890(struct<2> Param0, var uParam2, var uParam3, var uParam4)
{
	return MISC::ATAN2(Param0.f_1, Param0);
}

float func_2891()
{
	switch (iLocal_1029)
	{
		case 3:
			return 1f;
		case 2:
			return 0.9f;
		case 1:
			return 0.6f;
		default:
			break;
	}
	return 0.5f;
}

float func_2892()
{
	switch (iLocal_1029)
	{
		case 3:
			return 0.9f;
		case 2:
			return 0.6f;
		case 1:
			return 0.5f;
		default:
			break;
	}
	return 0f;
}

void func_2924(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (PED::_0x93FFD92F05EC32FD(uParam0->f_3.f_1))
	{
		__LIB_1__::func_13(uParam0);
	}
	if (iParam2 == -1)
	{
		uParam0->f_1 = __LIB_0__::func_161(func_662(iParam1), 1);
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

void func_2937(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	char* sVar0;
	int iVar1;
	if (__LIB_0__::func_139(iParam1->f_6))
	{
		if (bParam7 || MISC::IS_BIT_SET(*iParam1, 11))
		{
			return;
		}
		__LIB_1__::func_281(&(iParam1->f_6), 0, 1);
	}
	if (!__LIB_0__::func_139(iParam1->f_6) && !MISC::IS_BIT_SET(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (__LIB_1__::func_502(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = __LIB_11__::func_350(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), iParam1->f_10, 0);
			if (__LIB_0__::func_139(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					__LIB_2__::func_369(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					__LIB_1__::func_522(iParam1->f_6, 17, 1, 1);
				}
				if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (MISC::IS_BIT_SET(*iParam1, 3))
					{
						__LIB_1__::func_523(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						__LIB_1__::func_483(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (MISC::IS_BIT_SET(*iParam1, 10))
				{
					__LIB_1__::func_522(iParam1->f_6, 16, 1, 1);
				}
				if (!MISC::IS_BIT_SET(*iParam1, 0) || MISC::IS_BIT_SET(*iParam1, 13))
				{
					__LIB_1__::func_221(iParam1->f_6, 0, 1);
				}
				else
				{
					__LIB_1__::func_221(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

float func_2947(struct<4> Param0, var uParam4)
{
	return MISC::ATAN2(Param0.f_3, Param0.f_2);
}

