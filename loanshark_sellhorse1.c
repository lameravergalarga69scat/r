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
	int iLocal_16[2] = { 0, 0 };
	struct<10> Local_19[7];
	struct<34> Local_90[2];
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	int iLocal_164 = 0;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	int iLocal_173 = 0;
	int iLocal_174 = 0;
	int iLocal_175 = 0;
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
	int iLocal_194 = 0;
	int iLocal_195 = 0;
	int iLocal_196 = 0;
	int iLocal_197 = 0;
	int iLocal_198 = 0;
	int iLocal_199 = 0;
	int iLocal_200 = 0;
	int iLocal_201 = 0;
	int iLocal_202 = 0;
	int iLocal_203 = 0;
	bool bLocal_204 = false;
	bool bLocal_205 = false;
	bool bLocal_206 = false;
	int iLocal_207 = 0;
	bool bLocal_208 = false;
	int iLocal_209 = 0;
	bool bLocal_210 = false;
	int iLocal_211 = 0;
	int iLocal_212 = 0;
	int iLocal_213 = 0;
	int iLocal_214 = 0;
	int iLocal_215 = 0;
	int iLocal_216 = 0;
	int iLocal_217 = 0;
	int iLocal_218 = 0;
	var uLocal_219 = -1;
	var uLocal_220 = 0;
	var uLocal_221 = -1;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = -1;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 1073741824;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 1;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 1106247680;
	var uLocal_245 = 1067450368;
	var uLocal_246 = 0;
	var uLocal_247 = 1092616192;
	var uLocal_248 = 1112014848;
	var uLocal_249 = 1106247680;
	var uLocal_250 = 1101529088;
	var uLocal_251 = 1101004800;
	var uLocal_252 = 1084227584;
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
	struct<17> Local_279[1];
	bool bLocal_297 = false;
	char[] cLocal_298[8] = 0;
	int iLocal_299 = 0;
	int iLocal_300 = 0;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	var uLocal_305[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<2> Local_314[5];
	int iLocal_325 = 0;
	int iLocal_326 = 0;
	int iLocal_327 = 0;
	int iLocal_328 = 0;
	int iLocal_329 = 0;
	int iLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	int iLocal_334 = 0;
	int iLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	int iLocal_339[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_348 = 0;
	int iLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	int iLocal_356 = 0;
	int iLocal_357 = 0;
	int iLocal_358 = 0;
	int iLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uScriptParam_0 = 0;
#endregion
void __EntryFunction__()
{
	struct<2278> Var0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_166 = joaat("CS_WROBEL");
	iLocal_167 = joaat("U_M_O_PSHRANCHER_01");
	iLocal_168 = joaat("A_C_HORSE_HUNGARIANHALFBRED_DARKDAPPLEGREY");
	iLocal_169 = joaat("P_CABINETCHINA01X");
	iLocal_170 = joaat("P_CORNERCABINET02X");
	iLocal_171 = joaat("P_SIDETABLE09X");
	iLocal_172 = joaat("P_SIDETABLE07X");
	iLocal_173 = joaat("P_CS_BOOK03X");
	iLocal_174 = joaat("P_PENCIL01X");
	iLocal_175 = joaat("P_SPOON01X");
	iLocal_202 = 1;
	cLocal_298 = "script_proc@loansharking@horse_sell@ig1_surrender";
	Var0.f_3.f_5 = 1065353216;
	Var0.f_3.f_6 = 1119092736;
	Var0.f_3.f_7 = 1092616192;
	Var0.f_3.f_8 = 1085276160;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_17.f_2 = 1106247680;
	Var0.f_17.f_3 = 1101004800;
	Var0.f_17.f_4 = 1099431936;
	Var0.f_17.f_5 = 1098907648;
	Var0.f_17.f_6 = 1082130432;
	Var0.f_32 = 1;
	Var0.f_32.f_13 = 17;
	Var0.f_32.f_218 = 1097859072;
	Var0.f_32.f_219 = 1101004800;
	Var0.f_32.f_246 = 4;
	Var0.f_352.f_3 = 17;
	Var0.f_352.f_3.f_1.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_352.f_3.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_10 = joaat("WEAPON_UNARMED");
	Var0.f_352.f_225.f_15 = 1;
	Var0.f_352.f_241 = 30;
	Var0.f_352.f_241.f_1 = -1;
	Var0.f_352.f_241.f_1.f_2 = 1;
	Var0.f_352.f_241.f_1.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18 = -1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_2 = 1;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_12 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_15 = 1065353216;
	Var0.f_352.f_241.f_1.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_18.f_16 = 1;
	Var0.f_352.f_782 = 8;
	Var0.f_352.f_1111 = 8;
	Var0.f_352.f_1111.f_1.f_20 = -1;
	Var0.f_352.f_1111.f_1.f_22.f_20 = -1;
	Var0.f_352.f_1111.f_1.f_22.f_22.f_20 = -1;
	Var0.f_352.f_1111.f_1.f_22.f_22.f_22.f_20 = -1;
	Var0.f_352.f_1111.f_1.f_22.f_22.f_22.f_22.f_20 = -1;
	Var0.f_352.f_1111.f_1.f_22.f_22.f_22.f_22.f_22.f_20 = -1;
	Var0.f_352.f_1111.f_1.f_22.f_22.f_22.f_22.f_22.f_22.f_20 = -1;
	Var0.f_352.f_1111.f_1.f_22.f_22.f_22.f_22.f_22.f_22.f_22.f_20 = -1;
	Var0.f_352.f_1288 = 11;
	Var0.f_352.f_1399 = 2;
	Var0.f_352.f_1434 = 2;
	Var0.f_352.f_1451 = -1;
	Var0.f_352.f_1454 = -1;
	Var0.f_352.f_1455 = -1082130432;
	Var0.f_352.f_1537 = 24;
	Var0.f_352.f_1661 = -1;
	Var0.f_2041 = 10;
	Var0.f_2052 = 11;
	Var0.f_2077.f_8 = -1;
	Var0.f_2077.f_17 = 1097859072;
	Var0.f_2077.f_18 = 1000;
	Var0.f_2077.f_19 = 1067450368;
	Var0.f_2077.f_20 = 5000;
	Var0.f_2077.f_21 = 42;
	Var0.f_2077.f_22 = 1103626240;
	Var0.f_2077.f_23 = 1077936128;
	Var0.f_2077.f_24 = 1106247680;
	Var0.f_2077.f_25 = 1103101952;
	Var0.f_2077.f_26 = 1097859072;
	Var0.f_2077.f_27 = 1103626240;
	Var0.f_2106 = 24;
	Var0.f_2204 = -1;
	Var0.f_2210 = 2;
	Var0.f_2213 = 2;
	Var0.f_2216.f_1 = -1;
	Var0.f_2216.f_3 = -1;
	Var0.f_2216.f_6 = -1;
	Var0.f_2216.f_12 = 1073741824;
	Var0.f_2216.f_16 = 1;
	Var0.f_2216.f_26 = 1106247680;
	Var0.f_2216.f_27 = 1067450368;
	Var0.f_2216.f_29 = 1092616192;
	Var0.f_2216.f_30 = 1112014848;
	Var0.f_2216.f_31 = 1106247680;
	Var0.f_2216.f_32 = 1101529088;
	Var0.f_2216.f_33 = 1101004800;
	Var0.f_2216.f_34 = 1084227584;
	Var0.f_2277 = 1;
	Var0.f_2277.f_1.f_2 = 570;
	Var0.f_2277.f_1.f_3 = 1065353216;
	Var0.f_2277.f_1.f_4 = -1082130432;
	Var0.f_2277.f_1.f_9 = 3;
	Var0 = uScriptParam_0;
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(554))
	{
		func_1(&Var0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	func_2(&Var0);
	while (true)
	{
		func_3(&Var0);
		if (__LIB_0__::func_1(Var0.f_16, 12))
		{
			func_5(&Var0);
		}
		else
		{
			switch (Var0.f_1)
			{
				case 0:
					__LIB_10__::func_536(&Var0);
					break;
				case 1:
					func_7(&Var0);
					break;
				case 3:
					func_8(&Var0);
					break;
				case 2:
					__LIB_10__::func_253(&Var0, func_10(&Var0, __LIB_4__::func_513()));
					if (Var0.f_1 == 8 || Var0.f_1 == 9)
					{
						HUD::DISPLAY_HUD(true);
						MAP::DISPLAY_RADAR(true);
					}
					break;
				case 6:
					func_12(&Var0);
					break;
				case 7:
					func_13(&Var0);
					break;
				case 8:
					func_14(&Var0);
					break;
				case 9:
					func_15(&Var0);
					break;
				case 10:
					func_16(&Var0, 0);
					break;
				case 11:
					func_17(&Var0);
					break;
				case 12:
					func_18(&Var0);
					break;
				case 13:
					func_19(&Var0, 0);
					break;
			}
		}
		BUILTIN::WAIT(0);
	}
}

void func_1(var uParam0)
{
	int iVar0;
	if (Global_1879534 == 1)
	{
	}
	if (__LIB_0__::func_1(Global_1392626[*uParam0 /*32*/].f_9, 4))
	{
		iVar0 = PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP();
		__LIB_0__::func_11(uParam0, iVar0);
		if (iVar0 == 32)
		{
			func_15(uParam0);
		}
		else
		{
			func_16(uParam0, 1);
			return;
		}
	}
	if (uParam0->f_1 == 11)
	{
		__LIB_0__::func_11(uParam0);
	}
	func_23(uParam0);
}

void func_2(char[4] cParam0)
{
	__LIB_4__::func_228(&(cParam0->f_2077));
	__LIB_1__::func_402(&(cParam0->f_2077), 1);
	__LIB_2__::func_828(&(cParam0->f_2077), 1);
	__LIB_1__::func_413(&(cParam0->f_2077), 1);
	if (*cParam0 == __LIB_10__::func_367())
	{
		__LIB_0__::func_7(&(Global_1392626[*cParam0 /*32*/].f_9), 512);
		__LIB_0__::func_145(0, 0);
	}
	HUD::_TEXT_DATABASE_REQUEST("LOAN");
	func_31(cParam0);
	__LIB_10__::func_254(cParam0);
	__LIB_10__::func_253(cParam0, 0);
}

void func_3(char[4] cParam0)
{
	struct<4> Var0;
	if (__LIB_0__::func_1(cParam0->f_16, 12))
	{
		return;
	}
	if (__LIB_10__::func_255())
	{
		__LIB_0__::func_7(&(cParam0->f_16), 4);
		if (!__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 4))
		{
			__LIB_10__::func_256(cParam0, 8);
		}
		return;
	}
	else if (__LIB_10__::func_257())
	{
		__LIB_0__::func_7(&(cParam0->f_16), 8);
		if (!__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 4))
		{
			__LIB_10__::func_256(cParam0, 9);
		}
		return;
	}
	__LIB_0__::func_8(&(Global_1392626[*cParam0 /*32*/].f_9), 256);
	if (cParam0->f_1 != 12 && cParam0->f_1 != 11)
	{
		if (!__LIB_0__::func_1(cParam0->f_16, 1) && cParam0->f_1 <= 3)
		{
			if (func_38(cParam0))
			{
				func_39(cParam0);
				if (cParam0->f_15 == 2 || cParam0->f_15 == 6)
				{
					func_23(cParam0);
				}
				else
				{
					__LIB_10__::func_253(cParam0, 11);
				}
				return;
			}
			__LIB_10__::func_613(cParam0);
		}
		if (__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 4))
		{
			if (__LIB_0__::func_1(cParam0->f_16, 128))
			{
				if (!__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 512))
				{
					Var0 = { func_41(0) };
					if (func_42(&Var0))
					{
						__LIB_0__::func_8(&(cParam0->f_16), 128);
					}
				}
				else
				{
					__LIB_0__::func_8(&(cParam0->f_16), 128);
				}
			}
			if (!__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 2048))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Global_35))
				{
					PED::SET_PED_RESET_FLAG(Global_35, 187, true);
				}
			}
			if (!__LIB_0__::func_1(cParam0->f_16, 32))
			{
				__LIB_4__::func_515();
			}
			if (!__LIB_0__::func_1(cParam0->f_16, 64))
			{
				POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
			}
			if (!__LIB_0__::func_1(cParam0->f_16, 256))
			{
				__LIB_4__::func_516(1, 0);
			}
			if (func_46(cParam0))
			{
				__LIB_10__::func_253(cParam0, 10);
				return;
			}
		}
		__LIB_0__::func_11(cParam0);
		__LIB_18__::func_242(cParam0);
	}
}

void func_5(var uParam0)
{
	if (__LIB_0__::func_1(Global_1392626[*uParam0 /*32*/].f_9, 4))
	{
		func_16(uParam0, 0);
	}
	else
	{
		if (!__LIB_0__::func_75(&(uParam0->f_2070)))
		{
			__LIB_1__::func_283(&(uParam0->f_2070), 0);
		}
		__LIB_0__::func_11(uParam0);
		if (__LIB_1__::func_871(&(uParam0->f_2070)) >= 2500 || CAM::IS_SCREEN_FADED_OUT())
		{
			if (uParam0->f_1 == 11)
			{
				__LIB_0__::func_11(uParam0);
			}
			else
			{
				func_39(uParam0);
			}
			func_23(uParam0);
		}
	}
}

void func_7(char[4] cParam0)
{
	if (func_57(cParam0))
	{
		if (__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 512))
		{
			func_58(cParam0);
			__LIB_10__::func_253(cParam0, 2);
		}
		else
		{
			func_59(cParam0);
			__LIB_10__::func_253(cParam0, 3);
		}
	}
}

void func_8(char[4] cParam0)
{
	if (func_60(cParam0))
	{
		func_61(cParam0);
	}
}

int func_10(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = iParam1;
	PED::_0xF7EA250B9A919E03(joaat("INTIMIDATED_ON_ASS"), Local_90[0 /*34*/]);
	if (iVar0 == 0)
	{
		if (PED::_0x854BC9B1A1CCD034(joaat("INTIMIDATED_ON_ASS"), Local_90[0 /*34*/]))
		{
			func_62(Local_90[0 /*34*/], -612.3f, -27.7f, 87.2f, 106f, 2, 1073741824 /* Float: 2f */);
			func_63(1);
			func_64(0);
			__LIB_10__::func_378(*uParam0, func_41(0), func_41(1), 0, 1);
			__LIB_10__::func_260(1, 1);
			return 8;
		}
	}
	else if (iVar0 == 1)
	{
		if (!func_67())
		{
			return 2;
		}
		func_64(5);
		__LIB_10__::func_378(*uParam0, func_41(1), func_41(2), 1, 2);
		__LIB_10__::func_260(1, 1);
		return 8;
	}
	else if (iVar0 == 2)
	{
		func_68(-774242862 /* GXTEntry: "Wróbel\'s Valuables" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		__LIB_0__::func_569(joaat("MOTIONSTATE_WALK"), 2000, 0, 1, 1, 0, 0, 0);
		__LIB_10__::func_260(1, 1);
		return 9;
	}
	return 2;
}

void func_12(char[4] cParam0)
{
	if (func_70(cParam0))
	{
		if (__LIB_10__::func_261(cParam0->f_346))
		{
			__LIB_0__::func_8(&(Global_1392626[*cParam0 /*32*/].f_9), 16);
			__LIB_10__::func_464(&(cParam0->f_32), &(cParam0->f_352));
			func_73(cParam0);
		}
		else
		{
			__LIB_0__::func_11(cParam0);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
			__LIB_10__::func_263(0, 1, 1);
		}
		__LIB_10__::func_253(cParam0, 7);
	}
}

void func_13(char[4] cParam0)
{
	int iVar0;
	if (__LIB_10__::func_261(cParam0->f_346))
	{
		if (__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 32))
		{
			__LIB_0__::func_8(&(Global_1392626[*cParam0 /*32*/].f_9), 16);
			if (func_73(cParam0))
			{
				__LIB_10__::func_465(cParam0, 1);
				iVar0 = func_77(cParam0);
				__LIB_10__::func_253(cParam0, iVar0);
			}
		}
	}
	else
	{
		__LIB_0__::func_8(&(Global_1392626[*cParam0 /*32*/].f_9), 16);
		if (__LIB_0__::func_58(cParam0))
		{
			__LIB_10__::func_264(cParam0);
			__LIB_10__::func_465(cParam0, 0);
			iVar0 = func_77(cParam0);
			__LIB_10__::func_253(cParam0, iVar0);
		}
		else
		{
			__LIB_10__::func_263(0, 1, 1);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_SKIP_CUTSCENE"), true);
			__LIB_0__::func_11(cParam0);
		}
	}
}

void func_14(char[4] cParam0)
{
	int iVar0;
	iVar0 = func_81(cParam0);
	if (iVar0 != 8)
	{
		__LIB_10__::func_253(cParam0, iVar0);
	}
}

void func_15(char[4] cParam0)
{
	bool bVar0;
	if (cParam0->f_1 != 9)
	{
		__LIB_10__::func_253(cParam0, 9);
	}
	__LIB_10__::func_256(cParam0, 0);
	func_82(*cParam0, 1, 1);
	if (__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 4))
	{
		__LIB_5__::func_109(cParam0, 0, 1);
		MISC::_0x1096603B519C905F("");
		if (MISC::GET_MISSION_FLAG())
		{
			MISC::SET_MISSION_FLAG(false);
		}
		__LIB_0__::func_769();
		__LIB_0__::func_867(0);
		__LIB_0__::func_8(&Global_1935630, 4);
	}
	if (__LIB_10__::func_341(*cParam0))
	{
		if (__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_8, 8))
		{
			__LIB_1__::func_422("OBJ_COMPLETE_NOT", 7500, 0, 1, 0, 0, -1, -1, 0);
		}
		else if (__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_8, 16))
		{
			__LIB_1__::func_422("OBJ_COMPLETE_AB", 7500, 0, 1, 0, 0, -1, -1, 0);
		}
		else
		{
			__LIB_1__::func_422("OBJ_COMPLETE_REC", 7500, 0, 1, 0, 0, -1, -1, 0);
		}
	}
	func_39(cParam0);
	__LIB_0__::func_8(&(cParam0->f_16), 1);
	bVar0 = false;
	bVar0 = true;
	if (bVar0)
	{
		__LIB_0__::func_297();
		__LIB_1__::func_140();
	}
	__LIB_10__::func_253(cParam0, 11);
}

void func_16(char[4] cParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	if (cParam0->f_1 != 10)
	{
		__LIB_10__::func_253(cParam0, 10);
	}
	__LIB_10__::func_256(cParam0, 1);
	if (bParam1 == 1)
	{
		__LIB_0__::func_297();
		__LIB_1__::func_140();
	}
	else
	{
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			if (!__LIB_0__::func_75(&(cParam0->f_2070)))
			{
				__LIB_1__::func_283(&(cParam0->f_2070), 0);
			}
			__LIB_0__::func_11(cParam0);
			bVar0 = CAM::_0x139EFB0A71DD9011();
			bVar1 = CAM::_0x7CE9DC58E3E4755F();
			if (!__LIB_0__::func_1(cParam0->f_16, 16) && !bVar1)
			{
				if (!bVar0)
				{
					__LIB_1__::func_193(1, 1);
					__LIB_0__::func_7(&(Global_1347343.f_11), 131072);
					return;
				}
				else
				{
					__LIB_0__::func_7(&(cParam0->f_16), 16);
				}
			}
			if (bVar1)
			{
				CAM::DO_SCREEN_FADE_OUT(0);
				CAM::_0x16E9ABDD34DDD931();
			}
			else if (__LIB_1__::func_871(&(cParam0->f_2070)) >= 2500)
			{
				CAM::DO_SCREEN_FADE_OUT(0);
				CAM::_0x16E9ABDD34DDD931();
			}
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				return;
			}
		}
		iVar2 = 1;
		if (__LIB_0__::func_1(cParam0->f_16, 4))
		{
			iVar2 = 2;
			if (PED::GET_PED_CONFIG_FLAG(Global_35, 11, true))
			{
				StringCopy(&(cParam0->f_2208), "PLAYER_KO", 16);
			}
			else
			{
				StringCopy(&(cParam0->f_2208), "PLAYER_DEAD", 16);
			}
		}
		else if (__LIB_0__::func_1(cParam0->f_16, 8))
		{
			iVar2 = 6;
			StringCopy(&(cParam0->f_2208), "PLAYER_ARRESTED", 16);
		}
		__LIB_1__::func_611(Global_1392626[*cParam0 /*32*/].f_3, iVar2, &(cParam0->f_2208), __LIB_0__::func_58(), 0, 0);
	}
	if (__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 4))
	{
		MISC::_0x1096603B519C905F("");
		if (MISC::GET_MISSION_FLAG())
		{
			MISC::SET_MISSION_FLAG(false);
		}
		__LIB_0__::func_867(0);
		__LIB_0__::func_769();
		__LIB_0__::func_8(&Global_1935630, 4);
	}
	__LIB_10__::func_375(*cParam0);
	bParam1 = true;
	if (__LIB_0__::func_1(cParam0->f_16, 12))
	{
		bParam1 = true;
	}
	else
	{
		func_39(cParam0);
	}
	if (bParam1)
	{
		func_23(cParam0);
	}
	else
	{
		__LIB_0__::func_8(&(cParam0->f_16), 1);
		__LIB_10__::func_253(cParam0, 11);
	}
}

