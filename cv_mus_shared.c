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
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	bool bLocal_44 = false;
	int iLocal_45 = 0;
	char* sLocal_46 = NULL;
	char* sLocal_47 = NULL;
	var uLocal_48 = 24;
	var uLocal_49 = 0;
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
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
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
	vector3 vLocal_146[24] = "";
	bool bLocal_149 = false;
	bool bLocal_150 = false;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	char* sLocal_156 = NULL;
	int iLocal_157 = 0;
	bool bLocal_158 = false;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	struct<6> ScriptParam_0 = { -1, -1, 0, 0, 0, 0 } ;
#endregion
void __EntryFunction__()
{
	struct<2268> Var0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	sLocal_46 = "VIG_START_SINGING";
	sLocal_47 = "VIG_STOP_SINGING";
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_17 = 10;
	Var0.f_18 = 30;
	Var0.f_19 = 80;
	Var0.f_20 = 120;
	Var0.f_33 = 2;
	Var0.f_36 = 6;
	Var0.f_36.f_1.f_1 = -1;
	Var0.f_36.f_1.f_5.f_1 = -1;
	Var0.f_36.f_1.f_5.f_5.f_1 = -1;
	Var0.f_36.f_1.f_5.f_5.f_5.f_1 = -1;
	Var0.f_36.f_1.f_5.f_5.f_5.f_5.f_1 = -1;
	Var0.f_36.f_1.f_5.f_5.f_5.f_5.f_5.f_1 = -1;
	Var0.f_67 = 3;
	Var0.f_73 = 15;
	Var0.f_107 = 14;
	Var0.f_107.f_1.f_2 = -1;
	Var0.f_107.f_1.f_7 = -1;
	Var0.f_107.f_1.f_8.f_7 = -1;
	Var0.f_107.f_1.f_8.f_9 = 3;
	Var0.f_107.f_1.f_32.f_1 = 1;
	Var0.f_107.f_1.f_32.f_10 = 1;
	Var0.f_107.f_1.f_32.f_11 = -1082130432;
	Var0.f_107.f_1.f_32.f_14 = 1;
	Var0.f_107.f_1.f_32.f_15 = -1;
	Var0.f_107.f_1.f_32.f_16 = 3;
	Var0.f_107.f_1.f_32.f_36 = -1;
	Var0.f_107.f_1.f_32.f_39 = 30;
	Var0.f_107.f_1.f_32.f_49 = -1082130432;
	Var0.f_107.f_1.f_32.f_50 = -1082130432;
	Var0.f_107.f_1.f_32.f_51 = -1082130432;
	Var0.f_107.f_1.f_32.f_60 = -1082130432;
	Var0.f_107.f_1.f_113.f_2 = -1;
	Var0.f_107.f_1.f_113.f_7 = -1;
	Var0.f_107.f_1.f_113.f_8.f_7 = -1;
	Var0.f_107.f_1.f_113.f_8.f_9 = 3;
	Var0.f_107.f_1.f_113.f_32.f_1 = 1;
	Var0.f_107.f_1.f_113.f_32.f_10 = 1;
	Var0.f_107.f_1.f_113.f_32.f_11 = -1082130432;
	Var0.f_107.f_1.f_113.f_32.f_14 = 1;
	Var0.f_107.f_1.f_113.f_32.f_15 = -1;
	Var0.f_107.f_1.f_113.f_32.f_16 = 3;
	Var0.f_107.f_1.f_113.f_32.f_36 = -1;
	Var0.f_107.f_1.f_113.f_32.f_39 = 30;
	Var0.f_107.f_1.f_113.f_32.f_49 = -1082130432;
	Var0.f_107.f_1.f_113.f_32.f_50 = -1082130432;
	Var0.f_107.f_1.f_113.f_32.f_51 = -1082130432;
	Var0.f_107.f_1.f_113.f_32.f_60 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_2 = -1;
	Var0.f_107.f_1.f_113.f_113.f_7 = -1;
	Var0.f_107.f_1.f_113.f_113.f_8.f_7 = -1;
	Var0.f_107.f_1.f_113.f_113.f_8.f_9 = 3;
	Var0.f_107.f_1.f_113.f_113.f_32.f_1 = 1;
	Var0.f_107.f_1.f_113.f_113.f_32.f_10 = 1;
	Var0.f_107.f_1.f_113.f_113.f_32.f_11 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_32.f_14 = 1;
	Var0.f_107.f_1.f_113.f_113.f_32.f_15 = -1;
	Var0.f_107.f_1.f_113.f_113.f_32.f_16 = 3;
	Var0.f_107.f_1.f_113.f_113.f_32.f_36 = -1;
	Var0.f_107.f_1.f_113.f_113.f_32.f_39 = 30;
	Var0.f_107.f_1.f_113.f_113.f_32.f_49 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_32.f_50 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_32.f_51 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_32.f_60 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_2 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_7 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_8.f_7 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_8.f_9 = 3;
	Var0.f_107.f_1.f_113.f_113.f_113.f_32.f_1 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_32.f_10 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_32.f_11 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_32.f_14 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_32.f_15 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_32.f_16 = 3;
	Var0.f_107.f_1.f_113.f_113.f_113.f_32.f_36 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_32.f_39 = 30;
	Var0.f_107.f_1.f_113.f_113.f_113.f_32.f_49 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_32.f_50 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_32.f_51 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_32.f_60 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_2 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_7 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_8.f_7 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_8.f_9 = 3;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_32.f_1 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_32.f_10 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_32.f_11 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_32.f_14 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_32.f_15 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_32.f_16 = 3;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_32.f_36 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_32.f_39 = 30;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_32.f_49 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_32.f_50 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_32.f_51 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_32.f_60 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_2 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_7 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_8.f_7 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_8.f_9 = 3;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_32.f_1 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_32.f_10 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_32.f_11 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_32.f_14 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_32.f_15 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_32.f_16 = 3;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_32.f_36 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_32.f_39 = 30;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_32.f_49 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_32.f_50 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_32.f_51 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_32.f_60 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_2 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_7 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_8.f_7 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_8.f_9 = 3;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_1 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_10 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_11 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_14 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_15 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_16 = 3;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_36 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_39 = 30;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_49 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_50 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_51 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_60 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_2 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_7 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_8.f_7 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_8.f_9 = 3;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_1 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_10 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_11 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_14 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_15 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_16 = 3;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_36 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_39 = 30;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_49 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_50 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_51 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_60 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_2 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_7 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_8.f_7 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_8.f_9 = 3;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_1 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_10 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_11 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_14 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_15 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_16 = 3;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_36 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_39 = 30;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_49 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_50 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_51 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_60 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_2 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_7 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_8.f_7 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_8.f_9 = 3;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_1 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_10 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_11 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_14 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_15 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_16 = 3;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_36 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_39 = 30;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_49 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_50 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_51 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_60 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_2 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_7 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_8.f_7 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_8.f_9 = 3;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_1 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_10 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_11 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_14 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_15 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_16 = 3;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_36 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_39 = 30;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_49 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_50 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_51 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_60 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_2 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_7 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_8.f_7 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_8.f_9 = 3;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_1 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_10 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_11 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_14 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_15 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_16 = 3;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_36 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_39 = 30;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_49 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_50 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_51 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_60 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_2 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_7 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_8.f_7 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_8.f_9 = 3;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_1 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_10 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_11 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_14 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_15 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_16 = 3;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_36 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_39 = 30;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_49 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_50 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_51 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_60 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_2 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_7 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_8.f_7 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_8.f_9 = 3;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_1 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_10 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_11 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_14 = 1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_15 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_16 = 3;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_36 = -1;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_39 = 30;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_49 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_50 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_51 = -1082130432;
	Var0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_60 = -1082130432;
	Var0.f_1711 = 17;
	Var0.f_1967 = 2;
	Var0.f_1984 = 30;
	Var0.f_2015 = 30;
	Var0.f_2047 = -1;
	Var0.f_2048 = -1;
	Var0.f_2050 = -1;
	Var0.f_2051 = 30;
	Var0.f_2051.f_1 = -1;
	Var0.f_2051.f_1.f_6 = -1;
	Var0.f_2051.f_1.f_6.f_6 = -1;
	Var0.f_2051.f_1.f_6.f_6.f_6 = -1;
	Var0.f_2051.f_1.f_6.f_6.f_6.f_6 = -1;
	Var0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	Var0.f_2236 = 1;
	Var0.f_2252 = 1082130432;
	Var0.f_2253 = 1097859072;
	Var0.f_2254 = 1084227584;
	Var0.f_2255 = 1065353216;
	Var0.f_2256 = 1120403456;
	Var0.f_2257 = 1084227584;
	Var0.f_2258 = 1097859072;
	Var0.f_2259 = 1073741824;
	Var0.f_2260 = 1092616192;
	Var0.f_2261 = 1120403456;
	Var0.f_2263 = 1090519040;
	Var0.f_2264 = 1103626240;
	Var0.f_2266 = 60;
	if (!Global_1327590.f_11465[ScriptParam_0 /*10*/])
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		if (!Var0.f_2267)
		{
			func_1(&Var0);
			__LIB_7__::func_105(&Var0);
			__LIB_0__::func_0(&Var0);
		}
		__LIB_6__::func_935(&Var0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	__LIB_7__::func_102(&Var0, ScriptParam_0);
	__LIB_6__::func_936(&Var0, 1);
	while (func_7(&Var0))
	{
		BUILTIN::WAIT(0);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_1(var uParam0)
{
	if (bLocal_44)
	{
		__LIB_1__::func_281(&iLocal_45, 1, 1);
	}
	return true;
}

bool func_7(var uParam0)
{
	if (__LIB_7__::func_114(uParam0))
	{
		if (__LIB_6__::func_949(uParam0) < 6)
		{
			__LIB_7__::func_17(__LIB_4__::func_576(uParam0), 30);
			__LIB_6__::func_936(uParam0, 6);
		}
	}
	switch (__LIB_6__::func_949(uParam0))
	{
		case 1:
			if (func_35(uParam0))
			{
				__LIB_6__::func_936(uParam0, 2);
			}
			else
			{
				__LIB_6__::func_950(uParam0);
			}
			break;
		case 2:
			if (func_37(uParam0))
			{
				if (__LIB_7__::func_109(uParam0))
				{
					__LIB_6__::func_936(uParam0, 3);
				}
				else
				{
					__LIB_6__::func_950(uParam0);
				}
			}
			break;
		case 3:
			if (__LIB_7__::func_110(uParam0))
			{
				if (__LIB_7__::func_275(uParam0))
				{
					__LIB_6__::func_936(uParam0, 4);
				}
				else
				{
					__LIB_6__::func_950(uParam0);
				}
			}
			break;
		case 4:
			if (__LIB_7__::func_103(uParam0))
			{
				if (__LIB_7__::func_216(uParam0))
				{
					__LIB_6__::func_936(uParam0, 5);
				}
				else
				{
					__LIB_6__::func_950(uParam0);
				}
			}
			break;
		case 5:
			if (func_43(uParam0))
			{
				__LIB_6__::func_936(uParam0, 6);
			}
			break;
		case 6:
			if (func_44(uParam0))
			{
				uParam0->f_2267 = 1;
				__LIB_6__::func_936(uParam0, 7);
			}
			break;
		case 7:
			if (__LIB_6__::func_951(uParam0))
			{
				__LIB_6__::func_935(uParam0);
				__LIB_6__::func_936(uParam0, 0);
				return false;
			}
			if (__LIB_7__::func_44(uParam0))
			{
				__LIB_6__::func_935(uParam0);
				__LIB_6__::func_936(uParam0, 0);
				return false;
			}
			break;
	}
	return true;
}

bool func_35(var uParam0)
{
	if (!func_76(uParam0))
	{
		return false;
	}
	if (!__LIB_7__::func_104(uParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_0(uParam0))
	{
		return false;
	}
	return true;
}

bool func_37(var uParam0)
{
	if (!func_79(uParam0))
	{
		return false;
	}
	if (!func_80(uParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_0(uParam0))
	{
		return false;
	}
	return true;
}

bool func_43(var uParam0)
{
	if (!func_97(uParam0))
	{
		return false;
	}
	if (!__LIB_7__::func_126(uParam0))
	{
		return false;
	}
	if (!func_99(uParam0))
	{
		return false;
	}
	return true;
}

bool func_44(var uParam0)
{
	if (!func_1(uParam0))
	{
		return false;
	}
	if (!__LIB_7__::func_105(uParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_0(uParam0))
	{
		return false;
	}
	return true;
}

bool func_76(var uParam0)
{
	if (!func_153(uParam0))
	{
		return false;
	}
	switch (__LIB_4__::func_576(uParam0))
	{
		case 427:
			iLocal_22 = __LIB_7__::func_48(uParam0, 4, 0);
			iLocal_16 = __LIB_7__::func_48(uParam0, 14, "JACKMARSTON_TEEN");
			iLocal_14 = __LIB_7__::func_48(uParam0, 13, "AbigailRoberts");
			iLocal_23 = __LIB_6__::func_958(uParam0, joaat("P_CHAIRFOLDING02X"), 1.19768f, -1.86904f, -0.0285873f, "p_chairfolding02x", 1, 0, 1);
			iLocal_24 = __LIB_6__::func_958(uParam0, joaat("P_CHAIR_CRATE02X"), -1.86246f, -0.82945f, -0.0207748f, "p_chair_crate02x", 1, 0, 1);
			iLocal_25 = __LIB_6__::func_958(uParam0, joaat("P_BENCH_LOG07X"), -1.36866f, 1.60212f, -0.0298996f, "p_bench_log07x", 1, 0, 1);
			__LIB_7__::func_146(uParam0, "CAJHBAU");
			__LIB_6__::func_959(uParam0, "script@vignette@music@abigail_jack_1@base", 1, 1, 0, 0);
			__LIB_6__::func_959(uParam0, "script@vignette@music@abigail_jack_1@action", 0, 0, 1, 0);
			__LIB_7__::func_107(uParam0, iLocal_14, 3, joaat("PROP_HUMAN_CAMP_FIRE_SEAT_BOX"), "PROP_HUMAN_CAMP_FIRE_SEAT_BOX_FEMALE_A", iLocal_25, 0);
			__LIB_7__::func_127(uParam0, iLocal_14, 2, joaat("PROP_HUMAN_CAMP_FIRE_SEAT_BOX"), "PROP_HUMAN_CAMP_FIRE_SEAT_BOX_FEMALE_A", iLocal_25, 0, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			__LIB_7__::func_107(uParam0, iLocal_16, 3, joaat("WORLD_CAMP_JACK_ES_FIRE_SEAT_BOX"), "WORLD_CAMP_JACK_ES_FIRE_SEAT_BOX_MALE_A", iLocal_24, 0);
			__LIB_7__::func_127(uParam0, iLocal_16, 3, joaat("WORLD_CAMP_JACK_ES_FIRE_SEAT_BOX"), "WORLD_CAMP_JACK_ES_FIRE_SEAT_BOX_MALE_A", iLocal_24, 0, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			__LIB_7__::func_107(uParam0, iLocal_22, 3, joaat("PROP_CAMP_FIRE_SEAT_CHAIR"), "PROP_CAMP_FIRE_SEAT_CHAIR_MALE_C", iLocal_23, 0);
			__LIB_7__::func_127(uParam0, iLocal_22, 3, joaat("PROP_CAMP_FIRE_SEAT_CHAIR"), "PROP_CAMP_FIRE_SEAT_CHAIR_MALE_C", iLocal_23, 0, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			break;
		case 428:
			iLocal_22 = __LIB_7__::func_48(uParam0, 4, 0);
			iLocal_16 = __LIB_7__::func_48(uParam0, 14, "JACKMARSTON_TEEN");
			iLocal_14 = __LIB_7__::func_48(uParam0, 13, "AbigailRoberts");
			iLocal_35 = __LIB_6__::func_958(uParam0, joaat("P_BOTTLEJD01X"), 0f, 0f, 0f, "p_bottleJD01x", 0, 0, 1);
			iLocal_23 = __LIB_6__::func_958(uParam0, joaat("P_CHAIRFOLDING02X"), 1.19768f, -1.86904f, -0.0285873f, "p_chairfolding02x", 1, 0, 1);
			iLocal_24 = __LIB_6__::func_958(uParam0, joaat("P_CHAIR_CRATE02X"), -1.86246f, -0.82945f, -0.0207748f, "p_chair_crate02x", 1, 0, 1);
			iLocal_25 = __LIB_6__::func_958(uParam0, joaat("P_BENCH_LOG07X"), -1.36866f, 1.60212f, -0.0298996f, "p_bench_log07x", 1, 0, 1);
			__LIB_7__::func_146(uParam0, "CAJLJAU");
			__LIB_6__::func_959(uParam0, "script@vignette@music@abigail_and_jack_1_little_joe_wrangler@base", 1, 1, 0, 0);
			__LIB_6__::func_959(uParam0, "script@vignette@music@abigail_and_jack_1_little_joe_wrangler@action", 0, 0, 1, 0);
			__LIB_7__::func_107(uParam0, iLocal_14, 3, joaat("PROP_CAMP_FIRE_SEAT_BENCH"), "PROP_CAMP_FIRE_SEAT_BENCH_FEMALE_A", iLocal_25, 0);
			__LIB_7__::func_127(uParam0, iLocal_14, 2, joaat("PROP_CAMP_FIRE_SEAT_BENCH"), "PROP_CAMP_FIRE_SEAT_BENCH_FEMALE_A", iLocal_25, 0, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			__LIB_7__::func_107(uParam0, iLocal_16, 3, joaat("WORLD_CAMP_JACK_ES_FIRE_SEAT_BOX"), "WORLD_CAMP_JACK_ES_FIRE_SEAT_BOX_MALE_A", iLocal_24, 0);
			__LIB_7__::func_127(uParam0, iLocal_16, 2, joaat("WORLD_CAMP_JACK_ES_FIRE_SEAT_BOX"), "WORLD_CAMP_JACK_ES_FIRE_SEAT_BOX_MALE_A", iLocal_24, 0, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			__LIB_7__::func_107(uParam0, iLocal_22, 3, joaat("CC_PROP_CAMP_FIRE_SEATED_DRINKING"), "PROP_CAMP_FIRE_SEATED_DRINKING_WHISKEY_MALE_C", iLocal_23, 0);
			__LIB_7__::func_127(uParam0, iLocal_22, 3, joaat("CC_PROP_CAMP_FIRE_SEATED_DRINKING"), "PROP_CAMP_FIRE_SEATED_DRINKING_WHISKEY_MALE_C", iLocal_23, 0, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			__LIB_7__::func_139(uParam0, iLocal_22, iLocal_35, "p_bottleJD01x_ph_r_hand", 0, 0);
			__LIB_7__::func_137(uParam0, iLocal_22, "START_SEATED_DRINKING_WHISKEY_MALE_C_TO_SEAT_CHAIR_MALE_C");
			iLocal_43 = joaat("PROP_CAMP_FIRE_SEAT_BENCH");
			STREAMING::_REQUEST_SCENARIO_TYPE(iLocal_43, 15, 0, 0);
			break;
		case 429:
			iLocal_22 = __LIB_7__::func_48(uParam0, 4, 0);
			iLocal_16 = __LIB_7__::func_48(uParam0, 14, "JackMarston_Teen");
			iLocal_14 = __LIB_7__::func_48(uParam0, 13, "AbigailRoberts");
			iLocal_35 = __LIB_6__::func_958(uParam0, joaat("P_BOTTLEBEER01X"), 0f, 0f, 0f, "BottleJD01x^1", 0, 0, 1);
			iLocal_28 = __LIB_6__::func_958(uParam0, joaat("P_CHAIR_CRATE02X"), 1.42003f, -0.46233f, 0.000724792f, 0, 1, 0, 1);
			iLocal_29 = __LIB_6__::func_958(uParam0, joaat("P_CHAIR_BARREL04B"), -0.58518f, -1.37149f, -0.000541687f, 0, 1, 0, 1);
			iLocal_30 = __LIB_6__::func_958(uParam0, joaat("P_CHAIR_CRATE15X"), 0.636238f, 1.32548f, -0.00389862f, "Chair_crate15x", 1, 0, 1);
			__LIB_7__::func_146(uParam0, "CAJNDAU");
			__LIB_6__::func_959(uParam0, "script@vignette@music@abigail_and_jack_1_never_get_drunk@base", 1, 1, 0, 0);
			__LIB_6__::func_959(uParam0, "script@vignette@music@abigail_and_jack_1_never_get_drunk@action", 0, 0, 1, 0);
			__LIB_7__::func_107(uParam0, iLocal_14, 3, joaat("GENERIC_SEAT_CHAIR_TABLE_SCENARIO"), "GENERIC_SEAT_CHAIR_TABLE_SCENARIO_LF_FWD_FEMALE_A", iLocal_28, 0);
			__LIB_7__::func_127(uParam0, iLocal_14, 3, joaat("GENERIC_SEAT_CHAIR_TABLE_SCENARIO"), "GENERIC_SEAT_CHAIR_TABLE_SCENARIO_LF_FWD_FEMALE_A", iLocal_28, 0, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			__LIB_7__::func_107(uParam0, iLocal_16, 3, joaat("PROP_CAMP_FIRE_SEAT_BENCH"), "PROP_CAMP_FIRE_SEAT_BENCH_MALE_A", iLocal_29, 0);
			__LIB_7__::func_127(uParam0, iLocal_16, 3, joaat("PROP_CAMP_FIRE_SEAT_BENCH"), "PROP_CAMP_FIRE_SEAT_BENCH_MALE_A", iLocal_29, 0, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			__LIB_7__::func_107(uParam0, iLocal_22, 3, joaat("PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING"), "PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_MALE_A", iLocal_30, 0);
			__LIB_7__::func_127(uParam0, iLocal_22, 3, joaat("PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING"), "PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_MALE_A", iLocal_30, 0, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			__LIB_7__::func_139(uParam0, iLocal_22, iLocal_35, "p_bottleBeer01x_PH_R_HAND", 0, 0);
			iLocal_43 = joaat("PROP_CAMP_FIRE_SEAT_BENCH");
			STREAMING::_REQUEST_SCENARIO_TYPE(iLocal_43, 15, 0, 0);
			break;
		case 430:
			iLocal_22 = __LIB_7__::func_48(uParam0, 4, 0);
			iLocal_16 = __LIB_7__::func_48(uParam0, 14, "JACKMARSTON_TEEN");
			iLocal_14 = __LIB_7__::func_48(uParam0, 13, "AbigailRoberts");
			iLocal_35 = __LIB_6__::func_958(uParam0, joaat("P_BOTTLEJD01X"), 0f, 0f, 0f, "p_bottleJD01x", 0, 0, 1);
			iLocal_23 = __LIB_6__::func_958(uParam0, joaat("P_CHAIRFOLDING02X"), 1.19768f, -1.86904f, -0.0285873f, "p_chairfolding02x", 1, 0, 1);
			iLocal_24 = __LIB_6__::func_958(uParam0, joaat("P_CHAIR_CRATE02X"), -1.86246f, -0.82945f, -0.0207748f, "p_chair_crate02x", 1, 0, 1);
			iLocal_25 = __LIB_6__::func_958(uParam0, joaat("P_BENCH_LOG07X"), -1.36866f, 1.60212f, -0.0298996f, "p_bench_log07x", 1, 0, 1);
			__LIB_6__::func_959(uParam0, "script@vignette@music@abigail_and_jack_1_wild_rover@base", 1, 1, 0, 0);
			__LIB_6__::func_959(uParam0, "script@vignette@music@abigail_and_jack_1_wild_rover@action", 0, 0, 1, 0);
			__LIB_7__::func_146(uParam0, "CAJWRAU");
			__LIB_7__::func_107(uParam0, iLocal_14, 3, joaat("PROP_HUMAN_SEAT_CHAIR"), "PROP_HUMAN_SEAT_CHAIR_GENERIC_FEMALE_C", iLocal_25, 0);
			__LIB_7__::func_127(uParam0, iLocal_14, 2, joaat("PROP_HUMAN_SEAT_CHAIR"), "PROP_HUMAN_SEAT_CHAIR_GENERIC_FEMALE_C", iLocal_25, 0, -1073741824 /* Float: -2f */, 0f, 1);
			__LIB_7__::func_107(uParam0, iLocal_16, 3, joaat("WORLD_CAMP_JACK_ES_FIRE_SEAT_BOX"), "WORLD_CAMP_JACK_ES_FIRE_SEAT_BOX_MALE_A", iLocal_24, 0);
			__LIB_7__::func_127(uParam0, iLocal_16, 3, joaat("WORLD_CAMP_JACK_ES_FIRE_SEAT_BOX"), "WORLD_CAMP_JACK_ES_FIRE_SEAT_BOX_MALE_A", iLocal_24, 0, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			__LIB_7__::func_107(uParam0, iLocal_22, 3, joaat("CC_PROP_CAMP_FIRE_SEATED_DRINKING"), "PROP_CAMP_FIRE_SEATED_DRINKING_WHISKEY_MALE_C", iLocal_23, 0);
			__LIB_7__::func_127(uParam0, iLocal_22, 3, joaat("CC_PROP_CAMP_FIRE_SEATED_DRINKING"), "PROP_CAMP_FIRE_SEATED_DRINKING_WHISKEY_MALE_C", iLocal_23, 0, -1073741824 /* Float: -2f */, 0f, 1);
			__LIB_7__::func_139(uParam0, iLocal_22, iLocal_35, "p_bottleJD01x_ph_r_hand", 0, 0);
			__LIB_7__::func_137(uParam0, iLocal_22, "START_SEATED_DRINKING_WHISKEY_MALE_C_TO_SEAT_CHAIR_MALE_C");
			iLocal_43 = joaat("PROP_CAMP_FIRE_SEAT_BENCH");
			STREAMING::_REQUEST_SCENARIO_TYPE(iLocal_43, 15, 0, 0);
			break;
		case 431:
			iLocal_15 = __LIB_7__::func_48(uParam0, 7, 0);
			iLocal_21 = __LIB_7__::func_48(uParam0, 19, 0);
			iLocal_34 = __LIB_6__::func_958(uParam0, joaat("P_HARMONICA01X"), 0f, 0f, 0f, "HARMONICA", 0, 1, 1);
			iLocal_23 = __LIB_6__::func_958(uParam0, joaat("P_CHAIRFOLDING02X"), 1.19768f, -1.86904f, -0.0285873f, 0, 1, 0, 1);
			__LIB_6__::func_959(uParam0, "script@vignette@music@charles_4@p1_normal@base", 1, 1, 0, 0);
			__LIB_6__::func_959(uParam0, "script@vignette@music@charles_4@p1_normal@action", 0, 0, 1, 0);
			__LIB_7__::func_146(uParam0, "CHRM4AU");
			__LIB_7__::func_107(uParam0, iLocal_15, 2, joaat("PROP_HUMAN_SEAT_BENCH_HARMONICA"), 0, -1, 0);
			__LIB_7__::func_127(uParam0, iLocal_15, 2, joaat("PROP_HUMAN_SEAT_BENCH_HARMONICA"), 0, -1, 0, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			__LIB_7__::func_139(uParam0, iLocal_15, iLocal_34, "p_harmonica01x_PH_R_HAND", 0, 0);
			__LIB_7__::func_127(uParam0, iLocal_21, 3, joaat("PROP_CAMP_FIRE_SEAT_CHAIR"), "PROP_CAMP_FIRE_SEAT_CHAIR_FEMALE_A", iLocal_23, 0, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			break;
		case 432:
			iLocal_17 = __LIB_7__::func_48(uParam0, 2, 0);
			__LIB_7__::func_46(uParam0, 2f, -1f, 0f, 0f, 1f, 1f, 2.5f, joaat("VOLCYLINDER"), 1);
			__LIB_7__::func_47(uParam0, 2f, -1f, 0f, 0f, 1f, 1f, 2.5f, joaat("VOLCYLINDER"), -1, 1, 1, 1);
			iLocal_34 = __LIB_6__::func_958(uParam0, joaat("P_GUITAR01X"), 0f, 0f, 0f, "GUITAR", 0, 0, 1);
			__LIB_7__::func_146(uParam0, "JSNG1AU");
			__LIB_6__::func_959(uParam0, "script@vignette@music@javier_1@base", 1, 1, 0, 0);
			__LIB_6__::func_959(uParam0, "script@vignette@music@javier_1@action", 0, 0, 1, 0);
			__LIB_7__::func_127(uParam0, iLocal_17, 2, joaat("WORLD_HUMAN_SIT_GUITAR"), "WORLD_HUMAN_SIT_GUITAR_MALE_A", -1, 1, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 0);
			__LIB_7__::func_139(uParam0, iLocal_17, iLocal_34, "p_guitar01x_PH_R_HAND", 0, 0);
			break;
		case 433:
			iLocal_17 = __LIB_7__::func_48(uParam0, 2, 0);
			__LIB_7__::func_46(uParam0, 2f, -1f, 0f, 0f, 1f, 1f, 2.5f, joaat("VOLCYLINDER"), 1);
			__LIB_7__::func_47(uParam0, 2f, -1f, 0f, 0f, 1f, 1f, 2.5f, joaat("VOLCYLINDER"), -1, 1, 1, 1);
			iLocal_34 = __LIB_6__::func_958(uParam0, joaat("P_GUITAR01X"), 0f, 0f, 0f, "GUITAR", 0, 1, 1);
			__LIB_7__::func_146(uParam0, "JSNG2AU");
			__LIB_6__::func_959(uParam0, "script@vignette@music@javier_2@base", 1, 1, 0, 0);
			__LIB_6__::func_959(uParam0, "script@vignette@music@javier_2@action", 0, 0, 1, 0);
			__LIB_7__::func_127(uParam0, iLocal_17, 2, joaat("WORLD_HUMAN_SIT_GUITAR"), "WORLD_HUMAN_SIT_GUITAR_MALE_A", -1, 1, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			__LIB_7__::func_139(uParam0, iLocal_17, iLocal_34, "p_guitar01x_PH_R_HAND", 0, 0);
			break;
		case 434:
			iLocal_17 = __LIB_7__::func_48(uParam0, 2, 0);
			if (__LIB_6__::func_206(14))
			{
				__LIB_7__::func_168(uParam0);
				__LIB_7__::func_167(uParam0);
			}
			else
			{
				__LIB_7__::func_46(uParam0, 2f, -1f, 0f, 0f, 1f, 1f, 2.5f, joaat("VOLCYLINDER"), 1);
				__LIB_7__::func_47(uParam0, 2f, -1f, 0f, 0f, 1f, 1f, 2.5f, joaat("VOLCYLINDER"), joaat("APMS_COMP_JAVIER"), 1, 1, 1);
			}
			iLocal_34 = __LIB_6__::func_958(uParam0, joaat("P_GUITAR01X"), 0f, 0f, 0f, "GUITAR", 0, 1, 1);
			if (!__LIB_6__::func_206(14) && !__LIB_6__::func_206(15))
			{
				__LIB_6__::func_959(uParam0, "script@vignette@music@javier_4@base", 1, 1, 0, 0);
			}
			__LIB_6__::func_959(uParam0, "script@vignette@music@javier_4@action", 0, 0, 1, 0);
			__LIB_7__::func_146(uParam0, "JSNG4AU");
			__LIB_7__::func_107(uParam0, iLocal_17, 3, joaat("WORLD_HUMAN_SIT_GUITAR_UPBEAT"), "WORLD_HUMAN_SIT_GUITAR_MALE_A", -1, 1);
			__LIB_7__::func_127(uParam0, iLocal_17, 2, joaat("WORLD_HUMAN_SIT_GUITAR_UPBEAT"), "WORLD_HUMAN_SIT_GUITAR_MALE_A", -1, 1, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			__LIB_7__::func_139(uParam0, iLocal_17, iLocal_34, "p_guitar01x_PH_R_HAND", 0, 0);
			if (__LIB_6__::func_206(14))
			{
				__LIB_7__::func_297(uParam0, iLocal_17, iLocal_34, "p_guitar01x_PH_R_HAND");
				__LIB_7__::func_282(uParam0, iLocal_17, 4);
				__LIB_7__::func_227(uParam0, iLocal_17, 1);
				__LIB_7__::func_365(uParam0, iLocal_17, 4);
				__LIB_7__::func_108(uParam0, iLocal_17, -1f);
				__LIB_7__::func_356(uParam0, -1, -1, -1, 30);
				__LIB_7__::func_357(uParam0, 1, 1);
				__LIB_7__::func_145(uParam0, 10f, 18f);
			}
			if (__LIB_6__::func_206(15))
			{
				__LIB_7__::func_297(uParam0, iLocal_17, iLocal_34, "p_guitar01x_PH_R_HAND");
				__LIB_7__::func_280(uParam0, iLocal_17, 1);
				__LIB_7__::func_108(uParam0, iLocal_17, -1f);
				__LIB_7__::func_168(uParam0);
				__LIB_7__::func_167(uParam0);
				__LIB_7__::func_129(uParam0, 1);
			}
			break;
		case 435:
			iLocal_17 = __LIB_7__::func_48(uParam0, 2, 0);
			__LIB_7__::func_46(uParam0, 2f, -1f, 0f, 0f, 1f, 1f, 2.5f, joaat("VOLCYLINDER"), 1);
			__LIB_7__::func_47(uParam0, 2f, -1f, 0f, 0f, 1f, 1f, 2.5f, joaat("VOLCYLINDER"), -1, 1, 1, 1);
			iLocal_34 = __LIB_6__::func_958(uParam0, joaat("P_GUITAR01X"), 0f, 0f, 0f, "GUITAR", 0, 1, 1);
			__LIB_6__::func_959(uParam0, "script@vignette@music@javier_5@base", 1, 1, 0, 0);
			__LIB_6__::func_959(uParam0, "script@vignette@music@javier_5@action", 0, 0, 1, 0);
			__LIB_7__::func_146(uParam0, "JSNG5AU");
			__LIB_7__::func_127(uParam0, iLocal_17, 2, joaat("WORLD_HUMAN_SIT_GUITAR_UPBEAT"), "WORLD_HUMAN_SIT_GUITAR_MALE_A", -1, 1, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			__LIB_7__::func_139(uParam0, iLocal_17, iLocal_34, "p_guitar01x_PH_R_HAND", 0, 0);
			if (__LIB_6__::func_206(15))
			{
				__LIB_7__::func_108(uParam0, iLocal_17, -1f);
			}
			__LIB_7__::func_129(uParam0, 1);
			break;
		case 436:
			iLocal_17 = __LIB_7__::func_48(uParam0, 2, 0);
			__LIB_7__::func_46(uParam0, 2f, -1f, 0f, 0f, 1f, 1f, 2.5f, joaat("VOLCYLINDER"), 1);
			__LIB_7__::func_47(uParam0, 2f, -1f, 0f, 0f, 1f, 1f, 2.5f, joaat("VOLCYLINDER"), -1, 1, 1, 1);
			iLocal_34 = __LIB_6__::func_958(uParam0, joaat("P_GUITAR01X"), 0f, 0f, 0f, "GUITAR", 0, 1, 1);
			__LIB_7__::func_146(uParam0, "JSNG6AU");
			__LIB_6__::func_959(uParam0, "script@vignette@music@javier_6@base", 1, 1, 0, 0);
			__LIB_6__::func_959(uParam0, "script@vignette@music@javier_6@action", 0, 0, 1, 0);
			__LIB_7__::func_127(uParam0, iLocal_17, 2, joaat("WORLD_HUMAN_SIT_GUITAR"), "WORLD_HUMAN_SIT_GUITAR_MALE_A", -1, 1, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			__LIB_7__::func_139(uParam0, iLocal_17, iLocal_34, "p_guitar01x_PH_R_HAND", 0, 0);
			break;
		case 437:
			iLocal_16 = __LIB_7__::func_48(uParam0, 14, 0);
			iLocal_14 = __LIB_7__::func_48(uParam0, 13, 0);
			__LIB_7__::func_46(uParam0, 2f, -1f, 0f, 0f, 1f, 1f, 2.5f, joaat("VOLCYLINDER"), 1);
			__LIB_7__::func_47(uParam0, 0f, 0f, 0f, 0f, 4f, 4f, 2.5f, joaat("VOLCYLINDER"), -1, 1, 1, 1);
			__LIB_6__::func_958(uParam0, joaat("P_HARMONICA01X"), 0f, 0f, 0f, "HARMONICA", 0, 0, 1);
			iLocal_24 = __LIB_6__::func_958(uParam0, joaat("P_CHAIR_CRATE02X"), -1.86246f, -0.82945f, -0.0207748f, 0, 1, 0, 1);
			__LIB_7__::func_146(uParam0, "CJKS1AU");
			__LIB_6__::func_959(uParam0, "script@vignette@music@jack_1@base", 1, 1, 0, 0);
			__LIB_6__::func_959(uParam0, "script@vignette@music@jack_1@action", 0, 0, 1, 0);
			__LIB_7__::func_107(uParam0, iLocal_14, 2, joaat("PROP_HUMAN_CAMP_FIRE_SEAT_BOX"), "PROP_HUMAN_CAMP_FIRE_SEAT_BOX_FEMALE_A", -1, 0);
			__LIB_7__::func_127(uParam0, iLocal_14, 2, joaat("PROP_CAMP_FIRE_SEAT_BENCH"), "PROP_CAMP_FIRE_SEAT_BENCH_FEMALE_A", -1, 0, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			__LIB_7__::func_127(uParam0, iLocal_16, 3, joaat("WORLD_CAMP_JACK_ES_FIRE_SEAT_BOX"), "WORLD_CAMP_JACK_ES_FIRE_SEAT_BOX_MALE_A", iLocal_24, 0, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			break;
		case 438:
			iLocal_16 = __LIB_7__::func_48(uParam0, 14, 0);
			iLocal_14 = __LIB_7__::func_48(uParam0, 13, 0);
			__LIB_7__::func_47(uParam0, -0.5789f, -1.348f, 0.5829f, 0f, 1.1f, 1.1f, 2.5f, joaat("VOLBOX"), -1, 1, 1, 1);
			__LIB_7__::func_47(uParam0, 1.4366f, -0.3767f, 0.5659f, 0f, 1.1f, 1.1f, 2.5f, joaat("VOLBOX"), -1, 1, 1, 1);
			iLocal_34 = __LIB_6__::func_958(uParam0, joaat("P_HARMONICA01X"), 0f, 0f, 0f, "HARMONICA", 0, 0, 1);
			__LIB_6__::func_959(uParam0, "script@vignette@music@jack_1_lily_of_the_valley@base", 1, 1, 0, 0);
			iLocal_41 = __LIB_6__::func_959(uParam0, "script@vignette@music@jack_1_lily_of_the_valley@action", 2, 0, 1, 0);
			iLocal_42 = __LIB_6__::func_959(uParam0, "script@vignette@music@jack_1_lily_of_the_valley@exit_action", 0, 0, 0, 0);
			__LIB_7__::func_146(uParam0, "CJKS2AU");
			__LIB_7__::func_127(uParam0, iLocal_14, 2, joaat("PROP_HUMAN_SEAT_CHAIR"), "PROP_HUMAN_SEAT_CHAIR_GENERIC_FEMALE_C", -1, 0, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			break;
		case 439:
			iLocal_16 = __LIB_7__::func_48(uParam0, 14, 0);
			iLocal_14 = __LIB_7__::func_48(uParam0, 13, 0);
			__LIB_7__::func_47(uParam0, -1.769f, -0.8052f, 0.7632f, 0f, 1.1f, 1.1f, 2.5f, joaat("VOLBOX"), -1, 1, 1, 1);
			__LIB_7__::func_47(uParam0, -0.709111f, 2.14099f, 0.980247f, 0f, 1.1f, 1.1f, 2.5f, joaat("VOLBOX"), -1, 1, 1, 1);
			__LIB_6__::func_958(uParam0, joaat("P_HARMONICA01X"), 0f, 0f, 0f, "HARMONICA", 0, 0, 1);
			iLocal_24 = __LIB_6__::func_958(uParam0, joaat("P_CHAIR_CRATE02X"), -1.86246f, -0.82945f, -0.0207748f, 0, 1, 0, 1);
			__LIB_6__::func_959(uParam0, "script@vignette@music@jack_1_oh_shenendoh@base", 1, 1, 0, 0);
			__LIB_6__::func_959(uParam0, "script@vignette@music@jack_1_oh_shenendoh@action", 0, 0, 1, 0);
			__LIB_7__::func_146(uParam0, "CJKS3AU");
			__LIB_7__::func_127(uParam0, iLocal_14, 2, joaat("PROP_CAMP_FIRE_SEAT_BENCH"), "PROP_CAMP_FIRE_SEAT_BENCH_FEMALE_A", -1, 0, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			__LIB_7__::func_127(uParam0, iLocal_16, 2, joaat("WORLD_CAMP_JACK_ES_FIRE_SEAT_BOX"), "WORLD_CAMP_JACK_ES_FIRE_SEAT_BOX_MALE_A", iLocal_24, 0, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			break;
		case 440:
			iLocal_16 = __LIB_7__::func_48(uParam0, 14, 0);
			iLocal_14 = __LIB_7__::func_48(uParam0, 13, 0);
			__LIB_7__::func_47(uParam0, -0.5789f, -1.348f, 0.5829f, 0f, 1.1f, 1.1f, 2.5f, joaat("VOLBOX"), -1, 1, 1, 1);
			__LIB_7__::func_47(uParam0, 1.4366f, -0.3767f, 0.5659f, 0f, 1.1f, 1.1f, 2.5f, joaat("VOLBOX"), -1, 1, 1, 1);
			__LIB_6__::func_958(uParam0, joaat("P_HARMONICA01X"), 0f, 0f, 0f, "HARMONICA", 0, 1, 1);
			iLocal_29 = __LIB_6__::func_958(uParam0, joaat("P_CHAIR_CRATE02X"), 1.42003f, -0.46233f, 0.000724792f, 0, 1, 0, 1);
			__LIB_6__::func_959(uParam0, "script@vignette@music@jack_1_oh_susanna@base", 1, 1, 0, 0);
			iLocal_41 = __LIB_6__::func_959(uParam0, "script@vignette@music@jack_1_oh_susanna@action", 2, 0, 1, 0);
			iLocal_42 = __LIB_6__::func_959(uParam0, "script@vignette@music@jack_1_oh_susanna@exit_action", 0, 0, 0, 0);
			__LIB_7__::func_146(uParam0, "CJKS4AU");
			__LIB_7__::func_107(uParam0, iLocal_14, 2, joaat("PROP_HUMAN_CAMP_FIRE_SEAT_BOX"), "PROP_HUMAN_CAMP_FIRE_SEAT_BOX_FEMALE_A", -1, 0);
			__LIB_7__::func_127(uParam0, iLocal_14, 3, joaat("PROP_HUMAN_SEAT_CHAIR"), "PROP_HUMAN_SEAT_CHAIR_GENERIC_FEMALE_C", iLocal_29, 0, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			break;
		case 441:
			iLocal_16 = __LIB_7__::func_48(uParam0, 14, 0);
			iLocal_14 = __LIB_7__::func_48(uParam0, 13, 0);
			__LIB_7__::func_47(uParam0, -1.769f, -0.8052f, 0.7632f, 0f, 1.1f, 1.1f, 2.5f, joaat("VOLBOX"), -1, 1, 1, 1);
			__LIB_7__::func_47(uParam0, -0.709111f, 2.14099f, 0.980247f, 0f, 1.1f, 1.1f, 2.5f, joaat("VOLBOX"), -1, 1, 1, 1);
			iLocal_34 = __LIB_6__::func_958(uParam0, joaat("P_HARMONICA01X"), 0f, 0f, 0f, "HARMONICA", 0, 0, 1);
			iLocal_24 = __LIB_6__::func_958(uParam0, joaat("P_CHAIR_CRATE02X"), -1.86246f, -0.82945f, -0.0207748f, 0, 1, 0, 1);
			__LIB_6__::func_959(uParam0, "script@vignette@music@jack_1_yellwo_rose_of_texas@base", 1, 1, 0, 0);
			iLocal_41 = __LIB_6__::func_959(uParam0, "script@vignette@music@jack_1_yellwo_rose_of_texas@action", 0, 0, 1, 0);
			__LIB_7__::func_146(uParam0, "CJKS5AU");
			__LIB_7__::func_127(uParam0, iLocal_14, 2, joaat("PROP_CAMP_FIRE_SEAT_BENCH"), "PROP_CAMP_FIRE_SEAT_BENCH_FEMALE_A", -1, 0, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			__LIB_7__::func_127(uParam0, iLocal_16, 3, joaat("WORLD_CAMP_JACK_ES_FIRE_SEAT_BOX"), "WORLD_CAMP_JACK_ES_FIRE_SEAT_BOX_MALE_A", iLocal_24, 0, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			break;
		case 442:
			iLocal_18 = __LIB_7__::func_48(uParam0, 20, 0);
			__LIB_6__::func_959(uParam0, "script@vignette@music@karen_1@base", 1, 1, 0, 0);
			__LIB_6__::func_959(uParam0, "script@vignette@music@karen_1@action", 0, 0, 1, 0);
			__LIB_7__::func_146(uParam0, "KSNG1AU");
			__LIB_7__::func_107(uParam0, iLocal_18, 2, joaat("PROP_CAMP_FIRE_SEAT_BENCH"), "PROP_CAMP_FIRE_SEAT_BENCH_FEMALE_A", -1, 0);
			__LIB_7__::func_127(uParam0, iLocal_18, 2, joaat("PROP_CAMP_FIRE_SEAT_BENCH"), "PROP_CAMP_FIRE_SEAT_BENCH_FEMALE_A", -1, 0, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			__LIB_7__::func_147(uParam0, iLocal_18, 1, 12, 0, 0, 0);
			break;
		case 443:
			iLocal_18 = __LIB_7__::func_48(uParam0, 20, 0);
			iLocal_20 = __LIB_7__::func_48(uParam0, 8, 0);
			iLocal_22 = __LIB_7__::func_48(uParam0, 4, 0);
			iLocal_17 = __LIB_7__::func_48(uParam0, 2, 0);
			iLocal_28 = __LIB_6__::func_958(uParam0, joaat("P_CHAIR_BARREL04B"), -0.584518f, -1.37169f, -0.000602722f, 0, 1, 0, 1);
			iLocal_29 = __LIB_6__::func_958(uParam0, joaat("P_CHAIR_CRATE02X"), 1.42059f, -0.462698f, 0.000679016f, 0, 1, 0, 1);
			iLocal_30 = __LIB_6__::func_958(uParam0, joaat("P_CHAIR_CRATE15X"), 0.636307f, 1.3249f, -0.00391388f, 0, 1, 0, 1);
			iLocal_31 = __LIB_6__::func_958(uParam0, joaat("S_CRATESEAT03X"), -1.28888f, 0.763515f, -0.000335693f, 0, 1, 0, 1);
			iLocal_36 = __LIB_6__::func_958(uParam0, joaat("P_BOTTLEBEER01X"), 0f, 0f, 0f, "BOTTLE_SEAN", 0, 0, 1);
			iLocal_34 = __LIB_6__::func_958(uParam0, joaat("P_GUITAR01X"), 0f, 0f, 0f, "GUITAR", 0, 0, 1);
			iLocal_35 = __LIB_6__::func_958(uParam0, joaat("P_BOTTLEBEER01X"), 0f, 0f, 0f, "BOTTLE_KAREN", 0, 0, 1);
			iLocal_37 = __LIB_6__::func_958(uParam0, joaat("P_BOTTLEBEER01X"), 0f, 0f, 0f, "BOTTLE_UNCLE", 0, 1, 1);
			if (!__LIB_6__::func_206(14))
			{
				__LIB_6__::func_959(uParam0, "script@vignette@music@karen_sean_uncle_javier_1@base", 1, 1, 0, 0);
			}
			iLocal_41 = __LIB_6__::func_959(uParam0, "script@vignette@music@karen_sean_uncle_javier_1@action", 0, 0, 1, 0);
			__LIB_7__::func_146(uParam0, "KNSG1AU");
			__LIB_7__::func_107(uParam0, iLocal_18, 3, joaat("PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING"), "PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_FEMALE_B", iLocal_31, 0);
			__LIB_7__::func_127(uParam0, iLocal_18, 3, joaat("PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING"), "PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_FEMALE_B", iLocal_31, 0, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			__LIB_7__::func_139(uParam0, iLocal_18, iLocal_35, "p_bottleBeer01x_PH_R_HAND", 0, 0);
			__LIB_7__::func_147(uParam0, iLocal_18, 4, 24, 0, 0, 0);
			__LIB_7__::func_107(uParam0, iLocal_20, 0, joaat("PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING"), "PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_MALE_A", -1, 0);
			__LIB_7__::func_127(uParam0, iLocal_20, 3, joaat("PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING"), "PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_MALE_A", iLocal_28, 0, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			__LIB_7__::func_139(uParam0, iLocal_20, iLocal_36, "p_bottleBeer01x_PH_R_HAND", 0, 0);
			STREAMING::_REQUEST_SCENARIO_TYPE(joaat("PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING"), 1, 0, 0);
			__LIB_7__::func_127(uParam0, iLocal_22, 3, joaat("PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_BADASS"), "PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_BADASS_MALE_A", iLocal_29, 0, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			__LIB_7__::func_127(uParam0, iLocal_17, 3, joaat("PROP_HUMAN_SEAT_CHAIR_GUITAR"), "PROP_HUMAN_SEAT_CHAIR_GUITAR_MALE_A", iLocal_30, 0, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			__LIB_7__::func_139(uParam0, iLocal_17, iLocal_34, "p_guitar01x_PH_R_HAND", 0, 0);
			__LIB_7__::func_422(uParam0, iLocal_17, 1);
			bLocal_44 = true;
			StringCopy(&cLocal_146, "KSNG1_ARTHUR1", 24);
			if (__LIB_6__::func_206(14))
			{
				__LIB_7__::func_167(uParam0);
				__LIB_7__::func_168(uParam0);
				__LIB_7__::func_365(uParam0, iLocal_18, 4);
				__LIB_7__::func_108(uParam0, iLocal_18, -1f);
				__LIB_7__::func_280(uParam0, iLocal_18, 1);
				__LIB_7__::func_107(uParam0, iLocal_20, 0, joaat("PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING"), "PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_MALE_A", -1, 0);
				__LIB_7__::func_297(uParam0, iLocal_20, iLocal_36, "p_bottleBeer01x_PH_R_HAND");
				__LIB_7__::func_227(uParam0, iLocal_20, 1);
				__LIB_7__::func_365(uParam0, iLocal_20, 4);
				__LIB_7__::func_108(uParam0, iLocal_20, -1f);
				__LIB_7__::func_297(uParam0, iLocal_18, iLocal_35, "p_bottleBeer01x_PH_R_HAND");
				__LIB_7__::func_297(uParam0, iLocal_22, iLocal_37, "p_bottleBeer01x_PH_R_HAND");
				__LIB_7__::func_365(uParam0, iLocal_22, 4);
				__LIB_7__::func_108(uParam0, iLocal_22, -1f);
				__LIB_7__::func_280(uParam0, iLocal_22, 1);
				__LIB_7__::func_297(uParam0, iLocal_17, iLocal_34, "p_guitar01x_PH_R_HAND");
				__LIB_7__::func_280(uParam0, iLocal_17, 1);
				__LIB_7__::func_108(uParam0, iLocal_17, 5f);
				__LIB_7__::func_129(uParam0, 1);
				__LIB_4__::func_666(uParam0, 1);
			}
			break;
		case 444:
			iLocal_19 = __LIB_7__::func_48(uParam0, 17, 0);
			iLocal_18 = __LIB_7__::func_48(uParam0, 20, 0);
			iLocal_17 = __LIB_7__::func_48(uParam0, 2, 0);
			__LIB_6__::func_958(uParam0, joaat("P_CHAIR_BARREL04B"), -0.584518f, -1.37169f, -0.000602722f, "BARREL", 1, 0, 1);
			__LIB_6__::func_958(uParam0, joaat("S_CRATESEAT03X"), -1.28888f, 0.763515f, -0.000335693f, "CRATE", 1, 0, 1);
			iLocal_35 = __LIB_6__::func_958(uParam0, joaat("P_BOTTLEBEER01A"), 0f, 0f, 0f, "pearson_bottle", 0, 0, 1);
			iLocal_36 = __LIB_6__::func_958(uParam0, joaat("P_BOTTLEBEER01A"), 0f, 0f, 0f, "karen_bottle", 0, 0, 1);
			iLocal_34 = __LIB_6__::func_958(uParam0, joaat("P_GUITAR01X"), 0f, 0f, 0f, "GUITAR", 0, 0, 1);
			__LIB_6__::func_959(uParam0, "script@vignette@music@pearson_karen_and_javier_1@base", 1, 1, 0, 0);
			iLocal_41 = __LIB_6__::func_959(uParam0, "script@vignette@music@pearson_karen_and_javier_1@action", 0, 0, 1, 0);
			__LIB_7__::func_146(uParam0, "CPNK1AU");
			__LIB_7__::func_127(uParam0, iLocal_19, 3, joaat("PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING"), "PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_MALE_A", -1, 0, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			__LIB_7__::func_139(uParam0, iLocal_19, iLocal_35, "p_bottleBeer01x_PH_R_HAND", 0, 0);
			__LIB_7__::func_107(uParam0, iLocal_18, 3, joaat("PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING"), "PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_FEMALE_B", -1, 0);
			__LIB_7__::func_127(uParam0, iLocal_18, 3, joaat("PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING"), "PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_FEMALE_A", -1, 0, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			__LIB_7__::func_139(uParam0, iLocal_18, iLocal_36, "p_bottleBeer01x_PH_R_HAND", 0, 0);
			__LIB_7__::func_147(uParam0, iLocal_18, 1, 6, 0, 0, 0);
			__LIB_7__::func_127(uParam0, iLocal_17, 3, joaat("PROP_HUMAN_SEAT_CHAIR_GUITAR"), "PROP_HUMAN_SEAT_CHAIR_GUITAR_MALE_A", -1, 0, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			__LIB_7__::func_139(uParam0, iLocal_17, iLocal_34, "p_guitar01x_PH_R_HAND", 0, 0);
			__LIB_7__::func_422(uParam0, iLocal_17, 1);
			bLocal_44 = true;
			StringCopy(&cLocal_146, "CPNK1_ART1B", 24);
			iLocal_43 = joaat("PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING");
			STREAMING::_REQUEST_SCENARIO_TYPE(iLocal_43, 1, 0, 0);
			break;
		case 445:
			iLocal_19 = __LIB_7__::func_48(uParam0, 17, 0);
			iLocal_20 = __LIB_7__::func_48(uParam0, 8, 0);
			iLocal_34 = __LIB_6__::func_958(uParam0, joaat("P_CS_CONCERTINA01X"), 0f, 0f, 0f, "CONCERTINA", 0, 0, 1);
			iLocal_23 = __LIB_6__::func_958(uParam0, joaat("P_CHAIRFOLDING02X"), 1.2f, -1.868f, -0.0285f, 0, 1, 0, 1);
			iLocal_24 = __LIB_6__::func_958(uParam0, joaat("P_CHAIR_CRATE02X"), -1.859f, -0.832f, -0.021f, 0, 1, 0, 1);
			__LIB_6__::func_959(uParam0, "script@vignette@music@pearson_and_sean_1@base", 1, 1, 0, 0);
			iLocal_41 = __LIB_6__::func_959(uParam0, "script@vignette@music@pearson_and_sean_1@action", 0, 0, 1, 0);
			__LIB_7__::func_146(uParam0, "CPNS1AU");
			__LIB_7__::func_107(uParam0, iLocal_19, 3, joaat("PROP_HUMAN_SEAT_BENCH_CONCERTINA_UPBEAT"), "PROP_HUMAN_SEAT_BENCH_CONCERTINA_MALE_A", iLocal_23, 0);
			__LIB_7__::func_127(uParam0, iLocal_19, 3, joaat("PROP_HUMAN_SEAT_BENCH_CONCERTINA_UPBEAT"), "PROP_HUMAN_SEAT_BENCH_CONCERTINA_MALE_A", iLocal_23, 0, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			__LIB_7__::func_139(uParam0, iLocal_19, iLocal_34, "p_cs_concertina01x_PH_R_HAND", 0, 0);
			__LIB_7__::func_107(uParam0, iLocal_20, 3, joaat("PROP_HUMAN_CAMP_FIRE_SEAT_BOX"), "PROP_HUMAN_CAMP_FIRE_SEAT_BOX_MALE_A", iLocal_24, 0);
			__LIB_7__::func_127(uParam0, iLocal_20, 3, joaat("PROP_CAMP_FIRE_SEAT_BENCH"), "PROP_CAMP_FIRE_SEAT_BENCH_MALE_B", iLocal_23, 0, -1073741824 /* Float: -2f */, 0f, 1);
			bLocal_44 = true;
			StringCopy(&cLocal_146, "CPSN1_ART1B", 24);
			if (__LIB_6__::func_206(14))
			{
				__LIB_7__::func_108(uParam0, iLocal_19, 5f);
				__LIB_7__::func_108(uParam0, iLocal_20, 10f);
				__LIB_7__::func_129(uParam0, 1);
				uParam0->f_14 = 1;
			}
			break;
		case 446:
			iLocal_19 = __LIB_7__::func_48(uParam0, 17, 0);
			iLocal_20 = __LIB_7__::func_48(uParam0, 8, 0);
			iLocal_34 = __LIB_6__::func_958(uParam0, joaat("P_CS_CONCERTINA01X"), 0f, 0f, 0f, "CONCERTINA", 0, 0, 1);
			iLocal_23 = __LIB_6__::func_958(uParam0, joaat("P_CHAIRFOLDING02X"), 1.2f, -1.868f, -0.0285f, 0, 1, 0, 1);
			iLocal_24 = __LIB_6__::func_958(uParam0, joaat("P_CHAIR_CRATE02X"), -1.859f, -0.832f, -0.021f, 0, 1, 0, 1);
			__LIB_6__::func_959(uParam0, "script@vignette@music@pearson_and_sean_4@base", 1, 1, 0, 0);
			iLocal_41 = __LIB_6__::func_959(uParam0, "script@vignette@music@pearson_and_sean_4@action", 0, 0, 1, 0);
			__LIB_7__::func_146(uParam0, "CPNS4AU");
			__LIB_7__::func_127(uParam0, iLocal_19, 3, joaat("PROP_HUMAN_SEAT_BENCH_CONCERTINA_UPBEAT"), "PROP_HUMAN_SEAT_BENCH_CONCERTINA_MALE_A", iLocal_23, 0, -1073741824 /* Float: -2f */, 0f, 1);
			__LIB_7__::func_139(uParam0, iLocal_19, iLocal_34, "p_cs_concertina01x_PH_R_HAND", 0, 0);
			__LIB_7__::func_107(uParam0, iLocal_20, 3, joaat("PROP_CAMP_FIRE_SEATED"), "PROP_CAMP_FIRE_SEAT_BENCH_MALE_B", iLocal_24, 0);
			__LIB_7__::func_127(uParam0, iLocal_20, 3, joaat("PROP_CAMP_FIRE_SEATED"), "PROP_CAMP_FIRE_SEATED_MALE_I", iLocal_24, 0, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			__LIB_7__::func_137(uParam0, iLocal_20, "START_SEATED_MALE_I_TO_SEAT_BENCH_MALE_B");
			bLocal_44 = true;
			StringCopy(&cLocal_146, "CPNS4_ARTHUR1", 24);
			if (__LIB_6__::func_206(14))
			{
				__LIB_7__::func_107(uParam0, iLocal_19, 3, joaat("PROP_HUMAN_SEAT_BENCH_CONCERTINA_UPBEAT"), "PROP_HUMAN_SEAT_BENCH_CONCERTINA_MALE_A", iLocal_23, 0);
				__LIB_7__::func_107(uParam0, iLocal_20, 3, joaat("PROP_CAMP_FIRE_SEATED"), "PROP_CAMP_FIRE_SEAT_BENCH_MALE_B", iLocal_24, 0);
				__LIB_7__::func_129(uParam0, 1);
				uParam0->f_14 = 1;
			}
			break;
		case 447:
			iLocal_19 = __LIB_7__::func_48(uParam0, 17, 0);
			iLocal_20 = __LIB_7__::func_48(uParam0, 8, 0);
			iLocal_34 = __LIB_6__::func_958(uParam0, joaat("P_CS_CONCERTINA01X"), 0f, 0f, 0f, "CONCERTINA", 0, 1, 1);
			iLocal_23 = __LIB_6__::func_958(uParam0, joaat("P_CHAIRFOLDING02X"), 1.2f, -1.868f, -0.0285f, 0, 1, 0, 1);
			iLocal_24 = __LIB_6__::func_958(uParam0, joaat("P_CHAIR_CRATE02X"), -1.859f, -0.832f, -0.021f, 0, 1, 0, 1);
			__LIB_7__::func_146(uParam0, "CPSG7AU");
			__LIB_6__::func_959(uParam0, "script@vignette@music@pearson_7@base", 1, 1, 0, 0);
			__LIB_6__::func_959(uParam0, "script@vignette@music@pearson_7@action", 0, 0, 1, 0);
			__LIB_7__::func_127(uParam0, iLocal_19, 3, joaat("PROP_HUMAN_SEAT_BENCH_CONCERTINA_UPBEAT"), "PROP_HUMAN_SEAT_BENCH_CONCERTINA_MALE_A", iLocal_23, 0, -1073741824 /* Float: -2f */, 0f, 1);
			__LIB_7__::func_139(uParam0, iLocal_19, iLocal_34, "p_cs_concertina01x_PH_R_HAND", 0, 0);
			__LIB_7__::func_107(uParam0, iLocal_20, 3, joaat("PROP_CAMP_FIRE_SEATED"), "PROP_CAMP_FIRE_SEAT_BENCH_MALE_B", iLocal_24, 0);
			__LIB_7__::func_127(uParam0, iLocal_20, 3, joaat("PROP_CAMP_FIRE_SEATED"), "PROP_CAMP_FIRE_SEATED_MALE_D", iLocal_24, 0, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			__LIB_7__::func_137(uParam0, iLocal_20, "START_SEATED_MALE_D_TO_SEAT_BENCH_MALE_B");
			break;
		case 448:
			iLocal_19 = __LIB_7__::func_48(uParam0, 17, 0);
			iLocal_20 = __LIB_7__::func_48(uParam0, 8, 0);
			__LIB_6__::func_958(uParam0, joaat("P_CS_CONCERTINA01X"), 0f, 0f, 0f, "CONCERTINA", 0, 1, 1);
			iLocal_35 = __LIB_6__::func_958(uParam0, joaat("P_BOTTLEBEER01X"), 0f, 0f, 0f, "BOTTLE", 0, 0, 1);
			iLocal_27 = __LIB_6__::func_958(uParam0, joaat("P_CHAIR_BARREL04B"), -0.516f, -0.988f, -0.001f, "BARREL", 1, 0, 1);
			iLocal_23 = __LIB_6__::func_958(uParam0, joaat("S_CRATESEAT03X"), -1.289f, 0.764f, 0f, 0, 1, 0, 1);
			__LIB_6__::func_959(uParam0, "script@vignette@music@pearson_5@base", 1, 1, 0, 0);
			__LIB_6__::func_959(uParam0, "script@vignette@music@pearson_5@action", 0, 0, 1, 0);
			__LIB_7__::func_146(uParam0, "CPSG5AU");
			__LIB_7__::func_127(uParam0, iLocal_19, 3, joaat("PROP_HUMAN_SEAT_BENCH_CONCERTINA_UPBEAT"), "PROP_HUMAN_SEAT_BENCH_CONCERTINA_MALE_A", iLocal_23, 0, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			__LIB_7__::func_139(uParam0, iLocal_19, iLocal_34, "p_cs_concertina01x_PH_R_HAND", 0, 0);
			__LIB_7__::func_127(uParam0, iLocal_20, 3, joaat("PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_BADASS"), "PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_BADASS_MALE_A", iLocal_27, 0, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			__LIB_7__::func_139(uParam0, iLocal_20, iLocal_35, "p_bottleBeer01x_PH_R_HAND", 0, 0);
			break;
		case 449:
			iLocal_19 = __LIB_7__::func_48(uParam0, 17, 0);
			__LIB_7__::func_46(uParam0, 0f, -0.15f, 0f, -113.79f, 1f, 1f, 3f, joaat("VOLCYLINDER"), 1);
			__LIB_7__::func_47(uParam0, 0f, -0.15f, 0f, -113.79f, 1f, 1f, 3f, joaat("VOLCYLINDER"), -1, 1, 1, 1);
			iLocal_34 = __LIB_6__::func_958(uParam0, joaat("P_CS_CONCERTINA01X"), 0f, 0f, 0f, "CONCERTINA", 0, 1, 1);
			iLocal_23 = __LIB_6__::func_958(uParam0, joaat("P_CHAIRFOLDING02X"), 1.2f, -1.868f, -0.0285f, 0, 1, 0, 1);
			__LIB_7__::func_146(uParam0, "CPSG8AU");
			__LIB_6__::func_959(uParam0, "script@vignette@music@pearson_8@base", 1, 1, 0, 0);
			__LIB_6__::func_959(uParam0, "script@vignette@music@pearson_8@action", 0, 0, 1, 0);
			__LIB_7__::func_127(uParam0, iLocal_19, 3, joaat("PROP_HUMAN_SEAT_BENCH_CONCERTINA_UPBEAT"), "PROP_HUMAN_SEAT_BENCH_CONCERTINA_MALE_A", iLocal_23, 0, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			__LIB_7__::func_139(uParam0, iLocal_19, iLocal_34, "p_cs_concertina01x_PH_R_HAND", 0, 0);
			break;
		case 450:
			iLocal_19 = __LIB_7__::func_48(uParam0, 17, 0);
			__LIB_7__::func_46(uParam0, -0.55f, 2f, 0f, 100.97f, 1f, 1f, 3f, joaat("VOLCYLINDER"), 1);
			__LIB_7__::func_47(uParam0, -0.55f, 2f, 0f, 100.97f, 1f, 1f, 3f, joaat("VOLCYLINDER"), -1, 1, 1, 1);
			__LIB_7__::func_146(uParam0, "PSNG1AU");
			if (!__LIB_6__::func_206(15))
			{
				__LIB_6__::func_959(uParam0, "script@vignette@music@pearson_1@base", 1, 1, 0, 0);
			}
			iLocal_41 = __LIB_6__::func_959(uParam0, "script@vignette@music@pearson_1@action", 0, 0, 1, 0);
			__LIB_7__::func_107(uParam0, iLocal_19, 3, joaat("PROP_CAMP_FIRE_SEAT_BENCH"), "PROP_CAMP_FIRE_SEAT_BENCH_MALE_B", -1, 0);
			if (__LIB_0__::func_78(uParam0) == 6)
			{
				__LIB_7__::func_127(uParam0, iLocal_19, 2, joaat("PROP_CAMP_FIRE_SEATED"), "PROP_CAMP_FIRE_SEAT_BENCH_MALE_B", -1, 1, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			}
			else
			{
				__LIB_7__::func_127(uParam0, iLocal_19, 2, joaat("PROP_CAMP_FIRE_SEATED"), "PROP_CAMP_FIRE_SEAT_BENCH_MALE_B", -1, 0, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			}
			bLocal_44 = true;
			StringCopy(&cLocal_146, "PSNG1_ART", 24);
			if (__LIB_6__::func_206(15))
			{
				__LIB_7__::func_227(uParam0, iLocal_19, 1);
				__LIB_7__::func_168(uParam0);
				__LIB_7__::func_167(uParam0);
				__LIB_7__::func_129(uParam0, 1);
			}
			break;
		case 451:
			iLocal_20 = __LIB_7__::func_48(uParam0, 8, 0);
			__LIB_7__::func_46(uParam0, 0f, -0.15f, 0f, -113.79f, 1f, 1f, 3f, joaat("VOLCYLINDER"), 1);
			__LIB_7__::func_47(uParam0, 0f, -0.15f, 0f, -113.79f, 1f, 1f, 3f, joaat("VOLCYLINDER"), -1, 1, 1, 1);
			__LIB_6__::func_958(uParam0, joaat("P_BOTTLEJD01X"), 0f, 0f, 0f, "BOTTLE", 0, 1, 1);
			__LIB_7__::func_146(uParam0, "SSNG1");
			if (!__LIB_6__::func_206(14))
			{
				__LIB_6__::func_959(uParam0, "script@vignette@music@sean_1_P1A1_loud@base", 1, 1, 0, 0);
			}
			__LIB_6__::func_959(uParam0, "script@vignette@music@sean_1_P1A1_loud@action", 0, 0, 1, 0);
			__LIB_7__::func_107(uParam0, iLocal_20, 3, joaat("CC_PROP_CAMP_FIRE_SEATED_DRINKING"), "PROP_CAMP_FIRE_SEATED_DRINKING_WHISKEY_MALE_C", -1, 0);
			__LIB_7__::func_127(uParam0, iLocal_20, 2, joaat("CC_PROP_CAMP_FIRE_SEATED_DRINKING"), "PROP_CAMP_FIRE_SEATED_DRINKING_WHISKEY_MALE_C", -1, 0, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			__LIB_7__::func_137(uParam0, iLocal_20, "START_SEATED_DRINKING_WHISKEY_MALE_C_TO_SEAT_CHAIR_MALE_C");
			if (__LIB_6__::func_206(14))
			{
				__LIB_7__::func_167(uParam0);
				__LIB_7__::func_168(uParam0);
				__LIB_7__::func_227(uParam0, iLocal_20, 1);
				__LIB_7__::func_129(uParam0, 1);
				uParam0->f_14 = 1;
			}
			break;
		case 452:
			iLocal_21 = __LIB_7__::func_48(uParam0, 19, 0);
			iLocal_18 = __LIB_7__::func_48(uParam0, 20, 0);
			iLocal_35 = __LIB_6__::func_958(uParam0, joaat("P_BOTTLEBEER01X"), 0f, 0f, 0f, "BOTTLE", 0, 1, 1);
			iLocal_36 = __LIB_6__::func_958(uParam0, joaat("P_BOTTLEBEER01X"), 0f, 0f, 0f, "BOTTLE^1", 0, 1, 1);
			iLocal_28 = __LIB_6__::func_958(uParam0, joaat("P_CHAIR_BARREL04B"), -0.584518f, -1.37169f, -0.000602722f, 0, 1, 0, 1);
			iLocal_31 = __LIB_6__::func_958(uParam0, joaat("S_CRATESEAT03X"), -1.28888f, 0.763515f, -0.000335693f, 0, 1, 0, 1);
			if (!__LIB_6__::func_206(15))
			{
				__LIB_6__::func_959(uParam0, "script@vignette@music@susan_and_karen_2@base", 1, 1, 0, 0);
			}
			__LIB_6__::func_959(uParam0, "script@vignette@music@susan_and_karen_2@action", 0, 0, 1, 0);
			__LIB_7__::func_146(uParam0, "SKSG2AU");
			__LIB_7__::func_107(uParam0, iLocal_21, 3, joaat("PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING"), "PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_FEMALE_B", iLocal_28, 0);
			__LIB_7__::func_127(uParam0, iLocal_21, 3, joaat("PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING"), "PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_FEMALE_B", iLocal_28, 0, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			__LIB_7__::func_139(uParam0, iLocal_21, iLocal_36, "p_bottleBeer01x_PH_R_HAND", 0, 0);
			__LIB_7__::func_107(uParam0, iLocal_18, 3, joaat("PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING"), "PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_FEMALE_A", iLocal_31, 0);
			__LIB_7__::func_127(uParam0, iLocal_18, 3, joaat("PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING"), "PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_FEMALE_A", iLocal_31, 0, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			__LIB_7__::func_139(uParam0, iLocal_18, iLocal_35, "p_bottleBeer01x_PH_R_HAND", 0, 0);
			__LIB_7__::func_147(uParam0, iLocal_18, 4, 12, 0, 0, 0);
			STREAMING::_REQUEST_SCENARIO_TYPE(joaat("PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING"), 1, 0, 0);
			if (__LIB_6__::func_206(15))
			{
				__LIB_7__::func_227(uParam0, iLocal_21, 1);
				__LIB_7__::func_297(uParam0, iLocal_21, iLocal_36, "p_bottleBeer01x_PH_R_HAND");
				__LIB_7__::func_108(uParam0, iLocal_21, -1f);
				__LIB_7__::func_227(uParam0, iLocal_18, 1);
				__LIB_7__::func_297(uParam0, iLocal_18, iLocal_35, "p_bottleBeer01x_PH_R_HAND");
				__LIB_7__::func_108(uParam0, iLocal_18, -1f);
				__LIB_7__::func_168(uParam0);
				__LIB_7__::func_167(uParam0);
				__LIB_7__::func_129(uParam0, 1);
			}
			break;
		case 453:
			iLocal_21 = __LIB_7__::func_48(uParam0, 19, 0);
			iLocal_18 = __LIB_7__::func_48(uParam0, 20, 0);
			__LIB_7__::func_47(uParam0, 1.7625f, 2.95f, 0.85f, 0f, 1.3f, 1.3f, 3.2075f, joaat("VOLBOX"), joaat("APMS_COMP_KAREN"), 1, 1, 1);
			__LIB_7__::func_47(uParam0, 1.425f, -0.6125f, 0.85f, 0f, 1.3f, 1.3f, 3.2075f, joaat("VOLBOX"), joaat("APMS_COMP_GRIMSHAW"), 1, 1, 1);
			iLocal_157 = __LIB_6__::func_958(uParam0, joaat("P_WASHBOARD01X"), 3.73538f, 2.82993f, -0.2192f, "WASHBOARD", 0, 1, 1);
			__LIB_6__::func_958(uParam0, joaat("P_CS_RAG02X"), 0f, 0f, 0f, "RAG", 0, 1, 1);
			iLocal_39 = __LIB_6__::func_958(uParam0, joaat("P_CIGARETTE_CS01X"), 0f, 0f, 0f, "CIGARETTE", 0, 0, 1);
			__LIB_6__::func_959(uParam0, "script@vignette@music@susan_and_karen_3@base", 1, 1, 0, 0);
			__LIB_6__::func_959(uParam0, "script@vignette@music@susan_and_karen_3@action", 0, 0, 1, 0);
			__LIB_7__::func_146(uParam0, "SKAG3AU");
			__LIB_7__::func_107(uParam0, iLocal_21, 2, joaat("PROP_HUMAN_SEAT_CHAIR_SMOKING"), 0, -1, 0);
			__LIB_7__::func_127(uParam0, iLocal_21, 2, joaat("PROP_HUMAN_SEAT_CHAIR_SMOKING"), "PROP_HUMAN_SEAT_CHAIR_SMOKING_FEMALE_A", -1, 0, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			__LIB_7__::func_139(uParam0, iLocal_21, iLocal_39, "p_cigarette_cs01x_PH_R_HAND", 0, 0);
			__LIB_7__::func_127(uParam0, iLocal_18, 4, joaat("WORLD_HUMAN_WASHBOARD"), "WORLD_HUMAN_WASHBOARD_FEMALE_A", -1, 1, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			__LIB_7__::func_147(uParam0, iLocal_18, 1, 6, 0, 0, 0);
			break;
		case 454:
			iLocal_21 = __LIB_7__::func_48(uParam0, 19, 0);
			iLocal_18 = __LIB_7__::func_48(uParam0, 20, 0);
			iLocal_17 = __LIB_7__::func_48(uParam0, 2, 0);
			iLocal_34 = __LIB_6__::func_958(uParam0, joaat("P_GUITAR01X"), 0f, 0f, 0f, "GUITAR", 0, 1, 1);
			__LIB_6__::func_958(uParam0, joaat("P_CIGARETTE_CS01X"), 0f, 0f, 0f, "CIGARETTE", 0, 1, 1);
			__LIB_6__::func_958(uParam0, joaat("P_CS_SOCK01X"), 0f, 0f, 0f, "Sock", 0, 1, 1);
			iLocal_32 = __LIB_6__::func_958(uParam0, joaat("P_CHAIR_CRATE02X"), 1.67959f, -0.624872f, 0.00317383f, 0, 1, 0, 1);
			iLocal_33 = __LIB_6__::func_958(uParam0, joaat("P_CHAIR_CRATE15X"), 0f, 0f, 0f, 0, 1, 0, 1);
			iLocal_26 = __LIB_6__::func_958(uParam0, joaat("P_CS_SOCK01X"), 0f, 0f, 0f, "Sock", 0, 1, 1);
			__LIB_6__::func_959(uParam0, "script@vignette@music@susan_karen_javier_1@base", 1, 1, 0, 0);
			__LIB_6__::func_959(uParam0, "script@vignette@music@susan_karen_javier_1@action", 0, 0, 1, 0);
			__LIB_7__::func_146(uParam0, "CSNJ1AU");
			__LIB_7__::func_107(uParam0, iLocal_21, 3, joaat("PROP_HUMAN_SEAT_CHAIR_SMOKING"), "PROP_HUMAN_SEAT_CHAIR_SMOKING_FEMALE_A", iLocal_32, 0);
			__LIB_7__::func_127(uParam0, iLocal_21, 3, joaat("PROP_HUMAN_SEAT_CHAIR_SMOKING"), "PROP_HUMAN_SEAT_CHAIR_SMOKING_FEMALE_A", iLocal_32, 0, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			__LIB_7__::func_107(uParam0, iLocal_18, 3, joaat("PROP_HUMAN_SEAT_CHAIR_SEWING"), "PROP_HUMAN_SEAT_CHAIR_SEWING_FEMALE_A", iLocal_33, 0);
			__LIB_7__::func_127(uParam0, iLocal_18, 3, joaat("PROP_HUMAN_SEAT_CHAIR_SEWING"), "PROP_HUMAN_SEAT_CHAIR_SEWING_FEMALE_A", iLocal_33, 0, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			__LIB_7__::func_139(uParam0, iLocal_18, iLocal_26, "p_cs_sock01x_PH_L_HAND", 0, 0);
			__LIB_7__::func_147(uParam0, iLocal_18, 4, 24, 0, 0, 0);
			__LIB_7__::func_107(uParam0, iLocal_17, 3, joaat("WORLD_HUMAN_SIT_GUITAR_UPBEAT"), "WORLD_HUMAN_SIT_GUITAR_MALE_A", -1, 1);
			__LIB_7__::func_127(uParam0, iLocal_17, 2, joaat("WORLD_HUMAN_SIT_GUITAR_UPBEAT"), "WORLD_HUMAN_SIT_GUITAR_MALE_A", -1, 1, 0f, 1065353216 /* Float: 1f */, 1);
			__LIB_7__::func_139(uParam0, iLocal_17, iLocal_34, "p_guitar01x_PH_R_HAND", 0, 0);
			if (__LIB_6__::func_206(14))
			{
				__LIB_7__::func_47(uParam0, 0f, 0f, 0f, 0f, 0.1f, 0.1f, 0.1f, joaat("VOLBOX"), -1, 1, 1, 1);
				__LIB_7__::func_129(uParam0, 1);
				uParam0->f_14 = 1;
			}
			break;
		case 455:
			iLocal_21 = __LIB_7__::func_48(uParam0, 19, 0);
			iLocal_18 = __LIB_7__::func_48(uParam0, 20, 0);
			iLocal_17 = __LIB_7__::func_48(uParam0, 2, 0);
			iLocal_34 = __LIB_6__::func_958(uParam0, joaat("P_GUITAR01X"), 0f, 0f, 0f, "GUITAR", 0, 1, 1);
			__LIB_6__::func_958(uParam0, joaat("P_CIGARETTE_CS01X"), 0f, 0f, 0f, "CIGARETTE", 0, 1, 1);
			iLocal_26 = __LIB_6__::func_958(uParam0, joaat("P_CS_SOCK01X"), 0f, 0f, 0f, "Sock", 0, 1, 1);
			iLocal_32 = __LIB_6__::func_958(uParam0, joaat("P_CHAIR_CRATE02X"), 1.67959f, -0.624872f, 0.00317383f, 0, 1, 0, 1);
			iLocal_33 = __LIB_6__::func_958(uParam0, joaat("P_CHAIR_CRATE15X"), 0f, 0f, 0f, 0, 1, 0, 1);
			__LIB_7__::func_146(uParam0, "CSNJ2AU");
			__LIB_6__::func_959(uParam0, "script@vignette@music@susan_karen_javier_2@base", 1, 1, 0, 0);
			iLocal_41 = __LIB_6__::func_959(uParam0, "script@vignette@music@susan_karen_javier_2@action", 0, 0, 1, 0);
			__LIB_7__::func_107(uParam0, iLocal_21, 3, joaat("PROP_HUMAN_SEAT_CHAIR_SMOKING"), "PROP_HUMAN_SEAT_CHAIR_SMOKING_FEMALE_A", iLocal_32, 0);
			__LIB_7__::func_127(uParam0, iLocal_21, 3, joaat("PROP_HUMAN_SEAT_CHAIR_SMOKING"), "PROP_HUMAN_SEAT_CHAIR_SMOKING_FEMALE_A", iLocal_32, 0, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			__LIB_7__::func_107(uParam0, iLocal_18, 3, joaat("PROP_HUMAN_SEAT_CHAIR_SEWING"), "PROP_HUMAN_SEAT_CHAIR_SEWING_FEMALE_A", iLocal_33, 0);
			__LIB_7__::func_127(uParam0, iLocal_18, 3, joaat("PROP_HUMAN_SEAT_CHAIR_SEWING"), "PROP_HUMAN_SEAT_CHAIR_SEWING_FEMALE_A", iLocal_33, 0, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			__LIB_7__::func_139(uParam0, iLocal_18, iLocal_26, "p_cs_sock01x_PH_L_HAND", 0, 0);
			__LIB_7__::func_147(uParam0, iLocal_18, 4, 12, 0, 0, 0);
			__LIB_7__::func_127(uParam0, iLocal_17, 2, joaat("WORLD_HUMAN_SIT_GUITAR_UPBEAT"), "WORLD_HUMAN_SIT_GUITAR_MALE_A", -1, 1, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			__LIB_7__::func_139(uParam0, iLocal_17, iLocal_34, "p_guitar01x_PH_R_HAND", 0, 0);
			bLocal_44 = true;
			StringCopy(&cLocal_146, "CSNJ2_ART", 24);
			break;
		case 460:
			iLocal_22 = __LIB_7__::func_48(uParam0, 4, 0);
			__LIB_6__::func_958(uParam0, joaat("P_BOTTLEJD01X"), 0f, 0f, 0f, "P_BOTTLEJD01X", 0, 1, 1);
			iLocal_30 = __LIB_6__::func_958(uParam0, joaat("P_CHAIR_CRATE15X"), 0.636307f, 1.3249f, -0.00391388f, 0, 1, 0, 1);
			__LIB_7__::func_47(uParam0, 0.6375f, 1f, 0f, -24.75f, 1f, 1f, 3f, joaat("VOLBOX"), joaat("APMS_COMP_UNCLE"), 1, 1, 1);
			__LIB_6__::func_959(uParam0, "script@vignette@music@uncle_1_drunk@base", 1, 1, 0, 0);
			__LIB_6__::func_959(uParam0, "script@vignette@music@uncle_1_drunk@action", 0, 0, 1, 0);
			__LIB_7__::func_146(uParam0, "UNCS1AU");
			__LIB_7__::func_107(uParam0, iLocal_22, 3, joaat("PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_BADASS"), "PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_BADASS_MALE_D", iLocal_30, 0);
			__LIB_7__::func_127(uParam0, iLocal_22, 3, joaat("PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_BADASS"), "PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_BADASS_MALE_D", iLocal_30, 0, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			break;
		case 461:
			iLocal_22 = __LIB_7__::func_48(uParam0, 4, 0);
			__LIB_6__::func_958(uParam0, joaat("P_BOTTLEJD01X"), 0f, 0f, 0f, "P_BOTTLEJD01X", 0, 1, 1);
			iLocal_30 = __LIB_6__::func_958(uParam0, joaat("P_CHAIR_CRATE15X"), 0.636307f, 1.3249f, -0.00391388f, 0, 1, 0, 1);
			__LIB_7__::func_47(uParam0, 0.4875f, 1f, 0f, -24.75f, 1f, 1f, 3f, joaat("VOLBOX"), joaat("APMS_COMP_UNCLE"), 1, 1, 1);
			__LIB_6__::func_959(uParam0, "script@vignette@music@uncle_1_sober@base", 1, 1, 0, 0);
			__LIB_6__::func_959(uParam0, "script@vignette@music@uncle_1_sober@action", 0, 0, 1, 0);
			__LIB_7__::func_146(uParam0, "UNCS1AU");
			__LIB_7__::func_107(uParam0, iLocal_22, 3, joaat("PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_BADASS"), "PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_BADASS_MALE_D", iLocal_30, 0);
			__LIB_7__::func_127(uParam0, iLocal_22, 3, joaat("PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_BADASS"), "PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_BADASS_MALE_D", iLocal_30, 0, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			break;
		case 462:
			iLocal_22 = __LIB_7__::func_48(uParam0, 4, 0);
			__LIB_6__::func_958(uParam0, joaat("P_BOTTLEJD01X"), 0f, 0f, 0f, "BOTTLE", 0, 0, 1);
			__LIB_7__::func_146(uParam0, "UNSG2AU");
			__LIB_6__::func_959(uParam0, "script@vignette@music@uncle_2@base", 1, 1, 0, 0);
			__LIB_6__::func_959(uParam0, "script@vignette@music@uncle_2@action", 0, 0, 1, 0);
			__LIB_7__::func_107(uParam0, iLocal_22, 3, joaat("PROP_HUMAN_PASSED_OUT_TABLE"), "PROP_HUMAN_PASSED_OUT_TABLE_MALE_C", -1, 0);
			__LIB_7__::func_127(uParam0, iLocal_22, 3, joaat("PROP_HUMAN_PASSED_OUT_TABLE"), "PROP_HUMAN_PASSED_OUT_TABLE_MALE_C", -1, 0, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			break;
		case 463:
			iLocal_22 = __LIB_7__::func_48(uParam0, 4, 0);
			iLocal_17 = __LIB_7__::func_48(uParam0, 2, 0);
			iLocal_18 = __LIB_7__::func_48(uParam0, 20, 0);
			iLocal_21 = __LIB_7__::func_48(uParam0, 19, 0);
			iLocal_34 = __LIB_6__::func_958(uParam0, joaat("P_GUITAR01X"), 0f, 0f, 0f, "GUITAR", 0, 1, 1);
			iLocal_24 = __LIB_6__::func_958(uParam0, joaat("P_CHAIR_CRATE02X"), -1.859f, -0.832f, -0.021f, 0, 1, 0, 1);
			__LIB_7__::func_146(uParam0, "USNG1AU");
			__LIB_6__::func_959(uParam0, "script@vignette@music@uncle_javier_susan_karen_1@base", 1, 1, 0, 0);
			iLocal_41 = __LIB_6__::func_959(uParam0, "script@vignette@music@uncle_javier_susan_karen_1@action", 0, 0, 1, 0);
			__LIB_7__::func_127(uParam0, iLocal_22, 2, joaat("PROP_CAMP_FIRE_SEAT_CHAIR"), "PROP_CAMP_FIRE_SEAT_CHAIR_MALE_C", -1, 0, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			__LIB_7__::func_127(uParam0, iLocal_17, 2, joaat("WORLD_HUMAN_SIT_GUITAR"), "WORLD_HUMAN_SIT_GUITAR_MALE_A", -1, 0, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			__LIB_7__::func_139(uParam0, iLocal_17, iLocal_34, "p_guitar01x_PH_R_HAND", 0, 0);
			__LIB_7__::func_127(uParam0, iLocal_18, 2, joaat("PROP_CAMP_FIRE_SEAT_BENCH"), "PROP_CAMP_FIRE_SEAT_BENCH_FEMALE_A", -1, 0, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			__LIB_7__::func_147(uParam0, iLocal_18, 4, 24, 0, 0, 0);
			__LIB_7__::func_107(uParam0, iLocal_21, 2, joaat("PROP_CAMP_FIRE_SEAT_BENCH"), "PROP_CAMP_FIRE_SEAT_BENCH_FEMALE_A", -1, 0);
			__LIB_7__::func_127(uParam0, iLocal_21, 3, joaat("PROP_CAMP_FIRE_SEATED"), "PROP_CAMP_FIRE_SEATED_FEMALE_B", iLocal_24, 0, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			__LIB_7__::func_137(uParam0, iLocal_21, "START_SEATED_FEMALE_B_TO_SEAT_BENCH_FEMALE_A");
			bLocal_44 = true;
			StringCopy(&cLocal_146, "USNG1_ARTHUR1", 24);
			break;
		case 464:
			iLocal_22 = __LIB_7__::func_48(uParam0, 4, 0);
			iLocal_19 = __LIB_7__::func_48(uParam0, 17, 0);
			iLocal_29 = __LIB_6__::func_958(uParam0, joaat("P_CHAIR_CRATE02X"), 1.42059f, -0.462698f, 0.000679016f, "UNCLE_CRATE", 1, 0, 1);
			iLocal_31 = __LIB_6__::func_958(uParam0, joaat("S_CRATESEAT03X"), -1.28888f, 0.763515f, -0.000335693f, "PEARSON_CRATE", 1, 0, 1);
			__LIB_7__::func_146(uParam0, "CUNP1AU");
			if (!__LIB_6__::func_206(15))
			{
				__LIB_6__::func_959(uParam0, "script@vignette@music@uncle_and_pearson_1@base", 1, 1, 0, 0);
			}
			iLocal_41 = __LIB_6__::func_959(uParam0, "script@vignette@music@uncle_and_pearson_1@action", 0, 0, 1, 0);
			__LIB_7__::func_127(uParam0, iLocal_22, 3, joaat("PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_BADASS"), "PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_BADASS_MALE_A", iLocal_29, 0, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			__LIB_7__::func_107(uParam0, iLocal_19, 3, joaat("PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING"), "PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_MALE_A", iLocal_31, 0);
			__LIB_7__::func_127(uParam0, iLocal_19, 3, joaat("PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING"), "PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_MALE_A", iLocal_31, 0, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			bLocal_44 = true;
			StringCopy(&cLocal_146, "CUNP1_ART", 24);
			if (__LIB_6__::func_206(15))
			{
				iLocal_35 = __LIB_6__::func_958(uParam0, joaat("P_BOTTLEBEER01X"), 0f, 0f, 0f, "UNCLE_BOTTLE", 0, 1, 1);
				iLocal_36 = __LIB_6__::func_958(uParam0, joaat("P_BOTTLEBEER01X"), 0f, 0f, 0f, "PEARSON_BOTTLE", 0, 1, 1);
				__LIB_7__::func_280(uParam0, iLocal_22, 1);
				__LIB_7__::func_108(uParam0, iLocal_22, -1f);
				__LIB_7__::func_227(uParam0, iLocal_19, 1);
				__LIB_7__::func_108(uParam0, iLocal_19, -1f);
				__LIB_7__::func_168(uParam0);
				__LIB_7__::func_167(uParam0);
				__LIB_7__::func_129(uParam0, 1);
			}
			else
			{
				iLocal_35 = __LIB_6__::func_958(uParam0, joaat("P_BOTTLEBEER01X"), 0f, 0f, 0f, "UNCLE_BOTTLE", 0, 0, 1);
				iLocal_36 = __LIB_6__::func_958(uParam0, joaat("P_BOTTLEBEER01X"), 0f, 0f, 0f, "PEARSON_BOTTLE", 0, 0, 1);
				__LIB_7__::func_139(uParam0, iLocal_19, iLocal_36, "p_bottleBeer01x_PH_R_HAND", 0, 0);
				__LIB_7__::func_139(uParam0, iLocal_22, iLocal_35, "p_bottleBeer01x_PH_R_HAND", 0, 0);
			}
			break;
		case 465:
			iLocal_22 = __LIB_7__::func_48(uParam0, 4, 0);
			iLocal_19 = __LIB_7__::func_48(uParam0, 17, 0);
			iLocal_18 = __LIB_7__::func_48(uParam0, 20, 0);
			iLocal_17 = __LIB_7__::func_48(uParam0, 2, 0);
			iLocal_34 = __LIB_6__::func_958(uParam0, joaat("P_GUITAR01X"), 0f, 0f, 0f, "GUITAR", 0, 0, 1);
			iLocal_35 = __LIB_6__::func_958(uParam0, joaat("P_BOTTLEBEER01X"), 0f, 0f, 0f, "BOTTLE_0", 0, 1, 1);
			iLocal_36 = __LIB_6__::func_958(uParam0, joaat("P_BOTTLEBEER01X"), 0f, 0f, 0f, "BOTTLE_1", 0, 1, 1);
			iLocal_37 = __LIB_6__::func_958(uParam0, joaat("P_BOTTLEBEER01X"), 0f, 0f, 0f, "BOTTLE_2", 0, 1, 1);
			iLocal_29 = __LIB_6__::func_958(uParam0, joaat("P_CHAIR_CRATE02X"), 1.42059f, -0.462698f, 0.000679016f, 0, 1, 0, 1);
			iLocal_30 = __LIB_6__::func_958(uParam0, joaat("P_CHAIR_CRATE15X"), 0.636307f, 1.3249f, -0.00391388f, 0, 1, 0, 1);
			__LIB_7__::func_146(uParam0, "UNPNSAU");
			__LIB_6__::func_959(uParam0, "script@vignette@music@uncle_pearson_karen_javier_1@base", 1, 1, 0, 0);
			iLocal_41 = __LIB_6__::func_959(uParam0, "script@vignette@music@uncle_pearson_karen_javier_1@action", 0, 0, 1, 0);
			__LIB_7__::func_107(uParam0, iLocal_22, 3, joaat("PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_BADASS"), "PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_BADASS_MALE_A", iLocal_29, 0);
			__LIB_7__::func_127(uParam0, iLocal_22, 3, joaat("PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_BADASS"), "PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_BADASS_MALE_A", iLocal_29, 0, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			__LIB_7__::func_139(uParam0, iLocal_22, iLocal_35, "p_bottleBeer01x_PH_R_HAND", 0, 0);
			__LIB_7__::func_127(uParam0, iLocal_19, 2, joaat("PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING"), "PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_MALE_A", -1, 0, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			__LIB_7__::func_139(uParam0, iLocal_19, iLocal_36, "p_bottleBeer01x_PH_R_HAND", 0, 0);
			__LIB_7__::func_127(uParam0, iLocal_18, 2, joaat("PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING"), "PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_FEMALE_A", -1, 0, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			__LIB_7__::func_139(uParam0, iLocal_18, iLocal_37, "p_bottleBeer01x_PH_R_HAND", 0, 0);
			__LIB_7__::func_127(uParam0, iLocal_17, 3, joaat("PROP_HUMAN_SEAT_CHAIR_GUITAR"), "PROP_HUMAN_SEAT_CHAIR_GUITAR_MALE_A", iLocal_30, 0, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			__LIB_7__::func_422(uParam0, iLocal_17, 1);
			__LIB_7__::func_139(uParam0, iLocal_17, iLocal_34, "p_guitar01x_PH_R_HAND", 0, 0);
			bLocal_44 = true;
			StringCopy(&cLocal_146, "UNPNS_ARTHUR1", 24);
			iLocal_43 = joaat("PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING");
			STREAMING::_REQUEST_SCENARIO_TYPE(iLocal_43, 1, 0, 0);
			break;
		case 466:
			iLocal_22 = __LIB_7__::func_48(uParam0, 4, 0);
			iLocal_19 = __LIB_7__::func_48(uParam0, 17, 0);
			iLocal_18 = __LIB_7__::func_48(uParam0, 20, 0);
			iLocal_20 = __LIB_7__::func_48(uParam0, 8, 0);
			iLocal_35 = __LIB_6__::func_958(uParam0, joaat("P_BOTTLEBEER01A"), 0f, 0f, 0f, "BOTTLE_UNCLE", 0, 0, 1);
			iLocal_36 = __LIB_6__::func_958(uParam0, joaat("P_BOTTLEBEER01A"), 0f, 0f, 0f, "BOTTLE_PEARSON", 0, 0, 1);
			iLocal_37 = __LIB_6__::func_958(uParam0, joaat("P_BOTTLEBEER01A"), 0f, 0f, 0f, "BOTTLE_KAREN", 0, 0, 1);
			iLocal_38 = __LIB_6__::func_958(uParam0, joaat("P_BOTTLEBEER01A"), 0f, 0f, 0f, "BOTTLE_SEAN", 0, 0, 1);
			iLocal_29 = __LIB_6__::func_958(uParam0, joaat("P_CHAIR_CRATE02X"), 1.42059f, -0.462698f, 0.000679016f, 0, 1, 0, 1);
			iLocal_30 = __LIB_6__::func_958(uParam0, joaat("P_CHAIR_CRATE15X"), 0.636307f, 1.3249f, -0.00391388f, 0, 1, 0, 1);
			__LIB_7__::func_146(uParam0, "CUNS5AU");
			__LIB_6__::func_959(uParam0, "script@vignette@music@uncle_pearson_karen_sean_1@base", 1, 1, 0, 0);
			__LIB_6__::func_959(uParam0, "script@vignette@music@uncle_pearson_karen_sean_1@action", 0, 0, 1, 0);
			__LIB_7__::func_107(uParam0, iLocal_22, 3, joaat("PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_BADASS"), "PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_BADASS_MALE_A", iLocal_29, 0);
			__LIB_7__::func_127(uParam0, iLocal_22, 3, joaat("PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_BADASS"), "PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_BADASS_MALE_A", iLocal_29, 0, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			__LIB_7__::func_139(uParam0, iLocal_22, iLocal_35, "p_bottleBeer01x_PH_R_HAND", 0, 0);
			__LIB_7__::func_107(uParam0, iLocal_19, 2, joaat("PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING"), "PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_MALE_B", -1, 0);
			__LIB_7__::func_127(uParam0, iLocal_19, 2, joaat("PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING"), "PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_MALE_B", -1, 0, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			__LIB_7__::func_139(uParam0, iLocal_19, iLocal_36, "p_bottleBeer01x_PH_R_HAND", 0, 0);
			__LIB_7__::func_107(uParam0, iLocal_18, 3, joaat("PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING"), "PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_FEMALE_B", iLocal_30, 0);
			__LIB_7__::func_127(uParam0, iLocal_18, 3, joaat("PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING"), "PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_FEMALE_B", iLocal_30, 0, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			__LIB_7__::func_147(uParam0, iLocal_18, 4, 24, 0, 0, 0);
			__LIB_7__::func_139(uParam0, iLocal_18, iLocal_37, "p_bottleBeer01x_PH_R_HAND", 0, 0);
			__LIB_7__::func_107(uParam0, iLocal_20, 2, joaat("PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING"), "PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_MALE_A", -1, 0);
			__LIB_7__::func_127(uParam0, iLocal_20, 2, joaat("PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING"), "PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_MALE_A", -1, 0, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			__LIB_7__::func_139(uParam0, iLocal_20, iLocal_38, "p_bottleBeer01x_PH_R_HAND", 0, 0);
			iLocal_43 = joaat("PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING");
			STREAMING::_REQUEST_SCENARIO_TYPE(iLocal_43, 1, 0, 0);
			break;
		case 467:
			iLocal_22 = __LIB_7__::func_48(uParam0, 4, 0);
			iLocal_19 = __LIB_7__::func_48(uParam0, 17, 0);
			iLocal_20 = __LIB_7__::func_48(uParam0, 8, 0);
			iLocal_17 = __LIB_7__::func_48(uParam0, 2, 0);
			iLocal_34 = __LIB_6__::func_958(uParam0, joaat("P_GUITAR01X"), 0f, 0f, 0f, "GUITAR", 0, 0, 1);
			__LIB_6__::func_958(uParam0, joaat("P_BOTTLEJD01X"), 0f, 0f, 0f, "BOTTLE_UNCLE", 0, 1, 1);
			__LIB_6__::func_958(uParam0, joaat("P_BOTTLEJD01X"), 0f, 0f, 0f, "BOTTLE_SEAN", 0, 1, 1);
			iLocal_23 = __LIB_6__::func_958(uParam0, joaat("P_CHAIRFOLDING02X"), 1.2f, -1.868f, -0.0285f, 0, 1, 0, 1);
			iLocal_25 = __LIB_6__::func_958(uParam0, joaat("P_BENCH_LOG07X"), -1.372f, 1.604f, -0.0733f, 0, 1, 0, 1);
			iLocal_24 = __LIB_6__::func_958(uParam0, joaat("P_CHAIR_CRATE02X"), -1.859f, -0.832f, -0.021f, 0, 1, 0, 1);
			if (!__LIB_6__::func_206(14))
			{
				__LIB_6__::func_959(uParam0, "script@vignette@music@uncle_pearson_sean_javier_2@base", 1, 1, 0, 0);
			}
			iLocal_41 = __LIB_6__::func_959(uParam0, "script@vignette@music@uncle_pearson_sean_javier_2@action", 0, 0, 1, 0);
			__LIB_7__::func_146(uParam0, "CUNS6AU");
			__LIB_7__::func_107(uParam0, iLocal_19, 3, joaat("PROP_CAMP_FIRE_SEATED"), "PROP_CAMP_FIRE_SEAT_BENCH_MALE_B", iLocal_25, 0);
			__LIB_7__::func_127(uParam0, iLocal_19, 2, joaat("PROP_CAMP_FIRE_SEATED"), "PROP_CAMP_FIRE_SEAT_BENCH_MALE_B", iLocal_25, 0, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			__LIB_7__::func_107(uParam0, iLocal_22, 3, joaat("PROP_CAMP_FIRE_SEAT_CHAIR"), "PROP_CAMP_FIRE_SEAT_CHAIR_MALE_C", iLocal_25, 0);
			__LIB_7__::func_127(uParam0, iLocal_22, 3, joaat("CC_PROP_CAMP_FIRE_SEATED_DRINKING"), "PROP_CAMP_FIRE_SEATED_DRINKING_WHISKEY_MALE_C", iLocal_23, 0, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			__LIB_7__::func_137(uParam0, iLocal_22, "START_SEATED_DRINKING_WHISKEY_MALE_C_TO_SEAT_CHAIR_MALE_C");
			__LIB_7__::func_107(uParam0, iLocal_20, 3, joaat("PROP_CAMP_FIRE_SEAT_BENCH"), "PROP_CAMP_FIRE_SEAT_BENCH_MALE_B", iLocal_24, 0);
			__LIB_7__::func_127(uParam0, iLocal_20, 2, joaat("PROP_CAMP_FIRE_SEAT_BENCH"), "PROP_CAMP_FIRE_SEAT_BENCH_MALE_B", -1, 0, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			__LIB_7__::func_107(uParam0, iLocal_17, 3, joaat("WORLD_HUMAN_SIT_GUITAR_UPBEAT"), "WORLD_HUMAN_SIT_GUITAR_MALE_A", -1, 1);
			__LIB_7__::func_127(uParam0, iLocal_17, 2, joaat("WORLD_HUMAN_SIT_GUITAR_UPBEAT"), "WORLD_HUMAN_SIT_GUITAR_MALE_A", -1, 1, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			__LIB_7__::func_139(uParam0, iLocal_17, iLocal_34, "p_guitar01x_PH_R_HAND", 0, 0);
			if (__LIB_6__::func_206(14))
			{
				__LIB_7__::func_168(uParam0);
				__LIB_7__::func_167(uParam0);
				__LIB_7__::func_280(uParam0, iLocal_22, 1);
				__LIB_7__::func_365(uParam0, iLocal_22, 4);
				__LIB_7__::func_108(uParam0, iLocal_22, -1f);
				__LIB_7__::func_282(uParam0, iLocal_19, 4);
				__LIB_7__::func_227(uParam0, iLocal_19, 1);
				__LIB_7__::func_365(uParam0, iLocal_19, 4);
				__LIB_7__::func_108(uParam0, iLocal_19, -1f);
				__LIB_7__::func_280(uParam0, iLocal_20, 1);
				__LIB_7__::func_108(uParam0, iLocal_20, -1f);
				__LIB_7__::func_282(uParam0, iLocal_17, 4);
				__LIB_7__::func_227(uParam0, iLocal_17, 1);
				__LIB_7__::func_365(uParam0, iLocal_17, 4);
				__LIB_7__::func_108(uParam0, iLocal_17, -1f);
				__LIB_7__::func_129(uParam0, 1);
				__LIB_4__::func_666(uParam0, 1);
			}
			iLocal_43 = joaat("PROP_CAMP_FIRE_SEATED");
			STREAMING::_REQUEST_SCENARIO_TYPE(iLocal_43, 1, 0, 0);
			bLocal_44 = true;
			StringCopy(&cLocal_146, "CUNS6_ARTHUR1", 24);
			break;
		case 468:
			iLocal_22 = __LIB_7__::func_48(uParam0, 4, 0);
			iLocal_19 = __LIB_7__::func_48(uParam0, 17, 0);
			iLocal_20 = __LIB_7__::func_48(uParam0, 8, 0);
			iLocal_17 = __LIB_7__::func_48(uParam0, 2, 0);
			iLocal_34 = __LIB_6__::func_958(uParam0, joaat("P_GUITAR01X"), 0f, 0f, -1.5f, "JAVIER_GUITAR", 0, 1, 1);
			iLocal_23 = __LIB_6__::func_958(uParam0, joaat("P_CHAIRFOLDING02X"), 1.2f, -1.868f, -0.0285f, 0, 1, 0, 1);
			iLocal_25 = __LIB_6__::func_958(uParam0, joaat("P_BENCH_LOG07X"), -1.372f, 1.604f, -0.0733f, 0, 1, 0, 1);
			iLocal_24 = __LIB_6__::func_958(uParam0, joaat("P_CHAIR_CRATE02X"), -1.859f, -0.832f, -0.021f, 0, 1, 0, 1);
			__LIB_7__::func_146(uParam0, "USNG3AU");
			__LIB_6__::func_959(uParam0, "script@vignette@music@uncle_pearson_sean_javier_3@base", 1, 1, 0, 0);
			iLocal_41 = __LIB_6__::func_959(uParam0, "script@vignette@music@uncle_pearson_sean_javier_3@action", 0, 0, 1, 0);
			__LIB_7__::func_127(uParam0, iLocal_22, 3, joaat("PROP_CAMP_FIRE_SEATED"), "PROP_CAMP_FIRE_SEATED_MALE_I", iLocal_23, 0, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			__LIB_7__::func_137(uParam0, iLocal_22, "START_SEATED_MALE_I_TO_SEAT_BENCH_MALE_B");
			__LIB_7__::func_107(uParam0, iLocal_19, 3, joaat("PROP_CAMP_FIRE_SEATED"), "PROP_CAMP_FIRE_SEAT_BENCH_MALE_B", iLocal_25, 0);
			__LIB_7__::func_127(uParam0, iLocal_19, 2, joaat("PROP_CAMP_FIRE_SEATED"), "PROP_CAMP_FIRE_SEAT_BENCH_MALE_B", iLocal_25, 0, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			__LIB_7__::func_107(uParam0, iLocal_20, 3, joaat("PROP_CAMP_FIRE_SEAT_BENCH"), "PROP_CAMP_FIRE_SEAT_BENCH_MALE_B", iLocal_24, 0);
			__LIB_7__::func_127(uParam0, iLocal_20, 3, joaat("PROP_CAMP_FIRE_SEATED"), "PROP_CAMP_FIRE_SEATED_MALE_D", iLocal_24, 0, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			__LIB_7__::func_137(uParam0, iLocal_20, "START_SEATED_MALE_D_TO_SEAT_BENCH_MALE_B");
			__LIB_7__::func_107(uParam0, iLocal_17, 2, joaat("WORLD_HUMAN_SIT_GUITAR_UPBEAT"), "WORLD_HUMAN_SIT_GUITAR_MALE_A", -1, 1);
			__LIB_7__::func_127(uParam0, iLocal_17, 2, joaat("WORLD_HUMAN_SIT_GUITAR_UPBEAT"), "WORLD_HUMAN_SIT_GUITAR_MALE_A", -1, 0, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			__LIB_7__::func_139(uParam0, iLocal_17, iLocal_34, "p_guitar01x_PH_R_HAND", 0, 0);
			bLocal_44 = true;
			StringCopy(&cLocal_146, "USNG3_ARTHUR1", 24);
			iLocal_43 = joaat("PROP_CAMP_FIRE_SEATED");
			STREAMING::_REQUEST_SCENARIO_TYPE(iLocal_43, 1, 0, 0);
			break;
		case 469:
			iLocal_22 = __LIB_7__::func_48(uParam0, 4, 0);
			iLocal_20 = __LIB_7__::func_48(uParam0, 8, 0);
			iLocal_35 = __LIB_6__::func_958(uParam0, joaat("P_BOTTLEJD01X"), 0f, 0f, 0f, "BOTTLE_UNCLE", 0, 0, 1);
			iLocal_36 = __LIB_6__::func_958(uParam0, joaat("P_BOTTLEJD01X"), 0f, 0f, 0f, "BOTTLE_SEAN", 0, 0, 1);
			__LIB_6__::func_958(uParam0, joaat("P_SHOTGLASS01X"), 0f, 0f, 0f, "SHOTGLASS_0_", 0, 0, 1);
			__LIB_6__::func_958(uParam0, joaat("P_SHOTGLASS01X"), 0f, 0f, 0f, "SHOTGLASS_1_", 0, 0, 1);
			iLocal_28 = __LIB_6__::func_958(uParam0, joaat("P_CHAIR_BARREL04B"), -0.5845f, -1.3717f, -0.0006f, "BARREL", 1, 0, 1);
			__LIB_7__::func_146(uParam0, "CUNS7");
			__LIB_6__::func_959(uParam0, "script@vignette@music@uncle_sean_2@base", 1, 1, 0, 0);
			iLocal_41 = __LIB_6__::func_959(uParam0, "script@vignette@music@uncle_sean_2@action", 0, 0, 1, 0);
			__LIB_7__::func_107(uParam0, iLocal_22, 2, joaat("PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING"), "PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_MALE_C", -1, 0);
			__LIB_7__::func_127(uParam0, iLocal_22, 2, joaat("PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING"), "PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_MALE_C", -1, 0, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			__LIB_7__::func_139(uParam0, iLocal_22, iLocal_35, "p_bottleJD01x_ph_r_hand", 0, 0);
			__LIB_7__::func_107(uParam0, iLocal_20, 3, joaat("PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_BADASS"), "PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_BADASS_MALE_D", iLocal_28, 0);
			__LIB_7__::func_127(uParam0, iLocal_20, 3, joaat("PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_BADASS"), "PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_BADASS_MALE_D", iLocal_28, 0, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			__LIB_7__::func_139(uParam0, iLocal_20, iLocal_36, "p_bottleJD01x_ph_r_hand", 0, 0);
			STREAMING::_REQUEST_SCENARIO_TYPE(joaat("PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING"), 1, 0, 0);
			bLocal_44 = true;
			StringCopy(&cLocal_146, "CUNS7_ARTHUR1", 24);
			break;
		case 470:
			iLocal_22 = __LIB_7__::func_48(uParam0, 4, 0);
			iLocal_20 = __LIB_7__::func_48(uParam0, 8, 0);
			iLocal_35 = __LIB_6__::func_958(uParam0, joaat("P_BOTTLEBEER01X"), 0f, 0f, 0f, "BOTTLE", 0, 1, 1);
			iLocal_36 = __LIB_6__::func_958(uParam0, joaat("P_BOTTLEJD01X"), 0f, 0f, 0f, "BOTTLE^1", 0, 1, 1);
			__LIB_6__::func_959(uParam0, "script@vignette@music@uncle_and_sean_3@base", 1, 1, 0, 0);
			__LIB_6__::func_959(uParam0, "script@vignette@music@uncle_and_sean_3@action", 0, 0, 1, 0);
			__LIB_7__::func_146(uParam0, "CUNS3AU");
			__LIB_7__::func_107(uParam0, iLocal_22, 3, joaat("PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_BADASS"), "PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_BADASS_MALE_A", -1, 0);
			__LIB_7__::func_127(uParam0, iLocal_22, 3, joaat("PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_BADASS"), "PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_BADASS_MALE_A", -1, 0, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			__LIB_7__::func_139(uParam0, iLocal_22, iLocal_35, "p_bottleBeer01x_PH_R_HAND", 0, 0);
			__LIB_7__::func_127(uParam0, iLocal_20, 3, joaat("PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_BADASS"), "PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_BADASS_MALE_D", -1, 0, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			__LIB_7__::func_139(uParam0, iLocal_20, iLocal_36, "p_bottleJD01x_ph_r_hand", 0, 0);
			iLocal_43 = joaat("PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_BADASS");
			STREAMING::_REQUEST_SCENARIO_TYPE(iLocal_43, 1, 0, 0);
			break;
		case 471:
			iLocal_22 = __LIB_7__::func_48(uParam0, 4, 0);
			iLocal_20 = __LIB_7__::func_48(uParam0, 8, 0);
			iLocal_17 = __LIB_7__::func_48(uParam0, 2, 0);
			iLocal_35 = __LIB_6__::func_958(uParam0, joaat("P_BOTTLEJD01X"), 0f, 0f, 0f, "BOTTLE_0", 0, 1, 1);
			__LIB_6__::func_958(uParam0, joaat("P_BOTTLEJD01X"), 0f, 0f, 0f, "BOTTLE_1", 0, 1, 1);
			iLocal_34 = __LIB_6__::func_958(uParam0, joaat("P_GUITAR01X"), 0f, 0f, 0f, "GUITAR", 0, 0, 1);
			iLocal_23 = __LIB_6__::func_958(uParam0, joaat("P_CHAIRFOLDING02X"), 1.2f, -1.868f, -0.0285f, 0, 1, 0, 1);
			iLocal_24 = __LIB_6__::func_958(uParam0, joaat("P_CHAIR_CRATE02X"), -1.859f, -0.832f, -0.021f, 0, 1, 0, 1);
			if (!__LIB_6__::func_206(14))
			{
				__LIB_6__::func_959(uParam0, "script@vignette@music@uncle_sean_javier_1@base", 1, 1, 0, 0);
			}
			iLocal_41 = __LIB_6__::func_959(uParam0, "script@vignette@music@uncle_sean_javier_1@action", 0, 0, 1, 0);
			__LIB_7__::func_146(uParam0, "CUNSJAU");
			__LIB_7__::func_127(uParam0, iLocal_22, 3, joaat("CC_PROP_CAMP_FIRE_SEATED_DRINKING"), "PROP_CAMP_FIRE_SEATED_DRINKING_WHISKEY_MALE_C", iLocal_23, 0, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			__LIB_7__::func_137(uParam0, iLocal_22, "START_SEATED_DRINKING_WHISKEY_MALE_C_TO_SEAT_CHAIR_MALE_C");
			__LIB_7__::func_139(uParam0, iLocal_22, iLocal_35, "p_bottleJD01x_ph_r_hand", 0, 0);
			__LIB_7__::func_107(uParam0, iLocal_20, 3, joaat("PROP_CAMP_FIRE_SEATED"), "PROP_CAMP_FIRE_SEAT_BENCH_MALE_B", iLocal_24, 0);
			__LIB_7__::func_127(uParam0, iLocal_20, 3, joaat("PROP_CAMP_FIRE_SEATED"), "PROP_CAMP_FIRE_SEATED_MALE_D", iLocal_24, 0, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			__LIB_7__::func_137(uParam0, iLocal_20, "START_SEATED_MALE_D_TO_SEAT_BENCH_MALE_B");
			__LIB_7__::func_107(uParam0, iLocal_17, 3, joaat("WORLD_HUMAN_SIT_GUITAR_UPBEAT"), "WORLD_HUMAN_SIT_GUITAR_MALE_A", -1, 1);
			__LIB_7__::func_127(uParam0, iLocal_17, 2, joaat("WORLD_HUMAN_SIT_GUITAR_UPBEAT"), "WORLD_HUMAN_SIT_GUITAR_MALE_A", -1, 1, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			__LIB_7__::func_139(uParam0, iLocal_17, iLocal_34, "p_guitar01x_PH_R_HAND", 0, 0);
			bLocal_44 = true;
			StringCopy(&cLocal_146, "CUNSJ_ART", 24);
			if (__LIB_6__::func_206(14))
			{
				__LIB_7__::func_168(uParam0);
				__LIB_7__::func_167(uParam0);
				__LIB_7__::func_282(uParam0, iLocal_20, 0);
				__LIB_7__::func_227(uParam0, iLocal_20, 1);
				__LIB_7__::func_108(uParam0, iLocal_20, -1f);
				__LIB_7__::func_280(uParam0, iLocal_22, 1);
				__LIB_7__::func_108(uParam0, iLocal_22, -1f);
				__LIB_7__::func_280(uParam0, iLocal_17, 1);
				__LIB_7__::func_108(uParam0, iLocal_17, -1f);
				__LIB_7__::func_129(uParam0, 1);
				__LIB_4__::func_666(uParam0, 1);
			}
			break;
		case 472:
			iLocal_22 = __LIB_7__::func_48(uParam0, 4, 0);
			iLocal_21 = __LIB_7__::func_48(uParam0, 19, 0);
			iLocal_18 = __LIB_7__::func_48(uParam0, 20, 0);
			iLocal_35 = __LIB_6__::func_958(uParam0, joaat("P_BOTTLEJD01X"), 0f, 0f, 0f, "UNCLE_BOTTLE", 0, 1, 1);
			iLocal_36 = __LIB_6__::func_958(uParam0, joaat("P_BOTTLEBEER01X"), 0f, 0f, 0f, "SUSAN_BOTTLE", 0, 1, 1);
			iLocal_37 = __LIB_6__::func_958(uParam0, joaat("P_BOTTLEBEER01X"), 0f, 0f, 0f, "KAREN_BOTTLE", 0, 1, 1);
			__LIB_6__::func_958(uParam0, joaat("P_CHAIR_BARREL04B"), -0.584518f, -1.37169f, -0.000602722f, "KAREN_BARREL", 1, 0, 1);
			__LIB_6__::func_958(uParam0, joaat("P_CHAIR_CRATE15X"), 0.441177f, 0.966955f, 0.629509f, "UNCLE_CRATE", 1, 0, 1);
			__LIB_6__::func_958(uParam0, joaat("S_CRATESEAT03X"), -1.28888f, 0.763515f, -0.000335693f, "SUSAN_CRATE", 1, 0, 1);
			iLocal_30 = __LIB_6__::func_958(uParam0, joaat("P_CHAIR_CRATE15X"), 0.636307f, 1.3249f, -0.00391388f, 0, 1, 0, 1);
			__LIB_7__::func_146(uParam0, "CUSK1AU");
			__LIB_6__::func_959(uParam0, "script@vignette@music@uncle_susan_karen_1@intro_base", 1, 1, 0, 0);
			__LIB_6__::func_959(uParam0, "script@vignette@music@uncle_susan_karen_1@action", 0, 0, 1, 0);
			__LIB_7__::func_107(uParam0, iLocal_22, 3, joaat("PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_BADASS"), "PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_BADASS_MALE_D", iLocal_30, 0);
			__LIB_7__::func_127(uParam0, iLocal_22, 3, joaat("PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_BADASS"), "PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_BADASS_MALE_D", iLocal_30, 0, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			__LIB_7__::func_139(uParam0, iLocal_22, iLocal_35, "p_bottleJD01x_ph_r_hand", 0, 0);
			__LIB_7__::func_107(uParam0, iLocal_21, 2, joaat("PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING"), "PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_FEMALE_A", -1, 0);
			__LIB_7__::func_127(uParam0, iLocal_21, 2, joaat("PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING"), "PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_FEMALE_A", -1, 0, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			__LIB_7__::func_139(uParam0, iLocal_21, iLocal_36, "p_bottleBeer01x_PH_R_HAND", 0, 0);
			__LIB_7__::func_107(uParam0, iLocal_18, 2, joaat("PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING"), "PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_FEMALE_B", -1, 0);
			__LIB_7__::func_127(uParam0, iLocal_18, 2, joaat("PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING"), "PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_FEMALE_B", -1, 0, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			__LIB_7__::func_147(uParam0, iLocal_18, 4, 24, 0, 0, 0);
			__LIB_7__::func_139(uParam0, iLocal_18, iLocal_37, "p_bottleBeer01x_PH_R_HAND", 0, 0);
			iLocal_43 = joaat("PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING");
			STREAMING::_REQUEST_SCENARIO_TYPE(iLocal_43, 1, 0, 0);
			break;
		case 473:
			iLocal_22 = __LIB_7__::func_48(uParam0, 4, 0);
			iLocal_21 = __LIB_7__::func_48(uParam0, 19, 0);
			iLocal_18 = __LIB_7__::func_48(uParam0, 20, 0);
			iLocal_17 = __LIB_7__::func_48(uParam0, 2, 0);
			iLocal_34 = __LIB_6__::func_958(uParam0, joaat("P_GUITAR01X"), 0f, 0f, 0f, "GUITAR", 0, 1, 1);
			iLocal_35 = __LIB_6__::func_958(uParam0, joaat("P_BOTTLEBEER01X"), 0f, 0f, 0f, "KAREN_BOTTLE", 0, 1, 1);
			iLocal_36 = __LIB_6__::func_958(uParam0, joaat("P_BOTTLEBEER01X"), 0f, 0f, 0f, "SUSAN_BOTTLE", 0, 1, 1);
			iLocal_37 = __LIB_6__::func_958(uParam0, joaat("P_BOTTLEBEER01X"), 0f, 0f, 0f, "UNCLE_BOTTLE", 0, 1, 1);
			iLocal_28 = __LIB_6__::func_958(uParam0, joaat("P_CHAIR_BARREL04B"), -0.584518f, -1.37169f, -0.000602722f, 0, 1, 0, 1);
			iLocal_29 = __LIB_6__::func_958(uParam0, joaat("P_CHAIR_CRATE02X"), 1.42059f, -0.462698f, 0.000679016f, 0, 1, 0, 1);
			iLocal_30 = __LIB_6__::func_958(uParam0, joaat("P_CHAIR_CRATE15X"), 0.636307f, 1.3249f, -0.00391388f, 0, 1, 0, 1);
			iLocal_31 = __LIB_6__::func_958(uParam0, joaat("S_CRATESEAT03X"), -1.28888f, 0.763515f, -0.000335693f, 0, 1, 0, 1);
			__LIB_7__::func_146(uParam0, "CUNS4AU");
			if (!__LIB_6__::func_206(15))
			{
				__LIB_6__::func_959(uParam0, "script@vignette@music@uncle_susan_karen_and_javier_1@base", 1, 1, 0, 0);
			}
			iLocal_41 = __LIB_6__::func_959(uParam0, "script@vignette@music@uncle_susan_karen_and_javier_1@action", 0, 0, 1, 0);
			if (!__LIB_6__::func_206(15))
			{
				__LIB_7__::func_107(uParam0, iLocal_22, 3, joaat("PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_BADASS_BEER"), "PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_BADASS_BEER_MALE_A", -1, 0);
			}
			__LIB_7__::func_127(uParam0, iLocal_22, 3, joaat("PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_BADASS_BEER"), "PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_BADASS_BEER_MALE_A", iLocal_29, 0, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			__LIB_7__::func_139(uParam0, iLocal_22, iLocal_37, "p_bottleBeer01x_PH_R_HAND", 0, 0);
			if (!__LIB_6__::func_206(15))
			{
				__LIB_7__::func_107(uParam0, iLocal_21, 3, joaat("PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING"), "PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_FEMALE_A", -1, 0);
			}
			__LIB_7__::func_127(uParam0, iLocal_21, 3, joaat("PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING"), "PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_FEMALE_A", iLocal_28, 0, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			__LIB_7__::func_139(uParam0, iLocal_21, iLocal_36, "p_bottleBeer01x_PH_R_HAND", 0, 0);
			if (!__LIB_6__::func_206(15))
			{
				__LIB_7__::func_107(uParam0, iLocal_18, 3, joaat("PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING"), "PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_FEMALE_B", -1, 0);
			}
			__LIB_7__::func_127(uParam0, iLocal_18, 3, joaat("PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING"), "PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING_FEMALE_B", iLocal_31, 0, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			__LIB_7__::func_139(uParam0, iLocal_18, iLocal_35, "p_bottleBeer01x_PH_R_HAND", 0, 0);
			__LIB_7__::func_107(uParam0, iLocal_17, 3, joaat("PROP_HUMAN_SEAT_CHAIR_GUITAR"), "PROP_HUMAN_SEAT_CHAIR_GUITAR_MALE_A", -1, 0);
			__LIB_7__::func_127(uParam0, iLocal_17, 3, joaat("PROP_HUMAN_SEAT_CHAIR_GUITAR"), "PROP_HUMAN_SEAT_CHAIR_GUITAR_MALE_A", iLocal_30, 0, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			__LIB_7__::func_139(uParam0, iLocal_17, iLocal_34, "p_guitar01x_PH_R_HAND", 0, 0);
			__LIB_7__::func_422(uParam0, iLocal_17, 1);
			bLocal_44 = true;
			StringCopy(&cLocal_146, "CUNS4_ARTHUR1", 24);
			if (__LIB_6__::func_206(15))
			{
				__LIB_7__::func_280(uParam0, iLocal_22, 1);
				__LIB_7__::func_108(uParam0, iLocal_22, -1f);
				__LIB_7__::func_227(uParam0, iLocal_17, 1);
				__LIB_7__::func_108(uParam0, iLocal_17, -1f);
				__LIB_7__::func_280(uParam0, iLocal_18, 1);
				__LIB_7__::func_108(uParam0, iLocal_18, -1f);
				__LIB_7__::func_280(uParam0, iLocal_21, 1);
				__LIB_7__::func_108(uParam0, iLocal_21, -1f);
				__LIB_7__::func_168(uParam0);
				__LIB_7__::func_167(uParam0);
				__LIB_7__::func_129(uParam0, 1);
			}
			iLocal_43 = joaat("PROP_HUMAN_SEAT_CHAIR_TABLE_DRINKING");
			STREAMING::_REQUEST_SCENARIO_TYPE(iLocal_43, 1, 0, 0);
			break;
		case 474:
			iLocal_22 = __LIB_7__::func_48(uParam0, 4, 0);
			iLocal_21 = __LIB_7__::func_48(uParam0, 19, 0);
			iLocal_18 = __LIB_7__::func_48(uParam0, 20, 0);
			iLocal_20 = __LIB_7__::func_48(uParam0, 8, 0);
			iLocal_35 = __LIB_6__::func_958(uParam0, joaat("P_BOTTLEJD01X"), 0f, 0f, 0f, "UNCLE_BOTTLE", 0, 0, 1);
			iLocal_36 = __LIB_6__::func_958(uParam0, joaat("P_BOTTLEBEER01X"), 0f, 0f, 0f, "KAREN_BOTTLE", 0, 0, 1);
			iLocal_37 = __LIB_6__::func_958(uParam0, joaat("P_BOTTLEBEER01X"), 0f, 0f, 0f, "SEAN_BOTTLE", 0, 0, 1);
			__LIB_7__::func_146(uParam0, "CUNS2");
			if (!__LIB_6__::func_206(14))
			{
				__LIB_6__::func_959(uParam0, "script@vignette@music@uncle_susan_karen_sean_1@intro_base", 1, 1, 0, 0);
				__LIB_6__::func_959(uParam0, "script@vignette@music@uncle_susan_karen_sean_1@action", 0, 0, 1, 0);
			}
			if (__LIB_6__::func_206(14))
			{
				iLocal_40 = __LIB_6__::func_959(uParam0, "script@vignette@music@uncle_susan_karen_sean_1@entry", 2, 0, 1, 0);
				iLocal_41 = __LIB_6__::func_959(uParam0, "script@vignette@music@uncle_susan_karen_sean_1@action", 0, 0, 0, 0);
			}
			__LIB_7__::func_107(uParam0, iLocal_22, 3, joaat("CC_PROP_CAMP_FIRE_SEATED_DRINKING"), "PROP_CAMP_FIRE_SEATED_DRINKING_WHISKEY_MALE_C", -1, 0);
			__LIB_7__::func_127(uParam0, iLocal_22, 3, joaat("CC_PROP_CAMP_FIRE_SEATED_DRINKING"), "PROP_CAMP_FIRE_SEATED_DRINKING_WHISKEY_MALE_C", -1, 0, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			__LIB_7__::func_139(uParam0, iLocal_22, iLocal_35, "p_bottleJD01x_ph_r_hand", 0, 0);
			__LIB_7__::func_107(uParam0, iLocal_21, 3, joaat("PROP_CAMP_FIRE_SEAT_BENCH"), "PROP_CAMP_FIRE_SEAT_BENCH_FEMALE_A", -1, 0);
			__LIB_7__::func_127(uParam0, iLocal_21, 2, joaat("PROP_CAMP_FIRE_SEAT_BENCH"), "PROP_CAMP_FIRE_SEAT_BENCH_FEMALE_A", -1, 0, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			__LIB_7__::func_139(uParam0, iLocal_18, iLocal_36, "p_bottleBeer01x_PH_R_HAND", 0, 0);
			__LIB_7__::func_107(uParam0, iLocal_20, 3, joaat("CC_PROP_CAMP_FIRE_SEATED_DRINKING"), "PROP_CAMP_FIRE_SEATED_DRINKING_BEER_MALE_A", -1, 0);
			__LIB_7__::func_127(uParam0, iLocal_20, 2, joaat("CC_PROP_CAMP_FIRE_SEATED_DRINKING"), "PROP_CAMP_FIRE_SEATED_DRINKING_BEER_MALE_A", -1, 0, -1073741824 /* Float: -2f */, 1065353216 /* Float: 1f */, 1);
			__LIB_7__::func_139(uParam0, iLocal_20, iLocal_37, "p_bottleBeer01x_PH_R_HAND", 0, 0);
			STREAMING::_REQUEST_SCENARIO_TYPE(joaat("CC_PROP_CAMP_FIRE_SEATED_DRINKING"), 1, 0, 0);
			if (__LIB_6__::func_206(14))
			{
				__LIB_7__::func_168(uParam0);
				__LIB_7__::func_167(uParam0);
				__LIB_7__::func_233(uParam0, iLocal_22, -141.966f, -42.166f, 94.999f, -66.206f, 0, 0);
				__LIB_7__::func_227(uParam0, iLocal_22, 1);
				__LIB_7__::func_108(uParam0, iLocal_22, -1f);
				__LIB_7__::func_172(uParam0, iLocal_22, 1);
				__LIB_7__::func_233(uParam0, iLocal_21, -137.725f, -40.969f, 95.012f, 112.022f, 0, 0);
				__LIB_7__::func_227(uParam0, iLocal_21, 1);
				__LIB_7__::func_108(uParam0, iLocal_21, -1f);
				__LIB_7__::func_172(uParam0, iLocal_21, 1);
				__LIB_7__::func_280(uParam0, iLocal_18, 1);
				__LIB_7__::func_237(uParam0, iLocal_18);
				__LIB_7__::func_233(uParam0, iLocal_20, -140.363f, -39.359f, 95.006f, -176.455f, 0, 0);
				__LIB_7__::func_227(uParam0, iLocal_20, 1);
				__LIB_7__::func_108(uParam0, iLocal_20, -1f);
				__LIB_7__::func_129(uParam0, 1);
				__LIB_4__::func_666(uParam0, 1);
			}
			break;
	}
	if (bLocal_44)
	{
		STREAMING::REQUEST_CLIP_SET("AI_GESTURES@INSTRUMENTS@WHISTLING@120BPM");
		__LIB_0__::func_928(&uLocal_48, Global_35, "ARTHUR", 0);
	}
	if (__LIB_6__::func_206(-1))
	{
		func_185(uParam0, MISC::GET_RANDOM_INT_IN_RANGE(0, uParam0->f_106), "CAMP_SONG_TRANSITION", MISC::GET_RANDOM_INT_IN_RANGE(2, 4));
	}
	return true;
}

bool func_79(var uParam0)
{
	if (iLocal_43 != 0)
	{
		if (STREAMING::_HAS_SCENARIO_TYPE_LOADED(iLocal_43, false))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return true;
}

bool func_80(var uParam0)
{
	if (!PED::_0x5E420FF293EE5472())
	{
		return false;
	}
	if (!func_193(uParam0))
	{
		return false;
	}
	return true;
}

bool func_97(var uParam0)
{
	if (bLocal_44)
	{
		func_223(uParam0);
	}
	switch (__LIB_4__::func_576(uParam0))
	{
		case 438:
			if (__LIB_7__::func_148(uParam0, iLocal_41))
			{
				__LIB_7__::func_113(uParam0, iLocal_14, 1, 1);
				__LIB_7__::func_173(uParam0, iLocal_42, 1);
			}
			if (__LIB_7__::func_40(uParam0, iLocal_42, 0.985f))
			{
				if (ENTITY::DOES_ENTITY_EXIST(__LIB_7__::func_30(uParam0, iLocal_34)))
				{
					__LIB_7__::func_305(uParam0, iLocal_34);
				}
			}
			break;
		case 440:
			if (__LIB_7__::func_148(uParam0, iLocal_41))
			{
				__LIB_7__::func_113(uParam0, iLocal_14, 1, 1);
				__LIB_7__::func_173(uParam0, iLocal_42, 1);
			}
			break;
		case 441:
			if (__LIB_7__::func_40(uParam0, iLocal_41, 0.985f))
			{
				if (ENTITY::DOES_ENTITY_EXIST(__LIB_7__::func_30(uParam0, iLocal_34)))
				{
					__LIB_7__::func_305(uParam0, iLocal_34);
				}
			}
			break;
		case 453:
			if (!bLocal_158)
			{
				bLocal_158 = true;
				iLocal_159 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(__LIB_6__::func_972(uParam0, 3.73538f, 2.82993f, -0.2192f), joaat("WORLD_HUMAN_WASHBOARD"), 2.4f, 0, false);
				if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_159))
				{
					iLocal_160 = TASK::_GET_SCENARIO_POINT_ENTITY(iLocal_159, "p_washboard01x_PH_L_HAND");
					ENTITY::SET_ENTITY_VISIBLE(iLocal_160, false);
				}
			}
			break;
		case 474:
			if (__LIB_6__::func_206(14))
			{
				if (__LIB_7__::func_148(uParam0, iLocal_40))
				{
					__LIB_7__::func_173(uParam0, iLocal_41, 1);
				}
				if (__LIB_7__::func_169(uParam0, iLocal_41))
				{
					__LIB_7__::func_172(uParam0, iLocal_22, 0);
					__LIB_7__::func_172(uParam0, iLocal_21, 0);
				}
			}
			break;
	}
	return true;
}

bool func_99(var uParam0)
{
	switch (__LIB_4__::func_576(uParam0))
	{
		case 453:
			if (bLocal_158 && ENTITY::DOES_ENTITY_EXIST(iLocal_160))
			{
				bLocal_158 = false;
				ENTITY::SET_ENTITY_VISIBLE(iLocal_160, true);
				ENTITY::SET_ENTITY_VISIBLE(__LIB_7__::func_30(uParam0, iLocal_157), false);
			}
			break;
	}
	if ((__LIB_6__::func_206(-1) && !bLocal_150) && !MISC::IS_STRING_NULL_OR_EMPTY(sLocal_156))
	{
		func_238();
		if (func_239())
		{
			func_240(uParam0, iLocal_155, sLocal_156);
			bLocal_150 = true;
		}
		return false;
	}
	return true;
}

int func_153(var uParam0)
{
	switch (__LIB_0__::func_78(uParam0))
	{
		case 1:
			return func_284(uParam0);
		case 2:
			return func_285(uParam0);
		case 3:
			return func_286(uParam0);
		case 6:
			return func_287(uParam0);
		case 8:
			return func_288(uParam0);
		default:
			break;
	}
	return 0;
}

void func_185(var uParam0, int iParam1, char* sParam2, int iParam3)
{
	iLocal_155 = iParam1;
	iLocal_154 = iParam3;
	sLocal_156 = sParam2;
}

bool func_193(var uParam0)
{
	switch (uParam0->f_2245)
	{
		case 0:
			if (uParam0->f_21 || func_295(uParam0))
			{
				__LIB_6__::func_976(uParam0, 1);
				__LIB_7__::func_6(uParam0, uParam0->f_18);
				uParam0->f_2245 = 1;
			}
			break;
		case 1:
			if (__LIB_7__::func_20(uParam0))
			{
				uParam0->f_2245 = 2;
			}
			break;
		case 2:
			if (__LIB_6__::func_977(uParam0))
			{
				uParam0->f_2245 = 3;
			}
			break;
		case 3:
			if (__LIB_6__::func_978(uParam0))
			{
				uParam0->f_2245 = 4;
			}
			break;
		case 4:
			if (__LIB_6__::func_979(uParam0))
			{
				uParam0->f_2245 = 5;
			}
			break;
		case 5:
			if (__LIB_6__::func_980(uParam0))
			{
				uParam0->f_2245 = 6;
			}
			break;
		case 6:
			if (__LIB_7__::func_59(uParam0))
			{
				uParam0->f_2245 = 7;
			}
			break;
		case 7:
			if (__LIB_7__::func_60(uParam0))
			{
				uParam0->f_2245 = 8;
			}
			break;
		case 8:
			if (__LIB_7__::func_36(uParam0))
			{
				uParam0->f_2245 = 9;
			}
			break;
		case 9:
			if (__LIB_6__::func_981(uParam0))
			{
				uParam0->f_2245 = 10;
			}
			break;
		case 10:
			if (func_295(uParam0))
			{
				uParam0->f_2245 = 11;
			}
			break;
		case 11:
			return true;
	}
	return false;
}

void func_223(var uParam0)
{
	if (!__LIB_7__::func_40(uParam0, iLocal_41, 0.075f))
	{
		return;
	}
	if (!bLocal_149)
	{
		if (__LIB_7__::func_40(uParam0, iLocal_41, 0.9f))
		{
			__LIB_1__::func_281(&iLocal_45, 1, 1);
			return;
		}
	}
	if (__LIB_7__::func_37(__LIB_4__::func_576(uParam0)))
	{
		if (bLocal_149)
		{
			func_336(uParam0);
		}
		__LIB_1__::func_281(&iLocal_45, 1, 1);
		return;
	}
	if (!__LIB_0__::func_139(iLocal_45))
	{
		if (bLocal_149)
		{
			iLocal_45 = __LIB_1__::func_282(sLocal_47, joaat("INPUT_CONTEXT_X"), __LIB_6__::func_972(uParam0, 0f, 0f, 0f), 40f, 1, 0, 0, 4, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
		}
		else
		{
			iLocal_45 = __LIB_1__::func_282(sLocal_46, joaat("INPUT_CONTEXT_X"), __LIB_6__::func_972(uParam0, 0f, 0f, 0f), 7f, 1, 0, 0, 4, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
		}
	}
	if (__LIB_0__::func_567(iLocal_45, 1))
	{
		if (bLocal_149)
		{
			func_336(uParam0);
		}
		else
		{
			func_339(uParam0);
		}
	}
	if (bLocal_149)
	{
		__LIB_6__::func_968();
		PED::SET_PED_GESTURE_GROUP(Global_35, "AI_GESTURES@INSTRUMENTS@WHISTLING@120BPM", 1);
		PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(Global_35, 1, 1);
		if (!__LIB_0__::func_266(Global_35, uParam0->f_23, 30f, 1, 1))
		{
			func_336(uParam0);
		}
	}
}

void func_238()
{
	if (!__LIB_0__::func_75(&uLocal_151))
	{
		__LIB_1__::func_283(&uLocal_151, 0);
	}
}

bool func_239()
{
	if (!__LIB_0__::func_75(&uLocal_151))
	{
		return false;
	}
	if (__LIB_0__::func_265(&uLocal_151) <= IntToFloat(iLocal_154))
	{
		return false;
	}
	return true;
}

void func_240(var uParam0, int iParam1, char* sParam2)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(__LIB_6__::func_952(uParam0, iParam1)))
	{
		return;
	}
	__LIB_1__::func_265(__LIB_6__::func_952(uParam0, iParam1), sParam2, joaat("SPEECH_PARAMS_STANDARD"), 0, 1, 0, 0, 1);
}

int func_284(var uParam0)
{
	switch (__LIB_4__::func_576(uParam0))
	{
		case 434:
			__LIB_7__::func_116(uParam0, -111.703f, -41.545f, 94.86f, 0f, 0f, -38.16f);
			break;
		case 431:
		case 432:
		case 433:
		case 435:
		case 436:
		case 442:
		case 445:
		case 446:
		case 447:
		case 450:
		case 463:
		case 467:
		case 468:
		case 471:
		case 474:
			__LIB_7__::func_45(uParam0, 117, 0, 0, 0);
			break;
		case 449:
		case 451:
			__LIB_7__::func_45(uParam0, 118, 0, 0, 0);
			break;
		case 443:
		case 444:
		case 448:
		case 452:
		case 460:
		case 461:
		case 462:
		case 464:
		case 465:
		case 466:
		case 469:
		case 470:
		case 472:
		case 473:
			__LIB_7__::func_45(uParam0, 154, 0, 0, 0);
			break;
		case 454:
		case 455:
			__LIB_7__::func_45(uParam0, 144, 0, 0, 0);
			break;
		default:
			return 0;
	}
	return 1;
}

int func_285(var uParam0)
{
	switch (__LIB_4__::func_576(uParam0))
	{
		case 431:
		case 432:
		case 433:
		case 434:
		case 435:
		case 436:
		case 442:
		case 445:
		case 446:
		case 447:
		case 450:
		case 463:
		case 467:
		case 468:
		case 471:
			__LIB_7__::func_45(uParam0, 54, 0, 0, 0);
			break;
		case 449:
			__LIB_7__::func_45(uParam0, 55, 0, 0, 0);
			break;
		case 443:
		case 444:
		case 448:
		case 452:
		case 460:
		case 461:
		case 462:
		case 464:
		case 465:
		case 466:
		case 469:
		case 470:
		case 472:
		case 473:
			__LIB_7__::func_45(uParam0, 85, 0, 0, 0);
			break;
		case 454:
		case 455:
			__LIB_7__::func_45(uParam0, 77, 0, 0, 0);
			break;
		default:
			return 0;
	}
	return 1;
}

int func_286(var uParam0)
{
	switch (__LIB_4__::func_576(uParam0))
	{
		case 434:
			__LIB_7__::func_116(uParam0, 1865.917f, -1858.268f, 42.133f, 0f, 0f, -120.97f);
			break;
		case 431:
		case 432:
		case 433:
		case 435:
		case 436:
		case 442:
		case 450:
		case 463:
		case 468:
			__LIB_7__::func_45(uParam0, 186, 0, 0, 0);
			break;
		case 449:
			__LIB_7__::func_45(uParam0, 187, 0, 0, 0);
			break;
		case 444:
		case 452:
		case 460:
		case 461:
		case 462:
		case 464:
		case 465:
		case 473:
			__LIB_7__::func_45(uParam0, 213, 0, 0, 0);
			break;
		case 453:
		case 454:
		case 455:
			__LIB_7__::func_45(uParam0, 200, 0, 0, 0);
			break;
		default:
			return 0;
	}
	return 1;
}

int func_287(var uParam0)
{
	switch (__LIB_4__::func_576(uParam0))
	{
		case 431:
		case 432:
		case 433:
		case 434:
		case 435:
		case 436:
		case 442:
		case 463:
			__LIB_7__::func_45(uParam0, 0, 0, 0, 0);
			break;
		case 449:
			__LIB_7__::func_45(uParam0, 1, 0, 0, 0);
			break;
		case 444:
		case 452:
		case 460:
		case 461:
		case 462:
		case 464:
		case 465:
		case 473:
			__LIB_7__::func_45(uParam0, 19, 0, 0, 0);
			break;
		case 454:
		case 455:
			__LIB_7__::func_45(uParam0, 12, 0, 0, 0);
			break;
		case 450:
			__LIB_7__::func_116(uParam0, 2371.574f, 1353.805f, 105.155f, 0f, 0f, -14.125f);
			break;
		default:
			return 0;
	}
	return 1;
}

int func_288(var uParam0)
{
	switch (__LIB_4__::func_576(uParam0))
	{
		case 427:
		case 428:
		case 430:
		case 437:
		case 439:
		case 441:
			__LIB_7__::func_45(uParam0, 24, 0, 0, 0);
			break;
		case 429:
		case 438:
		case 440:
			__LIB_7__::func_45(uParam0, 33, 0, 0, 0);
			break;
		default:
			return 0;
	}
	return 1;
}

bool func_295(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < uParam0->f_106)
	{
		if (__LIB_1__::func_22(uParam0->f_107[iVar1 /*113*/].f_1))
		{
		}
		else
		{
			if (__LIB_0__::func_31(uParam0->f_107[iVar1 /*113*/].f_7))
			{
				if (__LIB_0__::func_212(uParam0->f_107[iVar1 /*113*/].f_7) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_107[iVar1 /*113*/].f_5))
				{
				}
				else
				{
					uParam0->f_107[iVar1 /*113*/].f_5 = func_368(uParam0->f_107[iVar1 /*113*/].f_7, 1, 1, 0, 0, 1, 1, uParam0->f_107[iVar1 /*113*/].f_6, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					return false;
					if (uParam0->f_107[iVar1 /*113*/].f_102 || uParam0->f_107[iVar1 /*113*/].f_103)
					{
						if (!__LIB_0__::func_31(uParam0->f_107[iVar1 /*113*/].f_1))
						{
							if (uParam0->f_107[iVar1 /*113*/].f_103)
							{
								uParam0->f_107[iVar1 /*113*/].f_1 = __LIB_7__::func_82(uParam0, 1, 1);
							}
							else
							{
								uParam0->f_107[iVar1 /*113*/].f_1 = __LIB_7__::func_82(uParam0, 1, 0);
							}
						}
						if (!__LIB_0__::func_31(uParam0->f_107[iVar1 /*113*/].f_1))
						{
							if (uParam0->f_107[iVar1 /*113*/].f_103)
							{
								Jump @330; //curOff = 280
							}
							else
							{
								return false;
							}
						}
					}
					if (!func_370(uParam0, iVar1, uParam0->f_107[iVar1 /*113*/].f_1))
					{
						if (!uParam0->f_21)
						{
							return false;
						}
						else
						{
							iVar0 = 0;
						}
					}
				}
				iVar1++;
				return iVar0;
			}
		}
	}
}

void func_336(var uParam0)
{
	__LIB_5__::func_239(&cLocal_146, 1, 0);
	__LIB_1__::func_281(&iLocal_45, 1, 1);
	iLocal_45 = __LIB_1__::func_282(sLocal_46, joaat("INPUT_CONTEXT_X"), __LIB_6__::func_972(uParam0, 0f, 0f, 0f), 7f, 1, 0, 0, 4, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
	if (__LIB_6__::func_943(__LIB_4__::func_576(uParam0)))
	{
		__LIB_6__::func_944();
	}
	bLocal_149 = false;
}

void func_339(var uParam0)
{
	if (__LIB_1__::func_104(&uLocal_48, cLocal_146, 0, -1, 0, 0))
	{
		AUDIO::_0x79F9C57B8D0DFE90(&cLocal_146, uParam0->f_2046);
		__LIB_1__::func_281(&iLocal_45, 1, 1);
		iLocal_45 = __LIB_1__::func_282(sLocal_47, joaat("INPUT_CONTEXT_X"), __LIB_6__::func_972(uParam0, 0f, 0f, 0f), 40f, 1, 0, 0, 4, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
		if (!__LIB_7__::func_37(-1))
		{
			__LIB_6__::func_989(__LIB_4__::func_576(uParam0));
		}
		bLocal_149 = true;
	}
}

int func_368(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13, bool bParam14, bool bParam15, int iParam16)
{
	var uVar0;
	int iVar1;
	if (!__LIB_0__::func_49(iParam0))
	{
		return 0;
	}
	iVar1 = func_410(&uVar0, iParam0, bParam1, bParam2, iParam3, iParam4, iParam5, bParam7, bParam8, iParam9, iParam10, iParam11, iParam12, bParam13, bParam14, bParam15, bParam6, iParam16);
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

bool func_370(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	if (!__LIB_0__::func_31(iParam2))
	{
		return true;
	}
	if (__LIB_0__::func_699(iParam2))
	{
		return false;
	}
	iVar0 = __LIB_6__::func_955(uParam0->f_7);
	if (!__LIB_1__::func_302(iParam2, iVar0))
	{
		__LIB_7__::func_23(iParam2, iVar0, uParam0->f_3, -1);
		return false;
	}
	iVar1 = func_420(iParam2, 1, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return false;
	}
	uParam0->f_107[iParam1 /*113*/].f_5 = iVar1;
	POPULATION::_0xF74E134F40192884(iVar1, 1);
	__LIB_0__::func_288(iParam2, 45, 1);
	return true;
}

int func_410(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17)
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
				iVar0 = func_441(iParam1, bParam3, bParam8, iParam9, iParam10, iParam11, iParam12, bParam7, bParam15, bParam16, iParam17);
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

int func_420(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
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
				func_452(Global_1360165[iParam0 /*1157*/], vVar0, iParam6, 2, 1073741824 /* Float: 2f */);
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
			__LIB_3__::func_921(iParam0, Global_1360165[iParam0 /*1157*/]);
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

int func_441(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)
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
				func_452(Global_1360165[iParam0 /*1157*/].f_124, vVar0, iParam6, 2, 1073741824 /* Float: 2f */);
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

void func_452(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_452(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_452(iVar2, vParam1, fParam4, iParam5, iParam6);
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

