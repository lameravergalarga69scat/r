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
	int iLocal_18[2] = { 0, 0 };
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	struct<9> Local_25[6];
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	char* sLocal_93 = NULL;
	char* sLocal_94 = NULL;
	char* sLocal_95 = NULL;
	char* sLocal_96 = NULL;
	char* sLocal_97 = NULL;
	char* sLocal_98 = NULL;
	char* sLocal_99 = NULL;
	char* sLocal_100 = NULL;
	char* sLocal_101 = NULL;
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
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	int iLocal_151 = 0;
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
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	int iLocal_167 = 0;
	vector3 vLocal_168 = { 0f, 0f, 0f };
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	int iLocal_173 = 0;
	int iLocal_174 = 0;
	int iLocal_175[5] = { 0, 0, 0, 0, 0 };
	int iLocal_181 = 0;
	int iLocal_182 = 0;
	int iLocal_183 = 0;
	int iLocal_184 = 0;
	int iLocal_185 = 0;
	int iLocal_186 = 0;
	vector3 vLocal_187 = { 0f, 0f, 0f };
	int iLocal_190 = 0;
	var uLocal_191 = 3;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 96;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	float fLocal_296 = 0f;
	float fLocal_297 = 0f;
	var uLocal_298 = 0;
	bool bLocal_299 = false;
	bool bLocal_300 = false;
	bool bLocal_301 = false;
	bool bLocal_302 = false;
	bool bLocal_303 = false;
	bool bLocal_304 = false;
	bool bLocal_305 = false;
	bool bLocal_306 = false;
	bool bLocal_307 = false;
	bool bLocal_308 = false;
	int iLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	char* sLocal_313 = NULL;
	struct<16> Local_314[4];
	vector3 vLocal_379 = { 0f, 0f, 0f };
	vector3 vLocal_382 = { 0f, 0f, 0f };
	vector3 vLocal_385 = { 0f, 0f, 0f };
	vector3 vLocal_388 = { 0f, 0f, 0f };
	vector3 vLocal_391 = { 0f, 0f, 0f };
	bool bLocal_394 = false;
	bool bLocal_395 = false;
	int iLocal_396 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion
void __EntryFunction__()
{
	struct<2606> Var0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_21 = joaat("A_C_CROW_01");
	iLocal_22 = joaat("A_C_WOLF_SMALL");
	iLocal_80 = 4;
	iLocal_92 = -1;
	sLocal_93 = "rcm_warv4_chase_vet";
	sLocal_94 = "rcm_warv4_chase_bear_1";
	sLocal_95 = "rcm_warv4_chase_bear_2";
	sLocal_96 = "rcm_warv4_track_vet";
	sLocal_97 = "rcm_warv4_splitup_vet";
	sLocal_98 = "rcm_warv4_splitup_bear_l";
	sLocal_99 = "rcm_warv4_splitup_bear_r";
	sLocal_100 = "rcm_warv4_vet_got_horses";
	sLocal_101 = "rcm_warv4_splitup_fake_tracks";
	iLocal_167 = joaat("WEAPON_MELEE_KNIFE");
	iLocal_171 = joaat("CS_WARVET");
	iLocal_172 = joaat("A_C_HORSE_BUELL_WARVETS");
	iLocal_173 = joaat("A_C_BOARLEGENDARY_01");
	iLocal_174 = joaat("A_C_BOARLEGENDARY_01");
	iLocal_182 = 2;
	iLocal_185 = 1;
	iLocal_190 = joaat("REL_NO_RELATIONSHIP");
	fLocal_297 = 0f;
	sLocal_313 = "AI_DAMAGE@DEAD@BASE";
	vLocal_379 = { 1797.068f, 1305.948f, 199.5585f };
	vLocal_382 = { 1795.594f, 1306.212f, 199.5058f };
	vLocal_385 = { 1796.232f, 1307.096f, 199.447f };
	vLocal_388 = { 1796.111f, 1305.089f, 199.6076f };
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
				__LIB_13__::func_52(uParam0);
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
	__LIB_14__::func_198(uParam0);
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
	__LIB_12__::func_658(uParam0, 5);
	__LIB_12__::func_659(uParam0, 7);
	Local_314[0 /*16*/] = { __LIB_10__::func_449("script@rcm@warv@ig@stage_04@ig1_inspectwolf@ig1_inspectwolf", func_187(0)) };
	Local_314[1 /*16*/] = { __LIB_10__::func_449("script@rcm@warv@leadin@s4@mcs1@base", func_187(4)) };
	Local_314[2 /*16*/] = { __LIB_10__::func_449("script@rcm@warv@ig@stage_04@ig_hamishdead@hamishdead", func_187(5)) };
	Local_314[3 /*16*/] = { __LIB_10__::func_449("mech_skin@boar_legendary", "PBL_ALL") };
	__LIB_1__::func_948(joaat("DOOR_VET_HOUSE_INT_1"), 1, 0f, 0, 0, 0, 1, 0);
	__LIB_1__::func_948(joaat("DOOR_VET_HOUSE_INT_2"), 1, 0f, 0, 0, 0, 1, 0);
	func_190();
	func_191();
	__LIB_13__::func_488(uParam0, 27526);
	__LIB_13__::func_264(uParam0, 27588);
	__LIB_13__::func_487(uParam0, 27652);
	__LIB_1__::func_408(-1957523409, 1, 0);
	__LIB_14__::func_180(uParam0);
}

void func_42(var uParam0)
{
	__LIB_12__::func_908(uParam0, 0);
	TASK::REQUEST_WAYPOINT_RECORDING(sLocal_93);
	TASK::REQUEST_WAYPOINT_RECORDING(sLocal_94);
	TASK::REQUEST_WAYPOINT_RECORDING(sLocal_95);
	TASK::REQUEST_WAYPOINT_RECORDING(sLocal_96);
	TASK::REQUEST_WAYPOINT_RECORDING(sLocal_97);
	TASK::REQUEST_WAYPOINT_RECORDING(sLocal_98);
	TASK::REQUEST_WAYPOINT_RECORDING(sLocal_99);
	TASK::REQUEST_WAYPOINT_RECORDING(sLocal_100);
	TASK::REQUEST_WAYPOINT_RECORDING(sLocal_101);
	__LIB_12__::func_867(uParam0, iLocal_171, 7);
	__LIB_12__::func_867(uParam0, iLocal_173, 7);
	__LIB_12__::func_867(uParam0, iLocal_174, 7);
	__LIB_12__::func_867(uParam0, iLocal_172, 7);
	__LIB_12__::func_867(uParam0, iLocal_22, 7);
	__LIB_12__::func_867(uParam0, iLocal_21, 7);
	__LIB_13__::func_55(uParam0, sLocal_313, 7);
}

bool func_53(var uParam0)
{
	int iVar0;
	bool bVar1;
	switch (func_208(&iVar0))
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
			Var1 = { func_214(42) };
			Var1.f_3 = func_215(42);
			break;
		case 1:
			Var1 = { func_214(43) };
			Var1.f_3 = func_215(43);
			break;
		case 2:
			Var1 = { func_214(44) };
			Var1.f_3 = func_215(44);
			break;
		case 3:
			Var1 = { func_214(45) };
			Var1.f_3 = func_215(45);
			break;
		case 4:
			Var1 = { func_214(46) };
			Var1.f_3 = func_215(46);
			break;
		case 5:
			Var1 = { func_214(47) };
			Var1.f_3 = func_215(47);
			break;
		case 6:
			Var1 = { func_214(48) };
			Var1.f_3 = func_215(48);
			break;
	}
	return Var1;
}

bool func_62(var uParam0)
{
	return func_216(*uParam0, uParam0->f_3);
}

bool func_64(var uParam0)
{
	if (!bLocal_306)
	{
		if (func_217(&iLocal_15))
		{
			StringCopy(&(uParam0->f_2578), "RWARV_F_VET", 24);
			return true;
		}
	}
	if (func_217(&iLocal_16))
	{
		StringCopy(&(uParam0->f_2578), "WARV_F_HORSE", 24);
		return true;
	}
	if (MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iLocal_15, false, false), joaat("WEAPON_THROWN_MOLOTOV"), 8f, true) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iLocal_15, false, false), joaat("WEAPON_THROWN_DYNAMITE"), 8f, true))
	{
		StringCopy(&(uParam0->f_2578), "WARV_F_VETAT", 24);
		return true;
	}
	if (MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iLocal_16, false, false), joaat("WEAPON_THROWN_MOLOTOV"), 8f, true) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iLocal_16, false, false), joaat("WEAPON_THROWN_DYNAMITE"), 8f, true))
	{
		StringCopy(&(uParam0->f_2578), "WARV_F_HSEAT", 24);
		return true;
	}
	if (iLocal_183 < 1)
	{
		if (__LIB_0__::func_393(Global_35, iLocal_175[3], 0, 1))
		{
			StringCopy(&(uParam0->f_2578), "WARV4_F_FLW", 24);
			return true;
		}
	}
	if (vLocal_187.z == 1)
	{
		if (!__LIB_0__::func_48(Global_35, vLocal_187.x, 100f, 1))
		{
			if (__LIB_0__::func_48(Global_35, iLocal_15, 30f, 1))
			{
				StringCopy(&(uParam0->f_2578), "WARV4_F_FLW", 24);
				return true;
			}
		}
	}
	else if (vLocal_187.z == 3)
	{
		if (iLocal_183 < 1)
		{
			if (!ENTITY::IS_ENTITY_OCCLUDED(iLocal_15) && ENTITY::IS_ENTITY_ON_SCREEN(iLocal_15))
			{
				if (!__LIB_0__::func_899(&uLocal_142))
				{
					if (!__LIB_0__::func_266(Global_35, func_214(10), 60f, 1, 1) || __LIB_0__::func_48(Global_35, iLocal_15, 30f, 1))
					{
						__LIB_2__::func_259(&uLocal_142);
					}
				}
				else if (__LIB_9__::func_178(&uLocal_142) > 5f)
				{
					StringCopy(&(uParam0->f_2578), "WARV4_F_FLW", 24);
					return true;
				}
			}
			else
			{
				if (__LIB_0__::func_899(&uLocal_142))
				{
					__LIB_1__::func_561(&uLocal_142);
				}
				if (__LIB_0__::func_48(Global_35, iLocal_15, 15f, 1))
				{
					StringCopy(&(uParam0->f_2578), "WARV4_F_FLW", 24);
					return true;
				}
			}
		}
	}
	if (func_224(uParam0))
	{
		return true;
	}
	return false;
}

void func_68(var uParam0)
{
	__LIB_14__::func_192(13, 1, 1);
	if (__LIB_0__::func_27(iLocal_89, 1))
	{
		if (func_227(uParam0))
		{
			__LIB_1__::func_681(&iLocal_89, 1);
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
	if (func_231(uParam0->f_174))
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
	if (func_240(uParam0) || __LIB_12__::func_663(uParam0->f_174, uParam0->f_743))
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
	func_245(uParam0);
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
	if (__LIB_12__::func_924(uParam0) && func_283(uParam0))
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
	func_302(uParam0, 0);
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
		if (uParam0->f_171 != 0 || func_304(uParam0))
		{
			if (__LIB_13__::func_40(uParam0))
			{
				return true;
			}
		}
	}
	return false;
}

int func_93(var uParam0)
{
	__LIB_0__::func_11(uParam0);
	MISC::_SET_WEATHER_TYPE(joaat("SUNNY"), true, true, true, 0f, false);
	__LIB_10__::func_832(13);
	return 6;
}

int func_96(var uParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	vector3 vVar2;
	bVar0 = true;
	iVar1 = iParam1;
	vVar2 = { func_61(iParam1) };
	PED::_0xAB0D553FE20A6E25(0f);
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	if ((iVar1 == 4 || iVar1 == 5) || iVar1 == 6)
	{
		if (!func_227(uParam0))
		{
			__LIB_0__::func_568(func_214(47), 100f, 0);
			bVar0 = false;
		}
	}
	else if (!func_227(uParam0))
	{
		__LIB_0__::func_568(func_214(42), 500f, 0);
		__LIB_2__::func_761(func_214(42), 500f, 0, 0);
		__LIB_1__::func_572(func_214(42), 500f, 0, 0, 1, 1, 0);
		bVar0 = false;
	}
	if (!WEAPON::HAS_PED_GOT_WEAPON(iLocal_15, joaat("WEAPON_REPEATER_CARBINE"), 0, false))
	{
		__LIB_1__::func_766(iLocal_15, joaat("WEAPON_REPEATER_CARBINE"), 0, 1, 0, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
	}
	if (!__LIB_12__::func_936(uParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_25[5 /*9*/]))
		{
			OBJECT::DELETE_OBJECT(&(Local_25[5 /*9*/]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_25[3 /*9*/]))
		{
			OBJECT::DELETE_OBJECT(&(Local_25[3 /*9*/]));
		}
	}
	if (bVar0 && iVar1 < 4)
	{
		PED::_0x9851DE7AEC10B4E1(vVar2, 120f, 1, 0);
	}
	switch (iVar1)
	{
		case 0:
			if (__LIB_12__::func_936(uParam0))
			{
				if (!__LIB_0__::func_1(uParam0->f_172, 16))
				{
					__LIB_13__::func_33(uParam0, 0);
					func_87(uParam0);
				}
				__LIB_13__::func_62(uParam0, func_61(0), func_61(1), 0, 1, 0);
				return 5;
			}
			else
			{
				if (!bVar0)
				{
					return 2;
				}
				if (!PED::_0xA0BC8FAED8CFEB3C(vLocal_187.x))
				{
					return 2;
				}
				if (!PED::_0x91A5F9CBEBB9D936(uLocal_298) && VOLUME::_DOES_VOLUME_EXIST(iLocal_175[4]))
				{
					uLocal_298 = __LIB_1__::func_391(iLocal_175[4], 0, 0, 0);
					return 2;
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_17))
				{
					if (__LIB_12__::func_637(&iLocal_17, 1703.689f, 1534.333f, 146.5853f, func_215(3), 1, 0, 1, 1))
					{
						func_317(1703.689f, 1534.333f, 146.5853f, func_215(3));
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_17, func_214(3), func_215(3), true, false, true);
					}
					return 2;
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_16))
				{
					PHYSICS::_0x0348469DAA17576C(iLocal_16);
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_16, 1706.568f, 1527.746f, 146.3831f, 269.1177f, true, false, true);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_15))
				{
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_15, func_214(8), func_215(8), true, false, true);
					WEAPON::SET_CURRENT_PED_WEAPON(iLocal_15, WEAPON::GET_BEST_PED_WEAPON(iLocal_15, false, false), true, 0, false, false);
				}
				if (!ENTITY::IS_ENTITY_DEAD(vLocal_187.x))
				{
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(vLocal_187.x, 1711.425f, 1465.238f, 146.3654f, 210.44f, true, false, true);
				}
				func_318(0);
				func_319();
				PED::FORCE_PED_MOTION_STATE(vLocal_187.x, joaat("MOTIONSTATE_RUN"), false, 0, false);
				PED::FORCE_PED_MOTION_STATE(Global_35, joaat("MOTIONSTATE_RUN"), false, 0, false);
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::GET_PLAYER_INDEX(), 2f, 2000, 0f, true, false);
				PED::_0x2208438012482A1A(Global_35, false, false);
				__LIB_1__::func_683(&iLocal_89, 65536);
				MISC::_SET_WEATHER_TYPE(joaat("SUNNY"), true, true, true, 0f, false);
				CLOCK::SET_CLOCK_TIME(13, 0, 0);
				__LIB_13__::func_62(uParam0, func_61(0), func_61(1), 0, 1, 0);
				__LIB_13__::func_105(1, 1);
				return 7;
			}
			break;
		case 1:
			if (!bVar0)
			{
				return 2;
			}
			if (!PED::_0x91A5F9CBEBB9D936(uLocal_298) && VOLUME::_DOES_VOLUME_EXIST(iLocal_175[4]))
			{
				uLocal_298 = __LIB_1__::func_391(iLocal_175[4], 0, 0, 0);
				return 2;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_17))
			{
				if (__LIB_12__::func_637(&iLocal_17, 1794.385f, 1406.89f, 173.5448f, 219.3104f, 1, 0, 1, 1))
				{
					func_317(1794.385f, 1406.89f, 173.5448f, 219.3104f);
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_17, 1794.385f, 1406.89f, 173.5448f, 219.3104f, true, false, true);
				}
				return 2;
			}
			if (!func_322())
			{
				return 2;
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_15) && !ENTITY::IS_ENTITY_DEAD(iLocal_16))
			{
				PHYSICS::_0x0348469DAA17576C(iLocal_16);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_16, 1796.465f, 1404.579f, 174.6615f, 218.0253f, true, false, true);
				__LIB_1__::func_571(iLocal_15, iLocal_16, 0, -1, 1);
				WEAPON::SET_CURRENT_PED_WEAPON(iLocal_15, WEAPON::GET_BEST_PED_WEAPON(iLocal_15, false, false), true, 0, false, false);
			}
			if (!ENTITY::IS_ENTITY_DEAD(vLocal_187.x))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(vLocal_187.x, func_214(11), func_215(11), true, false, true);
			}
			func_318(1);
			func_324();
			func_325();
			__LIB_1__::func_683(&iLocal_90, 1);
			MISC::_SET_WEATHER_TYPE(joaat("SUNNY"), true, true, true, 0f, false);
			CLOCK::SET_CLOCK_TIME(13, 0, 0);
			__LIB_13__::func_62(uParam0, func_61(1), func_61(2), 1, 2, 0);
			__LIB_13__::func_105(1, 1);
			if (iLocal_14 != 1)
			{
				iLocal_14 = 1;
			}
			return 7;
		case 2:
			if (!bVar0)
			{
				return 2;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_17))
			{
				if (__LIB_12__::func_637(&iLocal_17, 1834.429f, 1403.438f, 180.4565f, func_215(44), 1, 0, 1, 1))
				{
					func_317(func_214(44), func_215(44));
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_17, func_214(44), func_215(44), true, false, true);
					__LIB_1__::func_571(Global_35, iLocal_17, 0, -1, 1);
				}
				return 2;
			}
			if (!func_322())
			{
				return 2;
			}
			func_318(2);
			__LIB_1__::func_683(&iLocal_90, 32);
			__LIB_1__::func_683(&iLocal_90, 1);
			func_325();
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_15) && !ENTITY::IS_ENTITY_DEAD(iLocal_16))
			{
				PHYSICS::_0x0348469DAA17576C(iLocal_16);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_16, func_214(22), func_215(22), true, false, true);
				__LIB_1__::func_571(iLocal_15, iLocal_16, 0, -1, 1);
				WEAPON::SET_CURRENT_PED_WEAPON(iLocal_15, WEAPON::GET_BEST_PED_WEAPON(iLocal_15, false, false), true, 0, false, false);
			}
			if (!ENTITY::IS_ENTITY_DEAD(vLocal_187.x))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(vLocal_187.x, func_214(11), func_215(11), true, false, true);
			}
			MISC::_SET_WEATHER_TYPE(joaat("SUNNY"), true, true, true, 0f, false);
			CLOCK::SET_CLOCK_TIME(13, 0, 0);
			__LIB_13__::func_62(uParam0, func_61(2), func_61(3), 2, 3, 0);
			__LIB_13__::func_105(1, 1);
			if (iLocal_14 != 1)
			{
				iLocal_14 = 1;
			}
			return 7;
		case 3:
			if ((!PED::_0xA0BC8FAED8CFEB3C(vLocal_187.x) || !PED::_0xA0BC8FAED8CFEB3C(iLocal_15)) || !PED::_0xA0BC8FAED8CFEB3C(iLocal_16))
			{
				return 2;
			}
			if (!bVar0)
			{
				return 2;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_17))
			{
				if (__LIB_12__::func_637(&iLocal_17, 1870.679f, 1298.759f, 203.2255f, func_215(45), 1, 0, 1, 1))
				{
					func_317(func_214(45), func_215(45));
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_17, func_214(45), func_215(45), true, false, true);
					__LIB_1__::func_571(Global_35, iLocal_17, 0, -1, 1);
				}
				return 2;
			}
			if (!func_322())
			{
				return 2;
			}
			if (!__LIB_0__::func_27(iLocal_87, 4))
			{
				__LIB_1__::func_683(&iLocal_87, 4);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_15))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_15, func_214(18), func_215(18), true, false, true);
				WEAPON::SET_CURRENT_PED_WEAPON(iLocal_15, WEAPON::GET_BEST_PED_WEAPON(iLocal_15, false, false), true, 0, false, false);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_16))
			{
				PHYSICS::_0x0348469DAA17576C(iLocal_16);
			}
			if (!ENTITY::IS_ENTITY_DEAD(vLocal_187.x))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(vLocal_187.x, func_214(20), func_215(20), true, false, true);
			}
			__LIB_1__::func_683(&iLocal_90, 8192);
			__LIB_1__::func_683(&iLocal_87, 32768);
			__LIB_1__::func_683(&iLocal_87, 65536);
			__LIB_1__::func_683(&iLocal_87, 131072);
			__LIB_1__::func_683(&iLocal_87, 262144);
			__LIB_1__::func_683(&iLocal_90, 32);
			__LIB_1__::func_683(&iLocal_90, 1);
			__LIB_1__::func_683(&iLocal_89, 2048);
			bLocal_301 = true;
			func_326();
			func_318(2);
			func_327();
			iLocal_186 = 2;
			MISC::_SET_WEATHER_TYPE(joaat("SUNNY"), true, true, true, 0f, false);
			CLOCK::SET_CLOCK_TIME(13, 0, 0);
			__LIB_13__::func_62(uParam0, func_61(3), func_61(4), 3, 4, 0);
			__LIB_13__::func_105(1, 1);
			if (iLocal_14 != 6)
			{
				iLocal_14 = 6;
			}
			return 7;
		case 4:
			if (!bVar0)
			{
				return 2;
			}
			if (!func_328(1, 0, func_187(4)))
			{
				return 2;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_17))
			{
				if (__LIB_12__::func_637(&iLocal_17, 2028.267f, 1269.983f, 173.4273f, func_215(29), 1, 0, 1, 1))
				{
					func_317(func_214(29), func_215(29));
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_17, func_214(29), func_215(29), true, false, true);
					TASK::TASK_STAND_STILL(iLocal_17, -1);
				}
				return 2;
			}
			if (!__LIB_0__::func_27(iLocal_87, 268435456))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_15))
				{
					PED::_0x9851DE7AEC10B4E1(vVar2, 120f, 1, 0);
					func_329(1, 0);
					__LIB_1__::func_683(&iLocal_87, 268435456);
				}
			}
			else
			{
				func_302(uParam0, 1);
				if (!__LIB_0__::func_1(uParam0->f_172, 1))
				{
					return 2;
				}
				if (PED::IS_PED_RAGDOLL(iLocal_15))
				{
					return 2;
				}
				GRAPHICS::_0xDFCE8CE9F3EBE93F(iLocal_15);
				if (!ENTITY::IS_ENTITY_DEAD(vLocal_187.x))
				{
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(vLocal_187.x, func_214(24), func_215(24), true, false, true);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_16))
				{
					PHYSICS::_0x0348469DAA17576C(iLocal_16);
				}
				func_330();
				func_318(4);
				__LIB_1__::func_683(&iLocal_90, 32);
				__LIB_1__::func_683(&iLocal_90, 1);
				MISC::_SET_WEATHER_TYPE(joaat("SUNNY"), true, true, true, 0f, false);
				CLOCK::SET_CLOCK_TIME(13, 0, 0);
				__LIB_13__::func_62(uParam0, func_61(4), func_61(5), 4, 5, 0);
				__LIB_13__::func_105(1, 1);
				if (iLocal_14 != 7)
				{
					iLocal_14 = 7;
				}
				return 5;
			}
			return 2;
		case 5:
			__LIB_14__::func_201();
			if (!bVar0)
			{
				return 2;
			}
			if (!func_328(2, 0, func_187(5)))
			{
				return 2;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_17))
			{
				if (__LIB_12__::func_637(&iLocal_17, 2028.267f, 1269.983f, 173.4273f, func_215(29), 1, 0, 1, 1))
				{
					func_317(func_214(29), func_215(29));
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_17, func_214(29), func_215(29), true, false, true);
					TASK::TASK_STAND_STILL(iLocal_17, -1);
				}
				return 2;
			}
			if (!__LIB_0__::func_27(iLocal_87, 268435456))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_15))
				{
					PED::_0x9851DE7AEC10B4E1(vVar2, 120f, 1, 0);
					func_329(1, 1);
					__LIB_1__::func_683(&iLocal_87, 268435456);
				}
			}
			else if (!__LIB_0__::func_899(&uLocal_148))
			{
				if (PED::IS_PED_RAGDOLL(iLocal_15) || !ENTITY::IS_ENTITY_DEAD(iLocal_15))
				{
					return 2;
				}
				GRAPHICS::_0xDFCE8CE9F3EBE93F(iLocal_15);
				if (!ENTITY::IS_ENTITY_DEAD(vLocal_187.x))
				{
					PED::APPLY_PED_DAMAGE_PACK(vLocal_187.x, "PD_War_Vetetran_Legendary_boar", 0f, 1f);
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(vLocal_187.x, func_214(31), func_215(31), true, false, true);
					ENTITY::_0x9587913B9E772D29(vLocal_187.x, 0);
				}
				func_332();
				__LIB_1__::func_683(&iLocal_89, 524288);
				__LIB_2__::func_259(&uLocal_148);
				return 2;
			}
			else if (__LIB_9__::func_178(&uLocal_148) > 0.5f)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_16))
				{
					PHYSICS::_0x0348469DAA17576C(iLocal_16);
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_16, func_214(30), func_215(30), true, false, true);
					TASK::TASK_STAND_STILL(iLocal_16, -1);
				}
				func_318(5);
				__LIB_1__::func_683(&iLocal_90, 32);
				__LIB_1__::func_683(&iLocal_90, 1);
				MISC::_SET_WEATHER_TYPE(joaat("SUNNY"), true, true, true, 0f, false);
				CLOCK::SET_CLOCK_TIME(13, 0, 0);
				__LIB_4__::func_791(0);
				__LIB_4__::func_791(1);
				__LIB_13__::func_62(uParam0, func_61(5), func_61(6), 5, 6, 0);
				__LIB_13__::func_105(1, 1);
				__LIB_3__::func_595(ENTITY::GET_ENTITY_COORDS(vLocal_187.x, false, false));
				if (iLocal_14 != 8)
				{
					iLocal_14 = 8;
				}
				bLocal_306 = true;
				__LIB_1__::func_561(&uLocal_148);
				return 7;
			}
			return 2;
		case 6:
			if (!bVar0)
			{
				return 2;
			}
			if (!func_328(2, 0, func_187(5)))
			{
				return 2;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_17))
			{
				if (__LIB_12__::func_637(&iLocal_17, 2028.267f, 1269.983f, 173.4273f, func_215(29), 1, 0, 1, 1))
				{
					func_317(func_214(29), func_215(29));
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_17, func_214(29), func_215(29), true, false, true);
					TASK::TASK_STAND_STILL(iLocal_17, -1);
				}
				return 2;
			}
			if (!__LIB_0__::func_27(iLocal_87, 268435456))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_15))
				{
					PED::_0x9851DE7AEC10B4E1(vVar2, 120f, 1, 0);
					func_329(1, 1);
					__LIB_1__::func_683(&iLocal_87, 268435456);
				}
			}
			else if (!__LIB_0__::func_27(iLocal_87, 536870912))
			{
				if (!ENTITY::IS_ENTITY_DEAD(vLocal_187.x))
				{
					PED::APPLY_PED_DAMAGE_PACK(vLocal_187.x, "PD_War_Vetetran_Legendary_boar", 0f, 1f);
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(vLocal_187.x, func_214(32), func_215(32), true, false, true);
					ENTITY::_0x9587913B9E772D29(vLocal_187.x, 0);
					ENTITY::_SET_ENTITY_HEALTH(vLocal_187.x, 0, 0);
					__LIB_1__::func_683(&iLocal_87, 536870912);
				}
			}
			else
			{
				if ((PED::IS_PED_RAGDOLL(iLocal_15) || PED::IS_PED_RAGDOLL(vLocal_187.x)) || !ENTITY::IS_ENTITY_DEAD(iLocal_15))
				{
					return 2;
				}
				if (!AUDIO::PREPARE_MUSIC_EVENT("RWARV4_COMPLETE"))
				{
					return 2;
				}
				if (!__LIB_0__::func_899(&uLocal_164))
				{
					__LIB_2__::func_259(&uLocal_164);
				}
				else if (__LIB_9__::func_178(&uLocal_164) > 5f)
				{
					GRAPHICS::_0xDFCE8CE9F3EBE93F(iLocal_15);
					GRAPHICS::_0xDFCE8CE9F3EBE93F(vLocal_187.x);
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_16))
					{
						PHYSICS::_0x0348469DAA17576C(iLocal_16);
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_16, func_214(30), func_215(30), true, false, true);
						TASK::TASK_STAND_STILL(iLocal_16, -1);
					}
					func_318(6);
					__LIB_1__::func_683(&iLocal_90, 32);
					__LIB_1__::func_683(&iLocal_90, 1);
					MISC::_SET_WEATHER_TYPE(joaat("SUNNY"), true, true, true, 0f, false);
					CLOCK::SET_CLOCK_TIME(13, 0, 0);
					__LIB_13__::func_105(1, 1);
					if (iLocal_14 != 8)
					{
						iLocal_14 = 8;
					}
					bLocal_306 = true;
					__LIB_1__::func_561(&uLocal_164);
					__LIB_3__::func_353("RWARV4_COMPLETE", 1);
					func_336(uParam0, 1048576, 1);
					return 7;
				}
			}
			return 2;
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
	return func_349(Var0, &(uParam0->f_206), uParam0);
}

