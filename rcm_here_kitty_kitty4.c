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
	struct<18> Local_18[6];
	char* sLocal_127[10] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	char* sLocal_138[8] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	char* sLocal_147[5] = { NULL, NULL, NULL, NULL, NULL };
	char* sLocal_153[2] = { NULL, NULL };
	char* sLocal_156[1] = { NULL };
	int iLocal_158 = 0;
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
	struct<17> Local_170 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	bool bLocal_190 = false;
	struct<2> Local_191[10];
	struct<2> Local_212[11];
	int iLocal_235 = 0;
	int iLocal_236 = 0;
	int iLocal_237[2] = { 0, 0 };
	int iLocal_240[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_247 = 0;
	int iLocal_248 = 0;
	int iLocal_249 = 0;
	int iLocal_250 = 0;
	int iLocal_251[2] = { 0, 0 };
	int iLocal_254 = 0;
	int iLocal_255 = 0;
	int iLocal_256 = 0;
	int iLocal_257 = 0;
	int iLocal_258 = 0;
	int iLocal_259 = 0;
	int iLocal_260 = 0;
	int iLocal_261 = 0;
	int iLocal_262 = 0;
	int iLocal_263 = 0;
	int iLocal_264 = 0;
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	int iLocal_268[1] = { 0 };
	int iLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = -1;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 1097859072;
	var uLocal_289 = 1000;
	var uLocal_290 = 1067450368;
	var uLocal_291 = 5000;
	var uLocal_292 = 42;
	var uLocal_293 = 1103626240;
	var uLocal_294 = 1077936128;
	var uLocal_295 = 1106247680;
	var uLocal_296 = 1103101952;
	var uLocal_297 = 1097859072;
	var uLocal_298 = 1103626240;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = -1;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 1097859072;
	var uLocal_318 = 1000;
	var uLocal_319 = 1067450368;
	var uLocal_320 = 5000;
	var uLocal_321 = 42;
	var uLocal_322 = 1103626240;
	var uLocal_323 = 1077936128;
	var uLocal_324 = 1106247680;
	var uLocal_325 = 1103101952;
	var uLocal_326 = 1097859072;
	var uLocal_327 = 1103626240;
	int iLocal_328 = 0;
	int iLocal_329 = 0;
	int iLocal_330 = 0;
	int iLocal_331 = 0;
	int iLocal_332 = 0;
	int iLocal_333 = 0;
	int iLocal_334[2] = { 0, 0 };
	int iLocal_337[2] = { 0, 0 };
	int iLocal_340 = 0;
	int iLocal_341[1] = { 0 };
	int iLocal_343 = 0;
	int iLocal_344 = 0;
	int iLocal_345 = 0;
	int iLocal_346 = 0;
	int iLocal_347 = 0;
	int iLocal_348 = 0;
	struct<6> Local_349[4];
	struct<6> Local_374[3];
	struct<5> Local_393[7];
	struct<65> Local_429[3];
	int iLocal_625 = 0;
	int iLocal_626 = 0;
	int iLocal_627 = 0;
	int iLocal_628 = 0;
	int iLocal_629 = 0;
	int iLocal_630 = 0;
	int iLocal_631 = 0;
	int iLocal_632 = 0;
	int iLocal_633 = 0;
	int iLocal_634 = 0;
	int iLocal_635 = 0;
	int iLocal_636 = 0;
	int iLocal_637 = 0;
	int iLocal_638 = 0;
	int iLocal_639 = 0;
	char* sLocal_640 = NULL;
	char* sLocal_641 = NULL;
	char* sLocal_642 = NULL;
	char* sLocal_643 = NULL;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	vector3 vLocal_686 = { 0f, 0f, 0f };
	vector3 vLocal_689 = { 0f, 0f, 0f };
	vector3 vLocal_692 = { 0f, 0f, 0f };
	vector3 vLocal_695 = { 0f, 0f, 0f };
	vector3 vLocal_698 = { 0f, 0f, 0f };
	vector3 vLocal_701 = { 0f, 0f, 0f };
	vector3 vLocal_704 = { 0f, 0f, 0f };
	vector3 vLocal_707 = { 0f, 0f, 0f };
	vector3 vLocal_710 = { 0f, 0f, 0f };
	vector3 vLocal_713 = { 0f, 0f, 0f };
	vector3 vLocal_716 = { 0f, 0f, 0f };
	vector3 vLocal_719 = { 0f, 0f, 0f };
	vector3 vLocal_722 = { 0f, 0f, 0f };
	vector3 vLocal_725 = { 0f, 0f, 0f };
	vector3 vLocal_728[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_735[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_742[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_749[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_756[1] = {{ 0f, 0f, 0f } };
	vector3 vLocal_760[1] = {{ 0f, 0f, 0f } };
	float fLocal_764 = 0f;
	float fLocal_765 = 0f;
	float fLocal_766 = 0f;
	float fLocal_767 = 0f;
	bool bLocal_768 = false;
	bool bLocal_769 = false;
	bool bLocal_770 = false;
	bool bLocal_771 = false;
	bool bLocal_772 = false;
	bool bLocal_773 = false;
	bool bLocal_774 = false;
	bool bLocal_775 = false;
	bool bLocal_776 = false;
	bool bLocal_777 = false;
	bool bLocal_778 = false;
	bool bLocal_779 = false;
	bool bLocal_780 = false;
	bool bLocal_781 = false;
	bool bLocal_782 = false;
	bool bLocal_783 = false;
	bool bLocal_784 = false;
	bool bLocal_785 = false;
	bool bLocal_786 = false;
	bool bLocal_787 = false;
	bool bLocal_788 = false;
	bool bLocal_789 = false;
	bool bLocal_790 = false;
	bool bLocal_791 = false;
	int iLocal_792 = 0;
	struct<22> Local_793 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3 } ;
	var uLocal_815 = 3;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	struct<22> Local_818 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3 } ;
	var uLocal_840 = 3;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	vector3 vLocal_843 = { 0f, 0f, 0f };
	var uLocal_865 = 3;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	struct<17> Local_868[1];
	vector3 vLocal_886 = { 0f, NaNf, 0f };
	var uLocal_889 = -1;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	var uLocal_892 = -1;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	var uLocal_898 = 1073741824;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = 1;
	var uLocal_903 = 0;
	var uLocal_904 = 0;
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	int iLocal_907 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion
void __EntryFunction__()
{
	struct<2606> Var0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_256 = 5;
	iLocal_258 = -1;
	iLocal_259 = joaat("A_C_LIONMANGY_01");
	iLocal_260 = joaat("RCSP_HEREKITTYKITTY_MALES_01");
	iLocal_261 = joaat("A_M_M_EMRFARMHAND_01");
	iLocal_262 = joaat("A_C_COW");
	iLocal_263 = joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
	iLocal_264 = joaat("A_C_HORSE_TENNESSEEWALKER_REDROAN");
	iLocal_265 = joaat("A_C_HORSE_KENTUCKYSADDLE_GREY");
	iLocal_266 = joaat("P_WOODBOARD01X");
	iLocal_267 = joaat("P_WOODBOARD01X_DEBRIS");
	sLocal_640 = "creatures_mammal@horse@normal@dead";
	sLocal_641 = "CREATURES_MAMMAL@COW@NORMAL@DEATH";
	sLocal_642 = "RKTTY4_LionPrintsMain";
	sLocal_643 = "RKTTY4_LionPrintsBarn";
	vLocal_689 = { 1408.045f, 280.4187f, 88.41716f };
	vLocal_692 = { 1383.87f, 353.2406f, 86.68208f };
	vLocal_695 = { 1423.851f, 316.0455f, 87.65746f };
	vLocal_710 = { 1408.883f, 279.1679f, 92.9807f };
	vLocal_713 = { 1389.058f, 263.0171f, 60.54444f };
	vLocal_716 = { 1410.224f, 268.5462f, 88.53571f };
	vLocal_719 = { 1407.07f, 283.13f, 88.23f };
	vLocal_722 = { 1377.949f, 349.746f, 86.76556f };
	vLocal_725 = { 1379.144f, 357.5443f, 87.79f };
	fLocal_765 = 103.5872f;
	fLocal_766 = 290.8383f;
	fLocal_767 = 29.64f;
	iLocal_907 = -1;
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
			__LIB_13__::func_98(uParam0);
		}
	}
	func_75(uParam0);
	if (__LIB_0__::func_1(uParam0->f_172, 32))
	{
		__LIB_12__::func_954(uParam0, __LIB_13__::func_842(uParam0));
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
			__LIB_12__::func_964(uParam0);
		}
		else if (__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_12, 4096))
		{
			__LIB_12__::func_837(uParam0, 3);
		}
		else
		{
			__LIB_0__::func_11(uParam0);
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
						func_126(uParam0, &cVar0, 1, 7500, 0, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
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
	func_144(Global_1347702[uParam0->f_174 /*49*/].f_15);
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
	else if (!__LIB_0__::func_75(&(uParam0->f_2585)) || IntToFloat(__LIB_1__::func_871(&(uParam0->f_2585))) > __LIB_2__::func_18(uParam0))
	{
		__LIB_1__::func_283(&(uParam0->f_2585), 1);
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
		func_175(Global_1347702[uParam0->f_174 /*49*/].f_15, 0, 2);
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
	__LIB_12__::func_658(uParam0, 26);
	__LIB_12__::func_659(uParam0, 27);
	func_187(uParam0);
}

void func_42(var uParam0)
{
	__LIB_12__::func_908(uParam0, 0);
	__LIB_12__::func_867(uParam0, iLocal_259, 3);
	__LIB_12__::func_867(uParam0, iLocal_262, 3);
	__LIB_12__::func_867(uParam0, iLocal_263, 3);
	__LIB_12__::func_867(uParam0, iLocal_264, 3);
	__LIB_12__::func_867(uParam0, iLocal_265, 3);
	__LIB_12__::func_867(uParam0, joaat("A_M_M_EMRFARMHAND_01"), 3);
	__LIB_12__::func_867(uParam0, iLocal_266, 3);
	__LIB_12__::func_867(uParam0, iLocal_267, 3);
	__LIB_12__::func_867(uParam0, iLocal_268[0], 3);
	__LIB_12__::func_867(uParam0, joaat("P_DOOR_EMERALDRANCHBARN01"), 3);
	__LIB_12__::func_867(uParam0, joaat("P_EMRFENCE02AX"), 2);
	__LIB_13__::func_55(uParam0, sLocal_641, 2);
	__LIB_13__::func_55(uParam0, sLocal_640, 2);
	__LIB_13__::func_55(uParam0, "CREATURES_MAMMAL@COUGAR@MELEE@STREAMED_CORE", 2);
	__LIB_13__::func_55(uParam0, "script_rc@ktty@ig@ig_lionattack", 2);
	__LIB_13__::func_15(uParam0, sLocal_642, 2, -1, 2);
	__LIB_13__::func_15(uParam0, sLocal_643, 2, -1, 2);
	STREAMING::_REQUEST_IMAP(1968676233);
	STREAMING::_REQUEST_IMAP(350637317);
	STREAMING::REQUEST_PTFX_ASSET();
}

bool func_53(var uParam0)
{
	int iVar0;
	bool bVar1;
	switch (func_197(&iVar0))
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
	if (iVar0 == 0)
	{
		Var1 = { 1424.521f, 310.9529f, 87.3943f };
		Var1.f_3 = 156.3906f;
	}
	else if (iVar0 == 1)
	{
		Var1 = { 1406.743f, 284.3823f, 88.1096f };
		Var1.f_3 = 198.1489f;
	}
	else if (iVar0 == 2)
	{
		Var1 = { 1405.785f, 281.6354f, 88.2924f };
		Var1.f_3 = 357.8371f;
	}
	else if (iVar0 == 3)
	{
		Var1 = { 1382.269f, 350.7187f, 86.6295f };
		Var1.f_3 = 19.127f;
	}
	else if (iVar0 == 4)
	{
		Var1 = { 1386.893f, 338.7004f, 86.5469f };
		Var1.f_3 = 18.95f;
	}
	else if (iVar0 == 5)
	{
		Var1 = { 1386.05f, 342.5967f, 86.5571f };
		Var1.f_3 = 305.1183f;
	}
	return Var1;
}

bool func_62(var uParam0)
{
	return func_203(*uParam0, uParam0->f_3);
}

bool func_64(var uParam0)
{
	if (iLocal_161 != 9)
	{
		if ((iLocal_161 == 0 || iLocal_161 == 1) || iLocal_161 == 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_331))
			{
				if (!__LIB_0__::func_272(iLocal_331, 1))
				{
					StringCopy(&(uParam0->f_2578), "KTTY4_FAIL_03", 24);
					if (!func_205(16))
					{
						if (iLocal_161 != 2)
						{
							func_206(0);
							func_207(16);
						}
					}
					return true;
				}
				else if (__LIB_13__::func_262(iLocal_331, 0, &uLocal_271, &uLocal_299, 0, 0))
				{
					StringCopy(&(uParam0->f_2578), "KTTY4_FAIL_06", 24);
					if (!func_205(16))
					{
						if (iLocal_161 != 2)
						{
							func_206(0);
							func_207(16);
						}
					}
					return true;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_393[0 /*5*/]))
			{
				if (!__LIB_0__::func_272(Local_393[0 /*5*/], 1))
				{
					StringCopy(&(uParam0->f_2578), "KTTY4_FAIL_03", 24);
					if (!func_205(16))
					{
						if (iLocal_161 != 2)
						{
							func_206(0);
							func_207(16);
						}
					}
					return true;
				}
				else if (__LIB_13__::func_262(Local_393[0 /*5*/], 0, &uLocal_271, &uLocal_299, 0, 0))
				{
					StringCopy(&(uParam0->f_2578), "KTTY4_FAIL_06", 24);
					if (!func_205(16))
					{
						if (iLocal_161 != 2)
						{
							func_206(0);
							func_207(16);
						}
					}
					return true;
				}
			}
		}
		if (func_209(uParam0, &(Local_212[8 /*2*/]), "KTTY4_FAIL_02", vLocal_686, 0, 100f, 85f, 140f))
		{
			return true;
		}
		if (bLocal_789)
		{
			StringCopy(&(uParam0->f_2578), "KTTY4_FAIL_06", 24);
			return true;
		}
		if (__LIB_1__::func_394(PLAYER::GET_PLAYER_INDEX(), 1, 0, 1))
		{
			StringCopy(&(uParam0->f_2578), "KTTY4_FAIL_04", 24);
			return true;
		}
		if (__LIB_0__::func_264(&uLocal_680) > 35f)
		{
			StringCopy(&(uParam0->f_2578), "KTTY4_FAIL_05", 24);
			return true;
		}
		if (bLocal_781)
		{
			StringCopy(&(uParam0->f_2578), "KTTY4_FAIL_05", 24);
			return true;
		}
	}
	return false;
}

void func_68(var uParam0)
{
	func_212();
	func_213();
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
	if (func_216(uParam0->f_174))
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
	if (__LIB_1__::func_976(uParam0) || __LIB_12__::func_663(uParam0->f_174, uParam0->f_743))
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
	func_230(uParam0);
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
	__LIB_12__::func_966(uParam0, 0);
	__LIB_12__::func_918(uParam0, 4);
	__LIB_0__::func_8(&(uParam0->f_172), 8);
	__LIB_0__::func_8(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 1024);
	__LIB_0__::func_8(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 64);
	__LIB_0__::func_7(&(Global_1347702[uParam0->f_174 /*49*/].f_13), 4);
	__LIB_0__::func_37(&(uParam0->f_2585));
	__LIB_12__::func_794(uParam0);
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
	bVar0 = __LIB_13__::func_498(uParam0);
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
		if (__LIB_12__::func_986(&(uParam0->f_206), &(uParam0->f_2575), bVar0, bVar1))
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
	if (__LIB_12__::func_924(uParam0) && func_270(uParam0))
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
				func_275(uParam0->f_174);
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
			func_278(Global_1347702[uParam0->f_174 /*49*/].f_15, 1);
		}
		func_279(Global_1347702[uParam0->f_174 /*49*/].f_15, 1, 1);
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
		func_288(uParam0, func_61(0), func_61(1), 0, 1, 0);
	}
}

void func_91(var uParam0)
{
	func_212();
	func_213();
	func_289(uParam0, 1);
	func_290(uParam0);
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
		if (uParam0->f_171 != 0 || func_291(uParam0))
		{
			if (__LIB_12__::func_884(uParam0))
			{
				return true;
			}
		}
	}
	return false;
}

int func_93(var uParam0)
{
	if (bLocal_772)
	{
		if (bLocal_789)
		{
			StringCopy(&(uParam0->f_2578), "KTTY4_FAIL_06", 24);
		}
		else
		{
			StringCopy(&(uParam0->f_2578), "KTTY4_FAIL_04", 24);
		}
		return 9;
	}
	return 7;
}

int func_96(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = iParam1;
	switch (iVar0)
	{
		case 0:
			if (!func_294(uParam0, iVar0))
			{
				return 2;
			}
			else
			{
				func_288(uParam0, func_61(0), func_61(1), 0, 1, 0);
				iLocal_161 = 0;
				iLocal_162 = 0;
				__LIB_0__::func_566(iLocal_633, 0);
				__LIB_13__::func_105(1, 1);
			}
			break;
		case 1:
			if (!func_294(uParam0, iVar0))
			{
				return 2;
			}
			else
			{
				func_288(uParam0, func_61(1), func_61(2), 1, 2, 0);
				Local_212[3 /*2*/].f_1 = 1;
				iLocal_161 = 0;
				iLocal_162 = 0;
				__LIB_0__::func_566(iLocal_633, 0);
				__LIB_13__::func_105(1, 1);
			}
			break;
		case 2:
			if (!func_294(uParam0, iVar0))
			{
				return 2;
			}
			else
			{
				func_288(uParam0, func_61(2), func_61(3), 2, 3, 0);
				iLocal_161 = 4;
				iLocal_162 = 0;
				__LIB_0__::func_566(iLocal_633, 0);
				__LIB_0__::func_37(&uLocal_668);
				__LIB_13__::func_105(1, 1);
			}
			break;
		case 3:
			if (!func_294(uParam0, iVar0))
			{
				return 2;
			}
			else if (!__LIB_0__::func_1(uParam0->f_172, 1))
			{
				return 2;
			}
			else
			{
				func_288(uParam0, func_61(3), func_61(4), 3, 4, 0);
				iLocal_161 = 5;
				iLocal_162 = 0;
				__LIB_0__::func_566(iLocal_633, 0);
				__LIB_0__::func_37(&uLocal_668);
				__LIB_13__::func_105(1, 1);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_329))
				{
					TASK::CLEAR_PED_TASKS(iLocal_329, true, false);
				}
				return 5;
			}
			break;
		case 4:
			__LIB_14__::func_201();
			if (!func_294(uParam0, iVar0))
			{
				return 2;
			}
			else
			{
				func_288(uParam0, func_61(4), func_61(5), 4, 5, 0);
				iLocal_161 = 5;
				iLocal_162 = 0;
				__LIB_0__::func_566(iLocal_633, 0);
				__LIB_0__::func_37(&uLocal_668);
				func_298(uParam0);
				PED::_0x411189E51B8020BA(Global_35, "Cautious");
				PED::SET_PED_USING_ACTION_MODE(Global_35, true, -1, 0);
				PED::_0x2208438012482A1A(Global_35, false, false);
				PED::_0x2208438012482A1A(iLocal_329, false, false);
				__LIB_13__::func_105(1, 1);
			}
			break;
		case 5:
			if (!func_294(uParam0, iVar0))
			{
				return 2;
			}
			else
			{
				__LIB_0__::func_37(&uLocal_668);
				iLocal_161 = 9;
				iLocal_162 = 0;
				func_299(uParam0);
				__LIB_13__::func_105(1, 1);
			}
			break;
	}
	return 7;
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
						__LIB_0__::func_11(uParam0);
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
		if (!__LIB_13__::func_6(uParam0))
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
		func_288(uParam0, func_61(0), func_61(1), 0, 1, 1);
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
	switch (iLocal_160)
	{
		case 0:
			func_316(&iLocal_161, 5);
			return 7;
		default:
			break;
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
						__LIB_0__::func_11(uParam0);
					}
				}
			}
			return true;
		}
		else
		{
			if (__LIB_0__::func_1(uParam0->f_172, 1024) && uParam0->f_176 == 4)
			{
				func_288(uParam0, func_61(0), func_61(1), 0, 1, 1);
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
		if (func_317(&(uParam0->f_753), uParam0->f_2581, uParam0->f_2571, bParam1))
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
	if (!bLocal_779)
	{
		if (AUDIO::_0xD9130842D7226045("RKTTY3_Sounds", 0))
		{
			bLocal_779 = true;
		}
	}
	if (iLocal_161 > 2 && iLocal_161 != 9)
	{
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
		PLAYER::_0x16752DAA7E6D3F72(PLAYER::PLAYER_ID());
	}
	if (iLocal_161 != 9)
	{
		func_298(uParam0);
		func_289(uParam0, 1);
		func_290(uParam0);
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_330))
		{
			PED::SET_PED_RESET_FLAG(iLocal_330, 170, true);
		}
		if (iLocal_161 >= 4)
		{
			func_319();
		}
		if (func_205(33554432))
		{
			PED::SET_PED_RESET_FLAG(Global_35, 174, true);
		}
		if (!func_205(134217728))
		{
			func_320(uParam0);
		}
	}
	switch (iLocal_161)
	{
		case 0:
			if (func_321(uParam0, 1))
			{
				func_316(&iLocal_161, 1);
			}
			break;
		case 1:
			if (func_322(uParam0))
			{
				func_316(&iLocal_161, 2);
			}
			break;
		case 2:
			if (func_323(uParam0))
			{
				func_316(&iLocal_161, 3);
			}
			break;
		case 3:
			if (func_324(uParam0))
			{
				func_316(&iLocal_161, 4);
			}
			break;
		case 4:
			if (func_325(uParam0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_329))
				{
					TASK::CLEAR_PED_TASKS(iLocal_329, true, false);
				}
				return 5;
			}
			break;
		case 5:
			func_326(uParam0);
			break;
		case 9:
			func_290(uParam0);
			func_327(5, 0);
			if (__LIB_0__::func_264(&uLocal_647) > 3f)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_329))
				{
					PED::SET_PED_CONFIG_FLAG(iLocal_329, 26, false);
				}
				return 8;
			}
			break;
	}
	return 7;
}

void func_126(var uParam0, char* sParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, int iParam11)
{
	char* sVar0;
	func_352(uParam0->f_174, sParam1, bParam5, fParam6, 0, 0, -1, -1, 0);
	if (bParam2 || !func_353(sParam1))
	{
		func_354(sParam1, iParam3, bParam4, bParam5, sParam7, sParam8, sParam9, sParam10, iParam11);
		sVar0 = UILOG::_UILOG_GET_CACHED_OBJECTIVE();
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0) && MISC::ARE_STRINGS_EQUAL(sVar0, sParam1))
		{
			UILOG::_UILOG_SET_HAS_DISPLAYED_CACHED_OBJECTIVE();
		}
	}
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
	func_356(iParam0, 0, iParam3);
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
			cVar0 = func_362(Global_1347702[iParam0 /*49*/].f_15);
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
		func_363(Global_1347702[iParam0 /*49*/].f_15, bParam4, bParam2, bParam6, bParam5);
	}
	else
	{
		func_364(Global_1347702[iParam0 /*49*/].f_15, bParam6);
	}
	func_365(iParam0);
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
		func_371(1, bParam1);
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

void func_144(int iParam0)
{
	int iVar0;
	if (!__LIB_0__::func_6(iParam0))
	{
		return;
	}
	if (iParam0 != __LIB_0__::func_298(0))
	{
		return;
	}
	if (__LIB_0__::func_299(iParam0) == 0)
	{
	}
	iVar0 = __LIB_0__::func_700(iParam0);
	if (__LIB_0__::func_291(iParam0) == 3)
	{
		if (__LIB_0__::func_299(iParam0) == 0)
		{
		}
		else if (STATS::_0x01F4D242765C6B24(__LIB_0__::func_299(iParam0)))
		{
			if (__LIB_0__::func_700(iParam0) != 1 && __LIB_0__::func_700(iParam0) != 8)
			{
				__LIB_0__::func_701(__LIB_0__::func_700(iParam0), __LIB_0__::func_299(iParam0), 1);
			}
		}
	}
	Global_1898438 = (MISC::GET_GAME_TIMER() - 10000);
	func_381(iParam0);
	__LIB_0__::func_267(1);
	__LIB_1__::func_142(0);
	func_383(iParam0, 0);
	switch (iVar0)
	{
		case 1:
			__LIB_0__::func_300(1);
			__LIB_0__::func_747(15, 0, 1);
			break;
		case 4:
			__LIB_0__::func_747(10, 0, 1);
			break;
		case 8:
			__LIB_0__::func_747(10, 0, 1);
			break;
		case 9:
			__LIB_0__::func_747(10, 0, 1);
			break;
		case 2:
			__LIB_0__::func_747(10, 0, 1);
			break;
		case 6:
			__LIB_0__::func_747(10, 0, 1);
			break;
		case 5:
			__LIB_0__::func_747(10, 0, 1);
			break;
	}
	__LIB_0__::func_301(1);
}

bool func_150(var uParam0)
{
	if (__LIB_12__::func_644(uParam0) == 0)
	{
		func_290(uParam0);
		func_319();
		func_391();
	}
	if (__LIB_12__::func_644(uParam0) == 1 || __LIB_12__::func_644(uParam0) == 9)
	{
		if (!func_205(131072))
		{
			if (!func_205(65536))
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_18[0 /*18*/]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_18[0 /*18*/], false))
				{
					if (ANIMSCENE::_0x1F0E401031E20146(Local_18[0 /*18*/], sLocal_127[9]))
					{
						if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_18[0 /*18*/]) > 0.75f)
						{
							ANIMSCENE::_DELETE_ANIM_SCENE(Local_18[0 /*18*/]);
							func_207(65536);
						}
					}
				}
				else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_18[1 /*18*/]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_18[1 /*18*/], false))
				{
					if (ANIMSCENE::_0x1F0E401031E20146(Local_18[1 /*18*/], sLocal_138[7]))
					{
						if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_18[1 /*18*/]) > 0.75f)
						{
							ANIMSCENE::_DELETE_ANIM_SCENE(Local_18[1 /*18*/]);
							func_207(65536);
						}
					}
				}
				else
				{
					func_207(65536);
				}
			}
			else
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_331))
				{
					TASK::_TASK_SMART_FLEE_STYLE_COORD(iLocal_331, vLocal_701, 3, 0, -1f, -1, 0);
					PED::SET_PED_CAN_BE_TARGETTED(iLocal_331, true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_331, false);
					PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_331, true);
					PED::SET_PED_CONFIG_FLAG(iLocal_331, 66, false);
					__LIB_2__::func_788(&iLocal_331, 1, 0, 1);
				}
				if (!ENTITY::IS_ENTITY_DEAD(Local_393[0 /*5*/]))
				{
					TASK::_TASK_SMART_FLEE_STYLE_COORD(Local_393[0 /*5*/], vLocal_701, 3, 0, -1f, -1, 0);
					PED::SET_PED_CAN_BE_TARGETTED(Local_393[0 /*5*/], true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_393[0 /*5*/], false);
					PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_393[0 /*5*/], true);
					PED::SET_PED_CONFIG_FLAG(Local_393[0 /*5*/], 66, false);
					__LIB_2__::func_788(&(Local_393[0 /*5*/]), 1, 0, 1);
				}
				func_207(131072);
			}
		}
		else if (__LIB_12__::func_644(uParam0) == 9)
		{
			func_392(uParam0, 0, 1, 0);
		}
	}
	if (!__LIB_0__::func_266(Global_35, vLocal_686, 150f, 1, 1))
	{
		return true;
	}
	return false;
}

