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
	vector3 vLocal_23 = { 0f, 0f, 0f };
	vector3 vLocal_26 = { 0f, 0f, 0f };
	vector3 vLocal_29 = { 0f, 0f, 0f };
	float fLocal_32 = 0f;
	bool bLocal_33 = false;
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
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	var uLocal_48[3] = { 0, 0, 0 };
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 24;
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
	struct<2907> Local_162 = { 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1101004800, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 30, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1084227584, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_3069 = 0;
	var uLocal_3070 = 0;
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
	iLocal_15 = joaat("CS_PAYTAH");
	iLocal_16 = joaat("A_M_M_WAPWARRIORS_01");
	iLocal_17 = joaat("UTILLIWAG");
	iLocal_18 = joaat("P_LADLE02X");
	iLocal_19 = joaat("P_CS_BUCKET01X");
	iLocal_20 = joaat("P_CS_VEGSACK_UP");
	iLocal_21 = joaat("P_BOMBSWITCHOPEN01X");
	iLocal_22 = joaat("P_DYNAMITECRATE02X");
	vLocal_23 = { 68.36246f, 1067.573f, 194.3487f };
	vLocal_26 = { 73.45761f, 1065.704f, 194.9258f };
	vLocal_29 = { 95.1526f, 1046.145f, 200.5018f };
	fLocal_32 = -30.74f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		if (__LIB_5__::func_203(Local_162))
		{
			__LIB_0__::func_8(&Global_1935630, 32768);
		}
		func_3(&Local_162, 1);
	}
	__LIB_9__::func_918(&uScriptParam_0, &Local_162);
	while (!__LIB_2__::func_27(&Local_162, 1))
	{
		if (__LIB_4__::func_721(&Local_162) != 10)
		{
			if ((__LIB_4__::func_721(&Local_162) == 3 || __LIB_4__::func_721(&Local_162) == 4) && (!__LIB_5__::func_132(&Local_162) || __LIB_0__::func_78(&(Local_162.f_958)) > 0))
			{
				__LIB_9__::func_915(&Local_162, __LIB_2__::func_27(&Local_162, 67108864));
				bVar0 = true;
			}
			if ((!bVar0 && __LIB_5__::func_204(&Local_162)) && __LIB_2__::func_27(&Local_162, 65536))
			{
				__LIB_9__::func_915(&Local_162, 1);
			}
		}
		if (__LIB_4__::func_721(&Local_162) >= 3 && __LIB_4__::func_721(&Local_162) <= 7)
		{
			__LIB_9__::func_914(&Local_162);
		}
		if (((((__LIB_4__::func_721(&Local_162) >= 5 && __LIB_4__::func_721(&Local_162) <= 7) && !__LIB_2__::func_27(&Local_162, 4096)) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_162.f_428.f_444)) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_162.f_428.f_444, false)) && !ANIMSCENE::_IS_ANIM_SCENE_PAUSED(Local_162.f_428.f_444))
		{
			MemCopy(&Var1, {__LIB_4__::func_681(Local_162)}, 4);
			func_13(Var1, &(Local_162.f_428));
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SKIP_CUTSCENE"), false);
		}
		switch (__LIB_4__::func_721(&Local_162))
		{
			case 8:
				if (__LIB_17__::func_602(&Local_162))
				{
					__LIB_5__::func_536(&Local_162);
					__LIB_0__::func_0(&Local_162);
					__LIB_4__::func_722(&Local_162, 0);
				}
				else if (!__LIB_5__::func_204(&Local_162))
				{
					if (!__LIB_0__::func_899(&(Local_162.f_2899)))
					{
						__LIB_4__::func_89(&(Local_162.f_2899), 0);
					}
					if (!__LIB_5__::func_216(&Local_162))
					{
						if (__LIB_4__::func_118(&(Local_162.f_2899)) >= 1f)
						{
							__LIB_1__::func_109(Local_162.f_2889, 2097152);
							__LIB_5__::func_174(&Local_162);
							__LIB_5__::func_608(&Local_162);
							__LIB_4__::func_722(&Local_162, 10);
						}
					}
					else
					{
						if (!__LIB_2__::func_27(&Local_162, 536870912))
						{
							CLOCK::PAUSE_CLOCK(true, 0);
							__LIB_5__::func_410(&Local_162, 536870912);
						}
						__LIB_2__::func_259(&(Local_162.f_2899));
					}
				}
				break;
			case 0:
				if (__LIB_5__::func_204(&Local_162))
				{
					__LIB_0__::func_0(&Local_162);
				}
				if (!__LIB_5__::func_204(&Local_162) || __LIB_2__::func_27(&Local_162, 65536))
				{
					if (func_27(&Local_162))
					{
						__LIB_4__::func_722(&Local_162, 1);
					}
				}
				break;
			case 1:
				if (__LIB_5__::func_204(&Local_162))
				{
					__LIB_0__::func_0(&Local_162);
				}
				if (func_28(&Local_162))
				{
					__LIB_4__::func_722(&Local_162, 2);
				}
				break;
			case 2:
				if (__LIB_5__::func_204(&Local_162))
				{
					__LIB_0__::func_0(&Local_162);
				}
				if (func_29(&Local_162))
				{
					if (!__LIB_5__::func_132(&Local_162) || __LIB_5__::func_204(&Local_162))
					{
						if (!__LIB_0__::func_79(Local_162.f_2889))
						{
							Local_162.f_2889 = __LIB_0__::func_80(__LIB_3__::func_918(Local_162));
						}
						__LIB_1__::func_109(Local_162.f_2889, 4);
						__LIB_5__::func_410(&Local_162, 8192);
					}
					if (__LIB_5__::func_204(&Local_162))
					{
						__LIB_5__::func_175(&Local_162);
						__LIB_4__::func_722(&Local_162, 9);
					}
					else
					{
						__LIB_4__::func_722(&Local_162, 3);
					}
				}
				break;
			case 9:
				if (__LIB_0__::func_0(&Local_162))
				{
					__LIB_0__::func_11(&Local_162);
					__LIB_5__::func_536(&Local_162);
					__LIB_18__::func_298(&Local_162);
					if (!__LIB_2__::func_27(&Local_162, 256))
					{
						__LIB_0__::func_11(&Local_162);
						__LIB_5__::func_227(Local_162);
						func_38(&Local_162);
						__LIB_4__::func_722(&Local_162, 7);
					}
					else
					{
						__LIB_4__::func_722(&Local_162, 5);
					}
				}
				break;
			case 3:
				if (!__LIB_2__::func_27(&Local_162, 8192))
				{
					if (__LIB_0__::func_78(&(Local_162.f_958)) == 3)
					{
						__LIB_1__::func_109(Local_162.f_2889, 4);
						__LIB_5__::func_410(&Local_162, 8192);
					}
				}
				__LIB_0__::func_11(&Local_162);
				if (__LIB_3__::func_919(__LIB_0__::func_80(Global_1835011[Local_162 /*74*/].f_1), 512))
				{
				}
				else if (func_41(&Local_162) || __LIB_5__::func_176(&Local_162, 32768))
				{
					__LIB_0__::func_11(&Local_162);
					__LIB_5__::func_536(&Local_162);
					__LIB_4__::func_722(&Local_162, 4);
					__LIB_4__::func_89(&(Local_162.f_2890), 0);
				}
				else if (__LIB_5__::func_204(&Local_162) && !__LIB_5__::func_203(Local_162))
				{
					if (!__LIB_0__::func_899(&(Local_162.f_2899)))
					{
						__LIB_4__::func_89(&(Local_162.f_2899), 0);
					}
					if (!__LIB_5__::func_216(&Local_162))
					{
						if (__LIB_4__::func_118(&(Local_162.f_2899)) >= 1f)
						{
							__LIB_1__::func_109(Local_162.f_2889, 2097152);
							__LIB_5__::func_174(&Local_162);
							__LIB_5__::func_608(&Local_162);
							__LIB_4__::func_722(&Local_162, 10);
						}
					}
					else
					{
						if (!__LIB_2__::func_27(&Local_162, 536870912))
						{
							CLOCK::PAUSE_CLOCK(true, 0);
							__LIB_5__::func_410(&Local_162, 536870912);
						}
						__LIB_2__::func_259(&(Local_162.f_2899));
					}
				}
				break;
			case 4:
				__LIB_0__::func_11(&Local_162);
				PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
				if (func_44(&Local_162) || (__LIB_5__::func_176(&Local_162, 32768) && !__LIB_2__::func_27(&Local_162, 268435456)))
				{
					__LIB_18__::func_298(&Local_162);
					if (!__LIB_2__::func_27(&Local_162, 256))
					{
						__LIB_0__::func_11(&Local_162);
						func_38(&Local_162);
						if (!__LIB_0__::func_1(Global_1935630, 524288) || __LIB_5__::func_176(&Local_162, 524288))
						{
							__LIB_5__::func_227(Local_162);
							__LIB_4__::func_722(&Local_162, 7);
						}
						else
						{
							__LIB_4__::func_722(&Local_162, 6);
						}
					}
					else
					{
						__LIB_5__::func_227(Local_162);
						__LIB_4__::func_722(&Local_162, 5);
					}
				}
				break;
			case 5:
				__LIB_0__::func_11(&Local_162);
				__LIB_5__::func_526(&Local_162);
				if (__LIB_1__::func_583(&(Local_162.f_2884)) >= __LIB_4__::func_723(&Local_162))
				{
					__LIB_0__::func_11(&Local_162);
					func_38(&Local_162);
					__LIB_2__::func_259(&(Local_162.f_2884));
					if (!__LIB_5__::func_176(&Local_162, 524288))
					{
						__LIB_5__::func_227(Local_162);
						__LIB_4__::func_722(&Local_162, 7);
					}
					else
					{
						__LIB_4__::func_722(&Local_162, 6);
					}
				}
				break;
			case 6:
				if (!__LIB_0__::func_899(&(Local_162.f_2906)))
				{
					__LIB_4__::func_89(&(Local_162.f_2906), 0);
				}
				if ((__LIB_0__::func_81(&(Local_162.f_428)) == 4 && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_162.f_428.f_444)) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(Local_162.f_428.f_444))
				{
					__LIB_5__::func_227(Local_162);
					__LIB_4__::func_722(&Local_162, 7);
				}
				else if (__LIB_1__::func_583(&(Local_162.f_2906)) >= 5f)
				{
					__LIB_5__::func_227(Local_162);
					__LIB_4__::func_722(&Local_162, 7);
				}
				break;
			case 7:
				__LIB_0__::func_11(&Local_162);
				if (__LIB_9__::func_916(&Local_162))
				{
					__LIB_4__::func_722(&Local_162, 10);
				}
				break;
			case 10:
				if (func_3(&Local_162, 0))
				{
					__LIB_5__::func_410(&Local_162, 1);
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
	__LIB_5__::func_205(iParam0);
	__LIB_11__::func_445(iParam0);
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
					__LIB_8__::func_726(uParam4, 4);
					return 0;
				}
				else if (__LIB_4__::func_729(uParam4, 2))
				{
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_437);
				}
				__LIB_8__::func_726(uParam4, 3);
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
				__LIB_2__::func_259(&(uParam4->f_1));
				__LIB_8__::func_726(uParam4, 2);
			}
			else
			{
				if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				__LIB_5__::func_412(uParam4);
				if (!__LIB_0__::func_899(&(uParam4->f_1)))
				{
					__LIB_4__::func_89(&(uParam4->f_1), 0);
				}
				else if (__LIB_1__::func_583(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_444))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_444);
					}
					__LIB_8__::func_726(uParam4, 4);
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
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_444))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_444);
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
					__LIB_5__::func_603(uParam4, &uParam0);
					__LIB_8__::func_726(uParam4, 3);
				}
				else
				{
					SCRIPTS::SHUTDOWN_LOADING_SCREEN();
				}
			}
			else if (__LIB_1__::func_583(&(uParam4->f_1)) >= 60f)
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_444))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_444);
				}
				__LIB_8__::func_726(uParam4, 4);
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
				__LIB_9__::func_919(uParam4);
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
						__LIB_2__::func_259(&(uParam4->f_1));
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
						__LIB_0__::func_88(uParam4, 512);
						__LIB_4__::func_733(uParam4, 67108864, 1);
						__LIB_8__::func_726(uParam4, 4);
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
				__LIB_9__::func_919(uParam4);
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
						__LIB_8__::func_726(uParam4, 3);
					}
					else if (__LIB_1__::func_583(&(uParam4->f_1)) >= 30f)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_444) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_444))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_444, false);
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
	__LIB_6__::func_922(iParam0);
	__LIB_5__::func_224(iParam0);
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
	bool bVar0;
	bVar0 = true;
	if (!func_137(iLocal_35))
	{
		bVar0 = false;
	}
	if (!func_137(iLocal_36))
	{
		bVar0 = false;
	}
	if (!func_137(iLocal_37))
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
		return false;
	}
	__LIB_5__::func_609(iParam0, Global_35, "ARTHUR", 0, 0, 1);
	__LIB_5__::func_609(iParam0, iLocal_45, "dutch", 0, 0, 1);
	__LIB_5__::func_609(iParam0, iLocal_46, "EagleFlies", 0, 0, 1);
	__LIB_5__::func_609(iParam0, iLocal_47, "PAYTAH", 0, 0, 1);
	__LIB_5__::func_609(iParam0, uLocal_48[0], "A_M_M_WAPWARRIORS_01", 0, 0, 1);
	__LIB_5__::func_609(iParam0, uLocal_48[1], "A_M_M_WAPWARRIORS_01^1", 0, 0, 1);
	__LIB_5__::func_609(iParam0, uLocal_48[2], "A_M_M_WAPWARRIORS_01^2", 0, 0, 1);
	__LIB_5__::func_532(iParam0, iLocal_39, "UTILLIWAG", 0, 0, 1, 0);
	__LIB_5__::func_532(iParam0, iLocal_40, "p_ladle02x", 0, 0, 1, 0);
	__LIB_5__::func_532(iParam0, iLocal_41, "p_cs_bucket01x", 0, 0, 1, 0);
	__LIB_5__::func_532(iParam0, iLocal_42, "p_cs_vegsack_up", 0, 0, 1, 0);
	__LIB_5__::func_532(iParam0, iLocal_43, "p_cs_detonator01x", 0, 0, 1, 0);
	__LIB_5__::func_532(iParam0, iLocal_44, "p_dynamiteCrate02x", 0, 0, 1, 0);
	__LIB_5__::func_183(iParam0, Global_35, 0);
	__LIB_5__::func_183(iParam0, iLocal_45, 0);
	__LIB_5__::func_183(iParam0, iLocal_46, 0);
	__LIB_5__::func_183(iParam0, iLocal_47, 0);
	__LIB_5__::func_183(iParam0, uLocal_48[0], 0);
	__LIB_5__::func_183(iParam0, uLocal_48[1], 0);
	__LIB_5__::func_183(iParam0, uLocal_48[2], 0);
	__LIB_5__::func_183(iParam0, iLocal_39, 0);
	__LIB_5__::func_183(iParam0, iLocal_40, 0);
	__LIB_5__::func_183(iParam0, iLocal_41, 0);
	__LIB_5__::func_183(iParam0, iLocal_42, 0);
	__LIB_5__::func_183(iParam0, iLocal_43, 0);
	__LIB_5__::func_183(iParam0, iLocal_44, 0);
	__LIB_8__::func_913(&(iParam0->f_428), 16629);
	return true;
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

