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
	bool bLocal_14 = false;
	bool bLocal_15 = false;
	bool bLocal_16 = false;
	bool bLocal_17 = false;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	vector3 vLocal_22 = { 0f, 0f, 0f };
	float fLocal_25 = 0f;
	bool bLocal_26 = false;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	struct<24> Local_29 = { 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_53 = 0;
	int iLocal_54 = 0;
	struct<20> Local_55 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 } ;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_89[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = -1;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 1097859072;
	var uLocal_118 = 1000;
	var uLocal_119 = 1067450368;
	var uLocal_120 = 5000;
	var uLocal_121 = 42;
	var uLocal_122 = 1103626240;
	var uLocal_123 = 1077936128;
	var uLocal_124 = 1106247680;
	var uLocal_125 = 1103101952;
	var uLocal_126 = 1097859072;
	var uLocal_127 = 1103626240;
	var uLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	int iLocal_137 = 0;
	char* sLocal_138[6] = { NULL, NULL, NULL, NULL, NULL, NULL };
	bool bLocal_145 = false;
	bool bLocal_146 = false;
	bool bLocal_147 = false;
	bool bLocal_148 = false;
	int iLocal_149 = 0;
	vector3 vLocal_150 = { 0f, 0f, 0f };
	vector3 vLocal_153 = { 0f, 0f, 0f };
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	vector3 vLocal_161 = { 0f, 0f, 0f };
	float fLocal_164 = 0f;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	var uLocal_171 = 0;
	int iLocal_172 = 0;
	int iLocal_173 = 0;
	int iLocal_174 = 0;
	int iLocal_175 = 0;
	int iLocal_176 = 0;
	vector3 vLocal_177 = { 0f, 0f, 0f };
	float fLocal_180 = 0f;
	int iLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	bool bLocal_185 = false;
	bool bLocal_186 = false;
	bool bLocal_187 = false;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	float fLocal_191 = 0f;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	int iLocal_195 = 0;
	vector3 vLocal_196 = { 0f, 0f, 0f };
	struct<16> Local_199[3];
	int iLocal_248 = 0;
	int iLocal_249 = 0;
	int iLocal_250 = 0;
	int iLocal_251 = 0;
	bool bLocal_252 = false;
	bool bLocal_253 = false;
	bool bLocal_254 = false;
	char* sLocal_255 = NULL;
	int iLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	int iLocal_260 = 0;
	int iLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	float fLocal_265 = 0f;
	float fLocal_266 = 0f;
	bool bLocal_267 = false;
	int iLocal_268 = 0;
	char* sLocal_269 = NULL;
	char* sLocal_270 = NULL;
	char* sLocal_271 = NULL;
	char* sLocal_272 = NULL;
	char* sLocal_273 = NULL;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	int iLocal_279[3] = { 0, 0, 0 };
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion
void __EntryFunction__()
{
	struct<2606> Var0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	vLocal_22 = { -2376.91f, -1599.58f, 153.25f };
	fLocal_25 = -29.55f;
	vLocal_150 = { -2438.88f, -1451.27f, 148.7f };
	vLocal_153 = { 0f, 0f, 317.8457f };
	iLocal_160 = joaat("A_C_ELK_01");
	vLocal_161 = { -2438.79f, -1450.34f, 149.23f };
	fLocal_164 = 238.32f;
	iLocal_169 = joaat("S_BEARTRAPANIMATED01X");
	vLocal_177 = { -2439.687f, -1451.965f, 148.7948f };
	fLocal_180 = 308.8976f;
	vLocal_196 = { -2370.388f, -1337.841f, 145.9731f };
	iLocal_248 = joaat("RCES_EVELYNMILLER_MALES_01");
	iLocal_250 = -1;
	sLocal_255 = "rcm_miller2_route1";
	sLocal_269 = "rcm_miller2_route2";
	sLocal_270 = "MLLR2_START";
	sLocal_271 = "MLLR2_CAMP";
	sLocal_272 = "MLLR2_FIGHT";
	sLocal_273 = "MLLR2_STOP";
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
	func_91(uParam0);
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
	else if (!__LIB_0__::func_899(&(uParam0->f_2585)) || IntToFloat(__LIB_9__::func_401(&(uParam0->f_2585))) > func_149(uParam0))
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
	__LIB_12__::func_658(uParam0, 3);
	__LIB_12__::func_659(uParam0, 6);
	__LIB_12__::func_657(uParam0, 35f);
	__LIB_12__::func_656(uParam0, 15f);
	__LIB_12__::func_777(&uLocal_100);
	__LIB_4__::func_135(&uLocal_100, 1, 0, 0);
	func_191(&iLocal_27);
	__LIB_18__::func_619(&Local_29, 1, 0, 0);
	func_193(&uLocal_89);
	Local_55.f_4 = "rcm_miller2_route0";
	Local_55.f_5 = 0;
	Local_55.f_7 = 0;
	Local_55.f_9 = 0;
	Local_55.f_12 = { -2378.244f, -1597.157f, 153.1966f };
	Local_55.f_15 = 330.4587f;
	Local_55.f_16 = 0;
	Local_55.f_17 = "SCRIPT_RC@MLLR@IG@RC_2@RC2_IG4_LookAround";
	func_194(&Local_199);
	AUDIO::PREPARE_MUSIC_EVENT(sLocal_270);
}

void func_42(var uParam0)
{
	int iVar0;
	__LIB_12__::func_908(uParam0, 0);
	__LIB_12__::func_867(uParam0, joaat("P_CS_LETTER01A_X"), 1);
	__LIB_12__::func_867(uParam0, __LIB_13__::func_581(), 1);
	__LIB_12__::func_867(uParam0, joaat("P_PEN01X"), 1);
	__LIB_12__::func_867(uParam0, __LIB_8__::func_409(), 1);
	__LIB_12__::func_867(uParam0, __LIB_13__::func_582(), 3);
	__LIB_12__::func_867(uParam0, iLocal_169, 2);
	__LIB_12__::func_867(uParam0, iLocal_160, 2);
	__LIB_12__::func_867(uParam0, iLocal_248, 2);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		__LIB_12__::func_867(uParam0, Local_199[iVar0 /*16*/].f_3, 2);
		iVar0++;
	}
	__LIB_13__::func_55(uParam0, Local_55.f_17, 2);
	__LIB_13__::func_55(uParam0, "amb_creature_mammal@world_elk_injured_on_ground@base", 2);
	__LIB_13__::func_55(uParam0, "amb_creature_mammal@world_elk_injured_on_ground@canter_exit", 2);
	__LIB_13__::func_15(uParam0, Local_55.f_4, 2, -1, 2);
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
	struct<4> Var0;
	switch (iParam0)
	{
		case 0:
			Var0 = { func_212() };
			Var0.f_3 = func_213();
			break;
		case 1:
			Var0 = { func_214() };
			Var0.f_3 = func_215();
			break;
		case 2:
			Var0 = { func_216() };
			Var0.f_3 = func_217();
			break;
		default:
			Var0 = { func_212() };
			Var0.f_3 = func_213();
			break;
	}
	return Var0;
}

bool func_62(var uParam0)
{
	return func_218(*uParam0, uParam0->f_3);
}

bool func_64(var uParam0)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	if (bLocal_254)
	{
		StringCopy(&(uParam0->f_2578), "MLLR2_F_SC", 24);
		return true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_55.f_1))
	{
		if (!__LIB_0__::func_272(Local_55.f_1, 1))
		{
			StringCopy(&(uParam0->f_2578), "MLLR2_F_D", 24);
			return true;
		}
		if (FIRE::IS_ENTITY_ON_FIRE(Local_55.f_1))
		{
			StringCopy(&(uParam0->f_2578), "MLLR2_F_D", 24);
			return true;
		}
		if (ENTITY::_IS_ENTITY_FROZEN(Local_55.f_1))
		{
			vVar0 = { ENTITY::GET_ENTITY_COORDS(Local_55.f_1, true, false) };
			if (FIRE::IS_EXPLOSION_IN_SPHERE(25, vVar0, 2.5f) || FIRE::IS_EXPLOSION_IN_SPHERE(2, vVar0, 2.5f))
			{
				StringCopy(&(uParam0->f_2578), "MLLR2_F_D", 24);
				return true;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_55.f_2))
		{
			if (ENTITY::IS_ENTITY_DEAD(Local_55.f_2))
			{
				StringCopy(&(uParam0->f_2578), "MLLR2_F_HD", 24);
				return true;
			}
			else if (__LIB_0__::func_394(Local_55.f_1, Local_55.f_2, 0) && FIRE::IS_ENTITY_ON_FIRE(Local_55.f_2))
			{
				StringCopy(&(uParam0->f_2578), "MLLR2_F_AT", 24);
				return true;
			}
		}
		if ((iLocal_18 == 1 || iLocal_18 == 2) || iLocal_18 == 3)
		{
			fVar3 = __LIB_0__::func_94(Local_55.f_1, Global_36, 1);
			if (fVar3 > 70f)
			{
				StringCopy(&(uParam0->f_2578), "MLLR2_F_A", 24);
				return true;
			}
			else if (fVar3 > 45f && !__LIB_0__::func_27(iLocal_27, 32))
			{
				__LIB_12__::func_883(uParam0, "MLLR2_W_A", 1, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_1__::func_683(&iLocal_27, 32);
			}
			else if (fVar3 < 15f && __LIB_0__::func_27(iLocal_27, 32))
			{
				__LIB_1__::func_390("MLLR2_W_A", 1);
				if (iLocal_18 == 2)
				{
					__LIB_13__::func_89(uParam0, "MLLR2_FREETRAP", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				}
				else if (iLocal_18 == 6)
				{
					__LIB_13__::func_89(uParam0, "MLLR2_DEALH", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				}
				__LIB_1__::func_681(&iLocal_27, 32);
			}
		}
		else if ((iLocal_18 == 4 || iLocal_18 == 5) || iLocal_18 == 6)
		{
			fVar4 = __LIB_0__::func_94(Local_55.f_1, Global_36, 1);
			if (fVar4 > 36f)
			{
				StringCopy(&(uParam0->f_2578), "MLLR2_F_A", 24);
				return true;
			}
			else if (fVar4 > 25f && !__LIB_0__::func_27(iLocal_27, 32))
			{
				__LIB_12__::func_883(uParam0, "MLLR2_W_A", 1, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_1__::func_683(&iLocal_27, 32);
			}
			else if (fVar4 < 15f && __LIB_0__::func_27(iLocal_27, 32))
			{
				__LIB_1__::func_390("MLLR2_W_A", 1);
				if (iLocal_18 == 6)
				{
					__LIB_13__::func_89(uParam0, "MLLR2_DEALH", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				}
				__LIB_1__::func_681(&iLocal_27, 32);
			}
		}
	}
	if (iLocal_18 < 5)
	{
		if (__LIB_6__::func_703(Local_55.f_3))
		{
			StringCopy(&(uParam0->f_2578), "MLLR2_F_PHD", 24);
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
	if (func_230(uParam0->f_174))
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
	if (func_239(uParam0) || __LIB_12__::func_663(uParam0->f_174, uParam0->f_743))
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
	func_244(uParam0);
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
			func_259(uParam0);
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
	if (__LIB_12__::func_924(uParam0) && func_284(uParam0))
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
	func_303(uParam0, 0, 0);
}

void func_91(var uParam0)
{
	func_304(uParam0);
	__LIB_13__::func_614(uParam0, 1117126656 /* Float: 75f */);
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
		if (uParam0->f_171 != 0 || __LIB_13__::func_588(uParam0))
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
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = iParam1;
	func_309(iLocal_27);
	switch (iVar0)
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_55.f_2))
			{
				func_310(&Local_55, Local_55.f_12, Local_55.f_15, 1, 0, 1);
				return 2;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_55.f_3))
			{
				if (__LIB_14__::func_19(uParam0, &(Local_55.f_3), vLocal_22, fLocal_25, 1, 1, 1, 1, 1))
				{
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_55.f_3, vLocal_22, fLocal_25, true, false, true);
					TASK::TASK_STAND_STILL(Local_55.f_3, -1);
				}
				return 2;
			}
			if (__LIB_12__::func_936(uParam0))
			{
				if (func_313(&iLocal_27, &uLocal_78))
				{
					func_303(uParam0, 0, 1);
					return 5;
				}
			}
			else
			{
				AUDIO::PREPARE_MUSIC_EVENT(sLocal_270);
				if (ENTITY::DOES_ENTITY_EXIST(Local_55.f_2) && ENTITY::DOES_ENTITY_EXIST(Local_55.f_3))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_55.f_1))
					{
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_55.f_1, func_314(), func_315(), true, false, true);
						func_316(&(Local_55.f_1), 1);
					}
					iVar1 = 0;
					while (iVar1 < 10)
					{
						__LIB_1__::func_951(&(uLocal_78[iVar1]));
						iVar1++;
					}
					__LIB_8__::func_734(500, 1);
					return 7;
				}
			}
			break;
		case 1:
			func_319();
			if (!ENTITY::DOES_ENTITY_EXIST(Local_55.f_2))
			{
				func_310(&Local_55, func_320(), func_321(), 1, 0, 1);
			}
			func_322(uParam0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(Local_55.f_2) && iLocal_195 == 4)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_55.f_1))
				{
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_55.f_1, func_320(), func_321(), true, false, true);
					func_323(1);
					iVar2 = 0;
					while (iVar2 < 10)
					{
						__LIB_1__::func_951(&(uLocal_78[iVar2]));
						iVar2++;
					}
				}
				if (__LIB_0__::func_272(Local_55.f_2, 0))
				{
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_55.f_2, func_320(), func_321(), true, false, true);
					TASK::TASK_STAND_STILL(Local_55.f_2, -1);
				}
				__LIB_1__::func_571(Local_55.f_1, Local_55.f_2, 0, -1, 1);
				if (!ENTITY::DOES_ENTITY_EXIST(Local_55.f_3))
				{
					if (__LIB_14__::func_19(uParam0, &(Local_55.f_3), -2388.614f, -1364.16f, 147.9038f, 319.5899f, 1, 1, 1, 1, 1))
					{
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_55.f_3, -2388.614f, -1364.16f, 147.9038f, 319.5899f, true, false, true);
						TASK::TASK_STAND_STILL(Local_55.f_3, -1);
					}
					return 2;
				}
				else if (!__LIB_0__::func_266(Local_55.f_3, -2388.614f, -1364.16f, 147.9038f, 2f, 1, 1))
				{
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_55.f_3, -2388.614f, -1364.16f, 147.9038f, 319.5899f, true, false, true);
					TASK::TASK_STAND_STILL(Local_55.f_3, -1);
				}
				func_326(1);
				__LIB_1__::func_571(Global_35, Local_55.f_3, 0, -1, 1);
				__LIB_1__::func_683(&iLocal_28, 4);
				__LIB_10__::func_592(3);
				if (__LIB_0__::func_71(Global_35))
				{
					__LIB_8__::func_734(500, 1);
					return 7;
				}
			}
			break;
		case 2:
			if (!ENTITY::IS_ENTITY_DEAD(Local_55.f_1))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_55.f_1, func_329(), func_330(), true, false, true);
			}
			iVar3 = 0;
			while (iVar3 < 10)
			{
				__LIB_1__::func_951(&(uLocal_78[iVar3]));
				iVar3++;
			}
			func_303(uParam0, 1, 0);
			return 5;
		default:
			__LIB_8__::func_734(500, 1);
			return 7;
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
	return func_343(Var0, &(uParam0->f_206), uParam0);
}

int func_103(var uParam0)
{
	switch (iLocal_19)
	{
		case 0:
			__LIB_0__::func_568(-2415.226f, -1583.963f, 151.4264f, 300f, 0);
			__LIB_0__::func_568(func_348(), 300f, 0);
			PED::_0x9851DE7AEC10B4E1(func_348(), 25f, 1, 0);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_55.f_1, joaat("REL_PLAYER_ALLY"));
			if (!ENTITY::DOES_ENTITY_EXIST(Local_55.f_2))
			{
				func_310(&Local_55, Local_55.f_12, Local_55.f_15, 1, 0, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_55.f_2) && !__LIB_0__::func_163(Local_55.f_1, 1868526510))
			{
				TASK::TASK_MOUNT_ANIMAL(Local_55.f_1, Local_55.f_2, 20000, -1, 1f, 1, 0, 0);
			}
			__LIB_18__::func_619(&Local_29, 1, 0, 1);
			return 7;
		case 1:
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
	__LIB_13__::func_583(1);
	switch (iLocal_18)
	{
		case 0:
			if (func_353(uParam0))
			{
				func_316(&(Local_55.f_1), 1);
				__LIB_10__::func_592(1);
			}
			break;
		case 1:
			if (func_354(uParam0))
			{
				__LIB_1__::func_681(&iLocal_27, 1);
				__LIB_1__::func_681(&iLocal_27, 4);
				__LIB_1__::func_681(&iLocal_27, 16);
				__LIB_2__::func_259(&uLocal_131);
				__LIB_10__::func_592(2);
			}
			break;
		case 2:
			if (func_355(uParam0))
			{
				__LIB_2__::func_259(&uLocal_131);
				__LIB_1__::func_681(&iLocal_27, 4);
				__LIB_10__::func_592(3);
			}
			break;
		case 3:
			if (func_356(uParam0))
			{
				func_316(&(Local_55.f_1), 0);
				__LIB_1__::func_681(&iLocal_27, 16);
				__LIB_1__::func_681(&iLocal_27, 4);
				__LIB_13__::func_62(uParam0, func_61(1), func_61(2), 1, 2, 0);
				__LIB_3__::func_353(sLocal_271, 0);
				if (PED::DOES_GROUP_EXIST(Local_55.f_19))
				{
					if (PED::IS_PED_GROUP_MEMBER(Local_55.f_1, Local_55.f_19, 0))
					{
						__LIB_3__::func_456(Local_55.f_1);
					}
					PED::REMOVE_GROUP(Local_55.f_19);
				}
				PED::_0xFD6943B6DF77E449(Local_55.f_1, false);
				if (iLocal_18 == 3)
				{
					__LIB_10__::func_592(4);
				}
			}
			break;
		case 4:
			if (func_359(uParam0))
			{
				__LIB_1__::func_681(&iLocal_27, 1);
				if (iLocal_256 == 2)
				{
					__LIB_10__::func_592(6);
				}
				else
				{
					__LIB_10__::func_592(5);
				}
			}
			break;
		case 5:
			if (func_360(uParam0))
			{
				if (bLocal_14)
				{
					PED::SET_PED_CONFIG_FLAG(Global_35, 249, false);
					PED::SET_PED_CONFIG_FLAG(Global_35, 334, false);
					bLocal_14 = false;
				}
				__LIB_10__::func_592(6);
			}
			break;
		case 6:
			if (func_361(uParam0))
			{
				__LIB_4__::func_89(&uLocal_134, 0);
				__LIB_10__::func_592(7);
			}
			break;
		case 7:
			PED::SET_PED_RESET_FLAG(Local_55.f_1, 49, true);
			PED::SET_PED_RESET_FLAG(Local_55.f_1, 53, true);
			if (__LIB_9__::func_178(&uLocal_134) > 5f)
			{
				if (PED::_0xD0B7AEB56229D317(Global_35) != 0)
				{
					__LIB_2__::func_259(&uLocal_134);
				}
				else if (!ENTITY::IS_ENTITY_DEAD(Local_199[0 /*16*/]) && PED::_0xD0B7AEB56229D317(Local_199[0 /*16*/]) == Global_35)
				{
					__LIB_2__::func_259(&uLocal_134);
				}
				else if (!ENTITY::IS_ENTITY_DEAD(Local_199[1 /*16*/]) && PED::_0xD0B7AEB56229D317(Local_199[1 /*16*/]) == Global_35)
				{
					__LIB_2__::func_259(&uLocal_134);
				}
				else if (!ENTITY::IS_ENTITY_DEAD(Local_199[2 /*16*/]) && PED::_0xD0B7AEB56229D317(Local_199[2 /*16*/]) == Global_35)
				{
					__LIB_2__::func_259(&uLocal_134);
				}
				else
				{
					return 5;
				}
			}
			break;
	}
	return 7;
}