void func_159(var uParam0)
{
	func_394();
	func_395(0);
	PLAYER::_0x22B3CABEDDB538B2(PLAYER::PLAYER_ID(), 0f);
	PLAYER::_0xB783F75940B23014(PLAYER::PLAYER_ID(), 0f);
	__LIB_1__::func_281(&iLocal_792, 1, 1);
	if (uParam0->f_177 == 9)
	{
		__LIB_3__::func_353("KTTY5_FAIL", 0);
	}
	func_398(1);
	func_392(uParam0, 1, 1, 0);
	HUD::_DISPLAY_HUD_COMPONENT(724769646);
	if (__LIB_0__::func_1(uParam0->f_172, 8))
	{
		PED::_0x411189E51B8020BA(Global_35, "Cautious");
	}
	STREAMING::REMOVE_PTFX_ASSET();
	if (bLocal_777)
	{
		func_399();
	}
	__LIB_2__::func_161(vLocal_695, 80f, 5);
	if (__LIB_0__::func_1(uParam0->f_172, 8))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	}
}

void func_175(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	if (!__LIB_0__::func_6(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!__LIB_1__::func_44(iParam0) && !__LIB_0__::func_702(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (__LIB_0__::func_299(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !__LIB_1__::func_44(iParam0))
	{
		iParam2 = -1;
	}
	if (__LIB_0__::func_291(iParam0) == 3 || (__LIB_0__::func_291(iParam0) == 1 && STATS::_0x01F4D242765C6B24(__LIB_0__::func_299(iParam0))))
	{
		__LIB_0__::func_701(__LIB_0__::func_700(iParam0), __LIB_0__::func_299(iParam0), iParam2);
		if ((!__LIB_0__::func_6(Global_1572864.f_8) && !__LIB_0__::func_296(0, 1, 0)) && !__LIB_0__::func_1(Global_1935630, 32768))
		{
			iVar0 = __LIB_1__::func_24(iParam0);
			if (iVar0 != -1)
			{
				__LIB_0__::func_867(0);
			}
			else if (__LIB_0__::func_700(iParam0) == 8)
			{
				iVar0 = __LIB_1__::func_194();
				if (iVar0 != -1)
				{
					__LIB_0__::func_867(0);
				}
			}
		}
	}
	func_383(iParam0, 0);
	if (__LIB_0__::func_298(0) == iParam0)
	{
		__LIB_0__::func_267(1);
		__LIB_1__::func_142(0);
		__LIB_0__::func_301(1);
	}
	__LIB_1__::func_144(iParam0, 1);
	func_381(iParam0);
}

void func_187(var uParam0)
{
	iLocal_161 = 0;
	iLocal_159 = 0;
	__LIB_0__::func_37(&uLocal_653);
	__LIB_0__::func_37(&uLocal_650);
	Local_393[0 /*5*/].f_1 = { 1407.024f, 280.417f, 88.3421f };
	Local_393[0 /*5*/].f_4 = 197.0416f;
	Local_393[1 /*5*/].f_1 = { 1401.87f, 310.0606f, 87.1723f };
	Local_393[1 /*5*/].f_4 = 193.5301f;
	Local_393[2 /*5*/].f_1 = { 1416.267f, 293.9696f, 87.9968f };
	Local_393[2 /*5*/].f_4 = -84.74f;
	Local_393[3 /*5*/].f_1 = { 1394.641f, 283.4875f, 87.7863f };
	Local_393[3 /*5*/].f_4 = 152.3031f;
	Local_393[4 /*5*/].f_1 = { 1386.995f, 301.1117f, 87.0994f };
	Local_393[4 /*5*/].f_4 = 27.621f;
	Local_393[5 /*5*/].f_1 = { 1404.464f, 291.0361f, 87.6686f };
	Local_393[5 /*5*/].f_4 = 26.4f;
	vLocal_728[0 /*3*/] = { 1408.43f, 280.31f, 94.08f };
	vLocal_728[1 /*3*/] = { 1407.76f, 280.1f, 94.23f };
	vLocal_735[0 /*3*/] = { 90f, -1f, 13.71f };
	vLocal_735[1 /*3*/] = { -90f, -1.2f, -166.2f };
	vLocal_742[0 /*3*/] = { 1410.88f, 268.43f, 94.11f };
	vLocal_742[1 /*3*/] = { 1411.7f, 268.56f, 94.15f };
	vLocal_749[0 /*3*/] = { 90f, 0f, -165f };
	vLocal_749[1 /*3*/] = { -89f, 0f, 10f };
	vLocal_756[0 /*3*/] = { 1413.44f, 271.43f, 88.54f };
	vLocal_760[0 /*3*/] = { 0f, 0f, 0f };
	iLocal_268[0] = joaat("P_CRATECOVER01X");
	vLocal_686 = { 1407.31f, 316.83f, 88.9555f };
	vLocal_701 = { 1408.96f, 280.83f, 89.37f };
	vLocal_704 = { 1406.5f, 285.83f, 88.95f };
	vLocal_707 = { 1442.012f, 295.0562f, 91.62376f };
	fLocal_764 = 77.9341f;
	vLocal_698 = { 1377.444f, 356.3661f, 86.7737f };
	func_425();
	func_426();
	func_427();
	__LIB_4__::func_228(&uLocal_271);
	__LIB_6__::func_905(&uLocal_271);
	__LIB_1__::func_401(&uLocal_271, 1);
	__LIB_2__::func_828(&uLocal_271, 1);
	__LIB_1__::func_402(&uLocal_271, 1);
	__LIB_4__::func_228(&uLocal_300);
	__LIB_6__::func_905(&uLocal_300);
	__LIB_1__::func_401(&uLocal_300, 1);
	__LIB_2__::func_828(&uLocal_300, 1);
	iLocal_235 = __LIB_0__::func_68(-1304772442, 0, 0);
	iLocal_236 = __LIB_0__::func_68(-1924401463, 0, 0);
	iLocal_247 = __LIB_0__::func_68(-1860305075, 0, 0);
	iLocal_248 = __LIB_0__::func_68(-467360415, 0, 0);
	iLocal_249 = __LIB_0__::func_68(-772669188, 0, 0);
	iLocal_250 = __LIB_0__::func_68(2076265624, 0, 0);
	iLocal_237[0] = __LIB_0__::func_68(-308659358, 0, 0);
	iLocal_237[1] = __LIB_0__::func_68(-66987983, 0, 0);
	iLocal_251[0] = __LIB_0__::func_68(1727841021, 0, 0);
	iLocal_251[1] = __LIB_0__::func_68(88444105, 0, 0);
	iLocal_240[1] = __LIB_0__::func_68(393513760, 0, 0);
	iLocal_240[0] = __LIB_0__::func_68(1741286361, 0, 0);
	iLocal_240[3] = __LIB_0__::func_68(-1780119556, 0, 0);
	iLocal_240[2] = __LIB_0__::func_68(-1610720195, 0, 0);
	iLocal_240[5] = __LIB_0__::func_68(1503088500, 0, 0);
	iLocal_240[4] = __LIB_0__::func_68(211252582, 0, 0);
	func_434();
	func_435();
	__LIB_4__::func_932(18, 0);
}

int func_197(int iParam0)
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
						*iParam0 = func_450(vVar0.z);
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

int func_203(vector3 vParam0, var uParam3)
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
		iVar0 = func_462(0, 0);
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

bool func_205(int iParam0)
{
	if (__LIB_0__::func_27(iLocal_254, iParam0))
	{
		return true;
	}
	return false;
}

void func_206(bool bParam0)
{
	int iVar0;
	int iVar1;
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_393[iVar0 /*5*/]))
			{
				if (iVar0 != 0)
				{
					PED::FORCE_PED_MOTION_STATE(Local_393[iVar0 /*5*/], joaat("MOTIONSTATE_RUN"), false, 0, false);
					TASK::_TASK_SMART_FLEE_STYLE_COORD(Local_393[iVar0 /*5*/], 1402.937f, 294.3977f, 87.59068f, 4, 256, 1000f, -1, 0);
				}
			}
			iVar0++;
		}
		iLocal_17 = 4;
	}
	else
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_18[0 /*18*/]))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_18[0 /*18*/], false))
			{
				if (func_467(0, sLocal_127[9], 1))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_331))
					{
						TASK::TASK_LOOK_AT_ENTITY(iLocal_331, Global_35, -1, 0, 51, 0);
					}
					if (!ENTITY::IS_ENTITY_DEAD(Local_393[0 /*5*/]))
					{
						TASK::TASK_LOOK_AT_ENTITY(Local_393[0 /*5*/], Global_35, -1, 0, 51, 0);
					}
					iLocal_17 = 5;
				}
			}
		}
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_18[1 /*18*/]))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_18[1 /*18*/], false))
			{
				if (func_467(1, sLocal_138[7], 1))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_331))
					{
						TASK::TASK_LOOK_AT_ENTITY(iLocal_331, Global_35, -1, 0, 51, 0);
					}
					if (!ENTITY::IS_ENTITY_DEAD(Local_393[0 /*5*/]))
					{
						TASK::TASK_LOOK_AT_ENTITY(Local_393[0 /*5*/], Global_35, -1, 0, 51, 0);
					}
					iLocal_17 = 5;
				}
			}
		}
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (iVar0 != 0)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_393[iVar0 /*5*/]))
				{
					if (ENTITY::IS_ENTITY_VISIBLE(Local_393[iVar0 /*5*/]))
					{
						TASK::CLEAR_PED_TASKS(Local_393[iVar0 /*5*/], true, false);
						TASK::OPEN_SEQUENCE_TASK(&iVar1);
						TASK::TASK_PAUSE(0, MISC::GET_RANDOM_INT_IN_RANGE(250, 1250));
						TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
						TASK::CLOSE_SEQUENCE_TASK(iVar1);
						TASK::TASK_PERFORM_SEQUENCE(Local_393[iVar0 /*5*/], iVar1);
						TASK::CLEAR_SEQUENCE_TASK(&iVar1);
						__LIB_2__::func_788(&(Local_393[iVar0 /*5*/]), 1, 1, 1);
					}
					else
					{
						__LIB_2__::func_426(&(Local_393[iVar0 /*5*/]));
					}
				}
			}
			iVar0++;
		}
		LAW::_REPORT_CRIME(PLAYER::PLAYER_ID(), joaat("CRIME_THREATEN"), 0, 0, true);
	}
}

void func_207(int iParam0)
{
	if (!func_205(iParam0))
	{
		__LIB_1__::func_683(&iLocal_254, iParam0);
	}
}

bool func_209(var uParam0, var uParam1, char* sParam2, vector3 vParam3, int iParam6, float fParam7, float fParam8, float fParam9)
{
	float fVar0;
	bool bVar1;
	bVar1 = false;
	if (!iParam6 == 0)
	{
		fVar0 = __LIB_0__::func_665(Global_35, iParam6, 1, 1);
		bVar1 = true;
	}
	else
	{
		fVar0 = __LIB_0__::func_94(Global_35, vParam3, 1);
	}
	if (!uParam1->f_1)
	{
		if (fVar0 > fParam7)
		{
			__LIB_5__::func_20(0, 0);
			func_126(uParam0, *uParam1, 0, 7500, 0, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			uParam1->f_1 = 1;
		}
	}
	else if (fVar0 < fParam8)
	{
		__LIB_10__::func_597(*uParam1);
		uParam1->f_1 = 0;
	}
	else if (fVar0 > fParam9)
	{
		if (bVar1)
		{
			if (ENTITY::IS_ENTITY_OCCLUDED(iParam6))
			{
				StringCopy(&(uParam0->f_2578), sParam2, 24);
				return true;
			}
		}
		else
		{
			StringCopy(&(uParam0->f_2578), sParam2, 24);
			return true;
		}
	}
	return false;
}

void func_212()
{
	POPULATION::_0xF45E46DEECF7DF6E(6144, 0, 0, -1, -1);
	PED::_0xAB0D553FE20A6E25(0f);
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::_0xBA0980B5C0A11924(0f);
}

void func_213()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!__LIB_2__::func_769(iLocal_237[iVar0]))
		{
			__LIB_1__::func_948(iLocal_237[iVar0], 1, 0f, 0, 0, 0, 0, 0);
			OBJECT::_0xC07B91B996C1DE89(iLocal_237[iVar0], 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!__LIB_2__::func_769(iLocal_251[iVar0]))
		{
			__LIB_1__::func_948(iLocal_251[iVar0], 1, 0f, 0, 0, 0, 0, 0);
			OBJECT::_0xC07B91B996C1DE89(iLocal_251[iVar0], 0);
		}
		iVar0++;
	}
	if (iLocal_161 < 4)
	{
		if (!__LIB_2__::func_769(iLocal_236))
		{
			__LIB_1__::func_948(iLocal_236, 1, 0f, 0, 0, 0, 0, 0);
			OBJECT::_0xC07B91B996C1DE89(iLocal_236, 0);
		}
		if (!__LIB_2__::func_769(iLocal_235))
		{
			__LIB_1__::func_948(iLocal_235, 1, 0f, 0, 0, 0, 0, 0);
			OBJECT::_0xC07B91B996C1DE89(iLocal_235, 0);
		}
	}
	else
	{
		if (__LIB_2__::func_769(iLocal_236))
		{
			if ((__LIB_4__::func_195(iLocal_236) < 0.05f && __LIB_4__::func_195(iLocal_236) > -0.05f) || func_205(4194304))
			{
				__LIB_1__::func_948(iLocal_236, 0, 0f, 0, 0, 0, 0, 0);
			}
		}
		if (__LIB_2__::func_769(iLocal_235))
		{
			if ((__LIB_4__::func_195(iLocal_235) < 0.05f && __LIB_4__::func_195(iLocal_235) > -0.05f) || func_205(4194304))
			{
				__LIB_1__::func_948(iLocal_235, 0, 0f, 0, 0, 0, 0, 0);
			}
		}
	}
	if (iLocal_161 >= 4)
	{
		if (!__LIB_2__::func_769(iLocal_248))
		{
			__LIB_1__::func_948(iLocal_248, 1, 0f, 0, 0, 0, 1, 0);
		}
		if (!__LIB_2__::func_769(iLocal_249))
		{
			__LIB_1__::func_948(iLocal_249, 1, 0f, 0, 0, 0, 1, 0);
		}
		if (!__LIB_2__::func_769(iLocal_250))
		{
			__LIB_1__::func_948(iLocal_250, 1, 0f, 0, 0, 0, 1, 0);
		}
		__LIB_11__::func_228(iLocal_247, 1f, 1);
		__LIB_11__::func_228(iLocal_240[3], 1f, 1);
		__LIB_11__::func_228(iLocal_240[2], -1f, 1);
		__LIB_11__::func_228(iLocal_240[1], 1f, 1);
		__LIB_11__::func_228(iLocal_240[0], -1f, 1);
		__LIB_11__::func_228(iLocal_240[5], 1f, 1);
		__LIB_11__::func_228(iLocal_240[4], -1f, 1);
	}
}

bool func_216(int iParam0)
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
		iVar1 = func_517(__LIB_3__::func_574(65536), 0, 3, __LIB_3__::func_575(65536));
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
			if (func_354("MUDTOWN32_altobj", 7500, 0, 1, 0, 0, -1, -1, 0) != 0)
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

void func_230(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_172, 8))
	{
		PED::_0x411189E51B8020BA(Global_35, "Cautious");
	}
	__LIB_2__::func_161(vLocal_695, 80f, 5);
	if (__LIB_12__::func_644(uParam0) != 0)
	{
		__LIB_1__::func_408(-404698347, 1, 0);
	}
	else
	{
		__LIB_1__::func_408(1517904467, 1, 0);
	}
	switch (__LIB_12__::func_644(uParam0))
	{
		case 9:
			func_206(0);
			break;
		case 0:
			func_290(uParam0);
			break;
		default:
			__LIB_2__::func_788(&(Local_393[1 /*5*/]), 0, 0, 1);
			func_398(0);
			func_392(uParam0, 0, 0, 0);
			break;
	}
}

int func_270(var uParam0)
{
	if (func_585(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_275(int iParam0)
{
	char cVar0[16];
	char[] cVar3[8];
	switch (iParam0)
	{
		case 11:
			StringCopy(&cVar0, "DUL", 8);
			break;
		case 13:
			StringCopy(&cVar0, "RCH", 8);
			break;
		case 12:
			StringCopy(&cVar0, "ECF", 8);
			break;
		case 14:
			StringCopy(&cVar0, "WIL", 8);
			break;
		case 15:
			StringCopy(&cVar0, "SHE", 8);
			break;
		case 16:
			StringCopy(&cVar0, "NBS", 8);
			break;
		case 17:
			StringCopy(&cVar0, "SKN", 8);
			break;
		case 18:
			StringCopy(&cVar0, "RDE", 8);
			break;
		case 19:
			StringCopy(&cVar0, "BDS", 8);
			break;
		case 20:
			StringCopy(&cVar0, "BDM", 8);
			break;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		StringCopy(&cVar1, "PSTR_O_", 16);
		StringConCat(&cVar1, &cVar0, 16);
		cVar3 = func_587(0, &cVar1, 0, 0, -1, -1);
		func_588(iParam0, &cVar1, cVar3, -1082130432 /* Float: -1f */);
	}
}

void func_278(int iParam0, bool bParam1)
{
	if (!__LIB_0__::func_6(iParam0))
	{
		return;
	}
	if (!__LIB_1__::func_241(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (__LIB_0__::func_299(iParam0) == 0)
		{
		}
		else if (!STATS::_0x01F4D242765C6B24(__LIB_0__::func_299(iParam0)))
		{
			STATS::_0xCA41E86545413B5B(__LIB_0__::func_700(iParam0), __LIB_0__::func_76(iParam0), __LIB_0__::func_872(iParam0), __LIB_0__::func_299(iParam0), Global_36);
		}
	}
	func_383(iParam0, 1);
	bParam1 = bParam1;
}

void func_279(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	if (!__LIB_0__::func_6(iParam0))
	{
		return;
	}
	if (!__LIB_0__::func_702(iParam0))
	{
		return;
	}
	iVar0 = __LIB_0__::func_700(iParam0);
	if (bParam1)
	{
		if (__LIB_0__::func_299(iParam0) == 0)
		{
		}
		else if (!STATS::_0x01F4D242765C6B24(__LIB_0__::func_299(iParam0)))
		{
		}
		else
		{
			if (iVar0 == 1 && iParam0 != Global_1835011[77 /*74*/].f_1)
			{
				__LIB_1__::func_781(__LIB_0__::func_76(iParam0));
			}
			if (__LIB_0__::func_2() != 0)
			{
				STATS::_0xB2A38826E5886E83(__LIB_0__::func_299(iParam0), 0);
			}
			else
			{
				STATS::_0xB2A38826E5886E83(__LIB_0__::func_299(iParam0), Global_265238.f_79565.f_208.f_17);
			}
		}
	}
	__LIB_1__::func_232(iParam0);
	if (!__LIB_0__::func_6(__LIB_0__::func_298(0)))
	{
		func_383(iParam0, 3);
		__LIB_0__::func_267(bParam2);
		if (__LIB_0__::func_2() == -1)
		{
			if (bParam2 == 0)
			{
				LAW::_0x55F37F5F3F2475E1();
			}
			__LIB_1__::func_142(1);
		}
		func_591(iParam0, -1);
		if (bParam1 && !__LIB_0__::func_13(2))
		{
			__LIB_0__::func_47(&Global_0, 1024);
		}
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_0__::func_8(&(Global_1347343.f_11), 536870912);
			__LIB_1__::func_84(2);
			Global_1357515 = -1;
			if (iVar0 == 1)
			{
				__LIB_1__::func_312(0);
			}
			if (iVar0 == 1 || iVar0 == 8)
			{
				__LIB_1__::func_299(0);
			}
		}
		if (__LIB_0__::func_2() == -1)
		{
			iVar1 = __LIB_1__::func_24(iParam0);
			if (iVar1 != -1)
			{
				iVar1 = __LIB_1__::func_194();
				switch (iVar1)
				{
					case 0:
						__LIB_1__::func_233(0);
						break;
					case 1:
						__LIB_1__::func_233(1);
						break;
					case 2:
						__LIB_1__::func_233(2);
						break;
					case 3:
						__LIB_1__::func_233(3);
						break;
					case 4:
						__LIB_1__::func_233(4);
						break;
					case 5:
						__LIB_1__::func_233(5);
						break;
					case 6:
						__LIB_1__::func_233(5);
						break;
					case 7:
						__LIB_1__::func_233(7);
						break;
					case 8:
						__LIB_1__::func_233(8);
						break;
				}
			}
			else if (iVar0 == 1)
			{
				switch (__LIB_0__::func_76(iParam0))
				{
					case 7:
					case 8:
					case 36:
						__LIB_1__::func_233(11);
						break;
				}
			}
			else if (iVar0 == 8)
			{
				switch (__LIB_0__::func_76(iParam0))
				{
					case 6:
					case 7:
					case 21:
					case 24:
					case 25:
					case 69:
					case 70:
					case 139:
						__LIB_1__::func_233(11);
						break;
					default:
						iVar1 = __LIB_1__::func_194();
						if (iVar1 != -1)
						{
							switch (iVar1)
							{
								case 0:
									__LIB_1__::func_234(0);
									break;
								case 1:
									__LIB_1__::func_234(1);
									break;
								case 2:
									__LIB_1__::func_234(2);
									break;
								case 3:
									__LIB_1__::func_234(3);
									break;
								case 4:
									__LIB_1__::func_234(4);
									break;
								case 5:
									__LIB_1__::func_234(5);
									break;
								case 6:
									__LIB_1__::func_234(5);
									break;
								case 7:
									__LIB_1__::func_234(7);
									break;
								case 8:
									__LIB_1__::func_234(8);
									break;
								default:
									break;
							}
						}
						break;
				}
			}
		}
		__LIB_0__::func_301(1);
	}
	else
	{
		func_591(iParam0, -1);
		func_383(iParam0, 4);
	}
	__LIB_1__::func_144(iParam0, 0);
}

void func_288(var uParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10, bool bParam11)
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
	func_608(Global_1347702[uParam0->f_174 /*49*/].f_15, Var0, Var4, iParam9, iParam10);
}

void func_289(var uParam0, bool bParam1)
{
	int iVar0;
	if (iLocal_161 <= 4)
	{
		if (!func_205(1))
		{
			if (__LIB_1__::func_410(Global_36, vLocal_686, 165f, 1))
			{
				if (func_610(uParam0, bParam1))
				{
					func_207(1);
				}
			}
		}
		else
		{
			if (iLocal_161 == 0 || iLocal_161 == 1)
			{
				func_327(0, 4);
				if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_18[0 /*18*/]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_18[0 /*18*/], false)) && !func_205(16))
				{
					if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_18[0 /*18*/], sLocal_127[9]))
					{
						if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_18[0 /*18*/], sLocal_127[9]))
						{
							ANIMSCENE::_0xDF7B5144E25CD3FE(Local_18[0 /*18*/], sLocal_127[9]);
						}
					}
				}
				if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_18[1 /*18*/]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_18[1 /*18*/], false)) && !func_205(16))
				{
					if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_18[1 /*18*/], sLocal_138[7]))
					{
						if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_18[1 /*18*/], sLocal_138[7]))
						{
							ANIMSCENE::_0xDF7B5144E25CD3FE(Local_18[1 /*18*/], sLocal_138[7]);
						}
					}
				}
			}
			else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_18[0 /*18*/]))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(Local_18[0 /*18*/]);
			}
			if (!__LIB_1__::func_410(Global_36, vLocal_686, 180f, 1))
			{
				if (!CAM::IS_SPHERE_VISIBLE(vLocal_686, 5f))
				{
					__LIB_2__::func_788(&iLocal_331, 1, 0, 1);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_260);
					iVar0 = 0;
					while (iVar0 <= (7 - 1))
					{
						__LIB_2__::func_788(&(Local_393[iVar0 /*5*/]), 1, 0, 1);
						iVar0++;
					}
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_18[0 /*18*/]))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(Local_18[0 /*18*/]);
					}
					func_611(1);
				}
			}
		}
		if (func_612())
		{
			if (!func_205(16))
			{
				func_206(0);
				func_207(16);
			}
		}
	}
	func_613(uParam0);
}

void func_290(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_429[iVar0 /*65*/]))
		{
			if (!__LIB_0__::func_27(Local_429[iVar0 /*65*/].f_20, 1))
			{
				__LIB_12__::func_875(uParam0, Local_429[iVar0 /*65*/], Local_429[iVar0 /*65*/].f_19, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_429[iVar0 /*65*/], true);
				__LIB_1__::func_683(&(Local_429[iVar0 /*65*/].f_20), 1);
			}
			switch (Local_429[iVar0 /*65*/].f_10)
			{
				case 0:
					func_615(uParam0, iVar0);
					break;
				case 1:
					func_616(uParam0, iVar0);
					break;
				case 2:
					func_617(iVar0);
					break;
				case 3:
					func_618(uParam0, iVar0);
					break;
			}
		}
		else
		{
			Local_429[iVar0 /*65*/].f_10 = 4;
		}
		iVar0++;
	}
}

