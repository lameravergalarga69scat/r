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
	var uLocal_14[3] = { 0, 0, 0 };
	char* sLocal_18 = NULL;
	char* sLocal_19 = NULL;
	vector3 vLocal_20 = { 0f, 0f, 0f };
	vector3 vLocal_23 = { 0f, 0f, 0f };
	float fLocal_26 = 0f;
	vector3 vLocal_27 = { 0f, 0f, 0f };
	vector3 vLocal_30 = { 0f, 0f, 0f };
	float fLocal_33 = 0f;
	vector3 vLocal_34 = { 0f, 0f, 0f };
	float fLocal_37 = 0f;
	int iLocal_38 = 0;
	vector3 vLocal_39 = { 0f, 0f, 0f };
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	bool bLocal_46 = false;
	bool bLocal_47 = false;
	bool bLocal_48 = false;
	bool bLocal_49 = false;
	bool bLocal_50 = false;
	bool bLocal_51 = false;
	int iLocal_52[2] = { 0, 0 };
	bool bLocal_55 = false;
	bool bLocal_56 = false;
	bool bLocal_57 = false;
	bool bLocal_58 = false;
	int iLocal_59[2] = { 0, 0 };
	bool bLocal_62 = false;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	float fLocal_65 = 0f;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	float fLocal_68 = 0f;
	int iLocal_69 = 0;
	int iLocal_70[5] = { 0, 0, 0, 0, 0 };
	int iLocal_76 = 0;
	int iLocal_77[3] = { 0, 0, 0 };
	vector3 vLocal_81[3] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_91[3] = { 0f, 0f, 0f };
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	var uLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	float fLocal_108 = 0f;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124[2] = { 0, 0 };
	vector3 vLocal_127[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_134[2] = { 0f, 0f };
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = -1;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 1097859072;
	var uLocal_155 = 1000;
	var uLocal_156 = 1067450368;
	var uLocal_157 = 5000;
	var uLocal_158 = 42;
	var uLocal_159 = 1103626240;
	var uLocal_160 = 1077936128;
	var uLocal_161 = 1106247680;
	var uLocal_162 = 1103101952;
	var uLocal_163 = 1097859072;
	var uLocal_164 = 1103626240;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = -1;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 1097859072;
	var uLocal_184 = 1000;
	var uLocal_185 = 1067450368;
	var uLocal_186 = 5000;
	var uLocal_187 = 42;
	var uLocal_188 = 1103626240;
	var uLocal_189 = 1077936128;
	var uLocal_190 = 1106247680;
	var uLocal_191 = 1103101952;
	var uLocal_192 = 1097859072;
	var uLocal_193 = 1103626240;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = -1;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 1097859072;
	var uLocal_213 = 1000;
	var uLocal_214 = 1067450368;
	var uLocal_215 = 5000;
	var uLocal_216 = 42;
	var uLocal_217 = 1103626240;
	var uLocal_218 = 1077936128;
	var uLocal_219 = 1106247680;
	var uLocal_220 = 1103101952;
	var uLocal_221 = 1097859072;
	var uLocal_222 = 1103626240;
	var uLocal_223 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion
void __EntryFunction__()
{
	struct<2606> Var0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	sLocal_18 = "rcm_ohBrother_barrel_0";
	sLocal_19 = "rcm_ohBrother_barrel_1";
	iLocal_64 = 1;
	fLocal_65 = 0f;
	iLocal_67 = 1;
	fLocal_68 = 0f;
	iLocal_110 = joaat("CS_TWINBROTHER_01");
	iLocal_111 = joaat("CS_TWINBROTHER_02");
	iLocal_112 = joaat("CS_TWINGROUPIE_01");
	iLocal_113 = 4;
	iLocal_114 = 3;
	iLocal_123 = joaat("P_BARREL02_OPENCS01X");
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
				__LIB_13__::func_52(uParam0);
			}
			func_74(uParam0);
		}
	}
	__LIB_13__::func_318(uParam0);
	if (__LIB_0__::func_1(uParam0->f_172, 32))
	{
		__LIB_12__::func_954(uParam0, __LIB_14__::func_74(uParam0));
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
		if (__LIB_9__::func_401(&(uParam0->f_2597)) >= 2500 || CAM::IS_SCREEN_FADED_OUT())
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
	if (!__LIB_0__::func_899(&(uParam0->f_2585)) || IntToFloat(__LIB_9__::func_401(&(uParam0->f_2585))) > __LIB_10__::func_381(uParam0))
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
	__LIB_0__::func_11(uParam0);
	if (func_92(uParam0))
	{
		func_86(uParam0);
		iVar0 = __LIB_11__::func_454(uParam0);
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
		__LIB_19__::func_321(uParam0, __LIB_0__::func_58(uParam0));
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
			else if (__LIB_9__::func_401(&(uParam0->f_2597)) >= 2500)
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
	else if (!__LIB_0__::func_899(&(uParam0->f_2585)) || IntToFloat(__LIB_9__::func_401(&(uParam0->f_2585))) > __LIB_2__::func_18(uParam0))
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
	__LIB_12__::func_656(uParam0, 20f);
	__LIB_12__::func_657(uParam0, 20f);
	POPULATION::_0x2161278C6322F740(4096, 0, 0, -1, -1, 0);
	vLocal_20 = { -1049.695f, 425.204f, 54.7933f };
	vLocal_27 = { -1050.398f, 426.2573f, 54.833f };
	vLocal_23 = { -1178.87f, 296.22f, 41.83f };
	vLocal_30 = { -1180.31f, 292.07f, 41.92f };
	fLocal_26 = 61.33f;
	fLocal_33 = 123.13f;
	vLocal_34 = { -1048.85f, 440.5558f, 55.3463f };
	fLocal_37 = -178.28f;
	vLocal_81[0 /*3*/] = { -1061.79f, 442.83f, 57.3f };
	vLocal_81[1 /*3*/] = { -1049.59f, 449.92f, 57.19f };
	vLocal_81[2 /*3*/] = { -1047.94f, 451.24f, 56.84f };
	fLocal_91[0] = 110.76f;
	fLocal_91[1] = 64.05f;
	fLocal_91[2] = -27.33f;
	vLocal_127[0 /*3*/] = { -1047.848f, 441.4106f, 54.3488f };
	vLocal_127[1 /*3*/] = { -1047.224f, 442.1866f, 54.3363f };
	fLocal_134[0] = 43.02f;
	fLocal_134[1] = 43.02f;
	vLocal_39 = { -1180.97f, 294.42f, 41.01f };
	if (__LIB_8__::func_783(948))
	{
	}
}

void func_42(var uParam0)
{
	__LIB_12__::func_908(uParam0, 0);
	__LIB_12__::func_867(uParam0, iLocal_110, 1);
	__LIB_12__::func_867(uParam0, iLocal_111, 1);
	__LIB_12__::func_867(uParam0, iLocal_112, 1);
	__LIB_12__::func_867(uParam0, iLocal_123, 1);
	__LIB_12__::func_867(uParam0, joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT"), 1);
	__LIB_13__::func_15(uParam0, sLocal_18, 2, -1, 7);
	__LIB_13__::func_15(uParam0, sLocal_19, 2, -1, 7);
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
			Var1 = { -1048.288f, 442.4067f, 55.5726f };
			Var1.f_3 = -149.64f;
			break;
		case 1:
			Var1 = { vLocal_39 };
			Var1.f_3 = 219.9599f;
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
	if (!__LIB_0__::func_272(uLocal_14[0], 1))
	{
		StringCopy(&(uParam0->f_2578), "OBT3_F_TWIN", 24);
		return true;
	}
	if (!__LIB_0__::func_272(uLocal_14[1], 1))
	{
		StringCopy(&(uParam0->f_2578), "OBT3_F_TWIN", 24);
		return true;
	}
	if (!__LIB_0__::func_272(uLocal_14[2], 1))
	{
		StringCopy(&(uParam0->f_2578), "ROBT_F_6", 24);
		return true;
	}
	if (__LIB_14__::func_77(&(uLocal_14[2]), 0, 1))
	{
		StringCopy(&(uParam0->f_2578), "ROBT_F_KILL", 24);
		return true;
	}
	if (func_207())
	{
		StringCopy(&(uParam0->f_2578), "ROBT_F_KILL", 24);
		return true;
	}
	if (iLocal_113 == 2)
	{
		if (__LIB_6__::func_703(iLocal_76))
		{
			StringCopy(&(uParam0->f_2578), "ROBT_F_HORSE", 24);
			return true;
		}
		if (!__LIB_0__::func_270())
		{
			if (!PED::IS_PED_ON_MOUNT(Global_35) || !PED::IS_PED_ON_MOUNT(uLocal_14[2]))
			{
				if (__LIB_0__::func_665(Global_35, uLocal_14[2], 1, 1) > 80f)
				{
					StringCopy(&(uParam0->f_2578), "ROBT_F_LEFT", 24);
					return true;
				}
			}
			else if (PED::IS_PED_ON_MOUNT(Global_35) && PED::IS_PED_ON_MOUNT(uLocal_14[2]))
			{
				if (__LIB_0__::func_665(Global_35, uLocal_14[2], 1, 1) > 110f)
				{
					StringCopy(&(uParam0->f_2578), "ROBT_F_LEFT", 24);
					return true;
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_124[0]))
	{
		if (((MISC::_0x7A76104CC2CC69E8(iLocal_124[0], 1, 1) || WEAPON::_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_124[0], joaat("WEAPON_THROWN_DYNAMITE"), 0)) || WEAPON::_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_124[0], joaat("WEAPON_EXPLOSION"), 0)) || func_211(vLocal_127[0 /*3*/]))
		{
			StringCopy(&(uParam0->f_2578), "ROBT_F_BARREL", 24);
			return true;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_124[1]))
	{
		if (((MISC::_0x7A76104CC2CC69E8(iLocal_124[1], 1, 1) || WEAPON::_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_124[1], joaat("WEAPON_THROWN_DYNAMITE"), 0)) || WEAPON::_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_124[1], joaat("WEAPON_EXPLOSION"), 0)) || func_211(vLocal_127[1 /*3*/]))
		{
			StringCopy(&(uParam0->f_2578), "ROBT_F_BARREL", 24);
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
	if (func_214(uParam0->f_174))
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
	if (func_223(uParam0) || __LIB_12__::func_663(uParam0->f_174, uParam0->f_743))
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
	func_228(uParam0);
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
	__LIB_12__::func_975(uParam0);
	__LIB_1__::func_564(0);
	__LIB_13__::func_29(uParam0, 0);
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
			func_243(uParam0);
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
	if (__LIB_12__::func_924(uParam0) && func_268(uParam0))
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

void func_87(var uParam0)
{
	func_287(uParam0, 0);
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
		__LIB_19__::func_321(uParam0, bVar0);
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
		if (uParam0->f_171 != 0 || func_288(uParam0))
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
	int iVar0;
	iVar0 = iParam1;
	switch (iVar0)
	{
		case 0:
			if (__LIB_12__::func_936(uParam0))
			{
				func_287(uParam0, 0);
				if (!__LIB_0__::func_1(uParam0->f_172, 1))
				{
					return 2;
				}
				__LIB_13__::func_62(uParam0, func_61(0), func_61(1), 0, 1, 0);
				return 5;
			}
			else
			{
				if (((!func_292(0) || !func_292(1)) || !func_292(2)) || !func_292(4))
				{
					return 2;
				}
				func_293();
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
				if (__LIB_0__::func_272(uLocal_14[2], 0))
				{
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_14[2], -1049.29f, 441.2254f, 55.5247f, -83.87f, true, false, true);
					ENTITY::_0x9587913B9E772D29(uLocal_14[2], 0);
				}
				if (func_294() && func_295())
				{
					__LIB_13__::func_62(uParam0, func_61(0), func_61(1), 0, 1, 0);
					if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
					{
						CAM::DO_SCREEN_FADE_IN(500);
					}
					__LIB_13__::func_105(1, 1);
					func_297(0);
					return 7;
				}
			}
			break;
		case 1:
			if (__LIB_4__::func_511())
			{
				func_287(uParam0, 2);
				__LIB_0__::func_862(uLocal_14[0], -247430782);
				__LIB_0__::func_862(uLocal_14[1], -463378621);
				if (!__LIB_0__::func_1(uParam0->f_172, 1))
				{
					return 2;
				}
				return 5;
			}
			else
			{
				if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
				{
					CAM::DO_SCREEN_FADE_IN(500);
				}
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
		__LIB_19__::func_321(uParam0, 0);
		if (!__LIB_0__::func_1(uParam0->f_172, 1048576))
		{
			return false;
		}
	}
	else
	{
		__LIB_12__::func_668();
		__LIB_12__::func_669(uParam0);
		if (!func_306(uParam0))
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
	return func_312(Var0, &(uParam0->f_206), uParam0);
}

int func_103(var uParam0)
{
	switch (iLocal_114)
	{
		case 0:
			func_293();
			POPULATION::_0x2161278C6322F740(4096, 0, 0, -1, -1, 0);
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_70[1], false))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, -1048.288f, 442.4083f, 55.5231f, -149.64f, true, false, true);
			}
			__LIB_3__::func_319(iLocal_70[3]);
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
			func_297(0);
			__LIB_0__::func_267(0);
			if (func_294() && func_295())
			{
				return 7;
			}
			break;
		case 1:
			HUD::_DISPLAY_HUD_COMPONENT(724769646);
			func_316();
			func_317();
			if (iLocal_63 < 17)
			{
				iLocal_63 = 17;
				iLocal_64 = 18;
			}
			if (iLocal_66 < 18)
			{
				iLocal_66 = 18;
				iLocal_67 = 19;
			}
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
			__LIB_0__::func_325(&iLocal_101);
			if (VOLUME::_DOES_VOLUME_EXIST(iLocal_102))
			{
				PED::_0x7C00CFC48A782DC0(iLocal_102, iLocal_124[0], 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
			}
			__LIB_0__::func_862(uLocal_14[0], -247430782);
			__LIB_0__::func_862(uLocal_14[1], -463378621);
			func_297(2);
			__LIB_0__::func_267(0);
			return 7;
		case 2:
			if (__LIB_0__::func_272(uLocal_14[2], 0))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_14[2], -1139.23f, 355.22f, 42.58f, -32.78f, true, false, true);
				ENTITY::_0x9587913B9E772D29(uLocal_14[2], 0);
			}
			if (__LIB_0__::func_272(uLocal_14[0], 0))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_14[0], -1158.177f, 345.2357f, 40.7804f, 109.8459f, true, false, true);
				ENTITY::_0x9587913B9E772D29(uLocal_14[0], 0);
				TASK::CLEAR_PED_TASKS(uLocal_14[0], true, false);
			}
			if (__LIB_0__::func_272(uLocal_14[1], 0))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_14[1], -1159.734f, 345.6231f, 40.7405f, 123.4021f, true, false, true);
				ENTITY::_0x9587913B9E772D29(uLocal_14[1], 0);
				TASK::CLEAR_PED_TASKS(uLocal_14[1], true, false);
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
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
				__LIB_13__::func_62(uParam0, func_61(0), func_61(1), 0, 1, 1);
			}
			return false;
		}
	}
	return false;
}