int func_103(var uParam0)
{
	switch (iLocal_182)
	{
		case 0:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_16))
			{
				PHYSICS::_0x0348469DAA17576C(iLocal_16);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_16, 1706.568f, 1527.746f, 146.3831f, 269.1177f, true, false, true);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_25[5 /*9*/]))
			{
				OBJECT::DELETE_OBJECT(&(Local_25[5 /*9*/]));
			}
			if (!__LIB_0__::func_27(iLocal_89, 4))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_25[3 /*9*/]))
				{
					OBJECT::DELETE_OBJECT(&(Local_25[3 /*9*/]));
				}
				__LIB_1__::func_683(&iLocal_89, 4);
			}
			func_318(0);
			return 7;
		case 1:
			TASK::TASK_CLEAR_LOOK_AT(Global_35);
			func_318(5);
			return 7;
		case 2:
			break;
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
		if (func_353(&(uParam0->f_753), uParam0->f_2581, uParam0->f_2571, bParam1))
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
	__LIB_3__::func_414(&uLocal_86, 1800.95f, 1387.727f, 179.778f, 5f, 1, 4, 0);
	if (iLocal_183 < 1)
	{
		if (!__LIB_0__::func_27(iLocal_87, 2097152))
		{
			__LIB_14__::func_199(0, __LIB_1__::func_344("WARV4_H_HORSE"));
			__LIB_1__::func_683(&iLocal_87, 2097152);
		}
	}
	else if (__LIB_0__::func_27(iLocal_90, 32))
	{
		if (__LIB_0__::func_27(iLocal_87, 2097152))
		{
			__LIB_14__::func_199(1, __LIB_1__::func_344(""));
			__LIB_1__::func_681(&iLocal_87, 2097152);
		}
	}
	if (!__LIB_0__::func_27(iLocal_87, 67108864))
	{
		if (__LIB_4__::func_61(vLocal_187.x, sLocal_95, 1, 1061360239 /* Float: 0.762f */, 1053609165 /* Float: 0.4f */, 0, 0, 1))
		{
			__LIB_1__::func_683(&iLocal_87, 67108864);
		}
	}
	else if (!__LIB_0__::func_27(iLocal_87, 33554432))
	{
		if (__LIB_4__::func_61(vLocal_187.x, sLocal_98, 1, 1061360239 /* Float: 0.762f */, 1053609165 /* Float: 0.4f */, 0, 0, 1))
		{
			__LIB_1__::func_683(&iLocal_87, 33554432);
		}
	}
	else if (!__LIB_0__::func_27(iLocal_87, 16777216))
	{
		if (__LIB_4__::func_61(vLocal_187.x, sLocal_99, 1, 1061360239 /* Float: 0.762f */, 1053609165 /* Float: 0.4f */, 0, 0, 1))
		{
			__LIB_1__::func_683(&iLocal_87, 16777216);
		}
	}
	else if (!bLocal_307)
	{
		if (iLocal_183 == 3 || iLocal_183 == 4)
		{
			if (__LIB_4__::func_61(vLocal_187.x, sLocal_101, 1, 1061360239 /* Float: 0.762f */, 1053609165 /* Float: 0.4f */, 0, 0, 1))
			{
				bLocal_307 = true;
			}
		}
	}
	func_359(uParam0);
	func_360(uParam0);
	if (!__LIB_0__::func_27(iLocal_87, 4096))
	{
		if (__LIB_0__::func_266(Global_35, func_214(4), 150f, 1, 1))
		{
			iLocal_23 = __LIB_12__::func_885(uParam0, iLocal_22, func_214(4), 0, 1, 1, 0, 1, 1, 1, 1, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_23))
			{
				STREAMING::REQUEST_ANIM_DICT("CREATURES_MAMMAL@WOLF_SMALL@NORMAL@DEAD");
				if (STREAMING::HAS_ANIM_DICT_LOADED("CREATURES_MAMMAL@WOLF_SMALL@NORMAL@DEAD"))
				{
					PED::SET_PED_CONFIG_FLAG(iLocal_23, 66, true);
					ENTITY::_0x18FF3110CF47115D(iLocal_23, 7, 0);
					__LIB_3__::func_459(iLocal_23, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_23, true);
					TASK::TASK_PLAY_ANIM(iLocal_23, "CREATURES_MAMMAL@WOLF_SMALL@NORMAL@DEAD", "dead_left", 1000f, -8f, -1, 131072, 0f, false, 0, false, 0, false);
					PED::APPLY_PED_DAMAGE_PACK(iLocal_23, "PD_War_Veteran_Dead_Wolf", 0f, 1f);
					GRAPHICS::_ADD_BLOOD_POOL_2(1796.472f, 1306.081f, 199.5498f, 0.9f, 0.9f, 1f, true, NaNf, false);
					__LIB_3__::func_414(&uLocal_84, func_214(4), 2.25f, 1, -1, 0);
					if (!PLAYER::_0x0E6846476906C9DD(PLAYER::GET_PLAYER_INDEX(), iLocal_23))
					{
						PLAYER::_0x543DFE14BE720027(PLAYER::GET_PLAYER_INDEX(), iLocal_23, 0);
						PLAYER::_0x6ECFC621A168424C(iLocal_23, iLocal_23, 0, 0);
					}
					STREAMING::REMOVE_ANIM_DICT("CREATURES_MAMMAL@WOLF_SMALL@NORMAL@DEAD");
					__LIB_1__::func_683(&iLocal_87, 4096);
				}
			}
		}
	}
	else
	{
		GRAPHICS::_0xB032C085D9A03907();
		if (!__LIB_0__::func_27(iLocal_87, 4194304))
		{
			if (func_363(uParam0))
			{
				__LIB_1__::func_683(&iLocal_87, 4194304);
			}
		}
	}
	switch (iLocal_183)
	{
		case 0:
			func_364(uParam0);
			break;
		case 1:
			func_365(uParam0);
			break;
		case 2:
			func_366(uParam0);
			break;
		case 4:
			if (func_367(uParam0))
			{
				return 5;
			}
			break;
		case 5:
			func_368(uParam0);
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
		func_404(Global_1347702[iParam0 /*49*/].f_15, bParam4, bParam2, bParam6, bParam5);
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
	vVar2 = { func_408(Global_2621440[0 /*12066*/].f_9.f_7, &uVar0, &uVar1, 0, 1, 1, 0, 0, 0) };
	__LIB_0__::func_321(vVar2, uVar1, uVar0, 0);
	__LIB_0__::func_322(vVar2);
	Global_40.f_9.f_15 = __LIB_1__::func_447(vVar2, 0);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	MISC::SET_RANDOM_WEATHER_TYPE(false, true);
}

bool func_150(var uParam0)
{
	if (__LIB_12__::func_644(uParam0) == 0)
	{
		func_432();
		if (!__LIB_0__::func_266(Global_35, func_214(25), 150f, 1, 1))
		{
			return true;
		}
		else if (!bLocal_305)
		{
			if (__LIB_0__::func_394(Global_35, iLocal_16, 1))
			{
				if (!__LIB_6__::func_904())
				{
					if (func_336(uParam0, 2097152, 1))
					{
						__LIB_1__::func_715(12, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
						bLocal_305 = true;
					}
				}
			}
		}
		else if (bLocal_395)
		{
			return true;
		}
	}
	else if (__LIB_0__::func_266(Global_35, func_214(0), 150f, 0, 1))
	{
		return false;
	}
	else
	{
		return true;
	}
	return false;
}

void func_159(var uParam0)
{
	int iVar0;
	func_436(uParam0);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_314[iVar0 /*16*/]))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(Local_314[iVar0 /*16*/]);
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(vLocal_187.x))
	{
		PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(vLocal_187.x, 0);
	}
	__LIB_2__::func_788(&vLocal_187, 1, 0, 1);
	__LIB_1__::func_281(&iLocal_396, 1, 1);
	__LIB_2__::func_788(&iLocal_16, 1, 0, 1);
}

char* func_187(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "pl_Investigate_Right";
		case 1:
			return "pl_Investigate_Left";
		case 3:
			return "pl_Investigate_Back";
		case 2:
			return "pl_Investigate_Front";
		case 4:
			return "pl_base";
		case 5:
			return "pl_base";
	}
	return "";
}

void func_190()
{
	__LIB_13__::func_634(&uLocal_191);
}

void func_191()
{
	Local_25[0 /*9*/].f_1 = { 1697.346f, 1512.239f, 147.3227f };
	Local_25[0 /*9*/].f_4 = { -0.42f, 0.5f, -51.56f };
	Local_25[0 /*9*/].f_7 = joaat("P_CHAIR17X");
	Local_25[1 /*9*/].f_1 = { 1697.78f, 1510.45f, 146.86f };
	Local_25[1 /*9*/].f_4 = { -1.27f, -1.09f, 176.24f };
	Local_25[1 /*9*/].f_7 = joaat("P_CHAIR17X");
	Local_25[2 /*9*/].f_1 = { 1698.26f, 1510.37f, 146.88f };
	Local_25[2 /*9*/].f_4 = { 4.06f, -28.66f, -78.35f };
	Local_25[2 /*9*/].f_7 = joaat("P_CRUTCHJOE01X");
	Local_25[3 /*9*/].f_1 = { 1698.43f, 1510.82f, 147.56f };
	Local_25[3 /*9*/].f_4 = { -6.93f, 13.18f, 32.13f };
	Local_25[3 /*9*/].f_7 = joaat("P_CS_PROSTHETICLEG_01BX");
	Local_25[4 /*9*/].f_1 = { 1697.46f, 1508.24f, 146.88f };
	Local_25[4 /*9*/].f_4 = { 0f, 0f, 100f };
	Local_25[4 /*9*/].f_7 = joaat("P_DOOR41X");
	Local_25[5 /*9*/].f_1 = { 1699.48f, 1508.25f, 147.14f };
	Local_25[5 /*9*/].f_4 = { 65.77f, -74.58f, -68.14f };
	Local_25[5 /*9*/].f_7 = joaat("W_REPEATER_CARBINE01");
}

int func_192(var uParam0)
{
	if (iLocal_182 == 0)
	{
		__LIB_0__::func_11(&(uParam0->f_206));
	}
	else if (iLocal_182 == 1)
	{
		func_471(&(uParam0->f_206));
	}
	return 1;
}

int func_194(var uParam0)
{
	if (iLocal_182 == 0)
	{
		func_472(uParam0, &(uParam0->f_206));
	}
	else if (iLocal_182 == 1)
	{
		func_473(&(uParam0->f_206));
	}
	return 1;
}

int func_196(var uParam0)
{
	if (iLocal_182 == 0)
	{
		if (func_474(uParam0, &(uParam0->f_206)))
		{
			return 1;
		}
	}
	else if (iLocal_182 == 1)
	{
		if (func_475(&(uParam0->f_206)))
		{
			return 1;
		}
	}
	return 0;
}

int func_208(int iParam0)
{
	vector3 vVar0;
	int iVar4;
	int iVar5;
	iVar4 = -899457438;
	iVar5 = 0;
	while (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(iVar4))
	{
		if (UIEVENTS::_EVENT_MANAGER_PEEK_EVENT(iVar4, &vVar0))
		{
			switch (vVar0.x)
			{
				case -1203660660:
					if (vVar0.z == 2338895)
					{
						if (UIAPPS::_IS_APP_ACTIVE_BY_HASH(joaat("PLAYER_MENU")))
						{
							UIAPPS::_CLOSE_APP_BY_HASH(joaat("PLAYER_MENU"));
						}
						iVar5 = 1;
					}
					break;
				case -1740156697:
					if (iVar5 != 1)
					{
						*iParam0 = func_497(vVar0.z);
						iVar5 = 3;
					}
					break;
				case 922460030:
					iVar5 = 2;
					break;
				default:
					break;
			}
			UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar4);
		}
	}
	return iVar5;
}

Vector3 func_214(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1698.729f, 1510.731f, 146.8705f;
		case 1:
			return 1692.347f, 1510.775f, 145.7258f;
		case 2:
			return 1693.226f, 1510.724f, 145.7994f;
		case 3:
			return 1703.689f, 1534.333f, 146.5853f;
		case 4:
			return 1796.28f, 1306.11f, 199.53f;
		case 5:
			return 1796.742f, 1305.913f, 199.564f;
		case 6:
			return 1795.67f, 1306.13f, 199.5138f;
			Jump @1287; //curOff = 444
			return 1703.78f, 1491.745f, 145.2095f;
			Jump @1287; //curOff = 465
			return 1695.546f, 1515.438f, 145.8739f;
			Jump @1287; //curOff = 486
			return 1702.139f, 1490.009f, 145.3094f;
			Jump @1287; //curOff = 507
			return 1774.609f, 1365.914f, 178.1438f;
			Jump @1287; //curOff = 528
			return 2337.475f, 1199.845f, 95.5578f;
			Jump @1287; //curOff = 549
			return 1839.127f, 1403.981f, 180.3736f;
			Jump @1287; //curOff = 570
			return 1815.226f, 1319.411f, 200.9446f;
			Jump @1287; //curOff = 591
			return 1871.261f, 1299.251f, 203.1567f;
			Jump @1287; //curOff = 612
			return 1944.883f, 1336.552f, 190.2425f;
			Jump @1287; //curOff = 633
			return 1938.382f, 1334.153f, 188.7749f;
			Jump @1287; //curOff = 654
			return 1871.261f, 1323.063f, 205.6636f;
			Jump @1287; //curOff = 675
			return 1872.146f, 1309.338f, 203.6844f;
			Jump @1287; //curOff = 696
			return 1870.284f, 1291.475f, 208.3899f;
			Jump @1287; //curOff = 717
			return 1868.945f, 1299.276f, 203.798f;
			Jump @1287; //curOff = 738
			return 1995.705f, 1321.08f, 192.4023f;
			Jump @1287; //curOff = 759
			return 2337.475f, 1199.845f, 95.6578f;
			Jump @1287; //curOff = 780
			return 2022.609f, 1262.751f, 172.3457f;
			Jump @1287; //curOff = 801
			return 2017.842f, 1301.167f, 186.7185f;
			Jump @1287; //curOff = 822
			return 2020.852f, 1261.757f, 172.4989f;
			Jump @1287; //curOff = 843
			return 2020.475f, 1263.357f, 172.611f;
			Jump @1287; //curOff = 864
			return 2028.267f, 1269.983f, 173.4273f;
			Jump @1287; //curOff = 885
			return 2027.876f, 1262.083f, 171.3724f;
			Jump @1287; //curOff = 906
			return 2013.279f, 1258.304f, 174.2547f;
			Jump @1287; //curOff = 927
			return 2019.491f, 1264.109f, 172.8435f;
			Jump @1287; //curOff = 948
			return 1699.458f, 1510.415f, 146.8705f;
			Jump @1287; //curOff = 969
			return 1699.458f, 1510.415f, 146.8705f;
			Jump @1287; //curOff = 990
			return 1694.348f, 1505.571f, 145.8918f;
			Jump @1287; //curOff = 1011
			return 1699.561f, 1509.082f, 146.871f;
			Jump @1287; //curOff = 1032
			return 1698.807f, 1508.55f, 146.8713f;
			Jump @1287; //curOff = 1053
			return 1696.343f, 1507.33f, 146.8547f;
			Jump @1287; //curOff = 1074
			return 1705.712f, 1483.683f, 145.4519f;
			Jump @1287; //curOff = 1095
			return 1705.712f, 1483.683f, 145.4519f;
			Jump @1287; //curOff = 1116
			return 1711.33f, 1489.477f, 145.7569f;
			Jump @1287; //curOff = 1137
			return 1697.208f, 1503.657f, 145.9753f;
			Jump @1287; //curOff = 1158
			return 1773.849f, 1363.276f, 178.1585f;
			Jump @1287; //curOff = 1179
			return 1834.429f, 1403.438f, 180.4565f;
			Jump @1287; //curOff = 1200
			return 1870.679f, 1298.759f, 203.2255f;
			Jump @1287; //curOff = 1221
			return 2020.475f, 1263.357f, 172.611f;
			Jump @1287; //curOff = 1242
			return 2022.846f, 1265.211f, 172.5426f;
			Jump @1287; //curOff = 1263
			return 2022.846f, 1265.211f, 172.5426f;
			return 0f, 0f, 0f;
		}
float func_215(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 83.0065f;
		case 1:
			return 286.054f;
		case 2:
			return 289.5211f;
		case 3:
			return 255.4328f;
		case 4:
			return 30f;
		case 5:
			return 56.262f;
		case 6:
			return 262.435f;
		case 7:
			return 155.9759f;
		case 8:
			return 358.5644f;
		case 9:
			return 189.759f;
		case 10:
			return 267.5273f;
		case 11:
			return 169.7818f;
		case 22:
			return 220.4346f;
		case 18:
			return 276.9328f;
		case 20:
			return 286.5042f;
		case 24:
			return 169.7818f;
		case 25:
			return 284.8398f;
		case 28:
			return 166.6727f;
		case 29:
			return 171.1111f;
		case 30:
			return 87.17f;
		case 31:
			return -51.08f;
		case 32:
			return 299.0467f;
		case 33:
			return 215.6047f;
		case 34:
			return 215.6047f;
		case 35:
			return 225.6064f;
		case 36:
			return 275.3828f;
		case 37:
			return 208.4948f;
		case 38:
			return 222.7921f;
		case 39:
			return 341.9126f;
		case 40:
			return 341.9126f;
		case 41:
			return 274.733f;
		case 42:
			return 200.1708f;
		case 43:
			return 314.4036f;
		case 44:
			return 251.0137f;
		case 45:
			return 305.7183f;
		case 46:
			return 166.6727f;
		case 47:
			return 126.3923f;
		case 48:
			return 126.3923f;
	}
	return 0f;
}

int func_216(vector3 vParam0, var uParam3)
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
		iVar0 = func_509(0, 0);
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

bool func_217(int iParam0)
{
	struct<28> Var0;
	var uVar28;
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
	__LIB_2__::func_828(&Var0, 1);
	__LIB_1__::func_413(&Var0, 0);
	__LIB_2__::func_829(&Var0, 1);
	__LIB_1__::func_402(&Var0, 0);
	__LIB_1__::func_401(&Var0, 0);
	__LIB_2__::func_830(&Var0, 0);
	__LIB_1__::func_399(&Var0, 0);
	__LIB_1__::func_404(&Var0, 0);
	__LIB_1__::func_398(&Var0, 0);
	__LIB_1__::func_403(&Var0, 0);
	if (!__LIB_0__::func_272(*iParam0, 1))
	{
		return true;
	}
	if (FIRE::IS_ENTITY_ON_FIRE(*iParam0))
	{
		return true;
	}
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*iParam0, Global_35, 1, 1))
	{
		return true;
	}
	if (__LIB_2__::func_901(*iParam0, Global_35))
	{
		return true;
	}
	if (__LIB_9__::func_677(*iParam0, 0, &Var0, &uVar28, 0, 0))
	{
		return true;
	}
	return false;
}

bool func_224(var uParam0)
{
	switch (iLocal_183)
	{
		case 0:
			if (VOLUME::_DOES_VOLUME_EXIST(iLocal_175[0]))
			{
				if (!__LIB_0__::func_393(Global_35, iLocal_175[0], 0, 1))
				{
					StringCopy(&(uParam0->f_2578), "RWARV_F_DIST", 24);
					return true;
				}
			}
			break;
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_15))
			{
				if (iLocal_185 == 4 || __LIB_0__::func_27(iLocal_90, 32))
				{
					if (!__LIB_0__::func_48(Global_35, iLocal_15, 80f, 1))
					{
						StringCopy(&(uParam0->f_2578), "RWARV_F_DIST", 24);
						return true;
					}
				}
				else if (!__LIB_0__::func_48(Global_35, iLocal_15, 200f, 1))
				{
					StringCopy(&(uParam0->f_2578), "WARV4_F_FLW", 24);
					return true;
				}
			}
			break;
		case 2:
			if (VOLUME::_DOES_VOLUME_EXIST(iLocal_175[1]))
			{
				if (!__LIB_0__::func_393(Global_35, iLocal_175[1], 0, 1))
				{
					StringCopy(&(uParam0->f_2578), "WARV4_F_FLW", 24);
					return true;
				}
			}
			break;
		case 3:
			if (VOLUME::_DOES_VOLUME_EXIST(iLocal_175[1]))
			{
				if (!__LIB_0__::func_393(Global_35, iLocal_175[1], 0, 1))
				{
					StringCopy(&(uParam0->f_2578), "RWARV_F_DIST", 24);
					return true;
				}
			}
			break;
		case 4:
			if (VOLUME::_DOES_VOLUME_EXIST(iLocal_175[2]))
			{
				if (!__LIB_0__::func_393(Global_35, iLocal_175[2], 0, 1))
				{
					StringCopy(&(uParam0->f_2578), "RWARV_F_DIST", 24);
					return true;
				}
			}
			break;
	}
	return false;
}