bool func_291(var uParam0)
{
	if (func_619(uParam0))
	{
		bLocal_772 = true;
		return true;
	}
	if (!Local_212[4 /*2*/].f_1)
	{
		if (__LIB_0__::func_266(Global_35, vLocal_686, (85f - 20f), 0, 1))
		{
			func_126(uParam0, Local_212[4 /*2*/], 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			Local_212[4 /*2*/].f_1 = 1;
		}
	}
	if (func_321(uParam0, 0))
	{
		func_316(&iLocal_161, 1);
		return true;
	}
	return false;
}

bool func_294(var uParam0, int iParam1)
{
	int iVar0;
	switch (iLocal_162)
	{
		case 0:
			iLocal_162 = 1;
			if (iParam1 >= 2)
			{
				__LIB_0__::func_400(1968676233);
				STREAMING::_REQUEST_IMAP(2112594812);
			}
			if (iParam1 == 2)
			{
				Local_18[3 /*18*/].f_16 = sLocal_153[0];
			}
			PED::_0x9851DE7AEC10B4E1(vLocal_686, 150f, 1, 0);
			__LIB_1__::func_572(vLocal_698, 300f, 0, 0, 0, 0, 0);
			func_624();
			break;
		case 1:
			if (iParam1 == 0 || iParam1 == 1)
			{
				if (func_205(1))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_331) && ENTITY::DOES_ENTITY_EXIST(Local_393[0 /*5*/]))
					{
						if ((!PED::IS_PED_RAGDOLL(iLocal_331) && PED::_0xA0BC8FAED8CFEB3C(iLocal_331)) && PED::_0xA0BC8FAED8CFEB3C(Local_393[0 /*5*/]))
						{
							func_625(0);
							__LIB_1__::func_148(&uLocal_668);
							iLocal_162 = 2;
						}
					}
				}
				else
				{
					func_289(uParam0, 1);
				}
			}
			else if (iParam1 == 2)
			{
				func_626();
				if (func_205(1))
				{
					if (!func_205(268435456))
					{
						if (func_627())
						{
							func_207(268435456);
						}
						return false;
					}
					if (!func_324(uParam0))
					{
						return false;
					}
					if (!func_327(3, 0))
					{
						return false;
					}
					if (!func_467(3, sLocal_153[0], 1))
					{
						return false;
					}
					if (!func_205(8))
					{
						if (func_628(uParam0))
						{
							func_207(8);
						}
						return false;
					}
					func_629();
					func_630();
					if (iLocal_15 < 2)
					{
						iLocal_15 = 2;
					}
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_331))
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_331, vLocal_704, true, false, true, true);
						EVENT::ADD_SHOCKING_EVENT_AT_POSITION(joaat("EVENT_SHOCKING_DEAD_BODY"), ENTITY::GET_ENTITY_COORDS(iLocal_331, false, false), 5f, -1f, -1f, -1f, -1f, -1, -1);
						PED::APPLY_PED_DAMAGE_PACK(iLocal_331, "PD_RC_Here_Kitty4_Ped_Mauled_By_Lion", 0f, 1f);
						AUDIO::DISABLE_PED_PAIN_AUDIO(iLocal_331, true);
						ENTITY::_SET_ENTITY_HEALTH(iLocal_331, 0, 0);
						func_207(33554432);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_331) && ENTITY::DOES_ENTITY_EXIST(Local_393[0 /*5*/]))
					{
						if ((!PED::IS_PED_RAGDOLL(iLocal_331) && PED::_0xA0BC8FAED8CFEB3C(iLocal_331)) && PED::_0xA0BC8FAED8CFEB3C(Local_393[0 /*5*/]))
						{
							__LIB_1__::func_148(&uLocal_668);
							func_631();
							__LIB_1__::func_951(&(iLocal_334[0]));
							__LIB_1__::func_951(&(iLocal_334[1]));
							__LIB_2__::func_165(vLocal_695, 80f, 0, 0, 5);
							__LIB_1__::func_572(vLocal_698, 300f, 0, 0, 0, 0, 0);
							func_624();
							iLocal_162 = 2;
						}
					}
				}
				else
				{
					func_289(uParam0, 1);
				}
			}
			else if (iParam1 == 3 || iParam1 == 4)
			{
				func_626();
				__LIB_11__::func_228(iLocal_247, 1f, 1);
				if (func_205(1))
				{
					if (!func_205(268435456))
					{
						if (func_627())
						{
							func_207(268435456);
						}
						return false;
					}
					if (!func_324(uParam0))
					{
						return false;
					}
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
					if (iParam1 == 4)
					{
						if (!func_327(4, 0))
						{
							return false;
						}
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_329))
						{
							ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(iLocal_329, 1381.65f, 354.46f, 87.08f, -146.25f, false, true);
							iLocal_158 = 2;
							if (iLocal_15 < 4)
							{
								iLocal_15 = 4;
							}
						}
					}
					else
					{
						if (iLocal_15 < 3)
						{
							iLocal_15 = 3;
						}
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_329))
						{
							ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_329, vLocal_722, fLocal_766, true, false, true);
							iLocal_158 = 0;
						}
					}
					func_629();
					func_630();
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_331))
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_331, vLocal_704, true, false, true, true);
						EVENT::ADD_SHOCKING_EVENT_AT_POSITION(joaat("EVENT_SHOCKING_DEAD_BODY"), ENTITY::GET_ENTITY_COORDS(iLocal_331, false, false), 5f, -1f, -1f, -1f, -1f, -1, -1);
						PED::APPLY_PED_DAMAGE_PACK(iLocal_331, "PD_RC_Here_Kitty4_Ped_Mauled_By_Lion", 0f, 1f);
						AUDIO::DISABLE_PED_PAIN_AUDIO(iLocal_331, true);
						ENTITY::_SET_ENTITY_HEALTH(iLocal_331, 0, 0);
						if (!func_205(16))
						{
							func_206(1);
							func_207(16);
						}
					}
					iVar0 = 0;
					while (iVar0 < 4)
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_349[iVar0 /*6*/]) && iVar0 != 0)
						{
							__LIB_2__::func_426(&(Local_349[iVar0 /*6*/]));
						}
						iVar0++;
					}
					iVar0 = 0;
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if ((!ENTITY::IS_ENTITY_DEAD(Local_374[iVar0 /*6*/]) && iVar0 != 0) && iVar0 != 1)
						{
							__LIB_2__::func_426(&(Local_374[iVar0 /*6*/]));
						}
						iVar0++;
					}
					iVar0 = 0;
					iVar0 = 0;
					while (iVar0 < 7)
					{
						if (iVar0 != 1)
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_393[iVar0 /*5*/]))
							{
								__LIB_2__::func_426(&(Local_393[iVar0 /*5*/]));
							}
						}
						iVar0++;
					}
					if (!ENTITY::IS_ENTITY_DEAD(Local_393[0 /*5*/]))
					{
						TASK::CLEAR_PED_TASKS(Local_393[0 /*5*/], true, false);
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(Local_393[0 /*5*/], vLocal_707, fLocal_764, false, true);
						TASK::TASK_COWER(Local_393[0 /*5*/], -1, 0, 0);
					}
					if (!PED::IS_PED_RAGDOLL(iLocal_331) && PED::_0xA0BC8FAED8CFEB3C(iLocal_329))
					{
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 3)
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_429[iVar0 /*65*/]))
							{
								ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_429[iVar0 /*65*/], Local_429[iVar0 /*65*/].f_5, Local_429[iVar0 /*65*/].f_9, true, false, true);
							}
							iVar0++;
						}
						__LIB_1__::func_148(&uLocal_668);
						func_631();
						__LIB_1__::func_951(&(iLocal_334[0]));
						__LIB_1__::func_951(&(iLocal_334[1]));
						func_634(uParam0, 0);
						__LIB_2__::func_165(vLocal_695, 80f, 0, 0, 5);
						__LIB_1__::func_572(vLocal_698, 300f, 0, 0, 0, 0, 0);
						func_624();
						iLocal_162 = 2;
					}
				}
				else
				{
					func_289(uParam0, 0);
				}
			}
			else
			{
				func_626();
				if (func_205(1))
				{
					if (!func_205(268435456))
					{
						if (func_627())
						{
							func_207(268435456);
						}
						return false;
					}
					if (!func_324(uParam0))
					{
						return false;
					}
					if (!func_205(262144))
					{
						if (func_635(uParam0, 1))
						{
							func_207(262144);
						}
						return false;
					}
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_329))
					{
						EVENT::ADD_SHOCKING_EVENT_AT_POSITION(joaat("EVENT_SHOCKING_DEAD_BODY"), ENTITY::GET_ENTITY_COORDS(iLocal_329, false, false), 5f, -1f, -1f, -1f, -1f, -1, -1);
						AUDIO::DISABLE_PED_PAIN_AUDIO(iLocal_329, true);
						ENTITY::_SET_ENTITY_HEALTH(iLocal_329, 0, 0);
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_329, 1389.797f, 342.7328f, 86.5684f, 219.2729f, false, false, true);
					}
					func_629();
					func_630();
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_331))
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_331, vLocal_704, true, false, true, true);
						EVENT::ADD_SHOCKING_EVENT_AT_POSITION(joaat("EVENT_SHOCKING_DEAD_BODY"), ENTITY::GET_ENTITY_COORDS(iLocal_331, false, false), 5f, -1f, -1f, -1f, -1f, -1, -1);
						AUDIO::DISABLE_PED_PAIN_AUDIO(iLocal_331, true);
						PED::APPLY_PED_DAMAGE_PACK(iLocal_331, "PD_RC_Here_Kitty4_Ped_Mauled_By_Lion", 0f, 1f);
						ENTITY::_SET_ENTITY_HEALTH(iLocal_331, 0, 0);
						if (!func_205(16))
						{
							func_206(1);
							func_207(16);
						}
					}
					iVar0 = 0;
					while (iVar0 < 4)
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_349[iVar0 /*6*/]) && iVar0 != 0)
						{
							__LIB_2__::func_426(&(Local_349[iVar0 /*6*/]));
						}
						iVar0++;
					}
					iVar0 = 0;
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if ((!ENTITY::IS_ENTITY_DEAD(Local_374[iVar0 /*6*/]) && iVar0 != 0) && iVar0 != 1)
						{
							__LIB_2__::func_426(&(Local_374[iVar0 /*6*/]));
						}
						iVar0++;
					}
					iVar0 = 0;
					iVar0 = 0;
					while (iVar0 < 7)
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_393[iVar0 /*5*/]))
						{
							__LIB_2__::func_426(&(Local_393[iVar0 /*5*/]));
						}
						iVar0++;
					}
					if (!PED::IS_PED_RAGDOLL(iLocal_331) && PED::_0xA0BC8FAED8CFEB3C(iLocal_329))
					{
						__LIB_1__::func_148(&uLocal_668);
						func_631();
						__LIB_1__::func_951(&(iLocal_334[0]));
						__LIB_1__::func_951(&(iLocal_334[1]));
						__LIB_2__::func_165(vLocal_695, 80f, 0, 0, 5);
						__LIB_1__::func_572(vLocal_698, 300f, 0, 0, 0, 0, 0);
						func_624();
						if (!MAP::DOES_BLIP_EXIST(iLocal_164))
						{
							MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_LOOT"), iLocal_329);
							MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_164, "KTTY4_B_LION");
						}
						iLocal_162 = 2;
					}
				}
				else
				{
					func_289(uParam0, 0);
				}
			}
			break;
		case 2:
			if (iParam1 == 0 || iParam1 == 1)
			{
				if (func_327(0, 4))
				{
					if (__LIB_0__::func_265(&uLocal_668) > 3f)
					{
						return true;
					}
				}
			}
			if (iParam1 == 2)
			{
				if (__LIB_0__::func_265(&uLocal_668) > 4f)
				{
					if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_18[3 /*18*/]) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_18[3 /*18*/], true, false)) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_18[3 /*18*/], false))
					{
						ANIMSCENE::START_ANIM_SCENE(Local_18[3 /*18*/]);
					}
					return true;
				}
				else if (__LIB_0__::func_265(&uLocal_668) > 3f)
				{
					if (!func_205(16))
					{
						func_206(1);
						func_207(16);
					}
					if (!func_205(32))
					{
						func_637();
						func_207(32);
					}
				}
				else if (__LIB_0__::func_265(&uLocal_668) > 2f)
				{
					if (!func_205(128))
					{
						func_638();
						func_207(128);
					}
				}
			}
			if (iParam1 == 4)
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_18[4 /*18*/], false))
				{
					if (__LIB_0__::func_265(&uLocal_668) > 3.8f)
					{
						ANIMSCENE::START_ANIM_SCENE(Local_18[4 /*18*/]);
						ANIMSCENE::SET_ANIM_SCENE_RATE(Local_18[4 /*18*/], 0.5f);
					}
				}
			}
			if ((iParam1 == 3 || iParam1 == 4) || iParam1 == 5)
			{
				if (__LIB_0__::func_265(&uLocal_668) > 4f)
				{
					func_298(uParam0);
					return true;
				}
			}
			break;
	}
	return false;
}

void func_298(var uParam0)
{
	int iVar0;
	if (iLocal_161 == 3 || iLocal_161 == 4)
	{
		func_324(uParam0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_329))
	{
		if (!func_205(67108864))
		{
			func_640(uParam0);
		}
		switch (iLocal_158)
		{
			case 0:
				if (!__LIB_0__::func_163(iLocal_329, 242628503))
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					if (ENTITY::DOES_ENTITY_EXIST(Local_374[0 /*6*/]))
					{
						TASK::TASK_TURN_PED_TO_FACE_COORD(0, ENTITY::GET_ENTITY_COORDS(Local_374[0 /*6*/], false, false), 2);
					}
					__LIB_1__::func_473(0, joaat("WORLD_ANIMAL_BIG_CAT_EATING"), -1, 0, 0, -1082130432 /* Float: -1f */);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_329, iVar0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_329, true);
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				}
				break;
			case 1:
				break;
			case 2:
				iLocal_158 = 3;
				break;
			case 3:
				if (!__LIB_0__::func_163(iLocal_329, 1435919172))
				{
				}
				break;
		}
	}
}

void func_299(var uParam0)
{
	int iVar0;
	func_290(uParam0);
	EVENT::_REMOVE_ALL_SHOCKING_EVENTS_OF_TYPE(joaat("EVENT_SHOCKING_DEAD_BODY"), true);
	EVENT::_REMOVE_ALL_SHOCKING_EVENTS_OF_TYPE(joaat("EVENT_SHOCKING_BEAT_DANGEROUS"), true);
	EVENT::_REMOVE_ALL_SHOCKING_EVENTS_OF_TYPE(joaat("EVENT_SHOT_FIRED"), false);
	EVENT::_REMOVE_ALL_SHOCKING_EVENTS_IN_AREA(vLocal_722, 200f, true);
	__LIB_2__::func_426(&iLocal_330);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (iVar0 != 0 && iVar0 != 1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_429[iVar0 /*65*/]))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_429[iVar0 /*65*/], false, true);
			}
			__LIB_2__::func_788(&(Local_429[iVar0 /*65*/]), 0, 1, 0);
		}
		else if (!ENTITY::IS_ENTITY_DEAD(Local_429[iVar0 /*65*/]))
		{
			func_643(iVar0);
		}
		iVar0++;
	}
	__LIB_2__::func_788(&(Local_393[1 /*5*/]), 0, 0, 1);
	func_398(0);
	func_392(uParam0, 0, 0, 0);
	__LIB_1__::func_148(&uLocal_647);
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
				if (__LIB_12__::func_986(uParam4, &uParam0, 1, 1))
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
					__LIB_12__::func_988(uParam4, &uParam0, uParam5);
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
			func_668(uParam4);
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
				__LIB_13__::func_60(uParam4);
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
				__LIB_13__::func_60(uParam4);
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

void func_316(int iParam0, int iParam1)
{
	*iParam0 = iParam1;
	__LIB_1__::func_649(&iLocal_159, 0);
}

bool func_317(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
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
					__LIB_12__::func_889(uParam0);
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
		__LIB_13__::func_103(uParam0, iParam5);
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
			__LIB_12__::func_923(uParam0);
			break;
		case 3:
			if (__LIB_12__::func_670(uParam0))
			{
				__LIB_3__::func_155(2);
				__LIB_12__::func_890(uParam0, uParam0->f_912[uParam0->f_1580 /*41*/].f_27, uParam0->f_1241[uParam0->f_1580 /*22*/].f_1, 1065353216 /* Float: 1f */);
				__LIB_1__::func_148(&(uParam0->f_1768));
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
			if (uParam0->f_1581 >= 0 || __LIB_0__::func_264(&(uParam0->f_1768)) >= 15f)
			{
				if (__LIB_12__::func_851(uParam0, iParam5))
				{
					if (__LIB_12__::func_699(uParam0))
					{
						uParam0->f_1581 = __LIB_12__::func_754(uParam0);
						__LIB_1__::func_148(&(uParam0->f_1768));
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
			if (__LIB_12__::func_851(uParam0, iParam5))
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

void func_319()
{
	if (!func_205(2048))
	{
		if ((PED::IS_PED_RAGDOLL(iLocal_331) || !ENTITY::IS_ENTITY_DEAD(Local_349[0 /*6*/])) || !ENTITY::IS_ENTITY_DEAD(Local_374[0 /*6*/]))
		{
			return;
		}
		if (iLocal_161 == 9)
		{
			GRAPHICS::_ADD_BLOOD_POOL_2(ENTITY::GET_ENTITY_COORDS(iLocal_329, false, false), 1f, 1f, 1f, true, NaNf, false);
		}
		GRAPHICS::_0x41F88A85A579A61D(1f);
		GRAPHICS::_0xDD9DC1AB63D513CE(1406.614f, 285.614f, 87.97778f);
		GRAPHICS::_0xDD9DC1AB63D513CE(1405.377f, 285.6158f, 87.9187f);
		GRAPHICS::_0xDD9DC1AB63D513CE(1404.037f, 286.1274f, 87.80931f);
		GRAPHICS::_0xDD9DC1AB63D513CE(1403.555f, 287.5051f, 87.71436f);
		GRAPHICS::_0x812C1563185C6FB2();
		GRAPHICS::_0x41F88A85A579A61D(1f);
		GRAPHICS::_0xDD9DC1AB63D513CE(1393.084f, 296.1141f, 87.26814f);
		GRAPHICS::_0xDD9DC1AB63D513CE(1392.628f, 296.9759f, 87.24713f);
		GRAPHICS::_0xDD9DC1AB63D513CE(1392.519f, 297.9243f, 87.23079f);
		GRAPHICS::_0xDD9DC1AB63D513CE(1392.678f, 299.1193f, 87.21227f);
		GRAPHICS::_0x812C1563185C6FB2();
		GRAPHICS::_0x41F88A85A579A61D(1f);
		GRAPHICS::_0xDD9DC1AB63D513CE(1393.846f, 307.0589f, 87.3344f);
		GRAPHICS::_0xDD9DC1AB63D513CE(1393.965f, 308.2035f, 87.32629f);
		GRAPHICS::_0xDD9DC1AB63D513CE(1393.921f, 309.3564f, 87.30875f);
		GRAPHICS::_0xDD9DC1AB63D513CE(1393.84f, 310.1208f, 87.21524f);
		GRAPHICS::_0x812C1563185C6FB2();
		GRAPHICS::_0x41F88A85A579A61D(1f);
		GRAPHICS::_0xDD9DC1AB63D513CE(1392.351f, 324.6202f, 86.90565f);
		GRAPHICS::_0xDD9DC1AB63D513CE(1392.883f, 325.7476f, 86.92268f);
		GRAPHICS::_0xDD9DC1AB63D513CE(1393.278f, 326.5588f, 86.92146f);
		GRAPHICS::_0xDD9DC1AB63D513CE(1393.741f, 327.2896f, 86.92185f);
		GRAPHICS::_0x812C1563185C6FB2();
		GRAPHICS::_0x41F88A85A579A61D(1f);
		GRAPHICS::_0xDD9DC1AB63D513CE(1388.845f, 345.1411f, 86.58165f);
		GRAPHICS::_0xDD9DC1AB63D513CE(1387.273f, 346.436f, 86.58517f);
		GRAPHICS::_0xDD9DC1AB63D513CE(1385.506f, 348.6288f, 86.59676f);
		GRAPHICS::_0xDD9DC1AB63D513CE(1385.506f, 348.6288f, 86.59676f);
		GRAPHICS::_0x812C1563185C6FB2();
		GRAPHICS::_ADD_BLOOD_POOL_2(1407.023f, 285.4671f, 88.00568f, 1f, 1f, 1f, true, NaNf, false);
		GRAPHICS::_ADD_BLOOD_POOL_2(1393.597f, 295.8294f, 87.28152f, 1.5f, 1.5f, 1f, true, NaNf, false);
		GRAPHICS::_ADD_BLOOD_POOL_2(ENTITY::GET_ENTITY_COORDS(Local_374[0 /*6*/], false, false), 1.5f, 1.5f, 1f, true, NaNf, false);
		GRAPHICS::_ADD_BLOOD_POOL_2(ENTITY::GET_ENTITY_COORDS(Local_374[1 /*6*/], false, false), 1.5f, 1.5f, 1f, true, NaNf, false);
		func_207(2048);
	}
	else
	{
		GRAPHICS::_0xB032C085D9A03907();
	}
}

int func_320(var uParam0)
{
	if (func_205(134217728))
	{
		return 1;
	}
	else if (func_713(uParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_330))
		{
			PED::SET_PED_RESET_FLAG(iLocal_330, 170, true);
			if (__LIB_4__::func_61(iLocal_330, sLocal_643, 1, 0.5f, 0.3f, 0, 0, 1))
			{
				func_207(134217728);
				return 1;
			}
		}
	}
	return 0;
}

bool func_321(var uParam0, bool bParam1)
{
	switch (iLocal_159)
	{
		case 0:
			if (__LIB_0__::func_266(Global_35, vLocal_701, 50f, 1, 1))
			{
				if (bParam1)
				{
					if (!Local_212[3 /*2*/].f_1)
					{
						func_126(uParam0, Local_212[4 /*2*/], 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
						Local_212[3 /*2*/].f_1 = 1;
					}
				}
			}
			__LIB_1__::func_148(&uLocal_671);
			__LIB_1__::func_649(&iLocal_159, 1);
			break;
		case 1:
			if (__LIB_0__::func_71(Global_35) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
			{
				__LIB_1__::func_694(Global_35, vLocal_704, 0, 15f, 11f, 9f, 5f, 1, 1, 1, 0);
				if (!bLocal_790)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
					{
						if (__LIB_0__::func_266(__LIB_0__::func_17(PED::GET_VEHICLE_PED_IS_IN(Global_35, false)), vLocal_704, 11f, 1, 1))
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(Global_35, 0, 0);
							bLocal_790 = true;
						}
					}
				}
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
			{
				if (__LIB_0__::func_48(__LIB_0__::func_17(PED::GET_VEHICLE_PED_IS_IN(Global_35, false)), iLocal_331, 7f, 0))
				{
					bLocal_789 = true;
				}
				else
				{
					func_719();
					if (!bLocal_784)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_393[0 /*5*/]) && __LIB_0__::func_48(Global_35, Local_393[0 /*5*/], 12f, 1))
						{
							__LIB_2__::func_602(&(Local_868[0 /*17*/]), "KTTY4_ILO_QUESTION", " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
							PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), Local_393[0 /*5*/], 8, 0, 1);
							if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_636))
							{
								iLocal_636 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), 1407.931f, 280.1713f, 88.98701f, 0f, 0f, 15.24999f, 4.75f, 2.5f, 3f);
							}
							bLocal_784 = true;
						}
					}
					else
					{
						iLocal_907 = func_721(&(Local_393[0 /*5*/]), &vLocal_886, 8f, &Local_868, 0f, 3, 0, 0, 1, 0, 0, 2, -1082130432 /* Float: -1f */);
						if (iLocal_907 == 0)
						{
							__LIB_2__::func_624(&Local_868, 1, 1, 1, 0);
							vLocal_886.f_2 = 0;
							__LIB_2__::func_344(&(Local_393[0 /*5*/]));
							if (__LIB_0__::func_71(Global_35))
							{
								TASK::TASK_DISMOUNT_ANIMAL(Global_35, 0, 0, 0, 0, 0);
							}
							else if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
							{
								TASK::TASK_LEAVE_ANY_VEHICLE(Global_35, 0, 0);
							}
							__LIB_1__::func_649(&iLocal_159, 2);
						}
					}
					Jump @629; //curOff = 562
					if (PED::IS_PED_ON_FOOT(Global_35))
					{
						if (__LIB_0__::func_75(&uLocal_644))
						{
							__LIB_0__::func_37(&uLocal_644);
						}
						if (func_205(1024))
						{
							func_611(1024);
						}
						__LIB_10__::func_597(Local_212[3 /*2*/]);
						__LIB_2__::func_298();
						return true;
					}
				}
				return false;
			}
			default:
				break;
	}
}

bool func_322(var uParam0)
{
	char* sVar0;
	CAM::_0x8910C24B7E0046EC();
	__LIB_13__::func_847();
	switch (iLocal_159)
	{
		case 0:
			__LIB_0__::func_325(&iLocal_165);
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
			__LIB_1__::func_649(&iLocal_159, 1);
			break;
		case 1:
			func_327(1, 0);
			switch (iLocal_14)
			{
				case 0:
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_18[1 /*18*/]) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_18[1 /*18*/], true, false))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_345) && ENTITY::DOES_ENTITY_EXIST(iLocal_346))
						{
							PLAYER::_0x3946FC742AC305CD(PLAYER::GET_PLAYER_INDEX(), Local_393[0 /*5*/], "RC_HERE_KITTY_4", 1408.103f, 280.0796f, 88.55576f, 0, "RKTTY4");
							OBJECT::_0xC07B91B996C1DE89(iLocal_236, 0);
							OBJECT::_0xC07B91B996C1DE89(iLocal_235, 0);
							func_726(1, "p_door_emeraldranchbarn01", iLocal_346);
							func_726(1, "p_door_emeraldranchbarn01^1", iLocal_345);
							if (__LIB_0__::func_399(Global_35, 1, 0, 0) != joaat("WEAPON_UNARMED") || __LIB_0__::func_399(Global_35, 1, 1, 0) != joaat("WEAPON_UNARMED"))
							{
								if (!__LIB_0__::func_163(Global_35, 716706914))
								{
									WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
								}
							}
							__LIB_5__::func_20(0, 0);
							ANIMSCENE::START_ANIM_SCENE(Local_18[1 /*18*/]);
							iLocal_14 = 1;
						}
					}
					break;
				case 1:
					if (__LIB_0__::func_399(Global_35, 1, 0, 0) != joaat("WEAPON_UNARMED") || __LIB_0__::func_399(Global_35, 1, 1, 0) != joaat("WEAPON_UNARMED"))
					{
						if (!__LIB_0__::func_163(Global_35, 716706914))
						{
							WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
						}
					}
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_331))
					{
						TASK::TASK_LOOK_AT_ENTITY(iLocal_331, Global_35, 500, 0, 51, 0);
					}
					if (!ENTITY::IS_ENTITY_DEAD(Local_393[0 /*5*/]))
					{
						TASK::TASK_LOOK_AT_ENTITY(Local_393[0 /*5*/], Global_35, 500, 0, 51, 0);
						TASK::TASK_LOOK_AT_ENTITY(Global_35, Local_393[0 /*5*/], 500, 0, 51, 0);
					}
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_18[1 /*18*/]))
					{
						if (__LIB_0__::func_181())
						{
							sVar0 = "JohnMarston";
						}
						else
						{
							sVar0 = "ARTHUR";
						}
						if (ANIMSCENE::_0x8D81E7824B7753F7(Local_18[1 /*18*/], "s_S4_IG2_Idles", 1))
						{
							func_288(uParam0, func_61(1), func_61(2), 1, 2, 0);
							if (!MAP::DOES_BLIP_EXIST(iLocal_167))
							{
								iLocal_167 = MAP::_BLIP_ADD_FOR_COORD(408396114, 1407.631f, 279.3355f, 88.53571f);
								MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_167, "KTTY4_BLIP_02");
							}
							func_126(uParam0, "KTTY4_OBJ_0", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
							iLocal_14 = 2;
							__LIB_0__::func_172(iLocal_636);
						}
					}
					break;
				case 2:
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_18[1 /*18*/]))
					{
						if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_18[1 /*18*/], sLocal_138[2]))
						{
							if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_18[1 /*18*/], sLocal_138[2]))
							{
								ANIMSCENE::_0xDF7B5144E25CD3FE(Local_18[1 /*18*/], sLocal_138[2]);
							}
						}
						else if (__LIB_0__::func_266(Global_35, 1408.44f, 280.757f, 89.466f, 0.5f, 1, 1))
						{
							HUD::_HIDE_HUD_COMPONENT(724769646);
							UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
							PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
							WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_18[1 /*18*/], sLocal_138[2], true);
							__LIB_0__::func_325(&iLocal_167);
							iLocal_14 = 3;
						}
						else if (__LIB_0__::func_266(Global_35, 1407.57f, 282.725f, 89.571f, 3.5f, 0, 1))
						{
							PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
						}
					}
					break;
				case 3:
					__LIB_12__::func_773(1, 0, 1, 1);
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_18[1 /*18*/]))
					{
						if (__LIB_0__::func_181())
						{
							sVar0 = "JohnMarston";
						}
						else
						{
							sVar0 = "ARTHUR";
						}
						if (ANIMSCENE::_0xB89FCFF19DAFFF28(Local_18[1 /*18*/], sVar0))
						{
							iLocal_14 = 4;
						}
						else if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -537122392) && CAM::_0xA24C1D341C6E0D53(1, 0, 0))
						{
							ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_18[1 /*18*/], sVar0, Global_35);
							iLocal_14 = 4;
						}
					}
					break;
				case 4:
					HUD::_DISPLAY_HUD_COMPONENT(724769646);
					PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "RKTTY4");
					__LIB_1__::func_649(&iLocal_159, 2);
					break;
			}
			break;
		case 2:
			return true;
	}
	return false;
}