void func_17(char[4] cParam0)
{
	int iVar0;
	if (Global_1392626[*cParam0 /*32*/].f_9 & 4096 != 0)
	{
		__LIB_10__::func_361(*cParam0);
	}
	if (__LIB_0__::func_296(64, 1, 1))
	{
		iVar0 = __LIB_0__::func_298(0);
		if (__LIB_0__::func_6(iVar0))
		{
			__LIB_0__::func_11(cParam0);
			func_23(cParam0);
			return;
		}
	}
	if (__LIB_10__::func_265())
	{
		__LIB_0__::func_11(cParam0);
		func_23(cParam0);
		return;
	}
	else if (!__LIB_0__::func_75(&(cParam0->f_2064)) || IntToFloat(__LIB_1__::func_871(&(cParam0->f_2064))) > __LIB_2__::func_18(cParam0))
	{
		__LIB_1__::func_283(&(cParam0->f_2064), 1);
		if (func_103(cParam0))
		{
			__LIB_10__::func_253(cParam0, 12);
		}
	}
}

void func_18(var uParam0)
{
	func_19(uParam0, 1);
	if (__LIB_0__::func_1(Global_1392626[*uParam0 /*32*/].f_9, 512))
	{
		__LIB_0__::func_297();
		__LIB_1__::func_140();
	}
}

void func_19(var uParam0, int iParam1)
{
	__LIB_10__::func_249(*uParam0, iParam1);
	func_23(uParam0);
}

void func_23(char[4] cParam0)
{
	func_105(cParam0);
	__LIB_10__::func_342(cParam0);
	__LIB_10__::func_479(cParam0);
	if ((cParam0->f_1 != 12 && __LIB_10__::func_266(cParam0) != 2) && !__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_10, 2))
	{
		__LIB_8__::func_985(*cParam0);
	}
	__LIB_10__::func_479(cParam0);
	__LIB_3__::func_525(&(cParam0->f_2210[0]), &(cParam0->f_2213[0]));
	__LIB_3__::func_525(&(cParam0->f_2210[1]), &(cParam0->f_2213[1]));
	if (__LIB_10__::func_266(cParam0) == 0)
	{
		__LIB_10__::func_435(*cParam0);
	}
	__LIB_2__::func_788(&(Global_1392626[*cParam0 /*32*/].f_11), 1, 0, 1);
	HUD::_TEXT_DATABASE_DELETE("LOAN");
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(cParam0->f_2205)))
	{
		HUD::_TEXT_DATABASE_DELETE(&(cParam0->f_2205));
	}
	__LIB_0__::func_8(&(Global_1392626[*cParam0 /*32*/].f_9), 8);
	if (__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 4))
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
		}
	}
	if (__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 4))
	{
		__LIB_0__::func_769();
	}
	__LIB_0__::func_8(&(Global_1392626[*cParam0 /*32*/].f_9), 4);
	__LIB_0__::func_8(&(Global_1392626[*cParam0 /*32*/].f_9), 512);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_31(var uParam0)
{
	var uVar0[1];
	func_124();
	__LIB_0__::func_68(1189146288, 0, 0);
	__LIB_0__::func_68(906448125, 0, 0);
	__LIB_10__::func_267(uParam0, "LSHSSAU");
	__LIB_10__::func_268(uParam0, 3);
	__LIB_10__::func_269(uParam0, 5);
	__LIB_0__::func_7(&(Global_1392626[*uParam0 /*32*/].f_8), 512);
	__LIB_10__::func_497(&(uParam0->f_2041), iLocal_166);
	__LIB_10__::func_497(&(uParam0->f_2041), iLocal_167);
	__LIB_10__::func_497(&(uParam0->f_2041), iLocal_168);
	__LIB_10__::func_497(&(uParam0->f_2041), joaat("P_CHAIR20X"));
	__LIB_10__::func_497(&(uParam0->f_2041), joaat("S_INV_RING02X"));
	__LIB_10__::func_497(&(uParam0->f_2041), iLocal_173);
	__LIB_10__::func_497(&(uParam0->f_2041), iLocal_174);
	__LIB_10__::func_497(&(uParam0->f_2041), joaat("P_TABLE41X"));
	__LIB_10__::func_497(&(uParam0->f_2041), joaat("P_COPPERPAN01X"));
	__LIB_10__::func_497(&(uParam0->f_2041), iLocal_175);
	__LIB_10__::func_497(&(uParam0->f_2041), joaat("P_APPLE01X"));
	STREAMING::REQUEST_MODEL(iLocal_169, false);
	STREAMING::REQUEST_MODEL(iLocal_170, false);
	STREAMING::REQUEST_MODEL(iLocal_171, false);
	STREAMING::REQUEST_MODEL(iLocal_172, false);
	STREAMING::REQUEST_MODEL(joaat("W_REPEATER_CARBINE01"), false);
	STREAMING::REQUEST_MODEL(joaat("P_APPLE01X"), false);
	STREAMING::REQUEST_MODEL(joaat("P_CHAIR20X"), false);
	STREAMING::REQUEST_MODEL(joaat("S_INV_RING02X"), false);
	STREAMING::REQUEST_MODEL(iLocal_173, false);
	STREAMING::REQUEST_MODEL(iLocal_174, false);
	STREAMING::REQUEST_MODEL(iLocal_175, false);
	STREAMING::REQUEST_MODEL(joaat("P_COPPERPAN01X"), false);
	__LIB_0__::func_68(138361190, 0, 0);
	__LIB_1__::func_341(138361190, 0);
	OBJECT::_0x1BC47A9DEDC8DF5D(138361190, 0);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(138361190, 0f, false);
	OBJECT::_0x3A77DAE8B4FD7586(138361190, 1);
	__LIB_1__::func_342(138361190, 0);
	__LIB_0__::func_68(365712512, 0, 0);
	__LIB_1__::func_341(365712512, 0);
	OBJECT::_0x1BC47A9DEDC8DF5D(365712512, 0);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(365712512, 0f, false);
	OBJECT::_0x3A77DAE8B4FD7586(365712512, 1);
	__LIB_1__::func_342(365712512, 0);
	__LIB_10__::func_575(&(uParam0->f_2052), cLocal_298);
	if (__LIB_1__::func_707(-774242862 /* GXTEntry: "Wróbel\'s Valuables" */, 1, 0))
	{
		func_135(-774242862 /* GXTEntry: "Wróbel\'s Valuables" */, 1, 1, -142743235, 0);
	}
	iLocal_211 = 0;
	iLocal_214 = 0;
	iLocal_212 = 0;
	bLocal_204 = false;
	Local_90[0 /*34*/].f_1 = { -610.6f, -26.2f, 84.55f };
	Local_90[0 /*34*/].f_4 = 120.5588f;
	AUDIO::PREPARE_MUSIC_EVENT("LSHSS_STOP");
	while (!HUD::_TEXT_DATABASE_HAS_LOADED("LOAN"))
	{
		BUILTIN::WAIT(0);
	}
	__LIB_1__::func_948(1189146288, 0, 0f, 0, 0, 0f, 0, 0);
	__LIB_1__::func_948(906448125, 0, 0f, 0, 0, 0f, 0, 0);
	__LIB_1__::func_948(295238741, 1, 0f, 0, 0, 0f, 0, 0);
	__LIB_1__::func_948(-3516232, 1, 0f, 0, 0, 0f, 0, 0);
	PED::SET_PED_NON_CREATION_AREA(-600.9553f, 33.4683f, 87.3055f, -639.6884f, -89.0383f, 79.3235f);
	PATHFIND::SET_PED_PATHS_IN_AREA(-600.9553f, 33.4683f, 87.3055f, -639.6884f, -89.0383f, 79.3235f, false, 0);
	iLocal_301 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-600f, -35f, 80f, 0f, 0f, 0f, 45f, 45f, 26f, "LS_BANKONMISS");
	__LIB_2__::func_261(iLocal_301, "LS_BANKONMISS", 1, 0, 0, 0, -1082130432 /* Float: -1f */);
	POPULATION::_0x18262CAFEBB5FBE1(iLocal_301, 0, 0, 0, -1, -1, 0);
	POPULATION::_0xB56D41A694E42E86(iLocal_301, 0, 262144, 0, -1, -1, 0);
	iLocal_299 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-613.0902f, -27.1919f, 85.0394f, 0f, 0f, -9.934977f, 50f, 50f, 50f, "m_volMissionLaunch");
	iLocal_300 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-612.0902f, -25.1919f, 85.0394f, 0f, 0f, -9.934977f, 30f, 30f, 5f, "m_volInitialConversation");
	iLocal_302 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-612.4f, -26.5f, 86.039f, 0f, 0f, 22f, 7f, 10f, 2f, "m_volHouse");
	iLocal_303 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-611.4518f, -34.20594f, 86.039f, 0f, 0f, 20f, 10.5f, 6.5f, 2f, "m_volHouse2");
	iLocal_304 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-611.8339f, -28.62046f, 85.4f, 0f, 0f, 22f, 3.5f, 2.25f, 2f, "BEAT UP THE PED AREA");
	__LIB_10__::func_550(uParam0, 5f, 4f, 3f, 2f, 100f, 0);
	if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(-1996568696) && TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(-1996568696))
	{
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1996568696, false);
	}
	TASK::_GET_SCENARIO_POINT_CLOSE_TO_COORDS(-610.1f, -25.5f, 85f, 1f, &uVar0, 1);
	if (TASK::_DOES_SCENARIO_POINT_EXIST(uVar0[0]))
	{
		TASK::_SET_SCENARIO_POINT_ACTIVE(uVar0[0], false);
	}
	TASK::_GET_SCENARIO_POINT_CLOSE_TO_COORDS(-610.6f, -25.2f, 85.1f, 1f, &uVar0, 1);
	if (TASK::_DOES_SCENARIO_POINT_EXIST(uVar0[0]))
	{
		TASK::_SET_SCENARIO_POINT_ACTIVE(uVar0[0], false);
	}
	TASK::_GET_SCENARIO_POINT_CLOSE_TO_COORDS(-613.3f, -22.6f, 85f, 0.5f, &uVar0, 1);
	if (TASK::_DOES_SCENARIO_POINT_EXIST(uVar0[0]))
	{
		TASK::_SET_SCENARIO_POINT_ACTIVE(uVar0[0], false);
	}
}

bool func_38(char[4] cParam0)
{
	int iVar0;
	float fVar1;
	if (cParam0->f_1 == 3)
	{
		if (func_139(cParam0))
		{
			__LIB_10__::func_234(*cParam0, 1024);
			__LIB_10__::func_256(cParam0, 5);
			return true;
		}
	}
	if (__LIB_0__::func_296(0, 1, 0))
	{
		iVar0 = __LIB_0__::func_298(0);
		if (__LIB_0__::func_6(iVar0) && Global_1392626[*cParam0 /*32*/].f_3 != __LIB_0__::func_298(0))
		{
			__LIB_0__::func_7(&(Global_1392626[*cParam0 /*32*/].f_8), 1);
			__LIB_10__::func_256(cParam0, 6);
			return true;
		}
	}
	if (Global_1392626[*cParam0 /*32*/].f_12 != -1)
	{
		if (__LIB_0__::func_730(Global_1392626[*cParam0 /*32*/].f_12))
		{
			__LIB_10__::func_234(*cParam0, 2048);
			return true;
		}
	}
	if (Global_1392626[*cParam0 /*32*/].f_22 != -1)
	{
		if (!__LIB_2__::func_117(Global_1392626[*cParam0 /*32*/].f_22))
		{
			__LIB_0__::func_7(&(Global_1392626[*cParam0 /*32*/].f_8), 1);
			__LIB_10__::func_256(cParam0, 3);
			return true;
		}
	}
	if (__LIB_10__::func_362(*cParam0))
	{
		__LIB_0__::func_7(&(Global_1392626[*cParam0 /*32*/].f_8), 1);
		__LIB_10__::func_256(cParam0, 7);
		return true;
	}
	if (__LIB_7__::func_411(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		__LIB_10__::func_234(*cParam0, 16384);
		__LIB_10__::func_256(cParam0, 4);
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1392626[*cParam0 /*32*/].f_11))
	{
		if (!__LIB_10__::func_363(*cParam0, (Global_1392626[*cParam0 /*32*/].f_5 + 10f)))
		{
			__LIB_10__::func_256(cParam0, 2);
			return true;
		}
	}
	else if (__LIB_0__::func_272(Global_1392626[*cParam0 /*32*/].f_11, 1))
	{
		if (!__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_8, 256))
		{
			if (!__LIB_10__::func_363(*cParam0, (Global_1392626[*cParam0 /*32*/].f_5 + 10f)) && !__LIB_10__::func_373(Global_1392626[*cParam0 /*32*/].f_11, 0, &(cParam0->f_2077), &(cParam0->f_2105), 0, 0))
			{
				__LIB_10__::func_256(cParam0, 2);
				return true;
			}
		}
	}
	fVar1 = BUILTIN::VDIST2(Global_1392626[*cParam0 /*32*/].f_24, Global_36);
	if (__LIB_10__::func_270(fVar1))
	{
		__LIB_10__::func_234(*cParam0, 8192);
		__LIB_10__::func_256(cParam0, 5);
		return true;
	}
	return false;
}

void func_39(char[4] cParam0)
{
	func_149(cParam0);
	if (__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 4))
	{
		__LIB_0__::func_769();
		__LIB_1__::func_723(0);
		if (!Global_1935630.f_12)
		{
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, false);
			PED::SET_PED_CONFIG_FLAG(Global_35, 360, false);
		}
		UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(0, "");
		__LIB_5__::func_102();
	}
	__LIB_0__::func_8(&(Global_1392626[*cParam0 /*32*/].f_9), 4);
	if (__LIB_10__::func_266(cParam0) != 2 && !__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_10, 2))
	{
		__LIB_8__::func_985(*cParam0);
	}
	__LIB_10__::func_479(cParam0);
	if (__LIB_10__::func_266(cParam0) == 0)
	{
		__LIB_10__::func_435(*cParam0);
	}
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	__LIB_1__::func_345();
	__LIB_3__::func_525(&(cParam0->f_2210[0]), &(cParam0->f_2213[0]));
	__LIB_3__::func_525(&(cParam0->f_2210[1]), &(cParam0->f_2213[1]));
	__LIB_0__::func_7(&(Global_1392626[*cParam0 /*32*/].f_9), 8);
	__LIB_10__::func_384(cParam0);
}

struct<4> func_41(int iParam0)
{
	int iVar0;
	struct<4> Var1;
	iVar0 = iParam0;
	if (iVar0 == 0)
	{
		Var1 = { -613.2f, -26.6f, 85.3f };
		Var1.f_3 = -57.6f;
	}
	else if (iVar0 == 1)
	{
		Var1 = { -613.2f, -26.6f, 85.3f };
		Var1.f_3 = -57.6f;
	}
	else if (iVar0 == 2)
	{
		Var1 = { -650.2f, 36.1f, 73.5f };
		Var1.f_3 = 336.3f;
	}
	return Var1;
}

bool func_42(var uParam0)
{
	return func_157(*uParam0, uParam0->f_3);
}

bool func_46(char[4] cParam0)
{
	if (cParam0->f_1 == 8)
	{
		if (func_158(cParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_57(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_198))
	{
		iLocal_198 = OBJECT::CREATE_OBJECT(iLocal_173, -612.1649f, -25.246f, 85.7822f, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(iLocal_198, 0f, -0.0001f, 113.36f, 2, true);
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_199))
	{
		iLocal_199 = OBJECT::CREATE_OBJECT(iLocal_174, -612.1934f, -25.0732f, 85.8251f, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(iLocal_199, 90f, -0.0001f, 90f, 2, true);
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_200))
	{
		iLocal_200 = OBJECT::CREATE_OBJECT(iLocal_175, -614.4549f, -22.9549f, 85.8346f, true, true, false, false, true);
		return false;
	}
	if (!func_173())
	{
		return false;
	}
	if (func_174(uParam0))
	{
		if (func_175(uParam0))
		{
			__LIB_3__::func_867(&(uParam0->f_2210[0]), &(uParam0->f_2213[0]), -612.0902f, -25.1919f, 85.0394f, 0f, 0f, 0f, 3f, 3f, 3f, 0, 0, 1, 0, 0);
			__LIB_3__::func_229(885);
			__LIB_3__::func_229(780);
			__LIB_3__::func_229(781);
			__LIB_0__::func_123(885, 32);
			__LIB_0__::func_123(780, 32);
			__LIB_0__::func_928(&(uParam0->f_2106), Global_35, "ARTHUR", 0);
			__LIB_0__::func_928(&(uParam0->f_2106), Local_90[0 /*34*/], "LS_SELLHORDEBTOR", 0);
			ENTITY::CREATE_MODEL_HIDE(-613.1794f, -31.4201f, 85.247f, 5f, joaat("W_REPEATER_CARBINE01"), false);
			ENTITY::CREATE_MODEL_HIDE(-610.5f, -25.2f, 85.9f, 5f, joaat("P_APPLE01X"), false);
			return true;
		}
	}
	return false;
}

void func_58(char[4] cParam0)
{
	struct<4> Var0;
	UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(2, "");
	if (!__LIB_1__::func_44(Global_1392626[*cParam0 /*32*/].f_3))
	{
		if (!__LIB_0__::func_702(Global_1392626[*cParam0 /*32*/].f_3))
		{
			__LIB_1__::func_298(Global_1392626[*cParam0 /*32*/].f_3, 1);
		}
		__LIB_1__::func_821(Global_1392626[*cParam0 /*32*/].f_3, 1, 1);
		__LIB_0__::func_7(&Global_1935630, 4);
		__LIB_10__::func_237(4);
	}
	__LIB_0__::func_7(&(Global_1392626[*cParam0 /*32*/].f_9), 4);
	__LIB_8__::func_985(*cParam0);
	MISC::_0x1096603B519C905F(__LIB_10__::func_274(*cParam0));
	if (!MISC::GET_MISSION_FLAG())
	{
		MISC::SET_MISSION_FLAG(true);
	}
	__LIB_5__::func_109(cParam0, 1, 0);
	AUDIO::_0x33D51F801CB16E4F();
	__LIB_1__::func_723(1);
	PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, true);
	__LIB_1__::func_716(1);
	__LIB_10__::func_275(cParam0);
	if (!__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 512))
	{
		Var0 = { func_41(0) };
		if (!func_42(&Var0))
		{
			__LIB_0__::func_7(&(cParam0->f_16), 128);
		}
		__LIB_10__::func_378(*cParam0, func_41(0), func_41(1), 0, 1);
	}
}

void func_59(char[4] cParam0)
{
	if (bLocal_208 == 0)
	{
		cParam0->f_346 = func_189();
		__LIB_10__::func_401(cParam0, -613.8f, -27.1f, 86f);
		__LIB_10__::func_558(cParam0, 41059);
		__LIB_10__::func_564(cParam0, Global_35, "ARTHUR", 0, 0, 0);
		__LIB_10__::func_564(cParam0, Local_90[0 /*34*/], "cs_wrobel", 0, 0, 0);
		__LIB_10__::func_564(cParam0, iLocal_199, "p_pencil01x", 0, 0, 0);
		__LIB_10__::func_564(cParam0, iLocal_200, "p_spoon01x", 0, 0, 0);
		__LIB_10__::func_564(cParam0, iLocal_328, "p_copperpan01x", 0, 0, 0);
		__LIB_10__::func_564(cParam0, iLocal_198, "p_cs_book03x", 0, 0, 0);
		__LIB_10__::func_564(cParam0, iLocal_330, "p_table41x", 0, 0, 0);
		__LIB_10__::func_402(&(cParam0->f_32));
		__LIB_0__::func_7(&(Global_1392626[*cParam0 /*32*/].f_9), 16);
	}
}

bool func_60(char[4] cParam0)
{
	if (!__LIB_10__::func_344(cParam0))
	{
		return false;
	}
	__LIB_18__::func_249(cParam0);
	if (!__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_8, 512))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(cParam0->f_348)) && __LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 16))
		{
			if (__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_8, 2))
			{
				__LIB_10__::func_565(&(cParam0->f_352), cParam0->f_348, 0);
			}
			else
			{
				__LIB_18__::func_244(&(cParam0->f_352), cParam0->f_348, 0, 0);
				if (__LIB_10__::func_277(&(cParam0->f_352)))
				{
					return true;
				}
			}
		}
		else if (!MISC::IS_STRING_NULL_OR_EMPTY(cParam0->f_346))
		{
			if (__LIB_10__::func_261(cParam0->f_346))
			{
				if (!__LIB_0__::func_86(cParam0->f_32.f_5))
				{
					if (VOLUME::_DOES_VOLUME_EXIST(cParam0->f_2040))
					{
						if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, cParam0->f_2040, true, 0))
						{
							if (cParam0->f_17 == 2)
							{
								__LIB_10__::func_342(cParam0);
								return true;
							}
						}
					}
					else if (BUILTIN::VDIST2(Global_36, cParam0->f_32.f_5) < 6f)
					{
						if (cParam0->f_17 == 2)
						{
							__LIB_10__::func_342(cParam0);
							return true;
						}
					}
				}
				else if (BUILTIN::VDIST2(Global_36, cParam0->f_32.f_5) < 6f)
				{
					__LIB_10__::func_342(cParam0);
					return true;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_1392626[*cParam0 /*32*/].f_11))
		{
			__LIB_0__::func_11(cParam0);
			if ((!PED::IS_PED_RAGDOLL(Global_35) && !PED::IS_PED_JUMPING(Global_35)) && !PED::IS_PED_INJURED(Global_1392626[*cParam0 /*32*/].f_11))
			{
				if (__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 1024))
				{
					func_201(&(Global_1392626[*cParam0 /*32*/].f_11), &(cParam0->f_2216), cParam0->f_2295, &(cParam0->f_2277), 0.1f, 3, 0, cParam0->f_2296, 1, 0, 0, 2, -1082130432 /* Float: -1f */);
					if (__LIB_2__::func_456(&(cParam0->f_2216)))
					{
						__LIB_10__::func_479(cParam0);
						__LIB_10__::func_345(cParam0);
						__LIB_10__::func_342(cParam0);
						return true;
					}
				}
			}
		}
	}
	if (func_204(cParam0))
	{
		if (cParam0->f_17 == 2)
		{
			__LIB_10__::func_342(cParam0);
			return true;
		}
	}
	return false;
}

