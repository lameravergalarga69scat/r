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
	struct<356> Local_14 = { 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1106247680, 1067450368, 0, 1092616192, 1112014848, 1106247680, 1101529088, 1101004800, 1084227584, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483648, 0, 5, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 2, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, -1082130432, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30000, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion
void __EntryFunction__()
{
	struct<2606> Var0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
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
	__LIB_13__::func_28(uParam0);
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
	if (!__LIB_0__::func_899(&(uParam0->f_2585)) || IntToFloat(__LIB_1__::func_592(&(uParam0->f_2585))) > __LIB_10__::func_381(uParam0))
	{
		__LIB_4__::func_89(&(uParam0->f_2585), 1);
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
	__LIB_0__::func_11(uParam0);
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
		__LIB_14__::func_18(uParam0, __LIB_0__::func_58(uParam0));
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
			__LIB_13__::func_467();
			__LIB_1__::func_141(0);
		}
		else if (__LIB_0__::func_1(uParam0->f_172, 32768))
		{
			__LIB_9__::func_786(1, 1);
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
	__LIB_12__::func_656(uParam0, 3f);
	__LIB_12__::func_657(uParam0, 5f);
	__LIB_12__::func_658(uParam0, 15);
	__LIB_12__::func_659(uParam0, 17);
}

void func_42(var uParam0)
{
	__LIB_12__::func_908(uParam0, 0);
	__LIB_12__::func_867(uParam0, func_193(0), 7);
	__LIB_12__::func_867(uParam0, func_193(1), 7);
	__LIB_12__::func_867(uParam0, func_193(2), 7);
	__LIB_12__::func_867(uParam0, func_193(3), 7);
	__LIB_12__::func_867(uParam0, func_193(4), 7);
	__LIB_12__::func_867(uParam0, func_193(5), 7);
	__LIB_12__::func_867(uParam0, func_193(6), 7);
	__LIB_12__::func_867(uParam0, func_193(7), 7);
	__LIB_12__::func_867(uParam0, func_194(0), 7);
	__LIB_12__::func_867(uParam0, func_195(0), 7);
	__LIB_12__::func_867(uParam0, func_195(1), 7);
	__LIB_12__::func_867(uParam0, func_195(2), 7);
	__LIB_12__::func_867(uParam0, func_195(3), 7);
	__LIB_12__::func_867(uParam0, func_195(7), 7);
	__LIB_12__::func_867(uParam0, func_195(10), 7);
	__LIB_12__::func_867(uParam0, func_195(6), 7);
	__LIB_12__::func_867(uParam0, func_195(13), 7);
	__LIB_12__::func_867(uParam0, func_195(17), 7);
	__LIB_12__::func_867(uParam0, func_195(18), 7);
	__LIB_12__::func_867(uParam0, func_195(21), 7);
	__LIB_12__::func_867(uParam0, func_195(23), 7);
	__LIB_12__::func_867(uParam0, func_195(24), 7);
	__LIB_13__::func_15(uParam0, func_196(0), 2, -1, 7);
	__LIB_13__::func_15(uParam0, func_196(1), 2, -1, 7);
	__LIB_13__::func_15(uParam0, func_196(2), 2, -1, 7);
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
			Var1 = { func_207(20) };
			Var1.f_3 = func_208(20);
			break;
		case 1:
			Var1 = { func_207(21) };
			Var1.f_3 = func_208(21);
			break;
		case 2:
			Var1 = { func_207(21) };
			Var1.f_3 = func_208(21);
			break;
		case 3:
			Var1 = { func_207(23) };
			Var1.f_3 = func_208(23);
			break;
		case 4:
			Var1 = { func_207(18) };
			Var1.f_3 = func_208(18);
			break;
		case 5:
			Var1 = { func_207(20) };
			Var1.f_3 = func_208(20);
			break;
	}
	return Var1;
}

bool func_62(var uParam0)
{
	return func_209(*uParam0, uParam0->f_3);
}

bool func_64(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_278[11]))
	{
		if (__LIB_13__::func_203(uParam0, Local_14.f_278[11]))
		{
			StringCopy(&(uParam0->f_2578), "RMNR1_F_AINDAN", 24);
			return true;
		}
	}
	if (__LIB_0__::func_27(Local_14.f_193, 64))
	{
		StringCopy(&(uParam0->f_2578), "RMNR1_F_ABNMNR", 24);
		return true;
	}
	if (__LIB_0__::func_27(Local_14.f_193, 2))
	{
		StringCopy(&(uParam0->f_2578), "RMNR1_F_MNRDED", 24);
		return true;
	}
	if (__LIB_0__::func_27(Local_14.f_193, 1024))
	{
		StringCopy(&(uParam0->f_2578), "RMNR1_F_AMNROE", 24);
		return true;
	}
	if (__LIB_0__::func_27(Local_14.f_193, 1))
	{
		StringCopy(&(uParam0->f_2578), "RMNR1_F_AINDAN", 24);
		return true;
	}
	if (__LIB_0__::func_27(Local_14.f_193, 4))
	{
		StringCopy(&(uParam0->f_2578), "RMNR1_F_WGNDST", 24);
		return true;
	}
	if (__LIB_0__::func_27(Local_14.f_193, 128))
	{
		StringCopy(&(uParam0->f_2578), "RMNR1_F_WGNABN", 24);
		return true;
	}
	if (__LIB_0__::func_27(Local_14.f_193, 8))
	{
		StringCopy(&(uParam0->f_2578), "RMNR1_F_WGNESC", 24);
		return true;
	}
	if (__LIB_0__::func_27(Local_14.f_193, 16))
	{
		StringCopy(&(uParam0->f_2578), "RMNR1_F_HRSDED", 24);
		return true;
	}
	if (__LIB_0__::func_27(Local_14.f_193, 32))
	{
		StringCopy(&(uParam0->f_2578), "RMNR1_F_MNRHRS", 24);
		return true;
	}
	if (__LIB_0__::func_27(Local_14.f_193, 256))
	{
		StringCopy(&(uParam0->f_2578), "RMNR1_F_LFTMDC", 24);
		return true;
	}
	if (__LIB_0__::func_27(Local_14.f_193, 512))
	{
		StringCopy(&(uParam0->f_2578), "RMNR1_F_BGBTW", 24);
		return true;
	}
	return false;
}

void func_68(var uParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3[20];
	int iVar24;
	int iVar25;
	if (__LIB_0__::func_27(Local_14.f_189, 512))
	{
		POPULATION::_0xF45E46DEECF7DF6E(12288, 0, 0, -1, -1);
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	}
	func_212(Global_35);
	func_212(Local_14.f_111);
	func_212(Local_14.f_278[0]);
	func_212(Local_14.f_278[1]);
	func_212(Local_14.f_291[0]);
	func_212(Local_14.f_291[1]);
	if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_319[0]))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			iVar1 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(Local_14.f_319[0], iVar0);
			func_212(iVar1);
			iVar0++;
		}
	}
	if (!__LIB_0__::func_899(&(Local_14.f_216)))
	{
		__LIB_2__::func_259(&(Local_14.f_216));
	}
	fVar2 = __LIB_9__::func_178(&(Local_14.f_216));
	if (fVar2 >= 0.4f)
	{
		if (__LIB_0__::func_12() == 56)
		{
			if (PLAYER::_0x1A6E84F13C952094(PLAYER::GET_PLAYER_INDEX(), 400, &iVar3))
			{
				iVar24 = 0;
				iVar24 = 0;
				while (iVar24 < iVar3)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iVar3[iVar24]) && iVar3[iVar24] != Local_14.f_278[0])
					{
						iVar25 = PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iVar3[iVar24]);
						if ((iVar25 == joaat("REL_CIVNATIVE") || iVar25 == joaat("REL_CIVMALE")) || iVar25 == joaat("REL_CIVFEMALE"))
						{
							__LIB_1__::func_683(&(Local_14.f_193), 1);
							return;
						}
					}
					iVar24++;
				}
			}
		}
		if (Local_14.f_273 > 0 && __LIB_9__::func_178(&(Local_14.f_267)) > 10f)
		{
			Local_14.f_273 = (Local_14.f_273 - 1);
			if (Local_14.f_273 > 0)
			{
				__LIB_2__::func_259(&(Local_14.f_267));
			}
			else
			{
				__LIB_1__::func_561(&(Local_14.f_267));
			}
		}
		if (PED::_0x947E43F544B6AB34(Local_14.f_278[0], PLAYER::GET_PLAYER_INDEX(), 10, 400) || PED::_0x947E43F544B6AB34(Local_14.f_278[0], PLAYER::GET_PLAYER_INDEX(), 11, 400))
		{
			if (PED::IS_PED_RAGDOLL(Local_14.f_278[0]))
			{
				Local_14.f_273++;
				__LIB_2__::func_259(&(Local_14.f_267));
			}
		}
		if (__LIB_3__::func_528(Local_14.f_278[0], Global_35) || Local_14.f_273 >= 4)
		{
			__LIB_1__::func_683(&(Local_14.f_193), 1024);
			return;
		}
		__LIB_2__::func_259(&(Local_14.f_216));
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
	if (__LIB_14__::func_16(uParam0) || __LIB_12__::func_663(uParam0->f_174, uParam0->f_743))
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
			func_248(uParam0);
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
	if (__LIB_12__::func_924(uParam0) && func_272(uParam0))
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
	bVar0 = false;
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
		__LIB_12__::func_997(uParam0, func_61(0), func_61(1), 0, 1, 0);
	}
}

void func_87(var uParam0)
{
	func_291(uParam0, 1);
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
		__LIB_14__::func_18(uParam0, bVar0);
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
		if (uParam0->f_171 != 0 || func_292(uParam0))
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
	__LIB_6__::func_413(joaat("WEATHER_GROUP_GOOD_VISIBILITY"), 0, 0, 1103626240 /* Float: 25f */);
	MISC::_0x745808BB01CEC6B9(1f);
	return 5;
}

int func_96(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar0 = 7;
	iVar1 = iParam1;
	__LIB_1__::func_683(&(Local_14.f_189), 262144);
	switch (iVar1)
	{
		case 0:
			switch (Local_14.f_95)
			{
				case 0:
					__LIB_0__::func_19(&(Local_14.f_95), 1);
					if (!func_297(uParam0, &(Local_14.f_278[0]), func_193(0), func_207(0), func_208(0), 0, 0, 1, joaat("META_OUTFIT_DEFAULT"), 1, 1, joaat("REL_PLAYER_LIKE"), 1))
					{
						return 2;
					}
					if (!func_297(uParam0, &(Local_14.f_278[1]), func_193(4), func_207(1), func_208(1), 0, 0, 0, 24387074, 1, 1, joaat("REL_PLAYER_LIKE"), 1))
					{
						return 2;
					}
					if (!func_297(uParam0, &(Local_14.f_278[3]), func_193(6), func_207(4), func_208(4), 0, "MNR1_TOWNFOLK_1", 0, 24387074, 1, 0, joaat("REL_PLAYER_LIKE"), 1))
					{
						return 2;
					}
					if (!func_297(uParam0, &(Local_14.f_278[4]), func_193(6), func_207(5), func_208(5), 0, "MNR1_TOWNFOLK_2", 0, 24387074, 1, 0, joaat("REL_PLAYER_LIKE"), 1))
					{
						return 2;
					}
					if (!func_297(uParam0, &(Local_14.f_278[5]), func_193(6), func_207(6), func_208(6), 0, "MNR1_TOWNFOLK_3", 0, 24387074, 1, 0, joaat("REL_PLAYER_LIKE"), 1))
					{
						return 2;
					}
					if (!func_297(uParam0, &(Local_14.f_278[6]), func_193(6), func_207(7), func_208(7), 0, "MNR1_TOWNFOLK_4", 0, 24387074, 1, 0, joaat("REL_PLAYER_LIKE"), 1))
					{
						return 2;
					}
					if (!func_297(uParam0, &(Local_14.f_278[7]), func_193(6), func_207(8), func_208(8), 0, "MNR1_TOWNFOLK_5", 0, 24387074, 1, 0, joaat("REL_PLAYER_LIKE"), 1))
					{
						return 2;
					}
					if (!func_297(uParam0, &(Local_14.f_278[8]), func_193(6), func_207(9), func_208(9), 0, "MNR1_TOWNFOLK_6", 0, 24387074, 1, 0, joaat("REL_PLAYER_LIKE"), 1))
					{
						return 2;
					}
					if (!func_297(uParam0, &(Local_14.f_278[9]), func_193(5), func_207(8), func_208(10), 0, "MNR1_SICK_WOMAN", 0, 24387074, 1, 0, joaat("REL_PLAYER_LIKE"), 1))
					{
						return 2;
					}
					if (!func_297(uParam0, &(Local_14.f_278[11]), func_193(7), func_207(12), func_208(12), 0, 0, 1, joaat("META_OUTFIT_DEFAULT"), 1, 0, joaat("REL_PLAYER_LIKE"), 1))
					{
						return 2;
					}
					if (!func_298(&(Local_14.f_154[16]), func_195(16), func_207(12)))
					{
						return 2;
					}
					if (!func_298(&(Local_14.f_154[13]), func_195(13), func_207(12)))
					{
						return 2;
					}
					if (!func_298(&(Local_14.f_154[14]), func_195(14), func_207(12)))
					{
						return 2;
					}
					if (!func_298(&(Local_14.f_154[15]), func_195(15), func_207(12)))
					{
						return 2;
					}
					if (!func_298(&(Local_14.f_154[17]), func_195(17), func_207(12)))
					{
						return 2;
					}
					if (!func_298(&(Local_14.f_154[18]), func_195(18), func_207(12)))
					{
						return 2;
					}
					if (!func_298(&(Local_14.f_154[19]), func_195(19), func_207(12)))
					{
						return 2;
					}
					if (!func_298(&(Local_14.f_154[20]), func_195(20), func_207(12)))
					{
						return 2;
					}
					if (!func_298(&(Local_14.f_154[21]), func_195(21), func_207(12)))
					{
						return 2;
					}
					if (!func_298(&(Local_14.f_154[22]), func_195(21), func_207(12)))
					{
						return 2;
					}
					if (!func_298(&(Local_14.f_154[23]), func_195(23), func_207(12)))
					{
						return 2;
					}
					if (!func_298(&(Local_14.f_154[24]), func_195(24), func_207(12)))
					{
						return 2;
					}
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, func_207(20), func_208(20), true, false, true);
					ENTITY::_0x9587913B9E772D29(Global_35, 0);
					__LIB_2__::func_259(&(Local_14.f_270));
					return 2;
				case 1:
					if (!__LIB_4__::func_511() && !__LIB_12__::func_936(uParam0))
					{
						if (!func_301(uParam0, &(Local_14.f_111), func_207(2), func_208(2)) || (!__LIB_0__::func_491(Local_14.f_111, -76381094) && __LIB_9__::func_178(&(Local_14.f_270)) < 5f))
						{
							iVar2 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(func_207(2), joaat("PROP_HITCHINGPOST"), 5f, 1, false);
							if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar2))
							{
								TASK::_TASK_USE_SCENARIO_POINT(Local_14.f_111, iVar2, 0, -1, true, true, joaat("PROP_HITCHINGPOST"), false, -1f, false);
							}
							return 2;
						}
						if (!func_303(&Local_14) && __LIB_9__::func_178(&(Local_14.f_270)) < 10f)
						{
							return 2;
						}
					}
					__LIB_0__::func_19(&(Local_14.f_95), 2);
					return 2;
				case 2:
					if (__LIB_0__::func_272(Global_35, 0) && !PED::_0xA0BC8FAED8CFEB3C(Global_35))
					{
						return 2;
					}
					if (__LIB_0__::func_272(Local_14.f_278[0], 0) && !PED::_0xA0BC8FAED8CFEB3C(Local_14.f_278[0]))
					{
						return 2;
					}
					if (__LIB_0__::func_272(Local_14.f_278[3], 0) && !PED::_0xA0BC8FAED8CFEB3C(Local_14.f_278[3]))
					{
						return 2;
					}
					if (__LIB_0__::func_272(Local_14.f_278[4], 0) && !PED::_0xA0BC8FAED8CFEB3C(Local_14.f_278[4]))
					{
						return 2;
					}
					if (__LIB_0__::func_272(Local_14.f_278[5], 0) && !PED::_0xA0BC8FAED8CFEB3C(Local_14.f_278[5]))
					{
						return 2;
					}
					if (__LIB_0__::func_272(Local_14.f_278[6], 0) && !PED::_0xA0BC8FAED8CFEB3C(Local_14.f_278[6]))
					{
						return 2;
					}
					if (__LIB_0__::func_272(Local_14.f_278[7], 0) && !PED::_0xA0BC8FAED8CFEB3C(Local_14.f_278[7]))
					{
						return 2;
					}
					if (__LIB_0__::func_272(Local_14.f_278[8], 0) && !PED::_0xA0BC8FAED8CFEB3C(Local_14.f_278[8]))
					{
						return 2;
					}
					if (__LIB_0__::func_272(Local_14.f_278[11], 0) && !PED::_0xA0BC8FAED8CFEB3C(Local_14.f_278[11]))
					{
						return 2;
					}
					if (__LIB_0__::func_272(Local_14.f_278[9], 0) && !PED::_0xA0BC8FAED8CFEB3C(Local_14.f_278[9]))
					{
						return 2;
					}
					if (MAP::DOES_BLIP_EXIST(Global_1347702[uParam0->f_174 /*49*/].f_37))
					{
						MAP::REMOVE_BLIP(&(Global_1347702[uParam0->f_174 /*49*/].f_37));
					}
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_14.f_278[3], 471.28f, 2228.15f, 247.32f, 25.25f, true, false, true);
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_14.f_278[4], 467.21f, 2243.28f, 248.26f, -93.49f, true, false, true);
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_14.f_278[5], 471.57f, 2229.08f, 247.33f, 81.63f, true, false, true);
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_14.f_278[6], 451.37f, 2214.55f, 246.06f, 147.77f, true, false, true);
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_14.f_278[7], 465.54f, 2235.56f, 247.56f, -136.98f, true, false, true);
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_14.f_278[8], 457.91f, 2235.23f, 247.64f, 84.39f, true, false, true);
					iVar3 = 3;
					while (iVar3 <= 8)
					{
						ENTITY::_0x9587913B9E772D29(Local_14.f_278[iVar3], 0);
						func_305(Local_14.f_278[iVar3], 0);
						iVar3++;
					}
					if (!ENTITY::IS_ENTITY_DEAD(Local_14.f_278[1]))
					{
						AITRANSPORT::_0xBA8818212633500A(Local_14.f_278[1], 0, 1);
					}
					__LIB_0__::func_489(0, 0);
					if (__LIB_4__::func_511() || __LIB_12__::func_936(uParam0))
					{
						__LIB_13__::func_33(uParam0, 0);
						func_291(uParam0, 1);
						iVar0 = 5;
					}
					else
					{
						__LIB_12__::func_937(uParam0, 0);
						__LIB_13__::func_33(uParam0, 1);
						iVar0 = 7;
					}
					break;
			}
			break;
		case 1:
			switch (Local_14.f_95)
			{
				case 0:
					STREAMING::REQUEST_ANIM_DICT("VEH_HORSEBACK@HORSE@STANDARD@SEAT_RIDER@LEFT@EXIT@LAND@PED@SADDLE@MOUNT@FROM_IDLE@GET_OFF");
					if (!STREAMING::HAS_ANIM_DICT_LOADED("VEH_HORSEBACK@HORSE@STANDARD@SEAT_RIDER@LEFT@EXIT@LAND@PED@SADDLE@MOUNT@FROM_IDLE@GET_OFF"))
					{
						return 2;
					}
					PED::_0xF7EA250B9A919E03(joaat("CROUCH"), Global_35);
					if (!PED::_0x854BC9B1A1CCD034(joaat("CROUCH"), Global_35))
					{
						return 2;
					}
					if (!func_311(&(Local_14.f_102[3]), &(Local_14.f_189), func_309(3), func_310(), 1, 0))
					{
						return 2;
					}
					if (!func_312(uParam0, &Local_14, 1))
					{
						return 2;
					}
					if (!func_301(uParam0, &(Local_14.f_111), func_207(24), func_208(24)))
					{
						return 2;
					}
					__LIB_0__::func_19(&(Local_14.f_95), 1);
					return 2;
				case 1:
					if (!ENTITY::IS_ENTITY_DEAD(Local_14.f_278[0]))
					{
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_14.f_278[0], func_207(30), func_208(30), true, false, true);
					}
					if (!ENTITY::IS_ENTITY_DEAD(Local_14.f_278[1]))
					{
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_14.f_278[1], func_207(30), func_208(30), true, false, true);
						AITRANSPORT::_0xBA8818212633500A(Local_14.f_278[1], 0, 1);
						ENTITY::_0x9587913B9E772D29(Local_14.f_278[1], 0);
					}
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, func_207(29), func_208(29), true, false, true);
					if (!ENTITY::IS_ENTITY_DEAD(Local_14.f_111))
					{
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_14.f_111, func_207(29), func_208(29), true, false, true);
						ENTITY::_0x9587913B9E772D29(Local_14.f_111, 0);
					}
					if (!PED::IS_PED_ON_MOUNT(Global_35))
					{
						PED::_SET_PED_ON_MOUNT(Global_35, Local_14.f_111, -1, true);
					}
					if (!PED::IS_PED_ON_MOUNT(Local_14.f_278[0]))
					{
						PED::_SET_PED_ON_MOUNT(Local_14.f_278[0], Local_14.f_278[1], -1, true);
					}
					if (func_313())
					{
						func_314(0);
						__LIB_1__::func_683(&(Local_14.f_189), 8);
					}
					__LIB_0__::func_19(&(Local_14.f_95), 2);
					return 2;
				case 2:
					if (!PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Local_14.f_278[0], true))
					{
						return 2;
					}
					if (!PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true))
					{
						return 2;
					}
					if (!ENTITY::IS_ENTITY_DEAD(Global_35) && !PED::_0xA0BC8FAED8CFEB3C(Global_35))
					{
						return 2;
					}
					if (!ENTITY::IS_ENTITY_DEAD(Local_14.f_278[0]) && !PED::_0xA0BC8FAED8CFEB3C(Local_14.f_278[0]))
					{
						return 2;
					}
					if (!ENTITY::IS_ENTITY_DEAD(Local_14.f_278[1]) && !PED::_0xA0BC8FAED8CFEB3C(Local_14.f_278[1]))
					{
						return 2;
					}
					if (!ENTITY::IS_ENTITY_DEAD(Local_14.f_111) && !PED::_0xA0BC8FAED8CFEB3C(Local_14.f_111))
					{
						return 2;
					}
					if (VOLUME::_DOES_VOLUME_EXIST(Local_14.f_326[9]))
					{
						PATHFIND::_0xC1799FAFD2FDF52B(Local_14.f_326[9], 0, 0, 0);
					}
					if (VOLUME::_DOES_VOLUME_EXIST(Local_14.f_326[10]))
					{
						PATHFIND::_0xC1799FAFD2FDF52B(Local_14.f_326[10], 0, 0, 0);
					}
					func_315(uParam0, &Local_14, 8);
					__LIB_0__::func_19(&(Local_14.f_92), 6);
					Local_14.f_197 = { func_317(1) };
					__LIB_0__::func_19(&(Local_14.f_83), 1);
					POPULATION::_0x2161278C6322F740(12288, 0, 0, -1, -1, 0);
					__LIB_1__::func_572(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 200f, 0, 0, 1, 1, 0);
					TASK::TASK_DISMOUNT_ANIMAL(Local_14.f_278[0], 0, 0, 0, 0, 0);
					__LIB_13__::func_33(uParam0, 1);
					__LIB_0__::func_489(0, 0);
					__LIB_12__::func_937(uParam0, 1);
					__LIB_0__::func_19(&(Local_14.f_82), 6);
					CAM::DO_SCREEN_FADE_IN(500);
					iVar0 = 7;
					break;
			}
			break;
		case 2:
			switch (Local_14.f_95)
			{
				case 0:
					PED::_0xF7EA250B9A919E03(joaat("CROUCH"), Global_35);
					if (!PED::_0x854BC9B1A1CCD034(joaat("CROUCH"), Global_35))
					{
						return 2;
					}
					if (!func_312(uParam0, &Local_14, 0))
					{
						return 2;
					}
					if (!func_301(uParam0, &(Local_14.f_111), func_207(27), func_208(27)))
					{
						return 2;
					}
					if (!func_297(uParam0, &(Local_14.f_278[0]), func_193(0), func_207(30), func_208(30), 0, 0, 1, joaat("META_OUTFIT_DEFAULT"), 1, 1, joaat("REL_PLAYER_LIKE"), 1))
					{
						return 2;
					}
					if (!func_297(uParam0, &(Local_14.f_278[1]), func_193(4), func_207(30), func_208(30), 0, 0, 0, 24387074, 1, 1, joaat("REL_PLAYER_LIKE"), 1))
					{
						return 2;
					}
					__LIB_0__::func_19(&(Local_14.f_95), 1);
					return 2;
				case 1:
					func_321(&Local_14);
					__LIB_0__::func_19(&(Local_14.f_95), 2);
					return 2;
				case 2:
					if (!ENTITY::IS_ENTITY_DEAD(Local_14.f_319[0]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_14.f_291[0]))
						{
							if (!PED::IS_PED_IN_VEHICLE(Local_14.f_291[0], Local_14.f_319[0], false))
							{
								TASK::TASK_WARP_PED_INTO_VEHICLE(Local_14.f_291[0], Local_14.f_319[0], -1);
								return 2;
							}
						}
						if (!ENTITY::IS_ENTITY_DEAD(Local_14.f_291[1]))
						{
							if (!PED::IS_PED_IN_VEHICLE(Local_14.f_291[1], Local_14.f_319[0], false))
							{
								TASK::TASK_WARP_PED_INTO_VEHICLE(Local_14.f_291[1], Local_14.f_319[0], 0);
								return 2;
							}
						}
					}
					if (!ENTITY::IS_ENTITY_DEAD(Global_35) && !PED::_0xA0BC8FAED8CFEB3C(Global_35))
					{
						return 2;
					}
					if (!ENTITY::IS_ENTITY_DEAD(Local_14.f_111) && !PED::_0xA0BC8FAED8CFEB3C(Local_14.f_111))
					{
						return 2;
					}
					if (!ENTITY::IS_ENTITY_DEAD(Local_14.f_278[0]) && !PED::_0xA0BC8FAED8CFEB3C(Local_14.f_278[0]))
					{
						return 2;
					}
					if (!ENTITY::IS_ENTITY_DEAD(Local_14.f_278[1]) && !PED::_0xA0BC8FAED8CFEB3C(Local_14.f_278[1]))
					{
						return 2;
					}
					if (!ENTITY::IS_ENTITY_DEAD(Local_14.f_291[0]) && !PED::_0xA0BC8FAED8CFEB3C(Local_14.f_291[0]))
					{
						return 2;
					}
					if (!ENTITY::IS_ENTITY_DEAD(Local_14.f_291[1]) && !PED::_0xA0BC8FAED8CFEB3C(Local_14.f_291[1]))
					{
						return 2;
					}
					if (!ENTITY::IS_ENTITY_DEAD(Local_14.f_111) && !PED::_0xA0BC8FAED8CFEB3C(Local_14.f_111))
					{
						return 2;
					}
					if (VOLUME::_DOES_VOLUME_EXIST(Local_14.f_326[9]))
					{
						PATHFIND::_0xC1799FAFD2FDF52B(Local_14.f_326[9], 0, 0, 0);
					}
					if (VOLUME::_DOES_VOLUME_EXIST(Local_14.f_326[10]))
					{
						PATHFIND::_0xC1799FAFD2FDF52B(Local_14.f_326[10], 0, 0, 0);
					}
					POPULATION::_0x2161278C6322F740(12288, 0, 0, -1, -1, 0);
					__LIB_1__::func_572(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 200f, 0, 0, 1, 1, 0);
					__LIB_0__::func_489(0, 0);
					__LIB_12__::func_937(uParam0, 2);
					if (__LIB_4__::func_511())
					{
						__LIB_13__::func_33(uParam0, 1);
						func_291(uParam0, 1);
						iVar0 = 5;
					}
					else
					{
						__LIB_1__::func_571(Local_14.f_278[0], Local_14.f_278[1], 0, -1, 1);
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_14.f_278[1], func_317(9), func_323(9), true, false, true);
						ENTITY::_0x9587913B9E772D29(Local_14.f_278[1], 0);
						TASK::TASK_STAND_STILL(Local_14.f_111, -1);
						ENTITY::SET_ENTITY_HEADING(Global_35, __LIB_3__::func_978(Global_35, Local_14.f_111, 1));
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_14.f_319[0], func_207(25), func_208(25), true, false, true);
						func_325(&Local_14, 1);
						func_326(1, 0);
						PED::_0x2208438012482A1A(Local_14.f_291[0], false, false);
						ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_14.f_319[0], true);
						__LIB_0__::func_489(0, 0);
						__LIB_13__::func_33(uParam0, 2);
						iVar0 = 7;
					}
					break;
			}
			break;
		case 3:
			switch (Local_14.f_95)
			{
				case 0:
					if (!func_298(&(Local_14.f_154[10]), func_195(10), func_317(6)))
					{
						return 2;
					}
					if (!func_298(&(Local_14.f_154[11]), func_195(11), func_317(6)))
					{
						return 2;
					}
					if (!func_298(&(Local_14.f_154[12]), func_195(12), func_317(6)))
					{
						return 2;
					}
					if (!func_298(&(Local_14.f_154[7]), func_195(7), func_317(6)))
					{
						return 2;
					}
					if (!func_298(&(Local_14.f_154[8]), func_195(8), func_317(6)))
					{
						return 2;
					}
					if (!func_298(&(Local_14.f_154[9]), func_195(9), func_317(6)))
					{
						return 2;
					}
					if (!func_327(uParam0, &(Local_14.f_111), 24))
					{
						return 2;
					}
					if (!func_328(uParam0, &Local_14))
					{
						return 2;
					}
					if (!func_329(&Local_14))
					{
						return 2;
					}
					__LIB_0__::func_19(&(Local_14.f_95), 1);
					return 2;
				case 1:
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, func_207(23), func_208(23), true, false, true);
					ENTITY::_0x9587913B9E772D29(Global_35, 0);
					if (!ENTITY::IS_ENTITY_DEAD(Local_14.f_111))
					{
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_14.f_111, func_207(24), func_208(24), true, false, true);
					}
					if (!ENTITY::IS_ENTITY_DEAD(Local_14.f_319[0]))
					{
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_14.f_319[0], func_207(25), func_208(25), true, false, true);
					}
					if (VOLUME::_DOES_VOLUME_EXIST(Local_14.f_326[6]) && !__LIB_0__::func_27(Local_14.f_192, 1))
					{
						PED::_0x7C00CFC48A782DC0(Local_14.f_326[6], Local_14.f_319[0], 0f, -1f, 0f, 0f, 0f, 0f, 2, 1);
						__LIB_1__::func_683(&(Local_14.f_192), 1);
					}
					__LIB_0__::func_19(&(Local_14.f_95), 2);
					return 2;
				case 2:
					if (!ENTITY::IS_ENTITY_DEAD(Global_35) && !PED::_0xA0BC8FAED8CFEB3C(Global_35))
					{
						return 2;
					}
					if (!ENTITY::IS_ENTITY_DEAD(Local_14.f_291[0]) && !PED::_0xA0BC8FAED8CFEB3C(Local_14.f_291[0]))
					{
						return 2;
					}
					if (!ENTITY::IS_ENTITY_DEAD(Local_14.f_291[1]) && !PED::_0xA0BC8FAED8CFEB3C(Local_14.f_291[1]))
					{
						return 2;
					}
					if (!ENTITY::IS_ENTITY_DEAD(Local_14.f_111) && !PED::_0xA0BC8FAED8CFEB3C(Local_14.f_111))
					{
						return 2;
					}
					if (VOLUME::_DOES_VOLUME_EXIST(Local_14.f_326[9]))
					{
						PATHFIND::_0xC1799FAFD2FDF52B(Local_14.f_326[9], 0, 0, 0);
					}
					if (VOLUME::_DOES_VOLUME_EXIST(Local_14.f_326[10]))
					{
						PATHFIND::_0xC1799FAFD2FDF52B(Local_14.f_326[10], 0, 0, 0);
					}
					POPULATION::_0x2161278C6322F740(12288, 0, 0, -1, -1, 0);
					__LIB_1__::func_572(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 200f, 0, 0, 1, 1, 0);
					__LIB_13__::func_33(uParam0, 2);
					__LIB_0__::func_489(0, 0);
					__LIB_12__::func_937(uParam0, 3);
					CAM::DO_SCREEN_FADE_IN(500);
					iVar0 = 7;
					break;
			}
			break;
		case 4:
			switch (Local_14.f_95)
			{
				case 0:
					if (!func_297(uParam0, &(Local_14.f_278[2]), func_193(5), func_207(3), func_208(3), 2, 0, 0, 24387074, 0, 0, joaat("REL_PLAYER_LIKE"), 0))
					{
						return 2;
					}
					if (!func_298(&(Local_14.f_154[0]), func_195(0), func_317(5)))
					{
						return 2;
					}
					if (!func_298(&(Local_14.f_154[1]), func_195(1), func_317(5)))
					{
						return 2;
					}
					if (!func_298(&(Local_14.f_154[2]), func_195(2), func_317(5)))
					{
						return 2;
					}
					if (!func_327(uParam0, &(Local_14.f_111), 19))
					{
						return 2;
					}
					__LIB_0__::func_19(&(Local_14.f_95), 1);
					return 2;
				case 1:
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, func_207(18), func_208(18), true, false, true);
					if (!ENTITY::IS_ENTITY_DEAD(Local_14.f_111))
					{
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_14.f_111, func_207(19), func_208(19), true, false, true);
					}
					if (!PED::IS_PED_ON_MOUNT(Global_35))
					{
						PED::_SET_PED_ON_MOUNT(Global_35, Local_14.f_111, -1, true);
					}
					__LIB_0__::func_19(&(Local_14.f_95), 2);
					return 2;
				case 2:
					if (!PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true))
					{
						return 2;
					}
					if (!ENTITY::IS_ENTITY_DEAD(Global_35) && !PED::_0xA0BC8FAED8CFEB3C(Global_35))
					{
						return 2;
					}
					if (!ENTITY::IS_ENTITY_DEAD(Local_14.f_111) && !PED::_0xA0BC8FAED8CFEB3C(Local_14.f_111))
					{
						return 2;
					}
					__LIB_13__::func_33(uParam0, 2);
					__LIB_0__::func_489(0, 0);
					__LIB_12__::func_937(uParam0, 4);
					CAM::DO_SCREEN_FADE_IN(500);
					iVar0 = 7;
					break;
			}
			break;
		case 5:
			switch (Local_14.f_95)
			{
				case 0:
					if (!func_311(&(Local_14.f_102[4]), &(Local_14.f_189), func_309(4), "pl_idle", 1, 1))
					{
						return 2;
					}
					if (!func_297(uParam0, &(Local_14.f_278[0]), func_193(0), func_207(0), func_208(0), 0, 0, 1, joaat("META_OUTFIT_DEFAULT"), 1, 1, joaat("REL_PLAYER_LIKE"), 1))
					{
						return 2;
					}
					if (!func_297(uParam0, &(Local_14.f_278[1]), func_193(4), func_207(1), func_208(1), 0, 0, 0, 24387074, 1, 1, joaat("REL_PLAYER_LIKE"), 1))
					{
						return 2;
					}
					if (!func_297(uParam0, &(Local_14.f_278[2]), func_193(5), func_207(3), func_208(3), 2, 0, 0, 24387074, 0, 0, joaat("REL_PLAYER_LIKE"), 0))
					{
						return 2;
					}
					if (!func_298(&(Local_14.f_154[0]), func_195(0), func_317(5)))
					{
						return 2;
					}
					if (!func_298(&(Local_14.f_154[1]), func_195(1), func_317(5)))
					{
						return 2;
					}
					if (!func_298(&(Local_14.f_154[2]), func_195(2), func_317(5)))
					{
						return 2;
					}
					if (!func_298(&(Local_14.f_154[3]), func_195(3), func_317(5)))
					{
						return 2;
					}
					if (!func_298(&(Local_14.f_154[4]), func_195(4), func_317(5)))
					{
						return 2;
					}
					if (!func_298(&(Local_14.f_154[5]), func_195(5), func_317(5)))
					{
						return 2;
					}
					__LIB_0__::func_19(&(Local_14.f_95), 1);
					return 2;
				case 1:
					if (func_327(uParam0, &(Local_14.f_111), 2) && !__LIB_0__::func_491(Local_14.f_111, -76381094))
					{
						iVar4 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(func_207(2), joaat("PROP_HITCHINGPOST"), 5f, 1, false);
						if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar4))
						{
							TASK::_TASK_USE_SCENARIO_POINT(Local_14.f_111, iVar4, 0, -1, true, true, joaat("PROP_HITCHINGPOST"), false, -1f, false);
						}
						return 2;
					}
					if (!func_303(&Local_14))
					{
						return 2;
					}
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, func_207(31), func_208(31), true, false, true);
					ENTITY::_0x9587913B9E772D29(Global_35, 0);
					__LIB_0__::func_19(&(Local_14.f_95), 2);
					return 2;
				case 2:
					if (__LIB_0__::func_272(Global_35, 0) && !PED::_0xA0BC8FAED8CFEB3C(Global_35))
					{
						return 2;
					}
					if (__LIB_0__::func_272(Local_14.f_278[0], 0) && !PED::_0xA0BC8FAED8CFEB3C(Local_14.f_278[0]))
					{
						return 2;
					}
					if (__LIB_0__::func_272(Local_14.f_278[2], 0) && !PED::_0xA0BC8FAED8CFEB3C(Local_14.f_278[2]))
					{
						return 2;
					}
					func_330(1, 0);
					func_331(Local_14.f_278[2], joaat("REL_PLAYER_LIKE"), func_207(3), func_208(3));
					__LIB_1__::func_683(&(Local_14.f_189), 1024);
					__LIB_13__::func_33(uParam0, 2);
					__LIB_0__::func_489(0, 0);
					if (__LIB_4__::func_511())
					{
						iVar0 = 5;
						func_291(uParam0, 0);
					}
					else
					{
						iVar0 = 7;
						func_291(uParam0, 1);
					}
					__LIB_12__::func_937(uParam0, 29);
					break;
			}
			break;
	}
	return iVar0;
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
		__LIB_14__::func_18(uParam0, 0);
		if (!__LIB_0__::func_1(uParam0->f_172, 1048576))
		{
			return false;
		}
	}
	else
	{
		__LIB_12__::func_668();
		__LIB_12__::func_669(uParam0);
		if (!func_338(uParam0))
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
		__LIB_12__::func_997(uParam0, func_61(0), func_61(1), 0, 1, 1);
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
	return func_344(Var0, &(uParam0->f_206), uParam0);
}