bool func_323(var uParam0)
{
	switch (iLocal_159)
	{
		case 0:
			__LIB_2__::func_165(vLocal_695, 80f, 0, 0, 5);
			if (!MAP::DOES_BLIP_EXIST(iLocal_168))
			{
				iLocal_168 = MAP::_BLIP_ADD_FOR_RADIUS(408396114, 1409.985f, 273.2339f, 88.53571f, 5.5f);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_330))
				{
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_330, vLocal_710, fLocal_765, true, false, true);
				}
				PLAYER::_0x1D77B47AFA584E90(PLAYER::GET_PLAYER_INDEX(), -1, false);
				func_126(uParam0, "KTTY4_OBJ_01A", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_1__::func_148(&uLocal_647);
			}
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_18[0 /*18*/]))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(Local_18[0 /*18*/]);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_329))
			{
				TASK::CLEAR_PED_TASKS(iLocal_329, true, false);
			}
			func_629();
			func_630();
			__LIB_0__::func_400(1968676233);
			STREAMING::_REQUEST_IMAP(2112594812);
			__LIB_1__::func_572(vLocal_698, 300f, 0, 0, 0, 0, 0);
			func_624();
			__LIB_1__::func_649(&iLocal_159, 1);
			break;
		case 1:
			func_327(2, 0);
			func_729();
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_18[2 /*18*/]))
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_18[2 /*18*/], false) && !func_205(8192))
				{
					func_730();
				}
				if (!func_205(536870912))
				{
					if (__LIB_0__::func_266(Global_35, vLocal_716, 2.5f, 1, 1))
					{
						AUDIO::_PLAY_SOUND_FROM_POSITION("LION_OFFSCREEN_ROAR", 1408.369f, 279.5837f, 94.15867f, "RKTTY3_Sounds", false, 0, false, 0);
						__LIB_1__::func_148(&uLocal_665);
						func_207(536870912);
					}
				}
				else if (!func_205(1073741824 /* Float: 2f */))
				{
					if (__LIB_0__::func_264(&uLocal_665) > 0.6f)
					{
						AUDIO::_PLAY_SOUND_FROM_POSITION("ATTACK_MEN", 1407.369f, 281.5837f, 92.15867f, "RKTTY3_Sounds", false, 0, true, 0);
						AUDIO::_PLAY_SOUND_FROM_POSITION("LION_COMMOTION_ONE_SHOT", 1407.369f, 281.5837f, 92.15867f, "RKTTY3_Sounds", false, 0, true, 0);
						func_731();
						func_207(1073741824 /* Float: 2f */);
					}
				}
				else if (__LIB_0__::func_264(&uLocal_665) > 1f)
				{
					if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_18[2 /*18*/], Local_18[2 /*18*/].f_16))
					{
						if (!func_205(8192))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_330))
							{
								ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_330, vLocal_713, 0f, true, false, true);
							}
							func_732();
							ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_18[2 /*18*/], Global_36, ENTITY::GET_ENTITY_ROTATION(Global_35, 2), 2);
							PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_18[2 /*18*/], Local_18[2 /*18*/].f_16, true);
							ANIMSCENE::START_ANIM_SCENE(Local_18[2 /*18*/]);
							if (iLocal_15 < 1)
							{
								iLocal_15 = 1;
							}
							if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_18[1 /*18*/]))
							{
								ANIMSCENE::_DELETE_ANIM_SCENE(Local_18[1 /*18*/]);
							}
							if (!Local_191[5 /*2*/].f_1)
							{
								Local_191[5 /*2*/].f_1 = __LIB_12__::func_876(uParam0, Local_191[5 /*2*/], 0);
							}
							if (__LIB_0__::func_75(&uLocal_647))
							{
								__LIB_0__::func_37(&uLocal_647);
							}
							AUDIO::_PLAY_SOUND_FROM_POSITION("LION_COMMOTION_LOOP", 1407.369f, 281.5837f, 92.15867f, "RKTTY3_Sounds", false, 0, true, 0);
							bLocal_782 = true;
							__LIB_1__::func_148(&uLocal_680);
							func_207(33554432);
							func_631();
							__LIB_1__::func_148(&uLocal_662);
							func_207(8192);
						}
					}
				}
				if (ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(Local_18[2 /*18*/]))
				{
					PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "Cautious", 1f, -1);
				}
			}
			if (func_205(8192) && !func_205(268435456))
			{
				if (func_627())
				{
					func_207(268435456);
				}
			}
			if (__LIB_0__::func_75(&uLocal_662))
			{
				if (__LIB_0__::func_265(&uLocal_662) > 3f)
				{
					__LIB_1__::func_649(&iLocal_159, 2);
					__LIB_0__::func_37(&uLocal_662);
				}
				else if (__LIB_0__::func_265(&uLocal_662) > 0.5f)
				{
					if (!bLocal_778)
					{
						if (GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_rcm_kitty_hayloft_dust", 1408.254f, 279.852f, 92.98073f, 0f, 0f, 0f, 1f, false, false, false))
						{
							bLocal_778 = true;
						}
					}
				}
			}
			if (!Local_191[4 /*2*/].f_1)
			{
				Local_191[4 /*2*/].f_1 = __LIB_12__::func_876(uParam0, Local_191[4 /*2*/], 0);
			}
			else if (!Local_191[3 /*2*/].f_1)
			{
				if (!__LIB_13__::func_273(Local_191[4 /*2*/]))
				{
					if (__LIB_0__::func_266(Global_35, vLocal_716, 10f, 1, 1))
					{
						Local_191[3 /*2*/].f_1 = __LIB_12__::func_876(uParam0, Local_191[3 /*2*/], 0);
					}
				}
			}
			else if (!bLocal_770 && !__LIB_13__::func_273(Local_191[3 /*2*/]))
			{
				AUDIO::_PLAY_SOUND_FROM_POSITION("LION_OFFSCREEN_HUNT", 1408.369f, 279.5837f, 94.15867f, "RKTTY3_Sounds", false, 0, false, 0);
				bLocal_770 = true;
				__LIB_1__::func_148(&uLocal_677);
			}
			else if (__LIB_0__::func_264(&uLocal_677) > 7f)
			{
				bLocal_770 = false;
			}
			if (!__LIB_1__::func_325())
			{
				if (__LIB_0__::func_264(&uLocal_647) > 30f)
				{
					func_126(uParam0, "KTTY4_OBJ_01A", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				}
			}
			else if (__LIB_0__::func_75(&uLocal_647))
			{
				__LIB_0__::func_37(&uLocal_647);
			}
			break;
		case 2:
			__LIB_0__::func_325(&iLocal_168);
			if (!MAP::DOES_BLIP_EXIST(iLocal_169))
			{
				iLocal_169 = MAP::_BLIP_ADD_FOR_RADIUS(408396114, vLocal_719, 3f);
				func_126(uParam0, "KTTY4_OBJ_01B", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_1__::func_148(&uLocal_647);
			}
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_18[2 /*18*/]))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(Local_18[2 /*18*/]);
			}
			return true;
	}
	return false;
}

bool func_324(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_329))
	{
		return true;
	}
	STREAMING::REQUEST_MODEL(iLocal_259, false);
	if (STREAMING::HAS_MODEL_LOADED(iLocal_259))
	{
		iLocal_329 = __LIB_12__::func_885(uParam0, iLocal_259, vLocal_698, 299.7664f, 1, 1, 0, 1, 1, 1, 1, 0);
		if (__LIB_0__::func_272(iLocal_329, 1))
		{
			func_736();
			func_737();
			TASK::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(iLocal_329, true);
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_329, false);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_329, true, 0f);
			PED::REQUEST_PED_VISIBILITY_TRACKING(iLocal_329);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_329, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_329, 263, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_329, 138, false);
			PED::SET_PED_CONFIG_FLAG(iLocal_329, 277, true);
			ENTITY::SET_ENTITY_PROOFS(iLocal_329, 1, false);
			__LIB_3__::func_937(iLocal_329);
			PED::SET_PED_CONFIG_FLAG(iLocal_329, 186, false);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_259);
			PED::APPLY_PED_DAMAGE_PACK(iLocal_329, "PD_RC_Here_Kitty4_Lion_Bloody_Mouth_Paws", 0f, 1f);
			iLocal_158 = 0;
			return true;
		}
	}
	return false;
}

bool func_325(var uParam0)
{
	switch (iLocal_159)
	{
		case 0:
			func_288(uParam0, func_61(2), func_61(3), 2, 3, 0);
			if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_630))
			{
				iLocal_630 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1384.748f, 351.5281f, 88.39848f, 0f, 0f, -73.5f, 3f, 6f, 2f, "LION_FOUND_CYLINDER");
			}
			if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_631))
			{
				iLocal_631 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1380.682f, 355.0103f, 88.1088f, 0f, 0f, 14.99999f, 11f, 9f, 4f, "LION_FOUND_BOX");
			}
			if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_632))
			{
				iLocal_632 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1387.01f, 356.0574f, 88.84405f, 0f, 0f, 15.99999f, 26.5f, 9.75f, 4.75f, "BLOCK_JUMP_CLIMB");
			}
			__LIB_1__::func_572(vLocal_698, 300f, 0, 0, 0, 0, 0);
			func_624();
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_329, vLocal_698, 299.7664f, true, false, true);
			iLocal_158 = 0;
			EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_DANGEROUS"), iLocal_329, 0f, 150f, 150f, 0f, -1f, 180f, true, false, -1, -1);
			PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "Cautious", 1f, -1);
			func_634(uParam0, 0);
			__LIB_1__::func_649(&iLocal_159, 1);
			break;
		case 1:
			if (__LIB_0__::func_393(Global_35, iLocal_632, 0, 1) && !__LIB_0__::func_266(Global_35, 1395.24f, 353.5742f, 87.44995f, 2.5f, 1, 1))
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_JUMP"), false);
			}
			func_327(3, 4);
			if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_18[3 /*18*/]) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_18[3 /*18*/], true, false)) && ANIMSCENE::_0x1F0E401031E20146(Local_18[3 /*18*/], sLocal_153[1]))
			{
				if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_18[3 /*18*/], sLocal_153[0]))
				{
					if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_18[3 /*18*/], sLocal_153[0]))
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(Local_18[3 /*18*/], sLocal_153[0]);
					}
				}
			}
			if (!bLocal_190)
			{
				if (__LIB_0__::func_264(&uLocal_665) > 3f)
				{
					func_740();
					bLocal_190 = true;
				}
			}
			if (!bLocal_768)
			{
				if (__LIB_0__::func_264(&uLocal_665) > 6f)
				{
					AUDIO::_PLAY_SOUND_FROM_POSITION("LION_OFFSCREEN_ROAR", 1406.593f, 283.1307f, 89.21844f, "RKTTY3_Sounds", false, 0, true, 0);
					bLocal_768 = true;
				}
			}
			if (bLocal_782)
			{
				if (__LIB_0__::func_264(&uLocal_665) > 10f)
				{
					AUDIO::_STOP_SOUND_WITH_NAME("LION_COMMOTION_LOOP", "RKTTY3_Sounds");
					bLocal_782 = false;
					__LIB_0__::func_37(&uLocal_665);
				}
			}
			if (!func_205(8))
			{
				if (func_628(uParam0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_331))
					{
						PED::APPLY_PED_DAMAGE_PACK(iLocal_331, "PD_RC_Here_Kitty4_Ped_Mauled_By_Lion", 0f, 1f);
					}
					func_207(8);
				}
			}
			else if (!Local_191[1 /*2*/].f_1)
			{
				if (__LIB_0__::func_266(Global_35, vLocal_719, 3f, 1, 1) || bLocal_771)
				{
					if (!func_205(128))
					{
						func_638();
						func_207(128);
					}
					if (!func_205(32))
					{
						func_637();
						func_207(32);
					}
					if (!func_205(16))
					{
						func_206(1);
						func_207(16);
					}
					func_740();
					__LIB_0__::func_37(&uLocal_680);
					if (bLocal_782)
					{
						AUDIO::_STOP_SOUND_WITH_NAME("LION_COMMOTION_LOOP", "RKTTY3_Sounds");
						bLocal_782 = false;
					}
					UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
					MAP::REMOVE_BLIP(&iLocal_169);
					Local_191[1 /*2*/].f_1 = 1;
					if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_18[3 /*18*/]) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_18[3 /*18*/], true, false)) && ANIMSCENE::_0x23E33CB9F4A3F547(Local_18[3 /*18*/], sLocal_153[0]))
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_18[3 /*18*/], sLocal_153[0], true);
						__LIB_6__::func_900(Local_191[5 /*2*/], 0, 0);
					}
				}
				else if (__LIB_0__::func_266(Global_35, vLocal_719, 6f, 1, 1))
				{
					if (!func_205(128))
					{
						func_638();
						func_207(128);
					}
					if (!func_205(32))
					{
						func_637();
						func_207(32);
					}
					if (!func_205(16))
					{
						func_206(1);
						func_207(16);
					}
				}
				if (!__LIB_1__::func_325())
				{
					if (__LIB_0__::func_264(&uLocal_647) > 15f)
					{
						func_126(uParam0, "KTTY4_OBJ_01B", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					}
				}
				else if (__LIB_0__::func_75(&uLocal_647))
				{
					__LIB_0__::func_37(&uLocal_647);
				}
			}
			else
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_18[3 /*18*/]))
				{
					if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_18[3 /*18*/], false))
					{
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
						TASK::TASK_LOOK_AT_ENTITY(Global_35, iLocal_331, 500, 12, 51, 0);
					}
				}
				if (iLocal_15 < 2)
				{
					iLocal_15 = 2;
				}
				if (!__LIB_13__::func_273(Local_191[1 /*2*/]) && !Local_212[10 /*2*/].f_1)
				{
					func_126(uParam0, Local_212[10 /*2*/], 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					func_625(1);
					func_611(33554432);
					Local_212[10 /*2*/].f_1 = 1;
				}
				if (!ENTITY::IS_ENTITY_DEAD(Local_393[0 /*5*/]))
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_18[3 /*18*/]) && ANIMSCENE::_0x005E6F28DD7ED58D(Local_18[3 /*18*/], "A_M_M_ValFarmer_01"))
					{
						__LIB_1__::func_148(&uLocal_674);
						TASK::_TASK_SMART_FLEE_STYLE_PED(Local_393[0 /*5*/], iLocal_329, 4, 256, -1082130432 /* Float: -1f */, -1, 0);
						__LIB_2__::func_788(&(Local_393[0 /*5*/]), 1, 0, 1);
						func_742();
						func_743();
						if (!bLocal_769)
						{
							AUDIO::_PLAY_SOUND_FROM_POSITION("LION_OFFSCREEN_ROAR", vLocal_722, "RKTTY3_Sounds", false, 0, true, 0);
							bLocal_769 = true;
						}
					}
				}
			}
			__LIB_1__::func_694(Global_35, vLocal_722, 0, 1112014848 /* Float: 50f */, 20f, 8f, 1084227584 /* Float: 5f */, 1, 1, 0, 0);
			if (!__LIB_0__::func_75(&uLocal_683))
			{
				if (__LIB_0__::func_393(Global_35, iLocal_630, 0, 1) || __LIB_0__::func_393(Global_35, iLocal_631, 0, 1))
				{
					CAM::_0xE296208C273BD7F0(1000, -1, 0, 17, 1, 0);
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
					__LIB_1__::func_148(&uLocal_683);
					bLocal_788 = true;
				}
			}
			else if (__LIB_0__::func_264(&uLocal_683) > 1f)
			{
				__LIB_0__::func_37(&uLocal_683);
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
				CAM::_0xE296208C273BD7F0(1000, -1, 0, 17, 1, 0);
				PED::_0xF1C03A5352243A30(iLocal_329);
				__LIB_1__::func_649(&iLocal_159, 2);
			}
			else
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
				CAM::_0xE296208C273BD7F0(1000, -1, 0, 17, 1, 0);
			}
			if (func_744(iLocal_329, 1097859072 /* Float: 15f */) || __LIB_3__::func_528(Global_35, iLocal_329))
			{
				PED::_0xF1C03A5352243A30(iLocal_329);
				__LIB_1__::func_649(&iLocal_159, 2);
			}
			if (!__LIB_1__::func_325())
			{
				if (__LIB_0__::func_264(&uLocal_647) > 60f)
				{
					func_126(uParam0, Local_212[10 /*2*/], 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				}
			}
			else if (__LIB_0__::func_75(&uLocal_647))
			{
				__LIB_0__::func_37(&uLocal_647);
			}
			if (!func_205(4194304))
			{
				if (__LIB_0__::func_264(&uLocal_674) > 10f)
				{
					func_207(4194304);
				}
			}
			break;
		case 2:
			if (bLocal_788)
			{
				CAM::_0xE296208C273BD7F0(1000, -1, 0, 17, 1, 0);
			}
			__LIB_0__::func_37(&uLocal_644);
			__LIB_0__::func_37(&uLocal_674);
			func_207(4194304);
			__LIB_0__::func_325(&iLocal_165);
			__LIB_0__::func_37(&uLocal_644);
			func_288(uParam0, func_61(3), func_61(4), 3, 4, 0);
			PED::_0x411189E51B8020BA(Global_35, "Cautious");
			if (iLocal_15 < 3)
			{
				iLocal_15 = 3;
			}
			return true;
	}
	return false;
}

void func_326(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	__LIB_14__::func_201();
	switch (iLocal_159)
	{
		case 0:
			func_288(uParam0, func_61(4), func_61(5), 4, 5, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_329))
			{
				if (!MAP::DOES_BLIP_EXIST(iLocal_164))
				{
					iLocal_164 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), iLocal_329);
					MAP::_BLIP_SET_MODIFIER(iLocal_164, 1708296202);
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_164, "KTTY4_B_LION");
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_393[0 /*5*/]))
			{
				TASK::CLEAR_PED_TASKS(Local_393[0 /*5*/], true, false);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(Local_393[0 /*5*/], vLocal_707, fLocal_764, false, true);
				TASK::TASK_COWER(Local_393[0 /*5*/], -1, 0, 0);
			}
			iVar2 = 0;
			while (iVar2 < 7)
			{
				__LIB_2__::func_788(&(Local_393[iVar2 /*5*/]), 1, 1, 1);
				iVar2++;
			}
			if (iLocal_15 < 4)
			{
				iLocal_15 = 4;
			}
			func_746();
			__LIB_0__::func_188(PLAYER::_GET_DEADEYE_ABILITY_LEVEL(PLAYER::PLAYER_ID()));
			PLAYER::_0xB783F75940B23014(PLAYER::PLAYER_ID(), 0.5f);
			PLAYER::_0x22B3CABEDDB538B2(PLAYER::PLAYER_ID(), 0.3f);
			PLAYER::_0xBBA140062B15A8AC(PLAYER::PLAYER_ID());
			PED::SET_PED_RESET_FLAG(Global_35, 159, true);
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_18[4 /*18*/]))
			{
				ANIMSCENE::SET_ANIM_SCENE_RATE(Local_18[4 /*18*/], 1f);
			}
			iVar0 = func_462(285212800, 0);
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
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, false, 0, false, false);
			TASK::TASK_SWAP_WEAPON(Global_35, 1, 0, 0, 0);
			WEAPON::_0x4820A6939D7CEF28(Global_35, 1);
			PED::SET_PED_CONFIG_FLAG(Global_35, 511, true);
			PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), true, iLocal_329, -1, false);
			func_748(iVar1, 6, 1, 0, 0, 752097756, 0, 0, 0, 0);
			WEAPON::_0x183CE355115B6E75(Global_35, iVar0);
			WEAPON::SET_AMMO_IN_CLIP(Global_35, iVar0, -1);
			WEAPON::_0x0A2AB7B7ABC055F4(Global_35);
			__LIB_1__::func_572(vLocal_698, 300f, 0, 0, 0, 0, 0);
			func_624();
			PED::SET_PED_CONFIG_FLAG(iLocal_329, 277, false);
			PED::SET_PED_CONFIG_FLAG(iLocal_329, 26, true);
			iLocal_158 = 2;
			__LIB_8__::func_776(iLocal_329, 100);
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_329, true);
			ENTITY::SET_ENTITY_PROOFS(iLocal_329, 0, false);
			PED::SET_RAGDOLL_BLOCKING_FLAGS(Global_35, 262288);
			if (func_205(-2147483648))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_329, false, true);
			}
			PED::SET_RAGDOLL_BLOCKING_FLAGS(iLocal_329, 1);
			PED::SET_PED_CAN_TORSO_REACT_IK(iLocal_329, false);
			PED::_0x9F933E0985E12C51(iLocal_329, 1f, 1f, 0.25f);
			PED::_0x88B2026A3B0BE33D(iLocal_329, 1f);
			EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_DANGEROUS"), iLocal_329, 0f, 150f, 150f, 0f, -1f, 180f, true, false, -1, -1);
			__LIB_1__::func_649(&iLocal_159, 1);
			break;
		case 1:
			if (!func_205(262144))
			{
				if (func_635(uParam0, 1))
				{
					func_207(262144);
				}
			}
			if (!Local_212[0 /*2*/].f_1)
			{
				func_750(uParam0, Local_212[0 /*2*/], 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				if (bLocal_776)
				{
					func_126(uParam0, Local_212[0 /*2*/], 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				}
				Local_212[0 /*2*/].f_1 = 1;
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_329))
			{
				if (ENTITY::IS_ENTITY_DEAD(iLocal_329))
				{
					func_751();
					if (!__LIB_0__::func_75(&uLocal_659))
					{
						PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(iLocal_329, 1);
						PED::SET_PED_CAN_TORSO_REACT_IK(iLocal_329, true);
						__LIB_1__::func_148(&uLocal_659);
						PED::SET_PED_RESET_FLAG(Global_35, 159, true);
					}
					else if (__LIB_0__::func_265(&uLocal_659) > 0.5f)
					{
						if (PLAYER::_0xB16223CB7DA965F0(PLAYER::PLAYER_ID()))
						{
							PLAYER::_0xAE637BB8EF017875(PLAYER::PLAYER_ID(), 1);
							PLAYER::_0x22B3CABEDDB538B2(PLAYER::PLAYER_ID(), 0f);
							PLAYER::_0xB783F75940B23014(PLAYER::PLAYER_ID(), 0f);
						}
						__LIB_1__::func_649(&iLocal_159, 2);
					}
					else
					{
						PED::SET_PED_RESET_FLAG(Global_35, 159, true);
					}
				}
				else
				{
					func_746();
					PED::SET_PED_RESET_FLAG(Global_35, 159, true);
					if (iLocal_255 == 5)
					{
						iLocal_255++;
					}
					else if (__LIB_0__::func_48(Global_35, iLocal_329, 5f, 1))
					{
						if (iLocal_255 >= 2 && func_752(500))
						{
							iLocal_255++;
						}
						else if (func_752(500))
						{
							iLocal_255++;
						}
					}
					else if (__LIB_0__::func_48(Global_35, iLocal_329, 7.5f, 1))
					{
						if (iLocal_255 >= 3 && func_752(500))
						{
							iLocal_255++;
						}
						else if (func_752(500))
						{
							iLocal_255++;
						}
					}
					else if (func_752(500))
					{
						iLocal_255++;
					}
					if (!__LIB_0__::func_75(&uLocal_659))
					{
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_35, iLocal_329, 0, 0) || PED::IS_PED_PERFORMING_MELEE_ACTION(iLocal_329, 1, 0))
						{
							func_751();
							__LIB_1__::func_148(&uLocal_659);
						}
					}
					else if (__LIB_0__::func_265(&uLocal_659) > 0.25f)
					{
						ENTITY::_SET_ENTITY_HEALTH(Global_35, 0, 0);
						__LIB_0__::func_37(&uLocal_659);
					}
					if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_18[4 /*18*/], false))
					{
						if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_18[4 /*18*/]) > 0.24f)
						{
							if (!bLocal_780)
							{
								PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), false, iLocal_329, -1, false);
								PED::SET_PED_CONFIG_FLAG(Global_35, 511, false);
								__LIB_12__::func_773(0, 0, 1, 1);
								TASK::TASK_PLAY_ANIM(Global_35, "script_rc@ktty@ig@ig_lionattack", "death_arthur", 8f, -8f, -1, 524292, 0f, false, 0, false, 0, false);
								WEAPON::_0xCEF4C65DE502D367(Global_35, 0, 0, 0, 0);
								if (PLAYER::_0xB16223CB7DA965F0(PLAYER::PLAYER_ID()))
								{
									PLAYER::_0xAE637BB8EF017875(PLAYER::PLAYER_ID(), 1);
									PLAYER::_0x22B3CABEDDB538B2(PLAYER::PLAYER_ID(), 0f);
									PLAYER::_0xB783F75940B23014(PLAYER::PLAYER_ID(), 0f);
								}
								bLocal_780 = true;
								__LIB_12__::func_773(0, 0, 1, 1);
							}
							else if (!ENTITY::IS_ENTITY_DEAD(Global_35))
							{
								__LIB_12__::func_773(0, 0, 1, 1);
								if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(Global_35, "script_rc@ktty@ig@ig_lionattack", "death_arthur") > 0.65f)
								{
									bLocal_781 = true;
								}
								else if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(Global_35, "script_rc@ktty@ig@ig_lionattack", "death_arthur") > 0.01f)
								{
									if (!bLocal_787)
									{
										PED::APPLY_DAMAGE_TO_PED(Global_35, BUILTIN::ROUND((IntToFloat(ENTITY::GET_ENTITY_HEALTH(Global_35)) * 0.75f)), 0, -1, 0);
										PAD::SET_PAD_SHAKE(0, 100, 256);
										bLocal_787 = true;
									}
								}
							}
							__LIB_0__::func_37(&uLocal_659);
						}
					}
				}
			}
			break;
		case 2:
			PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(Global_35, 262288);
			__LIB_5__::func_20(1, 0);
			__LIB_0__::func_769();
			__LIB_10__::func_597("KTTY4_OBJ_02");
			__LIB_0__::func_325(&iLocal_164);
			if (!MAP::DOES_BLIP_EXIST(iLocal_164))
			{
				MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_LOOT"), iLocal_329);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_164, "KTTY4_B_LION");
			}
			TASK::CLEAR_PED_TASKS(Global_35, true, false);
			func_316(&iLocal_161, 9);
			func_299(uParam0);
			break;
	}
}

bool func_327(int iParam0, int iParam1)
{
	if (!Local_18[iParam0 /*18*/].f_15)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_18[iParam0 /*18*/]))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_18[iParam0 /*18*/], true, false))
			{
				Local_18[iParam0 /*18*/].f_15 = 1;
				return Local_18[iParam0 /*18*/].f_15;
			}
		}
		else
		{
			Local_18[iParam0 /*18*/] = ANIMSCENE::_CREATE_ANIM_SCENE(Local_18[iParam0 /*18*/].f_1, iParam1, Local_18[iParam0 /*18*/].f_16, false, true);
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_18[iParam0 /*18*/]))
			{
				func_753(iParam0);
				ANIMSCENE::LOAD_ANIM_SCENE(Local_18[iParam0 /*18*/]);
			}
		}
	}
	return Local_18[iParam0 /*18*/].f_15;
}

void func_352(int iParam0, char* sParam1, bool bParam2, float fParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	char* sVar0;
	sVar0 = func_587(iParam8, sParam1, sParam4, sParam5, sParam6, sParam7);
	if (bParam2 == 1)
	{
		UILOG::_UILOG_SET_CACHED_OBJECTIVE(sVar0);
	}
	func_588(iParam0, sParam1, sVar0, fParam3);
}

bool func_353(char* sParam0)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return false;
	}
	return (func_760(sParam0, 0, 0, -1, -1, 0) && __LIB_1__::func_325());
}

