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
	struct<8> Local_14 = { 0, 0, 0, 1, 0, 0, 0, 3 } ;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28[3] = { 0, 0, 0 };
	var uLocal_32[2] = { 0, 0 };
	int iLocal_35[3] = { 0, 0, 0 };
	int iLocal_39[3] = { 0, 0, 0 };
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	int iLocal_45[3] = { 0, 0, 0 };
	int iLocal_49[3] = { 0, 0, 0 };
	int iLocal_53 = 0;
	int iLocal_54[2] = { 0, 0 };
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
	int iLocal_162 = 0;
	bool bLocal_163 = false;
	bool bLocal_164 = false;
	bool bLocal_165 = false;
	bool bLocal_166 = false;
	int iLocal_167 = 0;
	int iLocal_168 = 0;
	char cLocal_169[64] = "";
	int iLocal_177[2] = { 0, 0 };
	bool bLocal_180 = false;
	var uLocal_181[2] = { 0, 0 };
	int iLocal_184[2] = { 0, 0 };
	bool bLocal_187 = false;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	struct<2907> Local_191 = { 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1101004800, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1569615261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 30, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1065353216, 1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1084227584, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_3098 = 0;
	var uLocal_3099 = 0;
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
	iLocal_25 = joaat("CS_BRAITHWAITEBUTLER");
	iLocal_57 = joaat("PG_MISSION_BRT2");
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		if (__LIB_5__::func_203(Local_191))
		{
			__LIB_0__::func_8(&Global_1935630, 32768);
		}
		func_3(&Local_191, 1);
	}
	__LIB_5__::func_610(&uScriptParam_0, &Local_191);
	while (!__LIB_2__::func_27(&Local_191, 1))
	{
		if (__LIB_4__::func_721(&Local_191) != 10)
		{
			if ((__LIB_4__::func_721(&Local_191) == 3 || __LIB_4__::func_721(&Local_191) == 4) && (!__LIB_5__::func_132(&Local_191) || __LIB_0__::func_78(&(Local_191.f_958)) > 0))
			{
				__LIB_7__::func_446(&Local_191, __LIB_2__::func_27(&Local_191, 67108864));
				bVar0 = true;
			}
			if ((!bVar0 && __LIB_5__::func_204(&Local_191)) && __LIB_2__::func_27(&Local_191, 65536))
			{
				__LIB_7__::func_446(&Local_191, 1);
			}
		}
		if (__LIB_4__::func_721(&Local_191) >= 3 && __LIB_4__::func_721(&Local_191) <= 7)
		{
			__LIB_5__::func_525(&Local_191);
		}
		if (((((__LIB_4__::func_721(&Local_191) >= 5 && __LIB_4__::func_721(&Local_191) <= 7) && !__LIB_2__::func_27(&Local_191, 4096)) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_191.f_428.f_444)) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_191.f_428.f_444, false)) && !ANIMSCENE::_IS_ANIM_SCENE_PAUSED(Local_191.f_428.f_444))
		{
			MemCopy(&Var1, {__LIB_4__::func_681(Local_191)}, 4);
			func_13(Var1, &(Local_191.f_428));
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SKIP_CUTSCENE"), false);
		}
		switch (__LIB_4__::func_721(&Local_191))
		{
			case 8:
				if (__LIB_5__::func_607(&Local_191))
				{
					__LIB_5__::func_536(&Local_191);
					__LIB_0__::func_0(&Local_191);
					__LIB_4__::func_722(&Local_191, 0);
				}
				else if (!__LIB_5__::func_204(&Local_191))
				{
					if (!__LIB_0__::func_75(&(Local_191.f_2899)))
					{
						__LIB_1__::func_283(&(Local_191.f_2899), 0);
					}
					if (!__LIB_5__::func_216(&Local_191))
					{
						if (__LIB_0__::func_264(&(Local_191.f_2899)) >= 1f)
						{
							__LIB_1__::func_109(Local_191.f_2889, 2097152);
							__LIB_5__::func_174(&Local_191);
							__LIB_5__::func_608(&Local_191);
							__LIB_4__::func_722(&Local_191, 10);
						}
					}
					else
					{
						if (!__LIB_2__::func_27(&Local_191, 536870912))
						{
							CLOCK::PAUSE_CLOCK(true, 0);
							__LIB_5__::func_410(&Local_191, 536870912);
						}
						__LIB_1__::func_148(&(Local_191.f_2899));
					}
				}
				break;
			case 0:
				if (__LIB_5__::func_204(&Local_191))
				{
					__LIB_0__::func_0(&Local_191);
				}
				if (!__LIB_5__::func_204(&Local_191) || __LIB_2__::func_27(&Local_191, 65536))
				{
					if (func_27(&Local_191))
					{
						__LIB_4__::func_722(&Local_191, 1);
					}
				}
				break;
			case 1:
				if (__LIB_5__::func_204(&Local_191))
				{
					__LIB_0__::func_0(&Local_191);
				}
				if (func_28(&Local_191))
				{
					__LIB_4__::func_722(&Local_191, 2);
				}
				break;
			case 2:
				if (__LIB_5__::func_204(&Local_191))
				{
					__LIB_0__::func_0(&Local_191);
				}
				if (func_29(&Local_191))
				{
					if (!__LIB_5__::func_132(&Local_191) || __LIB_5__::func_204(&Local_191))
					{
						if (!__LIB_0__::func_79(Local_191.f_2889))
						{
							Local_191.f_2889 = __LIB_0__::func_80(__LIB_3__::func_918(Local_191));
						}
						__LIB_1__::func_109(Local_191.f_2889, 4);
						__LIB_5__::func_410(&Local_191, 8192);
					}
					if (__LIB_5__::func_204(&Local_191))
					{
						__LIB_5__::func_175(&Local_191);
						__LIB_4__::func_722(&Local_191, 9);
					}
					else
					{
						__LIB_4__::func_722(&Local_191, 3);
					}
				}
				break;
			case 9:
				if (__LIB_0__::func_0(&Local_191))
				{
					__LIB_0__::func_11(&Local_191);
					__LIB_5__::func_536(&Local_191);
					__LIB_6__::func_926(&Local_191);
					if (!__LIB_2__::func_27(&Local_191, 256))
					{
						func_36(&Local_191);
						__LIB_5__::func_227(Local_191);
						func_38(&Local_191);
						__LIB_4__::func_722(&Local_191, 7);
					}
					else
					{
						__LIB_4__::func_722(&Local_191, 5);
					}
				}
				break;
			case 3:
				if (!__LIB_2__::func_27(&Local_191, 8192))
				{
					if (__LIB_0__::func_78(&(Local_191.f_958)) == 3)
					{
						__LIB_1__::func_109(Local_191.f_2889, 4);
						__LIB_5__::func_410(&Local_191, 8192);
					}
				}
				func_39(&Local_191);
				if (__LIB_3__::func_919(__LIB_0__::func_80(Global_1835011[Local_191 /*74*/].f_1), 512))
				{
				}
				else if (__LIB_11__::func_241(&Local_191) || __LIB_5__::func_176(&Local_191, 32768))
				{
					__LIB_0__::func_11(&Local_191);
					__LIB_5__::func_536(&Local_191);
					__LIB_4__::func_722(&Local_191, 4);
					__LIB_1__::func_283(&(Local_191.f_2890), 0);
				}
				else if (__LIB_5__::func_204(&Local_191) && !__LIB_5__::func_203(Local_191))
				{
					if (!__LIB_0__::func_75(&(Local_191.f_2899)))
					{
						__LIB_1__::func_283(&(Local_191.f_2899), 0);
					}
					if (!__LIB_5__::func_216(&Local_191))
					{
						if (__LIB_0__::func_264(&(Local_191.f_2899)) >= 1f)
						{
							__LIB_1__::func_109(Local_191.f_2889, 2097152);
							__LIB_5__::func_174(&Local_191);
							__LIB_5__::func_608(&Local_191);
							__LIB_4__::func_722(&Local_191, 10);
						}
					}
					else
					{
						if (!__LIB_2__::func_27(&Local_191, 536870912))
						{
							CLOCK::PAUSE_CLOCK(true, 0);
							__LIB_5__::func_410(&Local_191, 536870912);
						}
						__LIB_1__::func_148(&(Local_191.f_2899));
					}
				}
				break;
			case 4:
				__LIB_0__::func_11(&Local_191);
				PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
				if (__LIB_11__::func_242(&Local_191) || (__LIB_5__::func_176(&Local_191, 32768) && !__LIB_2__::func_27(&Local_191, 268435456)))
				{
					__LIB_6__::func_926(&Local_191);
					if (!__LIB_2__::func_27(&Local_191, 256))
					{
						func_36(&Local_191);
						func_38(&Local_191);
						if (!__LIB_0__::func_1(Global_1935630, 524288) || __LIB_5__::func_176(&Local_191, 524288))
						{
							__LIB_5__::func_227(Local_191);
							__LIB_4__::func_722(&Local_191, 7);
						}
						else
						{
							__LIB_4__::func_722(&Local_191, 6);
						}
					}
					else
					{
						__LIB_5__::func_227(Local_191);
						__LIB_4__::func_722(&Local_191, 5);
					}
				}
				break;
			case 5:
				__LIB_0__::func_11(&Local_191);
				__LIB_5__::func_526(&Local_191);
				if (__LIB_0__::func_265(&(Local_191.f_2884)) >= __LIB_4__::func_723(&Local_191))
				{
					func_36(&Local_191);
					func_38(&Local_191);
					__LIB_1__::func_148(&(Local_191.f_2884));
					if (!__LIB_5__::func_176(&Local_191, 524288))
					{
						__LIB_5__::func_227(Local_191);
						__LIB_4__::func_722(&Local_191, 7);
					}
					else
					{
						__LIB_4__::func_722(&Local_191, 6);
					}
				}
				break;
			case 6:
				if (!__LIB_0__::func_75(&(Local_191.f_2906)))
				{
					__LIB_1__::func_283(&(Local_191.f_2906), 0);
				}
				if ((__LIB_0__::func_81(&(Local_191.f_428)) == 4 && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_191.f_428.f_444)) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(Local_191.f_428.f_444))
				{
					__LIB_5__::func_227(Local_191);
					__LIB_4__::func_722(&Local_191, 7);
				}
				else if (__LIB_0__::func_265(&(Local_191.f_2906)) >= 5f)
				{
					__LIB_5__::func_227(Local_191);
					__LIB_4__::func_722(&Local_191, 7);
				}
				break;
			case 7:
				__LIB_0__::func_11(&Local_191);
				if (__LIB_5__::func_530(&Local_191))
				{
					__LIB_4__::func_722(&Local_191, 10);
				}
				break;
			case 10:
				if (func_3(&Local_191, 0))
				{
					__LIB_5__::func_410(&Local_191, 1);
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
				func_102(uParam4);
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
					func_104(&(uParam4->f_501), 0);
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
				func_102(uParam4);
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
	__LIB_9__::func_389(iParam0);
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
	if (!func_137(iParam0))
	{
		return false;
	}
	func_138(-1, 0);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_3[0]))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_43))
	{
		iLocal_43 = OBJECT::CREATE_OBJECT(joaat("P_CS_SEANHAT01X01"), 1013.47f, -1764.25f, 47.61f, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(iLocal_43, 85.85f, 5.67f, -36.89f, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_43, true);
	}
	if (!PROPSET::_DOES_VEHICLE_HAVE_ANY_PROPSET(Local_14.f_3[0]))
	{
		PROPSET::_0xD80FAF919A2E56EA(Local_14.f_3[0], iLocal_57);
	}
	VEHICLE::_SET_VEHICLE_TINT(Local_14.f_3[0], 0);
	if (!func_139(-1, 1))
	{
		return false;
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_177[0], "S_M_M_BwmWorker_01", Local_14.f_7[0], 0);
	__LIB_5__::func_609(iParam0, Global_35, 0, 0, 0, 1);
	__LIB_5__::func_609(iParam0, uLocal_181[0], 0, 0, 0, 1);
	__LIB_5__::func_609(iParam0, uLocal_181[1], 0, 0, 0, 1);
	__LIB_5__::func_609(iParam0, Local_14.f_7[2], 0, 0, 0, 1);
	__LIB_5__::func_609(iParam0, Local_14.f_7[1], 0, 0, 0, 1);
	__LIB_5__::func_532(iParam0, iLocal_43, "P_CS_SEANHAT01X01", 0, 0, 1, 0);
	__LIB_5__::func_423(iParam0, Local_14.f_7[0], "S_M_M_BwmWorker_01");
	__LIB_5__::func_221(&(iParam0->f_428), Local_14.f_7[0], "S_M_M_BwmWorker_01", 0, 0, 0);
	__LIB_0__::func_928(&(iParam0->f_958.f_1771), Global_35, "ARTHUR", 0);
	__LIB_0__::func_928(&(iParam0->f_958.f_1771), Local_14.f_7[0], "BRT2_Servant", 0);
	if (!func_144())
	{
		return false;
	}
	DECORATOR::DECOR_SET_INT(Local_14.f_3[0], __LIB_5__::func_393(), 0);
	VEHICLE::SET_VEHICLE_EXTRA(Local_14.f_3[0], 2, false);
	PED::SET_PED_CAN_BE_TARGETTED(Local_14.f_7[0], false);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_14.f_7[0], joaat("REL_PLAYER_ALLY"));
	DECORATOR::DECOR_SET_INT(Local_14.f_7[1], __LIB_5__::func_393(), 0);
	DECORATOR::DECOR_SET_INT(Local_14.f_7[2], __LIB_5__::func_393(), 1);
	DECORATOR::DECOR_SET_INT(Local_14.f_7[0], __LIB_5__::func_393(), 2);
	func_146();
	if (PED::_0xA0BC8FAED8CFEB3C(uLocal_181[0]))
	{
		__LIB_5__::func_509(uLocal_181[0], 0, 1);
	}
	else
	{
		return false;
	}
	if (PED::_0xA0BC8FAED8CFEB3C(uLocal_181[1]))
	{
		__LIB_0__::func_169(uLocal_181[1], 0, 1);
	}
	else
	{
		return false;
	}
	if (PED::_0xA0BC8FAED8CFEB3C(Local_14.f_7[1]))
	{
		__LIB_0__::func_169(Local_14.f_7[1], 0, 1);
	}
	else
	{
		return false;
	}
	func_149(iParam0);
	__LIB_4__::func_766(iParam0, Local_14.f_3[0]);
	__LIB_11__::func_46(iParam0, Local_14.f_7[2], 1);
	return true;
}

