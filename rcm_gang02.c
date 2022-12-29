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
	struct<10> Local_16[2];
	int iLocal_37 = 0;
	var uLocal_38 = 0;
	bool bLocal_39 = false;
	bool bLocal_40 = false;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	struct<54> Local_45[4];
	struct<10> Local_262[4];
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	struct<8> Local_307 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_315 = 0;
	struct<9> Local_316[1];
	struct<9> Local_326[12];
	struct<9> Local_435[9];
	int iLocal_517[60] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_578 = 0;
	var uLocal_579 = 0;
	float fLocal_580 = 0f;
	float fLocal_581 = 0f;
	float fLocal_582 = 0f;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	int iLocal_585 = 0;
	var uLocal_586 = 100;
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
	var uLocal_687 = 100;
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
	var uLocal_788 = 100;
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
	var uLocal_889 = 100;
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
	bool bLocal_990 = false;
	bool bLocal_991 = false;
	bool bLocal_992 = false;
	bool bLocal_993 = false;
	bool bLocal_994 = false;
	bool bLocal_995 = false;
	bool bLocal_996 = false;
	bool bLocal_997 = false;
	bool bLocal_998 = false;
	bool bLocal_999 = false;
	bool bLocal_1000 = false;
	bool bLocal_1001 = false;
	var uLocal_1002 = 0;
	var uLocal_1003 = 0;
	var uLocal_1004 = 0;
	var uLocal_1005 = 0;
	var uLocal_1006 = 0;
	var uLocal_1007 = 0;
	var uLocal_1008 = 0;
	var uLocal_1009 = 0;
	var uLocal_1010 = 0;
	struct<4> Local_1011 = { 0, 0, 0, 0 } ;
	var uLocal_1015 = 0;
	var uLocal_1016 = 0;
	var uLocal_1017 = 0;
	var uLocal_1018 = 21;
	var uLocal_1019 = 6;
	var uLocal_1020 = 0;
	var uLocal_1021 = 0;
	var uLocal_1022 = 0;
	float fLocal_1023 = 0f;
	float fLocal_1024 = 0f;
	struct<9> Local_1025 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1034 = 0;
	var uLocal_1035 = 0;
	var uLocal_1036 = 0;
	var uLocal_1037 = 0;
	var uLocal_1038 = 0;
	var uLocal_1039 = 0;
	var uLocal_1040 = 0;
	struct<9> Local_1041 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	char* sLocal_1060 = NULL;
	char* sLocal_1061 = NULL;
	char* sLocal_1062 = NULL;
	struct<7> Local_1063[4];
	struct<7> Local_1092[4];
	struct<2> Local_1121[15];
	int iLocal_1152 = 0;
	int iLocal_1153 = 0;
	int iLocal_1154 = 0;
	int iLocal_1155 = 0;
	int iLocal_1156 = 0;
	int iLocal_1157 = 0;
	var uLocal_1158 = 0;
	int iLocal_1159 = 0;
	int iLocal_1160 = 0;
	int iLocal_1161 = 0;
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
	bool bLocal_1195 = false;
	float fLocal_1196 = 0f;
	float fLocal_1197 = 0f;
	char* sLocal_1198 = NULL;
	bool bLocal_1199 = false;
	bool bLocal_1200 = false;
	bool bLocal_1201 = false;
	bool bLocal_1202 = false;
	int iLocal_1203 = 0;
	int iLocal_1204 = 0;
	int iLocal_1205 = 0;
	vector3 vLocal_1206 = { 0f, 0f, 0f };
	vector3 vLocal_1209 = { 0f, 0f, 0f };
	vector3 vLocal_1212 = { 0f, 0f, 0f };
	vector3 vLocal_1215 = { 0f, 0f, 0f };
	int iLocal_1218[5] = { 0, 0, 0, 0, 0 };
	int iLocal_1224 = 0;
	int iLocal_1225 = 0;
	int iLocal_1226 = 0;
	int iLocal_1227 = 0;
	int iLocal_1228 = 0;
	int iLocal_1229 = 0;
	int iLocal_1230 = 0;
	struct<16> Local_1231[6];
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion
void __EntryFunction__()
{
	struct<2606> Var0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	fLocal_580 = 3f;
	fLocal_581 = (0.02f + fLocal_580);
	fLocal_582 = 10f;
	sLocal_1061 = "rcm_gang0_2_lakayCME";
	fLocal_1196 = 1f;
	fLocal_1197 = 0f;
	sLocal_1198 = "Mission_GNG0_Ride";
	vLocal_1206 = { 1897.472f, -1863.149f, 54.74686f };
	vLocal_1209 = { 2252.511f, -764.4758f, 41.8537f };
	vLocal_1212 = { 1893.275f, -1865.08f, 42.14979f };
	vLocal_1215 = { 1892.865f, -1864.888f, 42.92186f };
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
					if (Var0.f_174 != __LIB_10__::func_698())
					{
					}
					else
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
			__LIB_13__::func_170(uParam0);
		}
	}
	__LIB_13__::func_160(uParam0);
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
			__LIB_0__::func_11(uParam0);
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
			__LIB_13__::func_29(uParam0, 1);
			iVar0 = func_103(uParam0);
			__LIB_12__::func_837(uParam0, iVar0);
		}
	}
	else
	{
		__LIB_0__::func_8(&(uParam0->f_172), 16);
		__LIB_13__::func_29(uParam0, 0);
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
		__LIB_13__::func_178(uParam0, __LIB_0__::func_58(uParam0));
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
		__LIB_0__::func_11(uParam0);
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
			func_131();
			__LIB_1__::func_141(0);
		}
		else if (__LIB_0__::func_1(uParam0->f_172, 32768))
		{
			__LIB_1__::func_837(1, 1);
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
	else if (!__LIB_0__::func_75(&(uParam0->f_2585)) || IntToFloat(__LIB_1__::func_871(&(uParam0->f_2585))) > __LIB_10__::func_381(uParam0))
	{
		__LIB_1__::func_283(&(uParam0->f_2585), 1);
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
		__LIB_12__::func_784(iVar1, 1, -1082130432 /* Float: -1f */, 1, 1, bVar2, 0);
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
	__LIB_13__::func_29(uParam0, 0);
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
	if (!__LIB_0__::func_1(Global_1935630, 1048576))
	{
		__LIB_0__::func_7(&Global_1935630, 1048576);
	}
	if (!__LIB_12__::func_738(uParam0))
	{
		if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_12, 262144))
		{
			__LIB_0__::func_8(&(Global_1347702[uParam0->f_174 /*49*/].f_12), 262144);
		}
	}
	__LIB_12__::func_658(uParam0, 2);
	__LIB_12__::func_659(uParam0, 10);
	__LIB_5__::func_467(15);
	__LIB_13__::func_658(joaat("WEATHER_GROUP_LIGHT_PRECIPITATION"), 0, 0, 1103626240 /* Float: 25f */);
	func_190();
	func_191();
}

void func_42(var uParam0)
{
	__LIB_12__::func_908(uParam0, 0);
	__LIB_12__::func_867(uParam0, Local_16[0 /*10*/].f_9, 7);
	__LIB_12__::func_867(uParam0, Local_16[1 /*10*/].f_9, 7);
	__LIB_12__::func_867(uParam0, joaat("S_M_M_PINLAW_01"), 7);
	__LIB_12__::func_867(uParam0, joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT"), 7);
	__LIB_12__::func_867(uParam0, Local_307.f_7, 7);
	__LIB_12__::func_867(uParam0, Local_316[0 /*9*/].f_7, 7);
	__LIB_12__::func_867(uParam0, joaat("P_BOOK01X"), 7);
	__LIB_12__::func_867(uParam0, joaat("P_BOOK08X"), 7);
	__LIB_12__::func_867(uParam0, joaat("P_CS_BOOK02X"), 7);
	__LIB_12__::func_867(uParam0, joaat("P_SKETCHBOOK01X"), 7);
	__LIB_12__::func_867(uParam0, joaat("P_BOTTLETEQUILA01X"), 7);
	__LIB_12__::func_867(uParam0, joaat("P_BOTTLEJD01X"), 7);
	__LIB_12__::func_867(uParam0, joaat("P_BOTTLE004X"), 7);
	__LIB_12__::func_867(uParam0, joaat("S_LOOTABLEMISCCHEST"), 7);
	__LIB_12__::func_867(uParam0, joaat("P_COMMODE02X"), 7);
	__LIB_12__::func_867(uParam0, joaat("P_CS_LEDGERSMALL01X"), 7);
	__LIB_12__::func_867(uParam0, joaat("P_CS_PURSE01X"), 7);
	__LIB_12__::func_867(uParam0, joaat("P_WALLET01X"), 7);
	__LIB_12__::func_867(uParam0, joaat("P_SHA_L_FOOTPRINT01X"), 7);
	__LIB_12__::func_867(uParam0, joaat("P_SHA_R_FOOTPRINT01X"), 7);
	__LIB_12__::func_867(uParam0, joaat("P_SHA_L_FOOTPRINT02X"), 7);
	__LIB_12__::func_867(uParam0, joaat("P_SHA_R_FOOTPRINT02X"), 7);
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
		Var1 = { 2974.441f, 474.3331f, 46.86f };
		Var1.f_3 = 113.4424f;
	}
	else if (iVar0 == 1)
	{
		Var1 = { 1896.149f, -1857.332f, 42.164f };
		Var1.f_3 = 212.6608f;
	}
	else if (iVar0 == 2)
	{
		Var1 = { 1894.997f, -1858.428f, 46.3335f };
		Var1.f_3 = 26.4904f;
	}
	else if (iVar0 == 3)
	{
		Var1 = { 1893.584f, -1865.296f, 42.1486f };
		Var1.f_3 = 46.214f;
	}
	else if (iVar0 == 4)
	{
		Var1 = { 1895.315f, -1857.46f, 46.3349f };
		Var1.f_3 = 204.6259f;
	}
	else if (iVar0 == 5)
	{
		Var1 = { 1891.141f, -1861.693f, 42.1486f };
		Var1.f_3 = 226.8988f;
	}
	else if (iVar0 == 6)
	{
		Var1 = { 1895.221f, -1860.413f, 42.1715f };
		Var1.f_3 = 155.8581f;
	}
	else if (iVar0 == 7)
	{
		Var1 = { 1894.25f, -1860.446f, 42.1507f };
		Var1.f_3 = 57.2397f;
	}
	else if (iVar0 == 8)
	{
		Var1 = { 2245.221f, -768.6905f, 42.1256f };
		Var1.f_3 = 86.3565f;
	}
	return Var1;
}

bool func_62(var uParam0)
{
	return func_205(*uParam0, uParam0->f_3);
}

bool func_64(var uParam0)
{
	if (iLocal_1160 == 0)
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_41))
		{
			__LIB_3__::func_557(&iLocal_41, 2187.454f, -689.5976f, 159.7621f, 0f, 0f, -2.749999f, 2000f, 3500f, 300f, "RideToShadyBelle_FAIL");
		}
		else if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_42))
		{
			__LIB_3__::func_557(&iLocal_42, 2187.454f, -689.5976f, 159.7621f, 0f, 0f, -2.749999f, 1850f, 3350f, 300f, "RideToShadyBelle_WARN");
		}
		else if (!func_207(33554432))
		{
			if (!__LIB_0__::func_393(Global_35, iLocal_42, 0, 1))
			{
				__LIB_12__::func_883(uParam0, "GANG02_RIDESB", 1, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				func_209(33554432);
				__LIB_1__::func_148(&uLocal_1002);
			}
		}
		else
		{
			if (!__LIB_0__::func_393(Global_35, iLocal_41, 0, 1))
			{
				StringCopy(&(uParam0->f_2578), "GANG02_FAIL_SB", 24);
				return true;
			}
			if (__LIB_0__::func_264(&uLocal_1002) > 20f)
			{
				if (__LIB_0__::func_393(Global_35, iLocal_42, 0, 1))
				{
					func_212(33554432);
					__LIB_0__::func_37(&uLocal_1002);
				}
			}
		}
	}
	if (iLocal_1160 == 5)
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_43))
		{
			__LIB_3__::func_557(&iLocal_43, 2147.689f, -1204.086f, 159.7621f, 0f, 0f, -2.749999f, 1700f, 2500f, 300f, "RideToLakay_FAIL");
		}
		else if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_44))
		{
			__LIB_3__::func_557(&iLocal_44, 2147.689f, -1204.086f, 159.7621f, 0f, 0f, -2.749999f, 1550f, 2350f, 300f, "RideToLakay_WARN");
		}
		else if (!func_207(33554432))
		{
			if (!__LIB_0__::func_393(Global_35, iLocal_44, 0, 1))
			{
				__LIB_12__::func_883(uParam0, "GANG02_RIDELK", 1, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				func_209(33554432);
				__LIB_1__::func_148(&uLocal_1002);
			}
		}
		else
		{
			if (!__LIB_0__::func_393(Global_35, iLocal_43, 0, 1))
			{
				StringCopy(&(uParam0->f_2578), "GANG02_FAIL_LK", 24);
				return true;
			}
			if (__LIB_0__::func_264(&uLocal_1002) > 20f)
			{
				if (__LIB_0__::func_393(Global_35, iLocal_44, 0, 1))
				{
					func_212(33554432);
					__LIB_0__::func_37(&uLocal_1002);
				}
			}
		}
	}
	if (__LIB_2__::func_173(PLAYER::GET_PLAYER_INDEX(), 0, 1, 1))
	{
		StringCopy(&(uParam0->f_2578), "GANG02_FAIL_WT", 24);
		return true;
	}
	if (iLocal_1160 == 1)
	{
		if (func_215(uParam0, "GANG02_FAIL_WARN_MAN", "GANG02_FAIL_MAN", vLocal_1206, 0))
		{
			return true;
		}
	}
	else if (iLocal_1160 == 2 || iLocal_1160 == 3)
	{
		if (!func_207(8192))
		{
			if (func_215(uParam0, "GANG02_FAIL_WARN_MAN", "GANG02_FAIL_MAN", vLocal_1206, 0))
			{
				return true;
			}
		}
	}
	else if (iLocal_1160 == 4)
	{
		if (func_215(uParam0, "GANG02_FAIL_WARN_MAN", "GANG02_FAIL_MAN", vLocal_1215, 0))
		{
			return true;
		}
	}
	return false;
}

void func_68(var uParam0)
{
	if (bLocal_1001)
	{
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		__LIB_2__::func_761(2961.153f, 471.2892f, 51.52034f, 2000f, 0, 0);
		bLocal_1001 = false;
	}
	func_217();
	if (__LIB_0__::func_12() == 5 && __LIB_1__::func_923())
	{
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.2f);
	}
	else
	{
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	}
	if (func_207(8388608))
	{
		if (!func_207(1))
		{
			if (func_219(uParam0))
			{
				if (func_220(uParam0))
				{
					func_221(uParam0);
					func_209(1);
					func_222(uParam0);
				}
			}
		}
		else
		{
			func_224(0, 4, func_223(0));
			if (!func_225(65536))
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1231[0 /*16*/]))
				{
					if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_1231[0 /*16*/], false))
					{
						func_226(65536);
					}
				}
			}
		}
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
	if (func_229(uParam0->f_174))
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
	if (func_238(uParam0) || __LIB_12__::func_663(uParam0->f_174, uParam0->f_743))
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
	func_243(uParam0);
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
	__LIB_12__::func_739(uParam0);
	__LIB_1__::func_564(0);
	__LIB_13__::func_29(uParam0, 0);
	__LIB_12__::func_918(uParam0, 4);
	__LIB_0__::func_8(&(uParam0->f_172), 8);
	__LIB_0__::func_8(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 1024);
	__LIB_0__::func_8(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 64);
	__LIB_0__::func_7(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 4);
	__LIB_0__::func_37(&(uParam0->f_2585));
	__LIB_12__::func_794(uParam0);
}

int func_76(var uParam0)
{
	switch (iLocal_1160)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 47, 1);
			return 2;
		case 3:
			return 3;
		case 4:
			return 4;
		case 5:
			if (func_207(8192))
			{
				if (!func_267())
				{
					if (func_207(128) || func_207(256))
					{
						return 3;
					}
					else
					{
						PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 47, 1);
						return 2;
					}
				}
				else
				{
					return 5;
				}
			}
			else
			{
				return 5;
			}
			break;
		case 6:
			return 6;
	}
	return iLocal_1160;
}

bool func_85(var uParam0)
{
	if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_13, 64))
	{
		return true;
	}
	if (func_281(uParam0) && func_282(uParam0))
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
		__LIB_13__::func_62(uParam0, func_61(0), func_61(1), 0, 1, 0);
	}
}

void func_91(var uParam0)
{
	func_300();
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
		__LIB_13__::func_178(uParam0, bVar0);
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
			if (__LIB_12__::func_884(uParam0))
			{
				return true;
			}
		}
	}
	return false;
}

int func_93(var uParam0)
{
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::_0xAB0D553FE20A6E25(0f);
	return 7;
}

int func_96(var uParam0, int iParam1)
{
	int iVar0;
	struct<4> Var1;
	iVar0 = iParam1;
	Var1 = { func_61(iVar0) };
	if (iVar0 == 0)
	{
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		PED::_0xAB0D553FE20A6E25(0f);
	}
	if (iVar0 != 0 && iVar0 != 8)
	{
		if (!__LIB_0__::func_27(iLocal_14, 16))
		{
			func_305();
			__LIB_1__::func_683(&iLocal_14, 16);
			return 2;
		}
		else if (!func_307(uParam0))
		{
			return 2;
		}
	}
	switch (iVar0)
	{
		case 0:
			if (__LIB_1__::func_707(joaat("DOCUMENT_GANG0_LETTER"), 1, 0))
			{
				func_309(joaat("DOCUMENT_GANG0_LETTER"), 1, 1, -142743235, 0);
			}
			__LIB_0__::func_11(uParam0);
			__LIB_13__::func_62(uParam0, func_61(0), func_61(1), 0, 1, 1);
			PED::_0x9851DE7AEC10B4E1(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 150f, 1, 0);
			ENTITY::SET_ENTITY_HEADING(Global_35, 212.6608f);
			CLOCK::SET_CLOCK_TIME(0, 10, 0);
			MISC::_SET_WEATHER_TYPE(joaat("SUNNY"), true, true, false, 0f, false);
			ENTITY::SET_ENTITY_HEADING(Global_35, Var1.f_3);
			__LIB_2__::func_761(2961.153f, 471.2892f, 51.52034f, 2000f, 0, 0);
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
			PED::_0xAB0D553FE20A6E25(0f);
			bLocal_1001 = true;
			__LIB_13__::func_105(1, 1);
			break;
		case 1:
			if (__LIB_1__::func_707(joaat("DOCUMENT_GANG0_LETTER"), 1, 0))
			{
				func_309(joaat("DOCUMENT_GANG0_LETTER"), 1, 1, -142743235, 0);
			}
			__LIB_0__::func_11(uParam0);
			__LIB_13__::func_62(uParam0, func_61(1), func_61(2), 1, 2, 0);
			PED::_0x9851DE7AEC10B4E1(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 150f, 1, 0);
			ENTITY::SET_ENTITY_HEADING(Global_35, 212.6608f);
			func_226(Local_1121[0 /*2*/].f_1);
			func_226(Local_1121[1 /*2*/].f_1);
			func_226(Local_1121[2 /*2*/].f_1);
			__LIB_1__::func_683(&iLocal_14, 4);
			CLOCK::SET_CLOCK_TIME(6, 5, 0);
			MISC::_SET_WEATHER_TYPE(joaat("SUNNY"), true, true, false, 0f, false);
			__LIB_13__::func_105(1, 1);
			break;
		case 2:
			if (__LIB_1__::func_707(joaat("DOCUMENT_GANG0_LETTER"), 1, 0))
			{
				func_309(joaat("DOCUMENT_GANG0_LETTER"), 1, 1, -142743235, 0);
			}
			if (!func_311(uParam0, 1))
			{
				return 2;
			}
			else
			{
				__LIB_13__::func_62(uParam0, func_61(2), func_61(4), 2, 4, 0);
				PED::_0x9851DE7AEC10B4E1(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 150f, 1, 0);
				CLOCK::SET_CLOCK_TIME(6, 5, 0);
				MISC::_SET_WEATHER_TYPE(joaat("SUNNY"), true, true, false, 0f, false);
				__LIB_13__::func_105(1, 1);
				return 5;
			}
			break;
		case 3:
			if (!func_207(8192))
			{
				func_312(joaat("DOCUMENT_GANG0_LETTER"), 1, 1, 0, 0, -897553835, 0, 0, 0, 0);
				func_209(8192);
			}
			if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_1153))
			{
				TASK::_DELETE_SCENARIO_POINT(iLocal_1153);
			}
			if (!func_311(uParam0, 0))
			{
				return 2;
			}
			else
			{
				__LIB_13__::func_62(uParam0, func_61(3), func_61(5), 3, 5, 0);
				PED::_0x9851DE7AEC10B4E1(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 150f, 1, 0);
				CLOCK::SET_CLOCK_TIME(6, 5, 0);
				MISC::_SET_WEATHER_TYPE(joaat("SUNNY"), true, true, false, 0f, false);
				__LIB_13__::func_105(1, 1);
				return 5;
			}
			break;
		case 4:
			if (__LIB_1__::func_707(joaat("DOCUMENT_GANG0_LETTER"), 1, 0))
			{
				func_309(joaat("DOCUMENT_GANG0_LETTER"), 1, 1, -142743235, 0);
			}
			if (!PED::_GET_PED_CROUCH_MOVEMENT(Global_35))
			{
				PED::_SET_PED_CROUCH_MOVEMENT(Global_35, true, 0, true);
			}
			if (!func_313(uParam0))
			{
				return 2;
			}
			else
			{
				__LIB_13__::func_62(uParam0, func_61(4), func_61(6), 4, 6, 0);
				CLOCK::SET_CLOCK_TIME(6, 5, 0);
				MISC::_SET_WEATHER_TYPE(joaat("SUNNY"), true, true, false, 0f, false);
				PED::_0x9851DE7AEC10B4E1(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 150f, 1, 0);
				__LIB_13__::func_105(1, 1);
			}
			break;
		case 5:
			PED::_0x411189E51B8020BA(Global_35, "Cautious");
			if (PED::_GET_PED_BLACKBOARD_FLOAT(Global_35, "stealth") != 1f)
			{
				PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "stealth", 1f, -1);
			}
			if (!func_207(8192))
			{
				func_312(joaat("DOCUMENT_GANG0_LETTER"), 1, 1, 0, 0, -897553835, 0, 0, 0, 0);
				func_209(8192);
			}
			if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_1153))
			{
				TASK::_DELETE_SCENARIO_POINT(iLocal_1153);
			}
			if (!func_313(uParam0))
			{
				return 2;
			}
			else
			{
				PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
				__LIB_13__::func_62(uParam0, func_61(5), func_61(8), 5, 8, 0);
				PED::_0x9851DE7AEC10B4E1(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 150f, 1, 0);
				CLOCK::SET_CLOCK_TIME(6, 5, 0);
				MISC::_SET_WEATHER_TYPE(joaat("SUNNY"), true, true, false, 0f, false);
				__LIB_13__::func_105(1, 1);
			}
			break;
		case 6:
			if (__LIB_1__::func_707(joaat("DOCUMENT_GANG0_LETTER"), 1, 0))
			{
				func_309(joaat("DOCUMENT_GANG0_LETTER"), 1, 1, -142743235, 0);
			}
			if (!func_314(uParam0))
			{
				return 2;
			}
			else
			{
				__LIB_13__::func_62(uParam0, func_61(6), func_61(8), 6, 8, 0);
				CLOCK::SET_CLOCK_TIME(6, 5, 0);
				MISC::_SET_WEATHER_TYPE(joaat("SUNNY"), true, true, false, 0f, false);
				__LIB_13__::func_105(1, 1);
			}
			break;
		case 7:
			if (!__LIB_1__::func_707(joaat("DOCUMENT_GANG0_LETTER"), 1, 0))
			{
				func_312(joaat("DOCUMENT_GANG0_LETTER"), 1, 1, 0, 0, -897553835, 0, 0, 0, 0);
			}
			if (!func_315(uParam0))
			{
				return 2;
			}
			else
			{
				__LIB_13__::func_62(uParam0, func_61(7), func_61(8), 7, 8, 0);
				CLOCK::SET_CLOCK_TIME(6, 5, 0);
				MISC::_SET_WEATHER_TYPE(joaat("SUNNY"), true, true, false, 0f, false);
				__LIB_13__::func_105(1, 1);
			}
			break;
		case 8:
			if (!func_207(8192))
			{
				func_312(joaat("DOCUMENT_GANG0_LETTER"), 1, 1, 0, 0, -897553835, 0, 0, 0, 0);
			}
			if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_1153))
			{
				TASK::_DELETE_SCENARIO_POINT(iLocal_1153);
			}
			if (!func_316(uParam0))
			{
				return 2;
			}
			else
			{
				__LIB_13__::func_62(uParam0, func_61(8), func_61(8), 8, 8, 0);
				CLOCK::SET_CLOCK_TIME(7, 15, 0);
				MISC::_SET_WEATHER_TYPE(joaat("SHOWER"), true, true, false, 0f, false);
				__LIB_13__::func_105(1, 1);
				return 8;
			}
			break;
	}
	return 7;
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
						__LIB_0__::func_11(uParam0);
					}
				}
			}
			return false;
		}
	}
	else if (__LIB_0__::func_1(uParam0->f_172, 262144) && !__LIB_0__::func_1(uParam0->f_172, 256))
	{
		__LIB_13__::func_178(uParam0, 0);
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
		__LIB_13__::func_62(uParam0, func_61(0), func_61(1), 0, 1, 1);
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
	return func_329(Var0, &(uParam0->f_206), uParam0);
}

int func_103(var uParam0)
{
	switch (iLocal_1161)
	{
		case 0:
			HUD::_DISPLAY_HUD_COMPONENT(724769646);
			func_333();
			PED::_0x411189E51B8020BA(Global_35, "Cautious");
			if (PED::_GET_PED_BLACKBOARD_FLOAT(Global_35, "stealth") != 1f)
			{
				PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "stealth", 1f, -1);
			}
			if (__LIB_0__::func_75(&uLocal_1180))
			{
				__LIB_0__::func_37(&uLocal_1180);
			}
			if (func_207(8192))
			{
				func_334(5);
			}
			else
			{
				func_334(2);
			}
			break;
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
				__LIB_13__::func_62(uParam0, func_61(0), func_61(1), 0, 1, 1);
			}
			return false;
		}
	}
	return false;
}

int func_107(var uParam0)
{
	func_337(uParam0);
	if (__LIB_0__::func_266(Global_35, vLocal_1206, 75f, 1, 1))
	{
		func_339();
	}
	if (__LIB_0__::func_13(32768) && bLocal_999)
	{
		return 8;
	}
	if (iLocal_1160 == 0)
	{
		if (!__LIB_0__::func_1(Global_1935630, 1048576))
		{
			__LIB_0__::func_7(&Global_1935630, 1048576);
		}
		else if (__LIB_0__::func_1(Global_1935630, 32768))
		{
			UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
			return 8;
		}
		if (__LIB_0__::func_13(32768))
		{
			if (__LIB_0__::func_266(Global_35, vLocal_1209, 40f, 1, 1))
			{
				bLocal_999 = true;
			}
		}
		if (!bLocal_1200)
		{
			if (bLocal_1195 && !CAM::_0x5060FA977CEA4455())
			{
				if (__LIB_0__::func_45("GANG02_CHELP1", 10000, 0, 0, 0, 1) != 0)
				{
					bLocal_1200 = true;
				}
			}
		}
		else if (!bLocal_1201)
		{
			if (CAM::IS_CINEMATIC_CAM_RENDERING() && !CAM::_0x5060FA977CEA4455())
			{
				__LIB_0__::func_105(1);
				if (__LIB_0__::func_45("GANG02_CHELP2", 10000, 0, 0, 0, 1) != 0)
				{
					bLocal_1201 = true;
					__LIB_1__::func_148(&uLocal_1189);
				}
			}
		}
		else if (!bLocal_1202)
		{
			if (__LIB_0__::func_264(&uLocal_1189) > 2f)
			{
				if (__LIB_10__::func_598())
				{
					if (!CAM::IS_CINEMATIC_CAM_RENDERING())
					{
						__LIB_0__::func_105(1);
						__LIB_0__::func_37(&uLocal_1189);
						bLocal_1202 = true;
					}
				}
				else
				{
					__LIB_0__::func_37(&uLocal_1189);
					bLocal_1202 = true;
				}
			}
		}
	}
	else if (iLocal_1160 == 5)
	{
		if (!__LIB_0__::func_1(Global_1935630, 1048576))
		{
			__LIB_0__::func_7(&Global_1935630, 1048576);
		}
		else if (__LIB_0__::func_1(Global_1935630, 32768))
		{
			UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
			func_343();
			func_344(1, 1);
			return 8;
		}
		if (__LIB_0__::func_13(32768))
		{
			if (__LIB_0__::func_266(Global_35, vLocal_1209, 40f, 1, 1))
			{
				bLocal_999 = true;
			}
		}
	}
	if (iLocal_1160 > 0)
	{
		if (bLocal_40)
		{
			if (!AUDIO::_0xE600F61F54A444A6())
			{
				AUDIO::_0x9428447DED71FC7E("RGNG01_Ride_Scenes");
				bLocal_40 = false;
			}
		}
	}
	switch (iLocal_1160)
	{
		case 0:
			func_345();
			if (func_346(uParam0))
			{
				func_334(1);
			}
			break;
		case 1:
			func_345();
			func_339();
			if (!func_207(8))
			{
				if (func_347())
				{
					func_209(8);
				}
			}
			else if (!func_207(16))
			{
				if (func_348())
				{
					func_209(16);
				}
			}
			func_300();
			if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(Global_36))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Global_35))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
				}
			}
			if (func_349(uParam0))
			{
				return 5;
			}
			break;
		case 2:
			if (!func_207(8))
			{
				if (func_347())
				{
					func_209(8);
				}
			}
			func_350(uParam0);
			break;
		case 3:
			func_350(uParam0);
			break;
		case 4:
			func_339();
			if (!func_207(8))
			{
				if (func_347())
				{
					func_209(8);
				}
			}
			else if (!func_207(16))
			{
				if (func_348())
				{
					func_209(16);
				}
			}
			func_351(uParam0);
			break;
		case 5:
			func_352(uParam0);
			break;
		case 6:
			return 8;
	}
	return 7;
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

