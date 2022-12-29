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
	var uLocal_14 = 0;
	vector3 vLocal_15 = { 0f, 0f, 0f };
	vector3 vLocal_18 = { 0f, 0f, 0f };
	vector3 vLocal_21 = { 0f, 0f, 0f };
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	vector3 vLocal_27 = { 0f, 0f, 0f };
	vector3 vLocal_30 = { 0f, 0f, 0f };
	vector3 vLocal_33 = { 0f, 0f, 0f };
	float fLocal_36 = 0f;
	float fLocal_37 = 0f;
	float fLocal_38 = 0f;
	vector3 vLocal_39 = { 0f, 0f, 0f };
	float fLocal_42 = 0f;
	vector3 vLocal_43 = { 0f, 0f, 0f };
	float fLocal_46 = 0f;
	vector3 vLocal_47 = { 0f, 0f, 0f };
	vector3 vLocal_50 = { 0f, 0f, 0f };
	float fLocal_53 = 0f;
	float fLocal_54 = 0f;
	bool bLocal_55 = false;
	struct<9> Local_56 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	char* sLocal_72 = NULL;
	char* sLocal_73 = NULL;
	char* sLocal_74 = NULL;
	char* sLocal_75 = NULL;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	struct<164> Local_78 = { 6, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 1040187392, 1040187392, -1, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 9;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 9;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 12;
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
	var uLocal_118 = 5;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 7;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 9;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 2;
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
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 7;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 1065353216;
	var uLocal_208 = 1065353216;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 1065353216;
	var uLocal_213 = 1065353216;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 1065353216;
	var uLocal_218 = 1065353216;
	var uLocal_219 = 0;
	var uLocal_220 = 1040187392;
	var uLocal_221 = 1040187392;
	var uLocal_222 = -1;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = -1082130432;
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
	var uLocal_258 = -763919645;
	var uLocal_259 = 1056964608;
	var uLocal_260 = 1028443341;
	var uLocal_261 = 1065353216;
	var uLocal_262 = 0;
	var uLocal_263 = 129547951;
	var uLocal_264 = 1367437629;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 1069547520;
	var uLocal_275 = 1065353216;
	var uLocal_276 = 1045220557;
	var uLocal_277 = 1028443341;
	var uLocal_278 = 1069547520;
	var uLocal_279 = 0;
	var uLocal_280 = 1;
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
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = -1;
	int iLocal_321 = 0;
	int iLocal_322 = 0;
	int iLocal_323 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion
void __EntryFunction__()
{
	struct<2606> Var0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	vLocal_15 = { -1627.089f, -1332.086f, 82.0067f };
	vLocal_18 = { -1630.099f, -1338.722f, 82.0188f };
	vLocal_21 = { -1641.898f, -1338.684f, 82.9731f };
	fLocal_24 = 347.8262f;
	fLocal_25 = 14.2093f;
	fLocal_26 = 290.3414f;
	vLocal_27 = { -1604.17f, -1127.78f, 73.22f };
	vLocal_30 = { -1605.94f, -1128.08f, 73.53f };
	vLocal_33 = { -1619.94f, -1132.08f, 77.09f };
	fLocal_36 = 0f;
	fLocal_37 = 0f;
	fLocal_38 = 0f;
	vLocal_39 = { -1606.602f, -1111.096f, 67.7107f };
	fLocal_42 = 13.4556f;
	vLocal_43 = { -1606.602f, -1111.096f, 67.7107f };
	fLocal_46 = 13.4556f;
	vLocal_47 = { -1662.928f, -1157.506f, 76.6684f };
	vLocal_50 = { -1663.72f, -1153.75f, 76.6684f };
	fLocal_53 = 18.5739f;
	fLocal_54 = 166.77f;
	sLocal_72 = "Script_JACK2_SuckDogVenom";
	sLocal_73 = "MINI_GAMES@STORY@JACK2@JOHN";
	sLocal_74 = "CLIPSET@MINI_GAMES@STORY@JACK2@JOHN";
	sLocal_75 = "CLIPSET@MINI_GAMES@STORY@JACK2@DOG";
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
	func_75(uParam0);
	if (__LIB_0__::func_1(uParam0->f_172, 32))
	{
		__LIB_12__::func_954(uParam0, __LIB_12__::func_645(uParam0));
	}
	else if (__LIB_0__::func_1(uParam0->f_172, 8))
	{
		if (__LIB_13__::func_147(uParam0))
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
			__LIB_13__::func_147(uParam0);
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
	if (!__LIB_0__::func_75(&(uParam0->f_2585)) || IntToFloat(__LIB_1__::func_871(&(uParam0->f_2585))) > __LIB_10__::func_381(uParam0))
	{
		__LIB_1__::func_283(&(uParam0->f_2585), 1);
		iVar0 = __LIB_9__::func_762(uParam0);
		if (iVar0 != 3)
		{
			if ((iVar0 == 7 || iVar0 == 5) || iVar0 == 6)
			{
				func_86(uParam0);
				__LIB_13__::func_147(uParam0);
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
		__LIB_13__::func_147(uParam0);
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
		__LIB_13__::func_851(uParam0, __LIB_0__::func_58(uParam0));
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
	if (!__LIB_12__::func_639(uParam0, 64) && !__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_13, 8192))
	{
		if (Global_1347702[uParam0->f_174 /*49*/].f_13 & 65536 != 0)
		{
			__LIB_1__::func_683(&(Local_78.f_110), 512);
		}
	}
	if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_13, 8192) || __LIB_12__::func_936(uParam0))
	{
		__LIB_0__::func_7(&(uParam0->f_172), 1);
	}
	__LIB_12__::func_656(uParam0, 8f);
	__LIB_12__::func_657(uParam0, 20f);
	POPULATION::_0x2161278C6322F740(4096, 0, 0, -1, -1, 0);
	func_189(&Local_78);
	Local_78.f_241 = GRAPHICS::CREATE_TRACKED_POINT();
	GRAPHICS::SET_TRACKED_POINT_INFO(Local_78.f_241, func_190(10), 2f);
	AUDIO::_0xD9130842D7226045("RESB_Sounds", 1);
	StringCopy(&Local_56, "help_rufus_cam", 64);
	StringCopy(&(Local_56.f_8), "RUFUS_ORBIT_REQUEST", 64);
	if (!CAM::_0xDD0B7C5AE58F721D(&Local_56))
	{
		CAM::_0x6A4D224FC7643941(&Local_56);
	}
	STREAMING::REQUEST_PTFX_ASSET();
	CLOCK::PAUSE_CLOCK(true, 0);
	if (!STREAMING::HAS_NAMED_PTFX_ASSET_LOADED(joaat("SCR_JACK2")))
	{
		return;
	}
}

void func_42(var uParam0)
{
	__LIB_18__::func_711(uParam0, "CLIPSET@MINI_GAMES@STORY@JACK2@JOHN", 7);
	__LIB_12__::func_867(uParam0, func_195(2), 7);
	__LIB_12__::func_867(uParam0, func_195(3), 7);
	__LIB_12__::func_867(uParam0, func_196(0), 7);
	__LIB_12__::func_867(uParam0, func_196(1), 7);
	__LIB_12__::func_867(uParam0, func_196(2), 7);
	__LIB_12__::func_867(uParam0, func_196(3), 7);
	__LIB_12__::func_867(uParam0, func_196(4), 7);
	__LIB_12__::func_867(uParam0, func_196(5), 7);
	__LIB_12__::func_867(uParam0, func_196(6), 7);
	__LIB_12__::func_867(uParam0, func_196(7), 7);
	__LIB_12__::func_867(uParam0, func_196(8), 7);
	__LIB_12__::func_867(uParam0, joaat("P_CS_BUCKET03X"), 7);
	__LIB_13__::func_55(uParam0, "SCRIPT_RC@JCK2@LEADOUT@RSC_1", 7);
	__LIB_13__::func_55(uParam0, "SCRIPT_RC@JCK2@LEADIN@RSC2", 7);
	__LIB_13__::func_55(uParam0, "amb_creature_mammal@world_dog_sitting@stand_enter", 2);
	__LIB_13__::func_55(uParam0, "amb_creature_mammal@world_dog_sitting@idle", 2);
	__LIB_13__::func_55(uParam0, "amb_creature_mammal@world_dog_sitting@walk_exit", 2);
	__LIB_13__::func_55(uParam0, "amb_creature_mammal@world_dog_sniffing_ground@stand_enter", 2);
	__LIB_13__::func_55(uParam0, "amb_creature_mammal@world_dog_sniffing_ground@wander0", 2);
	__LIB_13__::func_55(uParam0, "amb_creature_mammal@world_dog_sniffing_ground@idle", 2);
	__LIB_13__::func_55(uParam0, "amb_creature_mammal@world_dog_sniffing_ground@walk_exit", 2);
	__LIB_12__::func_908(uParam0, 0);
	AUDIO::PREPARE_MUSIC_EVENT(func_199(0));
	AUDIO::PREPARE_MUSIC_EVENT(func_199(1));
	AUDIO::PREPARE_MUSIC_EVENT(func_199(2));
	AUDIO::PREPARE_MUSIC_EVENT(func_199(3));
	__LIB_12__::func_875(uParam0, Global_35, func_200(-2), 1);
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
	func_211(iVar0, &Var1, &(Var1.f_3));
	return Var1;
}

bool func_62(var uParam0)
{
	return func_212(*uParam0, uParam0->f_3);
}

bool func_64(var uParam0)
{
	func_213(uParam0, Local_78[0]);
	if (func_214(0, &Local_78))
	{
		if (!func_215(0, &Local_78))
		{
			StringCopy(&(uParam0->f_2578), func_216(7), 24);
			return true;
		}
	}
	if (func_214(1, &Local_78))
	{
		if (!func_215(1, &Local_78))
		{
			StringCopy(&(uParam0->f_2578), func_216(6), 24);
			return true;
		}
	}
	if (func_217(&Local_78))
	{
		StringCopy(&(uParam0->f_2578), func_216(6), 24);
		return true;
	}
	if (__LIB_0__::func_27(Local_78.f_110, 256))
	{
		StringCopy(&(uParam0->f_2578), func_216(6), 24);
		return true;
	}
	if (__LIB_0__::func_75(&(Local_78.f_222)) && __LIB_0__::func_265(&(Local_78.f_222)) > 1f)
	{
		__LIB_1__::func_148(&(Local_78.f_222));
		if (!__LIB_1__::func_205(Global_35, Local_78.f_27[0], 1, 0))
		{
			if (!__LIB_0__::func_27(Local_78.f_110, 4))
			{
				__LIB_1__::func_148(&(Local_78.f_225));
				__LIB_1__::func_683(&(Local_78.f_110), 4);
				func_222(Local_78.f_204, 0, 1);
			}
		}
		else if (__LIB_0__::func_27(Local_78.f_110, 4))
		{
			__LIB_1__::func_681(&(Local_78.f_110), 4);
			__LIB_2__::func_113(&(Local_78.f_225));
		}
	}
	if ((__LIB_12__::func_645(uParam0) == 1 && !ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_78.f_54[1], false)) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_78.f_54[7], false))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(Global_35))
		{
			StringCopy(&(uParam0->f_2578), func_216(11), 24);
			return true;
		}
	}
	if ((__LIB_12__::func_645(uParam0) < 3 && __LIB_12__::func_645(uParam0) != 0) && Local_78.f_69 != 12)
	{
		if ((__LIB_0__::func_27(Local_78.f_110, 4) && __LIB_0__::func_75(&(Local_78.f_225))) && __LIB_0__::func_265(&(Local_78.f_225)) > 20f)
		{
			StringCopy(&(uParam0->f_2578), func_216(8), 24);
			return true;
		}
	}
	if (__LIB_12__::func_645(uParam0) == 0)
	{
		if ((__LIB_0__::func_27(Local_78.f_110, 4) && __LIB_0__::func_75(&(Local_78.f_225))) && __LIB_0__::func_265(&(Local_78.f_225)) > 20f)
		{
			StringCopy(&(uParam0->f_2578), func_216(9), 24);
			return true;
		}
	}
	if (Local_78.f_69 == 12)
	{
		if ((__LIB_0__::func_27(Local_78.f_110, 4) && __LIB_0__::func_75(&(Local_78.f_225))) && __LIB_0__::func_265(&(Local_78.f_225)) > 20f)
		{
			StringCopy(&(uParam0->f_2578), func_216(10), 24);
			return true;
		}
	}
	if (func_226(4, &Local_78))
	{
		if (__LIB_1__::func_348(Global_35, Local_78[0]) > 10f)
		{
			__LIB_1__::func_422("JACK_RETURN", 7500, 0, 1, 0, 0, -1, -1, 0);
			if (!MAP::DOES_BLIP_EXIST(Local_78.f_40[4]))
			{
				Local_78.f_40[4] = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_COMPANION"), Local_78[0]);
				__LIB_0__::func_900(14);
				MAP::_BLIP_SET_MODIFIER(Local_78.f_40[4], -401963276);
			}
		}
		else if (MAP::DOES_BLIP_EXIST(Local_78.f_40[4]))
		{
			__LIB_1__::func_390("JACK_RETURN", 1);
			MAP::REMOVE_BLIP(&(Local_78.f_40[4]));
			__LIB_0__::func_745(14);
			MAP::_BLIP_REMOVE_MODIFIER(Local_78.f_40[4], -401963276);
		}
		if (__LIB_1__::func_348(Global_35, Local_78[0]) > 20f)
		{
			StringCopy(&(uParam0->f_2578), func_216(12), 24);
			return true;
		}
	}
	return false;
}

void func_68(var uParam0)
{
	int iVar0;
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	HUD::_0xC9CAEAEEC1256E54(-1618603322);
	WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false);
	if (PED::_GET_PED_META_OUTFIT_HASH(Local_78[0]) != 389057251)
	{
		__LIB_0__::func_862(Local_78[0], 389057251);
	}
	if (iVar0 != joaat("WEAPON_FISHINGROD"))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_ATTACK2"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
		func_233(&Local_78);
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
	if (func_236(uParam0->f_174))
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
	if (__LIB_13__::func_456(uParam0) || __LIB_12__::func_663(uParam0->f_174, uParam0->f_743))
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
	func_250(uParam0);
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
			func_265(uParam0);
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

void func_75(var uParam0)
{
	bool bVar0;
	bool bVar1;
	if (!__LIB_0__::func_1(uParam0->f_172, 16))
	{
		return;
	}
	if (__LIB_0__::func_86(uParam0->f_206.f_5))
	{
		uParam0->f_206.f_5 = { __LIB_1__::func_440(uParam0->f_174) };
	}
	bVar0 = func_272(uParam0);
	if (!bVar0)
	{
		if (__LIB_0__::func_1(uParam0->f_172, 8))
		{
			if (uParam0->f_206.f_338 == 15f)
			{
				uParam0->f_206.f_338 = 50f;
			}
			if (uParam0->f_206.f_339 == 20f)
			{
				uParam0->f_206.f_339 = 75f;
			}
		}
		else
		{
			if (uParam0->f_206.f_338 > 15f)
			{
				uParam0->f_206.f_338 = 15f;
			}
			if (uParam0->f_206.f_339 > 20f)
			{
				uParam0->f_206.f_339 = 20f;
			}
		}
		if (uParam0->f_206.f_338 <= 0f)
		{
		}
		else if (uParam0->f_206.f_339 <= 0f)
		{
		}
		else if (uParam0->f_206.f_339 <= uParam0->f_206.f_338)
		{
		}
	}
	if (__LIB_12__::func_647(&(uParam0->f_2575)))
	{
		bVar1 = true;
		if (uParam0->f_177 == 4 || uParam0->f_176 == 4)
		{
			if (__LIB_12__::func_738(uParam0))
			{
				bVar1 = false;
			}
			else if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_13, 1024))
			{
				bVar1 = false;
			}
		}
		if (__LIB_13__::func_4(&(uParam0->f_206), &(uParam0->f_2575), bVar0, bVar1))
		{
			if (!__LIB_0__::func_1(uParam0->f_172, 1))
			{
				__LIB_0__::func_11(uParam0);
				__LIB_0__::func_7(&(uParam0->f_172), 1);
			}
		}
		else if (__LIB_0__::func_1(uParam0->f_172, 1))
		{
			__LIB_0__::func_8(&(uParam0->f_172), 1);
		}
	}
	else if (!__LIB_0__::func_1(uParam0->f_172, 1))
	{
		__LIB_0__::func_7(&(uParam0->f_172), 1);
	}
}

bool func_85(var uParam0)
{
	if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_13, 64))
	{
		return true;
	}
	if (__LIB_12__::func_924(uParam0) && func_289(uParam0))
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
	func_303(uParam0);
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
	func_305(uParam0);
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
	func_308(uParam0, 0, 1);
}

void func_91(var uParam0)
{
	if (__LIB_0__::func_27(Local_78.f_110, 512))
	{
		__LIB_12__::func_838(uParam0);
	}
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
		__LIB_13__::func_851(uParam0, bVar0);
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
		if (uParam0->f_171 != 0 || func_309(uParam0))
		{
			if (__LIB_12__::func_884(uParam0))
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
	if (func_312(0, &Local_78))
	{
	}
	__LIB_1__::func_681(&(Local_78.f_110), 4);
	__LIB_1__::func_283(&(Local_78.f_222), 0);
	switch (iVar0)
	{
		case 0:
			if (!__LIB_12__::func_936(uParam0))
			{
				if (func_313(uParam0))
				{
					func_308(uParam0, 1, 1);
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_78.f_54[6], "pl_conversation_All", true);
					return 7;
				}
			}
			else
			{
				__LIB_12__::func_936(uParam0);
				if (func_313(uParam0))
				{
					func_308(uParam0, 0, 1);
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_78.f_54[6], "pl_conversation_All", true);
					return 5;
				}
			}
			break;
		case 1:
			if (func_314(uParam0))
			{
				func_308(uParam0, 1, 1);
				return 7;
			}
			break;
		case 2:
			if (!__LIB_4__::func_511())
			{
				if (func_316(uParam0))
				{
					func_308(uParam0, 2, 1);
					return 7;
				}
			}
			else
			{
				__LIB_4__::func_511();
				func_308(uParam0, 1, 1);
				__LIB_12__::func_937(uParam0, 1);
				Local_78.f_69 = 2;
				return 5;
			}
			break;
		case 3:
			if (func_318(uParam0))
			{
				func_308(uParam0, 2, 1);
				return 7;
			}
			break;
		case 4:
			if (!__LIB_4__::func_511())
			{
				if (func_319(uParam0))
				{
					func_308(uParam0, 3, 1);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(60f, 1f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-30f, 1f);
					func_320(7, &Local_78, "pl_Jack_Reaction_to_Venom_Sucking", 1);
					if (!func_321(7, "pl_Jack_Reaction_to_Venom_Sucking", &Local_78))
					{
						func_322(7, "pl_Jack_Reaction_to_Venom_Sucking", &Local_78);
					}
					func_323(7, "pl_Jack_Reaction_to_Venom_Sucking", &Local_78);
					if (!func_324(7, &Local_78))
					{
						return 2;
					}
					else
					{
						return 7;
					}
				}
			}
			else
			{
				__LIB_4__::func_511();
				func_325(3, uParam0, &Local_78);
				func_308(uParam0, 2, 1);
				__LIB_12__::func_937(uParam0, 2);
				Local_78.f_69 = 13;
				STREAMING::REQUEST_PTFX_ASSET();
				if (!STREAMING::HAS_NAMED_PTFX_ASSET_LOADED(joaat("SCR_JACK2")))
				{
				}
				return 5;
			}
			break;
		case 5:
			if (!__LIB_4__::func_511())
			{
				if (func_326(uParam0))
				{
					__LIB_12__::func_937(uParam0, 3);
					Local_78.f_69 = 14;
					func_308(uParam0, 3, 1);
					return 5;
				}
			}
			else if (__LIB_4__::func_511())
			{
				func_320(8, &Local_78, "PBL_1", 1);
				func_308(uParam0, 3, 1);
				__LIB_12__::func_937(uParam0, 3);
				Local_78.f_69 = 14;
				if (!func_327(uParam0, &Local_78))
				{
					return 2;
				}
				else
				{
					return 5;
				}
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
		if (!__LIB_12__::func_925(uParam0))
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
		__LIB_13__::func_851(uParam0, 0);
		if (!__LIB_0__::func_1(uParam0->f_172, 1048576))
		{
			return false;
		}
	}
	else
	{
		__LIB_12__::func_668();
		__LIB_12__::func_669(uParam0);
		if (!func_334(uParam0))
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

bool func_101(var uParam0)
{
	struct<4> Var0;
	MemCopy(&Var0, {uParam0->f_2575}, 4);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		return true;
	}
	return func_340(Var0, &(uParam0->f_206), uParam0);
}

int func_103(var uParam0)
{
	switch (__LIB_13__::func_22(uParam0))
	{
		case 0:
			func_345(&Local_78);
			func_346(&Local_78);
			func_347(&Local_78);
			func_308(uParam0, 1, 1);
			break;
		case 1:
			func_348(&Local_78);
			func_349(&Local_78);
			func_350(2, &Local_78, 1);
			func_351(uParam0, &Local_78);
			func_320(2, &Local_78, 0, 1);
			func_320(7, &Local_78, 0, 1);
			func_352(0, &Local_78);
			func_308(uParam0, 2, 1);
			func_353(&Local_78, 3);
			break;
		case 2:
			func_308(uParam0, 3, 1);
			func_354(&Local_78, 5);
			break;
		case 3:
			func_308(uParam0, 3, 1);
			break;
		case 4:
			func_354(&Local_78, 7);
			func_353(&Local_78, 14);
			break;
		case 5:
			return 7;
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
	func_357(uParam0);
	POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	PED::SET_PED_RESET_FLAG(Global_35, 134, true);
	PED::SET_PED_RESET_FLAG(Local_78[0], 134, true);
	PED::SET_PED_RESET_FLAG(Local_78[1], 134, true);
	PED::SET_PED_RESET_FLAG(Local_78[0], 202, true);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_HORSE_MENU"), false);
	__LIB_1__::func_538(0);
	PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 28, 1);
	PLAYER::SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(PLAYER::PLAYER_ID());
	switch (__LIB_12__::func_645(uParam0))
	{
		case 0:
			func_359(&Local_78);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_USE_ITEM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DYNAMIC_SCENARIO"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DYNAMIC_SCENARIO"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_HORSE_MENU"), false);
			HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(1);
			HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(8);
			if (__LIB_0__::func_266(Global_35, -1643.76f, -1348.22f, 84.16f, 4f, 1, 1))
			{
				HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(1);
				HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(8);
			}
			if (Local_78.f_69 == 2)
			{
				if (__LIB_12__::func_670(&(uParam0->f_753)) || __LIB_0__::func_265(&(Local_78.f_105)) > 2f)
				{
					__LIB_1__::func_726(Global_35, 1);
					if (ENTITY::DOES_ENTITY_EXIST(Local_78[0]))
					{
						__LIB_1__::func_727(Local_78[0], 1);
					}
					__LIB_12__::func_937(uParam0, 1);
					func_363(&Local_78, 6);
					func_364(&Local_78);
					return 5;
				}
			}
			break;
		case 1:
			if (Local_78.f_69 == 13)
			{
				__LIB_12__::func_937(uParam0, 2);
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, true, false);
				__LIB_12__::func_839(&(uParam0->f_206), "MultiStart");
				return 5;
			}
			break;
		case 2:
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_USE_ITEM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
			if (Local_78.f_69 == 14)
			{
				__LIB_12__::func_937(uParam0, 3);
				func_327(uParam0, &Local_78);
				func_308(uParam0, 3, 1);
				__LIB_12__::func_839(&(uParam0->f_206), "MultiStart");
				STATS::_0x025E98E317652CDD(2);
				return 5;
			}
			break;
		case 3:
			if (func_365(&Local_78))
			{
				if (__LIB_0__::func_866(14, 0))
				{
					__LIB_1__::func_640(14);
				}
				if (__LIB_0__::func_866(12, 0))
				{
					__LIB_1__::func_640(12);
				}
				if (!__LIB_1__::func_187(2))
				{
					__LIB_0__::func_7(&(Global_1347702[2 /*49*/].f_12), 1024);
				}
				STATS::_0x025E98E317652CDD(0);
				__LIB_12__::func_937(uParam0, 29);
			}
			break;
		case 29:
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
		func_403(Global_1347702[iParam0 /*49*/].f_15, bParam4, bParam2, bParam6, bParam5);
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
	vVar2 = { func_407(Global_2621440[0 /*12066*/].f_9.f_7, &uVar0, &uVar1, 0, 1, 1, 0, 0, 0) };
	__LIB_0__::func_321(vVar2, uVar1, uVar0, 0);
	__LIB_0__::func_322(vVar2);
	Global_40.f_9.f_15 = __LIB_1__::func_447(vVar2, 0);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	MISC::SET_RANDOM_WEATHER_TYPE(false, true);
}

void func_159(var uParam0)
{
	func_431(uParam0);
	if (VOLUME::_DOES_VOLUME_EXIST(Local_78.f_27[7]))
	{
		VEHICLE::_0x424FFCB9F0D2D4B5(Local_78.f_27[7], 1);
	}
	func_432(&Local_78);
	if (__LIB_0__::func_287(14, 28, 0))
	{
		__LIB_0__::func_290(14, 28, 0);
	}
	if (__LIB_0__::func_287(14, 66, 0))
	{
		__LIB_0__::func_290(14, 66, 0);
	}
	GRAPHICS::DESTROY_TRACKED_POINT(Local_78.f_241);
	PED::SET_PED_CONFIG_FLAG(Local_78[0], 315, false);
	PED::SET_PED_CONFIG_FLAG(Local_78[0], 297, false);
	PED::SET_PED_CONFIG_FLAG(Local_78[0], 130, false);
	PED::SET_PED_CONFIG_FLAG(Local_78[1], 315, false);
	PED::SET_PED_CONFIG_FLAG(Local_78[1], 297, false);
	PED::SET_PED_CONFIG_FLAG(Local_78[1], 130, false);
	PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), Local_78[1], 30, 0, 0);
	OBJECT::_0x0C0A373D181BF900(1731691513);
	AUDIO::_0x531A78D6BF27014B("RESB_Sounds");
	__LIB_13__::func_897(&(Local_78.f_67));
	CAM::_0x0A5A4F1979ABB40E(&Local_56);
	CAM::_0x798BE43C9393632B(&Local_56);
	__LIB_0__::func_172(iLocal_76);
	__LIB_0__::func_172(iLocal_77);
	STREAMING::REMOVE_PTFX_ASSET();
	CLOCK::PAUSE_CLOCK(false, 0);
}

void func_189(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = -1 + 1;
	while (iVar0 <= (7 - 1))
	{
		iVar1 = iVar0;
		uParam0->f_46[iVar1] = -1;
		iVar0++;
	}
}

Vector3 func_190(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1615.51f, -1252.27f, 76.38f;
		case 1:
			return -1651.66f, -1250.18f, 80.41f;
		case 2:
			return -1587.89f, -1239.53f, 73.92f;
		case 3:
			return -1628.81f, -1223.64f, 76.42f;
		case 4:
			return -1601.63f, -1176.9f, 75.32f;
		case 5:
			return -1624.43f, -1132.83f, 77.38f;
		case 6:
			return -1606.602f, -1111.096f, 67.7107f;
		case 7:
			return -1611.84f, -1120.82f, 71.76f;
		case 8:
			return -1641.486f, -1133.867f, 76.6393f;
		case 9:
			return -1664.45f, -1153.48f, 76.47f;
		case 10:
			return -1663.88f, -1151.77f, 76.79f;
		case 11:
			return -1663.12f, -1150.41f, 77.28f;
		case 12:
			return -1605.506f, -1110.494f, 67.882f;
		case 13:
			return -1640.688f, -1360.641f, 84.82198f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

int func_195(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar5;
	var uVar6;
	var uVar7;
	func_473(iParam0, &uVar0, &uVar1, &uVar2, &uVar5, &uVar6, &uVar7);
	return uVar1;
}

int func_196(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar4;
	var uVar5;
	func_474(iParam0, &uVar0, &uVar1, &uVar4, &uVar5);
	return uVar0;
}

char* func_199(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "RJCK2_RESTART_3";
		case 1:
			return "RJCK2_RESTART_4";
		case 2:
			return "RJCK2_RESTART_5";
		case 3:
			return "RJCK2_RESTART_6";
		default:
			break;
	}
	return "";
}

char* func_200(int iParam0)
{
	switch (iParam0)
	{
		case -2:
			return "JOHN";
		case 0:
			return "TEEN_JACK";
		default:
			break;
	}
	return "";
}

bool func_211(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = { vLocal_15 };
			*uParam2 = fLocal_24;
			break;
		case 1:
			*uParam1 = { vLocal_27 };
			*uParam2 = fLocal_36;
			break;
		case 2:
			*uParam1 = { vLocal_39 };
			*uParam2 = fLocal_42;
			break;
		case 3:
			*uParam1 = { vLocal_43 };
			*uParam2 = fLocal_46;
			break;
		case 4:
			*uParam1 = { vLocal_47 };
			*uParam2 = fLocal_53;
			break;
		case 5:
			*uParam1 = { vLocal_47 };
			*uParam2 = fLocal_53;
			break;
	}
	return !__LIB_0__::func_86(*uParam1);
}

int func_212(vector3 vParam0, var uParam3)
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
		iVar0 = func_493(0, 0);
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

int func_213(var uParam0, int iParam1)
{
	vector3 vVar0;
	float fVar3;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (!__LIB_0__::func_272(iParam1, 207))
		{
			__LIB_12__::func_798(uParam0);
			return 1;
		}
		else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, Global_35, 1, 1))
		{
			__LIB_12__::func_798(uParam0);
			return 1;
		}
		else
		{
			vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
			fVar3 = 10f;
			if (FIRE::IS_EXPLOSION_ACTIVE_IN_AREA(-1, vVar0 - Vector(fVar3, fVar3, fVar3), vVar0 + Vector(fVar3, fVar3, fVar3)))
			{
				__LIB_12__::func_798(uParam0);
				return 1;
			}
		}
	}
	return 0;
}

bool func_214(int iParam0, var uParam1)
{
	return (func_499(iParam0) && ENTITY::DOES_ENTITY_EXIST((*uParam1)[iParam0]));
}

bool func_215(int iParam0, var uParam1)
{
	return (func_499(iParam0) && !ENTITY::IS_ENTITY_DEAD((*uParam1)[iParam0]));
}

char* func_216(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "RJCK2_O_GRIVR";
		case 1:
			return "RJCK2_O_FISH";
		case 2:
			return "RJCK2_O_LOFOR_HIDDEN";
		case 3:
			return "RJCK2_O_LOFOR";
		case 4:
			return "RJCK2_O_FRUFU";
		case 5:
			return "RJCK2_O_HRUFU";
		case 6:
			return "RJCK2_F_RUFUS";
		case 7:
			return "RJCK2_F_JACK";
		case 8:
			return "AREA_FAIL";
		case 9:
			return "RJCK2_F_RIVER";
		case 10:
			return "RJCK2_F_FIND";
		case 11:
			return "RJCK2_F_WATER";
		case 12:
			return "JACK_ABANDON";
		case 13:
			return "RJCK2_UC_SUST";
		case 14:
			return "RJCK2_UC_SUCK";
		case 15:
			return "RJCK2_UC_SPIT";
		case 18:
			return "RJCK2_HLP_EQRO";
		default:
			break;
	}
	return "";
}