void func_61(char[4] cParam0)
{
	int iVar0;
	func_58(cParam0);
	__LIB_2__::func_480(&(cParam0->f_2277), 0, 0, 1, 0);
	__LIB_10__::func_479(cParam0);
	__LIB_0__::func_7(&(cParam0->f_16), 1);
	__LIB_0__::func_11(cParam0);
	__LIB_10__::func_253(cParam0, func_207(cParam0));
	iVar0 = func_207(cParam0);
	if (iVar0 == 7)
	{
		func_12(cParam0);
		if (cParam0->f_1 != 7)
		{
			iVar0 = 6;
		}
	}
	else if (iVar0 == 8)
	{
		SCRIPTS::SHUTDOWN_LOADING_SCREEN();
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			CAM::DO_SCREEN_FADE_IN(0);
		}
	}
}

void func_62(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_62(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_62(iVar2, vParam1, fParam4, iParam5, iParam6);
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

void func_63(int iParam0)
{
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(Local_90[0 /*34*/], true, 0f);
	ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_90[0 /*34*/]);
	func_212(Local_90[0 /*34*/]);
	TASK::_TASK_INTIMIDATED_2(Local_90[0 /*34*/], Global_35, 0, 1, 1, iParam0, 0, 1, 196610);
	PED::_0xC163DAC52AC975D3(Local_90[0 /*34*/], 31);
	PED::_0xB8DE69D9473B7593(Global_35, 31);
	PED::_0xB8DE69D9473B7593(Global_35, 3);
	PED::_0xB8DE69D9473B7593(Global_35, 4);
	TASK::_0x41D1331AFAD5A091(Local_90[0 /*34*/], 1, 0);
	PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 315, false);
	PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 130, false);
	PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 301, false);
	PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 331, false);
	PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 297, false);
	PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 351, true);
	PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 452, true);
	PED::_0x2208438012482A1A(Local_90[0 /*34*/], false, false);
}

void func_64(int iParam0)
{
	if (__LIB_13__::func_842() != iParam0)
	{
		iLocal_15 = iParam0;
	}
}

bool func_67()
{
	if (bLocal_204 == 1)
	{
		return true;
	}
	if (iLocal_327 == 0)
	{
		iLocal_327 = ENTITY::_0x6F3068258A499E52(joaat("P_COPPERPAN01X"), -614.6f, -23.2f, 86.1f, 7);
		return false;
	}
	else if (ENTITY::_0x1FF441D7954F8709(iLocal_327))
	{
		iLocal_328 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(iLocal_327));
	}
	if (iLocal_329 == 0)
	{
		iLocal_329 = ENTITY::_0x6F3068258A499E52(joaat("P_TABLE41X"), -611.4f, -25.5f, 85.7f, 7);
		return false;
	}
	else if (ENTITY::_0x1FF441D7954F8709(iLocal_329))
	{
		iLocal_330 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(iLocal_329));
	}
	iLocal_325 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(-611.2f, -30.2f, 85.4f, joaat("RANSACK_ATTACHED_P_SIDETABLE07X"), 2f, 0, false);
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_325))
	{
		TASK::_SET_SCENARIO_POINT_ACTIVE(iLocal_325, false);
	}
	__LIB_9__::func_219(1);
	__LIB_0__::func_68(1189146288, 0, 0);
	__LIB_0__::func_68(906448125, 0, 0);
	__LIB_1__::func_948(906448125, 0, 0, 0, 1, 0, 0, 0);
	__LIB_1__::func_948(1189146288, 0, 0, 0, 1, 0, 0, 0);
	PED::_0x6569F31A01B4C097(Global_35, 3, 1);
	StringCopy(&(Local_314[0 /*2*/]), "LSHSS_IG2_ONE", 16);
	StringCopy(&(Local_314[1 /*2*/]), "LSHSS_IG2_TWO", 16);
	StringCopy(&(Local_314[2 /*2*/]), "LSHSS_LOOT4", 16);
	StringCopy(&(Local_314[3 /*2*/]), "LSHSS_IG2_ENOUH", 16);
	StringCopy(&(Local_314[4 /*2*/]), "LSHSS_CURSEYOU", 16);
	Local_19[0 /*10*/].f_3 = iLocal_171;
	Local_19[0 /*10*/] = 0;
	Local_19[0 /*10*/].f_4 = { -614.7f, -28.4f, 85.7f };
	Local_19[0 /*10*/].f_7 = 16;
	Local_19[0 /*10*/].f_8 = joaat("PROVISION_WATCH");
	Local_19[0 /*10*/].f_9 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(Local_19[0 /*10*/].f_4, joaat("RANSACK_ATTACHED_P_SIDETABLE09X"), 2f, 0, false);
	__LIB_17__::func_705(Local_19[0 /*10*/].f_3, Local_19[0 /*10*/].f_4, &(Local_19[0 /*10*/].f_2), 0, 0);
	if (TASK::_DOES_SCENARIO_POINT_EXIST(Local_19[0 /*10*/].f_9))
	{
		TASK::_SET_SCENARIO_POINT_ACTIVE(Local_19[0 /*10*/].f_9, false);
	}
	if (__LIB_10__::func_236(Local_19[0 /*10*/].f_3, Local_19[0 /*10*/].f_4, &(Local_19[0 /*10*/].f_2), 0, 0, 0))
	{
	}
	__LIB_3__::func_881(Local_19[0 /*10*/].f_3, Local_19[0 /*10*/].f_4, &(Local_19[0 /*10*/].f_2), 0, 0);
	__LIB_3__::func_882(Local_19[0 /*10*/].f_3, Local_19[0 /*10*/].f_4, &(Local_19[0 /*10*/].f_2), Local_19[0 /*10*/].f_8, 1, 0, 0, 0);
	Local_19[1 /*10*/].f_3 = iLocal_170;
	Local_19[1 /*10*/] = 0;
	Local_19[1 /*10*/].f_4 = { -607.9755f, -29.5191f, 85.0193f };
	Local_19[1 /*10*/].f_7 = 32;
	Local_19[1 /*10*/].f_8 = joaat("PROVISION_EARRING_SILVER");
	Local_19[1 /*10*/].f_9 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(Local_19[1 /*10*/].f_4, joaat("RANSACK_ATTACHED_P_CORNERCABINET02X"), 2f, 0, false);
	__LIB_17__::func_705(Local_19[1 /*10*/].f_3, Local_19[1 /*10*/].f_4, &(Local_19[1 /*10*/].f_2), 0, 0);
	if (TASK::_DOES_SCENARIO_POINT_EXIST(Local_19[1 /*10*/].f_9))
	{
		TASK::_SET_SCENARIO_POINT_ACTIVE(Local_19[1 /*10*/].f_9, false);
	}
	if (__LIB_10__::func_236(Local_19[1 /*10*/].f_3, Local_19[1 /*10*/].f_4, &(Local_19[1 /*10*/].f_2), 0, 0, 0))
	{
	}
	__LIB_3__::func_881(Local_19[1 /*10*/].f_3, Local_19[1 /*10*/].f_4, &(Local_19[1 /*10*/].f_2), 0, 0);
	__LIB_3__::func_882(Local_19[1 /*10*/].f_3, Local_19[1 /*10*/].f_4, &(Local_19[1 /*10*/].f_2), Local_19[1 /*10*/].f_8, 1, 0, 0, joaat("S_JEWLERYBOX_SM_POOR01X"));
	Local_19[2 /*10*/].f_3 = iLocal_169;
	Local_19[2 /*10*/] = 0;
	Local_19[2 /*10*/].f_4 = { -616.3115f, -23.2011f, 85.0211f };
	Local_19[2 /*10*/].f_7 = 64;
	Local_19[2 /*10*/].f_8 = joaat("CONSUMABLE_BRANDY");
	Local_19[2 /*10*/].f_9 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(Local_19[2 /*10*/].f_4, joaat("RANSACK_ATTACHED_P_CABINETCHINA01X"), 2f, 0, false);
	__LIB_17__::func_705(Local_19[2 /*10*/].f_3, Local_19[2 /*10*/].f_4, &(Local_19[2 /*10*/].f_2), 0, 0);
	if (TASK::_DOES_SCENARIO_POINT_EXIST(Local_19[2 /*10*/].f_9))
	{
		TASK::_SET_SCENARIO_POINT_ACTIVE(Local_19[2 /*10*/].f_9, false);
	}
	if (__LIB_10__::func_236(Local_19[2 /*10*/].f_3, Local_19[2 /*10*/].f_4, &(Local_19[2 /*10*/].f_2), 0, 0, 0))
	{
	}
	__LIB_3__::func_881(Local_19[2 /*10*/].f_3, Local_19[2 /*10*/].f_4, &(Local_19[2 /*10*/].f_2), 0, 0);
	__LIB_3__::func_882(Local_19[2 /*10*/].f_3, Local_19[2 /*10*/].f_4, &(Local_19[2 /*10*/].f_2), Local_19[2 /*10*/].f_8, 1, 0, 0, 0);
	Local_19[3 /*10*/].f_3 = iLocal_170;
	Local_19[3 /*10*/] = 0;
	Local_19[3 /*10*/].f_4 = { -613.7f, -31.5f, 85f };
	Local_19[3 /*10*/].f_7 = 128;
	Local_19[3 /*10*/].f_8 = joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP");
	Local_19[3 /*10*/].f_9 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(Local_19[3 /*10*/].f_4, joaat("RANSACK_ATTACHED_P_CORNERCABINET02X"), 2f, 0, false);
	__LIB_17__::func_705(Local_19[3 /*10*/].f_3, Local_19[3 /*10*/].f_4, &(Local_19[3 /*10*/].f_2), 0, 0);
	if (TASK::_DOES_SCENARIO_POINT_EXIST(Local_19[3 /*10*/].f_9))
	{
		TASK::_SET_SCENARIO_POINT_ACTIVE(Local_19[3 /*10*/].f_9, false);
	}
	if (__LIB_10__::func_236(Local_19[3 /*10*/].f_3, Local_19[3 /*10*/].f_4, &(Local_19[3 /*10*/].f_2), 0, 0, 0))
	{
	}
	__LIB_3__::func_881(Local_19[3 /*10*/].f_3, Local_19[3 /*10*/].f_4, &(Local_19[3 /*10*/].f_2), 0, 0);
	__LIB_3__::func_583(Local_19[3 /*10*/].f_3, Local_19[3 /*10*/].f_4, 0.1f, 0.1f, -0.245f, 0f, 0f, 0f, &(Local_19[3 /*10*/].f_2), Local_19[3 /*10*/].f_8, 1, 0, 0, 0);
	Local_19[4 /*10*/].f_3 = iLocal_172;
	Local_19[4 /*10*/] = 0;
	Local_19[4 /*10*/].f_4 = { -610.99f, -30.62f, 85f };
	Local_19[4 /*10*/].f_7 = 256;
	Local_19[4 /*10*/].f_8 = joaat("PROVISION_GOLDRING");
	Local_19[4 /*10*/].f_9 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(Local_19[4 /*10*/].f_4, joaat("RANSACK_ATTACHED_P_SIDETABLE07X"), 2f, 0, false);
	__LIB_17__::func_705(Local_19[4 /*10*/].f_3, Local_19[4 /*10*/].f_4, &(Local_19[4 /*10*/].f_2), 0, 0);
	if (TASK::_DOES_SCENARIO_POINT_EXIST(Local_19[4 /*10*/].f_9))
	{
		TASK::_SET_SCENARIO_POINT_ACTIVE(Local_19[4 /*10*/].f_9, false);
	}
	if (__LIB_10__::func_236(Local_19[4 /*10*/].f_3, Local_19[4 /*10*/].f_4, &(Local_19[4 /*10*/].f_2), 0, 0, 0))
	{
	}
	__LIB_3__::func_881(Local_19[4 /*10*/].f_3, Local_19[4 /*10*/].f_4, &(Local_19[4 /*10*/].f_2), 0, 0);
	func_222(Local_19[4 /*10*/].f_7);
	Local_19[5 /*10*/].f_3 = joaat("P_CHEST03X");
	Local_19[5 /*10*/] = 0;
	Local_19[5 /*10*/].f_4 = { -612.7f, -34.9f, 84.9f };
	Local_19[5 /*10*/].f_7 = 1024;
	Local_19[5 /*10*/].f_8 = joaat("MONEY_COINPURSE");
	Local_19[5 /*10*/].f_9 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(Local_19[5 /*10*/].f_4, joaat("RANSACK_ATTACHED_CHEST_MEDIUM"), 2f, 0, false);
	__LIB_17__::func_705(Local_19[5 /*10*/].f_3, Local_19[5 /*10*/].f_4, &(Local_19[5 /*10*/].f_2), 0, 0);
	if (TASK::_DOES_SCENARIO_POINT_EXIST(Local_19[5 /*10*/].f_9))
	{
		TASK::_SET_SCENARIO_POINT_ACTIVE(Local_19[5 /*10*/].f_9, false);
	}
	if (__LIB_10__::func_236(Local_19[5 /*10*/].f_3, Local_19[5 /*10*/].f_4, &(Local_19[5 /*10*/].f_2), 0, 0, 0))
	{
	}
	__LIB_3__::func_881(Local_19[5 /*10*/].f_3, Local_19[5 /*10*/].f_4, &(Local_19[5 /*10*/].f_2), 0, 0);
	__LIB_3__::func_882(Local_19[5 /*10*/].f_3, Local_19[5 /*10*/].f_4, &(Local_19[5 /*10*/].f_2), Local_19[5 /*10*/].f_8, 1, 0, 0, 0);
	func_222(Local_19[5 /*10*/].f_7);
	Local_19[6 /*10*/].f_3 = joaat("P_NIGHTSTAND03X");
	Local_19[6 /*10*/] = 0;
	Local_19[6 /*10*/].f_4 = { -606.0966f, -34.99f, 84.97f };
	Local_19[6 /*10*/].f_7 = 131072;
	Local_19[6 /*10*/].f_8 = joaat("MONEY_COINSTACK");
	Local_19[6 /*10*/].f_9 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(Local_19[6 /*10*/].f_4, joaat("RANSACK_ATTACHED_P_NIGHTSTAND03X"), 2f, 0, false);
	__LIB_17__::func_705(Local_19[6 /*10*/].f_3, Local_19[6 /*10*/].f_4, &(Local_19[6 /*10*/].f_2), 0, 0);
	if (TASK::_DOES_SCENARIO_POINT_EXIST(Local_19[6 /*10*/].f_9))
	{
		TASK::_SET_SCENARIO_POINT_ACTIVE(Local_19[6 /*10*/].f_9, false);
	}
	if (__LIB_10__::func_236(Local_19[6 /*10*/].f_3, Local_19[6 /*10*/].f_4, &(Local_19[6 /*10*/].f_2), 0, 0, 0))
	{
	}
	__LIB_3__::func_881(Local_19[6 /*10*/].f_3, Local_19[6 /*10*/].f_4, &(Local_19[6 /*10*/].f_2), 0, 0);
	__LIB_3__::func_882(Local_19[6 /*10*/].f_3, Local_19[6 /*10*/].f_4, &(Local_19[6 /*10*/].f_2), Local_19[6 /*10*/].f_8, 1, 0, 0, 0);
	func_222(Local_19[6 /*10*/].f_7);
	bLocal_204 = true;
	return true;
}