int func_36(int iParam0)
{
	__LIB_5__::func_183(iParam0, Local_14.f_3[0], 0);
	__LIB_5__::func_183(iParam0, Local_14.f_7[2], 0);
	__LIB_5__::func_183(iParam0, Local_14.f_7[1], 0);
	__LIB_5__::func_183(iParam0, Local_14.f_7[0], 0);
	__LIB_5__::func_183(iParam0, iLocal_43, 0);
	func_160();
	__LIB_1__::func_948(1595076728, 0, 0f, 0, 0, 0, 0, 0);
	__LIB_1__::func_948(1439227364, 0, 0f, 0, 0, 0, 0, 0);
	__LIB_1__::func_948(248030525, 1, 0f, 0, 0, 0, 0, 0);
	__LIB_1__::func_948(606588923, 1, 0f, 0, 0, 0, 0, 0);
	__LIB_1__::func_948(825059846, 1, 0f, 0, 0, 0, 0, 0);
	__LIB_1__::func_948(-964389706, 1, 0f, 0, 0, 0, 0, 0);
	__LIB_1__::func_948(-1508394076, 1, 0f, 0, 0, 0, 0, 0);
	__LIB_1__::func_948(-1947039910, 1, 0f, 0, 0, 0, 0, 0);
	__LIB_1__::func_948(-1328000354, 1, 0f, 0, 0, 0, 0, 0);
	__LIB_1__::func_948(-328808006, 1, 0f, 0, 0, 0, 0, 0);
	__LIB_1__::func_948(-54440625, 1, 0f, 0, 0, 0, 1, 0);
	__LIB_1__::func_948(1202250529, 1, 0f, 0, 0, 0, 1, 0);
	AUDIO::_0x36559148B78853B3(1, 0, 0);
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
	int iVar0;
	int iVar1;
	LAW::_DISABLE_GUARD_ZONE("CALIGA_HALL");
	LAW::_DISABLE_GUARD_ZONE("BRAITHWAITE_MANOR");
	if (!bLocal_166)
	{
		if (PED::IS_PED_ON_MOUNT(Global_35))
		{
			__LIB_5__::func_511(3);
			bLocal_166 = true;
		}
	}
	if (((__LIB_1__::func_205(Global_35, iLocal_54[0], 1, 0) || __LIB_1__::func_205(Global_35, iLocal_54[1], 1, 0)) || (PED::IS_PED_IN_COMBAT(Global_35, 0) && __LIB_1__::func_205(Global_35, iLocal_45[1], 1, 0))) || (PED::IS_PED_IN_COMBAT(Global_35, 0) && __LIB_1__::func_205(Global_35, iLocal_45[2], 1, 0)))
	{
		__LIB_5__::func_450(&(Global_1835011[20 /*74*/]), 1024);
	}
	func_168();
	func_169();
	if (__LIB_0__::func_272(Local_14.f_7[0], 0) && !PED::IS_PED_INJURED(Local_14.f_7[0]))
	{
		if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
		{
			if (!MISC::ARE_STRINGS_EQUAL(__LIB_1__::func_569(cLocal_169), "NormalStart"))
			{
				StringCopy(&cLocal_169, "NormalStart", 64);
				__LIB_9__::func_964(iParam0, cLocal_169);
			}
		}
		else if (!MISC::ARE_STRINGS_EQUAL(__LIB_1__::func_569(cLocal_169), "MultiStart"))
		{
			StringCopy(&cLocal_169, "MultiStart", 64);
			__LIB_9__::func_964(iParam0, cLocal_169);
		}
	}
	if (!bLocal_163)
	{
		iVar0 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(Local_14.f_3[0], 0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			__LIB_4__::func_766(iParam0, iVar0);
			PED::SET_PED_CONFIG_FLAG(iVar0, 301, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, joaat("REL_PLAYER_ALLY"));
			bLocal_163 = true;
		}
	}
	if (!bLocal_164)
	{
		iVar1 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(Local_14.f_3[0], 1);
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			__LIB_4__::func_766(iParam0, iVar1);
			PED::SET_PED_CONFIG_FLAG(iVar1, 301, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar1, joaat("REL_PLAYER_ALLY"));
			bLocal_164 = true;
		}
	}
	if (!bLocal_165)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_14.f_7[0]))
		{
			__LIB_4__::func_766(iParam0, Local_14.f_7[0]);
			bLocal_165 = true;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(Global_35) && __LIB_0__::func_266(Global_35, 1011.08f, -1761.99f, 46.6f, 50f, 1, 1))
	{
		if (!bLocal_187 && PED::IS_PED_ON_MOUNT(Global_35))
		{
			if (__LIB_9__::func_419(Global_35, 1011.08f, -1761.99f, 46.6f, &uLocal_188, 50f, 30f, 20f, 15f, 1f, 1, 0, 1, 1, 1))
			{
				bLocal_187 = true;
			}
		}
	}
	if (!bLocal_180)
	{
		if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_177[0]))
		{
			iLocal_177[0] = ANIMSCENE::_CREATE_ANIM_SCENE("script@story@brt2@leadin@int@enter", 0, "pblLoop", false, true);
			ANIMSCENE::LOAD_ANIM_SCENE(iLocal_177[0]);
		}
		if (__LIB_0__::func_94(Global_35, 1011.08f, -1761.99f, 46.6f, 1) < 20f)
		{
			func_175(iParam0);
			bLocal_180 = true;
			__LIB_1__::func_148(&uLocal_58);
		}
	}
	else
	{
		if (__LIB_0__::func_94(Global_35, 1011.08f, -1761.99f, 46.6f, 1) > 30f)
		{
			if (__LIB_4__::func_195(1439227364) == 0f)
			{
				bLocal_180 = false;
				ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_177[0]);
			}
		}
		func_177();
	}
}