bool func_217(var uParam0)
{
	return uParam0->f_179.f_9 == 10;
}

void func_222(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 1:
			if (!__LIB_5__::func_352(func_216(0)) || iParam2 == 1)
			{
				__LIB_1__::func_422(func_216(0), 7500, 0, 1, 0, 0, -1, -1, 0);
			}
			break;
		case 2:
			if (!__LIB_5__::func_352(func_216(1)) || iParam2 == 1)
			{
				__LIB_1__::func_422(func_216(1), 7500, 0, 1, 0, 0, -1, -1, 0);
			}
			break;
		case 3:
			if (!__LIB_5__::func_352(func_216(3)) || iParam2 == 1)
			{
				__LIB_1__::func_422(func_216(3), 7500, 0, 1, 0, 0, -1, -1, 0);
			}
			break;
		case 4:
			if (!__LIB_5__::func_352(func_216(4)) || iParam2 == 1)
			{
				__LIB_1__::func_422(func_216(4), 7500, 0, 1, 0, 0, -1, -1, 0);
			}
			break;
		case 5:
			if (!__LIB_5__::func_352(func_216(5)) || iParam2 == 1)
			{
				__LIB_1__::func_422(func_216(5), 7500, 0, 1, 0, 0, -1, -1, 0);
			}
			break;
			break;
	}
}

bool func_226(int iParam0, var uParam1)
{
	return uParam1->f_69 == iParam0;
}

void func_233(var uParam0)
{
	if (!bLocal_55 || __LIB_3__::func_135(&(uParam0->f_102)) > 20000)
	{
		if (((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, joaat("INPUT_ATTACK")) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, joaat("INPUT_ATTACK2"))) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, joaat("INPUT_HORSE_ATTACK"))) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, joaat("INPUT_HORSE_ATTACK2")))
		{
			if (uParam0->f_69 < 13)
			{
				__LIB_0__::func_45("RJCK2_NOGUNS", 7000, 0, 0, 0, 1);
				bLocal_55 = true;
				__LIB_1__::func_148(&(uParam0->f_102));
			}
		}
	}
}

bool func_236(int iParam0)
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

void func_250(var uParam0)
{
	PED::_0x58F7DB5BD8FA2288(Global_35);
	PED::_0x58F7DB5BD8FA2288(Local_78[0]);
	if (__LIB_0__::func_1(uParam0->f_172, 8))
	{
		if (PED::_0x854BC9B1A1CCD034(-660878438, Global_35))
		{
			PED::_0xDE7B2B4144906CDF(-660878438, Global_35);
		}
	}
	if (__LIB_12__::func_644(uParam0) == 0)
	{
		__LIB_13__::func_626(Global_1347702[uParam0->f_174 /*49*/].f_15, 1);
	}
	else
	{
		__LIB_13__::func_626(Global_1347702[uParam0->f_174 /*49*/].f_15, 0);
	}
	func_431(uParam0);
}

void func_265(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_172, 16))
	{
		__LIB_13__::func_29(uParam0, 0);
		func_87(uParam0);
	}
}

int func_272(var uParam0)
{
	if (uParam0->f_177 == 6)
	{
		return 1;
	}
	else if (uParam0->f_177 == 2)
	{
		return 1;
	}
	else if (func_562(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_289(var uParam0)
{
	bool bVar0;
	bVar0 = true;
	if (!func_325(0, uParam0, &Local_78))
	{
		bVar0 = false;
	}
	if (!__LIB_0__::func_287(14, 28, 0) || !__LIB_0__::func_287(14, 66, 0))
	{
		__LIB_0__::func_288(14, 28, 0);
		__LIB_0__::func_288(14, 66, 0);
	}
	if ((ENTITY::DOES_ENTITY_EXIST(Local_78[0]) && __LIB_0__::func_287(14, 28, 0)) && __LIB_0__::func_287(14, 66, 0))
	{
		__LIB_0__::func_862(Local_78[0], 389057251);
	}
	if (!func_325(1, uParam0, &Local_78))
	{
		bVar0 = false;
	}
	if (!func_325(2, uParam0, &Local_78))
	{
		bVar0 = false;
	}
	if (!func_591(0, &Local_78))
	{
	}
	if (!func_591(1, &Local_78))
	{
	}
	if (!func_591(2, &Local_78))
	{
	}
	if (!func_591(3, &Local_78))
	{
	}
	if (!func_591(4, &Local_78))
	{
	}
	if (!func_591(5, &Local_78))
	{
	}
	if (!func_591(6, &Local_78))
	{
	}
	if (!func_592(0, &Local_78))
	{
		bVar0 = false;
	}
	if (!func_592(3, &Local_78))
	{
		bVar0 = false;
	}
	if (!func_592(1, &Local_78))
	{
		bVar0 = false;
	}
	if (!func_592(2, &Local_78))
	{
		bVar0 = false;
	}
	if (!func_320(6, &Local_78, 0, 1))
	{
		bVar0 = false;
	}
	if (!func_320(0, &Local_78, func_593(0), 1))
	{
		bVar0 = false;
	}
	if (!func_320(1, &Local_78, 0, 1))
	{
		bVar0 = false;
	}
	if (!func_320(7, &Local_78, 0, 1))
	{
		bVar0 = false;
	}
	if (!func_312(7, &Local_78))
	{
		bVar0 = false;
	}
	if (!func_312(8, &Local_78))
	{
		bVar0 = false;
	}
	if (!func_312(9, &Local_78))
	{
		bVar0 = false;
	}
	if (!func_312(10, &Local_78))
	{
		bVar0 = false;
	}
	if (!func_312(11, &Local_78))
	{
		bVar0 = false;
	}
	if (!func_312(0, &Local_78))
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
		return 0;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Local_78.f_27[7]))
	{
		VEHICLE::_0x424FFCB9F0D2D4B5(Local_78.f_27[7], 0);
	}
	ENTITY::SET_ENTITY_ROTATION(Local_78.f_7[1], 10.73f, 23.77f, -77.07f, 2, true);
	ENTITY::SET_ENTITY_ROTATION(Local_78.f_7[2], 30.81f, -15.14f, -20f, 2, true);
	func_594();
	PED::SET_PED_CONFIG_FLAG(Local_78[0], 315, true);
	PED::SET_PED_CONFIG_FLAG(Local_78[0], 297, true);
	PED::SET_PED_CONFIG_FLAG(Local_78[0], 130, true);
	PED::SET_PED_CONFIG_FLAG(Local_78[1], 315, true);
	PED::SET_PED_CONFIG_FLAG(Local_78[1], 297, true);
	PED::SET_PED_CONFIG_FLAG(Local_78[1], 130, true);
	PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), Local_78[1], 30, 0, 1);
	__LIB_13__::func_899(Local_78.f_27[0], 0);
	MISC::_SET_WEATHER_TYPE(joaat("HIGHPRESSURE"), false, true, true, 60f, false);
	if (__LIB_0__::func_27(Local_78.f_110, 512))
	{
		__LIB_4__::func_389(1309495497, 1, 0);
		if (!__LIB_0__::func_266(Local_78[0], -1647.31f, -1365.6f, 83.4f, 5f, 1, 1))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_78[0], -1647.31f, -1365.6f, 83.4f, 121.73f, true, false, true);
			OBJECT::DELETE_OBJECT(&(Local_78.f_7[3]));
		}
		if (!__LIB_0__::func_266(Local_78[1], -1647.49f, -1365.97f, 83.4f, 5f, 1, 1))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_78[1], -1647.49f, -1365.97f, 83.4f, -117.86f, true, false, true);
		}
	}
	return 1;
}

void func_303(var uParam0)
{
	int iVar0;
	int iVar1;
	if (!__LIB_1__::func_25(Global_1835011[60 /*74*/].f_1, 1))
	{
		return;
	}
	else if (__LIB_1__::func_25(Global_1347702[1 /*49*/].f_15, 1))
	{
		return;
	}
	if (((((((((((((((uParam0->f_174 == 29 || uParam0->f_174 == 56) || uParam0->f_174 == 57) || uParam0->f_174 == 72) || uParam0->f_174 == 84) || uParam0->f_174 == 85) || uParam0->f_174 == 86) || uParam0->f_174 == 87) || uParam0->f_174 == 88) || uParam0->f_174 == 92) || uParam0->f_174 == 111) || uParam0->f_174 == 102) || uParam0->f_174 == 117) || uParam0->f_174 == 122) || uParam0->f_174 == 149) || uParam0->f_174 == 150)
	{
		iVar0 = 100;
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, joaat("WEAPON_REVOLVER_CATTLEMAN"), 0, false))
		{
			if (!__LIB_0__::func_214(joaat("WEAPON_REVOLVER_CATTLEMAN")))
			{
				__LIB_0__::func_915(joaat("WEAPON_REVOLVER_CATTLEMAN"));
			}
			func_611(Global_35, joaat("WEAPON_REVOLVER_CATTLEMAN"), 0, 0, 2, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, iVar0, 0, 0, 0, 0);
		}
		else
		{
			iVar1 = WEAPON::GET_AMMO_IN_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_CATTLEMAN"));
			if (iVar1 < iVar0)
			{
				WEAPON::_ADD_AMMO_TO_PED(Global_35, joaat("WEAPON_REVOLVER_CATTLEMAN"), (iVar0 - iVar1), 752097756);
			}
		}
	}
}

void func_305(var uParam0)
{
	__LIB_1__::func_564(0);
	INVENTORY::_0x766315A564594401(__LIB_0__::func_162(0), joaat("CONSUMABLE_RUM"), 0);
	INVENTORY::_0x766315A564594401(__LIB_0__::func_162(0), joaat("CONSUMABLE_RUM_USED"), 0);
	INVENTORY::_0x766315A564594401(__LIB_0__::func_162(0), joaat("CONSUMABLE_GIN"), 0);
	INVENTORY::_0x766315A564594401(__LIB_0__::func_162(0), joaat("CONSUMABLE_GIN_USED"), 0);
	INVENTORY::_0x766315A564594401(__LIB_0__::func_162(0), joaat("CONSUMABLE_WHISKEY"), 0);
	INVENTORY::_0x766315A564594401(__LIB_0__::func_162(0), joaat("CONSUMABLE_WHISKEY_USED"), 0);
	INVENTORY::_0x766315A564594401(__LIB_0__::func_162(0), joaat("CONSUMABLE_BRANDY"), 0);
	INVENTORY::_0x766315A564594401(__LIB_0__::func_162(0), joaat("CONSUMABLE_BRANDY_USED"), 0);
	INVENTORY::_0x766315A564594401(__LIB_0__::func_162(0), joaat("CONSUMABLE_AGED_PIRATE_RUM"), 0);
	INVENTORY::_0x766315A564594401(__LIB_0__::func_162(0), -1679900928, 0);
	INVENTORY::_0x766315A564594401(__LIB_0__::func_162(0), -520953319, 0);
	INVENTORY::_0x766315A564594401(__LIB_0__::func_162(0), joaat("CONSUMABLE_SALOON_BEER"), 0);
	INVENTORY::_0x766315A564594401(__LIB_0__::func_162(0), joaat("CONSUMABLE_SALOON_WHISKEY"), 0);
}

void func_308(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	__LIB_13__::func_16(uParam0, 92437);
	__LIB_12__::func_981(uParam0, 92626);
	__LIB_12__::func_982(uParam0, 93583);
	switch (iParam1)
	{
		case 0:
			STREAMING::REQUEST_ANIM_DICT("MECH_LOCO_M@GENERIC@CARRY@SADDLE@IDLE");
			STREAMING::REQUEST_ANIM_DICT("CREATURES_MAMMAL@DOG_PERS@INJURED@IDLE");
			__LIB_13__::func_33(uParam0, 0);
			StringCopy(&(uParam0->f_2575), func_627(iParam1), 24);
			if (__LIB_0__::func_27(Local_78.f_110, 512) || __LIB_12__::func_936(uParam0))
			{
				__LIB_12__::func_909(&(uParam0->f_206));
			}
			else
			{
				__LIB_12__::func_846(&(uParam0->f_206));
				__LIB_12__::func_944(uParam0, func_627(iParam1), 1);
				__LIB_12__::func_956(&(uParam0->f_753), Global_35, 0, 0);
				__LIB_12__::func_956(&(uParam0->f_753), Local_78[0], 0, 0);
				__LIB_12__::func_956(&(uParam0->f_753), Local_78[1], "A_C_DOGRUFUS_01", 0);
				__LIB_12__::func_956(&(uParam0->f_753), Local_78.f_7[3], "p_cs_bookHardCv10x", 0);
			}
			__LIB_13__::func_59(uParam0, Global_35, 0, 0, 0, 0);
			__LIB_13__::func_59(uParam0, Local_78[0], 0, 0, 0, 0);
			__LIB_13__::func_59(uParam0, Local_78[1], "A_C_DogRufus_01", 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_78.f_7[1], "p_fishingpole01x", 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_78.f_7[2], "p_fishingpole02x", 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_78.f_7[0], "p_bucket03x", 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_78.f_7[3], "p_cs_bookHardCv10x", 0, 0, 0);
			__LIB_12__::func_779(uParam0, __LIB_1__::func_440(uParam0->f_174));
			if (func_312(1, &Local_78))
			{
				__LIB_13__::func_383(uParam0, &(Local_78.f_27[1]), 0, 0, 0, 0);
			}
			PED::_0xCE7A6C1D5CDE1F9D(Local_78[0], Local_78.f_7[0], "p_bucket03x_PH_L_HAND", "LOCO_ATTACH_BAIT_BUCKET");
			break;
		case 1:
			__LIB_13__::func_33(uParam0, 1);
			if (__LIB_0__::func_27(Local_78.f_110, 512) || __LIB_4__::func_511())
			{
				__LIB_12__::func_909(&(uParam0->f_206));
				StringCopy(&(uParam0->f_2575), "RJCK2_RSC2", 24);
			}
			else
			{
				__LIB_12__::func_909(&(uParam0->f_206));
				StringCopy(&(uParam0->f_2575), "RJCK2_RSC2", 24);
			}
			iVar0 = 0;
			while (iVar0 < 29)
			{
				if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar1, false, iVar0, true))
				{
					if (__LIB_0__::func_154(iVar1))
					{
					}
				}
				iVar0++;
			}
			__LIB_13__::func_59(uParam0, Global_35, "JOHN", 0, 0, 0);
			__LIB_13__::func_59(uParam0, Local_78[0], "JackMarston_Teen", 0, 0, 0);
			__LIB_13__::func_59(uParam0, Local_78[1], "A_C_DOGRUFUS_01", 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_78.f_7[1], "p_fishingpole01x", 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_78.f_7[0], "p_bucket03x", 0, 0, 0);
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_FISHINGROD"), true, 6, false, false);
			__LIB_13__::func_522(&(uParam0->f_206), Global_35, 6, "w_melee_fishingpole02", 0, joaat("W_MELEE_FISHINGPOLE02"));
			__LIB_12__::func_779(uParam0, -1606.602f, -1111.096f, 67.7107f);
			if (func_312(2, &Local_78))
			{
				__LIB_13__::func_383(uParam0, &(Local_78.f_27[2]), 0, 0, 0, 0);
			}
			PED::_0x3A50753042B6891B(Local_78[0], "p_bucket03x_PH_L_HAND");
			break;
		case 2:
			__LIB_13__::func_33(uParam0, 2);
			StringCopy(&(uParam0->f_2575), func_627(iParam1), 24);
			if (__LIB_0__::func_27(Local_78.f_110, 512) || __LIB_4__::func_511())
			{
				__LIB_12__::func_909(&(uParam0->f_206));
			}
			__LIB_13__::func_59(uParam0, Global_35, 0, 0, 0, 0);
			__LIB_13__::func_59(uParam0, Local_78[0], 0, 0, 0, 0);
			__LIB_13__::func_59(uParam0, Local_78[1], "A_C_DOGcatahoulacur_01", 0, 0, 0);
			__LIB_13__::func_59(uParam0, Local_78[3], "A_C_SNAKE_01", 0, 0, 0);
			__LIB_12__::func_779(uParam0, -1663.67f, -1151.53f, 76.79f);
			if (func_312(3, &Local_78))
			{
				__LIB_13__::func_383(uParam0, &(Local_78.f_27[3]), 0, 0, 0, 0);
			}
			break;
		case 3:
			__LIB_13__::func_33(uParam0, 4);
			StringCopy(&(uParam0->f_2575), func_627(iParam1), 24);
			if (__LIB_0__::func_27(Local_78.f_110, 512) || __LIB_4__::func_511())
			{
				__LIB_12__::func_909(&(uParam0->f_206));
			}
			__LIB_12__::func_779(uParam0, -1663.67f, -1151.53f, 76.79f);
			__LIB_0__::func_68(-1984149246, 0, 0);
			__LIB_13__::func_59(uParam0, Global_35, 0, 0, 0, 0);
			__LIB_13__::func_59(uParam0, Local_78[0], 0, 0, 0, 0);
			__LIB_13__::func_59(uParam0, Local_78[1], "A_C_DOGRUFUS_01", 0, 0, 0);
			__LIB_13__::func_59(uParam0, Local_78[4], "AbigailRoberts", 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_78.f_7[6], "p_tablecoffee04x", 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_78.f_7[4], "p_mugCoffee01x", 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_78.f_7[5], "p_door11x_beecher", 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_78.f_7[7], "p_chaircomfy07x", 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_78.f_7[8], "p_cs_rufusblanket01x", 0, 0, 0);
			__LIB_12__::func_779(uParam0, -1640.688f, -1360.641f, 84.82198f);
			if (func_312(5, &Local_78))
			{
				__LIB_13__::func_383(uParam0, &(Local_78.f_27[5]), 0, 0, 0, 0);
			}
			__LIB_6__::func_888(4);
			__LIB_1__::func_197(4, 1, 1, 1, 1);
			break;
	}
	if (bParam2)
	{
		__LIB_0__::func_7(&(uParam0->f_172), 16);
	}
}

bool func_309(var uParam0)
{
	if (__LIB_0__::func_27(Local_78.f_110, 512))
	{
		__LIB_4__::func_389(1731691513, 1, 0);
		OBJECT::_0x7F458B543006C8FE(1731691513, 32);
		if (((__LIB_0__::func_27(Local_78.f_110, 1048576) && !__LIB_5__::func_463()) && __LIB_0__::func_266(Global_35, -1644.59f, -1364.17f, 83.4f, 2f, 1, 1)) && !__LIB_0__::func_163(Global_35, 713668775))
		{
			__LIB_0__::func_7(&(Global_1347702[uParam0->f_174 /*49*/].f_12), 128);
			return true;
		}
		switch (Local_78.f_202)
		{
			case 1:
				if (__LIB_0__::func_94(Global_35, ENTITY::GET_ENTITY_COORDS(Local_78[0], true, false), 1) < 5f)
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
					if (__LIB_0__::func_94(Global_35, 2556.08f, 807.26f, 75.43f, 1) < 3f)
					{
						if (__LIB_0__::func_399(Global_35, 1, 0, 0) != joaat("WEAPON_UNARMED"))
						{
							WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 0, 0);
						}
					}
				}
				if (PED::_0xB91AB3BE7F655D49(Global_35))
				{
					func_592(3, &Local_78);
					__LIB_12__::func_957(uParam0, Local_78.f_7[3], "p_cs_book02x", 0, 0, 0);
					func_640(0, uParam0);
					__LIB_1__::func_148(&(Local_78.f_231));
					Local_78.f_202++;
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
				}
				break;
			case 2:
				HUD::_0xC9CAEAEEC1256E54(-1679307491);
				CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
				__LIB_4__::func_516(1, 0);
				if (!PED::_0xB91AB3BE7F655D49(Global_35) || __LIB_0__::func_265(&(Local_78.f_231)) > 4f)
				{
					Local_78.f_202++;
				}
				break;
			case 3:
				HUD::_0xC9CAEAEEC1256E54(-1679307491);
				CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
				__LIB_4__::func_516(1, 0);
				if ((!__LIB_18__::func_712() && !CAM::IS_SCREEN_FADED_OUT()) && !CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(2500);
				}
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					return true;
				}
				break;
		}
		return false;
	}
	return true;
}

bool func_312(int iParam0, var uParam1)
{
	var uVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	int iVar10;
	int iVar11;
	char* sVar12;
	if (!__LIB_13__::func_900(iParam0))
	{
		return false;
	}
	if (func_645(iParam0, uParam1))
	{
		return true;
	}
	iVar11 = __LIB_13__::func_901(iParam0);
	sVar12 = func_647(iParam0);
	if (iVar11 == -1)
	{
		if (func_648(iParam0, &uVar0, &vVar1, &vVar4, &vVar7, -1))
		{
			uParam1->f_27[iParam0] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(uVar0, vVar1, vVar4, vVar7, sVar12);
			if (VOLUME::_DOES_VOLUME_EXIST(uParam1->f_27[iParam0]))
			{
				return true;
			}
		}
	}
	else
	{
		uParam1->f_27[iParam0] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME(sVar12);
		iVar10 = 0;
		while (iVar10 < iVar11)
		{
			if (func_648(iParam0, &uVar0, &vVar1, &vVar4, &vVar7, iVar10))
			{
				VOLUME::_0x6E0D3C3F828DA773(uParam1->f_27[iParam0], VOLUME::_CREATE_VOLUME_BY_HASH(uVar0, vVar1, vVar4, vVar7));
			}
			iVar10++;
		}
		if (VOLUME::_DOES_VOLUME_EXIST(uParam1->f_27[iParam0]))
		{
			return true;
		}
	}
	return false;
}

bool func_313(var uParam0)
{
	TASK::CLEAR_PED_TASKS(Global_35, true, false);
	if ((CLOCK::GET_CLOCK_HOURS() >= 18 && CLOCK::GET_CLOCK_MINUTES() >= 0) || CLOCK::GET_CLOCK_HOURS() < 6)
	{
		CLOCK::SET_CLOCK_TIME(7, 0, 0);
	}
	if (!func_320(6, &Local_78, "pl_conversation_All", 1))
	{
		return false;
	}
	func_322(6, "pl_conversation_All", &Local_78);
	WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
	func_346(&Local_78);
	func_347(&Local_78);
	if (func_214(0, &Local_78))
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_78[0], vLocal_18, fLocal_25, false, false, true);
		__LIB_0__::func_862(Local_78[0], 389057251);
	}
	func_345(&Local_78);
	if (func_214(1, &Local_78))
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_78[1], vLocal_21, fLocal_26, false, false, true);
		TASK::CLEAR_PED_TASKS(Local_78[1], true, false);
	}
	if (!__LIB_0__::func_866(12, 0))
	{
		__LIB_1__::func_551(12, 0);
	}
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
	func_650(0, &Local_78);
	func_353(&Local_78, 0);
	__LIB_12__::func_937(uParam0, 0);
	Local_78.f_68 = 0;
	PED::_0xF7EA250B9A919E03(-660878438, Global_35);
	if (!PED::_0x854BC9B1A1CCD034(-660878438, Global_35))
	{
		return false;
	}
	__LIB_13__::func_62(uParam0, func_61(0), func_61(1), 0, 1, 0);
	return true;
}

bool func_314(var uParam0)
{
	Local_78.f_68 = -1;
	TASK::CLEAR_PED_TASKS(Global_35, true, false);
	if (func_214(0, &Local_78))
	{
		TASK::CLEAR_PED_TASKS(Local_78[0], true, false);
	}
	WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
	func_346(&Local_78);
	func_347(&Local_78);
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, vLocal_27, fLocal_36, false, false, true);
	if (func_214(0, &Local_78))
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_78[0], vLocal_30, fLocal_37, false, false, true);
		TASK::CLEAR_PED_TASKS(Local_78[0], true, false);
		__LIB_0__::func_862(Local_78[0], 389057251);
	}
	Local_78.f_40[1] = __LIB_18__::func_610(14, 1, 0, 0, 0);
	__LIB_0__::func_904(14, 1);
	func_345(&Local_78);
	if (func_214(1, &Local_78))
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_78[1], vLocal_33, fLocal_38, false, false, true);
		TASK::CLEAR_PED_TASKS(Local_78[1], true, false);
	}
	Local_78.f_40[2] = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_COMPANION"), Local_78[1]);
	MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_78.f_40[2], "RJCK2_RUFUS_BLIP");
	MAP::_BLIP_SET_MODIFIER(Local_78.f_40[2], 194242067);
	func_363(&Local_78, 1);
	__LIB_3__::func_887(Global_35, Local_78[0], &(Local_78.f_125), 0f, 0f, 0f, 0, 0, 1, 1069547520 /* Float: 1.5f */, -1082130432 /* Float: -1f */, 1073069561, 1056964608 /* Float: 0.5f */, 1092616192 /* Float: 10f */, -1, 1, 0, 0, 0, 1);
	func_653(Local_78[0], Global_35, &(Local_78.f_125), 0.5f, 0, 0, -1f, -1f, 1, 1536, 0f, 0f, 1.5f, 2f, 0.3f, 0.3f, 1, 0, -1, 1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1);
	__LIB_1__::func_731(&(Local_78.f_163));
	TASK::TASK_FOLLOW_AND_CONVERSE_WITH_PED(Local_78[0], Global_35, 0, 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 8, 0, 0, 1069547520 /* Float: 1.5f */, 1073741824 /* Float: 2f */);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
	func_650(0, &Local_78);
	func_353(&Local_78, 1);
	__LIB_12__::func_937(uParam0, 0);
	PED::_0xF7EA250B9A919E03(-660878438, Global_35);
	if (!PED::_0x854BC9B1A1CCD034(-660878438, Global_35))
	{
		return false;
	}
	__LIB_13__::func_62(uParam0, func_61(1), func_61(2), 1, 2, 0);
	return true;
}

bool func_316(var uParam0)
{
	TASK::CLEAR_PED_TASKS(Global_35, true, false);
	Local_78.f_40[1] = __LIB_18__::func_610(14, 1, 0, 0, 0);
	__LIB_0__::func_904(14, 1);
	if (func_214(0, &Local_78))
	{
		__LIB_0__::func_862(Local_78[0], 389057251);
	}
	__LIB_0__::func_904(12, 0);
	if (__LIB_0__::func_866(12, 0))
	{
		__LIB_1__::func_640(12);
	}
	func_351(uParam0, &Local_78);
	func_348(&Local_78);
	func_349(&Local_78);
	if (!__LIB_1__::func_253())
	{
		func_656(1);
	}
	if (!__LIB_1__::func_650())
	{
		__LIB_12__::func_625();
	}
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
	if (PED::_0x854BC9B1A1CCD034(-660878438, Global_35))
	{
		PED::_0xDE7B2B4144906CDF(-660878438, Global_35);
	}
	func_320(2, &Local_78, 0, 1);
	func_320(7, &Local_78, 0, 1);
	func_352(0, &Local_78);
	func_650(2, &Local_78);
	func_353(&Local_78, 3);
	__LIB_12__::func_937(uParam0, 1);
	__LIB_13__::func_62(uParam0, func_61(2), func_61(3), 2, 3, 0);
	if (func_324(0, &Local_78))
	{
		return true;
	}
	return false;
}

bool func_318(var uParam0)
{
	WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
	TASK::CLEAR_PED_TASKS(Global_35, true, false);
	PED::_0x89F5E7ADECCCB49C(Global_35, "searching_low_energy_indirect");
	if (!AUDIO::PREPARE_MUSIC_EVENT(func_199(1)))
	{
		return false;
	}
	if (func_214(0, &Local_78))
	{
		TASK::CLEAR_PED_TASKS(Local_78[0], true, false);
		__LIB_0__::func_862(Local_78[0], 389057251);
	}
	func_348(&Local_78);
	func_349(&Local_78);
	if (PED::_0x854BC9B1A1CCD034(-660878438, Global_35))
	{
		PED::_0xDE7B2B4144906CDF(-660878438, Global_35);
	}
	if (func_214(1, &Local_78))
	{
		TASK::CLEAR_PED_TASKS(Local_78[1], true, false);
	}
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
	if (!AUDIO::TRIGGER_MUSIC_EVENT(func_199(1)))
	{
		return false;
	}
	func_351(uParam0, &Local_78);
	func_650(4, &Local_78);
	func_353(&Local_78, 11);
	__LIB_12__::func_937(uParam0, 1);
	__LIB_13__::func_62(uParam0, func_61(3), func_61(4), 3, 4, 0);
	return true;
}

bool func_319(var uParam0)
{
	struct<10> Var0;
	struct<10> Var34;
	if (!AUDIO::PREPARE_MUSIC_EVENT(func_199(2)))
	{
		return false;
	}
	if (!func_320(7, &Local_78, 0, 1))
	{
		return false;
	}
	if (!func_659(0))
	{
		return false;
	}
	if (!func_659(1))
	{
		return false;
	}
	if (!func_659(5))
	{
		return false;
	}
	STREAMING::_REQUEST_MOVE_NETWORK_DEF(sLocal_72);
	STREAMING::REQUEST_ANIM_DICT(sLocal_73);
	STREAMING::REQUEST_CLIP_SET(sLocal_74);
	STREAMING::REQUEST_CLIP_SET(sLocal_75);
	if (((!STREAMING::_HAS_MOVE_NETWORK_DEF_LOADED(sLocal_72) || !STREAMING::HAS_ANIM_DICT_LOADED(sLocal_73)) || !STREAMING::HAS_CLIP_SET_LOADED(sLocal_74)) || !STREAMING::HAS_CLIP_SET_LOADED(sLocal_75))
	{
		return false;
	}
	Var0.f_6 = -1082130432;
	Var0.f_9 = -1082130432;
	Var0.f_1 = joaat("DEFAULT");
	Var0 = joaat("CLIPSET@MINI_GAMES@STORY@JACK2@JOHN");
	Var34.f_6 = -1082130432;
	Var34.f_9 = -1082130432;
	Var34.f_1 = joaat("DEFAULT");
	Var34 = joaat("CLIPSET@MINI_GAMES@STORY@JACK2@DOG");
	TASK::TASK_MOVE_NETWORK_ADVANCED_BY_NAME_WITH_INIT_PARAMS(Global_35, sLocal_72, &Var0, -1662.89f, -1155.72f, 76.92f, 0f, 0f, 255.82f, 2, 0, 0, 0, 128, 0);
	TASK::TASK_MOVE_NETWORK_ADVANCED_BY_NAME_WITH_INIT_PARAMS(Local_78[1], sLocal_72, &Var34, -1662.89f, -1155.72f, 76.92f, 0f, 0f, 255.82f, 2, 0, 0, 0, 128, 0);
	PED::_0x2208438012482A1A(Global_35, true, false);
	PED::_0x2208438012482A1A(Local_78[1], true, false);
	if (!TASK::IS_TASK_MOVE_NETWORK_ACTIVE(Global_35))
	{
		return false;
	}
	if (!TASK::IS_TASK_MOVE_NETWORK_ACTIVE(Local_78[1]))
	{
		return false;
	}
	WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
	TASK::CLEAR_PED_TASKS(Global_35, true, false);
	if (PED::_0x854BC9B1A1CCD034(-660878438, Global_35))
	{
		PED::_0xDE7B2B4144906CDF(-660878438, Global_35);
	}
	if (func_214(0, &Local_78) && __LIB_0__::func_94(Local_78[0], vLocal_50, 1) > 3.5f)
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_78[0], vLocal_50, fLocal_54, true, false, true);
		__LIB_0__::func_862(Local_78[0], 389057251);
	}
	Local_78.f_40[1] = __LIB_18__::func_610(14, 1, 0, 0, 0);
	__LIB_0__::func_904(14, 1);
	Local_78.f_40[2] = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_COMPANION"), Local_78[1]);
	MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_78.f_40[2], "RJCK2_RUFUS_BLIP");
	MAP::_BLIP_SET_MODIFIER(Local_78.f_40[2], 194242067);
	func_348(&Local_78);
	func_349(&Local_78);
	func_660(&Local_78);
	func_661(&Local_78, &(Local_78.f_179));
	func_320(7, &Local_78, "pl_Jack_Reaction_to_Venom_Sucking", 1);
	if (!func_321(7, "pl_Jack_Reaction_to_Venom_Sucking", &Local_78))
	{
		func_322(7, "pl_Jack_Reaction_to_Venom_Sucking", &Local_78);
	}
	func_323(7, "pl_Jack_Reaction_to_Venom_Sucking", &Local_78);
	__LIB_5__::func_438(&(Local_78.f_163));
	if (!CAM::_0xDD0B7C5AE58F721D(&Local_56))
	{
		CAM::_0x6A4D224FC7643941(&Local_56);
	}
	if (CAM::_0xDD0B7C5AE58F721D(&Local_56) && !CAM::_0x927B810E43E99932(&Local_56))
	{
		CAM::_0xB8B207C34285E978(&Local_56);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(60f, 1f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-30f, 1f);
	}
	STREAMING::REQUEST_PTFX_ASSET();
	if (!STREAMING::HAS_NAMED_PTFX_ASSET_LOADED(joaat("SCR_JACK2")))
	{
		return false;
	}
	if (!AUDIO::TRIGGER_MUSIC_EVENT(func_199(2)))
	{
		return false;
	}
	func_650(5, &Local_78);
	func_353(&Local_78, 13);
	__LIB_12__::func_937(uParam0, 2);
	__LIB_13__::func_62(uParam0, func_61(4), func_61(5), 4, 5, 0);
	return true;
}

