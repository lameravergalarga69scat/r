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
	struct<36> Local_14 = { 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 12 } ;
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
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	struct<10> Local_64[3];
	var uLocal_95[4] = { 0, 0, 0, 0 };
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	float fLocal_105 = 0f;
	float fLocal_106 = 0f;
	float fLocal_107 = 0f;
	float fLocal_108 = 0f;
	float fLocal_109 = 0f;
	float fLocal_110 = 0f;
	float fLocal_111 = 0f;
	float fLocal_112 = 0f;
	float fLocal_113 = 0f;
	float fLocal_114 = 0f;
	float fLocal_115 = 0f;
	float fLocal_116 = 0f;
	int iLocal_117 = 0;
	bool bLocal_118 = false;
	bool bLocal_119 = false;
	bool bLocal_120 = false;
	bool bLocal_121 = false;
	char* sLocal_122 = NULL;
	vector3 vLocal_123 = { 0f, 0f, 0f };
	vector3 vLocal_126 = { 0f, 0f, 0f };
	vector3 vLocal_129 = { 0f, 0f, 0f };
	vector3 vLocal_132 = { 0f, 0f, 0f };
	vector3 vLocal_135 = { 0f, 0f, 0f };
	vector3 vLocal_138 = { 0f, 0f, 0f };
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	int iLocal_148[36] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_185[2] = { 0, 0 };
	int iLocal_188 = 0;
	int iLocal_189 = 0;
	int iLocal_190 = 0;
	int iLocal_191 = 0;
	int iLocal_192 = 0;
	struct<6> Local_193[15];
	struct<5> Local_284[21];
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
	int iLocal_528 = 0;
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
	struct<30> Local_545 = { 0, 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_575 = 0;
	int iLocal_576 = 0;
	int iLocal_577 = 0;
	int iLocal_578 = 0;
	struct<4> Local_579 = { 0, 0, 0, 1094713344 } ;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	struct<9> Local_589[2];
	var uLocal_608[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_621 = 0;
	struct<17> Local_622[1];
	int iLocal_640 = 0;
	var uLocal_641 = -1;
	var uLocal_642 = 0;
	var uLocal_643 = -1;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = -1;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 1073741824;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 1;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 1106247680;
	var uLocal_667 = 1067450368;
	var uLocal_668 = 0;
	var uLocal_669 = 1092616192;
	var uLocal_670 = 1112014848;
	var uLocal_671 = 1106247680;
	var uLocal_672 = 1101529088;
	var uLocal_673 = 1101004800;
	var uLocal_674 = 1084227584;
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
	struct<17> Local_701[2];
	int iLocal_736 = 0;
	var uLocal_737 = -1;
	var uLocal_738 = 0;
	var uLocal_739 = -1;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = -1;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 1073741824;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 1;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 1106247680;
	var uLocal_763 = 1067450368;
	var uLocal_764 = 0;
	var uLocal_765 = 1092616192;
	var uLocal_766 = 1112014848;
	var uLocal_767 = 1106247680;
	var uLocal_768 = 1101529088;
	var uLocal_769 = 1101004800;
	var uLocal_770 = 1084227584;
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
	struct<17> Local_797[2];
	int iLocal_832 = 0;
	var uLocal_833 = -1;
	var uLocal_834 = 0;
	var uLocal_835 = -1;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = -1;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 1073741824;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 1;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858 = 1106247680;
	var uLocal_859 = 1067450368;
	var uLocal_860 = 0;
	var uLocal_861 = 1092616192;
	var uLocal_862 = 1112014848;
	var uLocal_863 = 1106247680;
	var uLocal_864 = 1101529088;
	var uLocal_865 = 1101004800;
	var uLocal_866 = 1084227584;
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
	struct<17> Local_893[2];
	int iLocal_928 = 0;
	var uLocal_929 = -1;
	var uLocal_930 = 0;
	var uLocal_931 = -1;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = -1;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	var uLocal_939 = 0;
	var uLocal_940 = 1073741824;
	var uLocal_941 = 0;
	var uLocal_942 = 0;
	var uLocal_943 = 0;
	var uLocal_944 = 1;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	var uLocal_954 = 1106247680;
	var uLocal_955 = 1067450368;
	var uLocal_956 = 0;
	var uLocal_957 = 1092616192;
	var uLocal_958 = 1112014848;
	var uLocal_959 = 1106247680;
	var uLocal_960 = 1101529088;
	var uLocal_961 = 1101004800;
	var uLocal_962 = 1084227584;
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
	struct<17> Local_989[1];
	struct<28> Local_1007 = { 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1106247680, 1067450368 } ;
	var uLocal_1035 = 0;
	var uLocal_1036 = 1092616192;
	var uLocal_1037 = 1112014848;
	var uLocal_1038 = 1106247680;
	var uLocal_1039 = 1101529088;
	var uLocal_1040 = 1101004800;
	var uLocal_1041 = 1084227584;
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
	struct<17> Local_1068[2];
	int iLocal_1103 = 0;
	var uLocal_1104 = -1;
	var uLocal_1105 = 0;
	var uLocal_1106 = -1;
	var uLocal_1107 = 0;
	var uLocal_1108 = 0;
	var uLocal_1109 = -1;
	var uLocal_1110 = 0;
	var uLocal_1111 = 0;
	var uLocal_1112 = 0;
	var uLocal_1113 = 0;
	var uLocal_1114 = 0;
	var uLocal_1115 = 1073741824;
	var uLocal_1116 = 0;
	var uLocal_1117 = 0;
	var uLocal_1118 = 0;
	var uLocal_1119 = 1;
	var uLocal_1120 = 0;
	var uLocal_1121 = 0;
	var uLocal_1122 = 0;
	var uLocal_1123 = 0;
	var uLocal_1124 = 0;
	var uLocal_1125 = 0;
	var uLocal_1126 = 0;
	var uLocal_1127 = 0;
	var uLocal_1128 = 0;
	var uLocal_1129 = 1106247680;
	var uLocal_1130 = 1067450368;
	var uLocal_1131 = 0;
	var uLocal_1132 = 1092616192;
	var uLocal_1133 = 1112014848;
	var uLocal_1134 = 1106247680;
	var uLocal_1135 = 1101529088;
	var uLocal_1136 = 1101004800;
	var uLocal_1137 = 1084227584;
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
	int iLocal_1164 = 0;
	var uLocal_1165[1] = { 0 };
	var uLocal_1167[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_1177 = false;
	int iLocal_1178 = 0;
	struct<6> Local_1179 = { 4, 0, 0, 0, 0, 4 } ;
	var uLocal_1185 = 0;
	var uLocal_1186 = 0;
	var uLocal_1187 = 0;
	var uLocal_1188 = 0;
	var uLocal_1189 = 93;
	var uLocal_1190 = 0;
	var uLocal_1191 = 93;
	var uLocal_1192 = 0;
	struct<6> Local_1193[19];
	int iLocal_1308 = 0;
	struct<27> Local_1309 = { 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_1336 = 0;
	int iLocal_1337 = 0;
	int iLocal_1338 = 0;
	int iLocal_1339 = 0;
	int iLocal_1340 = 0;
	bool bLocal_1341 = false;
	var uLocal_1342 = 0;
	var uLocal_1343 = 0;
	var uLocal_1344 = 0;
	var uLocal_1345 = 0;
	var uLocal_1346 = 0;
	var uLocal_1347 = 0;
	var uLocal_1348 = 0;
	var uLocal_1349 = 0;
	var uLocal_1350 = 0;
	int iLocal_1351 = 0;
	int iLocal_1352 = 0;
	int iLocal_1353 = 0;
	int iLocal_1354 = 0;
	float fLocal_1355 = 0f;
	int iLocal_1356 = 0;
	int iLocal_1357 = 0;
	int iLocal_1358 = 0;
	int iLocal_1359 = 0;
	int iLocal_1360 = 0;
	int iLocal_1361 = 0;
	int iLocal_1362 = 0;
	int iLocal_1363 = 0;
	int iLocal_1364 = 0;
	int iLocal_1365 = 0;
	int iLocal_1366 = 0;
	var uLocal_1367 = 0;
	var uLocal_1368 = 27;
	var uLocal_1369 = 8;
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
	var uLocal_1390 = -1;
	var uLocal_1391 = 8;
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
	var uLocal_1412 = -1;
	var uLocal_1413 = 8;
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
	var uLocal_1434 = -1;
	var uLocal_1435 = 8;
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
	var uLocal_1452 = 0;
	var uLocal_1453 = 0;
	var uLocal_1454 = 0;
	var uLocal_1455 = 0;
	var uLocal_1456 = -1;
	var uLocal_1457 = 8;
	var uLocal_1458 = 0;
	var uLocal_1459 = 0;
	var uLocal_1460 = 0;
	var uLocal_1461 = 0;
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
	var uLocal_1478 = -1;
	var uLocal_1479 = 8;
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
	var uLocal_1494 = 0;
	var uLocal_1495 = 0;
	var uLocal_1496 = 0;
	var uLocal_1497 = 0;
	var uLocal_1498 = 0;
	var uLocal_1499 = 0;
	var uLocal_1500 = -1;
	var uLocal_1501 = 8;
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
	var uLocal_1522 = -1;
	var uLocal_1523 = 8;
	var uLocal_1524 = 0;
	var uLocal_1525 = 0;
	var uLocal_1526 = 0;
	var uLocal_1527 = 0;
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
	var uLocal_1544 = -1;
	var uLocal_1545 = 8;
	var uLocal_1546 = 0;
	var uLocal_1547 = 0;
	var uLocal_1548 = 0;
	var uLocal_1549 = 0;
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
	var uLocal_1566 = -1;
	var uLocal_1567 = 8;
	var uLocal_1568 = 0;
	var uLocal_1569 = 0;
	var uLocal_1570 = 0;
	var uLocal_1571 = 0;
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
	var uLocal_1588 = -1;
	var uLocal_1589 = 8;
	var uLocal_1590 = 0;
	var uLocal_1591 = 0;
	var uLocal_1592 = 0;
	var uLocal_1593 = 0;
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
	var uLocal_1610 = -1;
	var uLocal_1611 = 8;
	var uLocal_1612 = 0;
	var uLocal_1613 = 0;
	var uLocal_1614 = 0;
	var uLocal_1615 = 0;
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
	var uLocal_1632 = -1;
	var uLocal_1633 = 8;
	var uLocal_1634 = 0;
	var uLocal_1635 = 0;
	var uLocal_1636 = 0;
	var uLocal_1637 = 0;
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
	var uLocal_1654 = -1;
	var uLocal_1655 = 8;
	var uLocal_1656 = 0;
	var uLocal_1657 = 0;
	var uLocal_1658 = 0;
	var uLocal_1659 = 0;
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
	var uLocal_1676 = -1;
	var uLocal_1677 = 8;
	var uLocal_1678 = 0;
	var uLocal_1679 = 0;
	var uLocal_1680 = 0;
	var uLocal_1681 = 0;
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
	var uLocal_1698 = -1;
	var uLocal_1699 = 8;
	var uLocal_1700 = 0;
	var uLocal_1701 = 0;
	var uLocal_1702 = 0;
	var uLocal_1703 = 0;
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
	var uLocal_1720 = -1;
	var uLocal_1721 = 8;
	var uLocal_1722 = 0;
	var uLocal_1723 = 0;
	var uLocal_1724 = 0;
	var uLocal_1725 = 0;
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
	var uLocal_1742 = -1;
	var uLocal_1743 = 8;
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
	var uLocal_1764 = -1;
	var uLocal_1765 = 8;
	var uLocal_1766 = 0;
	var uLocal_1767 = 0;
	var uLocal_1768 = 0;
	var uLocal_1769 = 0;
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
	var uLocal_1786 = -1;
	var uLocal_1787 = 8;
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
	var uLocal_1808 = -1;
	var uLocal_1809 = 8;
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
	var uLocal_1830 = -1;
	var uLocal_1831 = 8;
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
	var uLocal_1852 = -1;
	var uLocal_1853 = 8;
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
	var uLocal_1874 = -1;
	var uLocal_1875 = 8;
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
	var uLocal_1896 = -1;
	var uLocal_1897 = 8;
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
	var uLocal_1918 = -1;
	var uLocal_1919 = 8;
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
	var uLocal_1940 = -1;
	var uLocal_1941 = 8;
	var uLocal_1942 = 0;
	var uLocal_1943 = 0;
	var uLocal_1944 = 0;
	var uLocal_1945 = 0;
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
	var uLocal_1962 = -1;
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
	var uLocal_2001 = 2;
	var uLocal_2002 = 0;
	var uLocal_2003 = 0;
	var uLocal_2004 = 0;
	var uLocal_2005 = 60;
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
	var uLocal_2186 = 40;
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
	var uLocal_2256 = 0;
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
	var uLocal_2387 = 20;
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
	var uLocal_2448 = 14;
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
	var uLocal_2493 = 60;
	var uLocal_2494 = 0;
	var uLocal_2495 = 0;
	var uLocal_2496 = 0;
	var uLocal_2497 = 0;
	var uLocal_2498 = 20;
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
	var uLocal_2563 = 0;
	var uLocal_2564 = 0;
	var uLocal_2565 = 20;
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
	var uLocal_2632 = 20;
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
	var uLocal_2699 = 20;
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
	var uLocal_2766 = 20;
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
	var uLocal_2833 = 20;
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
	var uLocal_2900 = 20;
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
	var uLocal_2967 = 20;
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
	var uLocal_3034 = 20;
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
	var uLocal_3101 = 20;
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
	var uLocal_3168 = 20;
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
	var uLocal_3235 = 20;
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
	var uLocal_3302 = 20;
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
	var uLocal_3369 = 20;
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
	var uLocal_3436 = 20;
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
	var uLocal_3503 = 20;
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
	var uLocal_3570 = 20;
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
	var uLocal_3637 = 20;
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
	var uLocal_3704 = 20;
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
	var uLocal_3771 = 20;
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
	var uLocal_3838 = 20;
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
	var uLocal_3905 = 20;
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
	var uLocal_3972 = 20;
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
	var uLocal_4039 = 20;
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
	var uLocal_4106 = 20;
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
	var uLocal_4173 = 20;
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
	var uLocal_4240 = 20;
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
	var uLocal_4307 = 20;
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
	var uLocal_4374 = 20;
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
	var uLocal_4441 = 20;
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
	var uLocal_4508 = 20;
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
	var uLocal_4575 = 20;
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
	var uLocal_4642 = 20;
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
	var uLocal_4709 = 20;
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
	var uLocal_4776 = 20;
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
	var uLocal_4843 = 20;
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
	var uLocal_4910 = 20;
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
	var uLocal_4977 = 20;
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
	var uLocal_5044 = 20;
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
	var uLocal_5111 = 20;
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
	var uLocal_5178 = 20;
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
	var uLocal_5245 = 20;
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
	var uLocal_5312 = 20;
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
	var uLocal_5379 = 20;
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
	var uLocal_5446 = 20;
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
	var uLocal_5513 = 20;
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
	var uLocal_5580 = 20;
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
	var uLocal_5647 = 20;
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
	var uLocal_5714 = 20;
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
	var uLocal_5781 = 20;
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
	var uLocal_5848 = 20;
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
	var uLocal_5915 = 20;
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
	var uLocal_5982 = 20;
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
	var uLocal_6049 = 20;
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
	var uLocal_6116 = 20;
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
	var uLocal_6183 = 20;
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
	var uLocal_6250 = 20;
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
	var uLocal_6317 = 20;
	var uLocal_6318 = 0;
	var uLocal_6319 = 0;
	var uLocal_6320 = 0;
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
	var uLocal_6384 = 20;
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
	var uLocal_6451 = 20;
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
	var uLocal_6514 = 10;
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
	var uLocal_6555 = 10;
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
	var uLocal_6584 = 0;
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
	var uLocal_6606 = 3;
	var uLocal_6607 = 0;
	var uLocal_6608 = 0;
	var uLocal_6609 = 0;
	var uLocal_6610 = 0;
	var uLocal_6611 = 0;
	var uLocal_6612 = 0;
	var uLocal_6613 = 0;
	var uLocal_6614 = 0;
	var uLocal_6615 = 0;
	var uLocal_6616 = 5;
	var uLocal_6617 = 0;
	var uLocal_6618 = 0;
	var uLocal_6619 = 0;
	var uLocal_6620 = 0;
	var uLocal_6621 = 0;
	var uLocal_6622 = 0;
	var uLocal_6623 = 0;
	var uLocal_6624 = 0;
	var uLocal_6625 = 0;
	var uLocal_6626 = 0;
	var uLocal_6627 = 0;
	var uLocal_6628 = 0;
	var uLocal_6629 = 0;
	var uLocal_6630 = 0;
	var uLocal_6631 = 0;
	var uLocal_6632 = 5;
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
	var uLocal_6653 = 5;
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
	var uLocal_6676 = 0;
	var uLocal_6677 = 24;
	var uLocal_6678 = 0;
	var uLocal_6679 = 0;
	var uLocal_6680 = 0;
	var uLocal_6681 = 0;
	var uLocal_6682 = 0;
	var uLocal_6683 = 0;
	var uLocal_6684 = 0;
	var uLocal_6685 = 0;
	var uLocal_6686 = 0;
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
	var uLocal_6702 = 0;
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
	var uLocal_6723 = 0;
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
	var uLocal_6747 = 0;
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
	var uLocal_6790 = 30;
	var uLocal_6791 = 0;
	var uLocal_6792 = 0;
	var uLocal_6793 = 0;
	var uLocal_6794 = 0;
	var uLocal_6795 = 0;
	var uLocal_6796 = 3;
	var uLocal_6797 = 0;
	var uLocal_6798 = 0;
	var uLocal_6799 = 0;
	var uLocal_6800 = 0;
	var uLocal_6801 = -1;
	var uLocal_6802 = 0;
	var uLocal_6803 = 5;
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
	var uLocal_6814 = 10;
	var uLocal_6815 = 3;
	var uLocal_6816 = 500;
	var uLocal_6817 = 10000;
	var uLocal_6818 = 0;
	var uLocal_6819 = 3;
	var uLocal_6820 = 500;
	var uLocal_6821 = 10000;
	var uLocal_6822 = 0;
	var uLocal_6823 = 3;
	var uLocal_6824 = 500;
	var uLocal_6825 = 10000;
	var uLocal_6826 = 0;
	var uLocal_6827 = 3;
	var uLocal_6828 = 500;
	var uLocal_6829 = 10000;
	var uLocal_6830 = 0;
	var uLocal_6831 = 3;
	var uLocal_6832 = 500;
	var uLocal_6833 = 10000;
	var uLocal_6834 = 0;
	var uLocal_6835 = 3;
	var uLocal_6836 = 500;
	var uLocal_6837 = 10000;
	var uLocal_6838 = 0;
	var uLocal_6839 = 3;
	var uLocal_6840 = 500;
	var uLocal_6841 = 10000;
	var uLocal_6842 = 0;
	var uLocal_6843 = 3;
	var uLocal_6844 = 500;
	var uLocal_6845 = 10000;
	var uLocal_6846 = 0;
	var uLocal_6847 = 3;
	var uLocal_6848 = 500;
	var uLocal_6849 = 10000;
	var uLocal_6850 = 0;
	var uLocal_6851 = 3;
	var uLocal_6852 = 500;
	var uLocal_6853 = 10000;
	var uLocal_6854 = 0;
	var uLocal_6855 = 0;
	var uLocal_6856 = 0;
	var uLocal_6857 = 0;
	var uLocal_6858 = 0;
	var uLocal_6859 = 0;
	var uLocal_6860 = 0;
	var uLocal_6861 = 3;
	var uLocal_6862 = 0;
	var uLocal_6863 = 0;
	var uLocal_6864 = 0;
	var uLocal_6865 = 0;
	var uLocal_6866 = -1;
	var uLocal_6867 = 0;
	var uLocal_6868 = 5;
	var uLocal_6869 = 0;
	var uLocal_6870 = 0;
	var uLocal_6871 = 0;
	var uLocal_6872 = 0;
	var uLocal_6873 = 0;
	var uLocal_6874 = 0;
	var uLocal_6875 = 0;
	var uLocal_6876 = 0;
	var uLocal_6877 = 0;
	var uLocal_6878 = 0;
	var uLocal_6879 = 10;
	var uLocal_6880 = 3;
	var uLocal_6881 = 500;
	var uLocal_6882 = 10000;
	var uLocal_6883 = 0;
	var uLocal_6884 = 3;
	var uLocal_6885 = 500;
	var uLocal_6886 = 10000;
	var uLocal_6887 = 0;
	var uLocal_6888 = 3;
	var uLocal_6889 = 500;
	var uLocal_6890 = 10000;
	var uLocal_6891 = 0;
	var uLocal_6892 = 3;
	var uLocal_6893 = 500;
	var uLocal_6894 = 10000;
	var uLocal_6895 = 0;
	var uLocal_6896 = 3;
	var uLocal_6897 = 500;
	var uLocal_6898 = 10000;
	var uLocal_6899 = 0;
	var uLocal_6900 = 3;
	var uLocal_6901 = 500;
	var uLocal_6902 = 10000;
	var uLocal_6903 = 0;
	var uLocal_6904 = 3;
	var uLocal_6905 = 500;
	var uLocal_6906 = 10000;
	var uLocal_6907 = 0;
	var uLocal_6908 = 3;
	var uLocal_6909 = 500;
	var uLocal_6910 = 10000;
	var uLocal_6911 = 0;
	var uLocal_6912 = 3;
	var uLocal_6913 = 500;
	var uLocal_6914 = 10000;
	var uLocal_6915 = 0;
	var uLocal_6916 = 3;
	var uLocal_6917 = 500;
	var uLocal_6918 = 10000;
	var uLocal_6919 = 0;
	var uLocal_6920 = 0;
	var uLocal_6921 = 0;
	var uLocal_6922 = 0;
	var uLocal_6923 = 0;
	var uLocal_6924 = 0;
	var uLocal_6925 = 0;
	var uLocal_6926 = 3;
	var uLocal_6927 = 0;
	var uLocal_6928 = 0;
	var uLocal_6929 = 0;
	var uLocal_6930 = 0;
	var uLocal_6931 = -1;
	var uLocal_6932 = 0;
	var uLocal_6933 = 5;
	var uLocal_6934 = 0;
	var uLocal_6935 = 0;
	var uLocal_6936 = 0;
	var uLocal_6937 = 0;
	var uLocal_6938 = 0;
	var uLocal_6939 = 0;
	var uLocal_6940 = 0;
	var uLocal_6941 = 0;
	var uLocal_6942 = 0;
	var uLocal_6943 = 0;
	var uLocal_6944 = 10;
	var uLocal_6945 = 3;
	var uLocal_6946 = 500;
	var uLocal_6947 = 10000;
	var uLocal_6948 = 0;
	var uLocal_6949 = 3;
	var uLocal_6950 = 500;
	var uLocal_6951 = 10000;
	var uLocal_6952 = 0;
	var uLocal_6953 = 3;
	var uLocal_6954 = 500;
	var uLocal_6955 = 10000;
	var uLocal_6956 = 0;
	var uLocal_6957 = 3;
	var uLocal_6958 = 500;
	var uLocal_6959 = 10000;
	var uLocal_6960 = 0;
	var uLocal_6961 = 3;
	var uLocal_6962 = 500;
	var uLocal_6963 = 10000;
	var uLocal_6964 = 0;
	var uLocal_6965 = 3;
	var uLocal_6966 = 500;
	var uLocal_6967 = 10000;
	var uLocal_6968 = 0;
	var uLocal_6969 = 3;
	var uLocal_6970 = 500;
	var uLocal_6971 = 10000;
	var uLocal_6972 = 0;
	var uLocal_6973 = 3;
	var uLocal_6974 = 500;
	var uLocal_6975 = 10000;
	var uLocal_6976 = 0;
	var uLocal_6977 = 3;
	var uLocal_6978 = 500;
	var uLocal_6979 = 10000;
	var uLocal_6980 = 0;
	var uLocal_6981 = 3;
	var uLocal_6982 = 500;
	var uLocal_6983 = 10000;
	var uLocal_6984 = 0;
	var uLocal_6985 = 0;
	var uLocal_6986 = 0;
	var uLocal_6987 = 0;
	var uLocal_6988 = 0;
	var uLocal_6989 = 0;
	var uLocal_6990 = 0;
	var uLocal_6991 = 3;
	var uLocal_6992 = 0;
	var uLocal_6993 = 0;
	var uLocal_6994 = 0;
	var uLocal_6995 = 0;
	var uLocal_6996 = -1;
	var uLocal_6997 = 0;
	var uLocal_6998 = 5;
	var uLocal_6999 = 0;
	var uLocal_7000 = 0;
	var uLocal_7001 = 0;
	var uLocal_7002 = 0;
	var uLocal_7003 = 0;
	var uLocal_7004 = 0;
	var uLocal_7005 = 0;
	var uLocal_7006 = 0;
	var uLocal_7007 = 0;
	var uLocal_7008 = 0;
	var uLocal_7009 = 10;
	var uLocal_7010 = 3;
	var uLocal_7011 = 500;
	var uLocal_7012 = 10000;
	var uLocal_7013 = 0;
	var uLocal_7014 = 3;
	var uLocal_7015 = 500;
	var uLocal_7016 = 10000;
	var uLocal_7017 = 0;
	var uLocal_7018 = 3;
	var uLocal_7019 = 500;
	var uLocal_7020 = 10000;
	var uLocal_7021 = 0;
	var uLocal_7022 = 3;
	var uLocal_7023 = 500;
	var uLocal_7024 = 10000;
	var uLocal_7025 = 0;
	var uLocal_7026 = 3;
	var uLocal_7027 = 500;
	var uLocal_7028 = 10000;
	var uLocal_7029 = 0;
	var uLocal_7030 = 3;
	var uLocal_7031 = 500;
	var uLocal_7032 = 10000;
	var uLocal_7033 = 0;
	var uLocal_7034 = 3;
	var uLocal_7035 = 500;
	var uLocal_7036 = 10000;
	var uLocal_7037 = 0;
	var uLocal_7038 = 3;
	var uLocal_7039 = 500;
	var uLocal_7040 = 10000;
	var uLocal_7041 = 0;
	var uLocal_7042 = 3;
	var uLocal_7043 = 500;
	var uLocal_7044 = 10000;
	var uLocal_7045 = 0;
	var uLocal_7046 = 3;
	var uLocal_7047 = 500;
	var uLocal_7048 = 10000;
	var uLocal_7049 = 0;
	var uLocal_7050 = 0;
	var uLocal_7051 = 0;
	var uLocal_7052 = 0;
	var uLocal_7053 = 0;
	var uLocal_7054 = 0;
	var uLocal_7055 = 0;
	var uLocal_7056 = 3;
	var uLocal_7057 = 0;
	var uLocal_7058 = 0;
	var uLocal_7059 = 0;
	var uLocal_7060 = 0;
	var uLocal_7061 = -1;
	var uLocal_7062 = 0;
	var uLocal_7063 = 5;
	var uLocal_7064 = 0;
	var uLocal_7065 = 0;
	var uLocal_7066 = 0;
	var uLocal_7067 = 0;
	var uLocal_7068 = 0;
	var uLocal_7069 = 0;
	var uLocal_7070 = 0;
	var uLocal_7071 = 0;
	var uLocal_7072 = 0;
	var uLocal_7073 = 0;
	var uLocal_7074 = 10;
	var uLocal_7075 = 3;
	var uLocal_7076 = 500;
	var uLocal_7077 = 10000;
	var uLocal_7078 = 0;
	var uLocal_7079 = 3;
	var uLocal_7080 = 500;
	var uLocal_7081 = 10000;
	var uLocal_7082 = 0;
	var uLocal_7083 = 3;
	var uLocal_7084 = 500;
	var uLocal_7085 = 10000;
	var uLocal_7086 = 0;
	var uLocal_7087 = 3;
	var uLocal_7088 = 500;
	var uLocal_7089 = 10000;
	var uLocal_7090 = 0;
	var uLocal_7091 = 3;
	var uLocal_7092 = 500;
	var uLocal_7093 = 10000;
	var uLocal_7094 = 0;
	var uLocal_7095 = 3;
	var uLocal_7096 = 500;
	var uLocal_7097 = 10000;
	var uLocal_7098 = 0;
	var uLocal_7099 = 3;
	var uLocal_7100 = 500;
	var uLocal_7101 = 10000;
	var uLocal_7102 = 0;
	var uLocal_7103 = 3;
	var uLocal_7104 = 500;
	var uLocal_7105 = 10000;
	var uLocal_7106 = 0;
	var uLocal_7107 = 3;
	var uLocal_7108 = 500;
	var uLocal_7109 = 10000;
	var uLocal_7110 = 0;
	var uLocal_7111 = 3;
	var uLocal_7112 = 500;
	var uLocal_7113 = 10000;
	var uLocal_7114 = 0;
	var uLocal_7115 = 0;
	var uLocal_7116 = 0;
	var uLocal_7117 = 0;
	var uLocal_7118 = 0;
	var uLocal_7119 = 0;
	var uLocal_7120 = 0;
	var uLocal_7121 = 3;
	var uLocal_7122 = 0;
	var uLocal_7123 = 0;
	var uLocal_7124 = 0;
	var uLocal_7125 = 0;
	var uLocal_7126 = -1;
	var uLocal_7127 = 0;
	var uLocal_7128 = 5;
	var uLocal_7129 = 0;
	var uLocal_7130 = 0;
	var uLocal_7131 = 0;
	var uLocal_7132 = 0;
	var uLocal_7133 = 0;
	var uLocal_7134 = 0;
	var uLocal_7135 = 0;
	var uLocal_7136 = 0;
	var uLocal_7137 = 0;
	var uLocal_7138 = 0;
	var uLocal_7139 = 10;
	var uLocal_7140 = 3;
	var uLocal_7141 = 500;
	var uLocal_7142 = 10000;
	var uLocal_7143 = 0;
	var uLocal_7144 = 3;
	var uLocal_7145 = 500;
	var uLocal_7146 = 10000;
	var uLocal_7147 = 0;
	var uLocal_7148 = 3;
	var uLocal_7149 = 500;
	var uLocal_7150 = 10000;
	var uLocal_7151 = 0;
	var uLocal_7152 = 3;
	var uLocal_7153 = 500;
	var uLocal_7154 = 10000;
	var uLocal_7155 = 0;
	var uLocal_7156 = 3;
	var uLocal_7157 = 500;
	var uLocal_7158 = 10000;
	var uLocal_7159 = 0;
	var uLocal_7160 = 3;
	var uLocal_7161 = 500;
	var uLocal_7162 = 10000;
	var uLocal_7163 = 0;
	var uLocal_7164 = 3;
	var uLocal_7165 = 500;
	var uLocal_7166 = 10000;
	var uLocal_7167 = 0;
	var uLocal_7168 = 3;
	var uLocal_7169 = 500;
	var uLocal_7170 = 10000;
	var uLocal_7171 = 0;
	var uLocal_7172 = 3;
	var uLocal_7173 = 500;
	var uLocal_7174 = 10000;
	var uLocal_7175 = 0;
	var uLocal_7176 = 3;
	var uLocal_7177 = 500;
	var uLocal_7178 = 10000;
	var uLocal_7179 = 0;
	var uLocal_7180 = 0;
	var uLocal_7181 = 0;
	var uLocal_7182 = 0;
	var uLocal_7183 = 0;
	var uLocal_7184 = 0;
	var uLocal_7185 = 0;
	var uLocal_7186 = 3;
	var uLocal_7187 = 0;
	var uLocal_7188 = 0;
	var uLocal_7189 = 0;
	var uLocal_7190 = 0;
	var uLocal_7191 = -1;
	var uLocal_7192 = 0;
	var uLocal_7193 = 5;
	var uLocal_7194 = 0;
	var uLocal_7195 = 0;
	var uLocal_7196 = 0;
	var uLocal_7197 = 0;
	var uLocal_7198 = 0;
	var uLocal_7199 = 0;
	var uLocal_7200 = 0;
	var uLocal_7201 = 0;
	var uLocal_7202 = 0;
	var uLocal_7203 = 0;
	var uLocal_7204 = 10;
	var uLocal_7205 = 3;
	var uLocal_7206 = 500;
	var uLocal_7207 = 10000;
	var uLocal_7208 = 0;
	var uLocal_7209 = 3;
	var uLocal_7210 = 500;
	var uLocal_7211 = 10000;
	var uLocal_7212 = 0;
	var uLocal_7213 = 3;
	var uLocal_7214 = 500;
	var uLocal_7215 = 10000;
	var uLocal_7216 = 0;
	var uLocal_7217 = 3;
	var uLocal_7218 = 500;
	var uLocal_7219 = 10000;
	var uLocal_7220 = 0;
	var uLocal_7221 = 3;
	var uLocal_7222 = 500;
	var uLocal_7223 = 10000;
	var uLocal_7224 = 0;
	var uLocal_7225 = 3;
	var uLocal_7226 = 500;
	var uLocal_7227 = 10000;
	var uLocal_7228 = 0;
	var uLocal_7229 = 3;
	var uLocal_7230 = 500;
	var uLocal_7231 = 10000;
	var uLocal_7232 = 0;
	var uLocal_7233 = 3;
	var uLocal_7234 = 500;
	var uLocal_7235 = 10000;
	var uLocal_7236 = 0;
	var uLocal_7237 = 3;
	var uLocal_7238 = 500;
	var uLocal_7239 = 10000;
	var uLocal_7240 = 0;
	var uLocal_7241 = 3;
	var uLocal_7242 = 500;
	var uLocal_7243 = 10000;
	var uLocal_7244 = 0;
	var uLocal_7245 = 0;
	var uLocal_7246 = 0;
	var uLocal_7247 = 0;
	var uLocal_7248 = 0;
	var uLocal_7249 = 0;
	var uLocal_7250 = 0;
	var uLocal_7251 = 3;
	var uLocal_7252 = 0;
	var uLocal_7253 = 0;
	var uLocal_7254 = 0;
	var uLocal_7255 = 0;
	var uLocal_7256 = -1;
	var uLocal_7257 = 0;
	var uLocal_7258 = 5;
	var uLocal_7259 = 0;
	var uLocal_7260 = 0;
	var uLocal_7261 = 0;
	var uLocal_7262 = 0;
	var uLocal_7263 = 0;
	var uLocal_7264 = 0;
	var uLocal_7265 = 0;
	var uLocal_7266 = 0;
	var uLocal_7267 = 0;
	var uLocal_7268 = 0;
	var uLocal_7269 = 10;
	var uLocal_7270 = 3;
	var uLocal_7271 = 500;
	var uLocal_7272 = 10000;
	var uLocal_7273 = 0;
	var uLocal_7274 = 3;
	var uLocal_7275 = 500;
	var uLocal_7276 = 10000;
	var uLocal_7277 = 0;
	var uLocal_7278 = 3;
	var uLocal_7279 = 500;
	var uLocal_7280 = 10000;
	var uLocal_7281 = 0;
	var uLocal_7282 = 3;
	var uLocal_7283 = 500;
	var uLocal_7284 = 10000;
	var uLocal_7285 = 0;
	var uLocal_7286 = 3;
	var uLocal_7287 = 500;
	var uLocal_7288 = 10000;
	var uLocal_7289 = 0;
	var uLocal_7290 = 3;
	var uLocal_7291 = 500;
	var uLocal_7292 = 10000;
	var uLocal_7293 = 0;
	var uLocal_7294 = 3;
	var uLocal_7295 = 500;
	var uLocal_7296 = 10000;
	var uLocal_7297 = 0;
	var uLocal_7298 = 3;
	var uLocal_7299 = 500;
	var uLocal_7300 = 10000;
	var uLocal_7301 = 0;
	var uLocal_7302 = 3;
	var uLocal_7303 = 500;
	var uLocal_7304 = 10000;
	var uLocal_7305 = 0;
	var uLocal_7306 = 3;
	var uLocal_7307 = 500;
	var uLocal_7308 = 10000;
	var uLocal_7309 = 0;
	var uLocal_7310 = 0;
	var uLocal_7311 = 0;
	var uLocal_7312 = 0;
	var uLocal_7313 = 0;
	var uLocal_7314 = 0;
	var uLocal_7315 = 0;
	var uLocal_7316 = 3;
	var uLocal_7317 = 0;
	var uLocal_7318 = 0;
	var uLocal_7319 = 0;
	var uLocal_7320 = 0;
	var uLocal_7321 = -1;
	var uLocal_7322 = 0;
	var uLocal_7323 = 5;
	var uLocal_7324 = 0;
	var uLocal_7325 = 0;
	var uLocal_7326 = 0;
	var uLocal_7327 = 0;
	var uLocal_7328 = 0;
	var uLocal_7329 = 0;
	var uLocal_7330 = 0;
	var uLocal_7331 = 0;
	var uLocal_7332 = 0;
	var uLocal_7333 = 0;
	var uLocal_7334 = 10;
	var uLocal_7335 = 3;
	var uLocal_7336 = 500;
	var uLocal_7337 = 10000;
	var uLocal_7338 = 0;
	var uLocal_7339 = 3;
	var uLocal_7340 = 500;
	var uLocal_7341 = 10000;
	var uLocal_7342 = 0;
	var uLocal_7343 = 3;
	var uLocal_7344 = 500;
	var uLocal_7345 = 10000;
	var uLocal_7346 = 0;
	var uLocal_7347 = 3;
	var uLocal_7348 = 500;
	var uLocal_7349 = 10000;
	var uLocal_7350 = 0;
	var uLocal_7351 = 3;
	var uLocal_7352 = 500;
	var uLocal_7353 = 10000;
	var uLocal_7354 = 0;
	var uLocal_7355 = 3;
	var uLocal_7356 = 500;
	var uLocal_7357 = 10000;
	var uLocal_7358 = 0;
	var uLocal_7359 = 3;
	var uLocal_7360 = 500;
	var uLocal_7361 = 10000;
	var uLocal_7362 = 0;
	var uLocal_7363 = 3;
	var uLocal_7364 = 500;
	var uLocal_7365 = 10000;
	var uLocal_7366 = 0;
	var uLocal_7367 = 3;
	var uLocal_7368 = 500;
	var uLocal_7369 = 10000;
	var uLocal_7370 = 0;
	var uLocal_7371 = 3;
	var uLocal_7372 = 500;
	var uLocal_7373 = 10000;
	var uLocal_7374 = 0;
	var uLocal_7375 = 0;
	var uLocal_7376 = 0;
	var uLocal_7377 = 0;
	var uLocal_7378 = 0;
	var uLocal_7379 = 0;
	var uLocal_7380 = 0;
	var uLocal_7381 = 3;
	var uLocal_7382 = 0;
	var uLocal_7383 = 0;
	var uLocal_7384 = 0;
	var uLocal_7385 = 0;
	var uLocal_7386 = -1;
	var uLocal_7387 = 0;
	var uLocal_7388 = 5;
	var uLocal_7389 = 0;
	var uLocal_7390 = 0;
	var uLocal_7391 = 0;
	var uLocal_7392 = 0;
	var uLocal_7393 = 0;
	var uLocal_7394 = 0;
	var uLocal_7395 = 0;
	var uLocal_7396 = 0;
	var uLocal_7397 = 0;
	var uLocal_7398 = 0;
	var uLocal_7399 = 10;
	var uLocal_7400 = 3;
	var uLocal_7401 = 500;
	var uLocal_7402 = 10000;
	var uLocal_7403 = 0;
	var uLocal_7404 = 3;
	var uLocal_7405 = 500;
	var uLocal_7406 = 10000;
	var uLocal_7407 = 0;
	var uLocal_7408 = 3;
	var uLocal_7409 = 500;
	var uLocal_7410 = 10000;
	var uLocal_7411 = 0;
	var uLocal_7412 = 3;
	var uLocal_7413 = 500;
	var uLocal_7414 = 10000;
	var uLocal_7415 = 0;
	var uLocal_7416 = 3;
	var uLocal_7417 = 500;
	var uLocal_7418 = 10000;
	var uLocal_7419 = 0;
	var uLocal_7420 = 3;
	var uLocal_7421 = 500;
	var uLocal_7422 = 10000;
	var uLocal_7423 = 0;
	var uLocal_7424 = 3;
	var uLocal_7425 = 500;
	var uLocal_7426 = 10000;
	var uLocal_7427 = 0;
	var uLocal_7428 = 3;
	var uLocal_7429 = 500;
	var uLocal_7430 = 10000;
	var uLocal_7431 = 0;
	var uLocal_7432 = 3;
	var uLocal_7433 = 500;
	var uLocal_7434 = 10000;
	var uLocal_7435 = 0;
	var uLocal_7436 = 3;
	var uLocal_7437 = 500;
	var uLocal_7438 = 10000;
	var uLocal_7439 = 0;
	var uLocal_7440 = 0;
	var uLocal_7441 = 0;
	var uLocal_7442 = 0;
	var uLocal_7443 = 0;
	var uLocal_7444 = 0;
	var uLocal_7445 = 0;
	var uLocal_7446 = 3;
	var uLocal_7447 = 0;
	var uLocal_7448 = 0;
	var uLocal_7449 = 0;
	var uLocal_7450 = 0;
	var uLocal_7451 = -1;
	var uLocal_7452 = 0;
	var uLocal_7453 = 5;
	var uLocal_7454 = 0;
	var uLocal_7455 = 0;
	var uLocal_7456 = 0;
	var uLocal_7457 = 0;
	var uLocal_7458 = 0;
	var uLocal_7459 = 0;
	var uLocal_7460 = 0;
	var uLocal_7461 = 0;
	var uLocal_7462 = 0;
	var uLocal_7463 = 0;
	var uLocal_7464 = 10;
	var uLocal_7465 = 3;
	var uLocal_7466 = 500;
	var uLocal_7467 = 10000;
	var uLocal_7468 = 0;
	var uLocal_7469 = 3;
	var uLocal_7470 = 500;
	var uLocal_7471 = 10000;
	var uLocal_7472 = 0;
	var uLocal_7473 = 3;
	var uLocal_7474 = 500;
	var uLocal_7475 = 10000;
	var uLocal_7476 = 0;
	var uLocal_7477 = 3;
	var uLocal_7478 = 500;
	var uLocal_7479 = 10000;
	var uLocal_7480 = 0;
	var uLocal_7481 = 3;
	var uLocal_7482 = 500;
	var uLocal_7483 = 10000;
	var uLocal_7484 = 0;
	var uLocal_7485 = 3;
	var uLocal_7486 = 500;
	var uLocal_7487 = 10000;
	var uLocal_7488 = 0;
	var uLocal_7489 = 3;
	var uLocal_7490 = 500;
	var uLocal_7491 = 10000;
	var uLocal_7492 = 0;
	var uLocal_7493 = 3;
	var uLocal_7494 = 500;
	var uLocal_7495 = 10000;
	var uLocal_7496 = 0;
	var uLocal_7497 = 3;
	var uLocal_7498 = 500;
	var uLocal_7499 = 10000;
	var uLocal_7500 = 0;
	var uLocal_7501 = 3;
	var uLocal_7502 = 500;
	var uLocal_7503 = 10000;
	var uLocal_7504 = 0;
	var uLocal_7505 = 0;
	var uLocal_7506 = 0;
	var uLocal_7507 = 0;
	var uLocal_7508 = 0;
	var uLocal_7509 = 0;
	var uLocal_7510 = 0;
	var uLocal_7511 = 3;
	var uLocal_7512 = 0;
	var uLocal_7513 = 0;
	var uLocal_7514 = 0;
	var uLocal_7515 = 0;
	var uLocal_7516 = -1;
	var uLocal_7517 = 0;
	var uLocal_7518 = 5;
	var uLocal_7519 = 0;
	var uLocal_7520 = 0;
	var uLocal_7521 = 0;
	var uLocal_7522 = 0;
	var uLocal_7523 = 0;
	var uLocal_7524 = 0;
	var uLocal_7525 = 0;
	var uLocal_7526 = 0;
	var uLocal_7527 = 0;
	var uLocal_7528 = 0;
	var uLocal_7529 = 10;
	var uLocal_7530 = 3;
	var uLocal_7531 = 500;
	var uLocal_7532 = 10000;
	var uLocal_7533 = 0;
	var uLocal_7534 = 3;
	var uLocal_7535 = 500;
	var uLocal_7536 = 10000;
	var uLocal_7537 = 0;
	var uLocal_7538 = 3;
	var uLocal_7539 = 500;
	var uLocal_7540 = 10000;
	var uLocal_7541 = 0;
	var uLocal_7542 = 3;
	var uLocal_7543 = 500;
	var uLocal_7544 = 10000;
	var uLocal_7545 = 0;
	var uLocal_7546 = 3;
	var uLocal_7547 = 500;
	var uLocal_7548 = 10000;
	var uLocal_7549 = 0;
	var uLocal_7550 = 3;
	var uLocal_7551 = 500;
	var uLocal_7552 = 10000;
	var uLocal_7553 = 0;
	var uLocal_7554 = 3;
	var uLocal_7555 = 500;
	var uLocal_7556 = 10000;
	var uLocal_7557 = 0;
	var uLocal_7558 = 3;
	var uLocal_7559 = 500;
	var uLocal_7560 = 10000;
	var uLocal_7561 = 0;
	var uLocal_7562 = 3;
	var uLocal_7563 = 500;
	var uLocal_7564 = 10000;
	var uLocal_7565 = 0;
	var uLocal_7566 = 3;
	var uLocal_7567 = 500;
	var uLocal_7568 = 10000;
	var uLocal_7569 = 0;
	var uLocal_7570 = 0;
	var uLocal_7571 = 0;
	var uLocal_7572 = 0;
	var uLocal_7573 = 0;
	var uLocal_7574 = 0;
	var uLocal_7575 = 0;
	var uLocal_7576 = 3;
	var uLocal_7577 = 0;
	var uLocal_7578 = 0;
	var uLocal_7579 = 0;
	var uLocal_7580 = 0;
	var uLocal_7581 = -1;
	var uLocal_7582 = 0;
	var uLocal_7583 = 5;
	var uLocal_7584 = 0;
	var uLocal_7585 = 0;
	var uLocal_7586 = 0;
	var uLocal_7587 = 0;
	var uLocal_7588 = 0;
	var uLocal_7589 = 0;
	var uLocal_7590 = 0;
	var uLocal_7591 = 0;
	var uLocal_7592 = 0;
	var uLocal_7593 = 0;
	var uLocal_7594 = 10;
	var uLocal_7595 = 3;
	var uLocal_7596 = 500;
	var uLocal_7597 = 10000;
	var uLocal_7598 = 0;
	var uLocal_7599 = 3;
	var uLocal_7600 = 500;
	var uLocal_7601 = 10000;
	var uLocal_7602 = 0;
	var uLocal_7603 = 3;
	var uLocal_7604 = 500;
	var uLocal_7605 = 10000;
	var uLocal_7606 = 0;
	var uLocal_7607 = 3;
	var uLocal_7608 = 500;
	var uLocal_7609 = 10000;
	var uLocal_7610 = 0;
	var uLocal_7611 = 3;
	var uLocal_7612 = 500;
	var uLocal_7613 = 10000;
	var uLocal_7614 = 0;
	var uLocal_7615 = 3;
	var uLocal_7616 = 500;
	var uLocal_7617 = 10000;
	var uLocal_7618 = 0;
	var uLocal_7619 = 3;
	var uLocal_7620 = 500;
	var uLocal_7621 = 10000;
	var uLocal_7622 = 0;
	var uLocal_7623 = 3;
	var uLocal_7624 = 500;
	var uLocal_7625 = 10000;
	var uLocal_7626 = 0;
	var uLocal_7627 = 3;
	var uLocal_7628 = 500;
	var uLocal_7629 = 10000;
	var uLocal_7630 = 0;
	var uLocal_7631 = 3;
	var uLocal_7632 = 500;
	var uLocal_7633 = 10000;
	var uLocal_7634 = 0;
	var uLocal_7635 = 0;
	var uLocal_7636 = 0;
	var uLocal_7637 = 0;
	var uLocal_7638 = 0;
	var uLocal_7639 = 0;
	var uLocal_7640 = 0;
	var uLocal_7641 = 3;
	var uLocal_7642 = 0;
	var uLocal_7643 = 0;
	var uLocal_7644 = 0;
	var uLocal_7645 = 0;
	var uLocal_7646 = -1;
	var uLocal_7647 = 0;
	var uLocal_7648 = 5;
	var uLocal_7649 = 0;
	var uLocal_7650 = 0;
	var uLocal_7651 = 0;
	var uLocal_7652 = 0;
	var uLocal_7653 = 0;
	var uLocal_7654 = 0;
	var uLocal_7655 = 0;
	var uLocal_7656 = 0;
	var uLocal_7657 = 0;
	var uLocal_7658 = 0;
	var uLocal_7659 = 10;
	var uLocal_7660 = 3;
	var uLocal_7661 = 500;
	var uLocal_7662 = 10000;
	var uLocal_7663 = 0;
	var uLocal_7664 = 3;
	var uLocal_7665 = 500;
	var uLocal_7666 = 10000;
	var uLocal_7667 = 0;
	var uLocal_7668 = 3;
	var uLocal_7669 = 500;
	var uLocal_7670 = 10000;
	var uLocal_7671 = 0;
	var uLocal_7672 = 3;
	var uLocal_7673 = 500;
	var uLocal_7674 = 10000;
	var uLocal_7675 = 0;
	var uLocal_7676 = 3;
	var uLocal_7677 = 500;
	var uLocal_7678 = 10000;
	var uLocal_7679 = 0;
	var uLocal_7680 = 3;
	var uLocal_7681 = 500;
	var uLocal_7682 = 10000;
	var uLocal_7683 = 0;
	var uLocal_7684 = 3;
	var uLocal_7685 = 500;
	var uLocal_7686 = 10000;
	var uLocal_7687 = 0;
	var uLocal_7688 = 3;
	var uLocal_7689 = 500;
	var uLocal_7690 = 10000;
	var uLocal_7691 = 0;
	var uLocal_7692 = 3;
	var uLocal_7693 = 500;
	var uLocal_7694 = 10000;
	var uLocal_7695 = 0;
	var uLocal_7696 = 3;
	var uLocal_7697 = 500;
	var uLocal_7698 = 10000;
	var uLocal_7699 = 0;
	var uLocal_7700 = 0;
	var uLocal_7701 = 0;
	var uLocal_7702 = 0;
	var uLocal_7703 = 0;
	var uLocal_7704 = 0;
	var uLocal_7705 = 0;
	var uLocal_7706 = 3;
	var uLocal_7707 = 0;
	var uLocal_7708 = 0;
	var uLocal_7709 = 0;
	var uLocal_7710 = 0;
	var uLocal_7711 = -1;
	var uLocal_7712 = 0;
	var uLocal_7713 = 5;
	var uLocal_7714 = 0;
	var uLocal_7715 = 0;
	var uLocal_7716 = 0;
	var uLocal_7717 = 0;
	var uLocal_7718 = 0;
	var uLocal_7719 = 0;
	var uLocal_7720 = 0;
	var uLocal_7721 = 0;
	var uLocal_7722 = 0;
	var uLocal_7723 = 0;
	var uLocal_7724 = 10;
	var uLocal_7725 = 3;
	var uLocal_7726 = 500;
	var uLocal_7727 = 10000;
	var uLocal_7728 = 0;
	var uLocal_7729 = 3;
	var uLocal_7730 = 500;
	var uLocal_7731 = 10000;
	var uLocal_7732 = 0;
	var uLocal_7733 = 3;
	var uLocal_7734 = 500;
	var uLocal_7735 = 10000;
	var uLocal_7736 = 0;
	var uLocal_7737 = 3;
	var uLocal_7738 = 500;
	var uLocal_7739 = 10000;
	var uLocal_7740 = 0;
	var uLocal_7741 = 3;
	var uLocal_7742 = 500;
	var uLocal_7743 = 10000;
	var uLocal_7744 = 0;
	var uLocal_7745 = 3;
	var uLocal_7746 = 500;
	var uLocal_7747 = 10000;
	var uLocal_7748 = 0;
	var uLocal_7749 = 3;
	var uLocal_7750 = 500;
	var uLocal_7751 = 10000;
	var uLocal_7752 = 0;
	var uLocal_7753 = 3;
	var uLocal_7754 = 500;
	var uLocal_7755 = 10000;
	var uLocal_7756 = 0;
	var uLocal_7757 = 3;
	var uLocal_7758 = 500;
	var uLocal_7759 = 10000;
	var uLocal_7760 = 0;
	var uLocal_7761 = 3;
	var uLocal_7762 = 500;
	var uLocal_7763 = 10000;
	var uLocal_7764 = 0;
	var uLocal_7765 = 0;
	var uLocal_7766 = 0;
	var uLocal_7767 = 0;
	var uLocal_7768 = 0;
	var uLocal_7769 = 0;
	var uLocal_7770 = 0;
	var uLocal_7771 = 3;
	var uLocal_7772 = 0;
	var uLocal_7773 = 0;
	var uLocal_7774 = 0;
	var uLocal_7775 = 0;
	var uLocal_7776 = -1;
	var uLocal_7777 = 0;
	var uLocal_7778 = 5;
	var uLocal_7779 = 0;
	var uLocal_7780 = 0;
	var uLocal_7781 = 0;
	var uLocal_7782 = 0;
	var uLocal_7783 = 0;
	var uLocal_7784 = 0;
	var uLocal_7785 = 0;
	var uLocal_7786 = 0;
	var uLocal_7787 = 0;
	var uLocal_7788 = 0;
	var uLocal_7789 = 10;
	var uLocal_7790 = 3;
	var uLocal_7791 = 500;
	var uLocal_7792 = 10000;
	var uLocal_7793 = 0;
	var uLocal_7794 = 3;
	var uLocal_7795 = 500;
	var uLocal_7796 = 10000;
	var uLocal_7797 = 0;
	var uLocal_7798 = 3;
	var uLocal_7799 = 500;
	var uLocal_7800 = 10000;
	var uLocal_7801 = 0;
	var uLocal_7802 = 3;
	var uLocal_7803 = 500;
	var uLocal_7804 = 10000;
	var uLocal_7805 = 0;
	var uLocal_7806 = 3;
	var uLocal_7807 = 500;
	var uLocal_7808 = 10000;
	var uLocal_7809 = 0;
	var uLocal_7810 = 3;
	var uLocal_7811 = 500;
	var uLocal_7812 = 10000;
	var uLocal_7813 = 0;
	var uLocal_7814 = 3;
	var uLocal_7815 = 500;
	var uLocal_7816 = 10000;
	var uLocal_7817 = 0;
	var uLocal_7818 = 3;
	var uLocal_7819 = 500;
	var uLocal_7820 = 10000;
	var uLocal_7821 = 0;
	var uLocal_7822 = 3;
	var uLocal_7823 = 500;
	var uLocal_7824 = 10000;
	var uLocal_7825 = 0;
	var uLocal_7826 = 3;
	var uLocal_7827 = 500;
	var uLocal_7828 = 10000;
	var uLocal_7829 = 0;
	var uLocal_7830 = 0;
	var uLocal_7831 = 0;
	var uLocal_7832 = 0;
	var uLocal_7833 = 0;
	var uLocal_7834 = 0;
	var uLocal_7835 = 0;
	var uLocal_7836 = 3;
	var uLocal_7837 = 0;
	var uLocal_7838 = 0;
	var uLocal_7839 = 0;
	var uLocal_7840 = 0;
	var uLocal_7841 = -1;
	var uLocal_7842 = 0;
	var uLocal_7843 = 5;
	var uLocal_7844 = 0;
	var uLocal_7845 = 0;
	var uLocal_7846 = 0;
	var uLocal_7847 = 0;
	var uLocal_7848 = 0;
	var uLocal_7849 = 0;
	var uLocal_7850 = 0;
	var uLocal_7851 = 0;
	var uLocal_7852 = 0;
	var uLocal_7853 = 0;
	var uLocal_7854 = 10;
	var uLocal_7855 = 3;
	var uLocal_7856 = 500;
	var uLocal_7857 = 10000;
	var uLocal_7858 = 0;
	var uLocal_7859 = 3;
	var uLocal_7860 = 500;
	var uLocal_7861 = 10000;
	var uLocal_7862 = 0;
	var uLocal_7863 = 3;
	var uLocal_7864 = 500;
	var uLocal_7865 = 10000;
	var uLocal_7866 = 0;
	var uLocal_7867 = 3;
	var uLocal_7868 = 500;
	var uLocal_7869 = 10000;
	var uLocal_7870 = 0;
	var uLocal_7871 = 3;
	var uLocal_7872 = 500;
	var uLocal_7873 = 10000;
	var uLocal_7874 = 0;
	var uLocal_7875 = 3;
	var uLocal_7876 = 500;
	var uLocal_7877 = 10000;
	var uLocal_7878 = 0;
	var uLocal_7879 = 3;
	var uLocal_7880 = 500;
	var uLocal_7881 = 10000;
	var uLocal_7882 = 0;
	var uLocal_7883 = 3;
	var uLocal_7884 = 500;
	var uLocal_7885 = 10000;
	var uLocal_7886 = 0;
	var uLocal_7887 = 3;
	var uLocal_7888 = 500;
	var uLocal_7889 = 10000;
	var uLocal_7890 = 0;
	var uLocal_7891 = 3;
	var uLocal_7892 = 500;
	var uLocal_7893 = 10000;
	var uLocal_7894 = 0;
	var uLocal_7895 = 0;
	var uLocal_7896 = 0;
	var uLocal_7897 = 0;
	var uLocal_7898 = 0;
	var uLocal_7899 = 0;
	var uLocal_7900 = 0;
	var uLocal_7901 = 3;
	var uLocal_7902 = 0;
	var uLocal_7903 = 0;
	var uLocal_7904 = 0;
	var uLocal_7905 = 0;
	var uLocal_7906 = -1;
	var uLocal_7907 = 0;
	var uLocal_7908 = 5;
	var uLocal_7909 = 0;
	var uLocal_7910 = 0;
	var uLocal_7911 = 0;
	var uLocal_7912 = 0;
	var uLocal_7913 = 0;
	var uLocal_7914 = 0;
	var uLocal_7915 = 0;
	var uLocal_7916 = 0;
	var uLocal_7917 = 0;
	var uLocal_7918 = 0;
	var uLocal_7919 = 10;
	var uLocal_7920 = 3;
	var uLocal_7921 = 500;
	var uLocal_7922 = 10000;
	var uLocal_7923 = 0;
	var uLocal_7924 = 3;
	var uLocal_7925 = 500;
	var uLocal_7926 = 10000;
	var uLocal_7927 = 0;
	var uLocal_7928 = 3;
	var uLocal_7929 = 500;
	var uLocal_7930 = 10000;
	var uLocal_7931 = 0;
	var uLocal_7932 = 3;
	var uLocal_7933 = 500;
	var uLocal_7934 = 10000;
	var uLocal_7935 = 0;
	var uLocal_7936 = 3;
	var uLocal_7937 = 500;
	var uLocal_7938 = 10000;
	var uLocal_7939 = 0;
	var uLocal_7940 = 3;
	var uLocal_7941 = 500;
	var uLocal_7942 = 10000;
	var uLocal_7943 = 0;
	var uLocal_7944 = 3;
	var uLocal_7945 = 500;
	var uLocal_7946 = 10000;
	var uLocal_7947 = 0;
	var uLocal_7948 = 3;
	var uLocal_7949 = 500;
	var uLocal_7950 = 10000;
	var uLocal_7951 = 0;
	var uLocal_7952 = 3;
	var uLocal_7953 = 500;
	var uLocal_7954 = 10000;
	var uLocal_7955 = 0;
	var uLocal_7956 = 3;
	var uLocal_7957 = 500;
	var uLocal_7958 = 10000;
	var uLocal_7959 = 0;
	var uLocal_7960 = 0;
	var uLocal_7961 = 0;
	var uLocal_7962 = 0;
	var uLocal_7963 = 0;
	var uLocal_7964 = 0;
	var uLocal_7965 = 0;
	var uLocal_7966 = 3;
	var uLocal_7967 = 0;
	var uLocal_7968 = 0;
	var uLocal_7969 = 0;
	var uLocal_7970 = 0;
	var uLocal_7971 = -1;
	var uLocal_7972 = 0;
	var uLocal_7973 = 5;
	var uLocal_7974 = 0;
	var uLocal_7975 = 0;
	var uLocal_7976 = 0;
	var uLocal_7977 = 0;
	var uLocal_7978 = 0;
	var uLocal_7979 = 0;
	var uLocal_7980 = 0;
	var uLocal_7981 = 0;
	var uLocal_7982 = 0;
	var uLocal_7983 = 0;
	var uLocal_7984 = 10;
	var uLocal_7985 = 3;
	var uLocal_7986 = 500;
	var uLocal_7987 = 10000;
	var uLocal_7988 = 0;
	var uLocal_7989 = 3;
	var uLocal_7990 = 500;
	var uLocal_7991 = 10000;
	var uLocal_7992 = 0;
	var uLocal_7993 = 3;
	var uLocal_7994 = 500;
	var uLocal_7995 = 10000;
	var uLocal_7996 = 0;
	var uLocal_7997 = 3;
	var uLocal_7998 = 500;
	var uLocal_7999 = 10000;
	var uLocal_8000 = 0;
	var uLocal_8001 = 3;
	var uLocal_8002 = 500;
	var uLocal_8003 = 10000;
	var uLocal_8004 = 0;
	var uLocal_8005 = 3;
	var uLocal_8006 = 500;
	var uLocal_8007 = 10000;
	var uLocal_8008 = 0;
	var uLocal_8009 = 3;
	var uLocal_8010 = 500;
	var uLocal_8011 = 10000;
	var uLocal_8012 = 0;
	var uLocal_8013 = 3;
	var uLocal_8014 = 500;
	var uLocal_8015 = 10000;
	var uLocal_8016 = 0;
	var uLocal_8017 = 3;
	var uLocal_8018 = 500;
	var uLocal_8019 = 10000;
	var uLocal_8020 = 0;
	var uLocal_8021 = 3;
	var uLocal_8022 = 500;
	var uLocal_8023 = 10000;
	var uLocal_8024 = 0;
	var uLocal_8025 = 0;
	var uLocal_8026 = 0;
	var uLocal_8027 = 0;
	var uLocal_8028 = 0;
	var uLocal_8029 = 0;
	var uLocal_8030 = 0;
	var uLocal_8031 = 3;
	var uLocal_8032 = 0;
	var uLocal_8033 = 0;
	var uLocal_8034 = 0;
	var uLocal_8035 = 0;
	var uLocal_8036 = -1;
	var uLocal_8037 = 0;
	var uLocal_8038 = 5;
	var uLocal_8039 = 0;
	var uLocal_8040 = 0;
	var uLocal_8041 = 0;
	var uLocal_8042 = 0;
	var uLocal_8043 = 0;
	var uLocal_8044 = 0;
	var uLocal_8045 = 0;
	var uLocal_8046 = 0;
	var uLocal_8047 = 0;
	var uLocal_8048 = 0;
	var uLocal_8049 = 10;
	var uLocal_8050 = 3;
	var uLocal_8051 = 500;
	var uLocal_8052 = 10000;
	var uLocal_8053 = 0;
	var uLocal_8054 = 3;
	var uLocal_8055 = 500;
	var uLocal_8056 = 10000;
	var uLocal_8057 = 0;
	var uLocal_8058 = 3;
	var uLocal_8059 = 500;
	var uLocal_8060 = 10000;
	var uLocal_8061 = 0;
	var uLocal_8062 = 3;
	var uLocal_8063 = 500;
	var uLocal_8064 = 10000;
	var uLocal_8065 = 0;
	var uLocal_8066 = 3;
	var uLocal_8067 = 500;
	var uLocal_8068 = 10000;
	var uLocal_8069 = 0;
	var uLocal_8070 = 3;
	var uLocal_8071 = 500;
	var uLocal_8072 = 10000;
	var uLocal_8073 = 0;
	var uLocal_8074 = 3;
	var uLocal_8075 = 500;
	var uLocal_8076 = 10000;
	var uLocal_8077 = 0;
	var uLocal_8078 = 3;
	var uLocal_8079 = 500;
	var uLocal_8080 = 10000;
	var uLocal_8081 = 0;
	var uLocal_8082 = 3;
	var uLocal_8083 = 500;
	var uLocal_8084 = 10000;
	var uLocal_8085 = 0;
	var uLocal_8086 = 3;
	var uLocal_8087 = 500;
	var uLocal_8088 = 10000;
	var uLocal_8089 = 0;
	var uLocal_8090 = 0;
	var uLocal_8091 = 0;
	var uLocal_8092 = 0;
	var uLocal_8093 = 0;
	var uLocal_8094 = 0;
	var uLocal_8095 = 0;
	var uLocal_8096 = 3;
	var uLocal_8097 = 0;
	var uLocal_8098 = 0;
	var uLocal_8099 = 0;
	var uLocal_8100 = 0;
	var uLocal_8101 = -1;
	var uLocal_8102 = 0;
	var uLocal_8103 = 5;
	var uLocal_8104 = 0;
	var uLocal_8105 = 0;
	var uLocal_8106 = 0;
	var uLocal_8107 = 0;
	var uLocal_8108 = 0;
	var uLocal_8109 = 0;
	var uLocal_8110 = 0;
	var uLocal_8111 = 0;
	var uLocal_8112 = 0;
	var uLocal_8113 = 0;
	var uLocal_8114 = 10;
	var uLocal_8115 = 3;
	var uLocal_8116 = 500;
	var uLocal_8117 = 10000;
	var uLocal_8118 = 0;
	var uLocal_8119 = 3;
	var uLocal_8120 = 500;
	var uLocal_8121 = 10000;
	var uLocal_8122 = 0;
	var uLocal_8123 = 3;
	var uLocal_8124 = 500;
	var uLocal_8125 = 10000;
	var uLocal_8126 = 0;
	var uLocal_8127 = 3;
	var uLocal_8128 = 500;
	var uLocal_8129 = 10000;
	var uLocal_8130 = 0;
	var uLocal_8131 = 3;
	var uLocal_8132 = 500;
	var uLocal_8133 = 10000;
	var uLocal_8134 = 0;
	var uLocal_8135 = 3;
	var uLocal_8136 = 500;
	var uLocal_8137 = 10000;
	var uLocal_8138 = 0;
	var uLocal_8139 = 3;
	var uLocal_8140 = 500;
	var uLocal_8141 = 10000;
	var uLocal_8142 = 0;
	var uLocal_8143 = 3;
	var uLocal_8144 = 500;
	var uLocal_8145 = 10000;
	var uLocal_8146 = 0;
	var uLocal_8147 = 3;
	var uLocal_8148 = 500;
	var uLocal_8149 = 10000;
	var uLocal_8150 = 0;
	var uLocal_8151 = 3;
	var uLocal_8152 = 500;
	var uLocal_8153 = 10000;
	var uLocal_8154 = 0;
	var uLocal_8155 = 0;
	var uLocal_8156 = 0;
	var uLocal_8157 = 0;
	var uLocal_8158 = 0;
	var uLocal_8159 = 0;
	var uLocal_8160 = 0;
	var uLocal_8161 = 3;
	var uLocal_8162 = 0;
	var uLocal_8163 = 0;
	var uLocal_8164 = 0;
	var uLocal_8165 = 0;
	var uLocal_8166 = -1;
	var uLocal_8167 = 0;
	var uLocal_8168 = 5;
	var uLocal_8169 = 0;
	var uLocal_8170 = 0;
	var uLocal_8171 = 0;
	var uLocal_8172 = 0;
	var uLocal_8173 = 0;
	var uLocal_8174 = 0;
	var uLocal_8175 = 0;
	var uLocal_8176 = 0;
	var uLocal_8177 = 0;
	var uLocal_8178 = 0;
	var uLocal_8179 = 10;
	var uLocal_8180 = 3;
	var uLocal_8181 = 500;
	var uLocal_8182 = 10000;
	var uLocal_8183 = 0;
	var uLocal_8184 = 3;
	var uLocal_8185 = 500;
	var uLocal_8186 = 10000;
	var uLocal_8187 = 0;
	var uLocal_8188 = 3;
	var uLocal_8189 = 500;
	var uLocal_8190 = 10000;
	var uLocal_8191 = 0;
	var uLocal_8192 = 3;
	var uLocal_8193 = 500;
	var uLocal_8194 = 10000;
	var uLocal_8195 = 0;
	var uLocal_8196 = 3;
	var uLocal_8197 = 500;
	var uLocal_8198 = 10000;
	var uLocal_8199 = 0;
	var uLocal_8200 = 3;
	var uLocal_8201 = 500;
	var uLocal_8202 = 10000;
	var uLocal_8203 = 0;
	var uLocal_8204 = 3;
	var uLocal_8205 = 500;
	var uLocal_8206 = 10000;
	var uLocal_8207 = 0;
	var uLocal_8208 = 3;
	var uLocal_8209 = 500;
	var uLocal_8210 = 10000;
	var uLocal_8211 = 0;
	var uLocal_8212 = 3;
	var uLocal_8213 = 500;
	var uLocal_8214 = 10000;
	var uLocal_8215 = 0;
	var uLocal_8216 = 3;
	var uLocal_8217 = 500;
	var uLocal_8218 = 10000;
	var uLocal_8219 = 0;
	var uLocal_8220 = 0;
	var uLocal_8221 = 0;
	var uLocal_8222 = 0;
	var uLocal_8223 = 0;
	var uLocal_8224 = 0;
	var uLocal_8225 = 0;
	var uLocal_8226 = 3;
	var uLocal_8227 = 0;
	var uLocal_8228 = 0;
	var uLocal_8229 = 0;
	var uLocal_8230 = 0;
	var uLocal_8231 = -1;
	var uLocal_8232 = 0;
	var uLocal_8233 = 5;
	var uLocal_8234 = 0;
	var uLocal_8235 = 0;
	var uLocal_8236 = 0;
	var uLocal_8237 = 0;
	var uLocal_8238 = 0;
	var uLocal_8239 = 0;
	var uLocal_8240 = 0;
	var uLocal_8241 = 0;
	var uLocal_8242 = 0;
	var uLocal_8243 = 0;
	var uLocal_8244 = 10;
	var uLocal_8245 = 3;
	var uLocal_8246 = 500;
	var uLocal_8247 = 10000;
	var uLocal_8248 = 0;
	var uLocal_8249 = 3;
	var uLocal_8250 = 500;
	var uLocal_8251 = 10000;
	var uLocal_8252 = 0;
	var uLocal_8253 = 3;
	var uLocal_8254 = 500;
	var uLocal_8255 = 10000;
	var uLocal_8256 = 0;
	var uLocal_8257 = 3;
	var uLocal_8258 = 500;
	var uLocal_8259 = 10000;
	var uLocal_8260 = 0;
	var uLocal_8261 = 3;
	var uLocal_8262 = 500;
	var uLocal_8263 = 10000;
	var uLocal_8264 = 0;
	var uLocal_8265 = 3;
	var uLocal_8266 = 500;
	var uLocal_8267 = 10000;
	var uLocal_8268 = 0;
	var uLocal_8269 = 3;
	var uLocal_8270 = 500;
	var uLocal_8271 = 10000;
	var uLocal_8272 = 0;
	var uLocal_8273 = 3;
	var uLocal_8274 = 500;
	var uLocal_8275 = 10000;
	var uLocal_8276 = 0;
	var uLocal_8277 = 3;
	var uLocal_8278 = 500;
	var uLocal_8279 = 10000;
	var uLocal_8280 = 0;
	var uLocal_8281 = 3;
	var uLocal_8282 = 500;
	var uLocal_8283 = 10000;
	var uLocal_8284 = 0;
	var uLocal_8285 = 0;
	var uLocal_8286 = 0;
	var uLocal_8287 = 0;
	var uLocal_8288 = 0;
	var uLocal_8289 = 0;
	var uLocal_8290 = 0;
	var uLocal_8291 = 3;
	var uLocal_8292 = 0;
	var uLocal_8293 = 0;
	var uLocal_8294 = 0;
	var uLocal_8295 = 0;
	var uLocal_8296 = -1;
	var uLocal_8297 = 0;
	var uLocal_8298 = 5;
	var uLocal_8299 = 0;
	var uLocal_8300 = 0;
	var uLocal_8301 = 0;
	var uLocal_8302 = 0;
	var uLocal_8303 = 0;
	var uLocal_8304 = 0;
	var uLocal_8305 = 0;
	var uLocal_8306 = 0;
	var uLocal_8307 = 0;
	var uLocal_8308 = 0;
	var uLocal_8309 = 10;
	var uLocal_8310 = 3;
	var uLocal_8311 = 500;
	var uLocal_8312 = 10000;
	var uLocal_8313 = 0;
	var uLocal_8314 = 3;
	var uLocal_8315 = 500;
	var uLocal_8316 = 10000;
	var uLocal_8317 = 0;
	var uLocal_8318 = 3;
	var uLocal_8319 = 500;
	var uLocal_8320 = 10000;
	var uLocal_8321 = 0;
	var uLocal_8322 = 3;
	var uLocal_8323 = 500;
	var uLocal_8324 = 10000;
	var uLocal_8325 = 0;
	var uLocal_8326 = 3;
	var uLocal_8327 = 500;
	var uLocal_8328 = 10000;
	var uLocal_8329 = 0;
	var uLocal_8330 = 3;
	var uLocal_8331 = 500;
	var uLocal_8332 = 10000;
	var uLocal_8333 = 0;
	var uLocal_8334 = 3;
	var uLocal_8335 = 500;
	var uLocal_8336 = 10000;
	var uLocal_8337 = 0;
	var uLocal_8338 = 3;
	var uLocal_8339 = 500;
	var uLocal_8340 = 10000;
	var uLocal_8341 = 0;
	var uLocal_8342 = 3;
	var uLocal_8343 = 500;
	var uLocal_8344 = 10000;
	var uLocal_8345 = 0;
	var uLocal_8346 = 3;
	var uLocal_8347 = 500;
	var uLocal_8348 = 10000;
	var uLocal_8349 = 0;
	var uLocal_8350 = 0;
	var uLocal_8351 = 0;
	var uLocal_8352 = 0;
	var uLocal_8353 = 0;
	var uLocal_8354 = 0;
	var uLocal_8355 = 0;
	var uLocal_8356 = 3;
	var uLocal_8357 = 0;
	var uLocal_8358 = 0;
	var uLocal_8359 = 0;
	var uLocal_8360 = 0;
	var uLocal_8361 = -1;
	var uLocal_8362 = 0;
	var uLocal_8363 = 5;
	var uLocal_8364 = 0;
	var uLocal_8365 = 0;
	var uLocal_8366 = 0;
	var uLocal_8367 = 0;
	var uLocal_8368 = 0;
	var uLocal_8369 = 0;
	var uLocal_8370 = 0;
	var uLocal_8371 = 0;
	var uLocal_8372 = 0;
	var uLocal_8373 = 0;
	var uLocal_8374 = 10;
	var uLocal_8375 = 3;
	var uLocal_8376 = 500;
	var uLocal_8377 = 10000;
	var uLocal_8378 = 0;
	var uLocal_8379 = 3;
	var uLocal_8380 = 500;
	var uLocal_8381 = 10000;
	var uLocal_8382 = 0;
	var uLocal_8383 = 3;
	var uLocal_8384 = 500;
	var uLocal_8385 = 10000;
	var uLocal_8386 = 0;
	var uLocal_8387 = 3;
	var uLocal_8388 = 500;
	var uLocal_8389 = 10000;
	var uLocal_8390 = 0;
	var uLocal_8391 = 3;
	var uLocal_8392 = 500;
	var uLocal_8393 = 10000;
	var uLocal_8394 = 0;
	var uLocal_8395 = 3;
	var uLocal_8396 = 500;
	var uLocal_8397 = 10000;
	var uLocal_8398 = 0;
	var uLocal_8399 = 3;
	var uLocal_8400 = 500;
	var uLocal_8401 = 10000;
	var uLocal_8402 = 0;
	var uLocal_8403 = 3;
	var uLocal_8404 = 500;
	var uLocal_8405 = 10000;
	var uLocal_8406 = 0;
	var uLocal_8407 = 3;
	var uLocal_8408 = 500;
	var uLocal_8409 = 10000;
	var uLocal_8410 = 0;
	var uLocal_8411 = 3;
	var uLocal_8412 = 500;
	var uLocal_8413 = 10000;
	var uLocal_8414 = 0;
	var uLocal_8415 = 0;
	var uLocal_8416 = 0;
	var uLocal_8417 = 0;
	var uLocal_8418 = 0;
	var uLocal_8419 = 0;
	var uLocal_8420 = 0;
	var uLocal_8421 = 3;
	var uLocal_8422 = 0;
	var uLocal_8423 = 0;
	var uLocal_8424 = 0;
	var uLocal_8425 = 0;
	var uLocal_8426 = -1;
	var uLocal_8427 = 0;
	var uLocal_8428 = 5;
	var uLocal_8429 = 0;
	var uLocal_8430 = 0;
	var uLocal_8431 = 0;
	var uLocal_8432 = 0;
	var uLocal_8433 = 0;
	var uLocal_8434 = 0;
	var uLocal_8435 = 0;
	var uLocal_8436 = 0;
	var uLocal_8437 = 0;
	var uLocal_8438 = 0;
	var uLocal_8439 = 10;
	var uLocal_8440 = 3;
	var uLocal_8441 = 500;
	var uLocal_8442 = 10000;
	var uLocal_8443 = 0;
	var uLocal_8444 = 3;
	var uLocal_8445 = 500;
	var uLocal_8446 = 10000;
	var uLocal_8447 = 0;
	var uLocal_8448 = 3;
	var uLocal_8449 = 500;
	var uLocal_8450 = 10000;
	var uLocal_8451 = 0;
	var uLocal_8452 = 3;
	var uLocal_8453 = 500;
	var uLocal_8454 = 10000;
	var uLocal_8455 = 0;
	var uLocal_8456 = 3;
	var uLocal_8457 = 500;
	var uLocal_8458 = 10000;
	var uLocal_8459 = 0;
	var uLocal_8460 = 3;
	var uLocal_8461 = 500;
	var uLocal_8462 = 10000;
	var uLocal_8463 = 0;
	var uLocal_8464 = 3;
	var uLocal_8465 = 500;
	var uLocal_8466 = 10000;
	var uLocal_8467 = 0;
	var uLocal_8468 = 3;
	var uLocal_8469 = 500;
	var uLocal_8470 = 10000;
	var uLocal_8471 = 0;
	var uLocal_8472 = 3;
	var uLocal_8473 = 500;
	var uLocal_8474 = 10000;
	var uLocal_8475 = 0;
	var uLocal_8476 = 3;
	var uLocal_8477 = 500;
	var uLocal_8478 = 10000;
	var uLocal_8479 = 0;
	var uLocal_8480 = 0;
	var uLocal_8481 = 0;
	var uLocal_8482 = 0;
	var uLocal_8483 = 0;
	var uLocal_8484 = 0;
	var uLocal_8485 = 0;
	var uLocal_8486 = 3;
	var uLocal_8487 = 0;
	var uLocal_8488 = 0;
	var uLocal_8489 = 0;
	var uLocal_8490 = 0;
	var uLocal_8491 = -1;
	var uLocal_8492 = 0;
	var uLocal_8493 = 5;
	var uLocal_8494 = 0;
	var uLocal_8495 = 0;
	var uLocal_8496 = 0;
	var uLocal_8497 = 0;
	var uLocal_8498 = 0;
	var uLocal_8499 = 0;
	var uLocal_8500 = 0;
	var uLocal_8501 = 0;
	var uLocal_8502 = 0;
	var uLocal_8503 = 0;
	var uLocal_8504 = 10;
	var uLocal_8505 = 3;
	var uLocal_8506 = 500;
	var uLocal_8507 = 10000;
	var uLocal_8508 = 0;
	var uLocal_8509 = 3;
	var uLocal_8510 = 500;
	var uLocal_8511 = 10000;
	var uLocal_8512 = 0;
	var uLocal_8513 = 3;
	var uLocal_8514 = 500;
	var uLocal_8515 = 10000;
	var uLocal_8516 = 0;
	var uLocal_8517 = 3;
	var uLocal_8518 = 500;
	var uLocal_8519 = 10000;
	var uLocal_8520 = 0;
	var uLocal_8521 = 3;
	var uLocal_8522 = 500;
	var uLocal_8523 = 10000;
	var uLocal_8524 = 0;
	var uLocal_8525 = 3;
	var uLocal_8526 = 500;
	var uLocal_8527 = 10000;
	var uLocal_8528 = 0;
	var uLocal_8529 = 3;
	var uLocal_8530 = 500;
	var uLocal_8531 = 10000;
	var uLocal_8532 = 0;
	var uLocal_8533 = 3;
	var uLocal_8534 = 500;
	var uLocal_8535 = 10000;
	var uLocal_8536 = 0;
	var uLocal_8537 = 3;
	var uLocal_8538 = 500;
	var uLocal_8539 = 10000;
	var uLocal_8540 = 0;
	var uLocal_8541 = 3;
	var uLocal_8542 = 500;
	var uLocal_8543 = 10000;
	var uLocal_8544 = 0;
	var uLocal_8545 = 0;
	var uLocal_8546 = 0;
	var uLocal_8547 = 0;
	var uLocal_8548 = 0;
	var uLocal_8549 = 0;
	var uLocal_8550 = 0;
	var uLocal_8551 = 3;
	var uLocal_8552 = 0;
	var uLocal_8553 = 0;
	var uLocal_8554 = 0;
	var uLocal_8555 = 0;
	var uLocal_8556 = -1;
	var uLocal_8557 = 0;
	var uLocal_8558 = 5;
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
	var uLocal_8569 = 10;
	var uLocal_8570 = 3;
	var uLocal_8571 = 500;
	var uLocal_8572 = 10000;
	var uLocal_8573 = 0;
	var uLocal_8574 = 3;
	var uLocal_8575 = 500;
	var uLocal_8576 = 10000;
	var uLocal_8577 = 0;
	var uLocal_8578 = 3;
	var uLocal_8579 = 500;
	var uLocal_8580 = 10000;
	var uLocal_8581 = 0;
	var uLocal_8582 = 3;
	var uLocal_8583 = 500;
	var uLocal_8584 = 10000;
	var uLocal_8585 = 0;
	var uLocal_8586 = 3;
	var uLocal_8587 = 500;
	var uLocal_8588 = 10000;
	var uLocal_8589 = 0;
	var uLocal_8590 = 3;
	var uLocal_8591 = 500;
	var uLocal_8592 = 10000;
	var uLocal_8593 = 0;
	var uLocal_8594 = 3;
	var uLocal_8595 = 500;
	var uLocal_8596 = 10000;
	var uLocal_8597 = 0;
	var uLocal_8598 = 3;
	var uLocal_8599 = 500;
	var uLocal_8600 = 10000;
	var uLocal_8601 = 0;
	var uLocal_8602 = 3;
	var uLocal_8603 = 500;
	var uLocal_8604 = 10000;
	var uLocal_8605 = 0;
	var uLocal_8606 = 3;
	var uLocal_8607 = 500;
	var uLocal_8608 = 10000;
	var uLocal_8609 = 0;
	var uLocal_8610 = 0;
	var uLocal_8611 = 0;
	var uLocal_8612 = 0;
	var uLocal_8613 = 0;
	var uLocal_8614 = 0;
	var uLocal_8615 = 0;
	var uLocal_8616 = 3;
	var uLocal_8617 = 0;
	var uLocal_8618 = 0;
	var uLocal_8619 = 0;
	var uLocal_8620 = 0;
	var uLocal_8621 = -1;
	var uLocal_8622 = 0;
	var uLocal_8623 = 5;
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
	var uLocal_8634 = 10;
	var uLocal_8635 = 3;
	var uLocal_8636 = 500;
	var uLocal_8637 = 10000;
	var uLocal_8638 = 0;
	var uLocal_8639 = 3;
	var uLocal_8640 = 500;
	var uLocal_8641 = 10000;
	var uLocal_8642 = 0;
	var uLocal_8643 = 3;
	var uLocal_8644 = 500;
	var uLocal_8645 = 10000;
	var uLocal_8646 = 0;
	var uLocal_8647 = 3;
	var uLocal_8648 = 500;
	var uLocal_8649 = 10000;
	var uLocal_8650 = 0;
	var uLocal_8651 = 3;
	var uLocal_8652 = 500;
	var uLocal_8653 = 10000;
	var uLocal_8654 = 0;
	var uLocal_8655 = 3;
	var uLocal_8656 = 500;
	var uLocal_8657 = 10000;
	var uLocal_8658 = 0;
	var uLocal_8659 = 3;
	var uLocal_8660 = 500;
	var uLocal_8661 = 10000;
	var uLocal_8662 = 0;
	var uLocal_8663 = 3;
	var uLocal_8664 = 500;
	var uLocal_8665 = 10000;
	var uLocal_8666 = 0;
	var uLocal_8667 = 3;
	var uLocal_8668 = 500;
	var uLocal_8669 = 10000;
	var uLocal_8670 = 0;
	var uLocal_8671 = 3;
	var uLocal_8672 = 500;
	var uLocal_8673 = 10000;
	var uLocal_8674 = 0;
	var uLocal_8675 = 0;
	var uLocal_8676 = 0;
	var uLocal_8677 = 0;
	var uLocal_8678 = 0;
	var uLocal_8679 = 0;
	var uLocal_8680 = 0;
	var uLocal_8681 = 3;
	var uLocal_8682 = 0;
	var uLocal_8683 = 0;
	var uLocal_8684 = 0;
	var uLocal_8685 = 0;
	var uLocal_8686 = -1;
	var uLocal_8687 = 0;
	var uLocal_8688 = 5;
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
	var uLocal_8699 = 10;
	var uLocal_8700 = 3;
	var uLocal_8701 = 500;
	var uLocal_8702 = 10000;
	var uLocal_8703 = 0;
	var uLocal_8704 = 3;
	var uLocal_8705 = 500;
	var uLocal_8706 = 10000;
	var uLocal_8707 = 0;
	var uLocal_8708 = 3;
	var uLocal_8709 = 500;
	var uLocal_8710 = 10000;
	var uLocal_8711 = 0;
	var uLocal_8712 = 3;
	var uLocal_8713 = 500;
	var uLocal_8714 = 10000;
	var uLocal_8715 = 0;
	var uLocal_8716 = 3;
	var uLocal_8717 = 500;
	var uLocal_8718 = 10000;
	var uLocal_8719 = 0;
	var uLocal_8720 = 3;
	var uLocal_8721 = 500;
	var uLocal_8722 = 10000;
	var uLocal_8723 = 0;
	var uLocal_8724 = 3;
	var uLocal_8725 = 500;
	var uLocal_8726 = 10000;
	var uLocal_8727 = 0;
	var uLocal_8728 = 3;
	var uLocal_8729 = 500;
	var uLocal_8730 = 10000;
	var uLocal_8731 = 0;
	var uLocal_8732 = 3;
	var uLocal_8733 = 500;
	var uLocal_8734 = 10000;
	var uLocal_8735 = 0;
	var uLocal_8736 = 3;
	var uLocal_8737 = 500;
	var uLocal_8738 = 10000;
	var uLocal_8739 = 0;
	var uLocal_8740 = 0;
	var uLocal_8741 = 0;
	var uLocal_8742 = 1;
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
	var uLocal_8755 = 65;
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
	var uLocal_9536 = 1097859072;
	var uLocal_9537 = 1101004800;
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
	var uLocal_9564 = 4;
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
	var uLocal_9636 = 40;
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
	var uLocal_10277 = 40;
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
	var uLocal_10918 = 60;
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
	var uLocal_11879 = 15;
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
	var uLocal_11949 = 0;
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
	var uLocal_12120 = 10;
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
	var uLocal_12150 = -1;
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
	var uLocal_12162 = 65;
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
	var uLocal_12173 = -1569615261;
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
	var uLocal_12186 = -1569615261;
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
	var uLocal_12198 = 0;
	var uLocal_12199 = -1569615261;
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
	var uLocal_12212 = -1569615261;
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
	var uLocal_12224 = 0;
	var uLocal_12225 = -1569615261;
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
	var uLocal_12237 = 0;
	var uLocal_12238 = -1569615261;
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
	var uLocal_12250 = 0;
	var uLocal_12251 = -1569615261;
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
	var uLocal_12263 = 0;
	var uLocal_12264 = -1569615261;
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
	var uLocal_12276 = 0;
	var uLocal_12277 = -1569615261;
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
	var uLocal_12289 = 0;
	var uLocal_12290 = -1569615261;
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
	var uLocal_12302 = 0;
	var uLocal_12303 = -1569615261;
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
	var uLocal_12315 = 0;
	var uLocal_12316 = -1569615261;
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
	var uLocal_12328 = 0;
	var uLocal_12329 = -1569615261;
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
	var uLocal_12341 = 0;
	var uLocal_12342 = -1569615261;
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
	var uLocal_12354 = 0;
	var uLocal_12355 = -1569615261;
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
	var uLocal_12367 = 0;
	var uLocal_12368 = -1569615261;
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
	var uLocal_12380 = 0;
	var uLocal_12381 = -1569615261;
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
	var uLocal_12393 = 0;
	var uLocal_12394 = -1569615261;
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
	var uLocal_12406 = 0;
	var uLocal_12407 = -1569615261;
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
	var uLocal_12419 = 0;
	var uLocal_12420 = -1569615261;
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
	var uLocal_12432 = 0;
	var uLocal_12433 = -1569615261;
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
	var uLocal_12445 = 0;
	var uLocal_12446 = -1569615261;
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
	var uLocal_12458 = 0;
	var uLocal_12459 = -1569615261;
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
	var uLocal_12471 = 0;
	var uLocal_12472 = -1569615261;
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
	var uLocal_12484 = 0;
	var uLocal_12485 = -1569615261;
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
	var uLocal_12497 = 0;
	var uLocal_12498 = -1569615261;
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
	var uLocal_12510 = 0;
	var uLocal_12511 = -1569615261;
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
	var uLocal_12523 = 0;
	var uLocal_12524 = -1569615261;
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
	var uLocal_12536 = 0;
	var uLocal_12537 = -1569615261;
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
	var uLocal_12549 = 0;
	var uLocal_12550 = -1569615261;
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
	var uLocal_12562 = 0;
	var uLocal_12563 = -1569615261;
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
	var uLocal_12575 = 0;
	var uLocal_12576 = -1569615261;
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
	var uLocal_12588 = 0;
	var uLocal_12589 = -1569615261;
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
	var uLocal_12601 = 0;
	var uLocal_12602 = -1569615261;
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
	var uLocal_12614 = 0;
	var uLocal_12615 = -1569615261;
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
	var uLocal_12627 = 0;
	var uLocal_12628 = -1569615261;
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
	var uLocal_12640 = 0;
	var uLocal_12641 = -1569615261;
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
	var uLocal_12653 = 0;
	var uLocal_12654 = -1569615261;
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
	var uLocal_12666 = 0;
	var uLocal_12667 = -1569615261;
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
	var uLocal_12679 = 0;
	var uLocal_12680 = -1569615261;
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
	var uLocal_12692 = 0;
	var uLocal_12693 = -1569615261;
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
	var uLocal_12705 = 0;
	var uLocal_12706 = -1569615261;
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
	var uLocal_12718 = 0;
	var uLocal_12719 = -1569615261;
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
	var uLocal_12731 = 0;
	var uLocal_12732 = -1569615261;
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
	var uLocal_12744 = 0;
	var uLocal_12745 = -1569615261;
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
	var uLocal_12757 = 0;
	var uLocal_12758 = -1569615261;
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
	var uLocal_12770 = 0;
	var uLocal_12771 = -1569615261;
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
	var uLocal_12784 = -1569615261;
	var uLocal_12785 = 0;
	var uLocal_12786 = 0;
	var uLocal_12787 = 0;
	var uLocal_12788 = 0;
	var uLocal_12789 = 0;
	var uLocal_12790 = 0;
	var uLocal_12791 = 0;
	var uLocal_12792 = 0;
	var uLocal_12793 = 0;
	var uLocal_12794 = 0;
	var uLocal_12795 = 0;
	var uLocal_12796 = 0;
	var uLocal_12797 = -1569615261;
	var uLocal_12798 = 0;
	var uLocal_12799 = 0;
	var uLocal_12800 = 0;
	var uLocal_12801 = 0;
	var uLocal_12802 = 0;
	var uLocal_12803 = 0;
	var uLocal_12804 = 0;
	var uLocal_12805 = 0;
	var uLocal_12806 = 0;
	var uLocal_12807 = 0;
	var uLocal_12808 = 0;
	var uLocal_12809 = 0;
	var uLocal_12810 = -1569615261;
	var uLocal_12811 = 0;
	var uLocal_12812 = 0;
	var uLocal_12813 = 0;
	var uLocal_12814 = 0;
	var uLocal_12815 = 0;
	var uLocal_12816 = 0;
	var uLocal_12817 = 0;
	var uLocal_12818 = 0;
	var uLocal_12819 = 0;
	var uLocal_12820 = 0;
	var uLocal_12821 = 0;
	var uLocal_12822 = 0;
	var uLocal_12823 = -1569615261;
	var uLocal_12824 = 0;
	var uLocal_12825 = 0;
	var uLocal_12826 = 0;
	var uLocal_12827 = 0;
	var uLocal_12828 = 0;
	var uLocal_12829 = 0;
	var uLocal_12830 = 0;
	var uLocal_12831 = 0;
	var uLocal_12832 = 0;
	var uLocal_12833 = 0;
	var uLocal_12834 = 0;
	var uLocal_12835 = 0;
	var uLocal_12836 = -1569615261;
	var uLocal_12837 = 0;
	var uLocal_12838 = 0;
	var uLocal_12839 = 0;
	var uLocal_12840 = 0;
	var uLocal_12841 = 0;
	var uLocal_12842 = 0;
	var uLocal_12843 = 0;
	var uLocal_12844 = 0;
	var uLocal_12845 = 0;
	var uLocal_12846 = 0;
	var uLocal_12847 = 0;
	var uLocal_12848 = 0;
	var uLocal_12849 = -1569615261;
	var uLocal_12850 = 0;
	var uLocal_12851 = 0;
	var uLocal_12852 = 0;
	var uLocal_12853 = 0;
	var uLocal_12854 = 0;
	var uLocal_12855 = 0;
	var uLocal_12856 = 0;
	var uLocal_12857 = 0;
	var uLocal_12858 = 0;
	var uLocal_12859 = 0;
	var uLocal_12860 = 0;
	var uLocal_12861 = 0;
	var uLocal_12862 = -1569615261;
	var uLocal_12863 = 0;
	var uLocal_12864 = 0;
	var uLocal_12865 = 0;
	var uLocal_12866 = 0;
	var uLocal_12867 = 0;
	var uLocal_12868 = 0;
	var uLocal_12869 = 0;
	var uLocal_12870 = 0;
	var uLocal_12871 = 0;
	var uLocal_12872 = 0;
	var uLocal_12873 = 0;
	var uLocal_12874 = 0;
	var uLocal_12875 = -1569615261;
	var uLocal_12876 = 0;
	var uLocal_12877 = 0;
	var uLocal_12878 = 0;
	var uLocal_12879 = 0;
	var uLocal_12880 = 0;
	var uLocal_12881 = 0;
	var uLocal_12882 = 0;
	var uLocal_12883 = 0;
	var uLocal_12884 = 0;
	var uLocal_12885 = 0;
	var uLocal_12886 = 0;
	var uLocal_12887 = 0;
	var uLocal_12888 = -1569615261;
	var uLocal_12889 = 0;
	var uLocal_12890 = 0;
	var uLocal_12891 = 0;
	var uLocal_12892 = 0;
	var uLocal_12893 = 0;
	var uLocal_12894 = 0;
	var uLocal_12895 = 0;
	var uLocal_12896 = 0;
	var uLocal_12897 = 0;
	var uLocal_12898 = 0;
	var uLocal_12899 = 0;
	var uLocal_12900 = 0;
	var uLocal_12901 = -1569615261;
	var uLocal_12902 = 0;
	var uLocal_12903 = 0;
	var uLocal_12904 = 0;
	var uLocal_12905 = 0;
	var uLocal_12906 = 0;
	var uLocal_12907 = 0;
	var uLocal_12908 = 0;
	var uLocal_12909 = 0;
	var uLocal_12910 = 0;
	var uLocal_12911 = 0;
	var uLocal_12912 = 0;
	var uLocal_12913 = 0;
	var uLocal_12914 = -1569615261;
	var uLocal_12915 = 0;
	var uLocal_12916 = 0;
	var uLocal_12917 = 0;
	var uLocal_12918 = 0;
	var uLocal_12919 = 0;
	var uLocal_12920 = 0;
	var uLocal_12921 = 0;
	var uLocal_12922 = 0;
	var uLocal_12923 = 0;
	var uLocal_12924 = 0;
	var uLocal_12925 = 0;
	var uLocal_12926 = 0;
	var uLocal_12927 = -1569615261;
	var uLocal_12928 = 0;
	var uLocal_12929 = 0;
	var uLocal_12930 = 0;
	var uLocal_12931 = 0;
	var uLocal_12932 = 0;
	var uLocal_12933 = 0;
	var uLocal_12934 = 0;
	var uLocal_12935 = 0;
	var uLocal_12936 = 0;
	var uLocal_12937 = 0;
	var uLocal_12938 = 0;
	var uLocal_12939 = 0;
	var uLocal_12940 = -1569615261;
	var uLocal_12941 = 0;
	var uLocal_12942 = 0;
	var uLocal_12943 = 0;
	var uLocal_12944 = 0;
	var uLocal_12945 = 0;
	var uLocal_12946 = 0;
	var uLocal_12947 = 0;
	var uLocal_12948 = 0;
	var uLocal_12949 = 0;
	var uLocal_12950 = 0;
	var uLocal_12951 = 0;
	var uLocal_12952 = 0;
	var uLocal_12953 = -1569615261;
	var uLocal_12954 = 0;
	var uLocal_12955 = 0;
	var uLocal_12956 = 0;
	var uLocal_12957 = 0;
	var uLocal_12958 = 0;
	var uLocal_12959 = 0;
	var uLocal_12960 = 0;
	var uLocal_12961 = 0;
	var uLocal_12962 = 0;
	var uLocal_12963 = 0;
	var uLocal_12964 = 0;
	var uLocal_12965 = 0;
	var uLocal_12966 = -1569615261;
	var uLocal_12967 = 0;
	var uLocal_12968 = 0;
	var uLocal_12969 = 0;
	var uLocal_12970 = 0;
	var uLocal_12971 = 0;
	var uLocal_12972 = 0;
	var uLocal_12973 = 0;
	var uLocal_12974 = 0;
	var uLocal_12975 = 0;
	var uLocal_12976 = 0;
	var uLocal_12977 = 0;
	var uLocal_12978 = 0;
	var uLocal_12979 = -1569615261;
	var uLocal_12980 = 0;
	var uLocal_12981 = 0;
	var uLocal_12982 = 0;
	var uLocal_12983 = 0;
	var uLocal_12984 = 0;
	var uLocal_12985 = 0;
	var uLocal_12986 = 0;
	var uLocal_12987 = 0;
	var uLocal_12988 = 0;
	var uLocal_12989 = 0;
	var uLocal_12990 = 0;
	var uLocal_12991 = 0;
	var uLocal_12992 = -1569615261;
	var uLocal_12993 = 0;
	var uLocal_12994 = 0;
	var uLocal_12995 = 0;
	var uLocal_12996 = 0;
	var uLocal_12997 = 0;
	var uLocal_12998 = 0;
	var uLocal_12999 = 0;
	var uLocal_13000 = 0;
	var uLocal_13001 = 0;
	var uLocal_13002 = 0;
	var uLocal_13003 = 0;
	var uLocal_13004 = 0;
	var uLocal_13005 = -1569615261;
	var uLocal_13006 = 0;
	var uLocal_13007 = 0;
	var uLocal_13008 = 0;
	var uLocal_13009 = 0;
	var uLocal_13010 = 0;
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
	var uLocal_13023 = 1;
	var uLocal_13024 = 30;
	var uLocal_13025 = -1;
	var uLocal_13026 = 0;
	var uLocal_13027 = 1;
	var uLocal_13028 = 0;
	var uLocal_13029 = 0;
	var uLocal_13030 = 0;
	var uLocal_13031 = 0;
	var uLocal_13032 = 0;
	var uLocal_13033 = 0;
	var uLocal_13034 = 0;
	var uLocal_13035 = 0;
	var uLocal_13036 = 0;
	var uLocal_13037 = 1065353216;
	var uLocal_13038 = 0;
	var uLocal_13039 = 0;
	var uLocal_13040 = 1065353216;
	var uLocal_13041 = 1;
	var uLocal_13042 = 0;
	var uLocal_13043 = -1;
	var uLocal_13044 = 0;
	var uLocal_13045 = 1;
	var uLocal_13046 = 0;
	var uLocal_13047 = 0;
	var uLocal_13048 = 0;
	var uLocal_13049 = 0;
	var uLocal_13050 = 0;
	var uLocal_13051 = 0;
	var uLocal_13052 = 0;
	var uLocal_13053 = 0;
	var uLocal_13054 = 0;
	var uLocal_13055 = 1065353216;
	var uLocal_13056 = 0;
	var uLocal_13057 = 0;
	var uLocal_13058 = 1065353216;
	var uLocal_13059 = 1;
	var uLocal_13060 = 0;
	var uLocal_13061 = -1;
	var uLocal_13062 = 0;
	var uLocal_13063 = 1;
	var uLocal_13064 = 0;
	var uLocal_13065 = 0;
	var uLocal_13066 = 0;
	var uLocal_13067 = 0;
	var uLocal_13068 = 0;
	var uLocal_13069 = 0;
	var uLocal_13070 = 0;
	var uLocal_13071 = 0;
	var uLocal_13072 = 0;
	var uLocal_13073 = 1065353216;
	var uLocal_13074 = 0;
	var uLocal_13075 = 0;
	var uLocal_13076 = 1065353216;
	var uLocal_13077 = 1;
	var uLocal_13078 = 0;
	var uLocal_13079 = -1;
	var uLocal_13080 = 0;
	var uLocal_13081 = 1;
	var uLocal_13082 = 0;
	var uLocal_13083 = 0;
	var uLocal_13084 = 0;
	var uLocal_13085 = 0;
	var uLocal_13086 = 0;
	var uLocal_13087 = 0;
	var uLocal_13088 = 0;
	var uLocal_13089 = 0;
	var uLocal_13090 = 0;
	var uLocal_13091 = 1065353216;
	var uLocal_13092 = 0;
	var uLocal_13093 = 0;
	var uLocal_13094 = 1065353216;
	var uLocal_13095 = 1;
	var uLocal_13096 = 0;
	var uLocal_13097 = -1;
	var uLocal_13098 = 0;
	var uLocal_13099 = 1;
	var uLocal_13100 = 0;
	var uLocal_13101 = 0;
	var uLocal_13102 = 0;
	var uLocal_13103 = 0;
	var uLocal_13104 = 0;
	var uLocal_13105 = 0;
	var uLocal_13106 = 0;
	var uLocal_13107 = 0;
	var uLocal_13108 = 0;
	var uLocal_13109 = 1065353216;
	var uLocal_13110 = 0;
	var uLocal_13111 = 0;
	var uLocal_13112 = 1065353216;
	var uLocal_13113 = 1;
	var uLocal_13114 = 0;
	var uLocal_13115 = -1;
	var uLocal_13116 = 0;
	var uLocal_13117 = 1;
	var uLocal_13118 = 0;
	var uLocal_13119 = 0;
	var uLocal_13120 = 0;
	var uLocal_13121 = 0;
	var uLocal_13122 = 0;
	var uLocal_13123 = 0;
	var uLocal_13124 = 0;
	var uLocal_13125 = 0;
	var uLocal_13126 = 0;
	var uLocal_13127 = 1065353216;
	var uLocal_13128 = 0;
	var uLocal_13129 = 0;
	var uLocal_13130 = 1065353216;
	var uLocal_13131 = 1;
	var uLocal_13132 = 0;
	var uLocal_13133 = -1;
	var uLocal_13134 = 0;
	var uLocal_13135 = 1;
	var uLocal_13136 = 0;
	var uLocal_13137 = 0;
	var uLocal_13138 = 0;
	var uLocal_13139 = 0;
	var uLocal_13140 = 0;
	var uLocal_13141 = 0;
	var uLocal_13142 = 0;
	var uLocal_13143 = 0;
	var uLocal_13144 = 0;
	var uLocal_13145 = 1065353216;
	var uLocal_13146 = 0;
	var uLocal_13147 = 0;
	var uLocal_13148 = 1065353216;
	var uLocal_13149 = 1;
	var uLocal_13150 = 0;
	var uLocal_13151 = -1;
	var uLocal_13152 = 0;
	var uLocal_13153 = 1;
	var uLocal_13154 = 0;
	var uLocal_13155 = 0;
	var uLocal_13156 = 0;
	var uLocal_13157 = 0;
	var uLocal_13158 = 0;
	var uLocal_13159 = 0;
	var uLocal_13160 = 0;
	var uLocal_13161 = 0;
	var uLocal_13162 = 0;
	var uLocal_13163 = 1065353216;
	var uLocal_13164 = 0;
	var uLocal_13165 = 0;
	var uLocal_13166 = 1065353216;
	var uLocal_13167 = 1;
	var uLocal_13168 = 0;
	var uLocal_13169 = -1;
	var uLocal_13170 = 0;
	var uLocal_13171 = 1;
	var uLocal_13172 = 0;
	var uLocal_13173 = 0;
	var uLocal_13174 = 0;
	var uLocal_13175 = 0;
	var uLocal_13176 = 0;
	var uLocal_13177 = 0;
	var uLocal_13178 = 0;
	var uLocal_13179 = 0;
	var uLocal_13180 = 0;
	var uLocal_13181 = 1065353216;
	var uLocal_13182 = 0;
	var uLocal_13183 = 0;
	var uLocal_13184 = 1065353216;
	var uLocal_13185 = 1;
	var uLocal_13186 = 0;
	var uLocal_13187 = -1;
	var uLocal_13188 = 0;
	var uLocal_13189 = 1;
	var uLocal_13190 = 0;
	var uLocal_13191 = 0;
	var uLocal_13192 = 0;
	var uLocal_13193 = 0;
	var uLocal_13194 = 0;
	var uLocal_13195 = 0;
	var uLocal_13196 = 0;
	var uLocal_13197 = 0;
	var uLocal_13198 = 0;
	var uLocal_13199 = 1065353216;
	var uLocal_13200 = 0;
	var uLocal_13201 = 0;
	var uLocal_13202 = 1065353216;
	var uLocal_13203 = 1;
	var uLocal_13204 = 0;
	var uLocal_13205 = -1;
	var uLocal_13206 = 0;
	var uLocal_13207 = 1;
	var uLocal_13208 = 0;
	var uLocal_13209 = 0;
	var uLocal_13210 = 0;
	var uLocal_13211 = 0;
	var uLocal_13212 = 0;
	var uLocal_13213 = 0;
	var uLocal_13214 = 0;
	var uLocal_13215 = 0;
	var uLocal_13216 = 0;
	var uLocal_13217 = 1065353216;
	var uLocal_13218 = 0;
	var uLocal_13219 = 0;
	var uLocal_13220 = 1065353216;
	var uLocal_13221 = 1;
	var uLocal_13222 = 0;
	var uLocal_13223 = -1;
	var uLocal_13224 = 0;
	var uLocal_13225 = 1;
	var uLocal_13226 = 0;
	var uLocal_13227 = 0;
	var uLocal_13228 = 0;
	var uLocal_13229 = 0;
	var uLocal_13230 = 0;
	var uLocal_13231 = 0;
	var uLocal_13232 = 0;
	var uLocal_13233 = 0;
	var uLocal_13234 = 0;
	var uLocal_13235 = 1065353216;
	var uLocal_13236 = 0;
	var uLocal_13237 = 0;
	var uLocal_13238 = 1065353216;
	var uLocal_13239 = 1;
	var uLocal_13240 = 0;
	var uLocal_13241 = -1;
	var uLocal_13242 = 0;
	var uLocal_13243 = 1;
	var uLocal_13244 = 0;
	var uLocal_13245 = 0;
	var uLocal_13246 = 0;
	var uLocal_13247 = 0;
	var uLocal_13248 = 0;
	var uLocal_13249 = 0;
	var uLocal_13250 = 0;
	var uLocal_13251 = 0;
	var uLocal_13252 = 0;
	var uLocal_13253 = 1065353216;
	var uLocal_13254 = 0;
	var uLocal_13255 = 0;
	var uLocal_13256 = 1065353216;
	var uLocal_13257 = 1;
	var uLocal_13258 = 0;
	var uLocal_13259 = -1;
	var uLocal_13260 = 0;
	var uLocal_13261 = 1;
	var uLocal_13262 = 0;
	var uLocal_13263 = 0;
	var uLocal_13264 = 0;
	var uLocal_13265 = 0;
	var uLocal_13266 = 0;
	var uLocal_13267 = 0;
	var uLocal_13268 = 0;
	var uLocal_13269 = 0;
	var uLocal_13270 = 0;
	var uLocal_13271 = 1065353216;
	var uLocal_13272 = 0;
	var uLocal_13273 = 0;
	var uLocal_13274 = 1065353216;
	var uLocal_13275 = 1;
	var uLocal_13276 = 0;
	var uLocal_13277 = -1;
	var uLocal_13278 = 0;
	var uLocal_13279 = 1;
	var uLocal_13280 = 0;
	var uLocal_13281 = 0;
	var uLocal_13282 = 0;
	var uLocal_13283 = 0;
	var uLocal_13284 = 0;
	var uLocal_13285 = 0;
	var uLocal_13286 = 0;
	var uLocal_13287 = 0;
	var uLocal_13288 = 0;
	var uLocal_13289 = 1065353216;
	var uLocal_13290 = 0;
	var uLocal_13291 = 0;
	var uLocal_13292 = 1065353216;
	var uLocal_13293 = 1;
	var uLocal_13294 = 0;
	var uLocal_13295 = -1;
	var uLocal_13296 = 0;
	var uLocal_13297 = 1;
	var uLocal_13298 = 0;
	var uLocal_13299 = 0;
	var uLocal_13300 = 0;
	var uLocal_13301 = 0;
	var uLocal_13302 = 0;
	var uLocal_13303 = 0;
	var uLocal_13304 = 0;
	var uLocal_13305 = 0;
	var uLocal_13306 = 0;
	var uLocal_13307 = 1065353216;
	var uLocal_13308 = 0;
	var uLocal_13309 = 0;
	var uLocal_13310 = 1065353216;
	var uLocal_13311 = 1;
	var uLocal_13312 = 0;
	var uLocal_13313 = -1;
	var uLocal_13314 = 0;
	var uLocal_13315 = 1;
	var uLocal_13316 = 0;
	var uLocal_13317 = 0;
	var uLocal_13318 = 0;
	var uLocal_13319 = 0;
	var uLocal_13320 = 0;
	var uLocal_13321 = 0;
	var uLocal_13322 = 0;
	var uLocal_13323 = 0;
	var uLocal_13324 = 0;
	var uLocal_13325 = 1065353216;
	var uLocal_13326 = 0;
	var uLocal_13327 = 0;
	var uLocal_13328 = 1065353216;
	var uLocal_13329 = 1;
	var uLocal_13330 = 0;
	var uLocal_13331 = -1;
	var uLocal_13332 = 0;
	var uLocal_13333 = 1;
	var uLocal_13334 = 0;
	var uLocal_13335 = 0;
	var uLocal_13336 = 0;
	var uLocal_13337 = 0;
	var uLocal_13338 = 0;
	var uLocal_13339 = 0;
	var uLocal_13340 = 0;
	var uLocal_13341 = 0;
	var uLocal_13342 = 0;
	var uLocal_13343 = 1065353216;
	var uLocal_13344 = 0;
	var uLocal_13345 = 0;
	var uLocal_13346 = 1065353216;
	var uLocal_13347 = 1;
	var uLocal_13348 = 0;
	var uLocal_13349 = -1;
	var uLocal_13350 = 0;
	var uLocal_13351 = 1;
	var uLocal_13352 = 0;
	var uLocal_13353 = 0;
	var uLocal_13354 = 0;
	var uLocal_13355 = 0;
	var uLocal_13356 = 0;
	var uLocal_13357 = 0;
	var uLocal_13358 = 0;
	var uLocal_13359 = 0;
	var uLocal_13360 = 0;
	var uLocal_13361 = 1065353216;
	var uLocal_13362 = 0;
	var uLocal_13363 = 0;
	var uLocal_13364 = 1065353216;
	var uLocal_13365 = 1;
	var uLocal_13366 = 0;
	var uLocal_13367 = -1;
	var uLocal_13368 = 0;
	var uLocal_13369 = 1;
	var uLocal_13370 = 0;
	var uLocal_13371 = 0;
	var uLocal_13372 = 0;
	var uLocal_13373 = 0;
	var uLocal_13374 = 0;
	var uLocal_13375 = 0;
	var uLocal_13376 = 0;
	var uLocal_13377 = 0;
	var uLocal_13378 = 0;
	var uLocal_13379 = 1065353216;
	var uLocal_13380 = 0;
	var uLocal_13381 = 0;
	var uLocal_13382 = 1065353216;
	var uLocal_13383 = 1;
	var uLocal_13384 = 0;
	var uLocal_13385 = -1;
	var uLocal_13386 = 0;
	var uLocal_13387 = 1;
	var uLocal_13388 = 0;
	var uLocal_13389 = 0;
	var uLocal_13390 = 0;
	var uLocal_13391 = 0;
	var uLocal_13392 = 0;
	var uLocal_13393 = 0;
	var uLocal_13394 = 0;
	var uLocal_13395 = 0;
	var uLocal_13396 = 0;
	var uLocal_13397 = 1065353216;
	var uLocal_13398 = 0;
	var uLocal_13399 = 0;
	var uLocal_13400 = 1065353216;
	var uLocal_13401 = 1;
	var uLocal_13402 = 0;
	var uLocal_13403 = -1;
	var uLocal_13404 = 0;
	var uLocal_13405 = 1;
	var uLocal_13406 = 0;
	var uLocal_13407 = 0;
	var uLocal_13408 = 0;
	var uLocal_13409 = 0;
	var uLocal_13410 = 0;
	var uLocal_13411 = 0;
	var uLocal_13412 = 0;
	var uLocal_13413 = 0;
	var uLocal_13414 = 0;
	var uLocal_13415 = 1065353216;
	var uLocal_13416 = 0;
	var uLocal_13417 = 0;
	var uLocal_13418 = 1065353216;
	var uLocal_13419 = 1;
	var uLocal_13420 = 0;
	var uLocal_13421 = -1;
	var uLocal_13422 = 0;
	var uLocal_13423 = 1;
	var uLocal_13424 = 0;
	var uLocal_13425 = 0;
	var uLocal_13426 = 0;
	var uLocal_13427 = 0;
	var uLocal_13428 = 0;
	var uLocal_13429 = 0;
	var uLocal_13430 = 0;
	var uLocal_13431 = 0;
	var uLocal_13432 = 0;
	var uLocal_13433 = 1065353216;
	var uLocal_13434 = 0;
	var uLocal_13435 = 0;
	var uLocal_13436 = 1065353216;
	var uLocal_13437 = 1;
	var uLocal_13438 = 0;
	var uLocal_13439 = -1;
	var uLocal_13440 = 0;
	var uLocal_13441 = 1;
	var uLocal_13442 = 0;
	var uLocal_13443 = 0;
	var uLocal_13444 = 0;
	var uLocal_13445 = 0;
	var uLocal_13446 = 0;
	var uLocal_13447 = 0;
	var uLocal_13448 = 0;
	var uLocal_13449 = 0;
	var uLocal_13450 = 0;
	var uLocal_13451 = 1065353216;
	var uLocal_13452 = 0;
	var uLocal_13453 = 0;
	var uLocal_13454 = 1065353216;
	var uLocal_13455 = 1;
	var uLocal_13456 = 0;
	var uLocal_13457 = -1;
	var uLocal_13458 = 0;
	var uLocal_13459 = 1;
	var uLocal_13460 = 0;
	var uLocal_13461 = 0;
	var uLocal_13462 = 0;
	var uLocal_13463 = 0;
	var uLocal_13464 = 0;
	var uLocal_13465 = 0;
	var uLocal_13466 = 0;
	var uLocal_13467 = 0;
	var uLocal_13468 = 0;
	var uLocal_13469 = 1065353216;
	var uLocal_13470 = 0;
	var uLocal_13471 = 0;
	var uLocal_13472 = 1065353216;
	var uLocal_13473 = 1;
	var uLocal_13474 = 0;
	var uLocal_13475 = -1;
	var uLocal_13476 = 0;
	var uLocal_13477 = 1;
	var uLocal_13478 = 0;
	var uLocal_13479 = 0;
	var uLocal_13480 = 0;
	var uLocal_13481 = 0;
	var uLocal_13482 = 0;
	var uLocal_13483 = 0;
	var uLocal_13484 = 0;
	var uLocal_13485 = 0;
	var uLocal_13486 = 0;
	var uLocal_13487 = 1065353216;
	var uLocal_13488 = 0;
	var uLocal_13489 = 0;
	var uLocal_13490 = 1065353216;
	var uLocal_13491 = 1;
	var uLocal_13492 = 0;
	var uLocal_13493 = -1;
	var uLocal_13494 = 0;
	var uLocal_13495 = 1;
	var uLocal_13496 = 0;
	var uLocal_13497 = 0;
	var uLocal_13498 = 0;
	var uLocal_13499 = 0;
	var uLocal_13500 = 0;
	var uLocal_13501 = 0;
	var uLocal_13502 = 0;
	var uLocal_13503 = 0;
	var uLocal_13504 = 0;
	var uLocal_13505 = 1065353216;
	var uLocal_13506 = 0;
	var uLocal_13507 = 0;
	var uLocal_13508 = 1065353216;
	var uLocal_13509 = 1;
	var uLocal_13510 = 0;
	var uLocal_13511 = -1;
	var uLocal_13512 = 0;
	var uLocal_13513 = 1;
	var uLocal_13514 = 0;
	var uLocal_13515 = 0;
	var uLocal_13516 = 0;
	var uLocal_13517 = 0;
	var uLocal_13518 = 0;
	var uLocal_13519 = 0;
	var uLocal_13520 = 0;
	var uLocal_13521 = 0;
	var uLocal_13522 = 0;
	var uLocal_13523 = 1065353216;
	var uLocal_13524 = 0;
	var uLocal_13525 = 0;
	var uLocal_13526 = 1065353216;
	var uLocal_13527 = 1;
	var uLocal_13528 = 0;
	var uLocal_13529 = -1;
	var uLocal_13530 = 0;
	var uLocal_13531 = 1;
	var uLocal_13532 = 0;
	var uLocal_13533 = 0;
	var uLocal_13534 = 0;
	var uLocal_13535 = 0;
	var uLocal_13536 = 0;
	var uLocal_13537 = 0;
	var uLocal_13538 = 0;
	var uLocal_13539 = 0;
	var uLocal_13540 = 0;
	var uLocal_13541 = 1065353216;
	var uLocal_13542 = 0;
	var uLocal_13543 = 0;
	var uLocal_13544 = 1065353216;
	var uLocal_13545 = 1;
	var uLocal_13546 = 0;
	var uLocal_13547 = -1;
	var uLocal_13548 = 0;
	var uLocal_13549 = 1;
	var uLocal_13550 = 0;
	var uLocal_13551 = 0;
	var uLocal_13552 = 0;
	var uLocal_13553 = 0;
	var uLocal_13554 = 0;
	var uLocal_13555 = 0;
	var uLocal_13556 = 0;
	var uLocal_13557 = 0;
	var uLocal_13558 = 0;
	var uLocal_13559 = 1065353216;
	var uLocal_13560 = 0;
	var uLocal_13561 = 0;
	var uLocal_13562 = 1065353216;
	var uLocal_13563 = 1;
	var uLocal_13564 = 0;
	var uLocal_13565 = 8;
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
	var uLocal_13894 = 8;
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
	var uLocal_13915 = -1;
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
	var uLocal_13937 = -1;
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
	var uLocal_13959 = -1;
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
	var uLocal_13981 = -1;
	var uLocal_13982 = 0;
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
	var uLocal_13999 = 0;
	var uLocal_14000 = 0;
	var uLocal_14001 = 0;
	var uLocal_14002 = 0;
	var uLocal_14003 = -1;
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
	var uLocal_14025 = -1;
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
	var uLocal_14047 = -1;
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
	var uLocal_14069 = -1;
	var uLocal_14070 = 0;
	var uLocal_14071 = 11;
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
	var uLocal_14182 = 2;
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
	var uLocal_14217 = 2;
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
	var uLocal_14234 = -1;
	var uLocal_14235 = 0;
	var uLocal_14236 = 0;
	var uLocal_14237 = -1;
	var uLocal_14238 = -1082130432;
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
	var uLocal_14311 = 0;
	var uLocal_14312 = 0;
	var uLocal_14313 = 0;
	var uLocal_14314 = 0;
	var uLocal_14315 = 0;
	var uLocal_14316 = 0;
	var uLocal_14317 = 0;
	var uLocal_14318 = 0;
	var uLocal_14319 = 0;
	var uLocal_14320 = 24;
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
	var uLocal_14390 = 0;
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
	var uLocal_14444 = -1;
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
	var uLocal_14471 = -1;
	var uLocal_14472 = 20;
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
	var uLocal_14500 = 1028443341;
	var uLocal_14501 = 1038174126;
	var uLocal_14502 = 1065353216;
	var uLocal_14503 = 1065353216;
	var uLocal_14504 = 1086324736;
	var uLocal_14505 = 1082130432;
	var uLocal_14506 = 1073741824;
	var uLocal_14507 = 1065353216;
	var uLocal_14508 = 1108082688;
	var uLocal_14509 = 1108082688;
	var uLocal_14510 = 3000;
	var uLocal_14511 = 1092616192;
	var uLocal_14512 = 0;
	var uLocal_14513 = 0;
	var uLocal_14514 = 0;
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
	var uLocal_14541 = 0;
	var uLocal_14542 = 0;
	var uLocal_14543 = 0;
	var uLocal_14544 = 0;
	var uLocal_14545 = 0;
	var uLocal_14546 = -1;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	fLocal_105 = 10000f;
	fLocal_106 = 10000f;
	fLocal_107 = 10000f;
	fLocal_108 = 1f;
	fLocal_109 = 3f;
	fLocal_110 = 9999f;
	fLocal_111 = 9999f;
	fLocal_112 = 9999f;
	fLocal_113 = 9999f;
	fLocal_114 = 9999f;
	fLocal_115 = 9999f;
	fLocal_116 = 0f;
	sLocal_122 = "VEH_HORSEBACK@AIM@FRONT@UNARMED@BASE";
	vLocal_123 = { -319.3505f, 795.1986f, 116.8913f };
	vLocal_126 = { -327.537f, 779.2092f, 116.4465f };
	vLocal_129 = { -63.93f, 346.38f, 111.1f };
	vLocal_138 = { -348.16f, 502.51f, 96.8f };
	iLocal_192 = 26;
	iLocal_621 = 9;
	iLocal_1164 = -1;
	iLocal_1336 = 2;
	iLocal_1337 = 4;
	iLocal_1339 = 87;
	iLocal_1340 = -1;
	iLocal_1352 = 9;
	fLocal_1355 = 10f;
	iLocal_1356 = 10;
	iLocal_1358 = 4;
	iLocal_1360 = 5;
	iLocal_1361 = 4;
	iLocal_1362 = 5;
	iLocal_1363 = 2;
	iLocal_1366 = 6;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4642))
	{
		__LIB_4__::func_935(&uLocal_1367, 1073741824 /* Float: 2f */);
		func_2(&uLocal_1367, 1);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	while (!__LIB_0__::func_382(64))
	{
		BUILTIN::WAIT(0);
	}
	func_4(&uScriptParam_0, &uLocal_1367);
	func_5(&uLocal_1367);
	while (!__LIB_4__::func_936(&uLocal_1367, -2147483648))
	{
		func_7(&uLocal_1367);
		BUILTIN::WAIT(0);
	}
	while (!func_2(&uLocal_1367, 0))
	{
		BUILTIN::WAIT(0);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_2(var uParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	struct<2> Var4;
	struct<8> Var6;
	if (__LIB_4__::func_937(uParam0, 4096))
	{
		return true;
	}
	if (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() == 4096)
	{
		func_9(uParam0);
		HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
		HUD::_DISPLAY_HUD_COMPONENT(1331687942);
		if (__LIB_0__::func_139(Global_43801))
		{
			__LIB_1__::func_281(&Global_43801, 1, 1);
		}
		UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
		MISC::_0x1096603B519C905F("");
		__LIB_1__::func_559(__LIB_3__::func_918(uParam0->f_607), 0, 2);
		__LIB_1__::func_140();
		__LIB_4__::func_716(1);
		__LIB_0__::func_722(1, 0);
		__LIB_5__::func_324(uParam0, 1);
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
		if (!__LIB_4__::func_936(uParam0, 1048576))
		{
			if (__LIB_0__::func_2() == 0)
			{
				__LIB_1__::func_965(0);
			}
			else if (__LIB_4__::func_938(uParam0) != 0)
			{
				if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
				{
					if (CAM::_0x1204EB53A5FBC63D())
					{
						return false;
					}
					if (__LIB_4__::func_938(uParam0) == 1 || __LIB_4__::func_938(uParam0) == 2)
					{
						if (__LIB_4__::func_505(&(uParam0->f_8269)) && __LIB_4__::func_506(&(uParam0->f_8269)))
						{
							__LIB_1__::func_582(0, &(uParam0->f_8269.f_1282));
						}
					}
					if (!__LIB_2__::func_618(&(uParam0->f_13118)))
					{
						__LIB_8__::func_901(&(uParam0->f_13118), 0);
					}
					bVar0 = CAM::_0x139EFB0A71DD9011();
					if (bVar0)
					{
						__LIB_4__::func_935(uParam0, 256);
					}
					bVar1 = CAM::_0x7CE9DC58E3E4755F();
					if (bVar1 && __LIB_4__::func_936(uParam0, 256))
					{
						CAM::_0x16E9ABDD34DDD931();
						CAM::DO_SCREEN_FADE_OUT(0);
					}
					else
					{
						if (((!bVar0 && !__LIB_11__::func_776(uParam0, bVar1)) && !__LIB_0__::func_91()) && !__LIB_4__::func_936(uParam0, 80))
						{
							if (!bVar1)
							{
								__LIB_5__::func_380(uParam0);
							}
							return false;
						}
						if (__LIB_4__::func_936(uParam0, 64))
						{
							CAM::_0x16E9ABDD34DDD931();
							CAM::DO_SCREEN_FADE_OUT(0);
						}
						else if (__LIB_4__::func_938(uParam0) == 2)
						{
							if (uParam0->f_13104 == -1)
							{
								if (__LIB_0__::func_0(uParam0))
								{
									uParam0->f_13104 = MISC::GET_GAME_TIMER();
								}
							}
							if ((uParam0->f_13104 != -1 && MISC::GET_GAME_TIMER() > uParam0->f_13104 + 4000) || bVar1)
							{
								CAM::_0x16E9ABDD34DDD931();
								CAM::DO_SCREEN_FADE_OUT(0);
							}
						}
						else if (__LIB_4__::func_938(uParam0) == 1)
						{
							if (__LIB_11__::func_776(uParam0, bVar1))
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
			else if (__LIB_4__::func_936(uParam0, 2))
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
			if (!__LIB_4__::func_678() && __LIB_4__::func_938(uParam0) != 0)
			{
				__LIB_11__::func_427(uParam0, func_34(__LIB_4__::func_939(uParam0)), func_34(__LIB_5__::func_475(uParam0)), __LIB_4__::func_939(uParam0), __LIB_5__::func_475(uParam0));
			}
		}
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_7375.f_804))
	{
		if (ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_7375.f_804))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_7375.f_804);
		}
	}
	__LIB_4__::func_935(uParam0, 1048576);
	if (!__LIB_4__::func_936(uParam0, 2097152))
	{
		if (!func_9(uParam0))
		{
			return false;
		}
		__LIB_4__::func_935(uParam0, 2097152);
	}
	MISC::_0x1096603B519C905F("");
	STREAMING::CLEAR_FOCUS();
	if (MISSIONDATA::_MISSIONDATA_TIMECYCLE_BOX_EXISTS())
	{
		MISSIONDATA::_MISSIONDATA_TIMECYCLE_BOX_DELETE();
	}
	MISC::SET_TIME_SCALE(1f);
	__LIB_5__::func_325(&(uParam0->f_8269));
	if (__LIB_4__::func_505(&(uParam0->f_8269)))
	{
		__LIB_4__::func_507(&(uParam0->f_8269));
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
	if (!__LIB_4__::func_936(uParam0, 8))
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
	__LIB_4__::func_940(uParam0);
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
	if (CAM::DOES_CAM_EXIST(uParam0->f_609.f_2))
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::DESTROY_CAM(uParam0->f_609.f_2, false);
	}
	__LIB_5__::func_326(&(uParam0->f_10792));
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
	if (__LIB_4__::func_938(uParam0) == 0)
	{
		bVar2 = true;
	}
	else
	{
		__LIB_5__::func_328(uParam0);
	}
	__LIB_18__::func_403(uParam0, 0, !bVar2, bVar2);
	__LIB_5__::func_595(uParam0, !bVar2);
	__LIB_1__::func_721(0);
	__LIB_1__::func_721(1);
	PLAYER::_0xDF93973251FB2CA5(PLAYER::PLAYER_ID(), 1);
	__LIB_4__::func_509(0);
	__LIB_5__::func_329(__LIB_4__::func_941(uParam0));
	__LIB_5__::func_330(__LIB_4__::func_941(uParam0));
	__LIB_0__::func_868(0);
	__LIB_0__::func_869(0);
	__LIB_0__::func_11(__LIB_4__::func_938(uParam0));
	__LIB_5__::func_22(uParam0);
	if (!bVar2)
	{
		__LIB_0__::func_722(1, 0);
	}
	if (__LIB_4__::func_938(uParam0) != 1)
	{
		__LIB_5__::func_101(0, &(uParam0->f_8269.f_1282));
	}
	Global_43805 = -1;
	__LIB_1__::func_978(1);
	__LIB_1__::func_564(0);
	__LIB_0__::func_8(&Global_1935630, 2097152);
	__LIB_1__::func_723(0);
	UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(0, "");
	if (__LIB_4__::func_938(uParam0) == 0)
	{
		__LIB_5__::func_370(Global_1835011[uParam0->f_607 /*74*/].f_1);
	}
	__LIB_5__::func_102();
	if (!TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_PLAYER_SEAT_LEDGE"))
	{
		TASK::_SET_SCENARIO_TYPE_ENABLED_HASH(joaat("WORLD_PLAYER_SEAT_LEDGE"), true);
	}
	if (!bParam1)
	{
		switch (__LIB_4__::func_938(uParam0))
		{
			case 0:
				if (!CAM::IS_SCREEN_FADED_IN())
				{
					if ((!CAM::IS_SCREEN_FADING_IN() && !__LIB_4__::func_936(uParam0, 4)) && !__LIB_4__::func_936(uParam0, 2))
					{
						CAM::DO_SCREEN_FADE_IN(1000);
					}
				}
				func_74(uParam0);
				__LIB_5__::func_503(uParam0);
				__LIB_0__::func_297();
				__LIB_5__::func_496(__LIB_0__::func_12(), 0);
				if (__LIB_0__::func_2() == 0)
				{
					__LIB_5__::func_103(0);
				}
				__LIB_5__::func_126(uParam0->f_607);
				bVar3 = __LIB_0__::func_513();
				if (!__LIB_0__::func_13(32768))
				{
					func_83(__LIB_3__::func_918(uParam0->f_607), !__LIB_4__::func_936(uParam0, 128), 1, bVar3, 1);
				}
				else
				{
					__LIB_1__::func_809(__LIB_3__::func_918(uParam0->f_607), bVar3);
				}
				__LIB_5__::func_324(uParam0, bParam1);
				if (uParam0->f_607 != 77)
				{
					UILOG::_UILOG_MARK_MISSION_COMPLETED(__LIB_5__::func_104(uParam0));
				}
				__LIB_1__::func_140();
				if (__LIB_0__::func_13(32768))
				{
					CAM::DO_SCREEN_FADE_OUT(0);
					__LIB_6__::func_833();
					__LIB_1__::func_141(0);
				}
				else if (__LIB_4__::func_936(uParam0, 2))
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
				__LIB_1__::func_645(__LIB_3__::func_918(uParam0->f_607));
				__LIB_8__::func_760();
				if (__LIB_4__::func_938(uParam0) == 2)
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
				__LIB_8__::func_760();
				Var4 = { __LIB_0__::func_14(joaat("DEATHS_ON_CURRENT_DEED")) };
				STATS::_0x0FEE2561120F3333(&Var4);
				__LIB_1__::func_559(__LIB_3__::func_918(uParam0->f_607), 0, 2);
				break;
			default:
				func_83(__LIB_3__::func_918(uParam0->f_607), 1, 1, 0, 1);
				__LIB_1__::func_140();
				break;
		}
		if (__LIB_4__::func_938(uParam0) != 0)
		{
			Var6 = { __LIB_4__::func_943(uParam0) };
			__LIB_5__::func_117(__LIB_3__::func_918(uParam0->f_607), __LIB_4__::func_938(uParam0), &Var6, 0, 0, __LIB_4__::func_936(uParam0, 64));
		}
	}
	__LIB_4__::func_510(1);
	__LIB_5__::func_384(3);
	__LIB_4__::func_944(uParam0, 4096);
	return true;
}

void func_4(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	PED::_0xED9582B3DA8F02B4(20);
	uParam1->f_608 = uParam0->f_1;
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
	__LIB_5__::func_587(uParam1);
	if (!__LIB_0__::func_2() == 0)
	{
		if (__LIB_5__::func_23(uParam1) > 0)
		{
			iVar4 = 0;
			while (iVar4 < uParam1->f_7375.f_13)
			{
				if (((!ENTITY::IS_ENTITY_DEAD(uParam1->f_7375.f_13[iVar4 /*12*/]) && ENTITY::IS_ENTITY_A_PED(uParam1->f_7375.f_13[iVar4 /*12*/])) && !ITEMSET::IS_IN_ITEMSET(uParam1->f_7375.f_13[iVar4 /*12*/], iVar0)) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_7375.f_13[iVar4 /*12*/]) != Global_35)
				{
					ITEMSET::ADD_TO_ITEMSET(uParam1->f_7375.f_13[iVar4 /*12*/], iVar0);
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
		__LIB_4__::func_945(uParam1, 4194304);
	}
	if (__LIB_4__::func_512())
	{
		__LIB_4__::func_945(uParam1, 8388608);
	}
	if (__LIB_5__::func_371())
	{
		if (!__LIB_4__::func_512() && !__LIB_4__::func_511())
		{
			__LIB_4__::func_945(uParam1, 4);
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
		__LIB_4__::func_946(uParam1, __LIB_4__::func_513());
	}
	func_108(uParam1, uParam0);
	func_109(uParam1);
	if (uParam1->f_13105 > PED::_0x62DE46F061CAA468())
	{
		PED::_0xF008E0BA1FE1D644((uParam1->f_13105 - PED::_0x62DE46F061CAA468()));
	}
}

void func_5(var uParam0)
{
	char[] cVar0[8];
	int iVar1;
	struct<4> Var2;
	char[] cVar6[8];
	cVar0 = __LIB_0__::func_631(uParam0->f_607);
	HUD::SET_MISSION_NAME(true, &cVar0);
	if (!MISC::GET_MISSION_FLAG())
	{
		MISC::SET_MISSION_FLAG(true);
	}
	MISC::_0x1096603B519C905F(&cVar0);
	if (uParam0->f_607 != 77)
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
	__LIB_0__::func_267(__LIB_4__::func_947(uParam0));
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
	__LIB_4__::func_514(uParam0);
	AUDIO::_0x33D51F801CB16E4F();
	if (!Global_1935630.f_12)
	{
		__LIB_0__::func_145(0, 0);
		PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
		if (!__LIB_4__::func_948(uParam0, 16384) && (__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 2) || __LIB_5__::func_371()))
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
				if (!__LIB_5__::func_371() && !__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 2))
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
		func_123(uParam0);
	}
	__LIB_1__::func_564(1);
	__LIB_1__::func_600(0);
	__LIB_4__::func_949(uParam0, joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT"));
	iLocal_62 = __LIB_4__::func_950(uParam0);
	iLocal_62 = iLocal_62;
	if (!Global_1935630.f_12)
	{
		if (!__LIB_5__::func_371())
		{
			Var2 = { func_34(__LIB_4__::func_939(uParam0)) };
			if (__LIB_4__::func_939(uParam0) != 0)
			{
				Var2 = { __LIB_1__::func_469(uParam0->f_607) };
			}
			if (!func_127(Var2))
			{
				__LIB_4__::func_945(uParam0, 1048576);
			}
			__LIB_4__::func_946(uParam0, 0);
			if (__LIB_4__::func_951(uParam0, 3) || __LIB_1__::func_195())
			{
				__LIB_8__::func_902(uParam0, __LIB_1__::func_469(uParam0->f_607), 0);
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
			__LIB_4__::func_946(uParam0, __LIB_4__::func_513());
		}
		TELEMETRY::_TELEMETRY_MISSION_STARTED(&(Global_1835011[uParam0->f_607 /*74*/].f_8), 0, __LIB_5__::func_24(__LIB_4__::func_939(uParam0)), __LIB_5__::func_371());
	}
	__LIB_5__::func_332(uParam0);
	__LIB_4__::func_952(uParam0, 0);
	__LIB_11__::func_415(uParam0, 0);
	if (!__LIB_5__::func_278(uParam0, __LIB_4__::func_939(uParam0)))
	{
		__LIB_4__::func_946(uParam0, 0);
	}
	__LIB_5__::func_333(uParam0);
	func_138(uParam0);
	func_139(uParam0);
	__LIB_4__::func_945(uParam0, 2097152);
	__LIB_5__::func_334(uParam0, __LIB_4__::func_939(uParam0), 134217728);
	if (__LIB_0__::func_13(32768))
	{
		__LIB_4__::func_935(uParam0, 4);
	}
	func_141(uParam0);
	__LIB_8__::func_800(uParam0, __LIB_4__::func_939(uParam0));
	__LIB_5__::func_105(__LIB_4__::func_941(uParam0));
	if (!__LIB_4__::func_948(uParam0, 65536))
	{
		__LIB_5__::func_178(__LIB_4__::func_941(uParam0));
	}
	__LIB_5__::func_106(uParam0, PLAYER::PLAYER_PED_ID(), "ARTHUR", 0);
	__LIB_5__::func_25(uParam0);
	__LIB_11__::func_416(uParam0);
	__LIB_0__::func_11(uParam0);
	__LIB_5__::func_26(uParam0, 30f);
	__LIB_5__::func_27(uParam0, 40f);
	__LIB_8__::func_806(uParam0, Global_35, 0, 0, 0, 0, 0);
	__LIB_4__::func_510(0);
	AUDIO::_0xA6A3A3F96B8B030E();
	__LIB_1__::func_723(1);
	UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(2, "");
	if (uParam0->f_607 != 77)
	{
		cVar6 = __LIB_0__::func_631(uParam0->f_607);
		UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(1, MISC::GET_HASH_KEY(&cVar6), 0, "");
	}
	if (TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_PLAYER_SEAT_LEDGE"))
	{
		TASK::_SET_SCENARIO_TYPE_ENABLED_HASH(joaat("WORLD_PLAYER_SEAT_LEDGE"), false);
	}
}

void func_7(var uParam0)
{
	var uVar0;
	if ((LAW::_0xF46108C50A22B029() && !Global_43891) && !__LIB_0__::func_730(__LIB_0__::func_12()))
	{
		POPULATION::_0xF45E46DEECF7DF6E(16384, 0, 0, -1, -1);
	}
	if (!__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 16384))
	{
		__LIB_4__::func_515();
	}
	if (!__LIB_4__::func_937(uParam0, 32768))
	{
		POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	}
	if (!__LIB_4__::func_937(uParam0, 2048))
	{
		__LIB_4__::func_516(1, 0);
	}
	switch (__LIB_0__::func_81(uParam0))
	{
		case -1:
			break;
		case 0:
			MemCopy(&uVar0, {__LIB_4__::func_681(__LIB_4__::func_941(uParam0))}, 4);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&uVar0))
			{
				__LIB_4__::func_945(uParam0, 64);
			}
			func_156(uParam0, 0);
			__LIB_0__::func_16(uParam0);
			if (func_158(uParam0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(__LIB_4__::func_953(uParam0)) && __LIB_4__::func_951(uParam0, 3))
				{
					ENTITY::FREEZE_ENTITY_POSITION(__LIB_4__::func_953(uParam0), false);
				}
				__LIB_0__::func_19(uParam0, 1);
			}
			if (__LIB_4__::func_936(uParam0, -2147483648))
			{
				__LIB_0__::func_19(uParam0, 2);
			}
			break;
		case 1:
			if (func_161(uParam0))
			{
				__LIB_4__::func_935(uParam0, -2147483648);
				__LIB_0__::func_19(uParam0, 2);
			}
			func_156(uParam0, __LIB_5__::func_279(uParam0, __LIB_4__::func_939(uParam0)) > 4);
			break;
		case 2:
			if (func_2(uParam0, 0))
			{
				__LIB_4__::func_935(uParam0, -2147483648);
				__LIB_0__::func_19(uParam0, 3);
			}
			break;
		case 3:
			SCRIPTS::TERMINATE_THIS_THREAD();
			break;
	}
	if (__LIB_0__::func_81(uParam0) < 2)
	{
	}
}

bool func_9(var uParam0)
{
	func_163(70, 0, 0);
	__LIB_1__::func_727(Global_35, 1);
	func_165();
	__LIB_0__::func_325(&iLocal_143);
	__LIB_0__::func_325(&iLocal_144);
	if (func_167(11))
	{
		func_168(11);
		PATHFIND::_0xD17672447692478E(iLocal_148[19], 0);
	}
	if (__LIB_0__::func_139(iLocal_191))
	{
		__LIB_1__::func_281(&iLocal_191, 1, 1);
	}
	if (PED::_GET_PED_BLACKBOARD_BOOL(Global_35, "ForceHandsOnBelt"))
	{
		PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "ForceHandsOnBelt", false, -1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_141))
	{
		PED::SET_PED_CONFIG_FLAG(iLocal_141, 219, false);
	}
	OBJECT::_0x0C0A373D181BF900(238680582);
	func_169();
	func_170();
	func_171(uParam0);
	func_172();
	func_173();
	func_174();
	func_175();
	TASK::CLEAR_PED_TASKS(Global_35, true, false);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	func_176(1);
	if (__LIB_4__::func_938(uParam0) == 0)
	{
		__LIB_2__::func_115(115, 1, 0, 0, 0, 1, 0, 1);
	}
	PED::CLEAR_RELATIONSHIP_BETWEEN_GROUPS(3, joaat("REL_PLAYER_LIKE"), joaat("REL_PLAYER_ENEMY"));
	PED::CLEAR_RELATIONSHIP_BETWEEN_GROUPS(3, joaat("REL_PLAYER_ENEMY"), joaat("REL_PLAYER_LIKE"));
	PLAYER::_0x914071FF93AF2692(PLAYER::PLAYER_ID(), 1f);
	PLAYER::_0xBBADFB5E5E5766FB(PLAYER::GET_PLAYER_INDEX(), 1f);
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	if (CAM::DOES_CAM_EXIST(iLocal_188))
	{
		CAM::DESTROY_CAM(iLocal_188, false);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_189))
	{
		CAM::DESTROY_CAM(iLocal_189, false);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_190))
	{
		CAM::DESTROY_CAM(iLocal_190, false);
	}
	if (iLocal_1340 != -1)
	{
		if (!AUDIO::_0x84848E1C0FC67DBB(iLocal_1340))
		{
			AUDIO::_0x3210BCB36AF7621B(iLocal_1340);
		}
		AUDIO::RELEASE_SOUND_ID(iLocal_1340);
	}
	CAM::DESTROY_ALL_CAMS(false);
	func_178(1);
	__LIB_9__::func_951(74, 0, 1);
	func_180(74, 0);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	if (func_167(24))
	{
		AUDIO::SET_AUDIO_FLAG("OpenWorldMusicOnMission", false);
		func_168(24);
	}
	CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	TASK::SET_SCENARIO_TYPE_ENABLED("PROP_PLAYER_PRPTY_SAVE_GAME", true);
	__LIB_0__::func_698(64);
	func_181();
	func_182(3);
	if (iLocal_102 != 0)
	{
		EVENT::REMOVE_SHOCKING_EVENT(iLocal_102);
		iLocal_102 = 0;
	}
	func_183();
	if (PED::IS_PED_USING_ACTION_MODE(Global_35))
	{
		PED::SET_PED_USING_ACTION_MODE(Global_35, false, -1, 0);
	}
	func_184(944);
	func_184(7);
	func_184(944);
	func_184(948);
	func_184(950);
	func_184(951);
	func_184(31);
	func_184(46);
	func_184(47);
	func_184(873);
	func_184(874);
	if (SCRIPTS::_0x7409669C5ED50144(joaat("CHAL_CTX_MISSION_CHASE")))
	{
		SCRIPTS::_0x50B72A754EE64A71(joaat("CHAL_CTX_MISSION_CHASE"));
	}
	func_185(0);
	__LIB_6__::func_416(0, 0, 1103626240 /* Float: 25f */);
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MUD3_runaway_stagecoach_scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("MUD3_runaway_stagecoach_scene");
	}
	__LIB_3__::func_820(79, 0);
	__LIB_3__::func_820(74, 0);
	Global_1415419.f_9757 = -1;
	__LIB_1__::func_408(-9438024, 0, 0);
	__LIB_6__::func_357();
	PED::SET_PED_CONFIG_FLAG(Global_35, 421, false);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_SPRINT"), true);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), true);
	__LIB_0__::func_400(-1559012672);
	__LIB_6__::func_158(0, 0, 0);
	if (func_167(77))
	{
		AUDIO::_0x660A8F876DF1D4F8(22);
	}
	func_192(0, 0);
	if (func_167(83))
	{
		AUDIO::CANCEL_MUSIC_EVENT("MUD3_SEARCH_1");
	}
	if (((__LIB_4__::func_938(uParam0) == 0 || __LIB_4__::func_938(uParam0) == 5) || __LIB_4__::func_938(uParam0) == -1) || PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		if (__LIB_14__::func_126(74, 1073741824 /* Float: 2f */))
		{
			__LIB_11__::func_405(74, 1073741824 /* Float: 2f */);
		}
	}
	AITRANSPORT::_0x5639FBEA922788DA(Global_35);
	VEHICLE::SET_RANDOM_TRAINS(true);
	__LIB_1__::func_600(1);
	func_195();
	return true;
}

struct<4> func_34(int iParam0)
{
	struct<4> Var0;
	int iVar4;
	iVar4 = func_232(iParam0);
	switch (iVar4)
	{
		case 0:
			__LIB_4__::func_954(&Var0, func_233(10, 0));
			break;
		case 1:
			__LIB_4__::func_954(&Var0, func_233(9, 0));
			break;
		case 2:
			__LIB_4__::func_954(&Var0, func_233(1, 0));
			break;
		case 3:
			__LIB_4__::func_954(&Var0, func_233(2, 0));
			break;
		case 4:
			__LIB_4__::func_954(&Var0, func_233(3, 0));
			break;
		case 5:
			__LIB_4__::func_954(&Var0, func_233(4, 0));
			break;
		case 6:
			__LIB_4__::func_954(&Var0, func_233(5, 0));
			break;
		case 7:
			__LIB_4__::func_954(&Var0, func_233(6, 0));
			break;
		case 8:
			__LIB_4__::func_954(&Var0, func_233(7, 0));
			break;
		case 25:
			__LIB_4__::func_954(&Var0, func_233(8, 0));
			break;
		default:
			Var0 = { Global_36 };
			break;
	}
	return Var0;
}

void func_74(var uParam0)
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
	iVar0 = __LIB_4__::func_939(uParam0);
	iVar1 = __LIB_5__::func_279(uParam0, iVar0);
	bVar2 = false;
	if (iVar1 == 5 || iVar1 == 6)
	{
		bVar2 = true;
	}
	iVar3 = 0;
	if (!bVar2)
	{
		if (__LIB_5__::func_253(uParam0) == 0 && iVar0 == 0)
		{
			iVar3 = 1;
		}
	}
	iVar4 = 0;
	if (!bVar2)
	{
		if (__LIB_4__::func_938(uParam0) == 0)
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
		func_291(uParam0);
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
						func_328(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_328(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_328(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_328(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_328(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_328(joaat("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_328(joaat("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_328(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_328(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_328(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_328(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_328(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_328(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_328(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_328(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_328(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_328(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_328(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_328(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_328(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_328(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_328(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_328(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_328(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_328(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_330();
						func_331(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
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
						func_328(joaat("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
						func_328(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_328(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
		func_369();
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
							func_328(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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

void func_108(var uParam0, var uParam1)
{
	uParam0->f_607 = -1;
	__LIB_19__::func_185(uParam0);
	uParam0->f_634[0] = 60907;
	uParam0->f_634[1] = 60907;
	uParam0->f_637 = 0;
	__LIB_4__::func_960(uParam0, *uParam1);
	func_396(uParam0);
}

void func_109(var uParam0)
{
	int iVar0;
	iVar0 = __LIB_5__::func_34(uParam0, joaat("WAGON03X"), 1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::IS_ENTITY_A_VEHICLE(iVar0))
	{
		Local_579 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar0);
		func_398(33);
	}
}

void func_123(var uParam0)
{
	if (__LIB_0__::func_91())
	{
		func_401(&(uParam0->f_7375));
	}
}

bool func_127(struct<4> Param0)
{
	if (__LIB_0__::func_13(32768))
	{
		return true;
	}
	return func_403(Param0, Param0.f_3);
}

void func_138(var uParam0)
{
	if (!ITEMSET::IS_ITEMSET_VALID(Local_14))
	{
		Local_14 = ITEMSET::CREATE_ITEMSET(true);
	}
	__LIB_5__::func_338(uParam0, joaat("CS_VALPRAYINGMAN"), 56);
	__LIB_5__::func_338(uParam0, joaat("U_M_M_VALTOWNFOLK_01"), 524768);
	__LIB_5__::func_338(uParam0, joaat("A_C_HORSE_MORGAN_PALOMINO"), 252);
	__LIB_5__::func_338(uParam0, joaat("U_M_M_VALPOOPINGMAN_01"), 56);
	__LIB_5__::func_338(uParam0, joaat("CS_BLWWITNESS"), 524768);
	__LIB_5__::func_338(uParam0, joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT"), 524768);
	__LIB_5__::func_338(uParam0, joaat("CS_KARENSJOHN_01"), 508);
	__LIB_5__::func_338(uParam0, joaat("CS_ANTONYFOREMEN"), 252);
	__LIB_5__::func_338(uParam0, joaat("A_C_CHICKEN_01"), 524736);
	__LIB_5__::func_338(uParam0, joaat("A_C_HORSE_MORGAN_BAY"), 524736);
	__LIB_5__::func_338(uParam0, joaat("A_M_M_VALTOWNFOLK_01"), 524736);
}

int func_139(var uParam0)
{
	__LIB_5__::func_338(uParam0, joaat("P_CS_BOOKKELONIAN"), 67108863);
	__LIB_5__::func_338(uParam0, joaat("S_WHISKEYEMPTY01X"), 120);
	__LIB_5__::func_338(uParam0, joaat("WAGON03X"), 67108863);
	__LIB_5__::func_338(uParam0, joaat("COACH3"), 67108863);
	__LIB_5__::func_338(uParam0, joaat("MSP_MUDTOWN3_MALES_01"), 67108863);
	__LIB_5__::func_338(uParam0, joaat("A_M_M_VALTOWNFOLK_01"), 6);
	__LIB_5__::func_338(uParam0, joaat("A_C_HORSE_AMERICANSTANDARDBRED_BUCKSKIN"), 524768);
	__LIB_5__::func_565(uParam0, func_421(0), 67108863, 2, -1);
	__LIB_5__::func_565(uParam0, func_421(1), 67108863, 2, -1);
	__LIB_5__::func_565(uParam0, func_421(2), 67108863, 2, -1);
	__LIB_5__::func_565(uParam0, func_421(3), 67108863, 2, -1);
	__LIB_5__::func_565(uParam0, func_421(4), 67108863, 2, -1);
	__LIB_5__::func_567(uParam0, sLocal_122, 128);
	func_424(uParam0);
	__LIB_11__::func_61(uParam0, -1559012672, 1);
	return 1;
}

void func_141(var uParam0)
{
	int iVar0;
	iVar0 = func_427(uParam0);
	__LIB_4__::func_945(uParam0, 1);
	if (iVar0 >= 8)
	{
		__LIB_4__::func_945(uParam0, 2);
	}
}

void func_156(var uParam0, bool bParam1)
{
	bool bVar0;
	if (!__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 134217728))
	{
		func_139(uParam0);
		__LIB_5__::func_334(uParam0, __LIB_4__::func_939(uParam0), 134217728);
	}
	if (bParam1 && !__LIB_5__::func_331(uParam0, __LIB_5__::func_475(uParam0), 536870912))
	{
		if (__LIB_8__::func_808(uParam0, __LIB_5__::func_475(uParam0), 0))
		{
			__LIB_5__::func_334(uParam0, __LIB_5__::func_475(uParam0), 536870912);
		}
	}
	if (__LIB_4__::func_937(uParam0, 8192))
	{
		if (!__LIB_4__::func_937(uParam0, 536870912))
		{
			if (__LIB_5__::func_569(&(uParam0->f_1126), __LIB_4__::func_939(uParam0)))
			{
				__LIB_4__::func_944(uParam0, 536870912);
			}
		}
		return;
	}
	bVar0 = false;
	if (__LIB_8__::func_808(uParam0, __LIB_4__::func_939(uParam0), 1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		__LIB_4__::func_944(uParam0, 8192);
	}
}

bool func_158(var uParam0)
{
	if (__LIB_4__::func_962(uParam0) < 1)
	{
		func_437(uParam0, __LIB_4__::func_951(uParam0, 3), !__LIB_4__::func_937(uParam0, 2097152), uParam0->f_5410, !__LIB_4__::func_937(uParam0, 32), 0);
		func_438(uParam0, 1, uParam0->f_5413, uParam0->f_5413.f_1, uParam0->f_5413.f_2, uParam0->f_5416, 1, 1, 1);
	}
	if ((!__LIB_4__::func_948(uParam0, 4) && !__LIB_5__::func_371()) && !__LIB_4__::func_951(uParam0, 3))
	{
		if (!__LIB_4__::func_948(uParam0, 32))
		{
			if (__LIB_0__::func_2() == 0)
			{
				__LIB_4__::func_945(uParam0, 32);
			}
			else
			{
				func_439(uParam0);
			}
		}
		if (__LIB_4__::func_948(uParam0, 32))
		{
			func_440(uParam0);
		}
	}
	switch (__LIB_4__::func_962(uParam0))
	{
		case -1:
		case 0:
			__LIB_4__::func_963(uParam0, 1);
			break;
		case 1:
			if (func_442(uParam0))
			{
				if (__LIB_4__::func_948(uParam0, 4096))
				{
					__LIB_4__::func_963(uParam0, 2);
				}
				else
				{
					__LIB_4__::func_963(uParam0, 3);
				}
			}
			break;
		case 2:
			if (__LIB_8__::func_909(uParam0))
			{
				__LIB_4__::func_963(uParam0, 3);
			}
			break;
		case 3:
			if (func_444(uParam0))
			{
				__LIB_4__::func_963(uParam0, 4);
			}
			break;
		case 4:
			return true;
	}
	return false;
}

bool func_161(var uParam0)
{
	int iVar0;
	if (__LIB_4__::func_939(uParam0) == 26)
	{
		__LIB_4__::func_964(uParam0, 0);
		return true;
	}
	if (func_446(uParam0))
	{
		iVar0 = __LIB_4__::func_939(uParam0);
		__LIB_4__::func_946(uParam0, __LIB_5__::func_475(uParam0));
		if (__LIB_4__::func_939(uParam0) == 26)
		{
			__LIB_4__::func_964(uParam0, 0);
			return true;
		}
		else if (__LIB_5__::func_331(uParam0, iVar0, 128))
		{
			func_446(uParam0);
		}
	}
	return false;
}

void func_163(int iParam0, bool bParam1, bool bParam2)
{
	char* sVar0;
	sVar0 = func_447(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return;
	}
	if (__LIB_6__::func_903(sVar0) || __LIB_8__::func_684(sVar0))
	{
		__LIB_6__::func_900(sVar0, bParam1, 0);
	}
	func_451(iParam0);
	if (bParam2)
	{
		func_452(iParam0);
	}
}

void func_165()
{
	if (!func_167(71))
	{
		return;
	}
	MAP::CLEAR_GPS_CUSTOM_ROUTE();
	MAP::SET_GPS_CUSTOM_ROUTE_RENDER(false, 3, 30);
	func_168(71);
}

bool func_167(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 >= 32)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 >= 4)
	{
		return false;
	}
	iVar2 = __LIB_0__::func_771(iVar0);
	return __LIB_0__::func_1(uLocal_95[iVar1], iVar2);
}

void func_168(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 >= 32)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 >= 4)
	{
		return;
	}
	iVar2 = __LIB_0__::func_771(iVar0);
	__LIB_0__::func_516(&(uLocal_95[iVar1]), iVar2);
}

void func_169()
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 19)
	{
		func_456(iVar0);
		iVar0++;
	}
}

void func_170()
{
	PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "FOREMAN_RIGHT");
	PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "FOREMAN_LEFT");
	PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "FOREMAN_RIGHT_LOCK");
	PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "FOREMAN_LEFT_LOCK");
	PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "WITNESS_CLIFF");
	PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "WagonLimit");
}

void func_171(var uParam0)
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(Local_193[1 /*6*/]))
	{
		PED::SET_PED_CONFIG_FLAG(Local_193[1 /*6*/], 252, true);
	}
	if (__LIB_0__::func_272(Local_193[6 /*6*/], 0))
	{
		AUDIO::STOP_PED_SPEAKING(Local_193[6 /*6*/], true);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_193[6 /*6*/]))
	{
		PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(Local_193[6 /*6*/], 99);
	}
	func_458(&(Local_193[1 /*6*/]), &(Local_193[1 /*6*/].f_4));
	func_458(&(Local_193[3 /*6*/]), &(Local_193[3 /*6*/].f_4));
	func_458(&(Local_193[2 /*6*/]), &(Local_193[2 /*6*/].f_4));
	func_458(&(Local_193[0 /*6*/]), &(Local_193[0 /*6*/].f_4));
	__LIB_13__::func_19(&iLocal_928, Local_193[6 /*6*/]);
	func_460(&iLocal_640, &Local_622, &(Local_193[8 /*6*/]), 1);
	func_460(&iLocal_736, &Local_701, &(Local_193[5 /*6*/]), 1);
	func_460(&iLocal_928, &Local_893, &(Local_193[6 /*6*/]), 1);
	func_460(&Local_1007, &Local_989, &(Local_193[6 /*6*/]), 1);
	func_460(&iLocal_832, &Local_797, &(Local_193[11 /*6*/]), 1);
	func_460(&iLocal_1103, &Local_1068, &(Local_193[3 /*6*/]), 1);
	if (__LIB_2__::func_763(16, 0))
	{
		__LIB_2__::func_753(16, 0, 1, 0, 0);
	}
	if (__LIB_2__::func_763(10, 0))
	{
		__LIB_2__::func_753(10, 0, 1, 0, 0);
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_463(iVar0);
		iVar0++;
	}
	__LIB_18__::func_337(uParam0, 4, Local_193[0 /*6*/], 0, 0, 1, 0);
	__LIB_18__::func_337(uParam0, 20, Local_193[1 /*6*/], 0, 0, 1, 0);
	__LIB_18__::func_337(uParam0, 15, Local_193[2 /*6*/], 0, 0, 1, 0);
	__LIB_18__::func_337(uParam0, 22, Local_193[3 /*6*/], 0, 0, 1, 0);
}

void func_172()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		__LIB_4__::func_866(&(iLocal_185[iVar0]), 1, 1);
		iVar0++;
	}
}

void func_173()
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_579))
	{
		VEHICLE::DELETE_VEHICLE(&Local_579);
	}
	func_465();
	func_168(2);
}

void func_174()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_466(&(Local_64[iVar0 /*10*/]), 0);
		iVar0++;
	}
}

void func_175()
{
	int iVar0;
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_148[24]))
	{
		PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_148[24]);
	}
	iVar0 = 0;
	while (iVar0 < 36)
	{
		__LIB_0__::func_172(iLocal_148[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 21)
	{
		func_468(&(Local_284[iVar0 /*5*/]), 0, 0, 0, 0, 0, 0);
		__LIB_0__::func_172(Local_284[iVar0 /*5*/]);
		iVar0++;
	}
}

void func_176(bool bParam0)
{
	bool bVar0;
	if (bParam0)
	{
		if (bLocal_1177)
		{
			HUD::_DISPLAY_HUD_COMPONENT(724769646);
			bLocal_1177 = false;
		}
		return;
	}
	bVar0 = false;
	if (MISC::ABSI((MISC::GET_FRAME_COUNT() - iLocal_1178)) <= 1)
	{
		bVar0 = true;
	}
	if (bLocal_1177)
	{
		if (!bVar0)
		{
			HUD::_DISPLAY_HUD_COMPONENT(724769646);
			bLocal_1177 = false;
		}
	}
	else if (bVar0)
	{
		HUD::_HIDE_HUD_COMPONENT(724769646);
		bLocal_1177 = true;
	}
}

void func_178(int iParam0)
{
	char* sVar0;
	sVar0 = "LevDes_ValentineHotel";
	if (TASK::DOES_SCENARIO_GROUP_EXIST(sVar0))
	{
		if (iParam0 == 1)
		{
			if (!TASK::IS_SCENARIO_GROUP_ENABLED(sVar0))
			{
				TASK::SET_SCENARIO_GROUP_ENABLED(sVar0, true);
			}
		}
		else if (TASK::IS_SCENARIO_GROUP_ENABLED(sVar0))
		{
			TASK::SET_SCENARIO_GROUP_ENABLED(sVar0, false);
		}
	}
}

void func_180(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_1__::func_936(iParam0, 524288);
	}
	else
	{
		__LIB_1__::func_937(iParam0, 524288);
	}
}

void func_181()
{
	func_474();
}

void func_182(int iParam0)
{
	if (!__LIB_1__::func_918(iParam0))
	{
		return;
	}
	Global_1914319.f_3[iParam0 /*446*/].f_412 = 0;
	INVENTORY::_0x9B4E793B1CB6550A();
}

void func_183()
{
	func_476(238680582);
	func_476(-529064319);
	func_476(183181940);
	func_476(-1245790181);
	func_476(-861656352);
	func_476(1183522472);
	func_476(-1553967420);
	func_476(-1466932952);
	func_476(946241121);
	func_476(246426357);
	func_476(540459374);
	func_476(-601602845);
	func_476(142240370);
	func_476(1879307167);
	func_476(-2143609525);
	func_476(-1905739354);
	func_476(-1801665010);
	func_476(-1453231925);
	func_476(954666972);
	func_476(1644519960);
	func_476(352897364);
	func_476(660303353);
	func_476(-290089884);
	func_476(706990067);
}

void func_184(int iParam0)
{
	__LIB_0__::func_121(iParam0, 32);
	__LIB_4__::func_193(iParam0);
}

void func_185(bool bParam0)
{
	if (bParam0)
	{
		if (!func_167(41))
		{
			AUDIO::_0x0D7FD6A55FD63AEF(11, 3, 0);
			AUDIO::_0x0D7FD6A55FD63AEF(10, 3, 0);
			func_398(41);
		}
	}
	else if (func_167(41))
	{
		AUDIO::_0x660A8F876DF1D4F8(11);
		AUDIO::_0x660A8F876DF1D4F8(10);
		func_168(41);
	}
}

void func_192(bool bParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	bVar0 = false;
	bVar1 = false;
	bVar2 = false;
	bVar3 = false;
	bVar4 = false;
	iVar5 = iParam1;
	if (iVar5 == 0)
	{
		bVar0 = true;
		bVar1 = true;
		bVar2 = true;
		bVar3 = true;
		bVar4 = true;
	}
	if (__LIB_0__::func_27(iVar5, 1))
	{
		bVar0 = true;
	}
	if (__LIB_0__::func_27(iVar5, 2))
	{
		bVar1 = true;
	}
	if (__LIB_0__::func_27(iVar5, 4))
	{
		bVar2 = true;
	}
	if (__LIB_0__::func_27(iVar5, 8))
	{
		bVar3 = true;
	}
	if (__LIB_0__::func_27(iVar5, 16))
	{
		bVar4 = true;
	}
	if (bVar0)
	{
		func_492(3, joaat("CONSUMABLE_CHEESE_WEDGE"), bParam0);
		func_492(3, joaat("CONSUMABLE_JERKY_VENISON"), bParam0);
	}
	if (bVar1)
	{
		func_492(3, joaat("CONSUMABLE_OAT_CAKES"), bParam0);
		func_492(3, joaat("CONSUMABLE_HORSE_REVIVER"), bParam0);
	}
	if (bVar2)
	{
		func_492(3, joaat("PROVISION_POCKET_WATCH_GOLD"), bParam0);
		func_492(3, joaat("PROVISION_POCKET_WATCH_PLATINUM"), bParam0);
		func_492(3, joaat("PROVISION_POCKET_WATCH_SILVER"), bParam0);
		func_492(3, joaat("CONSUMABLE_COVER_SCENT"), bParam0);
		func_492(3, joaat("KIT_GUN_OIL"), bParam0);
	}
	if (bVar3)
	{
		func_492(3, joaat("CONSUMABLE_CORN"), bParam0);
		func_492(3, joaat("CONSUMABLE_CARROT"), bParam0);
		func_492(3, joaat("CONSUMABLE_APPLE"), bParam0);
		func_492(3, joaat("CONSUMABLE_PEAR"), bParam0);
	}
	if (bVar4)
	{
		func_492(3, joaat("CONSUMABLE_PREDATOR_BAIT"), bParam0);
		func_492(3, joaat("CONSUMABLE_HERBIVORE_BAIT"), bParam0);
		func_492(3, joaat("CONSUMABLE_CANDY_BAG"), bParam0);
	}
}

void func_195()
{
	func_493(13, 0, 1);
	func_493(14, 0, 1);
	func_493(11, 0, 1);
	func_493(1, 0, 1);
}

int func_232(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 2;
		case 3:
			return 3;
		case 4:
			return 4;
		case 5:
			return 5;
		case 6:
			return 6;
		case 7:
			return 7;
		case 8:
			return 8;
		case 25:
			return 25;
		default:
			break;
	}
	return 26;
}

struct<4> func_233(int iParam0, int iParam1)
{
	return func_519(iParam0, iParam1);
}

void func_291(var uParam0)
{
	if (__LIB_4__::func_948(uParam0, 1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_5411))
	{
		if (__LIB_4__::func_948(uParam0, 16))
		{
			__LIB_5__::func_595(uParam0, 0);
		}
		if (func_438(uParam0, 0, uParam0->f_5413, uParam0->f_5413.f_1, uParam0->f_5413.f_2, uParam0->f_5416, 1, 1, 1))
		{
		}
	}
}

bool func_328(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
				func_328(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
						func_328(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_328(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_328(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_328(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_328(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_328(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_328(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
					func_328(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_328(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
			func_670(iParam0);
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
				func_328(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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

void func_330()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_683();
	func_684();
	func_685();
	func_686();
	func_687();
	__LIB_1__::func_848();
	__LIB_0__::func_376();
}

void func_331(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	func_690(iParam0, 1, 1, -142743235, 1);
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

void func_369()
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
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_730(&uVar4, &iVar1, &iVar2, &iVar3)))
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

void func_396(var uParam0)
{
	__LIB_5__::func_476(uParam0, 0, 1, 112452, 112510, 112576, 112808, 113858, "MUD3_INT", 16394, -1);
	__LIB_5__::func_476(uParam0, 1, 2, 114016, 114263, 114304, 114409, 114443, "", 16394, -1);
	__LIB_5__::func_476(uParam0, 2, 3, 114588, 114687, 114734, 114897, 115710, "", 10, -1);
	__LIB_5__::func_476(uParam0, 3, 4, 115747, 115811, 115875, 115971, 116843, "", 8, -1);
	__LIB_5__::func_476(uParam0, 4, 5, 116903, 116945, 117114, 117365, 118308, "MUD3_MCS2", 10, -1);
	__LIB_5__::func_476(uParam0, 5, 6, 118418, 118455, 118547, 118633, 119078, "", 64, -1);
	__LIB_5__::func_476(uParam0, 6, 7, 119094, 119258, 119368, 119438, 119822, "", 64, -1);
	__LIB_5__::func_476(uParam0, 7, 8, 119866, 119908, 120102, 120253, 120454, "MUD3_MCS3", 66, -1);
	__LIB_5__::func_476(uParam0, 8, 25, 120479, 120511, 120556, 120616, 121314, "", 64, -1);
	__LIB_5__::func_476(uParam0, 25, 26, 121356, 121405, 121717, 121832, 121845, "MUD3_EXT", 66, -1);
}

void func_398(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 >= 32)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 >= 4)
	{
		return;
	}
	iVar2 = __LIB_0__::func_771(iVar0);
	__LIB_1__::func_336(&(uLocal_95[iVar1]), iVar2);
}

void func_401(var uParam0)
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
		func_827(&(uParam0->f_860), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_4__::func_535(uParam0, 0f, 0f, 0f);
		func_829(uParam0);
		func_830(uParam0);
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

int func_403(vector3 vParam0, var uParam3)
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
		iVar0 = func_838(0, 0);
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

char* func_421(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return "mudtown3_2fToExit";
		case 1:
			return "mudtown3_gangflee";
		case 0:
			return "mudtown3_WalkNTalk";
		case 3:
			return "mudtown3_Coach";
		case 4:
			return "mudtown3_Wagon";
	}
	return "";
}

void func_424(var uParam0)
{
	func_857(uParam0, 0, 0, 112, 1, 0);
	func_858(uParam0, 0, 1, 112);
	func_858(uParam0, 0, 2, 112);
	func_857(uParam0, 1, 4, 112, 1, 0);
	func_858(uParam0, 1, 3, 112);
	func_857(uParam0, 2, 5, 48, 0, 0);
	func_857(uParam0, 3, 7, 48, 0, 0);
	func_857(uParam0, 4, 8, 64, 1, 0);
	func_857(uParam0, 6, 18, 4, 1, 1);
	func_857(uParam0, 7, 19, 3, 1, 0);
	func_857(uParam0, 8, 22, 3, 1, 0);
	func_857(uParam0, 9, 29, 3, 1, 0);
	func_857(uParam0, 10, 40, 3, 1, 0);
	func_858(uParam0, 10, 39, 3);
	func_858(uParam0, 10, 38, 3);
	func_858(uParam0, 10, 41, 3);
	func_858(uParam0, 10, 42, 3);
	func_858(uParam0, 10, 44, 3);
	func_858(uParam0, 10, 43, 3);
	func_857(uParam0, 11, 47, 3, 1, 0);
	func_857(uParam0, 12, 51, 3, 1, 0);
	func_858(uParam0, 12, 52, 3);
	func_857(uParam0, 13, 58, 12, 1, 0);
	func_858(uParam0, 13, 60, 8);
	func_857(uParam0, 14, 73, 112, 1, 0);
	func_858(uParam0, 14, 71, 112);
	func_858(uParam0, 14, 72, 112);
	func_857(uParam0, 15, 74, 16, 1, 0);
	func_858(uParam0, 15, 75, 16);
	func_858(uParam0, 15, 76, 16);
	func_858(uParam0, 15, 81, 16);
	func_857(uParam0, 16, 82, 7, 0, 0);
	func_857(uParam0, 17, 85, 7, 0, 0);
	func_857(uParam0, 18, 86, -2146959360, 1, 0);
}

int func_427(var uParam0)
{
	int iVar0;
	iVar0 = __LIB_4__::func_939(uParam0);
	return func_232(iVar0);
}

bool func_437(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	var uVar1;
	vector3 vVar2;
	if (__LIB_4__::func_948(uParam0, 2))
	{
		return true;
	}
	if (__LIB_0__::func_2() == 0)
	{
		return true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_5408))
	{
		return true;
	}
	iVar0 = __LIB_4__::func_543(__LIB_4__::func_941(uParam0));
	if (!__LIB_0__::func_91())
	{
		vVar2 = { __LIB_1__::func_469(uParam0->f_607) };
	}
	if (func_896(uParam0, iVar0, &uVar1, bParam1, vVar2.x, vVar2.y, vVar2.z, 0, bParam2, iParam3, bParam4, iParam5, 1, 0))
	{
		uParam0->f_5408 = uVar1;
		return true;
	}
	return false;
}

bool func_438(var uParam0, bool bParam1, var uParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, int iParam8)
{
	struct<11> Var0;
	int iVar11;
	int iVar12;
	int iVar13;
	vector3 vVar14;
	int iVar17;
	struct<11> Var18;
	int iVar29;
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_5411))
	{
		if (!__LIB_4__::func_948(uParam0, 16777216))
		{
			if (!func_897(uParam0))
			{
				__LIB_4__::func_945(uParam0, 16777216);
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
				iVar12 = func_898(&iVar11, &Var0);
				if (iVar11 != 0)
				{
					__LIB_4__::func_945(uParam0, 16777216);
					if (iVar11 == 2 && !ENTITY::IS_ENTITY_DEAD(iVar12))
					{
						if (iVar12 == uParam0->f_5411)
						{
							__LIB_4__::func_945(uParam0, 16777216);
						}
						else if (__LIB_0__::func_48(iVar12, uParam0->f_5411, 5f, 1))
						{
							if (__LIB_0__::func_126(iVar12))
							{
								PHYSICS::_0x0348469DAA17576C(iVar12);
							}
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar12, false, true);
							ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iVar12, uParam0->f_5417, uParam0->f_5420, true, false, true);
						}
					}
				}
			}
			return false;
		}
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_5411))
		{
			return true;
		}
	}
	if (__LIB_4__::func_948(uParam0, 1))
	{
		return true;
	}
	vVar14 = { __LIB_1__::func_469(uParam0->f_607) };
	if (__LIB_0__::func_2() == 0)
	{
		STREAMING::REQUEST_MODEL(__LIB_4__::func_950(uParam0), false);
		if (!STREAMING::HAS_MODEL_LOADED(__LIB_4__::func_950(uParam0)))
		{
			return false;
		}
		if (__LIB_5__::func_50(&iVar17, __LIB_4__::func_950(uParam0), vVar14, 0f, 0, 0, 1, 1, 1))
		{
			NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(iVar17, true);
			iVar13 = NETWORK::NET_TO_PED(iVar17);
		}
	}
	else
	{
		if (((((uParam0->f_607 == 38 || uParam0->f_607 == 39) || uParam0->f_607 == 43) || uParam0->f_607 == 40) || uParam0->f_607 == 41) || uParam0->f_607 == 42)
		{
			__LIB_4__::func_945(uParam0, 1);
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
		if (__LIB_4__::func_948(uParam0, 262144))
		{
			Var18.f_2 = 1;
		}
		else if (__LIB_4__::func_948(uParam0, 32768))
		{
			Var18.f_2 = 0;
		}
		iVar29 = 0;
		iVar13 = func_898(&iVar29, &Var18);
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
			if (!__LIB_4__::func_948(uParam0, 16))
			{
				__LIB_4__::func_945(uParam0, 16);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar13))
	{
		uParam0->f_5411 = iVar13;
		uParam0->f_5412 = iVar13;
		__LIB_5__::func_255(uParam0, bParam1);
		if (!__LIB_4__::func_948(uParam0, 256))
		{
			if (!__LIB_4__::func_948(uParam0, 32768))
			{
				vVar14.x = uParam2;
				vVar14.f_1 = uParam3;
				vVar14.f_2 = uParam4;
				if ((!__LIB_0__::func_126(iVar13) || __LIB_0__::func_665(Global_35, iVar13, 1, 1) > 200f) && !__LIB_0__::func_86(vVar14))
				{
					if (!__LIB_0__::func_91())
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar13, false);
						func_904(iVar13, vVar14, fParam5, 2, 1073741824 /* Float: 2f */);
					}
				}
			}
		}
		else
		{
			Stack.Push(uParam0);
			Call_Loc(uParam0->f_10782);
		}
		return false;
	}
	return false;
}

void func_439(var uParam0)
{
	int iVar0;
	var uVar1;
	if (!__LIB_4__::func_948(uParam0, 32) && __LIB_4__::func_951(uParam0, 3))
	{
		if (__LIB_4__::func_544(uParam0->f_607, &iVar0, &uVar1))
		{
			CLOCK::SET_CLOCK_TIME(iVar0, 0, 0);
			__LIB_4__::func_945(uParam0, 32);
		}
	}
	if (!__LIB_4__::func_948(uParam0, 32))
	{
		if (func_906(&(uParam0->f_609), uParam0->f_607))
		{
			__LIB_4__::func_945(uParam0, 32);
		}
	}
}

void func_440(var uParam0)
{
	struct<4> Var0;
	if (!__LIB_4__::func_948(uParam0, 128))
	{
		if (__LIB_4__::func_948(uParam0, 16384))
		{
			__LIB_5__::func_284(uParam0);
			if (func_908(uParam0))
			{
				__LIB_5__::func_326(&(uParam0->f_10792));
				__LIB_4__::func_969(uParam0, 2097152);
				__LIB_4__::func_958(uParam0, 16384);
				__LIB_4__::func_945(uParam0, 128);
			}
			return;
		}
		if (__LIB_4__::func_951(uParam0, 1))
		{
			return;
		}
		if (__LIB_4__::func_948(uParam0, 64))
		{
			__LIB_5__::func_284(uParam0);
			MemCopy(&Var0, {__LIB_4__::func_681(__LIB_4__::func_941(uParam0))}, 4);
			if (func_910(uParam0, Var0))
			{
				if (__LIB_4__::func_962(uParam0) != 4)
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				__LIB_4__::func_945(uParam0, 128);
			}
		}
		else
		{
			if (__LIB_4__::func_962(uParam0) != 4)
			{
				CAM::DO_SCREEN_FADE_OUT(1);
			}
			__LIB_4__::func_945(uParam0, 128);
		}
	}
}

bool func_442(var uParam0)
{
	int iVar0;
	char[] cVar1[8];
	iVar0 = 1;
	if (!__LIB_8__::func_910(uParam0))
	{
		iVar0 = 0;
	}
	if (!func_437(uParam0, __LIB_4__::func_951(uParam0, 3), !__LIB_4__::func_937(uParam0, 2097152), uParam0->f_5410, !__LIB_4__::func_937(uParam0, 32), 0))
	{
		iVar0 = 0;
	}
	if (!func_438(uParam0, 1, uParam0->f_5413, uParam0->f_5413.f_1, uParam0->f_5413.f_2, uParam0->f_5416, 1, 1, 1))
	{
		iVar0 = 0;
	}
	if (!PED::_0x5E420FF293EE5472())
	{
		iVar0 = 0;
	}
	if (__LIB_4__::func_948(uParam0, 4) && !PED::_0x0EE3F0D7FECCC54F())
	{
		iVar0 = 0;
	}
	if (!__LIB_4__::func_505(&(uParam0->f_8269)))
	{
		MemCopy(&cVar1, {__LIB_4__::func_542(uParam0->f_607)}, 3);
		if (__LIB_5__::func_341(&(uParam0->f_8269), &cVar1, 0, 1, 1))
		{
		}
		else
		{
			iVar0 = 0;
		}
	}
	if (__LIB_4__::func_951(uParam0, 1))
	{
		if (!__LIB_2__::func_618(&(uParam0->f_13115)))
		{
			__LIB_8__::func_901(&(uParam0->f_13115), 0);
		}
		if (__LIB_5__::func_51(&(uParam0->f_13115)) < 30f)
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

bool func_444(var uParam0)
{
	bool bVar0;
	bVar0 = true;
	__LIB_9__::func_405(944);
	if (!func_917(uParam0))
	{
		bVar0 = false;
	}
	if (!func_918(uParam0))
	{
		bVar0 = false;
	}
	if (!func_919(uParam0, 26))
	{
		bVar0 = false;
	}
	else if (!func_920(uParam0))
	{
		bVar0 = false;
	}
	if (!func_921(uParam0))
	{
		bVar0 = false;
	}
	if (!func_922(uParam0))
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
		return false;
	}
	PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), joaat("WEAPON_UNARMED"), 0);
	WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
	func_923();
	func_924(uParam0);
	func_925(uParam0);
	__LIB_5__::func_550(uParam0, 141825);
	__LIB_5__::func_256(uParam0, 141980);
	__LIB_5__::func_257(uParam0, 143003);
	func_178(0);
	__LIB_9__::func_405(7);
	__LIB_9__::func_405(944);
	__LIB_9__::func_405(948);
	__LIB_9__::func_405(950);
	__LIB_9__::func_405(951);
	__LIB_9__::func_405(31);
	__LIB_9__::func_405(46);
	__LIB_9__::func_405(47);
	__LIB_9__::func_405(873);
	__LIB_9__::func_405(874);
	__LIB_3__::func_820(79, 1);
	__LIB_3__::func_820(74, 1);
	Global_1415419.f_9757 = -310375866;
	__LIB_1__::func_408(-9438024, 1, 0);
	if (__LIB_1__::func_185(5))
	{
		__LIB_8__::func_721(13, joaat("TSTAG_LOCKDOWN_SALOON"));
		__LIB_0__::func_804(-1329135070);
		__LIB_0__::func_804(-1763509974);
	}
	VEHICLE::DELETE_ALL_TRAINS();
	VEHICLE::SET_RANDOM_TRAINS(false);
	__LIB_1__::func_600(0);
	return true;
}

bool func_446(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	func_934(uParam0);
	__LIB_10__::func_929(uParam0);
	iVar0 = __LIB_4__::func_939(uParam0);
	iVar1 = __LIB_5__::func_475(uParam0);
	iVar2 = __LIB_5__::func_279(uParam0, iVar0);
	if (__LIB_4__::func_937(uParam0, 2097152))
	{
		if (iVar2 == 7 || iVar2 < 3)
		{
			func_908(uParam0);
		}
	}
	__LIB_11__::func_411(uParam0);
	__LIB_8__::func_801(uParam0);
	__LIB_5__::func_478(uParam0);
	__LIB_5__::func_479(uParam0);
	__LIB_5__::func_480(uParam0);
	__LIB_8__::func_768(uParam0);
	if (iVar2 != 5 && iVar2 != 6)
	{
		__LIB_5__::func_575(uParam0);
	}
	if ((__LIB_4__::func_939(uParam0) == 0 && iVar2 < 3) && __LIB_5__::func_253(uParam0) == 0)
	{
		func_440(uParam0);
	}
	if (__LIB_5__::func_331(uParam0, iVar0, 512))
	{
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	}
	func_74(uParam0);
	switch (iVar2)
	{
		case 0:
			if (__LIB_5__::func_481(uParam0, iVar0, 0))
			{
				if (__LIB_5__::func_285(uParam0, __LIB_4__::func_939(uParam0)) != -1 && PED::_0x62DE46F061CAA468() < __LIB_5__::func_285(uParam0, __LIB_4__::func_939(uParam0)))
				{
					PED::_0xF008E0BA1FE1D644((__LIB_5__::func_285(uParam0, __LIB_4__::func_939(uParam0)) - PED::_0x62DE46F061CAA468()));
				}
				if ((__LIB_4__::func_939(uParam0) == 25 || __LIB_4__::func_939(uParam0) == 26) && __LIB_0__::func_13(32768))
				{
					__LIB_5__::func_33(uParam0, 524288);
				}
				if (__LIB_4__::func_948(uParam0, 4))
				{
					if (!__LIB_4__::func_937(uParam0, 4))
					{
						__LIB_0__::func_16(uParam0, iVar0);
						__LIB_4__::func_944(uParam0, 4);
					}
					__LIB_8__::func_893(uParam0);
					__LIB_5__::func_286(uParam0, iVar0, 1);
				}
				else
				{
					__LIB_5__::func_286(uParam0, iVar0, 1);
				}
			}
			break;
		case 1:
			if (__LIB_8__::func_910(uParam0))
			{
				if (__LIB_11__::func_782(uParam0))
				{
					if (__LIB_4__::func_937(uParam0, 4))
					{
						__LIB_4__::func_969(uParam0, 4);
					}
					__LIB_5__::func_286(uParam0, iVar0, 2);
				}
			}
			else if (__LIB_8__::func_861(uParam0) >= uParam0->f_13144)
			{
				if (__LIB_4__::func_937(uParam0, 4))
				{
					__LIB_4__::func_969(uParam0, 4);
				}
				__LIB_5__::func_286(uParam0, iVar0, 2);
			}
			break;
		case 2:
			if (__LIB_5__::func_481(uParam0, iVar0, 2))
			{
				if (!__LIB_5__::func_258(uParam0))
				{
					__LIB_5__::func_286(uParam0, iVar0, 4);
					if (func_951(uParam0, iVar0, iVar1))
					{
						__LIB_5__::func_286(uParam0, iVar0, 5);
					}
				}
				else
				{
					__LIB_5__::func_482(uParam0);
					__LIB_5__::func_286(uParam0, iVar0, 3);
					if (func_953(uParam0, iVar0))
					{
						__LIB_5__::func_286(uParam0, iVar0, 4);
						if (func_951(uParam0, iVar0, iVar1))
						{
							__LIB_5__::func_286(uParam0, iVar0, 5);
						}
					}
				}
			}
			else if (__LIB_5__::func_52(uParam0))
			{
				func_953(uParam0, iVar0);
			}
			break;
		case 3:
			if (func_953(uParam0, iVar0))
			{
				__LIB_5__::func_286(uParam0, iVar0, 4);
				if (func_951(uParam0, iVar0, iVar1))
				{
					__LIB_5__::func_286(uParam0, iVar0, 5);
				}
			}
			break;
		case 4:
			if (func_951(uParam0, iVar0, iVar1))
			{
				__LIB_5__::func_286(uParam0, iVar0, 5);
			}
			break;
		case 5:
			if (!__LIB_0__::func_2() == 0)
			{
				__LIB_5__::func_288(uParam0);
				__LIB_19__::func_457(uParam0, iVar0);
				__LIB_5__::func_289(uParam0);
				__LIB_18__::func_338(uParam0);
				if (__LIB_5__::func_331(uParam0, iVar1, 2))
				{
					if (__LIB_5__::func_483(uParam0, iVar1))
					{
						__LIB_11__::func_786(uParam0, iVar1);
					}
				}
			}
			if (__LIB_5__::func_481(uParam0, iVar0, 5))
			{
				if (__LIB_5__::func_481(uParam0, iVar0, 7))
				{
					if (!__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 67108864))
					{
						__LIB_8__::func_905(uParam0, __LIB_4__::func_939(uParam0));
					}
					__LIB_11__::func_783(uParam0, iVar1);
					__LIB_10__::func_929(uParam0);
					return true;
				}
				else
				{
					__LIB_5__::func_286(uParam0, iVar0, 7);
				}
			}
			else
			{
				if (!__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 4194304))
				{
					if ((!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN()) && !__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 16))
					{
						CAM::DO_SCREEN_FADE_IN(0);
						__LIB_1__::func_164(0);
					}
					__LIB_5__::func_334(uParam0, __LIB_4__::func_939(uParam0), 4194304);
				}
				if ((__LIB_1__::func_394(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1) && !__LIB_4__::func_948(uParam0, 8192)) && !__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 8))
				{
					__LIB_5__::func_20(1, 0);
					__LIB_1__::func_422("MISSION_WANTED", 7500, 0, 1, 0, 0, -1, -1, 0);
					if (__LIB_0__::func_0(uParam0))
					{
						__LIB_5__::func_286(uParam0, iVar0, 6);
					}
				}
				if (__LIB_4__::func_937(uParam0, 268435456))
				{
					if (MISC::_0x1B065A2BF7953815(1) != 1)
					{
						__LIB_11__::func_427(uParam0, func_34(iVar0), func_34(iVar1), iVar0, iVar1);
						__LIB_4__::func_969(uParam0, 268435456);
					}
				}
				if (__LIB_4__::func_948(uParam0, 1048576))
				{
					if (func_127(func_34(0)))
					{
						__LIB_4__::func_958(uParam0, 1048576);
					}
				}
			}
			break;
		case 6:
			if (!__LIB_0__::func_2() == 0)
			{
				__LIB_5__::func_288(uParam0);
				__LIB_19__::func_457(uParam0, iVar0);
				__LIB_5__::func_289(uParam0);
				__LIB_18__::func_338(uParam0);
				if (__LIB_5__::func_331(uParam0, __LIB_5__::func_475(uParam0), 2))
				{
					if (__LIB_5__::func_483(uParam0, __LIB_5__::func_475(uParam0)))
					{
						__LIB_11__::func_786(uParam0, __LIB_5__::func_475(uParam0));
					}
				}
			}
			if ((!__LIB_1__::func_394(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1) || __LIB_4__::func_948(uParam0, 8192)) || __LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 8))
			{
				if (__LIB_5__::func_481(uParam0, iVar0, 5))
				{
					if (__LIB_0__::func_0(uParam0))
					{
						__LIB_5__::func_286(uParam0, iVar0, 7);
					}
				}
				else
				{
					__LIB_0__::func_0(uParam0);
					__LIB_5__::func_286(uParam0, iVar0, 5);
				}
			}
			else
			{
				__LIB_5__::func_481(uParam0, iVar0, 5);
				__LIB_0__::func_16(uParam0);
			}
			break;
		case 7:
			if (__LIB_5__::func_481(uParam0, iVar0, 7))
			{
				if (!__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 67108864))
				{
					__LIB_8__::func_905(uParam0, __LIB_4__::func_939(uParam0));
				}
				__LIB_11__::func_783(uParam0, iVar1);
				__LIB_10__::func_929(uParam0);
				return true;
			}
			break;
		default:
			__LIB_5__::func_286(uParam0, iVar0, 7);
			break;
	}
	return false;
}

char* func_447(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MUD3_CMON";
		case 1:
			return "MUD3_SETOFF_YM2";
		case 2:
			return "MUD3_SETOFF_NM2";
		case 4:
			return "MUD3_GO_RIGHT";
		case 5:
			return "MUD3_NOTHELP1";
		case 6:
			return "MUD3_NOTHELP2";
		case 7:
			return "MUD3_NOTHELP3";
		case 8:
			return "MUD3_CANWEGO";
		case 9:
			return "MUD3_GIRLSBANT1";
		case 12:
			return "MUD3_GIRLSBANT2";
		case 11:
			return "MUD3_BOUNTY";
		case 13:
			return "MUD3_PARKWAGON";
		case 14:
			return "MUD3_FOLLOWUNC";
		case 15:
			return "MUD3_UENTER_STR";
		case 16:
			return "MUD3_STORE_MORN";
		case 17:
			return "MUD3_STORE_AFTN";
		case 18:
			return "MUD3_STORE_EVEN";
		case 19:
			return "MUD3_STORE_YMD2";
		case 20:
			return "MUD3_STORE_NMD2";
		case 21:
			return "MUD3_SHOP_WELC";
		case 22:
			return "MUD3_SHOP_WHISK";
		case 23:
			return "MUD3_SHOP_MUD2";
		case 24:
			return "MUD3_FIND_WHISK";
		case 25:
			return "MUD3_BUY_THING";
		case 26:
			return "MUD3_UNC_CIGARS";
		case 28:
			return "MUD3_O_BOUGHT";
		case 27:
			return "MUD3_BOUGHT";
		case 29:
			return "MUD3_ARTHUR_PAY";
		case 30:
			return "MUD3_SHOP_BYE";
		case 31:
			return "MUD3_SHOP_BYE_M";
		case 32:
			return "MUD3_NOT_TO_TIL";
		case 33:
			return "MUD3_FOLW_FOREM";
		case 34:
			return "MUD3_HOTEL_DWD1";
		case 35:
			return "MUD3_HOTEL_DWD2";
		case 36:
			return "MUD3_HOT_GREET";
		case 37:
			return "MUD3_HOT_WAIT";
		case 38:
			return "MUD3_CLERK_2B";
		case 39:
			return "MUD3_HOT_DAWDLE";
		case 40:
			return "MUD3_DOWNSTAIR1";
		case 41:
			return "MUD3_DOWNSTAIR2";
		case 42:
			return "MUD3_DONTBOTHER";
		case 43:
			return "MUD3_UPSTAIRS";
		case 44:
			return "MUD3_KARENFIGHT";
		case 45:
			return "MUD3_ARTHFIGHT1";
		case 46:
			return "MUD3_ARTHFIGHT2";
		case 47:
			return "MUD3_HOT_NOGUN";
		case 48:
			return "MUD3_HOT_GUN";
		case 49:
			return "MUD3_EXIT_FIRST";
		case 50:
			return "MUD3_MY_HORSE";
		case 51:
			return "MUD3_STARTCHASE";
		case 52:
			return "MUD3_JIMMYCHASE";
		case 53:
			return "MUD3_SHOOTCHASE";
		case 54:
			return "MUD3_ARTHCHASE";
		case 55:
			return "MUD3_GRIEFJIMMY";
		case 56:
			return "MUD3_RET_HORSE";
		case 57:
			return "MUD3_NO_HORSE_0";
		case 58:
			return "MUD3_NO_HORSE_1";
		case 59:
			return "MUD3_NO_HORSE_2";
		case 60:
			return "MUD3_SILLYNAG";
		case 61:
			return "MUD3_CALLHELP";
		case 62:
			return "MUD3_HELPARTH";
		case 63:
			return "MUD3_AFTERYOU";
		case 64:
			return "MUD3_RE_YOUOK";
		case 65:
			return "MUD3_K_CHEER";
		case 66:
			return "MUD3_T_CHEER";
		case 67:
			return "MUD3_MB_CHEER";
		case 68:
			return "MUD3_HOTELROOM";
		case 69:
			return "MUD3_SHOOTCHASE";
		case 10:
			return "MUD3_GO_LEFT";
		case 70:
			return "MUD3_IG7_FALL";
		case 3:
			return "MUD3_IG23";
		case 71:
			return "MUD3_RE_INITIAL";
		case 72:
			return "MUD3_RE_WOAH";
		case 73:
			return "MUD3_RE_HELP_2";
		case 74:
			return "MUD3_RE_YES";
		case 75:
			return "MUD3_RE_NO";
		case 76:
			return "MUD3_NO_MONEY";
		case 77:
			return "MUD3_GOT_HORSE";
		case 78:
			return "MUD3_O_HEALTH";
		case 79:
			return "MUD3_O_STAMINA";
		case 80:
			return "MUD3_O_DEADEYE";
		case 81:
			return "MUD3_O_TREAT";
		case 82:
			return "MUD3_RE_HELP_3";
		case 83:
			return "MUD3_RE_OFF";
		case 84:
			return "MUD3_RE_Y_WAIT";
		case 85:
			return "MUD3_RE_N_WAIT";
		case 86:
			return "MUD3_RE_ATTACK";
		case 87:
			return "MUD3_RE_TILLY_Y";
		case 88:
			return "MUD3_RE_TILLY_N";
		case 89:
			return "MUD3_RE_TILLY_T";
		case 90:
			return "MUD3_RE_LUM";
		case 91:
			return "MUD3_TILLY_WAIT";
		case 92:
			return "MUD3_TILLY_MORE";
	}
	return "";
}

void func_451(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (func_972(iParam0) != 9)
	{
		return;
	}
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 >= 32)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 >= 4)
	{
		return;
	}
	iVar2 = __LIB_0__::func_771(iVar0);
	__LIB_0__::func_516(&(Local_1179.f_5[iVar1]), iVar2);
}

void func_452(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 >= 32)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 >= 4)
	{
		return;
	}
	iVar2 = __LIB_0__::func_771(iVar0);
	__LIB_1__::func_336(&(Local_1179[iVar1]), iVar2);
}

void func_456(int iParam0)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1193[iParam0 /*6*/]))
	{
		if (ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(Local_1193[iParam0 /*6*/]))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(Local_1193[iParam0 /*6*/]);
		}
	}
}

void func_458(var uParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return;
	}
	if (!__LIB_0__::func_27(*iParam1, 16384))
	{
		return;
	}
	AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(*uParam0, 0f);
	__LIB_1__::func_681(iParam1, 16384);
}

void func_460(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam2))
	{
		__LIB_1__::func_480(iParam2);
	}
	if (bParam3)
	{
		__LIB_13__::func_538(iParam0, uParam1);
	}
	else
	{
		__LIB_2__::func_624(uParam1, 1, 1, 1, 0);
	}
}

void func_463(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	if (ENTITY::DOES_ENTITY_EXIST(Local_193[iVar0 /*6*/]))
	{
		if (ENTITY::_IS_ENTITY_FROZEN(Local_193[iVar0 /*6*/]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(Local_193[iVar0 /*6*/], false);
		}
		if (PED::_0x5102307CE88798EB(Local_193[iVar0 /*6*/]))
		{
			PED::_0x3088634CF8C819CF(Local_193[iVar0 /*6*/]);
		}
	}
	if (iVar0 == 12)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_193[iVar0 /*6*/]))
		{
			if (PED::_HAS_PED_EMOTIONAL_PRESET_LOADED(Local_193[iVar0 /*6*/], "Default_Angry"))
			{
				PED::_REMOVE_PED_EMOTIONAL_PRESET(Local_193[iVar0 /*6*/], "Default_Angry");
			}
		}
	}
	if (iVar0 == 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_193[iVar0 /*6*/]))
		{
			if (PED::_HAS_PED_EMOTIONAL_PRESET_LOADED(Local_193[iVar0 /*6*/], "Default_Nervous"))
			{
				PED::_REMOVE_PED_EMOTIONAL_PRESET(Local_193[iVar0 /*6*/], "Default_Nervous");
			}
		}
	}
	if (iVar0 == 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_193[iVar0 /*6*/]))
		{
			if (__LIB_0__::func_27(Local_193[iVar0 /*6*/].f_4, 2048))
			{
				PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "FOREMAN_LEFT");
				__LIB_1__::func_681(&(Local_193[iVar0 /*6*/].f_4), 2048);
			}
			if (__LIB_0__::func_27(Local_193[iVar0 /*6*/].f_4, 4096))
			{
				PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "FOREMAN_RIGHT");
				__LIB_1__::func_681(&(Local_193[iVar0 /*6*/].f_4), 4096);
			}
		}
	}
	if (iVar0 == 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_193[iVar0 /*6*/]))
		{
			if (__LIB_0__::func_27(Local_193[iVar0 /*6*/].f_4, 4096))
			{
				PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "WITNESS_CLIFF");
				__LIB_1__::func_681(&(Local_193[iVar0 /*6*/].f_4), 4096);
			}
		}
	}
	if (iVar0 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_193[iVar0 /*6*/]))
		{
			PED::SET_PED_CONFIG_FLAG(Local_193[iVar0 /*6*/], 170, false);
		}
	}
	if (!__LIB_0__::func_27(Local_193[iVar0 /*6*/].f_4, 256))
	{
		if (iVar0 == 9 || iVar0 == 10)
		{
			__LIB_2__::func_426(&(Local_193[iVar0 /*6*/]));
		}
		else
		{
			__LIB_2__::func_788(&(Local_193[iVar0 /*6*/]), 1, 1, 1);
		}
	}
	__LIB_0__::func_325(&(Local_193[iVar0 /*6*/].f_1));
}

void func_465()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!__LIB_0__::func_272(Local_589[iVar0 /*9*/], 0))
		{
		}
		else
		{
			MISC::_0xE98D55C5983F2509(Local_589[iVar0 /*9*/]);
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(Local_589[iVar0 /*9*/]) || !ENTITY::_0x88AD6CC10D8D35B2(Local_589[iVar0 /*9*/]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_589[iVar0 /*9*/], true, true);
			}
			__LIB_7__::func_345(Local_589[iVar0 /*9*/], 0);
			__LIB_2__::func_426(&(Local_589[iVar0 /*9*/]));
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_142))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_142);
	}
	func_460(&iLocal_832, &Local_797, &(Local_193[11 /*6*/]), 1);
	func_463(11);
	func_456(10);
	func_456(7);
	func_163(3, 0, 0);
}

void func_466(int* iParam0, bool bParam1)
{
	if (__LIB_0__::func_27(iParam0->f_5, 4))
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_1))
	{
		if (bParam1)
		{
			__LIB_2__::func_426(&(iParam0->f_1));
		}
		else
		{
			__LIB_2__::func_788(&(iParam0->f_1), 1, 1, 1);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (bParam1)
		{
			VEHICLE::DELETE_VEHICLE(iParam0);
		}
		else
		{
			__LIB_10__::func_284(iParam0);
		}
	}
	__LIB_1__::func_683(&(iParam0->f_5), 4);
}

void func_468(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (iParam1 == 1)
	{
		if (bParam4)
		{
			if (PATHFIND::_0x19C7567D2F2287D6(*uParam0, 16))
			{
				uParam0->f_3 = 1;
			}
		}
		if (bParam5)
		{
			PATHFIND::_0xC1799FAFD2FDF52B(*uParam0, 0, 0, 0);
			uParam0->f_4 = 1;
		}
		uParam0->f_1 = __LIB_18__::func_397(*uParam0, bParam3, bParam6);
	}
	else
	{
		if (VOLUME::_DOES_VOLUME_EXIST(*uParam0))
		{
			if (uParam0->f_3)
			{
				PATHFIND::_0x2C87C3E1C7B96EE2(*uParam0);
			}
			if (uParam0->f_4)
			{
				PATHFIND::_0xD17672447692478E(*uParam0, 0);
			}
		}
		__LIB_0__::func_484(&(uParam0->f_1), *uParam0, 0);
	}
}

void func_474()
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_1309.f_17))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1309.f_17, Local_1309.f_6, Local_1309.f_7, 1))
		{
			ENTITY::STOP_ENTITY_ANIM(Local_1309.f_17, Local_1309.f_6, Local_1309.f_7, -1000f);
		}
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1309.f_17, Local_1309.f_6, Local_1309.f_8, 1))
		{
			ENTITY::STOP_ENTITY_ANIM(Local_1309.f_17, Local_1309.f_6, Local_1309.f_8, -1000f);
		}
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1309.f_17, Local_1309.f_6, Local_1309.f_9, 1))
		{
			ENTITY::STOP_ENTITY_ANIM(Local_1309.f_17, Local_1309.f_6, Local_1309.f_9, -1000f);
		}
	}
	if (Local_1309.f_16)
	{
		if (STREAMING::HAS_ANIM_DICT_LOADED(Local_1309.f_6))
		{
			STREAMING::REMOVE_ANIM_DICT(Local_1309.f_6);
		}
		Local_1309.f_16 = 0;
	}
	if (Local_1309.f_18 != 0)
	{
		ENTITY::_0xD2B9C78537ED5759(Local_1309.f_18);
	}
}

void func_476(int iParam0)
{
	OBJECT::_0x0C0A373D181BF900(iParam0);
	__LIB_1__::func_941(iParam0);
}

int func_492(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	if (!__LIB_1__::func_918(iParam0))
	{
		return 0;
	}
	if (__LIB_0__::func_144(iParam1, 0))
	{
		iVar0 = 0;
		bVar1 = false;
		iVar2 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (bParam2)
			{
				if (Global_1914319.f_3[iParam0 /*446*/].f_417[iVar0] == iParam1)
				{
					return 0;
				}
				else if (Global_1914319.f_3[iParam0 /*446*/].f_417[iVar0] == 0 && iVar2 == -1)
				{
					iVar2 = iVar0;
				}
			}
			else
			{
				if (!bVar1 && Global_1914319.f_3[iParam0 /*446*/].f_417[iVar0] == iParam1)
				{
					bVar1 = true;
				}
				if (bVar1 && Global_1914319.f_3[iParam0 /*446*/].f_417[iVar0] != 0)
				{
					if (iVar0 < 19)
					{
						Global_1914319.f_3[iParam0 /*446*/].f_417[iVar0] = Global_1914319.f_3[iParam0 /*446*/].f_417[iVar0 + 1];
					}
					else
					{
						Global_1914319.f_3[iParam0 /*446*/].f_417[iVar0] = 0;
					}
				}
			}
			iVar0++;
		}
		if (bParam2 && iVar2 != -1)
		{
			Global_1914319.f_3[iParam0 /*446*/].f_417[iVar2] = iParam1;
			INVENTORY::_0x9B4E793B1CB6550A();
			return 1;
		}
		else if (!bParam2 && bVar1)
		{
			INVENTORY::_0x9B4E793B1CB6550A();
			return 1;
		}
	}
	return 0;
}

bool func_493(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	int iVar1;
	if (bParam1)
	{
		bVar0 = false;
		iVar1 = __LIB_0__::func_271(iParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (ENTITY::IS_ENTITY_ON_SCREEN(iVar1) && !ENTITY::IS_ENTITY_OCCLUDED(iVar1))
			{
				bVar0 = true;
			}
		}
		if (!bVar0 || bParam2)
		{
			__LIB_6__::func_888(iParam0);
			__LIB_1__::func_197(iParam0, 0, 0, 1, 0);
			return true;
		}
	}
	else
	{
		__LIB_0__::func_893(iParam0);
	}
	return false;
}

struct<4> func_519(int iParam0, int iParam1)
{
	struct<4> Var0;
	Var0 = { func_1029(iParam0, iParam1) };
	Var0.f_3 = func_1030(iParam0, iParam1);
	return Var0;
}

void func_670(int iParam0)
{
	if (__LIB_0__::func_192(iParam0, 943695443))
	{
		func_1177(0, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -2096528786))
	{
		func_1177(1, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -1094167013))
	{
		func_1177(2, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1936654645))
	{
		func_1177(3, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1306489306))
	{
		func_1177(4, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 435762317))
	{
		func_1177(5, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1259363210))
	{
		func_1177(6, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 881398259))
	{
		func_1177(7, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -541549214))
	{
		func_1177(8, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 130796156))
	{
		func_1177(-1, iParam0);
	}
}

void func_683()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_1190(0);
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
	func_1190(1);
}

void func_684()
{
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_328(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_685()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_1193(0);
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
	func_1193(1);
}

void func_686()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_2__::func_522(15000, 0, 0, 0, 1);
			func_1193(0);
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
	func_1193(1);
}

void func_687()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_328(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_328(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_690(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_690(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
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

int func_690(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			func_690(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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

int func_730(var uParam0, int iParam1, int iParam2, int iParam3)
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
	iVar11 = (func_1238(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_952(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_328(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	__LIB_2__::func_522(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

int func_770(var uParam0)
{
	func_1266(uParam0);
	if (!__LIB_11__::func_762(uParam0))
	{
		func_1268(uParam0);
	}
	if (__LIB_11__::func_762(uParam0))
	{
		func_398(67);
	}
	__LIB_6__::func_158(1, 1, iLocal_148[33]);
	return 1;
}

int func_771(var uParam0)
{
	func_925(uParam0);
	__LIB_10__::func_702(13, joaat("TSTAG_VAL_MUD3_ACTIVE_RIDE_TO_VAL"), 1, 977356591, -1);
	if (!__LIB_11__::func_762(uParam0))
	{
		func_1270(uParam0);
	}
	__LIB_0__::func_401(-1559012672);
	func_1272(uParam0, 1);
	return 1;
}

int func_772(var uParam0)
{
	if (!func_167(76))
	{
		func_1273();
	}
	if (!func_919(uParam0, 26))
	{
		return 0;
	}
	__LIB_4__::func_185(&Global_35, &Local_579, -1, 1);
	__LIB_4__::func_185(&(Local_193[0 /*6*/]), &Local_579, 0, 1);
	__LIB_4__::func_185(&(Local_193[1 /*6*/]), &Local_579, 1, 1);
	__LIB_4__::func_185(&(Local_193[2 /*6*/]), &Local_579, 4, 1);
	__LIB_4__::func_185(&(Local_193[3 /*6*/]), &Local_579, 5, 1);
	func_1275(&(Local_193[0 /*6*/]), 1, 0);
	func_1276(&(Local_193[1 /*6*/]), 1, 0);
	func_1277(&(Local_193[2 /*6*/]), 1, 0);
	func_1278(&(Local_193[3 /*6*/]), 1, 0);
	AITRANSPORT::_0xBA8818212633500A(Local_579, 7, 1);
	VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_579, true);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_579, 1);
	VEHICLE::_0x63DC1F22C903B709(Local_579, false);
	func_1279(uParam0, 0, 0);
	__LIB_9__::func_951(74, 1, 1);
	func_180(74, 1);
	__LIB_0__::func_489(2.2674f, -13.6327f);
	func_398(61);
	return 1;
}

int func_773(var uParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	func_1280(uParam0);
	func_1281(uParam0);
	func_1282();
	func_1283();
	func_1284(uParam0);
	if (func_167(38))
	{
		if (!func_167(39))
		{
			__LIB_9__::func_101(uParam0, joaat("MUD3_RETURNHORSE"));
			func_398(39);
		}
	}
	switch (iLocal_1336)
	{
		case 0:
			if (__LIB_0__::func_266(Local_579, func_1286(1, 7), 60f, 1, 1) || func_167(31))
			{
				func_1288(uParam0, 16);
				func_1288(uParam0, 17);
			}
			if (__LIB_0__::func_266(Local_579, func_1286(1, 7), 5f, 1, 1) || func_167(31))
			{
				func_168(61);
				func_1289(1);
				func_398(31);
				if (!VEHICLE::_0x404527BC03DA0E6C(Local_579))
				{
					VEHICLE::BRING_VEHICLE_TO_HALT(Local_579, 3f, -1, false);
				}
				if (VEHICLE::IS_VEHICLE_STOPPED(Local_579))
				{
					func_1279(uParam0, 1, 0);
				}
				else
				{
					Jump @569; //curOff = 239
					if (iLocal_63 == 4 || iLocal_63 == 5)
					{
						if (__LIB_0__::func_48(Local_579, iLocal_142, 10f, 1))
						{
							func_1290(3f);
						}
						else if (__LIB_0__::func_48(Local_579, iLocal_142, 25f, 1))
						{
							func_1290(4f);
						}
					}
					else if (iLocal_577 == 4 || iLocal_577 == 3)
					{
						if (func_167(70))
						{
							if (__LIB_0__::func_48(Local_579, iLocal_142, 15f, 1))
							{
								func_1290(4f);
							}
							else if (__LIB_0__::func_48(Local_579, iLocal_142, 30f, 1))
							{
								func_1290(6f);
							}
						}
					}
					else if (__LIB_1__::func_205(Global_35, iLocal_148[25], 1, 0))
					{
						func_1290(3f);
					}
					else if (__LIB_0__::func_266(Local_579, -306.5693f, 789.3036f, 116.7677f, 60f, 1, 1))
					{
						func_1290(5f);
					}
					else if (__LIB_0__::func_266(Local_579, -280.2921f, 719.0242f, 113.3706f, 150f, 1, 1))
					{
						func_1290(7f);
						func_1292(uParam0, 3);
						if (func_427(uParam0) == 0)
						{
							return 1;
						}
						if (VOLUME::_DOES_VOLUME_EXIST(Local_284[20 /*5*/]))
						{
							func_468(&(Local_284[20 /*5*/]), 0, 0, 0, 0, 0, 0);
							__LIB_0__::func_172(Local_284[20 /*5*/]);
						}
					}
					else
					{
						func_1290(12f);
					}
					if (__LIB_0__::func_266(Local_579, func_1286(1, 7), 36f, 1, 1))
					{
						func_1293(13, 0);
						func_1294(20);
					}
					if (!__LIB_1__::func_185(5))
					{
						func_452(0);
					}
					if (func_1293(0, 0) == 3)
					{
						if (__LIB_1__::func_185(5))
						{
							func_1293(1, 0);
						}
						else
						{
							func_1293(2, 0);
						}
					}
					vVar0 = { -124.3212f, 149.4006f, 91.0607f };
					vVar3 = { -100.84f, 226.47f, 98.95f };
					if (__LIB_2__::func_431(Local_579, vVar3, 1f) == 2)
					{
						if (__LIB_0__::func_266(Local_579, vVar0, 22.5f, 1, 1))
						{
							func_1293(4, 0);
						}
					}
					vVar0 = { -262.54f, 793.11f, 117.62f };
					vVar6 = { -276.37f, 792.27f, 117.67f };
					if (__LIB_2__::func_431(Local_579, vVar6, 1f) == 3)
					{
						if (__LIB_0__::func_266(Local_579, vVar0, 24.5f, 1, 1))
						{
							if (!func_1296(4, 98, ENTITY::GET_ENTITY_COORDS(Local_579, true, false)))
							{
								if (!func_1297(9, 1))
								{
									func_1293(10, 0);
								}
							}
							else
							{
								func_452(10);
							}
						}
					}
					if (__LIB_1__::func_185(7) && __LIB_1__::func_187(14))
					{
					}
					else
					{
						vVar9 = { -270.78f, 799.77f, 118.07f };
						if (__LIB_0__::func_266(Local_579, vVar9, 24f, 1, 1) && __LIB_2__::func_431(Local_579, vVar9, 1f) == 2)
						{
							func_1293(11, 0);
						}
					}
					if (func_167(16) && Local_589[0 /*9*/].f_8 == 4)
					{
						if (!__LIB_2__::func_618(&uLocal_477))
						{
							__LIB_5__::func_107(&uLocal_477);
						}
						if (__LIB_14__::func_171(&uLocal_477) > 2000)
						{
							func_1300(7, 0, 0, 0, 0, 0);
						}
					}
					func_1301();
					func_1302();
					func_1303();
					func_1304(uParam0);
					Jump @1046; //curOff = 1033
					return 1;
				}
				return 0;
			}
			default:
				break;
	}
}

int func_774(var uParam0)
{
	func_1305(3);
	__LIB_0__::func_400(-1559012672);
	__LIB_6__::func_158(0, 0, 0);
	return 1;
}

int func_776(var uParam0)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(Local_284[20 /*5*/]))
	{
		Local_284[20 /*5*/] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-164.9052f, 598.9802f, 114.4176f, 0f, 0f, 51.06323f, 12.42796f, 21.30275f, 6.790426f, "Checkpoint");
		func_468(&(Local_284[20 /*5*/]), 1, 1, 1, 0, 1, 0);
	}
	func_1266(uParam0);
	func_1310();
	__LIB_4__::func_185(&Global_35, &Local_579, -1, 1);
	__LIB_4__::func_185(&(Local_193[0 /*6*/]), &Local_579, 0, 1);
	__LIB_4__::func_185(&(Local_193[1 /*6*/]), &Local_579, 1, 1);
	__LIB_4__::func_185(&(Local_193[2 /*6*/]), &Local_579, 4, 1);
	__LIB_4__::func_185(&(Local_193[3 /*6*/]), &Local_579, 5, 1);
	AITRANSPORT::_0xBA8818212633500A(Local_579, 7, 1);
	VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_579, true);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_579, 1);
	VEHICLE::_0x63DC1F22C903B709(Local_579, false);
	func_452(0);
	func_452(1);
	func_452(2);
	func_452(4);
	func_1294(14);
	func_1311(12, 0);
	func_1305(3);
	return 1;
}

int func_777(var uParam0)
{
	func_925(uParam0);
	__LIB_10__::func_702(13, joaat("TSTAG_VAL_MUD3_ACTIVE_RIDE_TO_VAL"), 1, 977356591, -1);
	func_1272(uParam0, 1);
	return 1;
}

int func_778(var uParam0)
{
	if (!func_919(uParam0, 26))
	{
		return 0;
	}
	if (iLocal_1336 == 2)
	{
		func_1279(uParam0, 0, 0);
	}
	func_1275(&(Local_193[0 /*6*/]), 2, 0);
	func_1276(&(Local_193[1 /*6*/]), 1, 0);
	func_1277(&(Local_193[2 /*6*/]), 1, 0);
	func_1278(&(Local_193[3 /*6*/]), 1, 0);
	__LIB_9__::func_951(74, 1, 1);
	func_180(74, 1);
	func_398(61);
	return 1;
}

int func_779(var uParam0)
{
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	func_919(uParam0, 2);
	func_1312();
	return func_773(uParam0);
}

int func_780(var uParam0)
{
	if (func_167(24))
	{
		AUDIO::SET_AUDIO_FLAG("OpenWorldMusicOnMission", false);
		func_168(24);
	}
	func_1305(3);
	func_1279(uParam0, 1, 1);
	func_168(61);
	func_458(&(Local_193[1 /*6*/]), &(Local_193[1 /*6*/].f_4));
	func_458(&(Local_193[3 /*6*/]), &(Local_193[3 /*6*/].f_4));
	func_458(&(Local_193[2 /*6*/]), &(Local_193[2 /*6*/].f_4));
	func_163(9, 0, 0);
	func_163(12, 0, 0);
	func_163(11, 0, 0);
	func_163(13, 0, 0);
	func_181();
	func_465();
	func_1294(20);
	return 1;
}

int func_781(var uParam0)
{
	__LIB_4__::func_185(&Global_35, &Local_579, -1, 1);
	__LIB_4__::func_185(&(Local_193[0 /*6*/]), &Local_579, 0, 1);
	__LIB_4__::func_185(&(Local_193[1 /*6*/]), &Local_579, 1, 1);
	__LIB_4__::func_185(&(Local_193[2 /*6*/]), &Local_579, 4, 1);
	__LIB_4__::func_185(&(Local_193[3 /*6*/]), &Local_579, 5, 1);
	func_1310();
	func_1266(uParam0);
	PED::CLEAR_PED_ENV_DIRT(Global_35);
	return 1;
}

int func_782(var uParam0)
{
	__LIB_10__::func_702(13, joaat("TSTAG_VAL_MUD3_ACTIVE_GO_TO_STORE"), 1, 977356591, -1);
	func_1272(uParam0, 1);
	__LIB_11__::func_395(74, 1073741824 /* Float: 2f */);
	return 1;
}

int func_783(var uParam0)
{
	if (!func_919(uParam0, 26))
	{
		return 0;
	}
	VEHICLE::_0x1FF00DB43026B12F();
	if (!__LIB_4__::func_937(uParam0, 8))
	{
		__LIB_0__::func_489(-2.643f, -12.3776f);
	}
	func_1314(uParam0, 0);
	__LIB_9__::func_951(74, 1, 1);
	func_180(74, 1);
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_148[29]))
	{
		iLocal_148[29] = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), -319.8519f, 797.2034f, 117.9933f, 0f, 0f, 10.11421f, 1f, 1.207156f, 1.254705f);
	}
	func_456(9);
	func_456(8);
	func_456(11);
	func_456(12);
	return 1;
}

int func_784(var uParam0)
{
	float fVar0;
	vector3 vVar1;
	func_919(uParam0, 3);
	func_1315();
	if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_148[11], true, 0))
	{
		__LIB_11__::func_423(uParam0, "MUD3_F_SALOON", "", 1, 0);
		return 0;
	}
	fVar0 = 1.5f;
	if (iLocal_1356 >= 0 && iLocal_1356 <= 7)
	{
		vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_579, 0f, -2.4f, 0f) };
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_148[34]))
		{
			iLocal_148[34] = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), vVar1, 0f, 0f, 0f, 1.5f, 1.5f, 1.5f);
		}
		fVar0 = 1f;
	}
	__LIB_3__::func_815(0, fVar0);
	if (iLocal_1356 == 0 || iLocal_1356 == 1)
	{
		VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_579, 0f);
		if (!VEHICLE::IS_VEHICLE_STOPPED(Local_579))
		{
			if (!VEHICLE::_0x404527BC03DA0E6C(Local_579))
			{
				VEHICLE::BRING_VEHICLE_TO_HALT(Local_579, 1f, -1, false);
			}
		}
	}
	switch (iLocal_1356)
	{
		case 0:
			func_1318(82, 1);
			if (func_1319(16))
			{
				func_1314(uParam0, 1);
			}
			else
			{
				Jump @809; //curOff = 318
				if (func_1320(16, 1))
				{
					func_1314(uParam0, 2);
				}
				else
				{
					if (func_1321(16, "CS_Uncle", 1))
					{
						func_1275(&(Local_193[0 /*6*/]), 4, 0);
					}
					if (func_1321(16, "CS_Karen", 1))
					{
						func_1276(&(Local_193[1 /*6*/]), 5, 0);
					}
					if (func_1321(16, "CS_Tilly", 1))
					{
						func_1278(&(Local_193[3 /*6*/]), 7, 0);
					}
					if (func_1321(16, "CS_MaryBeth", 1))
					{
						func_1277(&(Local_193[2 /*6*/]), 5, 0);
					}
					if (func_1322(16, 0.25f))
					{
						if (!__LIB_2__::func_343(Global_35, Local_579, 1))
						{
							VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_579, false);
						}
						else if (!__LIB_0__::func_163(Global_35, joaat("SCRIPT_TASK_LEAVE_VEHICLE")))
						{
							TASK::TASK_LEAVE_VEHICLE(Global_35, Local_579, 0, 0);
						}
					}
					Jump @809; //curOff = 509
					func_1318(83, 1);
					if (func_1325(16, 83))
					{
						func_1314(uParam0, 3);
					}
					else
					{
						Jump @809; //curOff = 539
						if (func_1320(16, 1))
						{
							func_1314(uParam0, 4);
						}
						else
						{
							Jump @809; //curOff = 562
							func_1326(85, 1);
							if (func_1325(17, 85))
							{
								func_1314(uParam0, 5);
							}
							else
							{
								Jump @809; //curOff = 592
								if (func_1320(17, 1) || func_1322(17, 0.19f))
								{
									func_1314(uParam0, 6);
								}
								else
								{
									Jump @809; //curOff = 632
									func_1318(84, 1);
									if (func_1325(16, 84))
									{
										func_1314(uParam0, 7);
									}
									else
									{
										Jump @809; //curOff = 662
										if (func_1320(16, 1))
										{
											func_1314(uParam0, 8);
										}
										else
										{
											Jump @809; //curOff = 686
											__LIB_2__::func_966(Global_35, Local_193[0 /*6*/], 1, 1, 1, 0, 1, 1, 0, 1, 1);
											__LIB_9__::func_397(&uLocal_529, Local_193[0 /*6*/]);
											if (Local_193[0 /*6*/].f_5 >= 10)
											{
												if (__LIB_0__::func_393(Global_35, iLocal_148[9], 0, 1) && !__LIB_0__::func_393(Global_35, iLocal_148[26], 0, 1))
												{
													func_1314(uParam0, 9);
												}
												else
												{
													func_1330();
													func_1331(uParam0, 4);
													Jump @809; //curOff = 796
													return 1;
												}
												return 0;
											}
										}
									}
								}
							}
						}
					}
				}
			}
			default:
				break;
	}
}

int func_785(var uParam0)
{
	func_466(&(Local_64[0 /*10*/]), 1);
	func_466(&(Local_64[1 /*10*/]), 1);
	func_1314(uParam0, 9);
	return 1;
}

int func_786(var uParam0)
{
	func_1310();
	func_1266(uParam0);
	func_1276(&(Local_193[1 /*6*/]), 6, 0);
	func_1277(&(Local_193[2 /*6*/]), 6, 0);
	func_1278(&(Local_193[3 /*6*/]), 8, 0);
	__LIB_11__::func_395(74, 1073741824 /* Float: 2f */);
	return 1;
}

int func_787(var uParam0)
{
	func_925(uParam0);
	__LIB_10__::func_702(13, joaat("TSTAG_VAL_MUD3_ACTIVE_GO_TO_STORE"), 1, 977356591, -1);
	func_1272(uParam0, 1);
	INVENTORY::_0x9B4E793B1CB6550A();
	__LIB_11__::func_395(74, 1073741824 /* Float: 2f */);
	Global_1914319.f_17377 = 0;
	return 1;
}

int func_788(var uParam0)
{
	char cVar0[64];
	if (!func_919(uParam0, 26))
	{
		return 0;
	}
	VEHICLE::_0x1FF00DB43026B12F();
	__LIB_9__::func_951(74, 1, 1);
	func_180(74, 1);
	__LIB_11__::func_396(3);
	func_1333(uParam0, 0);
	__LIB_14__::func_644(26, 2048);
	StringCopy(&cVar0, "2-Arthur_Outside_First", 64);
	func_1335(uParam0, cVar0);
	func_1336(uParam0);
	func_192(1, 0);
	return 1;
}

int func_789(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	func_919(uParam0, 4);
	if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_148[11], true, 0))
	{
		__LIB_11__::func_423(uParam0, "MUD3_F_SALOON", "", 1, 0);
		return 0;
	}
	if (!__LIB_0__::func_266(Global_35, VOLUME::_GET_VOLUME_COORDS(iLocal_148[9]), 25f, 1, 1))
	{
		__LIB_11__::func_423(uParam0, "MUD3_F_AREA", "", 1, 0);
		return 0;
	}
	func_1337();
	func_1338();
	__LIB_3__::func_815(0, 1.5f);
	switch (iLocal_1358)
	{
		case 0:
			if (!func_167(19))
			{
				if (__LIB_4__::func_75(3))
				{
					func_398(19);
				}
			}
			else if (func_1340(uParam0))
			{
				func_1333(uParam0, 3);
			}
			else
			{
				if (func_167(19))
				{
					if (func_1300(0, 0, 0, 0, 0, 0))
					{
						if (func_1341(0))
						{
							func_1300(1, 0, 0, 0, 0, 0);
						}
					}
				}
				func_1342();
				if (__LIB_1__::func_185(5))
				{
					func_1293(19, 0);
				}
				else
				{
					func_1293(20, 0);
				}
				if (func_972(19) == 3 || func_972(20) == 3)
				{
					if (func_1343())
					{
						if (func_1293(21, 0) == 3)
						{
							if (func_1293(22, 0) == 3)
							{
								if (__LIB_1__::func_185(5))
								{
									func_1293(23, 0);
								}
								else
								{
									func_452(23);
								}
							}
						}
						if (iLocal_1359 != 4)
						{
							if (func_1344(iLocal_1359))
							{
								func_1345();
								func_1346(uParam0);
							}
							iVar0 = __LIB_11__::func_397(3);
							if (__LIB_0__::func_144(iVar0, 0))
							{
							}
							if (func_1348(iVar0))
							{
								if (func_1349())
								{
									func_1333(uParam0, 1);
								}
								else if (iLocal_1359 == 4 || !func_1344(iLocal_1359))
								{
									func_1333(uParam0, 2);
								}
								else
								{
									if (!func_167(20))
									{
										if (!__LIB_2__::func_618(&uLocal_513))
										{
											__LIB_5__::func_107(&uLocal_513);
										}
										if (__LIB_14__::func_171(&uLocal_513) > 15000 && !__LIB_0__::func_144(iVar0, 0))
										{
											func_1293(25, 0);
										}
									}
									Jump @868; //curOff = 519
									if (func_1340(uParam0))
									{
									}
									else
									{
										if (func_167(20))
										{
											func_452(28);
											func_452(27);
										}
										if (func_1293(28, 0) == 3)
										{
											if (!__LIB_0__::func_393(Local_193[0 /*6*/], iLocal_148[9], 0, 1))
											{
												if (__LIB_1__::func_185(5))
												{
													func_1293(31, 0);
												}
												else
												{
													func_1293(30, 0);
												}
											}
										}
										func_1331(uParam0, 16);
										Jump @868; //curOff = 623
										if (func_1340(uParam0))
										{
										}
										else
										{
											func_1293(76, 0);
											if (__LIB_9__::func_324(&uLocal_426) < 20f)
											{
												func_1331(uParam0, 2048);
											}
											else
											{
												if (!func_167(21))
												{
													func_398(21);
													__LIB_0__::func_325(&iLocal_143);
													iLocal_143 = __LIB_4__::func_983(408396114, vLocal_123, 1);
												}
												func_1331(uParam0, 4194304);
											}
											Jump @868; //curOff = 724
											WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 0, 1);
											WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
											func_163(27, 0, 1);
											func_163(28, 0, 1);
											func_163(23, 0, 1);
											func_163(25, 0, 1);
											func_163(24, 0, 1);
											func_163(19, 0, 1);
											func_163(20, 0, 1);
											func_163(29, 0, 1);
											func_163(76, 0, 1);
											func_163(78, 0, 1);
											func_163(79, 0, 1);
											func_163(80, 0, 1);
											func_163(81, 0, 1);
											return 1;
										}
									}
								}
								return 0;
							}
						}
					}
				}
			}
			default:
				break;
	}
}

int func_790(var uParam0)
{
	func_1333(uParam0, 3);
	func_1352(uParam0, func_167(20));
	__LIB_9__::func_951(74, 0, 1);
	func_180(74, 1);
	func_192(0, 0);
	__LIB_11__::func_405(74, 1073741824 /* Float: 2f */);
	return 1;
}

int func_791(var uParam0)
{
	func_1310();
	func_1266(uParam0);
	if (!__LIB_11__::func_762(uParam0))
	{
		func_1336(uParam0);
	}
	PED::CLEAR_PED_ENV_DIRT(Global_35);
	return 1;
}

int func_792(var uParam0)
{
	if (!__LIB_11__::func_762(uParam0))
	{
		func_1352(uParam0, func_167(20));
		func_925(uParam0);
	}
	__LIB_1__::func_572(Global_36, 500f, 0, 0, 0, 0, 0);
	VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	__LIB_1__::func_557(10, 0f);
	PED::_0x406CCF555B04FAD3(Global_35, 0, 0f);
	__LIB_10__::func_702(13, joaat("TSTAG_VAL_MUD3_ACTIVE_GO_TO_STORE"), 1, 977356591, -1);
	func_466(&(Local_64[2 /*10*/]), 1);
	func_468(&(Local_284[13 /*5*/]), 1, 1, 1, 1, 1, 0);
	func_468(&(Local_284[9 /*5*/]), 1, 1, 1, 1, 0, 0);
	func_468(&(Local_284[10 /*5*/]), 1, 1, 1, 1, 0, 0);
	func_1272(uParam0, 1);
	return 1;
}

int func_793(var uParam0)
{
	if (!func_919(uParam0, 26))
	{
		return 0;
	}
	func_1355(&(Local_193[5 /*6*/]), 2, 0);
	func_1278(&(Local_193[3 /*6*/]), 5, 0);
	func_1356(uParam0, 0);
	func_1357(20, Local_193[1 /*6*/], -922193456, 0);
	func_1358();
	func_1359();
	__LIB_1__::func_572(Global_36, 500f, 0, 0, 0, 0, 0);
	VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	func_1360(Local_193[1 /*6*/], func_233(3, 2), 2, 1073741824 /* Float: 2f */);
	func_1360(Local_193[4 /*6*/], func_233(3, 5), 2, 1073741824 /* Float: 2f */);
	__LIB_0__::func_862(Local_193[4 /*6*/], -1874850055);
	func_1362(73);
	func_1363(74, 0);
	__LIB_4__::func_563(&(uParam0->f_10792), 262144);
	if (!__LIB_0__::func_255(Local_14.f_27[0], 0))
	{
		__LIB_0__::func_862(Local_14.f_27[0], -1874850055);
	}
	if (__LIB_11__::func_762(uParam0))
	{
		CAM::SET_GAMEPLAY_ENTITY_HINT(Local_193[3 /*6*/], 0f, 0f, 0f, true, 100, 1, 2000, 0);
	}
	return 1;
}

int func_794(var uParam0)
{
	int iVar0;
	__LIB_4__::func_636();
	func_919(uParam0, 5);
	func_1367();
	func_1368();
	func_1369();
	if (__LIB_0__::func_393(Global_35, iLocal_148[8], 0, 1))
	{
		if (PED::IS_PED_IN_COVER(Global_35, false, false))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
		}
	}
	switch (iLocal_1360)
	{
		case 0:
			func_1370();
			PED::SET_PED_RESET_FLAG(Global_35, 131, true);
			func_1371(uParam0, Local_193[1 /*6*/], 20, 0);
			iVar0 = Local_193[5 /*6*/].f_5;
			if (iVar0 == 2)
			{
				if (!__LIB_0__::func_48(Global_35, Local_193[5 /*6*/], 2.5f, 1))
				{
					func_1372();
				}
				func_1331(uParam0, 32);
			}
			else
			{
				if (iVar0 == 3 || iVar0 == 4)
				{
					func_1373(uParam0, &(Local_193[14 /*6*/]));
				}
				if (!__LIB_0__::func_272(Local_193[5 /*6*/], 75) || !__LIB_0__::func_48(Local_193[5 /*6*/], Local_193[3 /*6*/], 4f, 1))
				{
					func_1292(uParam0, 6);
					func_1278(&(Local_193[3 /*6*/]), 9, 0);
					func_1356(uParam0, 1);
				}
				else
				{
					Jump @939; //curOff = 293
					if (__LIB_0__::func_139(iLocal_191))
					{
						if (PED::_IS_PED_CARRYING(Global_35))
						{
							__LIB_5__::func_793(iLocal_191, 1);
						}
						else
						{
							__LIB_5__::func_793(iLocal_191, 0);
						}
					}
					if (__LIB_1__::func_732(iLocal_191, 1))
					{
						func_1356(uParam0, 2);
					}
					else
					{
						func_1376();
						if (PED::GET_PED_RESET_FLAG(Global_35, 108))
						{
							PED::SET_PED_RESET_FLAG(Global_35, 108, false);
						}
						if (PED::GET_PED_CONFIG_FLAG(Global_35, 446, true))
						{
							PED::SET_PED_CONFIG_FLAG(Global_35, 446, false);
						}
						if (func_167(18))
						{
							if (!PED::_0x5C6C7C70CA302801(Global_35))
							{
								if (!__LIB_0__::func_139(iLocal_191))
								{
									iLocal_191 = __LIB_3__::func_905("MUD3_C_DOOR", joaat("INPUT_CONTEXT_B"), iLocal_148[7], 2, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
									OBJECT::_0x0C0A373D181BF900(238680582);
									OBJECT::_0x7F458B543006C8FE(238680582, 28);
								}
							}
						}
						else if (OBJECT::_0x6E2AA80BB0C03728(238680582, 8))
						{
							__LIB_0__::func_202(Global_35, 1);
							func_398(18);
						}
						if (func_972(38) == 3)
						{
							if (!func_167(64))
							{
								__LIB_0__::func_325(&iLocal_143);
								iLocal_143 = MAP::_0xA6EF0C54A3443E70(1247852480, iLocal_148[6]);
								func_398(64);
							}
						}
						func_1331(uParam0, 64);
						if ((__LIB_9__::func_324(&uLocal_420) >= 7f && AUDIO::_0xD9130842D7226045("MUD3_Sounds", 0)) && AUDIO::_0xE368E8422C860BA7("Bedroom_Fight_Impact", "MUD3_Sounds", -2))
						{
							AUDIO::_PLAY_SOUND_FROM_POSITION("Bedroom_Fight_Impact", -324.0732f, 761.0826f, 121.8542f, "MUD3_Sounds", false, 0, false, 0);
							__LIB_2__::func_620(&uLocal_420, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 3f));
						}
						func_1379();
						if (__LIB_0__::func_393(Global_35, iLocal_148[16], 0, 1))
						{
							func_1293(44, 0);
						}
						func_1380();
						Jump @939; //curOff = 709
						if (!TASK::_0x9FF5F9B24E870748(Global_35))
						{
							func_1356(uParam0, 3);
						}
						else
						{
							func_1289(1);
							Jump @939; //curOff = 738
							if (func_1321(2, "MUD3_Duellist", 0))
							{
								func_1356(uParam0, 4);
								func_398(23);
							}
							else
							{
								if (func_1319(3) && func_1322(2, 0.05f))
								{
									func_163(44, 0, 0);
								}
								if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1495039362))
								{
									TASK::TASK_PUT_PED_DIRECTLY_INTO_MELEE(Global_35, Local_193[4 /*6*/], 0, 0, 0f, 1, 0);
									PED::_0x2208438012482A1A(Global_35, false, false);
									func_1356(uParam0, 4);
								}
								else
								{
									if (!func_167(10))
									{
										if (__LIB_0__::func_393(Global_35, iLocal_148[6], 0, 1))
										{
											CAM::SET_GAMEPLAY_PED_HINT(Local_193[4 /*6*/], 0f, 0f, 0f, true, 2000, 2000, 2000);
											func_398(10);
										}
									}
									func_1289(0);
									Jump @939; //curOff = 912
									func_1371(uParam0, Local_193[1 /*6*/], 20, 1);
									return 1;
								}
							}
						}
					}
				}
				return 0;
			}
			default:
				break;
	}
}

int func_795(var uParam0)
{
	__LIB_2__::func_426(&(Local_193[9 /*6*/]));
	__LIB_2__::func_426(&(Local_193[10 /*6*/]));
	func_463(5);
	func_1356(uParam0, 4);
	PED::SET_PED_CONFIG_FLAG(Global_35, 421, false);
	func_163(44, 0, 0);
	func_468(&(Local_284[9 /*5*/]), 0, 0, 0, 0, 0, 0);
	if (!func_167(88))
	{
		func_468(&(Local_284[10 /*5*/]), 0, 0, 0, 0, 0, 0);
		func_398(88);
	}
	return 1;
}

int func_796(var uParam0)
{
	func_1310();
	func_1266(uParam0);
	func_1362(71);
	func_1278(&(Local_193[3 /*6*/]), 11, 0);
	return 1;
}

int func_797(var uParam0)
{
	func_925(uParam0);
	if (!__LIB_4__::func_937(uParam0, 8))
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, -321.3029f, 762.4471f, 120.6315f, 125.6652f, true, false, true);
		ENTITY::_0x9587913B9E772D29(Global_35, 0);
	}
	__LIB_10__::func_702(13, joaat("TSTAG_VAL_MUD3_ACTIVE_CHASE"), 1, 977356591, -1);
	func_1272(uParam0, 1);
	return 1;
}

int func_798(var uParam0)
{
	if (!func_919(uParam0, 26))
	{
		return 0;
	}
	if (!__LIB_4__::func_937(uParam0, 8))
	{
		func_1381(uParam0, 3);
	}
	else
	{
		func_1381(uParam0, 0);
	}
	if (!__LIB_0__::func_255(Local_14.f_27[0], 0))
	{
		__LIB_0__::func_862(Local_14.f_27[0], -1874850055);
	}
	return 1;
}

int func_799(var uParam0)
{
	func_919(uParam0, 6);
	PED::SET_PED_RESET_FLAG(Global_35, 245, true);
	PED::SET_PED_RESET_FLAG(Global_35, 131, true);
	switch (iLocal_1361)
	{
		case 0:
			if (!__LIB_0__::func_272(Local_193[4 /*6*/], 11))
			{
				func_1292(uParam0, 5);
				if (!__LIB_2__::func_618(&uLocal_396))
				{
					__LIB_5__::func_107(&uLocal_396);
				}
				if (__LIB_9__::func_324(&uLocal_396) > 2.5f)
				{
					__LIB_2__::func_608(&uLocal_396);
					func_1381(uParam0, 1);
				}
				else
				{
					Jump @152; //curOff = 145
					func_1382();
					func_1331(uParam0, 128);
					Jump @441; //curOff = 161
					if (__LIB_0__::func_48(Global_35, Local_193[1 /*6*/], 5.5f, 1) || __LIB_4__::func_117(Local_193[1 /*6*/], 7f, 0))
					{
						func_1381(uParam0, 2);
					}
					else
					{
						func_1331(uParam0, 256);
					}
					Jump @441; //curOff = 222
					return 1;
					Jump @441; //curOff = 229
					if (func_1321(2, "MUD3_Duellist", 0))
					{
						func_1381(uParam0, 0);
						func_398(23);
					}
					else if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1495039362))
					{
						TASK::TASK_PUT_PED_DIRECTLY_INTO_MELEE(Global_35, Local_193[4 /*6*/], 0, 0, 0f, 1, 0);
						PED::_0x2208438012482A1A(Global_35, false, false);
						func_1381(uParam0, 0);
					}
					else
					{
						if (__LIB_9__::func_324(&uLocal_417) >= 1.8f)
						{
							if (CAM::DOES_CAM_EXIST(iLocal_190))
							{
								if (CAM::IS_CAM_ACTIVE(iLocal_190))
								{
									__LIB_0__::func_489(2f, -7f);
									CAM::SET_CAM_ACTIVE(iLocal_190, false);
									CAM::RENDER_SCRIPT_CAMS(false, true, 1800, true, false, 0);
								}
							}
						}
						if (!func_167(10))
						{
							if (__LIB_0__::func_393(Global_35, iLocal_148[6], 0, 1))
							{
								CAM::SET_GAMEPLAY_PED_HINT(Local_193[4 /*6*/], 0f, 0f, 0f, true, 2000, 2000, 2000);
								func_398(10);
							}
						}
						func_1289(0);
					}
				}
				return 0;
			}
			default:
				break;
	}
}

int func_800(var uParam0)
{
	func_1381(uParam0, 2);
	return 1;
}

int func_801(var uParam0)
{
	bool bVar0;
	if (__LIB_0__::func_272(Local_193[4 /*6*/], 0))
	{
		__LIB_1__::func_864(Local_193[4 /*6*/], 1, 1);
	}
	if (!__LIB_2__::func_618(&uLocal_522))
	{
		__LIB_5__::func_107(&uLocal_522);
	}
	bVar0 = false;
	if (__LIB_14__::func_171(&uLocal_522) >= 1800)
	{
		bVar0 = true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_193[4 /*6*/]))
	{
		if (__LIB_14__::func_171(&uLocal_522) >= 400)
		{
			if (!PED::IS_PED_RAGDOLL(Local_193[4 /*6*/]) && !PED::_IS_PED_FALLING_2(Local_193[4 /*6*/]))
			{
				bVar0 = true;
			}
		}
	}
	if (!bVar0)
	{
		return 0;
	}
	func_1310();
	func_1266(uParam0);
	func_1362(71);
	func_1278(&(Local_193[3 /*6*/]), 11, 0);
	return 1;
}

int func_802(var uParam0)
{
	func_925(uParam0);
	func_1360(Local_193[3 /*6*/], func_233(5, 4), 2, 1073741824 /* Float: 2f */);
	func_456(0);
	func_456(1);
	func_456(2);
	func_456(3);
	func_1385(&(Local_193[8 /*6*/]), 3, 0);
	func_1272(uParam0, 1);
	if (__LIB_11__::func_762(uParam0))
	{
		PED::CLEAR_PED_ENV_DIRT(Global_35);
	}
	__LIB_10__::func_702(13, joaat("TSTAG_VAL_MUD3_ACTIVE_CHASE"), 1, 977356591, -1);
	return 1;
}

int func_803(var uParam0)
{
	if (!func_919(uParam0, 26))
	{
		return 0;
	}
	func_1386(uParam0, 0);
	if (!__LIB_0__::func_255(Local_14.f_27[0], 0))
	{
		__LIB_0__::func_862(Local_14.f_27[0], -1874850055);
	}
	func_1387(uParam0);
	return 1;
}

int func_804(var uParam0)
{
	int iVar0;
	func_919(uParam0, 7);
	func_1388();
	__LIB_3__::func_815(0, 1.5f);
	switch (iLocal_1362)
	{
		case 0:
			if (__LIB_0__::func_393(Global_35, iLocal_148[12], 0, 1))
			{
				func_1386(uParam0, 3);
			}
			else if (func_1293(68, 0) == 3)
			{
				func_1386(uParam0, 1);
			}
			else
			{
				func_1331(uParam0, 256);
				Jump @380; //curOff = 131
				if (__LIB_0__::func_393(Global_35, iLocal_148[12], 0, 1))
				{
					func_1386(uParam0, 3);
				}
				else if (func_1389(4))
				{
					func_1386(uParam0, 2);
				}
				else
				{
					__LIB_2__::func_966(Global_35, Local_193[1 /*6*/], 1, 1, 1, 0, 1, 1, 0, 1, 1);
					__LIB_9__::func_397(&uLocal_529, Local_193[1 /*6*/]);
					func_1331(uParam0, 256);
					WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false);
					if (iVar0 != joaat("WEAPON_UNARMED"))
					{
						WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 0, 0);
						WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
					}
					Jump @380; //curOff = 273
					if (__LIB_0__::func_393(Global_35, iLocal_148[32], 0, 1))
					{
						func_1386(uParam0, 4);
					}
					else
					{
						func_1390();
						func_1331(uParam0, 4096);
						Jump @380; //curOff = 318
						if (__LIB_0__::func_266(Global_35, vLocal_126, 2f, 1, 1) || !TASK::_0x9FF5F9B24E870748(Global_35))
						{
							func_1386(uParam0, 4);
						}
						else
						{
							func_1289(1);
							Jump @380; //curOff = 367
							return 1;
						}
					}
				}
			}
			return 0;
			default:
				break;
	}
}

int func_805(var uParam0)
{
	func_1386(uParam0, 4);
	func_1391(uParam0, func_167(65));
	func_163(63, 0, 1);
	func_163(49, 0, 1);
	return 1;
}

int func_806(var uParam0)
{
	func_1310();
	func_1266(uParam0);
	if (!__LIB_11__::func_762(uParam0))
	{
		func_1387(uParam0);
	}
	PED::CLEAR_PED_ENV_DIRT(Global_35);
	return 1;
}

int func_807(var uParam0)
{
	func_925(uParam0);
	if (!__LIB_11__::func_762(uParam0))
	{
		func_1391(uParam0, func_167(65));
	}
	__LIB_10__::func_702(13, joaat("TSTAG_VAL_MUD3_ACTIVE_CHASE"), 1, 977356591, -1);
	MISC::CLEAR_AREA(-341.1f, 783f, 114.58f, 12.5f, 1048576);
	func_468(&(Local_284[16 /*5*/]), 1, 1, 1, 0, 1, 1);
	func_468(&(Local_284[14 /*5*/]), 1, 1, 1, 1, 1, 0);
	func_468(&(Local_284[18 /*5*/]), 1, 1, 1, 0, 0, 1);
	func_1272(uParam0, 1);
	AUDIO::_0x0D7FD6A55FD63AEF(22, 3, 0);
	func_398(77);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_185[1]))
	{
		OBJECT::DELETE_OBJECT(&(iLocal_185[1]));
	}
	func_456(14);
	func_1278(&(Local_193[3 /*6*/]), 0, 0);
	return 1;
}

int func_808(var uParam0)
{
	if (!func_919(uParam0, 26))
	{
		return 0;
	}
	if (__LIB_4__::func_948(uParam0, 4) && !__LIB_4__::func_937(uParam0, 8))
	{
		func_1360(Local_193[7 /*6*/], func_233(6, 6), 2, 1073741824 /* Float: 2f */);
	}
	func_398(30);
	func_1392(uParam0, 0);
	if (!__LIB_0__::func_394(Global_35, iLocal_141, 0))
	{
		__LIB_1__::func_571(Global_35, iLocal_141, 0, -1, 1);
	}
	PLAYER::_0xBBADFB5E5E5766FB(PLAYER::PLAYER_ID(), 0.25f);
	PED::_RESTORE_PED_STAMINA(iLocal_141, 100f);
	func_468(&(Local_284[17 /*5*/]), 1, 1, 1, 0, 1, 1);
	return 1;
}

int func_809(var uParam0)
{
	func_919(uParam0, 8);
	if (func_1395())
	{
		__LIB_11__::func_423(uParam0, "MUD3_F_LOST", "", 1, 0);
	}
	if (func_1396())
	{
		__LIB_11__::func_423(uParam0, "MUD3_F_KILL", "", 1, 0);
	}
	switch (iLocal_1363)
	{
		case 0:
			PLAYER::SET_PLAYER_LOCKON_RANGE_OVERRIDE(PLAYER::GET_PLAYER_INDEX(), 5f);
			if (__LIB_0__::func_266(Global_35, func_1286(7, 5), 30f, 1, 1))
			{
				if (PED::GET_PED_CONFIG_FLAG(iLocal_141, 219, true))
				{
					PED::SET_PED_CONFIG_FLAG(iLocal_141, 219, false);
				}
			}
			if (Local_193[6 /*6*/].f_5 == 4)
			{
				func_1392(uParam0, 1);
			}
			else
			{
				if (Local_193[6 /*6*/].f_5 == 2)
				{
					func_1397();
				}
				func_1331(uParam0, 512);
				Jump @197; //curOff = 184
				return 1;
			}
			return 0;
			default:
				break;
	}
}

int func_810(var uParam0)
{
	PLAYER::_0xBBADFB5E5E5766FB(PLAYER::PLAYER_ID(), 1f);
	func_1392(uParam0, 1);
	return 1;
}

int func_811(var uParam0)
{
	func_1310();
	func_1266(uParam0);
	func_1398(14);
	PED::CLEAR_PED_ENV_DIRT(Global_35);
	return 1;
}

int func_812(var uParam0)
{
	func_925(uParam0);
	func_1272(uParam0, 1);
	__LIB_10__::func_702(13, joaat("TSTAG_VAL_MUD3_ACTIVE_CHASE"), 1, 977356591, -1);
	PLAYER::_0x497A18F8F88AA9D8();
	return 1;
}

int func_813(var uParam0)
{
	if (!func_919(uParam0, 26))
	{
		return 0;
	}
	func_1399(uParam0, 0);
	if (__LIB_0__::func_272(Local_193[7 /*6*/], 0))
	{
		ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_193[7 /*6*/]);
	}
	func_1400(uParam0);
	return 1;
}

int func_814(var uParam0)
{
	float fVar0;
	func_919(uParam0, 25);
	if (__LIB_0__::func_266(iLocal_141, func_1401(1, 0), 7f, 1, 1) && !PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (!TASK::_0x9FF5F9B24E870748(iLocal_141))
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_141, vLocal_138, 1f, -1, 0.25f, 0, 40000f);
		}
	}
	switch (iLocal_1366)
	{
		case 0:
			if (Local_193[6 /*6*/].f_5 == 6)
			{
				func_1399(uParam0, 1);
			}
			else if (Local_193[6 /*6*/].f_5 == 5)
			{
				func_1399(uParam0, 1);
			}
			else if (Local_193[6 /*6*/].f_5 != 4)
			{
				func_1399(uParam0, 3);
			}
			else
			{
				func_1331(uParam0, 1024);
				if (__LIB_0__::func_272(Local_193[6 /*6*/], 0))
				{
					if (__LIB_3__::func_383(PLAYER::PLAYER_ID(), &(Local_193[6 /*6*/])))
					{
						func_1300(4, 0, 0, 1, 1, 0);
					}
				}
				if (__LIB_0__::func_266(Global_35, func_1401(1, 0), 7f, 1, 1) && PED::IS_PED_ON_MOUNT(Global_35))
				{
					if (!func_167(40))
					{
						if (!__LIB_2__::func_618(&uLocal_483))
						{
							__LIB_5__::func_107(&uLocal_483);
						}
						if (__LIB_9__::func_324(&uLocal_483) >= 2f)
						{
							TASK::TASK_DISMOUNT_ANIMAL(Global_35, 0, 0, 0, 0, 0);
							func_398(40);
						}
					}
				}
				else
				{
					__LIB_2__::func_608(&uLocal_483);
				}
				if (__LIB_0__::func_266(Global_35, func_1401(1, 0), 4f, 1, 1))
				{
					fVar0 = 1f;
					if (__LIB_0__::func_266(Global_35, -354.39f, 490.55f, 95.6f, 2f, 1, 1))
					{
						fVar0 = 0.5f;
					}
					if (__LIB_0__::func_266(Global_35, -354.39f, 490.55f, 95.6f, 1f, 1, 1))
					{
						fVar0 = 0.25f;
					}
					if (!PED::IS_PED_ON_MOUNT(Global_35))
					{
						__LIB_3__::func_815(16, fVar0);
					}
				}
				Jump @694; //curOff = 452
				if (!TASK::_0x9FF5F9B24E870748(Global_35))
				{
					WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 0, 1);
					if (Local_193[6 /*6*/].f_5 == 6)
					{
						func_1399(uParam0, 2);
					}
					else if (Local_193[6 /*6*/].f_5 == 5)
					{
						func_1399(uParam0, 3);
					}
					else
					{
						func_1289(1);
						Jump @694; //curOff = 524
						if (func_1403(5, 11, 0.98f))
						{
							func_1399(uParam0, 5);
							return 1;
						}
						Jump @694; //curOff = 553
						if (Local_193[6 /*6*/].f_5 == 5)
						{
							if (func_1403(5, 10, 1065185444 /* Float: 0.99f */) || func_1321(5, "U_M_M_VALTOWNFOLK_02", 1))
							{
								func_1399(uParam0, 4);
							}
							else
							{
								Jump @652; //curOff = 608
								if (func_1403(5, 13, 1065185444 /* Float: 0.99f */) || func_1321(5, "U_M_M_VALTOWNFOLK_02", 1))
								{
									func_1399(uParam0, 4);
								}
								else
								{
									Jump @694; //curOff = 652
									func_1404();
									if (func_1405(&(Local_193[6 /*6*/])))
									{
										func_1399(uParam0, 5);
									}
									else
									{
										Jump @694; //curOff = 681
										return 1;
									}
								}
							}
							return 0;
						}
					}
				}
			}
			default:
				break;
	}
}

int func_815(var uParam0)
{
	__LIB_5__::func_47(&(uParam0->f_7375), vLocal_138, 7.51f, 0);
	func_1406(uParam0, 1);
	func_1399(uParam0, 5);
	return 1;
}

int func_816(var uParam0)
{
	func_1310();
	func_1266(uParam0);
	if (!__LIB_11__::func_762(uParam0))
	{
		func_1400(uParam0);
		func_1406(uParam0, 0);
	}
	PED::CLEAR_PED_ENV_DIRT(Global_35);
	return 1;
}

int func_817(var uParam0)
{
	if (!func_167(4))
	{
		if (PED::IS_PED_ON_MOUNT(Global_35) && !__LIB_0__::func_163(Global_35, 501393341))
		{
			TASK::TASK_DISMOUNT_ANIMAL(Global_35, 0, 0, 0, 0, 0);
			return 0;
		}
	}
	if (!func_167(4))
	{
		if (__LIB_0__::func_272(Local_193[6 /*6*/], 0))
		{
			if (ENTITY::_IS_ENTITY_FROZEN(Local_193[6 /*6*/]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_193[6 /*6*/], false);
			}
		}
		if (__LIB_0__::func_272(Local_193[7 /*6*/], 0))
		{
			if (ENTITY::_IS_ENTITY_FROZEN(Local_193[7 /*6*/]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_193[7 /*6*/], false);
			}
		}
		func_925(uParam0);
	}
	if (__LIB_0__::func_272(Local_193[6 /*6*/], 1) && !func_167(4))
	{
		__LIB_1__::func_683(&(Local_193[6 /*6*/].f_4), 256);
		func_1407(Local_193[6 /*6*/], "MUD3_JIMMY");
	}
	if (__LIB_0__::func_272(Local_193[7 /*6*/], 1))
	{
		PED::SET_PED_KEEP_TASK(Local_193[7 /*6*/], true);
		__LIB_1__::func_683(&(Local_193[7 /*6*/].f_4), 256);
		func_1407(Local_193[7 /*6*/], "MUD3_JIMMY_HORSE");
	}
	if (__LIB_0__::func_272(iLocal_141, 1))
	{
		func_1407(iLocal_141, "MUD3_STOLEN_HORSE");
	}
	__LIB_11__::func_417(uParam0, Local_1193[18 /*6*/], 0);
	func_1272(uParam0, 1);
	if (__LIB_0__::func_272(Local_193[6 /*6*/], 0))
	{
		AUDIO::STOP_PED_SPEAKING(Local_193[6 /*6*/], true);
	}
	return 1;
}

int func_818(var uParam0)
{
	var uVar0;
	int iVar1;
	if (!func_919(uParam0, 26))
	{
		return 0;
	}
	if (__LIB_0__::func_272(Local_193[6 /*6*/], 0) && !func_167(4))
	{
		func_1409();
		PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_JIMMYB"));
		iVar1 = PLAYER::_0x0139637A3BFF8B6D(Local_193[6 /*6*/], &uVar0);
		PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(Local_193[6 /*6*/], iVar1);
		if (!func_167(87))
		{
			Global_1357515 = 0;
			func_398(87);
		}
	}
	return 1;
}

int func_819(var uParam0)
{
	func_1410();
	return 1;
}

int func_820(var uParam0)
{
	if (__LIB_0__::func_272(Local_193[6 /*6*/], 0) && !func_167(4))
	{
		func_328(joaat("PROVISION_PEN"), 1, 0, 0, 0, -1216041698, 0, 0, 0, 0);
	}
	func_1410();
	__LIB_8__::func_82(1, 33554432);
	return 1;
}

void func_827(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
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
		func_1415();
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

void func_829(var uParam0)
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
			func_904(iVar1, __LIB_4__::func_548(uParam0), __LIB_4__::func_549(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_904(iVar3, __LIB_4__::func_548(uParam0), __LIB_4__::func_549(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_830(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if ((__LIB_0__::func_84(uParam0, 268435456) && !__LIB_0__::func_86(__LIB_4__::func_548(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { __LIB_4__::func_548(uParam0) };
			func_904(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

int func_838(int iParam0, int iParam1)
{
	var uVar0;
	return func_1439(&uVar0, iParam0, iParam1);
}

void func_857(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	sVar0 = func_1441(iParam1);
	sVar1 = func_1442(iParam2);
	iVar2 = 0;
	if (bParam5)
	{
		iVar2 = 16;
	}
	__LIB_8__::func_792(uParam0, sVar0, &(Local_1193[iParam1 /*6*/]), iParam3, iVar2, sVar1, 0, bParam4);
	Local_1193[iParam1 /*6*/].f_1 = 1;
}

void func_858(var uParam0, int iParam1, int iParam2, int iParam3)
{
	char* sVar0;
	sVar0 = func_1442(iParam2);
	__LIB_5__::func_566(uParam0, Local_1193[iParam1 /*6*/], sVar0, iParam3);
}

bool func_896(var uParam0, int iParam1, var uParam2, bool bParam3, int iParam4, int iParam5, int iParam6, float fParam7, bool bParam8, int iParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13)
{
	if (!__LIB_0__::func_31(iParam1))
	{
		return false;
	}
	if ((!ENTITY::IS_ENTITY_DEAD(*uParam2) && __LIB_1__::func_22(iParam1)) && __LIB_0__::func_167(iParam1) == *uParam2)
	{
		return true;
	}
	*uParam2 = func_1475(iParam1, 1, 0, iParam4, iParam5, iParam6, fParam7, bParam8, 1, 0, 0, bParam10, 0, iParam9, 0, 0, 0, iParam11, 1, 1, bParam13, 0, 1, 0, 1);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam2))
	{
		func_1476(uParam0, *uParam2, iParam1, bParam3, (bParam8 && bParam12), bParam10, bParam13);
		__LIB_4__::func_703(iParam1);
		return true;
	}
	return false;
}

bool func_897(var uParam0)
{
	if (!__LIB_0__::func_86(uParam0->f_5417))
	{
		return true;
	}
	switch (uParam0->f_607)
	{
		case 7:
			__LIB_4__::func_973(uParam0, -271.1003f, 798.9771f, 118.0088f, 359.8847f);
			break;
		case 15:
			__LIB_4__::func_973(uParam0, -101.4083f, -34.0691f, 94.9419f, 43.5697f);
			break;
		case 8:
			__LIB_4__::func_973(uParam0, 884.1405f, 1283.638f, 233.1437f, 288.539f);
			break;
		case 25:
			__LIB_4__::func_973(uParam0, 1154.01f, -87.7217f, 87.745f, 333.9165f);
			break;
		case 14:
			__LIB_4__::func_973(uParam0, -257.4742f, 716.4608f, 114.3661f, 298.3928f);
			break;
		case 9:
			__LIB_4__::func_973(uParam0, -113.3479f, -14.8907f, 96.1036f, 66.3363f);
			break;
		case 13:
			__LIB_4__::func_973(uParam0, -893.1545f, -1097.781f, 59.3724f, 67.7581f);
			break;
		case 11:
			__LIB_4__::func_973(uParam0, -1528.842f, -315.0988f, 143.0872f, 97.0964f);
			break;
		case 26:
			__LIB_4__::func_973(uParam0, 705.8042f, -1230.294f, 44.2243f, 60.9884f);
			break;
		case 53:
			__LIB_4__::func_973(uParam0, 705.8099f, -1229.4f, 44.2311f, 67.5463f);
			break;
		case 16:
			__LIB_4__::func_973(uParam0, 667.7685f, -1211.293f, 45.3101f, 92.5271f);
			break;
		case 17:
			__LIB_4__::func_973(uParam0, 1339.753f, -1305.21f, 75.5849f, 337.5673f);
			break;
		case 19:
			__LIB_4__::func_973(uParam0, 1857.32f, -1367.512f, 41.2697f, 162.265f);
			break;
		case 24:
			__LIB_4__::func_973(uParam0, 691.6649f, -1235.476f, 43.3174f, 227.0576f);
			break;
		case 23:
			__LIB_4__::func_973(uParam0, 676.2985f, -1227.818f, 43.598f, 352.091f);
			break;
		case 22:
			__LIB_4__::func_973(uParam0, 663.6722f, -1229.636f, 43.3769f, 171.6396f);
			break;
		case 36:
			__LIB_4__::func_973(uParam0, 2647.098f, -1270.327f, 51.0841f, 113.0633f);
			break;
		case 28:
			__LIB_4__::func_973(uParam0, 2413.412f, -1220.656f, 44.9084f, 0.0301f);
			break;
		case 30:
			__LIB_4__::func_973(uParam0, 1853.05f, -1835.788f, 42.0957f, 29.7034f);
			break;
		case 37:
			__LIB_4__::func_973(uParam0, 1842.425f, -1833.848f, 43.2426f, 0.0743f);
			break;
		case 45:
			__LIB_4__::func_973(uParam0, 2824.987f, -1165.335f, 47.3695f, 190.1776f);
			break;
		case 48:
			__LIB_4__::func_973(uParam0, 483.1636f, 2222.628f, 246.0867f, 109.4105f);
			break;
		case 49:
			__LIB_4__::func_973(uParam0, 2376.538f, 1339.845f, 105.3362f, 193.8848f);
			break;
		case 50:
			__LIB_4__::func_973(uParam0, 2377.94f, 1338.177f, 105.4092f, 196.4492f);
			break;
		case 51:
			__LIB_4__::func_973(uParam0, 491.0881f, 2221.171f, 246.1786f, 246.5501f);
			Jump @1194; //curOff = 959
			__LIB_4__::func_973(uParam0, 2774.684f, 513.5845f, 66.9882f, 355.826f);
			Jump @1194; //curOff = 988
			__LIB_4__::func_973(uParam0, -1616.827f, -1379.19f, 81.8942f, 339.9481f);
			Jump @1194; //curOff = 1017
			__LIB_4__::func_973(uParam0, -1611.214f, -1344.436f, 81.8767f, 359.9349f);
			Jump @1194; //curOff = 1046
			__LIB_4__::func_973(uParam0, -1678.714f, -1378.879f, 83.969f, 347.6046f);
			Jump @1194; //curOff = 1075
			__LIB_4__::func_973(uParam0, -302.3015f, 786.3279f, 116.9486f, 185.0768f);
			Jump @1194; //curOff = 1104
			__LIB_4__::func_973(uParam0, -1566.102f, -1448.615f, 90.6887f, 291.3719f);
			Jump @1194; //curOff = 1133
			__LIB_4__::func_973(uParam0, -1625.965f, -1395.404f, 81.6263f, 114.6379f);
			Jump @1194; //curOff = 1162
			__LIB_4__::func_973(uParam0, -835.0144f, -1343.726f, 42.473f, 0.0002f);
			return !__LIB_0__::func_86(uParam0->f_5417);
		}
int func_898(int iParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	struct<2> Var8;
	struct<6> Var10;
	int iVar16;
	int iVar17;
	uParam1->f_10 = __LIB_0__::func_97(uParam1->f_10);
	if (uParam1->f_10 == -1)
	{
		*iParam0 = 1;
		return 0;
	}
	if (uParam1->f_10 >= 7)
	{
		*iParam0 = 1;
		return 0;
	}
	if (*uParam1)
	{
		if (__LIB_0__::func_86(uParam1->f_6))
		{
		}
	}
	bVar0 = __LIB_0__::func_28();
	if (*uParam1)
	{
		if (bVar0 && !__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
		{
			if (__LIB_1__::func_105(5))
			{
				__LIB_1__::func_162(5);
				__LIB_1__::func_778(5);
				__LIB_0__::func_149(0);
				__LIB_0__::func_148(0);
			}
		}
	}
	if (__LIB_0__::func_979(Global_36) == 8)
	{
		*iParam0 = 1;
		return 0;
	}
	if ((bVar0 && __LIB_1__::func_25(Global_1835011[37 /*74*/].f_1, 1)) && !__LIB_1__::func_25(Global_1835011[43 /*74*/].f_1, 1))
	{
		*iParam0 = 1;
		return 0;
	}
	if ((bVar0 && __LIB_1__::func_25(Global_1835011[43 /*74*/].f_1, 1)) && !__LIB_1__::func_25(Global_1835011[44 /*74*/].f_1, 1))
	{
		if (uParam1->f_10 == 0)
		{
			*iParam0 = 1;
			return 0;
		}
	}
	iVar1 = uParam1->f_10;
	iVar2 = __LIB_0__::func_398(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (__LIB_0__::func_797(iVar1))
	{
		bVar3 = true;
		if (__LIB_1__::func_52(iVar1))
		{
			bVar4 = true;
		}
		if (__LIB_1__::func_53(iVar1))
		{
			bVar5 = true;
		}
	}
	if (*uParam1)
	{
		if (bVar3)
		{
			if (bVar5 && !uParam1->f_5)
			{
				__LIB_1__::func_54(uParam1->f_10);
				*iParam0 = 0;
				return 0;
			}
		}
	}
	if (*uParam1)
	{
		if (bVar3)
		{
			if (bVar4)
			{
				*iParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_3)
	{
		if (uParam1->f_10 == 0)
		{
			if (!__LIB_1__::func_105(0) && __LIB_1__::func_105(1))
			{
				__LIB_1__::func_779(1, 0);
				*iParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (__LIB_0__::func_988())
			{
				__LIB_0__::func_989();
			}
			__LIB_0__::func_149(0);
			__LIB_0__::func_148(0);
			__LIB_0__::func_150(uParam1->f_6);
		}
	}
	if (!__LIB_0__::func_797(uParam1->f_10))
	{
		if (*uParam1)
		{
			if ((__LIB_0__::func_821(uParam1->f_10) == 0 || __LIB_0__::func_809(uParam1->f_10) == 0) || __LIB_0__::func_815(uParam1->f_10) == 0)
			{
				__LIB_1__::func_621(uParam1->f_10);
			}
			__LIB_1__::func_106(uParam1->f_10);
			__LIB_0__::func_822(uParam1->f_10, uParam1->f_6, uParam1->f_9);
			*iParam0 = 0;
			return 0;
		}
		*iParam0 = 1;
		return 0;
	}
	iVar1 = uParam1->f_10;
	iVar2 = __LIB_0__::func_398(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (__LIB_0__::func_797(iVar1))
	{
		bVar3 = true;
		if (__LIB_1__::func_52(iVar1))
		{
			bVar4 = true;
		}
		if (__LIB_1__::func_53(iVar1))
		{
			bVar5 = true;
		}
	}
	if (uParam1->f_2)
	{
		if (bVar3)
		{
			if (ENTITY::_IS_ENTITY_FROZEN(iVar2))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iVar2, false);
			}
			if (!__LIB_0__::func_86(uParam1->f_6))
			{
				ENTITY::SET_ENTITY_COORDS(iVar2, uParam1->f_6, false, true, true, true);
				ENTITY::SET_ENTITY_HEADING(iVar2, uParam1->f_9);
				ENTITY::_0x9587913B9E772D29(iVar2, 0);
			}
		}
	}
	if (__LIB_1__::func_107(uParam1->f_10))
	{
		*iParam0 = 0;
		return 0;
	}
	if (bVar3)
	{
		if (bVar4)
		{
			if (*uParam1)
			{
				*iParam0 = 0;
				return 0;
			}
			*iParam0 = 1;
			return 0;
		}
	}
	if (bVar3)
	{
		if (bVar5 && !uParam1->f_5)
		{
			if (*uParam1)
			{
				*iParam0 = 0;
				return 0;
			}
			*iParam0 = 1;
			return 0;
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (!PED::_0xA0BC8FAED8CFEB3C(iVar2))
			{
				*iParam0 = 0;
				return 0;
			}
			iVar6 = PLAYER::PLAYER_ID();
			iVar7 = PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(iVar6);
			if (ENTITY::DOES_ENTITY_EXIST(iVar7))
			{
				if (iVar7 != iVar2)
				{
					PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(iVar6, 0);
				}
			}
			Var8 = { __LIB_1__::func_622(uParam1->f_10) };
			Var10 = { __LIB_1__::func_623() };
			__LIB_1__::func_163(iVar2, &Var8, &Var10, 0);
			PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(iVar6, iVar2);
			PED::SET_PED_CONFIG_FLAG(iVar2, 186, false);
		}
	}
	if (!uParam1->f_1)
	{
		*iParam0 = 2;
		return iVar2;
	}
	if (!__LIB_0__::func_823(uParam1->f_10))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar2, true, true);
		__LIB_0__::func_824(uParam1->f_10);
		if (uParam1->f_2 && !__LIB_0__::func_86(uParam1->f_6))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iVar2, false);
			PHYSICS::_0x0348469DAA17576C(iVar2);
			ENTITY::SET_ENTITY_COORDS(iVar2, uParam1->f_6, false, true, true, true);
			ENTITY::SET_ENTITY_HEADING(iVar2, uParam1->f_9);
			ENTITY::_0x9587913B9E772D29(iVar2, 0);
		}
		*iParam0 = 2;
		return iVar2;
	}
	__LIB_1__::func_108(uParam1->f_10);
	if (__LIB_0__::func_823(uParam1->f_10))
	{
		iVar16 = __LIB_0__::func_825(uParam1->f_10);
		iVar17 = SCRIPTS::GET_ID_OF_THIS_THREAD();
		if (iVar16 != iVar17)
		{
			*iParam0 = 1;
			return 0;
		}
	}
	*iParam0 = 2;
	return iVar2;
}

void func_904(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_904(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_904(iVar2, vParam1, fParam4, iParam5, iParam6);
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

bool func_906(var uParam0, int iParam1)
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
			func_827(&iVar0, 0, 2, 0, 0, 0, 0);
			__LIB_0__::func_19(uParam0, 2);
			break;
		case 2:
			if (__LIB_6__::func_918(uParam0))
			{
				__LIB_0__::func_568(uParam0->f_8, 5000f, 0);
				PED::_0x4759CC730F947C81();
				__LIB_8__::func_901(&(uParam0->f_3), 1);
				__LIB_0__::func_19(uParam0, 3);
			}
			break;
		case 3:
			if (__LIB_5__::func_51(&(uParam0->f_3)) >= 1f)
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

bool func_908(var uParam0)
{
	int iVar0;
	struct<4> Var1;
	iVar0 = __LIB_5__::func_475(uParam0);
	if (__LIB_5__::func_279(uParam0, __LIB_4__::func_939(uParam0)) <= 3)
	{
		iVar0 = __LIB_4__::func_939(uParam0);
	}
	Var1 = { __LIB_5__::func_299(uParam0, iVar0) };
	if (func_1511(&(uParam0->f_10792), Var1, __LIB_0__::func_81(&(uParam0->f_10792)), 0))
	{
		__LIB_5__::func_334(uParam0, __LIB_4__::func_939(uParam0), 262144);
		if (__LIB_4__::func_562(&(uParam0->f_10792), 524288))
		{
			__LIB_5__::func_33(uParam0, 67108864);
			__LIB_4__::func_563(&(uParam0->f_10792), 524288);
		}
		__LIB_5__::func_344(&(uParam0->f_7375), &(uParam0->f_10792));
		return true;
	}
	return false;
}

bool func_910(var uParam0, struct<4> Param1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Param1))
	{
		return true;
	}
	if (__LIB_4__::func_937(uParam0, 16777216))
	{
		__LIB_5__::func_345(uParam0);
		__LIB_5__::func_56(uParam0);
		return true;
	}
	if (func_1516(Param1, &(uParam0->f_7375), uParam0))
	{
		return true;
	}
	if (__LIB_0__::func_81(uParam0) == 0)
	{
		__LIB_10__::func_929(uParam0);
	}
	if (__LIB_0__::func_91())
	{
		if (!__LIB_4__::func_937(uParam0, 262144))
		{
			CAM::STOP_GAMEPLAY_HINT(true);
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			if (CAM::DOES_CAM_EXIST(uParam0->f_609.f_2))
			{
				CAM::DESTROY_CAM(uParam0->f_609.f_2, false);
			}
			__LIB_5__::func_326(&(uParam0->f_10792));
			__LIB_4__::func_974(uParam0);
			__LIB_4__::func_969(uParam0, 524288);
			__LIB_5__::func_346(uParam0);
			__LIB_5__::func_26(uParam0, 30f);
			__LIB_5__::func_27(uParam0, 40f);
			__LIB_4__::func_944(uParam0, 262144);
		}
		if (!__LIB_4__::func_937(uParam0, 524288) && ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_7375.f_804))
		{
			__LIB_4__::func_944(uParam0, 524288);
		}
	}
	return false;
}

bool func_917(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (func_167(2))
	{
		return true;
	}
	iVar0 = func_427(uParam0);
	if (iVar0 == 8 || iVar0 == 25)
	{
		func_398(2);
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_579))
	{
		Local_579 = VEHICLE::CREATE_VEHICLE(joaat("WAGON03X"), func_1286(10, 5), func_1525(10, 5), true, true, false, false);
		VEHICLE::_0x8C6D9A399126C194(Local_579, 20);
		return false;
	}
	if (!__LIB_4__::func_475(&Local_579))
	{
		return false;
	}
	if (!func_167(33))
	{
		func_398(32);
	}
	switch (iVar0)
	{
		case 0:
			func_1360(Local_579, func_233(10, 5), 2, 1073741824 /* Float: 2f */);
			break;
		case 1:
			func_1360(Local_579, func_233(9, 1), 2, 1073741824 /* Float: 2f */);
			break;
		case 2:
			func_1360(Local_579, func_233(1, 7), 2, 1073741824 /* Float: 2f */);
			break;
		case 3:
			func_1360(Local_579, func_233(2, 7), 2, 1073741824 /* Float: 2f */);
			break;
		case 4:
			func_1360(Local_579, func_233(3, 7), 2, 1073741824 /* Float: 2f */);
			break;
		case 5:
			func_1360(Local_579, func_233(4, 6), 2, 1073741824 /* Float: 2f */);
			break;
		case 6:
			func_1360(Local_579, func_233(5, 5), 2, 1073741824 /* Float: 2f */);
			break;
		case 7:
			func_1360(Local_579, func_233(6, 7), 2, 1073741824 /* Float: 2f */);
			break;
		case 8:
		case 25:
			break;
	}
	VEHICLE::_0x63DC1F22C903B709(Local_579, true);
	VEHICLE::_0xCBF88256E44D5D39(Local_579, 0);
	VEHICLE::_0x226C6A4E3346D288(Local_579, 0);
	VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_579, false);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_579, 10);
	VEHICLE::SET_VEHICLE_EXTRA(Local_579, 2, true);
	VEHICLE::SET_VEHICLE_WHEELS_CAN_BREAK(Local_579, false);
	ENTITY::SET_CAN_CLIMB_ON_ENTITY(Local_579, false);
	iVar1 = 0;
	while (iVar1 < 6)
	{
		iVar2 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(Local_579, iVar1);
		if (!__LIB_0__::func_272(iVar2, 0))
		{
		}
		else
		{
			ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(iVar2, 1, 100);
			ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(iVar2, 0, 100);
			PED::SET_PED_CAN_BE_TARGETTED(iVar2, false);
		}
		iVar1++;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("WAGON03X"));
	AITRANSPORT::_0xB7079F4C72896756(Global_35, Local_579, 0, 16, -1);
	AITRANSPORT::_0xBA8818212633500A(Local_579, 7, 1);
	func_398(2);
	return false;
}

bool func_918(var uParam0)
{
	int iVar0;
	int iVar1;
	if (func_167(3))
	{
		return true;
	}
	iVar0 = func_427(uParam0);
	if (iVar0 != 0)
	{
		func_398(3);
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_142))
	{
		iLocal_142 = VEHICLE::CREATE_VEHICLE(joaat("COACH3"), 7.4902f, 249.6655f, 108.6355f, 58.2282f, true, true, false, false);
		VEHICLE::_0x8C6D9A399126C194(iLocal_142, 1);
		return false;
	}
	if (!__LIB_4__::func_475(&iLocal_142))
	{
		return false;
	}
	Local_589[0 /*9*/].f_7 = 1;
	Local_589[1 /*9*/].f_7 = 0;
	iVar1 = 0;
	while (iVar1 < 2)
	{
		Local_589[iVar1 /*9*/] = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_142, Local_589[iVar1 /*9*/].f_7);
		Local_589[iVar1 /*9*/].f_6 = iVar1;
		if (!__LIB_0__::func_272(Local_589[iVar1 /*9*/], 0))
		{
		}
		else if (__LIB_11__::func_398(&(Local_589[iVar1 /*9*/]), 16))
		{
		}
		else
		{
			PED::SET_PED_CAN_BE_TARGETTED(Local_589[iVar1 /*9*/], false);
			__LIB_7__::func_345(Local_589[iVar1 /*9*/], 1);
			PED::SET_PED_CONFIG_FLAG(Local_589[iVar1 /*9*/], 6, true);
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_589[iVar1 /*9*/], "MUD3_runaway_stagecoach_group", 0f);
			func_1528(&(Local_589[iVar1 /*9*/]), 16);
			return false;
		}
		iVar1++;
	}
	VEHICLE::_0x63DC1F22C903B709(iLocal_142, true);
	VEHICLE::_0xCBF88256E44D5D39(iLocal_142, 0);
	VEHICLE::_0x226C6A4E3346D288(iLocal_142, 0);
	VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_142, false);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(iLocal_142, PLAYER::PLAYER_ID(), true);
	VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(iLocal_142, true);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_142, 1);
	VEHICLE::TRACK_VEHICLE_VISIBILITY(iLocal_142);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("COACH3"));
	AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_142, "MUD3_runaway_stagecoach_group", 0f);
	func_398(3);
	return false;
}

bool func_919(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = func_427(uParam0);
	if (iParam1 != 26)
	{
		iVar0 = iParam1;
	}
	switch (iVar0)
	{
		case 0:
			if ((((func_1529(uParam0, &(Local_193[0 /*6*/])) && func_1530(uParam0, &(Local_193[1 /*6*/]))) && func_1531(uParam0, &(Local_193[2 /*6*/]))) && func_1532(uParam0, &(Local_193[3 /*6*/]))) && func_1533(uParam0, &(Local_193[11 /*6*/])))
			{
				return true;
			}
			break;
		case 1:
			if (((func_1529(uParam0, &(Local_193[0 /*6*/])) && func_1530(uParam0, &(Local_193[1 /*6*/]))) && func_1531(uParam0, &(Local_193[2 /*6*/]))) && func_1532(uParam0, &(Local_193[3 /*6*/])))
			{
				return true;
			}
			break;
		case 2:
			if ((((func_1529(uParam0, &(Local_193[0 /*6*/])) && func_1530(uParam0, &(Local_193[1 /*6*/]))) && func_1531(uParam0, &(Local_193[2 /*6*/]))) && func_1532(uParam0, &(Local_193[3 /*6*/]))) && func_1534(uParam0, &(Local_193[13 /*6*/])))
			{
				return true;
			}
			break;
		case 3:
			if ((((((func_1529(uParam0, &(Local_193[0 /*6*/])) && func_1530(uParam0, &(Local_193[1 /*6*/]))) && func_1531(uParam0, &(Local_193[2 /*6*/]))) && func_1532(uParam0, &(Local_193[3 /*6*/]))) && func_1535(uParam0, &(Local_193[4 /*6*/]))) && func_1536(uParam0, &(Local_193[5 /*6*/]))) && func_1534(uParam0, &(Local_193[13 /*6*/])))
			{
				return true;
			}
			break;
		case 4:
			if ((((((((func_1529(uParam0, &(Local_193[0 /*6*/])) && func_1530(uParam0, &(Local_193[1 /*6*/]))) && func_1531(uParam0, &(Local_193[2 /*6*/]))) && func_1532(uParam0, &(Local_193[3 /*6*/]))) && func_1537(uParam0, &(Local_193[9 /*6*/]))) && func_1538(uParam0, &(Local_193[10 /*6*/]))) && func_1539(uParam0, &(Local_193[8 /*6*/]))) && func_1535(uParam0, &(Local_193[4 /*6*/]))) && func_1536(uParam0, &(Local_193[5 /*6*/])))
			{
				return true;
			}
			break;
		case 5:
			if (((((func_1529(uParam0, &(Local_193[0 /*6*/])) && func_1530(uParam0, &(Local_193[1 /*6*/]))) && func_1531(uParam0, &(Local_193[2 /*6*/]))) && func_1532(uParam0, &(Local_193[3 /*6*/]))) && func_1535(uParam0, &(Local_193[4 /*6*/]))) && func_1539(uParam0, &(Local_193[8 /*6*/])))
			{
				return true;
			}
			break;
		case 6:
			if (((((((((func_1529(uParam0, &(Local_193[0 /*6*/])) && func_1530(uParam0, &(Local_193[1 /*6*/]))) && func_1531(uParam0, &(Local_193[2 /*6*/]))) && func_1532(uParam0, &(Local_193[3 /*6*/]))) && func_1535(uParam0, &(Local_193[4 /*6*/]))) && func_1540(uParam0, &(Local_193[6 /*6*/]))) && func_1541(uParam0, &(Local_193[7 /*6*/]))) && func_1539(uParam0, &(Local_193[8 /*6*/]))) && func_1542(uParam0, 0, 0)) && func_1543(uParam0, &(Local_193[12 /*6*/])))
			{
				return true;
			}
			break;
		case 7:
			if (((((((((func_1529(uParam0, &(Local_193[0 /*6*/])) && func_1530(uParam0, &(Local_193[1 /*6*/]))) && func_1531(uParam0, &(Local_193[2 /*6*/]))) && func_1532(uParam0, &(Local_193[3 /*6*/]))) && func_1535(uParam0, &(Local_193[4 /*6*/]))) && func_1540(uParam0, &(Local_193[6 /*6*/]))) && func_1541(uParam0, &(Local_193[7 /*6*/]))) && func_1542(uParam0, 0, 0)) && func_1543(uParam0, &(Local_193[12 /*6*/]))) && func_1544(uParam0))
			{
				return true;
			}
			break;
		case 8:
			if ((func_1540(uParam0, &(Local_193[6 /*6*/])) && func_1541(uParam0, &(Local_193[7 /*6*/]))) && func_1542(uParam0, 0, 1))
			{
				return true;
			}
			break;
		case 25:
			if ((func_1540(uParam0, &(Local_193[6 /*6*/])) && func_1541(uParam0, &(Local_193[7 /*6*/]))) && func_1542(uParam0, 0, 1))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_920(var uParam0)
{
	int iVar0;
	iVar0 = func_427(uParam0);
	if (iVar0 == 1)
	{
		if (!func_1545(&(Local_64[0 /*10*/]), joaat("COACH4"), joaat("A_M_M_VALTOWNFOLK_01"), func_1286(10, 6), func_1525(10, 6), 0, func_1286(1, 0)))
		{
			return false;
		}
		if (!func_1545(&(Local_64[1 /*10*/]), joaat("CART07"), joaat("A_M_M_VALTOWNFOLK_01"), -273.47f, 865.11f, 120.32f, 170.93f, 1, -254.91f, 779.28f, 116.73f))
		{
			return false;
		}
	}
	if (iVar0 == 2)
	{
		if (!func_1545(&(Local_64[2 /*10*/]), joaat("COACH2"), joaat("A_M_M_VALTOWNFOLK_01"), -266.64f, 816.58f, 119.07f, 192.81f, 2, func_1286(1, 0)))
		{
			return false;
		}
	}
	Local_64[1 /*10*/].f_6 = 180f;
	Local_64[1 /*10*/].f_7 = 4f;
	return true;
}

bool func_921(var uParam0)
{
	bool bVar0;
	int iVar1;
	bVar0 = true;
	iVar1 = func_427(uParam0);
	if (iLocal_192 == iVar1)
	{
		return true;
	}
	switch (iVar1)
	{
		case 0:
		case 1:
			break;
		case 2:
			func_1288(uParam0, 16);
			func_1288(uParam0, 17);
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			func_1288(uParam0, 2);
			func_1288(uParam0, 3);
			break;
		case 6:
			break;
		case 7:
			if (!func_1546())
			{
				bVar0 = false;
			}
			break;
		case 8:
			if (!func_1546())
			{
				bVar0 = false;
			}
			break;
		case 25:
			break;
	}
	if (bVar0)
	{
		iLocal_192 = iVar1;
	}
	return bVar0;
}

bool func_922(var uParam0)
{
	int iVar0;
	iVar0 = 1;
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_185[0]))
	{
		iLocal_185[0] = OBJECT::CREATE_OBJECT(joaat("P_CS_BOOKKELONIAN"), func_1547(0, 0), true, true, false, false, true);
		ENTITY::SET_ENTITY_VISIBLE(iLocal_185[0], false);
	}
	return iVar0;
}

void func_923()
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_148[0]))
	{
		iLocal_148[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-326.136f, 774.196f, 117.1439f, 0f, 0f, -80.01877f, 4.7f, 8.3f, 3.658114f, "Hotel lobby");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_148[2]))
	{
		iLocal_148[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-323.24f, 760.823f, 117.425f, 0f, 0f, 10.17426f, 2.5f, 4.1f, 2.246053f, "Room 1B Trigger");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_148[3]))
	{
		iLocal_148[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-322.9853f, 767.1719f, 121.745f, 0f, 0f, 9.898647f, 1.895354f, 1.163634f, 2.169331f, "Room 2A Trigger");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_148[4]))
	{
		iLocal_148[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-325.5834f, 765.8167f, 122.2634f, 0f, 0f, 9.807425f, 6.25264f, 3.930783f, 4.049407f, "Room 2A");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_148[5]))
	{
		iLocal_148[5] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-321.7666f, 767.3011f, 122.2634f, 0f, 0f, 9.807425f, 2.697198f, 5.538771f, 4.049407f, "Room 2A Corridor");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_148[6]))
	{
		iLocal_148[6] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-324.829f, 760.515f, 121.7f, 0f, 0f, 10.17426f, 6f, 4.2f, 2.246053f, "Room 2B");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_148[7]))
	{
		iLocal_148[7] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-321.453f, 762.211f, 121.557f, 0f, 0f, 99.79114f, 1.4f, 1f, 2f, "Outside Room 2B");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_148[8]))
	{
		iLocal_148[8] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-322.6324f, 768.0882f, 120.8146f, 0f, 0f, 10.30947f, 13.27007f, 18.5f, 13.65458f, "Hotel");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_148[10]))
	{
		iLocal_148[10] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-319.5674f, 795.5941f, 118.348f, 0f, 0f, 11.84713f, 4.576463f, 2.213936f, 3.164068f, "Outside Store");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_148[9]))
	{
		iLocal_148[9] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-323.7885f, 801.5636f, 118.0485f, 0f, 0f, 10.09653f, 8.787843f, 10.52318f, 2.581066f, "Store");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_148[26]))
	{
		iLocal_148[26] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-319.7123f, 796.5111f, 118.0249f, 0f, 0f, 9.903234f, 1.78752f, 2.371004f, 2.3232f, "Store Door Area");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_148[11]))
	{
		iLocal_148[11] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-309.4607f, 809.1609f, 118.0485f, 0f, 0f, 10.09653f, 11.7476f, 20.88702f, 13.7156f, "Saloon area");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_148[28]))
	{
		iLocal_148[28] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-327.4402f, 779.1634f, 116.8088f, 0f, 0f, 10.47009f, 12.47616f, 5.781073f, 9.017728f, "Do not Shout Uncle");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_148[12]))
	{
		iLocal_148[12] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-327.0691f, 777.8885f, 117.548f, 0f, 0f, 10.12848f, 1.183285f, 2.288709f, 2.429799f, "Hotel Front Door");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_148[32]))
	{
		iLocal_148[32] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-326.8756f, 776.5666f, 117.6319f, 0f, 0f, 10.52339f, 0.820214f, 1.207578f, 1.228557f, "Return to Uncle");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_148[13]))
	{
		iLocal_148[13] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-328.6938f, 770.6879f, 117.266f, 0f, 0f, 10.10369f, 1.786349f, 3.325892f, 3.797689f, "Hotel Stairs Lower");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_148[14]))
	{
		iLocal_148[14] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-329.0969f, 772.7748f, 117.7316f, 0f, 0f, 9.590714f, 1.981164f, 2.987708f, 2.72065f, "Hotel Stairs Lower Landing");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_148[15]))
	{
		iLocal_148[15] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-325.3015f, 769.9739f, 120.3746f, 0f, 0f, 9.775083f, 1.418899f, 1.955612f, 2.899574f, "Hotel Stairs Upper");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_148[1]))
	{
		iLocal_148[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-321.8615f, 768.0106f, 117.5703f, 0f, 0f, 10.91352f, 1.497764f, 8.382013f, 2.400268f, "Hotel Corridor");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_148[16]))
	{
		iLocal_148[16] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-320.9656f, 762.1848f, 121.5817f, 0f, 0f, 8.916195f, 1.893108f, 4.161478f, 1.952555f, "Hotel Corridor 2B");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_148[30]))
	{
		iLocal_148[30] = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), -324.8312f, 759.306f, 117.3287f, 0f, 0f, 0f, 1f, 1f, 0.99108f);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_148[18]))
	{
		iLocal_148[18] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-99.72546f, 420.7887f, 116.2904f, 0f, 0f, 38.50489f, 15.87167f, 21.50184f, 8.011105f, "Coach breakdown");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_148[19]))
	{
		iLocal_148[19] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-88.60219f, 406.2653f, 115.7108f, 0f, 0f, 34.97769f, 22.37036f, 146.649f, 15.58743f, "Coach control");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_148[20]))
	{
		iLocal_148[20] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-76.13572f, 444.6071f, 111.9417f, 0f, 0f, -46.99872f, 30.46759f, 14.53801f, 13.35281f, "Horse Wander");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_148[21]))
	{
		iLocal_148[21] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-102.2794f, 204.1462f, 98.32308f, 0f, 0f, 44.59089f, 161.625f, 69.09073f, 23.5759f, "Coach Trigger");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_148[22]))
	{
		iLocal_148[22] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-324.8899f, 761.5886f, 121.3969f, 0f, 0f, 9.614109f, 2.814002f, 2.112928f, 1.655267f, "Fight Area");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_148[25]))
	{
		iLocal_148[25] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-307.2652f, 789.8558f, 120.3391f, 0f, 0f, 6.500092f, 108.5425f, 29.74852f, 22.88423f, "Slow down - main road");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_148[31]))
	{
		iLocal_148[31] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-313.7737f, 770.0735f, 118.0147f, 0f, 0f, 9.537144f, 4.128031f, 39.97984f, 4.249905f, "Aim at Foreman");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_148[24]))
	{
		iLocal_148[24] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-323.0461f, 794.4801f, 117.2151f, 0f, 0f, 10.38625f, 13.91775f, 1.269962f, 3.397987f, "Store Walkway Area");
		PATHFIND::_0x19C7567D2F2287D6(iLocal_148[24], 16);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_148[33]))
	{
		iLocal_148[33] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-101.3056f, -27.69495f, 96.144f, 0f, 0f, 44.89082f, 4.882816f, 4.12219f, 1.580824f, "Mission Start");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_148[35]))
	{
		iLocal_148[35] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-354.2614f, 492.5867f, 97.20063f, 0f, 0f, 0f, 3.811854f, 2.888566f, 1.937776f, "Jimmy Options");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(Local_284[4 /*5*/]))
	{
		Local_284[4 /*5*/] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-330.0451f, 786.166f, 116.8955f, 0f, 0f, 9.60323f, 14.54616f, 19.7345f, 5f, "Restrict hotel road");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(Local_284[12 /*5*/]))
	{
		Local_284[12 /*5*/] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-323.7885f, 801.5636f, 118.0485f, 0f, 0f, 10.09653f, 8.787843f, 10.52318f, 2.581066f, "Store Restriction");
		func_468(&(Local_284[12 /*5*/]), 1, 0, 0, 0, 0, 0);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(Local_284[5 /*5*/]))
	{
		Local_284[5 /*5*/] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-314.4295f, 768.2096f, 118.2428f, 0f, 0f, 10.03716f, 3.104074f, 20.5127f, 2.680821f, "Tilly Client");
		func_468(&(Local_284[5 /*5*/]), 1, 1, 1, 0, 0, 0);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(Local_284[9 /*5*/]))
	{
		Local_284[9 /*5*/] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-313.7737f, 770.0735f, 118.0147f, 0f, 0f, 9.537145f, 4.128031f, 27.22503f, 4.249905f, "Alley");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(Local_284[10 /*5*/]))
	{
		Local_284[10 /*5*/] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-308.6733f, 739.4434f, 118.6049f, 0f, 0f, 10.05356f, 27.64356f, 35.63404f, 8.057856f, "Behind Foreman");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(Local_284[6 /*5*/]))
	{
		Local_284[6 /*5*/] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-319.5317f, 795.1353f, 116.9459f, 0f, 0f, 10.03716f, 1.790013f, 6.723003f, 2.499737f, "Outside Store Restrict");
		func_468(&(Local_284[6 /*5*/]), 1, 1, 1, 0, 0, 0);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(Local_284[7 /*5*/]))
	{
		Local_284[7 /*5*/] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-323.4898f, 795.7202f, 117.596f, 0f, 0f, 10.25459f, 2.168332f, 1f, 1.573491f, "Store seats");
		func_468(&(Local_284[7 /*5*/]), 1, 1, 1, 0, 0, 0);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(Local_284[8 /*5*/]))
	{
		Local_284[8 /*5*/] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-336.2482f, 792.0504f, 116.1613f, 0f, 0f, 10.25459f, 3.210605f, 2.941596f, 2.136564f, "Hitch");
		func_468(&(Local_284[8 /*5*/]), 1, 1, 1, 0, 0, 0);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(Local_284[13 /*5*/]))
	{
		Local_284[13 /*5*/] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-321.3549f, 789.2672f, 117.7668f, 0f, 0f, 9.956276f, 7.275182f, 13.43859f, 4.358714f, "Cutscene Find Karen");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(Local_284[14 /*5*/]))
	{
		Local_284[14 /*5*/] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-334.8787f, 788.1719f, 117.3448f, 0f, 0f, 10.49879f, 13.43181f, 15.4193f, 5.803967f, "Cutscene Chase Man");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(Local_284[15 /*5*/]))
	{
		Local_284[15 /*5*/] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-277.9819f, 725.3595f, 119.7855f, 0f, 0f, 16.49869f, 127.2031f, 178.3945f, 45.41515f, "No traffic");
		func_468(&(Local_284[15 /*5*/]), 1, 1, 1, 0, 1, 1);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(Local_284[16 /*5*/]))
	{
		Local_284[16 /*5*/] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-292.2795f, 590.782f, 105.5384f, 0f, 0f, 53.50403f, 77.36883f, 34.9069f, 24.75234f, "No traffic Chase 01");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(Local_284[17 /*5*/]))
	{
		Local_284[17 /*5*/] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-235.8405f, 601.7092f, 113.9107f, 0f, 0f, 56.81889f, 33.38659f, 28.64467f, 19.35041f, "No traffic Chase 02");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(Local_284[18 /*5*/]))
	{
		Local_284[18 /*5*/] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-301.0691f, 578.1759f, 110.0839f, 0f, 0f, -8.500184f, 52.33181f, 30.69739f, 22.83878f, "Chase Clear");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(Local_284[19 /*5*/]))
	{
		Local_284[19 /*5*/] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-201.0805f, 645.2447f, 114.7712f, 0f, 0f, -39.49972f, 11.38383f, 10.64879f, 3.682855f, "Train Station");
		func_468(&(Local_284[19 /*5*/]), 1, 1, 1, 0, 0, 0);
	}
}

void func_924(var uParam0)
{
	int iVar0;
	iVar0 = func_427(uParam0);
	if (iVar0 >= 5)
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(Local_284[1 /*5*/]))
		{
			Local_284[1 /*5*/] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-327.2007f, 780.0709f, 116.446f, 0f, 0f, 8.974998f, 3.005465f, 7f, 7.163061f, "Restrict outside hotel");
			func_468(&(Local_284[1 /*5*/]), 1, 0, 0, 0, 0, 0);
		}
	}
}

void func_925(var uParam0)
{
	int iVar0;
	iVar0 = func_427(uParam0);
	__LIB_8__::func_806(uParam0, Global_35, __LIB_0__::func_731(Global_35), 0, 0, 0, 0);
	switch (iVar0)
	{
		case 0:
			__LIB_8__::func_806(uParam0, Global_35, __LIB_0__::func_731(Global_35), 0, 0, 0, 0);
			__LIB_8__::func_806(uParam0, Local_193[0 /*6*/], __LIB_0__::func_731(Local_193[0 /*6*/]), 0, 0, 0, 0);
			__LIB_8__::func_806(uParam0, Local_193[1 /*6*/], __LIB_0__::func_731(Local_193[1 /*6*/]), 0, 0, 0, 0);
			__LIB_8__::func_806(uParam0, Local_193[2 /*6*/], __LIB_0__::func_731(Local_193[2 /*6*/]), 0, 0, 0, 0);
			__LIB_8__::func_806(uParam0, Local_193[3 /*6*/], __LIB_0__::func_731(Local_193[3 /*6*/]), 0, 0, 0, 0);
			func_1548(uParam0, &Local_579, "WAGON03X", 1, "Horse_01", "Horse_01^1");
			break;
		case 1:
			break;
		case 2:
			__LIB_8__::func_806(uParam0, Global_35, __LIB_0__::func_731(Global_35), 0, 0, 0, 0);
			__LIB_8__::func_806(uParam0, Local_193[0 /*6*/], __LIB_0__::func_731(Local_193[0 /*6*/]), 0, 0, 0, 0);
			__LIB_8__::func_806(uParam0, Local_193[1 /*6*/], __LIB_0__::func_731(Local_193[1 /*6*/]), 0, 0, 0, 0);
			__LIB_8__::func_806(uParam0, Local_193[2 /*6*/], __LIB_0__::func_731(Local_193[2 /*6*/]), 0, 0, 0, 0);
			__LIB_8__::func_806(uParam0, Local_193[3 /*6*/], __LIB_0__::func_731(Local_193[3 /*6*/]), 0, 0, 0, 0);
			func_1548(uParam0, &Local_579, "WAGON03X", 1, "Horse_01", "Horse_01^1");
			break;
		case 3:
			break;
		case 4:
			__LIB_8__::func_806(uParam0, Global_35, __LIB_0__::func_731(Global_35), 0, 0, 0, 0);
			__LIB_8__::func_806(uParam0, Local_193[0 /*6*/], __LIB_0__::func_731(Local_193[0 /*6*/]), 0, 0, 0, 0);
			__LIB_8__::func_806(uParam0, Local_193[1 /*6*/], __LIB_0__::func_731(Local_193[1 /*6*/]), 0, 0, 0, 0);
			__LIB_8__::func_806(uParam0, Local_193[2 /*6*/], __LIB_0__::func_731(Local_193[2 /*6*/]), 0, 0, 0, 0);
			__LIB_8__::func_806(uParam0, Local_193[3 /*6*/], __LIB_0__::func_731(Local_193[3 /*6*/]), 0, 0, 0, 0);
			__LIB_8__::func_806(uParam0, Local_193[5 /*6*/], "G_M_M_UNIAFRICANAMERICANGANG_01", 0, 0, 0, 0);
			__LIB_8__::func_806(uParam0, Local_193[4 /*6*/], "A_M_M_ValTownfolk_02", 0, 0, 0, 0);
			__LIB_5__::func_580(uParam0, __LIB_3__::func_659(706990067, 0, 0), "p_door_val_genstore", 0, 0, 0, 0);
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			__LIB_8__::func_806(uParam0, Global_35, __LIB_0__::func_731(Global_35), 0, 0, 0, 0);
			__LIB_8__::func_806(uParam0, Local_193[0 /*6*/], __LIB_0__::func_731(Local_193[0 /*6*/]), 0, 0, 0, 0);
			__LIB_8__::func_806(uParam0, Local_193[1 /*6*/], __LIB_0__::func_731(Local_193[1 /*6*/]), 0, 0, 0, 0);
			__LIB_8__::func_806(uParam0, Local_193[2 /*6*/], __LIB_0__::func_731(Local_193[2 /*6*/]), 0, 0, 0, 0);
			__LIB_8__::func_806(uParam0, Local_193[3 /*6*/], __LIB_0__::func_731(Local_193[3 /*6*/]), 0, 0, 0, 0);
			__LIB_8__::func_806(uParam0, Local_193[6 /*6*/], "A_M_M_ValTownfolk_02", 0, 0, 0, 0);
			__LIB_8__::func_806(uParam0, Local_193[7 /*6*/], "Horse_01", 0, 0, 0, 0);
			__LIB_8__::func_806(uParam0, iLocal_141, "Horse_01^1", 0, 0, 0, 0);
			__LIB_5__::func_580(uParam0, __LIB_3__::func_659(1879307167, 0, 0), "p_door33x", 0, 0, 0, 0);
			__LIB_8__::func_788(uParam0, Local_193[1 /*6*/], 16);
			break;
		case 8:
			break;
		case 25:
			__LIB_8__::func_806(uParam0, Global_35, __LIB_0__::func_731(Global_35), 0, 0, 0, 0);
			__LIB_8__::func_806(uParam0, Local_193[6 /*6*/], "BLWWITNESS", 0, 0, 0, 0);
			__LIB_8__::func_806(uParam0, Local_193[7 /*6*/], "Horse_01", 0, 0, 0, 0);
			break;
		case 26:
			break;
	}
}

int func_926(var uParam0)
{
	int iVar0;
	__LIB_2__::func_608(&uLocal_471);
	iVar0 = func_427(uParam0);
	switch (iVar0)
	{
		case 0:
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 25:
			break;
		case 26:
			break;
	}
	return 1;
}

int func_928(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = func_427(uParam0);
	func_921(uParam0);
	func_919(uParam0, 26);
	switch (iVar0)
	{
		case 0:
			if (__LIB_9__::func_126(uParam0) > 55000)
			{
				func_1552();
			}
			if (func_167(32))
			{
				if (!func_167(73))
				{
					func_1553(uParam0, &Local_579, 0, "Horse_01");
					func_1553(uParam0, &Local_579, 1, "Horse_01^1");
					func_398(73);
				}
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1121862613))
			{
				func_1273();
			}
			if (!func_167(84))
			{
				if (!PED::IS_PED_INJURED(Global_1357549.f_1675[0 /*5*/].f_3))
				{
					TASK::TASK_GO_STRAIGHT_TO_COORD(Global_1357549.f_1675[0 /*5*/].f_3, -95.9293f, -34.6021f, 94.8825f, 1f, 20000, 40000f, 1056964608 /* Float: 0.5f */, 0);
					func_398(84);
				}
			}
			func_1554(0);
			break;
		case 1:
			break;
		case 2:
			if (__LIB_9__::func_828(uParam0, Global_35, 0, 0, 1, 1))
			{
				__LIB_0__::func_489(7.471f, -8.7954f);
				__LIB_0__::func_569(joaat("MOTIONSTATE_WALK"), 3000, 0, 0, 1, 0, 0, 0);
			}
			break;
		case 3:
			break;
		case 4:
			if (__LIB_9__::func_828(uParam0, Global_35, 0, 0, 1, 1))
			{
				__LIB_0__::func_569(joaat("MOTIONSTATE_WALK"), 3000, 0, 1, 1, 0, 0, 0);
			}
			if (__LIB_0__::func_272(Local_193[1 /*6*/], 0))
			{
				if (__LIB_9__::func_828(uParam0, Local_193[1 /*6*/], __LIB_0__::func_731(Local_193[1 /*6*/]), 0, 1, 1))
				{
					func_1360(Local_193[1 /*6*/], func_233(3, 2), 2, 1073741824 /* Float: 2f */);
				}
			}
			if (__LIB_0__::func_272(Local_193[4 /*6*/], 0))
			{
				if (__LIB_9__::func_828(uParam0, Local_193[4 /*6*/], "A_M_M_ValTownfolk_02", 0, 1, 1))
				{
					func_1360(Local_193[4 /*6*/], func_233(3, 5), 2, 1073741824 /* Float: 2f */);
				}
			}
			if (!Local_1193[15 /*6*/].f_2)
			{
				iVar1 = 0;
				iVar2 = 0;
				if (__LIB_0__::func_272(Local_193[3 /*6*/], 0))
				{
					if (__LIB_9__::func_828(uParam0, Local_193[3 /*6*/], __LIB_0__::func_731(Local_193[3 /*6*/]), 0, 1, 1) || __LIB_4__::func_988(&(uParam0->f_7375), Local_193[3 /*6*/], 4))
					{
						iVar1 = 1;
					}
				}
				if (__LIB_0__::func_272(Local_193[5 /*6*/], 0))
				{
					if (__LIB_9__::func_828(uParam0, Local_193[5 /*6*/], "G_M_M_UNIAFRICANAMERICANGANG_01", 0, 1, 1) || __LIB_4__::func_988(&(uParam0->f_7375), Local_193[5 /*6*/], 4))
					{
						iVar2 = 1;
					}
				}
				if (iVar1 || iVar2)
				{
					func_1363(74, 0);
				}
			}
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			if (__LIB_9__::func_828(uParam0, Global_35, 0, 0, 1, 1))
			{
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1.75f, 2500, ENTITY::GET_ENTITY_HEADING(Global_35), false, false);
				if (CAM::_0xA24C1D341C6E0D53(0, 0, 0))
				{
					__LIB_8__::func_895(ENTITY::GET_ENTITY_COORDS(Local_193[7 /*6*/], true, false), 0);
				}
				else
				{
					CAM::SET_GAMEPLAY_COORD_HINT(-346.04f, 770.81f, 114.98f, 100, 1, 2000, 0);
				}
			}
			if (__LIB_9__::func_828(uParam0, Local_193[6 /*6*/], "A_M_M_ValTownfolk_02", 0, 1, 1))
			{
				if (__LIB_4__::func_948(uParam0, 4) && !__LIB_4__::func_937(uParam0, 8))
				{
					func_1360(Local_193[7 /*6*/], func_233(6, 6), 2, 1073741824 /* Float: 2f */);
				}
				else
				{
					func_1360(Local_193[7 /*6*/], func_233(6, 5), 2, 1073741824 /* Float: 2f */);
					TASK::TASK_STAND_STILL(Local_193[7 /*6*/], -1);
				}
			}
			if (__LIB_11__::func_763(uParam0) > 0.9f)
			{
				func_1560(&(Local_193[6 /*6*/]), 2, 0);
			}
			break;
		case 8:
			break;
		case 25:
			if (__LIB_9__::func_828(uParam0, Local_193[6 /*6*/], "BLWWITNESS", 0, 1, 1))
			{
				func_1409();
			}
			if (!func_167(42))
			{
				if (__LIB_9__::func_126(uParam0) > 500)
				{
					if (!func_167(4))
					{
						if (__LIB_0__::func_272(iLocal_141, 1))
						{
							ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(iLocal_141, vLocal_138, 7.51f, false, true);
						}
					}
					func_398(42);
				}
			}
			if (__LIB_9__::func_126(uParam0) > 2000)
			{
				func_1561();
			}
			func_1562(uParam0);
			break;
	}
	return 1;
}

bool func_930(var uParam0)
{
	int iVar0;
	bool bVar1;
	iVar0 = func_427(uParam0);
	bVar1 = true;
	if (!func_921(uParam0))
	{
		bVar1 = false;
	}
	if (!func_919(uParam0, 26))
	{
		bVar1 = false;
	}
	if (!bVar1)
	{
		return false;
	}
	switch (iVar0)
	{
		case 0:
			if (!func_1552())
			{
				bVar1 = false;
			}
			func_1273();
			func_1554(1);
			func_398(67);
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			if (!__LIB_2__::func_618(&uLocal_471))
			{
				__LIB_5__::func_107(&uLocal_471);
				TASK::CLEAR_PED_TASKS(Local_193[6 /*6*/], true, false);
				TASK::CLEAR_PED_TASKS(Local_193[7 /*6*/], true, false);
				func_1360(Local_193[7 /*6*/], func_233(6, 5), 2, 1073741824 /* Float: 2f */);
				func_1560(&(Local_193[6 /*6*/]), 2, 1);
				bVar1 = false;
			}
			else if (__LIB_9__::func_324(&uLocal_471) < 0.5f)
			{
				bVar1 = false;
			}
			break;
		case 8:
			break;
		case 25:
			func_1561();
			break;
		case 26:
			break;
	}
	return bVar1;
}

void func_934(var uParam0)
{
	int iVar0;
	func_924(uParam0);
	if (__LIB_0__::func_27(Local_193[8 /*6*/].f_4, 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_193[8 /*6*/]) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_193[8 /*6*/], true))
		{
			if (!VOLUME::_DOES_VOLUME_EXIST(Local_284[0 /*5*/]))
			{
				Local_284[0 /*5*/] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-325.035f, 767.651f, 120.8146f, 0f, 0f, 10.30947f, 8.41f, 18.5f, 13.65458f, "Restrict inside hotel");
				func_468(&(Local_284[0 /*5*/]), 1, 1, 1, 0, 0, 0);
			}
		}
	}
	func_1272(uParam0, 0);
	__LIB_11__::func_388(8);
	VEHICLE::SET_DISABLE_RANDOM_TRAINS_THIS_FRAME(true);
	if (!func_167(0))
	{
		TASK::SET_SCENARIO_TYPE_ENABLED("PROP_PLAYER_PRPTY_SAVE_GAME", false);
		func_398(0);
	}
	iVar0 = func_427(uParam0);
	func_1564(uParam0);
	if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_148[8], true, 0))
	{
		LAW::_0x785177E4D57D7389(PLAYER::PLAYER_ID(), joaat("CRIME_TRESPASSING"), 0, 0, -1);
		LAW::_0x785177E4D57D7389(PLAYER::PLAYER_ID(), joaat("CRIME_VANDALISM"), 0, 0, -1);
	}
	LAW::_0x785177E4D57D7389(PLAYER::PLAYER_ID(), joaat("CRIME_HIT_AND_RUN"), 4, 0, -1);
	LAW::_0x785177E4D57D7389(PLAYER::PLAYER_ID(), joaat("CRIME_HIT_AND_RUN_LAW"), 4, 0, -1);
	LAW::_0x785177E4D57D7389(PLAYER::PLAYER_ID(), joaat("CRIME_UNARMED_ASSAULT"), 4, 0, -1);
	LAW::_0x785177E4D57D7389(PLAYER::PLAYER_ID(), joaat("CRIME_TRAMPLE"), 4, 0, -1);
	LAW::_0x785177E4D57D7389(PLAYER::PLAYER_ID(), joaat("CRIME_VANDALISM_VEHICLE"), 4, 0, -1);
	PED::SET_PED_RESET_FLAG(Global_35, 49, true);
	if (iVar0 == 2 || iVar0 == 4)
	{
		PED::SET_PED_RESET_FLAG(Global_35, 297, true);
		PED::SET_PED_RESET_FLAG(Global_35, 53, true);
		PED::SET_PED_RESET_FLAG(Global_35, 49, true);
	}
	func_1565(uParam0);
	if (func_1566(uParam0))
	{
		func_398(49);
	}
	func_1567(uParam0);
	if (iVar0 == 0 || iVar0 == 1)
	{
		if (__LIB_0__::func_1(Global_1935630, 4194304))
		{
			__LIB_0__::func_326(64);
			__LIB_0__::func_267(1);
		}
	}
	if (iVar0 >= 7)
	{
		if (PED::IS_PED_ON_MOUNT(Global_35))
		{
			if (__LIB_0__::func_272(PED::GET_MOUNT(Global_35), 0))
			{
				PED::SET_PED_RESET_FLAG(PED::GET_MOUNT(Global_35), 154, true);
			}
		}
	}
	if (func_167(26))
	{
		func_1568();
	}
	func_1569(uParam0);
	func_1570(uParam0);
	if (iVar0 > 4)
	{
		if (!func_167(8))
		{
			func_398(8);
		}
		if (!func_167(9))
		{
			func_398(9);
		}
		if (!func_167(23))
		{
			func_398(23);
		}
	}
	if (iVar0 <= 4)
	{
		if ((func_167(48) || func_167(49)) || func_1571(iVar0))
		{
			func_398(62);
			if (!__LIB_2__::func_618(&uLocal_489))
			{
				__LIB_5__::func_107(&uLocal_489);
			}
		}
		if (__LIB_1__::func_394(PLAYER::PLAYER_ID(), 1, 0, 1) || __LIB_14__::func_171(&uLocal_489) > 5000)
		{
			if (!__LIB_5__::func_52(uParam0))
			{
				__LIB_11__::func_423(uParam0, "LAW_FAIL", "", 1, 0);
			}
		}
	}
	else
	{
		if (func_167(49))
		{
			if (!__LIB_2__::func_618(&uLocal_489))
			{
				__LIB_5__::func_107(&uLocal_489);
			}
		}
		if (__LIB_14__::func_171(&uLocal_489) > 5000)
		{
			if (!__LIB_5__::func_52(uParam0))
			{
				__LIB_11__::func_423(uParam0, "LAW_FAIL", "", 1, 0);
			}
		}
	}
	if (func_167(32))
	{
		func_1572(uParam0, &Local_579);
	}
	func_1573(iVar0);
	func_1574(iVar0);
	func_1575();
	func_1576(uParam0);
	func_921(uParam0);
	func_1577();
	func_185(1);
	switch (iVar0)
	{
		case 0:
		case 1:
			if (!__LIB_8__::func_773(uParam0, 16))
			{
				__LIB_5__::func_33(uParam0, 16);
			}
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 25:
			break;
	}
	func_176(0);
}

bool func_951(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	if (__LIB_4__::func_937(uParam0, -2147483648))
	{
		return true;
	}
	if (__LIB_5__::func_481(uParam0, iParam1, 4))
	{
		if (__LIB_4__::func_939(uParam0) != 25 && __LIB_4__::func_939(uParam0) != 26)
		{
			if (!__LIB_4__::func_937(uParam0, 512) && !__LIB_4__::func_948(uParam0, 4))
			{
				__LIB_11__::func_427(uParam0, func_34(iParam1), func_34(iParam2), iParam1, iParam2);
			}
			else
			{
				Var0 = { func_34(iParam2) };
				Global_1347394 = { Var0 };
				Global_1347394.f_3 = Var0.f_3;
				Global_1572864.f_10 = __LIB_5__::func_24(iParam2);
			}
		}
		func_1590(uParam0);
		if (__LIB_5__::func_261(uParam0))
		{
			__LIB_5__::func_465(uParam0);
		}
		if (__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 33554432) && __LIB_4__::func_937(uParam0, 524288))
		{
			UILOG::_UILOG_PRINT_CACHED_OBJECTIVE();
		}
		__LIB_4__::func_969(uParam0, 524288);
		__LIB_4__::func_977(&(uParam0->f_7375), 4);
		if (__LIB_5__::func_576(uParam0))
		{
			__LIB_5__::func_334(uParam0, __LIB_4__::func_939(uParam0), 8388608);
			HUD::_HIDE_HUD_COMPONENT(-1679307491);
			HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
			__LIB_5__::func_112();
		}
		return true;
	}
	return false;
}

bool func_953(var uParam0, int iParam1)
{
	struct<4> Var0;
	if (__LIB_4__::func_948(uParam0, 16384))
	{
		if (func_908(uParam0))
		{
			__LIB_5__::func_326(&(uParam0->f_10792));
			__LIB_4__::func_969(uParam0, 2097152);
			__LIB_4__::func_958(uParam0, 16384);
			__LIB_4__::func_945(uParam0, 128);
			return true;
		}
		return false;
	}
	if (!__LIB_4__::func_937(uParam0, 4))
	{
		__LIB_0__::func_16(uParam0, iParam1);
		__LIB_4__::func_944(uParam0, 4);
	}
	Var0 = { __LIB_5__::func_299(uParam0, iParam1) };
	if (__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 2))
	{
		if (__LIB_4__::func_937(uParam0, 2097152))
		{
			if (func_908(uParam0))
			{
				__LIB_4__::func_969(uParam0, 2097152);
				func_910(uParam0, Var0);
			}
			return false;
		}
		else
		{
			return func_910(uParam0, Var0);
		}
	}
	else if (__LIB_4__::func_937(uParam0, 2097152))
	{
		if (func_908(uParam0))
		{
			__LIB_4__::func_969(uParam0, 2097152);
			__LIB_5__::func_56(uParam0);
			return true;
		}
		else
		{
			return false;
		}
	}
	if (__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 2))
	{
		return func_910(uParam0, Var0);
	}
	return true;
}

int func_972(int iParam0)
{
	if (func_1611(&Local_1179, iParam0))
	{
		if (Local_1179.f_10 == iParam0)
		{
			return 2;
		}
		else
		{
			return 3;
		}
	}
	if (func_1612(iParam0))
	{
		return 9;
	}
	return 0;
}

Vector3 func_1029(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -326.0201f, 772.8953f, 116.5f;
				case 1:
					return -327.3668f, 781.5378f, 115.6452f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return -351.32f, 790.8f, 116.08f;
				case 1:
					return -350.16f, 791.56f, 116.13f;
				case 2:
					return -338.99f, 790.26f, 116.18f;
				case 3:
					return -339.17f, 790.84f, 116.19f;
				case 4:
					return -339.16f, 789.53f, 116.06f;
				case 5:
					return -305.0698f, 802.1575f, 118.1785f;
				case 6:
					return -308.8508f, 800.3947f, 121.9764f;
				case 7:
					return -354.75f, 795.64f, 116.22f;
				case 8:
					return -255.3322f, 774.8866f, 116.4848f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return -320.4539f, 798.1614f, 116.9285f;
				case 1:
					return -319.9434f, 799.0307f, 116.9285f;
				case 2:
					return -310.0577f, 802.8054f, 117.9846f;
				case 3:
					return -308.3821f, 802.7764f, 117.9846f;
				case 4:
					return -312.5529f, 802.3956f, 117.9849f;
				case 5:
					return -305.0698f, 802.1575f, 118.1785f;
				case 6:
					return -308.8508f, 800.3947f, 121.9764f;
				case 7:
					return -354.75f, 795.64f, 116.22f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return -318.3275f, 788.3741f, 116.85f;
				case 1:
					return -322.9f, 795.73f, 117.52f;
				case 2:
					return -324.906f, 759.4006f, 120.6785f;
				case 3:
					return -323.89f, 795.09f, 117.86f;
				case 4:
					return -316.8f, 774.48f, 118f;
				case 5:
					return -325.2126f, 760.9454f, 120.6785f;
				case 6:
					return -316.01f, 774.52f, 118f;
				case 7:
					return -354.75f, 795.64f, 116.22f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return -323.3231f, 761.1764f, 120.6335f;
				case 1:
					return -322.9f, 795.73f, 117.52f;
				case 2:
					return -326.3378f, 758.9275f, 120.6785f;
				case 3:
					return -323.89f, 795.09f, 117.86f;
				case 4:
					return -324.5331f, 794.6096f, 117f;
				case 5:
					return -325.4876f, 761.2349f, 120.6785f;
				case 6:
					return -354.75f, 795.64f, 116.22f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return -323.4369f, 760.3066f, 120.6335f;
				case 1:
					return -322.9f, 795.73f, 117.52f;
				case 2:
					return -326.2505f, 758.9331f, 120.6785f;
				case 3:
					return -323.89f, 795.09f, 117.86f;
				case 4:
					return -324.5331f, 794.6096f, 117f;
				case 5:
					return -354.75f, 795.64f, 116.22f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return -335.61f, 792.01f, 116.45f;
				case 1:
					return -330.7f, 791.63f, 116.58f;
				case 2:
					return -331.71f, 792.2f, 116.63f;
				case 3:
					return -330.82f, 792.58f, 116.67f;
				case 4:
					return -331.43f, 792.85f, 116.66f;
				case 5:
					return -343.898f, 774.7308f, 114.5924f;
				case 6:
					return -349.0799f, 759.9757f, 115.82f;
				case 7:
					return -354.75f, 795.64f, 116.22f;
				case 8:
					return -335.72f, 791.53f, 116.44f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return -353.1609f, 492.5105f, 95.967f;
				case 1:
					return -330.7f, 791.63f, 116.58f;
				case 2:
					return -331.71f, 792.2f, 116.63f;
				case 3:
					return -330.82f, 792.58f, 116.67f;
				case 4:
					return -331.43f, 792.85f, 116.66f;
				case 5:
					return -354.4173f, 488.9048f, 94.6489f;
				case 6:
					return -358.6641f, 493.7976f, 95.9759f;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return -353.8465f, 493.5064f, 95.967f;
				case 1:
					return -330.7f, 791.63f, 116.58f;
				case 2:
					return -331.71f, 792.2f, 116.63f;
				case 3:
					return -330.82f, 792.58f, 116.67f;
				case 4:
					return -331.43f, 792.85f, 116.66f;
				case 5:
					return -355.3583f, 491.0498f, 96.1489f;
				case 6:
					return -363.143f, 500.9677f, 95.9033f;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return -171.14f, 600.056f, 112.1263f;
				case 1:
					return -168.138f, 601.2254f, 112.1263f;
				case 2:
					return -167.7763f, 604.0258f, 112.1263f;
				case 3:
					return -165.5906f, 598.8286f, 112.1263f;
				case 4:
					return -166.3826f, 597.9648f, 112.1263f;
				case 5:
					return -164.688f, 599.5632f, 112.1263f;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return -99.7336f, -28.8343f, 94.9575f;
				case 1:
					return -100.1908f, -25.6157f, 94.9512f;
				case 2:
					return -110.7449f, -43.8278f, 94.8639f;
				case 3:
					return -111.4169f, -39.8958f, 94.8551f;
				case 4:
					return -110.0073f, -42.1281f, 94.8747f;
				case 5:
					return -102.0014f, -25.9114f, 95.9128f;
				case 6:
					return -341.7697f, 750.2531f, 115.1958f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_1030(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -23.3797f;
				case 1:
					return 365.3759f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return -119.29f;
				case 1:
					return -129.79f;
				case 2:
					return -64.66f;
				case 3:
					return -65.83f;
				case 4:
					return -67.58f;
				case 5:
					return 467.1077f;
				case 6:
					return 7.1078f;
				case 7:
					return 24.67f;
				case 8:
					return 13.4f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 373.1077f;
				case 1:
					return 275.1077f;
				case 2:
					return 357.1077f;
				case 3:
					return 357.1077f;
				case 4:
					return 357.1077f;
				case 5:
					return 467.1077f;
				case 6:
					return 7.1078f;
				case 7:
					return 24.67f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return -164.97f;
				case 1:
					return -179.75f;
				case 2:
					return 371.1077f;
				case 3:
					return -96.62f;
				case 4:
					return -69.55f;
				case 5:
					return 191.1077f;
				case 6:
					return 82.08f;
				case 7:
					return 24.67f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 459.1077f;
				case 1:
					return -179.75f;
				case 2:
					return 299.1077f;
				case 3:
					return -96.62f;
				case 4:
					return -147.55f;
				case 5:
					return 639.1077f;
				case 6:
					return 24.67f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 117.1077f;
				case 1:
					return -179.75f;
				case 2:
					return 301.1077f;
				case 3:
					return -96.62f;
				case 4:
					return -147.55f;
				case 5:
					return 24.67f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 142.4f;
				case 1:
					return 97.76f;
				case 2:
					return 115.18f;
				case 3:
					return 122.22f;
				case 4:
					return 145.27f;
				case 5:
					return 165.58f;
				case 6:
					return -165.94f;
				case 7:
					return 24.67f;
				case 8:
					return 7.51f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 537.1077f;
				case 1:
					return 97.76f;
				case 2:
					return 115.18f;
				case 3:
					return 122.22f;
				case 4:
					return 145.27f;
				case 5:
					return 367.1077f;
				case 6:
					return 405.1077f;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return 541.1077f;
				case 1:
					return 97.76f;
				case 2:
					return 115.18f;
				case 3:
					return 122.22f;
				case 4:
					return 145.27f;
				case 5:
					return 361.1077f;
				case 6:
					return 581.1077f;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 38.1019f;
				case 1:
					return 50.1019f;
				case 2:
					return 42.1019f;
				case 3:
					return 42.1019f;
				case 4:
					return 50.1019f;
				case 5:
					return 44.1019f;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return 39.1289f;
				case 1:
					return 257.9099f;
				case 2:
					return 68.9315f;
				case 3:
					return 68.331f;
				case 4:
					return 73.9425f;
				case 5:
					return -33.1039f;
				case 6:
					return 10.9f;
			}
			break;
	}
	return 0f;
}

void func_1177(int iParam0, int iParam1)
{
	if (__LIB_0__::func_192(iParam1, 130796156))
	{
		__LIB_10__::func_380(iParam1, 0);
	}
	else if (__LIB_0__::func_192(iParam1, 930141731))
	{
		__LIB_10__::func_380(iParam1, 1);
		func_1754(iParam0);
	}
}

void func_1190(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (bParam0)
	{
		func_328(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_328(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_328(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_1759(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_331(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_690(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_1764(Var0);
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

void func_1193(bool bParam0)
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
		func_328(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_328(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_328(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_328(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_328(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_328(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_328(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_328(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_328(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_328(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_328(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_690(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_690(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_690(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_690(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_690(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_690(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_690(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_690(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_690(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_690(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_690(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
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

int func_1238(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
							iVar49 = (iVar49 + func_1238(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1238(iVar63, -915411861, 1, 0, 0));
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

void func_1266(var uParam0)
{
	int iVar0;
	iVar0 = func_427(uParam0);
	switch (iVar0)
	{
		case 0:
			break;
		case 1:
			CLOCK::SET_CLOCK_TIME(14, 0, 0);
			break;
		case 2:
			CLOCK::SET_CLOCK_TIME(14, 0, 0);
			break;
		case 3:
			CLOCK::SET_CLOCK_TIME(14, 0, 0);
			break;
		case 4:
			CLOCK::SET_CLOCK_TIME(15, 0, 0);
			break;
		case 5:
			CLOCK::SET_CLOCK_TIME(15, 0, 0);
			break;
		case 6:
			CLOCK::SET_CLOCK_TIME(15, 0, 0);
			break;
		case 7:
			CLOCK::SET_CLOCK_TIME(17, 30, 0);
			break;
		case 8:
			CLOCK::SET_CLOCK_TIME(17, 45, 0);
			break;
		case 25:
			CLOCK::SET_CLOCK_TIME(18, 0, 0);
			break;
	}
}

void func_1268(var uParam0)
{
	if (!func_167(43))
	{
		__LIB_4__::func_570(&(uParam0->f_7375));
		__LIB_4__::func_655(&(uParam0->f_7375));
		__LIB_10__::func_925(uParam0, "1-IfMUD2Complete");
		__LIB_10__::func_925(uParam0, "2-IfMUD2NotComplete");
		func_398(43);
	}
}

void func_1270(var uParam0)
{
	func_1268(uParam0);
	if (__LIB_1__::func_185(5))
	{
		__LIB_11__::func_771(uParam0, "1-IfMUD2Complete");
	}
	else
	{
		__LIB_11__::func_771(uParam0, "2-IfMUD2NotComplete");
	}
}

void func_1272(var uParam0, bool bParam1)
{
	int iVar0;
	iVar0 = func_427(uParam0);
	switch (iVar0)
	{
		case 0:
			if (__LIB_0__::func_12() == 71)
			{
				func_168(81);
				if (STREAMING::_0x8A3945405B31048F() > 0.5f || bParam1)
				{
					__LIB_5__::func_521(0.5f);
				}
			}
			else
			{
				if (!func_167(81))
				{
					bParam1 = true;
					func_398(81);
				}
				if (STREAMING::_0x8A3945405B31048F() > 0.65f || bParam1)
				{
					__LIB_5__::func_521(0.65f);
				}
			}
			break;
		case 1:
			if (STREAMING::_0x8A3945405B31048F() > 0.65f || bParam1)
			{
				__LIB_5__::func_521(0.65f);
			}
			break;
		case 2:
			if (STREAMING::_0x8A3945405B31048F() > 0.7f || bParam1)
			{
				__LIB_5__::func_521(0.7f);
			}
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 25:
			if (STREAMING::_0x8A3945405B31048F() > 0.7f || bParam1)
			{
				__LIB_5__::func_521(0.7f);
			}
			break;
	}
}

void func_1273()
{
	func_398(76);
	if (func_1823(19, 10, 20, 15))
	{
		CLOCK::SET_CLOCK_TIME(6, 0, 0);
		return;
	}
	if (func_1823(20, 15, 21, 0))
	{
		CLOCK::SET_CLOCK_TIME(5, 0, 0);
		return;
	}
	if (func_1823(21, 0, 4, 0))
	{
		CLOCK::SET_CLOCK_TIME(4, 0, 0);
		return;
	}
}

void func_1275(var uParam0, int iParam1, bool bParam2)
{
	struct<27> Var0;
	int iVar38;
	int iVar39;
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
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return;
	}
	iVar39 = uParam0->f_5;
	if (!__LIB_0__::func_272(*uParam0, 0))
	{
		iParam1 = 6;
	}
	if (iVar39 == iParam1 && !bParam2)
	{
		return;
	}
	if (iVar39 == 1)
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
	}
	if (iParam1 == 12)
	{
		if (iVar39 >= 12)
		{
			return;
		}
	}
	uParam0->f_5 = iParam1;
	switch (iParam1)
	{
		case 0:
			break;
		case 1:
			PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(*uParam0, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, false);
			break;
		case 2:
			PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(*uParam0, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
			break;
		case 3:
			break;
		case 4:
			TASK::OPEN_SEQUENCE_TASK(&iVar38);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -348.9395f, 793.4389f, 115.1835f, 1f, 20000, 1f, 0, 40000f);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
			TASK::CLOSE_SEQUENCE_TASK(iVar38);
			TASK::TASK_PERFORM_SEQUENCE(*uParam0, iVar38);
			TASK::CLEAR_SEQUENCE_TASK(&iVar38);
			break;
		case 5:
			break;
		case 6:
			break;
		case 9:
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(*uParam0, Global_35, -1, -1f, -1f, -1f);
			TASK::TASK_LOOK_AT_ENTITY(*uParam0, Global_35, -1, 0, 51, 0);
			break;
		case 7:
			__LIB_3__::func_895(&Var0);
			__LIB_11__::func_9(*uParam0, Global_35, &Var0, 0f, 0f, 0f, func_421(0), 25614, 1, 3f, 1.5f, 2f, 1f, 1092616192 /* Float: 10f */, -1, 1, 0, 0, 0, 1);
			break;
		case 8:
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(*uParam0, Global_35, -1, -1f, -1f, -1f);
			break;
		case 10:
			func_1828(uParam0, 13, 60, "uncle");
			break;
		case 11:
			break;
		case 12:
			break;
		case 13:
			break;
		case 14:
			func_192(0, 16);
			break;
		case 15:
			func_192(0, 8);
			break;
		case 16:
			func_192(0, 6);
			break;
		case 17:
			break;
		case 18:
			break;
		case 19:
			break;
		case 20:
			break;
		case 21:
			break;
	}
}

void func_1276(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	struct<27> Var2;
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return;
	}
	iVar1 = uParam0->f_5;
	if (!__LIB_0__::func_272(*uParam0, 0))
	{
		iParam1 = 4;
	}
	if (iVar1 == iParam1 && !bParam2)
	{
		return;
	}
	uParam0->f_5 = iParam1;
	switch (iParam1)
	{
		case 0:
			break;
		case 1:
			PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(*uParam0, 1);
			break;
		case 2:
			break;
		case 3:
			TASK::CLEAR_PED_TASKS(*uParam0, true, false);
			break;
		case 4:
			break;
		case 5:
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -347.5778f, 789.9851f, 115.0575f, 1.25f, -1, 1.5f, 3145732, 40000f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_1286(2, 2), 1.25f, -1, 0.25f, 1048580, 40000f);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(*uParam0, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			break;
		case 6:
			TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(*uParam0, -313.44f, 801.78f, 117.98f, 1f, -1, false, false, true, false);
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 10:
			TASK::CLEAR_PED_TASKS(*uParam0, true, false);
			TASK::TASK_LOOK_AT_ENTITY(*uParam0, Global_35, -1, 0, 51, 0);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(*uParam0, Global_35, -1, -1f, -1f, -1f);
			break;
		case 11:
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, func_421(2), 0, 4622, -1, 0, 0, -1);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_193[0 /*6*/], -1, -1f, -1f, -1f);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(*uParam0, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			break;
		case 12:
			TASK::TASK_LOOK_AT_ENTITY(*uParam0, Global_35, 10000, 0, 51, 0);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(*uParam0, Global_35, -1, -1f, -1f, -1f);
			break;
		case 13:
			Var2.f_4 = 1065353216;
			Var2.f_5 = 1065353216;
			Var2.f_9 = 1065353216;
			Var2.f_10 = 1065353216;
			Var2.f_14 = 1065353216;
			Var2.f_15 = 1065353216;
			Var2.f_17 = 1040187392;
			Var2.f_18 = 1040187392;
			Var2.f_19 = -1;
			Var2.f_26 = -1082130432;
			__LIB_3__::func_895(&Var2);
			__LIB_11__::func_9(*uParam0, Global_35, &Var2, 0f, 0f, 0f, func_421(2), 25614, 1, (3f * 0.75f), (1.5f * 0.75f), (2f * 0.5f), 1f, 1092616192 /* Float: 10f */, -1, 1, 0, 1, 0, 1);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 252, false);
			break;
		case 14:
			TASK::TASK_FOLLOW_WAYPOINT_RECORDING(*uParam0, func_421(2), 0, 4622, -1, 0, 0, -1);
			break;
		case 15:
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(*uParam0, Global_35, -1, -1f, -1f, -1f);
			break;
	}
}

void func_1277(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return;
	}
	iVar0 = uParam0->f_5;
	if (!__LIB_0__::func_272(*uParam0, 0))
	{
		iParam1 = 4;
	}
	if (iVar0 == iParam1 && !bParam2)
	{
		return;
	}
	uParam0->f_5 = iParam1;
	switch (iParam1)
	{
		case 0:
			break;
		case 1:
			PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(*uParam0, 1);
			break;
		case 2:
			break;
		case 3:
			TASK::CLEAR_PED_TASKS(*uParam0, true, false);
			break;
		case 4:
			break;
		case 5:
			TASK::TASK_FOLLOW_AND_CONVERSE_WITH_PED(*uParam0, Local_193[1 /*6*/], 0, 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 8, 0, 0, 1069547520 /* Float: 1.5f */, 1073741824 /* Float: 2f */);
			break;
		case 6:
			TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(*uParam0, -303.65f, 806.78f, 117.98f, 1f, -1, false, false, true, false);
			break;
	}
}

void func_1278(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	iVar1 = iParam0->f_5;
	if (!__LIB_0__::func_272(*iParam0, 0))
	{
		iParam1 = 6;
	}
	if (iVar1 == iParam1 && !bParam2)
	{
		return;
	}
	func_460(&iLocal_1103, &Local_1068, iParam0, 0);
	if (iParam0->f_5 == 2)
	{
		func_398(57);
	}
	iParam0->f_5 = iParam1;
	switch (iParam1)
	{
		case 0:
			break;
		case 1:
			PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(*iParam0, 1);
			break;
		case 2:
			__LIB_3__::func_157(&(Local_1068[0 /*17*/]), "MUD3_C_T_POS", 0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
			__LIB_1__::func_471(&(Local_1068[0 /*17*/]), 10);
			__LIB_3__::func_157(&(Local_1068[1 /*17*/]), "MUD3_C_T_NEG", 0, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
			__LIB_1__::func_471(&(Local_1068[1 /*17*/]), 10);
			break;
		case 3:
			break;
		case 4:
			TASK::CLEAR_PED_TASKS(*iParam0, true, false);
			break;
		case 6:
			break;
		case 7:
			TASK::TASK_FOLLOW_AND_CONVERSE_WITH_PED(*iParam0, Local_193[1 /*6*/], 0, 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 8, 0, 0, 1069547520 /* Float: 1.5f */, 1073741824 /* Float: 2f */);
			break;
		case 8:
			TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(*iParam0, -313.01f, 808.8f, 120.98f, 1f, -1, false, false, true, false);
			break;
		case 5:
			break;
		case 9:
			__LIB_11__::func_598(&iLocal_1103, 0);
			__LIB_3__::func_157(&(Local_1068[0 /*17*/]), "MUD3_C_T_OK", 0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
			__LIB_1__::func_471(&(Local_1068[0 /*17*/]), 10);
			__LIB_5__::func_107(&uLocal_492);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 4000, -1f, -1f, -1f);
			TASK::TASK_START_SCENARIO_AT_POSITION(0, joaat("WORLD_HUMAN_POCKET_MIRROR"), func_1286(5, 4), func_1525(5, 4), -1, true, false, 0, -1f, false);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_193[2 /*6*/], 0, -1f, -1f, -1f);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(*iParam0, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			break;
		case 10:
			break;
		case 11:
			TASK::TASK_START_SCENARIO_AT_POSITION(*iParam0, joaat("WORLD_HUMAN_POCKET_MIRROR"), func_1286(5, 4), func_1525(5, 4), -1, true, false, 0, -1f, false);
			break;
	}
}

void func_1279(var uParam0, int iParam1, bool bParam2)
{
	if (iLocal_1336 == iParam1 && !bParam2)
	{
		return;
	}
	switch (iLocal_1336)
	{
		case 0:
			__LIB_0__::func_325(&iLocal_143);
			func_165();
			break;
		case 1:
			break;
		case 2:
			break;
	}
	iLocal_1336 = iParam1;
	switch (iLocal_1336)
	{
		case 0:
			__LIB_1__::func_971(0);
			func_1832();
			__LIB_4__::func_952(uParam0, 0);
			break;
		case 1:
			if (func_167(11))
			{
				func_168(11);
				PATHFIND::_0xD17672447692478E(iLocal_148[19], 0);
			}
			func_1294(20);
			__LIB_0__::func_325(&iLocal_144);
			__LIB_0__::func_325(&iLocal_143);
			__LIB_0__::func_325(&(Local_193[11 /*6*/].f_1));
			__LIB_4__::func_952(uParam0, 29);
			break;
		case 2:
			break;
	}
}

int func_1280(var uParam0)
{
	struct<4> Var0;
	if (__LIB_14__::func_140(&Var0))
	{
		if (((!MISC::ARE_STRINGS_EQUAL(__LIB_1__::func_464(4, 0), __LIB_0__::func_67(Var0)) && !MISC::ARE_STRINGS_EQUAL(__LIB_1__::func_464(15, 0), __LIB_0__::func_67(Var0))) && !MISC::ARE_STRINGS_EQUAL(__LIB_1__::func_464(22, 0), __LIB_0__::func_67(Var0))) && !MISC::ARE_STRINGS_EQUAL(__LIB_1__::func_464(20, 0), __LIB_0__::func_67(Var0)))
		{
			__LIB_11__::func_423(uParam0, "MUD3_F_CAMP", "", 1, 0);
			return 1;
		}
	}
	return 0;
}

void func_1281(var uParam0)
{
	if (((((!PED::IS_PED_IN_VEHICLE(Global_35, Local_579, false) && iLocal_577 != 12) && iLocal_577 != 11) && Local_589[0 /*9*/].f_8 != 4) && Local_589[0 /*9*/].f_8 != 5) && !bLocal_118)
	{
		if ((Local_589[0 /*9*/].f_8 == 2 || func_1835(74)) || func_167(35))
		{
			if (__LIB_0__::func_48(Global_35, Local_589[0 /*9*/], 20f, 1))
			{
				if (!func_167(28))
				{
					func_1300(2, 0, 0, 0, 0, 0);
					func_398(28);
				}
			}
		}
		func_1836();
	}
	if (func_1837())
	{
		if (!MAP::DOES_BLIP_EXIST(Local_193[11 /*6*/].f_1))
		{
			Local_193[11 /*6*/].f_1 = MAP::_BLIP_ADD_FOR_ENTITY(-89429847, Local_193[11 /*6*/]);
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_193[11 /*6*/].f_1, "MUD3_B_DRIVER");
		}
	}
	else
	{
		__LIB_0__::func_325(&(Local_193[11 /*6*/].f_1));
	}
	if (PED::IS_PED_IN_VEHICLE(Global_35, Local_579, false))
	{
		if (iLocal_1337 != 0)
		{
			__LIB_0__::func_325(&iLocal_144);
			__LIB_0__::func_325(&iLocal_143);
			iLocal_143 = __LIB_8__::func_777(408396114, func_1286(1, 7), 8f, 1);
			func_1839();
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_143, "VAL");
			if (MAP::DOES_BLIP_EXIST(Local_193[11 /*6*/].f_1))
			{
				MAP::_BLIP_REMOVE_MODIFIER(Local_193[11 /*6*/].f_1, -401963276);
			}
			iLocal_1337 = 0;
		}
		if (iLocal_577 == 12 || Local_589[0 /*9*/].f_8 == 4)
		{
			func_1292(uParam0, 2);
			if (iLocal_63 < 12)
			{
				func_1294(12);
			}
		}
		func_1331(uParam0, 2);
		return;
	}
	func_165();
	if (iLocal_577 == 12 || Local_589[0 /*9*/].f_8 == 4)
	{
		if (iLocal_1337 != 1)
		{
			__LIB_0__::func_325(&iLocal_144);
			__LIB_0__::func_325(&iLocal_143);
			iLocal_143 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_PLAYER_COACH"), Local_579);
			MAP::_BLIP_SET_MODIFIER(iLocal_143, -401963276);
			iLocal_1337 = 1;
		}
		func_1331(uParam0, 8388608);
		return;
	}
	if (func_1840(1110704128 /* Float: 45f */) && iLocal_577 != 11)
	{
		if (!PED::IS_PED_IN_VEHICLE(Global_35, Local_579, false))
		{
			func_398(29);
		}
		if (bLocal_118)
		{
			if (Local_589[0 /*9*/].f_8 != 4 && Local_589[0 /*9*/].f_8 != 5)
			{
				if ((PED::_IS_PED_LASSOED(Local_589[0 /*9*/]) || __LIB_0__::func_394(Global_35, Local_589[0 /*9*/], 0)) || TASK::GET_IS_TASK_ACTIVE(Global_35, 8))
				{
					if (iLocal_1337 != 3)
					{
						__LIB_0__::func_325(&iLocal_144);
						__LIB_0__::func_325(&iLocal_143);
						if (MAP::DOES_BLIP_EXIST(Local_193[11 /*6*/].f_1))
						{
							MAP::_BLIP_SET_MODIFIER(Local_193[11 /*6*/].f_1, -401963276);
						}
						iLocal_144 = MAP::_BLIP_ADD_FOR_ENTITY(-89429847, Local_589[0 /*9*/]);
						MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_144, "MUD3_B_HORSE");
						iLocal_1337 = 3;
					}
					if (__LIB_0__::func_48(Global_35, Local_579, 40f, 1))
					{
						func_1293(77, 0);
					}
					func_1331(uParam0, 16384);
				}
				else
				{
					if (iLocal_1337 != 2)
					{
						__LIB_0__::func_325(&iLocal_144);
						__LIB_0__::func_325(&iLocal_143);
						iLocal_144 = MAP::_BLIP_ADD_FOR_ENTITY(-89429847, Local_589[0 /*9*/]);
						MAP::_BLIP_SET_MODIFIER(iLocal_144, -401963276);
						MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_144, "MUD3_B_HORSE");
						if (MAP::DOES_BLIP_EXIST(Local_193[11 /*6*/].f_1))
						{
							MAP::_BLIP_REMOVE_MODIFIER(Local_193[11 /*6*/].f_1, -401963276);
						}
						iLocal_1337 = 2;
					}
					func_1331(uParam0, 131072);
				}
			}
			return;
		}
		if (func_1835(74) || func_167(35))
		{
			if (Local_589[0 /*9*/].f_8 != 4 && Local_589[0 /*9*/].f_8 != 5)
			{
				if (iLocal_1337 != 2)
				{
					__LIB_0__::func_325(&iLocal_144);
					__LIB_0__::func_325(&iLocal_143);
					iLocal_144 = MAP::_BLIP_ADD_FOR_ENTITY(-89429847, Local_589[0 /*9*/]);
					MAP::_BLIP_SET_MODIFIER(iLocal_144, -401963276);
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_144, "MUD3_B_HORSE");
					if (MAP::DOES_BLIP_EXIST(Local_193[11 /*6*/].f_1))
					{
						MAP::_BLIP_REMOVE_MODIFIER(Local_193[11 /*6*/].f_1, -401963276);
					}
					iLocal_1337 = 2;
				}
				func_1331(uParam0, 8192);
				return;
			}
		}
	}
	if (!PED::IS_PED_IN_VEHICLE(Global_35, Local_579, false))
	{
		if (iLocal_1337 != 1)
		{
			__LIB_0__::func_325(&iLocal_144);
			__LIB_0__::func_325(&iLocal_143);
			iLocal_143 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_PLAYER_COACH"), Local_579);
			iLocal_1337 = 1;
		}
		if (((!func_1840(1110704128 /* Float: 45f */) || iLocal_577 == 11) || iLocal_577 == 12) || func_972(75) == 3)
		{
			MAP::_BLIP_SET_MODIFIER(iLocal_143, -401963276);
			if (MAP::DOES_BLIP_EXIST(Local_193[11 /*6*/].f_1))
			{
				MAP::_BLIP_REMOVE_MODIFIER(Local_193[11 /*6*/].f_1, -401963276);
			}
			func_1331(uParam0, 32768);
		}
		else
		{
			func_1331(uParam0, 65536);
			if (MAP::DOES_BLIP_EXIST(Local_193[11 /*6*/].f_1))
			{
				MAP::_BLIP_SET_MODIFIER(Local_193[11 /*6*/].f_1, -401963276);
			}
			func_1292(uParam0, 1);
		}
		return;
	}
}

void func_1282()
{
	if (!__LIB_2__::func_343(Global_35, Local_579, 0))
	{
		if (!__LIB_0__::func_27(Local_193[0 /*6*/].f_4, 4))
		{
			__LIB_1__::func_683(&(Local_193[0 /*6*/].f_4), 4);
			TASK::TASK_LOOK_AT_ENTITY(Local_193[0 /*6*/], Global_35, -1, 0, 51, 1);
		}
		if (!__LIB_0__::func_27(Local_193[3 /*6*/].f_4, 4))
		{
			__LIB_1__::func_683(&(Local_193[3 /*6*/].f_4), 4);
			TASK::TASK_LOOK_AT_ENTITY(Local_193[3 /*6*/], Global_35, -1, 0, 51, 1);
		}
		if (!__LIB_0__::func_27(Local_193[1 /*6*/].f_4, 4))
		{
			__LIB_1__::func_683(&(Local_193[1 /*6*/].f_4), 4);
			TASK::TASK_LOOK_AT_ENTITY(Local_193[1 /*6*/], Global_35, -1, 0, 51, 1);
		}
		if (!__LIB_0__::func_27(Local_193[2 /*6*/].f_4, 4))
		{
			__LIB_1__::func_683(&(Local_193[2 /*6*/].f_4), 4);
			TASK::TASK_LOOK_AT_ENTITY(Local_193[2 /*6*/], Global_35, -1, 0, 51, 1);
		}
	}
	else
	{
		if (__LIB_0__::func_27(Local_193[0 /*6*/].f_4, 4))
		{
			__LIB_1__::func_681(&(Local_193[0 /*6*/].f_4), 4);
			TASK::TASK_CLEAR_LOOK_AT(Local_193[0 /*6*/]);
		}
		if (__LIB_0__::func_27(Local_193[3 /*6*/].f_4, 4))
		{
			__LIB_1__::func_681(&(Local_193[3 /*6*/].f_4), 4);
			TASK::TASK_CLEAR_LOOK_AT(Local_193[3 /*6*/]);
		}
		if (__LIB_0__::func_27(Local_193[1 /*6*/].f_4, 4))
		{
			__LIB_1__::func_681(&(Local_193[1 /*6*/].f_4), 4);
			TASK::TASK_CLEAR_LOOK_AT(Local_193[1 /*6*/]);
		}
		if (__LIB_0__::func_27(Local_193[2 /*6*/].f_4, 4))
		{
			__LIB_1__::func_681(&(Local_193[2 /*6*/].f_4), 4);
			TASK::TASK_CLEAR_LOOK_AT(Local_193[2 /*6*/]);
		}
	}
}

void func_1283()
{
	vector3 vVar0;
	int iVar3;
	vVar0 = { -230.157f, 797.476f, 135.255f };
	if (!func_167(26))
	{
		if (!__LIB_0__::func_266(Global_35, vVar0, 200f, 1, 1))
		{
			return;
		}
		iVar3 = __LIB_0__::func_23();
		__LIB_1__::func_446(&iVar3, 5, 0, 0, 0, 0, 0, 0);
		func_1841(joaat("P_CHURCHBELL01X"), "props_misc@church_bells", "enter", "loop", "exit", vVar0, "VAL_SINGLE_TOLL");
		func_1842(__LIB_0__::func_41(iVar3), __LIB_0__::func_42(iVar3), __LIB_0__::func_43(iVar3));
		func_398(26);
	}
}

void func_1284(var uParam0)
{
	switch (iLocal_1338)
	{
		case 0:
			if (func_427(uParam0) == 1)
			{
				iLocal_1338 = 1;
				return;
			}
			if (__LIB_0__::func_12() != 71)
			{
				if (__LIB_11__::func_412(47, -182.5402f, 600.6595f, 112.5125f, 0f, 0f, -24f, 1, 0, 1, 0, 0, 0, -1))
				{
					iLocal_1338 = 1;
				}
			}
			break;
		case 1:
			if (__LIB_0__::func_12() != 76)
			{
				return;
			}
			if (__LIB_11__::func_412(15, -216.29f, 650.41f, 112.07f, 0f, 0f, 153.346f, 1, 1, 1, 0, 0, 0, -1))
			{
				iLocal_1338 = 2;
			}
			break;
		case 2:
			if (__LIB_11__::func_412(7, 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 1, 0, 0, 0, -1))
			{
				iLocal_1338 = 3;
			}
			break;
		case 3:
			if (__LIB_11__::func_412(28, -235.0715f, 707.6568f, 112.595f, 0f, 0f, 0f, 1, 1, 1, 0, 0, 0, -1))
			{
				iLocal_1338 = 4;
			}
			break;
		case 4:
			if (__LIB_10__::func_657(28, 0))
			{
				iLocal_1338 = 5;
			}
			break;
		case 5:
			if (__LIB_11__::func_412(11, 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 1, 0, 0, 0, -1))
			{
				iLocal_1338 = 6;
			}
			break;
		case 6:
			if (__LIB_11__::func_412(30, 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 1, 0, 0, 0, -1))
			{
				iLocal_1338 = 7;
			}
			break;
		case 7:
			return;
	}
}

Vector3 func_1286(int iParam0, int iParam1)
{
	return func_1029(iParam0, iParam1);
}

void func_1288(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = func_1846(iParam1);
	if (ANIMSCENE::_IS_ANIM_SCENE_LOADING(iVar0, true))
	{
		return;
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iVar0, true, false))
	{
		return;
	}
	if (Local_1193[iParam1 /*6*/].f_4)
	{
		return;
	}
	__LIB_9__::func_91(uParam0, iVar0);
	Local_1193[iParam1 /*6*/].f_4 = 1;
}

void func_1289(bool bParam0)
{
	PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
	if (bParam0 && !CAM::_0xA24C1D341C6E0D53(0, 0, 1))
	{
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), true);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), true);
	}
	else
	{
		PAD::DISABLE_ALL_CONTROL_ACTIONS(1);
	}
	__LIB_3__::func_807();
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE"), true);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE_ALTERNATE"), true);
	iLocal_1178 = MISC::GET_FRAME_COUNT();
}

void func_1290(float fParam0)
{
	float fVar0;
	if (func_167(86))
	{
		if (fParam0 > 6.2f)
		{
			fParam0 = 6.2f;
		}
	}
	fVar0 = 0.1f;
	if (Local_579.f_3 < fParam0)
	{
		Local_579.f_3 = (Local_579.f_3 + fVar0);
		if (Local_579.f_3 > fParam0)
		{
			Local_579.f_3 = fParam0;
		}
	}
	else if (Local_579.f_3 > fParam0)
	{
		Local_579.f_3 = (Local_579.f_3 - fVar0);
		if (Local_579.f_3 < fParam0)
		{
			Local_579.f_3 = fParam0;
		}
	}
	VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(Local_579, Local_579.f_3);
}

void func_1292(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	if (iLocal_1164 == iParam1)
	{
		return;
	}
	iVar0 = iParam1;
	iVar1 = iVar0;
	__LIB_11__::func_415(uParam0, iVar1);
	iLocal_1164 = iParam1;
}

int func_1293(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 >= 32)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 >= 4)
	{
		return 0;
	}
	iVar2 = __LIB_0__::func_771(iVar0);
	if (__LIB_0__::func_1(Local_1179[iVar1], iVar2))
	{
		if (Local_1179.f_10 == iParam0)
		{
			return 2;
		}
		else
		{
			return 3;
		}
	}
	if (__LIB_0__::func_1(Local_1179.f_5[iVar1], iVar2))
	{
		return 9;
	}
	if (bParam1)
	{
		Local_1179.f_11 = 1;
	}
	if (iParam0 == 16)
	{
		func_452(17);
		func_452(18);
	}
	else if (iParam0 == 17)
	{
		func_452(16);
		func_452(18);
	}
	else if (iParam0 == 18)
	{
		func_452(16);
		func_452(17);
	}
	if (iParam0 == 11)
	{
		func_163(9, 1, 0);
	}
	if (iParam0 == 27)
	{
		func_452(28);
	}
	if (iParam0 == 12)
	{
		func_452(10);
	}
	if (iParam0 == 28 || iParam0 == 76)
	{
		func_1849(0);
	}
	if (((((iParam0 == 20 || iParam0 == 19) || iParam0 == 23) || iParam0 == 25) || iParam0 == 76) || iParam0 == 29)
	{
		func_1849(1);
	}
	if (iParam0 == 3)
	{
		if (func_1850("MUD3_IG23", 1))
		{
			func_452(3);
		}
	}
	if (Global_1914319.f_17377)
	{
		if ((((((iParam0 == 20 || iParam0 == 19) || iParam0 == 23) || iParam0 == 25) || iParam0 == 76) || iParam0 == 29) || iParam0 == 80)
		{
			func_452(iParam0);
		}
	}
	if (((((((iParam0 == 36 || iParam0 == 37) || iParam0 == 38) || iParam0 == 39) || iParam0 == 40) || iParam0 == 41) || iParam0 == 42) || iParam0 == 43)
	{
		__LIB_5__::func_107(&uLocal_432);
	}
	__LIB_1__::func_336(&(Local_1179.f_5[iVar1]), iVar2);
	return 9;
}

void func_1294(int iParam0)
{
	if (iLocal_63 == iParam0)
	{
		return;
	}
	if (iLocal_63 == 11)
	{
		func_456(9);
		func_456(8);
	}
	if (iParam0 == 11)
	{
		if (((iLocal_63 == 7 || iLocal_63 == 8) || iLocal_63 == 9) || iLocal_63 == 10)
		{
			iLocal_1352 = iLocal_63;
		}
	}
	iLocal_63 = iParam0;
	if (iLocal_63 >= 1 && iLocal_63 <= 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_142))
		{
			if (!func_167(68))
			{
				TASK::TASK_LOOK_AT_ENTITY(Local_193[0 /*6*/], iLocal_142, -1, 16, 51, 1);
				TASK::TASK_LOOK_AT_ENTITY(Local_193[1 /*6*/], iLocal_142, -1, 16, 51, 1);
				TASK::TASK_LOOK_AT_ENTITY(Local_193[2 /*6*/], iLocal_142, -1, 16, 51, 1);
				TASK::TASK_LOOK_AT_ENTITY(Local_193[3 /*6*/], iLocal_142, -1, 16, 51, 1);
				func_398(68);
				func_168(69);
			}
		}
	}
	else if (((iLocal_63 == 7 || iLocal_63 == 8) || iLocal_63 == 9) || iLocal_63 == 10)
	{
		if (!func_167(69))
		{
			TASK::TASK_LOOK_AT_ENTITY(Local_193[0 /*6*/], Global_35, -1, 16, 51, 1);
			TASK::TASK_LOOK_AT_ENTITY(Local_193[1 /*6*/], Global_35, -1, 16, 51, 1);
			TASK::TASK_LOOK_AT_ENTITY(Local_193[2 /*6*/], Global_35, -1, 16, 51, 1);
			TASK::TASK_LOOK_AT_ENTITY(Local_193[3 /*6*/], Global_35, -1, 16, 51, 1);
			func_398(69);
			func_168(68);
		}
	}
	else if (func_167(68) || func_167(69))
	{
		__LIB_3__::func_10(Local_193[0 /*6*/]);
		__LIB_3__::func_10(Local_193[1 /*6*/]);
		__LIB_3__::func_10(Local_193[2 /*6*/]);
		__LIB_3__::func_10(Local_193[3 /*6*/]);
		func_168(68);
		func_168(69);
	}
	switch (iLocal_63)
	{
		case 0:
			break;
		case 1:
			func_1852(9, 29);
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			func_1852(9, 28);
			break;
		case 5:
			break;
		case 6:
			func_1852(9, 30);
			func_1852(8, 87);
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 10:
			break;
		case 11:
			break;
		case 12:
			func_1852(12, 87);
			break;
		case 13:
			func_1852(12, 87);
			break;
		case 14:
			func_1852(12, 87);
			break;
		case 15:
			func_1852(12, 87);
			break;
		case 16:
			func_1852(12, 87);
			break;
		case 17:
			func_1852(12, 87);
			break;
		case 18:
			func_1852(12, 87);
			break;
		case 19:
			func_1852(12, 87);
			break;
		case 20:
			func_456(12);
			break;
	}
}

bool func_1296(int iParam0, bool bParam1, vector3 vParam2)
{
	char[] cVar0[8];
	int iVar1;
	cVar0 = func_421(iParam0);
	iVar1 = -1;
	if (TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(cVar0, vParam2, &iVar1))
	{
		if (iVar1 >= bParam1)
		{
			return true;
		}
	}
	return false;
}

bool func_1297(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = func_972(iParam0);
	if (iVar0 == 2)
	{
		return true;
	}
	if (bParam1)
	{
		if (iVar0 == 9)
		{
			return true;
		}
	}
	return false;
}

bool func_1300(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	char* sVar0;
	int iVar1;
	if (func_1855(iParam0))
	{
		return true;
	}
	sVar0 = func_1856(iParam0);
	if (MAP::DOES_BLIP_EXIST(iParam5))
	{
		sVar0 = MISC::_CREATE_VAR_STRING(0, func_1857(iParam0), iParam5);
	}
	if (__LIB_10__::func_598())
	{
		if (!__LIB_0__::func_269(uLocal_1167[iParam0]))
		{
			if (bParam2)
			{
				__LIB_0__::func_105(0);
			}
			if (!__LIB_2__::func_618(&uLocal_414))
			{
				__LIB_5__::func_107(&uLocal_414);
			}
			else if (__LIB_11__::func_406(&uLocal_414) > 10000)
			{
				__LIB_0__::func_105(1);
			}
			if (bParam3)
			{
				if (!__LIB_0__::func_30(uLocal_1167[iParam0]))
				{
					iVar1 = 0;
					if (bParam4)
					{
						iVar1 = 1;
					}
					uLocal_1167[iParam0] = __LIB_0__::func_45(sVar0, 10000, 0, 0, iVar1, 1);
				}
				func_1860(iParam0);
			}
		}
		return false;
	}
	__LIB_2__::func_608(&uLocal_414);
	if (!__LIB_0__::func_30(uLocal_1167[iParam0]))
	{
		if (bParam1)
		{
			uLocal_1167[iParam0] = __LIB_4__::func_981(sVar0, 0, 0, 1);
		}
		else
		{
			uLocal_1167[iParam0] = __LIB_0__::func_45(sVar0, 10000, 0, 0, 0, 1);
		}
	}
	func_1860(iParam0);
	return false;
}

void func_1301()
{
	int iVar0;
	int iVar1;
	if (!func_167(11))
	{
		func_398(11);
		PATHFIND::_0xC1799FAFD2FDF52B(iLocal_148[19], 0, 0, 0);
		MISC::_0x2FCD528A397E5C88(iLocal_148[19], 1048576);
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_1862(&(Local_589[iVar0 /*9*/]));
		iVar0++;
	}
	if ((__LIB_11__::func_398(&(Local_589[0 /*9*/]), 1) || __LIB_11__::func_398(&(Local_589[1 /*9*/]), 1)) || func_1863(&(Local_193[11 /*6*/])))
	{
		func_1311(11, 0);
	}
	if (!func_167(63))
	{
		if (iLocal_577 != 6 && iLocal_577 != 11)
		{
			if (func_1864())
			{
				if (iLocal_577 >= 7 && iLocal_577 < 8)
				{
					func_1311(6, 0);
				}
			}
		}
	}
	func_1865();
	func_1866();
	switch (iLocal_577)
	{
		case 1:
			iVar1 = func_1867();
			if (iVar1 != 0)
			{
				if (iVar1 == 1)
				{
					func_1311(2, 0);
				}
				else
				{
					func_1311(3, 0);
				}
			}
			else
			{
				Jump @1620; //curOff = 323
				if (__LIB_2__::func_343(Local_193[11 /*6*/], iLocal_142, 0) || !TASK::_0x9FF5F9B24E870748(Local_193[11 /*6*/]))
				{
					func_1311(3, 0);
				}
				else
				{
					Jump @1620; //curOff = 368
					if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_142, 0))
					{
						if (TASK::GET_VEHICLE_WAYPOINT_PROGRESS(iLocal_142) >= 31)
						{
							__LIB_2__::func_608(&uLocal_1342);
							func_1311(4, 0);
						}
						else
						{
							Jump @444; //curOff = 408
							if (__LIB_0__::func_393(iLocal_142, iLocal_148[18], 0, 1))
							{
								__LIB_2__::func_608(&uLocal_1342);
								func_1311(4, 0);
							}
							else
							{
								if (__LIB_0__::func_393(iLocal_142, iLocal_148[19], 0, 1))
								{
									if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("MUD3_runaway_stagecoach_scene"))
									{
										AUDIO::START_AUDIO_SCENE("MUD3_runaway_stagecoach_scene");
									}
								}
								if (!bLocal_1341)
								{
									if (__LIB_0__::func_393(iLocal_142, iLocal_148[19], 0, 1))
									{
										if (iLocal_1340 == -1)
										{
											iLocal_1340 = AUDIO::GET_SOUND_ID();
										}
										AUDIO::_0xF1C5310FEAA36B48(iLocal_1340, "Wagon_Stress_Loop", iLocal_142, "MUD3_Sounds", 0, 0);
										bLocal_1341 = true;
									}
								}
								else
								{
									if (!__LIB_2__::func_618(&uLocal_1342))
									{
										__LIB_5__::func_107(&uLocal_1342);
									}
									if (iLocal_1340 != -1)
									{
										AUDIO::_0x503703EC1781B7D6(iLocal_1340, "Intensity", __LIB_0__::func_251((__LIB_5__::func_51(&uLocal_1342) / 2f), 0f, 1f));
									}
								}
								func_1868();
								Jump @1620; //curOff = 599
								func_1869();
								if (!__LIB_2__::func_618(&uLocal_408))
								{
									__LIB_2__::func_620(&uLocal_408, 2f);
								}
								if (Local_589[0 /*9*/].f_8 >= 1 && Local_589[1 /*9*/].f_8 >= 1)
								{
									if (__LIB_11__::func_398(&(Local_589[0 /*9*/]), 2) && __LIB_11__::func_398(&(Local_589[1 /*9*/]), 2))
									{
										func_1311(5, 0);
									}
									if (__LIB_9__::func_324(&uLocal_408) > 30f)
									{
										func_1311(5, 0);
									}
								}
								else if (__LIB_9__::func_324(&uLocal_408) < MISC::GET_RANDOM_FLOAT_IN_RANGE(0.1f, 0.2f))
								{
								}
								else
								{
									if (Local_589[1 /*9*/].f_8 == 0)
									{
										func_1870(&(Local_589[1 /*9*/]), 1, 0);
									}
									else
									{
										func_1870(&(Local_589[0 /*9*/]), 1, 0);
									}
									__LIB_5__::func_107(&uLocal_408);
									Jump @1620; //curOff = 788
									func_1869();
									if (VEHICLE::IS_VEHICLE_STOPPED(iLocal_142) || ENTITY::GET_ENTITY_SPEED(iLocal_142) < 0.2f)
									{
										if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MUD3_runaway_stagecoach_scene"))
										{
											AUDIO::STOP_AUDIO_SCENE("MUD3_runaway_stagecoach_scene");
										}
									}
									if (func_1871(7, "s_Climbs_Down_Wagon"))
									{
										func_1293(83, 0);
									}
									if (func_1321(7, "MSP_MUDTOWN3_MALES_01", 1))
									{
										if (PED::IS_PED_IN_ANY_VEHICLE(Local_193[11 /*6*/], false))
										{
											PED::_0xE0B61ED8BB37712F(Local_193[11 /*6*/]);
										}
										if (func_167(35) || bLocal_118)
										{
											func_1311(8, 0);
										}
										else
										{
											func_1311(6, 0);
										}
									}
									else
									{
										Jump @1620; //curOff = 932
										if (func_167(35) || bLocal_118)
										{
											func_1311(8, 0);
										}
										else
										{
											if (func_1297(64, 1) || func_1297(73, 1))
											{
												if (!__LIB_0__::func_163(Local_193[11 /*6*/], -875674219))
												{
													TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_193[11 /*6*/], Global_35, -1, -1f, -1f, -1f);
												}
											}
											if (func_972(74) == 3 || func_972(75) == 3)
											{
												if (!__LIB_2__::func_618(&uLocal_501))
												{
													__LIB_5__::func_107(&uLocal_501);
												}
												if (__LIB_14__::func_171(&uLocal_501) > 1000)
												{
													if (iLocal_578 == 5)
													{
														iLocal_578 = 7;
													}
													func_1311(iLocal_578, 0);
												}
												else
												{
													Jump @1620; //curOff = 1111
													if ((((iLocal_1353 == 3 || func_972(74) == 3) || func_972(75) == 3) || func_167(35)) || bLocal_118)
													{
														if (!__LIB_2__::func_618(&uLocal_411))
														{
															__LIB_5__::func_107(&uLocal_411);
														}
														if ((__LIB_9__::func_324(&uLocal_411) > 10f || func_167(35)) || bLocal_118)
														{
															func_1311(8, 0);
														}
														else
														{
															Jump @1620; //curOff = 1234
															if (!TASK::_0x9FF5F9B24E870748(Local_193[11 /*6*/]))
															{
																func_1311(10, 0);
															}
															else if (PED::_0x7FC84E85D98F063D(Local_193[11 /*6*/]))
															{
																TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_193[11 /*6*/], false, true);
																func_1311(8, 1);
															}
															else
															{
																func_1293(60, 0);
																Jump @1620; //curOff = 1304
																if (Local_589[0 /*9*/].f_8 == 4)
																{
																	if (iLocal_1339 == 87)
																	{
																		iLocal_1339 = func_1872();
																	}
																	else if (!func_167(58))
																	{
																		if (func_1873(10, iLocal_1339, 1))
																		{
																			func_1293(3, 1);
																			func_1311(9, 0);
																		}
																		else
																		{
																			Jump @1390; //curOff = 1377
																			func_1311(12, 0);
																			Jump @1620; //curOff = 1387
																			func_1874(&(Local_193[11 /*6*/]));
																			Jump @1620; //curOff = 1400
																			func_1293(86, 1);
																			if ((func_1875(&(Local_193[11 /*6*/]), 0, 0) || func_1875(&(Local_589[0 /*9*/]), 0, 0)) || func_1875(&(Local_589[1 /*9*/]), 0, 0))
																			{
																				func_398(48);
																				if (!__LIB_2__::func_618(&uLocal_489))
																				{
																					__LIB_5__::func_107(&uLocal_489);
																				}
																				if (__LIB_14__::func_171(&uLocal_489) >= 2500)
																				{
																					if (!func_167(53))
																					{
																						LAW::_REPORT_CRIME(PLAYER::PLAYER_ID(), joaat("CRIME_ASSAULT"), 0, 0, true);
																						func_398(53);
																					}
																				}
																			}
																			Jump @1620; //curOff = 1531
																			func_1293(3, 1);
																			if (func_1403(10, iLocal_1339, 1065185444 /* Float: 0.99f */) && !func_1850(func_447(3), 0))
																			{
																				func_1311(12, 0);
																			}
																			Jump @1620; //curOff = 1581
																			if (!TASK::_0x9FF5F9B24E870748(Local_193[11 /*6*/]))
																			{
																				func_1311(12, 1);
																			}
																			else
																			{
																				Jump @1620; //curOff = 1608
																				func_1311(1, 0);
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			default:
				break;
	}
}

void func_1302()
{
	if (iLocal_577 > 4)
	{
		if (!func_167(12))
		{
			if (func_1840(1110704128 /* Float: 45f */))
			{
				func_398(12);
			}
			return;
		}
		func_1876();
		func_1877();
		if (!__LIB_0__::func_48(Global_35, iLocal_142, 60f, 1) || !__LIB_0__::func_48(Global_35, Local_193[11 /*6*/], 60f, 1))
		{
			if (__LIB_2__::func_343(Global_35, Local_579, 0))
			{
				if (iLocal_577 != 11 && Local_589[0 /*9*/].f_8 == 4)
				{
				}
				else
				{
					if (iLocal_63 < 13)
					{
						func_1294(13);
					}
					if (!func_167(16))
					{
						func_398(16);
					}
				}
			}
		}
		else if (iLocal_63 == 3)
		{
			func_1294(4);
		}
	}
}

void func_1303()
{
	if (func_1878(1))
	{
		func_398(62);
	}
	if (func_167(62))
	{
		func_1879(11, 1);
		return;
	}
	func_1879(11, 0);
	switch (iLocal_1351)
	{
		case 0:
			if (func_972(1) == 3 || func_972(2) == 3)
			{
				if (func_1296(4, 12, ENTITY::GET_ENTITY_COORDS(Local_579, true, false)))
				{
					func_1880(1);
				}
				else
				{
					Jump @335; //curOff = 148
					func_1881(47);
					if (func_1882(11))
					{
						if (func_1389(11))
						{
							func_1880(2);
						}
						else
						{
							Jump @335; //curOff = 183
							func_1881(49);
							if (func_1882(11))
							{
								if (func_1389(11))
								{
									func_1880(3);
								}
								else
								{
									Jump @335; //curOff = 218
									func_1881(46);
									if (func_1882(11))
									{
										if (func_1389(11))
										{
											func_1880(4);
										}
										else
										{
											Jump @335; //curOff = 253
											func_1881(48);
											if (func_1882(11))
											{
												if (func_1389(11))
												{
													func_1880(5);
												}
												else
												{
													Jump @335; //curOff = 288
													func_1881(50);
													if (func_1882(11))
													{
														if (func_1389(11))
														{
															func_1880(6);
														}
														else
														{
															Jump @335; //curOff = 323
															func_456(11);
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			default:
				break;
	}
}

void func_1304(var uParam0)
{
	func_1883(uParam0);
	switch (iLocal_63)
	{
		case 0:
			if (func_427(uParam0) == 1)
			{
				if (iLocal_1351 == 6)
				{
					func_1294(14);
				}
				else if (func_1840(1110704128 /* Float: 45f */))
				{
					if (iLocal_577 >= 4)
					{
						func_1294(3);
					}
					else if (iLocal_577 == 3)
					{
						if ((__LIB_0__::func_266(Local_579, vLocal_129, 50f, 1, 1) || fLocal_111 < (40f + 10f)) || __LIB_0__::func_48(Local_579, iLocal_142, 30f, 1))
						{
							if (fLocal_110 < (40f - 2f) || __LIB_0__::func_393(iLocal_142, iLocal_148[19], 0, 1))
							{
								func_1293(71, 0);
							}
							if (func_972(71) == 3)
							{
								if (__LIB_0__::func_393(iLocal_142, iLocal_148[19], 0, 1) && iLocal_577 <= 4)
								{
									func_1293(72, 0);
									func_1294(1);
								}
								else
								{
									Jump @1248; //curOff = 361
									if (func_1325(9, 29))
									{
										func_1294(2);
									}
									else
									{
										func_1884(9, 29, 0);
										Jump @1248; //curOff = 390
										if (func_1882(9))
										{
											if (func_1389(9))
											{
												func_1294(3);
											}
											else
											{
												Jump @1248; //curOff = 419
												Jump @1248; //curOff = 422
												if (iLocal_577 <= 5)
												{
													if (!func_1320(7, 1))
													{
														if (!func_1882(7) || !func_1871(7, "s_Climbs_Down_Wagon"))
														{
														}
														else if (func_1325(9, 28))
														{
															func_1294(5);
														}
														else
														{
															func_1884(9, 28, 0);
															Jump @1248; //curOff = 496
															if (func_1882(9))
															{
																if (func_1389(9))
																{
																	func_1294(6);
																}
																else
																{
																	if (__LIB_8__::func_684("MUD3_IG22_B"))
																	{
																		func_398(56);
																	}
																	else if (func_167(56))
																	{
																		func_398(55);
																		if (!func_167(57))
																		{
																			func_1278(&(Local_193[3 /*6*/]), 2, 0);
																		}
																	}
																	Jump @1248; //curOff = 581
																	func_1885();
																	Jump @1248; //curOff = 588
																	func_1884(9, 30, 1);
																	func_1884(8, 20, 1);
																	func_1885();
																	Jump @1248; //curOff = 611
																	func_1884(9, 31, 1);
																	func_1884(8, 21, 1);
																	func_1885();
																	Jump @1248; //curOff = 634
																	func_1884(9, 32, 1);
																	func_1884(8, 22, 1);
																	func_1885();
																	Jump @1248; //curOff = 657
																	func_1884(9, 33, 1);
																	func_1884(8, 23, 1);
																	func_1885();
																	Jump @1248; //curOff = 680
																	switch (iLocal_1352)
																	{
																		case 7:
																			func_1884(9, 34, 0);
																			func_1884(8, 24, 0);
																			break;
																		case 8:
																			func_1884(9, 35, 0);
																			func_1884(8, 25, 0);
																			break;
																		case 9:
																			func_1884(9, 36, 0);
																			func_1884(8, 26, 0);
																			break;
																		case 10:
																			func_1884(9, 37, 0);
																			func_1884(8, 27, 0);
																			break;
																		default:
																			func_1294(6);
																			break;
																	}
																	if (!__LIB_2__::func_618(&uLocal_525))
																	{
																		__LIB_5__::func_107(&uLocal_525);
																	}
																	if (func_1320(9, 1) && func_1320(8, 1))
																	{
																		__LIB_2__::func_608(&uLocal_525);
																		func_1294(6);
																	}
																	else if (__LIB_9__::func_324(&uLocal_525) > 10f)
																	{
																		__LIB_2__::func_608(&uLocal_525);
																		func_1294(6);
																	}
																	else
																	{
																		Jump @1248; //curOff = 886
																		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_EXIT"), false);
																		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_TRAVERSAL"), false);
																		if (!func_1886())
																		{
																		}
																		else if (func_1882(12))
																		{
																			if (func_1389(12))
																			{
																				func_1294(14);
																			}
																			else
																			{
																				func_1887();
																				func_1888(51);
																				Jump @1248; //curOff = 959
																				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_EXIT"), false);
																				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_TRAVERSAL"), false);
																				if (!func_1886())
																				{
																				}
																				else if (func_1882(12))
																				{
																					if (func_1389(12))
																					{
																						func_1294(14);
																					}
																					else
																					{
																						func_1887();
																						func_1888(52);
																						Jump @1248; //curOff = 1032
																						func_1294(19);
																						Jump @1248; //curOff = 1041
																						if (func_1882(12))
																						{
																							if (func_1389(12))
																							{
																								func_1294(14);
																							}
																							else
																							{
																								func_1888(53);
																								Jump @1248; //curOff = 1077
																								if (func_1882(12))
																								{
																									if (func_1389(12))
																									{
																										func_1294(14);
																									}
																									else
																									{
																										func_1888(54);
																										Jump @1248; //curOff = 1113
																										if (func_1882(12))
																										{
																											if (func_1389(12))
																											{
																												func_1294(14);
																											}
																											else
																											{
																												func_1888(56);
																												Jump @1248; //curOff = 1149
																												if (func_1882(12))
																												{
																													if (func_1389(12))
																													{
																														func_1294(14);
																													}
																													else
																													{
																														func_1888(55);
																														Jump @1248; //curOff = 1185
																														if (func_1320(12, 1))
																														{
																															func_1294(14);
																														}
																														else
																														{
																															func_1888(57);
																															Jump @1248; //curOff = 1213
																															if (!Global_1396257[26 /*638*/].f_632)
																															{
																																Global_1396257[26 /*638*/].f_632 = 1;
																															}
																														}
																													}
																												}
																											}
																										}
																									}
																								}
																							}
																						}
																					}
																				}
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			default:
				break;
	}
}

void func_1305(int iParam0)
{
	if (iLocal_1353 == iParam0)
	{
		return;
	}
	if (iLocal_1353 == 3)
	{
		return;
	}
	iLocal_1353 = iParam0;
	switch (iLocal_1353)
	{
		case 0:
			break;
		case 1:
			break;
		case 2:
			__LIB_3__::func_157(&(Local_797[0 /*17*/]), "MUD3_C_POS", 0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
			__LIB_3__::func_157(&(Local_797[1 /*17*/]), "MUD3_C_NEG", 0, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
			break;
		case 3:
			func_460(&iLocal_832, &Local_797, &(Local_193[11 /*6*/]), 0);
			func_452(73);
			func_452(82);
			func_452(64);
			func_1889(&(Local_193[11 /*6*/]));
			break;
	}
}

void func_1310()
{
	MISC::_SET_WEATHER_TYPE(joaat("SUNNY"), true, true, false, 0f, false);
	__LIB_6__::func_413(joaat("WEATHER_GROUP_GOOD"), 0, 0, 1103626240 /* Float: 25f */);
}

void func_1311(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (iLocal_577 == iParam0 && !bParam1)
	{
		return;
	}
	if (iLocal_577 == 8)
	{
		func_452(60);
	}
	if (iParam0 == 6)
	{
		iLocal_578 = iLocal_577;
	}
	iLocal_577 = iParam0;
	switch (iLocal_577)
	{
		case 1:
			TASK::_TASK_START_SCENARIO_IN_PLACE(Local_193[11 /*6*/], joaat("WORLD_HUMAN_CROUCH_INSPECT"), -1, false, 0, -1f, false);
			iVar1 = 0;
			while (iVar1 < 6)
			{
				iVar2 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_142, iVar1);
				if (!__LIB_0__::func_272(iVar2, 0))
				{
				}
				else
				{
					PED::_0x931B241409216C1F(Local_193[11 /*6*/], iVar2, 0);
				}
				iVar1++;
			}
			break;
		case 2:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_142) && __LIB_0__::func_272(Local_193[11 /*6*/], 0))
			{
				__LIB_2__::func_357(Local_193[11 /*6*/], ENTITY::GET_ENTITY_COORDS(iLocal_142, true, false), 7, 1, 1);
				TASK::TASK_ENTER_VEHICLE(Local_193[11 /*6*/], iLocal_142, 20000, -1, 1f, 1, 0);
			}
			break;
		case 3:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_142) && __LIB_0__::func_272(Local_193[11 /*6*/], 0))
			{
				__LIB_4__::func_185(&(Local_193[11 /*6*/]), &iLocal_142, -1, 1);
			}
			TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_193[11 /*6*/], iLocal_142, func_421(3), 524308, 0, 25608, -1, -1082130432 /* Float: -1f */, 0, 1073741824 /* Float: 2f */, 0);
			break;
		case 4:
			func_452(71);
			if (iLocal_1340 != -1)
			{
				if (!AUDIO::_0x84848E1C0FC67DBB(iLocal_1340))
				{
					AUDIO::_0x3210BCB36AF7621B(iLocal_1340);
				}
			}
			AUDIO::_PLAY_SOUND_FROM_ENTITY("Wagon_Destroy", iLocal_142, "MUD3_Sounds", false, 0, 0);
			TASK::CLEAR_PED_TASKS(Local_193[11 /*6*/], true, false);
			VEHICLE::_0x6090A031C69F384E(iLocal_142, 1);
			VEHICLE::_0x850CE59DEC2028F3(iLocal_142, 1);
			if (!MAP::DOES_BLIP_EXIST(Local_193[11 /*6*/].f_1))
			{
				Local_193[11 /*6*/].f_1 = MAP::_BLIP_ADD_FOR_ENTITY(-89429847, Local_193[11 /*6*/]);
				MAP::_BLIP_SET_MODIFIER(Local_193[11 /*6*/].f_1, 580546400);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_193[11 /*6*/].f_1, "MUD3_B_DRIVER");
			}
			if (!VEHICLE::_0x404527BC03DA0E6C(iLocal_142))
			{
				VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_142, 17f, -1, false);
			}
			func_1869();
			func_1892();
			break;
		case 5:
			func_452(72);
			if (!VEHICLE::_0x404527BC03DA0E6C(iLocal_142))
			{
				VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_142, 17f, -1, false);
			}
			break;
		case 6:
			if (!func_167(63) || ENTITY::GET_ENTITY_SPEED(Local_193[11 /*6*/]) > 0.5f)
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_LOOK_AT_ENTITY(0, Global_35, 10000, 0, 51, 0);
				if (__LIB_0__::func_272(Local_589[1 /*9*/], 0))
				{
					TASK::TASK_GOTO_ENTITY_OFFSET_XY(0, Local_589[1 /*9*/], -1, 0.5f, -0.5f, 2.5f, 1f, false);
				}
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(Local_193[11 /*6*/], iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			}
			func_398(63);
			break;
		case 7:
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			if (__LIB_0__::func_272(Local_589[1 /*9*/], 0))
			{
				TASK::TASK_ANIMAL_INTERACTION(0, Local_589[1 /*9*/], joaat("INTERACTION_POSITIVESHORT"), 0, 0);
			}
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(Local_193[11 /*6*/], iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			break;
		case 8:
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_1893(), 1f, 20000, 0.25f, 2097152, 40000f);
			TASK::TASK_ACHIEVE_HEADING(0, func_1894(), 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::CLEAR_PED_TASKS(Local_193[11 /*6*/], true, false);
			TASK::TASK_PERFORM_SEQUENCE(Local_193[11 /*6*/], iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			func_1870(&(Local_589[1 /*9*/]), 3, 0);
			break;
		case 10:
			func_1895();
			break;
		case 9:
			break;
		case 11:
			if (__LIB_0__::func_272(Local_193[11 /*6*/], 0))
			{
				if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Local_193[11 /*6*/], 1))
				{
					__LIB_2__::func_357(Local_193[11 /*6*/], Global_36, 2, 1, 1);
				}
				else
				{
					TASK::CLEAR_PED_TASKS(Local_193[11 /*6*/], true, false);
				}
				TASK::TASK_SMART_FLEE_PED(Local_193[11 /*6*/], Global_35, 1000f, -1, 0, 3f, Local_589[1 /*9*/]);
			}
			if (func_167(16) && iLocal_621 != 9)
			{
				if (iLocal_621 == 13)
				{
					__LIB_4__::func_467(3, 0, 0, 0, Local_193[11 /*6*/], 0, 1065353216 /* Float: 1f */, 0);
				}
				else if (iLocal_621 == 12)
				{
					__LIB_4__::func_467(2, 0, 0, 0, Local_193[11 /*6*/], 0, 1065353216 /* Float: 1f */, 0);
				}
				func_168(16);
			}
			__LIB_0__::func_325(&(Local_193[11 /*6*/].f_1));
			break;
		case 12:
			TASK::CLEAR_PED_TASKS(Local_193[11 /*6*/], true, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_193[11 /*6*/], false);
			if (__LIB_0__::func_272(Local_589[0 /*9*/], 0) && PED::_0xD543D3A8FDE4F185(Local_193[11 /*6*/], Local_589[0 /*9*/]))
			{
				TASK::TASK_ANIMAL_INTERACTION(Local_193[11 /*6*/], Local_589[0 /*9*/], joaat("INTERACTION_POSITIVELONG"), 0, 0);
			}
			else
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_LOOK_AT_ENTITY(0, Global_35, 2000, 0, 51, 0);
				TASK::TASK_STAND_STILL(0, 1200);
				TASK::TASK_GOTO_ENTITY_OFFSET_XY(0, iLocal_142, -1, 0.5f, -0.5f, -2.5f, 1f, false);
				TASK::_TASK_START_SCENARIO_IN_PLACE(0, joaat("WORLD_HUMAN_CROUCH_INSPECT"), -1, true, 0, -1f, false);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(Local_193[11 /*6*/], iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			}
			__LIB_0__::func_325(&(Local_193[11 /*6*/].f_1));
			func_163(3, 0, 0);
			break;
		case 0:
			break;
	}
}

void func_1312()
{
	if (!PED::IS_PED_IN_VEHICLE(Global_35, Local_579, false))
	{
		return;
	}
	if (!__LIB_0__::func_266(Local_579, -280.2921f, 719.0242f, 113.3706f, 150f, 1, 1))
	{
		return;
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_EXIT"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_TRAVERSAL"), false);
}

void func_1314(var uParam0, int iParam1)
{
	if (iLocal_1356 == iParam1)
	{
		return;
	}
	switch (iLocal_1356)
	{
		case 0:
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			__LIB_1__::func_726(Local_193[0 /*6*/], 1);
			__LIB_1__::func_727(Global_35, 1);
			__LIB_5__::func_438(&uLocal_529);
			__LIB_10__::func_935(uParam0, Local_193[0 /*6*/], 1);
			break;
		case 9:
			break;
		case 10:
			break;
	}
	iLocal_1356 = iParam1;
	switch (iLocal_1356)
	{
		case 0:
			func_1275(&(Local_193[0 /*6*/]), 3, 0);
			func_1276(&(Local_193[1 /*6*/]), 2, 0);
			func_1277(&(Local_193[2 /*6*/]), 2, 0);
			func_1278(&(Local_193[3 /*6*/]), 3, 0);
			PLAYER::_0x3946FC742AC305CD(PLAYER::PLAYER_ID(), Local_193[0 /*6*/], "MUD3_IG27", 0f, 0f, 0f, 0, "WagonLimit");
			__LIB_4__::func_952(uParam0, 0);
			break;
		case 1:
			break;
		case 2:
			func_1275(&(Local_193[0 /*6*/]), 4, 0);
			func_1276(&(Local_193[1 /*6*/]), 5, 0);
			func_1277(&(Local_193[2 /*6*/]), 5, 0);
			func_1278(&(Local_193[3 /*6*/]), 7, 0);
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_579, false);
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			func_1275(&(Local_193[0 /*6*/]), 7, 0);
			PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "WagonLimit");
			func_1899();
			__LIB_1__::func_731(&uLocal_529);
			func_1901();
			__LIB_0__::func_202(Global_35, 1);
			__LIB_1__::func_971(0);
			__LIB_10__::func_930(uParam0, Local_193[0 /*6*/], joaat("COLOR_WHITE"), joaat("BLIP_STYLE_COMPANION"), 1, 1);
			__LIB_0__::func_172(iLocal_148[34]);
			__LIB_4__::func_952(uParam0, 1);
			break;
		case 9:
			__LIB_4__::func_952(uParam0, 29);
			break;
		case 10:
			break;
	}
}

void func_1315()
{
	float fVar0;
	int iVar1;
	float fVar2;
	fVar0 = -1f;
	if (iLocal_1356 != 8)
	{
		return;
	}
	iVar1 = Local_193[0 /*6*/].f_5;
	if (iVar1 == 8)
	{
		fVar0 = 10f;
	}
	func_1903(fVar0);
	func_1904();
	if (func_167(66))
	{
		__LIB_2__::func_608(&uLocal_441);
		return;
	}
	if (!__LIB_2__::func_618(&uLocal_441))
	{
		__LIB_5__::func_107(&uLocal_441);
	}
	if (!func_1905(6))
	{
		if (!func_1389(6))
		{
			__LIB_2__::func_608(&uLocal_441);
			return;
		}
	}
	if (func_1389(6))
	{
		if (Global_1396257[26 /*638*/].f_632)
		{
			Global_1396257[26 /*638*/].f_632 = 0;
		}
	}
	fVar2 = 4f;
	if (__LIB_0__::func_393(Local_193[0 /*6*/], iLocal_148[9], 0, 1))
	{
		fVar2 = 10f;
	}
	if (__LIB_9__::func_324(&uLocal_441) > fVar2)
	{
		if (__LIB_0__::func_393(Local_193[0 /*6*/], iLocal_148[9], 0, 1))
		{
			if (func_1906(15, 0))
			{
				__LIB_2__::func_608(&uLocal_441);
				return;
			}
		}
		else if (!func_1907(0, &(Local_193[0 /*6*/]), 3f))
		{
			if (func_1906(14, 0))
			{
				__LIB_2__::func_608(&uLocal_441);
				return;
			}
		}
	}
}

void func_1318(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = 16;
	if (bParam1)
	{
		if (func_1320(iVar0, 1))
		{
			func_1852(iVar0, iParam0);
		}
	}
	if (Local_1193[iVar0 /*6*/].f_2 == 1)
	{
		return;
	}
	if (!func_1911(iVar0, iParam0))
	{
		return;
	}
	if (!func_1912(iVar0))
	{
		return;
	}
	if (!Local_1193[iVar0 /*6*/].f_2)
	{
		if (__LIB_0__::func_272(Global_35, 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1193[iVar0 /*6*/], "ARTHUR", Global_35, 0);
		}
		if (__LIB_0__::func_272(Local_193[1 /*6*/], 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1193[iVar0 /*6*/], "CS_Karen", Local_193[1 /*6*/], 0);
		}
		if (__LIB_0__::func_272(Local_193[2 /*6*/], 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1193[iVar0 /*6*/], "CS_MaryBeth", Local_193[2 /*6*/], 0);
		}
		if (__LIB_0__::func_272(Local_193[3 /*6*/], 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1193[iVar0 /*6*/], "CS_Tilly", Local_193[3 /*6*/], 0);
		}
		if (__LIB_0__::func_272(Local_193[0 /*6*/], 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1193[iVar0 /*6*/], "CS_Uncle", Local_193[0 /*6*/], 0);
		}
		if (__LIB_0__::func_272(Local_193[0 /*6*/], 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1193[iVar0 /*6*/], "WAGON03X", Local_579, 0);
		}
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_1193[iVar0 /*6*/], false) && !ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_1193[iVar0 /*6*/], false))
	{
		ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(Local_1193[iVar0 /*6*/], Local_579, 0);
		func_1873(iVar0, iParam0, 1);
		ANIMSCENE::START_ANIM_SCENE(Local_1193[iVar0 /*6*/]);
		Local_1193[iVar0 /*6*/].f_2 = 1;
	}
}

bool func_1319(int iParam0)
{
	if (func_1389(iParam0))
	{
		return false;
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_1193[iParam0 /*6*/], false))
	{
		return true;
	}
	return false;
}

bool func_1320(int iParam0, bool bParam1)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1193[iParam0 /*6*/]))
	{
		if (!bParam1)
		{
			if (ANIMSCENE::_0x34A0671BE613D3D0(Local_1193[iParam0 /*6*/]))
			{
				return false;
			}
		}
		if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_1193[iParam0 /*6*/], false))
		{
			return true;
		}
	}
	return false;
}

bool func_1321(int iParam0, char* sParam1, bool bParam2)
{
	if (func_1389(iParam0))
	{
		return true;
	}
	if (ANIMSCENE::_0xB89FCFF19DAFFF28(Local_1193[iParam0 /*6*/], sParam1))
	{
		return true;
	}
	if (bParam2)
	{
		if (ANIMSCENE::_0x005E6F28DD7ED58D(Local_1193[iParam0 /*6*/], sParam1))
		{
			return true;
		}
	}
	return false;
}

bool func_1322(int iParam0, float fParam1)
{
	if (func_1389(iParam0))
	{
		return true;
	}
	if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_1193[iParam0 /*6*/]) >= fParam1)
	{
		return true;
	}
	return false;
}

bool func_1325(int iParam0, int iParam1)
{
	char* sVar0;
	if (func_1319(iParam0))
	{
		sVar0 = func_1442(iParam1);
		if (ANIMSCENE::_0x1F0E401031E20146(Local_1193[iParam0 /*6*/], sVar0))
		{
			return true;
		}
	}
	return false;
}

void func_1326(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = 17;
	if (bParam1)
	{
		if (func_1320(iVar0, 1))
		{
			func_1852(iVar0, iParam0);
		}
	}
	if (Local_1193[iVar0 /*6*/].f_2 == 1)
	{
		return;
	}
	if (!func_1911(iVar0, iParam0))
	{
		return;
	}
	if (!func_1912(iVar0))
	{
		return;
	}
	if (!Local_1193[iVar0 /*6*/].f_2)
	{
		if (__LIB_0__::func_272(Global_35, 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1193[iVar0 /*6*/], "ARTHUR", Global_35, 0);
		}
		if (__LIB_0__::func_272(Local_193[1 /*6*/], 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1193[iVar0 /*6*/], "CS_Karen", Local_193[1 /*6*/], 0);
		}
		if (__LIB_0__::func_272(Local_193[2 /*6*/], 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1193[iVar0 /*6*/], "CS_MaryBeth", Local_193[2 /*6*/], 0);
		}
		if (__LIB_0__::func_272(Local_193[3 /*6*/], 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1193[iVar0 /*6*/], "CS_Tilly", Local_193[3 /*6*/], 0);
		}
		if (__LIB_0__::func_272(Local_193[0 /*6*/], 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1193[iVar0 /*6*/], "CS_Uncle", Local_193[0 /*6*/], 0);
		}
		if (__LIB_0__::func_272(Local_193[0 /*6*/], 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1193[iVar0 /*6*/], "WAGON03X", Local_579, 0);
		}
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_1193[iVar0 /*6*/], false) && !ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_1193[iVar0 /*6*/], false))
	{
		func_1873(iVar0, iParam0, 1);
		ANIMSCENE::START_ANIM_SCENE(Local_1193[iVar0 /*6*/]);
		Local_1193[iVar0 /*6*/].f_2 = 1;
	}
}

void func_1330()
{
	int iVar0;
	if (!__LIB_0__::func_393(Local_193[0 /*6*/], iLocal_148[9], 0, 1))
	{
		return;
	}
	iVar0 = CLOCK::GET_CLOCK_HOURS();
	if (iVar0 >= 18)
	{
		func_1293(18, 0);
	}
	else if (iVar0 >= 12)
	{
		func_1293(17, 0);
	}
	else if (iVar0 >= 6)
	{
		func_1293(16, 0);
	}
}

int func_1331(var uParam0, int iParam1)
{
	char* sVar0;
	int iVar1;
	if (func_167(60))
	{
		return 0;
	}
	sVar0 = func_1914(iParam1);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return 1;
	}
	if (func_1915(iParam1))
	{
		if (!__LIB_1__::func_588(sVar0, 0, 0, -1, -1, 0))
		{
			UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
			__LIB_5__::func_486(uParam0, sVar0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
		}
		return 1;
	}
	if (__LIB_5__::func_352(sVar0))
	{
		__LIB_2__::func_608(&uLocal_390);
		func_1919(iParam1);
		return 0;
	}
	if (!__LIB_1__::func_588(sVar0, 0, 0, -1, -1, 0))
	{
		UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
		__LIB_5__::func_486(uParam0, sVar0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
		__LIB_5__::func_107(&uLocal_390);
		fLocal_105 = 10000f;
		iLocal_117 = 0;
		return 0;
	}
	if (__LIB_4__::func_68(sVar0, 1))
	{
		return 0;
	}
	iVar1 = 0;
	switch (iParam1)
	{
		case 2:
			if (func_1921())
			{
				__LIB_5__::func_107(&uLocal_390);
			}
			else
			{
				if (func_1922(&uLocal_390, func_1286(1, 7), &fLocal_105, 20f, 1092616192 /* Float: 10f */) || func_167(67))
				{
					__LIB_0__::func_565(sVar0, 7500, 0, 0, 0, 1);
					iVar1 = 1;
				}
				Jump @1066; //curOff = 416
				__LIB_0__::func_565(sVar0, 7500, 0, 0, 0, 1);
				iVar1 = 1;
				Jump @1066; //curOff = 436
				__LIB_0__::func_565(sVar0, 7500, 0, 0, 0, 1);
				iVar1 = 1;
				Jump @1066; //curOff = 456
				__LIB_0__::func_565(sVar0, 7500, 0, 0, 0, 1);
				iVar1 = 1;
				Jump @1066; //curOff = 476
				__LIB_0__::func_565(sVar0, 7500, 0, 0, 0, 1);
				iVar1 = 1;
				Jump @1066; //curOff = 496
				__LIB_0__::func_565(sVar0, 7500, 0, 0, 0, 1);
				iVar1 = 1;
				Jump @1066; //curOff = 516
				if (iLocal_577 != 9 && iLocal_577 != 10)
				{
					__LIB_0__::func_565(sVar0, 7500, 0, 0, 0, 1);
					iVar1 = 1;
				}
				Jump @1066; //curOff = 556
				__LIB_0__::func_565(sVar0, 7500, 0, 0, 0, 1);
				iVar1 = 1;
				Jump @1066; //curOff = 576
				__LIB_0__::func_565(sVar0, 7500, 0, 0, 0, 1);
				iVar1 = 1;
				Jump @1066; //curOff = 596
				if (func_972(19) == 3 || func_972(20) == 3)
				{
					__LIB_0__::func_565(sVar0, 7500, 0, 0, 0, 1);
					iVar1 = 1;
				}
				Jump @1066; //curOff = 641
				if (func_972(27) == 3 || func_972(28) == 3)
				{
					__LIB_0__::func_565(sVar0, 7500, 0, 0, 0, 1);
					iVar1 = 1;
				}
				Jump @1066; //curOff = 686
				if (!__LIB_2__::func_618(&uLocal_426))
				{
					__LIB_5__::func_107(&uLocal_426);
				}
				if (__LIB_9__::func_324(&uLocal_426) >= 20f)
				{
					__LIB_0__::func_565(sVar0, 7500, 0, 0, 0, 1);
					iVar1 = 1;
				}
				Jump @1066; //curOff = 740
				if (func_972(76) == 3)
				{
					__LIB_0__::func_565(sVar0, 7500, 0, 0, 0, 1);
					iVar1 = 1;
				}
				Jump @1066; //curOff = 770
				__LIB_0__::func_565(sVar0, 7500, 0, 0, 0, 1);
				iVar1 = 1;
				Jump @1066; //curOff = 790
				if (func_167(47))
				{
					if (!func_1325(15, 81))
					{
						__LIB_0__::func_565(sVar0, 7500, 0, 0, 0, 1);
						iVar1 = 1;
					}
				}
				if (func_1297(92, 1) || func_1297(91, 1))
				{
					if (__LIB_2__::func_618(&uLocal_390))
					{
						__LIB_2__::func_608(&uLocal_390);
					}
				}
				if (func_1922(&uLocal_390, ENTITY::GET_ENTITY_COORDS(Local_193[1 /*6*/], true, false), &fLocal_105, 10f, 10f))
				{
					__LIB_0__::func_565(sVar0, 7500, 0, 0, 0, 1);
					iVar1 = 1;
				}
				Jump @1066; //curOff = 920
				if (func_1923(&uLocal_390, &iLocal_117))
				{
					__LIB_0__::func_565(sVar0, 7500, 0, 0, 0, 1);
					iVar1 = 1;
				}
				Jump @1066; //curOff = 952
				if (func_1924(&uLocal_390, ENTITY::GET_ENTITY_COORDS(Local_193[1 /*6*/], true, false), &fLocal_105, 4f))
				{
					__LIB_0__::func_565(sVar0, 7500, 0, 0, 0, 1);
					iVar1 = 1;
				}
				Jump @1066; //curOff = 996
				__LIB_0__::func_565(sVar0, 7500, 0, 0, 0, 1);
				iVar1 = 1;
				Jump @1066; //curOff = 1016
				__LIB_0__::func_565(sVar0, 7500, 0, 0, 0, 1);
				iVar1 = 1;
				Jump @1066; //curOff = 1036
				__LIB_0__::func_565(sVar0, 7500, 0, 0, 0, 1);
				iVar1 = 1;
				Jump @1066; //curOff = 1056
				return 1;
			}
			if (iVar1 == 1)
			{
				__LIB_2__::func_608(&uLocal_390);
				func_1919(iParam1);
			}
			return 0;
			default:
				break;
	}
}

void func_1333(var uParam0, int iParam1)
{
	int iVar0;
	if (iLocal_1358 == iParam1)
	{
		return;
	}
	switch (iLocal_1358)
	{
		case 0:
			__LIB_0__::func_325(&iLocal_143);
			func_163(25, 1, 0);
			break;
		case 1:
			__LIB_0__::func_325(&iLocal_143);
			break;
		case 2:
			__LIB_2__::func_608(&uLocal_426);
			__LIB_0__::func_325(&iLocal_143);
			break;
		case 3:
			break;
		case 4:
			break;
	}
	iLocal_1358 = iParam1;
	switch (iLocal_1358)
	{
		case 0:
			__LIB_0__::func_325(&iLocal_143);
			if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Local_193[0 /*6*/], -1))
			{
				if (Local_193[0 /*6*/].f_5 < 10)
				{
					func_1275(&(Local_193[0 /*6*/]), 12, 0);
				}
			}
			iLocal_1359 = func_1925();
			if (iLocal_1359 != 4)
			{
				iVar0 = func_1926(iLocal_1359);
				if (iVar0 != 0)
				{
					func_1927(3, iVar0);
				}
			}
			__LIB_4__::func_952(uParam0, 0);
			break;
		case 1:
			__LIB_5__::func_107(&uLocal_393);
			func_1278(&(Local_193[3 /*6*/]), 4, 0);
			func_1277(&(Local_193[2 /*6*/]), 3, 0);
			__LIB_0__::func_325(&iLocal_143);
			iLocal_143 = __LIB_4__::func_983(408396114, vLocal_123, 1);
			__LIB_4__::func_952(uParam0, 1);
			break;
		case 2:
			__LIB_5__::func_107(&uLocal_426);
			__LIB_0__::func_325(&iLocal_143);
			__LIB_4__::func_952(uParam0, 3);
			break;
		case 3:
			func_1275(&(Local_193[0 /*6*/]), 0, 0);
			__LIB_4__::func_952(uParam0, 29);
			break;
		case 4:
			break;
	}
}

void func_1335(var uParam0, char[32] cParam1)
{
	__LIB_11__::func_589(&(uParam0->f_7375), cParam1);
}

void func_1336(var uParam0)
{
	if (!func_167(44))
	{
		__LIB_4__::func_570(&(uParam0->f_7375));
		__LIB_4__::func_655(&(uParam0->f_7375));
		__LIB_10__::func_925(uParam0, "1-Uncle_Outside_First");
		__LIB_10__::func_925(uParam0, "2-Arthur_Outside_First");
		func_1930(uParam0);
		func_398(44);
	}
}

void func_1337()
{
	float fVar0;
	int iVar1;
	fVar0 = 1.75f;
	iVar1 = Local_193[0 /*6*/].f_5;
	if (iVar1 <= 15)
	{
		if (__LIB_0__::func_48(Global_35, Local_193[0 /*6*/], fVar0, 1))
		{
			PED::SET_PED_RESET_FLAG(Global_35, 129, true);
		}
	}
}

void func_1338()
{
	if (Global_1914319.f_17377)
	{
		func_163(20, 0, 0);
		func_163(19, 0, 0);
		func_163(23, 0, 0);
		func_163(25, 0, 0);
		func_163(76, 0, 0);
		func_163(29, 0, 0);
		func_163(80, 0, 0);
		func_1931("MUD3_IG25_HARP", 0);
	}
}

bool func_1340(var uParam0)
{
	float fVar0;
	func_1933();
	if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_148[10], true, 0))
	{
		func_1333(uParam0, 3);
		return true;
	}
	if (!__LIB_4__::func_75(3) && !func_167(74))
	{
		return true;
	}
	if (PED::_IS_PED_OPENING_A_DOOR(Global_35))
	{
		fVar0 = OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(706990067);
		if (fVar0 > 0.2f)
		{
			return true;
		}
	}
	return false;
}

bool func_1341(int iParam0)
{
	if (!func_1855(iParam0))
	{
		return true;
	}
	return !__LIB_0__::func_269(uLocal_1167[iParam0]);
}

void func_1342()
{
	if (!func_167(13))
	{
		if (__LIB_4__::func_807(0))
		{
			func_398(13);
		}
	}
	else if (!func_167(14))
	{
		if (!__LIB_4__::func_807(0))
		{
			func_398(14);
		}
	}
}

bool func_1343()
{
	switch (iLocal_1359)
	{
		case 0:
			if (func_1293(78, 0) == 3)
			{
				return true;
			}
			break;
		case 1:
			if (func_1293(79, 0) == 3)
			{
				return true;
			}
			break;
		case 2:
			if (func_1293(80, 0) == 3)
			{
				return true;
			}
			break;
		case 3:
			if (func_1293(81, 0) == 3)
			{
				return true;
			}
			break;
		case 4:
			if (func_1293(76, 0) == 3)
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_1344(int iParam0)
{
	if (!func_1935(iParam0))
	{
		return false;
	}
	if (!func_1936(iParam0))
	{
		return false;
	}
	return true;
}

void func_1345()
{
	if (func_167(1))
	{
		return;
	}
	__LIB_0__::func_325(&iLocal_143);
	switch (iLocal_1359)
	{
		case 0:
			iLocal_143 = MAP::_BLIP_ADD_FOR_COORD(203020899, -325.23f, 802.03f, 118.01f);
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_143, "MUD3_B_JERKY");
			break;
		case 1:
			iLocal_143 = MAP::_BLIP_ADD_FOR_COORD(203020899, -320.07f, 803.11f, 118.37f);
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_143, "MUD3_B_COFFEE");
			break;
		case 2:
			iLocal_143 = MAP::_BLIP_ADD_FOR_COORD(203020899, -319.42f, 799.07f, 117.75f);
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_143, "MUD3_B_CIGAR");
			break;
		case 3:
			iLocal_143 = MAP::_BLIP_ADD_FOR_COORD(203020899, -322.64f, 800.07f, 117.96f);
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_143, "MUD3_B_TREAT");
			break;
	}
	func_398(1);
}

void func_1346(var uParam0)
{
	switch (iLocal_1359)
	{
		case 0:
			func_1331(uParam0, 262144);
			break;
		case 1:
			func_1331(uParam0, 524288);
			break;
		case 2:
			func_1331(uParam0, 1048576);
			break;
		case 3:
			func_1331(uParam0, 2097152);
			break;
	}
}

bool func_1348(int iParam0)
{
	int iVar0;
	iVar0 = func_1926(iLocal_1359);
	if (iVar0 == 0)
	{
		return false;
	}
	if (iParam0 == iVar0)
	{
		return true;
	}
	return false;
}

bool func_1349()
{
	if (func_167(13))
	{
		if (func_167(14))
		{
			return true;
		}
	}
	else
	{
		return true;
	}
	return false;
}

void func_1352(var uParam0, bool bParam1)
{
	func_1336(uParam0);
	if (bParam1)
	{
		__LIB_11__::func_771(uParam0, "1-Uncle_Outside_First");
	}
	else
	{
		__LIB_11__::func_771(uParam0, "2-Arthur_Outside_First");
	}
}

void func_1355(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	iVar1 = iParam0->f_5;
	if (!__LIB_0__::func_272(*iParam0, 0))
	{
		iParam1 = 7;
	}
	if (iVar1 == iParam1 && !bParam2)
	{
		return;
	}
	iParam0->f_5 = iParam1;
	if (iParam1 != 3 && iParam1 != 4)
	{
		if (__LIB_0__::func_27(iParam0->f_4, 2048))
		{
			PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "FOREMAN_LEFT");
			__LIB_1__::func_681(&(iParam0->f_4), 2048);
		}
		if (__LIB_0__::func_27(iParam0->f_4, 4096))
		{
			PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "FOREMAN_RIGHT");
			__LIB_1__::func_681(&(iParam0->f_4), 4096);
		}
		PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "FOREMAN_RIGHT_LOCK");
		PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "FOREMAN_LEFT_LOCK");
	}
	switch (iParam1)
	{
		case 0:
			break;
		case 1:
			break;
		case 2:
			__LIB_3__::func_157(&(Local_701[0 /*17*/]), "MUD3_C_GREET", 0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
			__LIB_3__::func_157(&(Local_701[1 /*17*/]), "MUD3_C_AGRO", 0, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
			if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_148[23]))
			{
				iLocal_148[23] = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), -316.2413f, 774.8235f, 117.2669f, 0f, 0f, 0f, 1.497992f, 1.143306f, 1.77883f);
			}
			PED::_0x406CCF555B04FAD3(*iParam0, 0, 0f);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(*iParam0, true, 30f);
			break;
		case 3:
			if (__LIB_0__::func_27(iParam0->f_4, 4096))
			{
				PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "FOREMAN_RIGHT");
				PLAYER::_0x3946FC742AC305CD(PLAYER::PLAYER_ID(), *iParam0, "MUD3_FOREMAN_RIGHT_LOCK", -315.67f, 774.65f, 117.03f, 0, "FOREMAN_RIGHT_LOCK");
				__LIB_1__::func_681(&(iParam0->f_4), 4096);
			}
			else if (__LIB_0__::func_27(iParam0->f_4, 2048))
			{
				PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "FOREMAN_LEFT");
				PLAYER::_0x3946FC742AC305CD(PLAYER::PLAYER_ID(), *iParam0, "MUD3_FOREMAN_LEFT_LOCK", -315.67f, 774.65f, 117.03f, 0, "FOREMAN_LEFT_LOCK");
				__LIB_1__::func_681(&(iParam0->f_4), 2048);
			}
			func_460(&iLocal_736, &Local_701, iParam0, 0);
			break;
		case 4:
			func_460(&iLocal_736, &Local_701, iParam0, 0);
			break;
		case 5:
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(*iParam0, joaat("REL_CIVMALE"));
			if (__LIB_0__::func_27(iParam0->f_4, 8192))
			{
				vVar2 = { -314.37f, 744.37f, 116.56f };
			}
			else
			{
				if (__LIB_0__::func_272(Local_193[14 /*6*/], 1))
				{
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_193[14 /*6*/], -332.6214f, 781.4414f, 114.9543f, 284.8387f, true, false, true);
				}
				vVar2 = { -317.8f, 786.83f, 116.23f };
			}
			if (__LIB_0__::func_272(Local_193[14 /*6*/], 1))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_193[14 /*6*/], vVar2, 1.75f, 20000, 0.25f, 0, 40000f);
			}
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar2, 1.5f, -1, 2f, 6291457, 40000f);
			if (__LIB_0__::func_272(Local_193[14 /*6*/], 1))
			{
				TASK::TASK_MOUNT_ANIMAL(0, Local_193[14 /*6*/], 20000, -1, 1073741824 /* Float: 2f */, 1, 0, 0);
			}
			TASK::TASK_SMART_FLEE_PED(0, Global_35, 1000f, -1, 0, 2f, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(*iParam0, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			func_460(&iLocal_736, &Local_701, iParam0, 0);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(*iParam0, false, 0f);
			PED::FORCE_PED_MOTION_STATE(*iParam0, joaat("MOTIONSTATE_WALK"), false, 0, false);
			PED::_0x2208438012482A1A(*iParam0, false, false);
			break;
		case 6:
			TASK::TASK_COMBAT_PED(*iParam0, Global_35, 0, 0);
			break;
		case 7:
			break;
	}
}

void func_1356(var uParam0, int iParam1)
{
	if (iLocal_1360 == iParam1)
	{
		return;
	}
	switch (iLocal_1360)
	{
		case 0:
			break;
		case 1:
			if (__LIB_0__::func_139(iLocal_191))
			{
				__LIB_1__::func_281(&iLocal_191, 1, 1);
			}
			func_1385(&(Local_193[8 /*6*/]), 3, 0);
			OBJECT::_0x0C0A373D181BF900(238680582);
			__LIB_0__::func_325(&iLocal_143);
			if (SCRIPTS::_0x7409669C5ED50144(joaat("CHAL_CTX_MISSION_CHASE")))
			{
				SCRIPTS::_0x50B72A754EE64A71(joaat("CHAL_CTX_MISSION_CHASE"));
			}
			break;
		case 2:
			break;
		case 3:
			__LIB_0__::func_325(&iLocal_143);
			break;
		case 4:
			break;
		case 5:
			break;
	}
	iLocal_1360 = iParam1;
	switch (iLocal_1360)
	{
		case 0:
			func_1355(&(Local_193[5 /*6*/]), 2, 0);
			func_1278(&(Local_193[3 /*6*/]), 5, 0);
			__LIB_0__::func_325(&iLocal_143);
			iLocal_143 = MAP::_BLIP_ADD_FOR_COORD(408396114, ENTITY::GET_ENTITY_COORDS(Local_193[3 /*6*/], true, false));
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_143, "MUD3_B_ARGUE");
			PED::SET_PED_CONFIG_FLAG(Global_35, 421, true);
			__LIB_4__::func_952(uParam0, 0);
			break;
		case 1:
			func_1385(&(Local_193[8 /*6*/]), 1, 0);
			OBJECT::_0x0C0A373D181BF900(238680582);
			OBJECT::_0x7F458B543006C8FE(238680582, 24);
			__LIB_5__::func_107(&uLocal_420);
			__LIB_0__::func_325(&iLocal_143);
			iLocal_143 = MAP::_0xA6EF0C54A3443E70(1247852480, iLocal_148[8]);
			func_1288(uParam0, 2);
			func_1288(uParam0, 3);
			__LIB_0__::func_172(iLocal_148[23]);
			if (!SCRIPTS::_0x7409669C5ED50144(joaat("CHAL_CTX_MISSION_CHASE")))
			{
				SCRIPTS::_0x7D654266025E921B(joaat("CHAL_CTX_MISSION_CHASE"));
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_193[4 /*6*/]))
			{
				PED::CLEAR_PED_ENV_DIRT(Local_193[4 /*6*/]);
			}
			if (!func_167(88))
			{
				func_468(&(Local_284[10 /*5*/]), 0, 0, 0, 0, 0, 0);
				func_398(88);
			}
			__LIB_4__::func_952(uParam0, 1);
			break;
		case 2:
			func_1385(&(Local_193[8 /*6*/]), 3, 0);
			__LIB_0__::func_202(Global_35, 1);
			__LIB_0__::func_325(&iLocal_143);
			func_1828(&Global_35, 3, 7, "ARTHUR");
			func_1278(&(Local_193[3 /*6*/]), 10, 0);
			__LIB_4__::func_952(uParam0, 2);
			break;
		case 3:
			func_1385(&(Local_193[8 /*6*/]), 3, 0);
			__LIB_0__::func_202(Global_35, 1);
			func_1940();
			func_1941();
			func_1292(uParam0, 7);
			__LIB_4__::func_952(uParam0, 3);
			break;
		case 4:
			__LIB_4__::func_952(uParam0, 29);
			break;
		case 5:
			break;
	}
}

void func_1357(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!__LIB_0__::func_272(iParam1, 1))
	{
		return;
	}
	if (iParam2 == 0)
	{
		return;
	}
	if (!__LIB_1__::func_201(iParam0, iParam2))
	{
		return;
	}
	__LIB_0__::func_723(iParam0);
	if (bParam3)
	{
		__LIB_5__::func_268(iParam0, 67108864);
	}
	__LIB_1__::func_288(iParam0, iParam2, 1);
	__LIB_1__::func_558(iParam0, iParam1, iParam2, 1);
}

void func_1358()
{
	int iVar0;
	iVar0 = 0;
	if (!func_1912(iVar0))
	{
		return;
	}
	if (!Local_1193[iVar0 /*6*/].f_2)
	{
		if (__LIB_0__::func_272(Global_35, 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1193[iVar0 /*6*/], "player", Global_35, 0);
		}
		if (__LIB_0__::func_272(Local_193[10 /*6*/], 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1193[iVar0 /*6*/], "cs_valprayingman", Local_193[10 /*6*/], 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_185[0]))
		{
			ENTITY::SET_ENTITY_VISIBLE(iLocal_185[0], true);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1193[iVar0 /*6*/], "p_cs_bookkelonian", iLocal_185[0], 0);
		}
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_1193[iVar0 /*6*/], false))
	{
		ANIMSCENE::START_ANIM_SCENE(Local_1193[iVar0 /*6*/]);
		Local_1193[iVar0 /*6*/].f_2 = 1;
	}
}

void func_1359()
{
	int iVar0;
	iVar0 = 1;
	if (!func_1912(iVar0))
	{
		return;
	}
	if (!Local_1193[iVar0 /*6*/].f_2)
	{
		if (__LIB_0__::func_272(Global_35, 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1193[iVar0 /*6*/], "ARTHUR", Global_35, 0);
		}
		if (__LIB_0__::func_272(Local_193[9 /*6*/], 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1193[iVar0 /*6*/], "U_M_M_VALPOOPINGMAN_01", Local_193[9 /*6*/], 0);
		}
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1193[iVar0 /*6*/], "p_door33x", __LIB_3__::func_136(-529064319, 0), 0);
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_1193[iVar0 /*6*/], false))
	{
		ANIMSCENE::START_ANIM_SCENE(Local_1193[iVar0 /*6*/]);
		Local_1193[iVar0 /*6*/].f_2 = 1;
	}
}

void func_1360(int iParam0, struct<4> Param1, int iParam5, float fParam6)
{
	func_904(iParam0, Param1, Param1.f_3, iParam5, fParam6);
}

void func_1362(int iParam0)
{
	int iVar0;
	iVar0 = 14;
	if (!func_1912(iVar0))
	{
		return;
	}
	if (!Local_1193[iVar0 /*6*/].f_2)
	{
		if (__LIB_0__::func_272(Local_193[2 /*6*/], 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1193[iVar0 /*6*/], "CS_MaryBeth", Local_193[2 /*6*/], 0);
		}
		if (__LIB_0__::func_272(Local_193[0 /*6*/], 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1193[iVar0 /*6*/], "CS_Uncle", Local_193[0 /*6*/], 0);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_185[1]))
		{
			iLocal_185[1] = OBJECT::CREATE_OBJECT(joaat("S_WHISKEYEMPTY01X"), -322.87f, 796.06f, 116.89f, true, true, false, false, true);
		}
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1193[iVar0 /*6*/], "p_bottleJD01x", iLocal_185[1], 0);
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_1193[iVar0 /*6*/], false))
	{
		func_1873(iVar0, iParam0, 1);
		ANIMSCENE::START_ANIM_SCENE(Local_1193[iVar0 /*6*/]);
		Local_1193[iVar0 /*6*/].f_2 = 1;
	}
}

void func_1363(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = 15;
	if (bParam1)
	{
		if (func_1320(iVar0, 1))
		{
			func_1852(iVar0, iParam0);
		}
	}
	if (!func_1911(iVar0, iParam0))
	{
		return;
	}
	if (!func_1912(iVar0))
	{
		return;
	}
	if (!Local_1193[iVar0 /*6*/].f_2)
	{
		if (__LIB_0__::func_272(Global_35, 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1193[iVar0 /*6*/], "ARTHUR", Global_35, 0);
		}
		if (__LIB_0__::func_272(Local_193[3 /*6*/], 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1193[iVar0 /*6*/], "TILLY", Local_193[3 /*6*/], 0);
		}
		if (__LIB_0__::func_272(Local_193[5 /*6*/], 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1193[iVar0 /*6*/], "G_M_M_UNIAFRICANAMERICANGANG_01", Local_193[5 /*6*/], 0);
		}
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_1193[iVar0 /*6*/], false))
	{
		func_1873(iVar0, iParam0, 1);
		ANIMSCENE::START_ANIM_SCENE(Local_1193[iVar0 /*6*/]);
		Local_1193[iVar0 /*6*/].f_2 = 1;
	}
}

void func_1367()
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_193[10 /*6*/]))
	{
		return;
	}
	if (!__LIB_0__::func_272(Local_193[10 /*6*/], 75))
	{
		if (func_1875(&(Local_193[10 /*6*/]), 0, 0))
		{
			if (!__LIB_2__::func_618(&uLocal_489))
			{
				__LIB_5__::func_107(&uLocal_489);
			}
		}
		return;
	}
	switch (iLocal_575)
	{
		case 0:
			if (__LIB_0__::func_393(Global_35, iLocal_148[2], 0, 1))
			{
				func_1873(0, 1, 1);
				iLocal_575 = 1;
			}
			else
			{
				Jump @267; //curOff = 151
				if (func_1871(0, "Main1"))
				{
					__LIB_5__::func_107(&uLocal_405);
					iLocal_575 = 2;
				}
				else
				{
					Jump @267; //curOff = 180
					if (__LIB_9__::func_324(&uLocal_405) > 5f && __LIB_0__::func_393(Global_35, iLocal_148[2], 0, 1))
					{
						func_1873(0, 2, 1);
						__LIB_2__::func_608(&uLocal_405);
						iLocal_575 = 3;
					}
					else
					{
						Jump @267; //curOff = 236
						if (func_1871(0, "Main2"))
						{
							iLocal_575 = 4;
						}
						else
						{
							Jump @267; //curOff = 258
						}
					}
				}
			}
			default:
				break;
	}
}

void func_1368()
{
	bool bVar0;
	bVar0 = false;
	switch (iLocal_576)
	{
		case 0:
			if (__LIB_0__::func_393(Global_35, iLocal_148[3], 0, 1))
			{
				if (__LIB_1__::func_374(Global_35, VOLUME::_GET_VOLUME_COORDS(iLocal_148[3]), 0.707f) && ENTITY::GET_ENTITY_SPEED(Global_35) > 0f)
				{
					bVar0 = true;
				}
				if (PED::_IS_PED_OPENING_A_DOOR(Global_35))
				{
					bVar0 = true;
				}
				if (bVar0)
				{
					WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
					func_1873(1, 3, 1);
					iLocal_576 = 1;
				}
				else
				{
					Jump @210; //curOff = 141
					if (func_1871(1, "Base") || func_1321(1, "ARTHUR", 1))
					{
						iLocal_576 = 2;
					}
					else
					{
						Jump @210; //curOff = 178
						if (!func_167(8))
						{
							func_398(8);
							iLocal_576 = 3;
						}
					else
					{
						}
					}
				}
			}
			default:
				break;
	}
}

void func_1369()
{
	int iVar0;
	float fVar1;
	iVar0 = Local_193[5 /*6*/].f_5;
	if (iVar0 != 5)
	{
		__LIB_2__::func_608(&uLocal_447);
		return;
	}
	if (!__LIB_0__::func_48(Global_35, Local_193[5 /*6*/], 6f, 1))
	{
		if (!__LIB_2__::func_611(&uLocal_447))
		{
			__LIB_13__::func_552(&uLocal_447);
		}
		return;
	}
	if (!__LIB_2__::func_618(&uLocal_447))
	{
		__LIB_5__::func_107(&uLocal_447);
	}
	if (__LIB_2__::func_611(&uLocal_447))
	{
		__LIB_13__::func_551(&uLocal_447);
	}
	fVar1 = 3f;
	if (func_167(54))
	{
		fVar1 = 6f;
	}
	if (__LIB_9__::func_324(&uLocal_447) > fVar1)
	{
		if (func_1906(33, 0))
		{
			func_398(54);
			__LIB_2__::func_608(&uLocal_447);
			return;
		}
	}
}

void func_1370()
{
	float fVar0;
	float fVar1;
	if (iLocal_1360 != 0)
	{
		return;
	}
	if (__LIB_0__::func_153(Global_35, 0, 1, 0) == joaat("WEAPON_UNARMED"))
	{
		return;
	}
	fVar0 = 18f;
	fVar1 = WEAPON::_0x3799EFCC3C8CD5E1(Global_35);
	if (fVar1 > fVar0)
	{
		PLAYER::SET_PLAYER_LOCKON_RANGE_OVERRIDE(PLAYER::PLAYER_ID(), fVar0);
	}
}

void func_1371(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!__LIB_0__::func_272(iParam1, 0))
	{
		return;
	}
	if (bParam3)
	{
		if (!__LIB_5__::func_558(uParam0, iParam1, 128))
		{
			__LIB_5__::func_572(uParam0, iParam1, 128);
		}
	}
	else if (__LIB_5__::func_558(uParam0, iParam1, 128))
	{
		__LIB_5__::func_571(uParam0, iParam1, 128);
	}
}

void func_1372()
{
	if (!__LIB_0__::func_48(Global_35, Local_193[2 /*6*/], 12.5f, 1))
	{
		__LIB_2__::func_608(&uLocal_444);
		return;
	}
	if (!__LIB_2__::func_618(&uLocal_444))
	{
		__LIB_5__::func_107(&uLocal_444);
	}
	if (__LIB_9__::func_324(&uLocal_444) > 10f)
	{
		if (func_1906(32, 0))
		{
			__LIB_2__::func_608(&uLocal_444);
			return;
		}
	}
}

int func_1373(var uParam0, int* iParam1)
{
	if (__LIB_0__::func_27(iParam1->f_4, 1))
	{
		return 1;
	}
	func_1958(-1, 1);
	if (!__LIB_0__::func_272(Local_14.f_11[0], 0))
	{
		return 0;
	}
	*iParam1 = Local_14.f_11[0];
	PED::SET_PED_NAME_DEBUG(*iParam1, "Foremans Horse");
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
	PED::SET_PED_CONFIG_FLAG(*iParam1, 6, true);
	func_1959(iParam1, ENTITY::GET_ENTITY_COORDS(*iParam1, true, false), ENTITY::GET_ENTITY_HEADING(*iParam1), 1, 0);
	PED::_0x2EB75FB86C41F026(*iParam1, 3, 0);
	FLOCK::_0xAEB97D84CDF3C00B(*iParam1, 0);
	__LIB_11__::func_30(*iParam1);
	__LIB_1__::func_683(&(iParam1->f_4), 1);
	return 0;
}

void func_1376()
{
	if ((__LIB_0__::func_393(Global_35, iLocal_148[0], 0, 1) || __LIB_0__::func_393(Global_35, iLocal_148[28], 0, 1)) || __LIB_0__::func_393(Global_35, iLocal_148[8], 0, 1))
	{
		func_398(47);
	}
	if (!func_167(47))
	{
		if (!func_1297(92, 1) && !func_1297(91, 1))
		{
			if (__LIB_2__::func_123(Global_35, Local_193[0 /*6*/], 0.5f) && __LIB_0__::func_48(Global_35, Local_193[0 /*6*/], 20f, 1))
			{
				if (__LIB_0__::func_153(Global_35, 1, 1, 0) != joaat("WEAPON_UNARMED") || __LIB_0__::func_153(Global_35, 0, 1, 0) != joaat("WEAPON_UNARMED"))
				{
					WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
				}
				else
				{
					func_1363(81, 1);
				}
			}
		}
	}
	if (func_1325(15, 81))
	{
		func_398(47);
		__LIB_3__::func_815(0, 0.7f);
	}
}

void func_1379()
{
	if (!func_167(82))
	{
		if (AUDIO::PREPARE_MUSIC_EVENT("MUD3_SEARCH_1"))
		{
			func_398(82);
		}
		return;
	}
	if (!func_167(83))
	{
		if (__LIB_0__::func_393(Global_35, iLocal_148[13], 0, 1))
		{
			if (AUDIO::TRIGGER_MUSIC_EVENT("MUD3_SEARCH_1"))
			{
				func_398(83);
			}
		}
	}
}

void func_1380()
{
	if (!__LIB_0__::func_48(Global_35, Local_193[2 /*6*/], 12f, 1) || !__LIB_0__::func_48(Global_35, Local_193[0 /*6*/], 12f, 1))
	{
		__LIB_2__::func_608(&uLocal_450);
		return;
	}
	if (!__LIB_2__::func_618(&uLocal_450))
	{
		__LIB_5__::func_107(&uLocal_450);
	}
	if (__LIB_9__::func_324(&uLocal_450) < 10f)
	{
		return;
	}
	if (func_972(34) == 0)
	{
		__LIB_2__::func_608(&uLocal_450);
		func_1293(34, 0);
		return;
	}
	if (func_972(35) == 0)
	{
		__LIB_2__::func_608(&uLocal_450);
		func_1293(35, 0);
		return;
	}
}

void func_1381(var uParam0, int iParam1)
{
	if (iLocal_1361 == iParam1)
	{
		return;
	}
	switch (iLocal_1361)
	{
		case 0:
			__LIB_0__::func_325(&(Local_193[4 /*6*/].f_1));
			break;
		case 1:
			__LIB_10__::func_935(uParam0, Local_193[1 /*6*/], 1);
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
	}
	iLocal_1361 = iParam1;
	switch (iLocal_1361)
	{
		case 0:
			func_1963(&(Local_193[4 /*6*/]), 3, 0);
			__LIB_0__::func_325(&(Local_193[4 /*6*/].f_1));
			Local_193[4 /*6*/].f_1 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_193[4 /*6*/]);
			__LIB_4__::func_952(uParam0, 0);
			break;
		case 1:
			func_1276(&(Local_193[1 /*6*/]), 10, 0);
			__LIB_10__::func_930(uParam0, Local_193[1 /*6*/], joaat("COLOR_WHITE"), joaat("BLIP_STYLE_COMPANION"), 1, 1);
			__LIB_4__::func_952(uParam0, 1);
			break;
		case 2:
			__LIB_4__::func_952(uParam0, 29);
			break;
		case 3:
			if (!CAM::DOES_CAM_EXIST(iLocal_190))
			{
				iLocal_190 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), -320.2602f, 763.95f, 122.5391f, -16.8545f, -0.8456f, 130.354f, CAM::GET_GAMEPLAY_CAM_FOV(), true, 2);
			}
			if (CAM::DOES_CAM_EXIST(iLocal_190))
			{
				CAM::SET_CAM_PARAMS(iLocal_190, -321.0913f, 763.1036f, 122.3804f, -8.4005f, -0.8613f, 120.4428f, CAM::GET_GAMEPLAY_CAM_FOV(), 2000, 0, 0, 2, 1, 0);
				CAM::SET_CAM_ACTIVE(iLocal_190, true);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			}
			__LIB_5__::func_107(&uLocal_417);
			__LIB_0__::func_202(Global_35, 1);
			func_1940();
			func_1941();
			func_1292(uParam0, 7);
			__LIB_4__::func_952(uParam0, 2);
			break;
		case 4:
			break;
	}
}

void func_1382()
{
	if (!__LIB_2__::func_618(&uLocal_453))
	{
		__LIB_5__::func_107(&uLocal_453);
	}
	if (__LIB_9__::func_324(&uLocal_453) < 3f)
	{
		return;
	}
	if (func_972(45) == 0)
	{
		__LIB_2__::func_608(&uLocal_453);
		func_1293(45, 0);
		return;
	}
	if (func_972(46) == 0)
	{
		__LIB_2__::func_608(&uLocal_453);
		func_1293(46, 0);
		return;
	}
}

void func_1385(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	iVar0 = iParam0->f_5;
	if (!__LIB_0__::func_272(*iParam0, 0))
	{
		iParam1 = 5;
	}
	if (iVar0 == iParam1 && !bParam2)
	{
		return;
	}
	__LIB_2__::func_608(&uLocal_432);
	iParam0->f_5 = iParam1;
	switch (iParam1)
	{
		case 0:
			break;
		case 1:
			break;
		case 2:
			__LIB_3__::func_157(&(Local_622[0 /*17*/]), "MUD3_C_ASK", 0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
			break;
		case 3:
			TASK::TASK_LOOK_AT_ENTITY(*iParam0, Global_35, -1, 48, 51, 0);
			func_460(&iLocal_640, &Local_622, iParam0, 0);
			break;
		case 4:
			func_460(&iLocal_640, &Local_622, iParam0, 0);
			TASK::TASK_LOOK_AT_ENTITY(*iParam0, Global_35, -1, 48, 51, 0);
			TASK::TASK_COWER(*iParam0, -1, Global_35, 0);
			break;
		case 5:
			break;
	}
}

void func_1386(var uParam0, int iParam1)
{
	struct<7> Var0;
	if (iLocal_1362 == iParam1)
	{
		return;
	}
	switch (iLocal_1362)
	{
		case 0:
			break;
		case 1:
			__LIB_10__::func_935(uParam0, Local_193[1 /*6*/], 1);
			__LIB_1__::func_726(Local_193[1 /*6*/], 1);
			__LIB_1__::func_727(Global_35, 1);
			__LIB_5__::func_438(&uLocal_529);
			__LIB_0__::func_325(&iLocal_143);
			func_456(4);
			break;
		case 2:
			__LIB_0__::func_325(&iLocal_143);
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
	}
	iLocal_1362 = iParam1;
	switch (iLocal_1362)
	{
		case 0:
			__LIB_10__::func_930(uParam0, Local_193[1 /*6*/], joaat("COLOR_WHITE"), joaat("BLIP_STYLE_COMPANION"), 1, 1);
			func_1276(&(Local_193[1 /*6*/]), 12, 0);
			__LIB_4__::func_952(uParam0, 0);
			break;
		case 1:
			__LIB_10__::func_930(uParam0, Local_193[1 /*6*/], joaat("COLOR_WHITE"), joaat("BLIP_STYLE_COMPANION"), 1, 1);
			func_1276(&(Local_193[1 /*6*/]), 13, 0);
			Var0.f_1 = 1050253722;
			Var0.f_2 = 1067030938;
			Var0.f_5 = -1082130432;
			Var0.f_6 = -1082130432;
			Var0 = 0;
			Var0.f_3 = 0;
			__LIB_11__::func_408(Global_35, Local_193[1 /*6*/], &Var0, -1, 0, 0);
			__LIB_1__::func_731(&uLocal_529);
			func_1966();
			func_468(&(Local_284[4 /*5*/]), 1, 1, 1, 1, 1, 0);
			__LIB_4__::func_952(uParam0, 0);
			break;
		case 2:
			__LIB_0__::func_325(&iLocal_143);
			iLocal_143 = __LIB_4__::func_983(408396114, vLocal_126, 1);
			__LIB_4__::func_952(uParam0, 1);
			break;
		case 3:
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Global_35, vLocal_126, 1f, 20000, 0.25f, 6291456, 40000f);
			__LIB_4__::func_952(uParam0, 2);
			break;
		case 4:
			__LIB_4__::func_952(uParam0, 29);
			break;
		case 5:
			break;
	}
}

void func_1387(var uParam0)
{
	if (!func_167(45))
	{
		__LIB_4__::func_570(&(uParam0->f_7375));
		__LIB_4__::func_655(&(uParam0->f_7375));
		__LIB_10__::func_925(uParam0, "1-PunchedMan");
		__LIB_10__::func_925(uParam0, "2-KilledMan");
		func_398(45);
	}
}

void func_1388()
{
	bool bVar0;
	bVar0 = false;
	if (__LIB_0__::func_393(Global_35, iLocal_148[13], 0, 1) || __LIB_0__::func_393(Global_35, iLocal_148[0], 0, 1))
	{
		bVar0 = true;
	}
	if (!__LIB_0__::func_27(Local_193[4 /*6*/].f_4, 128))
	{
		if (__LIB_0__::func_393(Global_35, iLocal_148[15], 0, 1))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (__LIB_0__::func_27(Local_193[4 /*6*/].f_4, 128))
		{
			func_1293(48, 0);
		}
		else
		{
			func_1293(47, 0);
		}
	}
}

bool func_1389(int iParam0)
{
	if (!func_1912(iParam0))
	{
		return true;
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_1193[iParam0 /*6*/], false))
	{
		return true;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_1193[iParam0 /*6*/], false))
	{
		return true;
	}
	return false;
}

void func_1390()
{
	int iVar0;
	iVar0 = Local_193[1 /*6*/].f_5;
	if (iVar0 != 15)
	{
		return;
	}
	func_1967();
	if (func_972(63) != 3)
	{
		return;
	}
	if ((!__LIB_0__::func_48(Global_35, Local_193[1 /*6*/], 6f, 1) && !__LIB_0__::func_393(Global_35, iLocal_148[0], 0, 1)) && !__LIB_0__::func_393(Global_35, iLocal_148[13], 0, 1))
	{
		__LIB_2__::func_608(&uLocal_456);
		return;
	}
	if (!__LIB_2__::func_618(&uLocal_456))
	{
		__LIB_5__::func_107(&uLocal_456);
	}
	if (__LIB_9__::func_324(&uLocal_456) > 6f)
	{
		if (func_1906(49, 0))
		{
			__LIB_2__::func_608(&uLocal_456);
			return;
		}
	}
}

void func_1391(var uParam0, bool bParam1)
{
	func_1387(uParam0);
	if (bParam1)
	{
		__LIB_11__::func_771(uParam0, "2-KilledMan");
	}
	else
	{
		__LIB_11__::func_771(uParam0, "1-PunchedMan");
	}
}

void func_1392(var uParam0, int iParam1)
{
	if (iLocal_1363 == iParam1)
	{
		return;
	}
	switch (iLocal_1363)
	{
		case 0:
			__LIB_0__::func_325(&(Local_193[6 /*6*/].f_1));
			break;
		case 1:
			break;
		case 2:
			break;
	}
	iLocal_1363 = iParam1;
	switch (iLocal_1363)
	{
		case 0:
			func_1560(&(Local_193[6 /*6*/]), 2, 0);
			__LIB_0__::func_325(&(Local_193[6 /*6*/].f_1));
			Local_193[6 /*6*/].f_1 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_193[6 /*6*/]);
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_193[6 /*6*/].f_1, "MUD3_B_WITNESS");
			__LIB_4__::func_952(uParam0, 0);
			break;
		case 1:
			__LIB_4__::func_952(uParam0, 29);
			break;
		case 2:
			break;
	}
}

bool func_1395()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(func_421(1), Global_36, &iLocal_1364);
	TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(func_421(1), ENTITY::GET_ENTITY_COORDS(Local_193[6 /*6*/], true, false), &iLocal_1365);
	iVar0 = 50;
	if (!__LIB_0__::func_394(Global_35, iLocal_141, 0))
	{
		if (!__LIB_2__::func_618(&uLocal_516))
		{
			__LIB_5__::func_107(&uLocal_516);
		}
		fVar1 = 20f;
		fVar2 = 40f;
		fVar3 = 15f;
		fVar4 = __LIB_9__::func_324(&uLocal_516);
		if (fVar4 > fVar3)
		{
			fVar5 = ((fVar4 - fVar3) / fVar1);
			iVar6 = BUILTIN::ROUND((fVar5 * fVar2));
			iVar0 = (iVar0 - iVar6);
		}
		if (iVar0 < 10)
		{
			iVar0 = 10;
		}
	}
	else
	{
		__LIB_2__::func_608(&uLocal_516);
	}
	iVar7 = (iLocal_1365 - iLocal_1364);
	if (iVar7 >= iVar0)
	{
		if (ENTITY::IS_ENTITY_OCCLUDED(Local_193[6 /*6*/]))
		{
			return true;
		}
	}
	return false;
}

bool func_1396()
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_193[6 /*6*/]))
	{
		if (PED::IS_PED_DEAD_OR_DYING(Local_193[6 /*6*/], true))
		{
			return true;
		}
	}
	return false;
}

void func_1397()
{
	bool bVar0;
	float fVar1;
	bVar0 = false;
	fVar1 = 2f;
	if (func_1296(1, 35, Global_36))
	{
		func_452(50);
	}
	else
	{
		return;
	}
	if (func_1296(1, 50, Global_36))
	{
		func_163(50, 0, 1);
	}
	if (func_972(50) != 3)
	{
		return;
	}
	if (func_1293(51, 0) != 3)
	{
		return;
	}
	if (!__LIB_2__::func_618(&uLocal_462))
	{
		__LIB_2__::func_620(&uLocal_462, fVar1);
	}
	if (PED::_0x9C81338B2E62CE0A(PLAYER::PLAYER_ID(), Local_193[6 /*6*/], 1000) && iLocal_103 < 2)
	{
		__LIB_2__::func_608(&uLocal_459);
		if (__LIB_9__::func_324(&uLocal_462) >= fVar1)
		{
			if (func_1906(53, 0))
			{
				iLocal_103++;
				__LIB_5__::func_107(&uLocal_462);
				return;
			}
		}
		return;
	}
	if (!__LIB_2__::func_618(&uLocal_459))
	{
		__LIB_5__::func_107(&uLocal_459);
	}
	if (__LIB_9__::func_324(&uLocal_459) > 8f)
	{
		if ((iLocal_101 % 2) == 0)
		{
			if (func_1906(52, 0))
			{
				bVar0 = true;
			}
		}
	}
	if (bVar0)
	{
		__LIB_2__::func_608(&uLocal_459);
		iLocal_101++;
		return;
	}
}

void func_1398(int iParam0)
{
	int iVar0;
	iVar0 = 5;
	if (!func_1912(iVar0))
	{
		return;
	}
	if (!Local_1193[iVar0 /*6*/].f_2)
	{
		if (__LIB_0__::func_272(Global_35, 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1193[iVar0 /*6*/], "player_zero", Global_35, 0);
		}
		if (__LIB_0__::func_272(Local_193[6 /*6*/], 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1193[iVar0 /*6*/], "U_M_M_VALTOWNFOLK_02", Local_193[6 /*6*/], 0);
		}
		if (__LIB_0__::func_272(Local_193[7 /*6*/], 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1193[iVar0 /*6*/], "P_C_HORSE_01", Local_193[7 /*6*/], 0);
		}
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_1193[iVar0 /*6*/], false))
	{
		func_1873(iVar0, iParam0, 1);
		ANIMSCENE::START_ANIM_SCENE(Local_1193[iVar0 /*6*/]);
		Local_1193[iVar0 /*6*/].f_2 = 1;
	}
}

void func_1399(var uParam0, int iParam1)
{
	int iVar0;
	if (iLocal_1366 == iParam1)
	{
		return;
	}
	switch (iLocal_1366)
	{
		case 0:
			__LIB_0__::func_325(&(Local_193[6 /*6*/].f_1));
			MISC::_0xE98D55C5983F2509(Local_193[7 /*6*/]);
			__LIB_2__::func_608(&uLocal_399);
			break;
		case 4:
			break;
		case 2:
			break;
		case 3:
			break;
		case 5:
			break;
		case 6:
			break;
	}
	iLocal_1366 = iParam1;
	switch (iLocal_1366)
	{
		case 0:
			func_1560(&(Local_193[6 /*6*/]), 4, 0);
			__LIB_0__::func_325(&(Local_193[6 /*6*/].f_1));
			Local_193[6 /*6*/].f_1 = __LIB_8__::func_778(-89429847, Local_193[6 /*6*/], 1);
			MAP::_BLIP_SET_MODIFIER(Local_193[6 /*6*/].f_1, -401963276);
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_193[6 /*6*/].f_1, "MUD3_B_WITNESS");
			if (__LIB_0__::func_272(Local_193[7 /*6*/], 0))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(Local_193[7 /*6*/], true);
				PED::SET_PED_CAN_BE_TARGETTED(Local_193[7 /*6*/], false);
				PED::_0x2EB75FB86C41F026(Local_193[7 /*6*/], 3, 1);
			}
			__LIB_4__::func_952(uParam0, 0);
			break;
		case 1:
			if (Local_193[6 /*6*/].f_5 == 6)
			{
				func_1969(11);
			}
			else if (Local_193[6 /*6*/].f_5 == 5)
			{
				func_1969(10);
			}
			else
			{
				__LIB_4__::func_952(uParam0, 1);
				Jump @645; //curOff = 340
				if (Local_193[6 /*6*/].f_5 == 6)
				{
					func_1873(5, 11, 1);
				}
				__LIB_4__::func_952(uParam0, 2);
				Jump @645; //curOff = 370
				if (Local_193[6 /*6*/].f_5 == 5)
				{
					func_1873(5, 10, 1);
				}
				if (iLocal_528 == 5)
				{
					if (__LIB_8__::func_684("MUD3_IG17_QUES"))
					{
						__LIB_6__::func_900("MUD3_IG17_QUES", 0, 0);
						func_1293(69, 1);
					}
				}
				func_1292(uParam0, 8);
				__LIB_4__::func_952(uParam0, 3);
				Jump @645; //curOff = 444
				func_1292(uParam0, 9);
				func_1970(&(Local_193[6 /*6*/]));
				func_398(4);
				__LIB_5__::func_301(uParam0, 25, 2);
				func_1404();
				if (__LIB_0__::func_272(Local_193[7 /*6*/], 0))
				{
					if (ENTITY::_IS_ENTITY_FROZEN(Local_193[7 /*6*/]))
					{
						ENTITY::FREEZE_ENTITY_POSITION(Local_193[7 /*6*/], false);
					}
					if (!__LIB_0__::func_394(Global_35, Local_193[7 /*6*/], 0))
					{
						TASK::CLEAR_PED_TASKS(Local_193[7 /*6*/], true, false);
						TASK::OPEN_SEQUENCE_TASK(&iVar0);
						TASK::TASK_HORSE_ACTION(0, 1, 0, 0);
						TASK::TASK_SMART_FLEE_PED(0, Global_35, 1000f, -1, 0, 2f, 0);
						TASK::CLOSE_SEQUENCE_TASK(iVar0);
						TASK::TASK_PERFORM_SEQUENCE(Local_193[7 /*6*/], iVar0);
						TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					}
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_193[7 /*6*/], false);
				}
				__LIB_4__::func_952(uParam0, 4);
				Jump @645; //curOff = 616
				__LIB_13__::func_19(&iLocal_928, Local_193[6 /*6*/]);
				__LIB_4__::func_952(uParam0, 29);
			}
			default:
				break;
	}
}

void func_1400(var uParam0)
{
	if (!func_167(46))
	{
		__LIB_4__::func_570(&(uParam0->f_7375));
		__LIB_4__::func_655(&(uParam0->f_7375));
		__LIB_10__::func_925(uParam0, "NormalStart");
		__LIB_10__::func_925(uParam0, "MultiStart");
		func_398(46);
	}
}

Vector3 func_1401(int iParam0, int iParam1)
{
	char[] cVar0[8];
	int iVar1;
	vector3 vVar2;
	cVar0 = func_421(iParam0);
	iVar1 = -1;
	vVar2 = { 0f, 0f, 0f };
	if (TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(cVar0, &iVar1))
	{
		if (TASK::WAYPOINT_RECORDING_GET_COORD(cVar0, (iVar1 - (1 + iParam1)), &vVar2))
		{
			return vVar2;
		}
	}
	return vVar2;
}

bool func_1403(int iParam0, int iParam1, float fParam2)
{
	char* sVar0;
	sVar0 = func_1442(iParam1);
	if (!ANIMSCENE::_0x1F0E401031E20146(Local_1193[iParam0 /*6*/], sVar0))
	{
		return true;
	}
	if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_1193[iParam0 /*6*/]) >= fParam2)
	{
		return true;
	}
	return false;
}

void func_1404()
{
	if (!func_167(52))
	{
		if (func_167(72))
		{
			__LIB_4__::func_467(2, -1895108717, 0, "MUD3_HG_NO_HELP", Local_193[6 /*6*/], 0, 1065353216 /* Float: 1f */, 0);
		}
		else
		{
			__LIB_4__::func_467(5, -1895108717, 0, "MUD3_HG_NO_HELP", Local_193[6 /*6*/], 0, 1065353216 /* Float: 1f */, 1);
		}
		func_398(52);
	}
}

bool func_1405(var uParam0)
{
	if (!__LIB_2__::func_618(&uLocal_402))
	{
		__LIB_5__::func_107(&uLocal_402);
	}
	if (__LIB_9__::func_324(&uLocal_402) > 1f)
	{
		if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(*uParam0))
		{
			__LIB_1__::func_864(*uParam0, 0, 0);
		}
	}
	if (__LIB_9__::func_324(&uLocal_402) > 2.5f)
	{
		__LIB_1__::func_864(*uParam0, 0, 0);
		return true;
	}
	return false;
}

void func_1406(var uParam0, bool bParam1)
{
	func_1400(uParam0);
	if (bParam1)
	{
		__LIB_11__::func_771(uParam0, "NormalStart");
	}
	else
	{
		__LIB_11__::func_771(uParam0, "MultiStart");
	}
}

void func_1407(int iParam0, char* sParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!ITEMSET::IS_ITEMSET_VALID(Global_43616))
	{
		Global_43616 = ITEMSET::CREATE_ITEMSET(false);
	}
	if (!ITEMSET::IS_IN_ITEMSET(iParam0, Global_43616))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			PED::_SET_PED_BLACKBOARD_BOOL(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), sParam1, true, -1);
		}
		ITEMSET::ADD_TO_ITEMSET(iParam0, Global_43616);
	}
}

void func_1409()
{
	int iVar0;
	iVar0 = 18;
	if (Local_1193[iVar0 /*6*/].f_2 == 1)
	{
		return;
	}
	if (!func_1912(iVar0))
	{
		return;
	}
	if (!Local_1193[iVar0 /*6*/].f_2)
	{
		if (__LIB_0__::func_272(Local_193[6 /*6*/], 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1193[iVar0 /*6*/], "A_M_M_ValTownfolk_02", Local_193[6 /*6*/], 0);
		}
		if (__LIB_0__::func_272(Local_193[7 /*6*/], 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1193[iVar0 /*6*/], "HORSE_01", Local_193[7 /*6*/], 0);
		}
		if (__LIB_0__::func_272(Global_35, 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1193[iVar0 /*6*/], "ARTHUR", Global_35, 0);
		}
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_1193[iVar0 /*6*/], false))
	{
		ANIMSCENE::START_ANIM_SCENE(Local_1193[iVar0 /*6*/]);
		Local_1193[iVar0 /*6*/].f_2 = 1;
	}
}

void func_1410()
{
	__LIB_9__::func_391();
	__LIB_1__::func_725();
}

void func_1415()
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
	iVar0 = func_1980(6291456, 0);
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

int func_1439(var uParam0, int iParam1, int iParam2)
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
		return func_1439(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

char* func_1441(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script@story@mud3@ig@IG_2_PrayingKelonian@base";
		case 1:
			return "script@story@mud3@ig@ig_3_room2a@base";
		case 2:
			return "script@story@MUD3@IG@IG_8_KarensRoom@IG_8_KarensRoom";
		case 3:
			return "script@story@MUD3@IG@IG_8_KarensRoom@IG_8_Player";
		case 4:
			return "script@story@mud3@ig@ig_15_walk_out_hotel@ig_15_walk_out_hotel";
		case 5:
			return "script@story@mud3@ig@ig17_horse_stop@ig17_horse_stop";
		case 6:
			return "script@story@mud3@ig@ig19_walk_to_general_store@ig19_walk_to_general_store";
		case 7:
			return "script@story@mud3@ig@ig22_coach_driver_steer@ig22_coach_driver_steer";
		case 8:
			return "script@story@mud3@ig@ig22_coach_driver_steer@ig22_marybeth";
		case 9:
			return "script@story@mud3@ig@ig22_coach_driver_steer@ig22_tilly_karen_and_uncle";
		case 10:
			return "script@story@mud3@ig@ig23_coach_driver_thanks@ig23_coach_driver_thanks";
		case 11:
			return "script@story@mud3@ig@ig24_wagon_singing@ig24_wagon_singing";
		case 12:
			return "script@story@mud3@ig@ig24_wagon_ride@ig24_wagon_ride";
		case 13:
			return "script@story@mud3@ig@ig25_uncle_buy_whiskey@ig25_uncle_buy_whiskey";
		case 14:
			return "script@story@mud3@ig@ig26_discussion@ig26_discussion";
		case 15:
			return "script@story@mud3@ig@ig26_tilly_argue@ig_26_tilly_argue";
		case 16:
			return "script@story@MUD3@IG@IG27_Arrive_In_Town@IG27_Arrive_In_Town";
		case 17:
			return "script@story@MUD3@IG@IG27_Arrive_In_Town@IG27_Ladies_In_Paris";
		case 18:
			return "script@story@mud3@leadout@ext@leadout";
	}
	return "";
}

char* func_1442(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "pblPraying";
		case 1:
			return "pblReactPlayer";
		case 2:
			return "pblReactPlayerWaiting";
		case 3:
			return "pbl_Enter_Room";
		case 4:
			return "PBL_BASE";
		case 5:
			return "pbl_EnterRoom";
		case 6:
			return "pbl_Idle";
		case 7:
			return "pbl_KickDoor";
		case 8:
			return "pbl_action";
		case 9:
			return "pbl_Horse_Fall";
		case 10:
			return "pbl_KILL";
		case 11:
			return "pbl_Help";
		case 12:
			return "pbl_Question";
		case 13:
			return "pbl_Time_Out_Fail";
		case 14:
			return "pbl_Struggle_Loop_01";
		case 15:
			return "pbl_Struggle_Loop_02";
		case 16:
			return "pbl_Struggle_Loop_03";
		case 17:
			return "pbl_Struggle_Loop_04";
		case 18:
			return "pbl_action";
		case 19:
			return "pbl_Wagon_Breaks";
		case 20:
			return "pbl_Enter_Back_Watching";
		case 21:
			return "pbl_Enter_Front_Watching";
		case 22:
			return "pbl_Enter_Left_Watching";
		case 23:
			return "pbl_Enter_Right_Watching";
		case 24:
			return "pbl_Exit_Back_Watching";
		case 25:
			return "pbl_Exit_Front_Watching";
		case 26:
			return "pbl_Exit_Left_Watching";
		case 27:
			return "pbl_Exit_Right_Watching";
		case 28:
			return "pbl_Lumbago";
		case 29:
			return "pbl_Witness_Coach_Crash_Front_Right";
		case 30:
			return "pbl_Enter_Back_Watching";
		case 31:
			return "pbl_Enter_Front_Watching";
		case 32:
			return "pbl_Enter_Left_Watching";
		case 33:
			return "pbl_Enter_Right_Watching";
		case 34:
			return "pbl_Exit_Back_Watching";
		case 35:
			return "pbl_Exit_Front_Watching";
		case 36:
			return "pbl_Exit_Left_Watching";
		case 37:
			return "pbl_Exit_Right_Watching";
		case 38:
			return "pbl_EXIT";
		case 39:
			return "pbl_IDLE";
		case 40:
			return "pbl_Enter";
		case 41:
			return "pbl_ReturnHorse_Back";
		case 42:
			return "pbl_ReturnHorse_Front";
		case 43:
			return "pbl_ReturnHorse_Left";
		case 44:
			return "pbl_ReturnHorse_Right";
		case 45:
			return "pbl_Berryville";
		case 46:
			return "pbl_Berryville_B";
		case 47:
			return "pbl_Intro";
		case 48:
			return "pbl_Mistake";
		case 49:
			return "pbl_Valentine";
		case 50:
			return "pbl_Valentine_B";
		case 51:
			return "pbl_Helps";
		case 52:
			return "pbl_No_Help";
		case 53:
			return "pbl_Ladies_Excited_Back";
		case 54:
			return "pbl_Ladies_Excited_Front";
		case 55:
			return "pbl_Ladies_Excited_Right";
		case 56:
			return "pbl_Ladies_Excited_Left_Back";
		case 57:
			return "pbl_Idles";
		case 59:
			return "pbl_Cigar_Inspect";
		case 60:
			return "pbl_Whiskey_Inspect";
		case 61:
			return "pbl_Candy_Inspect";
		case 62:
			return "pbl_Apple_Inspect";
		case 64:
			return "pbl_Meat_Inspect";
		case 66:
			return "pbl_Mouth_Harp_Inspect";
		case 65:
			return "pbl_Cheese_Inspect";
		case 63:
			return "pbl_Goes_To_Counter";
		case 58:
			return "pbl_Enter_Store";
		case 67:
			return "pbl_Uncle_Leave_Store";
		case 68:
			return "pbl_Intro_Uncle_Bench_Drink";
		case 69:
			return "pbl_Idle_Uncle_Bench_Drink";
		case 70:
			return "pbl_Uncle_Idle_Stand_Loop";
		case 71:
			return "pbl_Idle_A";
		case 72:
			return "pbl_Idle_B";
		case 73:
			return "pbl_action";
		case 74:
			return "pbl_Intro";
		case 75:
			return "pbl_Exit_React_Left";
		case 76:
			return "pbl_Exit_React_Right";
		case 77:
			return "pbl_Help_Negative_Left";
		case 78:
			return "pbl_Help_Negative_Right";
		case 79:
			return "pbl_Help_Positive_Left";
		case 80:
			return "pbl_Help_Positive_Right";
		case 81:
			return "pbl_Uncle_Look_After_Her";
		case 82:
			return "pbl_Exit_Wagon";
		case 83:
			return "pbl_Upperbody_Get_Something_From_Stores";
		case 84:
			return "pbl_Upperbody_Come_On";
		case 85:
			return "pbl_Upperbody_Imagine_In_Paris";
		case 86:
			return "pl_leadout";
	}
	return "";
}

int func_1475(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
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
				func_904(Global_1360165[iParam0 /*1157*/], vVar0, fParam6, 2, 1073741824 /* Float: 2f */);
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

void func_1476(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	vector3 vVar0;
	__LIB_4__::func_787(iParam1, bParam3, bParam4, bParam6);
	if (!__LIB_4__::func_948(uParam0, 512))
	{
		if (__LIB_4__::func_948(uParam0, 4) && bParam4)
		{
			vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, 5f, 0f, 0f) };
			__LIB_1__::func_338(iParam1, vVar0);
		}
	}
	else
	{
		Stack.Push(uParam0);
		Call_Loc(uParam0->f_10781);
	}
	func_2001(uParam0, iParam1, iParam2, __LIB_1__::func_464(iParam2, 0));
	__LIB_5__::func_572(uParam0, iParam1, 512);
	if (bParam5)
	{
		__LIB_5__::func_572(uParam0, iParam1, 128);
	}
	else
	{
		__LIB_5__::func_571(uParam0, iParam1, 128);
	}
	switch (iParam2)
	{
		case 1:
		case default:
	}
}

bool func_1511(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
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
			__LIB_9__::func_214(uParam0, iParam5, bParam6);
		}
		else if (__LIB_0__::func_78(uParam0) > 3)
		{
			if (__LIB_0__::func_81(uParam0) == 0)
			{
				if (!__LIB_4__::func_562(uParam0, 524288))
				{
					__LIB_11__::func_609(uParam0);
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
				__LIB_8__::func_897(uParam0);
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
		__LIB_17__::func_598(uParam0, iParam5);
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
			__LIB_11__::func_418(uParam0, Param1, iParam5);
			break;
		case 1:
			__LIB_6__::func_920(uParam0);
			break;
		case 2:
			__LIB_11__::func_419(uParam0);
			break;
		case 3:
			if (__LIB_4__::func_581(uParam0))
			{
				__LIB_3__::func_155(2);
				__LIB_5__::func_377(uParam0, uParam0->f_1406[uParam0->f_2074 /*41*/].f_27, uParam0->f_1735[uParam0->f_2074 /*22*/].f_1, 1065353216 /* Float: 1f */);
				__LIB_5__::func_107(&(uParam0->f_2262));
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
			if (uParam0->f_2075 >= 0 || __LIB_9__::func_324(&(uParam0->f_2262)) >= 15f)
			{
				if (__LIB_8__::func_873(uParam0, iParam5))
				{
					if (__LIB_4__::func_583(uParam0))
					{
						uParam0->f_2075 = __LIB_5__::func_64(uParam0);
						__LIB_5__::func_107(&(uParam0->f_2262));
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
			if (__LIB_8__::func_873(uParam0, iParam5))
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

bool func_1516(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	int iVar0;
	__LIB_5__::func_68(uParam4, &uParam0);
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
					__LIB_11__::func_420(uParam4, &uParam0, uParam5);
				}
				else if (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_804))
				{
					__LIB_8__::func_898(uParam4, 4);
					return false;
				}
				else
				{
					if (__LIB_4__::func_584(uParam4, 2))
					{
						Stack.Push(uParam4);
						Call_Loc(uParam4->f_797);
					}
					__LIB_5__::func_265(uParam5);
				}
				__LIB_8__::func_898(uParam4, 3);
			}
			else if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804))
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				if (__LIB_5__::func_331(uParam5, __LIB_4__::func_939(uParam5), 262144))
				{
					if (!__LIB_0__::func_84(uParam4, 2097152))
					{
						__LIB_5__::func_69(uParam4);
					}
				}
				else if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_806)) && (!__LIB_4__::func_937(uParam5, 8) || __LIB_0__::func_84(uParam4, 134217728)))
				{
				}
				else
				{
					__LIB_5__::func_309(uParam4);
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
				__LIB_5__::func_350(uParam4);
				if (!__LIB_2__::func_618(&(uParam4->f_1)))
				{
					__LIB_8__::func_901(&(uParam4->f_1), 0);
				}
				else if (__LIB_5__::func_51(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_804);
					}
					__LIB_8__::func_898(uParam4, 4);
				}
			}
			break;
		case 2:
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804) || !ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam4->f_804, true, false))
			{
				if (__LIB_11__::func_316(uParam4, &uParam0, 1, 1))
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam4->f_804, true, false))
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
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_804);
					}
					__LIB_8__::func_898(uParam4, 4);
				}
			}
			else if (!PLAYER::IS_PLAYER_TELEPORT_ACTIVE() || PLAYER::_HAS_PLAYER_TELEPORT_FINISHED(PLAYER::GET_PLAYER_INDEX()))
			{
				if (__LIB_5__::func_253(uParam5) != 0 || (__LIB_0__::func_81(uParam5) == 1 && __LIB_5__::func_279(uParam5, __LIB_4__::func_939(uParam5)) >= 3))
				{
					if (!DLC::GET_IS_LOADING_SCREEN_ACTIVE())
					{
						MISC::_0xA565FAC215CBC77D();
						__LIB_0__::func_722(1, 0);
						__LIB_11__::func_420(uParam4, &uParam0, uParam5);
						__LIB_8__::func_898(uParam4, 3);
					}
					else
					{
						SCRIPTS::SHUTDOWN_LOADING_SCREEN();
					}
				}
			}
			else if (__LIB_5__::func_51(&(uParam4->f_1)) >= 60f)
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_804);
				}
				__LIB_8__::func_898(uParam4, 4);
			}
			break;
		case 3:
			func_401(uParam4);
			if (__LIB_4__::func_584(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_797);
			}
			__LIB_5__::func_265(uParam5);
			if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam4->f_804, false)) && (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_804) || __LIB_0__::func_84(uParam4, 512)))
			{
				if (!__LIB_0__::func_84(uParam4, 1024) && __LIB_5__::func_448(uParam4, 1))
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
				__LIB_11__::func_789(uParam4);
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
						__LIB_5__::func_107(&(uParam4->f_1));
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
						__LIB_0__::func_88(uParam4, 512);
						__LIB_4__::func_550(uParam4, 67108864, 1);
						__LIB_8__::func_898(uParam4, 4);
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
				__LIB_11__::func_789(uParam4);
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
				if (__LIB_0__::func_81(uParam5) == 1 && __LIB_5__::func_279(uParam5, __LIB_4__::func_939(uParam5)) >= 3)
				{
					if (__LIB_5__::func_266(uParam5))
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_804))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_804, false);
						}
						__LIB_8__::func_898(uParam4, 3);
					}
					else if (__LIB_5__::func_51(&(uParam4->f_1)) >= 30f)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_804))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_804, false);
						}
						__LIB_8__::func_898(uParam4, 3);
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
						__LIB_8__::func_898(uParam4, 3);
					}
					else if (__LIB_5__::func_51(&(uParam4->f_1)) >= 30f)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_804))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_804, false);
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
	return false;
}

float func_1525(int iParam0, int iParam1)
{
	return func_1030(iParam0, iParam1);
}

void func_1528(var uParam0, int iParam1)
{
	__LIB_1__::func_683(&(uParam0->f_1), iParam1);
}

int func_1529(var uParam0, var uParam1)
{
	int iVar0;
	if (__LIB_0__::func_27(uParam1->f_4, 1))
	{
		return 1;
	}
	if (!func_896(uParam0, 4, uParam1, 0, 0, 0, 0, 0f, 0, -268604689, 1, 0, 1, 0))
	{
		return 0;
	}
	if (!PED::_0xA0BC8FAED8CFEB3C(*uParam1))
	{
		return 0;
	}
	if (!__LIB_0__::func_27(uParam1->f_4, 512))
	{
		func_1357(4, *uParam1, -268604689, 1);
		__LIB_1__::func_683(&(uParam1->f_4), 512);
	}
	func_2001(uParam0, *uParam1, 4, 0);
	iVar0 = func_427(uParam0);
	if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(*uParam1, -1))
	{
		switch (iVar0)
		{
			case 0:
				func_1360(*uParam1, func_233(10, 1), 2, 1073741824 /* Float: 2f */);
				break;
			case 1:
				func_1360(*uParam1, func_233(9, 2), 2, 1073741824 /* Float: 2f */);
				break;
			case 2:
				func_1360(*uParam1, func_233(1, 1), 2, 1073741824 /* Float: 2f */);
				break;
			case 3:
				func_1360(*uParam1, func_233(2, 1), 2, 1073741824 /* Float: 2f */);
				break;
			case 4:
				func_1360(*uParam1, func_233(3, 1), 2, 1073741824 /* Float: 2f */);
				break;
			case 5:
				func_1360(*uParam1, func_233(4, 1), 2, 1073741824 /* Float: 2f */);
				break;
			case 6:
				func_1360(*uParam1, func_233(5, 1), 2, 1073741824 /* Float: 2f */);
				break;
			case 7:
				func_1360(*uParam1, func_233(6, 1), 2, 1073741824 /* Float: 2f */);
				break;
			case 8:
				func_1360(*uParam1, func_233(7, 1), 2, 1073741824 /* Float: 2f */);
				break;
			case 25:
				func_1360(*uParam1, func_233(8, 1), 2, 1073741824 /* Float: 2f */);
				break;
		}
	}
	__LIB_11__::func_325(uParam0, *uParam1, 0);
	PED::SET_PED_NAME_DEBUG(*uParam1, "Uncle");
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam1, joaat("REL_PLAYER_ALLY"));
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam1, true);
	PED::SET_PED_CONFIG_FLAG(*uParam1, 229, true);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(*uParam1, true);
	WEAPON::REMOVE_ALL_PED_WEAPONS(*uParam1, true, true);
	PED::SET_PED_CAN_BE_TARGETTED(*uParam1, false);
	__LIB_1__::func_766(*uParam1, joaat("WEAPON_REVOLVER_SCHOFIELD_UNCLE"), 0, 0, 2, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
	__LIB_1__::func_766(*uParam1, joaat("WEAPON_MELEE_KNIFE_UNCLE"), 0, 0, 4, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
	PED::SET_PED_CONFIG_FLAG(*uParam1, 65, true);
	__LIB_5__::func_106(uParam0, *uParam1, __LIB_11__::func_372(4), 0);
	if (!__LIB_5__::func_570(uParam0, *uParam1))
	{
		func_2106(uParam0, *uParam1, 358048, 0, "ALLY_UNCLE", 67108863, 1023, 3, -1);
	}
	__LIB_5__::func_572(uParam0, *uParam1, 128);
	__LIB_5__::func_572(uParam0, *uParam1, 256);
	AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(*uParam1, "preset_Uncle_group", 0f);
	__LIB_1__::func_683(&(uParam1->f_4), 16384);
	__LIB_1__::func_683(&(uParam1->f_4), 1);
	return 0;
}

int func_1530(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	if (__LIB_0__::func_27(uParam1->f_4, 1))
	{
		return 1;
	}
	iVar0 = func_427(uParam0);
	iVar1 = -268604689;
	if (iVar0 >= 5)
	{
		iVar1 = -922193456;
	}
	if (!func_896(uParam0, 20, uParam1, 0, 0, 0, 0, 0f, 0, iVar1, 1, 0, 1, 0))
	{
		return 0;
	}
	if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(*uParam1, -1))
	{
		switch (iVar0)
		{
			case 0:
				func_1360(*uParam1, func_233(10, 2), 2, 1073741824 /* Float: 2f */);
				break;
			case 1:
				func_1360(*uParam1, func_233(9, 4), 2, 1073741824 /* Float: 2f */);
				break;
			case 2:
				func_1360(*uParam1, func_233(1, 2), 2, 1073741824 /* Float: 2f */);
				break;
			case 3:
				func_1360(*uParam1, func_233(2, 2), 2, 1073741824 /* Float: 2f */);
				break;
			case 4:
				func_1360(*uParam1, func_233(3, 2), 2, 1073741824 /* Float: 2f */);
				break;
			case 5:
				func_1360(*uParam1, func_233(4, 2), 2, 1073741824 /* Float: 2f */);
				break;
			case 6:
				func_1360(*uParam1, func_233(5, 2), 2, 1073741824 /* Float: 2f */);
				break;
			case 7:
				func_1360(*uParam1, func_233(6, 2), 2, 1073741824 /* Float: 2f */);
				break;
			case 8:
				func_1360(*uParam1, func_233(7, 2), 2, 1073741824 /* Float: 2f */);
				break;
			case 25:
				func_1360(*uParam1, func_233(8, 2), 2, 1073741824 /* Float: 2f */);
				break;
		}
	}
	__LIB_11__::func_325(uParam0, *uParam1, 0);
	PED::SET_PED_NAME_DEBUG(*uParam1, "Karen");
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam1, joaat("REL_PLAYER_ALLY"));
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam1, true);
	PED::SET_PED_CONFIG_FLAG(*uParam1, 229, true);
	PED::SET_PED_CONFIG_FLAG(*uParam1, 170, true);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(*uParam1, true);
	WEAPON::REMOVE_ALL_PED_WEAPONS(*uParam1, true, true);
	PED::SET_PED_CAN_BE_TARGETTED(*uParam1, false);
	__LIB_5__::func_106(uParam0, *uParam1, __LIB_11__::func_372(20), 0);
	if (!__LIB_5__::func_570(uParam0, *uParam1))
	{
		func_2106(uParam0, *uParam1, 358048, 0, "ALLY_KAREN", 67108863, 1023, 3, -1);
	}
	__LIB_5__::func_572(uParam0, *uParam1, 128);
	__LIB_5__::func_572(uParam0, *uParam1, 256);
	__LIB_1__::func_683(&(uParam1->f_4), 1);
	return 0;
}

int func_1531(var uParam0, var uParam1)
{
	int iVar0;
	if (__LIB_0__::func_27(uParam1->f_4, 1))
	{
		return 1;
	}
	if (!func_896(uParam0, 15, uParam1, 0, 0, 0, 0, 0f, 0, -268604689, 1, 0, 1, 0))
	{
		return 0;
	}
	if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(*uParam1, -1))
	{
		iVar0 = func_427(uParam0);
		switch (iVar0)
		{
			case 0:
				func_1360(*uParam1, func_233(10, 3), 2, 1073741824 /* Float: 2f */);
				break;
			case 1:
				func_1360(*uParam1, func_233(9, 3), 2, 1073741824 /* Float: 2f */);
				break;
			case 2:
				func_1360(*uParam1, func_233(1, 3), 2, 1073741824 /* Float: 2f */);
				break;
			case 3:
				func_1360(*uParam1, func_233(2, 3), 2, 1073741824 /* Float: 2f */);
				break;
			case 4:
				if (__LIB_4__::func_948(uParam0, 4))
				{
					func_1360(*uParam1, func_233(3, 3), 2, 1073741824 /* Float: 2f */);
				}
				else
				{
					func_1360(*uParam1, func_233(2, 3), 2, 1073741824 /* Float: 2f */);
				}
				break;
			case 5:
				func_1360(*uParam1, func_233(4, 3), 2, 1073741824 /* Float: 2f */);
				break;
			case 6:
				func_1360(*uParam1, func_233(5, 3), 2, 1073741824 /* Float: 2f */);
				break;
			case 7:
				func_1360(*uParam1, func_233(6, 3), 2, 1073741824 /* Float: 2f */);
				break;
			case 8:
				func_1360(*uParam1, func_233(7, 3), 2, 1073741824 /* Float: 2f */);
				break;
			case 25:
				func_1360(*uParam1, func_233(8, 3), 2, 1073741824 /* Float: 2f */);
				break;
		}
	}
	__LIB_11__::func_325(uParam0, *uParam1, 0);
	PED::SET_PED_NAME_DEBUG(*uParam1, "MaryBeth");
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam1, joaat("REL_PLAYER_ALLY"));
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam1, true);
	PED::SET_PED_CONFIG_FLAG(*uParam1, 229, true);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(*uParam1, true);
	WEAPON::REMOVE_ALL_PED_WEAPONS(*uParam1, true, true);
	PED::SET_PED_CAN_BE_TARGETTED(*uParam1, false);
	__LIB_5__::func_106(uParam0, *uParam1, __LIB_11__::func_372(15), 0);
	if (!__LIB_5__::func_570(uParam0, *uParam1))
	{
		func_2106(uParam0, *uParam1, 358048, 0, "ALLY_MARY_BETH", 67108863, 1023, 3, -1);
	}
	__LIB_5__::func_572(uParam0, *uParam1, 128);
	__LIB_5__::func_572(uParam0, *uParam1, 256);
	func_1357(15, *uParam1, -268604689, 0);
	__LIB_1__::func_683(&(uParam1->f_4), 1);
	return 0;
}

int func_1532(var uParam0, var uParam1)
{
	int iVar0;
	if (__LIB_0__::func_27(uParam1->f_4, 1))
	{
		return 1;
	}
	if (!func_896(uParam0, 22, uParam1, 0, 0, 0, 0, 0f, 0, -268604689, 1, 0, 1, 0))
	{
		return 0;
	}
	if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(*uParam1, -1))
	{
		iVar0 = func_427(uParam0);
		switch (iVar0)
		{
			case 0:
				func_1360(*uParam1, func_233(10, 4), 2, 1073741824 /* Float: 2f */);
				break;
			case 1:
				func_1360(*uParam1, func_233(9, 5), 2, 1073741824 /* Float: 2f */);
				break;
			case 2:
				func_1360(*uParam1, func_233(1, 4), 2, 1073741824 /* Float: 2f */);
				break;
			case 3:
				func_1360(*uParam1, func_233(2, 4), 2, 1073741824 /* Float: 2f */);
				break;
			case 4:
				func_1360(*uParam1, func_233(3, 4), 2, 1073741824 /* Float: 2f */);
				break;
			case 5:
				func_1360(*uParam1, func_233(4, 4), 2, 1073741824 /* Float: 2f */);
				break;
			case 6:
				func_1360(*uParam1, func_233(5, 4), 2, 1073741824 /* Float: 2f */);
				break;
			case 7:
				func_1360(*uParam1, func_233(6, 4), 2, 1073741824 /* Float: 2f */);
				break;
			case 8:
				func_1360(*uParam1, func_233(7, 4), 2, 1073741824 /* Float: 2f */);
				break;
			case 25:
				func_1360(*uParam1, func_233(8, 4), 2, 1073741824 /* Float: 2f */);
				break;
		}
	}
	__LIB_11__::func_325(uParam0, *uParam1, 0);
	PED::SET_PED_NAME_DEBUG(*uParam1, "Tilly");
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam1, joaat("REL_PLAYER_ALLY"));
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam1, true);
	PED::SET_PED_CONFIG_FLAG(*uParam1, 229, true);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(*uParam1, true);
	WEAPON::REMOVE_ALL_PED_WEAPONS(*uParam1, true, true);
	PED::SET_PED_CAN_BE_TARGETTED(*uParam1, false);
	__LIB_5__::func_106(uParam0, *uParam1, __LIB_11__::func_372(22), 0);
	if (!__LIB_5__::func_570(uParam0, *uParam1))
	{
		func_2106(uParam0, *uParam1, 358048, 0, "ALLY_TILLY", 67108863, 1023, 3, -1);
	}
	__LIB_5__::func_572(uParam0, *uParam1, 128);
	__LIB_5__::func_572(uParam0, *uParam1, 256);
	func_1357(22, *uParam1, -268604689, 0);
	__LIB_1__::func_683(&(uParam1->f_4), 1);
	return 0;
}

int func_1533(var uParam0, var uParam1)
{
	if (__LIB_0__::func_27(uParam1->f_4, 1))
	{
		return 1;
	}
	if (!__LIB_0__::func_272(*uParam1, 0))
	{
		*uParam1 = __LIB_1__::func_545(joaat("MSP_MUDTOWN3_MALES_01"), 4.82f, 249.09f, 108.79f, 29.2891f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		return 0;
	}
	if (!PED::_0xA0BC8FAED8CFEB3C(*uParam1))
	{
		return 0;
	}
	PED::_SET_PED_BODY_COMPONENT(*uParam1, -2003110784);
	PED::_UPDATE_PED_VARIATION(*uParam1, false, true, true, true, false);
	PED::SET_PED_NAME_DEBUG(*uParam1, "Event Ped");
	AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(*uParam1, "MUD3_runaway_stagecoach_group", 0f);
	__LIB_2__::func_279(*uParam1, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam1, 17, true);
	AUDIO::STOP_PED_SPEAKING(*uParam1, true);
	func_2109(uParam1);
	__LIB_5__::func_106(uParam0, *uParam1, "MUD3_EventPed", 0);
	__LIB_1__::func_683(&(uParam1->f_4), 1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("MSP_MUDTOWN3_MALES_01"));
	return 0;
}

int func_1534(var uParam0, var uParam1)
{
	if (__LIB_0__::func_27(uParam1->f_4, 1))
	{
		return 1;
	}
	if (!__LIB_1__::func_220(76))
	{
		return 0;
	}
	__LIB_2__::func_935(10, 1, 0, 0, 0, 0);
	*uParam1 = __LIB_2__::func_965(10, 1, 0, 0, 1, 1);
	if (!__LIB_0__::func_272(*uParam1, 0))
	{
		return 0;
	}
	PED::SET_PED_NAME_DEBUG(*uParam1, "ShopKeep");
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(*uParam1, -324.1f, 803.62f, 117.87f, -171f, false, true);
	AUDIO::_0xB2DE3AEBE31150E2(*uParam1, 0);
	__LIB_5__::func_106(uParam0, *uParam1, "VAL_General_Store", 0);
	__LIB_1__::func_683(&(uParam1->f_4), 1);
	return 0;
}

int func_1535(var uParam0, var uParam1)
{
	int iVar0;
	if (__LIB_0__::func_27(uParam1->f_4, 1))
	{
		return 1;
	}
	func_2112(-1, 1);
	if (!__LIB_0__::func_272(Local_14.f_27[0], 0))
	{
		return 0;
	}
	*uParam1 = Local_14.f_27[0];
	if (!PED::_0xA0BC8FAED8CFEB3C(*uParam1))
	{
		return 0;
	}
	PED::SET_PED_NAME_DEBUG(*uParam1, "Client-K");
	func_2109(uParam1);
	__LIB_5__::func_106(uParam0, *uParam1, "MUD3_Gang", 0);
	ENTITY::_0x18FF3110CF47115D(*uParam1, 2, 0);
	ENTITY::_0x18FF3110CF47115D(*uParam1, 7, 0);
	ENTITY::_0x18FF3110CF47115D(*uParam1, 1, 0);
	PED::SET_PED_CONFIG_FLAG(*uParam1, 21, true);
	PED::_0xB8DE69D9473B7593(*uParam1, 32);
	PED::_0xB8DE69D9473B7593(*uParam1, 5);
	PED::_0xB8DE69D9473B7593(*uParam1, 9);
	PED::SET_PED_CONFIG_FLAG(*uParam1, 233, true);
	PED::SET_PED_CONFIG_FLAG(*uParam1, 169, false);
	PED::SET_PED_CONFIG_FLAG(*uParam1, 138, true);
	PED::SET_PED_CONFIG_FLAG(*uParam1, 6, true);
	__LIB_1__::func_991(*uParam1, 0);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam1, 0, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(*uParam1, 50, true);
	PED::SET_PED_COMBAT_MOVEMENT(*uParam1, 2);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam1, joaat("REL_CIVMALE"));
	iVar0 = func_427(uParam0);
	switch (iVar0)
	{
		case 0:
			break;
		case 1:
			break;
		case 2:
			func_1360(*uParam1, func_233(3, 5), 2, 1073741824 /* Float: 2f */);
			__LIB_0__::func_862(*uParam1, joaat("META_OUTFIT_DEFAULT"));
			break;
		case 3:
			func_1360(*uParam1, func_233(3, 5), 2, 1073741824 /* Float: 2f */);
			__LIB_0__::func_862(*uParam1, joaat("META_OUTFIT_DEFAULT"));
			break;
		case 4:
			func_1360(*uParam1, func_233(3, 5), 2, 1073741824 /* Float: 2f */);
			__LIB_0__::func_862(*uParam1, joaat("META_OUTFIT_DEFAULT"));
			break;
		case 5:
			func_1360(*uParam1, func_233(4, 5), 2, 1073741824 /* Float: 2f */);
			__LIB_0__::func_862(*uParam1, -1874850055);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam1, joaat("REL_PLAYER_ENEMY"));
			break;
		case 6:
			func_1360(*uParam1, func_233(4, 5), 2, 1073741824 /* Float: 2f */);
			__LIB_0__::func_862(*uParam1, -1874850055);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam1, joaat("REL_PLAYER_ENEMY"));
			break;
		case 7:
		case 8:
		case 25:
			break;
	}
	if (iVar0 >= 6)
	{
		__LIB_8__::func_776(*uParam1, 45);
	}
	else
	{
		__LIB_8__::func_776(*uParam1, 150);
	}
	__LIB_1__::func_683(&(uParam1->f_4), 1);
	return 0;
}

int func_1536(var uParam0, var uParam1)
{
	int iVar0;
	if (__LIB_0__::func_27(uParam1->f_4, 1))
	{
		return 1;
	}
	func_2115(-1, 1);
	if (!__LIB_0__::func_272(Local_14.f_31[0], 0))
	{
		return 0;
	}
	*uParam1 = Local_14.f_31[0];
	PED::SET_PED_NAME_DEBUG(*uParam1, "Client-T");
	func_2109(uParam1);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam1, joaat("REL_PLAYER_ALLY"));
	PED::SET_PED_CONFIG_FLAG(*uParam1, 274, true);
	iVar0 = func_427(uParam0);
	switch (iVar0)
	{
		case 0:
			break;
		case 1:
			break;
		case 2:
			func_1360(*uParam1, func_233(1, 6), 2, 1073741824 /* Float: 2f */);
			break;
		case 3:
			func_1360(*uParam1, func_233(2, 6), 2, 1073741824 /* Float: 2f */);
			break;
		case 4:
			func_1360(*uParam1, func_233(3, 6), 2, 1073741824 /* Float: 2f */);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 25:
			break;
	}
	__LIB_0__::func_862(*uParam1, joaat("META_OUTFIT_DEFAULT"));
	__LIB_5__::func_106(uParam0, *uParam1, "ANTHONY_FOREMAN", 0);
	__LIB_1__::func_683(&(uParam1->f_4), 1);
	return 0;
}

int func_1537(var uParam0, var uParam1)
{
	if (__LIB_0__::func_27(uParam1->f_4, 1))
	{
		return 1;
	}
	func_2116(-1, 1);
	if (!__LIB_0__::func_272(Local_14.f_15[0], 0))
	{
		return 0;
	}
	*uParam1 = Local_14.f_15[0];
	PED::SET_PED_NAME_DEBUG(*uParam1, "2A Man");
	func_2109(uParam1);
	__LIB_5__::func_106(uParam0, *uParam1, "MT3_Guest2", 0);
	__LIB_1__::func_683(&(uParam1->f_4), 1);
	return 0;
}

int func_1538(var uParam0, var uParam1)
{
	if (__LIB_0__::func_27(uParam1->f_4, 1))
	{
		return 1;
	}
	func_2117(-1, 1);
	if (!__LIB_0__::func_272(Local_14.f_3[0], 0))
	{
		return 0;
	}
	*uParam1 = Local_14.f_3[0];
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam1, joaat("REL_PLAYER_ALLY"));
	PED::SET_PED_CAN_BE_TARGETTED(*uParam1, false);
	PED::SET_PED_NAME_DEBUG(*uParam1, "1B Man");
	func_2109(uParam1);
	__LIB_5__::func_106(uParam0, *uParam1, "MT3_Guest1", 0);
	__LIB_1__::func_683(&(uParam1->f_4), 1);
	return 0;
}

int func_1539(var uParam0, var uParam1)
{
	if (__LIB_0__::func_27(uParam1->f_4, 1))
	{
		return 1;
	}
	__LIB_2__::func_935(16, 1, 0, 0, 0, 0);
	*uParam1 = __LIB_2__::func_965(16, 1, 0, 0, 1, 1);
	if (!__LIB_0__::func_272(*uParam1, 0))
	{
		return 0;
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam1, true);
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(*uParam1, false, true);
	func_1360(*uParam1, func_233(0, 0), 0, 1073741824 /* Float: 2f */);
	TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(*uParam1, func_1286(0, 0), 1f, -1, true, false, true, false);
	TASK::TASK_LOOK_AT_ENTITY(*uParam1, Global_35, -1, 48, 51, 0);
	PED::SET_PED_NAME_DEBUG(*uParam1, "Clerk");
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam1, joaat("REL_PLAYER_LIKE"));
	PED::SET_PED_RESET_FLAG(*uParam1, 12, true);
	AUDIO::_0xB2DE3AEBE31150E2(*uParam1, 0);
	__LIB_5__::func_106(uParam0, *uParam1, "VAL_Hotel_Owner", 0);
	__LIB_1__::func_683(&(uParam1->f_4), 1);
	return 0;
}

int func_1540(var uParam0, var uParam1)
{
	int iVar0;
	if (__LIB_0__::func_27(uParam1->f_4, 1))
	{
		return 1;
	}
	func_2118(-1, 1);
	if (!__LIB_0__::func_272(Local_14.f_19[0], 0))
	{
		return 0;
	}
	*uParam1 = Local_14.f_19[0];
	if (!PED::_0xA0BC8FAED8CFEB3C(*uParam1))
	{
		return 0;
	}
	iVar0 = func_427(uParam0);
	switch (iVar0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			__LIB_0__::func_862(*uParam1, joaat("META_OUTFIT_DEFAULT"));
			break;
		case 8:
			func_904(*uParam1, -358.789f, 488.1065f, 87.9755f, 34.7307f, 2, 1073741824 /* Float: 2f */);
			__LIB_0__::func_862(*uParam1, -1263308289);
			break;
		case 25:
			func_904(*uParam1, -354.2498f, 490.6226f, 95.6139f, 170.9466f, 2, 1073741824 /* Float: 2f */);
			__LIB_0__::func_862(*uParam1, -1263308289);
			break;
	}
	PED::SET_PED_NAME_DEBUG(*uParam1, "The Man");
	func_2109(uParam1);
	__LIB_5__::func_106(uParam0, *uParam1, "MUD3_TheMan", 0);
	PED::_0xAE6004120C18DF97(*uParam1, 0, 0);
	AUDIO::STOP_PED_SPEAKING(*uParam1, true);
	ENTITY::_0x18FF3110CF47115D(*uParam1, 2, 0);
	ENTITY::_0x18FF3110CF47115D(*uParam1, 7, 0);
	func_2119();
	__LIB_1__::func_683(&(uParam1->f_4), 1);
	return 0;
}

int func_1541(var uParam0, int* iParam1)
{
	int iVar0;
	struct<13> Var1;
	if (__LIB_0__::func_27(iParam1->f_4, 1))
	{
		return 1;
	}
	func_2120(-1, 1);
	if (!__LIB_0__::func_272(Local_14.f_23[0], 0))
	{
		return 0;
	}
	*iParam1 = Local_14.f_23[0];
	iVar0 = func_427(uParam0);
	switch (iVar0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
			break;
		case 7:
			func_1360(*iParam1, func_233(6, 6), 2, 1073741824 /* Float: 2f */);
			break;
		case 8:
			func_904(*iParam1, -355.2134f, 491.9413f, 96.63164f, 174.2275f, 2, 1073741824 /* Float: 2f */);
			break;
		case 25:
			func_1360(*iParam1, func_233(8, 6), 2, 1073741824 /* Float: 2f */);
			break;
	}
	PED::_SET_PED_SCALE(*iParam1, 1f);
	PED::SET_PED_NAME_DEBUG(*iParam1, "The Horse");
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam1, true);
	PED::SET_PED_CONFIG_FLAG(*iParam1, 6, true);
	PED::SET_PED_CONFIG_FLAG(*iParam1, 451, true);
	PED::_0xAE6004120C18DF97(*iParam1, 0, 0);
	func_1959(iParam1, ENTITY::GET_ENTITY_COORDS(*iParam1, true, false), ENTITY::GET_ENTITY_HEADING(*iParam1), 1, 0);
	PED::_0x2EB75FB86C41F026(*iParam1, 3, 0);
	FLOCK::_0xAEB97D84CDF3C00B(*iParam1, 0);
	__LIB_11__::func_30(*iParam1);
	Var1.f_1 = 10;
	Var1.f_12 = 10;
	Var1 = 3;
	Var1.f_1[0] = joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP");
	Var1.f_12[0] = 1;
	Var1.f_1[1] = joaat("CONSUMABLE_HORSE_REVIVER");
	Var1.f_12[1] = 1;
	Var1.f_1[2] = joaat("CONSUMABLE_BREAD_CHUNK");
	Var1.f_12[2] = 1;
	ENTITY::_0xA88E215CEB0435C0(*iParam1, &Var1, 205298116, 128, 2, 0);
	__LIB_1__::func_683(&(iParam1->f_4), 1);
	return 0;
}

int func_1542(var uParam0, int iParam1, bool bParam2)
{
	vector3 vVar0;
	float fVar3;
	int iVar4;
	if (func_167(17))
	{
		if (!__LIB_0__::func_272(iLocal_141, 1))
		{
			func_168(17);
		}
		else
		{
			return 1;
		}
	}
	vVar0 = { func_1286(6, 8) };
	fVar3 = func_1525(6, 8);
	iVar4 = func_427(uParam0);
	if (iVar4 == 7)
	{
		if (__LIB_4__::func_948(uParam0, 4))
		{
			vVar0 = { func_1286(6, 0) };
			fVar3 = func_1525(6, 0);
		}
	}
	if (bParam2)
	{
		vVar0 = { Global_36 };
		vVar0 = { vVar0 + Vector(20f, 10f, 5f) };
		MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &(vVar0.f_2), false);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_141))
	{
		iLocal_141 = __LIB_1__::func_545(joaat("A_C_HORSE_AMERICANSTANDARDBRED_BUCKSKIN"), vVar0, fVar3, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
	}
	if (func_1959(&iLocal_141, vVar0, fVar3, iParam1, 1))
	{
		PED::_SET_PED_SCALE(iLocal_141, 1f);
		PED::SET_PED_CONFIG_FLAG(iLocal_141, 219, true);
		__LIB_1__::func_991(iLocal_141, joaat("HONOR_EVENT_STEAL_HORSE"));
		PED::_SET_PED_BLACKBOARD_BOOL(iLocal_141, "Mud3_Horse", true, -1);
		func_398(17);
	}
	return 0;
}

int func_1543(var uParam0, var uParam1)
{
	if (__LIB_0__::func_27(uParam1->f_4, 1))
	{
		return 1;
	}
	func_2121(-1, 1);
	if (!__LIB_0__::func_272(Local_14.f_7[0], 0))
	{
		return 0;
	}
	*uParam1 = Local_14.f_7[0];
	if (!__LIB_0__::func_27(uParam1->f_4, 64))
	{
		PED::_REQUEST_PED_EMOTIONAL_PRESET(*uParam1, "Default_Angry");
		__LIB_1__::func_683(&(uParam1->f_4), 64);
	}
	if (!PED::_HAS_PED_EMOTIONAL_PRESET_LOADED(*uParam1, "Default_Angry"))
	{
		return 0;
	}
	PED::SET_PED_NAME_DEBUG(*uParam1, "Horse Owner");
	func_2109(uParam1);
	__LIB_5__::func_106(uParam0, *uParam1, "MUD3_HORSE_OWNER", 0);
	__LIB_1__::func_683(&(uParam1->f_4), 1);
	return 0;
}

int func_1544(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	if (func_167(27))
	{
		return 1;
	}
	bVar0 = true;
	if (func_2122(-1, 1))
	{
		iVar2 = 0;
		while (iVar2 < 12)
		{
			if (__LIB_0__::func_27(uLocal_608[iVar2], 1))
			{
			}
			else if (!__LIB_0__::func_272(Local_14.f_35[iVar2], 0))
			{
			}
			else if (!PED::_0xA0BC8FAED8CFEB3C(Local_14.f_35[iVar2]))
			{
				bVar0 = false;
			}
			else
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_14.f_35[iVar2], true);
				iVar1 = ENTITY::GET_ENTITY_MODEL(Local_14.f_35[iVar2]);
				if (iVar1 == joaat("A_C_CHICKEN_01"))
				{
					__LIB_1__::func_473(Local_14.f_35[iVar2], joaat("WORLD_ANIMAL_CHICKEN_EATING"), 0, 0, 0, -1082130432 /* Float: -1f */);
				}
				else if (__LIB_0__::func_125(Local_14.f_35[iVar2]))
				{
					__LIB_10__::func_290(Local_14.f_35[iVar2], 1);
					AITRANSPORT::_0xBA8818212633500A(Local_14.f_35[iVar2], 0, 1);
					TASK::_TASK_START_SCENARIO_IN_PLACE(Local_14.f_35[iVar2], joaat("WORLD_ANIMAL_HORSE_GRAZING_CAMP"), 0, false, 0, -1f, false);
				}
				else if (iVar1 == joaat("A_M_M_VALTOWNFOLK_01"))
				{
					if (!func_167(80))
					{
						TASK::_TASK_START_SCENARIO_IN_PLACE(Local_14.f_35[iVar2], joaat("WORLD_HUMAN_FARMER_RAKE"), 0, false, 0, -1f, false);
						func_398(80);
					}
					else
					{
						TASK::_TASK_START_SCENARIO_IN_PLACE(Local_14.f_35[iVar2], joaat("WORLD_HUMAN_FEED_CHICKEN"), 0, false, 0, -1f, false);
					}
				}
				__LIB_1__::func_683(&(uLocal_608[iVar2]), 1);
			}
			iVar2++;
		}
		if (bVar0)
		{
			func_398(27);
		}
	}
	return 0;
}

bool func_1545(int iParam0, int iParam1, int iParam2, vector3 vParam3, float fParam6, int iParam7, vector3 vParam8)
{
	iParam0->f_9 = iParam7;
	iParam0->f_2 = { vParam8 };
	if (__LIB_0__::func_27(iParam0->f_5, 1) && __LIB_0__::func_27(iParam0->f_5, 2))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam1);
		return true;
	}
	if (!__LIB_0__::func_27(iParam0->f_5, 1))
	{
		STREAMING::REQUEST_MODEL(iParam1, false);
		if (!STREAMING::HAS_MODEL_LOADED(iParam1))
		{
			return false;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			*iParam0 = VEHICLE::CREATE_VEHICLE(iParam1, vParam3, fParam6, true, true, false, false);
			return false;
		}
		if (!__LIB_4__::func_475(iParam0))
		{
			return false;
		}
		VEHICLE::SET_VEHICLE_WHEELS_CAN_BREAK(*iParam0, false);
		__LIB_1__::func_683(&(iParam0->f_5), 1);
	}
	if (!__LIB_0__::func_27(iParam0->f_5, 2))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_1))
		{
			iParam0->f_1 = __LIB_1__::func_545(iParam2, vParam3, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			return false;
		}
		if (!__LIB_0__::func_272(iParam0->f_1, 0))
		{
			return false;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			return false;
		}
		PED::SET_PED_INTO_VEHICLE(iParam0->f_1, *iParam0, -1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0->f_1, joaat("REL_CIVMALE"));
		WEAPON::REMOVE_ALL_PED_WEAPONS(iParam0->f_1, true, true);
		PED::SET_PED_CONFIG_FLAG(iParam0->f_1, 130, false);
		PED::SET_PED_CONFIG_FLAG(iParam0->f_1, 476, true);
		PED::SET_PED_CONFIG_FLAG(iParam0->f_1, 272, true);
		__LIB_1__::func_683(&(iParam0->f_5), 2);
	}
	return false;
}

bool func_1546()
{
	int iVar0;
	iVar0 = 1;
	if (!func_2125(5, 9))
	{
		iVar0 = 0;
	}
	if (!func_2125(5, 10))
	{
		iVar0 = 0;
	}
	if (!func_2125(5, 11))
	{
		iVar0 = 0;
	}
	if (!func_2125(5, 12))
	{
		iVar0 = 0;
	}
	if (!func_2125(5, 13))
	{
		iVar0 = 0;
	}
	if (!func_2125(5, 14))
	{
		iVar0 = 0;
	}
	if (!func_2125(5, 15))
	{
		iVar0 = 0;
	}
	if (!func_2125(5, 16))
	{
		iVar0 = 0;
	}
	if (!func_2125(5, 17))
	{
		iVar0 = 0;
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1193[5 /*6*/]))
	{
		if (__LIB_0__::func_272(Local_193[6 /*6*/], 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1193[5 /*6*/], "U_M_M_VALTOWNFOLK_02", Local_193[6 /*6*/], 0);
		}
	}
	return iVar0;
}

Vector3 func_1547(int iParam0, int iParam1)
{
	return func_2126(iParam0, iParam1);
}

void func_1548(var uParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		return;
	}
	iVar0 = 0;
	if (bParam3)
	{
		iVar1 = 0;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			iVar3 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(*iParam1, iVar2);
			if (__LIB_0__::func_272(iVar3, 0))
			{
				iVar1++;
				if (iVar1 == 0)
				{
					iVar0 = iParam4;
				}
				else if (iVar1 == 1)
				{
					iVar0 = iParam5;
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(iVar0))
				{
				}
				else
				{
					__LIB_5__::func_580(uParam0, iVar3, iVar0, 0, 0, 0, 0);
				}
			}
			iVar2++;
		}
	}
	__LIB_5__::func_335(uParam0, *iParam1);
	__LIB_5__::func_580(uParam0, *iParam1, sParam2, 0, 0, 0, 0);
}

bool func_1552()
{
	if (func_167(32))
	{
		return true;
	}
	if (!func_167(34))
	{
		VEHICLE::_0x87344305778E5415(Local_579, 1);
		VEHICLE::_0x8C6D9A399126C194(Local_579, 20);
		VEHICLE::SET_VEHICLE_FIXED(Local_579);
		func_398(34);
	}
	if (__LIB_4__::func_475(&Local_579))
	{
		func_398(32);
	}
	return false;
}

void func_1553(var uParam0, int iParam1, int iParam2, char[4] cParam3)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		return;
	}
	iVar0 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(*iParam1, iParam2);
	if (__LIB_0__::func_272(iVar0, 0))
	{
		__LIB_11__::func_784(uParam0, &iVar0, cParam3, 0);
	}
}

void func_1554(bool bParam0)
{
	if (!func_167(89))
	{
		if (func_493(13, 1, bParam0))
		{
			func_398(89);
		}
	}
	if (!func_167(90))
	{
		if (func_493(14, 1, bParam0))
		{
			func_398(90);
		}
	}
	if (!func_167(91))
	{
		if (func_493(11, 1, bParam0))
		{
			func_398(91);
		}
	}
	if (!func_167(92))
	{
		if (func_493(1, 1, bParam0))
		{
			func_398(92);
		}
	}
}

void func_1560(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	iVar1 = iParam0->f_5;
	if (!__LIB_0__::func_272(*iParam0, 0))
	{
		iParam1 = 8;
	}
	if (iVar1 == iParam1 && !bParam2)
	{
		return;
	}
	if (iParam1 == 6)
	{
		__LIB_3__::func_515(&(Local_893[0 /*17*/]), 0, 1);
		__LIB_3__::func_515(&(Local_893[1 /*17*/]), 0, 1);
		__LIB_1__::func_480(iParam0);
	}
	else if (iParam1 > 4)
	{
		func_460(&iLocal_928, &Local_893, iParam0, 1);
	}
	if (iParam1 == 4)
	{
		func_460(&Local_1007, &Local_989, &(Local_193[6 /*6*/]), 1);
	}
	if (iParam0->f_5 == 4)
	{
		func_163(61, 0, 0);
		func_163(62, 0, 0);
		__LIB_1__::func_683(&(iParam0->f_4), 1024);
		if (__LIB_0__::func_27(iParam0->f_4, 4096))
		{
			PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "WITNESS_CLIFF");
			__LIB_1__::func_681(&(iParam0->f_4), 4096);
		}
	}
	iParam0->f_5 = iParam1;
	switch (iParam1)
	{
		case 0:
			break;
		case 1:
			break;
		case 2:
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, 1);
			PED::REQUEST_PED_VISIBILITY_TRACKING(*iParam0);
			__LIB_1__::func_571(*iParam0, Local_193[7 /*6*/], 0, -1, 1);
			TASK::TASK_FOLLOW_WAYPOINT_RECORDING(*iParam0, func_421(1), 0, 28168, -1, 0, 0, -1);
			PED::FORCE_PED_MOTION_STATE(Local_193[7 /*6*/], joaat("MOTIONSTATE_RUN"), false, 0, false);
			PED::_0xAE6004120C18DF97(Local_193[7 /*6*/], 0, 0);
			PED::_0xAE6004120C18DF97(*iParam0, 0, 0);
			ENTITY::SET_ENTITY_INVINCIBLE(Local_193[7 /*6*/], true);
			PED::SET_PED_CAN_BE_TARGETTED(Local_193[7 /*6*/], false);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_193[7 /*6*/], joaat("REL_PLAYER_ALLY"));
			PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(*iParam0, 1);
			PED::_0x2208438012482A1A(Local_193[7 /*6*/], false, false);
			PED::_0x2208438012482A1A(*iParam0, false, false);
			__LIB_5__::func_107(&uLocal_468);
			__LIB_3__::func_157(&(Local_989[0 /*17*/]), "INTERACT_CALLOUT", 0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
			__LIB_1__::func_471(&(Local_989[0 /*17*/]), 10);
			break;
		case 3:
			TASK::CLEAR_PED_SECONDARY_TASK(*iParam0);
			PED::SET_RAGDOLL_BLOCKING_FLAGS(*iParam0, 99);
			func_1398(9);
			__LIB_5__::func_107(&uLocal_429);
			if (iLocal_102 != 0)
			{
				EVENT::REMOVE_SHOCKING_EVENT(iLocal_102);
				iLocal_102 = 0;
			}
			AUDIO::STOP_PED_SPEAKING(*iParam0, false);
			break;
		case 4:
			AUDIO::STOP_PED_SPEAKING(*iParam0, false);
			PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(*iParam0, 99);
			__LIB_0__::func_862(*iParam0, -1263308289);
			if (!__LIB_2__::func_618(&uLocal_480))
			{
				__LIB_2__::func_620(&uLocal_480, 6f);
			}
			if (__LIB_0__::func_272(Local_193[7 /*6*/], 0))
			{
				PED::FORCE_PED_MOTION_STATE(Local_193[7 /*6*/], joaat("MOTIONSTATE_IDLE"), true, 0, false);
				TASK::CLEAR_PED_TASKS(Local_193[7 /*6*/], true, false);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_TURN_PED_TO_FACE_COORD(0, func_1286(7, 6), 0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_1286(7, 6), 1f, -1, 0.25f, 0, 40000f);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(Local_193[7 /*6*/], iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			}
			__LIB_2__::func_279(Local_193[7 /*6*/], 1);
			__LIB_2__::func_279(*iParam0, 1);
			__LIB_11__::func_598(&iLocal_928, 0);
			__LIB_3__::func_157(&(Local_893[0 /*17*/]), "MUD3_C_QUEST", 0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
			__LIB_1__::func_471(&(Local_893[0 /*17*/]), 10);
			__LIB_1__::func_471(&(Local_893[0 /*17*/]), 5);
			__LIB_1__::func_471(&(Local_893[0 /*17*/]), 17);
			__LIB_3__::func_157(&(Local_893[1 /*17*/]), "MUD3_C_KILL", 0, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
			__LIB_1__::func_471(&(Local_893[1 /*17*/]), 10);
			__LIB_1__::func_471(&(Local_893[1 /*17*/]), 5);
			__LIB_1__::func_471(&(Local_893[1 /*17*/]), 17);
			break;
		case 5:
			__LIB_7__::func_498(1034793488, -2147483648);
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_MUD3_KILLED_WITNESS"), true);
			if (!func_167(87))
			{
				Global_1357515 = 1;
				func_398(87);
			}
			func_2135(0);
			break;
		case 6:
			if (!func_167(87))
			{
				Global_1357515 = 0;
				func_398(87);
			}
			func_2135(1);
			break;
		case 7:
			func_1873(5, 13, 1);
			__LIB_7__::func_498(1034793488, -2147483648);
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_MUD3_KILLED_WITNESS"), true);
			func_398(72);
			if (!func_167(87))
			{
				Global_1357515 = -1;
				func_398(87);
			}
			break;
		case 8:
			__LIB_7__::func_498(1034793488, -2147483648);
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_MUD3_KILLED_WITNESS"), true);
			if (!func_167(87))
			{
				Global_1357515 = 1;
				func_398(87);
			}
			break;
	}
}

void func_1561()
{
	if (!func_167(52))
	{
		__LIB_4__::func_467(13, -1895108717, 0, "MUD3_HG_SAVE", Local_193[6 /*6*/], 0, 1065353216 /* Float: 1f */, 0);
		func_398(52);
	}
	func_1300(5, 0, 0, 1, 1, 0);
}

void func_1562(var uParam0)
{
	struct<8> Var0;
	float fVar8;
	if (func_167(93))
	{
		return;
	}
	if (!__LIB_5__::func_52(uParam0))
	{
		return;
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_7375.f_804))
	{
		return;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_7375.f_804, true, false))
	{
		return;
	}
	if (__LIB_0__::func_272(Local_193[6 /*6*/], 0) && !func_167(4))
	{
		Var0 = { __LIB_0__::func_134() };
		if (ANIMSCENE::_0x1F0E401031E20146(uParam0->f_7375.f_804, &Var0))
		{
			fVar8 = (32.665f / 92.467f);
		}
		else
		{
			fVar8 = (22.685f / 82.4f);
		}
		if (__LIB_11__::func_763(uParam0) >= fVar8)
		{
			PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_JIMMYB"));
			func_398(93);
		}
	}
}

void func_1564(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	var uVar4;
	bool bVar5;
	float fVar6;
	iVar0 = 0;
	bVar5 = false;
	fVar6 = 45f;
	if (Local_1179.f_10 != 93)
	{
		sVar3 = func_447(Local_1179.f_10);
		if (Local_1179.f_11)
		{
			__LIB_5__::func_20(0, 0);
			Local_1179.f_11 = 0;
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar3) || !__LIB_6__::func_903(sVar3))
		{
			Local_1179.f_10 = 93;
		}
		if (Local_1179.f_10 == 28 || Local_1179.f_10 == 76)
		{
			func_1849(0);
		}
		if (((((Local_1179.f_10 == 20 || Local_1179.f_10 == 19) || Local_1179.f_10 == 23) || Local_1179.f_10 == 25) || Local_1179.f_10 == 76) || Local_1179.f_10 == 29)
		{
			func_1849(1);
		}
		return;
	}
	if (Local_1179.f_11)
	{
		Local_1179.f_11 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 93)
	{
		iVar1 = iVar0;
		if (func_1612(iVar1))
		{
			uVar4 = func_2138(iVar1);
			switch (iVar1)
			{
				case 70:
					fVar6 = 60f;
					break;
				case 51:
					fVar6 = 60f;
					break;
				case 50:
					fVar6 = 35f;
					break;
				case 64:
				case 73:
				case 82:
					fVar6 = 30f;
					break;
				case 71:
				case 72:
					fVar6 = 100f;
					break;
				case 65:
				case 66:
				case 67:
				case 77:
					fVar6 = 70f;
					break;
				case 54:
					fVar6 = 70f;
					break;
			}
			iVar2 = func_2139(uParam0, &Local_1179, iVar0, &uVar4, 0, fVar6, bVar5);
			if (iVar2 == 1)
			{
				Local_1179.f_10 = iVar1;
			}
			if (iVar2 == 4)
			{
				func_452(iVar1);
			}
			if (iVar2 == 7)
			{
				if (iVar1 == 60)
				{
					func_452(iVar1);
				}
			}
			else
			{
				func_2140(iVar2, iVar1);
			}
			else
			{
				iVar0++;
			}
		}
	}
}

int func_1565(var uParam0)
{
	int iVar0;
	float fVar1;
	bool bVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	iVar0 = func_427(uParam0);
	if (func_167(60))
	{
		func_168(60);
	}
	bVar2 = false;
	switch (iVar0)
	{
		case 0:
		case 1:
			if (func_2141(uParam0, 4, 100f, 150f, 0, 1))
			{
				func_398(60);
				return 1;
			}
			if (!__LIB_0__::func_48(Global_35, Local_579, 160f, 1))
			{
				bVar2 = true;
			}
			fVar1 = __LIB_0__::func_94(Global_35, func_1286(1, 7), 1);
			if (fVar1 < fLocal_106)
			{
				fLocal_106 = fVar1;
			}
			else if ((fVar1 - fLocal_106) > 150f)
			{
				bVar2 = true;
			}
			break;
		case 2:
		case 3:
			if (func_2141(uParam0, 4, 75f, 100f, 1, 0))
			{
				func_398(60);
				return 1;
			}
			break;
		case 4:
			if (iLocal_1360 == 5)
			{
			}
			else
			{
				if (iLocal_1360 == 0)
				{
					fVar5 = __LIB_0__::func_665(Global_35, Local_193[3 /*6*/], 1, 1);
					if (fVar5 < fLocal_114)
					{
						fLocal_114 = fVar5;
					}
					fVar3 = (fLocal_114 + 5f);
					fVar4 = (fVar3 + 5f);
					if (func_2141(uParam0, 22, fVar3, fVar4, 1, 0))
					{
						func_398(60);
						return 1;
					}
				}
				else
				{
					fVar6 = __LIB_0__::func_665(Global_35, Local_193[1 /*6*/], 1, 1);
					if (fVar6 < fLocal_115)
					{
						fLocal_115 = fVar6;
					}
					fVar3 = (fLocal_115 + 15f);
					if (fVar3 > 30f)
					{
						fVar3 = 30f;
					}
					fVar4 = (fVar3 + 5f);
					if (func_2141(uParam0, 20, fVar3, fVar4, 0, 0))
					{
						func_398(60);
						return 1;
					}
				}
				Jump @475; //curOff = 400
				if (func_2141(uParam0, 20, 8.5f, 12.5f, 1, 0))
				{
					func_398(60);
					return 1;
				}
				Jump @475; //curOff = 436
				if (func_2141(uParam0, 20, 25f, 40f, 0, 0))
				{
					func_398(60);
					return 1;
				}
			}
			if (bVar2)
			{
				__LIB_11__::func_423(uParam0, "MUD3_F_AREA", "", 1, 0);
				return 1;
			}
			return 0;
			default:
				break;
	}
}

bool func_1566(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2[3];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	iVar0 = func_427(uParam0);
	if (iVar0 < 7)
	{
		if (PED::IS_PED_JACKING(Global_35))
		{
			return true;
		}
		if (PED::_0x5407B7288D0478B7(Global_35, 16896) > 0)
		{
			return true;
		}
	}
	iVar1 = 1000;
	if (PLAYER::_0x72AD59F7B7FB6E24(PLAYER::PLAYER_ID(), iVar1))
	{
		if (PLAYER::_0x1A6E84F13C952094(PLAYER::GET_PLAYER_INDEX(), iVar1, &iVar2))
		{
			iVar6 = iVar2;
			iVar7 = 0;
			while (iVar7 < iVar6)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iVar2[iVar7]))
				{
				}
				else if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar2[iVar7], true))
				{
				}
				else if (!__LIB_0__::func_125(iVar2[iVar7]) && !PED::IS_PED_HUMAN(iVar2[iVar7]))
				{
				}
				else if (__LIB_0__::func_125(iVar2[iVar7]))
				{
					iVar8 = FLOCK::_0x3B005FF0538ED2A9(iVar2[iVar7]);
					if (iVar8 == 1)
					{
					}
					else
					{
						if (func_2142(&(iVar2[iVar7])))
						{
							return true;
						}
						iVar9 = __LIB_0__::func_153(Global_35, 0, 1, 0);
						if (WEAPON::IS_WEAPON_VALID(iVar9))
						{
							if (WEAPON::_0x9E2D5D6BC97A5F1E(iVar2[iVar7], iVar9, iVar1))
							{
								return true;
							}
						}
					}
					iVar7++;
					return false;
				}
			}
		}
	}
}

void func_1567(var uParam0)
{
	int iVar0;
	float fVar1;
	float fVar2;
	iVar0 = func_427(uParam0);
	if (iVar0 != 0 && iVar0 != 1)
	{
		if (func_167(86))
		{
			TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(func_421(4), 0, 1065353216 /* Float: 1f */, 1056964608 /* Float: 0.5f */, 1);
			func_168(86);
		}
		return;
	}
	if (!PED::IS_PED_IN_VEHICLE(Global_35, Local_579, false))
	{
		if (func_167(86))
		{
			TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(func_421(4), 0, 1065353216 /* Float: 1f */, 1056964608 /* Float: 0.5f */, 1);
			func_168(86);
		}
		return;
	}
	fVar1 = 1f;
	fVar2 = 1f;
	VEHICLE::_0x13EB275BF81636D1(Local_579, 0);
	if (CAM::IS_CINEMATIC_CAM_RENDERING())
	{
		func_1300(8, 0, 0, 0, 0, 0);
		if (!func_167(86) || !PLAYER::_0x73EB2EF2E92D23BF())
		{
			TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(func_421(4), 1, fVar1, fVar2, 0);
			func_398(86);
		}
	}
	else if (func_167(86))
	{
		TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(func_421(4), 0, 1065353216 /* Float: 1f */, 1056964608 /* Float: 0.5f */, 1);
		func_168(86);
	}
}

void func_1568()
{
	if (!Local_1309.f_15)
	{
		return;
	}
	if (Local_1309.f_26 > MISC::GET_GAME_TIMER())
	{
		return;
	}
	if ((!ENTITY::DOES_ENTITY_EXIST(Local_1309.f_17) && Local_1309.f_14 > 1) && Local_1309 != 0)
	{
		if (__LIB_11__::func_400() && __LIB_0__::func_636(Global_36, Local_1309.f_11) < 100f)
		{
			if (Local_1309.f_18 == 0)
			{
				Local_1309.f_18 = ENTITY::_0x6F3068258A499E52(Local_1309, Local_1309.f_11, 11);
			}
			else if (ENTITY::_0x1FF441D7954F8709(Local_1309.f_18))
			{
				Local_1309.f_17 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(Local_1309.f_18));
			}
		}
		Local_1309.f_26 = MISC::GET_GAME_TIMER() + 1800;
	}
	switch (Local_1309.f_14)
	{
		case 0:
			func_2144();
			Local_1309.f_14 = 1;
			break;
		case 1:
			if (func_2145())
			{
				Local_1309.f_14 = 2;
			}
			break;
		case 2:
			if (func_2146())
			{
				Local_1309.f_14 = 3;
				Local_1309.f_24 = 0;
				Local_1309.f_21 = 0;
				Local_1309.f_22 = __LIB_0__::func_41(__LIB_0__::func_23());
				if (Local_1309.f_22 > 12)
				{
					Local_1309.f_22 = (Local_1309.f_22 % 12);
				}
			}
			break;
		case 3:
			Local_1309.f_25 = 1;
			if (ENTITY::DOES_ENTITY_EXIST(Local_1309.f_17))
			{
				if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(Local_1309.f_17))
				{
					Local_1309.f_25 = 0;
					ENTITY::PLAY_ENTITY_ANIM(Local_1309.f_17, Local_1309.f_7, Local_1309.f_6, 1000f, false, true, false, 0f, 0);
					Local_1309.f_14 = 4;
				}
			}
			if (Local_1309.f_21 >= Local_1309.f_22)
			{
				Local_1309.f_14 = 2;
			}
			break;
		case 4:
			if (__LIB_11__::func_401(Local_1309.f_17, Local_1309.f_6, Local_1309.f_7, 0))
			{
				ENTITY::PLAY_ENTITY_ANIM(Local_1309.f_17, Local_1309.f_8, Local_1309.f_6, 1000f, true, true, false, 0f, 0);
				Local_1309.f_23 = MISC::GET_GAME_TIMER() + 1800;
				Local_1309.f_14 = 5;
			}
			break;
		case 5:
			if (Local_1309.f_24 < MISC::GET_GAME_TIMER())
			{
				Local_1309.f_21++;
				Local_1309.f_24 = MISC::GET_GAME_TIMER() + 1800;
			}
			if (Local_1309.f_21 >= Local_1309.f_22 && __LIB_11__::func_401(Local_1309.f_17, Local_1309.f_6, Local_1309.f_8, 0.02f))
			{
				ENTITY::PLAY_ENTITY_ANIM(Local_1309.f_17, Local_1309.f_9, Local_1309.f_6, 8f, false, false, false, 0f, 0);
				Local_1309.f_14 = 2;
			}
			break;
	}
	if (Local_1309.f_25 && Local_1309.f_14 > 2)
	{
		if (AUDIO::_0x714A0EA7DE1167BE(Local_1309.f_10, "CHURCH_BELL_SOUNDS") && Local_1309.f_24 < MISC::GET_GAME_TIMER())
		{
			Local_1309.f_24 = MISC::GET_GAME_TIMER() + 1800;
			AUDIO::_PLAY_SOUND_FROM_POSITION(Local_1309.f_10, Local_1309.f_11, "CHURCH_BELL_SOUNDS", false, 0, true, 0);
			Local_1309.f_21++;
		}
	}
}

void func_1569(var uParam0)
{
	if (func_427(uParam0) >= 4)
	{
		POPULATION::_0xF45E46DEECF7DF6E(16384, 0, 0, -1, -1);
	}
	PED::_0xBA0980B5C0A11924(0f);
}

void func_1570(var uParam0)
{
	func_2148(uParam0, &(Local_193[0 /*6*/]));
	func_2149(&(Local_193[1 /*6*/]));
	func_2150(&(Local_193[2 /*6*/]));
	func_2151(&(Local_193[3 /*6*/]));
	func_2152(&(Local_193[4 /*6*/]));
	func_2153(&(Local_193[5 /*6*/]));
	func_2154(uParam0, &(Local_193[6 /*6*/]));
	func_2155(uParam0, &(Local_193[8 /*6*/]));
	func_2156(&(Local_193[12 /*6*/]));
	func_2157(uParam0, &(Local_193[13 /*6*/]));
	func_2158();
	func_2159(uParam0);
}

bool func_1571(int iParam0)
{
	int iVar0;
	if (iParam0 != 4)
	{
		return false;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false))
	{
		if (iVar0 == joaat("WEAPON_UNARMED"))
		{
			return false;
		}
		if (PED::IS_PED_SHOOTING(Global_35))
		{
			return true;
		}
	}
	return false;
}

void func_1572(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = func_427(uParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		return;
	}
	if ((iVar0 > 1 || !func_167(32)) || __LIB_5__::func_52(uParam0))
	{
		func_2160(iParam1);
		__LIB_2__::func_608(&(iParam1->f_4));
		iParam1->f_1 = 0;
		return;
	}
	if (iParam1->f_1)
	{
		if (!__LIB_2__::func_618(&(iParam1->f_4)))
		{
			__LIB_5__::func_107(&(iParam1->f_4));
		}
		if (__LIB_9__::func_324(&(iParam1->f_4)) > 3f)
		{
			__LIB_11__::func_423(uParam0, "MUD3_F_WAGON", "", 1, 0);
		}
		return;
	}
	if (!iParam1->f_2)
	{
		func_2160(iParam1);
		iParam1->f_2 = 1;
	}
	if (__LIB_4__::func_257(*iParam1))
	{
		iParam1->f_1 = 1;
		return;
	}
	if (!__LIB_11__::func_29(*iParam1))
	{
		iParam1->f_1 = 1;
		return;
	}
	if (!func_2163(iParam1, 1))
	{
		iParam1->f_1 = 1;
		return;
	}
	if (func_2164(iParam1))
	{
		iParam1->f_1 = 1;
		return;
	}
	if (func_1878(0))
	{
		iParam1->f_1 = 1;
		return;
	}
}

void func_1573(int iParam0)
{
	bool bVar0;
	if (iParam0 == 2 || iParam0 == 3)
	{
		func_2165(-290089884);
		bVar0 = false;
		if (iParam0 == 3)
		{
			bVar0 = true;
		}
		func_2166(706990067, bVar0);
	}
}

void func_1574(int iParam0)
{
	if (iParam0 == 7)
	{
		func_2167(-2143609525, 1f, 0);
		func_2167(-1905739354, -1f, 0);
		func_2167(-1801665010, 1f, 0);
		func_2167(-1453231925, -1f, 0);
	}
	else
	{
		func_2167(-2143609525, 0f, 1);
		func_2167(-1905739354, 0f, 1);
		func_2167(-1801665010, 0f, 1);
		func_2167(-1453231925, 0f, 1);
	}
	if (iParam0 == 7)
	{
		func_2167(954666972, 1f, 0);
		func_2167(1644519960, -1f, 0);
		func_2167(352897364, -1f, 0);
		func_2167(660303353, 1f, 0);
	}
	else
	{
		func_2167(954666972, 0f, 1);
		func_2167(1644519960, 0f, 1);
		func_2167(352897364, 0f, 1);
		func_2167(660303353, 0f, 1);
	}
}

void func_1575()
{
	func_2165(-1245790181);
	func_2165(-861656352);
	func_2165(1183522472);
	func_2165(-1553967420);
	func_2165(-1466932952);
	func_2165(946241121);
	func_2165(246426357);
	func_2165(540459374);
	func_2165(-601602845);
	func_2165(142240370);
	if (func_167(8))
	{
		func_2165(-529064319);
		OBJECT::_0x0C0A373D181BF900(-529064319);
	}
	else
	{
		func_2165(-529064319);
		OBJECT::_0x7F458B543006C8FE(-529064319, 15);
	}
	if (func_167(9))
	{
		func_2165(183181940);
	}
	else
	{
		func_2167(183181940, 0f, 1);
	}
	if (func_167(23))
	{
		func_2167(238680582, -1f, 0);
	}
	else
	{
		func_2165(238680582);
		OBJECT::_0x0C0A373D181BF900(238680582);
		OBJECT::_0x7F458B543006C8FE(238680582, 24);
	}
	func_2167(1879307167, 0f, 1);
}

void func_1576(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = func_427(uParam0);
	iVar1 = __LIB_0__::func_23();
	iVar2 = iVar1;
	iVar3 = iVar1;
	__LIB_0__::func_467(&iVar2, 5);
	__LIB_0__::func_468(&iVar2, 5);
	__LIB_0__::func_467(&iVar3, 6);
	__LIB_0__::func_468(&iVar3, 0);
	switch (iVar0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			if (__LIB_0__::func_41(iVar1) > 19 || __LIB_0__::func_41(iVar1) < 6)
			{
				if (__LIB_1__::func_110(iVar1, iVar2, 1) && !__LIB_1__::func_110(iVar1, iVar3, 1))
				{
					CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(1000);
				}
				else
				{
					CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(500);
				}
			}
			else if (__LIB_0__::func_41(iVar1) <= 12)
			{
				if (__LIB_11__::func_348(12, 0, 0, 0))
				{
				}
			}
			else if (__LIB_11__::func_348(18, 0, 0, 0))
			{
			}
			else if (__LIB_0__::func_41(iVar1) >= 18)
			{
				CLOCK::_PAUSE_CLOCK_THIS_FRAME(true);
			}
			break;
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 25:
			if (__LIB_11__::func_348(19, 0, 0, 0))
			{
			}
			else if (__LIB_0__::func_41(iVar1) >= 19)
			{
				CLOCK::_PAUSE_CLOCK_THIS_FRAME(true);
			}
			break;
	}
	if (!func_167(15))
	{
		MISC::_SET_WEATHER_TYPE(joaat("SUNNY"), false, true, true, 60f, false);
		func_398(15);
	}
}

void func_1577()
{
	if (!Local_1193[14 /*6*/].f_2)
	{
		return;
	}
	if (func_1389(14))
	{
		return;
	}
	if (func_1403(14, 73, 1065185444 /* Float: 0.99f */))
	{
		func_1873(14, 71, 0);
	}
}

void func_1590(var uParam0)
{
	struct<8> Var0;
	func_2180(uParam0);
	if (__LIB_5__::func_253(uParam0) == 1 && CAM::IS_SCREEN_FADED_OUT())
	{
		GRAPHICS::_0x297B72E2AF094742(6);
	}
	else if (__LIB_5__::func_253(uParam0) == 0 && !__LIB_4__::func_937(uParam0, 8))
	{
		__LIB_5__::func_284(uParam0);
	}
	__LIB_5__::func_326(&(uParam0->f_10792));
	__LIB_5__::func_74(uParam0);
	__LIB_4__::func_992(uParam0, 67108864);
	__LIB_4__::func_992(uParam0, 8192);
	__LIB_4__::func_969(uParam0, 4);
	__LIB_4__::func_969(uParam0, 512);
	__LIB_4__::func_969(uParam0, 65536);
	__LIB_4__::func_969(uParam0, 1024);
	__LIB_4__::func_969(uParam0, 262144);
	__LIB_4__::func_969(uParam0, 16777216);
	__LIB_4__::func_969(uParam0, 64);
	__LIB_4__::func_958(uParam0, 128);
	__LIB_4__::func_944(uParam0, -2147483648);
	__LIB_4__::func_993(uParam0, 1);
	if (__LIB_4__::func_948(uParam0, 4194304))
	{
		__LIB_5__::func_334(uParam0, __LIB_4__::func_939(uParam0), 1073741824 /* Float: 2f */);
	}
	__LIB_4__::func_958(uParam0, 4194304);
	__LIB_4__::func_958(uParam0, 8388608);
	if (!__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 2048))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
	}
	if (__LIB_0__::func_2() == 0)
	{
		__LIB_1__::func_965(8);
		__LIB_5__::func_103(1);
	}
	if (__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 64) || !__LIB_4__::func_947(uParam0))
	{
		__LIB_0__::func_267(0);
	}
	else
	{
		__LIB_0__::func_267(1);
	}
	CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
	if (!__LIB_4__::func_937(uParam0, 131072))
	{
		PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::GET_PLAYER_INDEX(), false);
	}
	__LIB_2__::func_608(&(uParam0->f_13106));
	__LIB_5__::func_107(&(uParam0->f_13112));
	__LIB_5__::func_598(uParam0, __LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 1));
	if (!__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 1024))
	{
		HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
	}
	if (!__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 32768))
	{
		__LIB_0__::func_733(1);
	}
	if (__LIB_5__::func_285(uParam0, __LIB_5__::func_475(uParam0)) != -1 && PED::_0x62DE46F061CAA468() < __LIB_5__::func_285(uParam0, __LIB_5__::func_475(uParam0)))
	{
		PED::_0xF008E0BA1FE1D644((__LIB_5__::func_285(uParam0, __LIB_5__::func_475(uParam0)) - PED::_0x62DE46F061CAA468()));
	}
	if (MISSIONDATA::_MISSIONDATA_TIMECYCLE_BOX_EXISTS())
	{
		MISSIONDATA::_MISSIONDATA_TIMECYCLE_BOX_DELETE();
	}
	Var0 = { __LIB_5__::func_310(uParam0) };
	MISSIONDATA::_MISSIONDATA_TIMECYCLE_BOX_SET_MODIFIER(&Var0);
	Global_43805 = -1;
	if (__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 1))
	{
		__LIB_0__::func_7(&Global_1935630, 2097152);
	}
	else
	{
		__LIB_0__::func_8(&Global_1935630, 2097152);
	}
	__LIB_5__::func_472(uParam0);
	if (__LIB_4__::func_939(uParam0) == 25 && __LIB_0__::func_13(32768))
	{
		__LIB_5__::func_490(uParam0, 16);
	}
	if (__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 512))
	{
		__LIB_4__::func_587(1f, 0f, 0f, 0f);
	}
	else
	{
		__LIB_4__::func_680();
	}
}

bool func_1611(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = iParam1;
	iVar1 = 0;
	while (iVar0 >= 32)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 >= 4)
	{
		return false;
	}
	iVar2 = __LIB_0__::func_771(iVar0);
	return __LIB_0__::func_1((*uParam0)[iVar1], iVar2);
}

bool func_1612(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 >= 32)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 >= 4)
	{
		return false;
	}
	iVar2 = __LIB_0__::func_771(iVar0);
	if (__LIB_0__::func_1(Local_1179[iVar1], iVar2))
	{
		return false;
	}
	return __LIB_0__::func_1(Local_1179.f_5[iVar1], iVar2);
}

void func_1754(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_2285(0))
			{
				iVar0++;
			}
			if (func_2285(2))
			{
				iVar0++;
			}
			if (func_2285(4))
			{
				iVar0++;
			}
			if (!__LIB_0__::func_605(16))
			{
				if (iVar0 == 1)
				{
					__LIB_1__::func_839();
					__LIB_1__::func_240(456, 1);
					__LIB_0__::func_606(16);
				}
			}
			if (!__LIB_0__::func_605(32))
			{
				if (iVar0 >= 3)
				{
					__LIB_1__::func_839();
					__LIB_1__::func_240(456, 1);
					__LIB_0__::func_606(32);
				}
			}
			break;
		case 1:
		case 3:
		case 7:
			if (func_2285(1))
			{
				iVar0++;
			}
			if (func_2285(3))
			{
				iVar0++;
			}
			if (func_2285(7))
			{
				iVar0++;
			}
			if (!__LIB_0__::func_605(1))
			{
				if (iVar0 == 1)
				{
					__LIB_1__::func_840();
					__LIB_1__::func_240(457, 1);
					__LIB_0__::func_606(1);
				}
			}
			if (!__LIB_0__::func_605(2))
			{
				if (iVar0 >= 3)
				{
					__LIB_1__::func_840();
					__LIB_1__::func_240(457, 1);
					__LIB_0__::func_606(2);
				}
			}
			break;
		case 5:
		case 6:
		case 8:
			if (func_2285(5))
			{
				iVar0++;
			}
			if (func_2285(6))
			{
				iVar0++;
			}
			if (func_2285(8))
			{
				iVar0++;
			}
			if (!__LIB_0__::func_605(4))
			{
				if (iVar0 == 1)
				{
					__LIB_1__::func_841();
					__LIB_1__::func_240(455, 1);
					__LIB_0__::func_606(4);
				}
			}
			if (!__LIB_0__::func_605(8))
			{
				if (iVar0 >= 3)
				{
					__LIB_1__::func_841();
					__LIB_1__::func_240(455, 1);
					__LIB_0__::func_606(8);
				}
			}
			break;
	}
}

void func_1759(int iParam0)
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
	func_690(iParam0, 1, 1, -142743235, 1);
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
		func_690(uVar18[iVar36], 1, 1, -142743235, 1);
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

void func_1764(struct<6> Param0)
{
	if (!func_2312(Param0.f_4, 1))
	{
	}
	if (!func_2312(Param0, 1))
	{
	}
	if (!func_2312(Param0.f_2, 1))
	{
	}
	if (!func_2312(Param0.f_5, 1))
	{
	}
	if (!func_2312(Param0.f_3, 1))
	{
	}
	if (!func_2312(Param0.f_1, 1))
	{
	}
}

bool func_1823(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = __LIB_0__::func_23();
	iVar1 = iVar0;
	iVar2 = iVar0;
	__LIB_0__::func_467(&iVar1, iParam0);
	__LIB_0__::func_468(&iVar1, iParam1);
	__LIB_0__::func_467(&iVar2, iParam2);
	__LIB_0__::func_468(&iVar2, iParam3);
	if (iParam2 < iParam0)
	{
		if (__LIB_1__::func_110(iVar0, iVar2, 1) && !__LIB_1__::func_110(iVar0, iVar1, 1))
		{
			return false;
		}
		return true;
	}
	if (__LIB_1__::func_110(iVar0, iVar1, 1) && !__LIB_1__::func_110(iVar0, iVar2, 1))
	{
		return true;
	}
	return false;
}

void func_1828(var uParam0, int iParam1, int iParam2, char* sParam3)
{
	int iVar0;
	char* sVar1;
	iVar0 = Local_1193[iParam1 /*6*/];
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iVar0))
	{
		return;
	}
	sVar1 = func_1442(iParam2);
	TASK::TASK_ENTER_ANIM_SCENE(*uParam0, iVar0, sParam3, sVar1, 1069379748 /* Float: 1.48f */, 0, 0, 20000, -1082130432 /* Float: -1f */);
}

void func_1832()
{
	if (!__LIB_0__::func_27(Local_193[1 /*6*/].f_4, 16384))
	{
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_193[1 /*6*/], "MUD3_singing_women_group", 0f);
		__LIB_1__::func_683(&(Local_193[1 /*6*/].f_4), 16384);
	}
	if (!__LIB_0__::func_27(Local_193[2 /*6*/].f_4, 16384))
	{
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_193[2 /*6*/], "MUD3_singing_women_group", 0f);
		__LIB_1__::func_683(&(Local_193[2 /*6*/].f_4), 16384);
	}
	if (!__LIB_0__::func_27(Local_193[3 /*6*/].f_4, 16384))
	{
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_193[3 /*6*/], "MUD3_singing_women_group", 0f);
		__LIB_1__::func_683(&(Local_193[3 /*6*/].f_4), 16384);
	}
}

bool func_1835(int iParam0)
{
	if (func_1611(&Local_1179, iParam0))
	{
		return true;
	}
	return false;
}

void func_1836()
{
	if ((Local_589[0 /*9*/].f_8 == 2 || func_1835(74)) || func_167(35))
	{
		if (!__LIB_2__::func_618(&uLocal_465))
		{
			__LIB_2__::func_620(&uLocal_465, fLocal_1355);
		}
		if (__LIB_9__::func_324(&uLocal_465) < fLocal_1355)
		{
			return;
		}
		if (!__LIB_0__::func_48(Global_35, Local_589[0 /*9*/], 20f, 1) && !__LIB_0__::func_393(Global_35, iLocal_148[20], 0, 1))
		{
			return;
		}
		switch (iLocal_1354)
		{
			case 0:
				if (func_1906(67, 0))
				{
					__LIB_5__::func_107(&uLocal_465);
					fLocal_1355 = MISC::GET_RANDOM_FLOAT_IN_RANGE(5f, 10f);
					iLocal_1354 = 1;
				}
				break;
			case 1:
				if (func_1906(66, 0))
				{
					__LIB_5__::func_107(&uLocal_465);
					fLocal_1355 = MISC::GET_RANDOM_FLOAT_IN_RANGE(5f, 10f);
					iLocal_1354 = 2;
				}
				break;
			case 2:
				if (func_1906(65, 0))
				{
					__LIB_5__::func_107(&uLocal_465);
					fLocal_1355 = MISC::GET_RANDOM_FLOAT_IN_RANGE(5f, 10f);
					iLocal_1354 = 0;
				}
				break;
		}
	}
}

bool func_1837()
{
	if (!func_1840(1110704128 /* Float: 45f */))
	{
		return false;
	}
	if (iLocal_577 == 12)
	{
		return false;
	}
	if (iLocal_577 == 11)
	{
		return false;
	}
	if (iLocal_577 < 4)
	{
		return false;
	}
	if (Local_589[0 /*9*/].f_8 == 4)
	{
		return false;
	}
	if (Local_589[0 /*9*/].f_8 == 5)
	{
		return false;
	}
	if (func_167(29))
	{
		if (PED::IS_PED_IN_VEHICLE(Global_35, Local_579, false))
		{
			return false;
		}
	}
	return true;
}

void func_1839()
{
	if (func_167(71))
	{
		return;
	}
	__LIB_9__::func_327(func_421(4), 0, joaat("COLOR_OBJECTIVE"));
	func_398(71);
}

bool func_1840(float fParam0)
{
	if ((__LIB_0__::func_48(Global_35, Local_193[11 /*6*/], fParam0, 1) || __LIB_0__::func_48(Global_35, iLocal_142, fParam0, 1)) || __LIB_0__::func_48(Global_35, Local_589[0 /*9*/], fParam0, 1))
	{
		return true;
	}
	return false;
}

void func_1841(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, vector3 vParam5, char* sParam8)
{
	if (__LIB_0__::func_86(vParam5))
	{
		return;
	}
	Local_1309 = iParam0;
	Local_1309.f_6 = sParam1;
	Local_1309.f_7 = sParam2;
	Local_1309.f_8 = sParam3;
	Local_1309.f_9 = sParam4;
	Local_1309.f_11 = { vParam5 };
	Local_1309.f_10 = sParam8;
	Local_1309.f_15 = 1;
}

void func_1842(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	if (Local_1309.f_5 >= 3)
	{
		return;
	}
	if (iParam2 < 0 || iParam2 >= 60)
	{
		return;
	}
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	if (iParam0 < 0 || iParam0 > 23)
	{
		return;
	}
	__LIB_0__::func_467(&iVar0, iParam0);
	__LIB_0__::func_468(&iVar0, iParam1);
	__LIB_0__::func_469(&iVar0, iParam2);
	__LIB_11__::func_409(&iVar0);
	iVar1 = 0;
	while (iVar1 <= (Local_1309.f_5 - 1))
	{
		__LIB_11__::func_409(&(Local_1309.f_1[iVar1]));
		if (Local_1309.f_1[iVar1] == iVar0)
		{
			return;
		}
		iVar1++;
	}
	Local_1309.f_1[Local_1309.f_5] = iVar0;
	Local_1309.f_5++;
	__LIB_11__::func_402(&(Local_1309.f_1), Local_1309.f_5);
}

int func_1846(int iParam0)
{
	return Local_1193[iParam0 /*6*/];
}

void func_1849(bool bParam0)
{
	if (bParam0)
	{
		func_1931("MUD3_IG25_CHSE", 0);
		func_1931("MUD3_IG25_MEAT", 0);
		func_1931("MUD3_IG25_HARP", 0);
		func_1931("MUD3_IG25", 0);
	}
	else
	{
		__LIB_11__::func_778("MUD3_IG25_CHSE", 0);
		__LIB_11__::func_778("MUD3_IG25_MEAT", 0);
		__LIB_11__::func_778("MUD3_IG25_HARP", 0);
		__LIB_11__::func_778("MUD3_IG25", 0);
	}
}

bool func_1850(char* sParam0, bool bParam1)
{
	if (__LIB_8__::func_684(sParam0))
	{
		return true;
	}
	if (bParam1)
	{
		if (__LIB_6__::func_903(sParam0))
		{
			return true;
		}
	}
	return false;
}

void func_1852(int iParam0, int iParam1)
{
	char* sVar0;
	sVar0 = func_1442(iParam1);
	Local_1193[iParam0 /*6*/].f_1 = 0;
	Local_1193[iParam0 /*6*/].f_2 = 0;
	Local_1193[iParam0 /*6*/].f_3 = 0;
	ANIMSCENE::RESET_ANIM_SCENE(Local_1193[iParam0 /*6*/], sVar0);
}

bool func_1855(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 >= 32)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 >= 1)
	{
		return false;
	}
	iVar2 = __LIB_0__::func_771(iVar0);
	return __LIB_0__::func_1(uLocal_1165[iVar1], iVar2);
}

char* func_1856(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MUD3_H_SHOP_01";
		case 1:
			return "MUD3_H_SHOP_02";
		case 2:
			return "MUD3_H_HORSE1";
		case 3:
			return "MUD3_H_HORSE2";
		case 4:
			return "MUD3_H_HONOR_04";
		case 5:
			return "MUD3_H_HONOR_01";
		case 6:
			return "MUD3_H_HONOR_02";
		case 7:
			return "MUD3_H_HONOR_03";
		case 8:
			return "MUD3_H_AUTO";
	}
	return "";
}

int func_1857(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("MUD3_H_SHOP_01");
		case 1:
			return joaat("MUD3_H_SHOP_02");
		case 2:
			return joaat("MUD3_H_HORSE1");
		case 3:
			return joaat("MUD3_H_HORSE2");
		case 4:
			return joaat("MUD3_H_HONOR_04");
		case 5:
			return joaat("MUD3_H_HONOR_01");
		case 6:
			return joaat("MUD3_H_HONOR_02");
		case 7:
			return joaat("MUD3_H_HONOR_03");
		case 8:
			return joaat("MUD3_H_AUTO");
		default:
			break;
	}
	return 0;
}

void func_1860(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 >= 32)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 >= 1)
	{
		return;
	}
	iVar2 = __LIB_0__::func_771(iVar0);
	__LIB_1__::func_336(&(uLocal_1165[iVar1]), iVar2);
}

void func_1862(var uParam0)
{
	float fVar0;
	float fVar1;
	if ((!__LIB_0__::func_272(*uParam0, 9) || func_2374(uParam0)) || iLocal_577 == 11)
	{
		func_1870(uParam0, 5, 0);
	}
	else if (PED::_0xF103823FFE72BB49(*uParam0) == Global_35)
	{
		PED::_0xBCC76708E5677E1D(*uParam0, 0);
	}
	if (uParam0->f_8 >= 1)
	{
		if (!__LIB_0__::func_48(*uParam0, iLocal_142, 4f, 1))
		{
			if (!__LIB_11__::func_398(uParam0, 2))
			{
				func_1528(uParam0, 2);
			}
		}
	}
	if (uParam0->f_8 >= 1 && uParam0->f_8 != 5)
	{
		if (TASK::GET_IS_TASK_ACTIVE(*uParam0, 9) && TASK::GET_IS_TASK_ACTIVE(Global_35, 8))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPRINT"), false);
		}
	}
	switch (uParam0->f_8)
	{
		case 0:
			break;
		case 1:
			fVar0 = 4f;
			if (uParam0->f_6 == 0)
			{
				fVar0 = (4f * 2f);
			}
			if (!__LIB_0__::func_48(*uParam0, iLocal_142, fVar0, 1) || !TASK::_0x9FF5F9B24E870748(*uParam0))
			{
				func_1870(uParam0, 2, 0);
			}
			else
			{
				Jump @624; //curOff = 278
				if (__LIB_9__::func_324(&(uParam0->f_3)) > 4f)
				{
					if (uParam0->f_6 == 0)
					{
						fVar1 = __LIB_0__::func_665(*uParam0, iLocal_142, 1, 1);
						if (fVar1 > uParam0->f_2)
						{
							uParam0->f_2 = fVar1;
						}
						if (uParam0->f_2 > (8f * 1.5f))
						{
							if (__LIB_0__::func_266(*uParam0, func_1893(), 8f, 1, 1))
							{
								if (!__LIB_0__::func_394(Global_35, *uParam0, 0))
								{
									func_1870(uParam0, 4, 0);
								}
								else
								{
									Jump @419; //curOff = 397
									if (iLocal_577 == 10)
									{
										func_1870(uParam0, 4, 0);
									}
									else
									{
										if (uParam0->f_6 == 0)
										{
											if (__LIB_0__::func_394(Global_35, *uParam0, 0))
											{
												__LIB_11__::func_425(Global_35, func_1893(), &uLocal_145, 1112014848 /* Float: 50f */, 1106247680 /* Float: 30f */, 1097859072 /* Float: 15f */, (8f * 0.8f), 1f, 0, 0, 1, 1, 1);
											}
											func_2376(uParam0);
										}
										Jump @624; //curOff = 493
										if (!TASK::_0x9FF5F9B24E870748(*uParam0))
										{
											if (!TASK::GET_IS_TASK_ACTIVE(*uParam0, 10))
											{
												TASK::_TASK_START_SCENARIO_IN_PLACE(*uParam0, joaat("WORLD_ANIMAL_HORSE_GRAZING_CAMP"), -1, true, 0, -1f, false);
											}
										}
										Jump @624; //curOff = 541
										if (uParam0->f_6 == 1)
										{
											if (__LIB_0__::func_272(*uParam0, 9))
											{
												if (!__LIB_0__::func_272(Local_193[11 /*6*/], 0))
												{
													if (!PED::IS_PED_FLEEING(*uParam0))
													{
														TASK::TASK_SMART_FLEE_PED(*uParam0, Global_35, 1000f, -1, 0, 3f, 0);
														PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, false);
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			default:
				break;
	}
}

bool func_1863(var uParam0)
{
	bool bVar0;
	if (func_1875(uParam0, 0, 0))
	{
		return true;
	}
	bVar0 = __LIB_2__::func_470();
	if (bVar0)
	{
		if (__LIB_2__::func_401(*uParam0, 1, 0, 0, 0, 0))
		{
			return true;
		}
	}
	if (PED::_0x29FCE825613FEFCA(*uParam0, 1000))
	{
		return true;
	}
	return false;
}

bool func_1864()
{
	if ((((func_1297(73, 1) || func_1297(82, 1)) || func_1297(74, 1)) || func_1297(75, 1)) || func_1297(64, 1))
	{
		return true;
	}
	return false;
}

void func_1865()
{
	bool bVar0;
	bVar0 = false;
	if (iLocal_577 == 11)
	{
		return;
	}
	if (!__LIB_0__::func_48(Global_35, iLocal_142, 12f, 1))
	{
		return;
	}
	if (Local_589[0 /*9*/].f_8 == 5)
	{
		return;
	}
	if (__LIB_0__::func_394(Global_35, Local_589[0 /*9*/], 0))
	{
		return;
	}
	if (Local_589[0 /*9*/].f_8 == 2)
	{
		if (bLocal_118)
		{
			if (__LIB_0__::func_48(Global_35, Local_589[0 /*9*/], 5f, 1))
			{
				bVar0 = true;
			}
		}
	}
	if (Local_589[0 /*9*/].f_8 == 4)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
	}
}

void func_1866()
{
	int iVar0;
	iVar0 = -1;
	if (iLocal_1353 != 3)
	{
		if (func_2379())
		{
			func_1305(3);
		}
	}
	switch (iLocal_1353)
	{
		case 0:
			if (!func_2380())
			{
			}
			else if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
			{
			}
			else
			{
				func_1293(90, 0);
				if (func_972(90) != 3)
				{
				}
				else
				{
					if (__LIB_0__::func_48(Global_35, Local_193[11 /*6*/], 12.5f, 1))
					{
						if (__LIB_1__::func_472(Local_193[11 /*6*/], 1116471296 /* Float: 70f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 75f))
						{
							func_1293(64, 0);
						}
					}
					if (func_972(64) == 3)
					{
						func_1305(1);
					}
					else
					{
						Jump @343; //curOff = 187
						if (func_972(73) == 3)
						{
							func_1305(2);
						}
						else
						{
							func_2382(73);
							Jump @343; //curOff = 214
							iVar0 = func_2383(&(Local_193[11 /*6*/]), &iLocal_832, 10f, &Local_797, 0.1f, 3, 0, "MUD3_C_DRIVER", 17, 0, 0, 2, -1082130432 /* Float: -1f */);
							if (iVar0 != -1)
							{
								if (iVar0 == 0)
								{
									func_1293(74, 0);
								}
								else
								{
									func_1293(75, 0);
								}
								func_1305(3);
							}
							else
							{
								if (!__LIB_2__::func_618(&uLocal_1345))
								{
									__LIB_5__::func_107(&uLocal_1345);
								}
								if (__LIB_14__::func_171(&uLocal_1345) > 4000)
								{
									func_2382(82);
								}
							}
						}
					}
				}
			}
			default:
				break;
	}
}

int func_1867()
{
	if (__LIB_2__::func_269(iLocal_142, 150f))
	{
		return 1;
	}
	if (__LIB_0__::func_266(Local_579, vLocal_129, 170f, 1, 1))
	{
		return 2;
	}
	return 0;
}

void func_1868()
{
	float fVar0;
	vector3 vVar1;
	float fVar4;
	float fVar5;
	vector3 vVar6;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	bool bVar13;
	float fVar14;
	float fVar15;
	vector3 vVar16;
	float fVar19;
	fVar0 = 0f;
	vVar1 = { vLocal_129 };
	fVar4 = __LIB_0__::func_94(Local_579, vVar1, 1);
	fVar5 = ENTITY::GET_ENTITY_SPEED(Local_579);
	if (fVar5 > 0f)
	{
		fVar0 = (fVar4 / fVar5);
	}
	vVar6 = { -59.23f, 369.07f, 112.99f };
	fVar9 = __LIB_0__::func_94(iLocal_142, vVar6, 1);
	fVar10 = 0f;
	fLocal_110 = fVar9;
	fLocal_111 = fVar4;
	if (fVar0 > 0f)
	{
		fVar10 = (fVar9 / fVar0);
	}
	fVar11 = __LIB_0__::func_251((fVar9 / 40f), 0f, 1f);
	fVar11 = (1f - fVar11);
	fVar12 = 0.5f;
	bVar13 = false;
	if (__LIB_1__::func_472(Local_193[11 /*6*/], 150f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */))
	{
		bVar13 = true;
	}
	else if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_142) && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_142))
	{
		bVar13 = true;
	}
	if (bVar13)
	{
		fVar12 = 1f;
	}
	fVar14 = (fVar12 + (fVar11 * (6f - fVar12)));
	if (__LIB_3__::func_547(Local_579, iLocal_142, 0f) == 0)
	{
		if (__LIB_0__::func_48(Local_579, iLocal_142, 18f, 1))
		{
			fVar15 = 4f;
			if (fVar5 > 0f)
			{
				fVar15 = (fVar15 + fVar5);
			}
			if (fVar15 > fVar14)
			{
				fVar14 = fVar15;
			}
			if (fVar14 > 8f)
			{
				fVar14 = 8f;
			}
		}
		else
		{
			vVar16 = { func_2386(3, &Global_35) };
			if (__LIB_0__::func_266(Local_579, vVar16, 25f, 1, 1))
			{
				fVar14 = 4f;
			}
		}
	}
	fVar19 = 0.1f;
	if (fVar10 < fVar14)
	{
		fVar10 = fVar14;
	}
	if (__LIB_0__::func_393(iLocal_142, iLocal_148[19], 0, 1) || fLocal_110 < 40f)
	{
		func_398(70);
		func_1293(71, 0);
		fVar10 = 11f;
	}
	if (func_167(70))
	{
		fVar19 = 1f;
	}
	if (fLocal_116 < fVar10)
	{
		fLocal_116 = (fLocal_116 + fVar19);
		if (fLocal_116 > fVar10)
		{
			fLocal_116 = fVar10;
		}
	}
	else if (fLocal_116 > fVar10)
	{
		fLocal_116 = (fLocal_116 - fVar19);
		if (fLocal_116 < fVar10)
		{
			fLocal_116 = fVar10;
		}
	}
	VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iLocal_142, fLocal_116);
	if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_142, 0))
	{
		TASK::VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_142, fLocal_116);
	}
}

void func_1869()
{
	if (!PED::_0x5102307CE88798EB(Local_193[11 /*6*/]))
	{
		PED::REQUEST_PED_VISIBILITY_TRACKING(Local_193[11 /*6*/]);
	}
	if (!func_1840(1110704128 /* Float: 45f */))
	{
		if ((!__LIB_1__::func_472(Local_193[11 /*6*/], 70f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */) && !__LIB_2__::func_269(iLocal_142, 70f)) && !__LIB_0__::func_266(Global_35, vLocal_129, 45f, 1, 1))
		{
			func_2387(7, "b_enableAudio", 0);
			if (__LIB_8__::func_684("MUD3_IG22_A"))
			{
				__LIB_6__::func_900("MUD3_IG22_A", 1, 0);
			}
		}
	}
}

void func_1870(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	if (uParam0->f_8 == iParam1 && !bParam2)
	{
		return;
	}
	if (!__LIB_0__::func_272(*uParam0, 9))
	{
		iParam1 = 5;
	}
	uParam0->f_8 = iParam1;
	switch (uParam0->f_8)
	{
		case 0:
			break;
		case 1:
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(*uParam0, true);
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(*uParam0, iLocal_142, false);
			VEHICLE::_0xB36D3EC70963BE60(iLocal_142, *uParam0);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 471, true);
			TASK::CLEAR_PED_TASKS(*uParam0, true, false);
			if (uParam0->f_6 == 0)
			{
				MISC::_0x870708A6E147A9AD(*uParam0, "", 20f, 20f, 0, 0, 0, 0, 0, -1);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 300, true);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 130, true);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 297, true);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 315, true);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 478, true);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 479, true);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 442, true);
				PED::SET_PED_CAN_BE_TARGETTED(*uParam0, true);
				ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(*uParam0, true, 0f);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 196, true);
				vVar4 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(*uParam0) };
				vVar4 = { __LIB_3__::func_509(vVar4, -30f) };
				vVar1 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) };
				vVar1 = { vVar1 + vVar4 * Vector(14f, 14f, 14f) };
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar1, 2.5f, 20000, 3f, 6291457, 40000f);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(*uParam0, iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			}
			else
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*uParam0, -105.5004f, 412.4219f, 112.7423f, 2.5f, 20000, 1f, 0, 40000f);
			}
			PED::FORCE_PED_MOTION_STATE(*uParam0, joaat("MOTIONSTATE_SPRINT"), false, 0, false);
			PED::_0x2208438012482A1A(*uParam0, false, false);
			break;
		case 2:
			__LIB_5__::func_107(&(uParam0->f_3));
			if (uParam0->f_6 == 0)
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -75.2223f, 440.5633f, 111.5806f, 2.5f, -1, 5f, 6291457, 40000f);
				TASK::TASK_WANDER_IN_VOLUME(0, iLocal_148[20], 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */, 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(*uParam0, iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				PHYSICS::_0x6EA0E93CFFA472CC(*uParam0);
				PED::_0xC9151483CC06A414(*uParam0);
				PED::_0x2EB75FB86C41F026(*uParam0, 3, 1);
				PED::_0x06D26A96CA1BCA75(*uParam0, 3, 1f, Global_35);
				__LIB_1__::func_488(*uParam0, 1, 1);
			}
			else
			{
				AITRANSPORT::_0xBA8818212633500A(*uParam0, 0, 1);
			}
			break;
		case 3:
			TASK::CLEAR_PED_TASKS(*uParam0, true, false);
			TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(*uParam0, Local_193[11 /*6*/], 0f, -3f, 0f, 1f, -1, 3f, 0, 1, 1, 0, 1);
			break;
		case 4:
			if (uParam0->f_6 == 0)
			{
				if (PED::_IS_PED_LASSOED(*uParam0))
				{
					func_398(75);
				}
				if (!func_167(16))
				{
					if (func_167(75))
					{
						__LIB_4__::func_467(12, -1069072753, 0, "MUD3_HG_COACH", Local_193[11 /*6*/], 0, 1065353216 /* Float: 1f */, 0);
						iLocal_621 = 12;
					}
					else
					{
						__LIB_4__::func_467(13, -1069072753, 0, "MUD3_HG_COACH", Local_193[11 /*6*/], 0, 1065353216 /* Float: 1f */, 0);
						iLocal_621 = 13;
					}
					func_398(38);
					func_398(16);
				}
				fLocal_108 = 0f;
				PED::_0x06D26A96CA1BCA75(*uParam0, 3, fLocal_108, Global_35);
				PED::_0x06D26A96CA1BCA75(*uParam0, 2, fLocal_108, Global_35);
				PED::_0x06D26A96CA1BCA75(*uParam0, 1, fLocal_108, Global_35);
				PED::_0x2EB75FB86C41F026(*uParam0, 3, 0);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 196, false);
			}
			PED::SET_PED_CONFIG_FLAG(*uParam0, 300, true);
			AITRANSPORT::_0xBA8818212633500A(*uParam0, 0, 1);
			if (uParam0->f_6 == 0)
			{
				if (TASK::GET_IS_TASK_ACTIVE(Global_35, 8))
				{
					TASK::_0xED27560703F37258(Global_35);
				}
				else
				{
					TASK::CLEAR_PED_TASKS(Global_35, true, false);
				}
				func_2390(uParam0);
			}
			else
			{
				TASK::CLEAR_PED_TASKS(*uParam0, true, false);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_STAND_STILL(0, 4000);
				TASK::_TASK_START_SCENARIO_IN_PLACE(0, joaat("WORLD_ANIMAL_HORSE_GRAZING_CAMP"), -1, true, 0, -1f, false);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(*uParam0, iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			}
			break;
		case 5:
			if (__LIB_0__::func_272(*uParam0, 9))
			{
				TASK::CLEAR_PED_TASKS(*uParam0, true, false);
				if (uParam0->f_6 == 0 || !__LIB_0__::func_272(Local_193[11 /*6*/], 0))
				{
					TASK::TASK_SMART_FLEE_PED(*uParam0, Global_35, 1000f, -1, 0, 3f, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, false);
				}
				func_1528(uParam0, 1);
				if (uParam0->f_6 == 0)
				{
					MISC::_0xE98D55C5983F2509(*uParam0);
				}
			}
			if (func_2391(uParam0))
			{
				func_1528(uParam0, 1);
			}
			break;
	}
}

bool func_1871(int iParam0, char* sParam1)
{
	if (func_1389(iParam0))
	{
		return true;
	}
	return ANIMSCENE::_0x8D81E7824B7753F7(Local_1193[iParam0 /*6*/], sParam1, 1);
}

int func_1872()
{
	int iVar0;
	iVar0 = __LIB_3__::func_547(Local_193[11 /*6*/], Global_35, 1060437492 /* Float: 0.707f */);
	switch (iVar0)
	{
		case 1:
			return 41;
		case 2:
			return 44;
		case 3:
			return 43;
		default:
			break;
	}
	return 42;
}

bool func_1873(int iParam0, int iParam1, bool bParam2)
{
	char* sVar0;
	sVar0 = func_1442(iParam1);
	if (ANIMSCENE::_0x1F0E401031E20146(Local_1193[iParam0 /*6*/], sVar0))
	{
		Local_1193[iParam0 /*6*/].f_5 = iParam1;
		return true;
	}
	if (!func_2392(iParam0, iParam1))
	{
		return false;
	}
	if (!bParam2)
	{
		if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_1193[iParam0 /*6*/]) < 0.99f)
		{
			return false;
		}
	}
	ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_1193[iParam0 /*6*/], sVar0, true);
	Local_1193[iParam0 /*6*/].f_5 = iParam1;
	return true;
}

void func_1874(var uParam0)
{
	bool bVar0;
	int iVar1;
	if (func_167(35) || bLocal_118)
	{
		__LIB_2__::func_608(&uLocal_1348);
		return;
	}
	if (!__LIB_0__::func_48(Global_35, *uParam0, 10f, 1))
	{
		if (!__LIB_2__::func_611(&uLocal_1348))
		{
			__LIB_13__::func_552(&uLocal_1348);
		}
	}
	bVar0 = false;
	if (func_972(74) == 3)
	{
		bVar0 = true;
	}
	else if (func_972(75) == 3)
	{
		bVar0 = false;
	}
	else
	{
		__LIB_2__::func_608(&uLocal_1348);
		return;
	}
	if (!__LIB_2__::func_618(&uLocal_1348))
	{
		__LIB_5__::func_107(&uLocal_1348);
	}
	if (__LIB_9__::func_324(&uLocal_1348) > 6f)
	{
		iVar1 = 85;
		if (bVar0)
		{
			iVar1 = 84;
		}
		else
		{
			iVar1 = 85;
		}
		if (func_1906(iVar1, 0))
		{
			__LIB_2__::func_608(&uLocal_1348);
			return;
		}
	}
}

bool func_1875(int iParam0, bool bParam1, bool bParam2)
{
	struct<28> Var0;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		if (func_2142(iParam0))
		{
			return true;
		}
	}
	if (!__LIB_0__::func_272(*iParam0, 75))
	{
		return true;
	}
	if (func_2393(iParam0))
	{
		return true;
	}
	if (PED::IS_PED_HUMAN(*iParam0))
	{
		if (PED::_IS_PED_LASSOED(*iParam0))
		{
			return true;
		}
	}
	if (bParam1)
	{
		if (__LIB_4__::func_172(*iParam0, 0, 0, 0, 1))
		{
			return true;
		}
	}
	if (bParam2)
	{
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
		if (__LIB_2__::func_875(Global_35, *iParam0, &Var0))
		{
			return true;
		}
	}
	return false;
}

void func_1876()
{
	if (!func_167(12))
	{
		return;
	}
	if (!func_167(57))
	{
		return;
	}
	if ((iLocal_577 != 11 && iLocal_577 != 12) && Local_589[0 /*9*/].f_8 != 4)
	{
		if (!__LIB_0__::func_48(Global_35, Local_193[11 /*6*/], 45f, 1) && !__LIB_0__::func_48(Global_35, iLocal_142, 45f, 1))
		{
			__LIB_2__::func_608(&uLocal_435);
			return;
		}
		if (!__LIB_2__::func_343(Global_35, Local_579, 0))
		{
			__LIB_2__::func_608(&uLocal_435);
			return;
		}
		if (!VEHICLE::IS_VEHICLE_STOPPED(Local_579))
		{
			__LIB_2__::func_608(&uLocal_435);
			return;
		}
		if (!__LIB_2__::func_618(&uLocal_435))
		{
			__LIB_5__::func_107(&uLocal_435);
		}
		if (__LIB_9__::func_324(&uLocal_435) > 6f)
		{
			if (func_972(5) == 0)
			{
				__LIB_2__::func_608(&uLocal_435);
				func_1293(5, 0);
				return;
			}
			if (func_972(6) == 0)
			{
				__LIB_2__::func_608(&uLocal_435);
				func_1293(6, 0);
				return;
			}
			if (func_972(7) == 0)
			{
				__LIB_2__::func_608(&uLocal_435);
				func_1293(7, 0);
				return;
			}
		}
	}
}

void func_1877()
{
	if (func_167(25))
	{
		return;
	}
	if (iLocal_577 != 11 && Local_589[0 /*9*/].f_8 == 4)
	{
		if (__LIB_2__::func_343(Global_35, Local_579, 0))
		{
			__LIB_2__::func_608(&uLocal_438);
			func_398(25);
			return;
		}
		if (!__LIB_0__::func_48(Global_35, Local_579, 7.5f, 1))
		{
			__LIB_2__::func_608(&uLocal_438);
			return;
		}
		if (!func_1389(10))
		{
			__LIB_2__::func_608(&uLocal_438);
			return;
		}
		if (func_1325(12, 51) || func_1325(12, 52))
		{
			__LIB_2__::func_608(&uLocal_438);
			return;
		}
		if (!__LIB_2__::func_618(&uLocal_438))
		{
			__LIB_5__::func_107(&uLocal_438);
		}
		if (__LIB_9__::func_324(&uLocal_438) > 7.5f)
		{
			if (func_1906(8, 0))
			{
				__LIB_2__::func_608(&uLocal_438);
				return;
			}
		}
	}
}

bool func_1878(bool bParam0)
{
	if (bParam0)
	{
		if (ENTITY::IS_ENTITY_IN_AIR(Local_579, 1))
		{
			return true;
		}
	}
	if (!func_167(61))
	{
		return false;
	}
	if (!__LIB_2__::func_343(Local_193[0 /*6*/], Local_579, 1))
	{
		return true;
	}
	if (!__LIB_2__::func_343(Local_193[1 /*6*/], Local_579, 1))
	{
		return true;
	}
	if (!__LIB_2__::func_343(Local_193[2 /*6*/], Local_579, 1))
	{
		return true;
	}
	if (!__LIB_2__::func_343(Local_193[3 /*6*/], Local_579, 1))
	{
		return true;
	}
	return false;
}

int func_1879(int iParam0, bool bParam1)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1193[iParam0 /*6*/]))
	{
		return 0;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_1193[iParam0 /*6*/], false))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_PAUSED(Local_1193[iParam0 /*6*/]))
		{
			ANIMSCENE::SET_ANIM_SCENE_PAUSED(Local_1193[iParam0 /*6*/], true);
			return 1;
		}
	}
	else if (ANIMSCENE::_IS_ANIM_SCENE_PAUSED(Local_1193[iParam0 /*6*/]))
	{
		ANIMSCENE::SET_ANIM_SCENE_PAUSED(Local_1193[iParam0 /*6*/], false);
		return 1;
	}
	return 0;
}

void func_1880(int iParam0)
{
	if (iLocal_1351 == iParam0)
	{
		return;
	}
	if (iLocal_63 > 0)
	{
		iParam0 = 6;
	}
	iLocal_1351 = iParam0;
	switch (iLocal_1351)
	{
		case 0:
			break;
		case 1:
			break;
		case 2:
			func_1852(11, 87);
			break;
		case 3:
			func_1852(11, 87);
			break;
		case 4:
			func_1852(11, 87);
			break;
		case 5:
			func_1852(11, 87);
			break;
		case 6:
			break;
	}
}

void func_1881(int iParam0)
{
	int iVar0;
	iVar0 = 11;
	if (!func_1911(iVar0, iParam0))
	{
		return;
	}
	if (!func_1912(iVar0))
	{
		return;
	}
	if (!Local_1193[iVar0 /*6*/].f_2)
	{
		if (__LIB_0__::func_272(Local_193[1 /*6*/], 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1193[iVar0 /*6*/], "CS_Karen", Local_193[1 /*6*/], 0);
		}
		if (__LIB_0__::func_272(Local_193[2 /*6*/], 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1193[iVar0 /*6*/], "CS_MaryBeth", Local_193[2 /*6*/], 0);
		}
		if (__LIB_0__::func_272(Local_193[3 /*6*/], 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1193[iVar0 /*6*/], "CS_Tilly", Local_193[3 /*6*/], 0);
		}
		if (__LIB_0__::func_272(Local_193[0 /*6*/], 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1193[iVar0 /*6*/], "CS_Uncle", Local_193[0 /*6*/], 0);
		}
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_1193[iVar0 /*6*/], false) && !ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_1193[iVar0 /*6*/], false))
	{
		ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(Local_1193[iVar0 /*6*/], Local_579, 0);
		func_1873(iVar0, iParam0, 1);
		ANIMSCENE::START_ANIM_SCENE(Local_1193[iVar0 /*6*/]);
		Local_1193[iVar0 /*6*/].f_2 = 1;
	}
}

bool func_1882(int iParam0)
{
	if (Local_1193[iParam0 /*6*/].f_3)
	{
		return true;
	}
	if (func_1912(iParam0))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_1193[iParam0 /*6*/], false))
		{
			Local_1193[iParam0 /*6*/].f_3 = 1;
			return true;
		}
	}
	return false;
}

void func_1883(var uParam0)
{
	if (func_427(uParam0) == 1)
	{
		if (iLocal_63 >= 14 && iLocal_63 <= 19)
		{
			if (!__LIB_2__::func_618(&uLocal_510))
			{
				__LIB_5__::func_107(&uLocal_510);
			}
			if (__LIB_14__::func_171(&uLocal_510) > 1000)
			{
				if (func_1293(9, 0) == 3)
				{
					if (func_972(11) == 3)
					{
						func_1293(12, 0);
					}
				}
			}
		}
	}
}

void func_1884(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (func_1882(iParam0))
		{
			if (func_1389(iParam0))
			{
				func_1852(iParam0, 87);
			}
		}
	}
	if (!func_1911(iParam0, iParam1))
	{
		return;
	}
	if (!func_1912(iParam0))
	{
		return;
	}
	if (!Local_1193[iParam0 /*6*/].f_2)
	{
		if (iParam0 == 9)
		{
			if (__LIB_0__::func_272(Local_193[1 /*6*/], 1))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1193[iParam0 /*6*/], "CS_Karen", Local_193[1 /*6*/], 0);
			}
			if (__LIB_0__::func_272(Local_193[3 /*6*/], 1))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1193[iParam0 /*6*/], "CS_Tilly", Local_193[3 /*6*/], 0);
			}
			if (__LIB_0__::func_272(Local_193[0 /*6*/], 1))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1193[iParam0 /*6*/], "CS_Uncle", Local_193[0 /*6*/], 0);
			}
		}
		else if (iParam0 == 8)
		{
			if (__LIB_0__::func_272(Local_193[2 /*6*/], 1))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1193[iParam0 /*6*/], "CS_MaryBeth", Local_193[2 /*6*/], 0);
			}
		}
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_1193[iParam0 /*6*/], false))
	{
		ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(Local_1193[iParam0 /*6*/], Local_579, 0);
		func_1873(iParam0, iParam1, 1);
		ANIMSCENE::START_ANIM_SCENE(Local_1193[iParam0 /*6*/]);
		Local_1193[iParam0 /*6*/].f_2 = 1;
	}
	else
	{
		func_1873(iParam0, iParam1, 1);
	}
}

void func_1885()
{
	int iVar0;
	func_1911(9, 30);
	func_1911(9, 31);
	func_1911(9, 32);
	func_1911(9, 33);
	func_1911(8, 20);
	func_1911(8, 21);
	func_1911(8, 22);
	func_1911(8, 23);
	if (PED::IS_PED_IN_VEHICLE(Global_35, Local_579, true))
	{
		if (iLocal_63 != 6)
		{
			func_1294(11);
		}
		return;
	}
	iVar0 = __LIB_3__::func_547(Local_579, Global_35, 1060437492 /* Float: 0.707f */);
	switch (iVar0)
	{
		case 0:
			func_1294(8);
			break;
		case 1:
			func_1294(7);
			break;
		case 2:
			func_1294(10);
			break;
		case 3:
			func_1294(9);
			break;
	}
}

bool func_1886()
{
	int iVar0;
	iVar0 = func_972(8);
	if (iVar0 == 3 || iVar0 == 0)
	{
		return true;
	}
	if (iVar0 == 9)
	{
		func_2396(8, 0);
		return true;
	}
	return false;
}

void func_1887()
{
	if (__LIB_8__::func_684("MUD3_IG23"))
	{
		__LIB_6__::func_900("MUD3_IG23", 1, 0);
	}
	func_163(3, 1, 0);
	func_398(58);
}

void func_1888(int iParam0)
{
	int iVar0;
	iVar0 = 12;
	if (!func_1911(iVar0, iParam0))
	{
		return;
	}
	if (!func_1912(iVar0))
	{
		return;
	}
	if (!Local_1193[iVar0 /*6*/].f_2)
	{
		if (__LIB_0__::func_272(Local_193[1 /*6*/], 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1193[iVar0 /*6*/], "CS_Karen", Local_193[1 /*6*/], 0);
		}
		if (__LIB_0__::func_272(Local_193[2 /*6*/], 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1193[iVar0 /*6*/], "CS_MaryBeth", Local_193[2 /*6*/], 0);
		}
		if (__LIB_0__::func_272(Local_193[3 /*6*/], 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1193[iVar0 /*6*/], "CS_Tilly", Local_193[3 /*6*/], 0);
		}
		if (__LIB_0__::func_272(Local_193[0 /*6*/], 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1193[iVar0 /*6*/], "CS_Uncle", Local_193[0 /*6*/], 0);
		}
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_1193[iVar0 /*6*/], false) && !ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_1193[iVar0 /*6*/], false))
	{
		ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(Local_1193[iVar0 /*6*/], Local_579, 0);
		func_1873(iVar0, iParam0, 1);
		ANIMSCENE::START_ANIM_SCENE(Local_1193[iVar0 /*6*/]);
		Local_1193[iVar0 /*6*/].f_2 = 1;
	}
}

void func_1889(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return;
	}
	__LIB_12__::func_973(uParam0, 1);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 413, true);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 330, true);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 315, true);
}

void func_1892()
{
	int iVar0;
	iVar0 = 7;
	if (Local_1193[iVar0 /*6*/].f_2 == 1)
	{
		return;
	}
	if (!func_1912(iVar0))
	{
		return;
	}
	if (!Local_1193[iVar0 /*6*/].f_2)
	{
		if (__LIB_0__::func_272(Local_193[11 /*6*/], 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1193[iVar0 /*6*/], "MSP_MUDTOWN3_MALES_01", Local_193[11 /*6*/], 0);
		}
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_1193[iVar0 /*6*/], false))
	{
		ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(Local_1193[iVar0 /*6*/], iLocal_142, 0);
		ANIMSCENE::START_ANIM_SCENE(Local_1193[iVar0 /*6*/]);
		Local_1193[iVar0 /*6*/].f_2 = 1;
	}
}

Vector3 func_1893()
{
	return ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_142, -1.32461f, 3.24184f, 0f);
}

float func_1894()
{
	return (ENTITY::GET_ENTITY_HEADING(iLocal_142) - 90f);
}

void func_1895()
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	iVar0 = 10;
	if (!func_1912(iVar0))
	{
		return;
	}
	if (!Local_1193[iVar0 /*6*/].f_2)
	{
		if (__LIB_0__::func_272(Global_35, 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1193[iVar0 /*6*/], "player_zero", Global_35, 0);
		}
		if (__LIB_0__::func_272(Local_193[11 /*6*/], 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1193[iVar0 /*6*/], "MSP_MUDTOWN3_MALES_01", Local_193[11 /*6*/], 0);
		}
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_1193[iVar0 /*6*/], false))
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(Local_193[11 /*6*/], true, false) };
		vVar4 = { ENTITY::GET_ENTITY_ROTATION(Local_193[11 /*6*/], 2) };
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_1193[iVar0 /*6*/], vVar1, vVar4, 2);
		ANIMSCENE::START_ANIM_SCENE(Local_1193[iVar0 /*6*/]);
		Local_1193[iVar0 /*6*/].f_2 = 1;
	}
}

void func_1899()
{
	struct<7> Var0;
	Var0.f_1 = 1050253722;
	Var0.f_2 = 1067030938;
	Var0.f_5 = -1082130432;
	Var0.f_6 = -1082130432;
	Var0 = 0;
	Var0.f_3 = 0;
	__LIB_11__::func_408(Global_35, Local_193[0 /*6*/], &Var0, -1, 1, 0);
}

void func_1901()
{
	int iVar0;
	iVar0 = 6;
	if (!func_1912(iVar0))
	{
		return;
	}
	if (!Local_1193[iVar0 /*6*/].f_2)
	{
		if (__LIB_0__::func_272(Global_35, 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1193[iVar0 /*6*/], "player_zero", Global_35, 0);
		}
		if (__LIB_0__::func_272(Local_193[0 /*6*/], 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1193[iVar0 /*6*/], "CS_Uncle", Local_193[0 /*6*/], 0);
		}
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_1193[iVar0 /*6*/], false))
	{
		ANIMSCENE::START_ANIM_SCENE(Local_1193[iVar0 /*6*/]);
		Local_1193[iVar0 /*6*/].f_2 = 1;
	}
}

int func_1903(float fParam0)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	func_168(66);
	vVar0 = { func_1401(0, 0) };
	fVar3 = __LIB_0__::func_94(Global_35, vVar0, 1);
	if (fVar3 < fLocal_112)
	{
		fLocal_112 = fVar3;
		func_398(66);
		return 1;
	}
	fVar4 = MISC::ABSF((fVar3 - fLocal_112));
	if (fVar4 <= fParam0)
	{
		func_398(66);
		return 1;
	}
	if (func_1907(0, &(Local_193[0 /*6*/]), 1f))
	{
		func_398(66);
		return 1;
	}
	return 0;
}

void func_1904()
{
	if (func_1320(6, 0))
	{
		iLocal_1357 = 2;
	}
	switch (iLocal_1357)
	{
		case 0:
			if (func_2404())
			{
				if (!__LIB_2__::func_618(&uLocal_507))
				{
					__LIB_5__::func_107(&uLocal_507);
				}
			}
			else
			{
				__LIB_2__::func_608(&uLocal_507);
			}
			if (__LIB_9__::func_324(&uLocal_507) > 6f)
			{
				func_2405(6, 1);
				fLocal_113 = fLocal_112;
				iLocal_1357 = 1;
			}
			else
			{
				func_2405(6, 0);
				Jump @164; //curOff = 117
				if (func_2406() && !func_1297(14, 1))
				{
					__LIB_2__::func_608(&uLocal_507);
					func_2405(6, 0);
					iLocal_1357 = 0;
				}
			}
			default:
				break;
	}
}

bool func_1905(int iParam0)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1193[iParam0 /*6*/]))
	{
		return true;
	}
	if (ANIMSCENE::_0x34A0671BE613D3D0(Local_1193[iParam0 /*6*/]) || ANIMSCENE::_0x9AAE3C1148A09BCA(Local_1193[iParam0 /*6*/]))
	{
		return true;
	}
	return false;
}

bool func_1906(int iParam0, bool bParam1)
{
	if (func_1293(iParam0, bParam1) == 3)
	{
		if (func_2396(iParam0, 1))
		{
			return true;
		}
	}
	return false;
}

bool func_1907(int iParam0, var uParam1, float fParam2)
{
	vector3 vVar0;
	char* sVar3;
	int iVar4;
	int iVar5;
	vVar0 = { ENTITY::GET_ENTITY_COORDS(*uParam1, true, false) };
	sVar3 = func_421(iParam0);
	iVar4 = -1;
	iVar5 = -1;
	if (TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sVar3, Global_36, &iVar4) && TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sVar3, vVar0, &iVar5))
	{
		if (iVar4 > iVar5)
		{
			if (!__LIB_0__::func_48(Global_35, *uParam1, fParam2, 1))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_1911(int iParam0, int iParam1)
{
	int iVar0;
	if (!func_2407(iParam0, iParam1, 0))
	{
		return false;
	}
	iVar0 = 1;
	if (!func_2392(iParam0, iParam1))
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_1912(int iParam0)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1193[iParam0 /*6*/]))
	{
		return false;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_1193[iParam0 /*6*/], true, false))
	{
		return false;
	}
	return true;
}

char* func_1914(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "MUD3_H_BUY";
		case 2:
			return "MUD3_O_RIDE";
		case 4:
			return "MUD3_O_STORE";
		case 8:
			return "MUD3_O_BUY";
		case 16:
			return "MUD3_O_LEAVE";
		case 2048:
			return "MUD3_O_BROWSE";
		case 4194304:
			return "MUD3_O_LEAVE02";
		case 32:
			return "MUD3_O_TILLY";
		case 64:
			return "MUD3_O_SEARCH";
		case 128:
			return "MUD3_O_FIGHT";
		case 256:
			return "MUD3_O_KAREN";
		case 512:
			return "MUD3_O_CHA";
		case 1024:
			return "MUD3_O_HELP";
		case 4096:
			return "MUD3_O_HOTEL";
		case 8192:
			return "MUD3_O_HORSE";
		case 16384:
			return "MUD3_O_RET";
		case 32768:
			return "MUD3_O_WAGON";
		case 8388608:
			return "MUD3_O_WAGON";
		case 65536:
			return "MUD3_O_SPEAK";
		case 131072:
			return "MUD3_O_LEAD";
		case 262144:
			return "MUD3_O_JERKY";
		case 524288:
			return "MUD3_O_COFFEE";
		case 1048576:
			return "MUD3_O_CIGAR";
		case 2097152:
			return "MUD3_O_TREAT";
	}
	return "";
}

bool func_1915(int iParam0)
{
	return __LIB_0__::func_27(iLocal_100, iParam0);
}

void func_1919(int iParam0)
{
	__LIB_1__::func_683(&iLocal_100, iParam0);
}

bool func_1921()
{
	int iVar0;
	if (func_972(87) == 3)
	{
		if ((((iLocal_577 == 12 || Local_589[0 /*9*/].f_8 == 4) || iLocal_577 == 11) || Local_589[0 /*9*/].f_8 == 5) || !func_1840(1110704128 /* Float: 45f */))
		{
			return false;
		}
		return true;
	}
	iVar0 = Local_193[3 /*6*/].f_5;
	if ((((iVar0 == 2 || func_1325(9, 28)) || func_1297(87, 1)) || func_1297(88, 1)) || func_1297(89, 1))
	{
		return true;
	}
	return false;
}

bool func_1922(var uParam0, vector3 vParam1, float fParam4, float fParam5, float fParam6)
{
	float fVar0;
	float fVar1;
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vParam1, true);
	if (fVar0 < *fParam4)
	{
		*fParam4 = fVar0;
		if (__LIB_2__::func_618(uParam0))
		{
			__LIB_2__::func_608(uParam0);
		}
	}
	else
	{
		if (ENTITY::GET_ENTITY_SPEED(Global_35) > 0.2f)
		{
			fVar1 = MISC::ABSF((fVar0 - *fParam4));
			if (fVar1 <= fParam5)
			{
				if (__LIB_2__::func_618(uParam0))
				{
					__LIB_2__::func_608(uParam0);
				}
				return false;
			}
		}
		if (!__LIB_2__::func_618(uParam0))
		{
			__LIB_5__::func_107(uParam0);
		}
		if (__LIB_11__::func_777(uParam0, fParam6))
		{
			__LIB_2__::func_608(uParam0);
			return true;
		}
	}
	return false;
}

bool func_1923(var uParam0, int iParam1)
{
	if (*iParam1)
	{
		return false;
	}
	if (PED::IS_PED_IN_COMBAT(Global_35, 0))
	{
		if (__LIB_2__::func_618(uParam0))
		{
			__LIB_2__::func_608(uParam0);
		}
		*iParam1 = 1;
		return false;
	}
	if (__LIB_11__::func_777(uParam0, 20f))
	{
		__LIB_2__::func_608(uParam0);
		return true;
	}
	return false;
}

bool func_1924(var uParam0, vector3 vParam1, var uParam4, float fParam5)
{
	float fVar0;
	fVar0 = __LIB_0__::func_94(Global_35, vParam1, 1);
	if (fVar0 < *uParam4)
	{
		*uParam4 = fVar0;
		if (__LIB_2__::func_618(uParam0))
		{
			__LIB_2__::func_608(uParam0);
		}
	}
	else
	{
		if (ENTITY::GET_ENTITY_SPEED(Global_35) > 0.2f)
		{
			if (fVar0 < fParam5)
			{
				if (__LIB_2__::func_618(uParam0))
				{
					__LIB_2__::func_608(uParam0);
				}
				return false;
			}
		}
		if (!__LIB_2__::func_618(uParam0))
		{
			__LIB_5__::func_107(uParam0);
		}
		if (__LIB_11__::func_777(uParam0, 1092616192 /* Float: 10f */))
		{
			__LIB_2__::func_608(uParam0);
			return true;
		}
	}
	return false;
}

int func_1925()
{
	int iVar0;
	int iVar1;
	struct<2> Var2[3];
	int iVar9;
	iVar0 = 0;
	iVar1 = 0;
	Var2[0 /*2*/].f_1 = 2;
	Var2[0 /*2*/] = ATTRIBUTE::_GET_ATTRIBUTE_CORE_VALUE(Global_35, 2);
	Var2[1 /*2*/].f_1 = 1;
	Var2[1 /*2*/] = ATTRIBUTE::_GET_ATTRIBUTE_CORE_VALUE(Global_35, 1);
	Var2[2 /*2*/].f_1 = 0;
	Var2[2 /*2*/] = ATTRIBUTE::_GET_ATTRIBUTE_CORE_VALUE(Global_35, 0);
	if (Var2[2 /*2*/] > 20)
	{
		Var2[2 /*2*/] = 100;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < (3 - 1))
		{
			iVar9 = iVar1 + 1;
			if (iVar9 >= 3)
			{
			}
			else
			{
				if (Var2[iVar1 /*2*/] > Var2[iVar9 /*2*/])
				{
					func_2411(&(Var2[iVar1 /*2*/]), &(Var2[iVar9 /*2*/]));
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	if (Var2[0 /*2*/] == Var2[1 /*2*/] && Var2[1 /*2*/] == Var2[2 /*2*/])
	{
		if (func_1344(3))
		{
			return 3;
		}
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_1344(Var2[iVar0 /*2*/].f_1))
		{
			return Var2[iVar0 /*2*/].f_1;
		}
		iVar0++;
	}
	return 4;
}

int func_1926(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("CONSUMABLE_JERKY");
		case 1:
			return joaat("CONSUMABLE_COFFEE_GNDS_REG");
		case 2:
			return joaat("CONSUMABLE_CIGAR");
		case 3:
			return joaat("CONSUMABLE_CHOCOLATE_BAR");
		case 4:
			return 0;
		default:
			break;
	}
	return joaat("CONSUMABLE_CHOCOLATE_BAR");
}

int func_1927(int iParam0, int iParam1)
{
	if (!__LIB_1__::func_918(iParam0))
	{
		return 0;
	}
	if (__LIB_0__::func_144(iParam1, 0))
	{
		Global_1914319.f_3[iParam0 /*446*/].f_412 = iParam1;
		INVENTORY::_0x9B4E793B1CB6550A();
	}
	else
	{
		Global_1914319.f_3[iParam0 /*446*/].f_412 = 0;
		return 0;
	}
	return 1;
}

void func_1930(var uParam0)
{
	__LIB_4__::func_532(&(uParam0->f_10792), 262144);
}

void func_1931(char* sParam0, bool bParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (__LIB_8__::func_684(sParam0))
	{
		__LIB_6__::func_900(sParam0, bParam1, 0);
	}
}

void func_1933()
{
	if (__LIB_5__::func_825())
	{
		func_398(74);
		iLocal_104 = 0;
	}
	else if (func_167(74))
	{
		iLocal_104++;
		if (iLocal_104 > 1)
		{
			func_168(74);
		}
	}
}

bool func_1935(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = __LIB_0__::func_492(1);
	iVar1 = func_1926(iParam0);
	if (iVar1 == 0)
	{
		return false;
	}
	iVar2 = func_1238(iVar1, -915411861, 1, 0, 0);
	if (iVar0 < iVar2)
	{
		return false;
	}
	return true;
}

bool func_1936(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = func_1926(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	iVar1 = __LIB_1__::func_614(iVar0, 0, 0);
	iVar2 = __LIB_8__::func_959(iVar0, 0);
	if (iVar1 >= iVar2)
	{
		return false;
	}
	if (__LIB_11__::func_426(iVar0, 1, 0))
	{
		return false;
	}
	return true;
}

void func_1940()
{
	int iVar0;
	iVar0 = 2;
	if (!func_1912(iVar0))
	{
		return;
	}
	if (!Local_1193[iVar0 /*6*/].f_2)
	{
		if (__LIB_0__::func_272(Local_193[1 /*6*/], 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1193[iVar0 /*6*/], "karen", Local_193[1 /*6*/], 0);
		}
		if (__LIB_0__::func_272(Local_193[4 /*6*/], 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1193[iVar0 /*6*/], "MUD3_Duellist", Local_193[4 /*6*/], 0);
		}
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_1193[iVar0 /*6*/], false))
	{
		ANIMSCENE::START_ANIM_SCENE(Local_1193[iVar0 /*6*/]);
		Local_1193[iVar0 /*6*/].f_2 = 1;
	}
}

void func_1941()
{
	int iVar0;
	iVar0 = 3;
	if (!func_1912(iVar0))
	{
		return;
	}
	if (!Local_1193[iVar0 /*6*/].f_2)
	{
		if (__LIB_0__::func_272(Local_193[1 /*6*/], 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1193[iVar0 /*6*/], "karen", Local_193[1 /*6*/], 0);
		}
		if (__LIB_0__::func_272(Local_193[4 /*6*/], 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1193[iVar0 /*6*/], "MUD3_Duellist", Local_193[4 /*6*/], 0);
		}
		if (__LIB_0__::func_272(Global_35, 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1193[iVar0 /*6*/], "ARTHUR", Global_35, 0);
		}
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1193[iVar0 /*6*/], "p_door33x", __LIB_3__::func_136(238680582, 0), 0);
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_1193[iVar0 /*6*/], false))
	{
		ANIMSCENE::START_ANIM_SCENE(Local_1193[iVar0 /*6*/]);
		Local_1193[iVar0 /*6*/].f_2 = 1;
	}
}

int func_1958(int iParam0, bool bParam1)
{
	if (!__LIB_3__::func_358(Local_14.f_9))
	{
		Local_14.f_9 = { __LIB_3__::func_355() };
	}
	if (__LIB_0__::func_239(&(Local_14.f_9), 1))
	{
		return 1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_11[0]) && (iParam0 == -1 || iParam0 == 0))
	{
		Local_14.f_11[0] = __LIB_1__::func_545(joaat("A_C_HORSE_MORGAN_PALOMINO"), -340.7233f, 761.5165f, 116.5229f, 16.1671f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		PED::SET_PED_NAME_DEBUG(Local_14.f_11[0], "Mount");
		__LIB_6__::func_906(Local_14.f_9, Local_14.f_11[0]);
		__LIB_5__::func_510(Local_14.f_11[0], Local_14);
		if (bParam1)
		{
			if (iParam0 == 0)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	__LIB_0__::func_240(&(Local_14.f_9), 1);
	return 1;
}

bool func_1959(int* iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
{
	float fVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return false;
	}
	if (PED::IS_PED_INJURED(*iParam0))
	{
		PED::REVIVE_INJURED_PED(*iParam0);
	}
	if (!__LIB_0__::func_272(*iParam0, 1))
	{
		__LIB_2__::func_788(iParam0, 1, 0, 1);
		return false;
	}
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(*iParam0, vParam1, fParam4, true, false, true);
	if (bParam6)
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, 1);
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0) || !ENTITY::_0x88AD6CC10D8D35B2(*iParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, true);
		}
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(*iParam0, joaat("REL_GANG_DUTCHS"));
		ENTITY::_0x18FF3110CF47115D(*iParam0, 15, 1);
		PED::SET_PED_CONFIG_FLAG(*iParam0, 172, true);
		TASK::SET_PED_PATH_MAY_ENTER_WATER(*iParam0, true);
	}
	if (!bParam5)
	{
		TASK::TASK_STAND_STILL(*iParam0, -1);
		return true;
	}
	fVar0 = 10f;
	if (!bParam6)
	{
		fVar0 = 1f;
	}
	if (__LIB_5__::func_541(*iParam0, vParam1, fVar0, 1))
	{
	}
	else
	{
		TASK::TASK_STAND_STILL(*iParam0, -1);
	}
	return true;
}

void func_1963(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return;
	}
	iVar0 = uParam0->f_5;
	if (!__LIB_0__::func_272(*uParam0, 0))
	{
		iParam1 = 4;
	}
	if (iVar0 == iParam1 && !bParam2)
	{
		return;
	}
	uParam0->f_5 = iParam1;
	switch (iParam1)
	{
		case 0:
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam0, joaat("REL_PLAYER_ENEMY"));
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(*uParam0);
			PED::_0xFC3DB99C8144CD81(*uParam0, iLocal_148[6], 0, 0, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 81, true);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 258, true);
			PED::_0x57F35552E771BE9D(*uParam0, 12);
			TASK::TASK_LOOK_AT_ENTITY(*uParam0, Global_35, -1, 0, 51, 0);
			WEAPON::SET_CURRENT_PED_WEAPON(*uParam0, joaat("WEAPON_UNARMED"), true, 0, false, false);
			TASK::TASK_PUT_PED_DIRECTLY_INTO_MELEE(*uParam0, Global_35, 0, 0, 1000f, 1, 17825792);
			PED::_0x2208438012482A1A(*uParam0, false, false);
			break;
		case 4:
			if (PED::GET_PED_CONFIG_FLAG(*uParam0, 11, false))
			{
				return;
			}
			iVar1 = PED::GET_PED_CAUSE_OF_DEATH(*uParam0);
			if (WEAPON::_0x705BE297EEBDB95D(iVar1))
			{
				__LIB_1__::func_683(&(uParam0->f_4), 128);
			}
			if (func_2142(uParam0))
			{
				func_398(65);
			}
			break;
	}
}

void func_1966()
{
	int iVar0;
	iVar0 = 4;
	if (!func_1912(iVar0))
	{
		return;
	}
	if (!Local_1193[iVar0 /*6*/].f_2)
	{
		if (__LIB_0__::func_272(Global_35, 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1193[iVar0 /*6*/], "player_zero", Global_35, 0);
		}
		if (__LIB_0__::func_272(Local_193[1 /*6*/], 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1193[iVar0 /*6*/], "CS_Karen", Local_193[1 /*6*/], 0);
		}
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_1193[iVar0 /*6*/], false))
	{
		ANIMSCENE::START_ANIM_SCENE(Local_1193[iVar0 /*6*/]);
		Local_1193[iVar0 /*6*/].f_2 = 1;
	}
}

void func_1967()
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;
	iVar0 = Local_193[1 /*6*/].f_5;
	if ((iVar0 != 15 && iVar0 != 13) && iVar0 != 14)
	{
		return;
	}
	if (!__LIB_8__::func_684("MUD3_IG15_A"))
	{
		bVar1 = false;
		if (__LIB_0__::func_48(Global_35, Local_193[1 /*6*/], 6f, 1))
		{
			vVar2 = { ENTITY::GET_ENTITY_COORDS(Local_193[1 /*6*/], true, false) };
			if (MISC::ABSF((Global_36.f_2 - vVar2.z)) < 1.5f)
			{
				bVar1 = true;
			}
		}
		if ((__LIB_0__::func_393(Global_35, iLocal_148[0], 0, 1) || __LIB_0__::func_393(Global_35, iLocal_148[13], 0, 1)) || bVar1)
		{
			func_1293(63, 0);
		}
	}
}

void func_1969(int iParam0)
{
	vector3 vVar0;
	float fVar3;
	int iVar4;
	if (func_2431(5, "player_zero", &vVar0, &fVar3, iParam0))
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar4);
		if (__LIB_0__::func_153(Global_35, 0, 1, 0) != joaat("WEAPON_UNARMED"))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
			TASK::TASK_SWAP_WEAPON(0, 0, 0, 0, 0);
		}
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar0, 1f, 20000, 0.25f, 2097153, fVar3);
		TASK::CLOSE_SEQUENCE_TASK(iVar4);
		TASK::TASK_PERFORM_SEQUENCE(Global_35, iVar4);
		TASK::CLEAR_SEQUENCE_TASK(&iVar4);
	}
}

void func_1970(var uParam0)
{
	TASK::SET_HIGH_FALL_TASK(*uParam0, 3000, 4000, 0);
}

int func_1980(int iParam0, int iParam1)
{
	var uVar0;
	return func_2434(&uVar0, iParam0, iParam1);
}

void func_2001(var uParam0, int iParam1, int iParam2, char* sParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (!__LIB_3__::func_358(__LIB_4__::func_998(uParam0)))
	{
		__LIB_5__::func_25(uParam0);
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
	if (!__LIB_5__::func_570(uParam0, iParam1))
	{
		func_2106(uParam0, iParam1, 358048, 0, sParam3, 67108863, 1023, 3, iParam2);
	}
	if (!__LIB_4__::func_610(uParam0->f_5421, iParam1))
	{
		__LIB_4__::func_999(uParam0->f_5421, iParam1);
	}
	DECORATOR::DECOR_SET_INT(iParam1, __LIB_4__::func_611(), iParam2);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam1, joaat("REL_GANG_DUTCHS"));
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iParam1, false);
	PED::_0x15F4732C357B1D6D(iParam1, PLAYER::GET_PLAYER_INDEX(), 10);
	PED::_0x15F4732C357B1D6D(iParam1, PLAYER::GET_PLAYER_INDEX(), 11);
}

void func_2106(var uParam0, int iParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (!__LIB_5__::func_570(uParam0, iParam1))
	{
		if (!__LIB_5__::func_306(uParam0, iParam1, &iVar0))
		{
			if (!__LIB_5__::func_307(uParam0, &iVar0))
			{
				return;
			}
		}
	}
	else
	{
		return;
	}
	__LIB_5__::func_72(&(uParam0->f_5423[iVar0 /*65*/]), 1);
	uParam0->f_5423[iVar0 /*65*/] = iParam1;
	if (ENTITY::IS_ENTITY_A_PED(iParam1) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1)))
	{
		__LIB_5__::func_72(&(uParam0->f_5423[iVar0 /*65*/]), 128);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam3))
	{
		if (__LIB_0__::func_125(iParam3))
		{
			uParam0->f_5423[iVar0 /*65*/].f_1 = iParam3;
			__LIB_5__::func_72(&(uParam0->f_5423[iVar0 /*65*/]), 4);
			__LIB_5__::func_72(&(uParam0->f_5423[iVar0 /*65*/]), 16);
		}
		else if (ENTITY::IS_ENTITY_A_VEHICLE(iParam3))
		{
			uParam0->f_5423[iVar0 /*65*/].f_1 = iParam3;
			__LIB_5__::func_72(&(uParam0->f_5423[iVar0 /*65*/]), 4);
			__LIB_5__::func_72(&(uParam0->f_5423[iVar0 /*65*/]), 8);
		}
	}
	uParam0->f_5423[iVar0 /*65*/].f_4 = sParam4;
	uParam0->f_5423[iVar0 /*65*/].f_7 = iParam5;
	uParam0->f_5423[iVar0 /*65*/].f_6 = iParam6;
	if (ENTITY::IS_ENTITY_A_PED(iParam1))
	{
		if (iParam8 == -1)
		{
			if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1) == __LIB_0__::func_398(7))
			{
				uParam0->f_5423[iVar0 /*65*/].f_9 = 40;
			}
			else
			{
				uParam0->f_5423[iVar0 /*65*/].f_9 = __LIB_4__::func_633(iParam1);
			}
		}
		else
		{
			uParam0->f_5423[iVar0 /*65*/].f_9 = iParam8;
		}
		if (iParam8 > -1 && iParam8 < 27)
		{
			uParam0->f_5423[iVar0 /*65*/].f_10 = iParam8;
		}
		if (__LIB_0__::func_31(uParam0->f_5423[iVar0 /*65*/].f_10))
		{
		}
	}
	uParam0->f_13145++;
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
			uParam0->f_5423[iVar0 /*65*/].f_23[iVar1 /*4*/].f_3 = 358048;
			iVar1++;
		}
		__LIB_5__::func_561(uParam0, iParam1, 2, 4);
		__LIB_5__::func_562(uParam0, iParam1, 2500, 8);
		__LIB_5__::func_562(uParam0, iParam1, 2500, 512);
		__LIB_5__::func_563(uParam0, iParam1, 5000, 512);
		if (uParam0->f_5423[iVar0 /*65*/].f_9 == 14)
		{
			__LIB_5__::func_564(uParam0, iParam1, -2147483648);
		}
	}
}

void func_2109(var uParam0)
{
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam0, joaat("REL_CIVMALE"));
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(*uParam0, false);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(*uParam0, true, 0f);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 6, true);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 169, true);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 137, true);
	WEAPON::REMOVE_ALL_PED_WEAPONS(*uParam0, true, true);
	ENTITY::SET_ENTITY_PROOFS(*uParam0, 8, false);
}

int func_2112(int iParam0, bool bParam1)
{
	if (!__LIB_3__::func_358(Local_14.f_25))
	{
		Local_14.f_25 = { __LIB_3__::func_355() };
	}
	if (__LIB_0__::func_239(&(Local_14.f_25), 1))
	{
		return 1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_27[0]) && (iParam0 == -1 || iParam0 == 0))
	{
		Local_14.f_27[0] = __LIB_1__::func_545(joaat("CS_KARENSJOHN_01"), -325.6045f, 761.32f, 121.641f, 193.2f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		PED::SET_PED_NAME_DEBUG(Local_14.f_27[0], "Client");
		__LIB_6__::func_906(Local_14.f_25, Local_14.f_27[0]);
		__LIB_5__::func_510(Local_14.f_27[0], Local_14);
		if (bParam1)
		{
			if (iParam0 == 0)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	__LIB_0__::func_240(&(Local_14.f_25), 1);
	return 1;
}

int func_2115(int iParam0, bool bParam1)
{
	if (!__LIB_3__::func_358(Local_14.f_29))
	{
		Local_14.f_29 = { __LIB_3__::func_355() };
	}
	if (__LIB_0__::func_239(&(Local_14.f_29), 1))
	{
		return 1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_31[0]) && (iParam0 == -1 || iParam0 == 0))
	{
		Local_14.f_31[0] = __LIB_1__::func_545(joaat("CS_ANTONYFOREMEN"), -308.8508f, 800.3947f, 121.9764f, 7.1078f, 1, 1, 0, 1, 1, 0, 1, 0, 0, 0);
		PED::SET_PED_NAME_DEBUG(Local_14.f_31[0], "Client");
		__LIB_6__::func_906(Local_14.f_29, Local_14.f_31[0]);
		__LIB_5__::func_510(Local_14.f_31[0], Local_14);
		if (bParam1)
		{
			if (iParam0 == 0)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	__LIB_0__::func_240(&(Local_14.f_29), 1);
	return 1;
}

int func_2116(int iParam0, bool bParam1)
{
	if (!__LIB_3__::func_358(Local_14.f_13))
	{
		Local_14.f_13 = { __LIB_3__::func_355() };
	}
	if (__LIB_0__::func_239(&(Local_14.f_13), 1))
	{
		return 1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_15[0]) && (iParam0 == -1 || iParam0 == 0))
	{
		Local_14.f_15[0] = __LIB_1__::func_545(joaat("U_M_M_VALPOOPINGMAN_01"), -326.079f, 765.2856f, 121.6327f, 352.3531f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		PED::SET_PED_NAME_DEBUG(Local_14.f_15[0], "PoopingMan");
		__LIB_6__::func_906(Local_14.f_13, Local_14.f_15[0]);
		__LIB_5__::func_510(Local_14.f_15[0], Local_14);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_14.f_15[0], joaat("REL_CIVMALE"));
		__LIB_1__::func_766(Local_14.f_15[0], joaat("WEAPON_UNARMED"), 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_14.f_15[0], true);
		if (bParam1)
		{
			if (iParam0 == 0)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	__LIB_0__::func_240(&(Local_14.f_13), 1);
	return 1;
}

int func_2117(int iParam0, bool bParam1)
{
	if (!__LIB_3__::func_358(Local_14.f_1))
	{
		Local_14.f_1 = { __LIB_3__::func_355() };
	}
	if (__LIB_0__::func_239(&(Local_14.f_1), 1))
	{
		return 1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_3[0]) && (iParam0 == -1 || iParam0 == 0))
	{
		Local_14.f_3[0] = __LIB_1__::func_545(joaat("CS_VALPRAYINGMAN"), -325.0704f, 759.3398f, 117.4361f, 211.9119f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		PED::SET_PED_NAME_DEBUG(Local_14.f_3[0], "PrayingMan");
		__LIB_6__::func_906(Local_14.f_1, Local_14.f_3[0]);
		__LIB_5__::func_510(Local_14.f_3[0], Local_14);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_14.f_3[0], joaat("REL_CIVMALE"));
		__LIB_1__::func_766(Local_14.f_3[0], joaat("WEAPON_UNARMED"), 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_14.f_3[0], true);
		if (bParam1)
		{
			if (iParam0 == 0)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	__LIB_0__::func_240(&(Local_14.f_1), 1);
	return 1;
}

int func_2118(int iParam0, bool bParam1)
{
	if (!__LIB_3__::func_358(Local_14.f_17))
	{
		Local_14.f_17 = { __LIB_3__::func_355() };
	}
	if (__LIB_0__::func_239(&(Local_14.f_17), 1))
	{
		return 1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_19[0]) && (iParam0 == -1 || iParam0 == 0))
	{
		Local_14.f_19[0] = __LIB_1__::func_545(joaat("CS_BLWWITNESS"), -349.3438f, 746.7553f, 116.931f, 196.2825f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		PED::SET_PED_NAME_DEBUG(Local_14.f_19[0], "Man");
		__LIB_6__::func_906(Local_14.f_17, Local_14.f_19[0]);
		__LIB_5__::func_510(Local_14.f_19[0], Local_14);
		__LIB_1__::func_766(Local_14.f_19[0], joaat("WEAPON_UNARMED"), 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		if (bParam1)
		{
			if (iParam0 == 0)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	__LIB_0__::func_240(&(Local_14.f_17), 1);
	return 1;
}

void func_2119()
{
	Local_545.f_1.f_3 = Global_35;
	Local_545.f_1.f_4 = 21030;
	Local_545.f_1.f_7 = 500;
	Local_545.f_1.f_8 = 4;
	Local_545.f_1.f_13 = 2;
	Local_545.f_1.f_17 = 4;
	Local_545.f_1.f_18 = 4;
	Local_545.f_1.f_19 = 4;
	Local_545.f_1.f_21 = 4;
	Local_545.f_1.f_9 = 2;
}

int func_2120(int iParam0, bool bParam1)
{
	if (!__LIB_3__::func_358(Local_14.f_21))
	{
		Local_14.f_21 = { __LIB_3__::func_355() };
	}
	if (__LIB_0__::func_239(&(Local_14.f_21), 1))
	{
		return 1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_23[0]) && (iParam0 == -1 || iParam0 == 0))
	{
		Local_14.f_23[0] = __LIB_1__::func_545(joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT"), -347.8938f, 746.9373f, 116.7729f, 187.8287f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		PED::SET_PED_NAME_DEBUG(Local_14.f_23[0], "Mount");
		__LIB_6__::func_906(Local_14.f_21, Local_14.f_23[0]);
		__LIB_5__::func_510(Local_14.f_23[0], Local_14);
		if (bParam1)
		{
			if (iParam0 == 0)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	__LIB_0__::func_240(&(Local_14.f_21), 1);
	return 1;
}

int func_2121(int iParam0, bool bParam1)
{
	if (!__LIB_3__::func_358(Local_14.f_5))
	{
		Local_14.f_5 = { __LIB_3__::func_355() };
	}
	if (__LIB_0__::func_239(&(Local_14.f_5), 1))
	{
		return 1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_7[0]) && (iParam0 == -1 || iParam0 == 0))
	{
		Local_14.f_7[0] = __LIB_1__::func_545(joaat("U_M_M_VALTOWNFOLK_01"), -353.5456f, 738.3354f, 117.1745f, 301.7511f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		PED::SET_PED_NAME_DEBUG(Local_14.f_7[0], "Owner");
		__LIB_6__::func_906(Local_14.f_5, Local_14.f_7[0]);
		__LIB_5__::func_510(Local_14.f_7[0], Local_14);
		if (bParam1)
		{
			if (iParam0 == 0)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	__LIB_0__::func_240(&(Local_14.f_5), 1);
	return 1;
}

bool func_2122(int iParam0, bool bParam1)
{
	if (!__LIB_3__::func_358(Local_14.f_33))
	{
		Local_14.f_33 = { __LIB_3__::func_355() };
	}
	if (__LIB_0__::func_239(&(Local_14.f_33), 1))
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_35[0]) && (iParam0 == -1 || iParam0 == 0))
	{
		Local_14.f_35[0] = __LIB_1__::func_545(joaat("A_C_CHICKEN_01"), -265.1773f, 681.9418f, 112.4349f, 263.1075f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		PED::SET_PED_NAME_DEBUG(Local_14.f_35[0], "Chicken01");
		__LIB_6__::func_906(Local_14.f_33, Local_14.f_35[0]);
		__LIB_5__::func_510(Local_14.f_35[0], Local_14);
		if (bParam1)
		{
			if (iParam0 == 0)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_35[1]) && (iParam0 == -1 || iParam0 == 1))
	{
		Local_14.f_35[1] = __LIB_1__::func_545(joaat("A_C_CHICKEN_01"), -263.8113f, 682.7052f, 112.4584f, 83.1075f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		PED::SET_PED_NAME_DEBUG(Local_14.f_35[1], "Chicken02");
		__LIB_6__::func_906(Local_14.f_33, Local_14.f_35[1]);
		__LIB_5__::func_510(Local_14.f_35[1], Local_14);
		if (bParam1)
		{
			if (iParam0 == 1)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_35[2]) && (iParam0 == -1 || iParam0 == 2))
	{
		Local_14.f_35[2] = __LIB_1__::func_545(joaat("A_C_CHICKEN_01"), -263.4807f, 681.152f, 112.4831f, 183.1074f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		PED::SET_PED_NAME_DEBUG(Local_14.f_35[2], "Chicken03");
		__LIB_6__::func_906(Local_14.f_33, Local_14.f_35[2]);
		__LIB_5__::func_510(Local_14.f_35[2], Local_14);
		if (bParam1)
		{
			if (iParam0 == 2)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_35[3]) && (iParam0 == -1 || iParam0 == 3))
	{
		Local_14.f_35[3] = __LIB_1__::func_545(joaat("A_C_CHICKEN_01"), -271.0996f, 691.0168f, 112.6112f, 197.3277f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		PED::SET_PED_NAME_DEBUG(Local_14.f_35[3], "Chicken04");
		__LIB_6__::func_906(Local_14.f_33, Local_14.f_35[3]);
		__LIB_5__::func_510(Local_14.f_35[3], Local_14);
		if (bParam1)
		{
			if (iParam0 == 3)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_35[4]) && (iParam0 == -1 || iParam0 == 4))
	{
		Local_14.f_35[4] = __LIB_1__::func_545(joaat("A_C_CHICKEN_01"), -284.609f, 695.9379f, 112.5894f, 245.327f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		PED::SET_PED_NAME_DEBUG(Local_14.f_35[4], "Chicken05");
		__LIB_6__::func_906(Local_14.f_33, Local_14.f_35[4]);
		__LIB_5__::func_510(Local_14.f_35[4], Local_14);
		if (bParam1)
		{
			if (iParam0 == 4)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_35[5]) && (iParam0 == -1 || iParam0 == 5))
	{
		Local_14.f_35[5] = __LIB_1__::func_545(joaat("A_C_CHICKEN_01"), -283.9569f, 694.6491f, 112.585f, 15.328f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		PED::SET_PED_NAME_DEBUG(Local_14.f_35[5], "Chicken06");
		__LIB_6__::func_906(Local_14.f_33, Local_14.f_35[5]);
		__LIB_5__::func_510(Local_14.f_35[5], Local_14);
		if (bParam1)
		{
			if (iParam0 == 5)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_35[6]) && (iParam0 == -1 || iParam0 == 6))
	{
		Local_14.f_35[6] = __LIB_1__::func_545(joaat("A_C_CHICKEN_01"), -273.0455f, 690.7496f, 112.5844f, 257.3281f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		PED::SET_PED_NAME_DEBUG(Local_14.f_35[6], "Chicken07");
		__LIB_6__::func_906(Local_14.f_33, Local_14.f_35[6]);
		__LIB_5__::func_510(Local_14.f_35[6], Local_14);
		if (bParam1)
		{
			if (iParam0 == 6)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_35[7]) && (iParam0 == -1 || iParam0 == 7))
	{
		Local_14.f_35[7] = __LIB_1__::func_545(joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT"), -273.9619f, 681.538f, 113.3144f, 51.7332f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		PED::SET_PED_NAME_DEBUG(Local_14.f_35[7], "Horse01");
		__LIB_6__::func_906(Local_14.f_33, Local_14.f_35[7]);
		__LIB_5__::func_510(Local_14.f_35[7], Local_14);
		if (bParam1)
		{
			if (iParam0 == 7)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_35[8]) && (iParam0 == -1 || iParam0 == 8))
	{
		Local_14.f_35[8] = __LIB_1__::func_545(joaat("A_C_HORSE_MORGAN_BAY"), -276.2254f, 678.5936f, 113.3637f, 50.5773f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		PED::SET_PED_NAME_DEBUG(Local_14.f_35[8], "Horse02");
		__LIB_6__::func_906(Local_14.f_33, Local_14.f_35[8]);
		__LIB_5__::func_510(Local_14.f_35[8], Local_14);
		if (bParam1)
		{
			if (iParam0 == 8)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_35[9]) && (iParam0 == -1 || iParam0 == 9))
	{
		Local_14.f_35[9] = __LIB_1__::func_545(joaat("A_C_HORSE_MORGAN_BAY"), -292.374f, 697.2551f, 113.3316f, 146.311f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		PED::SET_PED_NAME_DEBUG(Local_14.f_35[9], "Horse03");
		__LIB_6__::func_906(Local_14.f_33, Local_14.f_35[9]);
		__LIB_5__::func_510(Local_14.f_35[9], Local_14);
		if (bParam1)
		{
			if (iParam0 == 9)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_35[10]) && (iParam0 == -1 || iParam0 == 10))
	{
		Local_14.f_35[10] = __LIB_1__::func_545(joaat("A_M_M_VALTOWNFOLK_01"), -218.6691f, 642.0096f, 112.9883f, 139.1366f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		PED::SET_PED_NAME_DEBUG(Local_14.f_35[10], "Man01");
		__LIB_6__::func_906(Local_14.f_33, Local_14.f_35[10]);
		__LIB_5__::func_510(Local_14.f_35[10], Local_14);
		if (bParam1)
		{
			if (iParam0 == 10)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_35[11]) && (iParam0 == -1 || iParam0 == 11))
	{
		Local_14.f_35[11] = __LIB_1__::func_545(joaat("A_M_M_VALTOWNFOLK_01"), -215.1466f, 614.4468f, 113.3228f, 23.1365f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		PED::SET_PED_NAME_DEBUG(Local_14.f_35[11], "Man02");
		__LIB_6__::func_906(Local_14.f_33, Local_14.f_35[11]);
		__LIB_5__::func_510(Local_14.f_35[11], Local_14);
		if (bParam1)
		{
			if (iParam0 == 11)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	__LIB_0__::func_240(&(Local_14.f_33), 1);
	return true;
}

bool func_2125(int iParam0, int iParam1)
{
	char* sVar0;
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_1193[iParam0 /*6*/], true, false) && !func_2407(iParam0, iParam1, 0))
	{
		return false;
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_1193[iParam0 /*6*/], false))
	{
		func_1852(iParam0, 87);
		return false;
	}
	sVar0 = func_1442(iParam1);
	if (ANIMSCENE::_0x1F0E401031E20146(Local_1193[iParam0 /*6*/], sVar0))
	{
		Local_1193[iParam0 /*6*/].f_5 = iParam1;
		return true;
	}
	if (!func_2392(iParam0, iParam1))
	{
		return false;
	}
	return true;
}

Vector3 func_2126(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -325.0704f, 759.3398f, 117.4361f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return -353.5456f, 738.3354f, 117.1745f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return -340.7233f, 761.5165f, 116.5229f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return -326.079f, 765.2856f, 121.6327f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return -349.3438f, 746.7553f, 116.931f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return -347.8938f, 746.9373f, 116.7729f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return -325.6045f, 761.32f, 121.641f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return -308.8508f, 800.3947f, 121.9764f;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return -265.1773f, 681.9418f, 112.4349f;
				case 1:
					return -263.8113f, 682.7052f, 112.4584f;
				case 2:
					return -263.4807f, 681.152f, 112.4831f;
				case 3:
					return -271.0996f, 691.0168f, 112.6112f;
				case 4:
					return -284.609f, 695.9379f, 112.5894f;
				case 5:
					return -283.9569f, 694.6491f, 112.585f;
				case 6:
					return -273.0455f, 690.7496f, 112.5844f;
				case 7:
					return -273.9619f, 681.538f, 113.3144f;
				case 8:
					return -276.2254f, 678.5936f, 113.3637f;
				case 9:
					return -292.374f, 697.2551f, 113.3316f;
				case 10:
					return -218.6691f, 642.0096f, 112.9883f;
				case 11:
					return -215.1466f, 614.4468f, 113.3228f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_2135(bool bParam0)
{
	if (bParam0)
	{
		TELEMETRY::_TELEMETRY_MISSION_ILO_OPTION(joaat("INPUT_INTERACT_LOCKON_POS"), "MUD3_C_HELP");
	}
	else
	{
		TELEMETRY::_TELEMETRY_MISSION_ILO_OPTION(joaat("INPUT_INTERACT_LOCKON_NEG"), "MUD3_C_KILL");
	}
}

var func_2138(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 4:
		case 7:
		case 8:
		case 11:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 34:
		case 78:
		case 79:
		case 80:
		case 81:
			return Local_193[0 /*6*/];
		case 0:
		case 29:
		case 64:
		case 87:
		case 88:
		case 89:
		case 90:
		case 92:
			return Global_35;
		case 6:
		case 66:
		case 91:
			return Local_193[3 /*6*/];
		case 5:
		case 32:
		case 35:
		case 67:
			return Local_193[2 /*6*/];
		case 21:
		case 22:
		case 23:
		case 30:
		case 31:
			return Local_193[13 /*6*/];
		case 33:
			return Local_193[5 /*6*/];
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 47:
		case 48:
			return Local_193[8 /*6*/];
		case 44:
		case 45:
		case 46:
			return Local_193[4 /*6*/];
		case 9:
		case 12:
		case 49:
		case 63:
		case 65:
		case 68:
		case 77:
			return Local_193[1 /*6*/];
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 61:
		case 62:
		case 69:
		case 70:
			return Local_193[6 /*6*/];
		case 50:
		case 56:
		case 57:
		case 58:
		case 59:
			return Local_193[12 /*6*/];
		case 10:
			return Local_193[0 /*6*/];
		case 3:
		case 60:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 82:
		case 83:
		case 84:
		case 85:
		case 86:
			return Local_193[11 /*6*/];
	}
	return Global_35;
}

int func_2139(var uParam0, var uParam1, int iParam2, var uParam3, bool bParam4, float fParam5, bool bParam6)
{
	int iVar0;
	char* sVar1;
	iVar0 = iParam2;
	sVar1 = func_447(iVar0);
	if (func_1611(uParam1, iParam2))
	{
		if (__LIB_6__::func_903(sVar1))
		{
			return 2;
		}
		else
		{
			return 3;
		}
	}
	if (!__LIB_0__::func_272(*uParam3, 1))
	{
		return 4;
	}
	if (__LIB_0__::func_665(Global_35, *uParam3, 1, 1) > fParam5)
	{
		if (bParam6)
		{
			func_452(iVar0);
		}
		return 7;
	}
	if (__LIB_6__::func_904())
	{
		if (bParam4)
		{
			__LIB_5__::func_20(0, 0);
		}
		return 8;
	}
	if (__LIB_5__::func_314(uParam0, sVar1, 0))
	{
		func_452(iVar0);
		return 1;
	}
	return 6;
}

void func_2140(int iParam0, int iParam1)
{
	if (iParam0 != 6)
	{
		Local_1179.f_12 = 93;
		Local_1179.f_13 = 0;
		return;
	}
	if (Local_1179.f_12 != iParam1)
	{
		Local_1179.f_12 = iParam1;
		Local_1179.f_13 = 0;
	}
	else
	{
		Local_1179.f_13++;
	}
	if (Local_1179.f_13 >= 60)
	{
		func_452(iParam1);
		Local_1179.f_12 = 93;
		Local_1179.f_13 = 0;
	}
}

bool func_2141(var uParam0, int iParam1, char[4] cParam2, int iParam3, bool bParam4, bool bParam5)
{
	struct<8> Var0;
	struct<8> Var8;
	Var0 = { __LIB_6__::func_907(iParam1) };
	Var8 = { __LIB_0__::func_865(iParam1) };
	if (bParam5)
	{
		StringCopy(&Var0, "GANG_RET", 64);
		StringCopy(&Var8, "GANG_FAIL", 64);
	}
	return __LIB_19__::func_198(uParam0, __LIB_0__::func_271(iParam1), &Var0, &Var8, cParam2, iParam3, 0, 0, 1, joaat("BLIP_STYLE_COMPANION"), bParam4);
}

bool func_2142(int iParam0)
{
	int iVar0;
	if (PED::GET_PED_CONFIG_FLAG(*iParam0, 11, false))
	{
		return false;
	}
	iVar0 = PED::GET_PED_SOURCE_OF_DEATH(*iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0) == Global_35)
	{
		return true;
	}
	return false;
}

void func_2144()
{
	if (Local_1309 != 0)
	{
		STREAMING::REQUEST_ANIM_DICT(Local_1309.f_6);
		STREAMING::REQUEST_MODEL(Local_1309, false);
		Local_1309.f_16 = 1;
	}
}

bool func_2145()
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_1309.f_6))
	{
		return STREAMING::HAS_ANIM_DICT_LOADED(Local_1309.f_6);
	}
	return true;
}

bool func_2146()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (Local_1309.f_5 <= 0)
	{
		return false;
	}
	iVar1 = __LIB_0__::func_23();
	iVar2 = __LIB_0__::func_41(iVar1);
	iVar3 = __LIB_0__::func_42(iVar1);
	iVar0 = 0;
	while (iVar0 <= (Local_1309.f_5 - 1))
	{
		iVar4 = __LIB_0__::func_41(Local_1309.f_1[iVar0]);
		iVar5 = __LIB_0__::func_42(Local_1309.f_1[iVar0]);
		if (iVar4 == iVar2 && MISC::ABSI((iVar3 - iVar5)) <= 5)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_2148(var uParam0, var uParam1)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return;
	}
	if (!__LIB_0__::func_272(*uParam1, 0))
	{
		func_1275(uParam1, 6, 0);
	}
	iVar0 = uParam1->f_5;
	switch (iVar0)
	{
		case 0:
			break;
		case 1:
			__LIB_11__::func_780(*uParam1, &uLocal_504);
			break;
		case 2:
			__LIB_11__::func_780(*uParam1, &uLocal_504);
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			PED::_0xC6981AFF6D2A71C2(*uParam1);
			PED::SET_PED_RESET_FLAG(*uParam1, 94, true);
			__LIB_2__::func_966(*uParam1, Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
			if (!TASK::_0x9FF5F9B24E870748(*uParam1))
			{
				func_1275(uParam1, 7, 1);
			}
			else
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(*uParam1, 1f);
				if (func_2570(0, &(Local_193[0 /*6*/]), 1f))
				{
					__LIB_0__::func_172(iLocal_148[29]);
					func_1275(uParam1, 10, 0);
				}
				else
				{
					if (VOLUME::_DOES_VOLUME_EXIST(iLocal_148[29]))
					{
						if (__LIB_0__::func_393(*uParam1, iLocal_148[29], 0, 1))
						{
							__LIB_0__::func_172(iLocal_148[29]);
						}
					}
					if (__LIB_0__::func_393(Global_35, iLocal_148[9], 0, 1))
					{
						__LIB_0__::func_172(iLocal_148[29]);
					}
					else
					{
						if (func_2571("MUD3_IG19", 1) && !func_1320(6, 0))
						{
							func_398(50);
							if (func_1296(0, 14, ENTITY::GET_ENTITY_COORDS(Local_193[0 /*6*/], true, false)))
							{
								if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("MUD3_IG19") < 9)
								{
									func_1275(uParam1, 8, 0);
								}
								else
								{
									Jump @492; //curOff = 470
									if (func_167(50))
									{
										__LIB_0__::func_172(iLocal_148[29]);
									}
									Jump @1122; //curOff = 492
									if (!func_2571("MUD3_IG19", 1) || func_1320(6, 0))
									{
										__LIB_0__::func_172(iLocal_148[29]);
										func_1275(uParam1, 7, 0);
									}
									else if (__LIB_0__::func_393(Global_35, iLocal_148[9], 0, 1))
									{
										__LIB_0__::func_172(iLocal_148[29]);
										func_1275(uParam1, 7, 0);
									}
									else
									{
										PED::SET_PED_MAX_MOVE_BLEND_RATIO(*uParam1, 0f);
										Jump @1122; //curOff = 588
										if (!TASK::_0x9FF5F9B24E870748(*uParam1))
										{
											func_1275(uParam1, 12, 0);
										}
										else
										{
											func_1330();
											Jump @1122; //curOff = 618
											if (!Local_1193[13 /*6*/].f_2)
											{
												func_2572(59, 0, 0);
											}
											else if (func_2573(uParam0, 60))
											{
												func_1275(uParam1, 12, 0);
											}
											else
											{
												Jump @1122; //curOff = 668
												if (!Local_1193[13 /*6*/].f_2)
												{
													func_2572(60, 0, 0);
												}
												else if (func_2573(uParam0, 61))
												{
													func_1275(uParam1, 13, 0);
												}
												else
												{
													Jump @1122; //curOff = 718
													if (func_427(uParam0) < 3)
													{
														func_2572(62, 1, 1);
														Jump @1122; //curOff = 739
													}
													else
													{
														func_2572(62, 1, 0);
														if (!func_1319(13))
														{
														}
														else if (func_2573(uParam0, 62))
														{
															func_1275(uParam1, 14, 0);
														}
														else
														{
															Jump @1122; //curOff = 789
															if (func_2573(uParam0, 63))
															{
																func_1275(uParam1, 15, 0);
															}
															else
															{
																Jump @1122; //curOff = 815
																if (func_2573(uParam0, 64))
																{
																	func_1275(uParam1, 16, 0);
																}
																else
																{
																	if (!__LIB_1__::func_185(5))
																	{
																		func_1293(29, 0);
																	}
																	Jump @1122; //curOff = 858
																	if (func_2573(uParam0, 65))
																	{
																		func_1275(uParam1, 17, 0);
																	}
																	else
																	{
																		Jump @1122; //curOff = 884
																		if (func_2573(uParam0, 66))
																		{
																			func_1275(uParam1, 18, 0);
																		}
																		else
																		{
																			if (__LIB_1__::func_185(5))
																			{
																				if (func_1325(13, 65))
																				{
																					if (func_1322(13, 0.23f))
																					{
																						func_1293(29, 0);
																					}
																				}
																			}
																			Jump @1122; //curOff = 950
																			if (func_2573(uParam0, 67))
																			{
																				func_1275(uParam1, 19, 0);
																			}
																			else
																			{
																				Jump @1122; //curOff = 976
																				if (func_2573(uParam0, 68))
																				{
																					func_1275(uParam1, 20, 0);
																				}
																				else
																				{
																					if (func_1325(13, 67))
																					{
																						if (func_1322(13, 0.105f))
																						{
																							func_1293(24, 0);
																						}
																						if (func_1322(13, 0.4f))
																						{
																							func_1293(27, 0);
																							if (!func_167(78))
																							{
																								func_398(78);
																								func_192(0, 0);
																							}
																						}
																					}
																					func_2574();
																					Jump @1122; //curOff = 1082
																					if (func_2573(uParam0, 69))
																					{
																						func_1275(uParam1, 21, 0);
																					}
																					else
																					{
																						func_2574();
																						Jump @1122; //curOff = 1112
																						func_2574();
																					}
																				}
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			default:
				break;
	}
}

void func_2149(var uParam0)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return;
	}
	if (!__LIB_0__::func_272(*uParam0, 0))
	{
		func_1276(uParam0, 4, 0);
	}
	iVar0 = uParam0->f_5;
	switch (iVar0)
	{
		case 0:
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			if (!TASK::_0x9FF5F9B24E870748(*uParam0))
			{
				func_1276(uParam0, 6, 1);
			}
			else
			{
				Jump @587; //curOff = 186
				Jump @587; //curOff = 189
				Jump @587; //curOff = 192
				Jump @587; //curOff = 195
				Jump @587; //curOff = 198
				Jump @587; //curOff = 201
				if (!TASK::_0x9FF5F9B24E870748(Local_193[1 /*6*/]))
				{
					func_1276(&(Local_193[1 /*6*/]), 11, 1);
				}
				else
				{
					if (__LIB_0__::func_163(Local_193[1 /*6*/], 242628503))
					{
						if (TASK::GET_SEQUENCE_PROGRESS(Local_193[1 /*6*/]) == 0)
						{
							if (!__LIB_2__::func_618(&uLocal_423))
							{
								__LIB_5__::func_107(&uLocal_423);
								vLocal_135 = { ENTITY::GET_ENTITY_COORDS(Local_193[1 /*6*/], true, false) };
							}
							if (__LIB_9__::func_324(&uLocal_423) >= 3f)
							{
								vLocal_132 = { ENTITY::GET_ENTITY_COORDS(Local_193[1 /*6*/], true, false) };
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(vLocal_132, vLocal_135, true) < 0.5f)
								{
									ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_193[1 /*6*/], -321.8926f, 767.6035f, 120.6315f, 8.3276f, true, false, true);
									func_1276(&(Local_193[1 /*6*/]), 11, 1);
									Jump @587; //curOff = 388
								}
								vLocal_135 = { vLocal_132 };
								__LIB_5__::func_107(&uLocal_423);
							}
						}
					}
					Jump @587; //curOff = 409
					Jump @587; //curOff = 412
					__LIB_2__::func_966(Local_193[1 /*6*/], Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
					if (func_1389(4))
					{
						func_1276(uParam0, 14, 0);
					}
					else if (func_2570(2, uParam0, 1f) && !TASK::_0x9FF5F9B24E870748(*uParam0))
					{
						func_1276(uParam0, 15, 0);
					}
					else
					{
						if (__LIB_0__::func_266(*uParam0, func_1401(2, 0), 3f, 1, 1))
						{
							func_1967();
						}
						Jump @587; //curOff = 515
						if (func_2570(2, uParam0, 1f) && !TASK::_0x9FF5F9B24E870748(*uParam0))
						{
							func_1276(uParam0, 15, 0);
						}
						else
						{
							if (__LIB_0__::func_266(*uParam0, func_1401(2, 0), 3f, 1, 1))
							{
								func_1967();
							}
							Jump @587; //curOff = 577
							func_1967();
						}
					}
				}
			}
			default:
				break;
	}
}

void func_2150(var uParam0)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return;
	}
	if (!__LIB_0__::func_272(*uParam0, 0))
	{
		func_1277(uParam0, 4, 0);
	}
	iVar0 = uParam0->f_5;
	switch (iVar0)
	{
		case 0:
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			if (func_2575())
			{
				if (__LIB_0__::func_266(*uParam0, func_1286(2, 2), 4.5f, 1, 1) || __LIB_0__::func_393(*uParam0, iLocal_148[11], 0, 1))
				{
					func_1277(uParam0, 6, 0);
				}
			}
			break;
		case 6:
			break;
	}
}

void func_2151(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = -1;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (!__LIB_0__::func_272(*iParam0, 0))
	{
		func_1278(iParam0, 6, 0);
	}
	iVar1 = iParam0->f_5;
	switch (iVar1)
	{
		case 0:
			break;
		case 1:
			break;
		case 2:
			if ((((((iLocal_577 == 11 || iLocal_577 == 12) || Local_589[0 /*9*/].f_8 == 4) || iLocal_63 == 12) || iLocal_63 == 13) || bLocal_118) || func_167(35))
			{
				func_1278(iParam0, 1, 0);
			}
			else
			{
				if (!__LIB_2__::func_618(&uLocal_492))
				{
					__LIB_5__::func_107(&uLocal_492);
				}
				if (!func_2576())
				{
					__LIB_1__::func_471(&(Local_1068[0 /*17*/]), 9);
					__LIB_1__::func_471(&(Local_1068[1 /*17*/]), 9);
					if (!__LIB_2__::func_611(&uLocal_492))
					{
						__LIB_13__::func_552(&uLocal_492);
					}
				}
				else if (__LIB_2__::func_611(&uLocal_492))
				{
					__LIB_13__::func_551(&uLocal_492);
				}
				if (!__LIB_2__::func_343(Global_35, Local_579, 0) && func_1840(1110704128 /* Float: 45f */))
				{
					if (func_2576())
					{
						func_1293(87, 0);
						func_1278(iParam0, 1, 0);
					}
					else if (__LIB_14__::func_171(&uLocal_492) > 5000)
					{
						__LIB_2__::func_608(&uLocal_492);
						if (__LIB_2__::func_343(Global_35, Local_579, 0))
						{
							func_1293(89, 0);
						}
						func_1278(iParam0, 1, 0);
					}
					else if (!func_1840(1110704128 /* Float: 45f */))
					{
						if (func_2576())
						{
							func_1293(88, 0);
						}
						func_1278(iParam0, 1, 0);
					}
					else
					{
						iVar0 = func_2383(iParam0, &iLocal_1103, 10f, &Local_1068, 0.1f, 3, 0, 0, 4204561, 0, 0, 2, -1082130432 /* Float: -1f */);
						if (iVar0 != -1)
						{
							if (iVar0 == 0)
							{
								func_1293(87, 0);
							}
							else
							{
								func_1293(88, 0);
							}
							func_1278(iParam0, 1, 0);
						}
						else
						{
							Jump @883; //curOff = 540
							Jump @883; //curOff = 543
							Jump @883; //curOff = 546
							Jump @883; //curOff = 549
							if (func_2575())
							{
								if (__LIB_0__::func_266(*iParam0, func_1286(2, 2), 4.5f, 1, 1) || __LIB_0__::func_393(*iParam0, iLocal_148[11], 0, 1))
								{
									func_1278(iParam0, 8, 0);
								}
							}
							Jump @883; //curOff = 612
							Jump @883; //curOff = 615
							Jump @883; //curOff = 618
							if (func_1293(91, 0) != 3)
							{
								__LIB_1__::func_471(&(Local_1068[0 /*17*/]), 9);
								if (!__LIB_2__::func_611(&uLocal_492))
								{
									__LIB_13__::func_552(&uLocal_492);
								}
							}
							else if (__LIB_2__::func_611(&uLocal_492))
							{
								__LIB_13__::func_551(&uLocal_492);
							}
							if (__LIB_14__::func_171(&uLocal_492) > 20000)
							{
								func_1278(iParam0, 10, 0);
							}
							else
							{
								if (func_1297(91, 1))
								{
									__LIB_1__::func_471(&(Local_1068[0 /*17*/]), 9);
								}
								if (func_1325(15, 81))
								{
									__LIB_1__::func_471(&(Local_1068[0 /*17*/]), 9);
								}
								else if (Local_1193[15 /*6*/].f_2 && !func_1320(15, 1))
								{
									__LIB_1__::func_471(&(Local_1068[0 /*17*/]), 9);
								}
								iVar0 = func_2383(iParam0, &iLocal_1103, 5f, &Local_1068, 0.1f, 3, 0, 0, 10257, 0, 0, 2, -1082130432 /* Float: -1f */);
								if (iVar0 != -1)
								{
									func_1293(92, 0);
									func_1278(iParam0, 10, 0);
								}
								else
								{
									Jump @883; //curOff = 851
									Jump @883; //curOff = 854
									if (!TASK::_0x9FF5F9B24E870748(*iParam0))
									{
										func_1278(iParam0, 11, 1);
									}
								else
								{
									}
								}
							}
						}
					}
				}
			}
			default:
				break;
	}
}

void func_2152(var uParam0)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return;
	}
	if (!__LIB_0__::func_272(*uParam0, 11))
	{
		func_1963(uParam0, 4, 0);
	}
	iVar0 = uParam0->f_5;
	switch (iVar0)
	{
		case 0:
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			func_2577(uParam0);
			break;
	}
}

void func_2153(int iParam0)
{
	struct<28> Var0;
	int iVar28;
	int iVar29;
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
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (!__LIB_0__::func_272(*iParam0, 0))
	{
		func_1355(iParam0, 7, 0);
	}
	iVar28 = iParam0->f_5;
	iVar29 = -1;
	switch (iVar28)
	{
		case 0:
			break;
		case 1:
			break;
		case 2:
			iVar29 = func_2383(iParam0, &iLocal_736, 10f, &Local_701, 0.1f, 3, 0, 0, 273, 0, 0, 2, -1082130432 /* Float: -1f */);
			if (iVar29 != -1)
			{
				if (iVar29 == 0)
				{
					iLocal_1308 = 0;
				}
				else
				{
					iLocal_1308 = 1;
				}
				func_1355(iParam0, 3, 0);
			}
			else if (__LIB_2__::func_875(Global_35, *iParam0, &Var0) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(*iParam0, true, false), 3f, true))
			{
				iLocal_1308 = 2;
				func_1355(iParam0, 3, 0);
			}
			else if (func_2578(iParam0, 1084227584 /* Float: 5f */, 20f, 1063675494 /* Float: 0.9f */))
			{
				if (__LIB_0__::func_393(Global_35, iLocal_148[31], 0, 1))
				{
					iLocal_1308 = 1;
					func_1355(iParam0, 3, 0);
				}
				else
				{
					if (__LIB_0__::func_48(Global_35, *iParam0, 2f, 1))
					{
						if (!__LIB_2__::func_618(&uLocal_498))
						{
							__LIB_5__::func_107(&uLocal_498);
						}
						if (__LIB_14__::func_171(&uLocal_498) > 1500)
						{
							if (__LIB_11__::func_3())
							{
								iLocal_1308 = 1;
							}
							else
							{
								iLocal_1308 = 0;
							}
							func_1355(iParam0, 3, 0);
						}
						else
						{
							Jump @517; //curOff = 477
							if (!__LIB_0__::func_48(Global_35, *iParam0, 3.5f, 1))
							{
								if (__LIB_2__::func_618(&uLocal_498))
								{
									__LIB_2__::func_608(&uLocal_498);
								}
							}
							if (__LIB_11__::func_3())
							{
								if (__LIB_0__::func_48(Global_35, *iParam0, 3.5f, 1) && PED::IS_PED_FACING_PED(Global_35, *iParam0, 45f))
								{
									iLocal_1308 = 1;
									func_1355(iParam0, 3, 0);
								}
								else
								{
									func_2580(iParam0);
									Jump @743; //curOff = 584
									if (func_2581(iParam0, iLocal_1308))
									{
										func_1355(iParam0, 4, 0);
									}
									else
									{
										Jump @743; //curOff = 610
										if (!func_167(36))
										{
											if (func_1322(15, 0.8f))
											{
												TASK::_0x2E1D6D87346BB7D2(*iParam0, Global_35, 0, 0);
												func_398(36);
											}
										}
										if (func_1321(15, "G_M_M_UNIAFRICANAMERICANGANG_01", 1))
										{
											func_1355(iParam0, 5, 0);
										}
										else
										{
											__LIB_3__::func_815(16, 1065353216 /* Float: 1f */);
											Jump @743; //curOff = 691
											if (func_1875(iParam0, 1, 1))
											{
												if (!__LIB_2__::func_618(&uLocal_489))
												{
													__LIB_5__::func_107(&uLocal_489);
												}
												func_1355(iParam0, 6, 0);
											}
											else
											{
												Jump @743; //curOff = 734
											}
										}
									}
								}
							}
						}
					}
				}
			}
			default:
				break;
	}
}

void func_2154(var uParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	float fVar5;
	float fVar6;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		return;
	}
	if (!__LIB_0__::func_272(*iParam1, 0))
	{
		func_1560(iParam1, 8, 0);
	}
	iVar0 = iParam1->f_5;
	switch (iVar0)
	{
		case 0:
			break;
		case 1:
			break;
		case 2:
			if (iLocal_102 == 0)
			{
				iLocal_102 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_TERRIFYING_NEW"), *iParam1, 0f, 40f, 40f, -1f, -1f, 180f, false, false, 4, 4);
			}
			if (func_1296(1, 155, ENTITY::GET_ENTITY_COORDS(*iParam1, true, false)))
			{
				if (!func_167(79))
				{
					if (func_2582(uParam0, 70))
					{
						func_398(79);
						PLAYER::_0x497A18F8F88AA9D8();
					}
				}
			}
			if (func_1296(1, 157, ENTITY::GET_ENTITY_COORDS(*iParam1, true, false)))
			{
				if (func_167(79))
				{
					func_2583(70);
				}
			}
			vVar1 = { -343.29f, 527.36f, 96.72f };
			if (__LIB_0__::func_266(Local_193[7 /*6*/], vVar1, 1.5f, 1, 1) || func_1296(1, 166, ENTITY::GET_ENTITY_COORDS(*iParam1, true, false)))
			{
				func_1560(iParam1, 3, 0);
			}
			else if (!PED::IS_PED_ON_MOUNT(*iParam1))
			{
				func_1560(iParam1, 2, 1);
			}
			else if (!TASK::_0x9FF5F9B24E870748(*iParam1))
			{
				func_1560(iParam1, 2, 1);
			}
			else
			{
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(*iParam1, 0))
				{
					if (func_167(30))
					{
						if (TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(*iParam1))
						{
							TASK::WAYPOINT_PLAYBACK_RESUME(*iParam1, false, -1, 0);
						}
						func_2584(iParam1);
						if (__LIB_9__::func_324(&uLocal_468) < 2f)
						{
							TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(*iParam1, 2f, 0, -1f, 0);
						}
						else if (TASK::GET_PED_WAYPOINT_PROGRESS(*iParam1) >= 182)
						{
							TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(*iParam1, 2.5f, 0, 0.4f, 0);
							if (__LIB_0__::func_48(Global_35, *iParam1, 20f, 1))
							{
								func_2585(2f);
							}
							else
							{
								func_2585(3f);
							}
						}
						else if (!PED::IS_PED_ON_MOUNT(Global_35))
						{
							if (__LIB_9__::func_324(&uLocal_516) > 10f)
							{
								TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(*iParam1, 3f, 0, 0.4f, 0);
							}
						}
						else if (__LIB_6__::func_912(Global_35, *iParam1, func_421(1), 1112014848 /* Float: 50f */))
						{
							if (!__LIB_1__::func_472(*iParam1, 1116471296 /* Float: 70f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */) && !__LIB_0__::func_48(Global_35, *iParam1, 20f, 1))
							{
								if (!__LIB_2__::func_618(&uLocal_474))
								{
									__LIB_5__::func_107(&uLocal_474);
								}
							}
							else
							{
								__LIB_2__::func_608(&uLocal_474);
							}
							if (__LIB_9__::func_324(&uLocal_474) > 5f)
							{
								__LIB_11__::func_423(uParam0, "MUD3_F_LOST", "", 1, 0);
							}
							TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(*iParam1, 3f, 0, 0.4f, 0);
							func_2585(2f);
						}
						else
						{
							__LIB_2__::func_608(&uLocal_474);
							if (!__LIB_1__::func_472(*iParam1, 1116471296 /* Float: 70f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */))
							{
								fVar4 = func_2587(iParam1, 3f, 1.75f, 50f, 40f);
								fVar5 = func_2588(iParam1, 3f, fVar4, 20f);
								func_2585(fVar5);
							}
							else
							{
								fVar4 = func_2587(iParam1, 3f, 1.75f, 60f, 40f);
								fVar5 = func_2588(iParam1, 3f, fVar4, 20f);
								func_2585(fVar5);
							}
						}
					}
					else
					{
						TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(*iParam1, 2f, 0, -1f, 0);
					}
				}
				func_2589(iParam1, 1);
				Jump @1289; //curOff = 853
				if (func_1871(5, "s_Struggle_Loop_01"))
				{
					ANIMSCENE::SET_ANIM_SCENE_RATE(Local_1193[5 /*6*/], 1f);
					func_1560(iParam1, 4, 0);
				}
				else
				{
					if (func_1319(5))
					{
						if (func_1322(5, 0.4109f))
						{
							fVar6 = 1f;
							func_2589(iParam1, 0);
						}
						else
						{
							fVar6 = 1.4f;
							func_2589(iParam1, 1);
						}
						ANIMSCENE::SET_ANIM_SCENE_RATE(Local_1193[5 /*6*/], fVar6);
						if (__LIB_0__::func_48(Global_35, *iParam1, 18f, 1))
						{
							func_2585(2f);
						}
						else
						{
							func_2585(3f);
						}
					}
					Jump @1289; //curOff = 982
					if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_148[27]))
					{
						iLocal_148[27] = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), -354.4076f, 490.1485f, 96.3944f, 0f, 0f, -12.93387f, 1.577893f, 0.864804f, 1f);
					}
					if (__LIB_0__::func_272(Local_193[7 /*6*/], 0))
					{
						if (!__LIB_0__::func_394(Global_35, Local_193[7 /*6*/], 0))
						{
							PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_193[7 /*6*/], 1f);
							if (ENTITY::_IS_ENTITY_FROZEN(Local_193[7 /*6*/]) && ENTITY::GET_ENTITY_SPEED(Local_193[7 /*6*/]) <= 0.5f)
							{
								ENTITY::FREEZE_ENTITY_POSITION(Local_193[7 /*6*/], false);
							}
							if (!TASK::_0x9FF5F9B24E870748(Local_193[7 /*6*/]) && !__LIB_0__::func_266(Local_193[7 /*6*/], func_1286(8, 6), 4f, 1, 1))
							{
								TASK::CLEAR_PED_TASKS(Local_193[7 /*6*/], true, false);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_193[7 /*6*/], func_1286(8, 6), 1f, -1, 0.25f, 0, 40000f);
							}
						}
					}
					if (func_2590(iParam1))
					{
						__LIB_1__::func_864(*iParam1, 0, 0);
					}
					else if (func_2591())
					{
						func_1560(iParam1, 7, 0);
					}
					else if (func_2592(iParam1))
					{
					}
					else
					{
						Jump @1289; //curOff = 1258
						Jump @1289; //curOff = 1261
						__LIB_19__::func_190(iParam1, &iLocal_928, &Local_893, 5f, -1082130432 /* Float: -1f */, 0);
					}
				}
			}
			if (__LIB_0__::func_266(Global_35, func_1401(1, 0), 50f, 1, 1) && PED::IS_PED_ON_MOUNT(Global_35))
			{
				__LIB_1__::func_448(Global_35, func_1401(1, 0), 0, 15f, 10f, 5f, 2.5f, 1, 1, 1, 0);
			}
			default:
				break;
	}
}

void func_2155(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		return;
	}
	if (!__LIB_0__::func_272(*iParam1, 0))
	{
		func_1385(iParam1, 5, 0);
	}
	if (func_2595(iParam1))
	{
		func_1385(iParam1, 4, 0);
		func_398(49);
	}
	PED::SET_PED_RESET_FLAG(*iParam1, 184, true);
	iVar0 = iParam1->f_5;
	iVar1 = -1;
	if (func_427(uParam0) < 5)
	{
		func_2596(uParam0, &iVar0);
	}
	if (iVar0 != 5 && iVar0 != 4)
	{
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(*iParam1, 0))
		{
			if (func_2597(iParam1))
			{
				if (!TASK::_0x916B8E075ABC8B4E(*iParam1, 1))
				{
					TASK::_0xE7FA07624574B79A(*iParam1, Global_35, 1, 1, -1f, 1, 0, 0, 0);
				}
			}
			else if (TASK::_0x916B8E075ABC8B4E(*iParam1, 1))
			{
				TASK::_0x541E5B41DCA45828(*iParam1, 1, 0);
			}
		}
	}
	switch (iVar0)
	{
		case 0:
			break;
		case 1:
			if (!__LIB_1__::func_472(*iParam1, 1116471296 /* Float: 70f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */))
			{
			}
			else if (!__LIB_0__::func_393(Global_35, iLocal_148[0], 0, 1))
			{
			}
			else if (func_1293(36, 0) == 3)
			{
				func_1385(iParam1, 2, 0);
			}
			else
			{
				Jump @426; //curOff = 311
				iVar1 = func_2383(iParam1, &iLocal_640, 5f, &Local_622, 0.1f, 3, 0, 0, 29, 0, 0, 2, -1082130432 /* Float: -1f */);
				if (iVar1 != -1)
				{
					func_1293(38, 0);
					TASK::TASK_LOOK_AT_ENTITY(*iParam1, Global_35, -1, 48, 51, 0);
					func_1385(iParam1, 3, 0);
				}
				else
				{
					Jump @426; //curOff = 387
					if (__LIB_0__::func_27(Local_193[4 /*6*/].f_4, 128))
					{
						func_1385(iParam1, 4, 0);
					}
					else
					{
						Jump @426; //curOff = 417
					}
				}
			}
			default:
				break;
	}
}

void func_2156(int iParam0)
{
	int iVar0;
	if (!__LIB_0__::func_272(iLocal_141, 0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (!__LIB_0__::func_272(*iParam0, 0))
	{
		func_2598(iParam0, 4, 0);
	}
	iVar0 = iParam0->f_5;
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (__LIB_0__::func_394(Global_35, iLocal_141, 0))
		{
			func_1293(50, 0);
		}
		else
		{
			func_163(50, 0, 0);
		}
	}
	if (func_2595(iParam0))
	{
		func_398(49);
	}
	switch (iVar0)
	{
		case 0:
			func_2598(iParam0, 1, 0);
			break;
		case 1:
			if (__LIB_0__::func_394(Global_35, iLocal_141, 0) && !__LIB_0__::func_266(iLocal_141, func_1286(6, 8), 3f, 1, 1))
			{
				func_2598(iParam0, 2, 0);
			}
			else
			{
				Jump @252; //curOff = 218
				if (!TASK::_0x9FF5F9B24E870748(*iParam0))
				{
					func_2598(iParam0, 3, 0);
				}
				else
				{
					Jump @252; //curOff = 243
				}
			}
			default:
				break;
	}
}

void func_2157(var uParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		return;
	}
	if (func_2595(iParam1))
	{
		__LIB_11__::func_423(uParam0, "LAW_FAIL", "", 1, 0);
	}
}

void func_2158()
{
	int iVar0;
	int iVar1;
	if (!func_167(27))
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (!__LIB_0__::func_272(Local_14.f_35[iVar1], 0))
		{
		}
		else
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(Local_14.f_35[iVar1]);
			if (iVar0 == joaat("A_C_CHICKEN_01"))
			{
				if ((PED::IS_PED_FLEEING(Local_14.f_35[iVar1]) || __LIB_0__::func_163(Local_14.f_35[iVar1], -773337285)) || __LIB_0__::func_163(Local_14.f_35[iVar1], 518218985))
				{
					if (!__LIB_2__::func_618(&uLocal_486))
					{
						__LIB_2__::func_620(&uLocal_486, 5f);
					}
					if (__LIB_9__::func_324(&uLocal_486) > MISC::GET_RANDOM_FLOAT_IN_RANGE(0.25f, 0.5f))
					{
						if (__LIB_0__::func_48(Global_35, Local_14.f_35[iVar1], 10f, 1))
						{
							if (!AUDIO::IS_ANIMAL_VOCALIZATION_PLAYING(Local_14.f_35[iVar1]))
							{
								AUDIO::PLAY_ANIMAL_VOCALIZATION(Local_14.f_35[iVar1], "Scream", false);
								__LIB_5__::func_107(&uLocal_486);
							}
						}
						else if (__LIB_0__::func_48(Global_35, Local_14.f_35[iVar1], 20f, 1))
						{
							if (!AUDIO::IS_ANIMAL_VOCALIZATION_PLAYING(Local_14.f_35[iVar1]))
							{
								AUDIO::PLAY_ANIMAL_VOCALIZATION(Local_14.f_35[iVar1], "Squawk", false);
								__LIB_5__::func_107(&uLocal_486);
							}
						}
					}
				}
				else if (__LIB_0__::func_48(Global_35, Local_14.f_35[iVar1], 30f, 1))
				{
					__LIB_2__::func_357(Local_14.f_35[iVar1], Global_36, 1, 1, 1);
					TASK::_TASK_FLEE_FROM_PED(Local_14.f_35[iVar1], Global_35, -247.7f, 668.12f, 112.36f, 100f, -1, 1024, 1077936128 /* Float: 3f */, 0);
				}
				else if (__LIB_0__::func_48(Local_193[6 /*6*/], Local_14.f_35[iVar1], 15f, 1))
				{
					__LIB_2__::func_357(Local_14.f_35[iVar1], Global_36, 1, 1, 1);
					TASK::_TASK_FLEE_FROM_PED(Local_14.f_35[iVar1], Local_193[6 /*6*/], -247.7f, 668.12f, 112.36f, 100f, -1, 1024, 1077936128 /* Float: 3f */, 0);
				}
				else
				{
					Jump @794; //curOff = 499
					if (__LIB_0__::func_125(Local_14.f_35[iVar1]))
					{
						if (__LIB_0__::func_163(Local_14.f_35[iVar1], 1041577989))
						{
						}
						else if (__LIB_0__::func_48(Global_35, Local_14.f_35[iVar1], 15f, 1) || __LIB_0__::func_48(Local_193[6 /*6*/], Local_14.f_35[iVar1], 15f, 1))
						{
							__LIB_2__::func_357(Local_14.f_35[iVar1], Global_36, 1, 1, 1);
							TASK::TASK_HORSE_ACTION(Local_14.f_35[iVar1], 1, 0, 0);
						}
						else
						{
							Jump @794; //curOff = 631
							if (PED::IS_PED_HUMAN(Local_14.f_35[iVar1]))
							{
								if (PED::IS_PED_FLEEING(Local_14.f_35[iVar1]) || __LIB_0__::func_163(Local_14.f_35[iVar1], 518218985))
								{
								}
								else if (__LIB_0__::func_48(Global_35, Local_14.f_35[iVar1], 15f, 1) || __LIB_0__::func_48(Local_193[6 /*6*/], Local_14.f_35[iVar1], 15f, 1))
								{
									__LIB_2__::func_357(Local_14.f_35[iVar1], Global_36, 5, 1, 1);
									TASK::TASK_SMART_FLEE_PED(Local_14.f_35[iVar1], Global_35, 1000f, -1, 0, 3f, 0);
								}
							}
						}
						iVar1++;
					}
				}
			}
		}
	}
}

void func_2159(var uParam0)
{
	int iVar0;
	func_920(uParam0);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_2599(&(Local_64[iVar0 /*10*/]));
		iVar0++;
	}
}

void func_2160(int iParam0)
{
	VEHICLE::RESET_VEHICLE_STUCK_TIMER(*iParam0, 0);
	VEHICLE::RESET_VEHICLE_STUCK_TIMER(*iParam0, 3);
	VEHICLE::RESET_VEHICLE_STUCK_TIMER(*iParam0, 2);
	VEHICLE::RESET_VEHICLE_STUCK_TIMER(*iParam0, 1);
}

bool func_2163(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return true;
	}
	VEHICLE::_0xA19447D83294E29F(*iParam0, &iVar0, &iVar1);
	if (iVar0 == iVar1)
	{
		return true;
	}
	if (bParam1)
	{
		if (iVar1 >= 1)
		{
			return true;
		}
	}
	return false;
}

bool func_2164(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return false;
	}
	iVar0 = 5000;
	iVar1 = 30000;
	iVar2 = 15000;
	iVar3 = 15000;
	iVar4 = 10000;
	if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*iParam0, 0, iVar0))
	{
		return true;
	}
	if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*iParam0, 3, iVar1))
	{
		return true;
	}
	if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*iParam0, 2, iVar2))
	{
		return true;
	}
	if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*iParam0, 1, iVar3))
	{
		return true;
	}
	if (func_2601(iParam0, iVar4))
	{
		return true;
	}
	return false;
}

void func_2165(int iParam0)
{
	bool bVar0;
	bVar0 = true;
	if (__LIB_0__::func_724(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) == 1 && OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iParam0) <= 0.0001f)
		{
			bVar0 = false;
		}
	}
	if (bVar0)
	{
		__LIB_1__::func_948(iParam0, 1, 0, 0, 0, 0, 0, 0);
	}
}

void func_2166(int iParam0, bool bParam1)
{
	bool bVar0;
	__LIB_0__::func_68(iParam0, 0, 0);
	if (__LIB_0__::func_724(iParam0))
	{
		OBJECT::_0x1BC47A9DEDC8DF5D(iParam0, !bParam1);
	}
	bVar0 = true;
	if (__LIB_0__::func_724(iParam0))
	{
		if ((OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) == 0 && OBJECT::_0x8433E1954BE323FC(iParam0) >= 1f) && OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iParam0) <= 0.0001f)
		{
			bVar0 = false;
		}
	}
	if (bVar0)
	{
		__LIB_1__::func_948(iParam0, 0, 0f, 0, 1, 1f, 0, 0);
	}
}

void func_2167(int iParam0, float fParam1, bool bParam2)
{
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0))
	{
		__LIB_0__::func_68(iParam0, 0, 0);
	}
	if (!bParam2)
	{
		__LIB_11__::func_228(iParam0, fParam1, 1);
	}
	else
	{
		__LIB_4__::func_389(iParam0, 0, 0);
	}
}

void func_2180(var uParam0)
{
	int iVar0;
	int iVar1;
	if (__LIB_4__::func_939(uParam0) == 25 || __LIB_4__::func_939(uParam0) == 26)
	{
		return;
	}
	if (!__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 4096))
	{
		if (__LIB_4__::func_948(uParam0, 4) && !__LIB_4__::func_937(uParam0, 8))
		{
			if (!Global_1935630.f_12)
			{
				if (__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 1))
				{
					if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false))
					{
						if (iVar0 == 0 || iVar0 == joaat("WEAPON_UNARMED"))
						{
							iVar1 = func_2612(128);
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
			func_2613(uParam0);
		}
	}
	if (!Global_1935630.f_12)
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 141, __LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 33));
	}
	if (__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 8192))
	{
		if (__LIB_4__::func_937(uParam0, 1024) || __LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 4))
		{
			if (!Global_1935630.f_12)
			{
				PED::_SET_PED_CROUCH_MOVEMENT(Global_35, true, 0, false);
			}
		}
	}
}

bool func_2285(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (__LIB_1__::func_707(func_2680(iVar0, iParam0), 1, 0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= 4)
	{
		return true;
	}
	return false;
}

bool func_2312(int iParam0, int iParam1)
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
				if (func_2312(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_2312(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_2312(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_2312(iVar21, 1))
				{
				}
			}
		}
		__LIB_1__::func_712();
		return true;
	}
	return false;
}

bool func_2374(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return false;
	}
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*uParam0, Global_35, 1, 1))
	{
		return true;
	}
	if (!__LIB_0__::func_272(*uParam0, 75))
	{
		return true;
	}
	return false;
}

void func_2376(var uParam0)
{
	float fVar0;
	float fVar1;
	if (!__LIB_0__::func_272(*uParam0, 0))
	{
		return;
	}
	if (!bLocal_121)
	{
		bLocal_121 = true;
		PED::_0x06D26A96CA1BCA75(*uParam0, 3, fLocal_108, 0);
	}
	fVar0 = fLocal_108;
	if (PED::_0x5203038FF8BAE577(Global_35, 74, 5000))
	{
		if (__LIB_2__::func_364(*uParam0, 0, 0, 0))
		{
			bLocal_120 = true;
			func_398(35);
		}
		if (bLocal_120)
		{
			fLocal_108 = (fLocal_108 - 0.003f);
			fLocal_108 = __LIB_0__::func_251(fLocal_108, 0f, 1f);
		}
	}
	else if (bLocal_120)
	{
		bLocal_120 = false;
		fLocal_108 = fVar0;
	}
	if (!bLocal_118)
	{
		if ((((PED::IS_PED_RESPONDING_TO_EVENT(*uParam0, -1246119244) || func_2715()) || fVar0 <= 0f) || __LIB_0__::func_394(Global_35, *uParam0, 1)) || PED::_IS_PED_LASSOED(*uParam0))
		{
			TASK::TASK_STAND_STILL(*uParam0, -1);
			bLocal_118 = true;
		}
		else if (!bLocal_118)
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 300, true);
			fVar1 = __LIB_0__::func_251((fVar0 * 2f), 0.101f, 2f);
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(*uParam0, fVar1);
			if (!bLocal_120)
			{
				PED::_0x06D26A96CA1BCA75(*uParam0, 3, fLocal_108, 0);
			}
		}
	}
	else
	{
		func_1300(3, 0, 0, 0, 0, 0);
		PED::_0x2EB75FB86C41F026(*uParam0, 3, 0);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 300, false);
	}
	if (!bLocal_119)
	{
		if (PED::_GET_RIDER_OF_MOUNT(*uParam0, false) == Global_35)
		{
			bLocal_119 = true;
		}
	}
}

bool func_2379()
{
	if (!__LIB_0__::func_272(Local_193[11 /*6*/], 0))
	{
		return true;
	}
	if (!__LIB_0__::func_272(Local_589[0 /*9*/], 0))
	{
		return true;
	}
	if (Local_589[0 /*9*/].f_8 == 4 || Local_589[0 /*9*/].f_8 == 5)
	{
		return true;
	}
	if (iLocal_577 == 11 || iLocal_577 == 12)
	{
		return true;
	}
	if (bLocal_118)
	{
		if (__LIB_0__::func_48(Local_589[0 /*9*/], Local_193[11 /*6*/], (8f * 2f), 1))
		{
			return true;
		}
	}
	return false;
}

bool func_2380()
{
	int iVar0;
	iVar0 = 1;
	if (!__LIB_0__::func_48(Global_35, Local_193[3 /*6*/], 15f, 1))
	{
		func_163(87, 1, 0);
		func_163(88, 1, 0);
		func_163(89, 1, 0);
		if (func_167(55))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if ((func_972(87) != 3 && func_972(88) != 3) && func_972(89) != 3)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_2382(int iParam0)
{
	float fVar0;
	fVar0 = 12f;
	if (func_2379())
	{
		return;
	}
	if (Local_589[0 /*9*/].f_8 != 2)
	{
		return;
	}
	if (iLocal_63 < 6)
	{
		if (!func_167(55))
		{
			return;
		}
	}
	if ((((!func_167(57) || func_1297(87, 1)) || func_1297(88, 1)) || func_1297(89, 1)) || func_1297(90, 1))
	{
		return;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		if (!__LIB_0__::func_48(Global_35, Local_193[11 /*6*/], (fVar0 * 2f), 1))
		{
			return;
		}
	}
	else if (!__LIB_0__::func_48(Global_35, Local_193[11 /*6*/], fVar0, 1))
	{
		return;
	}
	if (__LIB_0__::func_48(Local_589[0 /*9*/], Local_193[11 /*6*/], fVar0, 1))
	{
		return;
	}
	if (__LIB_0__::func_48(Local_589[0 /*9*/], Global_35, fVar0, 1))
	{
		return;
	}
	if (iLocal_1353 == 3)
	{
		return;
	}
	func_1293(iParam0, 0);
	TASK::TASK_LOOK_AT_ENTITY(Local_193[11 /*6*/], Global_35, -1, 0, 51, 0);
}

int func_2383(int iParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
		__LIB_19__::func_190(iParam0, iParam1, uParam3, fParam2, fVar8, sParam7);
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
					if (__LIB_18__::func_381(iParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_2383(iParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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
					__LIB_11__::func_604(iParam1, uParam3);
					if (__LIB_18__::func_382(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
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
					__LIB_18__::func_382(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
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
				if (__LIB_13__::func_289(iParam0, iParam1, fParam4, bVar6))
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
					__LIB_18__::func_382(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
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
				if (__LIB_13__::func_289(iParam0, iParam1, fParam4, bVar6))
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

Vector3 func_2386(int iParam0, var uParam1)
{
	vector3 vVar0;
	char* sVar3;
	int iVar4;
	vector3 vVar5;
	vVar0 = { ENTITY::GET_ENTITY_COORDS(*uParam1, true, false) };
	sVar3 = func_421(iParam0);
	iVar4 = -1;
	if (TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sVar3, vVar0, &iVar4))
	{
		if (TASK::WAYPOINT_RECORDING_GET_COORD(sVar3, iVar4, &vVar5))
		{
			return vVar5;
		}
	}
	return vVar0;
}

void func_2387(int iParam0, char* sParam1, bool bParam2)
{
	if (!func_1912(iParam0))
	{
		return;
	}
	ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_1193[iParam0 /*6*/], sParam1, bParam2, false);
}

void func_2390(var uParam0)
{
	int iVar0;
	vector3 vVar1[3];
	vector3 vVar11;
	vector3 vVar14;
	float fVar17;
	float fVar18;
	vector3 vVar19;
	int iVar22;
	int iVar23;
	int iVar24;
	vVar11 = { 0f, 0f, 0f };
	vVar14 = { ENTITY::GET_ENTITY_COORDS(Local_589[1 /*9*/], true, false) };
	vVar14 = { vVar14 + ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_142, -2.5f, 14f, 0f) };
	vVar14 = { vVar14 * Vector(0.5f, 0.5f, 0.5f) };
	__LIB_3__::func_409(&vVar14, 1088421888 /* Float: 7f */);
	vVar1[0 /*3*/] = { vVar14 };
	vVar1[1 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_142, 4f, -0.5f, 0f) };
	vVar1[2 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_142, -2.5f, -3f, 0f) };
	fVar17 = 9999f;
	vVar19 = { __LIB_3__::func_114(Global_35, Local_193[11 /*6*/], 1065353216 /* Float: 1f */) };
	iVar22 = __LIB_4__::func_352(Global_36, vVar19, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false), 1f);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar23 = __LIB_4__::func_352(Global_36, vVar19, vVar1[iVar0 /*3*/], 1f);
		if (iVar23 == iVar22)
		{
			fVar18 = __LIB_0__::func_94(*uParam0, vVar1[iVar0 /*3*/], 1);
			if (__LIB_0__::func_266(Local_579, vVar1[iVar0 /*3*/], 5f, 1, 1))
			{
				fVar18 = (fVar18 + 100f);
			}
			if (fVar18 < fVar17)
			{
				vVar11 = { vVar1[iVar0 /*3*/] };
				fVar17 = fVar18;
			}
		}
		iVar0++;
	}
	if (__LIB_0__::func_86(vVar11))
	{
		vVar11 = { vVar14 };
	}
	TASK::OPEN_SEQUENCE_TASK(&iVar24);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar11, 1f, -1, 3f, 0, 40000f);
	TASK::_TASK_START_SCENARIO_IN_PLACE(0, joaat("WORLD_ANIMAL_HORSE_GRAZING_CAMP"), -1, true, 0, -1f, false);
	TASK::CLOSE_SEQUENCE_TASK(iVar24);
	TASK::_TASK_PERFORM_SEQUENCE_2(*uParam0, iVar24, 1.5f, 2f);
	TASK::CLEAR_SEQUENCE_TASK(&iVar24);
}

bool func_2391(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = PED::GET_PED_SOURCE_OF_DEATH(*uParam0);
	if (ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
		if (iVar1 == Global_35)
		{
			return true;
		}
		return false;
	}
	if (ENTITY::IS_ENTITY_A_VEHICLE(iVar0))
	{
		iVar2 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar0);
		if (iVar2 == Local_579)
		{
			return true;
		}
		return false;
	}
	return false;
}

bool func_2392(int iParam0, int iParam1)
{
	char* sVar0;
	sVar0 = func_1442(iParam1);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return true;
	}
	if (!ANIMSCENE::_0xA9016536015DE29D(Local_1193[iParam0 /*6*/], sVar0))
	{
		return false;
	}
	if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_1193[iParam0 /*6*/], sVar0))
	{
		return true;
	}
	if (ANIMSCENE::_0x1F0E401031E20146(Local_1193[iParam0 /*6*/], sVar0))
	{
		return true;
	}
	if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_1193[iParam0 /*6*/], sVar0))
	{
		if (ANIMSCENE::_0xDF7B5144E25CD3FE(Local_1193[iParam0 /*6*/], sVar0))
		{
		}
	}
	return false;
}

bool func_2393(int iParam0)
{
	if (__LIB_1__::func_356(*iParam0))
	{
		if (func_2742(iParam0, 100, 1))
		{
			return true;
		}
		return false;
	}
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*iParam0, Global_35, 1, 1))
	{
		return true;
	}
	return false;
}

bool func_2396(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (!func_1612(iParam0) && !func_1611(&Local_1179, iParam0))
	{
		return true;
	}
	if (bParam1)
	{
		iVar0 = func_972(iParam0);
		if (iVar0 == 2 || iVar0 == 9)
		{
			return false;
		}
	}
	iVar1 = iParam0;
	iVar2 = 0;
	while (iVar1 >= 32)
	{
		iVar1 = (iVar1 - 32);
		iVar2++;
	}
	if (iVar2 >= 4)
	{
		return true;
	}
	iVar3 = __LIB_0__::func_771(iVar1);
	__LIB_0__::func_516(&(Local_1179[iVar2]), iVar3);
	__LIB_0__::func_516(&(Local_1179.f_5[iVar2]), iVar3);
	return true;
}

bool func_2404()
{
	if (!func_167(66))
	{
		return true;
	}
	if (!ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Global_35, Local_193[0 /*6*/], 17))
	{
		return true;
	}
	if (!__LIB_0__::func_48(Global_35, Local_193[0 /*6*/], 10f, 1))
	{
		return true;
	}
	return false;
}

int func_2405(int iParam0, bool bParam1)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1193[iParam0 /*6*/]))
	{
		return 1;
	}
	if (bParam1)
	{
		if ((!ANIMSCENE::_0x34A0671BE613D3D0(Local_1193[iParam0 /*6*/]) && !ANIMSCENE::_0xD70C7A30412F8FA0(Local_1193[iParam0 /*6*/])) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_1193[iParam0 /*6*/], false))
		{
			ANIMSCENE::ABORT_ANIM_SCENE(Local_1193[iParam0 /*6*/], false);
		}
		if (ANIMSCENE::_0x34A0671BE613D3D0(Local_1193[iParam0 /*6*/]) || ANIMSCENE::_0x9AAE3C1148A09BCA(Local_1193[iParam0 /*6*/]))
		{
			return 1;
		}
	}
	else if (ANIMSCENE::_0x34A0671BE613D3D0(Local_1193[iParam0 /*6*/]))
	{
		ANIMSCENE::RESUME_ANIM_SCENE_FROM_LAST_CHECKPOINT(Local_1193[iParam0 /*6*/]);
		return 1;
	}
	return 0;
}

bool func_2406()
{
	int iVar0;
	float fVar1;
	if (!func_167(66))
	{
		return false;
	}
	iVar0 = Local_193[0 /*6*/].f_5;
	if (iVar0 != 8)
	{
		fVar1 = (fLocal_113 - fLocal_112);
		if (fVar1 < 1f)
		{
			return false;
		}
	}
	if (!ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Global_35, Local_193[0 /*6*/], 17))
	{
		return false;
	}
	if (!__LIB_0__::func_48(Global_35, Local_193[0 /*6*/], 10f, 1))
	{
		return false;
	}
	return true;
}

bool func_2407(int iParam0, int iParam1, int iParam2)
{
	char* sVar0;
	char* sVar1;
	sVar0 = func_1442(iParam1);
	sVar1 = func_1441(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		return false;
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1193[iParam0 /*6*/]))
	{
		Local_1193[iParam0 /*6*/] = ANIMSCENE::_CREATE_ANIM_SCENE(sVar1, iParam2, sVar0, false, true);
		Local_1193[iParam0 /*6*/].f_5 = iParam1;
		return false;
	}
	if (!Local_1193[iParam0 /*6*/].f_1)
	{
		ANIMSCENE::LOAD_ANIM_SCENE(Local_1193[iParam0 /*6*/]);
		Local_1193[iParam0 /*6*/].f_1 = 1;
		return false;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_1193[iParam0 /*6*/], true, false))
	{
		return false;
	}
	return true;
}

void func_2411(var uParam0, var uParam1)
{
	struct<2> Var0;
	Var0.f_1 = uParam1->f_1;
	Var0 = *uParam1;
	uParam1->f_1 = uParam0->f_1;
	*uParam1 = *uParam0;
	uParam0->f_1 = Var0.f_1;
	*uParam0 = Var0;
}

bool func_2431(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4)
{
	int iVar0;
	struct<4> Var1;
	char* sVar13;
	bool bVar14;
	iVar0 = Local_1193[iParam0 /*6*/];
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iVar0))
	{
		return false;
	}
	bVar14 = false;
	if (iParam4 != 87)
	{
		bVar14 = true;
		sVar13 = func_1442(iParam4);
	}
	if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iVar0, sParam1, &Var1, bVar14, sVar13, 2))
	{
		*uParam2 = { Var1 };
		*uParam3 = Var1.f_3.f_2;
		return true;
	}
	return false;
}

int func_2434(var uParam0, int iParam1, int iParam2)
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
		return func_2434(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

bool func_2570(int iParam0, var uParam1, float fParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	vVar0 = { ENTITY::GET_ENTITY_COORDS(*uParam1, true, false) };
	vVar3 = { func_1401(iParam0, 0) };
	if (__LIB_0__::func_266(*uParam1, vVar3, fParam2, 1, 1))
	{
		return true;
	}
	bVar6 = func_2848(iParam0, 1);
	if (bVar6 <= 0)
	{
		return true;
	}
	if (func_1296(iParam0, bVar6, vVar0))
	{
		return true;
	}
	return false;
}

bool func_2571(char* sParam0, bool bParam1)
{
	if (__LIB_8__::func_684(sParam0))
	{
		return true;
	}
	if (bParam1)
	{
		if (__LIB_10__::func_578(sParam0))
		{
			return true;
		}
	}
	return false;
}

void func_2572(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	iVar0 = 13;
	if (bParam1)
	{
		if (func_1320(13, 1))
		{
			func_1852(iVar0, iParam0);
		}
	}
	if (Local_1193[iVar0 /*6*/].f_2 == 1)
	{
		return;
	}
	if (!func_1911(iVar0, iParam0))
	{
		return;
	}
	if (!func_1912(iVar0))
	{
		return;
	}
	if (bParam2)
	{
		return;
	}
	if (!Local_1193[iVar0 /*6*/].f_2)
	{
		if (__LIB_0__::func_272(Local_193[0 /*6*/], 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1193[iVar0 /*6*/], "uncle", Local_193[0 /*6*/], 0);
		}
		if (__LIB_0__::func_272(Local_193[13 /*6*/], 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1193[iVar0 /*6*/], "U_M_M_VALGENSTOREOWNER_01", Local_193[13 /*6*/], 0);
		}
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_1193[iVar0 /*6*/], false))
	{
		func_1873(iVar0, iParam0, 1);
		ANIMSCENE::START_ANIM_SCENE(Local_1193[iVar0 /*6*/]);
		Local_1193[iVar0 /*6*/].f_2 = 1;
	}
}

bool func_2573(var uParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bVar0 = func_2125(13, iParam1);
	bVar1 = false;
	if (func_1322(13, 0.98f) || func_1321(13, "uncle", 1))
	{
		bVar1 = true;
	}
	iVar2 = func_427(uParam0);
	if (iVar2 != 2)
	{
		if (func_1871(13, "s_Uncle_Idle_Stand_Loop"))
		{
			bVar1 = true;
		}
	}
	if (bVar0 && bVar1)
	{
		func_2572(iParam1, 1, 0);
		if (!Local_1193[13 /*6*/].f_2)
		{
			return false;
		}
		func_1873(13, iParam1, 1);
		return true;
	}
	return false;
}

void func_2574()
{
	if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_148[10], true, 0))
	{
		if (ENTITY::IS_ENTITY_IN_VOLUME(Local_193[0 /*6*/], iLocal_148[10], true, 0))
		{
			func_398(20);
		}
	}
}

bool func_2575()
{
	int iVar0;
	iVar0 = Local_193[1 /*6*/].f_5;
	if (iVar0 == 6)
	{
		return true;
	}
	if (iVar0 == 5)
	{
		if (!TASK::_0x9FF5F9B24E870748(Local_193[1 /*6*/]))
		{
			return true;
		}
	}
	return false;
}

bool func_2576()
{
	int iVar0;
	iVar0 = func_972(82);
	if (iVar0 == 2 || iVar0 == 9)
	{
		return false;
	}
	iVar0 = func_972(73);
	if (iVar0 == 2 || iVar0 == 9)
	{
		return false;
	}
	return true;
}

void func_2577(var uParam0)
{
	int iVar0;
	int iVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return;
	}
	if (func_167(37))
	{
		return;
	}
	if (PED::GET_PED_CONFIG_FLAG(*uParam0, 11, false))
	{
		return;
	}
	iVar0 = PED::GET_PED_SOURCE_OF_DEATH(*uParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0) == Global_35)
	{
		__LIB_4__::func_467(2, joaat("HONOR_EVENT_AMBIENT_KILL"), 0, 0, *uParam0, 0, 1065353216 /* Float: 1f */, 0);
		func_398(37);
		iVar1 = PED::GET_PED_CAUSE_OF_DEATH(*uParam0);
		if (WEAPON::_0x705BE297EEBDB95D(iVar1))
		{
			__LIB_1__::func_683(&(uParam0->f_4), 128);
		}
		func_398(65);
	}
}

bool func_2578(int iParam0, float fParam1, float fParam2, int iParam3)
{
	int iVar0;
	if (ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		return false;
	}
	if (__LIB_2__::func_401(*iParam0, 1, 0, 0, 0, 0))
	{
		return true;
	}
	if (func_2850(ENTITY::GET_ENTITY_COORDS(*iParam0, false, false), fParam2, iParam3))
	{
		return true;
	}
	WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false);
	if (WEAPON::_0x705BE297EEBDB95D(iVar0))
	{
		if ((PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) && PED::IS_PED_FACING_PED(Global_35, *iParam0, fParam1)) && __LIB_0__::func_665(Global_35, *iParam0, 1, 1) < fParam2)
		{
			return true;
		}
	}
	return false;
}

void func_2580(int iParam0)
{
	if (__LIB_3__::func_547(*iParam0, Global_35, 1f) == 2)
	{
		if (__LIB_0__::func_27(iParam0->f_4, 2048))
		{
			PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "FOREMAN_LEFT");
			__LIB_1__::func_681(&(iParam0->f_4), 2048);
		}
		if (!__LIB_0__::func_27(iParam0->f_4, 4096))
		{
			PLAYER::_0x3946FC742AC305CD(PLAYER::PLAYER_ID(), *iParam0, "MUD3_FOREMAN_RIGHT", -315.67f, 774.65f, 117.03f, 0, "FOREMAN_RIGHT");
			__LIB_1__::func_683(&(iParam0->f_4), 4096);
		}
	}
	else
	{
		if (__LIB_0__::func_27(iParam0->f_4, 4096))
		{
			PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "FOREMAN_RIGHT");
			__LIB_1__::func_681(&(iParam0->f_4), 4096);
		}
		if (!__LIB_0__::func_27(iParam0->f_4, 2048))
		{
			PLAYER::_0x3946FC742AC305CD(PLAYER::PLAYER_ID(), *iParam0, "MUD3_FOREMAN_LEFT", -315.67f, 774.65f, 117.03f, 0, "FOREMAN_LEFT");
			__LIB_1__::func_683(&(iParam0->f_4), 2048);
		}
	}
}

bool func_2581(int iParam0, int iParam1)
{
	if (__LIB_3__::func_547(*iParam0, Global_35, 1f) == 2)
	{
		__LIB_1__::func_683(&(iParam0->f_4), 8192);
		switch (iParam1)
		{
			case 0:
				return func_1873(15, 80, 1);
			case 1:
				return func_1873(15, 78, 1);
			case 2:
				return func_1873(15, 76, 1);
		}
	}
	else
	{
		__LIB_1__::func_681(&(iParam0->f_4), 8192);
		switch (iParam1)
		{
			case 0:
				return func_1873(15, 79, 1);
			case 1:
				return func_1873(15, 77, 1);
			case 2:
				return func_1873(15, 75, 1);
		}
	}
	return true;
}

bool func_2582(var uParam0, int iParam1)
{
	char* sVar0;
	sVar0 = func_447(iParam1);
	if (__LIB_5__::func_314(uParam0, sVar0, 1))
	{
		return true;
	}
	return false;
}

int func_2583(int iParam0)
{
	char* sVar0;
	if (func_1611(&Local_1179, iParam0))
	{
		return 1;
	}
	sVar0 = func_447(iParam0);
	if (__LIB_7__::func_175(sVar0))
	{
		func_452(iParam0);
	}
	return 0;
}

void func_2584(int iParam0)
{
	if (!__LIB_0__::func_272(*iParam0, 0))
	{
		return;
	}
	switch (Local_545)
	{
		case 0:
			if (__LIB_0__::func_266(*iParam0, Global_36, 30f, 1, 1))
			{
				if (!__LIB_2__::func_618(&(Local_545.f_26)))
				{
					func_2852(iParam0);
					__LIB_8__::func_901(&(Local_545.f_26), 0);
				}
				else if (__LIB_5__::func_51(&(Local_545.f_26)) > 10f)
				{
					__LIB_2__::func_608(&(Local_545.f_26));
				}
			}
			break;
		case 1:
			_NAMESPACE29::_0x66F9EB44342BB4C5(*iParam0, &(Local_545.f_1));
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, sLocal_122, Local_545.f_29, 1))
			{
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(*iParam0, sLocal_122, Local_545.f_29) >= 0.98f)
				{
					func_2853(iParam0);
				}
			}
			break;
		case 2:
			_NAMESPACE29::_0x66F9EB44342BB4C5(*iParam0, &(Local_545.f_1));
			if (!__LIB_0__::func_266(*iParam0, Global_36, 30f, 1, 1) || __LIB_5__::func_51(&(Local_545.f_26)) > 5.5f)
			{
				func_2854(iParam0);
			}
			break;
		case 3:
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, sLocal_122, Local_545.f_29, 1))
			{
				func_2855();
			}
			break;
	}
}

void func_2585(float fParam0)
{
	float fVar0;
	int iVar1;
	fVar0 = 0.1f;
	if (fLocal_109 < fParam0)
	{
		fLocal_109 = (fLocal_109 + fVar0);
		if (fLocal_109 > fParam0)
		{
			fLocal_109 = fParam0;
		}
	}
	else if (fLocal_109 > fParam0)
	{
		fLocal_109 = (fLocal_109 - fVar0);
		if (fLocal_109 < fParam0)
		{
			fLocal_109 = fParam0;
		}
	}
	iVar1 = PED::GET_MOUNT(Global_35);
	if (!__LIB_0__::func_272(iVar1, 1))
	{
		return;
	}
	PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar1, fLocal_109);
}

float func_2587(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	vVar0 = { func_2386(1, &Global_35) };
	fVar3 = __LIB_0__::func_94(*iParam0, vVar0, 1);
	fVar4 = (fParam3 - fParam4);
	fVar5 = __LIB_9__::func_231(((fVar3 - fParam4) / fVar4), 0f, 1f);
	fVar6 = (fParam1 - fParam2);
	fVar7 = (fParam2 + ((1f - fVar5) * fVar6));
	TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(*iParam0, fVar7, 0, 0.4f, 0);
	return fVar7;
}

float func_2588(int iParam0, float fParam1, float fParam2, float fParam3)
{
	float fVar0;
	float fVar1;
	fVar0 = func_2858();
	if (__LIB_0__::func_48(Global_35, *iParam0, fParam3, 1))
	{
		fVar1 = func_2859(iParam0, fParam3);
		return (fParam2 * (fVar1 * fVar0));
	}
	return (fParam1 * fVar0);
}

void func_2589(int iParam0, bool bParam1)
{
	int iVar0;
	Local_1007.f_27 = fLocal_109;
	if (!__LIB_2__::func_618(&uLocal_495))
	{
		__LIB_5__::func_107(&uLocal_495);
	}
	if (__LIB_14__::func_171(&uLocal_495) < 6000)
	{
		bParam1 = false;
	}
	if (__LIB_5__::func_463())
	{
		bParam1 = false;
	}
	if (func_1297(54, 1))
	{
		bParam1 = false;
	}
	if (func_972(50) != 3 || func_1293(51, 0) != 3)
	{
		bParam1 = false;
	}
	if (__LIB_6__::func_903(func_447(70)))
	{
		func_163(54, 1, 1);
		bParam1 = false;
	}
	if (!bParam1)
	{
		if (!func_167(59))
		{
			func_398(59);
			__LIB_3__::func_515(&(Local_989[0 /*17*/]), 0, 0);
		}
	}
	else if (func_167(59))
	{
		if (func_972(54) == 3)
		{
			func_2396(54, 1);
		}
		__LIB_3__::func_515(&(Local_989[0 /*17*/]), 1, 0);
		func_168(59);
	}
	__LIB_1__::func_471(&(Local_893[0 /*17*/]), 10);
	iVar0 = -1;
	iVar0 = func_2383(iParam0, &Local_1007, 60f, &Local_989, 0.1f, 3, 0, 0, 8467, 0, 0, 2, -1082130432 /* Float: -1f */);
	if (iVar0 != -1)
	{
		func_1293(54, 0);
		__LIB_5__::func_107(&uLocal_495);
	}
}

bool func_2590(int iParam0)
{
	vector3 vVar0;
	float fVar3;
	vVar0 = { -354.36f, 490.68f, 95.61f };
	fVar3 = 3f;
	if (((((((FIRE::IS_EXPLOSION_IN_SPHERE(25, vVar0, fVar3) || FIRE::IS_EXPLOSION_IN_SPHERE(0, vVar0, fVar3)) || FIRE::IS_EXPLOSION_IN_SPHERE(2, vVar0, fVar3)) || FIRE::IS_EXPLOSION_IN_SPHERE(30, vVar0, fVar3)) || FIRE::IS_EXPLOSION_IN_SPHERE(31, vVar0, fVar3)) || FIRE::IS_EXPLOSION_IN_SPHERE(29, vVar0, fVar3)) || FIRE::IS_EXPLOSION_IN_SPHERE(26, vVar0, fVar3)) || FIRE::IS_EXPLOSION_IN_SPHERE(27, vVar0, fVar3))
	{
		return true;
	}
	if (PED::_0x9C81338B2E62CE0A(PLAYER::PLAYER_ID(), *iParam0, 1000))
	{
		return true;
	}
	if (MISC::IS_BULLET_IN_AREA(-354.31f, 490.35f, 95.6f, 0.25f, true) || MISC::IS_BULLET_IN_AREA(-354.66f, 490.37f, 95.58f, 0.25f, true))
	{
		return true;
	}
	return false;
}

bool func_2591()
{
	float fVar0;
	if (!__LIB_0__::func_272(Local_193[6 /*6*/], 0))
	{
		return false;
	}
	fVar0 = __LIB_0__::func_665(Global_35, Local_193[6 /*6*/], 1, 1);
	if (fVar0 < fLocal_107)
	{
		fLocal_107 = fVar0;
		__LIB_2__::func_608(&uLocal_519);
	}
	else
	{
		if ((fVar0 - fLocal_107) > 30f)
		{
			return true;
		}
		if (!__LIB_2__::func_618(&uLocal_519))
		{
			__LIB_5__::func_107(&uLocal_519);
		}
	}
	if (fLocal_107 < 15f || __LIB_14__::func_171(&uLocal_519) > 15000)
	{
		if (!__LIB_2__::func_618(&uLocal_399))
		{
			__LIB_5__::func_107(&uLocal_399);
		}
	}
	if (__LIB_9__::func_324(&uLocal_399) > 40f)
	{
		return true;
	}
	return false;
}

bool func_2592(int iParam0)
{
	int iVar0;
	iVar0 = -1;
	if (!__LIB_0__::func_393(Global_35, iLocal_148[35], 0, 1))
	{
		__LIB_1__::func_471(&(Local_893[0 /*17*/]), 9);
		__LIB_1__::func_471(&(Local_893[1 /*17*/]), 9);
	}
	switch (iLocal_528)
	{
		case 0:
			if (!func_167(85))
			{
				if (MAP::DOES_BLIP_EXIST(Local_193[6 /*6*/].f_1))
				{
					__LIB_3__::func_49(&iLocal_928, Local_193[6 /*6*/].f_1, 0);
					__LIB_3__::func_95(&iLocal_928, *iParam0, Local_193[6 /*6*/].f_1, 0);
					func_398(85);
				}
			}
			iVar0 = func_2863(iParam0);
			if (iVar0 != -1)
			{
				if (iVar0 == 0)
				{
					func_2864(1, iParam0);
					Jump @459; //curOff = 187
				}
				else if (iVar0 == 1)
				{
					func_1560(iParam0, 5, 0);
					return true;
				}
			}
			func_2865(iParam0, 0);
			break;
		case 1:
			if (__LIB_0__::func_153(Global_35, 0, 1, 0) == joaat("WEAPON_UNARMED") && !func_1297(61, 0))
			{
				func_2864(2, iParam0);
			}
			else
			{
				__LIB_3__::func_815(0, 1065353216 /* Float: 1f */);
				iVar0 = func_2863(iParam0);
				if (iVar0 != -1)
				{
					if (iVar0 == 1)
					{
						func_2864(5, iParam0);
					}
					else
					{
						Jump @459; //curOff = 303
						if (func_1873(5, 15, 0))
						{
							func_2864(3, iParam0);
						}
						else
						{
							__LIB_3__::func_815(0, 1065353216 /* Float: 1f */);
							iVar0 = func_2863(iParam0);
							if (iVar0 != -1)
							{
								if (iVar0 == 1)
								{
									func_2864(5, iParam0);
								}
								else
								{
									Jump @459; //curOff = 367
									iVar0 = func_2863(iParam0);
									if (iVar0 != -1)
									{
										if (iVar0 == 0)
										{
											func_2864(4, iParam0);
											Jump @459; //curOff = 397
										}
										else if (iVar0 == 1)
										{
											func_2864(5, iParam0);
										}
										else
										{
											func_2865(iParam0, 1);
											Jump @459; //curOff = 426
											func_1560(iParam0, 6, 0);
											return true;
											Jump @459; //curOff = 441
											func_1560(iParam0, 5, 0);
											return true;
										}
										return false;
									}
								}
							}
						}
					}
				}
			}
			default:
				break;
	}
}

bool func_2595(int iParam0)
{
	struct<28> Var0;
	int iVar28;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return false;
	}
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
	iVar28 = 2563;
	__LIB_10__::func_590(&Var0, 1);
	__LIB_1__::func_393(&Var0, 1);
	__LIB_2__::func_956(&Var0, 1);
	if (func_2874(*iParam0, 0, &Var0, &iVar28, 0, 0))
	{
		return true;
	}
	return false;
}

void func_2596(var uParam0, int iParam1)
{
	if (func_2875())
	{
		return;
	}
	if (iLocal_575 != 0)
	{
		if (__LIB_0__::func_393(Global_35, iLocal_148[0], 0, 1))
		{
			func_1293(42, 0);
		}
	}
	if (__LIB_0__::func_393(Global_35, iLocal_148[1], 0, 1))
	{
		if (*iParam1 >= 3)
		{
			if (func_1293(40, 0) == 3)
			{
				if (__LIB_9__::func_324(&uLocal_432) > 2f)
				{
					func_1293(41, 0);
				}
			}
		}
		else
		{
			func_1293(41, 0);
		}
	}
	if (__LIB_0__::func_393(Global_35, iLocal_148[0], 0, 1))
	{
		func_2876(iParam1);
		func_1292(uParam0, 4);
	}
}

bool func_2597(int iParam0)
{
	if (__LIB_3__::func_547(*iParam0, Global_35, 0.707f) == 0)
	{
		return false;
	}
	if (func_1297(36, 1))
	{
		return true;
	}
	if (func_1297(37, 1))
	{
		return true;
	}
	if (func_1297(38, 1))
	{
		return true;
	}
	if (func_1297(39, 1))
	{
		return true;
	}
	if (func_1297(40, 1))
	{
		return true;
	}
	if (func_1297(41, 1))
	{
		return true;
	}
	if (func_1297(42, 1))
	{
		return true;
	}
	if (func_1297(43, 1))
	{
		return true;
	}
	return false;
}

void func_2598(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	iVar0 = iParam0->f_5;
	if (!__LIB_0__::func_272(*iParam0, 0))
	{
		iParam1 = 4;
	}
	if (iVar0 == iParam1 && !bParam2)
	{
		return;
	}
	iParam0->f_5 = iParam1;
	switch (iParam1)
	{
		case 0:
			break;
		case 1:
			__LIB_1__::func_473(*iParam0, joaat("WORLD_HUMAN_SMOKE"), -1, 0, 0, -1082130432 /* Float: -1f */);
			break;
		case 2:
			PED::_0xF1C03A5352243A30(*iParam0);
			PED::_0xAAB050DA48B57978(*iParam0, "Default_Angry", Global_35, -1, 4);
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_LOOK_AT_ENTITY(0, Global_35, -1, 0, 51, 0);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -346.91f, 742.33f, 117.32f, 3f, -1, 1f, 0, 40000f);
			TASK::TASK_REACT(0, Global_35, Global_36, "Default_Angry", 30f, 30f, 4);
			TASK::CLOSE_SEQUENCE_TASK(iVar1);
			TASK::TASK_PERFORM_SEQUENCE(*iParam0, iVar1);
			TASK::CLEAR_SEQUENCE_TASK(&iVar1);
			break;
		case 3:
			break;
		case 4:
			break;
	}
}

void func_2599(int* iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0) || !ENTITY::DOES_ENTITY_EXIST(iParam0->f_1))
	{
		return;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false, false))
	{
		func_2877(iParam0, 4);
	}
	switch (iParam0->f_8)
	{
		case 0:
			func_2877(iParam0, 1);
			break;
		case 1:
			func_2877(iParam0, 2);
			break;
		case 2:
			if (__LIB_0__::func_48(Global_35, *iParam0, iParam0->f_6, 1))
			{
				func_2877(iParam0, 3);
			}
			break;
		case 3:
			if (!__LIB_0__::func_48(Global_35, *iParam0, (iParam0->f_6 + 50f), 1))
			{
				func_2877(iParam0, 4);
			}
			break;
		case 4:
			break;
	}
}

bool func_2601(int iParam0, int iParam1)
{
	if (func_2878(iParam0))
	{
		if (!__LIB_2__::func_618(&(iParam0->f_7)))
		{
			__LIB_5__::func_107(&(iParam0->f_7));
		}
		if (__LIB_11__::func_406(&(iParam0->f_7)) >= iParam1)
		{
			return true;
		}
	}
	else
	{
		__LIB_2__::func_608(&(iParam0->f_7));
	}
	return false;
}

int func_2612(int iParam0)
{
	var uVar0;
	var uVar4;
	int iVar8;
	int iVar9;
	iVar8 = func_1439(&uVar0, iParam0, 0);
	iVar9 = func_2434(&uVar4, iParam0, 0);
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

void func_2613(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (!Global_1935630.f_12)
	{
		if (uParam0->f_7374 != 0 && uParam0->f_7374 != joaat("WEAPON_UNARMED"))
		{
			if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false))
			{
				if (iVar0 != uParam0->f_7374)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, uParam0->f_7374, true, 0, false, false);
				}
			}
			else if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, uParam0->f_7374, 0, false))
			{
				if (WEAPON::GET_AMMO_IN_PED_WEAPON(Global_35, uParam0->f_7374) > 0)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, uParam0->f_7374, true, 0, false, false);
				}
			}
		}
		else if ((__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 1) && !__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 4)) && __LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 2))
		{
			if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar1, true, 0, false))
			{
				if (iVar1 == 0 || iVar1 == joaat("WEAPON_UNARMED"))
				{
					iVar2 = func_2612(128);
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
				iVar3 = func_2612(128);
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

int func_2680(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return __LIB_0__::func_678(iParam0);
		case 1:
			return __LIB_0__::func_679(iParam0);
		case 2:
			return func_2904(iParam0);
		case 3:
			return func_2905(iParam0);
		case 4:
			return __LIB_0__::func_682(iParam0);
		case 5:
			return __LIB_0__::func_683(iParam0);
		case 6:
			return __LIB_0__::func_684(iParam0);
		case 7:
			return __LIB_0__::func_685(iParam0);
		case 8:
			return __LIB_0__::func_686(iParam0);
	}
	return 0;
}

bool func_2715()
{
	int iVar0;
	iVar0 = PED::_0xBF5E791BBBF90A3C(Global_35, "HumanInteractionType");
	if (iVar0 == 0)
	{
		return false;
	}
	if ((iVar0 == joaat("INTERACTION_POSITIVELONG") || iVar0 == joaat("INTERACTION_POSITIVESHORT")) || iVar0 == joaat("INTERACTION_POSITIVESHORTAGITATED"))
	{
		return true;
	}
	return false;
}

bool func_2742(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	if (bParam2)
	{
		if (WEAPON::_0x9E2D5D6BC97A5F1E(*iParam0, joaat("WEAPON_UNARMED"), iParam1))
		{
			return false;
		}
	}
	iVar0 = __LIB_0__::func_153(Global_35, 0, 1, 0);
	iVar1 = __LIB_0__::func_153(Global_35, 1, 1, 0);
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
		if (WEAPON::_0x9E2D5D6BC97A5F1E(*iParam0, iVar0, iParam1))
		{
			return true;
		}
	}
	if (WEAPON::IS_WEAPON_VALID(iVar1))
	{
		if (WEAPON::_0x9E2D5D6BC97A5F1E(*iParam0, iVar1, iParam1))
		{
			return true;
		}
	}
	return false;
}

int func_2848(int iParam0, int iParam1)
{
	char[] cVar0[8];
	int iVar1;
	cVar0 = func_421(iParam0);
	iVar1 = -1;
	if (TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(cVar0, &iVar1))
	{
		return (iVar1 - (1 + iParam1));
	}
	return iVar1;
}

bool func_2850(vector3 vParam0, float fParam3, var uParam4)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	float fVar7;
	vector3 vVar8;
	WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false);
	if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) && WEAPON::_0x705BE297EEBDB95D(iVar0))
	{
		vVar1 = { CAM::GET_GAMEPLAY_CAM_COORD() };
		vVar4 = { __LIB_1__::func_384(CAM::GET_RENDERING_CAM()) };
		fVar7 = BUILTIN::VMAG(Global_36 - vVar1);
		vVar8 = { vVar1 + vVar4 * FtoV((fVar7 + fParam3)) };
		if (__LIB_3__::func_874(vVar1, vVar8, vParam0, uParam4))
		{
			return true;
		}
	}
	return false;
}

void func_2852(int iParam0)
{
	Local_545.f_29 = "intro_90l";
	if (__LIB_3__::func_547(*iParam0, Global_35, 1060437492 /* Float: 0.707f */) == 2)
	{
		Local_545.f_29 = "intro_90r";
	}
	TASK::TASK_PLAY_ANIM(*iParam0, sLocal_122, Local_545.f_29, 8f, -8f, -1, 26, 0f, false, 65536, false, 0, false);
	func_2986(1);
}

void func_2853(int iParam0)
{
	Local_545.f_29 = "cnt_aim_90l";
	if (__LIB_3__::func_547(*iParam0, Global_35, 1060437492 /* Float: 0.707f */) == 2)
	{
		Local_545.f_29 = "cnt_aim_90r";
	}
	TASK::TASK_PLAY_ANIM(*iParam0, sLocal_122, Local_545.f_29, 8f, -8f, -1, 24, 0f, false, 65536, false, 0, false);
	func_2986(2);
}

void func_2854(int iParam0)
{
	Local_545.f_29 = "outro_90l";
	if (__LIB_3__::func_547(*iParam0, Global_35, 1060437492 /* Float: 0.707f */) == 2)
	{
		Local_545.f_29 = "outro_90r";
	}
	TASK::TASK_PLAY_ANIM(*iParam0, sLocal_122, Local_545.f_29, 8f, -8f, -1, 24, 0f, false, 65536, false, 0, false);
	func_2986(3);
}

void func_2855()
{
	func_2986(0);
}

float func_2858()
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	vVar0 = { func_2386(1, &Global_35) };
	fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vVar0, true);
	fVar4 = 10f;
	fVar5 = 30f;
	fVar6 = (fVar5 - fVar4);
	fVar7 = __LIB_9__::func_231(((fVar3 - fVar4) / fVar6), 0f, 1f);
	fVar8 = 1f;
	fVar9 = 0.7f;
	fVar10 = (fVar8 - fVar9);
	fVar11 = (fVar9 + ((1f - fVar7) * fVar10));
	return fVar11;
}

float func_2859(int iParam0, float fParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	fVar0 = __LIB_0__::func_665(*iParam0, Global_35, 1, 1);
	fVar1 = (fParam1 - 5f);
	fVar2 = (fParam1 - fVar1);
	fVar3 = __LIB_9__::func_231(((fVar0 - fVar1) / fVar2), 0f, 1f);
	fVar4 = 1f;
	fVar5 = 0.85f;
	fVar6 = (fVar4 - fVar5);
	fVar7 = (fVar5 + (fVar3 * fVar6));
	return fVar7;
}

int func_2863(int iParam0)
{
	return func_2383(iParam0, &iLocal_928, 5f, &Local_893, 0.1f, 3, 0, 0, 10320, 0, 0, 2, -1082130432 /* Float: -1f */);
}

void func_2864(int iParam0, int iParam1)
{
	if (iLocal_528 == iParam0)
	{
		return;
	}
	iLocal_528 = iParam0;
	switch (iLocal_528)
	{
		case 0:
			break;
		case 1:
			if (__LIB_0__::func_153(Global_35, 0, 1, 0) != joaat("WEAPON_UNARMED"))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
				TASK::TASK_SWAP_WEAPON(Global_35, 0, 0, 0, 0);
			}
			__LIB_3__::func_515(&(Local_893[0 /*17*/]), 0, 0);
			__LIB_3__::func_157(&(Local_893[1 /*17*/]), "MUD3_C_KILL", 0, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
			__LIB_1__::func_471(&(Local_893[1 /*17*/]), 10);
			__LIB_1__::func_471(&(Local_893[1 /*17*/]), 5);
			__LIB_1__::func_471(&(Local_893[1 /*17*/]), 17);
			__LIB_5__::func_107(&uLocal_399);
			__LIB_1__::func_683(&(iParam1->f_4), 1024);
			func_163(61, 1, 0);
			break;
		case 2:
			if (!__LIB_0__::func_27(iParam1->f_4, 16))
			{
				WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 0, 1);
				__LIB_0__::func_202(Global_35, 0);
				if (!__LIB_0__::func_27(iParam1->f_4, 4096))
				{
					PLAYER::_0x3946FC742AC305CD(PLAYER::PLAYER_ID(), *iParam1, "MUD3_WITNESS_CLIFF", -354.41f, 490.47f, 95.6f, 0, "WITNESS_CLIFF");
					__LIB_1__::func_683(&(iParam1->f_4), 4096);
				}
				__LIB_3__::func_515(&(Local_893[0 /*17*/]), 0, 0);
				__LIB_3__::func_157(&(Local_893[1 /*17*/]), "MUD3_C_KILL", 0, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
				__LIB_1__::func_471(&(Local_893[1 /*17*/]), 10);
				__LIB_1__::func_471(&(Local_893[1 /*17*/]), 5);
				__LIB_1__::func_471(&(Local_893[1 /*17*/]), 17);
				__LIB_5__::func_107(&uLocal_399);
				__LIB_1__::func_683(&(iParam1->f_4), 1024);
				func_163(61, 0, 0);
				func_1873(5, 12, 1);
				__LIB_1__::func_683(&(iParam1->f_4), 16);
			}
			break;
		case 3:
			if (!__LIB_0__::func_27(iParam1->f_4, 32))
			{
				if (__LIB_0__::func_27(iParam1->f_4, 4096))
				{
					PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), "WITNESS_CLIFF");
					__LIB_1__::func_681(&(iParam1->f_4), 4096);
				}
				__LIB_11__::func_598(&iLocal_928, 0);
				__LIB_13__::func_285(&iLocal_928, &Local_893, 0, iParam1->f_1, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
				__LIB_3__::func_157(&(Local_893[0 /*17*/]), "MUD3_C_HELP", 0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				__LIB_1__::func_471(&(Local_893[0 /*17*/]), 10);
				__LIB_1__::func_471(&(Local_893[0 /*17*/]), 5);
				__LIB_1__::func_471(&(Local_893[0 /*17*/]), 17);
				__LIB_3__::func_157(&(Local_893[1 /*17*/]), "MUD3_C_KILL", 0, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
				__LIB_1__::func_471(&(Local_893[1 /*17*/]), 10);
				__LIB_1__::func_471(&(Local_893[1 /*17*/]), 5);
				__LIB_1__::func_471(&(Local_893[1 /*17*/]), 17);
				__LIB_1__::func_681(&(iParam1->f_4), 1024);
				__LIB_1__::func_683(&(iParam1->f_4), 32);
			}
			break;
		case 4:
		case 5:
			__LIB_5__::func_107(&uLocal_399);
			__LIB_1__::func_683(&(iParam1->f_4), 1024);
			func_163(62, 1, 0);
			break;
	}
}

void func_2865(int iParam0, bool bParam1)
{
	int iVar0;
	if (__LIB_0__::func_27(iParam0->f_4, 1024))
	{
		func_163(61, 0, 0);
		func_163(62, 0, 0);
		__LIB_2__::func_608(&uLocal_480);
		return;
	}
	if (!__LIB_2__::func_618(&uLocal_480))
	{
		__LIB_5__::func_107(&uLocal_480);
	}
	if (__LIB_9__::func_324(&uLocal_480) > 6f)
	{
		iVar0 = 61;
		if (bParam1)
		{
			iVar0 = 62;
		}
		if (func_1906(iVar0, 0))
		{
			__LIB_2__::func_608(&uLocal_480);
			return;
		}
	}
}

bool func_2874(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, float fParam5)
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
				*iParam3 = 128;
				__LIB_2__::func_831(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (__LIB_4__::func_237(iParam0, uParam2))
				{
					*iParam3 = 8;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
					return true;
				}
				else if (__LIB_2__::func_969(iParam0, iParam1, uParam2))
				{
					*iParam3 = 8;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (__LIB_4__::func_235(iParam0, uParam2))
				{
					*iParam3 = 64;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && __LIB_1__::func_394(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*iParam3 = 16384;
				__LIB_2__::func_831(iParam0, uParam2, *iParam3);
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
						*iParam3 = 4;
						__LIB_2__::func_831(iParam0, uParam2, *iParam3);
						return true;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (__LIB_2__::func_876(Global_35, iParam0, uParam2))
					{
						*iParam3 = 256;
						__LIB_2__::func_831(iParam0, uParam2, *iParam3);
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
					*iParam3 = 16;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			else if (__LIB_2__::func_877(Global_35, iParam0, uParam2, 1))
			{
				*iParam3 = 16;
				__LIB_2__::func_831(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (__LIB_2__::func_971(iParam0, uParam2))
				{
					*iParam3 = 32;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
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
					*iParam3 = 4096;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
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
						*iParam3 = 2;
						__LIB_2__::func_831(iParam0, uParam2, *iParam3);
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
					*iParam3 = 2;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
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
								*iParam3 = 2;
								__LIB_2__::func_831(iParam0, uParam2, *iParam3);
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
							*iParam3 = 2;
							__LIB_2__::func_831(iParam0, uParam2, *iParam3);
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
						*iParam3 = 2;
						__LIB_2__::func_831(iParam0, uParam2, *iParam3);
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
							*iParam3 = 2;
							__LIB_2__::func_831(iParam0, uParam2, *iParam3);
							return true;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (__LIB_5__::func_678(uParam2, iParam0))
			{
				*iParam3 = 1024;
				__LIB_2__::func_831(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (__LIB_2__::func_867(iParam0, iParam1, uParam2))
				{
					*iParam3 = 2048;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (__LIB_5__::func_683(iParam0, uParam2))
					{
						*iParam3 = 8192;
						__LIB_2__::func_831(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (__LIB_2__::func_228(iParam0, uParam2))
				{
					*iParam3 = 32768;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
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
						*iParam3 = 512;
						__LIB_2__::func_831(iParam0, uParam2, *iParam3);
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
					*iParam3 = 65536;
					uParam2->f_4 = 0;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
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
				*iParam3 = 1;
				__LIB_2__::func_831(iParam0, uParam2, *iParam3);
				return true;
			}
		}
	}
	return false;
}

bool func_2875()
{
	if (func_972(43) == 3)
	{
		return false;
	}
	if (__LIB_0__::func_393(Global_35, iLocal_148[15], 0, 1) || func_167(51))
	{
		func_398(51);
		if (!__LIB_2__::func_618(&uLocal_432))
		{
			__LIB_5__::func_107(&uLocal_432);
		}
		if (__LIB_14__::func_171(&uLocal_432) > 2000)
		{
			func_1293(43, 0);
		}
		return true;
	}
	return false;
}

void func_2876(int iParam0)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	if (!__LIB_2__::func_618(&uLocal_432))
	{
		__LIB_5__::func_107(&uLocal_432);
	}
	uVar0 = Local_193[8 /*6*/];
	if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &uVar0, false, false))
	{
		__LIB_2__::func_620(&uLocal_432, 2f);
	}
	if (func_972(43) == 9)
	{
		__LIB_5__::func_107(&uLocal_432);
		return;
	}
	iVar1 = 6000;
	if (func_972(38) == 3)
	{
		iVar1 = 12000;
	}
	if (__LIB_11__::func_406(&uLocal_432) < iVar1)
	{
		return;
	}
	if (__LIB_0__::func_393(Global_35, iLocal_148[14], 0, 1))
	{
		if (func_972(38) == 3)
		{
			return;
		}
	}
	bVar2 = false;
	if (*iParam0 == 2)
	{
		if (func_1906(37, 0))
		{
			bVar2 = true;
		}
	}
	else if (func_972(38) == 3)
	{
		if (func_1906(39, 0))
		{
			bVar2 = true;
		}
	}
	else
	{
		__LIB_5__::func_107(&uLocal_432);
	}
	if (bVar2)
	{
		__LIB_5__::func_107(&uLocal_432);
	}
}

void func_2877(int* iParam0, int iParam1)
{
	if (iParam0->f_8 == iParam1)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0) || !ENTITY::DOES_ENTITY_EXIST(iParam0->f_1))
	{
		return;
	}
	if (!__LIB_0__::func_272(iParam0->f_1, 79) || !VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false, false))
	{
		iParam1 = 4;
	}
	if (PED::GET_PED_RESET_FLAG(Global_35, 297))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0->f_1, 130, true);
	}
	iParam0->f_8 = iParam1;
	switch (iParam0->f_8)
	{
		case 0:
			break;
		case 1:
			if (!PED::IS_PED_IN_VEHICLE(iParam0->f_1, *iParam0, false))
			{
				PED::SET_PED_INTO_VEHICLE(iParam0->f_1, *iParam0, -1);
			}
			break;
		case 2:
			break;
		case 3:
			TASK::_TASK_VEHICLE_DRIVE_TO_DESTINATION(iParam0->f_1, *iParam0, iParam0->f_2, iParam0->f_7, 2621571, 6, 5f, 5f, 0);
			break;
		case 4:
			func_466(iParam0, 1);
			break;
	}
}

bool func_2878(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(*iParam0, iVar0);
		if (!__LIB_0__::func_272(iVar1, 0))
		{
		}
		else if (func_3019(&iVar1, 1065353216 /* Float: 1f */))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_2904(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_BOAR");
			return joaat("PROVISION_REINFORCED_GUNBELT_BOAR");
			return joaat("PROVISION_REINFORCED_HOLSTER_BOAR");
			return joaat("PROVISION_REINFORCED_OFFHAND_BOAR");
			return 0;
		}
int func_2905(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_BUFFALO");
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_BUFFALO");
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_BUFFALO");
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_BUFFALO");
		default:
			break;
	}
	return 0;
}

void func_2986(int iParam0)
{
	Local_545 = iParam0;
}

bool func_3019(int iParam0, float fParam1)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	vector3 vVar5;
	fVar0 = 0f;
	fVar1 = 0f;
	if (!__LIB_0__::func_272(*iParam0, 1))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_IN_WATER(*iParam0))
	{
		return false;
	}
	vVar5 = { ENTITY::GET_ENTITY_COORDS(*iParam0, false, false) };
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar5, &fVar1, false) && WATER::TEST_PROBE_AGAINST_ALL_WATER(vVar5 + Vector(50f, 0f, 0f), vVar5 - Vector(50f, 0f, 0f), 0, &vVar2) == 1)
	{
		fVar0 = (vVar2.z - fVar1);
		if (fVar0 >= fParam1)
		{
			return true;
		}
	}
	return false;
}

