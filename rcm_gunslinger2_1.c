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
	struct<7> Local_14 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_21 = 0;
	struct<62> Local_22 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 1065353216, 0, 0, 0, 0, 0, -1082130432, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 1119092736, 1092616192, 1085276160, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_94 = -1;
	var uLocal_95 = -1;
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
	struct<84> Local_116 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, -1082130432, -1082130432, -1082130432, 1, 1050253722 } ;
	var uLocal_200 = 3000;
	var uLocal_201 = 6000;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = -1;
	int iLocal_207 = 0;
	int iLocal_208 = 0;
	int iLocal_209 = 0;
	int iLocal_210 = 0;
	bool bLocal_211 = false;
	bool bLocal_212 = false;
	bool bLocal_213 = false;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	int iLocal_218 = 0;
	int iLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	bool bLocal_224 = false;
	vector3 vLocal_225 = { 0f, 0f, 0f };
	vector3 vLocal_228 = { 0f, 0f, 0f };
	vector3 vLocal_231 = { 0f, 0f, 0f };
	vector3 vLocal_234 = { 0f, 0f, 0f };
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	int iLocal_243 = 0;
	int iLocal_244 = 0;
	int iLocal_245 = 0;
	int iLocal_246 = 0;
	struct<47> Local_247[5];
	int iLocal_483[5] = { 0, 0, 0, 0, 0 };
	int iLocal_489 = 0;
	int iLocal_490 = 0;
	int iLocal_491 = 0;
	int iLocal_492 = 0;
	var uLocal_493 = -1;
	var uLocal_494 = 0;
	var uLocal_495 = -1;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = -1;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 1073741824;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 1;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	struct<17> Local_513[2];
	int iLocal_548 = 0;
	var uLocal_549 = -1;
	var uLocal_550 = 0;
	var uLocal_551 = -1;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = -1;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 1073741824;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 1;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	struct<17> Local_569[2];
	int iLocal_604 = 0;
	var uLocal_605 = -1;
	var uLocal_606 = 0;
	var uLocal_607 = -1;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = -1;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 1073741824;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 1;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	struct<17> Local_625[2];
	int iLocal_660 = 0;
	var uLocal_661 = -1;
	var uLocal_662 = 0;
	var uLocal_663 = -1;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = -1;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 1073741824;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 1;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	struct<17> Local_681[2];
	int iLocal_716 = 0;
	var uLocal_717 = -1;
	var uLocal_718 = 0;
	var uLocal_719 = -1;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = -1;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 1073741824;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 1;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	struct<17> Local_737[2];
	float fLocal_772 = 0f;
	int iLocal_773 = 0;
	int iLocal_774 = 0;
	int iLocal_775 = 0;
	int iLocal_776 = 0;
	int iLocal_777 = 0;
	int iLocal_778 = 0;
	int iLocal_779[5] = { 0, 0, 0, 0, 0 };
	int iLocal_785[5] = { 0, 0, 0, 0, 0 };
	bool bLocal_791 = false;
	bool bLocal_792 = false;
	bool bLocal_793 = false;
	struct<9> Local_794[4];
	vector3 vLocal_831 = { 0f, 0f, 0f };
	int iLocal_834 = 0;
	bool bLocal_835 = false;
	int iLocal_836 = 0;
	var uLocal_837 = -1;
	var uLocal_838 = 0;
	var uLocal_839 = -1;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = -1;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 1073741824;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 1;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
	struct<17> Local_857[1];
	int iLocal_875 = 0;
	int iLocal_876 = 0;
	int iLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	bool bLocal_884 = false;
	int iLocal_885 = 0;
	bool bLocal_886 = false;
	bool bLocal_887 = false;
	bool bLocal_888 = false;
	int iLocal_889 = 0;
	int iLocal_890 = 0;
	int iLocal_891 = 0;
	int iLocal_892 = 0;
	bool bLocal_893 = false;
	struct<9> Local_894[4];
	int iLocal_931 = 0;
	int iLocal_932 = 0;
	char* sLocal_933 = NULL;
	bool bLocal_934 = false;
	bool bLocal_935 = false;
	bool bLocal_936 = false;
	int iLocal_937 = 0;
	bool bLocal_938 = false;
	bool bLocal_939 = false;
	bool bLocal_940 = false;
	bool bLocal_941 = false;
	bool bLocal_942 = false;
	bool bLocal_943 = false;
	bool bLocal_944 = false;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	bool bLocal_948 = false;
	bool bLocal_949 = false;
	bool bLocal_950 = false;
	int iLocal_951 = 0;
	int iLocal_952 = 0;
	int iLocal_953 = 0;
	int iLocal_954 = 0;
	bool bLocal_955 = false;
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
	int iLocal_974 = 0;
	vector3 vLocal_975 = { 0f, 0f, 0f };
	vector3 vLocal_978 = { 0f, 0f, 0f };
	var uLocal_981[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_988 = 0;
	int iLocal_989 = 0;
	int iLocal_990 = 0;
	var uLocal_991 = 0;
	var uLocal_992 = 0;
	var uLocal_993 = 0;
	var uLocal_994 = 0;
	var uLocal_995 = 0;
	var uLocal_996 = 0;
	var uLocal_997 = 0;
	var uLocal_998 = 0;
	var uLocal_999 = -1;
	var uLocal_1000 = 0;
	var uLocal_1001 = 0;
	var uLocal_1002 = 0;
	var uLocal_1003 = 0;
	var uLocal_1004 = 0;
	var uLocal_1005 = 0;
	var uLocal_1006 = 0;
	var uLocal_1007 = 0;
	var uLocal_1008 = 1097859072;
	var uLocal_1009 = 1000;
	var uLocal_1010 = 1067450368;
	var uLocal_1011 = 5000;
	var uLocal_1012 = 42;
	var uLocal_1013 = 1103626240;
	var uLocal_1014 = 1077936128;
	var uLocal_1015 = 1106247680;
	var uLocal_1016 = 1103101952;
	var uLocal_1017 = 1097859072;
	var uLocal_1018 = 1103626240;
	var uLocal_1019 = 0;
	var uLocal_1020 = 0;
	var uLocal_1021 = 0;
	var uLocal_1022 = 0;
	var uLocal_1023 = 0;
	var uLocal_1024 = 0;
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
	var uLocal_1027 = 0;
	var uLocal_1028 = -1;
	var uLocal_1029 = 0;
	var uLocal_1030 = 0;
	var uLocal_1031 = 0;
	var uLocal_1032 = 0;
	var uLocal_1033 = 0;
	var uLocal_1034 = 0;
	var uLocal_1035 = 0;
	var uLocal_1036 = 0;
	var uLocal_1037 = 1097859072;
	var uLocal_1038 = 1000;
	var uLocal_1039 = 1067450368;
	var uLocal_1040 = 5000;
	var uLocal_1041 = 42;
	var uLocal_1042 = 1103626240;
	var uLocal_1043 = 1077936128;
	var uLocal_1044 = 1106247680;
	var uLocal_1045 = 1103101952;
	var uLocal_1046 = 1097859072;
	var uLocal_1047 = 1103626240;
	int iLocal_1048 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion
void __EntryFunction__()
{
	struct<2606> Var0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_244 = -1;
	iLocal_489 = -1;
	fLocal_772 = 1000f;
	iLocal_773 = -1;
	vLocal_831 = { -968.906f, 2182.179f, 339.5284f };
	iLocal_875 = -1;
	sLocal_933 = "pbl_exit";
	iLocal_954 = -1;
	vLocal_975 = { -967.5845f, 2181.624f, 339.4473f };
	vLocal_978 = { -949.9281f, 2173.23f, 341.2358f };
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
	func_40(&(uParam0->f_178));
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
				__LIB_13__::func_52(uParam0);
			}
			__LIB_13__::func_98(uParam0);
		}
	}
	__LIB_13__::func_28(uParam0);
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
			__LIB_0__::func_11(uParam0);
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
	func_91(uParam0);
	if (func_92(uParam0))
	{
		func_86(uParam0);
		iVar0 = __LIB_12__::func_492(uParam0);
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
		func_138(uParam0);
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

void func_36(var uParam0)
{
	__LIB_12__::func_658(uParam0, 7);
	__LIB_12__::func_659(uParam0, 7);
	__LIB_11__::func_992(uParam0->f_174, 0f);
	func_188();
	__LIB_13__::func_489(uParam0, 3600f);
	__LIB_9__::func_645(vLocal_831, 50f, -1);
	__LIB_6__::func_825();
	__LIB_3__::func_393(&uLocal_1020, 1);
	__LIB_2__::func_715(&uLocal_1020, 1);
	__LIB_3__::func_230(&uLocal_1020, 1);
	__LIB_2__::func_182(&uLocal_1020, 1);
	func_196(&uLocal_991);
	__LIB_3__::func_385(&uLocal_991, 1);
	__LIB_3__::func_386(&uLocal_991, 1);
	__LIB_4__::func_202(&uLocal_991, 1);
	__LIB_2__::func_715(&uLocal_991, 1);
	__LIB_3__::func_393(&uLocal_991, 1);
	__LIB_2__::func_180(&uLocal_991, 0);
	__LIB_2__::func_182(&uLocal_991, 1);
	__LIB_2__::func_507(&uLocal_991, 0);
	vLocal_231 = { -951.85f, 2174.6f, 340.5715f };
	vLocal_234 = { -957f, 2179.7f, 338.9f };
	iLocal_208 = joaat("WEAPON_REVOLVER_CATTLEMAN_MEXICAN");
	__LIB_3__::func_775(&Local_116, 131200);
	Local_116.f_83 = 0.2f;
	__LIB_4__::func_869(&Local_116, 1);
	StringCopy(&(Local_116.f_36), "GUN2_OBJ_DUEL", 24);
	Local_116.f_81 = 0f;
}

void func_40(var uParam0)
{
	func_204(uParam0);
}

void func_42(var uParam0)
{
	__LIB_12__::func_908(uParam0, 0);
	__LIB_12__::func_867(uParam0, joaat("G_M_M_UNIBANDITOS_01"), 1);
	__LIB_12__::func_867(uParam0, joaat("S_WAGONWRECKED01X"), 1);
	__LIB_12__::func_867(uParam0, Local_894[1 /*9*/].f_8, 1);
	__LIB_12__::func_867(uParam0, Local_894[2 /*9*/].f_8, 1);
	__LIB_12__::func_867(uParam0, Local_894[3 /*9*/].f_8, 1);
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
	if (iVar0 == 0)
	{
		Var1 = { -998.9692f, 2212.494f, 339.2047f };
		Var1.f_3 = 243.9351f;
	}
	else if (iVar0 == 1)
	{
		Var1 = { -966.02f, 2185.75f, 341.04f };
		Var1.f_3 = 245.0307f;
	}
	else if (iVar0 == 2)
	{
		Var1 = { vLocal_234 };
		Var1.f_3 = 198.183f;
	}
	else if (iVar0 == 3)
	{
		Var1 = { -957f, 2179.7f, 340.1876f };
		Var1.f_3 = 198.183f;
	}
	else if (iVar0 == 4)
	{
		Var1 = { -957f, 2179.7f, 340.1876f };
		Var1.f_3 = 198.183f;
	}
	return Var1;
}

bool func_62(var uParam0)
{
	return func_217(*uParam0, uParam0->f_3);
}

bool func_64(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_218))
	{
		if (!bLocal_888)
		{
			if (!__LIB_0__::func_266(Global_35, vLocal_831, 80f, 1, 1))
			{
				if (iLocal_243 != 4)
				{
					__LIB_12__::func_883(uParam0, "GUN2_RETUR1", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					bLocal_888 = true;
				}
				else
				{
					__LIB_12__::func_883(uParam0, "GUN2_RETUR2", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					bLocal_888 = true;
				}
			}
		}
		else if (!__LIB_0__::func_266(Global_35, ENTITY::GET_ENTITY_COORDS(iLocal_218, false, false), 130f, 1, 1))
		{
			if (iLocal_243 == 4)
			{
				StringCopy(&(uParam0->f_2578), "GUN2_LEAVE3", 24);
			}
			else if (__LIB_13__::func_666(iLocal_951, 4096) || __LIB_13__::func_666(iLocal_951, 64))
			{
				StringCopy(&(uParam0->f_2578), "GUN2_LEAVE2", 24);
			}
			else
			{
				StringCopy(&(uParam0->f_2578), "GUN2_LEAVE1", 24);
			}
			return true;
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
	if (func_222(uParam0->f_174))
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
	if (func_231(uParam0) || __LIB_12__::func_663(uParam0->f_174, uParam0->f_743))
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
	func_236(uParam0);
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

bool func_85(var uParam0)
{
	if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_13, 64))
	{
		return true;
	}
	if (__LIB_12__::func_924(uParam0) && func_276(uParam0))
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
	func_292(uParam0);
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

void func_91(var uParam0)
{
	func_295(uParam0);
	func_296(uParam0);
	func_297();
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

int func_96(var uParam0, int iParam1)
{
	int iVar0;
	EVENT::REMOVE_ALL_SHOCKING_EVENTS(false);
	iVar0 = iParam1;
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_890))
	{
		iLocal_890 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(-947.998f, 2170.926f, 341.0806f, joaat("WB_TREASURE_HUNTER"), 0.5f, 0, true);
		return 2;
	}
	switch (iVar0)
	{
		case 0:
			if (!MAP::DOES_BLIP_EXIST(iLocal_989))
			{
				iLocal_989 = MAP::_BLIP_ADD_FOR_RADIUS(-1282792512, vLocal_975, 50f);
			}
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_989, "GUN2_BLIP_SEAR");
			__LIB_13__::func_665(&iLocal_246, 5, &iLocal_245, 0);
			__LIB_13__::func_105(1, 1);
			func_303(uParam0, -1);
			__LIB_12__::func_997(uParam0, func_61(0), func_61(2), 0, 2, 0);
			return 7;
		case 2:
			if (__LIB_4__::func_511())
			{
				func_305(uParam0, vLocal_231);
				__LIB_0__::func_325(&iLocal_989);
				func_307();
				if (!func_308())
				{
					return 2;
				}
				func_309(0);
				__LIB_13__::func_665(&iLocal_246, 5, &iLocal_245, 3);
				return 5;
			}
			else
			{
				__LIB_0__::func_325(&iLocal_989);
				__LIB_12__::func_997(uParam0, func_61(2), func_61(3), 2, 3, 0);
				ENTITY::SET_ENTITY_COORDS(Local_247[3 /*47*/], -960.6938f, 2175.154f, 340.1824f, true, false, true, true);
				ENTITY::SET_ENTITY_COORDS(Local_247[2 /*47*/], -962.2014f, 2174.305f, 339.9069f, true, false, true, true);
				if (__LIB_0__::func_895(Global_1347702[86 /*49*/].f_15) == 2)
				{
					func_311();
				}
				else
				{
					__LIB_6__::func_313(&iLocal_951, 65536);
				}
				if (__LIB_0__::func_272(iLocal_218, 0))
				{
					if (!PED::_0xA0BC8FAED8CFEB3C(iLocal_218))
					{
						return 2;
					}
					else if (!bLocal_950)
					{
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_218, -951.9399f, 2174.916f, 341.3958f, 35.78f, true, false, true);
						ENTITY::_0x9587913B9E772D29(iLocal_218, 1);
						bLocal_950 = true;
					}
					func_307();
					if (!func_308())
					{
						return 2;
					}
					func_309(0);
					if (func_314() && bLocal_938)
					{
						ENTITY::SET_ENTITY_COORDS(Global_35, vLocal_234, true, false, true, true);
						__LIB_9__::func_233(Global_35, iLocal_218);
						ENTITY::_0x9587913B9E772D29(Global_35, 0);
						ANIMSCENE::START_ANIM_SCENE(iLocal_937);
						func_316(iLocal_937, "", "bBreakOut");
						func_317();
						__LIB_13__::func_105(1, 1);
						__LIB_13__::func_665(&iLocal_246, 5, &iLocal_245, 3);
						func_303(uParam0, 4);
						TASK::_0x5A40040BB5AE3EA2(iLocal_890);
						__LIB_12__::func_997(uParam0, func_61(2), func_61(3), 2, 3, 0);
						return 7;
					}
				}
			}
			break;
		case 1:
			if (__LIB_0__::func_895(Global_1347702[86 /*49*/].f_15) == 2)
			{
				func_311();
			}
			else
			{
				__LIB_6__::func_313(&iLocal_951, 65536);
			}
			__LIB_13__::func_665(&iLocal_246, 5, &iLocal_245, 1);
			if (__LIB_0__::func_272(iLocal_218, 0) && func_314())
			{
				__LIB_0__::func_325(&iLocal_989);
				func_317();
				__LIB_13__::func_105(1, 1);
				TASK::_0x5A40040BB5AE3EA2(iLocal_890);
				func_303(uParam0, 3);
				__LIB_12__::func_997(uParam0, func_61(1), func_61(2), 1, 2, 0);
				return 7;
			}
			break;
		case 3:
			if (!__LIB_0__::func_214(joaat("WEAPON_REVOLVER_CATTLEMAN_MEXICAN")))
			{
				__LIB_0__::func_915(joaat("WEAPON_REVOLVER_CATTLEMAN_MEXICAN"));
			}
			if (!func_320())
			{
				return 2;
			}
			func_311();
			__LIB_0__::func_325(&iLocal_989);
			if (__LIB_0__::func_272(iLocal_218, 0))
			{
				ENTITY::SET_ENTITY_VISIBLE(iLocal_218, true);
				ENTITY::SET_ENTITY_COLLISION(iLocal_218, true, false);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_218, false);
				ENTITY::SET_ENTITY_COORDS(iLocal_218, vLocal_231, true, false, true, true);
				__LIB_1__::func_864(iLocal_218, 1, 0);
				func_322("GUN1_BLIP");
			}
			else
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_218) && PED::IS_PED_RAGDOLL(iLocal_218))
				{
					return 2;
				}
				if (func_314())
				{
					func_317();
					__LIB_13__::func_105(1, 1);
					iLocal_246 = 3;
					iLocal_243 = 4;
					func_303(uParam0, 5);
					bLocal_939 = true;
					TASK::_0x5A40040BB5AE3EA2(iLocal_890);
					__LIB_12__::func_997(uParam0, func_61(3), func_61(4), 3, 4, 0);
					return 7;
				}
			}
			break;
		case 4:
			func_311();
			func_317();
			if (__LIB_0__::func_272(iLocal_218, 0))
			{
				__LIB_1__::func_864(iLocal_218, 1, 0);
			}
			else if (func_314())
			{
				__LIB_13__::func_105(1, 1);
				return 8;
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
		if (!__LIB_13__::func_508(uParam0))
		{
			if ((__LIB_0__::func_1(uParam0->f_172, 8192) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_751)) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_751, false))
			{
				if (__LIB_0__::func_1(uParam0->f_172, 8388608) || func_85(uParam0))
				{
					__LIB_12__::func_918(uParam0, 2);
					if (!__LIB_0__::func_1(uParam0->f_172, 16))
					{
						__LIB_0__::func_11(uParam0);
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
	return func_335(Var0, &(uParam0->f_206), uParam0);
}

int func_103(var uParam0)
{
	__LIB_1__::func_948(iLocal_834, 0, 0, 0, 1, 0, 0, 0);
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
						__LIB_0__::func_11(uParam0);
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
		if (func_340(&(uParam0->f_753), uParam0->f_2581, uParam0->f_2571, bParam1))
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
	func_295(uParam0);
	func_296(uParam0);
	func_342(uParam0);
	func_343();
	func_297();
	func_344();
	func_345();
	switch (iLocal_246)
	{
		case 0:
			func_346(uParam0);
			break;
		case 1:
			func_347(uParam0);
			if (__LIB_13__::func_666(iLocal_951, 256))
			{
				if (iLocal_490 != 6)
				{
					return 5;
				}
			}
			break;
		case 2:
			func_348(uParam0);
			break;
		case 3:
			if (func_349(uParam0))
			{
				return 8;
			}
			break;
		case 4:
			func_350(uParam0);
			break;
	}
	return 7;
}

void func_122(var uParam0)
{
	func_371();
	__LIB_13__::func_710(uParam0);
	__LIB_2__::func_115(38, 0, 0, 0, 0, 2, 0, 1);
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
		func_388(Global_1347702[iParam0 /*49*/].f_15, bParam4, bParam2, bParam6, bParam5);
	}
	else
	{
		__LIB_1__::func_809(Global_1347702[iParam0 /*49*/].f_15, bParam6);
	}
	__LIB_10__::func_833(iParam0);
}

void func_138(var uParam0)
{
	__LIB_13__::func_720();
	__LIB_13__::func_717();
	__LIB_6__::func_726(&(Local_22.f_61), 0);
	func_401(&Local_116, &Local_22);
	if (__LIB_1__::func_243(4))
	{
		__LIB_1__::func_211(5, 8);
	}
}

bool func_150(var uParam0)
{
	func_422(uParam0);
	if (__LIB_0__::func_266(Global_35, vLocal_831, 50f, 1, 1))
	{
		return false;
	}
	return true;
}

void func_159(var uParam0)
{
	func_422(uParam0);
}

void func_188()
{
	func_447();
	func_448();
	func_449();
}

void func_196(int iParam0)
{
	__LIB_3__::func_391(iParam0, 0);
	__LIB_3__::func_392(iParam0, 0);
	__LIB_3__::func_393(iParam0, 1);
	__LIB_2__::func_180(iParam0, 1);
	__LIB_2__::func_251(iParam0, 0);
	__LIB_2__::func_182(iParam0, 1);
	__LIB_2__::func_183(iParam0, 1, 1, 1);
}

void func_204(int iParam0)
{
	func_196(iParam0);
	__LIB_3__::func_386(iParam0, 1);
	__LIB_4__::func_202(iParam0, 1);
	__LIB_3__::func_393(iParam0, 1);
	__LIB_7__::func_909(iParam0, 1);
	__LIB_3__::func_385(iParam0, 1);
	__LIB_3__::func_391(iParam0, 1);
	__LIB_3__::func_388(iParam0, 1);
	__LIB_3__::func_392(iParam0, 0);
}

int func_217(vector3 vParam0, var uParam3)
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
		iVar0 = func_475(0, 0);
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

bool func_222(int iParam0)
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

int func_231(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(Global_1347702[uParam0->f_174 /*49*/].f_43))
	{
		if (!func_505(&(Global_1347702[uParam0->f_174 /*49*/].f_43), &(uParam0->f_178), &iVar0, 1, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_236(var uParam0)
{
	func_422(uParam0);
	ENTITY::SET_ENTITY_INVINCIBLE(iLocal_218, false);
	__LIB_6__::func_824();
	__LIB_5__::func_440("gunslinger_duel_2");
}

int func_276(var uParam0)
{
	func_562(uParam0);
	func_563(0);
	EVENT::_REMOVE_ALL_SHOCKING_EVENTS_IN_AREA(vLocal_831, 200f, false);
	if (func_564())
	{
		func_565();
		func_566();
		return 1;
	}
	return 0;
}

void func_292(var uParam0)
{
	if (!MAP::DOES_BLIP_EXIST(iLocal_989))
	{
		iLocal_989 = MAP::_BLIP_ADD_FOR_RADIUS(-1282792512, vLocal_975, 50f);
	}
	__LIB_5__::func_511(1);
}

void func_295(var uParam0)
{
	if (__LIB_0__::func_272(iLocal_218, 0))
	{
		switch (iLocal_490)
		{
			case 0:
				func_589(uParam0);
				break;
			case 1:
				func_590();
				break;
			case 5:
				__LIB_0__::func_11();
				break;
		}
	}
	else if (iLocal_490 != 6)
	{
		if (!__LIB_13__::func_666(iLocal_951, 256))
		{
			__LIB_1__::func_948(iLocal_834, 1, 0, 0, 1, 0, 0, 0);
		}
		func_592(6);
	}
}

void func_296(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (__LIB_0__::func_272(Local_247[iVar0 /*47*/], 0))
		{
			switch (Local_247[iVar0 /*47*/].f_12)
			{
				case 1:
					func_593(iVar0, uParam0);
					break;
				case 3:
					func_594(iVar0, uParam0);
					break;
				case 8:
					func_595(iVar0, uParam0);
					break;
				case 9:
					func_596(iVar0, uParam0);
					break;
				case 12:
					func_597(iVar0, uParam0);
					break;
				case 13:
					func_598(iVar0);
					break;
				case 14:
					func_599(iVar0, uParam0);
					break;
				case 15:
					func_600(iVar0);
					break;
				case 16:
					func_601(iVar0);
					break;
				case 17:
					func_602(iVar0);
					break;
				case 18:
					func_603(uParam0, iVar0);
					break;
				case 19:
					func_604(iVar0);
					break;
				case 20:
					func_605(iVar0);
					break;
			}
		}
		else if (Local_247[iVar0 /*47*/].f_12 != 21)
		{
			if (!func_606(iVar0))
			{
				__LIB_6__::func_313(&iLocal_951, 128);
				if (iLocal_244 < 2)
				{
					func_303(uParam0, 2);
				}
			}
			if (Local_247[iVar0 /*47*/].f_12 == 12)
			{
				__LIB_1__::func_480(&(Local_247[iVar0 /*47*/]));
				__LIB_2__::func_480(&Local_513, 0, 0, 1, 0);
				__LIB_13__::func_676(&iLocal_952, 4);
			}
			func_610(21, iVar0);
		}
		iVar0++;
	}
}

void func_297()
{
	switch (iLocal_891)
	{
		case 0:
			if (func_563(0))
			{
				ANIMSCENE::START_ANIM_SCENE(iLocal_892);
				iLocal_932 = iLocal_931;
				func_611();
				ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_892, func_612(iLocal_932));
				ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_892, sLocal_933);
				ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_892, "pbl_quick_Exit");
				iLocal_891 = 1;
			}
			break;
		case 1:
			func_613();
			if ((ANIMSCENE::_0x1F0E401031E20146(iLocal_892, "pbl_Convo_Freezing") && ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_892) > 48.15f) || (!ANIMSCENE::_0x1F0E401031E20146(iLocal_892, "pbl_Convo_Freezing") && ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_892) > func_614(iLocal_931)))
			{
				if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_892, func_612(iLocal_932)))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_892, func_612(iLocal_932), true);
					ANIMSCENE::_0xAE6ADA8FE7E84ACC(iLocal_892, func_612(iLocal_931));
					iLocal_931 = iLocal_932;
					func_611();
					ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_892, func_612(iLocal_932));
				}
			}
			break;
		case 2:
			if (ANIMSCENE::_0xF94692EB9DC15D74(iLocal_892, 0) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_892, false))
			{
				func_317();
			}
			break;
		case 3:
			if (ANIMSCENE::_0xF94692EB9DC15D74(iLocal_892, 0) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_892, false))
			{
				func_317();
			}
			break;
		case 4:
			break;
		case 5:
			if (func_563(1))
			{
				ANIMSCENE::START_ANIM_SCENE(iLocal_892);
				iLocal_932 = iLocal_931;
				func_611();
				ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_892, func_612(iLocal_932));
				ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_892, "pbl_quick_Exit");
				iLocal_891 = 1;
			}
			break;
	}
}

bool func_298(var uParam0)
{
	int iVar0;
	if (uParam0->f_743 <= (55f * 55f))
	{
		func_303(uParam0, 0);
		return true;
	}
	else if (__LIB_13__::func_666(iLocal_951, 128))
	{
		func_303(uParam0, 2);
		iVar0 = 0;
		while (iVar0 < 5)
		{
			func_615(iVar0, 1, 0, 0);
			iVar0++;
		}
		return true;
	}
	return false;
}

void func_303(var uParam0, int iParam1)
{
	if (iLocal_244 != iParam1)
	{
		iLocal_244 = iParam1;
		__LIB_12__::func_937(uParam0, func_618(iParam1));
	}
}

void func_305(var uParam0, vector3 vParam1)
{
	StringCopy(&(uParam0->f_2575), "RGUN2_S1_MCS1", 24);
	__LIB_12__::func_779(uParam0, vParam1);
	__LIB_13__::func_465(uParam0, 0, 0, 0);
	__LIB_13__::func_59(uParam0, iLocal_218, 0, 0, 0, 0);
	__LIB_12__::func_901(&(uParam0->f_206), -992.9025f, 2193.188f, 339.575f, -116f, 0);
	__LIB_13__::func_17(&(uParam0->f_206), "1-StayedBack", 0);
	__LIB_13__::func_17(&(uParam0->f_206), "2-ApproachedCabin", 0);
	if (__LIB_4__::func_511())
	{
		__LIB_12__::func_676(&(uParam0->f_206), "1-StayedBack");
	}
	__LIB_12__::func_981(uParam0, 87428);
	__LIB_12__::func_982(uParam0, 87805);
	__LIB_12__::func_846(&(uParam0->f_206));
	__LIB_0__::func_7(&(uParam0->f_172), 16);
}