bool func_68(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
				func_68(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
						__LIB_1__::func_450(38, COLLECTION::_0x13AAECDA43318BFE(-2076669067, iVar6), COLLECTION::_0xD52D20B0C76BB26D(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						__LIB_1__::func_450(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
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
		__LIB_10__::func_252(28);
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
			__LIB_1__::func_843(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1718133314))
		{
			__LIB_1__::func_844(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1738650224))
		{
			__LIB_1__::func_845(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, 949916894))
		{
			__LIB_1__::func_846(iParam0);
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
			__LIB_1__::func_847(iParam0, iParam1);
			__LIB_1__::func_759(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, -1697809989))
		{
			__LIB_1__::func_858(iParam0, 0, 0, 0);
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
						func_68(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_68(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_68(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_68(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_68(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_68(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_68(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				__LIB_10__::func_252(24);
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
					func_68(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_68(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
			__LIB_10__::func_379(iParam0);
		}
		if (__LIB_0__::func_192(iParam0, -1979000645))
		{
			__LIB_10__::func_485(iParam0);
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
				func_68(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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

bool func_70(char[4] cParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(cParam0->f_348)))
	{
		if (!__LIB_18__::func_244(&(cParam0->f_352), cParam0->f_348, 0, 0))
		{
			return false;
		}
	}
	else
	{
		__LIB_10__::func_263(1, 1, 1);
		__LIB_0__::func_11(cParam0);
		if (!__LIB_10__::func_605(cParam0))
		{
			return false;
		}
		if (__LIB_6__::func_904())
		{
			__LIB_3__::func_732(1);
			return false;
		}
	}
	if (!__LIB_0__::func_1(Global_1392626[*cParam0 /*32*/].f_9, 32))
	{
		return false;
	}
	return true;
}

int func_73(char[4] cParam0)
{
	char cVar0[32];
	StringCopy(&cVar0, cParam0->f_346, 32);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		return 1;
	}
	return func_322(cVar0, &(cParam0->f_32), cParam0);
}

int func_77(char[4] cParam0)
{
	TASK::TASK_LOOK_AT_ENTITY(Global_35, Local_90[0 /*34*/], 1000, 0, 51, 0);
	return 8;
}

int func_81(char[4] cParam0)
{
	int iVar0;
	int iVar10;
	int iVar11;
	int iVar12;
	if (!__LIB_0__::func_75(&uLocal_331))
	{
		if (func_326(cParam0))
		{
			__LIB_1__::func_283(&uLocal_331, 0);
		}
	}
	else if (__LIB_1__::func_313(&uLocal_331, 1.3f))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 26, false);
		return 9;
	}
	if (__LIB_1__::func_205(Global_35, iLocal_302, 1, 0) || __LIB_1__::func_205(Global_35, iLocal_303, 1, 0))
	{
		if (__LIB_5__::func_783(229))
		{
			__LIB_4__::func_524(229);
		}
	}
	PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
	switch (__LIB_13__::func_842())
	{
		case 0:
			func_331(1);
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), Local_90[0 /*34*/], 8, 0, 1);
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), Local_90[0 /*34*/], 3, 0, 1);
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), Local_90[0 /*34*/], 19, 0, 1);
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), Local_90[0 /*34*/], 15, 0, 1);
			if (!func_332(33554432))
			{
				WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
				TASK::TASK_SWAP_WEAPON(Global_35, 0, 1, 0, 0);
				func_222(33554432);
			}
			if ((((iLocal_211 >= 2 || iVar0 == 19) || iVar0 == 7) && !__LIB_0__::func_481(1)) && !func_332(4096))
			{
				__LIB_10__::func_513(&(cParam0->f_2106), "LSHSS_IG1_SILVR", 0);
				func_222(4096);
			}
			if (func_335())
			{
				if (__LIB_0__::func_665(__LIB_3__::func_136(906448125, 0), Global_35, 1, 1) > 1f && !__LIB_2__::func_769(906448125))
				{
					__LIB_0__::func_68(906448125, 0, 0);
					__LIB_1__::func_948(906448125, 1, 0f, 0, 0, 0f, 0, 0);
				}
				if (__LIB_0__::func_665(__LIB_3__::func_136(1189146288, 0), Global_35, 1, 1) > 1f && !__LIB_2__::func_769(1189146288))
				{
					__LIB_0__::func_68(1189146288, 0, 0);
					__LIB_1__::func_948(1189146288, 1, 0f, 0, 0, 0f, 0, 0);
				}
			}
			if (!func_67())
			{
				return 8;
			}
			if ((__LIB_1__::func_205(Global_35, iLocal_302, 1, 0) || __LIB_1__::func_205(Global_35, iLocal_303, 1, 0)) && !__LIB_1__::func_322("LSHSS_COWER"))
			{
				PED::_0xAE6004120C18DF97(Local_90[0 /*34*/], 0, 1);
				PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "OnFootIntimidateForced", true, 5000);
				__LIB_6__::func_815(&iLocal_218, Local_90[0 /*34*/]);
				__LIB_9__::func_903(&(Local_279[0 /*17*/]));
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
				if (bLocal_208 == 0)
				{
					ENTITY::SET_ENTITY_INVINCIBLE(Local_90[0 /*34*/], true);
				}
				PED::_0xFC3DB99C8144CD81(Local_90[0 /*34*/], iLocal_304, 1, 0, 0);
				PED::_0xFC3DB99C8144CD81(Global_35, iLocal_304, 1, 0, 0);
				AUDIO::_0xAC84686C06184B0D("Beat_Up_Scene", "LSHSS_Scenes");
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_90[0 /*34*/], 5, false);
				AUDIO::_0x6339C1EA3979B5F7("Investigate_Scene", "LSHSS_Scenes");
				AUDIO::PREPARE_MUSIC_EVENT("LSHSS_INTERROGATION");
				MAP::REMOVE_BLIP(&iLocal_160);
				if (!MAP::DOES_BLIP_EXIST(iLocal_160))
				{
					__LIB_10__::func_528(&iLocal_160, Local_90[0 /*34*/], joaat("BLIP_STYLE_ENEMY"), 0);
				}
				PED::_0xB8DE69D9473B7593(Local_90[0 /*34*/], 3);
				PED::SET_PED_CONFIG_FLAG(Global_35, 26, false);
				PED::SET_PED_CONFIG_FLAG(Global_35, 334, true);
				PED::SET_PED_CONFIG_FLAG(Global_35, 360, true);
				PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 359, true);
				PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_WROBEL"));
				func_64(1);
			}
			break;
		case 1:
			if ((((iLocal_211 >= 2 || iVar0 == 19) || iVar0 == 7) && !__LIB_0__::func_481(1)) && !func_332(4096))
			{
				__LIB_10__::func_513(&(cParam0->f_2106), "LSHSS_IG1_SILVR", 0);
				func_222(4096);
			}
			func_331(0);
			if (func_335())
			{
				if (__LIB_0__::func_665(__LIB_3__::func_136(906448125, 0), Global_35, 1, 1) > 1f && !__LIB_2__::func_769(906448125))
				{
					__LIB_0__::func_68(906448125, 0, 0);
					__LIB_1__::func_948(906448125, 1, 0f, 0, 0, 0f, 0, 0);
				}
				if (__LIB_0__::func_665(__LIB_3__::func_136(1189146288, 0), Global_35, 1, 1) > 1f && !__LIB_2__::func_769(1189146288))
				{
					__LIB_0__::func_68(1189146288, 0, 0);
					__LIB_1__::func_948(1189146288, 1, 0f, 0, 0, 0f, 0, 0);
				}
			}
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), Local_90[0 /*34*/], 8, 0, 1);
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), Local_90[0 /*34*/], 3, 0, 1);
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), Local_90[0 /*34*/], 19, 0, 1);
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), Local_90[0 /*34*/], 15, 0, 1);
			if (func_335())
			{
				AUDIO::TRIGGER_MUSIC_EVENT("LSHSS_INTERROGATION");
				__LIB_13__::func_493(Local_90[0 /*34*/], 1);
				WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 0, 0);
				__LIB_1__::func_422("SELL_BEAT", 7500, 0, 1, 0, 0, -1, -1, 0);
				__LIB_10__::func_561(cParam0, "SELL_BEAT", 0f, 0f, 0f);
				func_64(2);
			}
			break;
		case 2:
			if ((((iLocal_211 >= 2 || iVar0 == 19) || iVar0 == 7) && !__LIB_0__::func_481(1)) && !func_332(4096))
			{
				__LIB_10__::func_513(&(cParam0->f_2106), "LSHSS_IG1_SILVR", 0);
				func_222(4096);
			}
			func_331(0);
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), Local_90[0 /*34*/], 8, 0, 1);
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), Local_90[0 /*34*/], 3, 0, 1);
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), Local_90[0 /*34*/], 19, 0, 1);
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), Local_90[0 /*34*/], 15, 0, 1);
			if (__LIB_10__::func_529(&(uLocal_305[5]), func_345(5), 0, 0))
			{
				WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 0, 0);
				func_64(3);
			}
			break;
		case 3:
			if (!PED::_0x57779B55B83E2BEA(Local_90[0 /*34*/]))
			{
			}
			else if (PED::_0x57779B55B83E2BEA(Local_90[0 /*34*/]))
			{
				__LIB_1__::func_283(&uLocal_176, 1);
				func_64(4);
			}
			break;
		case 4:
			PED::_0xB8DE69D9473B7593(Global_35, 3);
			PED::_0xB8DE69D9473B7593(Local_90[0 /*34*/], 3);
			PED::_0x7C10221CE718AA72(Local_90[0 /*34*/], 11);
			PED::_0xB8DE69D9473B7593(Global_35, 4);
			if ((iLocal_211 >= 11 && !func_347()) && PED::_0x0E99E3BF11BB6367(Global_35))
			{
				if (iLocal_359 == 0)
				{
					PED::_0x789DABD18E9024DB(Global_35, 32768, 0);
					iLocal_359 = 1;
				}
			}
			if (func_335())
			{
				if (__LIB_0__::func_665(__LIB_3__::func_136(906448125, 0), Global_35, 1, 1) > 1f && !__LIB_2__::func_769(906448125))
				{
					__LIB_0__::func_68(906448125, 0, 0);
					__LIB_1__::func_948(906448125, 1, 0f, 0, 0, 0f, 0, 0);
				}
				if (__LIB_0__::func_665(__LIB_3__::func_136(1189146288, 0), Global_35, 1, 1) > 1f && !__LIB_2__::func_769(1189146288))
				{
					__LIB_0__::func_68(1189146288, 0, 0);
					__LIB_1__::func_948(1189146288, 1, 0f, 0, 0, 0f, 0, 0);
				}
			}
			PED::_0x789DABD18E9024DB(Global_35, 8, 0);
			func_331(0);
			if (__LIB_0__::func_481(1))
			{
				func_348("LSHSS_HIT3");
				func_348("LSHSS_HIT1");
				func_348("LSHSS_IG1_SILVR");
				func_348("LSHSS_PAIN");
			}
			else if (iLocal_211 >= 11)
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE_ATTACK"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), true);
				PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), Local_90[0 /*34*/], 7, 0, 0);
				PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), Local_90[0 /*34*/], 7, 2, 1);
				PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), Local_90[0 /*34*/], 20, 2, 1);
			}
			else
			{
				PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE_ATTACK"), true);
				PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), true);
				PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), Local_90[0 /*34*/], 7, 0, 0);
				PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), Local_90[0 /*34*/], 7, 2, 0);
				PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), Local_90[0 /*34*/], 20, 2, 0);
			}
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), Local_90[0 /*34*/], 8, 0, 1);
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), Local_90[0 /*34*/], 3, 0, 1);
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), Local_90[0 /*34*/], 19, 0, 1);
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), Local_90[0 /*34*/], 15, 0, 1);
			PED::SET_PED_RESET_FLAG(Local_90[0 /*34*/], 49, true);
			PED::SET_PED_RESET_FLAG(Global_35, 88, true);
			if (__LIB_1__::func_871(&uLocal_176) > 2000)
			{
				if (func_347())
				{
					iLocal_211++;
					__LIB_1__::func_283(&uLocal_176, 1);
				}
				if (SCRIPTS::GET_EVENT_EXISTS(0, joaat("EVENT_PLAYER_PROMPT_TRIGGERED")))
				{
					SCRIPTS::GET_EVENT_DATA(0, iVar10, &iVar0, 10);
				}
			}
			if (iLocal_211 < 11)
			{
				if (!PED::_0x57779B55B83E2BEA(Local_90[0 /*34*/]))
				{
					TASK::_TASK_INTIMIDATED_2(Local_90[0 /*34*/], Global_35, 0, 1, 1, 1, 0, 1, 196610);
				}
			}
			if (((iLocal_211 >= 11 && !func_347()) && !PED::_0x0E99E3BF11BB6367(Global_35)) && !__LIB_0__::func_481(1))
			{
				switch (iLocal_159)
				{
					case 0:
						__LIB_0__::func_769();
						__LIB_1__::func_390("SELL_BEAT", 1);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_90[0 /*34*/], true);
						ENTITY::SET_ENTITY_INVINCIBLE(Local_90[0 /*34*/], false);
						AUDIO::PREPARE_MUSIC_EVENT("LSHSS_LOOT");
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), true);
						PED::_0x923583741DC87BCE(Local_90[0 /*34*/], "Default");
						PED::_0x89F5E7ADECCCB49C(Local_90[0 /*34*/], "Scared");
						PED::REMOVE_PED_DEFENSIVE_AREA(Local_90[0 /*34*/], false);
						PED::REMOVE_PED_DEFENSIVE_AREA(Global_35, false);
						PED::_0x789DABD18E9024DB(Global_35, 28, 0);
						PED::SET_PED_CONFIG_FLAG(Global_35, 26, true);
						PED::SET_PED_CONFIG_FLAG(Global_35, 334, false);
						TASK::CLEAR_PED_TASKS(Global_35, true, false);
						PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 431, false);
						PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 178, false);
						PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 225, false);
						PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 222, false);
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_305[5], "Wrobel", Local_90[0 /*34*/], 0);
						iLocal_159 = 1;
						break;
					case 1:
						if (!(VOLUME::_IS_POSITION_INSIDE_VOLUME(iLocal_304, ENTITY::GET_ENTITY_COORDS(Global_35, true, false)) && VOLUME::_IS_POSITION_INSIDE_VOLUME(iLocal_304, ENTITY::GET_ENTITY_COORDS(Local_90[0 /*34*/], true, false))))
						{
							iLocal_159 = 2;
						}
						else
						{
							iLocal_159 = 5;
						}
						break;
					case 2:
						__LIB_1__::func_283(&uLocal_185, 0);
						iLocal_159 = 3;
						break;
					case 3:
						__LIB_1__::func_283(&uLocal_185, 0);
						if (__LIB_0__::func_94(Global_35, VOLUME::_GET_VOLUME_COORDS(iLocal_304), 1) < 1.5f || __LIB_0__::func_94(Local_90[0 /*34*/], VOLUME::_GET_VOLUME_COORDS(iLocal_304), 1) < 1.5f)
						{
							iLocal_159 = 4;
						}
						else
						{
							iLocal_159 = 5;
						}
						break;
					case 4:
						__LIB_1__::func_283(&uLocal_185, 0);
						iLocal_159 = 5;
						break;
					case 5:
						__LIB_1__::func_283(&uLocal_185, 0);
						if (!func_332(4194304))
						{
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(Global_35, Local_90[0 /*34*/], 1000, -1f, -1f, -1f);
							func_351();
							func_222(4194304);
						}
						else if (__LIB_0__::func_665(Global_35, Local_90[0 /*34*/], 1, 1) < 3f && PED::IS_PED_FACING_PED(Global_35, Local_90[0 /*34*/], 20f))
						{
							if (!__LIB_0__::func_481(1) || __LIB_0__::func_265(&uLocal_185) > 0.2f)
							{
								ANIMSCENE::START_ANIM_SCENE(uLocal_305[5]);
								ANIMSCENE::SET_ANIM_SCENE_RATE(uLocal_305[5], 1.3f);
								PED::SET_PED_CONFIG_FLAG(Global_35, 26, true);
								if (VOLUME::_DOES_VOLUME_EXIST(iLocal_304))
								{
									VOLUME::_DELETE_VOLUME(iLocal_304);
								}
								TASK::TASK_LOOK_AT_ENTITY(Global_35, Local_90[0 /*34*/], -1, 0, 51, 0);
								PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), true);
								PED::SET_PED_CAN_BE_TARGETTED(Local_90[0 /*34*/], false);
								__LIB_10__::func_513(&(cParam0->f_2106), "LSHSS_IG1_POST", 0);
								__LIB_10__::func_378(*cParam0, func_41(1), func_41(2), 1, 2);
								iLocal_358 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), ENTITY::GET_ENTITY_COORDS(Local_90[0 /*34*/], true, false), 0f, 0f, 0f, 0.75f, 0.75f, 0.75f);
								PED::_SET_PED_BLACKBOARD_BOOL(Local_90[0 /*34*/], "injury", true, -1);
								func_64(5);
							}
						}
						break;
				}
				return 8;
			}
			if ((((iLocal_211 >= 2 || iVar0 == 19) || iVar0 == 7) && !__LIB_0__::func_481(1)) && !func_332(4096))
			{
				__LIB_10__::func_513(&(cParam0->f_2106), "LSHSS_IG1_SILVR", 0);
				func_222(4096);
			}
			if ((((iLocal_211 >= 5 || iVar0 == 19) || iVar0 == 7) && !__LIB_0__::func_481(1)) && !func_332(8192))
			{
				iVar11 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
				if (iVar11 == 0)
				{
					__LIB_10__::func_513(&(cParam0->f_2106), "LSHSS_HIT1", 0);
				}
				else
				{
					__LIB_10__::func_513(&(cParam0->f_2106), "LSHSS_HIT3", 0);
				}
				func_222(8192);
			}
			if (func_332(8192) && !__LIB_0__::func_481(1))
			{
				if (iVar0 == 19 || iVar0 == 7)
				{
					iLocal_211 = 11;
				}
			}
			if (iLocal_211 >= iLocal_212)
			{
				iLocal_212 += 2;
				if (iLocal_211 >= 11)
				{
					iLocal_212 = 11;
				}
				if (!__LIB_0__::func_481(1) && func_347())
				{
					__LIB_1__::func_283(&uLocal_188, 0);
					if (__LIB_1__::func_285(&uLocal_188, 1f))
					{
						__LIB_10__::func_513(&(cParam0->f_2106), "LSHSS_PAIN", 0);
					}
				}
			}
			break;
		case 5:
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE_ATTACK"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
			VOLUME::_SET_VOLUME_COORDS(iLocal_358, ENTITY::GET_ENTITY_COORDS(Local_90[0 /*34*/], true, false));
			if (__LIB_10__::func_529(&(uLocal_305[6]), func_345(6), 0, 0))
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(uLocal_305[5]) > 0.35f)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
				}
				if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(uLocal_305[5]) > 0.956f)
				{
					ANIMSCENE::RESET_ANIM_SCENE(uLocal_305[5], 0);
				}
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(uLocal_305[5], false))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_326))
					{
						iLocal_326 = OBJECT::CREATE_OBJECT(TASK::_0xE47DD64B9F02677D(joaat("PROVISION_GOLDRING")), -611.1f, -30.7f, 85.65f, true, true, false, false, false);
					}
					PED::SET_PED_CONFIG_FLAG(Global_35, 26, true);
					iLocal_215 = __LIB_1__::func_614(joaat("PROVISION_GOLDRING"), 0, 0);
					iLocal_216 = __LIB_1__::func_614(joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP"), 0, 0);
					iLocal_217 = __LIB_1__::func_614(joaat("PROVISION_WATCH"), 0, 0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
					PED::SET_PED_CAN_BE_TARGETTED(Local_90[0 /*34*/], true);
					TASK::CLEAR_PED_TASKS(Global_35, true, false);
					AUDIO::TRIGGER_MUSIC_EVENT("LSHSS_LOOT");
					AUDIO::_0xAC84686C06184B0D("Loot_House_Scene", "LSHSS_Scenes");
					__LIB_4__::func_63(Local_90[0 /*34*/], 50);
					PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 336, true);
					PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 297, false);
					PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 225, false);
					PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 222, false);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_305[6], "ARTHUR", Global_35, 0);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_305[6], "Wrobel", Local_90[0 /*34*/], 0);
					ENTITY::SET_ENTITY_INVINCIBLE(Local_90[0 /*34*/], false);
					ANIMSCENE::_0xDF7B5144E25CD3FE(uLocal_305[6], "pl_Dialogue_01_arthur");
					ANIMSCENE::_0xDF7B5144E25CD3FE(uLocal_305[6], "pl_Dialogue_02_arthur");
					ANIMSCENE::_0xDF7B5144E25CD3FE(uLocal_305[6], "pl_Dialogue_01_wrobel");
					ANIMSCENE::_0xDF7B5144E25CD3FE(uLocal_305[6], "pl_Dlg_01");
					ANIMSCENE::_0xDF7B5144E25CD3FE(uLocal_305[6], "pl_Dlg_02");
					ANIMSCENE::_0xDF7B5144E25CD3FE(uLocal_305[6], "pl_Dlg_03");
					ANIMSCENE::_0xDF7B5144E25CD3FE(uLocal_305[6], "pl_Dlg_04");
					ANIMSCENE::_0xDF7B5144E25CD3FE(uLocal_305[6], "pl_enter");
					ANIMSCENE::_0xDF7B5144E25CD3FE(uLocal_305[6], "pl_Idle_01");
					ANIMSCENE::_0xDF7B5144E25CD3FE(uLocal_305[6], "pl_Idle_02");
					ANIMSCENE::_0xDF7B5144E25CD3FE(uLocal_305[6], "pl_Reveal_Gun");
					ANIMSCENE::_0xDF7B5144E25CD3FE(uLocal_305[6], "pl_Reveal_Shove");
					if (TASK::_DOES_SCENARIO_POINT_EXIST(Local_19[0 /*10*/].f_9))
					{
						TASK::_SET_SCENARIO_POINT_ACTIVE(Local_19[0 /*10*/].f_9, true);
					}
					if (TASK::_DOES_SCENARIO_POINT_EXIST(Local_19[1 /*10*/].f_9))
					{
						TASK::_SET_SCENARIO_POINT_ACTIVE(Local_19[1 /*10*/].f_9, true);
					}
					if (TASK::_DOES_SCENARIO_POINT_EXIST(Local_19[2 /*10*/].f_9))
					{
						TASK::_SET_SCENARIO_POINT_ACTIVE(Local_19[2 /*10*/].f_9, true);
					}
					if (TASK::_DOES_SCENARIO_POINT_EXIST(Local_19[3 /*10*/].f_9))
					{
						TASK::_SET_SCENARIO_POINT_ACTIVE(Local_19[3 /*10*/].f_9, true);
					}
					if (TASK::_DOES_SCENARIO_POINT_EXIST(Local_19[4 /*10*/].f_9))
					{
						TASK::_SET_SCENARIO_POINT_ACTIVE(Local_19[4 /*10*/].f_9, true);
					}
					if (TASK::_DOES_SCENARIO_POINT_EXIST(Local_19[5 /*10*/].f_9))
					{
						TASK::_SET_SCENARIO_POINT_ACTIVE(Local_19[5 /*10*/].f_9, true);
					}
					if (TASK::_DOES_SCENARIO_POINT_EXIST(Local_19[6 /*10*/].f_9))
					{
						TASK::_SET_SCENARIO_POINT_ACTIVE(Local_19[6 /*10*/].f_9, true);
					}
					PED::_0x949B2F9ED2917F5D(Local_90[0 /*34*/], 3);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
					if (((Local_19[0 /*10*/] == 0 || Local_19[1 /*10*/] == 0) || Local_19[2 /*10*/] == 0) || Local_19[3 /*10*/] == 0)
					{
						iLocal_165 = MAP::_BLIP_ADD_FOR_AREA(1247852480, -612.7f, -29.5f, 86f, 10f, 15f, 0f, 19);
					}
					if (MAP::DOES_BLIP_EXIST(iLocal_160))
					{
						MAP::REMOVE_BLIP(&iLocal_160);
					}
					__LIB_1__::func_948(295238741, 0, 0f, 0, 0, 0f, 0, 0);
					__LIB_1__::func_948(-3516232, 0, 0f, 0, 0, 0f, 0, 0);
					bLocal_297 = true;
					PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT"), true);
					PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT2"), true);
					PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP"), true);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), true);
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
					TASK::CLEAR_PED_TASKS(Global_35, true, false);
					PED::_0xA3A9299C4F2ADB98(Local_90[0 /*34*/]);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_90[0 /*34*/], true);
					PED::SET_PED_CAN_BE_TARGETTED(Local_90[0 /*34*/], true);
					TASK::CLEAR_PED_TASKS(Local_90[0 /*34*/], true, false);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_90[0 /*34*/], -611.1855f, -29.7006f, 85.97f, 1f, 9000, 0.25f, 514, 179f);
					__LIB_0__::func_68(138361190, 0, 0);
					__LIB_1__::func_343(138361190, 0);
					OBJECT::_0x1BC47A9DEDC8DF5D(138361190, 0);
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(138361190, 0f, false);
					OBJECT::_0x3A77DAE8B4FD7586(138361190, 1);
					__LIB_0__::func_68(365712512, 0, 0);
					__LIB_1__::func_343(365712512, 0);
					OBJECT::_0x1BC47A9DEDC8DF5D(365712512, 0);
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(365712512, 0f, false);
					OBJECT::_0x3A77DAE8B4FD7586(365712512, 1);
					__LIB_1__::func_948(906448125, 0, 0, 0, 1, 0, 0, 0);
					__LIB_1__::func_948(1189146288, 0, 0, 0, 1, 0, 0, 0);
					func_64(7);
				}
			}
			break;
		case 7:
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE_ATTACK"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
			VOLUME::_SET_VOLUME_COORDS(iLocal_358, ENTITY::GET_ENTITY_COORDS(Local_90[0 /*34*/], true, false));
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
			if (iLocal_209 == 0)
			{
				__LIB_1__::func_283(&uLocal_182, 0);
				if (__LIB_1__::func_313(&uLocal_182, 1.5f))
				{
					__LIB_10__::func_561(cParam0, "SELL_LOOT", 0f, 0f, 0f);
					__LIB_0__::func_565("SELL_LOOT", 7500, 0, 0, 0, 1);
					iLocal_209 = 1;
				}
			}
			if ((!ANIMSCENE::_IS_ANIM_SCENE_STARTED(uLocal_305[6], false) && ANIMSCENE::_0x23E33CB9F4A3F547(uLocal_305[6], "pl_enter")) && (!__LIB_0__::func_163(Local_90[0 /*34*/], 713668775) || __LIB_0__::func_94(Local_90[0 /*34*/], -611.1855f, -29.7006f, 85.97f, 1) < 0.3f))
			{
				__LIB_0__::func_172(iLocal_358);
				__LIB_1__::func_948(1189146288, 0, 0f, 0, 0, 0f, 0, 0);
				__LIB_1__::func_948(906448125, 0, 0f, 0, 0, 0f, 0, 0);
				ANIMSCENE::START_ANIM_SCENE(uLocal_305[6]);
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uLocal_305[6], "pl_enter", true);
				__LIB_1__::func_948(906448125, 0, 0, 0, 1, 0, 0, 0);
				__LIB_1__::func_948(1189146288, 0, 0, 0, 1, 0, 0, 0);
				PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 297, true);
				PED::SET_PED_CAN_BE_TARGETTED(Local_90[0 /*34*/], true);
				MISC::_0xE98D55C5983F2509(Local_90[0 /*34*/]);
				__LIB_2__::func_279(Local_90[0 /*34*/], 1);
				func_64(6);
			}
			break;
		case 6:
			__LIB_1__::func_283(&uLocal_179, 0);
			if (ANIMSCENE::_0x1F0E401031E20146(uLocal_305[6], "pl_enter"))
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE_ATTACK"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
			}
			if (iLocal_209 == 0)
			{
				__LIB_1__::func_283(&uLocal_182, 0);
				if (__LIB_1__::func_313(&uLocal_182, 1.5f))
				{
					__LIB_10__::func_561(cParam0, "SELL_LOOT", 0f, 0f, 0f);
					__LIB_0__::func_565("SELL_LOOT", 7500, 0, 0, 0, 1);
					iLocal_209 = 1;
				}
			}
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), true);
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
			if (ANIMSCENE::_0x1F0E401031E20146(uLocal_305[6], "pl_enter") && ANIMSCENE::_0x8D81E7824B7753F7(uLocal_305[6], "s_IDLE_01", 1))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uLocal_305[6], "pl_Idle_01", true);
			}
			if (func_360(cParam0))
			{
				PED::SET_PED_CONFIG_FLAG(Global_35, 26, false);
				PED::_0x949B2F9ED2917F5D(Local_90[0 /*34*/], 3);
				PED::_0x57F35552E771BE9D(Local_90[0 /*34*/], 11);
				PED::_SET_PED_BLACKBOARD_BOOL(Local_90[0 /*34*/], "injury", false, -1);
				__LIB_10__::func_513(&(cParam0->f_2106), "LSHSS_IG1_TRUST", 0);
				PED::SET_PED_CONFIG_FLAG(Global_35, 26, false);
				PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 509, true);
				PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 315, false);
				PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 130, false);
				PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 301, false);
				PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 331, false);
				PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 413, true);
				PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 330, true);
				func_64(8);
			}
			break;
		case 8:
			if (!__LIB_0__::func_163(Local_90[0 /*34*/], 713668775))
			{
				if (__LIB_2__::func_401(Local_90[0 /*34*/], 1, 1, 0, 0, 0))
				{
					TASK::CLEAR_SEQUENCE_TASK(&iVar12);
					TASK::OPEN_SEQUENCE_TASK(&iVar12);
					TASK::TASK_COWER(0, -1, Global_35, 0);
					TASK::CLOSE_SEQUENCE_TASK(iVar12);
					TASK::TASK_PERFORM_SEQUENCE(Local_90[0 /*34*/], iVar12);
					TASK::CLEAR_SEQUENCE_TASK(&iVar12);
				}
				else if (__LIB_0__::func_163(Local_90[0 /*34*/], 242628503))
				{
					TASK::CLEAR_PED_TASKS(Local_90[0 /*34*/], true, false);
				}
			}
			if (bLocal_205 == 1 && bLocal_206 == 1)
			{
				PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 297, false);
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 3f);
				PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), true);
				PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), true);
				func_64(10);
			}
			break;
		case 10:
			if (__LIB_10__::func_529(&(uLocal_305[7]), func_345(7), 0, 0))
			{
				__LIB_2__::func_480(&(cParam0->f_2277), 0, 0, 1, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_305[7], "Wrobel", Local_90[0 /*34*/], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_305[7], "FrontDoor", __LIB_3__::func_136(1189146288, 0), 0);
				ANIMSCENE::_0xDF7B5144E25CD3FE(uLocal_305[7], "pl_action");
				AUDIO::_0xAC84686C06184B0D("Investigate_Barn_Scene", "LSHSS_Scenes");
				func_64(11);
			}
			break;
		case 11:
			PED::_0x949B2F9ED2917F5D(Global_35, 0);
			PED::_0x949B2F9ED2917F5D(Global_35, 1);
			PED::_0x949B2F9ED2917F5D(Global_35, 2);
			break;
	}
	if (!func_67())
	{
		return 8;
	}
	if (ENTITY::IS_ENTITY_DEAD(Local_90[0 /*34*/]) && iLocal_207 == 0)
	{
		__LIB_10__::func_525(3, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
		iLocal_207 = 1;
	}
	return 8;
}