var func_354(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	char* sVar0;
	if (bParam2)
	{
		UIFEED::_0xDD1232B332CBB9E7(3, 1, 1);
	}
	if (Global_1572887.f_12 != -1)
	{
		return __LIB_0__::func_565(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_587(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		UILOG::_UILOG_SET_CACHED_OBJECTIVE(sVar0);
	}
	return __LIB_0__::func_565(sVar0, iParam1, 0, 0, 1, 1);
}

void func_356(int iParam0, int iParam1, int iParam2)
{
	__LIB_12__::func_787(iParam0, iParam2);
	if (__LIB_5__::func_353(iParam0))
	{
		func_764(Global_1347702[iParam0 /*49*/].f_15);
	}
	if (iParam1 == 1)
	{
		if (__LIB_1__::func_44(Global_1347702[iParam0 /*49*/].f_15))
		{
			func_175(Global_1347702[iParam0 /*49*/].f_15, 0, 2);
		}
	}
}

char[] func_362(int iParam0)
{
	char[] cVar0[8];
	if (!__LIB_0__::func_6(iParam0))
	{
		return cVar0;
	}
	switch (__LIB_0__::func_700(iParam0))
	{
		case 1:
			cVar0 = Global_1835011[__LIB_0__::func_909(iParam0) /*74*/].f_8;
			break;
		case 8:
			cVar0 = Global_1347702[__LIB_0__::func_76(iParam0) /*49*/].f_3;
			break;
		case 11:
			if (iParam0 == func_517(0, 10, 11, joaat("CABR01")))
			{
				StringCopy(&cVar0, "CABR01", 8);
			}
			break;
	}
	return cVar0;
}

void func_363(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
				func_383(iParam0, 6);
			}
			else
			{
				func_383(iParam0, 5);
			}
			func_381(iParam0);
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
	func_381(iParam0);
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
			func_383(iParam0, 6);
		}
		else
		{
			func_383(iParam0, 5);
		}
		func_381(iParam0);
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
						func_748(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_748(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_748(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_748(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_748(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_748(joaat("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_748(joaat("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_748(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_748(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_748(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_748(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_748(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_748(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_748(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_748(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_748(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_748(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_748(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_748(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_748(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_748(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_748(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_748(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_748(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_748(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_790();
						func_791(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
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
						func_748(joaat("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
							func_363(Global_1347702[21 /*49*/].f_15, 0, 0, 0, 0);
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
							func_363(Global_1347702[82 /*49*/].f_15, 0, 0, 0, 0);
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
							func_363(Global_1347702[83 /*49*/].f_15, 0, 0, 0, 0);
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
						func_748(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_748(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
		func_826();
		switch (iVar0)
		{
			case 1:
				switch (__LIB_0__::func_76(iParam0))
				{
					case 4:
						func_827(iParam0, 1000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 61:
					case 62:
					case 63:
						func_827(iParam0, 300, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 25:
						func_827(iParam0, 150000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 12:
						func_827(iParam0, 120000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 53:
						func_827(iParam0, 90000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 20:
						func_827(iParam0, 85000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 19:
						func_827(iParam0, 70000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 24:
						iVar18 = __LIB_0__::func_895(iParam0);
						func_827(iParam0, iVar18, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 28:
						func_827(iParam0, 45000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 34:
						func_827(iParam0, 600000, 1, 0.5f, 4, 0, 0, 1);
						if (!__LIB_1__::func_707(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0))
						{
							func_748(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						}
						break;
					case 29:
						func_827(iParam0, 4600, 1, 0f, 3, 0, 0, 1);
						break;
					case 37:
						break;
					case 58:
						break;
					case 57:
						func_827(iParam0, 2100000, 1, 0.9047619f, 8, 0, 0, 1);
						break;
					case 76:
						func_827(iParam0, 2042100, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 72:
						if (__LIB_0__::func_895(iParam0) == 0)
						{
							func_827(iParam0, 20000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						}
						else
						{
							func_827(iParam0, 15000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
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
						func_827(iParam0, 1500, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 55:
						__LIB_0__::func_896(8, 1);
						break;
					case 138:
						MISC::SET_BIT(&(Global_40.f_9052), 1);
						MISC::SET_BIT(&(Global_40.f_9052), 3);
						break;
					case 94:
						func_827(iParam0, 30000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 63:
						func_827(iParam0, 60000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 37:
						func_827(iParam0, 75000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 116:
						func_827(iParam0, 25000, 1, 0.5f, 1, 0, 0, 1);
						break;
					case 9:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ANSEL_ATHERTON"));
						break;
				}
				break;
			case 11:
				if (iParam0 == func_517(0, 10, 11, joaat("CABR01")))
				{
					func_827(iParam0, __LIB_0__::func_895(iParam0), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_517(0, 7, 11, joaat("CACR02")))
				{
					func_827(iParam0, __LIB_1__::func_794(9), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_517(0, 8, 11, joaat("CACR03")))
				{
					func_827(iParam0, __LIB_1__::func_794(10), 1, 0.5f, 2, 0, 0, 1);
				}
				else if (iParam0 == func_517(0, 11, 11, joaat("CACR01")))
				{
					func_827(iParam0, __LIB_1__::func_794(8), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_517(0, 12, 11, joaat("CACR04")))
				{
					func_827(iParam0, __LIB_1__::func_794(11), 1, 0.5f, 2, 0, 0, 1);
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
						func_830(func_362(Global_1879514.f_1));
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

void func_364(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	if (STATS::_0x01F4D242765C6B24(__LIB_0__::func_299(iParam0)))
	{
		iVar0 = 0;
		if (bParam1)
		{
			iVar0 = 3;
		}
		__LIB_0__::func_701(__LIB_0__::func_700(iParam0), __LIB_0__::func_299(iParam0), iVar0);
		if (__LIB_0__::func_13(32768))
		{
			iVar1 = __LIB_0__::func_700(iParam0);
			if ((iVar1 == 1 || iVar1 == 8) || (iVar1 == 11 && iParam0 == func_517(0, 10, 11, joaat("CABR01"))))
			{
				Global_1898438 = MISC::GET_GAME_TIMER();
				Global_1879514.f_1 = iParam0;
				Global_1879514.f_19 = func_832();
				Global_1879514.f_18 = 1;
			}
		}
	}
	if (__LIB_0__::func_702(iParam0))
	{
		func_175(iParam0, 0, 2);
	}
	else if (__LIB_1__::func_44(iParam0))
	{
		if (!__LIB_0__::func_291(iParam0) == 5 && !__LIB_0__::func_291(iParam0) == 6)
		{
			if (bParam1)
			{
				func_383(iParam0, 6);
			}
			else
			{
				func_383(iParam0, 5);
			}
			func_381(iParam0);
		}
	}
	switch (__LIB_0__::func_700(iParam0))
	{
		case 1:
			switch (__LIB_0__::func_76(iParam0))
			{
				case 12:
				case 19:
				case 20:
				case 24:
				case 25:
				case 28:
				case 29:
				case 34:
				case 53:
				case 57:
					Global_1879514.f_12 = 1;
					break;
				case 69:
				case 70:
				case 71:
				case 74:
				case 76:
					Global_1879514.f_14 = 1;
					break;
			}
			break;
		case 8:
			switch (__LIB_0__::func_76(iParam0))
			{
				case 37:
				case 63:
				case 94:
				case 116:
					Global_1879514.f_12 = 1;
					break;
				case 9:
					Global_1879514.f_14 = 1;
					break;
			}
			break;
	}
}

void func_365(int iParam0)
{
	int iVar0;
	vector3 vVar1[24];
	char[] cVar4[8];
	bool bVar5;
	bool bVar6;
	if (Global_1347702[iParam0 /*49*/].f_12 & 67108864 != 0)
	{
		return;
	}
	iVar0 = __LIB_3__::func_734(iParam0);
	if (iVar0 == 1)
	{
		if (UILOG::_UILOG_IS_ENTRY_REGISTERED(iVar0, __LIB_3__::func_733(iParam0)))
		{
			UILOG::_UILOG_MARK_MISSION_COMPLETED(__LIB_3__::func_733(iParam0));
		}
		__LIB_3__::func_735(iParam0, 4);
		__LIB_3__::func_735(iParam0, 8);
		return;
	}
	else if (__LIB_0__::func_1(Global_1347702[iParam0 /*49*/].f_12, 4))
	{
		__LIB_10__::func_694(Global_1347702[iParam0 /*49*/]);
		__LIB_7__::func_602(iParam0);
		if (UILOG::_UILOG_IS_ENTRY_REGISTERED(iVar0, __LIB_3__::func_733(iParam0)))
		{
			StringCopy(&cVar1, "", 24);
			cVar4 = func_587(0, &cVar1, 0, 0, -1, -1);
			func_588(iParam0, &cVar1, cVar4, -1082130432 /* Float: -1f */);
			UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(iVar0, __LIB_3__::func_733(iParam0), MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE"), MISC::GET_HASH_KEY("hud_toasts"));
		}
		__LIB_3__::func_735(iParam0, 4);
		__LIB_3__::func_735(iParam0, 8);
		return;
	}
	bVar5 = false;
	if (__LIB_3__::func_736(iParam0, 8))
	{
		bVar5 = true;
	}
	bVar6 = false;
	if (__LIB_3__::func_736(iParam0, 16))
	{
		bVar6 = true;
	}
	__LIB_10__::func_694(Global_1347702[iParam0 /*49*/]);
	__LIB_7__::func_602(iParam0);
	MemCopy(&cVar1, {Global_1347702[iParam0 /*49*/].f_1}, 3);
	StringConCat(&cVar1, "_obj", 24);
	if (__LIB_3__::func_736(iParam0, 64))
	{
		StringConCat(&cVar1, "3", 24);
	}
	else if (__LIB_3__::func_736(iParam0, 32))
	{
		StringConCat(&cVar1, "2", 24);
	}
	if (HUD::DOES_TEXT_LABEL_EXIST(&cVar1))
	{
		cVar4 = func_587(0, &cVar1, 0, 0, -1, -1);
		func_588(iParam0, &cVar1, cVar4, -1082130432 /* Float: -1f */);
		if (__LIB_3__::func_736(iParam0, 16) || bVar6)
		{
			__LIB_4__::func_684(iParam0, 1);
		}
		if (__LIB_3__::func_736(iParam0, 8) || bVar5)
		{
			__LIB_4__::func_685(iParam0, 1);
		}
	}
	else
	{
		StringCopy(&cVar1, "", 24);
		cVar4 = func_587(0, &cVar1, 0, 0, -1, -1);
		func_588(iParam0, &cVar1, cVar4, -1082130432 /* Float: -1f */);
		__LIB_4__::func_685(iParam0, 1);
		if (__LIB_3__::func_736(iParam0, 16) || bVar6)
		{
			__LIB_4__::func_684(iParam0, 1);
		}
	}
}

void func_371(bool bParam0, bool bParam1)
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
	func_844();
}

int func_381(int iParam0)
{
	return func_860(__LIB_0__::func_327(iParam0));
}

void func_383(int iParam0, int iParam1)
{
	if (!__LIB_0__::func_6(iParam0))
	{
		return;
	}
	func_862(iParam0, iParam1);
}

void func_391()
{
	vector3 vVar0;
	var uVar3;
	if (!bLocal_785)
	{
		if (func_327(5, 0))
		{
			if (!__LIB_0__::func_139(iLocal_792))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_329))
				{
					iLocal_792 = __LIB_2__::func_403("KTTY4_UC_PAW", joaat("INPUT_LOOT"), iLocal_329, 3, 0, 0, 0, 4, 2f, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
				}
			}
			else if (__LIB_0__::func_567(iLocal_792, 1))
			{
				vVar0 = { ENTITY::GET_ENTITY_COORDS(iLocal_329, false, false) };
				MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &uVar3, false);
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_18[5 /*18*/], vVar0.x, vVar0.y, uVar3, 0f, 0f, 0f, 2);
				ANIMSCENE::START_ANIM_SCENE(Local_18[5 /*18*/]);
				__LIB_1__::func_281(&iLocal_792, 1, 1);
				PED::_SET_PED_BODY_COMPONENT(iLocal_329, -1069772579);
				PED::_UPDATE_PED_VARIATION(iLocal_329, false, true, true, true, false);
				bLocal_785 = true;
			}
			else
			{
				iLocal_258 = HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(iLocal_329, 2f, 2, 1, 0, "KTTY4_B_LION", 0);
				HUD::_UIPROMPT_SET_GROUP(__LIB_3__::func_66(iLocal_792), iLocal_258, 0);
			}
		}
	}
	else if (!bLocal_786)
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(Local_18[5 /*18*/]))
		{
			__LIB_0__::func_325(&iLocal_164);
			func_748(joaat("PROVISION_LIONS_PAW"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
			bLocal_786 = true;
		}
	}
}

void func_392(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	if (__LIB_0__::func_1(uParam0->f_172, 8))
	{
		PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(Global_35, 262288);
		PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), false, 0, -1, false);
		PED::SET_PED_CONFIG_FLAG(Global_35, 511, false);
	}
	func_740();
	__LIB_0__::func_325(&iLocal_163);
	__LIB_0__::func_325(&iLocal_165);
	__LIB_0__::func_325(&iLocal_166);
	__LIB_0__::func_325(&iLocal_167);
	__LIB_0__::func_325(&iLocal_168);
	__LIB_0__::func_325(&iLocal_169);
	func_611(33554432);
	func_751();
	if (bLocal_782)
	{
		AUDIO::_STOP_SOUND_WITH_NAME("LION_COMMOTION_LOOP", "RKTTY3_Sounds");
		bLocal_782 = false;
	}
	if (bParam1)
	{
		__LIB_0__::func_325(&iLocal_164);
		if (INTERIOR::_IS_INTERIOR_ENTITY_SET_VALID(iLocal_270, "here_kitty_4_props"))
		{
			if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iLocal_270, "here_kitty_4_props"))
			{
				INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iLocal_270, "here_kitty_4_props", true);
			}
		}
		if (INTERIOR::IS_VALID_INTERIOR(iLocal_270) && INTERIOR::IS_INTERIOR_READY(iLocal_270))
		{
			INTERIOR::UNPIN_INTERIOR(iLocal_270);
		}
		__LIB_0__::func_400(2112594812);
		__LIB_0__::func_400(1968676233);
		__LIB_0__::func_400(350637317);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_266);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_267);
		TASK::REMOVE_WAYPOINT_RECORDING(sLocal_642);
		TASK::REMOVE_WAYPOINT_RECORDING(sLocal_643);
		OBJECT::_0xC07B91B996C1DE89(iLocal_235, 1);
		OBJECT::_0xC07B91B996C1DE89(iLocal_236, 1);
		iVar0 = 0;
		while (iVar0 < 6)
		{
			__LIB_1__::func_941(iLocal_240[iVar0]);
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			OBJECT::_0xC07B91B996C1DE89(iLocal_237[iVar0], 1);
			__LIB_1__::func_941(iLocal_237[iVar0]);
			iVar0++;
		}
		__LIB_1__::func_941(iLocal_235);
		__LIB_1__::func_941(iLocal_236);
		__LIB_1__::func_941(iLocal_247);
		__LIB_1__::func_941(iLocal_248);
		__LIB_1__::func_941(iLocal_249);
		__LIB_1__::func_941(iLocal_250);
		iVar0 = 0;
		while (iVar0 < 2)
		{
			__LIB_1__::func_951(&(iLocal_337[iVar0]));
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			__LIB_1__::func_951(&(iLocal_334[iVar0]));
			iVar0++;
		}
		if (iLocal_344 != 0)
		{
			if (ENTITY::_0x1FF441D7954F8709(iLocal_344))
			{
				ENTITY::_0xD2B9C78537ED5759(iLocal_344);
			}
		}
		if (iLocal_348 != 0)
		{
			if (ENTITY::_0x1FF441D7954F8709(iLocal_348))
			{
				ENTITY::_0xD2B9C78537ED5759(iLocal_348);
			}
		}
		if (iLocal_347 != 0)
		{
			if (ENTITY::_0x1FF441D7954F8709(iLocal_347))
			{
				ENTITY::_0xD2B9C78537ED5759(iLocal_347);
			}
		}
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_634))
		{
			PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_634);
			__LIB_0__::func_172(iLocal_634);
		}
		if (PED::_0x91A5F9CBEBB9D936(iLocal_637))
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_637, false);
		}
		if (PED::_0x91A5F9CBEBB9D936(iLocal_638))
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_638, false);
		}
		__LIB_0__::func_172(iLocal_626);
		__LIB_0__::func_172(iLocal_627);
		__LIB_0__::func_172(iLocal_628);
		__LIB_0__::func_172(iLocal_629);
		__LIB_0__::func_172(iLocal_630);
		__LIB_0__::func_172(iLocal_631);
		__LIB_0__::func_172(iLocal_632);
		__LIB_0__::func_172(iLocal_635);
		__LIB_0__::func_172(iLocal_636);
		PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "RKTTY4");
		__LIB_4__::func_932(18, 1);
	}
	if (bParam2)
	{
		__LIB_2__::func_788(&iLocal_329, 1, 1, 1);
		__LIB_2__::func_788(&iLocal_331, 1, 0, 1);
		iVar0 = 0;
		while (iVar0 < 7)
		{
			__LIB_2__::func_788(&(Local_393[iVar0 /*5*/]), 1, 0, 1);
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_262);
			__LIB_2__::func_788(&(Local_349[iVar0 /*6*/]), 1, 0, 1);
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_374[iVar0 /*6*/]))
			{
				PED::SET_PED_CONFIG_FLAG(Local_374[iVar0 /*6*/], 136, false);
				__LIB_7__::func_345(Local_374[iVar0 /*6*/], 0);
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_263);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_264);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_265);
			__LIB_2__::func_788(&(Local_374[iVar0 /*6*/]), 1, 0, 1);
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			__LIB_2__::func_788(&(Local_429[iVar0 /*65*/]), 0, 1, 1);
			iVar0++;
		}
		PLAYER::_0xE5D3EB37ABC1EB03(PLAYER::PLAYER_ID());
		__LIB_2__::func_426(&iLocal_330);
		__LIB_2__::func_788(&iLocal_332, 1, 0, 1);
		__LIB_10__::func_284(&iLocal_333);
		iVar0 = 0;
		while (iVar0 < 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_341[iVar0]))
			{
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iLocal_341[iVar0]));
			}
			iVar0++;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_340))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_340);
		}
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_259);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_260);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_261);
	if (!bParam3)
	{
		STREAMING::REMOVE_ANIM_DICT(sLocal_641);
		STREAMING::REMOVE_ANIM_DICT(sLocal_640);
		STREAMING::REMOVE_ANIM_DICT("CREATURES_MAMMAL@COUGAR@MELEE@STREAMED_CORE");
	}
}

void func_394()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_18[iVar0 /*18*/]))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(Local_18[iVar0 /*18*/]);
		}
		iVar0++;
	}
}

void func_395(int iParam0)
{
	if (iParam0 == 1)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_633))
		{
			POPULATION::_0xB56D41A694E42E86(iLocal_633, 0, 0, 0, -1, -1, 0);
			POPULATION::_0x18262CAFEBB5FBE1(iLocal_633, 0, 0, 0, -1, -1, 0);
			if (!PED::_0x91A5F9CBEBB9D936(iLocal_639))
			{
				iLocal_639 = __LIB_1__::func_391(iLocal_633, 0, 0, 0);
			}
			__LIB_0__::func_566(iLocal_633, 0);
		}
	}
	else
	{
		if (iLocal_639 != 0)
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_639, false);
		}
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_633))
		{
			POPULATION::_0xA1CFB35069D23C23(iLocal_633);
			POPULATION::_0x74C2B3DC0B294102(iLocal_633);
			VOLUME::_DELETE_VOLUME(iLocal_633);
		}
	}
}

void func_398(bool bParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (__LIB_2__::func_769(iLocal_237[iVar0]))
		{
			__LIB_1__::func_948(iLocal_237[iVar0], 0, 0f, 0, 1, 0, 0, 0);
		}
		iVar0++;
	}
	__LIB_1__::func_948(iLocal_236, 0, 0f, 0, 1, 0, 0, 0);
	__LIB_1__::func_948(iLocal_235, 0, 0f, 0, 1, 0, 0, 0);
	__LIB_1__::func_948(iLocal_247, 0, 0f, 0, 1, 0, 0, 0);
	__LIB_1__::func_948(iLocal_248, 0, 0f, 0, 1, 0, 0, 0);
	__LIB_1__::func_948(iLocal_249, 0, 0f, 0, 1, 0, 0, 0);
	__LIB_1__::func_948(iLocal_250, 0, 0f, 0, 1, 0, 0, 0);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		__LIB_1__::func_948(iLocal_240[iVar0], 0, 0f, 0, 1, 0, 0, 0);
		iVar0++;
	}
	if (bParam0)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 2)
		{
			__LIB_1__::func_948(iLocal_251[iVar0], 0, 0f, 0, 1, 0, 0, 0);
			iVar0++;
		}
	}
}

void func_399()
{
	__LIB_4__::func_193(589);
	__LIB_4__::func_193(591);
	__LIB_4__::func_193(592);
	__LIB_4__::func_193(593);
	__LIB_4__::func_193(594);
	__LIB_4__::func_193(595);
	__LIB_4__::func_193(596);
	__LIB_4__::func_193(597);
	__LIB_4__::func_193(598);
	__LIB_4__::func_193(599);
	__LIB_4__::func_193(600);
	__LIB_4__::func_193(601);
	__LIB_4__::func_193(602);
	__LIB_4__::func_193(603);
	__LIB_4__::func_193(604);
	__LIB_4__::func_193(605);
	__LIB_4__::func_193(606);
	__LIB_4__::func_193(607);
	__LIB_4__::func_193(608);
	__LIB_4__::func_193(609);
	__LIB_4__::func_193(610);
	__LIB_4__::func_193(611);
	__LIB_4__::func_193(612);
}

void func_425()
{
	Local_349[0 /*6*/].f_1 = iLocal_262;
	Local_349[0 /*6*/].f_2 = { 1409.619f, 306.3446f, 87.80224f };
	Local_349[0 /*6*/].f_5 = -102.48f;
	Local_349[1 /*6*/].f_1 = iLocal_262;
	Local_349[1 /*6*/].f_2 = { 1411.51f, 297.13f, 87.99514f };
	Local_349[1 /*6*/].f_5 = 50.9f;
	Local_349[2 /*6*/].f_1 = iLocal_262;
	Local_349[2 /*6*/].f_2 = { 1397.438f, 302.1619f, 87.61422f };
	Local_349[2 /*6*/].f_5 = 12.02f;
	Local_349[3 /*6*/].f_1 = iLocal_262;
	Local_349[3 /*6*/].f_2 = { 1402.968f, 299.0911f, 87.78228f };
	Local_349[3 /*6*/].f_5 = 29.63f;
	Local_374[0 /*6*/].f_1 = iLocal_263;
	Local_374[0 /*6*/].f_2 = { 1378.411f, 342.3593f, 87.14061f };
	Local_374[0 /*6*/].f_5 = -47.89f;
	Local_374[1 /*6*/].f_1 = iLocal_264;
	Local_374[1 /*6*/].f_2 = { 1379.257f, 334.5888f, 87.15918f };
	Local_374[1 /*6*/].f_5 = 50.3f;
	Local_374[2 /*6*/].f_1 = iLocal_265;
	Local_374[2 /*6*/].f_2 = { 1389.804f, 337.8775f, 86.66559f };
	Local_374[2 /*6*/].f_5 = 165.55f;
}

void func_426()
{
	Local_818.f_3 = Global_35;
	Local_818.f_4 = 21030;
	Local_818.f_7 = 500;
	Local_818.f_8 = 4;
	Local_818.f_13 = 1;
	Local_818.f_17 = 3;
	Local_818.f_18 = 2;
	Local_818.f_19 = 3;
	Local_818.f_21 = 3;
	Local_793.f_4 = 21030;
	Local_793.f_7 = 500;
	Local_793.f_8 = 3;
	Local_793.f_13 = 1;
	Local_793.f_17 = 3;
	Local_793.f_18 = 2;
	Local_793.f_19 = 3;
	Local_793.f_21 = 3;
	vLocal_843.f_7 = 500;
	vLocal_843.f_8 = 3;
	vLocal_843.f_13 = 1;
	vLocal_843.f_17 = 3;
	vLocal_843.f_18 = 2;
	vLocal_843.f_19 = 3;
	vLocal_843.f_21 = 3;
	Local_429[0 /*65*/].f_2 = { 1421.76f, 286.7921f, 88.3822f };
	Local_429[0 /*65*/].f_8 = 113.358f;
	Local_429[0 /*65*/].f_5 = { 1432.814f, 326.842f, 87.7227f };
	Local_429[0 /*65*/].f_9 = 91.748f;
	Local_429[0 /*65*/].f_10 = 0;
	Local_429[0 /*65*/].f_11 = 0;
	Local_429[0 /*65*/].f_1 = joaat("A_M_M_EMRFARMHAND_01");
	Local_429[0 /*65*/].f_19 = "EMR_Father";
	Local_429[0 /*65*/].f_12 = "RKTTY_4DADRCT";
	if (__LIB_0__::func_181())
	{
		Local_429[0 /*65*/].f_13 = "RKTTY_4DADILOJ";
	}
	else
	{
		Local_429[0 /*65*/].f_13 = "RKTTY_4DADILO";
	}
	Local_429[0 /*65*/].f_14 = "RKTTY_4DADATK";
	Local_429[0 /*65*/].f_15 = "RKTTY_4DADLOC";
	Local_429[0 /*65*/].f_16 = "RKTTY_4DADKILL1";
	Local_429[0 /*65*/].f_17 = "RKTTY_4DADKILL2";
	Local_429[0 /*65*/].f_18 = "RKTTY_4DADRESP";
	Local_429[0 /*65*/].f_24 = 1;
	Local_429[1 /*65*/].f_2 = { 1395.959f, 308.4945f, 87.3513f };
	Local_429[1 /*65*/].f_8 = 200.9566f;
	Local_429[1 /*65*/].f_5 = { 1379.425f, 314.6658f, 86.9817f };
	Local_429[1 /*65*/].f_9 = 344.8311f;
	Local_429[1 /*65*/].f_10 = 0;
	Local_429[1 /*65*/].f_11 = 0;
	Local_429[1 /*65*/].f_1 = joaat("A_M_M_EMRFARMHAND_01");
	Local_429[1 /*65*/].f_19 = "RKTTY_Farmhand";
	Local_429[1 /*65*/].f_12 = "RKTTY_4FH2RCT";
	if (__LIB_0__::func_181())
	{
		Local_429[1 /*65*/].f_13 = "RKTTY_4FH2ILOJ";
	}
	else
	{
		Local_429[1 /*65*/].f_13 = "RKTTY_4FH2ILO";
	}
	Local_429[1 /*65*/].f_14 = "RKTTY_4FH2ATK";
	Local_429[1 /*65*/].f_15 = "RKTTY_4FH2LOC";
	Local_429[1 /*65*/].f_16 = "RKTTY_4FH2KILL1";
	Local_429[1 /*65*/].f_17 = "RKTTY_4FH2KILL2";
	Local_429[1 /*65*/].f_18 = "";
	Local_429[1 /*65*/].f_24 = 1;
	Local_429[2 /*65*/].f_2 = { 1431.73f, 341.2822f, 87.78255f };
	Local_429[2 /*65*/].f_8 = 110.761f;
	Local_429[2 /*65*/].f_5 = { 1449.756f, 360.774f, 87.78525f };
	Local_429[2 /*65*/].f_9 = 357.6854f;
	Local_429[2 /*65*/].f_10 = 0;
	Local_429[2 /*65*/].f_11 = 0;
	Local_429[2 /*65*/].f_1 = joaat("A_M_M_EMRFARMHAND_01");
	Local_429[2 /*65*/].f_24 = 0;
}

void func_427()
{
	Local_18[0 /*18*/].f_1 = "script@rcm@ktty3@ig@s4_ig1_liontrapped@s4_ig1_liontrapped";
	sLocal_127[0] = "pl_S4_IG1_Enter01";
	sLocal_127[1] = "pl_S4_IG1_Idles";
	sLocal_127[2] = "pl_S4_IG1_You_See_Its_Teeth";
	sLocal_127[3] = "pl_S4_IG1_You_See_Its_Eyes";
	sLocal_127[4] = "pl_S4_IG1_What_Are_We";
	sLocal_127[5] = "pl_S4_IG1_Hold_Your_Side";
	sLocal_127[6] = "pl_S4_IG1_Hold_Tight";
	sLocal_127[7] = "pl_S4_IG1_React01";
	sLocal_127[8] = "pl_S4_IG1_Exit";
	sLocal_127[9] = "pl_S4_IG1_Exit_Quick";
	Local_18[0 /*18*/].f_16 = sLocal_127[1];
	Local_18[1 /*18*/].f_1 = "script@rcm@ktty3@ig@s4_ig2_enterbarn@s4_ig2_enterbarn";
	sLocal_138[0] = "pl_S4_IG2_whats_the_ruckus";
	sLocal_138[1] = "pl_S4_IG2_Open_Door";
	sLocal_138[2] = "pl_S4_IG2_Arthur_Entering01";
	sLocal_138[3] = "pl_S4_IG2_Enter01";
	sLocal_138[4] = "pl_S4_IG2_Opening_Door";
	sLocal_138[5] = "pl_S4_IG2_Close_Door";
	sLocal_138[6] = "pl_S4_IG2_Exit01";
	sLocal_138[7] = "pl_S4_IG2_Exit_Quick";
	Local_18[1 /*18*/].f_16 = sLocal_138[0];
	Local_18[2 /*18*/].f_1 = "script@rcm@ktty3@ig@s4_ig3_mauling@s4_ig3_mauling";
	sLocal_147[0] = "pl_S4_IG3_React_FT01";
	sLocal_147[1] = "pl_S4_IG3_React_LT01";
	sLocal_147[2] = "pl_S4_IG3_React_RT01";
	sLocal_147[3] = "pl_S4_IG3_React_BK_LT01";
	sLocal_147[4] = "pl_S4_IG3_React_BK_RT01";
	Local_18[2 /*18*/].f_16 = sLocal_147[2];
	Local_18[3 /*18*/].f_1 = "script@rcm@ktty3@ig@s4_ig4_exitbarn@s4_ig4_exitbarn";
	sLocal_153[1] = "pl_S4_IG4_Idle01";
	sLocal_153[0] = "pl_S4_IG4_Look_Whatcha_Done";
	Local_18[3 /*18*/].f_16 = sLocal_153[1];
	Local_18[4 /*18*/].f_1 = "script@rcm@ktty3@ig@s4_ig5_lionattack@s4_ig5_lionattack";
	sLocal_156[0] = "pl_Lion_Attack_Death";
	Local_18[4 /*18*/].f_16 = sLocal_156[0];
	Local_18[5 /*18*/].f_1 = "mech_skin@mangy_lion";
	Local_18[5 /*18*/].f_16 = "PBL_ALL";
}

void func_434()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Local_191[iVar0 /*2*/].f_1 = 0;
		iVar0++;
	}
	Local_191[0 /*2*/] = "RKTTY_4ANGER";
	Local_191[2 /*2*/] = "RKTTY_4ASK";
	Local_191[6 /*2*/] = "RKTTY_4COMEB";
	if (__LIB_0__::func_113())
	{
		Local_191[1 /*2*/] = "RKTTY_S4_IG4";
		Local_191[3 /*2*/] = "RKTTY_CALL";
	}
	else
	{
		Local_191[1 /*2*/] = "RKTTY_S4_IG4J";
		Local_191[3 /*2*/] = "RKTTY_CALLJ";
	}
	Local_191[4 /*2*/] = "RKTTY_NODOG";
	Local_191[5 /*2*/] = "RKTTY_ROAR";
	Local_191[7 /*2*/] = "RKTTY_4HANG";
}

void func_435()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 11)
	{
		Local_212[iVar0 /*2*/].f_1 = 0;
		iVar0++;
	}
	Local_212[2 /*2*/] = "KTTY4_OBJ_01";
	Local_212[0 /*2*/] = "KTTY4_OBJ_02";
	Local_212[6 /*2*/] = "KTTY4_OBJ_02";
	Local_212[3 /*2*/] = "KTTY4_OBJ_06";
	Local_212[4 /*2*/] = "KTTY4_OBJ_05";
	Local_212[9 /*2*/] = "KTTY4_OBJ_07";
	Local_212[5 /*2*/] = "KTTY4_OBJ_08";
	Local_212[10 /*2*/] = "KTTY4_OBJ_09";
	Local_212[8 /*2*/] = "KTTY4_O_RR";
}

int func_450(int iParam0)
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
		iVar2 = __LIB_0__::func_624(iParam0);
		if (__LIB_0__::func_5(iVar2))
		{
			iVar0 = Global_1347702[iVar2 /*49*/].f_15;
		}
		else if (iParam0 == joaat("CABR01"))
		{
			iVar0 = func_517(0, 10, 11, joaat("CABR01"));
		}
	}
	return iVar0;
}