void func_122(var uParam0)
{
	func_326(0);
	__LIB_12__::func_654(uParam0->f_174, 1);
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
		func_398(Global_1347702[iParam0 /*49*/].f_15, bParam4, bParam2, bParam6, bParam5);
	}
	else
	{
		__LIB_1__::func_809(Global_1347702[iParam0 /*49*/].f_15, bParam6);
	}
	__LIB_10__::func_833(iParam0);
}

float func_149(var uParam0)
{
	if (__LIB_1__::func_410(func_348(), Global_36, 40f, 1) || (!ENTITY::IS_ENTITY_DEAD(Local_55.f_1) && __LIB_0__::func_266(Local_55.f_1, Global_36, 15f, 1, 1)))
	{
		return 0f;
	}
	return 100f;
}

bool func_150(var uParam0)
{
	float fVar0;
	int iVar1;
	bool bVar2;
	if (__LIB_1__::func_410(func_348(), Global_36, 40f, 1))
	{
		POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	}
	switch (__LIB_12__::func_644(uParam0))
	{
		case 0:
			if (!ENTITY::IS_ENTITY_DEAD(Local_55.f_1))
			{
				fVar0 = __LIB_0__::func_665(Local_55.f_1, Global_35, 1, 1);
				if (fVar0 > 60f)
				{
					if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_55.f_1))
					{
						__LIB_2__::func_426(&(Local_55.f_1));
						__LIB_2__::func_426(&(Local_55.f_2));
						__LIB_12__::func_654(uParam0->f_174, 0);
						return false;
					}
				}
				if (!__LIB_0__::func_27(iLocal_27, 134217728))
				{
					if ((PED::IS_PED_FLEEING(Local_55.f_1) || PED::IS_PED_IN_COMBAT(Local_55.f_1, 0)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_55.f_1, Global_35, 1, 1))
					{
						TASK::CLEAR_PED_SECONDARY_TASK(Local_55.f_1);
						TASK::TASK_SMART_FLEE_PED(Local_55.f_1, Global_35, 10000f, -1, 0, 1077936128 /* Float: 3f */, 0);
						PED::SET_PED_KEEP_TASK(Local_55.f_1, true);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_55.f_1, false);
						__LIB_1__::func_683(&iLocal_27, 134217728);
						return false;
					}
				}
				if (!__LIB_0__::func_27(iLocal_28, 4))
				{
					if (PED::IS_PED_ON_MOUNT(Local_55.f_1))
					{
						if (__LIB_12__::func_876(uParam0, "RMLLR_2_LEAVE", 0))
						{
							__LIB_1__::func_683(&iLocal_28, 4);
							__LIB_2__::func_259(&uLocal_0);
						}
					}
				}
				else if (fVar0 < 15f)
				{
					if (iLocal_137 < 6)
					{
						if (__LIB_1__::func_583(&uLocal_0) > 15f)
						{
							if (__LIB_12__::func_876(uParam0, sLocal_138[iLocal_137], 0))
							{
								__LIB_2__::func_259(&uLocal_0);
								iLocal_137++;
							}
						}
					}
				}
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_55.f_1, 0) && PED::IS_PED_ON_MOUNT(Local_55.f_1))
				{
					if (TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_269, ENTITY::GET_ENTITY_COORDS(Local_55.f_1, true, false), &iVar1) && iVar1 < 6)
					{
						TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_55.f_1, 1.75f, 0, -1082130432 /* Float: -1f */, 0);
					}
					else
					{
						TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_55.f_1, 2.5f, 0, -1082130432 /* Float: -1f */, 0);
					}
				}
			}
			else
			{
				bVar2 = true;
				if (ENTITY::DOES_ENTITY_EXIST(Local_55.f_1))
				{
					if (__LIB_0__::func_266(Local_55.f_1, Global_36, 50f, 1, 1))
					{
						bVar2 = false;
					}
					else
					{
						PED::DELETE_PED(&(Local_55.f_1));
					}
				}
				if (__LIB_1__::func_410(Global_36, func_348(), 100f, 1))
				{
					bVar2 = false;
				}
				if (bVar2)
				{
					return true;
				}
			}
			return false;
		default:
			return true;
	}
	return true;
}

void func_159(var uParam0)
{
	int iVar0;
	__LIB_3__::func_353(sLocal_273, 0);
	func_316(&(Local_55.f_1), 0);
	if (PLAYER::_0x2009F8AB7A5E9D6D(PLAYER::GET_PLAYER_INDEX()) && !ENTITY::IS_ENTITY_DEAD(Local_55.f_1))
	{
		PLAYER::_0x0C6B89876262A99D(PLAYER::GET_PLAYER_INDEX(), Local_55.f_1);
	}
	if (PED::DOES_GROUP_EXIST(Local_55.f_19))
	{
		if (PED::IS_PED_GROUP_MEMBER(Local_55.f_1, Local_55.f_19, 0))
		{
			__LIB_3__::func_456(Local_55.f_1);
		}
		PED::REMOVE_GROUP(Local_55.f_19);
	}
	__LIB_0__::func_325(&iLocal_54);
	__LIB_0__::func_325(&iLocal_170);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_199[iVar0 /*16*/].f_9))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(Local_199[iVar0 /*16*/].f_9);
		}
		__LIB_0__::func_325(&(Local_199[iVar0 /*16*/].f_1));
		__LIB_2__::func_788(&(Local_199[iVar0 /*16*/]), 1, 0, 1);
		iVar0++;
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_260))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_260);
	}
	__LIB_2__::func_788(&iLocal_159, 1, 0, 1);
	__LIB_4__::func_866(&iLocal_168, 1, 1);
	__LIB_2__::func_788(&(Local_55.f_1), 1, 0, 1);
	__LIB_2__::func_788(&(Local_55.f_2), 1, 0, 1);
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_268))
	{
		POPULATION::_0xA1CFB35069D23C23(iLocal_268);
		POPULATION::_0x74C2B3DC0B294102(iLocal_268);
		VOLUME::_DELETE_VOLUME(iLocal_268);
	}
	__LIB_0__::func_172(iLocal_251);
	func_432(iLocal_27);
	__LIB_2__::func_353(&uLocal_156, 1);
	__LIB_2__::func_353(&uLocal_157, 1);
	__LIB_2__::func_353(&uLocal_158, 1);
	if (Local_29.f_23)
	{
		if (INTERIOR::IS_VALID_INTERIOR(Local_29.f_22) && INTERIOR::IS_INTERIOR_READY(Local_29.f_22))
		{
			INTERIOR::UNPIN_INTERIOR(Local_29.f_22);
		}
		Local_29.f_23 = 0;
	}
	if (__LIB_0__::func_27(iLocal_27, 1073741824 /* Float: 2f */))
	{
		__LIB_6__::func_824();
	}
	if (__LIB_0__::func_27(iLocal_27, 33554432))
	{
		TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(sLocal_255, 0, 1065353216 /* Float: 1f */, 1056964608 /* Float: 0.5f */, 1);
	}
	if (bLocal_14 && !ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 249, false);
		PED::SET_PED_CONFIG_FLAG(Global_35, 334, false);
		bLocal_14 = false;
	}
	func_326(0);
}

void func_191(int iParam0)
{
	*iParam0 = 0;
}

void func_193(var uParam0)
{
	(*uParam0)[0] = "p_cs_letter01a_x";
	(*uParam0)[1] = "p_cs_letter01a_x^1";
	(*uParam0)[2] = "p_cs_letter01a_x^2";
	(*uParam0)[3] = "p_cs_letter01a_x^3";
	(*uParam0)[4] = "p_cs_letter01a_x^4";
	(*uParam0)[5] = "p_cs_letter01a_x^5";
	(*uParam0)[6] = "p_cs_letter01a_x^6";
	(*uParam0)[7] = "p_cs_letter01a_x^7";
	(*uParam0)[8] = "p_cs_book04x";
	(*uParam0)[9] = "p_pen01x";
}

void func_194(int iParam0)
{
	(iParam0[0 /*16*/])->f_4 = -872023541;
	(iParam0[0 /*16*/])->f_5 = { -2369.841f, -1327.699f, 147.6759f };
	(iParam0[0 /*16*/])->f_8 = 214.0383f;
	(iParam0[0 /*16*/])->f_10 = "script@rcm@MLLR@IG@RC_2@RC2_IG2_BerateGroup@RC2_IG2_Thg0_Drnkr";
	(iParam0[0 /*16*/])->f_11 = "pbl_0Drnkr";
	(iParam0[0 /*16*/])->f_12 = "A_M_M_SmThug_01^0drnkLoop";
	(iParam0[0 /*16*/])->f_13 = "A_M_M_SmhThug_01";
	(iParam0[0 /*16*/])->f_14 = "p_bottleJD01x";
	(iParam0[0 /*16*/])->f_3 = joaat("P_BOTTLEJD01X");
	(iParam0[1 /*16*/])->f_4 = -1152165722;
	(iParam0[1 /*16*/])->f_5 = { -2363.627f, -1323.623f, 146.3287f };
	(iParam0[1 /*16*/])->f_8 = 322.8354f;
	(iParam0[1 /*16*/])->f_10 = "script@rcm@MLLR@IG@RC_2@RC2_IG2_BerateGroup@RC2_IG2_Thg1_Sknr";
	(iParam0[1 /*16*/])->f_11 = "pbl_1Sknr";
	(iParam0[1 /*16*/])->f_12 = "A_M_M_SmThug_01^11_sknrLoop";
	(iParam0[1 /*16*/])->f_13 = "A_M_M_SmhThug_01^1";
	(iParam0[1 /*16*/])->f_14 = "p_knife03x";
	(iParam0[1 /*16*/])->f_3 = joaat("P_KNIFE03X");
	(iParam0[2 /*16*/])->f_4 = -1380270731;
	(iParam0[2 /*16*/])->f_5 = { -2368.711f, -1328.58f, 146.551f };
	(iParam0[2 /*16*/])->f_8 = 301.9228f;
	(iParam0[2 /*16*/])->f_10 = "script@rcm@MLLR@IG@RC_2@RC2_IG2_BerateGroup@RC2_IG2_Thg2_Smkr";
	(iParam0[2 /*16*/])->f_11 = "pbl_2Smkr";
	(iParam0[2 /*16*/])->f_12 = "A_M_M_SmThug_01^2_smkrLoop";
	(iParam0[2 /*16*/])->f_13 = "A_M_M_SmhThug_01^2";
	(iParam0[2 /*16*/])->f_14 = "p_cigarette_cs02x";
	(iParam0[2 /*16*/])->f_3 = joaat("P_CIGARETTE_CS02X");
}

Vector3 func_212()
{
	return -2371.694f, -1595.521f, 152.9364f;
}

float func_213()
{
	return 68.7f;
}

Vector3 func_214()
{
	return -2384.764f, -1349.355f, 148.8644f;
}

float func_215()
{
	return 310.2753f;
}

Vector3 func_216()
{
	return -2367.681f, -1337.732f, 145.5185f;
}

float func_217()
{
	return 343.8947f;
}

int func_218(vector3 vParam0, var uParam3)
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
		iVar0 = func_495(0, 0);
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

bool func_230(int iParam0)
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

int func_239(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_55.f_1))
	{
		if (!__LIB_0__::func_272(Local_55.f_1, 1))
		{
			func_527(&Local_55);
			return 1;
		}
		else if (PED::IS_PED_FLEEING(Local_55.f_1))
		{
			func_527(&Local_55);
			return 1;
		}
		else if (PED::IS_PED_IN_COMBAT(Local_55.f_1, 0))
		{
			func_527(&Local_55);
			return 1;
		}
		else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_55.f_1, Global_35, 1, 1))
		{
			func_527(&Local_55);
			return 1;
		}
		else if (!func_528(&(Local_55.f_1), &uLocal_100, &uLocal_128, 1, 0, 0))
		{
			func_527(&Local_55);
			return 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_55.f_2))
	{
		if (!__LIB_0__::func_272(Local_55.f_2, 1))
		{
			func_527(&Local_55);
			return 1;
		}
		else if (PED::IS_PED_FLEEING(Local_55.f_2))
		{
			func_527(&Local_55);
			return 1;
		}
		else if (PED::IS_PED_IN_COMBAT(Local_55.f_2, 0))
		{
			func_527(&Local_55);
			return 1;
		}
		else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_55.f_2, Global_35, 1, 1))
		{
			func_527(&Local_55);
			return 1;
		}
	}
	return 0;
}

void func_244(var uParam0)
{
	int iVar0;
	__LIB_0__::func_325(&iLocal_54);
	__LIB_0__::func_325(&iLocal_170);
	iVar0 = 0;
	while (iVar0 < Local_199)
	{
		__LIB_0__::func_325(&(Local_199[iVar0 /*16*/].f_1));
		if (ENTITY::DOES_ENTITY_EXIST(Local_199[iVar0 /*16*/]))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_199[iVar0 /*16*/]));
		}
		iVar0++;
	}
	if (__LIB_12__::func_644(uParam0) == 0)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_55.f_1))
		{
			iLocal_137 = 0;
			sLocal_138[0] = "RMLLR_2_POSTCS";
			sLocal_138[1] = "RMLLR_2_POSTCS2";
			sLocal_138[2] = "RMLLR_2_POSTCS3";
			sLocal_138[3] = "RMLLR_2_POSTCS4";
			sLocal_138[4] = "RMLLR_2_POSTCS5";
			sLocal_138[5] = "RMLLR_2_POSTCS6";
		}
	}
}

void func_259(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_172, 16))
	{
		__LIB_13__::func_29(uParam0, 0);
		func_87(uParam0);
	}
}

int func_284(var uParam0)
{
	int iVar0;
	iVar0 = __LIB_12__::func_767(uParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_55.f_1))
	{
		Local_55.f_1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Global_1347702[uParam0->f_174 /*49*/].f_43);
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Local_55.f_2))
	{
		func_310(&Local_55, Local_55.f_12, Local_55.f_15, 1, 1, 0);
		ENTITY::_0x9587913B9E772D29(Local_55.f_2, 0);
		if (iVar0 < 1)
		{
			PHYSICS::_0x06AADE17334F7A40(Local_55.f_2, -2377.44f, -1595.54f, 153.14f);
			__LIB_3__::func_414(&uLocal_158, Local_55.f_12, 2f, 1, 61, 0);
		}
	}
	if (!__LIB_0__::func_27(iLocal_27, 64) && __LIB_0__::func_272(Local_55.f_1, 1))
	{
		__LIB_13__::func_587(Local_55.f_1, 0, 0);
		__LIB_13__::func_260(uParam0, Local_55.f_1);
		ENTITY::SET_ENTITY_COORDS(Local_55.f_1, Global_1347702[uParam0->f_174 /*49*/].f_24, true, false, true, true);
		ENTITY::SET_ENTITY_HEADING(Local_55.f_1, func_585());
		PED::SET_PED_CAN_BE_TARGETTED(Local_55.f_1, false);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_55.f_1, joaat("REL_CIVMALE"));
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_55.f_1, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_55.f_1, true);
		PED::SET_PED_CONFIG_FLAG(Local_55.f_1, 253, true);
		ENTITY::_0x18FF3110CF47115D(Local_55.f_1, 2, 0);
		ENTITY::_0x18FF3110CF47115D(Local_55.f_1, 3, 0);
		ENTITY::_0x18FF3110CF47115D(Local_55.f_1, 7, 0);
		PED::_0xAE6004120C18DF97(Local_55.f_1, 0, 0);
		__LIB_12__::func_875(uParam0, Global_35, "JOHN", 0);
		__LIB_12__::func_875(uParam0, Local_55.f_1, "MILLER", 0);
		__LIB_1__::func_683(&iLocal_27, 64);
	}
	if (iVar0 < 1)
	{
		if (Local_29.f_23 && !ENTITY::DOES_ENTITY_EXIST(iLocal_130))
		{
			if (INTERIOR::IS_INTERIOR_READY(Local_29.f_22))
			{
				if (iLocal_129 == 0)
				{
					iLocal_129 = ENTITY::_0x6F3068258A499E52(__LIB_8__::func_409(), __LIB_13__::func_613(), 7);
				}
				else if (ENTITY::_0x1FF441D7954F8709(iLocal_129))
				{
					iLocal_130 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(iLocal_129));
				}
			}
		}
	}
	if (iVar0 < 1 && !__LIB_13__::func_609(72, &Local_29))
	{
		return 0;
	}
	if (iVar0 < 0 && !func_313(&iLocal_27, &uLocal_78))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_55.f_2))
	{
		return 0;
	}
	if (iVar0 < 1 && !ENTITY::DOES_ENTITY_EXIST(iLocal_130))
	{
		return 0;
	}
	if (!__LIB_0__::func_27(iLocal_27, 64))
	{
		return 0;
	}
	if (Local_29.f_23)
	{
		__LIB_18__::func_619(&Local_29, 1, 0, 1);
	}
	return 1;
}