void func_82(int iParam0, bool bParam1, bool bParam2)
{
	if (!__LIB_4__::func_810(iParam0))
	{
		return;
	}
	else if (!__LIB_0__::func_6(Global_1392626[iParam0 /*32*/].f_3))
	{
		return;
	}
	if (!__LIB_8__::func_779(1))
	{
		__LIB_10__::func_226(1);
	}
	__LIB_8__::func_985(iParam0);
	if (iParam0 == 0)
	{
		MISC::_0xCC3EDC5614B03F61(29);
	}
	else if (iParam0 == 6)
	{
		MISC::_0xCC3EDC5614B03F61(28);
	}
	else if (iParam0 == 3)
	{
		MISC::_0xCC3EDC5614B03F61(30);
	}
	MISC::CLEAR_BIT(&(Global_40.f_9052), iParam0);
	if (iParam0 == 2)
	{
		Global_40.f_9422[2 /*7*/] = __LIB_0__::func_23();
		__LIB_1__::func_446(&(Global_40.f_9422[2 /*7*/]), 0, 0, 0, 3, 0, 0, 0);
	}
	func_368(Global_1392626[iParam0 /*32*/].f_3, bParam2, bParam1, 0, 1);
	if (Global_1392626[iParam0 /*32*/].f_7 != -1)
	{
		__LIB_10__::func_376(Global_1392626[iParam0 /*32*/].f_7);
	}
}

bool func_103(char[4] cParam0)
{
	int iVar0;
	if (func_335())
	{
		__LIB_1__::func_283(&uLocal_360, 0);
		if (__LIB_1__::func_313(&uLocal_360, 20f))
		{
			__LIB_1__::func_422("SELL_LEAVE", 7500, 0, 0, 0, 0, -1, -1, 0);
		}
	}
	if (__LIB_1__::func_205(Global_35, iLocal_302, 1, 0) || __LIB_1__::func_205(Global_35, iLocal_303, 1, 0))
	{
		if (__LIB_5__::func_783(229))
		{
			__LIB_4__::func_524(229);
		}
	}
	func_326(cParam0);
	iVar0 = __LIB_10__::func_266(cParam0);
	if (iVar0 == 0 && !func_335())
	{
		if (__LIB_0__::func_665(__LIB_3__::func_136(906448125, 0), Global_35, 1, 1) > 10f && !__LIB_2__::func_769(906448125))
		{
			__LIB_0__::func_68(906448125, 0, 0);
			__LIB_1__::func_948(906448125, 1, 0f, 0, 0, 0f, 0, 0);
		}
		if (__LIB_0__::func_665(__LIB_3__::func_136(1189146288, 0), Global_35, 1, 1) > 10f && !__LIB_2__::func_769(1189146288))
		{
			__LIB_0__::func_68(1189146288, 0, 0);
			__LIB_1__::func_948(1189146288, 1, 0f, 0, 0, 0f, 0, 0);
		}
		if (__LIB_2__::func_769(295238741))
		{
			__LIB_1__::func_948(295238741, 0, 0f, 0, 0, 0f, 0, 0);
		}
		if (__LIB_2__::func_769(-3516232))
		{
			__LIB_1__::func_948(-3516232, 0, 0f, 0, 0, 0f, 0, 0);
		}
	}
	if (__LIB_1__::func_707(joaat("PROVISION_GOLDRING"), iLocal_215 + 1, 0))
	{
		func_135(joaat("PROVISION_GOLDRING"), 1, 1, -142743235, 0);
		iLocal_215 = 0;
	}
	if (__LIB_1__::func_707(joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP"), iLocal_216 + 1, 0))
	{
		func_135(joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP"), 1, 1, -142743235, 0);
		iLocal_216 = 0;
	}
	if (__LIB_1__::func_707(joaat("PROVISION_WATCH"), iLocal_217 + 1, 0))
	{
		func_135(joaat("PROVISION_WATCH"), 1, 1, -142743235, 0);
		iLocal_217 = 0;
	}
	if (iVar0 == 0)
	{
		if (iLocal_357 == 0)
		{
			func_360(cParam0);
		}
		if (!__LIB_1__::func_707(-774242862 /* GXTEntry: "Wróbel\'s Valuables" */, 1, 0))
		{
			func_68(-774242862 /* GXTEntry: "Wróbel\'s Valuables" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		}
		if (__LIB_10__::func_529(&(uLocal_305[7]), func_345(7), 0, 0))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_305[7], "Wrobel", Local_90[0 /*34*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_305[7], "FrontDoor", __LIB_3__::func_136(1189146288, 0), 0);
			ANIMSCENE::_0xDF7B5144E25CD3FE(uLocal_305[7], "pl_action");
		}
		if (!func_332(262144) && __LIB_0__::func_94(Global_35, -632.1f, -67.1f, 83.3f, 1) < 15f)
		{
			PED::_0x2EB75FB86C41F026(Local_90[1 /*34*/], 3, 1);
			PED::_0x06D26A96CA1BCA75(Local_90[1 /*34*/], 3, 1f, 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_90[1 /*34*/], false);
			__LIB_0__::func_105(1);
			__LIB_0__::func_45("SELL_H_HORSE", 10000, 0, 0, 0, 1);
			func_222(262144);
		}
		else if (!func_332(524288))
		{
			if (PED::_0x5203038FF8BAE577(Global_35, 74, 2000))
			{
				func_222(524288);
			}
		}
		if (!func_332(65536) && __LIB_0__::func_272(Local_90[0 /*34*/], 11))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(Global_35, -630f, -52f, 82.9f, 3f, 3f, 3f, false, true, 0) && ENTITY::IS_ENTITY_AT_COORD(Local_90[1 /*34*/], -629f, -54.2f, 82.9f, 5f, 5f, 5f, false, true, 0))
			{
				MAP::REMOVE_BLIP(&iLocal_162);
				MAP::REMOVE_BLIP(&iLocal_163);
				iLocal_357 = 1;
				MISC::_0xE98D55C5983F2509(Local_90[0 /*34*/]);
				PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 130, true);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_90[0 /*34*/], joaat("REL_PLAYER_ENEMY"));
				PED::SET_PED_CAN_BE_TARGETTED(Local_90[0 /*34*/], true);
				ENTITY::SET_ENTITY_INVINCIBLE(Local_90[0 /*34*/], false);
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uLocal_305[7], "pl_Action", true);
				ANIMSCENE::START_ANIM_SCENE(uLocal_305[7]);
				AUDIO::_0xAC84686C06184B0D("Ride_Scene", "LSHSS_Scenes");
				func_222(65536);
				__LIB_10__::func_513(&(cParam0->f_2106), "LSHSS_STEAL", 0);
			}
		}
	}
	if (__LIB_0__::func_665(Global_35, Local_90[0 /*34*/], 1, 1) > 50f)
	{
		if (__LIB_0__::func_163(Local_90[0 /*34*/], 242628503))
		{
			TASK::CLEAR_PED_TASKS(Local_90[0 /*34*/], true, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_90[0 /*34*/], false);
		}
	}
	if (((__LIB_0__::func_665(Global_35, Local_90[0 /*34*/], 1, 1) > 60f || ENTITY::IS_ENTITY_DEAD(Local_90[0 /*34*/])) || __LIB_0__::func_94(Local_90[0 /*34*/], -611f, -28.1f, 86f, 1) > 50f) && __LIB_10__::func_283(Local_90[0 /*34*/], -1082130432 /* Float: -1f */, 1116471296 /* Float: 70f */))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_90[0 /*34*/], joaat("REL_PLAYER_LIKE"));
		TASK::CLEAR_PED_TASKS(Local_90[0 /*34*/], true, false);
		TASK::TASK_WANDER_STANDARD(Local_90[0 /*34*/], 40000f, 0);
		__LIB_2__::func_426(&(Local_90[0 /*34*/]));
		__LIB_0__::func_121(885, 32);
		__LIB_0__::func_121(780, 32);
		__LIB_10__::func_534(21);
		UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
		PED::_0xEAE3B5B019C8D23F(Global_35, 262143);
		return true;
	}
	return false;
}

void func_105(char[4] cParam0)
{
	var uVar0[1];
	int iVar2;
	AUDIO::TRIGGER_MUSIC_EVENT("LSHSS_STOP");
	AUDIO::STOP_PED_SPEAKING(Local_90[0 /*34*/], false);
	PED::SET_PED_CONFIG_FLAG(Global_35, 448, false);
	if (MAP::DOES_BLIP_EXIST(iLocal_163))
	{
		MAP::REMOVE_BLIP(&iLocal_163);
	}
	if (MAP::DOES_BLIP_EXIST(iLocal_162))
	{
		MAP::REMOVE_BLIP(&iLocal_162);
	}
	if (MAP::DOES_BLIP_EXIST(iLocal_161))
	{
		MAP::REMOVE_BLIP(&iLocal_161);
	}
	if (MAP::DOES_BLIP_EXIST(iLocal_164))
	{
		MAP::REMOVE_BLIP(&iLocal_164);
	}
	if (MAP::DOES_BLIP_EXIST(iLocal_160))
	{
		MAP::REMOVE_BLIP(&iLocal_160);
	}
	if (MAP::DOES_BLIP_EXIST(iLocal_165))
	{
		MAP::REMOVE_BLIP(&iLocal_165);
	}
	PED::_0xDE7B2B4144906CDF(joaat("INTIMIDATED_ON_KNEES"), Local_90[0 /*34*/]);
	PED::_0xDE7B2B4144906CDF(joaat("INTIMIDATED_ON_ASS"), Local_90[0 /*34*/]);
	PED::_0xDE7B2B4144906CDF(joaat("INTIMIDATED_ON_FEET_REACTION"), Local_90[0 /*34*/]);
	__LIB_17__::func_705(Local_19[0 /*10*/].f_3, Local_19[0 /*10*/].f_4, &(Local_19[0 /*10*/].f_2), 0, 0);
	__LIB_17__::func_705(Local_19[1 /*10*/].f_3, Local_19[1 /*10*/].f_4, &(Local_19[1 /*10*/].f_2), 0, 0);
	__LIB_17__::func_705(Local_19[2 /*10*/].f_3, Local_19[2 /*10*/].f_4, &(Local_19[2 /*10*/].f_2), 0, 0);
	__LIB_17__::func_705(Local_19[3 /*10*/].f_3, Local_19[3 /*10*/].f_4, &(Local_19[3 /*10*/].f_2), 0, 0);
	__LIB_17__::func_705(Local_19[4 /*10*/].f_3, Local_19[4 /*10*/].f_4, &(Local_19[4 /*10*/].f_2), 0, 0);
	__LIB_17__::func_705(Local_19[5 /*10*/].f_3, Local_19[5 /*10*/].f_4, &(Local_19[5 /*10*/].f_2), 0, 0);
	__LIB_17__::func_705(Local_19[6 /*10*/].f_3, Local_19[6 /*10*/].f_4, &(Local_19[6 /*10*/].f_2), 0, 0);
	PED::SET_PED_CONFIG_FLAG(Global_35, 448, false);
	__LIB_2__::func_935(885, 0, 0, 0, 0, 0);
	__LIB_4__::func_866(&(Local_19[0 /*10*/].f_2), 1, 1);
	__LIB_4__::func_866(&(Local_19[1 /*10*/].f_2), 1, 1);
	__LIB_4__::func_866(&(Local_19[2 /*10*/].f_2), 1, 1);
	__LIB_4__::func_866(&(Local_19[3 /*10*/].f_2), 1, 1);
	__LIB_4__::func_866(&(Local_19[4 /*10*/].f_2), 1, 1);
	__LIB_4__::func_866(&(Local_19[5 /*10*/].f_2), 1, 1);
	__LIB_4__::func_866(&(Local_19[6 /*10*/].f_2), 1, 1);
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_301))
	{
		POPULATION::_0x74C2B3DC0B294102(iLocal_301);
		POPULATION::_0xA1CFB35069D23C23(iLocal_301);
	}
	if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iLocal_195, "Loansharking_Chair_Col"))
	{
		INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iLocal_195, "Loansharking_Chair_Col", true);
	}
	TASK::_GET_SCENARIO_POINT_CLOSE_TO_COORDS(-610.1f, -25.5f, 85f, 1f, &uVar0, 1);
	if (TASK::_DOES_SCENARIO_POINT_EXIST(uVar0[0]))
	{
		TASK::_SET_SCENARIO_POINT_ACTIVE(uVar0[0], true);
	}
	TASK::_GET_SCENARIO_POINT_CLOSE_TO_COORDS(-610.6f, -25.2f, 85.1f, 1f, &uVar0, 1);
	if (TASK::_DOES_SCENARIO_POINT_EXIST(uVar0[0]))
	{
		TASK::_SET_SCENARIO_POINT_ACTIVE(uVar0[0], true);
	}
	TASK::_GET_SCENARIO_POINT_CLOSE_TO_COORDS(-613.3f, -22.6f, 85f, 0.5f, &uVar0, 1);
	if (TASK::_DOES_SCENARIO_POINT_EXIST(uVar0[0]))
	{
		TASK::_SET_SCENARIO_POINT_ACTIVE(uVar0[0], true);
	}
	if (TASK::_DOES_SCENARIO_POINT_EXIST(Local_19[0 /*10*/].f_9))
	{
		TASK::_SET_SCENARIO_POINT_ACTIVE(Local_19[0 /*10*/].f_9, true);
	}
	if (TASK::_DOES_SCENARIO_POINT_EXIST(Local_19[1 /*10*/].f_9))
	{
		TASK::_SET_SCENARIO_POINT_ACTIVE(Local_19[1 /*10*/].f_9, true);
	}
	if (TASK::_DOES_SCENARIO_POINT_EXIST(Local_19[2 /*10*/].f_9))
	{
		TASK::_SET_SCENARIO_POINT_ACTIVE(Local_19[2 /*10*/].f_9, true);
	}
	if (TASK::_DOES_SCENARIO_POINT_EXIST(Local_19[3 /*10*/].f_9))
	{
		TASK::_SET_SCENARIO_POINT_ACTIVE(Local_19[3 /*10*/].f_9, true);
	}
	if (TASK::_DOES_SCENARIO_POINT_EXIST(Local_19[4 /*10*/].f_9))
	{
		TASK::_SET_SCENARIO_POINT_ACTIVE(Local_19[4 /*10*/].f_9, true);
	}
	if (TASK::_DOES_SCENARIO_POINT_EXIST(Local_19[5 /*10*/].f_9))
	{
		TASK::_SET_SCENARIO_POINT_ACTIVE(Local_19[5 /*10*/].f_9, true);
	}
	if (TASK::_DOES_SCENARIO_POINT_EXIST(Local_19[6 /*10*/].f_9))
	{
		TASK::_SET_SCENARIO_POINT_ACTIVE(Local_19[6 /*10*/].f_9, true);
	}
	iLocal_325 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(-611.2f, -30.2f, 85.4f, joaat("RANSACK_ATTACHED_P_SIDETABLE07X"), 2f, 0, false);
	TASK::_SET_SCENARIO_POINT_ACTIVE(iLocal_325, true);
	__LIB_4__::func_866(&iLocal_197, 1, 1);
	__LIB_4__::func_866(&iLocal_196, 1, 1);
	__LIB_1__::func_951(&iLocal_326);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_166);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_167);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_168);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_169);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_170);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_171);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_172);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_173);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_174);
	__LIB_0__::func_172(iLocal_299);
	__LIB_0__::func_172(iLocal_300);
	__LIB_0__::func_172(iLocal_301);
	__LIB_0__::func_172(iLocal_302);
	__LIB_0__::func_172(iLocal_303);
	__LIB_0__::func_172(iLocal_358);
	__LIB_0__::func_172(iLocal_304);
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uLocal_305[5]))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uLocal_305[5]);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uLocal_305[6]))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uLocal_305[6]);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uLocal_305[7]))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uLocal_305[7]);
	}
	AUDIO::_0x9428447DED71FC7E("LSHSS_Scenes");
	__LIB_0__::func_325(&iLocal_160);
	func_404();
	__LIB_2__::func_426(&(Local_90[0 /*34*/]));
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < (2 - 1))
	{
		__LIB_2__::func_788(&(Local_90[iVar2 /*34*/]), 1, 1, 1);
		iVar2++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_198))
	{
		OBJECT::DELETE_OBJECT(&iLocal_198);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_199))
	{
		OBJECT::DELETE_OBJECT(&iLocal_199);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_200))
	{
		OBJECT::DELETE_OBJECT(&iLocal_200);
	}
	if (ENTITY::_0x1FF441D7954F8709(iLocal_327))
	{
		iLocal_328 = 0;
		ENTITY::_0xD2B9C78537ED5759(iLocal_327);
	}
	if (ENTITY::_0x1FF441D7954F8709(iLocal_329))
	{
		iLocal_330 = 0;
		ENTITY::_0xD2B9C78537ED5759(iLocal_329);
	}
	ENTITY::REMOVE_MODEL_HIDE(-613.1794f, -31.4201f, 85.247f, 5f, joaat("W_REPEATER_CARBINE01"), 0);
	ENTITY::REMOVE_MODEL_HIDE(-610.5f, -25.2f, 85.9f, 5f, joaat("P_APPLE01X"), 0);
	__LIB_6__::func_815(&iLocal_218, Local_90[0 /*34*/]);
	__LIB_9__::func_903(&(Local_279[0 /*17*/]));
	Global_1934765.f_288 = 0;
	if (__LIB_2__::func_769(906448125))
	{
		__LIB_1__::func_948(906448125, 0, 0f, 0, 0, 0f, 0, 0);
	}
	if (__LIB_2__::func_769(1189146288))
	{
		__LIB_1__::func_948(1189146288, 0, 0f, 0, 0, 0f, 0, 0);
	}
	__LIB_1__::func_948(295238741, 0, 0f, 0, 0, 0f, 0, 0);
	__LIB_1__::func_948(-3516232, 0, 0f, 0, 0, 0f, 0, 0);
	__LIB_1__::func_941(138361190);
	__LIB_1__::func_941(365712512);
	__LIB_1__::func_941(906448125);
	__LIB_1__::func_941(1189146288);
	__LIB_1__::func_941(295238741);
	__LIB_1__::func_941(-3516232);
	if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(-1996568696) && TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(-1996568696))
	{
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1996568696, true);
	}
	PED::_0x949B2F9ED2917F5D(Global_35, 0);
	PED::_0x949B2F9ED2917F5D(Global_35, 1);
	PED::_0x949B2F9ED2917F5D(Global_35, 2);
	PED::_0x949B2F9ED2917F5D(Global_35, 31);
	PED::_0x949B2F9ED2917F5D(Global_35, 3);
	PED::_0x949B2F9ED2917F5D(Global_35, 4);
	PED::_0xEAE3B5B019C8D23F(Global_35, 32796);
	PED::_0xEAE3B5B019C8D23F(Global_35, 262143);
	__LIB_1__::func_978(1);
	PED::SET_PED_CONFIG_FLAG(Global_35, 26, false);
}