int func_107(var uParam0)
{
	POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	switch (iLocal_113)
	{
		case 0:
			func_287(uParam0, 1);
			func_321(uParam0);
			break;
		case 1:
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			__LIB_0__::func_325(&iLocal_101);
			__LIB_0__::func_325(&iLocal_38);
			func_287(uParam0, 1);
			return 5;
		case 2:
			func_322(uParam0);
			break;
		case 3:
			if (__LIB_6__::func_904())
			{
				__LIB_5__::func_20(0, 0);
			}
			func_287(uParam0, 2);
			PED::SET_PED_WETNESS_HEIGHT(uLocal_14[0], 1f);
			PED::SET_PED_WETNESS_HEIGHT(uLocal_14[1], 1f);
			PED::_0xF9CFF5BB70E8A2CB(uLocal_14[0], 1f);
			PED::_0xF9CFF5BB70E8A2CB(uLocal_14[1], 1f);
			return 5;
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
		func_359(Global_1347702[iParam0 /*49*/].f_15, bParam4, bParam2, bParam6, bParam5);
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
	vVar2 = { func_363(Global_2621440[0 /*12066*/].f_9.f_7, &uVar0, &uVar1, 0, 1, 1, 0, 0, 0) };
	__LIB_0__::func_321(vVar2, uVar1, uVar0, 0);
	__LIB_0__::func_322(vVar2);
	Global_40.f_9.f_15 = __LIB_1__::func_447(vVar2, 0);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	MISC::SET_RANDOM_WEATHER_TYPE(false, true);
}

bool func_150(var uParam0)
{
	float fVar0;
	bool bVar1;
	fVar0 = 100f;
	bVar1 = true;
	if (!bLocal_48)
	{
		if (__LIB_0__::func_94(Global_35, vLocal_23, 1) < fVar0)
		{
			POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
			bVar1 = false;
		}
	}
	else
	{
		func_388();
		if (__LIB_0__::func_94(Global_35, ENTITY::GET_ENTITY_COORDS(uLocal_14[0], true, false), 1) < fVar0 || __LIB_0__::func_94(Global_35, ENTITY::GET_ENTITY_COORDS(iLocal_124[0], true, false), 1) < fVar0)
		{
			POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
			bVar1 = false;
		}
	}
	if (bVar1)
	{
		return true;
	}
	return false;
}

void func_159(var uParam0)
{
	int iVar0;
	func_389(uParam0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_110);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_111);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_112);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_123);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT"));
	__LIB_0__::func_325(&iLocal_101);
	__LIB_0__::func_325(&iLocal_38);
	__LIB_0__::func_325(&iLocal_103);
	__LIB_9__::func_114(iLocal_76, -401963276, 1);
	__LIB_0__::func_172(iLocal_102);
	__LIB_0__::func_172(iLocal_69);
	__LIB_0__::func_172(iLocal_98);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		__LIB_2__::func_788(&(iLocal_77[iVar0]), 1, 0, 1);
		iVar0++;
	}
	__LIB_2__::func_161(-1038.741f, 434.0592f, 53.7465f, 150f, 5);
	if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_18))
	{
		TASK::REMOVE_WAYPOINT_RECORDING(sLocal_18);
	}
	if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_19))
	{
		TASK::REMOVE_WAYPOINT_RECORDING(sLocal_19);
	}
	__LIB_6__::func_916(&iLocal_99);
	__LIB_0__::func_400(-846371468);
	__LIB_1__::func_723(0);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		__LIB_1__::func_951(&(iLocal_124[iVar0]));
		iVar0++;
	}
}

int func_204(vector3 vParam0, var uParam3)
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
		iVar0 = func_451(0, 0);
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

bool func_207()
{
	if ((PED::IS_PED_SHOOTING(Global_35) && PLAYER::_0x72AD59F7B7FB6E24(PLAYER::PLAYER_ID(), 500)) || __LIB_1__::func_394(PLAYER::PLAYER_ID(), 0, 1, 0))
	{
		return true;
	}
	return false;
}

bool func_211(vector3 vParam0)
{
	if (FIRE::IS_EXPLOSION_IN_SPHERE(0, vParam0, 3f))
	{
		return true;
	}
	else if (FIRE::IS_EXPLOSION_IN_SPHERE(25, vParam0, 3f))
	{
		return true;
	}
	else if (FIRE::IS_EXPLOSION_IN_SPHERE(26, vParam0, 3f))
	{
		return true;
	}
	else if (FIRE::IS_EXPLOSION_IN_SPHERE(29, vParam0, 3f))
	{
		return true;
	}
	return false;
}

bool func_214(int iParam0)
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

int func_223(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_14[0]))
	{
		if (!__LIB_14__::func_72(&(uLocal_14[0]), &uLocal_137, &uLocal_165, 1, 1, 0))
		{
			bLocal_48 = true;
			__LIB_3__::func_319(iLocal_70[3]);
			return 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_14[1]))
	{
		if (!__LIB_14__::func_72(&(uLocal_14[1]), &uLocal_166, &uLocal_194, 1, 1, 0))
		{
			bLocal_48 = true;
			__LIB_3__::func_319(iLocal_70[3]);
			return 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_14[2]))
	{
		if (!__LIB_14__::func_72(&(uLocal_14[2]), &uLocal_195, &uLocal_223, 1, 1, 0))
		{
			bLocal_48 = true;
			__LIB_3__::func_319(iLocal_70[3]);
			return 1;
		}
	}
	return 0;
}

void func_228(var uParam0)
{
	func_389(uParam0);
	POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	if (__LIB_12__::func_644(uParam0) == 1)
	{
		__LIB_6__::func_916(&iLocal_99);
	}
	if (__LIB_12__::func_644(uParam0) == 0)
	{
		__LIB_6__::func_916(&iLocal_99);
		__LIB_2__::func_426(&(uLocal_14[2]));
		__LIB_2__::func_426(&(iLocal_77[0]));
		__LIB_2__::func_426(&(uLocal_14[0]));
		__LIB_2__::func_426(&(uLocal_14[1]));
	}
	__LIB_13__::func_222(uParam0, 7);
	__LIB_2__::func_259(&uLocal_117);
}

void func_243(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_172, 16))
	{
		__LIB_13__::func_29(uParam0, 0);
		func_87(uParam0);
	}
}

int func_268(var uParam0)
{
	int iVar0;
	bool bVar1;
	iVar0 = __LIB_12__::func_767(uParam0);
	bVar1 = true;
	if (!func_539(uParam0))
	{
		bVar1 = false;
		return 0;
	}
	if (!func_540(uParam0))
	{
		bVar1 = false;
		return 0;
	}
	if (!func_541())
	{
		bVar1 = false;
	}
	if (!func_542(uParam0))
	{
		bVar1 = false;
		return 0;
	}
	if (!func_543(uParam0))
	{
		bVar1 = false;
		return 0;
	}
	if (iVar0 < 0)
	{
		if (!func_292(3))
		{
			bVar1 = false;
		}
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_102))
	{
		iLocal_102 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vLocal_39, 0f, 0f, 0f, 15f, 15f, 5f, "m_volumeSearchBarrels");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_69))
	{
		iLocal_69 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1180.689f, 295.802f, 40.786f, 0f, 0f, 0f, 5f, 5f, 5f, "m_volumeScenarioBlocker");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_98))
	{
		iLocal_98 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), -1179.263f, 294.02f, 43.007f, 0f, 0f, 0f, 7f, 7f, 3f);
	}
	if (iVar0 < 0)
	{
		if (!func_544())
		{
			bVar1 = false;
		}
	}
	if (bVar1)
	{
		__LIB_2__::func_165(-1038.741f, 434.0592f, 53.7465f, 150f, 0, 0, 5);
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		POPULATION::_0xC6DCC2A3A8825C85(1);
		PED::_0x9851DE7AEC10B4E1(Global_1347702[uParam0->f_174 /*49*/].f_24, 20f, 1, 0);
		PED::_0x4C39C95AE5DB1329(iLocal_69, 0, 15);
		if (__LIB_0__::func_181())
		{
			__LIB_12__::func_875(uParam0, Global_35, "JOHN", 1);
		}
		else
		{
			__LIB_12__::func_875(uParam0, Global_35, "ARTHUR", 1);
		}
		__LIB_12__::func_777(&uLocal_137);
		__LIB_12__::func_777(&uLocal_166);
		__LIB_12__::func_777(&uLocal_195);
		__LIB_1__::func_723(1);
		MISC::_0x2916B30DC6C41179(joaat("FOG"));
		MISC::_0x2916B30DC6C41179(joaat("MISTY"));
		func_548(1);
		return 1;
	}
	return 0;
}

void func_287(var uParam0, int iParam1)
{
	int iVar0;
	char cVar1[64];
	iLocal_114 = iParam1;
	switch (iParam1)
	{
		case 0:
			StringCopy(&(uParam0->f_2575), "ROBT_S3_INT", 24);
			__LIB_12__::func_779(uParam0, ENTITY::GET_ENTITY_COORDS(uLocal_14[0], true, false));
			__LIB_13__::func_465(uParam0, 0, 0, 0);
			__LIB_12__::func_957(uParam0, uLocal_14[0], "cs_twinbrother_01", 0, 0, 0);
			__LIB_12__::func_957(uParam0, uLocal_14[1], "cs_twinbrother_02", 0, 0, 0);
			__LIB_12__::func_957(uParam0, uLocal_14[2], "cs_twingroupie_01", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_124[0], "p_barrel02_openCS01x^1", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_124[1], "p_barrel02_openCS01x", 0, 0, 0);
			iVar0 = WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Global_35, 2);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				__LIB_12__::func_957(uParam0, iVar0, "w_revolver_cattleman01", 0, 0, 0);
			}
			__LIB_13__::func_16(uParam0, 80061);
			__LIB_12__::func_981(uParam0, 80286);
			if (!__LIB_0__::func_181())
			{
				StringCopy(&cVar1, "1A-Arthur-MultiStart", 64);
				__LIB_12__::func_676(&(uParam0->f_206), &cVar1);
			}
			else if (__LIB_3__::func_736(118, 1))
			{
				StringCopy(&cVar1, "2A-JohnIntro-MultiStart", 64);
				__LIB_12__::func_676(&(uParam0->f_206), &cVar1);
			}
			else
			{
				StringCopy(&cVar1, "1B-John-MultiStart", 64);
				__LIB_12__::func_676(&(uParam0->f_206), &cVar1);
			}
			__LIB_13__::func_17(&(uParam0->f_206), &cVar1, 0);
			__LIB_0__::func_88(&(uParam0->f_206), 33554432);
			__LIB_0__::func_88(&(uParam0->f_206), 268435456);
			__LIB_0__::func_7(&(uParam0->f_172), 16);
			break;
		case 1:
			StringCopy(&(uParam0->f_2575), "ROBT_S3_MCS1", 24);
			__LIB_12__::func_779(uParam0, ENTITY::GET_ENTITY_COORDS(uLocal_14[0], true, false));
			__LIB_13__::func_465(uParam0, 0, 0, 0);
			__LIB_12__::func_957(uParam0, uLocal_14[2], "cs_twingroupie_01", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_124[0], "p_barrel02_openCS01x^1", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_124[1], "p_barrel02_openCS01x", 0, 0, 0);
			__LIB_13__::func_16(uParam0, 80061);
			__LIB_12__::func_981(uParam0, 80286);
			__LIB_0__::func_7(&(uParam0->f_172), 16);
			break;
		case 2:
			StringCopy(&(uParam0->f_2575), "ROBT_S3_EXT", 24);
			__LIB_12__::func_779(uParam0, vLocal_23);
			__LIB_13__::func_465(uParam0, 0, 0, 0);
			__LIB_12__::func_957(uParam0, uLocal_14[0], "cs_twinbrother_01", 1, 0, 0);
			__LIB_12__::func_957(uParam0, uLocal_14[1], "cs_twinbrother_02", 1, 0, 0);
			__LIB_12__::func_957(uParam0, uLocal_14[2], "cs_twingroupie_01", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_77[0], "Horse_01", 0, 0, 0);
			__LIB_13__::func_16(uParam0, 80061);
			__LIB_12__::func_981(uParam0, 80286);
			__LIB_0__::func_7(&(uParam0->f_172), 16);
			break;
	}
	__LIB_0__::func_7(&(uParam0->f_172), 16);
}

