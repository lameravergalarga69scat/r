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
	struct<7> Local_14 = { 0, 0, 0, 1, 0, 0, 8 } ;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	var uLocal_31 = -1;
	var uLocal_32 = 0;
	var uLocal_33 = -1;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = -1;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 1073741824;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 1;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 1106247680;
	var uLocal_57 = 1067450368;
	var uLocal_58 = 0;
	var uLocal_59 = 1092616192;
	var uLocal_60 = 1112014848;
	var uLocal_61 = 1106247680;
	var uLocal_62 = 1101529088;
	var uLocal_63 = 1101004800;
	var uLocal_64 = 1084227584;
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
	struct<17> Local_91[1];
	var uLocal_109[3] = { 0, 0, 0 };
	int iLocal_113[3] = { 0, 0, 0 };
	int iLocal_117 = 0;
	int iLocal_118[3] = { 0, 0, 0 };
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
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
	int iLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	int iLocal_148 = 0;
	char[] cLocal_149[8] = 0;
	char* sLocal_150 = NULL;
	char* sLocal_151 = NULL;
	int iLocal_152 = 0;
	char[] cLocal_153[8] = 0;
	char* sLocal_154 = NULL;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	struct<2907> Local_157 = { 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1101004800, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 30, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1084227584, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_3064 = 0;
	var uLocal_3065 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = -1;
	var uScriptParam_2 = 0;
#endregion
void __EntryFunction__()
{
	bool bVar0;
	struct<4> Var1;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	cLocal_149 = "script@story@mud5@leadin@int@base_co_leadin";
	sLocal_150 = "pl_base_leadin";
	sLocal_151 = "pl_CO_wave_base";
	cLocal_153 = "script@story@mud5@leadin@int@lenny_enter";
	sLocal_154 = "PL_LENNY_ENTER_IDLE";
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		if (__LIB_5__::func_203(Local_157))
		{
			__LIB_0__::func_8(&Global_1935630, 32768);
		}
		func_3(&Local_157, 1);
	}
	__LIB_5__::func_610(&uScriptParam_0, &Local_157);
	while (!__LIB_2__::func_27(&Local_157, 1))
	{
		if (__LIB_4__::func_721(&Local_157) != 10)
		{
			if ((__LIB_4__::func_721(&Local_157) == 3 || __LIB_4__::func_721(&Local_157) == 4) && (!__LIB_5__::func_132(&Local_157) || __LIB_0__::func_78(&(Local_157.f_958)) > 0))
			{
				__LIB_7__::func_446(&Local_157, __LIB_2__::func_27(&Local_157, 67108864));
				bVar0 = true;
			}
			if ((!bVar0 && __LIB_5__::func_204(&Local_157)) && __LIB_2__::func_27(&Local_157, 65536))
			{
				__LIB_7__::func_446(&Local_157, 1);
			}
		}
		if (__LIB_4__::func_721(&Local_157) >= 3 && __LIB_4__::func_721(&Local_157) <= 7)
		{
			__LIB_5__::func_525(&Local_157);
		}
		if (((((__LIB_4__::func_721(&Local_157) >= 5 && __LIB_4__::func_721(&Local_157) <= 7) && !__LIB_2__::func_27(&Local_157, 4096)) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_157.f_428.f_444)) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_157.f_428.f_444, false)) && !ANIMSCENE::_IS_ANIM_SCENE_PAUSED(Local_157.f_428.f_444))
		{
			MemCopy(&Var1, {__LIB_4__::func_681(Local_157)}, 4);
			func_13(Var1, &(Local_157.f_428));
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SKIP_CUTSCENE"), false);
		}
		switch (__LIB_4__::func_721(&Local_157))
		{
			case 8:
				if (__LIB_11__::func_653(&Local_157))
				{
					__LIB_5__::func_536(&Local_157);
					__LIB_0__::func_0(&Local_157);
					__LIB_4__::func_722(&Local_157, 0);
				}
				else if (!__LIB_5__::func_204(&Local_157))
				{
					if (!__LIB_0__::func_75(&(Local_157.f_2899)))
					{
						__LIB_1__::func_283(&(Local_157.f_2899), 0);
					}
					if (!__LIB_5__::func_216(&Local_157))
					{
						if (__LIB_0__::func_264(&(Local_157.f_2899)) >= 1f)
						{
							__LIB_1__::func_109(Local_157.f_2889, 2097152);
							__LIB_5__::func_174(&Local_157);
							__LIB_5__::func_608(&Local_157);
							__LIB_4__::func_722(&Local_157, 10);
						}
					}
					else
					{
						if (!__LIB_2__::func_27(&Local_157, 536870912))
						{
							CLOCK::PAUSE_CLOCK(true, 0);
							__LIB_5__::func_410(&Local_157, 536870912);
						}
						__LIB_1__::func_148(&(Local_157.f_2899));
					}
				}
				break;
			case 0:
				if (__LIB_5__::func_204(&Local_157))
				{
					__LIB_0__::func_0(&Local_157);
				}
				if (!__LIB_5__::func_204(&Local_157) || __LIB_2__::func_27(&Local_157, 65536))
				{
					if (func_27(&Local_157))
					{
						__LIB_4__::func_722(&Local_157, 1);
					}
				}
				break;
			case 1:
				if (__LIB_5__::func_204(&Local_157))
				{
					__LIB_0__::func_0(&Local_157);
				}
				if (func_28(&Local_157))
				{
					__LIB_4__::func_722(&Local_157, 2);
				}
				break;
			case 2:
				if (__LIB_5__::func_204(&Local_157))
				{
					__LIB_0__::func_0(&Local_157);
				}
				if (func_29(&Local_157))
				{
					if (!__LIB_5__::func_132(&Local_157) || __LIB_5__::func_204(&Local_157))
					{
						if (!__LIB_0__::func_79(Local_157.f_2889))
						{
							Local_157.f_2889 = __LIB_0__::func_80(__LIB_3__::func_918(Local_157));
						}
						__LIB_1__::func_109(Local_157.f_2889, 4);
						__LIB_5__::func_410(&Local_157, 8192);
					}
					if (__LIB_5__::func_204(&Local_157))
					{
						__LIB_5__::func_175(&Local_157);
						__LIB_4__::func_722(&Local_157, 9);
					}
					else
					{
						__LIB_4__::func_722(&Local_157, 3);
					}
				}
				break;
			case 9:
				if (__LIB_0__::func_0(&Local_157))
				{
					__LIB_0__::func_11(&Local_157);
					__LIB_5__::func_536(&Local_157);
					__LIB_6__::func_926(&Local_157);
					if (!__LIB_2__::func_27(&Local_157, 256))
					{
						func_36(&Local_157);
						__LIB_5__::func_227(Local_157);
						func_38(&Local_157);
						__LIB_4__::func_722(&Local_157, 7);
					}
					else
					{
						__LIB_4__::func_722(&Local_157, 5);
					}
				}
				break;
			case 3:
				if (!__LIB_2__::func_27(&Local_157, 8192))
				{
					if (__LIB_0__::func_78(&(Local_157.f_958)) == 3)
					{
						__LIB_1__::func_109(Local_157.f_2889, 4);
						__LIB_5__::func_410(&Local_157, 8192);
					}
				}
				func_39(&Local_157);
				if (__LIB_3__::func_919(__LIB_0__::func_80(Global_1835011[Local_157 /*74*/].f_1), 512))
				{
				}
				else if (func_41(&Local_157) || __LIB_5__::func_176(&Local_157, 32768))
				{
					__LIB_0__::func_11(&Local_157);
					__LIB_5__::func_536(&Local_157);
					__LIB_4__::func_722(&Local_157, 4);
					__LIB_1__::func_283(&(Local_157.f_2890), 0);
				}
				else if (__LIB_5__::func_204(&Local_157) && !__LIB_5__::func_203(Local_157))
				{
					if (!__LIB_0__::func_75(&(Local_157.f_2899)))
					{
						__LIB_1__::func_283(&(Local_157.f_2899), 0);
					}
					if (!__LIB_5__::func_216(&Local_157))
					{
						if (__LIB_0__::func_264(&(Local_157.f_2899)) >= 1f)
						{
							__LIB_1__::func_109(Local_157.f_2889, 2097152);
							__LIB_5__::func_174(&Local_157);
							__LIB_5__::func_608(&Local_157);
							__LIB_4__::func_722(&Local_157, 10);
						}
					}
					else
					{
						if (!__LIB_2__::func_27(&Local_157, 536870912))
						{
							CLOCK::PAUSE_CLOCK(true, 0);
							__LIB_5__::func_410(&Local_157, 536870912);
						}
						__LIB_1__::func_148(&(Local_157.f_2899));
					}
				}
				break;
			case 4:
				__LIB_0__::func_11(&Local_157);
				PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
				if (func_44(&Local_157) || (__LIB_5__::func_176(&Local_157, 32768) && !__LIB_2__::func_27(&Local_157, 268435456)))
				{
					__LIB_6__::func_926(&Local_157);
					if (!__LIB_2__::func_27(&Local_157, 256))
					{
						func_36(&Local_157);
						func_38(&Local_157);
						if (!__LIB_0__::func_1(Global_1935630, 524288) || __LIB_5__::func_176(&Local_157, 524288))
						{
							__LIB_5__::func_227(Local_157);
							__LIB_4__::func_722(&Local_157, 7);
						}
						else
						{
							__LIB_4__::func_722(&Local_157, 6);
						}
					}
					else
					{
						__LIB_5__::func_227(Local_157);
						__LIB_4__::func_722(&Local_157, 5);
					}
				}
				break;
			case 5:
				__LIB_0__::func_11(&Local_157);
				__LIB_5__::func_526(&Local_157);
				if (__LIB_0__::func_265(&(Local_157.f_2884)) >= __LIB_4__::func_723(&Local_157))
				{
					func_36(&Local_157);
					func_38(&Local_157);
					__LIB_1__::func_148(&(Local_157.f_2884));
					if (!__LIB_5__::func_176(&Local_157, 524288))
					{
						__LIB_5__::func_227(Local_157);
						__LIB_4__::func_722(&Local_157, 7);
					}
					else
					{
						__LIB_4__::func_722(&Local_157, 6);
					}
				}
				break;
			case 6:
				if (!__LIB_0__::func_75(&(Local_157.f_2906)))
				{
					__LIB_1__::func_283(&(Local_157.f_2906), 0);
				}
				if ((__LIB_0__::func_81(&(Local_157.f_428)) == 4 && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_157.f_428.f_444)) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(Local_157.f_428.f_444))
				{
					__LIB_5__::func_227(Local_157);
					__LIB_4__::func_722(&Local_157, 7);
				}
				else if (__LIB_0__::func_265(&(Local_157.f_2906)) >= 5f)
				{
					__LIB_5__::func_227(Local_157);
					__LIB_4__::func_722(&Local_157, 7);
				}
				break;
			case 7:
				__LIB_0__::func_11(&Local_157);
				if (__LIB_5__::func_530(&Local_157))
				{
					__LIB_4__::func_722(&Local_157, 10);
				}
				break;
			case 10:
				if (func_3(&Local_157, 0))
				{
					__LIB_5__::func_410(&Local_157, 1);
				}
				break;
		}
		BUILTIN::WAIT(0);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_3(int iParam0, bool bParam1)
{
	iParam0->f_2902 = bParam1;
	if (!func_53(iParam0) && !bParam1)
	{
		return false;
	}
	__LIB_5__::func_217(iParam0);
	func_55(iParam0);
	__LIB_5__::func_611(iParam0);
	__LIB_5__::func_224(iParam0);
	__LIB_4__::func_724(iParam0);
	__LIB_4__::func_776(*iParam0);
	__LIB_4__::func_777(*iParam0);
	if (ITEMSET::IS_ITEMSET_VALID(iParam0->f_5))
	{
		ITEMSET::DESTROY_ITEMSET(iParam0->f_5);
	}
	if (!Global_1935630.f_12)
	{
		TASK::TASK_CLEAR_LOOK_AT(Global_35);
	}
	if (__LIB_2__::func_27(iParam0, 1024))
	{
		__LIB_0__::func_733(1);
		__LIB_0__::func_8(&Global_1935630, 32768);
	}
	else
	{
		__LIB_5__::func_177();
	}
	if (bParam1)
	{
		if (__LIB_4__::func_725(&(iParam0->f_958), 33554436) && !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
		}
		__LIB_5__::func_133(&(iParam0->f_958));
	}
	__LIB_4__::func_726(iParam0, 0);
	if (__LIB_2__::func_27(iParam0, 536870912))
	{
		CLOCK::PAUSE_CLOCK(false, 0);
		__LIB_4__::func_727(iParam0, 536870912);
	}
	if (bParam1)
	{
		__LIB_0__::func_82(1, 0, 0);
	}
	if (__LIB_2__::func_27(iParam0, -2147483648))
	{
		__LIB_5__::func_206();
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
	return true;
}

int func_13(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	int iVar0;
	__LIB_4__::func_779(uParam4, &uParam0);
	if (__LIB_0__::func_84(uParam4, 2) && !__LIB_0__::func_84(uParam4, 67108864))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SKIP_CUTSCENE"), false);
	}
	if (__LIB_0__::func_81(uParam4) != 1)
	{
		__LIB_5__::func_225(uParam4);
	}
	POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	PED::SET_PED_RESET_FLAG(Global_35, 134, true);
	HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
	switch (__LIB_0__::func_81(uParam4))
	{
		case 1:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_444) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam4->f_444, true, false))
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam4->f_444, false))
				{
					__LIB_5__::func_603(uParam4, &uParam0);
				}
				else if (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_444))
				{
					__LIB_1__::func_747(uParam4, 4);
					return 0;
				}
				else if (__LIB_4__::func_729(uParam4, 2))
				{
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_437);
				}
				__LIB_1__::func_747(uParam4, 3);
			}
			else if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_444))
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_446)) && __LIB_0__::func_84(uParam4, 134217728))
				{
				}
				else
				{
					__LIB_5__::func_411(uParam4);
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
				__LIB_5__::func_412(uParam4);
				if (!__LIB_0__::func_75(&(uParam4->f_1)))
				{
					__LIB_1__::func_283(&(uParam4->f_1), 0);
				}
				else if (__LIB_0__::func_265(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_444))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_444);
					}
					__LIB_1__::func_747(uParam4, 4);
				}
			}
			break;
		case 2:
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_444) || !ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam4->f_444, true, false))
			{
				if (__LIB_5__::func_518(uParam4, &uParam0, 1, 1))
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam4->f_444, true, false))
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
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_444))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_444);
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
					__LIB_5__::func_603(uParam4, &uParam0);
					__LIB_1__::func_747(uParam4, 3);
				}
				else
				{
					SCRIPTS::SHUTDOWN_LOADING_SCREEN();
				}
			}
			else if (__LIB_0__::func_265(&(uParam4->f_1)) >= 60f)
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_444))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_444);
				}
				__LIB_1__::func_747(uParam4, 4);
			}
			break;
		case 3:
			func_94(uParam4);
			if (__LIB_4__::func_729(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_437);
			}
			if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_444) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam4->f_444, false)) && (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_444) || __LIB_0__::func_84(uParam4, 512)))
			{
				if (!__LIB_0__::func_84(uParam4, 1024) && __LIB_4__::func_780(uParam4, 1))
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
				__LIB_5__::func_225(uParam4);
			}
			if (__LIB_0__::func_84(uParam4, 524288))
			{
				if (IntToFloat(MISC::ABSI((__LIB_4__::func_730(uParam4) - __LIB_4__::func_731(uParam4)))) <= 2f)
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_444))
				{
					if (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_444))
					{
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
					}
				}
				if (__LIB_4__::func_781(uParam4, Global_35, 4))
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
				if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) && __LIB_4__::func_731(uParam4) > 5000)
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
			}
			if (__LIB_4__::func_732(uParam4))
			{
				if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_444))
				{
				}
				__LIB_0__::func_488(uParam4);
				__LIB_5__::func_613(uParam4);
				return 1;
			}
			else
			{
				if (__LIB_0__::func_84(uParam4, 67108864))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						if (!ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_444) && !ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_444))
						{
							ANIMSCENE::_DELETE_ANIM_SCENE_2(uParam4->f_444);
						}
						__LIB_1__::func_148(&(uParam4->f_1));
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
						__LIB_0__::func_88(uParam4, 512);
						__LIB_4__::func_733(uParam4, 67108864, 1);
						__LIB_1__::func_747(uParam4, 4);
					}
					else if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(1000);
					}
				}
				else if ((((!__LIB_0__::func_84(uParam4, 16384) && !ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_444)) && CAM::IS_SCREEN_FADED_OUT()) && __LIB_4__::func_731(uParam4) <= 5000) && __LIB_4__::func_731(uParam4) >= 0)
				{
					CAM::DO_SCREEN_FADE_IN(1000);
				}
				if (!__LIB_0__::func_84(uParam4, 536870912) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1495039362))
				{
					__LIB_5__::func_430(&(uParam4->f_501), 0);
					__LIB_0__::func_88(uParam4, 536870912);
				}
				if (__LIB_4__::func_731(uParam4) >= 5000 && __LIB_4__::func_731(uParam4) <= (__LIB_4__::func_730(uParam4) - 5000))
				{
					__LIB_0__::func_89();
				}
			}
			break;
		case 6:
			if (__LIB_4__::func_732(uParam4))
			{
				__LIB_0__::func_488(uParam4);
				__LIB_5__::func_613(uParam4);
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
					if (ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_444))
					{
						__LIB_0__::func_88(uParam4, 1073741824 /* Float: 2f */);
					}
				}
			}
			else
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_444))
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_444))
					{
						ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_444, true);
						if (UIFEED::_0xC17F69E1418CD11F(9) != 0)
						{
							UIFEED::_0xDD1232B332CBB9E7(9, 1, 0);
						}
						return 0;
					}
					else if (ANIMSCENE::_0x4CDFFE3189EBDBD0(uParam4->f_444))
					{
						return 0;
					}
				}
				if (iVar0 == 0)
				{
					Stack.Push(!__LIB_4__::func_729(uParam4, 4));
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_438);
					if (StackVal || StackVal)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_444) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_444))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_444, false);
						}
						__LIB_1__::func_747(uParam4, 3);
					}
					else if (__LIB_0__::func_265(&(uParam4->f_1)) >= 30f)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_444) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_444))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_444, false);
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