bool func_53(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_181[0]) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uLocal_181[0], true))
	{
		TASK::TASK_LOOK_AT_ENTITY(0, Global_35, -1, 0, 51, 0);
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1015.792f, -1763.483f, 46.5904f, 2f, 20000, 0.25f, 512, 40000f);
		TASK::TASK_COWER(0, -1, Global_35, 0);
		TASK::CLOSE_SEQUENCE_TASK(iVar0);
		TASK::TASK_PERFORM_SEQUENCE(uLocal_181[0], iVar0);
		TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		__LIB_5__::func_534(iParam0, 8, uLocal_181[0], 0, 0, 0, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_181[1]) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uLocal_181[1], true))
	{
		TASK::TASK_LOOK_AT_ENTITY(0, Global_35, -1, 0, 51, 0);
		PED::_0x89F5E7ADECCCB49C(uLocal_181[1], "shocked");
		TASK::OPEN_SEQUENCE_TASK(&iVar1);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1015.438f, -1768.102f, 46.5809f, 1.5f, 20000, 0.25f, 512, 40000f);
		TASK::TASK_COWER(0, -1, Global_35, 0);
		TASK::CLOSE_SEQUENCE_TASK(iVar1);
		TASK::TASK_PERFORM_SEQUENCE(uLocal_181[1], iVar1);
		TASK::CLEAR_SEQUENCE_TASK(&iVar1);
		__LIB_5__::func_534(iParam0, 5, uLocal_181[1], 0, 0, 0, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_7[0]) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_14.f_7[0], true))
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_14.f_7[0], 1001.686f, -1767.964f, 50.9998f, 2f, 20000, 0.25f, 10240, 40000f);
		__LIB_2__::func_788(&(Local_14.f_7[0]), 1, 0, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_7[2]) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_14.f_7[2], true))
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar2);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1020.253f, -1768.787f, 46.5945f, 2f, 20000, 0.25f, 512, 40000f);
		TASK::TASK_COWER(0, -1, Global_35, 0);
		TASK::CLOSE_SEQUENCE_TASK(iVar2);
		TASK::TASK_PERFORM_SEQUENCE(Local_14.f_7[2], iVar2);
		TASK::CLEAR_SEQUENCE_TASK(&iVar2);
		__LIB_2__::func_788(&(Local_14.f_7[2]), 1, 0, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_7[1]) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_14.f_7[1], true))
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar3);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1018.017f, -1766.355f, 46.5947f, 2f, 20000, 0.25f, 2560, 40000f);
		TASK::TASK_COWER(0, -1, Global_35, 0);
		TASK::CLOSE_SEQUENCE_TASK(iVar3);
		TASK::TASK_PERFORM_SEQUENCE(Local_14.f_7[1], iVar3);
		TASK::CLEAR_SEQUENCE_TASK(&iVar3);
		__LIB_2__::func_788(&(Local_14.f_7[1]), 1, 0, 1);
	}
	func_160();
	if (!__LIB_2__::func_774(20))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_14.f_3[0]));
		__LIB_1__::func_948(-54440625, 1, 0f, 0, 0, 0, 1, 0);
		__LIB_1__::func_948(1202250529, 1, 0f, 0, 0, 0, 1, 0);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("WAGON05X"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_25);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("CS_CATHERINEBRAITHWAITE"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("CS_BARTHOLOMEWBRAITHWAITE"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_CARDS02X"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_CRIBBAGE01X"));
	__LIB_1__::func_206(1018.391f, -1767.119f, 46.59343f, 1f, 0);
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_177[0]))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_177[0]);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_177[1]))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_177[1]);
	}
	__LIB_1__::func_948(1595076728, 0, 0f, 0, 0, 0, 0, 0);
	__LIB_1__::func_948(1439227364, 0, 0f, 0, 0, 0, 0, 0);
	__LIB_1__::func_948(248030525, 1, 0f, 0, 0, 0, 0, 0);
	__LIB_1__::func_948(606588923, 1, 0f, 0, 0, 0, 0, 0);
	__LIB_1__::func_948(825059846, 1, 0f, 0, 0, 0, 0, 0);
	__LIB_1__::func_948(-964389706, 1, 0f, 0, 0, 0, 0, 0);
	__LIB_1__::func_948(-1508394076, 1, 0f, 0, 0, 0, 0, 0);
	__LIB_1__::func_948(-1947039910, 1, 0f, 0, 0, 0, 0, 0);
	__LIB_1__::func_948(-1328000354, 1, 0f, 0, 0, 0, 0, 0);
	__LIB_1__::func_948(-328808006, 1, 0f, 0, 0, 0, 0, 0);
	__LIB_0__::func_484(&uLocal_44, iLocal_45[0], 0);
	__LIB_0__::func_172(iLocal_45[0]);
	__LIB_0__::func_172(iLocal_45[1]);
	POPULATION::_0x74C2B3DC0B294102(iLocal_53);
	__LIB_0__::func_172(iLocal_53);
	__LIB_5__::func_521(1f);
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
			func_253(&(uParam0->f_512));
		}
		func_254(&(uParam0->f_500), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_4__::func_749(uParam0, 0f, 0f, 0f);
		func_256(uParam0);
		func_257(uParam0);
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

void func_102(var uParam0)
{
	if (!__LIB_0__::func_84(uParam0, 536870912))
	{
		__LIB_0__::func_106(uParam0, 1);
		func_104(&(uParam0->f_501), uParam0->f_512);
		__LIB_1__::func_436();
		__LIB_0__::func_88(uParam0, 536870912);
	}
	if (__LIB_0__::func_84(uParam0, 524288))
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	__LIB_5__::func_190(uParam0);
	__LIB_1__::func_747(uParam0, 1);
	__LIB_5__::func_186(uParam0);
	__LIB_4__::func_750(uParam0);
	__LIB_0__::func_108(uParam0);
	__LIB_4__::func_784(uParam0, 4);
	__LIB_5__::func_187(uParam0);
	__LIB_0__::func_99(uParam0, 1);
	__LIB_4__::func_744(uParam0);
	__LIB_0__::func_37(&(uParam0->f_1));
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_444) && ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_444))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_444);
	}
	__LIB_4__::func_797(!__LIB_0__::func_1(uParam0->f_501, 128));
	if (!__LIB_0__::func_1(uParam0->f_501, 128))
	{
		__LIB_3__::func_120();
	}
}