bool func_307()
{
	if (bLocal_938)
	{
		return true;
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_937))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_937, true, false))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_937, "pbl_GetUp_Charge_Run");
			ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_937, "pbl_GetUp_Charge_Idle");
			func_316(iLocal_937, "", "bBreakOut");
			bLocal_938 = true;
			return true;
		}
	}
	else
	{
		if (ENTITY::IS_ENTITY_DEAD(iLocal_218))
		{
			return false;
		}
		iLocal_937 = ANIMSCENE::_CREATE_ANIM_SCENE("script@rcm@gun2@ig@ig4_duelflacocombatdive@ig4_dual", 0, "pbl_Jump_to_Side", false, true);
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_937))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_937, "CS_FAMOUSGUNSLINGER_02", iLocal_218, 0);
			ANIMSCENE::LOAD_ANIM_SCENE(iLocal_937);
		}
	}
	return false;
}

bool func_308()
{
	if ((!ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_937, "pbl_Jump_to_Side") || !ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_937, "pbl_GetUp_Charge_Idle")) || !ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_937, "pbl_GetUp_NoDisarm"))
	{
		return false;
	}
	if ((!ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_937, "pbl_Jump_to_Side") || !ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_937, "pbl_GetUp_Charge_Idle")) || !ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_937, "pbl_GetUp_NoDisarm"))
	{
		return false;
	}
	return true;
}

void func_309(bool bParam0)
{
	Local_116 = Global_35;
	Local_116.f_1 = iLocal_218;
	__LIB_4__::func_869(&Local_116, iLocal_207);
	__LIB_3__::func_830(&Local_22, &Local_116);
	func_630(&Local_116, &Local_22);
	PLAYER::_0x1D77B47AFA584E90(PLAYER::GET_PLAYER_INDEX(), -1, true);
	if (PED::IS_PED_MODEL(iLocal_218, joaat("CS_FAMOUSGUNSLINGER_01")))
	{
		__LIB_3__::func_459(iLocal_218, 1);
	}
	else
	{
		__LIB_3__::func_459(iLocal_218, 0);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Local_14))
	{
		__LIB_3__::func_353(&Local_14, 0);
	}
	if (bParam0)
	{
		iLocal_243 = 1;
	}
}

void func_311()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_247[iVar0 /*47*/]))
		{
			__LIB_1__::func_864(Local_247[iVar0 /*47*/], 1, 0);
		}
		Local_247[iVar0 /*47*/].f_12 = 21;
		iVar0++;
	}
}

bool func_314()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_247[iVar0 /*47*/]))
		{
			if (PED::IS_PED_RAGDOLL(Local_247[iVar0 /*47*/]))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

void func_316(int iParam0, char* sParam1, char* sParam2)
{
	Local_116 = Global_35;
	Local_116.f_1 = iLocal_218;
	Local_116.f_42 = { 0f, 0f, 0f };
	Local_116.f_45 = { 0f, 0f, 0f };
	Local_116.f_49 = iLocal_208;
	Local_116.f_39 = iParam0;
	Local_116.f_39.f_1 = sParam1;
	Local_116.f_39.f_2 = sParam2;
	__LIB_3__::func_775(&Local_116, 524544);
	__LIB_3__::func_775(&Local_116, 2);
}

void func_317()
{
	if (iLocal_891 == 4)
	{
		return;
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_892))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_892);
	}
	bLocal_893 = false;
	iLocal_891 = 4;
}

bool func_320()
{
	int iVar0;
	MISC::SET_BIT(&iVar0, 16);
	if (!OBJECT::DOES_PICKUP_EXIST(iLocal_1048))
	{
		if (bLocal_949)
		{
			iLocal_1048 = OBJECT::CREATE_PICKUP_ROTATE(joaat("PICKUP_WEAPON_REVOLVER_CATTLEMAN_MEXICAN"), ENTITY::GET_ENTITY_COORDS(iLocal_218, true, false), 0f, 0f, 0f, iVar0, 1, 2, true, 0, 0, 0f, 0);
		}
		else
		{
			iLocal_1048 = OBJECT::CREATE_PICKUP_ROTATE(joaat("PICKUP_WEAPON_REVOLVER_CATTLEMAN_MEXICAN"), -953.4213f, 2175.292f, 340.5602f, 0f, 0f, 0f, iVar0, 1, 2, true, 0, 0, 0f, 0);
		}
	}
	else
	{
		return true;
	}
	return false;
}

void func_322(char* sParam0)
{
	func_636(sParam0, 1);
	iLocal_243 = 4;
}

int func_335(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
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
				if (__LIB_13__::func_4(uParam4, &uParam0, 1, 1))
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
					__LIB_13__::func_18(uParam4, &uParam0, uParam5);
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
			func_662(uParam4);
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
				__LIB_13__::func_512(uParam4);
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
				__LIB_13__::func_512(uParam4);
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

bool func_340(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
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
		uParam0->f_1792 = __LIB_1__::func_394(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1);
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
			__LIB_13__::func_102(uParam0, iParam5, bParam6);
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
					__LIB_12__::func_965(uParam0, iParam5);
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
				__LIB_12__::func_983(uParam0);
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
				__LIB_12__::func_965(uParam0, iParam5);
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
						__LIB_12__::func_965(uParam0, iParam5);
						return true;
					}
				}
			}
			break;
		case 9:
			if (__LIB_13__::func_363(uParam0, iParam5))
			{
				__LIB_12__::func_965(uParam0, iParam5);
				__LIB_0__::func_115(uParam0, 10);
				return true;
			}
			break;
		case 10:
			return true;
	}
	return false;
}

void func_342(var uParam0)
{
	int iVar0;
	if (iLocal_246 == 3)
	{
		return;
	}
	if (__LIB_13__::func_666(iLocal_951, 64))
	{
		if (iLocal_490 == 4 && iLocal_246 != 3)
		{
			__LIB_0__::func_325(&iLocal_990);
			__LIB_0__::func_325(&iLocal_989);
			func_714("GUN2_BLIP");
			__LIB_13__::func_665(&iLocal_246, 5, &iLocal_245, 3);
		}
		return;
	}
	else if (iLocal_246 == 2 || __LIB_6__::func_904())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (iLocal_246 != 2 && (Local_247[iVar0 /*47*/].f_12 == 18 || Local_247[iVar0 /*47*/].f_12 == 19))
		{
			__LIB_6__::func_313(&iLocal_951, 128);
			if (iLocal_244 < 2)
			{
				func_303(uParam0, 2);
			}
			if (iLocal_246 != 4)
			{
				__LIB_13__::func_665(&iLocal_246, 5, &iLocal_245, 2);
				return;
			}
		}
		iVar0++;
	}
	if (iLocal_490 == 4 || __LIB_13__::func_666(iLocal_951, 128))
	{
		if (iLocal_244 < 2)
		{
			func_303(uParam0, 2);
		}
		if (iLocal_246 != 4)
		{
			__LIB_13__::func_665(&iLocal_246, 5, &iLocal_245, 2);
		}
	}
}

void func_343()
{
	int iVar0;
	int iVar1;
	if (!__LIB_13__::func_666(iLocal_951, 64))
	{
		iVar0 = 0;
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (Local_247[iVar1 /*47*/].f_12 == 21 || Local_247[iVar1 /*47*/].f_12 == 17)
			{
				iVar0++;
			}
			iVar1++;
		}
		if (iVar0 == 5)
		{
			__LIB_6__::func_313(&iLocal_951, 64);
		}
		else if (!__LIB_13__::func_666(iLocal_951, 16))
		{
			if (iVar0 == 4)
			{
				__LIB_6__::func_313(&iLocal_951, 16);
			}
		}
	}
}

void func_344()
{
	if (__LIB_13__::func_666(iLocal_951, 65536))
	{
		if (__LIB_1__::func_410(Global_36, vLocal_831, 20f, 1) || __LIB_1__::func_410(Global_36, vLocal_978, 10f, 1))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
		}
	}
}

void func_345()
{
	if (iLocal_246 < 3)
	{
		if (__LIB_13__::func_666(iLocal_951, 64))
		{
			if (__LIB_0__::func_895(Global_1347702[86 /*49*/].f_15) != 2)
			{
				__LIB_1__::func_532(Global_1347702[86 /*49*/].f_15, 2);
			}
		}
		else
		{
			__LIB_13__::func_666(iLocal_951, 65536);
			if (__LIB_0__::func_895(Global_1347702[86 /*49*/].f_15) != 1)
			{
				__LIB_1__::func_532(Global_1347702[86 /*49*/].f_15, 1);
			}
		}
	}
}

void func_346(var uParam0)
{
	switch (iLocal_245)
	{
		case 0:
			func_718(uParam0);
			break;
		case 1:
			func_719();
			if (__LIB_13__::func_666(iLocal_951, 64) || __LIB_13__::func_666(iLocal_951, 8192))
			{
				__LIB_13__::func_667(&iLocal_245, 3);
			}
			break;
		case 2:
			__LIB_13__::func_665(&iLocal_246, 5, &iLocal_245, -1);
			__LIB_0__::func_325(&iLocal_989);
			break;
	}
}

void func_347(var uParam0)
{
	if (iLocal_876 != 0)
	{
		if (iLocal_877 >= 1)
		{
			if (!__LIB_5__::func_463())
			{
				if (__LIB_0__::func_399(Global_35, 1, 0, 0) != joaat("WEAPON_UNARMED"))
				{
					if (!__LIB_1__::func_588("GUN2_OBJ_HOLS", 0, 0, -1, -1, 0))
					{
						__LIB_12__::func_883(uParam0, "GUN2_OBJ_HOLS", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					}
				}
			}
		}
	}
	switch (iLocal_245)
	{
		case 0:
			func_305(uParam0, vLocal_231);
			if (__LIB_13__::func_666(iLocal_951, 64))
			{
				__LIB_12__::func_997(uParam0, func_61(1), func_61(2), 1, 2, 0);
			}
			func_723(uParam0);
			break;
		case 1:
			switch (iLocal_876)
			{
				case 0:
					if (!MAP::DOES_BLIP_EXIST(iLocal_989))
					{
						__LIB_12__::func_883(uParam0, "GUN2_OBJ_DOOR", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
						iLocal_989 = __LIB_4__::func_983(408396114, vLocal_231, 1);
					}
					else
					{
						func_725(uParam0);
						if (__LIB_13__::func_666(iLocal_951, 65536) || __LIB_13__::func_666(iLocal_951, 64))
						{
							if (func_726(uParam0))
							{
								if (__LIB_0__::func_399(Global_35, 1, 0, 0) == joaat("WEAPON_UNARMED"))
								{
									if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uLocal_981[0], true, 0) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uLocal_981[1], true, 0))
									{
										iLocal_876 = 4;
									}
								}
								else
								{
									__LIB_0__::func_325(&iLocal_989);
									iLocal_876 = 1;
								}
							}
							else if (iLocal_490 == 6)
							{
								__LIB_13__::func_667(&iLocal_245, 3);
							}
							else
							{
								func_727(uParam0);
							}
						}
					}
					break;
				case 1:
					__LIB_11__::func_425(Global_35, VOLUME::_GET_VOLUME_COORDS(uLocal_981[0]), &uLocal_962, 1112014848 /* Float: 50f */, 1106247680 /* Float: 30f */, 5.5f, 1084227584 /* Float: 5f */, 1082130432 /* Float: 4f */, 0, 0, 1, 1, 1);
					if (!__LIB_6__::func_904())
					{
						if (__LIB_0__::func_399(Global_35, 1, 0, 0) == joaat("WEAPON_UNARMED"))
						{
							if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uLocal_981[0], true, 0) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uLocal_981[1], true, 0))
							{
								iLocal_876 = 4;
							}
							else
							{
								__LIB_0__::func_325(&iLocal_989);
								iLocal_876 = 0;
							}
						}
						else if (__LIB_12__::func_876(uParam0, func_729(iLocal_877), 0))
						{
							iLocal_877++;
							if (iLocal_877 < 3)
							{
								iLocal_876 = 2;
							}
							else
							{
								iLocal_876 = 3;
							}
						}
					}
					break;
				case 2:
					__LIB_11__::func_425(Global_35, VOLUME::_GET_VOLUME_COORDS(uLocal_981[0]), &uLocal_962, 1112014848 /* Float: 50f */, 1106247680 /* Float: 30f */, 5.5f, 1084227584 /* Float: 5f */, 1082130432 /* Float: 4f */, 0, 0, 1, 1, 1);
					func_727(uParam0);
					if (!__LIB_2__::func_618(&uLocal_878))
					{
						if (!__LIB_6__::func_904())
						{
							__LIB_8__::func_901(&uLocal_878, 0);
						}
					}
					else if (__LIB_5__::func_51(&uLocal_878) > 6f)
					{
						__LIB_2__::func_608(&uLocal_878);
						iLocal_876 = 1;
					}
					else if (__LIB_0__::func_399(Global_35, 1, 0, 0) == joaat("WEAPON_UNARMED"))
					{
						if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uLocal_981[0], true, 0) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uLocal_981[1], true, 0))
						{
							iLocal_876 = 4;
						}
						else
						{
							__LIB_0__::func_325(&iLocal_989);
							iLocal_876 = 0;
						}
					}
					break;
				case 3:
					__LIB_11__::func_425(Global_35, VOLUME::_GET_VOLUME_COORDS(uLocal_981[0]), &uLocal_962, 1112014848 /* Float: 50f */, 1106247680 /* Float: 30f */, 5.5f, 1084227584 /* Float: 5f */, 1082130432 /* Float: 4f */, 0, 0, 1, 1, 1);
					func_727(uParam0);
					if (__LIB_0__::func_399(Global_35, 1, 0, 0) == joaat("WEAPON_UNARMED"))
					{
						if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uLocal_981[0], true, 0) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uLocal_981[1], true, 0))
						{
							iLocal_876 = 4;
						}
						else
						{
							__LIB_0__::func_325(&iLocal_989);
							iLocal_876 = 0;
						}
					}
					break;
				case 4:
					if (__LIB_0__::func_399(Global_35, 1, 0, 0) == joaat("WEAPON_UNARMED"))
					{
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DUCK"), false);
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), false);
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TWIRL_PISTOL"), false);
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE_MOUNT_SWITCH"), false);
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE_STAND_SWITCH"), false);
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_BLOCK"), false);
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_CRAFTING_MENU"), false);
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER"), false);
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_RELOAD"), false);
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DETONATE"), false);
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_WHISTLE"), false);
					}
					if (!__LIB_2__::func_618(&uLocal_881))
					{
						if (!__LIB_5__::func_463())
						{
							__LIB_8__::func_901(&uLocal_881, 0);
						}
					}
					else if (__LIB_5__::func_51(&uLocal_881) > 1f)
					{
						if (__LIB_0__::func_399(Global_35, 1, 0, 0) == joaat("WEAPON_UNARMED"))
						{
							CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
							if (__LIB_5__::func_51(&uLocal_881) > 2f)
							{
								__LIB_13__::func_667(&iLocal_245, 3);
								__LIB_2__::func_608(&uLocal_881);
							}
						}
						else
						{
							iLocal_876 = 1;
							__LIB_2__::func_608(&uLocal_881);
						}
					}
					break;
			}
			break;
		case 2:
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			__LIB_0__::func_325(&iLocal_989);
			func_731(uParam0);
			iLocal_974 = VEHICLE::GET_LAST_DRIVEN_VEHICLE();
			if (__LIB_0__::func_48(iLocal_974, Global_35, 40f, 1))
			{
				__LIB_12__::func_901(&(uParam0->f_206), -992.9025f, 2193.188f, 339.575f, -116f, 1);
			}
			__LIB_6__::func_313(&iLocal_951, 256);
			PLAYER::_0x0751D461F06E41CE(PLAYER::GET_PLAYER_INDEX(), 8, 0, 0);
			if (iLocal_490 == 6)
			{
				func_636("GUN2_BLIP", 0);
				iLocal_243 = 4;
				__LIB_1__::func_948(iLocal_834, 0, 0, 0, 0, 0, 0, 0);
			}
			__LIB_13__::func_665(&iLocal_246, 5, &iLocal_245, 3);
			break;
	}
}

void func_348(var uParam0)
{
	int iVar0;
	switch (iLocal_245)
	{
		case 0:
			func_733(uParam0);
			break;
		case 1:
			func_734(uParam0);
			if (__LIB_13__::func_666(iLocal_951, 64))
			{
				if (iLocal_244 < 3)
				{
					func_303(uParam0, 3);
				}
				__LIB_13__::func_667(&iLocal_245, 3);
			}
			else if (!__LIB_13__::func_666(iLocal_951, 32) && __LIB_13__::func_666(iLocal_951, 16))
			{
				func_735(uParam0);
			}
			if (!__LIB_0__::func_266(Global_35, -963.244f, 2185.714f, 343f, 40f, 1, 1))
			{
				iVar0 = 0;
				while (iVar0 < 5)
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_247[iVar0 /*47*/]))
					{
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_247[iVar0 /*47*/], 45, true);
					}
					iVar0++;
				}
			}
			break;
		case 2:
			func_736(uParam0);
			break;
	}
}

bool func_349(var uParam0)
{
	if (!bLocal_939)
	{
		if (!__LIB_0__::func_163(Global_35, -717627678))
		{
			__LIB_12__::func_773(0, 0, 1, 1);
		}
		else
		{
			bLocal_939 = true;
		}
	}
	switch (iLocal_243)
	{
		case 0:
			if (iLocal_244 < 4)
			{
				func_303(uParam0, 4);
			}
			__LIB_12__::func_997(uParam0, func_61(2), func_61(3), 2, 3, 0);
			WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(iLocal_218, false);
			func_308();
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_218, false);
			if (!__LIB_0__::func_214(joaat("WEAPON_REVOLVER_CATTLEMAN_MEXICAN")))
			{
				__LIB_0__::func_915(joaat("WEAPON_REVOLVER_CATTLEMAN_MEXICAN"));
			}
			__LIB_0__::func_769();
			if (bLocal_792)
			{
				if (__LIB_0__::func_27(Global_40.f_9145, 1))
				{
					__LIB_12__::func_883(uParam0, "GUN2_OBJ_DUEL", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				}
			}
			else if (__LIB_0__::func_27(Global_40.f_9145, 1))
			{
				__LIB_13__::func_89(uParam0, "GUN2_OBJ_DUEL", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			}
			func_309(1);
			break;
		case 1:
			if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_937, "s_Jump_to_Side", 1))
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_937, "bBreakOut", false, false);
			}
			if (__LIB_0__::func_399(iLocal_218, 1, 0, 0) == joaat("WEAPON_REVOLVER_CATTLEMAN_MEXICAN"))
			{
				WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(iLocal_218, true);
			}
			if (func_740("GUN2_BLIP"))
			{
				if (iLocal_243 == 2 || iLocal_243 == 3)
				{
					func_741();
					__LIB_13__::func_665(&iLocal_246, 5, &iLocal_245, 4);
				}
				else
				{
					func_742(uParam0);
					if (iLocal_243 == 4)
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_218))
						{
							__LIB_1__::func_864(iLocal_218, 1, 0);
						}
						__LIB_12__::func_997(uParam0, func_61(3), func_61(4), 3, 4, 0);
					}
					if (iLocal_244 < 5)
					{
						func_303(uParam0, 5);
					}
				}
			}
			else
			{
				func_743();
			}
			break;
		case 3:
			func_744("GUN2_BLIP");
			break;
		case 2:
			if (func_745("GUN2_BLIP"))
			{
				return true;
			}
			break;
		case 4:
			if (!bLocal_948)
			{
				if (__LIB_13__::func_690(iLocal_218, -1271310569, joaat("WEAPON_REVOLVER_CATTLEMAN_MEXICAN")))
				{
					WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_218, true, true);
					bLocal_949 = true;
				}
				else if (!bLocal_949)
				{
					bLocal_948 = true;
				}
				else if (func_320())
				{
					bLocal_948 = true;
				}
			}
			if (__LIB_0__::func_255(iLocal_218, 0))
			{
				if (!bLocal_943)
				{
					if (!__LIB_2__::func_618(&uLocal_945))
					{
						__LIB_5__::func_107(&uLocal_945);
						__LIB_12__::func_997(uParam0, func_61(3), func_61(4), 3, 4, 0);
						__LIB_12__::func_883(uParam0, "GUN2_O_HATG", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					}
					else if (__LIB_9__::func_324(&uLocal_945) >= 3f)
					{
						bLocal_943 = true;
						bLocal_888 = false;
					}
					if (__LIB_0__::func_48(Global_35, iLocal_218, 1.5f, 1))
					{
						bLocal_943 = true;
					}
				}
				else if (!bLocal_888)
				{
					__LIB_19__::func_483();
					if (bLocal_212)
					{
						if (!bLocal_944)
						{
							__LIB_13__::func_89(uParam0, "GUN2_O_HATG", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
							bLocal_944 = true;
						}
					}
					if (!__LIB_13__::func_691())
					{
						if (bLocal_212)
						{
							bLocal_212 = false;
						}
						if (bLocal_944)
						{
							bLocal_944 = false;
						}
					}
				}
				else
				{
					__LIB_18__::func_649();
					if (__LIB_0__::func_266(Global_35, vLocal_831, 80f, 1, 1))
					{
						bLocal_888 = false;
					}
				}
			}
			if (func_751(uParam0, "GUN2_BLIP", 1084227584 /* Float: 5f */))
			{
				if (!PED::IS_PED_RAGDOLL(iLocal_218))
				{
					bLocal_940 = true;
				}
				return true;
			}
			break;
	}
	return false;
}

void func_350(var uParam0)
{
	switch (iLocal_245)
	{
		case 0:
			if (MAP::DOES_BLIP_EXIST(iLocal_219))
			{
				MAP::_BLIP_SET_MODIFIER(iLocal_219, 942020339);
			}
			__LIB_13__::func_667(&iLocal_245, 3);
			break;
		case 1:
			if (!__LIB_0__::func_272(iLocal_218, 0))
			{
				func_742(uParam0);
				__LIB_13__::func_667(&iLocal_245, 3);
			}
			else
			{
				if (!bLocal_940)
				{
					if (!PED::IS_PED_RAGDOLL(iLocal_218))
					{
						bLocal_940 = true;
					}
				}
				if (!bLocal_941)
				{
					if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_218, iLocal_937) || ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(iLocal_937))
					{
						if (func_752(&Local_116, &Local_22, 0))
						{
							if (__LIB_0__::func_399(iLocal_218, 1, 0, 0) != joaat("WEAPON_SHOTGUN_SAWEDOFF"))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(iLocal_218, joaat("WEAPON_SHOTGUN_SAWEDOFF"), false, 0, false, false);
							}
							else
							{
								PED::SET_PED_CONFIG_FLAG(iLocal_218, 249, true);
							}
						}
						TASK::TASK_COMBAT_PED(iLocal_218, Global_35, 83902464, 16);
						bLocal_941 = true;
					}
					if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_937, false))
					{
						func_308();
						if (!bLocal_942)
						{
							if (func_752(&Local_116, &Local_22, 0))
							{
								if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_937, "s_Laying_Loop", 1))
								{
									ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_937, "pbl_Getup_Charge_Idle", true);
									__LIB_13__::func_89(uParam0, "GUN2_O_HATB", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
									TASK::CLEAR_PED_TASKS(Global_35, true, false);
									bLocal_942 = true;
								}
							}
							else if (__LIB_3__::func_790(&Local_116, &Local_22, 0) || __LIB_3__::func_792(&Local_116, &Local_22, 0) >= 1)
							{
								if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_937, "s_Laying_Loop", 1))
								{
									ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_937, "pbl_GetUp_NoDisarm", true);
									__LIB_13__::func_89(uParam0, "GUN2_O_HATB", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
									TASK::CLEAR_PED_TASKS(Global_35, true, false);
									bLocal_942 = true;
								}
							}
						}
					}
				}
			}
			break;
		case 2:
			if (iLocal_244 < 5)
			{
				func_303(uParam0, 5);
			}
			func_636("GUN2_BLIP", 0);
			iLocal_243 = 4;
			__LIB_13__::func_665(&iLocal_246, 5, &iLocal_245, 3);
			break;
	}
}

void func_371()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_247[iVar0 /*47*/]) && ENTITY::IS_ENTITY_DEAD(Local_247[iVar0 /*47*/]))
		{
			PED::SET_PED_CONFIG_FLAG(Local_247[iVar0 /*47*/], 186, true);
		}
		iVar0++;
	}
}