bool func_320(int iParam0, var uParam1, char* sParam2, bool bParam3)
{
	char* sVar0;
	if (!func_663(iParam0))
	{
		return false;
	}
	if (!func_664(iParam0, uParam1))
	{
		sVar0 = func_665(iParam0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
		{
			uParam1->f_54[iParam0] = ANIMSCENE::_CREATE_ANIM_SCENE(sVar0, 0, sParam2, false, true);
		}
	}
	if (func_664(iParam0, uParam1))
	{
		if (!func_666(iParam0, uParam1))
		{
			return false;
		}
		if (!bParam3)
		{
			return true;
		}
		else if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			return func_322(iParam0, sParam2, uParam1);
		}
		else if (func_667(iParam0, uParam1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return false;
}

bool func_321(int iParam0, char* sParam1, var uParam2)
{
	return ((func_668(iParam0, uParam2) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam1)) && ANIMSCENE::_0x23E33CB9F4A3F547(uParam2->f_54[iParam0], sParam1));
}

bool func_322(int iParam0, char* sParam1, var uParam2)
{
	if (func_667(iParam0, uParam2) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		if (!ANIMSCENE::_0x0DF57F86FE71DBE5(uParam2->f_54[iParam0], sParam1) && !ANIMSCENE::_0x23E33CB9F4A3F547(uParam2->f_54[iParam0], sParam1))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(uParam2->f_54[iParam0], sParam1);
		}
		return ANIMSCENE::_0x23E33CB9F4A3F547(uParam2->f_54[iParam0], sParam1);
	}
	return false;
}

void func_323(int iParam0, char* sParam1, var uParam2)
{
	if (func_321(iParam0, sParam1, uParam2))
	{
		ANIMSCENE::START_ANIM_SCENE(uParam2->f_54[iParam0]);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam2->f_54[iParam0], sParam1, true);
	}
}

bool func_324(int iParam0, var uParam1)
{
	return (func_664(iParam0, uParam1) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam1->f_54[iParam0], false));
}

bool func_325(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	int iVar6;
	int iVar7;
	char* sVar8;
	bool bVar9;
	bool bVar10;
	if (!func_499(iParam0))
	{
		return false;
	}
	if (func_214(iParam0, uParam2))
	{
		return true;
	}
	if (func_473(iParam0, &iVar0, &iVar1, &vVar2, &fVar5, &iVar6, &iVar7))
	{
		if (iVar0 != -1 && iParam0 != 0)
		{
			(*uParam2)[iParam0] = func_669(iVar0, 1, 1, vVar2.x, vVar2.y, vVar2.z, fVar5, 1, 1, 0, 0, 0, 0, 0, 1, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
		}
		else if (iVar0 != -1 && iParam0 == 0)
		{
			(*uParam2)[iParam0] = func_669(iVar0, 1, 1, vVar2.x, vVar2.y, vVar2.z, fVar5, 1, 1, 0, 0, 0, 0, -1092189504, 1, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
		}
		else
		{
			(*uParam2)[iParam0] = __LIB_8__::func_931(iVar1, vVar2, fVar5, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST((*uParam2)[iParam0]))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*uParam2)[iParam0], true);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING((*uParam2)[iParam0], vVar2, fVar5, false, false, true);
			sVar8 = func_200(iParam0);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar8))
			{
				__LIB_12__::func_875(uParam1, (*uParam2)[iParam0], sVar8, 1);
			}
			if (iVar6 != joaat("REL_NO_RELATIONSHIP"))
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH((*uParam2)[iParam0], iVar6);
			}
			bVar9 = iVar7 & 1 == true;
			bVar10 = iVar7 & 2 == 2;
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT((*uParam2)[iParam0], !bVar9);
			PED::SET_PED_CAN_BE_TARGETTED((*uParam2)[iParam0], !bVar10);
			if (iParam0 == 0)
			{
				__LIB_0__::func_862((*uParam2)[iParam0], 389057251);
			}
			if (iParam0 == 3)
			{
				ENTITY::FREEZE_ENTITY_POSITION((*uParam2)[iParam0], true);
				PED::SET_PED_CONFIG_FLAG((*uParam2)[iParam0], 186, false);
				TASK::TASK_STAND_STILL((*uParam2)[iParam0], -1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH((*uParam2)[iParam0], joaat("REL_WILD_ANIMAL_PREDATOR"));
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, joaat("PLAYER"), joaat("REL_WILD_ANIMAL_PREDATOR"));
			}
			return true;
		}
	}
	return false;
}

bool func_326(var uParam0)
{
	func_353(&Local_78, 14);
	__LIB_12__::func_937(uParam0, 3);
	return true;
}

bool func_327(var uParam0, var uParam1)
{
	if (!func_325(4, uParam0, uParam1))
	{
		return false;
	}
	if (!func_592(4, uParam1))
	{
		return false;
	}
	if (!func_592(6, uParam1))
	{
		return false;
	}
	if (!func_592(7, uParam1))
	{
		return false;
	}
	if (!func_592(8, uParam1))
	{
		return false;
	}
	if (!func_592(5, uParam1))
	{
		return false;
	}
	if (!func_312(6, uParam1))
	{
	}
	if (!STREAMING::_0xCF45DF50C7775F2A())
	{
		STREAMING::_0x513F8AA5BF2F17CF(-1638.16f, -1350.5f, 82.97f, 100f, 4);
	}
	return true;
}

bool func_334(var uParam0)
{
	if (__LIB_13__::func_22(uParam0) == 0 && __LIB_0__::func_27(Local_78.f_110, 512))
	{
		__LIB_0__::func_7(&(Global_1347702[uParam0->f_174 /*49*/].f_12), 128);
		if (!func_672(&Local_78))
		{
			return false;
		}
	}
	return true;
}

int func_340(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
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
				if (__LIB_13__::func_4(uParam4, &uParam0, 1, 1))
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
					__LIB_13__::func_18(uParam4, &uParam0, uParam5);
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
			func_695(uParam4);
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
				func_702(uParam4);
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
					func_703(&(uParam4->f_405), 0);
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
				func_702(uParam4);
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

void func_345(var uParam0)
{
	if (func_215(0, uParam0) && func_708(0, uParam0))
	{
		ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_7[0], (*uParam0)[0], PED::GET_PED_BONE_INDEX((*uParam0)[0], 37709), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
		if (PED::_0x569F1E1237508DEB((*uParam0)[0]) != joaat("LOCO_ATTACH_BAIT_BUCKET"))
		{
			PED::_0xA0774E388CE4A679((*uParam0)[0], uParam0->f_7[0], "p_bucket03x_PH_L_HAND", "LOCO_ATTACH_BAIT_BUCKET", 1);
		}
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_7[0], true, true);
	}
}

void func_346(var uParam0)
{
	if (func_708(1, uParam0))
	{
		ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_7[1], Global_35, PED::GET_PED_BONE_INDEX(Global_35, 64687), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
	}
	if (!PED::_GET_PED_BLACKBOARD_BOOL(Global_35, "CarryFishingpole"))
	{
		PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "CarryFishingpole", true, -1);
	}
}

void func_347(var uParam0)
{
	if (func_708(2, uParam0))
	{
		ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_7[2], Global_35, PED::GET_PED_BONE_INDEX(Global_35, 37709), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
	}
}

void func_348(var uParam0)
{
	if (func_708(0, uParam0))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(uParam0->f_7[0]))
		{
			ENTITY::DETACH_ENTITY(uParam0->f_7[0], true, true);
			PED::_0x3A50753042B6891B((*uParam0)[0], "p_bucket03x_PH_L_HAND");
			PED::_0x4D0D2E3D8BC000EB((*uParam0)[0], "p_bucket03x_PH_L_HAND", 1);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_7[0], true, true);
		}
	}
}

void func_349(var uParam0)
{
	if (func_708(1, uParam0))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(uParam0->f_7[1]))
		{
			ENTITY::DETACH_ENTITY(uParam0->f_7[1], true, true);
			if (PED::_GET_PED_BLACKBOARD_BOOL(Global_35, "CarryFishingpole"))
			{
				PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "CarryFishingpole", false, -1);
			}
		}
	}
}

void func_350(int iParam0, var uParam1, bool bParam2)
{
	if (func_708(iParam0, uParam1))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(uParam1->f_7[iParam0]))
		{
			ENTITY::DETACH_ENTITY(uParam1->f_7[iParam0], true, true);
		}
		if (bParam2 || iParam0 == 0)
		{
			if (iParam0 != 5)
			{
				OBJECT::DELETE_OBJECT(&(uParam1->f_7[iParam0]));
			}
		}
		else
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam1->f_7[iParam0]));
		}
	}
}

void func_351(var uParam0, var uParam1)
{
	if (!func_214(3, uParam1))
	{
		if (func_325(3, uParam0, uParam1))
		{
			PED::SET_PED_CONFIG_FLAG((*uParam1)[3], 186, false);
			TASK::TASK_STAND_STILL((*uParam1)[3], -1);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, joaat("PLAYER"), joaat("REL_WILD_ANIMAL_PREDATOR"));
		}
	}
}

void func_352(int iParam0, var uParam1)
{
	if (func_668(iParam0, uParam1) && !func_324(iParam0, uParam1))
	{
		ANIMSCENE::START_ANIM_SCENE(uParam1->f_54[iParam0]);
	}
}

void func_353(var uParam0, int iParam1)
{
	if (uParam0->f_69 != iParam1)
	{
		uParam0->f_69 = iParam1;
	}
}

void func_354(var uParam0, int iParam1)
{
	if (uParam0->f_70 != iParam1)
	{
		uParam0->f_70 = iParam1;
	}
}

int func_357(var uParam0)
{
	if (!func_215(0, &Local_78) || !func_215(1, &Local_78))
	{
		return 0;
	}
	func_741(&Local_78, 0);
	func_742(uParam0, &Local_78);
	func_364(&Local_78);
	switch (Local_78.f_69)
	{
		case 0:
			__LIB_13__::func_62(uParam0, func_61(0), func_61(1), 0, 1, 0);
			HUD::DISPLAY_HUD(true);
			__LIB_1__::func_681(&(Local_78.f_110), 4);
			__LIB_1__::func_283(&(Local_78.f_216), 0);
			__LIB_1__::func_283(&(Local_78.f_222), 0);
			Local_78.f_40[1] = __LIB_18__::func_610(14, 1, 0, 0, 0);
			__LIB_0__::func_904(14, 1);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
			__LIB_0__::func_573();
			__LIB_3__::func_65(16);
			PED::SET_PED_CONFIG_FLAG(Global_35, 446, true);
			Local_78.f_40[2] = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_COMPANION"), Local_78[1]);
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_78.f_40[2], "RJCK2_RUFUS_BLIP");
			MAP::_BLIP_SET_MODIFIER(Local_78.f_40[2], 194242067);
			__LIB_1__::func_551(12, 0);
			__LIB_1__::func_453(12, 1);
			COMPANION::_0xD730281E496621FB(Local_78[1], joaat("DOG"));
			__LIB_1__::func_551(14, 0);
			__LIB_1__::func_453(14, 1);
			COMPANION::_0xD730281E496621FB(Local_78[0], joaat("WINGMAN"));
			func_363(&Local_78, 1);
			func_353(&Local_78, 1);
			PED::SET_GROUP_FORMATION_SPACING(__LIB_0__::func_110(), 1f, -1f, -1f);
			__LIB_11__::func_205(0);
			PED::_0xF7EA250B9A919E03(-660878438, Global_35);
			CLOCK::PAUSE_CLOCK(false, 0);
			if (PED::_GET_GROUP_FORMATION(__LIB_0__::func_110()) != 6)
			{
				PED::SET_GROUP_FORMATION(__LIB_0__::func_110(), 6);
			}
			break;
		case 1:
			func_345(&Local_78);
			func_748(Global_35, func_190(6), 500f, 400f, 5f, 3f);
			if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_78.f_54[6], false) && !__LIB_0__::func_75(&(Local_78.f_78)))
			{
				__LIB_1__::func_283(&(Local_78.f_78), 0);
			}
			if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_78.f_54[6], false) && __LIB_0__::func_264(&(Local_78.f_78)) > 15f)
			{
				func_640(17, uParam0);
				__LIB_1__::func_148(&(Local_78.f_78));
			}
			if (__LIB_0__::func_94(Global_35, -1605.22f, -1111.18f, 67.72f, 1) < 15f && !__LIB_0__::func_75(&(Local_78.f_105)))
			{
				__LIB_1__::func_283(&(Local_78.f_105), 1);
			}
			if (__LIB_0__::func_94(Global_35, -1605.22f, -1111.18f, 67.72f, 1) < 15f)
			{
				CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			}
			if (__LIB_12__::func_670(&(uParam0->f_753)) || __LIB_0__::func_264(&(Local_78.f_105)) > 2f)
			{
				__LIB_0__::func_325(&(Local_78.f_40[0]));
				func_363(&Local_78, 6);
				func_750(6, &Local_78);
				func_353(&Local_78, 2);
			}
			break;
		case 2:
			func_345(&Local_78);
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			MAP::DISPLAY_RADAR(false);
			PED::SET_PED_CONFIG_FLAG(Global_35, 446, false);
			break;
		case 3:
			Global_1900073.f_17 = 1;
			__LIB_3__::func_319(Local_78.f_54[6]);
			__LIB_11__::func_205(1);
			PED::SET_PED_RESET_FLAG(Global_35, 229, false);
			PED::SET_PED_RESET_FLAG(Local_78[0], 229, false);
			if (!CAM::_0x81DCFD13CF39920E())
			{
				MAP::DISPLAY_RADAR(true);
			}
			if (!__LIB_1__::func_253())
			{
				func_656(1);
			}
			if (!__LIB_1__::func_650())
			{
				__LIB_12__::func_625();
			}
			if (!__LIB_1__::func_647())
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_FISHINGROD"), true, 0, false, false);
			}
			if (__LIB_1__::func_650())
			{
				__LIB_13__::func_62(uParam0, func_61(2), func_61(3), 2, 3, 0);
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_FISHINGROD"), true, 0, false, false);
				__LIB_12__::func_600();
				func_353(&Local_78, 4);
			}
			break;
		case 4:
			func_753(1);
			HUD::_HIDE_HUD_COMPONENT(-1618603322);
			if (PED::_0x854BC9B1A1CCD034(-660878438, Global_35))
			{
				PED::_0xDE7B2B4144906CDF(-660878438, Global_35);
			}
			if (!CAM::_0x81DCFD13CF39920E())
			{
				MAP::DISPLAY_RADAR(true);
				__LIB_12__::func_618();
				__LIB_12__::func_617(0);
				__LIB_1__::func_658(0);
			}
			MAP::DISPLAY_RADAR(true);
			if (!__LIB_1__::func_650() && __LIB_1__::func_647())
			{
				__LIB_12__::func_625();
			}
			if (__LIB_0__::func_665(Global_35, Local_78.f_7[0], 1, 1) < 2.5f)
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
			}
			if (!__LIB_0__::func_27(Local_78.f_110, 2097152) && ANIMSCENE::_GET_ANIM_SCENE_TIME(Local_78.f_54[0]) > 4f)
			{
				func_640(8, uParam0);
				__LIB_1__::func_683(&(Local_78.f_110), 2097152);
			}
			if (!__LIB_0__::func_27(Local_78.f_110, 4194304) && ANIMSCENE::_GET_ANIM_SCENE_TIME(Local_78.f_54[0]) > 71f)
			{
				func_640(9, uParam0);
				__LIB_1__::func_683(&(Local_78.f_110), 4194304);
			}
			if (func_668(0, &Local_78))
			{
				if (((!func_324(0, &Local_78) && !func_757(0, &Local_78)) && !PED::IS_PED_GROUP_MEMBER(Local_78[1], PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX()), 0)) && !PED::IS_PED_GROUP_MEMBER(Local_78[0], PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX()), 0))
				{
					func_352(0, &Local_78);
				}
			}
			if (((!func_324(1, &Local_78) && func_757(0, &Local_78)) && !PED::IS_PED_GROUP_MEMBER(Local_78[1], PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX()), 0)) && !PED::IS_PED_GROUP_MEMBER(Local_78[0], PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX()), 0))
			{
				func_352(1, &Local_78);
				func_353(&Local_78, 5);
			}
			break;
		case 5:
			func_753(1);
			func_758(0);
			if (!__LIB_0__::func_27(Local_78.f_111, 16) && func_324(1, &Local_78))
			{
				func_640(10, uParam0);
				__LIB_1__::func_683(&(Local_78.f_111), 16);
			}
			if (func_757(1, &Local_78))
			{
				PED::REQUEST_PED_VISIBILITY_TRACKING(Local_78[0]);
				__LIB_1__::func_148(&(Local_78.f_84));
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_78[0], func_190(8), 2f, -1, 0.25f, 0, 40000f);
				PED::_0x89F5E7ADECCCB49C(Local_78[0], "searching_high_energy_indirect");
				if (!__LIB_1__::func_647())
				{
					PED::_0x89F5E7ADECCCB49C(Global_35, "searching_low_energy_indirect");
					PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
				}
				if (!__LIB_1__::func_675(0) && !__LIB_1__::func_673(0))
				{
					func_640(18, uParam0);
					__LIB_12__::func_772(96, func_216(2), 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					__LIB_1__::func_422(func_216(2), 7500, 0, 1, 0, 0, -1, -1, 0);
					func_354(&Local_78, 3);
					func_353(&Local_78, 6);
				}
			}
			break;
		case 6:
			func_758(0);
			if (__LIB_1__::func_472(Local_78[0], 250f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */) || GRAPHICS::_0xDFE332A5DA6FE7C9(Local_78.f_241) > 30)
			{
				__LIB_1__::func_148(&(Local_78.f_84));
			}
			if (!__LIB_1__::func_647())
			{
				PED::_0x89F5E7ADECCCB49C(Global_35, "searching_low_energy_indirect");
			}
			if (!__LIB_0__::func_163(Local_78[0], 713668775) || __LIB_0__::func_94(Local_78[0], -1665.457f, -1154.613f, 76.5916f, 1) < 8f)
			{
				if (__LIB_0__::func_75(&(Local_78.f_84)) && __LIB_1__::func_871(&(Local_78.f_84)) >= 7000)
				{
					func_354(&Local_78, 4);
					func_353(&Local_78, 9);
				}
				else
				{
					TASK::TASK_WANDER_IN_AREA(Local_78[0], func_190(8), 8f, 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */, 0);
					func_353(&Local_78, 7);
				}
			}
			break;
		case 7:
			func_753(4);
			func_758(0);
			if (__LIB_1__::func_472(Local_78[0], 250f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */) || GRAPHICS::_0xDFE332A5DA6FE7C9(Local_78.f_241) > 30)
			{
				__LIB_1__::func_148(&(Local_78.f_84));
			}
			if (!__LIB_1__::func_647())
			{
				PED::_0x89F5E7ADECCCB49C(Global_35, "searching_low_energy_indirect");
				PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
			}
			if (__LIB_0__::func_75(&(Local_78.f_84)) && __LIB_1__::func_871(&(Local_78.f_84)) >= 7000)
			{
				__LIB_1__::func_148(&(Local_78.f_84));
				func_354(&Local_78, 4);
				func_353(&Local_78, 9);
			}
			else if ((__LIB_0__::func_665(Global_35, Local_78[0], 1, 1) < 25f || __LIB_0__::func_94(Global_35, func_190(10), 1) < 5f) && !__LIB_5__::func_463())
			{
				func_640(12, uParam0);
				__LIB_1__::func_148(&(Local_78.f_96));
				func_353(&Local_78, 8);
			}
			break;
		case 8:
			func_753(3);
			func_758(1);
			if (((__LIB_0__::func_265(&(Local_78.f_96)) > 10f && __LIB_0__::func_665(Global_35, Local_78[0], 1, 1) < 7.5f) && !__LIB_0__::func_27(Local_78.f_111, 8388608)) && !__LIB_5__::func_463())
			{
				func_640(19, uParam0);
				__LIB_1__::func_683(&(Local_78.f_111), 8388608);
			}
			if ((__LIB_0__::func_27(Local_78.f_111, 8388608) && !__LIB_0__::func_27(Local_78.f_111, 16777216)) && !__LIB_5__::func_463())
			{
				func_640(20, uParam0);
				__LIB_1__::func_683(&(Local_78.f_111), 16777216);
			}
			if (!__LIB_4__::func_149(0))
			{
				func_763(0);
			}
			if (__LIB_1__::func_472(Local_78[0], 250f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */) || GRAPHICS::_0xDFE332A5DA6FE7C9(Local_78.f_241) > 30)
			{
				__LIB_1__::func_148(&(Local_78.f_84));
			}
			if (!__LIB_1__::func_647())
			{
				PED::_0x89F5E7ADECCCB49C(Global_35, "searching_low_energy_indirect");
				PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
			}
			if (!__LIB_0__::func_27(Local_78.f_110, 2))
			{
				if (__LIB_0__::func_94(Global_35, -1581.226f, -1159.444f, 76.3589f, 1) < 15f)
				{
					__LIB_1__::func_683(&(Local_78.f_110), 2);
					__LIB_1__::func_283(&(Local_78.f_93), 0);
				}
			}
			else if (((__LIB_0__::func_75(&(Local_78.f_84)) && __LIB_1__::func_871(&(Local_78.f_84)) >= 7000) && __LIB_0__::func_75(&(Local_78.f_93))) && __LIB_0__::func_265(&(Local_78.f_93)) > 2.5f)
			{
				if (!__LIB_5__::func_463())
				{
					func_640(13, uParam0);
				}
				func_353(&Local_78, 11);
			}
			break;
		case 9:
			func_753(4);
			func_758(1);
			if (!__LIB_1__::func_647())
			{
				PED::_0x89F5E7ADECCCB49C(Global_35, "searching_low_energy_indirect");
				PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
			}
			if (!__LIB_4__::func_149(0))
			{
				if (!__LIB_5__::func_463())
				{
					func_640(14, uParam0);
				}
				func_763(0);
				__LIB_1__::func_283(&(Local_78.f_90), 0);
				func_353(&Local_78, 11);
			}
			else if (__LIB_0__::func_75(&(Local_78.f_84)) && __LIB_0__::func_265(&(Local_78.f_84)) > 15f)
			{
				__LIB_1__::func_283(&(Local_78.f_90), 0);
				func_354(&Local_78, 4);
				func_353(&Local_78, 10);
			}
			break;
		case 10:
			func_753(4);
			func_758(1);
			if (!__LIB_4__::func_149(0))
			{
				if (!__LIB_5__::func_463())
				{
					func_640(14, uParam0);
				}
				func_763(0);
				func_353(&Local_78, 11);
			}
			else if (!__LIB_8__::func_608(0) && (!__LIB_1__::func_655(0) || (__LIB_0__::func_75(&(Local_78.f_90)) && __LIB_0__::func_265(&(Local_78.f_90)) > 3f)))
			{
				if (!__LIB_5__::func_463())
				{
					func_640(14, uParam0);
				}
				func_763(0);
				if (__LIB_1__::func_647())
				{
					__LIB_13__::func_905(0, 1, 0, 0);
				}
				func_353(&Local_78, 11);
			}
			break;
		case 11:
			__LIB_13__::func_62(uParam0, func_61(3), func_61(4), 3, 4, 0);
			func_753(4);
			func_320(7, &Local_78, 0, 1);
			if (__LIB_1__::func_647())
			{
				__LIB_13__::func_905(0, 1, 0, 0);
			}
			func_763(0);
			if (((!__LIB_1__::func_472(Local_78[0], 1116471296 /* Float: 70f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */) && __LIB_0__::func_665(Global_35, Local_78[0], 1, 1) > 30f) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), func_190(11), true) > 40f) && !ENTITY::IS_ENTITY_DEAD(Local_78[0]))
			{
				__LIB_0__::func_325(&(Local_78.f_40[1]));
				__LIB_3__::func_608(Local_78[0]);
				__LIB_4__::func_705(14, 1);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_78[0], func_190(11), 100.9919f, true, false, true);
			}
			else
			{
				TASK::OPEN_SEQUENCE_TASK(&(Local_78.f_206));
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_190(11), 100.9919f, 20000, 0.25f, 0, 40000f);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_78[1], 1, -1f, -1f, -1f);
				TASK::CLOSE_SEQUENCE_TASK(Local_78.f_206);
				TASK::TASK_PERFORM_SEQUENCE(Local_78[0], Local_78.f_206);
			}
			PED::_0x3088634CF8C819CF(Local_78[0]);
			if (!ENTITY::IS_ENTITY_DEAD(Local_78[1]))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_78[1], func_190(10), 152.85f, true, false, true);
				ENTITY::FREEZE_ENTITY_POSITION(Local_78[1], false);
			}
			if (func_214(3, &Local_78))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_78[3], func_190(9), 33.12f, true, false, true);
				ENTITY::FREEZE_ENTITY_POSITION(Local_78[3], false);
				TASK::TASK_STAND_STILL(Local_78[3], -1);
				PED::SET_PED_CAN_BE_TARGETTED(Local_78[3], true);
				ENTITY::SET_ENTITY_INVINCIBLE(Local_78[3], true);
			}
			if (!__LIB_1__::func_675(0) && !__LIB_1__::func_673(0))
			{
				func_353(&Local_78, 12);
			}
			break;
		case 12:
			if (!__LIB_1__::func_647())
			{
				__LIB_14__::func_190(0);
			}
			PED::_0x58F7DB5BD8FA2288(Global_35);
			if (__LIB_0__::func_266(Local_78[0], func_190(11), 7.5f, 1, 1))
			{
				func_352(7, &Local_78);
				AUDIO::STOP_PED_SPEAKING(Local_78[1], true);
				func_354(&Local_78, 4);
				if (__LIB_0__::func_48(Global_35, Local_78[0], 20f, 1))
				{
					if (func_771(&Local_78))
					{
					}
					CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
					__LIB_5__::func_438(&(Local_78.f_163));
					if (CAM::_0xA2B1C7EF759A63CE() >= 1f)
					{
						func_353(&Local_78, 13);
					}
				}
				else if (MISC::IS_BULLET_IN_AREA(func_190(9), 3f, true))
				{
					func_353(&Local_78, 13);
					if (func_771(&Local_78))
					{
					}
				}
			}
			break;
		case 13:
			__LIB_13__::func_62(uParam0, func_61(4), func_61(5), 4, 5, 0);
			AUDIO::STOP_PED_SPEAKING(Local_78[1], false);
			func_320(7, &Local_78, "pl_Jack_Reaction_to_Venom_Sucking", 1);
			if (!func_321(7, "pl_Jack_Reaction_to_Venom_Sucking", &Local_78))
			{
				func_322(7, "pl_Jack_Reaction_to_Venom_Sucking", &Local_78);
			}
			if (!func_324(7, &Local_78) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_78.f_54[7], false))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_78.f_54[7], "JackMarston_Teen", Local_78[0], 0);
			}
			func_323(7, "pl_Jack_Reaction_to_Venom_Sucking", &Local_78);
			if (Local_78.f_179.f_9 == 2)
			{
				Local_78.f_179.f_9 = 3;
			}
			if (!__LIB_0__::func_75(&(Local_78.f_81)))
			{
				__LIB_1__::func_283(&(Local_78.f_81), 1);
			}
			if (Local_78.f_179.f_9 == 6 && __LIB_8__::func_684(func_772(3)))
			{
				__LIB_6__::func_900(func_772(3), 1, 0);
			}
			if ((__LIB_0__::func_27(Local_78.f_111, 33554432) && __LIB_1__::func_871(&(Local_78.f_81)) > 5000) && !__LIB_8__::func_684(func_772(3)))
			{
				func_640(21, uParam0);
				__LIB_1__::func_681(&(Local_78.f_111), 33554432);
				__LIB_1__::func_283(&(Local_78.f_81), 1);
			}
			if ((__LIB_0__::func_27(Local_78.f_111, 67108864) && __LIB_1__::func_871(&(Local_78.f_81)) > 5000) && !__LIB_8__::func_684(func_772(3)))
			{
				func_640(22, uParam0);
				__LIB_1__::func_681(&(Local_78.f_111), 67108864);
				__LIB_1__::func_283(&(Local_78.f_81), 1);
			}
			PED::_0x58F7DB5BD8FA2288(Local_78[0]);
			PED::_0x58F7DB5BD8FA2288(Global_35);
			if (func_214(3, &Local_78))
			{
				PED::DELETE_PED(&(Local_78[3]));
			}
			if (!func_327(uParam0, &Local_78))
			{
			}
			if (!func_320(8, &Local_78, "PBL_1", 1))
			{
			}
			if (func_775(uParam0, &Local_78) && func_327(uParam0, &Local_78))
			{
				func_353(&Local_78, 14);
			}
			break;
		case 14:
			if (!func_327(uParam0, &Local_78))
			{
			}
			CAM::_0x0A5A4F1979ABB40E(&Local_56);
			CAM::_0x798BE43C9393632B(&Local_56);
			func_353(&Local_78, 15);
			break;
		case 15:
			return 1;
	}
	return 0;
}