int func_462(int iParam0, int iParam1)
{
	var uVar0;
	return func_936(&uVar0, iParam0, iParam1);
}

bool func_467(int iParam0, char* sParam1, bool bParam2)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_18[iParam0 /*18*/]))
	{
		if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_18[iParam0 /*18*/], sParam1))
		{
			if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_18[iParam0 /*18*/], sParam1))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_18[iParam0 /*18*/], sParam1);
			}
		}
		else
		{
			ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_18[iParam0 /*18*/], sParam1, bParam2);
			return true;
		}
	}
	return false;
}

int func_517(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	iVar3 = iParam0;
	iVar4 = iParam1;
	if (Global_1572887.f_12 == -1)
	{
		switch (iParam2)
		{
			case 1:
				iVar1 = 1;
				iVar2 = 100;
				iParam3 = MISC::GET_HASH_KEY(&(Global_1835011[iParam0 /*74*/].f_8));
				break;
			case 2:
				iVar1 = 101;
				iVar2 = 170;
				break;
			case 3:
				iVar1 = 171;
				iVar2 = 190;
				break;
			case 4:
				iVar1 = 191;
				iVar2 = 230;
				break;
			case 5:
				iVar1 = 231;
				iVar2 = 260;
				break;
			case 6:
				iVar1 = 261;
				iVar2 = 290;
				break;
			case 7:
				iVar1 = 291;
				iVar2 = 370;
				break;
			case 8:
				iVar1 = 371;
				iVar2 = 570;
				iParam3 = MISC::GET_HASH_KEY(&(Global_1347702[iParam0 /*49*/].f_3));
				break;
			case 9:
				iVar1 = 571;
				iVar2 = 650;
				break;
			case 11:
				iVar1 = 651;
				iVar2 = 750;
				break;
			case 10:
				return -1;
			case 12:
				return -1;
			default:
				return -1;
		}
	}
	else
	{
		switch (iParam2)
		{
			case 1:
				iVar1 = 1;
				iVar2 = 200;
				break;
			case 2:
				iVar1 = 201;
				iVar2 = 15700;
				break;
			case 4:
				iVar1 = 15701;
				iVar2 = 16200;
				break;
			case 12:
				iVar1 = 16201;
				iVar2 = 19200;
				break;
			case 10:
				iVar1 = 19201;
				iVar2 = 20000;
				break;
			case 8:
				return -1;
			case 7:
				return -1;
			case 6:
				return -1;
			default:
				return -1;
		}
	}
	if (iVar2 >= __LIB_0__::func_388())
	{
		iVar2 = __LIB_0__::func_388();
	}
	iVar5 = __LIB_0__::func_389(iVar3, iVar4, iParam2);
	if (Global_1572887.f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (__LIB_0__::func_9(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (__LIB_0__::func_9(iVar6) == 0)
			{
				return func_987(iVar3, iVar4, iParam2, iVar0, iParam3);
			}
			iVar0++;
		}
		iVar1 = 751;
		iVar2 = 770;
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (__LIB_0__::func_9(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (__LIB_0__::func_9(iVar6) == 0)
			{
				return func_987(iVar3, iVar4, iParam2, iVar0, iParam3);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (Global_1058888.f_498[iVar0 /*2*/] == iVar5)
			{
				return iVar0;
			}
			iVar0++;
		}
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (Global_1058888.f_498[iVar0 /*2*/] == 0)
			{
				return func_987(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

bool func_585(var uParam0)
{
	bool bVar0;
	bVar0 = true;
	if (!bLocal_777)
	{
		if (__LIB_1__::func_220(69))
		{
			func_1038();
			bLocal_777 = true;
		}
		return false;
	}
	if (!INTERIOR::IS_VALID_INTERIOR(iLocal_270))
	{
		iLocal_270 = INTERIOR::GET_INTERIOR_AT_COORDS(1409.472f, 274.7049f, 88.5357f);
	}
	else
	{
		if (!INTERIOR::IS_INTERIOR_READY(iLocal_270))
		{
			INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_270);
			bVar0 = false;
		}
		if (INTERIOR::IS_INTERIOR_READY(iLocal_270))
		{
			if (!func_205(524288))
			{
				func_207(524288);
			}
			if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iLocal_270, "here_kitty_4_props"))
			{
			}
			else
			{
				INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iLocal_270, "here_kitty_4_props", 0);
				bVar0 = false;
			}
		}
	}
	if (!func_205(4096))
	{
		if (func_635(uParam0, 0))
		{
			func_207(4096);
		}
		bVar0 = false;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_634))
	{
		iLocal_634 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1408.747f, 277.9001f, 88.83556f, 0f, 0f, 15.17301f, 4.926926f, 4.680276f, 12.31615f, "Inside_Barn");
		PATHFIND::_0x19C7567D2F2287D6(iLocal_634, 4);
		bVar0 = false;
	}
	if (__LIB_0__::func_113())
	{
		__LIB_12__::func_875(uParam0, Global_35, "ARTHUR", 0);
	}
	else
	{
		__LIB_12__::func_875(uParam0, Global_35, "JOHN", 0);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_626))
	{
		iLocal_626 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1389.19f, 293.4051f, 89.6226f, 0f, 0f, 12.68608f, 62.34998f, 28.44502f, 8.42735f, "COW_SPAWN");
		bVar0 = false;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_627))
	{
		iLocal_627 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1391.253f, 341.9471f, 89.62263f, 0f, 0f, 12.68607f, 59.09998f, 47.69502f, 8.677351f, "HORSE_SPAWN");
		bVar0 = false;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_628))
	{
		iLocal_628 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1395.695f, 298.457f, 89.62263f, 0f, 0f, 12.93608f, 41.09998f, 13.44502f, 9.177351f, "COW_GRAZE");
		bVar0 = false;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_629))
	{
		iLocal_629 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1394.569f, 337.959f, 89.62263f, 0f, 0f, 15.9278f, 35.84998f, 22.15296f, 9.67735f, "HORSE_GRAZE");
		bVar0 = false;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_633))
	{
		iLocal_633 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1399.512f, 278.4936f, 89.0318f, 0f, 0f, -75.50005f, 28.75f, 40f, 15f, "Barn Restriction");
		bVar0 = false;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_635))
	{
		iLocal_635 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1380.94f, 348.8504f, 86.55114f, 0f, 0f, 15.25f, 33.5f, 34.75f, 26f, "Cutscene Restriction");
		bVar0 = false;
	}
	__LIB_4__::func_389(iLocal_236, 1, 0);
	__LIB_4__::func_389(iLocal_235, 1, 0);
	if (!bVar0)
	{
		return false;
	}
	return true;
}

char* func_587(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
{
	switch (iParam0)
	{
		case 1:
			return MISC::_CREATE_VAR_STRING(2, sParam1, sParam4);
		case 2:
			return MISC::_CREATE_VAR_STRING(2, sParam1, sParam4, sParam5);
		case 3:
			return MISC::_CREATE_VAR_STRING(10, sParam1, sParam2);
		case 4:
			return MISC::_CREATE_VAR_STRING(42, sParam1, sParam2, sParam3);
			return MISC::_CREATE_VAR_STRING(2, __LIB_0__::func_628(sParam1));
		}
void func_588(int iParam0, char* sParam1, char* sParam2, float fParam3)
{
	int iVar0;
	if (Global_1347702[iParam0 /*49*/].f_12 & 67108864 != 0)
	{
		return;
	}
	iVar0 = __LIB_3__::func_734(iParam0);
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(iVar0, __LIB_3__::func_733(iParam0)))
	{
		return;
	}
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(iVar0, __LIB_3__::func_733(iParam0), MISC::GET_HASH_KEY(sParam1), sParam2, fParam3 >= 0.9f, false, false);
}

int func_591(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = __LIB_0__::func_327(iParam0);
	if (iVar0 >= 0)
	{
		return iVar0;
	}
	if (Global_1898164.f_162 >= 32)
	{
		return -1;
	}
	iVar0 = Global_1898164.f_162;
	__LIB_1__::func_236(iParam0, iVar0);
	Global_1898164.f_162++;
	if (iParam1 < 0 || iParam1 >= Global_1898164.f_162)
	{
		return iVar0;
	}
	func_1043(iVar0, iParam1);
	return iParam1;
}

void func_608(int iParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
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

bool func_610(var uParam0, bool bParam1)
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_331))
	{
		STREAMING::REQUEST_MODEL(iLocal_260, false);
		if (STREAMING::HAS_MODEL_LOADED(iLocal_260))
		{
			iLocal_331 = __LIB_12__::func_885(uParam0, iLocal_260, vLocal_701, -175.67f, 1, 1, 0, 1, 1, 0, 1, 0);
			return false;
		}
		else
		{
			return false;
		}
	}
	else if (!bLocal_774)
	{
		if (__LIB_0__::func_272(iLocal_331, 1))
		{
			__LIB_0__::func_862(iLocal_331, -225203438);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_331, joaat("REL_CIVMALE"));
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_331, false);
			ENTITY::_0x9587913B9E772D29(iLocal_331, 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_331, true);
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_331, false);
			PED::SET_PED_CONFIG_FLAG(iLocal_331, 66, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_331, 186, false);
			__LIB_5__::func_602(iLocal_331, joaat("GROUP_REVOLVER"));
			WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(iLocal_331, false);
			__LIB_13__::func_260(uParam0, iLocal_331);
			bLocal_774 = true;
		}
		return false;
	}
	if (!bLocal_775)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_393[0 /*5*/]))
		{
			STREAMING::REQUEST_MODEL(iLocal_260, false);
			if (STREAMING::HAS_MODEL_LOADED(iLocal_260))
			{
				Local_393[iVar0 /*5*/] = __LIB_12__::func_885(uParam0, iLocal_260, Local_393[iVar0 /*5*/].f_1, Local_393[iVar0 /*5*/].f_4, 1, 1, 0, 1, 1, 0, 1, 0);
				return false;
			}
			else
			{
				return false;
			}
		}
		else if (__LIB_0__::func_272(Local_393[0 /*5*/], 1))
		{
			__LIB_0__::func_862(Local_393[0 /*5*/], 1021886395);
			WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(Local_393[0 /*5*/], false);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_393[0 /*5*/], joaat("REL_CIVMALE"));
			PED::SET_PED_CAN_BE_TARGETTED(Local_393[0 /*5*/], false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_393[0 /*5*/], true);
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_393[0 /*5*/], false);
			PED::SET_PED_CONFIG_FLAG(Local_393[0 /*5*/], 66, true);
			bLocal_775 = true;
		}
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_334[iVar0]))
		{
			iLocal_334[iVar0] = OBJECT::CREATE_OBJECT(iLocal_266, vLocal_728[iVar0 /*3*/], true, true, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(iLocal_334[iVar0], vLocal_735[iVar0 /*3*/], 0, true);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_334[iVar0], true);
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_334[iVar0], false);
			return false;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_337[iVar0]))
		{
			iLocal_337[iVar0] = OBJECT::CREATE_OBJECT(iLocal_266, vLocal_742[iVar0 /*3*/], true, true, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(iLocal_337[iVar0], vLocal_749[iVar0 /*3*/], 0, true);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_337[iVar0], true);
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_337[iVar0], false);
			return false;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_341[iVar0]))
		{
			iLocal_341[iVar0] = OBJECT::CREATE_OBJECT(iLocal_268[iVar0], vLocal_756[iVar0 /*3*/], true, true, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(iLocal_341[iVar0], vLocal_760[iVar0 /*3*/], 2, false);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_341[iVar0], true);
			ENTITY::SET_CAN_CLIMB_ON_ENTITY(iLocal_341[iVar0], false);
			return false;
		}
		iVar0++;
	}
	if (!func_1065(uParam0))
	{
		return false;
	}
	if (bParam1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_345))
		{
			if (iLocal_347 == 0)
			{
				iLocal_347 = ENTITY::_0x6F3068258A499E52(joaat("P_DOOR_EMERALDRANCHBARN01"), 1405.906f, 279.4401f, 90.14625f, 15);
				return false;
			}
			else if (ENTITY::_0x1FF441D7954F8709(iLocal_347))
			{
				iLocal_345 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(iLocal_347));
			}
			else
			{
				return false;
			}
			return false;
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_346))
		{
			if (iLocal_348 == 0)
			{
				iLocal_348 = ENTITY::_0x6F3068258A499E52(joaat("P_DOOR_EMERALDRANCHBARN01"), 1410.334f, 280.662f, 90.07798f, 15);
				return false;
			}
			else if (ENTITY::_0x1FF441D7954F8709(iLocal_348))
			{
				iLocal_346 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(iLocal_348));
			}
			else
			{
				return false;
			}
			return false;
		}
	}
	__LIB_12__::func_875(uParam0, Local_393[0 /*5*/], "EMR_Farmhand1", 0);
	__LIB_12__::func_875(uParam0, iLocal_331, "EMR_Farmhand2", 0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_260);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_261);
	func_395(1);
	return true;
}

void func_611(int iParam0)
{
	if (func_205(iParam0))
	{
		__LIB_1__::func_681(&iLocal_254, iParam0);
	}
}

bool func_612()
{
	int iVar0;
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_331))
	{
		if (__LIB_13__::func_262(iLocal_331, 0, &uLocal_271, &uLocal_299, 0, 0))
		{
			return true;
		}
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_331))
		{
			if (__LIB_13__::func_262(Local_393[0 /*5*/], 0, &uLocal_271, &uLocal_299, 0, 0))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_613(var uParam0)
{
	if (__LIB_0__::func_272(iLocal_331, 1))
	{
		switch (iLocal_17)
		{
			case 0:
				break;
			case 1:
				if (func_205(512))
				{
					if (!__LIB_0__::func_266(iLocal_331, Global_36, 18f, 1, 1))
					{
						iLocal_17 = 2;
					}
				}
				break;
			case 2:
				if (__LIB_0__::func_266(iLocal_331, Global_36, 7f, 1, 1))
				{
					iLocal_17 = 1;
				}
				else if (!__LIB_0__::func_163(iLocal_331, -875674219))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_331, Global_35, -1, -1f, __LIB_3__::func_745(45f), -1f);
					TASK::TASK_LOOK_AT_ENTITY(iLocal_331, Global_35, -1, 0, 51, 0);
				}
				break;
			case 3:
				if (!__LIB_0__::func_163(iLocal_331, 474215631))
				{
					TASK::CLEAR_PED_TASKS(iLocal_331, true, false);
					TASK::TASK_COWER(iLocal_331, -1, 0, 0);
				}
				break;
			case 5:
				if (__LIB_12__::func_876(uParam0, Local_191[0 /*2*/], 0))
				{
					Local_191[0 /*2*/].f_1 = 1;
				}
				break;
			case 4:
				break;
		}
	}
}

void func_615(var uParam0, int iParam1)
{
	switch (Local_429[iParam1 /*65*/].f_11)
	{
		case 0:
			if (iParam1 == 0)
			{
				PED::_0xAAB050DA48B57978(Local_429[iParam1 /*65*/], "Default_Nervous", 0, -1, 4);
			}
			else
			{
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Local_429[iParam1 /*65*/], Local_429[iParam1 /*65*/].f_2, 1f, -1, false, false, true, false);
			}
			if (!Local_429[iParam1 /*65*/].f_24)
			{
				__LIB_2__::func_56(Local_429[iParam1 /*65*/], 1, 1);
			}
			__LIB_2__::func_602(&(Local_429[iParam1 /*65*/].f_25[0 /*17*/]), "KTTY4_ILO_QUESTION", " ", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), Local_429[iParam1 /*65*/], 8, 0, 1);
			Local_429[iParam1 /*65*/].f_11 = 1;
			break;
		case 1:
			if (__LIB_13__::func_262(Local_429[iParam1 /*65*/], 0, &uLocal_300, &iLocal_328, 1, 0))
			{
				TASK::_TASK_SMART_FLEE_STYLE_PED(Local_429[iParam1 /*65*/], Global_35, 2, 0, -1082130432 /* Float: -1f */, -1, 0);
				if (iLocal_328 == 8 || iLocal_328 == 2)
				{
					LAW::_REPORT_CRIME(PLAYER::PLAYER_ID(), joaat("CRIME_THREATEN"), 0, 0, true);
					LAW::_0x10827B5A0AAC56A7(PLAYER::PLAYER_ID(), joaat("CRIME_THREATEN"), Local_429[iParam1 /*65*/]);
					bLocal_773 = true;
				}
				Local_429[iParam1 /*65*/].f_11 = 2;
				return;
			}
			if (Local_429[iParam1 /*65*/].f_24)
			{
				Local_429[iParam1 /*65*/].f_64 = func_1070(&(Local_429[iParam1 /*65*/]), &(Local_429[iParam1 /*65*/].f_43), 8f, &(Local_429[iParam1 /*65*/].f_25), 0f, 3, 0, 0, 3, 0, 2, -1082130432 /* Float: -1f */);
				if (!__LIB_0__::func_27(Local_429[iParam1 /*65*/].f_20, 256))
				{
					if (Local_429[iParam1 /*65*/].f_64 == 0)
					{
						if (__LIB_12__::func_876(uParam0, Local_429[iParam1 /*65*/].f_13, 0))
						{
							__LIB_6__::func_900(Local_429[iParam1 /*65*/].f_12, 1, 0);
							__LIB_1__::func_683(&(Local_429[iParam1 /*65*/].f_20), 256);
							__LIB_1__::func_683(&(Local_429[iParam1 /*65*/].f_20), 2);
						}
					}
				}
				else if (!__LIB_13__::func_273(Local_429[iParam1 /*65*/].f_13))
				{
					if (!func_205(16384))
					{
						if (MAP::DOES_BLIP_EXIST(iLocal_165))
						{
							__LIB_0__::func_325(&iLocal_165);
							iLocal_165 = MAP::_BLIP_ADD_FOR_RADIUS(408396114, vLocal_689, 10f);
							MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_165, "KTTY4_BLIP_02");
							func_207(16384);
						}
						func_207(16384);
					}
				}
			}
			if (__LIB_0__::func_48(Global_35, Local_429[iParam1 /*65*/], 5f, 1))
			{
				Local_793.f_3 = Local_429[iParam1 /*65*/];
				_NAMESPACE29::_0x66F9EB44342BB4C5(Global_35, &Local_793);
				_NAMESPACE29::_0x66F9EB44342BB4C5(Local_429[iParam1 /*65*/], &Local_818);
				if (!__LIB_0__::func_27(Local_429[iParam1 /*65*/].f_20, 2))
				{
					if (Local_429[iParam1 /*65*/].f_24)
					{
						if (__LIB_12__::func_876(uParam0, Local_429[iParam1 /*65*/].f_12, 0))
						{
							__LIB_1__::func_148(&(Local_429[iParam1 /*65*/].f_21));
							__LIB_1__::func_683(&(Local_429[iParam1 /*65*/].f_20), 2);
						}
					}
					else
					{
						__LIB_1__::func_683(&(Local_429[iParam1 /*65*/].f_20), 2);
					}
				}
			}
			break;
		case 2:
			__LIB_2__::func_788(&(Local_429[iParam1 /*65*/]), 1, 0, 1);
			break;
	}
}

void func_616(var uParam0, int iParam1)
{
	switch (Local_429[iParam1 /*65*/].f_11)
	{
		case 0:
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_429[iParam1 /*65*/], Local_429[iParam1 /*65*/].f_5, Local_429[iParam1 /*65*/].f_9, true, false, true);
			if (iParam1 == 0)
			{
				PED::_0x935CF6E42BAF7F4D(Local_429[iParam1 /*65*/]);
				TASK::TASK_COWER(Local_429[iParam1 /*65*/], -1, 0, 0);
			}
			else
			{
				TASK::TASK_COWER(Local_429[iParam1 /*65*/], -1, 0, 0);
			}
			__LIB_2__::func_624(&(Local_429[iParam1 /*65*/].f_25), 1, 1, 1, 0);
			Local_429[iParam1 /*65*/].f_43.f_2 = 0;
			PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), Local_429[iParam1 /*65*/], 8, 0, 1);
			__LIB_10__::func_385(Local_429[iParam1 /*65*/]);
			Local_429[iParam1 /*65*/].f_11 = 1;
			break;
		case 1:
			if (__LIB_13__::func_262(Local_429[iParam1 /*65*/], 0, &uLocal_300, &iLocal_328, 1, 0))
			{
				TASK::_TASK_SMART_FLEE_STYLE_PED(Local_429[iParam1 /*65*/], Global_35, 2, 0, -1082130432 /* Float: -1f */, -1, 0);
				if (iLocal_328 == 8 || iLocal_328 == 2)
				{
					LAW::_REPORT_CRIME(PLAYER::PLAYER_ID(), joaat("CRIME_THREATEN"), 0, 0, true);
					LAW::_0x10827B5A0AAC56A7(PLAYER::PLAYER_ID(), joaat("CRIME_THREATEN"), Local_429[iParam1 /*65*/]);
				}
				Local_429[iParam1 /*65*/].f_11 = 2;
			}
			if (!Local_429[iParam1 /*65*/].f_24)
			{
				TASK::_TASK_SMART_FLEE_STYLE_COORD(Local_429[iParam1 /*65*/], vLocal_692, 3, 0, -1f, -1, 0);
				Local_429[iParam1 /*65*/].f_11 = 2;
				return;
			}
			if (!__LIB_0__::func_27(Local_429[iParam1 /*65*/].f_20, 8))
			{
				if (__LIB_0__::func_48(Global_35, Local_429[iParam1 /*65*/], 7f, 1))
				{
					Local_793.f_3 = Local_429[iParam1 /*65*/];
					_NAMESPACE29::_0x66F9EB44342BB4C5(Global_35, &Local_793);
					_NAMESPACE29::_0x66F9EB44342BB4C5(Local_429[iParam1 /*65*/], &Local_818);
					if (__LIB_12__::func_876(uParam0, Local_429[iParam1 /*65*/].f_14, 0))
					{
						if (iParam1 == 0 || iParam1 == 1)
						{
							__LIB_1__::func_148(&(Local_429[iParam1 /*65*/].f_21));
						}
						__LIB_1__::func_683(&(Local_429[iParam1 /*65*/].f_20), 8);
					}
				}
			}
			else if (!__LIB_0__::func_27(Local_429[iParam1 /*65*/].f_20, 16))
			{
				if (!__LIB_13__::func_273(Local_429[iParam1 /*65*/].f_14))
				{
					if (__LIB_12__::func_876(uParam0, Local_429[iParam1 /*65*/].f_15, 0))
					{
						__LIB_1__::func_683(&(Local_429[iParam1 /*65*/].f_20), 16);
						__LIB_0__::func_37(&(Local_429[iParam1 /*65*/].f_21));
					}
				}
			}
			else if (!__LIB_13__::func_273(Local_429[iParam1 /*65*/].f_15))
			{
				if (!func_205(32768))
				{
					if (MAP::DOES_BLIP_EXIST(iLocal_165))
					{
						__LIB_0__::func_325(&iLocal_165);
						iLocal_165 = MAP::_BLIP_ADD_FOR_RADIUS(408396114, vLocal_692, 10f);
						MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_165, "KTTY4_BLIP_03");
						func_207(32768);
					}
				}
			}
			break;
		case 2:
			__LIB_2__::func_788(&(Local_429[iParam1 /*65*/]), 1, 0, 1);
			break;
	}
}

void func_617(int iParam0)
{
	switch (Local_429[iParam0 /*65*/].f_11)
	{
		case 0:
			break;
		case 1:
			break;
		case 2:
			break;
	}
}

