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
	var uLocal_14[2] = { 0, 0 };
	struct<9> Local_17 = { 0, 0, 0, 5, 5, 0, 0, 0, 0 } ;
	var uLocal_26[2] = { 0, 0 };
	int iLocal_29[14] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	int iLocal_47 = 0;
	var uLocal_48 = 0;
	int iLocal_49 = 0;
	struct<13> Local_50 = { 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 83 } ;
	var uLocal_63 = 0;
	var uLocal_64 = 83;
	var uLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90[5] = { 0, 0, 0, 0, 0 };
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115[13] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	float fLocal_153 = 0f;
	float fLocal_154 = 0f;
	float fLocal_155 = 0f;
	float fLocal_156 = 0f;
	float fLocal_157 = 0f;
	float fLocal_158 = 0f;
	float fLocal_159 = 0f;
	float fLocal_160 = 0f;
	struct<4> Local_161 = { 0, 0, 0, 0 } ;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 21;
	var uLocal_169 = 6;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	bool bLocal_173 = false;
	bool bLocal_174 = false;
	bool bLocal_175 = false;
	bool bLocal_176 = false;
	int iLocal_177 = 0;
	bool bLocal_178 = false;
	bool bLocal_179 = false;
	int iLocal_180 = 0;
	bool bLocal_181 = false;
	bool bLocal_182 = false;
	bool bLocal_183 = false;
	bool bLocal_184 = false;
	bool bLocal_185 = false;
	bool bLocal_186 = false;
	bool bLocal_187 = false;
	bool bLocal_188 = false;
	bool bLocal_189 = false;
	bool bLocal_190 = false;
	bool bLocal_191 = false;
	bool bLocal_192 = false;
	bool bLocal_193 = false;
	bool bLocal_194 = false;
	bool bLocal_195 = false;
	bool bLocal_196 = false;
	bool bLocal_197 = false;
	bool bLocal_198 = false;
	bool bLocal_199 = false;
	bool bLocal_200 = false;
	bool bLocal_201 = false;
	bool bLocal_202 = false;
	bool bLocal_203 = false;
	bool bLocal_204 = false;
	bool bLocal_205 = false;
	bool bLocal_206 = false;
	bool bLocal_207 = false;
	bool bLocal_208 = false;
	bool bLocal_209 = false;
	bool bLocal_210 = false;
	bool bLocal_211 = false;
	bool bLocal_212 = false;
	bool bLocal_213 = false;
	bool bLocal_214 = false;
	bool bLocal_215 = false;
	bool bLocal_216 = false;
	bool bLocal_217 = false;
	bool bLocal_218 = false;
	bool bLocal_219 = false;
	bool bLocal_220 = false;
	bool bLocal_221 = false;
	bool bLocal_222 = false;
	bool bLocal_223 = false;
	bool bLocal_224 = false;
	bool bLocal_225 = false;
	bool bLocal_226 = false;
	bool bLocal_227 = false;
	bool bLocal_228 = false;
	char* sLocal_229 = NULL;
	char[] cLocal_230[8] = 0;
	char* sLocal_231 = NULL;
	char* sLocal_232 = NULL;
	char* sLocal_233 = NULL;
	char* sLocal_234 = NULL;
	char* sLocal_235 = NULL;
	char* sLocal_236 = NULL;
	char* sLocal_237 = NULL;
	char* sLocal_238 = NULL;
	char* sLocal_239 = NULL;
	char* sLocal_240[5] = { NULL, NULL, NULL, NULL, NULL };
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	int iLocal_248 = 0;
	int iLocal_249 = 0;
	int iLocal_250[5] = { 0, 0, 0, 0, 0 };
	int iLocal_256 = 0;
	int iLocal_257 = 0;
	int iLocal_258 = 0;
	int iLocal_259 = 0;
	int iLocal_260 = 0;
	int iLocal_261 = 0;
	int iLocal_262 = 0;
	int iLocal_263 = 0;
	int iLocal_264 = 0;
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
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	int iLocal_412 = 0;
	int iLocal_413 = 0;
	int iLocal_414 = 0;
	int iLocal_415 = 0;
	int iLocal_416 = 0;
	int iLocal_417 = 0;
	struct<7> Local_418 = { -1, -1, 0, 0, 0, 0, 0 } ;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	int iLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	int iLocal_433 = 0;
	int iLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	int iLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	int iLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	struct<6> Local_446 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_452 = -1082130432;
	var uLocal_453 = 0;
	int iLocal_454 = 0;
	int iLocal_455 = 0;
	int iLocal_456 = 0;
	int iLocal_457 = 0;
	int iLocal_458 = 0;
	struct<45> Local_459[4];
	struct<17> Local_640[1];
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	int iLocal_660 = 0;
	int iLocal_661 = 0;
	int iLocal_662 = 0;
	struct<9> Local_663 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	struct<9> Local_679 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	vector3 vLocal_695[12] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_732 = 0;
	struct<17> Local_733[1];
	int iLocal_751 = 0;
	var uLocal_752 = -1;
	var uLocal_753 = 0;
	var uLocal_754 = -1;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = -1;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 1073741824;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 1;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 1106247680;
	var uLocal_778 = 1067450368;
	var uLocal_779 = 0;
	var uLocal_780 = 1092616192;
	var uLocal_781 = 1112014848;
	var uLocal_782 = 1106247680;
	var uLocal_783 = 1101529088;
	var uLocal_784 = 1101004800;
	var uLocal_785 = 1084227584;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	int iLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	struct<17> Local_816[1];
	vector3 vLocal_834 = { 0f, NaNf, 0f };
	var uLocal_837 = -1;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = -1;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 1073741824;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 1;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	var uLocal_860 = 1106247680;
	var uLocal_861 = 1067450368;
	var uLocal_862 = 0;
	var uLocal_863 = 1092616192;
	var uLocal_864 = 1112014848;
	var uLocal_865 = 1106247680;
	var uLocal_866 = 1101529088;
	var uLocal_867 = 1101004800;
	var uLocal_868 = 1084227584;
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
	int iLocal_895 = 0;
	int iLocal_896 = 0;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion
void __EntryFunction__()
{
	struct<2606> Var0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_137 = 4;
	iLocal_138 = -1;
	iLocal_146 = 8;
	iLocal_152 = -1;
	fLocal_153 = 1.5f;
	fLocal_154 = 1.5f;
	fLocal_155 = 25f;
	fLocal_156 = 6f;
	fLocal_157 = 8f;
	fLocal_158 = 10000f;
	fLocal_159 = 10000f;
	fLocal_160 = 0f;
	sLocal_229 = "rcm_prsn_camp";
	cLocal_230 = "rcm_prsn_camp2";
	sLocal_231 = "rcm_prsn_hunt";
	sLocal_232 = "rcm_prsn_home";
	sLocal_233 = "rcm_prsn_deer";
	sLocal_234 = "rcm_prsn_deer2";
	sLocal_235 = "rcm_prsn_deer3";
	sLocal_236 = "rcm_prsn_deer4";
	sLocal_237 = "AMB_WORK@WORLD_HUMAN_CROUCH_INSPECT@MALE_A@idle_a";
	sLocal_238 = "AMB_WORK@WORLD_HUMAN_CROUCH_INSPECT@MALE_A@stand_exit";
	sLocal_239 = "";
	iLocal_246 = joaat("A_C_DEER_01");
	iLocal_247 = joaat("P_CLEAVER01X");
	iLocal_248 = joaat("P_BOTTLENAVYRUM01X");
	iLocal_249 = WEAPON::_GET_WEAPONTYPE_MODEL(joaat("WEAPON_BOW"));
	iLocal_256 = joaat("P_CHAIR06X");
	iLocal_257 = joaat("P_KETTLE03X_NOBOIL");
	iLocal_258 = joaat("P_LADLE02X");
	iLocal_259 = joaat("S_OFFAL01X");
	iLocal_260 = joaat("A_C_BEAR_01");
	iLocal_261 = joaat("A_C_RABBIT_01");
	iLocal_262 = joaat("P_COOKGRATE01X");
	iLocal_263 = joaat("P_CS_RABBITHEADLESS");
	iLocal_264 = joaat("S_STOOLFOLDINGSTATIC01X");
	iLocal_413 = 3;
	iLocal_414 = 1;
	iLocal_415 = 15;
	iLocal_416 = 2;
	iLocal_427 = 2;
	iLocal_454 = 4;
	iLocal_455 = 4;
	iLocal_456 = 4;
	iLocal_457 = 4;
	iLocal_662 = 3;
	iLocal_732 = 12;
	iLocal_895 = -1;
	iLocal_896 = 4;
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
	__LIB_14__::func_88(&(uParam0->f_178));
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
		__LIB_12__::func_954(uParam0, func_76(uParam0));
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
	__LIB_0__::func_11(uParam0);
	if (func_92(uParam0))
	{
		func_86(uParam0);
		iVar0 = __LIB_14__::func_179(uParam0);
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
		__LIB_8__::func_710(0);
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
			func_131();
			__LIB_1__::func_141(0);
		}
		else if (__LIB_0__::func_1(uParam0->f_172, 32768))
		{
			func_133(1, 1);
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
	else if (!__LIB_0__::func_899(&(uParam0->f_2585)) || IntToFloat(__LIB_1__::func_592(&(uParam0->f_2585))) > __LIB_10__::func_381(uParam0))
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
	if (__LIB_12__::func_871(uParam0) || __LIB_12__::func_936(uParam0))
	{
		MISC::CLEAR_AREA(func_187(0), 3.5f, 1536);
	}
	__LIB_12__::func_658(uParam0, 2);
	__LIB_12__::func_659(uParam0, 16);
	__LIB_12__::func_656(uParam0, 2f);
	__LIB_12__::func_657(uParam0, 3.5f);
	iLocal_250[0] = joaat("P_CS_RABBITFEETLESS");
	iLocal_250[1] = joaat("P_CS_RABBITMEAT01X");
	iLocal_250[2] = joaat("P_CS_RABBITMEAT02X");
	iLocal_250[3] = joaat("P_CS_RABBITHEADLESS");
	iLocal_250[4] = joaat("P_CS_RABBITGUT");
	func_192();
	__LIB_13__::func_221(uParam0, 15f);
}

void func_42(var uParam0)
{
	int iVar0;
	__LIB_12__::func_908(uParam0, 0);
	__LIB_12__::func_867(uParam0, iLocal_246, 2);
	__LIB_12__::func_867(uParam0, iLocal_247, 1);
	__LIB_12__::func_867(uParam0, iLocal_248, 2);
	__LIB_12__::func_867(uParam0, iLocal_249, 3);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		__LIB_12__::func_867(uParam0, iLocal_250[iVar0], 1);
		iVar0++;
	}
	__LIB_12__::func_867(uParam0, iLocal_256, 3);
	__LIB_12__::func_867(uParam0, iLocal_257, 1);
	__LIB_12__::func_867(uParam0, iLocal_258, 1);
	__LIB_12__::func_867(uParam0, iLocal_259, 3);
	__LIB_12__::func_867(uParam0, iLocal_262, 2);
	__LIB_12__::func_867(uParam0, iLocal_263, 2);
	__LIB_12__::func_867(uParam0, iLocal_264, 2);
	__LIB_12__::func_867(uParam0, iLocal_260, 2);
	__LIB_12__::func_867(uParam0, iLocal_261, 2);
	__LIB_13__::func_55(uParam0, sLocal_237, 2);
	__LIB_13__::func_55(uParam0, sLocal_238, 2);
	__LIB_13__::func_15(uParam0, sLocal_229, 2, -1, 2);
	__LIB_13__::func_15(uParam0, cLocal_230, 2, -1, 2);
	__LIB_13__::func_15(uParam0, sLocal_231, 2, -1, 2);
	__LIB_13__::func_15(uParam0, sLocal_232, 2, -1, 2);
	__LIB_13__::func_15(uParam0, sLocal_233, 2, -1, 2);
	__LIB_13__::func_15(uParam0, sLocal_234, 2, -1, 2);
	__LIB_13__::func_15(uParam0, sLocal_235, 2, -1, 2);
	__LIB_13__::func_15(uParam0, sLocal_236, 2, -1, 2);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		AUDIO::PREPARE_MUSIC_EVENT(sLocal_240[iVar0]);
		iVar0++;
	}
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
			Var1 = { func_187(25) };
			Var1.f_3 = func_209(25);
			break;
		case 1:
			Var1 = { func_187(28) };
			Var1.f_3 = func_209(28);
			break;
		case 2:
			Var1 = { func_187(30) };
			Var1.f_3 = func_209(30);
			break;
		case 3:
			Var1 = { func_187(34) };
			Var1.f_3 = func_209(34);
			break;
		case 4:
			Var1 = { func_187(38) };
			Var1.f_3 = func_209(38);
			break;
		case 5:
			Var1 = { func_187(40) };
			Var1.f_3 = func_209(40);
			break;
		case 6:
			Var1 = { func_187(42) };
			Var1.f_3 = func_209(42);
			break;
		case 7:
			Var1 = { func_187(44) };
			Var1.f_3 = func_209(44);
			break;
		case 8:
			Var1 = { func_187(46) };
			Var1.f_3 = func_209(46);
			break;
	}
	return Var1;
}

bool func_62(var uParam0)
{
	return func_210(*uParam0, uParam0->f_3);
}

bool func_64(var uParam0)
{
	if (__LIB_0__::func_27(iLocal_131, 1))
	{
		if (func_212(&iLocal_66))
		{
			StringCopy(&(uParam0->f_2578), "PRSN_F_PEARS", 24);
			return true;
		}
	}
	if (__LIB_0__::func_27(iLocal_131, 2))
	{
		if (__LIB_0__::func_255(iLocal_67, 1))
		{
			StringCopy(&(uParam0->f_2578), "PRSN_F_CHRLS", 24);
			return true;
		}
		else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_67, Global_35, 1, 1))
		{
			StringCopy(&(uParam0->f_2578), "PRSN_F_CHRLA", 24);
			return true;
		}
	}
	if (__LIB_0__::func_27(iLocal_131, 8))
	{
		if (__LIB_0__::func_255(iLocal_69, 1) || TASK::IS_PED_IN_WRITHE(iLocal_69))
		{
			StringCopy(&(uParam0->f_2578), "PRSN_F_MOUNT", 24);
			return true;
		}
	}
	if (__LIB_0__::func_27(iLocal_131, 16))
	{
		if (__LIB_0__::func_255(iLocal_70, 1) || TASK::IS_PED_IN_WRITHE(iLocal_70))
		{
			StringCopy(&(uParam0->f_2578), "PRSN_F_CMOUNT", 24);
			return true;
		}
	}
	if (func_214())
	{
		StringCopy(&(uParam0->f_2578), "PRSN_F_DEER", 24);
		return true;
	}
	if (func_215())
	{
		StringCopy(&(uParam0->f_2578), "PRSN_F_SPOILED", 24);
		return true;
	}
	if (func_216() || func_217())
	{
		StringCopy(&(uParam0->f_2578), "PRSN_F_SPOILED", 24);
		return true;
	}
	if (func_218())
	{
		StringCopy(&(uParam0->f_2578), "PRSN_F_DEER", 24);
		return true;
	}
	if (WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, joaat("AMMO_PISTOL")) <= 0 && WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, joaat("AMMO_ARROW")) <= 0)
	{
		if (iLocal_414 <= 6 && iLocal_414 > 1)
		{
			if (!__LIB_0__::func_899(&uLocal_274))
			{
				__LIB_2__::func_259(&uLocal_274);
			}
			if (__LIB_9__::func_178(&uLocal_274) > 2f)
			{
				StringCopy(&(uParam0->f_2578), "PRSN_F_AMMO", 24);
				return true;
			}
		}
	}
	if (func_221(uParam0))
	{
		return true;
	}
	return false;
}

void func_68(var uParam0)
{
	PED::SET_PED_RESET_FLAG(Global_35, 194, true);
	if (uParam0->f_176 == 4 && uParam0->f_177 == 5)
	{
		func_222(0);
		func_223(&(uParam0->f_206));
	}
	if (!__LIB_2__::func_769(1175826463))
	{
		__LIB_1__::func_948(1175826463, 1, 0f, 0, 0, 0f, 1, 0);
	}
	func_226();
	func_227();
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

int func_76(var uParam0)
{
	return iLocal_414;
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
		func_300(uParam0, func_61(0), func_61(1), 0, 1, 0);
	}
}

void func_87(var uParam0)
{
	func_301(uParam0, 0);
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
		if (uParam0->f_171 != 0 || func_302(uParam0))
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
	vector3 vVar2;
	int iVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	float fVar10;
	bVar0 = true;
	iVar1 = iParam1;
	vVar2 = { func_61(iParam1) };
	if (!bLocal_202)
	{
		if (STREAMING::_IS_IMAP_ACTIVE(joaat("WEATHERVOL_CHPT1_SNOWSTORM")))
		{
			__LIB_0__::func_400(joaat("WEATHERVOL_CHPT1_SNOWSTORM"));
		}
		MISC::_0x3373779BAF7CAF48("SNOWLIGHT", "SNOWLIGHT_Pearson1");
		MISC::_0x3373779BAF7CAF48("SNOW", "SNOW_Pearson1");
		__LIB_8__::func_781();
		if (iVar1 >= 6)
		{
			iLocal_458 = joaat("BLIZZARD");
			MISC::_SET_WEATHER_TYPE(iLocal_458, true, true, false, 0f, false);
		}
		else if (iVar1 >= 4)
		{
			iLocal_458 = joaat("SNOW");
			MISC::_SET_WEATHER_TYPE(iLocal_458, true, true, false, 0f, false);
		}
		else if (iVar1 >= 3)
		{
			iLocal_458 = joaat("SNOWLIGHT");
			MISC::_SET_WEATHER_TYPE(iLocal_458, true, true, false, 0f, false);
		}
		else if (iVar1 >= 1)
		{
			iLocal_458 = joaat("SNOWLIGHT");
			MISC::_SET_WEATHER_TYPE(iLocal_458, true, true, false, 0f, false);
		}
		else
		{
			iLocal_458 = joaat("SNOW");
			MISC::_SET_WEATHER_TYPE(iLocal_458, true, true, false, 0f, false);
		}
		if (iVar1 == 0)
		{
			CLOCK::SET_CLOCK_TIME(9, 0, 0);
		}
		else
		{
			CLOCK::SET_CLOCK_TIME(12, 0, 0);
		}
		bLocal_202 = true;
	}
	func_308();
	iVar6 = 10000;
	if (iVar1 == 5)
	{
		__LIB_1__::func_683(&iLocal_131, 2048);
	}
	if (func_310(2))
	{
		if (!func_310(1))
		{
			iVar6 = 400;
		}
	}
	bVar7 = true;
	if (iVar1 == 0)
	{
		bVar7 = func_222(0);
	}
	else if (iVar1 == 6 || iVar1 == 7)
	{
		bVar7 = func_222(0);
	}
	bVar8 = true;
	if (iVar1 == 2 || __LIB_12__::func_936(uParam0))
	{
		bVar8 = false;
	}
	if ((((((bVar7 && func_311()) && func_312(0, bVar8)) && func_313(0)) && func_314(uParam0, 1)) && func_315()) && func_316(uParam0, iLocal_414))
	{
		__LIB_12__::func_875(uParam0, iLocal_67, "CHARLES_SMITH", 1);
	}
	else
	{
		bVar0 = false;
	}
	if (!bLocal_228)
	{
		if (iVar1 >= 3)
		{
			bLocal_228 = true;
		}
	}
	if (iVar1 >= 4)
	{
		if (!func_318(iVar6))
		{
			bVar0 = false;
		}
	}
	if (iVar1 >= 1)
	{
		if (!func_319(1))
		{
			bVar0 = false;
		}
	}
	if (iVar1 > 1)
	{
		__LIB_1__::func_683(&iLocal_132, 262144);
	}
	else
	{
		__LIB_12__::func_21(47);
		__LIB_12__::func_21(55);
	}
	if (!func_310(32))
	{
		if (iVar1 >= 3)
		{
			func_321(32);
		}
	}
	if (bVar0)
	{
		func_322(iVar1);
		if (func_310(1))
		{
			func_323(1);
			func_323(2);
		}
	}
	if (iVar1 > 1)
	{
		func_324(2);
	}
	if (iVar1 <= 1)
	{
		if (func_310(4))
		{
			func_323(4);
		}
		if (func_310(8))
		{
			func_323(8);
		}
	}
	if (iVar1 >= 0 && !__LIB_12__::func_936(uParam0))
	{
		bVar9 = true;
		if (iVar1 == 2)
		{
			bVar9 = false;
		}
		func_325(1, bVar9);
		__LIB_1__::func_683(&iLocal_131, 134217728);
		if (iVar1 < 2)
		{
			PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), joaat("WEAPON_REVOLVER_CATTLEMAN"), 0);
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
		}
		else if (iVar1 == 2)
		{
			PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), joaat("WEAPON_BOW"), 0);
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_BOW"), false, 0, false, false);
		}
		else
		{
			PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), joaat("WEAPON_REVOLVER_CATTLEMAN"), 0);
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
		}
		ENTITY::DETACH_ENTITY(iLocal_84, true, true);
		ENTITY::SET_ENTITY_VISIBLE(iLocal_84, false);
		ENTITY::SET_ENTITY_COORDS(iLocal_84, func_187(9), false, false, true, true);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_84, true);
	}
	else
	{
		func_326();
	}
	if (iVar1 < 1 && !__LIB_12__::func_936(uParam0))
	{
		if (!__LIB_1__::func_707(joaat("CONSUMABLE_OFFAL"), 1, 0))
		{
			func_328(joaat("CONSUMABLE_OFFAL"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		}
	}
	if (iVar1 >= 3)
	{
		if (!__LIB_0__::func_293(32))
		{
			__LIB_13__::func_72(32);
		}
	}
	if (iVar1 >= 1)
	{
		func_331(3);
		if (iVar1 >= 1)
		{
			func_331(13);
			func_331(14);
			func_331(15);
			func_331(6);
			func_331(7);
			func_331(17);
			func_331(16);
			func_331(0);
			func_331(2);
			func_331(3);
			func_331(4);
			func_331(5);
			func_331(8);
			func_331(9);
			func_331(10);
		}
		if (iVar1 >= 2)
		{
			func_331(54);
			func_331(52);
		}
		if (iVar1 >= 3)
		{
			func_331(51);
		}
		if (iVar1 >= 4)
		{
			func_331(60);
			func_331(59);
			func_331(62);
			func_331(61);
			func_331(58);
		}
		if (iVar1 >= 6)
		{
			func_331(74);
			func_331(75);
		}
	}
	if (iVar1 >= 4)
	{
		func_332(&Local_17, 8);
		func_332(&Local_17, 16);
	}
	PED::_0x9851DE7AEC10B4E1(vVar2, 500f, 1, 0);
	__LIB_0__::func_568(vVar2, 500f, 1);
	GRAPHICS::_0xEC3F7F24EEEB3BA3();
	__LIB_0__::func_172(iLocal_108);
	switch (iVar1)
	{
		case 0:
			if (__LIB_12__::func_936(uParam0))
			{
				func_301(uParam0, 0);
				if (!__LIB_0__::func_1(uParam0->f_172, 1))
				{
					return 2;
				}
				else
				{
					func_300(uParam0, func_61(0), func_61(1), 0, 1, 0);
					__LIB_13__::func_105(1, 1);
					__LIB_12__::func_957(uParam0, iLocal_67, 0, 0, 0, 0);
					__LIB_1__::func_683(&iLocal_132, 2);
					__LIB_12__::func_957(uParam0, iLocal_70, "HORSE_01^1", 0, 0, 0);
					__LIB_1__::func_683(&iLocal_132, 4);
					__LIB_12__::func_957(uParam0, iLocal_69, "HORSE_01", 0, 0, 0);
					__LIB_1__::func_683(&iLocal_132, 8);
					return 6;
				}
			}
			else
			{
				if (!bVar0)
				{
					return 2;
				}
				if (!bLocal_178)
				{
					if (func_337())
					{
						ANIMSCENE::START_ANIM_SCENE(iLocal_140);
					}
					else
					{
						return 2;
					}
					__LIB_6__::func_891(iLocal_67);
					func_339(&iLocal_67, 1);
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_67, -1348.922f, 2412.67f, 306.2412f, 139.7956f, true, false, true);
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_70, -1348.922f, 2412.67f, 306.2412f, 139.7956f, true, false, true);
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, -1349.665f, 2415.777f, 306.1039f, 158.5563f, true, false, true);
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_69, -1349.665f, 2415.777f, 306.1039f, 158.5563f, true, false, true);
					__LIB_1__::func_571(Global_35, iLocal_69, 0, -1, 1);
					__LIB_1__::func_571(iLocal_67, iLocal_70, 0, -1, 1);
					bLocal_178 = true;
					return 2;
				}
				else
				{
					if (!__LIB_0__::func_899(&uLocal_316))
					{
						__LIB_2__::func_259(&uLocal_316);
					}
					if (__LIB_9__::func_178(&uLocal_316) < 1f)
					{
						return 2;
					}
				}
				func_341(2, 1);
				func_342(3, 0);
				func_343(1);
				WEAPON::_0x14FF0C2545527F9B(iLocal_69, joaat("WEAPON_BOW"), Global_35);
				__LIB_12__::func_21(32);
				func_300(uParam0, func_61(0), func_61(1), 0, 1, 0);
				__LIB_13__::func_105(1, 1);
				return 7;
			}
			break;
		case 1:
			if (!bVar0)
			{
				return 2;
			}
			if (!bLocal_178)
			{
				func_343(1);
				func_339(&iLocal_69, 28);
				__LIB_1__::func_571(Global_35, iLocal_69, 0, -1, 1);
				func_339(&iLocal_70, 29);
				__LIB_1__::func_571(iLocal_67, iLocal_70, 0, -1, 1);
				bLocal_178 = true;
				return 2;
			}
			else
			{
				if (!__LIB_0__::func_899(&uLocal_316))
				{
					__LIB_2__::func_259(&uLocal_316);
				}
				if (__LIB_9__::func_178(&uLocal_316) < 1f)
				{
					return 2;
				}
			}
			AUDIO::TRIGGER_MUSIC_EVENT(sLocal_240[2]);
			func_341(3, 1);
			func_342(4, 0);
			WEAPON::_0x14FF0C2545527F9B(iLocal_69, joaat("WEAPON_BOW"), Global_35);
			__LIB_12__::func_21(32);
			func_300(uParam0, func_61(1), func_61(2), 1, 2, 0);
			__LIB_13__::func_105(1, 1);
			return 7;
		case 2:
			if (!bVar0)
			{
				return 2;
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_459[1 /*45*/]))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_459[1 /*45*/], -1318.123f, 1302.742f, 200.3784f, 214.4503f, true, false, true);
				PED::SET_PED_CONFIG_FLAG(Local_459[1 /*45*/], 186, true);
				__LIB_1__::func_864(Local_459[1 /*45*/], 1, 0);
				GRAPHICS::_ADD_BLOOD_POOL_2(-1318.012f, 1302.181f, 200.3434f, 1f, 1f, 1f, true, NaNf, false);
				return 2;
			}
			if (!bLocal_178)
			{
				func_345(&(Local_459[1 /*45*/]), 4, 0);
				bLocal_178 = true;
				return 2;
			}
			else
			{
				if (!__LIB_0__::func_899(&uLocal_316))
				{
					PED::_SET_PED_CROUCH_MOVEMENT(Global_35, true, 0, true);
					__LIB_2__::func_259(&uLocal_316);
				}
				if (__LIB_9__::func_178(&uLocal_316) < 1f || PED::IS_PED_RAGDOLL(Local_459[1 /*45*/]))
				{
					return 2;
				}
			}
			AUDIO::TRIGGER_MUSIC_EVENT(sLocal_240[3]);
			__LIB_6__::func_891(iLocal_67);
			__LIB_6__::func_891(Global_35);
			func_339(&Global_35, 30);
			func_339(&iLocal_69, 31);
			func_339(&iLocal_67, 32);
			func_339(&iLocal_70, 33);
			ENTITY::_0x9587913B9E772D29(Global_35, 1);
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_BOW"), true, 0, false, false);
			iLocal_414 = 5;
			func_341(6, 1);
			func_342(10, 0);
			func_346(&iLocal_67, 1);
			__LIB_0__::func_188(1);
			__LIB_12__::func_21(32);
			func_348(4);
			func_348(2);
			func_348(3);
			if (PED::_GET_PED_CROUCH_MOVEMENT(iLocal_67) == 0)
			{
				PED::_SET_PED_CROUCH_MOVEMENT(iLocal_67, true, 0, false);
				func_349();
			}
			func_300(uParam0, func_61(2), func_61(3), 2, 3, 0);
			__LIB_13__::func_105(1, 1);
			iLocal_136 = iLocal_134;
			return 7;
		case 3:
			if (!bVar0)
			{
				return 2;
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_459[0 /*45*/]) || !ENTITY::IS_ENTITY_DEAD(Local_459[1 /*45*/]))
			{
				PED::SET_PED_CONFIG_FLAG(Local_459[0 /*45*/], 186, true);
				__LIB_1__::func_864(Local_459[0 /*45*/], 1, 0);
				PED::SET_PED_CONFIG_FLAG(Local_459[1 /*45*/], 186, true);
				__LIB_1__::func_864(Local_459[1 /*45*/], 1, 0);
				return 2;
			}
			if (!bLocal_178)
			{
				func_345(&(Local_459[0 /*45*/]), 4, 0);
				func_345(&(Local_459[1 /*45*/]), 4, 0);
				__LIB_6__::func_891(iLocal_67);
				__LIB_6__::func_891(Global_35);
				func_339(&Global_35, 34);
				func_339(&iLocal_69, 35);
				func_339(&iLocal_67, 36);
				func_339(&iLocal_70, 37);
				__LIB_1__::func_571(Global_35, iLocal_69, 0, -1, 1);
				__LIB_1__::func_571(iLocal_67, iLocal_70, 0, -1, 1);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_459[0 /*45*/], false, true);
				TASK::TASK_CARRIABLE(Local_459[0 /*45*/], joaat("DEAD_CARRIABLE_DEER"), iLocal_70, 0, 0);
				__LIB_1__::func_683(&(Local_459[0 /*45*/].f_2), 4);
				__LIB_1__::func_683(&(Local_459[0 /*45*/].f_2), 8);
				iLocal_457 = 0;
				__LIB_1__::func_683(&iLocal_133, 1024);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_459[1 /*45*/], false, true);
				TASK::TASK_CARRIABLE(Local_459[1 /*45*/], joaat("DEAD_CARRIABLE_DEER"), iLocal_69, 0, 0);
				__LIB_1__::func_683(&(Local_459[1 /*45*/].f_2), 4);
				__LIB_1__::func_683(&(Local_459[1 /*45*/].f_2), 16);
				iLocal_455 = 1;
				bLocal_178 = true;
				return 2;
			}
			else
			{
				if (!__LIB_0__::func_899(&uLocal_316))
				{
					__LIB_2__::func_259(&uLocal_316);
				}
				if (__LIB_9__::func_178(&uLocal_316) < 3f)
				{
					return 2;
				}
			}
			AUDIO::TRIGGER_MUSIC_EVENT(sLocal_240[4]);
			func_341(10, 1);
			func_342(15, 0);
			WEAPON::_0x14FF0C2545527F9B(iLocal_69, joaat("WEAPON_BOW"), Global_35);
			func_300(uParam0, func_61(3), func_61(4), 3, 4, 0);
			__LIB_13__::func_105(1, 1);
			iLocal_136 = iLocal_134;
			return 7;
		case 4:
		case 5:
			if (!bVar0)
			{
				return 2;
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_459[0 /*45*/]) || !ENTITY::IS_ENTITY_DEAD(Local_459[1 /*45*/]))
			{
				PED::SET_PED_CONFIG_FLAG(Local_459[0 /*45*/], 186, true);
				__LIB_1__::func_864(Local_459[0 /*45*/], 1, 0);
				PED::SET_PED_CONFIG_FLAG(Local_459[1 /*45*/], 186, true);
				__LIB_1__::func_864(Local_459[1 /*45*/], 1, 0);
				return 2;
			}
			if (!bLocal_178)
			{
				if (iVar1 == 5)
				{
					__LIB_0__::func_489(0, 0);
					iLocal_83 = CAM::CREATE_CAM_WITH_PARAMS("default_scripted_camera", -1802.3f, 1849.7f, 256.5f, -5.6f, 0f, -22.9f, 51.3981f, false, 2);
					CAM::SET_CAM_ACTIVE(iLocal_83, true);
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				}
				func_345(&(Local_459[0 /*45*/]), 4, 0);
				func_345(&(Local_459[1 /*45*/]), 4, 0);
				if (iVar1 == 5)
				{
					func_339(&iLocal_69, 40);
					func_339(&iLocal_70, 41);
				}
				else
				{
					func_339(&iLocal_69, 38);
					func_339(&iLocal_70, 39);
				}
				__LIB_1__::func_571(Global_35, iLocal_69, 0, -1, 1);
				__LIB_1__::func_571(iLocal_67, iLocal_70, 0, -1, 1);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_459[0 /*45*/], false, true);
				TASK::TASK_CARRIABLE(Local_459[0 /*45*/], joaat("DEAD_CARRIABLE_DEER"), iLocal_70, 0, 0);
				__LIB_1__::func_683(&(Local_459[0 /*45*/].f_2), 4);
				__LIB_1__::func_683(&(Local_459[0 /*45*/].f_2), 8);
				iLocal_457 = 0;
				__LIB_1__::func_683(&iLocal_133, 1024);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_459[1 /*45*/], false, true);
				TASK::TASK_CARRIABLE(Local_459[1 /*45*/], joaat("DEAD_CARRIABLE_DEER"), iLocal_69, 0, 0);
				__LIB_1__::func_683(&(Local_459[1 /*45*/].f_2), 4);
				__LIB_1__::func_683(&(Local_459[1 /*45*/].f_2), 16);
				iLocal_455 = 1;
				func_351(&(Local_640[0 /*17*/]), 4, 0);
				bLocal_178 = true;
				return 2;
			}
			else
			{
				if (!__LIB_0__::func_899(&uLocal_316))
				{
					__LIB_2__::func_259(&uLocal_316);
				}
				if (iVar1 == 5)
				{
					fVar10 = 1f;
				}
				else
				{
					fVar10 = 1f;
				}
				if (__LIB_9__::func_178(&uLocal_316) < fVar10)
				{
					return 2;
				}
			}
			AUDIO::TRIGGER_MUSIC_EVENT(sLocal_240[4]);
			func_341(10, 1);
			WEAPON::_0x14FF0C2545527F9B(iLocal_69, joaat("WEAPON_BOW"), Global_35);
			if (__LIB_0__::func_272(Local_640[0 /*17*/], 0))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(Local_640[0 /*17*/], func_187(20), func_209(20), false, true);
				ENTITY::_0x9587913B9E772D29(Local_640[0 /*17*/], 1);
				func_351(&(Local_640[0 /*17*/]), 2, 0);
			}
			func_342(15, 0);
			if (iVar1 == 5)
			{
				PLAYER::_0x0869D499A7848309(PLAYER::GET_PLAYER_INDEX(), sLocal_232, 1.501f, 1.501f, 3f, 0, 1, -1082130432 /* Float: -1f */);
				PED::FORCE_PED_MOTION_STATE(iLocal_69, -1415276238, true, 0, false);
				PED::_0x2208438012482A1A(iLocal_69, false, false);
				PED::_0x2208438012482A1A(Global_35, false, false);
				PED::FORCE_PED_MOTION_STATE(iLocal_70, -1415276238, true, 0, false);
				PED::_0x2208438012482A1A(iLocal_70, false, false);
				PED::_0x2208438012482A1A(iLocal_67, false, false);
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
				PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE"), true);
				PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE_ALTERNATE"), true);
				__LIB_2__::func_259(&uLocal_352);
			}
			else
			{
				__LIB_1__::func_585(&uLocal_361, 3f);
			}
			func_354();
			func_300(uParam0, func_61(iVar1), func_61(6), iVar1, 6, 0);
			if (iVar1 == 5)
			{
				CAM::SET_CAM_ACTIVE(iLocal_83, false);
				CAM::RENDER_SCRIPT_CAMS(false, true, 2000, false, false, 0);
				__LIB_13__::func_105(0, 1);
			}
			else
			{
				__LIB_13__::func_105(1, 1);
			}
			iLocal_136 = iLocal_134;
			return 7;
		case 6:
			if (!bVar0)
			{
				return 2;
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_459[0 /*45*/]) || !ENTITY::IS_ENTITY_DEAD(Local_459[1 /*45*/]))
			{
				PED::SET_PED_CONFIG_FLAG(Local_459[0 /*45*/], 186, true);
				__LIB_1__::func_864(Local_459[0 /*45*/], 1, 0);
				PED::SET_PED_CONFIG_FLAG(Local_459[1 /*45*/], 186, true);
				__LIB_1__::func_864(Local_459[1 /*45*/], 1, 0);
				return 2;
			}
			if (!bLocal_178)
			{
				func_339(&(Local_459[0 /*45*/]), 43);
				func_339(&(Local_459[1 /*45*/]), 42);
				func_345(&(Local_459[0 /*45*/]), 4, 0);
				func_345(&(Local_459[1 /*45*/]), 4, 0);
				func_339(&iLocal_69, 42);
				__LIB_1__::func_571(Global_35, iLocal_69, 0, -1, 1);
				func_339(&iLocal_70, 43);
				__LIB_1__::func_571(iLocal_67, iLocal_70, 0, -1, 1);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_459[0 /*45*/], false, true);
				TASK::TASK_CARRIABLE(Local_459[0 /*45*/], joaat("DEAD_CARRIABLE_DEER"), iLocal_70, 0, 0);
				__LIB_1__::func_683(&(Local_459[0 /*45*/].f_2), 4);
				__LIB_1__::func_683(&(Local_459[0 /*45*/].f_2), 8);
				iLocal_457 = 0;
				__LIB_1__::func_683(&iLocal_133, 1024);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_459[1 /*45*/], false, true);
				TASK::TASK_CARRIABLE(Local_459[1 /*45*/], joaat("DEAD_CARRIABLE_DEER"), iLocal_69, 0, 0);
				__LIB_1__::func_683(&(Local_459[1 /*45*/].f_2), 4);
				__LIB_1__::func_683(&(Local_459[1 /*45*/].f_2), 16);
				iLocal_455 = 1;
				bLocal_178 = true;
				return 2;
			}
			else
			{
				if (!__LIB_0__::func_899(&uLocal_316))
				{
					__LIB_2__::func_259(&uLocal_316);
				}
				if (__LIB_9__::func_178(&uLocal_316) < 1f)
				{
					return 2;
				}
			}
			func_341(12, 1);
			func_342(15, 0);
			WEAPON::_0x14FF0C2545527F9B(iLocal_69, joaat("WEAPON_BOW"), Global_35);
			func_354();
			__LIB_1__::func_951(&iLocal_96);
			func_300(uParam0, func_61(6), func_61(7), 6, 7, 0);
			__LIB_13__::func_105(1, 1);
			iLocal_136 = iLocal_134;
			return 7;
		case 7:
			if (!bVar0)
			{
				return 2;
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_459[0 /*45*/]) || !ENTITY::IS_ENTITY_DEAD(Local_459[1 /*45*/]))
			{
				PED::SET_PED_CONFIG_FLAG(Local_459[0 /*45*/], 186, true);
				__LIB_1__::func_864(Local_459[0 /*45*/], 1, 0);
				PED::SET_PED_CONFIG_FLAG(Local_459[1 /*45*/], 186, true);
				__LIB_1__::func_864(Local_459[1 /*45*/], 1, 0);
				return 2;
			}
			if (!func_356(uParam0))
			{
				return 2;
			}
			if (!bLocal_178)
			{
				func_339(&(Local_459[0 /*45*/]), 44);
				func_339(&(Local_459[1 /*45*/]), 45);
				func_345(&(Local_459[0 /*45*/]), 4, 0);
				func_345(&(Local_459[1 /*45*/]), 4, 0);
				__LIB_1__::func_338(iLocal_69, -1348.12f, 2413.981f, 306.0733f);
				ENTITY::SET_ENTITY_HEADING(iLocal_69, 264.1054f);
				__LIB_5__::func_541(iLocal_69, -1348.12f, 2413.981f, 306.0733f, 2f, 1);
				__LIB_1__::func_338(iLocal_70, -1345.866f, 2418.433f, 306.0587f);
				ENTITY::SET_ENTITY_HEADING(iLocal_70, 256.1673f);
				__LIB_5__::func_541(iLocal_70, -1345.866f, 2418.433f, 306.0587f, 2f, 1);
				func_339(&Global_35, 44);
				func_339(&iLocal_67, 45);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_459[0 /*45*/], false, true);
				__LIB_1__::func_683(&(Local_459[0 /*45*/].f_2), 4);
				iLocal_457 = 0;
				__LIB_1__::func_683(&iLocal_133, 1024);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_459[1 /*45*/], false, true);
				__LIB_1__::func_683(&(Local_459[1 /*45*/].f_2), 4);
				iLocal_455 = 1;
				bLocal_178 = true;
				return 2;
			}
			else
			{
				func_301(uParam0, 1);
				if (!__LIB_0__::func_1(uParam0->f_172, 1))
				{
					return 2;
				}
				if (!__LIB_0__::func_899(&uLocal_316))
				{
					__LIB_2__::func_259(&uLocal_316);
				}
				if (__LIB_9__::func_178(&uLocal_316) < 1f)
				{
					return 2;
				}
			}
			__LIB_1__::func_951(&iLocal_96);
			func_341(13, 1);
			func_342(17, 0);
			WEAPON::_0x14FF0C2545527F9B(iLocal_69, joaat("WEAPON_BOW"), Global_35);
			func_300(uParam0, func_61(7), func_61(8), 7, 8, 0);
			__LIB_13__::func_105(1, 1);
			iLocal_136 = iLocal_134;
			return 5;
		case 8:
			if (!bVar0)
			{
				return 2;
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_459[0 /*45*/]) || !ENTITY::IS_ENTITY_DEAD(Local_459[1 /*45*/]))
			{
				PED::SET_PED_CONFIG_FLAG(Local_459[0 /*45*/], 186, true);
				__LIB_1__::func_864(Local_459[0 /*45*/], 1, 0);
				PED::SET_PED_CONFIG_FLAG(Local_459[1 /*45*/], 186, true);
				__LIB_1__::func_864(Local_459[1 /*45*/], 1, 0);
				return 2;
			}
			if (!bLocal_178)
			{
				func_345(&(Local_459[0 /*45*/]), 4, 0);
				func_345(&(Local_459[1 /*45*/]), 4, 0);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_459[0 /*45*/], false, true);
				__LIB_1__::func_683(&(Local_459[0 /*45*/].f_2), 4);
				__LIB_1__::func_683(&(Local_459[0 /*45*/].f_2), 8);
				iLocal_457 = 0;
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_459[1 /*45*/], false, true);
				__LIB_1__::func_683(&(Local_459[1 /*45*/].f_2), 4);
				__LIB_1__::func_683(&(Local_459[1 /*45*/].f_2), 16);
				iLocal_455 = 1;
				func_301(uParam0, 2);
				func_339(&Global_35, 46);
				func_339(&iLocal_67, 47);
				bLocal_178 = true;
				return 2;
			}
			else
			{
				if (!__LIB_0__::func_899(&uLocal_316))
				{
					__LIB_2__::func_259(&uLocal_316);
				}
				if (__LIB_9__::func_178(&uLocal_316) < 1f)
				{
					return 2;
				}
				if (!__LIB_0__::func_1(uParam0->f_172, 1))
				{
					return 2;
				}
			}
			__LIB_1__::func_951(&iLocal_96);
			WEAPON::_0x14FF0C2545527F9B(iLocal_69, joaat("WEAPON_BOW"), Global_35);
			func_341(15, 1);
			__LIB_13__::func_105(1, 1);
			return 5;
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
		func_300(uParam0, func_61(0), func_61(1), 0, 1, 1);
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
	return func_371(Var0, &(uParam0->f_206), uParam0);
}

int func_103(var uParam0)
{
	switch (iLocal_413)
	{
		case 0:
			if (func_311())
			{
				__LIB_12__::func_875(uParam0, iLocal_67, "CHARLES_SMITH", 1);
				func_341(1, 1);
				PED::FORCE_PED_MOTION_STATE(iLocal_70, joaat("MOTIONSTATE_WALK"), true, 1, false);
				PED::FORCE_PED_MOTION_STATE(iLocal_69, joaat("MOTIONSTATE_WALK"), true, 1, false);
				__LIB_0__::func_489(0, 0);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_84))
				{
					ENTITY::DETACH_ENTITY(iLocal_84, true, true);
					ENTITY::SET_ENTITY_VISIBLE(iLocal_84, false);
					ENTITY::SET_ENTITY_COORDS(iLocal_84, func_187(9), false, false, true, true);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_84, true);
					func_325(0, 0);
					PED::SET_PED_CONFIG_FLAG(Global_35, 141, true);
					func_328(joaat("CONSUMABLE_OFFAL"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					func_342(3, 1);
					__LIB_0__::func_172(iLocal_108);
					return 7;
				}
			}
			break;
		case 1:
			func_341(14, 1);
			func_301(uParam0, 2);
			if (__LIB_0__::func_272(iLocal_68, 0) && bLocal_174)
			{
				func_375(4, iLocal_68, -1345.845f, 2434.71f, 307.0545f, 1084227584 /* Float: 5f */, 1065353216 /* Float: 1f */);
			}
			return 7;
		case 2:
			func_376();
			__LIB_1__::func_864(Local_459[iLocal_455 /*45*/], 1, 0);
			__LIB_1__::func_864(Local_459[iLocal_457 /*45*/], 1, 0);
			if (func_377())
			{
				ANIMSCENE::START_ANIM_SCENE(vLocal_695[11 /*3*/]);
				if (ENTITY::DOES_ENTITY_EXIST(Local_459[iLocal_457 /*45*/]))
				{
					ENTITY::_0x18FF3110CF47115D(Local_459[iLocal_457 /*45*/], 7, 0);
					ENTITY::FREEZE_ENTITY_POSITION(Local_459[iLocal_457 /*45*/], true);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_459[iLocal_455 /*45*/]))
				{
					ENTITY::_0x18FF3110CF47115D(Local_459[iLocal_455 /*45*/], 7, 0);
					ENTITY::FREEZE_ENTITY_POSITION(Local_459[iLocal_455 /*45*/], true);
				}
			}
			Global_36560.f_15 = 0;
			return 8;
		case 3:
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
				func_300(uParam0, func_61(0), func_61(1), 0, 1, 1);
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
		if (func_378(&(uParam0->f_753), uParam0->f_2581, uParam0->f_2571, bParam1))
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
	vector3 vVar1;
	vector3 vVar4;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	bool bVar11;
	bool bVar12;
	int iVar13;
	int iVar14;
	bool bVar15;
	int iVar16;
	int iVar17;
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_109))
	{
		iLocal_109 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), -1356.104f, 2424.465f, 308.1755f, 0f, 0f, 73.5f, 5.5f, 3.5f, 3f);
	}
	if (!__LIB_0__::func_27(iLocal_132, 1))
	{
		bVar12 = true;
		if ((iLocal_414 == 2 || iLocal_414 == 1) || iLocal_414 == 10)
		{
			bVar12 = func_222(0);
		}
		if (((bVar12 && func_311()) && func_312(1, 0)) && func_313(1))
		{
			__LIB_1__::func_683(&iLocal_132, 1);
		}
		return 7;
	}
	if (!__LIB_0__::func_27(iLocal_131, 1048576))
	{
		if (iLocal_414 >= 10)
		{
			func_318(10000);
		}
	}
	else
	{
		func_380(uParam0);
	}
	if (!__LIB_0__::func_27(iLocal_131, 32))
	{
		if (iLocal_414 >= 3)
		{
			func_319(1);
		}
	}
	else
	{
		func_381();
		func_382();
	}
	if (!__LIB_0__::func_293(15))
	{
		__LIB_13__::func_72(15);
	}
	iVar13 = 6;
	func_383(uParam0, iLocal_67, iLocal_66);
	if (iLocal_414 >= 3 && iLocal_414 < 12)
	{
		func_384();
	}
	if (iLocal_414 >= 5 && iLocal_414 < 9)
	{
		func_385();
	}
	if (iLocal_414 >= 4)
	{
		if (!__LIB_0__::func_293(36))
		{
			__LIB_13__::func_72(36);
		}
	}
	if (iLocal_414 < 8)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_69))
		{
			ENTITY::_0xC3ABCFBC7D74AFA5(iLocal_69, 6, 1);
		}
	}
	if (iLocal_457 != 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_459[iLocal_457 /*45*/]))
		{
			ENTITY::_0xC3ABCFBC7D74AFA5(Local_459[iLocal_457 /*45*/], 12, 1);
		}
	}
	if (iLocal_414 >= 10 && iLocal_414 < 14)
	{
		if (!MAP::DOES_BLIP_EXIST(iLocal_82))
		{
			if (!__LIB_0__::func_899(&uLocal_379))
			{
				__LIB_2__::func_259(&uLocal_379);
			}
			else if (__LIB_9__::func_178(&uLocal_379) > 10f)
			{
				func_354();
				MAP::_BLIP_SET_MODIFIER(iLocal_82, 580546400);
				__LIB_1__::func_240(255, 1);
				__LIB_1__::func_561(&uLocal_379);
			}
		}
	}
	func_386();
	func_387();
	if (iLocal_414 <= 3)
	{
		func_388(&Local_17);
	}
	else if (func_389(&Local_17, 2))
	{
		func_390();
	}
	if (iLocal_414 > 6 && iLocal_414 < 14)
	{
		__LIB_14__::func_78(1);
	}
	func_392(uParam0);
	func_393();
	func_394();
	func_395(uParam0);
	func_396();
	func_397();
	func_398();
	func_399();
	func_400();
	func_401();
	func_402();
	if (iLocal_414 >= 4 && (__LIB_0__::func_27(iLocal_132, 262144) || __LIB_0__::func_27(iLocal_132, 131072)))
	{
		if (!__LIB_0__::func_293(47))
		{
			__LIB_13__::func_72(47);
		}
		if (!__LIB_0__::func_293(55))
		{
			__LIB_13__::func_72(55);
		}
	}
	if (!func_310(32))
	{
		if (__LIB_0__::func_293(55))
		{
			if (PLAYER::_0x0772F87D7B07719A(PLAYER::GET_PLAYER_INDEX(), 1, iLocal_152))
			{
				if (!__LIB_10__::func_598())
				{
					if (__LIB_0__::func_45(func_404(13), 10000, 0, 0, 0, 1) != 0)
					{
						func_321(32);
					}
				}
			}
		}
	}
	if (((iLocal_414 >= 4 && iLocal_414 < 10) && func_406(2)) && func_406(0))
	{
		func_407(4);
		if (func_408(4))
		{
			func_407(2);
		}
	}
	if (iLocal_414 == 7)
	{
		func_409();
	}
	if ((iLocal_414 >= 4 || ((iLocal_433 >= 5 && iLocal_433 <= 9) && PED::IS_PED_ON_FOOT(Global_35))) && iLocal_414 <= 7)
	{
		if (!AITRANSPORT::_0xF382C92CCC1CCDBC(iLocal_69, 0, 0))
		{
			AITRANSPORT::_0xBA8818212633500A(iLocal_69, 0, 1);
		}
	}
	else if (AITRANSPORT::_0xF382C92CCC1CCDBC(iLocal_69, 0, 0))
	{
		AITRANSPORT::_0xBA8818212633500A(iLocal_69, 0, 0);
	}
	if (iLocal_134 > 3)
	{
		if (func_410(&Local_50, 40))
		{
			func_411(48, 0);
		}
	}
	else if (iLocal_134 > 2)
	{
		if (func_410(&Local_50, 40))
		{
			func_411(47, 0);
		}
	}
	else if (iLocal_134 < 2)
	{
		func_412();
		func_413();
		func_414();
	}
	switch (iLocal_414)
	{
		case 1:
			if (!__LIB_0__::func_27(iLocal_131, 16384))
			{
				__LIB_1__::func_683(&iLocal_131, 16384);
			}
			func_415(uParam0, 2, 0);
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				func_416();
				if (iLocal_433 == 3)
				{
					func_341(2, 0);
				}
				else
				{
					Jump @4864; //curOff = 1142
					if (!__LIB_0__::func_27(iLocal_131, 16384))
					{
						func_300(uParam0, func_61(0), func_61(1), 0, 1, 0);
						__LIB_1__::func_683(&iLocal_131, 16384);
					}
					if (func_417(&iLocal_67, cLocal_230, 0) && __LIB_0__::func_266(iLocal_67, -1412.212f, 1522.005f, 239.0314f, 10f, 1, 1))
					{
						func_342(4, 0);
						func_341(3, 0);
					}
					else
					{
						if (__LIB_0__::func_71(Global_35))
						{
							func_415(uParam0, 4, 0);
						}
						else
						{
							func_415(uParam0, 2, 1);
						}
						Jump @4864; //curOff = 1277
						PED::SET_PED_RESET_FLAG(Global_35, 268, true);
						func_316(uParam0, 4);
						if (!__LIB_0__::func_27(iLocal_132, 32768))
						{
							if (__LIB_0__::func_71(Global_35) || iLocal_433 >= 5)
							{
								func_415(uParam0, 134217728, 0);
							}
							else
							{
								func_415(uParam0, 2, 1);
							}
						}
						if (!bLocal_197 && !bLocal_198)
						{
							if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_231))
							{
								if (TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_231, Global_36, &iVar14))
								{
									if (iVar14 >= 11)
									{
										TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(sLocal_231, 1, 0.5f, 0.8f, 1);
										bLocal_197 = true;
										bLocal_198 = true;
									}
								}
							}
						}
						bVar15 = false;
						vVar1 = { func_420(3, "CHARLES", "PL_IG2_Inspect_Tracks_Dismount") };
						if (iLocal_433 == 6 || iLocal_433 == 10)
						{
							bVar15 = true;
						}
						if (iLocal_433 == 4)
						{
							func_421(4, 0);
						}
						fVar8 = 30f;
						fVar10 = 20f;
						fVar9 = 8.5f;
						bVar11 = 3f;
						if (iLocal_433 == 5)
						{
							func_421(4, 0);
							if (__LIB_0__::func_266(iLocal_67, vVar1, 1f, 1, 1))
							{
								bVar15 = true;
							}
							if (func_422(3))
							{
								bVar15 = true;
							}
							bVar15 = true;
						}
						if (iLocal_433 == 9)
						{
							bVar15 = true;
						}
						if (bVar15)
						{
							PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_JUMP"), false);
							vVar4 = { -1404.44f, 1388.395f, 219.4092f };
							func_423(Global_35, vVar4, &uLocal_277, fVar8, fVar10, fVar9, bVar11, 0.25f, 0, 0, 1, 1, 0);
						}
						if (bLocal_197)
						{
							if (!PED::IS_PED_ON_MOUNT(Global_35) && iLocal_433 >= 5)
							{
								if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_231))
								{
									TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(sLocal_231, 0, 1065353216 /* Float: 1f */, 1056964608 /* Float: 0.5f */, 1);
									bLocal_197 = false;
								}
							}
						}
						if (iLocal_433 == 9 || iLocal_433 == 10)
						{
							if (!PED::IS_PED_ON_MOUNT(Global_35) && __LIB_0__::func_48(Global_35, iLocal_67, 15f, 1))
							{
								if (__LIB_0__::func_27(iLocal_131, 4096))
								{
									__LIB_1__::func_681(&iLocal_131, 4096);
								}
								func_341(4, 0);
							}
							else
							{
								if (iLocal_433 == 6 && !__LIB_0__::func_71(Global_35))
								{
									func_426(uParam0);
								}
								Jump @4864; //curOff = 1800
								if (!__LIB_0__::func_27(iLocal_131, 16384))
								{
									func_300(uParam0, func_61(1), func_61(2), 1, 2, 0);
									__LIB_1__::func_683(&iLocal_131, 16384);
								}
								if (__LIB_0__::func_27(iLocal_131, 4096))
								{
									func_341(5, 0);
								}
								else
								{
									iVar13 = func_411(21, 1);
									if (func_426(uParam0))
									{
										PED::SET_PED_RESET_FLAG(Global_35, 306, true);
										func_427();
										func_428();
										func_415(uParam0, 33554432, 0);
										PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), joaat("WEAPON_BOW"), 0);
									}
									Jump @4864; //curOff = 1929
									PED::SET_PED_RESET_FLAG(Global_35, 306, true);
									func_428();
									PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), joaat("WEAPON_BOW"), 0);
									func_415(uParam0, 33554432, 0);
									if (iLocal_134 > 0)
									{
										func_341(6, 0);
									}
									else
									{
										Jump @4864; //curOff = 1989
										PED::SET_PED_RESET_FLAG(Global_35, 306, true);
										func_428();
										func_429();
										if (!__LIB_0__::func_27(iLocal_131, 16384))
										{
											func_300(uParam0, func_61(2), func_61(3), 2, 3, 0);
											__LIB_1__::func_683(&iLocal_131, 16384);
										}
										func_430();
										if (!__LIB_0__::func_27(iLocal_130, 256))
										{
											if (!__LIB_0__::func_899(&uLocal_382))
											{
												__LIB_2__::func_259(&uLocal_382);
											}
											else if (__LIB_9__::func_178(&uLocal_382) > 2f)
											{
												func_415(uParam0, 256, 0);
											}
										}
										else
										{
											func_415(uParam0, 256, 0);
											if (__LIB_0__::func_899(&uLocal_382))
											{
												__LIB_1__::func_561(&uLocal_382);
											}
										}
										if (!func_431(39) && !func_431(41))
										{
											if (!bLocal_210)
											{
												func_411(41, 1);
											}
											else
											{
												func_411(39, 1);
											}
										}
										if (iLocal_134 > 1)
										{
											if (PED::_IS_PED_CARRYING(iLocal_69))
											{
												func_411(52, 0);
												func_341(9, 0);
												func_342(11, 0);
												Jump @4864; //curOff = 2228
											}
											else if ((iLocal_135 > 1 || !bLocal_223) || bLocal_196)
											{
												if (bLocal_196)
												{
													func_411(42, 1);
													func_331(40);
													func_331(43);
												}
												else if (bLocal_223)
												{
													func_411(43, 1);
													func_331(40);
													func_331(42);
												}
												else
												{
													func_411(40, 1);
													func_331(42);
													func_331(43);
												}
												func_348(5);
												func_348(6);
												func_432(0);
												func_433(38);
												func_331(38);
												func_341(7, 0);
											}
											else
											{
												Jump @2439; //curOff = 2370
												if (__LIB_9__::func_178(&uLocal_370) > 3f)
												{
													if (bLocal_196)
													{
														if ((!func_431(40) && !func_431(43)) && !func_431(42))
														{
															func_411(42, 1);
															func_342(11, 0);
														}
													}
												}
												Jump @4864; //curOff = 2439
												func_429();
												func_434();
												func_430();
												if (func_435())
												{
													if (!func_436(4))
													{
														func_415(uParam0, 2048, 1);
													}
													else if (__LIB_0__::func_270())
													{
														UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
													}
												}
												else
												{
													func_415(uParam0, 1024, 1);
												}
												if (!__LIB_6__::func_904())
												{
													func_411(50, 0);
												}
												if (PED::_IS_PED_CARRYING(Global_35))
												{
													func_439(iLocal_69, 4, 0f, 0f, 0f, 1);
													func_439(iLocal_69, 5, 0f, 0f, 0f, 1);
													func_439(iLocal_69, 6, 0f, 0f, 0f, 1);
													func_341(8, 0);
													func_433(50);
													func_331(50);
												}
												else
												{
													Jump @4864; //curOff = 2593
													func_429();
													if (iLocal_433 == 11)
													{
														iVar13 = func_411(50, 0);
													}
													if (func_440(uParam0, 0))
													{
													}
													else if (!bLocal_184)
													{
														func_415(uParam0, 16, 0);
														if (__LIB_11__::func_54())
														{
															if (__LIB_0__::func_48(Global_35, iLocal_69, (__LIB_1__::func_136(7) * 0.98f), 1))
															{
																UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
																func_407(7);
																bLocal_184 = true;
															}
														}
														else if (__LIB_0__::func_48(Global_35, iLocal_69, 15f, 0))
														{
															func_348(7);
															UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
															bLocal_184 = true;
														}
													}
													else if (__LIB_0__::func_48(Global_35, iLocal_69, 3f, 0))
													{
														if (!func_436(7))
														{
															func_415(uParam0, 8192, 1);
														}
														else if (__LIB_0__::func_270())
														{
															UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
														}
													}
													else
													{
														func_415(uParam0, 4096, 1);
													}
													if (PED::_IS_PED_CARRYING(iLocal_69))
													{
														if (!__LIB_0__::func_27(iLocal_131, 16384))
														{
															func_300(uParam0, func_61(3), func_61(4), 3, 4, 0);
															__LIB_1__::func_683(&iLocal_131, 16384);
														}
														func_331(55);
														func_341(9, 0);
													}
													else
													{
														Jump @4864; //curOff = 2862
														func_429();
														if (!func_440(uParam0, 1))
														{
															if (__LIB_0__::func_71(Global_35))
															{
																func_415(uParam0, 16777216, 0);
															}
															else
															{
																func_415(uParam0, 2, 1);
															}
														}
														if (!bLocal_227)
														{
															if (__LIB_0__::func_48(Global_35, iLocal_67, 30f, 1))
															{
																if (iLocal_433 == 14)
																{
																	bLocal_226 = true;
																}
																bLocal_227 = true;
															}
														}
														else if (bLocal_226)
														{
															iVar13 = func_411(57, 0);
														}
														else
														{
															iVar13 = func_411(56, 0);
														}
														if ((iLocal_433 == 14 && bLocal_227) && (iVar13 == 2 || iVar13 == 3))
														{
															func_341(10, 0);
														}
														else
														{
															Jump @4864; //curOff = 3027
															func_429();
															if (!bLocal_197)
															{
																if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_232))
																{
																	if (TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_232, Global_36, &iVar16))
																	{
																		if (iVar16 >= 9 && iVar16 < 14)
																		{
																			TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(sLocal_232, 1, 0.5f, 0.8f, 1);
																			bLocal_197 = true;
																		}
																	}
																}
															}
															else if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_232))
															{
																if (TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_232, Global_36, &iVar17))
																{
																	if (iVar17 >= 14)
																	{
																		TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(sLocal_232, 0, 1065353216 /* Float: 1f */, 1056964608 /* Float: 0.5f */, 1);
																		bLocal_197 = false;
																	}
																}
															}
															if (__LIB_6__::func_903(func_443(56)))
															{
																if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE(func_443(56)) > 0)
																{
																	__LIB_6__::func_900(func_443(56), 0, 0);
																}
															}
															if (__LIB_0__::func_27(iLocal_131, 2048))
															{
																if (__LIB_0__::func_899(&uLocal_352))
																{
																	if (!__LIB_0__::func_27(iLocal_132, 16384))
																	{
																		if (__LIB_9__::func_178(&uLocal_352) > 1.5f)
																		{
																			__LIB_1__::func_683(&iLocal_132, 16384);
																		}
																		else
																		{
																			func_411(73, 0);
																			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
																			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE"), true);
																			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE_ALTERNATE"), true);
																		}
																	}
																	else if (__LIB_9__::func_178(&uLocal_352) > 6f)
																	{
																		PLAYER::_0x908D4B72854C8F62(PLAYER::GET_PLAYER_INDEX());
																		TASK::CLEAR_PED_TASKS(Global_35, true, false);
																		__LIB_1__::func_561(&uLocal_352);
																	}
																}
															}
															if (!__LIB_0__::func_27(iLocal_132, 128))
															{
																if (__LIB_0__::func_266(Global_35, func_187(16), 100f, 1, 1))
																{
																	if (func_356(uParam0) && func_446())
																	{
																		ANIMSCENE::START_ANIM_SCENE(vLocal_695[10 /*3*/]);
																		__LIB_1__::func_683(&iLocal_132, 128);
																	}
																}
															}
															func_447();
															if (!__LIB_0__::func_27(iLocal_131, 16384))
															{
																if (__LIB_0__::func_27(iLocal_131, 2097152))
																{
																	func_300(uParam0, func_61(4), func_61(6), 4, 6, 0);
																	__LIB_1__::func_683(&iLocal_131, 16384);
																}
															}
															if (__LIB_0__::func_27(iLocal_131, 2097152))
															{
																if (((Local_640[0 /*17*/].f_7 != 8 && !PED::IS_PED_FLEEING(Local_640[0 /*17*/])) && !PED::IS_PED_IN_COMBAT(Local_640[0 /*17*/], 0)) && !PED::IS_PED_IN_MELEE_COMBAT(Local_640[0 /*17*/]))
																{
																	fVar7 = FLOCK::GET_ANIMAL_TUNING_FLOAT_PARAM(Local_640[0 /*17*/], 87);
																	if (__LIB_0__::func_48(Global_35, Local_640[0 /*17*/], (fVar7 * 1.2f), 1) && !__LIB_6__::func_903("PRSN_IG3"))
																	{
																		func_411(66, 0);
																	}
																}
															}
															if (!func_440(uParam0, 1))
															{
																if (!__LIB_4__::func_68(func_448(16777216), 1))
																{
																	if (__LIB_0__::func_71(Global_35))
																	{
																		if (__LIB_0__::func_27(iLocal_131, 268435456))
																		{
																			func_415(uParam0, 67108864, 0);
																		}
																		else
																		{
																			func_415(uParam0, 16384, 0);
																		}
																	}
																	else
																	{
																		func_415(uParam0, 2, 1);
																	}
																}
															}
															iVar13 = 3;
															if (iVar13 == 3)
															{
																if ((((iLocal_433 != 16 && iLocal_433 != 20) && iLocal_433 != 19) && iLocal_433 != 13) && iLocal_433 != 14)
																{
																	func_342(15, 0);
																}
																else
																{
																	Jump @3774; //curOff = 3768
																	Jump @4864; //curOff = 3771
																	if (__LIB_0__::func_266(Global_35, func_187(16), 16f, 1, 1))
																	{
																		func_341(12, 0);
																	}
																	else
																	{
																		Jump @4864; //curOff = 3807
																		if (!func_431(76) && !func_410(&Local_50, 76))
																		{
																			if (!__LIB_0__::func_899(&uLocal_307))
																			{
																				__LIB_2__::func_259(&uLocal_307);
																			}
																			else if (__LIB_9__::func_178(&uLocal_307) > 4.5f)
																			{
																				func_411(76, 0);
																				__LIB_1__::func_561(&uLocal_307);
																			}
																		}
																		if (!__LIB_0__::func_27(iLocal_132, 128))
																		{
																			if (func_356(uParam0) && func_446())
																			{
																				ANIMSCENE::START_ANIM_SCENE(vLocal_695[10 /*3*/]);
																				__LIB_1__::func_683(&iLocal_132, 128);
																			}
																		}
																		func_447();
																		if (!func_440(uParam0, 1))
																		{
																			if (__LIB_0__::func_71(Global_35))
																			{
																				func_415(uParam0, 536870912, 0);
																			}
																			else
																			{
																				func_415(uParam0, 2, 1);
																			}
																		}
																		if (__LIB_0__::func_126(iLocal_69))
																		{
																			func_341(13, 0);
																			Jump @4864; //curOff = 4002
																		}
																		else if (!PED::IS_PED_ON_MOUNT(Global_35))
																		{
																			if (__LIB_0__::func_266(iLocal_69, func_187(24), 6f, 1, 1))
																			{
																				func_341(13, 0);
																			}
																			else if (PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35) != 0)
																			{
																				func_341(13, 0);
																			}
																			else
																			{
																				Jump @4864; //curOff = 4068
																				if (PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(iLocal_69) != 0)
																				{
																					if (__LIB_0__::func_27(iLocal_130, 16384))
																					{
																						__LIB_1__::func_683(&iLocal_131, 268435456);
																					}
																					func_341(10, 0);
																				}
																				else
																				{
																					func_415(uParam0, 4194304, 0);
																					Jump @4864; //curOff = 4126
																					if (!__LIB_0__::func_27(iLocal_131, 16384))
																					{
																						func_300(uParam0, func_61(6), func_61(7), 6, 7, 0);
																						__LIB_1__::func_683(&iLocal_131, 16384);
																					}
																					if (!ENTITY::IS_ENTITY_IN_VOLUME(Local_459[iLocal_455 /*45*/], iLocal_113, true, 0))
																					{
																						if (PED::_GET_CARRIER_AS_PED(Local_459[iLocal_455 /*45*/]) == Global_35)
																						{
																							if (!__LIB_0__::func_27(iLocal_132, 2048))
																							{
																								if (MAP::DOES_BLIP_EXIST(iLocal_82))
																								{
																									MAP::_BLIP_SET_MODIFIER(iLocal_82, -401963276);
																								}
																								__LIB_1__::func_683(&iLocal_132, 2048);
																							}
																						}
																						else
																						{
																							if (MAP::DOES_BLIP_EXIST(iLocal_82))
																							{
																								MAP::_BLIP_REMOVE_MODIFIER(iLocal_82, -401963276);
																							}
																							__LIB_1__::func_681(&iLocal_132, 2048);
																						}
																					}
																					if (PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35) == 0)
																					{
																						if (!bLocal_185)
																						{
																							if (__LIB_0__::func_48(Global_35, iLocal_69, 3f, 0))
																							{
																								if (!func_436(5))
																								{
																									func_415(uParam0, 262144, 1);
																								}
																								else if (__LIB_0__::func_270())
																								{
																									UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
																								}
																							}
																							else
																							{
																								func_415(uParam0, 131072, 1);
																							}
																						}
																						else if (!ENTITY::IS_ENTITY_IN_VOLUME(Local_459[iLocal_455 /*45*/], iLocal_113, true, 0) && !ENTITY::IS_ENTITY_IN_VOLUME(Local_459[iLocal_455 /*45*/], iLocal_115[3], true, 0))
																						{
																							func_415(uParam0, 524288, 1);
																						}
																					}
																					else
																					{
																						if (!bLocal_185)
																						{
																							UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
																							bLocal_185 = true;
																						}
																						else
																						{
																							ENTITY::_0xC3ABCFBC7D74AFA5(Local_459[iLocal_455 /*45*/], 4, 1);
																						}
																						if (ENTITY::IS_ENTITY_IN_VOLUME(Local_459[iLocal_455 /*45*/], iLocal_113, true, 0))
																						{
																							if (!func_436(6))
																							{
																								func_415(uParam0, 65536, 1);
																							}
																							else if (__LIB_0__::func_270())
																							{
																								UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
																							}
																						}
																						else
																						{
																							func_415(uParam0, 32768, 1);
																						}
																					}
																					func_301(uParam0, 1);
																					return func_451(uParam0);
																					Jump @4864; //curOff = 4552
																					if (!__LIB_0__::func_27(iLocal_131, 16384))
																					{
																						func_300(uParam0, func_61(7), func_61(8), 7, 8, 0);
																						__LIB_1__::func_683(&iLocal_131, 16384);
																					}
																					if (__LIB_0__::func_272(iLocal_67, 0) && __LIB_0__::func_27(iLocal_131, 2))
																					{
																						if (ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_141, "CharlesSmith") || ANIMSCENE::_0xF94692EB9DC15D74(iLocal_141, 0))
																						{
																							if (__LIB_1__::func_679(iLocal_67))
																							{
																								__LIB_1__::func_640(7);
																							}
																							TASK::_0xE8C296B75EACC357(iLocal_67, 1f);
																							__LIB_6__::func_891(iLocal_67);
																							__LIB_3__::func_689(iLocal_67);
																							func_455(0);
																							__LIB_9__::func_203(7, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
																							__LIB_1__::func_681(&iLocal_131, 2);
																						}
																					}
																					__LIB_14__::func_79(Local_459[iLocal_455 /*45*/], "PEARSON_SEAMLESS_DEER_SKIN");
																					func_376();
																					if (func_458())
																					{
																						if (!bLocal_200)
																						{
																							ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_141, "Loop_Idle", true, false);
																							bLocal_200 = true;
																						}
																						else if (ANIMSCENE::GET_ANIM_SCENE_BOOL(iLocal_141, "Loop_Idle"))
																						{
																							if (ANIMSCENE::_0x8D81E7824B7753F7(iLocal_141, "s_turn_to_idle", 1))
																							{
																								ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_141, "Loop_Idle", false, false);
																							}
																						}
																						if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -976940967))
																						{
																							return 5;
																						}
																					}
																					else
																					{
																						if (!__LIB_6__::func_903("PRS_RSC_2_LO"))
																						{
																							func_411(81, 0);
																						}
																						func_459();
																					}
																					Jump @4864; //curOff = 4846
																					func_376();
																					return 8;
																				}
																			}
																			return 7;
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			default:
				break;
	}
}

void func_122(var uParam0)
{
	__LIB_4__::func_253(joaat("CSTAG_FLOW_FIRST_VISIT_RPRSN_POST"), joaat("CSTP_NEXT_VISIT"), joaat("CSTAG_PRIORITY_CRITICAL"), 8, 1, 1, 0);
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
		func_496(Global_1347702[iParam0 /*49*/].f_15, bParam4, bParam2, bParam6, bParam5);
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
	vVar2 = { func_500(Global_2621440[0 /*12066*/].f_9.f_7, &uVar0, &uVar1, 0, 1, 1, 0, 0, 0) };
	__LIB_0__::func_321(vVar2, uVar1, uVar0, 0);
	__LIB_0__::func_322(vVar2);
	Global_40.f_9.f_15 = __LIB_1__::func_447(vVar2, 0);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	MISC::SET_RANDOM_WEATHER_TYPE(false, true);
}

void func_133(int iParam0, bool bParam1)
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	if (iParam0 == 0 && __LIB_0__::func_13(32768))
	{
		return;
	}
	if (!__LIB_0__::func_13(32768))
	{
		func_504(1, bParam1);
	}
	MISC::_QUEUE_SAVEGAME_OPERATION(iParam0);
	MISC::_COPY_MEMORY(&(Global_2621440[iParam0 /*12066*/]), &Global_40, 12066);
	MISC::_COPY_MEMORY(&(Global_2645573[iParam0 /*5398*/]), &Global_12106, 5398);
	MISC::_COPY_MEMORY(&(Global_2656370[iParam0 /*3206*/]), &Global_17504, 3206);
	MISC::_COPY_MEMORY(&(Global_2662783[iParam0 /*2408*/]), &Global_20710, 2408);
	MISC::_COPY_MEMORY(&(Global_2667600[iParam0 /*1769*/]), &Global_23118, 1769);
	MISC::_COPY_MEMORY(&(Global_2671139[iParam0 /*1909*/]), &Global_24887, 1909);
	MISC::_COPY_MEMORY(&(Global_2674958[iParam0 /*777*/]), &Global_26796, 777);
	MISC::_COPY_MEMORY(&(Global_2676513[iParam0 /*4501*/]), &Global_27573, 4501);
	MISC::_COPY_MEMORY(&(Global_2685516[iParam0 /*4234*/]), &Global_32074, 4234);
	if (__LIB_0__::func_13(32768))
	{
		Global_2621440[iParam0 /*12066*/].f_9.f_14 = __LIB_0__::func_23();
	}
}

void func_138(var uParam0)
{
	func_326();
	if (__LIB_1__::func_707(joaat("PROVISION_PRIME_BEEF"), 1, 0))
	{
		func_506(joaat("PROVISION_PRIME_BEEF"), 1, 1, -142743235, 0);
	}
	if (__LIB_1__::func_707(joaat("PROVISION_GAME_MEAT"), 1, 0))
	{
		func_506(joaat("PROVISION_GAME_MEAT"), 1, 1, -142743235, 0);
	}
	if (__LIB_1__::func_707(joaat("CONSUMABLE_OFFAL"), 1, 0))
	{
		func_506(joaat("CONSUMABLE_OFFAL"), 1, 1, -142743235, 0);
	}
}

bool func_150(var uParam0)
{
	if (__LIB_1__::func_185(2))
	{
		return true;
	}
	if (__LIB_12__::func_644(uParam0) == 0)
	{
		if (!__LIB_0__::func_266(Global_35, func_187(25), 150f, 1, 1))
		{
			return true;
		}
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
	func_524(uParam0);
	func_525(uParam0);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		__LIB_0__::func_325(&(Local_459[iVar0 /*45*/].f_1));
		func_526(&(Local_459[iVar0 /*45*/]));
		if (!ENTITY::DOES_ENTITY_EXIST(Local_459[iVar0 /*45*/]))
		{
		}
		else
		{
			PED::_0x3088634CF8C819CF(Local_459[iVar0 /*45*/]);
			ENTITY::_0x5826EFD6D73C4DE5(Local_459[iVar0 /*45*/]);
			__LIB_2__::func_788(&(Local_459[iVar0 /*45*/]), 1, 0, 1);
		}
		iVar0++;
	}
	__LIB_4__::func_866(&iLocal_97, 1, 1);
	__LIB_4__::func_866(&iLocal_98, 1, 1);
	func_528(1);
}

Vector3 func_187(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1346.968f, 2402.061f, 306.5004f;
		case 1:
			return -1338.667f, 2407.438f, 306.3809f;
		case 2:
			return -1347.11f, 2413.899f, 306.2458f;
		case 3:
			return -1346.648f, 2415.288f, 306.2445f;
		case 4:
			return -1345.514f, 2401.971f, 307.6751f;
		case 5:
			return -1335.158f, 2397.18f, 300.478f;
		case 6:
			return -1346.936f, 2402.157f, 306.0734f;
		case 7:
			return -1348.359f, 2402.972f, 306.0674f;
		case 8:
			return -1346.518f, 2401.574f, 306.0757f;
		case 9:
			return -1353.17f, 2426.8f, 290f;
		case 10:
			return -1335.158f, 2395.18f, 300.478f;
		case 11:
			return -1267.247f, 1278.584f, 196.8089f;
		case 12:
			return -1320.111f, 1309.183f, 200.7803f;
		case 13:
			return -1270.472f, 1271.467f, 195.1652f;
		case 14:
			return -1281.88f, 1205.93f, 185.22f;
		case 15:
			return -1339.524f, 1316.697f, 204.2974f;
		case 16:
			return -1342.11f, 2421.48f, 306.78f;
		case 17:
			return -1344.861f, 2419.81f, 306.3762f;
		case 18:
			return -1347.218f, 2416.017f, 306.1768f;
		case 19:
			return -1344.49f, 2407.18f, 307.11f;
		case 20:
			return -1834.483f, 1806.883f, 235.2304f;
		case 21:
			return -1873.72f, 1850.22f, 243.2f;
		case 22:
			return -1406.24f, 1507.499f, 238.9176f;
		case 23:
			return -1367.23f, 1945.11f, 317.86f;
		case 24:
			return -1344.75f, 2415.56f, 306.47f;
		case 25:
			return -1342.013f, 2409.521f, 306.9943f;
		case 26:
			return -1455.199f, 1644.011f, 244.9045f;
		case 27:
			return -1453.828f, 1638.631f, 243.5347f;
		case 28:
			return -1415.71f, 1406.03f, 220.8f;
		case 29:
			return -1414.502f, 1401.121f, 220.6635f;
		case 30:
			return -1319.017f, 1306.415f, 200.6763f;
		case 31:
			return -1406.326f, 1389.193f, 223.6326f;
		case 32:
			return -1319.664f, 1313.27f, 201.0588f;
		case 33:
			return -1403.567f, 1390.586f, 219.3388f;
		case 34:
			return -1330.286f, 1331.693f, 203.5657f;
		case 35:
			return -1330.286f, 1331.693f, 203.5657f;
		case 36:
			return -1332.862f, 1336.266f, 204.5141f;
		case 37:
			return -1332.862f, 1336.266f, 204.5141f;
		case 38:
			return -1781.817f, 1791.441f, 235.7156f;
		case 39:
			return -1785.612f, 1793.42f, 235.8992f;
		case 40:
			return -1798.93f, 1856.214f, 252.8783f;
		case 41:
			return -1796.903f, 1861.389f, 254.2525f;
		case 42:
			return -1358.336f, 2400.476f, 306.2363f;
		case 43:
			return -1354.547f, 2404.854f, 306.2956f;
		case 44:
			return -1346.336f, 2406.496f, 306.0672f;
		case 45:
			return -1343.459f, 2408.431f, 306.3039f;
		case 46:
			return -1346.801f, 2404.769f, 306.0672f;
		case 47:
			return -1331.733f, 2397.967f, 306.4867f;
		case 48:
			return -1044.889f, 1634.051f, 243.4038f;
		case 49:
			return -1043.412f, 1644.807f, 243.5014f;
		case 50:
			return -1040.576f, 1640.602f, 242.9639f;
		case 51:
			return -1042.749f, 1637.339f, 243.351f;
		case 52:
			return -1042.475f, 1638.696f, 243.4951f;
	}
	return 0f, 0f, 0f;
}

void func_192()
{
	sLocal_240[0] = "RPRSN1_RESTART_BLIZZARD";
	sLocal_240[1] = "RPRSN1_RESTART_CAMP";
	sLocal_240[2] = "RPRSN1_RESTART_TRACKS";
	sLocal_240[3] = "RPRSN1_RESTART_3";
	sLocal_240[4] = "RPRSN1_RESTART_4";
}

float func_209(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 353.5757f;
		case 1:
			return 156.5566f;
		case 2:
			return 238.5189f;
		case 3:
			return 253.0268f;
		case 4:
			return 266f;
		case 5:
			return 0f;
		case 8:
			return 0f;
		case 10:
			return 0f;
		case 11:
			return -164.67f;
		case 12:
			return -73.53f;
		case 13:
			return -89.17f;
		case 14:
			return -115.54f;
		case 16:
			return 183.621f;
		case 17:
			return 245.695f;
		case 18:
			return 245.695f;
		case 19:
			return -167f;
		case 20:
			return 21.5257f;
		case 21:
			return -81.16f;
		case 23:
			return 41.84f;
		case 25:
			return 345.6244f;
		case 26:
			return 185.7742f;
		case 27:
			return 195.6185f;
		case 28:
			return 195.8843f;
		case 29:
			return 210.6505f;
		case 30:
			return 233.3481f;
		case 31:
			return 221.8898f;
		case 32:
			return -3.07f;
		case 33:
			return -129.04f;
		case 34:
			return 55.3499f;
		case 35:
			return 55.3499f;
		case 36:
			return 76.3815f;
		case 37:
			return 76.3815f;
		case 38:
			return 79.8923f;
		case 39:
			return 78.5881f;
		case 40:
			return -20.5f;
		case 41:
			return -17.8f;
		case 42:
			return 320.3134f;
		case 43:
			return 323.2173f;
		case 44:
			return 185.8407f;
		case 45:
			return 152.5848f;
		case 46:
			return 256.8202f;
		case 47:
			return 64.7909f;
		case 48:
			return -69.86507f;
		case 49:
			return -12.15393f;
		case 50:
			return -116.8371f;
		case 51:
			return -51.15537f;
		case 52:
			return -171.5399f;
	}
	return 0f;
}

int func_210(vector3 vParam0, var uParam3)
{
	int iVar0;
	if (MISC::_0x1B065A2BF7953815(0) != 1)
	{
		func_133(0, 1);
	}
	else
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_399(Global_35, 0, 2, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		iVar0 = func_581(0, 0);
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

bool func_212(int iParam0)
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
	__LIB_2__::func_50(&Var0, 1);
	__LIB_2__::func_111(&Var0, 0);
	__LIB_2__::func_52(&Var0, 1);
	__LIB_2__::func_51(&Var0, 0);
	__LIB_2__::func_105(&Var0, 0);
	__LIB_2__::func_634(&Var0, 0);
	__LIB_3__::func_333(&Var0, 0);
	__LIB_2__::func_715(&Var0, 0);
	__LIB_2__::func_104(&Var0, 0);
	__LIB_2__::func_110(&Var0, 0);
	if (ENTITY::IS_ENTITY_DEAD(*iParam0))
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
	if (func_588(*iParam0, 0, &Var0, &uVar28, 0, 0))
	{
		return true;
	}
	return false;
}

bool func_214()
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	int iVar13;
	fVar0 = 0f;
	iVar13 = 0;
	iVar13 = 0;
	while (iVar13 < 4)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_459[iVar13 /*45*/]))
		{
		}
		else if (__LIB_0__::func_272(Local_459[iVar13 /*45*/], 1))
		{
		}
		else if (iLocal_455 >= 4)
		{
		}
		else if (iLocal_457 >= 4)
		{
		}
		else if (iVar13 != iLocal_455 && iVar13 != iLocal_457)
		{
		}
		else if (ENTITY::_0x61914209C36EFDDB(Local_459[iVar13 /*45*/]) != 3)
		{
		}
		else if (ENTITY::IS_ENTITY_IN_WATER(Local_459[iVar13 /*45*/]))
		{
			vVar1 = { ENTITY::GET_ENTITY_COORDS(Local_459[iVar13 /*45*/], false, false) };
			vVar4 = { vVar1 + Vector(50f, 0f, 0f) };
			vVar7 = { vVar1 - Vector(50f, 0f, 0f) };
			if (WATER::TEST_PROBE_AGAINST_ALL_WATER(vVar4, vVar7, 0, &vVar10) == 1)
			{
				fVar0 = (vVar10.z - vVar1.z);
				if (fVar0 > 0.8f)
				{
					return true;
				}
			}
		}
		iVar13++;
	}
	return false;
}

bool func_215()
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_459[iVar0 /*45*/]))
		{
		}
		else if (FIRE::IS_ENTITY_ON_FIRE(Local_459[iVar0 /*45*/]))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_216()
{
	if (iLocal_455 >= 4)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_459[iLocal_455 /*45*/]))
	{
		return 0;
	}
	if (func_589(Local_459[iLocal_455 /*45*/]))
	{
		if (!__LIB_0__::func_899(&uLocal_406))
		{
			__LIB_2__::func_259(&uLocal_406);
		}
		else if (__LIB_9__::func_178(&uLocal_406) > 1.5f)
		{
			return 1;
		}
	}
	else if (__LIB_0__::func_899(&uLocal_406))
	{
		__LIB_1__::func_561(&uLocal_406);
	}
	return 0;
}

int func_217()
{
	if (iLocal_457 >= 4)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_459[iLocal_457 /*45*/]))
	{
		return 0;
	}
	if (func_589(Local_459[iLocal_457 /*45*/]))
	{
		if (!__LIB_0__::func_899(&uLocal_409))
		{
			__LIB_2__::func_259(&uLocal_409);
		}
		else if (__LIB_9__::func_178(&uLocal_409) > 1.5f)
		{
			return 1;
		}
	}
	else if (__LIB_0__::func_899(&uLocal_409))
	{
		__LIB_1__::func_561(&uLocal_409);
	}
	return 0;
}

bool func_218()
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_459[iVar0 /*45*/]))
		{
		}
		else if (__LIB_0__::func_272(Local_459[iVar0 /*45*/], 1))
		{
		}
		else if ((ENTITY::_0x61914209C36EFDDB(Local_459[iVar0 /*45*/]) == 5 || ENTITY::_0x61914209C36EFDDB(Local_459[iVar0 /*45*/]) == 7) || ENTITY::_0x61914209C36EFDDB(Local_459[iVar0 /*45*/]) == 4)
		{
			if (__LIB_0__::func_899(&(Local_459[iVar0 /*45*/].f_42)))
			{
				__LIB_1__::func_561(&(Local_459[iVar0 /*45*/].f_42));
			}
		}
		else if (__LIB_0__::func_393(Local_459[iVar0 /*45*/], iLocal_115[10], 0, 0) || __LIB_0__::func_393(Local_459[iVar0 /*45*/], iLocal_115[11], 0, 0))
		{
			if (!__LIB_0__::func_899(&(Local_459[iVar0 /*45*/].f_42)))
			{
				__LIB_2__::func_259(&(Local_459[iVar0 /*45*/].f_42));
			}
			else if (__LIB_9__::func_178(&(Local_459[iVar0 /*45*/].f_42)) > 10f)
			{
				return true;
			}
		}
		else if (__LIB_0__::func_899(&(Local_459[iVar0 /*45*/].f_42)))
		{
			__LIB_1__::func_561(&(Local_459[iVar0 /*45*/].f_42));
		}
		iVar0++;
	}
	return false;
}

bool func_221(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	char* sVar5;
	char* sVar6;
	float fVar7;
	float fVar8;
	iVar0 = 0;
	fVar7 = 0.7f;
	fVar8 = 0.5f;
	switch (iLocal_414)
	{
		case 0:
		case 15:
			return false;
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			vVar1 = { -1329.799f, 1285.162f, 207.1641f };
			fVar4 = 250f;
			if (iLocal_414 == 9)
			{
				if (__LIB_0__::func_71(Global_35))
				{
					sVar5 = "PRSN_F_DISCH";
					sVar6 = "PRS1_O_D_CHA";
				}
				else
				{
					sVar5 = "PRSN_F_DISAR";
					sVar6 = "PRS1_O_D_ARA";
				}
			}
			else
			{
				sVar5 = "PRSN_F_DISAR";
				sVar6 = "PRS1_O_D_ARA";
			}
			fVar7 = 0.9f;
			fVar8 = 0.7f;
			if (__LIB_0__::func_266(Global_35, -1419.302f, 1170.389f, 225.4326f, 10f, 1, 1))
			{
				StringCopy(&(uParam0->f_2578), "PRSN_F_DISAR", 24);
				return true;
			}
			if (iLocal_433 == 6 || iLocal_433 == 9)
			{
				if (__LIB_3__::func_547(iLocal_70, Global_35, 0f) == 0)
				{
					vVar1 = { ENTITY::GET_ENTITY_COORDS(iLocal_67, true, false) };
					sVar5 = "PRSN_F_DISCH";
					sVar6 = "PRS1_O_D_CHA";
					fVar7 = 0.7f;
					fVar8 = 0.5f;
					fVar4 = 60f;
				}
				if (iLocal_433 <= 9 && __LIB_0__::func_27(iLocal_131, 32))
				{
					iVar0 = 0;
					while (iVar0 < 4)
					{
						if ((((ENTITY::IS_ENTITY_DEAD(Local_459[iVar0 /*45*/]) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_459[iVar0 /*45*/], Global_35, 1, 1)) || __LIB_0__::func_27(Local_459[iVar0 /*45*/].f_2, 8192)) || __LIB_0__::func_27(Local_459[iVar0 /*45*/].f_2, 2048)) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_459[iVar0 /*45*/], true, false), 50f, true))
						{
							StringCopy(&(uParam0->f_2578), "PRSN_F_SPOOK", 24);
							return true;
						}
						iVar0++;
					}
				}
			}
			break;
		case 13:
			vVar1 = { ENTITY::GET_ENTITY_COORDS(iLocal_66, true, false) };
			fVar4 = 60f;
			sVar5 = "PRSN_F_DISPR";
			sVar6 = "PRS1_O_D_PRS";
			break;
		case 11:
		case 14:
			if (iLocal_455 == 4)
			{
				return false;
			}
			vVar1 = { ENTITY::GET_ENTITY_COORDS(Local_459[iLocal_455 /*45*/], true, false) };
			fVar4 = 60f;
			sVar5 = "PRSN_F_DISDR";
			sVar6 = "PRS1_O_D_DER";
			break;
		case 1:
		case 2:
		case 3:
		case 10:
		case 12:
			vVar1 = { ENTITY::GET_ENTITY_COORDS(iLocal_67, true, false) };
			fVar4 = 100f;
			sVar5 = "PRSN_F_DISCH";
			sVar6 = "PRS1_O_D_CHA";
			if (iLocal_433 == 6 || iLocal_433 == 9)
			{
				if (__LIB_3__::func_547(iLocal_70, Global_35, 0f) == 0)
				{
					fVar7 = 0.7f;
					fVar8 = 0.5f;
					fVar4 = 60f;
				}
			}
			if (iLocal_414 == 3)
			{
				if (iLocal_433 <= 9 && __LIB_0__::func_27(iLocal_131, 32))
				{
					iVar0 = 0;
					while (iVar0 < 4)
					{
						if ((((ENTITY::IS_ENTITY_DEAD(Local_459[iVar0 /*45*/]) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_459[iVar0 /*45*/], Global_35, 1, 1)) || __LIB_0__::func_27(Local_459[iVar0 /*45*/].f_2, 8192)) || __LIB_0__::func_27(Local_459[iVar0 /*45*/].f_2, 2048)) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_459[iVar0 /*45*/], true, false), 50f, true))
						{
							StringCopy(&(uParam0->f_2578), "PRSN_F_SPOOK", 24);
							return true;
						}
						iVar0++;
					}
				}
			}
			if (__LIB_0__::func_27(iLocal_131, 2097152) && __LIB_0__::func_48(Global_35, Local_640[0 /*17*/], 30f, 1))
			{
				fVar7 = 0.5f;
				fVar8 = 0.3f;
			}
			break;
	}
	if (!__LIB_0__::func_266(Global_35, vVar1, fVar4, 1, 1))
	{
		StringCopy(&(uParam0->f_2578), sVar5, 24);
		return true;
	}
	else if (!bLocal_173)
	{
		if (!__LIB_0__::func_266(Global_35, vVar1, (fVar4 * fVar7), 1, 1))
		{
			__LIB_12__::func_883(uParam0, sVar6, 0, 7500, 0, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			bLocal_173 = true;
		}
	}
	else if (__LIB_0__::func_266(Global_35, vVar1, (fVar4 * fVar8), 1, 1))
	{
		bLocal_173 = false;
	}
	return false;
}

bool func_222(bool bParam0)
{
	bool bVar0;
	bVar0 = true;
	if (!func_593(&iLocal_71, 0, -1342.912f, 2397.188f, 306.86f, 67.9362f, 1, 32, bParam0))
	{
		bVar0 = false;
	}
	if (!func_593(&iLocal_72, 3, -1341.653f, 2400.151f, 305.9834f, 72.9207f, 2, 64, bParam0))
	{
		bVar0 = false;
	}
	if (!func_593(&iLocal_73, 2, -1339.752f, 2403.761f, 305.9834f, 56.7724f, 4, 128, bParam0))
	{
		bVar0 = false;
	}
	if (!func_593(&iLocal_74, 6, -1335.566f, 2398.34f, 306.1038f, 244.776f, 8, 256, bParam0))
	{
		bVar0 = false;
	}
	if (!func_593(&iLocal_75, 9, -1339.546f, 2399.89f, 306.86f, 34.6f, 16, 512, bParam0))
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		func_594(&iLocal_71, 1024, bParam0);
		func_594(&iLocal_72, 2048, bParam0);
		func_594(&iLocal_73, 4096, bParam0);
		func_594(&iLocal_74, 8192, bParam0);
		func_594(&iLocal_75, 16384, bParam0);
	}
	return bVar0;
}

bool func_223(var uParam0)
{
	if (!func_312(1, 0))
	{
		return false;
	}
	if (__LIB_0__::func_27(iLocal_131, 8) && !__LIB_0__::func_27(iLocal_132, 8))
	{
		func_595(uParam0, &iLocal_69, "HORSE_01");
		__LIB_1__::func_683(&iLocal_132, 8);
	}
	if (!func_313(0))
	{
		return false;
	}
	if (__LIB_0__::func_27(iLocal_131, 16) && !__LIB_0__::func_27(iLocal_132, 4))
	{
		func_595(uParam0, &iLocal_70, "HORSE_01^1");
		__LIB_1__::func_683(&iLocal_132, 4);
	}
	if (!func_311())
	{
		return false;
	}
	if (__LIB_0__::func_27(iLocal_131, 2) && !__LIB_0__::func_27(iLocal_132, 2))
	{
		func_595(uParam0, &iLocal_67, "CharlesSmith");
		__LIB_1__::func_683(&iLocal_132, 2);
	}
	return true;
}

void func_226()
{
	int iVar0;
	if (!bLocal_202)
	{
		MISC::_0x3373779BAF7CAF48("SNOWLIGHT", "SNOWLIGHT_Pearson1");
		MISC::_0x3373779BAF7CAF48("SNOW", "SNOW_Pearson1");
		__LIB_8__::func_781();
		bLocal_202 = true;
	}
	iVar0 = __LIB_2__::func_954();
	if ((func_603(74) == 2 || func_603(74) == 3) || iLocal_414 >= 12)
	{
		if (iLocal_458 != joaat("BLIZZARD") && iVar0 != joaat("BLIZZARD"))
		{
			iLocal_458 = joaat("BLIZZARD");
			MISC::_SET_WEATHER_TYPE(iLocal_458, false, true, true, 60f, false);
		}
	}
	else if (iLocal_414 >= 10)
	{
		if (iLocal_458 != joaat("SNOW") && iVar0 != joaat("SNOW"))
		{
			iLocal_458 = joaat("SNOW");
			MISC::_SET_WEATHER_TYPE(iLocal_458, false, true, true, 120f, false);
		}
	}
	else if ((iLocal_414 == 2 && bLocal_203) || iLocal_414 >= 3)
	{
		if (iLocal_458 != joaat("SNOWLIGHT") && iVar0 != joaat("SNOWLIGHT"))
		{
			iLocal_458 = joaat("SNOWLIGHT");
			MISC::_SET_WEATHER_TYPE(iLocal_458, false, true, true, 60f, false);
		}
	}
	else if (iLocal_458 != joaat("SNOW") && iVar0 != joaat("SNOW"))
	{
		iLocal_458 = joaat("SNOW");
		MISC::_SET_WEATHER_TYPE(iLocal_458, false, true, true, 30f, false);
	}
	func_604();
	func_308();
}

void func_227()
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!bLocal_212)
	{
		iVar0 = 22;
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, joaat("WEAPON_BOW"), 0, false))
		{
			iVar1 = WEAPON::GET_AMMO_IN_PED_WEAPON(Global_35, joaat("WEAPON_BOW"));
			if (iVar1 > 0)
			{
				if (iVar1 != iVar0)
				{
					if (iVar1 > iVar0)
					{
						iVar2 = (iVar1 - iVar0);
						func_506(joaat("AMMO_ARROW"), iVar2, 1, 562618531, 0);
					}
					else if (iVar1 < iVar0)
					{
						iVar2 = (iVar0 - iVar1);
						func_328(joaat("AMMO_ARROW"), iVar2, 1, 0, 0, 752097756, 0, 0, 0, 0);
					}
				}
				else
				{
					bLocal_212 = true;
				}
			}
		}
	}
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
	if (func_630(&iLocal_66, 1))
	{
		return 1;
	}
	return 0;
}

void func_244(var uParam0)
{
	func_524(uParam0);
	__LIB_13__::func_222(uParam0, 7);
	if (__LIB_12__::func_644(uParam0) == 0)
	{
	}
	if (__LIB_0__::func_272(iLocal_66, 1))
	{
		TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(iLocal_66, ENTITY::GET_ENTITY_COORDS(iLocal_66, true, false), 10f, 0, false, false, false, false);
	}
	func_525(uParam0);
}

void func_259(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_172, 16))
	{
		__LIB_12__::func_966(uParam0, 0);
		func_87(uParam0);
	}
}

int func_283(var uParam0)
{
	if (!func_314(uParam0, 1))
	{
		return 0;
	}
	if (!STREAMING::_IS_IMAP_ACTIVE(-1306375743))
	{
		__LIB_0__::func_401(-1306375743);
		return 0;
	}
	if (!func_222(0))
	{
		return 0;
	}
	if (!func_315())
	{
		return 0;
	}
	if (!func_316(uParam0, iLocal_414))
	{
		return 0;
	}
	if (!__LIB_12__::func_871(uParam0))
	{
		func_323(2);
		func_323(1);
	}
	func_686();
	__LIB_14__::func_180(uParam0);
	__LIB_12__::func_875(uParam0, Global_35, "ARTHUR", 1);
	return 1;
}

void func_300(var uParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10, bool bParam11)
{
	struct<4> Var0;
	struct<4> Var4;
	if (uParam0->f_752 != iParam9)
	{
		if (uParam0->f_752 > -1)
		{
			__LIB_12__::func_945(uParam0);
		}
		uParam0->f_752 = iParam9;
		__LIB_12__::func_946(uParam0);
	}
	if (__LIB_12__::func_639(uParam0, 128) && __LIB_4__::func_512())
	{
		__LIB_0__::func_869(0);
		bParam11 = true;
	}
	if (!bParam11)
	{
		if ((__LIB_4__::func_513() == iParam9 && __LIB_12__::func_799() == iParam10) && !__LIB_0__::func_138(Global_1347394, 0f, 0f, 0f))
		{
			return;
		}
	}
	if (__LIB_4__::func_513() != iParam9 && !__LIB_0__::func_138(Global_1347394, 0f, 0f, 0f))
	{
		__LIB_0__::func_304(0);
	}
	Var0 = { Param1 };
	Var0.f_3 = Param1.f_3;
	Var4 = { Param5 };
	Var4.f_3 = Param5.f_3;
	func_710(Global_1347702[uParam0->f_174 /*49*/].f_15, Var0, Var4, iParam9, iParam10);
}

void func_301(var uParam0, int iParam1)
{
	if (iLocal_413 == iParam1)
	{
		return;
	}
	iLocal_413 = iParam1;
	switch (iLocal_413)
	{
		case 0:
			StringCopy(&(uParam0->f_2575), "RPRSN_RSC_1", 24);
			__LIB_12__::func_956(&(uParam0->f_753), Global_35, 0, 0);
			__LIB_12__::func_956(&(uParam0->f_753), iLocal_66, 0, 0);
			__LIB_12__::func_956(&(uParam0->f_753), iLocal_90[0], 0, 0);
			__LIB_12__::func_956(&(uParam0->f_753), iLocal_90[1], 0, 0);
			__LIB_12__::func_956(&(uParam0->f_753), iLocal_90[2], 0, 0);
			__LIB_12__::func_956(&(uParam0->f_753), iLocal_90[3], 0, 0);
			__LIB_12__::func_956(&(uParam0->f_753), iLocal_90[4], 0, 0);
			__LIB_12__::func_956(&(uParam0->f_753), iLocal_87, 0, 0);
			__LIB_12__::func_956(&(uParam0->f_753), iLocal_85, 0, 0);
			__LIB_12__::func_956(&(uParam0->f_753), iLocal_88, 0, 0);
			__LIB_12__::func_956(&(uParam0->f_753), iLocal_96, 0, 0);
			__LIB_12__::func_956(&(uParam0->f_753), iLocal_89, "p_ladle02x", 0);
			__LIB_12__::func_909(&(uParam0->f_206));
			__LIB_12__::func_957(uParam0, Global_35, 0, 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_66, 0, 0, 0, 0);
			__LIB_12__::func_957(uParam0, __LIB_0__::func_271(7), 0, 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_90[0], 0, 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_90[1], 0, 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_90[2], 0, 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_90[3], 0, 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_90[4], 0, 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_85, 0, 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_87, 0, 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_84, "W_SP_BowArrow", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_88, "p_kettle03x", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_96, "s_offal01x", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_89, "p_ladle02x", 0, 0, 0);
			__LIB_12__::func_779(uParam0, Global_1347702[uParam0->f_174 /*49*/].f_24);
			__LIB_13__::func_261(uParam0, &iLocal_114, 0, 0, 0, 0);
			__LIB_13__::func_16(uParam0, 131710);
			__LIB_12__::func_982(uParam0, 131809);
			__LIB_12__::func_981(uParam0, 131864);
			if (!__LIB_1__::func_185(2))
			{
				__LIB_13__::func_725(&(uParam0->f_206), 5f);
				__LIB_14__::func_80(&(uParam0->f_206), 10f);
			}
			__LIB_0__::func_7(&(uParam0->f_172), 16);
			break;
		case 1:
			StringCopy(&(uParam0->f_2575), "RPRSN_RSC_2", 24);
			__LIB_12__::func_909(&(uParam0->f_206));
			__LIB_12__::func_957(uParam0, Global_35, 0, 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_67, 0, 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_66, 0, 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_68, 0, 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_86, "p_bottlenavyrum01x", 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_87, 0, 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_85, 0, 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_88, 0, 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_89, "p_ladle02x", 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_459[iLocal_455 /*45*/], "Deer_01", 0, 0, 1);
			__LIB_12__::func_957(uParam0, Local_459[iLocal_457 /*45*/], "Deer_01^1", 0, 0, 1);
			__LIB_12__::func_779(uParam0, Global_1347702[uParam0->f_174 /*49*/].f_24);
			__LIB_13__::func_261(uParam0, &iLocal_434, 0, 0, 0, 0);
			__LIB_13__::func_16(uParam0, 132150);
			__LIB_12__::func_981(uParam0, 132383);
			__LIB_0__::func_7(&(uParam0->f_172), 16);
			break;
		case 2:
			StringCopy(&(uParam0->f_2575), "RPRSN_EXT", 24);
			__LIB_12__::func_957(uParam0, Global_35, 0, 0, 0, 0);
			__LIB_12__::func_957(uParam0, iLocal_66, 0, 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_459[iLocal_455 /*45*/], "Deer_01", 0, 0, 1);
			__LIB_12__::func_957(uParam0, Local_459[iLocal_457 /*45*/], "Deer_01^1", 0, 0, 1);
			__LIB_12__::func_779(uParam0, Global_1347702[uParam0->f_174 /*49*/].f_24);
			__LIB_13__::func_261(uParam0, &iLocal_434, 0, 0, 0, 0);
			__LIB_13__::func_16(uParam0, 132588);
			__LIB_12__::func_982(uParam0, 132650);
			__LIB_12__::func_981(uParam0, 132677);
			if (__LIB_1__::func_185(2))
			{
				__LIB_12__::func_676(&(uParam0->f_206), "PL2_BridgetoWNT4_Ending");
				__LIB_13__::func_17(&(uParam0->f_206), "PL2_BridgetoWNT4_Ending", 0);
				__LIB_0__::func_88(&(uParam0->f_206), 16384);
				__LIB_0__::func_88(&(uParam0->f_206), 524288);
			}
			else
			{
				__LIB_12__::func_676(&(uParam0->f_206), "PL1_Blendout_Ending");
				__LIB_13__::func_17(&(uParam0->f_206), "PL1_Blendout_Ending", 0);
			}
			__LIB_0__::func_7(&(uParam0->f_172), 16);
			break;
		case 3:
			StringCopy(&(uParam0->f_2575), "", 24);
			__LIB_0__::func_8(&(uParam0->f_172), 16);
			break;
	}
}

int func_302(var uParam0)
{
	if (__LIB_0__::func_393(Global_35, iLocal_115[3], 0, 1))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DYNAMIC_SCENARIO"), false);
	}
	return func_729(uParam0);
}

void func_308()
{
	POPULATION::_0xF45E46DEECF7DF6E(14816, 0, 0, -1, -1);
	PED::_0xAB0D553FE20A6E25(0f);
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
}

bool func_310(int iParam0)
{
	int iVar0;
	bool bVar1;
	iVar0 = __LIB_0__::func_895(Global_1347702[120 /*49*/].f_15);
	bVar1 = __LIB_0__::func_27(iVar0, iParam0);
	return bVar1;
}

bool func_311()
{
	vector3 vVar0;
	float fVar3;
	if (__LIB_0__::func_27(iLocal_131, 2))
	{
		return true;
	}
	vVar0 = { func_187(1) };
	fVar3 = func_209(1);
	if (!__LIB_0__::func_272(iLocal_67, 1))
	{
		iLocal_67 = func_734(7, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 178615350, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
	}
	if (__LIB_0__::func_272(iLocal_67, 1))
	{
		__LIB_13__::func_926(&iLocal_67, vVar0, fVar3);
		WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_67, true, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_67, 194, true);
		TASK::SET_PED_PATH_MAY_ENTER_WATER(iLocal_67, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_67, 297, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_67, 315, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_67, 130, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_67, 331, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_67, 330, true);
		TASK::_0xE8C296B75EACC357(iLocal_67, 0f);
		func_736(0);
		if (__LIB_5__::func_260(7, -2147483648))
		{
			__LIB_5__::func_414(7, -2147483648, 1);
		}
		func_342(0, 1);
		__LIB_1__::func_683(&iLocal_131, 2);
	}
	return false;
}

bool func_312(int iParam0, bool bParam1)
{
	vector3 vVar0;
	float fVar3;
	if (__LIB_0__::func_27(iLocal_131, 8))
	{
		if (!__LIB_0__::func_272(iLocal_69, 1))
		{
			__LIB_1__::func_681(&iLocal_131, 8);
		}
		else
		{
			return true;
		}
	}
	vVar0 = { func_187(3) };
	fVar3 = func_209(3);
	if (bParam1)
	{
		vVar0 = { Global_36 };
		vVar0 = { vVar0 + Vector(20f, 0f, 5f) };
		MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &(vVar0.f_2), false);
	}
	if (!__LIB_12__::func_637(&iLocal_69, vVar0, fVar3, 1, 0, 1, 1))
	{
	}
	else if (!__LIB_0__::func_255(iLocal_69, 0) && func_740(&iLocal_69, vVar0, fVar3, iParam0, 1))
	{
		PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), iLocal_69, 11, 0, 1);
		__LIB_1__::func_683(&iLocal_131, 8);
	}
	return false;
}

bool func_313(int iParam0)
{
	vector3 vVar0;
	float fVar3;
	if (__LIB_0__::func_27(iLocal_131, 16))
	{
		if (!__LIB_0__::func_272(iLocal_70, 1))
		{
			__LIB_1__::func_681(&iLocal_131, 16);
		}
		else
		{
			return true;
		}
	}
	vVar0 = { func_187(2) };
	fVar3 = func_209(2);
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_70))
	{
		iLocal_70 = func_741(&uLocal_432, 7, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0);
	}
	if (func_740(&iLocal_70, vVar0, fVar3, iParam0, 1))
	{
		func_742(7, iLocal_70, 0, 0);
		__LIB_1__::func_683(&iLocal_131, 16);
	}
	return false;
}

bool func_314(var uParam0, bool bParam1)
{
	bool bVar0;
	vector3 vVar1;
	float fVar4;
	bVar0 = false;
	if (__LIB_0__::func_27(iLocal_131, 1))
	{
		return true;
	}
	if (bParam1)
	{
		if (!func_743())
		{
			return false;
		}
		bVar0 = true;
	}
	else
	{
		vVar1 = { func_187(0) };
		fVar4 = func_209(0);
		if (!__LIB_0__::func_272(iLocal_66, 1))
		{
			iLocal_66 = func_734(17, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
		}
		if (__LIB_0__::func_272(iLocal_66, 1))
		{
			__LIB_13__::func_926(&iLocal_66, vVar1, fVar4);
			TASK::CLEAR_PED_TASKS(iLocal_66, true, false);
			TASK::TASK_LOOK_AT_ENTITY(iLocal_66, Global_35, -1, 0, 51, 0);
			TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(iLocal_66, vVar1, 2f, 0, false, false, false, false);
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		__LIB_12__::func_875(uParam0, iLocal_66, "PEARSON", 1);
		if (__LIB_5__::func_260(17, -2147483648))
		{
			__LIB_5__::func_414(17, -2147483648, 1);
		}
		TASK::CLEAR_PED_TASKS(iLocal_66, true, false);
		TASK::TASK_LOOK_AT_ENTITY(iLocal_66, Global_35, -1, 0, 51, 0);
		TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_66, func_187(0), 2f, 0, false, false, false, false);
		__LIB_1__::func_683(&iLocal_131, 1);
		return true;
	}
	return false;
}

bool func_315()
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	bool bVar9;
	vector3 vVar10;
	int iVar13;
	vVar0 = { -1347.651f, 2402.354f, 306.928f };
	vVar3 = { -1344.323f, 2405.955f, 306.8827f };
	vVar6 = { -1346.87f, 2401.2f, 306.53f };
	if (__LIB_0__::func_27(iLocal_131, 4))
	{
		return true;
	}
	bVar9 = true;
	vVar10 = { func_187(10) };
	iVar13 = 0;
	iVar13 = 0;
	while (iVar13 < 5)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_90[iVar13]))
		{
			iLocal_90[iVar13] = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_250[iVar13], vVar10, true, true, false, true);
			bVar9 = false;
		}
		vVar10.f_1 = (vVar10.y + 0.02f);
		iVar13++;
	}
	if (iLocal_85 == 0)
	{
		if (iLocal_99 == 0)
		{
			iLocal_99 = ENTITY::_0x6F3068258A499E52(iLocal_247, vVar3, 11);
		}
		if (ENTITY::_0x1FF441D7954F8709(iLocal_99))
		{
			iLocal_85 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(iLocal_99));
		}
		else
		{
			iLocal_85 = 0;
		}
		bVar9 = false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_85))
	{
		bVar9 = false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_84))
	{
		iLocal_84 = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_249, func_187(9), true, true, false, true);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_84, true);
		bVar9 = false;
	}
	if (iLocal_87 == 0)
	{
		if (iLocal_100 == 0)
		{
			iLocal_100 = ENTITY::_0x6F3068258A499E52(iLocal_256, vVar6, 11);
		}
		if (ENTITY::_0x1FF441D7954F8709(iLocal_100))
		{
			iLocal_87 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(iLocal_100));
		}
		else
		{
			iLocal_87 = 0;
		}
		bVar9 = false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_87))
	{
		bVar9 = false;
	}
	if (iLocal_88 == 0)
	{
		if (iLocal_101 == 0)
		{
			iLocal_101 = ENTITY::_0x6F3068258A499E52(iLocal_257, vVar0, 11);
		}
		if (ENTITY::_0x1FF441D7954F8709(iLocal_101))
		{
			iLocal_88 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(iLocal_101));
		}
		else
		{
			iLocal_88 = 0;
		}
		bVar9 = false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_88))
	{
		bVar9 = false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_96))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_96))
		{
			iLocal_96 = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_259, func_187(0), true, true, false, true);
		}
		bVar9 = false;
	}
	if (iLocal_89 == 0)
	{
		if (iLocal_102 == 0)
		{
			iLocal_102 = ENTITY::_0x6F3068258A499E52(iLocal_258, -1349.198f, 2400.941f, 306.9204f, 11);
		}
		if (ENTITY::_0x1FF441D7954F8709(iLocal_102))
		{
			iLocal_89 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(iLocal_102));
		}
		else
		{
			iLocal_89 = 0;
		}
		bVar9 = false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_89))
	{
		bVar9 = false;
	}
	if (bVar9)
	{
		__LIB_1__::func_683(&iLocal_131, 4);
	}
	return bVar9;
}

bool func_316(var uParam0, int iParam1)
{
	bool bVar0;
	bVar0 = true;
	if (iLocal_415 == iParam1)
	{
		return true;
	}
	if (!__LIB_12__::func_871(uParam0))
	{
		bVar0 = func_744();
	}
	switch (iParam1)
	{
		case 1:
			break;
		case 4:
			bVar0 = func_745();
			break;
	}
	if (bVar0)
	{
		iLocal_415 = iParam1;
	}
	return bVar0;
}

bool func_318(int iParam0)
{
	vector3 vVar0[1];
	float fVar4[1];
	char cVar6[16];
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	if (__LIB_0__::func_27(iLocal_131, 1048576))
	{
		return true;
	}
	if (__LIB_0__::func_27(iLocal_131, 2048))
	{
		return true;
	}
	vVar0[0 /*3*/] = { func_187(20) };
	fVar4[0] = func_209(20);
	iVar8 = 0;
	iVar9 = 0;
	iVar9 = 0;
	while (iVar9 < 1)
	{
		if (__LIB_0__::func_27(Local_640[iVar9 /*17*/].f_2, 1))
		{
			iVar8++;
		}
		else
		{
			if (!__LIB_0__::func_272(Local_640[iVar9 /*17*/], 1))
			{
				Local_640[iVar9 /*17*/] = __LIB_8__::func_931(iLocal_260, vVar0[iVar9 /*3*/], fVar4[iVar9], 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			}
			if (__LIB_0__::func_272(Local_640[iVar9 /*17*/], 1))
			{
				__LIB_13__::func_926(&(Local_640[iVar9 /*17*/]), vVar0[iVar9 /*3*/], fVar4[iVar9]);
				TASK::SET_PED_PATH_MAY_ENTER_WATER(Local_640[iVar9 /*17*/], true);
				PED::REQUEST_PED_VISIBILITY_TRACKING(Local_640[iVar9 /*17*/]);
				ENTITY::_0x1AD922AB5038DEF3(Local_640[iVar9 /*17*/]);
				PED::SET_PED_CAN_BE_TARGETTED(Local_640[iVar9 /*17*/], true);
				__LIB_8__::func_776(Local_640[iVar9 /*17*/], iParam0);
				PED::SET_PED_CONFIG_FLAG(Local_640[iVar9 /*17*/], 263, true);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_640[iVar9 /*17*/], 1);
				TASK::_0xE8C296B75EACC357(Local_640[iVar9 /*17*/], 0f);
				PED::SET_PED_CONFIG_FLAG(Local_640[iVar9 /*17*/], 265, false);
				PED::SET_PED_CONFIG_FLAG(Local_640[iVar9 /*17*/], 529, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_640[iVar9 /*17*/], true);
				StringCopy(&cVar6, "Bear: ", 16);
				StringIntConCat(&cVar6, iVar9, 16);
				PED::ADD_RELATIONSHIP_GROUP(&cVar6, &(Local_640[iVar9 /*17*/].f_8));
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_640[iVar9 /*17*/], Local_640[iVar9 /*17*/].f_8);
				PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), Local_640[iVar9 /*17*/], 30, 0, 1);
				PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), Local_640[iVar9 /*17*/], 35, 0, 1);
				PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), Local_640[iVar9 /*17*/], 34, 0, 1);
				PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(Local_640[iVar9 /*17*/], 2136742246);
				PED::SET_PED_NAME_DEBUG(Local_640[iVar9 /*17*/], &cVar6);
				fVar10 = (FLOCK::GET_SPECIES_TUNING_FLOAT_PARAM(joaat("SPECIES_BEAR"), 1, 91) * 0.6f);
				FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(Local_640[iVar9 /*17*/], 91, fVar10);
				fVar11 = (FLOCK::GET_SPECIES_TUNING_FLOAT_PARAM(joaat("SPECIES_BEAR"), 1, 87) * 0.6f);
				FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(Local_640[iVar9 /*17*/], 87, fVar11);
				fVar12 = (FLOCK::GET_SPECIES_TUNING_FLOAT_PARAM(joaat("SPECIES_BEAR"), 1, 88) * 0.6f);
				FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(Local_640[iVar9 /*17*/], 88, fVar12);
				fVar13 = (FLOCK::GET_SPECIES_TUNING_FLOAT_PARAM(joaat("SPECIES_BEAR"), 1, 86) * 0.6f);
				FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(Local_640[iVar9 /*17*/], 86, fVar13);
				FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(Local_640[iVar9 /*17*/], 112, 1000f);
				func_351(&(Local_640[iVar9 /*17*/]), 0, 0);
				__LIB_1__::func_683(&(Local_640[iVar9 /*17*/].f_2), 1);
				iVar8++;
			}
			else
			{
				iVar9++;
			}
			if (iVar8 >= 1)
			{
				__LIB_1__::func_683(&iLocal_131, 1048576);
			}
			return false;
		}
	}
}

bool func_319(bool bParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	if (__LIB_0__::func_27(iLocal_131, 32))
	{
		return true;
	}
	Local_459[0 /*45*/].f_10 = { func_187(11) };
	Local_459[1 /*45*/].f_10 = { func_187(12) };
	Local_459[2 /*45*/].f_10 = { func_187(13) };
	Local_459[3 /*45*/].f_10 = { func_187(14) };
	Local_459[0 /*45*/].f_13 = func_209(11);
	Local_459[1 /*45*/].f_13 = func_209(12);
	Local_459[2 /*45*/].f_13 = func_209(13);
	Local_459[3 /*45*/].f_13 = func_209(14);
	func_749();
	if (bParam0)
	{
		__LIB_1__::func_683(&iLocal_131, 65536);
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_246))
	{
		return false;
	}
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (__LIB_0__::func_27(Local_459[iVar1 /*45*/].f_2, 1))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Local_459[iVar1 /*45*/]))
			{
				__LIB_1__::func_681(&(Local_459[iVar1 /*45*/].f_2), 1);
			}
			else
			{
				iVar2++;
			}
			else
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_459[iVar1 /*45*/]))
				{
					Local_459[iVar1 /*45*/] = __LIB_8__::func_931(iLocal_246, Local_459[iVar1 /*45*/].f_10, Local_459[iVar1 /*45*/].f_13, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				}
				if (!__LIB_0__::func_272(Local_459[iVar1 /*45*/], 1))
				{
				}
				else
				{
					ENTITY::_0x9587913B9E772D29(Local_459[iVar1 /*45*/], 1);
					PED::SET_PED_CONFIG_FLAG(Local_459[iVar1 /*45*/], 186, false);
					PED::SET_PED_CONFIG_FLAG(Local_459[iVar1 /*45*/], 223, true);
					PED::SET_PED_CONFIG_FLAG(Local_459[iVar1 /*45*/], 38, true);
					ENTITY::_0x18FF3110CF47115D(Local_459[iVar1 /*45*/], 7, 1);
					ENTITY::_0x18FF3110CF47115D(Local_459[iVar1 /*45*/], 2, 1);
					ENTITY::_0x18FF3110CF47115D(Local_459[iVar1 /*45*/], 3, 1);
					ENTITY::_0x18FF3110CF47115D(Local_459[iVar1 /*45*/], 4, 1);
					ENTITY::_0x18FF3110CF47115D(Local_459[iVar1 /*45*/], 10, 0);
					PED::_0x6569F31A01B4C097(Local_459[iVar1 /*45*/], 4, 0);
					PED::SET_PED_CONFIG_FLAG(Local_459[iVar1 /*45*/], 402, true);
					PED::SET_PED_CONFIG_FLAG(Local_459[iVar1 /*45*/], 297, true);
					PED::_SET_PED_QUALITY(Local_459[iVar1 /*45*/], 2);
					if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_459[iVar1 /*45*/], true))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_459[iVar1 /*45*/], true, false);
					}
					PED::REQUEST_PED_VISIBILITY_TRACKING(Local_459[iVar1 /*45*/]);
					if (bParam0)
					{
						ENTITY::_0x1AD922AB5038DEF3(Local_459[iVar1 /*45*/]);
					}
					PED::SET_PED_CAN_BE_TARGETTED(Local_459[iVar1 /*45*/], true);
					PED::SET_PED_CONFIG_FLAG(Local_459[iVar1 /*45*/], 278, false);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_459[iVar1 /*45*/], 1);
					TASK::_0xE8C296B75EACC357(Local_459[iVar1 /*45*/], 0f);
					TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(Local_459[iVar1 /*45*/], true, 400f);
					PED::SET_PED_CONFIG_FLAG(Local_459[iVar1 /*45*/], 265, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_459[iVar1 /*45*/], true);
					__LIB_3__::func_459(Local_459[iVar1 /*45*/], 0);
					__LIB_1__::func_683(&(Local_459[iVar1 /*45*/].f_2), 4096);
					if (!PLAYER::_0x0E6846476906C9DD(PLAYER::GET_PLAYER_INDEX(), Local_459[iVar1 /*45*/]))
					{
						PLAYER::_0x543DFE14BE720027(PLAYER::GET_PLAYER_INDEX(), Local_459[iVar1 /*45*/], 0);
					}
					func_345(&(Local_459[iVar1 /*45*/]), 0, 1);
					if (iLocal_152 == -1)
					{
						iLocal_152 = PLAYER::_0x0139637A3BFF8B6D(Local_459[iVar1 /*45*/], &uVar0);
					}
					__LIB_1__::func_683(&(Local_459[iVar1 /*45*/].f_2), 1);
					iVar2++;
				}
				else
				{
					iVar1++;
				}
				if (iVar2 >= 4)
				{
					__LIB_1__::func_683(&iLocal_131, 32);
				}
				return false;
			}
		}
	}
}

void func_321(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_0__::func_895(Global_1347702[120 /*49*/].f_15);
	__LIB_1__::func_683(&iVar0, iParam0);
	__LIB_1__::func_532(Global_1347702[120 /*49*/].f_15, iVar0);
}

void func_322(int iParam0)
{
	iLocal_49 = __LIB_5__::func_297(Global_1347702[120 /*49*/].f_15);
	switch (iParam0)
	{
		case 0:
		case 1:
			func_755(1);
			func_755(6);
			func_755(5);
			func_755(4);
			func_755(3);
			func_755(2);
		case 2:
			func_755(7);
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			func_755(8);
		case 8:
			break;
	}
}

void func_323(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_0__::func_895(Global_1347702[120 /*49*/].f_15);
	__LIB_1__::func_681(&iVar0, iParam0);
	__LIB_1__::func_532(Global_1347702[120 /*49*/].f_15, iVar0);
}

void func_324(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 >= 32)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 >= 2)
	{
		return;
	}
	iVar2 = __LIB_0__::func_771(iVar0);
	__LIB_1__::func_336(&(uLocal_14[iVar1]), iVar2);
}

void func_325(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = joaat("WEAPON_BOW");
	iVar1 = 22;
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, false))
	{
		iVar2 = WEAPON::GET_AMMO_IN_PED_WEAPON(Global_35, iVar0);
		iVar3 = (iVar1 - iVar2);
		if (iVar3 > 0)
		{
			func_328(joaat("AMMO_ARROW"), iVar1, bParam0, 0, 0, 752097756, 0, 0, 0, 0);
		}
	}
	else
	{
		func_328(joaat("WEAPON_BOW"), 1, bParam0, 0, 1, 752097756, 0, 0, 0, 0);
		func_328(joaat("AMMO_ARROW"), iVar1, bParam0, 0, 0, 752097756, 0, 0, 0, 0);
	}
	if (bParam1)
	{
		__LIB_4__::func_677(joaat("WEAPON_BOW"));
	}
	else
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_BOW"), true, 7, false, false);
	}
}

void func_326()
{
	WEAPON::REMOVE_WEAPON_FROM_PED(Global_35, joaat("WEAPON_BOW"), true, -142743235);
	WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
	PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::PLAYER_ID(), joaat("WEAPON_UNARMED"), 0);
	PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::PLAYER_ID(), joaat("WEAPON_UNARMED"), 1);
}

bool func_328(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
				func_328(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (__LIB_0__::func_28() && __LIB_1__::func_155(4))
				{
					if (__LIB_0__::func_28() && (__LIB_1__::func_200(38) || __LIB_1__::func_154(38)))
					{
						__LIB_9__::func_355(38, __LIB_0__::func_354(iVar6), 0, 0, __LIB_1__::func_758(), 0, -1, 0);
						__LIB_0__::func_355(2);
					}
					else
					{
						__LIB_9__::func_355(38, __LIB_0__::func_354(iVar6), 0, 0, __LIB_1__::func_758(), 0, -1, 0);
						__LIB_0__::func_355(1);
					}
				}
			}
			else if (__LIB_0__::func_28() && __LIB_1__::func_155(4))
			{
				if (__LIB_0__::func_28() && (__LIB_1__::func_200(38) || __LIB_1__::func_154(38)))
				{
					__LIB_9__::func_355(38, 0, 0, 0, __LIB_1__::func_758(), 0, -1, 0);
					__LIB_0__::func_355(2);
				}
				else
				{
					__LIB_9__::func_355(38, 0, 0, 0, __LIB_1__::func_758(), 0, -1, 0);
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
			func_792(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -103750053))
		{
			__LIB_0__::func_15(func_793(joaat("CLAWS_COLLECTED")), iVar0);
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
			__LIB_13__::func_251(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1718133314))
		{
			__LIB_13__::func_252(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1738650224))
		{
			__LIB_13__::func_253(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, 949916894))
		{
			func_802(iParam0);
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
			__LIB_13__::func_255(iParam0, iParam1);
			__LIB_1__::func_759(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, -1697809989))
		{
			func_806(iParam0, 0, 0, 0);
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
						func_328(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_328(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_328(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_328(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_328(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_328(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_328(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
					func_328(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_328(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_328(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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

void func_331(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 >= 32)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 >= 5)
	{
		return;
	}
	iVar2 = __LIB_0__::func_771(iVar0);
	__LIB_1__::func_336(&(Local_50[iVar1]), iVar2);
}

void func_332(char* sParam0, int iParam1)
{
	__LIB_1__::func_683(&(sParam0->f_1), iParam1);
}

bool func_337()
{
	if (__LIB_0__::func_27(iLocal_132, 16))
	{
		return true;
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_140))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_140, true, false))
		{
			__LIB_1__::func_683(&iLocal_132, 16);
			return true;
		}
	}
	else
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_66))
		{
			return false;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_87))
		{
			return false;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_85))
		{
			return false;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_90[0]))
		{
			return false;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_90[4]))
		{
			return false;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_90[3]))
		{
			return false;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_90[1]))
		{
			return false;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_90[2]))
		{
			return false;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_88))
		{
			return false;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_89))
		{
			return false;
		}
		iLocal_140 = ANIMSCENE::_CREATE_ANIM_SCENE("script@rcm@PRSN@leadout@RSC1@leadout", 0, "pl_leadout", false, true);
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_140))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_140, "MrPearson", iLocal_66, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_140, "P_CHAIR06X", iLocal_87, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_140, "P_CLEAVER01X", iLocal_85, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_140, "P_CS_RABBITFEETLESS", iLocal_90[0], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_140, "P_CS_RABBITGUT", iLocal_90[4], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_140, "P_CS_RABBITHEADLESS", iLocal_90[3], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_140, "P_CS_RABBITMEAT01X", iLocal_90[1], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_140, "P_CS_RABBITMEAT02X", iLocal_90[2], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_140, "P_KETTLE03X", iLocal_88, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_140, "p_ladle02x", iLocal_89, 0);
			ANIMSCENE::LOAD_ANIM_SCENE(iLocal_140);
		}
	}
	return false;
}

void func_339(int iParam0, int iParam1)
{
	vector3 vVar0;
	vVar0 = { func_187(iParam1) + Vector(0.5f, 0f, 0f) };
	__LIB_1__::func_338(*iParam0, vVar0);
	ENTITY::SET_ENTITY_HEADING(*iParam0, func_209(iParam1));
}

void func_341(int iParam0, bool bParam1)
{
	int iVar0;
	var uVar1;
	if (iLocal_414 == iParam0 && !bParam1)
	{
		return;
	}
	if (((!__LIB_4__::func_68("PRS1_BC_LOADOUT_1", 1) && !__LIB_4__::func_68("PRS1_BC_LOADOUT_2", 1)) && !__LIB_4__::func_68("PRS1_BC_LOADOUT_3", 1)) && !__LIB_4__::func_68("PRS1_BC_LOADOUT_4", 1))
	{
		UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
	}
	if (iLocal_414 >= 3)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_140))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_140);
		}
	}
	__LIB_1__::func_681(&iLocal_131, 16384);
	switch (iLocal_414)
	{
		case 1:
			if (!PED::IS_PED_ON_MOUNT(iLocal_67))
			{
				func_342(2, 0);
			}
			__LIB_1__::func_721(7);
			break;
		case 2:
			func_843();
			__LIB_0__::func_745(7);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_239))
			{
				TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(sLocal_239, 0, 1065353216 /* Float: 1f */, 1056964608 /* Float: 0.5f */, 1);
				sLocal_239 = "";
			}
			break;
		case 3:
			func_843();
			__LIB_0__::func_745(7);
			__LIB_1__::func_721(7);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_239))
			{
				TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(sLocal_239, 0, 1065353216 /* Float: 1f */, 1056964608 /* Float: 0.5f */, 1);
				sLocal_239 = "";
			}
			break;
		case 4:
			__LIB_1__::func_721(7);
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			__LIB_1__::func_721(7);
			break;
		case 9:
			__LIB_0__::func_745(7);
			break;
		case 10:
			__LIB_0__::func_325(&iLocal_77);
			func_843();
			__LIB_0__::func_745(7);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_239))
			{
				TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(sLocal_239, 0, 1065353216 /* Float: 1f */, 1056964608 /* Float: 0.5f */, 1);
				sLocal_239 = "";
			}
			break;
		case 11:
			break;
		case 13:
			__LIB_0__::func_745(17);
			__LIB_5__::func_305(17);
			__LIB_1__::func_681(&iLocal_132, 2048);
			break;
		case 12:
			__LIB_0__::func_325(&iLocal_77);
			break;
		case 14:
			break;
		case 15:
			break;
		case 0:
			__LIB_0__::func_325(&iLocal_78);
			break;
	}
	iLocal_414 = iParam0;
	if (iLocal_414 != 0)
	{
		__LIB_0__::func_904(7, 1);
	}
	switch (iLocal_414)
	{
		case 1:
			__LIB_1__::func_718(7);
			__LIB_1__::func_643();
			if (!__LIB_0__::func_27(iLocal_131, 134217728))
			{
				PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), joaat("WEAPON_REVOLVER_CATTLEMAN"), 0);
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
				__LIB_1__::func_683(&iLocal_131, 134217728);
			}
			break;
		case 2:
			func_416();
			__LIB_0__::func_904(7, 1);
			__LIB_0__::func_900(7);
			break;
		case 3:
			func_342(4, 0);
			func_416();
			func_421(4, 0);
			__LIB_0__::func_904(7, 1);
			__LIB_0__::func_900(7);
			__LIB_11__::func_435();
			break;
		case 4:
			MAP::_0xD8C7162AB2E2AF45(1720279629);
			func_848();
			func_346(&iLocal_67, 1);
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			func_849();
			fLocal_159 = 1000f;
			break;
		case 8:
			iVar0 = func_850(&iLocal_67, &uVar1, 14);
			if (iVar0 != 4)
			{
				__LIB_1__::func_683(&(Local_459[iVar0 /*45*/].f_2), 64);
				iLocal_457 = iVar0;
			}
			func_849();
			break;
		case 9:
			__LIB_0__::func_900(7);
			break;
		case 10:
			func_416();
			func_421(4, 0);
			__LIB_0__::func_904(7, 1);
			__LIB_0__::func_900(7);
			func_849();
			__LIB_0__::func_326(16384);
			break;
		case 11:
			break;
		case 13:
			if (func_447())
			{
				if (__LIB_6__::func_903("RPRSN_HITCH"))
				{
					__LIB_6__::func_900("RPRSN_HITCH", 0, 0);
				}
				if (__LIB_6__::func_903("RPRSN_ARRIVE"))
				{
					__LIB_6__::func_900("RPRSN_ARRIVE", 0, 0);
				}
				if (__LIB_6__::func_903("RPRSN_POSTBEAR2"))
				{
					__LIB_6__::func_900("RPRSN_POSTBEAR2", 0, 0);
				}
				if (!func_410(&Local_50, 76))
				{
					func_433(76);
					func_331(76);
				}
				if (!func_410(&Local_50, 77))
				{
					func_433(77);
					func_331(77);
				}
				ANIMSCENE::START_ANIM_SCENE(iLocal_143);
			}
			__LIB_0__::func_326(16384);
			break;
		case 12:
			func_849();
			if (!MAP::DOES_BLIP_EXIST(iLocal_77))
			{
				iLocal_77 = MAP::_BLIP_ADD_FOR_RADIUS(408396114, func_187(3), 6f);
			}
			__LIB_0__::func_326(16384);
			break;
		case 14:
			func_849();
			__LIB_13__::func_72(9);
			__LIB_3__::func_459(Local_459[iLocal_455 /*45*/], 1);
			PED::_0x6569F31A01B4C097(Local_459[iLocal_455 /*45*/], 4, 1);
			PED::_0x6569F31A01B4C097(Local_459[iLocal_455 /*45*/], 5, 1);
			__LIB_1__::func_681(&(Local_459[iLocal_455 /*45*/].f_2), 32768);
			__LIB_1__::func_683(&(Local_459[iLocal_455 /*45*/].f_2), 65536);
			iLocal_149 = 0;
			func_407(8);
			break;
		case 15:
			break;
		case 0:
			break;
	}
}

void func_342(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	int iVar6;
	float fVar7;
	vector3 vVar8;
	if (iLocal_433 == iParam0 && !bParam1)
	{
		return;
	}
	if (!__LIB_0__::func_272(iLocal_67, 1))
	{
		return;
	}
	iLocal_433 = iParam0;
	switch (iLocal_433)
	{
		case 0:
			TASK::CLEAR_PED_TASKS(iLocal_67, true, false);
			break;
		case 1:
			TASK::CLEAR_PED_TASKS(iLocal_67, true, false);
			break;
		case 2:
			TASK::CLEAR_PED_TASKS(iLocal_67, true, false);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_LOOK_AT_ENTITY(0, iLocal_70, -1, 0, 51, 0);
			TASK::TASK_MOUNT_ANIMAL(0, iLocal_70, 20000, -1, 1f, 1, 0, 0);
			TASK::TASK_LOOK_AT_ENTITY(0, Global_35, 10000, 0, 51, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_67, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			break;
		case 3:
			func_736(1);
			if (!bLocal_203)
			{
				TASK::CLEAR_PED_TASKS(iLocal_67, true, false);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, sLocal_229, 0, 26126, -1, 0, 0, -1);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_67, iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			}
			else
			{
				TASK::CLEAR_PED_TASKS(iLocal_67, true, false);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, cLocal_230, 0, 26126, -1, 0, 0, -1);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_67, iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			}
			break;
		case 4:
			TASK::CLEAR_PED_TASKS(iLocal_67, true, false);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, sLocal_231, 0, 26126, -1, 0, 0, -1);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_67, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			break;
		case 5:
			func_736(0);
			TASK::CLEAR_PED_TASKS(iLocal_67, true, false);
			TASK::TASK_LOOK_AT_COORD(iLocal_67, -1405.771f, 1388.75f, 219.5651f, 5000, 0, 51, 0);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_67, func_420(3, "CHARLES", "PL_IG2_Inspect_Tracks_Dismount"), 1.25f, -1, 3f, 0, func_851(3, "CHARLES", "PL_IG2_Inspect_Tracks_Dismount"));
			break;
		case 6:
			func_852();
			func_853(3, "PL_IG2_Inspect_Tracks_Dismount", 1);
			break;
		case 7:
			func_853(3, "PL_IG2_Inspect_Idle", 1);
			break;
		case 8:
			func_853(3, "PL_IG2_Inspect_Tracks", 1);
			break;
		case 9:
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_67, Global_35, -1, -1f, -1f, -1f);
			__LIB_2__::func_259(&uLocal_349);
			break;
		case 10:
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_67, sLocal_237, "idle_a", 1))
			{
				TASK::TASK_PLAY_ANIM(iLocal_67, sLocal_238, "exit_front", 8f, -8f, -1, 0, 0f, false, 0, false, 0, false);
			}
			else
			{
				TASK::CLEAR_PED_TASKS(iLocal_67, false, false);
			}
			break;
		case 11:
			func_854(&iLocal_67);
			if (iLocal_457 != 4)
			{
				iVar6 = iLocal_457;
				vVar3 = { ENTITY::GET_ENTITY_COORDS(Local_459[iVar6 /*45*/], false, false) };
			}
			else
			{
				iVar6 = func_850(&iLocal_67, &vVar3, 30);
			}
			if (iVar6 != 4)
			{
				iLocal_456 = iVar6;
				if (bLocal_181)
				{
					__LIB_1__::func_683(&(Local_459[iVar6 /*45*/].f_2), 64);
				}
				TASK::CLEAR_PED_TASKS(iLocal_67, true, false);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				if (__LIB_0__::func_266(iLocal_67, vVar3, 15f, 1, 1))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar3, 1f, 180000, 2f, 0, 40000f);
				}
				else if (__LIB_0__::func_266(iLocal_67, vVar3, 40f, 1, 1))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar3, 1.5f, 180000, 2f, 0, 40000f);
				}
				else
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar3, 2f, 180000, 2f, 0, 40000f);
				}
				if (PED::IS_PED_ON_MOUNT(iLocal_67))
				{
					TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
				}
				TASK::TASK_PICKUP_CARRIABLE_ENTITY(0, Local_459[iVar6 /*45*/]);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_67, iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				if (bLocal_181)
				{
					if (bLocal_196)
					{
						func_331(49);
						func_411(52, 0);
					}
					else
					{
						func_411(49, 0);
					}
				}
				else if (iLocal_456 != 4)
				{
					if (!__LIB_0__::func_48(iLocal_67, Local_459[iLocal_456 /*45*/], 15f, 0) && __LIB_0__::func_48(iLocal_67, Global_35, 10f, 1))
					{
						func_411(52, 0);
					}
				}
			}
			break;
		case 12:
			func_854(&iLocal_67);
			PED::_SET_PED_CROUCH_MOVEMENT(iLocal_67, false, 0, false);
			func_855();
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_LOOK_AT_ENTITY(0, iLocal_70, -1, 0, 51, 0);
			if (!__LIB_0__::func_48(iLocal_67, iLocal_70, 15f, 1) && iLocal_414 == 9)
			{
				fVar7 = 1.5f;
			}
			else
			{
				fVar7 = 1.5f;
			}
			TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(0, iLocal_70, 0f, 0f, 0f, fVar7, 180000, (10f * 0.25f), 1, 1, 1, 0, 1);
			TASK::TASK_STAND_STILL(0, -1);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_67, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			break;
		case 13:
			func_854(&iLocal_67);
			TASK::_0xFF745B0346E19E2C(joaat("DEAD_CARRIABLE_DEER"));
			iVar2 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(iLocal_67);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_GOTO_ENTITY_OFFSET(0, iLocal_70, 20000, 0.5f, 0f, 1f, 132);
			if (iVar2 != 0)
			{
				TASK::TASK_PLACE_CARRIED_ENTITY_ON_MOUNT(0, iVar2, iLocal_70, 1f);
			}
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_67, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			__LIB_2__::func_259(&uLocal_265);
			break;
		case 14:
			func_854(&iLocal_67);
			iVar2 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(iLocal_70);
			if (iVar2 == 0)
			{
				if (iLocal_457 < 4)
				{
					TASK::CLEAR_PED_TASKS(Local_459[iLocal_457 /*45*/], true, false);
					TASK::TASK_CARRIABLE(Local_459[iLocal_457 /*45*/], joaat("DEAD_CARRIABLE_DEER"), iLocal_70, 0, 0);
				}
			}
			TASK::CLEAR_PED_TASKS(iLocal_67, true, false);
			TASK::TASK_MOUNT_ANIMAL(iLocal_67, iLocal_70, 20000, -1, 2f, 1, 0, 0);
			break;
		case 15:
			func_455(1);
			TASK::TASK_CLEAR_LOOK_AT(iLocal_67);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			if (!PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iLocal_67, true) && !__LIB_0__::func_163(iLocal_67, 1868526510))
			{
				TASK::TASK_MOUNT_ANIMAL(0, iLocal_70, 20000, -1, 2f, 1, 0, 0);
			}
			if (!bLocal_228 && !__LIB_0__::func_266(iLocal_67, -1352.256f, 1344.582f, 208.0158f, 50f, 1, 1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_70))
				{
					TASK::_0xE8C296B75EACC357(iLocal_70, 0f);
				}
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1352.256f, 1344.582f, 208.0158f, 1.75f, 300000, 0.25f, 3145732, 40000f);
			}
			TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, sLocal_232, 0, 26126, -1, 0, 0, -1);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::CLEAR_PED_TASKS(iLocal_67, true, false);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_67, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			break;
		case 16:
			func_455(0);
			if (func_857() == 17)
			{
				vVar8 = { func_187(17) };
				__LIB_1__::func_683(&iLocal_132, 65536);
			}
			else
			{
				vVar8 = { func_187(18) };
				__LIB_1__::func_681(&iLocal_132, 65536);
			}
			iVar1 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(vVar8, joaat("PROP_HITCHINGPOST"), 2f, 0, false);
			TASK::CLEAR_PED_TASKS(iLocal_67, true, false);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			if (iVar1 == 0)
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar8, 1f, 180000, 3f, 0, 40000f);
				TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
			}
			else
			{
				__LIB_1__::func_683(&iLocal_133, 2);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, TASK::_GET_SCENARIO_POINT_COORDS(iVar1, true), 1f, 180000, 6f, 0, 40000f);
				TASK::TASK_HITCH_ANIMAL(0, iVar1, 0);
			}
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_67, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			break;
		case 17:
			TASK::CLEAR_PED_TASKS(iLocal_67, true, false);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			if (PED::IS_PED_ON_MOUNT(iLocal_67))
			{
				TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
			}
			TASK::TASK_PICKUP_CARRIABLE_ENTITY(0, PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(iLocal_70));
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_187(19), 1f, 180000, 0.25f, 0, func_209(19));
			TASK::TASK_LOOK_AT_ENTITY(0, Global_35, -1, 0, 51, 0);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_67, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			break;
		case 18:
			TASK::CLEAR_PED_TASKS(iLocal_67, true, false);
			break;
		case 19:
			bLocal_199 = false;
			func_843();
			__LIB_1__::func_480(&(Local_640[0 /*17*/]));
			PED::SET_PED_CONFIG_FLAG(Local_640[0 /*17*/], 301, false);
			__LIB_2__::func_480(&Local_816, 1, 1, 1, 0);
			vLocal_834.f_2 = 0;
			if (__LIB_0__::func_266(iLocal_67, -1790.747f, 1807.915f, 239.9536f, 15f, 1, 1) || __LIB_0__::func_266(iLocal_67, -1785.805f, 1801.597f, 239.1066f, 20f, 1, 1))
			{
				TASK::CLEAR_PED_TASKS(iLocal_67, true, false);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1790.747f, 1807.915f, 239.9536f, 2f, -1, 6f, 0, 40000f);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, MISC::GET_RANDOM_INT_IN_RANGE(4000, 6000), -1f, -1f, -1f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1785.805f, 1801.597f, 239.1066f, 2f, -1, 6f, 0, 40000f);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, MISC::GET_RANDOM_INT_IN_RANGE(4000, 6000), -1f, -1f, -1f);
				TASK::SET_SEQUENCE_TO_REPEAT(iVar0, true);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_67, iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			}
			else
			{
				TASK::CLEAR_PED_TASKS(iLocal_67, true, false);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_67, Global_35, -1, -1f, -1f, -1f);
			}
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_142))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_142);
			}
			break;
		case 20:
			break;
	}
}

void func_343(bool bParam0)
{
	int iVar0;
	if (__LIB_0__::func_27(iLocal_131, 65536) == bParam0)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (bParam0)
		{
			__LIB_1__::func_683(&iLocal_131, 65536);
			ENTITY::_0x1AD922AB5038DEF3(Local_459[iVar0 /*45*/]);
		}
		else
		{
			__LIB_1__::func_681(&iLocal_131, 65536);
			ENTITY::_0x5826EFD6D73C4DE5(Local_459[iVar0 /*45*/]);
		}
		iVar0++;
	}
}

void func_345(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	vector3 vVar1;
	if (uParam0->f_14 == iParam1 && !bParam2)
	{
		return;
	}
	if (uParam0->f_14 == 4)
	{
		return;
	}
	if (!__LIB_0__::func_272(*uParam0, 0))
	{
		iParam1 = 4;
	}
	uParam0->f_14 = iParam1;
	switch (uParam0->f_14)
	{
		case 0:
			func_860(uParam0, 1f);
			break;
		case 1:
			uParam0->f_6++;
			if (uParam0->f_6 >= uParam0->f_15.f_5)
			{
				uParam0->f_6 = 0;
				if (iLocal_134 >= 2)
				{
					func_345(uParam0, 2, 0);
				}
				else
				{
					FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(*uParam0, 48, false);
					__LIB_2__::func_357(*uParam0, Global_36, 2, 1, 1);
					vVar1 = { __LIB_14__::func_86(uParam0->f_15[uParam0->f_6], 0) };
					vVar1.f_2 = (vVar1.z + 30f);
					MISC::GET_GROUND_Z_FOR_3D_COORD(vVar1, &(vVar1.f_2), false);
					TASK::CLEAR_PED_TASKS(*uParam0, true, false);
					if (!__LIB_0__::func_27(uParam0->f_2, 2048))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*uParam0, vVar1, 2f, -1, 10f, 0, 40000f);
					}
					else
					{
						TASK::_TASK_FLEE_FROM_PED(*uParam0, Global_35, vVar1, 20f, 10000, 1024, 2f, 0);
					}
					Jump @684; //curOff = 303
					__LIB_1__::func_681(&(uParam0->f_2), 2048);
					__LIB_1__::func_561(&(uParam0->f_30));
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
					__LIB_2__::func_357(*uParam0, Global_36, 2, 1, 1);
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					if (!bLocal_195 && *uParam0 == Local_459[1 /*45*/])
					{
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_459[1 /*45*/], func_187(12), func_209(12), true, false, true);
						__LIB_1__::func_473(0, joaat("WORLD_ANIMAL_DEER_GRAZING"), MISC::GET_RANDOM_INT_IN_RANGE(10000, 15000), 1, 0, -1082130432 /* Float: -1f */);
						TASK::TASK_PAUSE(0, MISC::GET_RANDOM_INT_IN_RANGE(5000, 9000));
						TASK::SET_SEQUENCE_TO_REPEAT(iVar0, true);
						bLocal_195 = true;
					}
					else
					{
						TASK::TASK_ANIMAL_UNALERTED(0, MISC::GET_RANDOM_INT_IN_RANGE(10000, 15000), uParam0->f_15[uParam0->f_6], 0, 0);
						__LIB_1__::func_473(0, joaat("WORLD_ANIMAL_DEER_GRAZING"), MISC::GET_RANDOM_INT_IN_RANGE(6000, 10000), 1, 0, -1082130432 /* Float: -1f */);
						TASK::SET_SEQUENCE_TO_REPEAT(iVar0, true);
					}
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE(*uParam0, iVar0);
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					Jump @684; //curOff = 537
					FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(*uParam0, 48, false);
					__LIB_2__::func_357(*uParam0, Global_36, 2, 1, 1);
					TASK::TASK_SMART_FLEE_PED(*uParam0, Global_35, 1000f, -1, 0, 1077936128 /* Float: 3f */, 0);
					Jump @684; //curOff = 588
					if (__LIB_0__::func_27(uParam0->f_2, 33554432))
					{
						if (__LIB_0__::func_899(&uLocal_295))
						{
							__LIB_1__::func_561(&uLocal_295);
						}
						__LIB_1__::func_681(&(uParam0->f_2), 33554432);
					}
					if (!bLocal_223)
					{
						if (iLocal_134 > 0)
						{
							if (PED::GET_PED_CAUSE_OF_DEATH(*uParam0) != joaat("WEAPON_BOW"))
							{
								bLocal_223 = true;
							}
						}
					}
					iLocal_134++;
					__LIB_2__::func_259(&(uParam0->f_21));
				}
			}
			default:
				break;
	}
}

void func_346(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
	if (PED::IS_PED_GROUP_MEMBER(*iParam0, iVar0, 0))
	{
		return;
	}
	if (PED::IS_PED_IN_GROUP(*iParam0))
	{
		if (bParam1)
		{
			PED::REMOVE_PED_FROM_GROUP(*iParam0);
		}
		else
		{
			return;
		}
	}
	TASK::_0xE8C296B75EACC357(*iParam0, 0f);
	PED::SET_PED_CONFIG_FLAG(*iParam0, 279, true);
	PED::SET_PED_AS_GROUP_MEMBER(*iParam0, iVar0);
	PED::SET_GROUP_FORMATION(iVar0, 4);
	PED::SET_GROUP_FORMATION_SPACING(iVar0, 5f, -1f, -1f);
}

void func_348(int iParam0)
{
	if (!func_408(iParam0))
	{
		func_864(&iLocal_49, iParam0);
		__LIB_7__::func_448(Global_1347702[120 /*49*/].f_15, iLocal_49);
	}
}

void func_349()
{
	if (!func_406(0))
	{
		func_324(0);
		PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "Stealth", 1f, -1);
		PED::_SET_PED_BLACKBOARD_FLOAT(iLocal_67, "Stealth", 1f, -1);
	}
}

void func_351(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	vector3 vVar1;
	var uVar4[1];
	var uVar6[1];
	if (uParam0->f_7 == iParam1 && !bParam2)
	{
		return;
	}
	if (uParam0->f_7 == 8)
	{
		return;
	}
	if (!__LIB_0__::func_272(*uParam0, 0))
	{
		iParam1 = 8;
	}
	uParam0->f_7 = iParam1;
	uVar4[0] = Global_35;
	uVar6[0] = *uParam0;
	if (iParam1 != 0)
	{
		if (ENTITY::_IS_ENTITY_FROZEN(*uParam0))
		{
			ENTITY::FREEZE_ENTITY_POSITION(*uParam0, false);
		}
	}
	if (!__LIB_0__::func_27(uParam0->f_2, 2097152))
	{
		if (iParam1 != 8 && iParam1 != 0)
		{
			if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_1))
			{
				uParam0->f_1 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1859.896f, 1827.361f, 235.4249f, 0f, 0f, 52.05752f, 10.53341f, 12.27164f, 4.867798f, "Bear Defensive");
			}
			PED::_0x34EDDD59364AD74A(Global_35, &uVar6);
			PED::_0x34EDDD59364AD74A(*uParam0, &uVar4);
			__LIB_1__::func_683(&(uParam0->f_2), 2097152);
		}
	}
	switch (uParam0->f_7)
	{
		case 0:
			if (!ENTITY::_IS_ENTITY_FROZEN(*uParam0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(*uParam0, true);
			}
			break;
		case 1:
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(*uParam0, uParam0->f_3, uParam0->f_6, true, false, true);
			func_351(uParam0, 2, 0);
			break;
		case 2:
			if (!PLAYER::_0x0E6846476906C9DD(PLAYER::GET_PLAYER_INDEX(), *uParam0))
			{
				PLAYER::_0x543DFE14BE720027(PLAYER::GET_PLAYER_INDEX(), *uParam0, 0);
			}
			TASK::CLEAR_PED_TASKS(*uParam0, true, false);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			__LIB_1__::func_473(0, joaat("WORLD_ANIMAL_BEAR_SNIFFING_GROUND"), MISC::GET_RANDOM_INT_IN_RANGE(30000, 60000), 1, 0, -1082130432 /* Float: -1f */);
			__LIB_1__::func_473(0, joaat("WORLD_ANIMAL_BEAR_FORAGING_GROUND"), MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000), 1, 0, -1082130432 /* Float: -1f */);
			TASK::SET_SEQUENCE_TO_REPEAT(iVar0, true);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(*uParam0, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(*uParam0, 48, true);
			break;
		case 3:
			TASK::CLEAR_PED_TASKS(*uParam0, true, false);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			vVar1 = { __LIB_8__::func_212(uParam0->f_1, 100, 0, 1) };
			if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar1 + Vector(20f, 0f, 0f), &(vVar1.f_2), true))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar1, 1f, -1, 0.25f, 0, 40000f);
			}
			__LIB_1__::func_473(0, joaat("WORLD_ANIMAL_BEAR_SNIFFING_GROUND"), MISC::GET_RANDOM_INT_IN_RANGE(30000, 60000), 1, 0, -1082130432 /* Float: -1f */);
			__LIB_1__::func_473(0, joaat("WORLD_ANIMAL_BEAR_FORAGING_GROUND"), MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000), 1, 0, -1082130432 /* Float: -1f */);
			vVar1 = { __LIB_8__::func_212(uParam0->f_1, 100, 0, 1) };
			if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar1 + Vector(20f, 0f, 0f), &(vVar1.f_2), true))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar1, 1f, -1, 0.25f, 0, 40000f);
			}
			__LIB_1__::func_473(0, joaat("WORLD_ANIMAL_BEAR_SNIFFING_GROUND"), MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000), 1, 0, -1082130432 /* Float: -1f */);
			__LIB_1__::func_473(0, joaat("WORLD_ANIMAL_BEAR_RESTING"), MISC::GET_RANDOM_INT_IN_RANGE(100000, 120000), 1, 0, -1082130432 /* Float: -1f */);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(*uParam0, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(*uParam0, 48, true);
			break;
		case 6:
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam0, joaat("REL_PLAYER_ENEMY"));
			PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 5, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 46, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 50, true);
			PED::SET_PED_FLEE_ATTRIBUTES(*uParam0, 512, true);
			TASK::TASK_COMBAT_PED(*uParam0, Global_35, 0, 0);
			if (!MAP::DOES_BLIP_EXIST(uParam0->f_16))
			{
				uParam0->f_16 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), *uParam0);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_16, "PRS1_B_BEAR");
			}
			func_321(2);
			__LIB_1__::func_683(&(uParam0->f_2), 16384);
			__LIB_2__::func_259(&(uParam0->f_10));
			break;
		case 7:
			TASK::SET_PED_PATH_MAY_ENTER_WATER(*uParam0, true);
			TASK::_0x9DE63896B176EA94(*uParam0, 1);
			PED::_0x2D976DBDC731DF80(*uParam0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
			TASK::CLEAR_PED_TASKS(*uParam0, true, false);
			ENTITY::SET_ENTITY_INVINCIBLE(*uParam0, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 5, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 46, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 50, false);
			PED::SET_PED_FLEE_ATTRIBUTES(*uParam0, 512, false);
			TASK::_TASK_FLEE_FROM_PED(*uParam0, Global_35, -1981.028f, 2005.308f, 272.3208f, 300f, -1, 1024, 1077936128 /* Float: 3f */, 0);
			break;
		case 4:
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(*uParam0, func_187(20), func_209(20), false, true);
			ENTITY::_0x9587913B9E772D29(*uParam0, 1);
			__LIB_1__::func_473(*uParam0, joaat("WORLD_ANIMAL_BEAR_SNIFFING_GROUND"), MISC::GET_RANDOM_INT_IN_RANGE(30000, 60000), 1, 0, -1082130432 /* Float: -1f */);
			break;
		case 5:
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1848.015f, 1824.995f, 236.4257f, 1f, -1, 0.25f, 1, 40000f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1844.8f, 1854.86f, 242.84f, 1f, -1, 0.25f, 0, 40000f);
			TASK::TASK_TURN_PED_TO_FACE_COORD(0, -1855.42f, 1859.42f, 243.69f, 0);
			TASK::TASK_ANIMAL_UNALERTED(0, 20000, 0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(*uParam0, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			break;
		case 8:
			break;
		case 9:
			break;
	}
}

void func_354()
{
	if (!MAP::DOES_BLIP_EXIST(iLocal_82))
	{
		iLocal_82 = MAP::_BLIP_ADD_FOR_COORD(joaat("BLIP_STYLE_SHOP"), -1346.945f, 2404.725f, 306.0672f);
		MAP::SET_BLIP_SPRITE(iLocal_82, joaat("BLIP_SHOP_BUTCHER"), true);
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_82, "PRS1_C_PEARSON");
		MAP::_BLIP_SET_MODIFIER(iLocal_82, 847579139);
	}
}

bool func_356(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	if (!func_868(uParam0))
	{
		iVar0 = 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_86))
	{
		iLocal_86 = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_248, func_187(8), true, true, false, true);
		iVar0 = 0;
	}
	iVar1 = 0;
	while (iVar1 < 5)
	{
		__LIB_1__::func_951(&(iLocal_90[iVar1]));
		iVar1++;
	}
	__LIB_1__::func_951(&iLocal_96);
	return iVar0;
}

int func_371(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
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
			func_893(uParam4);
			if (__LIB_12__::func_688(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_341);
			}
			__LIB_12__::func_800(uParam5);
			if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_348) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam4->f_348, false)) && (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_348) || __LIB_0__::func_84(uParam4, 512)))
			{
				if (!__LIB_0__::func_84(uParam4, 1024) && __LIB_13__::func_14(uParam4, 1))
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

void func_375(int iParam0, int iParam1, vector3 vParam2, float fParam5, float fParam6)
{
	int iVar0;
	if (__LIB_0__::func_86(vParam2))
	{
		return;
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam1, true);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vParam2, fParam6, -1, 0.5f, 2097152, 40000f);
	TASK::CLOSE_SEQUENCE_TASK(iVar0);
	TASK::TASK_PERFORM_SEQUENCE(iParam1, iVar0);
	TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	PED::SET_PED_KEEP_TASK(iParam1, true);
	__LIB_9__::func_203(iParam0, 1, 0, 0, fParam5, 1, 1, 0, 0, 0, 0);
}

void func_376()
{
	MISC::_0xB1F6665AA54DCD5C(joaat("PROVISION_DEER_HIDE"));
	MISC::_0xB1F6665AA54DCD5C(joaat("PROVISION_DEER_HIDE_POOR"));
	MISC::_0xB1F6665AA54DCD5C(joaat("PROVISION_DEER_HIDE_PRISTINE"));
	MISC::_0xB1F6665AA54DCD5C(joaat("PROVISION_MATURE_VENISON"));
}

bool func_377()
{
	if (__LIB_0__::func_27(iLocal_132, 4194304))
	{
		return true;
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(vLocal_695[11 /*3*/]))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(vLocal_695[11 /*3*/], true, false))
		{
			__LIB_1__::func_683(&iLocal_132, 4194304);
			return true;
		}
	}
	else
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_459[iLocal_455 /*45*/]))
		{
			return false;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_459[iLocal_457 /*45*/]))
		{
			return false;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_97))
		{
			return false;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_98))
		{
			return false;
		}
		vLocal_695[11 /*3*/] = ANIMSCENE::_CREATE_ANIM_SCENE(func_906(11), 0, "pl_leadout", false, true);
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(vLocal_695[11 /*3*/]))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(vLocal_695[11 /*3*/], "Deer_01", Local_459[iLocal_455 /*45*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(vLocal_695[11 /*3*/], "Deer_01^1", Local_459[iLocal_457 /*45*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(vLocal_695[11 /*3*/], "p_cs_meatHanger01x^1", iLocal_97, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(vLocal_695[11 /*3*/], "p_cs_meatHanger01x", iLocal_98, 0);
			ANIMSCENE::LOAD_ANIM_SCENE(vLocal_695[11 /*3*/]);
		}
	}
	return false;
}

bool func_378(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
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
					__LIB_12__::func_965(uParam0, iParam5);
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
				__LIB_12__::func_965(uParam0, iParam5);
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
						__LIB_12__::func_965(uParam0, iParam5);
						return true;
					}
				}
			}
			break;
		case 9:
			if (__LIB_12__::func_979(uParam0, iParam5))
			{
				__LIB_12__::func_965(uParam0, iParam5);
				__LIB_0__::func_115(uParam0, 10);
				return true;
			}
			break;
		case 10:
			return true;
	}
	return false;
}

void func_380(var uParam0)
{
	int iVar0;
	if (!func_939())
	{
		return;
	}
	func_940();
	func_941();
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		func_942(uParam0, &(Local_640[iVar0 /*17*/]));
		iVar0++;
	}
}

void func_381()
{
	int iVar0;
	bool bVar1;
	iVar0 = 0;
	bVar1 = false;
	MAP::ALLOW_SONAR_BLIPS(true);
	MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
	if (__LIB_0__::func_0())
	{
		func_944();
	}
	else
	{
		iLocal_137 = 4;
		__LIB_1__::func_681(&iLocal_131, 131072);
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		__LIB_1__::func_681(&(Local_459[iVar0 /*45*/].f_2), 4194304);
		func_945(&(Local_459[iVar0 /*45*/]));
		if (iLocal_414 < 6)
		{
			if (!__LIB_0__::func_27(Local_459[iVar0 /*45*/].f_2, 268435456))
			{
				__LIB_2__::func_279(Local_459[iVar0 /*45*/], 1);
				if (!ENTITY::IS_ENTITY_DEAD(Local_459[iVar0 /*45*/]))
				{
					PED::SET_PED_CONFIG_FLAG(Local_459[iVar0 /*45*/], 263, false);
					PED::SET_PED_CONFIG_FLAG(Local_459[iVar0 /*45*/], 138, true);
				}
				__LIB_1__::func_683(&(Local_459[iVar0 /*45*/].f_2), 268435456);
			}
		}
		else if (__LIB_0__::func_27(Local_459[iVar0 /*45*/].f_2, 268435456))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_459[iVar0 /*45*/]))
			{
				PED::SET_PED_CONFIG_FLAG(Local_459[iVar0 /*45*/], 263, false);
				PED::SET_PED_CONFIG_FLAG(Local_459[iVar0 /*45*/], 138, false);
			}
			__LIB_1__::func_681(&(Local_459[iVar0 /*45*/].f_2), 268435456);
		}
		if (__LIB_0__::func_27(Local_459[iVar0 /*45*/].f_2, 4194304))
		{
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		if (!__LIB_0__::func_899(&uLocal_286))
		{
			__LIB_2__::func_259(&uLocal_286);
		}
		if (__LIB_9__::func_178(&uLocal_286) > 1f)
		{
			__LIB_1__::func_683(&iLocal_131, 4096);
		}
	}
	else if (__LIB_0__::func_899(&uLocal_286))
	{
		__LIB_1__::func_561(&uLocal_286);
	}
	if (__LIB_0__::func_27(iLocal_131, 128))
	{
		if (__LIB_9__::func_178(&uLocal_319) > 10f)
		{
			__LIB_1__::func_681(&iLocal_131, 128);
		}
	}
	if (iLocal_136 != iLocal_134)
	{
		iLocal_136 = iLocal_134;
		__LIB_1__::func_683(&iLocal_131, 128);
		__LIB_2__::func_259(&uLocal_319);
	}
}

void func_382()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_459[iVar0 /*45*/]))
		{
		}
		else if (!TASK::_0x0CCFE72B43C9CF96(Local_459[iVar0 /*45*/]))
		{
		}
		else
		{
			iVar1 = PED::_GET_CARRIER_AS_PED(Local_459[iVar0 /*45*/]);
			if (iVar1 == iLocal_69 || iVar1 == Global_35)
			{
				if (iLocal_455 != iVar0)
				{
					iLocal_455 = iVar0;
				}
			}
			else if (iVar1 == iLocal_70 || iVar1 == iLocal_67)
			{
				if (iLocal_457 != iVar0)
				{
					iLocal_457 = iVar0;
				}
			}
		}
		iVar0++;
	}
}

void func_383(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	bool bVar5;
	float fVar6;
	bool bVar7;
	float fVar8;
	iVar0 = 0;
	bVar5 = false;
	fVar6 = 45f;
	bVar7 = false;
	fVar8 = 1f;
	if (Local_50.f_12 != 83)
	{
		sVar3 = func_443(Local_50.f_12);
		if (Local_50.f_13)
		{
			__LIB_5__::func_20(0, 0);
			Local_50.f_13 = 0;
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar3) || !__LIB_6__::func_903(sVar3))
		{
			Local_50.f_12 = 83;
		}
		return;
	}
	if (Local_50.f_13)
	{
		Local_50.f_13 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 83)
	{
		iVar1 = iVar0;
		if (func_431(iVar1))
		{
			iVar4 = iParam1;
			switch (iVar1)
			{
				case 80:
					iVar4 = iParam2;
					break;
				case 2:
				case 3:
					bVar5 = true;
					break;
				case 56:
				case 57:
					fVar6 = 30f;
					break;
				case 37:
					fVar6 = 20f;
					bVar5 = true;
					break;
				case 31:
					bVar7 = true;
					fVar8 = 1f;
					break;
				case 33:
					bVar7 = true;
					fVar8 = 1f;
					break;
				case 32:
					bVar7 = true;
					fVar8 = 1f;
					break;
				case 25:
				case 27:
				case 34:
				case 35:
				case 38:
					bVar7 = true;
					fVar8 = 1.5f;
					break;
				case 18:
					bVar7 = true;
					fVar8 = 1f;
					break;
				case 50:
				case 51:
					bVar7 = true;
					fVar8 = 1.75f;
					break;
				case 52:
					bVar7 = true;
					fVar8 = 1f;
					break;
				case 47:
				case 48:
					bVar7 = true;
					fVar8 = 1.5f;
					break;
			}
			iVar2 = func_948(uParam0, &Local_50, iVar0, &iVar4, 0, fVar6, bVar5, bVar7, fVar8);
			if (iVar2 == 1)
			{
				Local_50.f_12 = iVar1;
			}
			if (iVar2 == 4)
			{
				func_331(iVar1);
			}
			func_949(iVar2, iVar1);
		}
		else
		{
			iVar0++;
		}
	}
}

void func_384()
{
	if (__LIB_0__::func_27(iLocal_131, 32768))
	{
		return;
	}
	if (!__LIB_0__::func_27(iLocal_131, 32))
	{
		return;
	}
	if (!__LIB_0__::func_27(iLocal_132, 16777216))
	{
		if (func_950(sLocal_233, &(Local_459[0 /*45*/])))
		{
			__LIB_1__::func_683(&iLocal_132, 16777216);
		}
		return;
	}
	if (!__LIB_0__::func_27(iLocal_132, 33554432))
	{
		if (func_950(sLocal_234, &(Local_459[1 /*45*/])))
		{
			__LIB_1__::func_683(&iLocal_132, 33554432);
		}
		return;
	}
	if (!__LIB_0__::func_27(iLocal_132, 67108864))
	{
		if (func_950(sLocal_235, &(Local_459[2 /*45*/])))
		{
			__LIB_1__::func_683(&iLocal_132, 67108864);
		}
		return;
	}
	if (!__LIB_0__::func_27(iLocal_132, 134217728))
	{
		if (func_950(sLocal_236, &(Local_459[3 /*45*/])))
		{
			__LIB_1__::func_683(&iLocal_132, 134217728);
		}
		return;
	}
	__LIB_1__::func_683(&iLocal_131, 32768);
}

void func_385()
{
	int iVar0;
	if ((bLocal_207 && bLocal_208) && bLocal_209)
	{
		return;
	}
	if (!bLocal_206)
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (iLocal_134 > 0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_459[iVar0 /*45*/]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_459[iVar0 /*45*/]))
					{
						if (!__LIB_0__::func_899(&(Local_459[iVar0 /*45*/].f_33)))
						{
							if (__LIB_3__::func_528(Local_459[iVar0 /*45*/], Global_35))
							{
								__LIB_2__::func_259(&(Local_459[iVar0 /*45*/].f_33));
							}
						}
						else if (__LIB_9__::func_178(&(Local_459[iVar0 /*45*/].f_33)) > 0.5f)
						{
							bLocal_206 = true;
							bLocal_204 = true;
							__LIB_1__::func_561(&(Local_459[iVar0 /*45*/].f_33));
						}
					}
					else if (__LIB_0__::func_899(&(Local_459[iVar0 /*45*/].f_33)))
					{
						__LIB_1__::func_561(&(Local_459[iVar0 /*45*/].f_33));
					}
				}
			}
			iVar0++;
		}
	}
	else if (!bLocal_204)
	{
		bLocal_204 = true;
	}
	if (iLocal_134 > 1)
	{
		if (!bLocal_211)
		{
			if (__LIB_0__::func_399(Global_35, 1, 0, 0) == joaat("WEAPON_BOW"))
			{
				bLocal_211 = true;
			}
		}
		func_952();
		func_953();
		func_954();
	}
	if (!bLocal_210)
	{
		if (iLocal_134 > 0)
		{
			if (!func_310(4))
			{
				if (__LIB_0__::func_399(Global_35, 1, 0, 0) == joaat("WEAPON_BOW"))
				{
					bLocal_210 = true;
				}
				else
				{
					func_321(4);
				}
			}
		}
	}
	iVar0 = 0;
	if (!bLocal_205)
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_459[iVar0 /*45*/]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_459[iVar0 /*45*/]))
				{
					if (!func_310(8))
					{
						if (__LIB_0__::func_27(Local_459[iVar0 /*45*/].f_2, 2048))
						{
							if (__LIB_9__::func_178(&(Local_459[iVar0 /*45*/].f_30)) > 0.5f)
							{
								if (!bLocal_205)
								{
									bLocal_205 = true;
									if (iVar0 == 1)
									{
										func_321(8);
									}
								}
							}
						}
					}
					else
					{
						bLocal_205 = true;
					}
				}
			}
			iVar0++;
		}
	}
}

void func_386()
{
	bool bVar0;
	bVar0 = true;
	if (iLocal_414 > 4 && iLocal_414 < 10)
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		WEAPON::_0xB832F1A686B9B810(Global_35, 1, 0);
	}
	else
	{
		WEAPON::_0xB832F1A686B9B810(Global_35, 0, 0);
	}
}

void func_387()
{
	if (!__LIB_0__::func_27(iLocal_132, 1048576))
	{
		if (WEAPON::_0xF29A186ED428B552(Global_35, joaat("WEAPON_BOW")))
		{
			WEAPON::_0xA3716A77DCF17424(Global_35, joaat("WEAPON_BOW"), 0);
			__LIB_1__::func_683(&iLocal_132, 1048576);
		}
	}
	else if (!WEAPON::_0xF29A186ED428B552(Global_35, joaat("WEAPON_BOW")))
	{
		__LIB_1__::func_681(&iLocal_132, 1048576);
	}
}

int func_388(char* sParam0)
{
	int iVar0;
	if (!func_955(sParam0))
	{
		return 1;
	}
	if (sParam0->f_3 == 5)
	{
		func_956(sParam0);
		return 1;
	}
	if (sParam0->f_3 != 0 && sParam0->f_3 != 4)
	{
		CAM::_0x702B75DC9D3EDE56(true);
		PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE"), true);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE_ALTERNATE"), true);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), true);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), true);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), true);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), true);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), true);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_STOP"), true);
	}
	else
	{
		PED::SET_PED_MIN_MOVE_BLEND_RATIO(Global_35, 1.25f);
	}
	switch (sParam0->f_3)
	{
		case 0:
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_EXIT"), false);
			if (func_957(sParam0, 1) && __LIB_9__::func_178(&(sParam0->f_5)) >= 3f)
			{
				AUDIO::_0x5E3CCF03995388B5(-138270904, -1317f, 2050.6f, 342.9f);
				__LIB_4__::func_509(1);
				bLocal_203 = true;
				func_958(sParam0, 1);
				CAM::SET_CAM_ACTIVE(sParam0->f_8, false);
				__LIB_0__::func_489(0f, 0f);
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				CAM::DESTROY_CAM(sParam0->f_8, false);
				if (CAM::_0x927B810E43E99932(&Local_663))
				{
					CAM::_0x0A5A4F1979ABB40E(&Local_663);
				}
				if (CAM::_0xDD0B7C5AE58F721D(&Local_663))
				{
					CAM::_0x798BE43C9393632B(&Local_663);
				}
			}
			else
			{
				Jump @1297; //curOff = 369
				CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
				iVar0 = CAM::_0xEA113BF9B0C0C5D7("script@Story@RPRSN1@mission_jump_cameras", "HILL", 5);
				if (AUDIO::_0xFFE9C53DEEA3DB0B((iVar0 - __LIB_10__::func_919(&(sParam0->f_5))), -1937674389, -1403.7f, 1864.3f, 306.9f, func_957(sParam0, 2), 2147483647))
				{
					TASK::TASK_CLEAR_LOOK_AT(iLocal_67);
					TASK::TASK_CLEAR_LOOK_AT(Global_35);
					func_958(sParam0, 2);
				}
				else
				{
					if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Global_35, 0))
					{
						TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Global_35, 1.5f, 0, -1082130432 /* Float: -1f */, 0);
					}
					if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_67, 0))
					{
						if (__LIB_0__::func_48(iLocal_67, Global_35, 5f, 1))
						{
							TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_67, 1.5f, 0, -1082130432 /* Float: -1f */, 0);
						}
						else
						{
							TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_67, 1.4f, 0, -1082130432 /* Float: -1f */, 0);
						}
					}
					TASK::TASK_LOOK_AT_COORD(iLocal_67, -1365.713f, 2072.268f, 319.3678f, -1, 0, 51, 0);
					TASK::TASK_LOOK_AT_COORD(Global_35, -1363.024f, 2108.606f, 320.962f, -1, 0, 51, 0);
					Jump @1297; //curOff = 617
					CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
					iVar0 = CAM::_0xEA113BF9B0C0C5D7("script@Story@RPRSN1@mission_jump_cameras", "Riding", 5);
					if (AUDIO::_0xFFE9C53DEEA3DB0B((iVar0 - __LIB_10__::func_919(&(sParam0->f_5))), -1833195203, -1497.9f, 1641.4f, 244.4f, func_957(sParam0, 3), 2147483647))
					{
						TASK::TASK_CLEAR_LOOK_AT(iLocal_67);
						TASK::TASK_CLEAR_LOOK_AT(Global_35);
						func_958(sParam0, 3);
					}
					else
					{
						if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Global_35, 0))
						{
							TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Global_35, 1.5f, 0, -1082130432 /* Float: -1f */, 0);
						}
						if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_67, 0))
						{
							TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_67, 1.5f, 0, -1082130432 /* Float: -1f */, 0);
						}
						TASK::TASK_LOOK_AT_COORD(iLocal_67, -1456.007f, 1730.778f, 269.4558f, -1, 0, 51, 0);
						TASK::TASK_LOOK_AT_COORD(Global_35, -1426.729f, 1765.086f, 285.2788f, -1, 0, 51, 0);
						Jump @1297; //curOff = 830
						CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
						iVar0 = CAM::_0xEA113BF9B0C0C5D7("script@Story@RPRSN1@mission_jump_cameras", "NoCamp", 5);
						func_960();
						if (AUDIO::_0xFFE9C53DEEA3DB0B((iVar0 - __LIB_10__::func_919(&(sParam0->f_5))), 0, -1454.7f, 1605.6f, 239.5f, true, 2147483647))
						{
							TASK::TASK_CLEAR_LOOK_AT(iLocal_67);
							TASK::TASK_CLEAR_LOOK_AT(Global_35);
							func_958(sParam0, 4);
							func_342(3, 0);
							func_341(2, 0);
							if (CAM::_0x927B810E43E99932(&Local_679))
							{
								CAM::_0x798BE43C9393632B(&Local_679);
								CAM::_0x0A5A4F1979ABB40E(&Local_679);
							}
							AUDIO::_0x43037ABFE214A851();
							__LIB_4__::func_509(0);
						}
						else
						{
							if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Global_35, 0))
							{
								TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Global_35, 1.5f, 0, -1082130432 /* Float: -1f */, 0);
							}
							if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_67, 0))
							{
								if (__LIB_0__::func_48(iLocal_67, Global_35, 5f, 1))
								{
									TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_67, 1.5f, 0, -1082130432 /* Float: -1f */, 0);
								}
								else
								{
									TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_67, 1.4f, 0, -1082130432 /* Float: -1f */, 0);
								}
							}
							TASK::TASK_LOOK_AT_COORD(iLocal_67, -1435.707f, 1518.864f, 229.4417f, -1, 0, 51, 0);
							TASK::TASK_LOOK_AT_COORD(Global_35, -1444.823f, 1595.53f, 244.07f, -1, 0, 51, 0);
							Jump @1297; //curOff = 1117
							if (__LIB_9__::func_178(&(sParam0->f_5)) >= 2.5f)
							{
								func_958(sParam0, 5);
								CAM::DESTROY_CAM(sParam0->f_8, false);
								PLAYER::_0x908D4B72854C8F62(PLAYER::GET_PLAYER_INDEX());
								TASK::CLEAR_PED_TASKS(Global_35, true, false);
								Jump @1297; //curOff = 1170
							}
							else if (__LIB_9__::func_178(&(sParam0->f_5)) >= 0.2f)
							{
							}
							else if (__LIB_9__::func_178(&(sParam0->f_5)) >= 0.1f)
							{
								if (CAM::IS_CAM_ACTIVE(sParam0->f_8))
								{
									CAM::SET_CAM_ACTIVE(sParam0->f_8, false);
									__LIB_0__::func_489(0f, 0f);
									CAM::RENDER_SCRIPT_CAMS(false, true, 5000, false, false, 0);
								}
								CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
								HUD::_0xC9CAEAEEC1256E54(724769646);
							}
							else
							{
								CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
								HUD::_0xC9CAEAEEC1256E54(724769646);
							}
						}
					}
				}
			}
			return 0;
			default:
				break;
	}
}

bool func_389(char* sParam0, int iParam1)
{
	return __LIB_0__::func_27(sParam0->f_1, iParam1);
}

void func_390()
{
	if (CAM::DOES_CAM_EXIST(Local_17.f_8))
	{
		CAM::DESTROY_CAM(Local_17.f_8, false);
	}
	if (func_389(&Local_17, 2))
	{
		CAM::_0x798BE43C9393632B(Local_17);
	}
}

void func_392(var uParam0)
{
	switch (iLocal_47)
	{
		case 0:
			func_961();
			break;
		case 1:
			func_962(uParam0);
			break;
		case 7:
			func_963();
			break;
		case 6:
			func_964(uParam0);
			break;
		case 5:
			func_965();
			break;
		case 4:
			func_966();
			break;
		case 2:
			func_967(uParam0);
			break;
		case 8:
			func_968(uParam0);
			break;
		case 3:
			func_969();
			break;
	}
}

void func_393()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	vector3 vVar3;
	iVar0 = 6;
	bVar2 = false;
	if (!__LIB_0__::func_272(iLocal_67, 1))
	{
		return;
	}
	if (__LIB_0__::func_272(iLocal_70, 0))
	{
		ENTITY::_0xC3ABCFBC7D74AFA5(iLocal_70, 6, 1);
	}
	func_970();
	if (__LIB_0__::func_27(iLocal_131, 2097152))
	{
		if (func_603(63) == 3 && !__LIB_6__::func_903("PRSN_IG3"))
		{
			if (__LIB_0__::func_272(Local_640[0 /*17*/], 0))
			{
				if (__LIB_2__::func_401(Local_640[0 /*17*/], 1, 1, 1, 0, 0))
				{
					func_411(67, 1);
				}
			}
		}
		if (__LIB_0__::func_27(Local_640[0 /*17*/].f_2, 1048576))
		{
			if (iLocal_660 != 5)
			{
				__LIB_1__::func_561(&uLocal_361);
				iLocal_660 = 5;
			}
			iVar0 = func_411(69, 1);
		}
		if (__LIB_0__::func_27(iLocal_131, 8388608) && !__LIB_0__::func_27(iLocal_132, 8388608))
		{
			if (Local_640[0 /*17*/].f_7 == 6 || __LIB_0__::func_27(Local_640[0 /*17*/].f_2, 16384))
			{
				if (__LIB_0__::func_272(Local_640[0 /*17*/], 0))
				{
					if (iVar0 == 3)
					{
						iVar0 = func_411(70, 1);
					}
					if (iLocal_660 != 5)
					{
						__LIB_1__::func_561(&uLocal_361);
						iLocal_660 = 5;
					}
					func_342(19, 0);
				}
			}
		}
	}
	if ((iLocal_414 >= 7 && !__LIB_0__::func_27(iLocal_133, 1024)) && iLocal_433 != 19)
	{
		if ((__LIB_6__::func_690(Global_35, 4) || PED::_IS_PED_CARRYING(Global_35)) || iLocal_454 != 4)
		{
			func_342(11, 0);
		}
	}
	if (__LIB_0__::func_27(iLocal_131, 536870912))
	{
		iVar0 = func_411(71, 1);
	}
	switch (iLocal_433)
	{
		case 0:
			break;
		case 1:
			break;
		case 2:
			if (!TASK::_0x9FF5F9B24E870748(iLocal_67) && !__LIB_0__::func_394(iLocal_67, iLocal_70, 1))
			{
				func_342(2, 1);
			}
			else if (__LIB_0__::func_394(iLocal_67, iLocal_70, 1))
			{
				func_342(3, 0);
			}
			else
			{
				Jump @3729; //curOff = 583
				if (!PED::IS_PED_ON_MOUNT(iLocal_67))
				{
					func_342(2, 0);
				}
				if (!func_431(0))
				{
					if (!__LIB_0__::func_899(&uLocal_367))
					{
						__LIB_2__::func_259(&uLocal_367);
					}
					else if (__LIB_9__::func_178(&uLocal_367) > 1f)
					{
						__LIB_1__::func_561(&uLocal_367);
						func_411(0, 0);
					}
				}
				if (!bLocal_203)
				{
					if (func_974(sLocal_229, 1075838976 /* Float: 2.5f */))
					{
					}
					else
					{
						Jump @701; //curOff = 681
						if (func_974(cLocal_230, 1075838976 /* Float: 2.5f */))
						{
						}
						else
						{
							Jump @3729; //curOff = 701
							bVar2 = func_974(sLocal_231, 1075838976 /* Float: 2.5f */);
							vVar3 = { func_420(3, "CHARLES", "PL_IG2_Inspect_Tracks_Dismount") };
							if (__LIB_0__::func_266(iLocal_67, vVar3, 10f, 1, 1))
							{
								bVar2 = true;
							}
							if (bVar2)
							{
								func_342(5, 0);
							}
							else
							{
								Jump @3729; //curOff = 771
								if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_110))
								{
									iLocal_110 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), -1404.064f, 1387.788f, 219.2211f, 0f, 0f, 0f, 1.1f, 1.1f, 3f);
								}
								__LIB_1__::func_448(iLocal_67, func_420(3, "CHARLES", "PL_IG2_Inspect_Tracks_Dismount"), 0, 30f, 15f, 5f, 0f, 1, 1, 1, 0);
								if (!func_976(3, "PL_IG2_Inspect_Tracks_Dismount"))
								{
								}
								else
								{
									if ((!__LIB_0__::func_163(iLocal_67, 713668775) && __LIB_0__::func_48(Global_35, iLocal_67, 7.5f, 1)) && !__LIB_0__::func_491(Global_35, 501393341))
									{
										if (PED::IS_PED_ON_MOUNT(iLocal_67))
										{
											func_342(6, 0);
										}
										else
										{
											func_342(8, 0);
										}
									}
									Jump @3729; //curOff = 954
									if (!func_976(3, "PL_IG2_Inspect_Idle"))
									{
									}
									else
									{
										if (func_422(3))
										{
											if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true) && !__LIB_0__::func_491(Global_35, 501393341))
											{
												if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(vLocal_695[3 /*3*/]) > 0.07f)
												{
													TASK::TASK_DISMOUNT_ANIMAL(Global_35, 0, 0, 0, 0, 0);
												}
											}
										}
										if (__LIB_0__::func_48(Global_35, iLocal_67, 50f, 1))
										{
											PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
											PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
										}
										if (func_978(3))
										{
											func_342(9, 0);
										}
										Jump @3729; //curOff = 1093
										if (!func_976(3, "PL_IG2_Inspect_Tracks"))
										{
										}
										else
										{
											if (__LIB_0__::func_48(Global_35, iLocal_67, 6f, 1))
											{
												func_342(8, 0);
											}
											Jump @3729; //curOff = 1133
											if (func_978(3))
											{
												func_342(9, 0);
											}
											Jump @3729; //curOff = 1151
											__LIB_0__::func_172(iLocal_110);
											if (func_406(2))
											{
												if (__LIB_6__::func_912(Global_35, iLocal_67, sLocal_234, 1112014848 /* Float: 50f */) && __LIB_9__::func_178(&uLocal_349) > 1f)
												{
													__LIB_1__::func_561(&uLocal_349);
													func_342(10, 0);
												}
												else
												{
													if (!func_406(0))
													{
														if (!__LIB_0__::func_899(&uLocal_343))
														{
															__LIB_2__::func_259(&uLocal_343);
														}
														else if (__LIB_9__::func_178(&uLocal_343) > 2f)
														{
															func_349();
														}
													}
													else
													{
														func_980(iVar0);
														if (__LIB_9__::func_178(&uLocal_343) > 3f)
														{
															TASK::TASK_TURN_PED_TO_FACE_COORD(iLocal_67, -1397.586f, 1379.262f, 218.6029f, -1);
															__LIB_1__::func_561(&uLocal_343);
														}
														if (PED::_GET_PED_CROUCH_MOVEMENT(iLocal_67) == 0)
														{
															if (__LIB_6__::func_912(Global_35, iLocal_67, sLocal_235, 1112014848 /* Float: 50f */))
															{
																PED::_SET_PED_CROUCH_MOVEMENT(iLocal_67, true, 0, false);
															}
														}
													}
													Jump @1477; //curOff = 1352
													if (!__LIB_0__::func_71(Global_35))
													{
														if (func_603(23) != 9 && func_603(23) != 2)
														{
															if (func_603(23) != 3)
															{
																if (!__LIB_0__::func_899(&uLocal_346))
																{
																	__LIB_2__::func_259(&uLocal_346);
																}
																else if (__LIB_9__::func_178(&uLocal_346) > 15f && !__LIB_0__::func_899(&uLocal_355))
																{
																	func_411(23, 0);
																	__LIB_1__::func_561(&uLocal_346);
																}
															}
															else
															{
																func_981(23, 1);
															}
														}
													}
													Jump @3729; //curOff = 1477
													if (!PED::IS_PED_ON_MOUNT(Global_35))
													{
														if (PED::IS_PED_ON_MOUNT(iLocal_67) && !__LIB_0__::func_163(iLocal_67, 501393341))
														{
															TASK::CLEAR_PED_TASKS(iLocal_67, true, false);
															TASK::TASK_DISMOUNT_ANIMAL(iLocal_67, 0, 0, 0, 0, 0);
														}
													}
													if (iLocal_414 == 4 && func_406(2))
													{
														if (!func_406(0))
														{
															if (!__LIB_0__::func_899(&uLocal_343))
															{
																__LIB_2__::func_259(&uLocal_343);
															}
															else if (__LIB_9__::func_178(&uLocal_343) > 2.5f)
															{
																if (PED::_GET_PED_CROUCH_MOVEMENT(iLocal_67) == 0)
																{
																	PED::_SET_PED_CROUCH_MOVEMENT(iLocal_67, true, 0, false);
																	__LIB_1__::func_561(&uLocal_343);
																	func_349();
																}
															}
														}
														else
														{
															func_980(iVar0);
														}
														if (func_406(0))
														{
															if (PED::_GET_PED_CROUCH_MOVEMENT(iLocal_67) == 0)
															{
																if (!ENTITY::IS_ENTITY_IN_WATER(iLocal_67) && !__LIB_0__::func_266(iLocal_67, -1401.159f, 1146.452f, 223.7491f, 25f, 1, 1))
																{
																	PED::_SET_PED_CROUCH_MOVEMENT(iLocal_67, true, 0, false);
																}
															}
															else if (ENTITY::IS_ENTITY_IN_WATER(iLocal_67) || __LIB_0__::func_266(iLocal_67, -1401.159f, 1146.452f, 223.7491f, 25f, 1, 1))
															{
																PED::_SET_PED_CROUCH_MOVEMENT(iLocal_67, false, 0, false);
															}
														}
														if (Local_418.f_2)
														{
															if (!__LIB_0__::func_163(iLocal_67, -880529684))
															{
																TASK::TASK_LOOK_AT_COORD(iLocal_67, Local_418.f_6, 4000, 0, 51, 0);
															}
														}
													}
													else if (iLocal_414 >= 7)
													{
														if (PED::_GET_PED_CROUCH_MOVEMENT(iLocal_67))
														{
															PED::_SET_PED_CROUCH_MOVEMENT(iLocal_67, false, 0, false);
															func_849();
														}
														if (!__LIB_0__::func_27(iLocal_132, 8192))
														{
															TASK::TASK_FOLLOW_AND_CONVERSE_WITH_PED(iLocal_67, Global_35, 0, 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 8, 0, 0, 1069547520 /* Float: 1.5f */, 1073741824 /* Float: 2f */);
															__LIB_1__::func_683(&iLocal_132, 8192);
														}
													}
													else if (func_406(0))
													{
														if (PED::_GET_PED_CROUCH_MOVEMENT(iLocal_67) == 0)
														{
															if (!ENTITY::IS_ENTITY_IN_WATER(iLocal_67) && !__LIB_0__::func_266(iLocal_67, -1401.159f, 1146.452f, 223.7491f, 25f, 1, 1))
															{
																PED::_SET_PED_CROUCH_MOVEMENT(iLocal_67, true, 0, false);
															}
														}
														else if (ENTITY::IS_ENTITY_IN_WATER(iLocal_67) || __LIB_0__::func_266(iLocal_67, -1401.159f, 1146.452f, 223.7491f, 25f, 1, 1))
														{
															PED::_SET_PED_CROUCH_MOVEMENT(iLocal_67, false, 0, false);
														}
													}
													Jump @3729; //curOff = 2026
													__LIB_1__::func_683(&iLocal_133, 1024);
													if (iLocal_456 != 4)
													{
														if (__LIB_0__::func_48(iLocal_67, Local_459[iLocal_456 /*45*/], 3f, 0) && !__LIB_0__::func_48(Global_35, Local_459[iLocal_456 /*45*/], 3f, 0))
														{
															__LIB_1__::func_683(&(Local_459[iLocal_456 /*45*/].f_2), 64);
														}
													}
													if (((func_603(50) == 2 || func_603(40) == 2) || func_603(42) == 2) || func_603(43) == 2)
													{
														PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_67, 1f);
													}
													iVar1 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(iLocal_67);
													if (iVar1 != 0)
													{
														if (ENTITY::_0x61914209C36EFDDB(iVar1) == 5)
														{
															if (!__LIB_0__::func_163(iLocal_67, 242628503))
															{
																func_342(12, 0);
															}
															else if (!bLocal_181)
															{
																if (iLocal_454 == iLocal_456)
																{
																	bLocal_181 = true;
																	func_342(11, 1);
																}
																else
																{
																	if (iLocal_456 != 4)
																	{
																		if (__LIB_0__::func_48(iLocal_67, Local_459[iLocal_456 /*45*/], 4f, 0))
																		{
																			if (__LIB_0__::func_27(Local_459[iLocal_456 /*45*/].f_2, 64))
																			{
																				if (!__LIB_0__::func_163(iLocal_67, 1245594896))
																				{
																					TASK::TASK_PICKUP_CARRIABLE_ENTITY(iLocal_67, Local_459[iLocal_456 /*45*/]);
																				}
																				else
																				{
																					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_67, 1f);
																					if (!TASK::_0x9FF5F9B24E870748(iLocal_67))
																					{
																						if (iLocal_457 < 4)
																						{
																							TASK::TASK_CARRIABLE(Local_459[iLocal_457 /*45*/], joaat("DEAD_CARRIABLE_DEER"), iLocal_67, 0, 0);
																							__LIB_2__::func_259(&uLocal_280);
																							__LIB_1__::func_561(&uLocal_280);
																						}
																						else
																						{
																							func_342(12, 0);
																						}
																						else
																						{
																							Jump @2500; //curOff = 2389
																							if (__LIB_0__::func_163(iLocal_67, 242628503))
																							{
																								if (TASK::GET_SEQUENCE_PROGRESS(iLocal_67) >= 1)
																								{
																									if (iLocal_457 < 4)
																									{
																										if (!__LIB_0__::func_899(&uLocal_280))
																										{
																											__LIB_2__::func_259(&uLocal_280);
																										}
																										if (__LIB_9__::func_178(&uLocal_280) > 10f)
																										{
																											TASK::CLEAR_PED_TASKS(iLocal_67, true, false);
																											TASK::TASK_CARRIABLE(Local_459[iLocal_457 /*45*/], joaat("DEAD_CARRIABLE_DEER"), iLocal_67, 0, 0);
																											__LIB_2__::func_259(&uLocal_280);
																											__LIB_1__::func_561(&uLocal_280);
																										}
																									}
																								}
																							}
																							Jump @3729; //curOff = 2500
																							func_855();
																							if (!__LIB_0__::func_27(iLocal_132, 524288))
																							{
																								__LIB_1__::func_326(iLocal_67, 869278708, 68916947);
																								__LIB_1__::func_683(&iLocal_132, 524288);
																								Jump @3729; //curOff = 2547
																							}
																							else if (__LIB_2__::func_385(iLocal_67))
																							{
																							}
																							else
																							{
																								iVar0 = func_411(53, 0);
																								if (__LIB_0__::func_48(iLocal_67, iLocal_70, 10f, 1))
																								{
																									PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_70, 1f);
																									PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_70, 1f);
																									if ((__LIB_0__::func_163(iLocal_70, -982327190) || PED::IS_PED_STOPPED(iLocal_70)) || __LIB_0__::func_48(iLocal_67, iLocal_70, 5f, 1))
																									{
																										func_342(13, 0);
																									}
																								}
																								Jump @3729; //curOff = 2654
																								if (__LIB_0__::func_48(iLocal_67, iLocal_70, 10f, 1))
																								{
																									PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_70, 1f);
																									PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_70, 1f);
																								}
																								iVar1 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(iLocal_70);
																								if (iVar1 != 0 && PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(iLocal_67) == 0)
																								{
																									if (ENTITY::_0x61914209C36EFDDB(iVar1) == 7)
																									{
																										func_342(14, 0);
																										__LIB_1__::func_561(&uLocal_265);
																										__LIB_1__::func_561(&uLocal_268);
																									}
																									else
																									{
																										Jump @2832; //curOff = 2750
																										iVar1 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(iLocal_67);
																										if (!TASK::_0x9FF5F9B24E870748(iLocal_67))
																										{
																											if (iVar1 == 0)
																											{
																												func_342(14, 0);
																												__LIB_1__::func_561(&uLocal_265);
																												__LIB_1__::func_561(&uLocal_268);
																												Jump @3729; //curOff = 2798
																											}
																											else if (PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(iLocal_70) == 0)
																											{
																												TASK::TASK_PLACE_CARRIED_ENTITY_ON_MOUNT(iLocal_67, iVar1, iLocal_70, 1.5f);
																											}
																											else
																											{
																												if (__LIB_0__::func_48(iLocal_67, iLocal_70, 3f, 1))
																												{
																													if (!__LIB_0__::func_899(&uLocal_268))
																													{
																														__LIB_2__::func_259(&uLocal_268);
																													}
																												}
																												if (__LIB_9__::func_178(&uLocal_265) > 90f || __LIB_9__::func_178(&uLocal_268) > 25f)
																												{
																													iVar1 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(iLocal_67);
																													if (iVar1 != 0)
																													{
																														TASK::TASK_CARRIABLE(iVar1, joaat("DEAD_CARRIABLE_DEER"), iLocal_70, 0, 0);
																													}
																													func_342(14, 1);
																													__LIB_1__::func_561(&uLocal_265);
																													__LIB_1__::func_561(&uLocal_268);
																												}
																												else
																												{
																													Jump @3729; //curOff = 2954
																													func_331(53);
																													func_411(55, 0);
																													if (iLocal_414 == 10)
																													{
																														if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iLocal_67, true) && !__LIB_0__::func_491(iLocal_67, 1868526510))
																														{
																															func_342(15, 0);
																															return;
																														}
																													}
																													if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iLocal_67, true))
																													{
																														if (!__LIB_0__::func_163(iLocal_67, -875674219))
																														{
																															TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_67, Global_35, -1, -1f, -1f, -1f);
																														}
																													}
																													Jump @3729; //curOff = 3067
																													if (!PED::IS_PED_ON_MOUNT(iLocal_67) && !TASK::_0x9FF5F9B24E870748(iLocal_67))
																													{
																														func_342(15, 1);
																													}
																													else
																													{
																														if (!bLocal_228)
																														{
																															if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_67, 0))
																															{
																																TASK::_0xE8C296B75EACC357(iLocal_70, 1f);
																																bLocal_228 = true;
																															}
																														}
																														iVar0 = func_411(58, 0);
																														if (iVar0 == 3)
																														{
																															if (!__LIB_0__::func_899(&uLocal_313))
																															{
																																if (__LIB_0__::func_71(Global_35))
																																{
																																	__LIB_2__::func_259(&uLocal_313);
																																}
																															}
																															else if (__LIB_9__::func_178(&uLocal_313) > 10f)
																															{
																																if (__LIB_0__::func_27(iLocal_133, 524288))
																																{
																																	func_411(60, 0);
																																}
																																else
																																{
																																	func_411(59, 0);
																																}
																															}
																														}
																														bVar2 = func_974(sLocal_232, 1075838976 /* Float: 2.5f */);
																														if ((__LIB_0__::func_266(iLocal_67, func_187(16), 10f, 1, 1) || iLocal_414 == 13) || bVar2)
																														{
																															func_342(16, 0);
																														}
																														else
																														{
																															Jump @3729; //curOff = 3287
																															iVar0 = func_411(77, 0);
																															if (__LIB_0__::func_27(iLocal_132, 65536))
																															{
																																if (func_857() == 18)
																																{
																																	func_342(16, 1);
																																}
																															}
																															else if (func_857() == 17)
																															{
																																func_342(16, 1);
																															}
																															if (!PED::IS_PED_ON_MOUNT(iLocal_67))
																															{
																																if (!TASK::_0x9FF5F9B24E870748(iLocal_67))
																																{
																																	func_342(17, 0);
																																}
																																else
																																{
																																	Jump @3400; //curOff = 3377
																																	if (!TASK::_0x9FF5F9B24E870748(iLocal_67))
																																	{
																																		func_342(17, 0);
																																	}
																																	else if (__LIB_0__::func_27(iLocal_133, 2))
																																	{
																																		if (__LIB_3__::func_138(iLocal_70, joaat("PROP_HITCHINGPOST")))
																																		{
																																			func_342(17, 0);
																																		}
																																		else
																																		{
																																			Jump @3729; //curOff = 3434
																																			if (!__LIB_3__::func_138(iLocal_70, joaat("PROP_HITCHINGPOST")))
																																			{
																																				if (!__LIB_0__::func_163(iLocal_70, 993674639) && PED::_GET_RIDER_OF_MOUNT(iLocal_70, true) == 0)
																																				{
																																					__LIB_1__::func_473(iLocal_70, joaat("PROP_HITCHINGPOST"), -1, 1, 0, -1082130432 /* Float: -1f */);
																																					FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_70, 48, true);
																																				}
																																			}
																																			if (!bLocal_213)
																																			{
																																				if (func_985())
																																				{
																																					if (__LIB_0__::func_266(iLocal_67, func_187(19), 0.25f, 1, 1))
																																					{
																																						ANIMSCENE::START_ANIM_SCENE(iLocal_144);
																																						bLocal_213 = true;
																																					}
																																				}
																																			}
																																			if (iLocal_414 != 14 && iLocal_414 != 13)
																																			{
																																				if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true) && !PED::GET_PED_RESET_FLAG(Global_35, 236))
																																				{
																																					func_411(79, 0);
																																				}
																																			}
																																			Jump @3729; //curOff = 3607
																																			Jump @3729; //curOff = 3610
																																			if (Local_640[0 /*17*/].f_7 != 6 || !__LIB_0__::func_272(Local_640[0 /*17*/], 0))
																																			{
																																				if (!__LIB_0__::func_48(Local_640[0 /*17*/], Global_35, 70f, 1) && !__LIB_0__::func_48(Local_640[0 /*17*/], iLocal_67, 70f, 1))
																																				{
																																					__LIB_1__::func_683(&iLocal_132, 8388608);
																																					func_986(74);
																																					func_986(75);
																																					func_342(15, 0);
																																				}
																																			else
																																			{
																																				}
																																			}
																																		}
																																	}
																																}
																															}
																														}
																													}
																												}
																											}
																										}
																									}
																								}
																							}
																						}
																					}
																				}
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			default:
				break;
	}
}

void func_394()
{
	if (BUILTIN::VDIST(func_987(), Global_36) < 50f)
	{
		if (!bLocal_179)
		{
			if (func_988())
			{
				func_989();
				bLocal_179 = true;
			}
		}
	}
	else if (bLocal_179)
	{
		func_990();
		bLocal_179 = false;
	}
}

void func_395(var uParam0)
{
	if (__LIB_0__::func_27(iLocal_131, 2097152) && !__LIB_0__::func_27(iLocal_131, 8388608))
	{
		if (__LIB_12__::func_645(uParam0) != 0)
		{
			__LIB_12__::func_937(uParam0, 0);
		}
	}
	if (__LIB_0__::func_27(iLocal_131, 8388608) && !__LIB_0__::func_27(iLocal_132, 8388608))
	{
		if (__LIB_12__::func_645(uParam0) != 1)
		{
			__LIB_12__::func_937(uParam0, 1);
		}
	}
	if (__LIB_0__::func_27(iLocal_131, 536870912) || (__LIB_0__::func_27(iLocal_132, 8388608) && iLocal_433 == 15))
	{
		if (__LIB_12__::func_645(uParam0) != 14)
		{
			__LIB_12__::func_937(uParam0, 14);
		}
	}
}

void func_396()
{
	if (__LIB_0__::func_27(iLocal_131, 512))
	{
		return;
	}
	if (__LIB_11__::func_54())
	{
		if (__LIB_0__::func_163(iLocal_69, -982327190))
		{
			TASK::CLEAR_PED_TASKS(iLocal_69, true, false);
		}
	}
	if (iLocal_414 >= 6)
	{
		return;
	}
	if (PED::_GET_RIDER_OF_MOUNT(iLocal_69, true) != 0)
	{
		return;
	}
	if (iLocal_427 != 2)
	{
		return;
	}
	if (!__LIB_0__::func_163(iLocal_69, -982327190))
	{
		TASK::CLEAR_PED_TASKS(iLocal_69, true, false);
		TASK::TASK_STAND_STILL(iLocal_69, -1);
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_69, 48, true);
		__LIB_1__::func_683(&iLocal_131, 512);
	}
}

void func_397()
{
	int iVar0;
	if (iLocal_134 >= 2)
	{
		return;
	}
	iVar0 = __LIB_1__::func_372(Global_35, 0);
	if (iLocal_414 >= 4 && iLocal_414 < 7)
	{
		if (!__LIB_6__::func_904())
		{
			if (iVar0 != joaat("WEAPON_UNARMED") && iVar0 != 0)
			{
				if (!__LIB_0__::func_237(iVar0))
				{
					if (WEAPON::_0x705BE297EEBDB95D(iVar0))
					{
						if (__LIB_0__::func_48(Global_35, iLocal_67, 20f, 0))
						{
							if (PED::_0x285D36C5C72B0569(Global_35) < 1f)
							{
								func_411(36, 1);
							}
							else
							{
								func_411(35, 0);
							}
						}
					}
					else
					{
						func_433(35);
					}
				}
				else
				{
					func_433(35);
				}
			}
		}
	}
}

void func_398()
{
	if (!bLocal_201)
	{
		if (iLocal_414 <= 3)
		{
			if (func_431(2))
			{
				if (PLAYER::_0xE7F8707269544B29(PLAYER::GET_PLAYER_INDEX(), iLocal_67))
				{
					__LIB_1__::func_240(68, 1);
					bLocal_201 = true;
				}
			}
		}
	}
}

void func_399()
{
	int iVar0;
	int iVar1;
	if (iLocal_134 >= 2)
	{
		return;
	}
	if (iLocal_414 < 5 || iLocal_414 >= 7)
	{
		return;
	}
	iVar0 = func_411(30, 0);
	if (iVar0 != 2 && iVar0 != 3)
	{
		return;
	}
	if (!bLocal_186)
	{
		iLocal_149 = 0;
		UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
		func_348(3);
		func_348(4);
		func_348(2);
		func_432(0);
		bLocal_186 = true;
	}
	func_407(5);
	iVar0 = func_411(31, 0);
	if (iVar0 != 3)
	{
		return;
	}
	if (!func_408(5))
	{
		return;
	}
	iVar1 = func_603(37);
	if (iVar1 == 9)
	{
		return;
	}
	iVar0 = func_411(33, 0);
	if (iVar0 != 3)
	{
		return;
	}
	iVar0 = func_411(32, 0);
	if (iVar0 != 3)
	{
		return;
	}
	if (!__LIB_0__::func_899(&uLocal_373))
	{
		__LIB_2__::func_259(&uLocal_373);
	}
	else if (func_994() || (iLocal_414 == 5 && __LIB_9__::func_178(&uLocal_373) > 5f))
	{
		iVar0 = func_411(34, 0);
		if (iVar0 != 3)
		{
			return;
		}
	}
}

void func_400()
{
	char* sVar0;
	if (__LIB_0__::func_27(iLocal_131, 2048))
	{
		return;
	}
	if (!__LIB_0__::func_272(iLocal_67, 0) || !__LIB_0__::func_272(iLocal_70, 0))
	{
		return;
	}
	if (__LIB_0__::func_27(iLocal_131, 2097152))
	{
		if ((!bLocal_214 && iLocal_660 < 5) && (func_603(63) == 2 || func_603(63) == 3))
		{
			if (!__LIB_0__::func_899(&uLocal_391))
			{
				__LIB_2__::func_259(&uLocal_391);
			}
			else if (__LIB_9__::func_178(&uLocal_391) > 3f)
			{
				iLocal_895 = func_995(&(Local_640[0 /*17*/]), &vLocal_834, 70f, &Local_816, 0f, 3, 0, 0, 3, 0, 0, 2, -1082130432 /* Float: -1f */);
				if (!__LIB_0__::func_48(Global_35, iLocal_67, 6f, 1))
				{
					if (!PED::GET_PED_CONFIG_FLAG(Local_640[0 /*17*/], 301, true))
					{
						PED::SET_PED_CONFIG_FLAG(Local_640[0 /*17*/], 301, true);
					}
				}
				else if (PED::GET_PED_CONFIG_FLAG(Local_640[0 /*17*/], 301, true))
				{
					PED::SET_PED_CONFIG_FLAG(Local_640[0 /*17*/], 301, false);
				}
				if (iLocal_895 == 0)
				{
					__LIB_1__::func_480(&(Local_640[0 /*17*/]));
					PED::SET_PED_CONFIG_FLAG(Local_640[0 /*17*/], 301, false);
					__LIB_2__::func_480(&Local_816, 1, 1, 1, 0);
					vLocal_834.f_2 = 0;
					__LIB_1__::func_561(&uLocal_391);
					bLocal_214 = true;
				}
			}
		}
	}
	TASK::TASK_LOOK_AT_ENTITY(iLocal_67, Local_640[0 /*17*/], 500, 0, 51, 0);
	sVar0 = "pl_IG3_Line_StayWellBack";
	switch (iLocal_660)
	{
		case 0:
			if (__LIB_0__::func_27(iLocal_131, 4194304))
			{
				iLocal_142 = ANIMSCENE::_CREATE_ANIM_SCENE("script@rcm@PRSN@IG@IG3_CharlesSpotsBear@IG3_CharlesSpotsBear", 0, 0, false, true);
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_142))
				{
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_142, "CharlesSmith", iLocal_67, 0);
					ANIMSCENE::LOAD_ANIM_SCENE(iLocal_142);
					iLocal_660 = 1;
				}
			}
			break;
		case 1:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_142))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_142, true, false))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_142, sVar0);
					iLocal_660 = 2;
				}
			}
			break;
		case 2:
			if (__LIB_0__::func_27(iLocal_131, 2097152))
			{
				if ((ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_142, sVar0) && func_411(63, 0) == 3) && !__LIB_6__::func_903("RPRSN_AIM"))
				{
					if (!bLocal_214)
					{
						iLocal_660 = 3;
					}
					else if (func_411(64, 0) == 3)
					{
						bLocal_215 = true;
						iLocal_660 = 3;
					}
				}
				func_996();
				if (!bLocal_199)
				{
					if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_67, 0))
					{
						if (!TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(iLocal_67))
						{
							TASK::WAYPOINT_PLAYBACK_PAUSE(iLocal_67, 0, 0, 0);
							bLocal_199 = true;
						}
					}
				}
			}
			break;
		case 3:
			if (__LIB_0__::func_27(iLocal_131, 2097152))
			{
				if (!bLocal_199)
				{
					if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_67, 0))
					{
						if (!TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(iLocal_67))
						{
							TASK::WAYPOINT_PLAYBACK_PAUSE(iLocal_67, 0, 0, 0);
							bLocal_199 = true;
						}
					}
				}
				func_421(4, 0);
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iLocal_142, 0f, 0f, 0.5f, 0f, 0f, 0f, 2);
				ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(iLocal_142, iLocal_70, -1);
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_142, sVar0, true);
				ANIMSCENE::START_ANIM_SCENE(iLocal_142);
				func_351(&(Local_640[0 /*17*/]), 5, 0);
				iLocal_660 = 4;
				func_996();
			}
			break;
		case 4:
			func_996();
			func_421(4, 0);
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_142, false))
			{
				__LIB_1__::func_561(&uLocal_361);
				__LIB_1__::func_561(&uLocal_364);
				func_421(4, 0);
				bLocal_199 = false;
				ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_142);
				func_342(15, 1);
				__LIB_1__::func_480(&(Local_640[0 /*17*/]));
				PED::SET_PED_CONFIG_FLAG(Local_640[0 /*17*/], 301, false);
				__LIB_2__::func_480(&Local_816, 1, 1, 1, 0);
				vLocal_834.f_2 = 0;
				if (bLocal_214)
				{
					if (!func_431(64))
					{
						func_411(64, 0);
					}
				}
				iLocal_660 = 5;
			}
			else
			{
				if (((bLocal_214 && !bLocal_215) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iLocal_67)) && ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_142) < 8.5f)
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_PAUSED(iLocal_142))
					{
						ANIMSCENE::SET_ANIM_SCENE_PAUSED(iLocal_142, true);
						if (!func_431(64))
						{
							func_411(64, 0);
						}
					}
					else if (func_603(64) == 3)
					{
						bLocal_215 = true;
						ANIMSCENE::SET_ANIM_SCENE_PAUSED(iLocal_142, false);
					}
				}
				if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_142) > 0.1f)
				{
					if (!func_406(4))
					{
						func_324(4);
						AUDIO::PLAY_ANIMAL_VOCALIZATION(Local_640[0 /*17*/], "BATTLE_CRY", false);
					}
				}
				if (bLocal_214)
				{
					if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_142) > 0.8f)
					{
						if (!func_431(64))
						{
							func_411(64, 0);
						}
					}
				}
			}
			break;
	}
}

void func_401()
{
	bool bVar0;
	bVar0 = false;
	if (iLocal_414 >= 8)
	{
		bVar0 = true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35)))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_997();
	}
}

void func_402()
{
	if (!PLAYER::_0x45AB66D02B601FA7(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return;
	}
}

char* func_404(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PRS1_H_HORSE2";
		case 1:
			return "PRS1_H_BOW_4";
		case 2:
			return "PRS1_H_CALLDR";
		case 3:
			return "PRS1_H_PELTQUAL";
		case 4:
			return "PRS1_H_CROUCH_1";
		case 6:
			return "PRS1_H_WATER";
		case 7:
			return "PRS1_H_TRACKS_1";
		case 8:
			return "PRS1_H_TRACKS_2";
		case 9:
			return "PRS1_H_EEYE_BAR1";
		case 10:
			return "PRS1_H_EEYE_BAR2";
		case 11:
			return "PRS1_H_SCENT";
		case 12:
			return "PRS1_H_ILOLAUNCH";
		case 13:
			return "PRS1_H_COMPEN";
	}
	return "";
}

bool func_406(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 >= 32)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 >= 2)
	{
		return false;
	}
	iVar2 = __LIB_0__::func_771(iVar0);
	return __LIB_0__::func_1(uLocal_14[iVar1], iVar2);
}

void func_407(int iParam0)
{
	if (!func_1000(iParam0))
	{
		func_864(&uLocal_48, iParam0);
	}
}

bool func_408(int iParam0)
{
	return func_1001(&iLocal_49, iParam0);
}

void func_409()
{
	float fVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	float fVar6;
	vector3 vVar7;
	vector3 vVar10;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	float fVar19;
	float fVar20;
	float fVar21;
	if (bLocal_181)
	{
		return;
	}
	if (iLocal_456 != 4)
	{
		if (__LIB_0__::func_27(Local_459[iLocal_456 /*45*/].f_2, 64))
		{
			return;
		}
	}
	fVar0 = 1000f;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_459[iVar2 /*45*/]))
		{
		}
		else if (__LIB_0__::func_272(Local_459[iVar2 /*45*/], 0))
		{
		}
		else
		{
			vVar3 = { ENTITY::GET_ENTITY_COORDS(Local_459[iVar2 /*45*/], true, false) };
			fVar6 = __LIB_0__::func_665(Global_35, Local_459[iVar2 /*45*/], 1, 1);
			vVar7 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(Global_35) };
			vVar7 = { __LIB_0__::func_173(vVar7) };
			vVar10 = { vVar3 - Global_36 };
			vVar10 = { __LIB_0__::func_173(vVar10) };
			fVar13 = __LIB_1__::func_507(vVar7, vVar10);
			fVar14 = ((fVar13 + 1f) * 0.5f);
			fVar14 = (1f - fVar14);
			fVar15 = 0.1f;
			fVar16 = 1f;
			fVar17 = (fVar15 + ((fVar16 - fVar15) * fVar14));
			fVar18 = (fVar6 * fVar17);
			Local_459[iVar2 /*45*/].f_8 = Local_459[iVar2 /*45*/].f_7;
			Local_459[iVar2 /*45*/].f_7 = fVar18;
			if (fVar18 < fVar0)
			{
				fVar0 = fVar18;
				iVar1 = iVar2;
			}
		}
		iVar2++;
	}
	if (iVar1 != iLocal_896)
	{
		iLocal_896 = iVar1;
		Local_459[iLocal_896 /*45*/].f_9 = fVar0;
		__LIB_2__::func_259(&uLocal_897);
	}
	else if (Local_459[iLocal_896 /*45*/].f_7 < Local_459[iLocal_896 /*45*/].f_8)
	{
		if (__LIB_0__::func_901(&uLocal_897))
		{
			__LIB_9__::func_773(&uLocal_897);
		}
	}
	else if (!__LIB_0__::func_901(&uLocal_897))
	{
		__LIB_9__::func_774(&uLocal_897);
	}
	if (iLocal_896 < 4)
	{
		fVar19 = __LIB_9__::func_178(&uLocal_897);
		fVar20 = 0.22f;
		fVar21 = (fVar19 * fVar20);
		if (Local_459[iLocal_896 /*45*/].f_7 < fVar21)
		{
			if (!bLocal_196)
			{
				iLocal_454 = iLocal_896;
			}
		}
	}
}

bool func_410(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = iParam1;
	iVar1 = 0;
	while (iVar0 >= 32)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 >= 5)
	{
		return false;
	}
	iVar2 = __LIB_0__::func_771(iVar0);
	return __LIB_0__::func_1((*uParam0)[iVar1], iVar2);
}

int func_411(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 >= 32)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 >= 5)
	{
		return 0;
	}
	iVar2 = __LIB_0__::func_771(iVar0);
	if (__LIB_0__::func_1(Local_50[iVar1], iVar2))
	{
		if (Local_50.f_12 == iParam0)
		{
			return 2;
		}
		else
		{
			return 3;
		}
	}
	if (__LIB_0__::func_1(Local_50.f_6[iVar1], iVar2))
	{
		return 9;
	}
	if (bParam1)
	{
		Local_50.f_13 = 1;
	}
	if (iParam0 == 69 || iParam0 == 70)
	{
		__LIB_5__::func_20(0, 0);
		func_331(67);
	}
	if ((iParam0 == 39 || iParam0 == 44) || iParam0 == 41)
	{
		func_331(30);
		func_331(31);
		func_331(32);
		func_331(33);
		func_331(34);
	}
	if (iParam0 == 36)
	{
		func_331(35);
	}
	if (iParam0 == 39)
	{
		func_331(41);
	}
	if (iParam0 == 56 || iParam0 == 57)
	{
		func_331(53);
		func_331(47);
		func_331(48);
		func_331(49);
		func_331(50);
	}
	if (iParam0 == 41)
	{
		func_331(36);
		func_331(39);
	}
	if (iParam0 == 40)
	{
		func_331(42);
		func_331(43);
	}
	if (iParam0 == 42)
	{
		func_331(40);
		func_331(43);
	}
	if (iParam0 == 43)
	{
		func_331(40);
		func_331(42);
	}
	if (iParam0 == 11)
	{
		func_331(2);
		func_331(4);
		func_331(5);
		func_331(13);
		func_331(9);
		func_331(10);
		func_331(8);
	}
	__LIB_1__::func_336(&(Local_50.f_6[iVar1]), iVar2);
	return 9;
}

void func_412()
{
	int iVar0;
	if (!__LIB_0__::func_27(iLocal_131, 131072) || iLocal_134 >= 2)
	{
		if (__LIB_0__::func_899(&uLocal_289))
		{
			__LIB_1__::func_561(&uLocal_289);
		}
		iLocal_137 = 4;
		return;
	}
	if (iLocal_137 == 4)
	{
		__LIB_1__::func_681(&iLocal_131, 131072);
		return;
	}
	if (!__LIB_0__::func_272(Local_459[iLocal_137 /*45*/], 1))
	{
		__LIB_1__::func_681(&iLocal_131, 131072);
		return;
	}
	if (__LIB_0__::func_27(iLocal_131, 128))
	{
		__LIB_1__::func_681(&iLocal_131, 131072);
		return;
	}
	if (!__LIB_0__::func_899(&uLocal_289))
	{
		__LIB_2__::func_259(&uLocal_289);
	}
	if (__LIB_9__::func_178(&uLocal_289) < 0.5f)
	{
		return;
	}
	if (!__LIB_0__::func_27(Local_459[iLocal_137 /*45*/].f_2, 8388608))
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (__LIB_3__::func_528(Local_459[iVar0 /*45*/], Global_35))
			{
				__LIB_1__::func_683(&(Local_459[iVar0 /*45*/].f_2), 8388608);
				__LIB_1__::func_561(&uLocal_289);
				iLocal_137 = 4;
				__LIB_1__::func_681(&iLocal_131, 131072);
				return;
			}
			iVar0++;
		}
		if (func_1007(37, 1))
		{
			__LIB_1__::func_561(&uLocal_289);
			iLocal_137 = 4;
			__LIB_1__::func_681(&iLocal_131, 131072);
		}
	}
}

void func_413()
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (__LIB_0__::func_27(Local_459[iVar0 /*45*/].f_2, 8388608))
		{
			if (ENTITY::IS_ENTITY_DEAD(Local_459[iVar0 /*45*/]))
			{
				__LIB_1__::func_681(&(Local_459[iVar0 /*45*/].f_2), 8388608);
				return;
			}
			if (!__LIB_0__::func_27(Local_459[iVar0 /*45*/].f_2, 33554432))
			{
				if (TASK::IS_PED_IN_WRITHE(Local_459[iVar0 /*45*/]))
				{
					__LIB_1__::func_683(&(Local_459[iVar0 /*45*/].f_2), 33554432);
				}
			}
			if (!__LIB_0__::func_27(Local_459[iVar0 /*45*/].f_2, 16777216))
			{
				if (func_1007(44, 1))
				{
					__LIB_1__::func_683(&(Local_459[iVar0 /*45*/].f_2), 16777216);
				}
			}
			else if (!__LIB_0__::func_27(Local_459[iVar0 /*45*/].f_2, 67108864))
			{
				if (!__LIB_0__::func_899(&uLocal_295))
				{
					if (__LIB_0__::func_27(Local_459[iVar0 /*45*/].f_2, 33554432))
					{
						__LIB_2__::func_259(&uLocal_295);
					}
				}
				else if (__LIB_9__::func_178(&uLocal_295) > 3f && __LIB_0__::func_48(Global_35, Local_459[iVar0 /*45*/], 15f, 1))
				{
					if (func_1007(45, 1))
					{
						__LIB_1__::func_561(&uLocal_295);
						__LIB_1__::func_683(&(Local_459[iVar0 /*45*/].f_2), 67108864);
					}
				}
			}
			else if (!__LIB_0__::func_899(&uLocal_295))
			{
				__LIB_2__::func_259(&uLocal_295);
			}
			else if ((__LIB_9__::func_178(&uLocal_295) > 10f && __LIB_0__::func_48(Global_35, Local_459[iVar0 /*45*/], 15f, 1)) && !bLocal_196)
			{
				if (func_1007(46, 0))
				{
					__LIB_2__::func_259(&uLocal_295);
				}
			}
		}
		iVar0++;
	}
}

void func_414()
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (__LIB_0__::func_27(Local_459[iVar0 /*45*/].f_2, 2048))
		{
			if (!__LIB_0__::func_899(&uLocal_292))
			{
				if (__LIB_0__::func_899(&(Local_459[iVar0 /*45*/].f_30)) && __LIB_9__::func_178(&(Local_459[iVar0 /*45*/].f_30)) < 1f)
				{
					__LIB_2__::func_259(&uLocal_292);
				}
			}
			else if (__LIB_9__::func_178(&uLocal_292) > 1.5f)
			{
				if (!__LIB_0__::func_27(iLocal_131, 131072))
				{
					if (func_1007(38, 0))
					{
						__LIB_1__::func_561(&uLocal_292);
					}
				}
				else
				{
					__LIB_1__::func_561(&uLocal_292);
				}
			}
			else if (PLAYER::_0x72AD59F7B7FB6E24(PLAYER::GET_PLAYER_INDEX(), 1000))
			{
				__LIB_1__::func_561(&uLocal_292);
			}
		}
		iVar0++;
	}
}

int func_415(var uParam0, int iParam1, bool bParam2)
{
	char* sVar0;
	int iVar1;
	sVar0 = func_448(iParam1);
	if (__LIB_0__::func_27(iLocal_130, 2))
	{
		if (__LIB_0__::func_71(Global_35))
		{
			if (__LIB_1__::func_588(func_448(2), 0, 0, -1, -1, 0))
			{
				UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
			}
			__LIB_1__::func_721(7);
			__LIB_1__::func_681(&iLocal_130, 2);
		}
	}
	if (__LIB_0__::func_27(iLocal_130, iParam1))
	{
		if (!__LIB_1__::func_588(sVar0, 0, 0, -1, -1, 0))
		{
			if ((((iParam1 == 4 || iParam1 == 134217728) || iParam1 == 16777216) || iParam1 == 16384) || iParam1 == 67108864)
			{
				__LIB_0__::func_900(7);
			}
			__LIB_13__::func_89(uParam0, sVar0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
		}
		return 1;
	}
	if (!bParam2)
	{
		if (__LIB_0__::func_270())
		{
			return 0;
		}
	}
	if (__LIB_5__::func_352(sVar0))
	{
		__LIB_1__::func_561(&uLocal_304);
		__LIB_1__::func_683(&iLocal_130, iParam1);
		return 0;
	}
	if (!__LIB_1__::func_588(sVar0, 0, 0, -1, -1, 0))
	{
		__LIB_13__::func_89(uParam0, sVar0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
		__LIB_2__::func_259(&uLocal_304);
		fLocal_158 = 10000f;
		iLocal_177 = 0;
		if ((((iParam1 == 4 || iParam1 == 134217728) || iParam1 == 16777216) || iParam1 == 16384) || iParam1 == 67108864)
		{
			__LIB_0__::func_900(7);
		}
		return 0;
	}
	iVar1 = 0;
	if (iLocal_149 > 0)
	{
		__LIB_3__::func_760();
		UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
		iLocal_149 = 0;
	}
	switch (iParam1)
	{
		case 2:
			__LIB_12__::func_883(uParam0, sVar0, 1, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			__LIB_1__::func_718(7);
			__LIB_1__::func_643();
			__LIB_0__::func_745(7);
			iVar1 = 1;
			break;
		case 4:
			__LIB_12__::func_883(uParam0, sVar0, 1, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			iVar1 = 1;
			break;
		case 134217728:
			if (func_1011(&uLocal_304, &iLocal_67, &fLocal_158, 15f, 1097859072 /* Float: 15f */))
			{
				__LIB_12__::func_883(uParam0, sVar0, 1, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				iVar1 = 1;
			}
			break;
		case 8:
			__LIB_12__::func_883(uParam0, sVar0, 1, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			iVar1 = 1;
			break;
		case 512:
			if (func_1012(&uLocal_304, &iLocal_69, &fLocal_158, &iLocal_177))
			{
				__LIB_12__::func_883(uParam0, sVar0, 1, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				iVar1 = 1;
			}
			break;
		case 256:
			__LIB_12__::func_883(uParam0, sVar0, 1, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			iVar1 = 1;
			break;
		case 1024:
			__LIB_1__::func_681(&iLocal_130, 2048);
			if (!bLocal_191)
			{
				__LIB_12__::func_883(uParam0, sVar0, 1, 7500, 1, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				bLocal_191 = true;
			}
			else
			{
				UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
				__LIB_13__::func_89(uParam0, sVar0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			}
			iVar1 = 1;
			break;
		case 2048:
			__LIB_1__::func_681(&iLocal_130, 1024);
			__LIB_12__::func_883(uParam0, sVar0, 1, -1, 1, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			iVar1 = 1;
			break;
		case 16:
			__LIB_1__::func_718(7);
			__LIB_1__::func_643();
			__LIB_1__::func_681(&iLocal_130, 2097152);
			__LIB_12__::func_883(uParam0, sVar0, 1, -1, 1, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			iVar1 = 1;
			break;
		case 4096:
			__LIB_1__::func_681(&iLocal_130, 2097152);
			__LIB_1__::func_681(&iLocal_130, 8192);
			__LIB_1__::func_718(7);
			__LIB_1__::func_643();
			if (!bLocal_192)
			{
				__LIB_12__::func_883(uParam0, sVar0, 1, -1, 1, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				bLocal_192 = true;
			}
			else
			{
				UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
				__LIB_13__::func_89(uParam0, sVar0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			}
			iVar1 = 1;
			break;
		case 8192:
			__LIB_1__::func_718(7);
			__LIB_1__::func_643();
			__LIB_1__::func_681(&iLocal_130, 2097152);
			__LIB_1__::func_681(&iLocal_130, 4096);
			__LIB_12__::func_883(uParam0, sVar0, 1, -1, 1, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			iVar1 = 1;
			break;
		case 16384:
			UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
			__LIB_12__::func_883(uParam0, sVar0, 1, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			iVar1 = 1;
			break;
		case 32768:
			__LIB_1__::func_681(&iLocal_130, 65536);
			__LIB_1__::func_681(&iLocal_130, 524288);
			if (!bLocal_193)
			{
				__LIB_12__::func_883(uParam0, sVar0, 1, 7500, 1, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				bLocal_193 = true;
			}
			else
			{
				UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
				__LIB_13__::func_89(uParam0, sVar0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			}
			iVar1 = 1;
			break;
		case 65536:
			__LIB_1__::func_681(&iLocal_130, 32768);
			__LIB_12__::func_883(uParam0, sVar0, 1, -1, 1, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			iVar1 = 1;
			break;
		case 131072:
			__LIB_1__::func_681(&iLocal_130, 262144);
			UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
			__LIB_12__::func_883(uParam0, sVar0, 1, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			iVar1 = 1;
			break;
		case 262144:
			__LIB_1__::func_681(&iLocal_130, 131072);
			__LIB_12__::func_883(uParam0, sVar0, 1, -1, 1, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			iVar1 = 1;
			break;
		case 524288:
			__LIB_1__::func_681(&iLocal_130, 32768);
			bLocal_193 = false;
			__LIB_12__::func_883(uParam0, sVar0, 1, 7500, 1, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			iVar1 = 1;
			break;
		case 2097152:
			__LIB_1__::func_721(7);
			__LIB_1__::func_643();
			__LIB_1__::func_681(&iLocal_130, 4096);
			__LIB_1__::func_681(&iLocal_130, 8192);
			if (!bLocal_184)
			{
				__LIB_1__::func_681(&iLocal_130, 16);
			}
			__LIB_12__::func_883(uParam0, sVar0, 1, 7500, 1, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			iVar1 = 1;
			break;
		case 4194304:
			__LIB_1__::func_681(&iLocal_130, 8388608);
			__LIB_0__::func_745(7);
			__LIB_1__::func_721(7);
			__LIB_1__::func_643();
			__LIB_12__::func_883(uParam0, sVar0, 1, 7500, 1, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			iVar1 = 1;
			break;
		case 8388608:
			__LIB_1__::func_681(&iLocal_130, 4194304);
			__LIB_0__::func_745(7);
			__LIB_1__::func_718(7);
			__LIB_1__::func_643();
			__LIB_12__::func_883(uParam0, sVar0, 1, 7500, 1, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			iVar1 = 1;
			break;
		case 16777216:
			__LIB_12__::func_883(uParam0, sVar0, 1, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			iVar1 = 1;
			break;
		case 33554432:
			if (func_1013(&uLocal_304, ENTITY::GET_ENTITY_COORDS(Local_459[0 /*45*/], false, false), &fLocal_158, 10f, 1))
			{
				__LIB_12__::func_883(uParam0, sVar0, 1, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				iVar1 = 1;
			}
			break;
		case 67108864:
			if (func_1011(&uLocal_304, &iLocal_67, &fLocal_158, 15f, 1097859072 /* Float: 15f */))
			{
				__LIB_12__::func_883(uParam0, sVar0, 1, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				iVar1 = 1;
			}
			break;
		case 268435456:
			__LIB_12__::func_883(uParam0, sVar0, 1, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			iVar1 = 1;
			break;
		case 536870912:
			if (func_1013(&uLocal_304, func_187(24), &fLocal_158, -1082130432 /* Float: -1f */, 1))
			{
				__LIB_12__::func_883(uParam0, sVar0, 1, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				iVar1 = 1;
			}
			break;
	}
	if (iVar1 == 1)
	{
		__LIB_1__::func_561(&uLocal_304);
		__LIB_1__::func_683(&iLocal_130, iParam1);
	}
	return 0;
}

void func_416()
{
	if (!PED::DOES_GROUP_EXIST(iLocal_103))
	{
		func_854(&iLocal_67);
		iLocal_103 = PED::CREATE_GROUP(2);
		PED::SET_PED_CONFIG_FLAG(iLocal_67, 279, true);
		PED::SET_PED_AS_GROUP_LEADER(iLocal_67, iLocal_103, false);
		func_421(3, 1);
	}
	if (!PLAYER::_0x2009F8AB7A5E9D6D(PLAYER::GET_PLAYER_INDEX()))
	{
		func_421(3, 1);
		PLAYER::_0xAC22AA6DF4D1C1DE(PLAYER::GET_PLAYER_INDEX(), iLocal_67, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 4, 2, 0);
	}
}

bool func_417(int iParam0, char* sParam1, int iParam2)
{
	int iVar0;
	vector3 vVar1;
	if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(*iParam0, 0))
	{
		return true;
	}
	iVar0 = -1;
	if (TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(sParam1, &iVar0))
	{
		if (TASK::GET_PED_WAYPOINT_PROGRESS(*iParam0) >= (iVar0 - (1 + iParam2)))
		{
			return true;
		}
	}
	vVar1 = { __LIB_14__::func_81(sParam1, iParam2) };
	if (!__LIB_0__::func_86(vVar1))
	{
		if (__LIB_0__::func_266(*iParam0, vVar1, 10f, 0, 1))
		{
			return true;
		}
	}
	return false;
}

Vector3 func_420(int iParam0, char* sParam1, char* sParam2)
{
	vector3 vVar0;
	bool bVar12;
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(vLocal_695[iParam0 /*3*/]))
	{
		return 0f, 0f, 0f;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(vLocal_695[iParam0 /*3*/], false))
	{
		return 0f, 0f, 0f;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		if (!ANIMSCENE::_0xA9016536015DE29D(vLocal_695[iParam0 /*3*/], sParam2))
		{
			return 0f, 0f, 0f;
		}
		if (!ANIMSCENE::_0x23E33CB9F4A3F547(vLocal_695[iParam0 /*3*/], sParam2))
		{
			return 0f, 0f, 0f;
		}
	}
	bVar12 = !MISC::IS_STRING_NULL_OR_EMPTY(sParam2);
	if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(vLocal_695[iParam0 /*3*/], sParam1, &vVar0, bVar12, sParam2, 2))
	{
		return vVar0;
	}
	return 0f, 0f, 0f;
}

void func_421(int iParam0, bool bParam1)
{
	if (iLocal_661 == iParam0 && !bParam1)
	{
		return;
	}
	if (!PED::DOES_GROUP_EXIST(iLocal_103))
	{
		return;
	}
	if (!PED::_0x0455546F23FF08E4(iLocal_103))
	{
		return;
	}
	if (iParam0 == 4)
	{
		PED::_0xD5BD1B5318A81994(iLocal_103, 1);
		PED::_0x86FAFC18E3D4380C(iLocal_103, 0);
		PED::_0x9BBEAF8B0C007F1E(iLocal_67, 0);
		PED::_0xC99F104BDF8C7F5A(iLocal_67, 0);
		iLocal_661 = iParam0;
		func_1016(3);
	}
	else
	{
		if (iParam0 == 5)
		{
			iParam0 = 3;
		}
		iLocal_661 = iParam0;
		PED::SET_GROUP_FORMATION(iLocal_103, iLocal_661);
		PED::_0xD5BD1B5318A81994(iLocal_103, 0);
		PED::_0x86FAFC18E3D4380C(iLocal_103, 1);
		PED::_0x9BBEAF8B0C007F1E(iLocal_67, 1);
		PED::_0xC99F104BDF8C7F5A(iLocal_67, 1);
		if (iLocal_661 == 5)
		{
			PED::ADD_CUSTOM_FORMATION_LOCATION(iLocal_103, 2f, 0f, 0f, 0);
			PED::ADD_CUSTOM_FORMATION_LOCATION(iLocal_103, -2f, 0f, 0f, 1);
			PED::_0x0E9E95FDEDCC9D35(Global_35, 0, 0);
			PED::_0x0E9E95FDEDCC9D35(Global_35, 1, 1);
		}
		func_1016(0);
	}
}

bool func_422(int iParam0)
{
	if (!func_1017(iParam0))
	{
		return false;
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(vLocal_695[iParam0 /*3*/], false))
	{
		return true;
	}
	return false;
}

int func_423(int iParam0, vector3 vParam1, float fParam4, float fParam5, bool bParam6, float fParam7, bool bParam8, float fParam9, bool bParam10, int iParam11, float fParam12, bool bParam13, bool bParam14)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	__LIB_1__::func_448(iParam0, vParam1, 0, fParam5, bParam6, fParam7, bParam8, fParam12, bParam13, bParam14, 0);
	iVar1 = PED::GET_MOUNT(iParam0);
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		iVar2 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
	}
	bVar4 = __LIB_0__::func_94(iParam0, vParam1, 1);
	if (!__LIB_0__::func_899(fParam4))
	{
		if (bVar4 <= bParam8)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				__LIB_4__::func_89(fParam4, 0);
			}
		}
	}
	else if (bParam10 && bVar4 > bParam8)
	{
		__LIB_1__::func_561(fParam4);
	}
	if (__LIB_0__::func_899(fParam4))
	{
		if (bParam14)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, 1f);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar1, 1f);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar2) && VEHICLE::_IS_DRAFT_VEHICLE(iVar2))
		{
			iVar0 = 0;
			while (iVar0 < 6)
			{
				iVar3 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar2, iVar0);
				if (!ENTITY::IS_ENTITY_DEAD(iVar3))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar3, 1f);
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iVar2, PED::_0x46BF2A810679D6E6(iVar3, 1f));
				}
				iVar0++;
			}
		}
		if (__LIB_1__::func_583(fParam4) >= fParam9)
		{
			if (iParam0 == Global_35)
			{
				PLAYER::SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(PLAYER::PLAYER_ID());
				PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 28, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar1) && !__LIB_0__::func_491(iParam0, 501393341))
			{
				if (PED::IS_PED_ON_MOUNT(iParam0))
				{
					TASK::TASK_DISMOUNT_ANIMAL(iParam0, 0, 0, 0, 0, 0);
					return 1;
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar2) && !__LIB_0__::func_491(iParam0, -828834893))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(iParam0, 0, 0);
					return 1;
				}
			}
		}
		if (iParam0 == Global_35 && iParam11 == 0)
		{
			if (TASK::GET_IS_TASK_ACTIVE(iParam0, 8))
			{
				TASK::CLEAR_PED_TASKS(iParam0, true, false);
			}
			PED::SET_PED_RESET_FLAG(iParam0, 175, true);
		}
	}
	return 0;
}

bool func_426(var uParam0)
{
	if (func_406(2))
	{
		if (__LIB_9__::func_178(&uLocal_337) >= 10f)
		{
			__LIB_1__::func_561(&uLocal_337);
		}
		return true;
	}
	PED::SET_PED_RESET_FLAG(Global_35, 268, true);
	if (!__LIB_0__::func_899(&uLocal_355))
	{
		if (WEAPON::_0xF29A186ED428B552(Global_35, joaat("WEAPON_BOW")) && WEAPON::_0xAFFD0CCF31F469B8(iLocal_69) != joaat("WEAPON_BOW"))
		{
			__LIB_2__::func_259(&uLocal_355);
		}
	}
	else if (!WEAPON::_0xF29A186ED428B552(Global_35, joaat("WEAPON_BOW")) || WEAPON::_0xAFFD0CCF31F469B8(iLocal_69) == joaat("WEAPON_BOW"))
	{
		__LIB_1__::func_561(&uLocal_355);
	}
	else if (__LIB_9__::func_178(&uLocal_355) > 0.5f)
	{
		__LIB_1__::func_561(&uLocal_355);
		__LIB_1__::func_721(7);
		UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
		func_324(2);
	}
	if (!__LIB_0__::func_27(iLocal_132, 32768))
	{
		if (__LIB_6__::func_912(Global_35, iLocal_67, sLocal_234, 1112014848 /* Float: 50f */) && !__LIB_0__::func_48(Global_35, iLocal_67, 6f, 1))
		{
			__LIB_0__::func_745(7);
			__LIB_1__::func_683(&iLocal_132, 32768);
		}
	}
	else if (!func_1000(1))
	{
		if (!__LIB_0__::func_899(&uLocal_337))
		{
			__LIB_1__::func_718(7);
			__LIB_1__::func_643();
			__LIB_2__::func_259(&uLocal_337);
		}
		else if (__LIB_9__::func_178(&uLocal_337) > 0f)
		{
			func_407(1);
		}
	}
	if (!func_410(&Local_50, 22))
	{
		if (!__LIB_0__::func_899(&uLocal_400))
		{
			if (func_603(21) != 3)
			{
				return false;
			}
			else
			{
				__LIB_2__::func_259(&uLocal_400);
				return false;
			}
		}
		else if (__LIB_9__::func_178(&uLocal_400) < 1f)
		{
			return false;
		}
	}
	if (func_411(22, 0) == 3 || func_1019(22, 1) == 1)
	{
		if (!__LIB_0__::func_27(iLocal_132, 32768))
		{
			if (__LIB_0__::func_899(&uLocal_400))
			{
				__LIB_1__::func_561(&uLocal_400);
			}
			if (!func_1000(1))
			{
				if (!__LIB_0__::func_899(&uLocal_337))
				{
					__LIB_1__::func_718(7);
					__LIB_1__::func_643();
					__LIB_2__::func_259(&uLocal_337);
				}
				else if (__LIB_9__::func_178(&uLocal_337) > 0f)
				{
					func_407(1);
				}
			}
		}
	}
	return false;
}

void func_427()
{
	int iVar0;
	iVar0 = 3;
	if (TASK::IS_PED_RUNNING(Global_35))
	{
		if (!PED::_GET_PED_CROUCH_MOVEMENT(Global_35))
		{
			if (func_603(24) == 3)
			{
				iVar0 = func_411(27, 0);
			}
		}
	}
	if (PED::IS_PED_STOPPED(Global_35) || TASK::IS_PED_STILL(Global_35))
	{
		if (!__LIB_0__::func_899(&uLocal_310))
		{
			__LIB_2__::func_259(&uLocal_310);
		}
		if (__LIB_9__::func_178(&uLocal_310) >= 15f)
		{
			func_411(29, 0);
		}
	}
	else
	{
		__LIB_1__::func_561(&uLocal_310);
	}
	if (iVar0 != 3)
	{
		return;
	}
}

void func_428()
{
	vector3 vVar0;
	int iVar3;
	float fVar4;
	vector3 vVar5;
	vector3 vVar8;
	vector3 vVar11;
	vector3 vVar14;
	iVar3 = func_850(&Global_35, &vVar0, 1);
	if (iVar3 == 4)
	{
		return;
	}
	if (Local_459[iVar3 /*45*/].f_14 == 1)
	{
		if (__LIB_0__::func_899(&uLocal_301))
		{
			__LIB_1__::func_561(&uLocal_301);
		}
		return;
	}
	fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vVar0, true);
	if (!__LIB_0__::func_899(&uLocal_301))
	{
		fLocal_159 = fVar4;
		__LIB_2__::func_259(&uLocal_301);
		return;
	}
	else if (__LIB_9__::func_178(&uLocal_301) > 5f)
	{
		if (fVar4 >= fLocal_159)
		{
			fLocal_159 = fVar4;
			__LIB_2__::func_259(&uLocal_301);
		}
		else
		{
			fLocal_159 = fVar4;
			__LIB_2__::func_259(&uLocal_301);
			return;
		}
	}
	else
	{
		return;
	}
	if (fLocal_159 > 30f)
	{
	}
	else
	{
		return;
	}
	__LIB_10__::func_397(Global_35, sLocal_233, &vVar5);
	__LIB_10__::func_397(Global_35, sLocal_234, &vVar8);
	__LIB_10__::func_397(Global_35, sLocal_235, &vVar11);
	__LIB_10__::func_397(Global_35, sLocal_236, &vVar14);
	if (((MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vVar5, true) > 17f && MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vVar8, true) > 17f) && MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vVar11, true) > 17f) && MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vVar14, true) > 17f)
	{
		if (!__LIB_0__::func_899(&uLocal_298))
		{
			func_1007(26, 0);
			__LIB_2__::func_259(&uLocal_298);
		}
		else if (__LIB_9__::func_178(&uLocal_298) > 14f)
		{
			func_1007(26, 0);
			__LIB_2__::func_259(&uLocal_298);
		}
	}
}

void func_429()
{
	int iVar0;
	int iVar1;
	if (!bLocal_196)
	{
		if (__LIB_6__::func_690(Global_35, 9))
		{
			iVar0 = __LIB_3__::func_576(Global_35, 9);
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < 4)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_459[iVar1 /*45*/]))
				{
					if (Local_459[iVar1 /*45*/] == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0))
					{
						iLocal_454 = iVar1;
					}
				}
				iVar1++;
			}
			__LIB_2__::func_259(&uLocal_370);
			bLocal_196 = true;
		}
	}
	else if (__LIB_9__::func_178(&uLocal_370) > 6f)
	{
		bLocal_196 = false;
	}
}

void func_430()
{
	if (!__LIB_0__::func_27(iLocal_132, 1073741824 /* Float: 2f */))
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_70, -1379.883f, 1352.134f, 212.8413f, 1f, -1, 0.25f, 0, 40000f);
		__LIB_1__::func_683(&iLocal_132, 1073741824 /* Float: 2f */);
	}
	if (iLocal_427 == 2)
	{
		if (!__LIB_0__::func_48(Global_35, iLocal_69, (__LIB_1__::func_136(7) * 0.8f), 0))
		{
			func_1022();
			iLocal_427 = 0;
			return;
		}
		else if (__LIB_0__::func_48(Global_35, iLocal_69, (__LIB_1__::func_136(7) * 0.6f), 0) && !__LIB_0__::func_266(iLocal_69, func_187(31), 15f, 1, 1))
		{
			func_1023();
			iLocal_427 = 1;
			return;
		}
	}
	if (iLocal_427 == 0)
	{
		if (__LIB_0__::func_48(Global_35, iLocal_69, (__LIB_1__::func_136(7) * 0.7f), 0))
		{
			iLocal_427 = 2;
			TASK::CLEAR_PED_TASKS(iLocal_69, true, false);
		}
		else if (!__LIB_0__::func_163(iLocal_69, 2043986356))
		{
			func_1022();
		}
	}
	if (iLocal_427 == 1)
	{
		if (!__LIB_0__::func_48(Global_35, iLocal_69, (__LIB_1__::func_136(7) * 0.7f), 0) || __LIB_0__::func_266(iLocal_69, func_187(31), 15f, 1, 1))
		{
			iLocal_427 = 2;
			TASK::CLEAR_PED_TASKS(iLocal_69, true, false);
		}
		else if (!__LIB_0__::func_163(iLocal_69, 713668775))
		{
			func_1022();
		}
	}
}

bool func_431(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 >= 32)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 >= 5)
	{
		return false;
	}
	iVar2 = __LIB_0__::func_771(iVar0);
	if (__LIB_0__::func_1(Local_50[iVar1], iVar2))
	{
		return false;
	}
	return __LIB_0__::func_1(Local_50.f_6[iVar1], iVar2);
}

void func_432(int iParam0)
{
	if (iLocal_47 == iParam0)
	{
		return;
	}
	if (iLocal_47 != 0)
	{
		func_348(iLocal_47);
	}
	iLocal_47 = iParam0;
	switch (iLocal_47)
	{
		case 0:
			break;
		case 7:
			break;
		case 6:
			iLocal_138 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, joaat("AMMO_ARROW"));
			break;
		case 5:
			break;
		case 4:
			break;
		case 2:
			break;
		case 8:
			break;
		case 3:
			break;
	}
}

void func_433(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (func_603(iParam0) != 9)
	{
		return;
	}
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 >= 32)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 >= 5)
	{
		return;
	}
	iVar2 = __LIB_0__::func_771(iVar0);
	__LIB_0__::func_516(&(Local_50.f_6[iVar1]), iVar2);
}

void func_434()
{
	vector3 vVar0;
	int iVar3;
	float fVar4;
	if (Local_50.f_12 != 83)
	{
		return;
	}
	if (func_603(51) != 0)
	{
		return;
	}
	iVar3 = func_850(&Global_35, &vVar0, 14);
	if (iVar3 == 4)
	{
		return;
	}
	fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vVar0, true);
	if (fVar4 < fLocal_159)
	{
		fLocal_159 = fVar4;
		__LIB_1__::func_561(&uLocal_322);
	}
	else
	{
		if (!__LIB_0__::func_899(&uLocal_322))
		{
			__LIB_2__::func_259(&uLocal_322);
		}
		if (__LIB_9__::func_178(&uLocal_322) > 10f)
		{
			func_411(51, 0);
		}
	}
}

bool func_435()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if ((Local_459[iVar0 /*45*/].f_14 == 4 && __LIB_0__::func_48(Global_35, Local_459[iVar0 /*45*/], 3f, 0)) && iVar0 == iLocal_454)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_436(int iParam0)
{
	var uVar0;
	int iVar4;
	iVar4 = PED::_0x4642182A298187D0(Global_35, iParam0, &uVar0, 4, 0);
	if ((iVar4 == 3 || iVar4 == 4) || iVar4 == 2)
	{
		return true;
	}
	return false;
}

void func_439(int iParam0, int iParam1, float fParam2, float fParam3, float fParam4, int iParam5)
{
	vector3 vVar0;
	int iVar3;
	struct<4> Var4;
	int iVar8;
	int iVar9;
	iVar8 = 1;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::_0x608BC6A6AACD5036(&Var4, iParam0, iParam1, 0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Var4.f_3))
			{
				iVar3 = __LIB_6__::func_140(Var4.f_3);
				if (__LIB_0__::func_144(iVar3, 0))
				{
					if (iParam5 == 0)
					{
						PED::_0xED00D72F81CF7278(Var4.f_3, 0, 1);
						vVar0.x = fParam2;
						vVar0.f_1 = fParam3;
						vVar0.f_2 = fParam4;
						if (__LIB_0__::func_86(vVar0))
						{
							vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, -1f, 0f) };
							__LIB_0__::func_634(&vVar0, 50, 10, 0);
						}
						ENTITY::SET_ENTITY_COORDS(Var4.f_3, vVar0, false, false, true, true);
					}
					func_1028(&iParam0, iVar3, &iVar8, 1, -142743235);
				}
				else if (ENTITY::IS_ENTITY_A_PED(Var4.f_3))
				{
					iVar9 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var4.f_3);
					if (PED::IS_PED_HUMAN(iVar9))
					{
						PED::_0xED00D72F81CF7278(Var4.f_3, 0, 1);
						vVar0.x = fParam2;
						vVar0.f_1 = fParam3;
						vVar0.f_2 = fParam4;
						if (__LIB_0__::func_86(vVar0))
						{
							vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, -1f, 0f) };
							__LIB_0__::func_634(&vVar0, 50, 10, 0);
						}
						ENTITY::SET_ENTITY_COORDS(Var4.f_3, vVar0, false, PED::_IS_PED_HOGTIED(iVar9), true, true);
					}
				}
			}
		}
	}
}

bool func_440(var uParam0, bool bParam1)
{
	if (iLocal_455 == 4)
	{
		return false;
	}
	if (ENTITY::_0x61914209C36EFDDB(Local_459[iLocal_455 /*45*/]) == 8 || ENTITY::_0x61914209C36EFDDB(Local_459[iLocal_455 /*45*/]) == 9)
	{
		return true;
	}
	if (bParam1)
	{
		if (ENTITY::_0x61914209C36EFDDB(Local_459[iLocal_455 /*45*/]) != 7)
		{
			if (ENTITY::_0x61914209C36EFDDB(Local_459[iLocal_455 /*45*/]) != 5 && ENTITY::_0x61914209C36EFDDB(Local_459[iLocal_455 /*45*/]) != 4)
			{
				func_415(uParam0, 4194304, 1);
			}
			else
			{
				func_415(uParam0, 8388608, 1);
			}
			return true;
		}
	}
	else if (ENTITY::_0x61914209C36EFDDB(Local_459[iLocal_455 /*45*/]) != 7)
	{
		if (ENTITY::_0x61914209C36EFDDB(Local_459[iLocal_455 /*45*/]) != 5 && ENTITY::_0x61914209C36EFDDB(Local_459[iLocal_455 /*45*/]) != 4)
		{
			func_415(uParam0, 2097152, 1);
			return true;
		}
	}
	return false;
}

char* func_443(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "RPRSN_SET";
		case 1:
			return "PRSN_START";
		case 2:
			return "RPRSN_RIDEOUT";
		case 3:
			return "RPRSN_OFFROAD";
		case 4:
			return "RPRSN_OFFROAD2";
		case 5:
			return "RPRSN_RIDEOUT2";
		case 8:
			return "RPRSN_GRASS";
		case 9:
			return "RPRSN_START";
		case 10:
			return "RPRSN_WIND";
		case 11:
			return "RPRSN_STOP";
		case 12:
			return "RPRSN_MOUNT";
		case 13:
			return "RPRSN_SET2";
		case 14:
			return "RPRSN_ATER";
		case 15:
			return "RPRSN_ATEOFF";
		case 16:
			return "RPRSN_TLKNONE";
		case 7:
			return "RPRSN_TLKWNT";
		case 17:
			return "RPRSN_TLKODR";
		case 6:
			return "RPRSN_TLKBOTH";
		case 19:
			return "RPRSN_TRACKS";
		case 20:
			return "RPRSN_TRACKSNOW";
		case 18:
			return "RPRSN_EAGLE_EYE";
		case 21:
			return "RPRSN_DISMOUNT";
		case 22:
			return "PRSN_NEED_BOW";
		case 23:
			return "PRSN_BOW_REMIND";
		case 24:
			return "RPRSN_QUIET";
		case 25:
			return "RPRSN_LOW";
		case 26:
			return "RPRSN_WWAY";
		case 27:
			return "RPRSN_DONTRUN";
		case 28:
			return "RPRSN_REMIND";
		case 29:
			return "RPRSN_COMEON";
		case 30:
			return "RPRSN_FIRST";
		case 31:
			return "RPRSN_BOW";
		case 32:
			return "RPRSN_TIP";
		case 33:
			return "RPRSN_CLEAN";
		case 34:
			return "RPRSN_NOW";
		case 35:
			return "RPRSN_NOGUN";
		case 36:
			return "RPRSN_FIRED";
		case 37:
			return "RPRSN_MISS";
		case 38:
			return "RPRSN_SCARE";
		case 39:
			return "RPRSN_KILL1";
		case 40:
			return "RPRSN_KILL2";
		case 41:
			return "RPRNS_BADKILL";
		case 42:
			return "RPRSN_KILL2_WND";
		case 43:
			return "RPRSN_KILL2_BL";
		case 44:
			return "RPRSN_WOUNDED";
		case 45:
			return "RPRSN_TOWOUND";
		case 46:
			return "RPRSN_FINISH";
		case 47:
			return "RPRSN_OVERKILL1";
		case 48:
			return "RPRSN_OVERKILL2";
		case 49:
			return "PRS_CHANGEDEER";
		case 50:
			return "RPRSN_PICK";
		case 51:
			return "RPRSN_TIME";
		case 52:
			return "RPRSN_OTHER";
		case 53:
			return "RPRSN_PUT";
		case 54:
			return "RPRSN_WITHC";
		case 55:
			return "RPRSN_DAWD2";
		case 56:
			return "RPRSN_HURRY";
		case 57:
			return "RPRSN_AHURRY";
		case 58:
			return "RPRSN_DONE";
		case 59:
			return "RPRSN_PREBOW";
		case 60:
			return "RPRSN_PREGUN";
		case 62:
			return "RPRSN_COLTBNT2B";
		case 61:
			return "RPRSN_COLTBNT2";
		case 63:
			return "RPRSN_BEAR";
		case 64:
			return "RPRSN_BEAR2";
		case 65:
			return "RPRSN_OFF";
		case 66:
			return "RPRSN_CLOSE";
		case 67:
			return "RPRSN_AIM";
		case 68:
			return "RPSRN_BEAR2";
		case 69:
			return "RPRSN_REACT";
		case 70:
			return "RPRSN_ATTACK";
		case 71:
			return "RPRSN_KILLBAER";
		case 72:
			return "RPRSN_B_FLED";
		case 73:
			return "RPRSN_B_RESPAWN";
		case 74:
			return "RPRSN_POSTBEAR1";
		case 75:
			return "RPRSN_POSTBEAR2";
		case 77:
			return "RPRSN_COLTER";
		case 76:
			return "RPRSN_ARRIVE";
		case 78:
			return "RPRSN_TOPEARS";
		case 79:
			return "RPRSN_HITCH";
		case 80:
			return "RPRSN_WITHOUT";
		case 81:
			return "PRSN_SKIN_NOW";
		case 82:
			return "PRSN_SKIN_HURRY";
		default:
			break;
	}
	return "";
}

bool func_446()
{
	if (__LIB_0__::func_27(iLocal_132, 64))
	{
		return true;
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(vLocal_695[10 /*3*/]))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(vLocal_695[10 /*3*/], true, false))
		{
			__LIB_1__::func_683(&iLocal_132, 64);
			return true;
		}
	}
	else
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		{
			return false;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_66))
		{
			return false;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_68))
		{
			return false;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_86))
		{
			return false;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_87))
		{
			return false;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_85))
		{
			return false;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_88))
		{
			return false;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_89))
		{
			return false;
		}
		vLocal_695[10 /*3*/] = ANIMSCENE::_CREATE_ANIM_SCENE("script@rcm@prsn@leadin@rsc2@leadin", 0, "pl_greet", false, true);
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(vLocal_695[10 /*3*/]))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(vLocal_695[10 /*3*/], "ARTHUR", Global_35, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(vLocal_695[10 /*3*/], "MrPearson", iLocal_66, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(vLocal_695[10 /*3*/], "UNCLE", iLocal_68, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(vLocal_695[10 /*3*/], "p_bottleJD01x", iLocal_86, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(vLocal_695[10 /*3*/], "P_CHAIR06X", iLocal_87, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(vLocal_695[10 /*3*/], "P_CLEAVER01X", iLocal_85, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(vLocal_695[10 /*3*/], "P_KETTLE03X", iLocal_88, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(vLocal_695[10 /*3*/], "p_ladle02x", iLocal_89, 0);
			ANIMSCENE::LOAD_ANIM_SCENE(vLocal_695[10 /*3*/]);
		}
	}
	return false;
}

bool func_447()
{
	if (__LIB_0__::func_27(iLocal_132, 512))
	{
		return true;
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_143))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_143, true, false))
		{
			__LIB_1__::func_683(&iLocal_132, 512);
			return true;
		}
	}
	else
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		{
			return false;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_67))
		{
			return false;
		}
		iLocal_143 = ANIMSCENE::_CREATE_ANIM_SCENE("script@rcm@prsn@leadin@rsc2@wnt_arthurcharlesarrive", 0, "Main", false, true);
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_143))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_143, "Arthur", Global_35, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_143, "CharlesSmith", iLocal_67, 0);
			ANIMSCENE::LOAD_ANIM_SCENE(iLocal_143);
		}
	}
	return false;
}

char* func_448(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return "PRS1_O_MOUNT";
		case 4:
			return "PRS1_O_FOLLOW";
		case 8:
			return "PRS1_O_BOW";
		case 134217728:
			return "PRS1_O_FOLLOW";
		case 512:
			return "PRS1_O_MOUNT2";
		case 256:
			return "PRS1_O_KILL02";
		case 1024:
			return "PRS1_BC_CARRY0";
		case 2048:
			return "PRS1_BC_CARRY1";
		case 16:
			return "PRS1_BC_HORSE";
		case 4096:
			return "PRS1_BC_PLACE0";
		case 8192:
			return "PRS1_BC_PLACE1";
		case 16384:
			return "PRS1_O_COLTER";
		case 32768:
			return "PRS1_BC_DROP0";
		case 65536:
			return "PRS1_BC_DROP";
		case 131072:
			return "PRS1_BC_REMOVE0";
		case 262144:
			return "PRS1_BC_REMOVE1";
		case 524288:
			return "PRS1_O_PICK02";
		case 2097152:
			return "PRS1_O_RECOVER";
		case 4194304:
			return "PRS1_O_RECOVER";
		case 8388608:
			return "PRS1_O_PUT02";
		case 16777216:
			return "PRS1_O_WAIT";
		case 33554432:
			return "PRS1_O_HUNT";
		case 67108864:
			return "PRS1_O_COLTER_A";
		case 268435456:
			return "PRS1_O_SKIN";
		case 536870912:
			return "PRS1_O_HITCH";
	}
	return "";
}

int func_451(var uParam0)
{
	char* sVar0;
	char* sVar1;
	bool bVar2;
	if (!__LIB_0__::func_27(iLocal_132, 256))
	{
		if (__LIB_2__::func_157(iLocal_112, Global_36))
		{
			ANIMSCENE::SET_ANIM_SCENE_BOOL(vLocal_695[10 /*3*/], "Loop_wait", true, false);
			iLocal_146 = 3;
			__LIB_2__::func_259(&uLocal_328);
			__LIB_1__::func_683(&iLocal_132, 256);
		}
	}
	else if (iLocal_147 < 8)
	{
		if (__LIB_9__::func_178(&uLocal_328) > IntToFloat(iLocal_146) && !__LIB_6__::func_904())
		{
			bVar2 = true;
			if (iLocal_147 == 0)
			{
				sVar0 = "pl_callover_3";
				bVar2 = false;
			}
			else if (iLocal_147 == 1)
			{
				sVar0 = "pl_callover_1";
				bVar2 = false;
			}
			else if (iLocal_147 == 2)
			{
				sVar0 = "pl_callover_2";
				bVar2 = false;
			}
			else if (iLocal_147 == 3)
			{
				sVar0 = "pl_callover_4";
				bVar2 = false;
			}
			else if (iLocal_147 == 4)
			{
				sVar0 = "pl_callover_5";
				bVar2 = false;
			}
			else if (iLocal_147 == 5)
			{
				sVar0 = "pl_callover_6";
				bVar2 = false;
			}
			else if (iLocal_147 == 6)
			{
				sVar0 = "pl_waveover_1";
				sVar1 = "PRS_RSC2_LI_CO7";
			}
			else if (iLocal_147 == 7)
			{
				sVar0 = "pl_waveover_2";
				bVar2 = false;
			}
			if (!bVar2 || __LIB_12__::func_876(uParam0, sVar1, 0))
			{
				if (func_853(10, sVar0, 1))
				{
					iLocal_147++;
					iLocal_146 = MISC::GET_RANDOM_INT_IN_RANGE(10, 15);
					if (iLocal_147 == 8)
					{
						__LIB_1__::func_561(&uLocal_328);
					}
					else
					{
						__LIB_2__::func_259(&uLocal_328);
					}
				}
			}
		}
	}
	if (__LIB_0__::func_393(Global_35, iLocal_113, 0, 1) || __LIB_0__::func_393(Global_35, iLocal_115[3], 0, 1))
	{
		if (ENTITY::IS_ENTITY_IN_VOLUME(Local_459[iLocal_455 /*45*/], iLocal_113, true, 0) || ENTITY::IS_ENTITY_IN_VOLUME(Local_459[iLocal_455 /*45*/], iLocal_115[3], true, 0))
		{
			if (!bLocal_224)
			{
				if (ENTITY::_0x61914209C36EFDDB(Local_459[iLocal_455 /*45*/]) == 6)
				{
					bLocal_224 = true;
					CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
				}
			}
			else
			{
				CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			}
			if (ENTITY::_0x61914209C36EFDDB(Local_459[iLocal_455 /*45*/]) == 3)
			{
				__LIB_0__::func_325(&iLocal_81);
				__LIB_0__::func_325(&iLocal_82);
				return 6;
			}
			else if (!__LIB_0__::func_899(&uLocal_334))
			{
				if (__LIB_0__::func_48(Local_459[iLocal_455 /*45*/], iLocal_66, 2.5f, 0))
				{
					__LIB_4__::func_89(&uLocal_334, 0);
				}
			}
			else if (__LIB_9__::func_178(&uLocal_334) > 3f)
			{
				TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(Global_35, Local_459[iLocal_455 /*45*/], -1346.16f, 2404.156f, 306.0672f, 1f, 1);
				__LIB_1__::func_561(&uLocal_334);
			}
			else if (!__LIB_0__::func_48(Local_459[iLocal_455 /*45*/], iLocal_66, 2.5f, 0))
			{
				__LIB_1__::func_561(&uLocal_334);
			}
		}
		else
		{
			if (__LIB_0__::func_899(&uLocal_334))
			{
				__LIB_1__::func_561(&uLocal_334);
			}
			if (!PED::_IS_PED_CARRYING(Global_35))
			{
				if (__LIB_0__::func_27(iLocal_132, 256))
				{
					if (!__LIB_0__::func_899(&uLocal_403))
					{
						__LIB_2__::func_259(&uLocal_403);
					}
					else if (__LIB_9__::func_178(&uLocal_403) > 4f)
					{
						if (!AUDIO::_0xFE5C6177064BD390(1))
						{
							__LIB_1__::func_561(&uLocal_403);
							func_411(80, 0);
						}
					}
				}
			}
		}
	}
	else if (__LIB_0__::func_899(&uLocal_334))
	{
		__LIB_1__::func_561(&uLocal_334);
	}
	return 7;
}

void func_455(bool bParam0)
{
	if (!bParam0)
	{
		AUDIO::_0x660A8F876DF1D4F8(25);
		AUDIO::_0x660A8F876DF1D4F8(21);
		AUDIO::_0x660A8F876DF1D4F8(19);
	}
	AUDIO::_0x0D7FD6A55FD63AEF(25, 3, bParam0);
	AUDIO::_0x0D7FD6A55FD63AEF(21, 3, bParam0);
	AUDIO::_0x0D7FD6A55FD63AEF(19, 3, bParam0);
	if (bParam0)
	{
		PED::_0x1E017404784AA6A3(iLocal_67, joaat("RPRSN_RIDE2"));
	}
	else
	{
		PED::_0x2B4CE170DE09F346(iLocal_67, joaat("RPRSN_RIDE2"));
	}
}

bool func_458()
{
	int iVar0;
	if (iLocal_455 >= 4)
	{
		return false;
	}
	iVar0 = func_1056();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0) == Local_459[iLocal_455 /*45*/])
		{
			return true;
		}
	}
	return false;
}

void func_459()
{
	if (func_603(81) != 3)
	{
		return;
	}
	if (!__LIB_0__::func_899(&uLocal_325))
	{
		__LIB_2__::func_259(&uLocal_325);
	}
	if (__LIB_1__::func_592(&uLocal_325) < 11000)
	{
		return;
	}
	if (func_1007(82, 0))
	{
		__LIB_2__::func_259(&uLocal_325);
	}
}

void func_496(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	struct<2> Var2;
	struct<2> Var4;
	int iVar6;
	int iVar7;
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
		__LIB_8__::func_366(__LIB_0__::func_76(iParam0), iVar6, __LIB_0__::func_871());
	}
	else if (iVar0 == 8)
	{
		__LIB_8__::func_367(__LIB_0__::func_76(iParam0), iVar6, __LIB_0__::func_871(), __LIB_0__::func_113());
	}
	if (!__LIB_0__::func_291(iParam0) == 5 && !__LIB_0__::func_291(iParam0) == 6)
	{
		iVar9 = __LIB_11__::func_377(iParam0, &iVar7, &iVar8);
		if (iVar9 != 176656832)
		{
			__LIB_4__::func_253(iVar9, iVar7, -469960592, iVar8, 1, 1, 0);
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
						func_328(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_328(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_328(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_328(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_328(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_328(joaat("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_328(joaat("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_328(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_328(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_328(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_328(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_328(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_328(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_328(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_328(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_328(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_328(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_328(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_328(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_328(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_328(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_328(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_328(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_328(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_328(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_1100();
						func_1101(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
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
						func_328(joaat("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
							func_496(Global_1347702[21 /*49*/].f_15, 0, 0, 0, 0);
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
							func_496(Global_1347702[82 /*49*/].f_15, 0, 0, 0, 0);
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
							func_496(Global_1347702[83 /*49*/].f_15, 0, 0, 0, 0);
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
						func_328(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_328(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
		func_1134();
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
							func_328(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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

Vector3 func_500(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10)
{
	vector3 vVar0;
	vVar0 = { func_1141(vParam0, iParam3, iParam4, iParam5, iParam6, 1, iParam7, bParam8, bParam9, bParam10, -1, 1103626240 /* Float: 25f */) };
	if (__LIB_0__::func_86(vVar0))
	{
		vVar0 = { func_1141(vParam0, iParam3, iParam4, 0, 1, 1, iParam7, bParam8, 0, 0, -1, 1103626240 /* Float: 25f */) };
	}
	return vVar0;
}

void func_504(bool bParam0, bool bParam1)
{
	vector3 vVar0;
	var uVar3;
	var uVar4;
	if (__LIB_0__::func_2() == -1)
	{
		__LIB_6__::func_775();
	}
	else
	{
		return;
	}
	__LIB_0__::func_591();
	Global_40.f_9.f_14 = __LIB_0__::func_23();
	Global_40.f_9.f_20 = LAW::_GET_BOUNTY_FOR_PLAYER(PLAYER::GET_PLAYER_INDEX());
	Global_40.f_11999 = SAVE::_0xB00CE33465B5406D(1, "startup");
	if (bParam0 && !bParam1)
	{
		if (__LIB_0__::func_826())
		{
			__LIB_0__::func_322(Global_1310720.f_1);
		}
		else if (__LIB_0__::func_61() == __LIB_1__::func_447(Global_36, 1) && __LIB_0__::func_592() != 2)
		{
			__LIB_0__::func_322(Global_40.f_6);
			Global_40.f_9 = 1;
		}
		else
		{
			__LIB_0__::func_322(Global_36);
		}
		__LIB_1__::func_627(Global_36, &vVar0, &uVar4);
		if (!__LIB_0__::func_826())
		{
			if (__LIB_0__::func_62(vVar0, Global_36) < __LIB_0__::func_62(Global_40.f_9.f_7, Global_36))
			{
				__LIB_0__::func_322(vVar0);
				Global_40.f_9 = uVar4;
			}
			else
			{
				Global_40.f_9 = 0;
			}
		}
		Global_40.f_9.f_15 = __LIB_1__::func_447(Global_40.f_9.f_7, 1);
	}
	else if (!bParam0)
	{
		__LIB_1__::func_627(Global_36, &(Global_40.f_9.f_7), &(Global_40.f_9));
		MISC::OVERRIDE_SAVE_HOUSE(true, Global_40.f_9.f_7, 0f, true, &vVar0, &uVar3);
	}
	if (!bParam1)
	{
		__LIB_0__::func_7(&Global_1935630, 8192);
	}
	func_1151();
}

int func_506(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			func_506(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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
	func_1158(iParam0, iParam1);
	return 1;
}

void func_524(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_12__::func_644(uParam0) == 0)
	{
		func_997();
		if (!__LIB_0__::func_293(15))
		{
			__LIB_13__::func_72(15);
		}
		if (!__LIB_0__::func_293(55))
		{
			__LIB_13__::func_72(55);
		}
		if (!__LIB_0__::func_293(36))
		{
			__LIB_13__::func_72(36);
		}
		if (!__LIB_0__::func_293(47))
		{
			__LIB_13__::func_72(47);
		}
		if (!__LIB_0__::func_293(9))
		{
			__LIB_13__::func_72(9);
		}
	}
	WEAPON::_0xA3716A77DCF17424(Global_35, joaat("WEAPON_BOW"), 1);
	__LIB_8__::func_820(7);
	__LIB_1__::func_643();
	func_849();
	UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
	func_390();
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_69))
	{
		if (AITRANSPORT::_0xF382C92CCC1CCDBC(iLocal_69, 0, 0))
		{
			AITRANSPORT::_0xBA8818212633500A(iLocal_69, 0, 0);
		}
	}
	__LIB_4__::func_509(0);
	__LIB_2__::func_480(&Local_816, 1, 1, 1, 0);
	vLocal_834.f_2 = 0;
	__LIB_0__::func_325(&iLocal_76);
	__LIB_0__::func_325(&iLocal_77);
	__LIB_0__::func_325(&iLocal_78);
	__LIB_0__::func_325(&iLocal_79);
	__LIB_0__::func_325(&iLocal_80);
	__LIB_0__::func_325(&iLocal_81);
	__LIB_0__::func_325(&iLocal_82);
	__LIB_4__::func_16(&uLocal_658);
	__LIB_4__::func_16(&uLocal_659);
	__LIB_0__::func_172(iLocal_114);
	__LIB_0__::func_172(iLocal_105);
	__LIB_0__::func_172(iLocal_106);
	__LIB_0__::func_172(iLocal_111);
	__LIB_0__::func_172(iLocal_108);
	__LIB_0__::func_172(iLocal_109);
	__LIB_0__::func_172(iLocal_110);
	__LIB_0__::func_172(iLocal_112);
	__LIB_0__::func_172(iLocal_113);
	__LIB_0__::func_172(iLocal_107);
	__LIB_0__::func_172(iLocal_104);
	func_1176();
	__LIB_1__::func_721(7);
	__LIB_0__::func_904(7, 0);
	__LIB_0__::func_745(7);
	__LIB_5__::func_305(7);
	func_1177(&uLocal_428, 0, 1);
	func_1177(&iLocal_434, 0, 1);
	func_1177(&iLocal_438, 0, 1);
	func_1177(&iLocal_442, 0, 1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		__LIB_4__::func_866(&(iLocal_90[iVar0]), 1, 1);
		iVar0++;
	}
	if (ENTITY::_0x1FF441D7954F8709(iLocal_99))
	{
		ENTITY::_0xD2B9C78537ED5759(iLocal_99);
	}
	if (ENTITY::_0x1FF441D7954F8709(iLocal_100))
	{
		ENTITY::_0xD2B9C78537ED5759(iLocal_100);
	}
	if (ENTITY::_0x1FF441D7954F8709(iLocal_101))
	{
		ENTITY::_0xD2B9C78537ED5759(iLocal_101);
	}
	if (ENTITY::_0x1FF441D7954F8709(iLocal_102))
	{
		ENTITY::_0xD2B9C78537ED5759(iLocal_102);
	}
	if (CAM::_0x927B810E43E99932(&Local_663))
	{
		CAM::_0x0A5A4F1979ABB40E(&Local_663);
	}
	if (CAM::_0x927B810E43E99932(&Local_679))
	{
		CAM::_0x0A5A4F1979ABB40E(&Local_679);
	}
	if (CAM::_0xDD0B7C5AE58F721D(&Local_663))
	{
		CAM::_0x798BE43C9393632B(&Local_663);
	}
	if (CAM::_0xDD0B7C5AE58F721D(&Local_679))
	{
		CAM::_0x798BE43C9393632B(&Local_679);
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_459[iVar1 /*45*/]))
		{
			if (TASK::_0x0CCFE72B43C9CF96(Local_459[iVar1 /*45*/]))
			{
				TASK::_0x9EBD34958AB6F824(Local_459[iVar1 /*45*/]);
			}
		}
		func_1178(&(Local_459[iVar1 /*45*/]));
		iVar1++;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_640[iVar2 /*17*/]))
		{
		}
		else
		{
			if (__LIB_0__::func_27(Local_640[iVar2 /*17*/].f_2, 1))
			{
				PED::REMOVE_RELATIONSHIP_GROUP(Local_640[iVar2 /*17*/].f_8);
			}
			__LIB_0__::func_325(&(Local_640[iVar2 /*17*/].f_16));
			__LIB_0__::func_172(Local_640[iVar2 /*17*/].f_1);
			if (!ENTITY::IS_ENTITY_DEAD(Local_640[iVar2 /*17*/]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Global_35))
				{
					if (!PED::IS_PED_FLEEING(Local_640[iVar2 /*17*/]))
					{
						TASK::CLEAR_PED_TASKS(Local_640[iVar2 /*17*/], true, false);
						TASK::TASK_ANIMAL_FLEE(Local_640[iVar2 /*17*/], Global_35, -1);
					}
				}
			}
		}
		iVar2++;
	}
	func_854(&iLocal_67);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_84))
	{
		ENTITY::DETACH_ENTITY(iLocal_84, true, true);
		ENTITY::SET_ENTITY_VISIBLE(iLocal_84, false);
		ENTITY::SET_ENTITY_COORDS(iLocal_84, func_187(9), false, false, true, true);
		__LIB_1__::func_951(&iLocal_84);
	}
	if (__LIB_0__::func_27(iLocal_131, 8))
	{
		PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), iLocal_69, 11, 0, 0);
		__LIB_3__::func_689(iLocal_69);
		__LIB_2__::func_145(iLocal_69, 0);
	}
	if (__LIB_0__::func_27(iLocal_131, 2))
	{
		TASK::_0xE8C296B75EACC357(iLocal_67, 1f);
		__LIB_6__::func_891(iLocal_67);
		func_455(0);
		__LIB_3__::func_689(iLocal_67);
		__LIB_9__::func_203(7, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
	}
	if (__LIB_0__::func_27(iLocal_131, 16))
	{
		__LIB_3__::func_689(iLocal_70);
		TASK::_0xE8C296B75EACC357(iLocal_70, 1f);
		__LIB_1__::func_463(iLocal_70, 7, 1, 0, 0);
	}
	func_1180(&iLocal_71, 0, 1, 32);
	func_1180(&iLocal_72, 3, 2, 64);
	func_1180(&iLocal_73, 2, 4, 128);
	func_1180(&iLocal_74, 6, 8, 256);
	func_1180(&iLocal_75, 0, 16, 512);
	func_594(&iLocal_71, 1024, 0);
	func_594(&iLocal_72, 2048, 0);
	func_594(&iLocal_73, 4096, 0);
	func_594(&iLocal_74, 8192, 0);
	func_594(&iLocal_75, 16384, 0);
	if (CAM::DOES_CAM_EXIST(iLocal_83))
	{
		CAM::SET_CAM_ACTIVE(iLocal_83, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::DESTROY_CAM(iLocal_83, false);
	}
	if (__LIB_0__::func_27(iLocal_131, 33554432))
	{
		__LIB_13__::func_927(&Local_446);
		__LIB_4__::func_16(&(Local_446.f_5));
	}
	__LIB_0__::func_698(16384);
	__LIB_6__::func_158(0, 0, 0);
	func_848();
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	func_1183(uParam0);
	WEAPON::_0xB832F1A686B9B810(Global_35, 0, 0);
	PLAYER::_0xE5D3EB37ABC1EB03(PLAYER::GET_PLAYER_INDEX());
}

void func_525(var uParam0)
{
	int iVar0;
	int iVar1;
	if (bLocal_188)
	{
		return;
	}
	if (bLocal_202)
	{
		MISC::_0x0E71C80FA4EC8147("SNOWLIGHT", false);
		MISC::_0x0E71C80FA4EC8147("SNOW", false);
		__LIB_8__::func_807(0, 1103626240 /* Float: 25f */);
	}
	UIFEED::_0xDD1232B332CBB9E7(7, 1, 0);
	if (__LIB_0__::func_1(uParam0->f_172, 8))
	{
		AUDIO::_0x36559148B78853B3(1, 1, 0);
	}
	PLAYER::_0xE5D3EB37ABC1EB03(PLAYER::GET_PLAYER_INDEX());
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		__LIB_0__::func_325(&(Local_640[iVar0 /*17*/].f_16));
		if (!ENTITY::DOES_ENTITY_EXIST(Local_640[iVar0 /*17*/]))
		{
		}
		else
		{
			if (PLAYER::_0x0E6846476906C9DD(PLAYER::GET_PLAYER_INDEX(), Local_640[iVar0 /*17*/]))
			{
				PLAYER::_0x9DAE1380CC5C6451(PLAYER::GET_PLAYER_INDEX(), Local_640[iVar0 /*17*/]);
			}
			PED::_0x3088634CF8C819CF(Local_640[iVar0 /*17*/]);
			ENTITY::_0x5826EFD6D73C4DE5(Local_640[iVar0 /*17*/]);
			PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(Local_640[iVar0 /*17*/], 0);
			__LIB_2__::func_788(&(Local_640[iVar0 /*17*/]), 1, 0, 1);
		}
		iVar0++;
	}
	if (__LIB_0__::func_27(iLocal_131, 1))
	{
		__LIB_3__::func_689(iLocal_66);
		__LIB_9__::func_203(17, 0, 0, 0, 90f, 1, 1, 0, 0, 0, 0);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_246);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_247);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_248);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_256);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_257);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_258);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_259);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_249);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_CS_MEATHANGER01X"));
	iVar1 = 0;
	while (iVar1 < 5)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_250[iVar1]);
		iVar1++;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(WEAPON::_GET_WEAPONTYPE_MODEL(joaat("WEAPON_BOW")));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_260);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_261);
	STREAMING::REMOVE_ANIM_DICT(sLocal_237);
	STREAMING::REMOVE_ANIM_DICT(sLocal_238);
	if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_231))
	{
		TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(sLocal_231, 0, 1065353216 /* Float: 1f */, 1056964608 /* Float: 0.5f */, 1);
	}
	if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_232))
	{
		TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(sLocal_232, 0, 1065353216 /* Float: 1f */, 1056964608 /* Float: 0.5f */, 1);
	}
	TASK::REMOVE_WAYPOINT_RECORDING(sLocal_229);
	TASK::REMOVE_WAYPOINT_RECORDING(cLocal_230);
	TASK::REMOVE_WAYPOINT_RECORDING(sLocal_231);
	TASK::REMOVE_WAYPOINT_RECORDING(sLocal_232);
	TASK::REMOVE_WAYPOINT_RECORDING(sLocal_233);
	TASK::REMOVE_WAYPOINT_RECORDING(sLocal_234);
	TASK::REMOVE_WAYPOINT_RECORDING(sLocal_235);
	TASK::REMOVE_WAYPOINT_RECORDING(sLocal_236);
	if (__LIB_12__::func_644(uParam0) == 0)
	{
		__LIB_9__::func_469(50f);
	}
	func_990();
	if (iLocal_180 == 0)
	{
		CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
		iLocal_180 = 1;
	}
	if (bLocal_216)
	{
		CLOCK::PAUSE_CLOCK(false, 0);
	}
	__LIB_1__::func_948(1175826463, 0, 0f, 0, 0, 0f, 1, 0);
	PED::_0x2D976DBDC731DF80(Global_35);
	HUD::_0x160825DADF1B04B3();
	func_528(0);
	bLocal_188 = true;
}

void func_526(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		__LIB_0__::func_172(uParam0->f_15[iVar0]);
		iVar0++;
	}
}

void func_528(bool bParam0)
{
	func_1186(bParam0);
}

int func_581(int iParam0, int iParam1)
{
	var uVar0;
	return func_1225(&uVar0, iParam0, iParam1);
}

bool func_588(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;
	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		__LIB_2__::func_521(uParam2, 1, iVar0);
	}
	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0f)
		{
			uParam2->f_12 = fParam5;
		}
		else
		{
			uParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!uParam2->f_1 & 128 != 0)
		{
			if (__LIB_2__::func_968(iParam0, uParam2))
			{
				*uParam3 = 128;
				__LIB_2__::func_196(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (__LIB_13__::func_700(iParam0, uParam2))
				{
					*uParam3 = 8;
					__LIB_2__::func_196(iParam0, uParam2, *uParam3);
					return true;
				}
				else if (__LIB_10__::func_427(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					__LIB_2__::func_196(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (__LIB_4__::func_235(iParam0, uParam2))
				{
					*uParam3 = 64;
					__LIB_2__::func_196(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && __LIB_1__::func_394(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				__LIB_2__::func_196(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (__LIB_1__::func_395(uParam2, 1065353216 /* Float: 1f */))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (__LIB_10__::func_428(Global_35, iParam0, uParam2))
					{
						*uParam3 = 4;
						__LIB_2__::func_196(iParam0, uParam2, *uParam3);
						return true;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (__LIB_10__::func_429(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						__LIB_2__::func_196(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (__LIB_10__::func_430(Global_35, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					__LIB_2__::func_196(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (__LIB_10__::func_430(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				__LIB_2__::func_196(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (__LIB_2__::func_971(iParam0, uParam2))
				{
					*uParam3 = 32;
					__LIB_2__::func_196(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || uParam2->f_12 < 20f)
			{
				if (__LIB_1__::func_327(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					__LIB_2__::func_196(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (__LIB_1__::func_331(uParam2, 4000))
				{
					if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && __LIB_1__::func_328(uParam2, iParam0)) && __LIB_2__::func_832(uParam2, iParam0))
					{
						*uParam3 = 2;
						__LIB_2__::func_196(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && __LIB_1__::func_328(uParam2, iParam0)) && __LIB_2__::func_832(uParam2, iParam0))
				{
					*uParam3 = 2;
					__LIB_2__::func_196(iParam0, uParam2, *uParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
							{
								__LIB_0__::func_11();
								*uParam3 = 2;
								__LIB_2__::func_196(iParam0, uParam2, *uParam3);
								return true;
							}
						}
					}
				}
			}
			else if (Global_1935630.f_40 == 0)
			{
				if (Global_1935630.f_41 != 0)
				{
					if (*uParam2 & 131072 == 0)
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
						{
							__LIB_0__::func_11();
							*uParam3 = 2;
							__LIB_2__::func_196(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (__LIB_2__::func_840(uParam2, iParam0) || (uParam2->f_9 > 0 && (__LIB_0__::func_485() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						__LIB_0__::func_11();
						*uParam3 = 2;
						__LIB_2__::func_196(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (__LIB_1__::func_330())
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_42))
						{
							__LIB_0__::func_11();
							*uParam3 = 2;
							__LIB_2__::func_196(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (__LIB_5__::func_678(uParam2, iParam0))
			{
				*uParam3 = 1024;
				__LIB_2__::func_196(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (__LIB_2__::func_867(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					__LIB_2__::func_196(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (__LIB_5__::func_683(iParam0, uParam2))
					{
						*uParam3 = 8192;
						__LIB_2__::func_196(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (__LIB_2__::func_228(iParam0, uParam2))
				{
					*uParam3 = 32768;
					__LIB_2__::func_196(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (__LIB_1__::func_331(uParam2, 4000))
				{
					if (__LIB_1__::func_332(&iParam0, uParam2))
					{
						*uParam3 = 512;
						__LIB_2__::func_196(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (__LIB_2__::func_834(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					__LIB_2__::func_196(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (__LIB_1__::func_333(uParam2, iParam0))
			{
				*uParam3 = 1;
				__LIB_2__::func_196(iParam0, uParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

bool func_589(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (((((((((((PED::_0xBA208A8D6399A3AC(iParam0, 3) || PED::_0xBA208A8D6399A3AC(iParam0, 4)) || PED::_0xBA208A8D6399A3AC(iParam0, 5)) || PED::_0xBA208A8D6399A3AC(iParam0, 6)) || PED::_0xBA208A8D6399A3AC(iParam0, 7)) || PED::_0xBA208A8D6399A3AC(iParam0, 8)) || PED::_0xBA208A8D6399A3AC(iParam0, 9)) || PED::_0xBA208A8D6399A3AC(iParam0, 10)) || PED::_0xBA208A8D6399A3AC(iParam0, 11)) || PED::_0xBA208A8D6399A3AC(iParam0, 12)) || PED::_0xBA208A8D6399A3AC(iParam0, 13)) || PED::_0xBA208A8D6399A3AC(iParam0, 14))
	{
		return true;
	}
	return false;
}

bool func_593(int* iParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7, bool bParam8)
{
	if (__LIB_0__::func_27(iLocal_139, iParam6) && __LIB_0__::func_27(iLocal_139, iParam7))
	{
		return true;
	}
	if (!__LIB_0__::func_27(iLocal_139, iParam6))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			*iParam0 = func_1255(iParam1, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
			return false;
		}
		if (bParam8)
		{
			if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, true))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, true);
				}
				__LIB_2__::func_426(iParam0);
			}
			__LIB_1__::func_683(&iLocal_139, iParam6);
			__LIB_1__::func_683(&iLocal_139, iParam7);
		}
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(*iParam0, true, true);
		func_1256(*iParam0, vParam2, fParam5, 2, 1073741824 /* Float: 2f */);
		__LIB_2__::func_915(*iParam0, joaat("WORLD_ANIMAL_HORSE_GRAZING"), vParam2, fParam5, 0, 0, 1, 0, -1082130432 /* Float: -1f */);
		__LIB_1__::func_683(&iLocal_139, iParam6);
	}
	else
	{
		func_1180(iParam0, iParam1, iParam6, iParam7);
	}
	return false;
}

void func_594(int* iParam0, int iParam1, bool bParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0) && ENTITY::_0x88AD6CC10D8D35B2(*iParam0))
	{
		if (bParam2)
		{
			__LIB_2__::func_426(iParam0);
		}
		else
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
		}
		__LIB_1__::func_683(&iLocal_139, iParam1);
	}
}

void func_595(var uParam0, int iParam1, char* sParam2)
{
	int iVar0;
	iVar0 = __LIB_13__::func_225(uParam0, sParam2, 1);
	__LIB_12__::func_891(uParam0, *iParam1, sParam2, 0, 0, 0);
	__LIB_12__::func_715(uParam0, sParam2, *iParam1, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (iVar0 != *iParam1)
		{
			PED::DELETE_PED(&iVar0);
		}
	}
}

int func_603(int iParam0)
{
	if (func_410(&Local_50, iParam0))
	{
		if (Local_50.f_12 == iParam0)
		{
			return 2;
		}
		else
		{
			return 3;
		}
	}
	if (func_431(iParam0))
	{
		return 9;
	}
	return 0;
}

void func_604()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar0 = 1200;
	iVar1 = (iVar0 / 100);
	iVar2 = (iVar0 % 100);
	iVar3 = CLOCK::GET_CLOCK_HOURS();
	iVar4 = CLOCK::GET_CLOCK_MINUTES();
	if (!bLocal_216)
	{
		if (iVar3 > iVar1 || (iVar3 == iVar1 && iVar4 >= iVar2))
		{
			CLOCK::PAUSE_CLOCK(true, 0);
			bLocal_216 = true;
		}
	}
	else if (iVar3 < iVar1 || (iVar3 == iVar1 && iVar4 < iVar2))
	{
		CLOCK::PAUSE_CLOCK(false, 0);
		bLocal_216 = false;
	}
	func_1261();
}

bool func_630(int iParam0, bool bParam1)
{
	bool bVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_272(*iParam0, 1))
	{
		return true;
	}
	if (func_212(iParam0))
	{
		bVar0 = true;
	}
	if ((PED::IS_PED_FLEEING(*iParam0) || PED::IS_PED_IN_COMBAT(*iParam0, 0)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*iParam0, Global_35, 1, 1))
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
		return true;
	}
	return false;
}

void func_686()
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_434))
	{
		iLocal_434 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1347.027f, 2404.442f, 308.075f, 0f, 0f, -24.49999f, 5.933716f, 7.082925f, 3.994377f, "PRSN: Cutscene Area");
	}
	func_1177(&iLocal_434, 1, 0);
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_114))
	{
		iLocal_114 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1350.277f, 2408.692f, 308.075f, 0f, 0f, -24.5f, 14.18372f, 17.83292f, 3.994377f, "Pearson - Intro Cutscene Restriction");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_438))
	{
		iLocal_438 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1347.207f, 2414.62f, 306.9216f, 0f, 0f, -24.51755f, 3.125656f, 2.21706f, 2.450202f, "PRSN: Hitch 01");
	}
	func_1177(&iLocal_438, 1, 0);
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_442))
	{
		iLocal_442 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1345.321f, 2417.849f, 307.5511f, 0f, 0f, -25.84472f, 2.869073f, 4.708086f, 2.847927f, "PRSN: Hitch 02");
	}
	func_1177(&iLocal_442, 1, 0);
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_105))
	{
		iLocal_105 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1288.657f, 2951.15f, 401.5712f, 0f, 0f, 17.99506f, 18.98238f, 14.38688f, 13.72485f, "Bear Trigger");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_106))
	{
		iLocal_106 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1404.333f, 2959.917f, 419.3161f, 0f, 0f, 66.40987f, 45.2745f, 66.48085f, 27.76844f, "Crossed River");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_107))
	{
		iLocal_107 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-786.504f, 1938.825f, 345.5919f, 0f, 0f, 21.56607f, 11.25419f, 15.00382f, 6.117699f, "Shelter Dialogue");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_111))
	{
		iLocal_111 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1346.801f, 2403.57f, 307.3475f, 0f, 0f, -25.64804f, 3.630956f, 4.293375f, 2.671782f, "Pearson - Launch");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_112))
	{
		iLocal_112 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1344.655f, 2408.597f, 308.152f, 0f, 0f, -24.65189f, 5.867f, 3.674f, 4.235f, "Pearson - Outro Greeting");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_113))
	{
		iLocal_113 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1346.557f, 2404.227f, 308.075f, 0f, 0f, -24.5f, 5.5f, 5.183f, 4.626623f, "Pearson - Outro Cutscene");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_115[0]))
	{
		iLocal_115[0] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1506.362f, 2201.06f, 295.425f, 0f, 0f, 25.75f, 29.6738f, 16.2353f, 7.50807f, "Jump Cut Hill");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_115[1]))
	{
		iLocal_115[1] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1353.234f, 1340.745f, 212.3713f, 0f, 0f, 0f, 7.124431f, 10.63115f, 3.125381f, "Jump Cut Hunt Exit");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_115[3]))
	{
		iLocal_115[3] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1346.316f, 2404.52f, 307.4644f, 0f, 0f, -24.88722f, 4.26494f, 7.777524f, 2.899623f, "Cooking Area");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_115[2]))
	{
		iLocal_115[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1356.367f, 2406.264f, 308.0427f, 0f, 0f, -23.75f, 11f, 17.5f, 4.25f, "Leaving Camp Area");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_104))
	{
		iLocal_104 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1345.086f, 2403.67f, 307.33f, 0f, 0f, 65.75003f, 3.75f, 2.75f, 3.5f, "ILO AUTO WALK");
	}
	if (!bLocal_189)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_115[2]))
		{
			POPULATION::_0xB56D41A694E42E86(iLocal_115[2], 10208, 0, 0, -1, -1, 0);
			bLocal_189 = true;
		}
	}
	if (!PED::_0x91A5F9CBEBB9D936(uLocal_129))
	{
		uLocal_129 = PED::_0x4C39C95AE5DB1329(iLocal_115[2], false, 15);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_108))
	{
		iLocal_108 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), -1346.581f, 2401.581f, 306.9516f, 0f, 0f, -23.49999f, 1.51373f, 1.663044f, 1f);
	}
}

void func_710(int iParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	char[] cVar0[8];
	Global_1572864.f_8 = iParam0;
	Global_1572864.f_9 = iParam9;
	Global_1572864.f_10 = iParam10;
	StringCopy(&cVar0, "INVALID", 8);
	if (__LIB_0__::func_700(iParam0) == 1)
	{
		cVar0 = __LIB_0__::func_631(__LIB_0__::func_909(iParam0));
		TELEMETRY::_TELEMETRY_MISSION_CHECKPOINT(&cVar0, 0, Global_1572864.f_9);
	}
	else if (__LIB_0__::func_700(iParam0) == 8)
	{
		cVar0 = __LIB_0__::func_632(__LIB_0__::func_957(iParam0));
		TELEMETRY::_TELEMETRY_MISSION_CHECKPOINT(&cVar0, 0, Global_1572864.f_9);
	}
	func_133(1, 1);
	__LIB_5__::func_119(1, Param1, Param1.f_3);
	Global_1347394 = { Param5 };
	__LIB_0__::func_868(0);
	__LIB_0__::func_869(0);
	__LIB_0__::func_303(1f);
}

void func_715(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_69))
	{
		PHYSICS::_0x06AADE17334F7A40(iLocal_69, -1345.858f, 2414.628f, 307.157f);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_70))
	{
		PHYSICS::_0x06AADE17334F7A40(iLocal_70, -1346.366f, 2413.507f, 307.2155f);
	}
	__LIB_9__::func_469(100f);
	func_308();
}

int func_717(var uParam0)
{
	func_308();
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	iLocal_458 = joaat("SNOW");
	MISC::_SET_WEATHER_TYPE(iLocal_458, true, true, false, 0f, false);
	return 1;
}

void func_719(var uParam0)
{
	if (!bLocal_225)
	{
		iLocal_458 = joaat("SNOW");
		MISC::CLEAR_WEATHER_TYPE_PERSIST();
		MISC::_SET_WEATHER_TYPE(iLocal_458, true, true, false, 0f, false);
		CLOCK::SET_CLOCK_TIME(9, 0, 0);
		bLocal_225 = true;
	}
	func_308();
	if (!__LIB_0__::func_27(iLocal_132, 1))
	{
		if (func_222(0) && func_223(uParam0))
		{
			__LIB_1__::func_683(&iLocal_132, 1);
		}
	}
	if (func_337())
	{
		if (__LIB_13__::func_193(uParam0, iLocal_66, 0, 0, 1, 1))
		{
			ANIMSCENE::START_ANIM_SCENE(iLocal_140);
		}
	}
	if (__LIB_13__::func_193(uParam0, Global_35, 0, 0, 1, 1))
	{
	}
	if (__LIB_13__::func_193(uParam0, iLocal_69, "HORSE_01", 0, 1, 1))
	{
		ENTITY::SET_ENTITY_HEADING(iLocal_69, 153.5563f);
	}
	if (__LIB_13__::func_193(uParam0, iLocal_67, 0, 0, 1, 1))
	{
		func_342(3, 0);
	}
	if (__LIB_13__::func_193(uParam0, iLocal_70, "HORSE_01^1", 0, 1, 1))
	{
		func_1340(&iLocal_70, -1350.534f, 2410.877f, 306.2533f, 135.5563f);
	}
	if (__LIB_13__::func_14(uParam0, 1))
	{
	}
}

void func_723(var uParam0)
{
	int iVar0;
	func_308();
	if (__LIB_0__::func_272(iLocal_67, 0))
	{
		__LIB_6__::func_891(iLocal_67);
		if (PED::_IS_PED_CARRYING(iLocal_67))
		{
			iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(iLocal_67);
		}
		else if (PED::_IS_PED_CARRYING(iLocal_70))
		{
			iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(iLocal_70);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			PED::_0xED00D72F81CF7278(iVar0, 0, 1);
			ENTITY::_0x18FF3110CF47115D(iVar0, 2, 0);
		}
	}
	if (PED::_IS_PED_CARRYING(Global_35))
	{
		iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
		PED::_0xED00D72F81CF7278(iVar0, 0, 1);
		ENTITY::_0x18FF3110CF47115D(iVar0, 2, 0);
	}
	if (!__LIB_0__::func_27(iLocal_131, 8192))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_459[iLocal_455 /*45*/]))
		{
			ENTITY::_0x18FF3110CF47115D(Local_459[iLocal_455 /*45*/], 7, 0);
			ENTITY::_0x18FF3110CF47115D(Local_459[iLocal_455 /*45*/], 2, 0);
			ENTITY::_0x18FF3110CF47115D(Local_459[iLocal_455 /*45*/], 3, 0);
			ENTITY::_0x18FF3110CF47115D(Local_459[iLocal_455 /*45*/], 4, 0);
			ENTITY::_0x18FF3110CF47115D(Local_459[iLocal_455 /*45*/], 10, 0);
		}
		__LIB_1__::func_683(&iLocal_131, 8192);
	}
}

void func_724(var uParam0)
{
	func_308();
	func_1342();
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_144))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_144);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(vLocal_695[10 /*3*/]))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(vLocal_695[10 /*3*/]);
	}
	if (__LIB_0__::func_272(iLocal_67, 0) && ANIMSCENE::_0x005E6F28DD7ED58D(uParam0->f_348, "CharlesSmith"))
	{
		if (__LIB_0__::func_27(iLocal_132, 32))
		{
			__LIB_0__::func_489(0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(Local_459[iLocal_457 /*45*/]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_459[iLocal_457 /*45*/], true);
			}
			ANIMSCENE::START_ANIM_SCENE(iLocal_141);
			func_342(18, 0);
		}
		else
		{
			func_342(18, 0);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_67, -1331.947f, 2403.273f, 306.3709f, 1f, 20000, 0.25f, 0, 334.6017f);
		}
	}
	if (__LIB_13__::func_193(uParam0, Global_35, 0, 0, 1, 1))
	{
	}
}

void func_725(var uParam0)
{
	func_308();
	if (__LIB_1__::func_185(2))
	{
		__LIB_6__::func_910("odriscolls1_outro", -1, 0);
		__LIB_0__::func_88(uParam0, 524288);
	}
	__LIB_2__::func_145(iLocal_69, 0);
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_145))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_145);
	}
}

int func_726(var uParam0)
{
	if (func_1344())
	{
		if (func_377())
		{
			return 1;
		}
	}
	return 0;
}

void func_727(var uParam0)
{
	if (func_1344())
	{
		func_377();
	}
	if (!bLocal_175)
	{
		func_740(&iLocal_69, -1347.06f, 2416.04f, 307.2f, -117.19f, 1, 0);
		func_740(&iLocal_70, -1337.921f, 2401.955f, 306.0885f, 65.6738f, 1, 0);
		__LIB_2__::func_145(iLocal_69, 0);
		bLocal_175 = true;
	}
	if (!__LIB_1__::func_185(2))
	{
		if (!bLocal_176)
		{
			if (__LIB_10__::func_994(2, 0, 0))
			{
				if (__LIB_6__::func_92(2))
				{
					bLocal_176 = true;
				}
			}
		}
	}
	if (__LIB_13__::func_193(uParam0, Global_35, 0, 0, 1, 1))
	{
		__LIB_0__::func_569(joaat("MOTIONSTATE_WALK"), 2000, 0, 1, 1, 0, 0, 0);
	}
	if (__LIB_13__::func_14(uParam0, 1))
	{
	}
}

int func_729(var uParam0)
{
	int iVar0;
	iVar0 = -1;
	if (__LIB_1__::func_205(Global_35, iLocal_115[3], 1, 0) && __LIB_0__::func_48(Global_35, iLocal_66, 3.5f, 1))
	{
		if (!bLocal_187)
		{
			iLocal_29[12] = __LIB_4__::func_981(func_404(12), 0, 0, 1);
			bLocal_187 = true;
		}
	}
	else if (bLocal_187)
	{
		__LIB_13__::func_608(iLocal_29[12], 1);
		bLocal_187 = false;
	}
	switch (iLocal_812)
	{
		case 0:
			if (func_1353())
			{
				func_1354(1);
			}
			else
			{
				func_1354(2);
			}
			break;
		case 2:
			if (__LIB_0__::func_393(Global_35, iLocal_115[3], 0, 1))
			{
				func_1354(3);
			}
			break;
		case 3:
			if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_66, vLocal_695[9 /*3*/]))
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_TIME(vLocal_695[9 /*3*/]) > 13.5f)
				{
					func_1354(4);
					__LIB_2__::func_259(&uLocal_394);
				}
			}
			break;
		case 4:
			iVar0 = func_995(&iLocal_66, &iLocal_751, 3.5f, &Local_733, 0.1f, 3, 0, 0, 1, 0, 0, 2, -1082130432 /* Float: -1f */);
			if (iVar0 != -1)
			{
				if (__LIB_0__::func_899(&uLocal_394))
				{
					__LIB_1__::func_561(&uLocal_394);
				}
				func_1354(6);
				if (bLocal_187)
				{
					__LIB_13__::func_608(iLocal_29[12], 1);
				}
			}
			else
			{
				if (iLocal_412 == 0)
				{
					if (__LIB_9__::func_178(&uLocal_394) > 10f)
					{
						if (__LIB_12__::func_876(uParam0, func_443(1), 0))
						{
							__LIB_2__::func_259(&uLocal_394);
							iLocal_412++;
						}
					}
				}
				else if (iLocal_412 == 1)
				{
					if (__LIB_9__::func_178(&uLocal_394) > 21f)
					{
						if (__LIB_12__::func_876(uParam0, func_443(1), 0))
						{
							__LIB_2__::func_259(&uLocal_394);
							iLocal_412++;
						}
					}
				}
				else if (iLocal_412 == 2)
				{
					if (__LIB_9__::func_178(&uLocal_394) > 32f)
					{
						if (__LIB_12__::func_876(uParam0, func_443(1), 0))
						{
							__LIB_1__::func_561(&uLocal_394);
							iLocal_412++;
						}
					}
				}
				if (!__LIB_1__::func_205(Global_35, iLocal_115[3], 1, 0))
				{
					if (!__LIB_0__::func_899(&uLocal_813))
					{
						__LIB_2__::func_259(&uLocal_813);
					}
					if (__LIB_9__::func_178(&uLocal_813) > 30f)
					{
						func_1354(5);
					}
					else
					{
						Jump @567; //curOff = 547
						if (__LIB_0__::func_899(&uLocal_813))
						{
							__LIB_1__::func_561(&uLocal_813);
						}
						Jump @854; //curOff = 567
						iVar0 = func_995(&iLocal_66, &iLocal_751, 3.5f, &Local_733, 0.1f, 3, 0, "PRS1_C_PEARSON", 1, 0, 0, 2, -1082130432 /* Float: -1f */);
						if (iVar0 != -1)
						{
							func_1354(6);
							if (bLocal_187)
							{
								__LIB_13__::func_608(iLocal_29[12], 1);
							}
						}
						else
						{
							Jump @854; //curOff = 639
							__LIB_14__::func_95(&iLocal_66, &iLocal_751, &Local_733, 3.5f, -1082130432 /* Float: -1f */, 0);
							PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), false);
							PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), false);
							if (!func_311())
							{
								return 0;
							}
							if (!func_313(0))
							{
								return 0;
							}
							if (!func_312(0, 0))
							{
								return 0;
							}
							if (func_978(9) || (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(vLocal_695[9 /*3*/]) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(vLocal_695[9 /*3*/]) > 0.98f))
							{
								__LIB_12__::func_957(uParam0, iLocal_67, 0, 0, 0, 0);
								__LIB_1__::func_683(&iLocal_132, 2);
								__LIB_12__::func_957(uParam0, iLocal_70, "HORSE_01^1", 0, 0, 0);
								__LIB_1__::func_683(&iLocal_132, 4);
								__LIB_12__::func_957(uParam0, iLocal_69, "HORSE_01", 0, 0, 0);
								__LIB_1__::func_683(&iLocal_132, 8);
								__LIB_12__::func_991(&iLocal_751, iLocal_66);
								return 1;
							}
						}
					}
					return 0;
				}
			}
			default:
				break;
	}
}

int func_734(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
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
				func_1256(Global_1360165[iParam0 /*1157*/], vVar0, iParam6, 2, 1073741824 /* Float: 2f */);
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
			__LIB_1__::func_799(iParam0, Global_1360165[iParam0 /*1157*/]);
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

void func_736(bool bParam0)
{
	if (bParam0)
	{
		AUDIO::_0x0D7FD6A55FD63AEF(19, 3, bParam0);
		AUDIO::_0x0D7FD6A55FD63AEF(14, 3, bParam0);
	}
	else
	{
		AUDIO::_0x660A8F876DF1D4F8(19);
		AUDIO::_0x660A8F876DF1D4F8(14);
		AUDIO::_0x0D7FD6A55FD63AEF(19, 3, bParam0);
		AUDIO::_0x0D7FD6A55FD63AEF(14, 3, bParam0);
	}
}

bool func_740(int* iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
{
	float fVar0;
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
	if (bParam6)
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, 1);
		if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, true))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, true);
		}
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(*iParam0, joaat("REL_GANG_DUTCHS"));
		ENTITY::_0x18FF3110CF47115D(*iParam0, 15, 1);
		PED::SET_PED_CONFIG_FLAG(*iParam0, 172, true);
		TASK::SET_PED_PATH_MAY_ENTER_WATER(*iParam0, true);
		func_439(*iParam0, 4, 0f, 0f, 0f, 1);
		func_439(*iParam0, 5, 0f, 0f, 0f, 1);
		func_439(*iParam0, 6, 0f, 0f, 0f, 1);
	}
	if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(*iParam0, -1))
	{
		return true;
	}
	if (!bParam5)
	{
		TASK::TASK_STAND_STILL(*iParam0, -1);
		return true;
	}
	fVar0 = 10f;
	if (!bParam6)
	{
		fVar0 = 1f;
	}
	if (__LIB_5__::func_541(*iParam0, vParam1, fVar0, 1))
	{
	}
	else
	{
		TASK::TASK_STAND_STILL(*iParam0, -1);
	}
	return true;
}

int func_741(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17)
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
				iVar0 = func_1383(iParam1, bParam3, bParam8, iParam9, iParam10, iParam11, iParam12, bParam7, bParam15, bParam16, iParam17);
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

int func_742(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	if (!__LIB_0__::func_31(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (bParam2)
	{
		__LIB_0__::func_288(iParam0, 43, 1);
	}
	iVar0 = __LIB_0__::func_177(iParam0);
	if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && iVar0 != iParam1) && PED::_0xF103823FFE72BB49(iVar0) == __LIB_0__::func_271(iParam0))
	{
		PED::_0xBCC76708E5677E1D(iVar0, 0);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
	}
	iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, -1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != __LIB_0__::func_271(iParam0))
	{
		return 0;
	}
	iVar2 = PED::_0xF103823FFE72BB49(iParam1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		iVar3 = __LIB_4__::func_656(iVar2);
		if (__LIB_0__::func_31(iVar3))
		{
			if (iVar3 != iParam0)
			{
				return 0;
			}
		}
		else if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar2))
		{
			return 0;
		}
		else if (PED::_IS_MOUNT_SEAT_FREE(iParam1, -1))
		{
			PED::_0xBCC76708E5677E1D(iParam1, 0);
		}
		else
		{
			return 0;
		}
	}
	bVar4 = __LIB_0__::func_272(__LIB_0__::func_271(iParam0), 0);
	if (bParam3 || bVar4)
	{
		if (bVar4)
		{
			PED::_0x931B241409216C1F(__LIB_0__::func_271(iParam0), iParam1, 0);
			PED::_0xED1C764997A86D5A(__LIB_0__::func_271(iParam0), iParam1);
		}
	}
	else
	{
		__LIB_0__::func_288(iParam0, 38, 1);
	}
	__LIB_14__::func_87(iParam1, iParam0);
	Global_1360165[iParam0 /*1157*/].f_70 = iParam1;
	Global_1360165[iParam0 /*1157*/].f_124 = 0;
	return 1;
}

bool func_743()
{
	int iVar0;
	iVar0 = 1;
	iLocal_66 = func_734(17, 1, 1, 0f, 0f, 0f, 0f, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_66))
	{
		iVar0 = 0;
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (__LIB_0__::func_272(iLocal_66, 0))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_66, false, true);
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_66, Global_1347702[120 /*49*/].f_24, 329.2056f, true, false, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_66, true);
		PED::_0x2208438012482A1A(iLocal_66, false, false);
		PED::SET_PED_KEEP_TASK(iLocal_66, true);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_66, false);
		return true;
	}
	return true;
}

int func_744()
{
	int iVar0;
	iVar0 = 9;
	if (!func_1388(iVar0, "pl_leadin"))
	{
		return 0;
	}
	else if (!func_976(iVar0, "pl_greet_2_leadin"))
	{
		return 0;
	}
	return 1;
}

int func_745()
{
	if (!func_1388(3, "PL_IG2_Find_Tracks"))
	{
		return 0;
	}
	else
	{
		if (!func_976(3, "PL_IG2_Inspect_Idle"))
		{
			return 0;
		}
		if (!func_976(3, "PL_IG2_Inspect_Tracks"))
		{
			return 0;
		}
		if (!func_976(3, "PL_IG2_Inspect_Tracks_Dismount"))
		{
			return 0;
		}
	}
	return 1;
}

void func_749()
{
	if (__LIB_0__::func_27(iLocal_131, 262144))
	{
		return;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_115[4]))
	{
		iLocal_115[4] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1319.068f, 1307.577f, 202.024f, 0f, 0f, 0f, 1.937152f, 2.974124f, 2.070041f, "Deer Volume 01");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_115[5]))
	{
		iLocal_115[5] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1328.638f, 1158.753f, 202.4939f, 0f, 0f, 0f, 8.830012f, 13.21344f, 7.78003f, "Deer Volume 02");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_115[6]))
	{
		iLocal_115[6] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1268.126f, 1274.421f, 197.8362f, 0f, 0f, 0f, 5.327872f, 5.29214f, 3.717949f, "Deer Volume 03");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_115[7]))
	{
		iLocal_115[7] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1283.604f, 1212.121f, 186.5681f, 0f, 0f, 0f, 7.04248f, 7.26629f, 6.211681f, "Deer Volume 04");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_115[8]))
	{
		iLocal_115[8] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1277.273f, 1146.393f, 182.2619f, 0f, 0f, 123.9558f, 8.628641f, 9.852786f, 6.211681f, "Deer Volume 05");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_115[9]))
	{
		iLocal_115[9] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1193.531f, 1161.919f, 176.5035f, 0f, 0f, 126.9558f, 19.57602f, 16.93252f, 11.66726f, "Deer Volume 06");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_115[10]))
	{
		iLocal_115[10] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1286.959f, 1269.936f, 193.3995f, 0f, 0f, 40.49998f, 8f, 4f, 3f, "Waterfall Stuck 01");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_115[11]))
	{
		iLocal_115[11] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1236.907f, 1170.5f, 171.4677f, 0f, 0f, 54.25f, 8.75f, 5.25f, 4.25f, "Waterfall Stuck 02");
	}
	func_1391(&(Local_459[1 /*45*/]), 6);
	func_1391(&(Local_459[1 /*45*/]), 7);
	func_1391(&(Local_459[1 /*45*/]), 8);
	func_1391(&(Local_459[1 /*45*/]), 9);
	func_1391(&(Local_459[0 /*45*/]), 6);
	func_1391(&(Local_459[0 /*45*/]), 7);
	func_1391(&(Local_459[0 /*45*/]), 5);
	func_1391(&(Local_459[0 /*45*/]), 8);
	func_1391(&(Local_459[2 /*45*/]), 6);
	func_1391(&(Local_459[2 /*45*/]), 7);
	func_1391(&(Local_459[2 /*45*/]), 8);
	func_1391(&(Local_459[2 /*45*/]), 5);
	func_1391(&(Local_459[3 /*45*/]), 7);
	func_1391(&(Local_459[3 /*45*/]), 8);
	func_1391(&(Local_459[3 /*45*/]), 9);
	__LIB_1__::func_683(&iLocal_131, 262144);
}

void func_755(int iParam0)
{
	func_1402(&iLocal_49, iParam0);
	func_1402(&uLocal_48, iParam0);
}

void func_792(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_TRINKET_BEAVER_TOOTH"):
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			__LIB_0__::func_360();
			break;
		case joaat("PROVISION_TRINKET_BISON_HORN"):
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			__LIB_0__::func_361();
			break;
		case joaat("PROVISION_TRINKET_COUGAR_FANG"):
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case joaat("PROVISION_TRINKET_COYOTE_FANG"):
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case joaat("PROVISION_TRINKET_FOX_CLAW"):
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			__LIB_0__::func_362();
			break;
		case joaat("PROVISION_TRINKET_IGUANA_SCALE"):
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			__LIB_0__::func_363();
			break;
		case joaat("PROVISION_TRINKET_LION_PAW"):
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case joaat("PROVISION_TRINKET_MOOSE_ANTLER"):
			Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
			break;
		case joaat("PROVISION_TRINKET_OWL_FEATHER"):
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.15f);
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.15f);
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.15f);
			__LIB_1__::func_244();
			Jump @493; //curOff = 382
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			__LIB_0__::func_430();
			Jump @493; //curOff = 411
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			Jump @493; //curOff = 436
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			__LIB_0__::func_431();
			Jump @493; //curOff = 465
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
		}
struct<2> func_793(int iParam0)
{
	struct<2> Var0;
	Var0.f_1 = iParam0;
	return Var0;
}

void func_802(int iParam0)
{
	char* sVar0;
	switch (iParam0)
	{
		case joaat("DOCUMENT_TAXIDERMY_ORDER_1"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_01"), 1);
			__LIB_1__::func_240(437, 0);
			__LIB_1__::func_240(440, 0);
			func_1461(joaat("TAXIDERMY_ORDER_01"), joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_9__::func_355(51, 0, 0, joaat("TAXIDERMY_ORDER_01"), sVar0, 0, -1, 0);
			__LIB_10__::func_706(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_01"), 20), 1, 0);
			__LIB_0__::func_433(1);
			func_1462(-748969569, 0, 0);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_2"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_02"), 1);
			func_1461(joaat("TAXIDERMY_ORDER_02"), joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_9__::func_355(51, 0, 0, joaat("TAXIDERMY_ORDER_02"), sVar0, 0, -1, 0);
			__LIB_10__::func_706(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_02"), 20), 1, 0);
			__LIB_0__::func_433(8);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_3"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_03"), 1);
			func_1461(joaat("TAXIDERMY_ORDER_03"), joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_9__::func_355(51, 0, 0, joaat("TAXIDERMY_ORDER_03"), sVar0, 0, -1, 0);
			__LIB_10__::func_706(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_03"), 20), 1, 0);
			__LIB_0__::func_433(64);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_4"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_04"), 1);
			func_1461(joaat("TAXIDERMY_ORDER_04"), joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_9__::func_355(51, 0, 0, joaat("TAXIDERMY_ORDER_04"), sVar0, 0, -1, 0);
			__LIB_10__::func_706(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_04"), 20), 1, 0);
			__LIB_0__::func_433(512);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_5"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_05"), 1);
			__LIB_1__::func_240(438, 0);
			func_1461(joaat("TAXIDERMY_ORDER_05"), joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_9__::func_355(51, 0, 0, joaat("TAXIDERMY_ORDER_05"), sVar0, 0, -1, 0);
			__LIB_10__::func_706(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_05"), 20), 1, 0);
			__LIB_0__::func_433(32768);
			break;
		default:
			__LIB_1__::func_240(439, 0);
			break;
	}
}

void func_806(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, joaat("TAXIDERMY"), joaat("TAXIDERMY_ORDER"));
		if (__LIB_1__::func_707(__LIB_1__::func_35(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_1471(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_1472(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_843()
{
	if (PLAYER::_0x2009F8AB7A5E9D6D(PLAYER::GET_PLAYER_INDEX()))
	{
		PLAYER::_0x12E09E278C6C29B7(PLAYER::GET_PLAYER_INDEX());
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_67))
	{
		return;
	}
	if (PLAYER::_0xE24C64D9ADED2EF5(PLAYER::GET_PLAYER_INDEX(), iLocal_67))
	{
		PLAYER::_0x0C6B89876262A99D(PLAYER::GET_PLAYER_INDEX(), iLocal_67);
	}
}

void func_848()
{
	func_843();
	if (PED::DOES_GROUP_EXIST(iLocal_103))
	{
		if (PED::IS_PED_GROUP_MEMBER(iLocal_67, iLocal_103, 0))
		{
			__LIB_3__::func_456(iLocal_67);
		}
		PED::REMOVE_GROUP(iLocal_103);
	}
}

void func_849()
{
	if (func_406(0))
	{
		func_1526(0);
		PED::_0x411189E51B8020BA(Global_35, "Stealth");
		PED::_0x411189E51B8020BA(iLocal_67, "Stealth");
	}
}

int func_850(int iParam0, var uParam1, int iParam2)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	fVar1 = 10000f;
	iVar2 = 0;
	iVar3 = 4;
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_459[iVar2 /*45*/]))
		{
			if (__LIB_0__::func_27(iParam2, 2))
			{
			}
			else
			{
				Jump @247; //curOff = 55
				if (__LIB_0__::func_27(iParam2, 16))
				{
					if (iVar2 == iLocal_454)
					{
					}
					else if (!__LIB_0__::func_27(iParam2, 1) && !__LIB_0__::func_27(iParam2, 2))
					{
					}
					else
					{
						iVar4 = ENTITY::_0x61914209C36EFDDB(Local_459[iVar2 /*45*/]);
						if (iVar4 != 0)
						{
							if (__LIB_0__::func_27(iParam2, 4))
							{
								if (PED::_GET_CARRIER_AS_MOUNT(Local_459[iVar2 /*45*/]) != 0)
								{
								}
								else if (__LIB_0__::func_27(iParam2, 8))
								{
									if (*iParam0 != Global_35)
									{
										if (__LIB_5__::func_60(Global_35, 4) == Local_459[iVar2 /*45*/])
										{
										}
										else
										{
											iVar4 = ENTITY::_0x61914209C36EFDDB(Local_459[iVar2 /*45*/]);
											if ((iVar4 == 4 || iVar4 == 5) || PED::_GET_CARRIER_AS_PED(Local_459[iVar2 /*45*/]) != 0)
											{
											}
											else
											{
												fVar0 = __LIB_0__::func_665(*iParam0, Local_459[iVar2 /*45*/], 1, 1);
												if (fVar0 < fVar1)
												{
													fVar1 = fVar0;
													iVar3 = iVar2;
													*uParam1 = { ENTITY::GET_ENTITY_COORDS(Local_459[iVar2 /*45*/], false, false) };
												}
											}
										}
										iVar2++;
										return iVar3;
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

float func_851(int iParam0, char* sParam1, char* sParam2)
{
	struct<4> Var0;
	bool bVar12;
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(vLocal_695[iParam0 /*3*/]))
	{
		return 40000f;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(vLocal_695[iParam0 /*3*/], false))
	{
		return 40000f;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		if (!ANIMSCENE::_0xA9016536015DE29D(vLocal_695[iParam0 /*3*/], sParam2))
		{
			return 40000f;
		}
		if (!ANIMSCENE::_0x23E33CB9F4A3F547(vLocal_695[iParam0 /*3*/], sParam2))
		{
			return 40000f;
		}
	}
	bVar12 = !MISC::IS_STRING_NULL_OR_EMPTY(sParam2);
	if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(vLocal_695[iParam0 /*3*/], sParam1, &Var0, bVar12, sParam2, 2))
	{
		return Var0.f_3.f_2;
	}
	return 40000f;
}

void func_852()
{
	int iVar0;
	iVar0 = 3;
	if (!func_1017(iVar0))
	{
		return;
	}
	if (!vLocal_695[iVar0 /*3*/].f_2)
	{
		if (__LIB_0__::func_272(Global_35, 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(vLocal_695[iVar0 /*3*/], "ARTHUR", Global_35, 0);
		}
		if (__LIB_0__::func_272(iLocal_67, 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(vLocal_695[iVar0 /*3*/], "CHARLES", iLocal_67, 0);
		}
		if (__LIB_0__::func_272(iLocal_70, 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(vLocal_695[iVar0 /*3*/], "Horse", iLocal_70, 0);
		}
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(vLocal_695[iVar0 /*3*/], false))
	{
		ANIMSCENE::START_ANIM_SCENE(vLocal_695[iVar0 /*3*/]);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(vLocal_695[iVar0 /*3*/], "Bool_Loop", true, false);
		vLocal_695[iVar0 /*3*/].f_2 = 1;
	}
}

bool func_853(int iParam0, char* sParam1, bool bParam2)
{
	if (ANIMSCENE::_0x1F0E401031E20146(vLocal_695[iParam0 /*3*/], sParam1))
	{
		return false;
	}
	if (!func_976(iParam0, sParam1))
	{
		return false;
	}
	if (!bParam2)
	{
		if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(vLocal_695[iParam0 /*3*/]) < 0.98f)
		{
			return false;
		}
	}
	ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(vLocal_695[iParam0 /*3*/], sParam1, true);
	return true;
}

void func_854(int iParam0)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		return;
	}
	iVar0 = PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
	if (PED::IS_PED_GROUP_MEMBER(*iParam0, iVar0, 0))
	{
		PED::REMOVE_PED_FROM_GROUP(*iParam0);
	}
}

void func_855()
{
	int iVar0;
	vector3 vVar1;
	iVar0 = 240000;
	vVar1 = { -2f, -4f, 0f };
	if (!__LIB_0__::func_48(iLocal_70, iLocal_67, 10f, 1))
	{
		if (!__LIB_0__::func_163(iLocal_70, 1056466932))
		{
			TASK::CLEAR_PED_TASKS(iLocal_70, true, false);
			TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(iLocal_70, iLocal_67, vVar1, 3f, iVar0, (10f * 0.5f), 1, 1, 0, 0, 1);
		}
		__LIB_1__::func_681(&iLocal_133, 32);
	}
	else if (!__LIB_0__::func_163(iLocal_70, -982327190))
	{
		TASK::TASK_STAND_STILL(iLocal_70, -1);
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_70, 48, true);
		__LIB_1__::func_683(&iLocal_133, 32);
	}
}

int func_857()
{
	float fVar0;
	float fVar1;
	fVar0 = __LIB_0__::func_94(Global_35, -1345.354f, 2419.083f, 306.1895f, 1);
	fVar1 = __LIB_0__::func_94(Global_35, -1347.614f, 2414.862f, 306.1255f, 1);
	if (fVar0 <= fVar1)
	{
		return 18;
	}
	return 17;
}

void func_860(var uParam0, float fParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	if (!__LIB_0__::func_272(*uParam0, 0))
	{
		return;
	}
	fVar0 = (30f * fParam1);
	fVar1 = fVar0;
	fVar2 = 0.5f;
	fVar3 = (fVar0 * 0.2f);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(*uParam0, 87, fVar0);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(*uParam0, 104, fVar0);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(*uParam0, 82, fVar0);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(*uParam0, 91, fVar0);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(*uParam0, 107, fVar0);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(*uParam0, 85, fVar0);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(*uParam0, 90, fVar1);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(*uParam0, 106, fVar1);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(*uParam0, 84, fVar1);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(*uParam0, 89, fVar1);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(*uParam0, 105, fVar1);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(*uParam0, 83, fVar1);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(*uParam0, 78, fVar1);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(*uParam0, 98, fVar2);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(*uParam0, 99, fVar2);
	PED::_0xD355E2F1BB41087E(*uParam0, fVar3);
}

void func_864(int iParam0, int iParam1)
{
	int iVar0;
	if (iParam1 >= 32)
	{
		return;
	}
	iVar0 = __LIB_0__::func_771(iParam1);
	__LIB_1__::func_336(iParam0, iVar0);
}

bool func_868(var uParam0)
{
	bool bVar0;
	vector3 vVar1;
	float fVar4;
	if (bLocal_174)
	{
		return true;
	}
	bVar0 = false;
	vVar1 = { func_187(4) };
	fVar4 = func_209(4);
	if (!__LIB_0__::func_272(iLocal_68, 1))
	{
		iLocal_68 = func_734(4, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
	}
	if (__LIB_0__::func_272(iLocal_68, 1))
	{
		__LIB_13__::func_926(&iLocal_68, vVar1, fVar4);
		TASK::CLEAR_PED_TASKS(iLocal_68, true, false);
		TASK::TASK_LOOK_AT_ENTITY(iLocal_68, Global_35, -1, 0, 51, 0);
		TASK::TASK_STAND_STILL(iLocal_68, -1);
		bVar0 = true;
	}
	if (bVar0)
	{
		__LIB_12__::func_875(uParam0, iLocal_68, "UNCLE", 1);
		bLocal_174 = true;
		return true;
	}
	return false;
}

void func_893(var uParam0)
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
		func_1558(&(uParam0->f_404), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_12__::func_706(uParam0, 0f, 0f, 0f);
		func_1560(uParam0);
		func_1561(uParam0);
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

char* func_906(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script@rcm@PRSN@leadout@rsc_2@base";
		case 1:
			return "script@beat@wilderness@bearVsBear@v2";
		case 2:
			return "script@rcm@prsn@ig@ig1_camping_eat_rabbit@ig1_camping_eat_rabbit";
		case 3:
			return "script@rcm@prsn@ig@ig2_inspecttracks@ig2_inspecttracks";
		case 4:
			return "script@rcm@prsn@ig@ig6_camping_eat_canned@ig6_camping_eat_canned";
		case 5:
			return "script@rcm@prsn@ig@ig7_ChangeClothes@IG7_ChangeClothes";
		case 6:
			return "script@rcm@PRSN@IG@IG8_Sleep@IG8_sleep";
		case 7:
			return "script@rcm@PRSN@IG@IG9_Camping_Leaving@IG9_Camping_Leaving";
		case 8:
			return "script@rcm@prsn@ig@ig10_camping_charles@ig10_camping_charles";
		case 9:
			return "script@rcm@prsn@leadin@rsc1@leadin_ilo";
		case 10:
			return "script@rcm@prsn@leadin@rsc2@leadin";
		case 11:
			return "script@rcm@prsn@leadout@ext@leadout";
	}
	return "";
}

bool func_939()
{
	if (__LIB_0__::func_27(iLocal_131, 4194304))
	{
		return true;
	}
	if (func_1625())
	{
		Local_640[0 /*17*/].f_3 = { func_187(20) };
		Local_640[0 /*17*/].f_6 = func_209(20);
		if (Local_640[0 /*17*/].f_7 == 0)
		{
			func_351(&(Local_640[0 /*17*/]), 1, 0);
		}
		iLocal_732 = 1;
		__LIB_1__::func_683(&iLocal_131, 4194304);
		return true;
	}
	return false;
}

void func_940()
{
	switch (iLocal_416)
	{
		case 0:
			if (Local_640[0 /*17*/].f_7 != 8)
			{
				AUDIO::_PLAY_SOUND_FROM_ENTITY("BEAR_ATTACK", Local_640[0 /*17*/], "DEMO_012714_SOUNDSET", false, 0, 0);
			}
			__LIB_2__::func_259(&uLocal_271);
			iLocal_416 = 1;
			break;
		case 1:
			if (__LIB_9__::func_178(&uLocal_271) > 2.5f)
			{
				__LIB_2__::func_259(&uLocal_271);
				iLocal_416 = 2;
			}
			break;
		case 2:
			if (__LIB_9__::func_178(&uLocal_271) > 2.5f)
			{
				iLocal_416 = 0;
			}
			break;
	}
}

void func_941()
{
	switch (iLocal_417)
	{
		case 0:
			if (!__LIB_0__::func_27(iLocal_131, 4194304))
			{
			}
			else
			{
				iLocal_417 = 1;
				Jump @71; //curOff = 59
				Jump @71; //curOff = 62
			}
			default:
				break;
	}
}

void func_942(var uParam0, var uParam1)
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
	__LIB_2__::func_433(&Var0);
	__LIB_2__::func_104(&Var0, 1);
	__LIB_2__::func_105(&Var0, 1);
	__LIB_2__::func_50(&Var0, 1);
	__LIB_3__::func_333(&Var0, 0);
	__LIB_2__::func_613(&Var0, 0);
	__LIB_2__::func_111(&Var0, 0);
	__LIB_2__::func_51(&Var0, 0);
	if (!__LIB_0__::func_272(*uParam1, 1))
	{
		func_351(uParam1, 8, 0);
		if (__LIB_2__::func_901(*uParam1, Global_35))
		{
			__LIB_1__::func_683(&iLocal_131, 8388608);
		}
	}
	else
	{
		if (!__LIB_0__::func_27(uParam1->f_2, 1048576))
		{
			if ((((__LIB_10__::func_428(Global_35, *uParam1, &Var0) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(*uParam1, false, false), 50f, true)) || PED::_0xB7DBB2986B87E230(*uParam1, 3f)) || __LIB_13__::func_211(*uParam1, 20f)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*uParam1, Global_35, 1, 1))
			{
				__LIB_1__::func_683(&(uParam1->f_2), 1048576);
			}
		}
		if (PED::IS_PED_IN_COMBAT(*uParam1, Global_35))
		{
			if (!__LIB_0__::func_27(iLocal_131, 256))
			{
				func_300(uParam0, func_61(5), func_61(6), 5, 6, 0);
				__LIB_1__::func_683(&iLocal_131, 16384);
				__LIB_1__::func_683(&iLocal_131, 256);
			}
			if (!__LIB_0__::func_27(uParam1->f_2, 16384))
			{
				__LIB_1__::func_683(&(uParam1->f_2), 16384);
			}
			if (!__LIB_0__::func_27(iLocal_131, 8388608))
			{
				__LIB_1__::func_683(&iLocal_131, 8388608);
			}
		}
		if (PED::_0x3BDFCF25B58B0415(Global_35))
		{
			if (PED::_0xD0B7AEB56229D317(*uParam1) == Global_35)
			{
				if (!__LIB_0__::func_899(&(uParam1->f_13)))
				{
					__LIB_2__::func_259(&(uParam1->f_13));
				}
				if (__LIB_9__::func_178(&(uParam1->f_13)) > 2f)
				{
					__LIB_1__::func_864(Global_35, 0, 0);
				}
				PED::_0x789DABD18E9024DB(*uParam1, 1, 0);
			}
		}
	}
	if (((uParam1->f_7 != 6 && uParam1->f_7 != 0) && uParam1->f_7 != 8) && !__LIB_0__::func_27(uParam1->f_2, 16384))
	{
		if (!__LIB_0__::func_27(iLocal_131, 8388608))
		{
			if (func_588(*uParam1, 0, &Var0, &uVar28, 0, 0) || __LIB_0__::func_27(Local_640[0 /*17*/].f_2, 1048576))
			{
				__LIB_1__::func_683(&iLocal_131, 8388608);
				func_351(uParam1, 6, 0);
			}
			else if (uParam1->f_7 == 3)
			{
				if (__LIB_2__::func_215(*uParam1, Global_35, 1, 30f, 0))
				{
					__LIB_1__::func_683(&iLocal_131, 8388608);
					func_351(uParam1, 6, 0);
				}
			}
		}
	}
	if (!__LIB_0__::func_27(uParam1->f_2, 256))
	{
		if (__LIB_1__::func_472(*uParam1, 65f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */) || __LIB_0__::func_48(iLocal_67, *uParam1, 60f, 1))
		{
			__LIB_5__::func_20(1, 0);
			func_455(0);
			__LIB_1__::func_683(&(uParam1->f_2), 256);
			__LIB_1__::func_683(&iLocal_131, 2097152);
			__LIB_3__::func_157(&(Local_816[0 /*17*/]), "PRS1_ILO_BEAR", " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
		}
	}
	if (!bLocal_217 || !bLocal_218)
	{
		if (__LIB_0__::func_48(iLocal_67, *uParam1, 85f, 1) || __LIB_0__::func_48(Global_35, *uParam1, 85f, 1))
		{
			if (ENTITY::IS_ENTITY_ON_SCREEN(*uParam1) && !ENTITY::IS_ENTITY_OCCLUDED(*uParam1))
			{
				if (!func_406(5))
				{
					AUDIO::PLAY_ANIMAL_VOCALIZATION(Local_640[0 /*17*/], "BATTLE_CRY", false);
					func_324(5);
					__LIB_2__::func_259(&uLocal_385);
				}
				if (!bLocal_218)
				{
					if (__LIB_9__::func_178(&uLocal_385) > 1f)
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_70))
						{
							PED::_0x06D26A96CA1BCA75(iLocal_70, 3, 0.6f, 0);
							bLocal_218 = true;
							__LIB_2__::func_259(&uLocal_385);
						}
					}
				}
				else if (!bLocal_217)
				{
					if (__LIB_9__::func_178(&uLocal_385) > 1.8f)
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_69))
						{
							PED::_0x06D26A96CA1BCA75(iLocal_69, 3, 0.6f, 0);
							bLocal_217 = true;
							__LIB_1__::func_561(&uLocal_385);
						}
					}
				}
			}
		}
	}
	switch (uParam1->f_7)
	{
		case 0:
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
		case 5:
			if (PED::_0xC8D523BF5BBD3808(*uParam1, joaat("EVENT_SHOT_FIRED_WHIZZED_BY")))
			{
				func_351(uParam1, 6, 0);
				__LIB_1__::func_683(&iLocal_131, 8388608);
			}
			else if (__LIB_0__::func_48(*uParam1, Global_35, 10f, 1))
			{
				func_351(uParam1, 6, 0);
				__LIB_1__::func_683(&iLocal_131, 8388608);
			}
			else if (!TASK::_0x9FF5F9B24E870748(*uParam1))
			{
				func_351(uParam1, 3, 1);
			}
			else
			{
				Jump @1387; //curOff = 1219
				if (iLocal_150 >= 4)
				{
					func_351(uParam1, 7, 1);
				}
				else
				{
					if (__LIB_3__::func_528(*uParam1, Global_35))
					{
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(*uParam1);
						iLocal_150++;
					}
					Jump @1387; //curOff = 1265
					if (MAP::DOES_BLIP_EXIST(uParam1->f_16))
					{
						if (!__LIB_0__::func_48(Global_35, *uParam1, 80f, 1))
						{
							MAP::_BLIP_SET_MODIFIER(uParam1->f_16, -1269631044);
						}
					}
					else if (__LIB_0__::func_48(Global_35, *uParam1, 30f, 1))
					{
						if (!MAP::DOES_BLIP_EXIST(uParam1->f_16))
						{
							uParam1->f_16 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), *uParam1);
							MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam1->f_16, "PRS1_B_BEAR");
						}
					}
					Jump @1387; //curOff = 1375
					Jump @1387; //curOff = 1378
				}
			}
			default:
				break;
	}
}

void func_944()
{
	int iVar0;
	float fVar1;
	bool bVar2;
	iVar0 = 0;
	fVar1 = 1f;
	bVar2 = false;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!__LIB_0__::func_272(Local_459[iVar0 /*45*/], 1))
		{
		}
		else
		{
			if (!__LIB_0__::func_899(&(Local_459[iVar0 /*45*/].f_24)))
			{
				__LIB_1__::func_585(&(Local_459[iVar0 /*45*/].f_24), fVar1);
			}
			if (__LIB_9__::func_178(&(Local_459[iVar0 /*45*/].f_24)) > fVar1)
			{
				if (!__LIB_1__::func_472(Local_459[iVar0 /*45*/], 1116471296 /* Float: 70f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */))
				{
				}
				else if (PED::_0xC8D523BF5BBD3808(Local_459[iVar0 /*45*/], joaat("EVENT_ANIMAL_DETECTED_THREAT")))
				{
					__LIB_1__::func_336(&(Local_459[iVar0 /*45*/].f_2), 8192);
				}
				else
				{
					bVar2 = false;
					if (PED::_0xC8D523BF5BBD3808(Local_459[iVar0 /*45*/], joaat("EVENT_SHOT_FIRED_WHIZZED_BY")))
					{
						__LIB_1__::func_683(&iLocal_131, 131072);
						bVar2 = true;
					}
					else if (PED::_0xC8D523BF5BBD3808(Local_459[iVar0 /*45*/], joaat("EVENT_SHOT_FIRED_BULLET_IMPACT")))
					{
						bVar2 = true;
					}
					else if (PED::_0xC8D523BF5BBD3808(Local_459[iVar0 /*45*/], joaat("EVENT_SHOT_FIRED_BASE")))
					{
						bVar2 = true;
					}
					else if (PED::_0xC8D523BF5BBD3808(Local_459[iVar0 /*45*/], joaat("EVENT_PED_SEEN_DEAD_PED")))
					{
						bVar2 = true;
					}
					else if (__LIB_9__::func_365(Local_459[iVar0 /*45*/]))
					{
						bVar2 = true;
					}
					else if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_459[iVar0 /*45*/], true, false), 2.5f, true))
					{
						bVar2 = true;
					}
					else if (MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(Local_459[iVar0 /*45*/], true, false), joaat("WEAPON_BOW"), 2.5f, true))
					{
						__LIB_1__::func_683(&iLocal_131, 131072);
						bVar2 = true;
					}
					else if (PED::_0x09D7AFD3716DA8E1(Local_459[iVar0 /*45*/], 2000))
					{
						__LIB_1__::func_683(&iLocal_131, 131072);
						bVar2 = true;
					}
					else if (func_1632(&(Local_459[iVar0 /*45*/]), 20f, 10f))
					{
						__LIB_1__::func_683(&iLocal_131, 131072);
						bVar2 = true;
					}
					else if (func_1633(&(Local_459[iVar0 /*45*/]), 1092616192 /* Float: 10f */, 1084227584 /* Float: 5f */))
					{
						bVar2 = true;
					}
					if (bVar2)
					{
						if (__LIB_0__::func_27(iLocal_131, 131072))
						{
							iLocal_137 = iVar0;
						}
						__LIB_1__::func_336(&(Local_459[iVar0 /*45*/].f_2), 8192);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_945(var uParam0)
{
	float fVar0;
	fVar0 = 1f;
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		PED::SET_PED_RESET_FLAG(*uParam0, 170, true);
	}
	if (PED::_0x268B3AEBF032A88D(*uParam0))
	{
		if (PED::IS_PED_DEAD_OR_DYING(*uParam0, true) || PED::IS_PED_FATALLY_INJURED(*uParam0))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, false);
		}
	}
	if (!__LIB_0__::func_899(&(uParam0->f_36)))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*uParam0) && PED::IS_PED_RAGDOLL(*uParam0))
		{
			__LIB_2__::func_259(&(uParam0->f_36));
		}
	}
	else if (__LIB_9__::func_178(&(uParam0->f_36)) > 10f)
	{
		__LIB_1__::func_561(&(uParam0->f_36));
	}
	func_1634(uParam0);
	if (ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		func_345(uParam0, 4, 0);
	}
	if (__LIB_1__::func_472(*uParam0, 45f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 50f))
	{
		__LIB_1__::func_683(&(uParam0->f_2), 4194304);
	}
	if (uParam0->f_14 != 4)
	{
		if (!__LIB_0__::func_27(iLocal_131, 4096))
		{
			if (__LIB_2__::func_401(*uParam0, 1, 1, 1, 0, 0))
			{
				__LIB_1__::func_683(&iLocal_131, 4096);
			}
		}
	}
	switch (uParam0->f_14)
	{
		case 0:
			if (__LIB_0__::func_27(uParam0->f_2, 4096))
			{
				func_345(uParam0, 3, 0);
			}
			else
			{
				func_345(uParam0, 1, 0);
			}
			break;
		case 1:
			if ((((!TASK::_0x9FF5F9B24E870748(*uParam0) && !TASK::IS_PED_IN_WRITHE(*uParam0)) && !PED::IS_PED_RAGDOLL(*uParam0)) && !PED::IS_PED_DEAD_OR_DYING(*uParam0, true)) && !PED::IS_PED_FATALLY_INJURED(*uParam0))
			{
				if (__LIB_0__::func_899(&(uParam0->f_36)))
				{
					func_345(uParam0, 1, 1);
				}
				else
				{
					func_345(uParam0, 3, 1);
				}
			}
			else
			{
				Jump @1290; //curOff = 426
				if (PED::_0xD55DB4466D00A258(*uParam0))
				{
					if (!__LIB_0__::func_27(uParam0->f_2, 134217728))
					{
						__LIB_1__::func_683(&(uParam0->f_2), 134217728);
						__LIB_1__::func_683(&(uParam0->f_2), 8192);
					}
				}
				if (__LIB_0__::func_27(uParam0->f_2, 134217728))
				{
					fVar0 = 1.5f;
				}
				if (((__LIB_1__::func_472(*uParam0, 18f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */) || __LIB_0__::func_27(uParam0->f_2, 8192)) || __LIB_0__::func_27(uParam0->f_2, 134217728)) || __LIB_0__::func_899(&(uParam0->f_36)))
				{
					if (!PED::IS_PED_DEAD_OR_DYING(*uParam0, true) && !PED::IS_PED_FATALLY_INJURED(*uParam0))
					{
						if (!__LIB_0__::func_899(&(uParam0->f_39)))
						{
							TASK::TASK_LOOK_AT_ENTITY(*uParam0, Global_35, 1000, 0, 51, 0);
							__LIB_2__::func_259(&(uParam0->f_39));
						}
						else if (__LIB_9__::func_178(&(uParam0->f_39)) > fVar0)
						{
							__LIB_1__::func_683(&(uParam0->f_2), 2048);
							__LIB_2__::func_259(&(uParam0->f_30));
							func_345(uParam0, 1, 1);
							__LIB_1__::func_561(&(uParam0->f_39));
							if (__LIB_0__::func_27(uParam0->f_2, 8192))
							{
								__LIB_1__::func_681(&(uParam0->f_2), 134217728);
							}
						}
						else
						{
							Jump @1290; //curOff = 727
							Jump @1290; //curOff = 730
							if (func_1635(uParam0))
							{
								if (!__LIB_0__::func_27(iLocal_133, 524288))
								{
									__LIB_1__::func_683(&iLocal_133, 524288);
								}
							}
							if (iLocal_135 == 0)
							{
								iLocal_135++;
								__LIB_1__::func_683(&(uParam0->f_2), 536870912);
							}
							else if (!__LIB_0__::func_27(uParam0->f_2, 536870912))
							{
								if (__LIB_14__::func_82(*uParam0, 1059481190 /* Float: 0.65f */, 1051931443 /* Float: 0.35f */, 1060320051 /* Float: 0.7f */, 1036831949 /* Float: 0.1f */) && __LIB_0__::func_48(*uParam0, Global_35, 10f, 0))
								{
									iLocal_135++;
									__LIB_1__::func_683(&(uParam0->f_2), 536870912);
								}
							}
							if (!__LIB_0__::func_27(iLocal_131, 8192))
							{
								if (iLocal_414 < 7)
								{
									if (ENTITY::_0x808077647856DE62(*uParam0, 7))
									{
										ENTITY::_0x18FF3110CF47115D(*uParam0, 7, 0);
									}
								}
								else if (!ENTITY::_0x808077647856DE62(*uParam0, 7))
								{
									ENTITY::_0x18FF3110CF47115D(*uParam0, 7, 1);
								}
							}
							if (iLocal_414 == 13 || iLocal_414 == 12)
							{
								ENTITY::_0x18FF3110CF47115D(*uParam0, 2, 1);
								if (ENTITY::IS_ENTITY_IN_VOLUME(*uParam0, iLocal_115[3], true, 0))
								{
									ENTITY::_0x18FF3110CF47115D(*uParam0, 4, 1);
								}
								else
								{
									ENTITY::_0x18FF3110CF47115D(*uParam0, 4, 0);
								}
								if (__LIB_0__::func_27(uParam0->f_2, 64))
								{
									ENTITY::_0xCDB682BB47C02F0A(*uParam0, joaat("NULL_OVERRIDE_CARRIABLE_PROMPT_TABLE"));
								}
							}
							else if (ENTITY::_0x61914209C36EFDDB(*uParam0) == 7 || ENTITY::_0x61914209C36EFDDB(*uParam0) == 8)
							{
								__LIB_1__::func_683(&(uParam0->f_2), 4);
								if (PED::_GET_CARRIER_AS_MOUNT(*uParam0) == iLocal_69)
								{
									__LIB_1__::func_683(&(uParam0->f_2), 16);
									__LIB_1__::func_681(&(uParam0->f_2), 8);
									__LIB_1__::func_683(&iLocal_131, 1073741824 /* Float: 2f */);
								}
								else if (PED::_GET_CARRIER_AS_MOUNT(*uParam0) == iLocal_70)
								{
									__LIB_1__::func_683(&(uParam0->f_2), 8);
									__LIB_1__::func_681(&(uParam0->f_2), 16);
								}
								ENTITY::_0x18FF3110CF47115D(*uParam0, 2, 0);
							}
							else
							{
								if (__LIB_0__::func_27(uParam0->f_2, 64) || __LIB_0__::func_27(iLocal_131, 1073741824 /* Float: 2f */))
								{
									ENTITY::_0xCDB682BB47C02F0A(*uParam0, joaat("NULL_OVERRIDE_CARRIABLE_PROMPT_TABLE"));
								}
								else
								{
									ENTITY::_0x18FF3110CF47115D(*uParam0, 4, 0);
								}
								if (((iLocal_414 == 10 || iLocal_414 == 11) || iLocal_414 == 9) || iLocal_414 == 12)
								{
									ENTITY::_0x18FF3110CF47115D(*uParam0, 2, 1);
									__LIB_1__::func_681(&iLocal_131, 1073741824 /* Float: 2f */);
								}
							}
						}
						if (__LIB_0__::func_27(uParam0->f_2, 8192) && !__LIB_0__::func_27(uParam0->f_2, 134217728))
						{
							__LIB_1__::func_681(&(uParam0->f_2), 8192);
							__LIB_2__::func_259(&(uParam0->f_24));
						}
					}
				}
			}
			default:
				break;
	}
}

int func_948(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, float fParam8)
{
	char* sVar0;
	sVar0 = func_443(iParam2);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return 1;
	}
	if (func_410(uParam1, iParam2))
	{
		if (__LIB_6__::func_903(sVar0))
		{
			return 2;
		}
		else
		{
			return 3;
		}
	}
	if (!__LIB_0__::func_272(*iParam3, 1))
	{
		return 4;
	}
	if (__LIB_0__::func_665(Global_35, *iParam3, 1, 1) > fParam5)
	{
		if (bParam6)
		{
			func_331(iParam2);
		}
		return 7;
	}
	if (__LIB_6__::func_904())
	{
		if (bParam4)
		{
			__LIB_5__::func_20(0, 0);
		}
		return 8;
	}
	if (bParam7)
	{
		if (!__LIB_0__::func_899(&uLocal_44))
		{
			__LIB_2__::func_259(&uLocal_44);
			return 8;
		}
		else if (__LIB_9__::func_178(&uLocal_44) < fParam8)
		{
			return 8;
		}
	}
	if (__LIB_12__::func_876(uParam0, sVar0, 0))
	{
		if (bParam7)
		{
			if (__LIB_0__::func_899(&uLocal_44))
			{
				__LIB_1__::func_561(&uLocal_44);
			}
		}
		func_331(iParam2);
		return 1;
	}
	return 6;
}

void func_949(int iParam0, int iParam1)
{
	if (iParam0 != 6)
	{
		Local_50.f_14 = 83;
		Local_50.f_15 = 0;
		return;
	}
	if (Local_50.f_14 != iParam1)
	{
		Local_50.f_14 = iParam1;
		Local_50.f_15 = 0;
	}
	else
	{
		Local_50.f_15++;
	}
	if (Local_50.f_15 >= 60)
	{
		func_331(iParam1);
		Local_50.f_14 = 83;
		Local_50.f_15 = 0;
	}
}

bool func_950(char* sParam0, var uParam1)
{
	if (!PLAYER::_0x0E6846476906C9DD(PLAYER::GET_PLAYER_INDEX(), *uParam1))
	{
		PLAYER::_0x543DFE14BE720027(PLAYER::GET_PLAYER_INDEX(), *uParam1, 0);
	}
	ENTITY::_0xC76E94A78127412B(*uParam1, 0f, 2f);
	if (__LIB_14__::func_193(*uParam1, sParam0, 1, 0.762f, 0.1f, 0, 0, 1))
	{
		return true;
	}
	return false;
}

void func_952()
{
	if (!bLocal_207)
	{
		if (!bLocal_204)
		{
			if (bLocal_210 && bLocal_211)
			{
				func_1639();
			}
		}
		bLocal_207 = true;
	}
}

void func_953()
{
	if (!bLocal_208)
	{
		if (!bLocal_205)
		{
			func_1640();
		}
		bLocal_208 = true;
	}
}

void func_954()
{
	if (!bLocal_209)
	{
		if (!bLocal_206)
		{
			func_1641();
		}
		bLocal_209 = true;
	}
}

bool func_955(char* sParam0)
{
	char* sVar0;
	if (func_389(sParam0, 2))
	{
		return true;
	}
	sVar0 = "script@Story@RPRSN1@mission_jump_cameras";
	*sParam0 = sVar0;
	if (!func_389(sParam0, 1))
	{
		CAM::_0x1B3C2D961F5FC0E1(sVar0);
		func_332(sParam0, 1);
	}
	else if (CAM::_0xDD0B7C5AE58F721D(sVar0))
	{
		func_332(sParam0, 2);
		return true;
	}
	return false;
}

void func_956(char* sParam0)
{
	if (iLocal_414 == 2)
	{
		if (PED::IS_PED_ON_MOUNT(iLocal_67) && PED::IS_PED_ON_MOUNT(Global_35))
		{
			if (!func_389(sParam0, 8))
			{
				if (!__LIB_0__::func_27(iLocal_132, 536870912))
				{
					if (func_1642(sLocal_229, 42))
					{
						StringCopy(&Local_663, "camera_treatments", 64);
						StringCopy(&(Local_663.f_8), "RPRSN1_PULL_OUT_TREATMENT_REQUEST", 64);
						CAM::_0x6A4D224FC7643941(&Local_663);
						StringCopy(&Local_679, "camera_treatments", 64);
						StringCopy(&(Local_679.f_8), "RPRSN1_PUSH_IN_TREATMENT_REQUEST", 64);
						CAM::_0x6A4D224FC7643941(&Local_679);
						__LIB_1__::func_336(&iLocal_132, 536870912);
					}
				}
				else
				{
					func_957(sParam0, 1);
				}
				if (func_1642(sLocal_229, 64))
				{
					if (CAM::_0xDD0B7C5AE58F721D(&Local_663))
					{
						CAM::_0xB8B207C34285E978(&Local_663);
						func_332(sParam0, 8);
						func_958(sParam0, 0);
					}
					return;
				}
				if (!__LIB_0__::func_27(iLocal_132, 268435456))
				{
					if (__LIB_6__::func_903("RPRSN_TLKWNT") || __LIB_6__::func_903("RPRSN_TLKBOTH"))
					{
						if (!__LIB_0__::func_27(iLocal_132, 268435456))
						{
							__LIB_1__::func_683(&iLocal_132, 268435456);
						}
					}
				}
				else if (!__LIB_0__::func_899(&uLocal_376))
				{
					if (__LIB_6__::func_903("RPRSN_TLKWNT"))
					{
						if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("RPRSN_TLKWNT") >= 5)
						{
							__LIB_2__::func_259(&uLocal_376);
						}
					}
					else if (__LIB_6__::func_903("RPRSN_TLKBOTH"))
					{
						if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE("RPRSN_TLKBOTH") >= 5)
						{
							__LIB_2__::func_259(&uLocal_376);
						}
					}
					else
					{
						__LIB_2__::func_259(&uLocal_376);
					}
				}
				else if (__LIB_9__::func_178(&uLocal_376) > 4f)
				{
					if (CAM::_0xDD0B7C5AE58F721D(&Local_663))
					{
						CAM::_0xB8B207C34285E978(&Local_663);
						func_332(sParam0, 8);
						func_958(sParam0, 0);
					}
				}
			}
		}
	}
	else if (!func_389(sParam0, 16))
	{
		func_332(sParam0, 16);
	}
}

bool func_957(char* sParam0, int iParam1)
{
	if (sParam0->f_4 == iParam1)
	{
		if (sParam0->f_2)
		{
			return STREAMING::IS_SRL_LOADED();
		}
		else
		{
			return true;
		}
	}
	sParam0->f_4 = iParam1;
	if (sParam0->f_4 == 5)
	{
		sParam0->f_2 = 0;
		return true;
	}
	switch (sParam0->f_4)
	{
		case 0:
			sParam0->f_2 = 0;
			return true;
		case 1:
			sParam0->f_2 = 1;
			STREAMING::PREFETCH_SRL(func_1644(1));
			STREAMING::_0xAE00387E53B1E9FC();
			break;
		case 2:
			sParam0->f_2 = 1;
			STREAMING::PREFETCH_SRL(func_1644(2));
			STREAMING::_0xAE00387E53B1E9FC();
			break;
		case 3:
			sParam0->f_2 = 1;
			STREAMING::PREFETCH_SRL(func_1644(3));
			STREAMING::_0xAE00387E53B1E9FC();
			break;
		case 4:
			sParam0->f_2 = 0;
			return true;
	}
	return false;
}

void func_958(char* sParam0, int iParam1)
{
	if (sParam0->f_3 == iParam1)
	{
		return;
	}
	if (sParam0->f_2)
	{
		STREAMING::END_SRL();
		sParam0->f_2 = 0;
	}
	sParam0->f_4 = 5;
	sParam0->f_3 = iParam1;
	__LIB_2__::func_259(&(sParam0->f_5));
	if (sParam0->f_3 != 5)
	{
		if (!PED::IS_PED_ON_MOUNT(Global_35))
		{
			__LIB_1__::func_571(Global_35, iLocal_69, 0, -1, 1);
		}
		if (!PED::IS_PED_ON_MOUNT(iLocal_67))
		{
			__LIB_1__::func_571(iLocal_67, iLocal_70, 0, -1, 1);
		}
		__LIB_4__::func_791(0);
		__LIB_4__::func_791(1);
	}
	switch (sParam0->f_3)
	{
		case 0:
			if (!CAM::DOES_CAM_EXIST(sParam0->f_8))
			{
				sParam0->f_8 = CAM::CREATE_CAM_WITH_PARAMS("default_scripted_camera", -1512.09f, 2206.937f, 296.8795f, 14.4484f, 1.1704f, -172.5758f, 53.98f, false, 2);
				HUD::_HIDE_HUD_COMPONENT(724769646);
			}
			break;
		case 1:
			HUD::_HIDE_HUD_COMPONENT(724769646);
			func_1340(&iLocal_69, -1425.694f, 2126.258f, 328.0399f, 254.1669f);
			func_1340(&iLocal_70, -1422.74f, 2124.998f, 328.9398f, 234.2537f);
			func_342(20, 0);
			TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_67, cLocal_230, 0, 4220430, -1, 0, 0, -1);
			PLAYER::_0x0869D499A7848309(PLAYER::GET_PLAYER_INDEX(), cLocal_230, 1.5f, 1.5f, 5f, 0, 0, -1082130432 /* Float: -1f */);
			PED::FORCE_PED_MOTION_STATE(iLocal_69, -1415276238, true, 0, false);
			PED::FORCE_PED_MOTION_STATE(iLocal_70, -1415276238, true, 0, false);
			PED::_0x2208438012482A1A(iLocal_69, false, false);
			PED::_0x2208438012482A1A(Global_35, false, false);
			CAM::_0xBC016635D6A73B31("script@Story@RPRSN1@mission_jump_cameras", "HILL", 5);
			break;
		case 2:
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(iLocal_69, -1405.466f, 1851.348f, 304.01f, 164.1977f, false, true);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(iLocal_70, -1407.271f, 1846.027f, 303.1655f, 154.8413f, false, true);
			TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_67, cLocal_230, 0, 4194312, -1, 0, 0, -1);
			PLAYER::_0x0869D499A7848309(PLAYER::GET_PLAYER_INDEX(), cLocal_230, 1.5f, 1.5f, 3f, 0, 0, -1082130432 /* Float: -1f */);
			PED::FORCE_PED_MOTION_STATE(iLocal_69, -1415276238, true, 0, false);
			PED::_0x2208438012482A1A(iLocal_69, false, false);
			PED::_0x2208438012482A1A(Global_35, false, false);
			PED::FORCE_PED_MOTION_STATE(iLocal_70, -1415276238, true, 0, false);
			PED::_0x2208438012482A1A(iLocal_70, false, false);
			PED::_0x2208438012482A1A(iLocal_67, false, false);
			CAM::_0xBC016635D6A73B31("script@Story@RPRSN1@mission_jump_cameras", "Riding", 5);
			if (!CAM::DOES_CAM_EXIST(sParam0->f_8))
			{
				sParam0->f_8 = CAM::CREATE_CAM_WITH_PARAMS("default_scripted_camera", -1465.35f, 1628.855f, 245.5444f, -12.4103f, 0.0516f, -155.793f, 54.7329f, false, 2);
			}
			if (CAM::_0xDD0B7C5AE58F721D(&Local_679))
			{
				CAM::_0xB8B207C34285E978(&Local_679);
			}
			CAM::SET_CAM_COORD(sParam0->f_8, -1458.847f, 1597.772f, 238.8799f);
			CAM::SET_CAM_ROT(sParam0->f_8, -4.9891f, 0.0516f, -141.9963f, 2);
			CAM::SET_CAM_FOV(sParam0->f_8, 54.7329f);
			break;
		case 3:
			func_1340(&iLocal_69, -1458.973f, 1640.026f, 243.4603f, 169.0882f);
			func_1340(&iLocal_70, -1459.88f, 1635.323f, 242.7415f, 167.6092f);
			TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_67, cLocal_230, 0, 4194312, -1, 0, 0, -1);
			PLAYER::_0x0869D499A7848309(PLAYER::GET_PLAYER_INDEX(), cLocal_230, 1.4f, 1.5f, 5f, 0, 0, -1082130432 /* Float: -1f */);
			PED::FORCE_PED_MOTION_STATE(iLocal_69, -1415276238, true, 0, false);
			PED::_0x2208438012482A1A(iLocal_69, false, false);
			PED::_0x2208438012482A1A(Global_35, false, false);
			PED::FORCE_PED_MOTION_STATE(iLocal_70, -1415276238, true, 0, false);
			PED::_0x2208438012482A1A(iLocal_70, false, false);
			PED::_0x2208438012482A1A(iLocal_67, false, false);
			CAM::_0xBC016635D6A73B31("script@Story@RPRSN1@mission_jump_cameras", "NoCamp", 5);
			AUDIO::_0x36559148B78853B3(1, 1, 0);
			break;
		case 4:
			PED::FORCE_PED_MOTION_STATE(iLocal_69, -1415276238, true, 0, false);
			PED::_0x2208438012482A1A(iLocal_69, false, false);
			PED::_0x2208438012482A1A(Global_35, false, false);
			PED::FORCE_PED_MOTION_STATE(iLocal_70, -1415276238, true, 0, false);
			PED::_0x2208438012482A1A(iLocal_70, false, false);
			PED::_0x2208438012482A1A(iLocal_67, false, false);
			HUD::_DISPLAY_HUD_COMPONENT(724769646);
			break;
	}
	func_332(sParam0, 4);
}

void func_960()
{
	if (__LIB_1__::func_185(1))
	{
		if (__LIB_1__::func_185(2))
		{
			func_411(6, 0);
		}
		else
		{
			func_411(7, 0);
		}
	}
	else if (__LIB_1__::func_185(2))
	{
		func_411(17, 0);
	}
	else
	{
		func_411(16, 0);
	}
}

void func_961()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = iVar0;
		if (iVar1 == 0)
		{
		}
		else if (func_408(iVar1))
		{
		}
		else if ((((func_1000(iVar1) && !__LIB_4__::func_365()) && !__LIB_8__::func_954()) && !__LIB_14__::func_83()) && !__LIB_3__::func_63())
		{
			func_432(iVar1);
		}
		else
		{
			iVar0++;
		}
	}
}

void func_962(var uParam0)
{
	float fVar0;
	struct<2> Var1;
	fVar0 = 1.5f;
	if (WEAPON::_0xF29A186ED428B552(Global_35, joaat("WEAPON_BOW")) && WEAPON::_0xAFFD0CCF31F469B8(iLocal_69) != joaat("WEAPON_BOW"))
	{
		if (iLocal_149 > 0)
		{
			__LIB_3__::func_760();
			iLocal_149 = 0;
		}
		__LIB_1__::func_561(&uLocal_358);
		HUD::_0x160825DADF1B04B3();
		func_432(0);
		return;
	}
	if (iLocal_149 == 0)
	{
		__LIB_1__::func_561(&uLocal_358);
		__LIB_3__::func_760();
		HUD::_0x160825DADF1B04B3();
		if (!__LIB_0__::func_48(Global_35, iLocal_69, 2f, 1))
		{
			__LIB_12__::func_883(uParam0, "PRS1_BC_LOADOUT_0", 1, -1, 1, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
		}
		iLocal_149 = 1;
	}
	else if (iLocal_149 == 1)
	{
		if (__LIB_0__::func_48(Global_35, iLocal_69, 2f, 1))
		{
			__LIB_10__::func_731();
			__LIB_3__::func_834(3);
			iLocal_149 = 2;
		}
	}
	else if (iLocal_149 == 2)
	{
		HUD::_0x160825DADF1B04B3();
		__LIB_3__::func_787(0);
		__LIB_12__::func_883(uParam0, "PRS1_BC_LOADOUT_1", 1, -1, 1, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
		iLocal_149 = 3;
	}
	else if (iLocal_149 == 3)
	{
		if (__LIB_0__::func_48(Global_35, iLocal_69, 2f, 1))
		{
			if (__LIB_4__::func_365())
			{
				Var1 = 1;
				Var1.f_1 = joaat("WEAPON_BOW");
				HUD::_0x8A59D44189AF2BC5(&Var1, -1001145251);
				__LIB_3__::func_787(1);
				__LIB_12__::func_883(uParam0, "PRS1_BC_LOADOUT_3", 1, -1, 1, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				iLocal_149 = 4;
			}
		}
		else
		{
			iLocal_149 = 0;
			__LIB_1__::func_561(&uLocal_358);
		}
	}
	else if (iLocal_149 == 4)
	{
		if (__LIB_11__::func_805() == joaat("WEAPON_BOW"))
		{
			__LIB_3__::func_787(2);
			__LIB_12__::func_883(uParam0, "PRS1_BC_LOADOUT_4", 1, -1, 1, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			iLocal_149 = 5;
		}
		else if (!__LIB_0__::func_48(Global_35, iLocal_69, 2f, 1))
		{
			if (!__LIB_0__::func_899(&uLocal_358))
			{
				__LIB_2__::func_259(&uLocal_358);
			}
			else if (__LIB_9__::func_178(&uLocal_358) > fVar0)
			{
				iLocal_149 = 0;
				__LIB_1__::func_561(&uLocal_358);
			}
		}
		else if (!__LIB_4__::func_365() && !__LIB_0__::func_163(Global_35, -1057545828))
		{
			if (!__LIB_0__::func_899(&uLocal_358))
			{
				__LIB_2__::func_259(&uLocal_358);
			}
			else if (__LIB_9__::func_178(&uLocal_358) > fVar0)
			{
				iLocal_149 = 2;
				__LIB_1__::func_561(&uLocal_358);
			}
		}
	}
	else if (iLocal_149 == 5)
	{
		if (WEAPON::_0xF29A186ED428B552(Global_35, joaat("WEAPON_BOW")) && WEAPON::_0xAFFD0CCF31F469B8(iLocal_69) != joaat("WEAPON_BOW"))
		{
			__LIB_3__::func_760();
			UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
			__LIB_1__::func_561(&uLocal_358);
			iLocal_149 = 0;
			HUD::_0x160825DADF1B04B3();
			func_432(0);
		}
		else if (__LIB_11__::func_805() != joaat("WEAPON_BOW"))
		{
			iLocal_149 = 3;
			HUD::_0x160825DADF1B04B3();
			__LIB_1__::func_561(&uLocal_358);
		}
		if (!__LIB_0__::func_48(Global_35, iLocal_69, 2f, 1))
		{
			if (!__LIB_0__::func_899(&uLocal_358))
			{
				__LIB_2__::func_259(&uLocal_358);
			}
			else if (__LIB_9__::func_178(&uLocal_358) > fVar0)
			{
				iLocal_149 = 0;
				__LIB_1__::func_561(&uLocal_358);
			}
		}
		else if (!__LIB_4__::func_365() && !__LIB_0__::func_163(Global_35, -1057545828))
		{
			if (!__LIB_0__::func_899(&uLocal_358))
			{
				__LIB_2__::func_259(&uLocal_358);
			}
			else if (__LIB_9__::func_178(&uLocal_358) > fVar0)
			{
				iLocal_149 = 2;
				__LIB_1__::func_561(&uLocal_358);
			}
		}
	}
}

void func_963()
{
	if (func_1654(0, 0, 0) && func_1655(0))
	{
		func_432(0);
	}
}

void func_964(var uParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	bVar0 = false;
	bVar1 = false;
	bVar2 = false;
	bVar3 = false;
	if (__LIB_0__::func_153(Global_35, 0, 1, 0) == joaat("WEAPON_BOW"))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_AIM")))
		{
			bVar1 = true;
		}
	}
	else if (!bLocal_183)
	{
		if (iLocal_149 != 0)
		{
			__LIB_3__::func_760();
			UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
			iLocal_149 = 0;
		}
		if (iLocal_148 != 0)
		{
			iLocal_148 = 0;
		}
		if (!bLocal_190)
		{
			__LIB_12__::func_883(uParam0, "PRS1_BC_BOW_0", 1, -1, 1, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			bLocal_190 = true;
		}
		return;
	}
	if (bVar1)
	{
		if (PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_ATTACK")))
		{
			bVar2 = true;
		}
		if (!func_1656(1))
		{
			iLocal_29[1] = __LIB_0__::func_45(func_404(1), 10000, 0, 0, 0, 1);
			func_1657(1);
		}
	}
	if (iLocal_138 != WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, joaat("AMMO_ARROW")))
	{
		bVar3 = true;
	}
	if (!bLocal_183)
	{
		if (iLocal_149 == 0)
		{
			__LIB_10__::func_731();
			__LIB_3__::func_834(3);
			iLocal_149 = 1;
			bLocal_190 = false;
		}
		else if (iLocal_149 == 1)
		{
			if (iLocal_148 == 0)
			{
				__LIB_3__::func_787(0);
				__LIB_12__::func_883(uParam0, "PRS1_BC_BOW_1", 1, -1, 1, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				iLocal_148 = 1;
				return;
			}
			else if (iLocal_148 == 1)
			{
				if (bVar1)
				{
					__LIB_3__::func_787(1);
					__LIB_12__::func_883(uParam0, "PRS1_BC_BOW_2", 1, -1, 1, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					iLocal_148 = 2;
					return;
				}
			}
			else if (iLocal_148 == 2)
			{
				if (bVar2)
				{
					__LIB_3__::func_787(2);
					__LIB_12__::func_883(uParam0, "PRS1_BC_BOW_3", 1, -1, 1, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					iLocal_148 = 3;
					return;
				}
				else if (!bVar1 && !bVar3)
				{
					iLocal_148 = 0;
					return;
				}
			}
			else if (iLocal_148 == 3)
			{
				if (bVar3)
				{
					__LIB_3__::func_760();
					UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
					iLocal_149 = 0;
					bLocal_183 = true;
					iLocal_148 = 4;
					return;
				}
				else if (!bVar1 && !bVar3)
				{
					iLocal_148 = 0;
					return;
				}
			}
		}
	}
	else if (iLocal_148 == 4)
	{
		if (!func_1656(2))
		{
			if (func_1655(1))
			{
				if (!__LIB_0__::func_899(&uLocal_388))
				{
					__LIB_2__::func_259(&uLocal_388);
				}
				else if (__LIB_9__::func_178(&uLocal_388) > 9f && !__LIB_10__::func_598())
				{
					iLocal_29[2] = __LIB_0__::func_45(func_404(2), 10000, 0, 0, 0, 1);
					func_1657(2);
					__LIB_1__::func_561(&uLocal_388);
				}
			}
		}
		else if (func_1655(2))
		{
			if (!func_1656(3))
			{
				if (!__LIB_10__::func_598())
				{
					iVar4 = 0;
					iVar4 = 0;
					while (iVar4 < 4)
					{
						if (iLocal_414 == 6)
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_459[iVar4 /*45*/]))
							{
								iVar5 = __LIB_0__::func_57(Local_459[iVar4 /*45*/]);
								if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar5, true, false))
								{
									iLocal_29[3] = __LIB_0__::func_45(func_404(3), 10000, 0, 0, 0, 1);
									func_1657(3);
								}
							}
						}
						else if (iLocal_414 > 6)
						{
							func_1657(3);
						}
						iVar4++;
					}
				}
			}
			else if (func_1655(3))
			{
				func_432(0);
			}
		}
	}
}

void func_965()
{
	func_432(6);
	return;
}

void func_966()
{
	if (func_1654(4, 0, 0) && func_1655(4))
	{
		func_432(0);
	}
}

void func_967(var uParam0)
{
	if (func_411(18, 0) != 3)
	{
		return;
	}
	if (func_1654(7, 0, 0))
	{
		if (!__LIB_0__::func_27(iLocal_132, 262144))
		{
			__LIB_1__::func_683(&iLocal_132, 131072);
		}
		if (!__LIB_0__::func_27(iLocal_132, 262144))
		{
			__LIB_1__::func_683(&iLocal_132, 262144);
		}
		if (!bLocal_182)
		{
			if (iLocal_149 == 0)
			{
				iLocal_149 = 1;
			}
			else if (iLocal_149 == 1)
			{
				__LIB_12__::func_883(uParam0, "PRS1_BC_TRACKS_2", 1, -1, 1, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				iLocal_149 = 2;
			}
			else if (iLocal_149 == 2)
			{
				if (PLAYER::_0x45AB66D02B601FA7(PLAYER::PLAYER_ID()))
				{
					__LIB_12__::func_883(uParam0, "PRS1_BC_TRACKS_3", 1, -1, 1, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					iLocal_149 = 3;
				}
			}
			else if (iLocal_149 == 3)
			{
				if (PLAYER::_0x45AB66D02B601FA7(PLAYER::PLAYER_ID()))
				{
					if (((PLAYER::_0x3813E11A378958A5(PLAYER::GET_PLAYER_INDEX()) == __LIB_0__::func_57(Local_459[0 /*45*/]) || PLAYER::_0x3813E11A378958A5(PLAYER::GET_PLAYER_INDEX()) == __LIB_0__::func_57(Local_459[1 /*45*/])) || PLAYER::_0x3813E11A378958A5(PLAYER::GET_PLAYER_INDEX()) == __LIB_0__::func_57(Local_459[2 /*45*/])) || PLAYER::_0x3813E11A378958A5(PLAYER::GET_PLAYER_INDEX()) == __LIB_0__::func_57(Local_459[3 /*45*/]))
					{
						__LIB_0__::func_105(1);
						func_1654(9, 0, 0);
						UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
						iLocal_149 = 4;
					}
				}
				else if (((PLAYER::_0x3813E11A378958A5(PLAYER::GET_PLAYER_INDEX()) == __LIB_0__::func_57(Local_459[0 /*45*/]) || PLAYER::_0x3813E11A378958A5(PLAYER::GET_PLAYER_INDEX()) == __LIB_0__::func_57(Local_459[1 /*45*/])) || PLAYER::_0x3813E11A378958A5(PLAYER::GET_PLAYER_INDEX()) == __LIB_0__::func_57(Local_459[2 /*45*/])) || PLAYER::_0x3813E11A378958A5(PLAYER::GET_PLAYER_INDEX()) == __LIB_0__::func_57(Local_459[3 /*45*/]))
				{
					__LIB_0__::func_105(1);
					func_1654(9, 0, 0);
					UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
					iLocal_149 = 4;
				}
				else
				{
					UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
					iLocal_149 = 0;
				}
			}
			else if (iLocal_149 == 4)
			{
				if (!__LIB_0__::func_899(&uLocal_397))
				{
					__LIB_2__::func_259(&uLocal_397);
				}
				else if (__LIB_9__::func_178(&uLocal_397) > 5f)
				{
					func_411(20, 0);
				}
				if (((PLAYER::_0x3813E11A378958A5(PLAYER::GET_PLAYER_INDEX()) != __LIB_0__::func_57(Local_459[0 /*45*/]) && PLAYER::_0x3813E11A378958A5(PLAYER::GET_PLAYER_INDEX()) != __LIB_0__::func_57(Local_459[1 /*45*/])) && PLAYER::_0x3813E11A378958A5(PLAYER::GET_PLAYER_INDEX()) != __LIB_0__::func_57(Local_459[2 /*45*/])) && PLAYER::_0x3813E11A378958A5(PLAYER::GET_PLAYER_INDEX()) != __LIB_0__::func_57(Local_459[3 /*45*/]))
				{
					__LIB_0__::func_105(1);
					func_1654(10, 0, 0);
					func_411(20, 0);
					iLocal_149 = 0;
					if (__LIB_0__::func_899(&uLocal_397))
					{
						__LIB_1__::func_561(&uLocal_397);
					}
					bLocal_182 = true;
				}
			}
		}
		else
		{
			if (__LIB_0__::func_27(iLocal_132, 131072))
			{
				__LIB_1__::func_681(&iLocal_132, 131072);
			}
			__LIB_1__::func_683(&iLocal_132, 262144);
		}
		if (func_1655(7))
		{
			if ((func_1655(9) && func_1655(10)) && bLocal_182)
			{
				if (func_1654(11, 0, 0))
				{
					if ((func_1655(11) && bLocal_182) && PLAYER::_0x45AB66D02B601FA7(PLAYER::PLAYER_ID()))
					{
						if (func_1654(8, 0, 0))
						{
							if (func_1655(8) && bLocal_182)
							{
								func_432(0);
							}
						}
					}
				}
			}
		}
	}
}

void func_968(var uParam0)
{
	if (__LIB_3__::func_996(Global_35))
	{
		UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
		iLocal_149 = 0;
		func_432(0);
		return;
	}
	if (iLocal_149 == 0)
	{
		iLocal_149 = 1;
	}
	else if (iLocal_149 == 1)
	{
		if (!bLocal_194)
		{
			__LIB_12__::func_883(uParam0, "PRS1_BC_SKIN_1", 1, 7500, 1, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			bLocal_194 = true;
		}
		else
		{
			__LIB_13__::func_89(uParam0, "PRS1_BC_SKIN_1", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
		}
		iLocal_149 = 2;
	}
	else if (iLocal_149 == 2)
	{
		if (__LIB_0__::func_48(Global_35, Local_459[iLocal_455 /*45*/], 1.5f, 1))
		{
			__LIB_12__::func_883(uParam0, "PRS1_BC_SKIN_2", 1, -1, 1, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			iLocal_149 = 3;
		}
	}
	else if (iLocal_149 == 3)
	{
		if (!__LIB_0__::func_48(Global_35, Local_459[iLocal_455 /*45*/], 1.5f, 1))
		{
			UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
			iLocal_149 = 1;
		}
	}
}

void func_969()
{
	func_432(0);
}

void func_970()
{
	if (iLocal_433 >= 11 && iLocal_433 <= 15)
	{
		if (!__LIB_0__::func_48(Global_35, iLocal_70, 60f, 1))
		{
			func_1660(ENTITY::GET_ENTITY_COORDS(iLocal_70, true, false), 1112014848 /* Float: 50f */);
		}
		if (!__LIB_0__::func_48(Global_35, iLocal_67, 60f, 1))
		{
			func_1660(ENTITY::GET_ENTITY_COORDS(iLocal_67, true, false), 1112014848 /* Float: 50f */);
		}
		if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_67, 0))
		{
			func_1660(func_1661(sLocal_232, 0), 100f);
		}
	}
}

int func_974(char* sParam0, float fParam1)
{
	return func_1663(sParam0, fParam1);
}

bool func_976(int iParam0, char* sParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return true;
	}
	if (!ANIMSCENE::_0xA9016536015DE29D(vLocal_695[iParam0 /*3*/], sParam1))
	{
		return false;
	}
	if (ANIMSCENE::_0x23E33CB9F4A3F547(vLocal_695[iParam0 /*3*/], sParam1))
	{
		return true;
	}
	if (!ANIMSCENE::_0x0DF57F86FE71DBE5(vLocal_695[iParam0 /*3*/], sParam1))
	{
		if (ANIMSCENE::_0xDF7B5144E25CD3FE(vLocal_695[iParam0 /*3*/], sParam1))
		{
		}
	}
	return false;
}

bool func_978(int iParam0)
{
	if (!func_1017(iParam0))
	{
		return true;
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(vLocal_695[iParam0 /*3*/]))
	{
		return true;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(vLocal_695[iParam0 /*3*/], false))
	{
		return true;
	}
	return false;
}

void func_980(int iParam0)
{
	if (func_411(24, 0) == 3)
	{
		if (func_1656(4))
		{
			if (!PED::_GET_PED_CROUCH_MOVEMENT(Global_35))
			{
				if (!__LIB_0__::func_899(&uLocal_331))
				{
					__LIB_2__::func_259(&uLocal_331);
				}
				if (func_603(28) == 3)
				{
					if (__LIB_9__::func_178(&uLocal_331) >= 10f)
					{
						func_411(25, 0);
					}
				}
				else if (__LIB_9__::func_178(&uLocal_331) >= 5f)
				{
					iParam0 = func_411(28, 0);
					if (iParam0 == 2 || iParam0 == 1)
					{
						__LIB_1__::func_561(&uLocal_331);
					}
				}
			}
			else
			{
				__LIB_1__::func_561(&uLocal_331);
			}
		}
	}
}

bool func_981(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (!func_431(iParam0) && !func_410(&Local_50, iParam0))
	{
		return true;
	}
	if (bParam1)
	{
		iVar0 = func_603(iParam0);
		if (iVar0 == 2 || iVar0 == 9)
		{
			return false;
		}
	}
	iVar1 = iParam0;
	iVar2 = 0;
	while (iVar1 >= 32)
	{
		iVar1 = (iVar1 - 32);
		iVar2++;
	}
	if (iVar2 >= 5)
	{
		return true;
	}
	iVar3 = __LIB_0__::func_771(iVar1);
	__LIB_0__::func_516(&(Local_50[iVar2]), iVar3);
	__LIB_0__::func_516(&(Local_50.f_6[iVar2]), iVar3);
	return true;
}

bool func_985()
{
	if (__LIB_0__::func_27(iLocal_132, -2147483648))
	{
		return true;
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_144))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_144, true, false))
		{
			__LIB_1__::func_683(&iLocal_132, -2147483648);
			return true;
		}
	}
	else
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_67))
		{
			return false;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_459[iLocal_457 /*45*/]))
		{
			return false;
		}
		iLocal_144 = ANIMSCENE::_CREATE_ANIM_SCENE("script@rcm@prsn@leadin@rsc2@charles_drop_deer_on_table", 0, "pl_drop_deer", false, true);
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_144))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_144, "CharlesSmith", iLocal_67, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_144, "Deer_01", Local_459[iLocal_457 /*45*/], 0);
			ANIMSCENE::LOAD_ANIM_SCENE(iLocal_144);
		}
	}
	return false;
}

void func_986(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 >= 32)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 >= 5)
	{
		return;
	}
	iVar2 = __LIB_0__::func_771(iVar0);
	__LIB_0__::func_516(&(Local_50[iVar1]), iVar2);
	__LIB_0__::func_516(&(Local_50.f_6[iVar1]), iVar2);
}

Vector3 func_987()
{
	return -1347.675f, 2402.367f, 307.4027f;
}

bool func_988()
{
	return AUDIO::_0xD9130842D7226045("RPRSN_Sounds", 0);
}

void func_989()
{
	AUDIO::_PLAY_SOUND_FROM_POSITION("Cauldron_Boil", func_987(), "RPRSN_Sounds", false, 0, true, 0);
}

void func_990()
{
	AUDIO::_0x9D746964E0CF2C5F("Cauldron_Boil", "RPRSN_Sounds");
	AUDIO::_0x531A78D6BF27014B("RPRSN_Sounds");
}

bool func_994()
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!__LIB_0__::func_272(Local_459[iVar0 /*45*/], 1))
		{
		}
		else if (func_1666(&(Local_459[iVar0 /*45*/]), 1, 1084227584 /* Float: 5f */, 1112014848 /* Float: 50f */, 1063675494 /* Float: 0.9f */))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_995(int iParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
		fVar8 = __LIB_5__::func_439(fParam12 >= 0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*iParam0, true, false)));
		__LIB_14__::func_95(iParam0, iParam1, uParam3, fParam2, fVar8, sParam7);
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
		if (__LIB_2__::func_525(*iParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (__LIB_13__::func_500(iParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_995(iParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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
					__LIB_12__::func_951(iParam1, uParam3);
					if (func_1676(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
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
					if (__LIB_13__::func_43(*iParam0, iParam1, uParam3))
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
					func_1676(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					__LIB_8__::func_963(iParam0, __LIB_3__::func_598(iParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
					__LIB_12__::func_951(iParam1, uParam3);
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
					else if (!(MISC::IS_BIT_SET(*iParam1, 13) || __LIB_13__::func_461(iParam1)))
					{
					}
					else if (!__LIB_13__::func_51(iParam1))
					{
					}
					else
					{
						if (fParam4 > 0f)
						{
							__LIB_2__::func_259(&(iParam1->f_18));
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
					func_1676(iParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
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
			__LIB_13__::func_47(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

void func_996()
{
	if (bLocal_218)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_70))
		{
			PED::_0x06D26A96CA1BCA75(iLocal_70, 3, 0.6f, 0);
		}
	}
	if (!__LIB_0__::func_899(&uLocal_361))
	{
		__LIB_2__::func_259(&uLocal_361);
	}
	else if (__LIB_9__::func_178(&uLocal_361) > 4f)
	{
		func_843();
		if (__LIB_3__::func_547(iLocal_67, Global_35, 0.17f) != 1)
		{
			if (!__LIB_0__::func_899(&uLocal_364))
			{
				__LIB_2__::func_259(&uLocal_364);
			}
			else if (__LIB_9__::func_178(&uLocal_364) < 1f)
			{
				if (__LIB_0__::func_71(Global_35))
				{
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
				}
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_69, 0f);
			}
			else if (__LIB_0__::func_48(Global_35, iLocal_67, 5f, 1))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_69, 1f);
			}
			else if (__LIB_0__::func_48(Global_35, iLocal_67, 15f, 1))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_69, 1.5f);
			}
		}
		else
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_69, 1f);
		}
	}
	else if (__LIB_9__::func_178(&uLocal_361) > 3f)
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_69, 1f);
	}
	else if (__LIB_9__::func_178(&uLocal_361) > 2f)
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_69, 1.5f);
	}
	else
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_69, 1.75f);
	}
}

void func_997()
{
	if (!__LIB_0__::func_293(32))
	{
		__LIB_13__::func_72(32);
	}
}

bool func_1000(int iParam0)
{
	return func_1001(&uLocal_48, iParam0);
}

bool func_1001(int iParam0, int iParam1)
{
	int iVar0;
	if (iParam1 >= 32)
	{
		return false;
	}
	iVar0 = __LIB_0__::func_771(iParam1);
	return __LIB_0__::func_1(*iParam0, iVar0);
}

bool func_1007(int iParam0, bool bParam1)
{
	if (func_411(iParam0, bParam1) == 3)
	{
		if (func_981(iParam0, 1))
		{
			return true;
		}
	}
	return false;
}

bool func_1011(float fParam0, int iParam1, float fParam2, float fParam3, float fParam4)
{
	float fVar0;
	fVar0 = __LIB_0__::func_665(Global_35, *iParam1, 1, 1);
	if (fVar0 < *fParam2)
	{
		*fParam2 = fVar0;
		if (__LIB_0__::func_899(fParam0))
		{
			__LIB_1__::func_561(fParam0);
		}
	}
	else
	{
		if (ENTITY::GET_ENTITY_SPEED(Global_35) > 0.2f || ANIMSCENE::_0x3AB6C7B0BB0DF4B1(*iParam1, -1))
		{
			if (fVar0 < fParam3)
			{
				if (__LIB_0__::func_899(fParam0))
				{
					__LIB_1__::func_561(fParam0);
				}
				return false;
			}
		}
		if (!__LIB_0__::func_899(fParam0))
		{
			__LIB_2__::func_259(fParam0);
		}
		if (func_1689(fParam0, fParam4, 0))
		{
			__LIB_1__::func_561(fParam0);
			return true;
		}
	}
	return false;
}

bool func_1012(float fParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;
	if (*iParam3)
	{
		return false;
	}
	if (!__LIB_0__::func_272(*iParam1, 1))
	{
		return false;
	}
	if (__LIB_0__::func_394(Global_35, *iParam1, 0))
	{
		if (__LIB_0__::func_899(fParam0))
		{
			__LIB_1__::func_561(fParam0);
		}
		*iParam3 = 1;
		return false;
	}
	fVar0 = __LIB_0__::func_665(Global_35, *iParam1, 1, 1);
	if (fVar0 < *fParam2)
	{
		*fParam2 = fVar0;
		if (__LIB_0__::func_899(fParam0))
		{
			__LIB_1__::func_561(fParam0);
		}
	}
	else
	{
		if (!__LIB_0__::func_899(fParam0))
		{
			__LIB_2__::func_259(fParam0);
		}
		if (func_1689(fParam0, 1092616192 /* Float: 10f */, 0))
		{
			__LIB_1__::func_561(fParam0);
			return true;
		}
	}
	return false;
}

bool func_1013(float fParam0, vector3 vParam1, int iParam4, float fParam5, bool bParam6)
{
	float fVar0;
	float fVar1;
	if (bParam6)
	{
		return true;
	}
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vParam1, true);
	if (fVar0 < *iParam4)
	{
		*iParam4 = fVar0;
		if (__LIB_0__::func_899(fParam0))
		{
			__LIB_1__::func_561(fParam0);
		}
	}
	else
	{
		if (ENTITY::GET_ENTITY_SPEED(Global_35) > 0.2f)
		{
			fVar1 = MISC::ABSF((fVar0 - *iParam4));
			if (fVar1 <= fParam5)
			{
				if (__LIB_0__::func_899(fParam0))
				{
					__LIB_1__::func_561(fParam0);
				}
				return false;
			}
		}
		if (!__LIB_0__::func_899(fParam0))
		{
			__LIB_2__::func_259(fParam0);
		}
		if (func_1689(fParam0, 1092616192 /* Float: 10f */, 0))
		{
			__LIB_1__::func_561(fParam0);
			return true;
		}
	}
	return false;
}

void func_1016(int iParam0)
{
	if (iLocal_662 == iParam0)
	{
		return;
	}
	if (!PLAYER::_0x2009F8AB7A5E9D6D(PLAYER::GET_PLAYER_INDEX()))
	{
		return;
	}
	iLocal_662 = iParam0;
	PLAYER::_0xDD33A82352C4652F(PLAYER::GET_PLAYER_INDEX(), iLocal_67, iLocal_662);
}

bool func_1017(int iParam0)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(vLocal_695[iParam0 /*3*/]))
	{
		return false;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(vLocal_695[iParam0 /*3*/], true, false))
	{
		return false;
	}
	return true;
}

int func_1019(int iParam0, int iParam1)
{
	char* sVar0;
	sVar0 = func_443(iParam0);
	if (!__LIB_6__::func_903(sVar0))
	{
		return 0;
	}
	if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE(sVar0) >= iParam1)
	{
		return 1;
	}
	return 2;
}

void func_1022()
{
	if (__LIB_0__::func_27(iLocal_131, 512))
	{
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_69, 48, false);
		__LIB_1__::func_681(&iLocal_131, 512);
	}
	TASK::CLEAR_PED_TASKS(iLocal_69, true, false);
	TASK::TASK_GO_TO_WHISTLE(iLocal_69, Global_35, 3);
}

void func_1023()
{
	if (__LIB_0__::func_27(iLocal_131, 512))
	{
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_69, 48, false);
		__LIB_1__::func_681(&iLocal_131, 512);
	}
	TASK::CLEAR_PED_TASKS(iLocal_69, true, false);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_69, func_187(31), 1.5f, -1, 0.25f, 0, 40000f);
}

int func_1028(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	int iVar4;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	iVar0 = INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(*iParam0);
	iVar1 = __LIB_7__::func_601(iVar0, iParam1);
	if (func_1693(*iParam0, iParam1, *iParam2, bParam3, iParam4))
	{
		Var2 = { __LIB_0__::func_777(iParam1) };
		if (STATS::_STAT_ID_IS_VALID(&Var2))
		{
			STATS::_0xBD861AE8A5181ED7(&Var2, *iParam2);
		}
		if (__LIB_7__::func_599(iParam1))
		{
			__LIB_7__::func_594(*iParam0, iParam1, *iParam2);
		}
		else
		{
			__LIB_7__::func_594(*iParam0, iParam1, *iParam2);
			__LIB_9__::func_348(*iParam0, iParam1, *iParam2, 1);
		}
		iVar4 = (iVar1 - __LIB_7__::func_601(iVar0, iParam1));
		*iParam2 = (*iParam2 - iVar4);
		return 1;
	}
	return 0;
}

int func_1056()
{
	return Global_36560.f_1;
}

void func_1100()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_1746();
	func_1747();
	func_1748();
	func_1749();
	func_1750();
	__LIB_1__::func_848();
	__LIB_0__::func_376();
}

void func_1101(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	func_506(iParam0, 1, 1, -142743235, 1);
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

void func_1134()
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
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_1771(&uVar4, &iVar1, &iVar2, &iVar3)))
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

Vector3 func_1141(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
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
		bVar10 = func_1784();
		if (VOLUME::_DOES_VOLUME_EXIST(bVar10))
		{
		}
	}
	if (!func_1785(Global_1310720.f_21))
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
				if (__LIB_12__::func_995(vVar7, iVar0, iVar1, iParam5, iParam6, bVar14, bVar10, bParam9, bParam13))
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

void func_1151()
{
	float fVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	struct<2> Var6;
	float fVar8;
	int iVar9[50];
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	if (!__LIB_0__::func_1(Global_1935630, 8192))
	{
		return;
	}
	if (__LIB_0__::func_13(32768))
	{
		return;
	}
	__LIB_0__::func_8(&Global_1935630, 8192);
	fVar0 = 0f;
	fVar0 = (fVar0 + (0.9259259f * BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("COMPLETED"), joaat("MISSIONS_CHP1")))));
	fVar0 = (fVar0 + (0.2525252f * BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("COMPLETED"), joaat("MISSIONS_CHP2")))));
	fVar0 = (fVar0 + (0.2923976f * BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("COMPLETED"), joaat("MISSIONS_CHP3")))));
	fVar0 = (fVar0 + (0.462963f * BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("COMPLETED"), joaat("MISSIONS_CHP4")))));
	fVar0 = (fVar0 + (0.9259259f * BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("COMPLETED"), joaat("MISSIONS_CHP5")))));
	fVar0 = (fVar0 + (0.308642f * BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("COMPLETED"), joaat("MISSIONS_CHP6")))));
	fVar0 = (fVar0 + (5.555555f * BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("COMPLETED"), joaat("MISSIONS_CHP7")))));
	fVar0 = (fVar0 + (0.6944444f * BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("COMPLETED"), joaat("MISSIONS_CHP8")))));
	fVar0 = (fVar0 + (0.3703704f * BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("COMPLETED"), joaat("MISSIONS_CHP9")))));
	fVar0 = (fVar0 + (0.5f * __LIB_0__::func_646(10f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("COMPLETED"), joaat("RC_STRANDS"))))));
	fVar0 = (fVar0 + (0.6f * __LIB_0__::func_646(5f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("COMPLETED"), joaat("RC_STRANDS_BOUNTY"))))));
	fVar0 = (fVar0 + (0.2f * __LIB_0__::func_646(25f, BUILTIN::TO_FLOAT(__LIB_0__::func_647(joaat("UNIQUE_BEATS_COMPLETED"))))));
	fVar0 = (fVar0 + (2f * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_647(joaat("GANG_AMBUSH_ENCOUNTERED"))))));
	fVar0 = (fVar0 + (0.3333333f * __LIB_0__::func_646(6f, BUILTIN::TO_FLOAT(__LIB_0__::func_647(joaat("GANG_HIDEOUT_COMPLETED"))))));
	fVar0 = (fVar0 + (3f * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_647(joaat("DISCOVERABLE_FOUND"))))));
	iVar1 = __LIB_0__::func_648();
	fVar0 = (fVar0 + (0.1111111f * __LIB_0__::func_646(9f, BUILTIN::TO_FLOAT(iVar1))));
	fVar2 = (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_ACTRESSES"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_ACTRESSES"))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_AMERICANS"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_AMERICANS")))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_ANIMALS"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_ANIMALS")))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_ARTISTS"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_ARTISTS")))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_GIRLS"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_GIRLS")))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_GUNSLINGERS"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_GUNSLINGERS")))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_HORSES"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_HORSES")))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_INVENTIONS"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_INVENTIONS")))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_LANDMARKS"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_LANDMARKS")))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_PLANTS"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_PLANTS")))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_SPORTS"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_SPORTS")))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(-2076669067, joaat("CARD_SET_VEHICLES"))) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(-2076669067, joaat("CARD_SET_VEHICLES")))));
	fVar0 = (fVar0 + __LIB_0__::func_646(1f, fVar2));
	fVar0 = (fVar0 + (0.05f * __LIB_0__::func_646(BUILTIN::TO_FLOAT(20), BUILTIN::TO_FLOAT(__LIB_1__::func_5()))));
	if (__LIB_1__::func_187(40))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (__LIB_1__::func_187(42))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (__LIB_1__::func_187(48))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (__LIB_1__::func_187(50))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (__LIB_1__::func_187(52))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	fVar2 = (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(joaat("TREASURE_HUNTER"), 499813453)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(joaat("TREASURE_HUNTER"), 499813453)));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(joaat("TREASURE_HUNTER"), 666607663)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(joaat("TREASURE_HUNTER"), 666607663))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(joaat("TREASURE_HUNTER"), -220219788)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(joaat("TREASURE_HUNTER"), -220219788))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(joaat("TREASURE_HUNTER"), 218622660)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(joaat("TREASURE_HUNTER"), 218622660))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(joaat("TREASURE_HUNTER"), 390004462)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(joaat("TREASURE_HUNTER"), 390004462))));
	fVar2 = __LIB_0__::func_649(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_0x5461C821D00FE15A(joaat("TREASURE_HUNTER"), 6410548)) / BUILTIN::TO_FLOAT(COLLECTION::_0x62CAB7DB62EAD434(joaat("TREASURE_HUNTER"), 6410548))));
	fVar0 = (fVar0 + (1f * __LIB_0__::func_646(1f, fVar2)));
	fVar0 = (fVar0 + (0.2f * __LIB_0__::func_646(5f, BUILTIN::TO_FLOAT(__LIB_0__::func_647(joaat("SHACK_FOUND"))))));
	fVar0 = (fVar0 + (0.2f * __LIB_0__::func_646(5f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("KILLS"), joaat("LEGENDARY_ANIMALS"))))));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(__LIB_0__::func_259(COMPENDIUM::_0x729D52F61A5A9E22(joaat("ANIMALS")), 50)) / BUILTIN::TO_FLOAT(50)));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(__LIB_0__::func_259(COMPENDIUM::_0x729D52F61A5A9E22(joaat("EQUIPMENT")), 10)) / BUILTIN::TO_FLOAT(10)));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(__LIB_0__::func_259(COMPENDIUM::_0x729D52F61A5A9E22(joaat("FISH")), 10)) / BUILTIN::TO_FLOAT(10)));
	fVar0 = (fVar0 + COMPENDIUM::_0x725D52F21A5E9E22(joaat("GANGS")));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(__LIB_0__::func_259(COMPENDIUM::_0x729D52F61A5A9E22(joaat("HERBS")), 20)) / BUILTIN::TO_FLOAT(20)));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(__LIB_0__::func_259(COMPENDIUM::_0x729D52F61A5A9E22(joaat("HORSES")), 10)) / BUILTIN::TO_FLOAT(10)));
	fVar0 = (fVar0 + (BUILTIN::TO_FLOAT(__LIB_0__::func_259(COMPENDIUM::_0x729D52F61A5A9E22(joaat("WEAPONS")), 48)) / BUILTIN::TO_FLOAT(48)));
	__LIB_1__::func_702(&iVar3, &iVar4);
	fVar0 = (fVar0 + (2f * __LIB_0__::func_646((BUILTIN::TO_FLOAT(iVar3) / BUILTIN::TO_FLOAT(iVar4)), 1f)));
	fVar0 = (fVar0 + (2f * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(func_1801(joaat("HORSES_REACHED_MAX_BOND"))))));
	fVar5 = BUILTIN::TO_FLOAT(__LIB_1__::func_6());
	fVar0 = (fVar0 + ((3f * fVar5) / BUILTIN::TO_FLOAT(9)));
	fVar0 = (fVar0 + ((1f / 4f) * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("ATTEMPTS"), joaat("BLACKJACK"))))));
	fVar0 = (fVar0 + ((1f / 4f) * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("ATTEMPTS"), joaat("DOMINOES_HAND"))))));
	fVar0 = (fVar0 + ((1f / 4f) * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("ATTEMPTS"), joaat("FIVE_FINGER"))))));
	fVar0 = (fVar0 + ((1f / 4f) * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("ATTEMPTS"), joaat("POKER_HAND"))))));
	fVar0 = (fVar0 + (0.2f * __LIB_0__::func_646(5f, BUILTIN::TO_FLOAT(__LIB_0__::func_647(joaat("SPECIAL_PED_INTERACTION"))))));
	fVar0 = (fVar0 + (0.5f * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_647(joaat("BATHS_TAKEN"))))));
	fVar0 = (fVar0 + (0.5f * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_647(joaat("SHOWS_SEEN"))))));
	fVar0 = (fVar0 + (0.5f * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_647(joaat("THEATRE_VISITS"))))));
	fVar0 = (fVar0 + ((0.5f / 6f) * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("MADE_RECIPE_TYPE"), joaat("AMMO"))))));
	fVar0 = (fVar0 + ((0.5f / 6f) * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("MADE_RECIPE_TYPE"), joaat("FOOD"))))));
	fVar0 = (fVar0 + ((0.5f / 6f) * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("MADE_RECIPE_TYPE"), joaat("HORSE_CARE"))))));
	fVar0 = (fVar0 + ((0.5f / 6f) * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("MADE_RECIPE_TYPE"), joaat("REMEDIES"))))));
	fVar0 = (fVar0 + ((0.5f / 6f) * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("MADE_RECIPE_TYPE"), joaat("WEAPONS"))))));
	fVar0 = (fVar0 + ((0.5f / 6f) * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("MADE_RECIPE_TYPE"), joaat("HUNTING"))))));
	fVar0 = (fVar0 + ((1f / 4f) * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("ROB_COMPLETED"), joaat("COACH"))))));
	fVar0 = (fVar0 + ((1f / 4f) * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("ROB_COMPLETED"), joaat("HOME"))))));
	fVar0 = (fVar0 + ((1f / 4f) * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("ROB_COMPLETED"), joaat("SHOP"))))));
	fVar0 = (fVar0 + ((1f / 4f) * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_645(joaat("ROB_COMPLETED"), joaat("TRAIN"))))));
	Var6 = { __LIB_0__::func_14(joaat("TOTAL_PROGRESS_MADE")) };
	fVar8 = __LIB_0__::func_650(Var6);
	STATS::_0xE141F6B40B1E3683(&Var6, fVar0);
	if (fVar0 > fVar8)
	{
	}
	if (__LIB_0__::func_6(Global_1898437))
	{
		iVar60 = 0;
		iVar61 = 0;
		while (iVar61 < Global_1898329)
		{
			if (!__LIB_0__::func_6(Global_1898330[iVar61]))
			{
			}
			else
			{
				iVar62 = __LIB_0__::func_291(Global_1898330[iVar61]);
				if (iVar62 == 3 || iVar62 == 4)
				{
				}
				else if (iVar62 != 1 && iVar62 != 2)
				{
					__LIB_1__::func_722(Global_1898330[iVar61]);
				}
				else
				{
					__LIB_1__::func_130(iVar61, 0);
					if (__LIB_0__::func_700(Global_1898330[iVar61]) == 1)
					{
						iVar9[iVar60] = __LIB_0__::func_299(Global_1898330[iVar61]);
						iVar60++;
						if (iVar60 >= 50)
						{
						}
						else
						{
							iVar61++;
						}
						if (iVar60 < 50)
						{
							iVar63 = 0;
							while (iVar63 < Global_40.f_450)
							{
								if (Global_40.f_450[iVar63] > -1 && Global_40.f_450[iVar63] < 200)
								{
									iVar9[iVar60] = __LIB_0__::func_299(Global_1347702[Global_40.f_450[iVar63] /*49*/].f_15);
									iVar60++;
									if (iVar60 >= 50)
									{
									}
									else
									{
										iVar63++;
									}
									if (fVar0 > fVar8)
									{
										TELEMETRY::_TELEMETRY_GAME_PROGRESS(__LIB_0__::func_299(Global_1898437), &iVar9);
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_1158(int iParam0, int iParam1)
{
	if (!Global_1901328.f_94)
	{
		if (__LIB_0__::func_192(iParam0, 606799272))
		{
			__LIB_10__::func_447(iParam0, iParam1);
		}
		if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, -1697809989))
		{
			func_806(iParam0, iParam1, 1, 0);
		}
	}
}

void func_1176()
{
	int iVar0;
	if (bLocal_189)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_115[2]))
		{
			POPULATION::_0x74C2B3DC0B294102(iLocal_115[2]);
			bLocal_189 = false;
		}
	}
	if (PED::_0x91A5F9CBEBB9D936(uLocal_129))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_129, false);
	}
	iVar0 = 0;
	while (iVar0 < 13)
	{
		__LIB_0__::func_172(iLocal_115[iVar0]);
		iVar0++;
	}
}

void func_1177(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	var uVar1;
	bVar0 = false;
	if (!VOLUME::_DOES_VOLUME_EXIST(*iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (iParam0->f_3)
		{
			bVar0 = true;
		}
	}
	else if (!iParam0->f_3)
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		__LIB_7__::func_465(*iParam0, &uVar1);
		if (bParam1)
		{
			iParam0->f_1 = __LIB_1__::func_391(*iParam0, 0, 0, 14592);
			__LIB_3__::func_730(*iParam0, 0, 0, 1, 1, 0);
			iParam0->f_3 = 1;
		}
		else
		{
			if (PED::_0x91A5F9CBEBB9D936(iParam0->f_1))
			{
				__LIB_0__::func_484(&(iParam0->f_1), *iParam0, 0);
			}
			iParam0->f_3 = 0;
		}
	}
	if (bParam2)
	{
		__LIB_0__::func_172(*iParam0);
	}
}

void func_1178(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return;
	}
	__LIB_1__::func_681(&(uParam0->f_2), 32768);
	__LIB_1__::func_681(&(uParam0->f_2), 65536);
	if (!MAP::DOES_BLIP_EXIST(uParam0->f_1))
	{
		uParam0->f_1 = MAP::GET_BLIP_FROM_ENTITY(*uParam0);
		if (!MAP::DOES_BLIP_EXIST(uParam0->f_1))
		{
			return;
		}
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_1))
	{
		__LIB_0__::func_325(&(uParam0->f_1));
	}
}

void func_1180(int* iParam0, int iParam1, int iParam2, int iParam3)
{
	if (!__LIB_0__::func_27(iLocal_139, iParam2))
	{
		return;
	}
	if (!__LIB_0__::func_27(iLocal_139, iParam3))
	{
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			__LIB_1__::func_463(*iParam0, iParam1, 1, 0, 0);
			__LIB_1__::func_683(&iLocal_139, iParam3);
		}
	}
}

void func_1183(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_172, 8))
	{
		CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
		PED::SET_PED_CONFIG_FLAG(Global_35, 141, false);
		__LIB_9__::func_433();
		__LIB_9__::func_802(1);
		__LIB_9__::func_802(2);
		__LIB_14__::func_85(2);
		__LIB_14__::func_85(1);
		__LIB_14__::func_85(8);
		__LIB_14__::func_85(32);
		__LIB_14__::func_85(16);
		__LIB_14__::func_85(64);
		__LIB_14__::func_85(256);
		__LIB_0__::func_105(1);
		func_506(joaat("UPGRADE_UPG_COOKING_SPIT"), 1, 1, -142743235, 0);
		MAP::ALLOW_SONAR_BLIPS(false);
	}
}

void func_1186(bool bParam0)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (!bParam0)
		{
			if (iVar0 != 11)
			{
				func_1836(iVar0);
			}
		}
		else
		{
			func_1836(iVar0);
		}
		iVar0++;
	}
}

int func_1225(var uParam0, int iParam1, int iParam2)
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
		return func_1225(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

int func_1255(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13, bool bParam14, bool bParam15, int iParam16)
{
	var uVar0;
	int iVar1;
	if (!__LIB_0__::func_49(iParam0))
	{
		return 0;
	}
	iVar1 = func_741(&uVar0, iParam0, bParam1, bParam2, iParam3, iParam4, iParam5, bParam7, bParam8, iParam9, iParam10, iParam11, iParam12, bParam13, bParam14, bParam15, bParam6, iParam16);
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

void func_1256(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_1256(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_1256(iVar2, vParam1, fParam4, iParam5, iParam6);
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

void func_1261()
{
	int iVar0;
	float fVar1;
	float fVar2;
	iVar0 = (CLOCK::GET_CLOCK_HOURS() * 100 + CLOCK::GET_CLOCK_MINUTES());
	if (iLocal_414 == 2 || iLocal_414 == 3)
	{
		if (fLocal_160 == 0f)
		{
			fLocal_160 = (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, func_187(29), true) - 5f);
			Local_161.f_3 = 0;
		}
		if (iVar0 < 1200)
		{
			fVar1 = (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, func_187(29), true) - 5f);
			fVar2 = __LIB_0__::func_251(((fLocal_160 - fVar1) / fLocal_160), 0f, 1f);
			__LIB_5__::func_375(12, 0, fVar2, &Local_161);
		}
	}
}

void func_1340(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	PED::SET_PED_CLOTH_PACKAGE_INDEX(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(*iParam0), 1);
	vVar0 = { vParam1 };
	vVar0.f_2 = (vVar0.z + 2f);
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &(vVar0.f_2), false))
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(*iParam0, vVar0, fParam4, false, true);
	}
	else
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(*iParam0, vParam1, fParam4, false, true);
	}
	ENTITY::_0x9587913B9E772D29(*iParam0, 0);
}

int func_1342()
{
	if (__LIB_0__::func_27(iLocal_132, 32))
	{
		return 1;
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_141))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_141, true, false))
		{
			__LIB_1__::func_683(&iLocal_132, 32);
			return 1;
		}
	}
	else
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_66))
		{
			return 0;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_67))
		{
			return 0;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_459[iLocal_455 /*45*/]))
		{
			return 0;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_459[iLocal_457 /*45*/]))
		{
			return 0;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_87))
		{
			return 0;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_85))
		{
			return 0;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_88))
		{
			return 0;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_89))
		{
			return 0;
		}
		iLocal_141 = ANIMSCENE::_CREATE_ANIM_SCENE("script@rcm@prsn@leadout@rsc_2@leadout", 0, "pl_leadout", false, true);
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_141))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_141, "MrPearson", iLocal_66, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_141, "CharlesSmith", iLocal_67, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_141, "A_C_Deer_01", Local_459[iLocal_455 /*45*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_141, "A_C_Deer_01^1", Local_459[iLocal_457 /*45*/], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_141, "P_CHAIR06X", iLocal_87, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_141, "P_CLEAVER01X", iLocal_85, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_141, "P_KETTLE03X", iLocal_88, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_141, "p_ladle02x", iLocal_89, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_141, "Arthur", Global_35, 0);
			if (CAM::_0xA24C1D341C6E0D53(0, 0, 0))
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_141, "b_FPcamera", true, false);
			}
			else
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_141, "b_FPcamera", false, false);
			}
			ANIMSCENE::LOAD_ANIM_SCENE(iLocal_141);
		}
	}
	return 0;
}

bool func_1344()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_97))
	{
		STREAMING::REQUEST_MODEL(joaat("P_CS_MEATHANGER01X"), false);
		if (STREAMING::HAS_MODEL_LOADED(joaat("P_CS_MEATHANGER01X")))
		{
			iLocal_97 = OBJECT::CREATE_OBJECT(joaat("P_CS_MEATHANGER01X"), -1336.105f, 2400.375f, 306.0026f, true, true, false, false, true);
			return false;
		}
		else
		{
			return false;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_98))
	{
		STREAMING::REQUEST_MODEL(joaat("P_CS_MEATHANGER01X"), false);
		if (STREAMING::HAS_MODEL_LOADED(joaat("P_CS_MEATHANGER01X")))
		{
			iLocal_98 = OBJECT::CREATE_OBJECT(joaat("P_CS_MEATHANGER01X"), -1336.105f, 2400.375f, 306.0026f, true, true, false, false, true);
			return false;
		}
		else
		{
			return false;
		}
	}
	return true;
}

bool func_1353()
{
	int iVar0;
	int iVar1;
	return false;
	if (!PED::_GET_PED_BLACKBOARD_BOOL(Global_35, "prsn_ilo_alt"))
	{
		return false;
	}
	iVar0 = MISC::_0x2E036F0480B8BF02();
	iVar1 = PED::_GET_PED_BLACKBOARD_INT(Global_35, "prsn_ilo_time");
	if (MISC::ABSI((iVar1 - iVar0)) > 3600)
	{
		PED::_0xA6F67BEC53379A32(Global_35, "prsn_ilo_alt");
		PED::_0x81B75428A7813E67(Global_35, "prsn_ilo_time");
		return false;
	}
	return true;
}

void func_1354(int iParam0)
{
	if (iLocal_812 == iParam0)
	{
		return;
	}
	iLocal_812 = iParam0;
	switch (iLocal_812)
	{
		case 0:
			break;
		case 1:
			func_1933();
			__LIB_3__::func_157(&(Local_733[0 /*17*/]), "PRS1_C_GREET", 0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
			func_1354(5);
			break;
		case 2:
			func_1933();
			break;
		case 3:
			func_1934(9, 1, "Loop_Idle");
			break;
		case 4:
			__LIB_3__::func_157(&(Local_733[0 /*17*/]), "PRS1_C_GREET", 0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
			if (MAP::DOES_BLIP_EXIST(Global_1347702[120 /*49*/].f_37))
			{
				__LIB_12__::func_980(&iLocal_751, &Local_733, 0, Global_1347702[120 /*49*/].f_37, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
			}
			break;
		case 5:
			func_853(9, "pl_greet_2_leadin", 1);
			PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "prsn_ilo_alt", true, -1);
			PED::_SET_PED_BLACKBOARD_INT(Global_35, "prsn_ilo_time", MISC::_0x2E036F0480B8BF02(), -1);
			break;
		case 6:
			func_1934(9, 1, "Loop_Idle_2");
			__LIB_1__::func_480(&iLocal_66);
			__LIB_2__::func_480(&Local_733, 1, 0, 1, 0);
			if (__LIB_0__::func_393(Global_35, iLocal_104, 0, 1))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Global_35, -1348.008f, 2403.702f, 306.0672f, 1f, -1, 0.25f, 0, 40000f);
			}
			else
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(Global_35, iLocal_66, 10000, -1f, -1f, -1f);
			}
			break;
	}
}

int func_1383(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)
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
				if (!__LIB_13__::func_58(iParam0, vVar0, iParam6, iParam10))
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
				func_1256(Global_1360165[iParam0 /*1157*/].f_124, vVar0, iParam6, 2, 1073741824 /* Float: 2f */);
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
			__LIB_14__::func_87(Global_1360165[iParam0 /*1157*/].f_124, iParam0);
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

bool func_1388(int iParam0, char* sParam1)
{
	char* sVar0;
	sVar0 = func_906(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return false;
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(vLocal_695[iParam0 /*3*/]))
	{
		vLocal_695[iParam0 /*3*/] = ANIMSCENE::_CREATE_ANIM_SCENE(sVar0, 16, sParam1, false, true);
		return false;
	}
	if (!vLocal_695[iParam0 /*3*/].f_1)
	{
		ANIMSCENE::LOAD_ANIM_SCENE(vLocal_695[iParam0 /*3*/]);
		vLocal_695[iParam0 /*3*/].f_1 = 1;
		return false;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(vLocal_695[iParam0 /*3*/], true, false))
	{
		return false;
	}
	return true;
}

void func_1391(var uParam0, int iParam1)
{
	if (uParam0->f_15.f_5 >= 4)
	{
		return;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_15[uParam0->f_15.f_5]) && VOLUME::_DOES_VOLUME_EXIST(iLocal_115[iParam1]))
	{
		uParam0->f_15[uParam0->f_15.f_5] = iLocal_115[iParam1];
		uParam0->f_15.f_5++;
	}
}

void func_1402(int iParam0, int iParam1)
{
	int iVar0;
	if (iParam1 >= 32)
	{
		return;
	}
	iVar0 = __LIB_0__::func_771(iParam1);
	__LIB_0__::func_516(iParam0, iVar0);
}

bool func_1461(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	switch (iParam0)
	{
		case joaat("TAXIDERMY_ORDER_01"):
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT");
			}
			Jump @714; //curOff = 84
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT");
			}
			Jump @714; //curOff = 165
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT");
			}
			Jump @714; //curOff = 301
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
			}
			Jump @714; //curOff = 506
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
			}
			if (iParam0 == joaat("TAXIDERMY_ORDER_01"))
			{
				if (bParam3)
				{
					if (__LIB_8__::func_222(iParam1))
					{
						*sParam2++;
					}
				}
				if (bParam5)
				{
					if (__LIB_8__::func_222(iParam1))
					{
						*sParam2 = (*sParam2 - iParam4);
					}
				}
				if (__LIB_8__::func_222(iVar0))
				{
					*sParam2++;
				}
				if (__LIB_8__::func_222(iVar0))
				{
					return true;
				}
			}
			else if (iParam0 == joaat("TAXIDERMY_ORDER_02"))
			{
				if (bParam3)
				{
					if (__LIB_8__::func_222(iParam1))
					{
						*sParam2++;
					}
				}
				if (bParam5)
				{
					if (__LIB_8__::func_222(iParam1))
					{
						*sParam2 = (*sParam2 - iParam4);
					}
				}
				if (__LIB_8__::func_222(iVar0))
				{
					*sParam2++;
				}
				if (__LIB_8__::func_222(iVar1))
				{
					*sParam2++;
				}
				if (__LIB_8__::func_222(iVar0) && __LIB_8__::func_222(iVar1))
				{
					return true;
				}
			}
			else if (iParam0 == joaat("TAXIDERMY_ORDER_03"))
			{
				if (bParam3)
				{
					if (__LIB_8__::func_222(iParam1))
					{
						*sParam2++;
					}
				}
				if (bParam5)
				{
					if (__LIB_8__::func_222(iParam1))
					{
						*sParam2 = (*sParam2 - iParam4);
					}
				}
				if (__LIB_8__::func_222(iVar0))
				{
					*sParam2++;
				}
				if (__LIB_8__::func_222(iVar1))
				{
					*sParam2++;
				}
				if (__LIB_8__::func_222(iVar2))
				{
					*sParam2++;
				}
				if ((__LIB_8__::func_222(iVar0) && __LIB_8__::func_222(iVar1)) && __LIB_8__::func_222(iVar2))
				{
					return true;
				}
			}
			else
			{
				if (bParam3)
				{
					if (__LIB_8__::func_222(iParam1))
					{
						*sParam2++;
					}
				}
				if (bParam5)
				{
					if (__LIB_8__::func_222(iParam1))
					{
						*sParam2 = (*sParam2 - iParam4);
					}
				}
				if (__LIB_8__::func_222(iVar0))
				{
					*sParam2++;
				}
				if (__LIB_8__::func_222(iVar1))
				{
					*sParam2++;
				}
				if (__LIB_8__::func_222(iVar2))
				{
					*sParam2++;
				}
				if (__LIB_8__::func_222(iVar3))
				{
					*sParam2++;
				}
				if (((__LIB_8__::func_222(iVar0) && __LIB_8__::func_222(iVar1)) && __LIB_8__::func_222(iVar2)) && __LIB_8__::func_222(iVar3))
				{
					return true;
				}
			}
			return false;
		}
void func_1462(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			__LIB_0__::func_803(1497516462);
			__LIB_0__::func_804(2016141805);
			__LIB_0__::func_804(1010885152);
			__LIB_0__::func_804(-502324015);
			break;
		case 2016141805:
			__LIB_0__::func_804(1497516462);
			__LIB_0__::func_803(2016141805);
			__LIB_0__::func_804(1010885152);
			__LIB_0__::func_804(-502324015);
			break;
		case 1010885152:
			__LIB_0__::func_804(1497516462);
			__LIB_0__::func_804(2016141805);
			__LIB_0__::func_803(1010885152);
			__LIB_0__::func_804(-502324015);
			break;
		case -502324015:
			__LIB_0__::func_804(1497516462);
			__LIB_0__::func_804(2016141805);
			__LIB_0__::func_804(1010885152);
			__LIB_0__::func_803(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			__LIB_0__::func_804(-538889627);
			__LIB_0__::func_804(-538880323);
			__LIB_0__::func_804(-1056767524);
			__LIB_0__::func_803(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			__LIB_1__::func_73();
			__LIB_0__::func_803(iParam0);
			break;
		case -639037538:
		case -618620429:
		case -491981251:
		case 168171957:
		case 227918160:
		case 588987611:
		case 704802028:
		case 1193080109:
		case 1649996811:
		case 2008888900:
			__LIB_1__::func_74();
			__LIB_0__::func_803(iParam0);
			break;
		case 2019386373:
			__LIB_0__::func_804(-664252410);
			__LIB_0__::func_804(2109952320);
			__LIB_0__::func_803(2019386373);
			break;
		case -664252410:
			__LIB_0__::func_804(2019386373);
			__LIB_0__::func_804(2109952320);
			__LIB_0__::func_803(-664252410);
			break;
		case 2109952320:
			__LIB_0__::func_804(2019386373);
			__LIB_0__::func_804(-664252410);
			__LIB_0__::func_803(2109952320);
			break;
		case -1674179981:
			__LIB_0__::func_804(-1835851517);
			__LIB_0__::func_804(-1838352012);
			__LIB_0__::func_803(-1674179981);
			break;
		case -1835851517:
			__LIB_0__::func_804(-1674179981);
			__LIB_0__::func_804(-1838352012);
			__LIB_0__::func_803(-1835851517);
			break;
		case -1838352012:
			__LIB_0__::func_804(-1674179981);
			__LIB_0__::func_804(-1835851517);
			__LIB_0__::func_803(-1838352012);
			break;
		case -1717960576:
			__LIB_0__::func_804(210001842);
			__LIB_0__::func_803(-1717960576);
			break;
		case 210001842:
			__LIB_0__::func_804(-1717960576);
			__LIB_0__::func_803(210001842);
			break;
		case -150493654:
			__LIB_0__::func_804(-1271608261);
			__LIB_0__::func_804(1846061697);
			__LIB_0__::func_804(-1145519186);
			__LIB_0__::func_803(-150493654);
			break;
		case -1271608261:
			__LIB_0__::func_804(-150493654);
			__LIB_0__::func_804(1846061697);
			__LIB_0__::func_804(-1145519186);
			__LIB_0__::func_803(-1271608261);
			break;
		case 1846061697:
			__LIB_0__::func_804(-150493654);
			__LIB_0__::func_804(-1271608261);
			__LIB_0__::func_804(-1145519186);
			__LIB_0__::func_803(1846061697);
			break;
		case -1145519186:
			__LIB_0__::func_804(-150493654);
			__LIB_0__::func_804(-1271608261);
			__LIB_0__::func_804(1846061697);
			__LIB_0__::func_803(-1145519186);
			break;
		case 1766284049:
			__LIB_0__::func_804(280705402);
			__LIB_0__::func_804(1926308480);
			__LIB_0__::func_803(1766284049);
			break;
		case 280705402:
			__LIB_0__::func_804(1766284049);
			__LIB_0__::func_804(1926308480);
			__LIB_0__::func_803(280705402);
			break;
		case 1926308480:
			__LIB_0__::func_804(1766284049);
			__LIB_0__::func_804(280705402);
			__LIB_0__::func_803(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				__LIB_0__::func_804(439465264);
				__LIB_0__::func_803(1609506757);
			}
			else
			{
				__LIB_0__::func_804(1609506757);
				__LIB_0__::func_804(439465264);
			}
			break;
		case 439465264:
			if (__LIB_0__::func_898(1609506757))
			{
				if (bParam1)
				{
					__LIB_0__::func_803(439465264);
				}
				else
				{
					__LIB_0__::func_804(439465264);
				}
			}
			break;
		case 1822001510:
			__LIB_0__::func_804(-1612662716);
			__LIB_0__::func_803(1822001510);
			break;
		case -1612662716:
			__LIB_0__::func_804(1822001510);
			__LIB_0__::func_803(-1612662716);
			break;
		case 1306158345:
			__LIB_0__::func_804(1952610440);
			__LIB_0__::func_804(-223469678);
			__LIB_0__::func_804(-404698347);
			__LIB_0__::func_804(1517904467);
			__LIB_0__::func_803(1306158345);
			break;
		case 1952610440:
			__LIB_0__::func_804(1306158345);
			__LIB_0__::func_804(-223469678);
			__LIB_0__::func_804(-404698347);
			__LIB_0__::func_804(1517904467);
			__LIB_0__::func_803(1952610440);
			break;
		case -223469678:
			__LIB_0__::func_804(1306158345);
			__LIB_0__::func_804(1952610440);
			__LIB_0__::func_804(-404698347);
			__LIB_0__::func_804(1517904467);
			__LIB_0__::func_803(-223469678);
			break;
		case -404698347:
			__LIB_0__::func_804(1306158345);
			__LIB_0__::func_804(1952610440);
			__LIB_0__::func_804(-223469678);
			__LIB_0__::func_804(1517904467);
			__LIB_0__::func_803(-404698347);
			break;
		case 1517904467:
			__LIB_0__::func_804(1306158345);
			__LIB_0__::func_804(1952610440);
			__LIB_0__::func_804(-223469678);
			__LIB_0__::func_804(-404698347);
			__LIB_0__::func_803(1517904467);
			break;
		case 1376646519:
			__LIB_0__::func_804(931649776);
			__LIB_0__::func_804(-434590080);
			__LIB_0__::func_804(1743048395);
			__LIB_0__::func_804(449774763);
			__LIB_0__::func_803(1376646519);
			break;
		case 931649776:
			__LIB_0__::func_804(1376646519);
			__LIB_0__::func_804(-434590080);
			__LIB_0__::func_804(1743048395);
			__LIB_0__::func_804(449774763);
			__LIB_0__::func_803(931649776);
			break;
		case -434590080:
			__LIB_0__::func_804(1376646519);
			__LIB_0__::func_804(931649776);
			__LIB_0__::func_804(1743048395);
			__LIB_0__::func_804(449774763);
			__LIB_0__::func_803(-434590080);
			break;
		case 1743048395:
			__LIB_0__::func_804(1376646519);
			__LIB_0__::func_804(931649776);
			__LIB_0__::func_804(-434590080);
			__LIB_0__::func_804(449774763);
			__LIB_0__::func_803(1743048395);
			break;
		case 449774763:
			__LIB_0__::func_804(1376646519);
			__LIB_0__::func_804(931649776);
			__LIB_0__::func_804(-434590080);
			__LIB_0__::func_804(1743048395);
			__LIB_0__::func_803(449774763);
			break;
		case -1414537028:
			__LIB_0__::func_804(38162571);
			__LIB_0__::func_804(1350391819);
			__LIB_0__::func_804(54073871);
			__LIB_0__::func_803(-1414537028);
			break;
		case 38162571:
			__LIB_0__::func_804(-1414537028);
			__LIB_0__::func_804(1350391819);
			__LIB_0__::func_804(54073871);
			__LIB_0__::func_803(38162571);
			break;
		case 1350391819:
			__LIB_0__::func_804(-1414537028);
			__LIB_0__::func_804(38162571);
			__LIB_0__::func_804(54073871);
			__LIB_0__::func_803(1350391819);
			break;
		case 54073871:
			__LIB_0__::func_804(-1414537028);
			__LIB_0__::func_804(38162571);
			__LIB_0__::func_804(1350391819);
			__LIB_0__::func_803(54073871);
			break;
		case 198200492:
			__LIB_0__::func_803(198200492);
			__LIB_0__::func_804(-1124061431);
			__LIB_0__::func_804(52706132);
			__LIB_0__::func_804(-259123672);
			break;
		case -1124061431:
			__LIB_0__::func_804(198200492);
			__LIB_0__::func_803(-1124061431);
			__LIB_0__::func_804(52706132);
			__LIB_0__::func_804(-259123672);
			break;
		case 52706132:
			__LIB_0__::func_804(198200492);
			__LIB_0__::func_804(-1124061431);
			__LIB_0__::func_803(52706132);
			__LIB_0__::func_804(-259123672);
			break;
		case -259123672:
			__LIB_0__::func_804(198200492);
			__LIB_0__::func_804(-1124061431);
			__LIB_0__::func_804(52706132);
			__LIB_0__::func_803(-259123672);
			break;
		case -919512195:
			__LIB_0__::func_803(-919512195);
			__LIB_0__::func_804(-1925798111);
			__LIB_0__::func_804(420709909);
			__LIB_0__::func_804(1703426636);
			break;
		case -1925798111:
			__LIB_0__::func_803(-1925798111);
			__LIB_0__::func_804(-919512195);
			__LIB_0__::func_804(420709909);
			__LIB_0__::func_804(1703426636);
			break;
		case 420709909:
			__LIB_0__::func_803(420709909);
			__LIB_0__::func_804(-919512195);
			__LIB_0__::func_804(-1925798111);
			__LIB_0__::func_804(1703426636);
			break;
		case 1703426636:
			__LIB_0__::func_803(1703426636);
			__LIB_0__::func_804(-919512195);
			__LIB_0__::func_804(-1925798111);
			__LIB_0__::func_804(420709909);
			break;
		case -1223121209:
			__LIB_0__::func_803(-1223121209);
			__LIB_0__::func_804(630808005);
			break;
		case 630808005:
			__LIB_0__::func_803(630808005);
			__LIB_0__::func_804(-1223121209);
			break;
		case 1453909576:
			__LIB_0__::func_803(1453909576);
			__LIB_0__::func_804(1643531967);
			break;
		case 1643531967:
			__LIB_0__::func_803(1643531967);
			__LIB_0__::func_804(1453909576);
			break;
		case 0:
			__LIB_0__::func_803(0);
			__LIB_0__::func_804(473295046);
			__LIB_0__::func_804(-1738165526);
			break;
		case 473295046:
			__LIB_0__::func_803(473295046);
			__LIB_0__::func_804(0);
			__LIB_0__::func_804(-1738165526);
			break;
		case -1738165526:
			__LIB_0__::func_803(-1738165526);
			__LIB_0__::func_804(0);
			__LIB_0__::func_804(473295046);
			break;
		case 932909855:
			__LIB_0__::func_803(932909855);
			__LIB_0__::func_804(2051822093);
			break;
		case 2051822093:
			__LIB_0__::func_803(2051822093);
			__LIB_0__::func_804(932909855);
			break;
		case 405586984:
			__LIB_0__::func_803(405586984);
			__LIB_0__::func_804(1509509592);
			__LIB_0__::func_804(-959357075);
			__LIB_0__::func_804(-1311865656);
			break;
		case 1509509592:
			__LIB_0__::func_803(1509509592);
			__LIB_0__::func_804(405586984);
			__LIB_0__::func_804(-959357075);
			__LIB_0__::func_804(-1311865656);
			break;
		case -959357075:
			__LIB_0__::func_803(-959357075);
			__LIB_0__::func_804(1509509592);
			__LIB_0__::func_804(405586984);
			__LIB_0__::func_804(-1311865656);
			break;
		case -1311865656:
			__LIB_0__::func_803(-1311865656);
			__LIB_0__::func_804(1509509592);
			__LIB_0__::func_804(-959357075);
			__LIB_0__::func_804(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				__LIB_0__::func_803(-524145696);
			}
			else
			{
				__LIB_0__::func_804(-524145696);
			}
			__LIB_0__::func_804(1626481264);
			__LIB_0__::func_804(282809459);
			break;
		case 282809459:
			__LIB_0__::func_803(282809459);
			__LIB_0__::func_804(1626481264);
			__LIB_0__::func_804(-524145696);
			break;
		case 1626481264:
			__LIB_0__::func_803(1626481264);
			__LIB_0__::func_804(-524145696);
			__LIB_0__::func_804(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				__LIB_0__::func_803(885203519);
			}
			else
			{
				__LIB_0__::func_804(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				__LIB_0__::func_803(-1080627546);
			}
			else
			{
				__LIB_0__::func_804(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!__LIB_0__::func_898(iParam0))
				{
					__LIB_0__::func_803(iParam0);
				}
			}
			else if (__LIB_0__::func_898(iParam0))
			{
				__LIB_0__::func_804(iParam0);
			}
			break;
	}
}

void func_1471(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == __LIB_1__::func_35(iParam1, 5) || iParam0 == __LIB_1__::func_35(iParam1, 6)) || iParam0 == __LIB_1__::func_35(iParam1, 7)) || iParam0 == __LIB_1__::func_35(iParam1, 8)) || iParam0 == __LIB_1__::func_35(iParam1, 9))
	{
		func_1461(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		__LIB_9__::func_355(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		__LIB_10__::func_706(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_1472(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	iVar0 = 1;
	if ((((iParam0 == __LIB_1__::func_35(iParam1, 5) || iParam0 == __LIB_1__::func_35(iParam1, 6)) || iParam0 == __LIB_1__::func_35(iParam1, 7)) || iParam0 == __LIB_1__::func_35(iParam1, 8)) || iParam0 == __LIB_1__::func_35(iParam1, 9))
	{
		if (func_1461(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			__LIB_9__::func_355(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				__LIB_10__::func_706(51, 0, 0, iVar0, __LIB_1__::func_34(iParam1, 20), 1, 0);
			}
		}
		else
		{
			__LIB_9__::func_355(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				__LIB_10__::func_706(51, 0, 0, iVar0, __LIB_1__::func_34(iParam1, 20), 1, 0);
			}
		}
	}
}

void func_1526(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 >= 32)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 >= 2)
	{
		return;
	}
	iVar2 = __LIB_0__::func_771(iVar0);
	__LIB_0__::func_516(&(uLocal_14[iVar1]), iVar2);
}

void func_1558(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
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
		func_2106();
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

void func_1560(var uParam0)
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
			func_1256(iVar1, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_1256(iVar3, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_1561(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if ((__LIB_0__::func_84(uParam0, 268435456) && !__LIB_0__::func_86(__LIB_12__::func_720(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { __LIB_12__::func_720(uParam0) };
			func_1256(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

bool func_1625()
{
	if (__LIB_0__::func_27(iLocal_131, 2048))
	{
		return false;
	}
	return iLocal_414 >= 10;
}

bool func_1632(var uParam0, float fParam1, float fParam2)
{
	int iVar0;
	if (iLocal_134 == 0 || iLocal_136 == 0)
	{
		return false;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (__LIB_0__::func_272(Local_459[iVar0 /*45*/], 1))
		{
		}
		else if (Local_459[iVar0 /*45*/] == *uParam0)
		{
		}
		else if (__LIB_9__::func_178(&(Local_459[iVar0 /*45*/].f_21)) > fParam2)
		{
		}
		else if (!__LIB_0__::func_48(*uParam0, Local_459[iVar0 /*45*/], fParam1, 0))
		{
		}
		else
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1633(var uParam0, float fParam1, float fParam2)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!__LIB_0__::func_272(Local_459[iVar0 /*45*/], 1))
		{
		}
		else if (Local_459[iVar0 /*45*/] == *uParam0)
		{
		}
		else if (!__LIB_0__::func_27(Local_459[iVar0 /*45*/].f_2, 2048))
		{
		}
		else if (__LIB_9__::func_178(&(Local_459[iVar0 /*45*/].f_30)) > fParam2)
		{
		}
		else if (__LIB_0__::func_48(*uParam0, Local_459[iVar0 /*45*/], fParam1, 1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_1634(var uParam0)
{
	func_2180(uParam0);
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		if (iLocal_414 >= 7)
		{
			func_1178(uParam0);
			return;
		}
		else
		{
			if (__LIB_1__::func_472(*uParam0, 20f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */))
			{
				func_2181(uParam0, 1, 0);
				return;
			}
			if (__LIB_2__::func_401(*uParam0, 1, 1, 0, 0, 0))
			{
				func_2181(uParam0, 1, 0);
				return;
			}
		}
	}
	else
	{
		if (!__LIB_0__::func_27(uParam0->f_2, 4))
		{
			if (iLocal_414 >= 10)
			{
				func_1178(uParam0);
				return;
			}
		}
		if (__LIB_0__::func_27(uParam0->f_2, 64))
		{
			func_1178(uParam0);
			return;
		}
		if (iLocal_455 == 4)
		{
			if (iLocal_414 >= 7)
			{
				func_2181(uParam0, 1, 0);
			}
			else
			{
				func_2181(uParam0, 0, 0);
			}
			return;
		}
		if (!func_2182(uParam0))
		{
			func_1178(uParam0);
			return;
		}
		if (iLocal_414 == 13)
		{
			if (__LIB_0__::func_27(iLocal_132, 2048))
			{
				func_1178(uParam0);
				return;
			}
			if (PED::_GET_CARRIER_AS_PED(*uParam0) == 0)
			{
				func_2181(uParam0, 1, 1);
				return;
			}
			if (ENTITY::_0x61914209C36EFDDB(*uParam0) == 7 && __LIB_0__::func_27(uParam0->f_2, 16))
			{
				func_2181(uParam0, 1, 1);
				__LIB_8__::func_810(7);
				__LIB_1__::func_643();
				return;
			}
			return;
		}
		if (iLocal_414 == 14)
		{
			if (func_2182(uParam0))
			{
				func_2181(uParam0, 1, 1);
				if (MAP::DOES_BLIP_EXIST(uParam0->f_1))
				{
					MAP::_BLIP_SET_MODIFIER(uParam0->f_1, -401963276);
				}
			}
			return;
		}
		if (iLocal_414 >= 8)
		{
			if (PED::_GET_CARRIER_AS_PED(*uParam0) == 0)
			{
				func_2181(uParam0, 1, 0);
				return;
			}
			else
			{
				func_1178(uParam0);
				return;
			}
			return;
		}
	}
}

bool func_1635(var uParam0)
{
	int iVar0;
	if (__LIB_0__::func_272(*uParam0, 0))
	{
		return false;
	}
	if (WEAPON::_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(*uParam0, joaat("WEAPON_BOW"), 0))
	{
		return false;
	}
	iVar0 = PED::GET_PED_CAUSE_OF_DEATH(*uParam0);
	if ((iVar0 != 0 && iVar0 != joaat("WEAPON_BLEEDING")) && iVar0 != joaat("WEAPON_MELEE_KNIFE"))
	{
		if (iVar0 != joaat("WEAPON_BOW"))
		{
			return true;
		}
	}
	return false;
}

void func_1639()
{
	STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("RPRSN"), joaat("RPRSN_KILLDEER1ARROW"), 1);
}

void func_1640()
{
	STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("RPRSN"), joaat("RPRSN_DONTSPOOKDEER"), 1);
}

void func_1641()
{
	STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("RPRSN"), joaat("RPRSN_PERFECTKILL"), 1);
}

bool func_1642(char* sParam0, int iParam1)
{
	int iVar0;
	if (TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sParam0, Global_36, &iVar0))
	{
		if (iVar0 >= iParam1)
		{
			return true;
		}
	}
	return false;
}

char* func_1644(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "";
		case 1:
			return "script@cme@RPRSN1_CME_HILL";
		case 2:
			return "script@cme@RPRSN1_CME_Riding";
		case 3:
			return "script@cme@RPRSN1_CME_NOCAMP";
		case 4:
			return "";
	}
	return "";
}

bool func_1654(int iParam0, bool bParam1, bool bParam2)
{
	char* sVar0;
	if (func_1656(iParam0))
	{
		return true;
	}
	sVar0 = func_404(iParam0);
	if (__LIB_10__::func_598())
	{
		if (!__LIB_0__::func_269(iLocal_29[iParam0]))
		{
			if (bParam2)
			{
				__LIB_0__::func_105(0);
			}
			if (!__LIB_0__::func_899(&uLocal_283))
			{
				__LIB_2__::func_259(&uLocal_283);
			}
			else if (__LIB_1__::func_592(&uLocal_283) > 10000)
			{
				__LIB_0__::func_105(1);
			}
		}
		return false;
	}
	__LIB_1__::func_561(&uLocal_283);
	if (!__LIB_0__::func_30(iLocal_29[iParam0]))
	{
		if (bParam1)
		{
			iLocal_29[iParam0] = __LIB_4__::func_981(sVar0, 0, 0, 1);
		}
		else
		{
			iLocal_29[iParam0] = __LIB_0__::func_45(sVar0, 10000, 0, 0, 0, 1);
		}
	}
	func_1657(iParam0);
	return false;
}

bool func_1655(int iParam0)
{
	if (!func_1656(iParam0))
	{
		return true;
	}
	return !__LIB_3__::func_127(iLocal_29[iParam0]);
}

bool func_1656(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 >= 32)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 >= 2)
	{
		return false;
	}
	iVar2 = __LIB_0__::func_771(iVar0);
	return __LIB_0__::func_1(uLocal_26[iVar1], iVar2);
}

void func_1657(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 >= 32)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 >= 2)
	{
		return;
	}
	iVar2 = __LIB_0__::func_771(iVar0);
	__LIB_1__::func_336(&(uLocal_26[iVar1]), iVar2);
}

void func_1660(vector3 vParam0, float fParam3)
{
	if (__LIB_0__::func_86(vParam0))
	{
		return;
	}
	PATHFIND::_0xCF213A5FC3ABFC08(vParam0.x, vParam0.y, fParam3);
}

Vector3 func_1661(char* sParam0, int iParam1)
{
	vector3 vVar0;
	vVar0 = { 0f, 0f, 0f };
	if (TASK::WAYPOINT_RECORDING_GET_COORD(sParam0, iParam1, &vVar0))
	{
		return vVar0;
	}
	return vVar0;
}

int func_1663(char* sParam0, float fParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	int iVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	var uVar11;
	var uVar12;
	if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_67, 0))
	{
		if (!TASK::_0x9FF5F9B24E870748(iLocal_67) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_67, -1))
		{
			return 1;
		}
		return 0;
	}
	iVar1 = TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_67);
	TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(sParam0, &iVar5);
	TASK::WAYPOINT_RECORDING_GET_COORD(sParam0, (iVar5 - 1), &vVar2);
	if (__LIB_0__::func_266(iLocal_67, vVar2, 5f, 1, 1))
	{
		return 1;
	}
	if (func_2186())
	{
		if (!TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(iLocal_67))
		{
			TASK::WAYPOINT_PLAYBACK_PAUSE(iLocal_67, 0, 0, 0);
		}
	}
	else if (TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(iLocal_67))
	{
		if (!bLocal_199)
		{
			TASK::WAYPOINT_PLAYBACK_RESUME(iLocal_67, true, -1, 0);
		}
	}
	if (TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(iLocal_67))
	{
		return 0;
	}
	fVar6 = 1.25f;
	fVar7 = fLocal_156;
	fVar8 = (fLocal_156 + fLocal_157);
	fVar9 = fLocal_155;
	fVar10 = 0.2f;
	PED::_0xF60165E1D2C5370B(iLocal_69, &uVar11, &uVar12);
	switch (iLocal_433)
	{
		case 3:
			if (!bLocal_203)
			{
				if (iVar1 >= 9)
				{
					func_411(2, 0);
				}
				if (iVar1 >= 43)
				{
					if (func_411(4, 0) == 3)
					{
						if (!__LIB_0__::func_27(iLocal_132, 2097152))
						{
							func_421(4, 0);
							__LIB_1__::func_683(&iLocal_132, 2097152);
						}
					}
				}
				if (iVar1 >= 48)
				{
					func_960();
				}
				if (iVar1 < 2)
				{
					fVar6 = 1f;
				}
				else if (iVar1 < 5)
				{
					fVar6 = 1.25f;
				}
				else if (iVar1 < 25)
				{
					fVar6 = 1.25f;
				}
				else if (iVar1 < 36)
				{
					fVar6 = fLocal_153;
				}
				else
				{
					fVar6 = fLocal_154;
					Jump @393; //curOff = 371
					if (iVar1 >= 94)
					{
						func_411(8, 0);
					}
					fVar6 = fLocal_154;
					Jump @1225; //curOff = 393
					if (iVar1 >= 1)
					{
						func_411(9, 0);
					}
					if (iVar1 >= 3)
					{
						func_411(10, 0);
					}
					if (iVar1 >= 16)
					{
						func_411(11, 0);
					}
					if (iVar1 >= 1)
					{
						fVar6 = fLocal_153;
					}
					else
					{
						fVar6 = 1.25f;
						Jump @1225; //curOff = 459
						if (!func_431(61) && !func_431(62))
						{
							if (!__LIB_0__::func_899(&uLocal_340))
							{
								if (func_603(60) == 3 || func_603(59) == 3)
								{
									__LIB_2__::func_259(&uLocal_340);
								}
							}
							else if (__LIB_9__::func_178(&uLocal_340) > 5f)
							{
								if (__LIB_1__::func_185(2))
								{
									func_411(61, 0);
								}
								else
								{
									func_411(62, 0);
								}
							}
						}
						else if (__LIB_0__::func_899(&uLocal_340))
						{
							__LIB_1__::func_561(&uLocal_340);
						}
						if (__LIB_0__::func_27(iLocal_132, 8388608))
						{
							iVar0 = func_411(72, 0);
						}
						if (iVar1 >= 189 && iVar1 < 204)
						{
							if (__LIB_0__::func_272(Local_640[0 /*17*/], 0) && !__LIB_0__::func_27(iLocal_132, 8388608))
							{
								iVar0 = func_411(65, 0);
							}
						}
						if (iVar1 >= 187 && iVar1 < 204)
						{
							if (!__LIB_0__::func_27(iLocal_132, 8388608))
							{
								if (!bLocal_220)
								{
									bLocal_220 = true;
								}
							}
						}
						if (bLocal_220)
						{
							if (!__LIB_0__::func_899(&uLocal_385))
							{
								if (!bLocal_221)
								{
									if (__LIB_0__::func_48(iLocal_69, Local_640[0 /*17*/], 49f, 1))
									{
										iLocal_151 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_ALARMING_NEW"), Local_640[0 /*17*/], 8f, 52f, 52f, 8f, -1f, 180f, false, false, 3, 2);
										PED::_0x06D26A96CA1BCA75(iLocal_69, 3, 0.8f, 0);
										__LIB_2__::func_259(&uLocal_385);
										bLocal_221 = true;
									}
								}
							}
							else if (__LIB_0__::func_899(&uLocal_385))
							{
								if (__LIB_9__::func_178(&uLocal_385) > 9f)
								{
									EVENT::REMOVE_SHOCKING_EVENT(iLocal_151);
									__LIB_1__::func_561(&uLocal_385);
								}
								else if (__LIB_9__::func_178(&uLocal_385) > 1f)
								{
									if (!bLocal_219)
									{
										if (__LIB_0__::func_45("PRS1_H_CALMHRSE", 10000, 0, 0, 0, 1) != 0)
										{
											bLocal_219 = true;
										}
									}
								}
							}
						}
						if (iVar1 >= 215)
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_640[0 /*17*/]))
							{
								func_351(&(Local_640[0 /*17*/]), 7, 0);
							}
							if (!bLocal_222)
							{
								func_455(1);
								bLocal_222 = true;
							}
							iVar0 = func_411(74, 0);
							if (iVar0 == 3)
							{
								if (!__LIB_0__::func_899(&uLocal_307))
								{
									__LIB_2__::func_259(&uLocal_307);
								}
								if (__LIB_9__::func_178(&uLocal_307) > 6f)
								{
									func_411(75, 0);
								}
							}
							else if (__LIB_0__::func_899(&uLocal_307))
							{
								__LIB_1__::func_561(&uLocal_307);
							}
						}
						if (iVar1 >= 0 && iVar1 < 29)
						{
							fVar6 = fLocal_153;
						}
						else if (iVar1 >= 29 && iVar1 < 39)
						{
							fVar6 = 1.5f;
							func_421(3, 0);
						}
						else if (iVar1 >= 170 && iVar1 < 211)
						{
							func_421(4, 0);
							fVar6 = 1.25f;
						}
						else if (iVar1 >= 211 && iVar1 < 500)
						{
							func_421(3, 0);
							fVar6 = fLocal_153;
						}
						else if (iVar1 >= 500 && iVar1 < 504)
						{
							fVar6 = 1.25f;
							func_421(4, 0);
							func_1016(3);
						}
						else if (iVar1 >= 504)
						{
							fVar6 = 1f;
							func_1016(3);
						}
						else
						{
							fVar6 = fLocal_154;
						}
					}
				}
				if (fVar6 > fParam1)
				{
					fVar6 = fParam1;
				}
				if (!bLocal_199)
				{
					func_416();
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_239))
				{
					TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(sLocal_239, 0, 1065353216 /* Float: 1f */, 1056964608 /* Float: 0.5f */, 1);
					sLocal_239 = "";
				}
				if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_67, 0))
				{
					return 0;
				}
				PED::SET_PED_RESET_FLAG(PED::GET_MOUNT(Global_35), 154, true);
				__LIB_14__::func_84(iLocal_67, fVar6, 0, fVar10, 1, fVar7, fVar8, fVar9, 0.075f, 0.75f, 1, 0, 1045220557 /* Float: 0.2f */, 0);
				return 0;
			}
			default:
				break;
	}
}

bool func_1666(var uParam0, bool bParam1, float fParam2, float fParam3, int iParam4)
{
	int iVar0;
	if (ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return false;
	}
	if (__LIB_2__::func_401(*uParam0, 1, 1, 0, 0, 0))
	{
		return true;
	}
	if (__LIB_11__::func_775(ENTITY::GET_ENTITY_COORDS(*uParam0, false, false), fParam3, iParam4))
	{
		return true;
	}
	WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false);
	if (!WEAPON::_IS_WEAPON_MELEE(iVar0) && iVar0 != joaat("WEAPON_UNARMED"))
	{
		if (!__LIB_0__::func_237(iVar0) && bParam1)
		{
			return false;
		}
		if ((PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) && PED::IS_PED_FACING_PED(Global_35, *uParam0, fParam2)) && __LIB_0__::func_665(Global_35, *uParam0, 1, 1) < fParam3)
		{
			return true;
		}
	}
	return false;
}

bool func_1676(int iParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	float fVar12;
	bool bVar13;
	iVar1 = __LIB_0__::func_492(1);
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_35);
	bVar10 = PED::IS_PED_INJURED(*iParam0);
	bVar11 = (((PED::_IS_PED_CARRYING(Global_35) || __LIB_9__::func_339(Global_35)) || __LIB_9__::func_333(Global_35)) || __LIB_9__::func_337(Global_35));
	fVar12 = -1f;
	if (__LIB_0__::func_899(&(iParam1->f_13)))
	{
		fVar12 = __LIB_1__::func_583(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((uParam4[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = (uParam4[iVar0 /*17*/])->f_8;
		}
		bVar4 = __LIB_0__::func_139((uParam4[iVar0 /*17*/])->f_6);
		__LIB_4__::func_50(*iParam0, uParam4[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (__LIB_2__::func_475(*iParam0, iParam1, uParam4[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (__LIB_2__::func_367(iParam12, (uParam4[iVar0 /*17*/])->f_6))
				{
					if (!bVar7)
					{
						__LIB_2__::func_480(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						__LIB_2__::func_526(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 11))
					{
						__LIB_12__::func_985(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
					}
					iParam1->f_1 = iVar0;
					bVar5 = true;
					iParam1->f_9 = MISC::IS_BIT_SET((*uParam4)[iParam1->f_1 /*17*/], 16);
					if (!iParam1->f_9)
					{
						MISC::SET_BIT(iParam1, 0);
					}
					if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 12) || MISC::IS_BIT_SET(*iParam1, 20))
					{
						if (!MISC::IS_BIT_SET(*iParam1, 19))
						{
							__LIB_6__::func_750(iParam1, uParam4, iParam0, fParam3, sParam9);
							bVar13 = MISC::IS_STRING_NULL_OR_EMPTY(sParam9);
							__LIB_10__::func_518(iParam1, uParam4, iParam0, bVar13, sParam9, fParam2);
						}
						if (!MISC::IS_BIT_SET(*iParam1, 7))
						{
							MISC::SET_BIT(&(iParam1->f_21), 3);
						}
						MISC::SET_BIT(&(iParam1->f_21), 20);
					}
					if (MISC::IS_BIT_SET(iParam1->f_21, 20))
					{
						if (PED::IS_PED_ON_MOUNT(Global_35) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
						{
							iParam1->f_2 = 3;
						}
						if (!MISC::IS_BIT_SET(*iParam1, 13))
						{
							if (__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 0, 1, 0)) || __LIB_0__::func_154(__LIB_0__::func_153(Global_35, 1, 1, 0)))
							{
								iParam1->f_2 = 3;
							}
						}
						if (!MISC::IS_BIT_SET(*iParam1, 12))
						{
							if (PED::_IS_PED_CARRYING(Global_35))
							{
								iParam1->f_2 = 3;
							}
						}
					}
					if (!bVar2)
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY((uParam4[iVar0 /*17*/])->f_11))
						{
							if (!MISC::IS_STRING_NULL_OR_EMPTY((uParam4[iVar0 /*17*/])->f_12))
							{
								TASK::TASK_PLAY_ANIM(Global_35, (uParam4[iVar0 /*17*/])->f_11, (uParam4[iVar0 /*17*/])->f_12, 4f, -4f, -1, 67108880, 0f, false, 0, false, 0, false);
							}
						}
					}
					if (__LIB_1__::func_500(iParam1, fParam6, iParam1->f_9))
					{
						__LIB_2__::func_259(&(iParam1->f_18));
						if (bVar6)
						{
							__LIB_2__::func_526(uParam4, 0, 0);
						}
						iParam1->f_2 = 2;
					}
					if (iParam1->f_2 != 2)
					{
						if (iParam1->f_2 != 3)
						{
							if (bVar8)
							{
								iParam1->f_2 = 0;
							}
						}
					}
					if (!bParam14)
					{
						bVar5 = true;
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		__LIB_1__::func_501(iParam1, fParam2);
	}
	return bVar5;
}

bool func_1689(float fParam0, float fParam1, bool bParam2)
{
	if (bParam2)
	{
		return true;
	}
	if (!__LIB_0__::func_899(fParam0))
	{
		__LIB_2__::func_259(fParam0);
	}
	if (__LIB_9__::func_178(fParam0) > fParam1)
	{
		return true;
	}
	return false;
}

int func_1693(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	iVar0 = INVENTORY::_INVENTORY_GET_PED_INVENTORY_ID(iParam0);
	if (__LIB_1__::func_16(iParam0))
	{
		iVar1 = __LIB_0__::func_402(iParam0);
		if (__LIB_0__::func_144(iParam1, 0))
		{
			if (__LIB_7__::func_599(iParam1))
			{
				__LIB_7__::func_681(iVar1, iParam1, iParam2);
			}
		}
	}
	return func_2225(iVar0, iParam1, iParam2, bParam3, iParam4);
}

void func_1746()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_2259(0);
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
	func_2259(1);
}

void func_1747()
{
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_328(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_1748()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_2262(0);
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
	func_2262(1);
}

void func_1749()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_1__::func_432(15000, 0, 0, 0, 1);
			func_2262(0);
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
	func_2262(1);
}

void func_1750()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_328(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_328(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_506(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_506(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
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

int func_1771(var uParam0, int iParam1, int iParam2, int iParam3)
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
	iVar11 = (func_2280(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_952(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_328(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	__LIB_1__::func_432(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

int func_1784()
{
	if (__LIB_0__::func_28())
	{
		if (!__LIB_1__::func_185(3))
		{
			return __LIB_0__::func_559(43);
		}
		if (__LIB_1__::func_185(38) && !__LIB_1__::func_185(43))
		{
			return func_2286(8);
		}
	}
	return 0;
}

bool func_1785(int iParam0)
{
	if (!__LIB_0__::func_20(iParam0))
	{
		return false;
	}
	return ((Global_1888801[iParam0 /*35*/].f_20 == 1 || Global_1888801[iParam0 /*35*/].f_20 == 2) && !func_2287(iParam0));
}

var func_1801(int iParam0)
{
	var uVar0;
	struct<2> Var1;
	Var1 = { func_793(iParam0) };
	STATS::STAT_ID_GET_INT(&Var1, &uVar0);
	return uVar0;
}

void func_1836(int iParam0)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(vLocal_695[iParam0 /*3*/]))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(vLocal_695[iParam0 /*3*/]);
	}
}

void func_1933()
{
	int iVar0;
	iVar0 = 9;
	if (!func_1017(iVar0))
	{
		return;
	}
	if (!vLocal_695[iVar0 /*3*/].f_2)
	{
		if (__LIB_0__::func_272(Global_35, 0))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(vLocal_695[iVar0 /*3*/], "Arthur", Global_35, 0);
		}
		if (__LIB_0__::func_272(iLocal_66, 0))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(vLocal_695[iVar0 /*3*/], "MrPearson", iLocal_66, 0);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_96))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(vLocal_695[iVar0 /*3*/], "s_offal01x", iLocal_96, 0);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_87))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(vLocal_695[iVar0 /*3*/], "p_chair06x", iLocal_87, 0);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_85))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(vLocal_695[iVar0 /*3*/], "p_cleaver01x", iLocal_85, 0);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_90[0]))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(vLocal_695[iVar0 /*3*/], "p_cs_rabbitfeetless", iLocal_90[0], 0);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_90[4]))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(vLocal_695[iVar0 /*3*/], "p_cs_rabbitgut", iLocal_90[4], 0);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_90[3]))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(vLocal_695[iVar0 /*3*/], "p_cs_rabbitheadless", iLocal_90[3], 0);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_90[1]))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(vLocal_695[iVar0 /*3*/], "p_cs_rabbitmeat01x", iLocal_90[1], 0);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_90[2]))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(vLocal_695[iVar0 /*3*/], "p_cs_rabbitmeat02x", iLocal_90[2], 0);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_88))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(vLocal_695[iVar0 /*3*/], "p_kettle03x_noboil", iLocal_88, 0);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_89))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(vLocal_695[iVar0 /*3*/], "p_ladle02x", iLocal_89, 0);
		}
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(vLocal_695[iVar0 /*3*/], false))
	{
		ANIMSCENE::START_ANIM_SCENE(vLocal_695[iVar0 /*3*/]);
		vLocal_695[iVar0 /*3*/].f_2 = 1;
	}
}

void func_1934(int iParam0, bool bParam1, char* sParam2)
{
	if (!func_1017(iParam0))
	{
		return;
	}
	ANIMSCENE::SET_ANIM_SCENE_BOOL(vLocal_695[iParam0 /*3*/], sParam2, bParam1, false);
}

void func_2106()
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
	iVar0 = func_2458(6291456, 0);
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

void func_2180(var uParam0)
{
	if ((iLocal_414 >= 7 || iLocal_414 < 4) || !func_406(2))
	{
		return;
	}
	if (uParam0->f_14 != 3)
	{
		return;
	}
	if (ENTITY::GET_ENTITY_SPEED(*uParam0) > 0.1f)
	{
		if (!__LIB_0__::func_899(&(uParam0->f_27)))
		{
			__LIB_2__::func_259(&(uParam0->f_27));
		}
		if (__LIB_1__::func_583(&(uParam0->f_27)) > 3f)
		{
			MAP::_TRIGGER_SONAR_BLIP_2(729220490, *uParam0);
			__LIB_2__::func_259(&(uParam0->f_27));
		}
	}
}

void func_2181(var uParam0, bool bParam1, bool bParam2)
{
	if (!MAP::DOES_BLIP_EXIST(uParam0->f_1))
	{
		uParam0->f_1 = MAP::GET_BLIP_FROM_ENTITY(*uParam0);
	}
	if (!MAP::DOES_BLIP_EXIST(uParam0->f_1))
	{
		if (ENTITY::IS_ENTITY_DEAD(*uParam0))
		{
			uParam0->f_1 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_PICKUP_ANIMAL"), *uParam0);
		}
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_1))
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_1, "PRS1_B_DEER");
	}
	if (!bParam1)
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
	}
	else if (MAP::DOES_BLIP_EXIST(uParam0->f_1))
	{
		if (!__LIB_0__::func_27(uParam0->f_2, 32768))
		{
			__LIB_1__::func_683(&(uParam0->f_2), 32768);
			__LIB_1__::func_681(&(uParam0->f_2), 65536);
			if (!__LIB_0__::func_27(uParam0->f_2, 64))
			{
				MAP::_BLIP_SET_STYLE(uParam0->f_1, joaat("BLIP_STYLE_PICKUP_ANIMAL"));
			}
			MAP::_BLIP_REMOVE_MODIFIER(uParam0->f_1, joaat("BLIP_MODIFIER_ENEMY_DISAPPEARING"));
			MAP::_BLIP_SET_MODIFIER(uParam0->f_1, -401963276);
			if (bParam2)
			{
				MAP::_BLIP_SET_MODIFIER(uParam0->f_1, 231194138);
			}
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_1, "PRS1_B_DEER");
		}
	}
}

bool func_2182(var uParam0)
{
	if (iLocal_455 == 4)
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return false;
	}
	if (*uParam0 == Local_459[iLocal_455 /*45*/])
	{
		return true;
	}
	return false;
}

bool func_2186()
{
	if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_67, 0))
	{
		return false;
	}
	if (!PED::IS_PED_ON_MOUNT(Global_35))
	{
		return true;
	}
	if (iLocal_414 == 0)
	{
		return true;
	}
	return false;
}

int func_2225(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	struct<2> Var3;
	if (!__LIB_0__::func_144(iParam1, 0))
	{
		return 0;
	}
	bVar0 = iParam4 == 562618531;
	bVar1 = iParam4 == 1992602754;
	bVar2 = iParam4 == -1387038764;
	if (!__LIB_7__::func_654(iParam0, iParam1, 1))
	{
		return 0;
	}
	Var3 = { __LIB_0__::func_777(iParam1) };
	if (STATS::_STAT_ID_IS_VALID(&Var3))
	{
		if ((__LIB_7__::func_601(iParam0, iParam1) - iParam2) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var3, iParam2);
		}
		else if ((__LIB_7__::func_601(iParam0, iParam1) - iParam2) < 0)
		{
			func_2225(iParam0, iParam1, __LIB_1__::func_614(iParam1, 0, 0), bParam3, iParam4);
			return 0;
		}
	}
	if (!__LIB_7__::func_653(iParam0, iParam1, iParam2, iParam4, bParam3))
	{
		return 0;
	}
	if (!__LIB_0__::func_708(0))
	{
		bParam3 = true;
	}
	if (!bParam3 && iParam1 != joaat("UPGRADE_FSH_BAIT_NONE"))
	{
		__LIB_1__::func_158(iParam1, -iParam2, bVar0, bVar1, bVar2);
	}
	return 1;
}

void func_2259(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (bParam0)
	{
		func_328(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_328(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_328(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_2524(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_1101(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_506(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_2529(Var0);
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

void func_2262(bool bParam0)
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
		func_328(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_328(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_328(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_328(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_328(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_328(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_328(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_328(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_328(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_328(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_328(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_506(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_506(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_506(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_506(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_506(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_506(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_506(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_506(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_506(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_506(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_506(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
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

int func_2280(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
							iVar49 = (iVar49 + func_2280(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_2280(iVar63, -915411861, 1, 0, 0));
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

int func_2286(int iParam0)
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
			Jump @9445; //curOff = 788
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
			Jump @9445; //curOff = 1571
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
			Jump @9445; //curOff = 1959
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
			Jump @9445; //curOff = 2480
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
			Jump @9445; //curOff = 2919
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
			Jump @9445; //curOff = 3514
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
			Jump @9445; //curOff = 4297
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
			Jump @9445; //curOff = 4381
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GUARMA");
			VOLUME::_0xBCE668AAF83608BE(iVar0, 2410.933f, -7578.265f, 50f, 0f, 0f, 0f, 2000f, 2000f, 890f);
			VOLUME::_0xBCE668AAF83608BE(iVar0, 2388.016f, -4563.885f, 50f, 0f, 0f, 0f, 815f, 500f, 800f);
			Jump @9445; //curOff = 4472
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
			Jump @9445; //curOff = 5583
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
			Jump @9445; //curOff = 6026
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
			Jump @9445; //curOff = 6715
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
			Jump @9445; //curOff = 7287
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
			Jump @9445; //curOff = 7859
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GAPTOOTH_RIDGE");
			VOLUME::_0x39816F6F94F385AD(iVar0, -5420f, -3447.5f, 150f, 0f, 0f, 175f, 300f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5837.5f, -3530f, 150f, 0f, 0f, -32f, 1000f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -6142.5f, -3665f, 150f, 0f, 0f, -8f, 800f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5747.5f, -2905f, 150f, 0f, 0f, 136.5f, 1300f, 750f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5407.5f, -2487.5f, 150f, 0f, 0f, -148f, 550f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5232.5f, -2825f, 150f, 0f, 0f, -178f, 400f, 530f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5667.5f, -2040f, 150f, 0f, 0f, 175f, 1100f, 800f, 700f);
			Jump @9445; //curOff = 8173
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
			Jump @9445; //curOff = 8874
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
bool func_2287(int iParam0)
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

int func_2458(int iParam0, int iParam1)
{
	var uVar0;
	return func_2643(&uVar0, iParam0, iParam1);
}

void func_2524(int iParam0)
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
	func_506(iParam0, 1, 1, -142743235, 1);
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
		func_506(uVar18[iVar36], 1, 1, -142743235, 1);
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

void func_2529(struct<6> Param0)
{
	if (!func_2683(Param0.f_4, 1))
	{
	}
	if (!func_2683(Param0, 1))
	{
	}
	if (!func_2683(Param0.f_2, 1))
	{
	}
	if (!func_2683(Param0.f_5, 1))
	{
	}
	if (!func_2683(Param0.f_3, 1))
	{
	}
	if (!func_2683(Param0.f_1, 1))
	{
	}
}

int func_2643(var uParam0, int iParam1, int iParam2)
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
		return func_2643(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

bool func_2683(int iParam0, int iParam1)
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
				if (func_2683(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_2683(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_2683(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_2683(iVar21, 1))
				{
				}
			}
		}
		__LIB_1__::func_712();
		return true;
	}
	return false;
}