int func_103(var uParam0)
{
	switch (__LIB_13__::func_22(uParam0))
	{
		case 0:
			__LIB_13__::func_33(uParam0, 1);
			break;
		case 1:
			__LIB_13__::func_33(uParam0, 2);
			break;
		case 2:
			__LIB_13__::func_33(uParam0, -1);
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
				__LIB_12__::func_997(uParam0, func_61(0), func_61(1), 0, 1, 1);
			}
			return false;
		}
	}
	return false;
}

int func_107(var uParam0)
{
	int iVar0;
	func_351(&Local_14);
	if (!__LIB_0__::func_27(Local_14.f_189, 2))
	{
		__LIB_1__::func_600(0);
		__LIB_1__::func_683(&(Local_14.f_189), 2);
	}
	if (__LIB_12__::func_645(uParam0) < 3 && !__LIB_0__::func_27(Local_14.f_189, 512))
	{
		__LIB_1__::func_683(&(Local_14.f_189), 512);
	}
	if (__LIB_12__::func_645(uParam0) == 2 || __LIB_12__::func_645(uParam0) == 3)
	{
		func_354(&Local_14);
	}
	if (!__LIB_0__::func_27(Local_14.f_190, 1024))
	{
		if (__LIB_2__::func_901(Local_14.f_291[0], Global_35) || __LIB_2__::func_901(Local_14.f_291[1], Global_35))
		{
			__LIB_1__::func_683(&(Local_14.f_190), 1024);
		}
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Local_14.f_326[6]) && __LIB_0__::func_393(Global_35, Local_14.f_326[6], 0, 1))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 129, true);
	}
	__LIB_14__::func_275(56, Local_14.f_326[0], &(Local_14.f_355));
	switch (__LIB_12__::func_645(uParam0))
	{
		case 0:
			PLAYER::_0xC71D07C96946E263(PLAYER::PLAYER_ID(), Local_14.f_111);
			if (func_358(uParam0, &Local_14))
			{
				__LIB_1__::func_561(&(Local_14.f_210));
				__LIB_12__::func_937(uParam0, 1);
			}
			break;
		case 1:
			PLAYER::_0xC71D07C96946E263(PLAYER::PLAYER_ID(), Local_14.f_111);
			if (func_359(uParam0, &Local_14))
			{
				__LIB_1__::func_561(&(Local_14.f_210));
				__LIB_12__::func_937(uParam0, 2);
				return 5;
			}
			break;
		case 2:
			if (func_360(uParam0, &Local_14))
			{
				__LIB_1__::func_561(&(Local_14.f_210));
				if (__LIB_0__::func_27(Local_14.f_190, 262144))
				{
					__LIB_12__::func_937(uParam0, 4);
				}
				else
				{
					__LIB_12__::func_937(uParam0, 3);
				}
			}
			break;
		case 3:
			if (func_361(uParam0, &Local_14))
			{
				__LIB_1__::func_561(&(Local_14.f_210));
				__LIB_12__::func_937(uParam0, 4);
			}
			break;
		case 4:
			if (func_362(uParam0, &Local_14))
			{
				__LIB_12__::func_937(uParam0, 29);
				if (!ENTITY::IS_ENTITY_DEAD(Local_14.f_111) && !__LIB_0__::func_48(Global_35, Local_14.f_111, 40f, 1))
				{
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_14.f_111, func_207(28), func_208(28), true, false, true);
					iVar0 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(ENTITY::GET_ENTITY_COORDS(Local_14.f_111, true, false), joaat("PROP_HITCHINGPOST"), 4f, 1, false);
					if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar0))
					{
						TASK::_TASK_USE_SCENARIO_POINT(Local_14.f_111, iVar0, 0, -1, false, true, 0, false, -1f, false);
					}
					else
					{
						TASK::_TASK_START_SCENARIO_IN_PLACE(Local_14.f_111, joaat("WORLD_ANIMAL_HORSE_GRAZING_DOMESTIC"), -1, false, 0, -1f, false);
						TASK::TASK_STAND_STILL(Local_14.f_111, -1);
					}
				}
				return 5;
			}
			break;
		case 29:
			return 8;
	}
	if (__LIB_0__::func_27(Local_14.f_189, 262144))
	{
		__LIB_1__::func_681(&(Local_14.f_189), 262144);
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
		func_400(Global_1347702[iParam0 /*49*/].f_15, bParam4, bParam2, bParam6, bParam5);
	}
	else
	{
		__LIB_1__::func_809(Global_1347702[iParam0 /*49*/].f_15, bParam6);
	}
	__LIB_10__::func_833(iParam0);
}

bool func_150(var uParam0)
{
	if (__LIB_12__::func_644(uParam0) == 0 && __LIB_0__::func_27(Local_14.f_189, 1024))
	{
		return func_428(uParam0, &Local_14);
	}
	return true;
}

void func_159(var uParam0)
{
	int iVar0;
	func_429(uParam0);
	if (__LIB_0__::func_27(Local_14.f_189, 32768))
	{
		__LIB_12__::func_991(&Local_14, Local_14.f_278[0]);
		__LIB_11__::func_382(uParam0->f_174, 0);
		__LIB_1__::func_681(&(Local_14.f_189), 32768);
	}
	__LIB_1__::func_721(7);
	func_431(&(Local_14.f_278[0]));
	__LIB_14__::func_17(&(Local_14.f_111));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("REL_GANG_DUTCHS"), joaat("REL_CIVNATIVE"));
	__LIB_0__::func_172(Local_14.f_343);
	if (VOLUME::_DOES_VOLUME_EXIST(Local_14.f_326[3]))
	{
		POPULATION::_0x74C2B3DC0B294102(Local_14.f_326[3]);
		if (PED::_0x91A5F9CBEBB9D936(Local_14.f_275))
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(Local_14.f_275, false);
		}
	}
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if (iVar0 != 0)
		{
			func_431(&(Local_14.f_278[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_319[iVar0]))
		{
			AITRANSPORT::_0xBA8818212633500A(Local_14.f_319[iVar0], 0, 1);
			VEHICLE::_0xCBF88256E44D5D39(Local_14.f_319[iVar0], true);
			if (__LIB_12__::func_644(uParam0) == 1)
			{
				func_434(&(Local_14.f_319[iVar0]));
			}
			else
			{
				func_435(&(Local_14.f_319[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_14.f_154)
	{
		__LIB_1__::func_951(&(Local_14.f_154[iVar0]));
		iVar0++;
	}
	HUD::_DISPLAY_HUD_COMPONENT(-1249243147);
	MISC::_0x745808BB01CEC6B9(0f);
	AUDIO::SET_AUDIO_FLAG("naSETVehExitUseActiveTransportOnly", false);
}

int func_193(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("CS_CAPTAINMONROE");
		case 1:
			return joaat("S_M_M_ARMY_01");
		case 2:
			return joaat("S_M_M_ARMY_01");
		case 3:
			return joaat("S_M_M_ARMY_01");
		case 4:
			return joaat("A_C_HORSE_ANDALUSIAN_DARKBAY");
		case 5:
			return joaat("A_F_M_WAPTOWNFOLK_01");
		case 6:
			return joaat("A_M_O_WAPTOWNFOLK_01");
		case 7:
			return joaat("CS_WAPITIBOY");
		default:
			break;
	}
	return 0;
}

int func_194(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("ARMYSUPPLYWAGON");
		default:
			break;
	}
	return 0;
}

int func_195(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("P_CS_BEDROLLCLSD01X");
		case 1:
			return joaat("P_CS_BLANKET01X");
		case 2:
			return joaat("P_JOURNAL01X");
		case 3:
		case 4:
		case 5:
			return joaat("S_FIRSTAIDKIT_SML01X");
		case 6:
			return joaat("P_STRONGBOX01X");
		case 7:
		case 8:
		case 9:
			return joaat("P_VIALMEDICINE01X");
		case 10:
		case 11:
		case 12:
			return joaat("S_FIRSTAIDKIT_SML01X");
		case 13:
		case 14:
		case 15:
			return joaat("P_BOWLTERRACOTTA01X");
		case 16:
			return joaat("P_CS_BLANKET01X");
		case 17:
			return joaat("P_LADLE02X");
		case 18:
		case 19:
		case 20:
			return joaat("P_RUSTYSPOON01X");
		case 21:
			return joaat("P_BAG01X");
		case 22:
			return joaat("P_KETTLE03X");
		case 23:
			return joaat("P_BOWLNA01X");
		case 24:
			return joaat("P_CHAIR_CRATE02X");
		default:
			break;
	}
	return 0;
}

char* func_196(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "rcm_monroe1_monroe_path";
		case 1:
			return "rcm_monroe1_monroe_path_back";
		case 2:
			return "rcm_monroe1_convoy";
		default:
			break;
	}
	return "NULL";
}

Vector3 func_207(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 471.1853f, 2226.889f, 246.2259f;
		case 1:
			return 491.3592f, 2222.413f, 246.1221f;
		case 2:
			return 490.2611f, 2219.764f, 246.1656f;
		case 3:
			return 465.74f, 2252.46f, 247.31f;
		case 4:
			return 437.98f, 2228.15f, 247.2f;
		case 5:
			return 439.56f, 2228.11f, 247.2f;
		case 6:
			return 439.95f, 2229.76f, 247.2f;
		case 7:
			return 437.13f, 2229.87f, 247.2f;
		case 8:
			return 436.75f, 2230.62f, 247.2f;
		case 9:
			return 437.14f, 2231.36f, 247.2f;
		case 10:
			return 438.5f, 2231.47f, 247.2f;
		case 11:
			return 439.6f, 2231.15f, 247.2f;
		case 12:
			return 463.5851f, 2230.04f, 246.4216f;
		case 13:
			return 450.2864f, 1202.809f, 177.7588f;
		case 14:
			return 450.7053f, 1193.961f, 177.6354f;
		case 15:
			return 346.4975f, 1191.103f, 177.4903f;
		case 16:
			return 501.57f, 691.78f, 115.9f;
		case 17:
			return 497.7f, 701.63f, 117.3f;
		case 18:
			return 667.7227f, 1982.125f, 227.3444f;
		case 19:
			return 669.469f, 1981.857f, 227.2296f;
		case 20:
			return 478.52f, 2228.32f, 247.42f;
		case 21:
			return 585.5217f, 1274.184f, 199.5889f;
		case 22:
			return 1265.729f, 1509.506f, 184.4097f;
		case 23:
			return 470.5133f, 1206.513f, 178.7562f;
		case 24:
			return 585.5217f, 1274.184f, 199.5886f;
		case 25:
			return 451.8421f, 1199.089f, 177.5898f;
		case 26:
			return 592.19f, 1273.96f, 199.51f;
		case 27:
			return 590.19f, 1275.96f, 199.51f;
		case 28:
			return 490.5003f, 2219.381f, 246.2784f;
		case 29:
			return 582.22f, 1277.87f, 200.59f;
		case 30:
			return 582.14f, 1271.69f, 200.66f;
		case 31:
			return 464.37f, 2252.12f, 248.31f;
		default:
			break;
	}
	return 1275.196f, 2116.356f, 240.6035f;
}

float func_208(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 311.3701f;
		case 1:
			return 258.2415f;
		case 2:
			return 256.16f;
		case 3:
			return 0f;
		case 4:
			return 0f;
		case 5:
			return 0f;
		case 6:
			return 0f;
		case 7:
			return 0f;
		case 8:
			return 0f;
		case 9:
			return 40f;
		case 10:
			return 0f;
		case 11:
			return 0f;
		case 12:
			return 0f;
		case 13:
			return 272.6336f;
		case 14:
			return 272.6336f;
		case 15:
			return 272.6336f;
		case 16:
			return -10f;
		case 17:
			return -115.21f;
		case 18:
			return 7.3308f;
		case 19:
			return 343.3709f;
		case 20:
			return -118.38f;
		case 21:
			return 83.35f;
		case 22:
			return 176.3292f;
		case 23:
			return 110.0938f;
		case 24:
			return 83.35f;
		case 25:
			return 272.6336f;
		case 26:
			return 33.7772f;
		case 27:
			return 12.2f;
		case 28:
			return 245.7832f;
		case 29:
			return 83.35f;
		case 30:
			return 71.01f;
		case 31:
			return 127.56f;
		default:
			break;
	}
	return 0f;
}

int func_209(vector3 vParam0, var uParam3)
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
		iVar0 = func_488(0, 0);
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

void func_212(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_RESET_FLAG(iParam0, 134, true);
	}
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

void func_234(var uParam0)
{
	func_429(uParam0);
}

void func_248(var uParam0)
{
	if (__LIB_0__::func_1(uParam0->f_172, 16))
	{
		__LIB_12__::func_966(uParam0, 0);
		func_87(uParam0);
	}
}

int func_272(var uParam0)
{
	int iVar0;
	var uVar1;
	int iVar2;
	if (!func_297(uParam0, &(Local_14.f_278[0]), func_193(0), func_207(0), func_208(0), 0, 0, 1, joaat("META_OUTFIT_DEFAULT"), 1, 1, joaat("REL_PLAYER_ALLY"), 1))
	{
		return 0;
	}
	if (!func_297(uParam0, &(Local_14.f_278[1]), func_193(4), func_207(1), func_208(1), 0, 0, 0, 24387074, 1, 1, joaat("REL_PLAYER_ALLY"), 1))
	{
		return 0;
	}
	if (!func_297(uParam0, &(Local_14.f_278[9]), func_193(5), func_207(8), func_208(10), 0, "MNR1_SICK_WOMAN", 0, 24387074, 1, 0, joaat("REL_CIVNATIVE"), 1))
	{
		return 0;
	}
	iVar0 = __LIB_12__::func_767(uParam0);
	if (iVar0 <= 0)
	{
		if (!func_297(uParam0, &(Local_14.f_278[11]), func_193(7), func_207(12), func_208(12), 0, 0, 1, joaat("META_OUTFIT_DEFAULT"), 1, 0, joaat("REL_CIVNATIVE"), 1))
		{
			return 0;
		}
		if (!func_297(uParam0, &(Local_14.f_278[3]), func_193(6), func_207(4), func_208(4), 0, "MNR1_TOWNFOLK_1", 0, 24387074, 1, 0, joaat("REL_CIVNATIVE"), 1))
		{
			return 0;
		}
		if (!func_297(uParam0, &(Local_14.f_278[4]), func_193(6), func_207(5), func_208(5), 0, "MNR1_TOWNFOLK_2", 0, 24387074, 1, 0, joaat("REL_CIVNATIVE"), 1))
		{
			return 0;
		}
		if (!func_297(uParam0, &(Local_14.f_278[5]), func_193(6), func_207(6), func_208(6), 0, "MNR1_TOWNFOLK_3", 0, 24387074, 1, 0, joaat("REL_CIVNATIVE"), 1))
		{
			return 0;
		}
		if (!func_297(uParam0, &(Local_14.f_278[6]), func_193(6), func_207(7), func_208(7), 0, "MNR1_TOWNFOLK_4", 0, 24387074, 1, 0, joaat("REL_CIVNATIVE"), 1))
		{
			return 0;
		}
		if (!func_297(uParam0, &(Local_14.f_278[7]), func_193(6), func_207(8), func_208(8), 0, "MNR1_TOWNFOLK_5", 0, 24387074, 1, 0, joaat("REL_CIVNATIVE"), 1))
		{
			return 0;
		}
		if (!func_297(uParam0, &(Local_14.f_278[8]), func_193(6), func_207(9), func_208(9), 0, "MNR1_TOWNFOLK_6", 0, 24387074, 1, 0, joaat("REL_CIVNATIVE"), 1))
		{
			return 0;
		}
		if (!func_298(&(Local_14.f_154[16]), func_195(16), func_207(12)))
		{
			return 0;
		}
		if (!func_298(&(Local_14.f_154[13]), func_195(13), func_207(12)))
		{
			return 0;
		}
		if (!func_298(&(Local_14.f_154[14]), func_195(14), func_207(12)))
		{
			return 0;
		}
		if (!func_298(&(Local_14.f_154[15]), func_195(15), func_207(12)))
		{
			return 0;
		}
		if (!func_298(&(Local_14.f_154[17]), func_195(17), func_207(12)))
		{
			return 0;
		}
		if (!func_298(&(Local_14.f_154[18]), func_195(18), func_207(12)))
		{
			return 0;
		}
		if (!func_298(&(Local_14.f_154[19]), func_195(19), func_207(12)))
		{
			return 0;
		}
		if (!func_298(&(Local_14.f_154[20]), func_195(20), func_207(12)))
		{
			return 0;
		}
		if (!func_298(&(Local_14.f_154[21]), func_195(21), func_207(12)))
		{
			return 0;
		}
		if (!func_298(&(Local_14.f_154[22]), func_195(21), func_207(12)))
		{
			return 0;
		}
		if (!func_298(&(Local_14.f_154[23]), func_195(23), func_207(12)))
		{
			return 0;
		}
		if (!func_298(&(Local_14.f_154[24]), func_195(24), func_207(12)))
		{
			return 0;
		}
	}
	if (!func_574(&Local_14))
	{
		return 0;
	}
	if (!func_311(&(Local_14.f_102[0]), &(Local_14.f_189), func_309(0), "pl_Base_StirPot", 1, 0))
	{
		return 0;
	}
	__LIB_6__::func_413(joaat("WEATHER_GROUP_GOOD_VISIBILITY"), 0, 0, 1103626240 /* Float: 25f */);
	MISC::_0x745808BB01CEC6B9(1f);
	if (VOLUME::_DOES_VOLUME_EXIST(Local_14.f_326[0]))
	{
		VOLUME::_0xFD010A2154B40676(Local_14.f_326[0], joaat("PLAYER"));
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Local_14.f_326[3]))
	{
		__LIB_3__::func_378(Local_14.f_326[3], 0);
		POPULATION::_0xB56D41A694E42E86(Local_14.f_326[3], 10208, 262144, 0, -1, -1, 0);
	}
	__LIB_12__::func_875(uParam0, Global_35, "ARTHUR", 0);
	__LIB_12__::func_875(uParam0, Local_14.f_278[0], "MONROE", 0);
	AITRANSPORT::_0xBA8818212633500A(Local_14.f_278[1], 0, 1);
	PED::SET_PED_CONFIG_FLAG(Local_14.f_278[1], 324, true);
	PED::SET_PED_CAN_BE_TARGETTED(Local_14.f_278[0], false);
	PED::SET_PED_CAN_BE_TARGETTED(Local_14.f_278[1], false);
	ENTITY::_0x18FF3110CF47115D(Local_14.f_278[0], 0, 0);
	ENTITY::_0x18FF3110CF47115D(Local_14.f_278[1], 0, 0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("PLAYER"), joaat("REL_CIVNATIVE"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("REL_GANG_DUTCHS"), joaat("REL_CIVNATIVE"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("REL_CIVNATIVE"), joaat("REL_GANG_DUTCHS"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("REL_CIVNATIVE"), joaat("PLAYER"));
	PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, true);
	PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Local_14.f_278[0], true);
	POPULATION::_0xC6DCC2A3A8825C85(1);
	PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, PLAYER::_0x0139637A3BFF8B6D(Local_14.f_278[0], &uVar1));
	iVar2 = 3;
	while (iVar2 <= 8)
	{
		func_305(Local_14.f_278[iVar2], 1);
		iVar2++;
	}
	Local_14.f_108[0] = Global_35;
	if (iVar0 == -1)
	{
		func_577(&Local_14);
	}
	if (iVar0 <= 0 || iVar0 >= 4)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_14.f_278[1]))
		{
			func_303(&Local_14);
		}
	}
	return 1;
}

void func_291(var uParam0, bool bParam1)
{
	__LIB_13__::func_264(uParam0, 98394);
	__LIB_13__::func_487(uParam0, 99369);
	if (VOLUME::_DOES_VOLUME_EXIST(Local_14.f_342))
	{
		VOLUME::_DELETE_VOLUME(Local_14.f_342);
	}
	switch (__LIB_13__::func_22(uParam0))
	{
		case 0:
			StringCopy(&(uParam0->f_2575), func_605(uParam0), 24);
			__LIB_13__::func_59(uParam0, Global_35, func_606(0), 0, 0, 0);
			__LIB_13__::func_59(uParam0, Local_14.f_278[0], func_606(1), 0, 0, 0);
			__LIB_13__::func_59(uParam0, Local_14.f_278[3], func_606(4), 0, 0, 0);
			__LIB_13__::func_59(uParam0, Local_14.f_278[4], func_606(5), 0, 0, 0);
			__LIB_13__::func_59(uParam0, Local_14.f_278[5], func_606(6), 0, 0, 0);
			__LIB_13__::func_59(uParam0, Local_14.f_278[6], func_606(7), 0, 0, 0);
			__LIB_13__::func_59(uParam0, Local_14.f_278[7], func_606(8), 0, 0, 0);
			__LIB_13__::func_59(uParam0, Local_14.f_278[8], func_606(9), 0, 0, 0);
			__LIB_13__::func_59(uParam0, Local_14.f_278[11], func_606(2), 0, 0, 0);
			__LIB_13__::func_59(uParam0, Local_14.f_278[9], func_606(3), 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_14.f_154[13], func_608(13), 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_14.f_154[14], func_608(14), 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_14.f_154[15], func_608(15), 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_14.f_154[16], func_608(16), 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_14.f_154[17], func_608(17), 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_14.f_154[21], func_608(21), 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_14.f_154[23], func_608(23), 0, 0, 1);
			__LIB_12__::func_957(uParam0, Local_14.f_154[18], func_608(18), 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_14.f_154[19], func_608(19), 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_14.f_154[20], func_608(20), 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_14.f_154[24], func_608(24), 0, 0, 0);
			__LIB_12__::func_957(uParam0, Local_14.f_154[22], func_608(22), 0, 0, 0);
			__LIB_12__::func_779(uParam0, __LIB_1__::func_440(108));
			__LIB_0__::func_172(Local_14.f_342);
			Local_14.f_342 = VOLUME::_CREATE_VOLUME_BOX(__LIB_1__::func_440(108), 0f, 0f, 0f, 4.533056f, 3.931743f, 2.890867f);
			if (VOLUME::_DOES_VOLUME_EXIST(Local_14.f_342))
			{
				__LIB_13__::func_383(uParam0, &(Local_14.f_342), 0, 0, 0, 256);
			}
			break;
		case 1:
			func_612(uParam0, &Local_14);
			break;
		case 2:
			func_613(uParam0, &Local_14, bParam1);
			break;
	}
	__LIB_0__::func_7(&(uParam0->f_172), 16);
}

bool func_292(var uParam0)
{
	int iVar0;
	struct<23> Var1;
	int iVar26;
	func_351(&Local_14);
	__LIB_11__::func_83(Global_35, ENTITY::GET_ENTITY_COORDS(Local_14.f_278[0], false, false), &(Local_14.f_210), 50f, 30f, 25f, 20f, 0.5f, 1, 1, 1, 1, 0);
	if (__LIB_0__::func_665(Global_35, Local_14.f_278[0], 1, 1) < 5f)
	{
		PED::SET_PED_RESET_FLAG(Global_35, 168, true);
		PED::SET_PED_RESET_FLAG(Global_35, 2, true);
		PED::SET_PED_RESET_FLAG(Global_35, 21, true);
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
	}
	switch (Local_14.f_79)
	{
		case 0:
			if (MAP::DOES_BLIP_EXIST(Global_1347702[uParam0->f_174 /*49*/].f_37))
			{
				MAP::REMOVE_BLIP(&(Global_1347702[uParam0->f_174 /*49*/].f_37));
			}
			Global_1347702[uParam0->f_174 /*49*/].f_38 = __LIB_4__::func_824(uParam0->f_174);
			Global_1347702[uParam0->f_174 /*49*/].f_37 = MAP::_BLIP_ADD_FOR_ENTITY(Global_1347702[uParam0->f_174 /*49*/].f_38, Local_14.f_278[0]);
			MAP::SET_BLIP_SPRITE(Global_1347702[uParam0->f_174 /*49*/].f_37, Global_1347702[uParam0->f_174 /*49*/].f_36, true);
			__LIB_4__::func_825(uParam0->f_174);
			__LIB_12__::func_980(&Local_14, &(Local_14.f_61), 0, Global_1347702[uParam0->f_174 /*49*/].f_37, 0, -1082130432 /* Float: -1f */, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
			__LIB_3__::func_157(&(Local_14.f_61[0 /*17*/]), __LIB_2__::func_460(7), 0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
			__LIB_1__::func_683(&(Local_14.f_189), 32768);
			PED::SET_PED_CONFIG_FLAG(Local_14.f_278[0], 297, true);
			PED::SET_PED_CONFIG_FLAG(Local_14.f_278[0], 130, true);
			PED::SET_PED_CONFIG_FLAG(Local_14.f_278[0], 315, true);
			__LIB_0__::func_19(&(Local_14.f_79), 1);
			break;
		case 1:
			if (!__LIB_14__::func_8(Local_14.f_102[0], "pl_Base_StirPot", func_309(0)))
			{
				return false;
			}
			if (!__LIB_14__::func_8(Local_14.f_102[0], "pl_CallOver_B", func_309(0)))
			{
				return false;
			}
			if (!__LIB_14__::func_8(Local_14.f_102[0], "pl_CallOver_R", func_309(0)))
			{
				return false;
			}
			if (!__LIB_14__::func_8(Local_14.f_102[0], "pl_CallOver_L", func_309(0)))
			{
				return false;
			}
			if (!__LIB_14__::func_8(Local_14.f_102[0], "pl_CallOver_F", func_309(0)))
			{
				return false;
			}
			if (!__LIB_14__::func_8(Local_14.f_102[0], "pl_greet", func_309(0)))
			{
				return false;
			}
			if (!__LIB_14__::func_8(Local_14.f_102[0], "Pl_Monroe_Exit", func_309(0)))
			{
				return false;
			}
			if (!__LIB_14__::func_8(Local_14.f_102[0], "Pl_MotherBoy_Exit", func_309(0)))
			{
				return false;
			}
			if (!__LIB_14__::func_8(Local_14.f_102[0], "Pl_QuickExit", func_309(0)))
			{
				return false;
			}
			__LIB_2__::func_259(&(Local_14.f_207));
			__LIB_0__::func_19(&(Local_14.f_79), 2);
			break;
		case 2:
			if (__LIB_0__::func_48(Global_35, Local_14.f_278[0], 40f, 1) && func_621(&Local_14))
			{
				if (!__LIB_0__::func_27(Local_14.f_189, 16))
				{
					Local_14.f_344 = func_623(func_622(Global_35, Local_14.f_278[0]));
					__LIB_10__::func_942(Local_14.f_102[0], Local_14.f_344, func_309(0));
					func_625(&Local_14, ENTITY::GET_ENTITY_COORDS(Local_14.f_278[9], true, false), 1.4f, 1.4f, 5f, 0, 0, 0, 0, 0, 0, 0, 1);
					__LIB_2__::func_259(&(Local_14.f_207));
					__LIB_1__::func_683(&(Local_14.f_189), 16);
				}
				else if (__LIB_0__::func_899(&(Local_14.f_207)))
				{
					iVar0 = __LIB_1__::func_592(&(Local_14.f_207));
					if (iVar0 < 3000)
					{
						Var1.f_4 = -1;
						Var1.f_8 = 2;
						Var1.f_9 = 1;
						Var1.f_10 = 1;
						Var1.f_11 = 1;
						Var1.f_13 = 1;
						Var1.f_14 = 2;
						Var1.f_15 = 2;
						Var1.f_16 = 3;
						Var1.f_19 = 3;
						Var1.f_20 = 1;
						Var1.f_21 = 3;
						Var1.f_22 = 3;
						Var1 = { 0f, 0f, 0.75f };
						Var1.f_3 = Global_35;
						Var1.f_8 = 4;
						Var1.f_19 = 4;
						Var1.f_20 = 4;
						Var1.f_21 = 4;
						Var1.f_22 = 4;
						Var1.f_13 = 3;
						Var1.f_7 = 500;
						_NAMESPACE29::_0x66F9EB44342BB4C5(Local_14.f_278[0], &Var1);
					}
					if (iVar0 > Local_14.f_345)
					{
						__LIB_2__::func_259(&(Local_14.f_207));
						Local_14.f_345 *= 2;
						if (Local_14.f_345 > 120000)
						{
							Local_14.f_345 = 120000;
						}
					}
				}
				if (__LIB_0__::func_266(Global_35, 467.85f, 2230.15f, 246.35f, 10f, 1, 1))
				{
					iVar26 = func_627(&(Local_14.f_278[0]), &Local_14, 10f, &(Local_14.f_61), 0f, 3, 0, 0, 17, 0, 0, 2, -1082130432 /* Float: -1f */);
					if (iVar26 != -1)
					{
						PED::SET_PED_CONFIG_FLAG(Local_14.f_278[0], 297, false);
						PED::SET_PED_CONFIG_FLAG(Local_14.f_278[0], 130, false);
						PED::SET_PED_CONFIG_FLAG(Local_14.f_278[0], 315, false);
						func_628(&(Local_14.f_61), &(Local_14.f_278[0]));
						__LIB_1__::func_683(&(Local_14.f_189), 512);
						__LIB_0__::func_19(&(Local_14.f_79), 3);
					}
				}
			}
			break;
		case 3:
			if (!__LIB_0__::func_48(Global_35, Local_14.f_278[0], (10f + 5f), 1) && !__LIB_0__::func_491(Global_35, 713668775))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Global_35, func_317(0), 1f, -1, 0.25f, 0, func_323(0));
			}
			func_629();
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
			func_630(&Local_14);
			if (!__LIB_0__::func_27(Local_14.f_191, 2048))
			{
				if (func_631(uParam0, &Local_14, 3, 1, 0, 1))
				{
					__LIB_1__::func_683(&(Local_14.f_191), 2048);
				}
			}
			else if (ANIMSCENE::_0x8D81E7824B7753F7(Local_14.f_102[0], "s_Feed_Loop", 1) && !__LIB_5__::func_463())
			{
				Local_14.f_344 = "pl_greet";
				__LIB_10__::func_942(Local_14.f_102[0], Local_14.f_344, func_309(0));
				__LIB_1__::func_561(&(Local_14.f_210));
				return true;
			}
			break;
	}
	return false;
}

bool func_297(var uParam0, var uParam1, int iParam2, vector3 vParam3, int iParam6, int iParam7, int iParam8, bool bParam9, int iParam10, bool bParam11, bool bParam12, int iParam13, bool bParam14)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		*uParam1 = __LIB_12__::func_885(uParam0, iParam2, vParam3, iParam6, 1, 1, iParam7, 1, 1, 1, 1, 0);
		if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
		{
			ENTITY::_0x9587913B9E772D29(*uParam1, 0);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(*uParam1, true, 0f);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam1, bParam11);
			if (bParam14)
			{
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(*uParam1, true);
			}
			if (bParam12)
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam1, iParam13);
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1) || !PED::_0xA0BC8FAED8CFEB3C(*uParam1))
	{
		return false;
	}
	if (bParam9)
	{
		PED::_SET_PED_BODY_COMPONENT(*uParam1, iParam10);
		PED::_UPDATE_PED_VARIATION(*uParam1, false, true, true, true, false);
	}
	return true;
}

bool func_298(var uParam0, int iParam1, vector3 vParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		*uParam0 = OBJECT::CREATE_OBJECT(iParam1, vParam2, true, true, false, false, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return false;
	}
	return true;
}

bool func_301(var uParam0, var uParam1, vector3 vParam2, float fParam5)
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam1) && !ENTITY::IS_ENTITY_DEAD(*uParam1))
	{
		if (__LIB_0__::func_94(*uParam1, vParam2, 1) > 5f)
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(*uParam1, vParam2, fParam5, true, false, true);
		}
		else if (MISC::ABSF((ENTITY::GET_ENTITY_HEADING(*uParam1) - fParam5)) > 1f)
		{
			ENTITY::SET_ENTITY_HEADING(*uParam1, fParam5);
		}
		return true;
	}
	if (!__LIB_14__::func_19(uParam0, uParam1, vParam2, fParam5, 1, 1, 1, 1, 1))
	{
		return false;
	}
	ENTITY::FREEZE_ENTITY_POSITION(*uParam1, false);
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(*uParam1, vParam2, fParam5, true, false, true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam1, true);
	return true;
}

bool func_303(var uParam0)
{
	int iVar0;
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_278[1]))
	{
		if (!__LIB_0__::func_491(uParam0->f_278[1], -76381094) || !__LIB_0__::func_266(uParam0->f_278[1], func_207(1), 5f, 1, 1))
		{
			iVar0 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(func_207(1), joaat("PROP_HITCHINGPOST"), 5f, 1, false);
			if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar0))
			{
				TASK::_TASK_USE_SCENARIO_POINT(uParam0->f_278[1], iVar0, 0, -1, true, true, joaat("PROP_HITCHINGPOST"), false, -1f, false);
				return false;
			}
		}
		else
		{
			return true;
		}
	}
	return false;
}

void func_305(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!ENTITY::_IS_ENTITY_FROZEN(iParam0))
		{
			ENTITY::SET_ENTITY_VISIBLE(iParam0, false);
			ENTITY::SET_ENTITY_COLLISION(iParam0, false, false);
			ENTITY::FREEZE_ENTITY_POSITION(iParam0, true);
		}
	}
	else if (ENTITY::_IS_ENTITY_FROZEN(iParam0))
	{
		ENTITY::SET_ENTITY_VISIBLE(iParam0, true);
		ENTITY::SET_ENTITY_COLLISION(iParam0, true, false);
		ENTITY::FREEZE_ENTITY_POSITION(iParam0, false);
		ENTITY::_0x9587913B9E772D29(iParam0, 0);
	}
}

char[] func_309(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script@rcm@rmnr1@leadin@rsc1@leadin";
		case 1:
			return "script@rcm@RMNR1@Leadout@RSC1@leadout";
		case 2:
			return "script@rcm@rmnr1@ig@ig1_wagon@ig1_wagon";
		case 3:
			return "script@rcm@rmnr1@leadin@rsc2@enter_base_leadin";
		case 4:
			return "script@rcm@RMNR1@Leadout@RSC4@leadout";
		default:
			break;
	}
	return "FAIL";
}

char* func_310()
{
	return "pl_enter_base";
}

bool func_311(var uParam0, int iParam1, char* sParam2, char* sParam3, bool bParam4, bool bParam5)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(*uParam0, true, false))
	{
		__LIB_1__::func_681(iParam1, 4);
		return true;
	}
	if (!__LIB_0__::func_27(*iParam1, 4) && !ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		if (bParam4)
		{
			if (bParam5)
			{
				*uParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(sParam2, 1, sParam3, false, true);
			}
			else
			{
				*uParam0 = ANIMSCENE::_CREATE_ANIM_SCENE(sParam2, 0, sParam3, false, true);
			}
		}
		ANIMSCENE::LOAD_ANIM_SCENE(*uParam0);
		__LIB_1__::func_683(iParam1, 4);
	}
	return false;
}

