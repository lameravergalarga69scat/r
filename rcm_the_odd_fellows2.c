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
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	struct<7> Local_25[3];
	struct<6> Local_47[2];
	struct<6> Local_60[3];
	struct<11> Local_79[16];
	struct<6> Local_256[3];
	var uLocal_275[6] = { 0, 0, 0, 0, 0, 0 };
	char* sLocal_282[2] = { NULL, NULL };
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	int iLocal_288 = 0;
	int iLocal_289 = 0;
	vector3 vLocal_290 = { 0f, 0f, 0f };
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	var uLocal_296 = 0;
	struct<4> Local_297 = { 0, 0, 0, 0 } ;
	var uLocal_301 = 0;
	var uLocal_302 = 1065353216;
	var uLocal_303 = 1119092736;
	var uLocal_304 = 1092616192;
	var uLocal_305 = 1085276160;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = -1;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 1097859072;
	var uLocal_324 = 1000;
	var uLocal_325 = 1067450368;
	var uLocal_326 = 5000;
	var uLocal_327 = 42;
	var uLocal_328 = 1103626240;
	var uLocal_329 = 1077936128;
	var uLocal_330 = 1106247680;
	var uLocal_331 = 1103101952;
	var uLocal_332 = 1097859072;
	var uLocal_333 = 1103626240;
	var uLocal_334 = 0;
	char* sLocal_335 = NULL;
	char* sLocal_336 = NULL;
	char* sLocal_337 = NULL;
	char* sLocal_338 = NULL;
	char* sLocal_339 = NULL;
	char* sLocal_340 = NULL;
	struct<10> Local_341[30];
	struct<6> Local_642[6];
	bool bLocal_679 = false;
	bool bLocal_680 = false;
	bool bLocal_681 = false;
	bool bLocal_682 = false;
	int iLocal_683 = 0;
	bool bLocal_684 = false;
	bool bLocal_685 = false;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	vector3 vLocal_725 = { 0f, 0f, 0f };
	vector3 vLocal_728 = { 0f, 0f, 0f };
	int iLocal_731 = 0;
	int iLocal_732 = 0;
	int iLocal_733 = 0;
	int iLocal_734 = 0;
	int iLocal_735 = 0;
	int iLocal_736 = 0;
	int iLocal_737 = 0;
	int iLocal_738 = 0;
	bool bLocal_739 = false;
	bool bLocal_740 = false;
	bool bLocal_741 = false;
	bool bLocal_742 = false;
	bool bLocal_743 = false;
	bool bLocal_744 = false;
	bool bLocal_745 = false;
	bool bLocal_746 = false;
	bool bLocal_747 = false;
	int iLocal_748 = 0;
	int iLocal_749 = 0;
	int iLocal_750 = 0;
	float fLocal_751 = 0f;
	float fLocal_752 = 0f;
	float fLocal_753 = 0f;
	int iLocal_754 = 0;
	int iLocal_755 = 0;
	int iLocal_756 = 0;
	int iLocal_757 = 0;
	struct<17> Local_758[9];
	int iLocal_912 = 0;
	int iLocal_913 = 0;
	int iLocal_914 = 0;
	vector3 vLocal_915 = { 0f, 0f, 0f };
	float fLocal_918 = 0f;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion
void __EntryFunction__()
{
	struct<2606> Var0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	vLocal_290 = { VEHICLE::_GET_NEAREST_TRAIN_TRACK_POSITION(2663.476f, 93.47416f, 54.64969f) };
	iLocal_294 = joaat("WAGONTRAVELLER01X");
	sLocal_335 = "script_rc@roddf@roddf_s2@ig@ig_2";
	sLocal_336 = "MECH_WEAPONS_THROWN@BASE";
	sLocal_337 = "throw_l_fb_stand";
	sLocal_338 = "script_rc@roddf@roddf_s2@ig@ig_4";
	sLocal_339 = "ai_react@react_look_layers@base_emotions@curious";
	sLocal_340 = "direct";
	vLocal_725 = { 2488.513f, 19.4209f, 42.8506f };
	vLocal_728 = { 2478.656f, 2.5792f, 42.9547f };
	iLocal_735 = 255;
	iLocal_736 = 12;
	bLocal_742 = true;
	fLocal_751 = 0f;
	fLocal_752 = 0f;
	fLocal_753 = 0f;
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
				__LIB_12__::func_996(uParam0);
			}
			func_74(uParam0);
		}
	}
	__LIB_13__::func_160(uParam0);
	if (__LIB_0__::func_1(uParam0->f_172, 32))
	{
		__LIB_12__::func_954(uParam0, __LIB_14__::func_164(uParam0));
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
		__LIB_14__::func_170(uParam0, __LIB_0__::func_58(uParam0));
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
		__LIB_9__::func_830(uParam0->f_174, 1);
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
	__LIB_9__::func_830(uParam0->f_174, 0);
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
	else if (!__LIB_0__::func_899(&(uParam0->f_2585)) || IntToFloat(__LIB_1__::func_592(&(uParam0->f_2585))) > __LIB_2__::func_18(uParam0))
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
		func_175(Global_1347702[uParam0->f_174 /*49*/].f_15, 0, 2);
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
		__LIB_9__::func_830(uParam0->f_174, 0);
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
	__LIB_12__::func_658(uParam0, 1);
	__LIB_12__::func_659(uParam0, 8);
	iLocal_14 = 0;
	iLocal_15 = 0;
	iLocal_17 = 0;
	iLocal_19 = 0;
	iLocal_16 = 1;
	iLocal_914 = joaat("PG_RC_ODDFELLOWS2_01X");
	PROPSET::_REQUEST_PROPSET(iLocal_914);
	vLocal_915 = { 2312.968f, 29.34689f, 48.28974f };
	fLocal_918 = 90f;
	__LIB_4__::func_228(&uLocal_306);
	__LIB_6__::func_905(&uLocal_306);
	__LIB_1__::func_402(&uLocal_306, 0);
	func_190();
	func_191();
	func_192();
	Local_758[0 /*17*/] = { __LIB_14__::func_152("script@rcm@roddf@ig@roddf_s2@ig1_castspells", func_193(0)) };
	Local_758[1 /*17*/] = { __LIB_14__::func_152("script@rcm@roddf@ig@roddf_s2@ig7_searchbag", func_193(5)) };
	Local_758[2 /*17*/] = { __LIB_14__::func_152("script@rcm@roddf@ig@roddf_s2@ig6_fellowsarrive", func_193(12)) };
	Local_758[3 /*17*/] = { __LIB_14__::func_152("script@rcm@roddf@ig@roddf_s2@ig5_treetaunt@ig5_treetaunt_magnifico", func_193(30)) };
	Local_758[4 /*17*/] = { __LIB_14__::func_152("script@rcm@roddf@ig@roddf_s2@ig5_treetaunt@ig5_treetaunt_player", func_193(39)) };
	Local_758[6 /*17*/] = { __LIB_14__::func_152("script@rcm@roddf@ig@roddf_s2@ig5_treetaunt@ig5_treetaunt_player", func_193(40)) };
	Local_758[7 /*17*/] = { __LIB_14__::func_152("script@rcm@roddf@ig@roddf_s2@ig5_treetaunt@ig5_treetaunt_player", func_193(41)) };
	Local_758[8 /*17*/] = { __LIB_14__::func_152("script@rcm@roddf@ig@roddf_s2@ig5_treetaunt@ig5_treetaunt_player", func_193(42)) };
	Local_758[5 /*17*/] = { __LIB_14__::func_152("script@rcm@roddf@ig@roddf_s2@ig5_treetaunt@ig5_treetaunt_rocket", func_193(43)) };
	__LIB_3__::func_139(&(uLocal_275[2]), Local_79[8 /*11*/], 0f, 0f, 0f, 20f, 20f, 20f, "MVOL_ANIMAL_SPAWN_RESTRICTION");
	__LIB_3__::func_573(&(uLocal_275[5]), 2507.414f, -20.34167f, 90.29205f, 0f, 0f, 0f, 461.5f, 178f, 200f, "MVOL_HERB_BLOCKER");
	if (!__LIB_0__::func_181())
	{
		__LIB_12__::func_875(uParam0, Global_35, "ARTHUR", 0);
	}
	else
	{
		__LIB_12__::func_875(uParam0, Global_35, "JOHN", 0);
	}
}

void func_42(var uParam0)
{
	__LIB_12__::func_867(uParam0, joaat("CS_MISSMARJORIE"), 7);
	__LIB_12__::func_867(uParam0, joaat("CS_ODDFELLOWSPINHEAD"), 7);
	__LIB_12__::func_867(uParam0, joaat("CS_MAGNIFICO"), 7);
	__LIB_12__::func_867(uParam0, iLocal_294, 7);
	__LIB_12__::func_867(uParam0, Local_47[0 /*6*/].f_5, 7);
	__LIB_12__::func_867(uParam0, Local_47[1 /*6*/].f_5, 7);
	__LIB_12__::func_867(uParam0, Local_60[1 /*6*/].f_5, 7);
	__LIB_12__::func_867(uParam0, Local_60[0 /*6*/].f_5, 7);
	__LIB_12__::func_867(uParam0, Local_60[2 /*6*/].f_5, 7);
	__LIB_12__::func_867(uParam0, Local_47[1 /*6*/].f_5, 7);
	__LIB_12__::func_867(uParam0, Local_60[1 /*6*/].f_5, 7);
	__LIB_13__::func_55(uParam0, sLocal_335, 7);
	__LIB_13__::func_55(uParam0, sLocal_336, 7);
	__LIB_13__::func_55(uParam0, sLocal_338, 7);
	__LIB_13__::func_55(uParam0, sLocal_339, 7);
	__LIB_12__::func_908(uParam0, 0);
	STREAMING::REQUEST_PTFX_ASSET();
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
	if (iVar0 == 0)
	{
		Var1 = { 2311.348f, 29.9582f, 48.3701f };
		Var1.f_3 = 303.3812f;
	}
	else if (iVar0 == 1)
	{
		Var1 = { 2548.864f, -27.2798f, 46.4727f };
		Var1.f_3 = 12.7428f;
	}
	else if (iVar0 == 2)
	{
		Var1 = { 2678.391f, -58.6233f, 49.0469f };
		Var1.f_3 = 326.428f;
	}
	return Var1;
}

bool func_62(var uParam0)
{
	return func_213(*uParam0, uParam0->f_3);
}

bool func_64(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_25[0 /*7*/]))
	{
		if (ENTITY::IS_ENTITY_DEAD(Local_25[0 /*7*/]))
		{
			StringCopy(&(uParam0->f_2578), "RODDF_FAIL1", 24);
			return true;
		}
		else if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_25[0 /*7*/], Global_35, 1, 1) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(Local_25[0 /*7*/], false, false), 5f)) || FIRE::IS_ENTITY_ON_FIRE(Local_25[0 /*7*/]))
		{
			StringCopy(&(uParam0->f_2578), "RODDF_FAIL2", 24);
			return true;
		}
		else if (!__LIB_0__::func_48(Local_25[0 /*7*/], Global_35, 100f, 1))
		{
			StringCopy(&(uParam0->f_2578), "RODDF_FAIL3", 24);
			return true;
		}
		else if (!__LIB_0__::func_48(Local_25[0 /*7*/], Global_35, 60f, 1) && iLocal_14 != 5)
		{
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_25[2 /*7*/]))
	{
		if (ENTITY::IS_ENTITY_DEAD(Local_25[2 /*7*/]))
		{
			StringCopy(&(uParam0->f_2578), "RODDF_FAIL4", 24);
			return true;
		}
		else if (__LIB_9__::func_578(Local_25[2 /*7*/], 0, &uLocal_306, &uLocal_334, 1, 0))
		{
			StringCopy(&(uParam0->f_2578), "RODDF_FAIL4", 24);
			return true;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_25[1 /*7*/]))
	{
		if (ENTITY::IS_ENTITY_DEAD(Local_25[1 /*7*/]))
		{
			StringCopy(&(uParam0->f_2578), "RODDF_FAIL6", 24);
			return true;
		}
		else if (__LIB_9__::func_578(Local_25[1 /*7*/], 0, &uLocal_306, &uLocal_334, 1, 0))
		{
			StringCopy(&(uParam0->f_2578), "RODDF_FAIL6", 24);
			return true;
		}
	}
	if (__LIB_14__::func_165(512))
	{
		StringCopy(&(uParam0->f_2578), "RODDF_FAIL3", 24);
		return true;
	}
	if (__LIB_2__::func_173(PLAYER::GET_PLAYER_INDEX(), 1, 0, 1))
	{
		StringCopy(&(uParam0->f_2578), "RODDF_FAIL5", 24);
		return true;
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
	if (func_220(uParam0->f_174))
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
		if (__LIB_5__::func_245(PLAYER::PLAYER_ID(), 1, 0, 1))
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
	if (func_229(uParam0) || __LIB_12__::func_663(uParam0->f_174, uParam0->f_743))
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
	func_234(uParam0);
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
		__LIB_12__::func_627(uParam0->f_174);
	}
	else if (__LIB_12__::func_644(uParam0) == 2)
	{
	}
	else if (!__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_14, 2))
	{
		__LIB_9__::func_830(uParam0->f_174, 0);
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
			func_249(uParam0);
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
	if (__LIB_12__::func_924(uParam0) && func_274(uParam0))
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
		func_283(Global_1347702[uParam0->f_174 /*49*/].f_15, 1, 1);
		__LIB_0__::func_7(&Global_1935630, 8);
	}
	bVar0 = true;
	if (__LIB_12__::func_639(uParam0, 64))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		__LIB_9__::func_830(uParam0->f_174, 0);
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
	func_290(uParam0);
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
		func_292(uParam0, func_61(0), func_61(1), 0, 1, 0);
	}
}

void func_87(var uParam0)
{
	StringCopy(&(uParam0->f_2575), "RODDF_S2_INT", 24);
	__LIB_12__::func_779(uParam0, Local_25[0 /*7*/].f_2);
	__LIB_12__::func_944(uParam0, &(uParam0->f_2575), 1);
	__LIB_12__::func_956(&(uParam0->f_753), Local_25[0 /*7*/], "MAGNIFICO", 0);
	__LIB_12__::func_956(&(uParam0->f_753), Global_35, 0, 0);
	__LIB_12__::func_957(uParam0, Local_25[0 /*7*/], "cs_magnifico", 0, 0, 0);
	__LIB_12__::func_957(uParam0, Global_35, 0, 0, 0, 0);
	__LIB_13__::func_16(uParam0, 43433);
	__LIB_12__::func_981(uParam0, 43558);
	__LIB_12__::func_982(uParam0, 43928);
	__LIB_12__::func_846(&(uParam0->f_206));
	__LIB_0__::func_7(&(uParam0->f_172), 16);
}

void func_91(var uParam0)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_753.f_1418[0 /*10*/].f_8) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_753.f_1418[0 /*10*/].f_8, true, false))
	{
		if (__LIB_0__::func_181())
		{
			if (ANIMSCENE::GET_ANIM_SCENE_BOOL(uParam0->f_753.f_1418[0 /*10*/].f_8, "b_PlayerArthur"))
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_753.f_1418[0 /*10*/].f_8, "b_PlayerArthur", false, false);
			}
		}
		else if (!ANIMSCENE::GET_ANIM_SCENE_BOOL(uParam0->f_753.f_1418[0 /*10*/].f_8, "b_PlayerArthur"))
		{
			ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_753.f_1418[0 /*10*/].f_8, "b_PlayerArthur", true, false);
		}
	}
	if (!__LIB_14__::func_166(1073741824 /* Float: 2f */))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_25[0 /*7*/], -441525421))
		{
			MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
			MAP::TRIGGER_SONAR_BLIP(1891783641, 2313.02f, 29.24659f, 48.55352f);
			func_305(1073741824 /* Float: 2f */);
		}
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_25[0 /*7*/], -441525421))
	{
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
		MAP::TRIGGER_SONAR_BLIP(1891783641, 2313.02f, 29.24659f, 48.55352f);
		func_306(1073741824 /* Float: 2f */);
	}
	if (!bLocal_746)
	{
		if (__LIB_0__::func_48(Global_35, Local_25[0 /*7*/], 20f, 0))
		{
			__LIB_3__::func_353("RODDF2_APPROACH", 0);
			bLocal_746 = true;
		}
	}
	else if (!__LIB_0__::func_48(Global_35, Local_25[0 /*7*/], 40f, 0))
	{
		__LIB_3__::func_353("RODDF2_ABANDON", 0);
		bLocal_746 = false;
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
		__LIB_14__::func_170(uParam0, bVar0);
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
		if (uParam0->f_171 != 0 || func_308(uParam0))
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
	func_311();
	switch (iVar0)
	{
		case 0:
			if (__LIB_12__::func_936(uParam0))
			{
				if (!__LIB_0__::func_1(uParam0->f_172, 16))
				{
					__LIB_13__::func_33(uParam0, 0);
					func_87(uParam0);
				}
				__LIB_12__::func_909(&(uParam0->f_206));
				__LIB_0__::func_8(&(uParam0->f_172), 262144);
				func_292(uParam0, func_61(0), func_61(1), 0, 1, 0);
				return 5;
			}
			else if (!func_314())
			{
				return 2;
			}
			else
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_25[0 /*7*/]))
				{
					__LIB_1__::func_991(Local_25[0 /*7*/], joaat("HONOR_EVENT_SCARE"));
				}
				func_292(uParam0, func_61(0), func_61(1), 0, 1, 0);
				__LIB_13__::func_105(1, 1);
			}
			break;
		case 1:
			if (!func_317())
			{
				return 2;
			}
			else
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_25[0 /*7*/]))
				{
					__LIB_1__::func_991(Local_25[0 /*7*/], joaat("HONOR_EVENT_SCARE"));
				}
				func_292(uParam0, func_61(1), func_61(2), 1, 2, 0);
				__LIB_13__::func_105(1, 1);
				return 7;
			}
			break;
		case 2:
			if (!func_318(uParam0))
			{
				return 2;
			}
			else
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_25[0 /*7*/]))
				{
					__LIB_1__::func_991(Local_25[0 /*7*/], joaat("HONOR_EVENT_SCARE"));
				}
				__LIB_3__::func_618(2678.391f, -58.6233f, 49.0469f, 100f, 1, 0, 0, 0, 0);
				__LIB_13__::func_105(1, 1);
				return 6;
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
		__LIB_14__::func_170(uParam0, 0);
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
		func_292(uParam0, func_61(0), func_61(1), 0, 1, 1);
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
	return func_332(Var0, &(uParam0->f_206), uParam0);
}

int func_103(var uParam0)
{
	switch (iLocal_17)
	{
		case 0:
			func_306(4);
			func_306(8);
			func_306(16);
			func_306(32);
			func_306(2);
			func_336();
			break;
		case 1:
			__LIB_2__::func_426(&(Local_25[0 /*7*/]));
			__LIB_2__::func_426(&(Local_25[1 /*7*/]));
			__LIB_2__::func_426(&(Local_25[2 /*7*/]));
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_293))
			{
				VEHICLE::DELETE_VEHICLE(&iLocal_293);
			}
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
				func_292(uParam0, func_61(0), func_61(1), 0, 1, 1);
			}
			return false;
		}
	}
	return false;
}

int func_107(var uParam0)
{
	__LIB_1__::func_538(0);
	PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 28, 1);
	PLAYER::SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(PLAYER::GET_PLAYER_INDEX());
	func_340(uParam0);
	VEHICLE::SET_DISABLE_RANDOM_TRAINS_THIS_FRAME(true);
	POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	if (!bLocal_741)
	{
		__LIB_8__::func_810(7);
		bLocal_741 = true;
	}
	switch (iLocal_14)
	{
		case 0:
			if (__LIB_14__::func_166(64))
			{
				return 5;
			}
			if (func_342(uParam0))
			{
				func_343(1);
			}
			break;
		case 1:
			if (func_344(uParam0))
			{
				func_343(2);
			}
			break;
		case 2:
			if (func_345(uParam0))
			{
				func_343(3);
			}
			break;
		case 3:
			if (func_346(uParam0))
			{
				func_343(4);
			}
			break;
		case 4:
			if (func_347(uParam0))
			{
				func_292(uParam0, func_61(1), func_61(2), 1, 2, 0);
				func_343(5);
			}
			break;
		case 5:
			if (func_348(uParam0))
			{
				func_343(6);
			}
			break;
		case 6:
			if (func_349(uParam0))
			{
				func_343(7);
			}
			break;
		case 7:
			if (func_350(uParam0))
			{
				func_343(8);
			}
			break;
		case 8:
			if (func_351(uParam0))
			{
				func_343(10);
			}
			break;
		case 10:
			if (func_352(uParam0))
			{
				return 6;
			}
			break;
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
	func_381(iParam0, 0, iParam3);
	if (__LIB_0__::func_5(Global_1347702[iParam0 /*49*/].f_35))
	{
		__LIB_12__::func_899(Global_1347702[iParam0 /*49*/].f_35);
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
		__LIB_12__::func_628();
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
		func_388(Global_1347702[iParam0 /*49*/].f_15, bParam4, bParam2, bParam6, bParam5);
	}
	else
	{
		func_389(Global_1347702[iParam0 /*49*/].f_15, bParam6);
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
	vVar2 = { func_392(Global_2621440[0 /*12066*/].f_9.f_7, &uVar0, &uVar1, 0, 1, 1, 0, 0, 0) };
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
		func_396(1, bParam1);
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

bool func_150(var uParam0)
{
	if (__LIB_12__::func_644(uParam0) == 0)
	{
		func_416(0);
		if (!bLocal_739)
		{
			return true;
		}
	}
	else
	{
		if (!__LIB_0__::func_266(Global_35, vLocal_915, 100f, 1, 1) && __LIB_12__::func_610(Local_25[0 /*7*/], -1082130432 /* Float: -1f */, 1116471296 /* Float: 70f */, 0, 0, -1082130432 /* Float: -1f */))
		{
			return true;
		}
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_758[0 /*17*/]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_25[0 /*7*/]))
			{
				if (!__LIB_14__::func_165(4096))
				{
					if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_758[0 /*17*/], false))
					{
						if (func_419(0, func_193(1)))
						{
							TASK::_0x2E1D6D87346BB7D2(Local_25[0 /*7*/], Global_35, 0, 0);
							__LIB_14__::func_168(4096);
						}
					}
				}
				else if (ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(Local_758[0 /*17*/]))
				{
					TASK::_TASK_SMART_FLEE_STYLE_PED(Local_25[0 /*7*/], Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
					PED::_0x2208438012482A1A(Local_25[0 /*7*/], false, false);
				}
			}
			else
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(Local_758[0 /*17*/]);
			}
		}
	}
	return false;
}