void func_131()
{
	var uVar0;
	var uVar1;
	vector3 vVar2;
	__LIB_0__::func_319(4112);
	__LIB_0__::func_320(6);
	vVar2 = { func_392(Global_2621440[0 /*12066*/].f_9.f_7, &uVar0, &uVar1, 0, 1, 1, 0, 0, 0) };
	__LIB_0__::func_321(vVar2, uVar1, uVar0, 0);
	__LIB_0__::func_322(vVar2);
	Global_40.f_9.f_15 = __LIB_1__::func_447(vVar2, 0);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	MISC::SET_RANDOM_WEATHER_TYPE(false, true);
}

void func_159(var uParam0)
{
	int iVar0;
	if (bLocal_40)
	{
		AUDIO::_0x9428447DED71FC7E("RGNG01_Ride_Scenes");
	}
	GRAPHICS::ANIMPOSTFX_STOP(sLocal_1198);
	func_414();
	HUD::_DISPLAY_HUD_COMPONENT(724769646);
	if (__LIB_12__::func_644(uParam0) != 0)
	{
		MISC::CLEAR_WEATHER_TYPE_PERSIST();
	}
	if (CAM::_0x927B810E43E99932(&Local_1025))
	{
		CAM::_0x0A5A4F1979ABB40E(&Local_1025);
	}
	if (CAM::_0x927B810E43E99932(&Local_1041))
	{
		CAM::_0x0A5A4F1979ABB40E(&Local_1041);
	}
	if (CAM::_0xDD0B7C5AE58F721D(&Local_1025))
	{
		CAM::_0x798BE43C9393632B(&Local_1025);
	}
	if (CAM::_0xDD0B7C5AE58F721D(&Local_1041))
	{
		CAM::_0x798BE43C9393632B(&Local_1041);
	}
	func_415();
	func_416(1);
	func_343();
	__LIB_2__::func_788(&iLocal_578, 1, 0, 1);
	__LIB_0__::func_325(&iLocal_1205);
	__LIB_0__::func_325(&iLocal_1204);
	__LIB_0__::func_325(&iLocal_1203);
	func_417(0);
	__LIB_4__::func_509(0);
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_1153))
	{
		TASK::_DELETE_SCENARIO_POINT(iLocal_1153);
	}
	PED::_0x411189E51B8020BA(Global_35, "Cautious");
	PED::_0x411189E51B8020BA(Global_35, "stealth");
	func_344(1, 1);
	__LIB_1__::func_941(iLocal_1227);
	__LIB_1__::func_941(iLocal_1226);
	__LIB_1__::func_941(iLocal_1224);
	__LIB_1__::func_941(iLocal_1225);
	__LIB_1__::func_941(iLocal_1228);
	__LIB_1__::func_941(iLocal_1229);
	__LIB_1__::func_941(iLocal_1230);
	func_419();
	if (ENTITY::DOES_ENTITY_EXIST(Local_307))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&Local_307);
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_316[iVar0 /*9*/]))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_316[iVar0 /*9*/]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Local_326[iVar0 /*9*/].f_8 != 0)
		{
			ENTITY::_0xD2B9C78537ED5759(Local_326[iVar0 /*9*/].f_8);
		}
		else if (ENTITY::DOES_ENTITY_EXIST(Local_326[iVar0 /*9*/]))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_326[iVar0 /*9*/]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_435[iVar0 /*9*/]))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_435[iVar0 /*9*/]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_517[iVar0]))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iLocal_517[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1231[iVar0 /*16*/]))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(Local_1231[iVar0 /*16*/]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		__LIB_0__::func_172(iLocal_1218[iVar0]);
		iVar0++;
	}
	__LIB_0__::func_172(iLocal_43);
	__LIB_0__::func_172(iLocal_44);
	__LIB_0__::func_172(iLocal_41);
	__LIB_0__::func_172(iLocal_42);
	TXD::_SET_STREAMED_TXD_AS_NO_LONGER_NEEDED(joaat("UI_LETTER_GANG"));
	if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_1061))
	{
		TASK::REMOVE_WAYPOINT_RECORDING(sLocal_1061);
	}
	if (INTERIOR::IS_VALID_INTERIOR(iLocal_1152) && INTERIOR::IS_INTERIOR_READY(iLocal_1152))
	{
		INTERIOR::UNPIN_INTERIOR(iLocal_1152);
	}
	func_421();
	func_422();
	TASK::SET_SCENARIO_TYPE_ENABLED("RANSACK_ATTACHED_CHEST_MEDIUM", true);
	TASK::SET_SCENARIO_TYPE_ENABLED("PROP_PLAYER_OPEN_FOOTLOCKER", true);
	HUD::_DISPLAY_HUD_COMPONENT(724769646);
	__LIB_13__::func_659(0, 0, 1103626240 /* Float: 25f */);
	CLOCK::PAUSE_CLOCK(false, 0);
	CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
	PLAYER::_0xE5D3EB37ABC1EB03(PLAYER::GET_PLAYER_INDEX());
	__LIB_6__::func_357();
	func_425();
	__LIB_0__::func_8(&Global_1935630, 262144);
}

void func_190()
{
	Local_16[0 /*10*/].f_1 = { 2966.473f, 471.6891f, 47.4754f };
	Local_16[0 /*10*/].f_7 = 119.7542f;
	Local_16[0 /*10*/].f_9 = joaat("A_C_HORSE_HUNGARIANHALFBRED_PIEBALDTOBIANO");
	Local_16[1 /*10*/].f_1 = { 2956.583f, 526.2573f, 43.6717f };
	Local_16[1 /*10*/].f_7 = 87.9478f;
	Local_16[1 /*10*/].f_9 = joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
}

void func_191()
{
	func_454();
	func_455();
	func_456();
	PED::ADD_RELATIONSHIP_GROUP("pinkertonsRel", &iLocal_1155);
}

int func_205(vector3 vParam0, var uParam3)
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
		iVar0 = func_482(0, 0);
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

bool func_207(int iParam0)
{
	return __LIB_0__::func_27(iLocal_1156, iParam0);
}

void func_209(int iParam0)
{
	__LIB_1__::func_683(&iLocal_1156, iParam0);
}

void func_212(int iParam0)
{
	__LIB_1__::func_681(&iLocal_1156, iParam0);
}

bool func_215(var uParam0, char* sParam1, char* sParam2, vector3 vParam3, int iParam6)
{
	float fVar0;
	bool bVar1;
	bVar1 = false;
	if (!iParam6 == 0)
	{
		fVar0 = __LIB_0__::func_665(Global_35, iParam6, 1, 1);
		bVar1 = true;
	}
	else
	{
		fVar0 = __LIB_0__::func_94(Global_35, vParam3, 1);
	}
	if (!bLocal_997)
	{
		if (!__LIB_1__::func_325())
		{
			if (fVar0 > 70f)
			{
				if (iLocal_1160 == 1)
				{
					if (!func_207(2048))
					{
						__LIB_12__::func_883(uParam0, "GANG02_INVESTIGATE", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					}
					else
					{
						__LIB_12__::func_883(uParam0, "GANG02_INVESTIUP", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					}
				}
				else if (iLocal_1160 == 2 || iLocal_1160 == 3)
				{
					__LIB_12__::func_883(uParam0, "GANG02_TAKEOUT", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				}
				else if (iLocal_1160 == 4)
				{
					if (MAP::DOES_BLIP_EXIST(iLocal_1205))
					{
						__LIB_12__::func_883(uParam0, "GANG02_COLLECT_LETTER", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					}
					else if (func_207(4096))
					{
						__LIB_12__::func_883(uParam0, "GANG02_DOWNSTAIRSOBJ", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					}
					else
					{
						__LIB_12__::func_883(uParam0, "GANG02_DOWNSTAIRS", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					}
				}
				bLocal_997 = true;
			}
		}
	}
	if (!func_225(8))
	{
		if (fVar0 > 90f)
		{
			if (!MAP::DOES_BLIP_EXIST(iLocal_1204))
			{
				iLocal_1204 = __LIB_8__::func_777(-308585968, vLocal_1206, 20f, 1);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_1204, "GANG02_BLIP_MANSION");
			}
			func_494();
			func_495();
			if (MAP::DOES_BLIP_EXIST(iLocal_1205))
			{
				MAP::_BLIP_SET_MODIFIER(iLocal_1205, -1186550032);
			}
			__LIB_12__::func_883(uParam0, sParam1, 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			func_226(8);
		}
	}
	else if (fVar0 < 40f)
	{
		if (iLocal_1160 == 1)
		{
			if (!func_207(2048))
			{
				__LIB_12__::func_883(uParam0, "GANG02_INVESTIGATE", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			}
			else
			{
				__LIB_12__::func_883(uParam0, "GANG02_INVESTIUP", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			}
		}
		else if (iLocal_1160 == 2 || iLocal_1160 == 3)
		{
			__LIB_12__::func_883(uParam0, "GANG02_TAKEOUT", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
		}
		else if (iLocal_1160 == 4)
		{
			if (MAP::DOES_BLIP_EXIST(iLocal_1205))
			{
				__LIB_12__::func_883(uParam0, "GANG02_COLLECT_LETTER", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			}
			else if (func_207(4096))
			{
				__LIB_12__::func_883(uParam0, "GANG02_DOWNSTAIRSOBJ", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			}
			else
			{
				__LIB_12__::func_883(uParam0, "GANG02_DOWNSTAIRS", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			}
		}
		func_496();
		func_497();
		if (MAP::DOES_BLIP_EXIST(iLocal_1205))
		{
			MAP::_BLIP_REMOVE_MODIFIER(iLocal_1205, -1186550032);
		}
		__LIB_0__::func_325(&iLocal_1204);
		bLocal_997 = false;
		__LIB_10__::func_597(sParam1);
		func_499(8);
	}
	else if (fVar0 > 130f)
	{
		if (bVar1)
		{
			if (ENTITY::IS_ENTITY_OCCLUDED(iParam6))
			{
				StringCopy(&(uParam0->f_2578), sParam2, 24);
				return true;
			}
		}
		else
		{
			StringCopy(&(uParam0->f_2578), sParam2, 24);
			return true;
		}
	}
	return false;
}

void func_217()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (iLocal_1160 < 5)
	{
		iVar0 = 605;
	}
	else
	{
		iVar0 = 715;
	}
	iVar1 = (iVar0 / 100);
	iVar2 = (iVar0 % 100);
	iVar3 = CLOCK::GET_CLOCK_HOURS();
	iVar4 = CLOCK::GET_CLOCK_MINUTES();
	if (!bLocal_995)
	{
		if (iVar3 > iVar1 || (iVar3 == iVar1 && iVar4 >= iVar2))
		{
			CLOCK::PAUSE_CLOCK(true, 0);
			bLocal_995 = true;
		}
	}
	else if (iVar3 < iVar1 || (iVar3 == iVar1 && iVar4 < iVar2))
	{
		CLOCK::PAUSE_CLOCK(false, 0);
		bLocal_995 = false;
	}
	func_500();
}

bool func_219(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_262[iVar1 /*10*/]))
		{
			Local_262[iVar1 /*10*/] = func_501(uParam0, joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT"), Local_262[iVar1 /*10*/].f_1, Local_262[iVar1 /*10*/].f_7, 1, 1, 0, 1, 1, 1, 1, 0);
			if (iVar1 == 1 || iVar1 == 0)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_262[iVar1 /*10*/], true);
				PED::SET_PED_CONFIG_FLAG(Local_262[iVar1 /*10*/], 297, true);
			}
			__LIB_1__::func_991(Local_262[iVar1 /*10*/], joaat("HONOR_EVENT_STEAL_HORSE"));
		}
		else if (!ENTITY::IS_ENTITY_DEAD(Local_262[iVar1 /*10*/]))
		{
			iVar0++;
		}
		iVar1++;
	}
	if (iVar0 == 4)
	{
		return true;
	}
	return false;
}

bool func_220(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_45[iVar1 /*54*/]))
		{
			Local_45[iVar1 /*54*/] = func_501(uParam0, Local_45[iVar1 /*54*/].f_1, Local_45[iVar1 /*54*/].f_5, Local_45[iVar1 /*54*/].f_15, 1, 1, 0, 1, 1, 1, 0, 0);
		}
		else if (PED::_0xA0BC8FAED8CFEB3C(Local_45[iVar1 /*54*/]))
		{
			iVar0++;
		}
		iVar1++;
	}
	if (iVar0 == 4)
	{
		return true;
	}
	return false;
}

void func_221(var uParam0)
{
	int iVar0;
	SCRIPTS::_0x7D654266025E921B(joaat("CHAL_CTX_CUSTOM_1"));
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_45[iVar0 /*54*/]))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_45[iVar0 /*54*/], true);
			WEAPON::REMOVE_ALL_PED_WEAPONS(Local_45[iVar0 /*54*/], true, true);
			WEAPON::_0x899A04AFCC725D04(Local_45[iVar0 /*54*/], WEAPON::_0xD42514C182121C23(Local_45[iVar0 /*54*/].f_1));
			PED::SET_PED_COMBAT_ABILITY(Local_45[iVar0 /*54*/], 2);
			PED::SET_PED_ACCURACY(Local_45[iVar0 /*54*/], 90);
			PED::SET_PED_COMBAT_MOVEMENT(Local_45[iVar0 /*54*/], 2);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_45[iVar0 /*54*/], 0, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_45[iVar0 /*54*/], 50, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_45[iVar0 /*54*/], 43, true);
			PED::SET_PED_COMBAT_RANGE(Local_45[iVar0 /*54*/], 0);
			PED::SET_PED_CONFIG_FLAG(Local_45[iVar0 /*54*/], 6, true);
			TASK::SET_PED_PATH_MAY_ENTER_WATER(Local_45[iVar0 /*54*/], false);
			TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(Local_45[iVar0 /*54*/], true, 1f);
			ENTITY::_0x18FF3110CF47115D(Local_45[iVar0 /*54*/], 7, 1);
			__LIB_4__::func_228(&(Local_45[iVar0 /*54*/].f_20));
			__LIB_6__::func_905(&(Local_45[iVar0 /*54*/].f_20));
			__LIB_9__::func_261(&(Local_45[iVar0 /*54*/].f_20));
			__LIB_1__::func_399(&(Local_45[iVar0 /*54*/].f_20), 1);
			__LIB_1__::func_397(&(Local_45[iVar0 /*54*/].f_20), 0);
			__LIB_1__::func_393(&(Local_45[iVar0 /*54*/].f_20), 0);
			PED::SET_PED_HEARING_RANGE(Local_45[iVar0 /*54*/], 2.5f);
			PED::SET_PED_SEEING_RANGE(Local_45[iVar0 /*54*/], 20f);
			AUDIO::STOP_PED_SPEAKING(Local_45[iVar0 /*54*/], true);
			PED::_0xF1C03A5352243A30(Local_45[iVar0 /*54*/]);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_45[iVar0 /*54*/], iLocal_1155);
			PED::SET_PED_CONFIG_FLAG(Local_45[iVar0 /*54*/], 186, true);
			if (iVar0 == 3)
			{
				WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(Local_45[iVar0 /*54*/], false);
				__LIB_0__::func_862(Local_45[iVar0 /*54*/], 854722235);
			}
			if (iVar0 == 2)
			{
				__LIB_0__::func_862(Local_45[iVar0 /*54*/], 1110418742);
			}
			if (iVar0 == 1)
			{
				__LIB_0__::func_862(Local_45[iVar0 /*54*/], 615705149);
			}
			if (iVar0 == 0)
			{
				__LIB_0__::func_862(Local_45[iVar0 /*54*/], 392974256);
			}
			func_509(iVar0);
		}
		iVar0++;
	}
	__LIB_12__::func_875(uParam0, Local_45[3 /*54*/], "RGNG0_PINKERTON_1", 0);
	__LIB_12__::func_875(uParam0, Local_45[1 /*54*/], "RGNG0_PINKERTON_2", 0);
	__LIB_12__::func_875(uParam0, Local_45[0 /*54*/], "RGNG0_PINKERTON_3", 0);
	__LIB_12__::func_875(uParam0, Local_45[2 /*54*/], "RGNG0_PINKERTON_4", 0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, iLocal_1155, joaat("PLAYER"));
}

void func_222(var uParam0)
{
	__LIB_12__::func_957(uParam0, Local_45[2 /*54*/], "S_M_M_PINLAW_01^1", 0, 0, 0);
	__LIB_12__::func_957(uParam0, Local_45[3 /*54*/], "S_M_M_PINLAW_01^3", 0, 0, 0);
	__LIB_12__::func_957(uParam0, Local_45[1 /*54*/], "S_M_M_PINLAW_01", 0, 0, 0);
	__LIB_12__::func_957(uParam0, Local_45[0 /*54*/], "S_M_M_PINLAW_01^2", 0, 0, 0);
	__LIB_12__::func_957(uParam0, Local_262[3 /*10*/], "Horse_01", 0, 0, 0);
	__LIB_12__::func_957(uParam0, Local_262[2 /*10*/], "Horse_01^3", 0, 0, 0);
	__LIB_12__::func_957(uParam0, Local_262[1 /*10*/], "Horse_01^1", 0, 0, 0);
	__LIB_12__::func_957(uParam0, Local_262[0 /*10*/], "Horse_01^2", 0, 0, 0);
}

char* func_223(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "pl_leadin";
		case 1:
			return "pbl_reading_letter";
		case 2:
			return "pbl_letter_after_read_letter";
		case 3:
			return "pbl_fireplace_after_read_letter";
		case 4:
			return "pbl_action";
		case 5:
			return "pbl_jump_react_02_letter";
		case 6:
			return "pbl_jump_react_01_letter";
		case 7:
			return "pbl_jump_react_01_fireplace";
		case 8:
			return "pbl_jump_react_02_fireplace";
		case 9:
			return "pbl_action";
		case 10:
			return "pbl_exit_loop_alerted";
	}
	return "";
}

bool func_224(int iParam0, int iParam1, char* sParam2)
{
	if (!Local_1231[iParam0 /*16*/].f_14)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1231[iParam0 /*16*/]))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_1231[iParam0 /*16*/], true, false))
			{
				Local_1231[iParam0 /*16*/].f_14 = 1;
				return Local_1231[iParam0 /*16*/].f_14;
			}
		}
		else
		{
			if (MISC::IS_STRING_NULL(sParam2))
			{
				Local_1231[iParam0 /*16*/] = ANIMSCENE::_CREATE_ANIM_SCENE(Local_1231[iParam0 /*16*/].f_1, iParam1, Local_1231[iParam0 /*16*/].f_15, false, true);
			}
			else
			{
				Local_1231[iParam0 /*16*/] = ANIMSCENE::_CREATE_ANIM_SCENE(Local_1231[iParam0 /*16*/].f_1, iParam1, sParam2, false, true);
			}
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1231[iParam0 /*16*/]))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(Local_1231[iParam0 /*16*/]);
				func_512(iParam0);
			}
		}
	}
	return Local_1231[iParam0 /*16*/].f_14;
}

bool func_225(int iParam0)
{
	return __LIB_0__::func_27(iLocal_1157, iParam0);
}

void func_226(int iParam0)
{
	__LIB_1__::func_683(&iLocal_1157, iParam0);
}

bool func_229(int iParam0)
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
		if (func_532(joaat("CSTAG_EVENT_SDB_PARTY_NIGHT"), 1))
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

int func_238(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(Global_1347702[uParam0->f_174 /*49*/].f_43))
	{
		if (!func_537(&(Global_1347702[uParam0->f_174 /*49*/].f_43), &(uParam0->f_178), &iVar0, 1, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_243(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_172, 8))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	}
}

bool func_267()
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (Local_45[iVar1 /*54*/].f_19 == 4 || Local_45[iVar1 /*54*/].f_19 == 3)
		{
			if (!bLocal_992)
			{
				bLocal_992 = true;
			}
			iVar0++;
		}
		iVar1++;
	}
	if (iVar0 == 4)
	{
		SCRIPTS::_0x50B72A754EE64A71(joaat("CHAL_CTX_CUSTOM_1"));
		return true;
	}
	return false;
}

int func_281(var uParam0)
{
	vector3 vVar0;
	if (Global_1347702[uParam0->f_174 /*49*/].f_28 == 0)
	{
		return 1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1347702[uParam0->f_174 /*49*/].f_43))
	{
		STREAMING::REQUEST_MODEL(Global_1347702[uParam0->f_174 /*49*/].f_28, false);
		if (!STREAMING::HAS_MODEL_LOADED(Global_1347702[uParam0->f_174 /*49*/].f_28))
		{
			return 0;
		}
		vVar0 = { __LIB_1__::func_440(uParam0->f_174) };
		__LIB_3__::func_618(vVar0, 2.5f, 1, 0, 0, 0, 0);
		PERSISTENCE::_0x9D16896F0DBE78A2(vVar0, 2.5f);
		if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_12, 524288))
		{
			Global_1347702[uParam0->f_174 /*49*/].f_43 = func_501(uParam0, Global_1347702[uParam0->f_174 /*49*/].f_28, vVar0, 0, 1, 1, 0, 1, 1, 0, 1, 1);
		}
		else
		{
			Global_1347702[uParam0->f_174 /*49*/].f_43 = func_501(uParam0, Global_1347702[uParam0->f_174 /*49*/].f_28, vVar0, 0, 1, 1, 0, 1, 1, 1, 1, 0);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1347702[uParam0->f_174 /*49*/].f_43) && !PED::IS_PED_INJURED(Global_1347702[uParam0->f_174 /*49*/].f_43))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(Global_1347702[uParam0->f_174 /*49*/].f_43))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1347702[uParam0->f_174 /*49*/].f_43, true, true);
		}
		return 1;
	}
	return 0;
}

int func_282(var uParam0)
{
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::_0xAB0D553FE20A6E25(0f);
	if (!__LIB_0__::func_27(iLocal_14, 1))
	{
		if (func_589())
		{
			if (func_590())
			{
				__LIB_9__::func_799(Local_16[0 /*10*/], Local_16[0 /*10*/].f_1, 5f, 1);
				__LIB_9__::func_799(Local_16[1 /*10*/], Local_16[1 /*10*/].f_1, 5f, 1);
				__LIB_1__::func_683(&iLocal_14, 1);
			}
		}
	}
	else
	{
		func_592();
		if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_13, 1024))
		{
			CLOCK::SET_CLOCK_TIME(0, 10, 0);
			MISC::_SET_WEATHER_TYPE(joaat("SUNNY"), true, true, false, 0f, false);
		}
		return 1;
	}
	return 0;
}

void func_300()
{
	if (__LIB_0__::func_266(Global_35, vLocal_1206, 50f, 1, 1))
	{
		if (!func_207(1024))
		{
			PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "Cautious", 1f, -1);
			func_209(1024);
		}
	}
	else if (func_207(1024))
	{
		PED::_0x411189E51B8020BA(Global_35, "Cautious");
		func_212(1024);
	}
}

bool func_301(var uParam0)
{
	__LIB_2__::func_761(2961.153f, 471.2892f, 51.52034f, 2000f, 0, 0);
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::_0xAB0D553FE20A6E25(0f);
	return true;
}

void func_305()
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1218[0]))
	{
		iLocal_1218[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1897.186f, -1863.504f, 47.09151f, 0f, 0f, 139.8486f, 21.4917f, 20.91431f, 13.6f, "GANG0_2_MANSION");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1218[1]))
	{
		iLocal_1218[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1896.625f, -1857.471f, 48.7884f, 0f, 0f, 50.75003f, 5.3f, 6.2f, 5f, "GANG0_2_BEDROOM");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1218[4]))
	{
		iLocal_1218[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1900.529f, -1865.527f, 47.88079f, 0f, 0f, 50.50001f, 2.6f, 5f, 3f, "GANG0_2_BROKEN_WALL");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1218[2]))
	{
		iLocal_1218[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1908.582f, -1856.458f, 46.11148f, 0f, 0f, 50.75003f, 7.3f, 10.2f, 8f, "GANG0_2_FOG_AREA_CLEAR");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1218[3]))
	{
		iLocal_1218[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1897.796f, -1864.669f, 51.19848f, 0f, 0f, -39.74998f, 28.75f, 24.75f, 10f, "GANG0_2_UPSTAIRS");
	}
	iLocal_1227 = -356563546;
	iLocal_1224 = 867489680;
	iLocal_1225 = 560870147;
	iLocal_1226 = -659381875;
	iLocal_1228 = 553939906;
	iLocal_1229 = 357129292;
	iLocal_1230 = 1488396696;
	Local_1231[0 /*16*/] = { __LIB_10__::func_449("script@rcm@rgng0@leadin@int@pinkertons", func_223(0)) };
	Local_1231[1 /*16*/] = { __LIB_10__::func_449("script@rcm@rgng0@ig@ig1_readletter@ig1_readletter", func_223(3)) };
	Local_1231[2 /*16*/] = { __LIB_10__::func_449("script@rcm@rgng0@ig@ig2_searching@ig2_searching_downstairs", func_223(4)) };
	Local_1231[3 /*16*/] = { __LIB_10__::func_449("script@rcm@rgng0@ig@ig2_searching@ig2_searching_upstairs", func_223(9)) };
	Local_1231[4 /*16*/] = { __LIB_10__::func_449("script@rcm@rgng0@ig@ig1_readletter@ig1_readletter", func_223(2)) };
	Local_1231[5 /*16*/] = { __LIB_10__::func_449("script@rcm@rgng0@ig@ig1_readletter@ig1_readletter", func_223(1)) };
}

bool func_307(var uParam0)
{
	if (__LIB_0__::func_27(iLocal_14, 8))
	{
		return true;
	}
	if (!func_620())
	{
		return false;
	}
	else if (!func_621())
	{
		return false;
	}
	if (!func_622())
	{
		return false;
	}
	if (!func_207(8))
	{
		if (func_347())
		{
			func_209(8);
		}
		return false;
	}
	__LIB_1__::func_948(iLocal_1228, 1, 1f, 1, 0, 1f, 0, 0);
	__LIB_1__::func_948(iLocal_1229, 1, -1f, 1, 0, 1f, 0, 0);
	__LIB_1__::func_948(iLocal_1230, 1, 0f, 0, 0, 1f, 0, 0);
	__LIB_1__::func_948(867489680, 0, -0.2f, 0, 0, 0f, 0, 0);
	__LIB_1__::func_948(560870147, 0, 0f, 0, 0, 0f, 0, 0);
	__LIB_1__::func_948(-17095972, 0, 0f, 0, 0, 0f, 0, 0);
	__LIB_1__::func_948(1544281340, 0, -0.3f, 0, 0, 0f, 0, 0);
	__LIB_1__::func_948(1783003505, 0, 0f, 0, 0, 0f, 0, 0);
	__LIB_1__::func_948(931206119, 0, 0f, 0, 0, 0f, 0, 0);
	__LIB_1__::func_948(-356563546, 0, -0.2f, 0, 0, 0f, 0, 0);
	__LIB_1__::func_948(-659381875, 0, 0f, 0, 0, 0f, 0, 0);
	__LIB_1__::func_948(1163459288, 0, -1f, 0, 0, 0f, 0, 0);
	__LIB_1__::func_948(-907240961, 0, -0.6f, 0, 0, 0f, 0, 0);
	__LIB_1__::func_948(233638913, 0, -0.6f, 0, 0, 0f, 0, 0);
	if (!INTERIOR::IS_VALID_INTERIOR(iLocal_1152))
	{
		iLocal_1152 = INTERIOR::GET_INTERIOR_AT_COORDS(1892.971f, -1864.631f, 42.92566f);
	}
	else
	{
		if (!INTERIOR::IS_INTERIOR_READY(iLocal_1152))
		{
			INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_1152);
		}
		if (INTERIOR::IS_INTERIOR_READY(iLocal_1152))
		{
			if (!func_207(2))
			{
				func_209(2);
			}
			else if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iLocal_1152, "shb_p_mansion_03"))
			{
				if (!func_207(131072))
				{
					if (func_624())
					{
						func_209(131072);
					}
				}
				else if (!func_207(262144))
				{
					if (func_625())
					{
						func_209(262144);
					}
				}
				else if (func_626())
				{
					__LIB_12__::func_875(uParam0, Global_35, "ARTHUR", 0);
					__LIB_1__::func_683(&iLocal_14, 8);
					return true;
				}
			}
			else
			{
				__LIB_4__::func_495(17);
			}
		}
	}
	return false;
}

int func_309(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			func_309(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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

bool func_311(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_207(1))
		{
			if (!func_207(524288))
			{
				func_209(524288);
			}
			if (func_219(uParam0))
			{
				if (func_220(uParam0))
				{
					func_221(uParam0);
					func_209(1);
				}
			}
		}
		else if (!__LIB_0__::func_1(uParam0->f_172, 16))
		{
			func_639(uParam0, 0);
		}
		else if (__LIB_0__::func_1(uParam0->f_172, 1))
		{
			return true;
		}
	}
	else if (!func_207(1))
	{
		if (func_219(uParam0))
		{
			if (func_220(uParam0))
			{
				func_221(uParam0);
				func_209(1);
			}
		}
	}
	else if (!__LIB_0__::func_1(uParam0->f_172, 16))
	{
		func_640(uParam0);
	}
	else if (__LIB_0__::func_1(uParam0->f_172, 1))
	{
		return true;
	}
	return false;
}