bool func_27(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	if (!ITEMSET::IS_ITEMSET_VALID(iParam0->f_5))
	{
		iParam0->f_5 = ITEMSET::CREATE_ITEMSET(true);
	}
	if (!ITEMSET::IS_ITEMSET_VALID(iParam0->f_6))
	{
		iParam0->f_6 = ITEMSET::CREATE_ITEMSET(true);
	}
	if (!ITEMSET::IS_ITEMSET_VALID(iParam0->f_7))
	{
		iParam0->f_7 = ITEMSET::CREATE_ITEMSET(true);
	}
	__LIB_5__::func_425(*iParam0, iParam0->f_5, iParam0->f_6, iParam0->f_7);
	if (__LIB_0__::func_86(__LIB_5__::func_134(iParam0)))
	{
		vVar0 = { __LIB_4__::func_681(*iParam0) };
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&vVar0))
		{
			StringCopy(&(iParam0->f_428.f_440), "cutscene@", 32);
			StringConCat(&(iParam0->f_428.f_440), &vVar0, 32);
			vVar3 = { __LIB_5__::func_207(&(iParam0->f_428)) };
			if (!__LIB_0__::func_86(vVar3))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar3, __LIB_1__::func_469(*iParam0), true) >= 10f)
				{
					__LIB_5__::func_181(iParam0, __LIB_1__::func_469(*iParam0));
				}
				else
				{
					__LIB_5__::func_181(iParam0, vVar3);
				}
			}
			else
			{
				return false;
			}
		}
	}
	if (!func_128(iParam0))
	{
		return false;
	}
	iParam0->f_55.f_1 = 67108863;
	iParam0->f_55 = 2;
	iParam0->f_55 = 1;
	__LIB_5__::func_531(iParam0);
	__LIB_11__::func_94(iParam0);
	__LIB_6__::func_925(iParam0);
	__LIB_5__::func_609(iParam0, Global_35, 0, 0, 0, 1);
	__LIB_5__::func_604(iParam0);
	__LIB_5__::func_182(iParam0);
	return true;
}