bool func_41(int iParam0)
{
	int iVar0;
	func_152();
	if (func_153(Global_35) < 190f)
	{
		if (__LIB_0__::func_266(Global_35, vLocal_23, 35f, 1, 0))
		{
			if (__LIB_2__::func_0(iLocal_45, 0.2f, 0.8f, 0.1f, 0.9f))
			{
				if (!__LIB_0__::func_899(&uLocal_61) || __LIB_4__::func_118(&uLocal_61) > 10f)
				{
					if (func_155(&uLocal_64, "NTS2_00_CALL", iLocal_45, Global_35, 0, 0, 1, 1))
					{
						__LIB_2__::func_259(&uLocal_61);
					}
				}
			}
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, true))
	{
		__LIB_9__::func_204(Global_35, vLocal_23, &uLocal_58, 40f, 30f, 20f, 15f, 0.5f, 1, 0, 1, 1, 1);
	}
	else if (__LIB_0__::func_71(Global_35))
	{
		__LIB_9__::func_204(Global_35, vLocal_23, &uLocal_58, 1112014848 /* Float: 50f */, 25f, 15f, 5f, 0.5f, 1, 0, 1, 1, 1);
		iVar0 = PED::GET_MOUNT(Global_35);
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_52) || (ENTITY::DOES_ENTITY_EXIST(iVar0) && iLocal_52 != iVar0))
		{
			iLocal_52 = iVar0;
		}
	}
	else if (__LIB_0__::func_266(Global_35, vLocal_23, 5f, 1, 1))
	{
		VOLUME::_0x5B23DFF8E0948BB2(iLocal_56, 1);
		PLAYER::_0x3946FC742AC305CD(PLAYER::GET_PLAYER_INDEX(), iLocal_45, "NTS2_INTRO", ENTITY::GET_ENTITY_COORDS(iLocal_46, true, false), 0, 0);
		WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
		PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
		ANIMSCENE::START_ANIM_SCENE(iLocal_38);
		return true;
	}
	return false;
}