bool func_227(var uParam0)
{
	vector3 vVar0;
	float fVar3;
	int iVar4;
	if (__LIB_0__::func_27(iLocal_87, 1))
	{
		return true;
	}
	vVar0 = { func_214(7) };
	fVar3 = func_215(7);
	iVar4 = 300;
	if (func_522(uParam0, &vLocal_187, iLocal_173, vVar0, fVar3, 1, 1, 0.8f, 0))
	{
		TASK::SET_PED_PATH_MAY_ENTER_WATER(vLocal_187.x, true);
		PED::SET_PED_CONFIG_FLAG(vLocal_187.x, 265, false);
		PED::REQUEST_PED_VISIBILITY_TRACKING(vLocal_187.x);
		ENTITY::_0x1AD922AB5038DEF3(vLocal_187.x);
		PED::SET_PED_CAN_BE_TARGETTED(vLocal_187.x, true);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(vLocal_187.x, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(vLocal_187.x, true);
		PED::SET_PED_CONFIG_FLAG(vLocal_187.x, 138, false);
		PED::SET_PED_CONFIG_FLAG(vLocal_187.x, 263, true);
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(vLocal_187.x, 31, true);
		ENTITY::_0x18FF3110CF47115D(vLocal_187.x, 7, 0);
		PED::_0xAE6004120C18DF97(vLocal_187.x, 0, 0);
		PED::_0xAE6004120C18DF97(vLocal_187.x, 1, 0);
		__LIB_3__::func_459(vLocal_187.x, 0);
		PED::SET_PED_LOD_MULTIPLIER(vLocal_187.x, 3f);
		if (!PLAYER::_0x0E6846476906C9DD(PLAYER::PLAYER_ID(), vLocal_187.x))
		{
			PLAYER::_0x543DFE14BE720027(PLAYER::PLAYER_ID(), vLocal_187.x, 0);
		}
		PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(vLocal_187.x, -2140111142 /* GXTEntry: "Giant Boar" */);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(vLocal_187.x, true, 0f);
		__LIB_1__::func_991(vLocal_187.x, 0);
		__LIB_8__::func_776(vLocal_187.x, iVar4);
		ENTITY::SET_ENTITY_INVINCIBLE(vLocal_187.x, true);
		func_525(1);
		__LIB_1__::func_683(&iLocal_87, 1);
		return true;
	}
	return false;
}

bool func_231(int iParam0)
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

int func_240(var uParam0)
{
	if ((((((func_552(&iLocal_15, 1) || func_552(&iLocal_16, 1)) || MISC::IS_BULLET_IN_AREA(1700.859f, 1508.873f, 148.4672f, 10f, true)) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(1700.859f, 1508.873f, 148.4672f, joaat("WEAPON_THROWN_MOLOTOV"), 10f, true)) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(1700.859f, 1508.873f, 148.4672f, joaat("WEAPON_THROWN_DYNAMITE"), 10f, true)) || (MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(1700.859f, 1508.873f, 148.4672f, joaat("WEAPON_BOW"), 10f, true) && __LIB_14__::func_195())) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, 1700.859f, 1508.873f, 148.4672f, 12f))
	{
		if (__LIB_12__::func_876(uParam0, "WAR_AMB_SHOOTS", 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_245(var uParam0)
{
	func_436(uParam0);
	if (__LIB_12__::func_644(uParam0) == 0)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_16))
		{
			AITRANSPORT::_0xBA8818212633500A(iLocal_16, 0, 0);
			PED::SET_PED_CONFIG_FLAG(iLocal_16, 419, false);
			PED::SET_PED_CONFIG_FLAG(iLocal_16, 367, false);
			PED::SET_PED_CONFIG_FLAG(iLocal_16, 297, true);
			ENTITY::_0x18FF3110CF47115D(iLocal_16, 9, 1);
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), iLocal_16, 33, 0, 0);
			__LIB_7__::func_345(iLocal_16, 0);
			PED::SET_PED_CONFIG_FLAG(iLocal_16, 300, false);
			PED::_0xAE6004120C18DF97(iLocal_16, 0, 1);
			PED::_0xAE6004120C18DF97(iLocal_16, 1, 1);
			__LIB_5__::func_437(iLocal_16, "HORSE_NAME_BUELL_WARVETS", 1);
			PED::SET_PED_CONFIG_FLAG(iLocal_16, 324, false);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_16, joaat("REL_DOMESTICATED_ANIMAL"));
			__LIB_1__::func_991(iLocal_16, joaat("HONOR_EVENT_STEAL_HORSE"));
		}
	}
	__LIB_14__::func_194(&iLocal_15);
	__LIB_13__::func_222(uParam0, 2);
}

void func_259(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_172, 16))
	{
		__LIB_13__::func_29(uParam0, 0);
		func_87(uParam0);
	}
}

int func_283(var uParam0)
{
	bool bVar0;
	bVar0 = true;
	if (!__LIB_14__::func_183(&iLocal_190))
	{
		bVar0 = false;
	}
	if (!func_612(uParam0))
	{
		bVar0 = false;
	}
	if (!func_613(uParam0, 1))
	{
		bVar0 = false;
	}
	if (!func_614(uParam0))
	{
		bVar0 = false;
	}
	if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_93))
	{
		bVar0 = false;
	}
	if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_94))
	{
		bVar0 = false;
	}
	if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_95))
	{
		bVar0 = false;
	}
	if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_96))
	{
		bVar0 = false;
	}
	if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_97))
	{
		bVar0 = false;
	}
	if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_98))
	{
		bVar0 = false;
	}
	if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_99))
	{
		bVar0 = false;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_175[0]))
	{
		iLocal_175[0] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1732.367f, 1429.887f, 126.9006f, 0f, 0f, 11.00001f, 100f, 150f, 100f, "MVOL_CHASE_AREA");
		bVar0 = false;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_175[1]))
	{
		iLocal_175[1] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1845.702f, 1338.13f, 137.6605f, 0f, 0f, 11.00001f, 100f, 100f, 100f, "MVOL_SEARCH_AREA");
		bVar0 = false;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_175[4]))
	{
		iLocal_175[4] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1704.214f, 1448.932f, 146.6329f, 0f, 0f, 0f, 50f, 50f, 25f, "MVOL_SCENARIO_BLOCKING_CHASE");
		bVar0 = false;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_175[2]))
	{
		iLocal_175[2] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1924.118f, 1233.23f, 137.6605f, 0f, 0f, 11.00001f, 200f, 200f, 100f, "MVOL_FIGHT_AREA");
		bVar0 = false;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_175[3]))
	{
		iLocal_175[3] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1830.759f, 1406.931f, 176.384f, 0f, 0f, 21f, 50f, 50f, 25f, "MVOL_CHASE_FAIL_AREA");
		bVar0 = false;
	}
	if (bVar0)
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_15, iLocal_190);
		if (!__LIB_0__::func_181())
		{
			__LIB_12__::func_875(uParam0, Global_35, "ARTHUR", 1);
		}
		else
		{
			__LIB_12__::func_875(uParam0, Global_35, "JOHN", 1);
		}
		return 1;
	}
	return 0;
}

void func_302(var uParam0, int iParam1)
{
	char cVar0[64];
	if (iLocal_182 == iParam1)
	{
		return;
	}
	iLocal_182 = iParam1;
	switch (iLocal_182)
	{
		case 0:
			StringCopy(&(uParam0->f_2575), "RWARV_S4_INT", 24);
			__LIB_12__::func_957(uParam0, iLocal_15, "WarVet", 0, 0, 0);
			__LIB_12__::func_957(uParam0, Global_35, 0, 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_25[0 /*9*/], "p_chair02x", 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_25[1 /*9*/], "p_chair17x", 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_25[2 /*9*/], "p_crutchjoe01x", 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_25[3 /*9*/], "p_cs_prostheticleg_01bx", 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_25[4 /*9*/], "p_door41x", 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_25[5 /*9*/], "w_repeater_carbine01", 0, 0, 0);
			__LIB_12__::func_779(uParam0, func_214(0));
			if (!__LIB_0__::func_181())
			{
				__LIB_12__::func_676(&(uParam0->f_206), "1-Arthur");
				StringCopy(&cVar0, "1-Arthur", 64);
				__LIB_13__::func_402(&(uParam0->f_206), cVar0);
			}
			else if (__LIB_3__::func_736(149, 1))
			{
				__LIB_12__::func_676(&(uParam0->f_206), "2C-IntroducingJohn");
				StringCopy(&cVar0, "2C-IntroducingJohn", 64);
				__LIB_13__::func_402(&(uParam0->f_206), cVar0);
			}
			else if (__LIB_3__::func_736(148, 1))
			{
				__LIB_12__::func_676(&(uParam0->f_206), "2B-John_Stage3");
				StringCopy(&cVar0, "2B-John_Stage3", 64);
				__LIB_13__::func_402(&(uParam0->f_206), cVar0);
			}
			else
			{
				__LIB_12__::func_676(&(uParam0->f_206), "2A-John_Stage2and3");
				StringCopy(&cVar0, "2A-John_Stage2and3", 64);
				__LIB_13__::func_402(&(uParam0->f_206), cVar0);
			}
			__LIB_0__::func_7(&(uParam0->f_172), 16);
			break;
		case 1:
			StringCopy(&(uParam0->f_2575), "RWARV_S4_MCS1", 24);
			__LIB_12__::func_779(uParam0, func_214(25));
			__LIB_12__::func_957(uParam0, iLocal_15, "WarVet", 0, 0, 0);
			__LIB_12__::func_957(uParam0, Global_35, 0, 0, 0, 0);
			__LIB_12__::func_909(&(uParam0->f_206));
			__LIB_0__::func_7(&(uParam0->f_172), 16);
			break;
		case 2:
			StringCopy(&(uParam0->f_2575), "", 24);
			__LIB_0__::func_8(&(uParam0->f_172), 16);
			break;
	}
}

bool func_304(var uParam0)
{
	float fVar0;
	if (OBJECT::_0xACD4F9831DFAD7F5(joaat("DOOR_VET_HOUSE_INT_1")) != 32)
	{
		__LIB_4__::func_389(joaat("DOOR_VET_HOUSE_INT_1"), 1, 0);
		OBJECT::_0x7F458B543006C8FE(joaat("DOOR_VET_HOUSE_INT_1"), 32);
	}
	if (PED::_IS_PED_CARRYING(Global_35) && __LIB_0__::func_94(Global_35, 1697.328f, 1508.81f, 147.771f, 1) < 0.75f)
	{
		__LIB_5__::func_20(0, 0);
		__LIB_1__::func_561(&uLocal_102);
		OBJECT::_0x0C0A373D181BF900(joaat("DOOR_VET_HOUSE_INT_1"));
		return true;
	}
	if (!bLocal_303)
	{
		if (__LIB_0__::func_94(Global_35, 1697.328f, 1508.81f, 147.771f, 1) < 3f)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
			if (PED::_0xB91AB3BE7F655D49(Global_35))
			{
				__LIB_12__::func_773(1, 0, 1, 1);
				HUD::_HIDE_HUD_COMPONENT(724769646);
				__LIB_2__::func_259(&uLocal_102);
				bLocal_303 = true;
			}
		}
	}
	else
	{
		CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
		__LIB_4__::func_516(1, 0);
		fVar0 = __LIB_9__::func_178(&uLocal_102);
		__LIB_12__::func_773(1, 0, 1, 1);
		if (!bLocal_304)
		{
			if (fVar0 > 2f)
			{
				if (__LIB_12__::func_876(uParam0, "WAR4_MOMENT", 0))
				{
					bLocal_304 = true;
				}
			}
		}
		if (!PED::_0xB91AB3BE7F655D49(Global_35) || fVar0 > 5.5f)
		{
			__LIB_5__::func_20(0, 0);
			__LIB_1__::func_561(&uLocal_102);
			OBJECT::_0x0C0A373D181BF900(joaat("DOOR_VET_HOUSE_INT_1"));
			return true;
		}
	}
	return false;
}

void func_317(vector3 vParam0, float fParam3)
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_17))
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_17, vParam0, fParam3, true, false, true);
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_17, 48, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_17, true);
	}
}

void func_318(int iParam0)
{
	if (iLocal_183 != iParam0)
	{
		iLocal_183 = iParam0;
		iLocal_184 = 0;
	}
}

void func_319()
{
	__LIB_8__::func_774(vLocal_187.x, sLocal_94, 4194318);
	func_525(1);
}

bool func_322()
{
	if (!__LIB_0__::func_27(iLocal_87, 67108864))
	{
		if (__LIB_4__::func_61(vLocal_187.x, sLocal_95, 1, 1061360239 /* Float: 0.762f */, 1053609165 /* Float: 0.4f */, 0, 0, 1))
		{
			__LIB_1__::func_683(&iLocal_87, 67108864);
		}
	}
	else if (!__LIB_0__::func_27(iLocal_87, 33554432))
	{
		if (__LIB_4__::func_61(vLocal_187.x, sLocal_98, 1, 1061360239 /* Float: 0.762f */, 1053609165 /* Float: 0.4f */, 0, 0, 1))
		{
			__LIB_1__::func_683(&iLocal_87, 33554432);
		}
	}
	else if (!__LIB_0__::func_27(iLocal_87, 16777216))
	{
		if (__LIB_4__::func_61(vLocal_187.x, sLocal_99, 1, 1061360239 /* Float: 0.762f */, 1053609165 /* Float: 0.4f */, 0, 0, 1))
		{
			__LIB_1__::func_683(&iLocal_87, 16777216);
		}
	}
	else
	{
		return true;
	}
	return false;
}

void func_324()
{
	WEAPON::SET_CURRENT_PED_WEAPON(iLocal_15, WEAPON::GET_BEST_PED_WEAPON(iLocal_15, false, false), true, 0, false, false);
	__LIB_8__::func_774(iLocal_15, sLocal_100, 4194350);
	func_661(2);
}

void func_325()
{
	TASK::CLEAR_PED_TASKS(vLocal_187.x, true, false);
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(vLocal_187.x, func_214(11), func_215(11), true, false, true);
	func_525(3);
}

void func_326()
{
	TASK::CLEAR_PED_TASKS(vLocal_187.x, true, false);
	TASK::TASK_FOLLOW_WAYPOINT_RECORDING(vLocal_187.x, sLocal_97, 0, 4194412, -1, 0, 0, -1);
	PED::FORCE_PED_MOTION_STATE(vLocal_187.x, joaat("MOTIONSTATE_RUN"), false, 0, false);
	PED::_0x2208438012482A1A(vLocal_187.x, false, false);
	PLAYER::_0x6852288340B43239(PLAYER::GET_PLAYER_INDEX(), vLocal_187.x);
	func_525(4);
}

void func_327()
{
	__LIB_6__::func_891(iLocal_15);
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_15, func_214(18), func_215(18), true, false, true);
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_16))
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_16, func_214(18), func_215(18), true, false, true);
	}
	__LIB_1__::func_571(iLocal_15, iLocal_16, 0, -1, 1);
	func_661(6);
}

bool func_328(int iParam0, int iParam1, char* sParam2)
{
	if (!Local_314[iParam0 /*16*/].f_14)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_314[iParam0 /*16*/]))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_314[iParam0 /*16*/], true, false))
			{
				Local_314[iParam0 /*16*/].f_14 = 1;
				return Local_314[iParam0 /*16*/].f_14;
			}
		}
		else
		{
			if (MISC::IS_STRING_NULL(sParam2))
			{
				Local_314[iParam0 /*16*/] = ANIMSCENE::_CREATE_ANIM_SCENE(Local_314[iParam0 /*16*/].f_1, iParam1, Local_314[iParam0 /*16*/].f_15, false, true);
			}
			else
			{
				Local_314[iParam0 /*16*/] = ANIMSCENE::_CREATE_ANIM_SCENE(Local_314[iParam0 /*16*/].f_1, iParam1, sParam2, false, true);
			}
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_314[iParam0 /*16*/]))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(Local_314[iParam0 /*16*/]);
				func_663(iParam0);
			}
		}
	}
	return Local_314[iParam0 /*16*/].f_14;
}

void func_329(bool bParam0, bool bParam1)
{
	__LIB_1__::func_683(&iLocal_87, 128);
	__LIB_0__::func_325(&iLocal_83);
	__LIB_6__::func_891(iLocal_15);
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_15, func_214(25), func_215(25), false, false, true);
	if (bParam1)
	{
		ANIMSCENE::START_ANIM_SCENE(Local_314[2 /*16*/]);
	}
	else
	{
		ANIMSCENE::START_ANIM_SCENE(Local_314[1 /*16*/]);
		WEAPON::SET_PED_DROPS_INVENTORY_WEAPON(iLocal_15, joaat("WEAPON_REPEATER_CARBINE"), 0f, 0f, 0f, 9);
	}
	WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(iLocal_15, false);
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_16))
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_16, func_214(30), func_215(30), true, false, true);
		TASK::TASK_STAND_STILL(iLocal_16, -1);
		PED::_0x2EB75FB86C41F026(iLocal_16, 3, 1);
		PED::_0x23BDE06596A22CEC(iLocal_16, 3, 3f, 0);
	}
	__LIB_3__::func_414(&uLocal_85, func_214(25), 2.25f, 1, -1, 0);
	if (bParam0)
	{
		AUDIO::DISABLE_PED_PAIN_AUDIO(iLocal_15, true);
	}
	PED::APPLY_PED_DAMAGE_PACK(iLocal_15, "PD_War_Veteran_Dead", 0f, 1f);
	func_661(7);
}

void func_330()
{
	__LIB_0__::func_325(&(vLocal_187.f_1));
	TASK::CLEAR_PED_TASKS(vLocal_187.x, true, false);
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(vLocal_187.x, func_214(24), func_215(24), true, false, true);
	func_525(5);
}

void func_332()
{
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, iLocal_190, joaat("REL_WILD_ANIMAL_PREDATOR"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, joaat("REL_WILD_ANIMAL_PREDATOR"), iLocal_190);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(vLocal_187.x, joaat("REL_WILD_ANIMAL_PREDATOR"));
	__LIB_8__::func_776(vLocal_187.x, 175);
	TASK::TASK_LOOK_AT_ENTITY(vLocal_187.x, Global_35, 15000, 0, 51, 0);
	TASK::TASK_COMBAT_ANIMAL_CHARGE(vLocal_187.x, Global_35, 1, 1, 0, 0, 0);
}

bool func_336(var uParam0, int iParam1, bool bParam2)
{
	if (__LIB_0__::func_27(iLocal_90, iParam1))
	{
		return false;
	}
	if (__LIB_12__::func_876(uParam0, func_669(iParam1), 0))
	{
		if (bParam2)
		{
			__LIB_1__::func_683(&iLocal_90, iParam1);
		}
		return true;
	}
	return false;
}

int func_349(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	int iVar0;
	__LIB_12__::func_750(uParam4, &uParam0);
	if (__LIB_0__::func_84(uParam4, 2) && !__LIB_0__::func_84(uParam4, 67108864))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SKIP_CUTSCENE"), false);
	}
	if (__LIB_0__::func_81(uParam4) != 1)
	{
		__LIB_13__::func_56(uParam4);
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
			func_694(uParam4);
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
				__LIB_13__::func_56(uParam4);
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
				func_701(uParam4);
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
					func_702(&(uParam4->f_405), 0);
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
				func_701(uParam4);
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

bool func_353(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
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
					__LIB_13__::func_41(uParam0);
				}
				else if (CAM::IS_SCREEN_FADED_OUT())
				{
					__LIB_12__::func_691(uParam0, 4);
					__LIB_0__::func_115(uParam0, 10);
					__LIB_13__::func_57(uParam0, iParam5);
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
				__LIB_13__::func_57(uParam0, iParam5);
				return true;
			}
		}
	}
	if (__LIB_0__::func_78(uParam0) >= 3)
	{
		__LIB_13__::func_468(uParam0, iParam5);
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
			__LIB_13__::func_42(uParam0);
			break;
		case 3:
			if (__LIB_12__::func_670(uParam0))
			{
				__LIB_3__::func_155(2);
				__LIB_12__::func_890(uParam0, uParam0->f_912[uParam0->f_1580 /*41*/].f_27, uParam0->f_1241[uParam0->f_1580 /*22*/].f_1, 1065353216 /* Float: 1f */);
				__LIB_2__::func_259(&(uParam0->f_1768));
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
			if (uParam0->f_1581 >= 0 || __LIB_9__::func_178(&(uParam0->f_1768)) >= 15f)
			{
				if (__LIB_12__::func_979(uParam0, iParam5))
				{
					if (__LIB_12__::func_699(uParam0))
					{
						uParam0->f_1581 = __LIB_12__::func_754(uParam0);
						__LIB_2__::func_259(&(uParam0->f_1768));
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
						__LIB_13__::func_57(uParam0, iParam5);
						return true;
					}
				}
			}
			break;
		case 9:
			if (__LIB_12__::func_979(uParam0, iParam5))
			{
				__LIB_13__::func_57(uParam0, iParam5);
				__LIB_0__::func_115(uParam0, 10);
				return true;
			}
			break;
		case 10:
			return true;
	}
	return false;
}

void func_359(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_15))
	{
		switch (iLocal_185)
		{
			case 0:
				break;
			case 1:
				func_741(uParam0);
				break;
			case 2:
				func_742(uParam0);
				break;
			case 3:
				func_743(uParam0);
				break;
			case 4:
				func_744(uParam0);
				break;
			case 5:
				func_745(uParam0);
				break;
			case 6:
				func_746();
				break;
		}
	}
	else if (iLocal_185 != 7)
	{
		func_661(7);
	}
}

void func_360(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(vLocal_187.x))
	{
		PED::SET_PED_RESET_FLAG(vLocal_187.x, 170, true);
		switch (vLocal_187.z)
		{
			case 0:
				break;
			case 1:
				func_747();
				break;
			case 2:
				__LIB_0__::func_11();
				break;
			case 3:
				__LIB_0__::func_11();
				break;
			case 4:
				func_750();
				break;
			case 5:
				__LIB_0__::func_11();
				break;
			case 6:
				__LIB_0__::func_11();
				break;
		}
	}
	else if (vLocal_187.z != 7)
	{
		func_525(7);
	}
}

bool func_363(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_18[0]))
	{
		iLocal_18[0] = __LIB_12__::func_885(uParam0, iLocal_21, func_214(5), func_215(5), 1, 1, 0, 1, 1, 1, 1, 0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_18[1]))
	{
		iLocal_18[1] = __LIB_12__::func_885(uParam0, iLocal_21, func_214(6), func_215(6), 1, 1, 0, 1, 1, 1, 1, 0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_18[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_18[1]))
	{
		__LIB_1__::func_473(iLocal_18[0], joaat("WORLD_ANIMAL_CROW_EATING_GROUND"), -1, 0, 0, -1082130432 /* Float: -1f */);
		__LIB_1__::func_473(iLocal_18[1], joaat("WORLD_ANIMAL_CROW_EATING_GROUND"), -1, 0, 0, -1082130432 /* Float: -1f */);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_18[0], true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_18[1], true);
		return true;
	}
	return false;
}