void func_159(var uParam0)
{
	int iVar0;
	func_421(uParam0);
	func_422();
	__LIB_2__::func_426(&(Local_25[0 /*7*/]));
	__LIB_2__::func_426(&(Local_25[1 /*7*/]));
	__LIB_2__::func_426(&(Local_25[2 /*7*/]));
	func_416(1);
	if (__LIB_0__::func_1(uParam0->f_172, 8))
	{
		__LIB_8__::func_820(7);
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_758[iVar0 /*17*/]))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(Local_758[iVar0 /*17*/]);
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_293))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_293);
	}
	__LIB_2__::func_353(&uLocal_919, 1);
	__LIB_2__::func_353(&uLocal_920, 1);
	PROPSET::_DELETE_PROPSET(iLocal_912, true, true);
	__LIB_1__::func_951(&iLocal_913);
	STREAMING::REMOVE_PTFX_ASSET();
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_289))
	{
		VEHICLE::DELETE_MISSION_TRAIN(&iLocal_289);
	}
	__LIB_1__::func_600(1);
	VEHICLE::_0xB961DD799A837BD7();
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
	__LIB_1__::func_242(iParam0, 0);
	if (__LIB_0__::func_298(0) == iParam0)
	{
		__LIB_0__::func_267(1);
		__LIB_1__::func_142(0);
		__LIB_0__::func_301(1);
	}
	func_442(iParam0, 1);
	__LIB_1__::func_470(iParam0);
}

void func_190()
{
	Local_25[0 /*7*/].f_2 = { 2312.786f, 27.78194f, 48.40265f };
	Local_25[0 /*7*/].f_5 = 356.8899f;
	Local_47[0 /*6*/].f_1 = { 2543.355f, -16.5152f, 45.7232f };
	Local_47[0 /*6*/].f_4 = 205.0136f;
	Local_47[0 /*6*/].f_5 = joaat("A_C_BOAR_01");
	Local_47[1 /*6*/].f_1 = { 2547.177f, -19.001f, 46.0095f };
	Local_47[1 /*6*/].f_4 = 77.1592f;
	Local_47[1 /*6*/].f_5 = joaat("A_C_BOAR_01");
	Local_60[1 /*6*/].f_1 = { 2547.177f, -19.001f, 46.0095f };
	Local_60[1 /*6*/].f_4 = 100f;
	Local_60[1 /*6*/].f_5 = joaat("A_C_PIG_01");
	Local_60[2 /*6*/].f_1 = { 2547.177f, -19.001f, 46.0095f };
	Local_60[2 /*6*/].f_4 = 100f;
	Local_60[2 /*6*/].f_5 = joaat("A_C_RACCOON_01");
	Local_60[0 /*6*/].f_1 = { 2547.177f, -19.001f, 46.0095f };
	Local_60[0 /*6*/].f_4 = 100f;
	Local_60[0 /*6*/].f_5 = joaat("A_C_ROOSTER_01");
}

void func_191()
{
	Local_79[0 /*11*/] = { 2326.439f, 38.2013f, 47.8259f };
	Local_79[0 /*11*/].f_6 = 292.9255f;
	Local_79[0 /*11*/].f_3 = { 2326.439f, 38.2013f, 47.8259f };
	Local_79[0 /*11*/].f_7 = 292.9255f;
	Local_79[0 /*11*/].f_8 = 8f;
	Local_79[0 /*11*/].f_9 = 4f;
	Local_79[1 /*11*/] = { 2340.186f, 44.1274f, 47.0354f };
	Local_79[1 /*11*/].f_6 = 295.0071f;
	Local_79[1 /*11*/].f_3 = { 2360.827f, 51.0963f, 45.7735f };
	Local_79[1 /*11*/].f_7 = 317.7251f;
	Local_79[1 /*11*/].f_8 = 8f;
	Local_79[1 /*11*/].f_9 = 4f;
	Local_79[2 /*11*/] = { 2381.087f, 53.3772f, 44.0758f };
	Local_79[2 /*11*/].f_6 = 254.833f;
	Local_79[2 /*11*/].f_3 = { 2393.701f, 46.8469f, 42.3617f };
	Local_79[2 /*11*/].f_7 = 290.0674f;
	Local_79[2 /*11*/].f_8 = 1.8f;
	Local_79[2 /*11*/].f_9 = 4f;
	Local_79[3 /*11*/] = { 2402.678f, 51.5715f, 41.9672f };
	Local_79[3 /*11*/].f_6 = 312.5038f;
	Local_79[3 /*11*/].f_3 = { 2415.395f, 48.92226f, 41.84673f };
	Local_79[3 /*11*/].f_7 = 244.1453f;
	Local_79[3 /*11*/].f_8 = 2f;
	Local_79[3 /*11*/].f_9 = 4f;
	Local_79[4 /*11*/] = { 2435.327f, 41.8053f, 40.9988f };
	Local_79[4 /*11*/].f_6 = 208.48f;
	Local_79[4 /*11*/].f_3 = { 2437.268f, 33.8417f, 41.9029f };
	Local_79[4 /*11*/].f_7 = 78.2499f;
	Local_79[4 /*11*/].f_8 = 8f;
	Local_79[4 /*11*/].f_9 = 4f;
	Local_79[5 /*11*/] = { 2457.704f, 20.6972f, 42.711f };
	Local_79[5 /*11*/].f_6 = 247.6798f;
	Local_79[5 /*11*/].f_3 = { 2459.333f, 20.9399f, 42.5007f };
	Local_79[5 /*11*/].f_7 = 257.4599f;
	Local_79[5 /*11*/].f_8 = 2f;
	Local_79[5 /*11*/].f_9 = 4f;
	Local_79[6 /*11*/] = { 2478.75f, 13.8523f, 42.7381f };
	Local_79[6 /*11*/].f_6 = 248.49f;
	Local_79[6 /*11*/].f_3 = { 2502.33f, 0.62844f, 45.68885f };
	Local_79[6 /*11*/].f_7 = 72.0555f;
	Local_79[6 /*11*/].f_8 = 11f;
	Local_79[6 /*11*/].f_9 = 4f;
	Local_79[7 /*11*/] = { 2519.526f, -16.7609f, 44.913f };
	Local_79[7 /*11*/].f_6 = 242.3522f;
	Local_79[7 /*11*/].f_3 = { 2532.14f, -16.6193f, 45.3609f };
	Local_79[7 /*11*/].f_7 = 282.8425f;
	Local_79[7 /*11*/].f_8 = 2f;
	Local_79[7 /*11*/].f_9 = 4f;
	Local_79[8 /*11*/] = { 2544.193f, -19.8659f, 45.9462f };
	Local_79[8 /*11*/].f_6 = 280.2316f;
	Local_79[8 /*11*/].f_3 = { 2540.248f, 3.0888f, 44.3629f };
	Local_79[8 /*11*/].f_7 = 176.0732f;
	Local_79[8 /*11*/].f_8 = 10f;
	Local_79[8 /*11*/].f_9 = 4f;
	Local_79[9 /*11*/] = { 2575.876f, -23.0658f, 47.7597f };
	Local_79[9 /*11*/].f_6 = 236.4656f;
	Local_79[9 /*11*/].f_3 = { 2575.876f, -23.0658f, 47.7597f };
	Local_79[9 /*11*/].f_7 = 236.4656f;
	Local_79[9 /*11*/].f_8 = 2f;
	Local_79[9 /*11*/].f_9 = 4f;
	Local_79[10 /*11*/] = { 2586.041f, -24.4948f, 48.4036f };
	Local_79[10 /*11*/].f_6 = 265.5267f;
	Local_79[10 /*11*/].f_3 = { 2600.688f, -27.5764f, 48.4754f };
	Local_79[10 /*11*/].f_7 = 219.8666f;
	Local_79[10 /*11*/].f_8 = 2f;
	Local_79[10 /*11*/].f_9 = 4f;
	Local_79[11 /*11*/] = { 2608.308f, -35.0533f, 49.6734f };
	Local_79[11 /*11*/].f_6 = 241.4306f;
	Local_79[11 /*11*/].f_3 = { 2623.504f, -45.9664f, 51.1965f };
	Local_79[11 /*11*/].f_7 = 218.6863f;
	Local_79[11 /*11*/].f_8 = 2f;
	Local_79[11 /*11*/].f_9 = 4f;
	Local_79[12 /*11*/] = { 2628.764f, -53.2364f, 50.7958f };
	Local_79[12 /*11*/].f_6 = 219.8888f;
	Local_79[12 /*11*/].f_3 = { 2638.865f, -62.3262f, 50.278f };
	Local_79[12 /*11*/].f_7 = 241.5905f;
	Local_79[12 /*11*/].f_8 = 2f;
	Local_79[12 /*11*/].f_9 = 4f;
	Local_79[13 /*11*/] = { 2651.572f, -66.17475f, 49.37341f };
	Local_79[13 /*11*/].f_6 = 263.4331f;
	Local_79[13 /*11*/].f_3 = { 2667.957f, -64.58857f, 48.25867f };
	Local_79[13 /*11*/].f_7 = 300.3244f;
	Local_79[13 /*11*/].f_8 = 2f;
	Local_79[13 /*11*/].f_9 = 4f;
	Local_79[14 /*11*/] = { 2686.731f, -49.9835f, 50.05f };
	Local_79[14 /*11*/].f_6 = 307.464f;
	Local_79[14 /*11*/].f_3 = { 2686.731f, -49.9835f, 50.05f };
	Local_79[14 /*11*/].f_7 = 307.464f;
	Local_79[14 /*11*/].f_8 = 2f;
	Local_79[14 /*11*/].f_9 = 4f;
	Local_79[15 /*11*/] = { 2683.156f, -58.871f, 49.41772f };
	Local_79[15 /*11*/].f_6 = 295.5432f;
	Local_79[15 /*11*/].f_3 = { 2683.156f, -58.871f, 49.41772f };
	Local_79[15 /*11*/].f_7 = 295.5432f;
	Local_79[15 /*11*/].f_8 = 2f;
	Local_79[15 /*11*/].f_9 = 4f;
}

void func_192()
{
	int iVar0;
	sLocal_282[0] = "rcm_oddf2_chase1";
	sLocal_282[1] = "rcm_oddf2_chase2";
	iVar0 = 0;
	while (iVar0 < 2)
	{
		TASK::REQUEST_WAYPOINT_RECORDING(sLocal_282[iVar0]);
		iVar0++;
	}
}

char* func_193(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "pl_Idles";
		case 1:
			return "pl_QuickExit";
		case 5:
			return "pl_Enter";
		case 6:
			return "pl_Exit";
		case 7:
			return "pl_DLG_Damn_it";
		case 8:
			return "pl_Idle_01";
		case 9:
			return "pl_Idle_02";
		case 10:
			return "pl_Idle_03";
		case 11:
			return "pl_Idle_04";
		case 12:
			return "pl_Idle";
		case 13:
			return "pl_DLG_Magnifico";
		case 14:
			return "pl_DLG_Thats_them_alright";
		case 39:
			return "pl_Conv_MainAction";
		case 40:
			return "pl_DLG_God_damn_it";
		case 41:
			return "pl_DLG_Where_are_you";
		case 42:
			return "pl_DLG_You_little";
		case 15:
			return "pl_CallOver_01";
		case 16:
			return "pl_CallOver_02";
		case 17:
			return "pl_CallOver_03";
		case 18:
			return "pl_CallOver_04";
		case 19:
			return "pl_DLG_So_Long_Dummy";
		case 20:
			return "pl_Flinch_Gunshot_Above";
		case 21:
			return "pl_Flinch_Gunshot_LL";
		case 22:
			return "pl_Flinch_Gunshot_LU";
		case 23:
			return "pl_Flinch_Gunshot_RL";
		case 24:
			return "pl_Flinch_Gunshot_RU";
		case 25:
			return "pl_Idle_01";
		case 26:
			return "pl_Idle_02";
		case 27:
			return "pl_Idle_03";
		case 28:
			return "pl_Idle_04";
		case 29:
			return "pl_Idle_05";
		case 30:
			return "pl_Idle_Base";
		case 31:
			return "pl_LightUp_Firework";
		case 32:
			return "pl_Toss_Firework_B";
		case 33:
			return "pl_Toss_Firework_BL";
		case 34:
			return "pl_Toss_Firework_BR";
		case 35:
			return "pl_Toss_Firework_F";
		case 36:
			return "pl_Toss_Firework_FL";
		case 37:
			return "pl_Toss_Firework_FR";
		case 38:
			return "pl_Toss_SmokeBomb";
		case 43:
			return "pl_Boom";
	}
	return "";
}

int func_213(vector3 vParam0, var uParam3)
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
		iVar0 = func_486(0, 0);
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

bool func_220(int iParam0)
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

int func_229(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_25[0 /*7*/]))
	{
		if (ENTITY::IS_ENTITY_DEAD(Local_25[0 /*7*/]))
		{
			return 1;
		}
		else if (__LIB_9__::func_578(Local_25[0 /*7*/], 0, &uLocal_306, &uLocal_334, 1, 0) || __LIB_13__::func_211(Local_25[0 /*7*/], 1097859072 /* Float: 15f */))
		{
			return 1;
		}
	}
	return 0;
}

void func_234(var uParam0)
{
	if (__LIB_12__::func_644(uParam0) == 0)
	{
		if (__LIB_5__::func_297(Global_1347702[uParam0->f_174 /*49*/].f_15) != 0)
		{
			func_545();
			__LIB_7__::func_448(Global_1347702[uParam0->f_174 /*49*/].f_15, 0);
		}
	}
	if (bLocal_746)
	{
		__LIB_3__::func_353("RODDF2_ABANDON", 0);
		bLocal_746 = false;
	}
	func_421(uParam0);
}

void func_249(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_172, 16))
	{
		__LIB_13__::func_29(uParam0, 0);
		func_87(uParam0);
	}
}

int func_274(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_25[0 /*7*/]))
	{
		Local_25[0 /*7*/] = __LIB_12__::func_885(uParam0, joaat("CS_MAGNIFICO"), Local_25[0 /*7*/].f_2, Local_25[0 /*7*/].f_5, 1, 1, 0, 1, 1, 1, 1, 0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_25[0 /*7*/]))
	{
		TASK::TASK_LOOK_AT_ENTITY(Local_25[0 /*7*/], Global_35, -1, 0, 51, 0);
		__LIB_12__::func_875(uParam0, Local_25[0 /*7*/], "RODDF_MAGNIFICO", 0);
		if (func_597(0, 4, func_193(0)))
		{
			if (PROPSET::_HAS_PROPSET_LOADED(iLocal_914))
			{
				iLocal_912 = PROPSET::_CREATE_PROPSET(iLocal_914, vLocal_915, 1, fLocal_918, 1200f, false, true);
				__LIB_3__::func_414(&uLocal_919, 2310.127f, 29.823f, 49.556f, 4f, 1, -1, 0);
				if (!VOLUME::_DOES_VOLUME_EXIST(uLocal_275[0]))
				{
					uLocal_275[0] = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), 2310.927f, 30.25236f, 49.55639f, 0f, 0f, 0f, 2f, 2f, 3f);
				}
				func_599();
				PED::SET_PED_CONFIG_FLAG(Local_25[0 /*7*/], 26, true);
				__LIB_13__::func_260(uParam0, Local_25[0 /*7*/]);
				return 1;
			}
		}
	}
	return 0;
}

void func_283(int iParam0, bool bParam1, bool bParam2)
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
		__LIB_1__::func_242(iParam0, 3);
		__LIB_0__::func_267(bParam2);
		if (__LIB_0__::func_2() == -1)
		{
			if (bParam2 == 0)
			{
				LAW::_0x55F37F5F3F2475E1();
			}
			__LIB_1__::func_142(1);
		}
		__LIB_1__::func_318(iParam0, -1);
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
		__LIB_1__::func_318(iParam0, -1);
		__LIB_1__::func_242(iParam0, 4);
	}
	func_442(iParam0, 0);
}

void func_290(var uParam0)
{
	bLocal_746 = false;
	__LIB_4__::func_248(vLocal_728, 200f);
}

void func_292(var uParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10, bool bParam11)
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
	func_624(Global_1347702[uParam0->f_174 /*49*/].f_15, Var0, Var4, iParam9, iParam10);
}

void func_297(var uParam0)
{
	func_633(2303.271f, -39.21637f, 46.01556f, 141.0045f);
	__LIB_0__::func_568(vLocal_915, 250f, 0);
	__LIB_0__::func_172(uLocal_275[0]);
	if (!ENTITY::IS_ENTITY_DEAD(Local_25[0 /*7*/]))
	{
		__LIB_1__::func_991(Local_25[0 /*7*/], joaat("HONOR_EVENT_SCARE"));
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_758[0 /*17*/]))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(Local_758[0 /*17*/]);
	}
}

void func_299(var uParam0)
{
	if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		PED::_0xE0B61ED8BB37712F(Global_35);
	}
	func_311();
	if (!bLocal_744)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(uLocal_275[5]))
		{
			__LIB_3__::func_241(uLocal_275[5], 1);
			bLocal_744 = true;
		}
	}
	if (!__LIB_14__::func_165(2048))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_25[0 /*7*/]))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_25[0 /*7*/], -81118928))
			{
				func_638(4, 0);
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_river5_magician_smoke", 2313.006f, 29.34765f, 48.5908f, 0f, 0f, 0f, 1f, false, false, false);
				__LIB_14__::func_168(2048);
			}
		}
	}
	if (!__LIB_14__::func_165(8388608))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_25[0 /*7*/]))
		{
			if (__LIB_13__::func_218(uParam0, Local_25[0 /*7*/], "cs_magnifico", 0, 1, 1))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_25[0 /*7*/], true);
				if (__LIB_14__::func_165(16777216))
				{
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_25[0 /*7*/], Local_79[0 /*11*/].f_3, Local_79[0 /*11*/].f_7, true, false, true);
				}
				else
				{
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_25[0 /*7*/], 2314.036f, 30.5532f, 48.3265f, 311.0532f, true, false, true);
				}
				PED::FORCE_PED_MOTION_STATE(Local_25[0 /*7*/], joaat("MOTIONSTATE_RUN"), false, 0, false);
				func_640();
				func_641();
				__LIB_14__::func_168(8388608);
			}
		}
	}
	else if (!ENTITY::IS_ENTITY_DEAD(Local_25[0 /*7*/]))
	{
		TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_25[0 /*7*/], 3f, 0, -1082130432 /* Float: -1f */, 0);
	}
}

int func_301(var uParam0)
{
	__LIB_14__::func_168(16777216);
	return 1;
}

void func_305(int iParam0)
{
	__LIB_1__::func_683(&iLocal_20, iParam0);
}

void func_306(int iParam0)
{
	__LIB_1__::func_681(&iLocal_20, iParam0);
}

bool func_308(var uParam0)
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	bVar0 = false;
	if (!__LIB_0__::func_1(Global_1347702[uParam0->f_174 /*49*/].f_12, 128))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) || PED::IS_PED_ON_MOUNT(Global_35))
		{
			bVar1 = 5f;
			fVar2 = (bVar1 + 10f);
			fVar3 = (fVar2 + 15f);
			fVar4 = (fVar3 + 20f);
			fVar5 = 2f;
			if (__LIB_13__::func_332(Global_35, Local_25[0 /*7*/].f_2, &(uParam0->f_2591), fVar4, fVar3, fVar2, bVar1, fVar5, 0, 0, 1, 1, 1))
			{
				bVar0 = true;
			}
		}
	}
	if (__LIB_0__::func_266(Global_35, Local_25[0 /*7*/].f_2, 5f, 0, 1) || bVar0)
	{
		return true;
	}
	return false;
}

void func_311()
{
	if (!bLocal_745)
	{
		__LIB_1__::func_572(vLocal_915, 500f, 0, 0, 1, 1, 0);
		bLocal_745 = true;
	}
}