bool func_312(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
				func_312(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
		__LIB_13__::func_10(28);
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
						func_312(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_312(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_312(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_312(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_312(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_312(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_312(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				__LIB_13__::func_10(24);
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
				Jump @4449; //curOff = 3594
				__LIB_0__::func_364(-220219788, joaat("TREASURE_HUNT_LOOT_10"), 0);
				__LIB_0__::func_919(-220219788, 0);
				__LIB_0__::func_367(2);
				Jump @4449; //curOff = 3627
				__LIB_0__::func_364(-220219788, joaat("TREASURE_HUNT_LOOT_11"), 0);
				__LIB_0__::func_919(-220219788, 0);
				__LIB_0__::func_367(4);
				Jump @4449; //curOff = 3660
				__LIB_0__::func_364(218622660, joaat("TREASURE_HUNT_LOOT_13"), 0);
				__LIB_0__::func_919(218622660, 0);
				__LIB_0__::func_368(1);
				Jump @4449; //curOff = 3693
				__LIB_0__::func_364(218622660, joaat("TREASURE_HUNT_LOOT_14"), 0);
				__LIB_0__::func_919(218622660, 0);
				__LIB_0__::func_368(2);
				Jump @4449; //curOff = 3726
				__LIB_0__::func_364(390004462, joaat("TREASURE_HUNT_LOOT_16"), 0);
				__LIB_0__::func_919(390004462, 0);
				__LIB_0__::func_369(1);
				Jump @4449; //curOff = 3759
				__LIB_0__::func_364(390004462, joaat("TREASURE_HUNT_LOOT_17"), 0);
				__LIB_0__::func_919(390004462, 0);
				__LIB_0__::func_369(2);
				Jump @4449; //curOff = 3792
				__LIB_0__::func_364(390004462, joaat("TREASURE_HUNT_LOOT_18"), 0);
				__LIB_0__::func_919(390004462, 0);
				__LIB_0__::func_369(4);
				Jump @4449; //curOff = 3825
				__LIB_0__::func_364(6410548, joaat("TREASURE_HUNT_LOOT_20"), 0);
				__LIB_0__::func_919(6410548, 0);
				__LIB_0__::func_370(1);
				Jump @4449; //curOff = 3856
				__LIB_0__::func_364(6410548, joaat("TREASURE_HUNT_LOOT_21"), 0);
				__LIB_0__::func_919(6410548, 0);
				__LIB_0__::func_370(2);
				Jump @4449; //curOff = 3887
				__LIB_0__::func_364(6410548, joaat("TREASURE_HUNT_LOOT_22"), 0);
				__LIB_0__::func_919(6410548, 0);
				__LIB_0__::func_370(4);
				Jump @4449; //curOff = 3918
				__LIB_0__::func_364(6410548, joaat("TREASURE_HUNT_LOOT_23"), 0);
				__LIB_0__::func_919(6410548, 0);
				__LIB_0__::func_370(8);
				Jump @4449; //curOff = 3950
				__LIB_1__::func_424(242, __LIB_0__::func_776(joaat("CONSUMABLE_AGED_PIRATE_RUM")), 0);
				Jump @4449; //curOff = 3969
				__LIB_1__::func_424(240, __LIB_0__::func_776(joaat("CONSUMABLE_GINSENG_ELIXIER")), 0);
				Jump @4449; //curOff = 3988
				__LIB_1__::func_424(241, __LIB_0__::func_776(joaat("CONSUMABLE_VALERIAN_ROOT")), 0);
				Jump @4449; //curOff = 4007
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(594, 1934060482 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health Bar." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				Jump @4449; //curOff = 4054
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(594, 1110018439 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Stamina Bar." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				Jump @4449; //curOff = 4101
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(594, 1408511260 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Dead Eye Bar." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				Jump @4449; //curOff = 4148
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(594, -1228016946 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health, Stamina and Dea" +
    "d Eye Bars." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				Jump @4449; //curOff = 4195
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(595, -103579 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health Core." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				Jump @4449; //curOff = 4242
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(595, -1531530025 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health and Dead Eye" +
    " Cores." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				Jump @4449; //curOff = 4289
				__LIB_1__::func_240(488, 0);
				Jump @4449; //curOff = 4300
				__LIB_1__::func_240(491, 0);
				Jump @4449; //curOff = 4311
				__LIB_1__::func_240(485, 0);
				if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3) == 0)
				{
					func_312(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_312(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				Jump @4449; //curOff = 4384
				if (__LIB_0__::func_293(1))
				{
					__LIB_1__::func_240(487, 0);
				}
				Jump @4449; //curOff = 4403
				__LIB_1__::func_240(486, 0);
				Jump @4449; //curOff = 4414
				if (__LIB_0__::func_2() == -1)
				{
					iParam0 = -1448210800; /* GXTEntry: "Crafting Tools" */
				}
				Jump @4449; //curOff = 4432
				__LIB_1__::func_240(496, 0);
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
					__LIB_13__::func_135(iParam0);
				}
				if (__LIB_0__::func_192(iParam0, -1979000645))
				{
					__LIB_13__::func_164(iParam0);
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
						func_312(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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
bool func_313(var uParam0)
{
	if (!func_207(1))
	{
		if (func_219(uParam0))
		{
			if (func_220(uParam0))
			{
				func_221(uParam0);
				func_209(1);
				func_333();
				if (func_207(8192))
				{
					func_334(5);
				}
				else
				{
					func_334(2);
				}
				return true;
			}
		}
	}
	return false;
}

bool func_314(var uParam0)
{
	int iVar0;
	int iVar1;
	if (!func_207(1))
	{
		if (func_219(uParam0))
		{
			if (func_220(uParam0))
			{
				func_221(uParam0);
				PED::_0x9851DE7AEC10B4E1(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 150f, 1, 0);
				func_209(1);
				func_333();
			}
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_45[iVar0 /*54*/]))
			{
				if (iVar0 == 1)
				{
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_45[iVar0 /*54*/], 1899.123f, -1870.602f, 46.3494f, 129.3842f, false, false, true);
				}
				AUDIO::DISABLE_PED_PAIN_AUDIO(Local_45[iVar0 /*54*/], true);
				ENTITY::_SET_ENTITY_HEALTH(Local_45[iVar0 /*54*/], 0, 0);
			}
			else if (!PED::IS_PED_RAGDOLL(Local_45[iVar0 /*54*/]))
			{
				iVar1++;
			}
			iVar0++;
		}
		if (iVar1 == 4)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_262[iVar0 /*10*/]))
				{
					if (iVar0 == 0)
					{
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_262[iVar0 /*10*/], 1903.794f, -1880.088f, 40.9629f, 176.4335f, true, false, true);
					}
					if (iVar0 != 1 && iVar0 != 0)
					{
						TASK::TASK_ANIMAL_UNALERTED(Local_262[iVar0 /*10*/], -1, 0, 0, 0);
					}
				}
				iVar0++;
			}
			func_334(4);
			iLocal_1159 = 1;
			func_344(1, 0);
			__LIB_12__::func_883(uParam0, "GANG02_DOWNSTAIRS", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			return true;
		}
	}
	return false;
}

bool func_315(var uParam0)
{
	int iVar0;
	int iVar1;
	if (!func_207(1))
	{
		if (func_219(uParam0))
		{
			if (func_220(uParam0))
			{
				func_221(uParam0);
				PED::_0x9851DE7AEC10B4E1(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 150f, 1, 0);
				func_209(1);
				func_333();
			}
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_45[iVar0 /*54*/]))
			{
				if (iVar0 == 1)
				{
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_45[iVar0 /*54*/], 1899.123f, -1870.602f, 46.3494f, 129.3842f, false, false, true);
				}
				AUDIO::DISABLE_PED_PAIN_AUDIO(Local_45[iVar0 /*54*/], true);
				ENTITY::_SET_ENTITY_HEALTH(Local_45[iVar0 /*54*/], 0, 0);
			}
			else if (!PED::IS_PED_RAGDOLL(Local_45[iVar0 /*54*/]))
			{
				iVar1++;
			}
			iVar0++;
		}
		if (iVar1 == 4)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_262[iVar0 /*10*/]))
				{
					if (iVar0 == 0)
					{
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_262[iVar0 /*10*/], 1903.794f, -1880.088f, 40.9629f, 176.4335f, true, false, true);
					}
					if (iVar0 != 1 && iVar0 != 0)
					{
						TASK::TASK_ANIMAL_UNALERTED(Local_262[iVar0 /*10*/], -1, 0, 0, 0);
					}
				}
				iVar0++;
			}
			func_334(5);
			iLocal_1159 = 1;
			func_344(1, 0);
			return true;
		}
	}
	return false;
}

bool func_316(var uParam0)
{
	if (__LIB_0__::func_13(32768))
	{
		iLocal_15 = 9;
		func_334(5);
		func_344(1, 1);
		return true;
	}
	__LIB_14__::func_310(44, 1, 0);
	if (__LIB_6__::func_92(44))
	{
		iLocal_15 = 9;
		func_334(5);
		func_344(1, 1);
		return true;
	}
	return false;
}

int func_329(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
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
			func_743(uParam4);
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
				__LIB_13__::func_9(uParam4);
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
				__LIB_13__::func_9(uParam4);
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

void func_333()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_45[iVar0 /*54*/]))
		{
			PED::_0xE0B61ED8BB37712F(Local_45[iVar0 /*54*/]);
			AITRANSPORT::_0x8886D83A430537FD(Local_45[iVar0 /*54*/], 0);
			if (!func_207(8192))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_45[iVar0 /*54*/], Local_45[iVar0 /*54*/].f_8, Local_45[iVar0 /*54*/].f_16, true, false, true);
				func_756(iVar0);
			}
			else
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_45[iVar0 /*54*/], Local_45[iVar0 /*54*/].f_11, Local_45[iVar0 /*54*/].f_17, true, false, true);
				func_756(iVar0);
			}
			if (iVar0 == 0)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_262[iVar0 /*10*/]))
				{
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_262[iVar0 /*10*/], 1903.794f, -1880.088f, 40.9629f, 176.4335f, true, false, true);
				}
			}
		}
		iVar0++;
	}
}

void func_334(int iParam0)
{
	int iVar0;
	if (iParam0 == 7)
	{
		iVar0 = iLocal_1160;
		iVar0++;
		iLocal_1160 = iVar0;
		if (iLocal_1160 == 7)
		{
			iLocal_1160 = (iVar0 - 1);
		}
	}
	else
	{
		iLocal_1160 = iParam0;
	}
	iLocal_1159 = 0;
}

void func_337(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_45[iVar0 /*54*/]))
		{
			switch (Local_45[iVar0 /*54*/].f_19)
			{
				case 0:
					__LIB_0__::func_11(iVar0);
					break;
				case 1:
					func_790(uParam0, iVar0);
					break;
				case 2:
					func_791(uParam0, iVar0);
					break;
				case 3:
					func_792(uParam0, iVar0);
					break;
			}
		}
		else
		{
			Local_45[iVar0 /*54*/].f_19 = 4;
			if (__LIB_0__::func_75(&(Local_45[iVar0 /*54*/].f_49)))
			{
				if (__LIB_0__::func_264(&(Local_45[iVar0 /*54*/].f_49)) < 5f || !func_207(128))
				{
					func_499(16384);
				}
				__LIB_0__::func_37(&(Local_45[iVar0 /*54*/].f_49));
			}
		}
		iVar0++;
	}
}

void func_339()
{
	int iVar0;
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_1153))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1154))
		{
			if (__LIB_0__::func_266(Global_35, vLocal_1215, 11f, 1, 1))
			{
				iVar0 = TASK::_GET_SCENARIO_POINT_ENTITY(iLocal_1153, "PrimaryItem");
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					iLocal_1154 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar0);
					TXD::_REQUEST_STREAMED_TXD(joaat("UI_LETTER_GANG"), false);
				}
			}
		}
		else
		{
			if (!bLocal_993)
			{
				if (TXD::_HAS_STREAMED_TXD_LOADED(joaat("UI_LETTER_GANG")))
				{
					if (!PLAYER::_0x0E6846476906C9DD(PLAYER::GET_PLAYER_INDEX(), iLocal_1154))
					{
						PLAYER::_0x543DFE14BE720027(PLAYER::GET_PLAYER_INDEX(), iLocal_1154, 0);
						PLAYER::_0x6ECFC621A168424C(iLocal_1154, iLocal_1154, 0, 0);
					}
					OBJECT::_SET_APPLY_OBJECT_TXD(iLocal_1154, joaat("UI_LETTER_GANG"), 0, 0);
					bLocal_993 = true;
				}
			}
			if (!DECORATOR::DECOR_EXIST_ON(iLocal_1154, "letter_item"))
			{
				DECORATOR::DECOR_SET_INT(iLocal_1154, "letter_item", joaat("DOCUMENT_GANG0_LETTER"));
			}
		}
	}
}

void func_343()
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_578))
	{
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_578, 48, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_578, false);
	}
}

void func_344(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (!func_207(2048))
		{
			func_209(2048);
		}
		func_795();
	}
	if (bParam1)
	{
		if (!func_207(4096))
		{
			func_209(4096);
		}
		func_796();
	}
}

void func_345()
{
	float fVar0;
	if (!__LIB_0__::func_27(iLocal_14, 128))
	{
		if (bLocal_39)
		{
			if (!bLocal_1195)
			{
				if (AUDIO::_0xE600F61F54A444A6() && AUDIO::GET_MUSIC_PLAYTIME() >= 33000)
				{
					bLocal_1195 = true;
				}
				return;
			}
			if (__LIB_0__::func_27(iLocal_14, 2))
			{
				if (fLocal_1196 < 1f)
				{
					fVar0 = (MISC::GET_FRAME_TIME() * 0.1f);
					fLocal_1196 = (fLocal_1196 + fVar0);
					if (fLocal_1196 > 1f)
					{
						fLocal_1196 = 1f;
					}
					fLocal_1197 = (1f - fLocal_1196);
					fLocal_1197 = (fLocal_1197 * 6.75f);
					if (fLocal_1197 < 0f)
					{
						fLocal_1197 = 0f;
					}
					if (bLocal_1199)
					{
						GRAPHICS::_0xCAB4DD2D5B2B7246(sLocal_1198, fLocal_1197);
					}
				}
				else
				{
					if (bLocal_1199)
					{
						GRAPHICS::ANIMPOSTFX_STOP(sLocal_1198);
						bLocal_1199 = false;
					}
					fLocal_1196 = 1f;
					func_417(0);
					__LIB_1__::func_683(&iLocal_14, 128);
				}
				return;
			}
			if (__LIB_0__::func_396(Global_35))
			{
				func_417(1);
				PED::SET_PED_RESET_FLAG(PED::GET_MOUNT(Global_35), 6, true);
				if (fLocal_1196 > 0.86f)
				{
					fVar0 = (MISC::GET_FRAME_TIME() * 0.1f);
					fLocal_1196 = (fLocal_1196 - fVar0);
					if (fLocal_1196 < 0.85f)
					{
						fLocal_1196 = 0.85f;
					}
					fLocal_1197 = (1f - fLocal_1196);
					fLocal_1197 = (fLocal_1197 * 6.75f);
					if (fLocal_1197 > 1f)
					{
						fLocal_1197 = 1f;
					}
					if (!bLocal_1199)
					{
						GRAPHICS::ANIMPOSTFX_PLAY(sLocal_1198);
						GRAPHICS::_0xCAB4DD2D5B2B7246(sLocal_1198, fLocal_1197);
						bLocal_1199 = true;
					}
					else
					{
						GRAPHICS::_0xCAB4DD2D5B2B7246(sLocal_1198, fLocal_1197);
					}
				}
			}
			else
			{
				func_417(0);
				if (fLocal_1196 < 1f)
				{
					fVar0 = (MISC::GET_FRAME_TIME() * 0.1f);
					fLocal_1196 = (fLocal_1196 + fVar0);
					if (fLocal_1196 > 1f)
					{
						fLocal_1196 = 1f;
					}
					fLocal_1197 = (1f - fLocal_1196);
					fLocal_1197 = (fLocal_1197 * 6.75f);
					if (fLocal_1197 < 0f)
					{
						fLocal_1197 = 0f;
					}
					if (bLocal_1199)
					{
						GRAPHICS::_0xCAB4DD2D5B2B7246(sLocal_1198, fLocal_1197);
					}
				}
				else if (bLocal_1199)
				{
					GRAPHICS::ANIMPOSTFX_STOP(sLocal_1198);
					bLocal_1199 = false;
				}
			}
		}
	}
}

bool func_346(var uParam0)
{
	int iVar0;
	func_798();
	if (!bLocal_996)
	{
		if (__LIB_0__::func_266(Global_35, vLocal_1209, 350f, 1, 1))
		{
			__LIB_14__::func_310(44, 1, 0);
			bLocal_996 = true;
		}
	}
	else if (!__LIB_0__::func_266(Global_35, vLocal_1209, 360f, 1, 1))
	{
		__LIB_9__::func_834(44, 0);
		bLocal_996 = false;
	}
	else
	{
		__LIB_14__::func_310(44, 1, 0);
	}
	POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	iVar0 = PED::GET_MOUNT(Global_35);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		PED::SET_PED_RESET_FLAG(iVar0, 49, true);
		PED::SET_PED_RESET_FLAG(iVar0, 53, true);
	}
	if (!bLocal_40 && !bLocal_39)
	{
		AUDIO::_0x6339C1EA3979B5F7("Pre_Ride", "RGNG01_Ride_Scenes");
		bLocal_40 = true;
	}
	if (!__LIB_0__::func_27(iLocal_14, 2))
	{
		if (func_800())
		{
			__LIB_1__::func_683(&iLocal_14, 2);
		}
		if (AUDIO::_0xE600F61F54A444A6())
		{
			if (__LIB_0__::func_266(Global_35, vLocal_1206, 65f, 1, 1) || __LIB_0__::func_266(Global_35, vLocal_1209, 50f, 1, 1))
			{
				__LIB_10__::func_227("RGNG01_RIDE_STOP", 0);
				__LIB_1__::func_683(&iLocal_14, 256);
			}
		}
	}
	if ((__LIB_0__::func_266(Global_35, vLocal_1206, 45f, 1, 1) && !__LIB_0__::func_393(Global_35, iLocal_1218[0], 0, 1)) && INTERIOR::IS_COLLISION_MARKED_OUTSIDE(Global_36))
	{
		if (!func_225(262144))
		{
			if (func_802(uParam0, Local_1121[0 /*2*/], 1))
			{
				__LIB_1__::func_148(&uLocal_1005);
			}
		}
		else if (!func_225(524288))
		{
			if (__LIB_0__::func_264(&uLocal_1005) > 12f)
			{
				func_802(uParam0, Local_1121[1 /*2*/], 1);
			}
		}
		else if (!func_225(1048576))
		{
			if (__LIB_0__::func_264(&uLocal_1005) > 32f)
			{
				if (func_802(uParam0, Local_1121[2 /*2*/], 1))
				{
					__LIB_0__::func_37(&uLocal_1005);
				}
			}
		}
	}
	if (!MAP::DOES_BLIP_EXIST(iLocal_1204))
	{
		iLocal_1204 = __LIB_8__::func_777(-308585968, vLocal_1206, 20f, 1);
		MAP::_BLIP_SET_MODIFIER(iLocal_1204, 825788762);
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_1204, "GANG02_BLIP_MANSION");
	}
	if (!__LIB_0__::func_27(iLocal_14, 4))
	{
		if (!__LIB_0__::func_75(&uLocal_1008))
		{
			__LIB_1__::func_148(&uLocal_1008);
		}
		else if (__LIB_0__::func_264(&uLocal_1008) > 1f)
		{
			__LIB_12__::func_883(uParam0, "GANG02_RIDESB", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			__LIB_0__::func_37(&uLocal_1008);
			__LIB_1__::func_683(&iLocal_14, 4);
		}
	}
	if (!__LIB_0__::func_27(iLocal_14, 8))
	{
		if (__LIB_0__::func_266(Global_35, vLocal_1206, 180f, 1, 1))
		{
			if (!__LIB_0__::func_27(iLocal_14, 16))
			{
				func_305();
				__LIB_1__::func_683(&iLocal_14, 16);
			}
			else
			{
				func_307(uParam0);
			}
		}
	}
	if ((__LIB_0__::func_266(Global_35, vLocal_1206, 20f, 1, 1) && __LIB_0__::func_393(Global_35, iLocal_1218[0], 0, 1)) && !INTERIOR::IS_COLLISION_MARKED_OUTSIDE(Global_36))
	{
		func_422();
		__LIB_0__::func_325(&iLocal_1204);
		if (__LIB_0__::func_75(&uLocal_1005))
		{
			__LIB_0__::func_37(&uLocal_1005);
		}
		if (!__LIB_0__::func_27(iLocal_14, 2))
		{
			__LIB_1__::func_683(&iLocal_14, 2);
		}
		return true;
	}
	return false;
}

bool func_347()
{
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_1153))
	{
		iLocal_1153 = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_PLAYER_INSPECT_LETTER_80CM_PAPER_W15_1_H24_FOLDVERTICAL_P_CS_LETTER03X"), vLocal_1212, 89.8173f, 3f, 0f, 1);
		TASK::_SET_SCENARIO_POINT_ACTIVE(iLocal_1153, false);
	}
	else
	{
		return true;
	}
	return false;
}

bool func_348()
{
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_1153))
	{
		if (!TASK::_IS_SCENARIO_POINT_ACTIVE(iLocal_1153))
		{
			TASK::_SET_SCENARIO_POINT_ACTIVE(iLocal_1153, true);
			return true;
		}
	}
	return false;
}

bool func_349(var uParam0)
{
	func_803(uParam0);
	if (bLocal_991)
	{
		if (!__LIB_0__::func_393(Global_35, iLocal_1218[3], 0, 1))
		{
			bLocal_991 = false;
		}
	}
	else if (__LIB_0__::func_393(Global_35, iLocal_1218[3], 0, 1))
	{
		bLocal_991 = true;
	}
	func_804(uParam0);
	switch (iLocal_1159)
	{
		case 0:
			__LIB_1__::func_148(&uLocal_1171);
			__LIB_0__::func_172(iLocal_41);
			__LIB_0__::func_172(iLocal_42);
			__LIB_13__::func_62(uParam0, func_61(1), func_61(2), 1, 2, 0);
			func_805();
			break;
		case 1:
			func_806(uParam0);
			if (!func_225(1))
			{
				if (func_225(512) && !__LIB_6__::func_903(Local_1121[3 /*2*/]))
				{
					__LIB_12__::func_883(uParam0, "GANG02_INVESTIGATE", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					func_226(1);
				}
			}
			if (!func_207(32))
			{
				if (func_207(524288))
				{
					if (__LIB_0__::func_1(uParam0->f_172, 16))
					{
						if (__LIB_12__::func_670(&(uParam0->f_753)))
						{
							StringCopy(&(uParam0->f_753.f_355.f_4), "1-DayVersion", 64);
							__LIB_12__::func_839(&(uParam0->f_206), "1-DayVersion");
							func_209(8388608);
							func_808(1850.552f, -1885.153f, 40.452f, 297.6524f);
							func_805();
						}
					}
				}
				else if (bLocal_991)
				{
					func_639(uParam0, 1);
					func_209(524288);
				}
			}
			if (!func_207(32))
			{
				if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_1153))
				{
					if (PED::_IS_PED_USING_SCENARIO_POINT(Global_35, iLocal_1153) && TASK::_0xEC7E480FF8BD0BED(Global_35))
					{
						__LIB_1__::func_148(&uLocal_1171);
						func_209(32);
					}
				}
			}
			else
			{
				if (!func_207(8192))
				{
					__LIB_13__::func_29(uParam0, 0);
					func_209(8192);
				}
				if (!__LIB_0__::func_1(uParam0->f_172, 16))
				{
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_B"), false);
					if (!func_207(1))
					{
						if (func_219(uParam0))
						{
							if (func_220(uParam0))
							{
								func_221(uParam0);
								func_209(1);
								func_640(uParam0);
							}
						}
					}
				}
				else if (!__LIB_0__::func_1(uParam0->f_172, 1))
				{
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_B"), false);
				}
				if (!func_225(Local_1121[13 /*2*/].f_1))
				{
					if (!__LIB_0__::func_75(&uLocal_1177))
					{
						if (TASK::_0xEC7E480FF8BD0BED(Global_35))
						{
							__LIB_1__::func_148(&uLocal_1177);
							if (!bLocal_994)
							{
								bLocal_994 = true;
							}
						}
					}
					else if (__LIB_0__::func_264(&uLocal_1177) > 1.5f)
					{
						func_226(Local_1121[3 /*2*/].f_1);
						func_226(Local_1121[4 /*2*/].f_1);
						func_226(Local_1121[5 /*2*/].f_1);
						func_226(Local_1121[6 /*2*/].f_1);
						__LIB_5__::func_20(0, 0);
						func_802(uParam0, Local_1121[13 /*2*/], 1);
						__LIB_0__::func_37(&uLocal_1177);
					}
				}
				else if (!__LIB_6__::func_903(Local_1121[13 /*2*/]) && bLocal_994)
				{
					func_802(uParam0, Local_1121[12 /*2*/], 1);
				}
				if (bLocal_994)
				{
					if ((!TASK::_0xEC7E480FF8BD0BED(Global_35) || TASK::_GET_ITEM_INTERACTION_FROM_PED(Global_35) == 1918075176) || TASK::_GET_ITEM_INTERACTION_FROM_PED(Global_35) == -1661733570)
					{
						__LIB_6__::func_900(Local_1121[13 /*2*/], 0, 0);
						__LIB_6__::func_900(Local_1121[12 /*2*/], 1, 0);
						UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
						func_811();
						bLocal_994 = false;
					}
				}
			}
			if (__LIB_1__::func_707(joaat("DOCUMENT_GANG0_LETTER"), 1, 0) && !__LIB_6__::func_903(Local_1121[12 /*2*/]))
			{
				if (!func_225(2097152))
				{
					if (func_802(uParam0, Local_1121[14 /*2*/], 1))
					{
						__LIB_1__::func_148(&uLocal_1174);
					}
				}
				else
				{
					func_344(1, 1);
					__LIB_0__::func_325(&iLocal_1205);
					func_805();
				}
			}
			break;
		case 2:
			if (!__LIB_6__::func_903(Local_1121[14 /*2*/]) || __LIB_3__::func_135(&uLocal_1174) >= 5000)
			{
				if (__LIB_0__::func_75(&uLocal_1174))
				{
					__LIB_0__::func_37(&uLocal_1174);
				}
				return true;
			}
			else if (func_207(8192))
			{
				if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE(Local_1121[14 /*2*/]) > 0 || __LIB_3__::func_135(&uLocal_1174) >= 1505)
				{
					__LIB_5__::func_20(0, 0);
					if (__LIB_0__::func_75(&uLocal_1174))
					{
						__LIB_0__::func_37(&uLocal_1174);
					}
					return true;
				}
			}
			break;
	}
	return false;
}

void func_350(var uParam0)
{
	switch (iLocal_1159)
	{
		case 0:
			if (func_811())
			{
				func_212(16);
			}
			__LIB_13__::func_62(uParam0, func_61(4), func_61(6), 4, 6, 0);
			PED::_0x411189E51B8020BA(Global_35, "Cautious");
			if (PED::_GET_PED_BLACKBOARD_FLOAT(Global_35, "stealth") != 1f)
			{
				PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "stealth", 1f, -1);
			}
			if (!func_207(8192))
			{
				__LIB_12__::func_883(uParam0, "GANG02_TAKEOUT", 1, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			}
			func_344(1, 0);
			func_813();
			__LIB_0__::func_7(&Global_1935630, 262144);
			__LIB_1__::func_148(&uLocal_1171);
			func_805();
			break;
		case 1:
			func_814();
			if (!func_207(512))
			{
				if (func_207(128) || func_207(256))
				{
					PED::_0x411189E51B8020BA(Global_35, "stealth");
					iLocal_1160 = 3;
					func_209(512);
					return;
				}
			}
			if (func_267())
			{
				PED::_0x411189E51B8020BA(Global_35, "stealth");
				__LIB_1__::func_148(&uLocal_1174);
				func_805();
			}
			break;
		case 2:
			if (__LIB_0__::func_265(&uLocal_1174) > 4.5f)
			{
				__LIB_0__::func_37(&uLocal_1174);
				func_334(4);
			}
			break;
	}
}

void func_351(var uParam0)
{
	switch (iLocal_1159)
	{
		case 0:
			__LIB_13__::func_62(uParam0, func_61(6), func_61(7), 6, 7, 0);
			if (!func_207(4))
			{
				func_815(uParam0);
				__LIB_1__::func_148(&uLocal_1171);
				func_805();
			}
			else
			{
				func_344(1, 1);
				func_816();
				__LIB_12__::func_883(uParam0, "GANG02_COLLECT_LETTER", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_0__::func_37(&uLocal_1171);
				func_805();
			}
			break;
		case 1:
			if (!func_207(4))
			{
				func_815(uParam0);
			}
			if (!func_207(32))
			{
				if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_1153))
				{
					if (PED::_IS_PED_USING_SCENARIO_POINT(Global_35, iLocal_1153) && TASK::_0xEC7E480FF8BD0BED(Global_35))
					{
						__LIB_1__::func_148(&uLocal_1171);
						func_209(32);
					}
				}
			}
			else
			{
				if (!func_225(Local_1121[13 /*2*/].f_1))
				{
					if (!__LIB_0__::func_75(&uLocal_1177))
					{
						if (TASK::_0xEC7E480FF8BD0BED(Global_35))
						{
							__LIB_1__::func_148(&uLocal_1177);
							if (!bLocal_994)
							{
								bLocal_994 = true;
							}
						}
					}
					else if (__LIB_0__::func_264(&uLocal_1177) > 1.5f)
					{
						if (!func_207(268435456))
						{
							func_802(uParam0, Local_1121[13 /*2*/], 1);
						}
						else
						{
							func_226(Local_1121[13 /*2*/].f_1);
						}
						__LIB_0__::func_37(&uLocal_1177);
					}
				}
				if (bLocal_994)
				{
					if ((!TASK::_0xEC7E480FF8BD0BED(Global_35) || TASK::_GET_ITEM_INTERACTION_FROM_PED(Global_35) == 1918075176) || TASK::_GET_ITEM_INTERACTION_FROM_PED(Global_35) == -1661733570)
					{
						__LIB_6__::func_900(Local_1121[13 /*2*/], 0, 0);
						func_802(uParam0, Local_1121[12 /*2*/], 1);
						UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
						func_811();
						bLocal_994 = false;
					}
				}
			}
			if (__LIB_1__::func_707(joaat("DOCUMENT_GANG0_LETTER"), 1, 0))
			{
				if (!func_225(8192))
				{
					func_802(uParam0, Local_1121[12 /*2*/], 1);
				}
				else
				{
					func_344(1, 1);
					__LIB_0__::func_325(&iLocal_1205);
					func_805();
				}
			}
			break;
		case 2:
			if (!__LIB_6__::func_903(Local_1121[12 /*2*/]))
			{
				func_334(5);
			}
			break;
	}
}

