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
	var uLocal_30 = 0;
	int iLocal_31 = 0;
	bool bLocal_32 = false;
	vector3 vLocal_33 = { 0f, 0f, 0f };
	vector3 vLocal_36 = { 0f, 0f, 0f };
	vector3 vLocal_39 = { 0f, 0f, 0f };
	vector3 vLocal_42 = { 0f, 0f, 0f };
	vector3 vLocal_45 = { 0f, 0f, 0f };
	vector3 vLocal_48 = { 0f, 0f, 0f };
	vector3 vLocal_51 = { 0f, 0f, 0f };
	vector3 vLocal_54 = { 0f, 0f, 0f };
	vector3 vLocal_57 = { 0f, 0f, 0f };
	vector3 vLocal_60 = { 0f, 0f, 0f };
	vector3 vLocal_63 = { 0f, 0f, 0f };
	vector3 vLocal_66 = { 0f, 0f, 0f };
	vector3 vLocal_69 = { 0f, 0f, 0f };
	vector3 vLocal_72 = { 0f, 0f, 0f };
	vector3 vLocal_75 = { 0f, 0f, 0f };
	vector3 vLocal_78 = { 0f, 0f, 0f };
	float fLocal_81 = 0f;
	float fLocal_82 = 0f;
	float fLocal_83 = 0f;
	float fLocal_84 = 0f;
	bool bLocal_85 = false;
	bool bLocal_86 = false;
	bool bLocal_87 = false;
	vector3 vLocal_88 = { 0f, 0f, 0f };
	vector3 vLocal_91 = { 0f, 0f, 0f };
	int iLocal_94 = 0;
	bool bLocal_95 = false;
	bool bLocal_96 = false;
	bool bLocal_97 = false;
	bool bLocal_98 = false;
	bool bLocal_99 = false;
	bool bLocal_100 = false;
	bool bLocal_101 = false;
	bool bLocal_102 = false;
	char* sLocal_103 = NULL;
	char* sLocal_104 = NULL;
	char[] cLocal_105[8] = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	var uLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
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
	struct<614> Local_142 = { 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -50684386, 0, 2, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 50, -1, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1, 0, 0, 0, 2, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 1092616192, 2, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1176256512, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1106247680, 1114636288, 0 } ;
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
	var uLocal_778 = 1106247680;
	var uLocal_779 = 1106247680;
	var uLocal_780 = 1106247680;
	var uLocal_781 = 1106247680;
	var uLocal_782 = 1106247680;
	var uLocal_783 = 3;
	var uLocal_784 = 1;
	var uLocal_785 = 1099431936;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = -1;
	var uLocal_796 = 1092616192;
	var uLocal_797 = 0;
	var uLocal_798 = 1112014848;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 1;
	var uLocal_806 = 20;
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
	var uLocal_827 = 1036831949;
	var uLocal_828 = 1045220557;
	var uLocal_829 = 1036831949;
	var uLocal_830 = 0;
	var uLocal_831 = 1065353216;
	var uLocal_832 = 1077936128;
	var uLocal_833 = 1;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 20;
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
	var uLocal_932 = 4;
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
	int iLocal_943 = 0;
	int iLocal_944 = 0;
	int iLocal_945 = 0;
	int iLocal_946 = 0;
	int iLocal_947 = 0;
	int iLocal_948 = 0;
	int iLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	var uLocal_954 = 0;
	var uLocal_955 = 0;
	var uLocal_956 = 0;
	var uLocal_957 = 0;
	var uLocal_958 = -1;
	var uLocal_959 = 0;
	var uLocal_960 = 0;
	var uLocal_961 = 0;
	var uLocal_962 = 0;
	var uLocal_963 = 0;
	var uLocal_964 = 0;
	var uLocal_965 = 0;
	var uLocal_966 = 0;
	var uLocal_967 = 1097859072;
	var uLocal_968 = 1000;
	var uLocal_969 = 1067450368;
	var uLocal_970 = 5000;
	var uLocal_971 = 42;
	var uLocal_972 = 1103626240;
	var uLocal_973 = 1077936128;
	var uLocal_974 = 1106247680;
	var uLocal_975 = 1103101952;
	var uLocal_976 = 1097859072;
	var uLocal_977 = 1103626240;
	var uLocal_978 = 0;
	var uLocal_979 = 0;
	var uLocal_980 = 0;
	var uLocal_981 = 0;
	var uLocal_982 = 0;
	var uLocal_983 = 0;
	var uLocal_984 = 0;
	var uLocal_985 = 0;
	var uLocal_986 = 0;
	var uLocal_987 = -1;
	var uLocal_988 = 0;
	var uLocal_989 = 0;
	var uLocal_990 = 0;
	var uLocal_991 = 0;
	var uLocal_992 = 0;
	var uLocal_993 = 0;
	var uLocal_994 = 0;
	var uLocal_995 = 0;
	var uLocal_996 = 1097859072;
	var uLocal_997 = 1000;
	var uLocal_998 = 1067450368;
	var uLocal_999 = 5000;
	var uLocal_1000 = 42;
	var uLocal_1001 = 1103626240;
	var uLocal_1002 = 1077936128;
	var uLocal_1003 = 1106247680;
	var uLocal_1004 = 1103101952;
	var uLocal_1005 = 1097859072;
	var uLocal_1006 = 1103626240;
	var uLocal_1007 = 0;
	int iLocal_1008 = 0;
	var uLocal_1009 = 3;
	var uLocal_1010 = 0;
	var uLocal_1011 = 0;
	var uLocal_1012 = 0;
	var uLocal_1013 = 0;
	var uLocal_1014 = 96;
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
	struct<2> Local_1223 = { 0, 0 } ;
	var uLocal_1225 = 0;
	var uLocal_1226 = 0;
	var uLocal_1227 = 0;
	var uLocal_1228 = 0;
	var uLocal_1229 = 0;
	var uLocal_1230 = 0;
	struct<2> Local_1231[1];
	bool bLocal_1234 = false;
	bool bLocal_1235 = false;
	bool bLocal_1236 = false;
	struct<21> Local_1237[1];
	struct<17> Local_1259[1];
	struct<8> Local_1277 = { 0, 0, 0, 0, -1, 0, 0, 0 } ;
	var uLocal_1285 = 2;
	var uLocal_1286 = 1;
	var uLocal_1287 = 1;
	var uLocal_1288 = 1;
	var uLocal_1289 = 0;
	var uLocal_1290 = 1;
	var uLocal_1291 = 2;
	var uLocal_1292 = 2;
	var uLocal_1293 = 3;
	var uLocal_1294 = 0;
	var uLocal_1295 = 0;
	var uLocal_1296 = 3;
	var uLocal_1297 = 1;
	var uLocal_1298 = 3;
	var uLocal_1299 = 3;
	var uLocal_1300 = 0;
	var uLocal_1301 = 0;
	struct<8> Local_1302 = { 0, 0, 0, 0, -1, 0, 0, 0 } ;
	var uLocal_1310 = 2;
	var uLocal_1311 = 1;
	var uLocal_1312 = 1;
	var uLocal_1313 = 1;
	var uLocal_1314 = 0;
	var uLocal_1315 = 1;
	var uLocal_1316 = 2;
	var uLocal_1317 = 2;
	var uLocal_1318 = 3;
	var uLocal_1319 = 0;
	var uLocal_1320 = 0;
	var uLocal_1321 = 3;
	var uLocal_1322 = 1;
	var uLocal_1323 = 3;
	var uLocal_1324 = 3;
	var uLocal_1325 = 0;
	var uLocal_1326 = 0;
	var uLocal_1327 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion
void __EntryFunction__()
{
	struct<2606> Var0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	vLocal_33 = { 1357.82f, 554.93f, 87.64f };
	vLocal_36 = { -0.87f, -0.77f, -166.9f };
	vLocal_39 = { 1357.82f, 554.93f, 87.64f };
	vLocal_42 = { -1.163862f, 0.019707f, -166.9f };
	vLocal_45 = { 1357.28f, 554.64f, 86.33f };
	vLocal_48 = { 6.904197f, 2.40304f, -31.71833f };
	vLocal_51 = { 1357.28f, 554.64f, 86.33f };
	vLocal_54 = { 6.904197f, 2.40304f, -31.71833f };
	vLocal_57 = { 1357.28f, 554.64f, 86.33f };
	vLocal_60 = { 6.904197f, 2.40304f, -31.71833f };
	vLocal_63 = { 1024.56f, 724.29f, 109.46f };
	vLocal_66 = { 1009.77f, 710.43f, 110f };
	vLocal_69 = { 1316.53f, 576.02f, 86.55f };
	vLocal_72 = { 100f, 100f, 100f };
	vLocal_75 = { 1358.03f, 554.15f, 87.37f };
	vLocal_78 = { 1023.3f, 719.81f, 109.58f };
	fLocal_81 = 12.15f;
	fLocal_82 = 20f;
	fLocal_83 = 10000f;
	fLocal_84 = 10000f;
	sLocal_103 = "script_rc@masn@leadin@rsc_5";
	sLocal_104 = "script_rc@masn@leadin@rsc_6";
	cLocal_105 = "rcm_mason_herding";
	iLocal_108 = 5;
	iLocal_109 = 2;
	iLocal_110 = 4;
	iLocal_943 = joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
	iLocal_944 = joaat("P_CS_CAMERATRIPOD");
	iLocal_945 = joaat("P_CS_CAMERA");
	iLocal_946 = joaat("P_CS_CAMERABAG01X");
	iLocal_947 = joaat("P_CS_SHUTTERRELEASE");
	iLocal_948 = joaat("P_CAMERAFLASH01X");
	iLocal_949 = joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
	iLocal_1008 = 6336;
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
	__LIB_13__::func_160(uParam0);
	if (__LIB_0__::func_1(uParam0->f_172, 32))
	{
		__LIB_12__::func_954(uParam0, __LIB_10__::func_532(uParam0));
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
		if (!__LIB_0__::func_899(&(uParam0->f_2597)))
		{
			__LIB_4__::func_89(&(uParam0->f_2597), 0);
		}
		__LIB_0__::func_11(uParam0);
		if (__LIB_1__::func_592(&(uParam0->f_2597)) >= 2500 || CAM::IS_SCREEN_FADED_OUT())
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
	if (!__LIB_0__::func_899(&(uParam0->f_2585)) || IntToFloat(__LIB_1__::func_592(&(uParam0->f_2585))) > __LIB_10__::func_381(uParam0))
	{
		__LIB_4__::func_89(&(uParam0->f_2585), 1);
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
		iVar0 = __LIB_13__::func_952(uParam0);
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
		__LIB_14__::func_170(uParam0, __LIB_0__::func_58(uParam0));
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
		__LIB_13__::func_580(uParam0);
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
			if (!__LIB_0__::func_899(&(uParam0->f_2597)))
			{
				__LIB_4__::func_89(&(uParam0->f_2597), 0);
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
			else if (__LIB_1__::func_592(&(uParam0->f_2597)) >= 2500)
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
	else if (!__LIB_0__::func_899(&(uParam0->f_2585)) || IntToFloat(__LIB_1__::func_592(&(uParam0->f_2585))) > __LIB_2__::func_18(uParam0))
	{
		__LIB_4__::func_89(&(uParam0->f_2585), 1);
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
	__LIB_12__::func_975(uParam0);
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
		__LIB_12__::func_993(iVar1, 1, -1082130432 /* Float: -1f */, 1, 1, bVar2, 0);
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
	Local_142.f_188 = iLocal_943;
	__LIB_11__::func_487(&Local_142);
	__LIB_4__::func_228(&uLocal_979);
	__LIB_1__::func_401(&uLocal_979, 1);
	__LIB_1__::func_413(&uLocal_979, 1);
	__LIB_2__::func_829(&uLocal_979, 1);
	__LIB_1__::func_406(&uLocal_979, 0);
	__LIB_12__::func_658(uParam0, 7);
	__LIB_12__::func_659(uParam0, 7);
	if (__LIB_0__::func_181())
	{
		__LIB_12__::func_875(uParam0, Global_35, "JOHN", 1);
	}
	else
	{
		__LIB_12__::func_875(uParam0, Global_35, "ARTHUR", 1);
	}
	func_195();
}

void func_42(var uParam0)
{
	__LIB_12__::func_908(uParam0, 0);
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("MASON_PHOTO");
	STREAMING::REQUEST_PTFX_ASSET();
	__LIB_12__::func_867(uParam0, iLocal_946, 7);
	__LIB_12__::func_867(uParam0, iLocal_945, 7);
	__LIB_12__::func_867(uParam0, iLocal_944, 7);
	__LIB_12__::func_867(uParam0, iLocal_943, 7);
	__LIB_12__::func_867(uParam0, iLocal_949, 7);
	__LIB_12__::func_867(uParam0, iLocal_947, 7);
	__LIB_12__::func_867(uParam0, iLocal_948, 7);
	__LIB_13__::func_15(uParam0, cLocal_105, 2, -1, 2);
	__LIB_13__::func_55(uParam0, sLocal_103, 7);
	__LIB_13__::func_55(uParam0, sLocal_104, 2);
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
			Var1 = { 1354.078f, 543.9303f, 86.3807f };
			Var1.f_3 = 130.7667f;
			break;
		case 1:
			Var1 = { 999.8287f, 735.5806f, 109.5992f };
			Var1.f_3 = 238.6621f;
			break;
		case 2:
			Var1 = { 1243.058f, 578.7728f, 88.1274f };
			Var1.f_3 = 256.3231f;
			break;
		case 3:
			Var1 = { 1354.252f, 527.3965f, 86.2379f };
			Var1.f_3 = 343.3264f;
			break;
		case 4:
			Var1 = { 1280.624f, 552.8527f, 89.9844f };
			Var1.f_3 = 172.4021f;
			break;
	}
	return Var1;
}

bool func_62(var uParam0)
{
	return func_211(*uParam0, uParam0->f_3);
}

bool func_64(var uParam0)
{
	if (!__LIB_0__::func_272(iLocal_15, 1))
	{
		StringCopy(&(uParam0->f_2578), "MASON1_MF", 24);
		return true;
	}
	if (FIRE::IS_ENTITY_ON_FIRE(iLocal_15))
	{
		__LIB_4__::func_63(iLocal_15, 0);
		StringCopy(&(uParam0->f_2578), "MASON1_MF", 24);
		return true;
	}
	if (!PED::IS_PED_FLEEING(iLocal_15))
	{
		if (__LIB_17__::func_575(iLocal_15, 0, &uLocal_950, &uLocal_978, 0, 0))
		{
			if (__LIB_12__::func_876(uParam0, "RMASN_SPOOK", 0))
			{
				StringCopy(&(uParam0->f_2578), "MASN3_F_MASCARD", 24);
				TASK::CLEAR_PED_SECONDARY_TASK(Global_1347702[uParam0->f_174 /*49*/].f_43);
				TASK::TASK_SMART_FLEE_PED(iLocal_15, Global_35, 1000f, -1, 0, 1077936128 /* Float: 3f */, 0);
				return true;
			}
		}
	}
	if (PED::IS_PED_DEAD_OR_DYING(iLocal_16, true))
	{
		StringCopy(&(uParam0->f_2578), "MASN3_F_MHORSE", 24);
		return true;
	}
	if (__LIB_2__::func_173(PLAYER::PLAYER_ID(), 1, 1, 0))
	{
		StringCopy(&(uParam0->f_2578), "MASON_F_LAW", 24);
		return true;
	}
	if (iLocal_108 <= 1)
	{
		if (func_217(&(Local_142.f_2), 0, &uLocal_979, &uLocal_1007, 0, -1))
		{
			__LIB_13__::func_991(&Local_142, 1);
			StringCopy(&(uParam0->f_2578), "MASN3_F_HRSCARD", 24);
			return true;
		}
	}
	if (iLocal_108 == 1 || iLocal_108 == 2)
	{
		if (__LIB_11__::func_468(&Local_142) <= 2)
		{
			StringCopy(&(uParam0->f_2578), "MASN3_F_HORSE", 24);
			return true;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_142.f_2[0]))
		{
			StringCopy(&(uParam0->f_2578), "MASN3_F_PLOST", 24);
			return true;
		}
		else if (ENTITY::IS_ENTITY_DEAD(Local_142.f_2[0]) || PED::IS_PED_FATALLY_INJURED(Local_142.f_2[0]))
		{
			StringCopy(&(uParam0->f_2578), "MASN3_F_PINTO", 24);
			return true;
		}
	}
	if (iLocal_108 == 2 || iLocal_108 == 3)
	{
		if (iLocal_112 == 1 && __LIB_11__::func_474(&Local_142, 0))
		{
			StringCopy(&(uParam0->f_2578), "MASN3_F_NOPIC", 24);
			return true;
		}
	}
	if (func_221(uParam0))
	{
		StringCopy(&(uParam0->f_2578), "MASN1_F_LEFT", 24);
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
	if (func_224(uParam0->f_174))
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
	if (func_233(uParam0) || __LIB_12__::func_663(uParam0->f_174, uParam0->f_743))
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
	__LIB_12__::func_955();
	func_238(uParam0);
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
	__LIB_12__::func_975(uParam0);
	__LIB_1__::func_564(0);
	__LIB_12__::func_966(uParam0, 0);
	__LIB_12__::func_918(uParam0, 4);
	__LIB_0__::func_8(&(uParam0->f_172), 8);
	__LIB_0__::func_8(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 1024);
	__LIB_0__::func_8(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 64);
	__LIB_0__::func_7(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 4);
	__LIB_1__::func_561(&(uParam0->f_2585));
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
			func_253(uParam0);
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

bool func_85(var uParam0)
{
	if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_13, 64))
	{
		return true;
	}
	if (__LIB_12__::func_924(uParam0) && func_278(uParam0))
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
	func_297(uParam0, 0, 0);
}

void func_91(var uParam0)
{
	func_298(uParam0, &iLocal_15, &uLocal_1207, &uLocal_1009, 1, 4, 30f, 1073741824 /* Float: 2f */, 1092616192 /* Float: 10f */, 0);
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
		__LIB_14__::func_170(uParam0, bVar0);
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
		if (uParam0->f_171 != 0 || func_299(uParam0))
		{
			if (__LIB_13__::func_40(uParam0))
			{
				return true;
			}
		}
	}
	return false;
}

int func_96(var uParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	bVar0 = false;
	UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
	iVar1 = iParam1;
	Var2 = { func_61(iParam1) };
	if ((func_303(uParam0) && func_304(uParam0, 0)) && func_305())
	{
		bVar0 = true;
	}
	if (!func_306())
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
		return 2;
	}
	if (iVar1 >= 1 && iVar1 <= 2)
	{
		if (__LIB_0__::func_895(Global_1347702[103 /*49*/].f_15) == 1)
		{
			iVar6 = iLocal_16;
		}
		else
		{
			iVar6 = func_308(1, 1, 1, Var2, Var2.f_1, Var2.f_2, Var2.f_3);
		}
		if (__LIB_0__::func_272(iVar6, 1))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iVar6, Var2, Var2.f_3, false, false, true);
			PED::_SET_PED_ON_MOUNT(Global_35, iVar6, -1, true);
		}
		else
		{
			bVar0 = false;
		}
	}
	else
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, Var2, Var2.f_3, false, false, true);
	}
	if (!bVar0)
	{
		return 2;
	}
	if (iVar1 == 2)
	{
		if (!bLocal_102)
		{
			func_309();
			bLocal_102 = true;
			return 2;
		}
	}
	else if (iVar1 >= 3)
	{
		if (!bLocal_102)
		{
			func_310();
			bLocal_102 = true;
			return 2;
		}
	}
	else
	{
		func_311();
	}
	switch (iVar1)
	{
		case 0:
			if (__LIB_12__::func_936(uParam0))
			{
				if (!__LIB_0__::func_1(uParam0->f_172, 16))
				{
					func_297(uParam0, 0, 0);
				}
				__LIB_12__::func_997(uParam0, func_61(0), func_61(1), 0, 1, 0);
				return 5;
			}
			else
			{
				func_313(uParam0, 0, 0);
				__LIB_12__::func_997(uParam0, func_61(0), func_61(1), 0, 1, 0);
				__LIB_13__::func_105(1, 1);
				return 7;
			}
			break;
		case 1:
			func_313(uParam0, 1, 1);
			__LIB_12__::func_997(uParam0, func_61(1), func_61(2), 1, 2, 0);
			__LIB_13__::func_105(1, 1);
			return 7;
		case 2:
			__LIB_18__::func_720(&Local_142, -1082130432 /* Float: -1f */);
			if (!__LIB_0__::func_899(&uLocal_136))
			{
				__LIB_2__::func_259(&uLocal_136);
			}
			else if (__LIB_1__::func_583(&uLocal_136) > 1.5f)
			{
				func_313(uParam0, 1, 1);
				func_313(uParam0, 2, 1);
				func_313(uParam0, 3, 1);
				if (func_317(&Local_142, 3))
				{
				}
				__LIB_9__::func_438(3);
				func_319(uParam0, 4);
				__LIB_13__::func_953(&Local_142);
				iLocal_112 = 1;
				__LIB_12__::func_997(uParam0, func_61(2), func_61(4), 2, 4, 0);
				__LIB_13__::func_105(1, 1);
				return 7;
			}
			break;
		case 3:
			func_297(uParam0, 1, 0);
			func_313(uParam0, 1, 1);
			func_313(uParam0, 2, 1);
			func_313(uParam0, 3, 1);
			func_313(uParam0, 4, 1);
			func_297(uParam0, 1, 0);
			iLocal_112 = 2;
			iLocal_107 = 2;
			__LIB_13__::func_991(&Local_142, 1);
			UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
			__LIB_12__::func_997(uParam0, func_61(2), func_61(4), 2, 4, 0);
			__LIB_13__::func_105(1, 1);
			return 7;
		case 4:
			if (__LIB_4__::func_511())
			{
				if (!__LIB_0__::func_1(uParam0->f_172, 16))
				{
					func_297(uParam0, 1, 1);
				}
				func_313(uParam0, 1, 1);
				func_313(uParam0, 2, 1);
				func_313(uParam0, 3, 1);
				func_313(uParam0, 4, 1);
				__LIB_12__::func_997(uParam0, func_61(4), func_61(4), 4, 4, 0);
				iLocal_112 = 2;
				iLocal_107 = 2;
				__LIB_13__::func_991(&Local_142, 1);
				return 5;
			}
			else
			{
				func_313(uParam0, 1, 1);
				func_313(uParam0, 2, 1);
				func_313(uParam0, 3, 1);
				func_313(uParam0, 4, 1);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, 1354.483f, 544.055f, 86.3673f, 188.0091f, true, false, true);
				iLocal_112 = 2;
				iLocal_107 = 2;
				__LIB_13__::func_991(&Local_142, 1);
				__LIB_13__::func_105(1, 1);
				UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
				return 8;
			}
			break;
		default:
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
		if (!__LIB_13__::func_448(uParam0))
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
		__LIB_14__::func_170(uParam0, 0);
		if (!__LIB_0__::func_1(uParam0->f_172, 1048576))
		{
			return false;
		}
	}
	else
	{
		__LIB_12__::func_668();
		__LIB_12__::func_669(uParam0);
		if (!__LIB_13__::func_449(uParam0))
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
	return func_334(Var0, &(uParam0->f_206), uParam0);
}