void func_359(var uParam0)
{
	CAM::_0x6CAB0BA160B168D2();
	switch (uParam0->f_68)
	{
		case 0:
			__LIB_3__::func_887(Global_35, (*uParam0)[0], &(uParam0->f_125), 0f, 0f, 0f, 0, 0, 1, 1069547520 /* Float: 1.5f */, -1082130432 /* Float: -1f */, 1073069561, 1056964608 /* Float: 0.5f */, 1092616192 /* Float: 10f */, -1, 1, 0, 0, 0, 1);
			func_653((*uParam0)[0], Global_35, &(uParam0->f_125), 0.5f, 0, 0, -1f, -1f, 1, 1536, 0f, 0f, 1.5f, 2f, 0.3f, 0.3f, 1, 0, -1, 1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1);
			__LIB_1__::func_731(&(uParam0->f_163));
			TASK::TASK_FOLLOW_AND_CONVERSE_WITH_PED((*uParam0)[0], Global_35, 0, 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 8, 0, 0, 1069547520 /* Float: 1.5f */, 1073741824 /* Float: 2f */);
			uParam0->f_68 = 1;
			break;
		case 1:
			if (func_320(6, uParam0, "pl_conversation_All", 1))
			{
				func_352(6, uParam0);
				PED::SET_PED_RESET_FLAG(Global_35, 229, true);
				PED::SET_PED_RESET_FLAG((*uParam0)[0], 229, true);
				uParam0->f_68 = 2;
			}
			break;
		case 2:
			if (func_324(6, uParam0))
			{
				uParam0->f_68 = 3;
			}
			break;
		case 3:
			if (func_757(6, uParam0))
			{
				uParam0->f_68 = 4;
			}
			else if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[0]))
			{
				__LIB_2__::func_966(Global_35, (*uParam0)[0], 1, 1, 1, 0, 1, 1, 1, 1, 1);
				__LIB_2__::func_966((*uParam0)[0], Global_35, 1, 1, 1, 0, 1, 1, 1, 1, 1);
				__LIB_9__::func_397(&(uParam0->f_163), (*uParam0)[0]);
			}
			break;
		case 4:
			__LIB_1__::func_726(Global_35, 1);
			if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[0]))
			{
				__LIB_1__::func_727((*uParam0)[0], 1);
			}
			__LIB_5__::func_438(&(uParam0->f_163));
			uParam0->f_68 = -1;
			break;
	}
}

void func_363(var uParam0, int iParam1)
{
	if (uParam0->f_214 != iParam1)
	{
		uParam0->f_214 = iParam1;
		__LIB_1__::func_681(&(uParam0->f_110), 8);
	}
}

void func_364(var uParam0)
{
	switch (uParam0->f_214)
	{
		case 0:
			break;
		case 1:
			if (!__LIB_0__::func_27(uParam0->f_110, 8))
			{
				TASK::CLEAR_PED_TASKS((*uParam0)[1], true, false);
				__LIB_1__::func_683(&(uParam0->f_110), 8);
			}
			if (func_215(1, uParam0) && !__LIB_0__::func_866(12, 0))
			{
				__LIB_1__::func_551(12, 0);
			}
			func_363(uParam0, 2);
			break;
		case 2:
			if (func_215(1, uParam0) && !__LIB_0__::func_866(12, 0))
			{
				__LIB_1__::func_551(12, 0);
			}
			if ((!__LIB_0__::func_27(uParam0->f_110, 64) || !__LIB_0__::func_27(uParam0->f_110, 128)) && func_781(uParam0, &(uParam0->f_64[0]), &(uParam0->f_64[1]), &(uParam0->f_216), 0.3f))
			{
				if (uParam0->f_64[0] != uParam0->f_64[1])
				{
					__LIB_1__::func_148(&(uParam0->f_219));
				}
				else if ((__LIB_0__::func_75(&(uParam0->f_219)) && __LIB_0__::func_265(&(uParam0->f_219)) > 2f) && !func_782(uParam0, &(uParam0->f_64[1])))
				{
					func_783(&(uParam0->f_236), uParam0->f_64[1]);
					func_363(uParam0, 3);
				}
			}
			break;
		case 3:
			if (!__LIB_0__::func_27(uParam0->f_110, 8))
			{
				TASK::CLEAR_PED_TASKS((*uParam0)[1], true, false);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD((*uParam0)[1], uParam0->f_236, 1.5f, 20000, 0.25f, 0, 40000f);
				__LIB_1__::func_683(&(uParam0->f_110), 8);
			}
			if (func_781(uParam0, &(uParam0->f_64[0]), &(uParam0->f_64[1]), &(uParam0->f_216), 0.3f))
			{
				if (uParam0->f_64[0] != uParam0->f_64[1])
				{
					func_784(uParam0);
					func_363(uParam0, 2);
				}
			}
			if (ENTITY::IS_ENTITY_AT_COORD((*uParam0)[1], uParam0->f_236, 2f, 2f, 2f, false, true, 0))
			{
				if (uParam0->f_236.f_3 == joaat("WORLD_ANIMAL_DOG_SITTING"))
				{
					func_363(uParam0, 4);
				}
				else
				{
					func_363(uParam0, 5);
				}
			}
			else if (ENTITY::IS_ENTITY_AT_COORD((*uParam0)[1], uParam0->f_236, 7f, 7f, 7f, false, true, 0))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO((*uParam0)[1], 1f);
			}
			break;
		case 4:
			if (!__LIB_0__::func_27(uParam0->f_110, 8))
			{
				TASK::CLEAR_PED_TASKS((*uParam0)[1], true, false);
				TASK::CLEAR_SEQUENCE_TASK(&(uParam0->f_215));
				PED::SET_PED_MAX_MOVE_BLEND_RATIO((*uParam0)[1], 3f);
				TASK::OPEN_SEQUENCE_TASK(&(uParam0->f_215));
				TASK::TASK_LOOK_AT_ENTITY(0, Global_35, -1, 0, 51, 0);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 2000, -1f, -1f, -1f);
				__LIB_1__::func_473(0, uParam0->f_236.f_3, uParam0->f_236.f_4, 1, 0, -1082130432 /* Float: -1f */);
				TASK::CLOSE_SEQUENCE_TASK(uParam0->f_215);
				TASK::TASK_PERFORM_SEQUENCE((*uParam0)[1], uParam0->f_215);
				__LIB_1__::func_148(&(uParam0->f_216));
				__LIB_1__::func_683(&(uParam0->f_110), 8);
			}
			else if (TASK::_0x0C3CB2E600C8977D((*uParam0)[1], 0) || (func_781(uParam0, &(uParam0->f_64[0]), &(uParam0->f_64[1]), &(uParam0->f_216), 1f) && uParam0->f_64[0] != uParam0->f_64[1]))
			{
				func_784(uParam0);
				__LIB_1__::func_683(&(uParam0->f_110), 64);
				func_363(uParam0, 2);
			}
			break;
		case 5:
			if (!__LIB_0__::func_27(uParam0->f_110, 8))
			{
				__LIB_1__::func_473((*uParam0)[1], uParam0->f_236.f_3, uParam0->f_236.f_4, 1, 0, -1082130432 /* Float: -1f */);
				__LIB_1__::func_683(&(uParam0->f_110), 8);
			}
			else if (TASK::_0x0C3CB2E600C8977D((*uParam0)[1], 0))
			{
				func_784(uParam0);
				__LIB_1__::func_683(&(uParam0->f_110), 128);
				func_363(uParam0, 2);
			}
			break;
		case 6:
			if (__LIB_0__::func_866(14, 0))
			{
				__LIB_1__::func_640(14);
			}
			func_363(uParam0, 7);
			break;
		case 7:
			break;
		case 8:
			break;
	}
}

bool func_365(var uParam0)
{
	CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
	__LIB_14__::func_216();
	CAM::_0xE296208C273BD7F0(0, -1, 0, 17, 1, 0);
	switch (uParam0->f_203)
	{
		case 0:
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
			__LIB_0__::func_142(Global_35);
			__LIB_1__::func_148(&(uParam0->f_72));
			if (func_214(1, uParam0))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING((*uParam0)[1], -1614.596f, -1419.654f, 80.9532f, 226.4574f, false, false, false);
				ENTITY::FREEZE_ENTITY_POSITION((*uParam0)[1], false);
				if (func_215(1, uParam0))
				{
					__LIB_1__::func_473((*uParam0)[1], joaat("WORLD_ANIMAL_DOG_ROLL_GROUND"), -1, 0, 0, -1082130432 /* Float: -1f */);
				}
			}
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
			if (STREAMING::_0xCF45DF50C7775F2A())
			{
				STREAMING::_0x5A8B01199C3E79C3();
			}
			if (func_664(8, uParam0))
			{
				if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[5]) && __LIB_0__::func_266((*uParam0)[5], -1582.95f, -1421.28f, 80.4f, 50f, 1, 1))
				{
					uParam0->f_203 = 1;
				}
				else
				{
					return false;
				}
			}
			break;
		case 1:
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			CAM::DO_SCREEN_FADE_IN(1000);
			uParam0->f_203 = 2;
			break;
		case 2:
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			__LIB_0__::func_904(14, 0);
			if (MAP::_DOES_ENTITY_HAVE_BLIP((*uParam0)[0]))
			{
				__LIB_3__::func_608((*uParam0)[0]);
			}
			__LIB_0__::func_325(&(uParam0->f_40[0]));
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
			if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(uParam0->f_54[8]) > 0.9f)
			{
				if (func_215(1, uParam0))
				{
					PED::SET_PED_KEEP_TASK((*uParam0)[1], true);
					TASK::TASK_WANDER_IN_AREA((*uParam0)[1], -1674.728f, -1346.773f, 83.1848f, 10f, 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */, 0);
				}
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				__LIB_1__::func_148(&(uParam0->f_72));
				uParam0->f_203 = 3;
			}
			break;
		case 3:
			uParam0->f_203 = 4;
			break;
		case 4:
			uParam0->f_203 = 5;
			break;
		case 5:
			if (STREAMING::_0xCF45DF50C7775F2A())
			{
				STREAMING::_0x5A8B01199C3E79C3();
			}
			__LIB_0__::func_893(4);
			return true;
	}
	return false;
}

void func_403(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
			__LIB_1__::func_755();
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
						func_828(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_828(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_828(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_828(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_828(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_828(joaat("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_828(joaat("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_828(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_828(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_828(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_828(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_828(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_828(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_828(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_828(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_828(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_828(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_828(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_828(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_828(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_828(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_828(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_828(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_828(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_828(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_830();
						func_831(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
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
						func_828(joaat("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
							func_403(Global_1347702[21 /*49*/].f_15, 0, 0, 0, 0);
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
						func_838(Global_35, joaat("CLOTHING_ITEM_BADGE_PZERO_000"), 0, -358215195, 1, 1);
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
							func_403(Global_1347702[82 /*49*/].f_15, 0, 0, 0, 0);
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
							func_403(Global_1347702[83 /*49*/].f_15, 0, 0, 0, 0);
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
						func_828(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_828(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
		func_865();
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
							func_828(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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

Vector3 func_407(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10)
{
	vector3 vVar0;
	vVar0 = { func_872(vParam0, iParam3, iParam4, iParam5, iParam6, 1, iParam7, bParam8, bParam9, bParam10, -1, 1103626240 /* Float: 25f */) };
	if (__LIB_0__::func_86(vVar0))
	{
		vVar0 = { func_872(vParam0, iParam3, iParam4, 0, 1, 1, iParam7, bParam8, 0, 0, -1, 1103626240 /* Float: 25f */) };
	}
	return vVar0;
}

void func_431(var uParam0)
{
	if (!__LIB_0__::func_1(uParam0->f_172, 8))
	{
		return;
	}
	func_348(&Local_78);
	HUD::_DISPLAY_HUD_COMPONENT(-1618603322);
	INVENTORY::_0x6A564540FAC12211(__LIB_0__::func_162(0), joaat("CONSUMABLE_RUM"));
	INVENTORY::_0x6A564540FAC12211(__LIB_0__::func_162(0), joaat("CONSUMABLE_RUM_USED"));
	INVENTORY::_0x6A564540FAC12211(__LIB_0__::func_162(0), joaat("CONSUMABLE_GIN"));
	INVENTORY::_0x6A564540FAC12211(__LIB_0__::func_162(0), joaat("CONSUMABLE_GIN_USED"));
	INVENTORY::_0x6A564540FAC12211(__LIB_0__::func_162(0), joaat("CONSUMABLE_WHISKEY"));
	INVENTORY::_0x6A564540FAC12211(__LIB_0__::func_162(0), joaat("CONSUMABLE_WHISKEY_USED"));
	INVENTORY::_0x6A564540FAC12211(__LIB_0__::func_162(0), joaat("CONSUMABLE_BRANDY"));
	INVENTORY::_0x6A564540FAC12211(__LIB_0__::func_162(0), joaat("CONSUMABLE_BRANDY_USED"));
	INVENTORY::_0x6A564540FAC12211(__LIB_0__::func_162(0), joaat("CONSUMABLE_AGED_PIRATE_RUM"));
	INVENTORY::_0x6A564540FAC12211(__LIB_0__::func_162(0), -1679900928);
	INVENTORY::_0x6A564540FAC12211(__LIB_0__::func_162(0), -520953319);
	INVENTORY::_0x6A564540FAC12211(__LIB_0__::func_162(0), joaat("CONSUMABLE_SALOON_BEER"));
	INVENTORY::_0x6A564540FAC12211(__LIB_0__::func_162(0), joaat("CONSUMABLE_SALOON_WHISKEY"));
	AUDIO::STOP_PED_SPEAKING(Local_78[1], false);
	__LIB_0__::func_893(4);
	PED::_0x3A50753042B6891B(Local_78[0], "p_bucket03x_PH_L_HAND");
	if (STREAMING::_0xCF45DF50C7775F2A())
	{
		STREAMING::_0x5A8B01199C3E79C3();
	}
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_78.f_242))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(Local_78.f_242);
	}
	__LIB_0__::func_142(Global_35);
	__LIB_11__::func_205(1);
	PED::SET_PED_CONFIG_FLAG(Global_35, 446, false);
	__LIB_0__::func_82(1, 0, 0);
	__LIB_13__::func_905(0, 1, 0, 0);
	__LIB_14__::func_190(1);
	func_763(1);
	__LIB_1__::func_726(Global_35, 1);
	if (ENTITY::DOES_ENTITY_EXIST(Local_78[0]))
	{
		__LIB_1__::func_727(Local_78[0], 1);
	}
	__LIB_5__::func_438(&(Local_78.f_163));
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_SPRINT"), true);
	func_903();
}

void func_432(var uParam0)
{
	func_904(uParam0, 0);
	func_905(uParam0, 0);
	func_906(uParam0);
	__LIB_5__::func_848(uParam0->f_27[0]);
	func_908(uParam0);
	func_909(uParam0);
	func_910(uParam0);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	TASK::CLEAR_PED_TASKS_IMMEDIATELY((*uParam0)[0], false, true);
	__LIB_3__::func_618(-1641.81f, -1360.6f, 83.4f, 30f, 0, 0, 0, 0, 0);
}

bool func_473(int iParam0, int iParam1, int iParam2, var uParam3, float fParam4, int iParam5, int iParam6)
{
	*iParam1 = -1;
	*iParam2 = 0;
	*uParam3 = { 0f, 0f, 0f };
	*fParam4 = 0f;
	*iParam5 = joaat("REL_NO_RELATIONSHIP");
	*iParam6 = 0;
	switch (iParam0)
	{
		case 0:
			*iParam1 = 14;
			*uParam3 = { -1629.71f, -1338.377f, 82.0174f };
			*fParam4 = 121.7305f;
			*iParam5 = joaat("REL_GANG_DUTCHS");
			*iParam6 = 3;
			break;
		case 1:
			*iParam1 = 12;
			*uParam3 = { -1667.214f, -1333.016f, 82.8524f };
			*fParam4 = 308.347f;
			*iParam5 = joaat("REL_GANG_DUTCHS");
			*iParam6 = 2;
			break;
		case 2:
			*iParam2 = joaat("A_C_FISHPERCH_01_SM");
			*uParam3 = { -1616.83f, -1088.17f, 65.3f };
			*fParam4 = -146.3819f;
			break;
		case 3:
			*iParam2 = joaat("A_C_SNAKE_01");
			*uParam3 = { 1f, 1f, 1f };
			*fParam4 = 0f;
			*iParam5 = joaat("REL_WILD_ANIMAL_PREDATOR");
			break;
		case 4:
			*iParam1 = 13;
			*uParam3 = { -1637.182f, -1363.268f, 83.4566f };
			*fParam4 = 278.4365f;
			break;
	}
	return ((*iParam1 != -1 || *iParam2 != 0) && !__LIB_0__::func_86(*uParam3));
}

bool func_474(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4)
{
	*iParam1 = 0;
	*uParam2 = { 0f, 0f, 0f };
	*bParam3 = 0;
	*bParam4 = 0;
	switch (iParam0)
	{
		case 0:
			*iParam1 = joaat("P_BUCKET03X");
			*uParam2 = { -1641.061f, -1350.098f, 82.962f };
			break;
		case 1:
			*iParam1 = joaat("P_FISHINGPOLE01X");
			*uParam2 = { -1640.81f, -1350.13f, 82.96f };
			break;
		case 2:
			*iParam1 = joaat("P_FISHINGPOLE02X");
			*uParam2 = { -1640.73f, -1349.96f, 82.9f };
			break;
		case 3:
			*iParam1 = joaat("P_CS_BOOKHARDCV10X");
			*uParam2 = { -1630.71f, -1338.377f, 82.0174f };
			break;
		case 4:
			*iParam1 = joaat("P_MUGCOFFEE01X");
			*uParam2 = { -1638.182f, -1363.268f, 83.4566f };
			break;
		case 5:
			*iParam1 = joaat("P_DOOR11X_BEECHER");
			*uParam2 = { -1637.72f, -1352.65f, 83.47f };
			*bParam3 = 1;
			break;
		case 6:
			*iParam1 = joaat("P_TABLECOFFEE04X");
			*uParam2 = { -1638.823f, -1361.82f, 83.4154f };
			*bParam4 = 1;
			break;
		case 7:
			*iParam1 = joaat("P_CHAIRCOMFY07X");
			*uParam2 = { -1638.823f, -1361.82f, 83.4154f };
			*bParam4 = 1;
			break;
		case 8:
			*iParam1 = joaat("P_CS_RUFUSBLANKET01X");
			*uParam2 = { -1638.823f, -1361.82f, 83.4154f };
			*bParam4 = 1;
			break;
	}
	return (*iParam1 != 0 && !__LIB_0__::func_86(*uParam2));
}

int func_493(int iParam0, int iParam1)
{
	var uVar0;
	return func_960(&uVar0, iParam0, iParam1);
}

bool func_499(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return (iVar0 > -1 && iVar0 < 6);
}

bool func_562(var uParam0)
{
	if ((__LIB_12__::func_645(uParam0) == 1 || __LIB_12__::func_645(uParam0) == 2) || __LIB_12__::func_645(uParam0) == 3)
	{
		return true;
	}
	return false;
}

bool func_591(int iParam0, var uParam1)
{
	vector3 vVar0;
	var uVar3;
	var uVar4;
	var uVar5;
	if (!__LIB_13__::func_902(iParam0))
	{
	}
	if (func_1022(iParam0, uParam1))
	{
		return true;
	}
	if (func_1023(iParam0, &vVar0, &uVar3, &uVar4, &uVar5))
	{
		func_1024(&(uParam1->f_46[iParam0]), vVar0, uVar3, uVar4, uVar5, 0);
		if (uParam1->f_46[iParam0] != -1)
		{
			return true;
		}
	}
	return false;
}

bool func_592(int iParam0, var uParam1)
{
	int iVar0;
	vector3 vVar1;
	bool bVar4;
	bool bVar5;
	if (!func_663(iParam0))
	{
		return false;
	}
	if (func_708(iParam0, uParam1))
	{
		if (iParam0 != 5)
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam1->f_7[iParam0], true, true);
		}
		return true;
	}
	if (func_474(iParam0, &iVar0, &vVar1, &bVar4, &bVar5))
	{
		if (bVar4)
		{
			if (uParam1->f_17[iParam0] == 0)
			{
				uParam1->f_17[iParam0] = ENTITY::_0x6F3068258A499E52(iVar0, vVar1, 15);
			}
			else if (ENTITY::_0x1FF441D7954F8709(uParam1->f_17[iParam0]))
			{
				uParam1->f_7[iParam0] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(uParam1->f_17[iParam0]));
			}
		}
		else if (bVar5)
		{
			uParam1->f_7[iParam0] = OBJECT::CREATE_OBJECT_NO_OFFSET(iVar0, vVar1, true, true, false, true);
		}
		else
		{
			uParam1->f_7[iParam0] = OBJECT::CREATE_OBJECT(iVar0, vVar1, true, true, false, false, true);
		}
		if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_7[iParam0]))
		{
			if (iParam0 != 5)
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam1->f_7[iParam0], true, true);
			}
			return true;
		}
	}
	return false;
}

char[] func_593(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "pbl_IdleAndCatch";
		default:
			break;
	}
	return "";
}

void func_594()
{
	iLocal_76 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), -1625.881f, -1338.429f, 83.16171f, 0f, 0f, 0f, 1.2f, 1.2f, 1.2f);
	iLocal_77 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), -1627.372f, -1337.161f, 82.81033f, 0f, 0f, 0f, 0.8f, 0.8f, 1.8f);
	VOLUME::_0x5B23DFF8E0948BB2(iLocal_76, 1);
	VOLUME::_0x5B23DFF8E0948BB2(iLocal_77, 1);
}

int func_611(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char cVar5[128];
	bool bVar21;
	bool bVar22;
	int iVar23;
	int iVar24;
	float fVar25;
	if (!bParam12 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	switch (iParam1)
	{
		case joaat("GROUP_SNIPER"):
		case joaat("GROUP_REVOLVER"):
		case joaat("GROUP_REPEATER"):
		case joaat("GROUP_PISTOL"):
		case joaat("GROUP_SHOTGUN"):
		case joaat("GROUP_RIFLE"):
			iVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, iParam7, iParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(iVar0))
			{
				iVar0 = joaat("WEAPON_UNARMED");
			}
			break;
		default:
			if (!WEAPON::IS_WEAPON_VALID(iParam1))
			{
				return iParam1;
			}
			iVar0 = iParam1;
			if ((WEAPON::_0x705BE297EEBDB95D(iVar0) || WEAPON::_IS_WEAPON_MELEE(iVar0)) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == joaat("REL_GANG_DUTCHS"))
			{
				StringCopy(&cVar5, WEAPON::_GET_WEAPON_NAME(iVar0), 128);
				iVar2 = WEAPON::_0xD42514C182121C23(ENTITY::GET_ENTITY_MODEL(iParam0));
				if (!Global_43891 && MISC::_DOES_STRING_EXIST_IN_STRING(&cVar5, "_DUALWIELD"))
				{
					StringCopy(&cVar5, HUD::_0x806862E5D266CF38(&cVar5, 0, (HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar5) - HUD::GET_LENGTH_OF_LITERAL_STRING("_DUALWIELD"))), 128);
					iVar3 = MISC::GET_HASH_KEY(&cVar5);
					if (__LIB_0__::func_154(iVar3) && WEAPON::_0xF252A85B8F3F8C58(iVar2, iVar3))
					{
						bVar21 = true;
					}
				}
				if (!bVar21)
				{
					iVar1 = WEAPON::GET_WEAPONTYPE_GROUP(iVar0);
					if (iVar1 != 0 && iVar2 != 0)
					{
						iVar4 = WEAPON::_0x9EEFD670F10656D7(iVar2, iVar1);
						if (!Global_43891)
						{
							if (__LIB_0__::func_154(iVar4) && iVar4 != iVar0)
							{
								iVar0 = iVar4;
							}
						}
						else if (iVar4 == iVar0)
						{
						}
					}
				}
			}
			break;
	}
	if (__LIB_0__::func_2() == -1 && !__LIB_0__::func_214(iVar0))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, iVar0, 0, false) && iParam0 != Global_35)
		{
			bVar22 = true;
		}
		else if (((iVar4 == iVar0 && !Global_43891) && iParam0 != Global_35) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == joaat("REL_GANG_DUTCHS"))
		{
			bVar22 = true;
		}
		else
		{
			iVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, iParam7, iParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(iVar0))
			{
				iVar0 = joaat("WEAPON_UNARMED");
			}
		}
	}
	if (iVar0 == joaat("WEAPON_UNARMED") && iParam1 == joaat("WEAPON_UNARMED"))
	{
		return iVar0;
	}
	else if (iVar0 == joaat("WEAPON_UNARMED"))
	{
		switch (iParam1)
		{
			case joaat("GROUP_REVOLVER"):
			case joaat("GROUP_PISTOL"):
				iVar0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
				break;
			case joaat("GROUP_SNIPER"):
			case joaat("GROUP_REPEATER"):
			case joaat("GROUP_SHOTGUN"):
			case joaat("GROUP_RIFLE"):
				if (__LIB_0__::func_214(joaat("WEAPON_REPEATER_CARBINE")))
				{
					iVar0 = joaat("WEAPON_REPEATER_CARBINE");
				}
				else
				{
					iVar0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
				}
				break;
			default:
				iVar0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
				break;
		}
	}
	else if (iVar0 == joaat("WEAPON_MELEE_LANTERN") && iParam0 == Global_35)
	{
		iVar0 = joaat("WEAPON_MELEE_DAVY_LANTERN");
	}
	if (iParam9 < 0)
	{
		if (iParam0 != Global_35 && __LIB_0__::func_154(iVar0))
		{
			WEAPON::GET_MAX_AMMO(iParam0, &iParam9, iVar0);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else if ((!WEAPON::_IS_WEAPON_MELEE(iVar0) && iVar0 != joaat("WEAPON_UNARMED")) && !WEAPON::_IS_WEAPON_LANTERN(iVar0))
		{
			iVar23 = WEAPON::GET_PED_AMMO_BY_TYPE(iParam0, WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(iParam0, iVar0));
			iVar24 = WEAPON::_GET_WEAPON_CLIP_SIZE(iVar0) * 3;
			iParam9 = (iVar24 - iVar23);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else
		{
			iParam9 = 0;
		}
	}
	if (bParam6 && bParam2)
	{
		bParam5 = false;
	}
	if (iParam0 == Global_35)
	{
		func_1043(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		__LIB_0__::func_215(iParam0, &iVar0, &fVar25);
		iVar0 = WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (__LIB_0__::func_216(iVar0))
		{
			WEAPON::SET_PED_INFINITE_AMMO(iParam0, bParam3, iVar0);
		}
	}
	else if (bParam10)
	{
		PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), iVar0, iParam4);
	}
	return iVar0;
}

void func_620(var uParam0)
{
	int iVar0;
	int iVar1;
	if (func_1049(1, uParam0))
	{
		iVar0 = 0;
		while (iVar0 < 29)
		{
			if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar1, false, iVar0, true))
			{
				if (__LIB_0__::func_154(iVar1))
				{
				}
			}
			iVar0++;
		}
		func_348(&Local_78);
		func_1050(&Local_78);
		__LIB_1__::func_951(&(Local_78.f_7[2]));
		CAM::_0xE296208C273BD7F0(0, -1, 0, 17, 1, 0);
		func_349(&Local_78);
	}
	if (func_1049(2, uParam0))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(Local_78.f_54[7]);
	}
	if (func_1049(3, uParam0))
	{
		__LIB_3__::func_319(Local_78.f_54[7]);
		if (!__LIB_4__::func_511())
		{
			__LIB_0__::func_88(uParam0, 524288);
			__LIB_0__::func_88(uParam0, 16384);
		}
	}
}

void func_622(var uParam0)
{
	if (func_1049(0, uParam0))
	{
		__LIB_12__::func_901(uParam0, -1621.64f, -1390.91f, 82.78f, 7.63f, 1);
		func_1054(uParam0);
		PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "CarryFishingpole", true, -1);
		func_346(&Local_78);
		func_347(&Local_78);
		if (__LIB_13__::func_218(uParam0, Global_35, 0, 0, 1, 1))
		{
			func_323(6, "pl_conversation_All", &Local_78);
			func_359(&Local_78);
			__LIB_0__::func_569(joaat("MOTIONSTATE_WALK"), 3000, 0, 0, 1, 0, 0, 0);
			PED::SET_PED_RESET_FLAG(Global_35, 229, true);
			PED::SET_PED_RESET_FLAG(Local_78[0], 229, true);
		}
		else
		{
			func_322(6, "pl_conversation_All", &Local_78);
		}
	}
	else if (func_1049(1, uParam0))
	{
		__LIB_5__::func_438(&(Local_78.f_163));
		__LIB_18__::func_713();
		__LIB_12__::func_617(1);
		__LIB_1__::func_658(1);
		if (__LIB_0__::func_153(Global_35, 0, 1, 0) != joaat("WEAPON_FISHINGROD"))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_FISHINGROD"), true, 0, false, false);
		}
		__LIB_12__::func_901(uParam0, -1621.64f, -1390.91f, 82.78f, 7.63f, 1);
		func_1054(uParam0);
		if (func_215(1, &Local_78))
		{
			if (__LIB_0__::func_866(12, 0))
			{
				__LIB_1__::func_640(12);
				TASK::CLEAR_PED_TASKS(Local_78[1], true, false);
			}
			ENTITY::SET_ENTITY_COORDS(Local_78[1], 1f, 1f, 1f, true, false, true, true);
			ENTITY::FREEZE_ENTITY_POSITION(Local_78[1], true);
		}
		if (__LIB_13__::func_218(uParam0, Global_35, 0, 0, 1, 1))
		{
			if (!__LIB_1__::func_253())
			{
				func_656(1);
			}
			if (!__LIB_1__::func_650())
			{
				__LIB_12__::func_625();
			}
			func_352(0, &Local_78);
			PED::_0x2208438012482A1A(Global_35, false, false);
			__LIB_12__::func_618();
			__LIB_12__::func_617(0);
			__LIB_1__::func_658(0);
		}
	}
	else if (func_1049(2, uParam0))
	{
		__LIB_12__::func_901(uParam0, -1621.64f, -1390.91f, 82.78f, 7.63f, 1);
		func_1054(uParam0);
		func_320(7, &Local_78, "pl_Jack_Reaction_to_Venom_Sucking", 1);
		if (!func_321(7, "pl_Jack_Reaction_to_Venom_Sucking", &Local_78))
		{
			func_322(7, "pl_Jack_Reaction_to_Venom_Sucking", &Local_78);
		}
		if (__LIB_13__::func_218(uParam0, Global_35, "", 0, 0, 1))
		{
			if (Local_78.f_179.f_9 == 2)
			{
				Local_78.f_179.f_9 = 3;
			}
			PED::_0x58F7DB5BD8FA2288(Global_35);
			if (func_214(3, &Local_78))
			{
				PED::DELETE_PED(&(Local_78[3]));
			}
			if (!func_320(8, &Local_78, "PBL_1", 1))
			{
			}
			if (!func_324(7, &Local_78) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_78.f_54[7], false))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_78.f_54[7], "JackMarston_Teen", Local_78[0], 0);
			}
			func_323(7, "pl_Jack_Reaction_to_Venom_Sucking", &Local_78);
		}
		func_661(&Local_78, &(Local_78.f_179));
	}
	else if (func_1049(3, uParam0))
	{
		__LIB_0__::func_88(uParam0, 524288);
		if (iLocal_321 == 0)
		{
			__LIB_12__::func_901(uParam0, -1621.64f, -1390.91f, 82.78f, 7.63f, 1);
			func_1054(uParam0);
			iLocal_321 = 1;
		}
		if (ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_348) > 11f)
		{
			__LIB_4__::func_239(Local_78[0]);
		}
		if (((STREAMING::_0xCF45DF50C7775F2A() && iLocal_323 == 0) && ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_348) > 20f) && iLocal_322 == 0)
		{
			STREAMING::_0x5A8B01199C3E79C3();
			iLocal_323 = 1;
		}
		if (!STREAMING::_0xCF45DF50C7775F2A() && iLocal_323 == 1)
		{
			STREAMING::_0x513F8AA5BF2F17CF(-1582.95f, -1421.28f, 80.4f, 100f, 4);
		}
		if (__LIB_13__::func_218(uParam0, Global_35, 0, 0, 1, 1) || (CAM::IS_SCREEN_FADED_OUT() && !__LIB_4__::func_511()))
		{
			func_320(8, &Local_78, "PBL_1", 1);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_78.f_54[8], "JOHN", Global_35, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_78.f_54[8], "HORSE", Local_78[5], 0);
			func_323(8, "PBL_1", &Local_78);
			ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
		}
	}
}

int func_624(var uParam0)
{
	if (func_1049(1, uParam0))
	{
		if (!__LIB_1__::func_253())
		{
			func_656(1);
		}
		if (!__LIB_1__::func_650())
		{
			__LIB_12__::func_625();
		}
		if (!__LIB_1__::func_647())
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_FISHINGROD"), true, 0, false, false);
		}
		__LIB_12__::func_618();
		__LIB_12__::func_617(0);
		__LIB_1__::func_658(0);
	}
	if (func_1049(2, uParam0))
	{
		func_320(7, &Local_78, "pl_Jack_Reaction_to_Venom_Sucking", 1);
		if (!func_321(7, "pl_Jack_Reaction_to_Venom_Sucking", &Local_78))
		{
			func_322(7, "pl_Jack_Reaction_to_Venom_Sucking", &Local_78);
		}
		if (!func_324(7, &Local_78) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_78.f_54[7], false))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_78.f_54[7], "JackMarston_Teen", Local_78[0], 0);
		}
		func_323(7, "pl_Jack_Reaction_to_Venom_Sucking", &Local_78);
	}
	if (func_1049(3, uParam0))
	{
		if (STREAMING::_0xCF45DF50C7775F2A() && iLocal_322 == 0)
		{
			STREAMING::_0x5A8B01199C3E79C3();
			iLocal_322 = 1;
			return 0;
		}
		if (!STREAMING::_0xCF45DF50C7775F2A() && iLocal_322 == 1)
		{
			STREAMING::_0x513F8AA5BF2F17CF(-1582.95f, -1421.28f, 80.4f, 100f, 4);
			return 0;
		}
		if (!STREAMING::_0x0909F71B5C070797())
		{
			return 0;
		}
		else
		{
			func_320(8, &Local_78, "PBL_1", 1);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_78.f_54[8], "JOHN", Global_35, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_78.f_54[8], "HORSE", Local_78[5], 0);
			func_323(8, "PBL_1", &Local_78);
		}
	}
	return 1;
}