void func_364(var uParam0)
{
	switch (iLocal_184)
	{
		case 0:
			if (!__LIB_0__::func_27(iLocal_87, 1))
			{
				func_227(uParam0);
				if (ENTITY::DOES_ENTITY_EXIST(vLocal_187.x))
				{
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(vLocal_187.x, func_214(9), func_215(9), true, false, true);
				}
				return;
			}
			__LIB_13__::func_62(uParam0, func_61(0), func_61(1), 0, 1, 0);
			__LIB_12__::func_883(uParam0, func_756(1), 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			func_757();
			if (!__LIB_0__::func_27(iLocal_89, 65536))
			{
				func_319();
			}
			if (!MAP::DOES_BLIP_EXIST(vLocal_187.y))
			{
				vLocal_187.f_1 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), vLocal_187.x);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(vLocal_187.y, "WARV4_BLP_BOAR");
			}
			PLAYER::_0x1D77B47AFA584E90(PLAYER::GET_PLAYER_INDEX(), -1, false);
			__LIB_2__::func_259(&uLocal_126);
			iLocal_184 = 1;
			break;
		case 1:
			if (!MAP::DOES_BLIP_EXIST(iLocal_81))
			{
				if (!MAP::DOES_BLIP_EXIST(vLocal_187.y))
				{
					if (!__LIB_0__::func_27(iLocal_90, 8))
					{
						if (!__LIB_6__::func_904())
						{
							func_336(uParam0, 8, 1);
						}
					}
					else if (!__LIB_6__::func_903(func_669(8)))
					{
						UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
						__LIB_12__::func_883(uParam0, func_756(32), 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
						iLocal_81 = __LIB_8__::func_777(-308585968, func_214(10), 20f, 1);
						fLocal_296 = __LIB_0__::func_94(Global_35, func_214(10), 1);
						__LIB_2__::func_259(&uLocal_293);
					}
				}
			}
			if (__LIB_9__::func_178(&uLocal_126) > 1.5f)
			{
				if (!__LIB_6__::func_904() && ENTITY::IS_ENTITY_ON_SCREEN(vLocal_187.x))
				{
					if (func_336(uParam0, 4, 1))
					{
						__LIB_1__::func_561(&uLocal_126);
					}
				}
			}
			if (!__LIB_0__::func_899(&uLocal_152))
			{
				if (MISC::_0x7A76104CC2CC69E8(vLocal_187.x, 1, 1))
				{
					__LIB_2__::func_259(&uLocal_152);
				}
			}
			else if (__LIB_9__::func_178(&uLocal_152) > 1.5f)
			{
				if (!__LIB_6__::func_904())
				{
					if (func_336(uParam0, 2, 0))
					{
						__LIB_1__::func_561(&uLocal_152);
					}
				}
			}
			if (!__LIB_0__::func_899(&uLocal_108))
			{
				if (__LIB_0__::func_266(Global_35, func_214(10), 20f, 1, 1))
				{
					__LIB_2__::func_259(&uLocal_108);
				}
			}
			else if (__LIB_0__::func_266(Global_35, func_214(10), 20f, 1, 1))
			{
				if (__LIB_9__::func_178(&uLocal_108) > 3f)
				{
					if (!__LIB_0__::func_27(iLocal_90, 16))
					{
						if (!__LIB_6__::func_904())
						{
							func_336(uParam0, 16, 1);
						}
					}
					else if (!__LIB_6__::func_904())
					{
						iLocal_184 = 2;
					}
				}
			}
			else
			{
				__LIB_1__::func_561(&uLocal_108);
			}
			break;
		case 2:
			__LIB_1__::func_561(&uLocal_108);
			__LIB_1__::func_561(&uLocal_293);
			__LIB_0__::func_325(&iLocal_81);
			func_318(1);
			break;
	}
}

void func_365(var uParam0)
{
	switch (iLocal_184)
	{
		case 0:
			__LIB_13__::func_62(uParam0, func_61(1), func_61(2), 1, 2, 0);
			if (!__LIB_0__::func_27(iLocal_88, 16384))
			{
				__LIB_12__::func_883(uParam0, func_756(4), 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_1__::func_683(&iLocal_88, 16384);
			}
			func_325();
			if (iLocal_14 != 1)
			{
				iLocal_14 = 1;
			}
			iLocal_184 = 1;
			break;
		case 1:
			if (!__LIB_0__::func_27(iLocal_88, 4096))
			{
				if (__LIB_14__::func_197(1))
				{
					__LIB_0__::func_45(func_756(4096), 10000, 0, 0, 0, 1);
					__LIB_1__::func_683(&iLocal_88, 4096);
				}
			}
			if (__LIB_0__::func_27(iLocal_90, 2048) && !__LIB_6__::func_903(func_669(2048)))
			{
				iLocal_184 = 2;
			}
			break;
		case 2:
			func_318(2);
			break;
	}
}

void func_366(var uParam0)
{
	switch (iLocal_184)
	{
		case 0:
			if (!MAP::DOES_BLIP_EXIST(iLocal_83))
			{
				iLocal_83 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_COMPANION"), iLocal_15);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_83, "WARV4_BLP_VET");
				if (!__LIB_0__::func_27(iLocal_89, 2048))
				{
					MAP::_BLIP_SET_MODIFIER(iLocal_83, -546708623);
				}
				__LIB_13__::func_89(uParam0, func_756(8), 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			}
			if (!__LIB_0__::func_27(iLocal_90, 8192))
			{
				func_336(uParam0, 8192, 1);
			}
			else if (__LIB_6__::func_903(func_669(8192)))
			{
				if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE(func_669(8192)) == 0)
				{
					if (!__LIB_0__::func_27(iLocal_87, 512))
					{
						TASK::TASK_TURN_PED_TO_FACE_COORD(iLocal_15, 1839.188f, 1382.475f, 187.0679f, -1);
						__LIB_1__::func_683(&iLocal_87, 512);
					}
				}
				if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE(func_669(8192)) == 1)
				{
					if (!__LIB_0__::func_27(iLocal_87, 1024))
					{
						TASK::TASK_TURN_PED_TO_FACE_COORD(iLocal_15, 1858.394f, 1400.241f, 179.59f, -1);
						__LIB_1__::func_683(&iLocal_87, 1024);
					}
				}
				if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE(func_669(8192)) == 2)
				{
					if (!__LIB_0__::func_27(iLocal_87, 2048))
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_15, Global_35, -1, -1f, -1f, -1f);
						__LIB_1__::func_683(&iLocal_87, 2048);
					}
				}
				if (!__LIB_0__::func_48(iLocal_15, Global_35, 15f, 1))
				{
					if (!__LIB_0__::func_27(iLocal_87, 1073741824 /* Float: 2f */))
					{
						__LIB_12__::func_883(uParam0, func_756(2), 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
						__LIB_1__::func_683(&iLocal_87, 1073741824 /* Float: 2f */);
					}
				}
				else if (__LIB_0__::func_27(iLocal_87, 1073741824 /* Float: 2f */))
				{
					__LIB_1__::func_681(&iLocal_87, 1073741824 /* Float: 2f */);
					UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
					__LIB_13__::func_89(uParam0, func_756(8), 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				}
			}
			else
			{
				func_336(uParam0, 16384, 1);
				if (!bLocal_301)
				{
					__LIB_13__::func_62(uParam0, func_61(2), func_61(3), 2, 3, 0);
					if (iLocal_14 != 2)
					{
						iLocal_14 = 2;
					}
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_18[0]))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_18[0], false);
					}
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_18[1]))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_18[1], false);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_23))
					{
						PED::APPLY_PED_DAMAGE_PACK(iLocal_23, "PD_War_Veteran_Dead_Wolf", 0f, 1f);
					}
					UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
					__LIB_12__::func_883(uParam0, func_756(64), 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					__LIB_1__::func_683(&iLocal_88, 64);
				}
				if (iLocal_185 != 6)
				{
					func_762();
				}
				if (iLocal_186 == 0)
				{
					if (!MAP::DOES_BLIP_EXIST(iLocal_81))
					{
						iLocal_81 = __LIB_8__::func_777(-308585968, func_214(12), 30f, 1);
						MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_81, "WARV4_BLP_GOTO");
					}
				}
				iLocal_184 = 1;
			}
			break;
		case 1:
			if (iLocal_186 < 2)
			{
				__LIB_9__::func_204(Global_35, func_214(4), &uLocal_139, 15f, 12f, 10f, 7.5f, 0.1f, 0, 0, 1, 1, 1);
			}
			if (iLocal_185 == 7 && vLocal_187.z == 5)
			{
				iLocal_184 = 2;
				return;
			}
			switch (iLocal_186)
			{
				case 0:
					if (!__LIB_0__::func_899(&uLocal_111))
					{
						if (__LIB_0__::func_266(Global_35, func_214(12), 29f, 1, 1))
						{
							__LIB_2__::func_259(&uLocal_111);
							if (iLocal_14 != 3)
							{
								iLocal_14 = 3;
							}
						}
					}
					else if (!__LIB_0__::func_27(iLocal_87, 8388608))
					{
						if ((((__LIB_9__::func_178(&uLocal_111) > 20f && __LIB_0__::func_266(Global_35, func_214(12), 29f, 1, 1)) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iLocal_23, false, false), joaat("WEAPON_THROWN_MOLOTOV"), 8f, true)) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iLocal_23, false, false), joaat("WEAPON_THROWN_DYNAMITE"), 8f, true)) || FIRE::IS_ENTITY_ON_FIRE(iLocal_23))
						{
							__LIB_2__::func_259(&uLocal_111);
							__LIB_6__::func_916(&iLocal_24);
							__LIB_1__::func_683(&iLocal_87, 8388608);
						}
					}
					else if (__LIB_9__::func_178(&uLocal_111) > 3.5f)
					{
						__LIB_1__::func_561(&uLocal_111);
						func_765(uParam0);
						return;
					}
					else if (__LIB_9__::func_178(&uLocal_111) > 2f)
					{
						TASK::TASK_LOOK_AT_COORD(Global_35, 1952.434f, 1310.361f, 197.569f, 5000, 4, 51, 0);
						func_766(1952.434f, 1310.361f, 197.569f, 1951.203f, 1305.297f, 197.176f, 65536);
					}
					else if (__LIB_9__::func_178(&uLocal_111) > 0.5f)
					{
						func_766(1952.434f, 1310.361f, 197.569f, 1951.203f, 1305.297f, 197.176f, 32768);
					}
					if (!__LIB_0__::func_27(iLocal_87, 8388608))
					{
						if ((__LIB_0__::func_48(Global_35, iLocal_23, 15f, 0) && ENTITY::IS_ENTITY_ON_SCREEN(iLocal_23)) && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_23))
						{
							if (!__LIB_0__::func_27(iLocal_90, 65536))
							{
								func_336(uParam0, 65536, 1);
							}
							else if (!__LIB_6__::func_904())
							{
								__LIB_0__::func_325(&iLocal_81);
								iLocal_81 = __LIB_8__::func_778(408396114, iLocal_23, 1);
								MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_81, "WARV4_BLP_WOLF");
								CAM::SET_GAMEPLAY_ENTITY_HINT(iLocal_23, 0f, 0f, 0f, true, 2000, 2000, 2000, 0);
								__LIB_12__::func_883(uParam0, func_756(128), 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
								if (__LIB_9__::func_178(&uLocal_111) > 10f)
								{
									__LIB_1__::func_585(&uLocal_111, 10f);
								}
								iLocal_186 = 1;
							}
						}
					}
					if (!__LIB_0__::func_27(iLocal_88, 64))
					{
						if (!__LIB_0__::func_266(Global_35, func_214(12), 105f, 1, 1))
						{
							__LIB_12__::func_883(uParam0, func_756(64), 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
							__LIB_1__::func_683(&iLocal_88, 64);
						}
					}
					break;
				case 1:
					if (!__LIB_0__::func_27(iLocal_87, 8192))
					{
						if (!__LIB_0__::func_27(iLocal_87, 8388608))
						{
							if ((((__LIB_9__::func_178(&uLocal_111) > 30f && __LIB_0__::func_266(Global_35, func_214(12), 29f, 1, 1)) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iLocal_23, false, false), joaat("WEAPON_THROWN_MOLOTOV"), 8f, true)) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iLocal_23, false, false), joaat("WEAPON_THROWN_DYNAMITE"), 8f, true)) || FIRE::IS_ENTITY_ON_FIRE(iLocal_23))
							{
								__LIB_2__::func_259(&uLocal_111);
								__LIB_6__::func_916(&iLocal_24);
								__LIB_1__::func_683(&iLocal_87, 8388608);
							}
						}
						else if (__LIB_9__::func_178(&uLocal_111) > 4f)
						{
							__LIB_1__::func_561(&uLocal_111);
							func_765(uParam0);
							return;
						}
						else if (__LIB_9__::func_178(&uLocal_111) > 2.5f)
						{
							func_766(1952.434f, 1310.361f, 197.569f, 1951.203f, 1305.297f, 197.176f, 65536);
							func_336(uParam0, 8388608, 1);
						}
						else if (__LIB_9__::func_178(&uLocal_111) > 0.5f)
						{
							func_766(1952.434f, 1310.361f, 197.569f, 1951.203f, 1305.297f, 197.176f, 32768);
						}
						else if (__LIB_9__::func_178(&uLocal_111) > 0.1f)
						{
							if (iLocal_14 != 5)
							{
								iLocal_14 = 5;
							}
						}
					}
					if (!__LIB_0__::func_27(iLocal_87, 8192))
					{
						func_768();
					}
					else if (!__LIB_0__::func_27(iLocal_89, 128))
					{
						func_768();
						func_769();
						__LIB_12__::func_773(1, 0, 1, 1);
					}
					else
					{
						func_768();
						__LIB_12__::func_773(1, 0, 1, 1);
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_314[0 /*16*/]))
						{
							if (ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(Local_314[0 /*16*/]) || ANIMSCENE::_0xF94692EB9DC15D74(Local_314[0 /*16*/], 0))
							{
								__LIB_1__::func_561(&uLocal_114);
								func_765(uParam0);
								return;
							}
						}
						if (!__LIB_0__::func_899(&uLocal_114))
						{
							__LIB_2__::func_259(&uLocal_114);
						}
						else if (__LIB_9__::func_178(&uLocal_114) > 9.5f)
						{
							func_766(1952.434f, 1310.361f, 197.569f, 1952.203f, 1305.297f, 197.176f, 65536);
						}
						else if (__LIB_9__::func_178(&uLocal_114) > 8f)
						{
							func_766(1952.434f, 1310.361f, 197.569f, 1951.203f, 1305.297f, 197.176f, 32768);
						}
						else if (__LIB_9__::func_178(&uLocal_114) > 7f)
						{
							if (iLocal_14 != 5)
							{
								iLocal_14 = 5;
							}
						}
						else if (__LIB_9__::func_178(&uLocal_114) > 0f)
						{
							func_336(uParam0, 4194304, 1);
						}
					}
					break;
				case 2:
					func_768();
					if (!__LIB_0__::func_27(iLocal_87, 131072))
					{
						if (__LIB_0__::func_266(Global_35, func_214(13), 30f, 1, 1))
						{
							func_766(1952.434f, 1310.361f, 197.569f, 1951.203f, 1305.297f, 197.176f, 131072);
							__LIB_2__::func_259(&uLocal_158);
						}
					}
					else if (__LIB_9__::func_178(&uLocal_158) > 0.5f)
					{
						if (!__LIB_6__::func_904())
						{
							if (func_336(uParam0, 131072, 1))
							{
								__LIB_1__::func_561(&uLocal_158);
							}
						}
					}
					if (__LIB_9__::func_178(&uLocal_123) > 8f)
					{
						__LIB_1__::func_561(&uLocal_123);
						__LIB_1__::func_683(&iLocal_87, 8);
					}
					if (!__LIB_0__::func_27(iLocal_87, 8))
					{
						if (((__LIB_0__::func_266(Global_35, func_214(14), 8f, 1, 1) || __LIB_0__::func_266(Global_35, func_214(15), 8f, 1, 1)) || __LIB_0__::func_266(Global_35, func_214(16), 8f, 1, 1)) || __LIB_0__::func_266(Global_35, func_214(17), 8f, 1, 1))
						{
							func_770();
							func_766(1952.434f, 1310.361f, 197.569f, 1951.203f, 1305.297f, 197.176f, 262144);
							__LIB_0__::func_325(&iLocal_81);
							__LIB_1__::func_683(&iLocal_87, 8);
						}
					}
					if (!__LIB_0__::func_27(iLocal_87, 4))
					{
						if (__LIB_0__::func_266(Global_35, func_214(13), 100f, 1, 1))
						{
							if (!ENTITY::IS_ENTITY_OCCLUDED(iLocal_15) && ENTITY::IS_ENTITY_ON_SCREEN(iLocal_15))
							{
								__LIB_1__::func_683(&iLocal_87, 4);
								func_326();
								__LIB_2__::func_259(&uLocal_123);
								if (iLocal_14 != 6)
								{
									iLocal_14 = 6;
								}
							}
							if (__LIB_0__::func_163(Global_35, 713668775) && __LIB_0__::func_266(Global_35, vLocal_168, 6f, 1, 1))
							{
							}
						}
					}
					if (!MAP::DOES_BLIP_EXIST(iLocal_83))
					{
						if ((!ENTITY::IS_ENTITY_OCCLUDED(iLocal_15) && ENTITY::IS_ENTITY_ON_SCREEN(iLocal_15)) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Global_35, iLocal_15, 17))
						{
							iLocal_83 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_COMPANION"), iLocal_15);
							MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_83, "WARV4_BLP_VET");
						}
					}
					if (!MAP::DOES_BLIP_EXIST(vLocal_187.y))
					{
						if (!__LIB_0__::func_899(&uLocal_161))
						{
							if ((!ENTITY::IS_ENTITY_OCCLUDED(vLocal_187.x) && ENTITY::IS_ENTITY_ON_SCREEN(vLocal_187.x)) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Global_35, vLocal_187.x, 17))
							{
								__LIB_2__::func_259(&uLocal_161);
							}
						}
						else if (__LIB_9__::func_178(&uLocal_161) > 1f)
						{
							__LIB_1__::func_561(&uLocal_161);
							__LIB_0__::func_325(&iLocal_81);
							vLocal_187.f_1 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), vLocal_187.x);
							MAP::SET_BLIP_NAME_FROM_TEXT_FILE(vLocal_187.y, "WARV4_BLP_BOAR");
							__LIB_12__::func_883(uParam0, func_756(1), 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
						}
					}
					else if (!__LIB_6__::func_904())
					{
						func_336(uParam0, 262144, 1);
					}
					func_772();
					break;
			}
			break;
		case 2:
			func_772();
			func_318(4);
			break;
	}
}

bool func_367(var uParam0)
{
	func_772();
	switch (iLocal_184)
	{
		case 0:
			__LIB_13__::func_62(uParam0, func_61(3), func_61(4), 3, 4, 0);
			__LIB_2__::func_788(&(iLocal_18[0]), 1, 0, 1);
			__LIB_2__::func_788(&(iLocal_18[1]), 1, 0, 1);
			__LIB_12__::func_883(uParam0, func_756(1024), 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			func_302(uParam0, 1);
			__LIB_0__::func_325(&iLocal_83);
			__LIB_0__::func_325(&(vLocal_187.f_1));
			__LIB_0__::func_325(&iLocal_81);
			if (!MAP::DOES_BLIP_EXIST(iLocal_81))
			{
				iLocal_81 = __LIB_8__::func_777(-308585968, func_214(27), 55f, 1);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_81, "WARV4_BLP_GOTO");
			}
			__LIB_2__::func_259(&uLocal_130);
			__LIB_1__::func_561(&uLocal_139);
			iLocal_184 = 1;
			break;
		case 1:
			if (__LIB_9__::func_178(&uLocal_130) > 1.2f)
			{
				func_766(1968.802f, 1259.471f, 182.6297f, 1981.18f, 1256.707f, 180.0524f, 1048576);
			}
			else if (__LIB_9__::func_178(&uLocal_130) > 0f)
			{
				func_766(1968.802f, 1259.471f, 182.6297f, 1981.18f, 1256.707f, 180.0524f, 524288);
			}
			if (!__LIB_0__::func_27(iLocal_87, 256))
			{
				if (!PED::IS_PED_RAGDOLL(iLocal_15))
				{
					GRAPHICS::_0xDFCE8CE9F3EBE93F(iLocal_15);
					__LIB_1__::func_683(&iLocal_87, 256);
				}
			}
			if (!MAP::DOES_BLIP_EXIST(iLocal_82))
			{
				if (func_773())
				{
					func_336(uParam0, 524288, 1);
					if (iLocal_14 != 7)
					{
						iLocal_14 = 7;
					}
					__LIB_0__::func_325(&iLocal_81);
					iLocal_82 = __LIB_8__::func_778(408396114, iLocal_15, 1);
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_82, "WARV4_BLP_VET");
					MAP::_BLIP_SET_MODIFIER(iLocal_82, 580546400);
					__LIB_13__::func_89(uParam0, func_756(2048), 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				}
			}
			__LIB_9__::func_204(Global_35, ENTITY::GET_ENTITY_COORDS(iLocal_15, false, false), &uLocal_139, 25f, 21f, 20.1f, 20f, 0.1f, 0, 0, 1, 1, 1);
			if (__LIB_0__::func_48(Global_35, iLocal_15, 21f, 0) && !__LIB_0__::func_71(Global_35))
			{
				iLocal_184 = 2;
			}
			break;
		case 2:
			__LIB_1__::func_561(&uLocal_130);
			__LIB_0__::func_325(&iLocal_82);
			return true;
	}
	return false;
}

void func_368(var uParam0)
{
	int iVar0;
	int iVar1;
	switch (iLocal_184)
	{
		case 0:
			__LIB_14__::func_201();
			__LIB_13__::func_62(uParam0, func_61(5), func_61(6), 5, 6, 0);
			__LIB_13__::func_89(uParam0, func_756(1), 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			if (!MAP::DOES_BLIP_EXIST(vLocal_187.y))
			{
				vLocal_187.f_1 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), vLocal_187.x);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(vLocal_187.y, "WARV4_BLP_BOAR");
			}
			if (!__LIB_0__::func_27(iLocal_89, 524288))
			{
				func_332();
			}
			if (iLocal_14 != 8)
			{
				iLocal_14 = 8;
			}
			iVar0 = func_509(285212800, 0);
			if (iVar0 == 0)
			{
				iVar0 = __LIB_0__::func_399(Global_35, 1, 2, 0);
			}
			if (iVar0 == 0)
			{
				WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, joaat("WEAPON_REVOLVER_CATTLEMAN"), 6, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				iVar0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
			}
			else
			{
				iVar1 = WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iVar0);
			}
			__LIB_0__::func_188(PLAYER::_GET_DEADEYE_ABILITY_LEVEL(PLAYER::PLAYER_ID()));
			PLAYER::_0x22B3CABEDDB538B2(PLAYER::PLAYER_ID(), 0.45f);
			PLAYER::_0xBBA140062B15A8AC(PLAYER::PLAYER_ID());
			PED::SET_PED_RESET_FLAG(Global_35, 159, true);
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, false, 0, false, false);
			func_776(iVar1, 6, 1, 0, 0, 752097756, 0, 0, 0, 0);
			WEAPON::_0x183CE355115B6E75(Global_35, iVar0);
			WEAPON::SET_AMMO_IN_CLIP(Global_35, iVar0, -1);
			TASK::TASK_SWAP_WEAPON(Global_35, 1, 0, 0, 0);
			PED::SET_PED_CONFIG_FLAG(Global_35, 511, true);
			PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), true, vLocal_187.x, -1, false);
			ENTITY::SET_ENTITY_INVINCIBLE(vLocal_187.x, false);
			__LIB_1__::func_683(&iLocal_87, 134217728);
			PED::SET_PED_CONFIG_FLAG(vLocal_187.x, 263, true);
			__LIB_8__::func_776(vLocal_187.x, 500);
			PED::SET_RAGDOLL_BLOCKING_FLAGS(vLocal_187.x, 1);
			PED::SET_PED_CAN_TORSO_REACT_IK(vLocal_187.x, false);
			iLocal_184 = 1;
			break;
		case 1:
			AUDIO::PREPARE_MUSIC_EVENT("RWARV4_COMPLETE");
			if (!bLocal_308)
			{
				if (__LIB_0__::func_399(Global_35, 1, 0, 0) != 0 && __LIB_0__::func_399(Global_35, 1, 0, 0) != joaat("WEAPON_UNARMED"))
				{
					WEAPON::_0x0A2AB7B7ABC055F4(Global_35);
					bLocal_308 = true;
				}
			}
			__LIB_14__::func_201();
			if (vLocal_187.z == 7)
			{
				PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), false, vLocal_187.x, -1, false);
				PED::SET_PED_CONFIG_FLAG(Global_35, 511, false);
				__LIB_10__::func_597(func_756(1));
				__LIB_2__::func_259(&uLocal_117);
				__LIB_2__::func_259(&uLocal_136);
				__LIB_3__::func_353("RWARV4_COMPLETE", 1);
				iLocal_184 = 2;
				return;
			}
			PED::SET_PED_RESET_FLAG(Global_35, 159, true);
			if (iLocal_151 == 4)
			{
				func_778();
				iLocal_151++;
			}
			else if (__LIB_0__::func_48(Global_35, vLocal_187.x, 4f, 1))
			{
				if (iLocal_151 > 0)
				{
					func_778();
				}
				if (func_779(500))
				{
					iLocal_151++;
				}
			}
			else if (__LIB_0__::func_48(Global_35, vLocal_187.x, 10f, 1))
			{
				if (iLocal_151 >= 3 && func_779(500))
				{
					func_778();
					iLocal_151++;
				}
				else if (func_779(500))
				{
					iLocal_151++;
				}
			}
			else if (func_779(500))
			{
				iLocal_151++;
			}
			if (!__LIB_0__::func_899(&uLocal_136))
			{
				if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_35, vLocal_187.x, 0, 0) || PED::IS_PED_PERFORMING_MELEE_ACTION(vLocal_187.x, 1, 0)) || __LIB_0__::func_48(vLocal_187.x, Global_35, 2f, 1))
				{
					__LIB_2__::func_259(&uLocal_136);
				}
			}
			else if (__LIB_1__::func_583(&uLocal_136) > 0.25f)
			{
				ENTITY::_SET_ENTITY_HEALTH(Global_35, 0, 0);
				__LIB_1__::func_561(&uLocal_136);
			}
			break;
		case 2:
			if (__LIB_0__::func_899(&uLocal_136))
			{
				if (__LIB_9__::func_178(&uLocal_136) > 0.5f)
				{
					if (PLAYER::_0xB16223CB7DA965F0(PLAYER::PLAYER_ID()))
					{
						PLAYER::_0xAE637BB8EF017875(PLAYER::PLAYER_ID(), 1);
						PLAYER::_0x22B3CABEDDB538B2(PLAYER::PLAYER_ID(), 0f);
					}
					__LIB_1__::func_561(&uLocal_136);
				}
				else
				{
					PED::SET_PED_RESET_FLAG(Global_35, 159, true);
				}
			}
			if (__LIB_9__::func_178(&uLocal_117) > 5f)
			{
				func_318(6);
			}
			else if (__LIB_9__::func_178(&uLocal_117) > 1.5f)
			{
				if (!__LIB_6__::func_904())
				{
					func_336(uParam0, 1048576, 1);
				}
			}
			break;
	}
}