void func_388(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
		__LIB_8__::func_366(__LIB_0__::func_76(iParam0), iVar6, __LIB_0__::func_871());
	}
	else if (iVar0 == 8)
	{
		__LIB_8__::func_367(__LIB_0__::func_76(iParam0), iVar6, __LIB_0__::func_871(), __LIB_0__::func_113());
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
						func_792(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_792(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_792(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_792(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_792(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_792(joaat("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_792(joaat("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_792(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_792(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_792(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_792(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_792(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_792(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_792(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_792(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_792(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_792(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_792(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_792(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_792(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_792(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_792(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_792(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_792(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_792(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_794();
						func_795(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
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
						func_792(joaat("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
							func_388(Global_1347702[21 /*49*/].f_15, 0, 0, 0, 0);
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
							func_388(Global_1347702[82 /*49*/].f_15, 0, 0, 0, 0);
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
							func_388(Global_1347702[83 /*49*/].f_15, 0, 0, 0, 0);
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
						func_792(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_792(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
		func_830();
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
							func_792(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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

void func_401(var uParam0, var uParam1)
{
	if (!__LIB_0__::func_27(uParam0->f_88, 1024))
	{
		__LIB_3__::func_839(uParam0, uParam1);
	}
	__LIB_1__::func_539();
	MISC::SET_TIME_SCALE(1f);
	__LIB_1__::func_390(__LIB_3__::func_805(uParam1, uParam0), 1);
	__LIB_0__::func_769();
	__LIB_3__::func_760();
	__LIB_0__::func_11();
	__LIB_2__::func_608(&(uParam1->f_26));
	__LIB_2__::func_608(&(uParam1->f_29));
	__LIB_2__::func_608(&(uParam1->f_32));
	__LIB_2__::func_608(&(uParam1->f_35));
	__LIB_2__::func_608(&(uParam1->f_38));
	__LIB_2__::func_608(&(uParam1->f_41));
	if (__LIB_0__::func_272(uParam0->f_1, 0))
	{
		if (__LIB_3__::func_761(uParam0, 65536))
		{
			PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 16, false);
			PED::SET_PED_CAN_RAGDOLL(uParam0->f_1, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 263, false);
			PED::SET_RAGDOLL_BLOCKING_FLAGS(uParam0->f_1, 0);
		}
		if (__LIB_3__::func_761(uParam0, 1024))
		{
			PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(uParam0->f_1, 1);
		}
		if (__LIB_3__::func_761(uParam0, 128) || __LIB_3__::func_761(uParam0, 4096))
		{
			PED::SET_PED_USING_ACTION_MODE(uParam0->f_1, false, -1, 0);
		}
		PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 371, false);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 392, false);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(uParam0->f_1, false, 0f);
	}
	PLAYER::_0x3C4AE8506638C7E2(PLAYER::GET_PLAYER_INDEX(), 1);
	if (!__LIB_3__::func_761(uParam0, 2048))
	{
		LAW::_0xDE5FAA741A781F73(PLAYER::GET_PLAYER_INDEX(), 0);
	}
	if (__LIB_0__::func_239(uParam1, 2048))
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 146, false);
	}
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), true);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_RADAR_MODE"), true);
	if (__LIB_0__::func_239(uParam1, 2) && !__LIB_3__::func_761(uParam0, 32768))
	{
		__LIB_3__::func_806(1, uParam0, uParam1, -1038090240 /* Float: -40f */, 1103626240 /* Float: 25f */);
		__LIB_3__::func_728(uParam1, 2);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_86))
	{
		POPULATION::_0x74C2B3DC0B294102(uParam0->f_86);
		POPULATION::_0xA1CFB35069D23C23(uParam0->f_86);
	}
	if (MISC::_DOES_ITEM_HAVE_VALID_BASE(*uParam1))
	{
		ITEMSET::DESTROY_ITEMSET(*uParam1);
	}
	__LIB_3__::func_824(uParam0, uParam1, 1);
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0) && (__LIB_0__::func_239(uParam1, 8) && (!__LIB_0__::func_239(uParam1, 1) || TASK::_IS_PED_DUELLING(*uParam0))))
	{
		TASK::_0xEED08A3A98B847E2(*uParam0, (!__LIB_3__::func_761(uParam0, 256) || ENTITY::IS_ENTITY_DEAD(uParam0->f_1)), 1040187392 /* Float: 0.125f */);
		if (__LIB_0__::func_239(uParam1, 4096))
		{
			TASK::CLEAR_PED_TASKS(*uParam0, true, false);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1) && TASK::_IS_PED_DUELLING(uParam0->f_1))
	{
		TASK::_0xEED08A3A98B847E2(uParam0->f_1, false, 1040187392 /* Float: 0.125f */);
		if (__LIB_0__::func_239(uParam1, 4096))
		{
			TASK::CLEAR_PED_TASKS(uParam0->f_1, true, false);
		}
	}
	MAP::DISPLAY_RADAR(true);
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		if (PED::IS_PED_A_PLAYER(*uParam0))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
		}
		PED::SET_PED_USING_ACTION_MODE(*uParam0, false, -1, 0);
	}
	GRAPHICS::ANIMPOSTFX_STOP("Duel");
	PLAYER::_0x914071FF93AF2692(PLAYER::PLAYER_ID(), 1f);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_16)))
	{
		if (!AUDIO::CANCEL_MUSIC_EVENT(&(uParam0->f_16)))
		{
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_20)))
	{
		if (!AUDIO::CANCEL_MUSIC_EVENT(&(uParam0->f_20)))
		{
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_28)))
	{
		if (!AUDIO::CANCEL_MUSIC_EVENT(&(uParam0->f_28)))
		{
		}
	}
	HUD::_TEXT_DATABASE_DELETE("MGDUL");
	if (__LIB_0__::func_239(uParam1, 16777216))
	{
		__LIB_8__::func_512();
	}
	PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), false, 0, -1, false);
	MISC::_0x4D5C9CC7E7E23E09();
	__LIB_3__::func_762(uParam1, 9);
}

void func_422(var uParam0)
{
	if (!__LIB_0__::func_1(uParam0->f_172, 8))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 249, false);
	}
	__LIB_0__::func_325(&iLocal_990);
	__LIB_0__::func_325(&iLocal_989);
	__LIB_0__::func_325(&iLocal_219);
	func_891(0);
	__LIB_1__::func_539();
	__LIB_6__::func_726(&(Local_22.f_61), 0);
	__LIB_18__::func_649();
	__LIB_13__::func_718(0);
	PLAYER::_0x0751D461F06E41CE(PLAYER::GET_PLAYER_INDEX(), 8, 0, 0);
}

void func_447()
{
	Local_247[0 /*47*/] = { func_926(-966.3291f, 2181.075f, 339.8572f, 260.2765f, joaat("WORLD_HUMAN_BADASS"), 2095672105, joaat("G_M_M_UNIBANDITOS_01"), 1500) };
	Local_247[0 /*47*/].f_13 = { func_928(func_927(Local_247[0 /*47*/].f_2, Local_247[0 /*47*/].f_6, 0), func_927(Local_247[0 /*47*/].f_2, Local_247[0 /*47*/].f_6, 0), func_927(Local_247[0 /*47*/].f_2, Local_247[0 /*47*/].f_6, 0)) };
	Local_247[1 /*47*/] = { func_926(-970.045f, 2182.302f, 340.35f, 2.6253f, joaat("WORLD_HUMAN_STERNGUY_IDLES"), -36377342, joaat("G_M_M_UNIBANDITOS_01"), 1000) };
	Local_247[1 /*47*/].f_13 = { func_928(func_927(Local_247[1 /*47*/].f_2, Local_247[1 /*47*/].f_6, 30), func_927(Local_247[1 /*47*/].f_2, Local_247[1 /*47*/].f_6, 30), func_927(Local_247[1 /*47*/].f_2, Local_247[1 /*47*/].f_6, 30)) };
	Local_247[2 /*47*/] = { func_926(-960.72f, 2178.31f, 339.94f, 285.767f, joaat("WORLD_HUMAN_SMOKE_CIGAR"), -407715650, joaat("G_M_M_UNIBANDITOS_01"), 2000) };
	Local_247[2 /*47*/].f_13 = { func_928(func_927(Local_247[2 /*47*/].f_2, Local_247[2 /*47*/].f_6, 0), func_927(Local_247[2 /*47*/].f_2, Local_247[2 /*47*/].f_6, 0), func_927(Local_247[2 /*47*/].f_2, Local_247[2 /*47*/].f_6, 0)) };
	Local_247[3 /*47*/] = { func_926(-957.5712f, 2179.813f, 339.6891f, 124.9154f, joaat("WORLD_HUMAN_DRINK_FLASK"), -458310986, joaat("G_M_M_UNIBANDITOS_01"), 500) };
	Local_247[3 /*47*/].f_13 = { func_928(func_927(Local_247[3 /*47*/].f_2, Local_247[3 /*47*/].f_6, 0), func_927(Local_247[3 /*47*/].f_2, Local_247[3 /*47*/].f_6, 0), func_927(Local_247[3 /*47*/].f_2, Local_247[3 /*47*/].f_6, 0)) };
	Local_247[4 /*47*/] = { func_926(-976.4336f, 2172.138f, 340.0529f, 307.8103f, joaat("WORLD_HUMAN_GUARD_MILITARY"), -697229765, joaat("G_M_M_UNIBANDITOS_01"), 750) };
	Local_247[4 /*47*/].f_13 = { func_928(func_927(Local_247[4 /*47*/].f_2, Local_247[4 /*47*/].f_6, 10), func_927(-982.6229f, 2174.562f, 340.2332f, Local_247[4 /*47*/].f_6, 10), func_927(-977.6749f, 2183.733f, 339.9112f, Local_247[4 /*47*/].f_6, 10)) };
}

void func_448()
{
	Local_794[0 /*9*/] = { func_929(-996.7858f, 2201.87f, 339.6927f, 0f, 0f, 0f, joaat("S_WAGONWRECKED01X")) };
	Local_894[1 /*9*/] = { func_929(-969.0925f, 2177.968f, 339.581f, 0f, 0f, 0f, joaat("P_BIBLE01X")) };
	Local_894[2 /*9*/] = { func_929(-969.0925f, 2177.968f, 339.581f, 0f, 0f, 0f, joaat("P_CAN03X")) };
	Local_894[3 /*9*/] = { func_929(-969.0925f, 2177.968f, 339.581f, 0f, 0f, 0f, joaat("P_SHOE01X")) };
}

void func_449()
{
	func_930(2, -959.055f, 2180.404f, 341.1125f, 4.4634f, 0f, -122.7631f, 29.9622f, 0);
}

int func_475(int iParam0, int iParam1)
{
	var uVar0;
	return func_944(&uVar0, iParam0, iParam1);
}

bool func_505(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	else if (func_960(*uParam0, 0, uParam1, iParam2, iParam3, 0))
	{
		if (iParam4 == 1)
		{
			if (iParam5 == 1)
			{
				__LIB_13__::func_0(uParam0, &Global_35, 0, 0, 1, 1, 0, 1, 1);
			}
			else
			{
				__LIB_13__::func_586(uParam0, &Global_35, 1176256512 /* Float: 10000f */, -1, 0, 1077936128 /* Float: 3f */, 1, 1, 0, 1, 0, 0);
			}
		}
		return false;
	}
	return true;
}

void func_562(var uParam0)
{
	func_999();
	if (!__LIB_13__::func_666(iLocal_951, 1))
	{
		if (func_1000(uParam0))
		{
			func_1001();
			__LIB_6__::func_313(&iLocal_951, 1);
		}
	}
	if (!__LIB_13__::func_666(iLocal_951, 2))
	{
		if (func_1002())
		{
			__LIB_6__::func_313(&iLocal_951, 2);
		}
	}
	if (!__LIB_13__::func_666(iLocal_951, 4))
	{
		if (func_1003(uParam0))
		{
			__LIB_6__::func_313(&iLocal_951, 4);
		}
	}
	if (!__LIB_13__::func_666(iLocal_951, 2048))
	{
		if (func_1004())
		{
			__LIB_6__::func_313(&iLocal_951, 2048);
		}
	}
}

bool func_563(bool bParam0)
{
	if (bLocal_893)
	{
		return true;
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_892))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_892, true, false))
		{
			bLocal_893 = true;
			return true;
		}
	}
	else
	{
		if (ENTITY::IS_ENTITY_DEAD(Local_247[0 /*47*/]))
		{
			return false;
		}
		if (ENTITY::IS_ENTITY_DEAD(Local_247[1 /*47*/]))
		{
			return false;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_894[1 /*9*/]))
		{
			return false;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_894[2 /*9*/]))
		{
			return false;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_894[3 /*9*/]))
		{
			return false;
		}
		if (bParam0)
		{
			iLocal_892 = ANIMSCENE::_CREATE_ANIM_SCENE("script@rcm@GUN2@IG@IG1_COUNT@IG1_COUNT", 0, "pbl_Enter", false, true);
			iLocal_931 = -1;
		}
		else
		{
			iLocal_892 = ANIMSCENE::_CREATE_ANIM_SCENE("script@rcm@GUN2@IG@IG1_COUNT@IG1_COUNT", 0, func_612(0), false, true);
			iLocal_931 = 0;
		}
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_892))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_892, "g_m_m_unibanditos_01", Local_247[0 /*47*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_892, "g_m_m_unibanditos_01^1", Local_247[1 /*47*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_892, "p_bible01x", Local_894[1 /*9*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_892, "p_can03x", Local_894[2 /*9*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_892, "p_shoe01x", Local_894[3 /*9*/], 0);
			ANIMSCENE::LOAD_ANIM_SCENE(iLocal_892);
		}
	}
	return false;
}

bool func_564()
{
	if ((((__LIB_13__::func_666(iLocal_951, 1) && __LIB_13__::func_666(iLocal_951, 2)) && __LIB_13__::func_666(iLocal_951, 4)) && __LIB_13__::func_666(iLocal_951, 1024)) && __LIB_13__::func_666(iLocal_951, 2048))
	{
		return true;
	}
	return false;
}

void func_565()
{
	__LIB_3__::func_573(&(uLocal_981[0]), -952.9977f, 2175.758f, 341.118f, 0f, 0f, 48.708f, 3.12561f, 7.128666f, 3.878f, "MV_FRONT_DOOR");
	__LIB_3__::func_573(&(uLocal_981[1]), -952.9977f, 2175.758f, 341.118f, 0f, 0f, 48.708f, 12.12561f, 14.12867f, 3.878f, "MV_FRONT_DOOR_CUTSCENE_TRIGGER");
	__LIB_3__::func_573(&(uLocal_981[2]), -951.024f, 2174.024f, 340.906f, 0f, 0f, -41.31189f, 4.402728f, 3.890241f, 5.514397f, "MV_FRONT_DOOR_CLOSE");
	__LIB_3__::func_573(&(uLocal_981[3]), -947.265f, 2169.681f, 342f, 0f, 0f, 48.708f, 4.621f, 8.865f, 2.859f, "MV_INSIDE_SHACK");
	__LIB_3__::func_573(&(uLocal_981[4]), -947.229f, 2169.368f, 344.843f, 0f, 0f, 48.708f, 6.288f, 9.961f, 2.859f, "MV_ROOF_SHACK");
	__LIB_3__::func_573(&(uLocal_981[5]), -960.134f, 2179.382f, 345.139f, 0f, 0f, 11.70835f, 50f, 50f, 20f, "MV_ANIMAL_RESTRICTION");
	__LIB_2__::func_43(uLocal_981[5], 0, 0, 0, 0);
	__LIB_3__::func_527(&iLocal_988, -963.244f, 2185.714f, 343f, 0f, 0f, 19f, 30f, 19f, 6f, "CAMP_DEFENCE");
}

void func_566()
{
	iLocal_834 = joaat("DOOR_I_05_PLACEMENT_1");
	__LIB_1__::func_948(iLocal_834, 1, 0, 0, 0, 0, 0, 0);
}

void func_589(var uParam0)
{
	if (iLocal_246 == 3 || iLocal_246 == 1)
	{
		iLocal_490 = 3;
		return;
	}
	func_1031();
}

void func_590()
{
	if (__LIB_6__::func_903("GUN_CALLOUT"))
	{
		if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("GUN_CALLOUT") > 0)
		{
			if (!__LIB_13__::func_666(iLocal_951, 4096))
			{
				__LIB_6__::func_313(&iLocal_951, 4096);
			}
			func_592(0);
		}
	}
	else
	{
		if (!__LIB_13__::func_666(iLocal_951, 4096))
		{
			__LIB_6__::func_313(&iLocal_951, 4096);
		}
		func_592(0);
	}
	func_1031();
}

void func_592(int iParam0)
{
	iLocal_490 = iParam0;
}

void func_593(int iParam0, var uParam1)
{
	func_1033(iParam0, uParam1);
	if (iParam0 == 4)
	{
		if (__LIB_9__::func_324(&(Local_247[iParam0 /*47*/].f_13.f_17)) > IntToFloat(Local_247[iParam0 /*47*/].f_13[Local_247[iParam0 /*47*/].f_13.f_16 /*5*/].f_4))
		{
			__LIB_2__::func_608(&(Local_247[iParam0 /*47*/].f_13.f_17));
			func_1034(iParam0);
		}
	}
	func_1035(uParam1, iParam0);
}

void func_594(int iParam0, var uParam1)
{
	func_1033(iParam0, uParam1);
	if (__LIB_0__::func_266(Local_247[iParam0 /*47*/], Local_247[iParam0 /*47*/].f_13[Local_247[iParam0 /*47*/].f_13.f_16 /*5*/], 2f, 1, 1))
	{
		func_1036(iParam0, 0, 1);
	}
	func_1035(uParam1, iParam0);
}

void func_595(int iParam0, var uParam1)
{
	func_1033(iParam0, uParam1);
	func_1035(uParam1, iParam0);
}

void func_596(int iParam0, var uParam1)
{
	if (iParam0 != 4)
	{
		if (__LIB_0__::func_399(Local_247[iParam0 /*47*/], 1, 0, 0) != joaat("WEAPON_UNARMED"))
		{
			WEAPON::_HIDE_PED_WEAPONS(Local_247[iParam0 /*47*/], 2, false);
		}
	}
	if (iParam0 == 0)
	{
		if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Local_247[iParam0 /*47*/], iLocal_892))
		{
			if (!__LIB_0__::func_266(Local_247[iParam0 /*47*/], -966.3291f, 2181.075f, 339.8572f, 1.5f, 1, 1))
			{
				if (!__LIB_0__::func_163(Local_247[iParam0 /*47*/], 713668775))
				{
					TASK::TASK_LOOK_AT_ENTITY(Local_247[iParam0 /*47*/], Global_35, -1, 0, 51, 0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_247[iParam0 /*47*/], -966.3291f, 2181.075f, 339.8572f, 1f, 20000, 0.25f, 0, Local_247[iParam0 /*47*/].f_5);
				}
			}
			else if (!__LIB_0__::func_163(Local_247[iParam0 /*47*/], -1098463898))
			{
				__LIB_2__::func_915(Local_247[iParam0 /*47*/], Local_247[iParam0 /*47*/].f_6, Local_247[iParam0 /*47*/].f_13[Local_247[iParam0 /*47*/].f_13.f_16 /*5*/], Local_247[iParam0 /*47*/].f_5, 0, 1, 0, 0, -1082130432 /* Float: -1f */);
			}
		}
	}
	if (iParam0 == 1)
	{
		if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Local_247[iParam0 /*47*/], iLocal_892))
		{
			if (!__LIB_0__::func_266(Local_247[iParam0 /*47*/], Local_247[iParam0 /*47*/].f_2, 2f, 1, 1))
			{
				if (!__LIB_0__::func_163(Local_247[iParam0 /*47*/], 713668775))
				{
					TASK::TASK_LOOK_AT_ENTITY(Local_247[iParam0 /*47*/], Global_35, -1, 0, 51, 0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_247[iParam0 /*47*/], Local_247[iParam0 /*47*/].f_2, 1f, 20000, 0.25f, 0, Local_247[iParam0 /*47*/].f_5);
				}
			}
			else if (!__LIB_0__::func_163(Local_247[iParam0 /*47*/], -1098463898))
			{
				__LIB_2__::func_915(Local_247[iParam0 /*47*/], Local_247[iParam0 /*47*/].f_6, Local_247[iParam0 /*47*/].f_13[Local_247[iParam0 /*47*/].f_13.f_16 /*5*/], Local_247[iParam0 /*47*/].f_5, 0, 1, 0, 0, -1082130432 /* Float: -1f */);
			}
		}
	}
	if (iParam0 == 2)
	{
		if (!__LIB_0__::func_266(Local_247[iParam0 /*47*/], Local_247[iParam0 /*47*/].f_13[Local_247[iParam0 /*47*/].f_13.f_16 /*5*/], 2f, 1, 1))
		{
			if (!__LIB_0__::func_163(Local_247[iParam0 /*47*/], 713668775))
			{
				TASK::TASK_LOOK_AT_ENTITY(Local_247[iParam0 /*47*/], Global_35, -1, 0, 51, 0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_247[iParam0 /*47*/], Local_247[iParam0 /*47*/].f_13[Local_247[iParam0 /*47*/].f_13.f_16 /*5*/], 1f, 20000, 0.25f, 0, Local_247[iParam0 /*47*/].f_5);
			}
		}
		else if (!__LIB_0__::func_163(Local_247[iParam0 /*47*/], -1098463898))
		{
			__LIB_2__::func_915(Local_247[iParam0 /*47*/], joaat("WORLD_HUMAN_STARE_STOIC"), Local_247[iParam0 /*47*/].f_13[Local_247[iParam0 /*47*/].f_13.f_16 /*5*/], Local_247[iParam0 /*47*/].f_5, 0, 1, 0, 0, -1082130432 /* Float: -1f */);
		}
	}
	if (iParam0 == 3)
	{
		if (!__LIB_0__::func_266(Local_247[iParam0 /*47*/], Local_247[iParam0 /*47*/].f_13[Local_247[iParam0 /*47*/].f_13.f_16 /*5*/], 2f, 1, 1))
		{
			if (!__LIB_0__::func_163(Local_247[iParam0 /*47*/], 713668775))
			{
				TASK::TASK_LOOK_AT_ENTITY(Local_247[iParam0 /*47*/], Global_35, -1, 0, 51, 0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_247[iParam0 /*47*/], Local_247[iParam0 /*47*/].f_13[Local_247[iParam0 /*47*/].f_13.f_16 /*5*/], 1f, 20000, 0.25f, 0, Local_247[iParam0 /*47*/].f_5);
			}
		}
		else if (!__LIB_0__::func_163(Local_247[iParam0 /*47*/], -1098463898))
		{
			__LIB_2__::func_915(Local_247[iParam0 /*47*/], joaat("WORLD_HUMAN_STAND_WAITING"), Local_247[iParam0 /*47*/].f_13[Local_247[iParam0 /*47*/].f_13.f_16 /*5*/], Local_247[iParam0 /*47*/].f_5, 0, 1, 0, 0, -1082130432 /* Float: -1f */);
		}
	}
	if (iParam0 == 4)
	{
		func_1036(iParam0, 0, 1);
	}
	func_1033(iParam0, uParam1);
	func_1035(uParam1, iParam0);
}

void func_597(int iParam0, var uParam1)
{
	char* sVar0;
	int iVar1;
	float fVar2;
	if (iParam0 != iLocal_773)
	{
		func_610(14, iParam0);
	}
	sVar0 = func_1038(iParam0);
	if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Local_247[iParam0 /*47*/], iLocal_892) || ANIMSCENE::_0x1F0E401031E20146(iLocal_892, sLocal_933))
	{
		func_1033(iParam0, uParam1);
		if (__LIB_2__::func_618(&uLocal_959))
		{
			iVar1 = 0;
			while (iVar1 < 5)
			{
				func_1039(iVar1, uParam1, Local_247[iParam0 /*47*/].f_33.f_5);
				iVar1++;
			}
		}
		fVar2 = __LIB_0__::func_94(Local_247[iParam0 /*47*/], Global_36, 1);
		if (!__LIB_0__::func_48(Local_247[iParam0 /*47*/], Global_35, 2.5f, 1) && !__LIB_0__::func_163(Local_247[iParam0 /*47*/], 1227113341))
		{
			if (fVar2 > 8f)
			{
				TASK::TASK_GO_TO_ENTITY(Local_247[iParam0 /*47*/], Global_35, -1, 2.5f, 1.5f, 2f, 0);
			}
			else
			{
				TASK::TASK_GO_TO_ENTITY(Local_247[iParam0 /*47*/], Global_35, -1, 2.5f, 1f, 2f, 0);
			}
		}
		else if (fVar2 <= 2.5f)
		{
			if (!PED::IS_PED_FACING_PED(Local_247[iParam0 /*47*/], Global_35, 20f) && !__LIB_0__::func_163(Local_247[iParam0 /*47*/], -875674219))
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_247[iParam0 /*47*/], Global_35, -1, -1f, -1f, -1f);
			}
		}
	}
	switch (iLocal_491)
	{
		case 0:
			__LIB_6__::func_313(&iLocal_952, 4);
			fLocal_772 = __LIB_0__::func_665(Global_35, Local_247[iParam0 /*47*/], 1, 1);
			PED::SET_PED_CONFIG_FLAG(Local_247[iParam0 /*47*/], 301, false);
			__LIB_2__::func_602(&(Local_513[0 /*17*/]), "RGUN2_DEFUSE", " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
			__LIB_2__::func_602(&(Local_513[1 /*17*/]), "RGUN2_ESCALATE", " ", joaat("INPUT_INTERACT_LOCKON_ROB"), 0, 0, 0, 1, 0);
			__LIB_2__::func_411(&(Local_513[0 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(Local_513[1 /*17*/]), 0, 0);
			func_1044(1);
			bLocal_791 = true;
			break;
		case 1:
			iLocal_774 = func_1045(&(Local_247[iParam0 /*47*/]), &iLocal_492, 25f, &Local_513, 0f, 3, 0, "GUN2_BAN_ILO", 1, 0, 0, 2, -1082130432 /* Float: -1f */);
			if (!__LIB_6__::func_903(func_1046(iParam0)))
			{
				__LIB_8__::func_901(&uLocal_959, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_247[iParam0 /*47*/], true);
				PED::SET_PED_CONFIG_FLAG(Local_247[iParam0 /*47*/], 301, false);
				__LIB_2__::func_411(&(Local_513[0 /*17*/]), 1, 0);
				__LIB_2__::func_411(&(Local_513[1 /*17*/]), 1, 0);
				func_1044(2);
			}
			break;
		case 2:
			iLocal_774 = func_1045(&(Local_247[iParam0 /*47*/]), &iLocal_492, 25f, &Local_513, 0f, 3, 0, "GUN2_BAN_ILO", 1, 0, 0, 2, -1082130432 /* Float: -1f */);
			if (ENTITY::IS_ENTITY_DEAD(Local_247[iParam0 /*47*/]) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_247[iParam0 /*47*/], Global_35, 1, 1))
			{
				func_1047(iParam0);
				bLocal_936 = true;
			}
			else if (iLocal_774 == 0)
			{
				__LIB_2__::func_480(&Local_513, 0, 0, 1, 0);
				func_1048(uParam1, 0);
			}
			else if (iLocal_774 == 1)
			{
				__LIB_2__::func_480(&Local_513, 0, 0, 1, 0);
				func_1048(uParam1, 1);
			}
			else if (__LIB_13__::func_666(iLocal_951, 128))
			{
				func_1047(iParam0);
			}
			else if (__LIB_9__::func_324(&uLocal_959) >= 15f)
			{
				func_1047(iParam0);
			}
			else if (__LIB_9__::func_324(&uLocal_959) >= 7f)
			{
				if (iParam0 != 2)
				{
					if (!__LIB_13__::func_666(iLocal_952, 8))
					{
						if (!__LIB_6__::func_903(sVar0))
						{
							if (__LIB_12__::func_876(uParam1, sVar0, 0))
							{
								__LIB_6__::func_313(&iLocal_952, 8);
							}
						}
					}
				}
			}
			else if (__LIB_9__::func_324(&uLocal_959) >= 2.5f && !__LIB_0__::func_48(Global_35, Local_247[iParam0 /*47*/], (fLocal_772 + 8f), 1))
			{
				func_1047(iParam0);
			}
			break;
		case 3:
			func_1048(uParam1, 1);
			break;
		case 4:
			if (!__LIB_6__::func_904())
			{
				func_1050(uParam1, iParam0, 0);
			}
			break;
		case 5:
			func_1050(uParam1, iParam0, 0);
			break;
		case 6:
			if (!__LIB_6__::func_904())
			{
				__LIB_6__::func_313(&iLocal_951, 65536);
				if (!__LIB_13__::func_666(iLocal_951, 4096))
				{
					__LIB_6__::func_313(&iLocal_951, 4096);
				}
				__LIB_13__::func_676(&iLocal_952, 4);
				__LIB_6__::func_313(&iLocal_952, 16);
				__LIB_6__::func_313(&iLocal_952, 32);
				func_1051(iParam0, 0);
			}
			break;
		case 7:
			func_1048(uParam1, 0);
			break;
		case 8:
			if (!__LIB_6__::func_904())
			{
				bLocal_793 = true;
				func_1050(uParam1, iParam0, 1);
			}
			break;
		case 9:
			func_1050(uParam1, iParam0, 1);
			break;
		case 10:
			if (__LIB_6__::func_903(func_1052(iParam0, 1)) && AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE(func_1052(iParam0, 1)) > 0)
			{
				func_1053(iParam0);
				__LIB_13__::func_676(&iLocal_952, 4);
			}
			break;
	}
}

void func_598(int iParam0)
{
	if (func_1054())
	{
		if (iLocal_891 == 4)
		{
			if (!__LIB_0__::func_163(Local_247[iParam0 /*47*/], -875674219))
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_247[iParam0 /*47*/], Global_35, 0, -1f, -1f, -1f);
				TASK::TASK_LOOK_AT_ENTITY(Local_247[iParam0 /*47*/], Global_35, -1, 0, 51, 0);
			}
			func_610(14, iParam0);
		}
	}
}

void func_599(int iParam0, var uParam1)
{
	if (PED::_IS_PED_HOGTIED(Local_247[iParam0 /*47*/]))
	{
		func_1055(iParam0);
		return;
	}
	else if (PED::_IS_PED_LASSOED(Local_247[iParam0 /*47*/]))
	{
		func_1056(iParam0);
		return;
	}
	else
	{
		if (!__LIB_2__::func_618(&(Local_247[iParam0 /*47*/].f_7)))
		{
			if (__LIB_13__::func_666(iLocal_951, 65536))
			{
				__LIB_8__::func_901(&(Local_247[iParam0 /*47*/].f_7), 0);
				Local_247[iParam0 /*47*/].f_10 = MISC::GET_RANDOM_FLOAT_IN_RANGE(2f, 4f);
			}
		}
		else if (__LIB_5__::func_51(&(Local_247[iParam0 /*47*/].f_7)) > Local_247[iParam0 /*47*/].f_10)
		{
			func_610(9, iParam0);
		}
		func_1035(uParam1, iParam0);
	}
}

void func_600(int iParam0)
{
	if (!__LIB_0__::func_163(Local_247[iParam0 /*47*/], 713668775))
	{
		func_1057();
		func_610(9, iParam0);
	}
}

void func_601(int iParam0)
{
	if (PED::_IS_PED_HOGTIED(Local_247[iParam0 /*47*/]))
	{
		func_1055(iParam0);
	}
	else if (!PED::_IS_PED_LASSOED(Local_247[iParam0 /*47*/]))
	{
		func_1053(iParam0);
	}
}

void func_602(int iParam0)
{
	if (!PED::_IS_PED_HOGTIED(Local_247[iParam0 /*47*/]))
	{
		func_1053(iParam0);
	}
	else if (PED::_IS_PED_LASSOED(Local_247[iParam0 /*47*/]))
	{
		func_1056(iParam0);
	}
}

void func_603(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		ENTITY::SET_ENTITY_PROOFS(Local_247[iParam1 /*47*/], 0, false);
	}
	if (func_1058(iParam1))
	{
		func_1059(uParam0, iParam1);
	}
}

void func_604(int iParam0)
{
	if (PED::_IS_PED_LASSOED(Local_247[iParam0 /*47*/]))
	{
		func_1056(iParam0);
		return;
	}
	else if (PED::_IS_PED_HOGTIED(Local_247[iParam0 /*47*/]))
	{
		func_1055(iParam0);
		return;
	}
	else if (((!__LIB_0__::func_163(Local_247[iParam0 /*47*/], 780511057) && !TASK::IS_PED_GETTING_UP(Local_247[iParam0 /*47*/])) && !PED::IS_PED_RAGDOLL(Local_247[iParam0 /*47*/])) && PED::_0xD0B7AEB56229D317(Global_35) != Local_247[iParam0 /*47*/])
	{
		TASK::CLEAR_PED_TASKS(Local_247[iParam0 /*47*/], true, false);
		TASK::TASK_COMBAT_PED(Local_247[iParam0 /*47*/], Global_35, 0, 0);
	}
}

void func_605(int iParam0)
{
	if (!PED::IS_PED_FLEEING(Local_247[iParam0 /*47*/]) && __LIB_0__::func_665(Global_35, Local_247[iParam0 /*47*/], 1, 1) <= 150f)
	{
		TASK::TASK_SMART_FLEE_PED(Local_247[iParam0 /*47*/], Global_35, 200f, -1, 0, 1077936128 /* Float: 3f */, 0);
	}
}

bool func_606(int iParam0)
{
	int iVar0;
	WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false);
	if (PED::GET_PED_CONFIG_FLAG(Local_247[iParam0 /*47*/], 9, true))
	{
		return true;
	}
	if (PED::GET_PED_CONFIG_FLAG(Local_247[iParam0 /*47*/], 10, true))
	{
		return true;
	}
	if (WEAPON::_0xEA522F991E120D45(iVar0))
	{
		return true;
	}
	if (WEAPON::_IS_WEAPON_BOW(iVar0))
	{
		return true;
	}
	if (iVar0 == joaat("WEAPON_LASSO"))
	{
		return true;
	}
	if (iVar0 == joaat("WEAPON_MELEE_KNIFE"))
	{
		return true;
	}
	return false;
}