void func_352(var uParam0)
{
	if (PED::_GET_PED_BLACKBOARD_FLOAT(Global_35, "stealth") > 0f)
	{
		if ((func_267() || func_207(128)) || func_207(256))
		{
			PED::_0x411189E51B8020BA(Global_35, "stealth");
		}
	}
	func_817();
	if (func_207(8192))
	{
		if (!__LIB_0__::func_27(iLocal_14, 64))
		{
			__LIB_13__::func_62(uParam0, func_61(5), func_61(8), 5, 8, 0);
			PED::_0x411189E51B8020BA(Global_35, "Cautious");
			if (PED::_GET_PED_BLACKBOARD_FLOAT(Global_35, "stealth") != 1f)
			{
				PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "stealth", 1f, -1);
			}
			func_344(1, 0);
			func_813();
			__LIB_0__::func_7(&Global_1935630, 262144);
			__LIB_1__::func_148(&uLocal_1171);
			__LIB_1__::func_683(&iLocal_14, 64);
		}
		else
		{
			func_814();
			if (!func_207(512))
			{
				if (func_207(128) || func_207(256))
				{
					PED::_0x411189E51B8020BA(Global_35, "stealth");
					func_209(512);
					return;
				}
			}
		}
	}
	if (!func_225(131072))
	{
		if (func_818())
		{
			PED::_0x411189E51B8020BA(Global_35, "stealth");
			func_415();
			func_416(0);
		}
	}
	__LIB_14__::func_310(44, 1, 0);
	if (!__LIB_0__::func_27(iLocal_14, 32))
	{
		__LIB_12__::func_883(uParam0, "GANG02_RIDELK", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
		__LIB_1__::func_683(&iLocal_14, 32);
	}
	if (!MAP::DOES_BLIP_EXIST(iLocal_1203))
	{
		iLocal_1203 = __LIB_8__::func_777(-308585968, vLocal_1209, 35f, 1);
		MAP::_BLIP_SET_MODIFIER(iLocal_1203, 825788762);
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_1203, "GANG02_BLIP_LAKAY");
	}
	if (__LIB_0__::func_266(Global_35, 2238.327f, -768.972f, 43.54059f, 10f, 1, 1))
	{
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
		__LIB_1__::func_26(0);
		__LIB_4__::func_614();
	}
	__LIB_1__::func_694(Global_35, 2240.855f, -768.2339f, 42.4611f, 0, 60f, 40f, 25f, 1084227584 /* Float: 5f */, 1, 1, 0, 0);
	if (!bLocal_1000)
	{
		if (__LIB_0__::func_266(Global_35, 2240.855f, -768.2339f, 42.4611f, 25f, 1, 1))
		{
			if (__LIB_0__::func_71(Global_35))
			{
				TASK::TASK_DISMOUNT_ANIMAL(Global_35, 0, 0, 0, 0, 0);
				bLocal_1000 = true;
			}
			else if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(Global_35, 0, 0);
				bLocal_1000 = true;
			}
		}
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
			func_841();
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
			func_848(iVar9, uVar7, -469960592, iVar8, 1, 1, 0);
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
						func_312(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_312(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_312(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_312(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_312(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_312(joaat("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_312(joaat("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_312(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_312(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_312(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_312(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_312(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_312(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_312(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_312(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_312(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_312(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_312(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_312(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_312(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_312(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_312(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_312(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_312(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_312(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_858();
						func_859(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
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
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY(func_862(10, 0)));
						break;
					case 8:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 621714131 /* GXTEntry: "Jamie Gillis" */);
						break;
					case 15:
						func_312(joaat("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
						func_312(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_312(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
		func_893();
		switch (iVar0)
		{
			case 1:
				switch (__LIB_0__::func_76(iParam0))
				{
					case 4:
						func_894(iParam0, 1000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 61:
					case 62:
					case 63:
						func_894(iParam0, 300, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 25:
						func_894(iParam0, 150000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 12:
						func_894(iParam0, 120000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 53:
						func_894(iParam0, 90000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 20:
						func_894(iParam0, 85000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 19:
						func_894(iParam0, 70000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 24:
						iVar18 = __LIB_0__::func_895(iParam0);
						func_894(iParam0, iVar18, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 28:
						func_894(iParam0, 45000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 34:
						func_894(iParam0, 600000, 1, 0.5f, 4, 0, 0, 1);
						if (!__LIB_1__::func_707(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0))
						{
							func_312(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						}
						break;
					case 29:
						func_894(iParam0, 4600, 1, 0f, 3, 0, 0, 1);
						break;
					case 37:
						break;
					case 58:
						break;
					case 57:
						func_894(iParam0, 2100000, 1, 0.9047619f, 8, 0, 0, 1);
						break;
					case 76:
						func_894(iParam0, 2042100, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 72:
						if (__LIB_0__::func_895(iParam0) == 0)
						{
							func_894(iParam0, 20000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						}
						else
						{
							func_894(iParam0, 15000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
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
						func_894(iParam0, 1500, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 55:
						__LIB_0__::func_896(8, 1);
						break;
					case 138:
						MISC::SET_BIT(&(Global_40.f_9052), 1);
						MISC::SET_BIT(&(Global_40.f_9052), 3);
						break;
					case 94:
						func_894(iParam0, 30000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 63:
						func_894(iParam0, 60000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 37:
						func_894(iParam0, 75000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 116:
						func_894(iParam0, 25000, 1, 0.5f, 1, 0, 0, 1);
						break;
					case 9:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ANSEL_ATHERTON"));
						break;
				}
				break;
			case 11:
				if (iParam0 == __LIB_1__::func_293(0, 10, 11, joaat("CABR01")))
				{
					func_894(iParam0, __LIB_0__::func_895(iParam0), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == __LIB_1__::func_293(0, 7, 11, joaat("CACR02")))
				{
					func_894(iParam0, __LIB_1__::func_794(9), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == __LIB_1__::func_293(0, 8, 11, joaat("CACR03")))
				{
					func_894(iParam0, __LIB_1__::func_794(10), 1, 0.5f, 2, 0, 0, 1);
				}
				else if (iParam0 == __LIB_1__::func_293(0, 11, 11, joaat("CACR01")))
				{
					func_894(iParam0, __LIB_1__::func_794(8), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == __LIB_1__::func_293(0, 12, 11, joaat("CACR04")))
				{
					func_894(iParam0, __LIB_1__::func_794(11), 1, 0.5f, 2, 0, 0, 1);
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

Vector3 func_392(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10)
{
	vector3 vVar0;
	vVar0 = { func_900(vParam0, iParam3, iParam4, iParam5, iParam6, 1, iParam7, bParam8, bParam9, bParam10, -1, 1103626240 /* Float: 25f */) };
	if (__LIB_0__::func_86(vVar0))
	{
		vVar0 = { func_900(vParam0, iParam3, iParam4, 0, 1, 1, iParam7, bParam8, 0, 0, -1, 1103626240 /* Float: 25f */) };
	}
	return vVar0;
}

void func_414()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_16[iVar0 /*10*/]))
		{
			PED::SET_PED_CONFIG_FLAG(Local_16[iVar0 /*10*/], 214, false);
		}
		__LIB_2__::func_788(&(Local_16[iVar0 /*10*/]), 1, 0, 1);
		iVar0++;
	}
	if (PED::_0x91A5F9CBEBB9D936(uLocal_38))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_38, false);
	}
	__LIB_2__::func_161(2961.153f, 471.2892f, 51.52034f, 20f, 5);
	__LIB_0__::func_172(iLocal_37);
	if (AUDIO::_0xE600F61F54A444A6())
	{
		__LIB_10__::func_227("RGNG01_RIDE_STOP", 0);
		__LIB_1__::func_683(&iLocal_14, 256);
	}
}

void func_415()
{
	int iVar0;
	SCRIPTS::_0x50B72A754EE64A71(joaat("CHAL_CTX_CUSTOM_1"));
	iVar0 = 0;
	while (iVar0 < 4)
	{
		__LIB_0__::func_325(&(Local_45[iVar0 /*54*/].f_18));
		if (func_225(131072))
		{
			if (ENTITY::IS_ENTITY_OCCLUDED(Local_45[iVar0 /*54*/]) && !ENTITY::IS_ENTITY_ON_SCREEN(Local_45[iVar0 /*54*/]))
			{
				__LIB_2__::func_426(&(Local_45[iVar0 /*54*/]));
			}
		}
		else
		{
			__LIB_2__::func_788(&(Local_45[iVar0 /*54*/]), 1, 0, 1);
		}
		iVar0++;
	}
}

void func_416(bool bParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!bParam0)
		{
			if (__LIB_0__::func_394(Global_35, Local_262[iVar0 /*10*/], 0))
			{
			}
			else
			{
				if (PED::GET_PED_CONFIG_FLAG(Local_262[iVar0 /*10*/], 297, false))
				{
					PED::SET_PED_CONFIG_FLAG(Local_262[iVar0 /*10*/], 297, false);
				}
				if (func_225(131072))
				{
					if (ENTITY::IS_ENTITY_OCCLUDED(Local_262[iVar0 /*10*/]) && !ENTITY::IS_ENTITY_ON_SCREEN(Local_262[iVar0 /*10*/]))
					{
						__LIB_2__::func_426(&(Local_262[iVar0 /*10*/]));
					}
				}
				else
				{
					__LIB_2__::func_788(&(Local_262[iVar0 /*10*/]), 1, 0, 1);
				}
			}
			iVar0++;
		}
	}
}

void func_417(bool bParam0)
{
	if (bParam0)
	{
		if (!bLocal_998)
		{
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 2);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 2);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 2);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 2);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(4, 2);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(5, 2);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 2);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 2);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 2);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 2);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(10, 2);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(11, 2);
			bLocal_998 = true;
		}
	}
	else if (bLocal_998)
	{
		UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
		UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
		UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
		UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
		UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(4, 0);
		UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(5, 0);
		UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 0);
		UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 0);
		UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 0);
		UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 0);
		UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(10, 0);
		UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(11, 0);
		bLocal_998 = false;
	}
}

int func_419()
{
	if (!func_207(32768))
	{
		return 1;
	}
	if (PLAYER::_0x0E6846476906C9DD(PLAYER::GET_PLAYER_INDEX(), iLocal_517[0]))
	{
		PLAYER::_0x9DAE1380CC5C6451(PLAYER::GET_PLAYER_INDEX(), iLocal_517[0]);
	}
	PLAYER::_0xE5D3EB37ABC1EB03(PLAYER::GET_PLAYER_INDEX());
	func_212(32768);
	return 1;
	return 0;
}

void func_421()
{
	if (func_207(67108864))
	{
		CAM::_0x798BE43C9393632B(sLocal_1060);
	}
}

void func_422()
{
	if (func_207(536870912))
	{
		CAM::_0x798BE43C9393632B(sLocal_1062);
	}
}

void func_425()
{
	VEHICLE::_0xB961DD799A837BD7();
	__LIB_1__::func_600(1);
}

void func_454()
{
	Local_45[0 /*54*/] = { func_976(joaat("S_M_M_PINLAW_01"), 1886.941f, -1844.37f, 41.2248f, 248.5316f, 0) };
	Local_45[0 /*54*/].f_8 = { 1911.524f, -1870.205f, 40.85311f };
	Local_45[0 /*54*/].f_16 = 147.7951f;
	Local_45[0 /*54*/].f_11 = { 1911.524f, -1870.205f, 40.85311f };
	Local_45[0 /*54*/].f_17 = 147.7951f;
	Local_262[0 /*10*/].f_1 = { Local_45[0 /*54*/].f_5 };
	Local_262[0 /*10*/].f_7 = Local_45[0 /*54*/].f_15;
	Local_262[0 /*10*/].f_4 = { Local_45[0 /*54*/].f_5 };
	Local_262[0 /*10*/].f_8 = Local_45[0 /*54*/].f_15;
	Local_45[1 /*54*/] = { func_976(joaat("S_M_M_PINLAW_01"), 1886.502f, -1846.044f, 41.432f, 229.2173f, 0) };
	Local_45[1 /*54*/].f_8 = { 1898.346f, -1862.395f, 46.3493f };
	Local_45[1 /*54*/].f_16 = 200.6253f;
	Local_45[1 /*54*/].f_11 = { 1904.569f, -1869.117f, 42.1266f };
	Local_45[1 /*54*/].f_17 = 59.5142f;
	Local_262[1 /*10*/].f_1 = { Local_45[1 /*54*/].f_5 };
	Local_262[1 /*10*/].f_7 = Local_45[1 /*54*/].f_15;
	Local_262[1 /*10*/].f_4 = { Local_45[1 /*54*/].f_5 };
	Local_262[1 /*10*/].f_8 = Local_45[1 /*54*/].f_15;
	Local_45[2 /*54*/] = { func_976(joaat("S_M_M_PINLAW_01"), 1884.168f, -1848.38f, 41.469f, 261.0478f, 0) };
	Local_45[2 /*54*/].f_8 = { 1898.467f, -1855.6f, 42.152f };
	Local_45[2 /*54*/].f_16 = 332.8941f;
	Local_45[2 /*54*/].f_11 = { 1898.467f, -1855.6f, 42.152f };
	Local_45[2 /*54*/].f_17 = 332.8941f;
	Local_262[2 /*10*/].f_1 = { Local_45[2 /*54*/].f_5 };
	Local_262[2 /*10*/].f_7 = Local_45[2 /*54*/].f_15;
	Local_262[2 /*10*/].f_4 = { Local_45[2 /*54*/].f_5 };
	Local_262[2 /*10*/].f_8 = Local_45[2 /*54*/].f_15;
	Local_45[3 /*54*/] = { func_976(joaat("S_M_M_PINLAW_01"), 1883.472f, -1845.467f, 41.5118f, 242.4328f, 0) };
	Local_45[3 /*54*/].f_8 = { 1894.703f, -1867.58f, 42.1314f };
	Local_45[3 /*54*/].f_16 = 236.9767f;
	Local_45[3 /*54*/].f_11 = { 1892.557f, -1859.844f, 42.1487f };
	Local_45[3 /*54*/].f_17 = 242.047f;
	Local_262[3 /*10*/].f_1 = { Local_45[3 /*54*/].f_5 };
	Local_262[3 /*10*/].f_7 = Local_45[3 /*54*/].f_15;
	Local_262[3 /*10*/].f_4 = { Local_45[3 /*54*/].f_5 };
	Local_262[3 /*10*/].f_8 = Local_45[3 /*54*/].f_15;
}

void func_455()
{
	Local_1121[0 /*2*/] = { __LIB_13__::func_265("GNG0_APPROACH1", 262144) };
	Local_1121[1 /*2*/] = { __LIB_13__::func_265("GNG0_APPROACH2", 524288) };
	Local_1121[2 /*2*/] = { __LIB_13__::func_265("GNG0_APPROACH3", 1048576) };
	Local_1121[3 /*2*/] = { __LIB_13__::func_265("GNG0_SEARCH1", 512) };
	Local_1121[4 /*2*/] = { __LIB_13__::func_265("GNG0_SEARCH2", 1024) };
	Local_1121[5 /*2*/] = { __LIB_13__::func_265("GNG0_SEARCH3", 2048) };
	Local_1121[6 /*2*/] = { __LIB_13__::func_265("GNG0_SEARCH4", 4096) };
	Local_1121[7 /*2*/] = { __LIB_13__::func_265("GNG0_ATTACK1", 16384) };
	Local_1121[8 /*2*/] = { __LIB_13__::func_265("GNG0_ATTACK2", 16384) };
	Local_1121[9 /*2*/] = { __LIB_13__::func_265("GNG0_ATTACK3", 16384) };
	Local_1121[10 /*2*/] = { __LIB_13__::func_265("GNG0_ATTACK4", 16384) };
	Local_1121[11 /*2*/] = { __LIB_13__::func_265("GNG0_IG1RLTR", 256) };
	Local_1121[12 /*2*/] = { __LIB_13__::func_265("GNG0_S2_IG3", 8192) };
	Local_1121[13 /*2*/] = { __LIB_13__::func_265("GNG0_SADIE_LTTR", 32768) };
	Local_1121[14 /*2*/] = { __LIB_13__::func_265("GNG0_S2_INT_LI", 2097152) };
}

void func_456()
{
	Local_307.f_7 = joaat("P_CS_LETTER03X");
	Local_307.f_1 = { vLocal_1215 };
	Local_307.f_4 = { 0f, 0f, 45f };
	Local_316[0 /*9*/].f_7 = joaat("P_CRATE22X_SMALL");
	Local_316[0 /*9*/].f_1 = { 1892.51f, -1864.41f, 42.92f };
	Local_316[0 /*9*/].f_4 = { 0f, 0f, -56.15f };
	Local_326[0 /*9*/].f_7 = joaat("P_BOOK01X");
	Local_326[0 /*9*/].f_1 = { 1899.22f, -1855.01f, 42.19f };
	Local_326[0 /*9*/].f_4 = { 89.72f, 3.96f, 67.24f };
	Local_326[1 /*9*/].f_7 = joaat("P_BOOK08X");
	Local_326[1 /*9*/].f_1 = { 1898.74f, -1854.47f, 42.6f };
	Local_326[1 /*9*/].f_4 = { 1.39f, 4.84f, -120.44f };
	Local_326[2 /*9*/].f_7 = joaat("P_CS_BOOK02X");
	Local_326[2 /*9*/].f_1 = { 1899f, -1854.42f, 42.61f };
	Local_326[2 /*9*/].f_4 = { -0.34f, -0.19f, -43.49f };
	Local_326[3 /*9*/].f_7 = joaat("P_CS_BOOK02X");
	Local_326[3 /*9*/].f_1 = { 1898.84f, -1854.2f, 42.62f };
	Local_326[3 /*9*/].f_4 = { 0f, 0f, -50.42f };
	Local_326[4 /*9*/].f_7 = joaat("P_SKETCHBOOK01X");
	Local_326[4 /*9*/].f_1 = { 1899.31f, -1855.11f, 42.16f };
	Local_326[4 /*9*/].f_4 = { -14.2f, 0.72f, -24.67f };
	Local_326[5 /*9*/].f_7 = joaat("P_SKETCHBOOK01X");
	Local_326[5 /*9*/].f_1 = { 1898.59f, -1854.13f, 42.61f };
	Local_326[5 /*9*/].f_4 = { -1.36f, -4.84f, 59.21f };
	Local_326[6 /*9*/].f_7 = joaat("P_SKETCHBOOK01X");
	Local_326[6 /*9*/].f_1 = { 1899.38f, -1854.59f, 42.32f };
	Local_326[6 /*9*/].f_4 = { -2.14f, -1.05f, 32.14f };
	Local_326[7 /*9*/].f_7 = joaat("P_CS_BOOK02X");
	Local_326[7 /*9*/].f_1 = { 1899.81f, -1854.76f, 43.76f };
	Local_326[7 /*9*/].f_4 = { 179.79f, -2.03f, -129.95f };
	Local_326[8 /*9*/].f_7 = joaat("P_CS_BOOK02X");
	Local_326[8 /*9*/].f_1 = { 1899.12f, -1854.04f, 43.77f };
	Local_326[8 /*9*/].f_4 = { 179.01f, 2.29f, -130.11f };
	Local_326[9 /*9*/].f_7 = joaat("P_BOTTLETEQUILA01X");
	Local_326[9 /*9*/].f_1 = { 1899.7f, -1854.58f, 43.75f };
	Local_326[9 /*9*/].f_4 = { 0f, 0f, -69.78f };
	Local_326[10 /*9*/].f_7 = joaat("P_BOTTLEJD01X");
	Local_326[10 /*9*/].f_1 = { 1899.53f, -1854.47f, 43.75f };
	Local_326[10 /*9*/].f_4 = { 0f, 0f, 0f };
	Local_326[11 /*9*/].f_7 = joaat("P_BOTTLE004X");
	Local_326[11 /*9*/].f_1 = { 1899.28f, -1854.32f, 43.75f };
	Local_326[11 /*9*/].f_4 = { 0f, 0f, -147.54f };
	Local_435[0 /*9*/].f_7 = joaat("S_LOOTABLEMISCCHEST");
	Local_435[0 /*9*/].f_1 = { 1898.03f, -1874.16f, 46.33f };
	Local_435[0 /*9*/].f_4 = { 0f, 0f, -179.39f };
	Local_435[1 /*9*/].f_7 = joaat("P_COMMODE02X");
	Local_435[1 /*9*/].f_1 = { 1895.65f, -1872.5f, 46.33f };
	Local_435[1 /*9*/].f_4 = { 0f, 0f, 139.77f };
	Local_435[2 /*9*/].f_7 = joaat("P_CS_LEDGERSMALL01X");
	Local_435[2 /*9*/].f_1 = { 1897.25f, -1873.7f, 46.4f };
	Local_435[2 /*9*/].f_4 = { 0f, 0f, -0.37f };
	Local_435[3 /*9*/].f_7 = joaat("P_CS_LETTER03X");
	Local_435[3 /*9*/].f_1 = { 1895.61f, -1872.48f, 46.97f };
	Local_435[3 /*9*/].f_4 = { 0f, 0f, 138.37f };
	Local_435[4 /*9*/].f_7 = joaat("P_CS_LETTER03X");
	Local_435[4 /*9*/].f_1 = { 1897.82f, -1874.12f, 46.59f };
	Local_435[4 /*9*/].f_4 = { 0f, 0f, 168.86f };
	Local_435[5 /*9*/].f_7 = joaat("P_CS_LETTER03X");
	Local_435[5 /*9*/].f_1 = { 1898.17f, -1874.14f, 46.51f };
	Local_435[5 /*9*/].f_4 = { 0f, 0f, 161.66f };
	Local_435[6 /*9*/].f_7 = joaat("P_CS_PURSE01X");
	Local_435[6 /*9*/].f_1 = { 1895.73f, -1872.54f, 46.98f };
	Local_435[6 /*9*/].f_4 = { -84.4f, 2.05f, -127.7f };
	Local_435[7 /*9*/].f_7 = joaat("P_CS_PURSE01X");
	Local_435[7 /*9*/].f_1 = { 1898f, -1874.22f, 46.51f };
	Local_435[7 /*9*/].f_4 = { -90.67f, -5.63f, 81.63f };
	Local_435[8 /*9*/].f_7 = joaat("P_WALLET01X");
	Local_435[8 /*9*/].f_1 = { 1895.61f, -1872.48f, 46.97f };
	Local_435[8 /*9*/].f_4 = { 0f, 0f, -133.11f };
}

int func_482(int iParam0, int iParam1)
{
	var uVar0;
	return func_994(&uVar0, iParam0, iParam1);
}

void func_494()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (MAP::DOES_BLIP_EXIST(Local_1063[iVar0 /*7*/].f_1))
		{
			MAP::_BLIP_SET_MODIFIER(Local_1063[iVar0 /*7*/].f_1, -1186550032);
		}
		iVar0++;
	}
}

void func_495()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (MAP::DOES_BLIP_EXIST(Local_1092[iVar0 /*7*/].f_1))
		{
			MAP::_BLIP_SET_MODIFIER(Local_1092[iVar0 /*7*/].f_1, -1186550032);
		}
		iVar0++;
	}
}

void func_496()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (MAP::DOES_BLIP_EXIST(Local_1063[iVar0 /*7*/].f_1))
		{
			MAP::_BLIP_REMOVE_MODIFIER(Local_1063[iVar0 /*7*/].f_1, -1186550032);
		}
		iVar0++;
	}
}

void func_497()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (MAP::DOES_BLIP_EXIST(Local_1092[iVar0 /*7*/].f_1))
		{
			MAP::_BLIP_REMOVE_MODIFIER(Local_1092[iVar0 /*7*/].f_1, -1186550032);
		}
		iVar0++;
	}
}

void func_499(int iParam0)
{
	__LIB_1__::func_681(&iLocal_1157, iParam0);
}

void func_500()
{
	int iVar0;
	float fVar1;
	float fVar2;
	iVar0 = (CLOCK::GET_CLOCK_HOURS() * 100 + CLOCK::GET_CLOCK_MINUTES());
	if (iLocal_1160 == 0)
	{
		if (fLocal_1023 == 0f)
		{
			fLocal_1023 = (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vLocal_1206, true) - 150f);
			Local_1011.f_3 = 0;
		}
		if (iVar0 < 605)
		{
			fVar1 = (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vLocal_1206, true) - 150f);
			fVar2 = __LIB_0__::func_251(((fLocal_1023 - fVar1) / fLocal_1023), 0f, 1f);
			func_1002(6, 5, fVar2, &Local_1011);
		}
	}
	else if (iLocal_1160 == 5)
	{
		if (fLocal_1024 == 0f)
		{
			fLocal_1024 = (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vLocal_1209, true) - 50f);
			Local_1011.f_3 = 0;
		}
		if (iVar0 < 715)
		{
			fVar1 = (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vLocal_1209, true) - 50f);
			fVar2 = __LIB_0__::func_251(((fLocal_1024 - fVar1) / fLocal_1024), 0f, 1f);
			func_1002(7, 15, fVar2, &Local_1011);
		}
	}
}

int func_501(var uParam0, int iParam1, vector3 vParam2, int iParam5, int iParam6, float fParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	int iVar0;
	if (__LIB_0__::func_1(uParam0->f_172, 64) && !CAM::IS_SCREEN_FADED_OUT())
	{
		return 0;
	}
	iVar0 = func_1003(iParam1, vParam2, iParam5, iParam6, fParam7, bParam8, bParam9, bParam10, bParam11, bParam12, bParam13, 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (__LIB_12__::func_703(iParam1))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(iVar0, true);
			ENTITY::SET_ENTITY_PROOFS(iVar0, 127, false);
			PED::SET_PED_CONFIG_FLAG(iVar0, 169, true);
			PED::SET_PED_CONFIG_FLAG(iVar0, 179, true);
			PED::_0xAE6004120C18DF97(iVar0, 0, 0);
			PED::SET_RAGDOLL_BLOCKING_FLAGS(iVar0, 270583);
		}
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			__LIB_0__::func_7(&(uParam0->f_172), 64);
		}
	}
	return iVar0;
}

void func_509(int iParam0)
{
	func_1016(iParam0, 0);
}

void func_512(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_1019(iParam0);
			break;
		case 1:
			func_1020(iParam0);
			break;
		case 2:
			func_1021(iParam0);
			break;
		case 4:
			func_1022(iParam0);
			break;
		case 3:
			func_1023(iParam0);
			break;
		case 5:
			func_1024(iParam0);
			break;
	}
}

bool func_532(int iParam0, bool bParam1)
{
	int iVar0;
	if (bParam1)
	{
		return func_1034(iParam0);
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (Global_40.f_4283.f_6[iVar0 /*5*/] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_537(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	else if (func_1039(*uParam0, 0, uParam1, iParam2, iParam3, 0))
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

bool func_589()
{
	if (!PED::_0x91A5F9CBEBB9D936(uLocal_38))
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_37))
		{
			__LIB_3__::func_557(&iLocal_37, 2961.153f, 471.2892f, 51.52034f, 0f, 0f, 0.25f, 66.25f, 88.5f, 25f, "volumeAroundHorse");
			__LIB_2__::func_165(2961.153f, 471.2892f, 51.52034f, 20f, 0, 0, 5);
			__LIB_3__::func_730(iLocal_37, 0, 0, 0, 0, 0);
			__LIB_2__::func_761(2961.153f, 471.2892f, 51.52034f, 2000f, 0, 0);
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
			PED::_0xAB0D553FE20A6E25(0f);
		}
		else
		{
			uLocal_38 = __LIB_1__::func_391(iLocal_37, 0, 0, 0);
		}
	}
	else
	{
		return true;
	}
	return false;
}

bool func_590()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (ENTITY::IS_ENTITY_DEAD(Local_16[iVar0 /*10*/]))
		{
			Local_16[iVar0 /*10*/] = func_1003(Local_16[iVar0 /*10*/].f_9, Local_16[iVar0 /*10*/].f_1, Local_16[iVar0 /*10*/].f_7, 1, 1, 0, 0, 1, 0, 0, 0, 0, 0);
			PED::SET_PED_CONFIG_FLAG(Local_16[iVar0 /*10*/], 214, true);
			PED::SET_PED_CONFIG_FLAG(Local_16[iVar0 /*10*/], 297, true);
			__LIB_1__::func_991(Local_16[iVar0 /*10*/], joaat("HONOR_EVENT_STEAL_HORSE"));
			return false;
		}
		else if (PED::_0xA0BC8FAED8CFEB3C(Local_16[iVar0 /*10*/]))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 == 2)
	{
		return true;
	}
	return false;
}

void func_592()
{
	VEHICLE::_0x4C05B42A8D937796();
	__LIB_1__::func_600(0);
}

bool func_620()
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (func_207(16384))
	{
		return true;
	}
	iVar0 = 1;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_517[iVar0]))
		{
			if (iVar0 <= 30)
			{
				iVar2 = joaat("P_SHA_L_FOOTPRINT01X");
			}
			else if (iVar0 <= 60)
			{
				iVar2 = joaat("P_SHA_R_FOOTPRINT01X");
			}
			else if (iVar0 <= 90)
			{
				iVar2 = joaat("P_SHA_L_FOOTPRINT02X");
			}
			else if (iVar0 <= 120)
			{
				iVar2 = joaat("P_SHA_R_FOOTPRINT02X");
			}
			iLocal_517[iVar0] = OBJECT::CREATE_OBJECT(iVar2, func_1102(iVar0, 0), true, true, false, false, false);
			ENTITY::SET_ENTITY_ROTATION(iLocal_517[iVar0], func_1102(iVar0, 1), 2, false);
			return false;
		}
		else
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 == 60)
	{
		func_209(16384);
		return true;
	}
	return false;
}

bool func_621()
{
	int iVar0;
	if (func_207(32768))
	{
		return true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_517[0]))
	{
		if (!PLAYER::_0x0E6846476906C9DD(PLAYER::GET_PLAYER_INDEX(), iLocal_517[0]))
		{
			PLAYER::_0x543DFE14BE720027(PLAYER::GET_PLAYER_INDEX(), iLocal_517[0], 0);
			return false;
		}
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (iLocal_585 == 1)
		{
			PLAYER::_0x6ECFC621A168424C(iLocal_517[0], iLocal_517[iVar0], 0, 0);
			iLocal_585++;
		}
		else if (iLocal_585 >= 4)
		{
			iLocal_585 = 0;
		}
		else
		{
			iLocal_585++;
		}
		iVar0++;
	}
	func_209(32768);
	return true;
	return false;
}

bool func_622()
{
	if (!VOLUME::_DOES_VOLUME_EXIST(Local_1063[0 /*7*/]))
	{
		Local_1063[0 /*7*/] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1895.998f, -1858.386f, 47.845f, 0f, 0f, 50.5f, 9f, 5.5f, 3f, "ROOM_BLIP_UPSTAIRS_1");
		Local_1063[0 /*7*/].f_6 = 18f;
		return false;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(Local_1063[1 /*7*/]))
	{
		Local_1063[1 /*7*/] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1890.736f, -1864.769f, 47.845f, 0f, 0f, 50.50001f, 5f, 5.5f, 3f, "ROOM_BLIP_UPSTAIRS_2");
		Local_1063[1 /*7*/].f_6 = 18f;
		return false;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(Local_1063[2 /*7*/]))
	{
		Local_1063[2 /*7*/] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1898.096f, -1870.233f, 47.845f, 0f, 0f, 50.50001f, 6f, 5.5f, 3f, "ROOM_BLIP_UPSTAIRS_3");
		Local_1063[2 /*7*/].f_6 = 18f;
		return false;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(Local_1063[3 /*7*/]))
	{
		Local_1063[3 /*7*/] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1905.098f, -1861.236f, 47.845f, 0f, 0f, 50.50001f, 3f, 6f, 3f, "ROOM_BLIP_UPSTAIRS_4");
		Local_1063[3 /*7*/].f_6 = 12f;
		return false;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(Local_1092[0 /*7*/]))
	{
		Local_1092[0 /*7*/] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1891.233f, -1864.784f, 43.606f, 0f, 0f, 50.50001f, 5f, 6.5f, 3f, "ROOM_BLIP_DOWNSTAIRS_1");
		Local_1092[0 /*7*/].f_6 = 18f;
		return false;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(Local_1092[1 /*7*/]))
	{
		Local_1092[1 /*7*/] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1905.639f, -1861.682f, 43.606f, 0f, 0f, 50.50001f, 3f, 5f, 3f, "ROOM_BLIP_DOWNSTAIRS_2");
		Local_1092[1 /*7*/].f_6 = 5f;
		return false;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(Local_1092[2 /*7*/]))
	{
		Local_1092[2 /*7*/] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1896.149f, -1858.002f, 43.606f, 0f, 0f, 50.50001f, 9.5f, 5.5f, 3f, "ROOM_BLIP_DOWNSTAIRS_3");
		Local_1092[2 /*7*/].f_6 = 18f;
		return false;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(Local_1092[3 /*7*/]))
	{
		Local_1092[3 /*7*/] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1897.003f, -1869.987f, 43.606f, 0f, 0f, 50.50001f, 5.5f, 7f, 3f, "ROOM_BLIP_DOWNSTAIRS_4");
		Local_1092[3 /*7*/].f_6 = 18f;
		return false;
	}
	return true;
}

bool func_624()
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_326[iVar1 /*9*/]))
		{
			if (iVar1 == 0 || iVar1 == 4)
			{
				if (STREAMING::HAS_MODEL_LOADED(Local_326[iVar1 /*9*/].f_7))
				{
					if (Local_326[iVar1 /*9*/].f_8 == 0)
					{
						Local_326[iVar1 /*9*/].f_8 = ENTITY::_0x6F3068258A499E52(Local_326[iVar1 /*9*/].f_7, Local_326[iVar1 /*9*/].f_1, 7);
					}
					else if (ENTITY::_0x1FF441D7954F8709(Local_326[iVar1 /*9*/].f_8))
					{
						Local_326[iVar1 /*9*/] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(Local_326[iVar1 /*9*/].f_8));
					}
				}
			}
			else
			{
				Local_326[iVar1 /*9*/] = OBJECT::CREATE_OBJECT_NO_OFFSET(Local_326[iVar1 /*9*/].f_7, Local_326[iVar1 /*9*/].f_1, true, true, false, true);
				ENTITY::SET_ENTITY_ROTATION(Local_326[iVar1 /*9*/], Local_326[iVar1 /*9*/].f_4, 2, true);
			}
		}
		else
		{
			if (!ENTITY::_IS_ENTITY_FROZEN(Local_326[iVar1 /*9*/]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_326[iVar1 /*9*/], true);
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED(Local_326[iVar1 /*9*/], false);
			}
			iVar0++;
		}
		iVar1++;
	}
	if (iVar0 == 12)
	{
		TASK::SET_SCENARIO_TYPE_ENABLED("RANSACK_ATTACHED_CHEST_MEDIUM", false);
		return true;
	}
	return false;
}