bool func_288(var uParam0)
{
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	if (!bLocal_58)
	{
		if (__LIB_0__::func_48(Global_35, uLocal_14[0], 20f, 1))
		{
			AUDIO::TRIGGER_MUSIC_EVENT("OBT3_APPROACH");
			bLocal_58 = true;
		}
	}
	else if (!__LIB_0__::func_48(Global_35, uLocal_14[0], 20f, 1))
	{
		AUDIO::TRIGGER_MUSIC_EVENT("OBT3_ABANDON");
		bLocal_58 = false;
	}
	if (((!ANIMSCENE::_0x8D81E7824B7753F7(iLocal_70[3], "s_dialogue_1", 1) && !ANIMSCENE::_0x8D81E7824B7753F7(iLocal_70[3], "s_dialogue_2", 1)) && !ANIMSCENE::_0x8D81E7824B7753F7(iLocal_70[3], "s_dialogue_3", 1)) && !ANIMSCENE::_0x8D81E7824B7753F7(iLocal_70[3], "s_dialogue_4", 1))
	{
		if (__LIB_0__::func_665(iLocal_124[0], Global_35, 1, 1) < 2f)
		{
			func_581(uParam0);
		}
		else
		{
			func_582(uParam0);
		}
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_70[3], false))
	{
		if (ANIMSCENE::_0x1F0E401031E20146(iLocal_70[3], "pl_dialogue_to_leadin"))
		{
			if (!ANIMSCENE::_0x8D81E7824B7753F7(iLocal_70[3], "s_leadin", 1))
			{
				if (__LIB_0__::func_48(Global_35, uLocal_14[0], 3f, 1) && !PED::IS_PED_FALLING(Global_35))
				{
					if (!bLocal_50)
					{
						PLAYER::_0x3946FC742AC305CD(PLAYER::GET_PLAYER_INDEX(), uLocal_14[0], "RC_OBT3", 0f, 0f, 0f, 0, "OBT3_DIS");
						bLocal_50 = true;
					}
					return true;
				}
				else if (__LIB_0__::func_48(Global_35, uLocal_14[0], 15f, 1))
				{
					if (!bLocal_49)
					{
						if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_70[3], "s_dialogue_4", 1))
						{
							if (ANIMSCENE::GET_ANIM_SCENE_BOOL(iLocal_70[3], "Loop_Base") == 1)
							{
								ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_70[3], "Loop_Base", false, false);
								bLocal_49 = true;
								return false;
							}
						}
						if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_70[3], "s_Base", 1))
						{
							if (ANIMSCENE::GET_ANIM_SCENE_BOOL(iLocal_70[3], "Loop_Base") == 0)
							{
								ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_70[3], "Loop_Base", true, false);
							}
						}
					}
				}
				else if (ANIMSCENE::GET_ANIM_SCENE_BOOL(iLocal_70[3], "Loop_Base") == 1)
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_70[3], "Loop_Base", false, false);
				}
			}
		}
	}
	return false;
}

bool func_292(int iParam0)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_70[iParam0]))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_70[iParam0], true, false))
		{
			return true;
		}
	}
	else
	{
		if (iParam0 == 0)
		{
			iLocal_70[0] = ANIMSCENE::_CREATE_ANIM_SCENE(func_585(0), 0, "pbl_Start_Loop", false, true);
		}
		else if (iParam0 == 1)
		{
			iLocal_70[1] = ANIMSCENE::_CREATE_ANIM_SCENE(func_585(1), 0, "pbl_Start_Loop", false, true);
		}
		else if (iParam0 == 2)
		{
			iLocal_70[2] = ANIMSCENE::_CREATE_ANIM_SCENE(func_585(2), 0, "pbl_Push_Barrels", false, true);
		}
		else if (iParam0 == 3)
		{
			iLocal_70[3] = ANIMSCENE::_CREATE_ANIM_SCENE(func_585(3), 0, "pl_dialogue_to_leadin", false, true);
		}
		else if (iParam0 == 4)
		{
			iLocal_70[4] = ANIMSCENE::_CREATE_ANIM_SCENE(func_585(4), 0, "pl_leadin", false, true);
		}
		else
		{
			iLocal_70[iParam0] = ANIMSCENE::_CREATE_ANIM_SCENE(func_585(iParam0), 0, 0, false, true);
		}
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_70[iParam0]))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(iLocal_70[iParam0]);
		}
	}
	return false;
}

void func_293()
{
	if (__LIB_0__::func_272(uLocal_14[0], 0) && !iLocal_52[0])
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_14[0], false, true);
		PED::SET_PED_CAN_BE_TARGETTED(uLocal_14[0], false);
		ENTITY::SET_ENTITY_INVINCIBLE(uLocal_14[0], true);
		func_586(&(uLocal_14[0]), 1, 0);
		ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uLocal_14[0], false, false);
		__LIB_7__::func_880(uLocal_14[0], iLocal_124[0], 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0);
		ENTITY::_0x002AAC783ED323ED(uLocal_14[0], 1);
		iLocal_52[0] = 1;
	}
	if (__LIB_0__::func_272(uLocal_14[1], 0) && !iLocal_52[1])
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_14[1], false, true);
		PED::SET_PED_CAN_BE_TARGETTED(uLocal_14[1], false);
		ENTITY::SET_ENTITY_INVINCIBLE(uLocal_14[1], true);
		func_586(&(uLocal_14[1]), 1, 0);
		ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uLocal_14[1], false, false);
		__LIB_7__::func_880(uLocal_14[1], iLocal_124[1], 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0);
		ENTITY::_0x002AAC783ED323ED(uLocal_14[1], 1);
		iLocal_52[1] = 1;
	}
}

int func_294()
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_70[0]))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_70[1], false))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_70[0], true, false))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_70[0], "cs_twingroupie_01", uLocal_14[2], 0);
				ANIMSCENE::START_ANIM_SCENE(iLocal_70[0]);
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_295()
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_70[1]))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_70[1], false))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_70[1], true, false))
			{
				if (__LIB_0__::func_181())
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_70[1], "PLAYER_THREE", Global_35, 0);
				}
				else
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_70[1], "player_zero", Global_35, 0);
				}
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_70[1], "p_barrel02_openCS01x^1", iLocal_124[0], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_70[1], "p_barrel02_opencs01x", iLocal_124[1], 0);
				ANIMSCENE::START_ANIM_SCENE(iLocal_70[1]);
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_297(int iParam0)
{
	if (iLocal_113 == iParam0)
	{
		return;
	}
	iLocal_113 = iParam0;
	switch (iLocal_113)
	{
		case 0:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
	}
}

bool func_306(var uParam0)
{
	if (__LIB_6__::func_904())
	{
		__LIB_5__::func_20(0, 0);
	}
	if (iLocal_114 == 1)
	{
		CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_70[3]))
	{
		PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "OBT3_DIS");
		return true;
	}
	else
	{
		return true;
	}
	return false;
}

int func_312(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	int iVar0;
	__LIB_12__::func_750(uParam4, &uParam0);
	if (__LIB_0__::func_84(uParam4, 2) && !__LIB_0__::func_84(uParam4, 67108864))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SKIP_CUTSCENE"), false);
	}
	if (__LIB_0__::func_81(uParam4) != 1)
	{
		__LIB_13__::func_457(uParam4);
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
				if (__LIB_13__::func_191(uParam4, &uParam0, 1, 1))
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
					__LIB_13__::func_192(uParam4, &uParam0, uParam5);
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
			func_617(uParam4);
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
				__LIB_13__::func_457(uParam4);
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
				__LIB_13__::func_329(uParam4);
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
				__LIB_13__::func_329(uParam4);
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

void func_316()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_124[iVar0]) && ENTITY::_IS_ENTITY_FROZEN(iLocal_124[iVar0]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_124[iVar0], false);
			ENTITY::SET_ENTITY_COLLISION(iLocal_124[iVar0], false, false);
		}
		iVar0++;
	}
}

void func_317()
{
	iLocal_109 = PED::GET_PED_GROUP_INDEX(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()));
	PED::SET_GROUP_FORMATION(iLocal_109, 10);
	if (!PED::IS_PED_GROUP_MEMBER(uLocal_14[2], iLocal_109, 0))
	{
		PED::SET_PED_AS_GROUP_MEMBER(uLocal_14[2], iLocal_109);
		PED::SET_PED_CONFIG_FLAG(uLocal_14[2], 279, true);
	}
}

void func_321(var uParam0)
{
	func_663(uParam0);
	if (iLocal_115 == 3)
	{
		func_297(1);
	}
}

void func_322(var uParam0)
{
	func_664();
	func_665();
	if (func_666() && !bLocal_51)
	{
		if (func_667())
		{
			bLocal_51 = true;
		}
	}
	func_668();
	if ((__LIB_0__::func_94(Global_35, vLocal_39, 1) < 15f && iLocal_64 == 68) && iLocal_67 == 73)
	{
		__LIB_9__::func_204(Global_35, vLocal_39, &uLocal_95, 40f, 35f, 25f, 20f, 3f, 0, 0, 1, 1, 1);
		if (__LIB_0__::func_665(Global_35, uLocal_14[2], 1, 1) < 10f || __LIB_0__::func_94(uLocal_14[2], vLocal_39, 1) < 12f)
		{
			if (PED::IS_PED_ON_MOUNT(uLocal_14[2]))
			{
				if (!__LIB_0__::func_163(uLocal_14[2], 501393341))
				{
					TASK::TASK_DISMOUNT_ANIMAL(uLocal_14[2], 0, 0, 0, 0, 0);
				}
			}
		}
		else if (!PED::IS_PED_IN_GROUP(uLocal_14[2]))
		{
			__LIB_9__::func_928(uLocal_14[2], iLocal_109);
			TASK::TASK_CLEAR_LOOK_AT(uLocal_14[2]);
		}
		func_672(uParam0);
		if (!PED::IS_PED_ON_MOUNT(uLocal_14[2]))
		{
			__LIB_3__::func_456(uLocal_14[2]);
			if (!__LIB_0__::func_163(uLocal_14[2], -1824940423))
			{
				TASK::TASK_GO_TO_COORD_ANY_MEANS(uLocal_14[2], vLocal_39, 3f, 0, false, 524419, -1f);
			}
			else if (ANIMSCENE::GET_ANIM_SCENE_BOOL(iLocal_70[4], "b_loop_base") == 0)
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_70[4], "b_loop_base", true, false);
			}
		}
		func_287(uParam0, 2);
		if (((ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_70[4], false) && ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_70[4]) > 13.5f) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iLocal_70[4], false)) || ANIMSCENE::_0xF94692EB9DC15D74(iLocal_70[4], 0))
		{
			__LIB_9__::func_114(iLocal_76, -401963276, 1);
			__LIB_0__::func_325(&iLocal_103);
			func_297(3);
		}
	}
	else if (__LIB_0__::func_94(Global_35, vLocal_39, 1) < 30f)
	{
		__LIB_9__::func_204(Global_35, vLocal_39, &uLocal_95, 40f, 35f, 25f, 20f, 3f, 0, 0, 1, 1, 1);
		if (!PED::IS_PED_IN_GROUP(uLocal_14[2]))
		{
			__LIB_9__::func_928(uLocal_14[2], iLocal_109);
			TASK::TASK_CLEAR_LOOK_AT(uLocal_14[2]);
		}
		if (!PED::IS_PED_ON_MOUNT(Global_35))
		{
			if (!MAP::DOES_BLIP_EXIST(iLocal_38))
			{
				iLocal_38 = MAP::_BLIP_ADD_FOR_ENTITY(-89429847, uLocal_14[2]);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_38, "OBT3_BLIP_SWEETHEART");
			}
			__LIB_9__::func_114(iLocal_76, -401963276, 1);
			if (__LIB_0__::func_94(uLocal_14[2], vLocal_39, 1) < 10f)
			{
				__LIB_3__::func_456(uLocal_14[2]);
				if (PED::IS_PED_ON_MOUNT(uLocal_14[2]))
				{
					if (!__LIB_0__::func_163(uLocal_14[2], 501393341))
					{
						TASK::TASK_DISMOUNT_ANIMAL(uLocal_14[2], 0, 0, 0, 0, 0);
					}
				}
			}
		}
		else if (VOLUME::_DOES_VOLUME_EXIST(iLocal_102) && !MAP::DOES_BLIP_EXIST(iLocal_103))
		{
			iLocal_103 = __LIB_8__::func_775(-308585968, iLocal_102, 1);
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_103, "OBT3_BLIP_DOWNSTREAM");
		}
	}
	else
	{
		__LIB_11__::func_525(uLocal_14[2], iLocal_76, iLocal_109);
		if (PED::IS_PED_ON_MOUNT(Global_35))
		{
			__LIB_9__::func_114(iLocal_76, -401963276, 1);
			if (VOLUME::_DOES_VOLUME_EXIST(iLocal_102) && !MAP::DOES_BLIP_EXIST(iLocal_103))
			{
				iLocal_103 = __LIB_8__::func_775(-308585968, iLocal_102, 1);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_103, "OBT3_BLIP_DOWNSTREAM");
			}
			if (!bLocal_57 && !__LIB_6__::func_904())
			{
				if (__LIB_13__::func_123(uParam0, "ROBT3_FOLLOW_", 0, 0))
				{
					bLocal_57 = true;
				}
			}
			if (PED::IS_PED_ON_MOUNT(uLocal_14[2]))
			{
				if (!bLocal_62)
				{
					TASK::CLEAR_PED_TASKS(uLocal_14[2], true, false);
					bLocal_62 = true;
				}
				func_677(uParam0);
				if (!__LIB_6__::func_904())
				{
					if (iLocal_116 != 3)
					{
						iLocal_116 = 3;
					}
					func_678(uParam0);
				}
			}
		}
		else
		{
			func_679(uParam0);
			PLAYER::_0xC71D07C96946E263(PLAYER::PLAYER_ID(), iLocal_76);
			__LIB_0__::func_325(&iLocal_103);
			__LIB_3__::func_356(iLocal_76, -401963276, 1);
			if (!MAP::DOES_BLIP_EXIST(iLocal_38))
			{
				iLocal_38 = MAP::_BLIP_ADD_FOR_ENTITY(-89429847, uLocal_14[2]);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_38, "OBT3_BLIP_SWEETHEART");
			}
			func_681();
			if (!bLocal_56)
			{
				if (__LIB_13__::func_123(uParam0, "ROBT3_AT_ONCE_", 0, 0))
				{
					bLocal_56 = true;
				}
			}
		}
	}
}