bool func_28(int iParam0)
{
	int iVar0;
	iVar0 = 1;
	if (!__LIB_5__::func_528(iParam0))
	{
		iVar0 = 0;
	}
	if (!func_135(iParam0, 0))
	{
		iVar0 = 0;
	}
	if (!__LIB_2__::func_27(iParam0, 1073741824 /* Float: 2f */) && !__LIB_5__::func_347(*iParam0, 0))
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_29(int iParam0)
{
	int iVar0;
	int iVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(uLocal_109[2]))
	{
		return false;
	}
	HUD::_TEXT_DATABASE_REQUEST("cbbr1au");
	PED::SET_PED_CAN_BE_TARGETTED(uLocal_109[2], true);
	PED::SET_PED_CAN_BE_TARGETTED(uLocal_109[0], false);
	PED::SET_PED_CAN_BE_TARGETTED(uLocal_109[1], false);
	PED::SET_PED_CAN_BE_TARGETTED(__LIB_3__::func_568(Local_14.f_3[0], 1), false);
	PED::SET_PED_CAN_BE_TARGETTED(__LIB_3__::func_568(Local_14.f_3[0], 0), false);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(__LIB_3__::func_568(Local_14.f_3[0], 1), joaat("REL_PLAYER_ALLY"));
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(__LIB_3__::func_568(Local_14.f_3[0], 0), joaat("REL_PLAYER_ALLY"));
	PED::SET_PED_FLEE_ATTRIBUTES(__LIB_3__::func_568(Local_14.f_3[0], 1), 512, true);
	PED::SET_PED_FLEE_ATTRIBUTES(__LIB_3__::func_568(Local_14.f_3[0], 0), 512, true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(__LIB_3__::func_568(Local_14.f_3[0], 1), true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(__LIB_3__::func_568(Local_14.f_3[0], 0), true);
	TASK::TASK_STAND_STILL(__LIB_3__::func_568(Local_14.f_3[0], 1), -1);
	TASK::TASK_STAND_STILL(__LIB_3__::func_568(Local_14.f_3[0], 0), -1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(Local_14.f_3[0], iVar0);
		PED::SET_PED_CAN_BE_TARGETTED(iVar1, false);
		iVar0++;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_127))
	{
		iLocal_127 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), 720.8f, -1242.8f, 45.2f, 0f, 0f, 0f, 1.2f, 1.2f, 1f);
	}
	__LIB_9__::func_73(iParam0, 30f);
	__LIB_9__::func_74(iParam0, 50f);
	__LIB_11__::func_559(iLocal_148, "ARTHUR", Global_35);
	__LIB_11__::func_559(iLocal_148, "BillWilliamson", uLocal_109[2]);
	__LIB_11__::func_559(iLocal_148, "Karen", uLocal_109[0]);
	__LIB_11__::func_559(iLocal_148, "CHUCKWAGON002X", Local_14.f_3[0]);
	__LIB_11__::func_559(iLocal_148, "w_stick_dynamite01", Local_14.f_6[0]);
	__LIB_11__::func_559(iLocal_148, "w_stick_dynamite01^1", Local_14.f_6[1]);
	__LIB_11__::func_559(iLocal_148, "p_matchstick01x", Local_14.f_6[2]);
	__LIB_11__::func_559(iLocal_148, "w_melee_knife02", Local_14.f_6[3]);
	__LIB_11__::func_559(iLocal_148, "w_melee_knife02^1", Local_14.f_6[4]);
	__LIB_11__::func_559(iLocal_148, "P_CS_DUSTERARTHUR01X", Local_14.f_6[5]);
	__LIB_11__::func_559(iLocal_148, "P_CS_DUSTERBILL01X", Local_14.f_6[6]);
	__LIB_11__::func_559(iLocal_148, "P_CS_DUSTERLENNY01X", Local_14.f_6[7]);
	__LIB_18__::func_371(iLocal_148, sLocal_150, 1);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iLocal_148, 700f, -1240f, 45.15f, 0f, 0f, 0f, 2);
	ANIMSCENE::START_ANIM_SCENE(iLocal_148);
	ANIMSCENE::START_ANIM_SCENE(iLocal_148);
	__LIB_11__::func_559(iLocal_152, "Lenny", uLocal_109[1]);
	__LIB_18__::func_371(iLocal_152, sLocal_154, 1);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iLocal_152, 699.682f, -1239.705f, 45.10563f, 0f, 0f, 0f, 2);
	ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_152, "PL_LENNY_ENTER_IDLE", true);
	ANIMSCENE::START_ANIM_SCENE(iLocal_152);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_14.f_3[0], 2);
	VEHICLE::_0x63DC1F22C903B709(Local_14.f_3[0], true);
	func_142(iParam0);
	__LIB_3__::func_157(&(Local_91[0 /*17*/]), "INTERACT_GREET", 0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_6__::func_736(&iLocal_30, &Local_91, 0, __LIB_9__::func_835(24), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	__LIB_4__::func_778(iParam0, 8388608);
	return true;
}

int func_36(int iParam0)
{
	PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), 0);
	__LIB_6__::func_815(&iLocal_30, uLocal_109[2]);
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_148))
	{
		ANIMSCENE::RESET_ANIM_SCENE(iLocal_148, 0);
		ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_148);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_152))
	{
		ANIMSCENE::RESET_ANIM_SCENE(iLocal_152, 0);
		ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_152);
	}
	func_154(PED::_GET_LAST_MOUNT(Global_35), 721.2f, -1228.6f, 44.3f, -100.3f, 2, 1073741824 /* Float: 2f */);
	__LIB_5__::func_534(iParam0, 3, uLocal_109[2], 0, 0, 1, 0);
	__LIB_5__::func_534(iParam0, 20, uLocal_109[0], 0, 0, 1, 0);
	__LIB_5__::func_534(iParam0, 9, uLocal_109[1], 0, 0, 1, 0);
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_117))
	{
		__LIB_2__::func_145(iLocal_117, 0);
	}
	__LIB_10__::func_284(&(Local_14.f_3[0]));
	__LIB_1__::func_463(iLocal_113[2], 3, 1, 0, 0);
	__LIB_1__::func_463(iLocal_113[0], 20, 1, 0, 0);
	__LIB_1__::func_463(iLocal_113[1], 9, 1, 0, 0);
	TASK::REMOVE_ALL_COVER_BLOCKING_AREAS();
	return 1;
}