void func_303(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	iLocal_19 = iParam1;
	switch (iLocal_19)
	{
		case 0:
			StringCopy(&(uParam0->f_2575), "RMLLR_RC2", 24);
			__LIB_12__::func_779(uParam0, __LIB_1__::func_440(uParam0->f_174));
			__LIB_0__::func_7(&(uParam0->f_172), 16);
			if (iParam2 == 0)
			{
				__LIB_12__::func_846(&(uParam0->f_206));
				__LIB_12__::func_944(uParam0, &(uParam0->f_2575), 1);
			}
			else
			{
				__LIB_12__::func_909(&(uParam0->f_206));
			}
			if (iParam2 == 0)
			{
				__LIB_12__::func_956(&(uParam0->f_753), Global_35, 0, 0);
			}
			__LIB_12__::func_957(uParam0, Global_35, 0, 0, 0, 0);
			if (__LIB_0__::func_272(Local_55.f_1, 0))
			{
				if (iParam2 == 0)
				{
					__LIB_12__::func_956(&(uParam0->f_753), Local_55.f_1, 0, 0);
				}
				__LIB_12__::func_957(uParam0, Local_55.f_1, 0, 0, 0, 0);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_130))
			{
				__LIB_12__::func_957(uParam0, iLocal_130, "p_chair05x", 0, 0, 0);
			}
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_78[iVar0]))
				{
					if (iVar0 < 9)
					{
						__LIB_12__::func_957(uParam0, uLocal_78[iVar0], uLocal_89[iVar0], 0, 0, 0);
						if (iParam2 == 0)
						{
							__LIB_12__::func_956(&(uParam0->f_753), uLocal_78[iVar0], uLocal_89[iVar0], 0);
						}
					}
					else
					{
						__LIB_12__::func_957(uParam0, uLocal_78[iVar0], 0, 0, 0, 0);
						if (iParam2 == 0)
						{
							__LIB_12__::func_956(&(uParam0->f_753), uLocal_78[iVar0], 0, 0);
						}
					}
				}
				iVar0++;
			}
			__LIB_13__::func_264(uParam0, 85383);
			break;
		case 1:
			StringCopy(&(uParam0->f_2575), "RMLLR_RC2A", 24);
			__LIB_12__::func_779(uParam0, func_348());
			__LIB_0__::func_7(&(uParam0->f_172), 16);
			__LIB_12__::func_957(uParam0, Global_35, 0, 0, 0, 0);
			__LIB_0__::func_7(&(uParam0->f_206.f_404), 4096);
			__LIB_0__::func_143(&(uParam0->f_206.f_13[__LIB_12__::func_716(&(uParam0->f_206), Global_35) /*12*/]), 16);
			if (__LIB_0__::func_272(Local_55.f_1, 0))
			{
				__LIB_12__::func_957(uParam0, Local_55.f_1, 0, 0, 0, 0);
			}
			__LIB_13__::func_16(uParam0, 86294);
			__LIB_13__::func_264(uParam0, 85383);
			__LIB_12__::func_948(&(uParam0->f_206), 86456);
			break;
		default:
			break;
	}
}

void func_304(var uParam0)
{
	if (!__LIB_0__::func_272(Local_55.f_1, 0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_AT_ENTITY(Global_35, Local_55.f_1, 30f, 30f, 30f, false, true, 0))
	{
		if (!__LIB_0__::func_899(&uLocal_192))
		{
			__LIB_4__::func_89(&uLocal_192, 0);
			fLocal_191 = MISC::GET_RANDOM_FLOAT_IN_RANGE(6f, 12f);
		}
		else if (__LIB_1__::func_583(&uLocal_192) > fLocal_191)
		{
			if (__LIB_12__::func_876(uParam0, "RMLLR_2_WRITE", 0))
			{
				__LIB_1__::func_561(&uLocal_192);
			}
		}
	}
}

void func_309(int iParam0)
{
	if (!__LIB_0__::func_27(iParam0, 536870912))
	{
		__LIB_0__::func_401(joaat("P_05P_RCEVELLYNMILLER_CAMP01"));
		__LIB_0__::func_401(985448695);
		if (!GRAPHICS::_0xDE9BAD3292AA6D5E(joaat("P_05P_RCEVELLYNMILLER_CAMP01")))
		{
			GRAPHICS::_0xDFEA23EC90113657(joaat("P_05P_RCEVELLYNMILLER_CAMP01"));
		}
		__LIB_5__::func_441("rmllr2_hunter_camp");
		__LIB_1__::func_683(&iParam0, 536870912);
	}
}

void func_310(var uParam0, vector3 vParam1, int iParam4, bool bParam5, bool bParam6, bool bParam7)
{
	uParam0->f_2 = __LIB_8__::func_931(__LIB_13__::func_582(), vParam1, iParam4, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
	PED::_0xAE6004120C18DF97(uParam0->f_2, 0, 0);
	PED::SET_PED_CONFIG_FLAG(uParam0->f_2, 253, true);
	PED::SET_PED_CONFIG_FLAG(uParam0->f_2, 324, true);
	AITRANSPORT::_0xBA8818212633500A(uParam0->f_2, 0, 1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_2, true);
	ENTITY::_0x18FF3110CF47115D(uParam0->f_2, 15, 0);
	if (bParam5)
	{
		TASK::TASK_STAND_STILL(uParam0->f_2, -1);
	}
	if (bParam6)
	{
		PHYSICS::_0x06AADE17334F7A40(uParam0->f_2, vParam1);
	}
	if (bParam7)
	{
		PED::_0x9851DE7AEC10B4E1(vParam1, 35f, 1, 0);
		FIRE::STOP_FIRE_IN_RANGE(vParam1, 35f);
		GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(vParam1, 35f);
		__LIB_3__::func_618(vParam1, 35f, 1, 0, 0, 0, 0);
	}
}

bool func_313(int iParam0, var uParam1)
{
	if (__LIB_0__::func_27(*iParam0, 268435456))
	{
		return true;
	}
	(*uParam1)[0] = OBJECT::CREATE_OBJECT(joaat("P_CS_LETTER01A_X"), -2373.27f, -1593.87f, 153.78f, true, true, false, false, true);
	ENTITY::SET_ENTITY_ROTATION((*uParam1)[0], 0f, 0f, 66.49f, 2, true);
	(*uParam1)[1] = OBJECT::CREATE_OBJECT(joaat("P_CS_LETTER01A_X"), -2373.27f, -1593.99f, 153.78f, true, true, false, false, true);
	ENTITY::SET_ENTITY_ROTATION((*uParam1)[1], 0f, 0f, 78.26f, 2, true);
	(*uParam1)[2] = OBJECT::CREATE_OBJECT(joaat("P_CS_LETTER01A_X"), -2373.25f, -1593.92f, 153.77f, true, true, false, false, true);
	ENTITY::SET_ENTITY_ROTATION((*uParam1)[2], 0f, 0f, 77.22f, 2, true);
	(*uParam1)[3] = OBJECT::CREATE_OBJECT(joaat("P_CS_LETTER01A_X"), -2373.57f, -1594.83f, 153.86f, true, true, false, false, true);
	ENTITY::SET_ENTITY_ROTATION((*uParam1)[3], -0.26f, -1.23f, 151.43f, 2, true);
	(*uParam1)[4] = OBJECT::CREATE_OBJECT(joaat("P_CS_LETTER01A_X"), -2373.45f, -1594.5f, 153.85f, true, true, false, false, true);
	ENTITY::SET_ENTITY_ROTATION((*uParam1)[4], 0.58f, 1.65f, 63.75f, 2, true);
	(*uParam1)[5] = OBJECT::CREATE_OBJECT(joaat("P_CS_LETTER01A_X"), -2373.83f, -1595.13f, 153.87f, true, true, false, false, true);
	ENTITY::SET_ENTITY_ROTATION((*uParam1)[5], -1.41f, 0.37f, 103.75f, 2, true);
	(*uParam1)[6] = OBJECT::CREATE_OBJECT(joaat("P_CS_LETTER01A_X"), -2373.92f, -1595.12f, 153.86f, true, true, false, false, true);
	ENTITY::SET_ENTITY_ROTATION((*uParam1)[6], 0.91f, -0.5f, 79.45f, 2, true);
	(*uParam1)[7] = OBJECT::CREATE_OBJECT(joaat("P_CS_LETTER01A_X"), -2374.18f, -1595.49f, 153.87f, true, true, false, false, true);
	ENTITY::SET_ENTITY_ROTATION((*uParam1)[7], -5.18f, -1.39f, 69.31f, 2, true);
	(*uParam1)[8] = OBJECT::CREATE_OBJECT(__LIB_13__::func_581(), -2373.86f, -1594.69f, 153.87f, true, true, false, false, true);
	ENTITY::SET_ENTITY_ROTATION((*uParam1)[8], 2.47f, 0.06f, -118.27f, 2, true);
	(*uParam1)[9] = OBJECT::CREATE_OBJECT(joaat("P_PEN01X"), -2373.86f, -1594.69f, 153.87f, true, true, false, false, true);
	ENTITY::SET_ENTITY_ROTATION((*uParam1)[9], 2.47f, 0.06f, -118.27f, 2, true);
	__LIB_1__::func_683(iParam0, 268435456);
	return true;
}

Vector3 func_314()
{
	return -2373.096f, -1594.96f, 153.0079f;
}

float func_315()
{
	return 245.91f;
}

void func_316(var uParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0) || ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return;
	}
	if (bParam1 && bLocal_17)
	{
		return;
	}
	if (bParam1 == 0 && bLocal_17 == 0)
	{
		return;
	}
	if (bParam1)
	{
		PED::_0x1E017404784AA6A3(*uParam0, joaat("RMLLR_RIDE1"));
		bLocal_17 = true;
	}
	else
	{
		PED::_0x2B4CE170DE09F346(*uParam0, joaat("RMLLR_RIDE1"));
		bLocal_17 = false;
	}
	AUDIO::_0x0D7FD6A55FD63AEF(7, 3, bParam1);
	AUDIO::_0x0D7FD6A55FD63AEF(25, 3, bParam1);
	AUDIO::_0x0D7FD6A55FD63AEF(21, 3, bParam1);
	AUDIO::_0x0D7FD6A55FD63AEF(19, 3, bParam1);
	AUDIO::_0x0D7FD6A55FD63AEF(23, 3, bParam1);
	AUDIO::_0x0D7FD6A55FD63AEF(22, 3, bParam1);
}

void func_319()
{
	AUDIO::PREPARE_MUSIC_EVENT(sLocal_271);
	AUDIO::PREPARE_MUSIC_EVENT(sLocal_272);
	AUDIO::PREPARE_MUSIC_EVENT(sLocal_273);
}

Vector3 func_320()
{
	return -2376.534f, -1346.607f, 147.8263f;
}

float func_321()
{
	return -54.17f;
}

void func_322(var uParam0, float fParam1)
{
	switch (iLocal_195)
	{
		case 0:
			if (fParam1 < 100f)
			{
				iLocal_195 = 1;
			}
			break;
		case 1:
			if (iLocal_249 < 3)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_199[iLocal_249 /*16*/]))
				{
					Local_199[iLocal_249 /*16*/] = __LIB_8__::func_931(iLocal_248, Local_199[iLocal_249 /*16*/].f_5, Local_199[iLocal_249 /*16*/].f_8, 1, 1, 0, 1, 1, 0, 0, 0, 0, 0);
					PED::_SET_PED_BODY_COMPONENT(Local_199[iLocal_249 /*16*/], Local_199[iLocal_249 /*16*/].f_4);
					PED::_UPDATE_PED_VARIATION(Local_199[iLocal_249 /*16*/], false, true, true, true, false);
					PED::SET_PED_CONFIG_FLAG(Local_199[iLocal_249 /*16*/], 6, true);
					if (iLocal_249 == 0)
					{
						__LIB_12__::func_875(uParam0, Local_199[0 /*16*/], "RMLLR_Brawler1", 0);
						PED::SET_PED_NAME_DEBUG(Local_199[0 /*16*/], "HUNTER0");
					}
					else if (iLocal_249 == 1)
					{
						PED::SET_PED_NAME_DEBUG(Local_199[1 /*16*/], "HUNTER1");
					}
					else if (iLocal_249 == 2)
					{
						PED::SET_PED_NAME_DEBUG(Local_199[2 /*16*/], "HUNTER2");
					}
					ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(Local_199[iLocal_249 /*16*/], true, 0f);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_199[iLocal_249 /*16*/], true);
					ENTITY::_0x18FF3110CF47115D(Local_199[iLocal_249 /*16*/], 1, 0);
					WEAPON::REMOVE_ALL_PED_WEAPONS(Local_199[iLocal_249 /*16*/], true, true);
					__LIB_1__::func_766(Local_199[iLocal_249 /*16*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), 1, 1, 0, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
					WEAPON::SET_CURRENT_PED_WEAPON(Local_199[iLocal_249 /*16*/], joaat("WEAPON_UNARMED"), false, 0, false, false);
					PED::SET_PED_CONFIG_FLAG(Local_199[iLocal_249 /*16*/], 249, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_199[iLocal_249 /*16*/], 58, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_199[iLocal_249 /*16*/], 5, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_199[iLocal_249 /*16*/], 46, true);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_199[iLocal_249 /*16*/], joaat("REL_PLAYER_ENEMY"));
					iLocal_249++;
				}
			}
			if (iLocal_249 >= 3)
			{
				iLocal_249 = 0;
				iLocal_195 = 2;
			}
			break;
		case 2:
			if (iLocal_249 < 3)
			{
				if (func_633(&Local_199, iLocal_249))
				{
					ANIMSCENE::START_ANIM_SCENE(Local_199[iLocal_249 /*16*/].f_9);
					iLocal_249++;
				}
			}
			if (iLocal_249 >= 3)
			{
				iLocal_249 = 0;
				iLocal_195 = 3;
			}
			break;
		case 3:
			GRAPHICS::_ADD_BLOOD_POOL_2(-2374.32f, -1325.29f, 146.83f, 0.8f, 0.8f, 1f, false, NaNf, false);
			GRAPHICS::_ADD_BLOOD_POOL_2(-2373.37f, -1323.79f, 146.87f, 1f, 1f, 1f, false, NaNf, false);
			GRAPHICS::_ADD_BLOOD_POOL_2(-2371.81f, -1321.5f, 146.97f, 0.9f, 0.9f, 1f, false, NaNf, false);
			iLocal_195 = 4;
			break;
		case 4:
			break;
	}
}

void func_323(bool bParam0)
{
	if (!MAP::DOES_BLIP_EXIST(iLocal_54))
	{
		iLocal_54 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_COMPANION"), Local_55.f_1);
		if (bParam0)
		{
			func_634(1);
		}
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_54, "MLLR2_BLIP");
	}
}

void func_326(bool bParam0)
{
	int iVar0;
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_279[iVar0]))
			{
				iLocal_279[iVar0] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(func_636(iVar0), 0f, 0f, 0f, 10f, 10f, 6f, "MLLR_HERB_BLOCKING");
				__LIB_3__::func_241(iLocal_279[iVar0], 1);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (VOLUME::_DOES_VOLUME_EXIST(iLocal_279[iVar0]))
			{
				__LIB_3__::func_142(iLocal_279[iVar0]);
				VOLUME::_DELETE_VOLUME(iLocal_279[iVar0]);
			}
			iVar0++;
		}
	}
}

Vector3 func_329()
{
	return -2366.638f, -1329.831f, 146.2954f;
}

float func_330()
{
	return 143.9243f;
}

int func_343(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
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
					__LIB_13__::func_18(uParam4, &uParam0, uParam5);
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
				if (__LIB_13__::func_4(uParam4, &uParam0, 1, 1))
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
					__LIB_13__::func_18(uParam4, &uParam0, uParam5);
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

Vector3 func_348()
{
	return -2366.862f, -1326.193f, 146.5801f;
}

bool func_353(var uParam0)
{
	__LIB_13__::func_62(uParam0, func_61(0), func_61(1), 0, 1, 0);
	if (!MAP::DOES_BLIP_EXIST(iLocal_54))
	{
		TASK::TASK_LOOK_AT_ENTITY(Local_55.f_1, Global_35, -1, 0, 51, 0);
		func_323(0);
	}
	if (!__LIB_0__::func_27(iLocal_27, 2))
	{
		if (__LIB_0__::func_266(Local_55.f_1, Global_36, 12f, 1, 1) && __LIB_12__::func_876(uParam0, "RMLL2_START", 0))
		{
			__LIB_4__::func_89(&uLocal_131, 0);
			__LIB_1__::func_683(&iLocal_27, 2);
		}
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_268))
	{
		iLocal_268 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(func_348(), 0f, 0f, 0f, 25f, 25f, 10f, "RMLLR2_CAMP_RESTRICTION");
		POPULATION::_0x18262CAFEBB5FBE1(iLocal_268, 0, 0, 0, -1, -1, 0);
		POPULATION::_0xB56D41A694E42E86(iLocal_268, 0, 0, 0, -1, -1, 0);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_149))
	{
		iLocal_149 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-2447.5f, -1461.269f, 149.5063f, 0f, 0f, 123.1f, 24f, 42f, 6f, "RMLLR2_SaveAnimalTrig");
	}
	if (!__LIB_0__::func_27(iLocal_27, 1073741824 /* Float: 2f */))
	{
		__LIB_6__::func_825();
		__LIB_9__::func_645(vLocal_150, 100f, -1);
		__LIB_1__::func_683(&iLocal_27, 1073741824 /* Float: 2f */);
	}
	func_326(1);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_55.f_2))
	{
		func_310(&Local_55, Local_55.f_12, Local_55.f_15, 1, 0, 0);
	}
	else
	{
		__LIB_3__::func_414(&uLocal_156, -2438.263f, -1450.052f, 148.7948f, 1.5f, 2, 2, 0);
		__LIB_3__::func_414(&uLocal_157, -2438.263f, -1450.052f, 148.7948f, 2f, 1, 61, 0);
		if (!__LIB_0__::func_163(Local_55.f_1, 1868526510))
		{
			__LIB_1__::func_562(Local_55.f_1, Local_55.f_2, 0, 1065353216 /* Float: 1f */, 20000);
		}
		Local_55.f_9 = 1;
		func_309(iLocal_27);
		TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(Local_55.f_4, &(Local_55.f_6));
		__LIB_3__::func_353(sLocal_270, 0);
		func_710(uParam0, 0);
		func_711(&uLocal_274);
		return true;
	}
	return false;
}

bool func_354(var uParam0)
{
	func_712(uParam0);
	if (!__LIB_0__::func_27(iLocal_27, 2))
	{
		if (__LIB_0__::func_266(Local_55.f_1, Global_36, 10f, 1, 1) && __LIB_12__::func_876(uParam0, "RMLL2_START", 0))
		{
			__LIB_4__::func_89(&uLocal_131, 0);
			__LIB_1__::func_683(&iLocal_27, 2);
		}
	}
	else if ((!__LIB_0__::func_27(iLocal_27, 4) && __LIB_9__::func_178(&uLocal_131) > 8f) && __LIB_0__::func_266(Local_55.f_1, Global_36, 10f, 1, 1))
	{
		__LIB_12__::func_876(uParam0, "RMLL2_RIDE1", 0);
		__LIB_2__::func_259(&uLocal_131);
		__LIB_1__::func_683(&iLocal_27, 4);
	}
	func_713(uParam0);
	func_714(&Local_55);
	func_715(uParam0, &uLocal_274);
	func_716();
	if (__LIB_1__::func_205(Local_55.f_1, iLocal_149, 1, 0))
	{
		__LIB_5__::func_20(1, 0);
		if (PED::IS_PED_ON_MOUNT(Local_55.f_1) && TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_55.f_1, 0))
		{
			TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_55.f_1, 1.25f, 0, -1082130432 /* Float: -1f */, 0);
		}
		return true;
	}
	return false;
}