int func_103(var uParam0)
{
	switch (iLocal_109)
	{
		case 0:
			func_311();
			func_313(uParam0, 0, 0);
			if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_15, -1))
			{
				if (func_338(0, 0, 0))
				{
					if (func_339())
					{
						func_340();
					}
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_16))
			{
				AITRANSPORT::_0xBA8818212633500A(iLocal_16, 0, 0);
			}
			break;
		case 1:
			func_341(&Local_142);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_16))
			{
				AITRANSPORT::_0xBA8818212633500A(iLocal_16, 0, 1);
			}
			if (!__LIB_1__::func_707(joaat("DOCUMENT_MASONS_PHOTO"), 1, 0))
			{
				func_343(joaat("DOCUMENT_MASONS_PHOTO"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (func_338(0, 1, 0))
			{
				if (func_339())
				{
					func_340();
				}
			}
			return 8;
	}
	return 7;
}

bool func_104(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_172, 256) && !__LIB_0__::func_1(uParam0->f_172, 1024))
	{
		if (!__LIB_13__::func_448(uParam0))
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
	char* sVar0;
	vector3 vVar1;
	__LIB_13__::func_928();
	POPULATION::_0xF45E46DEECF7DF6E(iLocal_1008, 0, 0, -1, -1);
	func_347();
	switch (iLocal_108)
	{
		case 0:
			func_319(uParam0, 32);
			if (MAP::DOES_BLIP_EXIST(iLocal_18) && __LIB_0__::func_797(7))
			{
				__LIB_1__::func_718(7);
				__LIB_1__::func_643();
				__LIB_0__::func_325(&iLocal_18);
			}
			else if ((ENTITY::DOES_ENTITY_EXIST(iLocal_16) && !__LIB_0__::func_797(7)) && !MAP::DOES_BLIP_EXIST(iLocal_18))
			{
				iLocal_18 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_COMPANION"), iLocal_16);
				MAP::_BLIP_SET_MODIFIER(iLocal_18, joaat("BLIP_MODIFIER_FRIENDLY_OBJECTIVE"));
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_18, "MASON_D_HORSE");
			}
			if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_15, -1))
			{
				if (func_338(0, 0, 0))
				{
					if (func_339())
					{
						func_340();
					}
				}
			}
			func_298(uParam0, &iLocal_15, &uLocal_1211, &uLocal_1009, 5, 8, 15f, 1073741824 /* Float: 2f */, 1092616192 /* Float: 10f */, 0);
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				if (__LIB_4__::func_68(func_352(32), 1))
				{
					__LIB_4__::func_353();
					__LIB_0__::func_769();
				}
				if (PED::GET_MOUNT(Global_35) == iLocal_16 && !bLocal_101)
				{
					if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true))
					{
						if (!__LIB_5__::func_463())
						{
							if (__LIB_0__::func_181())
							{
								sVar0 = "RMASN_3_MHORSEJ";
							}
							else
							{
								sVar0 = "RMASN_3_MHORSE";
							}
							if (__LIB_12__::func_876(uParam0, sVar0, 0))
							{
								func_313(uParam0, 1, 0);
								bLocal_101 = true;
							}
						}
					}
				}
				else
				{
					func_313(uParam0, 1, 0);
				}
			}
			break;
		case 1:
			if (!PED::IS_PED_ON_MOUNT(Global_35))
			{
				func_313(uParam0, 0, 0);
			}
			if (!bLocal_100)
			{
				func_319(uParam0, 1);
			}
			if (MAP::DOES_BLIP_EXIST(iLocal_18))
			{
				vVar1 = { __LIB_11__::func_467(&Local_142, 0) };
				MAP::SET_BLIP_COORDS(iLocal_18, vVar1);
			}
			if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_15, -1))
			{
				if (func_338(0, 0, 0))
				{
					if (func_339())
					{
						func_340();
					}
				}
			}
			if (__LIB_18__::func_721(&Local_142, Global_36, fLocal_82) || __LIB_0__::func_94(Global_35, vLocal_63, 1) <= fLocal_82)
			{
				func_313(uParam0, 2, 0);
			}
			else
			{
				Jump @1259; //curOff = 517
				if (!bLocal_100)
				{
					func_319(uParam0, 2);
				}
				if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_15, Local_1231[0 /*2*/]))
				{
					if (func_338(0, 0, 0))
					{
						if (func_339())
						{
							if (func_340())
							{
							}
						}
					}
				}
				else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1231[0 /*2*/]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_1231[0 /*2*/], false))
				{
					if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_1231[0 /*2*/], "PL_TakePhotos") && !ANIMSCENE::_0x23E33CB9F4A3F547(Local_1231[0 /*2*/], "PL_TakePhotos"))
					{
						if (ANIMSCENE::_0xDF7B5144E25CD3FE(Local_1231[0 /*2*/], "PL_TakePhotos"))
						{
						}
					}
				}
				if (PED::IS_PED_ON_MOUNT(Global_35))
				{
					__LIB_1__::func_448(Global_35, ENTITY::GET_ENTITY_COORDS(iLocal_15, false, false), 0, 1112014848 /* Float: 50f */, 20f, 10f, 8f, 1, 1, 1, 0);
				}
				func_360(uParam0);
				func_361();
				func_362();
				if (func_363(uParam0))
				{
					func_313(uParam0, 3, 0);
				}
				Jump @1259; //curOff = 742
				if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_15, Local_1231[0 /*2*/]))
				{
					if (func_338(0, 0, 0))
					{
						if (func_339())
						{
							if (func_340())
							{
							}
						}
					}
				}
				else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1231[0 /*2*/]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_1231[0 /*2*/], false))
				{
					if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_1231[0 /*2*/], "PL_TakePhotos") && !ANIMSCENE::_0x23E33CB9F4A3F547(Local_1231[0 /*2*/], "PL_TakePhotos"))
					{
						if (ANIMSCENE::_0xDF7B5144E25CD3FE(Local_1231[0 /*2*/], "PL_TakePhotos"))
						{
						}
					}
				}
				func_362();
				if (PED::IS_PED_ON_MOUNT(Global_35))
				{
					__LIB_13__::func_332(Global_35, ENTITY::GET_ENTITY_COORDS(iLocal_15, false, false), &uLocal_139, 1112014848 /* Float: 50f */, 20f, 10f, 8f, 1082130432 /* Float: 4f */, 1, 0, 1, 1, 1);
				}
				if (func_363(uParam0))
				{
					func_297(uParam0, 1, 0);
					if (func_298(uParam0, &iLocal_15, &uLocal_1215, &uLocal_1009, 19, 21, 100f, 2f, 3f, 0) >= 1)
					{
						func_319(uParam0, 8);
						if (!MAP::DOES_BLIP_EXIST(iLocal_18))
						{
							iLocal_18 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_COMPANION"), iLocal_15);
							MAP::_BLIP_SET_MODIFIER(iLocal_18, joaat("BLIP_MODIFIER_FRIENDLY_OBJECTIVE"));
							MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_18, "MASON_B_MASON");
						}
					}
					if (!__LIB_0__::func_899(&uLocal_121))
					{
						__LIB_2__::func_259(&uLocal_121);
					}
					if (__LIB_9__::func_178(&uLocal_121) > 2f)
					{
						func_313(uParam0, 4, 0);
					}
				}
				Jump @1259; //curOff = 1069
				func_363(uParam0);
				func_362();
				if (PED::IS_PED_ON_MOUNT(Global_35))
				{
					__LIB_13__::func_332(Global_35, ENTITY::GET_ENTITY_COORDS(iLocal_15, false, false), &uLocal_139, 1112014848 /* Float: 50f */, 20f, 10f, 8f, 1082130432 /* Float: 4f */, 1, 0, 1, 1, 1);
				}
				if (__LIB_0__::func_665(Global_35, iLocal_15, 1, 1) > 25f)
				{
					func_298(uParam0, &iLocal_15, &uLocal_1215, &uLocal_1009, 19, 21, 100f, 2f, 3f, 0);
				}
				if (!bLocal_100)
				{
					func_319(uParam0, 8);
				}
				__LIB_14__::func_52(&(uParam0->f_753), uParam0->f_2581, 0, 0);
				if (__LIB_12__::func_670(&(uParam0->f_753)))
				{
					__LIB_13__::func_991(&Local_142, 1);
					__LIB_0__::func_7(&(uParam0->f_172), 262144);
					return 5;
				}
			}
			return 7;
			default:
				break;
	}
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
		func_400(Global_1347702[iParam0 /*49*/].f_15, bParam4, bParam2, bParam6, bParam5);
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
	vVar2 = { func_404(Global_2621440[0 /*12066*/].f_9.f_7, &uVar0, &uVar1, 0, 1, 1, 0, 0, 0) };
	__LIB_0__::func_321(vVar2, uVar1, uVar0, 0);
	__LIB_0__::func_322(vVar2);
	Global_40.f_9.f_15 = __LIB_1__::func_447(vVar2, 0);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	MISC::SET_RANDOM_WEATHER_TYPE(false, true);
}

void func_138(var uParam0)
{
	__LIB_5__::func_20(0, 0);
}

bool func_150(var uParam0)
{
	vector3 vVar0[24];
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_15))
	{
		if (!PED::IS_PED_FLEEING(iLocal_15))
		{
			if (__LIB_17__::func_575(iLocal_15, 0, &uLocal_950, &uLocal_978, 0, 0))
			{
				if (__LIB_12__::func_876(uParam0, "RMASN_SPOOK", 0))
				{
					TASK::CLEAR_PED_SECONDARY_TASK(Global_1347702[uParam0->f_174 /*49*/].f_43);
					TASK::TASK_SMART_FLEE_PED(iLocal_15, Global_35, 1000f, -1, 0, 1077936128 /* Float: 3f */, 0);
				}
			}
		}
		switch (__LIB_12__::func_644(uParam0))
		{
			case 0:
				if (__LIB_13__::func_109(iLocal_15, -1082130432 /* Float: -1f */, 1116471296 /* Float: 70f */) && __LIB_0__::func_94(Global_35, 1357.93f, 554.82f, 86.38f, 1) > 75f)
				{
					return true;
				}
				else if (!PED::IS_PED_FLEEING(iLocal_15))
				{
					func_430();
					if (!__LIB_5__::func_463())
					{
						func_298(uParam0, &iLocal_15, &uLocal_1219, &uLocal_1009, 22, 25, 15f, 2f, 5f, 0);
					}
					if (!bLocal_1234)
					{
						if (!bLocal_1235)
						{
							func_431();
							bLocal_1235 = true;
						}
						else if (!bLocal_1236)
						{
							func_433(&iLocal_15, &(Local_1237[0 /*21*/]), 8f, &Local_1259, 0.25f, 3, 1, "", __LIB_2__::func_340(5, 0, 0), 0, 0, 2, -1082130432 /* Float: -1f */);
							if (__LIB_9__::func_754(&(Local_1237[0 /*21*/])))
							{
								bLocal_1236 = true;
								__LIB_2__::func_411(&(Local_1259[0 /*17*/]), 0, 0);
								if (__LIB_5__::func_463())
								{
									__LIB_5__::func_20(1, 0);
								}
							}
						}
						else
						{
							func_433(&iLocal_15, &(Local_1237[0 /*21*/]), 8f, &Local_1259, 0.25f, 3, 1, "", __LIB_2__::func_340(5, 0, 0), 0, 0, 2, -1082130432 /* Float: -1f */);
							if (!__LIB_5__::func_463())
							{
								if (__LIB_0__::func_181())
								{
									StringCopy(&cVar0, "RMASN_3_ILO_J", 24);
								}
								else
								{
									StringCopy(&cVar0, "RMASN_3_ILO_A", 24);
								}
								if (__LIB_12__::func_876(uParam0, &cVar0, 0))
								{
									Local_1277.f_4 = 21030;
									Local_1277.f_3 = Global_35;
									Local_1277.f_7 = 10000;
									Local_1302.f_4 = 21030;
									Local_1302.f_3 = iLocal_15;
									Local_1302.f_7 = 10000;
									_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_15, &Local_1277);
									_NAMESPACE29::_0x66F9EB44342BB4C5(Global_35, &Local_1302);
									bLocal_1234 = true;
								}
							}
						}
					}
					else
					{
						func_433(&iLocal_15, &(Local_1237[0 /*21*/]), 8f, &Local_1259, 0.25f, 3, 1, "", __LIB_2__::func_340(5, 0, 0), 0, 0, 2, -1082130432 /* Float: -1f */);
					}
				}
				break;
			case 11:
				if ((__LIB_13__::func_109(iLocal_15, -1082130432 /* Float: -1f */, 1116471296 /* Float: 70f */) && !__LIB_6__::func_904()) && __LIB_0__::func_94(Global_35, 1357.93f, 554.82f, 86.38f, 1) > 75f)
				{
					return true;
				}
				break;
			case 3:
				__LIB_13__::func_995(uParam0, &uLocal_1009, 0, &iLocal_15, 1, (56f + 5f), 0, 0);
				if (__LIB_13__::func_109(iLocal_15, -1082130432 /* Float: -1f */, 1116471296 /* Float: 70f */) && __LIB_0__::func_94(Global_35, 1357.93f, 554.82f, 86.38f, 1) > 75f)
				{
					return true;
				}
				if (!PED::IS_PED_FLEEING(iLocal_15))
				{
					func_430();
				}
				break;
			default:
				if (__LIB_13__::func_109(iLocal_15, -1082130432 /* Float: -1f */, 1116471296 /* Float: 70f */) && __LIB_0__::func_94(Global_35, 1357.93f, 554.82f, 86.38f, 1) > 75f)
				{
					return true;
				}
				break;
		}
	}
	else if (__LIB_13__::func_109(iLocal_15, -1082130432 /* Float: -1f */, 1116471296 /* Float: 70f */) && __LIB_0__::func_94(Global_35, 1357.93f, 554.82f, 86.38f, 1) > 75f)
	{
		return true;
	}
	return false;
}

void func_159(var uParam0)
{
	int iVar0;
	__LIB_0__::func_105(1);
	__LIB_13__::func_991(&Local_142, 0);
	func_439(uParam0);
	__LIB_2__::func_788(&iLocal_15, 1, 0, 1);
	__LIB_2__::func_788(&iLocal_16, 1, 0, 1);
	__LIB_2__::func_145(iLocal_17, 0);
	__LIB_1__::func_951(&iLocal_25);
	__LIB_1__::func_951(&iLocal_27);
	__LIB_1__::func_951(&iLocal_26);
	__LIB_1__::func_951(&iLocal_29);
	__LIB_1__::func_951(&iLocal_28);
	__LIB_9__::func_400(&uLocal_30, vLocal_45 - vLocal_72, vLocal_45 + vLocal_72, 0, 0);
	if (PED::_0x91A5F9CBEBB9D936(uLocal_1327))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_1327, false);
	}
	__LIB_0__::func_172(iLocal_20);
	__LIB_0__::func_172(iLocal_21);
	__LIB_0__::func_172(iLocal_22);
	__LIB_0__::func_172(iLocal_23);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		__LIB_3__::func_319(Local_1231[iVar0 /*2*/]);
		iVar0++;
	}
	STREAMING::REMOVE_ANIM_DICT(sLocal_103);
	STREAMING::REMOVE_ANIM_DICT(sLocal_104);
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	STREAMING::REMOVE_PTFX_ASSET();
	if (CAM::DOES_CAM_EXIST(iLocal_31))
	{
		CAM::SET_CAM_ACTIVE(iLocal_31, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::DESTROY_CAM(iLocal_31, false);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_946);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_945);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_944);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_949);
}

void func_195()
{
	__LIB_13__::func_634(&uLocal_1009);
	__LIB_13__::func_919(&uLocal_1009, 0, "MASN_3_TOD1");
	__LIB_13__::func_919(&uLocal_1009, 1, "RMASN_3_CAM");
	__LIB_13__::func_919(&uLocal_1009, 2, "RMASN_3_CAM");
	__LIB_13__::func_919(&uLocal_1009, 3, "RMASN_3_CAM");
	__LIB_13__::func_919(&uLocal_1009, 4, "RMASN_3_CAM");
	__LIB_13__::func_919(&uLocal_1009, 5, "RMASN_3_DAWDLE");
	__LIB_13__::func_919(&uLocal_1009, 6, "RMASN_3_DAWDLE");
	__LIB_13__::func_919(&uLocal_1009, 7, "RMASN_3_DAWDLE");
	__LIB_13__::func_919(&uLocal_1009, 8, "RMASN_3_DAWDLE");
	if (__LIB_0__::func_181())
	{
		__LIB_13__::func_919(&uLocal_1009, 18, "RMASN_3_LAKE_J");
		__LIB_13__::func_919(&uLocal_1009, 9, "RMASN_3_YELLH_J");
		__LIB_13__::func_919(&uLocal_1009, 10, "RMASN_3_YELLH_J");
		__LIB_13__::func_919(&uLocal_1009, 11, "RMASN_3_YELLH_J");
		__LIB_13__::func_919(&uLocal_1009, 12, "RMASN_3_YELLH_J");
		__LIB_13__::func_919(&uLocal_1009, 13, "RMASN_3_YELLH_J");
		__LIB_13__::func_919(&uLocal_1009, 14, "RMASN_3_YELLH_J");
		__LIB_13__::func_919(&uLocal_1009, 15, "RMASN_3_WRNG_J");
		__LIB_13__::func_919(&uLocal_1009, 16, "RMASN_3_WRNG_J");
		__LIB_13__::func_919(&uLocal_1009, 17, "RMASN_3_WRNG_J");
		__LIB_13__::func_919(&uLocal_1009, 19, "RMASN_3_CO_J");
		__LIB_13__::func_919(&uLocal_1009, 20, "RMASN_3_CO_J");
		__LIB_13__::func_919(&uLocal_1009, 21, "RMASN_3_CO_J");
		__LIB_13__::func_919(&uLocal_1009, 26, "RMASN_3_ILO_J");
	}
	else
	{
		__LIB_13__::func_919(&uLocal_1009, 18, "RMASN_3_LAKE_A");
		__LIB_13__::func_919(&uLocal_1009, 9, "RMASN_3_YELLH_A");
		__LIB_13__::func_919(&uLocal_1009, 10, "RMASN_3_YELLH_A");
		__LIB_13__::func_919(&uLocal_1009, 11, "RMASN_3_YELLH_A");
		__LIB_13__::func_919(&uLocal_1009, 12, "RMASN_3_YELLH_A");
		__LIB_13__::func_919(&uLocal_1009, 13, "RMASN_3_YELLH_A");
		__LIB_13__::func_919(&uLocal_1009, 14, "RMASN_3_YELLH_A");
		__LIB_13__::func_919(&uLocal_1009, 15, "RMASN_3_WRNG_A");
		__LIB_13__::func_919(&uLocal_1009, 16, "RMASN_3_WRNG_A");
		__LIB_13__::func_919(&uLocal_1009, 17, "RMASN_3_WRNG_A");
		__LIB_13__::func_919(&uLocal_1009, 19, "RMASN_3_CO_A");
		__LIB_13__::func_919(&uLocal_1009, 20, "RMASN_3_CO_A");
		__LIB_13__::func_919(&uLocal_1009, 21, "RMASN_3_CO_A");
		__LIB_13__::func_919(&uLocal_1009, 26, "RMASN_3_ILO_A");
	}
	__LIB_13__::func_919(&uLocal_1009, 22, "RMASN_3_END1");
	__LIB_13__::func_919(&uLocal_1009, 23, "RMASN_3_END2");
	__LIB_13__::func_919(&uLocal_1009, 24, "RMASN_3_END3");
	__LIB_13__::func_919(&uLocal_1009, 25, "RMASN_3_END4");
}

int func_211(vector3 vParam0, var uParam3)
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
		iVar0 = func_500(0, 0);
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

bool func_217(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	if (iParam5 < 0 || iParam5 >= *uParam0)
	{
		iParam5 = (*uParam0 - 1);
	}
	iVar0 = iParam4;
	while (iVar0 <= iParam5)
	{
		if (__LIB_17__::func_575((*uParam0)[iVar0], iParam1, uParam2, uParam3, 0, 0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_221(var uParam0)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_19))
	{
		iLocal_19 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1188.646f, 637.7131f, 113.8258f, 0f, 0f, -12.24275f, 439.4644f, 318.0392f, 40.16493f, "Distance fail volume");
	}
	else if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_19, true, 0) && bLocal_100)
	{
		StringCopy(&(uParam0->f_2578), "MASN3_F_AREA", 24);
		return true;
	}
	else if (VOLUME::_DOES_VOLUME_EXIST(iLocal_20) && !ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_20, true, 0))
	{
		if (iLocal_108 <= 2)
		{
			func_319(uParam0, 16);
		}
		else
		{
			func_319(uParam0, 64);
		}
		bLocal_100 = true;
	}
	else
	{
		bLocal_100 = false;
	}
	return false;
}

bool func_224(int iParam0)
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

int func_233(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_1347702[uParam0->f_174 /*49*/].f_43))
	{
		if (!__LIB_0__::func_272(Global_1347702[uParam0->f_174 /*49*/].f_43, 1))
		{
			return 1;
		}
		else if ((PED::IS_PED_FLEEING(Global_1347702[uParam0->f_174 /*49*/].f_43) || PED::IS_PED_IN_COMBAT(Global_1347702[uParam0->f_174 /*49*/].f_43, 0)) || __LIB_17__::func_575(Global_1347702[uParam0->f_174 /*49*/].f_43, 0, &uLocal_950, &uLocal_978, 0, 0))
		{
			return 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_16) && ENTITY::IS_ENTITY_DEAD(iLocal_16))
	{
		return 1;
	}
	return 0;
}

void func_238(var uParam0)
{
	func_439(uParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_15))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_15))
		{
			switch (__LIB_12__::func_644(uParam0))
			{
				case 0:
					PED::SET_PED_KEEP_TASK(iLocal_15, true);
					break;
				case 11:
					if (__LIB_12__::func_876(uParam0, "RMASN_SPOOK", 0))
					{
						TASK::CLEAR_PED_SECONDARY_TASK(Global_1347702[uParam0->f_174 /*49*/].f_43);
						TASK::TASK_SMART_FLEE_PED(Global_1347702[uParam0->f_174 /*49*/].f_43, Global_35, 10000f, -1, 0, 1077936128 /* Float: 3f */, 0);
						PED::SET_PED_KEEP_TASK(Global_1347702[uParam0->f_174 /*49*/].f_43, true);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_1347702[uParam0->f_174 /*49*/].f_43, false);
					}
					break;
				case 3:
					if (__LIB_0__::func_272(iLocal_16, 0))
					{
						TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_15, Global_35, 6, 0, -1082130432 /* Float: -1f */, -1, iLocal_16);
					}
					else
					{
						TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_15, Global_35, 6, 0, -1082130432 /* Float: -1f */, -1, 0);
					}
					break;
			}
		}
	}
}

void func_253(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_172, 16))
	{
		__LIB_12__::func_966(uParam0, 0);
		func_87(uParam0);
	}
}

int func_278(var uParam0)
{
	bool bVar0;
	var uVar1;
	bVar0 = false;
	if ((func_303(uParam0) && func_304(uParam0, 0)) && func_305())
	{
		bVar0 = true;
	}
	if (!func_306())
	{
		bVar0 = false;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_21))
	{
		iLocal_21 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1185.735f, 648.3505f, 107.0451f, 0f, 0f, -22.84241f, 500.4463f, 296.888f, 73.025f, "Ambient scenario blocker vol");
		bVar0 = false;
	}
	else if (!PED::_0x91A5F9CBEBB9D936(uLocal_1327))
	{
		uLocal_1327 = func_617(iLocal_21, 0, 0, 224);
		bVar0 = false;
	}
	PED::_0x9851DE7AEC10B4E1(vLocal_45, 10f, 1, 0);
	if (bVar0)
	{
		iLocal_20 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1188.646f, 637.7131f, 113.8258f, 0f, 0f, -12.24275f, 287.0931f, 205.4674f, 40.16493f, "Horse and Danger Clear Volume");
		iLocal_22 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1338.335f, 578.7498f, 91.42702f, 0f, 0f, -10.00387f, 30.90483f, 24.09185f, 9.787452f, "Mason Camera Effect Volume");
		POPULATION::_0x18262CAFEBB5FBE1(iLocal_20, iLocal_1008, 0, 0, -1, -1, 0);
		__LIB_0__::func_566(iLocal_20, 0);
		__LIB_13__::func_954();
		__LIB_13__::func_260(uParam0, iLocal_15);
		__LIB_13__::func_223(&iLocal_15);
		PED::_0x9851DE7AEC10B4E1(Global_1347702[uParam0->f_174 /*49*/].f_24, 25f, 1, 0);
		PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, PLAYER::_0x0139637A3BFF8B6D(iLocal_15, &uVar1));
		return 1;
	}
	return 0;
}