void func_404(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
						func_776(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_776(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_776(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_776(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_776(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_776(joaat("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_776(joaat("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_776(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_776(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_776(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_776(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_776(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_776(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_776(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_776(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_776(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_776(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_776(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_776(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_776(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_776(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_776(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_776(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_776(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_776(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_816();
						func_817(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
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
						func_776(joaat("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
							func_404(Global_1347702[21 /*49*/].f_15, 0, 0, 0, 0);
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
						func_824(Global_35, joaat("CLOTHING_ITEM_BADGE_PZERO_000"), 0, -358215195, 1, 1);
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
							func_404(Global_1347702[82 /*49*/].f_15, 0, 0, 0, 0);
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
							func_404(Global_1347702[83 /*49*/].f_15, 0, 0, 0, 0);
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
						func_776(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_776(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
		func_852();
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
							func_776(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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

Vector3 func_408(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10)
{
	vector3 vVar0;
	vVar0 = { func_859(vParam0, iParam3, iParam4, iParam5, iParam6, 1, iParam7, bParam8, bParam9, bParam10, -1, 1103626240 /* Float: 25f */) };
	if (__LIB_0__::func_86(vVar0))
	{
		vVar0 = { func_859(vParam0, iParam3, iParam4, 0, 1, 1, iParam7, bParam8, 0, 0, -1, 1103626240 /* Float: 25f */) };
	}
	return vVar0;
}

void func_432()
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	if (!bLocal_394)
	{
		if (func_328(3, 0, 0))
		{
			if (!__LIB_0__::func_139(iLocal_396))
			{
				if (ENTITY::DOES_ENTITY_EXIST(vLocal_187.x))
				{
					iLocal_396 = __LIB_2__::func_403("WARV4_UC_TUSK", joaat("INPUT_LOOT"), vLocal_187.x, 3, 0, 0, 0, 4, 2f, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
				}
			}
			else if (__LIB_0__::func_567(iLocal_396, 1))
			{
				vVar0 = { ENTITY::GET_ENTITY_COORDS(vLocal_187.x, false, false) };
				vVar3 = { vVar0 };
				vVar3.f_2 = (vVar0.z + 1f);
				if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar3, &fLocal_297, false))
				{
				}
				else if (fLocal_297 == 0f)
				{
					fLocal_297 = vVar0.z;
				}
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_314[3 /*16*/], vVar0.x, vVar0.y, fLocal_297, 0f, 0f, 0f, 2);
				ANIMSCENE::START_ANIM_SCENE(Local_314[3 /*16*/]);
				__LIB_1__::func_281(&iLocal_396, 1, 1);
				PED::_SET_PED_SCALE(vLocal_187.x, 0.8f);
				bLocal_394 = true;
			}
			else
			{
				if (fLocal_297 == 0f)
				{
					vVar0 = { ENTITY::GET_ENTITY_COORDS(vLocal_187.x, false, false) };
					if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &fVar6, false))
					{
						fLocal_297 = fVar6;
					}
					else
					{
						fLocal_297 = 0f;
					}
				}
				iLocal_92 = HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(vLocal_187.x, 2f, 2, 1, 0, 0, 0);
				HUD::_UIPROMPT_SET_GROUP(__LIB_3__::func_66(iLocal_396), iLocal_92, 0);
			}
		}
	}
	else if (!bLocal_395)
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(Local_314[3 /*16*/]))
		{
			func_776(joaat("PROVISION_BOAR_RARE_TUSK"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
			bLocal_395 = true;
		}
	}
}

void func_436(var uParam0)
{
	int iVar0;
	__LIB_0__::func_325(&iLocal_81);
	__LIB_0__::func_325(&iLocal_82);
	__LIB_0__::func_325(&iLocal_83);
	__LIB_0__::func_325(&(vLocal_187.f_1));
	if (PED::DOES_GROUP_EXIST(iLocal_181))
	{
		if (__LIB_0__::func_272(iLocal_15, 0))
		{
			PED::REMOVE_PED_FROM_GROUP(iLocal_15);
		}
		PED::REMOVE_GROUP(iLocal_181);
		PLAYER::_0x12E09E278C6C29B7(PLAYER::PLAYER_ID());
	}
	if (__LIB_0__::func_27(iLocal_87, 2097152))
	{
		__LIB_14__::func_199(1, __LIB_1__::func_344(""));
	}
	if (PED::_0x91A5F9CBEBB9D936(uLocal_298))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_298, false);
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		__LIB_0__::func_172(iLocal_175[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Local_25[iVar0 /*9*/].f_8 != 0)
		{
			ENTITY::_0xD2B9C78537ED5759(Local_25[iVar0 /*9*/].f_8);
		}
		else if (ENTITY::DOES_ENTITY_EXIST(Local_25[iVar0 /*9*/]))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_25[iVar0 /*9*/]));
		}
		iVar0++;
	}
	__LIB_6__::func_916(&iLocal_24);
	if (__LIB_0__::func_1(uParam0->f_172, 8))
	{
		PLAYER::_0xE5D3EB37ABC1EB03(PLAYER::GET_PLAYER_INDEX());
		MISC::CLEAR_OVERRIDE_WEATHER();
		MISC::CLEAR_WEATHER_TYPE_PERSIST();
		PLAYER::_0x22B3CABEDDB538B2(PLAYER::PLAYER_ID(), 0f);
		__LIB_13__::func_495(7);
		PED::SET_PED_CONFIG_FLAG(Global_35, 511, false);
	}
	__LIB_14__::func_187(uParam0);
	if (ENTITY::DOES_ENTITY_EXIST(vLocal_187.x))
	{
		PED::_0x3088634CF8C819CF(vLocal_187.x);
		ENTITY::_0x5826EFD6D73C4DE5(vLocal_187.x);
		ENTITY::SET_ENTITY_INVINCIBLE(vLocal_187.x, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_17))
	{
		func_901();
		__LIB_3__::func_689(iLocal_17);
		__LIB_2__::func_145(iLocal_17, 0);
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_314[iVar0 /*16*/]))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(Local_314[iVar0 /*16*/]);
		}
		iVar0++;
	}
	__LIB_2__::func_788(&iLocal_23, 1, 0, 1);
	__LIB_2__::func_353(&uLocal_84, 1);
	__LIB_2__::func_353(&uLocal_85, 1);
	__LIB_2__::func_353(&uLocal_86, 1);
	__LIB_2__::func_788(&iLocal_15, 1, 0, 1);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_190);
	TASK::REMOVE_WAYPOINT_RECORDING(sLocal_93);
	TASK::REMOVE_WAYPOINT_RECORDING(sLocal_94);
	TASK::REMOVE_WAYPOINT_RECORDING(sLocal_95);
	TASK::REMOVE_WAYPOINT_RECORDING(sLocal_96);
	TASK::REMOVE_WAYPOINT_RECORDING(sLocal_97);
	TASK::REMOVE_WAYPOINT_RECORDING(sLocal_98);
	TASK::REMOVE_WAYPOINT_RECORDING(sLocal_99);
	TASK::REMOVE_WAYPOINT_RECORDING(sLocal_100);
	TASK::REMOVE_WAYPOINT_RECORDING(sLocal_101);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_171);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_173);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_172);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_21);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_22);
	OBJECT::_0x0C0A373D181BF900(joaat("DOOR_VET_HOUSE_INT_1"));
	__LIB_2__::func_788(&(iLocal_18[0]), 1, 0, 1);
	__LIB_2__::func_788(&(iLocal_18[1]), 1, 0, 1);
}

void func_471(var uParam0)
{
	bLocal_306 = true;
	FIRE::STOP_FIRE_IN_RANGE(func_214(25), 50f);
	__LIB_4__::func_791(0);
	__LIB_4__::func_791(1);
}

void func_472(var uParam0, var uParam1)
{
	vector3 vVar0;
	if (!__LIB_0__::func_27(iLocal_87, 1))
	{
		__LIB_1__::func_683(&iLocal_89, 1);
	}
	if (!PED::_0x91A5F9CBEBB9D936(uLocal_298) && VOLUME::_DOES_VOLUME_EXIST(iLocal_175[4]))
	{
		uLocal_298 = __LIB_1__::func_391(iLocal_175[4], 0, 0, 0);
		__LIB_0__::func_568(func_214(42), 500f, 0);
		__LIB_2__::func_761(func_214(42), 500f, 0, 0);
		__LIB_1__::func_572(func_214(42), 500f, 0, 0, 1, 1, 0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_17))
	{
		vVar0 = { func_214(3) };
		if (__LIB_14__::func_53(uParam0, &iLocal_17, vVar0, func_215(3), 1, 1, 1, 1, 1))
		{
			func_317(func_214(3), func_215(3));
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_17, func_214(3), func_215(3), true, false, true);
		}
	}
	if (!__LIB_0__::func_27(iLocal_89, 16384))
	{
		if (__LIB_14__::func_200(uParam1) < 30f && __LIB_14__::func_200(uParam1) > 0f)
		{
			if (!ENTITY::IS_ENTITY_DEAD(vLocal_187.x))
			{
				__LIB_1__::func_473(vLocal_187.x, joaat("WORLD_ANIMAL_BOAR_GRAZING"), 0, 0, joaat("WORLD_ANIMAL_BOAR_GRAZING"), -1082130432 /* Float: -1f */);
			}
			__LIB_1__::func_683(&iLocal_89, 16384);
		}
	}
	if (!__LIB_0__::func_27(iLocal_89, 32768))
	{
		if (__LIB_14__::func_200(uParam1) < 9f && __LIB_14__::func_200(uParam1) > 0f)
		{
			if (!ENTITY::IS_ENTITY_DEAD(vLocal_187.x))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(vLocal_187.x, 1702.139f, 1490.009f, 145.3094f, 189.759f, true, false, true);
			}
			__LIB_1__::func_683(&iLocal_89, 32768);
		}
	}
	if (!__LIB_0__::func_27(iLocal_89, 65536))
	{
		if (__LIB_14__::func_200(uParam1) < 7.5f && __LIB_14__::func_200(uParam1) > 0f)
		{
			if (!ENTITY::IS_ENTITY_DEAD(vLocal_187.x))
			{
				func_319();
			}
			__LIB_1__::func_683(&iLocal_89, 65536);
		}
	}
	else if (!ENTITY::IS_ENTITY_DEAD(vLocal_187.x))
	{
		if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(vLocal_187.x, 0))
		{
			TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(vLocal_187.x, 2f, 0, -1082130432 /* Float: -1f */, 0);
		}
	}
	if (__LIB_13__::func_218(uParam1, Global_35, 0, 0, 1, 1))
	{
		if (!__LIB_0__::func_27(iLocal_89, 131072))
		{
			PED::FORCE_PED_MOTION_STATE(Global_35, joaat("MOTIONSTATE_RUN"), false, 0, false);
			PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::GET_PLAYER_INDEX(), 2f, 2000, 0f, true, false);
			PED::_0x2208438012482A1A(Global_35, false, false);
			__LIB_1__::func_683(&iLocal_89, 131072);
		}
	}
}

void func_473(var uParam0)
{
	if (!__LIB_0__::func_27(iLocal_89, 8192))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_17))
		{
			func_317(func_214(29), func_215(29));
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_17, func_214(29), func_215(29), true, false, true);
			TASK::TASK_STAND_STILL(iLocal_17, -1);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_16))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_16, func_214(30), func_215(30), true, false, true);
			TASK::TASK_STAND_STILL(iLocal_16, -1);
		}
		__LIB_1__::func_683(&iLocal_89, 8192);
	}
	if (!__LIB_0__::func_27(iLocal_89, 4096))
	{
		if (__LIB_14__::func_200(uParam0) < 4.5f && __LIB_14__::func_200(uParam0) > 0f)
		{
			if (!ENTITY::IS_ENTITY_DEAD(vLocal_187.x))
			{
				__LIB_0__::func_325(&(vLocal_187.f_1));
				TASK::CLEAR_PED_TASKS(vLocal_187.x, true, false);
				func_525(5);
				PED::APPLY_PED_DAMAGE_PACK(vLocal_187.x, "PD_War_Vetetran_Legendary_boar", 0f, 1f);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(vLocal_187.x, 2010.095f, 1255.405f, 174.5583f, func_215(31), true, false, true);
				ENTITY::_0x9587913B9E772D29(vLocal_187.x, 0);
				TASK::TASK_LOOK_AT_ENTITY(vLocal_187.x, Global_35, 15000, 0, 51, 0);
				__LIB_1__::func_683(&iLocal_89, 4096);
			}
		}
	}
	else if (!__LIB_0__::func_27(iLocal_89, 524288))
	{
		if (!__LIB_0__::func_27(iLocal_89, 1048576))
		{
			if (__LIB_14__::func_200(uParam0) < 4f && __LIB_14__::func_200(uParam0) > 0f)
			{
				TASK::CLEAR_PED_TASKS(vLocal_187.x, true, false);
				TASK::TASK_GO_STRAIGHT_TO_COORD(vLocal_187.x, func_214(31), 1f, -1, func_215(31), 1056964608 /* Float: 0.5f */, 0);
				__LIB_1__::func_683(&iLocal_89, 1048576);
			}
		}
		if (__LIB_14__::func_200(uParam0) < 1f && __LIB_14__::func_200(uParam0) > 0f)
		{
			if (!ENTITY::IS_ENTITY_DEAD(vLocal_187.x))
			{
				TASK::CLEAR_PED_TASKS(vLocal_187.x, true, false);
				func_332();
				__LIB_1__::func_683(&iLocal_89, 524288);
			}
		}
	}
	func_328(2, 0, func_187(5));
	if (__LIB_13__::func_218(uParam0, iLocal_15, "WarVet", 0, 1, 1))
	{
		if (!__LIB_0__::func_27(iLocal_89, 262144))
		{
			if (func_328(2, 0, func_187(5)))
			{
				ANIMSCENE::START_ANIM_SCENE(Local_314[2 /*16*/]);
				__LIB_1__::func_683(&iLocal_89, 262144);
			}
		}
	}
}

bool func_474(var uParam0, var uParam1)
{
	if (!__LIB_0__::func_27(iLocal_87, 1))
	{
		__LIB_1__::func_683(&iLocal_89, 1);
		return false;
	}
	if (!PED::_0x91A5F9CBEBB9D936(uLocal_298) && VOLUME::_DOES_VOLUME_EXIST(iLocal_175[4]))
	{
		uLocal_298 = __LIB_1__::func_391(iLocal_175[4], 0, 0, 0);
		__LIB_0__::func_568(func_214(42), 500f, 0);
		__LIB_2__::func_761(func_214(42), 500f, 0, 0);
		__LIB_1__::func_572(func_214(42), 500f, 0, 0, 1, 1, 0);
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_17))
	{
		if (__LIB_14__::func_53(uParam0, &iLocal_17, 1703.438f, 1530.076f, 146.2923f, 351.2185f, 1, 0, 1, 1, 1))
		{
			func_317(1703.438f, 1530.076f, 146.2923f, 351.2185f);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_17, 1703.438f, 1530.076f, 146.2923f, 351.2185f, true, false, true);
		}
	}
	__LIB_1__::func_683(&iLocal_89, 16384);
	if (!__LIB_0__::func_27(iLocal_89, 32768))
	{
		if (!ENTITY::IS_ENTITY_DEAD(vLocal_187.x))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(vLocal_187.x, 1711.425f, 1465.238f, 146.3654f, 210.44f, true, false, true);
			__LIB_1__::func_683(&iLocal_89, 32768);
		}
	}
	if (!__LIB_0__::func_27(iLocal_89, 65536))
	{
		if (!ENTITY::IS_ENTITY_DEAD(vLocal_187.x))
		{
			func_319();
		}
		__LIB_1__::func_683(&iLocal_89, 65536);
	}
	else if (!ENTITY::IS_ENTITY_DEAD(vLocal_187.x))
	{
		if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(vLocal_187.x, 0))
		{
			TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(vLocal_187.x, 2f, 0, -1082130432 /* Float: -1f */, 0);
		}
	}
	return true;
}

bool func_475(var uParam0)
{
	if (!__LIB_0__::func_899(&uLocal_148))
	{
		if (!__LIB_0__::func_27(iLocal_89, 4096))
		{
			if (!ENTITY::IS_ENTITY_DEAD(vLocal_187.x))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(vLocal_187.x, func_214(31), func_215(31), true, false, true);
				ENTITY::_0x9587913B9E772D29(vLocal_187.x, 0);
				__LIB_1__::func_683(&iLocal_89, 4096);
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(vLocal_187.x))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(vLocal_187.x, func_214(31), func_215(31), true, false, true);
			ENTITY::_0x9587913B9E772D29(vLocal_187.x, 0);
		}
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, func_214(47), func_215(47), true, false, true);
		__LIB_2__::func_259(&uLocal_148);
		__LIB_1__::func_561(&uLocal_148);
		return true;
	}
	else if (__LIB_9__::func_178(&uLocal_148) > 0f)
	{
		__LIB_1__::func_561(&uLocal_148);
		return true;
	}
	return false;
}

int func_497(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = -1;
	iVar1 = __LIB_0__::func_623(iParam0);
	if (__LIB_0__::func_83(iVar1))
	{
		iVar0 = Global_1835011[iVar1 /*74*/].f_1;
	}
	else
	{
		iVar2 = func_954(iParam0);
		if (__LIB_0__::func_5(iVar2))
		{
			iVar0 = Global_1347702[iVar2 /*49*/].f_15;
		}
		else if (iParam0 == joaat("CABR01"))
		{
			iVar0 = __LIB_1__::func_293(0, 10, 11, joaat("CABR01"));
		}
	}
	return iVar0;
}

int func_509(int iParam0, int iParam1)
{
	var uVar0;
	return func_961(&uVar0, iParam0, iParam1);
}

bool func_522(var uParam0, int iParam1, int iParam2, vector3 vParam3, float fParam6, bool bParam7, bool bParam8, float fParam9, int iParam10)
{
	if (__LIB_0__::func_272(*iParam1, 1))
	{
		__LIB_13__::func_630(iParam1, vParam3, fParam6);
		return true;
	}
	STREAMING::REQUEST_MODEL(iParam2, false);
	if (!STREAMING::HAS_MODEL_LOADED(iParam2))
	{
		return false;
	}
	*iParam1 = __LIB_12__::func_885(uParam0, iParam2, vParam3, fParam6, 1, 1, iParam10, 1, 1, bParam7, 1, 0);
	if (bParam8)
	{
		PED::_SET_PED_SCALE(*iParam1, fParam9);
	}
	if (__LIB_0__::func_272(*iParam1, 1))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam2);
		__LIB_13__::func_630(iParam1, vParam3, fParam6);
		return true;
	}
	return false;
}

void func_525(int iParam0)
{
	vLocal_187.f_2 = iParam0;
}

int func_552(int iParam0, bool bParam1)
{
	bool bVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	if (!__LIB_0__::func_272(*iParam0, 1))
	{
		return 1;
	}
	if (func_217(iParam0))
	{
		bVar0 = true;
	}
	if (((PED::IS_PED_FLEEING(*iParam0) || PED::IS_PED_IN_COMBAT(*iParam0, 0)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*iParam0, Global_35, 1, 1)) || FIRE::IS_ENTITY_ON_FIRE(*iParam0))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (bParam1)
		{
			TASK::CLEAR_PED_SECONDARY_TASK(*iParam0);
			TASK::TASK_SMART_FLEE_PED(*iParam0, Global_35, 10000f, -1, 0, 1077936128 /* Float: 3f */, 0);
			PED::SET_PED_KEEP_TASK(*iParam0, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
		}
		return 1;
	}
	return 0;
}

bool func_612(var uParam0)
{
	vector3 vVar0;
	float fVar3;
	vVar0 = { func_214(0) };
	fVar3 = func_215(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_15))
	{
		iLocal_15 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Global_1347702[uParam0->f_174 /*49*/].f_43);
	}
	if (func_522(uParam0, &iLocal_15, iLocal_171, vVar0, fVar3, 0, 0, 1065353216 /* Float: 1f */, 0))
	{
		if (__LIB_12__::func_871(uParam0) && !__LIB_12__::func_936(uParam0))
		{
			__LIB_0__::func_862(iLocal_15, joaat("META_OUTFIT_COOL_WEATHER"));
		}
		else
		{
			__LIB_0__::func_862(iLocal_15, -2098602552);
		}
		PED::_0x923583741DC87BCE(iLocal_15, "war_veteran");
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_15, false);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_15, joaat("REL_PLAYER_ALLY"));
		TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(iLocal_15, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_15, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_15, 186, false);
		ENTITY::_0x18FF3110CF47115D(iLocal_15, 7, 0);
		__LIB_3__::func_459(iLocal_15, 0);
		__LIB_1__::func_766(iLocal_15, joaat("WEAPON_REPEATER_CARBINE"), 0, 1, 0, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		if (!__LIB_12__::func_871(uParam0))
		{
			TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_15, 1700.148f, 1508.068f, 147.3328f, 0.5f, -1, false, false, true, false);
		}
		__LIB_12__::func_875(uParam0, iLocal_15, "RWARV_VETERAN", 1);
		return true;
	}
	return false;
}

bool func_613(var uParam0, int iParam1)
{
	vector3 vVar0;
	float fVar3;
	if (bLocal_302)
	{
		return true;
	}
	vVar0 = { func_214(1) };
	fVar3 = func_215(1);
	if (func_522(uParam0, &iLocal_16, iLocal_172, vVar0, fVar3, 0, 0, 1065353216 /* Float: 1f */, 1))
	{
		__LIB_0__::func_862(iLocal_16, joaat("META_HORSE_SADDLE_ONLY"));
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_16, iLocal_190);
		AITRANSPORT::_0xBA8818212633500A(iLocal_16, 0, 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_16, 324, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_16, 419, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_16, 367, true);
		ENTITY::_0x18FF3110CF47115D(iLocal_16, 9, 0);
		PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), iLocal_16, 33, 0, 1);
		__LIB_5__::func_437(iLocal_16, "HORSE_NAME_BUELL_WARVETS", 1);
		__LIB_7__::func_345(iLocal_16, 1);
		PED::_0xAE6004120C18DF97(iLocal_16, 0, 0);
		PED::_0xAE6004120C18DF97(iLocal_16, 1, 0);
		PED::SET_PED_CONFIG_FLAG(iLocal_16, 297, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_16, 300, true);
		if (func_1043(&iLocal_16, vVar0, fVar3, iParam1))
		{
			bLocal_302 = true;
			return true;
		}
	}
	return false;
}