bool func_44(int iParam0)
{
	var uVar0;
	CAM::_0xE296208C273BD7F0(1000, -1, 0, 17, 1, 0);
	CLOCK::_PAUSE_CLOCK_THIS_FRAME(true);
	ENTITY::_0xC3ABCFBC7D74AFA5(Global_35, 0, 1);
	__LIB_1__::func_738(1, 1, 1, 1, 1, 1, 1);
	if (__LIB_0__::func_272(iLocal_52, 0))
	{
		if (!__LIB_0__::func_491(iLocal_52, -982327190))
		{
			TASK::TASK_STAND_STILL(iLocal_52, -1);
		}
	}
	if (__LIB_0__::func_491(Global_35, 713668775))
	{
		TASK::CLEAR_PED_TASKS(Global_35, true, false);
		__LIB_0__::func_569(joaat("MOTIONSTATE_WALK"), 2000, 0, 1, 1, 0, 0, 0);
	}
	else if (__LIB_4__::func_641())
	{
		if (!__LIB_0__::func_491(Global_35, -208384378))
		{
			TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(Global_35, PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35), Global_36, 1f, 1);
		}
	}
	else if (__LIB_1__::func_750(&uVar0))
	{
		__LIB_3__::func_671();
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iLocal_38, false) || ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(iLocal_38))
	{
		PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), 0);
		WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
		PED::_0x9851DE7AEC10B4E1(vLocal_23, 15f, 1, 1);
		return true;
	}
	return false;
}