char* func_627(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "RJCK2_RSC1";
		case 1:
			return "RJCK2_RSC2";
		case 2:
			return "RJCK2_RSC5";
		case 3:
			return "RJCK2_RSC3";
		default:
			break;
	}
	return "";
}

bool func_640(int iParam0, var uParam1)
{
	char* sVar0;
	sVar0 = func_772(iParam0);
	return (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0) && __LIB_12__::func_876(uParam1, sVar0, 0));
}

bool func_645(int iParam0, var uParam1)
{
	return (__LIB_13__::func_900(iParam0) && VOLUME::_DOES_VOLUME_EXIST(uParam1->f_27[iParam0]));
}

char* func_647(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MISSION_AREA";
		case 1:
			return "RESTRICTION_AREA_INTRO";
		case 2:
			return "RESTRICTION_AREA_FISHING";
		case 3:
			return "RESTRICTION_AREA_SNAKE_ATTACK";
		case 4:
			return "RESTRICTION_AREA_SNAKE_ATTACK";
		case 5:
			return "RESTRICTION_AREA_FINALE";
		case 6:
			return "FINALE";
		case 8:
			return "BEECHERS_ROAD_LEFT_SIDE";
		case 9:
			return "BEECHERS_ROAD";
		case 10:
			return "BEECHERS_ROAD_RIGHT_SIDE";
		case 11:
			return "CROSSROAD";
		default:
			break;
	}
	return "";
}

bool func_648(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5)
{
	*uParam2 = { 0f, 0f, 0f };
	*uParam3 = { 0f, 0f, 0f };
	*uParam4 = { 0f, 0f, 0f };
	switch (iParam0)
	{
		case 0:
			if (iParam5 == 0)
			{
				*uParam1 = joaat("VOLBOX");
				*uParam2 = { -1614.937f, -1236.707f, 83.86172f };
				*uParam3 = { 0f, 0f, -10.91861f };
				*uParam4 = { 85.33291f, 300.797f, 56.77631f };
			}
			else if (iParam5 == 1)
			{
				*uParam1 = joaat("VOLBOX");
				*uParam2 = { -1650.963f, -1206.163f, 86.60019f };
				*uParam3 = { 0f, 0f, 19.33957f };
				*uParam4 = { 110.5368f, 205.9766f, 47.63528f };
			}
			break;
		case 1:
			*uParam1 = joaat("VOLBOX");
			*uParam2 = { -1629.71f, -1338.377f, 82.0174f };
			*uParam3 = { 0f, 0f, 124.8729f };
			*uParam4 = { 8.516357f, 5.128632f, 2.655434f };
			break;
		case 2:
			*uParam1 = joaat("VOLBOX");
			*uParam2 = { -1629.71f, -1338.377f, 82.0174f };
			*uParam3 = { 0f, 0f, 124.8729f };
			*uParam4 = { 8.516357f, 5.128632f, 2.655434f };
			break;
		case 3:
			*uParam1 = joaat("VOLBOX");
			*uParam2 = { -1663.67f, -1151.53f, 76.79f };
			*uParam3 = { 0f, 0f, 124.8729f };
			*uParam4 = { 8.516357f, 5.128632f, 2.655434f };
			break;
		case 4:
			*uParam1 = joaat("VOLBOX");
			*uParam2 = { -1663.67f, -1151.53f, 76.79f };
			*uParam3 = { 0f, 0f, 124.8729f };
			*uParam4 = { 8.516357f, 5.128632f, 2.655434f };
			break;
		case 5:
			*uParam1 = joaat("VOLBOX");
			*uParam2 = { -1641.685f, -1360.294f, 84.82198f };
			*uParam3 = { 0f, 0f, 150.1272f };
			*uParam4 = { 23.06105f, 29.41247f, 4.844604f };
			break;
		case 6:
			*uParam1 = joaat("VOLBOX");
			*uParam2 = { -1641.685f, -1360.294f, 84.82198f };
			*uParam3 = { 0f, 0f, 150.1271f };
			*uParam4 = { 23.06105f, 29.41247f, 4.844604f };
			break;
		case 7:
			*uParam1 = joaat("VOLBOX");
			*uParam2 = { -1605.869f, -1101.909f, 66.32779f };
			*uParam3 = { 0f, 0f, -13.85716f };
			*uParam4 = { 3.752683f, 5.992797f, 3.083048f };
			break;
		case 8:
			*uParam1 = joaat("VOLBOX");
			*uParam2 = { -1662.824f, -1272.518f, 86.21485f };
			*uParam3 = { 0f, 0f, 9.61804f };
			*uParam4 = { 46.4284f, 31.30677f, 22.78977f };
			break;
		case 9:
			*uParam1 = joaat("VOLBOX");
			*uParam2 = { -1615.074f, -1274.28f, 80.35987f };
			*uParam3 = { 0f, 0f, 9.61804f };
			*uParam4 = { 46.92082f, 41.81302f, 13.42371f };
			break;
		case 10:
			*uParam1 = joaat("VOLBOX");
			*uParam2 = { -1570.93f, -1253.826f, 78.77445f };
			*uParam3 = { 0f, 0f, 9.61804f };
			*uParam4 = { 46.92082f, 31.61283f, 13.42371f };
			break;
		case 11:
			*uParam1 = joaat("VOLBOX");
			*uParam2 = { -1623.348f, -1238.254f, 86.21485f };
			*uParam3 = { 0f, 0f, 21.23438f };
			*uParam4 = { 37.08615f, 41.75758f, 22.78977f };
			break;
	}
	return (!__LIB_0__::func_86(*uParam2) && !__LIB_0__::func_86(*uParam4));
}

void func_650(int iParam0, var uParam1)
{
	int iVar0;
	iVar0 = iParam0;
	if (iVar0 > -1 && iVar0 < 7)
	{
		iVar0 = __LIB_5__::func_723((iVar0 - 1), 0);
		iParam0 = iVar0;
		func_1085(iParam0, uParam1);
		func_741(uParam1, 1);
	}
}

void func_653(int iParam0, int iParam1, var uParam2, float fParam3, int iParam4, int iParam5, float fParam6, float fParam7, bool bParam8, int iParam9, float fParam10, float fParam11, float fParam12, float fParam13, float fParam14, float fParam15, int iParam16, int iParam17, int iParam18, bool bParam19, int iParam20, int iParam21, bool bParam22)
{
	struct<7> Var0;
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam2->f_1))
	{
		TASK::TASK_SCRIPTED_ANIMATION(iParam0, uParam2);
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		PLAYER::_0x2BEED53B912537D0(PLAYER::PLAYER_ID(), iParam1, -1f);
		Var0.f_1 = 1050253722;
		Var0.f_2 = 1067030938;
		Var0.f_5 = -1082130432;
		Var0.f_6 = -1082130432;
		Var0.f_3 = iParam16;
		Var0.f_1 = fParam14;
		Var0.f_2 = fParam15;
		Var0.f_4 = iParam17;
		Var0.f_5 = iParam20;
		Var0.f_6 = iParam21;
		if (bParam8)
		{
			Var0 = 0;
		}
		else
		{
			Var0 = 1;
		}
		PLAYER::_0xCA59808E51FD67C4(PLAYER::PLAYER_ID(), &Var0);
	}
	else
	{
		TASK::TASK_FOLLOW_AND_CONVERSE_WITH_PED(iParam0, iParam1, iParam4, iParam5, fParam6, fParam7, iParam9, fParam10, fParam11, fParam12, fParam13);
	}
	if (bParam19)
	{
		PED::_SET_PED_CROUCH_MOVEMENT(iParam0, false, 0, false);
	}
	if (bParam22)
	{
		__LIB_1__::func_735(iParam0, iParam1, iParam18);
	}
}

void func_656(bool bParam0)
{
	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, joaat("WEAPON_FISHINGROD"), 0, false))
	{
		func_828(joaat("WEAPON_FISHINGROD"), 1, bParam0, 0, 0, 752097756, 0, 0, 0, 0);
	}
}

bool func_659(int iParam0)
{
	char* sVar0;
	sVar0 = func_1090(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		STREAMING::REQUEST_ANIM_DICT(sVar0);
		return STREAMING::HAS_ANIM_DICT_LOADED(sVar0);
	}
	return false;
}

void func_660(var uParam0)
{
	if (func_708(0, uParam0))
	{
		ENTITY::SET_ENTITY_COORDS(uParam0->f_7[0], func_190(7), true, false, true, true);
		ENTITY::SET_ENTITY_ROTATION(uParam0->f_7[0], 113.88f, 64.72f, -138.49f, 2, true);
	}
	if (func_708(1, uParam0))
	{
		ENTITY::SET_ENTITY_COORDS(uParam0->f_7[1], -1605.47f, -1110.42f, 67.47f, true, false, true, true);
	}
}

int func_661(var uParam0, var uParam1)
{
	float fVar0;
	struct<10> Var1;
	struct<10> Var35;
	HUD::_0xC9CAEAEEC1256E54(724769646);
	if (!__LIB_0__::func_75(&(uParam0->f_99)))
	{
		__LIB_1__::func_148(&(uParam0->f_99));
	}
	if (__LIB_0__::func_265(&(uParam0->f_99)) >= 20f)
	{
		__LIB_1__::func_683(&(uParam0->f_110), 256);
	}
	if (!func_215(1, uParam0) || __LIB_0__::func_264(&(uParam0->f_99)) > 90f)
	{
		__LIB_1__::func_683(&(uParam0->f_110), 256);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("SPITVENOM")))
	{
		GRAPHICS::USE_PARTICLE_FX_ASSET("scr_jack2");
		GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE("ent_anim_spit_venom", Global_35, 0f, 0f, 0f, 1950f, 0f, 280f, 9650, 0.9f, false, false, false);
	}
	switch (uParam1->f_9)
	{
		case 0:
			STREAMING::_REQUEST_MOVE_NETWORK_DEF(sLocal_72);
			STREAMING::REQUEST_ANIM_DICT(sLocal_73);
			STREAMING::REQUEST_CLIP_SET(sLocal_74);
			STREAMING::REQUEST_CLIP_SET(sLocal_75);
			PED::SET_PED_CAN_LEG_IK((*uParam0)[1], false);
			PED::SET_PED_LEG_IK_MODE((*uParam0)[1], 0);
			PED::SET_PED_CAN_LEG_IK(Global_35, false);
			PED::SET_PED_LEG_IK_MODE(Global_35, 0);
			if (!CAM::_0xDD0B7C5AE58F721D(&Local_56))
			{
				CAM::_0x6A4D224FC7643941(&Local_56);
			}
			uParam1->f_9 = 1;
			break;
		case 1:
			if (((STREAMING::_HAS_MOVE_NETWORK_DEF_LOADED(sLocal_72) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_73)) && STREAMING::HAS_CLIP_SET_LOADED(sLocal_74)) && STREAMING::HAS_CLIP_SET_LOADED(sLocal_75))
			{
				uParam1->f_9 = 2;
			}
			break;
		case 2:
			break;
		case 3:
			uParam0->f_204 = 5;
			func_222(5, 1, 0);
			if (CAM::_0xDD0B7C5AE58F721D(&Local_56) && !CAM::_0x927B810E43E99932(&Local_56))
			{
				CAM::_0xB8B207C34285E978(&Local_56);
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(60f, 1f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-30f, 1f);
			Var1.f_6 = -1082130432;
			Var1.f_9 = -1082130432;
			Var1.f_1 = joaat("DEFAULT");
			Var1 = joaat("CLIPSET@MINI_GAMES@STORY@JACK2@JOHN");
			Var35.f_6 = -1082130432;
			Var35.f_9 = -1082130432;
			Var35.f_1 = joaat("DEFAULT");
			Var35 = joaat("CLIPSET@MINI_GAMES@STORY@JACK2@DOG");
			TASK::TASK_MOVE_NETWORK_ADVANCED_BY_NAME_WITH_INIT_PARAMS(Global_35, sLocal_72, &Var1, -1662.89f, -1155.72f, 76.92f, 0f, 0f, 255.82f, 2, 0, 0, 0, 128, 0);
			TASK::TASK_MOVE_NETWORK_ADVANCED_BY_NAME_WITH_INIT_PARAMS((*uParam0)[1], sLocal_72, &Var35, -1662.89f, -1155.72f, 76.92f, 0f, 0f, 255.82f, 2, 0, 0, 0, 128, 0);
			PED::_0x2208438012482A1A(Global_35, true, false);
			PED::_0x2208438012482A1A((*uParam0)[1], true, false);
			__LIB_1__::func_148(&(uParam0->f_99));
			if (STREAMING::IS_SRL_LOADED())
			{
				STREAMING::END_SRL();
			}
			uParam1->f_9 = 4;
			break;
		case 4:
			TASK::TASK_LOOK_AT_ENTITY((*uParam0)[0], (*uParam0)[1], -1, 0, 51, 0);
			if (__LIB_0__::func_163(Global_35, 76834332))
			{
				if (MISC::ARE_STRINGS_EQUAL(TASK::GET_TASK_MOVE_NETWORK_STATE(Global_35), "Intro"))
				{
					if (TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(Global_35))
					{
						TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(Global_35, "Idle");
						TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION((*uParam0)[1], "Idle");
						*uParam1 = __LIB_1__::func_877(func_216(13), uParam1->f_1, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
						uParam1->f_9 = 5;
					}
				}
			}
			break;
		case 5:
			if (__LIB_1__::func_514(*uParam1, 1))
			{
				if (TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(Global_35))
				{
					__LIB_1__::func_148(&(uParam0->f_99));
					__LIB_1__::func_748(uParam1, 1, 1);
					TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(Global_35, "Suck");
					TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION((*uParam0)[1], "Suck");
					uParam1->f_9 = 6;
				}
			}
			break;
		case 6:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 281223346) && !__LIB_0__::func_139(uParam1->f_2.f_3))
			{
				uParam1->f_2.f_3 = __LIB_1__::func_877(func_216(14), uParam1->f_2.f_4, 5, 10000, 4000, 10, 1073741824 /* Float: 2f */, 0f, 1f, 0, 3, joaat("LONG_TIMED_EVENT"), 0);
				__LIB_1__::func_683(&(uParam0->f_111), 33554432);
			}
			fVar0 = __LIB_0__::func_486(uParam1->f_2.f_3, 1);
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(Global_35, "Energy", fVar0);
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT((*uParam0)[1], "Energy", fVar0);
			if (__LIB_0__::func_139(uParam1->f_2.f_3) && __LIB_0__::func_567(uParam1->f_2.f_3, 1))
			{
				__LIB_1__::func_148(&(uParam0->f_99));
				__LIB_1__::func_748(&(uParam1->f_2.f_3), 1, 1);
				__LIB_1__::func_683(&(uParam0->f_111), 67108864);
				uParam1->f_9 = 7;
				uParam1->f_2 = (uParam1->f_2 + uParam1->f_2.f_1);
			}
			else if (uParam1->f_2 >= 1f)
			{
				__LIB_1__::func_748(&(uParam1->f_2.f_3), 1, 1);
				__LIB_1__::func_683(&(uParam0->f_111), 67108864);
				uParam1->f_9 = 7;
			}
			break;
		case 7:
			if (!__LIB_0__::func_139(uParam1->f_7.f_1))
			{
				uParam1->f_7.f_1 = __LIB_1__::func_877(func_216(15), uParam1->f_7, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			}
			__LIB_1__::func_681(&(uParam0->f_111), 33554432);
			if (__LIB_1__::func_514(uParam1->f_7.f_1, 1))
			{
				__LIB_1__::func_148(&(uParam0->f_99));
				if (__LIB_0__::func_139(uParam1->f_7.f_1))
				{
					__LIB_1__::func_748(&(uParam1->f_7.f_1), 1, 1);
				}
				uParam1->f_16++;
				if (uParam1->f_16 >= 3 && TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(Global_35))
				{
					TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(Global_35, "SpitAndOutro");
					TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION((*uParam0)[1], "SpitAndOutro");
					CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
					uParam1->f_9 = 9;
				}
				else
				{
					TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(Global_35);
					TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(Global_35, "SpitVenom");
					TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION((*uParam0)[1], "SpitVenom");
					uParam1->f_9 = 8;
				}
			}
			break;
		case 8:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 2113456034) && TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(Global_35))
			{
				uParam1->f_2.f_3 = __LIB_1__::func_877(func_216(14), uParam1->f_2.f_4, 5, 10000, 4000, 10, 1073741824 /* Float: 2f */, 0f, 1f, 0, 3, joaat("LONG_TIMED_EVENT"), 0);
				uParam1->f_2 = 0f;
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(Global_35, "Suck");
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION((*uParam0)[1], "Suck");
				__LIB_1__::func_683(&(uParam0->f_111), 33554432);
				uParam1->f_9 = 6;
			}
			break;
		case 9:
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("GAMEFINISHED")) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 2113456034))
			{
				__LIB_0__::func_37(&(uParam0->f_99));
				func_1097(uParam1);
				return 1;
			}
			break;
	}
	return 0;
}

bool func_663(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return (iVar0 > -1 && iVar0 < 9);
}

bool func_664(int iParam0, var uParam1)
{
	return (func_663(iParam0) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam1->f_54[iParam0]));
}

char* func_665(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script@rcm@JCK2@IG@IG_0_CatchAFish@CaughtAFish";
		case 1:
			return "script@rcm@JCK2@IG@IG_1_LookForRufus@IG_1_LookForRufus";
		case 2:
			return "script@rcm@JCK2@IG@IG_2_FindRufus@FindRufus";
		case 3:
			return "script@rcm@JCK2@IG@IG_3_ConcernedForRufus@Base";
		case 4:
			return "script@rcm@JCK2@IG@IG_2_FindRufus@FindRufus";
		case 5:
			return "script@rcm@JCK2@IG@IG_3_ConcernedForRufus@Base";
		case 6:
			return "script@rcm@jck2@leadout@rsc1@leadout_wnt";
		case 7:
			return "script@rcm@jck2@ig@ig_3_concernedforrufus@concernedforrufus";
		case 8:
			return "script@timelapse@jck2_timelapse";
		default:
			break;
	}
	return "";
}

bool func_666(int iParam0, var uParam1)
{
	if (!func_664(iParam0, uParam1))
	{
		return false;
	}
	switch (iParam0)
	{
		case 0:
			if ((func_215(0, uParam1) && func_708(0, uParam1)) && func_708(1, uParam1))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam1->f_54[iParam0], "JOHN", Global_35, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam1->f_54[iParam0], "JACK", (*uParam1)[0], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam1->f_54[iParam0], "Perch ", (*uParam1)[2], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam1->f_54[iParam0], "p_bucket03x", uParam1->f_7[0], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam1->f_54[iParam0], "FishingPole", uParam1->f_7[1], 0);
				return true;
			}
			break;
		case 1:
			if (func_215(0, uParam1) && func_708(1, uParam1))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam1->f_54[iParam0], "JackMarston_Teen", (*uParam1)[0], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam1->f_54[iParam0], "p_fishingpole02x", uParam1->f_7[1], 0);
				return true;
			}
			break;
		case 2:
			if (!ENTITY::IS_ENTITY_DEAD(Global_35) && func_215(0, uParam1))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam1->f_54[iParam0], "john", Global_35, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam1->f_54[iParam0], "JackMarston_Teen", (*uParam1)[0], 0);
				return true;
			}
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			if (!ENTITY::IS_ENTITY_DEAD(Global_35) && func_215(0, uParam1))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam1->f_54[iParam0], "john", Global_35, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam1->f_54[iParam0], "JackMarston_Teen", (*uParam1)[0], 0);
				return true;
			}
			break;
		case 7:
			if (func_215(0, uParam1) && !ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam1->f_54[iParam0], "john", Global_35, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam1->f_54[iParam0], "JackMarston_Teen", (*uParam1)[0], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam1->f_54[iParam0], "Rufus", (*uParam1)[1], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam1->f_54[iParam0], "snake", (*uParam1)[3], 0);
				return true;
			}
			break;
		case 8:
			if (!ENTITY::DOES_ENTITY_EXIST((*uParam1)[5]))
			{
				func_1098(uParam1[5], -1582.95f, -1421.28f, 80.4f, 100f, 1, 1, 1, 1);
				return false;
			}
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam1->f_54[iParam0], "JOHN", Global_35, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam1->f_54[iParam0], "HORSE", (*uParam1)[5], 0);
			return true;
	}
	return false;
}

bool func_667(int iParam0, var uParam1)
{
	if (func_664(iParam0, uParam1))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(uParam1->f_54[iParam0], true) && !ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam1->f_54[iParam0], true, false))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(uParam1->f_54[iParam0]);
		}
		return ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam1->f_54[iParam0], true, false);
	}
	return false;
}

bool func_668(int iParam0, var uParam1)
{
	return (func_664(iParam0, uParam1) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam1->f_54[iParam0], true, false));
}

int func_669(int iParam0, bool bParam1, int iParam2, var uParam3, var uParam4, var uParam5, float fParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
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
				func_1102(Global_1360165[iParam0 /*1157*/], vVar0, fParam6, 2, 1073741824 /* Float: 2f */);
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
			func_1109(iParam0, Global_1360165[iParam0 /*1157*/]);
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

bool func_672(var uParam0)
{
	if (!__LIB_0__::func_27(uParam0->f_110, 1024))
	{
		if (func_1112(uParam0))
		{
			ANIMSCENE::START_ANIM_SCENE(uParam0->f_242);
			__LIB_1__::func_683(&(uParam0->f_110), 1024);
		}
		return false;
	}
	__LIB_12__::func_773(0, 1, 1, 1);
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_242))
	{
		return true;
	}
	else if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_242, false))
	{
		return true;
	}
	else if (ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(uParam0->f_242))
	{
		return true;
	}
	return false;
}

void func_695(var uParam0)
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
			func_1138(&(uParam0->f_416));
		}
		func_1139(&(uParam0->f_404), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_12__::func_706(uParam0, 0f, 0f, 0f);
		func_1054(uParam0);
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

void func_702(var uParam0)
{
	if (!__LIB_0__::func_84(uParam0, 536870912))
	{
		__LIB_0__::func_106(uParam0, 1);
		func_703(&(uParam0->f_405), uParam0->f_416);
		__LIB_1__::func_436();
		__LIB_0__::func_88(uParam0, 536870912);
	}
	if (__LIB_0__::func_84(uParam0, 524288))
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	__LIB_12__::func_854(uParam0);
	__LIB_1__::func_747(uParam0, 1);
	__LIB_12__::func_841(uParam0);
	__LIB_12__::func_707(uParam0);
	__LIB_0__::func_108(uParam0);
	__LIB_12__::func_758(uParam0, 4);
	__LIB_12__::func_846(uParam0);
	__LIB_0__::func_99(uParam0, 1);
	__LIB_12__::func_679(uParam0);
	__LIB_0__::func_37(&(uParam0->f_1));
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_348) && ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_348))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_348);
	}
	__LIB_4__::func_797(!__LIB_0__::func_1(uParam0->f_405, 128));
	if (!__LIB_0__::func_1(uParam0->f_405, 128))
	{
		__LIB_3__::func_120();
	}
}

void func_703(var uParam0, int iParam1)
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
		func_1154(Global_35, joaat("CLOTHING_ITEM_NECKWEAR_NONE"), 0, 1742327865, 0, 1, 0, 0, 1, 0);
		func_1155(joaat("KIT_BANDANA"), 0);
	}
	__LIB_1__::func_550(&(Global_1946804.f_1497), Global_35, 1, 49217, 1, 1, 1);
	if (Global_1359489.f_16 & 4194304 != 0)
	{
		Global_1359489.f_16 = (Global_1359489.f_16 - Global_1359489.f_16 & 4194304);
	}
	*uParam0 = 0;
}

bool func_708(int iParam0, var uParam1)
{
	return (func_663(iParam0) && ENTITY::DOES_ENTITY_EXIST(uParam1->f_7[iParam0]));
}