bool func_312(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_0__::func_27(iParam1->f_190, 1))
	{
		return true;
	}
	if (!func_637(iParam1))
	{
		return false;
	}
	if (!func_297(uParam0, &(iParam1->f_291[0]), func_193(1), func_207(13), func_208(13), 0, "MNR1_WAGON_DRIVER", 1, 1353076085, 0, 0, joaat("REL_PLAYER_LIKE"), 0))
	{
		return false;
	}
	if (!func_297(uParam0, &(iParam1->f_291[1]), func_193(1), func_207(14), func_208(14), 0, "MNR1_WAGON_GUARD", 1, 1664774813, 0, 0, joaat("REL_PLAYER_LIKE"), 0))
	{
		return false;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam1->f_326[11]) || !VOLUME::_DOES_VOLUME_EXIST(iParam1->f_326[12]))
	{
		return false;
	}
	PED::_0x7C00CFC48A782DC0(iParam1->f_326[11], Local_14.f_319[0], 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
	PED::_0x7C00CFC48A782DC0(iParam1->f_326[12], Local_14.f_319[0], 0f, 4f, 0f, 0f, 0f, 0f, 2, 1);
	func_638(iParam1->f_291[0], joaat("REL_PLAYER_DISLIKE"), &(iParam1->f_108), 1);
	func_638(iParam1->f_291[1], joaat("REL_PLAYER_DISLIKE"), &(iParam1->f_108), 1);
	__LIB_12__::func_875(uParam0, iParam1->f_291[0], "ARMY_SUPPLY_DRIVER", 0);
	__LIB_12__::func_875(uParam0, iParam1->f_291[1], "ARMY_SUPPLY_SHOTGUN", 0);
	iVar0 = __LIB_0__::func_23();
	if (__LIB_0__::func_41(iVar0) >= 18 || func_640())
	{
	}
	WEAPON::REMOVE_ALL_PED_WEAPONS(iParam1->f_291[0], true, true);
	WEAPON::REMOVE_ALL_PED_WEAPONS(iParam1->f_291[1], true, true);
	WEAPON::_GIVE_WEAPON_TO_PED_2(iParam1->f_291[0], joaat("WEAPON_REPEATER_CARBINE"), 1, false, true, 16, false, 0.5f, 1f, 752097756, false, 0f, false);
	WEAPON::_GIVE_WEAPON_TO_PED_2(iParam1->f_291[1], joaat("WEAPON_REVOLVER_CATTLEMAN"), 1, true, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
	iVar1 = 0;
	while (iVar1 <= 1)
	{
		ENTITY::_0x18FF3110CF47115D(iParam1->f_291[iVar1], 2, 0);
		ENTITY::_0x18FF3110CF47115D(iParam1->f_291[iVar1], 3, 0);
		ENTITY::_0x18FF3110CF47115D(iParam1->f_291[iVar1], 14, 0);
		ENTITY::_0x18FF3110CF47115D(iParam1->f_291[iVar1], 17, 0);
		ENTITY::_0x18FF3110CF47115D(iParam1->f_291[iVar1], 7, 0);
		ENTITY::_0x18FF3110CF47115D(iParam1->f_291[iVar1], 11, 0);
		ENTITY::_0x18FF3110CF47115D(iParam1->f_291[iVar1], 0, 0);
		PED::SET_PED_CONFIG_FLAG(iParam1->f_291[iVar1], 307, true);
		PED::SET_PED_CONFIG_FLAG(iParam1->f_291[iVar1], 22, true);
		PED::SET_PED_CONFIG_FLAG(iParam1->f_291[iVar1], 506, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam1->f_291[iVar1], 1, false);
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam1->f_291[iVar1], true);
		__LIB_4__::func_256(iParam1->f_291[iVar1]);
		iVar1++;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(iParam1->f_291[0], false))
	{
		TASK::TASK_WARP_PED_INTO_VEHICLE(iParam1->f_291[0], iParam1->f_319[0], -1);
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(iParam1->f_291[1], false))
	{
		TASK::TASK_WARP_PED_INTO_VEHICLE(iParam1->f_291[1], iParam1->f_319[0], 0);
	}
	__LIB_1__::func_683(&(iParam1->f_190), 1);
	if (!bParam2)
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam1->f_319[0], 473.1614f, 1200.139f, 179.3531f, 280f, true, false, true);
	}
	iVar2 = 0;
	while (iVar2 < 2)
	{
		iParam1->f_184[iVar2 /*2*/] = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iParam1->f_319[0], iVar2);
		__LIB_1__::func_991(iParam1->f_184[iVar2 /*2*/], 0);
		iVar2++;
	}
	return true;
}

bool func_313()
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	MISC::_GET_WEATHER_TYPE_TRANSITION(&iVar0, &iVar1, &uVar2);
	iVar3 = iVar0;
	iVar4 = iVar1;
	if (func_643(iVar3) || func_643(iVar4))
	{
		return true;
	}
	return false;
}

void func_314(bool bParam0)
{
	MISC::_SET_WEATHER_TYPE(joaat("OVERCAST"), true, true, bParam0, 90f, false);
}

void func_315(var uParam0, int iParam1, int iParam2)
{
	bool bVar0;
	if (iParam1->f_98 == iParam2)
	{
		return;
	}
	else
	{
		iParam1->f_98 = iParam2;
	}
	bVar0 = true;
	UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
	if (__LIB_0__::func_27(iParam1->f_195, iParam2))
	{
		bVar0 = false;
	}
	func_644(iParam1);
	switch (iParam2)
	{
		case 2:
			if (!__LIB_1__::func_587(7))
			{
				__LIB_1__::func_718(7);
			}
			if (!MAP::DOES_BLIP_EXIST(iParam1->f_310[0]))
			{
				iParam1->f_310[0] = func_647(iParam1, 0, joaat("BLIP_STYLE_COMPANION"), 0, -546708623, 0, 0);
			}
			if (MAP::DOES_BLIP_EXIST(iParam1->f_310[0]))
			{
				MAP::_BLIP_REMOVE_MODIFIER(iParam1->f_310[0], -546708623);
			}
			iParam1->f_197 = { ENTITY::GET_ENTITY_COORDS(Local_14.f_111, true, false) };
			__LIB_12__::func_772(108, func_648(iParam2), 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			break;
		case 4:
			if (__LIB_1__::func_587(7))
			{
				__LIB_1__::func_721(7);
			}
			__LIB_12__::func_772(108, func_648(iParam2), 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			break;
		case 8:
			if (__LIB_1__::func_587(7))
			{
				__LIB_1__::func_721(7);
			}
			iParam1->f_310[0] = func_647(iParam1, 0, joaat("BLIP_STYLE_COMPANION"), 1, -546708623, 0, 1);
			iParam1->f_197 = { func_317(1) };
			__LIB_12__::func_772(108, func_648(iParam2), 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			break;
		case 16:
			if (__LIB_1__::func_587(7))
			{
				__LIB_1__::func_721(7);
			}
			if (!MAP::DOES_BLIP_EXIST(iParam1->f_310[0]))
			{
				iParam1->f_310[0] = func_647(iParam1, 0, joaat("BLIP_STYLE_COMPANION"), 1, -546708623, 0, 1);
			}
			__LIB_12__::func_772(108, func_648(iParam2), 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			__LIB_12__::func_883(uParam0, func_648(iParam2), 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			break;
		case 64:
			iParam1->f_310[1] = func_647(iParam1, 1, joaat("BLIP_STYLE_PLAYER_COACH"), 1, -401963276, 0, 1);
			iParam1->f_196 = iParam1->f_310[1];
			__LIB_12__::func_772(108, func_648(iParam2), 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			__LIB_12__::func_883(uParam0, func_648(iParam2), 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			break;
		case 32:
			if (MAP::DOES_BLIP_EXIST(iParam1->f_310[0]))
			{
				MAP::_BLIP_REMOVE_MODIFIER(iParam1->f_310[0], 231194138);
				MAP::_BLIP_REMOVE_MODIFIER(iParam1->f_310[0], -546708623);
				MAP::REMOVE_BLIP(&(iParam1->f_310[0]));
			}
			if (__LIB_1__::func_587(7))
			{
				__LIB_1__::func_721(7);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iParam1->f_319[0]))
			{
				iParam1->f_197 = { ENTITY::GET_ENTITY_COORDS(iParam1->f_319[0], true, false) };
				iParam1->f_310[1] = func_647(iParam1, 1, joaat("BLIP_STYLE_PLAYER_COACH"), 1, -401963276, 0, 1);
				iParam1->f_196 = iParam1->f_310[1];
				__LIB_12__::func_772(108, func_648(iParam2), 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				if (bVar0)
				{
					__LIB_12__::func_883(uParam0, func_648(iParam2), 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				}
			}
			break;
		case 128:
			if (!VEHICLE::_0xDDBEA5506C848227(Local_14.f_319[0]) && ENTITY::DOES_ENTITY_EXIST(Local_14.f_154[6]))
			{
				iParam1->f_197 = { ENTITY::GET_ENTITY_COORDS(iParam1->f_319[0], true, false) };
				iParam1->f_310[1] = func_647(iParam1, 1, joaat("BLIP_STYLE_PLAYER_COACH"), 1, -401963276, 0, 1);
				iParam1->f_196 = iParam1->f_310[1];
				__LIB_12__::func_772(108, func_648(iParam2), 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				if (bVar0)
				{
					__LIB_12__::func_883(uParam0, func_648(iParam2), 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				}
			}
			break;
		case 256:
			iParam1->f_197 = { func_317(4) };
			iParam1->f_310[0] = func_647(iParam1, 0, joaat("BLIP_STYLE_COMPANION"), 1, -546708623, 0, 1);
			iParam1->f_196 = iParam1->f_310[0];
			__LIB_12__::func_772(108, func_648(iParam2), 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			if (bVar0)
			{
				__LIB_12__::func_883(uParam0, func_648(iParam2), 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			}
			break;
	}
	__LIB_1__::func_683(&(iParam1->f_195), iParam2);
}

Vector3 func_317(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 469.04f, 2231.79f, 247.4f;
		case 1:
			return 576.8394f, 1274.485f, 199.5888f;
		case 2:
			return 578.2734f, 1271.899f, 199.5888f;
		case 3:
			return 577.7444f, 1272.049f, 200.5889f;
		case 4:
			return 466.4568f, 2251.802f, 247.3009f;
		case 5:
			return 462.6823f, 2261.717f, 248.3978f;
		case 6:
			return 575.8467f, 1273.913f, 197.5889f;
		case 7:
			return 469.1291f, 2229.668f, 246.3325f;
		case 9:
			return 590.6204f, 1269.84f, 200.8432f;
		case 10:
			return 466.2472f, 2251.963f, 247.3075f;
		case 11:
			return 505.16f, 694.74f, 114.85f;
		case 12:
			return 474.791f, 2229.139f, 248.546f;
		case 13:
			return 466.2472f, 2251.963f, 247.3075f;
		case 14:
			return 465.4113f, 2251.546f, 247.7816f;
		case 8:
			return 574.3456f, 1273.969f, 199.5888f;
		default:
			break;
	}
	return 1275.196f, 2116.356f, 240.6035f;
}

void func_321(int iParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0->f_319[0]))
	{
		return;
	}
	if (func_649(iParam0))
	{
		return;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0->f_291[0], false))
	{
		TASK::TASK_WARP_PED_INTO_VEHICLE(iParam0->f_291[0], iParam0->f_319[0], -1);
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0->f_291[1], false))
	{
		TASK::TASK_WARP_PED_INTO_VEHICLE(iParam0->f_291[1], iParam0->f_319[0], 0);
	}
}

float func_323(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -175.21f;
		case 1:
		case 4:
			return -116.35f;
		case 9:
			return -75.54f;
		case 8:
			return 113.8611f;
		default:
			break;
	}
	return 0f;
}

void func_325(int iParam0, int iParam1)
{
	if (iParam0->f_321 != iParam1)
	{
		iParam0->f_321 = iParam1;
		__LIB_1__::func_683(&(iParam0->f_190), 8388608);
	}
}

void func_326(bool bParam0, bool bParam1)
{
	int iVar0;
	if (((!__LIB_14__::func_9(Local_14.f_291[0]) || !ENTITY::DOES_ENTITY_EXIST(Local_14.f_319[0])) || ENTITY::IS_ENTITY_DEAD(Local_14.f_319[0])) || __LIB_0__::func_491(Local_14.f_291[0], 1199744105))
	{
		return;
	}
	if (bParam0)
	{
		TASK::CLEAR_PED_TASKS(Local_14.f_291[0], true, false);
	}
	if (bParam1)
	{
		iVar0 = 0;
	}
	else
	{
		iVar0 = 524311;
	}
	TASK::_TASK_VEHICLE_DRIVE_TO_DESTINATION(Local_14.f_291[0], Local_14.f_319[0], func_317(11), func_652(Local_14.f_321), iVar0, 6, 5f, 5f, 0);
}

bool func_327(var uParam0, var uParam1, int iParam2)
{
	return func_301(uParam0, uParam1, func_207(iParam2), func_208(iParam2));
}

bool func_328(var uParam0, var uParam1)
{
	if (!func_637(uParam1))
	{
		return false;
	}
	__LIB_1__::func_683(&(uParam1->f_190), 1);
	return true;
}

bool func_329(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	if (!func_311(&(iParam0->f_102[2]), &(iParam0->f_189), func_309(2), func_653(1), 1, 0))
	{
		return false;
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_102[2]))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (!__LIB_14__::func_8(iParam0->f_102[2], func_653(iVar0), func_309(2)))
			{
				return false;
			}
			iVar0++;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_319[0]))
	{
		vVar1 = { ENTITY::GET_ENTITY_ROTATION(iParam0->f_319[0], 2) };
		vVar4 = { ENTITY::GET_ENTITY_COORDS(iParam0->f_319[0], true, false) };
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iParam0->f_102[2], vVar4, vVar1, 2);
		ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY_PRESERVING_LOCATION(iParam0->f_102[2], iParam0->f_319[0], 0);
	}
	return true;
}

int func_330(bool bParam0, int iParam1)
{
	int iVar0[1];
	vector3 vVar2;
	float fVar5;
	var uVar6[1];
	if ((bParam0 == 1 && __LIB_0__::func_27(Local_14.f_189, 128)) || (bParam0 == 0 && !__LIB_0__::func_27(Local_14.f_189, 128)))
	{
		return 1;
	}
	iVar0[0] = joaat("P_CRATE03X");
	vVar2 = { func_317(13) };
	fVar5 = 10f;
	if (bParam0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_180[1]))
		{
			__LIB_3__::func_510(&uVar6, &iVar0, 1, vVar2, fVar5);
			Local_14.f_180[1] = uVar6[0];
		}
		if ((ENTITY::DOES_ENTITY_EXIST(Local_14.f_180[1]) && !__LIB_0__::func_27(Local_14.f_189, 128)) && (iParam1 == 0 || ENTITY::IS_ENTITY_OCCLUDED(Local_14.f_180[1])))
		{
			ENTITY::CREATE_MODEL_HIDE(vVar2, fVar5, iVar0[0], false);
			__LIB_1__::func_683(&(Local_14.f_189), 128);
			return 1;
		}
	}
	else if (__LIB_0__::func_27(Local_14.f_189, 128) && (iParam1 == 0 || ENTITY::IS_ENTITY_OCCLUDED(Local_14.f_180[1])))
	{
		ENTITY::REMOVE_MODEL_HIDE(vVar2, fVar5, iVar0[0], 0);
		__LIB_1__::func_681(&(Local_14.f_189), 128);
		return 1;
	}
	return 0;
}

void func_331(int iParam0, int iParam1, vector3 vParam2, float fParam5)
{
	if (__LIB_0__::func_272(iParam0, 0))
	{
		if (iParam0 == Local_14.f_278[0])
		{
		}
		else if (iParam0 == Local_14.f_278[1])
		{
		}
		TASK::CLEAR_PED_TASKS(iParam0, true, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam2, fParam5, false, true, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, iParam1);
	}
}

bool func_338(var uParam0)
{
	int iVar0;
	if (__LIB_12__::func_645(uParam0) > 0 || __LIB_0__::func_27(Local_14.f_189, 262144))
	{
		return true;
	}
	func_629();
	func_630(&Local_14);
	if (__LIB_0__::func_665(Global_35, Local_14.f_278[0], 1, 1) < 5f)
	{
		PED::SET_PED_RESET_FLAG(Global_35, 168, true);
		PED::SET_PED_RESET_FLAG(Global_35, 2, true);
		PED::SET_PED_RESET_FLAG(Global_35, 21, true);
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
	}
	if (!ANIMSCENE::_0x1F0E401031E20146(Local_14.f_102[0], "pl_greet"))
	{
		Local_14.f_344 = "pl_greet";
		__LIB_10__::func_942(Local_14.f_102[0], Local_14.f_344, func_309(0));
		return false;
	}
	if ((ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(Local_14.f_102[0]) || ANIMSCENE::_0x005E6F28DD7ED58D(Local_14.f_102[0], func_606(1))) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_14.f_102[0], false))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(Local_14.f_102[0]);
		iVar0 = 3;
		while (iVar0 <= 8)
		{
			func_305(Local_14.f_278[iVar0], 0);
			iVar0++;
		}
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
		}
		if (MAP::DOES_BLIP_EXIST(Global_1347702[uParam0->f_174 /*49*/].f_37))
		{
			MAP::REMOVE_BLIP(&(Global_1347702[uParam0->f_174 /*49*/].f_37));
		}
		__LIB_12__::func_991(&Local_14, Local_14.f_278[0]);
		__LIB_11__::func_382(uParam0->f_174, 0);
		__LIB_1__::func_681(&(Local_14.f_189), 32768);
		return true;
	}
	return false;
}

int func_344(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
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
			func_679(uParam4);
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
				func_686(uParam4);
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
					func_687(&(uParam4->f_405), 0);
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
				func_686(uParam4);
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

void func_351(int iParam0)
{
	if (!__LIB_0__::func_27(iParam0->f_189, 32) && __LIB_0__::func_393(Global_35, iParam0->f_326[0], 0, 1))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
		WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 0, 0);
		HUD::_HIDE_HUD_COMPONENT(-1249243147);
		__LIB_1__::func_683(&(iParam0->f_189), 32);
	}
	else if (__LIB_0__::func_27(iParam0->f_189, 32) && !__LIB_0__::func_393(Global_35, iParam0->f_326[0], 0, 1))
	{
		HUD::_DISPLAY_HUD_COMPONENT(-1249243147);
		__LIB_1__::func_681(&(iParam0->f_189), 32);
	}
}

void func_354(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_184)
	{
		if (((!__LIB_0__::func_27(uParam0->f_184[iVar0 /*2*/].f_1, 1) && ENTITY::DOES_ENTITY_EXIST(uParam0->f_184[iVar0 /*2*/])) && ENTITY::IS_ENTITY_DEAD(uParam0->f_184[iVar0 /*2*/])) && __LIB_2__::func_901(uParam0->f_184[iVar0 /*2*/], Global_35))
		{
			__LIB_10__::func_525(2, 0, 0, 0, Global_35, 0, 1065353216 /* Float: 1f */, 0);
			__LIB_1__::func_683(&(uParam0->f_184[iVar0 /*2*/].f_1), 1);
		}
		iVar0++;
	}
}

bool func_358(var uParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	bool bVar4;
	bool bVar5;
	int iVar6;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_278[0]) && (PED::IS_PED_DEAD_OR_DYING(iParam1->f_278[0], true) || PED::IS_PED_FATALLY_INJURED(iParam1->f_278[0])))
	{
		__LIB_1__::func_683(&(iParam1->f_193), 2);
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_278[1]) && (PED::IS_PED_DEAD_OR_DYING(iParam1->f_278[1], true) || PED::IS_PED_FATALLY_INJURED(iParam1->f_278[1])))
	{
		__LIB_1__::func_683(&(iParam1->f_193), 32);
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_111) && (PED::IS_PED_DEAD_OR_DYING(iParam1->f_111, true) || PED::IS_PED_FATALLY_INJURED(iParam1->f_111)))
	{
		__LIB_1__::func_683(&(iParam1->f_193), 16);
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_278[0]))
	{
		if (iParam1->f_98 == 16)
		{
			if (!__LIB_0__::func_48(Global_35, iParam1->f_278[0], 80f, 1))
			{
				__LIB_1__::func_683(&(iParam1->f_193), 64);
				return false;
			}
			else if (__LIB_0__::func_48(Global_35, iParam1->f_278[0], 30f, 1))
			{
				func_315(uParam0, iParam1, 8);
			}
		}
		if (iParam1->f_98 != 16 && !__LIB_0__::func_48(Global_35, iParam1->f_278[0], 60f, 1))
		{
			func_315(uParam0, iParam1, 16);
		}
	}
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam1->f_111, 1f);
	}
	else if (__LIB_0__::func_665(Global_35, iParam1->f_278[9], 1, 1) < 5f)
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
	}
	switch (iParam1->f_82)
	{
		case 0:
			__LIB_12__::func_997(uParam0, func_61(0), func_61(2), 0, 2, 0);
			__LIB_1__::func_951(&(iParam1->f_154[21]));
			func_739(0, 0);
			AITRANSPORT::_0xBA8818212633500A(iParam1->f_278[1], 0, 1);
			iParam1->f_110 = PED::CREATE_GROUP(0);
			PED::SET_GROUP_FORMATION(iParam1->f_110, 10);
			PED::SET_PED_CONFIG_FLAG(iParam1->f_278[0], 279, true);
			PED::SET_PED_AS_GROUP_LEADER(iParam1->f_278[0], iParam1->f_110, false);
			func_625(iParam1, ENTITY::GET_ENTITY_COORDS(iParam1->f_278[9], true, false), 1.4f, 1.4f, 5f, 0, 0, 0, 0, 0, 0, 0, 1);
			__LIB_7__::func_948(iParam1->f_326[1], 0, 0, 0, 0, 0);
			__LIB_0__::func_19(&(iParam1->f_82), 1);
			break;
		case 1:
			if (!func_311(&(iParam1->f_102[1]), &(iParam1->f_189), func_309(1), "pl_MotherBoy_Idle", 1, 0))
			{
				return false;
			}
			if (func_631(uParam0, iParam1, 4, 1, 0, 1))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam1->f_102[1], func_606(2), iParam1->f_278[11], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam1->f_102[1], func_606(3), iParam1->f_278[9], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam1->f_102[1], func_608(17), iParam1->f_154[17], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam1->f_102[1], func_608(19), iParam1->f_154[19], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam1->f_102[1], func_608(20), iParam1->f_154[20], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam1->f_102[1], func_608(14), iParam1->f_154[14], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam1->f_102[1], func_608(15), iParam1->f_154[15], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam1->f_102[1], func_608(23), iParam1->f_154[23], 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam1->f_102[1], func_608(16), iParam1->f_154[16], 0);
				ANIMSCENE::START_ANIM_SCENE(iParam1->f_102[1]);
				iVar0 = 3;
				while (iVar0 <= 8)
				{
					TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(iParam1->f_278[iVar0], ENTITY::GET_ENTITY_COORDS(iParam1->f_278[iVar0], true, false), 120000f, 0, false, false, false, false);
					iVar0++;
				}
				__LIB_2__::func_788(&(iParam1->f_278[3]), 1, 0, 1);
				__LIB_2__::func_788(&(iParam1->f_278[4]), 1, 0, 1);
				__LIB_2__::func_788(&(iParam1->f_278[5]), 1, 0, 1);
				__LIB_2__::func_788(&(iParam1->f_278[6]), 1, 0, 1);
				__LIB_2__::func_788(&(iParam1->f_278[7]), 1, 0, 1);
				__LIB_2__::func_788(&(iParam1->f_278[8]), 1, 0, 1);
				__LIB_1__::func_951(&(iParam1->f_154[13]));
				__LIB_1__::func_951(&(iParam1->f_154[18]));
				func_315(uParam0, iParam1, 2);
				TASK::TASK_MOUNT_ANIMAL(iParam1->f_278[0], iParam1->f_278[1], 30000, -1, 1.5f, 1, 0, 0);
				__LIB_0__::func_19(&(iParam1->f_82), 2);
			}
			break;
		case 2:
			if (__LIB_0__::func_394(Global_35, iParam1->f_111, 1))
			{
				AUDIO::SET_AUDIO_FLAG("naSETVehExitUseActiveTransportOnly", true);
				__LIB_0__::func_19(&(iParam1->f_82), 4);
			}
			else if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iParam1->f_278[0], true))
			{
				__LIB_0__::func_19(&(iParam1->f_82), 3);
			}
			break;
		case 3:
			if (!__LIB_0__::func_491(iParam1->f_278[0], 242628503))
			{
				TASK::WAYPOINT_RECORDING_GET_COORD(func_196(0), 0, &vVar1);
				bVar4 = __LIB_0__::func_266(iParam1->f_278[0], vVar1, 0.45f, 1, 0);
				bVar5 = __LIB_11__::func_849(ENTITY::GET_ENTITY_HEADING(iParam1->f_278[0]), __LIB_3__::func_978(iParam1->f_278[0], Global_35, 1)) < 25f;
				if (!bVar4 || !bVar5)
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar6);
					if (!bVar4)
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar1, 1f, 30000, 0.25f, 0, 40000f);
					}
					if (!bVar5)
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
					}
					__LIB_1__::func_474(iParam1->f_278[0], &iVar6, 0, 0, 1, 1);
				}
			}
			if (__LIB_0__::func_394(Global_35, iParam1->f_111, 0))
			{
				AUDIO::SET_AUDIO_FLAG("naSETVehExitUseActiveTransportOnly", true);
				__LIB_0__::func_19(&(iParam1->f_82), 5);
			}
			else if ((((!__LIB_0__::func_899(&(iParam1->f_258)) || !PED::IS_PED_ON_MOUNT(iParam1->f_278[0])) || (__LIB_0__::func_665(Global_35, iParam1->f_278[0], 1, 1) < 5f && PED::IS_PED_ON_MOUNT(Global_35))) || func_744(func_196(0))) || __LIB_5__::func_463())
			{
				__LIB_2__::func_259(&(iParam1->f_258));
			}
			else if (__LIB_9__::func_178(&(iParam1->f_258)) > 7f)
			{
				if (func_631(uParam0, iParam1, 5, 1, 0, 1))
				{
					__LIB_2__::func_259(&(iParam1->f_258));
				}
			}
			break;
		case 4:
			func_315(uParam0, iParam1, 4);
			if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iParam1->f_278[0], true))
			{
				__LIB_0__::func_19(&(iParam1->f_82), 5);
			}
			break;
		case 5:
			if (__LIB_0__::func_394(Global_35, iParam1->f_111, 0))
			{
				AUDIO::SET_AUDIO_FLAG("naSETVehExitUseActiveTransportOnly", true);
			}
			func_315(uParam0, iParam1, 8);
			func_745(iParam1->f_278[0], func_196(0), 1);
			PLAYER::_0xAC22AA6DF4D1C1DE(PLAYER::GET_PLAYER_INDEX(), iParam1->f_278[0], 2f, 0f, 1, 2, 0);
			PLAYER::_0xDD33A82352C4652F(PLAYER::PLAYER_ID(), iParam1->f_278[0], 1);
			__LIB_0__::func_19(&(iParam1->f_82), 6);
			break;
		case 6:
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iParam1->f_278[0], 0))
			{
				func_746();
				TASK::SET_ENABLE_SPEED_RESTRAIN_FOR_WAYPOINT_RECORDING_LEADER(iParam1->f_278[0], 1);
				TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iParam1->f_278[0], 1.75f, 0, 0.2f, 0);
				__LIB_1__::func_561(&(iParam1->f_258));
				return true;
			}
			break;
	}
	return false;
}

bool func_359(var uParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	bool bVar3;
	bool bVar4;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_278[0]) && (PED::IS_PED_DEAD_OR_DYING(iParam1->f_278[0], true) || PED::IS_PED_FATALLY_INJURED(iParam1->f_278[0])))
	{
		__LIB_1__::func_683(&(iParam1->f_193), 2);
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_278[1]) && (PED::IS_PED_DEAD_OR_DYING(iParam1->f_278[1], true) || PED::IS_PED_FATALLY_INJURED(iParam1->f_278[1])))
	{
		__LIB_1__::func_683(&(iParam1->f_193), 32);
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_111) && (PED::IS_PED_DEAD_OR_DYING(iParam1->f_111, true) || PED::IS_PED_FATALLY_INJURED(iParam1->f_111)))
	{
		__LIB_1__::func_683(&(iParam1->f_193), 16);
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_278[0]))
	{
		if (!__LIB_0__::func_48(Global_35, iParam1->f_278[0], 80f, 1))
		{
			__LIB_1__::func_683(&(iParam1->f_193), 64);
			return false;
		}
		else if (__LIB_0__::func_27(iParam1->f_191, 8192) && (!__LIB_0__::func_48(Global_35, iParam1->f_278[0], 60f, 1) || (__LIB_0__::func_71(Global_35) && !__LIB_0__::func_48(Global_35, iParam1->f_278[0], 30f, 1))))
		{
			if (iParam1->f_98 != 16)
			{
				func_315(uParam0, iParam1, 16);
			}
		}
		else if (__LIB_0__::func_27(iParam1->f_191, 4096) && !__LIB_0__::func_71(Global_35))
		{
			if (iParam1->f_98 != 2)
			{
				func_315(uParam0, iParam1, 2);
			}
		}
		else if (iParam1->f_98 != 8)
		{
			func_315(uParam0, iParam1, 8);
		}
	}
	if (__LIB_0__::func_27(iParam1->f_189, 524288))
	{
		CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
		PED::SET_PED_RESET_FLAG(Global_35, 264, true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam1->f_326[2]))
	{
		return false;
	}
	func_748();
	if (iParam1->f_83 > 3)
	{
		if (__LIB_1__::func_372(Global_35, 0) != joaat("WEAPON_UNARMED"))
		{
			WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				TASK::TASK_SWAP_WEAPON(Global_35, 0, 1, 0, 0);
			}
		}
		__LIB_3__::func_807();
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DUCK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_HORSE_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_USE_ITEM"), false);
	}
	if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iParam1->f_278[0], 0))
	{
		TASK::SET_ENABLE_SPEED_RESTRAIN_FOR_WAYPOINT_RECORDING_LEADER(iParam1->f_278[0], 1);
	}
	func_751(uParam0, iParam1);
	__LIB_11__::func_83(Global_35, func_317(1), &(iParam1->f_210), 28f, 25f, 23f, 9f, 0.5f, 0, 0, 1, 1, 1);
	if (__LIB_1__::func_205(Global_35, iParam1->f_326[2], 1, 0) && __LIB_1__::func_205(iParam1->f_278[0], iParam1->f_326[2], 1, 0))
	{
		if (!__LIB_0__::func_27(iParam1->f_190, 1))
		{
			if (func_312(uParam0, iParam1, 1))
			{
				func_321(iParam1);
				func_612(uParam0, iParam1);
			}
		}
	}
	if (!PED::IS_PED_ON_MOUNT(Global_35) && __LIB_1__::func_205(Global_35, iParam1->f_326[2], 1, 0))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam1->f_102[3]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam1->f_102[3], false))
	{
	}
	switch (iParam1->f_83)
	{
		case 0:
			PED::_0xF7EA250B9A919E03(joaat("CROUCH"), Global_35);
			if (!PED::_0x854BC9B1A1CCD034(joaat("CROUCH"), Global_35))
			{
				return false;
			}
			if (!func_311(&(iParam1->f_102[3]), &(iParam1->f_189), func_309(3), func_310(), 1, 0))
			{
				return false;
			}
			if (VOLUME::_DOES_VOLUME_EXIST(iParam1->f_326[9]))
			{
				PATHFIND::_0xC1799FAFD2FDF52B(iParam1->f_326[9], 0, 0, 0);
			}
			if (VOLUME::_DOES_VOLUME_EXIST(iParam1->f_326[10]))
			{
				PATHFIND::_0xC1799FAFD2FDF52B(iParam1->f_326[10], 0, 0, 0);
			}
			__LIB_1__::func_683(&(iParam1->f_191), 4096);
			__LIB_1__::func_683(&(iParam1->f_191), 8192);
			WEAPON::_0x94A3C1B804D291EC(Global_35, 1, 0, 0, 0);
			__LIB_0__::func_19(&(iParam1->f_83), 1);
			break;
		case 1:
			if (ENTITY::IS_ENTITY_DEAD(iParam1->f_278[0]))
			{
				return false;
			}
			if (!__LIB_0__::func_27(iParam1->f_189, 8))
			{
				if (func_313())
				{
					func_314(1);
					__LIB_1__::func_683(&(iParam1->f_189), 8);
				}
			}
			TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(func_196(0), ENTITY::GET_ENTITY_COORDS(iParam1->f_278[0], true, false), &iVar0);
			fVar1 = TASK::GET_PED_WAYPOINT_OVERRIDE_SPEED(iParam1->f_278[0]);
			if (iVar0 < 570 && !__LIB_0__::func_71(iParam1->f_278[0]))
			{
				if (!__LIB_0__::func_163(iParam1->f_278[0], 1868526510))
				{
					__LIB_1__::func_562(iParam1->f_278[0], iParam1->f_278[1], 0, 2f, 20000);
				}
				return false;
			}
			if (!__LIB_0__::func_266(iParam1->f_278[0], func_317(2), 30f, 1, 1) && !__LIB_0__::func_163(iParam1->f_278[0], 658540077))
			{
				func_745(iParam1->f_278[0], func_196(0), 1);
				if (__LIB_0__::func_71(iParam1->f_278[0]))
				{
					PLAYER::_0xAC22AA6DF4D1C1DE(PLAYER::GET_PLAYER_INDEX(), iParam1->f_278[0], 2f, 0f, 1, 2, 0);
					PLAYER::_0xDD33A82352C4652F(PLAYER::PLAYER_ID(), iParam1->f_278[0], 1);
					TASK::SET_ENABLE_SPEED_RESTRAIN_FOR_WAYPOINT_RECORDING_LEADER(iParam1->f_278[0], 1);
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iParam1->f_278[0], 1.75f, 0, 0.2f, 0);
					func_746();
				}
			}
			if (!__LIB_0__::func_393(Global_35, Local_14.f_326[0], 0, 1) && iVar0 < 150)
			{
				if (!__LIB_0__::func_27(iParam1->f_189, 256))
				{
					__LIB_0__::func_7(&Global_1935630, 65536);
					__LIB_1__::func_683(&(iParam1->f_189), 256);
					POPULATION::_0x2161278C6322F740(12288, 0, 0, -1, -1, 0);
				}
			}
			else if (__LIB_0__::func_27(iParam1->f_189, 256))
			{
				__LIB_0__::func_8(&Global_1935630, 65536);
				__LIB_1__::func_681(&(iParam1->f_189), 256);
			}
			if (__LIB_0__::func_27(iParam1->f_191, 4096) && !__LIB_0__::func_71(Global_35))
			{
				if (!__LIB_0__::func_27(iParam1->f_189, 65536))
				{
					TASK::WAYPOINT_PLAYBACK_PAUSE(iParam1->f_278[0], 1, 0, 0);
					__LIB_1__::func_683(&(iParam1->f_189), 65536);
				}
			}
			else if (__LIB_0__::func_27(iParam1->f_189, 65536))
			{
				if (__LIB_0__::func_27(iParam1->f_191, 4096))
				{
				}
				TASK::WAYPOINT_PLAYBACK_RESUME(iParam1->f_278[0], true, -1, 0);
				__LIB_1__::func_681(&(iParam1->f_189), 65536);
			}
			if (iVar0 > 92)
			{
				if (__LIB_0__::func_27(iParam1->f_189, 131072))
				{
					PED::_0xD5BD1B5318A81994(iParam1->f_110, 0);
					PLAYER::_0x12E09E278C6C29B7(PLAYER::PLAYER_ID());
					PLAYER::_0xAC22AA6DF4D1C1DE(PLAYER::PLAYER_ID(), iParam1->f_278[0], -1f, 2f, 3, 2, 0);
					PLAYER::_0xDD33A82352C4652F(PLAYER::PLAYER_ID(), iParam1->f_278[0], 1);
					PED::_0x9BBEAF8B0C007F1E(iParam1->f_278[0], 1);
					__LIB_1__::func_681(&(iParam1->f_189), 131072);
				}
			}
			else if (iVar0 > 45)
			{
				if (!__LIB_0__::func_27(iParam1->f_189, 131072))
				{
					PED::_0xD5BD1B5318A81994(iParam1->f_110, 1);
					PLAYER::_0x12E09E278C6C29B7(PLAYER::PLAYER_ID());
					PLAYER::_0xAC22AA6DF4D1C1DE(PLAYER::PLAYER_ID(), iParam1->f_278[0], -1f, 5f, 2, 2, 0);
					PLAYER::_0xDD33A82352C4652F(PLAYER::PLAYER_ID(), iParam1->f_278[0], 1);
					PED::_0x9BBEAF8B0C007F1E(iParam1->f_278[0], 0);
					__LIB_1__::func_683(&(iParam1->f_189), 131072);
				}
			}
			if (iVar0 > 450)
			{
				if (iVar0 < 480 && fVar1 != 1.25f)
				{
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iParam1->f_278[0], 1.25f, 0, 0.2f, 0);
				}
				else if ((iVar0 > 480 && iVar0 < 550) && fVar1 != 1.75f)
				{
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iParam1->f_278[0], 1.75f, 0, 0.2f, 0);
				}
				else if (iVar0 > 550)
				{
					if (fVar1 != 1.25f)
					{
						TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iParam1->f_278[0], 1.25f, 0, 0.2f, 0);
					}
					if (!__LIB_0__::func_27(iParam1->f_190, 32))
					{
						PLAYER::_0x0C6B89876262A99D(PLAYER::PLAYER_ID(), iParam1->f_278[0]);
						PLAYER::_0xAC22AA6DF4D1C1DE(PLAYER::PLAYER_ID(), iParam1->f_278[0], 0f, -3f, 2, 2, 0);
						__LIB_1__::func_683(&(iParam1->f_190), 32);
					}
					if ((__LIB_0__::func_27(iParam1->f_191, 4096) || __LIB_0__::func_27(iParam1->f_191, 8192)) && iVar0 > 570)
					{
						__LIB_1__::func_681(&(iParam1->f_191), 4096);
						__LIB_1__::func_681(&(iParam1->f_191), 8192);
					}
				}
			}
			if (!__LIB_0__::func_27(iParam1->f_189, 2097152) && iVar0 > 570)
			{
				__LIB_12__::func_997(uParam0, func_61(1), func_61(2), 1, 2, 0);
				__LIB_1__::func_683(&(iParam1->f_189), 2097152);
			}
			func_755(iParam1->f_278[0], 1.75f, 0, 1045220557 /* Float: 0.2f */, 1, 3f, 20f, 30f, 1033476506 /* Float: 0.075f */, 1061158912 /* Float: 0.75f */, 1, 0, 1045220557 /* Float: 0.2f */, iParam1->f_111);
			__LIB_11__::func_83(iParam1->f_278[0], func_317(2), &(iParam1->f_213), 18f, 15f, 10f, 8f, 3.5f, 0, 0, 1, 1, 1);
			if (func_311(&(iParam1->f_102[3]), &(iParam1->f_189), func_309(3), func_310(), 1, 0) && !PED::IS_PED_ON_MOUNT(iParam1->f_278[0]))
			{
				__LIB_0__::func_19(&(iParam1->f_83), 2);
			}
			break;
		case 2:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam1->f_102[1]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam1->f_102[0], false))
			{
				ANIMSCENE::ABORT_ANIM_SCENE(iParam1->f_102[1], true);
			}
			__LIB_2__::func_788(&(iParam1->f_278[11]), 1, 0, 1);
			__LIB_2__::func_788(&(iParam1->f_278[9]), 1, 0, 1);
			__LIB_0__::func_172(iParam1->f_343);
			func_291(uParam0, 1);
			__LIB_0__::func_19(&(iParam1->f_83), 3);
			break;
		case 3:
			if (!PED::IS_PED_ON_MOUNT(iParam1->f_278[0]))
			{
				__LIB_0__::func_19(&(iParam1->f_83), 4);
			}
			break;
		case 4:
			if (func_311(&(Local_14.f_102[3]), &(Local_14.f_189), func_309(3), func_310(), 1, 0))
			{
				if (ANIMSCENE::_0x337F1CC8EE895601(iParam1->f_102[3], func_606(1)) || ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam1->f_102[3], false))
				{
					func_625(iParam1, ENTITY::GET_ENTITY_COORDS(iParam1->f_278[0], true, false), 1.4f, 1.4f, 5f, iParam1->f_278[0], 0, 0, 0, 0, 0, 0, 1);
					func_756(iParam1);
					__LIB_0__::func_19(&(iParam1->f_92), 11);
					__LIB_0__::func_19(&(iParam1->f_83), 6);
				}
				else if (!__LIB_0__::func_491(iParam1->f_278[0], 1369124074))
				{
					TASK::CLEAR_PED_TASKS(iParam1->f_278[0], true, false);
					TASK::TASK_ENTER_ANIM_SCENE(iParam1->f_278[0], iParam1->f_102[3], func_606(1), func_310(), (2.7f * 0.75f), 0, 3, 20000, -1082130432 /* Float: -1f */);
				}
			}
			break;
		case 6:
			fVar2 = __LIB_0__::func_665(Global_35, iParam1->f_278[0], 1, 1);
			if (PED::_0xA218D2BBCAA7388C(iParam1->f_278[0], 0))
			{
				if (PED::IS_PED_ON_MOUNT(Global_35))
				{
					if (fVar2 < 6f && TASK::GET_SCRIPT_TASK_STATUS(Global_35, 501393341, true) != 1)
					{
						TASK::TASK_DISMOUNT_ANIMAL(Global_35, 0, 0, 0, 0, 0);
					}
					return false;
				}
			}
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam1->f_102[3]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam1->f_102[3], false))
			{
				if (fVar2 < 6f)
				{
					PLAYER::_0x12E09E278C6C29B7(PLAYER::GET_PLAYER_INDEX());
					PED::_0x87C2724A56F66020(Global_35);
					if (PED::DOES_GROUP_EXIST(iParam1->f_110))
					{
						PED::REMOVE_GROUP(iParam1->f_110);
					}
					__LIB_9__::func_699(&(iParam1->f_102[3]), "Loop_Base", 1, "rsc2_leadin");
					__LIB_1__::func_683(&(iParam1->f_189), 524288);
					TASK::CLEAR_SEQUENCE_TASK(&(iParam1->f_317));
					TASK::OPEN_SEQUENCE_TASK(&(iParam1->f_317));
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_317(8), 1f, -1, 0.25f, 4194305, 113.8611f);
					TASK::TASK_ACHIEVE_HEADING(0, func_323(8), 2000);
					__LIB_1__::func_474(Global_35, &(iParam1->f_317), 0, 0, 1, 1);
					__LIB_0__::func_172(iParam1->f_343);
					__LIB_0__::func_19(&(iParam1->f_92), 12);
					__LIB_0__::func_19(&(iParam1->f_83), 7);
				}
			}
			break;
		case 7:
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
			}
			bVar3 = __LIB_0__::func_266(Global_35, func_317(8), 1f, 1, 0);
			bVar4 = __LIB_11__::func_849(ENTITY::GET_ENTITY_HEADING(Global_35), func_323(8)) < 70f;
			if (!__LIB_0__::func_163(Global_35, 242628503) && (!bVar3 || !bVar4))
			{
				TASK::CLEAR_PED_TASKS(Global_35, true, false);
				TASK::CLEAR_SEQUENCE_TASK(&(iParam1->f_317));
				TASK::OPEN_SEQUENCE_TASK(&(iParam1->f_317));
				if (!bVar3)
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_317(8), 1f, -1, 0.25f, 4194305, 113.8611f);
				}
				if (!bVar4)
				{
					TASK::TASK_ACHIEVE_HEADING(0, func_323(8), 2000);
				}
				__LIB_1__::func_474(Global_35, &(iParam1->f_317), 0, 0, 1, 1);
			}
			if (CAM::_0xA2B1C7EF759A63CE() < 1f)
			{
				Jump @3490; //curOff = 3317
			}
			else if (!__LIB_0__::func_27(iParam1->f_190, 1))
			{
			}
			else
			{
				if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam1->f_102[3]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam1->f_102[3], false)) && ((((ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iParam1->f_102[3]) > 0.25f && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iParam1->f_102[3]) < 0.85f) && bVar3) && bVar4) || ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iParam1->f_102[3]) > 0.99f))
				{
					__LIB_0__::func_172(iParam1->f_343);
					__LIB_1__::func_681(&(iParam1->f_189), 524288);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
					return true;
				}
			}
	}
	return false;
}