bool func_355(var uParam0)
{
	int iVar0;
	int iVar1;
	if (PED::IS_PED_ON_MOUNT(Local_55.f_1))
	{
		if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_55.f_1, 0))
		{
			TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_55.f_1, 1.25f, 0, -1082130432 /* Float: -1f */, 0);
		}
		if (PLAYER::_0x2009F8AB7A5E9D6D(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::_0x0C6B89876262A99D(PLAYER::GET_PLAYER_INDEX(), Local_55.f_1);
		}
	}
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		__LIB_1__::func_448(Global_35, vLocal_161, 0, 1112014848 /* Float: 50f */, 1106247680 /* Float: 30f */, 1097859072 /* Float: 15f */, 1084227584 /* Float: 5f */, 1, 1, 1, 0);
	}
	func_720();
	switch (iLocal_20)
	{
		case 0:
			if (func_716())
			{
				if (__LIB_6__::func_903("RMLL2_RIDE1"))
				{
					__LIB_6__::func_900("RMLL2_RIDE1", 0, 0);
				}
				if (!__LIB_0__::func_27(iLocal_27, 256))
				{
					ANIMSCENE::START_ANIM_SCENE(iLocal_181);
					ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_181, "pblEnter");
					__LIB_1__::func_683(&iLocal_27, 256);
				}
				if (ENTITY::IS_ENTITY_DEAD(iLocal_159))
				{
					__LIB_0__::func_325(&iLocal_170);
					func_723(4);
				}
				else if (__LIB_12__::func_876(uParam0, "RMLL2_SPOTTRAP", 0))
				{
					func_316(&(Local_55.f_1), 0);
					func_710(uParam0, 1);
					__LIB_2__::func_259(&uLocal_131);
					iLocal_172 = __LIB_1__::func_282("MLLR2_DISARM", joaat("INPUT_CONTEXT_Y"), vLocal_150, 3f, 3, 1, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
					TASK::CLEAR_PED_TASKS(Local_55.f_1, true, false);
					TASK::OPEN_SEQUENCE_TASK(&iVar1);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -2444.352f, -1447.661f, 148.8078f, 1.001f, -1, 0.25f, 0, 40000f);
					TASK::TASK_DISMOUNT_ANIMAL(0, 262144, 0, 0, 0, 0);
					TASK::TASK_GO_STRAIGHT_TO_COORD(0, -2441.305f, -1450.045f, 148.8581f, 1f, 20000, 40000f, 1056964608 /* Float: 0.5f */, 0);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_168, 0, -1f, -1f, -1f);
					TASK::TASK_STAND_STILL(0, -1);
					TASK::CLOSE_SEQUENCE_TASK(iVar1);
					TASK::TASK_PERFORM_SEQUENCE(Local_55.f_1, iVar1);
					TASK::CLEAR_SEQUENCE_TASK(&iVar1);
					bLocal_145 = false;
					bLocal_147 = false;
					__LIB_0__::func_19(&Local_55, 2);
					func_723(1);
				}
			}
			break;
		case 1:
			if (!__LIB_0__::func_163(Local_55.f_2, -982327190))
			{
				if (!PED::IS_PED_ON_MOUNT(Local_55.f_1))
				{
					TASK::TASK_STAND_STILL(Local_55.f_2, -1);
				}
			}
			if (!__LIB_0__::func_71(Global_35))
			{
				if (__LIB_0__::func_48(Global_35, iLocal_159, 8f, 1))
				{
					if (!__LIB_0__::func_27(iLocal_28, 1))
					{
						if (__LIB_12__::func_876(uParam0, "RMLLR_2_DISELK", 0))
						{
							__LIB_1__::func_683(&iLocal_28, 1);
						}
					}
				}
			}
			if (ENTITY::IS_ENTITY_DEAD(iLocal_159))
			{
				__LIB_0__::func_325(&iLocal_170);
				__LIB_1__::func_281(&iLocal_172, 1, 1);
				func_723(4);
			}
			else if (__LIB_0__::func_139(iLocal_172))
			{
				uLocal_171 = HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(iLocal_168, 3f, 3, 1, 0, "MLLR2_TRAP", 0);
				HUD::_UIPROMPT_SET_GROUP(__LIB_3__::func_66(iLocal_172), uLocal_171, 0);
				if (__LIB_1__::func_732(iLocal_172, 1))
				{
					__LIB_1__::func_281(&iLocal_172, 1, 1);
					func_731();
				}
				else if (!bLocal_185)
				{
					if (!__LIB_6__::func_903("RMLL2_SPOTTRAP"))
					{
						bLocal_185 = true;
						if (__LIB_9__::func_178(&uLocal_131) > 13f)
						{
							__LIB_1__::func_585(&uLocal_131, 10f);
						}
					}
				}
				else
				{
					func_732(uParam0);
				}
				if (!MAP::DOES_BLIP_EXIST(iLocal_170))
				{
					if (!__LIB_6__::func_903("RMLL2_SPOTTRAP") || AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("RMLL2_SPOTTRAP") >= 1)
					{
						func_634(0);
						__LIB_12__::func_883(uParam0, "MLLR2_FREETRAP", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
						iLocal_170 = __LIB_4__::func_983(408396114, vLocal_150, 1);
						MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_170, "MLLR2_TRAPPED");
					}
				}
			}
			else
			{
				CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME_2();
				if (func_731())
				{
					__LIB_12__::func_876(uParam0, "RMLLR_2_PRY", 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_181, "player", Global_35, 0);
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_181, "pblEnter", true);
					ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_181, "pblsuccess");
					ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_181, "pblfail");
					func_723(2);
				}
			}
			break;
		case 2:
			CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME_2();
			if (__LIB_0__::func_27(iLocal_27, 4096))
			{
				func_734();
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_181, "pblsuccess", true);
				__LIB_0__::func_325(&iLocal_170);
				func_712(uParam0);
				TASK::_0x2E1D6D87346BB7D2(iLocal_159, Global_35, 0, 0);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_PLAY_ANIM(0, "amb_creature_mammal@world_elk_injured_on_ground@canter_exit", "exit_front", 8f, -1.5f, -1, 536870912, 0f, false, 0, false, 0, false);
				TASK::TASK_SMART_FLEE_PED(0, Global_35, 1000f, -1, 256, 1077936128 /* Float: 3f */, 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_159, iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				ENTITY::_SET_ENTITY_HEALTH(iLocal_159, 30, 0);
				func_723(3);
			}
			else if (__LIB_0__::func_27(iLocal_27, 8192))
			{
				func_734();
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_181, "pblfail", true);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_159))
				{
					PED::SET_PED_TO_RAGDOLL(iLocal_159, 1000, 2000, 0, false, false, false);
					ENTITY::_SET_ENTITY_HEALTH(iLocal_159, 0, 0);
				}
				__LIB_0__::func_325(&iLocal_170);
				func_712(uParam0);
				func_723(5);
			}
			else
			{
				func_735(uParam0);
			}
			break;
		case 3:
			func_712(uParam0);
			if (__LIB_6__::func_903("RMLLR_2_PRY"))
			{
				__LIB_6__::func_900("RMLLR_2_PRY", 1, 0);
			}
			if (!__LIB_6__::func_904() && __LIB_12__::func_876(uParam0, "RMLL2_TRAPFREE", 0))
			{
				func_737();
				func_723(6);
			}
			break;
		case 4:
			func_712(uParam0);
			if ((__LIB_6__::func_903("RMLL2_SPOTTRAP") || __LIB_6__::func_903("RMLL2_NAGTRAP")) || __LIB_6__::func_903("RMLL2_LEAVETRAP"))
			{
				__LIB_5__::func_20(0, 0);
			}
			if (__LIB_12__::func_876(uParam0, "RMLL2_TRAPKILL", 0))
			{
				func_737();
				func_723(6);
			}
			break;
		case 5:
			func_712(uParam0);
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_168))
			{
				iLocal_168 = OBJECT::CREATE_OBJECT(iLocal_169, -2437.88f, -1450.27f, 148.83f, true, true, false, false, true);
				ENTITY::SET_ENTITY_ROTATION(iLocal_168, vLocal_153, 2, true);
			}
			if (__LIB_12__::func_876(uParam0, "RMLL2_TRAPFAIL", 0))
			{
				func_737();
				func_723(6);
			}
			break;
		case 6:
			func_712(uParam0);
			if (__LIB_0__::func_27(iLocal_27, 4096))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_159))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_159))
					{
						if (!__LIB_1__::func_472(iLocal_159, 1116471296 /* Float: 70f */, 10f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */))
						{
							__LIB_2__::func_426(&iLocal_159);
						}
					}
					else
					{
						if (__LIB_6__::func_903("RMLL2_TRAPFREE"))
						{
							__LIB_6__::func_900("RMLL2_TRAPFREE", 0, 0);
						}
						if (__LIB_12__::func_876(uParam0, "RMLL2_TRAPKILL", 0))
						{
							__LIB_1__::func_681(&iLocal_27, 4096);
						}
					}
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_168))
			{
				iLocal_168 = OBJECT::CREATE_OBJECT(iLocal_169, -2437.88f, -1450.27f, 148.83f, true, true, false, false, true);
				ENTITY::SET_ENTITY_ROTATION(iLocal_168, vLocal_153, 2, true);
			}
			func_739(uParam0);
			if (!__LIB_6__::func_904())
			{
				if (!__LIB_0__::func_163(Local_55.f_1, 242628503))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_55.f_3))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_55.f_3))
						{
							if (!PED::IS_PED_ON_MOUNT(Global_35))
							{
								return false;
							}
						}
					}
					func_740(&uLocal_274);
					func_710(uParam0, 2);
					__LIB_12__::func_876(uParam0, "RMLLR_2_POSTELK", 0);
					func_316(&(Local_55.f_1), 1);
					return true;
				}
			}
			break;
	}
	return false;
}

bool func_356(var uParam0)
{
	float fVar0;
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, func_348(), true);
	func_739(uParam0);
	func_322(uParam0, fVar0);
	if (!__LIB_0__::func_27(iLocal_27, 65536))
	{
		TASK::REQUEST_WAYPOINT_RECORDING(sLocal_255);
		__LIB_1__::func_683(&iLocal_27, 65536);
	}
	if (iLocal_195 == 4)
	{
		if (func_741())
		{
			bLocal_254 = true;
			return false;
		}
	}
	if (fVar0 < 20f)
	{
		__LIB_10__::func_592(4);
		return true;
	}
	else
	{
		if (!__LIB_0__::func_27(iLocal_27, 131072))
		{
			if (__LIB_13__::func_332(Global_35, vLocal_196, &uLocal_257, 27f, 23f, 18f, 15f, 2.5f, 0, 0, 1, 1, 1))
			{
				__LIB_1__::func_683(&iLocal_27, 131072);
			}
		}
		if (func_742())
		{
			if (__LIB_6__::func_903("RMLL2_ARIVE"))
			{
				__LIB_6__::func_900("RMLL2_ARIVE", 1, 0);
			}
			func_743();
			func_710(uParam0, 3);
			return true;
		}
		else
		{
			func_714(&Local_55);
		}
	}
	if (!__LIB_0__::func_27(iLocal_28, 4))
	{
		if (Local_55.f_5 >= 172)
		{
			if (!__LIB_6__::func_904())
			{
				if (__LIB_12__::func_876(uParam0, "RMLLR_2_THISWAY", 0))
				{
					__LIB_1__::func_683(&iLocal_28, 4);
				}
			}
			else
			{
				__LIB_1__::func_683(&iLocal_28, 4);
			}
		}
	}
	fVar0 = __LIB_0__::func_94(Local_55.f_1, vLocal_196, 1);
	if (!__LIB_0__::func_27(iLocal_27, 4))
	{
		if (__LIB_9__::func_178(&uLocal_131) > 6f && !__LIB_6__::func_904())
		{
			if (__LIB_12__::func_876(uParam0, "RMLL2_RIDE2", 0))
			{
				__LIB_2__::func_259(&uLocal_131);
				__LIB_1__::func_683(&iLocal_27, 4);
			}
		}
	}
	else if (!__LIB_0__::func_27(iLocal_27, -2147483648))
	{
		if (fVar0 <= 40f)
		{
			if (__LIB_6__::func_903("RMLL2_RIDE2"))
			{
				__LIB_6__::func_900("RMLL2_RIDE2", 1, 0);
			}
			if (!__LIB_6__::func_904())
			{
				if (fVar0 <= 30f)
				{
					__LIB_1__::func_683(&iLocal_27, -2147483648);
				}
				else if (__LIB_12__::func_876(uParam0, "RMLL2_ARIVE", 0))
				{
					__LIB_1__::func_683(&iLocal_27, -2147483648);
				}
			}
		}
	}
	func_713(uParam0);
	func_715(uParam0, &uLocal_274);
	func_712(uParam0);
	if (fVar0 < 20f)
	{
		func_744(&(Local_55.f_1), &Local_199, &iLocal_27, &iLocal_260);
	}
	return false;
}

bool func_359(var uParam0)
{
	float fVar0;
	func_744(&(Local_55.f_1), &Local_199, &iLocal_27, &iLocal_260);
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, func_348(), true);
	if (func_745(&(Local_55.f_1), &iLocal_256, &Local_199, &bLocal_253))
	{
		__LIB_3__::func_353(sLocal_272, 0);
		func_710(uParam0, 4);
		return true;
	}
	else
	{
		func_743();
		if (!ENTITY::IS_ENTITY_DEAD(Local_55.f_2) && !__LIB_0__::func_163(Local_55.f_2, -982327190))
		{
			TASK::TASK_STAND_STILL(Local_55.f_2, -1);
		}
		if (PLAYER::_0x2009F8AB7A5E9D6D(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::_0x0C6B89876262A99D(PLAYER::GET_PLAYER_INDEX(), Local_55.f_1);
		}
		if (!__LIB_0__::func_27(iLocal_27, 33554432) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_255))
		{
			TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(sLocal_255, 1, 2f, 1056964608 /* Float: 0.5f */, 1);
			__LIB_1__::func_683(&iLocal_27, 33554432);
		}
		if (!__LIB_0__::func_27(iLocal_27, 131072))
		{
			if (fVar0 < 28f || __LIB_1__::func_410(Global_36, vLocal_196, 8.5f, 1))
			{
				if (!__LIB_0__::func_899(&uLocal_257))
				{
					__LIB_4__::func_89(&uLocal_257, 0);
				}
				if (__LIB_13__::func_332(Global_35, vLocal_196, &uLocal_257, 27f, 23f, 18f, 15f, 2.5f, 0, 0, 1, 1, 1))
				{
					__LIB_1__::func_683(&iLocal_27, 131072);
				}
			}
		}
		else
		{
			PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 28, 1);
			if (!ENTITY::IS_ENTITY_DEAD(Local_55.f_3) && !__LIB_0__::func_163(Local_55.f_3, -982327190))
			{
				if (!__LIB_0__::func_163(Local_55.f_3, 1041577989))
				{
					TASK::TASK_STAND_STILL(Local_55.f_3, -1);
				}
			}
		}
		func_746(&(Local_55.f_1), &iLocal_27, fVar0, bLocal_253, Local_199[2 /*16*/]);
	}
	return false;
}

bool func_360(var uParam0)
{
	float fVar0;
	int iVar1;
	float fVar2;
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, func_348(), true);
	func_746(&(Local_55.f_1), &iLocal_27, fVar0, bLocal_253, Local_199[2 /*16*/]);
	PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 28, 1);
	if (!__LIB_0__::func_27(iLocal_27, 131072))
	{
		if (__LIB_13__::func_332(Global_35, vLocal_196, &uLocal_257, 27f, 23f, 18f, 15f, 2.5f, 0, 0, 1, 1, 1))
		{
			__LIB_1__::func_683(&iLocal_27, 131072);
		}
	}
	if (!__LIB_0__::func_27(iLocal_27, 8388608))
	{
		if (!__LIB_0__::func_27(iLocal_27, 4194304))
		{
			if (func_744(&(Local_55.f_1), &Local_199, &iLocal_27, &iLocal_260))
			{
				if (!__LIB_0__::func_163(Local_55.f_1, 242628503))
				{
					__LIB_1__::func_683(&iLocal_27, 8388608);
					func_747(&Local_199);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_55.f_1, joaat("REL_CIVMALE"));
					ANIMSCENE::START_ANIM_SCENE(iLocal_260);
				}
			}
		}
		else if (!__LIB_0__::func_163(Local_55.f_1, 242628503))
		{
			func_747(&Local_199);
			ANIMSCENE::START_ANIM_SCENE(iLocal_260);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_55.f_1, joaat("REL_CIVMALE"));
			__LIB_1__::func_683(&iLocal_27, 8388608);
		}
		if (__LIB_0__::func_27(iLocal_27, 8388608))
		{
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < 3)
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_199[iVar1 /*16*/].f_9, false))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(Local_199[iVar1 /*16*/].f_9);
					__LIB_1__::func_951(&(Local_199[iVar1 /*16*/].f_2));
				}
				iVar1++;
			}
		}
	}
	else
	{
		if (!__LIB_0__::func_27(iLocal_27, 16777216))
		{
			if (func_748(&(Local_55.f_1), &iLocal_27, &iLocal_261))
			{
				__LIB_1__::func_683(&iLocal_27, 16777216);
			}
		}
		if (!bLocal_253)
		{
			if (fVar0 <= 9.5f)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_199[2 /*16*/]))
				{
					if (!__LIB_0__::func_27(iLocal_27, 67108864))
					{
						if (ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_260) > 5.8f)
						{
							ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_260, Local_199[2 /*16*/].f_13, Local_199[2 /*16*/]);
							TASK::CLEAR_PED_TASKS(Local_199[2 /*16*/], true, false);
							PED::_0x89F5E7ADECCCB49C(Local_199[2 /*16*/], "action");
							TASK::TASK_LOOK_AT_ENTITY(Local_199[2 /*16*/], Global_35, -1, 0, 51, 0);
							__LIB_1__::func_683(&iLocal_27, 67108864);
						}
						else
						{
							bLocal_15 = true;
						}
					}
					TASK::TASK_GRAPPLE(Local_199[2 /*16*/], Global_35, 0, 1, 1065353216 /* Float: 1f */, 1, 0);
					bLocal_253 = true;
					func_749(uParam0);
				}
				else
				{
					bLocal_253 = true;
				}
			}
		}
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_260, false))
		{
			fVar2 = ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_260);
			if (!__LIB_0__::func_27(iLocal_27, 67108864) && fVar2 >= 13.7f)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_199[2 /*16*/]))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_260, Local_199[2 /*16*/].f_13, Local_199[2 /*16*/]);
					TASK::CLEAR_PED_TASKS(Local_199[2 /*16*/], true, false);
					PED::_0x89F5E7ADECCCB49C(Local_199[2 /*16*/], "action");
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_199[2 /*16*/], Global_35, -1, 3f, 0.25f, -1f);
					TASK::TASK_LOOK_AT_ENTITY(Local_199[2 /*16*/], Global_35, -1, 0, 51, 0);
				}
				__LIB_1__::func_683(&iLocal_27, 67108864);
			}
			if (fVar2 >= 16.55f || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iLocal_260, false))
			{
				if (__LIB_0__::func_27(iLocal_27, 16777216))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_260, "IG_EVELYNMILLER", Local_55.f_1);
					ANIMSCENE::START_ANIM_SCENE(iLocal_261);
					func_303(uParam0, 1, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_55.f_1, 58, true);
				}
				return true;
			}
		}
		if (func_750(&Local_199, &bLocal_253))
		{
			return true;
		}
	}
	return false;
}