void func_297(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	if (iLocal_109 == iParam1)
	{
		return;
	}
	iLocal_109 = iParam1;
	switch (iLocal_109)
	{
		case 0:
			StringCopy(&(uParam0->f_2575), "RMASN_RC5", 24);
			__LIB_12__::func_944(uParam0, &(uParam0->f_2575), 1);
			__LIB_12__::func_956(&(uParam0->f_753), Global_35, 0, 0);
			__LIB_12__::func_956(&(uParam0->f_753), iLocal_15, 0, 0);
			__LIB_12__::func_956(&(uParam0->f_753), iLocal_27, 0, 0);
			__LIB_12__::func_956(&(uParam0->f_753), iLocal_26, 0, 0);
			__LIB_12__::func_956(&(uParam0->f_753), iLocal_25, 0, 0);
			__LIB_12__::func_956(&(uParam0->f_753), iLocal_28, 0, 0);
			__LIB_12__::func_956(&(uParam0->f_753), iLocal_29, 0, 0);
			__LIB_12__::func_779(uParam0, __LIB_1__::func_440(uParam0->f_174));
			__LIB_12__::func_957(uParam0, Global_35, 0, 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_15, "AlbertMason", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_25, 0, 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_27, 0, 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_26, 0, 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_28, 0, 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_29, 0, 0, 0, 0);
			iVar0 = __LIB_11__::func_506(&Local_142, 0);
			__LIB_12__::func_957(uParam0, iVar0, "Horse_01", 0, 0, 0);
			if (__LIB_12__::func_936(uParam0))
			{
				__LIB_12__::func_909(&(uParam0->f_206));
				__LIB_0__::func_88(&(uParam0->f_206), 8388608);
				__LIB_0__::func_8(&(uParam0->f_172), 262144);
			}
			else
			{
				__LIB_12__::func_846(&(uParam0->f_206));
			}
			__LIB_13__::func_16(uParam0, 101882);
			__LIB_12__::func_981(uParam0, 101978);
			__LIB_0__::func_7(&(uParam0->f_172), 16);
			break;
		case 1:
			StringCopy(&(uParam0->f_2575), "RMASN_RC6", 24);
			__LIB_12__::func_944(uParam0, &(uParam0->f_2575), 0);
			__LIB_12__::func_956(&(uParam0->f_753), Global_35, 0, 0);
			__LIB_12__::func_956(&(uParam0->f_753), iLocal_15, 0, 0);
			__LIB_12__::func_956(&(uParam0->f_753), iLocal_27, 0, 0);
			__LIB_12__::func_956(&(uParam0->f_753), iLocal_26, 0, 0);
			__LIB_12__::func_956(&(uParam0->f_753), iLocal_25, 0, 0);
			__LIB_12__::func_956(&(uParam0->f_753), iLocal_28, 0, 0);
			__LIB_12__::func_956(&(uParam0->f_753), iLocal_29, 0, 0);
			__LIB_12__::func_779(uParam0, __LIB_1__::func_440(uParam0->f_174));
			__LIB_12__::func_957(uParam0, Global_35, 0, 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_15, "AlbertMason", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_25, 0, 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_27, 0, 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_26, 0, 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_28, 0, 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_29, 0, 0, 0, 0);
			if (bParam2)
			{
				__LIB_12__::func_909(&(uParam0->f_206));
				__LIB_0__::func_88(&(uParam0->f_206), 8388608);
			}
			else
			{
				__LIB_12__::func_846(&(uParam0->f_206));
			}
			__LIB_13__::func_16(uParam0, 102161);
			__LIB_12__::func_981(uParam0, 102201);
			__LIB_0__::func_7(&(uParam0->f_172), 16);
			break;
		case 2:
			StringCopy(&(uParam0->f_2575), "", 24);
			__LIB_0__::func_8(&(uParam0->f_172), 16);
			break;
	}
}

int func_298(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5, float fParam6, float fParam7, float fParam8, int iParam9)
{
	int iVar0;
	int iVar1;
	iVar0 = 6;
	if (!__LIB_0__::func_899(&(uParam2->f_1)))
	{
		__LIB_2__::func_259(&(uParam2->f_1));
	}
	iVar1 = (iParam4 + *uParam2);
	if (iVar1 > uParam3->f_4)
	{
		return 3;
	}
	if (iVar1 <= iParam5 && __LIB_9__::func_178(&(uParam2->f_1)) > __LIB_13__::func_913(*uParam2, fParam7, fParam8))
	{
		iVar0 = __LIB_13__::func_980(uParam0, uParam3, iVar1, iParam1, 0, fParam6, 0, iParam9);
		if (iVar0 == 1)
		{
			__LIB_2__::func_259(&(uParam2->f_1));
			*uParam2++;
		}
	}
	return iVar0;
}

bool func_299(var uParam0)
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	float fVar6;
	fVar0 = uParam0->f_745;
	bVar1 = false;
	if (!__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_12, 128))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) || PED::IS_PED_ON_MOUNT(Global_35))
		{
			func_658(uParam0, &bVar2, &fVar3, &fVar4, &iVar5, &fVar6);
			if (__LIB_13__::func_332(Global_35, Global_1347702[uParam0->f_174 /*49*/].f_24, &(uParam0->f_2591), iVar5, fVar4, fVar3, bVar2, fVar6, 0, 0, 1, 1, 1))
			{
				bVar1 = true;
			}
		}
	}
	if (uParam0->f_743 <= fVar0 || bVar1)
	{
		return true;
	}
	return false;
}

int func_303(var uParam0)
{
	if (bLocal_98)
	{
		return 1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_15))
	{
		iLocal_15 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Global_1347702[uParam0->f_174 /*49*/].f_43);
	}
	if (__LIB_0__::func_272(iLocal_15, 1))
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(iLocal_15))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_15, true, true);
		}
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(iLocal_15, vLocal_75, fLocal_81, false, true);
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_15, false);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_15, false);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_15, joaat("REL_PLAYER_ALLY"));
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_15, true);
		PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), iLocal_15, 8, 0, 1);
		__LIB_4__::func_228(&uLocal_950);
		__LIB_1__::func_402(&uLocal_950, 0);
		__LIB_12__::func_875(uParam0, iLocal_15, "ALBERT_MASON", 1);
		TASK::CLEAR_PED_TASKS(iLocal_15, true, false);
		bLocal_98 = true;
	}
	return 0;
}

int func_304(var uParam0, int iParam1)
{
	vector3 vVar0;
	float fVar3;
	if (bLocal_99)
	{
		return 1;
	}
	vVar0 = { 1373.294f, 540.463f, 85.9999f };
	fVar3 = 31.3227f;
	if (__LIB_13__::func_992(uParam0, &iLocal_16, iLocal_949, vVar0, fVar3, 0))
	{
		__LIB_7__::func_345(iLocal_16, 1);
		if (__LIB_13__::func_925(&iLocal_16, vVar0, fVar3, iParam1))
		{
			bLocal_99 = true;
		}
	}
	return 0;
}

int func_305()
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (bLocal_95 && bLocal_96)
	{
		return 1;
	}
	if (!bLocal_95)
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_23))
		{
			iLocal_23 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vLocal_66, 0f, 0f, 0f, 20f, 20f, 20f, "Mason 3 Herd Start Vol");
		}
		else
		{
			bLocal_95 = func_664(&Local_142, vLocal_66, 5, 1377.993f, 573.3588f, 87.8689f, 0f, 0f, -8.170991f, 64.80904f, 26.68939f, 8.980153f, iLocal_943, joaat("VOLCYLINDER"), iLocal_23, 0, 0, 0, 0, 0);
		}
	}
	if (bLocal_95 && !bLocal_96)
	{
		__LIB_13__::func_929(&Local_142, cLocal_105);
		func_666(&Local_142, 1, 0);
		__LIB_13__::func_930(&Local_142, 40f);
		func_668(&Local_142, 1);
		__LIB_13__::func_931(&Local_142, 0);
		__LIB_13__::func_955(&Local_142, 4);
		__LIB_13__::func_955(&Local_142, 32);
		__LIB_13__::func_955(&Local_142, 128);
		__LIB_13__::func_955(&Local_142, 2);
		__LIB_13__::func_955(&Local_142, 2048);
		iVar0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1330.438f, 591.5133f, 88.23487f, 0f, 0f, 0f, 106.8407f, 128.8736f, 27.61749f, "Mason 3 autowalk");
		__LIB_11__::func_488(&Local_142, iVar0, 0);
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (__LIB_0__::func_272(Local_142.f_2[iVar1], 0))
			{
				FLOCK::_0xAEB97D84CDF3C00B(Local_142.f_2[iVar1], 1);
				ENTITY::SET_ENTITY_COORDS(Local_142.f_2[iVar1], ENTITY::GET_ENTITY_COORDS(Local_142.f_2[iVar1], true, false) - Vector(10f, 0f, 0f), true, false, true, true);
				ENTITY::SET_ENTITY_LOD_DIST(Local_142.f_2[iVar1], 300);
				ENTITY::FREEZE_ENTITY_POSITION(Local_142.f_2[iVar1], true);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_142.f_2[iVar1], 1);
				AITRANSPORT::_0xBA8818212633500A(Local_142.f_2[iVar1], 0, 1);
				switch (iVar1)
				{
					case 0:
						iVar2 = Local_142.f_2[iVar1];
						__LIB_0__::func_511(iVar2);
						PED::_UPDATE_PED_VARIATION(iVar2, false, true, true, true, false);
						break;
					case 1:
						iVar2 = Local_142.f_2[iVar1];
						__LIB_0__::func_511(iVar2);
						PED::_UPDATE_PED_VARIATION(iVar2, false, true, true, true, false);
						break;
					case 2:
						iVar2 = Local_142.f_2[iVar1];
						__LIB_0__::func_511(iVar2);
						PED::_UPDATE_PED_VARIATION(iVar2, false, true, true, true, false);
						break;
					case 3:
						iVar2 = Local_142.f_2[iVar1];
						__LIB_0__::func_511(iVar2);
						PED::_UPDATE_PED_VARIATION(iVar2, false, true, true, true, false);
						break;
					default:
						iVar2 = Local_142.f_2[iVar1];
						__LIB_0__::func_511(iVar2);
						PED::_UPDATE_PED_VARIATION(iVar2, false, true, true, true, false);
						break;
				}
			}
			iVar1++;
		}
		bLocal_96 = true;
	}
	return 0;
}

bool func_306()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_25))
	{
		iLocal_25 = OBJECT::CREATE_OBJECT(iLocal_946, vLocal_45, true, true, false, false, true);
		ENTITY::SET_ENTITY_COORDS(iLocal_25, vLocal_45, true, false, true, true);
		ENTITY::SET_ENTITY_ROTATION(iLocal_25, vLocal_48, 2, true);
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_25, false);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_25, true);
		ENTITY::SET_CAN_CLIMB_ON_ENTITY(iLocal_25, false);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_26))
	{
		iLocal_26 = OBJECT::CREATE_OBJECT(iLocal_944, vLocal_33, true, true, false, false, true);
		ENTITY::SET_ENTITY_COORDS(iLocal_26, vLocal_33, true, false, true, true);
		ENTITY::SET_ENTITY_ROTATION(iLocal_26, vLocal_36, 2, true);
		ENTITY::SET_CAN_CLIMB_ON_ENTITY(iLocal_26, false);
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_26, false);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_26, true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_944);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_27))
	{
		iLocal_27 = OBJECT::CREATE_OBJECT(iLocal_945, vLocal_39, true, true, false, false, true);
		ENTITY::SET_ENTITY_COORDS(iLocal_27, vLocal_39, true, false, true, true);
		ENTITY::SET_ENTITY_ROTATION(iLocal_27, vLocal_42, 2, true);
		ENTITY::SET_CAN_CLIMB_ON_ENTITY(iLocal_27, false);
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_27, false);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_27, true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_945);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_28))
	{
		iLocal_28 = OBJECT::CREATE_OBJECT(iLocal_947, vLocal_51, true, true, false, false, true);
		ENTITY::SET_ENTITY_COORDS(iLocal_28, vLocal_51, true, false, true, true);
		ENTITY::SET_ENTITY_ROTATION(iLocal_28, vLocal_54, 2, true);
		ENTITY::SET_CAN_CLIMB_ON_ENTITY(iLocal_28, false);
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_28, false);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_28, true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_947);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_29))
	{
		iLocal_29 = OBJECT::CREATE_OBJECT(iLocal_948, vLocal_57, true, true, false, false, true);
		ENTITY::SET_ENTITY_COORDS(iLocal_29, vLocal_57, true, false, true, true);
		ENTITY::SET_ENTITY_ROTATION(iLocal_29, vLocal_60, 2, true);
		ENTITY::SET_CAN_CLIMB_ON_ENTITY(iLocal_29, false);
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_29, false);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_29, true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_948);
	}
	if ((((ENTITY::DOES_ENTITY_EXIST(iLocal_25) && ENTITY::DOES_ENTITY_EXIST(iLocal_27)) && ENTITY::DOES_ENTITY_EXIST(iLocal_26)) && ENTITY::DOES_ENTITY_EXIST(iLocal_28)) && ENTITY::DOES_ENTITY_EXIST(iLocal_29))
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_25))
	{
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_27))
	{
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_26))
	{
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_29))
	{
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_28))
	{
	}
	return false;
}

int func_308(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	var uVar0;
	struct<11> Var1;
	Var1.f_10 = 7;
	Var1 = iParam0;
	Var1.f_1 = iParam1;
	Var1.f_2 = iParam2;
	Var1.f_6 = { uParam3, uParam4, uParam5 };
	Var1.f_9 = uParam6;
	return __LIB_4__::func_720(&uVar0, &Var1);
}

void func_309()
{
	int iVar0;
	int iVar1;
	vector3 vVar2[5];
	iVar1 = 0;
	vVar2[0 /*3*/] = { 1267.66f, 583.86f, 86.49f };
	vVar2[1 /*3*/] = { 1267.76f, 585.97f, 86.82f };
	vVar2[2 /*3*/] = { 1262.95f, 584.26f, 87.07f };
	vVar2[3 /*3*/] = { 1263.65f, 578.36f, 86.12f };
	vVar2[4 /*3*/] = { 1258.68f, 582.2f, 87.1f };
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = __LIB_11__::func_506(&Local_142, iVar1);
		if (!__LIB_0__::func_272(iVar0, 1))
		{
		}
		else
		{
			vVar2[iVar1 /*3*/].f_2 = (vVar2[iVar1 /*3*/].f_2 + 5f);
			MISC::GET_GROUND_Z_FOR_3D_COORD(vVar2[iVar1 /*3*/], &(vVar2[iVar1 /*3*/].f_2), false);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iVar0, vVar2[iVar1 /*3*/], MISC::GET_RANDOM_FLOAT_IN_RANGE(276f, 290f), true, false, true);
			ENTITY::FREEZE_ENTITY_POSITION(iVar0, false);
			PED::_0xAE6004120C18DF97(iVar0, 0, 0);
			PED::_0xAE6004120C18DF97(iVar0, 2, 0);
			PED::_0xAE6004120C18DF97(iVar0, 3, 0);
		}
		iVar1++;
	}
}

void func_310()
{
	int iVar0;
	int iVar1;
	vector3 vVar2[5];
	iVar1 = 0;
	vVar2[0 /*3*/] = { 1441.68f, 578.21f, 86.94f };
	vVar2[1 /*3*/] = { 1438.68f, 576.6f, 86.84f };
	vVar2[2 /*3*/] = { 1432.07f, 572.41f, 86.49f };
	vVar2[3 /*3*/] = { 1429.78f, 573.95f, 86.4f };
	vVar2[4 /*3*/] = { 1432.46f, 579.65f, 86.51f };
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = __LIB_11__::func_506(&Local_142, iVar1);
		if (!__LIB_0__::func_272(iVar0, 1))
		{
		}
		else
		{
			vVar2[iVar1 /*3*/].f_2 = (vVar2[iVar1 /*3*/].f_2 + 5f);
			MISC::GET_GROUND_Z_FOR_3D_COORD(vVar2[iVar1 /*3*/], &(vVar2[iVar1 /*3*/].f_2), false);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iVar0, vVar2[iVar1 /*3*/], MISC::GET_RANDOM_FLOAT_IN_RANGE(276f, 290f), true, false, true);
			ENTITY::FREEZE_ENTITY_POSITION(iVar0, false);
			PED::_0xAE6004120C18DF97(iVar0, 0, 0);
			PED::_0xAE6004120C18DF97(iVar0, 2, 0);
			PED::_0xAE6004120C18DF97(iVar0, 3, 0);
		}
		iVar1++;
	}
}

void func_311()
{
	vector3 vVar0[5];
	int iVar16;
	int iVar17;
	vVar0[0 /*3*/] = { vLocal_78 };
	vVar0[1 /*3*/] = { 1016.72f, 721.6f, 109.61f };
	vVar0[2 /*3*/] = { 1018.74f, 728.61f, 109.75f };
	vVar0[3 /*3*/] = { 1023.19f, 730.31f, 109.68f };
	vVar0[4 /*3*/] = { 1031.06f, 730.46f, 108.89f };
	iVar16 = 0;
	while (iVar16 < 5)
	{
		iVar17 = __LIB_11__::func_506(&Local_142, iVar16);
		if (__LIB_0__::func_272(iVar17, 0))
		{
			ENTITY::SET_ENTITY_COORDS(iVar17, vVar0[iVar16 /*3*/], true, false, true, true);
			TASK::TASK_ANIMAL_UNALERTED(iVar17, -1, 0, 0, 0);
			ENTITY::FREEZE_ENTITY_POSITION(iVar17, false);
			PED::_0xAE6004120C18DF97(iVar17, 0, 0);
			PED::_0xAE6004120C18DF97(iVar17, 2, 0);
			PED::_0xAE6004120C18DF97(iVar17, 3, 0);
		}
		iVar16++;
	}
}

void func_313(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	if (iLocal_108 == iParam1)
	{
		return;
	}
	switch (iLocal_108)
	{
		case 0:
			if (__LIB_0__::func_394(Global_35, iLocal_16, 0))
			{
				__LIB_1__::func_532(Global_1347702[103 /*49*/].f_15, 1);
			}
			else
			{
				__LIB_1__::func_532(Global_1347702[103 /*49*/].f_15, 0);
			}
			__LIB_1__::func_721(7);
			__LIB_0__::func_325(&iLocal_18);
			break;
		case 1:
			__LIB_0__::func_325(&iLocal_18);
			break;
		case 2:
			__LIB_0__::func_325(&iLocal_18);
			break;
		case 3:
			break;
		case 4:
			__LIB_0__::func_325(&iLocal_18);
			break;
		case 5:
			break;
	}
	iLocal_108 = iParam1;
	switch (iLocal_108)
	{
		case 0:
			func_677(0);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_15, joaat("REL_PLAYER_ALLY"));
			__LIB_18__::func_732(&Local_142, &Global_35, 0);
			__LIB_1__::func_681(&iLocal_94, 32);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_16))
			{
				AITRANSPORT::_0xBA8818212633500A(iLocal_16, 0, 0);
			}
			if (__LIB_0__::func_797(7))
			{
				__LIB_1__::func_718(7);
				__LIB_1__::func_643();
			}
			break;
		case 1:
			func_677(0);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_15, joaat("REL_PLAYER_ALLY"));
			__LIB_18__::func_732(&Local_142, &Global_35, 0);
			__LIB_11__::func_466(&Local_142);
			__LIB_13__::func_932(&Local_142, 0);
			__LIB_13__::func_933(&Local_142);
			iLocal_18 = __LIB_8__::func_777(408396114, vLocal_63, 35f, 1);
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_18, "MASN3_D_HERD");
			if (!bParam2)
			{
				__LIB_12__::func_997(uParam0, func_61(0), func_61(1), 0, 1, 0);
			}
			break;
		case 2:
			__LIB_9__::func_438(1);
			__LIB_13__::func_934(&Local_142);
			__LIB_13__::func_953(&Local_142);
			func_685(&Local_142, 1);
			fLocal_83 = __LIB_0__::func_94(Local_142.f_2[0], vLocal_69, 1);
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < 5)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_142.f_2[iVar0]))
				{
					PED::_0x06D26A96CA1BCA75(Local_142.f_2[iVar0], 3, 0.35f, Global_35);
				}
				iVar0++;
			}
			iLocal_18 = __LIB_4__::func_983(408396114, vLocal_69, 1);
			if (!bParam2)
			{
				__LIB_12__::func_997(uParam0, func_61(1), func_61(2), 1, 2, 0);
			}
			break;
		case 3:
			__LIB_0__::func_105(1);
			__LIB_0__::func_325(&iLocal_18);
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < 5)
			{
				if (MAP::DOES_BLIP_EXIST(Local_142.f_358[iVar0]))
				{
					MAP::REMOVE_BLIP(&(Local_142.f_358[iVar0]));
				}
				iVar0++;
			}
			__LIB_11__::func_522(&Local_142);
			func_677(3);
			if (!bParam2)
			{
				__LIB_12__::func_997(uParam0, func_61(2), func_61(4), 2, 4, 0);
			}
			break;
		case 4:
			__LIB_9__::func_438(4);
			if (!MAP::DOES_BLIP_EXIST(iLocal_18))
			{
				iLocal_18 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_COMPANION"), iLocal_15);
				MAP::_BLIP_SET_MODIFIER(iLocal_18, joaat("BLIP_MODIFIER_FRIENDLY_OBJECTIVE"));
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_18, "MASON_B_MASON");
			}
			break;
		case 5:
			break;
	}
}

bool func_317(var uParam0, int iParam1)
{
	if (uParam0->f_604 == 0)
	{
		return false;
	}
	if (uParam0->f_309 != iParam1)
	{
		uParam0->f_309 = iParam1;
		return true;
	}
	return false;
}

int func_319(var uParam0, int iParam1)
{
	char* sVar0;
	int iVar1;
	sVar0 = func_352(iParam1);
	if (__LIB_0__::func_27(iLocal_94, iParam1))
	{
		if (!__LIB_1__::func_588(sVar0, 0, 0, -1, -1, 0))
		{
			__LIB_4__::func_353();
			__LIB_13__::func_89(uParam0, sVar0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			__LIB_2__::func_259(&uLocal_130);
		}
		return 1;
	}
	if (__LIB_0__::func_270())
	{
		return 0;
	}
	if (__LIB_5__::func_352(sVar0))
	{
		__LIB_1__::func_561(&uLocal_130);
		__LIB_1__::func_683(&iLocal_94, iParam1);
		return 0;
	}
	if (!__LIB_1__::func_588(sVar0, 0, 0, -1, -1, 0))
	{
		__LIB_4__::func_353();
		__LIB_13__::func_89(uParam0, sVar0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
		__LIB_2__::func_259(&uLocal_130);
		return 0;
	}
	iVar1 = 0;
	switch (iParam1)
	{
		case 1:
			__LIB_12__::func_883(uParam0, sVar0, 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			iVar1 = 1;
			break;
		case 2:
			__LIB_12__::func_883(uParam0, sVar0, 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			iVar1 = 1;
			break;
		case 4:
			__LIB_12__::func_883(uParam0, sVar0, 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			iVar1 = 1;
			break;
		case 8:
			__LIB_12__::func_883(uParam0, sVar0, 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			iVar1 = 1;
			break;
		case 16:
			__LIB_12__::func_883(uParam0, sVar0, 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			iVar1 = 1;
			break;
		case 32:
			__LIB_12__::func_883(uParam0, sVar0, 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			iVar1 = 1;
			break;
		case 64:
			__LIB_12__::func_883(uParam0, sVar0, 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			iVar1 = 1;
			break;
	}
	if (iVar1 == 1)
	{
		__LIB_1__::func_561(&uLocal_130);
		__LIB_1__::func_683(&iLocal_94, iParam1);
	}
	return 0;
}

int func_334(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
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
					__LIB_8__::func_726(uParam4, 4);
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
				__LIB_8__::func_726(uParam4, 3);
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
				__LIB_2__::func_259(&(uParam4->f_1));
				__LIB_8__::func_726(uParam4, 2);
			}
			else
			{
				if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				__LIB_12__::func_913(uParam4);
				if (!__LIB_0__::func_899(&(uParam4->f_1)))
				{
					__LIB_4__::func_89(&(uParam4->f_1), 0);
				}
				else if (__LIB_1__::func_583(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_348))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_348);
					}
					__LIB_8__::func_726(uParam4, 4);
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
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_348))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_348);
					}
					__LIB_8__::func_726(uParam4, 4);
				}
			}
			else if (!PLAYER::IS_PLAYER_TELEPORT_ACTIVE() || PLAYER::_HAS_PLAYER_TELEPORT_FINISHED(PLAYER::GET_PLAYER_INDEX()))
			{
				if (!DLC::GET_IS_LOADING_SCREEN_ACTIVE())
				{
					MISC::_0xA565FAC215CBC77D();
					__LIB_0__::func_722(1, 0);
					__LIB_12__::func_988(uParam4, &uParam0, uParam5);
					__LIB_8__::func_726(uParam4, 3);
				}
				else
				{
					SCRIPTS::SHUTDOWN_LOADING_SCREEN();
				}
			}
			else if (__LIB_1__::func_583(&(uParam4->f_1)) >= 60f)
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_348))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_348);
				}
				__LIB_8__::func_726(uParam4, 4);
			}
			break;
		case 3:
			func_722(uParam4);
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
				__LIB_13__::func_334(uParam4);
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
						__LIB_2__::func_259(&(uParam4->f_1));
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
						__LIB_0__::func_88(uParam4, 512);
						__LIB_12__::func_677(uParam4, 67108864, 1);
						__LIB_8__::func_726(uParam4, 4);
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
				__LIB_13__::func_334(uParam4);
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
						__LIB_8__::func_726(uParam4, 3);
					}
					else if (__LIB_1__::func_583(&(uParam4->f_1)) >= 30f)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_348) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_348))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_348, false);
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
	return 0;
}