bool func_360(var uParam0, var uParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_278[0]) && (PED::IS_PED_DEAD_OR_DYING(uParam1->f_278[0], true) || PED::IS_PED_FATALLY_INJURED(uParam1->f_278[0])))
	{
		__LIB_1__::func_683(&(uParam1->f_193), 2);
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_278[1]) && (PED::IS_PED_DEAD_OR_DYING(uParam1->f_278[1], true) || PED::IS_PED_FATALLY_INJURED(uParam1->f_278[1])))
	{
		__LIB_1__::func_683(&(uParam1->f_193), 32);
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_111) && (PED::IS_PED_DEAD_OR_DYING(uParam1->f_111, true) || PED::IS_PED_FATALLY_INJURED(uParam1->f_111)))
	{
		__LIB_1__::func_683(&(uParam1->f_193), 16);
		return false;
	}
	if (!func_758(uParam0, uParam1))
	{
		return false;
	}
	func_759(uParam0, uParam1);
	func_760(uParam0, uParam1);
	if (PED::IS_PED_DEAD_OR_DYING(uParam1->f_291[0], true) && PED::GET_PED_CONFIG_FLAG(uParam1->f_291[0], 2, true))
	{
		PED::SET_PED_CONFIG_FLAG(uParam1->f_291[0], 2, false);
	}
	if (PED::IS_PED_DEAD_OR_DYING(uParam1->f_291[1], true) && PED::GET_PED_CONFIG_FLAG(uParam1->f_291[1], 2, true))
	{
		PED::SET_PED_CONFIG_FLAG(uParam1->f_291[1], 2, false);
	}
	if (func_761(uParam1))
	{
		if ((__LIB_0__::func_27(uParam1->f_190, 262144) && uParam1->f_96 > 0) && !__LIB_0__::func_899(&(uParam1->f_249)))
		{
			__LIB_1__::func_683(&(uParam1->f_190), 32768);
		}
		if (!__LIB_0__::func_27(uParam1->f_190, 512))
		{
			__LIB_4__::func_16(&(uParam1->f_205[0]));
			func_763(uParam1);
		}
		return true;
	}
	if (func_764(uParam0, uParam1))
	{
		return false;
	}
	if (!__LIB_0__::func_27(uParam1->f_190, 262144) && func_765(uParam1))
	{
		func_766(uParam1);
		if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_291[0]))
		{
			PED::SET_PED_ACCURACY(uParam1->f_291[0], 90);
		}
		if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_291[1]))
		{
			PED::SET_PED_ACCURACY(uParam1->f_291[1], 90);
		}
		__LIB_1__::func_683(&(uParam1->f_190), 262144);
	}
	func_767(uParam1, 1084227584 /* Float: 5f */, 1112014848 /* Float: 50f */);
	if (!__LIB_0__::func_27(uParam1->f_190, 2097152))
	{
		func_768(uParam0, uParam1);
		func_769(uParam1);
		func_770(uParam0, uParam1);
		if (uParam1->f_96 < 3)
		{
			func_771(uParam1);
			func_772(uParam0, uParam1);
			func_773(uParam1);
		}
		else
		{
			func_774(uParam1, 0);
		}
	}
	else
	{
		func_775(uParam1);
		func_774(uParam1, 0);
	}
	if ((uParam1->f_96 >= 2 && !__LIB_0__::func_27(uParam1->f_190, 8192)) || (__LIB_0__::func_27(uParam1->f_190, 2097152) && func_776(uParam1, 1)))
	{
		__LIB_1__::func_683(&(uParam1->f_190), 8192);
	}
	if (Global_43838 != 1)
	{
		if ((__LIB_0__::func_27(uParam1->f_190, 8192) && (__LIB_14__::func_9(uParam1->f_291[0]) || __LIB_14__::func_9(uParam1->f_291[1]))) && !PLAYER::_0xB16223CB7DA965F0(PLAYER::PLAYER_ID()))
		{
			Global_43838 = 1;
		}
	}
	func_777(uParam1);
	func_778(uParam0, uParam1);
	__LIB_1__::func_681(&(uParam1->f_190), 8388608);
	return false;
}

bool func_361(var uParam0, var uParam1)
{
	if (func_779(uParam0, uParam1))
	{
		return false;
	}
	func_767(uParam1, 2f, 1112014848 /* Float: 50f */);
	if (__LIB_0__::func_393(Global_35, uParam1->f_326[6], 0, 1))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 129, true);
	}
	func_759(uParam0, uParam1);
	switch (uParam1->f_88)
	{
		case 0:
			if (ENTITY::IS_ENTITY_DEAD(uParam1->f_319[0]))
			{
				return false;
			}
			__LIB_12__::func_997(uParam0, func_61(3), func_61(4), 3, 4, 0);
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(uParam1->f_319[0], true);
			__LIB_1__::func_681(&(uParam1->f_189), 512);
			__LIB_1__::func_561(&(uParam1->f_210));
			BUILTIN::SETTIMERA(0);
			__LIB_0__::func_19(&(uParam1->f_88), 1);
			break;
		case 1:
			if (BUILTIN::TIMERA() > 1000)
			{
				func_315(uParam0, uParam1, 128);
				if (VOLUME::_DOES_VOLUME_EXIST(uParam1->f_326[4]) && !__LIB_0__::func_27(uParam1->f_192, 4))
				{
					PED::_0x7C00CFC48A782DC0(uParam1->f_326[4], uParam1->f_319[0], 0f, -1.3f, 0f, 0f, 0f, 0f, 2, 1);
					__LIB_1__::func_683(&(uParam1->f_192), 4);
				}
				__LIB_0__::func_19(&(uParam1->f_88), 2);
			}
			break;
		case 2:
			if (!VOLUME::_DOES_VOLUME_EXIST(uParam1->f_326[4]))
			{
				return false;
			}
			if (func_765(uParam1) && !PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true))
			{
				func_766(uParam1);
				__LIB_0__::func_19(&(uParam1->f_88), 3);
			}
			break;
		case 3:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam1->f_102[2]) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam1->f_102[2], false))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_362(var uParam0, var uParam1)
{
	if (func_781(uParam0, uParam1))
	{
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_319[0]))
	{
		func_768(uParam0, uParam1);
		func_770(uParam0, uParam1);
		func_774(uParam1, 0);
		if ((!__LIB_14__::func_9(uParam1->f_291[0]) || !__LIB_14__::func_9(uParam1->f_291[1])) || __LIB_0__::func_27(uParam1->f_190, 32768))
		{
			if (__LIB_14__::func_9(uParam1->f_291[0]) && !__LIB_0__::func_491(uParam1->f_291[0], 780511057))
			{
				PED::REMOVE_PED_DEFENSIVE_AREA(uParam1->f_291[0], false);
				PED::SET_PED_COMBAT_MOVEMENT(uParam1->f_291[0], 2);
				PED::SET_PED_COMBAT_ATTRIBUTES(uParam1->f_291[0], 50, true);
				PED::SET_PED_CONFIG_FLAG(uParam1->f_291[0], 112, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(uParam1->f_291[0], 0, false);
				TASK::TASK_COMBAT_PED(uParam1->f_291[0], Global_35, 16777216, 0);
				if (!__LIB_0__::func_27(uParam1->f_191, 16))
				{
					func_782(&(Local_14.f_85), 6);
				}
			}
			if (__LIB_14__::func_9(uParam1->f_291[1]) && !__LIB_0__::func_491(uParam1->f_291[1], 780511057))
			{
				PED::REMOVE_PED_DEFENSIVE_AREA(uParam1->f_291[1], false);
				PED::SET_PED_COMBAT_MOVEMENT(uParam1->f_291[1], 2);
				PED::SET_PED_COMBAT_ATTRIBUTES(uParam1->f_291[1], 50, true);
				PED::SET_PED_CONFIG_FLAG(uParam1->f_291[1], 112, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(uParam1->f_291[1], 0, false);
				TASK::TASK_COMBAT_PED(uParam1->f_291[1], Global_35, 16777216, 0);
				if (__LIB_14__::func_9(uParam1->f_291[0]))
				{
					if (!__LIB_0__::func_27(uParam1->f_191, 16))
					{
						func_782(&(Local_14.f_85), 6);
					}
				}
			}
			func_775(uParam1);
		}
		else
		{
			func_760(uParam0, uParam1);
			func_778(uParam0, uParam1);
			func_773(uParam1);
			func_769(uParam1);
		}
	}
	func_777(uParam1);
	if (MAP::DOES_BLIP_EXIST(uParam1->f_310[0]))
	{
		if (__LIB_0__::func_71(Global_35) || (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(Global_35, false), -1) == Global_35))
		{
			MAP::_BLIP_SET_MODIFIER(uParam1->f_310[0], -1878373110);
		}
		else
		{
			MAP::_BLIP_REMOVE_MODIFIER(uParam1->f_310[0], -1878373110);
		}
	}
	if ((MAP::DOES_BLIP_EXIST(uParam1->f_310[2]) && ENTITY::DOES_ENTITY_EXIST(uParam1->f_291[0])) && __LIB_0__::func_665(Global_35, uParam1->f_291[0], 1, 1) > 100f)
	{
		MAP::REMOVE_BLIP(&(uParam1->f_310[2]));
	}
	if ((MAP::DOES_BLIP_EXIST(uParam1->f_310[3]) && ENTITY::DOES_ENTITY_EXIST(uParam1->f_291[1])) && __LIB_0__::func_665(Global_35, uParam1->f_291[1], 1, 1) > 100f)
	{
		MAP::REMOVE_BLIP(&(uParam1->f_310[3]));
	}
	if (uParam1->f_89 > 0)
	{
		__LIB_11__::func_83(Global_35, func_317(4), &(uParam1->f_210), 30f, 20f, 10f, 8f, 1f, 0, 0, 1, 1, 1);
	}
	switch (uParam1->f_89)
	{
		case 0:
			__LIB_12__::func_997(uParam0, func_61(4), func_61(5), 4, 5, 0);
			func_315(uParam0, uParam1, 256);
			__LIB_1__::func_681(&(uParam1->f_189), 512);
			__LIB_0__::func_19(&(uParam1->f_89), 1);
			break;
		case 1:
			if (func_759(uParam0, uParam1))
			{
				func_784(uParam1, 0);
				__LIB_1__::func_561(&(uParam1->f_210));
				__LIB_12__::func_966(uParam0, 0);
				func_291(uParam0, 1);
				__LIB_0__::func_19(&(uParam1->f_89), 2);
			}
			break;
		case 2:
			if (func_759(uParam0, uParam1) && __LIB_12__::func_670(&(uParam0->f_753)))
			{
				if (Global_43838 != 1)
				{
					__LIB_12__::func_967(uParam0, joaat("RMNR1_VACCINEUNDETECTED"));
				}
				__LIB_0__::func_7(&(uParam0->f_172), 262144);
				func_644(uParam1);
				__LIB_1__::func_683(&(uParam1->f_189), 1024);
				__LIB_0__::func_19(&(uParam1->f_89), 3);
				return true;
			}
			break;
	}
	return false;
}

void func_400(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
						func_822(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_822(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_822(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_822(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_822(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_822(joaat("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_822(joaat("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_822(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_822(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_822(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_822(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_822(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_822(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_822(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_822(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_822(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_822(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_822(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_822(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_822(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_822(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						__LIB_1__::func_818(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_822(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_822(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_822(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_822(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_824();
						func_825(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
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
						func_822(joaat("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
							func_400(Global_1347702[21 /*49*/].f_15, 0, 0, 0, 0);
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
						__LIB_19__::func_13(Global_35, joaat("CLOTHING_ITEM_BADGE_PZERO_000"), 0, -358215195, 1, 1);
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
							func_400(Global_1347702[82 /*49*/].f_15, 0, 0, 0, 0);
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
							func_400(Global_1347702[83 /*49*/].f_15, 0, 0, 0, 0);
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
						func_822(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_822(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
		func_860();
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
							func_822(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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

int func_428(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	func_351(iParam1);
	switch (iParam1->f_81)
	{
		case 0:
			if (STREAMING::_0xCF45DF50C7775F2A())
			{
				STREAMING::_0x5A8B01199C3E79C3();
			}
			if (!func_311(&(iParam1->f_102[4]), &(iParam1->f_189), func_309(4), "pl_idle", 1, 1))
			{
				return 0;
			}
			if (!func_297(uParam0, &(iParam1->f_278[2]), func_193(5), func_207(3), func_208(3), 2, 0, 0, 24387074, 0, 0, joaat("REL_PLAYER_LIKE"), 0))
			{
				return 0;
			}
			if (!func_298(&(iParam1->f_154[0]), func_195(0), func_317(5)))
			{
				return 0;
			}
			if (!func_298(&(iParam1->f_154[1]), func_195(1), func_317(5)))
			{
				return 0;
			}
			if (!func_298(&(iParam1->f_154[2]), func_195(2), func_317(5)))
			{
				return 0;
			}
			iVar0 = 0;
			iVar1 = ITEMSET::CREATE_ITEMSET(true);
			iVar3 = VOLUME::_CREATE_VOLUME_BOX(func_317(14), 0f, 0f, 0f, 3f, 3f, 3f);
			TASK::_0xB8E213D02F37947D(iVar3, iVar1, joaat("RANSACK_ATTACHED_LOCKBOX_SML_LOCKED"), 0, 0, 0, 0);
			iVar0 = 0;
			while (iVar0 < ITEMSET::GET_ITEMSET_SIZE(iVar1))
			{
				iVar2 = ITEMSET::GET_INDEXED_SCENARIO_POINT_INDEX_IN_ITEMSET(iVar0, iVar1);
				if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar2))
				{
					TASK::_SET_SCENARIO_POINT_ACTIVE(iVar2, false);
				}
				iVar0++;
			}
			ITEMSET::DESTROY_ITEMSET(iVar1);
			__LIB_0__::func_172(iVar3);
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam1->f_102[4]) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam1->f_102[4], false))
			{
				func_899(iParam1);
				func_625(iParam1, ENTITY::GET_ENTITY_COORDS(iParam1->f_278[0], true, false), 1.2f, 1.2f, 5f, 0, 0, 0, 0, 0, 0, 0, 1);
				ANIMSCENE::START_ANIM_SCENE(iParam1->f_102[4]);
			}
			if (iParam1->f_325 != 0)
			{
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iParam1->f_325, false);
			}
			__LIB_0__::func_19(&(iParam1->f_81), 1);
			break;
		case 1:
			if (__LIB_0__::func_665(Global_35, iParam1->f_278[0], 1, 1) > 80f)
			{
				__LIB_0__::func_19(&(iParam1->f_81), 2);
			}
			break;
		case 2:
			return 1;
	}
	return 0;
}

void func_429(var uParam0)
{
	int iVar0;
	if (__LIB_0__::func_1(uParam0->f_172, 8))
	{
		if (MAP::DOES_BLIP_EXIST(Local_14.f_310[2]))
		{
			MAP::REMOVE_BLIP(&(Local_14.f_310[2]));
		}
		if (MAP::DOES_BLIP_EXIST(Local_14.f_310[3]))
		{
			MAP::REMOVE_BLIP(&(Local_14.f_310[3]));
		}
		__LIB_6__::func_416(0, 0, 1103626240 /* Float: 25f */);
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
		}
		PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(Global_35, 8786);
		__LIB_0__::func_8(&Global_1935630, 65536);
		AITRANSPORT::_0x5639FBEA922788DA(Global_35);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_14.f_111, false);
		__LIB_1__::func_600(1);
		__LIB_7__::func_458(&(Local_14.f_342));
		if (PED::_0x5102307CE88798EB(Local_14.f_278[0]))
		{
			PED::_0x3088634CF8C819CF(Local_14.f_278[0]);
		}
		if (PED::_0x5102307CE88798EB(Local_14.f_278[1]))
		{
			PED::_0x3088634CF8C819CF(Local_14.f_278[1]);
		}
		if (PROPSET::_DOES_PROPSET_EXIST(Local_14.f_183))
		{
			PROPSET::_SET_PROPSET_AS_NO_LONGER_NEEDED(Local_14.f_183);
		}
		if (VOLUME::_DOES_VOLUME_EXIST(Local_14.f_326[13]))
		{
			POPULATION::_0x74C2B3DC0B294102(Local_14.f_326[13]);
		}
		func_739(0, 0);
		func_330(0, 0);
		if (PED::_0x91A5F9CBEBB9D936(Local_14.f_276))
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(Local_14.f_276, false);
		}
		POPULATION::_0xBC90BDF4E5228EA1();
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			func_431(&(Local_14.f_291[iVar0]));
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < Local_14.f_299)
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_14.f_299[iVar0]));
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < Local_14.f_310)
		{
			if (MAP::DOES_BLIP_EXIST(Local_14.f_310[iVar0]))
			{
				MAP::REMOVE_BLIP(&(Local_14.f_310[iVar0]));
			}
			iVar0++;
		}
		if (STREAMING::_0xCF45DF50C7775F2A())
		{
			STREAMING::_0x5A8B01199C3E79C3();
		}
	}
}

void func_431(int* iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, true))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
	}
}

void func_434(int* iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		VEHICLE::DELETE_VEHICLE(iParam0);
	}
}

void func_435(int* iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
	}
}

int func_488(int iParam0, int iParam1)
{
	var uVar0;
	return func_961(&uVar0, iParam0, iParam1);
}

bool func_574(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		if (!func_1016(&(uParam0->f_326[iVar0]), iVar0))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_577(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_278[0]))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_102[0], func_606(1), uParam0->f_278[0], 0);
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_102[0], func_606(2), uParam0->f_278[11], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_102[0], func_606(3), uParam0->f_278[9], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_102[0], func_608(17), uParam0->f_154[17], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_102[0], func_608(20), uParam0->f_154[18], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_102[0], func_608(14), uParam0->f_154[13], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_102[0], func_608(16), uParam0->f_154[16], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_102[0], func_606(0), Global_35, 0);
	ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_102[0], "pl_Base_StirPot", true);
	ANIMSCENE::START_ANIM_SCENE(uParam0->f_102[0]);
}

int func_601(var uParam0)
{
	int iVar0;
	var uVar1[5];
	var uVar7;
	vector3 vVar9;
	int iVar12;
	int iVar13;
	if (MISC::ARE_STRINGS_EQUAL(&(uParam0->f_206.f_344), "RMNR1_RSC1"))
	{
		if (ENTITY::WOULD_ENTITY_BE_OCCLUDED(func_193(4), func_207(2), true))
		{
			if (func_327(uParam0, &(Local_14.f_111), 2) && !__LIB_0__::func_491(Local_14.f_111, -76381094))
			{
				iVar0 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(func_207(2), joaat("PROP_HITCHINGPOST"), 5f, 1, false);
				if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar0))
				{
					TASK::_TASK_USE_SCENARIO_POINT(Local_14.f_111, iVar0, 0, -1, true, true, joaat("PROP_HITCHINGPOST"), false, -1f, false);
				}
			}
		}
		if (!__LIB_0__::func_27(Local_14.f_189, 1048576))
		{
			uVar7 = 1;
			iVar13 = __LIB_4__::func_67(&uVar1, &uVar7, Local_14.f_326[14], 5);
			iVar12 = 0;
			while (iVar12 < iVar13)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uVar1[iVar12]))
				{
					if (func_1041(iVar12, &vVar9))
					{
						__LIB_2__::func_761(vVar9, 2f, 0, 0);
						ENTITY::SET_ENTITY_COORDS(uVar1[iVar12], vVar9, false, false, true, true);
						ENTITY::_0x9587913B9E772D29(uVar1[iVar12], 0);
					}
					else
					{
						VEHICLE::DELETE_VEHICLE(&(uVar1[iVar12]));
					}
				}
				iVar12++;
			}
			__LIB_1__::func_683(&(Local_14.f_189), 1048576);
		}
		func_739(1, 0);
		if (__LIB_13__::func_521(&(uParam0->f_206), Global_35, func_606(0), 0, 1, 1))
		{
			__LIB_0__::func_569(joaat("MOTIONSTATE_WALK"), 2000, 0, 1, 1, 0, 0, 0);
		}
		if (!__LIB_1__::func_472(Local_14.f_278[1], 1116471296 /* Float: 70f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */))
		{
			func_303(&Local_14);
		}
	}
	else if (MISC::ARE_STRINGS_EQUAL(&(uParam0->f_206.f_344), "RMNR1_RSC2"))
	{
		if (__LIB_14__::func_12(&(uParam0->f_206), Global_35, func_606(0), 0, 1, 1))
		{
			TASK::TASK_SET_CROUCH_MOVEMENT(Global_35, true, 0, true);
			PED::FORCE_PED_MOTION_STATE(Global_35, joaat("MOTIONSTATE_CROUCH_IDLE"), false, 0, false);
		}
		if (__LIB_14__::func_12(&(uParam0->f_206), Local_14.f_278[0], func_606(1), 0, 1, 1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_14.f_278[0]))
			{
				__LIB_1__::func_571(Local_14.f_278[0], Local_14.f_278[1], 0, -1, 1);
			}
		}
		if (__LIB_14__::func_12(&(uParam0->f_206), Local_14.f_278[1], func_606(11), 0, 1, 1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_14.f_278[1]))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_14.f_278[1], func_317(9), func_323(9), true, false, true);
				ENTITY::_0x9587913B9E772D29(Local_14.f_278[1], 0);
			}
		}
		if (__LIB_14__::func_12(&(uParam0->f_206), Local_14.f_111, func_606(10), 0, 1, 1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_14.f_111))
			{
				TASK::TASK_STAND_STILL(Local_14.f_111, -1);
			}
		}
		if (__LIB_13__::func_521(&(uParam0->f_206), Local_14.f_319[0], func_1047(0), 0, 1, 1))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_14.f_319[0], func_207(25), func_208(25), true, false, true);
			func_325(&Local_14, 1);
			func_326(1, 0);
			PED::_0x2208438012482A1A(Local_14.f_291[0], false, false);
			ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_14.f_319[0], true);
		}
	}
	else if (MISC::ARE_STRINGS_EQUAL(&(uParam0->f_206.f_344), "RMNR1_RSC4"))
	{
		func_1048(&Local_14);
		if (func_311(&(Local_14.f_102[4]), &(Local_14.f_189), func_309(4), "pl_idle", 1, 1))
		{
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_14.f_102[4], false))
			{
				if (__LIB_13__::func_521(&(uParam0->f_206), Local_14.f_278[0], func_606(1), 0, 1, 1))
				{
					func_899(&Local_14);
					func_625(&Local_14, ENTITY::GET_ENTITY_COORDS(Local_14.f_278[0], true, false), 1.2f, 1.2f, 5f, 0, 0, 0, 0, 0, 0, 0, 1);
					ANIMSCENE::START_ANIM_SCENE(Local_14.f_102[4]);
				}
			}
		}
		func_330(1, 0);
		if (__LIB_13__::func_521(&(uParam0->f_206), Global_35, func_606(0), 0, 1, 1))
		{
			if (!CAM::_0xA24C1D341C6E0D53(1, 0, 0))
			{
				__LIB_0__::func_569(joaat("MOTIONSTATE_WALK"), 1000, 0, 1, 1, 0, 0, 0);
			}
		}
	}
	return 1;
}

int func_603(var uParam0)
{
	int iVar0;
	if (MISC::ARE_STRINGS_EQUAL(&(uParam0->f_206.f_344), "RMNR1_RSC1"))
	{
		if (func_327(uParam0, &(Local_14.f_111), 2) && !__LIB_0__::func_491(Local_14.f_111, -76381094))
		{
			iVar0 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(func_207(2), joaat("PROP_HITCHINGPOST"), 5f, 1, false);
			if (TASK::_DOES_SCENARIO_POINT_EXIST(iVar0))
			{
				TASK::_TASK_USE_SCENARIO_POINT(Local_14.f_111, iVar0, 0, -1, true, true, joaat("PROP_HITCHINGPOST"), false, -1f, false);
			}
			return 0;
		}
		if (!func_303(&Local_14))
		{
			return 0;
		}
	}
	else if (MISC::ARE_STRINGS_EQUAL(&(uParam0->f_206.f_344), "RMNR1_RSC2"))
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_14.f_278[1], func_207(30), func_208(30), true, false, true);
		AITRANSPORT::_0xBA8818212633500A(Local_14.f_278[1], 0, 1);
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_14.f_111, func_207(29), func_208(29), true, false, true);
		if (MAP::DOES_BLIP_EXIST(Local_14.f_310[0]))
		{
			MAP::_BLIP_REMOVE_MODIFIER(Local_14.f_310[0], 231194138);
			MAP::_BLIP_REMOVE_MODIFIER(Local_14.f_310[0], -546708623);
			MAP::REMOVE_BLIP(&(Local_14.f_310[0]));
		}
		PED::FORCE_PED_MOTION_STATE(Global_35, joaat("MOTIONSTATE_CROUCH_IDLE"), false, 0, false);
		TASK::TASK_SET_CROUCH_MOVEMENT(Global_35, true, 0, true);
		PED::_0x2208438012482A1A(Global_35, false, false);
	}
	else if (MISC::ARE_STRINGS_EQUAL(&(uParam0->f_206.f_344), "RMNR1_RSC4"))
	{
		if (!func_311(&(Local_14.f_102[4]), &(Local_14.f_189), func_309(4), "pl_idle", 1, 1))
		{
			return 0;
		}
		if (!func_298(&(Local_14.f_154[0]), func_195(0), func_317(5)))
		{
			return 0;
		}
		if (!func_298(&(Local_14.f_154[1]), func_195(1), func_317(5)))
		{
			return 0;
		}
		if (!func_298(&(Local_14.f_154[2]), func_195(2), func_317(5)))
		{
			return 0;
		}
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, func_207(31), func_208(31), true, false, true);
		ENTITY::_0x9587913B9E772D29(Global_35, 0);
	}
	return 1;
}

char* func_605(var uParam0)
{
	switch (__LIB_13__::func_22(uParam0))
	{
		case 0:
			return "RMNR1_RSC1";
		case 1:
			return "RMNR1_RSC2";
		case 2:
			return "RMNR1_RSC4";
		default:
			break;
	}
	return "RDTC3_RSC_1_P1";
}

char* func_606(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "ARTHUR";
		case 1:
			return "CaptainMonroe";
		case 2:
			return "Wapitiboy";
		case 3:
			return "A_F_M_WapTownfolk_01";
		case 4:
			return "A_M_M_WapWarriors_01";
		case 5:
			return "A_M_M_WapWarriors_01^1";
		case 6:
			return "A_M_M_WapWarriors_01^2";
		case 7:
			return "A_M_M_WapWarriors_01^3";
		case 8:
			return "A_M_M_WapWarriors_01^4";
		case 9:
			return "A_M_M_WapWarriors_01^5";
		case 10:
			return "Horse_01^2";
		case 11:
			return "Horse_01";
		case 12:
			return "S_M_M_Army_01";
		default:
			break;
	}
	return "FAIL";
}

char* func_608(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "p_cs_bedrollclsd01x";
		case 1:
			return "p_cs_blanket01x";
		case 2:
			return "p_journal01x";
		case 3:
		case 4:
		case 5:
			return "s_firstaidkit_sml01x";
		case 6:
			return "P_STRONGBOX01X";
		case 7:
			return "p_vialmedicine01x";
		case 8:
			return "p_vialmedicine01x^1";
		case 9:
			return "p_vialmedicine01x^2";
		case 10:
			return "s_firstaidkit_sml01x";
		case 11:
			return "s_firstaidkit_sml01x^1";
		case 12:
			return "s_firstaidkit_sml01x^2";
		case 13:
			return "p_bowlterracotta01x";
		case 14:
			return "P_bowlTerraCotta01x^1";
		case 15:
			return "P_bowlTerraCotta01x^2";
		case 16:
			return "p_cs_blanket01x";
		case 17:
			return "p_ladle02x";
		case 18:
			return "p_rustyspoon01x";
		case 19:
			return "p_rustySpoon01x^1";
		case 20:
			return "p_rustySpoon01x^2";
		case 21:
			return "p_bag01x";
		case 23:
			return "p_bowlna01x";
		case 24:
			return "p_chair_crate02x";
		case 22:
			return "p_kettle03x";
		default:
			break;
	}
	return "FAIL";
}

void func_612(var uParam0, int iParam1)
{
	__LIB_13__::func_33(uParam0, 1);
	StringCopy(&(uParam0->f_2575), func_605(uParam0), 24);
	__LIB_13__::func_59(uParam0, Global_35, func_606(0), 0, 0, 0);
	__LIB_13__::func_59(uParam0, iParam1->f_278[0], func_606(1), 0, 0, 0);
	__LIB_13__::func_59(uParam0, iParam1->f_278[1], func_606(11), 0, 0, 0);
	__LIB_13__::func_59(uParam0, iParam1->f_111, func_606(10), 0, 0, 0);
	__LIB_12__::func_957(uParam0, iParam1->f_319[0], func_1047(0), 0, 0, 0);
	__LIB_13__::func_59(uParam0, iParam1->f_291[0], func_606(12), 0, 0, 0);
	__LIB_12__::func_779(uParam0, 578.68f, 1273.28f, 200.57f);
	if (!__LIB_0__::func_84(&(uParam0->f_206), 16))
	{
		__LIB_0__::func_172(iParam1->f_342);
		iParam1->f_342 = VOLUME::_CREATE_VOLUME_BOX(578.68f, 1273.28f, 200.57f, 0f, 0f, 0f, 4.533056f, 3.931743f, 2.890867f);
		if (VOLUME::_DOES_VOLUME_EXIST(iParam1->f_342))
		{
			__LIB_13__::func_383(uParam0, &(iParam1->f_342), 0, 0, 0, 0);
		}
	}
	__LIB_0__::func_7(&(uParam0->f_172), 16);
}

void func_613(var uParam0, int iParam1, bool bParam2)
{
	__LIB_13__::func_33(uParam0, 2);
	StringCopy(&(uParam0->f_2575), func_605(uParam0), 24);
	if (bParam2)
	{
		__LIB_12__::func_944(uParam0, func_605(uParam0), 1);
		__LIB_12__::func_956(&(uParam0->f_753), Global_35, func_606(0), 0);
		__LIB_12__::func_956(&(uParam0->f_753), iParam1->f_278[0], func_606(1), 0);
		__LIB_12__::func_956(&(uParam0->f_753), iParam1->f_278[2], func_606(3), 0);
		__LIB_12__::func_956(&(uParam0->f_753), iParam1->f_154[0], func_608(0), 0);
		__LIB_12__::func_956(&(uParam0->f_753), iParam1->f_154[1], func_608(1), 0);
		__LIB_12__::func_956(&(uParam0->f_753), iParam1->f_154[2], func_608(2), 0);
	}
	__LIB_13__::func_59(uParam0, Global_35, func_606(0), 0, 0, 0);
	__LIB_13__::func_59(uParam0, iParam1->f_278[0], func_606(1), 0, 0, 0);
	__LIB_13__::func_59(uParam0, iParam1->f_278[2], func_606(3), 0, 0, 0);
	__LIB_12__::func_957(uParam0, iParam1->f_154[0], func_608(0), 0, 0, 0);
	__LIB_12__::func_957(uParam0, iParam1->f_154[1], func_608(1), 0, 0, 0);
	__LIB_12__::func_957(uParam0, iParam1->f_154[2], func_608(2), 0, 0, 0);
	__LIB_12__::func_957(uParam0, iParam1->f_154[3], func_608(10), 0, 0, 0);
	__LIB_12__::func_957(uParam0, iParam1->f_154[4], func_608(11), 0, 0, 0);
	__LIB_12__::func_957(uParam0, iParam1->f_154[5], func_608(12), 0, 0, 0);
	if (bParam2)
	{
		__LIB_12__::func_846(&(uParam0->f_206));
	}
	__LIB_12__::func_779(uParam0, 467.5872f, 2251.275f, 247.5143f);
	if (!__LIB_0__::func_84(&(uParam0->f_206), 16))
	{
		__LIB_0__::func_172(iParam1->f_342);
		iParam1->f_342 = VOLUME::_CREATE_VOLUME_BOX(467.5872f, 2251.275f, 247.5143f, 0f, 0f, 0f, 15f, 15f, 3f);
		if (VOLUME::_DOES_VOLUME_EXIST(iParam1->f_342))
		{
			__LIB_13__::func_383(uParam0, &(iParam1->f_342), 0, 0, 0, 0);
			iParam1->f_276 = PED::_0x4C39C95AE5DB1329(iParam1->f_342, 0, 15);
		}
	}
	__LIB_0__::func_7(&(uParam0->f_172), 16);
}

bool func_621(int iParam0)
{
	int iVar0;
	var uVar1;
	var uVar4;
	int iVar7;
	int iVar8;
	vector3 vVar9;
	vector3 vVar12;
	if (__LIB_0__::func_27(iParam0->f_189, 8388608))
	{
		return true;
	}
	iVar8 = SHAPETEST::GET_SHAPE_TEST_RESULT(iParam0->f_277, &iVar0, &uVar1, &uVar4, &iVar7);
	switch (iVar8)
	{
		case 0:
			vVar9 = { PED::GET_PED_BONE_COORDS(iParam0->f_278[0], 21030, 0f, 0f, 0f) };
			vVar12 = { PED::GET_PED_BONE_COORDS(Global_35, 21030, 0f, 0f, 0f) };
			iParam0->f_277 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(vVar9, vVar12, 3167, iParam0->f_278[0], 2);
			break;
		case 1:
			break;
		case 2:
			if (iVar0 == 0 || ((iVar0 == 1 && ENTITY::IS_ENTITY_A_PED(iVar7)) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar7) == Global_35))
			{
				__LIB_1__::func_683(&(iParam0->f_189), 8388608);
				return true;
			}
			break;
	}
	return false;
}