void func_38(int iParam0)
{
	vector3 vVar0;
	struct<4> Var3;
	vVar0 = { __LIB_4__::func_681(*iParam0) };
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_428.f_444))
	{
	}
	else if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(iParam0->f_428.f_444, true, false))
	{
		Global_43800 = iParam0->f_428.f_444;
	}
	else
	{
		if (__LIB_4__::func_725(&(iParam0->f_958), 8))
		{
			if (!__LIB_4__::func_725(&(iParam0->f_958), 131072))
			{
				if (!__LIB_4__::func_725(&(iParam0->f_958), 32768))
				{
					if (!__LIB_2__::func_27(iParam0, 8))
					{
						__LIB_5__::func_395(&(iParam0->f_428), &(iParam0->f_958));
					}
				}
			}
		}
		MemCopy(&Var3, {vVar0}, 4);
		func_13(Var3, &(iParam0->f_428));
	}
}

void func_39(int iParam0)
{
	PED::SET_PED_RESET_FLAG(uLocal_109[0], 185, true);
}

int func_41(int iParam0)
{
	ENTITY::FREEZE_ENTITY_POSITION(Local_14.f_3[0], true);
	return func_162(iParam0);
}

int func_44(int iParam0)
{
	ENTITY::FREEZE_ENTITY_POSITION(Local_14.f_3[0], true);
	return func_162(iParam0);
}

bool func_53(int iParam0)
{
	__LIB_6__::func_815(&iLocal_30, uLocal_109[2]);
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_148))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_148);
		PED::SET_PED_TO_RAGDOLL(uLocal_109[2], 1000, 2000, 0, false, false, false);
		return false;
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_152))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_152);
		return false;
	}
	PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), 0);
	PED::SET_PED_CONFIG_FLAG(uLocal_109[2], 297, false);
	PED::SET_PED_CONFIG_FLAG(uLocal_109[2], 130, false);
	PED::SET_PED_CONFIG_FLAG(uLocal_109[2], 315, true);
	PED::SET_PED_CONFIG_FLAG(uLocal_109[2], 317, false);
	PED::SET_PED_CAN_BE_TARGETTED(uLocal_109[2], false);
	__LIB_5__::func_534(iParam0, 3, uLocal_109[2], 0, 0, 1, 0);
	__LIB_5__::func_534(iParam0, 20, uLocal_109[0], 0, 0, 1, 0);
	__LIB_5__::func_534(iParam0, 9, uLocal_109[1], 0, 0, 1, 0);
	__LIB_11__::func_579(&iLocal_128, iLocal_122, 0);
	__LIB_11__::func_579(&iLocal_129, iLocal_123, 0);
	VOLUME::_DELETE_VOLUME(iLocal_127);
	VOLUME::_DELETE_VOLUME(iLocal_122);
	VOLUME::_DELETE_VOLUME(iLocal_124);
	VOLUME::_DELETE_VOLUME(iLocal_126);
	VOLUME::_DELETE_VOLUME(iLocal_125);
	VOLUME::_DELETE_VOLUME(iLocal_123);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
	MAP::DISPLAY_RADAR(true);
	HUD::DISPLAY_HUD(true);
	FIRE::STOP_ENTITY_FIRE(uLocal_109[2], 0);
	FIRE::STOP_ENTITY_FIRE(uLocal_109[0], 0);
	__LIB_10__::func_284(&(Local_14.f_3[0]));
	if (!__LIB_11__::func_856(iParam0))
	{
		OBJECT::DELETE_OBJECT(&(Local_14.f_6[0]));
		OBJECT::DELETE_OBJECT(&(Local_14.f_6[1]));
		OBJECT::DELETE_OBJECT(&(Local_14.f_6[2]));
		OBJECT::DELETE_OBJECT(&(Local_14.f_6[3]));
		OBJECT::DELETE_OBJECT(&(Local_14.f_6[4]));
		OBJECT::DELETE_OBJECT(&(Local_14.f_6[5]));
		OBJECT::DELETE_OBJECT(&(Local_14.f_6[6]));
		OBJECT::DELETE_OBJECT(&(Local_14.f_6[7]));
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_14.f_6[0]));
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_14.f_6[1]));
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_14.f_6[2]));
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_14.f_6[3]));
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_14.f_6[4]));
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_14.f_6[5]));
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_14.f_6[6]));
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_14.f_6[7]));
	}
	TASK::REMOVE_ALL_COVER_BLOCKING_AREAS();
	return true;
}

void func_55(int iParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0->f_425))
	{
		__LIB_11__::func_579(&(iParam0->f_427), iParam0->f_425, 0);
		if (PATHFIND::_0xDE0EA444735C1368(iParam0->f_425))
		{
			PATHFIND::_0x2C87C3E1C7B96EE2(iParam0->f_425);
		}
		__LIB_4__::func_727(iParam0, 512);
		__LIB_4__::func_777(*iParam0);
		VOLUME::_DELETE_VOLUME(iParam0->f_425);
	}
}

void func_94(var uParam0)
{
	vector3 vVar0;
	if (!__LIB_0__::func_84(uParam0, 4))
	{
		if (__LIB_0__::func_1(uParam0->f_500, 16384))
		{
			GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
		}
		vVar0 = { __LIB_4__::func_748(uParam0) };
		if (!__LIB_0__::func_1(uParam0->f_500, 524288))
		{
			__LIB_5__::func_432(&(uParam0->f_512));
		}
		func_232(&(uParam0->f_500), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_4__::func_749(uParam0, 0f, 0f, 0f);
		func_234(uParam0);
		func_235(uParam0);
		__LIB_5__::func_137(uParam0, 0f, 0f, 0f, 0, 0);
		__LIB_5__::func_189(uParam0);
		__LIB_0__::func_88(uParam0, 4);
		__LIB_0__::func_106(uParam0, 0);
		__LIB_1__::func_550(&(Global_1946804.f_1497), Global_35, 1, 64, 1, 1, 1);
		if (CAM::_0x927B810E43E99932(&(uParam0->f_513)))
		{
			CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_513));
		}
	}
}