void func_359(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
		func_708(__LIB_0__::func_76(iParam0), iVar6, __LIB_0__::func_871());
	}
	else if (iVar0 == 8)
	{
		func_709(__LIB_0__::func_76(iParam0), iVar6, __LIB_0__::func_871(), __LIB_0__::func_113());
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
						func_720(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_720(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_720(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_720(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_720(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_720(joaat("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_720(joaat("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_720(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_720(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_720(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_720(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_720(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_720(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_720(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_720(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_720(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_720(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_720(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_720(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_720(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_720(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_720(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_720(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_720(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_720(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_722();
						func_723(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
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
						func_720(joaat("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
							func_359(Global_1347702[21 /*49*/].f_15, 0, 0, 0, 0);
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
							func_359(Global_1347702[82 /*49*/].f_15, 0, 0, 0, 0);
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
							func_359(Global_1347702[83 /*49*/].f_15, 0, 0, 0, 0);
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
						func_720(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_720(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
		func_758();
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
							func_720(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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

Vector3 func_363(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10)
{
	vector3 vVar0;
	vVar0 = { func_765(vParam0, iParam3, iParam4, iParam5, iParam6, 1, iParam7, bParam8, bParam9, bParam10, -1, 1103626240 /* Float: 25f */) };
	if (__LIB_0__::func_86(vVar0))
	{
		vVar0 = { func_765(vParam0, iParam3, iParam4, 0, 1, 1, iParam7, bParam8, 0, 0, -1, 1103626240 /* Float: 25f */) };
	}
	return vVar0;
}

int func_388()
{
	bool bVar0;
	bVar0 = false;
	if (bLocal_48)
	{
		bVar0 = true;
	}
	if (__LIB_14__::func_77(&(uLocal_14[0]), 0, 1))
	{
		bVar0 = true;
	}
	if (__LIB_14__::func_77(&(uLocal_14[1]), 0, 1))
	{
		bVar0 = true;
	}
	if (__LIB_14__::func_77(&(uLocal_14[2]), 0, 1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_796(&(uLocal_14[2]));
		func_796(&(uLocal_14[0]));
		func_796(&(uLocal_14[1]));
		return 1;
	}
	return 0;
}

void func_389(var uParam0)
{
	if (!__LIB_0__::func_1(uParam0->f_172, 8))
	{
		return;
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	__LIB_3__::func_456(uLocal_14[2]);
	PED::REMOVE_GROUP(iLocal_109);
	PERSCHAR::_0x4F81EAD1DE8FA19B(__LIB_0__::func_120(948));
	POPULATION::_0xBC90BDF4E5228EA1();
	__LIB_0__::func_267(1);
	HUD::_DISPLAY_HUD_COMPONENT(724769646);
	PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "OBT3_DIS");
	MISC::_0x243CEDE8F916B994();
	func_548(0);
}

int func_451(int iParam0, int iParam1)
{
	var uVar0;
	return func_851(&uVar0, iParam0, iParam1);
}

bool func_539(var uParam0)
{
	if (__LIB_14__::func_75(uParam0, &(uLocal_14[0]), iLocal_110, vLocal_20, fLocal_26, 1))
	{
		__LIB_13__::func_260(uParam0, uLocal_14[0]);
		if (!PED::GET_PED_CONFIG_FLAG(uLocal_14[0], 315, true))
		{
			ENTITY::_0x9587913B9E772D29(uLocal_14[0], 0);
			__LIB_4__::func_7(uLocal_14[0], joaat("WEAPON_REVOLVER_CATTLEMAN"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			WEAPON::SET_CURRENT_PED_WEAPON(uLocal_14[0], joaat("WEAPON_REVOLVER_CATTLEMAN"), true, 2, false, false);
			PED::SET_PED_CONFIG_FLAG(uLocal_14[0], 315, true);
			PED::SET_PED_CAN_BE_TARGETTED(uLocal_14[0], false);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_14[0], joaat("REL_PLAYER_ALLY"));
			PED::SET_PED_FLEE_ATTRIBUTES(uLocal_14[0], 512, true);
			PED::SET_PED_CAN_RAGDOLL(uLocal_14[0], false);
			__LIB_3__::func_937(uLocal_14[0]);
			__LIB_3__::func_459(uLocal_14[0], 1);
			__LIB_12__::func_875(uParam0, uLocal_14[0], "ROBT_Twin1", 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_110);
		}
		return true;
	}
	return false;
}

bool func_540(var uParam0)
{
	if (__LIB_14__::func_75(uParam0, &(uLocal_14[1]), iLocal_111, vLocal_27, fLocal_33, 1))
	{
		__LIB_13__::func_260(uParam0, uLocal_14[1]);
		if (!PED::GET_PED_CONFIG_FLAG(uLocal_14[1], 315, true))
		{
			ENTITY::_0x9587913B9E772D29(uLocal_14[1], 0);
			__LIB_4__::func_7(uLocal_14[1], joaat("WEAPON_REVOLVER_CATTLEMAN"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			WEAPON::SET_CURRENT_PED_WEAPON(uLocal_14[1], joaat("WEAPON_REVOLVER_CATTLEMAN"), true, 2, false, false);
			PED::SET_PED_CONFIG_FLAG(uLocal_14[1], 315, true);
			PED::SET_PED_CAN_BE_TARGETTED(uLocal_14[1], false);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_14[1], joaat("REL_PLAYER_ALLY"));
			PED::SET_PED_FLEE_ATTRIBUTES(uLocal_14[1], 512, true);
			PED::SET_PED_CAN_RAGDOLL(uLocal_14[1], false);
			ENTITY::_0x18FF3110CF47115D(uLocal_14[0], 7, 0);
			__LIB_3__::func_937(uLocal_14[1]);
			__LIB_3__::func_459(uLocal_14[1], 1);
			__LIB_12__::func_875(uParam0, uLocal_14[1], "ROBT_Twin2", 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_111);
		}
		return true;
	}
	return false;
}

bool func_541()
{
	int iVar0;
	if (iLocal_42 == 2)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_123);
		return true;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_124[iVar0]))
		{
			iLocal_124[iVar0] = OBJECT::CREATE_OBJECT(iLocal_123, vLocal_127[iVar0 /*3*/], true, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(iLocal_124[iVar0], fLocal_134[iVar0]);
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_124[iVar0], true);
			if (!ENTITY::_IS_ENTITY_FROZEN(iLocal_124[iVar0]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_124[iVar0], true);
			}
			iLocal_42++;
		}
		iVar0++;
	}
	return false;
}

bool func_542(var uParam0)
{
	if (__LIB_14__::func_75(uParam0, &(uLocal_14[2]), iLocal_112, vLocal_34, fLocal_37, 1))
	{
		if (!PED::GET_PED_CONFIG_FLAG(uLocal_14[2], 315, true))
		{
			__LIB_13__::func_260(uParam0, uLocal_14[2]);
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(uLocal_14[2], true);
			PED::SET_PED_CAN_BE_TARGETTED(uLocal_14[2], false);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_14[2], joaat("REL_PLAYER_ALLY"));
			PED::SET_PED_FLEE_ATTRIBUTES(uLocal_14[2], 512, true);
			PED::SET_PED_CONFIG_FLAG(uLocal_14[2], 315, true);
			TASK::SET_PED_PATH_MAY_ENTER_WATER(uLocal_14[2], true);
			PED::SET_PED_CONFIG_FLAG(uLocal_14[2], 265, false);
			PED::SET_PED_CONFIG_FLAG(uLocal_14[2], 297, true);
			PED::SET_PED_CONFIG_FLAG(uLocal_14[2], 315, true);
			PED::SET_PED_CONFIG_FLAG(uLocal_14[2], 130, true);
			PED::SET_PED_CONFIG_FLAG(uLocal_14[2], 331, true);
			PED::SET_PED_CONFIG_FLAG(uLocal_14[2], 330, true);
			__LIB_12__::func_875(uParam0, uLocal_14[2], "ROBT_GROUPIE_0", 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_112);
		}
		return true;
	}
	return false;
}

bool func_543(var uParam0)
{
	if (iLocal_43 == 3)
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_77[iLocal_43]))
	{
		iLocal_77[iLocal_43] = __LIB_12__::func_885(uParam0, joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT"), vLocal_81[iLocal_43 /*3*/], fLocal_91[iLocal_43], 1, 1, 0, 1, 1, 1, 1, 0);
	}
	if (ENTITY::IS_ENTITY_DEAD(iLocal_77[iLocal_43]))
	{
		return false;
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_77[iLocal_43], true);
	if (!__LIB_0__::func_163(iLocal_77[iLocal_43], 993674639))
	{
		__LIB_1__::func_473(iLocal_77[iLocal_43], joaat("WORLD_ANIMAL_HORSE_DRINK_GROUND"), 0, 0, 0, -1082130432 /* Float: -1f */);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT"));
	iLocal_43++;
	return false;
}

bool func_544()
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_70[3]))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_70[3], true, false))
		{
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_70[3], false))
			{
				if (__LIB_0__::func_181())
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_70[3], "b_playerArthur", false, false);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_70[3], "JOHN", Global_35, 0);
				}
				else
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_70[3], "b_playerArthur", true, false);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_70[3], "ARTHUR", Global_35, 0);
				}
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_70[3], "p_barrel02_openCS01x^1", iLocal_124[0], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_70[3], "p_barrel02_opencs01x", iLocal_124[1], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_70[3], "TwinBrother_01", uLocal_14[0], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_70[3], "TwinBrother_02", uLocal_14[1], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_70[3], "TwinGroupie_01", uLocal_14[2], 0);
				ANIMSCENE::START_ANIM_SCENE(iLocal_70[3]);
				return true;
			}
			else
			{
				return true;
			}
		}
	}
	return false;
}

void func_548(bool bParam0)
{
	AUDIO::_0x0D7FD6A55FD63AEF(7, 3, bParam0);
	AUDIO::_0x0D7FD6A55FD63AEF(25, 3, bParam0);
	AUDIO::_0x0D7FD6A55FD63AEF(21, 3, bParam0);
	AUDIO::_0x0D7FD6A55FD63AEF(19, 3, bParam0);
	AUDIO::_0x0D7FD6A55FD63AEF(23, 3, bParam0);
	AUDIO::_0x0D7FD6A55FD63AEF(22, 3, bParam0);
	if (bParam0)
	{
		PED::_0x1E017404784AA6A3(uLocal_14[2], joaat("ROBT_RIDE1"));
	}
	else
	{
		PED::_0x2B4CE170DE09F346(uLocal_14[2], joaat("ROBT_RIDE1"));
	}
}

void func_575(var uParam0)
{
	switch (iLocal_114)
	{
		case 0:
			__LIB_3__::func_319(iLocal_70[3]);
			__LIB_1__::func_572(-1043.598f, 433.0054f, 53.5954f, 100f, 0, 0, 1, 1, 0);
			break;
		case 1:
			func_966(uLocal_14[0], vLocal_23);
			func_966(uLocal_14[1], vLocal_30);
			__LIB_0__::func_862(uLocal_14[0], -247430782);
			__LIB_0__::func_862(uLocal_14[1], -463378621);
			break;
		case 2:
			__LIB_0__::func_172(iLocal_98);
			if (__LIB_0__::func_272(iLocal_76, 0))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_76, -1176.074f, 315.3127f, 41.7123f, 201.5278f, true, false, true);
				ENTITY::_0x9587913B9E772D29(iLocal_76, 0);
				TASK::TASK_STAND_STILL(iLocal_76, -1);
			}
			__LIB_0__::func_325(&iLocal_101);
			__LIB_0__::func_325(&iLocal_38);
			break;
	}
}

void func_577(var uParam0)
{
	switch (iLocal_114)
	{
		case 0:
			func_292(0);
			func_292(1);
			func_292(2);
			func_292(4);
			if (ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_348) > 60f)
			{
				func_293();
			}
			if (__LIB_13__::func_218(uParam0, Global_35, 0, 0, 1, 1))
			{
				if (__LIB_0__::func_181())
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_70[1], "PLAYER_THREE", Global_35, 0);
				}
				else
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_70[1], "player_zero", Global_35, 0);
				}
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_70[1], "p_barrel02_openCS01x^1", iLocal_124[0], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_70[1], "p_barrel02_opencs01x", iLocal_124[1], 0);
				ANIMSCENE::START_ANIM_SCENE(iLocal_70[1]);
			}
			if (__LIB_13__::func_218(uParam0, uLocal_14[2], "cs_twingroupie_01", 0, 1, 1))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_70[0], "cs_twingroupie_01", uLocal_14[2], 0);
				ANIMSCENE::START_ANIM_SCENE(iLocal_70[0]);
			}
			func_969();
			break;
		case 1:
			func_317();
			if (__LIB_13__::func_218(uParam0, Global_35, 0, 0, 1, 1))
			{
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::GET_PLAYER_INDEX(), 1f, 3000, 0f, true, false);
			}
			func_969();
			break;
		case 2:
			break;
	}
}

void func_581(var uParam0)
{
	if (__LIB_0__::func_665(iLocal_124[0], Global_35, 1, 1) < 2f)
	{
		if (__LIB_0__::func_899(&uLocal_120) && !__LIB_6__::func_904())
		{
			if (__LIB_1__::func_583(&uLocal_120) > MISC::GET_RANDOM_FLOAT_IN_RANGE(3f, 6f))
			{
				if (!__LIB_0__::func_270())
				{
					if (__LIB_12__::func_876(uParam0, "ROBT3_BARRELS", 0))
					{
						__LIB_2__::func_259(&uLocal_120);
					}
				}
			}
		}
		else
		{
			__LIB_2__::func_259(&uLocal_120);
		}
	}
}

void func_582(var uParam0)
{
	if (__LIB_1__::func_348(uLocal_14[2], Global_35) < 6f)
	{
		if (__LIB_0__::func_899(&uLocal_120) && !__LIB_6__::func_904())
		{
			if (__LIB_1__::func_583(&uLocal_120) > MISC::GET_RANDOM_FLOAT_IN_RANGE(3f, 6f))
			{
				if (!__LIB_0__::func_270())
				{
					if (__LIB_12__::func_876(uParam0, "ROBT3_BEFORE", 0))
					{
						__LIB_2__::func_259(&uLocal_120);
					}
				}
			}
		}
		else
		{
			__LIB_2__::func_259(&uLocal_120);
		}
	}
}

char* func_585(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script@rcm@robt@s3@ig1_pushbarrels@ig1_groupie_startloop";
		case 1:
			return "script@rcm@robt@s3@ig1_pushbarrels@ig1_player_startloop";
		case 2:
			return "script@rcm@robt@s3@ig1_pushbarrels@ig1_pushbarrels";
		case 3:
			return "script@rcm@robt@s3@leadin@int@leadin";
		case 4:
			return "script@rcm@robt@s3@leadin@ext@leadin";
	}
	return "";
}

void func_586(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return;
	}
	ENTITY::SET_ENTITY_VISIBLE(*uParam0, !bParam1);
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		iVar0 = PED::GET_MOUNT(*uParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				ENTITY::SET_ENTITY_VISIBLE(iVar0, !bParam1);
			}
		}
		else if (bParam2)
		{
			iVar0 = PED::_GET_LAST_MOUNT(*uParam0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iVar0))
				{
					iVar1 = PED::_GET_RIDER_OF_MOUNT(iVar0, false);
					if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
					{
						ENTITY::SET_ENTITY_VISIBLE(iVar0, !bParam1);
					}
				}
			}
		}
	}
}