void func_741(var uParam0, bool bParam1)
{
	switch (uParam0->f_204)
	{
		case 0:
			__LIB_12__::func_772(96, func_216(0), 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			__LIB_1__::func_422(func_216(0), 7500, 0, 1, 0, 0, -1, -1, 0);
			if (!MAP::DOES_BLIP_EXIST(uParam0->f_40[0]))
			{
				uParam0->f_40[0] = MAP::_BLIP_ADD_FOR_COORD(408396114, -1606.602f, -1111.096f, 67.7107f);
			}
			__LIB_0__::func_37(&(uParam0->f_87));
			func_1085(1, uParam0);
			break;
		case 1:
			if (!__LIB_0__::func_75(&(uParam0->f_87)))
			{
				__LIB_1__::func_283(&(uParam0->f_87), 0);
			}
			else if (!TASK::IS_PED_STILL(Global_35))
			{
				__LIB_1__::func_148(&(uParam0->f_87));
			}
			else if ((__LIB_0__::func_75(&(uParam0->f_87)) && __LIB_0__::func_265(&(uParam0->f_87)) >= 12f) && uParam0->f_69 < 2)
			{
				func_222(uParam0->f_204, 1, 0);
			}
			if (func_226(4, uParam0) || bParam1)
			{
				__LIB_12__::func_772(96, func_216(1), 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_0__::func_325(&(uParam0->f_40[0]));
				__LIB_0__::func_904(12, 0);
				__LIB_0__::func_325(&(uParam0->f_40[2]));
				func_1085(2, uParam0);
			}
			break;
		case 2:
			__LIB_1__::func_283(&(uParam0->f_228), 0);
			if (__LIB_0__::func_265(&(uParam0->f_228)) <= 2f)
			{
				func_222(uParam0->f_204, 1, 0);
			}
			if (func_226(8, uParam0) || bParam1)
			{
				__LIB_12__::func_772(96, func_216(3), 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				uParam0->f_40[0] = MAP::_BLIP_ADD_FOR_RADIUS(408396114, -1581.226f, -1159.444f, 76.3589f, 20f);
				func_1085(3, uParam0);
			}
			else if (func_226(12, uParam0))
			{
				__LIB_12__::func_772(96, func_216(4), 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_0__::func_325(&(uParam0->f_40[1]));
				__LIB_3__::func_608((*uParam0)[0]);
				__LIB_0__::func_325(&(uParam0->f_40[0]));
				uParam0->f_40[0] = MAP::_BLIP_ADD_FOR_RADIUS(408396114, -1665.496f, -1155.801f, 76.5107f, 20f);
				__LIB_0__::func_37(&(uParam0->f_87));
				__LIB_0__::func_37(&(uParam0->f_228));
				func_1085(4, uParam0);
				func_222(uParam0->f_204, 1, 0);
			}
			break;
		case 3:
			if (!__LIB_0__::func_75(&(uParam0->f_87)))
			{
				__LIB_1__::func_283(&(uParam0->f_87), 0);
			}
			else if (!TASK::IS_PED_STILL(Global_35))
			{
				__LIB_1__::func_148(&(uParam0->f_87));
			}
			else if (__LIB_0__::func_75(&(uParam0->f_87)) && __LIB_0__::func_265(&(uParam0->f_87)) >= 12f)
			{
				func_222(uParam0->f_204, 1, 0);
			}
			if (func_226(12, uParam0) || bParam1)
			{
				__LIB_12__::func_772(96, func_216(4), 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_0__::func_325(&(uParam0->f_40[1]));
				__LIB_3__::func_608((*uParam0)[0]);
				__LIB_0__::func_325(&(uParam0->f_40[0]));
				uParam0->f_40[0] = MAP::_BLIP_ADD_FOR_RADIUS(408396114, -1665.496f, -1155.801f, 76.5107f, 20f);
				__LIB_0__::func_37(&(uParam0->f_87));
				func_1085(4, uParam0);
				func_222(uParam0->f_204, 1, 0);
			}
			break;
		case 4:
			if (!__LIB_0__::func_75(&(uParam0->f_87)))
			{
				__LIB_1__::func_283(&(uParam0->f_87), 0);
			}
			else if (!TASK::IS_PED_STILL(Global_35))
			{
				__LIB_1__::func_148(&(uParam0->f_87));
			}
			else if (__LIB_0__::func_75(&(uParam0->f_87)) && __LIB_0__::func_265(&(uParam0->f_87)) >= 12f)
			{
				func_222(uParam0->f_204, 1, 0);
			}
			if (uParam0->f_69 > 12)
			{
				__LIB_0__::func_325(&(uParam0->f_40[1]));
				__LIB_3__::func_608((*uParam0)[0]);
				__LIB_0__::func_325(&(uParam0->f_40[0]));
				__LIB_3__::func_608((*uParam0)[0]);
				__LIB_1__::func_148(&(uParam0->f_87));
				func_1085(5, uParam0);
				__LIB_1__::func_422(func_216(5), 7500, 0, 1, 0, 0, -1, -1, 0);
			}
			break;
		case 5:
			CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CINEMATIC_CAM"), false);
			func_1085(5, uParam0);
			if (func_226(14, uParam0) || bParam1)
			{
				__LIB_0__::func_904(12, 0);
				__LIB_0__::func_325(&(uParam0->f_40[1]));
				uParam0->f_40[0] = __LIB_5__::func_442(func_190(13), 1);
				__LIB_0__::func_37(&(uParam0->f_87));
				func_1085(6, uParam0);
			}
			break;
		case 6:
			break;
	}
}

void func_742(var uParam0, var uParam1)
{
	switch (uParam1->f_70)
	{
		case 0:
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			if (!__LIB_5__::func_463() && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam1->f_54[7], false))
			{
				func_1206(uParam0, uParam1, 11, 6f, 12f);
			}
			break;
		case 4:
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam1->f_54[7], false))
			{
				if (__LIB_8__::func_684("JCK2_IG2_A") || __LIB_19__::func_44("JCK2_IG2_A"))
				{
					__LIB_6__::func_900("JCK2_IG2_A", 0, 0);
				}
			}
			if (__LIB_0__::func_665(Global_35, (*uParam1)[0], 1, 1) < 60f && !__LIB_5__::func_463())
			{
				func_1206(uParam0, uParam1, 13, 1.5f, 3.5f);
			}
			break;
		case 5:
			if (!__LIB_0__::func_27(uParam1->f_111, 2))
			{
				if (!__LIB_6__::func_904())
				{
					__LIB_1__::func_683(&(uParam1->f_111), 2);
					func_354(uParam1, 6);
				}
			}
			break;
		case 6:
			break;
		case 7:
			if (__LIB_0__::func_94((*uParam1)[0], func_190(12), 1) < 1f)
			{
				func_1209(uParam1);
				func_345(uParam1);
				func_1210(uParam1);
				func_354(uParam1, 8);
			}
			else if (func_215(0, uParam1) && !__LIB_0__::func_163((*uParam1)[0], 242628503))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING((*uParam1)[0], -1657.878f, -1157.086f, 76.6194f, 143.55f, false, false, false);
				TASK::CLEAR_SEQUENCE_TASK(&(uParam1->f_206));
				TASK::OPEN_SEQUENCE_TASK(&(uParam1->f_206));
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_190(12), 2f, 20000, 0.25f, 0, 40000f);
				TASK::CLOSE_SEQUENCE_TASK(uParam1->f_206);
				TASK::TASK_PERFORM_SEQUENCE((*uParam1)[0], uParam1->f_206);
			}
			break;
		case 8:
			if (__LIB_1__::func_348((*uParam1)[0], Global_35) < 4f)
			{
				func_354(uParam1, 9);
			}
			else if (!__LIB_0__::func_163((*uParam1)[0], 1056466932))
			{
				TASK::CLEAR_PED_TASKS((*uParam1)[0], true, false);
				TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY((*uParam1)[0], Global_35, -0.5f, 0f, 0f, 2f, -1, 0.1f, 0, 1, 0, 1, 0);
			}
			break;
		case 9:
			if (!__LIB_0__::func_163((*uParam1)[0], joaat("SCRIPT_TASK_FOLLOW_AND_CONVERSE_WITH_PED")))
			{
				TASK::CLEAR_PED_TASKS((*uParam1)[0], true, false);
				TASK::TASK_FOLLOW_AND_CONVERSE_WITH_PED((*uParam1)[0], Global_35, 0, 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 8, 0, 0, 1069547520 /* Float: 1.5f */, 1073741824 /* Float: 2f */);
			}
			break;
	}
}

void func_748(int iParam0, vector3 vParam1, float fParam4, float fParam5, float fParam6, float fParam7)
{
	float fVar0;
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (__LIB_0__::func_138(vParam1, 0f, 0f, 0f))
	{
		return;
	}
	if (((fParam4 < 0f || fParam5 < 0f) || fParam6 < 0f) || fParam7 < 0f)
	{
		return;
	}
	if (((((!fParam4 > fParam5 || !fParam4 > fParam6) || !fParam4 > fParam7) || !fParam5 > fParam6) || !fParam5 > fParam7) || !fParam6 > fParam7)
	{
		return;
	}
	fVar0 = __LIB_0__::func_94(iParam0, vParam1, 1);
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if ((fVar0 <= fParam4 && fVar0 > fParam5) && fVar0 > fParam6)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam0))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, 1.5f);
			}
		}
		if (fVar0 <= fParam5 && fVar0 > fParam6)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam0))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, 1.5f);
			}
		}
	}
	if (fVar0 <= fParam6)
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, 1f);
	}
}

void func_750(int iParam0, var uParam1)
{
	ANIMSCENE::FADE_ANIM_SCENE_AUDIO_OUT(uParam1->f_54[iParam0], 0f);
}

void func_753(int iParam0)
{
	if (__LIB_1__::func_650())
	{
		if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, joaat("INPUT_REVEAL_HUD")))
		{
			__LIB_1__::func_422(func_216(iParam0), 7500, 0, 1, 0, 0, -1, -1, 0);
		}
	}
}

bool func_757(int iParam0, var uParam1)
{
	return (func_664(iParam0, uParam1) && ANIMSCENE::_IS_ANIM_SCENE_FINISHED(uParam1->f_54[iParam0], false));
}

void func_758(bool bParam0)
{
	if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_35, -1647.567f, -1104.628f, 61.23056f, -1496.706f, -1081.916f, 84.01488f, 40f, false, true, 0))
	{
		__LIB_13__::func_905(0, 1, 0, 0);
		__LIB_14__::func_190(0);
		if (bParam0)
		{
			__LIB_1__::func_564(1);
		}
	}
}

void func_763(bool bParam0)
{
	if (bParam0)
	{
		if (INVENTORY::_0x3D10D7179D7034AF(__LIB_0__::func_162(0), joaat("WEAPON_FISHINGROD"), 0))
		{
			__LIB_1__::func_564(0);
		}
	}
	else
	{
		__LIB_13__::func_905(0, 1, 0, 0);
		if (!INVENTORY::_0x3D10D7179D7034AF(__LIB_0__::func_162(0), joaat("WEAPON_FISHINGROD"), 0))
		{
			__LIB_1__::func_564(1);
		}
	}
}

bool func_771(var uParam0)
{
	switch (uParam0->f_124)
	{
		case 0:
			if (func_320(7, uParam0, "s_find_rufus", 1))
			{
				func_323(7, "s_find_rufus", uParam0);
				uParam0->f_124 = 1;
			}
			break;
		case 1:
			if (func_1220(uParam0, 7, 0))
			{
				uParam0->f_124 = 2;
			}
			break;
		case 2:
			if (func_1221(uParam0))
			{
				uParam0->f_124 = 3;
			}
			break;
		case 3:
			if (func_1220(uParam0, 7, 1))
			{
				uParam0->f_124 = 4;
			}
			break;
		case 4:
			if (func_320(7, uParam0, "s_call_idle", 1))
			{
				func_323(7, "s_call_idle", uParam0);
				uParam0->f_124 = 0;
				return true;
			}
			break;
	}
	return false;
}

char* func_772(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "JCK2_NIGHT";
		case 1:
			return "JCK2_SV_3";
		case 2:
			return "JCK2_SV_4";
		case 3:
			return "JCK2_RUFDO";
		case 4:
			return "JCK2_SV_1";
		case 5:
			return "JCK2_SV_2";
		case 11:
			return "JCK2_IG2_A";
		case 7:
			return "JCK2_IG0";
		case 8:
			return "JCK2_FISHCHAT1";
		case 9:
			return "JCK2_FISHCHAT2";
		case 10:
			return "JCK2_IG1";
		case 12:
			return "JCK2_LR_0";
		case 13:
			return "JCK2_HELP";
		case 14:
			return "JCK2_LJ_0";
		case 15:
			return "JCK2_SV_SPIT";
		case 16:
			return "JCK2_GETDR";
		case 17:
			return "JCK2_WNTSLOW";
		case 18:
			return "JCK2_STOPFISH";
		case 19:
			return "JCK2_LR_1";
		case 20:
			return "JCK2_LR_2";
		case 21:
			return "JCK2_SV_JACK";
		case 22:
			return "JCK2_SV_SPIT";
		default:
			break;
	}
	return "";
}

bool func_775(var uParam0, var uParam1)
{
	int iVar0;
	iVar0 = func_661(uParam1, &(uParam1->f_179));
	switch (uParam1->f_201)
	{
		case 0:
			__LIB_1__::func_148(&(uParam1->f_75));
			uParam1->f_201++;
			break;
		case 1:
			if (func_1224(uParam1))
			{
				if (!__LIB_5__::func_463())
				{
					func_640(3, uParam0);
					__LIB_1__::func_283(&(uParam1->f_81), 1);
					uParam1->f_201++;
				}
			}
			break;
		case 2:
			if (func_1225(uParam1))
			{
				if ((__LIB_0__::func_75(&(uParam1->f_75)) && __LIB_1__::func_871(&(uParam1->f_81)) > 5000) && !__LIB_5__::func_463())
				{
					func_640(4, uParam0);
					__LIB_1__::func_148(&(uParam1->f_75));
				}
			}
			else if (func_1226(2, *uParam1) && __LIB_1__::func_871(&(uParam1->f_81)) > 5000)
			{
				func_640(5, uParam0);
			}
			if (!func_1225(uParam1))
			{
				__LIB_0__::func_37(&(uParam1->f_75));
			}
			break;
	}
	if (iVar0 == 1)
	{
		return true;
	}
	return false;
}

bool func_781(var uParam0, var uParam1, var uParam2, var uParam3, float fParam4)
{
	int iVar0;
	int iVar1[4];
	int iVar6;
	if (!__LIB_0__::func_75(uParam3) || __LIB_0__::func_265(uParam3) > fParam4)
	{
		__LIB_1__::func_148(uParam3);
		if (*uParam1 == 0)
		{
			*uParam1 = -1;
		}
		if (*uParam2 == 0)
		{
			*uParam2 = -1;
		}
		*uParam1 = *uParam2;
		iVar0 = 0;
		while (iVar0 < 4)
		{
			iVar1[iVar0] = -1;
			iVar0++;
		}
		iVar6 = func_1228(uParam0, &iVar1);
		if (iVar6 == 0)
		{
			*uParam2 = -1;
			if (*uParam1 != *uParam2)
			{
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < iVar6)
			{
				*uParam2 = iVar1[iVar0];
				if (*uParam1 != -1 && *uParam1 == iVar1[iVar0])
				{
					return true;
				}
				iVar0++;
			}
			if (*uParam1 == -1)
			{
			}
			else if (*uParam2 == -1)
			{
			}
		}
		return true;
	}
	return false;
}

bool func_782(var uParam0, var uParam1)
{
	if (func_1229(*uParam1))
	{
		if (*uParam1 == 11)
		{
			return __LIB_0__::func_27(uParam0->f_110, 128);
		}
		else
		{
			return __LIB_0__::func_27(uParam0->f_110, 64);
		}
	}
	return true;
}

int func_783(var uParam0, int iParam1)
{
	if (!func_1229(iParam1))
	{
		return 0;
	}
	switch (iParam1)
	{
		case 8:
			*uParam0 = { func_190(1) };
			uParam0->f_3 = joaat("WORLD_ANIMAL_DOG_SITTING");
			uParam0->f_4 = 8500;
			break;
		case 9:
			*uParam0 = { func_190(0) };
			uParam0->f_3 = joaat("WORLD_ANIMAL_DOG_SITTING");
			uParam0->f_4 = 8500;
			break;
		case 10:
			*uParam0 = { func_190(2) };
			uParam0->f_3 = joaat("WORLD_ANIMAL_DOG_SITTING");
			uParam0->f_4 = 8500;
			break;
		case 11:
			*uParam0 = { func_190(3) };
			uParam0->f_3 = joaat("WORLD_ANIMAL_DOG_SNIFFING_GROUND");
			uParam0->f_4 = 6000;
			break;
		default:
			return 0;
	}
	return 1;
}

void func_784(var uParam0)
{
	if ((uParam0->f_214 == 3 || uParam0->f_214 == 4) || uParam0->f_214 == 5)
	{
		__LIB_1__::func_148(&(uParam0->f_219));
		TASK::CLEAR_PED_TASKS((*uParam0)[1], true, false);
		TASK::TASK_LOOK_AT_ENTITY((*uParam0)[1], Global_35, 10, 0, 51, 0);
		TASK::TASK_GO_TO_ENTITY((*uParam0)[1], (*uParam0)[0], -1, 200f, 2f, 2f, 0);
		func_363(uParam0, 2);
	}
}