bool func_128(var uParam0)
{
	STREAMING::REQUEST_MODEL(joaat("CHUCKWAGON002X"), false);
	STREAMING::REQUEST_MODEL(joaat("W_STICK_DYNAMITE01"), false);
	STREAMING::REQUEST_MODEL(joaat("W_MELEE_KNIFE02"), false);
	STREAMING::REQUEST_MODEL(joaat("P_CRATEWEAPONS03X"), false);
	STREAMING::REQUEST_MODEL(joaat("P_MATCHSTICK01X"), false);
	STREAMING::REQUEST_MODEL(joaat("P_TRUNK03X"), false);
	STREAMING::REQUEST_MODEL(joaat("P_PACKAGE06X"), false);
	STREAMING::REQUEST_MODEL(joaat("P_CS_DUSTERARTHUR01X"), false);
	STREAMING::REQUEST_MODEL(joaat("P_CS_DUSTERBILL01X"), false);
	STREAMING::REQUEST_MODEL(joaat("P_CS_DUSTERLENNY01X"), false);
	STREAMING::REQUEST_MODEL(joaat("P_CS_SADDLE_BAG01X"), false);
	if (!func_269(&iLocal_148, cLocal_149, &uLocal_146, 0, 0))
	{
		return false;
	}
	ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_148, sLocal_150);
	if (!func_269(&iLocal_152, cLocal_153, &uLocal_147, 0, 0))
	{
		return false;
	}
	ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_152, sLocal_154);
	if (!STREAMING::HAS_MODEL_LOADED(joaat("CHUCKWAGON002X")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("W_STICK_DYNAMITE01")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("W_MELEE_KNIFE02")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("P_CRATEWEAPONS03X")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("P_MATCHSTICK01X")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("P_PACKAGE06X")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("P_TRUNK03X")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("P_CS_DUSTERARTHUR01X")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("P_CS_DUSTERBILL01X")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("P_CS_DUSTERLENNY01X")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("P_CS_SADDLE_BAG01X")))
	{
		return false;
	}
	if (iLocal_128 == 0 || iLocal_129 == 0)
	{
		iLocal_122 = VOLUME::_CREATE_VOLUME_BOX(718.1f, -1242.7f, 45.3f, 0f, 0f, -16.70035f, 12f, 12f, 4.347503f);
		iLocal_123 = VOLUME::_CREATE_VOLUME_SPHERE(708.2f, -1226.8f, 47f, 0f, 0f, -16.70035f, 9f, 9f, 4.347503f);
		iLocal_128 = __LIB_1__::func_391(iLocal_122, 0, 0, 0);
		iLocal_129 = __LIB_1__::func_391(iLocal_123, 0, 0, 0);
	}
	if (!func_271(-1, 1))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("P_CS_SADDLE_BAG01X")))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_156))
	{
		iLocal_156 = OBJECT::CREATE_OBJECT(joaat("P_CS_SADDLE_BAG01X"), 720.2059f, -1242.369f, 45.256f, true, true, false, false, true);
		ENTITY::SET_ENTITY_QUATERNION(iLocal_156, -0.6565f, -0.3016f, -0.1817f, 0.667f);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_156, true);
		return false;
	}
	if (!func_272(uParam0))
	{
		return false;
	}
	PED::SET_PED_CONFIG_FLAG(uLocal_109[0], 130, false);
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_125))
	{
		iLocal_125 = VOLUME::_CREATE_VOLUME_SPHERE(719.8f, -1241.849f, 45.4094f, 0f, 0f, -52.09116f, 5f, 5f, 5f);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_124))
	{
		iLocal_124 = VOLUME::_CREATE_VOLUME_SPHERE(719.8f, -1241.849f, 45.4094f, 0f, 0f, -24.98672f, 20.28144f, 20.15229f, 4.041716f);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_126))
	{
		iLocal_126 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(719.8f, -1241.849f, 45.4094f, 0f, 0f, 0f, 10f, 10f, 10f, "mudtown5_intro_NO_SCRIPT_CONTENT");
		uParam0->f_426 = iLocal_126;
		TASK::_0xEB2ED1DC3AEC0654(iLocal_126, 1, 1, 1, 1);
	}
	__LIB_18__::func_371(iLocal_148, sLocal_150, 1);
	__LIB_18__::func_371(iLocal_152, sLocal_154, 1);
	func_273(-1, 0);
	return true;
}

bool func_135(int iParam0, bool bParam1)
{
	int iVar0;
	if (__LIB_2__::func_27(iParam0, 2))
	{
		return true;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return true;
	}
	iVar0 = __LIB_5__::func_191(*iParam0);
	if (!__LIB_0__::func_31(iVar0))
	{
		return true;
	}
	iParam0->f_4 = ENTITY::DOES_ENTITY_EXIST(__LIB_0__::func_271(iVar0));
	return func_281(iParam0, iVar0, &(iParam0->f_3), bParam1, 1, iParam0->f_2903, iParam0->f_2903.f_1, iParam0->f_2903.f_2, 0, 0, 0, 0, 0);
}

void func_142(int iParam0)
{
	char cVar0[64];
	__LIB_5__::func_609(iParam0, Global_35, 0, 0, 0, 1);
	__LIB_5__::func_609(iParam0, uLocal_109[0], 0, 0, 0, 1);
	__LIB_5__::func_609(iParam0, uLocal_109[1], 0, 0, 0, 1);
	__LIB_5__::func_609(iParam0, uLocal_109[2], 0, 0, 0, 1);
	__LIB_5__::func_609(iParam0, iLocal_117, "Horse_01", 0, 0, 1);
	__LIB_5__::func_609(iParam0, iLocal_113[0], "Horse_01^1", 0, 0, 1);
	__LIB_5__::func_609(iParam0, iLocal_113[2], "Horse_01^2", 0, 0, 1);
	__LIB_5__::func_609(iParam0, iLocal_113[1], "Horse_01^3", 0, 0, 1);
	StringCopy(&cVar0, "1-Daytime_Start", 64);
	__LIB_9__::func_109(iParam0, cVar0);
	__LIB_9__::func_965(iParam0, "2-Nighttime_Start", 0);
	__LIB_5__::func_221(&(iParam0->f_428), Local_14.f_3[0], "CHUCKWAGON002X", 0, 0, 0);
	__LIB_5__::func_221(&(iParam0->f_428), Local_14.f_6[0], "w_stick_dynamite01", 0, 0, 0);
	__LIB_5__::func_221(&(iParam0->f_428), Local_14.f_6[1], "w_stick_dynamite01^1", 0, 0, 0);
	__LIB_5__::func_221(&(iParam0->f_428), Local_14.f_6[2], "p_matchstick01x", 0, 0, 0);
	__LIB_5__::func_221(&(iParam0->f_428), Local_14.f_6[3], "w_melee_knife02", 0, 0, 0);
	__LIB_5__::func_221(&(iParam0->f_428), Local_14.f_6[4], "w_melee_knife02^1", 0, 0, 0);
	__LIB_5__::func_221(&(iParam0->f_428), Local_14.f_6[5], "P_CS_DUSTERARTHUR01X", 0, 0, 0);
	__LIB_5__::func_221(&(iParam0->f_428), Local_14.f_6[6], "P_CS_DUSTERBILL01X", 0, 0, 0);
	__LIB_5__::func_221(&(iParam0->f_428), Local_14.f_6[7], "P_CS_DUSTERLENNY01X", 0, 0, 0);
	__LIB_5__::func_221(&(iParam0->f_428), iLocal_156, "P_CS_SADDLE_BAG01X", 0, 0, 0);
}