bool func_625()
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < 9)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_435[iVar1 /*9*/]))
		{
			Local_435[iVar1 /*9*/] = OBJECT::CREATE_OBJECT_NO_OFFSET(Local_435[iVar1 /*9*/].f_7, Local_435[iVar1 /*9*/].f_1, true, true, false, true);
			ENTITY::SET_ENTITY_ROTATION(Local_435[iVar1 /*9*/], Local_435[iVar1 /*9*/].f_4, 2, true);
		}
		else
		{
			if (!ENTITY::_IS_ENTITY_FROZEN(Local_435[iVar1 /*9*/]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_435[iVar1 /*9*/], true);
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED(Local_435[iVar1 /*9*/], false);
			}
			iVar0++;
		}
		iVar1++;
	}
	if (iVar0 == 9)
	{
		TASK::SET_SCENARIO_TYPE_ENABLED("PROP_PLAYER_OPEN_FOOTLOCKER", false);
		return true;
	}
	return false;
}

bool func_626()
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_316[iVar1 /*9*/]))
		{
			Local_316[iVar1 /*9*/] = OBJECT::CREATE_OBJECT_NO_OFFSET(Local_316[iVar1 /*9*/].f_7, Local_316[iVar1 /*9*/].f_1, true, true, false, true);
			ENTITY::SET_ENTITY_ROTATION(Local_316[iVar1 /*9*/], Local_316[iVar1 /*9*/].f_4, 2, true);
			ENTITY::FREEZE_ENTITY_POSITION(Local_316[iVar1 /*9*/], true);
		}
		else
		{
			iVar0++;
		}
		iVar1++;
	}
	if (iVar0 == 1)
	{
		return true;
	}
	return false;
}

void func_639(var uParam0, bool bParam1)
{
	StringCopy(&(uParam0->f_2575), "RGNG0_S2_INT", 24);
	if (bParam1)
	{
		__LIB_12__::func_944(uParam0, &(uParam0->f_2575), 1);
		__LIB_12__::func_956(&(uParam0->f_753), Global_35, 0, 0);
		__LIB_12__::func_693(&(uParam0->f_753), 262144);
	}
	__LIB_12__::func_957(uParam0, Global_35, 0, 0, 0, 0);
	if (func_207(1))
	{
		func_222(uParam0);
	}
	__LIB_12__::func_779(uParam0, vLocal_1206);
	__LIB_13__::func_16(uParam0, 182206);
	__LIB_12__::func_981(uParam0, 182328);
	__LIB_12__::func_676(&(uParam0->f_206), "1-DayVersion");
	__LIB_0__::func_7(&(uParam0->f_172), 16);
}

void func_640(var uParam0)
{
	StringCopy(&(uParam0->f_2575), "RGNG0_S2_INT", 24);
	__LIB_12__::func_957(uParam0, Global_35, 0, 0, 0, 0);
	if (func_207(1))
	{
		func_222(uParam0);
	}
	__LIB_12__::func_779(uParam0, vLocal_1206);
	__LIB_13__::func_16(uParam0, 182206);
	__LIB_12__::func_981(uParam0, 182328);
	__LIB_12__::func_676(&(uParam0->f_206), "3-DayVersion-ALT");
	__LIB_0__::func_7(&(uParam0->f_172), 16);
}

void func_743(var uParam0)
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
		func_1266(&(uParam0->f_404), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_12__::func_706(uParam0, 0f, 0f, 0f);
		func_1268(uParam0);
		func_1269(uParam0);
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

void func_756(int iParam0)
{
	if (iParam0 == 0)
	{
		func_1287();
	}
	else if (iParam0 == 2)
	{
		func_1288();
	}
	else if (iParam0 == 1)
	{
		func_1289();
	}
	else if (iParam0 == 3)
	{
		func_1290();
	}
	func_1016(iParam0, 1);
}

void func_790(var uParam0, int iParam1)
{
	if (PED::_IS_PED_HOGTIED(Local_45[iParam1 /*54*/]))
	{
		func_1339(iParam1);
		return;
	}
	if (func_207(128))
	{
		if (!PED::IS_PED_BEING_STEALTH_KILLED(Local_45[iParam1 /*54*/]))
		{
			func_1340(uParam0, iParam1);
		}
		return;
	}
	if ((PED::_0xB7DBB2986B87E230(Local_45[iParam1 /*54*/], 5000f) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_45[iParam1 /*54*/], true, false), 50f, false)) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(Local_45[iParam1 /*54*/], true, false), 50f))
	{
		if (!PED::IS_PED_BEING_STEALTH_KILLED(Local_45[iParam1 /*54*/]))
		{
			func_1341();
			func_209(256);
			func_1340(uParam0, iParam1);
		}
		return;
	}
	if (!Local_45[iParam1 /*54*/].f_52)
	{
		if (__LIB_0__::func_94(Local_45[iParam1 /*54*/], Global_36, 1) < 3f)
		{
			if (((iParam1 == 3 && func_207(8192)) && (iLocal_306 == 1 || iLocal_306 == 0)) && __LIB_0__::func_94(Local_45[iParam1 /*54*/], Global_36, 1) > 1.5f)
			{
			}
			else
			{
				Local_45[iParam1 /*54*/].f_52 = 1;
				__LIB_1__::func_397(&(Local_45[iParam1 /*54*/].f_20), 1);
				__LIB_1__::func_400(&(Local_45[iParam1 /*54*/].f_20), 0);
			}
		}
	}
	else if (__LIB_0__::func_94(Local_45[iParam1 /*54*/], Global_36, 1) >= 3f)
	{
		__LIB_1__::func_397(&(Local_45[iParam1 /*54*/].f_20), 0);
		__LIB_1__::func_400(&(Local_45[iParam1 /*54*/].f_20), 1);
		Local_45[iParam1 /*54*/].f_52 = 0;
	}
	if (__LIB_0__::func_665(Local_45[iParam1 /*54*/], PLAYER::PLAYER_PED_ID(), 0, 1) < 0.75f && ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_45[iParam1 /*54*/]))
	{
		if (!PED::IS_PED_BEING_STEALTH_KILLED(Local_45[iParam1 /*54*/]))
		{
			func_1340(uParam0, iParam1);
		}
		return;
	}
	if (func_1342(Local_45[iParam1 /*54*/], &(Local_45[iParam1 /*54*/].f_20), &(Local_45[iParam1 /*54*/].f_48), 0))
	{
		if (!func_207(8192))
		{
			if (iParam1 == 3 || iParam1 == 2)
			{
				if (!func_207(4))
				{
					if (!ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(Local_45[iParam1 /*54*/], Global_35, 17) || !__LIB_0__::func_48(Global_35, Local_45[iParam1 /*54*/], 5f, 1))
					{
						return;
					}
				}
			}
		}
		else if ((iParam1 == 1 && (iLocal_304 == 0 || iLocal_304 == 1)) && !__LIB_0__::func_48(Global_35, Local_45[iParam1 /*54*/], 5f, 1))
		{
			return;
		}
		if (__LIB_0__::func_393(Global_35, iLocal_1218[4], 0, 1) && Local_45[iParam1 /*54*/].f_48 == 131072)
		{
			return;
		}
		if (!PED::IS_PED_BEING_STEALTH_KILLED(Local_45[iParam1 /*54*/]))
		{
			func_1340(uParam0, iParam1);
		}
		return;
	}
	if (iParam1 == 0)
	{
		func_1344(uParam0);
	}
	else if (iParam1 == 2)
	{
		if (!func_207(8192))
		{
			if (func_207(64))
			{
				if (__LIB_0__::func_264(&uLocal_1165) > 2f)
				{
					if (!PED::IS_PED_BEING_STEALTH_KILLED(Local_45[iParam1 /*54*/]))
					{
						func_1340(uParam0, iParam1);
						__LIB_0__::func_37(&uLocal_1165);
					}
					return;
				}
			}
		}
		func_1345(uParam0);
	}
	else if (iParam1 == 1)
	{
		func_1346(uParam0);
	}
	else if (iParam1 == 3)
	{
		if (!func_207(8192))
		{
			if (!func_207(64))
			{
				if (__LIB_8__::func_684("GNG0_IG1RLTR"))
				{
					if (PED::IS_PED_BEING_STEALTH_KILLED(Local_45[iParam1 /*54*/]))
					{
						__LIB_1__::func_148(&uLocal_1165);
						func_209(64);
					}
				}
			}
			if (Local_45[2 /*54*/].f_19 == 2 || Local_45[2 /*54*/].f_19 == 4)
			{
				if (iLocal_306 >= 1)
				{
					if (!__LIB_0__::func_75(&uLocal_1168))
					{
						__LIB_1__::func_148(&uLocal_1168);
					}
					else if (__LIB_0__::func_264(&uLocal_1168) > 1f)
					{
						func_1340(uParam0, iParam1);
						func_209(65536);
						__LIB_0__::func_37(&uLocal_1168);
					}
					return;
				}
			}
		}
		func_1348(uParam0);
	}
	PED::SET_PED_RESET_FLAG(Local_45[iParam1 /*54*/], 42, true);
}

void func_791(var uParam0, int iParam1)
{
	if (PED::_IS_PED_HOGTIED(Local_45[iParam1 /*54*/]))
	{
		func_1339(iParam1);
		return;
	}
	if (!func_207(128))
	{
		if (__LIB_0__::func_75(&(Local_45[iParam1 /*54*/].f_49)))
		{
			if (__LIB_0__::func_264(&(Local_45[iParam1 /*54*/].f_49)) > 1f)
			{
				if (!func_207(128))
				{
					func_1341();
					func_209(128);
					__LIB_0__::func_37(&(Local_45[iParam1 /*54*/].f_49));
				}
			}
		}
	}
	if (!PED::IS_PED_BEING_STEALTH_KILLED(Local_45[iParam1 /*54*/]))
	{
		if ((((!__LIB_6__::func_903(Local_1121[7 /*2*/]) && !__LIB_6__::func_903(Local_1121[8 /*2*/])) && !__LIB_6__::func_903(Local_1121[9 /*2*/])) && !__LIB_6__::func_903(Local_1121[10 /*2*/])) && !PLAYER::_0xB16223CB7DA965F0(PLAYER::GET_PLAYER_INDEX()))
		{
			if (iParam1 == 0)
			{
				if (func_802(uParam0, Local_1121[9 /*2*/], 1))
				{
					__LIB_1__::func_148(&(Local_45[iParam1 /*54*/].f_49));
				}
			}
			else if (iParam1 == 2)
			{
				if (func_802(uParam0, Local_1121[10 /*2*/], 1))
				{
					__LIB_1__::func_148(&(Local_45[iParam1 /*54*/].f_49));
				}
			}
			else if (iParam1 == 1)
			{
				if (func_802(uParam0, Local_1121[8 /*2*/], 1))
				{
					__LIB_1__::func_148(&(Local_45[iParam1 /*54*/].f_49));
				}
			}
			else if (iParam1 == 3)
			{
				if (func_802(uParam0, Local_1121[7 /*2*/], 1))
				{
					__LIB_1__::func_148(&(Local_45[iParam1 /*54*/].f_49));
				}
			}
		}
	}
	if (PED::IS_PED_BEING_STEALTH_KILLED(Local_45[iParam1 /*54*/]))
	{
		if (iParam1 == 0)
		{
			if (__LIB_6__::func_903(Local_1121[9 /*2*/]))
			{
				__LIB_6__::func_900(Local_1121[9 /*2*/], 0, 0);
			}
		}
		else if (iParam1 == 2)
		{
			if (__LIB_6__::func_903(Local_1121[10 /*2*/]))
			{
				__LIB_6__::func_900(Local_1121[10 /*2*/], 0, 0);
			}
		}
		else if (iParam1 == 1)
		{
			if (__LIB_6__::func_903(Local_1121[8 /*2*/]))
			{
				__LIB_6__::func_900(Local_1121[8 /*2*/], 0, 0);
			}
		}
		else if (iParam1 == 3)
		{
			if (__LIB_6__::func_903(Local_1121[7 /*2*/]))
			{
				__LIB_6__::func_900(Local_1121[7 /*2*/], 0, 0);
			}
		}
		if (__LIB_0__::func_75(&(Local_45[iParam1 /*54*/].f_49)))
		{
			__LIB_0__::func_37(&(Local_45[iParam1 /*54*/].f_49));
		}
	}
}

void func_792(var uParam0, int iParam1)
{
	if (!PED::_IS_PED_HOGTIED(Local_45[iParam1 /*54*/]))
	{
		func_1340(uParam0, iParam1);
	}
}

void func_795()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		__LIB_0__::func_325(&(Local_1063[iVar0 /*7*/].f_1));
		iVar0++;
	}
}

void func_796()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		__LIB_0__::func_325(&(Local_1092[iVar0 /*7*/].f_1));
		iVar0++;
	}
}

int func_798()
{
	char* sVar0;
	if (func_207(536870912))
	{
		return 1;
	}
	sVar0 = "script@Story@GNG0@RideToShadyBell";
	sLocal_1062 = sVar0;
	if (!func_207(1073741824 /* Float: 2f */))
	{
		CAM::_0x1B3C2D961F5FC0E1(sVar0);
		func_209(1073741824 /* Float: 2f */);
	}
	else if (CAM::_0xDD0B7C5AE58F721D(sVar0))
	{
		func_209(536870912);
		return 1;
	}
	return 0;
}

bool func_800()
{
	if (!bLocal_39)
	{
		if (AUDIO::PREPARE_MUSIC_EVENT("RGNG01_RIDE_START"))
		{
			if (__LIB_0__::func_71(Global_35))
			{
				if (!__LIB_1__::func_923())
				{
					if (__LIB_10__::func_227("RGNG01_RIDE_START", 1))
					{
						AUDIO::_0xAC84686C06184B0D("Ride", "RGNG01_Ride_Scenes");
						bLocal_39 = true;
					}
				}
			}
		}
	}
	else if ((!AUDIO::_0xE600F61F54A444A6() || __LIB_0__::func_27(iLocal_14, 256)) || (AUDIO::_0xE600F61F54A444A6() && AUDIO::GET_MUSIC_PLAYTIME() >= 316000))
	{
		AUDIO::_0x9428447DED71FC7E("RGNG01_Ride_Scenes");
		bLocal_40 = false;
		return true;
	}
	else
	{
		PED::SET_PED_RESET_FLAG(Global_35, 297, true);
		LAW::_DISABLE_GUARD_ZONE("CALIGA_HALL");
		if (!__LIB_0__::func_75(&uLocal_1192))
		{
			if (!__LIB_0__::func_396(Global_35))
			{
				__LIB_1__::func_148(&uLocal_1192);
			}
		}
		else if (__LIB_0__::func_396(Global_35))
		{
			__LIB_0__::func_37(&uLocal_1192);
		}
		else if (__LIB_0__::func_264(&uLocal_1192) > 30f)
		{
			__LIB_10__::func_227("RGNG01_RIDE_STOP", 0);
			__LIB_1__::func_683(&iLocal_14, 256);
		}
		if (!__LIB_0__::func_48(Global_35, PED::_GET_LAST_MOUNT(Global_35), 8f, 1))
		{
			__LIB_10__::func_227("RGNG01_RIDE_STOP", 0);
			__LIB_1__::func_683(&iLocal_14, 256);
		}
		if ((PED::IS_PED_SHOOTING(Global_35) || func_1350(30f)) || PED::IS_PED_IN_COMBAT(Global_35, 0))
		{
			__LIB_10__::func_227("RGNG01_RIDE_STOP", 0);
			__LIB_1__::func_683(&iLocal_14, 256);
		}
	}
	return false;
}

bool func_802(var uParam0, struct<2> Param1, bool bParam3)
{
	if (!func_225(Param1.f_1))
	{
		__LIB_5__::func_20(0, 0);
		if (__LIB_12__::func_876(uParam0, Param1, 0))
		{
			if (bParam3)
			{
				func_226(Param1.f_1);
			}
			return true;
		}
	}
	return false;
}

int func_803(var uParam0)
{
	char* sVar0;
	char* sVar1;
	if (bLocal_991)
	{
		if (!__LIB_0__::func_393(Global_35, iLocal_1218[3], 0, 1))
		{
			bLocal_991 = false;
			func_212(16777216);
		}
	}
	else if (__LIB_0__::func_393(Global_35, iLocal_1218[3], 0, 1))
	{
		bLocal_991 = true;
		func_212(16777216);
	}
	if (bLocal_991 && __LIB_0__::func_266(Global_35, 1897.48f, -1863.878f, 46.33923f, 2.06f, 1, 1))
	{
		__LIB_13__::func_847();
	}
	if (func_207(16777216))
	{
		return 1;
	}
	sVar0 = "1-DayVersion";
	sVar1 = "3-DayVersion-ALT";
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_206.f_348))
	{
		return 0;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_206.f_348, true, false))
	{
		return 0;
	}
	if (bLocal_991)
	{
		if (ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_206.f_348, sVar1))
		{
			ANIMSCENE::_0xAE6ADA8FE7E84ACC(uParam0->f_206.f_348, sVar1);
		}
		if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_206.f_348, sVar0))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_206.f_348, sVar0);
		}
		if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_206.f_348, sVar0))
		{
			return 0;
		}
		func_209(16777216);
		return 1;
	}
	return 0;
}

void func_804(var uParam0)
{
	if (!func_207(2048))
	{
		if (!__LIB_0__::func_75(&uLocal_1180))
		{
			__LIB_1__::func_148(&uLocal_1180);
		}
		else if (((__LIB_0__::func_264(&uLocal_1180) > 45f && !func_207(32)) && __LIB_0__::func_266(Global_35, vLocal_1206, 40f, 1, 1)) && !INTERIOR::IS_COLLISION_MARKED_OUTSIDE(Global_36))
		{
			func_1353();
			__LIB_12__::func_883(uParam0, "GANG02_INVESTIUP", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			func_209(2048);
			__LIB_0__::func_37(&uLocal_1180);
		}
	}
	else
	{
		func_1354();
	}
}

void func_805()
{
	int iVar0;
	iVar0 = iLocal_1159;
	iVar0++;
	iLocal_1159 = iVar0;
	if (iLocal_1159 == 3)
	{
		iLocal_1159 = (iVar0 - 1);
	}
}

void func_806(var uParam0)
{
	if (!func_207(32))
	{
		if (!__LIB_0__::func_75(&uLocal_1162))
		{
			__LIB_1__::func_148(&uLocal_1162);
		}
		else
		{
			if (!func_225(512))
			{
				if (__LIB_0__::func_264(&uLocal_1162) > 1f && !__LIB_6__::func_904())
				{
					func_802(uParam0, Local_1121[3 /*2*/], 1);
				}
			}
			if (!func_225(1024))
			{
				if (__LIB_0__::func_264(&uLocal_1162) > 12f)
				{
					func_802(uParam0, Local_1121[4 /*2*/], 1);
				}
			}
			if (!func_225(2048))
			{
				if (__LIB_0__::func_264(&uLocal_1162) > 32f)
				{
					func_802(uParam0, Local_1121[5 /*2*/], 1);
				}
			}
			if (!func_225(4096))
			{
				if (__LIB_0__::func_264(&uLocal_1162) > 46f)
				{
					if (func_802(uParam0, Local_1121[6 /*2*/], 1))
					{
						__LIB_0__::func_37(&uLocal_1162);
					}
				}
			}
		}
	}
}

void func_808(vector3 vParam0, float fParam3)
{
	if (iLocal_578 == 0)
	{
		iLocal_578 = PED::_GET_LAST_MOUNT(Global_35);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_578) && __LIB_0__::func_266(iLocal_578, vLocal_1206, 40f, 1, 1))
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_578, vParam0, fParam3, true, false, true);
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_578, 48, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_578, true);
	}
}

bool func_811()
{
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_1153))
	{
		if (TASK::_IS_SCENARIO_POINT_ACTIVE(iLocal_1153))
		{
			TASK::_SET_SCENARIO_POINT_ACTIVE(iLocal_1153, false);
			return true;
		}
	}
	return false;
}

void func_813()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Local_45[iVar0 /*54*/].f_18 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_45[iVar0 /*54*/]);
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_45[iVar0 /*54*/].f_18, "GANG02_BLIP_PINK");
		MAP::_BLIP_SET_MODIFIER(Local_45[iVar0 /*54*/].f_18, -1186550032);
		MAP::_BLIP_SET_MODIFIER(Local_45[iVar0 /*54*/].f_18, -1118229366);
		iVar0++;
	}
}