bool func_314()
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_25[0 /*7*/]))
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_25[0 /*7*/], Local_79[0 /*11*/].f_3, Local_79[0 /*11*/].f_7, true, false, true);
	}
	if (!bLocal_744)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(uLocal_275[5]))
		{
			__LIB_3__::func_241(uLocal_275[5], 1);
			bLocal_744 = true;
		}
	}
	ENTITY::SET_ENTITY_HEADING(Global_35, 303.3812f);
	__LIB_0__::func_568(vLocal_915, 250f, 0);
	return true;
	return false;
}

bool func_317()
{
	__LIB_0__::func_568(vLocal_915, 250f, 0);
	__LIB_0__::func_568(vLocal_290, 250f, 0);
	__LIB_1__::func_572(vLocal_290, 250f, 0, 0, 0, 0, 0);
	__LIB_2__::func_165(2566.728f, -162.6682f, 40.834f, 5f, 0, 0, 5);
	__LIB_2__::func_165(2676.316f, -62.0177f, 48.7427f, 5f, 0, 0, 5);
	VEHICLE::_0x4C05B42A8D937796();
	__LIB_1__::func_600(0);
	if (!bLocal_744)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(uLocal_275[5]))
		{
			__LIB_3__::func_241(uLocal_275[5], 1);
			bLocal_744 = true;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_25[0 /*7*/]))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_25[0 /*7*/], true);
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_25[0 /*7*/], 2543.151f, -14.83851f, 49.60641f, -173.22f, true, false, true);
		ENTITY::SET_ENTITY_HEADING(Global_35, 12.7428f);
		iLocal_14 = 5;
		func_305(16777216);
		func_305(33554432);
		ENTITY::SET_ENTITY_VISIBLE(Local_25[0 /*7*/], false);
		iLocal_19 = 9;
		func_305(32768);
		__LIB_3__::func_353("RODDF2_RESTART_2", 0);
		bLocal_743 = true;
		MAP::ALLOW_SONAR_BLIPS(true);
		return true;
	}
	return false;
}

bool func_318(var uParam0)
{
	if (!bLocal_744)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(uLocal_275[5]))
		{
			__LIB_3__::func_241(uLocal_275[5], 1);
			bLocal_744 = true;
		}
	}
	if (!__LIB_14__::func_166(8388608))
	{
		if (func_653(uParam0, 2725.135f, -10.4008f, 50.1152f, 139.3715f))
		{
			func_654(uParam0);
			func_305(8388608);
		}
	}
	else if (!PED::_0xA0BC8FAED8CFEB3C(Local_25[2 /*7*/]) || !PED::_0xA0BC8FAED8CFEB3C(Local_25[1 /*7*/]))
	{
		return false;
	}
	else if (!__LIB_14__::func_166(4194304))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_25[0 /*7*/]))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_25[0 /*7*/], 2683.58f, -55.3453f, 49.4833f, 120.0014f, true, false, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_25[0 /*7*/], true);
		}
		__LIB_0__::func_568(vLocal_915, 250f, 0);
		__LIB_0__::func_568(vLocal_290, 250f, 0);
		__LIB_1__::func_572(vLocal_290, 250f, 0, 0, 0, 0, 0);
		__LIB_2__::func_165(2566.728f, -162.6682f, 40.834f, 5f, 0, 0, 5);
		__LIB_2__::func_165(2676.316f, -62.0177f, 48.7427f, 5f, 0, 0, 5);
		VEHICLE::_0x4C05B42A8D937796();
		__LIB_1__::func_600(0);
		func_305(4194304);
	}
	else if (__LIB_0__::func_1(uParam0->f_172, 1))
	{
		return true;
	}
	return false;
}

int func_332(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
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
			func_680(uParam4);
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

void func_336()
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_295))
	{
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_295, 48, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_295, false);
	}
}

void func_340(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_25[0 /*7*/]))
	{
		switch (iLocal_16)
		{
			case 0:
				func_725();
				break;
			case 1:
				func_726(uParam0);
				break;
		}
	}
	else
	{
		iLocal_16 = 4;
	}
}

bool func_342(var uParam0)
{
	switch (iLocal_15)
	{
		case 0:
			if (!__LIB_14__::func_165(1))
			{
				MAP::ALLOW_SONAR_BLIPS(true);
				__LIB_12__::func_883(uParam0, "RODDF_OBJ_1", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_3__::func_139(&(uLocal_275[3]), 2478.047f, -62.96471f, 46.08856f, 0f, 0f, -5.25f, 132f, 100f, 50f, "MVOL_RIVER_TRIGGER_1");
				__LIB_3__::func_139(&(uLocal_275[4]), 2482.198f, 1.342402f, 42.77335f, 0f, 0f, -33.25f, 50f, 50f, 50f, "MVOL_RIVER_TRIGGER_2");
			}
			if (!MAP::DOES_BLIP_EXIST(Local_25[0 /*7*/].f_1))
			{
				Local_25[0 /*7*/].f_1 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_COMPANION"), Local_25[0 /*7*/]);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_25[0 /*7*/].f_1, "RODDF_BLIP_M");
				MAP::_BLIP_SET_MODIFIER(Local_25[0 /*7*/].f_1, -546708623);
				MAP::_BLIP_SET_MODIFIER(Local_25[0 /*7*/].f_1, 231194138);
			}
			if (iLocal_18 != 1)
			{
				iLocal_18 = 1;
			}
			__LIB_2__::func_165(2566.728f, -162.6682f, 40.834f, 5f, 0, 0, 5);
			__LIB_2__::func_165(2676.316f, -62.0177f, 48.7427f, 5f, 0, 0, 5);
			VEHICLE::_0x4C05B42A8D937796();
			__LIB_1__::func_600(0);
			if (!__LIB_14__::func_165(8388608))
			{
				PED::FORCE_PED_MOTION_STATE(Local_25[0 /*7*/], joaat("MOTIONSTATE_SPRINT"), false, 0, false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_25[0 /*7*/], true);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_25[0 /*7*/], Local_79[0 /*11*/].f_3, Local_79[0 /*11*/].f_7, true, false, true);
				func_640();
				func_641();
			}
			__LIB_2__::func_259(&uLocal_701);
			__LIB_13__::func_266();
			break;
		case 1:
			if (!PED::_0x91A5F9CBEBB9D936(uLocal_296))
			{
				if (VOLUME::_DOES_VOLUME_EXIST(uLocal_275[3]))
				{
					uLocal_296 = __LIB_1__::func_391(uLocal_275[3], 0, 0, 8192);
				}
			}
			func_730(uParam0);
			func_731(uParam0);
			func_732(uParam0);
			func_733();
			func_734(uParam0);
			if (__LIB_14__::func_166(8192))
			{
				__LIB_13__::func_266();
			}
			break;
		case 2:
			return true;
	}
	return false;
}

void func_343(int iParam0)
{
	int iVar0;
	if (iParam0 == 11)
	{
		iVar0 = iLocal_14;
		iVar0++;
		iLocal_14 = iVar0;
		if (iLocal_14 == 11)
		{
			iLocal_14 = (iVar0 - 1);
		}
	}
	else
	{
		iLocal_14 = iParam0;
	}
	iLocal_15 = 0;
}

bool func_344(var uParam0)
{
	switch (iLocal_15)
	{
		case 0:
			__LIB_2__::func_259(&uLocal_285);
			TASK::CLEAR_PED_TASKS(Local_25[0 /*7*/], true, false);
			TASK::TASK_PLAY_ANIM(Local_25[0 /*7*/], sLocal_339, sLocal_340, 8f, -8f, -1, 67108881, 0f, false, 65536, false, 0, false);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_25[0 /*7*/], Global_35, -1, -1f, -1f, -1f);
			__LIB_2__::func_259(&uLocal_710);
			__LIB_13__::func_266();
			break;
		case 1:
			func_730(uParam0);
			func_731(uParam0);
			func_732(uParam0);
			func_735(uParam0);
			if (__LIB_0__::func_899(&uLocal_710))
			{
				if (!__LIB_14__::func_165(8192))
				{
					if (__LIB_9__::func_178(&uLocal_710) > 2f)
					{
						TASK::CLEAR_PED_SECONDARY_TASK(Local_25[0 /*7*/]);
						TASK::TASK_PLAY_ANIM(Local_25[0 /*7*/], sLocal_338, func_736(1), 4f, -4f, -1, 67108880, 0f, false, 0, false, 0, false);
						__LIB_12__::func_876(uParam0, "RODDF_S2_IG4_A", 0);
						__LIB_14__::func_168(8192);
						__LIB_14__::func_167(16384);
					}
				}
				else if (!__LIB_14__::func_165(16384))
				{
					if (!ENTITY::_0x0B7CB1300CBFE19C(Local_25[0 /*7*/], 1))
					{
						TASK::CLEAR_PED_SECONDARY_TASK(Local_25[0 /*7*/]);
						TASK::TASK_PLAY_ANIM(Local_25[0 /*7*/], sLocal_339, sLocal_340, 4f, -4f, -1, 25, 0f, false, 0, false, 0, false);
						__LIB_14__::func_168(16384);
						__LIB_2__::func_259(&uLocal_710);
					}
				}
				else if (!__LIB_14__::func_165(32768))
				{
					if (__LIB_9__::func_178(&uLocal_710) > 7f)
					{
						TASK::CLEAR_PED_SECONDARY_TASK(Local_25[0 /*7*/]);
						TASK::TASK_PLAY_ANIM(Local_25[0 /*7*/], sLocal_338, func_736(0), 4f, -4f, -1, 67108880, 0f, false, 0, false, 0, false);
						__LIB_12__::func_876(uParam0, "RODDF_S2_IG4_B", 0);
						__LIB_14__::func_168(32768);
						__LIB_14__::func_167(16384);
					}
				}
			}
			func_733();
			if (__LIB_9__::func_178(&uLocal_285) > 2f)
			{
				if ((__LIB_0__::func_48(Global_35, Local_25[0 /*7*/], 11.5f, 1) || __LIB_0__::func_393(Global_35, uLocal_275[3], 0, 1)) || __LIB_0__::func_393(Global_35, uLocal_275[4], 0, 1))
				{
					func_740(uParam0, 1);
					func_305(16384);
					__LIB_13__::func_266();
				}
			}
			break;
		case 2:
			__LIB_1__::func_561(&uLocal_285);
			func_740(uParam0, 1);
			__LIB_0__::func_172(uLocal_275[3]);
			__LIB_0__::func_172(uLocal_275[4]);
			func_306(4096);
			func_306(262144);
			func_306(131072);
			return true;
	}
	return false;
}

bool func_345(var uParam0)
{
	switch (iLocal_15)
	{
		case 0:
			__LIB_1__::func_539();
			__LIB_13__::func_266();
			break;
		case 1:
			func_730(uParam0);
			func_731(uParam0);
			func_732(uParam0);
			func_733();
			func_742(uParam0);
			func_743(uParam0);
			if (__LIB_0__::func_27(iLocal_22, 1))
			{
				__LIB_2__::func_259(&uLocal_704);
				__LIB_13__::func_266();
			}
			break;
		case 2:
			return true;
	}
	return false;
}

bool func_346(var uParam0)
{
	func_730(uParam0);
	func_731(uParam0);
	func_732(uParam0);
	func_733();
	func_744();
	func_742(uParam0);
	if (iLocal_18 != 2)
	{
		iLocal_18 = 2;
	}
	if (!__LIB_14__::func_165(1024))
	{
		if (__LIB_9__::func_178(&uLocal_704) > 1f)
		{
			__LIB_12__::func_883(uParam0, "RODDF_OBJ_3", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			__LIB_14__::func_168(1024);
		}
	}
	if (iLocal_734 == 0)
	{
		if (!MAP::DOES_BLIP_EXIST(iLocal_733))
		{
			iLocal_733 = MAP::_BLIP_ADD_FOR_RADIUS(408396114, Local_79[6 /*11*/], 5f);
			iLocal_755 = iLocal_754;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_60[1 /*6*/]))
		{
			Local_60[1 /*6*/] = __LIB_12__::func_885(uParam0, Local_60[1 /*6*/].f_5, Local_79[6 /*11*/], Local_60[1 /*6*/].f_4, 1, 1, 0, 1, 1, 1, 1, 0);
		}
		else if (!__LIB_0__::func_27(iLocal_22, 2048))
		{
			if (PED::_0xA0BC8FAED8CFEB3C(Local_60[1 /*6*/]))
			{
				PED::_SET_PED_SCALE(Local_60[1 /*6*/], 0.8f);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_60[1 /*6*/], true);
				__LIB_3__::func_459(Local_60[1 /*6*/], 0);
				ENTITY::_0x18FF3110CF47115D(Local_60[1 /*6*/], 7, 0);
				TASK::TASK_STAND_STILL(Local_60[1 /*6*/], -1);
				ENTITY::SET_ENTITY_COORDS(Local_60[1 /*6*/], Local_79[6 /*11*/] - Vector(2f, 0f, 0f), true, false, true, true);
				ENTITY::FREEZE_ENTITY_POSITION(Local_60[1 /*6*/], true);
				iLocal_750 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_river5_magician_smoke_loop", Local_79[6 /*11*/], 0f, 0f, 0f, 1f, false, false, false, false);
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iLocal_750, "FadeOut", fLocal_753, false);
				func_746(iLocal_750, iLocal_755);
				__LIB_1__::func_683(&iLocal_22, 2048);
			}
		}
		if (!__LIB_0__::func_27(iLocal_22, 4))
		{
			if (__LIB_9__::func_178(&uLocal_704) > 0.2f)
			{
				func_638(7, 1);
				iLocal_757 = iLocal_754;
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_river5_magician_smoke", vLocal_728, 0f, 0f, 0f, 1f, false, false, false);
				if (!MAP::DOES_BLIP_EXIST(iLocal_731))
				{
					iLocal_731 = MAP::_BLIP_ADD_FOR_RADIUS(408396114, vLocal_728, 5f);
				}
				CAM::SHAKE_GAMEPLAY_CAM("SMALL_EXPLOSION_SHAKE", 0.01f);
				__LIB_1__::func_683(&iLocal_22, 4);
			}
		}
		else if (!__LIB_0__::func_27(iLocal_22, 4096))
		{
			if (__LIB_9__::func_178(&uLocal_704) > 0.25f)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_60[2 /*6*/]))
				{
					Local_60[2 /*6*/] = __LIB_12__::func_885(uParam0, Local_60[2 /*6*/].f_5, vLocal_728, Local_60[2 /*6*/].f_4, 1, 1, 0, 1, 1, 1, 1, 0);
				}
				else
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_60[2 /*6*/], true);
					TASK::TASK_STAND_STILL(Local_60[2 /*6*/], -1);
					ENTITY::SET_ENTITY_COORDS(Local_60[2 /*6*/], vLocal_728 - Vector(2f, 0f, 0f), true, false, true, true);
					ENTITY::FREEZE_ENTITY_POSITION(Local_60[2 /*6*/], true);
					__LIB_3__::func_459(Local_60[2 /*6*/], 0);
					ENTITY::_0x18FF3110CF47115D(Local_60[2 /*6*/], 7, 0);
					iLocal_749 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_river5_magician_smoke_loop", vLocal_728, 0f, 0f, 0f, 1f, false, false, false, false);
					GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iLocal_749, "FadeOut", fLocal_752, false);
					func_746(iLocal_749, iLocal_757);
					__LIB_1__::func_683(&iLocal_22, 4096);
				}
			}
		}
		if (!__LIB_0__::func_27(iLocal_22, 8))
		{
			if (__LIB_9__::func_178(&uLocal_704) > 0.1f)
			{
				func_638(7, 1);
				iLocal_756 = iLocal_754;
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_river5_magician_smoke", vLocal_725, 0f, 0f, 0f, 1f, false, false, false);
				if (!MAP::DOES_BLIP_EXIST(iLocal_732))
				{
					iLocal_732 = MAP::_BLIP_ADD_FOR_RADIUS(408396114, vLocal_725, 5f);
				}
				CAM::SHAKE_GAMEPLAY_CAM("SMALL_EXPLOSION_SHAKE", 0.01f);
				__LIB_1__::func_683(&iLocal_22, 8);
			}
		}
		else if (!__LIB_0__::func_27(iLocal_22, 1024))
		{
			if (__LIB_9__::func_178(&uLocal_704) > 0.15f)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_60[0 /*6*/]))
				{
					Local_60[0 /*6*/] = __LIB_12__::func_885(uParam0, Local_60[0 /*6*/].f_5, vLocal_725, Local_60[0 /*6*/].f_4, 1, 1, 0, 1, 1, 1, 1, 0);
				}
				else
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_60[0 /*6*/], true);
					ENTITY::SET_ENTITY_COORDS(Local_60[0 /*6*/], vLocal_725 - Vector(2f, 0f, 0f), true, false, true, true);
					TASK::TASK_STAND_STILL(Local_60[0 /*6*/], -1);
					ENTITY::FREEZE_ENTITY_POSITION(Local_60[0 /*6*/], true);
					__LIB_3__::func_459(Local_60[0 /*6*/], 0);
					ENTITY::_0x18FF3110CF47115D(Local_60[0 /*6*/], 7, 0);
					iLocal_748 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_river5_magician_smoke_loop", vLocal_725, 0f, 0f, 0f, 1f, false, false, false, false);
					GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iLocal_748, "FadeOut", fLocal_751, false);
					func_746(iLocal_748, iLocal_756);
					__LIB_1__::func_683(&iLocal_22, 1024);
				}
			}
		}
	}
	if (!__LIB_0__::func_27(iLocal_22, 32))
	{
		if (MAP::DOES_BLIP_EXIST(iLocal_733))
		{
			if (__LIB_0__::func_266(Global_35, Local_79[6 /*11*/], 3f, 1, 1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_60[1 /*6*/]))
				{
					ENTITY::SET_ENTITY_COORDS(Local_60[1 /*6*/], Local_79[6 /*11*/], true, false, true, true);
					ENTITY::FREEZE_ENTITY_POSITION(Local_60[1 /*6*/], false);
					TASK::TASK_ANIMAL_FLEE(Local_60[1 /*6*/], Global_35, -1);
					__LIB_2__::func_788(&(Local_60[1 /*6*/]), 1, 0, 1);
					fLocal_753 = 0.01f;
				}
				iLocal_734++;
				MAP::_BLIP_SET_MODIFIER(iLocal_733, -1269631044);
				iLocal_683 = 1;
				__LIB_1__::func_683(&iLocal_22, 32);
			}
		}
	}
	if (!__LIB_0__::func_27(iLocal_22, 64))
	{
		if (MAP::DOES_BLIP_EXIST(iLocal_732))
		{
			if (__LIB_0__::func_266(Global_35, vLocal_725, 3f, 1, 1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_60[0 /*6*/]))
				{
					ENTITY::SET_ENTITY_COORDS(Local_60[0 /*6*/], vLocal_725, true, false, true, true);
					ENTITY::FREEZE_ENTITY_POSITION(Local_60[0 /*6*/], false);
					TASK::TASK_ANIMAL_FLEE(Local_60[0 /*6*/], Global_35, -1);
					__LIB_2__::func_788(&(Local_60[0 /*6*/]), 1, 0, 1);
					fLocal_751 = 0.01f;
				}
				iLocal_734++;
				MAP::_BLIP_SET_MODIFIER(iLocal_732, -1269631044);
				iLocal_683 = 1;
				__LIB_1__::func_683(&iLocal_22, 64);
			}
		}
	}
	if (!__LIB_0__::func_27(iLocal_22, 16))
	{
		if (MAP::DOES_BLIP_EXIST(iLocal_731))
		{
			if (__LIB_0__::func_266(Global_35, vLocal_728, 3f, 1, 1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_60[2 /*6*/]))
				{
					ENTITY::SET_ENTITY_COORDS(Local_60[2 /*6*/], vLocal_728, true, false, true, true);
					ENTITY::FREEZE_ENTITY_POSITION(Local_60[2 /*6*/], false);
					TASK::TASK_ANIMAL_FLEE(Local_60[2 /*6*/], Global_35, -1);
					__LIB_2__::func_788(&(Local_60[2 /*6*/]), 1, 0, 1);
					fLocal_752 = 0.01f;
				}
				iLocal_734++;
				MAP::_BLIP_SET_MODIFIER(iLocal_731, -1269631044);
				iLocal_683 = 1;
				__LIB_1__::func_683(&iLocal_22, 16);
			}
		}
	}
	if (__LIB_0__::func_899(&uLocal_686) || iLocal_683 == 1)
	{
		func_747(uParam0);
	}
	if (!__LIB_0__::func_27(iLocal_22, 128))
	{
		if (iLocal_734 == 3)
		{
			if (!__LIB_0__::func_899(&uLocal_285))
			{
				__LIB_2__::func_259(&uLocal_285);
			}
			else if (__LIB_9__::func_178(&uLocal_285) > 1.5f)
			{
				__LIB_1__::func_683(&iLocal_22, 128);
				__LIB_2__::func_259(&uLocal_285);
			}
		}
	}
	else if (__LIB_0__::func_27(iLocal_22, 2))
	{
		if (__LIB_0__::func_899(&uLocal_710))
		{
			if (!__LIB_14__::func_165(65536))
			{
				if (__LIB_9__::func_178(&uLocal_710) > 1f)
				{
					TASK::CLEAR_PED_SECONDARY_TASK(Local_25[0 /*7*/]);
					TASK::TASK_PLAY_ANIM(Local_25[0 /*7*/], sLocal_338, func_736(2), 4f, -4f, -1, 67108880, 0f, false, 65536, false, 0, false);
					__LIB_12__::func_876(uParam0, "RODDF_S2_IG4_C", 0);
					__LIB_14__::func_168(65536);
					__LIB_14__::func_167(16384);
				}
			}
			else if (!__LIB_14__::func_165(16384))
			{
				if (!ENTITY::_0x0B7CB1300CBFE19C(Local_25[0 /*7*/], 1))
				{
					TASK::CLEAR_PED_SECONDARY_TASK(Local_25[0 /*7*/]);
					TASK::TASK_PLAY_ANIM(Local_25[0 /*7*/], sLocal_339, sLocal_340, 4f, -4f, -1, 67108881, 0f, false, 65536, false, 0, false);
					__LIB_14__::func_168(16384);
					__LIB_2__::func_259(&uLocal_710);
				}
			}
			else if (!__LIB_14__::func_165(32768))
			{
				if (__LIB_9__::func_178(&uLocal_710) > 7f)
				{
					TASK::CLEAR_PED_SECONDARY_TASK(Local_25[0 /*7*/]);
					TASK::TASK_PLAY_ANIM(Local_25[0 /*7*/], sLocal_338, func_736(0), 4f, -4f, -1, 67108880, 0f, false, 65536, false, 0, false);
					__LIB_12__::func_876(uParam0, "RODDF_S2_IG4_B", 0);
					__LIB_14__::func_168(32768);
					__LIB_14__::func_167(16384);
				}
			}
		}
		if (__LIB_9__::func_178(&uLocal_285) > 2f)
		{
			if (__LIB_0__::func_48(Global_35, Local_25[0 /*7*/], 13f, 1))
			{
				func_740(uParam0, 1);
				__LIB_1__::func_683(&iLocal_22, 256);
				func_305(16384);
				return true;
			}
		}
	}
	return false;
}