void func_154(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_154(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_154(iVar2, vParam1, fParam4, iParam5, iParam6);
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

int func_162(int iParam0)
{
	int iVar0;
	vector3 vVar1[24];
	char cVar4[64];
	vector3 vVar12[24];
	var uVar15;
	struct<11> Var16;
	PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::GET_PLAYER_INDEX(), &iVar0, false, false);
	if (__LIB_1__::func_205(Global_35, iLocal_124, 1, 0))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_CRAFTING_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_EMOTE_WHEEL"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MULTIPLAYER_INFO"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_SELECT_INSPECT"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_SHORTCUT_ABILITIES_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_EQUIP_ITEM"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_USE_ITEM"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_NEXT_WHEEL"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_ITEM_WHEEL"), false);
	}
	__LIB_1__::func_694(Global_35, VOLUME::_GET_VOLUME_COORDS(iLocal_124), 0, 30f, 25f, 10f, 5f, 1, 1, 1, 0);
	if (__LIB_1__::func_313(&uLocal_136, 2f))
	{
		func_340(&(uLocal_109[2]), &Global_35, 10000);
	}
	if (__LIB_1__::func_313(&uLocal_139, 3.5f))
	{
		func_340(&(uLocal_109[0]), &Global_35, 10000);
	}
	PED::SET_PED_CAN_BE_TARGETTED(uLocal_109[2], true);
	if (iLocal_29 != 5)
	{
		if (MISC::_0x870708A6E147A9AD(uLocal_109[2], "", 5f, 0, 0, 0, 0, 0, 0, -1))
		{
			PED::SET_PED_CONFIG_FLAG(uLocal_109[2], 301, false);
			PED::SET_PED_CONFIG_FLAG(uLocal_109[2], 297, true);
			PED::SET_PED_CONFIG_FLAG(uLocal_109[2], 376, true);
			PED::SET_PED_CONFIG_FLAG(uLocal_109[2], 276, true);
		}
	}
	if (iLocal_29 != 5)
	{
		if (__LIB_0__::func_57(uLocal_109[2]) == iVar0)
		{
			func_341(&(uLocal_109[2]), &iLocal_30, 7f, &Local_91, 0.1f, 3, 0, 0, 1, 0, 0, 2, -1082130432 /* Float: -1f */);
			if (__LIB_2__::func_456(&iLocal_30))
			{
				StringCopy(&cVar1, "MUD5_INT_LI", 24);
				__LIB_0__::func_928(&(iParam0->f_958.f_1771), Global_35, "Arthur", 0);
				__LIB_0__::func_928(&(iParam0->f_958.f_1771), uLocal_109[2], "Bill", 0);
				__LIB_1__::func_104(&(iParam0->f_958.f_1771), cVar1, 0, -1, 0, 0);
				MISC::_0xE98D55C5983F2509(uLocal_109[2]);
				if (PED::IS_PED_ON_MOUNT(Global_35) && iLocal_155 == 0)
				{
					TASK::TASK_DISMOUNT_ANIMAL(Global_35, 536870976, 0, 0, 0, 0);
					iLocal_155 = 1;
				}
				__LIB_18__::func_372(&(uLocal_109[2]), &iLocal_30, &Local_91, 5f, -1082130432 /* Float: -1f */, 0);
				StringCopy(&cVar4, "2-Nighttime_Start", 64);
				if (!__LIB_0__::func_252(CLOCK::GET_CLOCK_HOURS(), 6, 12))
				{
					__LIB_10__::func_938(iParam0, &cVar4);
				}
				iLocal_29 = 5;
			}
		}
	}
	if (__LIB_1__::func_205(Global_35, iLocal_125, 1, 0))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
	}
	else
	{
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), true);
	}
	switch (iLocal_29)
	{
		case 0:
			if (__LIB_0__::func_48(Global_35, uLocal_109[2], 20f, 1) && __LIB_1__::func_205(Global_35, iLocal_124, 1, 0))
			{
				if ((iLocal_145 < 2 && (!__LIB_0__::func_75(&uLocal_130) || __LIB_1__::func_285(&uLocal_130, 15f))) && (iLocal_145 == 0 || !__LIB_1__::func_205(Global_35, iLocal_125, 1, 0)))
				{
					iLocal_145++;
					iLocal_29 = 1;
				}
			}
			if (iLocal_145 >= 2 && __LIB_1__::func_285(&uLocal_130, 600f))
			{
				iLocal_145 = 0;
				__LIB_1__::func_148(&uLocal_130);
			}
			if (__LIB_1__::func_205(Global_35, iLocal_125, 1, 0))
			{
				__LIB_1__::func_283(&uLocal_133, 0);
				if (__LIB_1__::func_285(&uLocal_133, 10f))
				{
					if (PED::IS_PED_ON_MOUNT(Global_35))
					{
						TASK::TASK_DISMOUNT_ANIMAL(Global_35, 536870976, 0, 0, 0, 0);
						iLocal_155 = 1;
					}
					iLocal_29 = 5;
				}
			}
			else if (!__LIB_1__::func_205(Global_35, iLocal_125, 1, 0))
			{
				__LIB_0__::func_37(&uLocal_133);
			}
			break;
		case 1:
			if (__LIB_18__::func_371(iLocal_148, sLocal_151, 1))
			{
				StringCopy(&cVar12, "MUD5_CALLOVER", 24);
				__LIB_0__::func_928(&(iParam0->f_958.f_1771), uLocal_109[2], "Bill", 0);
				__LIB_1__::func_104(&(iParam0->f_958.f_1771), cVar12, 0, -1, 0, 0);
				__LIB_1__::func_283(&uLocal_136, 0);
				__LIB_1__::func_283(&uLocal_139, 0);
				iLocal_29 = 2;
			}
			break;
		case 2:
			if (!__LIB_1__::func_205(Global_35, iLocal_125, 1, 0))
			{
				__LIB_1__::func_148(&uLocal_130);
				iLocal_29 = 0;
			}
			else
			{
				iLocal_29 = 3;
			}
			break;
		case 3:
			if (!__LIB_1__::func_205(Global_35, iLocal_125, 1, 0))
			{
				__LIB_1__::func_148(&uLocal_130);
				iLocal_29 = 0;
			}
			if (__LIB_1__::func_205(Global_35, iLocal_125, 1, 0))
			{
				__LIB_1__::func_283(&uLocal_133, 0);
				if (__LIB_1__::func_285(&uLocal_133, 10f))
				{
				}
			}
			else if (!__LIB_1__::func_205(Global_35, iLocal_125, 1, 0))
			{
				__LIB_0__::func_37(&uLocal_133);
			}
			break;
		case 5:
			__LIB_1__::func_283(&uLocal_142, 0);
			if ((!__LIB_0__::func_272(iLocal_117, 0) && __LIB_0__::func_265(&uLocal_142) > 2f) && !PED::IS_PED_ON_MOUNT(Global_35))
			{
				Var16.f_10 = 7;
				Var16 = 1;
				Var16.f_1 = 1;
				Var16.f_2 = 0;
				Var16.f_3 = 1;
				Var16.f_4 = 1;
				Var16.f_6 = { 706f, -1228f, 45.7f };
				Var16.f_9 = 21f;
				iLocal_117 = __LIB_5__::func_615(&uVar15, &Var16);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_117, true);
				TASK::TASK_STAND_STILL(iLocal_117, -1);
				__LIB_5__::func_609(iParam0, iLocal_117, "Horse_01", 0, 0, 1);
			}
			if (((iLocal_155 == 0 && __LIB_0__::func_265(&uLocal_142) > 2f) && __LIB_0__::func_272(iLocal_117, 0)) || (((iLocal_155 == 1 && __LIB_0__::func_265(&uLocal_142) > 2.5f) && __LIB_0__::func_272(iLocal_117, 0)) && !PED::IS_PED_ON_MOUNT(Global_35)))
			{
				WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 0, 0);
				__LIB_1__::func_572(VOLUME::_GET_VOLUME_COORDS(iLocal_124), 30f, 0, 0, 1, 1, 0);
				return 1;
			}
			break;
	}
	return 0;
}

void func_232(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
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
		func_420();
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
			__LIB_5__::func_431(1);
		}
	}
	if (Global_1359489.f_16 & 4194304 == 0)
	{
		Global_1359489.f_16 |= 4194304;
	}
	*uParam0 = 0;
}