void func_610(int iParam0, int iParam1)
{
	if (Local_247[iParam1 /*47*/].f_12 != iParam0)
	{
		Local_247[iParam1 /*47*/].f_12 = iParam0;
	}
}

void func_611()
{
	iLocal_932 = (iLocal_932 + MISC::GET_RANDOM_INT_IN_RANGE(1, 4));
	if (iLocal_932 >= 4)
	{
		iLocal_932 = (iLocal_932 - 4);
	}
}

char* func_612(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return "pbl_Enter";
		case 0:
			return "pbl_idle_01";
		case 1:
			return "pbl_idle_02";
		case 2:
			return "pbl_idle_03";
		case 3:
			return "pbl_idle_04";
		default:
			break;
	}
	return "pbl_idle01";
}

void func_613()
{
	if (!bLocal_935)
	{
		ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_892, "pbl_Convo_Freezing");
		if (__LIB_0__::func_266(Global_35, vLocal_831, 40f, 1, 1))
		{
			if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_892, "pbl_Convo_Freezing"))
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_892) > func_614(iLocal_931))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_892, "pbl_Convo_Freezing", true);
					bLocal_935 = true;
				}
			}
		}
	}
}

float func_614(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 3.1f;
		case 0:
			return 28.6f;
		case 1:
			return 22.13f;
		case 2:
			return 22.6f;
		case 3:
			return 30.1f;
		default:
			break;
	}
	return 10f;
}

void func_615(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam3 || __LIB_13__::func_666(iLocal_951, 65536))
	{
		__LIB_0__::func_325(&(Local_247[iParam0 /*47*/].f_1));
		return;
	}
	if (Local_247[iParam0 /*47*/].f_12 != 21)
	{
		if (!MAP::DOES_BLIP_EXIST(Local_247[iParam0 /*47*/].f_1))
		{
			PED::SET_PED_RESET_FLAG(Local_247[iParam0 /*47*/], 42, true);
			Local_247[iParam0 /*47*/].f_1 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_247[iParam0 /*47*/]);
			if (!bParam2)
			{
				if (bParam1)
				{
					MAP::_BLIP_SET_MODIFIER(Local_247[iParam0 /*47*/].f_1, -1118229366);
					MAP::_BLIP_SET_MODIFIER(Local_247[iParam0 /*47*/].f_1, -662251075);
				}
			}
			else
			{
				MAP::_BLIP_SET_MODIFIER(Local_247[iParam0 /*47*/].f_1, -1034486097);
				MAP::_BLIP_REMOVE_MODIFIER(Local_247[iParam0 /*47*/].f_1, -1118229366);
			}
		}
		else if (!bParam2)
		{
			if (bParam1)
			{
				PED::SET_PED_RESET_FLAG(Local_247[iParam0 /*47*/], 42, true);
				MAP::_BLIP_SET_MODIFIER(Local_247[iParam0 /*47*/].f_1, -1118229366);
				MAP::_BLIP_SET_MODIFIER(Local_247[iParam0 /*47*/].f_1, -662251075);
			}
			else
			{
				MAP::_BLIP_SET_MODIFIER(Local_247[iParam0 /*47*/].f_1, -1269631044);
			}
		}
		else
		{
			MAP::_BLIP_SET_MODIFIER(Local_247[iParam0 /*47*/].f_1, -1034486097);
			MAP::_BLIP_REMOVE_MODIFIER(Local_247[iParam0 /*47*/].f_1, -1118229366);
		}
	}
}

int func_618(int iParam0)
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
		default:
			break;
	}
	return 0;
}

void func_625(var uParam0)
{
	int iVar0;
	if (__LIB_13__::func_23(uParam0, "RGUN2_S1_MCS1"))
	{
		func_308();
		func_309(0);
		func_317();
		func_743();
		func_1072();
		MISC::CLEAR_AREA(-954.77f, 2176.906f, 340.3967f, 10f, 40);
		func_307();
		if (ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_348))
		{
			bLocal_792 = true;
		}
		if (__LIB_13__::func_218(uParam0, iLocal_218, 0, 0, 1, 1))
		{
			if (bLocal_938)
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_937, false))
				{
					ANIMSCENE::START_ANIM_SCENE(iLocal_937);
				}
				func_1074(&Local_116, &Local_22);
			}
		}
		if (!__LIB_0__::func_163(Global_35, -717627678))
		{
			__LIB_12__::func_773(0, 0, 1, 1);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_SKIP_CUTSCENE"), true);
		}
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (iLocal_885 == 0)
			{
				if (__LIB_0__::func_48(Global_35, Local_247[iVar0 /*47*/], 3f, 1))
				{
					if (ENTITY::IS_ENTITY_DEAD(Local_247[iVar0 /*47*/]))
					{
						if (iVar0 == 2)
						{
							__LIB_1__::func_338(Local_247[iVar0 /*47*/], -962.2014f, 2174.305f, 339.9069f);
						}
						else if (iVar0 == 3)
						{
							__LIB_1__::func_338(Local_247[iVar0 /*47*/], -960.6938f, 2175.154f, 340.1824f);
						}
						else
						{
							__LIB_1__::func_338(Local_247[iVar0 /*47*/], Local_247[iVar0 /*47*/].f_2);
						}
						PHYSICS::ACTIVATE_PHYSICS(Local_247[iVar0 /*47*/]);
						PED::SET_PED_TO_RAGDOLL(Local_247[iVar0 /*47*/], 10000, 15000, 1, false, true, false);
					}
				}
				if (iVar0 == 5)
				{
					iLocal_885 = 1;
				}
			}
			iVar0++;
		}
	}
}

int func_627(var uParam0)
{
	func_317();
	func_743();
	func_1072();
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_218, -951.944f, 2174.915f, 341.632f, 50.2f, true, false, true);
	MISC::CLEAR_AREA(-954.77f, 2176.906f, 340.3967f, 10f, 40);
	if (func_307())
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_937, false))
		{
			ANIMSCENE::START_ANIM_SCENE(iLocal_937);
			func_316(iLocal_937, "", "bBreakOut");
		}
		return 1;
	}
	return 0;
}

void func_630(var uParam0, var uParam1)
{
	uParam0->f_88 = uParam0->f_88;
	uParam1->f_1 = uParam1->f_1;
	STREAMING::REQUEST_ANIM_DICT("MINI_DUEL@REPOSITION@BASE");
	STREAMING::REQUEST_ANIM_DICT(uParam1->f_65);
	STREAMING::REQUEST_ANIM_DICT(uParam1->f_66);
	STREAMING::REQUEST_ANIM_DICT("MINI_DUEL@PLAYER@ACTION");
	STREAMING::REQUEST_ANIM_DICT("MINI_DUEL@PLAYER@NORMAL");
	if (!__LIB_11__::func_77(&(uParam0->f_48)))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(*uParam0, &(uParam0->f_48), true, 2, false);
		if (!__LIB_11__::func_77(&(uParam0->f_48)))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(*uParam0, &(uParam0->f_48), true, 3, false);
		}
		if (!__LIB_11__::func_77(&(uParam0->f_48)))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(*uParam0, &(uParam0->f_48), true, 0, false);
		}
		if (!__LIB_11__::func_77(&(uParam0->f_48)))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(*uParam0, &(uParam0->f_48), true, 1, false);
		}
		if (!__LIB_11__::func_77(&(uParam0->f_48)))
		{
			uParam0->f_48 = 0;
		}
		if (!__LIB_11__::func_77(&(uParam0->f_48)))
		{
			uParam0->f_48 = func_475(268435584, 0);
		}
		if (!__LIB_11__::func_77(&(uParam0->f_48)))
		{
			uParam0->f_48 = joaat("WEAPON_REVOLVER_CATTLEMAN");
		}
	}
	if (!__LIB_11__::func_77(&(uParam0->f_49)))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(uParam0->f_1, &(uParam0->f_49), true, 2, false);
		if (!__LIB_11__::func_77(&(uParam0->f_49)))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(uParam0->f_1, &(uParam0->f_49), true, 3, false);
		}
		if (!__LIB_11__::func_77(&(uParam0->f_49)))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(uParam0->f_1, &(uParam0->f_49), true, 0, false);
		}
		if (!__LIB_11__::func_77(&(uParam0->f_49)))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(uParam0->f_1, &(uParam0->f_49), true, 1, false);
		}
		if (!__LIB_11__::func_77(&(uParam0->f_49)))
		{
			uParam0->f_49 = 0;
		}
		if (!__LIB_11__::func_77(&(uParam0->f_49)))
		{
			uParam0->f_49 = __LIB_3__::func_430(268435456, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
		}
		if (!__LIB_11__::func_77(&(uParam0->f_49)))
		{
			uParam0->f_49 = joaat("WEAPON_REVOLVER_CATTLEMAN");
		}
	}
	if (!__LIB_0__::func_239(uParam1, 8192))
	{
		if (uParam0->f_48 != 0)
		{
			WEAPON::_0x72D4CB5DB927009C(uParam0->f_48, -1, 0);
		}
		if (uParam0->f_49 != 0)
		{
			WEAPON::_0x72D4CB5DB927009C(uParam0->f_49, -1, 0);
		}
		__LIB_0__::func_240(uParam1, 8192);
	}
	if (!__LIB_3__::func_761(uParam0, 16384))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_16)))
		{
			StringCopy(&(uParam0->f_16), "DUEL_GENERAL_START", 32);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_20)))
		{
			StringCopy(&(uParam0->f_20), "DUEL_GENERAL_DRAW", 32);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_24)))
		{
			StringCopy(&(uParam0->f_24), "DUEL_GENERAL_CROSSHAIRS", 32);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_28)))
		{
			StringCopy(&(uParam0->f_28), "DUEL_GENERAL_STOP", 32);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_32)))
		{
			StringCopy(&(uParam0->f_32), "DUEL_GENERAL_END_OS", 32);
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_32)))
	{
		AUDIO::PREPARE_MUSIC_EVENT(&(uParam0->f_32));
	}
	HUD::_TEXT_DATABASE_REQUEST("MGDUL");
}

void func_636(char* sParam0, bool bParam1)
{
	__LIB_3__::func_608(iLocal_218);
	__LIB_13__::func_692(&iLocal_219, iLocal_218, 408396114, sParam0);
	MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_219, sParam0);
	if (bParam1)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_14.f_2)))
		{
			__LIB_3__::func_353(&(Local_14.f_2), 0);
		}
	}
}

void func_662(var uParam0)
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
		func_1110(&(uParam0->f_404), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_12__::func_706(uParam0, 0f, 0f, 0f);
		func_1112(uParam0);
		func_1113(uParam0);
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

void func_714(char* sParam0)
{
	iLocal_243 = 3;
	__LIB_13__::func_692(&iLocal_219, iLocal_218, 408396114, sParam0);
	MAP::_BLIP_SET_MODIFIER(iLocal_219, 942020339);
	PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), false, 0, -1, false);
	if (__LIB_0__::func_272(iLocal_218, 0))
	{
		if (!__LIB_1__::func_200(86) && !__LIB_1__::func_200(85))
		{
			TASK::TASK_COMBAT_PED(iLocal_218, Global_35, 33554432, 16);
		}
	}
}

void func_718(var uParam0)
{
	__LIB_12__::func_997(uParam0, func_61(0), func_61(1), 0, 1, 0);
	__LIB_12__::func_883(uParam0, "GUN2_FIND", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
	__LIB_13__::func_667(&iLocal_245, 3);
}

void func_719()
{
	int iVar0;
	if (__LIB_13__::func_666(iLocal_951, 4096) && !__LIB_13__::func_666(iLocal_951, 8192))
	{
		__LIB_0__::func_325(&iLocal_989);
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (!__LIB_13__::func_666(iLocal_951, 65536))
			{
				func_615(iVar0, 1, 0, 0);
			}
			else
			{
				func_615(iVar0, 0, 0, 1);
			}
			iVar0++;
		}
		__LIB_6__::func_313(&iLocal_951, 8192);
	}
}

void func_723(var uParam0)
{
	__LIB_13__::func_667(&iLocal_245, 3);
}

void func_725(var uParam0)
{
	if (__LIB_13__::func_666(iLocal_952, 64))
	{
		return;
	}
	if (!__LIB_13__::func_666(iLocal_951, 65536) && MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vLocal_231, true) < 30f)
	{
		if (!__LIB_6__::func_904() && !__LIB_0__::func_270())
		{
			if (!__LIB_2__::func_618(&uLocal_956))
			{
				if (iLocal_953 == 0)
				{
					__LIB_13__::func_531(&uLocal_956, 5f, 0);
				}
				else
				{
					__LIB_8__::func_901(&uLocal_956, 0);
				}
			}
			else if (iLocal_953 < 3 && __LIB_5__::func_51(&uLocal_956) > 4f)
			{
				if (__LIB_12__::func_876(uParam0, "RGUN2_CALL_STPD", 0))
				{
					iLocal_953++;
					__LIB_2__::func_608(&uLocal_956);
					if (iLocal_244 < 3)
					{
						func_303(uParam0, 3);
					}
				}
			}
		}
	}
}

bool func_726(var uParam0)
{
	char* sVar0;
	if (!bLocal_835)
	{
		__LIB_2__::func_602(&(Local_857[0 /*17*/]), "RGUN2_CALLOUT", " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
		PED::SET_PED_CONFIG_FLAG(iLocal_218, 301, false);
		PLAYER::_0x0751D461F06E41CE(PLAYER::GET_PLAYER_INDEX(), 8, 0, 1);
		if (!MAP::DOES_BLIP_EXIST(iLocal_889))
		{
			iLocal_889 = MAP::_0x3E593DF9C2962EC6(-1337945352);
			MAP::SET_BLIP_SPRITE(iLocal_889, joaat("BLIP_RC_GUNSLINGER_2"), true);
			MAP::_0x97F6F158CC5B5CA2(iLocal_218, iLocal_889);
		}
		bLocal_835 = true;
	}
	else if (iLocal_875 == -1)
	{
		iLocal_875 = func_1045(&iLocal_218, &iLocal_836, 10f, &Local_857, 0, 3, 1, 0, 35153, 0, 0, 2, -1082130432 /* Float: -1f */);
	}
	if (iLocal_875 == 0)
	{
		__LIB_1__::func_480(&iLocal_218);
		__LIB_2__::func_480(&Local_857, 0, 0, 1, 0);
		__LIB_0__::func_325(&iLocal_889);
		if (!__LIB_13__::func_666(iLocal_952, 64))
		{
			if (__LIB_6__::func_903("GUN2_S1_IG1"))
			{
				__LIB_6__::func_900("GUN2_S1_IG1", 1, 0);
			}
			if (!__LIB_6__::func_904())
			{
				if (__LIB_13__::func_666(iLocal_951, 64))
				{
					sVar0 = "RGUN2_ALLDEAD_";
				}
				else
				{
					sVar0 = "GUN2_CHLLNG";
				}
				if (__LIB_13__::func_123(uParam0, sVar0, 0, 0))
				{
					if (iLocal_244 < 3)
					{
						func_303(uParam0, 3);
					}
					TASK::TASK_LOOK_AT_ENTITY(Global_35, iLocal_218, 8000, 0, 51, 0);
					__LIB_6__::func_313(&iLocal_952, 64);
				}
			}
		}
		else if (__LIB_13__::func_666(iLocal_952, 128))
		{
			return true;
		}
		else if (!__LIB_6__::func_904())
		{
			__LIB_6__::func_313(&iLocal_952, 128);
			return true;
		}
	}
	return false;
}

void func_727(var uParam0)
{
	if (__LIB_6__::func_904())
	{
		return;
	}
	if (iLocal_876 == 0)
	{
		if (ENTITY::IS_ENTITY_AT_COORD(Global_35, -950.58f, 2173.71f, 341.26f, 1f, 1f, 1f, false, true, 0) || __LIB_2__::func_618(&uLocal_968))
		{
			if (!__LIB_2__::func_618(&uLocal_968))
			{
				if (__LIB_12__::func_876(uParam0, "RGUN2_PREKICK", 0))
				{
					__LIB_8__::func_901(&uLocal_968, 0);
				}
			}
			else if (__LIB_5__::func_51(&uLocal_968) > 6f)
			{
				__LIB_2__::func_608(&uLocal_968);
			}
		}
		if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(iLocal_218, true, false), 15f) || __LIB_2__::func_618(&uLocal_971))
		{
			if (!__LIB_2__::func_618(&uLocal_971))
			{
				if (__LIB_12__::func_876(uParam0, "RGUN2_BLOWUP", 0))
				{
					__LIB_8__::func_901(&uLocal_971, 0);
					__LIB_2__::func_608(&uLocal_878);
				}
			}
			else if (__LIB_5__::func_51(&uLocal_971) > 10f)
			{
				__LIB_2__::func_608(&uLocal_971);
			}
		}
	}
	else if (iLocal_876 == 2 || iLocal_876 == 3)
	{
		if (!bLocal_887)
		{
			if (ENTITY::IS_ENTITY_AT_COORD(Global_35, -950.58f, 2173.71f, 341.26f, 1f, 1f, 1f, false, true, 0))
			{
				if (__LIB_12__::func_876(uParam0, "RGUN2_POSTKICK", 0))
				{
					__LIB_2__::func_608(&uLocal_878);
					bLocal_887 = true;
				}
			}
		}
		if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(iLocal_218, true, false), 15f) || __LIB_2__::func_618(&uLocal_971))
		{
			if (!__LIB_2__::func_618(&uLocal_971))
			{
				if (__LIB_12__::func_876(uParam0, "RGUN2_BLOWUP", 0))
				{
					__LIB_8__::func_901(&uLocal_971, 0);
					__LIB_2__::func_608(&uLocal_878);
				}
			}
			else if (__LIB_5__::func_51(&uLocal_971) > 10f)
			{
				__LIB_2__::func_608(&uLocal_971);
			}
		}
	}
}

char* func_729(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "GUN2_HOLSTER1";
		case 1:
			return "GUN2_HOLSTER2";
		case 2:
			return "GUN2_HOLSTER3";
		default:
			break;
	}
	return "";
}

void func_731(var uParam0)
{
	if (__LIB_1__::func_205(Global_35, uLocal_981[2], 1, 0))
	{
		__LIB_12__::func_676(&(uParam0->f_206), "2-ApproachedCabin");
		__LIB_12__::func_839(&(uParam0->f_206), "2-ApproachedCabin");
	}
	else
	{
		__LIB_12__::func_676(&(uParam0->f_206), "1-StayedBack");
		__LIB_12__::func_839(&(uParam0->f_206), "1-StayedBack");
	}
}

void func_733(var uParam0)
{
	int iVar0;
	__LIB_0__::func_325(&iLocal_989);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (((Local_247[iVar0 /*47*/].f_12 != 18 && Local_247[iVar0 /*47*/].f_12 != 21) && Local_247[iVar0 /*47*/].f_12 != 17) && Local_247[iVar0 /*47*/].f_12 != 16)
		{
			func_1053(iVar0);
		}
		iVar0++;
	}
	if (!bLocal_955)
	{
		__LIB_12__::func_883(uParam0, "GUN2_OBJ_DEF", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
		bLocal_955 = true;
	}
	func_1186();
	__LIB_13__::func_667(&iLocal_245, 3);
}

void func_734(var uParam0)
{
	if (__LIB_13__::func_666(iLocal_952, 64))
	{
		return;
	}
	if (!__LIB_6__::func_904())
	{
		if (!__LIB_2__::func_618(&uLocal_965))
		{
			__LIB_8__::func_901(&uLocal_965, 0);
		}
		else if (__LIB_5__::func_51(&uLocal_965) > 5f)
		{
			if (__LIB_12__::func_876(uParam0, "GUN_WAIT_BUST", 0))
			{
				__LIB_2__::func_608(&uLocal_965);
			}
		}
	}
}

void func_735(var uParam0)
{
	int iVar0;
	if (iLocal_954 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (Local_247[iVar0 /*47*/].f_12 != 21 && Local_247[iVar0 /*47*/].f_12 != 17)
			{
				iLocal_954 = iVar0;
			}
			iVar0++;
		}
	}
	if (iLocal_954 != -1)
	{
		if (Local_247[iLocal_954 /*47*/].f_12 != 16 && Local_247[iLocal_954 /*47*/].f_12 != 17)
		{
			if (__LIB_0__::func_272(Local_247[iLocal_954 /*47*/], 0))
			{
				if (func_1187(uParam0, iLocal_954))
				{
					__LIB_6__::func_313(&iLocal_951, 32);
					TASK::CLEAR_PED_TASKS(Local_247[iLocal_954 /*47*/], true, false);
					PED::SET_PED_COMBAT_MOVEMENT(Local_247[iLocal_954 /*47*/], 2);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_247[iLocal_954 /*47*/], 0, false);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_247[iLocal_954 /*47*/], 43, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_247[iLocal_954 /*47*/], 50, true);
					if (MAP::DOES_BLIP_EXIST(Local_247[iLocal_954 /*47*/].f_1))
					{
						MAP::_BLIP_SET_MODIFIER(Local_247[iLocal_954 /*47*/].f_1, 942020339);
					}
					TASK::TASK_COMBAT_PED(Local_247[iLocal_954 /*47*/], Global_35, 0, 0);
				}
			}
		}
	}
	else
	{
		__LIB_6__::func_313(&iLocal_951, 32);
	}
}

void func_736(var uParam0)
{
	__LIB_0__::func_325(&iLocal_990);
	if (!__LIB_0__::func_272(iLocal_218, 0))
	{
		func_636("GUN2_BLIP", 1);
		iLocal_243 = 4;
		__LIB_13__::func_665(&iLocal_246, 5, &iLocal_245, 3);
		__LIB_12__::func_997(uParam0, func_61(3), func_61(4), 3, 4, 0);
	}
	else if (iLocal_490 == 5 || iLocal_490 == 4)
	{
		__LIB_13__::func_665(&iLocal_246, 5, &iLocal_245, 4);
	}
	else
	{
		__LIB_13__::func_665(&iLocal_246, 5, &iLocal_245, 1);
	}
}

bool func_740(char* sParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		bVar1 = func_1074(&Local_116, &Local_22);
		if (Local_22.f_56 == 3 && !__LIB_2__::func_618(&uLocal_220))
		{
			__LIB_8__::func_901(&uLocal_220, 0);
		}
		else if (Local_22.f_56 == 4)
		{
			__LIB_2__::func_608(&uLocal_220);
		}
	}
	bVar2 = false;
	if (bVar1)
	{
		iVar0 = __LIB_3__::func_774(&Local_22);
		if (bVar2)
		{
			iVar0 = 4;
		}
		if (iVar0 == 1)
		{
			func_322(sParam0);
			return true;
		}
		else if (iVar0 == 2)
		{
			func_1189(sParam0);
			return true;
		}
		else if (iVar0 == 4)
		{
			func_714(sParam0);
			if (bVar2)
			{
				__LIB_6__::func_726(&(Local_22.f_61), 0);
				CAM::RENDER_SCRIPT_CAMS(false, true, 3000, true, false, 0);
				__LIB_3__::func_811(&Local_116, &Local_22);
				func_401(&Local_116, &Local_22);
				TASK::CLEAR_PED_TASKS(Global_35, true, false);
			}
			return true;
		}
		else if (iVar0 == 3)
		{
			if (bVar2 || __LIB_0__::func_272(Global_35, 0))
			{
				func_714(sParam0);
				__LIB_6__::func_726(&(Local_22.f_61), 0);
				CAM::RENDER_SCRIPT_CAMS(false, true, 3000, true, false, 0);
				__LIB_3__::func_811(&Local_116, &Local_22);
				func_401(&Local_116, &Local_22);
				if (__LIB_0__::func_272(Global_35, 0))
				{
					TASK::CLEAR_PED_TASKS(Global_35, true, false);
				}
				return true;
			}
		}
	}
	return false;
}

void func_741()
{
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_218, joaat("REL_PLAYER_ENEMY"));
	if (WEAPON::HAS_PED_GOT_WEAPON(iLocal_218, joaat("WEAPON_REVOLVER_CATTLEMAN"), 0, false))
	{
		WEAPON::REMOVE_WEAPON_FROM_PED(iLocal_218, joaat("WEAPON_REVOLVER_CATTLEMAN"), true, -142743235);
	}
	func_1191();
	PED::SET_PED_CAN_BE_TARGETTED(iLocal_218, true);
	func_592(5);
}

void func_742(var uParam0)
{
	int iVar0;
	if (iLocal_489 == -1)
	{
		iLocal_489 = MISC::GET_RANDOM_INT_IN_RANGE(1, 5);
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (__LIB_0__::func_272(Local_247[iVar0 /*47*/], 0) && Local_247[iVar0 /*47*/].f_12 != 17)
		{
			func_1192(iVar0, uParam0);
		}
		iVar0++;
	}
}

void func_743()
{
	vector3 vVar0[5];
	int iVar16;
	if (!bLocal_886)
	{
		vVar0[2 /*3*/] = { -965.5304f, 2184.546f, 340.0697f };
		vVar0[3 /*3*/] = { -966.3027f, 2188.591f, 339.8799f };
		vVar0[0 /*3*/] = { -968.3503f, 2171.609f, 339.8284f };
		vVar0[1 /*3*/] = { -970.8543f, 2173.199f, 339.7805f };
		vVar0[4 /*3*/] = { -972.0826f, 2185.059f, 339.7346f };
		iVar16 = 0;
		while (iVar16 < 5)
		{
			if (__LIB_0__::func_272(Local_247[iVar16 /*47*/], 0) && Local_247[iVar16 /*47*/].f_12 != 17)
			{
				func_1193(iVar16, vVar0[iVar16 /*3*/]);
			}
			iVar16++;
		}
		bLocal_886 = true;
	}
}

void func_744(char* sParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(iLocal_218))
	{
		__LIB_0__::func_325(&iLocal_219);
		func_636(sParam0, 1);
		iLocal_243 = 4;
	}
}

bool func_745(char* sParam0)
{
	if (__LIB_0__::func_272(iLocal_218, 0))
	{
		if (CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(iLocal_218, true, false), 1f) && __LIB_5__::func_621())
		{
			iLocal_243 = 6;
			return true;
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iLocal_218))
	{
		func_636(sParam0, 0);
		iLocal_243 = 4;
	}
	return false;
}

bool func_751(var uParam0, char* sParam1, float fParam2)
{
	int iVar0;
	if (!ENTITY::IS_ENTITY_DEAD(Global_35) && ENTITY::DOES_ENTITY_EXIST(iLocal_218))
	{
		__LIB_13__::func_692(&iLocal_219, iLocal_218, 408396114, sParam1);
		MAP::_BLIP_SET_MODIFIER(iLocal_219, joaat("BLIP_MODIFIER_FRIENDLY_OBJECTIVE"));
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_219, sParam1);
		if (!__LIB_2__::func_618(&uLocal_237))
		{
			if (__LIB_5__::func_621() || bLocal_224)
			{
				if (__LIB_0__::func_48(Global_35, iLocal_218, 2.5f, 1))
				{
					bLocal_224 = true;
					iVar0 = func_1198(iLocal_218, &uLocal_223);
					if (iVar0 == 2)
					{
						bLocal_224 = false;
						if (func_1199(uParam0, fParam2))
						{
							__LIB_8__::func_901(&uLocal_237, 0);
						}
					}
					else if (iVar0 == 3)
					{
						__LIB_13__::func_693(uParam0, 0, 0, 1);
						__LIB_2__::func_608(&uLocal_240);
						bLocal_224 = false;
					}
					else if (iVar0 == 0)
					{
						if (!__LIB_2__::func_618(&uLocal_240))
						{
							__LIB_8__::func_901(&uLocal_240, 0);
						}
						else if (__LIB_5__::func_51(&uLocal_240) > 3f)
						{
							__LIB_13__::func_693(uParam0, 0, 0, 1);
							__LIB_2__::func_608(&uLocal_240);
							bLocal_224 = false;
						}
					}
				}
				else
				{
					__LIB_13__::func_693(uParam0, 0, 1, 0);
					bLocal_224 = false;
				}
			}
		}
		else if ((__LIB_5__::func_51(&uLocal_237) > 1.5f && !_NAMESPACE77::_0xC5C395C60B542A3C(2)) || __LIB_5__::func_51(&uLocal_237) > 8f)
		{
			__LIB_1__::func_26(0);
			return true;
		}
	}
	return false;
}