bool func_347(var uParam0)
{
	switch (iLocal_15)
	{
		case 0:
			if (iLocal_18 != 3)
			{
				iLocal_18 = 3;
			}
			__LIB_13__::func_266();
			break;
		case 1:
			func_730(uParam0);
			func_731(uParam0);
			func_732(uParam0);
			func_733();
			func_743(uParam0);
			if (__LIB_14__::func_166(32768))
			{
				__LIB_13__::func_266();
			}
			break;
		case 2:
			return true;
	}
	return false;
}

bool func_348(var uParam0)
{
	switch (iLocal_15)
	{
		case 0:
			if (!bLocal_743)
			{
				__LIB_2__::func_259(&uLocal_285);
			}
			else
			{
				__LIB_1__::func_585(&uLocal_285, 3f);
				bLocal_743 = false;
			}
			TASK::CLEAR_PED_TASKS(Local_25[0 /*7*/], true, false);
			if (iLocal_18 != 4)
			{
				iLocal_18 = 4;
			}
			__LIB_13__::func_266();
			break;
		case 1:
			func_730(uParam0);
			func_731(uParam0);
			func_732(uParam0);
			func_743(uParam0);
			if (!__LIB_0__::func_27(iLocal_24, 4096))
			{
				if (__LIB_0__::func_266(Global_35, Local_79[8 /*11*/], 12f, 1, 1) && __LIB_9__::func_178(&uLocal_285) > 4.5f)
				{
					func_748();
					if (__LIB_0__::func_181())
					{
						if (__LIB_12__::func_876(uParam0, "RODF2_CLEAR_J", 0))
						{
							__LIB_1__::func_683(&iLocal_24, 4096);
						}
					}
					else if (__LIB_12__::func_876(uParam0, "RODF2_CLEAR_A", 0))
					{
						__LIB_1__::func_683(&iLocal_24, 4096);
					}
				}
			}
			if (!__LIB_14__::func_166(262144))
			{
				if (!__LIB_14__::func_166(131072))
				{
					if (!__LIB_14__::func_165(256))
					{
						if (__LIB_9__::func_178(&uLocal_285) > 3f && __LIB_0__::func_266(Global_35, Local_79[8 /*11*/], 12f, 1, 1))
						{
							if (!MAP::DOES_BLIP_EXIST(iLocal_288))
							{
								iLocal_288 = MAP::_BLIP_ADD_FOR_RADIUS(408396114, Local_79[8 /*11*/], 20f);
								PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, "Cautious", 1f, -1);
								__LIB_12__::func_883(uParam0, "RODDF_OBJ_2", 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
								__LIB_14__::func_168(256);
							}
						}
						else if (__LIB_9__::func_178(&uLocal_285) > 20f)
						{
							if (!__LIB_14__::func_165(512))
							{
								__LIB_14__::func_168(512);
							}
						}
					}
					else if ((ENTITY::IS_ENTITY_VISIBLE(Local_25[0 /*7*/]) && !ENTITY::IS_ENTITY_OCCLUDED(Local_25[0 /*7*/])) && __LIB_0__::func_48(Global_35, Local_25[0 /*7*/], 25f, 1))
					{
						__LIB_0__::func_325(&iLocal_288);
						if (!MAP::DOES_BLIP_EXIST(Local_25[0 /*7*/].f_1))
						{
							Local_25[0 /*7*/].f_1 = MAP::_BLIP_ADD_FOR_COORD(joaat("BLIP_STYLE_COMPANION"), ENTITY::GET_ENTITY_COORDS(Local_25[0 /*7*/], true, false) + Vector(20f, 0f, 0f));
							MAP::_BLIP_SET_MODIFIER(Local_25[0 /*7*/].f_1, -546708623);
							MAP::_BLIP_SET_MODIFIER(Local_25[0 /*7*/].f_1, 231194138);
							MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_25[0 /*7*/].f_1, "RODDF_BLIP_M");
							__LIB_13__::func_89(uParam0, "RODDF_OBJ_4", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
						}
						__LIB_0__::func_7(&(Local_297.f_3), 4);
						PED::_0x411189E51B8020BA(Global_35, "Cautious");
						func_305(131072);
					}
				}
				else if ((__LIB_4__::func_119(&Local_297) || CAM::_0xA24C1D341C6E0D53(1, 0, 1)) || CAM::IS_CINEMATIC_CAM_RENDERING())
				{
					func_305(262144);
					__LIB_1__::func_539();
				}
				else
				{
					__LIB_14__::func_169(Local_25[0 /*7*/], &Local_297, 0f, 0f, 0f, 1, 30f, 100f, 4000, 4000, 1000, 1075838976 /* Float: 2.5f */, 1, 1, 1084227584 /* Float: 5f */);
				}
			}
			if (func_753(uParam0))
			{
				__LIB_13__::func_266();
			}
			else
			{
				if (__LIB_14__::func_166(131072))
				{
					if (iLocal_18 != 5)
					{
						iLocal_18 = 5;
					}
				}
				Jump @797; //curOff = 763
				func_306(32768);
				func_306(262144);
				func_306(131072);
				return true;
			}
			return false;
			default:
				break;
	}
}

bool func_349(var uParam0)
{
	switch (iLocal_15)
	{
		case 0:
			if (iLocal_18 != 6)
			{
				iLocal_18 = 6;
			}
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_25[0 /*7*/], Local_79[9 /*11*/].f_3, Local_79[9 /*11*/].f_7, true, false, true);
			func_640();
			func_305(16384);
			func_305(256);
			if (__LIB_0__::func_899(&uLocal_689))
			{
				__LIB_1__::func_561(&uLocal_689);
			}
			__LIB_13__::func_89(uParam0, "RODDF_OBJ_1", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			__LIB_2__::func_259(&uLocal_707);
			__LIB_13__::func_266();
			break;
		case 1:
			func_754(uParam0);
			func_730(uParam0);
			func_731(uParam0);
			func_732(uParam0);
			func_733();
			func_755(uParam0);
			if (!__LIB_14__::func_166(2097152))
			{
				if (func_756())
				{
					__LIB_2__::func_259(&uLocal_713);
					func_305(2097152);
				}
			}
			if (!__LIB_14__::func_166(8388608))
			{
				if (func_653(uParam0, 2725.135f, -10.4008f, 50.1152f, 139.3715f))
				{
					func_654(uParam0);
					func_305(8388608);
				}
			}
			if (__LIB_14__::func_166(524288))
			{
				__LIB_13__::func_266();
			}
			break;
		case 2:
			return true;
	}
	return false;
}

bool func_350(var uParam0)
{
	switch (iLocal_15)
	{
		case 0:
			__LIB_2__::func_259(&uLocal_285);
			__LIB_13__::func_266();
			func_757();
			break;
		case 1:
			func_730(uParam0);
			func_731(uParam0);
			func_732(uParam0);
			func_755(uParam0);
			if (ENTITY::IS_ENTITY_VISIBLE(Local_25[0 /*7*/]))
			{
				__LIB_13__::func_266();
			}
			break;
		case 2:
			func_306(524288);
			return true;
	}
	return false;
}

bool func_351(var uParam0)
{
	func_597(1, 0, func_193(5));
	if (__LIB_0__::func_48(Global_35, Local_25[0 /*7*/], 15f, 1) || __LIB_0__::func_48(Global_35, iLocal_293, 15f, 0))
	{
		TASK::TASK_LOOK_AT_ENTITY(Global_35, Local_25[0 /*7*/], 500, 0, 51, 0);
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
	}
	switch (iLocal_15)
	{
		case 0:
			func_641();
			func_640();
			__LIB_13__::func_266();
			break;
		case 1:
			func_730(uParam0);
			func_731(uParam0);
			func_732(uParam0);
			func_733();
			func_758(uParam0);
			func_755(uParam0);
			if (__LIB_14__::func_166(128))
			{
				__LIB_13__::func_266();
			}
			break;
		case 2:
			func_758(uParam0);
			return true;
	}
	return false;
}

bool func_352(var uParam0)
{
	switch (iLocal_15)
	{
		case 0:
			func_758(uParam0);
			func_759();
			__LIB_13__::func_266();
			break;
		case 1:
			func_730(uParam0);
			func_731(uParam0);
			func_758(uParam0);
			if (!__LIB_0__::func_899(&uLocal_722))
			{
				if (__LIB_14__::func_165(4194304))
				{
					__LIB_2__::func_259(&uLocal_722);
				}
			}
			if (__LIB_0__::func_48(Global_35, Local_25[0 /*7*/], 15f, 1) || __LIB_0__::func_48(Global_35, iLocal_293, 15f, 0))
			{
				TASK::TASK_LOOK_AT_ENTITY(Global_35, Local_25[0 /*7*/], 500, 0, 51, 0);
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
			}
			if ((__LIB_0__::func_48(Global_35, Local_25[0 /*7*/], 12f, 1) || __LIB_0__::func_48(Global_35, iLocal_293, 17f, 0)) || __LIB_9__::func_178(&uLocal_722) > 10f)
			{
				__LIB_2__::func_259(&uLocal_722);
				__LIB_13__::func_266();
			}
			break;
		case 2:
			TASK::TASK_LOOK_AT_ENTITY(Global_35, Local_25[0 /*7*/], 500, 0, 51, 0);
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			if (__LIB_9__::func_178(&uLocal_722) > 1.5f)
			{
				__LIB_1__::func_561(&uLocal_722);
				return true;
			}
			break;
	}
	return false;
}

void func_381(int iParam0, int iParam1, int iParam2)
{
	__LIB_11__::func_576(iParam0, iParam2);
	if (__LIB_5__::func_353(iParam0))
	{
		func_771(Global_1347702[iParam0 /*49*/].f_15);
	}
	if (iParam1 == 1)
	{
		if (__LIB_1__::func_44(Global_1347702[iParam0 /*49*/].f_15))
		{
			func_175(Global_1347702[iParam0 /*49*/].f_15, 0, 2);
		}
	}
}

void func_388(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
	func_442(iParam0, 1);
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
						func_796(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_796(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_796(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_796(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_796(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_796(joaat("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_796(joaat("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_796(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_796(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_796(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_796(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_796(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_796(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_796(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_796(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_796(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_796(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_796(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_796(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_796(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_796(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_692(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_796(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_796(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_796(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_796(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_798();
						func_799(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
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
						func_796(joaat("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
							func_388(Global_1347702[21 /*49*/].f_15, 0, 0, 0, 0);
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
							func_388(Global_1347702[82 /*49*/].f_15, 0, 0, 0, 0);
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
							func_388(Global_1347702[83 /*49*/].f_15, 0, 0, 0, 0);
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
						func_796(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_796(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
		func_834();
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
							func_796(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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

void func_389(int iParam0, bool bParam1)
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
			if ((iVar1 == 1 || iVar1 == 8) || (iVar1 == 11 && iParam0 == __LIB_1__::func_293(0, 10, 11, joaat("CABR01"))))
			{
				Global_1898438 = MISC::GET_GAME_TIMER();
				Global_1879514.f_1 = iParam0;
				Global_1879514.f_19 = __LIB_1__::func_753();
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
				__LIB_1__::func_242(iParam0, 6);
			}
			else
			{
				__LIB_1__::func_242(iParam0, 5);
			}
			__LIB_1__::func_470(iParam0);
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

Vector3 func_392(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10)
{
	vector3 vVar0;
	vVar0 = { func_841(vParam0, iParam3, iParam4, iParam5, iParam6, 1, iParam7, bParam8, bParam9, bParam10, -1, 1103626240 /* Float: 25f */) };
	if (__LIB_0__::func_86(vVar0))
	{
		vVar0 = { func_841(vParam0, iParam3, iParam4, 0, 1, 1, iParam7, bParam8, 0, 0, -1, 1103626240 /* Float: 25f */) };
	}
	return vVar0;
}

void func_396(bool bParam0, bool bParam1)
{
	vector3 vVar0;
	var uVar3;
	var uVar4;
	if (__LIB_0__::func_2() == -1)
	{
		__LIB_0__::func_991();
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
	func_852();
}

void func_416(bool bParam0)
{
	if (bLocal_739)
	{
		if (__LIB_12__::func_201() == 1 || bParam0)
		{
			if (bLocal_740)
			{
				__LIB_1__::func_724(8);
			}
			bLocal_739 = false;
		}
	}
}

bool func_419(int iParam0, char* sParam1)
{
	if (func_876(iParam0, sParam1))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_758[iParam0 /*17*/], sParam1, true);
		Local_758[iParam0 /*17*/].f_15 = sParam1;
		return true;
	}
	return false;
}

void func_421(var uParam0)
{
	int iVar0;
	if (!__LIB_14__::func_166(536870912))
	{
		if (__LIB_0__::func_1(uParam0->f_172, 8))
		{
			__LIB_2__::func_161(2566.728f, -162.6682f, 40.834f, 5f, 5);
			__LIB_2__::func_161(2676.316f, -62.0177f, 48.7427f, 5f, 5);
		}
		PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "RODDF");
		func_878();
		if (__LIB_0__::func_1(uParam0->f_172, 8))
		{
			__LIB_8__::func_820(7);
			PED::_0x411189E51B8020BA(Global_35, "Cautious");
		}
		func_879();
		__LIB_2__::func_788(&iLocal_295, 1, 0, 1);
		__LIB_0__::func_325(&iLocal_288);
		__LIB_0__::func_325(&(Local_25[0 /*7*/].f_1));
		__LIB_0__::func_325(&iLocal_731);
		__LIB_0__::func_325(&iLocal_732);
		__LIB_0__::func_325(&iLocal_733);
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_749))
		{
			GRAPHICS::REMOVE_PARTICLE_FX(iLocal_749, false);
		}
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_748))
		{
			GRAPHICS::REMOVE_PARTICLE_FX(iLocal_748, false);
		}
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_750))
		{
			GRAPHICS::REMOVE_PARTICLE_FX(iLocal_750, false);
		}
		if (bLocal_744)
		{
			if (VOLUME::_DOES_VOLUME_EXIST(uLocal_275[5]))
			{
				__LIB_3__::func_241(uLocal_275[5], 0);
			}
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			__LIB_1__::func_951(&(Local_256[iVar0 /*6*/]));
			iVar0++;
		}
		func_880();
		func_305(536870912);
	}
}

void func_422()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (__LIB_0__::func_899(&(Local_341[iVar0 /*10*/].f_5)))
		{
			__LIB_1__::func_561(&(Local_341[iVar0 /*10*/].f_5));
			__LIB_0__::func_172(Local_341[iVar0 /*10*/].f_9);
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (__LIB_0__::func_899(&(Local_642[iVar0 /*6*/].f_1)))
		{
			__LIB_1__::func_561(&(Local_642[iVar0 /*6*/].f_1));
			__LIB_0__::func_172(Local_642[iVar0 /*6*/].f_5);
		}
		iVar0++;
	}
}

void func_442(int iParam0, bool bParam1)
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	if (__LIB_0__::func_298(0) != iParam0)
	{
		return;
	}
	if (func_910(iParam0))
	{
		if (bParam1)
		{
			func_911(-525676072);
		}
		else
		{
			__LIB_0__::func_908(-525676072);
		}
	}
}

int func_486(int iParam0, int iParam1)
{
	var uVar0;
	return func_929(&uVar0, iParam0, iParam1);
}

void func_545()
{
	if (!bLocal_739)
	{
		if (!__LIB_4__::func_377(8))
		{
			__LIB_0__::func_635(8);
			bLocal_740 = true;
			__LIB_6__::func_766();
		}
		else
		{
			__LIB_6__::func_766();
		}
		bLocal_739 = true;
	}
}

bool func_597(int iParam0, int iParam1, char* sParam2)
{
	if (!Local_758[iParam0 /*17*/].f_14)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_758[iParam0 /*17*/]))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_758[iParam0 /*17*/], true, false))
			{
				Local_758[iParam0 /*17*/].f_14 = 1;
				return Local_758[iParam0 /*17*/].f_14;
			}
		}
		else
		{
			if (MISC::IS_STRING_NULL(sParam2))
			{
				Local_758[iParam0 /*17*/] = ANIMSCENE::_CREATE_ANIM_SCENE(Local_758[iParam0 /*17*/].f_1, iParam1, Local_758[iParam0 /*17*/].f_15, false, true);
			}
			else
			{
				Local_758[iParam0 /*17*/] = ANIMSCENE::_CREATE_ANIM_SCENE(Local_758[iParam0 /*17*/].f_1, iParam1, sParam2, false, true);
			}
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_758[iParam0 /*17*/]))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(Local_758[iParam0 /*17*/]);
				func_1019(iParam0);
			}
		}
	}
	return Local_758[iParam0 /*17*/].f_14;
}

void func_599()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar1 = 0;
	iVar2 = ITEMSET::CREATE_ITEMSET(true);
	iVar3 = PROPSET::_GET_ENTITIES_FROM_PROPSET(iLocal_912, iVar2, joaat("P_CAMPFIRE03X"), true, false);
	iVar1 = 0;
	while (iVar1 < iVar3)
	{
		iVar0 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, iVar2);
		iLocal_913 = MISC::_GET_OBJECT_FROM_INDEXED_ITEM(iVar0);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_913))
		{
			ENTITY::_0x56E0735D6273B227(iLocal_913, 1);
		}
		iVar1++;
	}
}

void func_624(int iParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
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

void func_633(vector3 vParam0, float fParam3)
{
	if (iLocal_295 == 0)
	{
		func_1051();
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_295) && __LIB_0__::func_48(iLocal_295, Global_35, 250f, 1))
	{
		if (bLocal_742)
		{
			if (__LIB_5__::func_297(Global_1347702[144 /*49*/].f_15) == 0)
			{
				__LIB_7__::func_448(Global_1347702[144 /*49*/].f_15, 1);
			}
		}
		else if (__LIB_5__::func_297(Global_1347702[144 /*49*/].f_15) != 0)
		{
			__LIB_7__::func_448(Global_1347702[144 /*49*/].f_15, 0);
		}
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_295, vParam0, fParam3, true, false, true);
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iLocal_295, 48, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_295, true);
	}
	else if (__LIB_5__::func_297(Global_1347702[144 /*49*/].f_15) != 0)
	{
		__LIB_7__::func_448(Global_1347702[144 /*49*/].f_15, 0);
	}
}

void func_638(int iParam0, bool bParam1)
{
	if (iParam0 == 7)
	{
		iParam0 = __LIB_9__::func_844(0, 7, iLocal_754);
		if (bParam1)
		{
			if (iParam0 == iLocal_755)
			{
				iParam0 = __LIB_9__::func_844(0, 7, iLocal_755);
			}
		}
	}
	switch (iParam0)
	{
		case 0:
			GRAPHICS::SET_PARTICLE_FX_NON_LOOPED_COLOUR(0.396f, 0.768f, 0.945f);
			break;
		case 6:
			GRAPHICS::SET_PARTICLE_FX_NON_LOOPED_COLOUR(0.196f, 0.29f, 0.784f);
			break;
		case 5:
			GRAPHICS::SET_PARTICLE_FX_NON_LOOPED_COLOUR(0.968f, 0.094f, 0.211f);
			break;
		case 1:
			GRAPHICS::SET_PARTICLE_FX_NON_LOOPED_COLOUR(0.427f, 0.854f, 0.286f);
			break;
		case 2:
			GRAPHICS::SET_PARTICLE_FX_NON_LOOPED_COLOUR(0.972f, 0.529f, 0.803f);
			break;
		case 3:
			GRAPHICS::SET_PARTICLE_FX_NON_LOOPED_COLOUR(0.976f, 0.529f, 0.082f);
			break;
		case 4:
			GRAPHICS::SET_PARTICLE_FX_NON_LOOPED_COLOUR(0.831f, 0.247f, 0.972f);
			break;
	}
	iLocal_754 = iParam0;
}

void func_640()
{
	int iVar0;
	iVar0 = iLocal_19;
	iVar0++;
	iLocal_19 = iVar0;
	if (iLocal_19 == 16)
	{
		iLocal_19 = (iVar0 - 1);
	}
	__LIB_1__::func_561(&uLocal_689);
}

void func_641()
{
	if (iLocal_14 == 0)
	{
		__LIB_8__::func_774(Local_25[0 /*7*/], sLocal_282[0], 44);
	}
	else if (iLocal_14 == 2)
	{
		__LIB_8__::func_774(Local_25[0 /*7*/], sLocal_282[1], 0);
	}
	else if (iLocal_14 == 4)
	{
		__LIB_8__::func_774(Local_25[0 /*7*/], sLocal_282[1], 0);
		if (!__LIB_0__::func_27(iLocal_22, 512))
		{
			iLocal_19 = 7;
			__LIB_1__::func_683(&iLocal_22, 512);
		}
	}
	else if (iLocal_14 == 6)
	{
		__LIB_8__::func_774(Local_25[0 /*7*/], sLocal_282[1], 0);
	}
	else if (iLocal_14 == 8)
	{
		__LIB_8__::func_774(Local_25[0 /*7*/], sLocal_282[1], 0);
	}
	func_1058(0);
}

bool func_653(var uParam0, vector3 vParam1, float fParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_25[2 /*7*/]))
	{
		Local_25[2 /*7*/].f_2 = { 2707.39f, -23.40418f, 52.09755f };
		Local_25[2 /*7*/].f_5 = 262.7026f;
		Local_25[2 /*7*/].f_6 = joaat("CS_MISSMARJORIE");
		Local_25[2 /*7*/] = __LIB_12__::func_885(uParam0, Local_25[2 /*7*/].f_6, Local_25[2 /*7*/].f_2, Local_25[2 /*7*/].f_5, 1, 1, 0, 1, 1, 1, 1, 0);
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Local_25[1 /*7*/]))
	{
		Local_25[1 /*7*/].f_2 = { 2712.51f, -18.42828f, 51.00741f };
		Local_25[1 /*7*/].f_5 = 326.8904f;
		Local_25[1 /*7*/].f_6 = joaat("CS_ODDFELLOWSPINHEAD");
		Local_25[1 /*7*/] = __LIB_12__::func_885(uParam0, Local_25[1 /*7*/].f_6, Local_25[1 /*7*/].f_2, Local_25[1 /*7*/].f_5, 1, 1, 0, 1, 1, 1, 1, 0);
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_293))
	{
		iLocal_293 = VEHICLE::CREATE_VEHICLE(iLocal_294, vParam1, fParam4, true, true, false, false);
	}
	else if ((!ENTITY::IS_ENTITY_DEAD(Local_25[2 /*7*/]) && !ENTITY::IS_ENTITY_DEAD(Local_25[1 /*7*/])) && !ENTITY::IS_ENTITY_DEAD(iLocal_293))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_25[2 /*7*/], true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_25[1 /*7*/], true);
		__LIB_4__::func_185(&(Local_25[2 /*7*/]), &iLocal_293, -1, 1);
		__LIB_4__::func_185(&(Local_25[1 /*7*/]), &iLocal_293, 0, 1);
		return true;
	}
	return false;
}

void func_654(var uParam0)
{
	iLocal_17 = 1;
	StringCopy(&(uParam0->f_2575), "RODDF_S2_EXT", 24);
	__LIB_12__::func_779(uParam0, 2680.706f, -57.3647f, 49.24726f);
	__LIB_12__::func_957(uParam0, Local_25[0 /*7*/], "cs_magnifico", 0, 0, 0);
	__LIB_12__::func_957(uParam0, Local_25[2 /*7*/], "MissMarjorie", 0, 0, 0);
	__LIB_12__::func_957(uParam0, Local_25[1 /*7*/], "OddFellowsPinHead", 0, 0, 0);
	__LIB_12__::func_957(uParam0, iLocal_293, "wagonTraveller01x", 0, 0, 0);
	__LIB_12__::func_957(uParam0, Global_35, 0, 0, 0, 0);
	__LIB_13__::func_16(uParam0, 164770);
	__LIB_12__::func_981(uParam0, 164778);
	__LIB_12__::func_909(&(uParam0->f_206));
	__LIB_0__::func_7(&(uParam0->f_172), 16);
}

void func_680(var uParam0)
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
		func_1099(&(uParam0->f_404), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_12__::func_706(uParam0, 0f, 0f, 0f);
		func_1101(uParam0);
		func_1102(uParam0);
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

void func_725()
{
	if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_25[0 /*7*/], 0))
	{
		if (iLocal_19 == 15)
		{
			if (__LIB_0__::func_266(Local_25[0 /*7*/], Local_79[15 /*11*/], 7f, 1, 1))
			{
				TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_25[0 /*7*/], 1.5f, 0, -1082130432 /* Float: -1f */, 0);
				PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_25[0 /*7*/], 1.5f);
			}
			else
			{
				TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_25[0 /*7*/], 2f, 0, -1082130432 /* Float: -1f */, 0);
				PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_25[0 /*7*/], 2f);
			}
		}
		else
		{
			TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_25[0 /*7*/], 2f, 0, -1082130432 /* Float: -1f */, 0);
			PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_25[0 /*7*/], 2f);
		}
	}
}