bool func_53(int iParam0)
{
	PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_54);
	PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), 0);
	iLocal_34 = 0;
	__LIB_0__::func_172(iLocal_53);
	__LIB_0__::func_172(iLocal_55);
	__LIB_0__::func_172(iLocal_54);
	__LIB_0__::func_172(iLocal_57);
	__LIB_0__::func_172(iLocal_56);
	__LIB_11__::func_96(iParam0, 0, iLocal_45, 0, 0, 1, 0);
	__LIB_11__::func_96(iParam0, 26, iLocal_46, 0, 0, 1, 0);
	__LIB_2__::func_788(&iLocal_47, 0, 1, 1);
	__LIB_2__::func_788(&(uLocal_48[0]), 0, 1, 1);
	__LIB_2__::func_788(&(uLocal_48[1]), 0, 1, 1);
	__LIB_2__::func_788(&(uLocal_48[2]), 0, 1, 1);
	func_171(iLocal_41);
	func_171(iLocal_43);
	func_171(iLocal_44);
	func_171(iLocal_40);
	func_171(iLocal_42);
	func_172();
	return true;
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
		func_238(&(uParam0->f_500), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_4__::func_749(uParam0, 0f, 0f, 0f);
		func_240(uParam0);
		func_241(uParam0);
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

bool func_128(int iParam0)
{
	bool bVar0;
	func_274();
	bVar0 = true;
	if (!func_275(iParam0))
	{
		bVar0 = false;
	}
	if (!func_276(iParam0))
	{
		bVar0 = false;
	}
	if (!func_277())
	{
		bVar0 = false;
	}
	if (!func_278())
	{
		bVar0 = false;
	}
	if (!func_279())
	{
		bVar0 = false;
	}
	if (!func_280())
	{
		bVar0 = false;
	}
	if (!func_281(&iLocal_35, "script@story@nts2@leadin@int@base", 1))
	{
		bVar0 = false;
	}
	if (!func_281(&iLocal_36, "script@story@nts2@leadin@int@background_peds", 1))
	{
		bVar0 = false;
	}
	if (!func_281(&iLocal_37, "script@story@nts2@leadin@int@prop_place", 1))
	{
		bVar0 = false;
	}
	if (!func_281(&iLocal_38, "script@story@nts2@leadin@int@leadin", 0))
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
		return false;
	}
	if (!func_282())
	{
		return false;
	}
	func_283();
	func_284();
	func_285();
	__LIB_3__::func_557(&iLocal_53, 36.14273f, 1096.652f, 175f, 0f, 0f, 0f, 450f, 350f, 75f, "NTS2_BlockAmbient");
	__LIB_13__::func_850(&iLocal_54, vLocal_26, 0f, 0f, 0f, 1f, 1f, 2f, "NTS2_BlockPath");
	__LIB_4__::func_975(&iLocal_57, vLocal_23, 0f, 0f, 0f, 17.5f, 17.5f, 17.5f, "MUD3B_INT - CUTSCENE");
	__LIB_0__::func_570(&(iParam0->f_428), iLocal_57, 0, 1);
	__LIB_5__::func_137(&(iParam0->f_428), vLocal_29, fLocal_32, 1);
	iLocal_55 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), vLocal_26, 0f, 0f, 0f, 1f, 1f, 2f);
	iLocal_56 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLBOX"), 67.423f, 1070.24f, 195.479f, 0f, 0f, 23.603f, 8.827f, 0.45f, 4.899f);
	VOLUME::_0x5B23DFF8E0948BB2(iLocal_56, 0);
	VOLUME::_0x5B23DFF8E0948BB2(iLocal_55, 1);
	PATHFIND::_0x19C7567D2F2287D6(iLocal_54, 7);
	__LIB_5__::func_418(iParam0, iLocal_53);
	__LIB_5__::func_410(iParam0, 2);
	__LIB_5__::func_410(iParam0, 16);
	__LIB_5__::func_410(iParam0, 2048);
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
	return func_296(iParam0, iVar0, &(iParam0->f_3), bParam1, 1, iParam0->f_2903, iParam0->f_2903.f_1, iParam0->f_2903.f_2, 0, 0, 0, 0, 0);
}