bool func_752(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_0__::func_27(uParam1->f_58, 8))
	{
		return true;
	}
	if (__LIB_3__::func_761(uParam0, 16) && __LIB_3__::func_761(uParam0, 8192))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return false;
	}
	if (ENTITY::_0x3EC28DA1FFAC9DDD(uParam0->f_1, *uParam0, 0, 0))
	{
		PED::GET_PED_LAST_DAMAGE_BONE(uParam0->f_1, &iVar0);
		if (__LIB_3__::func_795(iVar0, __LIB_3__::func_761(uParam0, 512)))
		{
			__LIB_1__::func_336(&(uParam1->f_58), 8);
			return true;
		}
		if (__LIB_3__::func_761(uParam0, 268435456) && __LIB_0__::func_239(uParam1, 65536))
		{
			__LIB_1__::func_336(&(uParam1->f_58), 8);
			return true;
		}
	}
	iVar1 = 0;
	if (__LIB_3__::func_761(uParam0, 512))
	{
		iVar1 = 1;
	}
	iVar2 = WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(uParam0->f_1, iVar1);
	if (__LIB_3__::func_796(iVar2))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar2))
		{
			if (MISC::_0x7A76104CC2CC69E8(iVar2, 1, 1))
			{
				if (bParam2)
				{
					__LIB_1__::func_336(&(uParam1->f_58), 8);
				}
				return true;
			}
		}
	}
	if (__LIB_0__::func_27(uParam1->f_58, -2147483648))
	{
		if (__LIB_11__::func_410(&(uParam1->f_29), 0.05f))
		{
			if (bParam2)
			{
				__LIB_1__::func_336(&(uParam1->f_58), 8);
			}
			return true;
		}
	}
	else if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iVar2, true, false), uParam0->f_83, true))
	{
		__LIB_5__::func_107(&(uParam1->f_29));
		__LIB_1__::func_336(&(uParam1->f_58), -2147483648);
	}
	return false;
}

bool func_792(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
				func_792(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
		__LIB_13__::func_716(28);
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
						func_792(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_792(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_792(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_792(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_792(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_792(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_792(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				__LIB_13__::func_716(24);
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
					func_792(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_792(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
			__LIB_18__::func_624(iParam0);
		}
		if (__LIB_0__::func_192(iParam0, -1979000645))
		{
			func_1302(iParam0);
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
				func_792(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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

void func_794()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_1315();
	func_1316();
	func_1317();
	func_1318();
	func_1319();
	__LIB_1__::func_848();
	__LIB_0__::func_376();
}

void func_795(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	func_1322(iParam0, 1, 1, -142743235, 1);
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

void func_830()
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
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_1356(&uVar4, &iVar1, &iVar2, &iVar3)))
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

void func_891(bool bParam0)
{
	func_1424(bParam0);
}

struct<47> func_926(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<47> Var0;
	Var0.f_13 = 3;
	Var0.f_13.f_16 = 3;
	Var0.f_2 = { vParam0 };
	Var0.f_5 = fParam3;
	Var0.f_6 = iParam4;
	Var0.f_11 = iParam6;
	Var0.f_42 = iParam7;
	Var0.f_46 = iParam5;
	return Var0;
}

struct<5> func_927(vector3 vParam0, var uParam3, int iParam4)
{
	struct<5> Var0;
	Var0 = { vParam0 };
	Var0.f_3 = uParam3;
	Var0.f_4 = iParam4;
	return Var0;
}

struct<20> func_928(struct<5> Param0, struct<5> Param5, struct<5> Param10)
{
	struct<20> Var0;
	Var0 = 3;
	Var0.f_16 = 3;
	Var0[0 /*5*/] = { Param0 };
	Var0[1 /*5*/] = { Param5 };
	Var0[2 /*5*/] = { Param10 };
	Var0.f_16 = 0;
	return Var0;
}

struct<9> func_929(vector3 vParam0, vector3 vParam3, int iParam6)
{
	struct<9> Var0;
	Var0.f_1 = { vParam0 };
	Var0.f_4 = { vParam3 };
	Var0.f_8 = iParam6;
	return Var0;
}

void func_930(int iParam0, vector3 vParam1, vector3 vParam4, float fParam7, int iParam8)
{
	Local_116.f_51[iParam0 /*3*/] = { vParam1 };
	Local_116.f_61[iParam0 /*3*/] = { vParam4 };
	Local_116.f_71[iParam0] = fParam7;
	Local_116.f_75[iParam0] = iParam8;
}

int func_944(var uParam0, int iParam1, int iParam2)
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
		return func_944(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

bool func_960(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, float fParam5)
{
	int iVar0;
	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		__LIB_2__::func_521(uParam2, 1, iVar0);
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
				__LIB_2__::func_196(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (__LIB_13__::func_700(iParam0, uParam2))
				{
					*iParam3 = 8;
					__LIB_2__::func_196(iParam0, uParam2, *iParam3);
					return true;
				}
				else if (__LIB_10__::func_427(iParam0, iParam1, uParam2))
				{
					*iParam3 = 8;
					__LIB_2__::func_196(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (__LIB_4__::func_235(iParam0, uParam2))
				{
					*iParam3 = 64;
					__LIB_2__::func_196(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && __LIB_1__::func_394(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*iParam3 = 16384;
				__LIB_2__::func_196(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (__LIB_1__::func_395(uParam2, 1065353216 /* Float: 1f */))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (__LIB_10__::func_428(Global_35, iParam0, uParam2))
					{
						*iParam3 = 4;
						__LIB_2__::func_196(iParam0, uParam2, *iParam3);
						return true;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (__LIB_10__::func_429(Global_35, iParam0, uParam2))
					{
						*iParam3 = 256;
						__LIB_2__::func_196(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (__LIB_10__::func_430(Global_35, iParam0, uParam2, 0))
				{
					*iParam3 = 16;
					__LIB_2__::func_196(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			else if (__LIB_10__::func_430(Global_35, iParam0, uParam2, 1))
			{
				*iParam3 = 16;
				__LIB_2__::func_196(iParam0, uParam2, *iParam3);
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
					__LIB_2__::func_196(iParam0, uParam2, *iParam3);
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
					__LIB_2__::func_196(iParam0, uParam2, *iParam3);
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
					if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && __LIB_1__::func_328(uParam2, iParam0)) && __LIB_2__::func_832(uParam2, iParam0))
					{
						*iParam3 = 2;
						__LIB_2__::func_196(iParam0, uParam2, *iParam3);
						return true;
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
					*iParam3 = 2;
					__LIB_2__::func_196(iParam0, uParam2, *iParam3);
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
								__LIB_2__::func_196(iParam0, uParam2, *iParam3);
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
							__LIB_2__::func_196(iParam0, uParam2, *iParam3);
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
						__LIB_2__::func_196(iParam0, uParam2, *iParam3);
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
							__LIB_2__::func_196(iParam0, uParam2, *iParam3);
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
				__LIB_2__::func_196(iParam0, uParam2, *iParam3);
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
					__LIB_2__::func_196(iParam0, uParam2, *iParam3);
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
						__LIB_2__::func_196(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (__LIB_2__::func_228(iParam0, uParam2))
				{
					*iParam3 = 32768;
					__LIB_2__::func_196(iParam0, uParam2, *iParam3);
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
						__LIB_2__::func_196(iParam0, uParam2, *iParam3);
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
					__LIB_2__::func_196(iParam0, uParam2, *iParam3);
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
				__LIB_2__::func_196(iParam0, uParam2, *iParam3);
				return true;
			}
		}
	}
	return false;
}

int func_999()
{
	__LIB_0__::func_401(-1344255754);
	__LIB_5__::func_441("gunslinger_duel_2");
	if (!__LIB_13__::func_666(iLocal_951, 512))
	{
		MISC::CLEAR_AREA(vLocal_831, 50f, 2442122);
		PED::_0x9851DE7AEC10B4E1(vLocal_831, 50f, 1, 0);
		__LIB_6__::func_313(&iLocal_951, 512);
	}
	else if (!__LIB_13__::func_666(iLocal_951, 1024))
	{
		__LIB_6__::func_313(&iLocal_951, 1024);
	}
	else if (!__LIB_13__::func_666(iLocal_951, 131072))
	{
		if (STREAMING::_IS_IMAP_ACTIVE(-1344255754))
		{
			__LIB_6__::func_313(&iLocal_951, 131072);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_1000(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_1505(uParam0, &(Local_247[iVar1 /*47*/])))
		{
			iVar0++;
			WEAPON::REMOVE_ALL_PED_WEAPONS(Local_247[iVar1 /*47*/], true, true);
			PED::SET_PED_SEEING_RANGE(Local_247[iVar1 /*47*/], 18f);
			PED::SET_PED_COMBAT_RANGE(Local_247[iVar1 /*47*/], 0);
			PED::SET_PED_CONFIG_FLAG(Local_247[iVar1 /*47*/], 186, false);
			PED::SET_PED_CONFIG_FLAG(Local_247[iVar1 /*47*/], 388, true);
			PED::SET_PED_CONFIG_FLAG(Local_247[iVar1 /*47*/], 250, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_247[iVar1 /*47*/], 5, true);
			PED::SET_PED_FLEE_ATTRIBUTES(Local_247[iVar1 /*47*/], 32768, true);
			PED::SET_PED_FLEE_ATTRIBUTES(Local_247[iVar1 /*47*/], 512, true);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_247[iVar1 /*47*/], 1);
			ENTITY::_0x18FF3110CF47115D(Local_247[iVar1 /*47*/], 1, 0);
			TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(Local_247[iVar1 /*47*/], false);
			PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(Local_247[iVar1 /*47*/], joaat("GUN2_BAN_ILO"));
			__LIB_1__::func_338(Local_247[iVar1 /*47*/], Local_247[iVar1 /*47*/].f_2);
			if (iVar1 == 2 || iVar1 == 3)
			{
				__LIB_4__::func_7(Local_247[iVar1 /*47*/], joaat("WEAPON_REPEATER_CARBINE"), 600, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
				__LIB_4__::func_7(Local_247[iVar1 /*47*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), 600, 0, 2, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			}
			else if (iVar1 == 0)
			{
				__LIB_4__::func_7(Local_247[iVar1 /*47*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), 600, 0, 2, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			}
			else if (iVar1 == 1)
			{
				ENTITY::SET_ENTITY_PROOFS(Local_247[iVar1 /*47*/], 2, false);
				__LIB_4__::func_7(Local_247[iVar1 /*47*/], joaat("WEAPON_REPEATER_CARBINE"), 600, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
				__LIB_4__::func_7(Local_247[iVar1 /*47*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), 600, 0, 2, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			}
			else if (iVar1 == 4)
			{
				__LIB_4__::func_7(Local_247[iVar1 /*47*/], joaat("WEAPON_REPEATER_CARBINE"), 600, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
				__LIB_4__::func_7(Local_247[iVar1 /*47*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), 600, 0, 2, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			}
			if (PED::_0xA0BC8FAED8CFEB3C(Local_247[iVar1 /*47*/]))
			{
				PED::_SET_PED_BODY_COMPONENT(Local_247[iVar1 /*47*/], Local_247[iVar1 /*47*/].f_46);
				PED::_UPDATE_PED_VARIATION(Local_247[iVar1 /*47*/], false, true, true, true, false);
			}
			__LIB_13__::func_694(Local_247[iVar1 /*47*/]);
		}
		iVar1++;
	}
	if (iVar0 == 5)
	{
		__LIB_12__::func_875(uParam0, Local_247[2 /*47*/], "RGUN2_BAN2", 0);
		__LIB_12__::func_875(uParam0, Local_247[3 /*47*/], "RGUN2_BAN4", 0);
		__LIB_12__::func_875(uParam0, Local_247[0 /*47*/], "RGUN2_BAN5", 0);
		__LIB_12__::func_875(uParam0, Local_247[1 /*47*/], "RGUN2_BAN3", 0);
		__LIB_12__::func_875(uParam0, Local_247[4 /*47*/], "RGUN2_BAN1", 0);
		__LIB_12__::func_940(Global_35);
		return true;
	}
	return false;
}

void func_1001()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (((iVar0 == 2 || iVar0 == 3) || iVar0 == 0) || iVar0 == 1)
		{
			func_1510(iVar0);
		}
		else
		{
			func_1036(iVar0, 0, 0);
		}
		iVar0++;
	}
}

bool func_1002()
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		if (func_1511(&(Local_794[iVar0 /*9*/])))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 == 4)
	{
		return true;
	}
	return false;
}

bool func_1003(var uParam0)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_218))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1347702[uParam0->f_174 /*49*/].f_43))
		{
			iLocal_218 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Global_1347702[uParam0->f_174 /*49*/].f_43);
		}
		else
		{
			iLocal_218 = __LIB_12__::func_885(uParam0, joaat("CS_FAMOUSGUNSLINGER_02"), vLocal_978, 0, 1, 1, 0, 1, 1, 1, 1, 0);
		}
	}
	iVar0 = __LIB_12__::func_767(uParam0);
	if (__LIB_0__::func_272(iLocal_218, 0))
	{
		Global_1347702[uParam0->f_174 /*49*/].f_43 = iLocal_218;
		ENTITY::SET_ENTITY_COORDS(iLocal_218, vLocal_978, true, false, true, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_218, 186, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_218, 305, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_218, 388, true);
		PED::_0xAE6004120C18DF97(iLocal_218, 0, 0);
		ENTITY::SET_ENTITY_INVINCIBLE(iLocal_218, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_218, true);
		WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_218, true, true);
		__LIB_4__::func_7(iLocal_218, joaat("WEAPON_SHOTGUN_SAWEDOFF"), 600, 0, 16, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
		if (iVar0 < 3)
		{
			WEAPON::_GIVE_WEAPON_TO_PED_2(iLocal_218, joaat("WEAPON_REVOLVER_CATTLEMAN_MEXICAN"), 60, false, true, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
			WEAPON::SET_CURRENT_PED_WEAPON(iLocal_218, joaat("WEAPON_REVOLVER_CATTLEMAN_MEXICAN"), false, 0, false, false);
		}
		__LIB_13__::func_91(uParam0, 0);
		__LIB_12__::func_875(uParam0, iLocal_218, "RGUN2_Slinger", 1);
		__LIB_3__::func_459(iLocal_218, 0);
		ENTITY::_0x18FF3110CF47115D(iLocal_218, 7, 0);
		PED::_0xAE6004120C18DF97(iLocal_218, 1, 0);
		return true;
	}
	return false;
}

bool func_1004()
{
	int iVar0;
	int iVar1;
	iVar1 = 1;
	iVar0 = 1;
	while (iVar0 <= 3)
	{
		if (func_1511(&(Local_894[iVar0 /*9*/])))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 == 4)
	{
		return true;
	}
	return false;
}

void func_1031()
{
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_218, Global_35, 0, 1) || func_1534())
	{
		func_1535();
	}
}

void func_1033(int iParam0, var uParam1)
{
	if (__LIB_0__::func_393(Global_35, iLocal_988, 0, 1))
	{
		if (__LIB_18__::func_639(Local_247[iParam0 /*47*/], &(Local_247[iParam0 /*47*/].f_33), 1))
		{
			if (Local_247[iParam0 /*47*/].f_33.f_5 != joaat("EVENT_FOOT_STEP_HEARD"))
			{
				if (iParam0 == 0 || iParam0 == 1)
				{
					func_1039(1, uParam1, Local_247[iParam0 /*47*/].f_33.f_5);
					func_1039(0, uParam1, Local_247[iParam0 /*47*/].f_33.f_5);
				}
				else if (iParam0 == 2)
				{
					func_1039(2, uParam1, Local_247[iParam0 /*47*/].f_33.f_5);
					func_1039(3, uParam1, Local_247[iParam0 /*47*/].f_33.f_5);
				}
				else if (iParam0 == 3)
				{
					func_1039(3, uParam1, Local_247[iParam0 /*47*/].f_33.f_5);
					func_1039(2, uParam1, Local_247[iParam0 /*47*/].f_33.f_5);
				}
				else
				{
					func_1039(iParam0, uParam1, Local_247[iParam0 /*47*/].f_33.f_5);
				}
			}
		}
	}
	if (__LIB_13__::func_666(iLocal_951, 65536))
	{
		if (!Local_247[iParam0 /*47*/].f_45)
		{
			if (!__LIB_2__::func_618(&(Local_247[iParam0 /*47*/].f_7)))
			{
				__LIB_8__::func_901(&(Local_247[iParam0 /*47*/].f_7), 0);
				Local_247[iParam0 /*47*/].f_10 = MISC::GET_RANDOM_FLOAT_IN_RANGE(2f, 6f);
			}
			else if (__LIB_5__::func_51(&(Local_247[iParam0 /*47*/].f_7)) > Local_247[iParam0 /*47*/].f_10)
			{
				func_610(9, iParam0);
				Local_247[iParam0 /*47*/].f_45 = 1;
			}
		}
	}
	if (PED::_IS_PED_LASSOED(Local_247[iParam0 /*47*/]))
	{
		func_1056(iParam0);
		if (__LIB_13__::func_666(iLocal_951, 65536))
		{
			__LIB_13__::func_676(&iLocal_951, 65536);
		}
		if (__LIB_13__::func_666(iLocal_951, 32768))
		{
			__LIB_13__::func_676(&iLocal_951, 32768);
		}
		return;
	}
	else if (PED::_IS_PED_HOGTIED(Local_247[iParam0 /*47*/]))
	{
		func_1055(iParam0);
		if (__LIB_13__::func_666(iLocal_951, 65536))
		{
			__LIB_13__::func_676(&iLocal_951, 65536);
		}
		return;
	}
	if (func_960(Local_247[iParam0 /*47*/], 0, &uLocal_1020, &uLocal_1019, 0, 0))
	{
		if (Local_247[iParam0 /*47*/].f_12 == 12)
		{
			func_1047(iParam0);
			func_1053(iParam0);
			bLocal_934 = true;
		}
		else
		{
			bLocal_934 = true;
			func_1053(iParam0);
		}
		__LIB_13__::func_676(&iLocal_951, 65536);
		__LIB_13__::func_676(&iLocal_951, 32768);
	}
	if (bLocal_936)
	{
		bLocal_934 = true;
		func_1053(iParam0);
	}
	if (!__LIB_13__::func_666(iLocal_951, 65536))
	{
		if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uLocal_981[0], true, 0))
		{
			bLocal_934 = true;
			func_1053(iParam0);
		}
	}
	if (__LIB_13__::func_666(iLocal_951, 65536) || __LIB_13__::func_666(iLocal_951, 32768))
	{
		if (func_960(Local_247[iParam0 /*47*/], 0, &uLocal_991, &uLocal_1019, 0, 0))
		{
			if (Local_247[iParam0 /*47*/].f_12 == 12)
			{
				func_1047(iParam0);
				func_1053(iParam0);
			}
			else
			{
				func_1053(iParam0);
			}
			__LIB_13__::func_676(&iLocal_951, 65536);
			__LIB_13__::func_676(&iLocal_951, 32768);
		}
		return;
	}
}

void func_1034(int iParam0)
{
	func_1540(&(Local_247[iParam0 /*47*/]));
	if (__LIB_0__::func_163(Local_247[iParam0 /*47*/], 993674639))
	{
		PED::_0xEC6935EBE0847B90(Local_247[iParam0 /*47*/], func_1541(iParam0));
	}
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_247[iParam0 /*47*/], Local_247[iParam0 /*47*/].f_13[Local_247[iParam0 /*47*/].f_13.f_16 /*5*/], 1f, -1, 0.25f, 0, 40000f);
	func_610(3, iParam0);
}

void func_1035(var uParam0, int iParam1)
{
	if (__LIB_13__::func_666(iLocal_952, 16))
	{
		if (iParam1 == iLocal_773 && !__LIB_6__::func_904())
		{
			if (__LIB_12__::func_876(uParam0, func_1542(iParam1), 0))
			{
				__LIB_13__::func_676(&iLocal_952, 16);
			}
		}
	}
	else if (__LIB_13__::func_666(iLocal_952, 32))
	{
		if ((iParam1 != iLocal_773 && iParam1 != 0) && !__LIB_6__::func_904())
		{
			if (__LIB_0__::func_48(Local_247[iParam1 /*47*/], Global_35, 3f, 1))
			{
				if (__LIB_12__::func_876(uParam0, func_1543(iParam1), 0))
				{
					__LIB_13__::func_676(&iLocal_952, 32);
				}
			}
		}
	}
}

void func_1036(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	if (!ENTITY::IS_ENTITY_DEAD(Local_247[iParam0 /*47*/]) && !__LIB_0__::func_163(Local_247[iParam0 /*47*/], 242628503))
	{
		if (bParam2)
		{
			TASK::TASK_LOOK_AT_ENTITY(Local_247[iParam0 /*47*/], Global_35, -1, 0, 51, 0);
		}
		else
		{
			TASK::TASK_CLEAR_LOOK_AT(Local_247[iParam0 /*47*/]);
		}
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		if (bParam1)
		{
			TASK::TASK_ACHIEVE_HEADING(0, Local_247[iParam0 /*47*/].f_5, 0);
		}
		if (bParam2)
		{
			TASK::TASK_LOOK_AT_ENTITY(Local_247[iParam0 /*47*/], Global_35, -1, 0, 51, 0);
		}
		__LIB_1__::func_473(0, Local_247[iParam0 /*47*/].f_13[Local_247[iParam0 /*47*/].f_13.f_16 /*5*/].f_3, 0, 0, 0, -1082130432 /* Float: -1f */);
		TASK::CLOSE_SEQUENCE_TASK(iVar0);
		TASK::TASK_PERFORM_SEQUENCE(Local_247[iParam0 /*47*/], iVar0);
		TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		__LIB_8__::func_901(&(Local_247[iParam0 /*47*/].f_13.f_17), 0);
	}
	func_1545(iParam0);
	func_610(1, iParam0);
}

char* func_1038(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "BAN3_SAW_PLY";
		case 3:
			return "BAN4_SAW_PLY";
		case 4:
			return "BAN1_SAW_PLY";
	}
	return "";
}

void func_1039(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 == joaat("EVENT_DAMAGE"))
	{
		if ((func_606(iParam0) && !__LIB_0__::func_272(Local_247[iParam0 /*47*/], 1)) || PED::IS_PED_BEING_STEALTH_KILLED(Local_247[iParam0 /*47*/]))
		{
			return;
		}
		func_1053(iParam0);
		return;
	}
	else if (iParam2 == joaat("EVENT_GUN_AIMED_AT"))
	{
		func_1053(iParam0);
		return;
	}
	if (!__LIB_13__::func_666(iLocal_951, 65536))
	{
		if (Local_247[iParam0 /*47*/].f_12 != 12)
		{
			func_1546(iParam0, uParam1);
		}
	}
}

void func_1044(int iParam0)
{
	iLocal_491 = iParam0;
}

int func_1045(int iParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
			__LIB_5__::func_107(&(iParam1->f_13));
		}
		if (__LIB_2__::func_525(*iParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_1556(iParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_1045(iParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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
					if (func_1562(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
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
					if (func_1565(*iParam0, iParam1, uParam3))
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
					__LIB_4__::func_166(*iParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_1562(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
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
			func_1569(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

char* func_1046(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return "GUN2_ILO_INT_B2";
		case 3:
			return "GUN2_ILO_INT_B4";
		case 1:
			return "GUN2_ILO_INT_B3";
		case 4:
			return "GUN2_ILO_INT_B1";
	}
	return "";
}

void func_1047(int iParam0)
{
	__LIB_2__::func_480(&Local_513, 0, 0, 1, 0);
	func_1053(iParam0);
	__LIB_13__::func_676(&iLocal_952, 4);
	func_1053(iParam0);
}

void func_1048(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (__LIB_13__::func_123(uParam0, "GUN2_ILO_AGG", 0, 0))
		{
			func_1044(4);
		}
		else if (iLocal_491 != 3)
		{
			func_1044(3);
		}
	}
	else if (__LIB_13__::func_123(uParam0, "GUN2_ILO_PASS", 0, 0))
	{
		func_1044(8);
	}
	else if (iLocal_491 != 7)
	{
		func_1044(7);
	}
}

void func_1050(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (__LIB_12__::func_876(uParam0, func_1052(iParam1, 1), 0))
		{
			if (iLocal_491 != 10)
			{
				func_1044(10);
			}
		}
		else if (iLocal_491 != 9)
		{
			func_1044(9);
		}
	}
	else if (__LIB_12__::func_876(uParam0, func_1052(iParam1, 0), 0))
	{
		if (iLocal_491 != 6)
		{
			func_1044(6);
		}
	}
	else if (iLocal_491 != 5)
	{
		func_1044(5);
	}
}

void func_1051(int iParam0, bool bParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_247[iParam0 /*47*/]))
	{
		if (bParam1)
		{
			if (iParam0 == 0 || iParam0 == 1)
			{
				func_1054();
			}
			else
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_247[iParam0 /*47*/], Global_35, 0, -1f, -1f, -1f);
				TASK::TASK_LOOK_AT_ENTITY(Local_247[iParam0 /*47*/], Global_35, -1, 0, 51, 0);
			}
		}
	}
	func_610(14, iParam0);
}

char* func_1052(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 1:
				return "BAN3_ILO_AGG";
			case 2:
				return "BAN2_ILO_AGG";
			case 3:
				return "BAN4_ILO_AGG";
			case 4:
				return "BAN1_ILO_AGG";
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 1:
				return "BAN3_ILO_PASS";
			case 2:
				return "BAN2_ILO_PASS";
			case 3:
				return "BAN4_ILO_PASS";
			case 4:
				return "BAN1_ILO_PASS";
			default:
				break;
		}
	}
	return "";
}

void func_1053(int iParam0)
{
	if (__LIB_13__::func_666(iLocal_951, 65536))
	{
		__LIB_13__::func_676(&iLocal_951, 65536);
		__LIB_13__::func_676(&iLocal_951, 32768);
	}
	func_615(iParam0, 0, 1, 0);
	if (iParam0 == 0 || iParam0 == 1)
	{
		func_1570();
	}
	iLocal_483[iParam0] = MISC::GET_GAME_TIMER();
	func_610(18, iParam0);
}

bool func_1054()
{
	if (iLocal_891 == 2 || iLocal_891 == 4)
	{
		return true;
	}
	else if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_933))
	{
		if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_892, sLocal_933))
		{
			ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_892, sLocal_933, true);
			iLocal_891 = 2;
		}
	}
	else if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_892, sLocal_933))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_892, sLocal_933, true);
		iLocal_891 = 2;
		return true;
	}
	else if (!ANIMSCENE::_0x0DF57F86FE71DBE5(iLocal_892, sLocal_933))
	{
		ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_892, sLocal_933);
	}
	return false;
}

void func_1055(int iParam0)
{
	__LIB_0__::func_325(&(Local_247[iParam0 /*47*/].f_1));
	func_610(17, iParam0);
}

void func_1056(int iParam0)
{
	__LIB_0__::func_325(&(Local_247[iParam0 /*47*/].f_1));
	func_610(16, iParam0);
}

void func_1057()
{
	if (iLocal_891 != 5)
	{
		func_563(1);
		iLocal_891 = 5;
	}
}

bool func_1058(int iParam0)
{
	if (!bLocal_934)
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_483[iParam0]) > Local_247[iParam0 /*47*/].f_42)
		{
			if (iParam0 == 0 || iParam0 == 1)
			{
				if (iLocal_891 == 4)
				{
					return true;
				}
			}
			else
			{
				return true;
			}
		}
	}
	else
	{
		return true;
	}
	return false;
}

void func_1059(var uParam0, int iParam1)
{
	char* sVar0;
	char* sVar1;
	func_615(iParam1, 0, 1, 0);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_247[iParam1 /*47*/], false);
	if (PED::IS_PED_USING_ANY_SCENARIO(Local_247[iParam1 /*47*/]))
	{
		PED::_0xF1C03A5352243A30(Local_247[iParam1 /*47*/]);
	}
	if (!__LIB_13__::func_666(iLocal_952, 256))
	{
		if (iParam1 != 0)
		{
			sVar0 = func_1571(iParam1);
			sVar1 = func_1052(iParam1, 1);
			if (!__LIB_6__::func_903(sVar0) && !__LIB_6__::func_903(sVar1))
			{
				__LIB_5__::func_20(0, 0);
			}
			if (!bLocal_791)
			{
				if (__LIB_12__::func_876(uParam0, sVar0, 0))
				{
					__LIB_6__::func_313(&iLocal_952, 256);
					func_1573(iParam1);
					func_610(19, iParam1);
				}
			}
			else if (!bLocal_793)
			{
				if (__LIB_13__::func_124(uParam0, sVar1, 1, 0))
				{
					__LIB_6__::func_313(&iLocal_952, 256);
					func_1573(iParam1);
					func_610(19, iParam1);
				}
			}
			else
			{
				__LIB_6__::func_313(&iLocal_952, 256);
				func_1573(iParam1);
				func_610(19, iParam1);
			}
		}
		else
		{
			func_1573(iParam1);
			func_610(19, iParam1);
		}
	}
	else
	{
		func_1573(iParam1);
		func_610(19, iParam1);
	}
}

void func_1072()
{
	int iVar0;
	if (!bLocal_884)
	{
		iVar0 = func_1581(0, 0, 0, 0, 0, 0, 0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				bLocal_884 = true;
			}
			else
			{
				if (__LIB_0__::func_266(iVar0, vLocal_231, 20f, 1, 1))
				{
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iVar0, -967.7963f, 2190.623f, 339.8623f, 196.2243f, true, false, true);
					PHYSICS::_0x06AADE17334F7A40(iVar0, -967.16f, 2188.73f, 340.53f);
				}
				TASK::TASK_STAND_STILL(iVar0, -1);
			}
			bLocal_884 = true;
		}
		else
		{
			bLocal_884 = true;
		}
	}
}