bool func_614(var uParam0)
{
	int iVar0;
	if (__LIB_0__::func_27(iLocal_89, 2))
	{
		return true;
	}
	if (!__LIB_12__::func_871(uParam0) || __LIB_12__::func_936(uParam0))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_25[0 /*9*/]))
		{
			STREAMING::REQUEST_MODEL(Local_25[0 /*9*/].f_7, false);
			if (STREAMING::HAS_MODEL_LOADED(Local_25[0 /*9*/].f_7))
			{
				if (Local_25[0 /*9*/].f_8 == 0)
				{
					Local_25[0 /*9*/].f_8 = ENTITY::_0x6F3068258A499E52(Local_25[0 /*9*/].f_7, Local_25[0 /*9*/].f_1, 7);
				}
				else if (ENTITY::_0x1FF441D7954F8709(Local_25[0 /*9*/].f_8))
				{
					Local_25[0 /*9*/] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(Local_25[0 /*9*/].f_8));
				}
			}
			return false;
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(Local_25[1 /*9*/]))
		{
			STREAMING::REQUEST_MODEL(Local_25[1 /*9*/].f_7, false);
			if (STREAMING::HAS_MODEL_LOADED(Local_25[1 /*9*/].f_7))
			{
				if (Local_25[1 /*9*/].f_8 == 0)
				{
					Local_25[1 /*9*/].f_8 = ENTITY::_0x6F3068258A499E52(Local_25[1 /*9*/].f_7, Local_25[1 /*9*/].f_1, 7);
				}
				else if (ENTITY::_0x1FF441D7954F8709(Local_25[1 /*9*/].f_8))
				{
					Local_25[1 /*9*/] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(Local_25[1 /*9*/].f_8));
				}
			}
			return false;
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(Local_25[4 /*9*/]))
		{
			STREAMING::REQUEST_MODEL(Local_25[4 /*9*/].f_7, false);
			if (STREAMING::HAS_MODEL_LOADED(Local_25[4 /*9*/].f_7))
			{
				if (Local_25[4 /*9*/].f_8 == 0)
				{
					Local_25[4 /*9*/].f_8 = ENTITY::_0x6F3068258A499E52(Local_25[4 /*9*/].f_7, Local_25[4 /*9*/].f_1, 7);
				}
				else if (ENTITY::_0x1FF441D7954F8709(Local_25[4 /*9*/].f_8))
				{
					Local_25[4 /*9*/] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(Local_25[4 /*9*/].f_8));
				}
			}
			return false;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_25[2 /*9*/]))
	{
		STREAMING::REQUEST_MODEL(Local_25[2 /*9*/].f_7, false);
		if (STREAMING::HAS_MODEL_LOADED(Local_25[2 /*9*/].f_7))
		{
			Local_25[2 /*9*/] = OBJECT::CREATE_OBJECT_NO_OFFSET(Local_25[2 /*9*/].f_7, Local_25[2 /*9*/].f_1, true, true, false, false);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Local_25[3 /*9*/]))
	{
		STREAMING::REQUEST_MODEL(Local_25[3 /*9*/].f_7, false);
		if (STREAMING::HAS_MODEL_LOADED(Local_25[3 /*9*/].f_7))
		{
			Local_25[3 /*9*/] = OBJECT::CREATE_OBJECT_NO_OFFSET(Local_25[3 /*9*/].f_7, Local_25[3 /*9*/].f_1, true, true, false, false);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Local_25[5 /*9*/]))
	{
		STREAMING::REQUEST_MODEL(Local_25[5 /*9*/].f_7, false);
		if (STREAMING::HAS_MODEL_LOADED(Local_25[5 /*9*/].f_7))
		{
			Local_25[5 /*9*/] = WEAPON::_CREATE_WEAPON_OBJECT(joaat("WEAPON_REPEATER_CARBINE"), 5, Local_25[5 /*9*/].f_1, true, 1f);
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_25[iVar0 /*9*/].f_7);
			ENTITY::SET_ENTITY_ROTATION(Local_25[iVar0 /*9*/], Local_25[iVar0 /*9*/].f_4, 2, true);
			iVar0++;
		}
		__LIB_1__::func_683(&iLocal_89, 2);
		return true;
	}
	return false;
}

void func_661(int iParam0)
{
	iLocal_185 = iParam0;
}

void func_663(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_1109(iParam0);
			break;
		case 1:
			func_1110(iParam0);
			break;
		case 2:
			func_1110(iParam0);
			break;
		case 3:
			func_1111(iParam0);
			break;
	}
}

char* func_669(int iParam0)
{
	if (!__LIB_0__::func_181())
	{
		switch (iParam0)
		{
			case 1:
				return "WAR4_NOTCHASING";
			case 2:
				return "WAR4_SHOOTA";
			case 4:
				return "WAR4_SHOUTA";
			case 8:
				return "WAR4_SHITA";
			case 16:
				return "WAR4_SEARCHA";
			case 32:
				return "WAR4_CALLOVER";
			case 64:
				return "WAR4_MOUNTUP";
			case 128:
				return "WAR4_TRACK_STRT";
			case 256:
				return "WAR4_TRACK_1";
			case 512:
				return "WAR4_TRACK_2";
			case 1024:
				return "WAR4_TRACK_3";
			case 2048:
				return "WAR4_TRACK_END";
			case 4096:
				return "WAR4_TRACK_COME";
			case 8192:
				return "WAR4_SPLITUP";
			case 16384:
				return "WAR4_RIDE_OFF";
			case 32768:
				return "WAR4_SPLITUP_NO";
			case 65536:
				return "WAR4_SEEWOLFA";
			case 131072:
				return "WAR4_SHOTSA";
			case 262144:
				return "WAR4_BOARCHASEA";
			case 524288:
				return "WAR4_SEECORPSE";
			case 1048576:
				return "WAR4_KILLBOARA";
			case 2097152:
				return "WAR4_BUELL_A";
			case 4194304:
				return "WAR4_IG1_INSPCT";
			case 8388608:
				return "WAR4_IG1_DAMN";
		}
	}
	else
	{
		switch (iParam0)
		{
			case 1:
				return "WAR4_NOTCHASING";
			case 2:
				return "WAR4_SHOOTJ";
			case 4:
				return "WAR4_SHOUTJ";
			case 8:
				return "WAR4_SHITJ";
			case 16:
				return "WAR4_SEARCHJ";
			case 32:
				return "WAR4_CALLOVER";
			case 64:
				return "WAR4_MOUNTUP";
			case 128:
				return "WAR4_TRACKSTRTJ";
			case 256:
				return "WAR4_TRACK_1";
			case 512:
				return "WAR4_TRACK_2J";
			case 1024:
				return "WAR4_TRACK_3";
			case 2048:
				return "WAR4_TRACK_ENDJ";
			case 4096:
				return "WAR4_TRACK_COME";
			case 8192:
				return "WAR4_SPLITUPJ";
			case 16384:
				return "WAR4_RIDE_OFF";
			case 32768:
				return "WAR4_SPLITUP_NO";
			case 65536:
				return "WAR4_SEEWOLFJ";
			case 131072:
				return "WAR4_SHOTSJ";
			case 262144:
				return "WAR4_BOARCHASEJ";
			case 524288:
				return "WAR4_SEECORPSEJ";
			case 1048576:
				return "WAR4_KILLBOARJ";
			case 2097152:
				return "WAR4_BUELL_J";
			case 4194304:
				return "WAR4_IG1_INSPCJ";
			case 8388608:
				return "WAR4_IG1_DAMNJ";
		}
	}
	return "INVALID";
}

void func_694(var uParam0)
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
			func_1137(&(uParam0->f_416));
		}
		func_1138(&(uParam0->f_404), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_12__::func_706(uParam0, 0f, 0f, 0f);
		func_1140(uParam0);
		func_1141(uParam0);
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

void func_701(var uParam0)
{
	if (!__LIB_0__::func_84(uParam0, 536870912))
	{
		__LIB_0__::func_106(uParam0, 1);
		func_702(&(uParam0->f_405), uParam0->f_416);
		__LIB_1__::func_436();
		__LIB_0__::func_88(uParam0, 536870912);
	}
	if (__LIB_0__::func_84(uParam0, 524288))
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	__LIB_12__::func_854(uParam0);
	__LIB_8__::func_726(uParam0, 1);
	__LIB_12__::func_841(uParam0);
	__LIB_12__::func_707(uParam0);
	__LIB_0__::func_108(uParam0);
	__LIB_12__::func_758(uParam0, 4);
	__LIB_12__::func_846(uParam0);
	__LIB_0__::func_99(uParam0, 1);
	__LIB_12__::func_679(uParam0);
	__LIB_1__::func_561(&(uParam0->f_1));
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_348) && ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_348))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_348);
	}
	__LIB_4__::func_716(!__LIB_0__::func_1(uParam0->f_405, 128));
	if (!__LIB_0__::func_1(uParam0->f_405, 128))
	{
		__LIB_1__::func_625();
	}
}

void func_702(var uParam0, int iParam1)
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
		func_1155(Global_35, joaat("CLOTHING_ITEM_NECKWEAR_NONE"), 0, 1742327865, 0, 1, 0, 0, 1, 0);
		__LIB_1__::func_704(joaat("KIT_BANDANA"), 0);
	}
	__LIB_1__::func_550(&(Global_1946804.f_1497), Global_35, 1, 49217, 1, 1, 1);
	if (Global_1359489.f_16 & 4194304 != 0)
	{
		Global_1359489.f_16 = (Global_1359489.f_16 - Global_1359489.f_16 & 4194304);
	}
	*uParam0 = 0;
}

void func_741(var uParam0)
{
	if (__LIB_0__::func_71(iLocal_15))
	{
		func_324();
	}
	if (__LIB_0__::func_48(Global_35, iLocal_15, 15f, 1) && __LIB_0__::func_48(iLocal_15, iLocal_16, 10f, 1))
	{
		func_336(uParam0, 1, 1);
	}
}

void func_742(var uParam0)
{
	if (__LIB_0__::func_266(iLocal_15, 1807.904f, 1389.333f, 179.759f, 6f, 1, 1))
	{
		func_1208();
	}
	if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_15, 0))
	{
		if (TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_15) < 3)
		{
			TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_15, 1.5f, 0, -1082130432 /* Float: -1f */, 0);
		}
		else if (TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_15) > 111)
		{
			TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_15, 0.55f, 0, -1082130432 /* Float: -1f */, 0);
		}
		else if (TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_15) > 109)
		{
			TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_15, 1f, 0, -1082130432 /* Float: -1f */, 0);
		}
		else if (TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_15) > 104)
		{
			TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_15, 1.5f, 0, -1082130432 /* Float: -1f */, 0);
		}
		else if (TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_15) > 93)
		{
			if (iLocal_183 != 1)
			{
				TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_15, 0f, 0, -1082130432 /* Float: -1f */, 0);
			}
			else
			{
				TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_15, 1.75f, 0, -1082130432 /* Float: -1f */, 0);
			}
		}
		else
		{
			TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_15, 2f, 0, -1082130432 /* Float: -1f */, 0);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_17))
	{
		if (!bLocal_299)
		{
			if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_100) && __LIB_0__::func_163(iLocal_15, 658540077))
			{
				TASK::TASK_FOLLOW_ENTITY_ALONG_WAYPOINT_RECORDING_AT_OFFSET(iLocal_17, iLocal_15, sLocal_100, 0f, -4f, -5, 10, -1, 0);
				bLocal_299 = true;
			}
		}
	}
}

void func_743(var uParam0)
{
	int iVar0;
	TASK::TASK_LOOK_AT_ENTITY(iLocal_15, Global_35, -1, 0, 41, 0);
	if (__LIB_0__::func_48(iLocal_15, Global_35, 7f, 1))
	{
		if (!__LIB_0__::func_27(iLocal_90, 128))
		{
			func_336(uParam0, 128, 1);
		}
		else if (__LIB_0__::func_71(Global_35) || ((__LIB_6__::func_912(Global_35, iLocal_15, sLocal_96, 1112014848 /* Float: 50f */) && !__LIB_6__::func_903(func_669(128))) && !__LIB_0__::func_48(Global_35, iLocal_15, 5f, 1)))
		{
			func_1210();
			return;
		}
		else if (__LIB_6__::func_903(func_669(128)) && AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE(func_669(128)) > 0)
		{
			if (!__LIB_0__::func_163(iLocal_15, 1464580341))
			{
				TASK::TASK_TURN_PED_TO_FACE_COORD(iLocal_15, 1845.85f, 1401.878f, 181.6455f, -1);
			}
		}
	}
	if (!__LIB_0__::func_899(&uLocal_105))
	{
		if (((__LIB_2__::func_123(iLocal_15, Global_35, 0.5f) && __LIB_0__::func_48(Global_35, iLocal_15, 60f, 1)) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iLocal_15, Global_35, 17)) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Global_35, iLocal_15, 17))
		{
			if (!__LIB_0__::func_27(iLocal_90, 32))
			{
				func_336(uParam0, 32, 1);
			}
			else
			{
				__LIB_13__::func_495(7);
				fLocal_296 = __LIB_0__::func_665(Global_35, iLocal_15, 1, 1);
				if (!MAP::DOES_BLIP_EXIST(iLocal_83))
				{
					iLocal_83 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_COMPANION"), iLocal_15);
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_83, "WARV4_BLP_VET");
					MAP::_BLIP_SET_MODIFIER(iLocal_83, -546708623);
				}
				if (!__LIB_0__::func_27(iLocal_88, 16384))
				{
					__LIB_12__::func_883(uParam0, func_756(8), 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					__LIB_1__::func_683(&iLocal_88, 16384);
				}
				else
				{
					__LIB_13__::func_89(uParam0, func_756(8), 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				}
				__LIB_2__::func_259(&uLocal_105);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_17))
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1801.034f, 1391.406f, 178.8436f, 0.55f, -1, 0.25f, 0, 40000f);
					TASK::TASK_STAND_STILL(0, -1);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_17, iVar0);
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				}
			}
		}
	}
	else if (__LIB_9__::func_178(&uLocal_105) > 12f)
	{
		if (!__LIB_0__::func_48(Global_35, iLocal_15, 7f, 1))
		{
			func_336(uParam0, 64, 1);
		}
	}
	else if (__LIB_9__::func_178(&uLocal_105) > 10f && fLocal_296 <= __LIB_0__::func_665(Global_35, iLocal_15, 1, 1))
	{
		if (!__LIB_0__::func_27(iLocal_88, 8))
		{
			__LIB_12__::func_883(uParam0, func_756(8), 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			__LIB_1__::func_683(&iLocal_88, 8);
		}
	}
}

void func_744(var uParam0)
{
	func_1213(uParam0);
	if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_15, sLocal_96))
	{
		if (!__LIB_0__::func_48(iLocal_15, Global_35, 10f, 1))
		{
			if (!__LIB_6__::func_912(Global_35, iLocal_15, sLocal_96, 1112014848 /* Float: 50f */) && !__LIB_0__::func_48(iLocal_15, Global_35, 15f, 1))
			{
				if (!__LIB_0__::func_27(iLocal_87, 1073741824 /* Float: 2f */))
				{
					__LIB_12__::func_883(uParam0, func_756(2), 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					__LIB_1__::func_683(&iLocal_87, 1073741824 /* Float: 2f */);
				}
				if (!TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(iLocal_15))
				{
					TASK::WAYPOINT_PLAYBACK_PAUSE(iLocal_15, 1, 0, 0);
					TASK::TASK_LOOK_AT_ENTITY(iLocal_15, Global_35, -1, 0, 51, 0);
				}
				else if (iLocal_91 < 3)
				{
					if (__LIB_9__::func_178(&uLocal_120) > IntToFloat(iLocal_129) && !__LIB_6__::func_904())
					{
						func_336(uParam0, 4096, 0);
						__LIB_2__::func_259(&uLocal_120);
						iLocal_129 = MISC::GET_RANDOM_INT_IN_RANGE(10, 12);
						iLocal_91++;
					}
				}
			}
			else
			{
				if (!__LIB_0__::func_48(iLocal_15, Global_35, 20f, 1))
				{
					if (!__LIB_0__::func_27(iLocal_87, 1073741824 /* Float: 2f */))
					{
						__LIB_12__::func_883(uParam0, func_756(2), 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
						__LIB_1__::func_683(&iLocal_87, 1073741824 /* Float: 2f */);
					}
					if (__LIB_9__::func_178(&uLocal_120) > IntToFloat(iLocal_129) && !__LIB_6__::func_904())
					{
						func_336(uParam0, 4096, 0);
						__LIB_2__::func_259(&uLocal_120);
						iLocal_129 = MISC::GET_RANDOM_INT_IN_RANGE(10, 12);
						iLocal_91++;
					}
				}
				if (!__LIB_0__::func_48(iLocal_15, Global_35, 15f, 1))
				{
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_15, 2f, 0, -1082130432 /* Float: -1f */, 0);
				}
				else if (!__LIB_0__::func_48(iLocal_15, Global_35, 10f, 1))
				{
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_15, 1.5f, 0, -1082130432 /* Float: -1f */, 0);
				}
			}
		}
		else if (TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(iLocal_15))
		{
			if (__LIB_0__::func_27(iLocal_87, 1073741824 /* Float: 2f */))
			{
				__LIB_1__::func_681(&iLocal_87, 1073741824 /* Float: 2f */);
				UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
				__LIB_13__::func_89(uParam0, func_756(8), 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			}
			TASK::WAYPOINT_PLAYBACK_RESUME(iLocal_15, false, -1, 0);
		}
		else
		{
			TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_15, 0.8f, 0, -1082130432 /* Float: -1f */, 0);
			TASK::TASK_LOOK_AT_COORD(iLocal_15, func_1214(), 5, 8, 41, 0);
			if (__LIB_0__::func_27(iLocal_87, 1073741824 /* Float: 2f */))
			{
				__LIB_1__::func_681(&iLocal_87, 1073741824 /* Float: 2f */);
				UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
				__LIB_13__::func_89(uParam0, func_756(8), 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			}
		}
	}
}

void func_745(var uParam0)
{
	if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_15, sLocal_97))
	{
		if (__LIB_0__::func_48(iLocal_15, Global_35, 8f, 1))
		{
			if (__LIB_9__::func_178(&uLocal_133) > 10f)
			{
				if (!TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(iLocal_15))
				{
					func_336(uParam0, 32768, 1);
					TASK::WAYPOINT_PLAYBACK_PAUSE(iLocal_15, 1, 0, 0);
					TASK::TASK_LOOK_AT_ENTITY(iLocal_15, Global_35, -1, 0, 51, 0);
					return;
				}
			}
		}
		else if (TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(iLocal_15))
		{
			TASK::WAYPOINT_PLAYBACK_RESUME(iLocal_15, false, -1, 0);
		}
	}
}

void func_746()
{
	if (__LIB_0__::func_266(iLocal_15, func_214(23), 2.5f, 1, 1) && func_328(1, 0, func_187(4)))
	{
		func_329(0, 0);
		return;
	}
	if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_15, sLocal_97))
	{
		if (!__LIB_0__::func_27(iLocal_87, 16))
		{
			if (__LIB_0__::func_27(iLocal_87, 4))
			{
				__LIB_1__::func_683(&iLocal_87, 16);
			}
		}
		else
		{
			TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_15, 2f, 1, -1082130432 /* Float: -1f */, 0);
		}
		if (!__LIB_0__::func_27(iLocal_87, 4))
		{
			if (!TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(iLocal_15))
			{
				TASK::WAYPOINT_PLAYBACK_STOP_AIMING_OR_SHOOTING(iLocal_15);
				TASK::WAYPOINT_PLAYBACK_PAUSE(iLocal_15, 0, 0, 0);
				return;
			}
		}
		else if (TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(iLocal_15))
		{
			TASK::WAYPOINT_PLAYBACK_RESUME(iLocal_15, true, -1, 0);
			if (!__LIB_0__::func_255(iLocal_16, 0))
			{
				PED::FORCE_PED_MOTION_STATE(iLocal_16, joaat("MOTIONSTATE_RUN"), false, 0, false);
				PED::_0x2208438012482A1A(iLocal_16, false, false);
				PED::_0x2208438012482A1A(iLocal_15, false, false);
			}
		}
	}
	else if (__LIB_0__::func_27(iLocal_87, 4))
	{
		TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_15, sLocal_97, 0, 4196462, -1, 0, 0, -1);
		if (!__LIB_0__::func_255(iLocal_16, 0))
		{
			PED::FORCE_PED_MOTION_STATE(iLocal_16, joaat("MOTIONSTATE_RUN"), false, 0, false);
			PED::_0x2208438012482A1A(iLocal_16, false, false);
			PED::_0x2208438012482A1A(iLocal_15, false, false);
		}
	}
}

void func_747()
{
	if (MAP::DOES_BLIP_EXIST(vLocal_187.y))
	{
		if (__LIB_0__::func_266(vLocal_187.x, func_214(10), 8f, 1, 1))
		{
			if (MAP::DOES_BLIP_EXIST(vLocal_187.y))
			{
				MAP::_BLIP_SET_MODIFIER(vLocal_187.y, -1269631044);
			}
		}
	}
	else if (__LIB_0__::func_266(vLocal_187.x, func_214(10), 20f, 1, 1))
	{
		if (__LIB_0__::func_899(&uLocal_310))
		{
			__LIB_1__::func_561(&uLocal_310);
		}
		func_325();
		return;
	}
	if (iLocal_309 == 0)
	{
		if (!__LIB_0__::func_899(&uLocal_310))
		{
			__LIB_2__::func_259(&uLocal_310);
		}
		else if (__LIB_9__::func_178(&uLocal_310) > 5f)
		{
			AUDIO::PLAY_ANIMAL_VOCALIZATION(vLocal_187.x, "BOAR_EXCITED", false);
			__LIB_2__::func_259(&uLocal_310);
			iLocal_309++;
		}
	}
	else if (iLocal_309 == 1)
	{
		if (__LIB_9__::func_178(&uLocal_310) > 7f)
		{
			AUDIO::PLAY_ANIMAL_VOCALIZATION(vLocal_187.x, "BOAR_SNORT_AND_BREATH", false);
			__LIB_2__::func_259(&uLocal_310);
			iLocal_309++;
		}
	}
	else if (iLocal_309 == 2)
	{
		if (__LIB_9__::func_178(&uLocal_310) > 8f)
		{
			AUDIO::PLAY_ANIMAL_VOCALIZATION(vLocal_187.x, "BOAR_EXCITED", false);
			__LIB_2__::func_259(&uLocal_310);
			iLocal_309++;
		}
	}
	else if (iLocal_309 == 3)
	{
		if (__LIB_9__::func_178(&uLocal_310) > 10f)
		{
			AUDIO::PLAY_ANIMAL_VOCALIZATION(vLocal_187.x, "BOAR_SNORT_AND_BREATH", false);
			__LIB_2__::func_259(&uLocal_310);
			iLocal_309++;
		}
	}
	if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(vLocal_187.x, 0))
	{
		if (TASK::GET_PED_WAYPOINT_PROGRESS(vLocal_187.x) <= 9)
		{
			TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(vLocal_187.x, 2f, 0, -1082130432 /* Float: -1f */, 0);
		}
		else
		{
			TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(vLocal_187.x, 3f, 0, -1082130432 /* Float: -1f */, 0);
		}
	}
}

void func_750()
{
	if (__LIB_0__::func_266(vLocal_187.x, func_214(23), 2.5f, 1, 1) || ((TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(vLocal_187.x, 0) && TASK::GET_PED_WAYPOINT_PROGRESS(vLocal_187.x) > 44) && ENTITY::IS_ENTITY_OCCLUDED(vLocal_187.x)))
	{
		func_330();
		return;
	}
	if (!bLocal_300)
	{
		if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_97) && __LIB_0__::func_163(iLocal_15, 658540077))
		{
			TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(vLocal_187.x, 3f, 0, -1082130432 /* Float: -1f */, 0);
			bLocal_300 = true;
		}
	}
	if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(vLocal_187.x, 0))
	{
		if (__LIB_0__::func_48(vLocal_187.x, iLocal_15, 10f, 1))
		{
			TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(vLocal_187.x, 3f, 0, -1082130432 /* Float: -1f */, 0);
		}
		else
		{
			TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(vLocal_187.x, 3f, 0, -1082130432 /* Float: -1f */, 0);
		}
		if (!__LIB_0__::func_27(iLocal_87, 32))
		{
			if (TASK::GET_PED_WAYPOINT_PROGRESS(vLocal_187.x) > 49)
			{
				__LIB_1__::func_683(&iLocal_87, 32);
			}
		}
	}
}

char* func_756(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "WARV4_O_KILL";
		case 2:
			return "WARV4_O_GOVET";
		case 4:
			return "WARV4_O_FOLLOWSOLO";
		case 8:
			return "WARV4_O_FOLLOW";
		case 32:
			return "WARV4_O_SEARCH";
		case 64:
			return "WARV4_O_SEARCH";
		case 128:
			return "WARV4_O_WOLF";
		case 256:
			return "WARV4_O_INGAME";
		case 512:
			return "WARV4_O_GUNSHOT";
		case 1024:
			return "WARV4_O_CHECK1";
		case 2048:
			return "WARV4_O_CHECK2";
		case 4096:
			return "RWARV_HLP_TRACK";
		case 8192:
			return "WARV4_O_WAIT";
	}
	return "INVALID";
}

void func_757()
{
	WEAPON::SET_CURRENT_PED_WEAPON(iLocal_15, WEAPON::GET_BEST_PED_WEAPON(iLocal_15, false, false), true, 0, false, false);
	__LIB_1__::func_562(iLocal_15, iLocal_16, 0, 1.5f, 20000);
	TASK::_0x42CFD8FD8CC8DC69(iLocal_15, 1);
	func_661(1);
}

void func_762()
{
	__LIB_8__::func_774(iLocal_15, sLocal_97, 4194350);
	__LIB_2__::func_259(&uLocal_133);
	if (MAP::DOES_BLIP_EXIST(iLocal_83))
	{
		MAP::_BLIP_SET_MODIFIER(iLocal_83, -1269631044);
	}
	if (PED::DOES_GROUP_EXIST(iLocal_181))
	{
		if (__LIB_0__::func_272(iLocal_15, 0))
		{
			PED::REMOVE_PED_FROM_GROUP(iLocal_15);
		}
		PED::REMOVE_GROUP(iLocal_181);
		PLAYER::_0x12E09E278C6C29B7(PLAYER::PLAYER_ID());
	}
	func_661(5);
}

void func_765(var uParam0)
{
	func_327();
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(vLocal_187.x, func_214(20), func_215(20), true, false, true);
	__LIB_12__::func_883(uParam0, func_756(512), 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
	__LIB_2__::func_259(&uLocal_293);
	fLocal_296 = __LIB_0__::func_94(Global_35, func_214(13), 1);
	__LIB_0__::func_325(&iLocal_81);
	iLocal_81 = __LIB_8__::func_777(-308585968, func_214(13), 10f, 1);
	MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_81, "WARV4_BLP_GOTO");
	iLocal_186 = 2;
}