void func_617(var uParam0)
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
		func_1006(&(uParam0->f_404), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_12__::func_706(uParam0, 0f, 0f, 0f);
		func_1008(uParam0);
		func_1009(uParam0);
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

void func_663(var uParam0)
{
	vector3 vVar0;
	vVar0 = { -1048.32f, 442.48f, 54.73f };
	switch (iLocal_115)
	{
		case 0:
			if (!bLocal_46)
			{
				func_1077(uParam0);
				bLocal_46 = true;
			}
			if (!MAP::DOES_BLIP_EXIST(iLocal_101))
			{
				iLocal_101 = __LIB_4__::func_983(408396114, vVar0, 1);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_101, "OBT3_BLIP_BARRELS");
				HUD::_HIDE_HUD_COMPONENT(724769646);
			}
			iLocal_115 = 1;
			break;
		case 1:
			if (!bLocal_47)
			{
				__LIB_0__::func_45("OBT3_HELP", 10000, 0, 0, 0, 1);
				bLocal_47 = true;
			}
			if (iLocal_116 != 1)
			{
				iLocal_116 = 1;
			}
			if (!__LIB_0__::func_139(iLocal_99))
			{
				iLocal_99 = __LIB_1__::func_282("OBT3_CNTXT_Y", joaat("INPUT_CONTEXT_Y"), vVar0, 2f, 1, 1, 1, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
			}
			else
			{
				uLocal_100 = HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(iLocal_124[0], 2f, 2, 1, 0, "OBT3_BLIP_BARRELS", 0);
				HUD::_UIPROMPT_SET_GROUP(__LIB_3__::func_66(iLocal_99), uLocal_100, 0);
				if (__LIB_1__::func_732(iLocal_99, 1))
				{
					__LIB_5__::func_20(0, 0);
					__LIB_6__::func_916(&iLocal_99);
					if (__LIB_0__::func_181())
					{
						ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_70[1], "PLAYER_THREE", Global_35);
					}
					else
					{
						ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_70[1], "player_zero", Global_35);
					}
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_70[1], "p_barrel02_openCS01x^1", iLocal_124[0]);
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_70[1], "p_barrel02_opencs01x", iLocal_124[1]);
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_70[0], "cs_twingroupie_01", uLocal_14[2]);
					if (func_1082())
					{
						iLocal_115 = 2;
					}
				}
				else
				{
					func_1083(uParam0);
					if (!__LIB_6__::func_903("ROBT3_PUSHBARR"))
					{
						func_1085(uParam0);
					}
				}
			}
			break;
		case 2:
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_70[2], false))
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_70[2]) > 6.77f)
				{
					__LIB_0__::func_105(1);
					CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
					iLocal_115 = 3;
				}
				else if (ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_70[2]) > 4.3f)
				{
					CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
				}
				else if (!bLocal_55 && __LIB_12__::func_876(uParam0, "ROBT3_OVER", 0))
				{
					bLocal_55 = true;
				}
			}
			break;
		case 3:
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			break;
	}
}

void func_664()
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	float fVar10;
	fVar9 = 0.5f;
	if (iLocal_64 == 68)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_124[0]))
		{
			__LIB_1__::func_951(&(iLocal_124[0]));
			__LIB_0__::func_401(-846371468);
			func_586(&(uLocal_14[0]), 0, 0);
		}
		return;
	}
	TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_19, iLocal_63, &vVar3);
	TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_19, iLocal_64, &vVar6);
	fVar10 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar3, vVar6, true);
	vVar0 = { __LIB_1__::func_367(vVar3, vVar6, fLocal_65) };
	fLocal_65 = (fLocal_65 + (fVar9 / fVar10));
	if (fLocal_65 >= 1f)
	{
		fLocal_65 = 0f;
		iLocal_63++;
		iLocal_64++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_124[0]))
	{
		if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_19))
		{
			ENTITY::SET_ENTITY_COORDS(iLocal_124[0], vVar0, true, false, true, true);
		}
	}
}

void func_665()
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	float fVar10;
	fVar9 = 0.5f;
	if (iLocal_67 == 73)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_124[1]))
		{
			__LIB_1__::func_951(&(iLocal_124[1]));
			func_586(&(uLocal_14[1]), 0, 0);
		}
		return;
	}
	TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_18, iLocal_66, &vVar3);
	TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_18, iLocal_67, &vVar6);
	fVar10 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar3, vVar6, true);
	vVar0 = { __LIB_1__::func_367(vVar3, vVar6, fLocal_68) };
	fLocal_68 = (fLocal_68 + (fVar9 / fVar10));
	if (fLocal_68 >= 1f)
	{
		fLocal_68 = 0f;
		iLocal_66++;
		iLocal_67++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_124[1]))
	{
		if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_18))
		{
			ENTITY::SET_ENTITY_COORDS(iLocal_124[1], vVar0, true, false, true, true);
		}
	}
}

bool func_666()
{
	if (iLocal_64 == 68 && iLocal_67 == 73)
	{
		return true;
	}
	return false;
}

bool func_667()
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_70[4]))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_70[4], true, false))
		{
			if (__LIB_0__::func_181())
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_70[4], "JOHN", Global_35, 0);
				ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_70[4], "b_playerArthur", false, false);
			}
			else
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_70[4], "ARTHUR", Global_35, 0);
				ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_70[4], "b_playerArthur", true, false);
			}
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_70[4], "CS_TWINBROTHER_01", uLocal_14[0], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_70[4], "CS_TWINBROTHER_02", uLocal_14[1], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_70[4], "CS_TWINGROUPIE_01", uLocal_14[2], 0);
			ANIMSCENE::START_ANIM_SCENE(iLocal_70[4]);
			return true;
		}
	}
	return false;
}

void func_668()
{
	int iVar0;
	int iVar1;
	if ((ENTITY::DOES_ENTITY_EXIST(iLocal_76) && PED::IS_PED_ON_MOUNT(Global_35)) && PED::GET_MOUNT(Global_35) != iLocal_76)
	{
		__LIB_9__::func_114(iLocal_76, -401963276, 1);
		if (iLocal_76 != __LIB_0__::func_398(7))
		{
			iVar1 = MAP::GET_BLIP_FROM_ENTITY(iLocal_76);
			__LIB_0__::func_325(&iVar1);
		}
		iVar0 = PED::_GET_LAST_MOUNT(Global_35);
		iLocal_76 = iVar0;
	}
}

void func_672(var uParam0)
{
	if (__LIB_1__::func_348(uLocal_14[2], Global_35) < 30f)
	{
		if (__LIB_0__::func_899(&uLocal_117) && !__LIB_6__::func_904())
		{
			if (__LIB_1__::func_583(&uLocal_117) > MISC::GET_RANDOM_FLOAT_IN_RANGE(3f, 6f))
			{
				if (!__LIB_0__::func_270())
				{
					if (__LIB_12__::func_876(uParam0, "ROBT3_SEE", 0))
					{
						__LIB_2__::func_259(&uLocal_117);
					}
				}
			}
		}
		else
		{
			__LIB_2__::func_259(&uLocal_117);
		}
	}
}

void func_677(var uParam0)
{
	if (!__LIB_1__::func_588("OBT3_O_RIDE", 0, 0, -1, -1, 0))
	{
		__LIB_12__::func_883(uParam0, "OBT3_O_RIDE", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
		fLocal_108 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, ENTITY::GET_ENTITY_COORDS(iLocal_124[0], true, false), false);
		__LIB_1__::func_561(&uLocal_105);
	}
}

void func_678(var uParam0)
{
	if (!iLocal_59[1] && !__LIB_0__::func_899(&uLocal_117))
	{
		__LIB_2__::func_259(&uLocal_117);
	}
	if (!iLocal_59[0])
	{
		if (__LIB_9__::func_178(&uLocal_117) > __LIB_13__::func_913(iLocal_45, 1073741824 /* Float: 2f */, 1092616192 /* Float: 10f */))
		{
			if (__LIB_14__::func_70(uParam0, "ROBT3_RIDE0", &(uLocal_14[2]), 0, 20f, 0, 1))
			{
				iLocal_59[0] = 1;
				__LIB_2__::func_259(&uLocal_117);
			}
		}
	}
	else if (!iLocal_59[1])
	{
		if (__LIB_9__::func_178(&uLocal_117) > __LIB_13__::func_913(iLocal_45, 1073741824 /* Float: 2f */, 1092616192 /* Float: 10f */))
		{
			if (__LIB_0__::func_181())
			{
				if (__LIB_14__::func_70(uParam0, "ROBT3_RIDE2", &(uLocal_14[2]), 0, 20f, 0, 1))
				{
					iLocal_59[1] = 1;
					__LIB_1__::func_561(&uLocal_117);
				}
			}
			else if (__LIB_14__::func_70(uParam0, "ROBT3_RIDE1", &(uLocal_14[2]), 0, 20f, 0, 1))
			{
				iLocal_59[1] = 1;
				__LIB_1__::func_561(&uLocal_117);
			}
		}
	}
}