void func_726(var uParam0)
{
	if (iLocal_19 == 15)
	{
		if (!__LIB_14__::func_165(131072))
		{
			if (__LIB_9__::func_178(&uLocal_710) > 2f)
			{
				if (func_419(1, func_193(7)))
				{
					__LIB_12__::func_876(uParam0, "RODDF_S2_IG7_SB", 0);
					__LIB_14__::func_168(131072);
					__LIB_2__::func_259(&uLocal_710);
				}
			}
		}
		else if (!__LIB_14__::func_165(262144))
		{
			if (__LIB_9__::func_178(&uLocal_710) > 15f)
			{
				if (func_419(1, func_193(8)))
				{
					__LIB_14__::func_168(262144);
					__LIB_2__::func_259(&uLocal_710);
				}
			}
		}
		else if (!__LIB_14__::func_165(524288))
		{
			if (__LIB_9__::func_178(&uLocal_710) > 15f)
			{
				if (func_419(1, func_193(9)))
				{
					__LIB_14__::func_168(524288);
					__LIB_2__::func_259(&uLocal_710);
				}
			}
		}
	}
}

void func_730(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (!Local_341[iVar0 /*10*/].f_3)
		{
			if (func_1170(uParam0))
			{
				if (!__LIB_6__::func_904() && __LIB_0__::func_48(Local_25[0 /*7*/], Global_35, 25f, 1))
				{
				}
				if (func_1172(uParam0, &(Local_341[iVar0 /*10*/])))
				{
					if (!ENTITY::IS_ENTITY_VISIBLE(Local_25[0 /*7*/]))
					{
						func_306(256);
						func_306(2048);
					}
					if (__LIB_14__::func_166(16384))
					{
						if (iLocal_19 == 4)
						{
							func_640();
						}
						func_306(16384);
					}
					if (__LIB_14__::func_166(2048))
					{
						func_640();
					}
				}
			}
		}
		iVar0++;
	}
}

void func_731(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (__LIB_0__::func_899(&(Local_341[iVar0 /*10*/].f_5)))
		{
			Local_341[iVar0 /*10*/].f_8 = __LIB_1__::func_592(&(Local_341[iVar0 /*10*/].f_5));
			if (!Local_341[iVar0 /*10*/].f_4)
			{
				if (Local_341[iVar0 /*10*/].f_8 >= 50)
				{
					func_1173(uParam0);
					iLocal_735 = 5;
					ENTITY::SET_ENTITY_ALPHA(Local_25[0 /*7*/], iLocal_735, false);
					Local_341[iVar0 /*10*/].f_4 = 1;
				}
				else
				{
					iLocal_735 = (iLocal_735 - 80);
					if (iLocal_735 <= 0)
					{
						iLocal_735 = 0;
					}
					ENTITY::SET_ENTITY_ALPHA(Local_25[0 /*7*/], iLocal_735, false);
				}
			}
			else if (Local_341[iVar0 /*10*/].f_8 >= 2500)
			{
				__LIB_0__::func_172(Local_341[iVar0 /*10*/].f_9);
				bLocal_679 = true;
				if (bLocal_679)
				{
				}
				__LIB_1__::func_561(&(Local_341[iVar0 /*10*/].f_5));
			}
			else if (Local_341[iVar0 /*10*/].f_8 >= 50)
			{
				if (iLocal_735 != 255)
				{
					iLocal_735 += 40;
					if (iLocal_735 >= 255)
					{
						iLocal_735 = 255;
					}
					ENTITY::SET_ENTITY_ALPHA(Local_25[0 /*7*/], iLocal_735, false);
				}
			}
		}
		if (VOLUME::_DOES_VOLUME_EXIST(Local_341[iVar0 /*10*/].f_9))
		{
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_341[iVar0 /*10*/].f_9, true, 0) && Local_341[iVar0 /*10*/].f_8 < 2500)
			{
				if (!EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_BEAT_SURPRISING"), Local_341[iVar0 /*10*/], 8f))
				{
					EVENT::ADD_SHOCKING_EVENT_AT_POSITION(joaat("EVENT_SHOCKING_BEAT_SURPRISING"), Local_341[iVar0 /*10*/], -1f, 30f, 40f, -1f, -1f, -1, -1);
				}
				if (!bLocal_680)
				{
					bLocal_680 = true;
				}
			}
		}
		iVar0++;
	}
	if (bLocal_680)
	{
		bLocal_680 = func_747(uParam0);
	}
}

void func_732(var uParam0)
{
	if (!ENTITY::IS_ENTITY_VISIBLE(Local_25[0 /*7*/]))
	{
		if (!__LIB_0__::func_899(&uLocal_689))
		{
			__LIB_2__::func_259(&uLocal_689);
		}
		else if (__LIB_9__::func_178(&uLocal_689) > func_1174())
		{
			if (__LIB_14__::func_166(4096))
			{
				if (__LIB_9__::func_178(&uLocal_689) > 6f || ENTITY::IS_ENTITY_IN_WATER(Global_35))
				{
					func_305(256);
					__LIB_1__::func_561(&uLocal_689);
				}
			}
			else if (__LIB_0__::func_27(iLocal_22, 1))
			{
				if (__LIB_0__::func_27(iLocal_22, 128))
				{
					func_305(256);
					__LIB_1__::func_561(&uLocal_689);
				}
			}
			else if (__LIB_14__::func_166(32768))
			{
				if (!__LIB_0__::func_27(iLocal_23, 262144))
				{
					if (__LIB_9__::func_178(&uLocal_689) > 10f)
					{
						if (__LIB_14__::func_165(256))
						{
							if (!__LIB_0__::func_899(&uLocal_695))
							{
								__LIB_2__::func_259(&uLocal_695);
							}
							else if (__LIB_9__::func_178(&uLocal_695) > 45f)
							{
								func_638(7, 0);
								if (GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_river5_magician_smoke", 2542.791f, -14.60734f, 48.54725f, 0f, 0f, 0f, 1f, false, false, false))
								{
									CAM::SHAKE_GAMEPLAY_CAM("SMALL_EXPLOSION_SHAKE", 0.01f);
									func_305(256);
									__LIB_1__::func_561(&uLocal_689);
									__LIB_1__::func_561(&uLocal_692);
									__LIB_1__::func_561(&uLocal_695);
								}
							}
						}
						if (((__LIB_14__::func_165(256) && !CAM::IS_SPHERE_VISIBLE(Local_79[8 /*11*/], 5f)) && !__LIB_6__::func_903("RODF2_CLEAR_J")) && !__LIB_6__::func_903("RODF2_CLEAR_A"))
						{
							if (!__LIB_0__::func_899(&uLocal_692))
							{
								__LIB_2__::func_259(&uLocal_692);
							}
							else if (__LIB_9__::func_178(&uLocal_692) > 2f && CAM::IS_SPHERE_VISIBLE(2576.647f, -60.70025f, 55.06179f, 20f))
							{
								func_305(256);
								__LIB_1__::func_561(&uLocal_689);
								__LIB_1__::func_561(&uLocal_692);
								__LIB_1__::func_561(&uLocal_695);
							}
						}
						else if (__LIB_0__::func_899(&uLocal_692))
						{
							__LIB_1__::func_561(&uLocal_692);
						}
					}
				}
			}
			else if (__LIB_14__::func_166(524288))
			{
				if (__LIB_9__::func_178(&uLocal_689) > 4f)
				{
					if (CAM::IS_SPHERE_VISIBLE(Local_79[14 /*11*/], 5f))
					{
						func_305(256);
						__LIB_1__::func_561(&uLocal_689);
					}
				}
			}
			else
			{
				func_305(256);
				__LIB_1__::func_561(&uLocal_689);
			}
		}
	}
}

void func_733()
{
	if (!MAP::DOES_BLIP_EXIST(Local_25[0 /*7*/].f_1))
	{
		if (!ENTITY::IS_ENTITY_OCCLUDED(Local_25[0 /*7*/]) && ENTITY::IS_ENTITY_VISIBLE(Local_25[0 /*7*/]))
		{
			Local_25[0 /*7*/].f_1 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_COMPANION"), Local_25[0 /*7*/]);
			MAP::_BLIP_SET_MODIFIER(Local_25[0 /*7*/].f_1, -546708623);
			MAP::_BLIP_SET_MODIFIER(Local_25[0 /*7*/].f_1, 231194138);
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_25[0 /*7*/].f_1, "RODDF_BLIP_M");
		}
	}
}

void func_734(var uParam0)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	if (!__LIB_0__::func_27(iLocal_24, 1))
	{
		if (!__LIB_0__::func_899(&uLocal_719))
		{
			__LIB_2__::func_259(&uLocal_719);
		}
		else if (__LIB_9__::func_178(&uLocal_719) > 0f)
		{
			if (__LIB_0__::func_181())
			{
				sVar0 = "RODF2_START_J";
			}
			else
			{
				sVar0 = "RODF2_START";
			}
			func_748();
			if (__LIB_12__::func_876(uParam0, sVar0, 0))
			{
				__LIB_1__::func_561(&uLocal_719);
				__LIB_1__::func_683(&iLocal_24, 1);
			}
		}
	}
	else if (!__LIB_0__::func_27(iLocal_24, 2))
	{
		if (iLocal_19 >= 2)
		{
			if (!__LIB_0__::func_899(&uLocal_719))
			{
				__LIB_2__::func_259(&uLocal_719);
			}
			else if (__LIB_9__::func_178(&uLocal_719) > 1.5f)
			{
				if (__LIB_0__::func_181())
				{
					sVar1 = "RODF2_VANISH1_J";
				}
				else
				{
					sVar1 = "RODF2_VANISH1_A";
				}
				func_748();
				if (__LIB_12__::func_876(uParam0, sVar1, 0))
				{
					__LIB_1__::func_561(&uLocal_719);
					__LIB_1__::func_683(&iLocal_24, 2);
				}
			}
		}
	}
	else if (!__LIB_0__::func_27(iLocal_24, 4))
	{
		if (iLocal_19 >= 3)
		{
			if (!__LIB_0__::func_899(&uLocal_719))
			{
				__LIB_2__::func_259(&uLocal_719);
			}
			else if (__LIB_9__::func_178(&uLocal_719) > 1f)
			{
				if (__LIB_0__::func_181())
				{
					sVar2 = "RODF2_PLYCMT_J";
				}
				else
				{
					sVar2 = "RODF2_PLYCMT";
				}
				func_748();
				if (__LIB_12__::func_876(uParam0, sVar2, 0))
				{
					__LIB_1__::func_561(&uLocal_719);
					__LIB_1__::func_683(&iLocal_24, 4);
				}
			}
		}
	}
	else if (!__LIB_0__::func_27(iLocal_24, 8))
	{
		if (iLocal_19 >= 4)
		{
			if (!__LIB_0__::func_899(&uLocal_719))
			{
				__LIB_2__::func_259(&uLocal_719);
			}
			else if (__LIB_9__::func_178(&uLocal_719) > 1f)
			{
				if (__LIB_0__::func_181())
				{
					sVar3 = "RODF2_PLYCMT_J";
				}
				else
				{
					sVar3 = "RODF2_PLYCMT";
				}
				func_748();
				if (__LIB_12__::func_876(uParam0, sVar3, 0))
				{
					__LIB_1__::func_561(&uLocal_719);
					__LIB_1__::func_683(&iLocal_24, 8);
				}
			}
		}
	}
}

void func_735(var uParam0)
{
	char* sVar0;
	char* sVar1;
	if (!__LIB_0__::func_27(iLocal_24, 64))
	{
		if (!__LIB_0__::func_899(&uLocal_719))
		{
			__LIB_2__::func_259(&uLocal_719);
		}
		else if (__LIB_9__::func_178(&uLocal_719) > 1f)
		{
			if (__LIB_0__::func_181())
			{
				sVar0 = "RODF2_ONROCK_J";
			}
			else
			{
				sVar0 = "RODF2_ONROCK_A";
			}
			func_748();
			if (__LIB_12__::func_876(uParam0, sVar0, 0))
			{
				__LIB_1__::func_561(&uLocal_719);
				__LIB_1__::func_683(&iLocal_24, 64);
			}
		}
	}
	else if (!__LIB_0__::func_27(iLocal_24, 16))
	{
		if (!__LIB_0__::func_899(&uLocal_719))
		{
			__LIB_2__::func_259(&uLocal_719);
		}
		else if (__LIB_9__::func_178(&uLocal_719) > 6f)
		{
			if (__LIB_0__::func_181())
			{
				sVar1 = "RODF2_PLYCMT_J";
			}
			else
			{
				sVar1 = "RODF2_PLYCMT";
			}
			func_748();
			if (__LIB_12__::func_876(uParam0, sVar1, 0))
			{
				__LIB_1__::func_561(&uLocal_719);
				__LIB_1__::func_683(&iLocal_24, 16);
			}
		}
	}
}

char* func_736(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "dlg_ill_be_on_top_of_the_bill_02";
		case 1:
			return "dlg_im_going_in_alone_01";
		case 2:
			return "dlg_steak_dinners_for_magnifico_03";
	}
	return "";
}

void func_740(var uParam0, bool bParam1)
{
	if (!Local_79[iLocal_19 /*11*/].f_10)
	{
		if (__LIB_0__::func_266(Local_25[0 /*7*/], Local_79[iLocal_19 /*11*/], Local_79[iLocal_19 /*11*/].f_9, 1, 1) || bParam1)
		{
			if (ENTITY::IS_ENTITY_VISIBLE(Local_25[0 /*7*/]) || bParam1)
			{
				if (!__LIB_6__::func_903("RODDF_S2_IG2"))
				{
					if (__LIB_6__::func_903("RODDF_S2_IG4_A"))
					{
						__LIB_6__::func_900("RODDF_S2_IG4_A", 0, 0);
					}
					if (__LIB_6__::func_903("RODDF_S2_IG4_B"))
					{
						__LIB_6__::func_900("RODDF_S2_IG4_B", 0, 0);
					}
					if (__LIB_6__::func_903("RODDF_S2_IG4_C"))
					{
						__LIB_6__::func_900("RODDF_S2_IG4_C", 0, 0);
					}
					if (__LIB_12__::func_876(uParam0, "RODDF_S2_IG2", 0))
					{
						Local_79[iLocal_19 /*11*/].f_10 = 1;
					}
				}
			}
		}
	}
}