bool func_361(var uParam0)
{
	int iVar0;
	int iVar1;
	func_749(uParam0);
	if (!__LIB_0__::func_27(iLocal_27, 16777216))
	{
		if (func_748(&(Local_55.f_1), &iLocal_27, &iLocal_261))
		{
			ANIMSCENE::START_ANIM_SCENE(iLocal_261);
			func_303(uParam0, 1, 0);
		}
	}
	PED::SET_PED_RESET_FLAG(Local_55.f_1, 49, true);
	PED::SET_PED_RESET_FLAG(Local_55.f_1, 53, true);
	switch (iLocal_21)
	{
		case 0:
			if (func_751())
			{
				func_752(0);
				iLocal_21 = 2;
			}
			else
			{
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_199[iVar0 /*16*/]))
					{
						func_753(iVar0);
					}
					iVar0++;
				}
				iLocal_21 = 1;
			}
			break;
		case 1:
			if (func_751())
			{
				func_752(1);
				iLocal_21 = 2;
			}
			else
			{
				iVar1 = 0;
				while (iVar1 < 3)
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_199[iVar1 /*16*/]))
					{
						func_754(iVar1);
					}
					iVar1++;
				}
			}
			break;
		case 2:
			if (ENTITY::IS_ENTITY_DEAD(Local_199[iLocal_250 /*16*/]))
			{
				iLocal_21 = 3;
			}
			break;
		case 3:
			break;
	}
	func_755(uParam0, Local_199[0 /*16*/]);
	if (func_756())
	{
		__LIB_3__::func_353(sLocal_273, 0);
		if (__LIB_4__::func_68("MLLR2_DEALH", 1))
		{
			__LIB_1__::func_390("MLLR2_DEALH", 1);
		}
		return true;
	}
	return false;
}

void func_398(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
		iVar9 = func_785(iParam0, &uVar7, &iVar8);
		if (iVar9 != 176656832)
		{
			func_786(iVar9, uVar7, -469960592, iVar8, 1, 1, 0);
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
						func_795(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_795(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_795(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_795(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_795(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_795(joaat("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_795(joaat("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_795(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_795(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_795(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_795(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_795(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_795(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_795(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_795(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_795(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_795(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_795(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_795(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_795(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_795(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_795(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_795(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_795(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_795(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_797();
						func_798(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
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
						func_795(joaat("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
							func_398(Global_1347702[21 /*49*/].f_15, 0, 0, 0, 0);
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
							func_398(Global_1347702[82 /*49*/].f_15, 0, 0, 0, 0);
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
							func_398(Global_1347702[83 /*49*/].f_15, 0, 0, 0, 0);
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
						func_795(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_795(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
		func_833();
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
							func_795(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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

void func_432(int iParam0)
{
	if (__LIB_0__::func_27(iParam0, 536870912))
	{
		__LIB_0__::func_400(joaat("P_05P_RCEVELLYNMILLER_CAMP01"));
		__LIB_0__::func_400(985448695);
		if (GRAPHICS::_0xDE9BAD3292AA6D5E(joaat("P_05P_RCEVELLYNMILLER_CAMP01")))
		{
			GRAPHICS::_0xDD0BC0EDCB2162F6(joaat("P_05P_RCEVELLYNMILLER_CAMP01"));
		}
		__LIB_5__::func_441("rmllr2_hunter_camp");
		__LIB_1__::func_681(&iParam0, 536870912);
	}
}

int func_495(int iParam0, int iParam1)
{
	var uVar0;
	return func_929(&uVar0, iParam0, iParam1);
}

void func_527(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_2))
	{
		TASK::CLEAR_PED_SECONDARY_TASK(uParam0->f_2);
		TASK::TASK_SMART_FLEE_PED(uParam0->f_2, Global_35, 10000f, -1, 0, 1077936128 /* Float: 3f */, 0);
		PED::SET_PED_KEEP_TASK(uParam0->f_2, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_2, false);
	}
}

bool func_528(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5)
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
	else if (__LIB_9__::func_677(*uParam0, 0, uParam1, uParam2, iParam3, 0))
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

float func_585()
{
	return 240.9351f;
}

int func_616(var uParam0)
{
	int iVar0;
	switch (iLocal_19)
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_55.f_3))
			{
				if (__LIB_14__::func_19(uParam0, &(Local_55.f_3), vLocal_22, fLocal_25, 1, 1, 1, 1, 1))
				{
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_55.f_3, vLocal_22, fLocal_25, true, false, true);
					TASK::TASK_STAND_STILL(Local_55.f_3, -1);
				}
			}
			else if (!__LIB_0__::func_266(Local_55.f_3, vLocal_22, 2f, 1, 1))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_55.f_3, vLocal_22, fLocal_25, true, false, true);
			}
			else if (!__LIB_0__::func_163(Local_55.f_3, -982327190))
			{
				TASK::TASK_STAND_STILL(Local_55.f_3, -1);
			}
			if (!bLocal_26)
			{
				iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if ((!ENTITY::IS_ENTITY_DEAD(iVar0) && __LIB_0__::func_266(iVar0, Global_1347702[uParam0->f_174 /*49*/].f_24, 10f, 1, 1)) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar0, true))
				{
					func_1019(iVar0, -2357.595f, -1586.056f, 151.6521f, 302.5407f, 2, 1073741824 /* Float: 2f */);
				}
				bLocal_26 = true;
			}
			if (__LIB_13__::func_218(&(uParam0->f_206), Global_35, 0, 0, 1, 1))
			{
				if (!CAM::_0xA24C1D341C6E0D53(0, 0, 1))
				{
					__LIB_0__::func_569(joaat("MOTIONSTATE_WALK"), 1000, 0, 1, 1, 0, 0, 0);
				}
			}
			if (__LIB_13__::func_218(&(uParam0->f_206), Local_55.f_1, 0, 0, 1, 1))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_55.f_2) && !__LIB_0__::func_163(Local_55.f_1, 1868526510))
				{
					TASK::TASK_MOUNT_ANIMAL(Local_55.f_1, Local_55.f_2, 20000, -1, 1f, 1, 0, 0);
				}
			}
			break;
		case 1:
			func_1022();
			TASK::REQUEST_WAYPOINT_RECORDING(sLocal_269);
			if (__LIB_13__::func_218(&(uParam0->f_206), Global_35, 0, 0, 1, 1))
			{
				__LIB_0__::func_569(joaat("MOTIONSTATE_WALK"), 2000, 0, 1, 1, 0, 0, 0);
			}
			if (__LIB_13__::func_218(&(uParam0->f_206), Local_55.f_1, 0, 0, 1, 1))
			{
				PED::FORCE_PED_MOTION_STATE(Local_55.f_1, joaat("MOTIONSTATE_WALK"), false, 0, false);
				if (!__LIB_0__::func_163(Local_55.f_1, 242628503) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_269))
				{
					TASK::OPEN_SEQUENCE_TASK(&(Local_55.f_11));
					if (!ENTITY::IS_ENTITY_DEAD(Local_55.f_2))
					{
						TASK::TASK_MOUNT_ANIMAL(0, Local_55.f_2, -1, -1, 1.5f, 9, 0, 0);
					}
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, sLocal_269, 0, 0, -1, 0, 0, -1);
					TASK::_TASK_MOVE_IN_TRAFFIC_3(0, Global_35, 2.5f, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(Local_55.f_11);
					TASK::TASK_PERFORM_SEQUENCE(Local_55.f_1, Local_55.f_11);
					PED::SET_PED_KEEP_TASK(Local_55.f_1, true);
					TASK::CLEAR_SEQUENCE_TASK(&(Local_55.f_11));
				}
			}
			if (!bLocal_252)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_55.f_2))
				{
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_55.f_2, -2372.312f, -1339.977f, 146.0389f, 308.7552f, true, false, true);
					TASK::TASK_STAND_STILL(Local_55.f_2, -1);
				}
				if (((!ENTITY::IS_ENTITY_DEAD(Local_55.f_3) && !PED::IS_PED_FATALLY_INJURED(Local_55.f_3)) && !TASK::IS_PED_IN_WRITHE(Local_55.f_3)) && !PED::IS_PED_ON_MOUNT(Global_35))
				{
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_55.f_3, func_214(), func_215(), true, false, true);
					TASK::TASK_STAND_STILL(Local_55.f_3, -1);
				}
				PED::_0x9851DE7AEC10B4E1(-2367.435f, -1326.573f, 147.22f, 3.5f, 1, 1);
				bLocal_252 = true;
			}
			break;
	}
	return 1;
}

void func_621(var uParam0)
{
	int iVar0;
	int iVar1;
	if (iLocal_19 == 1)
	{
		iVar0 = VOLUME::_CREATE_VOLUME_CYLINDER(-2367.435f, -1326.573f, 147.22f, 0f, 0f, 56f, 4.5f, 2.25f, 1.5f);
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_199[iVar1 /*16*/]) && __LIB_1__::func_205(Local_199[iVar1 /*16*/], iVar0, 1, 0))
			{
				PED::DELETE_PED(&(Local_199[iVar1 /*16*/]));
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_199[iVar1 /*16*/].f_2))
			{
				OBJECT::DELETE_OBJECT(&(Local_199[iVar1 /*16*/].f_2));
			}
			iVar1++;
		}
	}
}

int func_623(var uParam0)
{
	switch (iLocal_19)
	{
		case 1:
			TASK::REQUEST_WAYPOINT_RECORDING(sLocal_269);
			if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_269))
			{
				return 0;
			}
			break;
	}
	return 1;
}

bool func_633(int iParam0, int iParam1)
{
	if (iParam1 >= 3)
	{
		return true;
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST((iParam0[iParam1 /*16*/])->f_9))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED((iParam0[iParam1 /*16*/])->f_9, true, false))
		{
			return true;
		}
	}
	else
	{
		if (!ENTITY::DOES_ENTITY_EXIST((iParam0[iParam1 /*16*/])->f_2))
		{
			(iParam0[iParam1 /*16*/])->f_2 = OBJECT::CREATE_OBJECT((iParam0[iParam1 /*16*/])->f_3, (iParam0[iParam1 /*16*/])->f_5, true, true, false, false, true);
			return false;
		}
		if (!ENTITY::DOES_ENTITY_HAVE_DRAWABLE((iParam0[iParam1 /*16*/])->f_2))
		{
			return false;
		}
		if (!ENTITY::DOES_ENTITY_EXIST((*iParam0)[iParam1 /*16*/]))
		{
			return false;
		}
		(iParam0[iParam1 /*16*/])->f_9 = ANIMSCENE::_CREATE_ANIM_SCENE((iParam0[iParam1 /*16*/])->f_10, 0, (iParam0[iParam1 /*16*/])->f_11, false, true);
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST((iParam0[iParam1 /*16*/])->f_9))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY((iParam0[iParam1 /*16*/])->f_9, (iParam0[iParam1 /*16*/])->f_13, (*iParam0)[iParam1 /*16*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY((iParam0[iParam1 /*16*/])->f_9, (iParam0[iParam1 /*16*/])->f_14, (iParam0[iParam1 /*16*/])->f_2, 0);
			ANIMSCENE::LOAD_ANIM_SCENE((iParam0[iParam1 /*16*/])->f_9);
		}
	}
	return false;
}

void func_634(bool bParam0)
{
	if (!MAP::DOES_BLIP_EXIST(iLocal_54))
	{
		return;
	}
	if (bParam0)
	{
		MAP::_BLIP_SET_MODIFIER(iLocal_54, -546708623);
		MAP::_BLIP_SET_MODIFIER(iLocal_54, 231194138);
	}
	else
	{
		MAP::_BLIP_REMOVE_MODIFIER(iLocal_54, -546708623);
		MAP::_BLIP_REMOVE_MODIFIER(iLocal_54, 231194138);
	}
}

Vector3 func_636(int iParam0)
{
	if (iParam0 == 0)
	{
		return -2378.32f, -1361.82f, 149.2f;
	}
	else if (iParam0 == 1)
	{
		return -2423.9f, -1352.38f, 155.66f;
	}
	return -2445.17f, -1339.36f, 155.46f;
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
		func_1061(&(uParam0->f_404), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_12__::func_706(uParam0, 0f, 0f, 0f);
		func_1063(uParam0);
		func_1064(uParam0);
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

void func_710(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			__LIB_12__::func_937(uParam0, 0);
			break;
		case 1:
			__LIB_12__::func_937(uParam0, 1);
			break;
		case 2:
			__LIB_12__::func_937(uParam0, 2);
			break;
		case 3:
			__LIB_12__::func_937(uParam0, 3);
			break;
		case 4:
			__LIB_12__::func_937(uParam0, 4);
			break;
	}
}

void func_711(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = __LIB_0__::func_645(joaat("KILLS"), joaat("WILD_ANIMAL"));
	uParam0->f_2 = 0;
}

void func_712(var uParam0)
{
	if (!PED::IS_PED_ON_MOUNT(Global_35))
	{
		PLAYER::_0xC71D07C96946E263(PLAYER::PLAYER_ID(), Local_55.f_3);
	}
	if (__LIB_0__::func_27(iLocal_27, 32))
	{
		bLocal_145 = false;
		bLocal_147 = false;
		return;
	}
	if (!bLocal_145)
	{
		if (PED::IS_PED_ON_MOUNT(Global_35))
		{
			bLocal_145 = true;
		}
		else if (!ENTITY::IS_ENTITY_DEAD(Local_55.f_3))
		{
			if (!bLocal_146)
			{
				__LIB_12__::func_883(uParam0, "MLLR2_MOUNT", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				bLocal_146 = true;
			}
			else
			{
				__LIB_13__::func_89(uParam0, "MLLR2_MOUNT", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			}
			__LIB_1__::func_718(7);
			bLocal_147 = false;
			bLocal_145 = true;
		}
		else
		{
			bLocal_145 = true;
		}
	}
	else if (!bLocal_147)
	{
		if (PED::IS_PED_ON_MOUNT(Global_35))
		{
			__LIB_1__::func_721(7);
			func_634(1);
			if (!bLocal_148)
			{
				__LIB_12__::func_883(uParam0, "MLLR2_FOLLOW", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				bLocal_148 = true;
			}
			else
			{
				__LIB_13__::func_89(uParam0, "MLLR2_FOLLOW", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			}
			bLocal_147 = true;
		}
	}
	else if (!PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_55.f_3))
		{
			bLocal_145 = false;
			func_634(0);
		}
	}
}

void func_713(var uParam0)
{
	char* sVar0;
	int iVar1;
	if (Local_55.f_9 && !__LIB_6__::func_904())
	{
		if (__LIB_0__::func_71(Local_55.f_1))
		{
			if (!__LIB_0__::func_48(Global_35, Local_55.f_1, 20f, 1))
			{
				if (__LIB_9__::func_178(&uLocal_131) > 12f)
				{
					if ((Local_55.f_5 - Local_55.f_7) > 10)
					{
						if (!Local_55.f_18)
						{
							iVar1 = func_1136(&Local_55);
							if ((Local_55.f_5 - Local_55.f_7) > 20)
							{
								if (Local_55.f_10 > 3)
								{
									if (iVar1 == 1)
									{
										sVar0 = "lookleftwave_angry2_evelynmiller";
									}
									else if (iVar1 == 2)
									{
										sVar0 = "lookright_wave_angry_long_evelynmiller";
									}
								}
								else if (iVar1 == 1)
								{
									sVar0 = "lookleft_lg_evelynmiller";
								}
								else if (iVar1 == 2)
								{
									sVar0 = "lookright_lg_nod_evelynmiller";
								}
							}
							else if ((Local_55.f_5 - Local_55.f_7) > 15)
							{
								if (Local_55.f_10 > 3)
								{
									if (iVar1 == 1)
									{
										sVar0 = "lookleftwave_angry_md_evelynmiller";
									}
									else if (iVar1 == 2)
									{
										sVar0 = "lookright_bigwave_evelynmiller";
									}
								}
								else if (iVar1 == 1)
								{
									sVar0 = "lookleftnod_evelynmiller";
								}
								else if (iVar1 == 2)
								{
									sVar0 = "lookright_med_evelynmiller";
								}
							}
							else if (Local_55.f_10 > 3)
							{
								if (iVar1 == 1)
								{
									sVar0 = "lookleftwave_angry_sm_evelynmiller";
								}
								else if (iVar1 == 2)
								{
									sVar0 = "lookrightreachback_evelynmiller";
								}
							}
							else if (iVar1 == 1)
							{
								sVar0 = "lookleftnod_evelynmiller";
							}
							else if (iVar1 == 2)
							{
								sVar0 = "lookright_sm_evelynmiller";
							}
							TASK::TASK_PLAY_ANIM(Local_55.f_1, Local_55.f_17, sVar0, 8f, -4f, 4000, 0, 0f, false, 0, false, 0, false);
							Local_55.f_18 = 1;
						}
						if (__LIB_12__::func_876(uParam0, "RMLLR_2_CMON", 0))
						{
							__LIB_2__::func_259(&uLocal_131);
							Local_55.f_18 = 0;
						}
					}
					else if ((Local_55.f_7 - Local_55.f_5) > 10)
					{
						if (__LIB_12__::func_876(uParam0, "RMLLR_2_CMON", 0))
						{
							__LIB_2__::func_259(&uLocal_131);
							Local_55.f_18 = 0;
						}
					}
					else if (__LIB_12__::func_876(uParam0, "RMLLR_2_CMON", 0))
					{
						__LIB_2__::func_259(&uLocal_131);
						Local_55.f_18 = 0;
					}
				}
			}
		}
	}
}

void func_714(var uParam0)
{
	float fVar0;
	fVar0 = __LIB_0__::func_665(Global_35, uParam0->f_1, 1, 1);
	switch (*uParam0)
	{
		case 0:
			if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(uParam0->f_1, true) && PED::_GET_RIDER_OF_MOUNT(uParam0->f_2, false) == uParam0->f_1)
			{
				if (func_1137(uParam0, fVar0))
				{
					__LIB_0__::func_19(uParam0, 1);
				}
				func_1138(uParam0);
			}
			else
			{
				func_1139(uParam0);
			}
			break;
		case 1:
			if (PED::IS_PED_ON_MOUNT(uParam0->f_1))
			{
				if (func_1140(uParam0, fVar0))
				{
					func_1141(uParam0, 1);
					__LIB_0__::func_19(uParam0, 2);
					uParam0->f_18 = 0;
					uParam0->f_10++;
					return;
				}
				else
				{
					func_1142(uParam0);
				}
				func_1138(uParam0);
			}
			else
			{
				func_1141(uParam0, 1);
				__LIB_0__::func_19(uParam0, 2);
			}
			break;
		case 2:
			if (PED::IS_PED_ON_MOUNT(uParam0->f_1))
			{
				if (func_1137(uParam0, fVar0))
				{
					__LIB_0__::func_19(uParam0, 1);
				}
			}
			else
			{
				func_1139(uParam0);
			}
			break;
	}
}

void func_715(var uParam0, var uParam1)
{
	switch (*uParam1)
	{
		case 0:
			if (func_740(uParam1))
			{
				StringCopy(&(uParam1->f_3), "RMLL2_MURDER", 16);
				StringIntConCat(&(uParam1->f_3), uParam1->f_2, 16);
				uParam1->f_2++;
				*uParam1 = 1;
			}
			break;
		case 1:
			if (!__LIB_6__::func_904() && __LIB_12__::func_876(uParam0, &(uParam1->f_3), 0))
			{
				*uParam1 = 2;
			}
			func_740(uParam1);
			break;
		case 2:
			if (!__LIB_6__::func_903(&(uParam1->f_3)))
			{
				if (uParam1->f_2 >= 2)
				{
					*uParam1 = 3;
				}
				else
				{
					*uParam1 = 0;
				}
			}
			func_740(uParam1);
			break;
		case 3:
			break;
	}
}

bool func_716()
{
	int iVar0;
	if (__LIB_0__::func_27(iLocal_27, 128))
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_168))
	{
		iLocal_168 = OBJECT::CREATE_OBJECT(iLocal_169, vLocal_150, true, true, false, false, true);
		ENTITY::SET_ENTITY_COLLISION(iLocal_168, false, false);
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_168, false);
		return false;
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_159))
	{
		iLocal_159 = __LIB_8__::func_931(iLocal_160, vLocal_161, fLocal_164, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_159, true);
		TASK::TASK_PLAY_ANIM(iLocal_159, "amb_creature_mammal@world_elk_injured_on_ground@base", "base", 8f, -8f, -1, 1, 0f, false, 0, false, 0, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_159, 138, true);
		PED::_0xAE6004120C18DF97(iLocal_159, 0, 0);
		ENTITY::_0x18FF3110CF47115D(iLocal_159, 0, 0);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_159, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_159, 66, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_159, 169, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_159, 1, true);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_181))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_181, true, false))
		{
			__LIB_1__::func_683(&iLocal_27, 128);
			iVar0 = ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iLocal_181, "Tourniquet", false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				ENTITY::SET_ENTITY_VISIBLE(iVar0, false);
			}
			return true;
		}
	}
	else
	{
		iLocal_181 = ANIMSCENE::_CREATE_ANIM_SCENE("script@beat@bearTrap@beartrap_all", 0, "pblPainLoop", false, true);
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_181))
		{
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iLocal_181, (vLocal_150.x - 0.2f), (vLocal_150.y - 0.2f), (vLocal_150.z + 0.1f), vLocal_153, 2);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_181, "TRAP", iLocal_168, 0);
			ANIMSCENE::LOAD_ANIM_SCENE(iLocal_181);
		}
	}
	return true;
}