void func_679(var uParam0)
{
	if (!__LIB_1__::func_588("OBT3_O_MOUNT", 0, 0, -1, -1, 0))
	{
		__LIB_13__::func_89(uParam0, "OBT3_O_MOUNT", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
		__LIB_12__::func_883(uParam0, "OBT3_O_MOUNT", 1, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
	}
}

int func_681()
{
	if (!PED::IS_PED_ON_MOUNT(uLocal_14[2]))
	{
		if (__LIB_0__::func_272(iLocal_77[0], 0))
		{
			if (PED::_IS_MOUNT_SEAT_FREE(iLocal_77[0], -1))
			{
				if (!__LIB_0__::func_163(uLocal_14[2], 1868526510))
				{
					TASK::TASK_MOUNT_ANIMAL(uLocal_14[2], iLocal_77[0], -1, -1, 3f, 8388609, 0, 0);
				}
			}
			else if (__LIB_0__::func_272(iLocal_76, 0))
			{
				if (PED::_IS_MOUNT_SEAT_FREE(iLocal_76, -1))
				{
					if (!__LIB_0__::func_163(uLocal_14[2], 1868526510))
					{
						TASK::TASK_MOUNT_ANIMAL(uLocal_14[2], iLocal_77[0], -1, -1, 3f, 8388609, 0, 0);
					}
				}
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_708(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 67:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP8_ABIGAIL2X1_1"), iParam1);
			break;
		case 18:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP3_BRAITHWAITE1_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP3_BRAITHWAITE1_2"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP3_BRAITHWAITE1_4"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_GT_BRAITHWAITES_1"), iParam1);
			break;
		case 20:
			__LIB_1__::func_465(joaat("JOURNAL_GT_BRAITHWAITES_2"), iParam1);
			break;
		case 2:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP1_ODRISCOLL1_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP1_ODRISCOLL1_2"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP1_ODRISCOLL1_4"), iParam1);
			break;
		case 23:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP3_ODRISCOLL3_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP3_ODRISCOLL3_2"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP3_ODRISCOLL3_3"), iParam1);
			__LIB_1__::func_199(1);
			break;
		case 16:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP3_FEUD1_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP3_FEUD1_2_TXT"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP3_FEUD1_3_TXT"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP3_FEUD1_4"), iParam1);
			break;
		case 59:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_ENDLESS_SUMMER_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_ENDLESS_SUMMER_2"), iParam1);
			if (__LIB_0__::func_343(146))
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_TREASURE2_JN"), iParam1);
			}
			__LIB_1__::func_199(1);
			break;
		case 76:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP9_FINALE2_1"), iParam1);
			if (__LIB_1__::func_423() == 0)
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_9A"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_10B"), iParam1);
			}
			break;
		case 44:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_GANG1_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_GANG1_2"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_GANG1_3"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_GANG1_4"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_GANG1_4B"), iParam1);
			break;
		case 46:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_GANG3_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_GANG3_2"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_GANG3_4"), iParam1);
			break;
		case 17:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP3_GRAYS1_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP3_GRAYS1_3"), iParam1);
			break;
		case 19:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP3_GRAYS2_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP3_GRAYS2_2"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_GT_GRAYS_2"), iParam1);
			break;
		case 21:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP3_GRAYS3_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP3_GRAYS3_2"), iParam1);
			__LIB_1__::func_199(0);
			Jump @2196; //curOff = 806
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_HUNTING1_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_HUNTING1_1B"), iParam1);
			Jump @2196; //curOff = 831
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_INDUSTRY1_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_INDUSTRY1_2"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_INDUSTRY1_4"), iParam1);
			Jump @2196; //curOff = 867
			__LIB_1__::func_465(joaat("JOURNAL_GT_INDUSTRY_3"), iParam1);
			Jump @2196; //curOff = 881
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP8_LARAMIE1_1"), iParam1);
			Jump @2196; //curOff = 895
			__LIB_1__::func_465(joaat("JOURNAL_CHAP8_PRONGHORN"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP8_MARSTON1_2"), iParam1);
			Jump @2196; //curOff = 920
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP9_MARSTON6_1"), iParam1);
			Jump @2196; //curOff = 934
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP9_MARSTON7_1"), iParam1);
			if (__LIB_1__::func_423() == 0)
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_4A"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_5B"), iParam1);
			}
			Jump @2196; //curOff = 981
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_MARY1_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_MARY1_3"), iParam1);
			Jump @2196; //curOff = 1006
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_MARY3_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_MARY3_2"), iParam1);
			if (Global_1357515 == 0)
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_MARY3_2A"), iParam1);
			}
			else if (Global_1357515 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_MARY3_2B"), iParam1);
			}
			Jump @2196; //curOff = 1072
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_MOB1_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_MOB1_2"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_MOB1_3"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_MOB1_4"), iParam1);
			Jump @2196; //curOff = 1119
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_MOB2_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_MOB2_2"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_MOB2_3"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_MOB2_4"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_GT_MOB_2"), iParam1);
			Jump @2196; //curOff = 1177
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_MOB3_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_MOB3_2"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_GT_MOB_3"), iParam1);
			Jump @2196; //curOff = 1213
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_MOB5_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_MOB5_2"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_MOB5_3"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_MOB5_4"), iParam1);
			Jump @2196; //curOff = 1260
			__LIB_1__::func_465(joaat("JOURNAL_CHAP2_HORSESHOE"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_MUDTOWN1_2"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_MUDTOWN1_3"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_MUDTOWN1_5"), iParam1);
			__LIB_1__::func_199(0);
			Jump @2196; //curOff = 1312
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_MUDTOWN3_2"), iParam1);
			if (Global_1357515 == -1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_MUDTOWN3_2_A"), iParam1);
			}
			else if (Global_1357515 == 0)
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_MUDTOWN3_2_B"), iParam1);
			}
			else if (Global_1357515 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_MUDTOWN3_2_C"), iParam1);
			}
			Jump @2196; //curOff = 1389
			__LIB_1__::func_465(joaat("JOURNAL_GT_MUDTOWN_3B"), iParam1);
			Jump @2196; //curOff = 1403
			if (Global_1357515 == -1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_GT_MUDTWON_5_5000"), iParam1);
			}
			else if (Global_1357515 == 0)
			{
				__LIB_1__::func_465(joaat("JOURNAL_GT_MUDTWON_5_7500"), iParam1);
			}
			else if (Global_1357515 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_GT_MUDTWON_5_10000"), iParam1);
			}
			Jump @2196; //curOff = 1469
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_NATIVE1_1"), iParam1);
			if (Global_1357515 == -1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_NATIVE1_2"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_NATIVE1_2A"), iParam1);
			}
			if (__LIB_1__::func_151(51))
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_NATIVE1_2B"), iParam1);
			}
			Jump @2196; //curOff = 1536
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_NATIVE2_1"), iParam1);
			if (Global_1357515 == 0)
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_NATIVE2_2A"), iParam1);
			}
			else if (Global_1357515 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_NATIVE2_2B"), iParam1);
			}
			else if (Global_1357515 == 2)
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_NATIVE2_2C"), iParam1);
			}
			Jump @2196; //curOff = 1613
			__LIB_1__::func_465(joaat("JOURNAL_GT_NATIVE_3"), iParam1);
			Jump @2196; //curOff = 1627
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_NATIVESON1_1"), iParam1);
			Jump @2196; //curOff = 1641
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_NATIVESON3_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_NATIVESON3_2"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_NATIVESON3_2B"), iParam1);
			if (bParam2 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_NATIVESON3_3A"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_NATIVESON3_3A2"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_NATIVESON3_3B"), iParam1);
			}
			Jump @2196; //curOff = 1719
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_ODRISCOLL4_1"), iParam1);
			Jump @2196; //curOff = 1733
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_MARY4_1"), iParam1);
			Jump @2196; //curOff = 1747
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP9_SADIE2_1"), iParam1);
			if (__LIB_1__::func_25(Global_1347702[9 /*49*/].f_15, 1))
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_2B"), iParam1);
			}
			Jump @2196; //curOff = 1790
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP9_SADIE3"), iParam1);
			if (__LIB_1__::func_423() == 0)
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_7A"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_8B"), iParam1);
			}
			Jump @2196; //curOff = 1837
			if (__LIB_1__::func_423() == 0)
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_8A"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_9B"), iParam1);
			}
			Jump @2196; //curOff = 1873
			__LIB_1__::func_465(joaat("JOURNAL_GT_SAINT_DENIS_1"), iParam1);
			Jump @2196; //curOff = 1887
			if (Global_1357515 == -1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_SALOON1_1"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_SALOON1_1B"), iParam1);
			}
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_SALOON1_2"), iParam1);
			Jump @2196; //curOff = 1934
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_SEAN1_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_SEAN1_2"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_SEAN1_3"), iParam1);
			Jump @2196; //curOff = 1970
			__LIB_1__::func_465(joaat("JOURNAL_GT_CORNWALL_1"), iParam1);
			Jump @2196; //curOff = 1984
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_TRAINROBBERY1_1"), iParam1);
			Jump @2196; //curOff = 1998
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_TRAINROBBERY3_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_TRAINROBBERY3_3"), iParam1);
			Jump @2196; //curOff = 2023
			__LIB_1__::func_465(joaat("JOURNAL_GT_TRAIN_ROBBERY_4"), iParam1);
			Jump @2196; //curOff = 2037
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP3_TRELAWNY1_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP3_TRELAWNY1_2"), iParam1);
			Jump @2196; //curOff = 2062
			__LIB_1__::func_465(joaat("JOURNAL_GT_UTOPIA_2"), iParam1);
			Jump @2196; //curOff = 2076
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP1_WINTER1_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP1_WINTER1_3"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP1_WINTER1_5"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP1_WINTER1_6"), iParam1);
			Jump @2196; //curOff = 2123
			__LIB_1__::func_199(1);
			Jump @2196; //curOff = 2131
			if (__LIB_0__::func_26())
			{
				if (HUD::_JOURNAL_CAN_WRITE_ENTRY(joaat("JOURNAL_GT_WINTER_4")))
				{
					__LIB_1__::func_465(joaat("JOURNAL_GT_WINTER_4_SE"), iParam1);
				}
			}
			else if (HUD::_JOURNAL_CAN_WRITE_ENTRY(joaat("JOURNAL_GT_WINTER_4_SE")))
			{
				__LIB_1__::func_465(joaat("JOURNAL_GT_WINTER_4"), iParam1);
			}
		}
void func_709(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_ABIGAIL1_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_ABIGAIL1_3"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_ABIGAIL1_4"), iParam1);
			break;
		case 1:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP9_ABIGAIL2X2_1"), iParam1);
			break;
		case 2:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP9_ABIGAIL3_1"), iParam1);
			break;
		case 9:
			__LIB_1__::func_465(joaat("JOURNAL_CHAP9_BEECHERSHOPE"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP9_BEECHERS1X3_1"), iParam1);
			if (__LIB_1__::func_25(Global_1835011[69 /*74*/].f_1, 1))
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_1A"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_1B"), iParam1);
			}
			break;
		case 22:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_CALDERON1X1_1"), iParam1);
			break;
		case 26:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_CALLOWAY_1_AR"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_RC_CALLOWAY_2_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_CALLOWAY_1_JN"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_RC_CALLOWAY_2_JN"), iParam1);
			}
			break;
		case 29:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_CALLOWAY_3_1_AR"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_RC_CALLOWAY_3_2_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(26))
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_CALLOWAY_3_JN_B1"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_RC_CALLOWAY_3_JN_B2"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_CALLOWAY_3_JN_A"), iParam1);
			}
			break;
		case 32:
			if (bParam3 == 1)
			{
				if (Global_1357515 == -1)
				{
					__LIB_1__::func_465(joaat("JOURNAL_CHAP3_RCCHAINGANG_2F_AR"), iParam1);
				}
				else if (Global_1357515 == 0)
				{
					__LIB_1__::func_465(joaat("JOURNAL_CHAP3_RCCHAINGANG_2A_AR"), iParam1);
				}
				else if (Global_1357515 == 1)
				{
					__LIB_1__::func_465(joaat("JOURNAL_CHAP3_RCCHAINGANG_2B_AR"), iParam1);
				}
				else if (Global_1357515 == 2)
				{
					__LIB_1__::func_465(joaat("JOURNAL_CHAP3_RCCHAINGANG_2C_AR"), iParam1);
				}
				else if (Global_1357515 == 3)
				{
					__LIB_1__::func_465(joaat("JOURNAL_CHAP3_RCCHAINGANG_2D_AR"), iParam1);
				}
				else if (Global_1357515 == 4)
				{
					__LIB_1__::func_465(joaat("JOURNAL_CHAP3_RCCHAINGANG_2E_AR"), iParam1);
				}
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_CHAP3_RCCHAINGANG_2_JN"), iParam1);
				if (Global_1357515 == -1)
				{
					__LIB_1__::func_465(joaat("JOURNAL_CHAP3_RCCHAINGANG_2E_JN"), iParam1);
				}
				else if (Global_1357515 == 0)
				{
					__LIB_1__::func_465(joaat("JOURNAL_CHAP3_RCCHAINGANG_2A_JN"), iParam1);
				}
				else if (Global_1357515 == 1)
				{
					__LIB_1__::func_465(joaat("JOURNAL_CHAP3_RCCHAINGANG_2B_JN"), iParam1);
				}
				else if (Global_1357515 == 2)
				{
					__LIB_1__::func_465(joaat("JOURNAL_CHAP3_RCCHAINGANG_2C_JN"), iParam1);
				}
				else if (Global_1357515 == 3)
				{
					__LIB_1__::func_465(joaat("JOURNAL_CHAP3_RCCHAINGANG_2D_JN"), iParam1);
				}
				else if (Global_1357515 == 4)
				{
					__LIB_1__::func_465(joaat("JOURNAL_CHAP3_RCCHAINGANG_2F_JN"), iParam1);
				}
			}
			break;
		case 35:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_CHAP3_RCCHAINGANG_3_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_CHAP3_RCCHAINGANG_3_JN"), iParam1);
			}
			break;
		case 36:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_CHAP3_RCCHAINGANG_4_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_CHAP3_RCCHAINGANG_4_JN"), iParam1);
			}
			break;
		case 37:
			__LIB_1__::func_465(joaat("JOURNAL_GT_COACH_ROB_RSC"), iParam1);
			break;
		case 53:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_CRKPT1_1_AR"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_RC_CRKPT1_2_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_CRKPT1_1_JN"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_RC_CRKPT1_1_JN_B"), iParam1);
			}
			break;
		case 54:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_CRKPT2_1_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_CRKPT2_1_JN"), iParam1);
			}
			break;
		case 55:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_CRKPT3_1_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(54))
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_CRKPT3_1B_JN"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_CRKPT3_1A_JN"), iParam1);
			}
			break;
		case 38:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_CIG1_1_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_CIG1_1_JN"), iParam1);
			}
			break;
		case 39:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_DINO1_1_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_DINO1_1_JN"), iParam1);
			}
			break;
		case 40:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_DINO2_1_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(39))
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_DINO2_1_B_JN"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_DINO2_1_A_JN"), iParam1);
			}
			break;
		case 43:
			if (bParam3 == 1)
			{
				if (__LIB_0__::func_895(Global_1835011[33 /*74*/].f_1) == 1)
				{
					__LIB_1__::func_465(joaat("JOURNAL_RC_EXOTIC1_1B_AR_A"), iParam1);
				}
				else
				{
					__LIB_1__::func_465(joaat("JOURNAL_RC_EXOTIC1_1A_AR_A"), iParam1);
				}
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_EXOTIC1_1_JN"), iParam1);
			}
			break;
		case 45:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_EXOTIC3_1_AR_A"), iParam1);
			}
			else if (__LIB_0__::func_343(43))
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_EXOTIC3_1_JN_B"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_EXOTIC3_1_JN_A"), iParam1);
			}
			break;
		case 41:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_FISH1_1_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_FISH1_1_JN"), iParam1);
			}
			break;
		case 42:
			if (__LIB_0__::func_343(41))
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_FISH2_1_JN_B"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_FISH2_1_JN_A"), iParam1);
			}
			break;
		case 49:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_ROCKCARV1_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_ROCKCARV1_JN"), iParam1);
			}
			break;
		case 50:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_ROCKCARV2_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(49))
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_ROCKCARV2_JN_B"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_RC_ROCKCARV2_JN_B2"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_ROCKCARV2_JN_A"), iParam1);
			}
			break;
		case 51:
			__LIB_1__::func_465(joaat("JOURNAL_RC_TAX1_1_JN"), iParam1);
			break;
		case 58:
			if (__LIB_1__::func_25(Global_1347702[23 /*49*/].f_15, 1))
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_DOCTORS_1"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_DOCTORS_1B"), iParam1);
			}
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_DOCTORS_2"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_DOCTORS_3"), iParam1);
			break;
		case 59:
			__LIB_1__::func_465(joaat("JOURNAL_CHAP2_DOWNES1_1"), iParam1);
			break;
		case 62:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_DOWNES2_1"), iParam1);
			break;
		case 63:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_ODRISCOLL2_2B"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_GT_ODRISCOLL_2"), iParam1);
			break;
		case 65:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_ODRISCOLL6_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_ODRISCOLL6_2"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_ODRISCOLL6_3"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_ODRISCOLL6_4"), iParam1);
			break;
		case 66:
			__LIB_1__::func_465(joaat("JOURNAL_CHAP3_CLEMENS"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_DUTCH1_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_DUTCH1_2"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_DUTCH1_3"), iParam1);
			__LIB_1__::func_199(1);
			break;
		case 67:
			__LIB_1__::func_465(joaat("JOURNAL_CHAP4_SHADYBELLE"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP3_DUTCH2_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP3_DUTCH2_2"), iParam1);
			break;
		case 68:
			__LIB_1__::func_465(joaat("JOURNAL_CHAP6_BEAVERHOLLOW"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_DUTCH3_2"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_DUTCH3_2B"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_DUTCH3_3"), iParam1);
			__LIB_1__::func_199(0);
			break;
		case 70:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_EDITHDOWNE2_1"), iParam1);
			break;
		case 71:
			__LIB_1__::func_465(joaat("JOURNAL_RC_MILLER1_JN"), iParam1);
			break;
		case 73:
			__LIB_1__::func_465(joaat("JOURNAL_RC_MILLER3_JN"), iParam1);
			break;
		case 75:
			__LIB_1__::func_465(joaat("JOURNAL_RC_MILLER4_JN"), iParam1);
			break;
		case 77:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_FMA1_1_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_FMA1_1_JN"), iParam1);
			}
			break;
		case 79:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_FMA3_1_AR"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_RC_FMA3_2_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(78))
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_FMA3_2_JN"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_FMA3_1_JN"), iParam1);
			}
			break;
		case 80:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_FMA4_1_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(79))
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_FMA4_2_JN"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_FMA4_1_JN"), iParam1);
			}
			break;
		case 85:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_GUNSLINGER1_1_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_GUNSLINGER1_1_JN"), iParam1);
			}
			break;
		case 86:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_GUNSLINGER2_1_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_GUNSLINGER2_1_JN"), iParam1);
			}
			break;
		case 87:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_GUNSLINGER3_1_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_GUNSLINGER3_1_JN"), iParam1);
			}
			break;
		case 88:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_GUNSLINGER5_1_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_GUNSLINGER5_1_JN"), iParam1);
			}
			break;
		case 89:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_HKK1_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_HKK1_JN"), iParam1);
			}
			break;
		case 92:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_HKK4_AR"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_RC_HKK4B_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_HKK4_A_JN"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_RC_HKK4_A2_JN"), iParam1);
			}
			break;
		case 93:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_HKK5_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_HKK5_JN"), iParam1);
			}
			break;
		case 94:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_HOMEROBBERY0_1"), iParam1);
			if (Global_1357515 == -1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_HOMEROBBERY0_2A"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_HOMEROBBERY0_2B"), iParam1);
			}
			__LIB_1__::func_465(joaat("JOURNAL_GT_HOME_ROB"), iParam1);
			break;
		case 99:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_MARY3X1_1"), iParam1);
			break;
		case 101:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_MASON1_1_AR"), iParam1);
				if (Global_1357515 == -1)
				{
					__LIB_1__::func_465(joaat("JOURNAL_RC_MASON1_2_AR_B"), iParam1);
				}
				else
				{
					__LIB_1__::func_465(joaat("JOURNAL_RC_MASON1_2_AR_A"), iParam1);
				}
			}
			else if (Global_1357515 == -1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_MASON1_1B_JN"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_MASON1_1A_JN"), iParam1);
			}
			break;
		case 102:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_MASON2_1_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(101))
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_MASON2_1B_JN"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_MASON2_1A_JN"), iParam1);
			}
			break;
		case 103:
			__LIB_1__::func_465(joaat("JOURNAL_RC_MASON3_1_AR"), iParam1);
			break;
		case 104:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_MASON4_1_AR"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_RC_MASON4_2_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(103))
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_MASON4_1B_JN"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_MASON4_1A_JN"), iParam1);
			}
			break;
		case 105:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_MASON5_1_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(104))
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_MASON5_1B_JN"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_MASON5_1A_JN"), iParam1);
			}
			break;
		case 108:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_MONROE_1"), iParam1);
			break;
		case 109:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_MAYOR1_AR"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_RC_MAYOR1_AR_B"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_MAYOR1_JN"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_RC_MAYOR1B_JN"), iParam1);
			}
			break;
		case 110:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_MAYOR2_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(109))
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_MAYOR2B_JN"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_MAYOR2A_JN"), iParam1);
			}
			break;
		case 111:
			if (bParam3 == 1)
			{
				if (Global_1357515 == 0)
				{
					__LIB_1__::func_465(joaat("JOURNAL_RC_MAYOR3A_AR"), iParam1);
				}
				else
				{
					__LIB_1__::func_465(joaat("JOURNAL_RC_MAYOR3B_AR"), iParam1);
				}
			}
			else if (__LIB_0__::func_343(110))
			{
				if (Global_1357515 == 0)
				{
					__LIB_1__::func_465(joaat("JOURNAL_RC_MAYOR3C_JN"), iParam1);
				}
				else
				{
					__LIB_1__::func_465(joaat("JOURNAL_RC_MAYOR3D_JN"), iParam1);
					__LIB_1__::func_465(joaat("JOURNAL_RC_MAYOR3D_2_JN"), iParam1);
				}
			}
			else if (Global_1357515 == 0)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_MAYOR3A_JN"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_MAYOR3B_JN"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_RC_MAYOR3B_2_JN"), iParam1);
			}
			break;
		case 115:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_NATIVERSC1_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_NATIVERSC1_2"), iParam1);
			break;
		case 143:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_ODDF1_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_ODDF1_JN"), iParam1);
			}
			break;
		case 144:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_ODDF2_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_ODDF2_JN"), iParam1);
			}
			break;
		case 117:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_OHBRO1_1_AR"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_RC_OHBRO1_2_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_OHBRO1_1_JN"), iParam1);
			}
			break;
		case 118:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_OHBRO2_1_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(117))
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_OHBRO2_1B_JN"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_OHBRO2_1A_JN"), iParam1);
			}
			break;
		case 119:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_OHBRO3_1_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(118))
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_OHBRO3_2B_JN"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_OHBRO3_2A_JN"), iParam1);
			}
			break;
		case 121:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_PW1_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_PW1_JN"), iParam1);
			}
			break;
		case 122:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_PW3_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(121))
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_PW3B_JN"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_PW3A_JN"), iParam1);
			}
			break;
		case 124:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_PW4_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(122))
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_PW4B_JN"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_PW4A_JN"), iParam1);
			}
			break;
		case 125:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_PW5_AR"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_RC_PW5B_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_PW5_JN"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_RC_PW5B_JN"), iParam1);
			}
			break;
		case 127:
			__LIB_1__::func_465(joaat("JOURNAL_RC_RTL1_AR"), iParam1);
			break;
		case 129:
			__LIB_1__::func_465(joaat("JOURNAL_RC_RTL3_AR"), iParam1);
			break;
		case 131:
			__LIB_1__::func_465(joaat("JOURNAL_RC_RTL5_AR"), iParam1);
			break;
		case 133:
			__LIB_1__::func_465(joaat("JOURNAL_RC_RTL7_AR"), iParam1);
			break;
		case 134:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP3_SADIE1_1"), iParam1);
			break;
		case 135:
			if (bParam3 == 1)
			{
				if (Global_1357515 == -1)
				{
					__LIB_1__::func_465(joaat("JOURNAL_RC_KILLER4A_AR"), iParam1);
				}
				else
				{
					__LIB_1__::func_465(joaat("JOURNAL_RC_KILLER4B_AR"), iParam1);
				}
			}
			else if ((HUD::_JOURNAL_CAN_WRITE_ENTRY(joaat("JOURNAL_RC_KILLER1_AR")) && HUD::_JOURNAL_CAN_WRITE_ENTRY(joaat("JOURNAL_RC_KILLER2_AR"))) && HUD::_JOURNAL_CAN_WRITE_ENTRY(joaat("JOURNAL_RC_KILLER3_AR")))
			{
				if (Global_1357515 == -1)
				{
					__LIB_1__::func_465(joaat("JOURNAL_RC_KILLER4A_JN"), iParam1);
				}
				else
				{
					__LIB_1__::func_465(joaat("JOURNAL_RC_KILLER4B_JN"), iParam1);
				}
			}
			else if (Global_1357515 == -1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_KILLER4C_JN"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_KILLER4D_JN"), iParam1);
			}
			break;
		case 136:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_SLVC1_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_SLVC1_JN"), iParam1);
			}
			break;
		case 137:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_SLVC2_AR"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_RC_SLVC3A_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(136))
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_SLVC2B_JN"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_RC_SLVC3C_JN"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_SLVC2A_JN"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_RC_SLVC3A_JN"), iParam1);
			}
			break;
		case 142:
			if (bParam2 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_STRAUSS3_3A"), iParam1);
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_STRAUSS3_3B"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP6_STRAUSS3_3C"), iParam1);
			}
			break;
		case 146:
			if (bParam3 == 1)
			{
				if (Global_1357515 == 1)
				{
					__LIB_1__::func_465(joaat("JOURNAL_RC_TREASURE1A_AR"), iParam1);
				}
				else if (Global_1357515 == 0)
				{
					__LIB_1__::func_465(joaat("JOURNAL_RC_TREASURE1B_AR"), iParam1);
				}
			}
			else if (Global_1357515 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_TREASURE1A_JN"), iParam1);
			}
			else if (Global_1357515 == 0)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_TREASURE1B_JN"), iParam1);
			}
			break;
		case 147:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_WARVET1_AR"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_WARVET1_JN"), iParam1);
			}
			break;
		case 148:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_WARVET2_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(147))
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_WARVET2B_JN"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_WARVET2A_JN"), iParam1);
			}
			break;
		case 149:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_WARVET3_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(148))
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_WARVET3B_JN"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_WARVET3A_JN"), iParam1);
			}
			break;
		case 150:
			if (bParam3 == 1)
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_WARVET4_AR"), iParam1);
			}
			else if (__LIB_0__::func_343(149))
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_WARVET4B_JN"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_RC_WARVET4A_JN"), iParam1);
			}
			break;
		default:
			break;
	}
}