void func_742(var uParam0)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	if (!__LIB_14__::func_165(33554432))
	{
		if (!__LIB_0__::func_899(&uLocal_719))
		{
			__LIB_2__::func_259(&uLocal_719);
		}
		else if (__LIB_9__::func_178(&uLocal_719) > 2.5f)
		{
			func_748();
			if (__LIB_0__::func_181())
			{
				if (__LIB_12__::func_876(uParam0, "RODF2_VANISH2_J", 0))
				{
					__LIB_14__::func_168(33554432);
					__LIB_1__::func_561(&uLocal_719);
				}
			}
			else if (__LIB_12__::func_876(uParam0, "RODF2_VANISH2_A", 0))
			{
				__LIB_14__::func_168(33554432);
				__LIB_1__::func_561(&uLocal_719);
			}
		}
	}
	else if (!__LIB_0__::func_27(iLocal_24, 128))
	{
		if (!__LIB_0__::func_899(&uLocal_719))
		{
			__LIB_2__::func_259(&uLocal_719);
		}
		else if (__LIB_9__::func_178(&uLocal_719) > 6f || !ENTITY::IS_ENTITY_IN_WATER(Global_35))
		{
			if (__LIB_0__::func_181())
			{
				sVar0 = "RODF2_RIVER_J";
			}
			else
			{
				sVar0 = "RODF2_RIVER_A";
			}
			func_748();
			if (__LIB_12__::func_876(uParam0, sVar0, 0))
			{
				__LIB_1__::func_561(&uLocal_719);
				__LIB_1__::func_683(&iLocal_24, 128);
			}
		}
	}
	else if (!__LIB_0__::func_27(iLocal_24, 256))
	{
		if (iLocal_14 == 3)
		{
			if (!__LIB_0__::func_899(&uLocal_719))
			{
				__LIB_2__::func_259(&uLocal_719);
			}
			else if (__LIB_9__::func_178(&uLocal_719) > 3f)
			{
				if (__LIB_0__::func_181())
				{
					sVar1 = "RODF2_VANISH3_J";
				}
				else
				{
					sVar1 = "RODF2_VANISH3_A";
				}
				func_748();
				if (__LIB_12__::func_876(uParam0, sVar1, 0))
				{
					__LIB_1__::func_561(&uLocal_719);
					__LIB_1__::func_683(&iLocal_24, 256);
				}
			}
		}
	}
	else if (!__LIB_0__::func_27(iLocal_24, 512))
	{
		if (iLocal_734 == 1)
		{
			if (!__LIB_0__::func_899(&uLocal_719))
			{
				__LIB_2__::func_259(&uLocal_719);
			}
			else if (__LIB_9__::func_178(&uLocal_719) > 1f)
			{
				if (__LIB_6__::func_903("RODF2_VANISH3_A"))
				{
					__LIB_6__::func_900("RODF2_VANISH3_A", 1, 0);
				}
				else if (__LIB_6__::func_903("RODF2_VANISH3_J"))
				{
					__LIB_6__::func_900("RODF2_VANISH3_A", 1, 0);
				}
				else
				{
					if (__LIB_0__::func_181())
					{
						sVar2 = "RODF2_CLOUD_J";
					}
					else
					{
						sVar2 = "RODF2_CLOUD_A";
					}
					func_748();
					if (__LIB_12__::func_876(uParam0, sVar2, 0))
					{
						__LIB_1__::func_561(&uLocal_719);
						__LIB_1__::func_683(&iLocal_24, 512);
					}
				}
			}
		}
	}
	else if (!__LIB_0__::func_27(iLocal_24, 1024))
	{
		if (iLocal_734 == 2)
		{
			if (!__LIB_0__::func_899(&uLocal_719))
			{
				__LIB_2__::func_259(&uLocal_719);
			}
			else if (__LIB_9__::func_178(&uLocal_719) > 1f)
			{
				if (__LIB_0__::func_181())
				{
					sVar3 = "RODF2_CLOUD_J";
				}
				else
				{
					sVar3 = "RODF2_CLOUD_A";
				}
				func_748();
				if (__LIB_12__::func_876(uParam0, sVar3, 0))
				{
					__LIB_1__::func_561(&uLocal_719);
					__LIB_1__::func_683(&iLocal_24, 1024);
				}
			}
		}
	}
	else if (!__LIB_0__::func_27(iLocal_24, 2048))
	{
		if (iLocal_734 == 3 && ENTITY::IS_ENTITY_ON_SCREEN(Local_25[0 /*7*/]))
		{
			if (!__LIB_0__::func_899(&uLocal_719))
			{
				__LIB_2__::func_259(&uLocal_719);
			}
			else if (__LIB_9__::func_178(&uLocal_719) > 3f)
			{
				if (__LIB_0__::func_181())
				{
					sVar4 = "RODF2_ELSE_J";
				}
				else
				{
					sVar4 = "RODF2_ELSE_A";
				}
				func_748();
				if (__LIB_12__::func_876(uParam0, sVar4, 0))
				{
					__LIB_1__::func_561(&uLocal_719);
					__LIB_1__::func_683(&iLocal_24, 2048);
				}
			}
		}
	}
}

void func_743(var uParam0)
{
	if (!__LIB_14__::func_166(16777216))
	{
		if (func_1178(uParam0))
		{
			func_1179();
			func_305(16777216);
		}
	}
	else if (!__LIB_14__::func_166(33554432))
	{
		if (((__LIB_0__::func_48(Local_25[0 /*7*/], Local_47[0 /*6*/], 12f, 0) || __LIB_0__::func_48(Global_35, Local_47[0 /*6*/], 10f, 0)) || MISC::IS_BULLET_IN_AREA(Local_79[8 /*11*/], 40f, true)) || iLocal_19 > 8)
		{
			func_1180();
		}
	}
}

void func_744()
{
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_748))
	{
		if (fLocal_751 > 0f)
		{
			if (fLocal_751 <= 1f)
			{
				fLocal_751 = (fLocal_751 + 0.1f);
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iLocal_748, "FadeOut", fLocal_751, false);
			}
			else
			{
				GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_748, false);
			}
		}
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_749))
	{
		if (fLocal_752 > 0f)
		{
			if (fLocal_752 <= 1f)
			{
				fLocal_752 = (fLocal_752 + 0.1f);
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iLocal_749, "FadeOut", fLocal_752, false);
			}
			else
			{
				GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_749, false);
			}
		}
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_750))
	{
		if (fLocal_753 > 0f)
		{
			if (fLocal_753 <= 1f)
			{
				fLocal_753 = (fLocal_753 + 0.1f);
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iLocal_750, "FadeOut", fLocal_753, false);
			}
			else
			{
				GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_750, false);
			}
		}
	}
}

void func_746(int iParam0, int iParam1)
{
	if (iParam1 == 7)
	{
		iParam1 = __LIB_9__::func_844(0, 7, iLocal_754);
	}
	switch (iParam1)
	{
		case 0:
			GRAPHICS::SET_PARTICLE_FX_LOOPED_COLOUR(iParam0, 0.396f, 0.768f, 0.945f, false);
			break;
		case 6:
			GRAPHICS::SET_PARTICLE_FX_LOOPED_COLOUR(iParam0, 0.196f, 0.29f, 0.784f, false);
			break;
		case 5:
			GRAPHICS::SET_PARTICLE_FX_LOOPED_COLOUR(iParam0, 0.968f, 0.094f, 0.211f, false);
			break;
		case 1:
			GRAPHICS::SET_PARTICLE_FX_LOOPED_COLOUR(iParam0, 0.427f, 0.854f, 0.286f, false);
			break;
		case 2:
			GRAPHICS::SET_PARTICLE_FX_LOOPED_COLOUR(iParam0, 0.972f, 0.529f, 0.803f, false);
			break;
		case 3:
			GRAPHICS::SET_PARTICLE_FX_LOOPED_COLOUR(iParam0, 0.976f, 0.529f, 0.082f, false);
			break;
		case 4:
			GRAPHICS::SET_PARTICLE_FX_LOOPED_COLOUR(iParam0, 0.831f, 0.247f, 0.972f, false);
			break;
	}
}

int func_747(var uParam0)
{
	float fVar0;
	float fVar1;
	char* sVar2;
	fVar0 = TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35);
	fVar1 = 2.5f;
	if (__LIB_0__::func_899(&uLocal_686))
	{
		if (__LIB_1__::func_592(&uLocal_686) < 3000)
		{
			iLocal_683 = 0;
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
			if (fVar0 > 2.1f)
			{
				fVar1 = (fVar0 - 0.1f);
			}
			else
			{
				fVar1 = fVar0;
			}
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35, fVar1);
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.8f);
			return 1;
		}
		else
		{
			__LIB_1__::func_561(&uLocal_686);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), true);
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), true);
			return 0;
		}
	}
	if (iLocal_738 == 0)
	{
		if (!__LIB_0__::func_181())
		{
			sVar2 = "RODDF_S_IG3_C1A";
		}
		else
		{
			sVar2 = "RODDF_2_IG3_C3J";
		}
	}
	else if (iLocal_738 == 1)
	{
		if (!__LIB_0__::func_181())
		{
			sVar2 = "RODDF_S_IG3_C2A";
		}
		else
		{
			sVar2 = "RODDF_2_IG3_C4J";
		}
	}
	else if (iLocal_738 == 2)
	{
		if (!__LIB_0__::func_181())
		{
			sVar2 = "RODDF_S_IG3_C3A";
		}
		else
		{
			sVar2 = "RODDF_2_IG3_C5J";
		}
	}
	if (!__LIB_6__::func_904() && iLocal_14 != 3)
	{
		if (__LIB_12__::func_876(uParam0, sVar2, 0))
		{
			if (iLocal_738 == 0)
			{
				iLocal_738++;
			}
			else if (iLocal_738 == 1)
			{
				iLocal_738++;
			}
			else if (iLocal_738 == 2)
			{
				iLocal_738 = 0;
			}
		}
	}
	__LIB_2__::func_259(&uLocal_686);
	return 1;
}

void func_748()
{
	if (__LIB_6__::func_903("RODDF_S_IG3_C1A"))
	{
		__LIB_6__::func_900("RODDF_S_IG3_C1A", 0, 0);
	}
	if (__LIB_6__::func_903("RODDF_S_IG3_C2A"))
	{
		__LIB_6__::func_900("RODDF_S_IG3_C2A", 0, 0);
	}
	if (__LIB_6__::func_903("RODDF_S_IG3_C3A"))
	{
		__LIB_6__::func_900("RODDF_S_IG3_C3A", 0, 0);
	}
	if (__LIB_6__::func_903("RODDF_2_IG3_C3J"))
	{
		__LIB_6__::func_900("RODDF_2_IG3_C3J", 0, 0);
	}
	if (__LIB_6__::func_903("RODDF_2_IG3_C4J"))
	{
		__LIB_6__::func_900("RODDF_2_IG3_C4J", 0, 0);
	}
	if (__LIB_6__::func_903("RODDF_2_IG3_C5J"))
	{
		__LIB_6__::func_900("RODDF_2_IG3_C5J", 0, 0);
	}
}

bool func_753(var uParam0)
{
	if (!func_1188())
	{
		return false;
	}
	func_597(3, 4, func_193(30));
	func_597(5, 0, func_193(43));
	if (!__LIB_0__::func_27(iLocal_23, 1))
	{
		if (ENTITY::IS_ENTITY_VISIBLE(Local_25[0 /*7*/]))
		{
			__LIB_1__::func_683(&iLocal_23, 1);
		}
	}
	else
	{
		TASK::TASK_LOOK_AT_ENTITY(Global_35, Local_25[0 /*7*/], 500, 0, 51, 0);
		func_1189(uParam0);
	}
	if (!__LIB_0__::func_27(iLocal_23, 1024))
	{
		if (__LIB_0__::func_48(Global_35, Local_25[0 /*7*/], 5f, 1) && __LIB_14__::func_166(262144))
		{
			if (!__LIB_0__::func_27(iLocal_23, 2097152))
			{
				if (__LIB_0__::func_153(Global_35, 0, 0, 0) != joaat("WEAPON_UNARMED") || __LIB_0__::func_153(Global_35, 1, 0, 0) != joaat("WEAPON_UNARMED"))
				{
					WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 1, 0);
				}
				__LIB_1__::func_683(&iLocal_23, 2097152);
				func_1191(0);
			}
			else if (func_597(4, 4, func_193(39)))
			{
				PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
				PLAYER::_0x3946FC742AC305CD(PLAYER::GET_PLAYER_INDEX(), Local_25[0 /*7*/], "RC_ODDFELLOWS2", 2542.791f, -14.72161f, 48.70177f, 0, "RODDF");
				__LIB_1__::func_683(&iLocal_23, 1024);
				__LIB_1__::func_683(&iLocal_23, 2);
				__LIB_1__::func_683(&iLocal_23, 4);
				__LIB_1__::func_683(&iLocal_23, 8);
				__LIB_1__::func_683(&iLocal_23, 16);
				__LIB_1__::func_683(&iLocal_23, 32);
				__LIB_1__::func_683(&iLocal_23, 64);
				__LIB_1__::func_683(&iLocal_23, 64);
				__LIB_1__::func_683(&iLocal_23, 128);
				__LIB_1__::func_683(&iLocal_23, 256);
				__LIB_1__::func_683(&iLocal_23, 512);
				__LIB_1__::func_683(&iLocal_23, 16777216);
				__LIB_1__::func_561(&uLocal_716);
			}
			func_1191(0);
		}
	}
	else if (!__LIB_0__::func_27(iLocal_23, 16384))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_758[4 /*17*/], false))
		{
			func_597(6, 0, func_193(40));
		}
		func_1191(0);
		if (ANIMSCENE::_0xF94692EB9DC15D74(Local_758[4 /*17*/], 0))
		{
			if (func_597(6, 0, func_193(40)))
			{
				PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "RODDF");
				ANIMSCENE::START_ANIM_SCENE(Local_758[6 /*17*/]);
				CAM::SHAKE_GAMEPLAY_CAM("SMALL_EXPLOSION_SHAKE", 0.01f);
				__LIB_1__::func_683(&iLocal_23, 16384);
			}
		}
	}
	else if (!__LIB_0__::func_27(iLocal_23, 1048576))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_758[6 /*17*/], false))
		{
			func_1191(1);
		}
		else if (ANIMSCENE::_0xF94692EB9DC15D74(Local_758[6 /*17*/], 0))
		{
			if (!__LIB_0__::func_27(iLocal_23, 1048576))
			{
				PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "RODDF");
				__LIB_1__::func_683(&iLocal_23, 1048576);
			}
			func_1191(0);
		}
		else
		{
			func_1191(0);
		}
	}
	else
	{
		func_1191(0);
	}
	if (__LIB_0__::func_27(iLocal_23, 1024))
	{
		if (!__LIB_0__::func_27(iLocal_23, 2048))
		{
			if (func_419(3, func_193(30)))
			{
				__LIB_1__::func_683(&iLocal_23, 2048);
				__LIB_2__::func_259(&uLocal_692);
			}
		}
		else if (!__LIB_0__::func_27(iLocal_23, 4096))
		{
			if (__LIB_9__::func_178(&uLocal_692) > 7.5f)
			{
				if (func_419(3, func_193(31)))
				{
					__LIB_2__::func_259(&uLocal_692);
					__LIB_1__::func_683(&iLocal_23, 4096);
				}
			}
		}
		else if (!__LIB_0__::func_27(iLocal_23, 8192))
		{
			if (__LIB_9__::func_178(&uLocal_692) > 5.5f)
			{
				if (func_419(3, func_1192()))
				{
					__LIB_2__::func_259(&uLocal_692);
					__LIB_1__::func_683(&iLocal_23, 8192);
				}
			}
		}
		else if (!__LIB_0__::func_27(iLocal_23, 33554432))
		{
			if (ANIMSCENE::_0xB89FCFF19DAFFF28(Local_758[3 /*17*/], "s_firework01x"))
			{
				if (func_597(5, 0, func_193(43)))
				{
					ENTITY::SET_ENTITY_ROTATION(Local_256[1 /*6*/], 0f, 0f, 1f, 2, true);
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_758[5 /*17*/], ENTITY::GET_ENTITY_COORDS(Local_256[1 /*6*/], true, false), ENTITY::GET_ENTITY_ROTATION(Local_256[1 /*6*/], 2), 2);
					ANIMSCENE::START_ANIM_SCENE(Local_758[5 /*17*/]);
					__LIB_2__::func_259(&uLocal_692);
					__LIB_1__::func_683(&iLocal_23, 33554432);
				}
			}
		}
		else if (!__LIB_0__::func_27(iLocal_23, 32768))
		{
			if (__LIB_9__::func_178(&uLocal_692) > 0.1f)
			{
				if (func_419(3, func_193(19)))
				{
					__LIB_2__::func_259(&uLocal_692);
					__LIB_1__::func_683(&iLocal_23, 32768);
				}
			}
		}
		else if (!__LIB_0__::func_27(iLocal_23, 65536))
		{
			if (__LIB_9__::func_178(&uLocal_692) > 2f)
			{
				if (func_419(3, func_193(38)))
				{
					__LIB_2__::func_259(&uLocal_692);
					__LIB_1__::func_683(&iLocal_23, 65536);
				}
			}
		}
		else if (!__LIB_0__::func_27(iLocal_23, 131072))
		{
			if (__LIB_9__::func_178(&uLocal_692) > 2.1f)
			{
				func_638(7, 0);
				if (GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_river5_magician_smoke", 2542.791f, -14.60734f, 48.54725f, 0f, 0f, 0f, 1f, false, false, false))
				{
					CAM::SHAKE_GAMEPLAY_CAM("SMALL_EXPLOSION_SHAKE", 0.01f);
					__LIB_2__::func_259(&uLocal_692);
					if (MAP::DOES_BLIP_EXIST(Local_25[0 /*7*/].f_1))
					{
						MAP::_BLIP_SET_MODIFIER(Local_25[0 /*7*/].f_1, -1269631044);
					}
					iLocal_735 = 255;
					__LIB_1__::func_683(&iLocal_23, 131072);
				}
			}
		}
		else if (!__LIB_0__::func_27(iLocal_23, 262144))
		{
			if (__LIB_13__::func_34(&uLocal_692) >= 200)
			{
				ENTITY::SET_ENTITY_VISIBLE(Local_25[0 /*7*/], false);
				iLocal_735 = 255;
				ENTITY::SET_ENTITY_ALPHA(Local_25[0 /*7*/], iLocal_735, false);
				__LIB_2__::func_259(&uLocal_692);
				__LIB_1__::func_683(&iLocal_23, 262144);
			}
			else
			{
				iLocal_735 = (iLocal_735 - 80);
				if (iLocal_735 <= 0)
				{
					iLocal_735 = 0;
				}
				ENTITY::SET_ENTITY_ALPHA(Local_25[0 /*7*/], iLocal_735, false);
			}
		}
		else if (!__LIB_0__::func_27(iLocal_23, 524288))
		{
			func_597(7, 0, func_193(41));
			if (__LIB_9__::func_178(&uLocal_692) > 2f)
			{
				if (func_597(7, 0, func_193(41)))
				{
					ANIMSCENE::START_ANIM_SCENE(Local_758[7 /*17*/]);
					if (__LIB_0__::func_181())
					{
						__LIB_12__::func_876(uParam0, "RODDF_S2_IG5_WJ", 0);
					}
					else
					{
						__LIB_12__::func_876(uParam0, "RODDF_S2_IG5_WA", 0);
					}
					__LIB_2__::func_259(&uLocal_692);
					__LIB_1__::func_683(&iLocal_23, 524288);
				}
			}
		}
		else if (__LIB_9__::func_178(&uLocal_692) > 2f)
		{
			__LIB_2__::func_259(&uLocal_692);
			return true;
		}
	}
	return false;
}

void func_754(var uParam0)
{
	func_1194(uParam0);
	if (__LIB_0__::func_899(&uLocal_707))
	{
		if (__LIB_9__::func_178(&uLocal_707) > 12.1f)
		{
			func_1195(5);
		}
		else if (__LIB_9__::func_178(&uLocal_707) > 12f)
		{
			func_1195(4);
		}
		else if (__LIB_9__::func_178(&uLocal_707) > 10.1f)
		{
			func_1195(3);
		}
		else if (__LIB_9__::func_178(&uLocal_707) > 10f)
		{
			func_1195(2);
		}
		else if (__LIB_9__::func_178(&uLocal_707) > 3.1f)
		{
			func_1195(1);
		}
		else if (__LIB_9__::func_178(&uLocal_707) > 3f)
		{
			func_1195(0);
		}
	}
}

void func_755(var uParam0)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	if (!__LIB_0__::func_27(iLocal_23, 4194304))
	{
		if (__LIB_9__::func_178(&uLocal_692) > 1.5f)
		{
			if (func_597(8, 4, func_193(42)))
			{
				__LIB_1__::func_683(&iLocal_23, 4194304);
				__LIB_1__::func_561(&uLocal_692);
			}
		}
	}
	else if (!__LIB_0__::func_27(iLocal_24, 8192))
	{
		if (!__LIB_0__::func_899(&uLocal_719))
		{
			__LIB_2__::func_259(&uLocal_719);
		}
		else if (__LIB_9__::func_178(&uLocal_719) > 5f)
		{
			if (__LIB_0__::func_181())
			{
				sVar0 = "RODF2_CHASE_J";
			}
			else
			{
				sVar0 = "RODF2_CHASE_A";
			}
			func_748();
			if (__LIB_12__::func_876(uParam0, sVar0, 0))
			{
				__LIB_1__::func_561(&uLocal_719);
				__LIB_1__::func_683(&iLocal_24, 8192);
			}
		}
	}
	else if (!__LIB_0__::func_27(iLocal_24, 16384))
	{
		if (!__LIB_0__::func_899(&uLocal_719))
		{
			__LIB_2__::func_259(&uLocal_719);
		}
		else if (__LIB_9__::func_178(&uLocal_719) > 5f)
		{
			if (__LIB_0__::func_181())
			{
				sVar1 = "RODF2_CHASE_J2";
			}
			else
			{
				sVar1 = "RODF2_CHASE_A2";
			}
			func_748();
			if (__LIB_12__::func_876(uParam0, sVar1, 0))
			{
				__LIB_1__::func_561(&uLocal_719);
				__LIB_1__::func_683(&iLocal_24, 16384);
			}
		}
	}
	else if (!__LIB_0__::func_27(iLocal_24, 32768))
	{
		if (iLocal_19 >= 14)
		{
			if (!__LIB_0__::func_899(&uLocal_719))
			{
				__LIB_2__::func_259(&uLocal_719);
			}
			else if (__LIB_9__::func_178(&uLocal_719) > 1f)
			{
				if (__LIB_0__::func_181())
				{
					sVar2 = "RODF2_VANISH4_J";
				}
				else
				{
					sVar2 = "RODF2_VANISH4_A";
				}
				func_748();
				if (__LIB_12__::func_876(uParam0, sVar2, 0))
				{
					__LIB_1__::func_561(&uLocal_719);
					__LIB_1__::func_683(&iLocal_24, 32768);
				}
			}
		}
	}
	else if (!__LIB_0__::func_27(iLocal_24, 65536))
	{
		if (iLocal_19 >= 15)
		{
			if (!__LIB_0__::func_899(&uLocal_719))
			{
				__LIB_2__::func_259(&uLocal_719);
			}
			else if (__LIB_9__::func_178(&uLocal_719) > 1f)
			{
				if (__LIB_0__::func_181())
				{
					sVar3 = "RODF2_REAPP_J";
				}
				else
				{
					sVar3 = "RODF2_REAPP_A";
				}
				func_748();
				if (__LIB_12__::func_876(uParam0, sVar3, 0))
				{
					__LIB_1__::func_561(&uLocal_719);
					__LIB_1__::func_683(&iLocal_24, 65536);
				}
			}
		}
	}
}