void func_766(vector3 vParam0, vector3 vParam3, int iParam6)
{
	struct<15> Var0;
	Var0.f_8 = -1082130432;
	if (iLocal_167 == joaat("WEAPON_MELEE_KNIFE"))
	{
		iLocal_167 = WEAPON::GET_BEST_PED_WEAPON(iLocal_15, false, false);
	}
	Var0 = { vParam0 };
	Var0.f_3 = { vParam3 };
	Var0.f_7 = 0f;
	Var0.f_12 = 1;
	Var0.f_6 = iLocal_167;
	Var0.f_13 = 0;
	Var0.f_14 = 1;
	if (!__LIB_0__::func_27(iLocal_87, iParam6))
	{
		MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Var0);
		__LIB_1__::func_683(&iLocal_87, iParam6);
	}
}

void func_768()
{
	int iVar0;
	if (!__LIB_0__::func_139(iLocal_24))
	{
		if (__LIB_0__::func_48(Global_35, iLocal_23, 3f, 1) && __LIB_1__::func_374(Global_35, ENTITY::GET_ENTITY_COORDS(iLocal_23, true, false), 0))
		{
			iLocal_24 = __LIB_2__::func_403("INSPECT_GENERIC", joaat("INPUT_CONTEXT_Y"), iLocal_23, 1, 0, 1, 0, 4, 3f, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("PLAYER_FOCUS_TIMING"), 0, 0);
			if (__LIB_0__::func_139(iLocal_24))
			{
				iVar0 = 0;
				__LIB_1__::func_574(&iLocal_24, iLocal_23);
				__LIB_1__::func_522(iLocal_24, 13, 1, 1);
				if (!__LIB_0__::func_27(iLocal_87, 8192) && !__LIB_0__::func_27(iLocal_87, 8388608))
				{
					__LIB_1__::func_382(iLocal_24, 1, 1);
					HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(iLocal_23, 3f, 1, 1, 0, "WARV4_CXT_WOLFD", 0);
				}
				else
				{
					__LIB_1__::func_382(iLocal_24, 0, 1);
					__LIB_1__::func_683(&iVar0, 8);
					HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(iLocal_23, 3f, 1, 1, 0, "WARV4_CXT_WOLFI", iVar0);
				}
			}
		}
	}
	else
	{
		if (__LIB_0__::func_139(iLocal_24))
		{
			iVar0 = 0;
			if (!__LIB_0__::func_27(iLocal_87, 8192) && !__LIB_0__::func_27(iLocal_87, 8388608))
			{
				__LIB_1__::func_382(iLocal_24, 1, 1);
				HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(iLocal_23, 3f, 1, 1, 0, "WARV4_CXT_WOLFD", 0);
			}
			else
			{
				__LIB_1__::func_382(iLocal_24, 0, 1);
				__LIB_1__::func_683(&iVar0, 8);
				HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(iLocal_23, 3f, 1, 1, 0, "WARV4_CXT_WOLFI", iVar0);
			}
		}
		if ((__LIB_0__::func_139(iLocal_24) && __LIB_0__::func_572(iLocal_24, 0)) && __LIB_0__::func_486(iLocal_24, 1) > 0f)
		{
			if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
			{
				CAM::SET_GAMEPLAY_ENTITY_HINT(iLocal_23, 0f, 0f, 0f, true, 2000, 2000, 2000, 0);
			}
		}
		else if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			CAM::STOP_GAMEPLAY_HINT(false);
		}
		if ((__LIB_0__::func_139(iLocal_24) && __LIB_0__::func_572(iLocal_24, 0)) && __LIB_0__::func_567(iLocal_24, 1))
		{
			if (iLocal_14 != 4)
			{
				iLocal_14 = 4;
			}
			func_769();
			__LIB_12__::func_773(1, 0, 1, 1);
			__LIB_5__::func_437(iLocal_23, "WARV4_CXT_WOLFI", 1);
			__LIB_1__::func_683(&iLocal_87, 8192);
		}
	}
	if (__LIB_0__::func_139(iLocal_24))
	{
		if (!__LIB_0__::func_48(Global_35, iLocal_23, 3f, 1) || !__LIB_1__::func_374(Global_35, ENTITY::GET_ENTITY_COORDS(iLocal_23, true, false), 0))
		{
			__LIB_1__::func_281(&iLocal_24, 1, 1);
		}
	}
}

void func_769()
{
	char* sVar0;
	if (!__LIB_0__::func_27(iLocal_89, 128))
	{
		if (__LIB_0__::func_27(iLocal_89, 8))
		{
			sVar0 = func_187(0);
			func_328(0, 0, sVar0);
		}
		else if (__LIB_0__::func_27(iLocal_89, 16))
		{
			sVar0 = func_187(1);
			func_328(0, 0, sVar0);
		}
		else if (__LIB_0__::func_27(iLocal_89, 64))
		{
			sVar0 = func_187(2);
			func_328(0, 0, sVar0);
		}
		else if (__LIB_0__::func_27(iLocal_89, 32))
		{
			sVar0 = func_187(3);
			func_328(0, 0, sVar0);
		}
		if (func_1226())
		{
			if (func_328(0, 0, sVar0))
			{
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_314[0 /*16*/], Global_36, ENTITY::GET_ENTITY_ROTATION(Global_35, 2), 2);
				ANIMSCENE::START_ANIM_SCENE(Local_314[0 /*16*/]);
				__LIB_1__::func_683(&iLocal_89, 128);
			}
		}
	}
}

void func_770()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	vLocal_168 = { func_214(16) };
	fVar0 = __LIB_0__::func_94(Global_35, func_214(14), 1);
	fVar1 = __LIB_0__::func_94(Global_35, func_214(15), 1);
	fVar2 = __LIB_0__::func_94(Global_35, func_214(16), 1);
	fVar3 = __LIB_0__::func_94(Global_35, func_214(17), 1);
	if (fVar0 < fVar1)
	{
		vLocal_168 = { func_214(14) };
	}
	else if (fVar1 < fVar2)
	{
		vLocal_168 = { func_214(15) };
	}
	else if (fVar2 < fVar3)
	{
		vLocal_168 = { func_214(16) };
	}
	else
	{
		vLocal_168 = { func_214(17) };
	}
}

void func_772()
{
	if (__LIB_0__::func_266(Global_35, 1869.455f, 1300.25f, 203.9105f, 11f, 1, 1))
	{
		if (__LIB_0__::func_71(Global_35))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_17, 1.5f);
		}
	}
}

bool func_773()
{
	int iVar0;
	iVar0 = 0;
	if ((__LIB_0__::func_48(Global_35, iLocal_15, 13f, 0) && ENTITY::IS_ENTITY_ON_SCREEN(iLocal_15)) && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_15))
	{
		iVar0 = 1;
	}
	else if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_15) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_15, false))
	{
		iVar0 = 1;
	}
	else if (func_1227(iLocal_15, 1065353216 /* Float: 1f */, 0, 1059481190 /* Float: 0.65f */, 1051931443 /* Float: 0.35f */, 1060320051 /* Float: 0.7f */, 1036831949 /* Float: 0.1f */))
	{
		iVar0 = 1;
	}
	else if (__LIB_2__::func_215(Global_35, iLocal_15, 1, 40f, 0))
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		return true;
	}
	return false;
}