void func_618(var uParam0, int iParam1)
{
	vector3 vVar0;
	var uVar3;
	switch (Local_429[iParam1 /*65*/].f_11)
	{
		case 0:
			__LIB_1__::func_148(&uLocal_656);
			__LIB_1__::func_402(&uLocal_300, 1);
			if (iParam1 == 0 || iParam1 == 1)
			{
				if (PED::_GET_PED_BLACKBOARD_FLOAT(Local_429[iParam1 /*65*/], "Cautious") != 1f)
				{
					PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), Local_429[iParam1 /*65*/], 8, 0, 1);
					__LIB_10__::func_385(Local_429[iParam1 /*65*/]);
					PED::_SET_PED_BLACKBOARD_FLOAT(Local_429[iParam1 /*65*/], "Cautious", 1f, -1);
				}
				if (!PED::IS_PED_RAGDOLL(iLocal_329))
				{
					vVar0 = { ENTITY::GET_ENTITY_COORDS(iLocal_329, false, false) };
					vVar0.f_2 = (vVar0.z + 3f);
					if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &uVar3, false))
					{
						vVar0.f_2 = uVar3;
						if (iParam1 == 0)
						{
							vVar0 = { 1393.83f, 342.9877f, 86.604f };
						}
						PED::_SET_PED_CROUCH_MOVEMENT(Local_429[iParam1 /*65*/], false, 0, false);
						TASK::TASK_LOOK_AT_ENTITY(Local_429[iParam1 /*65*/], iLocal_329, -1, 0, 51, 0);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_429[iParam1 /*65*/], vVar0, 1.5f, 20000, 0.25f, 0, __LIB_0__::func_152(ENTITY::GET_ENTITY_COORDS(Local_429[iParam1 /*65*/], true, false), ENTITY::GET_ENTITY_COORDS(iLocal_329, false, false), 1));
						Local_429[iParam1 /*65*/].f_11 = 1;
					}
				}
			}
			break;
		case 1:
			if (__LIB_0__::func_264(&uLocal_656) > 3f)
			{
				if (__LIB_13__::func_262(Local_429[iParam1 /*65*/], 0, &uLocal_300, &iLocal_328, 1, 0))
				{
					PED::_0xEEED8FAFEC331A70(Local_429[iParam1 /*65*/], Global_36, 1);
					TASK::_TASK_SMART_FLEE_STYLE_PED(Local_429[iParam1 /*65*/], Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
					Local_429[iParam1 /*65*/].f_11 = 2;
					return;
				}
			}
			if (bLocal_783)
			{
				if (iParam1 == 1)
				{
					if (__LIB_0__::func_264(&(Local_429[iParam1 /*65*/].f_21)) > 8f)
					{
						TASK::TASK_WANDER_STANDARD(Local_429[iParam1 /*65*/], 40000f, 0);
						Local_429[iParam1 /*65*/].f_11 = 2;
					}
					return;
				}
				else
				{
					if (__LIB_0__::func_264(&(Local_429[iParam1 /*65*/].f_21)) > 13f)
					{
						TASK::TASK_WANDER_STANDARD(Local_429[iParam1 /*65*/], 40000f, 0);
						Local_429[iParam1 /*65*/].f_11 = 2;
					}
					return;
				}
			}
			if (iParam1 == 1)
			{
				if (!__LIB_0__::func_163(Local_429[iParam1 /*65*/], 1464580341))
				{
					if (__LIB_0__::func_163(Local_429[iParam1 /*65*/], 713668775))
					{
						if (__LIB_0__::func_48(Local_429[iParam1 /*65*/], iLocal_329, 5f, 0))
						{
							TASK::TASK_TURN_PED_TO_FACE_COORD(Local_429[iParam1 /*65*/], ENTITY::GET_ENTITY_COORDS(iLocal_329, false, false), -1);
						}
					}
				}
				if (__LIB_0__::func_163(Local_429[iParam1 /*65*/], 1464580341))
				{
					vLocal_843 = { ENTITY::GET_ENTITY_COORDS(iLocal_329, false, false) };
					_NAMESPACE29::_0x66F9EB44342BB4C5(Local_429[iParam1 /*65*/], &vLocal_843);
				}
				else if (__LIB_0__::func_48(Local_429[iParam1 /*65*/], iLocal_329, 20f, 0))
				{
					_NAMESPACE29::_0x66F9EB44342BB4C5(Local_429[iParam1 /*65*/], &Local_818);
				}
				if (!__LIB_0__::func_27(Local_429[iParam1 /*65*/].f_20, 32))
				{
					if (__LIB_0__::func_48(Local_429[iParam1 /*65*/], Global_35, 12f, 1))
					{
						if (__LIB_12__::func_876(uParam0, Local_429[iParam1 /*65*/].f_16, 0))
						{
							__LIB_1__::func_683(&(Local_429[iParam1 /*65*/].f_20), 32);
							__LIB_1__::func_148(&(Local_429[iParam1 /*65*/].f_21));
						}
					}
				}
				else if (!__LIB_0__::func_27(Local_429[iParam1 /*65*/].f_20, 64))
				{
					if (__LIB_0__::func_27(Local_429[0 /*65*/].f_20, 64))
					{
						if (__LIB_0__::func_264(&(Local_429[iParam1 /*65*/].f_21)) > 10f)
						{
							if (!__LIB_6__::func_904())
							{
								if (__LIB_0__::func_48(Local_429[iParam1 /*65*/], Global_35, 12f, 1))
								{
									if (__LIB_12__::func_876(uParam0, Local_429[iParam1 /*65*/].f_17, 0))
									{
										__LIB_0__::func_37(&(Local_429[iParam1 /*65*/].f_21));
										__LIB_1__::func_148(&(Local_429[0 /*65*/].f_21));
										__LIB_1__::func_683(&(Local_429[iParam1 /*65*/].f_20), 64);
									}
								}
							}
						}
					}
				}
			}
			else if (iParam1 == 0)
			{
				if (!__LIB_0__::func_163(Local_429[iParam1 /*65*/], 1464580341))
				{
					if (!__LIB_0__::func_163(Local_429[iParam1 /*65*/], 713668775))
					{
						TASK::TASK_TURN_PED_TO_FACE_COORD(Local_429[iParam1 /*65*/], ENTITY::GET_ENTITY_COORDS(iLocal_329, false, false), -1);
					}
				}
				if (__LIB_0__::func_163(Local_429[iParam1 /*65*/], 1464580341))
				{
					vLocal_843 = { ENTITY::GET_ENTITY_COORDS(iLocal_329, false, false) };
					_NAMESPACE29::_0x66F9EB44342BB4C5(Local_429[iParam1 /*65*/], &vLocal_843);
				}
				else if (__LIB_0__::func_48(Local_429[iParam1 /*65*/], iLocal_329, 20f, 0))
				{
					_NAMESPACE29::_0x66F9EB44342BB4C5(Local_429[iParam1 /*65*/], &Local_818);
				}
				if (!__LIB_0__::func_27(Local_429[iParam1 /*65*/].f_20, 32))
				{
					if (__LIB_0__::func_27(Local_429[1 /*65*/].f_20, 32) && !__LIB_6__::func_904())
					{
						if (__LIB_0__::func_48(Local_429[iParam1 /*65*/], Global_35, 12f, 1))
						{
							if (__LIB_12__::func_876(uParam0, Local_429[iParam1 /*65*/].f_16, 0))
							{
								__LIB_1__::func_683(&(Local_429[iParam1 /*65*/].f_20), 32);
								__LIB_1__::func_148(&(Local_429[iParam1 /*65*/].f_21));
							}
						}
					}
				}
				else if (!__LIB_0__::func_27(Local_429[iParam1 /*65*/].f_20, 64))
				{
					if (__LIB_0__::func_264(&(Local_429[iParam1 /*65*/].f_21)) > 10f)
					{
						if (!__LIB_6__::func_904())
						{
							if (__LIB_0__::func_48(Local_429[iParam1 /*65*/], Global_35, 12f, 1))
							{
								if (__LIB_12__::func_876(uParam0, Local_429[iParam1 /*65*/].f_17, 0))
								{
									__LIB_1__::func_148(&(Local_429[iParam1 /*65*/].f_21));
									__LIB_1__::func_148(&(Local_429[1 /*65*/].f_21));
									__LIB_1__::func_683(&(Local_429[iParam1 /*65*/].f_20), 64);
								}
							}
						}
					}
				}
				else if (!__LIB_0__::func_27(Local_429[iParam1 /*65*/].f_20, 128))
				{
					if (__LIB_0__::func_27(Local_429[1 /*65*/].f_20, 64))
					{
						if (!__LIB_6__::func_904())
						{
							if (__LIB_0__::func_48(Local_429[iParam1 /*65*/], Global_35, 12f, 1))
							{
								if (__LIB_12__::func_876(uParam0, Local_429[iParam1 /*65*/].f_18, 0))
								{
									__LIB_1__::func_148(&(Local_429[iParam1 /*65*/].f_21));
									__LIB_1__::func_148(&(Local_429[1 /*65*/].f_21));
									bLocal_783 = true;
									__LIB_1__::func_683(&(Local_429[iParam1 /*65*/].f_20), 128);
								}
							}
						}
					}
				}
			}
			break;
		case 2:
			TASK::TASK_CLEAR_LOOK_AT(Local_429[iParam1 /*65*/]);
			PED::SET_PED_CONFIG_FLAG(Local_429[iParam1 /*65*/], 331, false);
			__LIB_2__::func_56(Local_429[iParam1 /*65*/], 1, 1);
			PED::_0x411189E51B8020BA(Local_429[iParam1 /*65*/], "Cautious");
			__LIB_2__::func_788(&(Local_429[iParam1 /*65*/]), 1, 0, 1);
			break;
	}
}

bool func_619(var uParam0)
{
	int iVar0;
	if (((func_205(16) || bLocal_773) || (ENTITY::DOES_ENTITY_EXIST(iLocal_331) && ENTITY::IS_ENTITY_DEAD(iLocal_331))) || (ENTITY::DOES_ENTITY_EXIST(Local_393[0 /*5*/]) && ENTITY::IS_ENTITY_DEAD(Local_393[0 /*5*/])))
	{
		__LIB_0__::func_7(&(Global_1347702[uParam0->f_174 /*49*/].f_12), 8192);
		return true;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		if (__LIB_0__::func_48(__LIB_0__::func_17(PED::GET_VEHICLE_PED_IS_IN(Global_35, false)), iLocal_331, 7f, 0))
		{
			__LIB_0__::func_7(&(Global_1347702[uParam0->f_174 /*49*/].f_12), 8192);
			bLocal_789 = true;
			return true;
		}
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_429[iVar0 /*65*/]) && ENTITY::IS_ENTITY_DEAD(Local_429[iVar0 /*65*/]))
		{
			__LIB_0__::func_7(&(Global_1347702[uParam0->f_174 /*49*/].f_12), 8192);
			return true;
		}
		iVar0++;
	}
	if (__LIB_1__::func_394(PLAYER::GET_PLAYER_INDEX(), 1, 0, 1) && __LIB_0__::func_266(Global_35, vLocal_704, 20f, 1, 1))
	{
		__LIB_0__::func_7(&(Global_1347702[uParam0->f_174 /*49*/].f_12), 8192);
		return true;
	}
	return false;
}

void func_624()
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if ((!ENTITY::IS_ENTITY_DEAD(iVar0) && __LIB_0__::func_266(iVar0, vLocal_698, 300f, 0, 1)) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar0, true))
	{
		func_1078(iVar0, 1418.882f, 307.8845f, 87.59f, 194.95f, 2, 1073741824 /* Float: 2f */);
	}
}

void func_625(bool bParam0)
{
	if (!MAP::DOES_BLIP_EXIST(iLocal_165))
	{
		if (bParam0)
		{
			iLocal_165 = MAP::_BLIP_ADD_FOR_RADIUS(227551412, 1404.787f, 324.3038f, 87.11316f, 60f);
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_165, "KTTY4_BLIP_01");
		}
		else
		{
			iLocal_165 = MAP::_BLIP_ADD_FOR_RADIUS(227551412, vLocal_686, 85f);
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_165, "KTTY4_BLIP_01");
		}
	}
}

void func_626()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_340))
	{
		iLocal_340 = OBJECT::CREATE_OBJECT(iLocal_267, 1404.91f, 282.09f, 88.21f, true, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(iLocal_340, -4.9f, -3f, 0f, 0, true);
	}
}

bool func_627()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_343))
	{
		iLocal_343 = func_1079(joaat("P_EMRFENCE02AX"), 1390.158f, 306.5841f, 88.39619f);
	}
	else
	{
		OBJECT::_0xAAACF33CBF9B990A(iLocal_343, 1);
		OBJECT::_0xAAACF33CBF9B990A(iLocal_343, 2);
		OBJECT::_0xAAACF33CBF9B990A(iLocal_343, 3);
		OBJECT::_0xAAACF33CBF9B990A(iLocal_343, 4);
		OBJECT::_0xAAACF33CBF9B990A(iLocal_343, 5);
		OBJECT::_0xAAACF33CBF9B990A(iLocal_343, 6);
		OBJECT::_0xAAACF33CBF9B990A(iLocal_343, 7);
		OBJECT::_0xAAACF33CBF9B990A(iLocal_343, 8);
		OBJECT::_0xAAACF33CBF9B990A(iLocal_343, 9);
		OBJECT::_0xAAACF33CBF9B990A(iLocal_343, 10);
		OBJECT::_0xAAACF33CBF9B990A(iLocal_343, 11);
		OBJECT::_0xAAACF33CBF9B990A(iLocal_343, 14);
		OBJECT::_0xAAACF33CBF9B990A(iLocal_343, 15);
		OBJECT::_0xAAACF33CBF9B990A(iLocal_343, 16);
		OBJECT::_0xAAACF33CBF9B990A(iLocal_343, 17);
		OBJECT::_0xAAACF33CBF9B990A(iLocal_343, 18);
		OBJECT::_0xAAACF33CBF9B990A(iLocal_343, 19);
		OBJECT::_0xAAACF33CBF9B990A(iLocal_343, 20);
		OBJECT::_0xAAACF33CBF9B990A(iLocal_343, 21);
		OBJECT::_0xAAACF33CBF9B990A(iLocal_343, 22);
		return true;
	}
	return false;
}

bool func_628(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_393[iVar0 /*5*/]))
		{
			STREAMING::REQUEST_MODEL(iLocal_261, false);
			if (STREAMING::HAS_MODEL_LOADED(iLocal_261))
			{
				Local_393[iVar0 /*5*/] = __LIB_12__::func_885(uParam0, iLocal_261, Local_393[iVar0 /*5*/].f_1, Local_393[iVar0 /*5*/].f_4, 1, 1, 0, 1, 1, 1, 1, 0);
				if (!ENTITY::IS_ENTITY_DEAD(Local_393[iVar0 /*5*/]))
				{
				}
			}
			else
			{
				return false;
			}
		}
		else
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 == 7)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_393[iVar0 /*5*/]) && iVar0 != 0)
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_393[iVar0 /*5*/], joaat("REL_CIVMALE"));
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_393[iVar0 /*5*/], true);
				TASK::TASK_COWER(Local_393[iVar0 /*5*/], -1, 0, 0);
			}
			iVar0++;
		}
		return true;
	}
	return false;
}

void func_629()
{
	if (!func_205(64))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_349[0 /*6*/]))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_349[0 /*6*/], 1393.416f, 295.0869f, 87.28906f, 3.4497f, true, false, true);
			PED::SET_PED_CONFIG_FLAG(Local_349[0 /*6*/], 186, false);
			TASK::TASK_PLAY_ANIM(Local_349[0 /*6*/], sLocal_641, "dead_r", 8f, -8f, -1, 131072, 0f, false, 0, false, 0, false);
			PED::APPLY_PED_DAMAGE_PACK(Local_349[0 /*6*/], "PD_RC_Here_Kitty4_Cow_Mauled_By_Lion", 0f, 1f);
			__LIB_3__::func_459(Local_349[0 /*6*/], 0);
			PED::_0x6569F31A01B4C097(Local_349[0 /*6*/], 4, 0);
			func_207(64);
		}
	}
}

void func_630()
{
	if (!func_205(256))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_374[0 /*6*/]))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_374[0 /*6*/], vLocal_725, fLocal_767, true, false, true);
			PED::SET_PED_CONFIG_FLAG(Local_374[0 /*6*/], 186, false);
			TASK::TASK_PLAY_ANIM(Local_374[0 /*6*/], sLocal_640, "dead_left", 8f, -8f, -1, 131072, 0f, false, 0, false, 0, false);
			PED::APPLY_PED_DAMAGE_PACK(Local_374[0 /*6*/], "PD_RC_Here_Kitty4_Horse_Mauled_by_Lion", 0f, 1f);
			__LIB_3__::func_459(Local_374[0 /*6*/], 0);
			PED::_0x6569F31A01B4C097(Local_374[0 /*6*/], 4, 0);
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_374[1 /*6*/]))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_374[1 /*6*/], 1392.729f, 324.551f, 86.8908f, 8.7428f, true, false, true);
			PED::SET_PED_CONFIG_FLAG(Local_374[1 /*6*/], 186, false);
			TASK::TASK_PLAY_ANIM(Local_374[1 /*6*/], sLocal_640, "dead_right", 8f, -8f, -1, 131072, 0f, false, 0, false, 0, false);
			PED::APPLY_PED_DAMAGE_PACK(Local_374[1 /*6*/], "PD_RC_Here_Kitty4_Horse_Mauled_by_Lion", 0f, 1f);
			__LIB_3__::func_459(Local_374[1 /*6*/], 0);
			PED::_0x6569F31A01B4C097(Local_374[1 /*6*/], 4, 0);
		}
		func_207(256);
	}
}

void func_631()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Local_429[iVar0 /*65*/].f_10 != 2)
		{
			Local_429[iVar0 /*65*/].f_10 = 1;
			Local_429[iVar0 /*65*/].f_11 = 0;
		}
		iVar0++;
	}
}

void func_634(var uParam0, int iParam1)
{
	iLocal_160 = iParam1;
	switch (iLocal_160)
	{
		case 0:
			__LIB_12__::func_966(uParam0, 0);
			StringCopy(&(uParam0->f_2575), "RKTTY_S4_MCS1", 24);
			__LIB_12__::func_779(uParam0, vLocal_722);
			__LIB_12__::func_957(uParam0, iLocal_329, "A_C_LionMangy_01", 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_374[0 /*6*/], "Horse_01", 0, 0, 0);
			__LIB_12__::func_957(uParam0, Global_35, 0, 0, 0, 0);
			__LIB_12__::func_977(&(uParam0->f_206), 178097);
			__LIB_12__::func_947(&(uParam0->f_206), 178171);
			__LIB_12__::func_948(&(uParam0->f_206), 178341);
			__LIB_13__::func_231(&(uParam0->f_206), iLocal_635, 0, 0, 0, 0);
			__LIB_12__::func_901(&(uParam0->f_206), 1408.631f, 333.5542f, 87.2249f, 284.0338f, 0);
			__LIB_0__::func_7(&(uParam0->f_172), 16);
			break;
		case 1:
			__LIB_12__::func_966(uParam0, 0);
			StringCopy(&(uParam0->f_2575), "", 24);
			__LIB_0__::func_8(&(uParam0->f_172), 16);
			break;
	}
}

bool func_635(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (bParam1)
		{
			if (iVar1 == 0 || iVar1 == 1)
			{
				if (ENTITY::IS_ENTITY_DEAD(Local_429[iVar1 /*65*/]))
				{
					Local_429[iVar1 /*65*/] = __LIB_12__::func_885(uParam0, Local_429[iVar1 /*65*/].f_1, func_1091(iVar1), func_1092(iVar1), 1, 1, 0, 1, 1, 1, 1, 0);
				}
				else
				{
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_429[iVar1 /*65*/], func_1091(iVar1), func_1092(iVar1), true, false, true);
					PED::_SET_PED_CROUCH_MOVEMENT(Local_429[iVar1 /*65*/], false, 0, false);
					Local_429[iVar1 /*65*/].f_10 = 2;
					Local_429[iVar1 /*65*/].f_11 = 0;
					__LIB_1__::func_681(&(Local_429[iVar1 /*65*/].f_20), 1);
					iVar0++;
				}
			}
		}
		else if (ENTITY::IS_ENTITY_DEAD(Local_429[iVar1 /*65*/]))
		{
			Local_429[iVar1 /*65*/] = __LIB_12__::func_885(uParam0, Local_429[iVar1 /*65*/].f_1, Local_429[iVar1 /*65*/].f_2, Local_429[iVar1 /*65*/].f_8, 1, 1, 0, 1, 1, 1, 1, 0);
		}
		else
		{
			iVar0++;
		}
		iVar1++;
	}
	if (bParam1)
	{
		if (iVar0 == (3 - 1))
		{
			return true;
		}
	}
	else if (iVar0 == 3)
	{
		return true;
	}
	return false;
}

void func_637()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_349[iVar0 /*6*/]))
		{
			if (!PED::IS_PED_FLEEING(Local_349[iVar0 /*6*/]))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_349[iVar0 /*6*/], false, true);
				TASK::_TASK_SMART_FLEE_STYLE_PED(Local_349[iVar0 /*6*/], iLocal_329, 4, 131072, 1000f, -1, 0);
			}
		}
		iVar0++;
	}
}

void func_638()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_374[iVar0 /*6*/]))
		{
			if (!PED::IS_PED_FLEEING(Local_374[iVar0 /*6*/]))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_374[iVar0 /*6*/], false, true);
				TASK::_TASK_SMART_FLEE_STYLE_PED(Local_374[iVar0 /*6*/], iLocal_329, 4, 131072, 1000f, -1, 0);
			}
		}
		iVar0++;
	}
}

int func_640(var uParam0)
{
	if (func_205(67108864))
	{
		return 1;
	}
	else if (func_713(uParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_330))
		{
			PED::SET_PED_RESET_FLAG(iLocal_330, 170, true);
			if (__LIB_4__::func_61(iLocal_330, sLocal_642, 1, 1061360239 /* Float: 0.762f */, 1053609165 /* Float: 0.4f */, 0, 0, 1))
			{
				func_207(67108864);
				return 1;
			}
		}
	}
	return 0;
}

void func_643(int iParam0)
{
	Local_429[iParam0 /*65*/].f_10 = 3;
	Local_429[iParam0 /*65*/].f_11 = 0;
}

void func_668(var uParam0)
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
		func_1120(&(uParam0->f_404), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_12__::func_706(uParam0, 0f, 0f, 0f);
		func_1122(uParam0);
		func_1123(uParam0);
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

bool func_713(var uParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(iLocal_330))
	{
		iLocal_330 = __LIB_12__::func_885(uParam0, iLocal_259, vLocal_713, 0, 1, 1, 0, 1, 1, 1, 1, 0);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_330))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_330, true);
			ENTITY::SET_ENTITY_VISIBLE(iLocal_330, false);
			ENTITY::SET_ENTITY_COLLISION(iLocal_330, false, false);
			AUDIO::_0xEB4D592620B8C209(iLocal_330);
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_330, false);
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_330, false);
			AUDIO::DISABLE_PED_PAIN_AUDIO(iLocal_330, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_330, true);
			if (!PLAYER::_0x0E6846476906C9DD(PLAYER::PLAYER_ID(), iLocal_330))
			{
				PLAYER::_0x543DFE14BE720027(PLAYER::PLAYER_ID(), iLocal_330, 0);
			}
			PED::SET_PED_RESET_FLAG(iLocal_330, 170, true);
		}
		return false;
	}
	else
	{
		return true;
	}
	return false;
}

void func_719()
{
	if (__LIB_0__::func_266(iLocal_331, Global_36, 20f, 0, 1))
	{
		if (!__LIB_6__::func_904() && __LIB_0__::func_264(&uLocal_671) > IntToFloat(iLocal_256))
		{
			if (iLocal_257 == 0)
			{
				if (func_467(0, sLocal_127[6], 1))
				{
					MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
					MAP::TRIGGER_SONAR_BLIP(1891783641, ENTITY::GET_ENTITY_COORDS(iLocal_331, false, false));
					Local_18[0 /*18*/].f_16 = sLocal_127[6];
					__LIB_1__::func_148(&uLocal_671);
					iLocal_256 = MISC::GET_RANDOM_INT_IN_RANGE(10, 16);
					iLocal_257++;
				}
			}
			else if (iLocal_257 == 1)
			{
				if (func_467(0, sLocal_127[5], 1))
				{
					MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
					MAP::TRIGGER_SONAR_BLIP(1891783641, ENTITY::GET_ENTITY_COORDS(iLocal_331, false, false));
					Local_18[0 /*18*/].f_16 = sLocal_127[5];
					__LIB_1__::func_148(&uLocal_671);
					iLocal_256 = MISC::GET_RANDOM_INT_IN_RANGE(10, 15);
					iLocal_257++;
				}
			}
			else if (iLocal_257 == 2)
			{
				if (func_467(0, sLocal_127[2], 1))
				{
					MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
					MAP::TRIGGER_SONAR_BLIP(1891783641, ENTITY::GET_ENTITY_COORDS(iLocal_331, false, false));
					Local_18[0 /*18*/].f_16 = sLocal_127[2];
					__LIB_1__::func_148(&uLocal_671);
					iLocal_256 = MISC::GET_RANDOM_INT_IN_RANGE(10, 15);
					iLocal_257++;
				}
			}
			else if (iLocal_257 == 3)
			{
				if (func_467(0, sLocal_127[4], 1))
				{
					MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
					MAP::TRIGGER_SONAR_BLIP(1891783641, ENTITY::GET_ENTITY_COORDS(iLocal_331, false, false));
					Local_18[0 /*18*/].f_16 = sLocal_127[4];
					__LIB_0__::func_37(&uLocal_671);
				}
			}
		}
	}
}

int func_721(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
		fVar8 = __LIB_0__::func_514(fParam12 >= 0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
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
		if (__LIB_9__::func_905(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (__LIB_13__::func_848(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_721(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					__LIB_2__::func_344(uParam0);
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
					__LIB_10__::func_932(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
					if (__LIB_13__::func_849(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
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
					if (__LIB_6__::func_698(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (MISC::IS_BIT_SET(*iParam1, 1))
					{
						__LIB_2__::func_624(uParam3, 0, 0, 1, 1);
						MISC::CLEAR_BIT(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (__LIB_3__::func_888(uParam0, iParam1, fParam4, bVar6))
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
					__LIB_10__::func_933(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					__LIB_13__::func_849(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					__LIB_10__::func_932(uParam0, __LIB_2__::func_402(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (!bVar4)
					{
						__LIB_2__::func_624(uParam3, 0, 0, 1, 1);
					}
					__LIB_1__::func_491(iParam1, 1);
				}
				__LIB_2__::func_361(iParam1, uParam3, fVar8);
				if (__LIB_3__::func_888(uParam0, iParam1, fParam4, bVar6))
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
			__LIB_6__::func_699(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

void func_726(int iParam0, char* sParam1, int iParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_18[iParam0 /*18*/], sParam1, iParam2, 0);
	}
}

void func_729()
{
	switch (iLocal_16)
	{
		case 0:
			StringCopy(&Local_170, "Kitty_Hint_Cam", 64);
			StringCopy(&(Local_170.f_8), "Kitty_Hint_Cam", 64);
			Local_170.f_16 = { 1408.825f, 277.1797f, 93.92581f };
			iLocal_16 = 1;
			break;
		case 1:
			if (!CAM::_0xDD0B7C5AE58F721D(&Local_170))
			{
				CAM::_0x6A4D224FC7643941(&Local_170);
				iLocal_16 = 2;
			}
			break;
		case 2:
			break;
	}
}

void func_730()
{
	int iVar0;
	iVar0 = __LIB_2__::func_431(Global_35, 1406.667f, 279.2118f, 88.52957f, 1060437492 /* Float: 0.707f */);
	if (iVar0 == 0)
	{
		if (!MISC::ARE_STRINGS_EQUAL(Local_18[2 /*18*/].f_16, sLocal_147[0]))
		{
			Local_18[2 /*18*/].f_16 = sLocal_147[0];
		}
	}
	else if (iVar0 == 2)
	{
		if (!MISC::ARE_STRINGS_EQUAL(Local_18[2 /*18*/].f_16, sLocal_147[2]))
		{
			Local_18[2 /*18*/].f_16 = sLocal_147[2];
		}
	}
	else if (iVar0 == 3)
	{
		if (!MISC::ARE_STRINGS_EQUAL(Local_18[2 /*18*/].f_16, sLocal_147[1]))
		{
			Local_18[2 /*18*/].f_16 = sLocal_147[1];
		}
	}
	else if (iVar0 == 1)
	{
		if (!MISC::ARE_STRINGS_EQUAL(Local_18[2 /*18*/].f_16, sLocal_147[3]))
		{
			Local_18[2 /*18*/].f_16 = sLocal_147[3];
		}
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_18[2 /*18*/]))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(Local_18[2 /*18*/], false))
		{
			if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_18[2 /*18*/], Local_18[2 /*18*/].f_16))
			{
				if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_18[2 /*18*/], Local_18[2 /*18*/].f_16))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_18[2 /*18*/], Local_18[2 /*18*/].f_16);
				}
			}
		}
	}
}

void func_731()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_334[iVar0]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_334[iVar0], false);
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_334[iVar0], true);
			OBJECT::DELETE_OBJECT(&(iLocal_334[iVar0]));
		}
		iVar0++;
	}
	func_626();
}

void func_732()
{
	if (CAM::_0xDD0B7C5AE58F721D(&Local_170) && !CAM::_0x927B810E43E99932(&Local_170))
	{
		CAM::_0xB8B207C34285E978(&Local_170);
		CAM::_0x7B0279170961A73F(&Local_170);
	}
}

void func_736()
{
	PED::ADD_RELATIONSHIP_GROUP("Lion", &iLocal_625);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_329, iLocal_625);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, iLocal_625, joaat("PLAYER"));
}