void func_814()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!Local_45[iVar0 /*54*/].f_53)
		{
			if ((ENTITY::IS_ENTITY_ON_SCREEN(Local_45[iVar0 /*54*/]) && !ENTITY::IS_ENTITY_OCCLUDED(Local_45[iVar0 /*54*/])) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Global_35, Local_45[iVar0 /*54*/], 17))
			{
				if (MAP::DOES_BLIP_EXIST(Local_45[iVar0 /*54*/].f_18))
				{
					MAP::_BLIP_REMOVE_MODIFIER(Local_45[iVar0 /*54*/].f_18, -1186550032);
					Local_45[iVar0 /*54*/].f_53 = 1;
				}
			}
			if (func_207(8192))
			{
				if (!__LIB_0__::func_75(&uLocal_1183))
				{
					__LIB_1__::func_148(&uLocal_1183);
				}
				else if (__LIB_0__::func_264(&uLocal_1183) > 0.5f)
				{
					MAP::_BLIP_REMOVE_MODIFIER(Local_45[iVar0 /*54*/].f_18, -1186550032);
					Local_45[iVar0 /*54*/].f_53 = 1;
				}
			}
			if (!func_207(8192))
			{
				if (!__LIB_0__::func_75(&uLocal_1183))
				{
					__LIB_1__::func_148(&uLocal_1183);
				}
				else if (__LIB_0__::func_264(&uLocal_1183) > 0.4f)
				{
					MAP::_BLIP_REMOVE_MODIFIER(Local_45[iVar0 /*54*/].f_18, -1186550032);
					Local_45[iVar0 /*54*/].f_53 = 1;
				}
				if (iVar0 == 2 || iVar0 == 3)
				{
					if (!__LIB_0__::func_75(&uLocal_1183))
					{
						if (iLocal_306 == 1)
						{
							__LIB_1__::func_148(&uLocal_1183);
						}
					}
					else if (__LIB_0__::func_264(&uLocal_1183) > 1f)
					{
						if (MAP::DOES_BLIP_EXIST(Local_45[iVar0 /*54*/].f_18))
						{
							MAP::_BLIP_REMOVE_MODIFIER(Local_45[iVar0 /*54*/].f_18, -1186550032);
							Local_45[iVar0 /*54*/].f_53 = 1;
						}
						__LIB_0__::func_37(&uLocal_1183);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_815(var uParam0)
{
	if (!func_207(4096))
	{
		if (!__LIB_0__::func_75(&uLocal_1180))
		{
			__LIB_1__::func_148(&uLocal_1180);
		}
		else if (((__LIB_0__::func_264(&uLocal_1180) > 0f && !func_207(32)) && __LIB_0__::func_266(Global_35, vLocal_1206, 40f, 1, 1)) && !INTERIOR::IS_COLLISION_MARKED_OUTSIDE(Global_36))
		{
			func_1359();
			__LIB_12__::func_883(uParam0, "GANG02_DOWNSTAIRSOBJ", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			func_209(4096);
			__LIB_0__::func_37(&uLocal_1180);
		}
	}
	else
	{
		func_1360();
	}
}

void func_816()
{
	if (!MAP::DOES_BLIP_EXIST(iLocal_1205))
	{
		iLocal_1205 = __LIB_4__::func_983(408396114, vLocal_1215, 1);
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_1205, "GANG02_BLIP_LET");
	}
}

void func_817()
{
	int iVar0;
	int iVar1;
	float fVar2;
	if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_1061))
	{
		TASK::REQUEST_WAYPOINT_RECORDING(sLocal_1061);
	}
	switch (iLocal_15)
	{
		case 0:
			StringCopy(&Local_1025, "camera_treatments", 64);
			StringCopy(&(Local_1025.f_8), "RPRSN1_PULL_OUT_TREATMENT_REQUEST", 64);
			CAM::_0x6A4D224FC7643941(&Local_1025);
			StringCopy(&Local_1041, "camera_treatments", 64);
			StringCopy(&(Local_1041.f_8), "GENERIC_CME_PULL_OUT_TREATMENT_REQUEST", 64);
			CAM::_0x6A4D224FC7643941(&Local_1041);
			iLocal_15 = 1;
			break;
		case 1:
			func_1362();
			if (PED::IS_PED_ON_FOOT(Global_35))
			{
				fVar2 = 200f;
			}
			else
			{
				fVar2 = 100f;
			}
			if (!__LIB_0__::func_266(Global_35, vLocal_1206, fVar2, 1, 1))
			{
				if (__LIB_0__::func_71(Global_35))
				{
					iLocal_578 = PED::_GET_LAST_MOUNT(Global_35);
				}
				iLocal_15 = 2;
			}
			break;
		case 2:
			if (__LIB_0__::func_71(Global_35))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_578))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_578, 1.75f);
				}
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.75f);
			}
			if (CAM::_0xDD0B7C5AE58F721D(&Local_1025))
			{
				CAM::_0xB8B207C34285E978(&Local_1025);
				STREAMING::PREFETCH_SRL("script@cme@GNG0_CME_SHOT0");
				STREAMING::_0xEF1A8A484118735E();
				STREAMING::_0xAE00387E53B1E9FC();
				HUD::_HIDE_HUD_COMPONENT(724769646);
				CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_EXIT"), false);
				__LIB_1__::func_148(&uLocal_1057);
				iLocal_15 = 3;
			}
			break;
		case 3:
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_EXIT"), false);
			if (__LIB_0__::func_71(Global_35))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_578))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_578, 1.75f);
				}
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.75f);
			}
			if (__LIB_0__::func_264(&uLocal_1057) >= 3f)
			{
				__LIB_2__::func_426(&(Local_45[0 /*54*/]));
				__LIB_2__::func_426(&(Local_45[3 /*54*/]));
				__LIB_2__::func_426(&(Local_45[1 /*54*/]));
				__LIB_2__::func_426(&(Local_45[2 /*54*/]));
				func_1363(0);
				iLocal_15 = 4;
			}
			break;
		case 4:
			func_1364(1, 1);
			CAM::_0x702B75DC9D3EDE56(true);
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			iVar0 = CAM::_0xEA113BF9B0C0C5D7("script@Story@GNG0@RideToLakay", "SHOT0", 5);
			iVar1 = CAM::_0x465F04F68AD38197("script@Story@GNG0@RideToLakay", "SHOT0", 5);
			if (AUDIO::_0xFFE9C53DEEA3DB0B((iVar0 - __LIB_3__::func_135(&uLocal_1057)), 1253167713, 1969.8f, -1542.5f, 53.1f, STREAMING::IS_SRL_LOADED(), (iVar1 - __LIB_3__::func_135(&uLocal_1057))))
			{
				TASK::TASK_CLEAR_LOOK_AT(Global_35);
				func_1363(1);
				iLocal_15 = 5;
			}
			else
			{
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Global_35, 0))
				{
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Global_35, 1.5f, 0, -1082130432 /* Float: -1f */, 0);
				}
				Jump @1410; //curOff = 628
				func_1364(1, 1);
				CAM::_0x702B75DC9D3EDE56(true);
				CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
				iVar0 = CAM::_0xEA113BF9B0C0C5D7("script@Story@GNG0@RideToLakay", "SHOT2", 5);
				iVar1 = CAM::_0x465F04F68AD38197("script@Story@GNG0@RideToLakay", "SHOT2", 5);
				if (AUDIO::_0xFFE9C53DEEA3DB0B((iVar0 - __LIB_3__::func_135(&uLocal_1057)), 512053909, 2061.1f, -1053f, 44.2f, STREAMING::IS_SRL_LOADED(), (iVar1 - __LIB_3__::func_135(&uLocal_1057))))
				{
					TASK::TASK_CLEAR_LOOK_AT(Global_35);
					func_1363(2);
					MISC::_SET_WEATHER_TYPE(joaat("SHOWER"), true, true, true, 30f, false);
					iLocal_15 = 6;
				}
				else
				{
					if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Global_35, 0))
					{
						TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Global_35, 1.5f, 0, -1082130432 /* Float: -1f */, 0);
					}
					Jump @1410; //curOff = 800
					func_1364(1, 1);
					CAM::_0x702B75DC9D3EDE56(true);
					CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
					iVar0 = CAM::_0xEA113BF9B0C0C5D7("script@Story@GNG0@RideToLakay", "SHOT3", 5);
					iVar1 = CAM::_0x465F04F68AD38197("script@Story@GNG0@RideToLakay", "SHOT3", 5);
					if (AUDIO::_0xFFE9C53DEEA3DB0B((iVar0 - __LIB_3__::func_135(&uLocal_1057)), -338825472, 2455.7f, -660f, 51.2f, STREAMING::IS_SRL_LOADED(), (iVar1 - __LIB_3__::func_135(&uLocal_1057))))
					{
						TASK::TASK_CLEAR_LOOK_AT(Global_35);
						func_1363(3);
						iLocal_15 = 7;
					}
					if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Global_35, 0))
					{
						TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Global_35, 1.5f, 0, -1082130432 /* Float: -1f */, 0);
					}
					Jump @1410; //curOff = 951
					func_1364(1, 1);
					CAM::_0x702B75DC9D3EDE56(true);
					CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
					iVar0 = CAM::_0xEA113BF9B0C0C5D7("script@Story@GNG0@RideToLakay", "SHOT5", 5);
					iVar1 = CAM::_0x465F04F68AD38197("script@Story@GNG0@RideToLakay", "SHOT5", 5);
					if (!CAM::_0x927B810E43E99932(&Local_1041))
					{
						if (CAM::_0xDD0B7C5AE58F721D(&Local_1041))
						{
							CAM::_0xB8B207C34285E978(&Local_1041);
						}
					}
					if (AUDIO::_0xFFE9C53DEEA3DB0B((iVar0 - __LIB_3__::func_135(&uLocal_1057)), 0, 2420.3f, -665.1f, 44.3f, true, (iVar1 - __LIB_3__::func_135(&uLocal_1057))))
					{
						HUD::_HIDE_HUD_COMPONENT(724769646);
						TASK::TASK_CLEAR_LOOK_AT(Global_35);
						CAM::_0xA54D643D0773EB65("script@Story@GNG0@RideToLakay", "SHOT5", 5);
						CAM::_0x702B75DC9D3EDE56(false);
						func_1365();
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_578, 2416.412f, -664.8716f, 41.5513f, 78.6208f, true, false, true);
						ENTITY::_0x9587913B9E772D29(iLocal_578, 0);
						__LIB_0__::func_489(0, 0);
						PLAYER::_0x0869D499A7848309(PLAYER::GET_PLAYER_INDEX(), sLocal_1061, 1.5f, 1.5f, 1.5f, 0, 0, -1082130432 /* Float: -1f */);
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_578))
						{
							PED::FORCE_PED_MOTION_STATE(iLocal_578, -1415276238, true, 0, false);
							PED::_0x2208438012482A1A(iLocal_578, false, false);
						}
						PED::_0x2208438012482A1A(Global_35, false, false);
						__LIB_1__::func_148(&uLocal_1057);
						AUDIO::_0x43037ABFE214A851();
						STREAMING::END_SRL();
						__LIB_4__::func_509(0);
						func_421();
						PLAYER::_0x908D4B72854C8F62(PLAYER::GET_PLAYER_INDEX());
						TASK::CLEAR_PED_TASKS(Global_35, true, false);
						iLocal_15 = 8;
					}
					if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Global_35, 0))
					{
						TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Global_35, 1.5f, 0, -1082130432 /* Float: -1f */, 0);
					}
					Jump @1410; //curOff = 1314
					if (CAM::_0x927B810E43E99932(&Local_1041))
					{
						CAM::_0x0A5A4F1979ABB40E(&Local_1041);
					}
					if (CAM::_0xDD0B7C5AE58F721D(&Local_1041))
					{
						CAM::_0x798BE43C9393632B(&Local_1041);
					}
					func_1364(0, 0);
					CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
					if (__LIB_0__::func_264(&uLocal_1057) >= 0.75f)
					{
						HUD::_DISPLAY_HUD_COMPONENT(724769646);
						__LIB_0__::func_37(&uLocal_1057);
						iLocal_15 = 9;
					}
				}
			}
			default:
				break;
	}
}

bool func_818()
{
	if (__LIB_0__::func_94(Global_35, vLocal_1206, 1) > 230f && !func_1366())
	{
		if (!func_225(131072))
		{
			func_226(131072);
		}
		return true;
	}
	return false;
}

void func_841()
{
	struct<15> Var0;
	int iVar17;
	int iVar18;
	Var0 = Global_35;
	Var0.f_12 = 8;
	Var0.f_8 = 0;
	iVar17 = 0;
	while (iVar17 < 27)
	{
		if (__LIB_0__::func_31(iVar17))
		{
			iVar18 = __LIB_0__::func_271(iVar17);
			if (ENTITY::DOES_ENTITY_EXIST(iVar18))
			{
				Var0.f_14 = iVar18;
				Var0.f_3 = iVar18;
				MISC::_0x88BC5F4AEF77FC4E(&Var0, 17);
			}
		}
		iVar17++;
	}
	Global_1359489.f_58 = -15;
	__LIB_0__::func_37(&(Global_1359489.f_55));
	if (func_532(joaat("CSTAG_PLAYER_AWAY"), 1))
	{
		func_1376(joaat("CSTAG_PLAYER_AWAY"), 1, 0);
	}
}

int func_848(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (Global_40.f_4283.f_6[iVar0 /*5*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar2 = __LIB_0__::func_910(iParam0);
	iVar3 = __LIB_0__::func_911(iParam0);
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (Global_40.f_4283.f_6[iVar0 /*5*/] == 176656832)
		{
			Global_40.f_4283.f_6[iVar0 /*5*/] = iParam0;
			Global_40.f_4283.f_6[iVar0 /*5*/].f_2 = uParam1;
			Global_40.f_4283.f_6[iVar0 /*5*/].f_3 = iVar3;
			if (iParam3 > 0)
			{
				iVar1 = __LIB_0__::func_23();
				__LIB_1__::func_446(&iVar1, 0, 0, iParam3, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			Global_40.f_4283.f_6[iVar0 /*5*/].f_1 = iVar1;
			Global_40.f_4283.f_6[iVar0 /*5*/].f_4 = iVar2;
			func_1384(iParam0, 1);
			if (__LIB_0__::func_344(iVar2))
			{
				iVar4 = 0;
				while (iVar4 < 60)
				{
					if (Global_40.f_4283.f_6[iVar4 /*5*/].f_4 == iVar2 && Global_40.f_4283.f_6[iVar4 /*5*/] != iParam0)
					{
						func_1386(&(Global_40.f_4283.f_6[iVar4 /*5*/]), 1, 0);
					}
					iVar4++;
				}
			}
			if (bParam5)
			{
				if (bParam6)
				{
					__LIB_0__::func_345(1, iParam0);
				}
				else
				{
					__LIB_0__::func_346(1, iParam0);
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_858()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_1399();
	func_1400();
	func_1401();
	func_1402();
	func_1403();
	__LIB_1__::func_848();
	__LIB_0__::func_376();
}

void func_859(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	func_309(iParam0, 1, 1, -142743235, 1);
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

char* func_862(int iParam0, bool bParam1)
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
		case 14:
			return "COMP_JACK";
		case 16:
			return "COMP_MOLLY_OSHEA";
		case 19:
			return "COMP_SUSAN_GRIMSHAW";
		case 15:
			return "COMP_MARY_BETH";
		case 20:
			return "COMP_KAREN";
		case 22:
			return "COMP_TILLY";
		case 11:
			return "COMP_SADIE";
		case 24:
			return "COMP_CLEET";
		case 25:
			return "COMP_JOE";
		case 26:
			return "COMP_EAGLE_FLIES";
		case 12:
			if ((__LIB_1__::func_25(Global_1835011[59 /*74*/].f_1, 1) || __LIB_1__::func_25(Global_1347702[1 /*49*/].f_15, 1)) || __LIB_1__::func_44(Global_1347702[1 /*49*/].f_15))
			{
				return "COMP_RUFUS";
			}
			else if (func_532(joaat("CSTAG_FLOW_DOG_IN_CAMP_POST"), 1))
			{
				return "COMP_CAIN";
			}
			return "COMP_DOG";
		case 21:
			if (bParam1)
			{
				return "COMP_SWANSON_S";
			}
			else
			{
				return "COMP_SWANSON";
			}
			break;
	}
	return "";
}

void func_893()
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
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_1432(&uVar4, &iVar1, &iVar2, &iVar3)))
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

void func_894(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
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
		func_1436(iParam0, iParam1, fParam3, iParam4);
	}
}

Vector3 func_900(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
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
		bVar10 = func_1445();
		if (VOLUME::_DOES_VOLUME_EXIST(bVar10))
		{
		}
	}
	if (!func_1446(Global_1310720.f_21))
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

struct<54> func_976(int iParam0, vector3 vParam1, float fParam4, int iParam5)
{
	struct<54> Var0;
	Var0.f_20.f_8 = -1;
	Var0.f_20.f_17 = 1097859072;
	Var0.f_20.f_18 = 1000;
	Var0.f_20.f_19 = 1067450368;
	Var0.f_20.f_20 = 5000;
	Var0.f_20.f_21 = 42;
	Var0.f_20.f_22 = 1103626240;
	Var0.f_20.f_23 = 1077936128;
	Var0.f_20.f_24 = 1106247680;
	Var0.f_20.f_25 = 1103101952;
	Var0.f_20.f_26 = 1097859072;
	Var0.f_20.f_27 = 1103626240;
	Var0.f_1 = iParam0;
	Var0.f_5 = { vParam1 };
	Var0.f_15 = fParam4;
	Var0.f_19 = iParam5;
	return Var0;
}

int func_994(var uParam0, int iParam1, int iParam2)
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
		return func_994(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

int func_1002(int iParam0, int iParam1, float fParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	int iVar8;
	switch (uParam3->f_3)
	{
		case 0:
			*uParam3 = __LIB_0__::func_23();
			iVar4 = __LIB_0__::func_23();
			__LIB_0__::func_467(&iVar4, iParam0);
			__LIB_0__::func_468(&iVar4, iParam1);
			__LIB_0__::func_469(&iVar4, 0);
			if (__LIB_1__::func_110(*uParam3, iVar4, 1))
			{
				__LIB_1__::func_446(&iVar4, 0, 0, 0, 1, 0, 0, 0);
			}
			__LIB_4__::func_704(*uParam3, iVar4, &iVar0, &iVar1, &iVar2, &uVar5, &uVar6, &uVar7);
			uParam3->f_11 = ((iVar0 + iVar1 * 60) + iVar2 * 3600);
			uParam3->f_3++;
			break;
		case 1:
			if (fParam2 >= 0.99f || fParam2 == -1f)
			{
				iVar4 = *uParam3;
				__LIB_1__::func_446(&iVar4, uParam3->f_11, 0, 0, 0, 0, 0, 0);
				CLOCK::SET_CLOCK_TIME(__LIB_0__::func_41(iVar4), __LIB_0__::func_42(iVar4), __LIB_0__::func_43(iVar4));
				return 1;
			}
			iVar3 = BUILTIN::ROUND((IntToFloat(uParam3->f_11) * fParam2));
			iVar4 = *uParam3;
			__LIB_1__::func_446(&iVar4, iVar3, 0, 0, 0, 0, 0, 0);
			iVar8 = __LIB_0__::func_23();
			if (__LIB_1__::func_110(iVar4, iVar8, 1))
			{
				CLOCK::SET_CLOCK_TIME(__LIB_0__::func_41(iVar4), __LIB_0__::func_42(iVar4), __LIB_0__::func_43(iVar4));
			}
			else
			{
				CLOCK::SET_CLOCK_TIME(__LIB_0__::func_41(iVar8), __LIB_0__::func_42(iVar8), __LIB_0__::func_43(iVar8));
			}
			if (__LIB_0__::func_40(iVar4) != CLOCK::GET_CLOCK_DAY_OF_MONTH())
			{
				CLOCK::SET_CLOCK_DATE(__LIB_0__::func_40(iVar4), __LIB_0__::func_39(iVar4), __LIB_0__::func_710(iVar4));
			}
			return 0;
		}
int func_1003(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;
	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	__LIB_3__::func_864(iVar0, iParam0, bParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

void func_1016(int iParam0, int iParam1)
{
	Local_45[iParam0 /*54*/].f_19 = iParam1;
}

void func_1019(int iParam0)
{
	func_1521(iParam0, "S_M_M_PINLAW_01^3", Local_45[1 /*54*/]);
	func_1521(iParam0, "S_M_M_PINLAW_01^2", Local_45[0 /*54*/]);
	func_1521(iParam0, "S_M_M_PINLAW_01^1", Local_45[3 /*54*/]);
	func_1521(iParam0, "S_M_M_PINLAW_01", Local_45[2 /*54*/]);
	func_1521(iParam0, "Horse_01^3", Local_262[2 /*10*/]);
	func_1521(iParam0, "Horse_01^2", Local_262[1 /*10*/]);
	func_1521(iParam0, "Horse_01^1", Local_262[0 /*10*/]);
	func_1521(iParam0, "Horse_01", Local_262[3 /*10*/]);
	ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_1231[iParam0 /*16*/], "IS_DAYTIME", true, false);
}

void func_1020(int iParam0)
{
	func_1521(iParam0, "s_m_m_pinlaw_01^1", Local_45[3 /*54*/]);
	func_1521(iParam0, "s_m_m_pinlaw_01", Local_45[2 /*54*/]);
	func_1521(iParam0, "p_book01x", Local_326[0 /*9*/]);
	func_1521(iParam0, "p_book08x", Local_326[1 /*9*/]);
	func_1521(iParam0, "p_cs_book02x", Local_326[2 /*9*/]);
	func_1521(iParam0, "p_cs_book02x^1", Local_326[3 /*9*/]);
	func_1521(iParam0, "p_sketchbook01x", Local_326[4 /*9*/]);
	func_1521(iParam0, "p_sketchbook01x^1", Local_326[5 /*9*/]);
	func_1521(iParam0, "p_sketchbook01x^2", Local_326[6 /*9*/]);
}

void func_1021(int iParam0)
{
	func_1521(iParam0, "s_m_m_pinlaw_01", Local_45[2 /*54*/]);
	func_1521(iParam0, "p_bottle004x", Local_326[11 /*9*/]);
	func_1521(iParam0, "p_bottleJD01x", Local_326[10 /*9*/]);
	func_1521(iParam0, "p_bottletequila01x", Local_326[9 /*9*/]);
	func_1521(iParam0, "p_cs_book02x", Local_326[7 /*9*/]);
	func_1521(iParam0, "p_cs_book02x^1", Local_326[8 /*9*/]);
}

void func_1022(int iParam0)
{
	func_1521(iParam0, "s_m_m_pinlaw_01^1", Local_45[3 /*54*/]);
	func_1521(iParam0, "s_m_m_pinlaw_01", Local_45[2 /*54*/]);
	func_1521(iParam0, "p_book01x", Local_326[0 /*9*/]);
	func_1521(iParam0, "p_book08x", Local_326[1 /*9*/]);
	func_1521(iParam0, "p_cs_book02x", Local_326[2 /*9*/]);
	func_1521(iParam0, "p_cs_book02x^1", Local_326[3 /*9*/]);
	func_1521(iParam0, "p_sketchbook01x", Local_326[4 /*9*/]);
	func_1521(iParam0, "p_sketchbook01x^1", Local_326[5 /*9*/]);
	func_1521(iParam0, "p_sketchbook01x^2", Local_326[6 /*9*/]);
}

void func_1023(int iParam0)
{
	func_1521(iParam0, "s_m_m_pinlaw_01", Local_45[1 /*54*/]);
	func_1521(iParam0, "S_LOOTABLE_MISCCHEST", Local_435[0 /*9*/]);
	func_1521(iParam0, "p_commode02x", Local_435[1 /*9*/]);
	func_1521(iParam0, "p_cs_ledgerSmall01x", Local_435[2 /*9*/]);
	func_1521(iParam0, "p_cs_letter03x", Local_435[3 /*9*/]);
	func_1521(iParam0, "p_cs_letter03x^1", Local_435[4 /*9*/]);
	func_1521(iParam0, "p_cs_letter03x^2", Local_435[5 /*9*/]);
	func_1521(iParam0, "p_cs_purse01x", Local_435[6 /*9*/]);
	func_1521(iParam0, "p_cs_purse01x^1", Local_435[7 /*9*/]);
	func_1521(iParam0, "p_wallet01x", Local_435[8 /*9*/]);
}

void func_1024(int iParam0)
{
	func_1521(iParam0, "s_m_m_pinlaw_01^1", Local_45[3 /*54*/]);
	func_1521(iParam0, "s_m_m_pinlaw_01", Local_45[2 /*54*/]);
	func_1521(iParam0, "p_book01x", Local_326[0 /*9*/]);
	func_1521(iParam0, "p_book08x", Local_326[1 /*9*/]);
	func_1521(iParam0, "p_cs_book02x", Local_326[2 /*9*/]);
	func_1521(iParam0, "p_cs_book02x^1", Local_326[3 /*9*/]);
	func_1521(iParam0, "p_sketchbook01x", Local_326[4 /*9*/]);
	func_1521(iParam0, "p_sketchbook01x^1", Local_326[5 /*9*/]);
	func_1521(iParam0, "p_sketchbook01x^2", Local_326[6 /*9*/]);
}

bool func_1034(int iParam0)
{
	int iVar0;
	int iVar1;
	func_1528(iParam0, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(Global_1357549.f_1866[iVar0], iVar1);
}

bool func_1039(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, float fParam5)
{
	int iVar0;
	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		func_1529(uParam2, 1, iVar0);
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
				if (__LIB_2__::func_973(iParam0, uParam2))
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
				if (__LIB_2__::func_970(iParam0, uParam2))
				{
					*iParam3 = 64;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && __LIB_2__::func_173(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
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
					if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && __LIB_1__::func_328(uParam2, iParam0)) && __LIB_2__::func_832(uParam2, iParam0))
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
				if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && __LIB_1__::func_328(uParam2, iParam0)) && __LIB_2__::func_832(uParam2, iParam0))
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
			if (__LIB_2__::func_833(uParam2, iParam0))
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
					if (__LIB_2__::func_878(iParam0, uParam2))
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

Vector3 func_1102(int iParam0, bool bParam1)
{
	vector3 vVar0;
	switch (iParam0)
	{
		case 0:
			if (!bParam1)
			{
				vVar0 = { 1879.744f, -1854.174f, 41.6863f };
			}
			else
			{
				vVar0 = { 0f, 0f, -101.3f };
			}
			break;
		case 2:
			if (!bParam1)
			{
				vVar0 = { 1884.675f, -1853.983f, 41.45811f };
			}
			else
			{
				vVar0 = { 0f, 0f, -113.3f };
			}
			break;
		case 4:
			if (!bParam1)
			{
				vVar0 = { 1888.32f, -1855.921f, 41.57082f };
			}
			else
			{
				vVar0 = { 0f, 0f, -120.3f };
			}
			break;
		case 6:
			if (!bParam1)
			{
				vVar0 = { 1891.099f, -1858.006f, 42.12434f };
			}
			else
			{
				vVar0 = { 0f, 0f, -121.3f };
			}
			break;
		case 8:
			if (!bParam1)
			{
				vVar0 = { 1893.056f, -1859.526f, 42.15064f };
			}
			else
			{
				vVar0 = { 0f, 0f, -132.3f };
			}
			break;
		case 10:
			if (!bParam1)
			{
				vVar0 = { 1895.957f, -1861.599f, 42.15064f };
			}
			else
			{
				vVar0 = { 0f, 0f, -131.3f };
			}
			break;
		case 12:
			if (!bParam1)
			{
				vVar0 = { 1898.677f, -1863.74f, 42.14861f };
			}
			else
			{
				vVar0 = { 0f, 0f, -133.3f };
			}
			break;
		case 14:
			if (!bParam1)
			{
				vVar0 = { 1901.388f, -1865.479f, 42.14861f };
			}
			else
			{
				vVar0 = { 0f, 0f, -122.3f };
			}
			break;
		case 16:
			if (!bParam1)
			{
				vVar0 = { 1903.652f, -1865.765f, 42.54065f };
			}
			else
			{
				vVar0 = { 0f, 0f, -34.95f };
			}
			break;
		case 18:
			if (!bParam1)
			{
				vVar0 = { 1903.435f, -1864.149f, 43.33448f };
			}
			else
			{
				vVar0 = { 0f, 0f, 20.63f };
			}
			break;
		case 20:
			if (!bParam1)
			{
				vVar0 = { 1902.364f, -1863.058f, 44.336f };
			}
			else
			{
				vVar0 = { 0f, 0f, 80.21f };
			}
			break;
		case 22:
			if (!bParam1)
			{
				vVar0 = { 1900.968f, -1861.909f, 45.53603f };
			}
			else
			{
				vVar0 = { 0f, 0f, 72.19f };
			}
			break;
		case 24:
			if (!bParam1)
			{
				vVar0 = { 1899.014f, -1862.007f, 46.33406f };
			}
			else
			{
				vVar0 = { 0f, 0f, 132.35f };
			}
			break;
		case 26:
			if (!bParam1)
			{
				vVar0 = { 1895.9f, -1861.77f, 46.33459f };
			}
			else
			{
				vVar0 = { 0f, 0f, 22.35f };
			}
			break;
		case 28:
			if (!bParam1)
			{
				vVar0 = { 1884.043f, -1852.868f, 41.41091f };
			}
			else
			{
				vVar0 = { 0f, 0f, -102.3f };
			}
			break;
		case 30:
			if (!bParam1)
			{
				vVar0 = { 1887.113f, -1854.371f, 41.5306f };
			}
			else
			{
				vVar0 = { 0f, 0f, -114.3f };
			}
			break;
		case 32:
			if (!bParam1)
			{
				vVar0 = { 1889.867f, -1856.285f, 41.92447f };
			}
			else
			{
				vVar0 = { 0f, 0f, -121.3f };
			}
			break;
		case 34:
			if (!bParam1)
			{
				vVar0 = { 1892.58f, -1858.572f, 42.15064f };
			}
			else
			{
				vVar0 = { 0f, 0f, -128.3f };
			}
			break;
		case 36:
			if (!bParam1)
			{
				vVar0 = { 1894.991f, -1860.694f, 42.15064f };
			}
			else
			{
				vVar0 = { 0f, 0f, -131.3f };
			}
			break;
		case 38:
			if (!bParam1)
			{
				vVar0 = { 1897.655f, -1862.341f, 42.14982f };
			}
			else
			{
				vVar0 = { 0f, 0f, -132.3f };
			}
			break;
		case 40:
			if (!bParam1)
			{
				vVar0 = { 1898.168f, -1863.06f, 42.14929f };
			}
			else
			{
				vVar0 = { 0f, 0f, -131.3f };
			}
			break;
		case 42:
			if (!bParam1)
			{
				vVar0 = { 1901.554f, -1864.582f, 42.14861f };
			}
			else
			{
				vVar0 = { 0f, 0f, -145.5f };
			}
			break;
		case 44:
			if (!bParam1)
			{
				vVar0 = { 1904.147f, -1865.793f, 42.73549f };
			}
			else
			{
				vVar0 = { 0f, 0f, -40.11f };
			}
			break;
		case 46:
			if (!bParam1)
			{
				vVar0 = { 1903.682f, -1863.84f, 43.33448f };
			}
			else
			{
				vVar0 = { 0f, 0f, 72.19f };
			}
			break;
		case 48:
			if (!bParam1)
			{
				vVar0 = { 1901.578f, -1862.654f, 44.95533f };
			}
			else
			{
				vVar0 = { 0f, 0f, -12.03f };
			}
			break;
		case 50:
			if (!bParam1)
			{
				vVar0 = { 1899.411f, -1861.813f, 46.13339f };
			}
			else
			{
				vVar0 = { 0f, 0f, 89.56f };
			}
			break;
		case 52:
			if (!bParam1)
			{
				vVar0 = { 1897.061f, -1864.315f, 46.3492f };
			}
			else
			{
				vVar0 = { 0f, 0f, 146.68f };
			}
			break;
		case 54:
			if (!bParam1)
			{
				vVar0 = { 1893.766f, -1865.475f, 46.33465f };
			}
			else
			{
				vVar0 = { 0f, 0f, 68.75f };
			}
			break;
		case 56:
			if (!bParam1)
			{
				vVar0 = { 1891.153f, -1865.659f, 46.34258f };
			}
			else
			{
				vVar0 = { 0f, 0f, 125.48f };
			}
			break;
		case 58:
			if (!bParam1)
			{
				vVar0 = { 1890.307f, -1866.25f, 46.34258f };
			}
			else
			{
				vVar0 = { 0f, 0f, 85.94f };
			}
			break;
		case 1:
			if (!bParam1)
			{
				vVar0 = { 1880.829f, -1854.755f, 41.74626f };
			}
			else
			{
				vVar0 = { 0f, 0f, -76.23f };
			}
			break;
		case 3:
			if (!bParam1)
			{
				vVar0 = { 1887.7f, -1854.752f, 41.5467f };
			}
			else
			{
				vVar0 = { 0f, 0f, -113.3f };
			}
			break;
		case 5:
			if (!bParam1)
			{
				vVar0 = { 1888.411f, -1856.663f, 41.60577f };
			}
			else
			{
				vVar0 = { 0f, 0f, -128.3f };
			}
			break;
		case 7:
			if (!bParam1)
			{
				vVar0 = { 1891.389f, -1858.873f, 42.15064f };
			}
			else
			{
				vVar0 = { 0f, 0f, -131.3f };
			}
			break;
		case 9:
			if (!bParam1)
			{
				vVar0 = { 1893.308f, -1860.246f, 42.15064f };
			}
			else
			{
				vVar0 = { 0f, 0f, -132.3f };
			}
			break;
		case 11:
			if (!bParam1)
			{
				vVar0 = { 1896.381f, -1862.419f, 42.15064f };
			}
			else
			{
				vVar0 = { 0f, 0f, -122.84f };
			}
			break;
		case 13:
			if (!bParam1)
			{
				vVar0 = { 1899.105f, -1864.52f, 42.14861f };
			}
			else
			{
				vVar0 = { 0f, 0f, -133.3f };
			}
			break;
		case 15:
			if (!bParam1)
			{
				vVar0 = { 1901.451f, -1866.531f, 42.14861f };
			}
			else
			{
				vVar0 = { 0f, 0f, -109.84f };
			}
			break;
		case 17:
			if (!bParam1)
			{
				vVar0 = { 1904.113f, -1865.498f, 42.73549f };
			}
			else
			{
				vVar0 = { 0f, 0f, -28.65f };
			}
			break;
		case 19:
			if (!bParam1)
			{
				vVar0 = { 1903.462f, -1863.591f, 43.5341f };
			}
			else
			{
				vVar0 = { 0f, 0f, 63.6f };
			}
			break;
		case 21:
			if (!bParam1)
			{
				vVar0 = { 1902.126f, -1862.444f, 44.73381f };
			}
			else
			{
				vVar0 = { 0f, 0f, 11.46f };
			}
			break;
		case 23:
			if (!bParam1)
			{
				vVar0 = { 1900.641f, -1861.223f, 45.91122f };
			}
			else
			{
				vVar0 = { 0f, 0f, 73.91f };
			}
			break;
		case 25:
			if (!bParam1)
			{
				vVar0 = { 1898.198f, -1862.301f, 46.3492f };
			}
			else
			{
				vVar0 = { 0f, 0f, 123.19f };
			}
			break;
		case 27:
			if (!bParam1)
			{
				vVar0 = { 1896.055f, -1860.887f, 46.33459f };
			}
			else
			{
				vVar0 = { 0f, 0f, -19.48f };
			}
			break;
		case 29:
			if (!bParam1)
			{
				vVar0 = { 1880.597f, -1853.63f, 41.62862f };
			}
			else
			{
				vVar0 = { 0f, 0f, -102.3f };
			}
			break;
		case 31:
			if (!bParam1)
			{
				vVar0 = { 1884.744f, -1853.214f, 41.4215f };
			}
			else
			{
				vVar0 = { 0f, 0f, -80.21f };
			}
			break;
		case 33:
			if (!bParam1)
			{
				vVar0 = { 1887.605f, -1855.226f, 41.54967f };
			}
			else
			{
				vVar0 = { 0f, 0f, -124.3f };
			}
			break;
		case 35:
			if (!bParam1)
			{
				vVar0 = { 1890.35f, -1856.902f, 42.12387f };
			}
			else
			{
				vVar0 = { 0f, 0f, -128.3f };
			}
			break;
		case 37:
			if (!bParam1)
			{
				vVar0 = { 1892.99f, -1859.17f, 42.15064f };
			}
			else
			{
				vVar0 = { 0f, 0f, -132.3f };
			}
			break;
		case 39:
			if (!bParam1)
			{
				vVar0 = { 1895.581f, -1861.089f, 42.15064f };
			}
			else
			{
				vVar0 = { 0f, 0f, -131.3f };
			}
			break;
		case 41:
			if (!bParam1)
			{
				vVar0 = { 1899.229f, -1863.274f, 42.14861f };
			}
			else
			{
				vVar0 = { 0f, 0f, -134.3f };
			}
			break;
		case 43:
			if (!bParam1)
			{
				vVar0 = { 1901.935f, -1865.537f, 42.14861f };
			}
			else
			{
				vVar0 = { 0f, 0f, -123.3f };
			}
			break;
		case 45:
			if (!bParam1)
			{
				vVar0 = { 1904.605f, -1865.352f, 42.73549f };
			}
			else
			{
				vVar0 = { 0f, 0f, 0f };
			}
			break;
		case 47:
			if (!bParam1)
			{
				vVar0 = { 1903.181f, -1863.46f, 43.73563f };
			}
			else
			{
				vVar0 = { 0f, 0f, 36.1f };
			}
			break;
		case 49:
			if (!bParam1)
			{
				vVar0 = { 1901.274f, -1862.029f, 45.33444f };
			}
			else
			{
				vVar0 = { 0f, 0f, 22.35f };
			}
			break;
		case 51:
			if (!bParam1)
			{
				vVar0 = { 1898.512f, -1862.285f, 46.3492f };
			}
			else
			{
				vVar0 = { 0f, 0f, 139.23f };
			}
			break;
		case 53:
			if (!bParam1)
			{
				vVar0 = { 1896.075f, -1864.845f, 46.34121f };
			}
			else
			{
				vVar0 = { 0f, 0f, 136.36f };
			}
			break;
		case 55:
			if (!bParam1)
			{
				vVar0 = { 1893.23f, -1864.692f, 46.34258f };
			}
			else
			{
				vVar0 = { 0f, 0f, 106f };
			}
			break;
		case 57:
			if (!bParam1)
			{
				vVar0 = { 1890.603f, -1865.357f, 46.34258f };
			}
			else
			{
				vVar0 = { 0f, 0f, 144.96f };
			}
			break;
		case 59:
			if (!bParam1)
			{
				vVar0 = { 1890.819f, -1866.22f, 46.34258f };
			}
			else
			{
				vVar0 = { 0f, 0f, 176.65f };
			}
			break;
	}
	return vVar0;
}

void func_1133(var uParam0)
{
	int iVar0;
	func_808(1850.552f, -1885.153f, 40.452f, 297.6524f);
	__LIB_3__::func_319(Local_1231[0 /*16*/]);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (__LIB_0__::func_71(Local_45[iVar0 /*54*/]))
		{
			__LIB_6__::func_891(Local_45[iVar0 /*54*/]);
			PED::_0xE0B61ED8BB37712F(Local_45[iVar0 /*54*/]);
			AITRANSPORT::_0x8886D83A430537FD(Local_45[iVar0 /*54*/], 0);
		}
		iVar0++;
	}
}

void func_1135(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (__LIB_0__::func_71(Local_45[iVar0 /*54*/]))
		{
			__LIB_6__::func_891(Local_45[iVar0 /*54*/]);
			PED::_0xE0B61ED8BB37712F(Local_45[iVar0 /*54*/]);
			AITRANSPORT::_0x8886D83A430537FD(Local_45[iVar0 /*54*/], 0);
		}
		iVar0++;
	}
	if (!func_207(8192))
	{
		if (!PED::_GET_PED_CROUCH_MOVEMENT(Global_35))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(Global_35, true, 0, false);
		}
	}
	else
	{
		PED::_0x411189E51B8020BA(Global_35, "Cautious");
		if (PED::_GET_PED_BLACKBOARD_FLOAT(Global_35, "stealth") != 1f)
		{
			PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "stealth", 1f, -1);
		}
		if (PED::_GET_PED_CROUCH_MOVEMENT(Global_35))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(Global_35, true, 0, false);
		}
	}
	if (!bLocal_990)
	{
		if (__LIB_13__::func_218(uParam0, Global_35, 0, 0, 1, 1))
		{
			PED::_0x2208438012482A1A(Global_35, false, false);
			bLocal_990 = true;
		}
	}
}