void func_104(var uParam0, int iParam1)
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
		func_271(Global_35, joaat("CLOTHING_ITEM_NECKWEAR_NONE"), 0, 1742327865, 0, 1, 0, 0, 1, 0);
		__LIB_4__::func_799(joaat("KIT_BANDANA"), 0);
	}
	__LIB_1__::func_550(&(Global_1946804.f_1497), Global_35, 1, 49217, 1, 1, 1);
	if (Global_1359489.f_16 & 4194304 != 0)
	{
		Global_1359489.f_16 = (Global_1359489.f_16 - Global_1359489.f_16 & 4194304);
	}
	*uParam0 = 0;
}

bool func_128(int iParam0)
{
	func_290(iParam0);
	func_291();
	if (!func_292(iParam0))
	{
		return false;
	}
	__LIB_9__::func_168(iParam0);
	StringCopy(&cLocal_169, "MultiStart", 64);
	__LIB_5__::func_410(iParam0, 8);
	__LIB_9__::func_73(iParam0, 100f);
	__LIB_9__::func_74(iParam0, 150f);
	__LIB_1__::func_206(1018.391f, -1767.119f, 46.59343f, 2f, 0);
	uLocal_44 = __LIB_1__::func_391(iLocal_45[0], 0, 0, 8192);
	__LIB_5__::func_521(0.8f);
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
	return func_303(iParam0, iVar0, &(iParam0->f_3), bParam1, 1, iParam0->f_2903, iParam0->f_2903.f_1, iParam0->f_2903.f_2, 0, 0, 0, 0, 0);
}

bool func_137(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uLocal_181[0]))
	{
		if (!func_303(iParam0, 8, &(uLocal_181[0]), 0, 1, 0, 0, 0, 0, 0, 1, 0, 0))
		{
			return false;
		}
		if (!__LIB_0__::func_272(uLocal_181[0], 0))
		{
			return false;
		}
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_181[0], true);
	}
	func_307(uLocal_181[0], func_306(0, 0), 2, 1073741824 /* Float: 2f */);
	if (!ENTITY::DOES_ENTITY_EXIST(uLocal_181[1]))
	{
		if (!func_303(iParam0, 5, &(uLocal_181[1]), 0, 1, 0, 0, 0, 0, 0, 1, 0, 0))
		{
			return false;
		}
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_181[1], true);
	}
	func_307(uLocal_181[1], func_306(0, 0), 2, 1073741824 /* Float: 2f */);
	if (__LIB_0__::func_272(uLocal_181[1], 0) && __LIB_0__::func_272(uLocal_181[0], 0))
	{
		return true;
	}
	return false;
}

int func_138(int iParam0, bool bParam1)
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
		Local_14.f_3[0] = VEHICLE::CREATE_VEHICLE(joaat("WAGON05X"), 1002.859f, -1734.764f, 46.3179f, 3.9916f, true, true, false, false);
		__LIB_6__::func_906(Local_14.f_1, Local_14.f_3[0]);
		__LIB_5__::func_510(Local_14.f_3[0], Local_14);
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

bool func_139(int iParam0, bool bParam1)
{
	if (!__LIB_3__::func_358(Local_14.f_5))
	{
		Local_14.f_5 = { __LIB_3__::func_355() };
	}
	if (__LIB_0__::func_239(&(Local_14.f_5), 1))
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_7[0]) && (iParam0 == -1 || iParam0 == 0))
	{
		Local_14.f_7[0] = __LIB_1__::func_545(joaat("CS_BRAITHWAITEBUTLER"), 1011.081f, -1764.039f, 47.4902f, 2.7437f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		PED::SET_PED_NAME_DEBUG(Local_14.f_7[0], "Servant");
		__LIB_6__::func_906(Local_14.f_5, Local_14.f_7[0]);
		__LIB_5__::func_510(Local_14.f_7[0], Local_14);
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
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_7[1]) && (iParam0 == -1 || iParam0 == 1))
	{
		Local_14.f_7[1] = __LIB_1__::func_545(joaat("CS_BARTHOLOMEWBRAITHWAITE"), 1019.993f, -1765.721f, 47.5808f, 140.1415f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		PED::SET_PED_NAME_DEBUG(Local_14.f_7[1], "Bart");
		__LIB_6__::func_906(Local_14.f_5, Local_14.f_7[1]);
		__LIB_5__::func_510(Local_14.f_7[1], Local_14);
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
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_7[2]) && (iParam0 == -1 || iParam0 == 2))
	{
		Local_14.f_7[2] = __LIB_1__::func_545(joaat("CS_CATHERINEBRAITHWAITE"), 1019.614f, -1766.855f, 47.5808f, 54.1418f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		PED::SET_PED_NAME_DEBUG(Local_14.f_7[2], "Catherine");
		__LIB_6__::func_906(Local_14.f_5, Local_14.f_7[2]);
		__LIB_5__::func_510(Local_14.f_7[2], Local_14);
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
	__LIB_0__::func_240(&(Local_14.f_5), 1);
	return true;
}

bool func_144()
{
	if (!STREAMING::HAS_MODEL_LOADED(joaat("WAGON05X")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_25))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("CS_CATHERINEBRAITHWAITE")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("CS_BARTHOLOMEWBRAITHWAITE")))
	{
		return false;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_177[0], true, false))
	{
		return false;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_177[1], true, false))
	{
		return false;
	}
	if (!HUD::_TEXT_DATABASE_HAS_LOADED("BRT2AUD"))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("P_CARDS02X")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("P_CHAIRVICTORIAN01X")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("P_CRD_2_C01X")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("P_CRIBBAGE01X")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("P_SAUCER01X")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("P_TEACUP01X")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("S_CLOTHARTHURCOVER01X")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("P_CS_SEANHAT01X01")))
	{
		return false;
	}
	if (!PROPSET::_HAS_PROPSET_LOADED(iLocal_57))
	{
		return false;
	}
	return true;
}