bool func_137(int iParam0)
{
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam0, false))
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iParam0, true, false))
			{
				ANIMSCENE::START_ANIM_SCENE(iParam0);
			}
		}
	}
	else
	{
		return true;
	}
	return false;
}

void func_140(var uParam0)
{
	int iVar0;
	iVar0 = CLOCK::GET_CLOCK_HOURS();
	if (iVar0 >= 21 || iVar0 < 5)
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_444, "bNight", true, false);
	}
	else if (iVar0 == 20)
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_444, "bEvening", true, false);
	}
}

void func_152()
{
	if (__LIB_0__::func_272(Global_35, 0))
	{
		if (bLocal_33)
		{
			if (!PED::IS_PED_ON_MOUNT(Global_35))
			{
				__LIB_5__::func_511(6);
				bLocal_33 = false;
			}
		}
		else if (PED::IS_PED_ON_MOUNT(Global_35))
		{
			bLocal_33 = true;
		}
	}
}

float func_153(int iParam0)
{
	vector3 vVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	}
	return vVar0.z;
}

bool func_155(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	vector3 vVar0[24];
	int iVar3;
	iParam3 = iParam3;
	iParam4 = iParam4;
	if (!ENTITY::IS_ENTITY_DEAD(iParam2) && (__LIB_0__::func_665(iParam2, iParam3, 1, 1) < 70f || bParam5))
	{
		StringCopy(&cVar0, sParam1, 24);
		if (bParam7)
		{
			TASK::TASK_LOOK_AT_ENTITY(iParam2, iParam3, 7000, 0, 51, 0);
			if (__LIB_0__::func_665(iParam2, iParam3, 1, 1) < 25f)
			{
				TASK::TASK_LOOK_AT_ENTITY(iParam3, iParam2, 7000, 0, 51, 0);
			}
		}
		if (iParam4 > 0)
		{
			iVar3 = 1;
		}
		__LIB_2__::func_259(&uLocal_0);
		if (AUDIO::_0xD89504D9D7D5057D(sParam1))
		{
			if (__LIB_1__::func_568(sParam1))
			{
				return true;
			}
		}
		else if (__LIB_1__::func_104(uParam0, cVar0, iVar3, iParam4, 0, 0))
		{
			return true;
		}
	}
	return false;
}