void func_1266(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
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
		func_1723();
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

void func_1268(var uParam0)
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
			func_1731(iVar1, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_1731(iVar3, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_1269(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if ((__LIB_0__::func_84(uParam0, 268435456) && !__LIB_0__::func_86(__LIB_12__::func_720(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { __LIB_12__::func_720(uParam0) };
			func_1731(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

void func_1287()
{
	__LIB_1__::func_473(Local_45[0 /*54*/], joaat("WORLD_HUMAN_SMOKE"), -1, 0, joaat("WORLD_HUMAN_SMOKE_MALE_A"), -1082130432 /* Float: -1f */);
	iLocal_303 = 0;
}

void func_1288()
{
	__LIB_1__::func_473(Local_45[2 /*54*/], joaat("WORLD_HUMAN_INSPECT"), -1, 0, joaat("WORLD_HUMAN_INSPECT_MALE_B"), -1082130432 /* Float: -1f */);
	iLocal_305 = 0;
}

void func_1289()
{
	TASK::CLEAR_PED_TASKS(Local_45[1 /*54*/], true, false);
	iLocal_304 = 0;
}

void func_1290()
{
	__LIB_1__::func_473(Local_45[3 /*54*/], joaat("WORLD_HUMAN_INSPECT"), -1, 0, joaat("WORLD_HUMAN_INSPECT_MALE_B"), -1082130432 /* Float: -1f */);
	iLocal_306 = 0;
}

void func_1339(int iParam0)
{
	ENTITY::_0x18FF3110CF47115D(Local_45[iParam0 /*54*/], 1, 0);
	func_1016(iParam0, 3);
}

void func_1340(var uParam0, int iParam1)
{
	int iVar0;
	if (MAP::DOES_BLIP_EXIST(Local_45[iParam1 /*54*/].f_18))
	{
		MAP::_BLIP_REMOVE_MODIFIER(Local_45[iParam1 /*54*/].f_18, -1186550032);
		MAP::_BLIP_REMOVE_MODIFIER(Local_45[iParam1 /*54*/].f_18, -1118229366);
	}
	PED::SET_PED_FLEE_ATTRIBUTES(Local_45[iParam1 /*54*/], 512, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_45[iParam1 /*54*/], 5, true);
	PED::REMOVE_PED_DEFENSIVE_AREA(Local_45[iParam1 /*54*/], false);
	TASK::TASK_CLEAR_LOOK_AT(Local_45[iParam1 /*54*/]);
	PED::REGISTER_TARGET(Local_45[iParam1 /*54*/], Global_35, 0);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_COMBAT_PED(0, Global_35, 16384, 0);
	TASK::CLOSE_SEQUENCE_TASK(iVar0);
	TASK::TASK_PERFORM_SEQUENCE(Local_45[iParam1 /*54*/], iVar0);
	TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	PED::_0x2208438012482A1A(Local_45[iParam1 /*54*/], false, false);
	if (iParam1 == 3 || iParam1 == 2)
	{
		__LIB_6__::func_900("GNG0_IG1RLTR", 0, 0);
		__LIB_3__::func_319(Local_1231[5 /*16*/]);
	}
	func_1016(iParam1, 2);
}

void func_1341()
{
	STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("RGNG02"), joaat("RGNG02_SBELLEUNDETECTED"), 1);
}

bool func_1342(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;
	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam1->f_5)
	{
		func_1529(uParam1, 0, iVar0);
	}
	if (fParam3 > 0f)
	{
		uParam1->f_12 = fParam3;
	}
	else
	{
		uParam1->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, false, false));
	}
	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!uParam1->f_1 & 2 != 0)
			{
				if (__LIB_1__::func_331(uParam1, 4000))
				{
					if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *uParam1 & 128 != 0, 0, *uParam1 & 256 != 0) && __LIB_1__::func_328(uParam1, iParam0)) && __LIB_2__::func_832(uParam1, iParam0))
					{
						__LIB_0__::func_11();
						*uParam2 = 2;
						__LIB_2__::func_831(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!uParam1->f_1 & 2 != 0)
		{
			if (uParam1->f_12 < 4f)
			{
				if (__LIB_1__::func_331(uParam1, 4000))
				{
					if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *uParam1 & 128 != 0, 1, *uParam1 & 256 != 0) && __LIB_1__::func_328(uParam1, iParam0)) && __LIB_2__::func_832(uParam1, iParam0))
					{
						__LIB_0__::func_11();
						*uParam2 = 2;
						__LIB_2__::func_831(iParam0, uParam1, *uParam2);
						return true;
					}
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*uParam1 & 131072 == 0)
						{
							if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
							{
								__LIB_0__::func_11();
								*uParam2 = 2;
								__LIB_2__::func_831(iParam0, uParam1, *uParam2);
								return true;
							}
						}
					}
				}
			}
			else if (Global_1935630.f_41 != 0)
			{
				if (Global_1935630.f_40 == 0)
				{
					if (*uParam1 & 131072 == 0)
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
						{
							__LIB_0__::func_11();
							*uParam2 = 2;
							__LIB_2__::func_831(iParam0, uParam1, *uParam2);
							return true;
						}
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*uParam1 & 131072 == 0)
				{
					if (__LIB_1__::func_330())
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_42))
						{
							__LIB_0__::func_11();
							*uParam2 = 2;
							__LIB_2__::func_831(iParam0, uParam1, *uParam2);
							return true;
						}
					}
				}
			}
		}
		if (Global_1935630.f_25)
		{
			if (__LIB_1__::func_395(uParam1, 1065353216 /* Float: 1f */))
			{
				if (!uParam1->f_1 & 4 != 0)
				{
					if (__LIB_2__::func_875(Global_35, iParam0, uParam1))
					{
						__LIB_0__::func_11();
						*uParam2 = 4;
						__LIB_2__::func_831(iParam0, uParam1, *uParam2);
						return true;
					}
				}
				if (!uParam1->f_1 & 256 != 0)
				{
					if (__LIB_2__::func_876(Global_35, iParam0, uParam1))
					{
						__LIB_0__::func_11();
						*uParam2 = 256;
						__LIB_2__::func_831(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!uParam1->f_1 & 131072 != 0)
		{
			if (__LIB_6__::func_913(iParam0, uParam1))
			{
				__LIB_0__::func_11();
				*uParam2 = 131072;
				__LIB_2__::func_831(iParam0, uParam1, *uParam2);
				return true;
			}
		}
		if (*uParam1 & 4 != 0)
		{
			if (__LIB_4__::func_138(iParam0, uParam1))
			{
				__LIB_0__::func_11();
				*uParam2 = 262144;
				__LIB_2__::func_831(iParam0, uParam1, *uParam2);
				return true;
			}
		}
	}
	return false;
}

void func_1344(var uParam0)
{
	switch (iLocal_303)
	{
		case 0:
			__LIB_0__::func_11();
			break;
	}
}

void func_1345(var uParam0)
{
	switch (iLocal_305)
	{
		case 0:
			func_1802();
			break;
		case 1:
			func_1803();
			break;
		case 2:
			func_1804();
			break;
		case 3:
			func_1805();
			break;
	}
}

void func_1346(var uParam0)
{
	switch (iLocal_304)
	{
		case 0:
			func_1806();
			break;
		case 1:
			func_1807();
			break;
		case 2:
			func_1808();
			break;
	}
}

void func_1348(var uParam0)
{
	switch (iLocal_306)
	{
		case 0:
			func_1810();
			break;
		case 1:
			func_1811();
			break;
		case 2:
			func_1812();
			break;
		case 3:
			func_1813();
			break;
	}
}

bool func_1350(float fParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vVar0 = { Global_36 };
	vVar3 = { vVar0 };
	vVar6 = { vVar3 };
	vVar3.x = (vVar3.x - fParam0);
	vVar3.f_1 = (vVar3.y - fParam0);
	vVar3.f_2 = (vVar3.z - fParam0);
	vVar6.x = (vVar6.x + fParam0);
	vVar6.f_1 = (vVar6.y + fParam0);
	vVar6.f_2 = (vVar6.z + fParam0);
	if (MISC::IS_PROJECTILE_IN_AREA(vVar3, vVar6, true))
	{
		return true;
	}
	return false;
}

void func_1353()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MAP::DOES_BLIP_EXIST(Local_1063[iVar0 /*7*/].f_1))
		{
			if (VOLUME::_DOES_VOLUME_EXIST(Local_1063[iVar0 /*7*/]))
			{
				Local_1063[iVar0 /*7*/].f_1 = MAP::_0xA6EF0C54A3443E70(1247852480, Local_1063[iVar0 /*7*/]);
			}
		}
		iVar0++;
	}
}

void func_1354()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!Local_1063[iVar0 /*7*/].f_5 && iVar0 != 0)
		{
			if (!__LIB_0__::func_75(&(Local_1063[iVar0 /*7*/].f_2)))
			{
				if (__LIB_0__::func_393(Global_35, Local_1063[iVar0 /*7*/], 0, 1))
				{
					__LIB_1__::func_148(&(Local_1063[iVar0 /*7*/].f_2));
				}
			}
			else if (__LIB_0__::func_33(&(Local_1063[iVar0 /*7*/].f_2)))
			{
				if (__LIB_0__::func_393(Global_35, Local_1063[iVar0 /*7*/], 0, 1))
				{
					__LIB_2__::func_112(&(Local_1063[iVar0 /*7*/].f_2));
				}
			}
			else if (__LIB_0__::func_393(Global_35, Local_1063[iVar0 /*7*/], 0, 1))
			{
				if (__LIB_0__::func_264(&(Local_1063[iVar0 /*7*/].f_2)) > Local_1063[iVar0 /*7*/].f_6)
				{
					if (MAP::DOES_BLIP_EXIST(Local_1063[iVar0 /*7*/].f_1))
					{
						MAP::_BLIP_SET_MODIFIER(Local_1063[iVar0 /*7*/].f_1, -1269631044);
						__LIB_0__::func_37(&(Local_1063[iVar0 /*7*/].f_2));
						Local_1063[iVar0 /*7*/].f_5 = 1;
					}
				}
			}
			else if (!__LIB_0__::func_33(&(Local_1063[iVar0 /*7*/].f_2)))
			{
				__LIB_2__::func_113(&(Local_1063[iVar0 /*7*/].f_2));
			}
		}
		iVar0++;
	}
}

void func_1359()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MAP::DOES_BLIP_EXIST(Local_1092[iVar0 /*7*/].f_1))
		{
			if (VOLUME::_DOES_VOLUME_EXIST(Local_1092[iVar0 /*7*/]))
			{
				Local_1092[iVar0 /*7*/].f_1 = MAP::_0xA6EF0C54A3443E70(1247852480, Local_1092[iVar0 /*7*/]);
			}
		}
		iVar0++;
	}
}

void func_1360()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!Local_1092[iVar0 /*7*/].f_5 && iVar0 != 0)
		{
			if (!__LIB_0__::func_75(&(Local_1092[iVar0 /*7*/].f_2)))
			{
				if (__LIB_0__::func_393(Global_35, Local_1092[iVar0 /*7*/], 0, 1))
				{
					__LIB_1__::func_148(&(Local_1092[iVar0 /*7*/].f_2));
				}
			}
			else if (__LIB_0__::func_33(&(Local_1092[iVar0 /*7*/].f_2)))
			{
				if (__LIB_0__::func_393(Global_35, Local_1092[iVar0 /*7*/], 0, 1))
				{
					__LIB_2__::func_112(&(Local_1092[iVar0 /*7*/].f_2));
				}
			}
			else if (__LIB_0__::func_393(Global_35, Local_1092[iVar0 /*7*/], 0, 1))
			{
				if (__LIB_0__::func_264(&(Local_1092[iVar0 /*7*/].f_2)) > Local_1092[iVar0 /*7*/].f_6)
				{
					if (MAP::DOES_BLIP_EXIST(Local_1092[iVar0 /*7*/].f_1))
					{
						MAP::_BLIP_SET_MODIFIER(Local_1092[iVar0 /*7*/].f_1, -1269631044);
						__LIB_0__::func_37(&(Local_1092[iVar0 /*7*/].f_2));
						Local_1092[iVar0 /*7*/].f_5 = 1;
					}
				}
			}
			else if (!__LIB_0__::func_33(&(Local_1092[iVar0 /*7*/].f_2)))
			{
				__LIB_2__::func_113(&(Local_1092[iVar0 /*7*/].f_2));
			}
		}
		iVar0++;
	}
}

int func_1362()
{
	char* sVar0;
	if (func_207(67108864))
	{
		return 1;
	}
	sVar0 = "script@Story@GNG0@RideToLakay";
	sLocal_1060 = sVar0;
	if (!func_207(134217728))
	{
		CAM::_0x1B3C2D961F5FC0E1(sVar0);
		func_209(134217728);
	}
	else if (CAM::_0xDD0B7C5AE58F721D(sVar0))
	{
		func_209(67108864);
		return 1;
	}
	return 0;
}

void func_1363(int iParam0)
{
	func_1365();
	switch (iParam0)
	{
		case 0:
			if (CAM::_0x927B810E43E99932(&Local_1025))
			{
				CAM::_0x0A5A4F1979ABB40E(&Local_1025);
			}
			if (CAM::_0xDD0B7C5AE58F721D(&Local_1025))
			{
				CAM::_0x798BE43C9393632B(&Local_1025);
			}
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_578, 1807.671f, -1801.686f, 47.6587f, 50.3874f, true, false, true);
			ENTITY::_0x9587913B9E772D29(iLocal_578, 0);
			PLAYER::_0x0869D499A7848309(PLAYER::GET_PLAYER_INDEX(), sLocal_1061, 1.75f, 1.75f, 1.5f, 0, 0, -1082130432 /* Float: -1f */);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_578))
			{
				PED::FORCE_PED_MOTION_STATE(iLocal_578, -1415276238, true, 0, false);
				PED::_0x2208438012482A1A(iLocal_578, false, false);
			}
			PED::_0x2208438012482A1A(Global_35, false, false);
			AUDIO::_0x5E3CCF03995388B5(1905851010, 1763.4f, -1769f, 52.1f);
			__LIB_4__::func_509(1);
			CAM::_0xBC016635D6A73B31("script@Story@GNG0@RideToLakay", "SHOT0", 5);
			CLOCK::SET_CLOCK_TIME(6, 6, 0);
			STREAMING::END_SRL();
			STREAMING::PREFETCH_SRL("script@cme@GNG0_CME_SHOT2");
			STREAMING::_0xEF1A8A484118735E();
			STREAMING::_0xAE00387E53B1E9FC();
			break;
		case 1:
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_578, 1976.16f, -1528.236f, 42.3639f, 317.4283f, true, false, true);
			ENTITY::_0x9587913B9E772D29(iLocal_578, 0);
			PLAYER::_0x0869D499A7848309(PLAYER::GET_PLAYER_INDEX(), sLocal_1061, 1.75f, 1.75f, 1.5f, 0, 0, -1082130432 /* Float: -1f */);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_578))
			{
				PED::FORCE_PED_MOTION_STATE(iLocal_578, -1415276238, true, 0, false);
				PED::_0x2208438012482A1A(iLocal_578, false, false);
			}
			PED::_0x2208438012482A1A(Global_35, false, false);
			CAM::_0xBC016635D6A73B31("script@Story@GNG0@RideToLakay", "SHOT2", 5);
			CLOCK::SET_CLOCK_TIME(6, 26, 0);
			STREAMING::END_SRL();
			STREAMING::PREFETCH_SRL("script@cme@GNG0_CME_SHOT3");
			STREAMING::_0xEF1A8A484118735E();
			STREAMING::_0xAE00387E53B1E9FC();
			break;
		case 2:
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_578, 2064.177f, -1087.129f, 43.2276f, 1.1352f, true, false, true);
			ENTITY::_0x9587913B9E772D29(iLocal_578, 0);
			PLAYER::_0x0869D499A7848309(PLAYER::GET_PLAYER_INDEX(), sLocal_1061, 1.5f, 1.5f, 1.5f, 0, 0, -1082130432 /* Float: -1f */);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_578))
			{
				PED::FORCE_PED_MOTION_STATE(iLocal_578, -1415276238, true, 0, false);
				PED::_0x2208438012482A1A(iLocal_578, false, false);
			}
			PED::_0x2208438012482A1A(Global_35, false, false);
			CAM::_0xBC016635D6A73B31("script@Story@GNG0@RideToLakay", "SHOT3", 5);
			CLOCK::SET_CLOCK_TIME(6, 54, 0);
			STREAMING::END_SRL();
			STREAMING::PREFETCH_SRL("script@cme@GNG0_CME_SHOT5");
			STREAMING::_0xEF1A8A484118735E();
			STREAMING::_0xAE00387E53B1E9FC();
			break;
		case 3:
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_578, 2481.135f, -766.3179f, 41.3242f, 6.1864f, true, false, true);
			ENTITY::_0x9587913B9E772D29(iLocal_578, 0);
			PLAYER::_0x0869D499A7848309(PLAYER::GET_PLAYER_INDEX(), sLocal_1061, 1.5f, 1.5f, 1.5f, 0, 0, -1082130432 /* Float: -1f */);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_578))
			{
				PED::FORCE_PED_MOTION_STATE(iLocal_578, -1415276238, true, 0, false);
				PED::_0x2208438012482A1A(iLocal_578, false, false);
			}
			PED::_0x2208438012482A1A(Global_35, false, false);
			CAM::_0xBC016635D6A73B31("script@Story@GNG0@RideToLakay", "SHOT5", 5);
			CLOCK::SET_CLOCK_TIME(7, 3, 0);
			STREAMING::END_SRL();
			STREAMING::PREFETCH_SRL("script@cme@GNG0_CME_SHOT6");
			STREAMING::_0xEF1A8A484118735E();
			STREAMING::_0xAE00387E53B1E9FC();
			break;
	}
	__LIB_1__::func_148(&uLocal_1057);
}

void func_1364(bool bParam0, bool bParam1)
{
	PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE"), true);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE_ALTERNATE"), true);
	if (bParam0)
	{
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), true);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), true);
	}
	if (bParam1)
	{
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), true);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), true);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), true);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_STOP"), true);
	}
}

void func_1365()
{
	iLocal_578 = PED::_GET_LAST_MOUNT(Global_35);
	if ((!ENTITY::DOES_ENTITY_EXIST(iLocal_578) || ENTITY::IS_ENTITY_DEAD(iLocal_578)) || !__LIB_0__::func_48(iLocal_578, Global_35, 250f, 1))
	{
		iLocal_578 = Local_262[3 /*10*/];
	}
	if (!PED::IS_PED_ON_MOUNT(Global_35))
	{
		__LIB_1__::func_571(Global_35, iLocal_578, 0, -1, 1);
	}
	__LIB_4__::func_791(0);
	__LIB_4__::func_791(1);
}

bool func_1366()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (__LIB_0__::func_48(Global_35, Local_45[iVar0 /*54*/], 70f, 1) || !ENTITY::IS_ENTITY_OCCLUDED(Local_45[iVar0 /*54*/]))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_1376(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (Global_40.f_4283.f_6[iVar0 /*5*/] == iParam0)
		{
			func_1386(&(Global_40.f_4283.f_6[iVar0 /*5*/]), bParam1, bParam2);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_1384(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	func_1528(iParam0, &iVar0, &iVar1);
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_1357549.f_1848[iVar0]), iVar1);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1357549.f_1848[iVar0]), iVar1);
	}
}

void func_1386(var uParam0, bool bParam1, bool bParam2)
{
	if (*uParam0 == 176656832)
	{
		return;
	}
	func_1384(*uParam0, 0);
	if (bParam1)
	{
		if (bParam2)
		{
			__LIB_0__::func_345(2, *uParam0);
		}
		else
		{
			__LIB_0__::func_346(2, *uParam0);
		}
	}
	__LIB_0__::func_415(uParam0);
}

void func_1399()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_1839(0);
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
	func_1839(1);
}

void func_1400()
{
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_312(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_1401()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_1842(0);
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
	func_1842(1);
}

void func_1402()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_1__::func_432(15000, 0, 0, 0, 1);
			func_1842(0);
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
	func_1842(1);
}