bool func_756()
{
	if (__LIB_4__::func_434(987516329))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_289))
		{
			iLocal_289 = VEHICLE::_CREATE_MISSION_TRAIN(987516329, vLocal_290, false, false, true, true);
			return false;
		}
		else if (VEHICLE::_0xBD3C4A2ED509205E(iLocal_289))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_289))
			{
				VEHICLE::SET_TRAIN_CRUISE_SPEED(iLocal_289, __LIB_11__::func_127(0));
				VEHICLE::_0x4182C037AA1F0091(iLocal_289, 0);
				VEHICLE::_0x787E43477746876F(iLocal_289);
			}
			return true;
		}
	}
	return false;
}

void func_757()
{
	if ((!ENTITY::IS_ENTITY_DEAD(Local_25[2 /*7*/]) && !ENTITY::IS_ENTITY_DEAD(Local_25[1 /*7*/])) && !ENTITY::IS_ENTITY_DEAD(iLocal_293))
	{
		TASK::_TASK_VEHICLE_DRIVE_TO_DESTINATION(Local_25[2 /*7*/], iLocal_293, 2686.821f, -55.49018f, 49.65807f, 4f, 69206016, 3, 4f, 2f, 0);
	}
}

void func_758(var uParam0)
{
	if (!__LIB_14__::func_165(1048576))
	{
		if ((!ENTITY::IS_ENTITY_DEAD(Local_25[2 /*7*/]) && !ENTITY::IS_ENTITY_DEAD(Local_25[1 /*7*/])) && !ENTITY::IS_ENTITY_DEAD(iLocal_293))
		{
			if (func_597(2, 0, func_193(12)))
			{
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_758[2 /*17*/], ENTITY::GET_ENTITY_COORDS(iLocal_293, true, false), ENTITY::GET_ENTITY_ROTATION(iLocal_293, 2), 2);
				ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY_PRESERVING_LOCATION(Local_758[2 /*17*/], iLocal_293, -1);
				ANIMSCENE::START_ANIM_SCENE(Local_758[2 /*17*/]);
				__LIB_12__::func_875(uParam0, Local_25[2 /*7*/], "SIDESHOW_OWNER", 0);
				__LIB_2__::func_259(&uLocal_710);
				__LIB_14__::func_168(1048576);
			}
		}
	}
	else if (!__LIB_14__::func_165(2097152))
	{
		if (__LIB_9__::func_178(&uLocal_710) > 1f && __LIB_9__::func_178(&uLocal_713) > 28f)
		{
			if (func_419(2, func_193(13)))
			{
				__LIB_12__::func_876(uParam0, "RODDF_S2_IG6_A", 0);
				__LIB_2__::func_259(&uLocal_710);
				__LIB_14__::func_168(2097152);
			}
		}
	}
	else if (!__LIB_14__::func_165(4194304))
	{
		if (__LIB_9__::func_178(&uLocal_710) > 3f)
		{
			if (func_419(2, func_193(14)))
			{
				__LIB_12__::func_876(uParam0, "RODDF_S2_IG6_C", 0);
				__LIB_1__::func_561(&uLocal_710);
				__LIB_14__::func_168(4194304);
			}
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_25[2 /*7*/]))
	{
		__LIB_1__::func_448(Local_25[2 /*7*/], ENTITY::GET_ENTITY_COORDS(Local_25[0 /*7*/], false, false), 0, 50f, 30f, 10f, 1f, 1, 1, 1, 0);
	}
}

void func_759()
{
	if (iLocal_19 == 15)
	{
		if (!func_597(1, 0, func_193(5)))
		{
			return;
		}
		else
		{
			ANIMSCENE::START_ANIM_SCENE(Local_758[1 /*17*/]);
			__LIB_2__::func_259(&uLocal_710);
		}
	}
	else
	{
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_25[0 /*7*/], Global_35, -1, -1f, -1f, -1f);
	}
	TASK::TASK_LOOK_AT_ENTITY(Local_25[0 /*7*/], Global_35, -1, 0, 41, 0);
	func_1058(1);
}

void func_771(int iParam0)
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

bool func_796(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
				func_796(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
						func_796(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_796(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_796(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_796(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_796(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_796(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_796(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
					func_796(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_796(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_796(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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

void func_798()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_1309();
	func_1310();
	func_1311();
	func_1312();
	func_1313();
	__LIB_1__::func_848();
	__LIB_0__::func_376();
}

void func_799(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	func_1316(iParam0, 1, 1, -142743235, 1);
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

void func_834()
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
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_1350(&uVar4, &iVar1, &iVar2, &iVar3)))
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

Vector3 func_841(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
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
		bVar10 = func_1364();
		if (VOLUME::_DOES_VOLUME_EXIST(bVar10))
		{
		}
	}
	if (!func_1365(Global_1310720.f_21))
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

void func_852()
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
					func_771(Global_1898330[iVar61]);
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

bool func_876(int iParam0, char* sParam1)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_758[iParam0 /*17*/]))
	{
		return false;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_758[iParam0 /*17*/], true, false))
	{
		return false;
	}
	if (!ANIMSCENE::_0xA9016536015DE29D(Local_758[iParam0 /*17*/], sParam1))
	{
		return false;
	}
	if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_758[iParam0 /*17*/], sParam1))
	{
		return true;
	}
	if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_758[iParam0 /*17*/], sParam1))
	{
		if (ANIMSCENE::_0xDF7B5144E25CD3FE(Local_758[iParam0 /*17*/], sParam1))
		{
			func_1019(iParam0);
		}
	}
	return false;
}

void func_878()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		TASK::REMOVE_WAYPOINT_RECORDING(sLocal_282[iVar0]);
		iVar0++;
	}
}

void func_879()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		__LIB_2__::func_788(&(Local_47[iVar0 /*6*/]), 1, 0, 1);
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		__LIB_2__::func_788(&(Local_60[iVar0 /*6*/]), 1, 1, 1);
		iVar0++;
	}
}

void func_880()
{
	int iVar0;
	if (VOLUME::_DOES_VOLUME_EXIST(uLocal_275[2]))
	{
		POPULATION::_0xA1CFB35069D23C23(uLocal_275[2]);
	}
	if (PED::_0x91A5F9CBEBB9D936(uLocal_296))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_296, false);
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		__LIB_0__::func_172(uLocal_275[iVar0]);
		iVar0++;
	}
}

bool func_910(int iParam0)
{
	if (!__LIB_0__::func_6(iParam0))
	{
		return false;
	}
	switch (__LIB_0__::func_700(iParam0))
	{
		case 1:
			switch (__LIB_0__::func_76(iParam0))
			{
				case 9:
				case 18:
				case 23:
				case 24:
				case 26:
				case 33:
				case 34:
				case 37:
				case 38:
				case 39:
				case 40:
				case 41:
				case 42:
				case 43:
				case 47:
				case 59:
				case 66:
					return true;
			}
			Jump @237; //curOff = 188
			switch (__LIB_0__::func_76(iParam0))
			{
				case 2:
				case 58:
				case 62:
				case 96:
					return true;
			}
			return false;
		}
void func_911(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = __LIB_0__::func_162(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804.f_2657.f_19)
	{
		iVar1 = Global_1946804.f_2657[iVar0];
		if (__LIB_0__::func_357(iVar1) == iParam0)
		{
			INVENTORY::_0x6A564540FAC12211(iVar2, iVar1);
		}
		iVar0++;
	}
	__LIB_0__::func_410(__LIB_0__::func_409(iParam0), 6);
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

void func_1019(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_1459(iParam0);
			break;
		case 1:
			func_1460(iParam0);
			break;
		case 2:
			func_1461(iParam0);
			break;
		case 3:
			func_1462(iParam0);
			break;
		case 4:
			func_1463(iParam0);
			break;
		case 6:
			func_1463(iParam0);
			break;
		case 7:
			func_1463(iParam0);
			break;
		case 8:
			func_1463(iParam0);
			break;
		case 5:
			func_1464(iParam0);
			break;
	}
}

void func_1051()
{
	int iVar0;
	iLocal_295 = __LIB_0__::func_398(7);
	iVar0 = PED::_GET_LAST_MOUNT(Global_35);
	if (iVar0 != iLocal_295 && iVar0 != 0)
	{
		iLocal_295 = iVar0;
		bLocal_742 = false;
	}
}

void func_1058(int iParam0)
{
	int iVar0;
	iVar0 = iLocal_16;
	if (iParam0 != iVar0)
	{
		iLocal_16 = iParam0;
	}
}

void func_1072(var uParam0)
{
	int iVar0;
	if (!bLocal_747)
	{
		PED::_0xE0B61ED8BB37712F(Local_25[2 /*7*/]);
		PED::_0xE0B61ED8BB37712F(Local_25[1 /*7*/]);
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_758[iVar0 /*17*/]))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(Local_758[iVar0 /*17*/]);
			}
			iVar0++;
		}
		bLocal_747 = true;
	}
}

void func_1099(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
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
		func_1511();
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

void func_1101(var uParam0)
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
			func_1519(iVar1, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_1519(iVar3, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_1102(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if ((__LIB_0__::func_84(uParam0, 268435456) && !__LIB_0__::func_86(__LIB_12__::func_720(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { __LIB_12__::func_720(uParam0) };
			func_1519(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

bool func_1170(var uParam0)
{
	if (__LIB_14__::func_166(256))
	{
		func_305(512);
		if ((!__LIB_14__::func_166(4096) && !__LIB_0__::func_27(iLocal_22, 1)) && !__LIB_14__::func_166(32768))
		{
			func_641();
		}
		return true;
	}
	if (iLocal_19 == 13)
	{
		if (ENTITY::IS_ENTITY_VISIBLE(Local_25[0 /*7*/]))
		{
			if (iLocal_16 == 1 || !__LIB_0__::func_163(Local_25[0 /*7*/], 1435919172))
			{
				if (__LIB_0__::func_48(Global_35, Local_25[0 /*7*/], 14f, 1) || __LIB_9__::func_178(&uLocal_698) > 2f)
				{
					bLocal_682 = true;
					Local_79[13 /*11*/].f_8 = 15f;
					func_305(16384);
					func_305(2048);
					return true;
				}
				return false;
			}
		}
	}
	if (__LIB_0__::func_266(Local_25[0 /*7*/], Local_79[iLocal_19 /*11*/], Local_79[iLocal_19 /*11*/].f_8, 1, 1) || __LIB_14__::func_166(16384))
	{
		if (iLocal_19 == 15)
		{
			func_305(128);
		}
		else if (iLocal_19 == 13)
		{
			if (!__LIB_0__::func_899(&uLocal_698))
			{
				__LIB_2__::func_259(&uLocal_698);
			}
			else if (__LIB_0__::func_48(Global_35, Local_25[0 /*7*/], 14f, 1))
			{
				func_305(2048);
				return true;
			}
			else if (!__LIB_0__::func_163(Local_25[0 /*7*/], -875674219) && !bLocal_682)
			{
				func_759();
			}
		}
		else
		{
			func_305(2048);
			return true;
		}
	}
	else
	{
		func_740(uParam0, 0);
	}
	return false;
}

bool func_1172(var uParam0, var uParam1)
{
	char* sVar0;
	float fVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	bVar2 = false;
	bVar3 = false;
	if (!ENTITY::IS_ENTITY_VISIBLE(Local_25[0 /*7*/]))
	{
		sVar0 = sLocal_336;
		sLocal_337 = func_1596(7);
		fVar1 = 0.2f;
		bVar3 = true;
	}
	else if (iLocal_19 == 1)
	{
		sVar0 = sLocal_335;
		sLocal_337 = func_1596(3);
		fVar1 = 0.7f;
	}
	else if (iLocal_19 == 2)
	{
		sVar0 = sLocal_336;
		sLocal_337 = func_1596(7);
		fVar1 = 0.2f;
		bVar3 = true;
	}
	else if (iLocal_19 == 3)
	{
		sVar0 = sLocal_336;
		sLocal_337 = func_1596(7);
		fVar1 = 0.2f;
		bVar3 = true;
	}
	else if (iLocal_19 == 5)
	{
		sVar0 = sLocal_335;
		sLocal_337 = func_1596(6);
		fVar1 = 0.48f;
		bVar2 = true;
	}
	else if (iLocal_19 == 6)
	{
		sVar0 = sLocal_335;
		sLocal_337 = func_1596(3);
		fVar1 = 0.65f;
	}
	else if (iLocal_19 == 7)
	{
		if (!__LIB_0__::func_27(iLocal_22, 512))
		{
			sVar0 = sLocal_335;
			sLocal_337 = func_1596(6);
			fVar1 = 0.48f;
			bVar2 = true;
		}
		else
		{
			sVar0 = sLocal_336;
			sLocal_337 = func_1596(7);
			fVar1 = 0.2f;
			bVar3 = true;
		}
	}
	else if (iLocal_19 == 8)
	{
		sVar0 = sLocal_335;
		sLocal_337 = func_1596(3);
		fVar1 = 0.7f;
	}
	else if (iLocal_19 == 13)
	{
		if (!bLocal_682)
		{
			sVar0 = sLocal_336;
			sLocal_337 = func_1596(7);
			fVar1 = 0.2f;
			bVar3 = true;
		}
		else
		{
			sVar0 = sLocal_335;
			sLocal_337 = func_1596(6);
			fVar1 = 0.55f;
			bVar2 = true;
		}
	}
	else
	{
		sVar0 = sLocal_336;
		sLocal_337 = func_1596(7);
		fVar1 = 0.2f;
		bVar3 = true;
	}
	if (!bLocal_681)
	{
		func_740(uParam0, 0);
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_25[0 /*7*/], sVar0, sLocal_337, 1))
		{
			bLocal_681 = true;
		}
		else
		{
			STREAMING::REQUEST_ANIM_DICT(sVar0);
			if (STREAMING::HAS_ANIM_DICT_LOADED(sVar0))
			{
				if (!bVar2)
				{
					if (!bVar3)
					{
						TASK::TASK_PLAY_ANIM(Local_25[0 /*7*/], sVar0, sLocal_337, 8f, -8f, -1, 67108880, 0f, false, 65536, false, 0, false);
					}
					else
					{
						TASK::TASK_PLAY_ANIM(Local_25[0 /*7*/], sVar0, sLocal_337, 8f, -8f, -1, 67108880, 0f, false, 65536, false, 0, false);
					}
				}
				else
				{
					TASK::CLEAR_PED_SECONDARY_TASK(Local_25[0 /*7*/]);
					TASK::TASK_PLAY_ANIM(Local_25[0 /*7*/], sVar0, sLocal_337, 8f, -8f, -1, 0, 0f, false, 0, false, 0, false);
				}
				STREAMING::REMOVE_ANIM_DICT(sVar0);
				if (Local_79[iLocal_19 /*11*/].f_9 == 0f)
				{
					Local_79[iLocal_19 /*11*/].f_9 = 4f;
				}
				bLocal_681 = true;
			}
		}
	}
	else
	{
		func_740(uParam0, 0);
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_25[0 /*7*/], sVar0, sLocal_337, 1))
		{
			if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(Local_25[0 /*7*/], sVar0, sLocal_337) > fVar1)
			{
				*uParam1 = { ENTITY::GET_ENTITY_COORDS(Local_25[0 /*7*/], true, false) };
				if (MISC::GET_GROUND_Z_FOR_3D_COORD(*uParam1, &uVar4, false))
				{
					uParam1->f_2 = uVar4;
				}
				if (!VOLUME::_DOES_VOLUME_EXIST(uParam1->f_9))
				{
					uParam1->f_9 = VOLUME::_CREATE_VOLUME_CYLINDER(*uParam1 + Vector(1f, 0f, 0f), 0f, 0f, 0f, 2.5f, 2.5f, 1f);
				}
				if (!__LIB_0__::func_899(&(uParam1->f_5)))
				{
					__LIB_2__::func_259(&(uParam1->f_5));
				}
				func_638(7, 0);
				if (iLocal_14 == 5 || __LIB_14__::func_166(67108864))
				{
					func_306(67108864);
				}
				else
				{
					GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_river5_magician_smoke", *uParam1, 0f, 0f, 0f, 1f, false, false, false);
					CAM::SHAKE_GAMEPLAY_CAM("SMALL_EXPLOSION_SHAKE", 0.01f);
				}
				MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
				if (iLocal_14 == 5)
				{
					MAP::TRIGGER_SONAR_BLIP(227904798, 2543.151f, -14.83851f, 49.60641f);
				}
				else
				{
					MAP::TRIGGER_SONAR_BLIP(227904798, *uParam1);
				}
				bLocal_681 = false;
				bLocal_679 = false;
				uParam1->f_3 = 1;
				__LIB_2__::func_259(&uLocal_701);
				if (__LIB_14__::func_165(2))
				{
					__LIB_14__::func_167(2);
				}
				return true;
			}
		}
		else if (iLocal_19 == 13)
		{
			bLocal_681 = false;
		}
	}
	return false;
}

void func_1173(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	char* sVar4;
	vector3 vVar5;
	float fVar8;
	if (__LIB_14__::func_166(512))
	{
		if (iLocal_19 == 4)
		{
			func_305(16384);
			func_305(67108864);
			func_640();
			func_306(512);
			if (MAP::DOES_BLIP_EXIST(Local_25[0 /*7*/].f_1))
			{
				MAP::_0x250C75EB1728CC0D(Local_25[0 /*7*/].f_1);
				MAP::SET_BLIP_COORDS(Local_25[0 /*7*/].f_1, Local_79[3 /*11*/].f_3);
				MAP::_BLIP_SET_MODIFIER(Local_25[0 /*7*/].f_1, -1269631044);
			}
		}
		else
		{
			ENTITY::SET_ENTITY_VISIBLE(Local_25[0 /*7*/], true);
			func_306(512);
		}
		if (__LIB_14__::func_166(4096))
		{
			func_305(8192);
		}
		if (__LIB_0__::func_27(iLocal_22, 1))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_25[0 /*7*/], Local_79[6 /*11*/].f_3, Local_79[6 /*11*/].f_7, true, true, true);
			ENTITY::_0x9587913B9E772D29(Local_25[0 /*7*/], 0);
			__LIB_1__::func_681(&iLocal_22, 1);
			TASK::CLEAR_PED_TASKS(Local_25[0 /*7*/], true, false);
			TASK::TASK_PLAY_ANIM(Local_25[0 /*7*/], sLocal_339, sLocal_340, 8f, -8f, -1, 67108881, 0f, false, 65536, false, 0, false);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_25[0 /*7*/], Global_35, -1, -1f, -1f, -1f);
			__LIB_2__::func_259(&uLocal_710);
			__LIB_13__::func_89(uParam0, "RODDF_OBJ_1", 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			__LIB_1__::func_683(&iLocal_22, 2);
		}
		if (__LIB_14__::func_166(32768))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_25[0 /*7*/], 2543.151f, -14.83851f, 49.60641f, -173.22f, true, true, true);
			func_305(65536);
		}
		if (__LIB_14__::func_166(524288))
		{
			func_305(1048576);
		}
		return;
	}
	else if (__LIB_14__::func_166(1024))
	{
		if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_25[0 /*7*/], 0))
		{
			if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_282[0]) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_282[1]))
			{
				if (iLocal_14 == 0)
				{
					sVar4 = sLocal_282[0];
				}
				else if (iLocal_14 == 2 || iLocal_14 == 6)
				{
					sVar4 = sLocal_282[1];
				}
				else if (iLocal_14 == 8)
				{
					sVar4 = sLocal_282[1];
				}
				iVar0 = TASK::GET_PED_WAYPOINT_PROGRESS(Local_25[0 /*7*/]);
				if (TASK::WAYPOINT_RECORDING_GET_COORD(sVar4, iVar0 + 10, &vVar1))
				{
					ENTITY::SET_ENTITY_VISIBLE(Local_25[0 /*7*/], false);
					ENTITY::SET_ENTITY_COORDS(Local_25[0 /*7*/], vVar1, true, true, true, true);
					func_306(1024);
				}
				return;
			}
		}
	}
	else if (((((TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_25[0 /*7*/], 0) || iLocal_19 == 5) || iLocal_19 == 6) || iLocal_19 == 8) || iLocal_19 == 10) || iLocal_19 == 14)
	{
		ENTITY::SET_ENTITY_VISIBLE(Local_25[0 /*7*/], false);
		vVar5 = { Local_79[(iLocal_19 - 1) /*11*/].f_3 };
		fVar8 = Local_79[(iLocal_19 - 1) /*11*/].f_7;
		if (iLocal_19 == 5)
		{
			ENTITY::_0x9587913B9E772D29(Local_25[0 /*7*/], 0);
			func_305(4096);
		}
		if (iLocal_19 == 7)
		{
			if (!__LIB_0__::func_27(iLocal_22, 1))
			{
				__LIB_1__::func_683(&iLocal_22, 1);
			}
		}
		if (iLocal_19 == 9)
		{
			func_305(32768);
		}
		if (iLocal_19 == 14)
		{
			func_305(524288);
		}
		if (MAP::DOES_BLIP_EXIST(Local_25[0 /*7*/].f_1))
		{
			if (MAP::DOES_BLIP_EXIST(Local_25[0 /*7*/].f_1))
			{
				MAP::_0x250C75EB1728CC0D(Local_25[0 /*7*/].f_1);
				MAP::_BLIP_SET_MODIFIER(Local_25[0 /*7*/].f_1, -1269631044);
			}
		}
		if (iLocal_19 == 8 && !__LIB_0__::func_27(iLocal_22, 512))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_25[0 /*7*/], 2512.875f, -9.0741f, 43.7691f, 225.7571f, true, false, true);
			return;
		}
		else
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_25[0 /*7*/], vVar5, fVar8, true, false, true);
			return;
		}
	}
}