bool func_338(int iParam0, int iParam1, char* sParam2)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1231[iParam0 /*2*/]))
	{
		Local_1231[iParam0 /*2*/] = ANIMSCENE::_CREATE_ANIM_SCENE(func_735(iParam0), iParam1, sParam2, false, true);
		return false;
	}
	if (!Local_1231[iParam0 /*2*/].f_1)
	{
		ANIMSCENE::LOAD_ANIM_SCENE(Local_1231[iParam0 /*2*/]);
		Local_1231[iParam0 /*2*/].f_1 = 1;
		return false;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_1231[iParam0 /*2*/], true, false))
	{
		return false;
	}
	return true;
}

bool func_339()
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1231[0 /*2*/]) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_1231[0 /*2*/], true, false))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_1231[0 /*2*/], false))
		{
			return true;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_15) && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(Local_1231[0 /*2*/], "AlbertMason", false)))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1231[0 /*2*/], "AlbertMason", iLocal_15, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_27) && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(Local_1231[0 /*2*/], "p_cs_camera", false)))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1231[0 /*2*/], "p_cs_camera", iLocal_27, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_25) && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(Local_1231[0 /*2*/], "p_cs_camerabag01x", false)))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1231[0 /*2*/], "p_cs_camerabag01x", iLocal_25, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_26) && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(Local_1231[0 /*2*/], "p_cs_cameratripod", false)))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1231[0 /*2*/], "p_cs_cameratripod", iLocal_26, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_28) && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(Local_1231[0 /*2*/], "p_cs_shutterrelease", false)))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1231[0 /*2*/], "p_cs_shutterrelease", iLocal_28, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_29) && !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(Local_1231[0 /*2*/], "p_cameraFlash01x", false)))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1231[0 /*2*/], "p_cameraFlash01x", iLocal_29, 0);
		}
		if (((((ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(Local_1231[0 /*2*/], "AlbertMason", false)) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(Local_1231[0 /*2*/], "p_cs_camera", false))) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(Local_1231[0 /*2*/], "p_cs_camerabag01x", false))) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(Local_1231[0 /*2*/], "p_cs_cameratripod", false))) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(Local_1231[0 /*2*/], "p_cs_shutterrelease", false))) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(Local_1231[0 /*2*/], "p_cameraFlash01x", false)))
		{
			return true;
		}
		else
		{
			if (!ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(Local_1231[0 /*2*/], "AlbertMason", false)))
			{
			}
			if (!ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(Local_1231[0 /*2*/], "p_cs_camera", false)))
			{
			}
			if (!ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(Local_1231[0 /*2*/], "p_cs_camerabag01x", false)))
			{
			}
			if (!ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(Local_1231[0 /*2*/], "p_cs_cameratripod", false)))
			{
			}
			if (!ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(Local_1231[0 /*2*/], "p_cs_shutterrelease", false)))
			{
			}
			if (!ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(Local_1231[0 /*2*/], "p_cameraFlash01x", false)))
			{
			}
		}
	}
	return false;
}

bool func_340()
{
	if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1231[0 /*2*/]) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_1231[0 /*2*/], true, false)) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_1231[0 /*2*/], false))
	{
		ANIMSCENE::START_ANIM_SCENE(Local_1231[0 /*2*/]);
		return true;
	}
	else if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1231[0 /*2*/]) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_1231[0 /*2*/], true, false)) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_1231[0 /*2*/], false))
	{
		return true;
	}
	return false;
}

void func_341(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2[iVar0]))
		{
			if (FLOCK::_0x9E13ACC38BA8F9C3(*uParam0, uParam0->f_2[iVar0]))
			{
				FLOCK::_0x408D1149C5E39C1E(*uParam0, uParam0->f_2[iVar0]);
			}
			__LIB_0__::func_325(&(uParam0->f_358[iVar0]));
			PED::DELETE_PED(&(uParam0->f_2[iVar0]));
		}
		uParam0->f_23[iVar0] = 3;
		iVar0++;
	}
	if (PED::DOES_GROUP_EXIST(uParam0->f_380))
	{
		PED::REMOVE_GROUP(uParam0->f_380);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_444))
	{
		POPULATION::_0xA1CFB35069D23C23(uParam0->f_444);
		POPULATION::_0x74C2B3DC0B294102(uParam0->f_444);
		VOLUME::_DELETE_VOLUME(uParam0->f_444);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_445))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_445);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_446))
	{
		POPULATION::_0xA1CFB35069D23C23(uParam0->f_446);
		VOLUME::_DELETE_VOLUME(uParam0->f_446);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_694))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_694);
	}
	__LIB_11__::func_461(uParam0);
	__LIB_11__::func_522(uParam0);
	if (FLOCK::_0x8D913E493BAFE0A3(*uParam0))
	{
		FLOCK::_0x67A43EA3F6FE0076(*uParam0);
		FLOCK::_0xE0961AED72642B80(*uParam0);
	}
	uParam0->f_189 = 0;
}

bool func_343(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
				func_343(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
		__LIB_13__::func_72(28);
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
						func_343(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_343(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_343(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_343(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_343(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_343(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_343(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				__LIB_13__::func_72(24);
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
					func_343(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_343(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
			__LIB_13__::func_116(iParam0);
		}
		if (__LIB_0__::func_192(iParam0, -1979000645))
		{
			__LIB_13__::func_157(iParam0);
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
				func_343(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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

void func_347()
{
	int iVar0;
	iVar0 = __LIB_13__::func_957(&Local_142, iLocal_15);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		if (__LIB_0__::func_48(iLocal_15, iVar0, 100f, 1))
		{
			func_677(3);
		}
	}
	if (iLocal_108 < 4)
	{
		if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_15, -1))
		{
			if (func_338(0, 1, "PL_RC6_Idle"))
			{
				if (func_339())
				{
					func_340();
				}
			}
		}
	}
}

char* func_352(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "MASN3_O_RIDE";
		case 2:
			return "MASN3_O_HERD";
		case 4:
			return "MASN3_O_PHOTO";
		case 8:
			return "MASN3_O_GOTO";
		case 16:
			return "MASN3_O_AREA";
		case 32:
			return "MASN3_O_MOUNT";
		case 64:
			return "MASN3_O_MASN";
	}
	return "";
}

void func_360(var uParam0)
{
	float fVar0;
	switch (iLocal_114)
	{
		case 0:
			fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(__LIB_11__::func_467(&Local_142, 1), vLocal_69, true);
			if (fVar0 < fLocal_83)
			{
				fLocal_83 = fVar0;
			}
			if (func_298(uParam0, &Global_35, &Local_1223, &uLocal_1009, 9, 14, 100f, 2f, 3f, 0) >= 1)
			{
				iLocal_114 = 1;
			}
			break;
		case 1:
			fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(__LIB_11__::func_467(&Local_142, 1), vLocal_69, true);
			if (fVar0 < fLocal_83)
			{
				fLocal_83 = fVar0;
			}
			func_298(uParam0, &Global_35, &Local_1223, &uLocal_1009, 9, 14, 100f, 5f, 3f, 0);
			if (fVar0 > (fLocal_83 + 20f))
			{
				iLocal_114 = 2;
			}
			break;
		case 2:
			fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(__LIB_11__::func_467(&Local_142, 1), vLocal_69, true);
			if (!__LIB_0__::func_899(&uLocal_133))
			{
				__LIB_2__::func_259(&uLocal_133);
				fLocal_84 = fVar0;
			}
			else if (__LIB_10__::func_919(&uLocal_133) > 2000)
			{
				if (fVar0 < (fLocal_84 + 2f))
				{
					__LIB_1__::func_561(&uLocal_133);
					fLocal_83 = fVar0;
					__LIB_2__::func_259(&(Local_1223.f_1));
					iLocal_114 = 1;
				}
				else
				{
					fLocal_84 = fVar0;
					__LIB_2__::func_259(&uLocal_133);
				}
			}
			func_298(uParam0, &Global_35, &uLocal_1227, &uLocal_1009, 15, 17, 100f, 5f, 3f, 0);
			break;
	}
}

void func_361()
{
	int iVar0;
	int iVar1;
	switch (iLocal_113)
	{
		case 0:
			if (!__LIB_0__::func_899(&uLocal_115))
			{
				__LIB_2__::func_259(&uLocal_115);
			}
			else if (__LIB_1__::func_583(&uLocal_115) > 10f)
			{
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 < 5)
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_142.f_2[iVar0]))
					{
						PED::_0x06D26A96CA1BCA75(Local_142.f_2[iVar0], 3, 0f, Global_35);
					}
					iVar0++;
				}
				__LIB_2__::func_259(&uLocal_115);
				iLocal_113 = 1;
			}
			break;
		case 1:
			if (!__LIB_0__::func_899(&uLocal_115))
			{
				__LIB_2__::func_259(&uLocal_115);
			}
			else if (__LIB_1__::func_583(&uLocal_115) > 10f)
			{
				iVar1 = 0;
				iVar1 = 0;
				while (iVar1 < 5)
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_142.f_2[iVar1]))
					{
						PED::_0x06D26A96CA1BCA75(Local_142.f_2[iVar1], 3, 0.2f, Global_35);
					}
					iVar1++;
				}
				__LIB_2__::func_259(&uLocal_115);
				iLocal_113 = 0;
			}
			break;
	}
}

void func_362()
{
	var uVar0;
	var uVar3;
	switch (iLocal_107)
	{
		case 0:
			if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_24))
			{
				iLocal_24 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1358.226f, 577.1462f, 92.30028f, 0f, 0f, 0f, 48.73362f, 37.81457f, 14.01661f, "Mason 3 herd cinematic shot");
			}
			else if (VOLUME::_IS_POSITION_INSIDE_VOLUME(iLocal_24, Local_142.f_613) && !__LIB_11__::func_474(&Local_142, 0))
			{
				if (!CAM::DOES_CAM_EXIST(iLocal_31))
				{
					iLocal_31 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 1360.425f, 548.3953f, 87.794f, -2.3225f, 0f, 33.1979f, 27f, false, 2);
				}
				else if (!bLocal_85)
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1231[0 /*2*/]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_1231[0 /*2*/], false))
					{
						ANIMSCENE::_GET_ANIM_SCENE_ORIGIN(Local_1231[0 /*2*/], &vLocal_88, &vLocal_91, 2);
						ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_1231[0 /*2*/], vLocal_88, 0f, 0f, 4f, 2);
						ANIMSCENE::_GET_ANIM_SCENE_ORIGIN(Local_1231[0 /*2*/], &uVar0, &uVar3, 2);
						if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_1231[0 /*2*/], "PL_TakePhotos"))
						{
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_1231[0 /*2*/], "PL_TakePhotos", true);
						}
					}
					bLocal_85 = true;
				}
				else
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_142.f_2[0]))
					{
						CAM::POINT_CAM_AT_ENTITY(iLocal_31, Local_142.f_2[0], 0f, 0f, 0f, true);
					}
					CAM::SET_CAM_ACTIVE(iLocal_31, true);
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
					CAM::SET_CAM_PARAMS(iLocal_31, 1357.948f, 547.7297f, 88.9f, -3.7108f, 0f, 7.9419f, 27f, 4000, 1, 0, 2, 1, 0);
					__LIB_2__::func_259(&uLocal_124);
					iLocal_107 = 1;
				}
			}
			else if (VOLUME::_IS_POSITION_INSIDE_VOLUME(iLocal_24, Local_142.f_613))
			{
			}
			break;
		case 1:
			HUD::_0xC9CAEAEEC1256E54(724769646);
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			if (__LIB_3__::func_547(iLocal_15, Local_142.f_2[0], 0.98f) == 0)
			{
				if (!bLocal_86)
				{
					func_864();
					bLocal_86 = true;
				}
			}
			if (__LIB_1__::func_592(&uLocal_124) >= 3500)
			{
				if (!bLocal_87)
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1231[0 /*2*/]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_1231[0 /*2*/], false))
					{
						ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_1231[0 /*2*/], vLocal_88, vLocal_91, 2);
						ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_1231[0 /*2*/], "bPicsTaken", true, false);
					}
					bLocal_87 = true;
				}
				else
				{
					CAM::SET_CAM_ACTIVE(iLocal_31, false);
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					CAM::DESTROY_CAM(iLocal_31, false);
					__LIB_13__::func_937(&Local_142);
					iLocal_107 = 2;
				}
			}
			break;
	}
}

bool func_363(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	switch (iLocal_112)
	{
		case 0:
			func_866(&Local_142);
			if (__LIB_0__::func_94(iLocal_15, Local_142.f_613, 1) <= 130f)
			{
				if (func_317(&Local_142, 3))
				{
				}
			}
			else if (__LIB_0__::func_94(iLocal_15, Local_142.f_613, 1) <= 160f)
			{
				if (func_317(&Local_142, 2))
				{
				}
			}
			else if (__LIB_0__::func_94(iLocal_15, Local_142.f_613, 1) <= 195f)
			{
				if (func_317(&Local_142, 1))
				{
					__LIB_9__::func_438(2);
				}
			}
			iVar0 = 0;
			iVar1 = 0;
			iVar2 = 0;
			iVar0 = 0;
			while (iVar0 < 5)
			{
				if (!__LIB_0__::func_272(Local_142.f_2[iVar0], 1))
				{
				}
				else
				{
					if (__LIB_0__::func_94(iLocal_15, Local_142.f_613, 1) <= 120f)
					{
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_142.f_2[iVar0], 1.75f);
					}
					if (ENTITY::IS_ENTITY_IN_VOLUME(Local_142.f_2[iVar0], Local_142.f_444, true, 0))
					{
						iVar1++;
					}
					if (Local_142.f_23[iVar0] == 11 || Local_142.f_23[iVar0] == 12)
					{
						iVar2++;
					}
				}
				iVar0++;
			}
			if (iVar2 >= 1)
			{
				if (MAP::DOES_BLIP_EXIST(iLocal_18))
				{
					__LIB_0__::func_325(&iLocal_18);
				}
				func_317(&Local_142, 3);
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 < 5)
				{
					if (!__LIB_11__::func_476(&Local_142, iVar0))
					{
						Local_142.f_23[iVar0] = 3;
					}
					iVar0++;
				}
				__LIB_9__::func_438(3);
				func_319(uParam0, 4);
				iLocal_112 = 1;
				return true;
			}
			if (iVar1 >= 3)
			{
				iLocal_112 = 1;
				return true;
			}
			break;
		case 1:
			__LIB_18__::func_720(&Local_142, -1082130432 /* Float: -1f */);
			func_319(uParam0, 4);
			__LIB_13__::func_995(uParam0, &uLocal_1009, 18, &Global_35, 1, (56f + 5f), 0, 0);
			if (TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(cLocal_105, Local_142.f_613, &iVar3))
			{
				if (iVar3 >= 2)
				{
					iLocal_112 = 2;
					return true;
				}
			}
			break;
		case 2:
			__LIB_18__::func_720(&Local_142, -1082130432 /* Float: -1f */);
			return true;
	}
	return false;
}

void func_400(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
						func_343(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_343(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_343(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_343(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_343(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_343(joaat("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_343(joaat("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_343(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_343(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_343(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_343(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_343(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_343(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_343(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_343(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_343(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_343(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_343(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_343(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_343(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_343(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_343(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_343(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_343(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_343(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_903();
						func_904(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
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
						func_343(joaat("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
							func_400(Global_1347702[21 /*49*/].f_15, 0, 0, 0, 0);
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
							func_400(Global_1347702[82 /*49*/].f_15, 0, 0, 0, 0);
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
							func_400(Global_1347702[83 /*49*/].f_15, 0, 0, 0, 0);
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
						func_343(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_343(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
		func_938();
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
							func_343(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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

Vector3 func_404(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10)
{
	vector3 vVar0;
	vVar0 = { func_945(vParam0, iParam3, iParam4, iParam5, iParam6, 1, iParam7, bParam8, bParam9, bParam10, -1, 1103626240 /* Float: 25f */) };
	if (__LIB_0__::func_86(vVar0))
	{
		vVar0 = { func_945(vParam0, iParam3, iParam4, 0, 1, 1, iParam7, bParam8, 0, 0, -1, 1103626240 /* Float: 25f */) };
	}
	return vVar0;
}

void func_430()
{
	if (func_338(0, 1, 0))
	{
		if (func_339())
		{
			func_340();
		}
	}
}

void func_431()
{
	__LIB_2__::func_602(&(Local_1259[0 /*17*/]), "INTERACT_TALK", " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
}

int func_433(int iParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
			__LIB_2__::func_259(&(iParam1->f_13));
		}
		if (__LIB_4__::func_231(*iParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (__LIB_13__::func_885(iParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_433(iParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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
					if (__LIB_13__::func_886(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
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
					if (__LIB_4__::func_394(*iParam0, iParam1, uParam3))
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
					__LIB_4__::func_166(*iParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					__LIB_13__::func_886(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
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
			__LIB_4__::func_399(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

void func_439(var uParam0)
{
	__LIB_0__::func_325(&iLocal_18);
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_20))
	{
		POPULATION::_0x74C2B3DC0B294102(iLocal_20);
		POPULATION::_0xA1CFB35069D23C23(iLocal_20);
		VOLUME::_DELETE_VOLUME(iLocal_20);
	}
	__LIB_0__::func_172(iLocal_23);
	__LIB_0__::func_172(iLocal_22);
	__LIB_13__::func_920();
	if (bLocal_97)
	{
		__LIB_6__::func_824();
		bLocal_97 = false;
	}
	__LIB_13__::func_921(uParam0);
}

int func_500(int iParam0, int iParam1)
{
	var uVar0;
	return func_1057(&uVar0, iParam0, iParam1);
}

var func_617(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	var uVar0;
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		return uVar0;
	}
	__LIB_0__::func_566(iParam0, bParam2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, iParam3, 0, 0, -1, -1, 0);
	POPULATION::_0xB56D41A694E42E86(iParam0, iParam3, 2048, 0, -1, -1, 2);
	uVar0 = PED::_0x4C39C95AE5DB1329(iParam0, bParam2, 15);
	return uVar0;
}

void func_650(var uParam0)
{
	func_1175();
	if (__LIB_0__::func_797(7))
	{
		if (!bLocal_32)
		{
			if (__LIB_12__::func_637(&iLocal_17, 1359.26f, 536.4f, 86f, 343.8975f, 0, 1, 1, 1))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_17))
				{
					TASK::TASK_STAND_STILL(iLocal_17, -1);
					bLocal_32 = true;
				}
			}
		}
	}
}

void func_652(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = __LIB_12__::func_685(uParam0);
	if (!bLocal_97)
	{
		__LIB_6__::func_825();
		__LIB_9__::func_645(vLocal_75, 500f, -1);
		bLocal_97 = true;
	}
	if (__LIB_13__::func_218(uParam0, Global_35, "Arthur", 0, 1, 1))
	{
		__LIB_0__::func_569(joaat("MOTIONSTATE_WALK"), 2000, 0, 1, 1, 0, 0, 0);
	}
	if (func_338(0, 1, 0))
	{
		func_339();
	}
	if (MISC::ARE_STRINGS_EQUAL(__LIB_1__::func_569(__LIB_12__::func_665(uParam0)), "NormalStart"))
	{
		iVar1 = 14500;
		iVar2 = 25000;
	}
	else
	{
		iVar1 = 25000;
		iVar2 = 33210;
	}
	if (iVar0 > iVar1 && iVar0 < iVar2)
	{
		func_1183();
	}
}

void func_654(var uParam0)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_1231[0 /*2*/]))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(Local_1231[0 /*2*/]);
		Local_1231[0 /*2*/].f_1 = 0;
	}
}

void func_655(var uParam0)
{
	if (func_338(0, 1, 0))
	{
		if (func_339())
		{
			if (__LIB_13__::func_218(uParam0, iLocal_15, "AlbertMason", 0, 1, 1))
			{
				func_340();
			}
		}
	}
	if (__LIB_13__::func_218(uParam0, Global_35, "Arthur", 0, 1, 1))
	{
		__LIB_0__::func_569(joaat("MOTIONSTATE_WALK"), 4000, 0, 1, 1, 0, 0, 0);
	}
}

void func_658(var uParam0, bool bParam1, float fParam2, float fParam3, int iParam4, float fParam5)
{
	*bParam1 = (BUILTIN::SQRT(uParam0->f_745) + 2f);
	*fParam2 = (*bParam1 + 5f);
	*fParam3 = (*fParam2 + 10f);
	*iParam4 = (*fParam3 + 12f);
	*fParam5 = 2f;
}

int func_664(var uParam0, vector3 vParam1, int iParam4, vector3 vParam5, vector3 vParam8, vector3 vParam11, int iParam14, int iParam15, int iParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	vector3 vVar10;
	float fVar13;
	int iVar14;
	char* sVar15;
	if (!STREAMING::HAS_MODEL_LOADED(iParam14))
	{
		return 0;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_652))
	{
		if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(uParam0->f_652))
		{
			return 0;
		}
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_447) && VOLUME::_DOES_VOLUME_EXIST(iParam16))
	{
		uParam0->f_447 = iParam16;
	}
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= (uParam0->f_663 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2[iVar0]))
		{
			iVar1++;
		}
		if (iVar1 >= uParam0->f_663)
		{
			return 1;
		}
		iVar0++;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_444))
	{
		uParam0->f_444 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(iParam15, vParam5, vParam8, vParam11, "HERDING GOAL");
	}
	uParam0->f_663 = iParam4;
	uParam0->f_613 = { 0f, 0f, 0f };
	if (!FLOCK::_0x8D913E493BAFE0A3(*uParam0))
	{
		*uParam0 = FLOCK::_CREATE_HERD();
	}
	uParam0->f_189 = 0;
	if (uParam0->f_188 != iParam14)
	{
		uParam0->f_188 = iParam14;
	}
	__LIB_18__::func_733(uParam0, uParam0->f_188);
	vVar2 = { vParam1 };
	switch (iParam14)
	{
		case joaat("A_C_COW"):
			fVar5 = 2f;
			fVar6 = 3f;
			break;
		case joaat("A_C_GOAT_01"):
		case joaat("A_C_SHEEP_01"):
			fVar5 = (2f / 3.5f);
			fVar6 = (3f / 3.5f);
			break;
		default:
			fVar5 = 2f;
			fVar6 = 3f;
			break;
	}
	fVar7 = MISC::GET_RANDOM_FLOAT_IN_RANGE(fVar5, fVar6);
	iVar8 = BUILTIN::CEIL(BUILTIN::SQRT(BUILTIN::TO_FLOAT(iParam4)));
	vVar2.x = (vVar2.x - ((IntToFloat(iVar8) * fVar7) / 2f));
	vVar2.f_1 = (vVar2.y - ((IntToFloat((uParam0->f_663 / iVar8)) * fVar7) / 2f));
	vVar10 = { vVar2 };
	iVar0 = 0;
	while (iVar0 <= (uParam0->f_663 - 1))
	{
		if (iVar9 >= iVar8)
		{
			iVar9 = 0;
			vVar10.x = vVar2.x;
			fVar7 = MISC::GET_RANDOM_FLOAT_IN_RANGE(fVar5, fVar6);
			vVar10.f_1 = (vVar10.y + fVar7);
		}
		fVar13 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
		if (STREAMING::IS_MODEL_VALID(iParam14) && !ENTITY::DOES_ENTITY_EXIST(uParam0->f_2[iVar0]))
		{
			if (iParam14 == joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT"))
			{
				if (iVar0 == 0)
				{
					iParam14 = joaat("A_C_HORSE_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO");
					STREAMING::REQUEST_MODEL(iParam14, false);
					if (STREAMING::HAS_MODEL_LOADED(iParam14))
					{
						uParam0->f_2[iVar0] = __LIB_8__::func_931(iParam14, vVar10, fVar13, 1, 1, 0, 1, 0, 1, 0, 0, 0, 0);
						if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_2[iVar0]))
						{
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam14);
						}
					}
				}
				else if (iVar0 == 1)
				{
					iParam14 = joaat("A_C_HORSE_AMERICANSTANDARDBRED_BUCKSKIN");
					STREAMING::REQUEST_MODEL(iParam14, false);
					if (STREAMING::HAS_MODEL_LOADED(iParam14))
					{
						uParam0->f_2[iVar0] = __LIB_8__::func_931(iParam14, vVar10, fVar13, 1, 1, 0, 1, 0, 1, 0, 0, 0, 0);
						if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_2[iVar0]))
						{
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam14);
						}
					}
				}
				else if (iVar0 == 2)
				{
					iParam14 = joaat("A_C_HORSE_TENNESSEEWALKER_DAPPLEBAY");
					STREAMING::REQUEST_MODEL(iParam14, false);
					if (STREAMING::HAS_MODEL_LOADED(iParam14))
					{
						uParam0->f_2[iVar0] = __LIB_8__::func_931(iParam14, vVar10, fVar13, 1, 1, 0, 1, 0, 1, 0, 0, 0, 0);
						if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_2[iVar0]))
						{
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam14);
						}
					}
				}
				else if (iVar0 == 3)
				{
					iParam14 = joaat("A_C_HORSE_KENTUCKYSADDLE_BLACK");
					STREAMING::REQUEST_MODEL(iParam14, false);
					if (STREAMING::HAS_MODEL_LOADED(iParam14))
					{
						uParam0->f_2[iVar0] = __LIB_8__::func_931(iParam14, vVar10, fVar13, 1, 1, 0, 1, 0, 1, 0, 0, 0, 0);
						if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_2[iVar0]))
						{
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam14);
						}
					}
				}
				else
				{
					uParam0->f_2[iVar0] = __LIB_8__::func_931(iParam14, vVar10, fVar13, 1, 1, 0, 1, 0, 1, 0, 0, 0, 0);
				}
			}
			else
			{
				uParam0->f_2[iVar0] = __LIB_8__::func_931(iParam14, vVar10, fVar13, 1, 1, 0, 1, 0, 1, 0, 0, 0, 0);
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_2[iVar0]))
			{
				PED::SET_PED_CAN_BE_TARGETTED(uParam0->f_2[iVar0], false);
				POPULATION::_0xF74E134F40192884(uParam0->f_2[iVar0], 2);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam0->f_2[iVar0], 1);
				TASK::SET_PED_PATH_MAY_ENTER_WATER(uParam0->f_2[iVar0], true);
				TASK::_0x9DE63896B176EA94(uParam0->f_2[iVar0], 0);
				EVENT::_0xBB1E41DD3D3C6250(uParam0->f_2[iVar0], "SpGatheringAnimal", 0);
				if (iParam17 == 0)
				{
					PED::SET_PED_CONFIG_FLAG(uParam0->f_2[iVar0], 6, true);
				}
				if (bParam20)
				{
					if (iParam14 == joaat("A_C_SHEEP_01"))
					{
						PED::APPLY_PED_DAMAGE_PACK(uParam0->f_2[iVar0], "PD_Sheep_Brand_1", 1f, 1f);
					}
					else if (iParam14 == joaat("A_C_COW"))
					{
						iVar14 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
						switch (iVar14)
						{
							case 0:
								sVar15 = "PD_Cow_Brand_1";
								break;
							case 1:
								sVar15 = "PD_Cow_Brand_2";
								break;
							case 2:
								sVar15 = "PD_Cow_Brand_3";
								break;
							case 3:
								sVar15 = "PD_Cow_Brand_4";
								break;
							default:
								sVar15 = "PD_Cow_Brand_1";
								break;
						}
						PED::APPLY_PED_DAMAGE_PACK(uParam0->f_2[iVar0], sVar15, 0f, 1f);
					}
				}
				if (__LIB_0__::func_125(uParam0->f_2[iVar0]))
				{
					FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam0->f_2[iVar0], 39, 80f);
				}
				__LIB_1__::func_338(uParam0->f_2[iVar0], ENTITY::GET_ENTITY_COORDS(uParam0->f_2[iVar0], true, false));
				if (!bParam19)
				{
					if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_447))
					{
						TASK::TASK_ANIMAL_UNALERTED(uParam0->f_2[iVar0], -1, uParam0->f_447, 1, 1);
					}
					else
					{
						TASK::TASK_ANIMAL_UNALERTED(uParam0->f_2[iVar0], -1, 0, 1, 1);
					}
				}
				else
				{
					__LIB_1__::func_473(uParam0->f_2[iVar0], __LIB_11__::func_507(uParam0), 0, 0, 0, -1082130432 /* Float: -1f */);
				}
				PED::SET_PED_CONFIG_FLAG(uParam0->f_2[iVar0], 412, true);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_2[iVar0], 388, true);
				PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), uParam0->f_2[iVar0], 34, 0, 1);
				PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), uParam0->f_2[iVar0], 35, 0, 1);
				if (!bParam21)
				{
					PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), uParam0->f_2[iVar0], 30, 0, 1);
				}
				PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), uParam0->f_2[iVar0], 27, 0, 1);
				uParam0->f_23[iVar0] = 3;
			}
			if (!bParam18)
			{
			}
			else
			{
				fVar7 = MISC::GET_RANDOM_FLOAT_IN_RANGE(fVar5, fVar6);
				vVar10.x = (vVar10.x + fVar7);
				iVar9++;
				iVar0++;
			}
			if (FLOCK::_0x8D913E493BAFE0A3(*uParam0))
			{
				iVar0 = 0;
				while (iVar0 <= (uParam0->f_663 - 1))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_2[iVar0]))
					{
						return 0;
					}
					else
					{
						uParam0->f_23[iVar0] = 3;
					}
					iVar0++;
				}
				if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_444))
				{
					POPULATION::_0x18262CAFEBB5FBE1(uParam0->f_444, 4320, 0, 0, -1, -1, 0);
					POPULATION::_0xB56D41A694E42E86(uParam0->f_444, 4320, 0, 0, -1, -1, 0);
				}
				uParam0->f_648 = { vVar2 };
				uParam0->f_651 = 15f;
				return 1;
			}
			return 0;
		}
	}
}