void func_720()
{
	if (iLocal_20 < 4)
	{
		if (!__LIB_0__::func_899(&uLocal_165))
		{
			__LIB_4__::func_87(&uLocal_165, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 4f), 0);
		}
		else if (__LIB_1__::func_583(&uLocal_165) > 12f)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_159))
			{
				AUDIO::PLAY_ANIMAL_VOCALIZATION(iLocal_159, "INJURED_CRY", false);
				__LIB_1__::func_561(&uLocal_165);
			}
		}
	}
}

void func_723(int iParam0)
{
	if (iLocal_20 != iParam0)
	{
		iLocal_20 = iParam0;
	}
}

bool func_731()
{
	__LIB_12__::func_773(1, 0, 1, 1);
	switch (iLocal_176)
	{
		case 0:
			if (__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 0, 1, 0)) || __LIB_0__::func_154(__LIB_0__::func_153(Global_35, 1, 1, 0)))
			{
				WEAPON::_0x94A3C1B804D291EC(Global_35, 1, 0, 1, 0);
				TASK::TASK_SWAP_WEAPON(Global_35, 0, 0, 0, 0);
			}
			if (__LIB_13__::func_584())
			{
				func_1154(1);
			}
			else
			{
				func_1154(2);
			}
			break;
		case 1:
			if (__LIB_0__::func_163(Global_35, 716706914))
			{
			}
			else
			{
				TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(Global_35, PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35), -2370.985f, -1591.498f, 152.9117f, 1.5f, 0);
				func_1154(2);
			}
			break;
		case 2:
			if (__LIB_0__::func_163(Global_35, 716706914))
			{
			}
			else if (__LIB_0__::func_163(Global_35, -208384378) || __LIB_13__::func_584())
			{
			}
			else
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Global_35, vLocal_177, 1f, 20000, 0.25f, 512, fLocal_180);
				func_1154(3);
			}
			break;
		case 3:
			if (!__LIB_0__::func_163(Global_35, 713668775))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_732(var uParam0)
{
	if (__LIB_9__::func_178(&uLocal_131) > 15f)
	{
		if (!__LIB_1__::func_410(Global_36, vLocal_150, 10f, 1))
		{
			if (__LIB_12__::func_876(uParam0, "RMLL2_LEAVETRAP", 0))
			{
				__LIB_2__::func_259(&uLocal_131);
				return;
			}
		}
		if (__LIB_0__::func_27(iLocal_27, 2048))
		{
			return;
		}
		if (__LIB_12__::func_876(uParam0, "RMLL2_NAGTRAP", 0))
		{
			__LIB_1__::func_683(&iLocal_27, 2048);
			__LIB_2__::func_259(&uLocal_131);
		}
	}
}

void func_734()
{
	PAD::SET_PAD_SHAKE(0, 500, 256);
	__LIB_6__::func_916(&iLocal_173);
}

void func_735(var uParam0)
{
	switch (iLocal_175)
	{
		case 0:
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
			iLocal_175 = 1;
			break;
		case 1:
			func_1156(uParam0);
			break;
		case 2:
			return;
		case 3:
			return;
	}
}

void func_737()
{
	int iVar0;
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_STAND_STILL(0, 5000);
	TASK::TASK_MOUNT_ANIMAL(0, Local_55.f_2, 20000, -1, 2f, 1, 0, 0);
	TASK::TASK_STAND_STILL(0, 5000);
	TASK::CLOSE_SEQUENCE_TASK(iVar0);
	TASK::TASK_PERFORM_SEQUENCE(Local_55.f_1, iVar0);
	TASK::CLEAR_SEQUENCE_TASK(&iVar0);
}

void func_739(var uParam0)
{
	if (!bLocal_186)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_159))
		{
			bLocal_186 = true;
			return;
		}
		if (!bLocal_187)
		{
			if (__LIB_10__::func_387(iLocal_159))
			{
				if (__LIB_0__::func_899(&uLocal_188))
				{
					if (__LIB_1__::func_583(&uLocal_188) > 5f)
					{
						bLocal_187 = true;
					}
				}
				else
				{
					__LIB_4__::func_89(&uLocal_188, 0);
				}
			}
			else
			{
				__LIB_1__::func_561(&uLocal_188);
			}
		}
		else if (!__LIB_6__::func_904())
		{
			if (__LIB_12__::func_876(uParam0, "RMLL2_SKINNING", 0))
			{
				bLocal_186 = true;
			}
		}
	}
}

bool func_740(var uParam0)
{
	int iVar0;
	iVar0 = __LIB_0__::func_645(joaat("KILLS"), joaat("WILD_ANIMAL"));
	if (iVar0 > uParam0->f_1)
	{
		uParam0->f_1 = iVar0;
		return true;
	}
	return false;
}

bool func_741()
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_199[iVar0 /*16*/]))
		{
			if (ENTITY::IS_ENTITY_DEAD(Local_199[iVar0 /*16*/]))
			{
				return true;
			}
			else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_199[iVar0 /*16*/], Global_35, 1, 1))
			{
				return true;
			}
			else if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_199[iVar0 /*16*/], true, false), 4f, true))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_742()
{
	if (__LIB_0__::func_266(Local_55.f_1, vLocal_196, 2f, 1, 1))
	{
		return true;
	}
	if (Local_55.f_5 == (Local_55.f_6 - 1))
	{
		return true;
	}
	return false;
}

void func_743()
{
	if (!__LIB_0__::func_27(iLocal_27, 16))
	{
		if (__LIB_0__::func_27(iLocal_27, 4194304))
		{
			TASK::OPEN_SEQUENCE_TASK(&(Local_55.f_11));
			TASK::TASK_STAND_STILL(0, 300);
			TASK::TASK_DISMOUNT_ANIMAL(0, 131072, 0, 0, 0, 0);
			TASK::TASK_ENTER_ANIM_SCENE(0, iLocal_260, "IG_EVELYNMILLER", "pbl_attk", 1069379748 /* Float: 1.48f */, 0, 0, 20000, -1082130432 /* Float: -1f */);
			TASK::CLOSE_SEQUENCE_TASK(Local_55.f_11);
			TASK::TASK_PERFORM_SEQUENCE(Local_55.f_1, Local_55.f_11);
			TASK::CLEAR_SEQUENCE_TASK(&(Local_55.f_11));
			__LIB_1__::func_683(&iLocal_27, 16);
		}
	}
}

bool func_744(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	if (__LIB_0__::func_27(*iParam2, 4194304))
	{
		return true;
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*iParam3))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(*iParam3, true, false))
		{
			__LIB_1__::func_683(iParam2, 4194304);
			return true;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (!ENTITY::DOES_ENTITY_EXIST((*iParam1)[iVar0 /*16*/]) || !ENTITY::DOES_ENTITY_EXIST((iParam1[iVar0 /*16*/])->f_2))
			{
				return false;
			}
			iVar0++;
		}
		*iParam3 = ANIMSCENE::_CREATE_ANIM_SCENE("script@rcm@MLLR@IG@RC_2@RC2_IG2_BerateGroup@RC2_IG2_BerateGroup", 0, "pbl_attk", false, true);
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*iParam3))
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (!ENTITY::IS_ENTITY_DEAD((*iParam1)[iVar0 /*16*/]))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(*iParam3, (iParam1[iVar0 /*16*/])->f_13, (*iParam1)[iVar0 /*16*/], 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST((iParam1[iVar0 /*16*/])->f_2))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(*iParam3, (iParam1[iVar0 /*16*/])->f_14, (iParam1[iVar0 /*16*/])->f_2, 0);
				}
				iVar0++;
			}
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*iParam3, "IG_EVELYNMILLER", *uParam0, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*iParam3, "JOHN", Global_35, 0);
			ANIMSCENE::LOAD_ANIM_SCENE(*iParam3);
		}
	}
	return false;
}

bool func_745(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (__LIB_1__::func_410(Global_36, func_348(), 7f, 1))
	{
		*iParam1 = 1;
		return true;
	}
	if (__LIB_0__::func_266(*uParam0, -2369f, -1335.1f, 146.3f, 1f, 1, 1))
	{
		*iParam1 = 0;
		return true;
	}
	if (func_750(iParam2, bParam3))
	{
		*iParam1 = 2;
		return true;
	}
	return false;
}

void func_746(var uParam0, int iParam1, float fParam2, bool bParam3, int iParam4)
{
	if (__LIB_0__::func_27(*iParam1, 262144))
	{
		func_1159(bParam3, iParam4);
		return;
	}
	if (__LIB_0__::func_266(*uParam0, func_348(), 16.5f, 1, 1) || fParam2 < 16.5f)
	{
		func_1159(bParam3, iParam4);
		__LIB_1__::func_683(iParam1, 262144);
		if (__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 0, 1, 0)) || __LIB_0__::func_154(__LIB_0__::func_153(Global_35, 1, 1, 0)))
		{
			WEAPON::_0x94A3C1B804D291EC(Global_35, 1, 0, 1, 0);
			TASK::TASK_SWAP_WEAPON(Global_35, 0, 0, 0, 0);
		}
		return;
	}
	if (bLocal_15)
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, (1f * 0.5f));
	}
	else if (fParam2 < (16.5f + 2f))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, (1f * 0.9f));
	}
	else if (fParam2 < 28f)
	{
		if (!PED::IS_PED_ON_MOUNT(Global_35) && fParam2 < (16.5f * 2f))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
		}
		else
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 2f);
		}
	}
}

void func_747(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED((iParam0[iVar0 /*16*/])->f_9, true, false) && ANIMSCENE::_IS_ANIM_SCENE_STARTED((iParam0[iVar0 /*16*/])->f_9, false))
		{
			ANIMSCENE::SET_ANIM_SCENE_BOOL((iParam0[iVar0 /*16*/])->f_9, (iParam0[iVar0 /*16*/])->f_12, true, false);
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY((iParam0[iVar0 /*16*/])->f_9, (iParam0[iVar0 /*16*/])->f_14, (iParam0[iVar0 /*16*/])->f_2);
		}
		iVar0++;
	}
}

bool func_748(var uParam0, int iParam1, int iParam2)
{
	if (__LIB_0__::func_27(*iParam1, 16777216))
	{
		return true;
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*iParam2))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(*iParam2, true, false))
		{
			ANIMSCENE::SET_ANIM_SCENE_BOOL(*iParam2, "IG_EvelynMiller_injrLoop", false, false);
			__LIB_1__::func_683(iParam1, 16777216);
			return true;
		}
	}
	else
	{
		if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
		{
			return false;
		}
		*iParam2 = ANIMSCENE::_CREATE_ANIM_SCENE("script@rcm@MLLR@IG@RC_2@RC2_IG2_BerateGroup@RC2_IG2_EMiller", 0, "pbl_EM_injr", false, true);
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*iParam2))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*iParam2, "IG_EVELYNMILLER", *uParam0, 0);
			ANIMSCENE::LOAD_ANIM_SCENE(*iParam2);
		}
	}
	return false;
}

void func_749(var uParam0)
{
	int iVar0;
	if (__LIB_0__::func_27(iLocal_27, 524288) == 0 && (bLocal_253 || func_1160()))
	{
		__LIB_1__::func_683(&iLocal_27, 524288);
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_199[iVar0 /*16*/]))
			{
				if (!MAP::DOES_BLIP_EXIST(Local_199[iVar0 /*16*/].f_1))
				{
					Local_199[iVar0 /*16*/].f_1 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), Local_199[iVar0 /*16*/]);
				}
			}
			iVar0++;
		}
		if (MAP::DOES_BLIP_EXIST(iLocal_54))
		{
			func_634(0);
		}
	}
	if (!__LIB_0__::func_27(iLocal_27, 1))
	{
		__LIB_13__::func_89(uParam0, "MLLR2_DEALH", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
		__LIB_1__::func_683(&iLocal_27, 1);
	}
}

bool func_750(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*iParam0)[iVar0 /*16*/]))
		{
			if (ENTITY::IS_ENTITY_DEAD((*iParam0)[iVar0 /*16*/]))
			{
				return true;
			}
			if (iVar0 == 2 && *bParam1)
			{
				return false;
			}
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY((*iParam0)[iVar0 /*16*/], Global_35, 1, 1))
			{
				return true;
			}
			if (FIRE::IS_ENTITY_ON_FIRE((*iParam0)[iVar0 /*16*/]))
			{
				return true;
			}
			if (__LIB_2__::func_215((*iParam0)[iVar0 /*16*/], Global_35, 1, 50f, 0) && __LIB_2__::func_138((*iParam0)[iVar0 /*16*/], 1, 1, 0, 0, 0))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_751()
{
	if (__LIB_0__::func_27(iLocal_27, 1048576))
	{
		return true;
	}
	if (WEAPON::_0xCB690F680A3EA971(Global_35, 6))
	{
		__LIB_1__::func_683(&iLocal_27, 1048576);
		return true;
	}
	return false;
}

void func_752(bool bParam0)
{
	if (iLocal_250 == -1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_199[0 /*16*/]))
		{
			func_1163(0, bParam0);
			iLocal_250 = 0;
			if (!ENTITY::IS_ENTITY_DEAD(Local_199[1 /*16*/]))
			{
				TASK::TASK_SMART_FLEE_COORD(Local_199[1 /*16*/], Global_36, 1000f, -1, false, 1077936128);
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_199[2 /*16*/]))
			{
				TASK::TASK_SMART_FLEE_COORD(Local_199[2 /*16*/], Global_36, 1000f, -1, false, 1077936128);
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(Local_199[1 /*16*/]))
		{
			iLocal_250 = 1;
			func_1163(1, bParam0);
			if (!ENTITY::IS_ENTITY_DEAD(Local_199[2 /*16*/]))
			{
				TASK::TASK_SMART_FLEE_COORD(Local_199[2 /*16*/], Global_36, 1000f, -1, false, 1077936128);
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(Local_199[2 /*16*/]))
		{
			iLocal_250 = 2;
			func_1163(2, bParam0);
		}
	}
}

void func_753(int iParam0)
{
	if (!__LIB_0__::func_163(Local_199[iParam0 /*16*/], 780511057))
	{
		TASK::CLEAR_PED_TASKS(Local_199[iParam0 /*16*/], true, false);
		WEAPON::SET_CURRENT_PED_WEAPON(Local_199[iParam0 /*16*/], joaat("WEAPON_UNARMED"), false, 0, false, false);
		TASK::TASK_COMBAT_PED(Local_199[iParam0 /*16*/], Global_35, 0, 0);
	}
}

void func_754(int iParam0)
{
	if (!__LIB_0__::func_163(Local_199[iParam0 /*16*/], 780511057))
	{
		TASK::CLEAR_PED_TASKS(Local_199[iParam0 /*16*/], true, false);
		TASK::TASK_COMBAT_PED(Local_199[iParam0 /*16*/], Global_35, 0, 0);
	}
}