bool func_828(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
	if (!func_1261(iParam0, iParam1, bParam2, iParam5))
	{
		return false;
	}
	if (!func_1262(iParam0, &iVar0, iParam1))
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
				func_828(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
		func_1283(28);
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
					if (__LIB_0__::func_708(0) && func_1043(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
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
					if (__LIB_0__::func_708(0) && func_1043(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
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
			if (!func_1289(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (__LIB_0__::func_356(iParam0) == joaat("AMMO") && __LIB_0__::func_258(iParam0))
		{
			if (!func_1291(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (__LIB_0__::func_192(iParam0, 866047851))
		{
			func_1292(iParam0);
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
						func_828(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_828(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_828(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_828(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_828(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_828(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (__LIB_0__::func_192(iParam0, -839724752) && __LIB_0__::func_774(iParam0, 4))
		{
			if (!__LIB_1__::func_154(42))
			{
				__LIB_1__::func_816(iParam0);
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
				func_828(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_1283(24);
				if (Global_1946804.f_1497.f_1[27 /*3*/] == Global_1946804.f_57[27 /*11*/])
				{
					func_1154(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_OFFHAND_HOLSTER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 0);
				}
				if (__LIB_0__::func_918(&iVar9, 0))
				{
					func_1043(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case joaat("UPGRADE_BANDOLIER"):
				if (__LIB_0__::func_2() == -1 && Global_1946804.f_1497.f_1[25 /*3*/] == Global_1946804.f_57[25 /*11*/])
				{
					func_1154(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_BANDOLIER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_1"), 1, 1, 1, 0, 1, 0);
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
					func_828(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_828(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
		if (!func_1330(iVar10, iVar0, iParam5))
		{
			return false;
		}
		else if (!__LIB_0__::func_708(0))
		{
			return true;
		}
		if (__LIB_0__::func_356(iParam0) == joaat("CLOTHING"))
		{
			func_1331(iParam0);
		}
		if (__LIB_0__::func_192(iParam0, -1979000645))
		{
			func_1332(iParam0);
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
				func_828(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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

void func_830()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_1345();
	func_1346();
	func_1347();
	func_1348();
	func_1349();
	func_1350();
	__LIB_0__::func_376();
}

void func_831(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	func_1352(iParam0, 1, 1, -142743235, 1);
	if (__LIB_0__::func_779(iParam0))
	{
		func_1354(iParam0, 1, 1);
	}
	bVar3 = false;
	bVar7 = false;
	iVar8 = __LIB_0__::func_161(func_1355(iParam0), 1);
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

int func_838(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	struct<5> Var0;
	if (iParam3 == -358215195)
	{
		Var0 = { func_1365(iParam1, 1, 0) };
		iParam3 = __LIB_0__::func_709(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	__LIB_0__::func_922(iParam3);
	return func_1154(iParam0, iParam1, iParam2, iParam3, bParam4, bParam5, 1, 0, 1, 0);
}

void func_865()
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
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_1385(&uVar4, &iVar1, &iVar2, &iVar3)))
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

Vector3 func_872(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
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
		bVar10 = func_1399();
		if (VOLUME::_DOES_VOLUME_EXIST(bVar10))
		{
		}
	}
	if (!func_1400(Global_1310720.f_21))
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

void func_903()
{
	if (__LIB_0__::func_163(Global_35, 76834332))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
	}
}

void func_904(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = -1 + 1;
	while (iVar0 <= (6 - 1))
	{
		iVar1 = iVar0;
		func_1429(iVar1, uParam0, bParam1);
		PED::SET_PED_CAN_BE_TARGETTED((*uParam0)[iVar1], true);
		iVar0++;
	}
}

void func_905(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = -1 + 1;
	while (iVar0 <= (9 - 1))
	{
		iVar1 = iVar0;
		func_350(iVar1, uParam0, bParam1);
		iVar0++;
	}
}

void func_906(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = -1 + 1;
	while (iVar0 <= (12 - 1))
	{
		iVar1 = iVar0;
		func_1430(iVar1, uParam0);
		iVar0++;
	}
}

void func_908(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = -1 + 1;
	while (iVar0 <= (5 - 1))
	{
		iVar1 = iVar0;
		func_1431(iVar1, uParam0);
		iVar0++;
	}
}

void func_909(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = -1 + 1;
	while (iVar0 <= (7 - 1))
	{
		iVar1 = iVar0;
		func_1432(iVar1, uParam0);
		iVar0++;
	}
}

void func_910(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = -1 + 1;
	while (iVar0 <= (9 - 1))
	{
		iVar1 = iVar0;
		func_1433(iVar1, uParam0);
		iVar0++;
	}
	if (PED::_GET_PED_BLACKBOARD_BOOL(Global_35, "CarryFishingpole"))
	{
		PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "CarryFishingpole", false, -1);
	}
}

int func_960(var uParam0, int iParam1, int iParam2)
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
		return func_960(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

bool func_1022(int iParam0, var uParam1)
{
	return (__LIB_13__::func_902(iParam0) && uParam1->f_46[iParam0] != -1);
}

bool func_1023(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	*uParam3 = 1;
	*uParam4 = 1;
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -1629.84f, -1338.23f, 81.99f };
			*uParam2 = 2f;
			*uParam3 = 1;
			*uParam4 = 63;
			break;
		case 1:
			*uParam1 = { -1664.45f, -1153.48f, 76.47f };
			*uParam2 = 5f;
			*uParam3 = 1;
			*uParam4 = 44;
			break;
		case 2:
			*uParam1 = { -1662.81f, -1155.81f, 76.55f };
			*uParam2 = 2f;
			*uParam3 = 1;
			*uParam4 = 63;
			break;
		case 3:
			*uParam1 = { -1613.41f, -1132.41f, 75.64f };
			*uParam2 = 2f;
			*uParam3 = 1;
			*uParam4 = 61;
			break;
		case 4:
			*uParam1 = { -1610.27f, -1127.71f, 73.49f };
			*uParam2 = 2f;
			*uParam3 = 1;
			*uParam4 = 61;
			break;
		case 5:
			*uParam1 = { -1602.11f, -1131.23f, 72.94f };
			*uParam2 = 2f;
			*uParam3 = 1;
			*uParam4 = 61;
			break;
		case 6:
			*uParam1 = { -1604.12f, -1128.46f, 73.28f };
			*uParam2 = 2f;
			*uParam3 = 1;
			*uParam4 = 61;
			break;
	}
	return (!__LIB_0__::func_86(*uParam1) && *uParam2 > 0f);
}

void func_1024(var uParam0, vector3 vParam1, var uParam4, int iParam5, var uParam6, int iParam7)
{
	if (!__LIB_1__::func_565(uParam0))
	{
		*uParam0 = GRAPHICS::_0xFA50F79257745E74(vParam1, uParam4, iParam5, uParam6, iParam7);
		if (__LIB_1__::func_565(uParam0))
		{
		}
	}
}

bool func_1043(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<4> Var0;
	int iVar5;
	struct<10> Var6;
	int iVar28;
	struct<4> Var29;
	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_MELEE(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
	{
		Var0 = { func_1365(iParam0, 0, 1) };
		iVar5 = 1728382685; /* GXTEntry: "Right" */
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_1532((386 + iVar28), 1);
			if (func_1533(iParam0, &Var0, iVar5, 0))
			{
				if (__LIB_1__::func_429(iParam0, &Var6, iVar5))
				{
					Var29 = { __LIB_0__::func_429(iParam0, Var0, iVar5, 0) };
					__LIB_0__::func_939(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (__LIB_0__::func_708(0))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
					{
						return false;
					}
					__LIB_0__::func_916(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0), iParam1, iParam6);
					__LIB_0__::func_718(iParam0, iParam1);
					return true;
				}
				if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
				{
					return false;
				}
				if (iParam1 > 0)
				{
				}
				WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
				return true;
			}
		}
	}
}

bool func_1049(int iParam0, var uParam1)
{
	char* sVar0;
	sVar0 = func_627(iParam0);
	return (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0) && __LIB_13__::func_23(uParam1, sVar0));
}

void func_1050(var uParam0)
{
	if (func_708(2, uParam0))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(uParam0->f_7[2]))
		{
			ENTITY::DETACH_ENTITY(uParam0->f_7[2], true, true);
		}
	}
}

void func_1054(var uParam0)
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
			func_1102(iVar1, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_1102(iVar3, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_1085(int iParam0, var uParam1)
{
	if (uParam1->f_204 != iParam0)
	{
		uParam1->f_204 = iParam0;
	}
}

char* func_1090(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
		case 4:
			return "script_re@snake_bite@player_sucks_venom";
		case 1:
			return "AMB_CAMP@WORLD_CAMP_LENNY_GUARD@CROUCH_TRACKS@MALE_A@idle_b";
		case 5:
			return "amb_creature_mammal@world_dog_injured_on_ground@base";
		default:
			break;
	}
	return "";
}

void func_1097(var uParam0)
{
	if (CAM::DOES_CAM_EXIST(uParam0->f_13))
	{
		CAM::DESTROY_CAM(uParam0->f_13, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		HUD::DISPLAY_HUD(true);
	}
}

int func_1098(var uParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	struct<11> Var0;
	int iVar11;
	Var0.f_10 = 7;
	Var0 = bParam5;
	Var0.f_1 = 1;
	Var0.f_4 = iParam7;
	Var0.f_3 = iParam8;
	Var0.f_6 = { vParam1 };
	if (fParam4 == -1f)
	{
		Var0.f_9 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
	}
	else
	{
		Var0.f_9 = fParam4;
	}
	if (bParam5)
	{
		Var0.f_2 = 1;
	}
	else if (!bParam6)
	{
		Var0.f_2 = 0;
	}
	iVar11 = 0;
	*uParam0 = __LIB_4__::func_720(&iVar11, &Var0);
	if (iVar11 == 0)
	{
		return 0;
	}
	else if (iVar11 == 1)
	{
		return 0;
	}
	else if (iVar11 == 2)
	{
		if (!__LIB_0__::func_272(*uParam0, 0))
		{
			return 0;
		}
	}
	return 1;
}

void func_1102(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_1102(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_1102(iVar2, vParam1, fParam4, iParam5, iParam6);
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

void func_1109(int iParam0, int iParam1)
{
	if (!__LIB_0__::func_49(iParam0))
	{
		return;
	}
	switch (iParam0)
	{
		case 11:
			if (Global_40.f_4942[iParam0 /*60*/].f_3 == -1341683964)
			{
				func_611(iParam1, joaat("WEAPON_REVOLVER_CATTLEMAN_SADIE"), 0, 0, 2, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
				func_611(iParam1, joaat("WEAPON_REVOLVER_CATTLEMAN_SADIE_DUALWIELD"), 0, 0, 3, 1, 1, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 1, 0, 0);
			}
			break;
	}
}

bool func_1112(var uParam0)
{
	char cVar0[64];
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_242))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_242, true, false))
		{
			return true;
		}
	}
	else
	{
		StringCopy(&cVar0, "script@timelapse@RJCK2_timelapse", 64);
		uParam0->f_242 = ANIMSCENE::_CREATE_ANIM_SCENE(&cVar0, 0, 0, false, true);
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_242))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_242);
		}
	}
	return false;
}

void func_1138(var uParam0)
{
	int iVar0;
	if (__LIB_1__::func_750(&iVar0))
	{
		if (__LIB_0__::func_144(iVar0, 0))
		{
			if (__LIB_0__::func_357(iVar0) == -525676072)
			{
				PED::_SET_PED_COMPONENT_DISABLED(Global_35, joaat("MASKS_LARGE"), 0);
				func_1154(Global_35, joaat("CLOTHING_ITEM_HAT_NONE"), 0, 1108822547, 0, 1, 0, 0, 0, 0);
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

void func_1139(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
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
		func_1594();
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
			func_1102(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

int func_1154(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	struct<5> Var0;
	int iVar5;
	if (iParam3 == -358215195)
	{
		Var0 = { func_1365(iParam1, 1, 0) };
		iParam3 = __LIB_0__::func_709(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_1613(iParam1, iParam2, __LIB_0__::func_161(iParam3, 1), bParam4, bParam9))
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

void func_1155(int iParam0, bool bParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	Var0 = { func_1365(iParam0, 0, 0) };
	Var5 = { __LIB_0__::func_429(iParam0, Var0, Var0.f_4, 0) };
	if (__LIB_0__::func_800(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	INVENTORY::_0x65A5F70F4A292EBE(__LIB_0__::func_162(0), &Var5, bParam1);
}

void func_1206(var uParam0, var uParam1, int iParam2, float fParam3, float fParam4)
{
	if (!__LIB_5__::func_463())
	{
		if (!__LIB_0__::func_75(&(uParam1->f_75)))
		{
			uParam1->f_71 = MISC::GET_RANDOM_FLOAT_IN_RANGE(fParam3, fParam4);
			__LIB_1__::func_283(&(uParam1->f_75), 0);
		}
		else if (__LIB_0__::func_265(&(uParam1->f_75)) > uParam1->f_71 && !__LIB_5__::func_463())
		{
			if (func_640(iParam2, uParam0))
			{
				__LIB_0__::func_37(&(uParam1->f_75));
			}
		}
	}
}

int func_1209(var uParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	if (!func_708(0, uParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_ATTACHED(uParam0->f_7[0]))
	{
		return 0;
	}
	if (STREAMING::HAS_MODEL_LOADED(joaat("P_CS_BUCKET03X")))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_7[0], true, false) };
		vVar3 = { ENTITY::GET_ENTITY_ROTATION(uParam0->f_7[0], 2) };
		iVar6 = OBJECT::CREATE_OBJECT(joaat("P_CS_BUCKET03X"), vVar0, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(iVar6, vVar3, 2, true);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar6))
		{
			return 0;
		}
		__LIB_1__::func_951(&(uParam0->f_7[0]));
		uParam0->f_7[0] = iVar6;
		return 1;
	}
	STREAMING::REQUEST_MODEL(joaat("P_CS_BUCKET03X"), false);
	return 0;
}

void func_1210(var uParam0)
{
	if (func_708(1, uParam0))
	{
		ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_7[1], (*uParam0)[0], PED::GET_PED_BONE_INDEX((*uParam0)[0], 7966), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
	}
}

bool func_1220(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 7:
			switch (iParam2)
			{
				case 0:
					if (ENTITY::IS_ENTITY_PLAYING_ANIM((*uParam0)[0], "script_rc@jck2@ig@ig_2_findrufus", "findrufus_jack", 1))
					{
						if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME((*uParam0)[0], "script_rc@jck2@ig@ig_2_findrufus", "findrufus_jack") > 0.9f)
						{
							return true;
						}
					}
					break;
				case 1:
					if (ENTITY::IS_ENTITY_PLAYING_ANIM((*uParam0)[0], "script_rc@jck2@ig@ig_2_findrufus", "helpback_01_jack", 1))
					{
						if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME((*uParam0)[0], "script_rc@jck2@ig@ig_2_findrufus", "helpback_01_jack") > 0.9f)
						{
							return true;
						}
					}
					break;
				case 3:
					if (ENTITY::IS_ENTITY_PLAYING_ANIM((*uParam0)[0], "script_rc@jck2@ig@ig_3_concernedforrufus", "gunshotreaction01_jack", 1))
					{
						if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME((*uParam0)[0], "script_rc@jck2@ig@ig_3_concernedforrufus", "gunshotreaction01_jack") > 0.9f)
						{
							return true;
						}
					}
					break;
			}
			break;
	}
	return false;
}

bool func_1221(var uParam0)
{
	int iVar0;
	iVar0 = __LIB_2__::func_431((*uParam0)[0], ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 1060437492 /* Float: 0.707f */);
	switch (iVar0)
	{
		case 0:
			if (func_320(7, uParam0, "s_call_for_help", 1))
			{
				func_323(7, "s_call_for_help", uParam0);
				return true;
			}
			break;
		case 3:
			if (func_320(7, uParam0, "s_call_for_help", 1))
			{
				func_323(7, "s_call_for_help", uParam0);
				return true;
			}
			break;
		case 1:
			if (func_320(7, uParam0, "s_call_for_help", 1))
			{
				func_323(7, "s_call_for_help", uParam0);
				return true;
			}
			break;
		case 2:
			if (func_320(7, uParam0, "s_call_for_help", 1))
			{
				func_323(7, "s_call_for_help", uParam0);
				return true;
			}
			break;
	}
	return false;
}

bool func_1224(var uParam0)
{
	return uParam0->f_179.f_9 > 3;
}

bool func_1225(var uParam0)
{
	return uParam0->f_179.f_9 == 5;
}

bool func_1226(int iParam0, struct<180> Param1, var uParam181, var uParam182, var uParam183, var uParam184, var uParam185, var uParam186, var uParam187, var uParam188, var uParam189, var uParam190, var uParam191, var uParam192, var uParam193, var uParam194, var uParam195, var uParam196, var uParam197, var uParam198, var uParam199, var uParam200, var uParam201, var uParam202, var uParam203, var uParam204, var uParam205, var uParam206, var uParam207, var uParam208, var uParam209, var uParam210, var uParam211, var uParam212, var uParam213, var uParam214, var uParam215, var uParam216, var uParam217, var uParam218, var uParam219, var uParam220, var uParam221, var uParam222, var uParam223, var uParam224, var uParam225, var uParam226, var uParam227, var uParam228, var uParam229, var uParam230, var uParam231, var uParam232, var uParam233, var uParam234, var uParam235, var uParam236, var uParam237, var uParam238, var uParam239, var uParam240, var uParam241, var uParam242, var uParam243)
{
	return __LIB_0__::func_27(Param1.f_179.f_14, iParam0);
}

int func_1228(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = 8;
	while (iVar0 <= 11)
	{
		if (__LIB_0__::func_393(Global_35, uParam0->f_27[iVar0], 0, 1))
		{
			(*iParam1)[iVar1] = iVar0;
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_1229(int iParam0)
{
	return (iParam0 >= 8 && iParam0 <= 11);
}

bool func_1261(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (__LIB_0__::func_2() == -1)
	{
		if (__LIB_0__::func_787(iParam0) && func_1720(iParam0))
		{
			__LIB_1__::func_695(iParam0, iParam1, 1, &bParam2, iParam3);
			return false;
		}
	}
	else if (iParam0 == joaat("CUSTOM_SATCHEL"))
	{
		bParam2 = true;
	}
	else if (iParam0 == joaat("WEAPON_UNARMED"))
	{
		return false;
	}
	return true;
}

bool func_1262(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	*iParam1 = iParam2;
	__LIB_1__::func_111(iParam0, iParam1);
	Var0 = { func_1365(iParam0, 0, 1) };
	iVar5 = __LIB_0__::func_936(iParam0, &Var0, 0, 0);
	iVar6 = __LIB_0__::func_788(iParam0, 0);
	if ((iVar5 > 1 && !__LIB_1__::func_195()) && (iVar6 + iParam2) >= iVar5)
	{
		if (__LIB_0__::func_192(iParam0, -2051813666))
		{
			__LIB_1__::func_240(583, 1);
		}
		else
		{
			__LIB_1__::func_240(582, 0);
		}
	}
	if (func_1725(iParam0, &Var0, *iParam1, 0, 0))
	{
		if (iVar6 < iVar5)
		{
			*iParam1 = (iVar5 - iVar6);
		}
		else
		{
			return false;
		}
	}
	return true;
}

void func_1283(int iParam0)
{
	if (!__LIB_0__::func_52(iParam0))
	{
		return;
	}
	__LIB_0__::func_427(iParam0);
	func_1744(iParam0);
}

bool func_1289(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	int iVar6;
	int iVar7;
	bool bVar8;
	iVar0 = __LIB_0__::func_775(iParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_0__::func_915(iVar0);
			if (iParam1 == 1248274121)
			{
				__LIB_1__::func_618(iVar0);
			}
		}
		if (!func_1725(iParam0, &uVar1, 1, 0, 0))
		{
			__LIB_1__::func_695(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = __LIB_0__::func_940(iVar0);
			if (WEAPON::_IS_WEAPON_SNIPER(iVar0))
			{
				func_1043(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("WEAPON_FISHINGROD") || iVar0 == joaat("WEAPON_KIT_BINOCULARS"))
			{
				func_1043(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("WEAPON_LASSO"))
			{
				func_1043(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::_IS_WEAPON_MELEE(iVar0))
			{
				if (iVar0 == joaat("WEAPON_MELEE_KNIFE_JOHN") && !__LIB_0__::func_181())
				{
					return false;
				}
				if (WEAPON::_0x2C83212A7AA51D3D(iParam0))
				{
				}
				else if (!__LIB_0__::func_216(iVar0))
				{
					func_1043(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_1043(iVar0, WEAPON::_GET_WEAPON_CLIP_SIZE(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
			{
				iVar7 = __LIB_0__::func_153(Global_35, 2, 0, 1);
				if ((((__LIB_0__::func_154(iVar7) && !Global_43891) && iVar7 != iVar0) && !__LIB_0__::func_293(24)) && bParam4)
				{
					WEAPON::_0xE9BD19F8121ADE3E(Global_35, iVar7);
				}
				bVar8 = true;
				if (__LIB_0__::func_154(iVar7) && __LIB_0__::func_293(24))
				{
					if (!func_1043(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_1043(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_1043(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
			{
				return false;
			}
		}
	}
	else
	{
		return false;
	}
	if (WEAPON::_0x9F0E1892C7F228A8(1) != 0 && iParam1 == 1248274121)
	{
		__LIB_1__::func_240(480, 1);
	}
	return true;
}

bool func_1291(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	if (!__LIB_0__::func_258(iParam0))
	{
		return false;
	}
	iVar4 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(iParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	if (__LIB_0__::func_154(iVar4))
	{
		WEAPON::GET_MAX_AMMO(Global_35, &iVar2, iVar4);
	}
	iVar5 = (iVar2 - iVar3);
	if (WEAPON::_IS_WEAPON_BOW(iVar4))
	{
		iVar1 = 5;
	}
	else
	{
		iVar1 = WEAPON::_GET_WEAPON_CLIP_SIZE(iVar4);
	}
	if (*iParam1 > 0)
	{
		iVar6 = *iParam1;
	}
	else if (*iParam1 < 0)
	{
		iVar6 = (iVar1 * MISC::ABSI(*iParam1));
	}
	if (__LIB_1__::func_707(joaat("PROVISION_TRINKET_CROW_BEAK"), 1, 0) && iParam2 == -897553835)
	{
		iVar6 = BUILTIN::CEIL((IntToFloat(iVar6) * 1.1f));
	}
	if (iVar5 >= iVar6)
	{
		iVar0 = iVar6;
	}
	else if (iVar5 < iVar6 && iVar5 >= 1)
	{
		iVar0 = iVar5;
	}
	else
	{
		__LIB_1__::func_424(__LIB_0__::func_941(iParam0), __LIB_0__::func_776(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (__LIB_0__::func_2() == -1)
		{
			if (__LIB_1__::func_25(Global_1835011[14 /*74*/].f_1, 1))
			{
				__LIB_1__::func_240(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (__LIB_0__::func_708(0))
	{
		if (__LIB_0__::func_916(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_1330(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_1292(int iParam0)
{
	var uVar0;
	if ((iParam0 == joaat("PROVISION_TALISMAN_EAGLE_TALON") && !__LIB_0__::func_26()) || iParam0 != joaat("PROVISION_TALISMAN_EAGLE_TALON"))
	{
		if (func_1749(Global_35, iParam0, &uVar0))
		{
			func_1154(PLAYER::PLAYER_PED_ID(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
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

bool func_1330(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	struct<4> Var5;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_1365(iParam0, 0, 1) };
	Var5 = { __LIB_0__::func_429(iParam0, Var0, Var0.f_4, 0) };
	return func_1785(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_1331(int iParam0)
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
				if (__LIB_1__::func_62(-525676072, &iVar1))
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
			func_1154(Global_35, iParam0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
		}
		func_1283(24);
		if (__LIB_0__::func_918(&iVar2, 0))
		{
			func_1043(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_1332(int iParam0)
{
	if (__LIB_0__::func_192(iParam0, 943695443))
	{
		func_1793(0, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -2096528786))
	{
		func_1793(1, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -1094167013))
	{
		func_1793(2, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1936654645))
	{
		func_1793(3, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1306489306))
	{
		func_1793(4, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 435762317))
	{
		func_1793(5, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1259363210))
	{
		func_1793(6, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 881398259))
	{
		func_1793(7, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -541549214))
	{
		func_1793(8, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 130796156))
	{
		func_1793(-1, iParam0);
	}
}

void func_1345()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_1805(0);
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"), false);
			func_1806();
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
	func_1805(1);
}

void func_1346()
{
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_828(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_1347()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_1808(0);
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
	func_1808(1);
}

void func_1348()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_1__::func_432(15000, 0, 0, 0, 1);
			func_1808(0);
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
	func_1808(1);
}

void func_1349()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_828(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_828(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_1352(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_1352(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
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

void func_1350()
{
	bool bVar0;
	struct<4> Var1;
	int iVar15;
	int iVar16;
	bVar0 = UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_CROSS_PROMOTION_REVOLVER"));
	if (!bVar0)
	{
		return;
	}
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_CROSS_PROMOTION_REVOLVER_REDEEMED")))
	{
		return;
	}
	Var1 = { __LIB_1__::func_605() };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
	{
		__LIB_0__::func_915(joaat("WEAPON_REVOLVER_DOUBLEACTION"));
		if (func_1043(joaat("WEAPON_REVOLVER_DOUBLEACTION"), 0, 0, 0, 0, 0, 752097756, 0))
		{
			Var1 = { __LIB_1__::func_605() };
		}
	}
	if (INVENTORY::_0xB881CA836CC4B6D4(&Var1))
	{
		func_1813(joaat("COMPONENT_REVOLVER_DOUBLEACTION_GRIP_PEARL"), Var1, 1423542233);
		func_1813(joaat("COMPONENT_REVOLVER_DOUBLEACTION_BARREL_LONG"), Var1, -1264898804);
		func_1813(joaat("COMPONENT_SHORTARM_BARREL_MATERIAL_7"), Var1, 1592019450);
		func_1813(joaat("COMPONENT_SHORTARM_CYLINDER_MATERIAL_7"), Var1, 1117400455);
		func_1813(joaat("COMPONENT_SHORTARM_HAMMER_MATERIAL_7"), Var1, 1150213537);
		func_1813(joaat("COMPONENT_SHORTARM_SIGHT_MATERIAL_7"), Var1, 1598825281);
		func_1813(joaat("COMPONENT_SHORTARM_TRIGGER_MATERIAL_7"), Var1, -712527121);
		func_1813(joaat("COMPONENT_SHORTARM_FRAME_ENGRAVING_1"), Var1, 454332195);
		func_1813(joaat("COMPONENT_SHORTARM_FRAME_MATERIAL_7"), Var1, 256105670);
		func_1813(joaat("COMPONENT_SHORTARM_FRAME_ENGRAVING_MATERIAL_7"), Var1, -1328061889);
		func_1813(joaat("COMPONENT_SHORTARM_BARREL_ENGRAVING_1"), Var1, -782241404);
		func_1813(joaat("COMPONENT_SHORTARM_BARREL_ENGRAVING_MATERIAL_7"), Var1, 1669853467);
		func_1813(joaat("COMPONENT_SHORTARM_CYLINDER_ENGRAVING_1"), Var1, -1559225678);
		func_1813(joaat("COMPONENT_SHORTARM_CYLINDER_ENGRAVING_MATERIAL_7"), Var1, -266425508);
		if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1) && !__LIB_0__::func_91())
		{
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar15, false, 2, false);
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar16, false, 0, false);
			if (__LIB_0__::func_154(iVar16))
			{
				if (iVar16 != joaat("WEAPON_REVOLVER_DOUBLEACTION"))
				{
					if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar16))
					{
						if (__LIB_0__::func_293(24))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar16, true, 3, false, false);
						}
						WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_DOUBLEACTION"), true, 0, false, false);
					}
					else if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar16))
					{
						if ((__LIB_0__::func_293(24) && __LIB_0__::func_154(iVar15)) && iVar15 != joaat("WEAPON_REVOLVER_DOUBLEACTION"))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar15, true, 3, false, false);
						}
						WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_DOUBLEACTION"), true, 2, false, false);
					}
				}
			}
			else if (!__LIB_0__::func_154(iVar15))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_DOUBLEACTION"), true, 2, false, false);
			}
			else if (iVar15 != joaat("WEAPON_REVOLVER_DOUBLEACTION"))
			{
				if (__LIB_0__::func_293(24))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar15, true, 3, false, false);
				}
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_DOUBLEACTION"), true, 2, false, false);
			}
		}
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_CROSS_PROMOTION_REVOLVER_REDEEMED"), true);
	}
}

int func_1352(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			func_1352(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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
	else if (!func_1815(iParam0, iParam1, iParam3, bParam2, bParam4))
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

void func_1354(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	switch (__LIB_0__::func_357(iParam0))
	{
		case -2061583405:
			bVar0 = func_1817(iParam0, &(Global_1946804.f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_1817(iParam0, &(Global_1946804.f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_1817(iParam0, &(Global_1946804.f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_1817(iParam0, &(Global_1946804.f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_1817(iParam0, &(Global_1946804.f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_1817(iParam0, &(Global_1946804.f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		__LIB_0__::func_460();
	}
	if (bParam1)
	{
		__LIB_0__::func_719(0, 0);
	}
}

int func_1355(int iParam0)
{
	struct<5> Var0;
	Var0 = { func_1365(iParam0, 1, 0) };
	return __LIB_0__::func_709(Var0.f_4);
}

struct<5> func_1365(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<10> Var27;
	Var0 = { __LIB_0__::func_949(bParam1) };
	Var0.f_4 = 1084182731;
	switch (__LIB_0__::func_356(iParam0))
	{
		case joaat("CLOTHING"):
			if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, 1034665895))
			{
				Var0 = { __LIB_0__::func_429(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case joaat("WEAPON"):
			Var0 = { __LIB_1__::func_117(bParam1) };
			if (bParam2 && __LIB_0__::func_950(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_1533(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_1533(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (__LIB_1__::func_429(iParam0, &Var5, 1728382685 /* GXTEntry: "Right" */))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
			}
			else
			{
				Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
			}
			break;
		case joaat("HORSE"):
			Var0.f_4 = 1782082944;
			break;
		case joaat("EMOTE"):
			Var0.f_4 = -813824107;
			Var0 = { __LIB_1__::func_118(bParam1) };
			switch (__LIB_0__::func_357(iParam0))
			{
				case 664784405:
					Var0.f_4 = -1150938404;
					break;
				case 2020212423:
					Var0.f_4 = -1756997214;
					break;
				case 874188557:
					Var0.f_4 = -241855024;
					break;
				case -2101244071:
					Var0.f_4 = -268116367;
					break;
			}
			break;
		case joaat("UPGRADE"):
			if (__LIB_0__::func_793(iParam0, -1823706425))
			{
				Var0 = { __LIB_0__::func_429(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("KIT_CAMP"));
			}
			else if (__LIB_0__::func_793(iParam0, -1483207246))
			{
				Var0 = { __LIB_0__::func_429(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
		default:
			if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, 1084182731))
			{
				Var0.f_4 = 1084182731;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, 1034665895))
			{
				Var0.f_4 = 1034665895;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -833319691))
			{
				Var27.f_9 = -1591664384;
				if (!__LIB_0__::func_464(Var0, &Var27, bParam1, 0))
				{
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var27.f_5 };
					Var0.f_4 = -833319691;
				}
			}
			else
			{
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("CHARACTER"));
				if (Var0.f_4 == 0)
				{
				}
			}
			break;
	}
	return Var0;
}

int func_1385(var uParam0, var uParam1, var uParam2, var uParam3)
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
		*uParam2 = (*uParam2 + iVar2);
		return 0;
	}
	iVar3 = 1;
	__LIB_0__::func_794(iVar0, iVar1, &iVar3, 0);
	iVar4 = (iVar2 * iVar3);
	if (__LIB_0__::func_192(iVar0, 58855631))
	{
		iVar4 = iVar2;
	}
	Var5 = { func_1365(iVar0, 0, 1) };
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
	iVar11 = (func_1847(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_952(iVar11))
	{
		*uParam2 = (*uParam2 + iVar2);
		return 0;
	}
	if (!func_828(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*uParam2 = (*uParam2 + iVar2);
		return 0;
	}
	__LIB_1__::func_432(iVar11, 0, 0, 0, 1);
	*uParam3 = (*uParam3 + iVar11);
	*uParam1 = (*uParam1 + iVar2);
	return 1;
}

int func_1399()
{
	if (__LIB_0__::func_28())
	{
		if (!__LIB_1__::func_185(3))
		{
			return __LIB_0__::func_559(43);
		}
		if (__LIB_1__::func_185(38) && !__LIB_1__::func_185(43))
		{
			return func_1855(8);
		}
	}
	return 0;
}

bool func_1400(int iParam0)
{
	if (!__LIB_0__::func_20(iParam0))
	{
		return false;
	}
	return ((Global_1888801[iParam0 /*35*/].f_20 == 1 || Global_1888801[iParam0 /*35*/].f_20 == 2) && !func_1856(iParam0));
}

void func_1429(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar5;
	var uVar6;
	var uVar7;
	if (func_214(iParam0, uParam1))
	{
		if (func_473(iParam0, &iVar0, &uVar1, &uVar2, &uVar5, &uVar6, &uVar7))
		{
			if (iVar0 != -1)
			{
				if (__LIB_0__::func_866(iVar0, 0))
				{
					__LIB_1__::func_640(iVar0);
				}
				if (__LIB_1__::func_22(iVar0))
				{
					__LIB_1__::func_774(iVar0, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
				}
			}
			else if (bParam2)
			{
				PED::DELETE_PED(uParam1[iParam0]);
			}
			else
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam1[iParam0]);
			}
		}
	}
}

void func_1430(int iParam0, var uParam1)
{
	if (func_645(iParam0, uParam1))
	{
		VOLUME::_DELETE_VOLUME(uParam1->f_27[iParam0]);
	}
}

void func_1431(int iParam0, var uParam1)
{
	if (func_1880(iParam0, uParam1))
	{
		MAP::REMOVE_BLIP(&(uParam1->f_40[iParam0]));
	}
}

void func_1432(int iParam0, var uParam1)
{
	if (func_1022(iParam0, uParam1))
	{
		__LIB_2__::func_353(&(uParam1->f_46[iParam0]), 1);
		uParam1->f_46[iParam0] = -1;
	}
}

void func_1433(int iParam0, var uParam1)
{
	if (func_664(iParam0, uParam1))
	{
		__LIB_3__::func_319(uParam1->f_54[iParam0]);
	}
}

int func_1532(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 1782082944;
		case 1:
			return 1704602624;
		case 2:
			return 1214181762;
		case 3:
			return -430578371;
		case 4:
			return -730381952;
		case 5:
			return -253503777;
		case 6:
			return 1352275534;
		case 7:
			return 1666399168;
		case 8:
			return -1911121386;
			return 1756656691;
			return -1774867076;
			return -421952220;
			return -1087003323;
			return 1231618917;
			return -1183777174;
			return -841767082;
			return 1043717005;
			return 142663787;
			return 1718143051;
			return -6605744;
			return 953047564;
			return 769706682;
			return 1635590003;
			return -2047978619;
			return -586319254;
			return 249896112;
			return -1060513333;
			return 1317351007;
			return -500478573;
			return -806573802;
			return -1109949204;
			return -740156546;
			return -684532710;
			return 1158805436;
			return -559473670;
			return -797147251;
			return -382216265;
			return 1419177114;
			return 1704297235;
			return -1139016418;
			return 897705377;
			return 17961769;
			return 205582207;
			return 900740963;
			return -1369589344;
			return -1695823795;
			return -41453074;
			return 539767227;
			return 1210490314;
			return -399684751;
			return 2138893455;
			return -1617010487;
			return -832377028;
			return -428040245;
			return 1279288897;
			return -594897905;
			return -1360459240;
			return 1838428396;
			return -1467846997;
			return -490610263;
			return -1885413079;
			return 708884155;
			return -134459952;
			return -1912136700;
			return -1268031552;
			return 1177953227;
			return 2130805296;
			return 38093490;
			return -269153218;
			return -1995068011;
			return -164284834;
			return 1446463345;
			return 1501315823;
			return -750379482;
			return -929560937;
			return 608323241;
			return 1030796013;
			return 1915057434;
			return -1582276476;
			return 692059311;
			return 2062839241;
			return -1884531872;
			return -866434534;
			return -1252192421;
			return 1243288963;
			return -1953772189;
			return 754411745;
			return 545309006;
			return -1089810811;
			return 1957869400;
			return -241412332;
			return -1548010959;
			return 550150488;
			return 946565453;
			return 434443248;
			return -1709914938;
			return 366686112;
			return -1370063350;
			return 2126829550;
			return 226552910;
			return 721193431;
			return -315672460;
			return 623544501;
			return 259556714;
			return -2125361825;
			return 1078230356;
			return 1885364811;
			return 1630382737;
			return 1738245512;
			return 1540262216;
			return 1016871472;
			return 13829069;
			return 737051352;
			return 1734614610;
			return -208715295;
			return 1435062936;
			return 1483055553;
			return 380335002;
			return -1079385677;
			return 676610411;
			return 2145419552;
			return 657238733;
			return 1850579281;
			return -1923957384;
			return -1142828108;
			return -1400618531;
			return -1433857135;
			return 209987206;
			return 1686943047;
			return -59178517;
			return 2134884601;
			return 651707517;
			return -633788535;
			return 116394463;
			return -1196973875;
			return 801752086;
			return 184475332;
			return -1880922659;
			return -898138634;
			return -2107418444;
			return -679970099;
			return -1531392549;
			return 1612483376;
			return 463930900;
			return -632148238;
			return 55303249;
			return 2108322089;
			return -1358896714;
			return 74475632;
			return -28710953;
			return -1791599168;
			return 1605938169;
			return 1255242276;
			return 636467727;
			return -1567688525;
			return -77886679;
			return -1057900679;
			return -1960888134;
			return -1719717295;
			return -1779244911;
			return -670540863;
			return 223362311;
			return 1150824567;
			return 974471191;
			return 1989683968;
			return 254804477;
			return 192057609;
			return 1553957817;
			return 2099829015;
			return -840300007 /* GXTEntry: "Extremely durable, hand tooled Off-Hand Holster with elaborate rattlesnake and sk" +
    "ull decoration." */;
			return -1948423372;
			return 981083654;
			return 1283289876;
			return -606884489;
			return -100418572;
			return 663645231;
			return 1442217033;
			return 1410986244;
			return 847409839;
			return 923926911;
			return 109995826;
			return -747412737;
			return 1114341727;
			return -539456939;
			return 45887121;
			return 913271624;
			return -1652812715;
			return -1791365775;
			return -979299941;
			return 713062001;
			return -575045963;
			return 1852965262;
			return -1398836354;
			return -1829885298;
			return -1773850357;
			return -564258009;
			return 2016532685;
			return -1070563798;
			return -1619221343;
			return -345571691;
			return 544288390;
			return 159578294;
			return -76852849;
			return 1110295244;
			return 2104563477;
			return 1947827651;
			return -933072766;
			return 2104388648;
			return -1677140601;
			return -2133097881;
			return -826678792;
			return -513522325;
			return 1970588249;
			return -2080032591;
			return 1758847745;
			return 895010282;
			return -511891179;
			return -1207567168;
			return -1315407613;
			return 1786352060;
			return -833319691;
			return 1591329969;
			return 2123222014;
			return -1578397674;
			return 1473261684;
			return -241855024;
			return 12999093;
			return -6796437;
			return -268116367;
			return -636470867;
			return 1737668280;
			return 892807236;
			return -733247890;
			return 24047176;
			return -1561999014;
			return -2052774042;
			return joaat("SLOTID_HORSE_BEDROLL");
			return joaat("SLOTID_HORSE_BLANKET");
			return joaat("SLOTID_HORSE_CANTLE");
			return joaat("SLOTID_HORSE_FENDER");
			return joaat("SLOTID_HORSE_HORN");
			return joaat("SLOTID_HORSE_INSURANCE");
			return 802754820;
			return joaat("SLOTID_HORSE_MANE");
			return -1886147520;
			return joaat("SLOTID_HORSE_REINS");
			return joaat("SLOTID_HORSE_SADDLE");
			return 1221327846;
			return 923162715;
			return 625423581;
			return 326668608;
			return 669530755;
			return 429759982;
			return -2111934838;
			return 1886178087;
			return 1587783573;
			return -279722001;
			return joaat("SLOTID_HORSE_SADDLEBAG");
			return 724026534;
			return joaat("SLOTID_HORSE_SEAT");
			return joaat("SLOTID_HORSE_SEX");
			return joaat("SLOTID_HORSE_SKIRT");
			return -1824203570;
			return -1654197998;
			return 798987653;
			return 976923323;
			return 1167442289;
			return joaat("SLOTID_HORSE_STIRRUP");
			return joaat("SLOTID_HORSE_TAIL");
			return -2015960939;
			return 1132377945;
			return 739936401;
			return 1201880974;
			return 819728896;
			return 1746010219;
			return 1433393959;
			return -1287636759;
			return -706917073;
			return -2166805;
			return -1391602433;
			return 1782075221;
			return 1282544585;
			return 1732594027;
			return -1058817012;
			return 1090546265;
			return -1783120823;
			return -1535745896;
			return -2086922122;
			return -1675198649;
			return 1189497682;
			return -1565675519;
			return -268973591;
			return 1039159916;
			return 1111816631;
			return 405591388;
			return 897456793;
			return 104187473;
			return 773808542;
			return -1120669954;
			return -1389278274;
			return 552979403;
			return -1571578784;
			return -708312114;
			return 688823508;
			return -1622147240;
			return 830292162;
			return 226276782;
			return -678416628;
			return -1098528034;
			return 316207340;
			return -1909200748;
			return -939652363;
			return joaat("SLOTID_PROGRESSION");
			return -375447933;
			return 537014919;
			return 1784584921;
			return -140655024;
			return 1084182731;
			return -1045471300;
			return 1617414719;
			return -787761753;
			return -490616606;
			return 1491346514;
			return -1360128126;
			return -1311702610;
			return -904250715;
			return 1034665895;
			return -101524555;
			return 1419152594;
			return -451359317;
			return -1915385310;
			return 1315162488;
			return -361152079;
			return -2041626192;
			return -2077812539;
			return -1371514637;
			return 1730017037;
			return 892816668;
			return -1994943603;
			return 603133554;
			return -30160144;
			return -1248299493;
			return 727393558;
			return 755611221;
			return -170255458;
			return 1011151573;
			return 1122339631;
			return 454815308;
			return 990701735;
			return -246340825;
			return -1410671073;
			return 1547608292;
			return -714132970;
			return 732290690;
			return 971340545;
			return -234132662;
			return -2143057988;
			return -993947465;
			return -486552269;
			return -1156317860;
			return 1229625803;
			return -388596167;
			return -1204639465;
			return -1384685096;
			return -2026728113;
			return -1228057307;
			return 1835126290;
			return 1890833594;
			return -751549960;
			return -1682270750;
			return -1839865333;
			return -1990383629;
			return 1712094016;
			return 1532953697;
			return 1620318083;
			return -307230331;
			return -1034549620;
			return -1293064293;
			return -1540142553;
			return -1769886012;
			return -1983081126;
			return -1106117124;
			return -1873108338;
			return -2097543219;
			return 155413195;
			return -1162387149;
			return 1728382685 /* GXTEntry: "Right" */;
			return -649335959 /* GXTEntry: "Left" */;
			return -1876502240;
			return -2107032155;
			return 1570861011;
			return 1075981185;
			return 960195961;
			return 1150460649;
			return 1689424794;
			return 619103418;
			return 1355448197;
			return 1681762005;
			return 1026887814;
			return 354352628;
			return 1519366642;
			return -82757515;
			return 386306655;
			return 1243962119;
			return 756214903;
			return -718417579;
			return -1445516411;
			return 1232060796;
			return -672392892;
			return 1465341584;
			return -427758369;
			return -735647142;
			return 1535838048;
			return -602272282;
			return 2051264661;
			return 487172188;
			return 282270687;
			return 1607708943;
			return 1686264939;
			return 314786149;
			return 1402841185;
			return 1099170772;
			return 2125676786;
			return -363896735;
			return -468790222;
			return -1779133048;
			return 1732537631;
			return 1755095401;
			return 835771095;
			return 1963317232;
			return 259627919;
			return 1299075397;
			return -1509094230;
			return 61132362;
			return 1549741908;
			return 288484254;
			return -1877032947;
			return -1395676456;
			return 1136146715;
			return 468034421;
			return 1079459546;
			return -140369351;
			return 1822341990;
			return 1219701681;
			return 1601295268;
			return -1692460667;
			return 1471419228;
			return 907446160;
			return -1126482585;
			return 1911050315;
			return -1343525599;
			return 1261891225;
			return 763162704;
			return 1335861197;
			return 526744654;
			return -1177461517;
			return -241638635;
			return 1024262875;
			return 853355463;
			return -337288221;
			return 361381308;
			return -1264898804;
			return -585289073;
			return 1423542233;
			return -948489286;
			return 2063859257;
			return -1652627327;
			return -1959697839;
			return -1532267859;
			return -1410062763;
			return -901428716;
			return -1628873469;
			return 144855571;
			return -617589883;
			return -1306457086;
			return 1713542477;
			return -305542365;
			return 1985390213;
			return -2145069367;
			return -1674390752;
			return -2117214398;
			return 1880805647;
			return -62390436;
			return 1815288415;
			return 196214097;
			return -201958220;
			return 244353594;
			return 302954672;
			return -1870144662;
			return 257892944;
			return -607182722;
			return -13254502;
			return 1400281261;
			return 1601515402;
			return -940704970;
			return -548371721;
			return -1022384613;
			return -357406394;
			return 1077068189;
			return -782241404;
			return 1669853467;
			return 1592019450;
			return 635273153;
			return -1559225678;
			return -266425508;
			return 1117400455;
			return 454332195;
			return -1328061889;
			return 561650932;
			return 256105670;
			return 1976779618;
			return -269095126;
			return 2145617267;
			return 1150213537;
			return 1598825281;
			return -712527121;
			return 1308553072;
			return 852866398;
			return -1794417972;
			return 293062146;
			return 95360094;
			return 807631773;
			return 1603958275;
			return 860052020;
			return -1885979781;
			return 746147970;
			return 666663006;
			return -2096186453;
			return 859409444;
			return -671427187;
			return 100192478;
			return 307812616;
			return 1670843243;
			return 899615863;
			return -298901850;
			return 1379186917;
			return -817206030;
			return -1150323212;
			return -247466821;
			return 427124242;
			return 855418120;
			return -777015093;
			return -722462870;
			return -937454324;
			return -339438116;
			return 2135639035;
			return 1254273765;
			return -792172668;
			return 1905987493;
			return 495693044;
			return -1693422950;
			return -205873076;
			return -2143114654;
			return -1420574021;
			return -1959250381;
			return -1088328663;
			return 513602003;
			return 359221401;
			return 1005272;
			return 1583044470;
			return 348853959;
			return 1045621973;
			return 1084576580;
			return 1651573695;
			return 1463321587;
			return -997505963;
			return -1649851713;
			return -386012962;
			return 1386101789;
			return 1227915917;
			return -218846335;
			return -352578118;
			return 1426626782;
			return -714081520;
			return 74547781;
			return 1271463052;
			return 1983140194;
			return 677262775;
			return -832337898;
			return -319249747;
			return -16955722;
			return -1535425646;
			return -1063641743;
			return -1041133401;
			return 1380479304;
			return 600890828;
			return 733333190;
			return 1843035435;
			return -304127320;
			return 122470371;
			return 0;
			return -1591664384;
			return -673000374;
			return -1150938404;
			return -1756997214;
			return -813824107;
			if (iParam1 >= 1)
			{
			}
			return StackVal;
			if (iParam1 >= 1)
			{
			}
			return StackVal;
		}
bool func_1533(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return __LIB_0__::func_800(iParam0, *uParam1, iParam2, bParam3) > 0;
}

void func_1594()
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
			func_611(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		}
		else
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		}
		return;
	}
	iVar0 = func_2009(6291456, 0);
	if (__LIB_0__::func_154(iVar0))
	{
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, true))
		{
			func_611(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		}
		else
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		}
	}
}

bool func_1613(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	__LIB_0__::func_191();
	if (iParam2 == 39)
	{
		Var0 = { func_1365(iParam0, 1, 0) };
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
	__LIB_1__::func_455(&(Global_1946804.f_1378), iParam0, iParam2, bParam4, 1);
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

bool func_1720(int iParam0)
{
	var uVar0;
	if (__LIB_0__::func_2() != -1)
	{
		return false;
	}
	if (__LIB_0__::func_774(iParam0, 1048576))
	{
		return false;
	}
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return func_1725(iParam0, &uVar0, 1, 0, 0);
	}
	return __LIB_1__::func_707(iParam0, 1, 0);
}

bool func_1725(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<4> Var0;
	struct<10> Var4;
	var uVar26;
	int iVar27;
	int iVar28;
	__LIB_0__::func_799(&iParam0);
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	if (!__LIB_0__::func_708(0))
	{
		bParam3 = true;
	}
	if (__LIB_0__::func_787(iParam0) && WEAPON::_0x705BE297EEBDB95D(iParam0))
	{
		if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
		{
			Var0 = { __LIB_1__::func_117(0) };
			Var4.f_9 = -1591664384;
			if (!func_1533(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
			{
				return false;
			}
			else if (__LIB_1__::func_429(iParam0, &Var4, 1728382685 /* GXTEntry: "Right" */))
			{
				return false;
			}
			if (__LIB_0__::func_950(iParam0, 1))
			{
				if (!func_1533(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
				{
					return false;
				}
				else if (__LIB_1__::func_429(iParam0, &Var4, -649335959 /* GXTEntry: "Left" */))
				{
					return false;
				}
			}
		}
		else if (!func_2054(iParam0, &uVar26, 0))
		{
			return false;
		}
		return true;
	}
	iVar27 = __LIB_0__::func_936(iParam0, uParam1, bParam3, bParam4);
	if (iVar27 < 0)
	{
		return false;
	}
	else if (iVar27 == 0)
	{
		return true;
	}
	if (bParam3)
	{
		iVar28 = __LIB_0__::func_800(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = INVENTORY::_0xE787F05DFC977BDE(__LIB_0__::func_162(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return true;
	}
	return false;
}

void func_1744(int iParam0)
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
						func_1330(iVar0, 1, 752097756);
					}
					func_1154(Global_35, iVar0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(1013902307, 1, 0))
				{
					func_1330(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(1013902307, 1, 0))
				{
					func_1330(1013902307, 1, 752097756);
				}
				if (!__LIB_1__::func_707(142640135, 1, 0))
				{
					func_1330(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(786809402, 1, 0))
				{
					func_1330(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(786809402, 1, 0))
				{
					func_1330(786809402, 1, 752097756);
				}
				if (!__LIB_1__::func_707(-518019409, 1, 0))
				{
					func_1330(-518019409, 1, 752097756);
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
			func_2091();
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

bool func_1749(int iParam0, int iParam1, var uParam2)
{
	var uVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	if (!__LIB_0__::func_144(iParam1, 0))
	{
		return false;
	}
	if (__LIB_0__::func_356(iParam1) != joaat("CLOTHING"))
	{
		return false;
	}
	bVar1 = __LIB_0__::func_2() != -1;
	iVar2 = PED::_GET_METAPED_TYPE(iParam0);
	if (__LIB_0__::func_357(iParam1) == -999503751)
	{
		return true;
	}
	iVar4 = func_1355(iParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return false;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (__LIB_0__::func_192(iParam1, 866047851))
	{
		iVar5 = __LIB_0__::func_161(iVar4, 1);
		if (__LIB_0__::func_545(&(Global_1946804.f_1497)) >= 2 && Global_1946804.f_1497.f_1[iVar5 /*3*/] != iVar8)
		{
			*uParam2 = -265166256; /* GXTEntry: "You are wearing too many of this item. Remove some before equipping more." */
			return false;
		}
		bVar7 = true;
	}
	switch (iVar4)
	{
		case 1742327865:
			if (PED::_GET_PED_COMPONENT_CATEGORY(iVar8, iVar2, bVar1) == joaat("NECKTIES") && PED::_IS_METAPED_USING_COMPONENT(iParam0, -1455751347))
			{
				*uParam2 = 111371848; /* GXTEntry: "Your shirt does not support this type of neckwear." */
				return false;
			}
			iVar5 = 10;
			iVar3 = __LIB_0__::func_357(Global_1946804.f_1497.f_1[iVar5 /*3*/]);
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = -1938792745; /* GXTEntry: "Your neckwear does not allow for changing your collar." */
				return false;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (Global_1946804.f_1497.f_1[iVar5 /*3*/] != Global_1946804.f_57[iVar5 /*11*/] && __LIB_0__::func_192(iParam1, -1638171711))
			{
				*uParam2 = 187275271; /* GXTEntry: "Your chaps do not support this." */
				return false;
			}
			break;
		case 1900541263:
			iVar5 = 36;
			if (Global_1946804.f_1497.f_1[iVar5 /*3*/] == Global_1946804.f_57[iVar5 /*11*/])
			{
				*uParam2 = 2143522536;
				return false;
			}
			if (PED::_IS_METAPED_USING_COMPONENT(iParam0, -1968556728))
			{
				*uParam2 = -849690042; /* GXTEntry: "Your boots do not support having spurs." */
				return false;
			}
			break;
		case -1505978566:
			if (__LIB_1__::func_549(1868067663, &uVar0))
			{
				*uParam2 = 939463734; /* GXTEntry: "Item cannot be worn with coats." */
				return false;
			}
		case -1130865351:
		case -426430150:
		case 1788623170:
			if (!bVar7)
			{
			}
			else
			{
				iVar11 = PED::_GET_NUM_COMPONENTS_IN_PED(iParam0);
				iVar10 = __LIB_0__::func_546(iVar8, iVar4, iVar2, bVar1);
				iVar9 = __LIB_0__::func_546(Global_1946804.f_1497.f_1[iVar5 /*3*/], iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763; /* GXTEntry: "You are wearing too many items. Something must be removed to preview other items." +
    "" */
					return false;
				}
				Jump @776; //curOff = 583
				iVar3 = __LIB_0__::func_357(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != Global_1946804.f_57[iVar6 /*11*/] && __LIB_0__::func_192(Global_1946804.f_1497.f_1[iVar5 /*3*/], -1638171711))
				{
					*uParam2 = -357399012; /* GXTEntry: "Your boots do not support this." */
					return false;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (iParam1 != Global_1946804.f_57[iVar6 /*11*/] && __LIB_0__::func_218(Global_1946804.f_1497.f_1[iVar5 /*3*/]))
					{
						*uParam2 = -357399012; /* GXTEntry: "Your boots do not support this." */
						return false;
					}
					if (Global_1946804.f_1497.f_1[iVar5 /*3*/] == Global_1946804.f_57[iVar5 /*11*/])
					{
						*uParam2 = 2143522536;
						return false;
					}
				}
			}
			*uParam2 = 0;
			return true;
			default:
				break;
	}
}

bool func_1785(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!__LIB_0__::func_144(iParam0, 0))
	{
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam2))
	{
		return false;
	}
	if (func_1725(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return false;
	}
	if (!__LIB_0__::func_708(0))
	{
		return false;
	}
	if (!INVENTORY::_0xCB5D11F9508A928D(__LIB_0__::func_162(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

void func_1793(int iParam0, int iParam1)
{
	if (__LIB_0__::func_192(iParam1, 130796156))
	{
		func_2115(iParam1, 0);
	}
	else if (__LIB_0__::func_192(iParam1, 930141731))
	{
		func_2115(iParam1, 1);
		func_2116(iParam0);
	}
}

void func_1805(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (bParam0)
	{
		func_828(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_828(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_828(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_1806();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_2121(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_831(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_1352(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_2126(Var0);
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
				func_2135(iVar6, iVar10);
			}
			iVar6++;
		}
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), false);
	}
}

int func_1806()
{
	if (!func_2136(-1898635967, __LIB_1__::func_124(), 1))
	{
		return 0;
	}
	if (__LIB_0__::func_26())
	{
		if (!func_2136(146323340, __LIB_1__::func_124(), 0))
		{
			return 0;
		}
	}
	return 1;
}

void func_1808(bool bParam0)
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
		func_828(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_828(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_828(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_828(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_828(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_828(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_828(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_828(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_828(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_828(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_828(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_1352(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_1352(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_1352(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_1352(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_1352(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_1352(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_1352(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_1352(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_1352(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_1352(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_1352(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
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
				func_2135(iVar0, iVar4);
			}
			iVar0++;
		}
		func_1806();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), false);
	}
}

void func_1813(int iParam0, struct<4> Param1, int iParam5)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<4> Var19;
	Var0 = { Param1 };
	Var0.f_4 = iParam5;
	Var5.f_9 = -1591664384;
	if (__LIB_0__::func_814(Param1, iParam5, &Var5, 0))
	{
		__LIB_0__::func_939(Var5.f_4, &Var5, &Var0, -1, -142743235, 1, 0);
	}
	func_1785(iParam0, &Var19, &Var0, 1, 752097756, 0);
	__LIB_1__::func_556(Var19, 1);
}

bool func_1815(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	struct<4> Var5;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_1365(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return __LIB_0__::func_975(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { __LIB_0__::func_429(iParam0, Var0, Var0.f_4, bParam4) };
	return __LIB_0__::func_939(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

int func_1817(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	iVar1 = iParam0;
	if (!__LIB_0__::func_554(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804.f_2657.f_19 == 1)
	{
		Global_1946804.f_2657.f_19 = 0;
		*uParam1 = 0;
		if (__LIB_0__::func_357(iParam0) != -999503751)
		{
			__LIB_1__::func_459(&(Global_1946804.f_2657.f_26), 0, Global_1946804.f_2657.f_19);
		}
		Global_1946804.f_2657[0] = 0;
		return 1;
	}
	Global_1946804.f_2657.f_19 = (Global_1946804.f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804.f_2657[iVar0] = Global_1946804.f_2657[Global_1946804.f_2657.f_19];
	Global_1946804.f_2657[Global_1946804.f_2657.f_19] = 0;
	if (__LIB_0__::func_357(iParam0) != -999503751)
	{
		__LIB_1__::func_459(&(Global_1946804.f_2657.f_26), iVar0, Global_1946804.f_2657.f_19);
	}
	func_2144(iParam0, 1);
	return 1;
}

int func_1847(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
							iVar49 = (iVar49 + func_1847(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1847(iVar63, -915411861, 1, 0, 0));
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

int func_1855(int iParam0)
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
			Jump @9446; //curOff = 6716
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
			Jump @9446; //curOff = 7288
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
			Jump @9446; //curOff = 7860
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GAPTOOTH_RIDGE");
			VOLUME::_0x39816F6F94F385AD(iVar0, -5420f, -3447.5f, 150f, 0f, 0f, 175f, 300f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5837.5f, -3530f, 150f, 0f, 0f, -32f, 1000f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -6142.5f, -3665f, 150f, 0f, 0f, -8f, 800f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5747.5f, -2905f, 150f, 0f, 0f, 136.5f, 1300f, 750f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5407.5f, -2487.5f, 150f, 0f, 0f, -148f, 550f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5232.5f, -2825f, 150f, 0f, 0f, -178f, 400f, 530f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5667.5f, -2040f, 150f, 0f, 0f, 175f, 1100f, 800f, 700f);
			Jump @9446; //curOff = 8174
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
			Jump @9446; //curOff = 8875
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
bool func_1856(int iParam0)
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

bool func_1880(int iParam0, var uParam1)
{
	return (func_2160(iParam0) && MAP::DOES_BLIP_EXIST(uParam1->f_40[iParam0]));
}

int func_2009(int iParam0, int iParam1)
{
	var uVar0;
	return func_2224(&uVar0, iParam0, iParam1);
}

bool func_2054(int iParam0, var uParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	bool bVar28;
	int iVar29;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	Var0 = { func_1365(iParam0, 0, 1) };
	iVar5 = 1728382685; /* GXTEntry: "Right" */
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_1532((386 + iVar29), 1);
		if (func_1533(iParam0, &Var0, iVar5, 0))
		{
			bVar28 = __LIB_1__::func_429(iParam0, &Var6, iVar5);
			if ((bParam2 && bVar28) || !bVar28)
			{
				*uParam1 = iVar5;
				return true;
			}
		}
		iVar29++;
	}
	return false;
}

void func_2091()
{
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS")))
	{
		func_2262();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS"), true);
		__LIB_0__::func_915(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"));
		func_1330(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), true, 2, false, false);
		__LIB_0__::func_915(joaat("WEAPON_MELEE_KNIFE_JOHN"));
		func_1330(joaat("WEAPON_MELEE_KNIFE_JOHN"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_MELEE_KNIFE_JOHN"), true, 4, false, false);
	}
}

void func_2115(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = __LIB_1__::func_134(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_1283(50);
			}
			else
			{
				func_1283(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_1283(51);
			}
			else
			{
				func_1283(49);
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
			func_1283(24);
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

void func_2116(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (__LIB_1__::func_771(0))
			{
				iVar0++;
			}
			if (__LIB_1__::func_771(2))
			{
				iVar0++;
			}
			if (__LIB_1__::func_771(4))
			{
				iVar0++;
			}
			if (!__LIB_0__::func_605(16))
			{
				if (iVar0 == 1)
				{
					func_2271();
					__LIB_1__::func_240(456, 1);
					__LIB_0__::func_606(16);
				}
			}
			if (!__LIB_0__::func_605(32))
			{
				if (iVar0 >= 3)
				{
					func_2271();
					__LIB_1__::func_240(456, 1);
					__LIB_0__::func_606(32);
				}
			}
			break;
		case 1:
		case 3:
		case 7:
			if (__LIB_1__::func_771(1))
			{
				iVar0++;
			}
			if (__LIB_1__::func_771(3))
			{
				iVar0++;
			}
			if (__LIB_1__::func_771(7))
			{
				iVar0++;
			}
			if (!__LIB_0__::func_605(1))
			{
				if (iVar0 == 1)
				{
					func_2273();
					__LIB_1__::func_240(457, 1);
					__LIB_0__::func_606(1);
				}
			}
			if (!__LIB_0__::func_605(2))
			{
				if (iVar0 >= 3)
				{
					func_2273();
					__LIB_1__::func_240(457, 1);
					__LIB_0__::func_606(2);
				}
			}
			break;
		case 5:
		case 6:
		case 8:
			if (__LIB_1__::func_771(5))
			{
				iVar0++;
			}
			if (__LIB_1__::func_771(6))
			{
				iVar0++;
			}
			if (__LIB_1__::func_771(8))
			{
				iVar0++;
			}
			if (!__LIB_0__::func_605(4))
			{
				if (iVar0 == 1)
				{
					func_2274();
					__LIB_1__::func_240(455, 1);
					__LIB_0__::func_606(4);
				}
			}
			if (!__LIB_0__::func_605(8))
			{
				if (iVar0 >= 3)
				{
					func_2274();
					__LIB_1__::func_240(455, 1);
					__LIB_0__::func_606(8);
				}
			}
			break;
	}
}

void func_2121(int iParam0)
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
	func_1352(iParam0, 1, 1, -142743235, 1);
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
	func_1354(iParam0, 1, 1);
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		func_1352(uVar18[iVar36], 1, 1, -142743235, 1);
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
		func_1354(uVar18[iVar36], 1, 1);
		iVar0[iVar36] = __LIB_0__::func_161(func_1355(uVar18[iVar36]), 1);
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
				func_1354(__LIB_0__::func_998(iVar35), 1, 1);
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

void func_2126(struct<6> Param0)
{
	if (!func_2296(Param0.f_4, 1))
	{
	}
	if (!func_2296(Param0, 1))
	{
	}
	if (!func_2296(Param0.f_2, 1))
	{
	}
	if (!func_2296(Param0.f_5, 1))
	{
	}
	if (!func_2296(Param0.f_3, 1))
	{
	}
	if (!func_2296(Param0.f_1, 1))
	{
	}
}

int func_2135(int iParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;
	var uVar6;
	if (!__LIB_0__::func_144(iParam1, 0))
	{
		return 0;
	}
	if (!__LIB_0__::func_831(iParam1))
	{
		return 0;
	}
	if (__LIB_1__::func_127(iParam0))
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_577(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { __LIB_0__::func_949(0) };
	Var1.f_4 = iVar0;
	if (!func_1785(iParam1, &uVar6, &Var1, 1, 752097756, 0))
	{
		return 0;
	}
	return 1;
}

bool func_2136(int iParam0, struct<4> Param1, bool bParam5)
{
	int iVar0;
	var uVar1;
	struct<2> Var3;
	struct<4> Var7;
	int iVar11;
	struct<5> Var12;
	if (iParam0 == 0)
	{
		return false;
	}
	uVar1 = 1;
	iVar11 = ITEMDATABASE::_ITEM_DATABASE_GET_BUNDLE_ITEM_COUNT(iParam0, &uVar1);
	Var12 = { Param1 };
	iVar0 = 0;
	while (iVar0 < iVar11)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_BUNDLE_ITEM_INFO(iParam0, &uVar1, iVar0, &Var3))
		{
			if (__LIB_0__::func_144(Var3, 0))
			{
				Var12.f_4 = Var3.f_1;
				if (__LIB_0__::func_800(Var3, Param1, Var12.f_4, 0) > 0)
				{
				}
				else
				{
					__LIB_0__::func_610(&Var7);
					if (func_1785(Var3, &Var7, &Var12, 1, 752097756, 1))
					{
						if (bParam5)
						{
							__LIB_1__::func_556(Var7, 1);
						}
					}
				}
			}
		}
		iVar0++;
	}
	return true;
}

bool func_2144(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	Var0 = { func_1365(iParam0, 0, 0) };
	Var5 = { __LIB_0__::func_429(iParam0, Var0, Var0.f_4, 0) };
	if (__LIB_0__::func_800(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return false;
	}
	INVENTORY::_0x9A113C660AEA3832(__LIB_0__::func_162(0), &Var5, iParam1);
	return true;
}

bool func_2160(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	return (iVar0 > -1 && iVar0 < 5);
}

int func_2224(var uParam0, int iParam1, int iParam2)
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
		return func_2224(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

void func_2262()
{
	var uVar0;
	struct<4> Var30;
	if (!INVENTORY::_0x7C7E4AB748EA3B07())
	{
		return;
	}
	uVar0 = 29;
	__LIB_0__::func_840(Global_35, &uVar0);
	Var30 = { __LIB_0__::func_949(0) };
	INVENTORY::_0xE36D4A38D28D9CFB(0);
	INVENTORY::_0xC04F47D488EF9EBA(5, 1, &Var30, 0);
	INVENTORY::_0x5D6182F3BCE1333B(5, -142743235);
	func_2368(0);
	func_2369(7);
	func_2370(joaat("KIT_BANDANA"), 1, 1, 0);
	if (__LIB_0__::func_241() == 1160113249)
	{
		func_2370(joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"), 1, 1, 1);
		func_2370(-361635024 /* GXTEntry: "The Cowboy" */, 1, 1, 1);
	}
	__LIB_0__::func_841(Global_35, &uVar0);
}

void func_2271()
{
	int iVar0;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_1330(joaat("UPGRADE_STAMINA_TANK_1"), 1, 752097756);
	iVar0 = __LIB_0__::func_963(1);
	__LIB_1__::func_132(1, iVar0, 0);
}

void func_2273()
{
	int iVar0;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_1330(joaat("UPGRADE_DEADEYE_TANK_1"), 1, 752097756);
	iVar0 = __LIB_0__::func_963(2);
	__LIB_1__::func_132(2, iVar0, 0);
}

void func_2274()
{
	int iVar0;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_1330(joaat("UPGRADE_HEALTH_TANK_1"), 1, 752097756);
	iVar0 = __LIB_0__::func_963(0);
	__LIB_1__::func_132(0, iVar0, 0);
}

bool func_2296(int iParam0, int iParam1)
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
	if (!func_2385(iParam0, 856287005, &iVar9, &uVar5, &uVar0, 1, 0))
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
				if (func_2296(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_2296(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_2296(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_2296(iVar21, 1))
				{
				}
			}
		}
		func_2389();
		return true;
	}
	return false;
}

void func_2368(bool bParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 17;
	while (iVar0 >= 0)
	{
		iVar1 = Global_1946804.f_2657[iVar0];
		if (__LIB_0__::func_144(iVar1, 0))
		{
			func_1354(iVar1, 0, bParam0);
		}
		Global_1946804.f_2657[iVar0] = 0;
		iVar0 = (iVar0 + -1);
	}
	Global_1946804.f_2657.f_20 = 0;
	Global_1946804.f_2657.f_21 = 0;
	Global_1946804.f_2657.f_22 = 0;
	Global_1946804.f_2657.f_23 = 0;
	Global_1946804.f_2657.f_24 = 0;
	Global_1946804.f_2657.f_25 = 0;
	Global_1946804.f_2657.f_19 = 0;
	Global_1946804.f_2657.f_26.f_6 = 0;
}

void func_2369(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	Global_1946804.f_2657.f_26.f_2 = 3;
	Global_1946804.f_2657.f_26.f_1 = 3;
	Global_1946804.f_2657.f_26 = 3;
	if (__LIB_0__::func_2() == -1)
	{
		__LIB_1__::func_94(352481484);
		iVar0 = 0;
		while (iVar0 < Global_26796.f_19)
		{
			Global_1946804.f_2657[iVar0] = Global_26796[iVar0];
			iVar0++;
		}
		Global_1946804.f_2657.f_20 = Global_26796.f_20;
		Global_1946804.f_2657.f_21 = Global_26796.f_21;
		Global_1946804.f_2657.f_22 = Global_26796.f_22;
		Global_1946804.f_2657.f_23 = Global_26796.f_23;
		Global_1946804.f_2657.f_24 = Global_26796.f_24;
		Global_1946804.f_2657.f_25 = Global_26796.f_25;
		Global_1946804.f_2657.f_19 = Global_26796.f_19;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_36638.f_45.f_350.f_19)
		{
			Global_1946804.f_2657[iVar0] = Global_36638.f_45.f_350[iVar0];
			iVar0++;
		}
		Global_1946804.f_2657.f_20 = Global_36638.f_45.f_350.f_20;
		Global_1946804.f_2657.f_21 = Global_36638.f_45.f_350.f_21;
		Global_1946804.f_2657.f_22 = Global_36638.f_45.f_350.f_22;
		Global_1946804.f_2657.f_23 = Global_36638.f_45.f_350.f_23;
		Global_1946804.f_2657.f_24 = Global_36638.f_45.f_350.f_24;
		Global_1946804.f_2657.f_25 = Global_36638.f_45.f_350.f_25;
		Global_1946804.f_2657.f_19 = Global_36638.f_45.f_350.f_19;
	}
	iVar0 = 0;
	while (iVar0 < Global_1946804.f_2657.f_19)
	{
		iVar2 = Global_1946804.f_2657[iVar0];
		if (__LIB_0__::func_357(iVar2) != -999503751)
		{
			func_2409(&(Global_1946804.f_2657.f_26.f_26), iVar2, iVar0);
		}
		if (func_2144(iVar2, 0))
		{
			func_1155(iVar2, Global_1946804.f_1497.f_1[iVar1 /*3*/] == Global_1946804.f_2657[iVar0]);
		}
		iVar0++;
	}
}

void func_2370(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	bool bVar1;
	if (!__LIB_0__::func_673(iParam0))
	{
		return;
	}
	iVar0 = __LIB_0__::func_357(iParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case -2061583405:
			bVar1 = func_2411(iParam0, &(Global_1946804.f_2657.f_21), Global_1946804.f_2657.f_26.f_1, bParam1);
			break;
		case 81053684:
			bVar1 = func_2411(iParam0, &(Global_1946804.f_2657.f_23), 1, bParam1);
			break;
		case -999503751:
			bVar1 = func_2411(iParam0, &(Global_1946804.f_2657.f_20), Global_1946804.f_2657.f_26, bParam1);
			break;
		case -525676072:
			bVar1 = func_2411(iParam0, &(Global_1946804.f_2657.f_22), Global_1946804.f_2657.f_26.f_2, bParam1);
			break;
		case -1719060085:
			bVar1 = func_2411(iParam0, &(Global_1946804.f_2657.f_24), 1, bParam1);
			break;
		case -413129408:
			bVar1 = func_2411(iParam0, &(Global_1946804.f_2657.f_24), 1, bParam1);
			break;
	}
	if (!bVar1)
	{
		return;
	}
	if (iParam0 == __LIB_0__::func_856(0))
	{
		func_2413(iParam0, 1);
		if (__LIB_0__::func_241() == 1160113249)
		{
			func_2413(__LIB_0__::func_856(-2125499975), 0);
		}
		else
		{
			func_2413(__LIB_0__::func_856(1160113249), 0);
		}
	}
	__LIB_0__::func_460();
	if (__LIB_1__::func_18(iVar0))
	{
		INVENTORY::_0x766315A564594401(__LIB_0__::func_162(0), iParam0, 0);
	}
	func_1155(iParam0, bParam3);
	if (bParam2)
	{
		__LIB_0__::func_719(0, 0);
	}
}

bool func_2385(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar5;
	struct<10> Var6;
	struct<4> Var20;
	int iVar34;
	int iVar35;
	int iVar36;
	struct<5> Var37;
	struct<4> Var42;
	if (iParam0 != 0 && iParam1 != 0)
	{
		iVar1 = __LIB_0__::func_357(iParam1);
		iVar5 = __LIB_0__::func_857(iParam1);
		iVar0 = 0;
		while (iVar0 < iVar5)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar1, iVar0, &uVar2))
			{
				if (ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iVar1, uVar2))
				{
					*uParam4 = { func_1365(iParam1, 0, 0) };
					if (iParam6 != 0)
					{
						uParam4->f_4 = iParam6;
					}
					*uParam3 = { __LIB_0__::func_429(iParam1, *uParam4, uParam4->f_4, 0) };
					*iParam2 = uVar2;
					return true;
				}
			}
			iVar0++;
		}
		if (bParam5)
		{
			Var6.f_9 = -1591664384;
			Var20.f_9 = -1591664384;
			iVar34 = __LIB_0__::func_162(0);
			Var37 = { func_1365(iParam1, 0, 0) };
			if (iParam6 != 0)
			{
				Var37.f_4 = iParam6;
			}
			Var42 = { __LIB_0__::func_429(iParam1, Var37, Var37.f_4, 0) };
			iVar35 = INVENTORY::_0xE843D21A8E2498AA(iVar34, &Var42);
			iVar36 = 0;
			while (iVar36 < iVar35)
			{
				if (INVENTORY::_0xCD9A485F2B383B44(iVar34, &Var42, iVar36, &Var6))
				{
					iVar1 = __LIB_0__::func_357(Var6.f_4);
					iVar5 = ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_COUNT(iVar1);
					iVar0 = 0;
					while (iVar0 < iVar5)
					{
						if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar1, iVar0, &uVar2))
						{
							if (ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iVar1, uVar2))
							{
								if (__LIB_0__::func_814(Var42, Var6.f_9, &Var20, 0))
								{
									uParam4->f_4 = Var6.f_9;
									*uParam4 = { Var6.f_5 };
									*uParam3 = { Var20 };
									*iParam2 = uVar2;
									return true;
								}
							}
						}
						iVar0++;
					}
				}
				iVar36++;
			}
		}
	}
	*iParam2 = 0;
	return false;
}

int func_2389()
{
	struct<5> Var0;
	struct<4> Var5;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar14;
	bool bVar15;
	struct<4> Var16;
	int iVar20;
	int iVar21;
	Var0 = { func_1365(856287005, 0, 0) };
	Var5 = { __LIB_0__::func_429(856287005, Var0, Var0.f_4, 0) };
	iVar10 = __LIB_0__::func_357(856287005);
	if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar10, 0, &iVar11))
	{
		iVar14 = __LIB_1__::func_81(Var5, joaat("SLOTID_HORSE_SADDLE"), 0);
	}
	if (!__LIB_0__::func_144(iVar14, 0))
	{
		return 0;
	}
	bVar15 = false;
	iVar20 = __LIB_0__::func_857(856287005);
	iVar9 = 0;
	while (iVar9 < iVar20)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar10, iVar9, &iVar11))
		{
			bVar15 = false;
			iVar21 = __LIB_1__::func_81(Var5, iVar11, 0);
			if (!__LIB_0__::func_144(iVar21, 0))
			{
				if (iVar11 == joaat("SLOTID_HORSE_HORN"))
				{
					if (__LIB_0__::func_848(iVar14) || __LIB_0__::func_847(iVar14))
					{
					}
					else
					{
						Jump @219; //curOff = 194
						if (iVar11 == joaat("SLOTID_HORSE_STIRRUP"))
						{
							if (__LIB_0__::func_848(iVar14))
							{
							}
							else
							{
								bVar15 = true;
								Jump @259; //curOff = 222
								if (iVar11 == joaat("SLOTID_HORSE_BLANKET"))
								{
									if (!__LIB_0__::func_848(iVar14) && __LIB_0__::func_688(iVar21))
									{
										bVar15 = true;
									}
								}
								if (bVar15)
								{
									if (__LIB_1__::func_419(iVar11, &Var16, 1))
									{
										if (!__LIB_1__::func_556(Var16, 1))
										{
										}
									}
								}
							}
							iVar9++;
							return 1;
						}
					}
				}
			}
		}
	}
}

void func_2409(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 >= 13)
	{
		return;
	}
	__LIB_0__::func_691(iParam2, *uParam0);
	func_2436(&(uParam0->f_1[*uParam0 /*5*/]), iParam1, -1, 1, 0);
	*uParam0++;
}

int func_2411(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;
	iVar1 = iParam0;
	if (Global_1946804.f_2657.f_19 >= 18)
	{
		return 0;
	}
	if (*uParam1 >= iParam2)
	{
		return 0;
	}
	if (__LIB_0__::func_554(iVar1, &uVar0))
	{
		return 0;
	}
	if (bParam3 && !func_2144(iParam0, 0))
	{
		return 0;
	}
	Global_1946804.f_2657[Global_1946804.f_2657.f_19] = iVar1;
	if (__LIB_0__::func_357(iParam0) != -999503751)
	{
		func_2409(&(Global_1946804.f_2657.f_26.f_26), iParam0, Global_1946804.f_2657.f_19);
	}
	Global_1946804.f_2657.f_19++;
	*uParam1++;
	return 1;
}

int func_2413(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	Var0 = { func_1365(iParam0, 0, 0) };
	Var5 = { __LIB_0__::func_429(iParam0, Var0, Var0.f_4, 0) };
	if (__LIB_0__::func_800(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	INVENTORY::_0x0349404A22736740(iParam1, __LIB_0__::func_162(0), &Var5);
	return 1;
}

void func_2436(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (PED::_0x93FFD92F05EC32FD(uParam0->f_3.f_1))
	{
		__LIB_1__::func_13(uParam0);
	}
	if (iParam2 == -1)
	{
		uParam0->f_1 = __LIB_0__::func_161(func_1355(iParam1), 1);
		if (uParam0->f_1 == -1)
		{
		}
	}
	else
	{
		uParam0->f_1 = iParam2;
	}
	uParam0->f_2 = iParam4;
	*uParam0 = iParam1;
	uParam0->f_3 = 0;
	if (bParam3)
	{
		__LIB_1__::func_192(uParam0);
	}
}