void func_124()
{
	PERSISTENCE::_0x9D16896F0DBE78A2(-614.7f, -28.4f, 85.7f, 15f);
	PERSISTENCE::_0x9D16896F0DBE78A2(-607.9755f, -29.5191f, 85.0193f, 15f);
	PERSISTENCE::_0x9D16896F0DBE78A2(-616.3115f, -23.2011f, 85.0211f, 15f);
	PERSISTENCE::_0x9D16896F0DBE78A2(-613.7f, -31.5f, 85f, 15f);
	PERSISTENCE::_0x9D16896F0DBE78A2(-610.99f, -30.62f, 85f, 15f);
	PERSISTENCE::_0x9D16896F0DBE78A2(-612.7f, -34.9f, 84.9f, 15f);
	PERSISTENCE::_0x9D16896F0DBE78A2(-606.0966f, -34.99f, 84.97f, 15f);
}

int func_135(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			func_135(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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
	__LIB_1__::func_879(iParam0, iParam1);
	return 1;
}

bool func_139(var uParam0)
{
	if (!__LIB_0__::func_272(Local_90[0 /*34*/], 0))
	{
		__LIB_0__::func_769();
		if (__LIB_2__::func_769(906448125))
		{
			__LIB_0__::func_68(906448125, 0, 0);
			__LIB_1__::func_948(906448125, 0, 0f, 0, 0, 0f, 0, 0);
		}
		if (__LIB_2__::func_769(1189146288))
		{
			__LIB_0__::func_68(1189146288, 0, 0);
			__LIB_1__::func_948(1189146288, 0, 0f, 0, 0, 0f, 0, 0);
		}
		__LIB_6__::func_815(&iLocal_218, Local_90[0 /*34*/]);
		__LIB_9__::func_903(&(Local_279[0 /*17*/]));
		return true;
	}
	if (__LIB_0__::func_665(Local_90[0 /*34*/], Global_35, 1, 1) > 250f)
	{
		__LIB_0__::func_769();
		if (__LIB_2__::func_769(906448125))
		{
			__LIB_0__::func_68(906448125, 0, 0);
			__LIB_1__::func_948(906448125, 0, 0f, 0, 0, 0f, 0, 0);
		}
		if (__LIB_2__::func_769(1189146288))
		{
			__LIB_0__::func_68(1189146288, 0, 0);
			__LIB_1__::func_948(1189146288, 0, 0f, 0, 0, 0f, 0, 0);
		}
		__LIB_6__::func_815(&iLocal_218, Local_90[0 /*34*/]);
		__LIB_9__::func_903(&(Local_279[0 /*17*/]));
		return true;
	}
	return false;
}

void func_149(char[4] cParam0)
{
	AUDIO::TRIGGER_MUSIC_EVENT("LSHSS_STOP");
	__LIB_0__::func_325(&iLocal_160);
	func_404();
	__LIB_10__::func_285(cParam0, 5);
}

int func_157(vector3 vParam0, var uParam3)
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
		iVar0 = func_469(0, 0);
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

bool func_158(char[4] cParam0)
{
	if (cParam0->f_1 == 8)
	{
		if (!func_332(2))
		{
			if (__LIB_0__::func_665(Global_35, Local_90[0 /*34*/], 1, 1) > 40f)
			{
				if (iLocal_334 == 0)
				{
					__LIB_1__::func_422("SELL_RTRN", 7500, 0, 1, 0, 0, -1, -1, 0);
					if (!MAP::DOES_BLIP_EXIST(iLocal_165))
					{
						iLocal_165 = MAP::_BLIP_ADD_FOR_AREA(1247852480, -612.7f, -29.5f, 86f, 10f, 15f, 0f, 19);
					}
					if (MAP::DOES_BLIP_EXIST(iLocal_160))
					{
						MAP::REMOVE_BLIP(&iLocal_160);
					}
					iLocal_334 = 1;
				}
			}
			else if (iLocal_334 == 1)
			{
				if (__LIB_13__::func_842() < 5)
				{
					__LIB_1__::func_422("SELL_BEAT", 7500, 0, 1, 0, 0, -1, -1, 0);
					if (MAP::DOES_BLIP_EXIST(iLocal_165))
					{
						MAP::REMOVE_BLIP(&iLocal_165);
					}
					if (!MAP::DOES_BLIP_EXIST(iLocal_160))
					{
						__LIB_10__::func_528(&iLocal_160, Local_90[0 /*34*/], joaat("BLIP_STYLE_ENEMY"), 0);
					}
				}
				else if (__LIB_13__::func_842() >= 5)
				{
					__LIB_1__::func_422("SELL_LOOT", 7500, 0, 1, 0, 0, -1, -1, 0);
				}
				iLocal_334 = 0;
			}
			if (__LIB_0__::func_665(Global_35, Local_90[0 /*34*/], 1, 1) > 80f)
			{
				__LIB_10__::func_531(cParam0, "SELL_F_LEFT");
				return true;
			}
			if ((PED::GET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 11, true) && ENTITY::DOES_ENTITY_EXIST(Local_90[0 /*34*/])) && __LIB_13__::func_842() < 5)
			{
				__LIB_10__::func_531(cParam0, "SELL_F_KNCK");
				return true;
			}
			if (!__LIB_0__::func_272(Local_90[0 /*34*/], 0) && ENTITY::DOES_ENTITY_EXIST(Local_90[0 /*34*/]))
			{
				__LIB_10__::func_531(cParam0, "SELL_F_DEAD");
				return true;
			}
		}
	}
	return false;
}

bool func_173()
{
	Global_1934765.f_288 = 1;
	iLocal_195 = INTERIOR::GET_INTERIOR_AT_COORDS(-613.7f, -27.3f, 86f);
	if (INTERIOR::IS_VALID_INTERIOR(iLocal_195))
	{
		INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_195);
		if (INTERIOR::IS_INTERIOR_READY(iLocal_195))
		{
			if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iLocal_195, "Loansharking_Chair_Col"))
			{
				INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iLocal_195, "Loansharking_Chair_Col", 0);
			}
			__LIB_4__::func_495(229);
			if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iLocal_195, "Loansharking_Chair_Col") && INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iLocal_195, "pai_intgroup_lootables"))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_174(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_90[1 /*34*/]))
	{
		__LIB_0__::func_568(Local_90[1 /*34*/].f_1, 50f, 0);
		Local_90[1 /*34*/] = __LIB_8__::func_931(iLocal_168, -631.9f, -67.6f, 81.8561f, 277.5934f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		return false;
	}
	else
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_90[1 /*34*/], -631.9f, -67.6f, 81.8561f, 277.5934f, true, false, true);
		TASK::TASK_STAND_STILL(Local_90[1 /*34*/], -1);
		return true;
	}
	return false;
}

bool func_175(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_90[0 /*34*/]))
	{
		__LIB_1__::func_206(-613.2f, -30.7f, 85.1f, 3f, 0);
		func_496(*uParam0, &(Local_90[0 /*34*/]), iLocal_166, Local_90[0 /*34*/].f_1, Local_90[0 /*34*/].f_4, 1, 1, 0, 1, 1, 1, 1);
		return false;
	}
	else
	{
		Global_1392626[*uParam0 /*32*/].f_11 = Local_90[0 /*34*/];
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_90[0 /*34*/], true);
		PED::SET_PED_CAN_BE_TARGETTED(Local_90[0 /*34*/], true);
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_90[0 /*34*/], Local_90[0 /*34*/].f_1, Local_90[0 /*34*/].f_4, true, false, true);
		__LIB_0__::func_928(&(uParam0->f_2106), Local_90[0 /*34*/], "WROBEL", 0);
		PED::SET_PED_FLEE_ATTRIBUTES(Local_90[0 /*34*/], 1048576, true);
		AUDIO::STOP_PED_SPEAKING(Local_90[0 /*34*/], true);
		PED::SET_PED_CONFIG_FLAG(Global_35, 448, true);
		PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 225, true);
		PED::SET_PED_CONFIG_FLAG(Global_35, 448, true);
		PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 148, true);
		PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 146, true);
		PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 130, true);
		PED::_0xAE6004120C18DF97(Local_90[0 /*34*/], 0, 0);
		PED::_0xAE6004120C18DF97(Local_90[0 /*34*/], 2, 0);
		PED::_0xAE6004120C18DF97(Local_90[0 /*34*/], 3, 0);
		PED::_0xAE6004120C18DF97(Local_90[0 /*34*/], 4, 0);
		ENTITY::_0x9587913B9E772D29(Local_90[0 /*34*/], 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_90[0 /*34*/], 17, false);
		PED::SET_PED_FLEE_ATTRIBUTES(Local_90[0 /*34*/], 512, true);
		PED::_0xF7EA250B9A919E03(joaat("INTIMIDATED_ON_KNEES"), Local_90[0 /*34*/]);
		PED::_0xF7EA250B9A919E03(joaat("INTIMIDATED_ON_ASS"), Local_90[0 /*34*/]);
		PED::_0xF7EA250B9A919E03(joaat("INTIMIDATED_ON_FEET_REACTION"), Local_90[0 /*34*/]);
		return true;
	}
	return false;
}

char* func_189()
{
	return "LSHSS_MCS1";
}

void func_191(var uParam0)
{
	if (__LIB_10__::func_551(uParam0, func_189()))
	{
		if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(uParam0->f_228) >= 0.9663066f && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(uParam0->f_228) < 0.98f)
		{
			PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "OnFootIntimidateForced", true, 5000);
		}
		if (ANIMSCENE::_0x005E6F28DD7ED58D(uParam0->f_228, "cs_wrobel") || ANIMSCENE::_0x005E6F28DD7ED58D(uParam0->f_228, "ARTHUR"))
		{
			PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "OnFootIntimidateForced", true, 5000);
			__LIB_6__::func_815(&iLocal_218, Local_90[0 /*34*/]);
			__LIB_9__::func_903(&(Local_279[0 /*17*/]));
			func_63(1);
			__LIB_13__::func_493(Local_90[0 /*34*/], 0);
		}
	}
}