void func_755(var uParam0, int iParam1)
{
	int iVar0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (PED::IS_PED_FLEEING(iParam1) || __LIB_0__::func_27(iLocal_27, 1048576))
		{
			if (!bLocal_267)
			{
				if (!__LIB_6__::func_904())
				{
					if (__LIB_12__::func_876(uParam0, "RMLLR_BRWL_GSCR", 0))
					{
						bLocal_267 = true;
					}
				}
			}
			return;
		}
	}
	if (!__LIB_0__::func_899(&uLocal_262))
	{
		if (!__LIB_6__::func_904())
		{
			__LIB_4__::func_89(&uLocal_262, 0);
			fLocal_265 = MISC::GET_RANDOM_FLOAT_IN_RANGE(2.5f, 5f);
			fLocal_266 = MISC::GET_RANDOM_FLOAT_IN_RANGE(2.5f, 5f);
		}
	}
	else if (__LIB_1__::func_583(&uLocal_262) > fLocal_266)
	{
		if (__LIB_12__::func_876(uParam0, "RMLLR_2_COWER", 0))
		{
			__LIB_1__::func_561(&uLocal_262);
		}
	}
	else if (__LIB_1__::func_583(&uLocal_262) > fLocal_265)
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			return;
		}
		iVar0 = __LIB_0__::func_399(iParam1, 1, 0, 0);
		if (iVar0 != joaat("WEAPON_UNARMED"))
		{
			if (__LIB_12__::func_876(uParam0, "RMLLR_BRWL_GAGR", 0))
			{
				__LIB_1__::func_561(&uLocal_262);
			}
		}
		else if (__LIB_12__::func_876(uParam0, "RMLLR_BRWL_FHT", 0))
		{
			__LIB_1__::func_561(&uLocal_262);
		}
	}
}

bool func_756()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_199[iVar0 /*16*/]))
		{
			iVar1++;
			__LIB_0__::func_325(&(Local_199[iVar0 /*16*/].f_1));
		}
		else if (ENTITY::IS_ENTITY_DEAD(Local_199[iVar0 /*16*/]))
		{
			iVar1++;
			__LIB_0__::func_325(&(Local_199[iVar0 /*16*/].f_1));
		}
		else if (PED::IS_PED_FLEEING(Local_199[iVar0 /*16*/]))
		{
			iVar1++;
			__LIB_0__::func_325(&(Local_199[iVar0 /*16*/].f_1));
		}
		else if (PED::_IS_PED_HOGTIED(Local_199[iVar0 /*16*/]))
		{
			iVar1++;
			__LIB_0__::func_325(&(Local_199[iVar0 /*16*/].f_1));
		}
		iVar0++;
	}
	return iVar1 >= 3;
}