int func_622(int iParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	if (!__LIB_0__::func_272(iParam0, 0))
	{
		return 4;
	}
	if (!__LIB_0__::func_272(iParam1, 0))
	{
		return 4;
	}
	if (PED::IS_PED_FACING_PED(iParam1, iParam0, 60f))
	{
		return 0;
	}
	if (PED::IS_PED_FACING_PED(iParam1, iParam0, 180f))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, true, false) };
		vVar3 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam1) };
		if (__LIB_0__::func_195(vVar0, vVar0 + vVar3, ENTITY::GET_ENTITY_COORDS(iParam0, true, false)))
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	return 3;
}

char* func_623(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "pl_CallOver_L";
		case 2:
			return "pl_CallOver_R";
		case 3:
			return "pl_CallOver_B";
		case 0:
			return "pl_CallOver_F";
		default:
			break;
	}
	return "";
}

void func_625(int iParam0, vector3 vParam1, vector3 vParam4, int iParam7, float fParam8, float fParam9, float fParam10, float fParam11, float fParam12, float fParam13, int iParam14)
{
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0->f_343))
	{
		__LIB_0__::func_172(iParam0->f_343);
	}
	iParam0->f_343 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), vParam1, 0f, 0f, 0f, vParam4);
	if (ENTITY::DOES_ENTITY_EXIST(iParam7))
	{
		PED::_0x7C00CFC48A782DC0(iParam0->f_343, iParam7, fParam8, fParam9, fParam10, fParam11, fParam12, fParam13, 2, iParam14);
	}
}

int func_627(int iParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
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
		bVar8 = __LIB_5__::func_439(bParam12 >= 0f, bParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*iParam0, true, false)));
		func_1068(iParam0, iParam1, uParam3, fParam2, bVar8, sParam7);
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
		if (__LIB_4__::func_231(*iParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (__LIB_14__::func_103(iParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, bVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_627(iParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !bVar8 <= (fParam2 + 5f))
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
					if (__LIB_14__::func_104(iParam0, iParam1, bVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
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
					__LIB_10__::func_577(iParam1, uParam3, bVar8);
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
					__LIB_14__::func_104(iParam0, iParam1, bVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
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
					__LIB_14__::func_104(iParam0, iParam1, bVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
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
				__LIB_10__::func_577(iParam1, uParam3, bVar8);
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

void func_628(var uParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		__LIB_1__::func_480(iParam1);
	}
	__LIB_2__::func_480(uParam0, 1, 1, 1, 0);
}

void func_629()
{
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(1);
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(8);
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(9);
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(10);
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(5);
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(3);
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(4);
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(2);
	HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(0);
	PED::SET_PED_RESET_FLAG(Global_35, 219, true);
	PED::SET_PED_RESET_FLAG(Global_35, 220, true);
	PED::SET_PED_RESET_FLAG(Global_35, 187, true);
	PED::SET_PED_RESET_FLAG(Global_35, 129, true);
}

void func_630(int iParam0)
{
	func_1068(&(iParam0->f_278[0]), iParam0, &(iParam0->f_61), 0f, -1082130432 /* Float: -1f */, 0);
}

bool func_631(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	char* sVar0;
	sVar0 = func_1091(iParam2);
	if ((__LIB_6__::func_903(sVar0) && __LIB_10__::func_578(sVar0)) && !bParam4)
	{
		AUDIO::RESTART_SCRIPTED_CONVERSATION(sVar0);
	}
	else if (__LIB_12__::func_876(uParam0, sVar0, 0))
	{
		if (bParam5)
		{
			__LIB_8__::func_875(iParam1->f_278[0], sVar0, 0, 1);
		}
	}
	else
	{
		return false;
	}
	if (bParam3)
	{
		func_1096(iParam1, iParam2);
	}
	return true;
}

bool func_637(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!func_1106(&(iParam0->f_319[0]), func_194(0), func_207(15), func_208(15)))
	{
		return false;
	}
	if (!func_1107(iParam0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_319[0]))
	{
		VEHICLE::SET_VEHICLE_EXTRA(iParam0->f_319[0], 1, true);
		VEHICLE::SET_VEHICLE_EXTRA(iParam0->f_319[0], 2, true);
		VEHICLE::SET_VEHICLE_EXTRA(iParam0->f_319[0], 3, true);
	}
	iVar0 = 35;
	iVar1 = 0;
	while (iVar1 < 6)
	{
		iVar2 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iParam0->f_319[0], iVar1);
		if (iVar1 < 2)
		{
			iParam0->f_296[iVar1] = iVar2;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
		}
		else
		{
			__LIB_9__::func_820(iVar2, 1, iVar0);
		}
		iVar1++;
	}
	return true;
}

void func_638(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	if (__LIB_0__::func_272(iParam0, 0))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, bParam3);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, iParam1);
		PED::SET_PED_CONFIG_FLAG(iParam0, 6, true);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iParam0, 1);
		ENTITY::_SET_ENTITY_SOMETHING(iParam0, false);
		PED::SET_PED_ACCURACY(iParam0, 20);
	}
}

bool func_640()
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	MISC::_GET_WEATHER_TYPE_TRANSITION(&iVar0, &iVar1, &fVar2);
	if (fVar2 < 0.75f)
	{
		iVar3 = iVar0;
	}
	else
	{
		iVar3 = iVar1;
	}
	return func_1109(iVar3);
}

int func_643(int iParam0)
{
	switch (iParam0)
	{
		case joaat("FOG"):
		case joaat("SNOW"):
		case joaat("SNOWLIGHT"):
		case joaat("BLIZZARD"):
		case joaat("WHITEOUT"):
		case joaat("THUNDERSTORM"):
		case joaat("GROUNDBLIZZARD"):
			return 1;
	}
	return 0;
}

void func_644(int iParam0)
{
	if (MAP::DOES_BLIP_EXIST(iParam0->f_196))
	{
		MAP::_BLIP_REMOVE_MODIFIER(iParam0->f_196, -546708623);
		MAP::_BLIP_REMOVE_MODIFIER(iParam0->f_196, 231194138);
		MAP::REMOVE_BLIP(&(iParam0->f_196));
	}
}

int func_647(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	char* sVar1;
	switch (iParam1)
	{
		case 0:
			iVar0 = __LIB_1__::func_863(iParam0->f_278[0], iParam2, 1, 1);
			break;
		case 1:
			iVar0 = __LIB_1__::func_863(iParam0->f_154[6], iParam2, 1, 1);
			break;
		case 2:
			iVar0 = __LIB_1__::func_863(iParam0->f_291[0], iParam2, 1, 1);
			break;
		case 3:
			iVar0 = __LIB_1__::func_863(iParam0->f_291[1], iParam2, 1, 1);
			break;
		default:
			break;
	}
	sVar1 = func_1114(iParam1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, sVar1);
	}
	if (bParam3)
	{
		MAP::_BLIP_SET_MODIFIER(iVar0, iParam4);
	}
	if (bParam5)
	{
		MAP::_BLIP_SET_MODIFIER(iVar0, -1878373110);
	}
	if (bParam6)
	{
		MAP::_BLIP_SET_MODIFIER(iVar0, 231194138);
	}
	return iVar0;
}

char* func_648(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return "RMNR1_O_MOUNT";
		case 4:
			return "RMNR1_O_WAIT";
		case 8:
			return "RMNR1_O_FLWMNR";
		case 16:
			return "RMNR1_O_RTNMNR";
		case 64:
			return "RMNR1_O_RTNWGN";
		case 32:
			return "RMNR1_O_RTVMED";
		case 128:
			return "RMNR1_O_SRCCNV";
		case 256:
			return "RMNR1_O_RTNWAP";
		default:
			break;
	}
	return "FAIL";
}

bool func_649(int iParam0)
{
	if (__LIB_14__::func_9(iParam0->f_291[0]) && __LIB_14__::func_9(iParam0->f_291[1]))
	{
		return true;
	}
	return false;
}

float func_652(int iParam0)
{
	int iVar0;
	iVar0 = Local_14.f_278[1];
	switch (iParam0)
	{
		case 0:
			return PED::_0x46BF2A810679D6E6(iVar0, 1.25f);
		case 1:
			return PED::_0x46BF2A810679D6E6(iVar0, 1.75f);
		case 2:
			return PED::_0x46BF2A810679D6E6(iVar0, 2f);
		case 3:
			return PED::_0x46BF2A810679D6E6(iVar0, 2.001f);
		default:
			break;
	}
	return PED::_0x46BF2A810679D6E6(iVar0, 1.75f);
}

char* func_653(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "pl_IG1_WAGON_GetVaccinesLong";
		case 1:
			return "pl_IG1_WAGON_GetVaccinesShort";
		case 2:
			return "pl_IG1_WAGON_GetVacsActnWFlnch01";
		case 3:
			return "pl_IG1_WAGON_GetVacsActnWFlnch02";
		case 4:
			return "pl_IG1_WAGON_GetVacsStealthLong";
		case 5:
			return "pl_IG1_WAGON_GetVacsStealthShort";
		default:
			break;
	}
	return "FAIL";
}

void func_679(var uParam0)
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
			func_1141(&(uParam0->f_416));
		}
		func_1142(&(uParam0->f_404), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_12__::func_706(uParam0, 0f, 0f, 0f);
		func_1144(uParam0);
		func_1145(uParam0);
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

void func_686(var uParam0)
{
	if (!__LIB_0__::func_84(uParam0, 536870912))
	{
		__LIB_0__::func_106(uParam0, 1);
		func_687(&(uParam0->f_405), uParam0->f_416);
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
	__LIB_4__::func_797(!__LIB_0__::func_1(uParam0->f_405, 128));
	if (!__LIB_0__::func_1(uParam0->f_405, 128))
	{
		__LIB_3__::func_120();
	}
}

void func_687(var uParam0, int iParam1)
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
		__LIB_17__::func_327(Global_35, joaat("CLOTHING_ITEM_NECKWEAR_NONE"), 0, 1742327865, 0, 1, 0, 0, 1, 0);
		__LIB_1__::func_704(joaat("KIT_BANDANA"), 0);
	}
	__LIB_1__::func_550(&(Global_1946804.f_1497), Global_35, 1, 49217, 1, 1, 1);
	if (Global_1359489.f_16 & 4194304 != 0)
	{
		Global_1359489.f_16 = (Global_1359489.f_16 - Global_1359489.f_16 & 4194304);
	}
	*uParam0 = 0;
}

int func_739(bool bParam0, int iParam1)
{
	int iVar0[1];
	vector3 vVar2;
	float fVar5;
	var uVar6[1];
	if ((bParam0 == 1 && __LIB_0__::func_27(Local_14.f_189, 64)) || (bParam0 == 0 && !__LIB_0__::func_27(Local_14.f_189, 64)))
	{
		return 1;
	}
	iVar0[0] = joaat("P_GUN_HANGITEM01X");
	vVar2 = { func_317(12) };
	fVar5 = 5f;
	if (bParam0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_180[0]))
		{
			__LIB_3__::func_510(&uVar6, &iVar0, 1, vVar2, fVar5);
			Local_14.f_180[0] = uVar6[0];
		}
		if ((ENTITY::DOES_ENTITY_EXIST(Local_14.f_180[0]) && !__LIB_0__::func_27(Local_14.f_189, 64)) && (iParam1 == 0 || ENTITY::IS_ENTITY_OCCLUDED(Local_14.f_180[0])))
		{
			ENTITY::CREATE_MODEL_HIDE(vVar2, fVar5, iVar0[0], false);
			__LIB_1__::func_683(&(Local_14.f_189), 64);
			return 1;
		}
	}
	else if (__LIB_0__::func_27(Local_14.f_189, 64) && (iParam1 == 0 || ENTITY::IS_ENTITY_OCCLUDED(Local_14.f_180[0])))
	{
		ENTITY::REMOVE_MODEL_HIDE(vVar2, fVar5, iVar0[0], 0);
		__LIB_1__::func_681(&(Local_14.f_189), 64);
		return 1;
	}
	return 0;
}

bool func_744(char* sParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	float fVar8;
	float fVar9;
	int iVar10;
	float fVar11;
	bool bVar12;
	if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sParam0))
	{
		return false;
	}
	if (!TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sParam0, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), &iVar0) || !TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sParam0, ENTITY::GET_ENTITY_COORDS(Local_14.f_278[0], true, false), &iVar1))
	{
		return false;
	}
	TASK::WAYPOINT_RECORDING_GET_COORD(sParam0, iVar0, &vVar2);
	TASK::WAYPOINT_RECORDING_GET_COORD(sParam0, iVar1, &vVar5);
	fVar8 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), vVar2, true);
	fVar9 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_14.f_278[0], true, false), vVar5, true);
	TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(sParam0, &iVar10);
	fVar11 = TASK::GET_WAYPOINT_DISTANCE_ALONG_ROUTE(sParam0, (iVar10 - 1));
	fVar8 = (fVar8 + (fVar11 - TASK::GET_WAYPOINT_DISTANCE_ALONG_ROUTE(sParam0, iVar0)));
	fVar9 = (fVar9 + (fVar11 - TASK::GET_WAYPOINT_DISTANCE_ALONG_ROUTE(sParam0, iVar1)));
	bVar12 = fVar8 <= fVar9;
	if (bVar12)
	{
	}
	return bVar12;
}

void func_745(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true, false), &uVar0);
	if (bParam2)
	{
		TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iParam0, sParam1, uVar0, 30254, -1, 0, 0, -1);
	}
	else
	{
		TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iParam0, sParam1, uVar0, 30252, -1, 0, 0, -1);
	}
}

void func_746()
{
	AUDIO::_0x0D7FD6A55FD63AEF(19, 3, 1);
	AUDIO::_0x0D7FD6A55FD63AEF(18, 3, 1);
	AUDIO::_0x0D7FD6A55FD63AEF(16, 3, 1);
	AUDIO::_0x0D7FD6A55FD63AEF(15, 3, 1);
	AUDIO::_0x0D7FD6A55FD63AEF(6, 3, 0);
}

void func_748()
{
	if (!PED::IS_PED_INJURED(Global_35))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 129, true);
		PED::SET_PED_RESET_FLAG(Global_35, 189, true);
	}
}

void func_751(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (ENTITY::IS_ENTITY_DEAD(iParam1->f_278[0]))
	{
		return;
	}
	iVar0 = iParam1->f_92;
	if (__LIB_0__::func_27(iParam1->f_191, 4096) && !__LIB_0__::func_71(Global_35))
	{
		iVar0 = 8;
	}
	else if ((__LIB_0__::func_27(iParam1->f_191, 8192) && TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iParam1->f_278[0], 0)) && TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(iParam1->f_278[0]))
	{
		iVar0 = 9;
	}
	else if (__LIB_5__::func_463())
	{
		return;
	}
	switch (iVar0)
	{
		case 8:
			func_1220(uParam0, iParam1, iVar0, 5, 1084227584 /* Float: 5f */, 1077936128 /* Float: 3f */);
			break;
		case 9:
			func_1220(uParam0, iParam1, iVar0, 6, 1084227584 /* Float: 5f */, 1077936128 /* Float: 3f */);
			break;
		case 0:
			if (func_1221(iParam1, 7))
			{
				if (__LIB_1__::func_185(51))
				{
					__LIB_0__::func_19(&(iParam1->f_92), 2);
				}
				else
				{
					__LIB_0__::func_19(&(iParam1->f_92), 1);
				}
			}
			else
			{
				func_631(uParam0, iParam1, 7, 1, 0, 1);
			}
			break;
		case 1:
			if (func_1221(iParam1, 8))
			{
				__LIB_0__::func_19(&(iParam1->f_92), 3);
			}
			else
			{
				func_631(uParam0, iParam1, 8, 1, 0, 1);
			}
			break;
		case 2:
			if (func_1221(iParam1, 9))
			{
				__LIB_0__::func_19(&(iParam1->f_92), 3);
			}
			else
			{
				func_631(uParam0, iParam1, 9, 1, 0, 1);
			}
			break;
		case 3:
			if (func_1221(iParam1, 10))
			{
				if (__LIB_1__::func_185(56))
				{
					__LIB_0__::func_19(&(iParam1->f_92), 4);
				}
				else
				{
					__LIB_0__::func_19(&(iParam1->f_92), 5);
				}
			}
			else
			{
				func_631(uParam0, iParam1, 10, 1, 0, 1);
			}
			break;
		case 4:
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iParam1->f_278[0], func_196(0)))
			{
				TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(func_196(0), ENTITY::GET_ENTITY_COORDS(iParam1->f_278[0], true, false), &iVar1);
				if (iVar1 > 230)
				{
					if (func_1221(iParam1, 12))
					{
						__LIB_0__::func_19(&(iParam1->f_92), 5);
					}
					else if (iVar1 < 310)
					{
						func_631(uParam0, iParam1, 12, 1, 0, 1);
					}
					else
					{
						__LIB_0__::func_19(&(iParam1->f_92), 5);
					}
				}
			}
			break;
		case 5:
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iParam1->f_278[0], func_196(0)))
			{
				TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(func_196(0), ENTITY::GET_ENTITY_COORDS(iParam1->f_278[0], true, false), &iVar2);
				if (func_1221(iParam1, 11))
				{
					__LIB_0__::func_19(&(iParam1->f_92), 6);
				}
				else if (iVar2 > 458)
				{
					func_631(uParam0, iParam1, 11, 1, 0, 1);
				}
			}
			break;
		case 6:
			if (!VOLUME::_DOES_VOLUME_EXIST(iParam1->f_326[2]))
			{
				return;
			}
			if (func_1221(iParam1, 13))
			{
				__LIB_0__::func_19(&(iParam1->f_92), 7);
			}
			else if (ENTITY::IS_ENTITY_IN_VOLUME(iParam1->f_278[0], iParam1->f_326[2], true, 0))
			{
				func_631(uParam0, iParam1, 13, 1, 0, 1);
			}
			break;
		case 7:
			if (func_1221(iParam1, 14))
			{
				__LIB_0__::func_19(&(iParam1->f_92), 12);
			}
			else
			{
				__LIB_1__::func_681(&(iParam1->f_191), 4096);
				__LIB_1__::func_681(&(iParam1->f_191), 8192);
				func_631(uParam0, iParam1, 14, 1, 0, 1);
			}
			break;
		case 10:
			if ((!__LIB_0__::func_899(&(iParam1->f_258)) || __LIB_8__::func_684(func_1091(16))) || __LIB_8__::func_684(func_1091(15)))
			{
				__LIB_2__::func_259(&(iParam1->f_258));
			}
			if (__LIB_0__::func_71(Global_35))
			{
				if (__LIB_9__::func_178(&(iParam1->f_258)) > 7f)
				{
					if (func_631(uParam0, iParam1, 15, 1, 0, 1))
					{
						__LIB_2__::func_259(&(iParam1->f_258));
					}
				}
			}
			else
			{
				__LIB_1__::func_561(&(iParam1->f_258));
				__LIB_0__::func_19(&(iParam1->f_92), 11);
			}
			break;
		case 11:
			if ((!__LIB_0__::func_899(&(iParam1->f_258)) || __LIB_8__::func_684(func_1091(16))) || __LIB_8__::func_684(func_1091(15)))
			{
				__LIB_2__::func_259(&(iParam1->f_258));
			}
			if (!__LIB_0__::func_71(Global_35))
			{
				if (__LIB_9__::func_178(&(iParam1->f_258)) > 7f)
				{
					if (func_631(uParam0, iParam1, 16, 1, 0, 1))
					{
						__LIB_2__::func_259(&(iParam1->f_258));
					}
				}
			}
			else
			{
				__LIB_1__::func_561(&(iParam1->f_258));
				__LIB_0__::func_19(&(iParam1->f_92), 10);
			}
			break;
		case 12:
			break;
	}
	iParam1->f_93 = iVar0;
}

void func_755(int iParam0, float fParam1, int iParam2, float fParam3, bool bParam4, float fParam5, float fParam6, float fParam7, int iParam8, int iParam9, bool bParam10, int iParam11, int iParam12, var uParam13)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iParam0, 0))
			{
				if (bParam4)
				{
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iParam0, fParam1, iParam2, fParam3, 0);
				}
				TASK::SET_ENABLE_SPEED_RESTRAIN_FOR_WAYPOINT_RECORDING_LEADER(iParam0, 1);
				TASK::SET_UP_SPEED_RESTRAIN_INFORMATION_FOR_PLAYER_FOLLOWER(iParam0, fParam5, fParam6, fParam7, iParam8, iParam9, iParam11, iParam12, uParam13);
			}
		}
	}
	if (bParam10)
	{
		if (PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MELEE"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_HORSE_ATTACK_PRIMARY"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_HORSE_ATTACK_SECONDARY"), false);
		}
	}
}

void func_756(int iParam0)
{
	func_1223(iParam0);
	ANIMSCENE::START_ANIM_SCENE(iParam0->f_102[3]);
}

bool func_758(var uParam0, int iParam1)
{
	if (__LIB_0__::func_27(iParam1->f_190, 4))
	{
		return true;
	}
	if (!__LIB_0__::func_27(iParam1->f_190, 1) && func_312(uParam0, iParam1, 0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1->f_319[0]))
	{
		return false;
	}
	if (!func_329(iParam1))
	{
		return false;
	}
	if (!func_298(&(iParam1->f_154[10]), func_195(10), func_317(6)))
	{
		return false;
	}
	if (!func_298(&(iParam1->f_154[11]), func_195(11), func_317(6)))
	{
		return false;
	}
	if (!func_298(&(iParam1->f_154[12]), func_195(12), func_317(6)))
	{
		return false;
	}
	if (!func_298(&(iParam1->f_154[7]), func_195(7), func_317(6)))
	{
		return false;
	}
	if (!func_298(&(iParam1->f_154[8]), func_195(8), func_317(6)))
	{
		return false;
	}
	if (!func_298(&(iParam1->f_154[9]), func_195(9), func_317(6)))
	{
		return false;
	}
	if (__LIB_0__::func_27(iParam1->f_190, 1))
	{
		if (!__LIB_0__::func_27(iParam1->f_195, 32))
		{
			func_321(iParam1);
			func_315(uParam0, iParam1, 32);
			__LIB_12__::func_997(uParam0, func_61(2), func_61(3), 2, 3, 0);
		}
	}
	PED::SET_PED_CONFIG_FLAG(Local_14.f_291[0], 2, true);
	PED::SET_PED_CONFIG_FLAG(Local_14.f_291[1], 2, true);
	if (!ENTITY::IS_ENTITY_DEAD(iParam1->f_319[0]) && func_649(iParam1))
	{
		if (PED::IS_PED_IN_VEHICLE(iParam1->f_291[0], iParam1->f_319[0], false) && PED::IS_PED_IN_VEHICLE(iParam1->f_291[1], iParam1->f_319[0], false))
		{
			func_1224(iParam1);
			VEHICLE::_0xCBF88256E44D5D39(iParam1->f_319[0], true);
			if (VOLUME::_DOES_VOLUME_EXIST(iParam1->f_326[6]) && !__LIB_0__::func_27(iParam1->f_192, 1))
			{
				PED::_0x7C00CFC48A782DC0(iParam1->f_326[6], iParam1->f_319[0], 0f, -1f, 0f, 0f, 0f, 0f, 2, 1);
				__LIB_1__::func_683(&(iParam1->f_192), 1);
			}
			if (VOLUME::_DOES_VOLUME_EXIST(iParam1->f_326[7]) && !__LIB_0__::func_27(iParam1->f_192, 2))
			{
				PED::_0x7C00CFC48A782DC0(iParam1->f_326[7], iParam1->f_319[0], 3.8f, -3.4f, 0f, 0f, 0f, 0f, 2, 1);
				__LIB_1__::func_683(&(iParam1->f_192), 2);
			}
			if (VOLUME::_DOES_VOLUME_EXIST(iParam1->f_326[8]))
			{
				PED::_0x7C00CFC48A782DC0(iParam1->f_326[8], iParam1->f_319[0], 0f, 9f, 0f, 0f, 0f, 0f, 2, 1);
			}
			if (__LIB_0__::func_27(iParam1->f_189, 8))
			{
				MISC::CLEAR_WEATHER_TYPE_PERSIST();
				__LIB_1__::func_681(&(iParam1->f_189), 8);
			}
			Global_43838 = 0;
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iParam1->f_111, true);
			if (VOLUME::_DOES_VOLUME_EXIST(iParam1->f_326[4]) && !__LIB_0__::func_27(iParam1->f_192, 4))
			{
				PED::_0x7C00CFC48A782DC0(iParam1->f_326[4], iParam1->f_319[0], 0f, -1.3f, 0f, 0f, 0f, 0f, 2, 1);
				__LIB_1__::func_683(&(iParam1->f_192), 4);
			}
			__LIB_1__::func_683(&(iParam1->f_190), 4);
			return true;
		}
		else
		{
			if (!PED::IS_PED_IN_VEHICLE(iParam1->f_291[0], iParam1->f_319[0], false))
			{
				TASK::TASK_WARP_PED_INTO_VEHICLE(iParam1->f_291[0], iParam1->f_319[0], -1);
				return false;
			}
			if (!PED::IS_PED_IN_VEHICLE(iParam1->f_291[1], iParam1->f_319[0], false))
			{
				TASK::TASK_WARP_PED_INTO_VEHICLE(iParam1->f_291[1], iParam1->f_319[0], 0);
				return false;
			}
		}
	}
	return false;
}

bool func_759(var uParam0, var uParam1)
{
	float fVar0;
	int iVar1;
	struct<7> Var2;
	fVar0 = __LIB_0__::func_94(Global_35, func_317(10), 1);
	if (fVar0 > 320f)
	{
		return false;
	}
	switch (uParam1->f_90)
	{
		case 0:
			if (!func_297(uParam0, &(uParam1->f_278[2]), func_193(5), func_207(3), func_208(3), 2, 0, 0, 24387074, 0, 0, joaat("REL_PLAYER_LIKE"), 0))
			{
				return false;
			}
			if (!func_298(&(uParam1->f_154[0]), func_195(0), func_317(5)))
			{
				return false;
			}
			if (!func_298(&(uParam1->f_154[1]), func_195(1), func_317(5)))
			{
				return false;
			}
			if (!func_298(&(uParam1->f_154[2]), func_195(2), func_317(5)))
			{
				return false;
			}
			if (!func_298(&(uParam1->f_154[3]), func_195(3), func_317(5)))
			{
				return false;
			}
			if (!func_298(&(uParam1->f_154[4]), func_195(4), func_317(5)))
			{
				return false;
			}
			if (!func_298(&(uParam1->f_154[5]), func_195(5), func_317(5)))
			{
				return false;
			}
			if (uParam1->f_98 != 256)
			{
				func_784(uParam1, 1);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_278[0]) && ENTITY::DOES_ENTITY_EXIST(Local_14.f_278[1]))
			{
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_14.f_278[0], func_317(4), func_323(4), true, false, true);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_14.f_278[1], func_207(1), func_208(1), true, false, true);
			}
			func_331(uParam1->f_278[2], joaat("REL_PLAYER_LIKE"), func_207(3), func_208(3));
			if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_319[0]) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_319[0]))
			{
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(uParam1->f_319[0], true);
			}
			__LIB_0__::func_19(&(uParam1->f_90), 1);
			break;
		case 1:
			if (__LIB_0__::func_27(uParam1->f_189, 512) && fVar0 < 300f)
			{
				__LIB_1__::func_681(&(uParam1->f_189), 512);
			}
			if (fVar0 < 120f)
			{
				__LIB_0__::func_19(&(uParam1->f_90), 2);
			}
			break;
		case 2:
			if (!__LIB_1__::func_472(uParam1->f_278[1], 1116471296 /* Float: 70f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */))
			{
				func_303(uParam1);
			}
			if (!STREAMING::_0xCF45DF50C7775F2A())
			{
				if (fVar0 < 120f && fVar0 > 60f)
				{
					STREAMING::_0x513F8AA5BF2F17CF(func_317(4), 50f, 1);
				}
			}
			else if (STREAMING::_0xCF45DF50C7775F2A() && (fVar0 > 150f || fVar0 < 60f))
			{
				STREAMING::_0x5A8B01199C3E79C3();
			}
			if (fVar0 < 60f)
			{
				func_330(1, 0);
			}
			if (fVar0 < 80f)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_319[0]) && __LIB_0__::func_665(Global_35, uParam1->f_319[0], 1, 1) > 80f)
				{
					func_434(&(uParam1->f_319[0]));
					uParam1->f_319[0] = 0;
				}
				else if (fVar0 < 45f)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
					{
						iVar1 = PED::GET_VEHICLE_PED_IS_IN(Global_35, false);
						if (ENTITY::DOES_ENTITY_EXIST(iVar1))
						{
							uParam1->f_325 = iVar1;
							if (ENTITY::GET_ENTITY_SPEED(iVar1) > 0.05f)
							{
								if (!__LIB_0__::func_491(Global_35, -2118855366))
								{
									TASK::CLEAR_PED_TASKS(Global_35, true, false);
									TASK::TASK_VEHICLE_TEMP_ACTION(Global_35, iVar1, 24, 500);
								}
							}
							else if (!AITRANSPORT::_0x660639BC60157048(Global_35, iVar1))
							{
								TASK::CLEAR_PED_TASKS(Global_35, true, false);
								Var2.f_5 = 1073741824;
								Var2.f_6 = 1;
								Var2.f_3 = Global_35;
								Var2.f_4 = iVar1;
								AITRANSPORT::TASK_EXIT_TRANSPORT(&Var2);
								VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(uParam1->f_325, false);
							}
						}
					}
				}
			}
			return true;
	}
	return false;
}

int func_760(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	if (__LIB_0__::func_27(uParam1->f_190, 1048576))
	{
		return 1;
	}
	if (!__LIB_0__::func_266(Global_35, func_207(16), 300f, 1, 1))
	{
		return 0;
	}
	if (!func_297(uParam0, &(uParam1->f_291[2]), func_193(1), func_207(16), func_208(16), 0, "MNR1_WAIT_GUARD_A", 1, 888116744, 0, 0, joaat("REL_PLAYER_LIKE"), 0))
	{
		return 0;
	}
	if (!func_297(uParam0, &(uParam1->f_291[3]), func_193(1), func_207(17), func_208(17), 0, "MNR1_WAIT_GUARD_B", 1, -1213490302, 0, 0, joaat("REL_PLAYER_LIKE"), 0))
	{
		return 0;
	}
	iVar0 = 2;
	while (iVar0 <= 3)
	{
		iVar1 = 0;
		bVar3 = true;
		if (__LIB_1__::func_985())
		{
			iVar2 = joaat("WEAPON_SHOTGUN_DOUBLEBARREL");
		}
		else
		{
			iVar2 = joaat("WEAPON_REPEATER_CARBINE");
		}
		WEAPON::_GIVE_WEAPON_TO_PED_2(uParam1->f_291[iVar0], iVar2, 1, bVar3, !bVar3, iVar1, false, 0.5f, 1f, 752097756, false, 0f, false);
		ENTITY::_0x18FF3110CF47115D(uParam1->f_291[iVar0], 2, 0);
		ENTITY::_0x18FF3110CF47115D(uParam1->f_291[iVar0], 3, 0);
		ENTITY::_0x18FF3110CF47115D(uParam1->f_291[iVar0], 14, 0);
		ENTITY::_0x18FF3110CF47115D(uParam1->f_291[iVar0], 17, 0);
		ENTITY::_0x18FF3110CF47115D(uParam1->f_291[iVar0], 7, 0);
		ENTITY::_0x18FF3110CF47115D(uParam1->f_291[iVar0], 11, 0);
		PED::SET_PED_CONFIG_FLAG(uParam1->f_291[iVar0], 307, true);
		PED::SET_PED_FLEE_ATTRIBUTES(uParam1->f_291[iVar0], 512, true);
		PED::SET_PED_FLEE_ATTRIBUTES(uParam1->f_291[iVar0], 0, true);
		PED::SET_PED_FLEE_ATTRIBUTES(uParam1->f_291[iVar0], 2097152, true);
		PED::SET_PED_FLEE_ATTRIBUTES(uParam1->f_291[iVar0], 4194304, true);
		func_638(uParam1->f_291[iVar0], joaat("REL_PLAYER_DISLIKE"), &(uParam1->f_108), 0);
		TASK::TASK_GUARD_CURRENT_POSITION(uParam1->f_291[iVar0], 10f, 30f, true);
		iVar0++;
	}
	__LIB_1__::func_683(&(uParam1->f_190), 1048576);
	return 1;
}

bool func_761(var uParam0)
{
	if (__LIB_0__::func_27(Local_14.f_190, 262144))
	{
		if (ANIMSCENE::_0x005E6F28DD7ED58D(uParam0->f_102[2], func_606(0)))
		{
			PED::SET_PED_ACCURACY(Local_14.f_291[0], 20);
			PED::SET_PED_ACCURACY(Local_14.f_291[1], 20);
			PED::FORCE_PED_MOTION_STATE(Global_35, joaat("MOTIONSTATE_CROUCH_IDLE"), false, 0, false);
			TASK::TASK_SET_CROUCH_MOVEMENT(Global_35, true, 0, false);
			return true;
		}
	}
	else if (!__LIB_14__::func_9(uParam0->f_291[0]) && !__LIB_14__::func_9(uParam0->f_291[1]))
	{
		return true;
	}
	return false;
}

void func_763(int iParam0)
{
	if (!__LIB_0__::func_27(iParam0->f_190, 512))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0->f_291[0], 297, false);
		PED::SET_PED_CONFIG_FLAG(iParam0->f_291[0], 130, false);
		PED::SET_PED_CONFIG_FLAG(iParam0->f_291[0], 315, false);
		MISC::_0xE98D55C5983F2509(iParam0->f_291[0]);
		MISC::_0xFC6ECB9170145ECE();
		__LIB_1__::func_683(&(iParam0->f_190), 512);
	}
}

bool func_764(var uParam0, var uParam1)
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_319[0]) && !__LIB_0__::func_27(Local_14.f_190, 262144))
	{
		func_1228(uParam1);
		if (uParam1->f_98 == 64)
		{
			if (!__LIB_0__::func_48(Global_35, uParam1->f_319[0], 200f, 1))
			{
				if (__LIB_11__::func_29(uParam1->f_319[0]))
				{
					__LIB_1__::func_683(&(uParam1->f_193), 8);
				}
				else
				{
					__LIB_1__::func_683(&(uParam1->f_193), 128);
				}
				return true;
			}
			else if (__LIB_0__::func_48(Global_35, uParam1->f_319[0], 150f, 1))
			{
				func_315(uParam0, uParam1, 32);
				__LIB_12__::func_883(uParam0, func_648(Local_14.f_98), 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			}
		}
		if (uParam1->f_98 != 64 && !__LIB_0__::func_48(Global_35, uParam1->f_319[0], 180f, 1))
		{
			func_315(uParam0, uParam1, 64);
		}
		if (ENTITY::IS_ENTITY_DEAD(uParam1->f_319[0]))
		{
			__LIB_1__::func_683(&(uParam1->f_193), 4);
		}
		if (__LIB_1__::func_205(Global_35, uParam1->f_326[0], 1, 0))
		{
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if ((ENTITY::DOES_ENTITY_EXIST(uParam1->f_291[iVar0]) && !ENTITY::IS_ENTITY_DEAD(uParam1->f_291[iVar0])) && __LIB_1__::func_205(uParam1->f_291[iVar0], uParam1->f_326[0], 1, 0))
				{
					__LIB_1__::func_683(&(uParam1->f_193), 512);
				}
				iVar0++;
			}
		}
	}
	return false;
}

bool func_765(var uParam0)
{
	bool bVar0;
	int iVar1;
	switch (uParam0->f_87)
	{
		case 0:
			if ((VOLUME::_DOES_VOLUME_EXIST(uParam0->f_326[4]) && __LIB_0__::func_393(Global_35, uParam0->f_326[4], 0, 1)) && TASK::_0x9420FB11B8D77948(Global_35) == -1)
			{
				if (!__LIB_0__::func_102())
				{
					if (((!PED::IS_PED_RUNNING_RAGDOLL_TASK(Global_35) && !__LIB_0__::func_491(Global_35, 242628503)) && !PED::IS_PED_CLIMBING(Global_35)) && !PED::IS_PED_FALLING(Global_35))
					{
						bVar0 = __LIB_0__::func_139(uParam0->f_204);
						if (!bVar0)
						{
							uParam0->f_204 = __LIB_3__::func_905("RMNR1_UC_SRCW", joaat("INPUT_CONTEXT_Y"), uParam0->f_326[4], 3, 1, 1, 4, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
							uParam0->f_194 = joaat("RMNR1_UC_SRCW");
							bVar0 = __LIB_0__::func_139(uParam0->f_204);
						}
						if (bVar0)
						{
							iVar1 = __LIB_0__::func_17(uParam0->f_204);
							if (HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar1 /*18*/].f_3))
							{
								HUD::_UIPROMPT_SET_GROUP(Global_1945938[iVar1 /*18*/].f_3, uParam0->f_194, 0);
								HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Local_14.f_154[6], 100f, 3, 1, uParam0->f_194, "RMNR1_MDC_CRT", 0);
							}
						}
						if (__LIB_0__::func_567(uParam0->f_204, 1))
						{
							__LIB_1__::func_748(&(uParam0->f_204), 1, 1);
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
							HUD::_DISPLAY_HUD_COMPONENT(724769646);
							func_1233(uParam0, &(uParam0->f_87), 1);
						}
					}
					else if (__LIB_0__::func_139(uParam0->f_204))
					{
						__LIB_1__::func_748(&(uParam0->f_204), 1, 1);
					}
				}
				else if (__LIB_0__::func_139(uParam0->f_204))
				{
					__LIB_1__::func_748(&(uParam0->f_204), 1, 1);
				}
			}
			else if (__LIB_0__::func_139(uParam0->f_204))
			{
				__LIB_1__::func_748(&(uParam0->f_204), 1, 1);
			}
			break;
		case 1:
			if (!__LIB_0__::func_163(Global_35, 716706914))
			{
				if (__LIB_14__::func_10(Global_35, 0) && __LIB_14__::func_10(Global_35, 1))
				{
					func_1233(uParam0, &(uParam0->f_87), 2);
				}
				else
				{
					if (__LIB_9__::func_178(&(uParam0->f_261)) > 4f)
					{
						WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
					}
					else
					{
						WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
					}
					TASK::TASK_SWAP_WEAPON(Global_35, 0, 0, 0, 0);
				}
			}
			break;
		case 2:
			if (ANIMSCENE::_0x337F1CC8EE895601(uParam0->f_102[2], func_606(0)))
			{
				func_1233(uParam0, &(uParam0->f_87), 3);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				return true;
			}
			else if (!__LIB_0__::func_163(Global_35, 1369124074))
			{
				TASK::TASK_ENTER_ANIM_SCENE(Global_35, uParam0->f_102[2], func_606(0), func_653(1), 1f, 0, 0, 20000, -1082130432 /* Float: -1f */);
			}
			break;
		case 3:
			return true;
	}
	return false;
}