void func_234(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (__LIB_0__::func_84(uParam0, 2048) && !__LIB_0__::func_86(__LIB_4__::func_760(uParam0)))
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
			func_154(iVar1, __LIB_4__::func_760(uParam0), __LIB_4__::func_761(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_154(iVar3, __LIB_4__::func_760(uParam0), __LIB_4__::func_761(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_235(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if ((__LIB_0__::func_84(uParam0, 268435456) && !__LIB_0__::func_86(__LIB_4__::func_760(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { __LIB_4__::func_760(uParam0) };
			func_154(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

bool func_269(int iParam0, char* sParam1, var uParam2, int iParam3, char* sParam4)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*iParam0))
	{
		*iParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(sParam1, iParam3, sParam4, false, true);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*iParam0))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(*iParam0, true) && *uParam2 == 0)
		{
			ANIMSCENE::LOAD_ANIM_SCENE(*iParam0);
			*uParam2 = 1;
		}
		else if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(*iParam0, true, false))
		{
			return true;
		}
	}
	return false;
}

bool func_271(int iParam0, bool bParam1)
{
	int iVar0;
	if (!__LIB_3__::func_358(Local_14.f_1))
	{
		Local_14.f_1 = { __LIB_3__::func_355() };
	}
	if (__LIB_0__::func_239(&(Local_14.f_1), 1))
	{
		return true;
	}
	iVar0 = joaat("PG_TEAMSTER_CHUCKWAGON002X_LIGHTUPGRADE1");
	PROPSET::_REQUEST_PROPSET(iVar0);
	if (!PROPSET::_HAS_PROPSET_LOADED(iVar0))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_3[0]) && (iParam0 == -1 || iParam0 == 0))
	{
		Local_14.f_3[0] = VEHICLE::CREATE_VEHICLE(joaat("CHUCKWAGON002X"), 722.1201f, -1243.783f, 45.1542f, 228.2822f, true, true, false, false);
		PROPSET::_ADD_LIGHT_PROPSET_TO_VEHICLE(Local_14.f_3[0], iVar0);
		__LIB_6__::func_906(Local_14.f_1, Local_14.f_3[0]);
		__LIB_5__::func_510(Local_14.f_3[0], Local_14);
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
	__LIB_0__::func_240(&(Local_14.f_1), 1);
	return true;
}

bool func_272(var uParam0)
{
	int iVar0;
	iVar0 = 1;
	iLocal_113[1] = func_483(9, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	if (!__LIB_0__::func_272(iLocal_113[1], 0))
	{
		return false;
	}
	iLocal_113[2] = func_483(3, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	if (!__LIB_0__::func_272(iLocal_113[2], 0))
	{
		return false;
	}
	iLocal_113[0] = func_483(20, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	if (!__LIB_0__::func_272(iLocal_113[0], 0))
	{
		return false;
	}
	func_486(uParam0, 2, 3, &iVar0, func_484(0, 1), func_485(0, 1), -922193456);
	__LIB_5__::func_602(uLocal_109[2], joaat("WEAPON_RIFLE_BOLTACTION_BILL"));
	__LIB_5__::func_602(uLocal_109[2], joaat("WEAPON_RIFLE_BOLTACTION"));
	if (!__LIB_0__::func_272(iLocal_113[2], 0))
	{
		return false;
	}
	func_486(uParam0, 0, 20, &iVar0, func_484(0, 2), func_485(0, 2), -922193456);
	if (!__LIB_0__::func_272(iLocal_113[0], 0))
	{
		return false;
	}
	func_486(uParam0, 1, 9, &iVar0, func_484(0, 0), func_485(0, 0), -922193456);
	if (!__LIB_0__::func_272(uLocal_109[1], 0))
	{
		return false;
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_113[1], true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_113[2], true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_113[0], true);
	PED::_UPDATE_PED_VARIATION(uLocal_109[2], false, true, true, true, false);
	PED::SET_PED_CONFIG_FLAG(uLocal_109[2], 297, true);
	PED::SET_PED_CONFIG_FLAG(uLocal_109[2], 130, true);
	PED::SET_PED_CONFIG_FLAG(uLocal_109[2], 315, true);
	PED::SET_PED_CONFIG_FLAG(uLocal_109[2], 317, false);
	return iVar0;
}

void func_273(int iParam0, bool bParam1)
{
	if (!ITEMSET::IS_ITEMSET_VALID(Local_14.f_5))
	{
		Local_14.f_5 = ITEMSET::CREATE_ITEMSET(true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_6[0]) && (iParam0 == -1 || iParam0 == 0))
	{
		Local_14.f_6[0] = OBJECT::CREATE_OBJECT(joaat("W_STICK_DYNAMITE01"), 721.2399f, -1243.244f, 45.6207f, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(Local_14.f_6[0], 0f, 0f, -54.3529f, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_14.f_6[0], bParam1);
	}
	__LIB_5__::func_510(Local_14.f_6[0], Local_14);
	__LIB_5__::func_510(Local_14.f_6[0], Local_14.f_5);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_6[1]) && (iParam0 == -1 || iParam0 == 1))
	{
		Local_14.f_6[1] = OBJECT::CREATE_OBJECT(joaat("W_STICK_DYNAMITE01"), 701.7646f, -1220.877f, 45.1493f, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(Local_14.f_6[1], 0f, 0f, 63.9774f, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_14.f_6[1], bParam1);
	}
	__LIB_5__::func_510(Local_14.f_6[1], Local_14);
	__LIB_5__::func_510(Local_14.f_6[1], Local_14.f_5);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_6[2]) && (iParam0 == -1 || iParam0 == 2))
	{
		Local_14.f_6[2] = OBJECT::CREATE_OBJECT(joaat("P_MATCHSTICK01X"), 701.7646f, -1220.877f, 45.1493f, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(Local_14.f_6[2], 0f, 0f, 63.9774f, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_14.f_6[2], bParam1);
	}
	__LIB_5__::func_510(Local_14.f_6[2], Local_14);
	__LIB_5__::func_510(Local_14.f_6[2], Local_14.f_5);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_6[3]) && (iParam0 == -1 || iParam0 == 3))
	{
		Local_14.f_6[3] = OBJECT::CREATE_OBJECT(joaat("W_MELEE_KNIFE02"), 701.7646f, -1220.877f, 45.1493f, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(Local_14.f_6[3], 0f, 0f, 63.9774f, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_14.f_6[3], bParam1);
	}
	__LIB_5__::func_510(Local_14.f_6[3], Local_14);
	__LIB_5__::func_510(Local_14.f_6[3], Local_14.f_5);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_6[4]) && (iParam0 == -1 || iParam0 == 4))
	{
		Local_14.f_6[4] = OBJECT::CREATE_OBJECT(joaat("W_MELEE_KNIFE02"), 701.7646f, -1220.877f, 45.1493f, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(Local_14.f_6[4], 0f, 0f, 63.9774f, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_14.f_6[4], bParam1);
	}
	__LIB_5__::func_510(Local_14.f_6[4], Local_14);
	__LIB_5__::func_510(Local_14.f_6[4], Local_14.f_5);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_6[5]) && (iParam0 == -1 || iParam0 == 5))
	{
		Local_14.f_6[5] = OBJECT::CREATE_OBJECT(joaat("P_CS_DUSTERARTHUR01X"), 720.7133f, -1242.581f, 45.5174f, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(Local_14.f_6[5], 0f, 0f, 23.1026f, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_14.f_6[5], bParam1);
	}
	__LIB_5__::func_510(Local_14.f_6[5], Local_14);
	__LIB_5__::func_510(Local_14.f_6[5], Local_14.f_5);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_6[6]) && (iParam0 == -1 || iParam0 == 6))
	{
		Local_14.f_6[6] = OBJECT::CREATE_OBJECT(joaat("P_CS_DUSTERBILL01X"), 720.8611f, -1242.845f, 45.2674f, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(Local_14.f_6[6], 0f, 0f, 23.1026f, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_14.f_6[6], bParam1);
	}
	__LIB_5__::func_510(Local_14.f_6[6], Local_14);
	__LIB_5__::func_510(Local_14.f_6[6], Local_14.f_5);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_6[7]) && (iParam0 == -1 || iParam0 == 7))
	{
		Local_14.f_6[7] = OBJECT::CREATE_OBJECT(joaat("P_CS_DUSTERLENNY01X"), 721.07f, -1243.034f, 45.2674f, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(Local_14.f_6[7], 0f, 0f, 23.1026f, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_14.f_6[7], bParam1);
	}
	__LIB_5__::func_510(Local_14.f_6[7], Local_14);
	__LIB_5__::func_510(Local_14.f_6[7], Local_14.f_5);
}

int func_281(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, int iParam5, int iParam6, int iParam7, float fParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12)
{
	vector3 vVar0;
	if (!__LIB_0__::func_31(iParam1))
	{
		return 0;
	}
	if (__LIB_4__::func_767(iParam0, *uParam2))
	{
		if (*uParam2 != __LIB_0__::func_167(iParam1))
		{
		}
		return 1;
	}
	vVar0 = { iParam5, iParam6, iParam7 };
	if (__LIB_0__::func_86(vVar0))
	{
		vVar0 = { __LIB_1__::func_469(*iParam0) };
	}
	if (!__LIB_0__::func_287(iParam1, 28, 1))
	{
		__LIB_0__::func_288(iParam1, 28, 1);
	}
	*uParam2 = func_507(iParam1, 1, 0, vVar0.x, vVar0.y, vVar0.z, fParam8, bParam4, 1, bParam11, 0, 0, 0, iParam9, 1, bParam12, 0, 0, 1, 1, bParam10, 0, 1, 0, 1);
	if (!ENTITY::IS_ENTITY_DEAD(*uParam2))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(*uParam2))
		{
			return 0;
		}
		__LIB_4__::func_766(iParam0, *uParam2);
		__LIB_4__::func_768(iParam0, *uParam2);
		__LIB_4__::func_787(*uParam2, bParam3, bParam4, 0);
		if (bParam4)
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam2, true);
			if (!__LIB_0__::func_163(*uParam2, -982327190))
			{
				TASK::TASK_STAND_STILL(*uParam2, -1);
			}
		}
		__LIB_5__::func_532(iParam0, *uParam2, 0, 0, 0, 1, 0);
		__LIB_1__::func_296(iParam1, 0, 0, 1);
		__LIB_4__::func_703(iParam1);
		return 1;
	}
	return 0;
}