float func_1174()
{
	float fVar0;
	switch (iLocal_19)
	{
		case 4:
			fVar0 = 1f;
			break;
		case 8:
			if (!__LIB_0__::func_27(iLocal_22, 512))
			{
				fVar0 = 0.5f;
			}
			else
			{
				fVar0 = 1.5f;
			}
			break;
		default:
			fVar0 = 1.5f;
			break;
	}
	return fVar0;
}

bool func_1178(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (ENTITY::IS_ENTITY_DEAD(Local_47[iVar1 /*6*/]))
		{
			Local_47[iVar1 /*6*/] = __LIB_12__::func_885(uParam0, Local_47[iVar1 /*6*/].f_5, Local_47[iVar1 /*6*/].f_1, Local_47[iVar1 /*6*/].f_4, 1, 1, 0, 1, 1, 1, 1, 0);
		}
		else
		{
			iVar0++;
		}
		iVar1++;
	}
	if (iVar0 == 2)
	{
		return true;
	}
	return false;
}

void func_1179()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_47[iVar0 /*6*/]))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_47[iVar0 /*6*/], true);
			if (iVar0 == 0)
			{
				__LIB_1__::func_473(Local_47[iVar0 /*6*/], joaat("WORLD_ANIMAL_BOAR_GRAZING"), -1, 0, 0, -1082130432 /* Float: -1f */);
			}
			else if (iVar0 == 1)
			{
				__LIB_1__::func_473(Local_47[iVar0 /*6*/], joaat("WORLD_ANIMAL_BOAR_GRAZING"), -1, 0, 0, -1082130432 /* Float: -1f */);
			}
			PED::_0xF1C03A5352243A30(Local_47[iVar0 /*6*/]);
		}
		iVar0++;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uLocal_275[2]))
	{
		__LIB_0__::func_566(uLocal_275[2], 0);
		POPULATION::_0x18262CAFEBB5FBE1(uLocal_275[2], 480, 0, 0, -1, -1, 0);
	}
}

void func_1180()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_47[iVar0 /*6*/]))
		{
			TASK::_TASK_SMART_FLEE_STYLE_COORD(Local_47[iVar0 /*6*/], Local_79[8 /*11*/], 4, 0, -1082130432 /* Float: -1f */, -1, 0);
		}
		iVar0++;
	}
	func_305(33554432);
	func_879();
}

bool func_1188()
{
	int iVar0;
	int iVar1;
	if (bLocal_685)
	{
		return true;
	}
	if (!bLocal_684)
	{
		Local_256[1 /*6*/].f_1 = joaat("S_FIREWORK01X");
		Local_256[1 /*6*/].f_2 = { 0f, 0f, 0f };
		Local_256[0 /*6*/].f_1 = joaat("P_MATCHSTICK01X");
		Local_256[0 /*6*/].f_2 = { 0f, 0f, 0f };
		Local_256[2 /*6*/].f_1 = joaat("P_SMOKEBOMB01X");
		Local_256[2 /*6*/].f_2 = { 0f, 0f, 0f };
		bLocal_684 = true;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Local_256[iVar0 /*6*/]))
			{
				if (!STREAMING::HAS_MODEL_LOADED(Local_256[iVar0 /*6*/].f_1))
				{
					STREAMING::REQUEST_MODEL(Local_256[iVar0 /*6*/].f_1, false);
				}
				else
				{
					Local_256[iVar0 /*6*/] = OBJECT::CREATE_OBJECT(Local_256[iVar0 /*6*/].f_1, Local_256[iVar0 /*6*/].f_2, true, true, false, false, true);
				}
			}
			else
			{
				iVar1++;
			}
			iVar0++;
		}
		if (iVar1 == 3)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < 3)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_256[iVar0 /*6*/].f_1);
				iVar0++;
			}
			bLocal_685 = true;
			return true;
		}
	}
	return false;
}

void func_1189(var uParam0)
{
	if (!__LIB_0__::func_27(iLocal_23, 16777216))
	{
		if (!__LIB_0__::func_27(iLocal_23, 8388608))
		{
			if (__LIB_9__::func_578(Local_25[0 /*7*/], 0, &uLocal_306, &uLocal_334, 0, 0) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(Local_25[0 /*7*/], true, false), joaat("WEAPON_LASSO"), 5f, true))
			{
				if (func_419(3, func_1607()))
				{
					__LIB_2__::func_259(&uLocal_716);
					iLocal_737 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
					__LIB_1__::func_683(&iLocal_23, 8388608);
				}
			}
		}
		else if (__LIB_9__::func_178(&uLocal_716) > 3f)
		{
			__LIB_1__::func_681(&iLocal_23, 8388608);
		}
	}
	if (!__LIB_0__::func_27(iLocal_23, 2))
	{
		if (func_419(3, func_193(15)))
		{
			__LIB_1__::func_683(&iLocal_23, 2);
			__LIB_2__::func_259(&uLocal_716);
		}
	}
	else if (!__LIB_0__::func_27(iLocal_23, 4))
	{
		if (__LIB_9__::func_178(&uLocal_716) > IntToFloat(iLocal_736))
		{
			if (func_419(3, func_193(16)))
			{
				iLocal_736 = MISC::GET_RANDOM_INT_IN_RANGE(12, 17);
				__LIB_1__::func_683(&iLocal_23, 4);
				__LIB_2__::func_259(&uLocal_716);
			}
		}
	}
	else if (!__LIB_0__::func_27(iLocal_23, 8))
	{
		if (__LIB_9__::func_178(&uLocal_716) > IntToFloat(iLocal_736))
		{
			if (func_419(3, func_193(17)))
			{
				iLocal_736 = MISC::GET_RANDOM_INT_IN_RANGE(12, 17);
				__LIB_1__::func_683(&iLocal_23, 8);
				__LIB_2__::func_259(&uLocal_716);
			}
		}
	}
	else if (!__LIB_0__::func_27(iLocal_23, 16))
	{
		if (__LIB_9__::func_178(&uLocal_716) > IntToFloat(iLocal_736))
		{
			if (func_419(3, func_193(18)))
			{
				iLocal_736 = MISC::GET_RANDOM_INT_IN_RANGE(12, 17);
				__LIB_1__::func_683(&iLocal_23, 16);
				__LIB_2__::func_259(&uLocal_716);
			}
		}
	}
	else if (!__LIB_0__::func_27(iLocal_23, 32))
	{
		if (__LIB_9__::func_178(&uLocal_716) > IntToFloat(iLocal_736))
		{
			if (func_419(3, func_193(25)))
			{
				iLocal_736 = MISC::GET_RANDOM_INT_IN_RANGE(12, 17);
				__LIB_1__::func_683(&iLocal_23, 32);
				__LIB_2__::func_259(&uLocal_716);
			}
		}
	}
	else if (!__LIB_0__::func_27(iLocal_23, 64))
	{
		if (__LIB_9__::func_178(&uLocal_716) > IntToFloat(iLocal_736))
		{
			if (func_419(3, func_193(26)))
			{
				iLocal_736 = MISC::GET_RANDOM_INT_IN_RANGE(12, 17);
				__LIB_1__::func_683(&iLocal_23, 64);
				__LIB_2__::func_259(&uLocal_716);
			}
		}
	}
	else if (!__LIB_0__::func_27(iLocal_23, 128))
	{
		if (__LIB_9__::func_178(&uLocal_716) > IntToFloat(iLocal_736))
		{
			if (func_419(3, func_193(27)))
			{
				iLocal_736 = MISC::GET_RANDOM_INT_IN_RANGE(12, 17);
				__LIB_1__::func_683(&iLocal_23, 128);
				__LIB_2__::func_259(&uLocal_716);
			}
		}
	}
	else if (!__LIB_0__::func_27(iLocal_23, 256))
	{
		if (__LIB_9__::func_178(&uLocal_716) > IntToFloat(iLocal_736))
		{
			if (func_419(3, func_193(28)))
			{
				iLocal_736 = MISC::GET_RANDOM_INT_IN_RANGE(12, 17);
				__LIB_1__::func_683(&iLocal_23, 256);
				__LIB_2__::func_259(&uLocal_716);
			}
		}
	}
	else if (!__LIB_0__::func_27(iLocal_23, 512))
	{
		if (__LIB_9__::func_178(&uLocal_716) > IntToFloat(iLocal_736))
		{
			if (func_419(3, func_193(29)))
			{
				iLocal_736 = MISC::GET_RANDOM_INT_IN_RANGE(12, 17);
				__LIB_1__::func_681(&iLocal_23, 32);
				__LIB_1__::func_681(&iLocal_23, 64);
				__LIB_1__::func_681(&iLocal_23, 128);
				__LIB_1__::func_681(&iLocal_23, 256);
				__LIB_2__::func_259(&uLocal_716);
			}
		}
	}
}

void func_1191(bool bParam0)
{
	PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_REVEAL_HUD"), true);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE"), true);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE_ALTERNATE"), true);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), true);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), true);
	if (!bParam0)
	{
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), true);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), true);
		if (!__LIB_0__::func_27(iLocal_23, 1048576))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
		}
		else
		{
			PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_SPRINT"), true);
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
		}
	}
	else
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 0f);
	}
}

char* func_1192()
{
	if (__LIB_3__::func_547(Local_25[0 /*7*/], Global_35, 0f) == 0)
	{
		if (__LIB_3__::func_547(Local_25[0 /*7*/], Global_35, 0.85f) == 0)
		{
			return func_193(35);
		}
		else if (__LIB_3__::func_547(Local_25[0 /*7*/], Global_35, 0.85f) == 3)
		{
			return func_193(36);
		}
		else if (__LIB_3__::func_547(Local_25[0 /*7*/], Global_35, 0.85f) == 2)
		{
			return func_193(37);
		}
		else
		{
			return func_193(32);
		}
	}
	else if (__LIB_3__::func_547(Local_25[0 /*7*/], Global_35, 0.85f) == 1)
	{
		return func_193(32);
	}
	else if (__LIB_3__::func_547(Local_25[0 /*7*/], Global_35, 0.85f) == 3)
	{
		return func_193(33);
	}
	else if (__LIB_3__::func_547(Local_25[0 /*7*/], Global_35, 0.85f) == 2)
	{
		return func_193(34);
	}
	else
	{
		return func_193(35);
	}
	return "";
}

void func_1194(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (__LIB_0__::func_899(&(Local_642[iVar0 /*6*/].f_1)))
		{
			Local_642[iVar0 /*6*/].f_4 = __LIB_1__::func_592(&(Local_642[iVar0 /*6*/].f_1));
			if (Local_642[iVar0 /*6*/].f_4 >= 2500)
			{
				__LIB_0__::func_172(Local_642[iVar0 /*6*/].f_5);
				__LIB_1__::func_561(&(Local_642[iVar0 /*6*/].f_1));
			}
		}
		if (VOLUME::_DOES_VOLUME_EXIST(Local_642[iVar0 /*6*/].f_5))
		{
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_642[iVar0 /*6*/].f_5, true, 0) && Local_642[iVar0 /*6*/].f_4 < 2500)
			{
				if (!bLocal_680)
				{
					bLocal_680 = true;
				}
			}
		}
		iVar0++;
	}
	if (bLocal_680)
	{
		bLocal_680 = func_747(uParam0);
	}
}

void func_1195(int iParam0)
{
	vector3 vVar0;
	var uVar3;
	if (!Local_642[iParam0 /*6*/])
	{
		switch (iParam0)
		{
			case 0:
				vVar0 = { 2586.347f, -32.26041f, 48.28651f };
				break;
			case 1:
				vVar0 = { 2588.277f, -18.89703f, 48.93502f };
				break;
			case 2:
				vVar0 = { 2608.329f, -42.88918f, 49.753f };
				break;
			case 3:
				vVar0 = { 2614.653f, -29.74916f, 50.6314f };
				break;
			case 4:
				vVar0 = { 2619.281f, -55.96054f, 50.34873f };
				break;
			case 5:
				vVar0 = { 2635.728f, -45.83675f, 51.08208f };
				break;
		}
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &uVar3, false))
		{
			vVar0.f_2 = uVar3;
		}
		func_638(7, 0);
		GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_river5_magician_smoke", vVar0, 0f, 0f, 0f, 1f, false, false, false);
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
		MAP::TRIGGER_SONAR_BLIP(227904798, vVar0);
		if (!VOLUME::_DOES_VOLUME_EXIST(Local_642[iParam0 /*6*/].f_5))
		{
			Local_642[iParam0 /*6*/].f_5 = VOLUME::_CREATE_VOLUME_CYLINDER(vVar0, 0f, 0f, 0f, 2.5f, 2.5f, 2.5f);
		}
		if (!__LIB_0__::func_899(&(Local_642[iParam0 /*6*/].f_1)))
		{
			__LIB_2__::func_259(&(Local_642[iParam0 /*6*/].f_1));
		}
		CAM::SHAKE_GAMEPLAY_CAM("SMALL_EXPLOSION_SHAKE", 0.01f);
		Local_642[iParam0 /*6*/] = 1;
	}
}

void func_1309()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_1710(0);
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
	func_1710(1);
}

void func_1310()
{
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_796(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_1311()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_1713(0);
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
	func_1713(1);
}

void func_1312()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_1__::func_432(15000, 0, 0, 0, 1);
			func_1713(0);
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
	func_1713(1);
}

void func_1313()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_796(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_796(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_1316(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_1316(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
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

int func_1316(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			func_1316(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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

int func_1350(var uParam0, int iParam1, int iParam2, int iParam3)
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
	iVar11 = (func_1751(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_952(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_796(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	__LIB_1__::func_432(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

int func_1364()
{
	if (__LIB_0__::func_28())
	{
		if (!__LIB_1__::func_185(3))
		{
			return __LIB_0__::func_559(43);
		}
		if (__LIB_1__::func_185(38) && !__LIB_1__::func_185(43))
		{
			return func_1760(8);
		}
	}
	return 0;
}

bool func_1365(int iParam0)
{
	if (!__LIB_0__::func_20(iParam0))
	{
		return false;
	}
	return ((Global_1888801[iParam0 /*35*/].f_20 == 1 || Global_1888801[iParam0 /*35*/].f_20 == 2) && !func_1761(iParam0));
}

void func_1459(int iParam0)
{
	func_1808(iParam0, "cs_magnifico", Local_25[0 /*7*/]);
}

void func_1460(int iParam0)
{
	func_1808(iParam0, "cs_magnifico", Local_25[0 /*7*/]);
}

void func_1461(int iParam0)
{
	func_1808(iParam0, "cs_missmarjorie", Local_25[2 /*7*/]);
	func_1808(iParam0, "cs_oddfellowspinhead", Local_25[1 /*7*/]);
}

void func_1462(int iParam0)
{
	func_1808(iParam0, "ODDFELLOWSMAGNIFICO", Local_25[0 /*7*/]);
	func_1808(iParam0, "p_matchstick01x", Local_256[0 /*6*/]);
	func_1808(iParam0, "p_smokebomb01x", Local_256[2 /*6*/]);
	func_1808(iParam0, "s_firework01x", Local_256[1 /*6*/]);
}

void func_1463(int iParam0)
{
	if (__LIB_0__::func_181())
	{
		func_1808(iParam0, "JOHN", Global_35);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_758[iParam0 /*17*/], "b_playerArthur", false, false);
	}
	else
	{
		func_1808(iParam0, "ARTHUR", Global_35);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_758[iParam0 /*17*/], "b_playerArthur", true, false);
	}
}

void func_1464(int iParam0)
{
	func_1808(iParam0, "s_firework01x", Local_256[1 /*6*/]);
}

void func_1511()
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
	iVar0 = func_1834(6291456, 0);
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

void func_1519(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_1519(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_1519(iVar2, vParam1, fParam4, iParam5, iParam6);
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

char* func_1596(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "dlg_vanish_quick_front_oddf_magnifico";
		case 1:
			return "dlg_vanish_behind_oddf_magnifico";
		case 2:
			return "dlg_vanish_left_01_oddf_magnifico";
		case 3:
			return "dlg_vanish_right_oddf_magnifico";
		case 7:
			return "throw_l_fb_stand";
		case 4:
			return "dlg_vanish_front_02_oddf_magnifico";
		case 5:
			return "dlg_vanish_front_04_oddf_magnifico";
		case 6:
			return "dlg_vanish_behind_03_oddf_magnifico";
	}
	return "";
}

char* func_1607()
{
	if (iLocal_737 == 0)
	{
		return func_193(20);
	}
	else if (iLocal_737 == 1)
	{
		return func_193(21);
	}
	else if (iLocal_737 == 2)
	{
		return func_193(22);
	}
	else if (iLocal_737 == 3)
	{
		return func_193(23);
	}
	else if (iLocal_737 == 4)
	{
		return func_193(24);
	}
	return func_193(20);
}

void func_1710(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (bParam0)
	{
		func_796(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_796(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_796(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_1952(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_799(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_1316(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_1958(Var0);
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

void func_1713(bool bParam0)
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
		func_796(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_796(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_796(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_796(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_796(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_796(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_796(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_796(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_796(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_796(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_796(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_1316(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_1316(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_1316(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_1316(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_1316(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_1316(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_1316(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_1316(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_1316(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_1316(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_1316(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
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

int func_1751(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
							iVar49 = (iVar49 + func_1751(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1751(iVar63, -915411861, 1, 0, 0));
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

int func_1760(int iParam0)
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
			Jump @9444; //curOff = 6025
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
			Jump @9444; //curOff = 6714
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
			Jump @9444; //curOff = 7286
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
			Jump @9444; //curOff = 7858
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GAPTOOTH_RIDGE");
			VOLUME::_0x39816F6F94F385AD(iVar0, -5420f, -3447.5f, 150f, 0f, 0f, 175f, 300f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5837.5f, -3530f, 150f, 0f, 0f, -32f, 1000f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -6142.5f, -3665f, 150f, 0f, 0f, -8f, 800f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5747.5f, -2905f, 150f, 0f, 0f, 136.5f, 1300f, 750f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5407.5f, -2487.5f, 150f, 0f, 0f, -148f, 550f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5232.5f, -2825f, 150f, 0f, 0f, -178f, 400f, 530f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5667.5f, -2040f, 150f, 0f, 0f, 175f, 1100f, 800f, 700f);
			Jump @9444; //curOff = 8172
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
			Jump @9444; //curOff = 8873
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
bool func_1761(int iParam0)
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

void func_1808(int iParam0, char* sParam1, int iParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_758[iParam0 /*17*/], sParam1, iParam2, 0);
	}
}

int func_1834(int iParam0, int iParam1)
{
	var uVar0;
	return func_2008(&uVar0, iParam0, iParam1);
}

void func_1952(int iParam0)
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
	func_1316(iParam0, 1, 1, -142743235, 1);
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
		func_1316(uVar18[iVar36], 1, 1, -142743235, 1);
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

void func_1958(struct<6> Param0)
{
	if (!func_2083(Param0.f_4, 1))
	{
	}
	if (!func_2083(Param0, 1))
	{
	}
	if (!func_2083(Param0.f_2, 1))
	{
	}
	if (!func_2083(Param0.f_5, 1))
	{
	}
	if (!func_2083(Param0.f_3, 1))
	{
	}
	if (!func_2083(Param0.f_1, 1))
	{
	}
}

int func_2008(var uParam0, int iParam1, int iParam2)
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
		return func_2008(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

bool func_2083(int iParam0, int iParam1)
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
				if (func_2083(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_2083(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_2083(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_2083(iVar21, 1))
				{
				}
			}
		}
		__LIB_1__::func_712();
		return true;
	}
	return false;
}