int func_201(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		__LIB_1__::func_487(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !VOLUME::_DOES_VOLUME_EXIST(iParam9)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0));
		fVar8 = __LIB_5__::func_439(fParam12 >= 0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
		__LIB_10__::func_609(uParam0, iParam1, uParam3, fParam2, fVar8, sParam7);
		if (!iParam8 & 2097152 != 0)
		{
			PED::SET_PED_RESET_FLAG(*uParam0, 184, true);
		}
		if (iParam8 & 8388608 != 0)
		{
			PED::SET_PED_RESET_FLAG(*uParam0, 281, true);
		}
		if (bVar5)
		{
			bVar1 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35));
		}
		if (bVar7 || (bVar5 && bVar1))
		{
			__LIB_1__::func_148(&(iParam1->f_13));
		}
		if (__LIB_4__::func_231(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (__LIB_10__::func_545(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_201(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					__LIB_1__::func_480(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!PED::GET_PED_CONFIG_FLAG(*uParam0, 317, true))
						{
							__LIB_1__::func_488(*uParam0, 1, 1);
						}
					}
					else if (__LIB_1__::func_489(iParam1, 22))
					{
						__LIB_1__::func_488(*uParam0, 0, 1);
					}
				}
				if (__LIB_2__::func_402(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					__LIB_4__::func_164(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
					__LIB_6__::func_742(iParam1, uParam3);
					if (__LIB_13__::func_354(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
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
					if (__LIB_6__::func_834(*uParam0, iParam1, uParam3))
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
				if (__LIB_2__::func_402(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					__LIB_4__::func_166(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					__LIB_13__::func_354(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					__LIB_4__::func_164(uParam0, __LIB_2__::func_402(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
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
							if (__LIB_3__::func_547(Global_35, *uParam0, 1f) == 3)
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
							if (__LIB_3__::func_547(Global_35, *uParam0, 1f) == 3)
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
					else if (!(MISC::IS_BIT_SET(*iParam1, 12) || __LIB_10__::func_245(iParam1, uParam0)))
					{
					}
					else if (!(MISC::IS_BIT_SET(*iParam1, 13) || __LIB_3__::func_109(iParam1)))
					{
					}
					else if (!__LIB_10__::func_482(iParam1))
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
				if (__LIB_2__::func_473(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (__LIB_2__::func_402(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					__LIB_4__::func_166(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					__LIB_13__::func_354(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					__LIB_4__::func_164(uParam0, __LIB_2__::func_402(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
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
				if (__LIB_2__::func_473(uParam0, iParam1, fParam4, bVar6))
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

bool func_204(char[4] cParam0)
{
	int iVar0;
	int iVar1;
	if (__LIB_0__::func_266(Global_35, Global_1392626[*cParam0 /*32*/].f_27, Global_1392626[*cParam0 /*32*/].f_4, 1, 1))
	{
		if (!__LIB_0__::func_474(169))
		{
			__LIB_1__::func_240(169, 0);
		}
	}
	if (PED::_IS_PED_CARRYING(Global_35))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_349))
		{
			iLocal_349 = __LIB_3__::func_624(Global_35);
		}
		else if ((ENTITY::DOES_ENTITY_EXIST(iLocal_349) && !__LIB_0__::func_163(Global_35, -208384378)) && __LIB_0__::func_665(Global_35, Local_90[0 /*34*/], 1, 1) < 30f)
		{
			TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(Global_35, iLocal_349, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 2f, 0);
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iLocal_349))
	{
		iLocal_349 = 0;
	}
	if (__LIB_1__::func_205(Global_35, iLocal_302, 1, 0) || __LIB_1__::func_205(Global_35, iLocal_303, 1, 0))
	{
		if (__LIB_5__::func_783(229))
		{
			__LIB_4__::func_524(229);
		}
	}
	if (__LIB_0__::func_399(Global_35, 1, 0, 0) == joaat("WEAPON_LASSO"))
	{
		PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), Local_90[0 /*34*/], 8, 0, 1);
	}
	else
	{
		PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), Local_90[0 /*34*/], 8, 0, 0);
	}
	switch (__LIB_10__::func_532())
	{
		case 0:
			if (!__LIB_10__::func_529(&(uLocal_305[0]), func_345(0), 0, 0))
			{
				return false;
			}
			PED::_0xAE6004120C18DF97(Local_90[0 /*34*/], 0, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_305[0], "ARTHUR", Global_35, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_305[0], "CS_WROBEL", Local_90[0 /*34*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_305[0], "p_cs_book03x", iLocal_198, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_305[0], "p_pencil01x", iLocal_199, 0);
			ANIMSCENE::_0xDF7B5144E25CD3FE(uLocal_305[0], "PL_BACK_DOOR");
			ANIMSCENE::_0xDF7B5144E25CD3FE(uLocal_305[0], "PL_FRONT_DOOR");
			ANIMSCENE::_0xDF7B5144E25CD3FE(uLocal_305[0], "PL_GREET");
			ANIMSCENE::_0xDF7B5144E25CD3FE(uLocal_305[0], "PL_BASE");
			if (TASK::_DOES_SCENARIO_POINT_EXIST(Local_19[0 /*10*/].f_9))
			{
				TASK::_SET_SCENARIO_POINT_ACTIVE(Local_19[0 /*10*/].f_9, false);
			}
			if (TASK::_DOES_SCENARIO_POINT_EXIST(Local_19[1 /*10*/].f_9))
			{
				TASK::_SET_SCENARIO_POINT_ACTIVE(Local_19[1 /*10*/].f_9, false);
			}
			if (TASK::_DOES_SCENARIO_POINT_EXIST(Local_19[2 /*10*/].f_9))
			{
				TASK::_SET_SCENARIO_POINT_ACTIVE(Local_19[2 /*10*/].f_9, false);
			}
			if (TASK::_DOES_SCENARIO_POINT_EXIST(Local_19[3 /*10*/].f_9))
			{
				TASK::_SET_SCENARIO_POINT_ACTIVE(Local_19[3 /*10*/].f_9, false);
			}
			if (TASK::_DOES_SCENARIO_POINT_EXIST(Local_19[4 /*10*/].f_9))
			{
				TASK::_SET_SCENARIO_POINT_ACTIVE(Local_19[4 /*10*/].f_9, false);
			}
			if (TASK::_DOES_SCENARIO_POINT_EXIST(Local_19[5 /*10*/].f_9))
			{
				TASK::_SET_SCENARIO_POINT_ACTIVE(Local_19[5 /*10*/].f_9, false);
			}
			if (TASK::_DOES_SCENARIO_POINT_EXIST(Local_19[6 /*10*/].f_9))
			{
				TASK::_SET_SCENARIO_POINT_ACTIVE(Local_19[6 /*10*/].f_9, false);
			}
			if (!__LIB_10__::func_529(&(uLocal_305[1]), func_345(1), 0, 0))
			{
				return false;
			}
			if (!func_67())
			{
				return false;
			}
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uLocal_305[1], "ARTHUR", Global_35, 0);
			ANIMSCENE::_0xDF7B5144E25CD3FE(uLocal_305[1], "PL_GODDAMN_IT");
			PED::SET_PED_CONFIG_FLAG(Global_35, 448, true);
			PED::SET_PED_CONFIG_FLAG(Global_35, 26, true);
			__LIB_1__::func_978(0);
			__LIB_18__::func_241(1);
			break;
		case 1:
			if (ANIMSCENE::_0x23E33CB9F4A3F547(uLocal_305[0], "PL_BASE"))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uLocal_305[0], "PL_BASE", true);
				ANIMSCENE::START_ANIM_SCENE(uLocal_305[0]);
				func_598(&(Local_90[0 /*34*/]), &Global_35, -1);
				func_598(&Global_35, &(Local_90[0 /*34*/]), -1);
				__LIB_18__::func_241(2);
			}
			break;
		case 2:
			if (bLocal_208 == 1)
			{
				ANIMSCENE::ABORT_ANIM_SCENE(uLocal_305[0], false);
				__LIB_18__::func_241(6);
			}
			else if (__LIB_0__::func_94(Global_35, -615.4f, -27.5f, 86f, 1) < 0.5f)
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uLocal_305[0], "PL_FRONT_DOOR", true);
				__LIB_18__::func_241(3);
			}
			else if (__LIB_0__::func_94(Global_35, -608.8f, -26.1f, 86f, 1) < 0.5f)
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uLocal_305[0], "PL_BACK_DOOR", true);
				__LIB_18__::func_241(3);
			}
			break;
		case 3:
			if (!__LIB_0__::func_481(1) && ANIMSCENE::_0x8D81E7824B7753F7(uLocal_305[0], "front_loop", 1))
			{
				PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 297, true);
				PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 315, true);
				PED::SET_PED_CAN_BE_TARGETTED(Local_90[0 /*34*/], true);
				MISC::_0x870708A6E147A9AD(Local_90[0 /*34*/], "", 2.5f, 0f, 0, 0, 0, 0, 0, -1);
				__LIB_10__::func_415(8);
				__LIB_3__::func_157(&(Local_279[0 /*17*/]), "INTERACT_CONFRONT", 0, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
				__LIB_6__::func_736(&iLocal_218, &Local_279, 0, iLocal_160, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
				iLocal_160 = MAP::_0x3E593DF9C2962EC6(-936216634);
				MAP::SET_BLIP_SPRITE(iLocal_160, joaat("BLIP_AMBIENT_LOAN_SHARK"), true);
				if (!__LIB_8__::func_779(1))
				{
					MAP::_BLIP_SET_MODIFIER(iLocal_160, -401963276);
				}
				MAP::_0x97F6F158CC5B5CA2(Local_90[0 /*34*/], iLocal_160);
				__LIB_10__::func_561(cParam0, "SELL_TALK", 0f, 0f, 0f);
				__LIB_18__::func_241(4);
			}
			break;
		case 4:
			func_602(cParam0);
			if (ANIMSCENE::_0x8D81E7824B7753F7(uLocal_305[0], "front_loop", 1) && iLocal_335 == 0)
			{
				if (!CAM::_0xA24C1D341C6E0D53(1, 0, 1) && !__LIB_2__::func_401(Local_90[0 /*34*/], 1, 1, 0, 0, 0))
				{
					ANIMSCENE::START_ANIM_SCENE(uLocal_305[1]);
				}
				iLocal_335 = 1;
			}
			if (__LIB_10__::func_896(PLAYER::GET_PLAYER_INDEX(), Local_90[0 /*34*/]))
			{
				__LIB_2__::func_462(&(cParam0->f_17.f_12), 5000f, 1);
				func_201(&(Local_90[0 /*34*/]), &iLocal_218, 2.5f, &Local_279, 0.1f, 3, 0, 0, 1, 0, 0, 2, -1082130432 /* Float: -1f */);
				if (__LIB_2__::func_456(&iLocal_218))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uLocal_305[0], "PL_GREET", true);
					MISC::_0xE98D55C5983F2509(Local_90[0 /*34*/]);
					__LIB_1__::func_748(&(iLocal_16[1]), 1, 1);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(Global_35, Local_90[0 /*34*/], 0, -1f, -1f, -1f);
					__LIB_10__::func_609(&(Local_90[0 /*34*/]), &iLocal_218, &Local_279, 5f, -1082130432 /* Float: -1f */, 0);
					cParam0->f_32.f_5 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
					PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 297, false);
					PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 315, false);
					__LIB_6__::func_815(&iLocal_218, Local_90[0 /*34*/]);
					__LIB_9__::func_903(&(Local_279[0 /*17*/]));
					__LIB_18__::func_241(5);
				}
			}
			break;
		case 5:
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			if (!__LIB_0__::func_481(0))
			{
				if ((ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(uLocal_305[0]) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(uLocal_305[0], false)) || ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(uLocal_305[0]) > 0.997f)
				{
					PED::SET_PED_CONFIG_FLAG(Global_35, 26, false);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_349))
					{
						PED::_0x7E8F9949B7AABBF0(iLocal_349, 1, 1);
						TASK::_TASK_FLEE_FROM_PED(iLocal_349, Global_35, 0f, 0f, 0f, 150f, -1, 0, 1077936128 /* Float: 3f */, 0);
						__LIB_2__::func_788(&iLocal_349, 1, 0, 1);
					}
					__LIB_1__::func_978(1);
					PED::SET_PED_CONFIG_FLAG(Global_35, 360, true);
					__LIB_13__::func_493(Local_90[0 /*34*/], 1);
					return true;
				}
			}
			break;
	}
	if (bLocal_208 == 0)
	{
		if ((__LIB_2__::func_401(Local_90[0 /*34*/], 1, 1, 0, 0, 0) && __LIB_0__::func_399(Global_35, 1, 0, 0) != joaat("WEAPON_LASSO")) && __LIB_1__::func_205(Global_35, iLocal_302, 1, 0))
		{
			__LIB_1__::func_283(&uLocal_350, 0);
		}
		else
		{
			__LIB_0__::func_37(&uLocal_350);
		}
		if (MISC::IS_BULLET_IN_AREA(-616.2f, -27.7f, 85.9f, 35f, true) || __LIB_1__::func_313(&uLocal_350, 0.75f))
		{
			__LIB_13__::func_493(Local_90[0 /*34*/], 1);
			__LIB_2__::func_279(Local_90[0 /*34*/], 1);
			func_606(cParam0, " ");
			__LIB_8__::func_111("LSHSS_IG0_LI_WB", 0);
			if (!__LIB_2__::func_401(Local_90[0 /*34*/], 1, 1, 0, 0, 0))
			{
				__LIB_10__::func_513(&(cParam0->f_2106), "LSHSS_SHOOT", 0);
			}
			__LIB_10__::func_281(&(cParam0->f_32));
			if (iVar0 == 0)
			{
				iVar0 = ENTITY::_0x6F3068258A499E52(joaat("P_CHAIR20X"), -611.4f, -25.5f, 85.7f, 7);
				if (ENTITY::_0x1FF441D7954F8709(iVar0))
				{
					iVar1 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(iVar0));
				}
			}
			__LIB_4__::func_996(&(cParam0->f_352), Local_90[0 /*34*/]);
			__LIB_4__::func_996(&(cParam0->f_352), __LIB_3__::func_136(1189146288, 0));
			__LIB_4__::func_996(&(cParam0->f_352), __LIB_3__::func_136(906448125, 0));
			__LIB_4__::func_996(&(cParam0->f_352), iVar1);
			__LIB_4__::func_996(&(cParam0->f_352), iLocal_199);
			__LIB_4__::func_996(&(cParam0->f_352), iLocal_198);
			__LIB_4__::func_996(&(cParam0->f_352), Global_35);
			__LIB_0__::func_8(&(Global_1392626[*cParam0 /*32*/].f_9), 16);
			__LIB_10__::func_417(&(cParam0->f_32));
			if (((!__LIB_1__::func_205(Global_35, iLocal_302, 1, 0) && !__LIB_1__::func_205(Global_35, iLocal_303, 1, 0)) && MISC::ABSF(__LIB_4__::func_195(906448125)) < 0.3f) && MISC::ABSF(__LIB_4__::func_195(1189146288)) < 0.3f)
			{
				func_62(Local_90[0 /*34*/], -612.3f, -27.7f, 87.2f, 106f, 2, 1073741824 /* Float: 2f */);
			}
			func_63(0);
			bLocal_208 = true;
			return false;
		}
	}
	else
	{
		if (func_335())
		{
			func_331(0);
			if (__LIB_0__::func_665(__LIB_3__::func_136(906448125, 0), Global_35, 1, 1) > 1f && !__LIB_2__::func_769(906448125))
			{
				__LIB_0__::func_68(906448125, 0, 0);
				__LIB_1__::func_948(906448125, 1, 0f, 0, 0, 0f, 0, 0);
			}
			if (__LIB_0__::func_665(__LIB_3__::func_136(1189146288, 0), Global_35, 1, 1) > 1f && !__LIB_2__::func_769(1189146288))
			{
				__LIB_0__::func_68(1189146288, 0, 0);
				__LIB_1__::func_948(1189146288, 1, 0f, 0, 0, 0f, 0, 0);
			}
		}
		PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), Local_90[0 /*34*/], 8, 0, 1);
		PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), Local_90[0 /*34*/], 3, 0, 1);
		PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), Local_90[0 /*34*/], 19, 0, 1);
		PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), Local_90[0 /*34*/], 15, 0, 1);
		if (!bLocal_210 && !__LIB_5__::func_463())
		{
			if (__LIB_1__::func_205(Global_35, iLocal_302, 1, 0) || __LIB_1__::func_205(Global_35, iLocal_303, 1, 0))
			{
				bLocal_210 = true;
			}
		}
		else if (!__LIB_11__::func_8("LSHSS_SHOOT"))
		{
			if (__LIB_10__::func_513(&(cParam0->f_2106), "LSHSS_COWER", 0))
			{
				MAP::_BLIP_SET_MODIFIER(Global_1392626[8 /*32*/].f_1, -1186550032);
				__LIB_0__::func_7(&(Global_1392626[8 /*32*/].f_8), 256);
				__LIB_0__::func_769();
				__LIB_1__::func_390("SELL_LOOK", 1);
				__LIB_13__::func_493(Local_90[0 /*34*/], 0);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_349))
				{
					PED::_0x7E8F9949B7AABBF0(iLocal_349, 1, 1);
					TASK::_TASK_FLEE_FROM_PED(iLocal_349, Global_35, 0f, 0f, 0f, 150f, -1, 0, 1077936128 /* Float: 3f */, 0);
					__LIB_2__::func_788(&iLocal_349, 1, 0, 1);
				}
				__LIB_2__::func_279(Local_90[0 /*34*/], 0);
				__LIB_1__::func_978(1);
				return true;
			}
		}
		return false;
	}
	if (iLocal_202 == 1)
	{
		if (ENTITY::IS_ENTITY_AT_COORD(Global_35, -621.1f, -39.2f, 84.9f, 30f, 30f, 5f, false, true, 0))
		{
			__LIB_10__::func_561(cParam0, "SELL_LOOK", 0f, 0f, 0f);
			iLocal_202 = 0;
		}
	}
	if (func_332(524288))
	{
		__LIB_2__::func_480(&(cParam0->f_2277), 0, 0, 1, 0);
		func_64(4);
		return true;
	}
	return false;
}

int func_207(char[4] cParam0)
{
	if (PED::_IS_PED_CARRYING(Global_35))
	{
		PED::_0xED00D72F81CF7278(PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35), 0, !bLocal_208);
	}
	if (bLocal_208 == 0)
	{
		return 6;
	}
	return 8;
}

void func_212(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_DEAD_OR_DYING(iParam0, true))
		{
			PED::_0x24C82EF607105FAA(iParam0, joaat("SCRIPTEDINTIMIDATION"));
			PED::SET_PED_CONFIG_FLAG(iParam0, 431, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 359, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 477, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 225, true);
		}
	}
}

void func_222(int iParam0)
{
	if (!func_332(iParam0))
	{
		__LIB_1__::func_683(&iLocal_213, iParam0);
	}
}

int func_322(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, var uParam4, char[4] cParam5)
{
	int iVar0;
	__LIB_10__::func_348(uParam4, &cParam0);
	if (__LIB_0__::func_84(uParam4, 2) && !__LIB_0__::func_84(uParam4, 67108864))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SKIP_CUTSCENE"), false);
	}
	if (__LIB_0__::func_81(uParam4) != 1)
	{
		__LIB_10__::func_476(uParam4);
	}
	POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	PED::SET_PED_RESET_FLAG(Global_35, 134, true);
	HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
	switch (__LIB_0__::func_81(uParam4))
	{
		case 1:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_228) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam4->f_228, true, false))
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam4->f_228, false))
				{
					__LIB_10__::func_563(uParam4, &cParam0);
				}
				else if (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_228))
				{
					__LIB_1__::func_747(uParam4, 4);
					return 0;
				}
				else if (__LIB_10__::func_302(uParam4, 2))
				{
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_221);
				}
				__LIB_1__::func_747(uParam4, 3);
			}
			else if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_228))
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_230)) && __LIB_0__::func_84(uParam4, 134217728))
				{
				}
				else
				{
					__LIB_10__::func_459(uParam4);
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
				__LIB_10__::func_466(uParam4);
				if (!__LIB_0__::func_75(&(uParam4->f_1)))
				{
					__LIB_1__::func_283(&(uParam4->f_1), 0);
				}
				else if (__LIB_0__::func_265(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_228))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_228);
					}
					__LIB_1__::func_747(uParam4, 4);
				}
			}
			break;
		case 2:
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_228) || !ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam4->f_228, true, false))
			{
				if (__LIB_10__::func_560(uParam4, &cParam0, 1, 1))
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam4->f_228, true, false))
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
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_228))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_228);
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
					__LIB_10__::func_563(uParam4, &cParam0);
					__LIB_1__::func_747(uParam4, 3);
				}
				else
				{
					SCRIPTS::SHUTDOWN_LOADING_SCREEN();
				}
			}
			else if (__LIB_0__::func_265(&(uParam4->f_1)) >= 60f)
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_228))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_228);
				}
				__LIB_1__::func_747(uParam4, 4);
			}
			break;
		case 3:
			func_766(uParam4);
			if (__LIB_10__::func_302(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_221);
			}
			if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_228) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam4->f_228, false)) && (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_228) || __LIB_0__::func_84(uParam4, 512)))
			{
				if (!__LIB_0__::func_84(uParam4, 1024) && __LIB_10__::func_460(uParam4, 1))
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
				__LIB_10__::func_476(uParam4);
			}
			if (__LIB_0__::func_84(uParam4, 524288))
			{
				if (IntToFloat(MISC::ABSI((__LIB_10__::func_303(uParam4) - __LIB_10__::func_304(uParam4)))) <= 2f)
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_228))
				{
					if (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_228))
					{
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
					}
				}
				if (__LIB_10__::func_352(uParam4, Global_35, 4))
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
				if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) && __LIB_10__::func_304(uParam4) > 5000)
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
			}
			if (__LIB_10__::func_305(uParam4))
			{
				if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_228))
				{
				}
				__LIB_0__::func_488(uParam4);
				__LIB_10__::func_547(uParam4);
				return 1;
			}
			else
			{
				if (__LIB_0__::func_84(uParam4, 67108864))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						if (!ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_228) && !ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_228))
						{
							ANIMSCENE::_DELETE_ANIM_SCENE_2(uParam4->f_228);
						}
						__LIB_1__::func_148(&(uParam4->f_1));
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
						__LIB_0__::func_88(uParam4, 512);
						__LIB_10__::func_288(uParam4, 67108864, 1);
						__LIB_1__::func_747(uParam4, 4);
					}
					else if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(1000);
					}
				}
				else if ((((!__LIB_0__::func_84(uParam4, 16384) && !ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_228)) && CAM::IS_SCREEN_FADED_OUT()) && __LIB_10__::func_304(uParam4) <= 5000) && __LIB_10__::func_304(uParam4) >= 0)
				{
					CAM::DO_SCREEN_FADE_IN(1000);
				}
				if (!__LIB_0__::func_84(uParam4, 536870912) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1495039362))
				{
					__LIB_6__::func_726(&(uParam4->f_285), 0);
					__LIB_0__::func_88(uParam4, 536870912);
				}
				if (__LIB_10__::func_304(uParam4) >= 5000 && __LIB_10__::func_304(uParam4) <= (__LIB_10__::func_303(uParam4) - 5000))
				{
					__LIB_0__::func_89();
				}
			}
			break;
		case 6:
			if (__LIB_10__::func_305(uParam4))
			{
				__LIB_0__::func_488(uParam4);
				__LIB_10__::func_547(uParam4);
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
					if (ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_228))
					{
						__LIB_0__::func_88(uParam4, 1073741824 /* Float: 2f */);
					}
				}
			}
			else
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_228))
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_228))
					{
						ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_228, true);
						if (UIFEED::_0xC17F69E1418CD11F(9) != 0)
						{
							UIFEED::_0xDD1232B332CBB9E7(9, 1, 0);
						}
						return 0;
					}
					else if (ANIMSCENE::_0x4CDFFE3189EBDBD0(uParam4->f_228))
					{
						return 0;
					}
				}
				if (iVar0 == 0)
				{
					Stack.Push(!__LIB_10__::func_302(uParam4, 4));
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_222);
					if (StackVal || StackVal)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_228) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_228))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_228, false);
						}
						__LIB_1__::func_747(uParam4, 3);
					}
					else if (__LIB_0__::func_265(&(uParam4->f_1)) >= 30f)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_228) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_228))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_228, false);
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

bool func_326(char[4] cParam0)
{
	vector3 vVar0;
	int iVar10;
	int iVar11;
	if (bLocal_204)
	{
		if (bLocal_297)
		{
			__LIB_1__::func_283(&uLocal_353, 0);
			if ((((__LIB_1__::func_285(&uLocal_353, 15f) && !__LIB_5__::func_463()) && !bLocal_205) && !ANIMSCENE::_0x8D81E7824B7753F7(uLocal_305[6], "s_Reveal_Shove", 1)) && !ANIMSCENE::_0x8D81E7824B7753F7(uLocal_305[6], "s_Reveal_Gun", 1))
			{
				if (iLocal_356 < 4)
				{
					__LIB_10__::func_513(&(cParam0->f_2106), "LSHSS_SEARCH", 0);
					iLocal_356++;
					__LIB_1__::func_148(&uLocal_353);
				}
			}
		}
		iVar10 = 0;
		while (iVar10 <= (7 - 1))
		{
			if (!Local_19[iVar10 /*10*/])
			{
				if (iLocal_194 == 0)
				{
					iLocal_194 = TASK::_GET_SCENARIO_POINT_PED_IS_USING(Global_35, false);
					iLocal_201 = 0;
				}
				else if (__LIB_10__::func_236(Local_19[iVar10 /*10*/].f_3, Local_19[iVar10 /*10*/].f_4, &(Local_19[iVar10 /*10*/].f_2), 0, 0, 0))
				{
					iVar11 = 0;
					iVar11 = 0;
					while (iVar11 < SCRIPTS::GET_NUMBER_OF_EVENTS(0))
					{
						if (SCRIPTS::GET_EVENT_AT_INDEX(0, iVar11) == -1730772208 && SCRIPTS::GET_EVENT_EXISTS(0, -1730772208))
						{
							if (SCRIPTS::GET_EVENT_DATA(0, iVar11, &vVar0, 10))
							{
								if (vVar0.z != 0)
								{
									if (vVar0.z != iLocal_201)
									{
										if (vVar0.z == Local_19[iVar10 /*10*/].f_8)
										{
											if (vVar0.z != joaat("PROVISION_GOLDRING") && !func_332(Local_19[iVar10 /*10*/].f_7))
											{
												if (iLocal_214 < 5)
												{
													__LIB_10__::func_513(&(cParam0->f_2106), &(Local_314[iLocal_214 /*2*/]), 0);
												}
												func_222(Local_19[iVar10 /*10*/].f_7);
											}
											iLocal_214++;
											Local_19[iVar10 /*10*/] = 1;
											iLocal_194 = 0;
											iLocal_201 = vVar0.z;
											__LIB_1__::func_148(&uLocal_353);
											return false;
										}
									}
								}
							}
						}
						iVar11++;
					}
				}
			}
			iVar10++;
		}
		if (iLocal_214 >= 3)
		{
			if (bLocal_205 == 0)
			{
				bLocal_205 = true;
				AUDIO::_0xAC84686C06184B0D("Question_Debtor_Scene", "LSHSS_Scenes");
				PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 130, false);
				PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 297, true);
				if (MAP::DOES_BLIP_EXIST(iLocal_163))
				{
					MAP::REMOVE_BLIP(&iLocal_163);
				}
				if (MAP::DOES_BLIP_EXIST(iLocal_162))
				{
					MAP::REMOVE_BLIP(&iLocal_162);
				}
				if (MAP::DOES_BLIP_EXIST(iLocal_161))
				{
					MAP::REMOVE_BLIP(&iLocal_161);
				}
				if (MAP::DOES_BLIP_EXIST(iLocal_164))
				{
					MAP::REMOVE_BLIP(&iLocal_164);
				}
				if (MAP::DOES_BLIP_EXIST(iLocal_160))
				{
					MAP::REMOVE_BLIP(&iLocal_160);
				}
				if (MAP::DOES_BLIP_EXIST(iLocal_165))
				{
					MAP::REMOVE_BLIP(&iLocal_165);
				}
			}
		}
	}
	if (!func_332(16777216))
	{
		if (__LIB_0__::func_255(Local_90[0 /*34*/], 0))
		{
			__LIB_10__::func_525(4, joaat("HONOR_EVENT_AMBIENT_KILL"), 0, "", Local_90[0 /*34*/], 0, 1065353216 /* Float: 1f */, 0);
			func_222(16777216);
		}
	}
	if (bLocal_206)
	{
		if (!func_332(2048) && __LIB_1__::func_707(joaat("PROVISION_GOLDRING"), iLocal_215 + 1, 0))
		{
			if (!__LIB_5__::func_463())
			{
				__LIB_10__::func_513(&(cParam0->f_2106), "LSHSS_RING", 0);
				func_222(2048);
			}
		}
	}
	if (bLocal_205 == 1)
	{
		if ((!func_332(8388608) && !__LIB_6__::func_904()) && !__LIB_5__::func_463())
		{
			__LIB_1__::func_283(&uLocal_191, 0);
			if (__LIB_1__::func_285(&uLocal_191, 2f))
			{
				__LIB_10__::func_513(&(cParam0->f_2106), "LSHSS_DEBT", 0);
				func_222(8388608);
			}
		}
		if (MAP::DOES_BLIP_EXIST(iLocal_163))
		{
			MAP::REMOVE_BLIP(&iLocal_163);
		}
		if (MAP::DOES_BLIP_EXIST(iLocal_162))
		{
			MAP::REMOVE_BLIP(&iLocal_162);
		}
		if (MAP::DOES_BLIP_EXIST(iLocal_161))
		{
			MAP::REMOVE_BLIP(&iLocal_161);
		}
		if (MAP::DOES_BLIP_EXIST(iLocal_164))
		{
			MAP::REMOVE_BLIP(&iLocal_164);
		}
		if (MAP::DOES_BLIP_EXIST(iLocal_160))
		{
			MAP::REMOVE_BLIP(&iLocal_160);
		}
		if (MAP::DOES_BLIP_EXIST(iLocal_165))
		{
			MAP::REMOVE_BLIP(&iLocal_165);
		}
		if (iLocal_214 == 5 && iLocal_203 == 0)
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(uLocal_305[6], false))
			{
				ANIMSCENE::ABORT_ANIM_SCENE(uLocal_305[6], false);
				func_64(8);
				bLocal_206 = true;
			}
			MISC::_0xE98D55C5983F2509(Local_90[0 /*34*/]);
			if (MAP::DOES_BLIP_EXIST(iLocal_163))
			{
				MAP::REMOVE_BLIP(&iLocal_163);
			}
			if (MAP::DOES_BLIP_EXIST(iLocal_162))
			{
				MAP::REMOVE_BLIP(&iLocal_162);
			}
			if (MAP::DOES_BLIP_EXIST(iLocal_161))
			{
				MAP::REMOVE_BLIP(&iLocal_161);
			}
			if (MAP::DOES_BLIP_EXIST(iLocal_164))
			{
				MAP::REMOVE_BLIP(&iLocal_164);
			}
			if (MAP::DOES_BLIP_EXIST(iLocal_165))
			{
				MAP::REMOVE_BLIP(&iLocal_165);
			}
			ENTITY::_SET_ENTITY_HEALTH(Local_90[0 /*34*/], 75, 0);
			iLocal_203 = 1;
			__LIB_10__::func_513(&(cParam0->f_2106), "LSHSS_PULLOFF", 0);
		}
		if (iLocal_203 == 1 && __LIB_13__::func_842() != 11)
		{
			if ((__LIB_2__::func_401(Local_90[0 /*34*/], 1, 1, 0, 0, 0) || TASK::IS_PED_GETTING_UP(Local_90[0 /*34*/])) && !__LIB_0__::func_163(Local_90[0 /*34*/], 474215631))
			{
				TASK::CLEAR_PED_TASKS(Local_90[0 /*34*/], true, false);
				MAP::REMOVE_BLIP(&iLocal_160);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_90[0 /*34*/], joaat("REL_NO_RELATIONSHIP"));
				PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 44, true);
				PED::SET_PED_CAN_BE_TARGETTED(Local_90[0 /*34*/], false);
				TASK::TASK_COWER(Local_90[0 /*34*/], -1, Global_35, 0);
			}
		}
		return true;
	}
	return false;
}