void func_737()
{
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_329, 9, false);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_329, 10, false);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_329, 14, false);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_329, 11, false);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_329, 12, true);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_329, 13, false);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_329, 15, false);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_329, 17, false);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_329, 32, true);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_329, 33, true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_329, true);
}

void func_740()
{
	if ((!MISC::IS_STRING_NULL_OR_EMPTY(&Local_170) && !MISC::IS_STRING_NULL_OR_EMPTY(&(Local_170.f_8))) && CAM::_0x927B810E43E99932(&Local_170))
	{
		CAM::_0x0A5A4F1979ABB40E(&Local_170);
		StringCopy(&(Local_170.f_8), "", 64);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Local_170) && CAM::_0xDD0B7C5AE58F721D(&Local_170))
	{
		CAM::_0x798BE43C9393632B(&Local_170);
		StringCopy(&Local_170, "", 64);
	}
}

void func_742()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_349[iVar0 /*6*/]))
		{
			__LIB_2__::func_788(&(Local_349[iVar0 /*6*/]), 1, 0, 1);
		}
		iVar0++;
	}
}

void func_743()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_374[iVar0 /*6*/]))
		{
			PED::SET_PED_CONFIG_FLAG(Local_374[iVar0 /*6*/], 136, false);
			__LIB_7__::func_345(Local_374[iVar0 /*6*/], 0);
			__LIB_2__::func_788(&(Local_374[iVar0 /*6*/]), 1, 0, 1);
		}
		iVar0++;
	}
}

bool func_744(int iParam0, float fParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
		vVar3 = { vVar0 };
		vVar6 = { vVar3 };
		vVar3.x = (vVar3.x - fParam1);
		vVar3.f_1 = (vVar3.y - fParam1);
		vVar3.f_2 = (vVar3.z - fParam1);
		vVar6.x = (vVar6.x + fParam1);
		vVar6.f_1 = (vVar6.y + fParam1);
		vVar6.f_2 = (vVar6.z + fParam1);
		if (((((MISC::IS_PROJECTILE_TYPE_IN_AREA(vVar3, vVar6, joaat("WEAPON_THROWN_MOLOTOV"), true) || MISC::IS_PROJECTILE_TYPE_IN_AREA(vVar3, vVar6, joaat("WEAPON_THROWN_DYNAMITE"), true)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(vVar3, vVar6, joaat("AMMO_ARROW_DYNAMITE"), true)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(vVar3, vVar6, joaat("AMMO_ARROW_FIRE"), true)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(vVar3, vVar6, joaat("AMMO_DYNAMITE_VOLATILE"), true)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(vVar3, vVar6, joaat("AMMO_DYNAMITE"), true))
		{
			return true;
		}
		if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(vVar0, 15f) >= 1 || FIRE::IS_EXPLOSION_IN_SPHERE(-1, vVar0, 15f))
		{
			return true;
		}
	}
	return false;
}

void func_746()
{
	if (func_205(16777216))
	{
		func_751();
	}
	if (!func_205(8388608))
	{
		func_207(8388608);
	}
}

bool func_748(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
				func_748(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
						func_748(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_748(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_748(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_748(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_748(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_748(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_748(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
					func_748(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_748(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_748(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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

void func_750(var uParam0, char* sParam1, int iParam2, float fParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	func_352(uParam0->f_174, sParam1, iParam2, fParam3, sParam4, sParam5, sParam6, sParam7, iParam8);
}

void func_751()
{
	if (func_205(8388608))
	{
		func_611(8388608);
	}
}

bool func_752(int iParam0)
{
	int iVar0;
	if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_329, Global_35, 1, 1))
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
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_329);
			return true;
		}
	}
	return false;
}

void func_753(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			func_726(2, "ARTHUR", Global_35);
			break;
		case 1:
			func_726(1, "A_M_M_ValFarmer_01", Local_393[0 /*5*/]);
			func_726(1, "A_M_M_ValFarmer_01^1", iLocal_331);
			if (__LIB_0__::func_181())
			{
				func_726(1, "JohnMarston", Global_35);
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_18[1 /*18*/], "b_playerArthur", false, false);
			}
			else
			{
				func_726(1, "ARTHUR", Global_35);
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_18[1 /*18*/], "b_playerArthur", true, false);
			}
			break;
		case 0:
			func_726(0, "A_M_M_ValFarmer_01", Local_393[0 /*5*/]);
			func_726(0, "A_M_M_ValFarmer_01^1", iLocal_331);
			break;
		case 3:
			func_726(3, "A_M_M_ValFarmer_01", Local_393[0 /*5*/]);
			func_726(3, "A_M_M_ValFarmer_01^1", iLocal_331);
			if (__LIB_0__::func_181())
			{
				func_726(3, "JOHN", Global_35);
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_18[3 /*18*/], "b_playerArthur", false, false);
			}
			else
			{
				func_726(3, "ARTHUR", Global_35);
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_18[3 /*18*/], "b_playerArthur", true, false);
			}
			break;
		case 4:
			func_726(4, "lionmangy", iLocal_329);
			break;
		case 5:
			func_726(5, "target", iLocal_329);
			func_726(5, "player", Global_35);
			break;
	}
}

bool func_760(char* sParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5)
{
	sParam0 = func_587(iParam5, sParam0, sParam1, sParam2, sParam3, sParam4);
	return MISC::ARE_STRINGS_EQUAL(sParam0, __LIB_1__::func_337());
}

void func_764(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<6> Var2;
	if (Global_1898329 <= 0)
	{
		return;
	}
	if (!__LIB_0__::func_6(iParam0))
	{
		return;
	}
	if (__LIB_0__::func_702(iParam0))
	{
		func_175(iParam0, 0, 2);
	}
	iVar0 = __LIB_0__::func_80(iParam0);
	if (iVar0 < 0)
	{
		return;
	}
	iVar1 = iVar0;
	if (Global_1898329 > 1)
	{
		Global_1898330[iVar1] = Global_1898330[(Global_1898329 - 1)];
		Global_1898346[iVar1 /*6*/] = { Global_1898346[(Global_1898329 - 1) /*6*/] };
		Global_1898330[(Global_1898329 - 1)] = -1;
		Global_1898346[(Global_1898329 - 1) /*6*/] = { Var2 };
	}
	else
	{
		Global_1898330[iVar1] = -1;
		Global_1898346[iVar1 /*6*/] = { Var2 };
	}
	Global_1898329 = (Global_1898329 - 1);
	if (Global_1898329 < 0)
	{
		Global_1898329 = 0;
	}
}

void func_790()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_1329();
	func_1330();
	func_1331();
	func_1332();
	func_1333();
	__LIB_1__::func_848();
	__LIB_0__::func_376();
}

void func_791(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	func_1336(iParam0, 1, 1, -142743235, 1);
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

void func_826()
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
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_1370(&uVar4, &iVar1, &iVar2, &iVar3)))
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

void func_827(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	if (__LIB_0__::func_13(32768))
	{
		return;
	}
	__LIB_1__::func_616(iParam1, bParam2, fParam3, iParam4, sParam5, iParam6, iParam7, 752097756);
	if (bParam2)
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_ENDLESS_SUMMER")))
		{
			Global_1879514.f_12 = 1;
		}
		else
		{
			Global_1879514.f_12 = 0;
		}
		func_1374(iParam0, iParam1, fParam3, iParam4);
	}
}

void func_830(char[4] cParam0)
{
	int iVar0;
	int iVar1;
	if (!Global_1879514.f_11)
	{
		iVar0 = func_832();
		iVar1 = MISC::GET_HASH_KEY(&cParam0);
		if (MISSIONDATA::MISSIONDATA_GET_RATING(iVar1) != 5 && iVar0 == 5)
		{
			if (__LIB_0__::func_700(Global_1879514.f_1) == 1)
			{
				__LIB_0__::func_896(5, 1);
			}
			else if (__LIB_0__::func_700(Global_1879514.f_1) == 8 && (__LIB_0__::func_1(Global_1347702[__LIB_0__::func_76(Global_1879514.f_1) /*49*/].f_12, 1) || __LIB_0__::func_1(Global_1347702[__LIB_0__::func_76(Global_1879514.f_1) /*49*/].f_12, 33554432)))
			{
				__LIB_0__::func_896(5, 1);
			}
		}
		MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&cParam0), iVar0);
	}
	else
	{
		MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&cParam0), 3);
	}
}

int func_832()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = func_1378(Global_1879514.f_1);
	if (Global_1425247.f_53)
	{
		return 0;
	}
	if (__LIB_0__::func_318(iVar0))
	{
		if (Global_1879514.f_18)
		{
			return Global_1879514.f_19;
		}
		iVar1 = STATS::CHAL_MISSION_GET_NUM_GOALS(iVar0);
		iVar2 = STATS::CHAL_MISSION_GET_NUM_GOALS_COMPLETE(iVar0);
		if (iVar1 > 0)
		{
			iVar3 = ((100 * iVar2) / iVar1);
			if (iVar3 >= 100)
			{
				return 5;
			}
			else if (iVar3 >= 50)
			{
				return 4;
			}
			else
			{
				return 3;
			}
		}
	}
	return 3;
}

void func_844()
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
	fVar0 = (fVar0 + (2f * __LIB_0__::func_646(1f, BUILTIN::TO_FLOAT(__LIB_0__::func_838(joaat("HORSES_REACHED_MAX_BOND"))))));
	fVar5 = BUILTIN::TO_FLOAT(func_1404());
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
					func_764(Global_1898330[iVar61]);
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

int func_860(int iParam0)
{
	struct<5> Var0;
	if (iParam0 < 0)
	{
		return 0;
	}
	if (Global_1898164.f_162 == 0)
	{
		return 0;
	}
	if (Global_1898164.f_162 == 1)
	{
		Global_1898164.f_162 = 0;
		Global_1898164.f_1[0 /*5*/] = { Var0 };
		return 1;
	}
	Global_1898164.f_1[iParam0 /*5*/] = { Var0 };
	Global_1898164.f_162 = (Global_1898164.f_162 - 1);
	func_1043(iParam0, Global_1898164.f_162);
	return 1;
}

void func_862(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_1410(iParam0);
	}
	else
	{
		__LIB_0__::func_932(iParam0, iParam1);
	}
	__LIB_0__::func_408();
}

int func_936(var uParam0, int iParam1, int iParam2)
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
		return func_936(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

int func_987(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	if (!__LIB_0__::func_475(iParam2))
	{
		return -1;
	}
	if (iParam0 < 0 || iParam0 > 511)
	{
		return -1;
	}
	if (iParam1 < 0 || iParam1 > 255)
	{
		return -1;
	}
	if (iParam3 < 0 || iParam3 > __LIB_0__::func_388())
	{
		return -1;
	}
	iVar0 = __LIB_0__::func_389(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_862(iVar1, 0);
	__LIB_0__::func_341(iVar1, 0);
	__LIB_0__::func_397(iVar1, 0);
	__LIB_0__::func_476(iVar1, 0);
	__LIB_0__::func_477(iVar1, iVar0);
	if (iParam4 != 0)
	{
		__LIB_0__::func_478(iVar1, iParam4);
	}
	return iVar1;
}

void func_1038()
{
	__LIB_3__::func_229(589);
	__LIB_3__::func_229(591);
	__LIB_3__::func_229(592);
	__LIB_3__::func_229(593);
	__LIB_3__::func_229(594);
	__LIB_3__::func_229(595);
	__LIB_3__::func_229(596);
	__LIB_3__::func_229(597);
	__LIB_3__::func_229(598);
	__LIB_3__::func_229(599);
	__LIB_3__::func_229(600);
	__LIB_3__::func_229(601);
	__LIB_3__::func_229(602);
	__LIB_3__::func_229(603);
	__LIB_3__::func_229(604);
	__LIB_3__::func_229(605);
	__LIB_3__::func_229(606);
	__LIB_3__::func_229(607);
	__LIB_3__::func_229(608);
	__LIB_3__::func_229(609);
	__LIB_3__::func_229(610);
	__LIB_3__::func_229(611);
	__LIB_3__::func_229(612);
}

void func_1043(int iParam0, int iParam1)
{
	int iVar0;
	if (iParam0 == iParam1)
	{
		return;
	}
	if (iParam1 < iParam0)
	{
		iVar0 = iParam0;
		while (iVar0 > iParam1)
		{
			__LIB_0__::func_517((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			__LIB_0__::func_517(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (__LIB_0__::func_6(Global_1898164.f_1[0 /*5*/]))
	{
		func_383(Global_1898164.f_1[0 /*5*/], 3);
	}
}

bool func_1065(var uParam0)
{
	if (func_205(2))
	{
		return true;
	}
	if (!PED::_0x91A5F9CBEBB9D936(iLocal_637))
	{
		iLocal_637 = __LIB_1__::func_391(iLocal_626, 0, 0, 0);
		return false;
	}
	if (!PED::_0x91A5F9CBEBB9D936(iLocal_638))
	{
		iLocal_638 = __LIB_1__::func_391(iLocal_627, 0, 0, 0);
		return false;
	}
	if (!func_1520(uParam0))
	{
		return false;
	}
	else if (!func_1521(uParam0))
	{
		return false;
	}
	else
	{
		func_207(2);
		return true;
	}
	return false;
}

int func_1070(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, float fParam11)
{
	return func_721(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, __LIB_2__::func_340(iParam8, 0, 0), iParam9, 0, iParam10, fParam11);
}

void func_1078(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
	if (iParam0 == __LIB_0__::func_17(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
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
				func_1078(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_1078(iVar2, vParam1, fParam4, iParam5, iParam6);
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

int func_1079(int iParam0, vector3 vParam1)
{
	if (iLocal_344 == 0)
	{
		iLocal_344 = ENTITY::_0x6F3068258A499E52(iParam0, vParam1, 11);
	}
	else if (ENTITY::_0x1FF441D7954F8709(iLocal_344))
	{
		return ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(iLocal_344));
	}
	return 0;
}

void func_1083(var uParam0)
{
	PED::_0x411189E51B8020BA(Global_35, "Cautious");
	PED::SET_PED_USING_ACTION_MODE(Global_35, true, -1, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_329))
	{
		PED::APPLY_PED_DAMAGE_PACK(iLocal_329, "PD_RC_Here_Kitty4_Lion_Bloody_Mouth_Paws", 0f, 1f);
	}
}

void func_1085(var uParam0)
{
	if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		PED::_0xE0B61ED8BB37712F(Global_35);
	}
	else if (!bLocal_791)
	{
		__LIB_1__::func_572(vLocal_698, 300f, 0, 0, 0, 0, 0);
		func_624();
		bLocal_791 = true;
	}
	if (func_327(4, 0))
	{
		if (__LIB_13__::func_193(uParam0, Global_35, 0, 0, 1, 1))
		{
			__LIB_8__::func_895(ENTITY::GET_ENTITY_COORDS(iLocal_329, false, false), 0);
		}
		if (__LIB_13__::func_193(uParam0, iLocal_329, "A_C_LionMangy_01", 0, 1, 1))
		{
			iLocal_158 = 2;
			ANIMSCENE::START_ANIM_SCENE(Local_18[4 /*18*/]);
			ANIMSCENE::SET_ANIM_SCENE_RATE(Local_18[4 /*18*/], 0.5f);
		}
	}
}

int func_1087(var uParam0)
{
	if (func_327(4, 0))
	{
		bLocal_776 = true;
		return 1;
	}
	return 0;
}

Vector3 func_1091(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1403.645f, 357.0302f, 87.2716f;
		case 1:
			return 1397.232f, 320.8761f, 86.9812f;
	}
	return 0f, 0f, 0f;
}

float func_1092(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 208.333f;
		case 1:
			return 52.7883f;
	}
	return 0f;
}

void func_1120(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
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
		func_1542();
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

void func_1122(var uParam0)
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
			func_1078(iVar1, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_1078(iVar3, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_1123(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if ((__LIB_0__::func_84(uParam0, 268435456) && !__LIB_0__::func_86(__LIB_12__::func_720(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { __LIB_12__::func_720(uParam0) };
			func_1078(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

void func_1329()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_1755(0);
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
	func_1755(1);
}

void func_1330()
{
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_748(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_1331()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_1758(0);
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
	func_1758(1);
}

void func_1332()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_1__::func_432(15000, 0, 0, 0, 1);
			func_1758(0);
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
	func_1758(1);
}

void func_1333()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_748(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_748(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_1336(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_1336(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
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

int func_1336(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			func_1336(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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

int func_1370(var uParam0, int iParam1, int iParam2, int iParam3)
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
	iVar11 = (func_1797(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_952(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_748(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	__LIB_1__::func_432(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

void func_1374(int iParam0, int iParam1, float fParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar0 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iParam1) * fParam2));
	iVar1 = ((iParam1 - iVar0) / iParam3);
	if (__LIB_0__::func_472())
	{
		iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 0.1f));
		UILOG::_UILOG_ADD_TOTAL_TAKE_ENTRY(1072517412, joaat("HUD_TOASTS"), MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_GANG"), MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	else
	{
		UILOG::_UILOG_ADD_TOTAL_TAKE_ENTRY(2067252994, joaat("HUD_TOASTS"), MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_GANG"), MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	iVar3 = iVar1;
	if (__LIB_0__::func_472())
	{
		iVar3 = (iVar3 + iVar2);
	}
	TELEMETRY::_TELEMETRY_GANG_SHARES(__LIB_0__::func_299(iParam0), iVar3, iVar1, iParam3);
	iVar4 = __LIB_0__::func_76(iParam0);
	if (__LIB_0__::func_700(iParam0) != 1 || (iVar4 != 37 && iVar4 != 58))
	{
		UILOG::_UILOG_ADD_TOTAL_TAKE_ENTRY(-1391579956, 1997120069, MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_ARTHUR"), MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar3), 601389479);
	}
	switch (__LIB_0__::func_700(iParam0))
	{
		case 1:
			switch (iVar4)
			{
				case 25:
					__LIB_1__::func_635(1, iVar1);
					__LIB_1__::func_635(8, iVar1);
					__LIB_1__::func_635(7, iVar1);
					break;
				case 12:
					__LIB_1__::func_635(6, iVar1);
					break;
				case 53:
					__LIB_1__::func_635(3, iVar1);
					__LIB_1__::func_635(7, iVar1);
					__LIB_1__::func_635(4, iVar1);
					break;
				case 20:
					__LIB_1__::func_635(8, iVar1);
					break;
				case 19:
					__LIB_1__::func_635(1, iVar1);
					__LIB_1__::func_635(2, iVar1);
					break;
				case 24:
					__LIB_1__::func_635(3, iVar1);
					__LIB_1__::func_635(9, iVar1);
					__LIB_1__::func_635(20, iVar1);
					break;
				case 28:
					__LIB_1__::func_635(1, iVar1);
					break;
				case 34:
					__LIB_1__::func_635(23, iVar1);
					__LIB_1__::func_635(2, iVar1);
					__LIB_1__::func_635(18, iVar1);
					break;
				case 29:
					__LIB_1__::func_635(0, iVar1);
					__LIB_1__::func_635(9, iVar1);
					break;
				case 37:
					break;
				case 58:
					break;
				case 57:
					__LIB_1__::func_635(0, iVar1);
					__LIB_1__::func_635(3, iVar1);
					__LIB_1__::func_635(2, iVar1);
					__LIB_1__::func_635(11, iVar1);
					__LIB_1__::func_635(6, iVar1);
					__LIB_1__::func_635(25, iVar1);
					__LIB_1__::func_635(24, iVar1);
					break;
			}
			break;
		case 8:
			switch (iVar4)
			{
				case 94:
					__LIB_1__::func_635(5, iVar1);
					break;
				case 63:
					__LIB_1__::func_635(1, iVar1);
					__LIB_1__::func_635(3, iVar1);
					break;
				case 37:
					__LIB_1__::func_635(23, iVar1);
					break;
				case 116:
					break;
			}
			break;
		case 11:
			if (iParam0 == func_517(0, 10, 11, joaat("CABR01")))
			{
				__LIB_1__::func_635(7, iVar1);
				__LIB_1__::func_635(4, iVar1);
			}
			else if (iParam0 == func_517(0, 7, 11, joaat("CACR02")))
			{
				__LIB_1__::func_635(8, iVar1);
				__LIB_1__::func_635(15, iVar1);
			}
			else if (iParam0 == func_517(0, 8, 11, joaat("CACR03")))
			{
				__LIB_1__::func_635(3, iVar1);
			}
			else if (iParam0 == func_517(0, 11, 11, joaat("CACR01")))
			{
				__LIB_1__::func_635(6, iVar1);
				__LIB_1__::func_635(3, iVar1);
			}
			else if (iParam0 == func_517(0, 12, 11, joaat("CACR04")))
			{
				__LIB_1__::func_635(9, iVar1);
			}
			break;
	}
	UILOG::_UILOG_SET_TOTAL_TAKE_SUMMARY(MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_TOTAL", iParam1), MISC::_CREATE_VAR_STRING(2, "MISSION_COMPLETE_TAKE_TOTAL_GANG", __LIB_0__::func_473()));
	if (!__LIB_0__::func_474(629))
	{
		__LIB_1__::func_240(629, 0);
	}
}

int func_1378(int iParam0)
{
	char[] cVar0[8];
	int iVar1;
	int iVar2;
	if (!__LIB_0__::func_6(iParam0))
	{
		return 0;
	}
	cVar0 = func_362(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		return 0;
	}
	iVar1 = MISC::GET_HASH_KEY(&cVar0);
	iVar2 = iVar1;
	return iVar2;
}

int func_1404()
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar2 = func_1828(iVar0);
		if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(iVar2) >= STATS::CHAL_GET_MAX_RANKS(iVar2))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_1410(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_0__::func_32(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_1829(iVar0);
}

bool func_1520(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_349[iVar1 /*6*/]))
		{
			Local_349[iVar1 /*6*/] = __LIB_12__::func_885(uParam0, Local_349[iVar1 /*6*/].f_1, Local_349[iVar1 /*6*/].f_2, Local_349[iVar1 /*6*/].f_5, 1, 1, 0, 1, 1, 1, 1, 0);
			return false;
		}
		else
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_349[iVar1 /*6*/]))
			{
				if (!__LIB_0__::func_163(Local_349[iVar1 /*6*/], 1139527981))
				{
					ENTITY::_0x9587913B9E772D29(Local_349[iVar1 /*6*/], 0);
					TASK::TASK_ANIMAL_UNALERTED(Local_349[iVar1 /*6*/], -1, iLocal_628, 0, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_349[iVar1 /*6*/], true);
					PED::SET_PED_CONFIG_FLAG(Local_349[iVar1 /*6*/], 297, true);
				}
			}
			iVar0++;
		}
		iVar1++;
	}
	if (iVar0 == 4)
	{
		return true;
	}
	return false;
}

bool func_1521(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_374[iVar1 /*6*/]))
		{
			Local_374[iVar1 /*6*/] = __LIB_12__::func_885(uParam0, Local_374[iVar1 /*6*/].f_1, Local_374[iVar1 /*6*/].f_2, Local_374[iVar1 /*6*/].f_5, 1, 1, 0, 1, 0, 1, 1, 0);
			return false;
		}
		else
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_374[iVar1 /*6*/]))
			{
				if (!__LIB_0__::func_163(Local_374[iVar1 /*6*/], 1139527981))
				{
					ENTITY::_0x9587913B9E772D29(Local_374[iVar1 /*6*/], 0);
					TASK::TASK_ANIMAL_UNALERTED(Local_374[iVar1 /*6*/], -1, iLocal_629, 0, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_374[iVar1 /*6*/], true);
					PED::SET_PED_CONFIG_FLAG(Local_374[iVar1 /*6*/], 297, true);
					PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), Local_374[iVar1 /*6*/], 33, 0, 1);
					PED::SET_PED_CONFIG_FLAG(Local_374[iVar1 /*6*/], 136, true);
					__LIB_7__::func_345(Local_374[iVar1 /*6*/], 1);
				}
			}
			iVar0++;
		}
		iVar1++;
	}
	if (iVar0 == 3)
	{
		return true;
	}
	return false;
}

void func_1542()
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
	iVar0 = func_1880(6291456, 0);
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

void func_1755(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (bParam0)
	{
		func_748(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_748(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_748(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_2004(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_791(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_1336(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_2010(Var0);
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

void func_1758(bool bParam0)
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
		func_748(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_748(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_748(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_748(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_748(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_748(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_748(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_748(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_748(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_748(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_748(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_1336(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_1336(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_1336(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_1336(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_1336(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_1336(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_1336(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_1336(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_1336(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_1336(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_1336(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
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

int func_1797(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
					Jump @230; //curOff = 202
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
							iVar49 = (iVar49 + func_1797(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1797(iVar63, -915411861, 1, 0, 0));
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

int func_1828(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("SP_CHAL_BAND_ROOT");
		case 1:
			return joaat("SP_CHAL_EXPL_ROOT");
		case 2:
			return joaat("SP_CHAL_GAMB_ROOT");
		case 3:
			return joaat("SP_CHAL_HERB_ROOT");
		case 4:
			return joaat("SP_CHAL_HORSE_ROOT");
		case 5:
			return joaat("SP_CHAL_HUNT_ROOT");
		case 6:
			return joaat("SP_CHAL_SHOT_ROOT");
			return joaat("SP_CHAL_SURV_ROOT");
			return joaat("SP_CHAL_WEAP_ROOT");
			return 0;
		}
int func_1829(int iParam0)
{
	int iVar0;
	struct<2> Var1;
	iVar0 = iParam0;
	while (iVar0 < Global_1058888.f_40501)
	{
		if (iVar0 + 1 < 32)
		{
			Global_1058888.f_40501.f_1[iVar0 /*2*/] = { Global_1058888.f_40501.f_1[iVar0 + 1 /*2*/] };
		}
		iVar0++;
	}
	Var1 = -1;
	if (Global_1058888.f_40501 < 32)
	{
		Global_1058888.f_40501.f_1[Global_1058888.f_40501 /*2*/] = { Var1 };
	}
	Global_1058888.f_40501 = (Global_1058888.f_40501 - 1);
	if (Global_1058888.f_40501 < 0)
	{
		Global_1058888.f_40501 = 0;
	}
	return 1;
}

int func_1880(int iParam0, int iParam1)
{
	var uVar0;
	return func_2059(&uVar0, iParam0, iParam1);
}

void func_2004(int iParam0)
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
	func_1336(iParam0, 1, 1, -142743235, 1);
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
		func_1336(uVar18[iVar36], 1, 1, -142743235, 1);
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

void func_2010(struct<6> Param0)
{
	if (!func_2135(Param0.f_4, 1))
	{
	}
	if (!func_2135(Param0, 1))
	{
	}
	if (!func_2135(Param0.f_2, 1))
	{
	}
	if (!func_2135(Param0.f_5, 1))
	{
	}
	if (!func_2135(Param0.f_3, 1))
	{
	}
	if (!func_2135(Param0.f_1, 1))
	{
	}
}

int func_2059(var uParam0, int iParam1, int iParam2)
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
		return func_2059(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

bool func_2135(int iParam0, int iParam1)
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
				if (func_2135(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_2135(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_2135(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_2135(iVar21, 1))
				{
				}
			}
		}
		__LIB_1__::func_712();
		return true;
	}
	return false;
}