int func_785(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	*uParam1 = joaat("CSTP_PERSIST_ACROSS_STATES");
	*iParam2 = -1;
	iVar0 = __LIB_0__::func_700(iParam0);
	switch (iVar0)
	{
		case 1:
			iVar1 = __LIB_0__::func_909(iParam0);
			switch (iVar1)
			{
				case 0:
					return joaat("CSTAG_FLOW_WNT1_POST");
				case 1:
					return joaat("CSTAG_FLOW_WNT2_POST");
				case 2:
					return joaat("CSTAG_FLOW_DST1_POST");
				case 3:
					return joaat("CSTAG_FLOW_WNT4_POST");
				case 4:
					*uParam1 = -2060316038;
					return joaat("CSTAG_FLOW_MUD1_POST");
				case 5:
					return joaat("CSTAG_FLOW_MUD2_POST");
				case 6:
					return joaat("CSTAG_FLOW_MUD3_POST");
				case 10:
					return joaat("CSTAG_FLOW_REV1_POST");
				case 13:
					return joaat("CSTAG_FLOW_SEN1_POST");
				case 15:
					return joaat("CSTAG_FLOW_HNT1_POST");
				case 8:
					return joaat("CSTAG_FLOW_MRY1_POST");
				case 25:
					return joaat("CSTAG_FLOW_MUD6_POST");
				case 14:
					return joaat("CSTAG_FLOW_MUD4_POST");
				case 7:
					return joaat("CSTAG_FLOW_BOU1_POST");
				case 9:
					if (__LIB_0__::func_895(Global_1835011[9 /*74*/].f_1) == 0)
					{
						return joaat("CSTAG_FLOW_SAL1_SPLITUP_POST");
					}
					else
					{
						return joaat("CSTAG_FLOW_SAL1_POST");
					}
					break;
				case 11:
					return joaat("CSTAG_FLOW_UTP1_POST");
				case 12:
					return joaat("CSTAG_FLOW_UTP2_POST");
				case 16:
					return joaat("CSTAG_FLOW_FUD1_POST");
				case 17:
					return joaat("CSTAG_FLOW_GRY1_POST");
				case 53:
					return joaat("CSTAG_FLOW_CRN1_POST");
				case 18:
					return joaat("CSTAG_FLOW_BRT1_POST");
				case 19:
					return joaat("CSTAG_FLOW_GRY2_POST");
				case 20:
					return joaat("CSTAG_FLOW_BRT2_POST");
				case 22:
					return joaat("CSTAG_FLOW_TRE1_POST");
				case 23:
					return joaat("CSTAG_FLOW_DST3_POST");
				case 24:
					return joaat("CSTAG_FLOW_MUD5_POST");
				case 21:
					return joaat("CSTAG_FLOW_GRY3_POST");
				case 26:
					return joaat("CSTAG_FLOW_BRT3_POST");
				case 27:
					return joaat("CSTAG_FLOW_MOB1_POST");
				case 28:
					return joaat("CSTAG_FLOW_MOB2_POST");
				case 29:
					return joaat("CSTAG_FLOW_MOB3_POST");
				case 30:
					return joaat("CSTAG_FLOW_MOB4_POST");
				case 31:
					return joaat("CSTAG_FLOW_MOB5_POST");
				case 32:
					return joaat("CSTAG_FLOW_ODR4_POST");
				case 33:
					return joaat("CSTAG_FLOW_IND1_POST");
				case 34:
					return joaat("CSTAG_FLOW_IND3_POST");
				case 35:
					return joaat("CSTAG_FLOW_SUS1_POST");
				case 36:
					return joaat("CSTAG_FLOW_MRY3_POST");
				case 37:
					return joaat("CSTAG_FLOW_SDN1_POST");
				case 38:
					return joaat("CSTAG_FLOW_GUA1_POST");
				case 39:
					return joaat("CSTAG_FLOW_GUA2_POST");
				case 40:
					return joaat("CSTAG_FLOW_FUS1_POST");
				case 41:
					return joaat("CSTAG_FLOW_FUS2_POST");
				case 42:
					return joaat("CSTAG_FLOW_SMG2_POST");
				case 43:
					return joaat("CSTAG_FLOW_GUA3_POST");
				case 44:
					return joaat("CSTAG_FLOW_GNG1_POST");
				case 45:
					return joaat("CSTAG_FLOW_GNG2_POST");
				case 46:
					return joaat("CSTAG_FLOW_GNG3_POST");
				case 47:
					return joaat("CSTAG_FLOW_DST5_POST");
				case 48:
					return joaat("CSTAG_FLOW_NTV1_POST");
				case 49:
					return joaat("CSTAG_FLOW_NTV2_POST");
				case 50:
					return joaat("CSTAG_FLOW_NTS1_POST");
				case 51:
					return joaat("CSTAG_FLOW_NTS2_POST");
				case 52:
					return joaat("CSTAG_FLOW_NTS3_POST");
				case 54:
					return joaat("CSTAG_FLOW_TRN1_POST");
				case 55:
					return joaat("CSTAG_FLOW_TRN2_POST");
				case 56:
					return joaat("CSTAG_FLOW_TRN3_POST");
				case 57:
					return joaat("CSTAG_FLOW_TRN4_POST");
				case 58:
					return joaat("CSTAG_FLOW_NTV3_POST");
				case 59:
					return joaat("CSTAG_FLOW_FIN1_POST");
				case 60:
					return joaat("CSTAG_FLOW_MAR1_POST");
				case 61:
					return joaat("CSTAG_FLOW_MAR5_POST");
				case 62:
					return joaat("CSTAG_FLOW_MR52_POST");
				case 63:
					return joaat("CSTAG_FLOW_MR53_POST");
				case 64:
					return joaat("CSTAG_FLOW_LAR1_POST");
				case 65:
					return joaat("CSTAG_FLOW_MAR2_POST");
				case 66:
					return joaat("CSTAG_FLOW_MAR4_POST");
				case 67:
					return joaat("CSTAG_FLOW_AB21_POST");
				case 68:
					return joaat("CSTAG_FLOW_BE22_POST");
				case 69:
					return joaat("CSTAG_FLOW_SAD2_POST");
				case 70:
					return joaat("CSTAG_FLOW_SAD3_POST");
				case 71:
					return joaat("CSTAG_FLOW_SAD4_POST");
				case 72:
					return joaat("CSTAG_FLOW_SAD5_POST");
				case 73:
					return joaat("CSTAG_FLOW_MAR6_POST");
				case 74:
					return joaat("CSTAG_FLOW_MAR7_POST");
				case 75:
					return joaat("CSTAG_FLOW_MAR8_POST");
				case 76:
					return joaat("CSTAG_FLOW_FIN2_POST");
			}
			Jump @2177; //curOff = 1426
			iVar2 = __LIB_0__::func_76(iParam0);
			switch (iVar2)
			{
				case 120:
					return joaat("CSTAG_FLOW_RPRSN_POST");
				case 0:
					return joaat("CSTAG_FLOW_RABI1_POST");
				case 63:
					return joaat("CSTAG_FLOW_RDST2_POST");
				case 97:
					return joaat("CSTAG_FLOW_RMARY1_POST");
				case 98:
					return joaat("CSTAG_FLOW_RMARY2_POST");
				case 94:
					return joaat("CSTAG_FLOW_RHMR0_POST");
				case 59:
					return joaat("CSTAG_FLOW_RDOWN1_POST");
				case 61:
					return joaat("CSTAG_FLOW_RDOWN2_POST");
				case 62:
					return joaat("CSTAG_FLOW_RDOWN3_POST");
				case 112:
					return joaat("CSTAG_FLOW_RMUD31_POST");
				case 113:
					return joaat("CSTAG_FLOW_RMUD32_POST");
				case 114:
					return joaat("CSTAG_FLOW_RMUD33_POST");
				case 66:
					*uParam1 = -2060316038;
					return joaat("CSTAG_FLOW_RDTC1_POST");
				case 76:
					return joaat("CSTAG_FLOW_RXCF1_POST");
				case 134:
					return joaat("CSTAG_FLOW_RSAD1_POST");
				case 3:
					return joaat("CSTAG_FLOW_RBNP10_POST");
				case 5:
					return joaat("CSTAG_FLOW_RBNP12_POST");
				case 21:
					return joaat("CSTAG_FLOW_RBRT0_POST");
				case 37:
					return joaat("CSTAG_FLOW_RCHRB_POST");
				case 138:
					return joaat("CSTAG_FLOW_RSTR1_POST");
				case 67:
					*uParam1 = -2060316038;
					return joaat("CSTAG_FLOW_RDTC2_POST");
				case 106:
					return joaat("CSTAG_FLOW_RMOB01_POST");
				case 107:
					return joaat("CSTAG_FLOW_RMOB02_POST");
				case 115:
					return joaat("CSTAG_FLOW_RNATV1_POST");
				case 116:
					return joaat("CSTAG_FLOW_RNATV2_POST");
				case 22:
					return joaat("CSTAG_FLOW_RCLDN1_POST");
				case 23:
					return joaat("CSTAG_FLOW_RCLDN2_POST");
				case 82:
					return joaat("CSTAG_FLOW_RGNG01_POST");
				case 68:
					*uParam1 = -2060316038;
					return joaat("CSTAG_FLOW_RDCH3_POST");
				case 140:
					return joaat("CSTAG_FLOW_RSTR31_POST");
				case 142:
					return joaat("CSTAG_FLOW_RSTR33_POST");
				case 58:
					return joaat("CSTAG_FLOW_RDOPN_POST");
				case 64:
					return joaat("CSTAG_FLOW_RDST61_POST");
				case 65:
					return joaat("CSTAG_FLOW_RDST62_POST");
				case 108:
					return joaat("CSTAG_FLOW_RMNR1_POST");
				case 8:
					return joaat("CSTAG_FLOW_RBCH11_POST");
				case 10:
					return joaat("CSTAG_FLOW_RBCH21_POST");
				case 2:
					return joaat("CSTAG_FLOW_RABI3_POST");
				case 96:
					return joaat("CSTAG_FLOW_RJCK2_POST");
				case 52:
					return joaat("CSTAG_FLOW_RCTAX2_POST");
				default:
					break;
			}
			Jump @2177; //curOff = 2029
			iVar3 = __LIB_0__::func_76(iParam0);
			switch (iVar3)
			{
				case joaat("HAI_FISHING_01"):
					return joaat("CSTAG_FLOW_CA_FS01_POST");
				case joaat("HAI_HOME_ROBBERY_01"):
					return joaat("CSTAG_FLOW_CA_HR01_POST");
				case joaat("HAI_COACH_ROBBERY_01"):
					return joaat("CSTAG_FLOW_CA_CR02_POST");
				case joaat("HAI_COACH_ROBBERY_02"):
					return joaat("CSTAG_FLOW_CA_CR03_POST");
				case joaat("HAI_FISHING_02"):
					return joaat("CSTAG_FLOW_CA_FS02_POST");
				case joaat("HAI_HUNTING_06"):
					return joaat("CSTAG_FLOW_CA_HT06_POST");
				case joaat("HAI_BANK_ROBBERY_01"):
					return joaat("CSTAG_FLOW_CA_BR01_POST");
				case joaat("HAI_COACH_ROBBERY_03"):
					return joaat("CSTAG_FLOW_CA_CR01_POST");
				case joaat("HAI_COACH_ROBBERY_04"):
					return joaat("CSTAG_FLOW_CA_CR04_POST");
				default:
					break;
			}
			return 176656832;
		}
int func_786(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
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
			__LIB_1__::func_28(iParam0, 1);
			if (__LIB_0__::func_344(iVar2))
			{
				iVar4 = 0;
				while (iVar4 < 60)
				{
					if (Global_40.f_4283.f_6[iVar4 /*5*/].f_4 == iVar2 && Global_40.f_4283.f_6[iVar4 /*5*/] != iParam0)
					{
						__LIB_1__::func_152(&(Global_40.f_4283.f_6[iVar4 /*5*/]), 1, 0);
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

bool func_795(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
				func_795(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
						func_795(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_795(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_795(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_795(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_795(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_795(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_795(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_1247(499813453, joaat("TREASURE_HUNT_LOOT_01"), 0);
				func_1248(499813453, 0);
				__LIB_0__::func_365(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_02"):
				func_1247(499813453, joaat("TREASURE_HUNT_LOOT_02"), 0);
				func_1248(499813453, 0);
				__LIB_0__::func_365(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_03"):
				func_1247(499813453, joaat("TREASURE_HUNT_LOOT_03"), 0);
				func_1248(499813453, 0);
				__LIB_0__::func_365(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_04"):
				func_1247(666607663, joaat("TREASURE_HUNT_LOOT_05"), 0);
				func_1248(666607663, 0);
				__LIB_0__::func_366(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_05"):
				func_1247(666607663, joaat("TREASURE_HUNT_LOOT_06"), 0);
				func_1248(666607663, 0);
				__LIB_0__::func_366(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_06"):
				func_1247(666607663, joaat("TREASURE_HUNT_LOOT_07"), 0);
				func_1248(666607663, 0);
				__LIB_0__::func_366(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_07"):
				func_1247(-220219788, joaat("TREASURE_HUNT_LOOT_09"), 0);
				func_1248(-220219788, 0);
				__LIB_0__::func_367(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_08"):
				func_1247(-220219788, joaat("TREASURE_HUNT_LOOT_10"), 0);
				func_1248(-220219788, 0);
				__LIB_0__::func_367(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_09"):
				func_1247(-220219788, joaat("TREASURE_HUNT_LOOT_11"), 0);
				func_1248(-220219788, 0);
				__LIB_0__::func_367(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_10"):
				func_1247(218622660, joaat("TREASURE_HUNT_LOOT_13"), 0);
				func_1248(218622660, 0);
				__LIB_0__::func_368(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_11"):
				func_1247(218622660, joaat("TREASURE_HUNT_LOOT_14"), 0);
				func_1248(218622660, 0);
				__LIB_0__::func_368(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_13"):
				func_1247(390004462, joaat("TREASURE_HUNT_LOOT_16"), 0);
				func_1248(390004462, 0);
				__LIB_0__::func_369(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_14"):
				func_1247(390004462, joaat("TREASURE_HUNT_LOOT_17"), 0);
				func_1248(390004462, 0);
				__LIB_0__::func_369(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_15"):
				func_1247(390004462, joaat("TREASURE_HUNT_LOOT_18"), 0);
				func_1248(390004462, 0);
				__LIB_0__::func_369(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_16"):
				func_1247(6410548, joaat("TREASURE_HUNT_LOOT_20"), 0);
				func_1248(6410548, 0);
				__LIB_0__::func_370(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_17"):
				func_1247(6410548, joaat("TREASURE_HUNT_LOOT_21"), 0);
				func_1248(6410548, 0);
				__LIB_0__::func_370(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_18"):
				func_1247(6410548, joaat("TREASURE_HUNT_LOOT_22"), 0);
				func_1248(6410548, 0);
				__LIB_0__::func_370(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_19"):
				func_1247(6410548, joaat("TREASURE_HUNT_LOOT_23"), 0);
				func_1248(6410548, 0);
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
					func_795(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_795(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_795(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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

void func_797()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_1276();
	func_1277();
	func_1278();
	func_1279();
	func_1280();
	__LIB_1__::func_848();
	__LIB_0__::func_376();
}

void func_798(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	func_1283(iParam0, 1, 1, -142743235, 1);
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

void func_833()
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
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_1317(&uVar4, &iVar1, &iVar2, &iVar3)))
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

int func_929(var uParam0, int iParam1, int iParam2)
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
		return func_929(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

void func_1019(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_1019(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_1019(iVar2, vParam1, fParam4, iParam5, iParam6);
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

void func_1022()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_199[iVar0 /*16*/]))
		{
			__LIB_2__::func_426(&(Local_199[iVar0 /*16*/]));
		}
		iVar0++;
	}
}

void func_1061(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
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
		func_1521();
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

void func_1063(var uParam0)
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
			func_1019(iVar1, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_1019(iVar3, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_1064(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if ((__LIB_0__::func_84(uParam0, 268435456) && !__LIB_0__::func_86(__LIB_12__::func_720(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { __LIB_12__::func_720(uParam0) };
			func_1019(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

int func_1136(var uParam0)
{
	vector3 vVar0;
	float fVar3;
	vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(uParam0->f_1, Global_36) };
	fVar3 = MISC::GET_HEADING_FROM_VECTOR_2D(vVar0.x, vVar0.y);
	if (fVar3 < 0f)
	{
		fVar3 = (fVar3 + 360f);
	}
	if (fVar3 >= 85f && fVar3 <= 180f)
	{
		return 1;
	}
	if (fVar3 > 180f && fVar3 <= 275f)
	{
		return 2;
	}
	return 0;
}

bool func_1137(var uParam0, float fParam1)
{
	int iVar0;
	if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(uParam0->f_1, 0))
	{
		if (func_1606(uParam0, fParam1))
		{
			if (!__LIB_0__::func_163(uParam0->f_1, 658540077))
			{
				if (TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(uParam0->f_4, ENTITY::GET_ENTITY_COORDS(uParam0->f_1, false, false), &iVar0))
				{
					iVar0 += 4;
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(uParam0->f_1, uParam0->f_4, iVar0, 4096, -1, 0, 0, -1);
					uParam0->f_9 = 0;
				}
			}
		}
	}
	else
	{
		__LIB_11__::func_713(uParam0->f_1, 1071644672 /* Float: 1.75f */, 0, 1045220557 /* Float: 0.2f */, 1, 1077936128 /* Float: 3f */, 1106247680 /* Float: 30f */, 1114636288 /* Float: 60f */, 1033476506 /* Float: 0.075f */, 1061158912 /* Float: 0.75f */, 1, 0, 1045220557 /* Float: 0.2f */, 0);
		return true;
	}
	return false;
}

void func_1138(var uParam0)
{
	if (PED::IS_PED_ON_MOUNT(Global_35) && !PLAYER::_0x2009F8AB7A5E9D6D(PLAYER::GET_PLAYER_INDEX()))
	{
		if (!PED::DOES_GROUP_EXIST(uParam0->f_19))
		{
			uParam0->f_19 = PED::CREATE_GROUP(2);
		}
		PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 279, true);
		PED::SET_PED_AS_GROUP_LEADER(uParam0->f_1, uParam0->f_19, false);
		PED::_0x9BBEAF8B0C007F1E(uParam0->f_1, 0);
		PED::_0xC99F104BDF8C7F5A(uParam0->f_1, 0);
		PLAYER::_0xAC22AA6DF4D1C1DE(PLAYER::GET_PLAYER_INDEX(), uParam0->f_1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 2, 2, 0);
	}
}

void func_1139(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_2) && !PED::IS_PED_ON_MOUNT(uParam0->f_1))
	{
		if (!__LIB_0__::func_163(uParam0->f_1, 1868526510) && PED::_GET_RIDER_OF_MOUNT(uParam0->f_2, false) != Global_35)
		{
			TASK::TASK_MOUNT_ANIMAL(uParam0->f_1, uParam0->f_2, 20000, -1, 2f, 1, 0, 0);
		}
	}
}

bool func_1140(var uParam0, float fParam1)
{
	if (fParam1 > 28f)
	{
		return true;
	}
	if (fParam1 > (28f / 2f) && !__LIB_0__::func_71(Global_35))
	{
		return true;
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_2) && PED::_IS_PED_LASSOED(uParam0->f_2))
	{
		return true;
	}
	return false;
}

void func_1141(var uParam0, bool bParam1)
{
	if (uParam0->f_9)
	{
	}
	else
	{
		if (PLAYER::_0x2009F8AB7A5E9D6D(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::_0x0C6B89876262A99D(PLAYER::GET_PLAYER_INDEX(), uParam0->f_1);
		}
		if (bParam1)
		{
			TASK::TASK_STAND_STILL(uParam0->f_1, -1);
		}
		uParam0->f_9 = 1;
	}
}

void func_1142(var uParam0)
{
	int iVar0;
	iVar0 = TASK::GET_PED_WAYPOINT_PROGRESS(uParam0->f_1);
	if (uParam0->f_5 >= iVar0)
	{
		return;
	}
	uParam0->f_5 = iVar0;
}

void func_1154(int iParam0)
{
	if (iLocal_176 != iParam0)
	{
		iLocal_176 = iParam0;
	}
}

void func_1156(var uParam0)
{
	if (!__LIB_0__::func_27(iLocal_27, 512))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -815394180))
		{
			__LIB_1__::func_683(&iLocal_27, 512);
			if (!__LIB_0__::func_139(iLocal_173))
			{
				__LIB_0__::func_45("BEAR_TRAPHELP2", 10000, 0, 0, 0, 1);
				iLocal_173 = __LIB_1__::func_746("BEAR_PRY_TRAP", joaat("INPUT_CONTEXT_ACTION"), 11, 570, 4000, 10, 0.2f, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			}
		}
		else if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, iLocal_181))
		{
		}
	}
	else
	{
		switch (iLocal_174)
		{
			case 0:
				if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_181, "FAIL", 1))
				{
					iLocal_175 = 2;
					iLocal_174 = 2;
					__LIB_6__::func_916(&iLocal_173);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
					__LIB_1__::func_683(&iLocal_27, 8192);
				}
				__LIB_2__::func_259(&uLocal_182);
				__LIB_14__::func_245(1);
				break;
			case 1:
				if (!__LIB_0__::func_27(iLocal_27, 1024))
				{
					if (__LIB_9__::func_913(&uLocal_182, 4.5f))
					{
						__LIB_1__::func_683(&iLocal_27, 1024);
					}
				}
				if (__LIB_4__::func_442(iLocal_173, 1) || ANIMSCENE::_0x8D81E7824B7753F7(iLocal_181, "FAIL", 1))
				{
					iLocal_175 = 2;
					__LIB_6__::func_916(&iLocal_173);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
					__LIB_1__::func_683(&iLocal_27, 8192);
					__LIB_14__::func_245(2);
				}
				else if (__LIB_0__::func_486(iLocal_173, 1) == 1f)
				{
					__LIB_0__::func_105(1);
					__LIB_6__::func_916(&iLocal_173);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
					__LIB_1__::func_683(&iLocal_27, 4096);
					__LIB_14__::func_245(2);
				}
				else if (__LIB_0__::func_486(iLocal_173, 1) >= 0.4f)
				{
					if (!__LIB_0__::func_27(iLocal_28, 2))
					{
						if (__LIB_12__::func_876(uParam0, "RMLLR_2_STRAIN", 0))
						{
							__LIB_1__::func_683(&iLocal_28, 2);
						}
					}
				}
				__LIB_13__::func_585();
				break;
			case 2:
				break;
		}
	}
}

void func_1159(bool bParam0, int iParam1)
{
	if (!bLocal_16)
	{
		if ((bParam0 && !ENTITY::IS_ENTITY_DEAD(iParam1)) && PED::_0xD0B7AEB56229D317(iParam1) == Global_35)
		{
			bLocal_16 = true;
		}
	}
	if (!__LIB_1__::func_410(Global_36, func_348(), 7f, 1))
	{
		CAM::SET_GAMEPLAY_COORD_HINT(func_348() + Vector(1.5f, 0f, 0f), 2000, 2000, 2000, 0);
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
	if (bLocal_16 == 0)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPRINT"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
	__LIB_1__::func_538(0);
	if (!bLocal_14)
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 249, true);
		PED::SET_PED_CONFIG_FLAG(Global_35, 334, true);
		bLocal_14 = true;
	}
}

bool func_1160()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_199[iVar0 /*16*/]))
		{
			if (__LIB_0__::func_48(Global_35, Local_199[iVar0 /*16*/], 24f, 1))
			{
				if (ENTITY::IS_ENTITY_ON_SCREEN(Local_199[iVar0 /*16*/]) && !ENTITY::IS_ENTITY_OCCLUDED(Local_199[iVar0 /*16*/]))
				{
					return true;
				}
			}
			else if (__LIB_2__::func_138(Local_199[iVar0 /*16*/], 1, 1, 1, 0, 0))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_1163(int iParam0, bool bParam1)
{
	int iVar0;
	if (bParam1)
	{
		PED::SET_PED_CONFIG_FLAG(Local_199[iParam0 /*16*/], 249, false);
		WEAPON::SET_CURRENT_PED_WEAPON(Local_199[iParam0 /*16*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), false, 0, false, false);
		PED::SET_COMBAT_FLOAT(Local_199[iParam0 /*16*/], 6, 0.25f);
		iLocal_251 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(func_348(), 0f, 0f, 0f, 8f, 8f, 8f, "RMLLR2_CampDefence");
		__LIB_4__::func_291(Local_199[iParam0 /*16*/], iLocal_251, 0, 0);
	}
	TASK::CLEAR_PED_TASKS(Local_199[iParam0 /*16*/], true, false);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_348(), 2f, -1, 0.25f, 0, 40000f);
	TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
	TASK::CLOSE_SEQUENCE_TASK(iVar0);
	TASK::TASK_PERFORM_SEQUENCE(Local_199[iParam0 /*16*/], iVar0);
	TASK::CLEAR_SEQUENCE_TASK(&iVar0);
}

void func_1247(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	vector3 vVar4;
	switch (iParam0)
	{
		case 499813453:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_JACK_HALL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = joaat("COL_TH_SUB_JACK_HALL");
			break;
		case 666607663:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_HIGH_STAKES";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = joaat("COL_TH_SUB_HIGH_STAKES");
			break;
		case -220219788:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_POISONOUS_TRAIL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = joaat("COL_TH_SUB_POISONOUS_TRAIL");
			Jump @280; //curOff = 172
			sVar3 = "COL_TH_SUB_TRESOR_DES_MORTS";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = joaat("COL_TH_SUB_TRESOR_DES_MORTS");
			Jump @280; //curOff = 207
			sVar3 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = joaat("COL_TH_SUB_ELEMENTAL_TRAIL");
			Jump @280; //curOff = 242
			sVar3 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = joaat("COL_TH_SUB_LANDMARKS_OF_RICHES");
			switch (iParam1)
			{
				case joaat("TREASURE_HUNT_LOOT_01"):
					sVar2 = "RCM_BRIEF_DESC_TH_JACK_01";
					break;
				case joaat("TREASURE_HUNT_LOOT_02"):
					sVar2 = "RCM_BRIEF_DESC_TH_JACK_02";
					break;
				case joaat("TREASURE_HUNT_LOOT_03"):
					sVar2 = "RCM_BRIEF_DESC_TH_JACK_03";
					break;
				case joaat("TREASURE_HUNT_LOOT_04"):
					sVar1 = "COL_TH_OBJ_FOUND";
					sVar2 = "RCM_BRIEF_DESC_TH_JACK_04";
					break;
				case joaat("TREASURE_HUNT_LOOT_05"):
					sVar2 = "RCM_BRIEF_DESC_TH_HIGH_01";
					break;
				case joaat("TREASURE_HUNT_LOOT_06"):
					sVar2 = "RCM_BRIEF_DESC_TH_HIGH_02";
					break;
				case joaat("TREASURE_HUNT_LOOT_07"):
					sVar2 = "RCM_BRIEF_DESC_TH_HIGH_03";
					break;
				case joaat("TREASURE_HUNT_LOOT_08"):
					sVar1 = "COL_TH_OBJ_FOUND";
					sVar2 = "RCM_BRIEF_DESC_TH_HIGH_04";
					break;
				case joaat("TREASURE_HUNT_LOOT_09"):
					sVar2 = "RCM_BRIEF_DESC_TH_POISON_01";
					break;
				case joaat("TREASURE_HUNT_LOOT_10"):
					sVar2 = "RCM_BRIEF_DESC_TH_POISON_02";
					break;
				case joaat("TREASURE_HUNT_LOOT_11"):
					sVar2 = "RCM_BRIEF_DESC_TH_POISON_03";
					break;
				case joaat("TREASURE_HUNT_LOOT_12"):
					sVar1 = "COL_TH_OBJ_FOUND";
					sVar2 = "RCM_BRIEF_DESC_TH_POISON_04";
					break;
				case joaat("TREASURE_HUNT_LOOT_13"):
					sVar1 = "COL_TH_OBJ";
					sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_01";
					break;
				case joaat("TREASURE_HUNT_LOOT_14"):
					sVar1 = "COL_TH_OBJ_RDL";
					sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_02";
					break;
				case joaat("TREASURE_HUNT_LOOT_15"):
					sVar1 = "COL_TH_OBJ_FOUND";
					sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_03";
					break;
				case joaat("TREASURE_HUNT_LOOT_16"):
					sVar1 = "COL_TH_OBJ";
					sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_01";
					break;
				case joaat("TREASURE_HUNT_LOOT_17"):
					sVar1 = "COL_TH_OBJ";
					sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_02";
					break;
				case joaat("TREASURE_HUNT_LOOT_18"):
					sVar1 = "COL_TH_OBJ";
					sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_03";
					break;
				case joaat("TREASURE_HUNT_LOOT_19"):
					sVar1 = "COL_TH_OBJ_FOUND";
					sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_04";
					break;
				case joaat("TREASURE_HUNT_LOOT_20"):
					sVar1 = "COL_TH_OBJ";
					sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_01";
					break;
				case joaat("TREASURE_HUNT_LOOT_21"):
					sVar1 = "COL_TH_OBJ";
					sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_02";
					break;
				case joaat("TREASURE_HUNT_LOOT_22"):
					sVar1 = "COL_TH_OBJ";
					sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_03";
					break;
				case joaat("TREASURE_HUNT_LOOT_23"):
					sVar1 = "COL_TH_OBJ";
					sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_04";
					break;
				case joaat("TREASURE_HUNT_LOOT_24"):
					sVar1 = "COL_TH_OBJ_FOUND";
					sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_05";
					break;
			}
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iVar0))
			{
				UILOG::_UILOG_REMOVE_ENTRY(3, iVar0);
			}
			if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iVar0))
			{
				UILOG::_UILOG_ADD_ENTRY_HASH(3, iVar0, vVar4, MISC::GET_HASH_KEY("COL_TH_TITLE"), MISC::GET_HASH_KEY(sVar2), 0);
			}
			if (bParam2)
			{
				switch (iParam0)
				{
					case 499813453:
						sVar1 = "COL_TH_JACK_HALL_COMPLETE";
						break;
					case 666607663:
						sVar1 = "COL_TH_HIGH_STAKES_COMPLETE";
						break;
					case -220219788:
						sVar1 = "COL_TH_POISONOUS_TRAIL_COMPLETE";
						break;
					case 218622660:
						sVar1 = "COL_TH_TRESOR_DES_MORTS_COMPLETE";
						break;
					case 390004462:
						sVar1 = "COL_TH_ELEMENTAL_TRAIL_COMPLETE";
						break;
					case 6410548:
						sVar1 = "COL_TH_LANDMARKS_OF_RICHES_COMPLETE";
						break;
				}
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iVar0, MISC::GET_HASH_KEY(sVar1), sVar1, false, false, false);
			UILOG::_UILOG_SET_ENTRY_PINNED(3, iVar0, true);
			UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iVar0, MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), MISC::GET_HASH_KEY("toast_log_blips"));
			UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iVar0, MISC::GET_HASH_KEY("MISSION_RETH"), MISC::GET_HASH_KEY("SP_MISSIONS_19"));
			UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iVar0, MISC::_CREATE_VAR_STRING(2, sVar3));
		}
void func_1248(int iParam0, bool bParam1)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	switch (iParam0)
	{
		case 499813453:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_JACK_HALL";
			iVar0 = joaat("COL_TH_SUB_JACK_HALL");
			break;
		case 666607663:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_HIGH_STAKES";
			iVar0 = joaat("COL_TH_SUB_HIGH_STAKES");
			break;
		case -220219788:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_POISONOUS_TRAIL";
			iVar0 = joaat("COL_TH_SUB_POISONOUS_TRAIL");
			break;
		case 218622660:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_TRESOR_DES_MORTS";
			iVar0 = joaat("COL_TH_SUB_TRESOR_DES_MORTS");
			break;
		case 390004462:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			iVar0 = joaat("COL_TH_SUB_ELEMENTAL_TRAIL");
			break;
		case 6410548:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			iVar0 = joaat("COL_TH_SUB_LANDMARKS_OF_RICHES");
			break;
	}
	sVar3 = "COL_CTX_PLAYER_LOG";
	if (bParam1)
	{
		sVar1 = "MISSION_COMPLETE";
	}
	UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar0);
	__LIB_0__::func_425(MISC::_CREATE_VAR_STRING(2, sVar1), MISC::_CREATE_VAR_STRING(2, sVar2), MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), joaat("PLAYER_MENU"), MISC::_CREATE_VAR_STRING(2, sVar3), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_1276()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_1721(0);
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
	func_1721(1);
}

void func_1277()
{
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_795(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_1278()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_1724(0);
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
	func_1724(1);
}

void func_1279()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_1__::func_432(15000, 0, 0, 0, 1);
			func_1724(0);
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
	func_1724(1);
}

void func_1280()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_795(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_795(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_1283(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_1283(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
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

int func_1283(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			func_1283(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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

int func_1317(var uParam0, int iParam1, int iParam2, int iParam3)
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
	iVar11 = (func_1763(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_952(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_795(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	__LIB_1__::func_432(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

void func_1521()
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
	iVar0 = func_1907(6291456, 0);
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

bool func_1606(var uParam0, float fParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_2))
	{
		return false;
	}
	if (PED::_IS_PED_LASSOED(uParam0->f_2))
	{
		return false;
	}
	if (fParam1 <= (20f / 2f))
	{
		return true;
	}
	if (fParam1 < 20f && PED::IS_PED_ON_MOUNT(Global_35))
	{
		return true;
	}
	return false;
}

void func_1721(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (bParam0)
	{
		func_795(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_795(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_795(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_2018(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_798(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_1283(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_2023(Var0);
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

void func_1724(bool bParam0)
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
		func_795(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_795(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_795(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_795(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_795(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_795(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_795(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_795(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_795(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_795(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_795(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_1283(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_1283(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_1283(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_1283(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_1283(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_1283(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_1283(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_1283(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_1283(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_1283(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_1283(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
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

int func_1763(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
							iVar49 = (iVar49 + func_1763(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1763(iVar63, -915411861, 1, 0, 0));
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

int func_1907(int iParam0, int iParam1)
{
	var uVar0;
	return func_2104(&uVar0, iParam0, iParam1);
}

void func_2018(int iParam0)
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
	func_1283(iParam0, 1, 1, -142743235, 1);
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
		func_1283(uVar18[iVar36], 1, 1, -142743235, 1);
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

void func_2023(struct<6> Param0)
{
	if (!func_2176(Param0.f_4, 1))
	{
	}
	if (!func_2176(Param0, 1))
	{
	}
	if (!func_2176(Param0.f_2, 1))
	{
	}
	if (!func_2176(Param0.f_5, 1))
	{
	}
	if (!func_2176(Param0.f_3, 1))
	{
	}
	if (!func_2176(Param0.f_1, 1))
	{
	}
}

int func_2104(var uParam0, int iParam1, int iParam2)
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
		return func_2104(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

bool func_2176(int iParam0, int iParam1)
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
				if (func_2176(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_2176(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_2176(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_2176(iVar21, 1))
				{
				}
			}
		}
		__LIB_1__::func_712();
		return true;
	}
	return false;
}