void func_766(var uParam0)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_102[2]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_102[2], false))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_319[0]))
	{
		return;
	}
	func_1235(uParam0);
	if (PED::IS_PED_DEAD_OR_DYING(Local_14.f_291[0], true) && PED::IS_PED_DEAD_OR_DYING(Local_14.f_291[1], true))
	{
		__LIB_10__::func_942(uParam0->f_102[2], func_653(0), "IG1");
	}
	else if (uParam0->f_96 == 0)
	{
		__LIB_1__::func_683(&(uParam0->f_190), 16);
		__LIB_10__::func_942(uParam0->f_102[2], func_653(5), "IG1");
	}
	else
	{
		__LIB_10__::func_942(uParam0->f_102[2], func_653(3), "IG1");
	}
	ANIMSCENE::START_ANIM_SCENE(uParam0->f_102[2]);
}

void func_767(var uParam0, float fParam1, float fParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_278[0]) || !ENTITY::DOES_ENTITY_EXIST(uParam0->f_278[1]))
	{
		return;
	}
	if (__LIB_0__::func_27(uParam0->f_189, 4194304))
	{
		return;
	}
	if (__LIB_0__::func_94(uParam0->f_278[0], func_317(4), 1) > 1f)
	{
		if (!PED::_0x5102307CE88798EB(uParam0->f_278[0]))
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(uParam0->f_278[0]);
		}
		if (!PED::_0x5102307CE88798EB(uParam0->f_278[1]))
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(uParam0->f_278[1]);
		}
		if (!__LIB_0__::func_899(&(uParam0->f_255)))
		{
			__LIB_4__::func_89(&(uParam0->f_255), 0);
		}
		if (!PED::IS_TRACKED_PED_VISIBLE(uParam0->f_278[0]) && !PED::IS_TRACKED_PED_VISIBLE(uParam0->f_278[1]))
		{
			if (__LIB_9__::func_178(&(uParam0->f_255)) >= fParam1 || !__LIB_0__::func_48(uParam0->f_278[0], Global_35, fParam2, 1))
			{
				__LIB_1__::func_561(&(uParam0->f_255));
				__LIB_6__::func_891(uParam0->f_278[0]);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uParam0->f_278[0], func_317(4), func_323(4), true, false, true);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uParam0->f_278[1], func_207(1), func_208(1), true, false, true);
				ENTITY::_0x9587913B9E772D29(uParam0->f_278[0], 0);
				ENTITY::_0x9587913B9E772D29(uParam0->f_278[1], 0);
				if (PED::_0x5102307CE88798EB(uParam0->f_278[0]))
				{
					PED::_0x3088634CF8C819CF(uParam0->f_278[0]);
				}
				if (PED::_0x5102307CE88798EB(uParam0->f_278[1]))
				{
					PED::_0x3088634CF8C819CF(uParam0->f_278[1]);
				}
				__LIB_1__::func_683(&(uParam0->f_189), 4194304);
			}
		}
		else
		{
			__LIB_2__::func_259(&(uParam0->f_255));
		}
		if (!__LIB_0__::func_71(uParam0->f_278[0]))
		{
			if (!__LIB_0__::func_491(uParam0->f_278[0], 1868526510))
			{
				__LIB_1__::func_562(uParam0->f_278[0], uParam0->f_278[1], 1, 1065353216 /* Float: 1f */, 20000);
			}
		}
		else if (!__LIB_0__::func_491(uParam0->f_278[0], 658540077))
		{
			func_745(uParam0->f_278[0], func_196(1), 0);
		}
	}
}

void func_768(var uParam0, var uParam1)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	if (!__LIB_0__::func_899(&(uParam1->f_237)))
	{
		__LIB_4__::func_89(&(uParam1->f_234), 0);
		__LIB_4__::func_89(&(uParam1->f_237), 0);
		func_1237(uParam1, 0);
	}
	fVar0 = __LIB_9__::func_178(&(uParam1->f_237));
	bVar1 = false;
	iVar2 = 0;
	uParam1->f_152 = func_1238(uParam1->f_291[0], uParam0, uParam1);
	uParam1->f_153 = func_1238(uParam1->f_291[1], uParam0, uParam1);
	if (func_1239(uParam1))
	{
		iVar2 = 4;
	}
	else if ((__LIB_2__::func_123(uParam1->f_291[0], Global_35, 120f) && __LIB_2__::func_343(uParam1->f_291[0], uParam1->f_319[0], 0)) && __LIB_0__::func_48(Global_35, uParam1->f_319[0], 8f, 1))
	{
		iVar2 = 3;
	}
	else if (func_1242(uParam1))
	{
		iVar2 = 2;
	}
	else if (__LIB_0__::func_393(Global_35, uParam1->f_326[12], 0, 1) || ((uParam1->f_152 == 131072 || uParam1->f_153 == 131072) && PED::IS_PED_FACING_PED(uParam1->f_291[1], Global_35, 150f)))
	{
		iVar2 = 1;
	}
	if (iVar2 != 3)
	{
		__LIB_1__::func_561(&(uParam1->f_243));
	}
	else if (!__LIB_0__::func_899(&(uParam1->f_243)))
	{
		__LIB_2__::func_259(&(uParam1->f_243));
	}
	switch (iVar2)
	{
		case 4:
			func_1237(uParam1, 4);
			if (!__LIB_0__::func_27(uParam1->f_190, 32768))
			{
				if ((!__LIB_14__::func_9(uParam1->f_291[0]) || !__LIB_14__::func_9(uParam1->f_291[1])) || !__LIB_11__::func_29(uParam1->f_319[0]))
				{
					__LIB_1__::func_683(&(uParam1->f_190), 32768);
				}
			}
			if (__LIB_1__::func_205(Global_35, uParam1->f_326[6], 1, 0) || __LIB_2__::func_343(Global_35, uParam1->f_319[0], 1))
			{
				if (!__LIB_0__::func_27(uParam1->f_190, 65536))
				{
					if (__LIB_14__::func_9(uParam1->f_291[0]) && PED::GET_PED_COMBAT_MOVEMENT(uParam1->f_291[0]) != 2)
					{
						PED::SET_PED_COMBAT_MOVEMENT(uParam1->f_291[0], 2);
					}
					if (__LIB_14__::func_9(uParam1->f_291[1]) && PED::GET_PED_COMBAT_MOVEMENT(uParam1->f_291[1]) != 2)
					{
						PED::SET_PED_COMBAT_MOVEMENT(uParam1->f_291[1], 2);
					}
					__LIB_1__::func_683(&(uParam1->f_190), 65536);
				}
			}
			else if (__LIB_0__::func_27(uParam1->f_190, 65536))
			{
				uParam1->f_323++;
				__LIB_1__::func_681(&(uParam1->f_190), 65536);
			}
			break;
		case 3:
			if ((((((fVar0 > 10f && uParam1->f_96 == 3) || uParam1->f_322 > 2) || uParam1->f_96 == 4) || uParam1->f_152 == 8) || uParam1->f_153 == 8) || __LIB_0__::func_27(uParam1->f_190, 8))
			{
				func_1237(uParam1, 4);
			}
			else if (uParam1->f_96 != 3 && __LIB_1__::func_583(&(uParam1->f_243)) > 3f)
			{
				func_1237(uParam1, 3);
			}
			else if (uParam1->f_96 <= 2)
			{
				func_1237(uParam1, 2);
			}
			break;
		case 2:
			if (uParam1->f_96 <= 2 || (__LIB_9__::func_178(&(uParam1->f_234)) > 10f && __LIB_0__::func_665(Global_35, uParam1->f_319[0], 1, 1) > 23f))
			{
				func_1237(uParam1, 2);
			}
			break;
		case 1:
			if ((uParam1->f_96 > 2 && __LIB_9__::func_178(&(uParam1->f_234)) > 10f) && __LIB_0__::func_665(Global_35, uParam1->f_319[0], 1, 1) > 23f)
			{
				func_1237(uParam1, 2);
			}
			else if ((__LIB_0__::func_27(uParam1->f_190, 8) && uParam1->f_96 <= 2) && __LIB_0__::func_665(Global_35, uParam1->f_319[0], 1, 1) < 18f)
			{
				func_1237(uParam1, 2);
			}
			else if (uParam1->f_96 <= 1)
			{
				func_1237(uParam1, 1);
			}
			break;
		case 0:
			if (!__LIB_0__::func_899(&(uParam1->f_249)))
			{
				__LIB_4__::func_89(&(uParam1->f_249), 0);
			}
			else if (__LIB_5__::func_463())
			{
				__LIB_2__::func_259(&(uParam1->f_249));
			}
			bVar1 = true;
			fVar0 = __LIB_9__::func_178(&(uParam1->f_249));
			switch (uParam1->f_96)
			{
				case 0:
					break;
				case 1:
					if (fVar0 > 5f)
					{
						func_1237(uParam1, 0);
						__LIB_1__::func_561(&(uParam1->f_237));
						__LIB_2__::func_259(&(uParam1->f_249));
					}
					break;
				case 2:
					if (fVar0 > 8f)
					{
						func_1237(uParam1, 0);
						__LIB_2__::func_259(&(uParam1->f_249));
					}
					break;
				case 3:
					if (fVar0 > 5f)
					{
						func_1237(uParam1, 2);
						__LIB_2__::func_259(&(uParam1->f_249));
					}
					break;
				case 4:
					if (fVar0 > 15f)
					{
						func_1237(uParam1, 2);
						__LIB_2__::func_259(&(uParam1->f_249));
					}
					break;
			}
			break;
	}
	if (__LIB_0__::func_899(&(uParam1->f_249)) && !bVar1)
	{
		__LIB_1__::func_561(&(uParam1->f_249));
	}
}

void func_769(var uParam0)
{
	PED::SET_PED_RESET_FLAG(Global_35, 276, true);
	PED::SET_PED_RESET_FLAG(Global_35, 283, true);
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_319[0]))
	{
		if (__LIB_1__::func_205(Global_35, uParam0->f_326[6], 1, 0))
		{
			PED::SET_PED_RESET_FLAG(Global_35, 129, true);
			if (!__LIB_0__::func_27(uParam0->f_190, 256))
			{
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(uParam0->f_319[0], false);
				PED::_SET_PED_CROUCH_MOVEMENT(Global_35, true, 0, false);
				PED::SET_RAGDOLL_BLOCKING_FLAGS(Global_35, 8786);
				__LIB_1__::func_683(&(uParam0->f_190), 256);
			}
		}
		else if (__LIB_0__::func_27(uParam0->f_190, 256))
		{
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(uParam0->f_319[0], true);
			PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
			PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(Global_35, 8786);
			__LIB_1__::func_681(&(uParam0->f_190), 256);
		}
	}
}

void func_770(var uParam0, var uParam1)
{
	char* sVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	if (uParam1->f_85 == 0)
	{
		return;
	}
	iVar1 = -1;
	bVar2 = false;
	switch (uParam1->f_85)
	{
		case 1:
			sVar0 = func_1091(0);
			iVar3 = 0;
			iVar4 = 1;
			break;
		case 2:
			sVar0 = func_1091(1);
			iVar3 = 0;
			iVar4 = 2;
			break;
		case 3:
			sVar0 = func_1091(19);
			iVar3 = 0;
			iVar4 = 4;
			break;
		case 4:
			sVar0 = func_1091(20);
			iVar3 = 0;
			iVar4 = 8;
			break;
		case 5:
			sVar0 = func_1091(2);
			iVar3 = 0;
			iVar4 = 16;
			break;
		case 6:
			sVar0 = func_1091(2);
			iVar3 = 0;
			iVar4 = 16;
			bVar2 = true;
			break;
		case 7:
			sVar0 = func_1091(17);
			iVar3 = 0;
			iVar4 = 256;
			bVar2 = true;
			break;
		case 8:
			sVar0 = func_1091(18);
			iVar3 = 0;
			iVar4 = 512;
			break;
	}
	if (bVar2 && __LIB_5__::func_463())
	{
		__LIB_5__::func_20(0, 0);
		return;
	}
	if (iVar1 > 0 && __LIB_9__::func_178(&(uParam1->f_219)) >= IntToFloat(iVar1))
	{
	}
	else
	{
		if (__LIB_5__::func_463())
		{
			return;
		}
		if (__LIB_6__::func_904())
		{
			return;
		}
	}
	if (__LIB_12__::func_876(uParam0, sVar0, 0))
	{
		func_782(&(uParam1->f_85), iVar3);
		__LIB_1__::func_683(&(uParam1->f_191), iVar4);
	}
}

void func_771(var uParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_319[0]))
	{
		return;
	}
	if (__LIB_0__::func_393(Global_35, uParam0->f_326[11], 0, 1))
	{
		if (!__LIB_0__::func_491(Global_35, 1404409630))
		{
			if (__LIB_0__::func_393(Global_35, uParam0->f_326[7], 0, 1))
			{
				func_774(uParam0, 1);
			}
			else
			{
				func_774(uParam0, 0);
			}
		}
	}
}

void func_772(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	struct<2> Var4;
	if (__LIB_0__::func_27(iParam1->f_190, 8) && iParam1->f_99 != 4)
	{
		func_1245(iParam1, 4);
	}
	if (PED::IS_PED_DEAD_OR_DYING(iParam1->f_291[0], true) || PED::IS_PED_DEAD_OR_DYING(iParam1->f_291[1], true))
	{
		if (__LIB_0__::func_139(iParam1->f_205[0]))
		{
			__LIB_1__::func_221(iParam1->f_205[0], 0, 1);
		}
		__LIB_4__::func_16(&(iParam1->f_205[0]));
		func_763(iParam1);
		return;
	}
	else if (!PED::IS_PED_IN_ANY_VEHICLE(iParam1->f_291[0], false) || !__LIB_0__::func_48(Global_35, iParam1->f_291[0], 18f, 1))
	{
		if (__LIB_0__::func_139(iParam1->f_205[0]))
		{
			__LIB_1__::func_221(iParam1->f_205[0], 0, 1);
		}
		__LIB_4__::func_16(&(iParam1->f_205[0]));
		return;
	}
	switch (iParam1->f_99)
	{
		case 0:
			if (!__LIB_14__::func_9(iParam1->f_291[0]))
			{
				return;
			}
			if (!MISC::_0x870708A6E147A9AD(iParam1->f_291[0], "", 15f, 0f, 0, 0, 0, 0, 0, -1))
			{
				return;
			}
			PED::SET_PED_CONFIG_FLAG(iParam1->f_291[0], 297, true);
			PED::SET_PED_CONFIG_FLAG(iParam1->f_291[0], 130, true);
			PED::SET_PED_CONFIG_FLAG(iParam1->f_291[0], 315, true);
			PED::SET_PED_CONFIG_FLAG(iParam1->f_291[0], 317, true);
			PED::SET_PED_CONFIG_FLAG(iParam1->f_291[0], 376, true);
			__LIB_12__::func_973(&(iParam1->f_291[1]), 0);
			func_1245(iParam1, 1);
			break;
		case 1:
			if (__LIB_14__::func_9(iParam1->f_291[0]))
			{
				iVar0 = __LIB_0__::func_57(iParam1->f_291[0]);
				if (ENTITY::IS_ENTITY_DEAD(iVar0))
				{
					return;
				}
				if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar1, false, false))
				{
					if (iVar0 == iVar1)
					{
						if (__LIB_0__::func_139(iParam1->f_205[0]))
						{
							__LIB_1__::func_221(iParam1->f_205[0], 1, 1);
						}
						if (!__LIB_0__::func_139(iParam1->f_205[0]))
						{
							Var2 = { func_1248(0) };
							iParam1->f_205[0] = __LIB_2__::func_403(Var2, Var2.f_1, Global_35, 1, 0, 0, 0, 0, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
							__LIB_2__::func_369(iParam1->f_205[0], iVar1, 0, 1, -1);
							__LIB_1__::func_681(&(iParam1->f_190), 512);
						}
						else if (__LIB_1__::func_514(iParam1->f_205[0], 1))
						{
							__LIB_1__::func_748(&(iParam1->f_205[0]), 1, 1);
							func_782(&(iParam1->f_85), 7);
							__LIB_9__::func_410(Global_35, 1, 0);
							__LIB_1__::func_221(iParam1->f_205[0], 0, 1);
							func_1245(iParam1, 2);
						}
					}
					else
					{
						__LIB_4__::func_16(&(iParam1->f_205[0]));
					}
				}
				else
				{
					__LIB_4__::func_16(&(iParam1->f_205[0]));
				}
				if (__LIB_4__::func_207(iParam1->f_291[0], 1090519040 /* Float: 8f */, 1103626240 /* Float: 25f */, 1097859072 /* Float: 15f */, 0) && !__LIB_0__::func_393(Global_35, iParam1->f_326[6], 0, 1))
				{
					func_782(&(iParam1->f_85), 7);
					func_1245(iParam1, 2);
				}
			}
			break;
		case 2:
			if (__LIB_0__::func_27(iParam1->f_190, 4194304))
			{
				__LIB_1__::func_683(&(iParam1->f_191), 2);
				if ((Local_14.f_322 >= 2 && iParam1->f_96 < 4) || __LIB_0__::func_393(Global_35, iParam1->f_326[6], 0, 1))
				{
					func_1237(iParam1, 4);
				}
				else if (iParam1->f_96 < 1)
				{
					func_1237(iParam1, 1);
					__LIB_1__::func_683(&(iParam1->f_191), 1);
				}
				__LIB_1__::func_221(iParam1->f_205[0], 0, 1);
				__LIB_1__::func_681(&(iParam1->f_190), 4194304);
			}
			if (__LIB_14__::func_9(iParam1->f_291[0]))
			{
				iVar0 = __LIB_0__::func_57(iParam1->f_291[0]);
				if (ENTITY::IS_ENTITY_DEAD(iVar0))
				{
					return;
				}
				if (!__LIB_8__::func_684(func_1091(17)))
				{
					if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar1, false, false))
					{
						if (iVar0 == iVar1)
						{
							if (__LIB_0__::func_139(iParam1->f_205[0]))
							{
								__LIB_1__::func_221(iParam1->f_205[0], 1, 1);
							}
							if (!__LIB_0__::func_139(iParam1->f_205[0]))
							{
								Var4 = { func_1248(0) };
								iParam1->f_205[0] = __LIB_2__::func_403(Var4, Var4.f_1, Global_35, 1, 0, 0, 0, 0, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
								__LIB_2__::func_369(iParam1->f_205[0], iVar1, 0, 1, -1);
								__LIB_1__::func_681(&(iParam1->f_190), 512);
							}
							else if (__LIB_1__::func_732(iParam1->f_205[0], 1))
							{
								__LIB_1__::func_748(&(iParam1->f_205[0]), 1, 1);
								func_782(&(iParam1->f_85), 8);
								func_1245(iParam1, 3);
							}
						}
						else
						{
							__LIB_4__::func_16(&(iParam1->f_205[0]));
						}
					}
					else
					{
						__LIB_4__::func_16(&(iParam1->f_205[0]));
					}
					if (__LIB_4__::func_207(iParam1->f_291[0], 1090519040 /* Float: 8f */, 1103626240 /* Float: 25f */, 1097859072 /* Float: 15f */, 0) && !__LIB_0__::func_393(Global_35, iParam1->f_326[6], 0, 1))
					{
						func_782(&(iParam1->f_85), 8);
						func_1245(iParam1, 3);
					}
				}
			}
			break;
		case 3:
			if (__LIB_0__::func_27(iParam1->f_191, 512))
			{
				__LIB_1__::func_683(&(iParam1->f_190), 8);
				__LIB_1__::func_683(&(iParam1->f_191), 2);
				__LIB_1__::func_683(&(iParam1->f_191), 4);
				__LIB_1__::func_683(&(iParam1->f_191), 8);
				__LIB_1__::func_683(&(iParam1->f_190), 268435456);
				func_1237(iParam1, 2);
				func_1245(iParam1, 4);
			}
			break;
		case 4:
			func_763(iParam1);
			break;
	}
}

void func_773(var uParam0)
{
	if ((((((ENTITY::DOES_ENTITY_EXIST(uParam0->f_111) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_111)) && ENTITY::DOES_ENTITY_EXIST(uParam0->f_319[0])) && VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_319[0], false, false)) && __LIB_14__::func_9(uParam0->f_291[0])) && __LIB_2__::func_343(uParam0->f_291[0], uParam0->f_319[0], 0)) && __LIB_0__::func_393(Global_35, uParam0->f_326[6], 0, 1))
	{
		if (!__LIB_0__::func_27(uParam0->f_190, 524288))
		{
			if (PED::DOES_GROUP_EXIST(uParam0->f_110))
			{
				PED::REMOVE_GROUP(uParam0->f_110);
			}
			TASK::CLEAR_PED_TASKS(uParam0->f_111, true, false);
			uParam0->f_110 = PED::CREATE_GROUP(0);
			PED::SET_GROUP_FORMATION(uParam0->f_110, 5);
			PED::ADD_CUSTOM_FORMATION_LOCATION(uParam0->f_110, 0f, -5f, 0f, 0);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_291[0], 279, true);
			PED::SET_PED_AS_GROUP_LEADER(uParam0->f_291[0], uParam0->f_110, false);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_111, 279, true);
			PED::SET_PED_AS_GROUP_MEMBER(uParam0->f_111, uParam0->f_110);
			PED::_0x0E9E95FDEDCC9D35(uParam0->f_111, 0, 0);
			__LIB_1__::func_683(&(uParam0->f_190), 524288);
		}
	}
	else if (__LIB_0__::func_27(uParam0->f_190, 524288))
	{
		func_775(uParam0);
	}
}

void func_774(var uParam0, bool bParam1)
{
	if (Local_14.f_349 != bParam1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_319[0]))
		{
			VEHICLE::_0xCBF88256E44D5D39(Local_14.f_319[0], bParam1);
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_14.f_291[0]) && PED::IS_PED_IN_ANY_VEHICLE(Local_14.f_291[0], false))
		{
			PED::SET_PED_CONFIG_FLAG(Local_14.f_291[0], 2, bParam1);
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_14.f_291[1]) && PED::IS_PED_IN_ANY_VEHICLE(Local_14.f_291[1], false))
		{
			PED::SET_PED_CONFIG_FLAG(Local_14.f_291[1], 2, bParam1);
		}
		if (bParam1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_319[0]))
			{
				AITRANSPORT::_0xB7079F4C72896756(Global_35, Local_14.f_319[0], 0, 16, 7);
			}
		}
		else
		{
			AITRANSPORT::_0x5639FBEA922788DA(Global_35);
		}
		Local_14.f_349 = bParam1;
	}
}

void func_775(var uParam0)
{
	if (__LIB_0__::func_27(uParam0->f_190, 524288))
	{
		PED::_0x87C2724A56F66020(uParam0->f_111);
		PED::REMOVE_PED_FROM_GROUP(uParam0->f_111);
		if (PED::DOES_GROUP_EXIST(uParam0->f_110))
		{
			PED::REMOVE_GROUP(uParam0->f_110);
		}
		__LIB_1__::func_681(&(uParam0->f_190), 524288);
	}
}

bool func_776(var uParam0, bool bParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (__LIB_2__::func_65(uParam0->f_291[iVar0], Global_35) || (bParam1 && PED::_0x7F9B9791D4CB71F6(uParam0->f_291[iVar0], Global_35, 0, 0) == 1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_777(var uParam0)
{
	if (__LIB_0__::func_27(uParam0->f_190, 8192) && PED::_0x268B3AEBF032A88D(uParam0->f_111))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_111, false);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_111, 168, true);
	}
}

void func_778(var uParam0, var uParam1)
{
	float fVar0;
	int iVar1;
	vector3 vVar2;
	int iVar5;
	int iVar6;
	fVar0 = __LIB_0__::func_94(uParam1->f_319[0], func_317(11), 1);
	if (!__LIB_0__::func_27(uParam1->f_190, 2097152))
	{
		if (fVar0 < (5f + 5f) && !__LIB_0__::func_27(uParam1->f_190, 536870912))
		{
			__LIB_1__::func_683(&(uParam1->f_190), 536870912);
		}
		if (!__LIB_0__::func_27(uParam1->f_190, 536870912))
		{
			func_1256(uParam0, uParam1);
			if (fVar0 < 300f && __LIB_0__::func_27(uParam1->f_189, 512))
			{
				__LIB_1__::func_681(&(uParam1->f_189), 512);
				POPULATION::_0xB56D41A694E42E86(uParam1->f_326[13], 0, 0, 0, -1, -1, 0);
			}
			else if (fVar0 < 150f)
			{
				func_1257(uParam1);
			}
			if (fVar0 < 70f && !__LIB_0__::func_27(uParam1->f_190, 16777216))
			{
				iVar1 = 0;
				while (iVar1 <= 3)
				{
					if (__LIB_0__::func_272(uParam1->f_291[iVar1], 0))
					{
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam1->f_291[iVar1], joaat("REL_PLAYER_ENEMY"));
					}
					iVar1++;
				}
				iVar1 = 0;
				iVar1 = 0;
				while (iVar1 < uParam1->f_299)
				{
					if (__LIB_0__::func_272(uParam1->f_299[iVar1], 0))
					{
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam1->f_299[iVar1], joaat("REL_PLAYER_ENEMY"));
					}
					iVar1++;
				}
				__LIB_1__::func_683(&(uParam1->f_190), 16777216);
			}
		}
		else if (VEHICLE::_GET_CURRENT_VEHICLE_DRIVER(uParam1->f_319[0]) != Global_35 && func_1258(&(uParam1->f_319[0])))
		{
			func_774(uParam1, 0);
			func_1259(uParam1);
			__LIB_1__::func_683(&(uParam1->f_190), 2097152);
		}
	}
	if (fVar0 < 70f && !__LIB_0__::func_27(uParam1->f_190, 1073741824 /* Float: 2f */))
	{
		vVar2 = { func_317(11) };
		if (__LIB_2__::func_343(Global_35, uParam1->f_319[0], 0) || __LIB_0__::func_393(Global_35, uParam1->f_326[6], 0, 1))
		{
			iVar5 = 0;
			while (iVar5 <= 3)
			{
				if ((__LIB_0__::func_272(uParam1->f_291[iVar5], 0) && !__LIB_2__::func_65(uParam1->f_291[iVar5], Global_35)) && PED::_0x7F9B9791D4CB71F6(uParam1->f_291[iVar5], Global_35, 0, 0) == 1)
				{
					TASK::TASK_COMBAT_PED(uParam1->f_291[iVar5], Global_35, 0, 0);
					__LIB_1__::func_683(&(uParam1->f_190), 1073741824 /* Float: 2f */);
				}
				iVar5++;
			}
			if (__LIB_0__::func_27(uParam1->f_190, 1073741824 /* Float: 2f */))
			{
				uParam1->f_96 = 4;
				PED::_0x4E68C7EF706DF35D(Global_35, vVar2, 50f, joaat("REL_PLAYER_ENEMY"));
			}
		}
		if (((LAW::_0x9945A3E2528A02E8(PLAYER::PLAYER_ID()) || PLAYER::HAS_PLAYER_BEEN_SPOTTED_IN_STOLEN_VEHICLE(PLAYER::PLAYER_ID())) || MISC::IS_BULLET_IN_AREA(vVar2, 65f, true)) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, vVar2, 65f))
		{
			PED::_0x4E68C7EF706DF35D(Global_35, vVar2, 50f, joaat("REL_PLAYER_ENEMY"));
			iVar6 = 0;
			while (iVar6 <= 3)
			{
				TASK::TASK_COMBAT_PED(uParam1->f_291[iVar6], Global_35, 0, 0);
				iVar6++;
			}
			uParam1->f_96 = 4;
			__LIB_1__::func_683(&(uParam1->f_190), 1073741824 /* Float: 2f */);
		}
	}
	if (!__LIB_0__::func_27(uParam1->f_190, 8) && (uParam1->f_96 == 4 || (__LIB_0__::func_27(uParam1->f_190, 2097152) && func_776(uParam1, 0))))
	{
		__LIB_1__::func_683(&(uParam1->f_190), 8);
	}
	if (PED::_0x268B3AEBF032A88D(uParam1->f_111) && (__LIB_0__::func_27(uParam1->f_190, 8192) || __LIB_0__::func_27(uParam1->f_190, 2097152)))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam1->f_111, false);
	}
	func_1260(uParam1);
}

bool func_779(var uParam0, var uParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vVar0 = { func_317(4) };
	if (uParam1->f_324 <= 0f)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_319[0]))
		{
			vVar3 = { ENTITY::GET_ENTITY_COORDS(uParam1->f_319[0], true, false) };
		}
		else
		{
			vVar3 = { Global_36 };
		}
		uParam1->f_324 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar3, vVar0, true);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_278[0]) && (PED::IS_PED_DEAD_OR_DYING(uParam1->f_278[0], true) || PED::IS_PED_FATALLY_INJURED(uParam1->f_278[0])))
	{
		__LIB_1__::func_683(&(uParam1->f_193), 2);
		return true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_278[1]) && (PED::IS_PED_DEAD_OR_DYING(uParam1->f_278[1], true) || PED::IS_PED_FATALLY_INJURED(uParam1->f_278[1])))
	{
		__LIB_1__::func_683(&(uParam1->f_193), 32);
		return true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_111) && (PED::IS_PED_DEAD_OR_DYING(uParam1->f_111, true) || PED::IS_PED_FATALLY_INJURED(uParam1->f_111)))
	{
		__LIB_1__::func_683(&(uParam1->f_193), 16);
		return true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_319[0]) && !__LIB_0__::func_27(Local_14.f_190, 262144))
	{
		func_1228(uParam1);
		if (__LIB_2__::func_343(Global_35, uParam1->f_319[0], 0))
		{
			if (!__LIB_0__::func_266(Global_35, vVar0, (uParam1->f_324 * 1.5f), 1, 1) || __LIB_7__::func_439())
			{
				__LIB_1__::func_683(&(uParam1->f_193), 256);
				return true;
			}
			else if (!__LIB_0__::func_266(Global_35, vVar0, (uParam1->f_324 * 1.1f), 1, 1) || __LIB_3__::func_107())
			{
				if (!__LIB_0__::func_270() && (!__LIB_0__::func_899(&(uParam1->f_228)) || __LIB_9__::func_178(&(uParam1->f_228)) > 18f))
				{
					__LIB_12__::func_883(uParam0, func_648(uParam1->f_98), 1, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
					__LIB_2__::func_259(&(uParam1->f_228));
				}
			}
		}
		else
		{
			if (uParam1->f_98 == 64)
			{
				if (!__LIB_0__::func_48(Global_35, uParam1->f_319[0], 150f, 1))
				{
					__LIB_1__::func_683(&(uParam1->f_193), 128);
					return true;
				}
				else if (__LIB_0__::func_48(Global_35, uParam1->f_319[0], 50f, 1))
				{
					func_315(uParam0, uParam1, 128);
					__LIB_12__::func_883(uParam0, func_648(Local_14.f_98), 0, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				}
			}
			if (uParam1->f_98 != 64 && !__LIB_0__::func_48(Global_35, uParam1->f_319[0], 100f, 1))
			{
				func_315(uParam0, uParam1, 64);
			}
		}
	}
	return false;
}

bool func_781(var uParam0, var uParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vVar0 = { func_317(4) };
	if (uParam1->f_324 <= 0f)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_319[0]))
		{
			vVar3 = { ENTITY::GET_ENTITY_COORDS(uParam1->f_319[0], true, false) };
		}
		else
		{
			vVar3 = { Global_36 };
		}
		uParam1->f_324 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar3, vVar0, true);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_278[0]) && (PED::IS_PED_DEAD_OR_DYING(uParam1->f_278[0], true) || PED::IS_PED_FATALLY_INJURED(uParam1->f_278[0])))
	{
		__LIB_1__::func_683(&(uParam1->f_193), 2);
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_278[1]) && (PED::IS_PED_DEAD_OR_DYING(uParam1->f_278[1], true) || PED::IS_PED_FATALLY_INJURED(uParam1->f_278[1])))
	{
		__LIB_1__::func_683(&(uParam1->f_193), 32);
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_111) && (PED::IS_PED_DEAD_OR_DYING(uParam1->f_111, true) || PED::IS_PED_FATALLY_INJURED(uParam1->f_111)))
	{
		__LIB_1__::func_683(&(uParam1->f_193), 16);
		return false;
	}
	if (!__LIB_0__::func_266(Global_35, vVar0, (uParam1->f_324 * 1.5f), 1, 1) || __LIB_7__::func_439())
	{
		__LIB_1__::func_683(&(uParam1->f_193), 256);
		return true;
	}
	else if (!__LIB_0__::func_266(Global_35, vVar0, (uParam1->f_324 * 1.1f), 1, 1) || __LIB_3__::func_107())
	{
		if (!__LIB_0__::func_270() && (!__LIB_0__::func_899(&(uParam1->f_228)) || __LIB_9__::func_178(&(uParam1->f_228)) > 18f))
		{
			__LIB_12__::func_883(uParam0, func_648(uParam1->f_98), 1, 7500, 0, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
			__LIB_2__::func_259(&(uParam1->f_228));
		}
	}
	return false;
}

void func_782(var uParam0, int iParam1)
{
	__LIB_2__::func_259(&(Local_14.f_219));
	*uParam0 = iParam1;
}

void func_784(var uParam0, bool bParam1)
{
	if (bParam1 == __LIB_0__::func_27(uParam0->f_189, 2048))
	{
		return;
	}
	func_305(uParam0->f_278[2], bParam1);
	func_305(uParam0->f_278[0], bParam1);
	if (bParam1)
	{
		__LIB_1__::func_683(&(uParam0->f_189), 2048);
	}
	else
	{
		__LIB_1__::func_681(&(uParam0->f_189), 2048);
	}
}

bool func_822(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
				func_822(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
		func_1312(28);
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
			func_1321(iParam0);
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
						func_822(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_822(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_822(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_822(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_822(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_822(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_822(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_1312(24);
				if (Global_1946804.f_1497.f_1[27 /*3*/] == Global_1946804.f_57[27 /*11*/])
				{
					__LIB_17__::func_327(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_OFFHAND_HOLSTER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 0);
				}
				if (__LIB_0__::func_918(&iVar9, 0))
				{
					__LIB_1__::func_708(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case joaat("UPGRADE_BANDOLIER"):
				if (__LIB_0__::func_2() == -1 && Global_1946804.f_1497.f_1[25 /*3*/] == Global_1946804.f_57[25 /*11*/])
				{
					__LIB_17__::func_327(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_BANDOLIER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_1"), 1, 1, 1, 0, 1, 0);
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
					func_822(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_822(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
			func_1360(iParam0);
		}
		if (__LIB_0__::func_192(iParam0, -1979000645))
		{
			func_1361(iParam0);
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
				func_822(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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

void func_824()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_1374();
	func_1375();
	func_1376();
	func_1377();
	func_1378();
	__LIB_1__::func_848();
	__LIB_0__::func_376();
}

void func_825(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	func_1381(iParam0, 1, 1, -142743235, 1);
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
	__LIB_17__::func_326(&(Global_1946804.f_1616), iVar2, &uVar9, 1, 0, 0, 0);
	__LIB_17__::func_326(&(Global_1946804.f_1616), 211609491, &uVar9, 1, 0, 0, 0);
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

void func_860()
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
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_1415(&uVar4, &iVar1, &iVar2, &iVar3)))
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

void func_899(int iParam0)
{
	if (!ANIMSCENE::_0x9D1ECA9337BE9FC3(iParam0->f_102[4], func_606(1)))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_102[4], func_606(1), iParam0->f_278[0], 0);
	}
	if (!ANIMSCENE::_0x9D1ECA9337BE9FC3(iParam0->f_102[4], func_606(3)))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_102[4], func_606(3), iParam0->f_278[2], 0);
	}
	if (!ANIMSCENE::_0x9D1ECA9337BE9FC3(iParam0->f_102[4], func_608(0)))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_102[4], func_608(0), iParam0->f_154[0], 0);
	}
	if (!ANIMSCENE::_0x9D1ECA9337BE9FC3(iParam0->f_102[4], func_608(1)))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_102[4], func_608(1), iParam0->f_154[1], 0);
	}
	if (!ANIMSCENE::_0x9D1ECA9337BE9FC3(iParam0->f_102[4], func_608(2)))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_102[4], func_608(2), iParam0->f_154[2], 0);
	}
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

bool func_1016(var uParam0, int iParam1)
{
	struct<12> Var0;
	if (!VOLUME::_DOES_VOLUME_EXIST(*uParam0))
	{
		Var0 = { func_1549(iParam1) };
		*uParam0 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(Var0.f_1, Var0.f_2, Var0.f_5, Var0.f_8, Var0.f_11);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(*uParam0))
	{
		return true;
	}
	return false;
}

bool func_1041(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 491.732f, 2242.091f, 247.0736f };
			return true;
		case 1:
			*uParam1 = { 488.6262f, 2206.36f, 245.8335f };
			return true;
		case 2:
			*uParam1 = { 488.7005f, 2213.863f, 246.1849f };
			return true;
		default:
			break;
	}
	return false;
}

char* func_1047(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CHUCKWAGON002X";
		default:
			break;
	}
	return "FAIL";
}

void func_1048(var uParam0)
{
	int iVar0;
	var uVar1[20];
	var uVar22[1];
	var uVar24;
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_325))
	{
		return;
	}
	uVar22[0] = uParam0->f_325;
	__LIB_4__::func_67(&uVar1, &uVar22, uParam0->f_326[0], 20);
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uVar1[iVar0]))
		{
			VEHICLE::DELETE_VEHICLE(&(uVar1[iVar0]));
		}
		iVar0++;
	}
	VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(uParam0->f_325, true);
	uParam0->f_325 = uVar24;
}