int func_1074(var uParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	EVENT::_0xB6F4825153920582();
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_RADAR_MODE"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
	__LIB_0__::func_573();
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DIVE"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP_CARRIABLE"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP_CARRIABLE_FROM_PARENT"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP_CARRIABLE2"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_NEXT_CAMERA"), false);
	CAM::_0x8910C24B7E0046EC();
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CINEMATIC_CAM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CINEMATIC_CAM_HOLD"), false);
	__LIB_3__::func_843(uParam1, uParam0);
	if (__LIB_0__::func_272(uParam0->f_1, 0) && PED::IS_PED_A_PLAYER(*uParam0))
	{
		PED::SET_PED_RESET_FLAG(uParam0->f_1, 25, true);
	}
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	__LIB_3__::func_807();
	switch (uParam1->f_55)
	{
		case 0:
			if (__LIB_3__::func_764(uParam1))
			{
				__LIB_0__::func_240(uParam1, 33554432);
				if (__LIB_3__::func_761(uParam0, 2))
				{
					__LIB_3__::func_595(ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false));
				}
			}
			if (__LIB_3__::func_764(uParam1))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 0, false);
			}
			else
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 4480, false);
			}
			__LIB_3__::func_765();
			__LIB_3__::func_815(0, 1065353216 /* Float: 1f */);
			if (__LIB_3__::func_761(uParam0, 2))
			{
				func_1589(uParam0, uParam1);
			}
			__LIB_3__::func_844(uParam0, uParam1);
			if (__LIB_3__::func_766(uParam0, uParam1))
			{
				func_401(uParam0, uParam1);
				__LIB_3__::func_762(uParam1, 9);
				return 1;
			}
			if (__LIB_0__::func_272(*uParam0, 0) && func_1592(uParam0, uParam1))
			{
				__LIB_3__::func_762(uParam1, 1);
			}
			break;
		case 1:
			__LIB_3__::func_765();
			__LIB_3__::func_844(uParam0, uParam1);
			if (__LIB_3__::func_761(uParam0, 2))
			{
				func_1589(uParam0, uParam1);
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				return 0;
			}
			if (__LIB_3__::func_767(uParam0, uParam1) && func_1594(uParam0, uParam1))
			{
				__LIB_8__::func_529(uParam0, uParam1, 0);
				Global_19 = 0;
				__LIB_13__::func_701(uParam0, uParam1);
				func_1597(uParam0, uParam1);
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
				{
					uParam1->f_4 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_INTERESTING_MELEE_FIGHT"), uParam0->f_1, 0f, 30f, 35f, -1f, 20f, 180f, false, false, -1, -1);
				}
				if (!__LIB_3__::func_761(uParam0, 1024))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
					if (__LIB_3__::func_761(uParam0, 64))
					{
						TASK::TASK_DUEL(*uParam0, uParam1->f_63, uParam0->f_48, uParam0->f_1, __LIB_3__::func_768(uParam0), 0, 0f, 0f, 0f, __LIB_0__::func_152(uParam0->f_42, uParam0->f_45, 1), 1);
					}
					else if (__LIB_3__::func_761(uParam0, 32))
					{
						TASK::TASK_DUEL(*uParam0, uParam1->f_63, uParam0->f_48, uParam0->f_1, __LIB_3__::func_768(uParam0), 0, 0f, 0f, 0f, __LIB_0__::func_152(uParam0->f_42, uParam0->f_45, 1), 1);
					}
					else
					{
						TASK::TASK_DUEL(*uParam0, uParam1->f_63, uParam0->f_48, uParam0->f_1, __LIB_3__::func_768(uParam0), 0, uParam0->f_42, __LIB_0__::func_152(uParam0->f_42, uParam0->f_45, 1), 1);
					}
				}
				PED::_0x2208438012482A1A(*uParam0, true, true);
				uParam1->f_2 = MISC::GET_GAME_TIMER();
				if (!PED::GET_PED_CONFIG_FLAG(uParam0->f_1, 146, true))
				{
					PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 146, true);
					__LIB_0__::func_240(uParam1, 2048);
				}
				if (!__LIB_3__::func_761(uParam0, 262144))
				{
					WEAPON::_HIDE_PED_WEAPONS(*uParam0, 2, true);
					WEAPON::_HIDE_PED_WEAPONS(uParam0->f_1, 2, true);
				}
				if ((__LIB_3__::func_761(uParam0, 32) || __LIB_3__::func_761(uParam0, 2)) || (__LIB_3__::func_764(uParam1) && !__LIB_3__::func_764(uParam1)))
				{
					if (!__LIB_3__::func_761(uParam0, 1024))
					{
						__LIB_3__::func_353(&(uParam0->f_16), 0);
					}
					if (!__LIB_3__::func_764(uParam1))
					{
						__LIB_3__::func_845(uParam0, uParam1, 1);
					}
					__LIB_3__::func_762(uParam1, 7);
				}
				else
				{
					func_1600(uParam1, 0);
					MAP::DISPLAY_RADAR(false);
					__LIB_3__::func_762(uParam1, 3);
				}
			}
			break;
		case 3:
			__LIB_3__::func_765();
			__LIB_3__::func_815(0, 1065353216 /* Float: 1f */);
			__LIB_13__::func_701(uParam0, uParam1);
			bVar0 = func_1589(uParam0, uParam1);
			if (__LIB_3__::func_766(uParam0, uParam1))
			{
				func_401(uParam0, uParam1);
				__LIB_3__::func_762(uParam1, 9);
				return 1;
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				return 0;
			}
			if (MISC::GET_GAME_TIMER() > uParam1->f_2 + 1000 || __LIB_0__::func_27(uParam0->f_88, 2))
			{
				if ((__LIB_0__::func_27(uParam0->f_88, 32) || bVar0) && (__LIB_3__::func_761(uParam0, 2) || (PED::IS_PED_FACING_PED(uParam0->f_1, *uParam0, 20f) && PED::IS_PED_FACING_PED(*uParam0, uParam0->f_1, 20f))))
				{
					if (!__LIB_3__::func_761(uParam0, 2048))
					{
						LAW::_0xDE5FAA741A781F73(PLAYER::GET_PLAYER_INDEX(), 1);
					}
					if (!__LIB_3__::func_761(uParam0, 1024))
					{
						__LIB_3__::func_353(&(uParam0->f_16), 0);
					}
					if (__LIB_0__::func_27(uParam0->f_88, 1024))
					{
						if (__LIB_0__::func_94(uParam0->f_1, uParam0->f_45, 0) < 0.5f || __LIB_0__::func_163(uParam0->f_1, -717627678))
						{
							TASK::CLEAR_PED_TASKS(uParam0->f_1, true, false);
							TASK::OPEN_SEQUENCE_TASK(&iVar1);
							if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_12)))
							{
								TASK::TASK_PLAY_ANIM(0, "script_re@drunk_dueler", &(uParam0->f_12), 2f, -4f, -1, 4, 0f, false, 0, false, 0, false);
							}
							else
							{
								TASK::TASK_PLAY_ANIM(0, "script_re@drunk_dueler", "intro_idle_drunk", 2f, -4f, -1, 4, 0f, false, 0, false, 0, false);
								TASK::TASK_PLAY_ANIM(0, "script_re@drunk_dueler", "pass_out_drunk", 2f, -4f, -1, 4, 0f, false, 0, false, 0, false);
							}
							__LIB_1__::func_474(uParam0->f_1, &iVar1, 0, 0, 1, 1);
							__LIB_3__::func_762(uParam1, 8);
						}
					}
					else
					{
						__LIB_3__::func_762(uParam1, 7);
					}
				}
			}
			break;
		case 7:
			MAP::DISPLAY_RADAR(false);
			__LIB_13__::func_701(uParam0, uParam1);
			if (func_1602(uParam0, uParam1))
			{
				func_401(uParam0, uParam1);
				__LIB_3__::func_762(uParam1, 9);
				__LIB_3__::func_353(&(uParam0->f_32), 1);
				return 1;
			}
			break;
		case 8:
			__LIB_13__::func_701(uParam0, uParam1);
			__LIB_13__::func_681(uParam0);
			if (!__LIB_0__::func_27(uParam1->f_1, 512) && ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_1, -529482553))
			{
				EVENT::REMOVE_SHOCKING_EVENT(uParam1->f_4);
				uParam1->f_4 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(joaat("EVENT_SHOCKING_BEAT_AMUSING"), ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false), -1f, -1f, -1f, -1f, -1f, -1, -1);
				TASK::CLEAR_PED_TASKS(uParam0->f_1, true, false);
				WEAPON::REMOVE_ALL_PED_WEAPONS(uParam0->f_1, false, true);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 243, true);
				TASK::TASK_KNOCKED_OUT(uParam0->f_1, 60f, true);
				__LIB_1__::func_336(&(uParam1->f_1), 512);
				func_401(uParam0, uParam1);
				if (!__LIB_3__::func_761(uParam0, 2048))
				{
					LAW::_0xDE5FAA741A781F73(PLAYER::GET_PLAYER_INDEX(), 0);
				}
				__LIB_3__::func_353(&(uParam0->f_32), 1);
				CAM::RENDER_SCRIPT_CAMS(false, true, 5000, true, false, 0);
				MAP::DISPLAY_RADAR(true);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
				TASK::CLEAR_PED_TASKS(*uParam0, true, false);
				__LIB_3__::func_762(uParam1, 9);
				return 1;
			}
			break;
		case 9:
			func_401(uParam0, uParam1);
			return 1;
	}
	if (__LIB_3__::func_761(uParam0, 4))
	{
		bVar2 = true;
		iVar3 = MISC::_GET_GAME_TIMER_NON_SCALED_CLIPPED();
		if (uParam1->f_10 == -1)
		{
			uParam1->f_10 = iVar3;
		}
		else if ((iVar3 - uParam1->f_10) > 2000)
		{
			bVar2 = false;
		}
		if (bVar2)
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), true);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), true);
		}
	}
	return 0;
}

void func_1110(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
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
		func_1615();
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

void func_1112(var uParam0)
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
			func_1623(iVar1, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_1623(iVar3, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_1113(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if ((__LIB_0__::func_84(uParam0, 268435456) && !__LIB_0__::func_86(__LIB_12__::func_720(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { __LIB_12__::func_720(uParam0) };
			func_1623(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

void func_1186()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!MAP::DOES_BLIP_EXIST(Local_247[iVar0 /*47*/].f_1) && Local_247[iVar0 /*47*/].f_12 != 21)
		{
			Local_247[iVar0 /*47*/].f_1 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_247[iVar0 /*47*/]);
			MAP::_BLIP_SET_MODIFIER(Local_247[iVar0 /*47*/].f_1, -1034486097);
		}
		iVar0++;
	}
}

bool func_1187(var uParam0, int iParam1)
{
	__LIB_12__::func_875(uParam0, Local_247[iParam1 /*47*/], "RGUN2_BAN4", 0);
	if (__LIB_12__::func_876(uParam0, "BAN4_COMBAT_EN", 0))
	{
		return true;
	}
	return false;
}

void func_1189(char* sParam0)
{
	func_1685(sParam0);
	if (__LIB_0__::func_272(iLocal_218, 0))
	{
		if ((!__LIB_1__::func_200(85) && !__LIB_1__::func_200(86)) && !__LIB_1__::func_200(87))
		{
			TASK::CLEAR_PED_TASKS(iLocal_218, true, false);
		}
	}
	if (__LIB_0__::func_272(iLocal_218, 0))
	{
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_218, true);
	}
	PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), false, 0, -1, false);
	iLocal_243 = 2;
}

void func_1191()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_247[iVar0 /*47*/]))
		{
			func_1053(iVar0);
		}
		iVar0++;
	}
}

void func_1192(int iParam0, var uParam1)
{
	char* sVar0;
	if (iParam0 != 0)
	{
		if (!__LIB_13__::func_666(iLocal_952, 4096) && iParam0 == iLocal_489)
		{
			sVar0 = func_1686(iParam0);
			if (!__LIB_6__::func_903(sVar0))
			{
				__LIB_5__::func_20(0, 0);
			}
			if (__LIB_12__::func_876(uParam1, sVar0, 0))
			{
				__LIB_6__::func_313(&iLocal_952, 4096);
			}
		}
	}
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_247[iParam0 /*47*/], 5, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_247[iParam0 /*47*/], 17, true);
	PED::SET_PED_FLEE_ATTRIBUTES(Local_247[iParam0 /*47*/], 32768, false);
	PED::SET_PED_FLEE_ATTRIBUTES(Local_247[iParam0 /*47*/], 512, false);
	__LIB_0__::func_325(&(Local_247[iParam0 /*47*/].f_1));
	TASK::TASK_SMART_FLEE_PED(Local_247[iParam0 /*47*/], Global_35, 200f, -1, 0, 1077936128 /* Float: 3f */, 0);
	func_610(20, iParam0);
}

void func_1193(int iParam0, vector3 vParam1)
{
	TASK::CLEAR_PED_TASKS(Local_247[iParam0 /*47*/], true, false);
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_247[iParam0 /*47*/], vParam1, __LIB_0__::func_152(vParam1, -953.7972f, 2175.827f, 340.43f, 1), true, false, true);
	func_610(2, iParam0);
}

int func_1198(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	vector3 vVar5;
	var uVar8;
	vector3 vVar9;
	vector3 vVar12;
	float fVar15;
	if (*uParam1 == 0)
	{
		vLocal_225 = { PED::GET_PED_BONE_COORDS(iParam0, 21030, 0.057f, 0.1f, 0f) };
		vLocal_228 = { PED::GET_PED_BONE_COORDS(Global_35, 21030, 0.057f, 0.1f, 0f) };
		*uParam1 = SHAPETEST::START_SHAPE_TEST_SWEPT_SPHERE(vLocal_228, vLocal_225, 0.01f, 90, Global_35, 4);
		return 0;
	}
	else
	{
		iVar0 = SHAPETEST::GET_SHAPE_TEST_RESULT(*uParam1, &iVar1, &vVar5, &uVar2, &uVar8);
		if (iVar0 == 2)
		{
			if (iVar1 > 0)
			{
				vVar9 = { PED::GET_PED_BONE_COORDS(Global_35, 21030, 0.057f, 0.1f, 0f) };
				vVar12.x = (vVar9.x - vLocal_228.x);
				vVar12.f_1 = (vVar9.y - vLocal_228.y);
				vVar12.f_2 = (vVar9.z - vLocal_228.z);
				fVar15 = MISC::GET_DISTANCE_BETWEEN_COORDS(PED::GET_PED_BONE_COORDS(iParam0, 21030, 0.057f, 0f, 0f), vVar5 + vVar12, true);
				if (fVar15 <= 0.2f)
				{
					if (CAM::IS_SPHERE_VISIBLE(PED::GET_PED_BONE_COORDS(iParam0, 21030, 0.057f, 0.15f, 0f), 0.01f))
					{
						*uParam1 = 0;
						return 2;
					}
					else
					{
						*uParam1 = 0;
						return 3;
					}
				}
				else
				{
					*uParam1 = 0;
					return 3;
				}
			}
			*uParam1 = 0;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_1199(var uParam0, float fParam1)
{
	if (!CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(iLocal_218, true, false), 1f))
	{
		__LIB_13__::func_693(uParam0, 1, 0, 0);
		return false;
	}
	if (!__LIB_0__::func_48(Global_35, iLocal_218, fParam1, 1))
	{
		__LIB_13__::func_693(uParam0, 0, 1, 0);
		return false;
	}
	if (!CAM::IS_SPHERE_VISIBLE(PED::GET_PED_BONE_COORDS(iLocal_218, 21030, 0f, 0f, 0.125f), 0.125f))
	{
		__LIB_13__::func_693(uParam0, 0, 0, 1);
		return false;
	}
	return true;
}

void func_1302(int iParam0)
{
	if (__LIB_0__::func_192(iParam0, 943695443))
	{
		func_1781(0, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -2096528786))
	{
		func_1781(1, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -1094167013))
	{
		func_1781(2, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1936654645))
	{
		func_1781(3, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1306489306))
	{
		func_1781(4, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 435762317))
	{
		func_1781(5, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1259363210))
	{
		func_1781(6, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 881398259))
	{
		func_1781(7, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -541549214))
	{
		func_1781(8, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 130796156))
	{
		func_1781(-1, iParam0);
	}
}

void func_1315()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_1793(0);
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
	func_1793(1);
}

void func_1316()
{
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_792(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_1317()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_1796(0);
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
	func_1796(1);
}

void func_1318()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_1__::func_432(15000, 0, 0, 0, 1);
			func_1796(0);
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
	func_1796(1);
}

void func_1319()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_792(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_792(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_1322(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_1322(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
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

int func_1322(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			func_1322(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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

int func_1356(var uParam0, int iParam1, int iParam2, int iParam3)
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
	iVar11 = (func_1835(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_952(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_792(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	__LIB_1__::func_432(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

void func_1424(bool bParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (bParam0)
		{
			PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(Local_247[iVar0 /*47*/], 0);
			__LIB_2__::func_426(&(Local_247[iVar0 /*47*/]));
		}
		else
		{
			PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(Local_247[iVar0 /*47*/], 0);
			__LIB_2__::func_788(&(Local_247[iVar0 /*47*/]), 1, 0, 1);
		}
		iVar0++;
	}
	if (bParam0)
	{
		__LIB_2__::func_426(&iLocal_218);
	}
	else
	{
		__LIB_2__::func_788(&iLocal_218, 1, 0, 1);
	}
}

bool func_1505(var uParam0, var uParam1)
{
	if (uParam1->f_11 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
		{
			*uParam1 = __LIB_12__::func_885(uParam0, uParam1->f_11, uParam1->f_2, uParam1->f_5, 0, 1, 1, 1, 1, 0, 1, 1);
		}
		if (__LIB_0__::func_272(*uParam1, 0))
		{
			return true;
		}
	}
	return false;
}

void func_1510(int iParam0)
{
	if (!__LIB_0__::func_163(Local_247[iParam0 /*47*/], -1098463898))
	{
		if (Local_247[iParam0 /*47*/].f_6 != -1)
		{
			__LIB_2__::func_915(Local_247[iParam0 /*47*/], Local_247[iParam0 /*47*/].f_6, Local_247[iParam0 /*47*/].f_13[Local_247[iParam0 /*47*/].f_13.f_16 /*5*/], ENTITY::GET_ENTITY_HEADING(Local_247[iParam0 /*47*/]), 0, 0, 0, 0, -1082130432 /* Float: -1f */);
		}
	}
	func_610(8, iParam0);
}

bool func_1511(var uParam0)
{
	if (uParam0->f_8 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
		{
			*uParam0 = OBJECT::CREATE_OBJECT(uParam0->f_8, uParam0->f_1, true, true, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(*uParam0, uParam0->f_4, 2, true);
		}
		if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
		{
			ENTITY::_0x9587913B9E772D29(*uParam0, 1);
			return true;
		}
	}
	else
	{
		return true;
	}
	return false;
}

bool func_1534()
{
	if (__LIB_2__::func_986(iLocal_834))
	{
		return true;
	}
	return false;
}

void func_1535()
{
	__LIB_13__::func_692(&iLocal_990, iLocal_218, joaat("BLIP_STYLE_ENEMY"), "GUN2_BLIP");
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_218, joaat("REL_PLAYER_ENEMY"));
	PED::SET_PED_CONFIG_FLAG(iLocal_218, 233, true);
	TASK::TASK_COMBAT_PED(iLocal_218, Global_35, 0, 0);
	__LIB_1__::func_948(iLocal_834, 0, 0, 0, 1, 0, 0, 0);
	func_592(4);
}

void func_1540(var uParam0)
{
	if (MAP::DOES_BLIP_EXIST(uParam0->f_1))
	{
		MAP::_BLIP_REMOVE_MODIFIER(uParam0->f_1, -128070310);
		MAP::_BLIP_SET_MODIFIER(uParam0->f_1, -662251075);
	}
}

Vector3 func_1541(int iParam0)
{
	int iVar0;
	iVar0 = Local_247[iParam0 /*47*/].f_13.f_16 + 1;
	if (iVar0 >= 3)
	{
		iVar0 = 0;
	}
	return Local_247[iParam0 /*47*/].f_13[iVar0 /*5*/];
}

char* func_1542(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "BAN3_DONTHARM";
		case 2:
			return "BAN2_DONTHARM";
		case 3:
			return "BAN4_DONTHARM";
		case 4:
			return "BAN1_DONTHARM";
		default:
			break;
	}
	return "";
}

char* func_1543(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "BAN3_WARN";
		case 2:
			return "BAN2_WARN";
		case 3:
			return "BAN4_WARN";
		case 4:
			return "BAN1_WARN";
		default:
			break;
	}
	return "";
}

void func_1545(int iParam0)
{
	int iVar0;
	iVar0 = Local_247[iParam0 /*47*/].f_13.f_16;
	iVar0++;
	if (iVar0 >= 3)
	{
		iVar0 = 0;
	}
	Local_247[iParam0 /*47*/].f_13.f_16 = iVar0;
}

void func_1546(int iParam0, var uParam1)
{
	char* sVar0;
	float fVar1;
	int iVar2;
	if (iLocal_773 == -1 || iParam0 == iLocal_773)
	{
		if (iParam0 != 0)
		{
			iLocal_773 = iParam0;
			if (!__LIB_13__::func_666(iLocal_951, 32768))
			{
				__LIB_6__::func_313(&iLocal_951, 32768);
			}
			func_610(12, iParam0);
			if (iParam0 == 1)
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_892, false))
				{
					if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_892, sLocal_933) && !ANIMSCENE::_0x1F0E401031E20146(iLocal_892, sLocal_933))
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_892, sLocal_933, true);
					}
				}
			}
			if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Local_247[iParam0 /*47*/], iLocal_892) || ANIMSCENE::_0x1F0E401031E20146(iLocal_892, sLocal_933))
			{
				sVar0 = func_1046(iParam0);
				if (!__LIB_13__::func_666(iLocal_952, 2))
				{
					if (!__LIB_8__::func_684(sVar0))
					{
						__LIB_5__::func_20(0, 0);
					}
					if (__LIB_12__::func_876(uParam1, sVar0, 0))
					{
						__LIB_6__::func_313(&iLocal_952, 2);
					}
				}
				if ((iParam0 == 1 && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Local_247[iParam0 /*47*/], iLocal_892)) || iParam0 != 1)
				{
					__LIB_6__::func_313(&iLocal_952, 4);
					PED::_0xF1C03A5352243A30(Local_247[iParam0 /*47*/]);
					TASK::TASK_LOOK_AT_ENTITY(Local_247[iParam0 /*47*/], Global_35, -1, 0, 51, 0);
					fVar1 = __LIB_0__::func_94(Local_247[iParam0 /*47*/], Global_36, 1);
					if (fVar1 <= 2.5f)
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_247[iParam0 /*47*/], Global_35, -1, -1f, -1f, -1f);
					}
					else if (fVar1 > 8f)
					{
						TASK::TASK_GO_TO_ENTITY(Local_247[iParam0 /*47*/], Global_35, -1, 2.5f, 1.5f, 2f, 0);
					}
					else
					{
						TASK::TASK_GO_TO_ENTITY(Local_247[iParam0 /*47*/], Global_35, -1, 2.5f, 1f, 2f, 0);
					}
					__LIB_2__::func_608(&uLocal_959);
					if (iLocal_244 < 1)
					{
						func_303(uParam1, 1);
					}
				}
			}
		}
	}
	else if (iParam0 != iLocal_773)
	{
		if (!iLocal_779[iParam0])
		{
			if (iParam0 == 1)
			{
				__LIB_2__::func_602(&(Local_569[0 /*17*/]), "RGUN2_DEFUSE", " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				__LIB_2__::func_602(&(Local_569[1 /*17*/]), "RGUN2_ESCALATE", " ", joaat("INPUT_INTERACT_LOCKON_ROB"), 0, 0, 0, 1, 0);
				__LIB_2__::func_411(&(Local_569[0 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(Local_569[1 /*17*/]), 0, 0);
			}
			if (iParam0 == 2)
			{
				__LIB_2__::func_602(&(Local_625[0 /*17*/]), "RGUN2_DEFUSE", " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				__LIB_2__::func_602(&(Local_625[1 /*17*/]), "RGUN2_ESCALATE", " ", joaat("INPUT_INTERACT_LOCKON_ROB"), 0, 0, 0, 1, 0);
				__LIB_2__::func_411(&(Local_625[0 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(Local_625[1 /*17*/]), 0, 0);
			}
			if (iParam0 == 3)
			{
				__LIB_2__::func_602(&(Local_681[0 /*17*/]), "RGUN2_DEFUSE", " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				__LIB_2__::func_602(&(Local_681[1 /*17*/]), "RGUN2_ESCALATE", " ", joaat("INPUT_INTERACT_LOCKON_ROB"), 0, 0, 0, 1, 0);
				__LIB_2__::func_411(&(Local_681[0 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(Local_681[1 /*17*/]), 0, 0);
			}
			if (iParam0 == 4)
			{
				__LIB_2__::func_602(&(Local_737[0 /*17*/]), "RGUN2_DEFUSE", " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				__LIB_2__::func_602(&(Local_737[1 /*17*/]), "RGUN2_ESCALATE", " ", joaat("INPUT_INTERACT_LOCKON_ROB"), 0, 0, 0, 1, 0);
				__LIB_2__::func_411(&(Local_737[0 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(Local_737[1 /*17*/]), 0, 0);
			}
			iLocal_779[iParam0] = 1;
		}
		else if (bLocal_791 && iLocal_491 < 1)
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_247[iParam0 /*47*/], true);
			PED::SET_PED_CONFIG_FLAG(Local_247[iParam0 /*47*/], 301, false);
			if (iParam0 == 1)
			{
				iLocal_775 = func_1045(&(Local_247[iParam0 /*47*/]), &iLocal_548, 25f, &Local_569, 0f, 3, 0, "GUN2_BAN_ILO", 1, 0, 0, 2, -1082130432 /* Float: -1f */);
			}
			else if (iParam0 == 2)
			{
				iLocal_776 = func_1045(&(Local_247[iParam0 /*47*/]), &iLocal_604, 25f, &Local_625, 0f, 3, 0, "GUN2_BAN_ILO", 1, 0, 0, 2, -1082130432 /* Float: -1f */);
			}
			else if (iParam0 == 3)
			{
				iLocal_777 = func_1045(&(Local_247[iParam0 /*47*/]), &iLocal_660, 25f, &Local_681, 0f, 3, 0, "GUN2_BAN_ILO", 1, 0, 0, 2, -1082130432 /* Float: -1f */);
			}
			else if (iParam0 == 4)
			{
				iLocal_778 = func_1045(&(Local_247[iParam0 /*47*/]), &iLocal_716, 25f, &Local_737, 0f, 3, 0, "GUN2_BAN_ILO", 1, 0, 0, 2, -1082130432 /* Float: -1f */);
			}
		}
		if (iLocal_491 == 1 || iLocal_491 == 2)
		{
			if (!__LIB_6__::func_903(func_1046(iLocal_773)))
			{
				if (iParam0 == 1)
				{
					if (!iLocal_785[iParam0])
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_247[iParam0 /*47*/], true);
						PED::SET_PED_CONFIG_FLAG(Local_247[iParam0 /*47*/], 301, false);
						__LIB_2__::func_411(&(Local_569[0 /*17*/]), 1, 0);
						__LIB_2__::func_411(&(Local_569[1 /*17*/]), 1, 0);
						iLocal_785[iParam0] = 1;
					}
					iLocal_775 = func_1045(&(Local_247[iParam0 /*47*/]), &iLocal_548, 25f, &Local_569, 0f, 3, 0, "GUN2_BAN_ILO", 1, 0, 0, 2, -1082130432 /* Float: -1f */);
					if (iLocal_775 == 0)
					{
						__LIB_2__::func_480(&Local_569, 0, 0, 1, 0);
						iLocal_773 = 1;
						func_610(12, iParam0);
						func_1048(uParam1, 0);
					}
					else if (iLocal_775 == 1)
					{
						__LIB_2__::func_480(&Local_569, 0, 0, 1, 0);
						iLocal_773 = 1;
						func_610(12, iParam0);
						func_1048(uParam1, 1);
					}
				}
				if (iParam0 == 2)
				{
					if (!iLocal_785[iParam0])
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_247[iParam0 /*47*/], true);
						PED::SET_PED_CONFIG_FLAG(Local_247[iParam0 /*47*/], 301, false);
						__LIB_2__::func_411(&(Local_625[0 /*17*/]), 1, 0);
						__LIB_2__::func_411(&(Local_625[1 /*17*/]), 1, 0);
						iLocal_785[iParam0] = 1;
					}
					iLocal_776 = func_1045(&(Local_247[iParam0 /*47*/]), &iLocal_604, 25f, &Local_625, 0f, 3, 0, "GUN2_BAN_ILO", 1, 0, 0, 2, -1082130432 /* Float: -1f */);
					if (iLocal_776 == 0)
					{
						__LIB_2__::func_480(&Local_625, 0, 0, 1, 0);
						iLocal_773 = 2;
						func_610(12, iParam0);
						func_1048(uParam1, 0);
					}
					else if (iLocal_776 == 1)
					{
						__LIB_2__::func_480(&Local_625, 0, 0, 1, 0);
						iLocal_773 = 2;
						func_610(12, iParam0);
						func_1048(uParam1, 1);
					}
				}
				if (iParam0 == 3)
				{
					if (!iLocal_785[iParam0])
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_247[iParam0 /*47*/], true);
						PED::SET_PED_CONFIG_FLAG(Local_247[iParam0 /*47*/], 301, false);
						__LIB_2__::func_411(&(Local_681[0 /*17*/]), 1, 0);
						__LIB_2__::func_411(&(Local_681[1 /*17*/]), 1, 0);
						iLocal_785[iParam0] = 1;
					}
					iLocal_777 = func_1045(&(Local_247[iParam0 /*47*/]), &iLocal_660, 25f, &Local_681, 0f, 3, 0, "GUN2_BAN_ILO", 1, 0, 0, 2, -1082130432 /* Float: -1f */);
					if (iLocal_777 == 0)
					{
						__LIB_2__::func_480(&Local_681, 0, 0, 1, 0);
						iLocal_773 = 3;
						func_610(12, iParam0);
						func_1048(uParam1, 0);
					}
					else if (iLocal_777 == 1)
					{
						__LIB_2__::func_480(&Local_681, 0, 0, 1, 0);
						iLocal_773 = 3;
						func_610(12, iParam0);
						func_1048(uParam1, 1);
					}
				}
				if (iParam0 == 4)
				{
					if (!iLocal_785[iParam0])
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_247[iParam0 /*47*/], true);
						PED::SET_PED_CONFIG_FLAG(Local_247[iParam0 /*47*/], 301, false);
						__LIB_2__::func_411(&(Local_737[0 /*17*/]), 1, 0);
						__LIB_2__::func_411(&(Local_737[1 /*17*/]), 1, 0);
						iLocal_785[iParam0] = 1;
					}
					iLocal_778 = func_1045(&(Local_247[iParam0 /*47*/]), &iLocal_716, 25f, &Local_737, 0f, 3, 0, "GUN2_BAN_ILO", 1, 0, 0, 2, -1082130432 /* Float: -1f */);
					if (iLocal_778 == 0)
					{
						__LIB_2__::func_480(&Local_737, 0, 0, 1, 0);
						iLocal_773 = 4;
						func_610(12, iParam0);
						func_1048(uParam1, 0);
					}
					else if (iLocal_778 == 1)
					{
						__LIB_2__::func_480(&Local_737, 0, 0, 1, 0);
						iLocal_773 = 4;
						func_610(12, iParam0);
						func_1048(uParam1, 1);
					}
				}
			}
		}
		if (iParam0 == 1 || iParam0 == 0)
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_892, false))
			{
				if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_892, sLocal_933) && !ANIMSCENE::_0x1F0E401031E20146(iLocal_892, sLocal_933))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_892, sLocal_933, true);
				}
			}
		}
		PED::_0xF1C03A5352243A30(Local_247[iParam0 /*47*/]);
		if (__LIB_0__::func_163(Local_247[iParam0 /*47*/], -1098463898))
		{
			TASK::CLEAR_PED_TASKS(Local_247[iParam0 /*47*/], true, false);
		}
		if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Local_247[iParam0 /*47*/], iLocal_892) && !__LIB_0__::func_163(Local_247[iParam0 /*47*/], -1098463898))
		{
			if (!Local_247[iParam0 /*47*/].f_43)
			{
				iVar2 = WEAPON::GET_BEST_PED_WEAPON(Local_247[iParam0 /*47*/], false, false);
				WEAPON::SET_CURRENT_PED_WEAPON(Local_247[iParam0 /*47*/], iVar2, false, 0, false, false);
				TASK::TASK_SWAP_WEAPON(Local_247[iParam0 /*47*/], 1, 1, 0, 0);
				Local_247[iParam0 /*47*/].f_43 = 1;
			}
			if (iParam0 == 0)
			{
				if (!__LIB_0__::func_266(Local_247[iParam0 /*47*/], -969.5128f, 2180.645f, 339.7985f, 1.5f, 1, 1))
				{
					if (!__LIB_0__::func_163(Local_247[iParam0 /*47*/], 713668775))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_247[iParam0 /*47*/], -969.5128f, 2180.645f, 339.7985f, 1f, -1, 1f, 0, 40000f);
					}
				}
				else if (!PED::IS_PED_FACING_PED(Local_247[iParam0 /*47*/], Global_35, 20f))
				{
					if (!__LIB_0__::func_163(Local_247[iParam0 /*47*/], -875674219))
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_247[iParam0 /*47*/], Global_35, -1, -1f, -1f, -1f);
					}
				}
			}
			else if (iParam0 == 1)
			{
				if (!__LIB_0__::func_48(Local_247[iParam0 /*47*/], Global_35, 10f, 1))
				{
					if (!__LIB_0__::func_163(Local_247[iParam0 /*47*/], 1227113341))
					{
						TASK::TASK_GO_TO_ENTITY(Local_247[iParam0 /*47*/], Global_35, -1, 10f, 1f, 2f, 0);
					}
				}
				else if (!__LIB_0__::func_163(Local_247[iParam0 /*47*/], 1630799643))
				{
					if (!Local_247[iParam0 /*47*/].f_44)
					{
						TASK::TASK_AIM_GUN_AT_ENTITY(Local_247[iParam0 /*47*/], Global_35, -1, false, 1);
						Local_247[iParam0 /*47*/].f_44 = 1;
					}
				}
			}
			else if (iParam0 == 2)
			{
				if (!__LIB_0__::func_48(Local_247[iParam0 /*47*/], Global_35, 9f, 1))
				{
					if (!__LIB_0__::func_163(Local_247[iParam0 /*47*/], -1758697641))
					{
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(Local_247[iParam0 /*47*/], Global_36, Global_35, 1f, 0, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
					}
				}
				else if (!__LIB_0__::func_163(Local_247[iParam0 /*47*/], 1630799643))
				{
					if (!Local_247[iParam0 /*47*/].f_44)
					{
						TASK::TASK_AIM_GUN_AT_ENTITY(Local_247[iParam0 /*47*/], Global_35, -1, false, 1);
						Local_247[iParam0 /*47*/].f_44 = 1;
					}
				}
			}
			else if (iParam0 == 3)
			{
				if (!__LIB_0__::func_48(Local_247[iParam0 /*47*/], Global_35, 16f, 1))
				{
					if (!__LIB_0__::func_163(Local_247[iParam0 /*47*/], 1227113341))
					{
						TASK::TASK_GO_TO_ENTITY(Local_247[iParam0 /*47*/], Global_35, -1, 16f, 1f, 2f, 0);
					}
				}
				else if (!__LIB_0__::func_163(Local_247[iParam0 /*47*/], 1630799643))
				{
					if (!Local_247[iParam0 /*47*/].f_44)
					{
						TASK::TASK_AIM_GUN_AT_ENTITY(Local_247[iParam0 /*47*/], Global_35, -1, false, 1);
						Local_247[iParam0 /*47*/].f_44 = 1;
					}
				}
			}
			else if (iParam0 == 4)
			{
				if (!__LIB_0__::func_48(Local_247[iParam0 /*47*/], Global_35, 11f, 1))
				{
					if (!__LIB_0__::func_163(Local_247[iParam0 /*47*/], 1227113341))
					{
						TASK::TASK_GO_TO_ENTITY(Local_247[iParam0 /*47*/], Global_35, -1, 11f, 1f, 2f, 0);
					}
				}
				else if (!__LIB_0__::func_163(Local_247[iParam0 /*47*/], 1630799643))
				{
					if (!Local_247[iParam0 /*47*/].f_44)
					{
						TASK::TASK_AIM_GUN_AT_ENTITY(Local_247[iParam0 /*47*/], Global_35, -1, false, 1);
						Local_247[iParam0 /*47*/].f_44 = 1;
					}
				}
			}
		}
	}
}