void func_340(var uParam0, var uParam1, int iParam2)
{
	struct<23> Var0;
	if (!__LIB_0__::func_272(*uParam0, 0) || !__LIB_0__::func_272(*uParam1, 0))
	{
		return;
	}
	PED::SET_PED_CAN_HEAD_IK(*uParam0, true);
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
	Var0 = { 0f, 0f, 0f };
	Var0.f_3 = *uParam1;
	Var0.f_4 = 14283;
	Var0.f_8 = 4;
	Var0.f_14 = 3;
	Var0.f_15 = 3;
	Var0.f_17 = 0;
	Var0.f_18 = 0;
	Var0.f_19 = 0;
	Var0.f_20 = 0;
	Var0.f_21 = 0;
	Var0.f_22 = 0;
	Var0.f_13 = 3;
	Var0.f_7 = iParam2;
	_NAMESPACE29::_0x66F9EB44342BB4C5(*uParam0, &Var0);
}

int func_341(int iParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
		__LIB_18__::func_372(iParam0, iParam1, uParam3, fParam2, fVar8, sParam7);
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
		if (__LIB_4__::func_231(*iParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (__LIB_10__::func_545(iParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_341(iParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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
					__LIB_6__::func_742(iParam1, uParam3);
					if (__LIB_11__::func_654(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
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
					if (__LIB_6__::func_834(*iParam0, iParam1, uParam3))
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
				if (__LIB_3__::func_598(iParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					__LIB_4__::func_166(*iParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					__LIB_11__::func_654(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					__LIB_8__::func_963(iParam0, __LIB_3__::func_598(iParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
					__LIB_6__::func_742(iParam1, uParam3);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					__LIB_2__::func_480(uParam3, 0, 0, 1, 1);
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
					else if (!(MISC::IS_BIT_SET(*iParam1, 13) || __LIB_3__::func_109(iParam1)))
					{
					}
					else if (!__LIB_6__::func_823(iParam1))
					{
					}
					else
					{
						if (fParam4 > 0f)
						{
							__LIB_1__::func_148(&(iParam1->f_18));
							bVar11 = iParam8 & 128 != false;
							if (bVar11)
							{
								__LIB_2__::func_526(uParam3, 0, 0);
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
				if (__LIB_3__::func_756(iParam0, iParam1, fParam4, bVar6))
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
					__LIB_11__::func_654(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
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
				if (__LIB_3__::func_756(iParam0, iParam1, fParam4, bVar6))
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
			__LIB_6__::func_835(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

void func_420()
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
			__LIB_2__::func_231(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		}
		else
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		}
		return;
	}
	iVar0 = func_633(6291456, 0);
	if (__LIB_0__::func_154(iVar0))
	{
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, true))
		{
			__LIB_2__::func_231(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		}
		else
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		}
	}
}

int func_483(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, float fParam12, bool bParam13, bool bParam14, bool bParam15, int iParam16)
{
	var uVar0;
	int iVar1;
	if (!__LIB_0__::func_49(iParam0))
	{
		return 0;
	}
	iVar1 = func_672(&uVar0, iParam0, bParam1, bParam2, iParam3, iParam4, iParam5, bParam7, bParam8, iParam9, iParam10, iParam11, fParam12, bParam13, bParam14, bParam15, bParam6, iParam16);
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

Vector3 func_484(int iParam0, int iParam1)
{
	return func_673(iParam0, iParam1);
}

float func_485(int iParam0, int iParam1)
{
	return func_674(iParam0, iParam1);
}

void func_486(int iParam0, int iParam1, int iParam2, int iParam3, vector3 vParam4, float fParam7, int iParam8)
{
	if (iLocal_118[iParam1] == 1)
	{
		return;
	}
	if (__LIB_0__::func_272(uLocal_109[iParam1], 0) && iLocal_118[iParam1] == 0)
	{
		if (!__LIB_0__::func_266(uLocal_109[iParam1], vParam4, 10f, 1, 1))
		{
			func_154(uLocal_109[iParam1], vParam4, fParam7, 2, 1073741824 /* Float: 2f */);
		}
		func_675(iParam1);
		iLocal_118[iParam1] = 1;
		return;
	}
	if (iParam8 == 0)
	{
		func_281(iParam0, iParam2, &(uLocal_109[iParam1]), 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		func_281(iParam0, iParam2, &(uLocal_109[iParam1]), 0, 1, 0, 0, 0, 0, iParam8, 0, 0, 0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uLocal_109[iParam1]))
	{
		*iParam3 = 0;
	}
	else
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_109[iParam1], vParam4, fParam7, true, false, true);
	}
}

int func_507(int iParam0, bool bParam1, int iParam2, var uParam3, var uParam4, var uParam5, float fParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
{
	vector3 vVar0;
	bool bVar3;
	int iVar4;
	int iVar5;
	if (!__LIB_0__::func_31(iParam0))
	{
		return 0;
	}
	vVar0.x = uParam3;
	vVar0.f_1 = uParam4;
	vVar0.f_2 = uParam5;
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
				func_154(Global_1360165[iParam0 /*1157*/], vVar0, fParam6, 2, 1073741824 /* Float: 2f */);
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

int func_633(int iParam0, int iParam1)
{
	var uVar0;
	return func_789(&uVar0, iParam0, iParam1);
}

int func_672(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, float fParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17)
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
				iVar0 = func_815(iParam1, bParam3, bParam8, iParam9, iParam10, iParam11, fParam12, bParam7, bParam15, bParam16, iParam17);
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

Vector3 func_673(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 714.288f, -1243.643f, 44.6442f;
				case 1:
					return 720.764f, -1240.692f, 44.1943f;
				case 2:
					return 719.0127f, -1241.38f, 44.3025f;
				case 3:
					return 710.0816f, -1239.358f, 44.6768f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_674(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -350f;
				case 1:
					return -278f;
				case 2:
					return 226f;
				case 3:
					return -85.9997f;
			}
			break;
	}
	return 0f;
}

void func_675(int iParam0)
{
	if (!__LIB_0__::func_272(uLocal_109[iParam0], 0))
	{
		return;
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_109[iParam0], true);
	TASK::CLEAR_PED_TASKS(uLocal_109[iParam0], true, false);
}

int func_789(var uParam0, int iParam1, int iParam2)
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
		return func_789(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

int func_815(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, float fParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)
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
				if (!__LIB_0__::func_851(iParam0) && func_952(iParam0, &uVar4))
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
					return func_953();
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
					return func_953();
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
				return func_953();
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
				return func_953();
			}
			if (bParam7)
			{
				if (!__LIB_1__::func_411(iParam0, Global_1360165[iParam0 /*1157*/].f_124, 1))
				{
					return func_953();
				}
			}
			if ((bParam2 && !__LIB_0__::func_86(vVar0)) && !__LIB_0__::func_175(vVar0, ENTITY::GET_ENTITY_COORDS(Global_1360165[iParam0 /*1157*/].f_124, true, false), 1056964608 /* Float: 0.5f */, 1))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(Global_1360165[iParam0 /*1157*/].f_124))
				{
					ENTITY::DETACH_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				}
				func_154(Global_1360165[iParam0 /*1157*/].f_124, vVar0, fParam6, 2, 1073741824 /* Float: 2f */);
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
	return func_953();
}

bool func_952(int iParam0, char* sParam1)
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
		case 2:
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
		case 3:
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
		case 5:
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
					StringCopy(sParam1, "lakay/lak_default_horse_javier", 64);
					return true;
					StringCopy(sParam1, "lakay/lak_default_horse_john", 64);
					return true;
					StringCopy(sParam1, "lakay/lak_default_horse_micah", 64);
					return true;
					StringCopy(sParam1, "lakay/lak_default_horse_sadie", 64);
					return true;
					StringCopy(sParam1, "lakay/lak_default_horses1", 64);
					return true;
					StringCopy(sParam1, "lakay/lak_default_horses1", 64);
					return true;
					Jump @1274; //curOff = 1092
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
					Jump @1274; //curOff = 1259
					StringCopy(sParam1, "beechersHope/bch_default_horses", 64);
					return true;
					return false;
				}
int func_953()
{
	return -1;
}