void func_171(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, false))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iParam0);
		}
	}
}

void func_172()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_39))
	{
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_39, false))
		{
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_39, true);
			VEHICLE::SET_VEHICLE_HANDBRAKE(iLocal_39, false);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_39);
		}
	}
}

void func_238(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
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
		func_398();
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

void func_240(var uParam0)
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
			func_409(iVar1, __LIB_4__::func_760(uParam0), __LIB_4__::func_761(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_409(iVar3, __LIB_4__::func_760(uParam0), __LIB_4__::func_761(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_241(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if ((__LIB_0__::func_84(uParam0, 268435456) && !__LIB_0__::func_86(__LIB_4__::func_760(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { __LIB_4__::func_760(uParam0) };
			func_409(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

void func_274()
{
	STREAMING::REQUEST_MODEL(iLocal_18, false);
	STREAMING::REQUEST_MODEL(iLocal_19, false);
	STREAMING::REQUEST_MODEL(iLocal_20, false);
	STREAMING::REQUEST_MODEL(iLocal_21, false);
	STREAMING::REQUEST_MODEL(iLocal_22, false);
}

bool func_275(int iParam0)
{
	if (!__LIB_0__::func_27(iLocal_34, 1))
	{
		if (!func_296(iParam0, 0, &iLocal_45, 0, 1, 0, 0, 0, 0, -268604689, 0, 0, 0))
		{
			return false;
		}
		if (!PED::_0xA0BC8FAED8CFEB3C(iLocal_45))
		{
			return false;
		}
		func_457(iLocal_45, func_456(0, 2), 2, 1073741824 /* Float: 2f */);
		func_458(&iLocal_45);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_45, true);
		WEAPON::_GIVE_WEAPON_TO_PED_2(iLocal_45, joaat("WEAPON_REVOLVER_SCHOFIELD_DUTCH"), -1, false, true, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
		WEAPON::_GIVE_WEAPON_TO_PED_2(iLocal_45, joaat("WEAPON_REVOLVER_SCHOFIELD_DUTCH_DUALWIELD"), -1, false, true, 1, false, 0.5f, 1f, 752097756, true, 0f, false);
		WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(iLocal_45, __LIB_0__::func_214(joaat("WEAPON_REVOLVER_SCHOFIELD_DUTCH")));
		__LIB_1__::func_683(&iLocal_34, 1);
	}
	return true;
}

bool func_276(int iParam0)
{
	if (!__LIB_0__::func_27(iLocal_34, 2))
	{
		if (!func_296(iParam0, 26, &iLocal_46, 0, 1, 0, 0, 0, 0, -268604689, 0, 0, 0))
		{
			return false;
		}
		if (!PED::_0xA0BC8FAED8CFEB3C(iLocal_46))
		{
			return false;
		}
		func_457(iLocal_46, func_456(0, 1), 2, 1073741824 /* Float: 2f */);
		func_458(&iLocal_46);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_46, true);
		WEAPON::_0x899A04AFCC725D04(iLocal_46, joaat("LO_EAGLE_FLIES"));
		WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(iLocal_46, __LIB_0__::func_214(joaat("WEAPON_REPEATER_CARBINE")));
		__LIB_1__::func_683(&iLocal_34, 2);
	}
	return true;
}

bool func_277()
{
	if (!func_460(&iLocal_47, func_456(0, 3), iLocal_15, joaat("WEAPON_BOW"), 4, joaat("META_OUTFIT_DEFAULT")))
	{
		return false;
	}
	if (!func_460(&(uLocal_48[0]), func_456(1, 0), iLocal_16, joaat("WEAPON_BOW"), 8, 630925281))
	{
		return false;
	}
	if (!func_460(&(uLocal_48[1]), func_456(1, 1), iLocal_16, joaat("WEAPON_BOW"), 16, -36775863))
	{
		return false;
	}
	if (!func_460(&(uLocal_48[2]), func_456(1, 2), iLocal_16, joaat("WEAPON_REPEATER_CARBINE"), 32, 269778132))
	{
		return false;
	}
	return true;
}

bool func_278()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_39))
	{
		STREAMING::REQUEST_MODEL(iLocal_17, false);
		if (STREAMING::HAS_MODEL_LOADED(iLocal_17))
		{
			iLocal_39 = VEHICLE::CREATE_VEHICLE(iLocal_17, func_461(2, 0), func_462(2, 0), true, true, false, false);
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_39, false);
			VEHICLE::SET_VEHICLE_HANDBRAKE(iLocal_39, true);
		}
		return false;
	}
	PROPSET::_REQUEST_PROPSET(joaat("PG_MISSION_NATIVE2_01X"));
	if (!PROPSET::_HAS_PROPSET_LOADED(joaat("PG_MISSION_NATIVE2_01X")))
	{
		return false;
	}
	else if (!PROPSET::_DOES_VEHICLE_HAVE_ANY_PROPSET(iLocal_39))
	{
		PROPSET::_0xD80FAF919A2E56EA(iLocal_39, joaat("PG_MISSION_NATIVE2_01X"));
		return false;
	}
	return true;
}

bool func_279()
{
	vector3 vVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_40))
	{
		STREAMING::REQUEST_MODEL(iLocal_18, false);
		if (STREAMING::HAS_MODEL_LOADED(iLocal_18))
		{
			iLocal_40 = OBJECT::CREATE_OBJECT(iLocal_18, func_461(2, 4), true, true, false, false, true);
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_40, iLocal_39, false);
		}
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_41))
	{
		STREAMING::REQUEST_MODEL(iLocal_19, false);
		if (STREAMING::HAS_MODEL_LOADED(iLocal_19))
		{
			iLocal_41 = OBJECT::CREATE_OBJECT(iLocal_19, func_461(2, 3), true, true, false, false, true);
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_41, iLocal_39, false);
		}
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_42))
	{
		STREAMING::REQUEST_MODEL(iLocal_20, false);
		if (STREAMING::HAS_MODEL_LOADED(iLocal_20))
		{
			iLocal_42 = OBJECT::CREATE_OBJECT(iLocal_20, func_461(2, 5), true, true, false, false, true);
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_42, iLocal_39, false);
		}
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_43))
	{
		STREAMING::REQUEST_MODEL(iLocal_21, false);
		if (STREAMING::HAS_MODEL_LOADED(iLocal_21))
		{
			iLocal_43 = OBJECT::CREATE_OBJECT(iLocal_21, func_461(2, 1), true, true, false, false, true);
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_43, iLocal_39, false);
		}
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_44))
	{
		STREAMING::REQUEST_MODEL(iLocal_22, false);
		if (STREAMING::HAS_MODEL_LOADED(iLocal_22))
		{
			iLocal_44 = OBJECT::CREATE_OBJECT(iLocal_22, func_461(2, 2), true, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(iLocal_44, func_462(2, 2));
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_39))
			{
				vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_39, func_461(2, 2)) };
				ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_44, iLocal_39, 0, vVar0, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
			}
		}
		return false;
	}
	return true;
}