void func_1068(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4, char* sParam5)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	if (ENTITY::IS_ENTITY_DEAD(*iParam0) || !MISC::IS_BIT_SET(iParam1->f_21, 0))
	{
		return;
	}
	__LIB_3__::func_95(iParam1, *iParam0, iParam1->f_56, 0);
	bVar0 = __LIB_5__::func_439(bParam4 >= 0f, bParam4, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*iParam0, true, false)));
	__LIB_3__::func_27(iParam1, fParam3);
	func_1594(iParam0, iParam1, uParam2, bVar0);
	__LIB_12__::func_959(iParam1);
	if (MISC::IS_BIT_SET(iParam1->f_21, 20))
	{
		bVar1 = MISC::IS_STRING_NULL_OR_EMPTY(sParam5);
		__LIB_13__::func_287(iParam1, uParam2, iParam0, bVar1, sParam5, bVar0);
		if (!PED::IS_PED_ON_MOUNT(Global_35) && !PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
		{
			bVar2 = true;
			if (!MISC::IS_BIT_SET(*iParam1, 12))
			{
				bVar2 = __LIB_6__::func_789(iParam1, iParam0);
			}
			if (bVar2 && !MISC::IS_BIT_SET(*iParam1, 13))
			{
				__LIB_13__::func_461(iParam1);
			}
		}
	}
}

char* func_1091(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "RMNR1_WARN_01";
		case 1:
			return "RMNR1_WARN_02";
		case 2:
			return "RMNR1_ATTACK";
		case 3:
			return "RMNR1_ILO";
		case 4:
			return "RMNR1_M_MNR";
		case 5:
			return "RMNR1_MOUNT";
		case 6:
			return "RMNR1_M_MNR_R";
		case 7:
			return "RMNR1_M_RIDE_01";
		case 8:
			return "RMNR1_M_RIDE_A1";
		case 9:
			return "RMNR1_M_RIDE_A2";
		case 10:
			return "RMNR1_M_RIDE_P2";
		case 12:
			return "RMNR1_TRN3";
		case 11:
			return "RMNR1_M_RIDE_02";
		case 13:
			return "RMNR1_M_RIDEEND";
		case 14:
			return "RMNR1_GOODVIEW";
		case 15:
			return "RMNR1_DISMOUNT";
		case 17:
			return "RMNR1_GUN1";
		case 18:
			return "RMNR1_GUN2";
		case 19:
			return "RMNR1_WARNB_1";
		case 20:
			return "RMNR1_WARNB_2";
		case 16:
			return "RMNR1_M_RIDEE_R";
		default:
			break;
	}
	return "FAIL";
}

void func_1096(int iParam0, int iParam1)
{
	char* sVar0;
	sVar0 = func_1091(iParam1);
	if (MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_94) || !MISC::ARE_STRINGS_EQUAL(sVar0, iParam0->f_94))
	{
		iParam0->f_94 = sVar0;
	}
}

bool func_1106(var uParam0, int iParam1, vector3 vParam2, float fParam5)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		*uParam0 = VEHICLE::CREATE_VEHICLE(iParam1, vParam2, fParam5, true, true, false, false);
		if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
		{
			ENTITY::_0x9587913B9E772D29(*uParam0, 0);
		}
	}
	if (((!ENTITY::DOES_ENTITY_EXIST(*uParam0) || ENTITY::IS_ENTITY_DEAD(*uParam0)) || !VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false, false)) || __LIB_3__::func_320(*uParam0) < 2)
	{
		return false;
	}
	return true;
}

bool func_1107(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_154[6]))
	{
		return true;
	}
	iVar0 = joaat("PG_RC_MONROE1_01X");
	PROPSET::_REQUEST_PROPSET(iVar0);
	if (!PROPSET::_HAS_PROPSET_LOADED(iVar0))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_319[0]))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0->f_319[0]))
	{
		return false;
	}
	if (!PROPSET::_DOES_PROPSET_EXIST(iParam0->f_183))
	{
		if (!PROPSET::_DOES_VEHICLE_HAVE_ANY_PROPSET(iParam0->f_319[0]))
		{
			PROPSET::_0xD80FAF919A2E56EA(iParam0->f_319[0], iVar0);
		}
		else
		{
			iParam0->f_183 = PROPSET::_GET_VEHICLE_PROPSET(iParam0->f_319[0]);
		}
		return false;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	iVar5 = PROPSET::_GET_ENTITIES_FROM_PROPSET(iParam0->f_183, iVar1, 0, false, false);
	iVar6 = 0;
	while (iVar6 < iVar5)
	{
		iVar2 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar6, iVar1);
		if (MISC::_DOES_ITEM_HAVE_VALID_BASE(iVar2))
		{
			iVar3 = MISC::_GET_OBJECT_FROM_INDEXED_ITEM(iVar2);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				iVar4 = ENTITY::GET_ENTITY_MODEL(iVar3);
				ENTITY::SET_ENTITY_INVINCIBLE(iVar3, true);
				switch (iVar4)
				{
					case joaat("P_STRONGBOX01X"):
						iParam0->f_154[6] = iVar3;
						break;
				}
			}
		}
		iVar6++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar1);
	return iParam0->f_154[6] != 0;
}

int func_1109(int iParam0)
{
	switch (iParam0)
	{
		case joaat("FOG"):
		case joaat("SHOWER"):
		case joaat("SNOW"):
		case joaat("SLEET"):
		case joaat("OVERCASTDARK"):
		case joaat("BLIZZARD"):
		case joaat("RAIN"):
		case joaat("GROUNDBLIZZARD"):
			return 1;
		default:
			break;
	}
	return 0;
}

char* func_1114(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "ALLY_MONROE";
		case 1:
			return "RMNR1_B_WAGON";
		case 2:
			return "RMNR1_B_GUARD";
		case 3:
			return "RMNR1_B_GUARD";
		default:
			break;
	}
	return "";
}

void func_1141(var uParam0)
{
	int iVar0;
	if (__LIB_1__::func_750(&iVar0))
	{
		if (__LIB_0__::func_144(iVar0, 0))
		{
			if (__LIB_0__::func_357(iVar0) == -525676072)
			{
				PED::_SET_PED_COMPONENT_DISABLED(Global_35, joaat("MASKS_LARGE"), 0);
				__LIB_17__::func_327(Global_35, joaat("CLOTHING_ITEM_HAT_NONE"), 0, 1108822547, 0, 1, 0, 0, 0, 0);
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

void func_1142(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, bool bParam6)
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
		func_1650();
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

void func_1144(var uParam0)
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
			func_1658(iVar1, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_1658(iVar3, __LIB_12__::func_720(uParam0), __LIB_12__::func_721(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_1145(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if ((__LIB_0__::func_84(uParam0, 268435456) && !__LIB_0__::func_86(__LIB_12__::func_720(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { __LIB_12__::func_720(uParam0) };
			func_1658(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

void func_1220(var uParam0, int iParam1, int iParam2, int iParam3, float fParam4, float fParam5)
{
	char* sVar0;
	if ((!__LIB_0__::func_899(&(iParam1->f_258)) || iParam1->f_93 != iParam2) || __LIB_8__::func_684(func_1091(iParam3)))
	{
		if (!__LIB_0__::func_899(&(iParam1->f_258)))
		{
		}
		else if (iParam1->f_93 != iParam2)
		{
		}
		else if (__LIB_10__::func_578(func_1091(iParam3)))
		{
		}
		else if (func_1743(func_1091(iParam3)))
		{
		}
		__LIB_2__::func_259(&(iParam1->f_258));
	}
	else if (__LIB_9__::func_178(&(iParam1->f_258)) > fParam4)
	{
		sVar0 = func_1744(iParam1);
		if (__LIB_6__::func_903(sVar0) && !__LIB_10__::func_578(sVar0))
		{
			if (AUDIO::_0xF336E9F989B3518F(sVar0) == 3)
			{
				AUDIO::PAUSE_SCRIPTED_CONVERSATION(sVar0, false, true, false, true);
				__LIB_1__::func_585(&(iParam1->f_258), __LIB_0__::func_251((fParam4 - fParam5), 0f, fParam4));
			}
		}
		else if (func_631(uParam0, iParam1, iParam3, 0, 0, 1))
		{
			__LIB_1__::func_561(&(iParam1->f_258));
		}
	}
}

bool func_1221(int iParam0, int iParam1)
{
	char* sVar0;
	sVar0 = func_1744(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
	}
	else if (MISC::ARE_STRINGS_EQUAL(func_1091(iParam1), sVar0) && !__LIB_6__::func_903(sVar0))
	{
		return true;
	}
	return false;
}

void func_1223(int iParam0)
{
	if (!__LIB_0__::func_27(iParam0->f_189, 8192))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_278[0]))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_102[3], func_606(1), iParam0->f_278[0], 0);
		}
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_102[3], func_606(0), Global_35, 0);
		__LIB_1__::func_683(&(iParam0->f_189), 8192);
	}
}

void func_1224(int iParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0->f_319[0]) || !__LIB_14__::func_9(iParam0->f_291[0]))
	{
		return;
	}
	if (VEHICLE::_0x404527BC03DA0E6C(iParam0->f_319[0]))
	{
		VEHICLE::_0x7C06330BFDDA182E(iParam0->f_319[0]);
	}
	if (TASK::GET_SCRIPT_TASK_STATUS(iParam0->f_291[0], 1199744105, true) != 1)
	{
		WEAPON::SET_CURRENT_PED_WEAPON(iParam0->f_291[0], joaat("WEAPON_UNARMED"), false, 0, false, false);
		PHYSICS::_0x31160EC47E7C9549(Local_14.f_319[0], 1);
		TASK::_TASK_VEHICLE_DRIVE_TO_DESTINATION(iParam0->f_291[0], iParam0->f_319[0], 874.3515f, 816.5088f, 115.3664f, func_652(iParam0->f_321), 524423, 6, 10f, 10f, 0);
	}
}

void func_1228(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_319[0]))
	{
		if (VEHICLE::_0xDDBEA5506C848227(uParam0->f_319[0]))
		{
			__LIB_1__::func_683(&(uParam0->f_193), 4);
		}
		if (FIRE::IS_ENTITY_ON_FIRE(uParam0->f_319[0]))
		{
			__LIB_1__::func_683(&(uParam0->f_193), 4);
		}
		if (!VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(uParam0->f_319[0]) && !VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_319[0], false, false))
		{
			if (!__LIB_0__::func_899(&(uParam0->f_252)))
			{
				__LIB_4__::func_89(&(uParam0->f_252), 0);
			}
			else if (__LIB_9__::func_178(&(uParam0->f_252)) > 3f)
			{
				__LIB_1__::func_683(&(uParam0->f_193), 4);
			}
		}
		else if (__LIB_0__::func_899(&(uParam0->f_252)))
		{
			__LIB_1__::func_561(&(uParam0->f_252));
		}
	}
}

void func_1233(var uParam0, var uParam1, int iParam2)
{
	if (*uParam1 != iParam2)
	{
		*uParam1 = iParam2;
		__LIB_2__::func_259(&(uParam0->f_261));
	}
}

void func_1235(var uParam0)
{
	if (!__LIB_0__::func_27(uParam0->f_189, 4096))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_102[2], func_606(0), Global_35, 0);
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_154[6]))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_102[2], func_608(6), uParam0->f_154[6], 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_154[10]))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_102[2], func_608(10), uParam0->f_154[10], 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_154[11]))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_102[2], func_608(11), uParam0->f_154[11], 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_154[12]))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_102[2], func_608(12), uParam0->f_154[12], 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_154[7]))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_102[2], func_608(7), uParam0->f_154[7], 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_154[8]))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_102[2], func_608(8), uParam0->f_154[8], 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_154[9]))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_102[2], func_608(9), uParam0->f_154[9], 0);
		}
		__LIB_1__::func_683(&(uParam0->f_189), 4096);
	}
}

void func_1237(int iParam0, int iParam1)
{
	__LIB_2__::func_259(&(iParam0->f_234));
	if (iParam0->f_96 != iParam1)
	{
		iParam0->f_96 = iParam1;
		__LIB_2__::func_259(&(iParam0->f_237));
		__LIB_1__::func_683(&(iParam0->f_190), 2048);
		func_1750(iParam0);
	}
}

var func_1238(int iParam0, var uParam1, var uParam2)
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
	if (!__LIB_14__::func_9(iParam0))
	{
		return uVar28;
	}
	__LIB_1__::func_399(&Var0, 1);
	__LIB_1__::func_402(&Var0, 1);
	__LIB_2__::func_830(&Var0, 1);
	__LIB_2__::func_828(&Var0, 1);
	__LIB_1__::func_406(&Var0, 1);
	__LIB_2__::func_906(&Var0, 55);
	__LIB_4__::func_22(&Var0, 80f, 1);
	__LIB_1__::func_975(&Var0, 8f);
	__LIB_3__::func_407(&Var0, 18f);
	__LIB_14__::func_13(iParam0, &Var0, &uVar28, 0);
	return uVar28;
}

bool func_1239(var uParam0)
{
	if (__LIB_0__::func_27(uParam0->f_190, 32768))
	{
		return true;
	}
	else if (!__LIB_14__::func_9(uParam0->f_291[0]))
	{
		return true;
	}
	else if (!__LIB_14__::func_9(uParam0->f_291[1]))
	{
		return true;
	}
	else if (func_1757(uParam0->f_152, 0))
	{
		return true;
	}
	else if (func_1757(uParam0->f_153, 0))
	{
		return true;
	}
	else if (func_1758(uParam0->f_291[0], 1106247680 /* Float: 30f */))
	{
		return true;
	}
	else if (func_1758(uParam0->f_291[1], 1106247680 /* Float: 30f */))
	{
		return true;
	}
	else if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(uParam0->f_291[0], true, false), 70f))
	{
		return true;
	}
	else if (func_1759(uParam0))
	{
		return true;
	}
	else if (!__LIB_11__::func_29(uParam0->f_319[0]))
	{
		return true;
	}
	else if (PED::_IS_PED_LASSOED(uParam0->f_291[0]))
	{
		return true;
	}
	else if (PED::_IS_PED_LASSOED(uParam0->f_291[1]))
	{
		return true;
	}
	else if ((uParam0->f_96 >= 1 || func_1760(500, 800)) && __LIB_1__::func_205(Global_35, uParam0->f_326[6], 1, 0))
	{
		return true;
	}
	return false;
}

bool func_1242(var uParam0)
{
	bool bVar0;
	bVar0 = func_1762(uParam0);
	if ((uParam0->f_96 >= 1 && __LIB_0__::func_48(Global_35, uParam0->f_319[0], 8f, 1)) && PED::IS_PED_FACING_PED(uParam0->f_291[1], Global_35, 180f))
	{
		return true;
	}
	else if ((((uParam0->f_96 >= 1 && __LIB_0__::func_48(Global_35, uParam0->f_319[0], 2f, 1)) && PED::IS_PED_FACING_PED(uParam0->f_291[1], Global_35, 210f)) && PED::IS_PED_ON_MOUNT(Global_35)) && !__LIB_1__::func_205(Global_35, Local_14.f_326[6], 1, 0))
	{
		return true;
	}
	else if ((func_1760(500, 800) || bVar0) && __LIB_0__::func_48(Global_35, uParam0->f_319[0], 1.5f, 1))
	{
		return true;
	}
	return false;
}

void func_1245(int iParam0, int iParam1)
{
	if (iParam0->f_99 != iParam1)
	{
		iParam0->f_99 = iParam1;
		func_1750(iParam0);
		__LIB_1__::func_683(&(iParam0->f_190), 4194304);
	}
}

struct<2> func_1248(int iParam0)
{
	struct<2> Var0;
	switch (iParam0)
	{
		case 0:
			Var0 = "INTERACT_THREATEN";
			Var0.f_1 = joaat("INPUT_CONTEXT_Y");
			break;
	}
	return Var0;
}

void func_1256(var uParam0, int iParam1)
{
	if (PED::IS_PED_DEAD_OR_DYING(iParam1->f_291[0], true) && PED::IS_PED_DEAD_OR_DYING(iParam1->f_291[1], true))
	{
		return;
	}
	switch (iParam1->f_96)
	{
		case 0:
			if (__LIB_0__::func_27(iParam1->f_190, 2048))
			{
				__LIB_1__::func_681(&(iParam1->f_190), 2048);
				if (VEHICLE::_0x404527BC03DA0E6C(iParam1->f_319[0]))
				{
					VEHICLE::_0x7C06330BFDDA182E(iParam1->f_319[0]);
				}
				TASK::CLEAR_PED_TASKS(iParam1->f_291[0], true, false);
				TASK::CLEAR_PED_TASKS(iParam1->f_291[1], true, false);
				__LIB_3__::func_10(iParam1->f_291[0]);
				__LIB_3__::func_10(iParam1->f_291[1]);
				WEAPON::SET_CURRENT_PED_WEAPON(iParam1->f_291[0], joaat("WEAPON_UNARMED"), false, 0, false, false);
				PHYSICS::_0x31160EC47E7C9549(iParam1->f_319[0], 1);
			}
			if ((__LIB_3__::func_330(iParam1->f_291[0], iParam1->f_319[0], 0) && VEHICLE::_GET_CURRENT_VEHICLE_DRIVER(iParam1->f_319[0]) == iParam1->f_291[0]) && __LIB_2__::func_343(iParam1->f_291[1], iParam1->f_319[0], 0))
			{
				if (iParam1->f_321 > 1 && __LIB_9__::func_178(&(iParam1->f_237)) > 10f)
				{
					func_325(iParam1, 1);
					TASK::CLEAR_PED_TASKS(iParam1->f_291[0], true, false);
				}
				else if (iParam1->f_321 < 1)
				{
					func_325(iParam1, 1);
					TASK::CLEAR_PED_TASKS(iParam1->f_291[0], true, false);
				}
				if (!__LIB_0__::func_491(iParam1->f_291[0], 1199744105))
				{
					func_326(1, 0);
				}
			}
			else if (!__LIB_0__::func_491(iParam1->f_291[0], -1794415470))
			{
				TASK::CLEAR_PED_TASKS(iParam1->f_291[0], true, false);
				__LIB_2__::func_596(iParam1->f_291[0], iParam1->f_319[0], -1, 1.5f, -1, 1);
			}
			if (!__LIB_3__::func_330(iParam1->f_291[1], iParam1->f_319[0], 0) || (__LIB_3__::func_330(iParam1->f_291[1], iParam1->f_319[0], 0) && VEHICLE::_GET_CURRENT_VEHICLE_DRIVER(iParam1->f_319[0]) == iParam1->f_291[1]))
			{
				if (!__LIB_0__::func_491(iParam1->f_291[1], -1794415470))
				{
					TASK::CLEAR_PED_TASKS(iParam1->f_291[1], true, false);
					__LIB_2__::func_596(iParam1->f_291[1], iParam1->f_319[0], 0, 1.5f, -1, 1);
				}
			}
			break;
		case 1:
			if (__LIB_0__::func_27(iParam1->f_190, 2048))
			{
				__LIB_1__::func_681(&(iParam1->f_190), 2048);
				if (!__LIB_0__::func_27(iParam1->f_190, 262144))
				{
					func_315(uParam0, iParam1, 32);
				}
				if (VEHICLE::_0x404527BC03DA0E6C(iParam1->f_319[0]))
				{
					VEHICLE::_0x7C06330BFDDA182E(iParam1->f_319[0]);
				}
				WEAPON::SET_CURRENT_PED_WEAPON(iParam1->f_291[0], joaat("WEAPON_UNARMED"), false, 0, false, false);
				PHYSICS::_0x31160EC47E7C9549(Local_14.f_319[0], 1);
				TASK::CLEAR_PED_TASKS(iParam1->f_291[0], true, false);
				TASK::CLEAR_PED_TASKS(iParam1->f_291[1], true, false);
				TASK::TASK_LOOK_AT_ENTITY(Local_14.f_291[1], Global_35, -1, 1024, 51, 1);
				__LIB_1__::func_561(&(iParam1->f_240));
			}
			if (!__LIB_0__::func_27(iParam1->f_191, 1))
			{
				func_782(&(Local_14.f_85), 1);
			}
			if ((__LIB_3__::func_330(iParam1->f_291[0], iParam1->f_319[0], 0) && VEHICLE::_GET_CURRENT_VEHICLE_DRIVER(iParam1->f_319[0]) == iParam1->f_291[0]) && __LIB_2__::func_343(iParam1->f_291[1], iParam1->f_319[0], 0))
			{
				if (iParam1->f_321 < 2 && !PED::IS_PED_FACING_PED(iParam1->f_291[0], Global_35, 200f))
				{
					func_325(iParam1, 2);
					TASK::CLEAR_PED_TASKS(iParam1->f_291[0], true, false);
				}
				if (!__LIB_0__::func_491(iParam1->f_291[0], 1199744105))
				{
					func_326(1, 0);
				}
			}
			else if (!__LIB_0__::func_491(iParam1->f_291[0], -1794415470))
			{
				TASK::CLEAR_PED_TASKS(iParam1->f_291[0], true, false);
				__LIB_2__::func_596(iParam1->f_291[0], iParam1->f_319[0], -1, 2f, -1, 1);
			}
			if (!__LIB_3__::func_330(iParam1->f_291[1], iParam1->f_319[0], 0) || (__LIB_3__::func_330(iParam1->f_291[1], iParam1->f_319[0], 0) && VEHICLE::_GET_CURRENT_VEHICLE_DRIVER(iParam1->f_319[0]) == iParam1->f_291[1]))
			{
				if (!__LIB_0__::func_491(iParam1->f_291[1], -1794415470))
				{
					TASK::CLEAR_PED_TASKS(iParam1->f_291[1], true, false);
					__LIB_2__::func_596(iParam1->f_291[1], iParam1->f_319[0], 0, 2f, -1, 1);
					TASK::TASK_LOOK_AT_ENTITY(Local_14.f_291[1], Global_35, -1, 1024, 51, 1);
				}
			}
			if (__LIB_1__::func_348(Global_35, Local_14.f_291[0]) < 18f)
			{
				if (!__LIB_0__::func_899(&(iParam1->f_240)))
				{
					__LIB_2__::func_259(&(iParam1->f_240));
				}
				else if (__LIB_5__::func_463())
				{
					__LIB_2__::func_259(&(iParam1->f_240));
				}
				else if (__LIB_0__::func_901(&(iParam1->f_240)))
				{
					__LIB_9__::func_773(&(iParam1->f_240));
				}
				if ((__LIB_9__::func_178(&(iParam1->f_240)) > 6f || (__LIB_11__::func_3() && __LIB_9__::func_178(&(iParam1->f_240)) > 3f)) || (__LIB_0__::func_27(iParam1->f_190, 134217728) && !__LIB_5__::func_463()))
				{
					if (!__LIB_0__::func_27(iParam1->f_191, 2) && !__LIB_0__::func_27(iParam1->f_191, 8))
					{
						func_782(&(iParam1->f_85), 2);
						if (__LIB_0__::func_27(iParam1->f_191, 2))
						{
							__LIB_1__::func_681(&(iParam1->f_190), 134217728);
							__LIB_2__::func_259(&(iParam1->f_240));
						}
					}
					else if (!__LIB_0__::func_27(iParam1->f_191, 4))
					{
						if (iParam1->f_85 == 0)
						{
							func_782(&(iParam1->f_85), 3);
							if (__LIB_0__::func_27(iParam1->f_191, 4))
							{
								__LIB_1__::func_681(&(iParam1->f_190), 134217728);
								__LIB_2__::func_259(&(iParam1->f_240));
							}
						}
						if (!__LIB_0__::func_491(iParam1->f_291[1], 1630799643) && !__LIB_0__::func_491(iParam1->f_291[1], 242628503))
						{
							TASK::TASK_AIM_GUN_AT_ENTITY(iParam1->f_291[1], Global_35, -1, false, 1);
						}
					}
					else if (__LIB_9__::func_178(&(iParam1->f_240)) > 10f || (__LIB_11__::func_3() && __LIB_9__::func_178(&(iParam1->f_240)) > 3f))
					{
						func_1237(iParam1, 2);
						__LIB_1__::func_681(&(iParam1->f_190), 134217728);
						__LIB_1__::func_561(&(iParam1->f_240));
					}
				}
			}
			else if (__LIB_0__::func_899(&(iParam1->f_240)))
			{
				__LIB_9__::func_774(&(iParam1->f_240));
			}
			break;
		case 2:
			if (__LIB_0__::func_27(iParam1->f_190, 2048))
			{
				__LIB_1__::func_681(&(iParam1->f_190), 2048);
				if (VEHICLE::_0x404527BC03DA0E6C(iParam1->f_319[0]))
				{
					VEHICLE::_0x7C06330BFDDA182E(iParam1->f_319[0]);
				}
				TASK::CLEAR_PED_TASKS(iParam1->f_291[0], true, false);
				TASK::CLEAR_PED_TASKS(iParam1->f_291[1], true, false);
				TASK::TASK_LOOK_AT_ENTITY(Local_14.f_291[1], Global_35, -1, 1024, 51, 1);
				WEAPON::SET_CURRENT_PED_WEAPON(iParam1->f_291[0], joaat("WEAPON_UNARMED"), false, 0, false, false);
				PHYSICS::_0x31160EC47E7C9549(Local_14.f_319[0], 1);
				PED::_0x8ACC0506743A8A5C(iParam1->f_291[0], joaat("SCRIPT_PRECOMBAT"), 1, -1082130432 /* Float: -1f */);
				PED::_0x8ACC0506743A8A5C(iParam1->f_291[1], joaat("SCRIPT_PRECOMBAT"), 1, -1082130432 /* Float: -1f */);
				PED::SET_PED_COMBAT_ATTRIBUTES(iParam1->f_291[1], 30, false);
				if (__LIB_0__::func_27(iParam1->f_191, 8))
				{
					iParam1->f_310[2] = func_647(iParam1, 2, joaat("BLIP_STYLE_ENEMY"), 0, -546708623, 0, 0);
					iParam1->f_310[2] = func_647(iParam1, 3, joaat("BLIP_STYLE_ENEMY"), 0, -546708623, 0, 0);
				}
				__LIB_1__::func_561(&(iParam1->f_240));
				func_325(iParam1, 2);
			}
			if (__LIB_3__::func_330(iParam1->f_291[0], iParam1->f_319[0], 0) && VEHICLE::_GET_CURRENT_VEHICLE_DRIVER(iParam1->f_319[0]) == iParam1->f_291[0])
			{
				if (__LIB_2__::func_343(iParam1->f_291[1], iParam1->f_319[0], 0) && !__LIB_0__::func_491(iParam1->f_291[0], 1199744105))
				{
					func_326(1, __LIB_0__::func_27(iParam1->f_190, 8));
				}
			}
			else if (!__LIB_0__::func_491(iParam1->f_291[0], -1794415470))
			{
				TASK::CLEAR_PED_TASKS(iParam1->f_291[0], true, false);
				__LIB_2__::func_596(iParam1->f_291[0], iParam1->f_319[0], -1, 2f, -1, 1);
			}
			if (!__LIB_0__::func_27(iParam1->f_191, 8) && !__LIB_0__::func_27(iParam1->f_191, 8))
			{
				if (iParam1->f_85 == 0)
				{
					func_782(&(Local_14.f_85), 4);
					__LIB_2__::func_259(&(iParam1->f_240));
				}
				if (!__LIB_0__::func_491(iParam1->f_291[1], 1630799643))
				{
					TASK::CLEAR_PED_TASKS(iParam1->f_291[1], true, false);
					__LIB_3__::func_534(iParam1->f_291[1], Global_35, -1, 1, 0, 1);
				}
			}
			else if (!__LIB_3__::func_330(iParam1->f_291[1], iParam1->f_319[0], 0) || (__LIB_3__::func_330(iParam1->f_291[1], iParam1->f_319[0], 0) && VEHICLE::_GET_CURRENT_VEHICLE_DRIVER(iParam1->f_319[0]) == iParam1->f_291[1]))
			{
				if (!__LIB_0__::func_491(iParam1->f_291[1], 242628503))
				{
					TASK::CLEAR_SEQUENCE_TASK(&(iParam1->f_317));
					TASK::OPEN_SEQUENCE_TASK(&(iParam1->f_317));
					TASK::CLEAR_PED_TASKS(0, true, false);
					TASK::TASK_ENTER_VEHICLE(0, iParam1->f_319[0], -1, 0, 2f, 1, 0);
					TASK::TASK_AIM_AT_ENTITY(0, Global_35, -1, 0, 0);
					__LIB_1__::func_474(iParam1->f_291[1], &(iParam1->f_317), 0.3f, 0.8f, 1, 1);
				}
			}
			else
			{
				if (__LIB_1__::func_348(Global_35, Local_14.f_291[0]) < 18f || (__LIB_0__::func_27(iParam1->f_190, 8) && __LIB_1__::func_348(Global_35, Local_14.f_291[0]) < 40f))
				{
					if (!__LIB_0__::func_899(&(iParam1->f_240)))
					{
						__LIB_2__::func_259(&(iParam1->f_240));
					}
					else if (__LIB_0__::func_901(&(iParam1->f_240)))
					{
						__LIB_9__::func_773(&(iParam1->f_240));
					}
					else if (__LIB_5__::func_463())
					{
						__LIB_2__::func_259(&(iParam1->f_240));
					}
					if ((!__LIB_0__::func_27(iParam1->f_191, 16) && iParam1->f_85 == 0) && ((__LIB_9__::func_178(&(iParam1->f_240)) > 6f || (__LIB_11__::func_3() && __LIB_9__::func_178(&(iParam1->f_240)) > 3f)) || __LIB_0__::func_27(iParam1->f_190, 268435456)))
					{
						if (__LIB_0__::func_27(iParam1->f_190, 268435456))
						{
							__LIB_1__::func_681(&(iParam1->f_190), 268435456);
						}
						func_782(&(Local_14.f_85), 5);
						iParam1->f_310[2] = func_647(iParam1, 2, joaat("BLIP_STYLE_ENEMY"), 0, -546708623, 0, 0);
						iParam1->f_310[2] = func_647(iParam1, 3, joaat("BLIP_STYLE_ENEMY"), 0, -546708623, 0, 0);
						__LIB_1__::func_683(&(iParam1->f_190), 8);
					}
					if ((((__LIB_0__::func_27(iParam1->f_191, 16) && !__LIB_8__::func_684(func_1091(2))) && __LIB_14__::func_11(iParam1->f_291[1], iParam1->f_319[0])) && __LIB_3__::func_640(iParam1->f_291[1], iParam1->f_319[0]) == 0) && !__LIB_0__::func_491(iParam1->f_291[1], 167901368))
					{
						TASK::CLEAR_PED_TASKS(iParam1->f_291[1], true, false);
						TASK::TASK_SHOOT_AT_ENTITY(iParam1->f_291[1], Global_35, -1, joaat("FIRING_PATTERN_BURST_FIRE"), 0);
						__LIB_1__::func_683(&(iParam1->f_190), 8);
						__LIB_1__::func_561(&(iParam1->f_240));
					}
				}
				else
				{
					__LIB_9__::func_774(&(iParam1->f_240));
				}
				if (!__LIB_0__::func_491(iParam1->f_291[1], -1073489615) && !__LIB_0__::func_491(iParam1->f_291[1], 167901368))
				{
					TASK::CLEAR_PED_TASKS(iParam1->f_291[1], true, false);
					TASK::TASK_AIM_AT_ENTITY(iParam1->f_291[1], Global_35, -1, 0, 0);
				}
			}
			break;
		case 3:
			if (__LIB_0__::func_27(iParam1->f_190, 2048))
			{
				__LIB_1__::func_681(&(iParam1->f_190), 2048);
				__LIB_1__::func_683(&(iParam1->f_190), 131072);
				if (!__LIB_0__::func_27(iParam1->f_190, 8))
				{
					func_782(&(Local_14.f_85), 4);
				}
				PED::_0x8ACC0506743A8A5C(iParam1->f_291[0], joaat("SCRIPT_PRECOMBAT"), 1, -1082130432 /* Float: -1f */);
				PED::_0x8ACC0506743A8A5C(iParam1->f_291[1], joaat("SCRIPT_PRECOMBAT"), 1, -1082130432 /* Float: -1f */);
				PED::SET_PED_COMBAT_ATTRIBUTES(iParam1->f_291[1], 30, false);
				PED::_SET_PED_BLACKBOARD_FLOAT(iParam1->f_291[0], "Cautious", 0.6f, -1);
				PED::_SET_PED_BLACKBOARD_FLOAT(iParam1->f_291[1], "Cautious", 0.6f, -1);
				func_325(iParam1, 2);
			}
			if (__LIB_0__::func_27(iParam1->f_190, 131072))
			{
				if (!func_1258(&(iParam1->f_319[0])))
				{
					if (!__LIB_0__::func_491(iParam1->f_291[1], 538064912) && !__LIB_0__::func_491(iParam1->f_291[1], 1630799643))
					{
						TASK::CLEAR_PED_TASKS(iParam1->f_291[1], true, false);
						__LIB_3__::func_534(iParam1->f_291[1], Global_35, -1, 1, 0, 1);
					}
					return;
				}
				else
				{
					__LIB_1__::func_681(&(iParam1->f_190), 131072);
					__LIB_2__::func_259(&(iParam1->f_246));
					PHYSICS::_0xEAF529446488EB18(Local_14.f_319[0]);
					WEAPON::SET_CURRENT_PED_WEAPON(iParam1->f_291[0], joaat("WEAPON_REPEATER_CARBINE"), true, 0, false, false);
					TASK::CLEAR_SEQUENCE_TASK(&(iParam1->f_317));
					TASK::CLEAR_PED_TASKS(iParam1->f_291[0], true, false);
					TASK::OPEN_SEQUENCE_TASK(&(iParam1->f_317));
					TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 268435456);
					TASK::TASK_GOTO_ENTITY_AIMING(0, Global_35, 4f, 8f);
					__LIB_1__::func_474(iParam1->f_291[0], &(iParam1->f_317), 0f, 0.4f, 1, 1);
					WEAPON::SET_CURRENT_PED_WEAPON(iParam1->f_291[1], joaat("WEAPON_REVOLVER_CATTLEMAN"), true, 0, false, false);
					TASK::CLEAR_SEQUENCE_TASK(&(iParam1->f_317));
					TASK::CLEAR_PED_TASKS(iParam1->f_291[1], true, false);
					TASK::OPEN_SEQUENCE_TASK(&(iParam1->f_317));
					TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 268435456);
					TASK::TASK_GOTO_ENTITY_AIMING(0, Global_35, 4f, 8f);
					__LIB_1__::func_474(iParam1->f_291[1], &(iParam1->f_317), 0.5f, 0.9f, 1, 1);
				}
			}
			break;
		case 4:
			if (__LIB_0__::func_27(iParam1->f_190, 2048))
			{
				__LIB_1__::func_681(&(iParam1->f_190), 2048);
				if (__LIB_0__::func_48(Global_35, iParam1->f_319[0], 18f, 1))
				{
					__LIB_1__::func_683(&(iParam1->f_190), 131072);
				}
				iParam1->f_310[2] = func_647(iParam1, 2, joaat("BLIP_STYLE_ENEMY"), 0, -546708623, 0, 0);
				iParam1->f_310[2] = func_647(iParam1, 3, joaat("BLIP_STYLE_ENEMY"), 0, -546708623, 0, 0);
				PED::_0x8ACC0506743A8A5C(iParam1->f_291[0], joaat("SCRIPT_MIDCOMBAT"), 1, -1082130432 /* Float: -1f */);
				PED::_0x8ACC0506743A8A5C(iParam1->f_291[1], joaat("SCRIPT_MIDCOMBAT"), 1, -1082130432 /* Float: -1f */);
				PED::SET_PED_COMBAT_ATTRIBUTES(iParam1->f_291[1], 30, true);
				if (!__LIB_0__::func_27(iParam1->f_190, 8))
				{
					__LIB_1__::func_683(&(iParam1->f_190), 8);
				}
				func_325(iParam1, 2);
			}
			if ((__LIB_14__::func_9(iParam1->f_291[0]) && __LIB_14__::func_9(iParam1->f_291[1])) && !__LIB_0__::func_27(iParam1->f_191, 16))
			{
				func_782(&(Local_14.f_85), 6);
			}
			if (__LIB_0__::func_27(iParam1->f_190, 131072))
			{
				if (!func_1258(&(iParam1->f_319[0])))
				{
					if (!__LIB_0__::func_491(iParam1->f_291[1], 167901368) && !__LIB_8__::func_684(func_1091(20)))
					{
						TASK::CLEAR_PED_TASKS(iParam1->f_291[1], true, false);
						TASK::TASK_SHOOT_AT_ENTITY(iParam1->f_291[1], Global_35, -1, joaat("FIRING_PATTERN_BURST_FIRE"), 0);
					}
					return;
				}
				else
				{
					__LIB_1__::func_681(&(iParam1->f_190), 131072);
					PHYSICS::_0xEAF529446488EB18(Local_14.f_319[0]);
					if (!PED::IS_PED_DEAD_OR_DYING(iParam1->f_291[0], true))
					{
						TASK::CLEAR_PED_TASKS(iParam1->f_291[0], true, false);
					}
					if (!PED::IS_PED_DEAD_OR_DYING(iParam1->f_291[1], true))
					{
						TASK::CLEAR_PED_TASKS(iParam1->f_291[1], true, false);
					}
				}
			}
			else
			{
				func_1777(iParam1);
			}
			break;
	}
}