bool func_1556(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
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
		func_1970(iParam1, uParam2, 0);
		iVar5 = __LIB_4__::func_48(*iParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*iParam0, 178, false);
			return true;
		}
		__LIB_2__::func_480(uParam2, 0, 0, 1, 0);
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

bool func_1562(int iParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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
	if (__LIB_2__::func_618(&(iParam1->f_13)))
	{
		fVar12 = __LIB_5__::func_51(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((uParam4[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = (uParam4[iVar0 /*17*/])->f_8;
		}
		bVar4 = __LIB_0__::func_139((uParam4[iVar0 /*17*/])->f_6);
		__LIB_4__::func_50(*iParam0, uParam4[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
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
						__LIB_2__::func_480(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						__LIB_2__::func_526(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 11))
					{
						func_1970(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
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
						__LIB_5__::func_107(&(iParam1->f_18));
						if (bVar6)
						{
							__LIB_2__::func_526(uParam4, 0, 0);
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

bool func_1565(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_INTERACT_LOCKON")))
		{
			if (__LIB_2__::func_349(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				__LIB_1__::func_471(iParam1, 0);
				func_1970(iParam1, uParam2, __LIB_1__::func_489(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

void func_1569(int* iParam0, var uParam1)
{
	int iVar0;
	struct<17> Var1;
	struct<10> Var22;
	Var1.f_1 = -1;
	Var1.f_3 = -1;
	Var1.f_6 = -1;
	Var1.f_12 = 1073741824;
	Var1.f_16 = 1;
	Var22.f_2 = 570;
	Var22.f_3 = 1065353216;
	Var22.f_4 = -1082130432;
	Var22.f_9 = 2;
	func_1970(iParam0, uParam1, 1);
	__LIB_2__::func_480(uParam1, 0, 1, 1, 0);
	MISC::_COPY_MEMORY(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		MISC::_COPY_MEMORY(uParam1[iVar0 /*17*/], &Var22, 17);
		iVar0++;
	}
}

int func_1570()
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_892))
	{
		if (iLocal_891 == 3 || iLocal_891 == 2)
		{
			return 1;
		}
		else if (ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_892, "pbl_quick_Exit"))
		{
			ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_892, "pbl_quick_Exit", true);
			iLocal_891 = 3;
			return 1;
		}
		else if (!ANIMSCENE::_0x0DF57F86FE71DBE5(iLocal_892, "pbl_quick_Exit"))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_892, "pbl_quick_Exit");
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

char* func_1571(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "BAN3_SEE_CALL";
		case 2:
			return "BAN2_SEE_CALL";
		case 3:
			return "BAN4_SEE_CALL";
		case 4:
			return "BAN1_SEE_CALL";
	}
	return "";
}

void func_1573(int iParam0)
{
	PED::_0xFC3DB99C8144CD81(Local_247[iParam0 /*47*/], iLocal_988, 1, 0, 0);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_247[iParam0 /*47*/], 45, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_247[iParam0 /*47*/], 0, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_247[iParam0 /*47*/], 3, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_247[iParam0 /*47*/], 5, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_247[iParam0 /*47*/], 46, true);
	PED::SET_PED_FLEE_ATTRIBUTES(Local_247[iParam0 /*47*/], 512, true);
	PED::SET_PED_CONFIG_FLAG(Local_247[iParam0 /*47*/], 143, true);
	if (__LIB_0__::func_163(Local_247[iParam0 /*47*/], 1227113341) || Local_247[iParam0 /*47*/].f_12 == 12)
	{
		TASK::CLEAR_PED_TASKS(Local_247[iParam0 /*47*/], true, false);
	}
	TASK::TASK_COMBAT_PED(Local_247[iParam0 /*47*/], Global_35, 0, 0);
}

int func_1581(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	var uVar0;
	struct<11> Var1;
	Var1.f_10 = 7;
	Var1 = iParam0;
	Var1.f_1 = iParam1;
	Var1.f_2 = iParam2;
	Var1.f_6 = { iParam3, iParam4, iParam5 };
	Var1.f_9 = iParam6;
	return __LIB_1__::func_854(&uVar0, &Var1);
}

int func_1589(var uParam0, var uParam1)
{
	if (__LIB_3__::func_764(uParam1))
	{
		return 1;
	}
	if (!__LIB_2__::func_618(&(uParam1->f_26)))
	{
		__LIB_8__::func_901(&(uParam1->f_26), 0);
	}
	switch (uParam1->f_59)
	{
		case 0:
			__LIB_3__::func_845(uParam0, uParam1, 0);
			if (__LIB_0__::func_27(uParam0->f_88, 2))
			{
				if (CAM::DOES_CAM_EXIST(uParam1->f_20[0]))
				{
					CAM::DETACH_CAM(uParam1->f_20[0]);
					CAM::SET_CAM_ACTIVE(uParam1->f_20[0], false);
				}
				if (CAM::DOES_CAM_EXIST(uParam1->f_20[2]))
				{
					CAM::SET_CAM_ACTIVE(uParam1->f_20[2], true);
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				}
				MAP::DISPLAY_RADAR(false);
				func_1600(uParam1, 3);
			}
			else
			{
				__LIB_3__::func_846(uParam0, uParam1);
				func_1600(uParam1, 1);
			}
			break;
		case 1:
			__LIB_0__::func_11("DCS: INTRO START TO INTRO END");
			if (CAM::DOES_CAM_EXIST(uParam1->f_20[1]))
			{
				CAM::SET_CAM_ACTIVE(uParam1->f_20[1], true);
			}
			CAM::RENDER_SCRIPT_CAMS(true, true, uParam0->f_84, true, false, 0);
			func_1600(uParam1, 2);
			break;
		case 2:
			__LIB_0__::func_11("DCS: INTRO START TO INTRO END");
			if (!CAM::DOES_CAM_EXIST(uParam1->f_20[1]) || !CAM::IS_CAM_INTERPOLATING(uParam1->f_20[1]))
			{
				__LIB_0__::func_11("DCS: INTRO END TO DUEL");
				if (CAM::DOES_CAM_EXIST(uParam1->f_20[2]))
				{
					CAM::SET_CAM_ACTIVE_WITH_INTERP(uParam1->f_20[2], uParam1->f_20[1], uParam0->f_85, 1, 1);
				}
				func_1600(uParam1, 3);
			}
			break;
		case 3:
			__LIB_0__::func_11("DCS: INTRO END TO DUEL");
			if ((!CAM::DOES_CAM_EXIST(uParam1->f_20[2]) || !CAM::IS_CAM_INTERPOLATING(uParam1->f_20[2])) && (!CAM::DOES_CAM_EXIST(uParam1->f_20[0]) || !CAM::IS_CAM_INTERPOLATING(uParam1->f_20[0])))
			{
				if (!__LIB_0__::func_27(uParam0->f_88, 1024))
				{
					__LIB_0__::func_11();
				}
				__LIB_2__::func_608(&(uParam1->f_26));
				func_1600(uParam1, 4);
				__LIB_1__::func_539();
				__LIB_0__::func_11("DCS: DUEL");
				return 1;
			}
			break;
		case 4:
			return 1;
	}
	return 0;
}

bool func_1592(var uParam0, var uParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;
	if (!__LIB_0__::func_27(Global_40.f_9145, 1))
	{
		__LIB_3__::func_775(uParam0, 4);
		uParam1->f_67 = 1;
		uParam0->f_89 = 3;
	}
	if (uParam0->f_89 == -1)
	{
		uParam0->f_89 = 0;
	}
	if (__LIB_0__::func_86(uParam0->f_42))
	{
		uParam0->f_42 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) };
	}
	if (__LIB_0__::func_86(uParam0->f_45))
	{
		uParam0->f_45 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1))
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 297, false);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 317, false);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 392, true);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 371, true);
		PLAYER::_0x3C4AE8506638C7E2(PLAYER::GET_PLAYER_INDEX(), 0);
		if (__LIB_3__::func_761(uParam0, 65536))
		{
			PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 16, true);
			PED::SET_PED_CAN_RAGDOLL(uParam0->f_1, false);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 263, true);
			PED::SET_RAGDOLL_BLOCKING_FLAGS(uParam0->f_1, 4097);
		}
		if (__LIB_3__::func_761(uParam0, 131072))
		{
			PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 263, true);
			PED::SET_RAGDOLL_BLOCKING_FLAGS(uParam0->f_1, 1044479);
		}
		PED::SET_PED_USING_ACTION_MODE(uParam0->f_1, true, -1, 0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		if (PED::IS_PED_A_PLAYER(*uParam0))
		{
			fVar0 = PLAYER::_0xA81D24AE0AF99A5E(PLAYER::GET_PLAYER_INDEX());
			if (fVar0 < 28f)
			{
				__LIB_0__::func_188(2);
			}
		}
		PED::SET_PED_USING_ACTION_MODE(*uParam0, true, -1, 0);
	}
	__LIB_3__::func_830(uParam1, uParam0);
	func_630(uParam0, uParam1);
	iVar1 = __LIB_0__::func_399(Global_35, 1, 2, 0);
	if ((iVar1 == joaat("WEAPON_UNARMED") || iVar1 != uParam0->f_48) && !__LIB_0__::func_239(uParam1, 16777216))
	{
		__LIB_3__::func_809();
		__LIB_0__::func_240(uParam1, 16777216);
		__LIB_1__::func_766(*uParam0, uParam0->f_48, 0, 0, 2, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 1, 0, 0, 0);
	}
	WEAPON::SET_CURRENT_PED_WEAPON(*uParam0, joaat("WEAPON_UNARMED"), false, 0, false, false);
	WEAPON::SET_CURRENT_PED_WEAPON(*uParam0, joaat("WEAPON_UNARMED"), false, 1, false, false);
	TASK::TASK_SWAP_WEAPON(*uParam0, 1, 1, 0, 0);
	iVar2 = 0;
	if (__LIB_3__::func_761(uParam0, 512))
	{
		iVar2 = 1;
	}
	if (!__LIB_3__::func_761(uParam0, 262144))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(uParam0->f_1, joaat("WEAPON_UNARMED"), false, 0, false, false);
		WEAPON::SET_CURRENT_PED_WEAPON(uParam0->f_1, joaat("WEAPON_UNARMED"), false, 1, false, false);
		TASK::TASK_SWAP_WEAPON(uParam0->f_1, 1, 1, 0, 0);
		__LIB_1__::func_766(uParam0->f_1, uParam0->f_49, 0, 0, iVar2, 1, __LIB_3__::func_761(uParam0, 512), 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 1, 0, 0, 0);
	}
	__LIB_3__::func_847(uParam0->f_1);
	if (!__LIB_3__::func_358(uParam1->f_53))
	{
		uParam1->f_53 = { __LIB_3__::func_355() };
	}
	if (uParam0->f_50 == -1)
	{
		if (__LIB_3__::func_761(uParam0, 8))
		{
			if (__LIB_3__::func_761(uParam0, 512))
			{
				uParam0->f_50 = 34606;
			}
			else
			{
				uParam0->f_50 = 22798;
			}
		}
		else if (__LIB_3__::func_761(uParam0, 16))
		{
			uParam0->f_50 = 21030;
		}
	}
	if (!MISC::_DOES_ITEM_HAVE_VALID_BASE(*uParam1))
	{
		*uParam1 = ITEMSET::CREATE_ITEMSET(true);
	}
	__LIB_3__::func_810(uParam0, uParam1);
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_87))
	{
		uParam0->f_87 = __LIB_3__::func_776(uParam0->f_42, uParam0->f_45, 2.5f, 5f, 2f, 0);
		ITEMSET::ADD_TO_ITEMSET(uParam0->f_87, *uParam1);
	}
	return true;
}

int func_1594(var uParam0, var uParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	__LIB_13__::func_701(uParam0, uParam1);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
	if (__LIB_3__::func_761(uParam0, 2))
	{
		return 1;
	}
	fVar0 = __LIB_0__::func_152(uParam0->f_42, uParam0->f_45, 1);
	iVar1 = 1;
	iVar2 = 1;
	if (!__LIB_0__::func_175(ENTITY::GET_ENTITY_COORDS(*uParam0, true, false), uParam0->f_42, 0.1f, 0))
	{
		iVar1 = 0;
		if (!__LIB_0__::func_163(Global_35, 242628503))
		{
			__LIB_3__::func_728(uParam1, 16384);
		}
	}
	if (!__LIB_3__::func_761(uParam0, 8388608) && !__LIB_0__::func_175(ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false), uParam0->f_45, 0.1f, 0))
	{
		iVar1 = 0;
		if (!__LIB_0__::func_163(uParam0->f_1, 242628503))
		{
			__LIB_3__::func_728(uParam1, 32768);
		}
	}
	if (!__LIB_2__::func_123(*uParam0, uParam0->f_1, 0.99f))
	{
		if (!__LIB_0__::func_163(Global_35, 242628503))
		{
			__LIB_3__::func_728(uParam1, 16384);
		}
		iVar2 = 0;
	}
	if (!__LIB_2__::func_123(uParam0->f_1, *uParam0, 0.99f))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_1, 242628503, true) != 1)
		{
			__LIB_3__::func_728(uParam1, 32768);
		}
		iVar2 = 0;
	}
	if (iVar1 && iVar2)
	{
		if (__LIB_3__::func_764(uParam1))
		{
			iVar2 = func_2015(uParam1, uParam0);
		}
	}
	if (iVar1 && iVar2)
	{
		TASK::CLEAR_PED_TASKS(*uParam0, true, false);
		if (!__LIB_3__::func_761(uParam0, 8388608))
		{
			TASK::CLEAR_PED_TASKS(uParam0->f_1, true, false);
		}
		return 1;
	}
	if (!__LIB_0__::func_239(uParam1, 16384))
	{
		if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 4480, false);
		}
		TASK::OPEN_SEQUENCE_TASK(&iVar3);
		if (PED::_IS_PED_CARRYING(*uParam0))
		{
			iVar4 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(*uParam0);
			TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(0, iVar4, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false), 1f, 0);
		}
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_42, 1f, -1, 0f, 512, fVar0);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, uParam0->f_1, 0, -1f, -1f, -1f);
		__LIB_1__::func_474(*uParam0, &iVar3, 0, 0, 1, 1);
		__LIB_0__::func_240(uParam1, 16384);
	}
	if (!__LIB_0__::func_239(uParam1, 32768))
	{
		TASK::TASK_SWAP_WEAPON(uParam0->f_1, 1, 1, 0, 0);
		if (!__LIB_3__::func_761(uParam0, 8388608))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar3);
			if (!__LIB_0__::func_175(ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false), uParam0->f_45, 0.1f, 0))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_45, 1f, -1, 0f, 512, (fVar0 + 180f));
			}
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, *uParam0, 0, -1f, -1f, -1f);
			__LIB_1__::func_474(uParam0->f_1, &iVar3, 0, 0, 1, 1);
		}
		__LIB_0__::func_7(&(uParam1->f_44.f_3), 2);
		func_2017(uParam0->f_1, &(uParam1->f_44), 0f, 0f, 0f, 0, 1106247680 /* Float: 30f */, 30f, 99999, 4000, 1000, 0f, 1, 1, 1084227584 /* Float: 5f */);
		__LIB_0__::func_240(uParam1, 32768);
	}
	return 0;
}

void func_1597(var uParam0, var uParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_1))
	{
		func_401(uParam0, uParam1);
		__LIB_3__::func_762(uParam1, 9);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_86))
	{
		if (!__LIB_3__::func_761(uParam0, 32768))
		{
			__LIB_3__::func_806(0, uParam0, uParam1, -1038090240 /* Float: -40f */, 1103626240 /* Float: 25f */);
			__LIB_0__::func_240(uParam1, 2);
		}
	}
	__LIB_13__::func_190(uParam1, uParam0, *uParam0, uParam0->f_42, uParam0->f_45, uParam0->f_48);
	__LIB_13__::func_186(uParam1, uParam0, uParam0->f_1, *uParam0, uParam0->f_45, uParam0->f_42, uParam0->f_49);
	Global_19 = 1;
	MAP::DISPLAY_RADAR(false);
	if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADED_IN())
	{
		CAM::DO_SCREEN_FADE_IN(1000);
	}
	__LIB_3__::func_849(*uParam0);
	__LIB_0__::func_240(uParam1, 8);
}

void func_1600(var uParam0, int iParam1)
{
	__LIB_5__::func_107(&(uParam0->f_26));
	uParam0->f_59 = iParam1;
}