bool func_280()
{
	HUD::_TEXT_DATABASE_REQUEST("NTS2AUD");
	return HUD::_TEXT_DATABASE_HAS_LOADED("NTS2AUD");
}

bool func_281(int iParam0, char* sParam1, int iParam2)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*iParam0))
	{
		*iParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(sParam1, iParam2, 0, false, true);
	}
	else if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(*iParam0, true, false))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(*iParam0, true))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(*iParam0);
		}
	}
	else
	{
		return true;
	}
	return false;
}

bool func_282()
{
	if ((PED::_0xA0BC8FAED8CFEB3C(iLocal_45) && PED::_0xA0BC8FAED8CFEB3C(iLocal_46)) && PED::_0xA0BC8FAED8CFEB3C(iLocal_47))
	{
		return true;
	}
	return false;
}

void func_283()
{
	__LIB_5__::func_414(0, 1073741824 /* Float: 2f */, 1);
	__LIB_5__::func_414(26, 262144, 1);
	PED::_SET_PED_BODY_COMPONENT(iLocal_47, -972364774);
	PED::_UPDATE_PED_VARIATION(iLocal_47, false, true, true, true, false);
}

void func_284()
{
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_35, "Dutch", iLocal_45, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_35, "EagleFlies", iLocal_46, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_35, "Paytah", iLocal_47, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_36, "A_M_M_WAPWARRIORS_01", uLocal_48[0], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_36, "A_M_M_WAPWARRIORS_01^1", uLocal_48[1], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_36, "A_M_M_WAPWARRIORS_01^2", uLocal_48[2], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_36, "p_ladle02x", iLocal_40, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_37, "UTILLIWAG", iLocal_39, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_37, "p_cs_bucket01x", iLocal_41, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_37, "p_cs_vegsack_up", iLocal_42, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_37, "p_cs_detonator01x ", iLocal_43, 0);
}

void func_285()
{
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_38, "ARTHUR", Global_35, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_38, "A_M_M_WAPWARRIORS_01", uLocal_48[0], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_38, "A_M_M_WAPWARRIORS_01^1", uLocal_48[1], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_38, "A_M_M_WAPWARRIORS_01^2", uLocal_48[2], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_38, "Dutch", iLocal_45, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_38, "EagleFlies", iLocal_46, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_38, "PAYTAH", iLocal_47, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_38, "p_ladle02x", iLocal_40, 0);
}

bool func_296(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, int iParam6, int iParam7, float fParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12)
{
	vector3 vVar0;
	if (!__LIB_0__::func_31(iParam1))
	{
		return false;
	}
	if (__LIB_4__::func_767(iParam0, *iParam2))
	{
		if (*iParam2 != __LIB_0__::func_167(iParam1))
		{
		}
		return true;
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
	*iParam2 = func_482(iParam1, 1, 0, vVar0.x, vVar0.y, vVar0.z, fParam8, bParam4, 1, bParam11, 0, 0, 0, iParam9, 1, bParam12, 0, 0, 1, 1, bParam10, 0, 1, 0, 1);
	if (!ENTITY::IS_ENTITY_DEAD(*iParam2))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(*iParam2))
		{
			return false;
		}
		__LIB_4__::func_766(iParam0, *iParam2);
		__LIB_4__::func_768(iParam0, *iParam2);
		__LIB_4__::func_787(*iParam2, bParam3, bParam4, 0);
		if (bParam4)
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam2, true);
			if (!__LIB_0__::func_163(*iParam2, -982327190))
			{
				TASK::TASK_STAND_STILL(*iParam2, -1);
			}
		}
		__LIB_5__::func_532(iParam0, *iParam2, 0, 0, 0, 1, 0);
		__LIB_1__::func_296(iParam1, 0, 0, 1);
		__LIB_4__::func_703(iParam1);
		return true;
	}
	return false;
}