void func_146()
{
	__LIB_1__::func_948(1595076728, 0, 0f, 0, 0, 0, 0, 0);
	__LIB_1__::func_948(1439227364, 0, 0f, 0, 0, 0, 0, 0);
	__LIB_1__::func_948(248030525, 1, 0f, 0, 0, 0, 0, 0);
	__LIB_1__::func_948(606588923, 1, 0f, 0, 0, 0, 0, 0);
	__LIB_1__::func_948(825059846, 1, 0f, 0, 0, 0, 0, 0);
	__LIB_1__::func_948(-964389706, 1, 0f, 0, 0, 0, 0, 0);
	__LIB_1__::func_948(-1508394076, 1, 0f, 0, 0, 0, 0, 0);
	__LIB_1__::func_948(-1947039910, 1, 0f, 0, 0, 0, 0, 0);
	__LIB_1__::func_948(-1328000354, 1, 0f, 0, 0, 0, 0, 0);
	__LIB_1__::func_948(-328808006, 1, 0f, 0, 0, 0, 0, 0);
	__LIB_1__::func_948(1620578985, 1, 0f, 0, 0, 0, 0, 0);
	__LIB_1__::func_948(-1072865219, 1, 0f, 0, 0, 0, 0, 0);
	__LIB_1__::func_948(1620578985, 1, 0f, 0, 0, 0, 0, 0);
	__LIB_1__::func_948(-1072865219, 1, 0f, 0, 0, 0, 0, 0);
	__LIB_1__::func_948(1606293329, 1, 0f, 0, 0, 0, 0, 0);
	__LIB_1__::func_948(1913469935, 1, 0f, 0, 0, 0, 0, 0);
	__LIB_1__::func_948(530930529, 1, 0f, 0, 0, 0, 0, 0);
	__LIB_1__::func_948(1299101427, 1, 0f, 0, 0, 0, 0, 0);
	__LIB_1__::func_948(23338719, 1, 0f, 0, 0, 0, 0, 0);
	__LIB_1__::func_948(785447352, 1, 0f, 0, 0, 0, 0, 0);
	__LIB_1__::func_948(-461544174, 1, 0f, 0, 0, 0, 0, 0);
	__LIB_1__::func_948(-764395272, 1, 0f, 0, 0, 0, 0, 0);
	__LIB_1__::func_948(-368185289, 1, 0f, 0, 0, 0, 0, 0);
	__LIB_1__::func_948(-656945717, 1, 0f, 0, 0, 0, 0, 0);
	__LIB_1__::func_948(-908387367, 1, 0f, 0, 0, 0, 0, 0);
	__LIB_1__::func_948(1909255102, 1, 0f, 0, 0, 0, 0, 0);
	__LIB_1__::func_948(1607714764, 1, 0f, 0, 0, 0, 0, 0);
	__LIB_1__::func_948(309406984, 1, 0f, 0, 0, 0, 0, 0);
	__LIB_1__::func_948(6326503, 1, 0f, 0, 0, 0, 0, 0);
	__LIB_1__::func_948(1221958092, 1, 0f, 0, 0, 0, 0, 0);
	__LIB_1__::func_948(-1099020037, 1, 0f, 0, 0, 0, 0, 0);
	__LIB_1__::func_948(1799856783, 1, 0f, 0, 0, 0, 0, 0);
	__LIB_1__::func_948(1518993684, 1, 0f, 0, 0, 0, 0, 0);
	__LIB_1__::func_948(426802898, 1, 0f, 0, 0, 0, 0, 0);
	__LIB_1__::func_948(121494125, 1, 0f, 0, 0, 0, 0, 0);
	__LIB_1__::func_948(-1247987911, 1, 0f, 0, 0, 0, 0, 0);
	__LIB_1__::func_948(-1550478550, 1, 0f, 0, 0, 0, 0, 0);
	__LIB_1__::func_948(-1851756788, 1, 0f, 0, 0, 0, 0, 0);
	__LIB_1__::func_948(-415917122, 1, 0f, 0, 0, 0, 0, 0);
	__LIB_1__::func_948(409697833, 1, 0f, 0, 0, 0, 0, 0);
}

void func_149(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_26))
	{
		iLocal_26 = OBJECT::CREATE_OBJECT(joaat("P_CRIBBAGE01X"), 1017.18f, -1768f, 47.2f, true, true, false, false, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_27))
	{
		iLocal_27 = OBJECT::CREATE_OBJECT(joaat("P_CARDS02X"), 1017.18f, -1768f, 47.2f, true, true, false, false, true);
	}
	if ((!ENTITY::DOES_ENTITY_EXIST(iLocal_28[0]) && !ENTITY::DOES_ENTITY_EXIST(iLocal_28[1])) && !ENTITY::DOES_ENTITY_EXIST(iLocal_28[2]))
	{
		iLocal_28[0] = OBJECT::CREATE_OBJECT(joaat("P_CRD_2_C01X"), 1017.18f, -1766.2f, 47.2f, true, true, false, false, true);
		iLocal_28[1] = OBJECT::CREATE_OBJECT(joaat("P_CRD_2_C01X"), 1017.18f, -1765.91f, 47.2f, true, true, false, false, true);
		iLocal_28[2] = OBJECT::CREATE_OBJECT(joaat("P_CRD_2_C01X"), 1017.48f, -1765.742f, 47.2f, true, true, false, false, true);
	}
	if ((!ENTITY::DOES_ENTITY_EXIST(iLocal_35[0]) && !ENTITY::DOES_ENTITY_EXIST(iLocal_35[1])) && !ENTITY::DOES_ENTITY_EXIST(iLocal_35[2]))
	{
		iLocal_35[0] = OBJECT::CREATE_OBJECT(joaat("P_TEACUP01X"), 1017.521f, -1765.502f, 47.2f, true, true, false, false, true);
		iLocal_35[1] = OBJECT::CREATE_OBJECT(joaat("P_TEACUP01X"), 1017.537f, -1765.795f, 47.2f, true, true, false, false, true);
		iLocal_35[2] = OBJECT::CREATE_OBJECT(joaat("P_TEACUP01X"), 1017.533f, -1766.003f, 47.2f, true, true, false, false, true);
	}
	if ((!ENTITY::DOES_ENTITY_EXIST(iLocal_39[0]) && !ENTITY::DOES_ENTITY_EXIST(iLocal_39[1])) && !ENTITY::DOES_ENTITY_EXIST(iLocal_39[2]))
	{
		iLocal_39[0] = OBJECT::CREATE_OBJECT(joaat("P_SAUCER01X"), 1016.71f, -1767.603f, 47.2f, true, true, false, false, true);
		iLocal_39[1] = OBJECT::CREATE_OBJECT(joaat("P_SAUCER01X"), 1016.694f, -1767.879f, 47.2f, true, true, false, false, true);
		iLocal_39[2] = OBJECT::CREATE_OBJECT(joaat("P_SAUCER01X"), 1016.687f, -1768.123f, 47.2f, true, true, false, false, true);
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_177[1], "P_CRIBBAGE01X", iLocal_26, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_177[1], "P_CARDS02X", iLocal_27, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_177[1], "P_CRD_2_C01X", iLocal_28[0], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_177[1], "P_CRD_2_C01X^1", iLocal_28[1], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_177[1], "P_CRD_2_C01X^2", iLocal_28[2], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_177[1], "P_TEACUP01X", iLocal_35[0], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_177[1], "P_TEACUP01X^1", iLocal_35[1], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_177[1], "P_TEACUP01X^3", iLocal_35[2], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_177[1], "P_SAUCER01X", iLocal_39[0], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_177[1], "P_SAUCER01X^1", iLocal_39[1], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_177[1], "P_SAUCER01X^3", iLocal_39[2], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_177[1], __LIB_0__::func_731(uLocal_181[0]), uLocal_181[0], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_177[1], __LIB_0__::func_731(uLocal_181[1]), uLocal_181[1], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_177[1], __LIB_0__::func_731(Local_14.f_7[2]), Local_14.f_7[2], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_177[1], __LIB_0__::func_731(Local_14.f_7[1]), Local_14.f_7[1], 0);
	ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_177[1], "bLoopCribbage", false, false);
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_177[1], false))
	{
		ANIMSCENE::START_ANIM_SCENE(iLocal_177[1]);
	}
}