void func_1257(var uParam0)
{
	var uVar0[8];
	var uVar9[40];
	int iVar50;
	int iVar51;
	int iVar52;
	if (__LIB_0__::func_27(uParam0->f_190, 67108864))
	{
		return;
	}
	uVar0[0] = Global_35;
	uVar0[1] = uParam0->f_111;
	uVar0[2] = uParam0->f_291[0];
	uVar0[3] = uParam0->f_291[1];
	uVar0[4] = uParam0->f_291[2];
	uVar0[5] = uParam0->f_291[3];
	uVar0[6] = uParam0->f_296[0];
	uVar0[7] = uParam0->f_296[1];
	iVar52 = __LIB_18__::func_749(&uVar9, &uVar0, 40, func_317(11), 75f, 0, 0, 0, -1, 1, 0, -1082130432 /* Float: -1f */, 0, 0);
	iVar50 = 0;
	while (iVar50 < iVar52)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(uVar9[iVar50]) && !ENTITY::IS_ENTITY_DEAD(uVar9[iVar50])) && ENTITY::GET_ENTITY_MODEL(uVar9[iVar50]) == joaat("S_M_M_CORNWALLGUARD_01"))
		{
			uParam0->f_299[iVar51] = uVar9[iVar50];
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uVar9[iVar50], false);
			PED::SET_PED_COMBAT_MOVEMENT(uVar9[iVar50], 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(uVar9[iVar50], 5, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(uVar9[iVar50], 58, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(uVar9[iVar50], 58, false);
			PED::SET_PED_CONFIG_FLAG(uVar9[iVar50], 81, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uVar9[iVar50], joaat("REL_PLAYER_ENEMY"));
			__LIB_4__::func_256(uVar9[iVar50]);
			__LIB_1__::func_863(uVar9[iVar50], joaat("BLIP_STYLE_ENEMY"), 1, 1);
			TASK::TASK_WANDER_IN_AREA(uVar9[iVar50], func_317(11), 30f, 3f, 6f, 1);
			iVar51++;
		}
		iVar50++;
	}
	__LIB_1__::func_683(&(uParam0->f_190), 67108864);
}

bool func_1258(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam0, -1);
		if (iVar1 == 0)
		{
			ENTITY::SET_ENTITY_VELOCITY(*uParam0, 0f, 0f, 0f);
			VEHICLE::BRING_VEHICLE_TO_HALT(*uParam0, 0.1f, 1, false);
			return true;
		}
		else if (TASK::GET_SCRIPT_TASK_STATUS(iVar1, -2118855366, true) != 1)
		{
			if (__LIB_0__::func_272(iVar1, 0) && iVar1 != Global_35)
			{
				TASK::CLEAR_PED_TASKS(iVar1, true, false);
			}
			TASK::TASK_VEHICLE_TEMP_ACTION(iVar1, *uParam0, 24, 2000);
		}
		if (ENTITY::GET_ENTITY_SPEED(*uParam0) <= 0.5f)
		{
			func_1779(uParam0);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_1259(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_299)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_299[iVar0]))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_299[iVar0], false);
			PED::SET_PED_COMBAT_MOVEMENT(uParam0->f_299[iVar0], 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_299[iVar0], 5, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_299[iVar0], 58, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_299[iVar0], 81, true);
			ENTITY::_0x18FF3110CF47115D(uParam0->f_299[iVar0], 7, 0);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam0->f_299[iVar0], 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_299[iVar0], 111, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_299[iVar0], 30, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_299[iVar0], 0, true);
			PED::SET_PED_COMBAT_RANGE(uParam0->f_299[iVar0], 3);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_299[iVar0], 186, false);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_299[iVar0], 268, true);
			PED::SET_PED_FLEE_ATTRIBUTES(uParam0->f_299[iVar0], 512, true);
			__LIB_4__::func_256(uParam0->f_299[iVar0]);
			TASK::TASK_WANDER_IN_AREA(uParam0->f_299[iVar0], func_317(11), 30f, 3f, 6f, 1);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_291[iVar0]) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_291[iVar0]))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_291[iVar0], false);
			PED::SET_PED_COMBAT_MOVEMENT(uParam0->f_291[iVar0], 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_291[iVar0], 5, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_291[iVar0], 58, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_291[iVar0], 81, true);
			ENTITY::_0x18FF3110CF47115D(uParam0->f_291[iVar0], 7, 0);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam0->f_291[iVar0], 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_291[iVar0], 111, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_291[iVar0], 30, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_291[iVar0], 0, true);
			PED::SET_PED_COMBAT_RANGE(uParam0->f_291[iVar0], 3);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_291[iVar0], 186, false);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_291[iVar0], 268, true);
			PED::SET_PED_FLEE_ATTRIBUTES(uParam0->f_291[iVar0], 512, true);
			__LIB_4__::func_256(uParam0->f_291[iVar0]);
			if (iVar0 == 0)
			{
				if (MAP::DOES_BLIP_EXIST(uParam0->f_310[2]))
				{
					MAP::REMOVE_BLIP(&(uParam0->f_310[2]));
				}
			}
			else if (iVar0 == 1)
			{
				if (MAP::DOES_BLIP_EXIST(uParam0->f_310[3]))
				{
					MAP::REMOVE_BLIP(&(uParam0->f_310[3]));
				}
			}
			TASK::CLEAR_PED_TASKS(uParam0->f_291[iVar0], true, false);
			if (PED::_0x9D9473CB82D83A30(uParam0->f_291[iVar0], Global_35, 0) == 1 && __LIB_1__::func_205(Global_35, uParam0->f_326[6], 1, 0))
			{
				TASK::TASK_COMBAT_PED(uParam0->f_291[iVar0], Global_35, 0, 0);
			}
			else
			{
				TASK::CLEAR_SEQUENCE_TASK(&(uParam0->f_317));
				TASK::OPEN_SEQUENCE_TASK(&(uParam0->f_317));
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
				TASK::TASK_WANDER_IN_AREA(0, func_317(11), 30f, 3f, 6f, 1);
				__LIB_1__::func_474(uParam0->f_291[iVar0], &(uParam0->f_317), 0.1f, 0.5f, 1, 1);
			}
		}
		iVar0++;
	}
}

void func_1260(var uParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	if (__LIB_0__::func_163(uParam0->f_291[0], 1199744105))
	{
		fVar0 = func_652(uParam0->f_321);
		fVar1 = fVar0;
		fVar2 = __LIB_0__::func_665(Global_35, uParam0->f_319[0], 1, 1);
		fVar2 = __LIB_0__::func_251(fVar2, 0f, 20f);
		if (fVar2 <= 10f)
		{
			fVar4 = 1f;
		}
		else if (fVar2 > 20f)
		{
			fVar4 = 0.6f;
		}
		else
		{
			fVar3 = (fVar2 / 20f);
			fVar4 = (0.6f + ((1f - fVar3) * (1f - 0.6f)));
		}
		fVar1 = (fVar1 * fVar4);
		TASK::SET_DRIVE_TASK_MAX_CRUISE_SPEED(uParam0->f_291[0], fVar1);
	}
}

void func_1312(int iParam0)
{
	if (!__LIB_0__::func_52(iParam0))
	{
		return;
	}
	__LIB_0__::func_427(iParam0);
	func_1814(iParam0);
}

void func_1321(int iParam0)
{
	var uVar0;
	if ((iParam0 == joaat("PROVISION_TALISMAN_EAGLE_TALON") && !__LIB_0__::func_26()) || iParam0 != joaat("PROVISION_TALISMAN_EAGLE_TALON"))
	{
		if (__LIB_3__::func_757(Global_35, iParam0, &uVar0))
		{
			__LIB_17__::func_327(PLAYER::PLAYER_PED_ID(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
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

void func_1360(int iParam0)
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
			__LIB_17__::func_327(Global_35, iParam0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
		}
		func_1312(24);
		if (__LIB_0__::func_918(&iVar2, 0))
		{
			__LIB_1__::func_708(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_1361(int iParam0)
{
	if (__LIB_0__::func_192(iParam0, 943695443))
	{
		func_1863(0, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -2096528786))
	{
		func_1863(1, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -1094167013))
	{
		func_1863(2, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1936654645))
	{
		func_1863(3, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1306489306))
	{
		func_1863(4, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 435762317))
	{
		func_1863(5, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1259363210))
	{
		func_1863(6, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 881398259))
	{
		func_1863(7, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -541549214))
	{
		func_1863(8, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 130796156))
	{
		func_1863(-1, iParam0);
	}
}

void func_1374()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_1875(0);
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
	func_1875(1);
}

void func_1375()
{
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_822(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_1376()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_1878(0);
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
	func_1878(1);
}

void func_1377()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_1__::func_432(15000, 0, 0, 0, 1);
			func_1878(0);
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
	func_1878(1);
}

void func_1378()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_822(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_822(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_1381(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_1381(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
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

int func_1381(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			func_1381(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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

int func_1415(var uParam0, var uParam1, var uParam2, var uParam3)
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
	iVar11 = (func_1917(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_952(iVar11))
	{
		*uParam2 = (*uParam2 + iVar2);
		return 0;
	}
	if (!func_822(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*uParam2 = (*uParam2 + iVar2);
		return 0;
	}
	__LIB_1__::func_432(iVar11, 0, 0, 0, 1);
	*uParam3 = (*uParam3 + iVar11);
	*uParam1 = (*uParam1 + iVar2);
	return 1;
}

struct<12> func_1549(int iParam0)
{
	struct<12> Var0;
	switch (iParam0)
	{
		case 0:
			Var0.f_1 = joaat("VOLCYLINDER");
			Var0.f_2 = { 456.24f, 2237.452f, 254.027f };
			Var0.f_5 = { 0f, 0f, 0f };
			Var0.f_8 = { 55f, 55f, 20f };
			Var0.f_11 = "MNR1_WAPITI_CAMP";
			break;
		case 1:
			Var0.f_1 = joaat("VOLBOX");
			Var0.f_2 = { 615.0644f, 2147.62f, 224.7754f };
			Var0.f_5 = { 0f, 0f, 42.59441f };
			Var0.f_8 = { 6.286007f, 28.41161f, 6.227861f };
			Var0.f_11 = "MNR1_SEARCH_SUPPLY_WAGON";
			break;
		case 2:
			Var0.f_1 = joaat("VOLCYLINDER");
			Var0.f_2 = { 579.7685f, 1274.907f, 205.1775f };
			Var0.f_5 = { 0f, 0f, 0f };
			Var0.f_8 = { 8f, 8f, 10f };
			Var0.f_11 = "MNR1_CREATE_CONVOY";
			break;
		case 3:
			Var0.f_1 = joaat("VOLBOX");
			Var0.f_2 = { 491.4612f, 2222.624f, 246.1221f };
			Var0.f_5 = { 0f, 0f, -25.83043f };
			Var0.f_8 = { 10f, 15.04386f, 10f };
			Var0.f_11 = "MNR1_HITCHING_POST_BLOCKING";
			break;
		case 4:
			Var0.f_1 = joaat("VOLBOX");
			Var0.f_2 = { 75.72507f, 1099.296f, 204.9469f };
			Var0.f_5 = { 0f, 0f, 0f };
			Var0.f_8 = { 1.3f, 0.8f, 5f };
			Var0.f_11 = "MNR1_SEARCH_SUPPLY_WAGON";
			break;
		case 5:
			Var0.f_1 = joaat("VOLCYLINDER");
			Var0.f_2 = { 75.62507f, 1099.696f, 204.6469f };
			Var0.f_5 = { 0f, 0f, 0f };
			Var0.f_8 = { 4f, 4f, 15f };
			Var0.f_11 = "MNR1_DEFENSE_SUPPLY_WAGON";
			break;
		case 6:
			Var0.f_1 = joaat("VOLBOX");
			Var0.f_2 = { 75.62507f, 1099.696f, 204.6469f };
			Var0.f_5 = { 0f, 0f, 0f };
			Var0.f_8 = { 1.75f, 2.5f, 5f };
			Var0.f_11 = "MNR1_BACK_OF_SUPPLY_WAGON";
			break;
		case 7:
			Var0.f_1 = joaat("VOLBOX");
			Var0.f_2 = { 75.63507f, 1099.696f, 204.6469f };
			Var0.f_5 = { 0f, 0f, 0f };
			Var0.f_8 = { 6f, 8.86f, 6f };
			Var0.f_11 = "MNR1_JUMP_TO_WAGON";
			break;
		case 8:
			Var0.f_1 = joaat("VOLBOX");
			Var0.f_2 = { 75.63507f, 1094.696f, 204.6469f };
			Var0.f_5 = { 0f, 0f, 0f };
			Var0.f_8 = { 9f, 15f, 6f };
			Var0.f_11 = "MNR1_WAGON_FRONT_HOLDUP";
			break;
		case 9:
			Var0.f_1 = joaat("VOLBOX");
			Var0.f_2 = { 661.4412f, 1409.385f, 180.8455f };
			Var0.f_5 = { 0f, 0f, 0f };
			Var0.f_8 = { 5f, 5f, 5f };
			Var0.f_11 = "MNR1_ROAD_BLOCK_01";
			break;
		case 10:
			Var0.f_1 = joaat("VOLBOX");
			Var0.f_2 = { 443.1732f, 1198.818f, 177.4387f };
			Var0.f_5 = { 0f, 0f, 0f };
			Var0.f_8 = { 5f, 5f, 5f };
			Var0.f_11 = "MNR1_ROAD_BLOCK_02";
			break;
		case 11:
			Var0.f_1 = joaat("VOLCYLINDER");
			Var0.f_2 = { 0f, 0f, 0f };
			Var0.f_5 = { 0f, 0f, 0f };
			Var0.f_8 = { 15f, 15f, 10f };
			Var0.f_11 = "MNR1_15_AROUND_WAGON";
			break;
		case 12:
			Var0.f_1 = joaat("VOLBOX");
			Var0.f_2 = { 75.63507f, 1095.696f, 204.6469f };
			Var0.f_5 = { 0f, 0f, 0f };
			Var0.f_8 = { 9f, 4.017384f, 6f };
			Var0.f_11 = "MNR1_VOLUME_WAGON_PLAYER_AUDIBLE";
			break;
		case 13:
			Var0.f_1 = joaat("VOLBOX");
			Var0.f_2 = { 512.9517f, 694.9431f, 115.9405f };
			Var0.f_5 = { 0f, 0f, -8.641496f };
			Var0.f_8 = { 24.96774f, 6.904785f, 3.14512f };
			Var0.f_11 = "MNR1_VOLUME_CORWNALL_CONVOY_ARRIVAL";
			break;
		case 14:
			Var0.f_1 = joaat("VOLBOX");
			Var0.f_2 = { 477.2625f, 2229.201f, 248.0322f };
			Var0.f_5 = { 0f, 0f, -8.000254f };
			Var0.f_8 = { 25.28731f, 7.985964f, 4.04024f };
			Var0.f_11 = "MNR1_VOLUME_CLEAR_VEHICLES_FOR_INTRO";
			break;
	}
	return Var0;
}

void func_1594(int iParam0, int* iParam1, var uParam2, bool bParam3)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	if (ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		return;
	}
	__LIB_9__::func_912(iParam0, iParam1);
	bVar0 = __LIB_5__::func_439(bParam3 >= 0f, bParam3, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*iParam0, true, false)));
	if (bVar0 <= iParam1->f_26 || MISC::IS_BIT_SET(iParam1->f_21, 20))
	{
		__LIB_12__::func_951(iParam1, uParam2);
		__LIB_13__::func_463(iParam1);
		__LIB_13__::func_464(iParam1);
		if (!MISC::IS_BIT_SET(*iParam1, 17))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				if (!PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), iParam1->f_27);
				}
				else if (!ENTITY::IS_ENTITY_DEAD(PED::GET_MOUNT(PLAYER::PLAYER_PED_ID())))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(PED::GET_MOUNT(PLAYER::PLAYER_PED_ID()), iParam1->f_27);
				}
			}
		}
		__LIB_1__::func_538(0);
		POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::GET_PLAYER_INDEX());
		PED::SET_PED_RESET_FLAG(Global_35, 25, true);
		PED::SET_PED_RESET_FLAG(Global_35, 134, true);
		POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
		if (!MISC::IS_BIT_SET(iParam1->f_21, 2))
		{
			if (!VOLUME::_DOES_VOLUME_EXIST(iParam1->f_35))
			{
				iParam1->f_35 = VOLUME::_CREATE_VOLUME_CYLINDER(ENTITY::GET_ENTITY_COORDS(*iParam0, true, false), 0f, 0f, 0f, iParam1->f_26, iParam1->f_26, 20f);
			}
			else
			{
				__LIB_3__::func_58(iParam1->f_35, 0, 0);
				MISC::SET_BIT(&(iParam1->f_21), 2);
			}
		}
		if ((PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && MISC::IS_BIT_SET(*iParam1, 16)) || (PED::IS_PED_ON_MOUNT(Global_35) && MISC::IS_BIT_SET(*iParam1, 15)))
		{
			iVar1 = 0;
			if (__LIB_3__::func_547(Global_35, *iParam0, 1f) == 3)
			{
				iVar1 = 131072;
			}
			else
			{
				iVar1 = 262144;
			}
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				iParam1->f_28 = PED::GET_MOUNT(Global_35);
			}
			bVar2 = (((PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && MISC::IS_BIT_SET(*iParam1, 16)) || (PED::IS_PED_ON_MOUNT(Global_35) && MISC::IS_BIT_SET(*iParam1, 15))) && !STREAMING::_0x99F92061EFE908BA());
			bVar3 = PED::IS_PED_IN_ANY_VEHICLE(Global_35, false);
			__LIB_1__::func_448(Global_35, ENTITY::GET_ENTITY_COORDS(*iParam0, true, false), bVar2, iParam1->f_30, iParam1->f_31, iParam1->f_32, __LIB_5__::func_439(bVar3, iParam1->f_33, iParam1->f_34), 0, 1, 0, iVar1);
		}
		else if (((((MISC::IS_BIT_SET(*iParam1, 15) && !PED::IS_PED_ON_MOUNT(Global_35)) && __LIB_0__::func_272(iParam1->f_28, 0)) && __LIB_0__::func_48(Global_35, iParam1->f_28, (iParam1->f_26 + 1.75f), 1)) && !__LIB_0__::func_163(iParam1->f_28, 518218985)) && !__LIB_0__::func_163(iParam1->f_28, 242628503))
		{
			TASK::CLEAR_PED_TASKS(iParam1->f_28, true, false);
			TASK::TASK_SMART_FLEE_COORD(iParam1->f_28, Global_36, (iParam1->f_26 + 1.75f), -1, 256, 0.101f);
			iParam1->f_28 = 0;
		}
	}
}

void func_1650()
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
	iVar0 = func_2072(6291456, 0);
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

void func_1658(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_1658(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_1658(iVar2, vParam1, fParam4, iParam5, iParam6);
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

bool func_1743(char* sParam0)
{
	return AUDIO::_0xD0730C1FA40348D9(sParam0);
}

char* func_1744(int iParam0)
{
	return iParam0->f_94;
}

int func_1750(int iParam0)
{
	bool bVar0;
	bVar0 = (iParam0->f_99 >= 2 || iParam0->f_96 >= 3);
	if (!__LIB_0__::func_27(iParam0->f_190, 16384))
	{
		if (bVar0 == 1)
		{
			iParam0->f_322++;
			__LIB_1__::func_683(&(iParam0->f_190), 16384);
			return 1;
		}
	}
	else if (bVar0 == 0)
	{
		__LIB_1__::func_681(&(iParam0->f_190), 16384);
	}
	return 0;
}

bool func_1757(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 4:
			break;
		case 2:
			return true;
		case 16:
			return true;
		case 8192:
			return true;
		case 8:
			if (bParam1)
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_1758(int iParam0, float fParam1)
{
	vector3 vVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	if (MISC::IS_BULLET_IN_AREA(vVar0, fParam1, true))
	{
		return true;
	}
	return false;
}

bool func_1759(var uParam0)
{
	float fVar0;
	float fVar1;
	fVar0 = ENTITY::_0xDFC2B226D56D85F6(Global_35, uParam0->f_319[0]);
	if (__LIB_0__::func_71(Global_35))
	{
		fVar1 = ENTITY::_0xDFC2B226D56D85F6(PED::GET_MOUNT(Global_35), uParam0->f_319[0]);
		if (fVar1 > 250f)
		{
			return true;
		}
	}
	else if (fVar0 > 250f && !__LIB_0__::func_393(Global_35, uParam0->f_326[6], 0, 1))
	{
		return true;
	}
	return false;
}

bool func_1760(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = __LIB_9__::func_481();
	if (iVar0 <= 0)
	{
		return false;
	}
	iVar1 = (iVar0 + iParam1);
	iVar2 = MISC::GET_GAME_TIMER();
	if (iVar1 < iVar2 && (iVar1 + iParam0) > iVar2)
	{
		return true;
	}
	return false;
}

int func_1762(var uParam0)
{
	bool bVar0;
	if (!__LIB_0__::func_899(&(uParam0->f_352)))
	{
		__LIB_4__::func_89(&(uParam0->f_352), 0);
	}
	if (!PED::IS_PED_ON_MOUNT(Global_35) || __LIB_9__::func_178(&(uParam0->f_352)) > 0.3f)
	{
		uParam0->f_350 = 0;
		uParam0->f_351 = 0;
		__LIB_2__::func_259(&(uParam0->f_352));
		return 0;
	}
	bVar0 = PED::IS_PED_JUMPING(PED::GET_MOUNT(Global_35));
	if (uParam0->f_350 && !bVar0)
	{
		uParam0->f_351 = 1;
	}
	else if (uParam0->f_351)
	{
		uParam0->f_351 = 0;
	}
	uParam0->f_350 = bVar0;
	__LIB_2__::func_259(&(uParam0->f_352));
	if (uParam0->f_351)
	{
		return 1;
	}
	return 0;
}

void func_1777(int iParam0)
{
	int iVar0;
	if (PED::IS_PED_DEAD_OR_DYING(iParam0->f_291[0], true))
	{
		iVar0 = 0;
	}
	else if (PED::IS_PED_DEAD_OR_DYING(iParam0->f_291[1], true))
	{
		iVar0 = 1;
	}
	else if (__LIB_1__::func_205(Global_35, iParam0->f_326[6], 1, 0))
	{
		iVar0 = 2;
	}
	else if (!__LIB_0__::func_48(Global_35, iParam0->f_319[0], 18f, 1) && __LIB_11__::func_29(iParam0->f_319[0]))
	{
		iVar0 = 3;
	}
	else
	{
		iVar0 = 4;
	}
	if (iParam0->f_97 != iVar0)
	{
		__LIB_1__::func_683(&(iParam0->f_190), 4096);
		iParam0->f_97 = iVar0;
	}
	switch (iParam0->f_97)
	{
		case 0:
			if (__LIB_0__::func_27(iParam0->f_190, 4096))
			{
				__LIB_1__::func_681(&(iParam0->f_190), 4096);
				TASK::CLEAR_PED_TASKS(iParam0->f_291[1], true, false);
			}
			if (!__LIB_0__::func_27(iParam0->f_191, 64))
			{
				PED::REMOVE_PED_DEFENSIVE_AREA(iParam0->f_291[1], false);
				PED::SET_PED_COMBAT_MOVEMENT(iParam0->f_291[1], 2);
				PED::SET_PED_COMBAT_ATTRIBUTES(iParam0->f_291[1], 50, true);
				PED::SET_PED_CONFIG_FLAG(iParam0->f_291[1], 112, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(iParam0->f_291[1], 0, false);
				__LIB_1__::func_683(&(iParam0->f_191), 64);
			}
			if (!__LIB_0__::func_491(iParam0->f_291[1], 242628503))
			{
				TASK::CLEAR_SEQUENCE_TASK(&(iParam0->f_317));
				TASK::OPEN_SEQUENCE_TASK(&(iParam0->f_317));
				TASK::CLEAR_PED_TASKS(0, true, false);
				TASK::TASK_SHOOT_AT_ENTITY(0, Global_35, 5000, joaat("FIRING_PATTERN_BURST_FIRE"), 0);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 268435456);
				TASK::TASK_COMBAT_PED(0, Global_35, 16777216, 0);
				__LIB_1__::func_474(iParam0->f_291[1], &(iParam0->f_317), 0, 0, 1, 1);
				PED::_SET_PED_BLACKBOARD_FLOAT(iParam0->f_291[1], "Cautious", 1f, -1);
			}
			break;
		case 1:
			if (__LIB_0__::func_27(iParam0->f_190, 4096))
			{
				__LIB_1__::func_681(&(iParam0->f_190), 4096);
				TASK::CLEAR_PED_TASKS(iParam0->f_291[0], true, false);
			}
			if (ENTITY::IS_ENTITY_DEAD(iParam0->f_319[0]) || !__LIB_11__::func_29(iParam0->f_319[0]))
			{
				if (!__LIB_0__::func_491(iParam0->f_291[0], 780511057))
				{
					TASK::TASK_COMBAT_PED(iParam0->f_291[0], Global_35, 16777216, 0);
				}
			}
			else if ((iParam0->f_323 >= 2 || __LIB_0__::func_393(Global_35, iParam0->f_326[6], 0, 1)) || __LIB_2__::func_343(Global_35, iParam0->f_319[0], 1))
			{
				if (!__LIB_0__::func_491(iParam0->f_291[0], 242628503))
				{
					TASK::CLEAR_SEQUENCE_TASK(&(iParam0->f_317));
					TASK::OPEN_SEQUENCE_TASK(&(iParam0->f_317));
					TASK::CLEAR_PED_TASKS(0, true, false);
					if (PED::IS_PED_IN_ANY_VEHICLE(iParam0->f_291[0], true))
					{
						TASK::TASK_SHOOT_AT_ENTITY(0, Global_35, MISC::GET_RANDOM_INT_IN_RANGE(2500, 5000), joaat("FIRING_PATTERN_BURST_FIRE"), 0);
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 268435456);
					}
					if (__LIB_0__::func_393(Global_35, iParam0->f_326[6], 0, 1) || __LIB_2__::func_343(Global_35, iParam0->f_319[0], 1))
					{
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, func_2117(iParam0), Global_35, 2f, 0, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), -1, 0);
					}
					TASK::TASK_COMBAT_PED(0, Global_35, 16777216, 0);
					__LIB_1__::func_474(iParam0->f_291[0], &(iParam0->f_317), 0, 0, 1, 1);
				}
			}
			else if (!__LIB_0__::func_491(iParam0->f_291[0], 1199744105))
			{
				if (!__LIB_0__::func_491(iParam0->f_291[0], -1794415470) && !__LIB_2__::func_343(iParam0->f_291[0], iParam0->f_319[0], 0))
				{
					TASK::TASK_ENTER_VEHICLE(iParam0->f_291[0], iParam0->f_319[0], -1, -1, 2f, 268435457, 0);
				}
				else if (__LIB_2__::func_343(iParam0->f_291[0], iParam0->f_319[0], 0) && VEHICLE::_GET_CURRENT_VEHICLE_DRIVER(iParam0->f_319[0]) == iParam0->f_291[0])
				{
					if (VEHICLE::_0x404527BC03DA0E6C(iParam0->f_319[0]))
					{
						VEHICLE::_0x7C06330BFDDA182E(iParam0->f_319[0]);
					}
					WEAPON::SET_CURRENT_PED_WEAPON(iParam0->f_291[0], joaat("WEAPON_UNARMED"), false, 0, false, false);
					PHYSICS::_0x31160EC47E7C9549(Local_14.f_319[0], 1);
					func_325(iParam0, 3);
					func_326(0, 1);
					PED::_SET_PED_BLACKBOARD_FLOAT(iParam0->f_291[0], "Cautious", 1f, -1);
				}
			}
			break;
		case 2:
			if (__LIB_0__::func_27(iParam0->f_190, 4096))
			{
				__LIB_1__::func_681(&(iParam0->f_190), 4096);
				TASK::CLEAR_PED_TASKS(iParam0->f_291[0], true, false);
				TASK::CLEAR_PED_TASKS(iParam0->f_291[1], true, false);
			}
			if (__LIB_2__::func_343(iParam0->f_291[1], iParam0->f_319[0], 0))
			{
				if (!__LIB_0__::func_491(iParam0->f_291[1], 167901368))
				{
					TASK::CLEAR_PED_TASKS(iParam0->f_291[1], true, false);
					TASK::TASK_SHOOT_AT_ENTITY(iParam0->f_291[1], Global_35, -1, joaat("FIRING_PATTERN_BURST_FIRE"), 0);
				}
			}
			else if (!__LIB_0__::func_491(iParam0->f_291[1], 242628503))
			{
				TASK::CLEAR_SEQUENCE_TASK(&(iParam0->f_317));
				TASK::OPEN_SEQUENCE_TASK(&(iParam0->f_317));
				TASK::CLEAR_PED_TASKS(0, true, false);
				TASK::TASK_ENTER_VEHICLE(0, iParam0->f_319[0], -1, 0, 2f, 268435457, 0);
				TASK::TASK_SHOOT_AT_ENTITY(0, Global_35, -1, joaat("FIRING_PATTERN_BURST_FIRE"), 0);
				__LIB_1__::func_474(iParam0->f_291[1], &(iParam0->f_317), 0, 0, 1, 1);
			}
			if (!__LIB_0__::func_491(iParam0->f_291[0], 242628503))
			{
				TASK::CLEAR_SEQUENCE_TASK(&(iParam0->f_317));
				TASK::OPEN_SEQUENCE_TASK(&(iParam0->f_317));
				TASK::CLEAR_PED_TASKS(0, true, false);
				if (PED::IS_PED_IN_ANY_VEHICLE(iParam0->f_291[0], true))
				{
					TASK::TASK_SHOOT_AT_ENTITY(0, Global_35, MISC::GET_RANDOM_INT_IN_RANGE(1500, 2500), joaat("FIRING_PATTERN_BURST_FIRE"), 0);
					TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 268435456);
				}
				TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, func_2117(iParam0), Global_35, 2f, 0, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), -1, 0);
				TASK::TASK_COMBAT_PED(0, Global_35, 16777216, 0);
				__LIB_1__::func_474(iParam0->f_291[0], &(iParam0->f_317), 0, 0, 1, 1);
			}
			break;
		case 3:
			if (__LIB_0__::func_27(iParam0->f_190, 4096))
			{
				__LIB_1__::func_681(&(iParam0->f_190), 4096);
				TASK::CLEAR_PED_TASKS(iParam0->f_291[0], true, false);
				TASK::CLEAR_PED_TASKS(iParam0->f_291[1], true, false);
			}
			if (!__LIB_0__::func_491(iParam0->f_291[0], 1199744105))
			{
				func_326(0, 0);
			}
			if (!__LIB_0__::func_491(iParam0->f_291[1], 167901368))
			{
				PED::SET_PED_COMBAT_ATTRIBUTES(iParam0->f_291[1], 30, false);
				TASK::TASK_SHOOT_AT_ENTITY(iParam0->f_291[1], Global_35, -1, joaat("FIRING_PATTERN_BURST_FIRE"), 0);
			}
			break;
		case 4:
			if (__LIB_0__::func_27(iParam0->f_190, 4096))
			{
				__LIB_1__::func_681(&(iParam0->f_190), 4096);
				TASK::CLEAR_PED_TASKS(iParam0->f_291[0], true, false);
				TASK::CLEAR_PED_TASKS(iParam0->f_291[1], true, false);
			}
			if (!__LIB_0__::func_491(iParam0->f_291[0], 242628503))
			{
				TASK::CLEAR_SEQUENCE_TASK(&(iParam0->f_317));
				TASK::OPEN_SEQUENCE_TASK(&(iParam0->f_317));
				TASK::CLEAR_PED_TASKS(0, true, false);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 268435456);
				TASK::TASK_SHOOT_AT_ENTITY(0, Global_35, 5000, joaat("FIRING_PATTERN_BURST_FIRE"), 0);
				TASK::TASK_COMBAT_PED(0, Global_35, 16777216, 0);
				__LIB_1__::func_474(iParam0->f_291[0], &(iParam0->f_317), 0, 0, 1, 1);
			}
			if (!__LIB_0__::func_491(iParam0->f_291[1], 242628503))
			{
				TASK::CLEAR_SEQUENCE_TASK(&(iParam0->f_317));
				TASK::OPEN_SEQUENCE_TASK(&(iParam0->f_317));
				TASK::CLEAR_PED_TASKS(0, true, false);
				TASK::TASK_SHOOT_AT_ENTITY(0, Global_35, MISC::GET_RANDOM_INT_IN_RANGE(1500, 2500), joaat("FIRING_PATTERN_BURST_FIRE"), 0);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 268435456);
				TASK::TASK_COMBAT_PED(0, Global_35, 16777216, 0);
				__LIB_1__::func_474(iParam0->f_291[1], &(iParam0->f_317), 0, 0, 1, 1);
			}
			break;
	}
}

void func_1779(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!__LIB_4__::func_257(*uParam0))
	{
		ENTITY::SET_ENTITY_VELOCITY(*uParam0, 0f, 0f, 0f);
		VEHICLE::BRING_VEHICLE_TO_HALT(*uParam0, 0.1f, 1, false);
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam0, -1);
		if (__LIB_0__::func_272(iVar0, 0) && iVar0 != Global_35)
		{
			TASK::CLEAR_PED_TASKS(iVar0, true, false);
		}
		iVar1 = 0;
		while (iVar1 < 6)
		{
			iVar2 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(*uParam0, iVar1);
			if (__LIB_0__::func_272(iVar2, 0))
			{
				TASK::CLEAR_PED_TASKS(iVar2, true, false);
				TASK::TASK_STAND_STILL(iVar2, -1);
			}
			iVar1++;
		}
	}
}

void func_1814(int iParam0)
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
					__LIB_17__::func_327(Global_35, iVar0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
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
			__LIB_8__::func_368();
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

void func_1863(int iParam0, int iParam1)
{
	if (__LIB_0__::func_192(iParam1, 130796156))
	{
		func_2184(iParam1, 0);
	}
	else if (__LIB_0__::func_192(iParam1, 930141731))
	{
		func_2184(iParam1, 1);
		__LIB_1__::func_856(iParam0);
	}
}

void func_1875(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (bParam0)
	{
		func_822(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_822(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_822(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_2190(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_825(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_1381(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_2195(Var0);
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

void func_1878(bool bParam0)
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
		func_822(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_822(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_822(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_822(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_822(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_822(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_822(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_822(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_822(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_822(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_822(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_1381(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_1381(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_1381(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_1381(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_1381(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_1381(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_1381(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_1381(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_1381(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_1381(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_1381(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
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

int func_1917(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
							iVar49 = (iVar49 + func_1917(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1917(iVar63, -915411861, 1, 0, 0));
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

int func_2072(int iParam0, int iParam1)
{
	var uVar0;
	return func_2289(&uVar0, iParam0, iParam1);
}

Vector3 func_2117(int iParam0)
{
	float fVar0;
	float fVar1;
	fVar1 = ENTITY::GET_ENTITY_SPEED(iParam0->f_319[0]);
	if (fVar1 >= func_652(2))
	{
		fVar0 = 1f;
	}
	else if (fVar1 >= func_652(0))
	{
		fVar0 = 3f;
	}
	else
	{
		fVar0 = 4f;
	}
	return ENTITY::GET_ENTITY_COORDS(iParam0->f_319[0], true, false) - Vector(fVar0, fVar0, fVar0) * __LIB_1__::func_660(ENTITY::GET_ENTITY_HEADING(iParam0->f_319[0]));
}

void func_2184(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = __LIB_1__::func_134(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_1312(50);
			}
			else
			{
				func_1312(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_1312(51);
			}
			else
			{
				func_1312(49);
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
			func_1312(24);
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

void func_2190(int iParam0)
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
	func_1381(iParam0, 1, 1, -142743235, 1);
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
		func_1381(uVar18[iVar36], 1, 1, -142743235, 1);
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
	__LIB_17__::func_326(&(Global_1946804.f_1616), iVar38, &uVar39, 1, 0, 0, 0);
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
					__LIB_17__::func_326(&(Global_1946804.f_1616), joaat("CLOTHING_GUNSLINGER_OUTFIT"), &uVar39, 0, 1, 0, -2125499975);
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
					__LIB_17__::func_326(&(Global_1946804.f_1616), -361635024 /* GXTEntry: "The Cowboy" */, &uVar39, 0, 1, 0, 1160113249);
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
					__LIB_19__::func_555(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), Global_1905941, 1, 0, 0);
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
	__LIB_17__::func_326(&(Global_1946804.f_1616), joaat("CLOTHING_GUNSLINGER_OUTFIT"), &uVar39, 0, 1, 0, -2125499975);
	__LIB_17__::func_326(&(Global_1946804.f_1616), 2020890174, &uVar39, 1, 0, 0, -2125499975);
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

void func_2195(struct<6> Param0)
{
	if (!func_2360(Param0.f_4, 1))
	{
	}
	if (!func_2360(Param0, 1))
	{
	}
	if (!func_2360(Param0.f_2, 1))
	{
	}
	if (!func_2360(Param0.f_5, 1))
	{
	}
	if (!func_2360(Param0.f_3, 1))
	{
	}
	if (!func_2360(Param0.f_1, 1))
	{
	}
}

int func_2289(var uParam0, int iParam1, int iParam2)
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
		return func_2289(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

bool func_2360(int iParam0, int iParam1)
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
				if (func_2360(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_2360(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_2360(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_2360(iVar21, 1))
				{
				}
			}
		}
		__LIB_1__::func_712();
		return true;
	}
	return false;
}