bool func_1602(var uParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	vector3 vVar3;
	int iVar6;
	__LIB_3__::func_831(uParam0, uParam1);
	if (uParam1->f_56 > 0)
	{
		__LIB_8__::func_520(uParam0, uParam1);
	}
	switch (uParam1->f_56)
	{
		case 0:
			__LIB_3__::func_765();
			__LIB_3__::func_844(uParam0, uParam1);
			__LIB_3__::func_595(ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false));
			if (__LIB_3__::func_761(uParam0, 32) || (!CAM::DOES_CAM_EXIST(uParam1->f_20[2]) || !CAM::IS_CAM_INTERPOLATING(uParam1->f_20[2])))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
				{
					return true;
				}
				if (!__LIB_3__::func_761(uParam0, 524288) && !TASK::_IS_PED_DUELLING(uParam0->f_1))
				{
					__LIB_13__::func_186(uParam1, uParam0, uParam0->f_1, *uParam0, uParam0->f_45, uParam0->f_42, uParam0->f_49);
					return false;
				}
				if (TASK::_IS_PED_DUELLING(uParam0->f_1))
				{
					TASK::_0x3FEB770D8ED9047A(uParam0->f_1);
				}
				__LIB_3__::func_777(uParam0->f_89, uParam1);
				if (TASK::_IS_PED_DUELLING(uParam0->f_1))
				{
					TASK::_0x30146C25686B7836(uParam0->f_1, -1f);
					TASK::_0x59AE5CA4FFB4E378(uParam0->f_1, -1f);
				}
				TASK::_0x30146C25686B7836(*uParam0, -1f);
				TASK::_0x59AE5CA4FFB4E378(*uParam0, -1f);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				HUD::SET_TEXT_SCALE(0.5f, 0.5f);
				uParam1->f_69 = PAD::_0xBD629C1C4F501C80(0);
				if (uParam1->f_69)
				{
					uParam1->f_24 = __LIB_0__::func_45("DUEL_HELP_DRAW_GUNSLINGER", 10000, 0, 0, 0, 1);
				}
				else
				{
					uParam1->f_24 = __LIB_0__::func_45("DUEL_HELP_DRAW_ALT", 10000, 0, 0, 0, 1);
				}
				AUDIO::PLAY_SOUND_FRONTEND("HUD_DRAW", "HUD_DUEL_SOUNDSET", true, 0);
				if (!__LIB_3__::func_761(uParam0, 1024))
				{
					WEAPON::_0x94A3C1B804D291EC(Global_35, 1, 0, 1, 1);
					TASK::_0x908BB14BCE85C80E(Global_35);
					if (!__LIB_3__::func_761(uParam0, 524288))
					{
						TASK::_0x908BB14BCE85C80E(uParam0->f_1);
					}
					ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(uParam0->f_1, true, 50f);
					__LIB_1__::func_539();
					__LIB_5__::func_107(&(uParam1->f_35));
					uParam1->f_5 = MISC::_GET_GAME_TIMER_NON_SCALED_CLIPPED();
					if (!__LIB_3__::func_761(uParam0, 4194304))
					{
						CAM::_0x986F7A51EE3E1F92(uParam0->f_1, 1);
					}
					uParam1->f_72 = __LIB_3__::func_832(uParam0);
					PED::SET_PED_CAN_BE_TARGETTED(uParam0->f_1, true);
					PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 277, false);
					WEAPON::_0xCC9C4393523833E2(*uParam0, uParam0->f_48, WEAPON::_0xEC97101A8F311282(uParam0->f_48));
					WEAPON::SET_AMMO_IN_CLIP(*uParam0, uParam0->f_48, WEAPON::GET_MAX_AMMO_IN_CLIP(*uParam0, uParam0->f_48, true));
					WEAPON::GET_CURRENT_PED_WEAPON(*uParam0, &iVar0, true, 3, false);
					if (iVar0 != 0 && iVar0 != joaat("WEAPON_UNARMED"))
					{
						WEAPON::_0xCC9C4393523833E2(*uParam0, iVar0, WEAPON::_0xEC97101A8F311282(iVar0));
						WEAPON::SET_AMMO_IN_CLIP(*uParam0, iVar0, WEAPON::GET_MAX_AMMO_IN_CLIP(*uParam0, iVar0, true));
					}
				}
				__LIB_3__::func_778(uParam1, 3);
			}
			break;
		case 3:
			func_2029(uParam1);
			if (func_2030(uParam0, uParam1))
			{
				if (__LIB_2__::func_342(uParam1->f_24))
				{
					__LIB_0__::func_105(1);
				}
				__LIB_3__::func_833(uParam0, uParam1);
			}
			else
			{
				__LIB_3__::func_765();
				fVar1 = PLAYER::_0xE956C2340A76272E(PLAYER::PLAYER_ID());
				if (uParam1->f_18 < 0f)
				{
					if (uParam1->f_17 > 0.1f && (fVar1 - uParam1->f_17) == -uParam1->f_17)
					{
						uParam1->f_18 = uParam1->f_17;
					}
				}
				uParam1->f_17 = fVar1;
			}
			__LIB_3__::func_861(uParam0, uParam1);
			func_2034(uParam0, uParam1);
			__LIB_3__::func_844(uParam0, uParam1);
			if (__LIB_3__::func_761(uParam0, 33554432))
			{
				if (PLAYER::_0xA54000D4BFD90BDE(PLAYER::PLAYER_ID()) && PLAYER::_0xCCD9B77F70D31C9D(PLAYER::PLAYER_ID()) > 1)
				{
					CAM::_0x5B637D6F3B67716A(uParam0->f_1);
					__LIB_3__::func_775(uParam0, 4194304);
				}
			}
			if (func_2035(uParam0, uParam1))
			{
				EVENT::_REMOVE_ALL_SHOCKING_EVENTS_OF_TYPE(joaat("EVENT_SHOCKING_SEEN_PED_KILLED"), false);
				__LIB_0__::func_240(uParam1, 2097152);
				if (__LIB_0__::func_272(uParam0->f_1, 0))
				{
					PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(uParam0->f_1, 1);
				}
				if (__LIB_2__::func_342(uParam1->f_25))
				{
					__LIB_0__::func_105(1);
				}
				switch (__LIB_3__::func_774(uParam1))
				{
					case 1:
						uParam1->f_62 = __LIB_0__::func_12();
						if (__LIB_1__::func_120(uParam1->f_62))
						{
							__LIB_3__::func_850(&(uParam0->f_1));
							__LIB_3__::func_851(uParam1->f_62);
							__LIB_3__::func_779(ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false));
						}
						if (!__LIB_0__::func_239(uParam1, 1))
						{
							if (__LIB_0__::func_272(uParam0->f_1, 0))
							{
								PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 243, true);
								if (!__LIB_3__::func_761(uParam0, 65536))
								{
									__LIB_1__::func_864(uParam0->f_1, 0, 0);
								}
								if (!__LIB_3__::func_761(uParam0, 4194304))
								{
									CAM::_0xE3639DB78B3B5400(uParam0->f_1);
								}
							}
							EVENT::REMOVE_SHOCKING_EVENT(uParam1->f_4);
							uParam1->f_4 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(joaat("EVENT_SHOCKING_BEAT_ALARMING"), ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false), -1f, 30f, 30f, -1f, -1f, -1, -1);
							__LIB_0__::func_240(uParam1, 1);
						}
						__LIB_3__::func_778(uParam1, 4);
						break;
					case 2:
						if (!__LIB_0__::func_239(uParam1, 1))
						{
							fVar2 = 0.125f;
							if (__LIB_0__::func_272(uParam0->f_1, 0))
							{
								CAM::_0x5B637D6F3B67716A(uParam0->f_1);
								if (func_752(uParam0, uParam1, 0))
								{
									if (__LIB_0__::func_399(uParam0->f_1, 1, 0, 0) != joaat("WEAPON_UNARMED"))
									{
										WEAPON::_0xCEF4C65DE502D367(uParam0->f_1, 1, 0, 1, 0);
									}
									if (__LIB_3__::func_761(uParam0, 512))
									{
										PED::_0x89F5E7ADECCCB49C(uParam0->f_1, "injured_left_arm");
									}
									else
									{
										PED::_0x89F5E7ADECCCB49C(uParam0->f_1, "injured_right_arm");
									}
									fVar2 = 0.25f;
								}
								if (!__LIB_3__::func_761(uParam0, 524288))
								{
									if (TASK::_IS_PED_DUELLING(uParam0->f_1))
									{
										TASK::_0xEED08A3A98B847E2(uParam0->f_1, false, fVar2);
									}
									else
									{
										TASK::CLEAR_PED_TASKS(uParam0->f_1, true, false);
									}
								}
							}
							EVENT::REMOVE_SHOCKING_EVENT(uParam1->f_4);
							if (!__LIB_3__::func_761(uParam0, 536870912))
							{
								__LIB_1__::func_715(13, 0, 0, 0, uParam0->f_1, 0, 1065353216 /* Float: 1f */, 0);
							}
							TASK::_0xEED08A3A98B847E2(*uParam0, !__LIB_3__::func_761(uParam0, 256), fVar2);
							__LIB_0__::func_240(uParam1, 1);
						}
						__LIB_3__::func_778(uParam1, 5);
						break;
					case 3:
						__LIB_3__::func_780(uParam1);
						if (!__LIB_0__::func_239(uParam1, 1))
						{
							if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1) && (__LIB_3__::func_761(uParam0, 524288) || TASK::_IS_PED_DUELLING(uParam0->f_1)))
							{
								if (!__LIB_3__::func_761(uParam0, 524288))
								{
									TASK::_0x748D5E0D2A1A4C61(uParam0->f_1, 2f, 1);
								}
								CAM::_0x5B637D6F3B67716A(uParam0->f_1);
								__LIB_0__::func_240(uParam1, 1);
								PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), false);
								ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(Global_35, 0);
								if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
								{
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 4992, false);
								}
							}
							else
							{
								__LIB_8__::func_529(uParam0, uParam1, 4);
								if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
								{
									CAM::_0x5B637D6F3B67716A(uParam0->f_1);
									if (!__LIB_0__::func_27(uParam0->f_88, 128))
									{
										TASK::TASK_COMBAT_PED(uParam0->f_1, *uParam0, 0, 0);
										PED::SET_PED_KEEP_TASK(uParam0->f_1, true);
									}
								}
								__LIB_3__::func_811(uParam0, uParam1);
								__LIB_3__::func_778(uParam1, 8);
							}
						}
						else
						{
							if (__LIB_0__::func_272(Global_35, 0))
							{
								CAM::_0x5B637D6F3B67716A(uParam0->f_1);
								__LIB_8__::func_531(uParam0, uParam1);
							}
							if (!__LIB_0__::func_272(*uParam0, 9))
							{
								__LIB_3__::func_778(uParam1, 6);
							}
						}
						break;
					case 5:
						__LIB_3__::func_780(uParam1);
						if (!__LIB_3__::func_761(uParam0, 2097152))
						{
							__LIB_1__::func_864(uParam0->f_2, 0, 0);
						}
					case 4:
						if (!__LIB_0__::func_239(uParam1, 1))
						{
							TASK::_0xEED08A3A98B847E2(*uParam0, !__LIB_3__::func_761(uParam0, 256), 1040187392 /* Float: 0.125f */);
							if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
							{
								CAM::_0x5B637D6F3B67716A(uParam0->f_1);
								if (TASK::_IS_PED_DUELLING(uParam0->f_1))
								{
									TASK::_0xEED08A3A98B847E2(uParam0->f_1, !__LIB_3__::func_761(uParam0, 256), 1040187392 /* Float: 0.125f */);
								}
								if (!__LIB_0__::func_27(uParam0->f_88, 128))
								{
									if (__LIB_0__::func_27(uParam0->f_88, 16777216))
									{
										PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 263, false);
										WEAPON::_0xCEF4C65DE502D367(uParam0->f_1, 0, 0, 0, 0);
										if (__LIB_0__::func_399(uParam0->f_1, 1, 0, 0) != joaat("WEAPON_MELEE_KNIFE"))
										{
											WEAPON::_GIVE_WEAPON_TO_PED_2(uParam0->f_1, joaat("WEAPON_MELEE_KNIFE"), 1, false, true, 4, false, 0.5f, 1f, 752097756, false, 0f, false);
										}
										if (!__LIB_0__::func_163(uParam0->f_1, joaat("SCRIPT_TASK_MELEE")))
										{
											WEAPON::SET_CURRENT_PED_WEAPON(uParam0->f_1, joaat("WEAPON_MELEE_KNIFE"), false, 4, true, false);
											TASK::TASK_SWAP_WEAPON(uParam0->f_1, 1, 0, 0, 0);
											TASK::TASK_MELEE(uParam0->f_1, *uParam0, 0, 0, 1, 2f, 1, -1082130432 /* Float: -1f */);
										}
									}
									else
									{
										TASK::TASK_COMBAT_PED(uParam0->f_1, *uParam0, 0, 0);
									}
									PED::SET_PED_KEEP_TASK(uParam0->f_1, true);
								}
							}
							__LIB_0__::func_240(uParam1, 1);
							__LIB_3__::func_778(uParam1, 5);
						}
						break;
				}
			}
			break;
		case 5:
			if (__LIB_3__::func_852(uParam1, uParam0))
			{
				uParam1->f_8 = MISC::_GET_GAME_TIMER_NON_SCALED_CLIPPED();
				__LIB_3__::func_778(uParam1, 7);
			}
			break;
		case 4:
			if (__LIB_1__::func_120(uParam1->f_62))
			{
				__LIB_3__::func_851(uParam1->f_62);
			}
			if (__LIB_3__::func_291(Global_35, 0))
			{
				vVar3 = { -1f, 4f, 0.5f };
			}
			else
			{
				vVar3 = { -2f, -4f, 2f };
			}
			if (func_2043(uParam0, uParam1, *uParam0, uParam0->f_1, vVar3, 0) && (!__LIB_1__::func_120(uParam1->f_62) || __LIB_3__::func_851(uParam1->f_62)))
			{
				__LIB_3__::func_811(uParam0, uParam1);
				__LIB_3__::func_778(uParam1, 8);
				return true;
			}
			break;
		case 6:
			__LIB_3__::func_811(uParam0, uParam1);
			__LIB_3__::func_778(uParam1, 8);
			return true;
		case 7:
			__LIB_3__::func_781();
			iVar6 = (MISC::_GET_GAME_TIMER_NON_SCALED_CLIPPED() - uParam1->f_8);
			if (__LIB_3__::func_761(uParam0, 4194304) || iVar6 > 1000)
			{
				__LIB_3__::func_811(uParam0, uParam1);
				__LIB_3__::func_778(uParam1, 8);
				return true;
			}
			break;
		case 8:
			return true;
	}
	return false;
}

void func_1615()
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
	iVar0 = func_2051(6291456, 0);
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

void func_1623(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_1623(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_1623(iVar2, vParam1, fParam4, iParam5, iParam6);
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

void func_1685(char* sParam0)
{
	__LIB_3__::func_608(iLocal_218);
	iLocal_219 = __LIB_8__::func_778(408396114, iLocal_218, 1);
	MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_219, sParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_14.f_2)))
	{
		__LIB_3__::func_353(&(Local_14.f_2), 0);
	}
}

char* func_1686(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return "BAN2_FLEE_DUEL";
		case 3:
			return "BAN4_FLEE_DUEL";
		case 1:
			return "BAN3_FLEE_DUEL";
		case 4:
			return "BAN1_FLEE_DUEL";
	}
	return "";
}

void func_1781(int iParam0, int iParam1)
{
	if (__LIB_0__::func_192(iParam1, 130796156))
	{
		__LIB_18__::func_625(iParam1, 0);
	}
	else if (__LIB_0__::func_192(iParam1, 930141731))
	{
		__LIB_18__::func_625(iParam1, 1);
		func_2152(iParam0);
	}
}

void func_1793(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (bParam0)
	{
		func_792(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_792(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_792(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_2157(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_795(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_1322(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_2163(Var0);
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

void func_1796(bool bParam0)
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
		func_792(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_792(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_792(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_792(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_792(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_792(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_792(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_792(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_792(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_792(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_792(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_1322(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_1322(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_1322(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_1322(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_1322(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_1322(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_1322(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_1322(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_1322(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_1322(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_1322(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
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

int func_1835(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
							iVar49 = (iVar49 + func_1835(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1835(iVar63, -915411861, 1, 0, 0));
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

void func_1970(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		__LIB_1__::func_748(&((uParam1[iParam0->f_3 /*17*/])->f_6), 1, 1);
		if (bParam2)
		{
			__LIB_11__::func_769(iParam0, 0);
		}
	}
}

int func_2015(var uParam0, var uParam1)
{
	float fVar0;
	switch (uParam0->f_68)
	{
		case 0:
			StringCopy(&(uParam0->f_74), "generic_hint_cam", 64);
			StringCopy(&(uParam0->f_74.f_8), "GENERIC_HINT_CAM", 64);
			uParam0->f_74.f_19 = uParam1->f_1;
			CAM::_0x6A4D224FC7643941(&(uParam0->f_74));
			uParam0->f_68 = 1;
			break;
		case 1:
			if (CAM::_0xDD0B7C5AE58F721D(&(uParam0->f_74)))
			{
				uParam0->f_68 = 2;
			}
			break;
		case 2:
			fVar0 = 1f;
			__LIB_8__::func_901(&(uParam0->f_32), 0);
			if (__LIB_11__::func_410(&(uParam0->f_32), fVar0))
			{
				if (CAM::_0x927B810E43E99932(&(uParam0->f_74)))
				{
					CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_74));
				}
				__LIB_2__::func_608(&(uParam0->f_32));
				uParam0->f_68 = 3;
			}
			else if (!CAM::_0x927B810E43E99932(&(uParam0->f_74)))
			{
				CAM::_0xB8B207C34285E978(&(uParam0->f_74));
			}
			else
			{
				CAM::_0x7B0279170961A73F(&(uParam0->f_74));
			}
			break;
		case 3:
			return 1;
	}
	return 0;
}

void func_2017(int iParam0, int iParam1, vector3 vParam2, bool bParam5, int iParam6, float fParam7, int iParam8, int iParam9, int iParam10, float fParam11, bool bParam12, bool bParam13, float fParam14)
{
	if (__LIB_0__::func_51(&(iParam1->f_3), 1))
	{
		__LIB_19__::func_588(iParam1);
		if (__LIB_3__::func_517(iParam0, fParam7, fParam11, bParam12, bParam13, fParam14))
		{
			__LIB_1__::func_539();
		}
	}
	if (__LIB_2__::func_524(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), iParam1, fParam7))
	{
		CAM::SET_GAMEPLAY_PED_HINT(iParam0, Vector(0f, 0f, 0f) + vParam2, bParam5, iParam8, iParam9, iParam10);
		__LIB_18__::func_640(iParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true, false), iParam6, iParam9);
	}
}

void func_2029(var uParam0)
{
	if (!__LIB_0__::func_239(uParam0, 1048576))
	{
		if (PLAYER::_0xE956C2340A76272E(PLAYER::PLAYER_ID()) > 0.5f)
		{
			__LIB_5__::func_107(&(uParam0->f_38));
			uParam0->f_6 = MISC::_GET_GAME_TIMER_NON_SCALED_CLIPPED();
			__LIB_0__::func_240(uParam0, 1048576);
		}
	}
}

bool func_2030(var uParam0, var uParam1)
{
	int iVar0;
	if (__LIB_0__::func_239(uParam1, 16))
	{
		return true;
	}
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		iVar0 = __LIB_0__::func_153(*uParam0, 0, 1, 0);
		if (__LIB_0__::func_144(iVar0, 0) && iVar0 != joaat("WEAPON_UNARMED"))
		{
			__LIB_3__::func_353(&(uParam0->f_20), 0);
			__LIB_5__::func_107(&(uParam1->f_41));
			uParam1->f_7 = MISC::_GET_GAME_TIMER_NON_SCALED_CLIPPED();
			__LIB_0__::func_240(uParam1, 16);
			return true;
		}
	}
	return false;
}

void func_2034(var uParam0, var uParam1)
{
	if (!__LIB_0__::func_239(uParam1, 65536))
	{
		if (func_2274(uParam0, uParam1))
		{
			if (__LIB_3__::func_761(uParam0, 524288))
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_39))
				{
					if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_39, false))
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_39.f_1))
						{
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_39, uParam0->f_39.f_1, true);
						}
						if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_39.f_2))
						{
							ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_39, uParam0->f_39.f_2, true, false);
						}
					}
					else
					{
						ANIMSCENE::START_ANIM_SCENE(uParam0->f_39);
					}
				}
			}
			else
			{
				TASK::_0x1F7A9A9C38C13A56(uParam0->f_1);
			}
			__LIB_0__::func_240(uParam1, 65536);
		}
	}
}

bool func_2035(var uParam0, var uParam1)
{
	if (!__LIB_0__::func_272(*uParam0, 9))
	{
		__LIB_8__::func_529(uParam0, uParam1, 3);
		return true;
	}
	if (!__LIB_0__::func_239(uParam1, 131072) && __LIB_3__::func_742(uParam0->f_1))
	{
		__LIB_3__::func_353(&(uParam0->f_24), 0);
		__LIB_0__::func_240(uParam1, 131072);
	}
	if (!__LIB_0__::func_239(uParam1, 262144))
	{
		if (PED::_0x285D36C5C72B0569(*uParam0) < 0.5f || PED::_0x285D36C5C72B0569(uParam0->f_1) < 0.5f)
		{
			__LIB_3__::func_353(&(uParam0->f_28), 0);
			__LIB_0__::func_240(uParam1, 262144);
		}
	}
	if (!__LIB_0__::func_239(uParam1, 1))
	{
		if ((((((((((ENTITY::IS_ENTITY_DEAD(uParam0->f_1) || __LIB_0__::func_239(uParam1, 4194304)) || __LIB_3__::func_835(uParam0, uParam1)) || __LIB_3__::func_788(uParam0, uParam1, 1)) || __LIB_3__::func_789(uParam0, uParam1, 1)) || func_752(uParam0, uParam1, 1)) || __LIB_3__::func_853(uParam0, uParam1, 1)) || __LIB_3__::func_854(uParam0, uParam1, 1)) || __LIB_3__::func_855(uParam0, uParam1, 1)) || __LIB_3__::func_790(uParam0, uParam1, 1)) || (__LIB_3__::func_761(uParam0, 4096) && func_2282(uParam0, uParam1, 1)))
		{
			__LIB_3__::func_791(uParam1);
			if ((!__LIB_3__::func_761(uParam0, 4096) && func_2282(uParam0, uParam1, 0)) || __LIB_3__::func_788(uParam0, uParam1, 0))
			{
				__LIB_0__::func_240(uParam1, 128);
				PLAYER::_0x914071FF93AF2692(PLAYER::PLAYER_ID(), 999f);
				TASK::_0x651F0530083C0E5A(uParam0->f_1, 0);
				PED::SET_PED_SHOOT_RATE(uParam0->f_1, 200);
			}
			if (__LIB_3__::func_761(uParam0, 64) && ((!ENTITY::DOES_ENTITY_EXIST(uParam0->f_2) || !__LIB_0__::func_272(uParam0->f_2, 1)) || (uParam0->f_2 != uParam0->f_1 && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam0->f_2, *uParam0, 0, 0))))
			{
				__LIB_8__::func_529(uParam0, uParam1, 5);
				return true;
			}
			else if (__LIB_3__::func_835(uParam0, uParam1))
			{
				__LIB_8__::func_529(uParam0, uParam1, 4);
				return true;
			}
			else if (((__LIB_3__::func_853(uParam0, uParam1, 0) || __LIB_3__::func_792(uParam0, uParam1, 0) >= 2) || __LIB_3__::func_855(uParam0, uParam1, 0)) || ENTITY::IS_ENTITY_DEAD(uParam0->f_1))
			{
				__LIB_8__::func_529(uParam0, uParam1, 1);
				return true;
			}
			else if (func_752(uParam0, uParam1, 0))
			{
				__LIB_8__::func_529(uParam0, uParam1, 2);
				return true;
			}
			else if (__LIB_3__::func_792(uParam0, uParam1, 0) == 1)
			{
				if (__LIB_3__::func_761(uParam0, 8192))
				{
					__LIB_8__::func_529(uParam0, uParam1, 1);
				}
				else
				{
					__LIB_8__::func_529(uParam0, uParam1, 4);
				}
				return true;
			}
			else if (__LIB_3__::func_788(uParam0, uParam1, 0) || __LIB_0__::func_239(uParam1, 4194304))
			{
				if (__LIB_3__::func_761(uParam0, 64))
				{
					__LIB_8__::func_529(uParam0, uParam1, 4);
				}
				else if (__LIB_3__::func_761(uParam0, 4096))
				{
					__LIB_8__::func_529(uParam0, uParam1, 4);
				}
				else
				{
					__LIB_8__::func_529(uParam0, uParam1, 3);
				}
				return true;
			}
			else
			{
				if (__LIB_3__::func_761(uParam0, 4096) && func_2282(uParam0, uParam1, 0))
				{
					__LIB_8__::func_529(uParam0, uParam1, 4);
				}
				else if (__LIB_3__::func_761(uParam0, 67108864) && __LIB_3__::func_790(uParam0, uParam1, 0))
				{
					__LIB_8__::func_529(uParam0, uParam1, 4);
				}
				else if (__LIB_3__::func_761(uParam0, 134217728))
				{
					__LIB_8__::func_529(uParam0, uParam1, 4);
				}
				else
				{
					__LIB_8__::func_529(uParam0, uParam1, 3);
					if (__LIB_0__::func_272(Global_35, 0))
					{
						__LIB_8__::func_531(uParam0, uParam1);
					}
				}
				return true;
			}
		}
	}
	else
	{
		return true;
	}
	return false;
}

bool func_2043(var uParam0, var uParam1, int iParam2, int iParam3, var uParam4, int iParam5, var uParam6, bool bParam7)
{
	if (__LIB_3__::func_761(uParam0, 33554432) && PLAYER::_0xA54000D4BFD90BDE(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if (__LIB_3__::func_761(uParam0, 4194304))
	{
		return true;
	}
	switch (uParam1->f_59)
	{
		case 0:
			__LIB_1__::func_336(&(uParam1->f_60), 2048);
			CAM::DESTROY_ALL_CAMS(false);
			CAM::_0x6E969927CF632608(1);
			CAM::_0xE3639DB78B3B5400(iParam3);
			__LIB_5__::func_107(&(uParam1->f_26));
			func_1600(uParam1, 3);
			break;
		case 3:
			__LIB_3__::func_781();
			if (!CAM::_0x1204EB53A5FBC63D())
			{
				if (iParam3 != PLAYER::PLAYER_PED_ID())
				{
					CAM::RENDER_SCRIPT_CAMS(false, bParam7, 3000, true, false, 0);
				}
				func_1600(uParam1, 0);
				TASK::CLEAR_PED_TASKS(iParam2, true, false);
				return true;
			}
			break;
		default:
			func_1600(uParam1, 0);
			break;
	}
	return false;
}

int func_2051(int iParam0, int iParam1)
{
	var uVar0;
	return func_2291(&uVar0, iParam0, iParam1);
}

void func_2152(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_2328(0))
			{
				iVar0++;
			}
			if (func_2328(2))
			{
				iVar0++;
			}
			if (func_2328(4))
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
			if (func_2328(1))
			{
				iVar0++;
			}
			if (func_2328(3))
			{
				iVar0++;
			}
			if (func_2328(7))
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
			if (func_2328(5))
			{
				iVar0++;
			}
			if (func_2328(6))
			{
				iVar0++;
			}
			if (func_2328(8))
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

void func_2157(int iParam0)
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
	func_1322(iParam0, 1, 1, -142743235, 1);
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
		func_1322(uVar18[iVar36], 1, 1, -142743235, 1);
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

void func_2163(struct<6> Param0)
{
	if (!func_2356(Param0.f_4, 1))
	{
	}
	if (!func_2356(Param0, 1))
	{
	}
	if (!func_2356(Param0.f_2, 1))
	{
	}
	if (!func_2356(Param0.f_5, 1))
	{
	}
	if (!func_2356(Param0.f_3, 1))
	{
	}
	if (!func_2356(Param0.f_1, 1))
	{
	}
}

bool func_2274(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	float fVar6;
	if (func_2434(uParam0, uParam1))
	{
		return true;
	}
	if (!__LIB_3__::func_761(uParam0, 1048576))
	{
		if (uParam0->f_82)
		{
			iVar0 = MISC::_GET_GAME_TIMER_NON_SCALED_CLIPPED();
			iVar1 = (iVar0 - uParam1->f_5);
			fVar2 = __LIB_3__::func_837(uParam0, 0);
			if (IntToFloat(iVar1) >= (fVar2 * 1000f))
			{
				return true;
			}
			if (__LIB_0__::func_239(uParam1, 1048576))
			{
				iVar3 = (iVar0 - uParam1->f_6);
				fVar4 = __LIB_3__::func_837(uParam0, 1);
				if (IntToFloat(iVar3) >= (fVar4 * 1000f))
				{
					return true;
				}
			}
			if (__LIB_0__::func_239(uParam1, 16))
			{
				iVar5 = (iVar0 - uParam1->f_7);
				fVar6 = __LIB_3__::func_837(uParam0, 2);
				if (IntToFloat(iVar5) >= (fVar6 * 1000f))
				{
					return true;
				}
			}
		}
		else
		{
			if (__LIB_11__::func_410(&(uParam1->f_35), __LIB_3__::func_837(uParam0, 0)))
			{
				return true;
			}
			if (__LIB_11__::func_410(&(uParam1->f_38), __LIB_3__::func_837(uParam0, 1)))
			{
				return true;
			}
			if (__LIB_11__::func_410(&(uParam1->f_41), __LIB_3__::func_837(uParam0, 2)))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_2282(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	bool bVar11;
	if (ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return true;
	}
	if (__LIB_0__::func_27(uParam1->f_58, 1))
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		return false;
	}
	if (__LIB_0__::func_27(uParam1->f_58, -2147483648) && !__LIB_11__::func_410(&(uParam1->f_29), 0.05f))
	{
		return false;
	}
	iVar2 = __LIB_0__::func_153(*uParam0, 0, 1, 0);
	if (iVar2 == 0)
	{
		return false;
	}
	if (iVar2 != joaat("WEAPON_UNARMED"))
	{
		WEAPON::GET_AMMO_IN_CLIP(*uParam0, &iVar0, iVar2);
		if (iVar0 <= 0)
		{
			WEAPON::_GET_PED_WEAPON_INVENTORY_UID(*uParam0, 0, &uVar3);
			WEAPON::_GET_AMMO_IN_CLIP_BY_INVENTORY_UID(*uParam0, &iVar0, &uVar3);
		}
		iVar1 = WEAPON::GET_MAX_AMMO_IN_CLIP(*uParam0, iVar2, true);
		iVar7 = 0;
		if (__LIB_3__::func_761(uParam0, 512))
		{
			iVar7 = 1;
		}
		iVar8 = WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(uParam0->f_1, iVar7);
		if (iVar0 < iVar1)
		{
			if (uParam1->f_11 == -1)
			{
				uParam1->f_11 = MISC::_GET_GAME_TIMER_NON_SCALED_CLIPPED();
			}
			iVar10 = (MISC::_GET_GAME_TIMER_NON_SCALED_CLIPPED() - uParam1->f_11);
			if (iVar10 > 200)
			{
				bVar9 = true;
			}
		}
		if (!__LIB_3__::func_761(uParam0, 33554432))
		{
			if ((((iVar0 < iVar1 && bVar9) && !ENTITY::_0x3EC28DA1FFAC9DDD(uParam0->f_1, *uParam0, 0, 0)) && !PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::GET_PLAYER_INDEX(), uParam0->f_1)) && !PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::GET_PLAYER_INDEX(), iVar8))
			{
				if (bParam2)
				{
					__LIB_1__::func_336(&(uParam1->f_58), 1);
				}
				return true;
			}
		}
		else
		{
			if (iVar0 == 0)
			{
				bVar11 = true;
			}
			if (iVar0 < iVar1 && PLAYER::_0xA54000D4BFD90BDE(PLAYER::PLAYER_ID()) == 0)
			{
				bVar11 = true;
			}
			if (!PLAYER::_0xB16223CB7DA965F0(PLAYER::GET_PLAYER_INDEX()) && __LIB_0__::func_239(uParam1, 524288))
			{
				bVar11 = true;
			}
			if (bVar11)
			{
				if (!ENTITY::_0x3EC28DA1FFAC9DDD(uParam0->f_1, *uParam0, 0, 0) && bVar9 == 1)
				{
					if (bParam2)
					{
						__LIB_1__::func_336(&(uParam1->f_58), 1);
					}
					return true;
				}
			}
		}
	}
	return false;
}

int func_2291(var uParam0, int iParam1, int iParam2)
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
		return func_2291(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

bool func_2328(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (__LIB_1__::func_707(func_2463(iVar0, iParam0), 1, 0))
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

bool func_2356(int iParam0, int iParam1)
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
				if (func_2356(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_2356(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_2356(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_2356(iVar21, 1))
				{
				}
			}
		}
		__LIB_1__::func_712();
		return true;
	}
	return false;
}

bool func_2434(var uParam0, var uParam1)
{
	if ((func_2282(uParam0, uParam1, 0) || __LIB_3__::func_788(uParam0, uParam1, 0)) || __LIB_3__::func_789(uParam0, uParam1, 0))
	{
		return true;
	}
	return false;
}

int func_2463(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return __LIB_0__::func_678(iParam0);
		case 1:
			return __LIB_0__::func_679(iParam0);
		case 2:
			return __LIB_0__::func_680(iParam0);
		case 3:
			return __LIB_0__::func_681(iParam0);
		case 4:
			return __LIB_0__::func_682(iParam0);
		case 5:
			return __LIB_0__::func_683(iParam0);
		case 6:
			return func_2523(iParam0);
		case 7:
			return func_2524(iParam0);
		case 8:
			return __LIB_0__::func_686(iParam0);
	}
	return 0;
}

int func_2523(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_PANTHER");
			return joaat("PROVISION_REINFORCED_GUNBELT_PANTHER");
			return joaat("PROVISION_REINFORCED_HOLSTER_PANTHER");
			return joaat("PROVISION_REINFORCED_OFFHAND_PANTHER");
			return 0;
		}
int func_2524(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_RABBIT");
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_RABBIT");
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_RABBIT");
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_RABBIT");
		default:
			break;
	}
	return 0;
}