void func_160()
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_26) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_26, true))
	{
		OBJECT::DELETE_OBJECT(&iLocal_26);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_27) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_27, true))
	{
		OBJECT::DELETE_OBJECT(&iLocal_27);
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_28[iVar0]) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_28[iVar0], true))
		{
			OBJECT::DELETE_OBJECT(&(iLocal_28[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_32[iVar0]) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uLocal_32[iVar0], true))
		{
			OBJECT::DELETE_OBJECT(&(uLocal_32[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_35[iVar0]) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_35[iVar0], true))
		{
			OBJECT::DELETE_OBJECT(&(iLocal_35[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_39[iVar0]) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_39[iVar0], true))
		{
			OBJECT::DELETE_OBJECT(&(iLocal_39[iVar0]));
		}
		iVar0++;
	}
}

void func_168()
{
	switch (iLocal_168)
	{
		case 0:
			TASK::TASK_LOOK_AT_ENTITY(iLocal_184[0], Global_35, -1, 0, 51, 1);
			TASK::TASK_LOOK_AT_ENTITY(iLocal_184[1], Global_35, -1, 0, 51, 1);
			AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_184[1], "0812_G_M_M_UniBraithwaites_01_WHITE_01");
			STREAMING::REQUEST_ANIM_DICT("script_story@brt1@ig@ig14_manor_guards");
			iLocal_168++;
			break;
		case 1:
			__LIB_1__::func_448(Global_35, 1011.48f, -1658.89f, 45.94f, 0, 1112014848 /* Float: 50f */, 15f, 10f, 2f, 1, 1, 1, 0);
			if (__LIB_1__::func_205(Global_35, iLocal_49[1], 1, 0) && !PED::IS_PED_IN_COMBAT(Global_35, 0))
			{
				if (__LIB_16__::func_866(iLocal_184[1], "GREET_SHOUTED", joaat("SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL"), Global_35, 1, "0812_G_M_M_UniBraithwaites_01_WHITE_01", 1, 1))
				{
					if (__LIB_1__::func_205(Global_35, iLocal_49[2], 1, 0))
					{
						TASK::TASK_PLAY_ANIM(iLocal_184[1], "script_story@brt1@ig@ig14_manor_guards", "guard_stop_wagon_main_guard", 8f, -8f, -1, 0, 0f, false, 0, false, 0, false);
					}
					iLocal_168++;
				}
			}
			break;
		case 2:
			__LIB_1__::func_448(Global_35, 1011.48f, -1658.89f, 45.94f, 0, 1112014848 /* Float: 50f */, 15f, 10f, 2f, 1, 1, 1, 0);
			if (__LIB_1__::func_205(Global_35, iLocal_49[0], 1, 0) && !PED::IS_PED_IN_COMBAT(Global_35, 0))
			{
				__LIB_19__::func_50(0, 2f, 3, 1056964608 /* Float: 0.5f */);
				if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
				{
					func_344();
				}
				else
				{
					func_345();
				}
				__LIB_1__::func_148(&uLocal_61);
				iLocal_168++;
			}
			break;
		case 3:
			if (!__LIB_1__::func_205(Global_35, iLocal_49[0], 1, 0))
			{
				func_346();
				iLocal_168 = (iLocal_168 - 1);
			}
			else if (((!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_184[1]) && !PED::IS_PED_IN_COMBAT(Global_35, 0)) && __LIB_0__::func_264(&uLocal_61) > 2f) && __LIB_2__::func_813(&uLocal_64, __LIB_1__::func_344("BRT2_INTRO_GATE"), 0, -1, 0, 0))
			{
				TASK::TASK_LOOK_AT_ENTITY(Global_35, iLocal_184[1], -1, 0, 51, 0);
				__LIB_1__::func_148(&uLocal_61);
				iLocal_168++;
			}
			break;
		case 4:
			if (!__LIB_1__::func_205(Global_35, iLocal_49[0], 1, 0))
			{
				iLocal_168 = (iLocal_168 - 1);
			}
			else if (((!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) && !__LIB_0__::func_481(1)) && __LIB_0__::func_264(&uLocal_61) > 3f) && __LIB_16__::func_866(iLocal_184[1], "TIME_TO_GO", joaat("SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL"), Global_35, 1, "0812_G_M_M_UniBraithwaites_01_WHITE_01", 2, 0))
			{
				func_350();
				__LIB_0__::func_37(&uLocal_61);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_184[0], false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_184[1], false);
				iLocal_168++;
			}
			break;
		case 5:
			if (!__LIB_1__::func_205(Global_35, iLocal_49[0], 1, 0))
			{
				func_346();
				iLocal_168++;
			}
	}
}

void func_169()
{
	if (__LIB_1__::func_205(Global_35, iLocal_53, 1, 0) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		__LIB_19__::func_50(1, 2f, 3, 1056964608 /* Float: 0.5f */);
	}
	else if ((ENTITY::IS_ENTITY_IN_VOLUME(PLAYER::GET_PLAYERS_LAST_VEHICLE(), iLocal_53, true, 0) && !PED::IS_PED_IN_VEHICLE(Global_35, PLAYER::GET_PLAYERS_LAST_VEHICLE(), false)) && TASK::GET_ACTIVE_VEHICLE_MISSION_TYPE(PLAYER::GET_PLAYERS_LAST_VEHICLE()) != 4)
	{
		if (ENTITY::GET_ENTITY_HEADING(PLAYER::GET_PLAYERS_LAST_VEHICLE()) < 35f || ENTITY::GET_ENTITY_HEADING(PLAYER::GET_PLAYERS_LAST_VEHICLE()) >= 330f)
		{
			TASK::_TASK_VEHICLE_DRIVE_TO_COORD_2(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1010.9f, -1740.62f, 45.58f, 2f, 0, 0, 8.5f, 8.5f);
		}
		else if (ENTITY::GET_ENTITY_HEADING(PLAYER::GET_PLAYERS_LAST_VEHICLE()) < 330f && ENTITY::GET_ENTITY_HEADING(PLAYER::GET_PLAYERS_LAST_VEHICLE()) >= 220f)
		{
			TASK::_TASK_VEHICLE_DRIVE_TO_COORD_2(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1027.09f, -1751.24f, 45.49f, 2f, 0, 0, 8.5f, 8.5f);
		}
		else if (ENTITY::GET_ENTITY_HEADING(PLAYER::GET_PLAYERS_LAST_VEHICLE()) < 210f && ENTITY::GET_ENTITY_HEADING(PLAYER::GET_PLAYERS_LAST_VEHICLE()) >= 150f)
		{
			TASK::_TASK_VEHICLE_DRIVE_TO_COORD_2(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1010.9f, -1740.62f, 45.58f, 2f, 2, 0, 8.5f, 8.5f);
		}
		else if (ENTITY::GET_ENTITY_HEADING(PLAYER::GET_PLAYERS_LAST_VEHICLE()) < 150f && ENTITY::GET_ENTITY_HEADING(PLAYER::GET_PLAYERS_LAST_VEHICLE()) >= 35f)
		{
			TASK::_TASK_VEHICLE_DRIVE_TO_COORD_2(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 993.71f, -1748.09f, 45.66f, 2f, 0, 0, 8.5f, 8.5f);
		}
	}
	else if ((TASK::GET_ACTIVE_VEHICLE_MISSION_TYPE(PLAYER::GET_PLAYERS_LAST_VEHICLE()) == 4 && !ENTITY::IS_ENTITY_IN_VOLUME(PLAYER::GET_PLAYERS_LAST_VEHICLE(), iLocal_53, true, 0)) && !PED::IS_PED_IN_VEHICLE(Global_35, PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
	{
		VEHICLE::BRING_VEHICLE_TO_HALT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1f, 1, false);
	}
}

void func_175(int iParam0)
{
	ANIMSCENE::START_ANIM_SCENE(iLocal_177[0]);
}

void func_177()
{
	char cVar0[16];
	if (iLocal_167 <= 6)
	{
		StringCopy(&cVar0, "pblLine0", 16);
		StringIntConCat(&cVar0, iLocal_167, 16);
		if (iLocal_162 == 0)
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_177[0], &cVar0);
			if (__LIB_3__::func_642(iLocal_177[0], 100) && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_177[0], &cVar0))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_177[0], &cVar0, true);
				iLocal_162 = 1;
			}
		}
		else
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_177[0], "pblWaitLoop");
			if (__LIB_3__::func_642(iLocal_177[0], 100) && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_177[0], "pblWaitLoop"))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_177[0], "pblWaitLoop", true);
				iLocal_162 = 0;
				iLocal_167++;
				__LIB_1__::func_148(&uLocal_58);
			}
		}
	}
}