bool func_776(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
				func_776(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
		func_1252(28);
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
			func_1259(iParam0);
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
						func_776(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_776(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_776(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_776(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_776(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_776(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_776(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_1252(24);
				if (Global_1946804.f_1497.f_1[27 /*3*/] == Global_1946804.f_57[27 /*11*/])
				{
					func_1155(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_OFFHAND_HOLSTER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 0);
				}
				if (__LIB_0__::func_918(&iVar9, 0))
				{
					__LIB_1__::func_708(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case joaat("UPGRADE_BANDOLIER"):
				if (__LIB_0__::func_2() == -1 && Global_1946804.f_1497.f_1[25 /*3*/] == Global_1946804.f_57[25 /*11*/])
				{
					func_1155(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_BANDOLIER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_1"), 1, 1, 1, 0, 1, 0);
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
					func_776(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_776(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
			func_1298(iParam0);
		}
		if (__LIB_0__::func_192(iParam0, -1979000645))
		{
			func_1299(iParam0);
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
				func_776(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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

void func_778()
{
	if (!__LIB_0__::func_27(iLocal_87, -2147483648))
	{
		PED::SET_RAGDOLL_BLOCKING_FLAGS(vLocal_187.x, 0);
		PED::SET_PED_CAN_TORSO_REACT_IK(vLocal_187.x, true);
		__LIB_2__::func_279(vLocal_187.x, 1);
		__LIB_1__::func_683(&iLocal_87, -2147483648);
	}
}

bool func_779(int iParam0)
{
	int iVar0;
	if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(vLocal_187.x, Global_35, 1, 1))
	{
		return false;
	}
	if (!PLAYER::_0x72AD59F7B7FB6E24(PLAYER::GET_PLAYER_INDEX(), iParam0))
	{
		return false;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false))
	{
		if (WEAPON::_0x705BE297EEBDB95D(iVar0) || __LIB_0__::func_237(iVar0))
		{
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(vLocal_187.x);
			return true;
		}
	}
	return false;
}

void func_816()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_1336();
	func_1337();
	func_1338();
	func_1339();
	func_1340();
	__LIB_1__::func_848();
	__LIB_0__::func_376();
}

void func_817(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	func_1343(iParam0, 1, 1, -142743235, 1);
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
	func_1350(&(Global_1946804.f_1616), iVar2, &uVar9, 1, 0, 0, 0);
	func_1350(&(Global_1946804.f_1616), 211609491, &uVar9, 1, 0, 0, 0);
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

int func_824(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	struct<5> Var0;
	if (iParam3 == -358215195)
	{
		Var0 = { __LIB_1__::func_615(iParam1, 1, 0) };
		iParam3 = __LIB_0__::func_709(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	__LIB_0__::func_922(iParam3);
	return func_1155(iParam0, iParam1, iParam2, iParam3, bParam4, bParam5, 1, 0, 1, 0);
}

void func_852()
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
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_1369(&uVar4, &iVar1, &iVar2, &iVar3)))
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

Vector3 func_859(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
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
			bVar11 = func_1386(iVar0, iVar1);
			bVar3 = BUILTIN::VDIST(vParam0, vVar7);
			if (((((bVar3 < fVar2 && bVar3 > bParam10) && !__LIB_0__::func_86(vVar7)) && func_1387(iVar0, bParam8, iParam12)) && !__LIB_0__::func_955(iVar0)) || bVar11)
			{
				if (func_1389(vVar7, iVar0, iVar1, iParam5, iParam6, bVar14, bVar10, bParam9, bParam13))
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

void func_901()
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_17))
	{
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_17, 48, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_17, false);
	}
}

int func_954(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Global_1347702)
	{
		if (MISC::GET_HASH_KEY(&(Global_1347702[iVar0 /*49*/].f_3)) == iParam0)
		{
			return iVar0;
		}
		iVar0 = (iVar0 + 1);
	}
	return -1;
}

int func_961(var uParam0, int iParam1, int iParam2)
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
		return func_961(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

bool func_1043(int* iParam0, vector3 vParam1, float fParam4, bool bParam5)
{
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
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, 1);
	ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, true);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(*iParam0, joaat("REL_GANG_DUTCHS"));
	ENTITY::_0x18FF3110CF47115D(*iParam0, 15, 1);
	PED::SET_PED_CONFIG_FLAG(*iParam0, 172, true);
	TASK::SET_PED_PATH_MAY_ENTER_WATER(*iParam0, true);
	if (!bParam5)
	{
		TASK::TASK_STAND_STILL(*iParam0, -1);
		return true;
	}
	else
	{
		PHYSICS::_0x06AADE17334F7A40(*iParam0, 1694.373f, 1511.175f, 146.7236f);
		TASK::TASK_STAND_STILL(*iParam0, -1);
	}
	return true;
}

void func_1109(int iParam0)
{
	if (__LIB_0__::func_181())
	{
		func_1591(iParam0, "JOHN", Global_35);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_314[iParam0 /*16*/], "b_PlayerArthur", false, false);
	}
	else
	{
		func_1591(iParam0, "ARTHUR", Global_35);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_314[iParam0 /*16*/], "b_PlayerArthur", true, false);
	}
}

void func_1110(int iParam0)
{
	func_1591(iParam0, "WarVet", iLocal_15);
}

void func_1111(int iParam0)
{
	func_1591(iParam0, "target", vLocal_187.x);
	func_1591(iParam0, "player", Global_35);
}

void func_1137(var uParam0)
{
	int iVar0;
	if (__LIB_1__::func_750(&iVar0))
	{
		if (__LIB_0__::func_144(iVar0, 0))
		{
			if (__LIB_0__::func_357(iVar0) == -525676072)
			{
				PED::_SET_PED_COMPONENT_DISABLED(Global_35, joaat("MASKS_LARGE"), 0);
				func_1155(Global_35, joaat("CLOTHING_ITEM_HAT_NONE"), 0, 1108822547, 0, 1, 0, 0, 0, 0);
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

void func_1138(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
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
		func_1599();
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

void func_1140(var uParam0)
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
			func_1606(iVar1, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_1606(iVar3, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_1141(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if ((__LIB_0__::func_84(uParam0, 268435456) && !__LIB_0__::func_86(__LIB_12__::func_720(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { __LIB_12__::func_720(uParam0) };
			func_1606(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

int func_1155(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	struct<5> Var0;
	int iVar5;
	if (iParam3 == -358215195)
	{
		Var0 = { __LIB_1__::func_615(iParam1, 1, 0) };
		iParam3 = __LIB_0__::func_709(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_1621(iParam1, iParam2, __LIB_0__::func_161(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	__LIB_1__::func_467(1, (__LIB_0__::func_2() == -1 && bParam5), 1);
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

void func_1208()
{
	WEAPON::SET_CURRENT_PED_WEAPON(iLocal_15, WEAPON::GET_BEST_PED_WEAPON(iLocal_15, false, false), true, 0, false, false);
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_15, Global_35, -1, -1f, -1f, -1f);
	if (__LIB_0__::func_266(iLocal_17, func_214(3), 5f, 1, 1))
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_17, 1800.681f, 1393.454f, 178.1649f, 219.8475f, true, false, true);
	}
	func_661(3);
}

void func_1210()
{
	__LIB_8__::func_774(iLocal_15, sLocal_96, 4194350);
	__LIB_2__::func_259(&uLocal_120);
	iLocal_129 = 5;
	iLocal_181 = PED::CREATE_GROUP(2);
	PED::SET_GROUP_FORMATION(iLocal_181, 5);
	PED::ADD_CUSTOM_FORMATION_LOCATION(iLocal_181, 0f, -6f, 0f, 0);
	PED::SET_PED_CONFIG_FLAG(iLocal_15, 279, true);
	PED::SET_PED_AS_GROUP_LEADER(iLocal_15, iLocal_181, false);
	PLAYER::_0xAC22AA6DF4D1C1DE(PLAYER::PLAYER_ID(), iLocal_15, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 2, 3, 0);
	PED::_0xD5BD1B5318A81994(iLocal_181, 1);
	PED::_0x9BBEAF8B0C007F1E(iLocal_15, 0);
	func_661(4);
}

void func_1213(var uParam0)
{
	int iVar0;
	if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_15, 0))
	{
		iVar0 = TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_15);
		if ((!__LIB_0__::func_27(iLocal_90, 256) && iVar0 >= 3) && iVar0 <= 8)
		{
			if (!__LIB_0__::func_899(&uLocal_155))
			{
				if (!__LIB_6__::func_904() && __LIB_0__::func_48(iLocal_15, Global_35, 10f, 1))
				{
					__LIB_2__::func_259(&uLocal_155);
				}
			}
			else if ((__LIB_9__::func_178(&uLocal_155) > 2f && __LIB_0__::func_48(iLocal_15, Global_35, 10f, 1)) && !__LIB_6__::func_904())
			{
				if (func_336(uParam0, 256, 1))
				{
					__LIB_1__::func_561(&uLocal_155);
				}
			}
		}
		else if (!__LIB_0__::func_27(iLocal_90, 512))
		{
			if (!__LIB_6__::func_904() && __LIB_0__::func_48(iLocal_15, Global_35, 10f, 1))
			{
				func_336(uParam0, 512, 1);
			}
		}
		else if (!__LIB_0__::func_27(iLocal_90, 1024))
		{
			if (!__LIB_6__::func_904() && __LIB_0__::func_48(iLocal_15, Global_35, 10f, 1))
			{
				func_336(uParam0, 1024, 1);
			}
		}
	}
	if (!__LIB_0__::func_27(iLocal_90, 2048))
	{
		if (__LIB_0__::func_266(iLocal_15, func_214(22), 2.5f, 1, 1) && __LIB_0__::func_48(Global_35, iLocal_15, 10f, 1))
		{
			func_336(uParam0, 2048, 1);
		}
	}
}

Vector3 func_1214()
{
	vector3 vVar0;
	var uVar3;
	vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_15, 0f, 5f, 0f) };
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &uVar3, false))
	{
		vVar0.f_2 = uVar3;
		return vVar0;
	}
	return Global_36;
}

bool func_1226()
{
	int iVar0;
	int iVar1;
	if (!__LIB_0__::func_27(iLocal_89, 1024))
	{
		if ((__LIB_0__::func_153(Global_35, 0, 0, 0) != joaat("WEAPON_UNARMED") && __LIB_0__::func_153(Global_35, 0, 0, 0) != 0) || (__LIB_0__::func_153(Global_35, 1, 0, 0) != joaat("WEAPON_UNARMED") && __LIB_0__::func_153(Global_35, 1, 0, 0) != 0))
		{
			if (!__LIB_0__::func_899(&uLocal_145))
			{
				__LIB_2__::func_259(&uLocal_145);
			}
			else if (__LIB_9__::func_178(&uLocal_145) > 10f)
			{
				WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
			}
			else
			{
				WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
			}
		}
		else
		{
			if (__LIB_0__::func_899(&uLocal_145))
			{
				__LIB_1__::func_561(&uLocal_145);
			}
			__LIB_1__::func_683(&iLocal_89, 1024);
		}
		return false;
	}
	if (func_1688() == 1)
	{
		if (iLocal_80 != 1)
		{
			iLocal_80 = 1;
			vLocal_391 = { vLocal_379 };
			func_1689();
			__LIB_1__::func_683(&iLocal_89, 64);
			TASK::CLEAR_PED_TASKS(Global_35, true, false);
		}
	}
	else if (func_1688() == 3)
	{
		if (iLocal_80 != 3)
		{
			iLocal_80 = 3;
			vLocal_391 = { vLocal_388 };
			func_1689();
			__LIB_1__::func_683(&iLocal_89, 16);
			TASK::CLEAR_PED_TASKS(Global_35, true, false);
		}
	}
	else if (func_1688() == 2)
	{
		if (iLocal_80 != 2)
		{
			iLocal_80 = 2;
			vLocal_391 = { vLocal_385 };
			func_1689();
			__LIB_1__::func_683(&iLocal_89, 8);
			TASK::CLEAR_PED_TASKS(Global_35, true, false);
		}
	}
	else if (iLocal_80 != 0)
	{
		iLocal_80 = 0;
		vLocal_391 = { vLocal_382 };
		func_1689();
		__LIB_1__::func_683(&iLocal_89, 32);
		TASK::CLEAR_PED_TASKS(Global_35, true, false);
	}
	if (!__LIB_0__::func_163(Global_35, 242628503))
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		if (PED::IS_PED_ON_MOUNT(Global_35))
		{
			TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
			if (!__LIB_0__::func_27(iLocal_89, 512))
			{
				__LIB_1__::func_683(&iLocal_89, 512);
			}
		}
		else if (__LIB_0__::func_27(iLocal_89, 512))
		{
			__LIB_1__::func_681(&iLocal_89, 512);
		}
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_23, 0, -1f, -1f, -1f);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_391, 1f, 20000, 0.25f, 0, __LIB_0__::func_152(vLocal_391, func_214(4), 1));
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_23, 0, -1f, -1f, -1f);
		TASK::TASK_PAUSE(0, 500);
		TASK::CLOSE_SEQUENCE_TASK(iVar0);
		TASK::TASK_PERFORM_SEQUENCE(Global_35, iVar0);
		TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	}
	else
	{
		if (__LIB_0__::func_27(iLocal_89, 512))
		{
			iVar1 = 3;
		}
		else
		{
			iVar1 = 2;
		}
		if (TASK::GET_SEQUENCE_PROGRESS(Global_35) > iVar1)
		{
			WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
			return true;
		}
	}
	return false;
}

bool func_1227(int iParam0, float fParam1, bool bParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE() && CAM::GET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR() >= fParam1)
	{
		if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0) && !ENTITY::IS_ENTITY_OCCLUDED(iParam0))
		{
			if (bParam2 && ENTITY::IS_ENTITY_A_PED(iParam0))
			{
				vVar0 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iParam0, PED::GET_PED_BONE_INDEX(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), 21030)) };
			}
			else
			{
				vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
			}
			GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(vVar0, &fVar3, &fVar4);
			if (((fVar3 >= fParam4 && fVar3 <= fParam3) && fVar4 >= fParam6) && fVar4 <= fParam5)
			{
				return true;
			}
		}
	}
	return false;
}

void func_1252(int iParam0)
{
	if (!__LIB_0__::func_52(iParam0))
	{
		return;
	}
	__LIB_0__::func_427(iParam0);
	func_1715(iParam0);
}

void func_1259(int iParam0)
{
	var uVar0;
	if ((iParam0 == joaat("PROVISION_TALISMAN_EAGLE_TALON") && !__LIB_0__::func_26()) || iParam0 != joaat("PROVISION_TALISMAN_EAGLE_TALON"))
	{
		if (__LIB_3__::func_757(Global_35, iParam0, &uVar0))
		{
			func_1155(PLAYER::PLAYER_PED_ID(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case joaat("PROVISION_TALISMAN_ALLIGATOR_TOOTH"):
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			__LIB_1__::func_244();
			break;
		case joaat("PROVISION_TALISMAN_BEAR_CLAW"):
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			__LIB_1__::func_244();
			break;
		case joaat("PROVISION_TALISMAN_BUFFALO_HORN"):
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			__LIB_1__::func_244();
			break;
		case joaat("PROVISION_TALISMAN_EAGLE_TALON"):
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			__LIB_0__::func_362();
			break;
		case joaat("PROVISION_TALISMAN_RAVEN_CLAW"):
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			__LIB_0__::func_360();
			break;
	}
}

void func_1298(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	switch (__LIB_0__::func_357(iParam0))
	{
		case 81053684:
			if (iParam0 == joaat("KIT_BANDANA") && __LIB_1__::func_169(81053684, 0) <= 0)
			{
				__LIB_1__::func_452(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == joaat("CLOTHING_ITEM_HAT_PZERO_000") || iParam0 == joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"))
			{
				__LIB_1__::func_452(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = __LIB_0__::func_449(iParam0);
			if (__LIB_0__::func_450(iVar0))
			{
				__LIB_1__::func_697(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				__LIB_1__::func_452(30, iParam0, 0, 0, 0);
			}
			if (__LIB_0__::func_241() == -2125499975 || __LIB_0__::func_241() == -449205311)
			{
				switch (iParam0)
				{
					case joaat("CLOTHING_WARM_WEATHER_OUTFIT"):
					case 1160643979: /* GXTEntry: "The Winter Gunslinger" */
					case joaat("CLOTHING_GUNSLINGER_OUTFIT"):
						__LIB_1__::func_452(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (__LIB_0__::func_241() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024: /* GXTEntry: "The Cowboy" */
						__LIB_1__::func_452(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!__LIB_1__::func_431(-525676072, 0))
			{
				if (__LIB_1__::func_335(-525676072, &iVar1))
				{
					__LIB_1__::func_452(33, iVar1, 0, 0, 0);
				}
			}
			__LIB_1__::func_452(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == joaat("CLOTHING_SP_OFFHAND_000") || iParam0 == -1515874150) || iParam0 == joaat("UPGRADE_OFFHAND_HOLSTER"))
	{
		if (!__LIB_0__::func_451(joaat("MP_COMPONENT_TYPE_LOADOUT_3")))
		{
			func_1155(Global_35, iParam0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
		}
		func_1252(24);
		if (__LIB_0__::func_918(&iVar2, 0))
		{
			__LIB_1__::func_708(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_1299(int iParam0)
{
	if (__LIB_0__::func_192(iParam0, 943695443))
	{
		func_1763(0, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -2096528786))
	{
		func_1763(1, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -1094167013))
	{
		func_1763(2, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1936654645))
	{
		func_1763(3, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1306489306))
	{
		func_1763(4, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 435762317))
	{
		func_1763(5, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1259363210))
	{
		func_1763(6, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 881398259))
	{
		func_1763(7, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -541549214))
	{
		func_1763(8, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 130796156))
	{
		func_1763(-1, iParam0);
	}
}

void func_1336()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_1784(0);
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
	func_1784(1);
}

void func_1337()
{
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_776(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_1338()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_1787(0);
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
	func_1787(1);
}

void func_1339()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_1__::func_432(15000, 0, 0, 0, 1);
			func_1787(0);
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
	func_1787(1);
}

void func_1340()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_776(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_776(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_1343(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_1343(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
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

int func_1343(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			func_1343(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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

bool func_1350(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	struct<4> Var4;
	Var4 = __LIB_0__::func_790(iParam6);
	Var4.f_1 = iParam1;
	Var4.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var4);
	if (!DATAFILE::_0xED4413CEE1BF142C(&Var4))
	{
		return false;
	}
	DATAFILE::_0xA63CD20F19B961AB(&bVar2, &Var4, -1516819610);
	DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 2049745650);
	*bParam2 = bVar2;
	Global_1946804.f_2652 = 0;
	if (!bVar2 && !bParam3)
	{
		__LIB_0__::func_947(uParam0, __LIB_0__::func_461(iVar0), 1);
	}
	while (DATAFILE::_0xED4413CEE1BF142C(&Var4))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1409451727))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = __LIB_0__::func_161(iVar3, 1);
			if (iVar1 < 0 || iVar1 > 39)
			{
			}
			else if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, joaat("COMPONENT")))
			{
			}
			else
			{
				Global_1946804.f_2612[Global_1946804.f_2652] = iVar1;
				Global_1946804.f_2652++;
				uParam0->f_1[iVar1 /*3*/] = iVar0;
				if (bParam5)
				{
					if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1441384))
					{
						uParam0->f_1[iVar1 /*3*/].f_1 = joaat("BASE");
					}
					else
					{
						Jump @343; //curOff = 278
						if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1194786549))
						{
							if (__LIB_0__::func_948(iVar3) && __LIB_0__::func_220(uParam0->f_1[iVar1 /*3*/], iVar3, &iVar0))
							{
								uParam0->f_1[iVar1 /*3*/].f_1 = iVar0;
							}
						}
						else
						{
							uParam0->f_1[iVar1 /*3*/].f_1 = iVar0;
						}
					}
					if (bVar2)
					{
						iVar1 = 0;
						while (iVar1 < Global_1946804.f_2652)
						{
							func_1805(uParam0, uParam0->f_1[Global_1946804.f_2612[iVar1] /*3*/], Global_1946804.f_2612[iVar1], 0, 0);
							iVar1++;
						}
					}
					if (bParam4)
					{
						*uParam0 = iParam1;
					}
					return true;
				}
			}
		}
	}
}

int func_1369(var uParam0, int iParam1, int iParam2, int iParam3)
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
	iVar11 = (func_1813(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_952(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_776(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	__LIB_1__::func_432(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

int func_1386(int iParam0, int iParam1)
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
		if (func_1824(iVar0) == iVar6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_1387(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	iVar0 = func_1825(iParam0);
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

bool func_1389(vector3 vParam0, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	if (bParam5)
	{
		if (__LIB_0__::func_562(iParam3, iParam4))
		{
			return false;
		}
	}
	if (!bParam7 || __LIB_1__::func_128(5))
	{
		if (__LIB_0__::func_978(iParam3, iParam4))
		{
			return false;
		}
	}
	iVar0 = __LIB_0__::func_979(vParam0);
	if (bParam6)
	{
		iVar1 = __LIB_1__::func_447(vParam0, 1);
		if (__LIB_0__::func_730(iVar1) || __LIB_0__::func_980(iVar0, 1))
		{
			return false;
		}
	}
	if (!__LIB_1__::func_769(iParam3, iParam4))
	{
		return false;
	}
	if (!__LIB_1__::func_744())
	{
		if (__LIB_0__::func_981(iParam3, iParam4))
		{
			return false;
		}
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(bParam8))
	{
		if (!__LIB_1__::func_129(iVar0))
		{
			return false;
		}
		if (Global_1310720.f_23 >= 3)
		{
			if (Global_1310720.f_21 != -1)
			{
				if (Global_1310720.f_21 == __LIB_1__::func_447(vParam0, 0))
				{
					return false;
				}
			}
		}
	}
	if (!func_1834(iParam3, iParam4))
	{
		return false;
	}
	if (__LIB_0__::func_982(0) == 3)
	{
		if (((vParam0.x > -1480f && vParam0.x < -1475f) && vParam0.y > -359f) && vParam0.y < -354f)
		{
			return false;
		}
	}
	if (!__LIB_0__::func_563(65536, 2))
	{
		if (((vParam0.x > 1673f && vParam0.x < 1676f) && vParam0.y > -1888f) && vParam0.y < -1885f)
		{
			return false;
		}
	}
	if (__LIB_0__::func_28())
	{
		if (VOLUME::_DOES_VOLUME_EXIST(bParam8))
		{
			if (!VOLUME::_IS_POSITION_INSIDE_VOLUME(bParam8, vParam0))
			{
				return false;
			}
		}
		if (__LIB_1__::func_644(vParam0, iParam10) || __LIB_1__::func_624(vParam0, iParam10))
		{
			return false;
		}
	}
	else if (bParam9)
	{
		if (vParam0.x < -450f && vParam0.y < -600f)
		{
			return false;
		}
	}
	return true;
}

void func_1591(int iParam0, char* sParam1, int iParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_314[iParam0 /*16*/], sParam1, iParam2, 0);
	}
}

void func_1599()
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
	iVar0 = func_1937(6291456, 0);
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

void func_1606(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_1606(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_1606(iVar2, vParam1, fParam4, iParam5, iParam6);
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

bool func_1621(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	__LIB_0__::func_191();
	if (iParam2 == 39)
	{
		Var0 = { __LIB_1__::func_615(iParam0, 1, 0) };
		iParam2 = __LIB_0__::func_161(__LIB_0__::func_709(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (__LIB_0__::func_192(iParam0, 866047851) && __LIB_0__::func_545(&(Global_1946804.f_1378)) >= 2)
	{
		return false;
	}
	if ((__LIB_0__::func_156(32768) && iParam2 == 10) && iParam0 != Global_1946804.f_57[iParam2 /*11*/])
	{
		__LIB_0__::func_968(__LIB_0__::func_158(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	__LIB_1__::func_40(iParam2);
	__LIB_1__::func_41(iParam2, iVar5);
	if (Global_1946804.f_1378.f_1[iParam2 /*3*/] != Global_1946804.f_57[iParam2 /*11*/] && Global_1946804.f_57[iParam2 /*11*/].f_1 > 1)
	{
		__LIB_0__::func_47(&(Global_1946804.f_1378.f_1[iParam2 /*3*/]), 4, 6);
		__LIB_0__::func_47(&(Global_1946804.f_1497.f_1[iParam2 /*3*/]), 4, 6);
	}
	func_1805(&(Global_1946804.f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946804.f_1378.f_1[iParam2 /*3*/].f_1;
	}
	Global_1946804.f_1378.f_1[iParam2 /*3*/] = iParam0;
	Global_1946804.f_1378.f_1[iParam2 /*3*/].f_1 = __LIB_0__::func_969(iParam0, iParam2, iParam1, __LIB_0__::func_2() != -1);
	if (bParam4)
	{
		__LIB_1__::func_183(&(Global_1946804.f_1378), 1, 3);
	}
	else
	{
		__LIB_1__::func_183(&(Global_1946804.f_1378), 1, 0);
	}
	if (bParam3)
	{
		iVar6 = 0;
		while (iVar6 < Global_1946804.f_2589)
		{
			if (Global_1946804.f_2589.f_2[iVar6 /*2*/] >= 0 && Global_1946804.f_2589.f_2[iVar6 /*2*/] < 39)
			{
				Global_1946804.f_2456[Global_1946804.f_2589.f_2[iVar6 /*2*/] /*2*/] = 0;
				Global_1946804.f_2456[Global_1946804.f_2589.f_2[iVar6 /*2*/] /*2*/].f_1 = 0;
				__LIB_0__::func_550(__LIB_0__::func_158(Global_1946804.f_2589.f_2[iVar6 /*2*/], 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

int func_1688()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vLocal_379, true);
	fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vLocal_382, true);
	fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vLocal_385, true);
	fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vLocal_388, true);
	if (fVar0 < fVar1)
	{
		if (fVar0 < fVar2)
		{
			if (fVar0 < fVar3)
			{
				return 1;
			}
			else
			{
				return 3;
			}
		}
		else if (fVar2 < fVar3)
		{
			return 2;
		}
		else
		{
			return 3;
		}
	}
	else if (fVar1 < fVar2)
	{
		if (fVar1 < fVar3)
		{
			return 0;
		}
		else
		{
			return 3;
		}
	}
	else if (fVar2 < fVar3)
	{
		return 2;
	}
	else
	{
		return 3;
	}
	return 0;
}

void func_1689()
{
	__LIB_1__::func_681(&iLocal_89, 64);
	__LIB_1__::func_681(&iLocal_89, 32);
	__LIB_1__::func_681(&iLocal_89, 8);
	__LIB_1__::func_681(&iLocal_89, 16);
}

void func_1715(int iParam0)
{
	int iVar0;
	switch (iParam0)
	{
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 11:
			__LIB_0__::func_537(1);
			break;
		case 14:
			break;
		case 15:
			break;
		case 16:
			break;
		case 17:
			break;
		case 18:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(5, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(4, 0);
			__LIB_0__::func_538(1);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			__LIB_0__::func_538(2);
			break;
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			__LIB_0__::func_538(3);
			break;
		case 21:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 0);
			break;
		case 22:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 0);
			break;
		case 31:
			break;
		case 10:
			break;
		case 12:
			break;
		case 13:
			break;
		case 32:
			break;
		case 33:
			__LIB_0__::func_539(1);
			break;
		case 34:
			__LIB_0__::func_540(1);
			break;
		case 35:
			__LIB_0__::func_541(1);
			break;
		case 36:
			break;
		case 37:
			__LIB_0__::func_542(0);
			break;
		case 38:
			__LIB_0__::func_543(0);
			break;
		case 39:
			__LIB_0__::func_544(0);
			break;
		case 40:
			break;
		case 41:
			break;
		case 42:
			break;
		case 43:
			break;
		case 1:
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 2:
			if ((!Global_1879534 && __LIB_0__::func_28()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				__LIB_5__::func_785("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			__LIB_1__::func_240(586, 0);
			break;
		case 3:
			if ((!Global_1879534 && __LIB_0__::func_28()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				__LIB_5__::func_785("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			__LIB_1__::func_240(587, 0);
			break;
		case 4:
			if ((!Global_1879534 && __LIB_0__::func_28()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				__LIB_5__::func_785("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			__LIB_1__::func_240(588, 0);
			break;
		case 5:
			if ((!Global_1879534 && __LIB_0__::func_28()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				__LIB_5__::func_785("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			__LIB_1__::func_240(589, 0);
			break;
		case 24:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_WEAPON_DUALWIELD"), true);
			UNLOCK::_UNLOCK_SET_VISIBLE(joaat("SP_WEAPON_DUALWIELD"), true);
			WEAPON::_0x83B8D50EB9446BBA(PLAYER::PLAYER_PED_ID(), 1);
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_0__::func_451(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) || __LIB_0__::func_802(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) == 2110595215)
				{
					if (__LIB_0__::func_181())
					{
						iVar0 = -1515874150; /* GXTEntry: "John\'s Off-Hand Holster" */
					}
					else
					{
						iVar0 = joaat("CLOTHING_SP_OFFHAND_000");
					}
					if (!__LIB_1__::func_707(iVar0, 1, 0))
					{
						__LIB_1__::func_825(iVar0, 1, 752097756);
					}
					func_1155(Global_35, iVar0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(1013902307, 1, 0))
				{
					__LIB_1__::func_825(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(1013902307, 1, 0))
				{
					__LIB_1__::func_825(1013902307, 1, 752097756);
				}
				if (!__LIB_1__::func_707(142640135, 1, 0))
				{
					__LIB_1__::func_825(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(786809402, 1, 0))
				{
					__LIB_1__::func_825(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(786809402, 1, 0))
				{
					__LIB_1__::func_825(786809402, 1, 752097756);
				}
				if (!__LIB_1__::func_707(-518019409, 1, 0))
				{
					__LIB_1__::func_825(-518019409, 1, 752097756);
				}
			}
			break;
		case 23:
			PLAYER::_0x5B9813ECF7633FE8(0);
			break;
		case 25:
			break;
		case 26:
			break;
		case 27:
			break;
		case 28:
			break;
		case 29:
			break;
		case 30:
			break;
		case 44:
			break;
		case 45:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER"), true);
			Global_1935630.f_47 = 1;
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Enable", true, true);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Disable", false, true);
			break;
		case 46:
			__LIB_1__::func_881();
			break;
		case 47:
			PLAYER::_0xA63FCAD3A6FEC6D2(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 52:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_POST_GANG1"), true);
			break;
		case 53:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_RECEPTIVE"), true);
			break;
		case 54:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_TRUSTED"), true);
			break;
		case 55:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("COMPENDIUM"), true);
			break;
		case 56:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_PEDS_REACT_TO_SICK_ATHUR"), true);
			break;
	}
}

void func_1763(int iParam0, int iParam1)
{
	if (__LIB_0__::func_192(iParam1, 130796156))
	{
		func_2033(iParam1, 0);
	}
	else if (__LIB_0__::func_192(iParam1, 930141731))
	{
		func_2033(iParam1, 1);
		__LIB_1__::func_856(iParam0);
	}
}

void func_1784(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (bParam0)
	{
		func_776(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_776(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_776(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_2041(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_817(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_1343(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_2045(Var0);
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

void func_1787(bool bParam0)
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
		func_776(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_776(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_776(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_776(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_776(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_776(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_776(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_776(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_776(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_776(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_776(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_1343(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_1343(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_1343(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_1343(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_1343(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_1343(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_1343(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_1343(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_1343(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_1343(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_1343(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
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

void func_1805(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar1 = 12;
	iVar2 = __LIB_0__::func_357(uParam0->f_1[iParam2 /*3*/]);
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (__LIB_0__::func_157(iParam2, 65536) && uParam0->f_1[iVar1 /*3*/] == -452402570)
	{
		uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
		uParam0->f_1[iVar1 /*3*/].f_1 = 0;
		if (bParam4)
		{
			__LIB_1__::func_41(iVar1, iVar3);
		}
	}
	if (__LIB_0__::func_451(-1586649372) && __LIB_0__::func_157(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
		uParam0->f_1[iVar1 /*3*/].f_1 = 0;
		if (bParam4)
		{
			__LIB_1__::func_41(iVar1, iVar3);
		}
	}
	switch (iVar2)
	{
		case 698653232:
			if (iParam1 == Global_1946804.f_57[iParam2 /*11*/])
			{
				iVar1 = 12;
				if (uParam0->f_1[iVar1 /*3*/] == joaat("CLOTHING_HL_PLAYER_NECKTIE_004_3"))
				{
					uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
					uParam0->f_1[iVar1 /*3*/].f_1 = 0;
					if (bParam4)
					{
						__LIB_1__::func_41(iVar1, iVar3);
					}
				}
			}
			__LIB_1__::func_184(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			__LIB_1__::func_184(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
			iVar1 = 22;
			if (uParam0->f_1[iVar1 /*3*/] == Global_1946804.f_57[iVar1 /*11*/])
			{
			}
			else
			{
				iVar0 = 16;
				if (uParam0->f_1[iVar0 /*3*/].f_1 == joaat("BASE") || uParam0->f_1[iVar0 /*3*/].f_1 == 1530758430)
				{
					uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
					uParam0->f_1[iVar1 /*3*/].f_1 = 0;
					if (bParam4)
					{
						__LIB_1__::func_41(iVar1, iVar3);
					}
				}
				Jump @1417; //curOff = 525
				__LIB_1__::func_184(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1 /*3*/].f_1 == joaat("BASE"))
				{
					uParam0->f_1[iVar1 /*3*/].f_1 = -1539589426;
					if (bParam4)
					{
						__LIB_1__::func_41(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1 /*3*/].f_1 == 1530758430)
				{
					uParam0->f_1[iVar1 /*3*/].f_1 = 1334603721;
					if (bParam4)
					{
						__LIB_1__::func_41(iVar1, iVar3);
					}
				}
				Jump @1417; //curOff = 658
				__LIB_1__::func_184(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1417; //curOff = 693
				__LIB_1__::func_184(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
					uParam0->f_1[iVar1 /*3*/].f_1 = 0;
					if (bParam4)
					{
						__LIB_1__::func_41(iVar1, iVar3);
					}
				}
				Jump @1417; //curOff = 788
				__LIB_1__::func_184(uParam0, (1 && bParam4), 0, 1, bParam3);
				Jump @1417; //curOff = 809
				if (iParam1 == Global_1946804.f_57[iParam2 /*11*/])
				{
					iVar1 = 37;
					if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							__LIB_1__::func_41(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							__LIB_1__::func_41(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == __LIB_0__::func_357(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							__LIB_1__::func_41(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((__LIB_0__::func_218(iParam1) && uParam0->f_1[iVar1 /*3*/] != Global_1946804.f_57[iVar1 /*11*/]) && -923693316 == __LIB_0__::func_357(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							__LIB_1__::func_41(iVar1, iVar3);
						}
					}
				}
				Jump @1417; //curOff = 1132
				iVar1 = 36;
				if (uParam0->f_1[iParam2 /*3*/] != Global_1946804.f_57[iParam2 /*11*/] && __LIB_0__::func_192(Global_1946804.f_1497.f_1[iVar1 /*3*/], -1638171711))
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946804.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						__LIB_1__::func_41(iVar1, iVar3);
					}
				}
				Jump @1417; //curOff = 1230
				iVar1 = 36;
				if (uParam0->f_1[iVar1 /*3*/] == Global_1946804.f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946804.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						__LIB_1__::func_41(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iParam2 /*3*/] != Global_1946804.f_57[iParam2 /*11*/] && (__LIB_0__::func_218(Global_1946804.f_1497.f_1[iVar1 /*3*/]) || __LIB_0__::func_192(Global_1946804.f_1497.f_1[iVar1 /*3*/], -1638171711)))
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946804.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						__LIB_1__::func_41(iVar1, iVar3);
					}
				}
			}
			switch (__LIB_0__::func_357(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == __LIB_0__::func_357(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							__LIB_1__::func_41(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == __LIB_0__::func_357(uParam0->f_1[iVar1 /*3*/]) || __LIB_0__::func_192(uParam0->f_1[iVar1 /*3*/], 866047851))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946804.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							__LIB_1__::func_41(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

int func_1813(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
							iVar49 = (iVar49 + func_1813(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1813(iVar63, -915411861, 1, 0, 0));
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

int func_1824(int iParam0)
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
int func_1825(int iParam0)
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

bool func_1834(int iParam0, int iParam1)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	int iVar7;
	__LIB_0__::func_720(15, &Var0);
	Var0.f_2 = -1999103282;
	Var0.f_3 = iParam0;
	Var0.f_4 = iParam1;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = 1563492982;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar5, &Var0))
		{
			iVar6 = __LIB_0__::func_623(iVar5);
			if (__LIB_1__::func_185(iVar6))
			{
				return false;
			}
		}
		Var0.f_2 = 1975530226;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar5, &Var0))
		{
			iVar6 = __LIB_0__::func_623(iVar5);
			if (!__LIB_1__::func_185(iVar6))
			{
				return false;
			}
		}
		Var0.f_2 = 108838230;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar5, &Var0))
		{
			iVar7 = func_954(iVar5);
			if (__LIB_1__::func_187(iVar7))
			{
				return false;
			}
		}
		Var0.f_2 = 181294442;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar5, &Var0))
		{
			iVar7 = func_954(iVar5);
			if (!__LIB_1__::func_187(iVar7))
			{
				return false;
			}
		}
		return true;
	}
	return false;
}

int func_1937(int iParam0, int iParam1)
{
	var uVar0;
	return func_2095(&uVar0, iParam0, iParam1);
}

void func_2033(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = __LIB_1__::func_134(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_1252(50);
			}
			else
			{
				func_1252(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_1252(51);
			}
			else
			{
				func_1252(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!__LIB_1__::func_770(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					__LIB_0__::func_360();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				__LIB_0__::func_360();
			}
			break;
		case 3:
			func_1252(24);
			if (bParam1)
			{
				if (!__LIB_1__::func_770(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					__LIB_0__::func_360();
				}
			}
			break;
	}
}

void func_2041(int iParam0)
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
	func_1343(iParam0, 1, 1, -142743235, 1);
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
		func_1343(uVar18[iVar36], 1, 1, -142743235, 1);
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
	func_1350(&(Global_1946804.f_1616), iVar38, &uVar39, 1, 0, 0, 0);
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
					func_1350(&(Global_1946804.f_1616), joaat("CLOTHING_GUNSLINGER_OUTFIT"), &uVar39, 0, 1, 0, -2125499975);
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
					func_1350(&(Global_1946804.f_1616), -361635024 /* GXTEntry: "The Cowboy" */, &uVar39, 0, 1, 0, 1160113249);
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
					func_2155(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), Global_1905941, 1, 0, 0);
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
	func_1350(&(Global_1946804.f_1616), joaat("CLOTHING_GUNSLINGER_OUTFIT"), &uVar39, 0, 1, 0, -2125499975);
	func_1350(&(Global_1946804.f_1616), 2020890174, &uVar39, 1, 0, 0, -2125499975);
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

void func_2045(struct<6> Param0)
{
	if (!func_2165(Param0.f_4, 1))
	{
	}
	if (!func_2165(Param0, 1))
	{
	}
	if (!func_2165(Param0.f_2, 1))
	{
	}
	if (!func_2165(Param0.f_5, 1))
	{
	}
	if (!func_2165(Param0.f_3, 1))
	{
	}
	if (!func_2165(Param0.f_1, 1))
	{
	}
}

int func_2095(var uParam0, int iParam1, int iParam2)
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
		return func_2095(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

int func_2155(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_223(iParam1);
	if (iParam4 != 0)
	{
		iVar0 = iParam4;
	}
	else if (iParam1 > -1 && iParam1 <= 5)
	{
		iVar0 = __LIB_0__::func_998(iParam1);
	}
	if ((bParam3 && __LIB_0__::func_805(iParam1, 4096)) && Global_1946804.f_1497 == iParam4)
	{
		return 1;
	}
	Global_1905941 = iParam1;
	if ((iParam1 > 5 || iParam4 != 0) && !__LIB_1__::func_87(iVar0, Global_1946804.f_1))
	{
		return 0;
	}
	if (bParam2)
	{
		__LIB_0__::func_828(Global_40.f_7729, 4096);
		__LIB_0__::func_806(Global_1905941, 4096);
		Global_40.f_7729 = Global_1905941;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		__LIB_0__::func_207(iParam0);
	}
	__LIB_1__::func_10();
	if (!__LIB_0__::func_58(iParam1))
	{
		func_2220(iVar0, iParam0, __LIB_0__::func_846(iParam1), 1, 0, 1);
	}
	__LIB_0__::func_660(iParam0);
	return 1;
}

bool func_2165(int iParam0, int iParam1)
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
				if (func_2165(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_2165(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_2165(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_2165(iVar21, 1))
				{
				}
			}
		}
		__LIB_1__::func_712();
		return true;
	}
	return false;
}

void func_2220(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bVar0 = false;
	iVar1 = 0;
	iVar2 = iParam0;
	iVar3 = -1;
	iVar4 = __LIB_0__::func_449(iParam0);
	if (iVar4 >= 0 && iVar4 <= 5)
	{
		iVar3 = iVar4;
	}
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	__LIB_0__::func_191();
	if (bParam5)
	{
		if (!func_2257(&(Global_1946804.f_1378), &bVar0, iVar2, iVar3, 1, 0))
		{
			return;
		}
	}
	if (__LIB_0__::func_156(32768) && Global_1946804.f_1378.f_1[10 /*3*/] != Global_1946804.f_57[10 /*11*/])
	{
		__LIB_0__::func_945();
	}
	__LIB_1__::func_443(iVar3, 1, 1, 1, 1, 1);
	__LIB_1__::func_452(31, 0, 0, 0, 0);
	__LIB_1__::func_36(0);
	if (!bParam3)
	{
		return;
	}
	if (bVar0)
	{
		iVar1 = 8;
	}
	if (!bParam4)
	{
		if (PED::IS_PED_A_PLAYER(iParam1))
		{
			__LIB_1__::func_452(2, iVar1, 2, 0, 0);
		}
		else
		{
			__LIB_1__::func_452(2, iVar1, 3, iParam1, 0);
		}
	}
	else
	{
		__LIB_1__::func_550(&(Global_1946804.f_1497), iParam1, 1, -1, 1, 1, 1);
	}
}

bool func_2257(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	if (!__LIB_1__::func_138(uParam0, iParam3, iParam2) && !func_1350(uParam0, iParam2, bParam1, 0, bParam4, 0, 0))
	{
		return false;
	}
	iVar0 = 10;
	if (__LIB_0__::func_156(32768))
	{
		if (!*bParam1 || (*bParam1 && uParam0->f_1[iVar0 /*3*/] != Global_1946804.f_57[iVar0 /*11*/]))
		{
			__LIB_0__::func_968(1108822547);
		}
		else
		{
			__LIB_0__::func_860(1108822547);
		}
	}
	__LIB_1__::func_183(uParam0, 0, 0);
	__LIB_0__::func_245(iParam5);
	return true;
}