void func_666(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_604 = iParam1;
	uParam0->f_309 = iParam2;
}

void func_668(var uParam0, bool bParam1)
{
	if (!bParam1)
	{
		__LIB_13__::func_958(uParam0, 8192);
	}
	else
	{
		__LIB_13__::func_955(uParam0, 8192);
	}
}

void func_677(int iParam0)
{
	if (iLocal_110 == iParam0)
	{
		return;
	}
	iLocal_110 = iParam0;
	__LIB_2__::func_259(&uLocal_118);
	switch (iLocal_110)
	{
		case 3:
			TASK::TASK_LOOK_AT_ENTITY(iLocal_15, iLocal_27, 2000, 0, 51, 0);
			break;
		case 0:
			break;
		case 1:
			TASK::TASK_LOOK_AT_ENTITY(iLocal_15, Global_35, -1, 0, 51, 0);
			break;
		case 2:
			TASK::TASK_LOOK_AT_ENTITY(iLocal_15, Global_35, -1, 0, 51, 0);
			break;
	}
}

void func_685(var uParam0, bool bParam1)
{
	int iVar0;
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_350))
	{
		__LIB_1__::func_480(&(uParam0->f_350));
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2[iVar0]))
		{
			__LIB_1__::func_480(&(uParam0->f_2[iVar0]));
			EVENT::_0x1A5C5D350068A673(uParam0->f_2[iVar0], 0);
			__LIB_11__::func_477(uParam0, &(uParam0->f_2[iVar0]), bParam1);
			uParam0->f_23[iVar0] = 3;
		}
		iVar0++;
	}
	__LIB_4__::func_399(&(uParam0->f_329), &(uParam0->f_311));
}

void func_722(var uParam0)
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
		func_1254(&(uParam0->f_404), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_12__::func_706(uParam0, 0f, 0f, 0f);
		func_1256(uParam0);
		func_1257(uParam0);
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

char* func_735(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script@rcm@masn@leadin@rsc_6@take_photos";
	}
	return "";
}

void func_864()
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_15))
	{
		AUDIO::_PLAY_SOUND_FROM_ENTITY("CAMERA_CLICK", iLocal_15, "MASON_PHOTO_SOUNDSET", false, 0, 0);
		AUDIO::_PLAY_SOUND_FROM_ENTITY("CAMERA_FLASH", iLocal_15, "MASON_PHOTO_SOUNDSET", false, 0, 0);
	}
}

int func_866(var uParam0)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	float fVar3;
	float fVar4;
	vector3 vVar5;
	if (!FLOCK::_0x8D913E493BAFE0A3(*uParam0))
	{
		return 0;
	}
	if (uParam0->f_189 == 0)
	{
		uParam0->f_189 = 5;
	}
	__LIB_13__::func_981(uParam0);
	uParam0->f_613 = { __LIB_13__::func_935(uParam0) };
	if (uParam0->f_209 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (uParam0->f_190[iVar0 /*9*/] == 0 && ENTITY::DOES_ENTITY_EXIST(uParam0->f_190[iVar0 /*9*/].f_2))
			{
				uParam0->f_209 = iVar0;
			}
			iVar0++;
		}
	}
	if (!__LIB_4__::func_156(uParam0, 2))
	{
		__LIB_13__::func_982(uParam0);
	}
	else
	{
		if (!FLOCK::_0x36486AF7DA93A464(*uParam0))
		{
			FLOCK::_0x6C57BEA886A20C6B(*uParam0, 1);
		}
		if (uParam0->f_209 != -1)
		{
			__LIB_13__::func_959(uParam0, __LIB_11__::func_481(&(uParam0->f_190[uParam0->f_209 /*9*/])));
		}
		__LIB_18__::func_734(uParam0);
	}
	__LIB_19__::func_313(uParam0, 0);
	func_1461(uParam0, 1);
	__LIB_18__::func_722(uParam0);
	__LIB_18__::func_723(uParam0);
	if (!FLOCK::_0x8D913E493BAFE0A3(*uParam0))
	{
		*uParam0 = FLOCK::_CREATE_HERD();
	}
	iVar1 = 0;
	while (iVar1 < 20)
	{
		if (__LIB_0__::func_272(uParam0->f_2[iVar1], 0))
		{
			if (((((!__LIB_0__::func_86(uParam0->f_613) && __LIB_0__::func_94(uParam0->f_2[iVar1], uParam0->f_613, 1) > 200f) && __LIB_0__::func_665(uParam0->f_2[iVar1], PLAYER::PLAYER_PED_ID(), 1, 1) > 125f) && ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_2[iVar1])) && uParam0->f_498 != iVar1) && uParam0->f_23[iVar1] != 10)
			{
				if (!FLOCK::_0x8D913E493BAFE0A3(*uParam0))
				{
					*uParam0 = FLOCK::_CREATE_HERD();
				}
				if (FLOCK::_0x9E13ACC38BA8F9C3(*uParam0, uParam0->f_2[iVar1]))
				{
					FLOCK::_0x408D1149C5E39C1E(*uParam0, uParam0->f_2[iVar1]);
				}
				if (MAP::DOES_BLIP_EXIST(uParam0->f_358[iVar1]))
				{
					MAP::REMOVE_BLIP(&(uParam0->f_358[iVar1]));
				}
				PED::DELETE_PED(&(uParam0->f_2[iVar1]));
				if (uParam0->f_23[iVar1] != 14)
				{
					uParam0->f_23[iVar1] = 14;
				}
				if (uParam0->f_800 >= 3)
				{
					__LIB_13__::func_608(uParam0->f_799, 1);
					uParam0->f_800 = 1;
				}
			}
			else if ((!FLOCK::_0x9E13ACC38BA8F9C3(*uParam0, uParam0->f_2[iVar1]) && uParam0->f_691 == 1) && uParam0->f_23[iVar1] == 3)
			{
				if (__LIB_11__::func_477(uParam0, &(uParam0->f_2[iVar1]), 0))
				{
				}
			}
			else if (__LIB_0__::func_163(uParam0->f_2[iVar1], -1846572487))
			{
				PED::SET_PED_RESET_FLAG(uParam0->f_2[iVar1], 83, true);
			}
			if (((((ENTITY::DOES_ENTITY_EXIST(uParam0->f_2[iVar1]) && FLOCK::_0x9E13ACC38BA8F9C3(*uParam0, uParam0->f_2[iVar1])) && !MAP::DOES_BLIP_EXIST(uParam0->f_358[iVar1])) && uParam0->f_691 == 1) && uParam0->f_23[iVar1] != 10) && !__LIB_4__::func_156(uParam0, 262144))
			{
				uParam0->f_358[iVar1] = MAP::_BLIP_ADD_FOR_ENTITY(-700928964, uParam0->f_2[iVar1]);
			}
			if (!__LIB_4__::func_156(uParam0, 2048))
			{
				__LIB_13__::func_939(uParam0, iVar1);
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2[iVar1]) && ENTITY::IS_ENTITY_DEAD(uParam0->f_2[iVar1]))
		{
			if (FLOCK::_0x9E13ACC38BA8F9C3(*uParam0, uParam0->f_2[iVar1]))
			{
				FLOCK::_0x408D1149C5E39C1E(*uParam0, uParam0->f_2[iVar1]);
			}
			if (MAP::DOES_BLIP_EXIST(uParam0->f_358[iVar1]))
			{
				MAP::REMOVE_BLIP(&(uParam0->f_358[iVar1]));
			}
			if (uParam0->f_23[iVar1] != 14)
			{
				uParam0->f_23[iVar1] = 14;
			}
			sVar2 = __LIB_11__::func_460(uParam0);
			PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(uParam0->f_2[iVar1], MISC::GET_HASH_KEY(sVar2));
			__LIB_2__::func_788(&(uParam0->f_2[iVar1]), 1, 0, 1);
			if (uParam0->f_800 >= 3)
			{
				__LIB_13__::func_608(uParam0->f_799, 1);
				uParam0->f_800 = 1;
			}
		}
		iVar1++;
	}
	if (__LIB_4__::func_156(uParam0, 2048))
	{
		__LIB_13__::func_940(uParam0);
	}
	func_1467(uParam0);
	__LIB_18__::func_357(uParam0, 0);
	__LIB_0__::func_11(uParam0);
	func_1470(uParam0);
	__LIB_11__::func_479(uParam0);
	__LIB_18__::func_724(uParam0);
	__LIB_18__::func_360(uParam0);
	if (!__LIB_4__::func_156(uParam0, 2))
	{
		__LIB_18__::func_735(uParam0);
	}
	else
	{
		__LIB_18__::func_736(uParam0);
	}
	if (!__LIB_0__::func_899(&(uParam0->f_657)))
	{
		__LIB_2__::func_259(&(uParam0->f_657));
	}
	else if (__LIB_1__::func_592(&(uParam0->f_657)) < 250)
	{
		if (__LIB_11__::func_480(uParam0->f_625))
		{
			if (!__LIB_4__::func_156(uParam0, 2))
			{
				__LIB_13__::func_960(uParam0);
			}
			else
			{
				__LIB_13__::func_961(uParam0);
			}
		}
		if (__LIB_4__::func_156(uParam0, 2))
		{
			__LIB_18__::func_361(uParam0);
		}
	}
	else if (__LIB_1__::func_592(&(uParam0->f_657)) > 250)
	{
		__LIB_13__::func_983(uParam0);
		__LIB_18__::func_359(uParam0);
		if (__LIB_11__::func_480(uParam0->f_625))
		{
			if (!__LIB_4__::func_156(uParam0, 2))
			{
				__LIB_13__::func_960(uParam0);
			}
			else
			{
				__LIB_13__::func_961(uParam0);
			}
		}
		if (__LIB_4__::func_156(uParam0, 2))
		{
			__LIB_18__::func_361(uParam0);
		}
		uParam0->f_635 = 10;
		fVar3 = 14f;
		if (!__LIB_0__::func_86(uParam0->f_625))
		{
			if (!FLOCK::_0xD95F04A4E73BE85E(*uParam0, uParam0->f_1))
			{
				uParam0->f_1 = FLOCK::_0x09EE00B8F858E0BE(*uParam0, uParam0->f_625, 2.5f, 300f, fVar3);
				FLOCK::_0x17E3E5C46ECCD308(*uParam0, uParam0->f_1, uParam0->f_635);
			}
			else
			{
				FLOCK::_0xE36D2CB540597EF7(*uParam0, uParam0->f_1, uParam0->f_625, 2.5f, 300f, fVar3);
				FLOCK::_0x17E3E5C46ECCD308(*uParam0, uParam0->f_1, uParam0->f_635);
			}
		}
		uParam0->f_628 = { uParam0->f_625 };
		uParam0->f_625 = { 0f, 0f, 0f };
		uParam0->f_655 = 0.5f;
		__LIB_2__::func_259(&(uParam0->f_657));
	}
	fVar4 = __LIB_0__::func_94(uParam0->f_2[__LIB_13__::func_956(uParam0, 0)], uParam0->f_613, 1);
	fVar4 = (fVar4 + 2f);
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_446))
	{
		uParam0->f_605 = { uParam0->f_613 };
		uParam0->f_446 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(uParam0->f_605, 0f, 0f, 0f, fVar4, fVar4, 6f, "Herding avoidance cylinder");
		POPULATION::_0xB56D41A694E42E86(uParam0->f_446, 270336, 0, 0, -1, -1, 0);
	}
	else
	{
		uParam0->f_605 = { uParam0->f_613 };
		VOLUME::_SET_VOLUME_COORDS(uParam0->f_446, uParam0->f_605);
		VOLUME::_SET_VOLUME_SCALE(uParam0->f_446, fVar4, fVar4, 6f);
	}
	if (!__LIB_0__::func_899(&(uParam0->f_622)))
	{
		__LIB_2__::func_259(&(uParam0->f_622));
	}
	else if (__LIB_1__::func_592(&(uParam0->f_622)) >= 1000)
	{
		vVar5 = { __LIB_11__::func_467(uParam0, 1) };
		if (!__LIB_0__::func_86(uParam0->f_616))
		{
			uParam0->f_619 = { vVar5 - uParam0->f_616 / Vector(1f, 1f, 1f) };
		}
		else
		{
			uParam0->f_619 = { 0f, 0f, 0f };
		}
		uParam0->f_616 = { vVar5 };
		__LIB_2__::func_259(&(uParam0->f_622));
	}
	if (__LIB_18__::func_362(uParam0))
	{
		uParam0->f_189 = 8;
		return 1;
	}
	return 0;
}

void func_903()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_1512();
	func_1513();
	func_1514();
	func_1515();
	func_1516();
	__LIB_1__::func_848();
	__LIB_0__::func_376();
}

void func_904(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	func_1519(iParam0, 1, 1, -142743235, 1);
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

void func_938()
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
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_1541(&uVar4, &iVar1, &iVar2, &iVar3)))
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

Vector3 func_945(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
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
		bVar10 = __LIB_1__::func_699();
		if (VOLUME::_DOES_VOLUME_EXIST(bVar10))
		{
		}
	}
	if (!__LIB_1__::func_120(Global_1310720.f_21))
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
			bVar11 = func_1557(iVar0, iVar1);
			bVar3 = BUILTIN::VDIST(vParam0, vVar7);
			if (((((bVar3 < fVar2 && bVar3 > bParam10) && !__LIB_0__::func_86(vVar7)) && func_1558(iVar0, bParam8, iParam12)) && !__LIB_0__::func_955(iVar0)) || bVar11)
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

int func_1057(var uParam0, int iParam1, int iParam2)
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
		return func_1057(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

void func_1175()
{
	vector3 vVar0[5];
	int iVar16;
	int iVar17;
	vVar0[0 /*3*/] = { 1227.17f, 650.29f, 100f };
	vVar0[1 /*3*/] = { 1219.64f, 645.17f, 100.32f };
	vVar0[2 /*3*/] = { 1226.19f, 658.34f, 101.21f };
	vVar0[3 /*3*/] = { 1212.78f, 658.2f, 101.14f };
	vVar0[4 /*3*/] = { 1218.07f, 650.92f, 100.79f };
	iVar16 = 0;
	while (iVar16 < 5)
	{
		iVar17 = __LIB_11__::func_506(&Local_142, iVar16);
		if (__LIB_0__::func_272(iVar17, 0))
		{
			ENTITY::SET_ENTITY_COORDS(iVar17, vVar0[iVar16 /*3*/], true, false, true, true);
			TASK::TASK_ANIMAL_UNALERTED(iVar17, -1, 0, 0, 0);
			ENTITY::FREEZE_ENTITY_POSITION(iVar17, false);
			PED::_0xAE6004120C18DF97(iVar17, 0, 0);
			PED::_0xAE6004120C18DF97(iVar17, 2, 0);
			PED::_0xAE6004120C18DF97(iVar17, 3, 0);
		}
		iVar16++;
	}
}

void func_1183()
{
	int iVar0;
	int iVar1;
	switch (iLocal_106)
	{
		case 0:
			PATHFIND::_0xCF213A5FC3ABFC08(1154.92f, 757.79f, 50f);
			if (!__LIB_0__::func_899(&uLocal_124))
			{
				__LIB_2__::func_259(&uLocal_124);
				TASK::TASK_HORSE_ACTION(__LIB_11__::func_506(&Local_142, 0), 1, 0, 0);
			}
			else if (__LIB_9__::func_178(&uLocal_124) > 4.5f)
			{
				__LIB_1__::func_561(&uLocal_124);
				iLocal_106 = 1;
			}
			break;
		case 1:
			PATHFIND::_0xCF213A5FC3ABFC08(1154.92f, 757.79f, 50f);
			iVar0 = 0;
			while (iVar0 < 5)
			{
				iVar1 = __LIB_11__::func_506(&Local_142, iVar0);
				if (__LIB_0__::func_272(iVar1, 0))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iVar1, 1154.92f, 757.79f, 97.18f, 1.5f, 20000, 0.25f, 0, 40000f);
				}
				iVar0++;
			}
			iLocal_106 = 2;
			break;
		case 2:
			PATHFIND::_0xCF213A5FC3ABFC08(1154.92f, 757.79f, 50f);
			break;
	}
}