void func_253(var uParam0)
{
	int iVar0;
	if (__LIB_1__::func_750(&iVar0))
	{
		if (__LIB_0__::func_144(iVar0, 0))
		{
			if (__LIB_0__::func_357(iVar0) == -525676072)
			{
				PED::_SET_PED_COMPONENT_DISABLED(Global_35, joaat("MASKS_LARGE"), 0);
				func_271(Global_35, joaat("CLOTHING_ITEM_HAT_NONE"), 0, 1108822547, 0, 1, 0, 0, 0, 0);
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

void func_254(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
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
		func_457();
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

void func_256(var uParam0)
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
			func_468(iVar1, __LIB_4__::func_760(uParam0), __LIB_4__::func_761(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_468(iVar3, __LIB_4__::func_760(uParam0), __LIB_4__::func_761(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_257(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if ((__LIB_0__::func_84(uParam0, 268435456) && !__LIB_0__::func_86(__LIB_4__::func_760(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { __LIB_4__::func_760(uParam0) };
			func_468(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

int func_271(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	struct<5> Var0;
	int iVar5;
	if (iParam3 == -358215195)
	{
		Var0 = { __LIB_2__::func_3(iParam1, 1, 0) };
		iParam3 = __LIB_0__::func_709(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!__LIB_4__::func_800(iParam1, iParam2, __LIB_0__::func_161(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_489(1, (__LIB_0__::func_2() == -1 && bParam5), 1);
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

void func_290(var uParam0)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_45[0]))
	{
		iLocal_45[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1014.835f, -1767.281f, 47.47104f, 0f, 0f, 0f, 15.31912f, 9.318451f, 2.826856f, "volManor[0]");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_45[1]))
	{
		iLocal_45[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1011.21f, -1723.56f, 47.6f, 0f, 0f, 0f, 65f, 130f, 25f, "volManor[1]");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_45[2]))
	{
		iLocal_45[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1011.268f, -1612.818f, 46.92247f, 0f, 0f, 0f, 90f, 110f, 9f, "volManor[2]");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_53))
	{
		iLocal_53 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1010.991f, -1755.437f, 46.011f, 0f, 0f, 0f, 5.839943f, 7.515967f, 2.889563f, "mVolHorseClearArea");
		POPULATION::_0xB56D41A694E42E86(iLocal_53, 2048, 0, 0, -1, -1, 0);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_54[0]))
	{
		iLocal_54[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1011f, -1777.57f, 52.54898f, 0f, 0f, 0f, 21f, 3f, 3f, "Window check Level 1");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_54[1]))
	{
		iLocal_54[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1011f, -1777.57f, 48.08995f, 0f, 0f, 0f, 21f, 3f, 3f, "Window check Level 2");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_49[0]))
	{
		iLocal_49[0] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1011.268f, -1662.212f, 46.92247f, 0f, 0f, 0f, 9f, 9f, 3f, "Gate guards (near)");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_49[1]))
	{
		iLocal_49[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1012.361f, -1654.151f, 46.58562f, 0f, 0f, 0f, 21f, 25f, 7f, "Gate guards (far)");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_49[2]))
	{
		iLocal_49[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1011.964f, -1641.009f, 46.5303f, 0f, 0f, 0f, 12f, 38f, 8f, "Gate guards (Play anim)");
	}
}

void func_291()
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_177[0]))
	{
		iLocal_177[0] = ANIMSCENE::_CREATE_ANIM_SCENE("script@story@brt2@leadin@int@enter", 0, "pblLoop", false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(iLocal_177[0]);
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_177[1]))
	{
		iLocal_177[1] = ANIMSCENE::_CREATE_ANIM_SCENE("script@story@BRT2@leadin@int@livingRoom", 0, 0, false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(iLocal_177[1]);
	}
	STREAMING::REQUEST_MODEL(joaat("WAGON05X"), false);
	STREAMING::REQUEST_MODEL(iLocal_25, false);
	STREAMING::REQUEST_MODEL(joaat("CS_CATHERINEBRAITHWAITE"), false);
	STREAMING::REQUEST_MODEL(joaat("CS_BARTHOLOMEWBRAITHWAITE"), false);
	STREAMING::REQUEST_MODEL(joaat("P_CARDS02X"), false);
	STREAMING::REQUEST_MODEL(joaat("P_CHAIRVICTORIAN01X"), false);
	STREAMING::REQUEST_MODEL(joaat("P_CRD_2_C01X"), false);
	STREAMING::REQUEST_MODEL(joaat("P_CRIBBAGE01X"), false);
	STREAMING::REQUEST_MODEL(joaat("P_SAUCER01X"), false);
	STREAMING::REQUEST_MODEL(joaat("P_TEACUP01X"), false);
	STREAMING::REQUEST_MODEL(joaat("S_CLOTHARTHURCOVER01X"), false);
	STREAMING::REQUEST_MODEL(joaat("P_CS_SEANHAT01X01"), false);
	PROPSET::_REQUEST_PROPSET(iLocal_57);
	HUD::_TEXT_DATABASE_REQUEST("BRT2AUD");
}

bool func_292(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_184[0]))
	{
		if (!__LIB_3__::func_397(617, 1))
		{
			return false;
		}
		iLocal_184[0] = __LIB_2__::func_965(617, 1, 0, 1, 1, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_184[0], true);
		func_468(iLocal_184[0], 1011.14f, -1665.689f, 45.8387f, 22.9771f, 2, 1073741824 /* Float: 2f */);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_184[1]))
	{
		if (!__LIB_3__::func_397(618, 1))
		{
			return false;
		}
		iLocal_184[1] = __LIB_2__::func_965(618, 1, 0, 1, 1, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_184[1], true);
		func_468(iLocal_184[1], 1008.248f, -1662.47f, 45.8976f, 336.1776f, 2, 1073741824 /* Float: 2f */);
	}
	if (__LIB_0__::func_272(iLocal_184[0], 0) && __LIB_0__::func_272(iLocal_184[1], 0))
	{
		return true;
	}
	return false;
}

bool func_303(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, int iParam5, int iParam6, int iParam7, float fParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12)
{
	vector3 vVar0;
	if (!__LIB_0__::func_31(iParam1))
	{
		return false;
	}
	if (__LIB_4__::func_767(iParam0, *uParam2))
	{
		if (*uParam2 != __LIB_0__::func_167(iParam1))
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
	*uParam2 = func_533(iParam1, 1, 0, vVar0.x, vVar0.y, vVar0.z, fParam8, bParam4, 1, bParam11, 0, 0, 0, iParam9, 1, bParam12, 0, 0, 1, 1, bParam10, 0, 1, 0, 1);
	if (!ENTITY::IS_ENTITY_DEAD(*uParam2))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(*uParam2))
		{
			return false;
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
		return true;
	}
	return false;
}

struct<4> func_306(int iParam0, int iParam1)
{
	return func_538(iParam0, iParam1);
}

void func_307(int iParam0, struct<4> Param1, int iParam5, float fParam6)
{
	func_468(iParam0, Param1, Param1.f_3, iParam5, fParam6);
}

void func_344()
{
	int iVar0;
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_GO_TO_ENTITY(0, PED::GET_VEHICLE_PED_IS_IN(Global_35, false), 20000, 4f, 1.5f, 2f, 0);
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 0, -1f, -1f, -1f);
	TASK::CLOSE_SEQUENCE_TASK(iVar0);
	TASK::TASK_PERFORM_SEQUENCE(iLocal_184[1], iVar0);
	TASK::CLEAR_SEQUENCE_TASK(&iVar0);
}

void func_345()
{
	int iVar0;
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_GO_TO_ENTITY(0, Global_35, 20000, 5f, 1.5f, 2f, 0);
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 0, -1f, -1f, -1f);
	TASK::CLOSE_SEQUENCE_TASK(iVar0);
	TASK::TASK_PERFORM_SEQUENCE(iLocal_184[1], iVar0);
	TASK::CLEAR_SEQUENCE_TASK(&iVar0);
}

void func_346()
{
	int iVar0;
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::SET_SEQUENCE_TO_REPEAT(iVar0, true);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1006.68f, -1659.11f, 46f, 1f, 20000, 0.25f, 0, 40000f);
	TASK::TASK_STAND_STILL(0, 4000);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1008.248f, -1662.47f, 45.8976f, 1f, 20000, 0.25f, 0, 40000f);
	TASK::TASK_STAND_STILL(0, 4000);
	TASK::CLOSE_SEQUENCE_TASK(iVar0);
	TASK::TASK_PERFORM_SEQUENCE(iLocal_184[1], iVar0);
	TASK::CLEAR_SEQUENCE_TASK(&iVar0);
}