bool func_720(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
				func_720(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
						func_720(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_720(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_720(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_720(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_720(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_720(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_720(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
					func_720(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_720(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_720(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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

void func_722()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_1206();
	func_1207();
	func_1208();
	func_1209();
	func_1210();
	__LIB_1__::func_848();
	__LIB_0__::func_376();
}

void func_723(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	func_1213(iParam0, 1, 1, -142743235, 1);
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

void func_758()
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
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_1247(&uVar4, &iVar1, &iVar2, &iVar3)))
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

Vector3 func_765(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
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
			bVar11 = func_1264(iVar0, iVar1);
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

void func_796(var uParam0)
{
	if (__LIB_0__::func_272(*uParam0, 1) && !__LIB_0__::func_163(*uParam0, 518218985))
	{
		TASK::CLEAR_PED_TASKS(*uParam0, true, false);
		TASK::TASK_SMART_FLEE_PED(*uParam0, Global_35, 1000f, -1, 0, 1077936128 /* Float: 3f */, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, false);
	}
}

int func_851(var uParam0, int iParam1, int iParam2)
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
		return func_851(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

void func_966(int iParam0, vector3 vParam1)
{
	if (__LIB_0__::func_272(iParam0, 0))
	{
		ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(iParam0, true, false);
		ENTITY::FREEZE_ENTITY_POSITION(iParam0, false);
		ENTITY::SET_ENTITY_COORDS(iParam0, vParam1, false, false, true, true);
		ENTITY::_0x9587913B9E772D29(iParam0, 0);
		ENTITY::SET_ENTITY_INVINCIBLE(iParam0, false);
		__LIB_3__::func_459(iParam0, 0);
		ENTITY::_0x18FF3110CF47115D(iParam0, 7, 0);
		__LIB_2__::func_919(iParam0, 0, 1);
		ENTITY::_0x002AAC783ED323ED(iParam0, 0);
	}
}

int func_969()
{
	if (__LIB_12__::func_637(&iLocal_76, -1064.27f, 447.42f, 58.01f, 81.35f, 1, 1, 1, 1))
	{
		if (__LIB_0__::func_272(iLocal_76, 0))
		{
			if (!__LIB_0__::func_163(iLocal_76, -982327190))
			{
				ENTITY::_0x9587913B9E772D29(iLocal_76, 0);
				TASK::TASK_STAND_STILL(iLocal_76, -1);
				return 1;
			}
		}
	}
	return 0;
}

void func_1006(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
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
		func_1435();
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

void func_1008(var uParam0)
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
			func_1443(iVar1, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_1443(iVar3, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_1009(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if ((__LIB_0__::func_84(uParam0, 268435456) && !__LIB_0__::func_86(__LIB_12__::func_720(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { __LIB_12__::func_720(uParam0) };
			func_1443(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

void func_1077(var uParam0)
{
	if (!__LIB_1__::func_588("OBT3_O_PUSH", 0, 0, -1, -1, 0))
	{
		__LIB_13__::func_89(uParam0, "OBT3_O_PUSH", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
	}
}

bool func_1082()
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_70[2]))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_70[2], false))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_70[2], true, false))
			{
				if (__LIB_0__::func_181())
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_70[2], "b_PlayerArthur", false, false);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_70[2], "PLAYER_THREE", Global_35, 0);
				}
				else
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_70[2], "b_PlayerArthur", true, false);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_70[2], "player_zero", Global_35, 0);
				}
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_70[2], "p_barrel02_openCS01x^1", iLocal_124[0], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_70[2], "p_barrel02_opencs01x", iLocal_124[1], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_70[2], "cs_twingroupie_01", uLocal_14[2], 0);
				ANIMSCENE::START_ANIM_SCENE(iLocal_70[2]);
				return true;
			}
		}
		else
		{
			return true;
		}
	}
	return false;
}

void func_1083(var uParam0)
{
	if (!__LIB_0__::func_899(&uLocal_117))
	{
		__LIB_2__::func_259(&uLocal_117);
	}
	if ((iLocal_44 < 1 && __LIB_9__::func_178(&uLocal_117) > __LIB_13__::func_913(iLocal_44, 1073741824 /* Float: 2f */, 1092616192 /* Float: 10f */)) && bLocal_46)
	{
		if (__LIB_14__::func_70(uParam0, "ROBT3_PUSHBARR", &(uLocal_14[0]), 0, 20f, 0, 1))
		{
			iLocal_44++;
			__LIB_1__::func_561(&uLocal_117);
		}
	}
}

void func_1085(var uParam0)
{
	if (__LIB_1__::func_348(uLocal_14[2], Global_35) < 10f)
	{
		if (__LIB_0__::func_899(&uLocal_120) && !__LIB_6__::func_904())
		{
			if (__LIB_1__::func_583(&uLocal_120) > MISC::GET_RANDOM_FLOAT_IN_RANGE(3f, 6f))
			{
				if (!__LIB_0__::func_270())
				{
					if (__LIB_12__::func_876(uParam0, "ROBT3_WAIT", 0))
					{
						__LIB_2__::func_259(&uLocal_120);
					}
				}
			}
		}
		else
		{
			__LIB_2__::func_259(&uLocal_120);
		}
	}
}

void func_1206()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_1626(0);
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
	func_1626(1);
}

void func_1207()
{
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_720(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_1208()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_1629(0);
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
	func_1629(1);
}

void func_1209()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_1__::func_432(15000, 0, 0, 0, 1);
			func_1629(0);
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
	func_1629(1);
}

void func_1210()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_720(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_720(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_1213(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_1213(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
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

int func_1213(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			func_1213(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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

int func_1247(var uParam0, int iParam1, int iParam2, int iParam3)
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
	iVar11 = (func_1668(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_952(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_720(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	__LIB_1__::func_432(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

int func_1264(int iParam0, int iParam1)
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
	iVar0 = func_1679(Global_1310720.f_21, 2);
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
		if (func_1680(iVar0) == iVar6)
		{
			return 1;
		}
	}
	return 0;
}

void func_1435()
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
	iVar0 = func_1760(6291456, 0);
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

void func_1443(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_1443(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_1443(iVar2, vParam1, fParam4, iParam5, iParam6);
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

void func_1626(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (bParam0)
	{
		func_720(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_720(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_720(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_1874(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_723(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_1213(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_1880(Var0);
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

void func_1629(bool bParam0)
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
		func_720(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_720(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_720(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_720(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_720(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_720(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_720(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_720(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_720(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_720(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_720(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_1213(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_1213(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_1213(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_1213(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_1213(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_1213(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_1213(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_1213(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_1213(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_1213(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_1213(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
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

int func_1668(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
							iVar49 = (iVar49 + func_1668(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1668(iVar63, -915411861, 1, 0, 0));
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

int func_1679(int iParam0, int iParam1)
{
	if (iParam1 == 11)
	{
		return 101;
	}
	else if (iParam1 == 32)
	{
		return 126;
	}
	else if (iParam1 == 34)
	{
		return 127;
	}
	switch (iParam0)
	{
		case 79:
			switch (iParam1)
			{
				case 0:
					return 128;
				case 6:
					return 130;
				case 27:
					return 131;
				case 26:
					return 129;
				case 19:
					return 59;
				default:
					break;
			}
			break;
		case 38:
			switch (iParam1)
			{
				case 15:
					return 6;
				case 33:
					return 11;
				case 29:
					return 106;
				case 30:
					return 107;
				case 3:
					return 7;
				case 8:
					return 9;
				case 10:
					return 10;
				case 9:
					return 13;
				case 2:
					return 14;
				case 1:
					return 15;
				case 31:
					return 108;
				case 22:
					return 16;
				case 7:
					return 17;
				case 21:
					return 12;
				default:
					break;
			}
			break;
		case 98:
			switch (iParam1)
			{
				case 0:
					return 132;
				case 6:
					return 134;
				case 27:
					return 135;
				case 26:
					return 133;
				case 19:
					return 57;
				default:
					break;
			}
			break;
		case 69:
			switch (iParam1)
			{
				case 4:
					return 18;
				case 3:
					return 19;
				case 2:
					return 20;
				case 1:
					return 21;
				case 31:
					return 105;
				default:
					break;
			}
			break;
		case 71:
			switch (iParam1)
			{
				case 0:
					return 137;
				case 6:
					return 139;
				case 27:
					return 140;
				case 26:
					return 138;
				case 19:
					return 56;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 141;
				case 6:
					return 143;
				case 27:
					return 144;
				case 26:
					return 142;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 17:
					return 22;
				case 31:
					return 118;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 15:
					return 36;
				case 8:
					return 37;
				case 33:
					return 52;
				case 29:
					return 109;
				case 10:
					return 38;
				case 30:
					return 110;
				case 0:
					return 39;
				case 4:
					return 41;
				case 3:
					return 42;
				case 6:
					return 43;
				case 9:
					return 44;
				case 2:
					return 45;
				case 1:
					return 46;
				case 31:
					return 111;
				case 22:
					return 51;
				case 7:
					return 47;
				case 12:
					return 48;
				case 13:
					return 49;
				case 14:
					return 50;
				case 18:
					return 55;
				case 21:
					return 54;
				default:
					break;
			}
			break;
		case 105:
			switch (iParam1)
			{
				case 15:
					return 25;
				case 33:
					return 33;
				case 29:
					return 112;
				case 10:
					return 26;
				case 4:
					return 27;
				case 3:
					return 28;
				case 6:
					return 29;
				case 2:
					return 30;
				case 31:
					return 113;
				case 22:
					return 32;
				case 1:
					return 31;
				default:
					break;
			}
			break;
		case 101:
			switch (iParam1)
			{
				case 9:
					return 35;
				default:
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 18:
					return 4;
				default:
					break;
			}
			break;
		case 23:
			switch (iParam1)
			{
				case 2:
					return 23;
				case 1:
					return 24;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 145;
				case 26:
					return 146;
				case 6:
					return 147;
				case 27:
					return 148;
				case 19:
					return 58;
				default:
					break;
			}
			break;
		case 26:
			switch (iParam1)
			{
				case 29:
					return 114;
				case 33:
					return 66;
				case 10:
					return 60;
				case 3:
					return 61;
				case 20:
					return 62;
				case 9:
					return 63;
				case 31:
					return 115;
				case 22:
					return 64;
				case 2:
					return 65;
				default:
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 18:
					return 5;
				default:
					break;
			}
			break;
		case 76:
			switch (iParam1)
			{
				case 15:
					return 68;
				case 8:
					return 69;
				case 33:
					return 70;
				case 29:
					return 102;
				case 10:
					return 72;
				case 30:
					return 103;
				case 0:
					return 73;
				case 3:
					return 74;
				case 6:
					return 75;
				case 9:
					return 76;
				case 2:
					return 77;
				case 31:
					return 104;
				case 1:
					return 78;
				case 22:
					return 80;
				case 20:
					return 79;
				default:
					break;
			}
			break;
		case 92:
			switch (iParam1)
			{
				case 30:
					return 116;
				case 4:
					return 82;
				case 2:
					return 86;
				case 1:
					return 85;
				case 31:
					return 117;
				case 9:
					return 84;
				default:
					break;
			}
			break;
		case 78:
			switch (iParam1)
			{
				case 29:
					return 120;
				case 6:
					return 0;
				case 2:
					return 2;
				case 31:
					return 121;
				case 22:
					return 1;
				case 1:
					return 3;
				default:
					break;
			}
			break;
		case 90:
		case 128:
			switch (iParam1)
			{
				case 18:
					return 34;
				default:
					break;
			}
			break;
		case 28:
			switch (iParam1)
			{
				case 2:
					return 89;
				case 1:
					return 88;
				case 3:
					return 87;
				default:
					break;
			}
			break;
		case 65:
			switch (iParam1)
			{
				case 31:
					return 119;
				default:
					break;
			}
			break;
		case 82:
			switch (iParam1)
			{
				case 31:
					return 122;
				default:
					break;
			}
			break;
		case 110:
			switch (iParam1)
			{
				case 31:
					return 124;
				default:
					break;
			}
			break;
		case 115:
			switch (iParam1)
			{
				case 33:
					return 93;
				case 3:
					return 90;
				case 6:
					return 91;
				case 9:
					return 94;
				case 10:
					return 92;
				default:
					break;
			}
			break;
		case 120:
			switch (iParam1)
			{
				case 3:
					return 95;
				case 2:
					return 96;
				default:
					break;
			}
			break;
		case 123:
			switch (iParam1)
			{
				case 4:
					return 98;
				default:
					break;
			}
			break;
		case 117:
			switch (iParam1)
			{
				case 31:
					return 123;
				case 2:
					return 99;
				case 1:
					return 100;
				default:
					break;
			}
			Jump @2074; //curOff = 2027
			switch (iParam1)
			{
				case 18:
					return 67;
				default:
					break;
			}
			Jump @2074; //curOff = 2049
			switch (iParam1)
			{
				case 4:
					return 125;
				default:
					break;
			}
			return -1;
		}
int func_1680(int iParam0)
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
		case 69:
			return joaat("SHOP_VAL_BARBER");
		case 77:
			return joaat("SHOP_VAL_POST_OFFICE");
		case 76:
			return joaat("SHOP_VAL_HORSE_SHOP");
		case 72:
			return joaat("SHOP_VAL_BUTCHER");
		case 78:
			return joaat("SHOP_VAL_TRAIN_STATION");
		case 104:
			return joaat("SHOP_VAL_HORSE_FENCE_MP");
		case 71:
			return joaat("SHOP_VAL_BARTENDER_KEANE");
		case 81:
			return joaat("SHOP_VAL_BARTENDER_SLUM");
		case 80:
			return joaat("SHOP_VAL_NEWSPAPER_BOY");
		case 79:
			return joaat("SHOP_VAL_HOTEL");
		case 102:
			return joaat("SHOP_VAL_BOUNTYHUNTING_MP_RETURN");
		case 103:
			return joaat("SHOP_VAL_COACH");
		case 68:
			return joaat("SHOP_VAL_BANK");
		case 70:
			return joaat("SHOP_VAL_BARTENDER");
		case 35:
			return joaat("SHOP_SCM_HORSE_SHOP");
		case 86:
			return joaat("SHOP_VAN_POST_OFFICE");
		case 85:
			return joaat("SHOP_VAN_TRAIN_STATION");
		case 82:
			return joaat("SHOP_VAN_FENCE");
		case 117:
			return joaat("SHOP_VAN_HORSE_FENCE_MP");
		case 84:
			return joaat("SHOP_VAN_HORSE_SHOP");
		case 83:
			return joaat("SHOP_VAN_BARTENDER");
		case 116:
			return joaat("SHOP_VAN_COACH");
		case 1:
			return joaat("SHOP_ASB_NEWSPAPER_BOY");
		case 120:
			return joaat("SHOP_ASB_BOUNTYHUNTING_MP_RETURN");
		case 0:
			return joaat("SHOP_ASB_GUNSMITH");
		case 2:
			return joaat("SHOP_ASB_POST_OFFICE");
		case 3:
			return joaat("SHOP_ASB_TRAIN_STATION");
		case 121:
			return joaat("SHOP_ASB_HORSE_FENCE_MP");
		case 89:
			return joaat("SHOP_WAL_POST_OFFICE");
		case 87:
			return joaat("SHOP_WAL_GENERAL_STORE");
		case 88:
			return joaat("SHOP_WAL_TRAIN_STATION");
		case 101:
			return joaat("SHOP_DYNAMIC");
		case 126:
			return joaat("SHOP_WILDERNESS_SUPPLIES");
		case 127:
			return joaat("SHOP_ANYWHERE_HANDHELD");
		case 124:
			return joaat("SHOP_MAP_HORSE_FENCE_MP");
		case 149:
			return joaat("SHOP_WEAPON_MOD_STORE");
		case 150:
			return joaat("SHOP_CLOTHING");
		case 151:
			return joaat("SHOP_CAMP_SHAVING");
		case 152:
			return joaat("SHOP_WARDROBE");
		case 128:
			return joaat("SHOP_BVH_DOCTOR");
		case 129:
			return joaat("SHOP_BVH_GENERAL_STORE");
		case 130:
			return joaat("SHOP_BVH_GUNSMITH");
		case 131:
			return joaat("SHOP_BVH_HORSE_TRAINER");
		case 59:
			return 1529797091;
		case 132:
			return joaat("SHOP_CLM_DOCTOR");
		case 133:
			return joaat("SHOP_CLM_GENERAL_STORE");
		case 134:
			return joaat("SHOP_CLM_GUNSMITH");
		case 135:
			return joaat("SHOP_CLM_HORSE_TRAINER");
		case 57:
			return 1388932648;
		case 137:
			return joaat("SHOP_HSO_DOCTOR");
		case 138:
			return joaat("SHOP_HSO_GENERAL_STORE");
		case 139:
			return joaat("SHOP_HSO_GUNSMITH");
		case 140:
			return joaat("SHOP_HSO_HORSE_TRAINER");
		case 56:
			return 878376253;
		case 141:
			return joaat("SHOP_LAK_DOCTOR");
		case 142:
			return joaat("SHOP_LAK_GENERAL_STORE");
		case 143:
			return joaat("SHOP_LAK_GUNSMITH");
		case 144:
			return joaat("SHOP_LAK_HORSE_TRAINER");
		case 145:
			return joaat("SHOP_SHB_DOCTOR");
		case 146:
			return joaat("SHOP_SHB_GENERAL_STORE");
		case 147:
			return joaat("SHOP_SHB_GUNSMITH");
		case 148:
			return joaat("SHOP_SHB_HORSE_TRAINER");
		case 58:
			return -2076086367;
		case 136:
			return joaat("SHOP_CLM_HORSE_FENCE");
		case 119:
			return joaat("SHOP_CKT_HORSE_FENCE_MP");
		case 122:
			return joaat("SHOP_BUT_HORSE_FENCE_MP");
		case 95:
			return joaat("SHOP_AMD_GENERAL_STORE");
		case 97:
			return joaat("SHOP_AMD_BARTENDER");
		case 96:
			return joaat("SHOP_AMD_POST_OFFICE");
		case 90:
			return joaat("SHOP_TBL_GENERAL_STORE");
		case 93:
			return joaat("SHOP_TBL_BARTENDER");
		case 91:
			return joaat("SHOP_TBL_GUNSMITH");
		case 92:
			return joaat("SHOP_TBL_BUTCHER");
		case 94:
			return joaat("SHOP_TBL_HORSE_SHOP");
		case 98:
			return joaat("SHOP_RYC_FENCE");
		case 125:
			return joaat("SHOP_THL_FENCE");
		case 123:
			return joaat("SHOP_BEN_HORSE_FENCE_MP");
		case 99:
			return joaat("SHOP_BEN_POST_OFFICE");
		case 100:
			return joaat("SHOP_BEN_TRAIN_STATION");
		case 4:
			return 548657065;
		case 5:
			return 243086140;
		case 34:
			return -305029900;
		case 67:
			return 1008537949;
		default:
			break;
	}
	return 0;
}

int func_1760(int iParam0, int iParam1)
{
	var uVar0;
	return func_1942(&uVar0, iParam0, iParam1);
}

void func_1874(int iParam0)
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
	func_1213(iParam0, 1, 1, -142743235, 1);
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
		func_1213(uVar18[iVar36], 1, 1, -142743235, 1);
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

void func_1880(struct<6> Param0)
{
	if (!func_2015(Param0.f_4, 1))
	{
	}
	if (!func_2015(Param0, 1))
	{
	}
	if (!func_2015(Param0.f_2, 1))
	{
	}
	if (!func_2015(Param0.f_5, 1))
	{
	}
	if (!func_2015(Param0.f_3, 1))
	{
	}
	if (!func_2015(Param0.f_1, 1))
	{
	}
}

int func_1942(var uParam0, int iParam1, int iParam2)
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
		return func_1942(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

bool func_2015(int iParam0, int iParam1)
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
				if (func_2015(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_2015(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_2015(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_2015(iVar21, 1))
				{
				}
			}
		}
		__LIB_1__::func_712();
		return true;
	}
	return false;
}