void func_1254(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
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
		func_1738();
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

void func_1256(var uParam0)
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
			func_1745(iVar1, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_1745(iVar3, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_1257(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if ((__LIB_0__::func_84(uParam0, 268435456) && !__LIB_0__::func_86(__LIB_12__::func_720(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { __LIB_12__::func_720(uParam0) };
			func_1745(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

void func_1461(var uParam0, int iParam1)
{
	bool bVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	float fVar14;
	int iVar15;
	vector3 vVar16;
	if (__LIB_4__::func_156(uParam0, 64))
	{
		__LIB_13__::func_958(uParam0, 64);
		return;
	}
	if (uParam0->f_209 == -1)
	{
		return;
	}
	bVar0 = __LIB_11__::func_482(uParam0, 1);
	if (bVar0)
	{
		if (!__LIB_0__::func_899(&(uParam0->f_352)))
		{
			__LIB_13__::func_984(uParam0);
		}
	}
	else if (__LIB_0__::func_899(&(uParam0->f_352)))
	{
		__LIB_1__::func_561(&(uParam0->f_352));
	}
	if ((((iParam1 == 1 && !bVar0) && uParam0->f_189 == 5) && !__LIB_11__::func_494(uParam0, 8)) && !__LIB_4__::func_156(uParam0, 32))
	{
		if (__LIB_11__::func_483(uParam0))
		{
			if (!__LIB_0__::func_899(&(uParam0->f_503)))
			{
				__LIB_2__::func_259(&(uParam0->f_503));
			}
			else if (__LIB_9__::func_178(&(uParam0->f_503)) > 20f)
			{
				if (__LIB_19__::func_495(uParam0, 2, 35f, 0.1f, 0))
				{
					__LIB_1__::func_561(&(uParam0->f_503));
				}
			}
		}
		else if (__LIB_0__::func_899(&(uParam0->f_503)))
		{
			__LIB_1__::func_561(&(uParam0->f_503));
		}
	}
	vVar1 = { __LIB_13__::func_935(uParam0) };
	vVar7 = { 0f, 0f, 0f };
	func_1945(uParam0);
	iVar10 = 0;
	while (iVar10 < 20)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_2[iVar10]))
		{
			switch (uParam0->f_23[iVar10])
			{
				case 3:
					if (__LIB_0__::func_899(&(uParam0->f_65[iVar10 /*3*/])))
					{
						__LIB_1__::func_561(&(uParam0->f_65[iVar10 /*3*/]));
					}
					if (__LIB_0__::func_94(uParam0->f_2[iVar10], vVar1, 1) > uParam0->f_611 && iParam1 == 1)
					{
						if (FLOCK::_0x8D913E493BAFE0A3(*uParam0))
						{
							if (FLOCK::_0x34B9C4D86DF2C2F3(*uParam0) > 1)
							{
								if (FLOCK::_0x9E13ACC38BA8F9C3(*uParam0, uParam0->f_2[iVar10]))
								{
									FLOCK::_0x408D1149C5E39C1E(*uParam0, uParam0->f_2[iVar10]);
								}
								TASK::TASK_ANIMAL_UNALERTED(uParam0->f_2[iVar10], -1, 0, 1, 1);
								uParam0->f_23[iVar10] = 4;
							}
						}
					}
					break;
				case 5:
					if (!MAP::DOES_BLIP_EXIST(uParam0->f_358[iVar10]) && !__LIB_4__::func_156(uParam0, 262144))
					{
						uParam0->f_358[iVar10] = MAP::_BLIP_ADD_FOR_ENTITY(-700928964, uParam0->f_2[iVar10]);
					}
					if (!__LIB_0__::func_899(&(uParam0->f_65[iVar10 /*3*/])))
					{
						__LIB_2__::func_259(&(uParam0->f_65[iVar10 /*3*/]));
					}
					vVar4 = { 0f, 0f, 0f };
					iVar11 = 0;
					while (iVar11 < 20)
					{
						if ((iVar11 != iVar10 && !ENTITY::IS_ENTITY_DEAD(uParam0->f_2[iVar11])) && uParam0->f_23[iVar11] == 3)
						{
							vVar4 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_2[iVar11], true, false) };
						}
						else
						{
							iVar11++;
						}
					}
					if (__LIB_0__::func_86(vVar4))
					{
						vVar4 = { __LIB_13__::func_941(uParam0) };
						if (__LIB_0__::func_86(vVar4))
						{
							vVar4 = { vVar1 };
						}
					}
					if (__LIB_13__::func_965(uParam0, iVar10, &vVar4, &vVar7, 0) && !__LIB_4__::func_156(uParam0, 65536))
					{
						uParam0->f_44[iVar10] = ((BUILTIN::TO_FLOAT(iVar10) * 50f) + MISC::GET_RANDOM_FLOAT_IN_RANGE(10f, 50f));
						__LIB_2__::func_259(&(uParam0->f_65[iVar10 /*3*/]));
						PED::_0x463803429297117C(uParam0->f_2[iVar10], vVar7, 3, 1);
						uParam0->f_23[iVar10] = 7;
						if (__LIB_0__::func_899(&(uParam0->f_503)))
						{
							__LIB_2__::func_259(&(uParam0->f_503));
						}
						__LIB_13__::func_984(uParam0);
					}
					if (__LIB_0__::func_94(uParam0->f_2[iVar10], vVar1, 1) > (20f + 2f))
					{
						uParam0->f_23[iVar10] = 6;
						if (MAP::DOES_BLIP_EXIST(uParam0->f_358[iVar10]))
						{
							if (MAP::_0xBD62D98799A3DAF0(uParam0->f_358[iVar10], -214162151))
							{
							}
						}
						if (uParam0->f_189 != 1 && uParam0->f_189 != 2)
						{
							__LIB_13__::func_966(uParam0, 1);
						}
					}
					if ((__LIB_11__::func_495(uParam0, iVar10, vVar4, 8f) && __LIB_1__::func_592(&(uParam0->f_65[iVar10 /*3*/])) > 12000) || ((__LIB_11__::func_495(uParam0, iVar10, vVar4, 3f) && __LIB_1__::func_592(&(uParam0->f_65[iVar10 /*3*/])) > 5000) && !__LIB_4__::func_156(uParam0, 65536)))
					{
						if (MAP::DOES_BLIP_EXIST(uParam0->f_358[iVar10]))
						{
							if (MAP::_0xBD62D98799A3DAF0(uParam0->f_358[iVar10], -700928964))
							{
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_350) && uParam0->f_350 == uParam0->f_2[iVar10])
						{
							__LIB_1__::func_480(&(uParam0->f_350));
							__LIB_4__::func_399(&(uParam0->f_329), &(uParam0->f_311));
						}
						__LIB_1__::func_561(&(uParam0->f_65[iVar10 /*3*/]));
						__LIB_13__::func_984(uParam0);
						uParam0->f_23[iVar10] = 3;
					}
					break;
				case 4:
					if (!MAP::DOES_BLIP_EXIST(uParam0->f_358[iVar10]) && !__LIB_4__::func_156(uParam0, 262144))
					{
						uParam0->f_358[iVar10] = MAP::_BLIP_ADD_FOR_ENTITY(-700928964, uParam0->f_2[iVar10]);
					}
					if (!__LIB_0__::func_899(&(uParam0->f_65[iVar10 /*3*/])))
					{
						__LIB_2__::func_259(&(uParam0->f_65[iVar10 /*3*/]));
					}
					vVar4 = { 0f, 0f, 0f };
					iVar11 = 0;
					while (iVar11 < 20)
					{
						if ((iVar11 != iVar10 && !ENTITY::IS_ENTITY_DEAD(uParam0->f_2[iVar11])) && uParam0->f_23[iVar11] == 3)
						{
							vVar4 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_2[iVar11], true, false) };
						}
						else
						{
							iVar11++;
						}
					}
					if (__LIB_0__::func_86(vVar4))
					{
						vVar4 = { __LIB_13__::func_941(uParam0) };
						if (__LIB_0__::func_86(vVar4))
						{
							vVar4 = { vVar1 };
						}
					}
					if (__LIB_13__::func_965(uParam0, iVar10, &vVar4, &vVar7, 0) && !__LIB_4__::func_156(uParam0, 65536))
					{
						uParam0->f_44[iVar10] = ((BUILTIN::TO_FLOAT(iVar10) * 50f) + MISC::GET_RANDOM_FLOAT_IN_RANGE(10f, 50f));
						__LIB_2__::func_259(&(uParam0->f_65[iVar10 /*3*/]));
						PED::_0x463803429297117C(uParam0->f_2[iVar10], vVar7, 3, 1);
						uParam0->f_23[iVar10] = 7;
						if (__LIB_0__::func_899(&(uParam0->f_503)))
						{
							__LIB_2__::func_259(&(uParam0->f_503));
						}
						__LIB_13__::func_984(uParam0);
					}
					if (__LIB_0__::func_94(uParam0->f_2[iVar10], vVar1, 1) > (20f + 2f))
					{
						if (MAP::DOES_BLIP_EXIST(uParam0->f_358[iVar10]))
						{
							if (MAP::_0xBD62D98799A3DAF0(uParam0->f_358[iVar10], -214162151))
							{
							}
						}
						if (uParam0->f_189 != 1 && uParam0->f_189 != 2)
						{
							__LIB_13__::func_966(uParam0, 1);
						}
						uParam0->f_23[iVar10] = 6;
					}
					if ((__LIB_11__::func_495(uParam0, iVar10, vVar4, 8f) && __LIB_1__::func_592(&(uParam0->f_65[iVar10 /*3*/])) > 5000) && !__LIB_4__::func_156(uParam0, 65536))
					{
						if (MAP::DOES_BLIP_EXIST(uParam0->f_358[iVar10]))
						{
							if (MAP::_0xBD62D98799A3DAF0(uParam0->f_358[iVar10], -700928964))
							{
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_350) && uParam0->f_350 == uParam0->f_2[iVar10])
						{
							__LIB_1__::func_480(&(uParam0->f_350));
							__LIB_4__::func_399(&(uParam0->f_329), &(uParam0->f_311));
						}
						__LIB_1__::func_561(&(uParam0->f_65[iVar10 /*3*/]));
						__LIB_13__::func_984(uParam0);
						uParam0->f_23[iVar10] = 3;
					}
					break;
				case 6:
					if (!MAP::DOES_BLIP_EXIST(uParam0->f_358[iVar10]) && !__LIB_4__::func_156(uParam0, 262144))
					{
						uParam0->f_358[iVar10] = MAP::_BLIP_ADD_FOR_ENTITY(-214162151, uParam0->f_2[iVar10]);
					}
					vVar4 = { 0f, 0f, 0f };
					iVar11 = 0;
					while (iVar11 < 20)
					{
						if ((iVar11 != iVar10 && !ENTITY::IS_ENTITY_DEAD(uParam0->f_2[iVar11])) && uParam0->f_23[iVar11] == 3)
						{
							vVar4 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_2[iVar11], true, false) };
						}
						else
						{
							iVar11++;
						}
					}
					if (__LIB_0__::func_86(vVar4))
					{
						vVar4 = { __LIB_13__::func_941(uParam0) };
						if (__LIB_0__::func_86(vVar4))
						{
							vVar4 = { vVar1 };
						}
					}
					if (__LIB_13__::func_965(uParam0, iVar10, &vVar4, &vVar7, 0) && !__LIB_4__::func_156(uParam0, 65536))
					{
						uParam0->f_44[iVar10] = ((BUILTIN::TO_FLOAT(iVar10) * 50f) + MISC::GET_RANDOM_FLOAT_IN_RANGE(10f, 50f));
						__LIB_2__::func_259(&(uParam0->f_65[iVar10 /*3*/]));
						PED::_0x463803429297117C(uParam0->f_2[iVar10], vVar7, 3, 1);
						uParam0->f_23[iVar10] = 7;
						if (__LIB_0__::func_899(&(uParam0->f_503)))
						{
							__LIB_2__::func_259(&(uParam0->f_503));
						}
						__LIB_13__::func_984(uParam0);
						return;
					}
					if (__LIB_11__::func_495(uParam0, iVar10, vVar4, 1101004800 /* Float: 20f */) && !__LIB_4__::func_156(uParam0, 65536))
					{
						if (MAP::DOES_BLIP_EXIST(uParam0->f_358[iVar10]))
						{
							if (MAP::_0xBD62D98799A3DAF0(uParam0->f_358[iVar10], -700928964))
							{
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_350) && uParam0->f_350 == uParam0->f_2[iVar10])
						{
							__LIB_1__::func_480(&(uParam0->f_350));
							__LIB_4__::func_399(&(uParam0->f_329), &(uParam0->f_311));
						}
						__LIB_1__::func_561(&(uParam0->f_65[iVar10 /*3*/]));
						__LIB_13__::func_984(uParam0);
						uParam0->f_23[iVar10] = 3;
					}
					break;
				case 7:
					if (!__LIB_0__::func_899(&(uParam0->f_65[iVar10 /*3*/])))
					{
						__LIB_2__::func_259(&(uParam0->f_65[iVar10 /*3*/]));
					}
					else if (IntToFloat(__LIB_1__::func_592(&(uParam0->f_65[iVar10 /*3*/]))) >= uParam0->f_44[iVar10])
					{
						iVar11 = 0;
						while (iVar11 < 20)
						{
							if ((iVar11 != iVar10 && !ENTITY::IS_ENTITY_DEAD(uParam0->f_2[iVar11])) && uParam0->f_23[iVar11] == 3)
							{
								TASK::_0xE01C8DC8EDD28D31(uParam0->f_2[iVar10], 1);
								if (__LIB_0__::func_665(uParam0->f_2[iVar10], uParam0->f_2[iVar11], 1, 1) > 100f)
								{
									if (!__LIB_0__::func_163(uParam0->f_2[iVar10], 713668775))
									{
										uParam0->f_126[iVar10 /*3*/] = { ENTITY::GET_ENTITY_COORDS(uParam0->f_2[iVar11], false, false) };
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uParam0->f_2[iVar10], uParam0->f_126[iVar10 /*3*/], 2.5f, -1, 0.1f, 1048580, 40000f);
									}
								}
								else if (!__LIB_0__::func_163(uParam0->f_2[iVar10], 1056466932))
								{
									TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(uParam0->f_2[iVar10], uParam0->f_2[iVar11], 0f, 1f, 0f, 2.5f, -1, 0.1f, 1, 0, 1, 0, 1);
									uParam0->f_126[iVar10 /*3*/] = { 0f, 0f, 0f };
								}
								uParam0->f_23[iVar10] = 8;
								__LIB_1__::func_561(&(uParam0->f_65[iVar10 /*3*/]));
								return;
							}
							iVar11++;
						}
						if (uParam0->f_23[iVar10] != 8)
						{
							TASK::_0xE01C8DC8EDD28D31(uParam0->f_2[iVar10], 1);
							if (uParam0->f_189 == 7)
							{
								uParam0->f_126[iVar10 /*3*/] = { VOLUME::_GET_VOLUME_COORDS(uParam0->f_444) };
							}
							else
							{
								uParam0->f_126[iVar10 /*3*/] = { __LIB_13__::func_941(uParam0) };
							}
							if (__LIB_0__::func_86(uParam0->f_126[iVar10 /*3*/]))
							{
								uParam0->f_126[iVar10 /*3*/] = { vVar1 };
							}
							if (__LIB_0__::func_94(uParam0->f_2[iVar10], uParam0->f_126[iVar10 /*3*/], 1) > 100f)
							{
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uParam0->f_2[iVar10], uParam0->f_126[iVar10 /*3*/], 2.5f, -1, 0.1f, 1048580, 40000f);
							}
							else
							{
								TASK::TASK_FOLLOW_TO_OFFSET_OF_COORD(uParam0->f_2[iVar10], uParam0->f_126[iVar10 /*3*/], 0f, 0f, 0f, 2.5f, -1, 0.1f, 1, 1, 1, 0, 1);
							}
							uParam0->f_23[iVar10] = 9;
							__LIB_1__::func_561(&(uParam0->f_65[iVar10 /*3*/]));
							if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_350) && uParam0->f_350 == uParam0->f_2[iVar10])
							{
								__LIB_1__::func_480(&(uParam0->f_350));
								__LIB_4__::func_399(&(uParam0->f_329), &(uParam0->f_311));
							}
							return;
						}
					}
					break;
				case 8:
					if (__LIB_0__::func_94(uParam0->f_2[iVar10], vVar1, 1) <= 20f || (__LIB_0__::func_94(uParam0->f_2[iVar10], uParam0->f_126[iVar10 /*3*/], 1) <= 10f && !__LIB_0__::func_86(uParam0->f_126[iVar10 /*3*/])))
					{
						if (MAP::DOES_BLIP_EXIST(uParam0->f_358[iVar10]))
						{
							if (MAP::_0xBD62D98799A3DAF0(uParam0->f_358[iVar10], -700928964))
							{
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_350) && uParam0->f_350 == uParam0->f_2[iVar10])
						{
							__LIB_1__::func_480(&(uParam0->f_350));
							__LIB_4__::func_399(&(uParam0->f_329), &(uParam0->f_311));
						}
						__LIB_1__::func_561(&(uParam0->f_65[iVar10 /*3*/]));
						uParam0->f_23[iVar10] = 3;
						uParam0->f_126[iVar10 /*3*/] = { 0f, 0f, 0f };
						iVar12 = 0;
						while (iVar12 < 20)
						{
							if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_2[iVar12]) && uParam0->f_23[iVar12] == 3)
							{
								if (MAP::DOES_BLIP_EXIST(uParam0->f_358[iVar12]))
								{
									if (MAP::_0xBD62D98799A3DAF0(uParam0->f_358[iVar12], -700928964))
									{
									}
								}
							}
							iVar12++;
						}
					}
					else if ((!__LIB_0__::func_163(uParam0->f_2[iVar10], 1056466932) && !__LIB_0__::func_163(uParam0->f_2[iVar10], 713668775)) && !TASK::_0x0C3CB2E600C8977D(uParam0->f_2[iVar10], 1))
					{
						TASK::TASK_ANIMAL_UNALERTED(uParam0->f_2[iVar10], -1, 0, 1, 1);
						uParam0->f_23[iVar10] = 6;
					}
					else if (((__LIB_0__::func_163(uParam0->f_2[iVar10], 1056466932) || __LIB_0__::func_163(uParam0->f_2[iVar10], 713668775)) && !TASK::_0x0C3CB2E600C8977D(uParam0->f_2[iVar10], 1)) && PED::IS_PED_STOPPED(uParam0->f_2[iVar10]))
					{
						if (!__LIB_0__::func_899(&(uParam0->f_65[iVar10 /*3*/])))
						{
							__LIB_2__::func_259(&(uParam0->f_65[iVar10 /*3*/]));
						}
						else if (__LIB_1__::func_592(&(uParam0->f_65[iVar10 /*3*/])) > 3000)
						{
							iVar11 = 0;
							while (iVar11 < 20)
							{
								if ((iVar11 != iVar10 && !ENTITY::IS_ENTITY_DEAD(uParam0->f_2[iVar11])) && uParam0->f_23[iVar11] == 3)
								{
									if (__LIB_0__::func_665(uParam0->f_2[iVar10], uParam0->f_2[iVar11], 1, 1) > 100f)
									{
										uParam0->f_126[iVar10 /*3*/] = { ENTITY::GET_ENTITY_COORDS(uParam0->f_2[iVar11], false, false) };
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uParam0->f_2[iVar10], uParam0->f_126[iVar10 /*3*/], 2.5f, -1, 0.1f, 1048580, 40000f);
									}
									else
									{
										TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(uParam0->f_2[iVar10], uParam0->f_2[iVar11], 0f, 1f, 0f, 2.5f, -1, 0.1f, 1, 0, 1, 0, 1);
										uParam0->f_126[iVar10 /*3*/] = { 0f, 0f, 0f };
									}
									uParam0->f_23[iVar10] = 8;
									__LIB_2__::func_259(&(uParam0->f_65[iVar10 /*3*/]));
									return;
								}
								iVar11++;
							}
						}
					}
					else
					{
						if (__LIB_0__::func_899(&(uParam0->f_65[iVar10 /*3*/])))
						{
							__LIB_1__::func_561(&(uParam0->f_65[iVar10 /*3*/]));
						}
						if (__LIB_0__::func_163(uParam0->f_2[iVar10], 713668775))
						{
							if (__LIB_0__::func_94(uParam0->f_2[iVar10], uParam0->f_126[iVar10 /*3*/], 1) < 15f)
							{
								iVar11 = 0;
								while (iVar11 < 20)
								{
									if ((iVar11 != iVar10 && !ENTITY::IS_ENTITY_DEAD(uParam0->f_2[iVar11])) && uParam0->f_23[iVar11] == 3)
									{
										if (__LIB_0__::func_665(uParam0->f_2[iVar10], uParam0->f_2[iVar11], 1, 1) > 100f)
										{
											uParam0->f_126[iVar10 /*3*/] = { ENTITY::GET_ENTITY_COORDS(uParam0->f_2[iVar11], false, false) };
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uParam0->f_2[iVar10], uParam0->f_126[iVar10 /*3*/], 2.5f, -1, 0.1f, 1048580, 40000f);
										}
										else
										{
											TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(uParam0->f_2[iVar10], uParam0->f_2[iVar11], 0f, 1f, 0f, 2.5f, -1, 0.1f, 1, 0, 1, 0, 1);
											uParam0->f_126[iVar10 /*3*/] = { 0f, 0f, 0f };
										}
										uParam0->f_23[iVar10] = 8;
										__LIB_2__::func_259(&(uParam0->f_65[iVar10 /*3*/]));
										return;
									}
									iVar11++;
								}
							}
						}
						if (!__LIB_4__::func_156(uParam0, 16384))
						{
							__LIB_13__::func_955(uParam0, 16384);
						}
					}
					if (!MAP::DOES_BLIP_EXIST(uParam0->f_358[iVar10]) && !__LIB_4__::func_156(uParam0, 262144))
					{
						uParam0->f_358[iVar10] = MAP::_BLIP_ADD_FOR_ENTITY(-214162151, uParam0->f_2[iVar10]);
					}
					break;
				case 9:
					if (((!__LIB_0__::func_163(uParam0->f_2[iVar10], -1775383291) && !__LIB_0__::func_163(uParam0->f_2[iVar10], 713668775)) && !TASK::_0x0C3CB2E600C8977D(uParam0->f_2[iVar10], 1)) || __LIB_11__::func_495(uParam0, iVar10, uParam0->f_126[iVar10 /*3*/], 10f))
					{
						if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_350) && uParam0->f_350 == uParam0->f_2[iVar10])
						{
							__LIB_1__::func_480(&(uParam0->f_350));
							__LIB_4__::func_399(&(uParam0->f_329), &(uParam0->f_311));
						}
						uParam0->f_126[iVar10 /*3*/] = { 0f, 0f, 0f };
						uParam0->f_23[iVar10] = 3;
						iVar13 = 0;
						while (iVar13 < 20)
						{
							if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_2[iVar13]) && uParam0->f_23[iVar13] == 3)
							{
								if (MAP::DOES_BLIP_EXIST(uParam0->f_358[iVar13]))
								{
									if (MAP::_0xBD62D98799A3DAF0(uParam0->f_358[iVar13], -700928964))
									{
									}
								}
								else
								{
									uParam0->f_358[iVar13] = MAP::_BLIP_ADD_FOR_ENTITY(-700928964, uParam0->f_2[iVar13]);
								}
							}
							iVar13++;
						}
					}
					if (!MAP::DOES_BLIP_EXIST(uParam0->f_358[iVar10]) && !__LIB_4__::func_156(uParam0, 262144))
					{
						uParam0->f_358[iVar10] = MAP::_BLIP_ADD_FOR_ENTITY(-214162151, uParam0->f_2[iVar10]);
					}
					break;
			}
		}
		iVar10++;
	}
	if (bVar0 || __LIB_11__::func_496(uParam0))
	{
		__LIB_18__::func_726(uParam0, &(uParam0->f_190[uParam0->f_209 /*9*/]), 0);
		if (__LIB_4__::func_156(uParam0, 16384))
		{
			iVar15 = __LIB_13__::func_942(uParam0);
			if (!ENTITY::IS_ENTITY_DEAD(iVar15))
			{
				fVar14 = BUILTIN::VDIST(vVar1, ENTITY::GET_ENTITY_COORDS(iVar15, false, false));
				vVar16 = { ENTITY::GET_ENTITY_COORDS(iVar15, false, false) };
				PATHFIND::_0xCF213A5FC3ABFC08(vVar16.x, vVar16.y, fVar14);
			}
			else
			{
				fVar14 = 40f;
				PATHFIND::_0xCF213A5FC3ABFC08(vVar1.x, vVar1.y, fVar14);
			}
		}
	}
	else if (__LIB_4__::func_156(uParam0, 16384))
	{
		__LIB_13__::func_958(uParam0, 16384);
	}
}