void func_331(bool bParam0)
{
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SADDLE_TRANSFER"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP_CARRIABLE"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP_CARRIABLE2"), false);
	if (bParam0)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), false);
	}
}

bool func_332(int iParam0)
{
	return __LIB_0__::func_27(iLocal_213, iParam0);
}

bool func_335()
{
	if (func_173())
	{
		if (INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35) == iLocal_195)
		{
			return true;
		}
	}
	return false;
}

char* func_345(int iParam0)
{
	char* sVar0;
	switch (iParam0)
	{
		case 0:
			sVar0 = "script@proc@loansharking@horsesell@leadin@mcs1@ilo";
			break;
		case 1:
			sVar0 = "script@proc@loansharking@horsesell@leadin@mcs1@goddamn_it";
			break;
		case 2:
			sVar0 = "script@proc@loansharking@horsesell@leadin@mcs1@base";
			break;
		case 3:
			sVar0 = "script@proc@loansharking@horsesell@leadin@mcs1@front";
			break;
		case 4:
			sVar0 = "script@proc@loansharking@horsesell@leadin@mcs1@back";
			break;
		case 5:
			sVar0 = "script@proc@loansharking@horsesell@ig1_surrender";
			break;
		case 6:
			sVar0 = "script@proc@loansharking@horsesell@ig2_drawer";
			break;
		case 7:
			sVar0 = "script@proc@loansharking@horsesell@ig4_exitbarn";
			break;
	}
	return sVar0;
}

bool func_347()
{
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 32768, 0))
	{
		return true;
	}
	return false;
}

void func_348(char* sParam0)
{
	int iVar0;
	if (__LIB_1__::func_322(sParam0))
	{
		iVar0 = AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE(sParam0);
		if (AUDIO::_0x254B0241E964B450(sParam0, iVar0) == Local_90[0 /*34*/])
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE_ATTACK"), false);
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), Local_90[0 /*34*/], 7, 0, 1);
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), Local_90[0 /*34*/], 20, 2, 1);
		}
		else
		{
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE_ATTACK"), true);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), true);
			PED::SET_PED_RESET_FLAG(Global_35, 337, true);
			PED::SET_PED_RESET_FLAG(Global_35, 338, true);
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), Local_90[0 /*34*/], 7, 0, 1);
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), Local_90[0 /*34*/], 20, 2, 0);
		}
	}
}

void func_351()
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	var uVar9;
	ANIMSCENE::_GET_ANIM_SCENE_ORIGIN(uLocal_305[5], &uVar9, &vVar6, 2);
	vVar0 = { ENTITY::GET_ENTITY_COORDS(Local_90[0 /*34*/], true, false) };
	vVar0.f_2 = (vVar0.z - 1f);
	vVar3 = { vVar0 };
	vVar6.f_2 = ENTITY::GET_ENTITY_HEADING(Local_90[0 /*34*/]);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uLocal_305[5], vVar3, vVar6, 2);
}

bool func_360(char[4] cParam0)
{
	if (bLocal_206 == 0)
	{
		if (__LIB_1__::func_205(Global_35, iLocal_302, 1, 0) || __LIB_1__::func_205(Global_35, iLocal_303, 1, 0))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), true);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), true);
		}
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(uLocal_305[6], false) && !__LIB_0__::func_481(1))
		{
			if (__LIB_10__::func_896(PLAYER::GET_PLAYER_INDEX(), Local_90[0 /*34*/]) && !func_332(2097152))
			{
				if (!PED::_IS_PED_CARRYING(Global_35))
				{
					if (!__LIB_0__::func_139(iLocal_16[0]))
					{
						iLocal_16[0] = __LIB_4__::func_864("SELL_THRT", joaat("INPUT_INTERACT_LOCKON_ROB"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
						__LIB_1__::func_221(iLocal_16[0], 1, 1);
						__LIB_1__::func_382(iLocal_16[0], 1, 1);
						HUD::_UIPROMPT_SET_GROUP(Global_1945938[__LIB_0__::func_17(iLocal_16[0]) /*18*/].f_3, HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(Local_90[0 /*34*/]), 0);
					}
					else if (__LIB_1__::func_514(iLocal_16[0], 1))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Global_35, -611.4f, -29.5f, 86f, (1f * 1.5f), -1, 0.25f, 0, 40000f);
						__LIB_1__::func_748(&(iLocal_16[0]), 1, 1);
						__LIB_10__::func_513(&(cParam0->f_2106), "LSHSS_IG3_MOVE", 0);
						bLocal_206 = true;
						func_222(2097152);
					}
				}
			}
			else if (__LIB_0__::func_139(iLocal_16[0]))
			{
				__LIB_1__::func_748(&(iLocal_16[0]), 1, 1);
			}
		}
		if (!func_332(1048576))
		{
			func_598(&(Local_90[0 /*34*/]), &Global_35, -1);
			func_222(1048576);
		}
		if ((__LIB_2__::func_401(Local_90[0 /*34*/], 1, 1, 0, 0, 0) && __LIB_0__::func_94(Global_35, -613.1f, -30.9f, 86f, 1) > 0.5f) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_90[0 /*34*/], true, false), 5f, true))
		{
			if ((ANIMSCENE::_0x8D81E7824B7753F7(uLocal_305[6], "s_base", 1) || ANIMSCENE::_0x8D81E7824B7753F7(uLocal_305[6], "s_Idle_01", 1)) && !__LIB_10__::func_236(Local_19[3 /*10*/].f_3, Local_19[3 /*10*/].f_4, &(Local_19[3 /*10*/].f_2), 0, 0, 0))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uLocal_305[6], "pl_Reveal_Gun", true);
				__LIB_1__::func_748(&(iLocal_16[0]), 1, 1);
				PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 130, true);
				TASK::_SET_SCENARIO_POINT_ACTIVE(iLocal_325, true);
				TASK::_SET_SCENARIO_POINT_ACTIVE(Local_19[4 /*10*/].f_9, true);
				bLocal_206 = true;
			}
			else
			{
				ANIMSCENE::ABORT_ANIM_SCENE(uLocal_305[6], false);
				__LIB_1__::func_748(&(iLocal_16[0]), 1, 1);
				PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 130, true);
				TASK::_SET_SCENARIO_POINT_ACTIVE(iLocal_325, true);
				TASK::_SET_SCENARIO_POINT_ACTIVE(Local_19[4 /*10*/].f_9, true);
				PED::_0x949B2F9ED2917F5D(Global_35, 0);
				PED::_0x949B2F9ED2917F5D(Global_35, 1);
				PED::_0x949B2F9ED2917F5D(Global_35, 2);
				PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 456, true);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_90[0 /*34*/], -614.8f, -29.5f, 85.3f, 1f, -1, 0.25f, 0, -88.8f);
				bLocal_206 = true;
				return true;
			}
		}
	}
	else
	{
		if (func_332(2097152))
		{
			if (!__LIB_0__::func_163(Global_35, 713668775) && !ANIMSCENE::_0x1F0E401031E20146(uLocal_305[6], "pl_Reveal_Shove"))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uLocal_305[6], "pl_Reveal_Shove", true);
				TASK::_SET_SCENARIO_POINT_ACTIVE(iLocal_325, true);
				TASK::_SET_SCENARIO_POINT_ACTIVE(Local_19[4 /*10*/].f_9, true);
				PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 130, true);
			}
		}
		if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(uLocal_305[6], false))
		{
			if (!__LIB_5__::func_463() || AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("LSHSS_REVEAL") >= 1)
			{
				TASK::_SET_SCENARIO_POINT_ACTIVE(Local_19[4 /*10*/].f_9, true);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_90[0 /*34*/], -614.8f, -29.5f, 85.3f, 1f, -1, 0.25f, 0, -88.8f);
				TASK::_SET_SCENARIO_POINT_ACTIVE(iLocal_325, true);
				PED::_0x949B2F9ED2917F5D(Global_35, 0);
				PED::_0x949B2F9ED2917F5D(Global_35, 1);
				PED::_0x949B2F9ED2917F5D(Global_35, 2);
				PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 456, true);
				iLocal_357 = 1;
				return true;
			}
		}
	}
	return false;
}

void func_368(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
		func_814(__LIB_0__::func_76(iParam0), iVar6, __LIB_0__::func_871());
	}
	else if (iVar0 == 8)
	{
		func_815(__LIB_0__::func_76(iParam0), iVar6, __LIB_0__::func_871(), __LIB_0__::func_113());
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
					__LIB_10__::func_525(14, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
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
						func_68(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_68(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_68(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_68(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_68(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_68(joaat("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_68(joaat("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_68(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_68(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_68(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_68(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_68(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_68(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_68(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_68(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_68(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_68(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_68(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_68(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_68(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_68(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_68(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_68(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_68(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_68(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_827();
						func_828(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
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
						func_68(joaat("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
							func_368(Global_1347702[21 /*49*/].f_15, 0, 0, 0, 0);
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
							func_368(Global_1347702[82 /*49*/].f_15, 0, 0, 0, 0);
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
							func_368(Global_1347702[83 /*49*/].f_15, 0, 0, 0, 0);
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
						func_68(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_68(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
		func_861();
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
							func_68(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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

void func_404()
{
	int iVar0;
	if (__LIB_0__::func_272(Global_35, 1))
	{
		TASK::CLEAR_PED_TASKS(Global_35, true, false);
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (__LIB_0__::func_272(Local_90[iVar0 /*34*/], 1))
		{
			PED::SET_PED_KEEP_TASK(Local_90[iVar0 /*34*/], true);
		}
		iVar0++;
	}
}

int func_469(int iParam0, int iParam1)
{
	var uVar0;
	return func_950(&uVar0, iParam0, iParam1);
}

int func_496(int iParam0, var uParam1, int iParam2, vector3 vParam3, float fParam6, float fParam7, float fParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	if (!__LIB_0__::func_272(*uParam1, 0))
	{
		if (!__LIB_0__::func_1(Global_1392626[iParam0 /*32*/].f_9, 256) || CAM::IS_SCREEN_FADED_OUT())
		{
			*uParam1 = __LIB_8__::func_931(iParam2, vParam3, fParam6, fParam7, fParam8, bParam9, bParam10, bParam11, bParam12, bParam13, 0, 0, 0);
			if (__LIB_0__::func_272(*uParam1, 0))
			{
				__LIB_0__::func_7(&(Global_1392626[iParam0 /*32*/].f_9), 256);
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_598(var uParam0, var uParam1, int iParam2)
{
	struct<23> Var0;
	if (!__LIB_0__::func_272(*uParam0, 0) || !__LIB_0__::func_272(*uParam1, 0))
	{
		return;
	}
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
	Var0.f_4 = 21030;
	Var0.f_8 = 4;
	Var0.f_19 = 3;
	Var0.f_20 = 2;
	Var0.f_21 = 3;
	Var0.f_22 = 3;
	Var0.f_13 = 3;
	Var0.f_7 = iParam2;
	_NAMESPACE29::_0x66F9EB44342BB4C5(*uParam0, &Var0);
}

void func_602(char[4] cParam0)
{
	var uVar0;
	char* sVar4;
	struct<8> Var5;
	char[] cVar13[8];
	__LIB_1__::func_283(&uLocal_336, 0);
	if (iLocal_348 < 8 && __LIB_1__::func_205(Global_35, iLocal_302, 1, 0))
	{
		if (iLocal_339[iLocal_348] == 0 && __LIB_0__::func_265(&uLocal_336) > IntToFloat((9 + iLocal_348 * 2)))
		{
			MISC::_INT_TO_STRING((1 + iLocal_348), "%i", &uVar0);
			sVar4 = __LIB_0__::func_628(&uVar0);
			Var5 = { __LIB_0__::func_98("LSHSS_WRO_IDLE", sVar4, 1, 63) };
			cVar13 = __LIB_0__::func_628(&Var5);
			__LIB_10__::func_513(&(cParam0->f_2106), cVar13, 0);
			__LIB_1__::func_148(&uLocal_336);
			iLocal_339[iLocal_348] = 1;
			iLocal_348++;
		}
	}
}

void func_606(char[4] cParam0, char* sParam1)
{
	vector3 vVar0[24];
	StringCopy(&cVar0, sParam1, 24);
	MemCopy(&(cParam0->f_348), {cVar0}, 4);
}

void func_766(var uParam0)
{
	vector3 vVar0;
	if (!__LIB_0__::func_84(uParam0, 4))
	{
		if (__LIB_0__::func_1(uParam0->f_284, 16384))
		{
			GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
		}
		vVar0 = { __LIB_10__::func_315(uParam0) };
		if (!__LIB_0__::func_1(uParam0->f_284, 524288))
		{
			__LIB_4__::func_717(&(uParam0->f_296));
		}
		func_1239(&(uParam0->f_284), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_10__::func_316(uParam0, 0f, 0f, 0f);
		func_1241(uParam0);
		func_1242(uParam0);
		__LIB_10__::func_455(uParam0, 0f, 0f, 0f, 0, 0);
		__LIB_10__::func_416(uParam0);
		__LIB_0__::func_88(uParam0, 4);
		__LIB_0__::func_106(uParam0, 0);
		__LIB_1__::func_550(&(Global_1946804.f_1497), Global_35, 1, 64, 1, 1, 1);
		if (CAM::_0x927B810E43E99932(&(uParam0->f_297)))
		{
			CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_297));
		}
	}
}

void func_814(int iParam0, int iParam1, bool bParam2)
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
			break;
		case 15:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_HUNTING1_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_HUNTING1_1B"), iParam1);
			break;
		case 33:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_INDUSTRY1_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_INDUSTRY1_2"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_INDUSTRY1_4"), iParam1);
			break;
		case 34:
			__LIB_1__::func_465(joaat("JOURNAL_GT_INDUSTRY_3"), iParam1);
			break;
		case 64:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP8_LARAMIE1_1"), iParam1);
			break;
		case 60:
			__LIB_1__::func_465(joaat("JOURNAL_CHAP8_PRONGHORN"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP8_MARSTON1_2"), iParam1);
			break;
		case 73:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP9_MARSTON6_1"), iParam1);
			break;
		case 74:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP9_MARSTON7_1"), iParam1);
			if (__LIB_1__::func_423() == 0)
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_4A"), iParam1);
			}
			else
			{
				__LIB_1__::func_465(joaat("JOURNAL_ENTRY_BEECHERS_DEBT_5B"), iParam1);
			}
			break;
		case 8:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_MARY1_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP2_MARY1_3"), iParam1);
			break;
		case 36:
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
			break;
		case 27:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_MOB1_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_MOB1_2"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_MOB1_3"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_MOB1_4"), iParam1);
			break;
		case 28:
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_MOB2_1"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_MOB2_2"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_MOB2_3"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_ENTRY_CHAP4_MOB2_4"), iParam1);
			__LIB_1__::func_465(joaat("JOURNAL_GT_MOB_2"), iParam1);
			break;
		case 29:
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
void func_815(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

void func_827()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_1308();
	func_1309();
	func_1310();
	func_1311();
	func_1312();
	__LIB_1__::func_848();
	__LIB_0__::func_376();
}

void func_828(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	func_135(iParam0, 1, 1, -142743235, 1);
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

void func_861()
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
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_1334(&uVar4, &iVar1, &iVar2, &iVar3)))
		{
		}
	else
	{
		}
	}
	if (iVar1 == 1)
	{
		__LIB_0__::func_384(MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_DELIVERY"), MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_SINGLE", 1), joaat("HUD_TOASTS"), -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	else if (iVar1 > 1)
	{
		__LIB_0__::func_384(MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_DELIVERY"), MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_PLURAL", iVar1), joaat("HUD_TOASTS"), -576888982, -2, 0, 0, 0, 0, 1, 1);
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

int func_950(var uParam0, int iParam1, int iParam2)
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
		return func_950(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

void func_1239(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
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
		func_1553();
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
					PED::_0xED00D72F81CF7278(iVar7, 0, true);
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

void func_1241(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (__LIB_0__::func_84(uParam0, 2048) && !__LIB_0__::func_86(__LIB_10__::func_334(uParam0)))
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
			func_62(iVar1, __LIB_10__::func_334(uParam0), __LIB_10__::func_335(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_62(iVar3, __LIB_10__::func_334(uParam0), __LIB_10__::func_335(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_1242(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if ((__LIB_0__::func_84(uParam0, 268435456) && !__LIB_0__::func_86(__LIB_10__::func_334(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { __LIB_10__::func_334(uParam0) };
			func_62(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

void func_1308()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_1588(0);
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
	func_1588(1);
}

void func_1309()
{
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_68(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_1310()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_1591(0);
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
	func_1591(1);
}

void func_1311()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_1__::func_432(15000, 0, 0, 0, 1);
			func_1591(0);
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
	func_1591(1);
}

void func_1312()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_68(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_68(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_135(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_135(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
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

int func_1334(var uParam0, int iParam1, int iParam2, int iParam3)
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
	iVar11 = (func_1607(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_952(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_68(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	__LIB_1__::func_432(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

void func_1553()
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
	iVar0 = func_1713(6291456, 0);
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

void func_1588(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (bParam0)
	{
		func_68(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_68(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_68(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_1721(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_828(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_135(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_1727(Var0);
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

void func_1591(bool bParam0)
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
		func_68(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_68(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_68(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_68(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_68(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_68(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_68(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_68(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_68(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_68(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_68(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_135(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_135(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_135(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_135(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_135(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_135(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_135(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_135(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_135(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_135(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_135(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
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

int func_1607(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
							iVar49 = (iVar49 + func_1607(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1607(iVar63, -915411861, 1, 0, 0));
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

int func_1713(int iParam0, int iParam1)
{
	var uVar0;
	return func_1794(&uVar0, iParam0, iParam1);
}

void func_1721(int iParam0)
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
	func_135(iParam0, 1, 1, -142743235, 1);
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
		func_135(uVar18[iVar36], 1, 1, -142743235, 1);
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

void func_1727(struct<6> Param0)
{
	if (!func_1815(Param0.f_4, 1))
	{
	}
	if (!func_1815(Param0, 1))
	{
	}
	if (!func_1815(Param0.f_2, 1))
	{
	}
	if (!func_1815(Param0.f_5, 1))
	{
	}
	if (!func_1815(Param0.f_3, 1))
	{
	}
	if (!func_1815(Param0.f_1, 1))
	{
	}
}

int func_1794(var uParam0, int iParam1, int iParam2)
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
		return func_1794(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

bool func_1815(int iParam0, int iParam1)
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
				if (func_1815(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_1815(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_1815(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_1815(iVar21, 1))
				{
				}
			}
		}
		__LIB_1__::func_712();
		return true;
	}
	return false;
}