void func_398()
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
	iVar0 = func_551(6291456, 0);
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

void func_409(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_409(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_409(iVar2, vParam1, fParam4, iParam5, iParam6);
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

struct<4> func_456(int iParam0, int iParam1)
{
	return func_591(iParam0, iParam1);
}

void func_457(int iParam0, struct<4> Param1, int iParam5, float fParam6)
{
	func_409(iParam0, Param1, Param1.f_3, iParam5, fParam6);
}

void func_458(int iParam0)
{
	if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(*iParam0) != joaat("REL_PLAYER_ALLY"))
	{
		PED::SET_PED_CAN_BE_TARGETTED(*iParam0, false);
		PED::SET_PED_CONFIG_FLAG(*iParam0, 278, true);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(*iParam0, false);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(*iParam0, joaat("REL_PLAYER_ALLY"));
	}
}

bool func_460(int iParam0, struct<4> Param1, int iParam5, int iParam6, int iParam7, int iParam8)
{
	if (!__LIB_0__::func_27(iLocal_34, iParam7))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			STREAMING::REQUEST_MODEL(iParam5, false);
			if (STREAMING::HAS_MODEL_LOADED(iParam5))
			{
				*iParam0 = __LIB_1__::func_545(iParam5, Param1, Param1.f_3, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			}
			return false;
		}
		if (!PED::_0xA0BC8FAED8CFEB3C(*iParam0))
		{
			return false;
		}
		func_458(iParam0);
		PED::SET_PED_CONFIG_FLAG(*iParam0, 146, true);
		PED::SET_PED_CONFIG_FLAG(*iParam0, 504, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, true);
		if (iParam8 != 0)
		{
			PED::_SET_PED_BODY_COMPONENT(*iParam0, iParam8);
			PED::_UPDATE_PED_VARIATION(*iParam0, false, true, true, true, false);
		}
		WEAPON::_GIVE_WEAPON_TO_PED_2(*iParam0, iParam6, -1, false, true, 0, false, 0.5f, 1f, 752097756, true, 0f, false);
		WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(*iParam0, __LIB_0__::func_214(iParam6));
		__LIB_1__::func_683(&iLocal_34, iParam7);
	}
	return true;
}

Vector3 func_461(int iParam0, int iParam1)
{
	return func_593(iParam0, iParam1);
}

float func_462(int iParam0, int iParam1)
{
	return func_594(iParam0, iParam1);
}

int func_482(int iParam0, bool bParam1, int iParam2, var uParam3, var uParam4, var uParam5, float fParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
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
				func_409(Global_1360165[iParam0 /*1157*/], vVar0, fParam6, 2, 1073741824 /* Float: 2f */);
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

int func_551(int iParam0, int iParam1)
{
	var uVar0;
	return func_646(&uVar0, iParam0, iParam1);
}

struct<4> func_591(int iParam0, int iParam1)
{
	struct<4> Var0;
	Var0 = { func_593(iParam0, iParam1) };
	Var0.f_3 = func_594(iParam0, iParam1);
	return Var0;
}

Vector3 func_593(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 71.4867f, 1071.386f, 194.9133f;
				case 1:
					return 69.5959f, 1070.569f, 194.997f;
				case 2:
					return 73.6931f, 1071.293f, 194.7691f;
				case 3:
					return 67.7318f, 1069.861f, 194.9621f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 66.0488f, 1069.124f, 194.92f;
				case 1:
					return 64.3435f, 1068.154f, 194.8585f;
				case 2:
					return 37.3898f, 1051.63f, 194.0012f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 73.6514f, 1063.718f, 195.9996f;
				case 1:
					return 74.0417f, 1064.562f, 196.3311f;
				case 2:
					return 73.5467f, 1064.206f, 196.4037f;
				case 3:
					return 73.0202f, 1065.792f, 194.9879f;
				case 4:
					return 72.6557f, 1066.067f, 194.7914f;
				case 5:
					return 74.2862f, 1064.759f, 196.3966f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_594(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 45.1262f;
				case 1:
					return 51.9844f;
				case 2:
					return 44.226f;
				case 3:
					return 54.8919f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 57.2517f;
				case 1:
					return 59.0996f;
				case 2:
					return 54.2036f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 152.0988f;
				case 1:
					return 66.65f;
				case 2:
					return 152.8f;
				case 3:
					return 152.8f;
				case 4:
					return 152.8f;
				case 5:
					return 152.8f;
			}
			break;
	}
	return 0f;
}

int func_646(var uParam0, int iParam1, int iParam2)
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
		return func_646(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