void func_1467(var uParam0)
{
	int iVar0;
	vector3 vVar1[24];
	if (__LIB_11__::func_494(uParam0, 8))
	{
		return;
	}
	if (__LIB_0__::func_86(uParam0->f_613))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_440))
		{
			__LIB_1__::func_480(&(uParam0->f_440));
			PED::SET_PED_CONFIG_FLAG(uParam0->f_440, 297, false);
		}
		__LIB_2__::func_480(&(uParam0->f_401), 0, 1, 1, 0);
		__LIB_4__::func_399(&(uParam0->f_419), &(uParam0->f_401));
		return;
	}
	if (uParam0->f_189 >= 7)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_440))
		{
			__LIB_1__::func_480(&(uParam0->f_440));
			PED::SET_PED_CONFIG_FLAG(uParam0->f_440, 297, false);
		}
		__LIB_2__::func_480(&(uParam0->f_401), 0, 0, 1, 0);
		__LIB_4__::func_399(&(uParam0->f_419), &(uParam0->f_401));
		return;
	}
	if (uParam0->f_209 == -1)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_440) || (!__LIB_3__::func_572(PLAYER::GET_PLAYER_INDEX(), uParam0->f_440, &(uParam0->f_419)) && uParam0->f_400 != 2))
	{
		iVar0 = __LIB_13__::func_968(uParam0, &(uParam0->f_190[uParam0->f_209 /*9*/]), 0);
		if (uParam0->f_440 != iVar0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_440))
			{
				__LIB_1__::func_480(&(uParam0->f_440));
				PED::SET_PED_CONFIG_FLAG(uParam0->f_440, 297, false);
			}
			__LIB_4__::func_399(&(uParam0->f_419), &(uParam0->f_401));
			__LIB_13__::func_985(uParam0);
			uParam0->f_440 = iVar0;
			PED::SET_PED_CONFIG_FLAG(uParam0->f_440, 297, true);
		}
	}
	if ((AUDIO::_0xFE5C6177064BD390(1) || AUDIO::_0xA2CAC9DEF0195E6F(1)) || uParam0->f_400 == 2)
	{
		if (__LIB_2__::func_466(&(uParam0->f_401[0 /*17*/]), 0, 0))
		{
			__LIB_2__::func_411(&(uParam0->f_401[0 /*17*/]), 0, 0);
		}
	}
	else if (uParam0->f_400 != 2)
	{
		if (!__LIB_2__::func_466(&(uParam0->f_401[0 /*17*/]), 0, 0))
		{
			__LIB_2__::func_411(&(uParam0->f_401[0 /*17*/]), 1, 0);
		}
	}
	if (uParam0->f_400 == 1 || uParam0->f_400 == 2)
	{
		func_433(&(uParam0->f_440), &(uParam0->f_419), (uParam0->f_636 + 4f), &(uParam0->f_401), 0f, 3, 0, __LIB_11__::func_504(uParam0), __LIB_2__::func_340(2, 0, 0), 0, 0, 2, -1082130432 /* Float: -1f */);
	}
	if (uParam0->f_400 == 1 || (uParam0->f_400 == 2 && __LIB_3__::func_572(PLAYER::GET_PLAYER_INDEX(), uParam0->f_440, &(uParam0->f_419))))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 266, true);
	}
	if (__LIB_11__::func_505(uParam0))
	{
		if (uParam0->f_400 == 0 || uParam0->f_400 == 1)
		{
			__LIB_2__::func_259(&(uParam0->f_441));
			__LIB_2__::func_411(&(uParam0->f_401[0 /*17*/]), 0, 0);
			uParam0->f_637 = (uParam0->f_636 + 20f);
			uParam0->f_400 = 2;
		}
		else if (uParam0->f_400 == 2)
		{
			__LIB_2__::func_259(&(uParam0->f_441));
		}
		if (__LIB_19__::func_314(uParam0, 50f, 1065353216 /* Float: 1f */, 0, 5f, 1))
		{
		}
	}
	switch (uParam0->f_400)
	{
		case 0:
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(uParam0->f_190[uParam0->f_209 /*9*/].f_2, false, false), __LIB_11__::func_467(uParam0, 1), true) <= uParam0->f_636)
			{
				uParam0->f_400 = 1;
			}
			break;
		case 1:
			if (__LIB_9__::func_754(&(uParam0->f_419)))
			{
				if (!__LIB_0__::func_481(1) && !__LIB_0__::func_181())
				{
					StringCopy(&cVar1, "HRD_SHOUT", 24);
					if (__LIB_1__::func_104(&(uParam0->f_506), cVar1, 0, -1, 0, 0))
					{
						func_1964(uParam0);
					}
				}
				else
				{
					func_1964(uParam0);
				}
			}
			else if (!__LIB_3__::func_572(PLAYER::GET_PLAYER_INDEX(), uParam0->f_440, &(uParam0->f_419)) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(uParam0->f_190[uParam0->f_209 /*9*/].f_2, false, false), __LIB_11__::func_467(uParam0, 1), true) > (uParam0->f_636 + 5f))
			{
				__LIB_1__::func_480(&(uParam0->f_440));
				PED::SET_PED_CONFIG_FLAG(uParam0->f_440, 297, false);
				__LIB_4__::func_399(&(uParam0->f_419), &(uParam0->f_401));
				uParam0->f_440 = 0;
				uParam0->f_400 = 0;
			}
			break;
		case 2:
			if (!__LIB_0__::func_899(&(uParam0->f_441)))
			{
				__LIB_2__::func_259(&(uParam0->f_441));
			}
			else if (__LIB_1__::func_592(&(uParam0->f_441)) >= 10000)
			{
				uParam0->f_637 = uParam0->f_636;
				__LIB_1__::func_561(&(uParam0->f_441));
				__LIB_2__::func_411(&(uParam0->f_401[0 /*17*/]), 1, 0);
				uParam0->f_400 = 0;
			}
			break;
	}
}

void func_1470(var uParam0)
{
	int iVar0;
	struct<9> Var1;
	int iVar10;
	int iVar11;
	vector3 vVar12;
	vector3 vVar15;
	vector3 vVar18;
	float fVar21;
	vector3 vVar22;
	vector3 vVar25;
	vector3 vVar28;
	vector3 vVar31;
	float fVar34;
	var uVar35;
	float fVar36;
	vector3 vVar37;
	var uVar40;
	if (__LIB_13__::func_943(uParam0))
	{
		Var1 = -1;
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (uParam0->f_190[iVar0 /*9*/] == 0)
			{
				Var1 = { uParam0->f_190[iVar0 /*9*/] };
			}
			if ((uParam0->f_190[iVar0 /*9*/] == 1 && ENTITY::DOES_ENTITY_EXIST(uParam0->f_190[iVar0 /*9*/].f_2)) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_190[iVar0 /*9*/].f_2))
			{
				iVar10 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_190[iVar0 /*9*/].f_2);
				if (!PED::GET_PED_CONFIG_FLAG(iVar10, 167, true) && !__LIB_13__::func_969(uParam0))
				{
					PED::SET_PED_CONFIG_FLAG(iVar10, 167, true);
				}
				iVar11 = iVar0;
			}
			iVar0++;
		}
		if (!__LIB_13__::func_969(uParam0) && (__LIB_0__::func_272(iVar10, 0) || __LIB_13__::func_944(uParam0)))
		{
			vVar12 = { __LIB_11__::func_467(uParam0, 1) };
			vVar15 = { __LIB_13__::func_970(uParam0, &Var1) };
			vVar18 = { __LIB_13__::func_941(uParam0) - vVar12 };
			vVar18 = { __LIB_0__::func_173(vVar18) };
			fVar21 = __LIB_1__::func_95(vVar15, vVar18);
			fVar21 = MISC::ABSF(fVar21);
			vVar22 = { vVar12 + vVar18 * Vector(fVar21, fVar21, fVar21) };
			vVar15 = { vVar15 + vVar12 };
			vVar25 = { vVar22 - vVar15 };
			vVar28 = { vVar25 + vVar22 };
			vVar31 = { vVar12 - vVar28 };
			fVar34 = BUILTIN::VMAG(vVar31);
			vVar31 = { __LIB_0__::func_173(vVar31) };
			fVar34 = (fVar34 + __LIB_0__::func_94(uParam0->f_2[__LIB_13__::func_956(uParam0, 0)], vVar12, 1));
			fVar34 = (fVar34 + 12.5f);
			if (fVar34 < uParam0->f_637)
			{
				fVar34 = uParam0->f_637;
			}
			vVar31 = { vVar31 * Vector(fVar34, fVar34, fVar34) };
			vVar31 = { vVar31 + vVar28 };
			vVar31.f_2 = (vVar31.z + 50f);
			MISC::GET_GROUND_Z_FOR_3D_COORD(vVar31, &uVar35, false);
			vVar31.f_2 = uVar35;
			uParam0->f_494 = { vVar31 };
			fVar36 = __LIB_0__::func_94(uParam0->f_2[__LIB_13__::func_956(uParam0, 0)], vVar12, 1);
			if (__LIB_13__::func_944(uParam0))
			{
				vVar37 = { ENTITY::GET_ENTITY_COORDS(Var1.f_2, true, false) };
			}
			else
			{
				vVar37 = { ENTITY::GET_ENTITY_COORDS(iVar10, false, false) };
			}
			uParam0->f_494 = { __LIB_13__::func_971(&vVar37, &(uParam0->f_494), &vVar12, (fVar36 + 5f)) };
			uParam0->f_494 = { uParam0->f_494 + Vector(20f, 0f, 0f) };
			if (MISC::GET_GROUND_Z_FOR_3D_COORD(uParam0->f_494, &uVar40, false))
			{
				uParam0->f_494.f_2 = uVar40;
			}
			else
			{
				uParam0->f_494 = { uParam0->f_494 - Vector(20f, 0f, 0f) };
			}
		}
		if (__LIB_13__::func_943(uParam0) && (__LIB_0__::func_272(iVar10, 0) || __LIB_13__::func_944(uParam0)))
		{
			__LIB_18__::func_726(uParam0, &(uParam0->f_190[iVar11 /*9*/]), 1);
			if (!__LIB_0__::func_899(&(uParam0->f_660)))
			{
				__LIB_1__::func_585(&(uParam0->f_660), 250f);
			}
			else if (__LIB_1__::func_592(&(uParam0->f_660)) >= 250 || uParam0->f_210 == 2)
			{
				if (__LIB_0__::func_272(iVar10, 0) && !__LIB_13__::func_944(uParam0))
				{
					if (!PED::IS_PED_ON_MOUNT(iVar10))
					{
						return;
					}
				}
				__LIB_19__::func_496(uParam0, &Var1, &(uParam0->f_190[iVar11 /*9*/]));
				__LIB_19__::func_497(uParam0, &(uParam0->f_190[iVar11 /*9*/]), &Var1);
				switch (uParam0->f_210)
				{
					case 4:
						if (!__LIB_11__::func_500(uParam0))
						{
							if (__LIB_18__::func_727(uParam0, &(uParam0->f_190[iVar11 /*9*/])))
							{
								__LIB_11__::func_501(uParam0, uParam0->f_210.f_1);
							}
						}
						else
						{
							__LIB_18__::func_364(uParam0, &(uParam0->f_190[iVar11 /*9*/]), &Var1);
						}
						break;
					case 5:
						if (!__LIB_11__::func_500(uParam0))
						{
							if (__LIB_18__::func_727(uParam0, &Var1))
							{
								__LIB_11__::func_501(uParam0, uParam0->f_210.f_1);
							}
						}
						else
						{
							__LIB_18__::func_728(uParam0, &Var1);
						}
						break;
					case 6:
						__LIB_18__::func_729(uParam0, &Var1);
						break;
					case 0:
						if (!__LIB_11__::func_500(uParam0))
						{
							if (__LIB_18__::func_727(uParam0, &(uParam0->f_190[iVar11 /*9*/])))
							{
								__LIB_11__::func_501(uParam0, uParam0->f_210.f_1);
							}
						}
						else
						{
							func_1978(uParam0, &(uParam0->f_190[iVar11 /*9*/]), &Var1);
						}
						break;
					case 1:
						if (!__LIB_11__::func_500(uParam0))
						{
							if (__LIB_18__::func_727(uParam0, &(uParam0->f_190[iVar11 /*9*/])))
							{
								__LIB_11__::func_501(uParam0, uParam0->f_210.f_1);
							}
						}
						else
						{
							if (PED::IS_PED_IN_GROUP(iVar10))
							{
								PED::REMOVE_PED_FROM_GROUP(iVar10);
							}
							__LIB_18__::func_730(uParam0, &(uParam0->f_190[iVar11 /*9*/]));
						}
						break;
					case 2:
						if (!__LIB_11__::func_500(uParam0))
						{
							if (__LIB_18__::func_727(uParam0, &(uParam0->f_190[iVar11 /*9*/])))
							{
								__LIB_11__::func_501(uParam0, uParam0->f_210.f_1);
							}
						}
						else
						{
							if (PED::IS_PED_IN_GROUP(iVar10))
							{
								PED::REMOVE_PED_FROM_GROUP(iVar10);
							}
							__LIB_18__::func_737(uParam0, &(uParam0->f_190[iVar11 /*9*/]));
						}
						break;
					case 3:
						if (!__LIB_11__::func_500(uParam0))
						{
							if (__LIB_18__::func_727(uParam0, &(uParam0->f_190[iVar11 /*9*/])))
							{
								__LIB_11__::func_501(uParam0, uParam0->f_210.f_1);
							}
						}
						else
						{
							if (PED::IS_PED_IN_GROUP(iVar10))
							{
								PED::REMOVE_PED_FROM_GROUP(iVar10);
							}
							__LIB_18__::func_365(uParam0, &(uParam0->f_190[iVar11 /*9*/]));
						}
						break;
				}
				if (__LIB_11__::func_494(uParam0, 32))
				{
					__LIB_13__::func_963(uParam0, 32);
				}
				__LIB_2__::func_259(&(uParam0->f_660));
			}
		}
	}
}

void func_1512()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_2007(0);
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
	func_2007(1);
}

void func_1513()
{
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_343(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_1514()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_2010(0);
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
	func_2010(1);
}

void func_1515()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_1__::func_432(15000, 0, 0, 0, 1);
			func_2010(0);
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
	func_2010(1);
}

void func_1516()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_343(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_343(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_1519(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_1519(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
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

int func_1519(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			func_1519(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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

int func_1541(var uParam0, int iParam1, int iParam2, int iParam3)
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
	iVar11 = (func_2031(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_952(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_343(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	__LIB_1__::func_432(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

int func_1557(int iParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;
	int iVar6;
	if (LAW::_GET_BOUNTY_FOR_PLAYER(PLAYER::PLAYER_ID()) <= 0)
	{
		return 0;
	}
	if (Global_1310720.f_21 == -1)
	{
		return 0;
	}
	if (Global_1310720.f_23 >= 3)
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_560(Global_1310720.f_21, 2);
	if (iVar0 == -1)
	{
		return 0;
	}
	__LIB_0__::func_720(15, &Var1);
	Var1.f_2 = -1999103282;
	Var1.f_3 = iParam0;
	Var1.f_4 = iParam1;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var1.f_1), &Var1))
	{
		Var1.f_2 = 383290544;
		DATAFILE::_DATAFILE_GET_HASH(&iVar6, &Var1);
		if (func_2041(iVar0) == iVar6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_1558(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	iVar0 = func_2042(iParam0);
	if (__LIB_0__::func_898(373691918) && Global_1310720.f_12)
	{
		return iVar0 == 4;
	}
	if (iParam2 != -1)
	{
		return iVar0 == iParam2;
	}
	return (bParam1 || iVar0 == -1);
}

void func_1738()
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
	iVar0 = func_2142(6291456, 0);
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

void func_1745(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_1745(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_1745(iVar2, vParam1, fParam4, iParam5, iParam6);
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

void func_1945(var uParam0)
{
	int iVar0;
	vector3 vVar1[24];
	char* sVar4;
	if (__LIB_11__::func_494(uParam0, 8))
	{
		return;
	}
	if (uParam0->f_209 == -1)
	{
		return;
	}
	if (__LIB_4__::func_156(uParam0, 65536))
	{
		return;
	}
	if ((!ENTITY::DOES_ENTITY_EXIST(uParam0->f_350) || !__LIB_3__::func_572(PLAYER::GET_PLAYER_INDEX(), uParam0->f_350, &(uParam0->f_329))) && __LIB_11__::func_482(uParam0, 1))
	{
		iVar0 = __LIB_13__::func_976(uParam0, uParam0->f_190[uParam0->f_209 /*9*/].f_2);
		if (uParam0->f_351 != iVar0 && iVar0 != -1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_350))
			{
				__LIB_1__::func_480(&(uParam0->f_350));
				PED::SET_PED_CONFIG_FLAG(uParam0->f_350, 297, false);
			}
			__LIB_4__::func_399(&(uParam0->f_329), &(uParam0->f_311));
			__LIB_13__::func_986(uParam0);
			uParam0->f_351 = iVar0;
			uParam0->f_350 = uParam0->f_2[uParam0->f_351];
			PED::SET_PED_CONFIG_FLAG(uParam0->f_350, 297, true);
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_350) && uParam0->f_351 != -1)
	{
		if (!__LIB_11__::func_476(uParam0, uParam0->f_351))
		{
			__LIB_1__::func_480(&(uParam0->f_350));
			PED::SET_PED_CONFIG_FLAG(uParam0->f_350, 297, false);
			uParam0->f_350 = 0;
			uParam0->f_351 = -1;
			__LIB_4__::func_399(&(uParam0->f_329), &(uParam0->f_311));
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_350) || uParam0->f_351 == -1)
	{
		return;
	}
	if (AUDIO::_0xFE5C6177064BD390(1) || AUDIO::_0xA2CAC9DEF0195E6F(1))
	{
		if (__LIB_2__::func_466(&(uParam0->f_311[0 /*17*/]), 0, 0))
		{
			__LIB_2__::func_411(&(uParam0->f_311[0 /*17*/]), 0, 0);
		}
	}
	else if (!__LIB_2__::func_466(&(uParam0->f_311[0 /*17*/]), 0, 0))
	{
		__LIB_2__::func_411(&(uParam0->f_311[0 /*17*/]), 1, 0);
	}
	if (uParam0->f_310 == 1 && __LIB_3__::func_572(PLAYER::GET_PLAYER_INDEX(), uParam0->f_350, &(uParam0->f_329)))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 266, true);
	}
	if (uParam0->f_310 == 1)
	{
		func_433(&(uParam0->f_350), &(uParam0->f_329), 20f, &(uParam0->f_311), 0, 3, 0, 0, 1, 0, 0, 2, -1082130432 /* Float: -1f */);
	}
	switch (uParam0->f_310)
	{
		case 0:
			if (__LIB_0__::func_94(uParam0->f_350, ENTITY::GET_ENTITY_COORDS(uParam0->f_190[uParam0->f_209 /*9*/].f_2, false, false), 1) <= (20f + 5f))
			{
				uParam0->f_310 = 1;
			}
			break;
		case 1:
			if (__LIB_9__::func_754(&(uParam0->f_329)))
			{
				if (!__LIB_0__::func_481(1) && !__LIB_0__::func_181())
				{
					StringCopy(&cVar1, "HRD_SHOUT", 24);
					sVar4 = "ARTHUR";
					__LIB_0__::func_928(&(uParam0->f_506), PLAYER::PLAYER_PED_ID(), sVar4, 1);
					if (__LIB_1__::func_104(&(uParam0->f_506), cVar1, 0, -1, 0, 0))
					{
						func_2219(uParam0);
						uParam0->f_310 = 0;
					}
				}
				else
				{
					func_2219(uParam0);
					uParam0->f_310 = 0;
				}
			}
			else if (!__LIB_3__::func_572(PLAYER::GET_PLAYER_INDEX(), uParam0->f_350, &(uParam0->f_329)) && __LIB_0__::func_94(uParam0->f_350, ENTITY::GET_ENTITY_COORDS(uParam0->f_190[uParam0->f_209 /*9*/].f_2, false, false), 1) > (20f + 10f))
			{
				uParam0->f_310 = 0;
			}
			else if (uParam0->f_351 != -1 && !__LIB_11__::func_476(uParam0, uParam0->f_351))
			{
				uParam0->f_310 = 0;
			}
			break;
	}
}

void func_1964(var uParam0)
{
	if (__LIB_1__::func_985())
	{
		PED::_SET_PED_BLACKBOARD_BOOL(PLAYER::PLAYER_PED_ID(), "DoHerdSmack", true, 50);
	}
	else
	{
		PED::_SET_PED_BLACKBOARD_BOOL(PLAYER::PLAYER_PED_ID(), "DoHerdWhip", true, 50);
	}
	__LIB_2__::func_259(&(uParam0->f_441));
	__LIB_2__::func_411(&(uParam0->f_401[0 /*17*/]), 0, 0);
	uParam0->f_637 = (uParam0->f_636 + 20f);
	uParam0->f_400 = 2;
}

void func_1978(var uParam0, var uParam1, var uParam2)
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	WEAPON::GET_CURRENT_PED_WEAPON(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), &iVar10, true, 0, false);
	WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar11, false, 0, false);
	if (iVar11 != joaat("WEAPON_UNARMED"))
	{
		if (iVar10 == joaat("WEAPON_UNARMED") && !__LIB_0__::func_163(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), 716706914))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), WEAPON::GET_BEST_PED_WEAPON(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), false, false), false, 0, false, false);
			TASK::TASK_SWAP_WEAPON(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), 1, 0, 0, 0);
		}
	}
	else if (iVar10 != joaat("WEAPON_UNARMED") && !__LIB_0__::func_163(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), 716706914))
	{
		WEAPON::_HIDE_PED_WEAPONS(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), 2, false);
		WEAPON::SET_CURRENT_PED_WEAPON(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), joaat("WEAPON_UNARMED"), false, 0, false, false);
		TASK::TASK_SWAP_WEAPON(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), 0, 0, 0, 0);
	}
	switch (uParam0->f_210.f_4)
	{
		case 0:
			fVar0 = __LIB_0__::func_94(uParam0->f_2[__LIB_13__::func_956(uParam0, 0)], uParam0->f_613, 1);
			vVar1 = { ENTITY::GET_ENTITY_COORDS(uParam1->f_2, false, false) };
			vVar4 = { ENTITY::GET_ENTITY_COORDS(uParam2->f_2, false, false) };
			vVar7 = { __LIB_13__::func_971(&vVar1, &vVar4, &(uParam0->f_613), (fVar0 + 5f)) };
			if (__LIB_0__::func_665(uParam1->f_2, uParam2->f_2, 1, 1) > 15f)
			{
				if (!__LIB_4__::func_301(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), -1775383291))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), -1775383291, true) != 0)
					{
						TASK::TASK_FOLLOW_TO_OFFSET_OF_COORD(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), vVar7, 0f, 0f, 0f, 1.75f, -1, 3f, 1, 1, 1, 0, 1);
						uParam0->f_210.f_6.f_3 = __LIB_13__::func_957(uParam0, uParam1->f_2);
						uParam0->f_210.f_6.f_4 = 21030;
						uParam0->f_210.f_6.f_7 = -1;
						uParam0->f_210.f_6.f_17 = 4;
						uParam0->f_210.f_6.f_18 = 4;
						uParam0->f_210.f_6.f_19 = 4;
						uParam0->f_210.f_6.f_21 = 4;
						_NAMESPACE29::_0x66F9EB44342BB4C5(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), &(uParam0->f_210.f_6));
					}
				}
				else
				{
					TASK::_0x3FFCD7BBA074CC80(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), vVar7, 0f, 0f, 0f, 1.75f, 3f);
				}
			}
			else if (__LIB_0__::func_94(uParam1->f_2, uParam0->f_613, 1) > fVar0)
			{
				if (PED::DOES_GROUP_EXIST(uParam0->f_379))
				{
					PED::SET_GROUP_FORMATION(uParam0->f_379, 5);
					PED::ADD_CUSTOM_FORMATION_LOCATION(uParam0->f_379, -5f, -2f, 0f, 0);
					PED::_0x40C3524D4ED83554(uParam0->f_379, 1);
					PED::_0x8AFCCC0F18D70018(uParam0->f_379, 1);
				}
				TASK::CLEAR_PED_TASKS(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), true, false);
				PED::SET_PED_CONFIG_FLAG(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), 279, true);
				uParam0->f_210.f_4 = 1;
			}
			else
			{
				if (PED::DOES_GROUP_EXIST(uParam0->f_379))
				{
					PED::SET_GROUP_FORMATION(uParam0->f_379, 5);
					PED::ADD_CUSTOM_FORMATION_LOCATION(uParam0->f_379, -5f, -5f, 0f, 0);
					PED::_0x40C3524D4ED83554(uParam0->f_379, 1);
					PED::_0x8AFCCC0F18D70018(uParam0->f_379, 1);
				}
				TASK::CLEAR_PED_TASKS(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), true, false);
				PED::SET_PED_CONFIG_FLAG(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), 279, true);
				uParam0->f_210.f_4 = 2;
			}
			break;
		case 1:
			fVar0 = __LIB_0__::func_94(uParam0->f_2[__LIB_13__::func_956(uParam0, 0)], uParam0->f_613, 1);
			if (!PED::DOES_GROUP_EXIST(uParam0->f_379))
			{
				uParam0->f_379 = PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
				if (!PED::DOES_GROUP_EXIST(uParam0->f_379))
				{
					uParam0->f_379 = PED::CREATE_GROUP(0);
				}
				if (!PED::_0x878B68960C1C2A35(PLAYER::PLAYER_PED_ID(), uParam0->f_379))
				{
					if (!PED::IS_PED_GROUP_MEMBER(PLAYER::PLAYER_PED_ID(), uParam0->f_379, 0))
					{
						PED::REMOVE_PED_FROM_GROUP(PLAYER::PLAYER_PED_ID());
					}
					PED::SET_PED_AS_GROUP_LEADER(PLAYER::PLAYER_PED_ID(), uParam0->f_379, true);
				}
				PED::SET_GROUP_FORMATION(uParam0->f_379, 5);
				PED::ADD_CUSTOM_FORMATION_LOCATION(uParam0->f_379, -5f, -2f, 0f, 0);
				PED::_0x40C3524D4ED83554(uParam0->f_379, 1);
				PED::SET_PED_CONFIG_FLAG(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), 279, true);
				PED::_0x8AFCCC0F18D70018(uParam0->f_379, 1);
			}
			if (__LIB_0__::func_665(uParam1->f_2, uParam2->f_2, 1, 1) > 20f)
			{
				if (__LIB_0__::func_272(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), 0) && PED::IS_PED_GROUP_MEMBER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), uParam0->f_379, 0))
				{
					PED::REMOVE_PED_FROM_GROUP(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2));
				}
				uParam0->f_210.f_4 = 0;
			}
			else
			{
				if ((__LIB_0__::func_272(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), 0) && PED::DOES_GROUP_EXIST(uParam0->f_379)) && !PED::IS_PED_GROUP_MEMBER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), uParam0->f_379, 0))
				{
					PED::SET_GROUP_FORMATION(uParam0->f_379, 5);
					PED::ADD_CUSTOM_FORMATION_LOCATION(uParam0->f_379, -5f, -2f, 0f, 0);
					PED::_0x40C3524D4ED83554(uParam0->f_379, 1);
					PED::SET_PED_AS_GROUP_MEMBER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), uParam0->f_379);
					PED::SET_PED_CONFIG_FLAG(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), 279, true);
					TASK::CLEAR_PED_TASKS(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), true, false);
					uParam0->f_210.f_6.f_3 = __LIB_13__::func_957(uParam0, uParam1->f_2);
					uParam0->f_210.f_6.f_4 = 21030;
					uParam0->f_210.f_6.f_7 = -1;
					uParam0->f_210.f_6.f_17 = 4;
					uParam0->f_210.f_6.f_18 = 4;
					uParam0->f_210.f_6.f_19 = 4;
					uParam0->f_210.f_6.f_21 = 4;
					_NAMESPACE29::_0x66F9EB44342BB4C5(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), &(uParam0->f_210.f_6));
				}
				else if (PED::DOES_GROUP_EXIST(uParam0->f_379) && PED::IS_PED_IN_GROUP(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2)))
				{
					iVar12 = __LIB_13__::func_957(uParam0, uParam1->f_2);
					if (ENTITY::DOES_ENTITY_EXIST(iVar12) && !TASK::_0x508F5053E3F6F0C4(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), ENTITY::GET_ENTITY_COORDS(__LIB_13__::func_957(uParam0, uParam1->f_2), false, false), 75f))
					{
						uParam0->f_210.f_6.f_3 = iVar12;
						uParam0->f_210.f_6.f_4 = 21030;
						uParam0->f_210.f_6.f_7 = -1;
						uParam0->f_210.f_6.f_17 = 4;
						uParam0->f_210.f_6.f_18 = 4;
						uParam0->f_210.f_6.f_19 = 4;
						uParam0->f_210.f_6.f_21 = 4;
						_NAMESPACE29::_0x66F9EB44342BB4C5(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), &(uParam0->f_210.f_6));
					}
					if (!__LIB_0__::func_899(&(uParam0->f_210.f_34)))
					{
						__LIB_2__::func_259(&(uParam0->f_210.f_34));
					}
					else if (__LIB_10__::func_919(&(uParam0->f_210.f_34)) > 3000)
					{
						if (__LIB_0__::func_94(uParam1->f_2, uParam0->f_613, 1) < fVar0 && uParam0->f_210.f_4 == 1)
						{
							PED::ADD_CUSTOM_FORMATION_LOCATION(uParam0->f_379, -5f, -5f, 0f, 0);
							__LIB_2__::func_259(&(uParam0->f_210.f_34));
							uParam0->f_210.f_4 = 2;
						}
					}
				}
				Jump @2395; //curOff = 1579
				fVar0 = __LIB_0__::func_94(uParam0->f_2[__LIB_13__::func_956(uParam0, 0)], uParam0->f_613, 1);
				if (!PED::DOES_GROUP_EXIST(uParam0->f_379))
				{
					uParam0->f_379 = PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
					if (!PED::DOES_GROUP_EXIST(uParam0->f_379))
					{
						uParam0->f_379 = PED::CREATE_GROUP(0);
					}
					if (!PED::_0x878B68960C1C2A35(PLAYER::PLAYER_PED_ID(), uParam0->f_379))
					{
						if (!PED::IS_PED_GROUP_MEMBER(PLAYER::PLAYER_PED_ID(), uParam0->f_379, 0))
						{
							PED::REMOVE_PED_FROM_GROUP(PLAYER::PLAYER_PED_ID());
						}
						PED::SET_PED_AS_GROUP_LEADER(PLAYER::PLAYER_PED_ID(), uParam0->f_379, true);
					}
					PED::SET_GROUP_FORMATION(uParam0->f_379, 5);
					PED::ADD_CUSTOM_FORMATION_LOCATION(uParam0->f_379, -5f, -5f, 0f, 0);
					PED::_0x40C3524D4ED83554(uParam0->f_379, 1);
					PED::SET_PED_CONFIG_FLAG(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), 279, true);
					PED::_0x8AFCCC0F18D70018(uParam0->f_379, 1);
				}
				if (__LIB_0__::func_665(uParam1->f_2, uParam2->f_2, 1, 1) > 30f)
				{
					if (__LIB_0__::func_272(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), 0) && PED::IS_PED_GROUP_MEMBER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), uParam0->f_379, 0))
					{
						PED::REMOVE_PED_FROM_GROUP(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2));
					}
					uParam0->f_210.f_4 = 0;
				}
				else
				{
					if ((__LIB_0__::func_272(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), 0) && PED::DOES_GROUP_EXIST(uParam0->f_379)) && !PED::IS_PED_GROUP_MEMBER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), uParam0->f_379, 0))
					{
						PED::SET_GROUP_FORMATION(uParam0->f_379, 5);
						PED::ADD_CUSTOM_FORMATION_LOCATION(uParam0->f_379, -5f, -5f, 0f, 0);
						PED::_0x40C3524D4ED83554(uParam0->f_379, 1);
						PED::SET_PED_AS_GROUP_MEMBER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), uParam0->f_379);
						PED::SET_PED_CONFIG_FLAG(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), 279, true);
						TASK::CLEAR_PED_TASKS(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), true, false);
						uParam0->f_210.f_6.f_3 = __LIB_13__::func_957(uParam0, uParam1->f_2);
						uParam0->f_210.f_6.f_4 = 21030;
						uParam0->f_210.f_6.f_7 = -1;
						uParam0->f_210.f_6.f_17 = 4;
						uParam0->f_210.f_6.f_18 = 4;
						uParam0->f_210.f_6.f_19 = 4;
						uParam0->f_210.f_6.f_21 = 4;
						_NAMESPACE29::_0x66F9EB44342BB4C5(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), &(uParam0->f_210.f_6));
					}
					else if (PED::DOES_GROUP_EXIST(uParam0->f_379) && PED::IS_PED_IN_GROUP(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2)))
					{
						iVar13 = __LIB_13__::func_957(uParam0, uParam1->f_2);
						if (ENTITY::DOES_ENTITY_EXIST(iVar13) && !TASK::_0x508F5053E3F6F0C4(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), ENTITY::GET_ENTITY_COORDS(__LIB_13__::func_957(uParam0, uParam1->f_2), false, false), 75f))
						{
							uParam0->f_210.f_6.f_3 = iVar13;
							uParam0->f_210.f_6.f_4 = 21030;
							uParam0->f_210.f_6.f_7 = -1;
							uParam0->f_210.f_6.f_17 = 4;
							uParam0->f_210.f_6.f_18 = 4;
							uParam0->f_210.f_6.f_19 = 4;
							uParam0->f_210.f_6.f_21 = 4;
							_NAMESPACE29::_0x66F9EB44342BB4C5(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), &(uParam0->f_210.f_6));
						}
						if (!__LIB_0__::func_899(&(uParam0->f_210.f_34)))
						{
							__LIB_2__::func_259(&(uParam0->f_210.f_34));
						}
						else if (__LIB_10__::func_919(&(uParam0->f_210.f_34)) > 3000)
						{
							if (__LIB_0__::func_94(uParam1->f_2, uParam0->f_613, 1) > fVar0 && uParam0->f_210.f_4 == 2)
							{
								PED::ADD_CUSTOM_FORMATION_LOCATION(uParam0->f_379, -5f, -2f, 0f, 0);
								__LIB_2__::func_259(&(uParam0->f_210.f_34));
								uParam0->f_210.f_4 = 1;
							}
						}
					}
				}
			}
			default:
				break;
	}
}