void func_1403()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_312(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_312(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_309(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_309(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
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

int func_1432(var uParam0, int iParam1, int iParam2, int iParam3)
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
	iVar11 = (func_1864(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_952(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_312(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	__LIB_1__::func_432(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

void func_1436(int iParam0, int iParam1, float fParam2, int iParam3)
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
					func_1866(1, iVar1);
					func_1866(8, iVar1);
					func_1866(7, iVar1);
					break;
				case 12:
					func_1866(6, iVar1);
					break;
				case 53:
					func_1866(3, iVar1);
					func_1866(7, iVar1);
					func_1866(4, iVar1);
					break;
				case 20:
					func_1866(8, iVar1);
					break;
				case 19:
					func_1866(1, iVar1);
					func_1866(2, iVar1);
					break;
				case 24:
					func_1866(3, iVar1);
					func_1866(9, iVar1);
					func_1866(20, iVar1);
					break;
				case 28:
					func_1866(1, iVar1);
					break;
				case 34:
					func_1866(23, iVar1);
					func_1866(2, iVar1);
					func_1866(18, iVar1);
					break;
				case 29:
					func_1866(0, iVar1);
					func_1866(9, iVar1);
					break;
				case 37:
					break;
				case 58:
					break;
				case 57:
					func_1866(0, iVar1);
					func_1866(3, iVar1);
					func_1866(2, iVar1);
					func_1866(11, iVar1);
					func_1866(6, iVar1);
					func_1866(25, iVar1);
					func_1866(24, iVar1);
					break;
			}
			break;
		case 8:
			switch (iVar4)
			{
				case 94:
					func_1866(5, iVar1);
					break;
				case 63:
					func_1866(1, iVar1);
					func_1866(3, iVar1);
					break;
				case 37:
					func_1866(23, iVar1);
					break;
				case 116:
					break;
			}
			break;
		case 11:
			if (iParam0 == __LIB_1__::func_293(0, 10, 11, joaat("CABR01")))
			{
				func_1866(7, iVar1);
				func_1866(4, iVar1);
			}
			else if (iParam0 == __LIB_1__::func_293(0, 7, 11, joaat("CACR02")))
			{
				func_1866(8, iVar1);
				func_1866(15, iVar1);
			}
			else if (iParam0 == __LIB_1__::func_293(0, 8, 11, joaat("CACR03")))
			{
				func_1866(3, iVar1);
			}
			else if (iParam0 == __LIB_1__::func_293(0, 11, 11, joaat("CACR01")))
			{
				func_1866(6, iVar1);
				func_1866(3, iVar1);
			}
			else if (iParam0 == __LIB_1__::func_293(0, 12, 11, joaat("CACR04")))
			{
				func_1866(9, iVar1);
			}
			break;
	}
	UILOG::_UILOG_SET_TOTAL_TAKE_SUMMARY(MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_TOTAL", iParam1), MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_TOTAL_GANG", __LIB_0__::func_473()));
	if (!__LIB_0__::func_474(629))
	{
		__LIB_1__::func_240(629, 0);
	}
}

int func_1445()
{
	if (__LIB_0__::func_28())
	{
		if (!__LIB_1__::func_185(3))
		{
			return __LIB_0__::func_559(43);
		}
		if (__LIB_1__::func_185(38) && !__LIB_1__::func_185(43))
		{
			return func_1872(8);
		}
	}
	return 0;
}

bool func_1446(int iParam0)
{
	if (!__LIB_0__::func_20(iParam0))
	{
		return false;
	}
	return ((Global_1888801[iParam0 /*35*/].f_20 == 1 || Global_1888801[iParam0 /*35*/].f_20 == 2) && !func_1873(iParam0));
}

void func_1521(int iParam0, char* sParam1, int iParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1231[iParam0 /*16*/], sParam1, iParam2, 0);
	}
}

int func_1528(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	iVar0 = func_1922(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_1529(var uParam0, bool bParam1, int iParam2)
{
	func_1923(iParam2);
	if (Global_1572887.f_12 == -1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		{
			return;
		}
		if (Global_1935630.f_12)
		{
			return;
		}
	}
	else
	{
		if (!Global_1225639.f_11)
		{
			return;
		}
		if (Global_1225639.f_12)
		{
			return;
		}
	}
	if (bParam1)
	{
		uParam0->f_10 = 0;
	}
	uParam0->f_5 = iParam2;
	if (Global_1572887.f_12 == -1)
	{
		uParam0->f_13 = Global_1935630.f_44;
	}
	else
	{
		uParam0->f_13 = __LIB_1__::func_347(0);
	}
	switch (uParam0->f_6)
	{
		case 0:
			if (*uParam0 & 16 != 0)
			{
				if (!*uParam0 & 33554432 != 0)
				{
					if (uParam0->f_13 == joaat("WEAPON_THROWN_DYNAMITE"))
					{
						if (PED::IS_PED_PLANTING_BOMB(Global_35))
						{
							__LIB_0__::func_7(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (__LIB_1__::func_995(1))
						{
							__LIB_0__::func_7(uParam0, 33554432);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!__LIB_1__::func_995(1) || *uParam0 & 8192 != 0))
				{
					__LIB_0__::func_8(uParam0, 33554432);
				}
			}
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
	if (!uParam0->f_1 & 1024 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_14))
		{
			if (__LIB_2__::func_868(uParam0))
			{
				uParam0->f_15 = __LIB_0__::func_485();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((__LIB_0__::func_485() - uParam0->f_15) > 500)
			{
				if (!PED::IS_PED_ON_MOUNT(uParam0->f_14))
				{
					uParam0->f_14 = 0;
					uParam0->f_15 = 0;
				}
			}
		}
	}
	uParam0->f_6++;
	if (uParam0->f_6 >= 4)
	{
		uParam0->f_6 = 0;
		uParam0->f_7++;
		if (uParam0->f_7 > 4)
		{
			uParam0->f_7 = 0;
		}
	}
	__LIB_2__::func_835(uParam0);
}

void func_1723()
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
	iVar0 = func_2032(6291456, 0);
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

void func_1731(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_1731(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_1731(iVar2, vParam1, fParam4, iParam5, iParam6);
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

void func_1802()
{
	if (!func_207(8192))
	{
		if (func_224(1, 33, func_223(3)))
		{
			func_2063();
		}
	}
	else if (func_224(2, 33, func_223(4)))
	{
		func_2064();
	}
}

void func_1803()
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1231[5 /*16*/]))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_1231[5 /*16*/], false))
		{
			func_2065();
		}
	}
}

void func_1804()
{
	if (!func_207(64))
	{
		if (ENTITY::IS_ENTITY_DEAD(Local_45[3 /*54*/]) || PED::IS_PED_BEING_STEALTH_KILLED(Local_45[3 /*54*/]))
		{
			__LIB_1__::func_148(&uLocal_1165);
			func_209(64);
		}
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1231[5 /*16*/]))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(Local_1231[5 /*16*/]))
		{
			func_2064();
		}
	}
	func_224(2, 33, func_223(4));
}

void func_1805()
{
	if (iLocal_306 > 2)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1231[5 /*16*/]))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(Local_1231[5 /*16*/]);
		}
	}
}

void func_1806()
{
	if (!func_207(8192))
	{
		if (!__LIB_0__::func_393(Global_35, iLocal_1218[1], 0, 1) && __LIB_0__::func_266(Global_35, 1893.023f, -1861.731f, 46.33419f, 5f, 1, 1))
		{
			func_2066();
		}
	}
	else
	{
		func_2066();
	}
}

void func_1807()
{
	func_224(3, 32, func_223(9));
	if (!__LIB_0__::func_163(Local_45[1 /*54*/], 713668775))
	{
		if (__LIB_0__::func_266(Local_45[1 /*54*/], 1896.11f, -1871.93f, 47.34f, 0.5f, 1, 1))
		{
			func_2067();
		}
		else
		{
			func_2066();
		}
	}
}

void func_1808()
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1231[3 /*16*/]))
	{
		if (!ANIMSCENE::GET_ANIM_SCENE_BOOL(Local_1231[3 /*16*/], "bDrawerBreakout"))
		{
			if (((!ENTITY::IS_ENTITY_DEAD(Local_45[1 /*54*/]) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(Global_35, Local_45[1 /*54*/], 17)) && !ENTITY::IS_ENTITY_OCCLUDED(Local_45[1 /*54*/])) || __LIB_0__::func_266(Global_35, 1901.418f, -1866.377f, 46.3492f, 1.8f, 1, 1))
			{
				if (func_2068(3, "s_drawer_reading_loop"))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_1231[3 /*16*/], "bDrawerBreakout", true, false);
				}
			}
		}
	}
}

void func_1810()
{
	if (!func_207(8192))
	{
		if (__LIB_0__::func_266(Global_35, 1904.785f, -1865.104f, 42.7355f, 2.5f, 1, 1) || __LIB_0__::func_266(Global_35, 1900.512f, -1866.01f, 42.14874f, 2.5f, 1, 1))
		{
			if (Local_45[2 /*54*/].f_19 == 1)
			{
				func_2069();
			}
		}
	}
	else
	{
		func_2069();
	}
	func_224(5, 32, func_223(1));
}

void func_1811()
{
	if (!func_207(8192))
	{
		if (!func_207(4))
		{
			if (__LIB_6__::func_903("GNG0_IG1RLTR") && AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("GNG0_IG1RLTR") >= 1)
			{
				func_209(1048576);
				func_209(4);
				func_2070();
			}
		}
	}
	else if (__LIB_0__::func_266(Local_45[3 /*54*/], 1896.597f, -1868.772f, 42.9314f, 0.5f, 1, 1))
	{
		__LIB_1__::func_148(&uLocal_1186);
		func_2071();
	}
}

void func_1812()
{
	if (!func_207(8192))
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1231[5 /*16*/]))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(Local_1231[5 /*16*/]))
			{
				func_2071();
			}
		}
		func_224(4, 33, func_223(2));
	}
	else
	{
		func_2071();
	}
}

void func_1813()
{
	if (iLocal_305 > 2)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1231[5 /*16*/]))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(Local_1231[5 /*16*/]);
		}
	}
	if (!func_207(2097152))
	{
		if (__LIB_0__::func_264(&uLocal_1186) > 20f)
		{
			TASK::TASK_LOOK_AT_COORD(Local_45[3 /*54*/], 1897.41f, -1872.65f, 42.1314f, -1, 0, 51, 0);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_45[3 /*54*/], 1897.41f, -1872.65f, 42.1314f, 0.8f, -1, 0.25f, 0, -155.68f);
			func_209(2097152);
			__LIB_1__::func_148(&uLocal_1186);
		}
	}
	else if (!func_207(4194304))
	{
		if (__LIB_0__::func_264(&uLocal_1186) > 15f)
		{
			TASK::TASK_LOOK_AT_COORD(Local_45[3 /*54*/], 1893.85f, -1865.32f, 42.1314f, -1, 0, 51, 0);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_45[3 /*54*/], 1893.85f, -1865.32f, 42.1314f, 0.8f, -1, 0.25f, 0, 63.51f);
			func_209(4194304);
			__LIB_0__::func_37(&uLocal_1186);
		}
	}
}

void func_1839(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (bParam0)
	{
		func_312(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_312(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_312(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_2082(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_859(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_309(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_2088(Var0);
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

void func_1842(bool bParam0)
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
		func_312(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_312(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_312(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_312(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_312(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_312(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_312(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_312(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_312(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_312(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_312(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_309(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_309(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_309(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_309(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_309(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_309(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_309(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_309(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_309(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_309(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_309(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
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

int func_1864(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
							iVar49 = (iVar49 + func_1864(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1864(iVar63, -915411861, 1, 0, 0));
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

void func_1866(int iParam0, char* sParam1)
{
	if (iParam0 != 18 && iParam0 != 7)
	{
		UILOG::_UILOG_ADD_TOTAL_TAKE_ENTRY(MISC::GET_HASH_KEY(__LIB_0__::func_558(iParam0)), 1997120069, MISC::_CREATE_VAR_STRING(10, "MISSION_COMPLETE_TAKE_COMP", MISC::_CREATE_VAR_STRING(2, func_862(iParam0, 0))), MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
	else
	{
		UILOG::_UILOG_ADD_TOTAL_TAKE_ENTRY(MISC::GET_HASH_KEY(__LIB_0__::func_558(iParam0)), 1997120069, MISC::_CREATE_VAR_STRING(10, "MISSION_COMPLETE_TAKE_COMP_NOS", MISC::_CREATE_VAR_STRING(2, func_862(iParam0, 0))), MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
}

int func_1872(int iParam0)
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
			break;
		case 12:
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
			break;
		case 15:
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
bool func_1873(int iParam0)
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

int func_1922(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("CSTAG_MOOD_LENNY_DEFAULT"):
			return 129;
		case joaat("CSTAG_ARRANGEMENT_COL_TEARDOWN"):
			return 13;
		case joaat("CSTAG_FLOW_MUD4_POST"):
			return 383;
		case joaat("CSTAG_MOOD_MARYBETH_UPBEAT"):
			return 179;
		case -2104294676:
			return 83;
		case joaat("CSTAG_MOOD_KIERAN_PRISONER"):
			return 145;
		case joaat("CSTAG_FLOW_FIRST_VISIT_DST3_POST"):
			return 297;
		case joaat("CSTAG_MOOD_MOLLY_DOWN"):
			return 185;
		case joaat("CSTAG_FLOW_FIRST_VISIT_WNT2_POST"):
			return 259;
		case joaat("CSTAG_FLOW_RMARY2_POST"):
			return 393;
		case joaat("CSTAG_FLOW_FUS1_POST"):
			return 440;
		case joaat("CSTAG_MOOD_MOLLY_BEAVER"):
			return 190;
		case joaat("CSTAG_PLAYER_GONE_SOFT"):
			return 351;
		case joaat("CSTAG_EVENT_HSO_LOWKEY"):
			return 277;
		case joaat("CSTAG_MOOD_TILLY_BEAVER"):
			return 244;
		case -2033572567:
			return 92;
		case joaat("CSTAG_FLOW_MUD1_POST"):
			return 380;
		case joaat("CSTAG_MOOD_SEAN_COLTER"):
			return 125;
		case -2006082799:
			return 56;
		case -1994410205:
			return 499;
		case joaat("CSTAG_FLOW_RDOPN_POST"):
			return 457;
		case joaat("CSTAG_MOOD_HOSEA_DRUNK"):
			return 96;
		case joaat("CSTAG_FLOW_RNATV1_POST"):
			return 435;
		case joaat("CSTAG_FLOW_RDOWN2_POST"):
			return 387;
		case joaat("CSTAG_FLOW_BRT3_ACTIVE"):
			return 285;
		case joaat("CSTAG_FLOW_RMARY4_POST"):
			return 460;
		case joaat("CSTAG_MOOD_SEAN_UPBEAT"):
			return 124;
		case joaat("CSTAG_FLOW_MOB1_POST"):
			return 423;
		case joaat("CSTAG_FLOW_NTV3_PRE"):
			return 320;
		case joaat("CSTAG_EVENT_SDB_PARTY_NIGHT_LATE"):
			return 309;
		case joaat("CSTAG_ARRANGEMENT_SDB_SETUP"):
			return 29;
		case joaat("CSTAG_MOOD_KAREN_COLTER"):
			return 225;
		case joaat("CSTAG_MOOD_KIERAN_UPBEAT"):
			return 142;
		case -1885734028:
			return 110;
		case joaat("CSTAG_FLOW_RMUD33_POST"):
			return 396;
		case joaat("CSTAG_FLOW_FIRST_VISIT_DST1_POST"):
			return 257;
		case -1856459307:
			return 219;
		case -1837343824:
			return 496;
		case joaat("CSTAG_FLOW_RCTAX_STATUE_MISSING"):
			return 326;
		case joaat("CSTAG_MOOD_SWANSON_UPBEAT"):
			return 233;
		case joaat("CSTAG_MOOD_PEARSON_UPBEAT"):
			return 197;
		case joaat("CSTAG_MOOD_HOSEA_COLTER"):
			return 98;
		case joaat("CSTAG_ARRANGEMENT_HSO_B"):
			return 18;
		case -1818590041:
			return 246;
		case joaat("CSTAG_MOOD_HOSEA_UPBEAT"):
			return 97;
		case joaat("CSTAG_FLOW_DST2_ACTIVE"):
			return 273;
		case joaat("CSTAG_MOOD_BILL_ANNOYED"):
			return 77;
		case joaat("CSTAG_BCH_BASE"):
			return 10;
		case joaat("CSTAG_SP_SWAMP_WEIRDO_POST"):
			return 331;
		case joaat("CSTAG_ARRANGEMENT_HSO_TEARDOWN"):
			return 16;
		case joaat("CSTAG_FLOW_NTV2_POST"):
			return 454;
		case joaat("CSTAG_FLOW_GRY2_POST"):
			return 411;
		case joaat("CSTAG_MOOD_MICAH_BEAVER"):
			return 108;
		case joaat("CSTAG_MOOD_LENNY_ANNOYED"):
			return 131;
		case joaat("CSTAG_EVENT_SDB_LOWKEY"):
			return 312;
		case joaat("CSTAG_MOOD_TRELAWNY_ANNOYED"):
			return 249;
		case joaat("CSTAG_MOOD_PEARSON_DRUNK"):
			return 196;
		case joaat("CSTAG_MOOD_KIERAN_DOWN"):
			return 139;
		case joaat("CSTAG_FLOW_BRT3_POST"):
			return 405;
		case joaat("CSTAG_ARRANGEMENT_CLM_C"):
			return 22;
		case joaat("CSTAG_FLOW_RBNP12_POST"):
			return 415;
		case joaat("CSTAG_FLOW_MOB4_POST"):
			return 426;
		case joaat("CSTAG_MOOD_TRELAWNY_COLTER"):
			return 252;
		case -1584659518:
			return 210;
		case joaat("CSTAG_FLOW_RSTR1_POST"):
			return 409;
		case -1565979762:
			return 507;
		case joaat("CSTAG_MOOD_ABIGAIL_DOWN"):
			return 158;
		case joaat("CSTAG_MOOD_UNCLE_UPBEAT"):
			return 88;
		case joaat("CSTAG_MOOD_CHARLES_DOWN"):
			return 112;
		case joaat("CSTAG_FLOW_IND3_POST"):
			return 422;
		case joaat("CSTAG_FLOW_RBCH11_POST"):
			return 483;
		case joaat("CSTAG_HONOR_LOW"):
			return 338;
		case joaat("CSTAG_ARRANGEMENT_HSO_A"):
			return 17;
		case joaat("CSTAG_FLOW_MUD5_POST"):
			return 413;
		case joaat("CSTAG_MOOD_JOHN_DEFAULT"):
			return 57;
		case joaat("CSTAG_FLOW_SUS1_POST"):
			return 437;
		case joaat("CSTAG_ARRANGEMENT_SDB_C"):
			return 27;
		case joaat("CSTAG_VIG_CHARLES_ITM1_PRE"):
			return 369;
		case joaat("CSTAG_FLOW_RABI3_POST"):
			return 482;
		case joaat("CSTAG_MOOD_KAREN_DRUNK"):
			return 223;
		case joaat("CSTAG_EVENT_HSO_PARTY_NIGHT_ACTIVE"):
			return 280;
		case -1426009748:
			return 119;
		case joaat("CSTAG_MOOD_PEARSON_BEAVER"):
			return 199;
		case joaat("CSTAG_FLOW_MAR2_POST"):
			return 472;
		case joaat("CSTAG_FLOW_FUD1_FISHING_POST"):
			return 289;
			return 21;
			return 329;
			return 427;
			return 377;
			return 135;
			return 470;
			return 205;
			return 148;
			return 311;
			return 373;
			return 236;
			return 254;
			return 114;
			return 294;
			return 206;
			return 229;
			return 445;
			return 165;
			return 318;
			return 120;
			return 26;
			return 23;
			return 327;
			return 442;
			return 9;
			return 284;
			return 41;
			return 138;
			return 33;
			return 25;
			return 238;
			return 247;
			return 324;
			return 164;
			return 169;
			return 391;
			return 510;
			return 58;
			return 61;
			return 485;
			return 12;
			return 395;
			return 359;
			return 486;
			return 484;
			return 76;
			return 187;
			return 374;
			return 172;
			return 170;
			return 186;
			return 2;
			return 86;
			return 492;
			return 149;
			return 52;
			return 439;
			return 200;
			return 243;
			return 293;
			return 3;
			return 68;
			return 180;
			return 65;
			return 106;
			return 372;
			return 302;
			return 275;
			return 362;
			return 461;
			return 251;
			return 242;
			return 443;
			return 375;
			return 89;
			return 341;
			return 175;
			return 504;
			return 313;
			return 345;
			return 509;
			return 94;
			return 404;
			return 146;
			return 343;
			return 234;
			return 403;
			return 104;
			return 237;
			return 487;
			return 424;
			return 261;
			return 400;
			return 266;
			return 232;
			return 283;
			return 310;
			return 337;
			return 174;
			return 444;
			return 253;
			return 330;
			return 39;
			return 182;
			return 140;
			return 469;
			return 150;
			return 59;
			return 133;
			return 141;
			return 308;
			return 418;
			return 155;
			return 295;
			return 37;
			return 30;
			return 382;
			return 303;
			return 489;
			return 323;
			return 288;
			return 260;
			return 128;
			return 473;
			return 194;
			return 431;
			return 67;
			return 24;
			return 317;
			return 269;
			return 505;
			return 490;
			return 357;
			return 425;
			return 464;
			return 429;
			return 34;
			return 204;
			return 406;
			return 354;
			return 474;
			return 344;
			return 361;
			return 385;
			return 156;
			return 127;
			return 376;
			return 438;
			return 441;
			return 113;
			return 222;
			return 95;
			return 151;
			return 208;
			return 316;
			return 93;
			return 325;
			return 290;
			return 55;
			return 239;
			return 287;
			return 19;
			return 105;
			return 201;
			return 342;
			return 353;
			return 46;
			return 466;
			return 137;
			return 350;
			return 321;
			return 81;
			return 51;
			return 54;
			return 188;
			return 43;
			return 1;
			return 147;
			return 228;
			return 408;
			return 458;
			return 358;
			return 476;
			return 498;
			return 477;
			return 480;
			return 455;
			return 494;
			return 184;
			return 227;
			return 60;
			return 47;
			return 0;
			return 279;
			return 282;
			return 433;
			return 35;
			return 64;
			return 304;
			return 241;
			return 134;
			return 74;
			return 270;
			return 399;
			return 419;
			return 364;
			return 250;
			return 103;
			return 90;
			return 240;
			return 193;
			return 506;
			return 84;
			return 101;
			return 335;
			return 71;
			return 291;
			return 73;
			return 80;
			return 132;
			return 446;
			return 332;
			return 436;
			return 220;
			return 255;
			return 493;
			return 370;
			return 163;
			return 40;
			return 471;
			return 452;
			return 160;
			return 245;
			return 203;
			return 346;
			return 488;
			return 349;
			return 360;
			return 398;
			return 78;
			return 420;
			return 389;
			return 178;
			return 315;
			return 268;
			return 66;
			return 401;
			return 501;
			return 371;
			return 8;
			return 211;
			return 126;
			return 217;
			return 467;
			return 177;
			return 328;
			return 365;
			return 414;
			return 115;
			return 153;
			return 157;
			return 50;
			return 481;
			return 367;
			return 218;
			return 296;
			return 28;
			return 336;
			return 202;
			return 14;
			return 355;
			return 298;
			return 118;
			return 192;
			return 136;
			return 49;
			return 42;
			return 4;
			return 173;
			return 11;
			return 412;
			return 272;
			return 407;
			return 212;
			return 159;
			return 70;
			return 333;
			return 38;
			return 256;
			return 171;
			return 456;
			return 356;
			return 198;
			return 299;
			return 417;
			return 189;
			return 265;
			return 116;
			return 305;
			return 264;
			return 402;
			return 271;
			return 286;
			return 378;
			return 392;
			return 366;
			return 451;
			return 292;
			return 363;
			return 224;
			return 87;
			return 410;
			return 214;
			return 166;
			return 463;
			return 428;
			return 450;
			return 7;
			return 32;
			return 215;
			return 107;
			return 130;
			return 45;
			return 495;
			return 122;
			return 258;
			return 102;
			return 248;
			return 152;
			return 314;
			return 168;
			return 6;
			return 300;
			return 267;
			return 368;
			return 322;
			return 85;
			return 91;
			return 195;
			return 53;
			return 181;
			return 432;
			return 479;
			return 230;
			return 306;
			return 111;
			return 502;
			return 352;
			return 99;
			return 421;
			return 397;
			return 69;
			return 394;
			return 434;
			return 48;
			return 79;
			return 301;
			return 216;
			return 63;
			return 75;
			return 144;
			return 462;
			return 339;
			return 44;
			return 503;
			return 478;
			return 20;
			return 278;
			return 281;
			return 109;
			return 334;
			return 209;
			return 263;
			return 207;
			return 167;
			return 161;
			return 262;
			return 183;
			return 162;
			return 72;
			return 468;
			return 231;
			return 340;
			return 384;
			return 143;
			return 31;
			return 117;
			return 100;
			return 379;
			return 390;
			return 276;
			return 449;
			return 307;
			return 274;
			return 191;
			return 447;
			return 508;
			return 235;
			return 388;
			return 430;
			return 176;
			return 448;
			return 475;
			return 459;
			return 62;
			return 226;
			return 491;
			return 453;
			return 500;
			return 154;
			return 123;
			return 221;
			return 36;
			return 381;
			return 82;
			return 319;
			return 121;
			return 497;
			return 348;
			return 347;
			return 213;
			return 5;
			return 15;
			return 386;
			return 416;
			return 465;
			if (iParam1 >= 1)
			{
			}
			return -1;
			if (iParam1 >= 1)
			{
			}
			return -1;
		}
void func_1923(int iParam0)
{
	int iVar0;
	var uVar1;
	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630.f_38);
	Global_1935630.f_27 = __LIB_1__::func_999();
	if (Global_1935630.f_27)
	{
		Global_1935630.f_28 = MISC::GET_GAME_TIMER();
	}
	if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_44))
	{
		if (PED::IS_PED_SHOOTING(Global_35))
		{
			if (WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar1))
			{
			}
			else
			{
				uVar1 = Global_1935630.f_44;
			}
			Global_1935630.f_46 = uVar1;
		}
	}
	switch (iVar0)
	{
		case 0:
			__LIB_1__::func_369(&(Global_1935630.f_34), &(Global_1935630.f_39));
			Global_1935630.f_38 = iParam0;
			break;
		case 1:
			Global_1935630.f_30 = PLAYER::_0x72AD59F7B7FB6E24(PLAYER::PLAYER_ID(), 4000);
			if (!Global_1935630.f_30)
			{
				if (Global_1935630.f_44 == joaat("WEAPON_LASSO"))
				{
					Global_1935630.f_30 = PED::_GET_LASSO_TARGET(Global_35) != 0;
				}
			}
			break;
		case 2:
			switch (Global_1935630.f_46)
			{
				case joaat("WEAPON_LASSO"):
					Global_1935630.f_25 = 0;
					break;
				default:
					if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && WEAPON::_0x5809DBCA0A37C82B(Global_1935630.f_46))
					{
						Global_1935630.f_25 = PED::_0x285D36C5C72B0569(Global_35) <= 3f;
					}
					else
					{
						Global_1935630.f_25 = PED::_0x285D36C5C72B0569(Global_35) <= 1f;
					}
					if (Global_1935630.f_25)
					{
						Global_1935630.f_29 = MISC::GET_FRAME_COUNT();
					}
					break;
			}
			break;
		default:
			Global_1935630.f_38 = iParam0 + 1;
			break;
	}
	Global_22 |= 4;
}

int func_2032(int iParam0, int iParam1)
{
	var uVar0;
	return func_2167(&uVar0, iParam0, iParam1);
}

void func_2063()
{
	int iVar0;
	if (!func_224(1, 33, func_223(3)))
	{
		return;
	}
	ANIMSCENE::START_ANIM_SCENE(Local_1231[1 /*16*/]);
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (ENTITY::_IS_ENTITY_FROZEN(Local_326[iVar0 /*9*/]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(Local_326[iVar0 /*9*/], false);
		}
		iVar0++;
	}
	iLocal_305 = 1;
}

void func_2064()
{
	int iVar0;
	if (!func_224(2, 33, func_223(4)))
	{
		return;
	}
	ANIMSCENE::START_ANIM_SCENE(Local_1231[2 /*16*/]);
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (ENTITY::_IS_ENTITY_FROZEN(Local_326[iVar0 /*9*/]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(Local_326[iVar0 /*9*/], false);
		}
		iVar0++;
	}
	iLocal_305 = 3;
}

void func_2065()
{
	iLocal_305 = 2;
}

void func_2066()
{
	TASK::TASK_LOOK_AT_COORD(Local_45[1 /*54*/], 1896.11f, -1871.93f, 47.34f, -1, 0, 51, 0);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_45[1 /*54*/], 1896.11f, -1871.93f, 47.34f, 1f, -1, 0.25f, 0, 151.01f);
	iLocal_304 = 1;
}

void func_2067()
{
	int iVar0;
	if (!func_224(3, 32, func_223(9)))
	{
		return;
	}
	TASK::TASK_CLEAR_LOOK_AT(Local_45[1 /*54*/]);
	ANIMSCENE::START_ANIM_SCENE(Local_1231[3 /*16*/]);
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::_IS_ENTITY_FROZEN(Local_435[iVar0 /*9*/]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(Local_435[iVar0 /*9*/], false);
		}
		iVar0++;
	}
	iLocal_304 = 2;
}

bool func_2068(int iParam0, char* sParam1)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1231[iParam0 /*16*/]))
	{
		if (ANIMSCENE::_0x8D81E7824B7753F7(Local_1231[iParam0 /*16*/], sParam1, 1))
		{
			return true;
		}
	}
	return false;
}

void func_2069()
{
	if (!func_207(8192))
	{
		if (!func_224(5, 32, func_223(1)))
		{
			return;
		}
		__LIB_3__::func_459(Local_45[3 /*54*/], 0);
		ANIMSCENE::START_ANIM_SCENE(Local_1231[5 /*16*/]);
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1231[1 /*16*/]))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(Local_1231[1 /*16*/]);
		}
	}
	else
	{
		TASK::TASK_LOOK_AT_COORD(Local_45[3 /*54*/], 1896.597f, -1868.772f, 42.1314f, -1, 0, 51, 0);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_45[3 /*54*/], 1896.39f, -1868.85f, 42.1314f, 0.8f, -1, 0.25f, 0, -132.45f);
	}
	iLocal_306 = 1;
}

void func_2070()
{
	iLocal_306 = 2;
}

void func_2071()
{
	if (!func_207(8192))
	{
		func_209(268435456);
		if (!func_224(4, 33, func_223(2)))
		{
			return;
		}
		ANIMSCENE::START_ANIM_SCENE(Local_1231[4 /*16*/]);
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1231[5 /*16*/]))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(Local_1231[5 /*16*/]);
		}
	}
	iLocal_306 = 3;
}

void func_2082(int iParam0)
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
	func_309(iParam0, 1, 1, -142743235, 1);
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
		func_309(uVar18[iVar36], 1, 1, -142743235, 1);
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

void func_2088(struct<6> Param0)
{
	if (!func_2203(Param0.f_4, 1))
	{
	}
	if (!func_2203(Param0, 1))
	{
	}
	if (!func_2203(Param0.f_2, 1))
	{
	}
	if (!func_2203(Param0.f_5, 1))
	{
	}
	if (!func_2203(Param0.f_3, 1))
	{
	}
	if (!func_2203(Param0.f_1, 1))
	{
	}
}

int func_2167(var uParam0, int iParam1, int iParam2)
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
		return func_2167(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

bool func_2203(int iParam0, int iParam1)
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
				if (func_2203(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_2203(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_2203(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_2203(iVar21, 1))
				{
				}
			}
		}
		__LIB_1__::func_712();
		return true;
	}
	return false;
}