void func_350()
{
	int iVar0;
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1014.453f, -1665.889f, 45.8356f, 1.5f, 20000, 0.25f, 0, 40000f);
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 0, -1f, -1f, -1f);
	TASK::CLOSE_SEQUENCE_TASK(iVar0);
	TASK::TASK_PERFORM_SEQUENCE(iLocal_184[0], iVar0);
	TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1005.039f, -1659.484f, 45.9784f, 1.5f, 20000, 0.25f, 0, 40000f);
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 0, -1f, -1f, -1f);
	TASK::CLOSE_SEQUENCE_TASK(iVar0);
	TASK::TASK_PERFORM_SEQUENCE(iLocal_184[1], iVar0);
	TASK::CLEAR_SEQUENCE_TASK(&iVar0);
}

void func_457()
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
	iVar0 = func_642(6291456, 0);
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

void func_468(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_468(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_468(iVar2, vParam1, fParam4, iParam5, iParam6);
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

void func_489(bool bParam0, bool bParam1, bool bParam2)
{
	func_668(&(Global_1946804.f_2589), bParam0, bParam1, bParam2);
}

int func_533(int iParam0, bool bParam1, int iParam2, var uParam3, var uParam4, var uParam5, float fParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
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
				func_468(Global_1360165[iParam0 /*1157*/], vVar0, fParam6, 2, 1073741824 /* Float: 2f */);
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

struct<4> func_538(int iParam0, int iParam1)
{
	struct<4> Var0;
	Var0 = { func_709(iParam0, iParam1) };
	Var0.f_3 = func_710(iParam0, iParam1);
	return Var0;
}

int func_642(int iParam0, int iParam1)
{
	var uVar0;
	return func_792(&uVar0, iParam0, iParam1);
}

void func_668(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		__LIB_0__::func_741(uParam0->f_2[iVar0 /*2*/], bParam1, bParam2);
		iVar0++;
	}
	if (__LIB_0__::func_2() == -1)
	{
		if ((Global_40.f_7729 != 0 || !__LIB_0__::func_222(2, Global_26796.f_776)) || Global_1946804.f_1497 != func_807(0))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = (Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] |= 4096;
				Global_1946804.f_1497 = func_807(Global_40.f_7729);
				Global_1946804.f_1378 = func_807(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_808(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		__LIB_0__::func_719(0, 1);
	}
}

Vector3 func_709(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 1016.882f, -1767.677f, 46.8313f;
				case 1:
					return 1019.942f, -1767.043f, 46.5813f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_710(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 316.9684f;
				case 1:
					return 360f;
			}
			break;
	}
	return 0f;
}

int func_792(var uParam0, int iParam1, int iParam2)
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
		return func_792(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

int func_807(int iParam0)
{
	switch (iParam0)
	{
		case 14:
			return joaat("CLOTHING_FANCY_SUIT");
		case 6:
			return joaat("CLOTHING_GUNSLINGER_OUTFIT");
		case 7:
			return joaat("CLOTHING_WINTER_OUTFIT");
		case 8:
			return 1160643979 /* GXTEntry: "The Winter Gunslinger" */;
		case 9:
			return joaat("CLOTHING_WARM_WEATHER_OUTFIT");
		case 10:
			return joaat("CLOTHING_ISLAND_OUTFIT");
		case 11:
			return 294553332 /* GXTEntry: "Island Outfit" */;
		case 12:
			return 1788874135 /* GXTEntry: "Island Outfit Shackles" */;
		case 15:
			return joaat("CLOTHING_ROBBERY_OUTFIT");
		case 16:
			return joaat("CLOTHING_HEIST_OUTFIT");
		case 17:
			return 1902428294 /* GXTEntry: "The Wittemore" */;
		case 18:
			return -2114499732;
		case 19:
			return 800827126;
		case 20:
			return joaat("CLOTHING_POLICE_OUTFIT");
		case 0:
			return joaat("CLOTHING_CUSTOM_ONE_OUTFIT");
			return 1383300684 /* GXTEntry: "Saved Custom Outfit One" */;
			return 2051441678 /* GXTEntry: "Saved Custom Outfit Two" */;
			return 162509669 /* GXTEntry: "Saved Custom Outfit Three" */;
			return 635948769 /* GXTEntry: "Saved Custom Outfit Four" */;
			return 274995506 /* GXTEntry: "Saved Custom Outfit Five" */;
			return -1826731591 /* GXTEntry: "Brawler\'s Outfit" */;
			return 2119049229;
			return 1352942778 /* GXTEntry: "The Rebel" */;
			return 1964379549 /* GXTEntry: "The Innocent" */;
			return 1201189539 /* GXTEntry: "The Pursuer" */;
			return 1351927599 /* GXTEntry: "The Grizzlies Outlaw" */;
			return 2032023096 /* GXTEntry: "The Nuevo Paraiso" */;
			return -291256376;
			return -1243402388;
			return 65931886;
			return 1371678229;
			return 2102263084;
			return -272211555 /* GXTEntry: "The Homesteader" */;
			return -55563408;
			return -1914506115;
			return 802495462;
			return 842905332;
			return -1951220140;
			return 1511551084;
			return -1725704631;
			return 1257427489;
			return -659341240;
			return 2038771525;
			return -535599244;
			return -389591806;
			return -1205612021 /* GXTEntry: "The Winter Cowboy" */;
			return 890706995 /* GXTEntry: "The Cowhand" */;
			return 1156438275 /* GXTEntry: "The Rancher" */;
			return -1611873049 /* GXTEntry: "The Rancher" */;
			return 594312243;
			return -978578725;
			return 1784889667;
			return -361635024 /* GXTEntry: "The Cowboy" */;
			return 1460520700;
			return 523337834;
			return -19271249;
			return 214175524;
			return -1303643297;
			return 411856831;
			return -926815459;
			return -1300731953;
			return -409616653 /* GXTEntry: "The Homesteader" */;
			return joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_001_H");
			return joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_001_L");
			return joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_002_H");
			return joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_002_L");
			return joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_001_H");
			return joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_001_L");
			return joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_002_H");
			return joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_002_L");
			return joaat("CLOTHING_OUTFIT_AMDSHOP_001_H");
			return joaat("CLOTHING_OUTFIT_AMDSHOP_001_L");
			return joaat("CLOTHING_OUTFIT_AMDSHOP_002_H");
			return joaat("CLOTHING_OUTFIT_AMDSHOP_002_L");
			return joaat("CLOTHING_OUTFIT_NEW_VALSHOP_001_H");
			return joaat("CLOTHING_OUTFIT_NEW_VALSHOP_001_L");
			return joaat("CLOTHING_OUTFIT_NEW_VALSHOP_002_H");
			return joaat("CLOTHING_OUTFIT_NEW_VALSHOP_002_L");
			return joaat("CLOTHING_OUTFIT_NEW_WALSHOP_001_H");
			return joaat("CLOTHING_OUTFIT_NEW_WALSHOP_001_L");
			return joaat("CLOTHING_OUTFIT_NEW_WALSHOP_002_H");
			return joaat("CLOTHING_OUTFIT_NEW_WALSHOP_002_L");
			return joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_001_H");
			return joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_001_L");
			return joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_002_H");
			return joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_002_L");
			return joaat("CLOTHING_OUTFIT_NEW_STRSHOP_001_H");
			return joaat("CLOTHING_OUTFIT_NEW_STRSHOP_001_L");
			return joaat("CLOTHING_OUTFIT_NEW_STRSHOP_002_H");
			return joaat("CLOTHING_OUTFIT_NEW_STRSHOP_002_L");
			return joaat("CLOTHING_OUTFIT_NEW_SDSHOP_001_H");
			return joaat("CLOTHING_OUTFIT_NEW_SDSHOP_001_L");
			return joaat("CLOTHING_OUTFIT_NEW_SDSHOP_002_H");
			return joaat("CLOTHING_OUTFIT_NEW_SDSHOP_002_L");
			return 0;
		}
void func_808(int iParam0, bool bParam1, int iParam2)
{
	__LIB_0__::func_742(&(Global_1946804.f_1378), iParam0);
	__LIB_0__::func_244(2, iParam0, 6);
	if (bParam1)
	{
		__LIB_0__::func_719(0, 1);
	}
}