void func_2007(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (bParam0)
	{
		func_343(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_343(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_343(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_2262(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_904(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_1519(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_2266(Var0);
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

void func_2010(bool bParam0)
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
		func_343(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_343(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_343(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_343(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_343(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_343(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_343(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_343(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_343(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_343(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_343(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_1519(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_1519(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_1519(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_1519(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_1519(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_1519(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_1519(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_1519(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_1519(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_1519(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_1519(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
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

int func_2031(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
							iVar49 = (iVar49 + func_2031(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_2031(iVar63, -915411861, 1, 0, 0));
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

int func_2041(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			return joaat("SHOP_BLK_GENERAL_STORE");
		case 8:
			return joaat("SHOP_BLK_GUNSMITH");
		case 9:
			return joaat("SHOP_BLK_BARBER");
		case 17:
			return joaat("SHOP_BLK_TAILOR");
		case 13:
			return joaat("SHOP_BLK_HORSE_SHOP");
		case 14:
			return joaat("SHOP_BLK_POST_OFFICE");
		case 15:
			return joaat("SHOP_BLK_TRAIN_STATION");
		case 108:
			return joaat("SHOP_BLK_HORSE_FENCE_MP");
		case 12:
			return joaat("SHOP_BLK_PHOTO_STUDIO");
		case 16:
			return joaat("SHOP_BLK_NEWSPAPER_BOY");
		case 106:
			return joaat("SHOP_BLK_BOUNTYHUNTING_MP_RETURN");
		case 107:
			return joaat("SHOP_BLK_COACH");
		case 6:
			return joaat("SHOP_BLK_BANK");
		case 10:
			return joaat("SHOP_BLK_BUTCHER");
		case 11:
			return joaat("SHOP_BLK_BARTENDER");
		case 19:
			return joaat("SHOP_EMR_GENERAL_STORE");
		case 20:
			return joaat("SHOP_EMR_POST_OFFICE");
		case 21:
			return joaat("SHOP_EMR_TRAIN_STATION");
		case 18:
			return joaat("SHOP_EMR_FENCE");
		case 105:
			return joaat("SHOP_EMR_HORSE_FENCE_MP");
		case 22:
			return joaat("SHOP_LAG_BAIT_STORE");
		case 118:
			return joaat("SHOP_LAG_HORSE_FENCE_MP");
		case 39:
			return joaat("SHOP_SDN_DOCTOR");
		case 42:
			return joaat("SHOP_SDN_GENERAL_STORE");
		case 41:
			return joaat("SHOP_SDN_FENCE");
		case 43:
			return joaat("SHOP_SDN_GUNSMITH");
		case 36:
			return joaat("SHOP_SDN_BANK");
		case 37:
			return joaat("SHOP_SDN_BARBER");
		case 38:
			return joaat("SHOP_SDN_BUTCHER");
		case 40:
			return joaat("SHOP_SDN_EXOTIC");
		case 44:
			return joaat("SHOP_SDN_HORSE_SHOP");
		case 45:
			return joaat("SHOP_SDN_POST_OFFICE");
		case 46:
			return joaat("SHOP_SDN_TRAIN_STATION");
		case 47:
			return joaat("SHOP_SDN_TAILOR");
		case 55:
			return joaat("SHOP_SDN_TRAPPER");
		case 111:
			return joaat("SHOP_SDN_HORSE_FENCE_MP");
		case 48:
			return joaat("SHOP_SDN_MARKET");
		case 49:
			return joaat("SHOP_SDN_FRENCH_MARKET01");
		case 50:
			return -1673339528;
		case 53:
			return joaat("SHOP_SDN_BARTENDER_SLUM");
		case 54:
			return joaat("SHOP_SDN_PHOTO_STUDIO");
		case 51:
			return joaat("SHOP_SDN_NEWSPAPER_BOY");
		case 109:
			return joaat("SHOP_SDN_BOUNTYHUNTING_MP_RETURN");
		case 110:
			return joaat("SHOP_SDN_COACH");
		case 52:
			return joaat("SHOP_SDN_BARTENDER");
		case 23:
			return joaat("SHOP_RGG_POST_OFFICE");
		case 24:
			return joaat("SHOP_RGG_TRAIN_STATION");
		case 28:
			return joaat("SHOP_RHO_GENERAL_STORE");
		case 27:
			return joaat("SHOP_RHO_FENCE");
		case 29:
			return joaat("SHOP_RHO_GUNSMITH");
		case 30:
			return joaat("SHOP_RHO_POST_OFFICE");
		case 26:
			return joaat("SHOP_RHO_BUTCHER");
		case 31:
			return joaat("SHOP_RHO_TRAIN_STATION");
		case 113:
			return joaat("SHOP_RHO_HORSE_FENCE_MP");
		case 32:
			return joaat("SHOP_RHO_NEWSPAPER_BOY");
		case 112:
			return joaat("SHOP_RHO_BOUNTYHUNTING_MP_RETURN");
		case 25:
			return joaat("SHOP_RHO_BANK");
		case 33:
			return joaat("SHOP_RHO_BARTENDER");
		case 60:
			return joaat("SHOP_STR_BUTCHER");
		case 61:
			return joaat("SHOP_STR_GENERAL_STORE");
		case 62:
			return joaat("SHOP_STR_WELCOME_CENTER");
		case 63:
			return joaat("SHOP_STR_HORSE_SHOP");
		case 65:
			return joaat("SHOP_STR_POST_OFFICE");
		case 115:
			return joaat("SHOP_STR_HORSE_FENCE_MP");
		case 64:
			return joaat("SHOP_STR_NEWSPAPER_BOY");
		case 114:
			return joaat("SHOP_STR_BOUNTYHUNTING_MP_RETURN");
		case 66:
			return joaat("SHOP_STR_BARTENDER");
		case 73:
			return joaat("SHOP_VAL_DOCTOR");
		case 74:
			return joaat("SHOP_VAL_GENERAL_STORE");
		case 75:
			return joaat("SHOP_VAL_GUNSMITH");
			return joaat("SHOP_VAL_BARBER");
			return joaat("SHOP_VAL_POST_OFFICE");
			return joaat("SHOP_VAL_HORSE_SHOP");
			return joaat("SHOP_VAL_BUTCHER");
			return joaat("SHOP_VAL_TRAIN_STATION");
			return joaat("SHOP_VAL_HORSE_FENCE_MP");
			return joaat("SHOP_VAL_BARTENDER_KEANE");
			return joaat("SHOP_VAL_BARTENDER_SLUM");
			return joaat("SHOP_VAL_NEWSPAPER_BOY");
			return joaat("SHOP_VAL_HOTEL");
			return joaat("SHOP_VAL_BOUNTYHUNTING_MP_RETURN");
			return joaat("SHOP_VAL_COACH");
			return joaat("SHOP_VAL_BANK");
			return joaat("SHOP_VAL_BARTENDER");
			return joaat("SHOP_SCM_HORSE_SHOP");
			return joaat("SHOP_VAN_POST_OFFICE");
			return joaat("SHOP_VAN_TRAIN_STATION");
			return joaat("SHOP_VAN_FENCE");
			return joaat("SHOP_VAN_HORSE_FENCE_MP");
			return joaat("SHOP_VAN_HORSE_SHOP");
			return joaat("SHOP_VAN_BARTENDER");
			return joaat("SHOP_VAN_COACH");
			return joaat("SHOP_ASB_NEWSPAPER_BOY");
			return joaat("SHOP_ASB_BOUNTYHUNTING_MP_RETURN");
			return joaat("SHOP_ASB_GUNSMITH");
			return joaat("SHOP_ASB_POST_OFFICE");
			return joaat("SHOP_ASB_TRAIN_STATION");
			return joaat("SHOP_ASB_HORSE_FENCE_MP");
			return joaat("SHOP_WAL_POST_OFFICE");
			return joaat("SHOP_WAL_GENERAL_STORE");
			return joaat("SHOP_WAL_TRAIN_STATION");
			return joaat("SHOP_DYNAMIC");
			return joaat("SHOP_WILDERNESS_SUPPLIES");
			return joaat("SHOP_ANYWHERE_HANDHELD");
			return joaat("SHOP_MAP_HORSE_FENCE_MP");
			return joaat("SHOP_WEAPON_MOD_STORE");
			return joaat("SHOP_CLOTHING");
			return joaat("SHOP_CAMP_SHAVING");
			return joaat("SHOP_WARDROBE");
			return joaat("SHOP_BVH_DOCTOR");
			return joaat("SHOP_BVH_GENERAL_STORE");
			return joaat("SHOP_BVH_GUNSMITH");
			return joaat("SHOP_BVH_HORSE_TRAINER");
			return 1529797091;
			return joaat("SHOP_CLM_DOCTOR");
			return joaat("SHOP_CLM_GENERAL_STORE");
			return joaat("SHOP_CLM_GUNSMITH");
			return joaat("SHOP_CLM_HORSE_TRAINER");
			return 1388932648;
			return joaat("SHOP_HSO_DOCTOR");
			return joaat("SHOP_HSO_GENERAL_STORE");
			return joaat("SHOP_HSO_GUNSMITH");
			return joaat("SHOP_HSO_HORSE_TRAINER");
			return 878376253;
			return joaat("SHOP_LAK_DOCTOR");
			return joaat("SHOP_LAK_GENERAL_STORE");
			return joaat("SHOP_LAK_GUNSMITH");
			return joaat("SHOP_LAK_HORSE_TRAINER");
			return joaat("SHOP_SHB_DOCTOR");
			return joaat("SHOP_SHB_GENERAL_STORE");
			return joaat("SHOP_SHB_GUNSMITH");
			return joaat("SHOP_SHB_HORSE_TRAINER");
			return -2076086367;
			return joaat("SHOP_CLM_HORSE_FENCE");
			return joaat("SHOP_CKT_HORSE_FENCE_MP");
			return joaat("SHOP_BUT_HORSE_FENCE_MP");
			return joaat("SHOP_AMD_GENERAL_STORE");
			return joaat("SHOP_AMD_BARTENDER");
			return joaat("SHOP_AMD_POST_OFFICE");
			return joaat("SHOP_TBL_GENERAL_STORE");
			return joaat("SHOP_TBL_BARTENDER");
			return joaat("SHOP_TBL_GUNSMITH");
			return joaat("SHOP_TBL_BUTCHER");
			return joaat("SHOP_TBL_HORSE_SHOP");
			return joaat("SHOP_RYC_FENCE");
			return joaat("SHOP_THL_FENCE");
			return joaat("SHOP_BEN_HORSE_FENCE_MP");
			return joaat("SHOP_BEN_POST_OFFICE");
			return joaat("SHOP_BEN_TRAIN_STATION");
			return 548657065;
			return 243086140;
			return -305029900;
			return 1008537949;
			return 0;
		}
int func_2042(int iParam0)
{
	struct<4> Var0;
	int iVar5;
	int iVar6;
	if (!__LIB_0__::func_720(15, &Var0))
	{
		return -1;
	}
	Var0.f_3 = iParam0;
	Var0.f_2 = -125049320;
	if (DATAFILE::_DATAFILE_GET_HASH(&iVar5, &Var0))
	{
		iVar6 = __LIB_0__::func_621(iVar5);
		return iVar6;
	}
	return -1;
}

int func_2142(int iParam0, int iParam1)
{
	var uVar0;
	return func_2315(&uVar0, iParam0, iParam1);
}

void func_2219(var uParam0)
{
	vector3 vVar0;
	__LIB_1__::func_480(&(uParam0->f_350));
	__LIB_4__::func_399(&(uParam0->f_329), &(uParam0->f_311));
	__LIB_13__::func_986(uParam0);
	uParam0->f_44[uParam0->f_351] = ((BUILTIN::TO_FLOAT(uParam0->f_351) * 50f) + MISC::GET_RANDOM_FLOAT_IN_RANGE(10f, 50f));
	__LIB_2__::func_259(&(uParam0->f_65[uParam0->f_351 /*3*/]));
	vVar0 = { __LIB_11__::func_481(&(uParam0->f_190[uParam0->f_209 /*9*/])) };
	PED::_0x463803429297117C(uParam0->f_2[uParam0->f_351], vVar0, 3, 1);
	if (__LIB_1__::func_985())
	{
		PED::_SET_PED_BLACKBOARD_BOOL(PLAYER::PLAYER_PED_ID(), "DoHerdSmack", true, 50);
	}
	else
	{
		PED::_SET_PED_BLACKBOARD_BOOL(PLAYER::PLAYER_PED_ID(), "DoHerdWhip", true, 50);
	}
	uParam0->f_23[uParam0->f_351] = 7;
	if (__LIB_0__::func_899(&(uParam0->f_503)))
	{
		__LIB_2__::func_259(&(uParam0->f_503));
	}
	__LIB_13__::func_990(uParam0, uParam0->f_351, vVar0);
	__LIB_13__::func_984(uParam0);
}

void func_2262(int iParam0)
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
	func_1519(iParam0, 1, 1, -142743235, 1);
	iVar34 = __LIB_1__::func_415(iParam0, &uVar18);
	func_2374(iParam0, &uVar18, &iVar34, 1);
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
		func_1519(uVar18[iVar36], 1, 1, -142743235, 1);
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

void func_2266(struct<6> Param0)
{
	if (!func_2391(Param0.f_4, 1))
	{
	}
	if (!func_2391(Param0, 1))
	{
	}
	if (!func_2391(Param0.f_2, 1))
	{
	}
	if (!func_2391(Param0.f_5, 1))
	{
	}
	if (!func_2391(Param0.f_3, 1))
	{
	}
	if (!func_2391(Param0.f_1, 1))
	{
	}
}

int func_2315(var uParam0, int iParam1, int iParam2)
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
		return func_2315(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

int func_2374(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<10> Var5;
	int iVar19;
	struct<14> Var20;
	Var5.f_9 = -1591664384;
	iVar19 = __LIB_0__::func_790(__LIB_0__::func_241());
	Var20 = { __LIB_0__::func_523(0, -1591664384, -1591664384, -1591664384, -999503751, 0) };
	if (!__LIB_0__::func_801(&Var20, &iVar0, &iVar1, bParam3))
	{
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if (!__LIB_0__::func_236(&Var5, iVar2, iVar0, iVar1))
		{
		}
		else if (iParam0 == Var5.f_4)
		{
		}
		else
		{
			iVar4 = __LIB_0__::func_449(Var5.f_4);
			if (iVar4 >= 0 && iVar4 <= 5)
			{
			}
			else
			{
				iVar3 = (*iParam2 - 1);
				while (iVar3 >= 0)
				{
					__LIB_0__::func_557(&(Global_1946804.f_964), iVar19, Var5.f_4, joaat("COMPONENT"), 1, (*uParam1)[iVar3]);
					DATAFILE::_0x91DED5DD64BB2691(&(Global_1946804.f_964));
					if (!DATAFILE::_0xED4413CEE1BF142C(&(Global_1946804.f_964)))
					{
					}
					else
					{
						*iParam2 = (*iParam2 - 1);
						(*uParam1)[iVar3] = (*uParam1)[*iParam2];
						(*uParam1)[*iParam2] = 0;
					}
					iVar3 = (iVar3 + -1);
				}
			}
		}
		iVar2 = (iVar2 + 1);
	}
	__LIB_0__::func_238(iVar0);
	return 1;
}

bool func_2391(int iParam0, int iParam1)
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
				if (func_2391(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_2391(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_2391(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_2391(iVar21, 1))
				{
				}
			}
		}
		__LIB_1__::func_712();
		return true;
	}
	return false;
}

